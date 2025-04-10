Route89_MapScripts::
	.byte 0


RT89_Psyduck_Interact::
# 4 "data/maps/Route89/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 5 "data/maps/Route89/scripts.pory"
	compare VAR_ADVENTURE_START, 25
	goto_if_eq RT89_Psyduck_Interact_2
# 36 "data/maps/Route89/scripts.pory"
	faceplayer
# 37 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 11
# 38 "data/maps/Route89/scripts.pory"
	waitmoncry
# 39 "data/maps/Route89/scripts.pory"
	msgbox RT89_T_Psyduck
# 40 "data/maps/Route89/scripts.pory"
	closemessage
RT89_Psyduck_Interact_1:
# 42 "data/maps/Route89/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 43 "data/maps/Route89/scripts.pory"
	releaseall
	end

RT89_Psyduck_Interact_2:
# 6 "data/maps/Route89/scripts.pory"
	faceplayer
# 7 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 11
# 8 "data/maps/Route89/scripts.pory"
	waitmoncry
# 9 "data/maps/Route89/scripts.pory"
	msgbox RT89_T_PokePsyduck, MSGBOX_YESNO
# 10 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RT89_Psyduck_Interact_5
# 32 "data/maps/Route89/scripts.pory"
	closemessage
	goto RT89_Psyduck_Interact_1

RT89_Psyduck_Interact_5:
# 11 "data/maps/Route89/scripts.pory"
	closemessage
# 12 "data/maps/Route89/scripts.pory"
	delay 10
# 13 "data/maps/Route89/scripts.pory"
	playse SE_WALL_HIT
# 14 "data/maps/Route89/scripts.pory"
	waitse
# 15 "data/maps/Route89/scripts.pory"
	delay 10
# 16 "data/maps/Route89/scripts.pory"
	setwildbattle SPECIES_PSYDUCK, 5, ITEM_NONE
# 17 "data/maps/Route89/scripts.pory"
	call RT89_ShakeScreen_Vars_Psyduck
# 18 "data/maps/Route89/scripts.pory"
	playse SE_PIN
# 19 "data/maps/Route89/scripts.pory"
	applymovement VAR_LAST_TALKED, Univ_Exclam
# 20 "data/maps/Route89/scripts.pory"
	waitmovement 0
# 21 "data/maps/Route89/scripts.pory"
	delay 20
# 22 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 2
# 23 "data/maps/Route89/scripts.pory"
	special ShakeCamera
# 24 "data/maps/Route89/scripts.pory"
	waitmoncry
# 25 "data/maps/Route89/scripts.pory"
	delay 20
# 26 "data/maps/Route89/scripts.pory"
	msgbox RT89_Psyduck_Interact_Text_0
# 27 "data/maps/Route89/scripts.pory"
	closemessage
# 28 "data/maps/Route89/scripts.pory"
	dowildbattle
# 29 "data/maps/Route89/scripts.pory"
	call RT89_Psyduck_PostWin
	goto RT89_Psyduck_Interact_1


RT89_Psyduck_PostWin::
# 48 "data/maps/Route89/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 49 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RT89_Psyduck_PostWin_1
# 52 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RT89_Psyduck_PostWin_2
	return

RT89_Psyduck_PostWin_1:
	return

RT89_Psyduck_PostWin_2:
# 53 "data/maps/Route89/scripts.pory"
	lockall
# 54 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 55 "data/maps/Route89/scripts.pory"
	turnobject 2, DIR_NORTH
# 56 "data/maps/Route89/scripts.pory"
	waitmoncry
# 57 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 58 "data/maps/Route89/scripts.pory"
	turnobject 3, DIR_NORTH
# 59 "data/maps/Route89/scripts.pory"
	waitmoncry
# 60 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 61 "data/maps/Route89/scripts.pory"
	turnobject 1, DIR_NORTH
# 62 "data/maps/Route89/scripts.pory"
	waitmoncry
# 63 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 64 "data/maps/Route89/scripts.pory"
	turnobject 5, DIR_NORTH
# 65 "data/maps/Route89/scripts.pory"
	waitmoncry
# 66 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 67 "data/maps/Route89/scripts.pory"
	turnobject 4, DIR_NORTH
# 68 "data/maps/Route89/scripts.pory"
	waitmoncry
# 69 "data/maps/Route89/scripts.pory"
	applymovement 1, RT89_M_Psyduck1A
# 70 "data/maps/Route89/scripts.pory"
	applymovement 2, RT89_M_Psyduck1A
# 71 "data/maps/Route89/scripts.pory"
	applymovement 3, RT89_M_Psyduck1A
# 72 "data/maps/Route89/scripts.pory"
	applymovement 4, RT89_M_Psyduck1A
# 73 "data/maps/Route89/scripts.pory"
	applymovement 5, RT89_M_Psyduck1B
# 74 "data/maps/Route89/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route89/scripts.pory"
	removeobject 1
# 76 "data/maps/Route89/scripts.pory"
	removeobject 2
# 77 "data/maps/Route89/scripts.pory"
	removeobject 3
# 78 "data/maps/Route89/scripts.pory"
	removeobject 4
# 79 "data/maps/Route89/scripts.pory"
	removeobject 5
# 80 "data/maps/Route89/scripts.pory"
	setflag FLAG_RT89_PSYDUCK
# 81 "data/maps/Route89/scripts.pory"
	msgbox RT89_Psyduck_PostWin_Text_0
# 82 "data/maps/Route89/scripts.pory"
	waitmessage
# 83 "data/maps/Route89/scripts.pory"
	closemessage
# 84 "data/maps/Route89/scripts.pory"
	setvar VAR_ADVENTURE_START, 26
	return


RT89_ShakeScreen_Vars_Psyduck::
# 92 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8004, 1
# 93 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8005, 1
# 94 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8006, 6
# 95 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8007, 2
	return


# 99 "data/maps/Route89/scripts.pory"
RT89_M_Psyduck1A:
# 100 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 101 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route89/scripts.pory"
	walk_fast_left
	step_end

# 104 "data/maps/Route89/scripts.pory"
RT89_M_Psyduck1B:
# 105 "data/maps/Route89/scripts.pory"
	walk_fast_right
# 106 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 107 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route89/scripts.pory"
	walk_fast_left
	step_end

RT89_Psyduck_Interact_Text_0:
# 26 "data/maps/Route89/scripts.pory"
	.string "Psyduck attacked!$"

RT89_Psyduck_PostWin_Text_0:
# 81 "data/maps/Route89/scripts.pory"
	.string "The Psyduck flock fled...$"

RT89_T_Psyduck::
# 111 "data/maps/Route89/scripts.pory"
	.string "Psyduck appears to be in a trance.$"

RT89_T_PokePsyduck::
# 115 "data/maps/Route89/scripts.pory"
	.string "Psyduck appears to be in a trance.\p"
	.string "Poke Psyduck?$"
