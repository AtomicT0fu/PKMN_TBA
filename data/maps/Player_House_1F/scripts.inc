Player_House_1F_MapScripts::
# 2 "data/maps/Player_House_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Player_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Player_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Player_House_1F/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 2, PH1F_MomIntro
	.2byte 0


PH1F_MomIntro::
# 8 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_WEST
# 9 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 10 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 11 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 13 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom1
# 14 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 15 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 16 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom1
# 17 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 18 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom2
# 19 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 3
# 21 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


WarpTo_Test::
# 26 "data/maps/Player_House_1F/scripts.pory"
	lock
# 27 "data/maps/Player_House_1F/scripts.pory"
	warpsilent MAP_TEST_MAP, 9, 14
# 28 "data/maps/Player_House_1F/scripts.pory"
	release
	end


# 35 "data/maps/Player_House_1F/scripts.pory"
Univ_Exclam:
# 36 "data/maps/Player_House_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 39 "data/maps/Player_House_1F/scripts.pory"
Univ_Question:
# 40 "data/maps/Player_House_1F/scripts.pory"
	emote_question_mark
	step_end

# 43 "data/maps/Player_House_1F/scripts.pory"
Univ_DoubleExclam:
# 44 "data/maps/Player_House_1F/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 47 "data/maps/Player_House_1F/scripts.pory"
Univ_Heart:
# 48 "data/maps/Player_House_1F/scripts.pory"
	emote_heart
	step_end

# 51 "data/maps/Player_House_1F/scripts.pory"
Univ_X:
# 52 "data/maps/Player_House_1F/scripts.pory"
	emote_x
	step_end

# 55 "data/maps/Player_House_1F/scripts.pory"
Univ_StepUp1:
# 56 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 59 "data/maps/Player_House_1F/scripts.pory"
Univ_StepDown1:
# 60 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 63 "data/maps/Player_House_1F/scripts.pory"
Univ_StepRight1:
# 64 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 67 "data/maps/Player_House_1F/scripts.pory"
Univ_StepLeft1:
# 68 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 71 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Up:
# 72 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_up
	step_end

# 75 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Down:
# 76 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_down
	step_end

# 79 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Right:
# 80 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_right
	step_end

# 83 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Left:
# 84 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_left
	step_end

# 89 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom1:
# 90 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 90 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 90 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 90 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 91 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 94 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom2:
# 95 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 96 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 96 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 96 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 96 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 97 "data/maps/Player_House_1F/scripts.pory"
	face_up
	step_end

PH1F_MomIntro_Text_0:
# 15 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mom$"

PH1F_T_Mom1::
# 102 "data/maps/Player_House_1F/scripts.pory"
	.string "Oh, good morning honey! I'm sorry if\n"
	.string "Lilli woke you...\p"
	.string "Isn't she the cutest little Lillipad\n"
	.string "you've ever seen though?\p"
	.string "Oh!\p"
	.string "Your father wanted to get an early\n"
	.string "start on the crop today.\p"
	.string "You'd better get out there, {PLAYER}.\n"
	.string "You know how much he values your help.$"
