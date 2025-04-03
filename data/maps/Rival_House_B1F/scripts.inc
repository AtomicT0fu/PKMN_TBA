Rival_House_B1F_MapScripts::
	.byte 0


RHB1F_Mike_Interact::
# 4 "data/maps/Rival_House_B1F/scripts.pory"
	faceplayer
# 5 "data/maps/Rival_House_B1F/scripts.pory"
	speakername RHB1F_Mike_Interact_Text_0
# 6 "data/maps/Rival_House_B1F/scripts.pory"
	msgbox RHB1F_T_Mike1
# 7 "data/maps/Rival_House_B1F/scripts.pory"
	waitmessage
# 8 "data/maps/Rival_House_B1F/scripts.pory"
	closemessage
# 9 "data/maps/Rival_House_B1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 10 "data/maps/Rival_House_B1F/scripts.pory"
	release
	end


RHB1F_Mike_Interact_Text_0:
# 5 "data/maps/Rival_House_B1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

RHB1F_T_Mike1::
# 15 "data/maps/Rival_House_B1F/scripts.pory"
	.string "Just readin' up on some new battle\n"
	.string "techniques.\p"
	.string "You better watch out next time,\n"
	.string "{PLAYER}!$"
