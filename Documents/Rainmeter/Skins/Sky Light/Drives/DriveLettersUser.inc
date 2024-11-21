[MeasureDriveLetter1]
Measure=String
String=#Drive1#
Substitute="":"_"
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D1][!SetVariable Height1 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D1][!SetVariable Height1 "(#scale#*(#screenareaheight#/24))"][!UpdateMeter *][!Redraw]
Group=DriveLetter

[MeasureDriveLetter2]
Measure=String
String=#Drive2#
Substitute="":"_"
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D2][!SetVariable Height2 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D2][!SetVariable Height2 "(#scale#*(#screenareaheight#/24))"][!UpdateMeter *][!Redraw]
Group=DriveLetter

[MeasureDriveLetter3]
Measure=String
String=#Drive3#
Substitute="":"_"
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D3][!SetVariable Height3 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D3][!SetVariable Height3 "(#scale#*(#screenareaheight#/24))"][!UpdateMeter *][!Redraw]
Group=DriveLetter

[MeasureDriveLetter4]
Measure=String
String=#Drive4#
Substitute="":"_"
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D4][!SetVariable Height4 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D4][!SetVariable Height4 "(#scale#*(#screenareaheight#/24))"][!UpdateMeter *][!Redraw]
Group=DriveLetter

[MeasureDriveLetter5]
Measure=String
String=#Drive5#
Substitute="":"_"
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D5][!SetVariable Height5 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D5][!SetVariable Height5 "(#scale#*(#screenareaheight#/24))"][!UpdateMeter *][!Redraw]
Group=DriveLetter

[MeasureDriveLetter6]
Measure=String
String=#Drive6#
Substitute="":"_"
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D6][!SetVariable Height6 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D6][!SetVariable Height6 "(#scale#*(#screenareaheight#/24))"][!UpdateMeter *][!Redraw]
Group=DriveLetter