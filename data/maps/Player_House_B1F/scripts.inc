Player_House_B1F_MapScripts::
	.byte 0


GiveMon4::
# 4 "data/maps/Player_House_B1F/scripts.pory"
	lock
# 5 "data/maps/Player_House_B1F/scripts.pory"
	removeobject 1
# 6 "data/maps/Player_House_B1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 7 "data/maps/Player_House_B1F/scripts.pory"
	showmonpic SPECIES_MUNCHLAX, 10, 3
# 8 "data/maps/Player_House_B1F/scripts.pory"
	msgbox GiveMon4_Text_0
# 9 "data/maps/Player_House_B1F/scripts.pory"
	givemon SPECIES_MUNCHLAX, 50, ITEM_EVIOLITE, ITEM_CHERISH_BALL, 3, 1, MALE, 252, 252, 4, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_SCALE_SHOT, FALSE
# 10 "data/maps/Player_House_B1F/scripts.pory"
	waitfanfare
# 11 "data/maps/Player_House_B1F/scripts.pory"
	hidemonpic
# 12 "data/maps/Player_House_B1F/scripts.pory"
	closemessage
# 13 "data/maps/Player_House_B1F/scripts.pory"
	setflag FLAG_HIDE_BALL
# 14 "data/maps/Player_House_B1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 15 "data/maps/Player_House_B1F/scripts.pory"
	release
	end


BattleNorman::
# 20 "data/maps/Player_House_B1F/scripts.pory"
	lock
# 21 "data/maps/Player_House_B1F/scripts.pory"
	faceplayer
# 22 "data/maps/Player_House_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_NORMAN, LoseText
# 23 "data/maps/Player_House_B1F/scripts.pory"
	release
	end


GiveMon4_Text_0:
# 8 "data/maps/Player_House_B1F/scripts.pory"
	.string "{PLAYER} took Munchlax!$"
