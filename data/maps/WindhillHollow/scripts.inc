WindhillHollow_MapScripts::
	.byte 0


WHH_Litten_Interact::
# 5 "data/maps/WindhillHollow/scripts.pory"
	faceplayer
# 6 "data/maps/WindhillHollow/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 7 "data/maps/WindhillHollow/scripts.pory"
	waitmoncry
# 8 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 9 "data/maps/WindhillHollow/scripts.pory"
	playse SE_EXIT
# 10 "data/maps/WindhillHollow/scripts.pory"
	waitse
# 11 "data/maps/WindhillHollow/scripts.pory"
	removeobject 3
# 12 "data/maps/WindhillHollow/scripts.pory"
	setflag FLAG_WHH_HIDE_LITTEN
# 13 "data/maps/WindhillHollow/scripts.pory"
	clearflag FLAG_OBR_SHOW_LITTEN
# 14 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 15 "data/maps/WindhillHollow/scripts.pory"
	addvar VAR_WHH_STARTERS, 1
# 16 "data/maps/WindhillHollow/scripts.pory"
	release
	end


WHH_Turtwig_Interact::
# 21 "data/maps/WindhillHollow/scripts.pory"
	faceplayer
# 22 "data/maps/WindhillHollow/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 23 "data/maps/WindhillHollow/scripts.pory"
	waitmoncry
# 24 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 25 "data/maps/WindhillHollow/scripts.pory"
	playse SE_EXIT
# 26 "data/maps/WindhillHollow/scripts.pory"
	waitse
# 27 "data/maps/WindhillHollow/scripts.pory"
	removeobject 2
# 28 "data/maps/WindhillHollow/scripts.pory"
	setflag FLAG_WHH_HIDE_TURTWIG
# 29 "data/maps/WindhillHollow/scripts.pory"
	clearflag FLAG_OBR_SHOW_TURTWIG
# 30 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 31 "data/maps/WindhillHollow/scripts.pory"
	addvar VAR_WHH_STARTERS, 1
# 32 "data/maps/WindhillHollow/scripts.pory"
	release
	end


WHH_Oshawott_Interact::
# 37 "data/maps/WindhillHollow/scripts.pory"
	faceplayer
# 38 "data/maps/WindhillHollow/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 39 "data/maps/WindhillHollow/scripts.pory"
	waitmoncry
# 40 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/maps/WindhillHollow/scripts.pory"
	playse SE_EXIT
# 42 "data/maps/WindhillHollow/scripts.pory"
	waitse
# 43 "data/maps/WindhillHollow/scripts.pory"
	removeobject 1
# 44 "data/maps/WindhillHollow/scripts.pory"
	setflag FLAG_WHH_HIDE_OSHAWOTT
# 45 "data/maps/WindhillHollow/scripts.pory"
	clearflag FLAG_OBR_SHOW_OSHAWOTT
# 46 "data/maps/WindhillHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 47 "data/maps/WindhillHollow/scripts.pory"
	addvar VAR_WHH_STARTERS, 1
# 48 "data/maps/WindhillHollow/scripts.pory"
	release
	end


WHH_Find_MiracleSeed::
# 53 "data/maps/WindhillHollow/scripts.pory"
	finditem ITEM_MIRACLE_SEED, 1
# 54 "data/maps/WindhillHollow/scripts.pory"
	release
	end


WHH_Find_Charcoal::
# 59 "data/maps/WindhillHollow/scripts.pory"
	finditem ITEM_CHARCOAL, 1
# 60 "data/maps/WindhillHollow/scripts.pory"
	release
	end


WHH_Find_MysticWater::
# 65 "data/maps/WindhillHollow/scripts.pory"
	finditem ITEM_MYSTIC_WATER, 1
# 66 "data/maps/WindhillHollow/scripts.pory"
	release
	end

