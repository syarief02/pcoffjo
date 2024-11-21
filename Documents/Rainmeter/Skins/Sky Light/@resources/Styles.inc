[Font1]
FontFace=#Font1#
AntiAlias=1

[Font2]
FontFace=#Font2#
AntiAlias=1

[Font3]
FontFace=#Font3#
AntiAlias=1

[Font4]
FontFace=#Font4#
AntiAlias=1

[Font5]
FontFace=#Font5#
AntiAlias=1

[Light]
FontWeight=300

[Bold]
FontWeight=700

[Black]
FontWeight=900

[RegText]
FontColor=#Color2#,255

[WhiteText]
FontColor=#Color1#,255

[CritText]
FontColor=#Color3#,255

[BorderThin]
FontEffectColor=#color2#,40
StringEffect=BORDER

[ShadowLight]
FontEffectColor=#color2#,50
StringEffect=SHADOW

[BorderMed]
FontEffectColor=#color2#,80
StringEffect=BORDER

[BorderThic]
FontEffectColor=#color2#,140
StringEffect=BORDER

[TextClik]
Solidcolor=0,0,0,1
StringEffect=BORDER
FontEffectColor=#color1#,40
MouseOverAction=[!SetOption #CurrentSection# FontEffectColor "#color1#,120"][!UpdateMeter #CurrentSection#][!Redraw]
MouseLeaveAction=[!SetOption #CurrentSection# FontEffectColor "#color1#,40"][!UpdateMeter #CurrentSection#][!Redraw]

[ImgClik]
ImageAlpha=#StaticAlpha#
Solidcolor=0,0,0,1
MouseOverAction=[!SetOption #CurrentSection# ImageAlpha "#HoverAlpha#"][!UpdateMeter #CurrentSection#][!Redraw]
MouseLeaveAction=[!SetOption #CurrentSection# ImageAlpha "#StaticAlpha#"][!UpdateMeter #CurrentSection#][!Redraw]

[Background]
MouseOverAction=[!SetOption #CurrentSection# #CurrentSection#Fill "Fill Color #HoverGround#"][!UpdateMeter #CurrentSection#][!Redraw]
MouseLeaveAction=[!SetOption #CurrentSection# #CurrentSection#Fill "Fill Color #BackGround#"][!UpdateMeter #CurrentSection#][!Redraw]

[SubGround]
MouseOverAction=[!SetOption #CurrentSection# #CurrentSection#Fill "Fill Color #HoverBack#"][!UpdateMeter #CurrentSection#][!Redraw]
MouseLeaveAction=[!SetOption #CurrentSection# #CurrentSection#Fill "Fill Color #StaticBack#"][!UpdateMeter #CurrentSection#][!Redraw]

[Bar]
SolidColor=#color2#,40
BarColor=#Barcolor#,220
BarOrientation=Horizontal