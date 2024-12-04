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
	applymovement 1, PH1F_M_Mom1
# 13 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 15 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom1
# 16 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 17 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom2
# 18 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 3
# 20 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


# 28 "data/maps/Player_House_1F/scripts.pory"
Univ_Exclam:
# 29 "data/maps/Player_House_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 32 "data/maps/Player_House_1F/scripts.pory"
Univ_Question:
# 33 "data/maps/Player_House_1F/scripts.pory"
	emote_question_mark
	step_end

# 36 "data/maps/Player_House_1F/scripts.pory"
Univ_DoubleExclam:
# 37 "data/maps/Player_House_1F/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 40 "data/maps/Player_House_1F/scripts.pory"
Univ_Heart:
# 41 "data/maps/Player_House_1F/scripts.pory"
	emote_heart
	step_end

# 44 "data/maps/Player_House_1F/scripts.pory"
Univ_X:
# 45 "data/maps/Player_House_1F/scripts.pory"
	emote_x
	step_end

# 48 "data/maps/Player_House_1F/scripts.pory"
Univ_StepUp1:
# 49 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 52 "data/maps/Player_House_1F/scripts.pory"
Univ_StepDown1:
# 53 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 56 "data/maps/Player_House_1F/scripts.pory"
Univ_StepRight1:
# 57 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 60 "data/maps/Player_House_1F/scripts.pory"
Univ_StepLeft1:
# 61 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 64 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Up:
# 65 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_up
	step_end

# 68 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Down:
# 69 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_down
	step_end

# 72 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Right:
# 73 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_right
	step_end

# 76 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Left:
# 77 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_left
	step_end

# 82 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom1:
# 83 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 83 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 83 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 83 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 84 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 87 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom2:
# 88 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 89 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 89 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 89 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 89 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 90 "data/maps/Player_House_1F/scripts.pory"
	face_up
	step_end

PH1F_MomIntro_Text_0:
# 14 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mom$"

PH1F_T_Mom1::
# 95 "data/maps/Player_House_1F/scripts.pory"
	.string "Oh, good morning honey! I'm sorry if\n"
	.string "Lilli woke you...\p"
	.string "Isn't she the cutest little Lillipad\n"
	.string "you've ever seen though?\p"
	.string "Oh!\p"
	.string "Your father wanted to get an early\n"
	.string "start on the crop today.\p"
	.string "You'd better get out there, {PLAYER}.\n"
	.string "You know how much he values your help.$"
