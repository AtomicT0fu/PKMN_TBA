Route89_MapScripts::
# 2 "data/maps/Route89/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RT89_RemovePhantump
	.byte 0


RT89_Psyduck_Interact::
# 6 "data/maps/Route89/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 7 "data/maps/Route89/scripts.pory"
	compare VAR_ADVENTURE_START, 25
	goto_if_eq RT89_Psyduck_Interact_2
# 38 "data/maps/Route89/scripts.pory"
	faceplayer
# 39 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 11
# 40 "data/maps/Route89/scripts.pory"
	waitmoncry
# 41 "data/maps/Route89/scripts.pory"
	msgbox RT89_T_Psyduck
# 42 "data/maps/Route89/scripts.pory"
	closemessage
RT89_Psyduck_Interact_1:
# 44 "data/maps/Route89/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 45 "data/maps/Route89/scripts.pory"
	releaseall
	end

RT89_Psyduck_Interact_2:
# 8 "data/maps/Route89/scripts.pory"
	faceplayer
# 9 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 11
# 10 "data/maps/Route89/scripts.pory"
	waitmoncry
# 11 "data/maps/Route89/scripts.pory"
	msgbox RT89_T_PokePsyduck, MSGBOX_YESNO
# 12 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RT89_Psyduck_Interact_5
# 34 "data/maps/Route89/scripts.pory"
	closemessage
	goto RT89_Psyduck_Interact_1

RT89_Psyduck_Interact_5:
# 13 "data/maps/Route89/scripts.pory"
	closemessage
# 14 "data/maps/Route89/scripts.pory"
	delay 10
# 15 "data/maps/Route89/scripts.pory"
	playse SE_WALL_HIT
# 16 "data/maps/Route89/scripts.pory"
	waitse
# 17 "data/maps/Route89/scripts.pory"
	delay 10
# 18 "data/maps/Route89/scripts.pory"
	setwildbattle SPECIES_PSYDUCK, 4, ITEM_NONE
# 19 "data/maps/Route89/scripts.pory"
	call RT89_ShakeScreen_Vars_Psyduck
# 20 "data/maps/Route89/scripts.pory"
	playse SE_PIN
# 21 "data/maps/Route89/scripts.pory"
	applymovement VAR_LAST_TALKED, Univ_Exclam
# 22 "data/maps/Route89/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route89/scripts.pory"
	delay 20
# 24 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 2
# 25 "data/maps/Route89/scripts.pory"
	special ShakeCamera
# 26 "data/maps/Route89/scripts.pory"
	waitmoncry
# 27 "data/maps/Route89/scripts.pory"
	delay 20
# 28 "data/maps/Route89/scripts.pory"
	msgbox RT89_Psyduck_Interact_Text_0
# 29 "data/maps/Route89/scripts.pory"
	closemessage
# 30 "data/maps/Route89/scripts.pory"
	dowildbattle
# 31 "data/maps/Route89/scripts.pory"
	call RT89_Psyduck_PostWin
	goto RT89_Psyduck_Interact_1


RT89_Psyduck_PostWin::
# 50 "data/maps/Route89/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 51 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RT89_Psyduck_PostWin_1
# 54 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RT89_Psyduck_PostWin_2
	return

RT89_Psyduck_PostWin_1:
	return

RT89_Psyduck_PostWin_2:
# 55 "data/maps/Route89/scripts.pory"
	lockall
# 56 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 57 "data/maps/Route89/scripts.pory"
	turnobject 2, DIR_NORTH
# 58 "data/maps/Route89/scripts.pory"
	waitmoncry
# 59 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 60 "data/maps/Route89/scripts.pory"
	turnobject 3, DIR_NORTH
# 61 "data/maps/Route89/scripts.pory"
	waitmoncry
# 62 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 63 "data/maps/Route89/scripts.pory"
	turnobject 1, DIR_NORTH
# 64 "data/maps/Route89/scripts.pory"
	waitmoncry
# 65 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 66 "data/maps/Route89/scripts.pory"
	turnobject 5, DIR_NORTH
# 67 "data/maps/Route89/scripts.pory"
	waitmoncry
# 68 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PSYDUCK, 0
# 69 "data/maps/Route89/scripts.pory"
	turnobject 4, DIR_NORTH
# 70 "data/maps/Route89/scripts.pory"
	waitmoncry
# 71 "data/maps/Route89/scripts.pory"
	applymovement 1, RT89_M_Psyduck1A
# 72 "data/maps/Route89/scripts.pory"
	applymovement 2, RT89_M_Psyduck1A
# 73 "data/maps/Route89/scripts.pory"
	applymovement 3, RT89_M_Psyduck1A
# 74 "data/maps/Route89/scripts.pory"
	applymovement 4, RT89_M_Psyduck1A
# 75 "data/maps/Route89/scripts.pory"
	applymovement 5, RT89_M_Psyduck1B
# 76 "data/maps/Route89/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route89/scripts.pory"
	removeobject 1
# 78 "data/maps/Route89/scripts.pory"
	removeobject 2
# 79 "data/maps/Route89/scripts.pory"
	removeobject 3
# 80 "data/maps/Route89/scripts.pory"
	removeobject 4
# 81 "data/maps/Route89/scripts.pory"
	removeobject 5
# 82 "data/maps/Route89/scripts.pory"
	setflag FLAG_RT89_PSYDUCK
# 83 "data/maps/Route89/scripts.pory"
	msgbox RT89_Psyduck_PostWin_Text_0
# 84 "data/maps/Route89/scripts.pory"
	waitmessage
# 85 "data/maps/Route89/scripts.pory"
	closemessage
# 86 "data/maps/Route89/scripts.pory"
	setvar VAR_ADVENTURE_START, 26
	return


RT89_ShakeScreen_Vars_Psyduck::
# 94 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8004, 1
# 95 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8005, 1
# 96 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8006, 6
# 97 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8007, 2
	return


RT89_ShakeScreen_Vars_KickLog::
# 102 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8004, 1
# 103 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8005, 1
# 104 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8006, 3
# 105 "data/maps/Route89/scripts.pory"
	setvar VAR_0x8007, 2
	return


RT89_Hiker_Interact::
# 110 "data/maps/Route89/scripts.pory"
	lockall
# 111 "data/maps/Route89/scripts.pory"
	faceplayer
# 112 "data/maps/Route89/scripts.pory"
	msgbox RT89_T_HikerInt
# 113 "data/maps/Route89/scripts.pory"
	waitmessage
# 114 "data/maps/Route89/scripts.pory"
	closemessage
# 115 "data/maps/Route89/scripts.pory"
	releaseall
	end


RT89_PhantumpLog::
# 120 "data/maps/Route89/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 121 "data/maps/Route89/scripts.pory"
	goto_if_set FLAG_RT89_PHANTUMP_DEFEATED, RT89_PhantumpLog_2
# 126 "data/maps/Route89/scripts.pory"
	msgbox RT89_T_Log, MSGBOX_YESNO
# 127 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RT89_PhantumpLog_5
RT89_PhantumpLog_1:
# 152 "data/maps/Route89/scripts.pory"
	release
	end

RT89_PhantumpLog_2:
# 122 "data/maps/Route89/scripts.pory"
	msgbox RT89_PhantumpLog_Text_0
# 123 "data/maps/Route89/scripts.pory"
	closemessage
	goto RT89_PhantumpLog_1

RT89_PhantumpLog_5:
# 128 "data/maps/Route89/scripts.pory"
	closemessage
# 129 "data/maps/Route89/scripts.pory"
	call RT89_ShakeScreen_Vars_KickLog
# 130 "data/maps/Route89/scripts.pory"
	delay 20
# 131 "data/maps/Route89/scripts.pory"
	playse SE_M_MEGA_KICK2
# 132 "data/maps/Route89/scripts.pory"
	special ShakeCamera
# 133 "data/maps/Route89/scripts.pory"
	waitse
# 134 "data/maps/Route89/scripts.pory"
	delay 20
# 135 "data/maps/Route89/scripts.pory"
	addobject 10
# 136 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PHANTUMP, 2
# 137 "data/maps/Route89/scripts.pory"
	waitmoncry
# 138 "data/maps/Route89/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 139 "data/maps/Route89/scripts.pory"
	playse SE_PIN
# 140 "data/maps/Route89/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route89/scripts.pory"
	delay 30
# 142 "data/maps/Route89/scripts.pory"
	msgbox RT89_PhantumpLog_Text_1
# 143 "data/maps/Route89/scripts.pory"
	waitmessage
# 144 "data/maps/Route89/scripts.pory"
	closemessage
# 145 "data/maps/Route89/scripts.pory"
	setwildbattle SPECIES_PHANTUMP, 8, ITEM_NONE
# 146 "data/maps/Route89/scripts.pory"
	dowildbattle
# 147 "data/maps/Route89/scripts.pory"
	call RT89_PhantumpPostBattle
	goto RT89_PhantumpLog_1


RT89_RemovePhantump::
# 157 "data/maps/Route89/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 158 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RT89_RemovePhantump_2
# 161 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RT89_RemovePhantump_3
RT89_RemovePhantump_1:
	end

RT89_RemovePhantump_2:
# 159 "data/maps/Route89/scripts.pory"
	removeobject 10
	goto RT89_RemovePhantump_1

RT89_RemovePhantump_3:
# 162 "data/maps/Route89/scripts.pory"
	removeobject 10
	goto RT89_RemovePhantump_1


RT89_PhantumpPostBattle::
# 170 "data/maps/Route89/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 171 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RT89_PhantumpPostBattle_2
# 174 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RT89_PhantumpPostBattle_3
# 177 "data/maps/Route89/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RT89_PhantumpPostBattle_4
RT89_PhantumpPostBattle_1:
	return

RT89_PhantumpPostBattle_2:
# 172 "data/maps/Route89/scripts.pory"
	setflag FLAG_RT89_PHANTUMP_DEFEATED
	goto RT89_PhantumpPostBattle_1

RT89_PhantumpPostBattle_3:
# 175 "data/maps/Route89/scripts.pory"
	setflag FLAG_RT89_PHANTUMP_DEFEATED
	goto RT89_PhantumpPostBattle_1

RT89_PhantumpPostBattle_4:
# 178 "data/maps/Route89/scripts.pory"
	delay 30
# 179 "data/maps/Route89/scripts.pory"
	applymovement 10, RT89_M_Phantump1
# 180 "data/maps/Route89/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 181 "data/maps/Route89/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RT89_M_Player1
# 182 "data/maps/Route89/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route89/scripts.pory"
	delay 30
# 184 "data/maps/Route89/scripts.pory"
	playmoncry SPECIES_PHANTUMP, 2
# 185 "data/maps/Route89/scripts.pory"
	waitmoncry
# 186 "data/maps/Route89/scripts.pory"
	delay 30
# 187 "data/maps/Route89/scripts.pory"
	applymovement 10, Univ_StepLeft1
# 188 "data/maps/Route89/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route89/scripts.pory"
	delay 20
# 190 "data/maps/Route89/scripts.pory"
	playse SE_FU_ZAKU
# 191 "data/maps/Route89/scripts.pory"
	removeobject 10
# 192 "data/maps/Route89/scripts.pory"
	waitse
	goto RT89_PhantumpPostBattle_1


RT89_Trainer_YoungsterBen::
# 198 "data/maps/Route89/scripts.pory"
	trainerbattle_single TRAINER_BEN, RT89_T_YoungsterBen_Intro, RT89_T_YoungsterBen_Lose
# 199 "data/maps/Route89/scripts.pory"
	msgbox RT89_T_YoungsterBen_PostBattle
# 200 "data/maps/Route89/scripts.pory"
	waitmessage
# 201 "data/maps/Route89/scripts.pory"
	closemessage
# 202 "data/maps/Route89/scripts.pory"
	releaseall
	end


RT89_Trainer_BugCatcherSatoshi::
# 207 "data/maps/Route89/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_SATOSHI, RT89_T_BugCatcherSatoshi_Intro, RT89_T_BugCatcherSatoshi_Lose
# 208 "data/maps/Route89/scripts.pory"
	msgbox RT89_T_BugCatcherSatoshi_PostBattle
# 209 "data/maps/Route89/scripts.pory"
	waitmessage
# 210 "data/maps/Route89/scripts.pory"
	closemessage
# 211 "data/maps/Route89/scripts.pory"
	releaseall
	end


RT89_Trainer_PicnickerCarly::
# 216 "data/maps/Route89/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_CARLY, RT89_T_PicnickerCarly_Intro, RT89_T_PicnickerCarly_Lose
# 217 "data/maps/Route89/scripts.pory"
	msgbox RT89_T_PicnickerCarly_PostBattle
# 218 "data/maps/Route89/scripts.pory"
	waitmessage
# 219 "data/maps/Route89/scripts.pory"
	closemessage
# 220 "data/maps/Route89/scripts.pory"
	releaseall
	end


RT89_Item_Potion::
# 225 "data/maps/Route89/scripts.pory"
	finditem ITEM_POTION, 1
# 226 "data/maps/Route89/scripts.pory"
	release
	end


# 230 "data/maps/Route89/scripts.pory"
RT89_M_Psyduck1A:
# 231 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 231 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 231 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 231 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 231 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 231 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 231 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 231 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 231 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 231 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 232 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 232 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 232 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 232 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 232 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 232 "data/maps/Route89/scripts.pory"
	walk_fast_left
	step_end

# 235 "data/maps/Route89/scripts.pory"
RT89_M_Psyduck1B:
# 236 "data/maps/Route89/scripts.pory"
	walk_fast_right
# 237 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 237 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 237 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 237 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 237 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 237 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 237 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 237 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 237 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 237 "data/maps/Route89/scripts.pory"
	walk_fast_up
# 238 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 238 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 238 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 238 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 238 "data/maps/Route89/scripts.pory"
	walk_fast_left
# 238 "data/maps/Route89/scripts.pory"
	walk_fast_left
	step_end

# 241 "data/maps/Route89/scripts.pory"
RT89_M_Phantump1:
# 242 "data/maps/Route89/scripts.pory"
	slide_right
# 243 "data/maps/Route89/scripts.pory"
	face_right
	step_end

# 246 "data/maps/Route89/scripts.pory"
RT89_M_Player1:
# 247 "data/maps/Route89/scripts.pory"
	jump_right
	step_end

RT89_Psyduck_Interact_Text_0:
# 28 "data/maps/Route89/scripts.pory"
	.string "Psyduck attacked!$"

RT89_Psyduck_PostWin_Text_0:
# 83 "data/maps/Route89/scripts.pory"
	.string "The Psyduck flock fled...$"

RT89_PhantumpLog_Text_0:
# 122 "data/maps/Route89/scripts.pory"
	.string "The log is silent.$"

RT89_PhantumpLog_Text_1:
# 142 "data/maps/Route89/scripts.pory"
	.string "The wild Pokemon attacked!$"

RT89_T_Psyduck::
# 251 "data/maps/Route89/scripts.pory"
	.string "Psyduck appears to be in a trance.$"

RT89_T_PokePsyduck::
# 255 "data/maps/Route89/scripts.pory"
	.string "Psyduck appears to be in a trance.\p"
	.string "Poke Psyduck?$"

RT89_T_HikerInt::
# 260 "data/maps/Route89/scripts.pory"
	.string "Don't worry about me, all of my Pokémon\n"
	.string "are exhausted right now.\p"
	.string "But there are some more trainers up the\n"
	.string "road to chellenge!$"

RT89_T_YoungsterBen_Intro::
# 267 "data/maps/Route89/scripts.pory"
	.string "Hi! I like shorts!\n"
	.string "They're delightfully comfy and easy to\l"
	.string "wear!$"

RT89_T_YoungsterBen_Lose::
# 273 "data/maps/Route89/scripts.pory"
	.string "I don't believe it!$"

RT89_T_YoungsterBen_PostBattle::
# 277 "data/maps/Route89/scripts.pory"
	.string "Maybe I should get some cargo shorts\n"
	.string "so I can hold more Pokémon...$"

RT89_T_Log::
# 282 "data/maps/Route89/scripts.pory"
	.string "Noises can be heard inside...\p"
	.string "Kick the log?$"

RT89_T_BugCatcherSatoshi_Intro::
# 287 "data/maps/Route89/scripts.pory"
	.string "Hi! Do you like BUG Pokémon?$"

RT89_T_BugCatcherSatoshi_Lose::
# 291 "data/maps/Route89/scripts.pory"
	.string "Bummer.$"

RT89_T_BugCatcherSatoshi_PostBattle::
# 295 "data/maps/Route89/scripts.pory"
	.string "Hm, maybe I should mix up my team a bit.$"

RT89_T_PicnickerCarly_Intro::
# 299 "data/maps/Route89/scripts.pory"
	.string "Hold it! You have a Pokémon!\n"
	.string "That means you have to battle me!$"

RT89_T_PicnickerCarly_Lose::
# 304 "data/maps/Route89/scripts.pory"
	.string "Hey, you're good!$"

RT89_T_PicnickerCarly_PostBattle::
# 308 "data/maps/Route89/scripts.pory"
	.string "Being a trainer is the best, huh?$"
