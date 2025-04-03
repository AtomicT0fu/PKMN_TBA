Player_House_B1F_MapScripts::
# 2 "data/maps/Player_House_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Player_House_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Player_House_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Player_House_B1F/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 20, ResetFirstBattleVar
	.2byte 0


ResetFirstBattleVar::
# 8 "data/maps/Player_House_B1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 19
	end


GiveMon4::
# 13 "data/maps/Player_House_B1F/scripts.pory"
	lock
# 14 "data/maps/Player_House_B1F/scripts.pory"
	removeobject 1
# 15 "data/maps/Player_House_B1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 16 "data/maps/Player_House_B1F/scripts.pory"
	showmonpic SPECIES_MUNCHLAX, 10, 3
# 17 "data/maps/Player_House_B1F/scripts.pory"
	msgbox GiveMon4_Text_0
# 18 "data/maps/Player_House_B1F/scripts.pory"
	givemon SPECIES_MUNCHLAX, 50, ITEM_EVIOLITE, ITEM_CHERISH_BALL, 3, 1, MALE, 252, 252, 4, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_SCALE_SHOT, FALSE
# 19 "data/maps/Player_House_B1F/scripts.pory"
	waitfanfare
# 20 "data/maps/Player_House_B1F/scripts.pory"
	hidemonpic
# 21 "data/maps/Player_House_B1F/scripts.pory"
	closemessage
# 22 "data/maps/Player_House_B1F/scripts.pory"
	setflag FLAG_HIDE_BALL
# 23 "data/maps/Player_House_B1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 24 "data/maps/Player_House_B1F/scripts.pory"
	release
	end


BattleNorman::
# 29 "data/maps/Player_House_B1F/scripts.pory"
	lock
# 30 "data/maps/Player_House_B1F/scripts.pory"
	faceplayer
# 31 "data/maps/Player_House_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_NORMAN, LoseText
# 32 "data/maps/Player_House_B1F/scripts.pory"
	release
	end


PHB1F_BattleManual_Interact::
# 37 "data/maps/Player_House_B1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 38 "data/maps/Player_House_B1F/scripts.pory"
	msgbox PHB1F_T_BattleManual
# 39 "data/maps/Player_House_B1F/scripts.pory"
	waitmessage
# 40 "data/maps/Player_House_B1F/scripts.pory"
	closemessage
# 41 "data/maps/Player_House_B1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 42 "data/maps/Player_House_B1F/scripts.pory"
	release
	end


PHB1F_CustomizeCharacter::
# 47 "data/maps/Player_House_B1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 48 "data/maps/Player_House_B1F/scripts.pory"
	msgbox PHB1F_CustomizeCharacter_Text_0
# 49 "data/maps/Player_House_B1F/scripts.pory"
	waitmessage
# 50 "data/maps/Player_House_B1F/scripts.pory"
	closemessage
# 51 "data/maps/Player_House_B1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 52 "data/maps/Player_House_B1F/scripts.pory"
	release
	end


GiveMon4_Text_0:
# 17 "data/maps/Player_House_B1F/scripts.pory"
	.string "{PLAYER} took Munchlax!$"

PHB1F_CustomizeCharacter_Text_0:
# 48 "data/maps/Player_House_B1F/scripts.pory"
	.string "Customization coming soon <3$"

PHB1F_T_BattleManual::
# 56 "data/maps/Player_House_B1F/scripts.pory"
	.string "There are stacks of instructional\n"
	.string "Pokemon battle manuals.$"
