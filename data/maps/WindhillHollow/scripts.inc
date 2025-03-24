WindhillHollow_MapScripts::
	.byte 0


WHH_Ponyta_Interact::
# 4 "data/maps/WindhillHollow/scripts.pory"
	faceplayer
# 5 "data/maps/WindhillHollow/scripts.pory"
	playmoncry SPECIES_PONYTA, 0
# 6 "data/maps/WindhillHollow/scripts.pory"
	waitmoncry
# 7 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 8 "data/maps/WindhillHollow/scripts.pory"
	playse SE_EXIT
# 9 "data/maps/WindhillHollow/scripts.pory"
	waitse
# 10 "data/maps/WindhillHollow/scripts.pory"
	removeobject 3
# 11 "data/maps/WindhillHollow/scripts.pory"
	setflag FLAG_WHH_HIDE_PONYTA
# 12 "data/maps/WindhillHollow/scripts.pory"
	clearflag FLAG_OBR_SHOW_PONYTA
# 13 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 14 "data/maps/WindhillHollow/scripts.pory"
	addvar VAR_WHH_STARTERS, 1
# 15 "data/maps/WindhillHollow/scripts.pory"
	release
	end


WHH_Mudbray_Interact::
# 20 "data/maps/WindhillHollow/scripts.pory"
	faceplayer
# 21 "data/maps/WindhillHollow/scripts.pory"
	playmoncry SPECIES_MUDBRAY, 0
# 22 "data/maps/WindhillHollow/scripts.pory"
	waitmoncry
# 23 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/maps/WindhillHollow/scripts.pory"
	playse SE_EXIT
# 25 "data/maps/WindhillHollow/scripts.pory"
	waitse
# 26 "data/maps/WindhillHollow/scripts.pory"
	removeobject 2
# 27 "data/maps/WindhillHollow/scripts.pory"
	setflag FLAG_WHH_HIDE_MUDBRAY
# 28 "data/maps/WindhillHollow/scripts.pory"
	clearflag FLAG_OBR_SHOW_MUDBRAY
# 29 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 30 "data/maps/WindhillHollow/scripts.pory"
	addvar VAR_WHH_STARTERS, 1
# 31 "data/maps/WindhillHollow/scripts.pory"
	release
	end


WHH_Skiddo_Interact::
# 36 "data/maps/WindhillHollow/scripts.pory"
	faceplayer
# 37 "data/maps/WindhillHollow/scripts.pory"
	playmoncry SPECIES_SKIDDO, 0
# 38 "data/maps/WindhillHollow/scripts.pory"
	waitmoncry
# 39 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 40 "data/maps/WindhillHollow/scripts.pory"
	playse SE_EXIT
# 41 "data/maps/WindhillHollow/scripts.pory"
	waitse
# 42 "data/maps/WindhillHollow/scripts.pory"
	removeobject 1
# 43 "data/maps/WindhillHollow/scripts.pory"
	setflag FLAG_WHH_HIDE_SKIDDO
# 44 "data/maps/WindhillHollow/scripts.pory"
	clearflag FLAG_OBR_SHOW_SKIDDO
# 45 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 46 "data/maps/WindhillHollow/scripts.pory"
	addvar VAR_WHH_STARTERS, 1
# 47 "data/maps/WindhillHollow/scripts.pory"
	release
	end

