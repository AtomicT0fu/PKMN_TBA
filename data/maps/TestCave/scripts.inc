TestCave_MapScripts::
	.byte 0


GiveMon::
# 4 "data/maps/TestCave/scripts.pory"
	lock
# 5 "data/maps/TestCave/scripts.pory"
	removeobject 2
# 6 "data/maps/TestCave/scripts.pory"
	msgbox MonRecieved
# 7 "data/maps/TestCave/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 8 "data/maps/TestCave/scripts.pory"
	givemon SPECIES_GENGAR, 50, ITEM_GENGARITE, ITEM_CHERISH_BALL, 10, 0, MALE, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_WILL_O_WISP, TRUE
# 9 "data/maps/TestCave/scripts.pory"
	waitse
# 10 "data/maps/TestCave/scripts.pory"
	closemessage
# 11 "data/maps/TestCave/scripts.pory"
	setflag FLAG_HIDE_BALL
# 12 "data/maps/TestCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 13 "data/maps/TestCave/scripts.pory"
	release
	end


MonRecieved::
# 17 "data/maps/TestCave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GENGAR added to party.$"
