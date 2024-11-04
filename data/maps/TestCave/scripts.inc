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
	showmonpic SPECIES_CHARIZARD, 10, 3
# 8 "data/maps/TestCave/scripts.pory"
	msgbox MonRecieved
# 9 "data/maps/TestCave/scripts.pory"
	givemon SPECIES_CHARIZARD, 100, ITEM_CHARIZARDITE_Y, ITEM_POKE_BALL, 10, 0, MALE, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, TRUE
# 10 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_CHARMANDER
# 11 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_CHARMELEON
# 12 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_CHARIZARD
# 13 "data/maps/TestCave/scripts.pory"
	waitse
# 14 "data/maps/TestCave/scripts.pory"
	hidemonpic
# 15 "data/maps/TestCave/scripts.pory"
	closemessage
# 16 "data/maps/TestCave/scripts.pory"
	setflag FLAG_HIDE_BALL
# 17 "data/maps/TestCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 18 "data/maps/TestCave/scripts.pory"
	release
	end


GiveMon2::
# 23 "data/maps/TestCave/scripts.pory"
	lock
# 24 "data/maps/TestCave/scripts.pory"
	removeobject 3
# 25 "data/maps/TestCave/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 26 "data/maps/TestCave/scripts.pory"
	showmonpic SPECIES_BLASTOISE, 10, 3
# 27 "data/maps/TestCave/scripts.pory"
	msgbox Mon2Recieved
# 28 "data/maps/TestCave/scripts.pory"
	givemon SPECIES_BLASTOISE, 100, ITEM_BLASTOISINITE, ITEM_POKE_BALL, 15, 0, MALE, 252, 0, 0, 0, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_WATER_PULSE, MOVE_AURA_SPHERE, MOVE_ICE_BEAM, MOVE_RAPID_SPIN, TRUE
# 29 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_SQUIRTLE
# 30 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_WARTORTLE
# 31 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_BLASTOISE
# 32 "data/maps/TestCave/scripts.pory"
	waitse
# 33 "data/maps/TestCave/scripts.pory"
	hidemonpic
# 34 "data/maps/TestCave/scripts.pory"
	closemessage
# 35 "data/maps/TestCave/scripts.pory"
	setflag FLAG_HIDE_BALL_2
# 36 "data/maps/TestCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 37 "data/maps/TestCave/scripts.pory"
	release
	end


GiveMon3::
# 42 "data/maps/TestCave/scripts.pory"
	lock
# 43 "data/maps/TestCave/scripts.pory"
	removeobject 4
# 44 "data/maps/TestCave/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 45 "data/maps/TestCave/scripts.pory"
	showmonpic SPECIES_VENUSAUR, 10, 3
# 46 "data/maps/TestCave/scripts.pory"
	msgbox Mon3Recieved
# 47 "data/maps/TestCave/scripts.pory"
	givemon SPECIES_VENUSAUR, 100, ITEM_VENUSAURITE, ITEM_POKE_BALL, 10, 0, MALE, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, TRUE
# 48 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_BULBASAUR
# 49 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_IVYSAUR
# 50 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_VENUSAUR
# 51 "data/maps/TestCave/scripts.pory"
	waitse
# 52 "data/maps/TestCave/scripts.pory"
	hidemonpic
# 53 "data/maps/TestCave/scripts.pory"
	closemessage
# 54 "data/maps/TestCave/scripts.pory"
	setflag FLAG_HIDE_BALL_3
# 55 "data/maps/TestCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 56 "data/maps/TestCave/scripts.pory"
	release
	end


TestBattle::
# 61 "data/maps/TestCave/scripts.pory"
	lock
# 62 "data/maps/TestCave/scripts.pory"
	trainerbattle_no_intro TRAINER_RED_L, LoseText
# 63 "data/maps/TestCave/scripts.pory"
	release
	end


MonRecieved::
# 67 "data/maps/TestCave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}CHARIZARD added to party.$"

Mon2Recieved::
# 71 "data/maps/TestCave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}BLASTOISE added to party.$"

Mon3Recieved::
# 75 "data/maps/TestCave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}VENUSAUR added to party.$"

LoseText::
# 79 "data/maps/TestCave/scripts.pory"
	.string "!!!$"
