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


BattleRed_E::
# 13 "data/maps/TestMap/scripts.pory"
	lock
# 14 "data/maps/TestMap/scripts.pory"
	faceplayer
# 15 "data/maps/TestMap/scripts.pory"
	trainerbattle_no_intro TRAINER_RED_E, LoseText
# 16 "data/maps/TestMap/scripts.pory"
	release
	end


SetFlags::
# 21 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 22 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 23 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE01_GET
# 24 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE02_GET
# 25 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE03_GET
# 26 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE04_GET
# 27 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE05_GET
# 28 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE06_GET
# 29 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE07_GET
# 30 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE08_GET
# 31 "data/maps/TestMap/scripts.pory"
	playse SE_E
# 32 "data/maps/TestMap/scripts.pory"
	giveitem ITEM_MEGA_RING, 1
# 33 "data/maps/TestMap/scripts.pory"
	releaseall
	end


SignTest::
# 38 "data/maps/TestMap/scripts.pory"
	msgbox SignTest_Text_0, MSGBOX_SIGN
# 39 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 40 "data/maps/TestMap/scripts.pory"
	special EnableNationalPokedex
# 41 "data/maps/TestMap/scripts.pory"
	waitmessage
# 42 "data/maps/TestMap/scripts.pory"
	releaseall
	end


NameBoxTest::
# 47 "data/maps/TestMap/scripts.pory"
	lock
# 48 "data/maps/TestMap/scripts.pory"
	faceplayer
# 49 "data/maps/TestMap/scripts.pory"
	speakername NameBoxTest_Text_0
# 50 "data/maps/TestMap/scripts.pory"
	msgbox NameBoxTest_Text_1
# 51 "data/maps/TestMap/scripts.pory"
	waitmessage
# 52 "data/maps/TestMap/scripts.pory"
	closemessage
# 53 "data/maps/TestMap/scripts.pory"
	releaseall
	end


NameBoxTest_2::
# 58 "data/maps/TestMap/scripts.pory"
	lock
# 59 "data/maps/TestMap/scripts.pory"
	faceplayer
# 60 "data/maps/TestMap/scripts.pory"
	speakername NameBoxTest_2_Text_0
# 61 "data/maps/TestMap/scripts.pory"
	msgbox NameBoxTest_2_Text_1
# 62 "data/maps/TestMap/scripts.pory"
	waitmessage
# 63 "data/maps/TestMap/scripts.pory"
	closemessage
# 64 "data/maps/TestMap/scripts.pory"
	releaseall
	end


TriggerMayFollow::
# 69 "data/maps/TestMap/scripts.pory"
	lock
# 70 "data/maps/TestMap/scripts.pory"
	speakername TriggerMayFollow_Text_0
# 71 "data/maps/TestMap/scripts.pory"
	msgbox TriggerMayFollow_Text_1
# 72 "data/maps/TestMap/scripts.pory"
	waitmessage
# 73 "data/maps/TestMap/scripts.pory"
	closemessage
# 74 "data/maps/TestMap/scripts.pory"
	removeobject 5
# 75 "data/maps/TestMap/scripts.pory"
	addobject 6
# 76 "data/maps/TestMap/scripts.pory"
	setvar VAR_TEST_1, 1
# 77 "data/maps/TestMap/scripts.pory"
	releaseall
	end


AbraTeleport::
# 82 "data/maps/TestMap/scripts.pory"
	faceplayer
# 83 "data/maps/TestMap/scripts.pory"
	playmoncry SPECIES_ABRA, 0
# 84 "data/maps/TestMap/scripts.pory"
	waitmoncry
# 85 "data/maps/TestMap/scripts.pory"
	warpteleport MAP_HIGHLAND_FARMS, 41, 27
	end


AbraTeleport_2::
# 90 "data/maps/TestMap/scripts.pory"
	faceplayer
# 91 "data/maps/TestMap/scripts.pory"
	playmoncry SPECIES_KADABRA, 0
# 92 "data/maps/TestMap/scripts.pory"
	waitmoncry
# 93 "data/maps/TestMap/scripts.pory"
	warpsilent MAP_BLACK_SCREEN, 5, 4
	end


RedFly::
# 98 "data/maps/TestMap/scripts.pory"
	lock
# 99 "data/maps/TestMap/scripts.pory"
	setfieldeffectargument 0, 1
# 100 "data/maps/TestMap/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 101 "data/maps/TestMap/scripts.pory"
	delay 15
# 102 "data/maps/TestMap/scripts.pory"
	removeobject 6
# 103 "data/maps/TestMap/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 104 "data/maps/TestMap/scripts.pory"
	release
	end


FlyIn::
# 109 "data/maps/TestMap/scripts.pory"
	lock
# 110 "data/maps/TestMap/scripts.pory"
	setfieldeffectargument 0, 2
# 111 "data/maps/TestMap/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 112 "data/maps/TestMap/scripts.pory"
	delay 15
# 113 "data/maps/TestMap/scripts.pory"
	addobject 6
# 114 "data/maps/TestMap/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 115 "data/maps/TestMap/scripts.pory"
	release
	end


Set_Priority_Test::
# 120 "data/maps/TestMap/scripts.pory"
	playse SE_CARD
# 121 "data/maps/TestMap/scripts.pory"
	clearflag FLAG_TEST_SHOW_BALL
# 122 "data/maps/TestMap/scripts.pory"
	addobject 7
# 123 "data/maps/TestMap/scripts.pory"
	setobjectsubpriority 7, MAP_TEST_MAP, 0
# 124 "data/maps/TestMap/scripts.pory"
	setobjectsubpriority 6, MAP_TEST_MAP, 3
# 125 "data/maps/TestMap/scripts.pory"
	waitse
# 126 "data/maps/TestMap/scripts.pory"
	release
	end


ThrowBall::
# 131 "data/maps/TestMap/scripts.pory"
	faceplayer
# 132 "data/maps/TestMap/scripts.pory"
	playse SE_BALL_THROW
# 133 "data/maps/TestMap/scripts.pory"
	addobject 7
# 134 "data/maps/TestMap/scripts.pory"
	setobjectsubpriority 7, MAP_TEST_MAP, 0
# 135 "data/maps/TestMap/scripts.pory"
	setobjectsubpriority 6, MAP_TEST_MAP, 3
# 136 "data/maps/TestMap/scripts.pory"
	waitse
# 137 "data/maps/TestMap/scripts.pory"
	delay 30
# 138 "data/maps/TestMap/scripts.pory"
	playse SE_BALL_OPEN
# 139 "data/maps/TestMap/scripts.pory"
	removeobject 6
# 140 "data/maps/TestMap/scripts.pory"
	waitse
# 141 "data/maps/TestMap/scripts.pory"
	delay 30
# 142 "data/maps/TestMap/scripts.pory"
	playse SE_BALL
# 143 "data/maps/TestMap/scripts.pory"
	removeobject 7
# 144 "data/maps/TestMap/scripts.pory"
	release
	end


SignTest_Text_0:
# 38 "data/maps/TestMap/scripts.pory"
	.string "Hello, world!$"

NameBoxTest_Text_0:
# 49 "data/maps/TestMap/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Archie$"

NameBoxTest_Text_1:
# 50 "data/maps/TestMap/scripts.pory"
	.string "Expand the Sea!$"

NameBoxTest_2_Text_0:
# 60 "data/maps/TestMap/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Maxie$"

NameBoxTest_2_Text_1:
# 61 "data/maps/TestMap/scripts.pory"
	.string "Expand the Land!$"

TriggerMayFollow_Text_0:
# 70 "data/maps/TestMap/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}SYSTEM$"

TriggerMayFollow_Text_1:
# 71 "data/maps/TestMap/scripts.pory"
	.string "MAY IS FOLLOWING YOU$"
