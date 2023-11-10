FUNCTION_BLOCK fb_DiscretParametr_Init

VAR_INPUT
	data_Ini : BOOL; (*Флаг необходимости инициализации параметров.*)
	currentValue : UINT;
END_VAR

VAR_IN_OUT
	strDp : struct_DiscretParametr;
END_VAR

VAR_OUTPUT
	Init : BOOL   := FALSE; (*Флаг успешно выполненной инициализации.*)
END_VAR





(*****            Функциональный блок переинициализации дискретного параметра.          *****)

 Init := FALSE;


    IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
        strDp.currentValue       := currentValue;
        data_Ini:=FALSE;
        Init := TRUE;
    END_IF;
IF Init THEN 
currentValue:=0;
END_IF;