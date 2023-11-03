TYPE
struct_Question : STRUCT 
	AnswerVariants : UINT;
	inCommand : WORD;
	ask : BOOL;
	reset : BOOL;
	status : DWORD;
	answer : UINT;
	OpcCommandsDisabled : BOOL;
	inOpcCommandsDisabled : BOOL;
END_STRUCT;
END_TYPE
