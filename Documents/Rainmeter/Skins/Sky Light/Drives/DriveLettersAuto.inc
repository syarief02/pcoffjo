[MeasureDriveLetter1]
Measure=Plugin
Plugin=DriveList.dll
UpdateDivider=5
DefaultString="_"
NumberType=Count
Index=0
FinishAction=[!UpdateMeasureGroup "DriveStats"][!UpdateMeter *][!Redraw]
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D1][!SetVariable Height1 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D1][!SetVariable Height1 "32"][!UpdateMeter *][!Redraw]
Group=DriveLetter

[MeasureDriveLetter2]
Measure=Plugin
Plugin=DriveList.dll
Parent=MeasureDriveLetter1
Index=1
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D2][!SetVariable Height2 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D2][!SetVariable Height2 "32"][!UpdateMeter *][!Redraw]
Group=DriveLetter

[MeasureDriveLetter3]
Measure=Plugin
Plugin=DriveList.dll
Parent=MeasureDriveLetter1
Index=2
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D3][!SetVariable Height3 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D3][!SetVariable Height3 "32"][!UpdateMeter *][!Redraw]
Group=DriveLetter

[MeasureDriveLetter4]
Measure=Plugin
Plugin=DriveList.dll
Parent=MeasureDriveLetter1
Index=3
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D4][!SetVariable Height4 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D4][!SetVariable Height4 "32"][!UpdateMeter *][!Redraw]
Group=DriveLetter

[MeasureDriveLetter5]
Measure=Plugin
Plugin=DriveList.dll
Parent=MeasureDriveLetter1
Index=4
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D5][!SetVariable Height5 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D5][!SetVariable Height5 "32"][!UpdateMeter *][!Redraw]
Group=DriveLetter

[MeasureDriveLetter6]
Measure=Plugin
Plugin=DriveList.dll
Parent=MeasureDriveLetter1
Index=5
IfMatch=^_$
IfMatchAction=[!HideMeterGroup D6][!SetVariable Height6 "0"][!UpdateMeter *][!Redraw]
IfNotMatchAction=[!ShowMeterGroup D6][!SetVariable Height6 "32"][!UpdateMeter *][!Redraw]
Group=DriveLetter