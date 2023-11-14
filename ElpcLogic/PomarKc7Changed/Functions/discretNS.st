FUNCTION discretNS : BOOL

VAR_INPUT
	di : DiConfig;
END_VAR

discretNS:=  ((di.di_0.reliability <> 255)
              OR (di.di_1.reliability <> 255)
              OR (di.di_2.reliability <> 255)
              OR (di.di_3.reliability <> 255)
              OR (di.di_4.reliability <> 255)
              OR (di.di_5.reliability <> 255)
              OR (di.di_6.reliability <> 255)
              OR (di.di_7.reliability <> 255)
              OR (di.di_8.reliability <> 255)
              OR (di.di_9.reliability <> 255)
              OR (di.di_10.reliability <> 255)
              OR (di.di_11.reliability <> 255)
              OR (di.di_12.reliability <> 255)
              OR (di.di_13.reliability <> 255)
              OR (di.di_14.reliability <> 255));
             (* OR (di.di_15.reliability <> 255)); *)             