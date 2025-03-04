Player_House_1F_MapScripts::
# 2 "data/maps/Player_House_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PH1F_Update_Tiles
# 3 "data/maps/Player_House_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PH1F_UpdateSpritePos
# 4 "data/maps/Player_House_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Player_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Player_House_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Player_House_1F/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 2, PH1F_MomIntro
# 6 "data/maps/Player_House_1F/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 8, PH1F_BattleTapeStart
# 7 "data/maps/Player_House_1F/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 12, PH1F_Post_BattleTape
	.2byte 0


PH1F_UpdateSpritePos::
# 12 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 8
	goto_if_eq PH1F_UpdateSpritePos_2
# 17 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 12
	goto_if_eq PH1F_UpdateSpritePos_3
PH1F_UpdateSpritePos_1:
	end

PH1F_UpdateSpritePos_2:
# 13 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 1, 9, 5
# 14 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 15 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	goto PH1F_UpdateSpritePos_1

PH1F_UpdateSpritePos_3:
# 18 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 3, 3, 4
# 19 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	goto PH1F_UpdateSpritePos_1


PH1F_Update_Tiles::
# 27 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 12
	goto_if_eq PH1F_Update_Tiles_2
PH1F_Update_Tiles_1:
	end

PH1F_Update_Tiles_2:
# 28 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x0BC, TRUE
# 29 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x0BD, TRUE
# 30 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x0C4, TRUE
# 31 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x0C5, TRUE
	goto PH1F_Update_Tiles_1


PH1F_MomIntro::
# 39 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_WEST
# 40 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 41 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 42 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 44 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom1
# 45 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 47 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom1
# 48 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 49 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom2
# 50 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 3
# 52 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


WarpTo_Test::
# 57 "data/maps/Player_House_1F/scripts.pory"
	lock
# 58 "data/maps/Player_House_1F/scripts.pory"
	warpsilent MAP_TEST_MAP, 9, 14
# 59 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTapeStart::
# 65 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 66 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_1
# 67 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 69 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike1
# 70 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 71 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 72 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 73 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 75 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 76 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom2
# 77 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 78 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 79 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 80 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 81 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 82 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 83 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 84 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike2
# 85 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 86 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 87 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike1
# 88 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 3, 3, 4
# 90 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_2
# 91 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 92 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 93 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 9
# 94 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape::
# 99 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 100 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 101 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike3
# 102 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 103 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 104 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 105 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 106 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 107 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 108 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 109 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 110 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 111 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x0BC, TRUE
# 112 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x0BD, TRUE
# 113 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x0C4, TRUE
# 114 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x0C5, TRUE
# 115 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 116 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 117 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 118 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 119 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 10
# 120 "data/maps/Player_House_1F/scripts.pory"
	warpwhitefade MAP_BATTLE_STAGE_VIDEO, 15, 29
# 121 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Post_BattleTape::
# 126 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 127 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 128 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 129 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 130 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike4
# 131 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 132 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 133 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 134 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x08B, TRUE
# 135 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x08C, TRUE
# 136 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x093, TRUE
# 137 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x094, TRUE
# 138 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 139 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 140 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 141 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 142 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 143 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL
# 144 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 145 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 146 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike2
# 147 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 148 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 149 "data/maps/Player_House_1F/scripts.pory"
	playse SE_EXIT
# 150 "data/maps/Player_House_1F/scripts.pory"
	removeobject 3
# 151 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 152 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_2
# 153 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 13
# 154 "data/maps/Player_House_1F/scripts.pory"
	release
	end


# 160 "data/maps/Player_House_1F/scripts.pory"
Univ_Exclam:
# 161 "data/maps/Player_House_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 164 "data/maps/Player_House_1F/scripts.pory"
Univ_Question:
# 165 "data/maps/Player_House_1F/scripts.pory"
	emote_question_mark
	step_end

# 168 "data/maps/Player_House_1F/scripts.pory"
Univ_DoubleExclam:
# 169 "data/maps/Player_House_1F/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 172 "data/maps/Player_House_1F/scripts.pory"
Univ_Heart:
# 173 "data/maps/Player_House_1F/scripts.pory"
	emote_heart
	step_end

# 176 "data/maps/Player_House_1F/scripts.pory"
Univ_X:
# 177 "data/maps/Player_House_1F/scripts.pory"
	emote_x
	step_end

# 180 "data/maps/Player_House_1F/scripts.pory"
Univ_StepUp1:
# 181 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 184 "data/maps/Player_House_1F/scripts.pory"
Univ_StepDown1:
# 185 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 188 "data/maps/Player_House_1F/scripts.pory"
Univ_StepRight1:
# 189 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 192 "data/maps/Player_House_1F/scripts.pory"
Univ_StepLeft1:
# 193 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 196 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Up:
# 197 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_up
	step_end

# 200 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Down:
# 201 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_down
	step_end

# 204 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Right:
# 205 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_right
	step_end

# 208 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Left:
# 209 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_left
	step_end

# 214 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom1:
# 215 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 215 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 215 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 215 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 216 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 219 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom2:
# 220 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 221 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 221 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 221 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 221 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 222 "data/maps/Player_House_1F/scripts.pory"
	face_up
	step_end

# 225 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_1:
# 226 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 226 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 226 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 227 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 227 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 230 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_2:
# 231 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 231 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 231 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 232 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 232 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 235 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike1:
# 236 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 237 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 237 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 237 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 237 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 237 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 238 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 241 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike2:
# 242 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 242 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 243 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 243 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 243 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 244 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 244 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 244 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 244 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 244 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 244 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 244 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 244 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 244 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 245 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
	step_end

PH1F_MomIntro_Text_0:
# 46 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mom$"

PH1F_BattleTapeStart_Text_0:
# 68 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

PH1F_T_Mom1::
# 250 "data/maps/Player_House_1F/scripts.pory"
	.string "Oh, good morning honey! I'm sorry if\n"
	.string "Lilli woke you...\p"
	.string "Isn't she the cutest little Lillipad\n"
	.string "you've ever seen though?\p"
	.string "Oh!\p"
	.string "Your father wanted to get an early\n"
	.string "start on the crop today.\p"
	.string "You'd better get out there, {PLAYER}.\n"
	.string "You know how much he values your help.$"

PH1F_T_Mom2::
# 262 "data/maps/Player_House_1F/scripts.pory"
	.string "You're very welcome sweetie.\n"
	.string "You be sure to thank Bo as well!$"

PH1F_T_Mike1::
# 267 "data/maps/Player_House_1F/scripts.pory"
	.string "Thank you so much for letting us use\n"
	.string "the TV again!\p"
	.string "I wish my Grandparents had one, but\n"
	.string "they spend all their money on\p"
	.string "PokeTreats for Millie...$"

PH1F_T_Mike2::
# 275 "data/maps/Player_House_1F/scripts.pory"
	.string "Let's go, {PLAYER}!!$"

PH1F_T_Mike3::
# 279 "data/maps/Player_House_1F/scripts.pory"
	.string "Bo said this one is his favorite!\n"
	.string "This is going to be so awesome!$"

PH1F_T_Mike4::
# 284 "data/maps/Player_House_1F/scripts.pory"
	.string "That was unbelievable, {PLAYER}!!!\p"
	.string "Did you see how strong and cool their\n"
	.string "Pokemon were?!\p"
	.string "That Arcanine was so powerful...\n"
	.string "And that Dusclops, oh man!\p"
	.string "Bo sure wasn't kidding, that was great!\p"
	.string "Dang, {PLAYER}, if only we could become\n"
	.string "Pokemon trainers...\p"
	.string "I just know that could be us battling\n"
	.string "each other for a title one day!\p"
	.string "Well, that'll have to wait.\p"
	.string "I gotta feed Millie real quick, but we\n"
	.string "should go return this tape together!\p"
	.string "Meet me at my Grandparent's house!$"
