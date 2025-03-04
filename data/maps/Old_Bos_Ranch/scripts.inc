Old_Bos_Ranch_MapScripts::
	.byte 0


OBR_Mike_FollowA::
# 4 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 2, DIR_SOUTH
# 5 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 2, Univ_Exclam
# 6 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 7 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 8 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 9 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 10 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_StepDown1
# 11 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 12 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 13 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 14 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike1
# 15 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 16 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 18 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 19 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_Mike_FollowA_Text_0:
# 13 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

OBR_T_Mike1::
# 23 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Haha, too slow again, {PLAYER}.\p"
	.string "I'll follow behind you so I can catch my\n"
	.string "breath, the ranch is just up the path!$"
