WindhillHollow_MapScripts::
	.byte 0


WHH_Litten_Interact::
# 4 "data/maps/WindhillHollow/scripts.pory"
	faceplayer
# 5 "data/maps/WindhillHollow/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
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
	setflag FLAG_WHH_HIDE_LITTEN
# 12 "data/maps/WindhillHollow/scripts.pory"
	clearflag FLAG_OBR_SHOW_LITTEN
# 13 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 14 "data/maps/WindhillHollow/scripts.pory"
	addvar VAR_WHH_STARTERS, 1
# 15 "data/maps/WindhillHollow/scripts.pory"
	release
	end


WHH_Turtwig_Interact::
# 20 "data/maps/WindhillHollow/scripts.pory"
	faceplayer
# 21 "data/maps/WindhillHollow/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
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
	setflag FLAG_WHH_HIDE_TURTWIG
# 28 "data/maps/WindhillHollow/scripts.pory"
	clearflag FLAG_OBR_SHOW_TURTWIG
# 29 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 30 "data/maps/WindhillHollow/scripts.pory"
	addvar VAR_WHH_STARTERS, 1
# 31 "data/maps/WindhillHollow/scripts.pory"
	release
	end


WHH_Oshawott_Interact::
# 36 "data/maps/WindhillHollow/scripts.pory"
	faceplayer
# 37 "data/maps/WindhillHollow/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
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
	setflag FLAG_WHH_HIDE_OSHAWOTT
# 44 "data/maps/WindhillHollow/scripts.pory"
	clearflag FLAG_OBR_SHOW_OSHAWOTT
# 45 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 46 "data/maps/WindhillHollow/scripts.pory"
	addvar VAR_WHH_STARTERS, 1
# 47 "data/maps/WindhillHollow/scripts.pory"
	release
	end

