Route89_MapScripts::
	.byte 0


RT89_Psyduck_Interact::
# 4 "data/maps/Route89/scripts.pory"
	faceplayer
# 5 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 6 "data/maps/Route89/scripts.pory"
	waitmoncry
# 7 "data/maps/Route89/scripts.pory"
	msgbox RT89_T_Psyduck
# 8 "data/maps/Route89/scripts.pory"
	closemessage
# 9 "data/maps/Route89/scripts.pory"
	release
	end


RT89_T_Psyduck::
# 18 "data/maps/Route89/scripts.pory"
	.string "Psyduck appears to be in a trance.$"
