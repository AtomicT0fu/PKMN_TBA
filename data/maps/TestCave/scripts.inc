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
	showmonpic SPECIES_MUDSDALE, 10, 3
# 8 "data/maps/TestCave/scripts.pory"
	msgbox MonRecieved
# 9 "data/maps/TestCave/scripts.pory"
	givemon SPECIES_MUDSDALE, 100, ITEM_SOFT_SAND, ITEM_POKE_BALL, 3, 0, MALE, 252, 252, 0, 0, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_IRON_DEFENSE, MOVE_COUNTER, MOVE_BODY_SLAM, FALSE
# 10 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_MUDBRAY
# 11 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_MUDSDALE
# 12 "data/maps/TestCave/scripts.pory"
	waitse
# 13 "data/maps/TestCave/scripts.pory"
	hidemonpic
# 14 "data/maps/TestCave/scripts.pory"
	closemessage
# 15 "data/maps/TestCave/scripts.pory"
	setflag FLAG_HIDE_BALL
# 16 "data/maps/TestCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 17 "data/maps/TestCave/scripts.pory"
	release
	end


GiveMon2::
# 22 "data/maps/TestCave/scripts.pory"
	lock
# 23 "data/maps/TestCave/scripts.pory"
	removeobject 3
# 24 "data/maps/TestCave/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 25 "data/maps/TestCave/scripts.pory"
	showmonpic SPECIES_GOGOAT, 10, 3
# 26 "data/maps/TestCave/scripts.pory"
	msgbox Mon2Recieved
# 27 "data/maps/TestCave/scripts.pory"
	givemon SPECIES_GOGOAT, 100, ITEM_MIRACLE_SEED, ITEM_POKE_BALL, 13, 0, MALE, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_HORN_LEECH, MOVE_EARTHQUAKE, MOVE_FACADE, MOVE_BULK_UP, FALSE
# 28 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_SKIDDO
# 29 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_GOGOAT
# 30 "data/maps/TestCave/scripts.pory"
	waitse
# 31 "data/maps/TestCave/scripts.pory"
	hidemonpic
# 32 "data/maps/TestCave/scripts.pory"
	closemessage
# 33 "data/maps/TestCave/scripts.pory"
	setflag FLAG_HIDE_BALL_2
# 34 "data/maps/TestCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 35 "data/maps/TestCave/scripts.pory"
	release
	end


GiveMon3::
# 40 "data/maps/TestCave/scripts.pory"
	lock
# 41 "data/maps/TestCave/scripts.pory"
	removeobject 4
# 42 "data/maps/TestCave/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 43 "data/maps/TestCave/scripts.pory"
	showmonpic SPECIES_RAPIDASH, 10, 3
# 44 "data/maps/TestCave/scripts.pory"
	msgbox Mon3Recieved
# 45 "data/maps/TestCave/scripts.pory"
	givemon SPECIES_RAPIDASH, 100, ITEM_CHARCOAL, ITEM_POKE_BALL, 13, 0, MALE, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_BLAZE_KICK, MOVE_LOW_KICK, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, FALSE
# 46 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_PONYTA
# 47 "data/maps/TestCave/scripts.pory"
	setcaughtmon SPECIES_RAPIDASH
# 48 "data/maps/TestCave/scripts.pory"
	waitse
# 49 "data/maps/TestCave/scripts.pory"
	hidemonpic
# 50 "data/maps/TestCave/scripts.pory"
	closemessage
# 51 "data/maps/TestCave/scripts.pory"
	setflag FLAG_HIDE_BALL_3
# 52 "data/maps/TestCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 53 "data/maps/TestCave/scripts.pory"
	release
	end


TestBattle::
# 58 "data/maps/TestCave/scripts.pory"
	lock
# 59 "data/maps/TestCave/scripts.pory"
	trainerbattle_no_intro TRAINER_RED_L, LoseText
# 60 "data/maps/TestCave/scripts.pory"
	release
	end


MonRecieved::
# 64 "data/maps/TestCave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}MUDSDALE added to party.$"

Mon2Recieved::
# 68 "data/maps/TestCave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GOGOAT added to party.$"

Mon3Recieved::
# 72 "data/maps/TestCave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}RAPIDASH added to party.$"

LoseText::
# 76 "data/maps/TestCave/scripts.pory"
	.string "!!!$"
