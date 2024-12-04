TestMap_MapScripts::
	.byte 0


SetFlags::
# 4 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 5 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 6 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE01_GET
# 7 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE02_GET
# 8 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE03_GET
# 9 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE04_GET
# 10 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE05_GET
# 11 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE06_GET
# 12 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE07_GET
# 13 "data/maps/TestMap/scripts.pory"
	setflag FLAG_BADGE08_GET
# 14 "data/maps/TestMap/scripts.pory"
	playse SE_E
# 15 "data/maps/TestMap/scripts.pory"
	giveitem ITEM_MEGA_RING, 1
# 16 "data/maps/TestMap/scripts.pory"
	releaseall
	end


SignTest::
# 21 "data/maps/TestMap/scripts.pory"
	msgbox SignTest_Text_0, MSGBOX_SIGN
# 22 "data/maps/TestMap/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 23 "data/maps/TestMap/scripts.pory"
	special EnableNationalPokedex
# 24 "data/maps/TestMap/scripts.pory"
	waitmessage
# 25 "data/maps/TestMap/scripts.pory"
	releaseall
	end


NameBoxTest::
# 30 "data/maps/TestMap/scripts.pory"
	lock
# 31 "data/maps/TestMap/scripts.pory"
	faceplayer
# 32 "data/maps/TestMap/scripts.pory"
	speakername NameBoxTest_Text_0
# 33 "data/maps/TestMap/scripts.pory"
	msgbox NameBoxTest_Text_1
# 34 "data/maps/TestMap/scripts.pory"
	waitmessage
# 35 "data/maps/TestMap/scripts.pory"
	closemessage
# 36 "data/maps/TestMap/scripts.pory"
	releaseall
	end


NameBoxTest_2::
# 41 "data/maps/TestMap/scripts.pory"
	lock
# 42 "data/maps/TestMap/scripts.pory"
	faceplayer
# 43 "data/maps/TestMap/scripts.pory"
	speakername NameBoxTest_2_Text_0
# 44 "data/maps/TestMap/scripts.pory"
	msgbox NameBoxTest_2_Text_1
# 45 "data/maps/TestMap/scripts.pory"
	waitmessage
# 46 "data/maps/TestMap/scripts.pory"
	closemessage
# 47 "data/maps/TestMap/scripts.pory"
	releaseall
	end


TriggerMayFollow::
# 52 "data/maps/TestMap/scripts.pory"
	lock
# 53 "data/maps/TestMap/scripts.pory"
	speakername TriggerMayFollow_Text_0
# 54 "data/maps/TestMap/scripts.pory"
	msgbox TriggerMayFollow_Text_1
# 55 "data/maps/TestMap/scripts.pory"
	waitmessage
# 56 "data/maps/TestMap/scripts.pory"
	closemessage
# 57 "data/maps/TestMap/scripts.pory"
	removeobject 5
# 58 "data/maps/TestMap/scripts.pory"
	addobject 6
# 59 "data/maps/TestMap/scripts.pory"
	setvar VAR_TEST_1, 1
# 60 "data/maps/TestMap/scripts.pory"
	releaseall
	end


AbraTeleport::
# 65 "data/maps/TestMap/scripts.pory"
	faceplayer
# 66 "data/maps/TestMap/scripts.pory"
	playmoncry SPECIES_ABRA, 0
# 67 "data/maps/TestMap/scripts.pory"
	waitmoncry
# 68 "data/maps/TestMap/scripts.pory"
	warpteleport MAP_HIGHLAND_FARMS, 41, 27
	end


AbraTeleport_2::
# 73 "data/maps/TestMap/scripts.pory"
	faceplayer
# 74 "data/maps/TestMap/scripts.pory"
	playmoncry SPECIES_KADABRA, 0
# 75 "data/maps/TestMap/scripts.pory"
	waitmoncry
# 76 "data/maps/TestMap/scripts.pory"
	warpsilent MAP_BLACK_SCREEN, 5, 4
	end


RedFly::
# 81 "data/maps/TestMap/scripts.pory"
	lock
# 82 "data/maps/TestMap/scripts.pory"
	setfieldeffectargument 0, 1
# 83 "data/maps/TestMap/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 84 "data/maps/TestMap/scripts.pory"
	delay 15
# 85 "data/maps/TestMap/scripts.pory"
	removeobject 6
# 86 "data/maps/TestMap/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 87 "data/maps/TestMap/scripts.pory"
	release
	end


FlyIn::
# 92 "data/maps/TestMap/scripts.pory"
	lock
# 93 "data/maps/TestMap/scripts.pory"
	setfieldeffectargument 0, 2
# 94 "data/maps/TestMap/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 95 "data/maps/TestMap/scripts.pory"
	delay 15
# 96 "data/maps/TestMap/scripts.pory"
	addobject 6
# 97 "data/maps/TestMap/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 98 "data/maps/TestMap/scripts.pory"
	release
	end


SignTest_Text_0:
# 21 "data/maps/TestMap/scripts.pory"
	.string "Hello, world!$"

NameBoxTest_Text_0:
# 32 "data/maps/TestMap/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Archie$"

NameBoxTest_Text_1:
# 33 "data/maps/TestMap/scripts.pory"
	.string "Expand the Sea!$"

NameBoxTest_2_Text_0:
# 43 "data/maps/TestMap/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Maxie$"

NameBoxTest_2_Text_1:
# 44 "data/maps/TestMap/scripts.pory"
	.string "Expand the Land!$"

TriggerMayFollow_Text_0:
# 53 "data/maps/TestMap/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}SYSTEM$"

TriggerMayFollow_Text_1:
# 54 "data/maps/TestMap/scripts.pory"
	.string "MAY IS FOLLOWING YOU$"
