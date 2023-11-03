FUNCTION AnyAnalogsPs : BOOL

VAR_INPUT
	ai : AiConfig;
END_VAR

VAR
	statusAi : TYPE_StatusAi;
END_VAR

anyAnalogsPs := ai.A1.interval = statusAi.HW OR
ai.A1.interval = statusAi.LW OR
ai.A1.interval = statusAi.HW OR
ai.A1.interval = statusAi.LW;