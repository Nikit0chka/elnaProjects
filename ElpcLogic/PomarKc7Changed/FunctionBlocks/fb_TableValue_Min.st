FUNCTION_BLOCK fb_TableValue_Min

VAR_INPUT
	parametr : REAL;
END_VAR

VAR
	_table : ARRAY [0..8] OF TYPE_TableRec;
END_VAR

VAR_INPUT
	inverse : BOOL   := FALSE;
END_VAR

VAR_IN_OUT
	actualValue : REAL;
END_VAR

VAR
	indexLess : INT   := -1;
	indexMore : INT   := -1;
	Vali : REAL;
	i : INT;
	moreDistance : REAL;
	lessDistance : REAL;
	onInit : BOOL;
	_prevParam : REAL   := 50.0;
END_VAR

VAR CONSTANT
	maxTableLength : INT   := 9;
END_VAR





IF NOT onInit THEN
_table[0].x:=-35.0;  _table[0].y:=130.0;
_table[1].x:=-25.0;  _table[1].y:=124.0;
_table[2].x:=-15.0;  _table[2].y:=118.0;
_table[3].x:= -5.0;  _table[3].y:=112.0;
_table[4].x:=  0.0;  _table[4].y:=108.0;
_table[5].x:=  5.0;  _table[5].y:=106.0;
_table[6].x:= 15.0;  _table[6].y:=104.0;
_table[7].x:= 25.0;  _table[7].y:=102.0;
_table[8].x:= 35.0;  _table[8].y:= 97.0;

onInit:=TRUE;
END_IF;


IF parametr <> _prevParam THEN
indexLess:=-1;
indexMore:=-1;
lessDistance:=0.0;
moreDistance:=0.0;
FOR i:=0 TO maxTableLength-1 DO
	IF NOT inverse THEN
		Vali:=_table[i].x;
	ELSE
		Vali:=_table[i].y;
	END_IF;
	
	IF (Vali=parametr) THEN
		indexLess:=i;
		indexMore:=i;
	ELSIF ((Vali<parametr) AND ((lessDistance>parametr-Vali) OR (indexLess<0))) THEN
		indexLess:=i;
		lessDistance:=parametr-Vali;
	ELSIF ((Vali>parametr) AND ((moreDistance>Vali-parametr) OR (indexMore<0))) THEN
		indexMore:=i;
		moreDistance:=parametr-Vali;
	END_IF;
END_FOR;
(*
IF indexLess<0 THEN
	indexLess:=indexMore;
END_IF;

IF indexMore<0 THEN
	indexMore:=indexLess;
END_IF;
*)
  IF (_table[indexMore].x<>_table[indexLess].x) THEN
  actualValue:=_table[indexLess].y+((_table[indexMore].y-_table[indexLess].y)/(_table[indexMore].x-_table[indexLess].x))*(parametr-_table[indexLess].x);
  ELSE
  actualValue:=_table[indexLess].y;
  END_IF;
   _prevParam:= parametr;
END_IF;
	