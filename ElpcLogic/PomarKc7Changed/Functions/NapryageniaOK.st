FUNCTION NapryageniaOK : BOOL

VAR_INPUT
	im : ImConfig;
END_VAR





NapryageniaOK:=
NOT (Im.SingleSignals.NS_G1_G2.Q
OR Im.SingleSignals.NS_G10_G11.Q
OR Im.SingleSignals.NS_G13_G14.Q
OR Im.SingleSignals.NS_G15_G16.Q
OR Im.SingleSignals.NS_G17.Q
OR Im.SingleSignals.NS_G18_G19.Q
OR Im.SingleSignals.NS_G3_G4.Q
OR Im.SingleSignals.NS_G5_G6.Q
OR Im.SingleSignals.NS_G7_G8.Q
OR im.SingleSignals.QF1_on.Q
OR Im.SingleSignals.QF2_on.Q
OR Im.SingleSignals.QF23_on.Q
OR Im.SingleSignals.QF4_QF5_on.Q
OR Im.SingleSignals.QF6_QF7_on.Q
OR Im.SingleSignals.QF8_QF9_on.Q
OR Im.SingleSignals.QF10_QF11_on.Q
OR im.SingleSignals.QF12_QF13_on.Q
OR im.SingleSignals.QF22_on.Q
OR Im.SingleSignals.QF14_QF15_on.Q);