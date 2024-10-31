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


MewBattle::
# 21 "data/maps/TestMap/scripts.pory"
	lock
# 22 "data/maps/TestMap/scripts.pory"
	faceplayer
# 23 "data/maps/TestMap/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 24 "data/maps/TestMap/scripts.pory"
	speakername MewBattle_Text_0
# 25 "data/maps/TestMap/scripts.pory"
	msgbox MewBattle_Text_1
# 26 "data/maps/TestMap/scripts.pory"
	waitmessage
# 27 "data/maps/TestMap/scripts.pory"
	setwildbattle SPECIES_MEW, 100, ITEM_NONE
# 28 "data/maps/TestMap/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 29 "data/maps/TestMap/scripts.pory"
	releaseall
	end


LugiaBattle::
# 34 "data/maps/TestMap/scripts.pory"
	lock
# 35 "data/maps/TestMap/scripts.pory"
	faceplayer
# 36 "data/maps/TestMap/scripts.pory"
	playmoncry SPECIES_LUGIA, 0
# 37 "data/maps/TestMap/scripts.pory"
	speakername LugiaBattle_Text_0
# 38 "data/maps/TestMap/scripts.pory"
	msgbox LugiaBattle_Text_1
# 39 "data/maps/TestMap/scripts.pory"
	waitmessage
# 40 "data/maps/TestMap/scripts.pory"
	setwildbattle SPECIES_LUGIA, 100, ITEM_NONE
# 41 "data/maps/TestMap/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 42 "data/maps/TestMap/scripts.pory"
	releaseall
	end


SignTest::
# 47 "data/maps/TestMap/scripts.pory"
	msgbox SignTest_Text_0, MSGBOX_SIGN
# 48 "data/maps/TestMap/scripts.pory"
	waitmessage
# 49 "data/maps/TestMap/scripts.pory"
	releaseall
	end


NameBoxTest::
# 54 "data/maps/TestMap/scripts.pory"
	lock
# 55 "data/maps/TestMap/scripts.pory"
	faceplayer
# 56 "data/maps/TestMap/scripts.pory"
	speakername NameBoxTest_Text_0
# 57 "data/maps/TestMap/scripts.pory"
	msgbox NameBoxTest_Text_1
# 58 "data/maps/TestMap/scripts.pory"
	waitmessage
# 59 "data/maps/TestMap/scripts.pory"
	closemessage
# 60 "data/maps/TestMap/scripts.pory"
	releaseall
	end


NameBoxTest_2::
# 65 "data/maps/TestMap/scripts.pory"
	lock
# 66 "data/maps/TestMap/scripts.pory"
	faceplayer
# 67 "data/maps/TestMap/scripts.pory"
	speakername NameBoxTest_2_Text_0
# 68 "data/maps/TestMap/scripts.pory"
	msgbox NameBoxTest_2_Text_1
# 69 "data/maps/TestMap/scripts.pory"
	waitmessage
# 70 "data/maps/TestMap/scripts.pory"
	closemessage
# 71 "data/maps/TestMap/scripts.pory"
	releaseall
	end


TriggerMayFollow::
# 76 "data/maps/TestMap/scripts.pory"
	lock
# 77 "data/maps/TestMap/scripts.pory"
	speakername TriggerMayFollow_Text_0
# 78 "data/maps/TestMap/scripts.pory"
	msgbox TriggerMayFollow_Text_1
# 79 "data/maps/TestMap/scripts.pory"
	waitmessage
# 80 "data/maps/TestMap/scripts.pory"
	closemessage
# 81 "data/maps/TestMap/scripts.pory"
	removeobject 5
# 82 "data/maps/TestMap/scripts.pory"
	addobject 6
# 83 "data/maps/TestMap/scripts.pory"
	setvar VAR_TEST_1, 1
# 84 "data/maps/TestMap/scripts.pory"
	releaseall
	end


MewBattle_Text_0:
# 24 "data/maps/TestMap/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Mew$"

MewBattle_Text_1:
# 25 "data/maps/TestMap/scripts.pory"
	.string "Myyyuuuuu!$"

LugiaBattle_Text_0:
# 37 "data/maps/TestMap/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_RED}Lugia$"

LugiaBattle_Text_1:
# 38 "data/maps/TestMap/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(Battle me, human.)$"

SignTest_Text_0:
# 47 "data/maps/TestMap/scripts.pory"
	.string "Hello, world!$"

NameBoxTest_Text_0:
# 56 "data/maps/TestMap/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Archie$"

NameBoxTest_Text_1:
# 57 "data/maps/TestMap/scripts.pory"
	.string "Expand the Sea!$"

NameBoxTest_2_Text_0:
# 67 "data/maps/TestMap/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Maxie$"

NameBoxTest_2_Text_1:
# 68 "data/maps/TestMap/scripts.pory"
	.string "Expand the Land!$"

TriggerMayFollow_Text_0:
# 77 "data/maps/TestMap/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}SYSTEM$"

TriggerMayFollow_Text_1:
# 78 "data/maps/TestMap/scripts.pory"
	.string "MAY IS FOLLOWING YOU$"
