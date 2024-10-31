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
	playmoncry SPECIES_MEW, 0
# 22 "data/maps/TestMap/scripts.pory"
	msgbox MewBattle_Text_0
# 23 "data/maps/TestMap/scripts.pory"
	waitmessage
# 24 "data/maps/TestMap/scripts.pory"
	setwildbattle SPECIES_MEW, 100, ITEM_NONE
# 25 "data/maps/TestMap/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 26 "data/maps/TestMap/scripts.pory"
	releaseall
	end


SignTest::
# 31 "data/maps/TestMap/scripts.pory"
	msgbox SignTest_Text_0, MSGBOX_SIGN
# 32 "data/maps/TestMap/scripts.pory"
	waitmessage
# 33 "data/maps/TestMap/scripts.pory"
	releaseall
	end


MewBattle_Text_0:
# 22 "data/maps/TestMap/scripts.pory"
	.string "Myyyuuuuu!$"

SignTest_Text_0:
# 31 "data/maps/TestMap/scripts.pory"
	.string "Hello, world!$"
