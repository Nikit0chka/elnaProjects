TYPE
struct_AnalogParametr : STRUCT 
	inCommand : WORD;
	inCommand_Alg : WORD;
	inCommand_ARM : WORD;
	status : DWORD;
	newValue : LREAL;
	currentValue : LREAL;
	minVal : LREAL;
	maxVal : LREAL;
	maxStep : LREAL;
	minVal_ISVALIDREF : BOOL;
	maxVal_ISVALIDREF : BOOL;
	maxStep_ISVALIDREF : BOOL;
	inOpcCommandsDisabled : BOOL;
	Value : LREAL;
	isValidValue : BOOL;
	OpcCommandsDisabled : BOOL;
END_STRUCT;
END_TYPE
