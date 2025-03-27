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
	playfanfare MUS_OBTAIN_ITEM
# 50 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 51 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_System1
# 52 "data/maps/Player_House_1F/scripts.pory"
	waitfanfare
# 53 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_System2
# 54 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 55 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 56 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 57 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom2
# 58 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 3
# 60 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 61 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


WarpTo_Test::
# 66 "data/maps/Player_House_1F/scripts.pory"
	lock
# 67 "data/maps/Player_House_1F/scripts.pory"
	warpsilent MAP_TEST_MAP, 9, 14
# 68 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTapeStart::
# 74 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 75 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_1
# 76 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 77 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 78 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike1
# 79 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 80 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 81 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 82 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 84 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 85 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom2
# 86 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 87 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 88 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 89 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 90 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 91 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 92 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 93 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike2
# 94 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 95 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 96 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike1
# 97 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 3, 3, 4
# 99 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_2
# 100 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 102 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 103 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 104 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 9
# 105 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape_TurnBack::
# 110 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 111 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_3
# 112 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 113 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 114 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike5
# 115 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 116 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 117 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_3R
# 118 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 119 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 120 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 121 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape_TurnBack_B::
# 126 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 127 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_4
# 128 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 129 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 130 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike5
# 131 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 132 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 133 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_4R
# 134 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 135 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 136 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 137 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape::
# 142 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 143 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 144 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike3
# 145 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 146 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 147 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 148 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 149 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 150 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 151 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 152 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 153 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 154 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x0BC, TRUE
# 155 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x0BD, TRUE
# 156 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x0C4, TRUE
# 157 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x0C5, TRUE
# 158 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 159 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 160 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 161 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 162 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 10
# 163 "data/maps/Player_House_1F/scripts.pory"
	warpwhitefade MAP_BATTLE_STAGE_VIDEO, 15, 29
# 164 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Post_BattleTape::
# 169 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 170 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 171 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 172 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 173 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike4
# 174 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 175 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 176 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 177 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x08B, TRUE
# 178 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x08C, TRUE
# 179 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x093, TRUE
# 180 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x094, TRUE
# 181 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 182 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 183 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 184 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 185 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 186 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL
# 187 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 188 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 189 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike2
# 190 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 191 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 192 "data/maps/Player_House_1F/scripts.pory"
	playse SE_EXIT
# 193 "data/maps/Player_House_1F/scripts.pory"
	removeobject 3
# 194 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 195 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 196 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_2
# 197 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 13
# 198 "data/maps/Player_House_1F/scripts.pory"
	release
	end


# 204 "data/maps/Player_House_1F/scripts.pory"
Univ_Exclam:
# 205 "data/maps/Player_House_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 208 "data/maps/Player_House_1F/scripts.pory"
Univ_Question:
# 209 "data/maps/Player_House_1F/scripts.pory"
	emote_question_mark
	step_end

# 212 "data/maps/Player_House_1F/scripts.pory"
Univ_DoubleExclam:
# 213 "data/maps/Player_House_1F/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 216 "data/maps/Player_House_1F/scripts.pory"
Univ_Heart:
# 217 "data/maps/Player_House_1F/scripts.pory"
	emote_heart
	step_end

# 220 "data/maps/Player_House_1F/scripts.pory"
Univ_X:
# 221 "data/maps/Player_House_1F/scripts.pory"
	emote_x
	step_end

# 224 "data/maps/Player_House_1F/scripts.pory"
Univ_StepUp1:
# 225 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 228 "data/maps/Player_House_1F/scripts.pory"
Univ_StepDown1:
# 229 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 232 "data/maps/Player_House_1F/scripts.pory"
Univ_StepRight1:
# 233 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 236 "data/maps/Player_House_1F/scripts.pory"
Univ_StepLeft1:
# 237 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 240 "data/maps/Player_House_1F/scripts.pory"
Univ_StepNE1:
# 241 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northeast
	step_end

# 244 "data/maps/Player_House_1F/scripts.pory"
Univ_StepNW1:
# 245 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
	step_end

# 248 "data/maps/Player_House_1F/scripts.pory"
Univ_StepSE1:
# 249 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
	step_end

# 252 "data/maps/Player_House_1F/scripts.pory"
Univ_StepSW1:
# 253 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southwest
	step_end

# 256 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Up:
# 257 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_up
	step_end

# 260 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Down:
# 261 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_down
	step_end

# 264 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Right:
# 265 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_right
	step_end

# 268 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Left:
# 269 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_left
	step_end

# 272 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideUp1:
# 273 "data/maps/Player_House_1F/scripts.pory"
	slide_up
	step_end

# 276 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideDown1:
# 277 "data/maps/Player_House_1F/scripts.pory"
	slide_down
	step_end

# 280 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideRight1:
# 281 "data/maps/Player_House_1F/scripts.pory"
	slide_right
	step_end

# 284 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideLeft1:
# 285 "data/maps/Player_House_1F/scripts.pory"
	slide_left
	step_end

# 291 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom1:
# 292 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 292 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 292 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 292 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 293 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 296 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom2:
# 297 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 298 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 298 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 298 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 298 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 299 "data/maps/Player_House_1F/scripts.pory"
	face_up
	step_end

# 302 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_1:
# 303 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 303 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 303 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 304 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 304 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 307 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_2:
# 308 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 308 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 308 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 309 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 309 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 312 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_3:
# 313 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 313 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 313 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 313 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
	step_end

# 316 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_3R:
# 317 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 317 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 317 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 318 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 321 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_4:
# 322 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southwest
# 323 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 326 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_4R:
# 327 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 327 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 330 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike1:
# 331 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 332 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 332 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 332 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 332 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 332 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 333 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 336 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike2:
# 337 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 337 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 338 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 338 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 338 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 339 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 339 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 339 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 339 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 339 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 339 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 339 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 339 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 339 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 340 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
	step_end

PH1F_MomIntro_Text_0:
# 46 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mom$"

PH1F_BattleTapeStart_Text_0:
# 77 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

PH1F_T_Mom1::
# 345 "data/maps/Player_House_1F/scripts.pory"
	.string "Oh, good morning honey! I'm sorry if\n"
	.string "Lilli woke you...\p"
	.string "Isn't she the cutest little Lillipad\n"
	.string "you've ever seen though?\p"
	.string "Oh!\p"
	.string "Your father wanted to get an early\n"
	.string "start on the crop today.\p"
	.string "You'd better get out there, {PLAYER}.\n"
	.string "You know how much he values your help.\p"
	.string "By the way, your running shoes came in\n"
	.string "from the city.\p"
	.string "Here you go!$"

PH1F_T_Mom2::
# 360 "data/maps/Player_House_1F/scripts.pory"
	.string "You're very welcome sweetie.\n"
	.string "You be sure to thank Bo as well!$"

PH1F_T_Mike1::
# 365 "data/maps/Player_House_1F/scripts.pory"
	.string "Thank you so much for letting us use\n"
	.string "the TV again!\p"
	.string "I wish my Grandparents had one, but\n"
	.string "they spend all their money on\p"
	.string "PokeTreats for Millie...$"

PH1F_T_Mike2::
# 373 "data/maps/Player_House_1F/scripts.pory"
	.string "Let's go, {PLAYER}!!$"

PH1F_T_Mike3::
# 377 "data/maps/Player_House_1F/scripts.pory"
	.string "Bo said this one is his favorite!\n"
	.string "This is going to be so awesome!$"

PH1F_T_Mike5::
# 382 "data/maps/Player_House_1F/scripts.pory"
	.string "Where ya goin, {PLAYER}?!\n"
	.string "Get over here!$"

PH1F_T_Mike4::
# 387 "data/maps/Player_House_1F/scripts.pory"
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

PH1F_T_System1::
# 404 "data/maps/Player_House_1F/scripts.pory"
	.string "{PLAYER} received the Running Shoes!$"

PH1F_T_System2::
# 408 "data/maps/Player_House_1F/scripts.pory"
	.string "'Hold {B_BUTTON} to run like the wind!'$"
