TYPE
struct_AO : STRUCT (*Дескриптор канала аналогового вывода*)
	nValue : LREAL;
	blConnect : BOOL;
	outLL : LREAL;
	outHL : LREAL;
	newLL : LREAL;
	newHL : LREAL;
	newLL_ISVALIDREF : BOOL;
	newHL_ISVALIDREF : BOOL;
	inCommand : WORD;
	Value : LREAL;
	status : DWORD;
	LL : LREAL;
	HL : LREAL;
	OpcCommandsDisabled : BOOL;
END_STRUCT;
END_TYPE
