Rival_House_1F_MapScripts::
	.byte 0


RH1F_Mamaw_Interact::
# 4 "data/maps/Rival_House_1F/scripts.pory"
	faceplayer
# 5 "data/maps/Rival_House_1F/scripts.pory"
	speakername RH1F_Mamaw_Interact_Text_0
# 6 "data/maps/Rival_House_1F/scripts.pory"
	msgbox RH1F_T_Mamaw1
# 7 "data/maps/Rival_House_1F/scripts.pory"
	waitmessage
# 8 "data/maps/Rival_House_1F/scripts.pory"
	closemessage
# 9 "data/maps/Rival_House_1F/scripts.pory"
	release
	end


RH1F_Papaw_Interact::
# 14 "data/maps/Rival_House_1F/scripts.pory"
	faceplayer
# 15 "data/maps/Rival_House_1F/scripts.pory"
	speakername RH1F_Papaw_Interact_Text_0
# 16 "data/maps/Rival_House_1F/scripts.pory"
	msgbox RH1F_T_Papaw1
# 17 "data/maps/Rival_House_1F/scripts.pory"
	waitmessage
# 18 "data/maps/Rival_House_1F/scripts.pory"
	closemessage
# 19 "data/maps/Rival_House_1F/scripts.pory"
	release
	end


RH1F_Mamaw_Interact_Text_0:
# 5 "data/maps/Rival_House_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mamaw$"

RH1F_Papaw_Interact_Text_0:
# 15 "data/maps/Rival_House_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Papaw$"

RH1F_T_Mamaw1::
# 23 "data/maps/Rival_House_1F/scripts.pory"
	.string "Hello there, dear.\n"
	.string "I hope yer doin' well!$"

RH1F_T_Papaw1::
# 28 "data/maps/Rival_House_1F/scripts.pory"
	.string "Oh well hey there, {PLAYER}!\n"
	.string "How's yer Pops doin'?\p"
	.string "You make sure he don't work himself too\n"
	.string "hard out there!$"
