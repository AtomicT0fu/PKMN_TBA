TestCave_MapScripts::
	.byte 0


GiveMon::
# 4 "data/maps/TestCave/scripts.pory"
	lock
# 5 "data/maps/TestCave/scripts.pory"
	removeobject 2
# 6 "data/maps/TestCave/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 7 "data/maps/TestCave/scripts.pory"
	showmonpic SPECIES_PALKIA, 10, 3
# 8 "data/maps/TestCave/scripts.pory"
	msgbox MonRecieved
# 9 "data/maps/TestCave/scripts.pory"
	givemon SPECIES_PALKIA, 80, ITEM_LUSTROUS_ORB, ITEM_STRANGE_BALL, 10, 0, MALE, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_SPACIAL_REND, MOVE_AURA_SPHERE, MOVE_EARTH_POWER, MOVE_GRAVITY, TRUE
# 10 "data/maps/TestCave/scripts.pory"
	waitse
# 11 "data/maps/TestCave/scripts.pory"
	hidemonpic
# 12 "data/maps/TestCave/scripts.pory"
	closemessage
# 13 "data/maps/TestCave/scripts.pory"
	setflag FLAG_HIDE_BALL
# 14 "data/maps/TestCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 15 "data/maps/TestCave/scripts.pory"
	release
	end


GiveMon2::
# 20 "data/maps/TestCave/scripts.pory"
	lock
# 21 "data/maps/TestCave/scripts.pory"
	removeobject 3
# 22 "data/maps/TestCave/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 23 "data/maps/TestCave/scripts.pory"
	showmonpic SPECIES_GIRATINA, 10, 3
# 24 "data/maps/TestCave/scripts.pory"
	msgbox Mon2Recieved
# 25 "data/maps/TestCave/scripts.pory"
	givemon SPECIES_GIRATINA, 80, ITEM_GRISEOUS_ORB, ITEM_STRANGE_BALL, 3, 0, MALE, 252, 252, 0, 4, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PHANTOM_FORCE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_REST, TRUE
# 26 "data/maps/TestCave/scripts.pory"
	waitse
# 27 "data/maps/TestCave/scripts.pory"
	hidemonpic
# 28 "data/maps/TestCave/scripts.pory"
	closemessage
# 29 "data/maps/TestCave/scripts.pory"
	setflag FLAG_HIDE_BALL_2
# 30 "data/maps/TestCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 31 "data/maps/TestCave/scripts.pory"
	release
	end


GiveMon3::
# 36 "data/maps/TestCave/scripts.pory"
	lock
# 37 "data/maps/TestCave/scripts.pory"
	removeobject 4
# 38 "data/maps/TestCave/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 39 "data/maps/TestCave/scripts.pory"
	showmonpic SPECIES_DIALGA, 10, 3
# 40 "data/maps/TestCave/scripts.pory"
	msgbox Mon3Recieved
# 41 "data/maps/TestCave/scripts.pory"
	givemon SPECIES_DIALGA, 80, ITEM_ADAMANT_ORB, ITEM_STRANGE_BALL, 10, 0, MALE, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_ROAR_OF_TIME, MOVE_POWER_GEM, MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, TRUE
# 42 "data/maps/TestCave/scripts.pory"
	waitse
# 43 "data/maps/TestCave/scripts.pory"
	hidemonpic
# 44 "data/maps/TestCave/scripts.pory"
	closemessage
# 45 "data/maps/TestCave/scripts.pory"
	setflag FLAG_HIDE_BALL_3
# 46 "data/maps/TestCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 47 "data/maps/TestCave/scripts.pory"
	release
	end


TestBattle::
# 52 "data/maps/TestCave/scripts.pory"
	lock
# 53 "data/maps/TestCave/scripts.pory"
	trainerbattle_no_intro TRAINER_RED_L, LoseText
# 54 "data/maps/TestCave/scripts.pory"
	release
	end


MonRecieved::
# 58 "data/maps/TestCave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}PALKIA added to party.$"

Mon2Recieved::
# 62 "data/maps/TestCave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GIRATINA added to party.$"

Mon3Recieved::
# 66 "data/maps/TestCave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}DIALGA added to party.$"

LoseText::
# 70 "data/maps/TestCave/scripts.pory"
	.string "!!!$"
