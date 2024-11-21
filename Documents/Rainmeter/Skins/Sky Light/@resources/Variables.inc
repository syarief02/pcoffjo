[Variables]
Color1=255,255,255
Color2=10,10,10
Color3=225,0,0
BarColor=50,50,112
;72,61,139

;------Weather
Location=INXX0335
Unit=m
;Unit=f , for farenheit/American format - m for metric/celcius format
;-Find weather.com codes here: https://weather.codes/

;------Scales--Increase/Decrease Skin size
ClockScale=1.2
PowerScale=1
WeatherScale=1
SystemWidthScale=1
SystemHeightScale=1
CPUGraphScale=4
;--^ for Mountain variant of system skin
DriveScale=0.9

;-------Fonts
Font1=Autobus Bold
;--Drive info
Font2=Roboto
;--Weather
Font3=USN_Stencil
;--Date
Font4=Trench
;--Time
Font5=Rajdhani
;--System Info

;---Skin Backgrounds
BackGround=20,20,20,1
HoverGround=20,20,20,50

;---Transparency level with max of 255 for clickable Images
StaticAlpha=160
HoverAlpha=220
;---Hoverable Meters Backgrounds
StaticBack=40,40,40,40
HoverBack=50,50,50,50
;---
;---
;Version=1.0
;LastUpdate=24-12-2018
;VersionCode=20181224
;----------
Letters=Auto
;-Defne Leters=Auto to let the skin automatically detect Drive letters
;-Define Letters=Uset to show drives of your choice decribed below.
;-If there are less than 6 drives on your device, co-responding meters will be hidden
;-Same for variables left blank while using Letters=User, while Variables empty, start from Drive6 to above
;-If there are less than 6 drives while using Auto, removable disks will be shown in empty meters, whenever connected
; while User will show mentioned Letters only.
Drive1=C:
Drive2=D:
Drive3=E:
Drive4=F:
Drive5=
Drive6=
; Be sure to Put ':' after Drive Letter
;----------