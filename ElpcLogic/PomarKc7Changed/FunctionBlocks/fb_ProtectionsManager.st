FUNCTION_BLOCK fb_ProtectionsManager

VAR
	cmd : BYTE;
END_VAR

VAR_IN_OUT
	str_PM : struct_ProtectionsManager;
END_VAR

VAR
	lastCmd : BYTE;
	autoRunPriznak : BOOL;
	onInit : BOOL;
END_VAR

VAR_EXTERNAL
	protections : ProtectionsConfig;
END_VAR

VAR
	timerUnBlock : TON;
	timerAutoRun : TON;
	UnBlockPriznak : BOOL;
END_VAR





IF NOT onInit THEN
    
    autoRunProtections(protections);     
onInit:=TRUE;
END_IF;

str_PM.protectionInRemont:=anyProtectioninRemont(protections);

cmd := str_PM.inCommand;
          
IF cmd <> 0 AND lastCmd <> cmd then
              UnBlockPriznak:=TRUE;
	CASE BYTE_TO_INT(cmd) OF
          
		(*RestartAllSignaling*) 1: 	ResetAllSignaling(protections);
				          autoRunPriznak:=TRUE;
				
	        (*RestartAllProtections*) 2: 	ResetAllProtections(protections);
                                                  autoRunPriznak:=TRUE;
                                                  
                      (*CheckProtections*)  3: 	RunAllProtections(protections);
                                                 
	         (*ResetAllProtections*)  4: 	ResetAllProtections(protections);
                   		
	END_CASE;			
	
END_IF;
lastCmd := cmd;
timerUnBlock(IN:=UnBlockPriznak, PT:=T#1S);
timerAutoRun(IN:=autoRunPriznak, PT:=T#500MS);

IF timerAutoRun.Q THEN autoRunProtections(protections);
END_IF;

IF timerUnBlock.Q THEN
lastCmd:= 0;
str_PM.inCommand:=0;
autoRunPriznak:=FALSE;
UnBlockPriznak:=FALSE;
END_IF;
