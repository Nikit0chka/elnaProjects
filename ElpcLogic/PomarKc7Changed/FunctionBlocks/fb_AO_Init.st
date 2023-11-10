FUNCTION_BLOCK fb_AO_Init

VAR_INPUT
	data_Ini : BOOL; (*Флаг необходимости инициализации параметров.*)
	outLL : LREAL   := 4000.0;
	outHL : LREAL   := 20000.0;
	newLL : LREAL;
	newHL : LREAL;
	newLL_ISVALIDREF : BOOL;
	newHL_ISVALIDREF : BOOL;
END_VAR

VAR_IN_OUT
	strAO : struct_AO; (*Дескриптор AI-канала.*)
END_VAR

VAR_OUTPUT
	Init : BOOL   := FALSE; (*Флаг успешно выполненной инициализации.*)
END_VAR





(*****            Функциональный блок переинициализации структуры-дескриптора канала аналогового ввода.            *****)

 Init := FALSE;
    
    IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
        strAO.outLL                := outLL;
        strAO.outHL                := outHL;
        strAO.newLL                := newLL;
        strAO.newHL                := newHL;
        strAO.newLL_ISVALIDREF     := newLL_ISVALIDREF;
        strAO.newHL_ISVALIDREF     := newHL_ISVALIDREF;
        data_Ini:=FALSE;    
        Init := TRUE;
    END_IF;
 IF Init THEN
       (* outLL:=0.0;*)
       (* outHL:=0.0;*)
        newLL:=0.0;
        newHL:=0.0;
        newLL_ISVALIDREF:= FALSE;
        newHL_ISVALIDREF:= FALSE;
 END_IF;