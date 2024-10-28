TestMap_MapScripts::
	.byte 0


SetFlags::
# 4 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 5 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 6 "data/maps/TestMap/scripts.pory"
	playse SE_E
# 7 "data/maps/TestMap/scripts.pory"
	releaseall
	end

