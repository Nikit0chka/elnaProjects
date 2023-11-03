TYPE
struct_Alg : STRUCT 
	inRunOnStart : BOOL;
	inCanRun : BOOL;
	inHasError : BOOL;
	inEnded : BOOL;
	inOpcCommandsDisabled : BOOL;
	inCommand : WORD;
	inCommand_ARM : WORD;
	inCommand_Alg : WORD;
	status : DWORD;
	CanRun : BOOL;
	OpcCommandsDisabled : BOOL;
	isRuning : BOOL;
	HasError : BOOL;
	isEnded : BOOL;
	RunOnStart : BOOL;
	Start : DWORD;
	Error : DWORD;
	Top : DWORD;
END_STRUCT;
END_TYPE
