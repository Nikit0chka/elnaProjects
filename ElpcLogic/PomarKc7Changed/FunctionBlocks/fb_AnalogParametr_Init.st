FUNCTION_BLOCK fb_AnalogParametr_Init

VAR_INPUT
	data_Ini : BOOL; (*Флаг необходимости инициализации параметров.*)
	currentValue : LREAL;
	minVal : LREAL;
	maxVal : LREAL;
	maxStep : LREAL;
	minVal_ISVALIDREF : BOOL;
	maxVal_ISVALIDREF : BOOL;
	maxStep_ISVALIDREF : BOOL;
END_VAR

VAR_IN_OUT
	strAP : struct_AnalogParametr;
END_VAR

VAR_OUTPUT
	Init : BOOL          := FALSE; (*Флаг успешно выполненной инициализации.*)
END_VAR

(*****            Функциональный блок переинициализации Аналогового параметра.            *****)
     Init := false;

    
    IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
        strAP.currentValue          := currentValue;
        strAP.minVal                := minVal;
        strAP.maxVal                := maxVal;
        strAP.maxStep               := maxStep;
        strAP.minVal_ISVALIDREF     := minVal_ISVALIDREF;
        strAP.maxVal_ISVALIDREF     := maxVal_ISVALIDREF;
        strAP.maxStep_ISVALIDREF    := maxStep_ISVALIDREF;
        
        data_Ini:=false;
        Init := TRUE;
     END_IF; 
     IF Init THEN    
        currentValue:= 0.0;
        minVal:= 0.0;
        maxVal:= 0.0;
        maxStep:= 0.0;
        minVal_ISVALIDREF:= false;
        maxVal_ISVALIDREF:= false;
        maxStep_ISVALIDREF:= false;
     END_IF;
 

