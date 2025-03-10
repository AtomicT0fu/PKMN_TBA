TestMap_MapScripts::
	.byte 0


GiveTurtwig::
# 4 "data/maps/TestMap/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 5 "data/maps/TestMap/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_MUSCLE_BAND, ITEM_CHERISH_BALL, 3, 0, MALE, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_POLISH, MOVE_EARTHQUAKE, MOVE_WOOD_HAMMER, MOVE_STONE_EDGE
# 6 "data/maps/TestMap/scripts.pory"
	waitse
# 7 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 8 "data/maps/TestMap/scripts.pory"
	release
	end


SetFlags::
# 14 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 15 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 16 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE01_GET
# 17 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE02_GET
# 18 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE03_GET
# 19 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE04_GET
# 20 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE05_GET
# 21 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE06_GET
# 22 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE07_GET
# 23 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE08_GET
# 24 "data/maps/TestMap/scripts.pory"
	playse SE_E
# 25 "data/maps/TestMap/scripts.pory"
	giveitem ITEM_MEGA_RING, 1
# 26 "data/maps/TestMap/scripts.pory"
	releaseall
	end


SignTest::
# 31 "data/maps/TestMap/scripts.pory"
	msgbox SignTest_Text_0, MSGBOX_SIGN
# 32 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 33 "data/maps/TestMap/scripts.pory"
	special EnableNationalPokedex
# 34 "data/maps/TestMap/scripts.pory"
	waitmessage
# 35 "data/maps/TestMap/scripts.pory"
	releaseall
	end


NameBoxTest::
# 40 "data/maps/TestMap/scripts.pory"
	lock
# 41 "data/maps/TestMap/scripts.pory"
	faceplayer
# 42 "data/maps/TestMap/scripts.pory"
	speakername NameBoxTest_Text_0
# 43 "data/maps/TestMap/scripts.pory"
	msgbox NameBoxTest_Text_1
# 44 "data/maps/TestMap/scripts.pory"
	waitmessage
# 45 "data/maps/TestMap/scripts.pory"
	closemessage
# 46 "data/maps/TestMap/scripts.pory"
	releaseall
	end


NameBoxTest_2::
# 51 "data/maps/TestMap/scripts.pory"
	lock
# 52 "data/maps/TestMap/scripts.pory"
	faceplayer
# 53 "data/maps/TestMap/scripts.pory"
	speakername NameBoxTest_2_Text_0
# 54 "data/maps/TestMap/scripts.pory"
	msgbox NameBoxTest_2_Text_1
# 55 "data/maps/TestMap/scripts.pory"
	waitmessage
# 56 "data/maps/TestMap/scripts.pory"
	closemessage
# 57 "data/maps/TestMap/scripts.pory"
	releaseall
	end


TriggerMayFollow::
# 62 "data/maps/TestMap/scripts.pory"
	lock
# 63 "data/maps/TestMap/scripts.pory"
	speakername TriggerMayFollow_Text_0
# 64 "data/maps/TestMap/scripts.pory"
	msgbox TriggerMayFollow_Text_1
# 65 "data/maps/TestMap/scripts.pory"
	waitmessage
# 66 "data/maps/TestMap/scripts.pory"
	closemessage
# 67 "data/maps/TestMap/scripts.pory"
	removeobject 5
# 68 "data/maps/TestMap/scripts.pory"
	addobject 6
# 69 "data/maps/TestMap/scripts.pory"
	setvar VAR_TEST_1, 1
# 70 "data/maps/TestMap/scripts.pory"
	releaseall
	end


AbraTeleport::
# 75 "data/maps/TestMap/scripts.pory"
	faceplayer
# 76 "data/maps/TestMap/scripts.pory"
	playmoncry SPECIES_ABRA, 0
# 77 "data/maps/TestMap/scripts.pory"
	waitmoncry
# 78 "data/maps/TestMap/scripts.pory"
	warpteleport MAP_HIGHLAND_FARMS, 41, 27
	end


AbraTeleport_2::
# 83 "data/maps/TestMap/scripts.pory"
	faceplayer
# 84 "data/maps/TestMap/scripts.pory"
	playmoncry SPECIES_KADABRA, 0
# 85 "data/maps/TestMap/scripts.pory"
	waitmoncry
# 86 "data/maps/TestMap/scripts.pory"
	warpsilent MAP_BLACK_SCREEN, 5, 4
	end


RedFly::
# 91 "data/maps/TestMap/scripts.pory"
	lock
# 92 "data/maps/TestMap/scripts.pory"
	setfieldeffectargument 0, 1
# 93 "data/maps/TestMap/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 94 "data/maps/TestMap/scripts.pory"
	delay 15
# 95 "data/maps/TestMap/scripts.pory"
	removeobject 6
# 96 "data/maps/TestMap/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 97 "data/maps/TestMap/scripts.pory"
	release
	end


FlyIn::
# 102 "data/maps/TestMap/scripts.pory"
	lock
# 103 "data/maps/TestMap/scripts.pory"
	setfieldeffectargument 0, 2
# 104 "data/maps/TestMap/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 105 "data/maps/TestMap/scripts.pory"
	delay 15
# 106 "data/maps/TestMap/scripts.pory"
	addobject 6
# 107 "data/maps/TestMap/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 108 "data/maps/TestMap/scripts.pory"
	release
	end


SignTest_Text_0:
# 31 "data/maps/TestMap/scripts.pory"
	.string "Hello, world!$"

NameBoxTest_Text_0:
# 42 "data/maps/TestMap/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Archie$"

NameBoxTest_Text_1:
# 43 "data/maps/TestMap/scripts.pory"
	.string "Expand the Sea!$"

NameBoxTest_2_Text_0:
# 53 "data/maps/TestMap/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Maxie$"

NameBoxTest_2_Text_1:
# 54 "data/maps/TestMap/scripts.pory"
	.string "Expand the Land!$"

TriggerMayFollow_Text_0:
# 63 "data/maps/TestMap/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}SYSTEM$"

TriggerMayFollow_Text_1:
# 64 "data/maps/TestMap/scripts.pory"
	.string "MAY IS FOLLOWING YOU$"
