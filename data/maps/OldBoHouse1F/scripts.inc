OldBoHouse1F_MapScripts::
	.byte 0


OBH1F_OldBo_Interact::
# 4 "data/maps/OldBoHouse1F/scripts.pory"
	faceplayer
# 5 "data/maps/OldBoHouse1F/scripts.pory"
	speakername OBH1F_OldBo_Interact_Text_0
# 6 "data/maps/OldBoHouse1F/scripts.pory"
	msgbox OBH1F_OldBo_Interact_Text_1
# 7 "data/maps/OldBoHouse1F/scripts.pory"
	waitmessage
# 8 "data/maps/OldBoHouse1F/scripts.pory"
	closemessage
# 9 "data/maps/OldBoHouse1F/scripts.pory"
	turnobject 1, DIR_EAST
# 10 "data/maps/OldBoHouse1F/scripts.pory"
	release
	end


OBH1F_OldBo_Interact_Text_0:
# 5 "data/maps/OldBoHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Old Bo$"

OBH1F_OldBo_Interact_Text_1:
# 6 "data/maps/OldBoHouse1F/scripts.pory"
	.string "Hello, world!$"
