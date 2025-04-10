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
# 8 "data/maps/Player_House_1F/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 18, PH1F_Mom_PostStarter
# 9 "data/maps/Player_House_1F/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 23, PH1F_MomFarewell
	.2byte 0


PH1F_UpdateSpritePos::
# 14 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 8
	goto_if_eq PH1F_UpdateSpritePos_2
# 19 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 12
	goto_if_eq PH1F_UpdateSpritePos_3
# 23 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq PH1F_UpdateSpritePos_4
# 29 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 22
	goto_if_eq PH1F_UpdateSpritePos_5
# 35 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 23
	goto_if_eq PH1F_UpdateSpritePos_6
PH1F_UpdateSpritePos_1:
	end

PH1F_UpdateSpritePos_2:
# 15 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 1, 9, 5
# 16 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 17 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	goto PH1F_UpdateSpritePos_1

PH1F_UpdateSpritePos_3:
# 20 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 3, 3, 4
# 21 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	goto PH1F_UpdateSpritePos_1

PH1F_UpdateSpritePos_4:
# 24 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 1, 9, 5
# 25 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 2, 8, 5
# 26 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 3, 10, 8
# 27 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	goto PH1F_UpdateSpritePos_1

PH1F_UpdateSpritePos_5:
# 30 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 1, 2, 6
# 31 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 2, 3, 7
# 32 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 33 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	goto PH1F_UpdateSpritePos_1

PH1F_UpdateSpritePos_6:
# 36 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 1, 2, 6
# 37 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 2, 2, 5
# 38 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 39 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	goto PH1F_UpdateSpritePos_1


PH1F_Update_Tiles::
# 47 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 12
	goto_if_eq PH1F_Update_Tiles_2
PH1F_Update_Tiles_1:
	end

PH1F_Update_Tiles_2:
# 48 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x0BC, TRUE
# 49 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x0BD, TRUE
# 50 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x0C4, TRUE
# 51 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x0C5, TRUE
	goto PH1F_Update_Tiles_1


PH1F_MomIntro::
# 59 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_WEST
# 60 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 61 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 62 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 64 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom1
# 65 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 66 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 67 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom1
# 68 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 69 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom2
# 70 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 72 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 73 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 74 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 75 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 76 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom3
# 77 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 78 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 79 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 80 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom6
# 81 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 82 "data/maps/Player_House_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 83 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 84 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_System1
# 85 "data/maps/Player_House_1F/scripts.pory"
	waitfanfare
# 86 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_System2
# 87 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 88 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 89 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 90 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom4
# 91 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 92 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 3
# 93 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 94 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


PH1F_MomInteract::
# 99 "data/maps/Player_House_1F/scripts.pory"
	faceplayer
# 100 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 3
	goto_if_eq PH1F_MomInteract_2
# 107 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 4
	goto_if_eq PH1F_MomInteract_3
# 114 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 9
	goto_if_eq PH1F_MomInteract_4
# 120 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 13
	goto_if_eq PH1F_MomInteract_5
# 127 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 14
	goto_if_eq PH1F_MomInteract_6
# 134 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 22
	goto_if_eq PH1F_MomInteract_7
# 142 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 143 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_MomInteract_Text_0
# 144 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 145 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 146 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
PH1F_MomInteract_1:
# 148 "data/maps/Player_House_1F/scripts.pory"
	release
	end

PH1F_MomInteract_2:
# 101 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 102 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom3
# 103 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 104 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 105 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
	goto PH1F_MomInteract_1

PH1F_MomInteract_3:
# 108 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 109 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom3
# 110 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 111 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 112 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
	goto PH1F_MomInteract_1

PH1F_MomInteract_4:
# 115 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 116 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom4
# 117 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 118 "data/maps/Player_House_1F/scripts.pory"
	closemessage
	goto PH1F_MomInteract_1

PH1F_MomInteract_5:
# 121 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 122 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom5
# 123 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 124 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 125 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
	goto PH1F_MomInteract_1

PH1F_MomInteract_6:
# 128 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 129 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom5
# 130 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 131 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 132 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
	goto PH1F_MomInteract_1

PH1F_MomInteract_7:
# 135 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 136 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom12
# 137 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 138 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 139 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_EAST
	goto PH1F_MomInteract_1


PH1F_Lilli_Interact::
# 153 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 9
	goto_if_eq PH1F_Lilli_Interact_2
# 160 "data/maps/Player_House_1F/scripts.pory"
	faceplayer
# 161 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 162 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 163 "data/maps/Player_House_1F/scripts.pory"
	turnobject 2, DIR_NORTH
PH1F_Lilli_Interact_1:
# 165 "data/maps/Player_House_1F/scripts.pory"
	release
	end

PH1F_Lilli_Interact_2:
# 154 "data/maps/Player_House_1F/scripts.pory"
	faceplayer
# 155 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 156 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 157 "data/maps/Player_House_1F/scripts.pory"
	turnobject 2, DIR_WEST
	goto PH1F_Lilli_Interact_1


PH1F_Dresser_Interact::
# 170 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 171 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Dresser
# 172 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 173 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 174 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 175 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Picture_Interact::
# 180 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 181 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Picture
# 182 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 183 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 184 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 185 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Oven_Interact::
# 190 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 191 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Oven
# 192 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 193 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 194 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 195 "data/maps/Player_House_1F/scripts.pory"
	release
	end


WarpTo_Test::
# 200 "data/maps/Player_House_1F/scripts.pory"
	lock
# 201 "data/maps/Player_House_1F/scripts.pory"
	warpsilent MAP_TEST_MAP, 9, 14
# 202 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTapeStart::
# 208 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 209 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_1
# 210 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 211 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 212 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike1
# 213 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 214 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 215 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 216 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 217 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 218 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 219 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom2
# 220 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 221 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 222 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 223 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 224 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 225 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 226 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 227 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike2
# 228 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 229 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 230 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike1
# 231 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 232 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 3, 3, 4
# 233 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_2
# 234 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 235 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 236 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 237 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 238 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 9
# 239 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape_TurnBack::
# 244 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 245 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_3
# 246 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 247 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 248 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike5
# 249 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 250 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 251 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_3R
# 252 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 253 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 254 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 255 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape_TurnBack_B::
# 260 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 261 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_4
# 262 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 263 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 264 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike5
# 265 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 266 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 267 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_4R
# 268 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 269 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 270 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 271 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape::
# 276 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 277 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 278 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike3
# 279 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 280 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 281 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 282 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 283 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 284 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 285 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 286 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 287 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 288 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x0BC, TRUE
# 289 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x0BD, TRUE
# 290 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x0C4, TRUE
# 291 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x0C5, TRUE
# 292 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 293 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 294 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 295 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 296 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 10
# 297 "data/maps/Player_House_1F/scripts.pory"
	warpwhitefade MAP_BATTLE_STAGE_VIDEO, 15, 29
# 298 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Post_BattleTape::
# 303 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 304 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 305 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 306 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 307 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike4
# 308 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 309 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 310 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 311 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x08B, TRUE
# 312 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x08C, TRUE
# 313 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x093, TRUE
# 314 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x094, TRUE
# 315 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 316 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 317 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 318 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 319 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 320 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL
# 321 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 322 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 323 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike2
# 324 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 325 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 326 "data/maps/Player_House_1F/scripts.pory"
	playse SE_EXIT
# 327 "data/maps/Player_House_1F/scripts.pory"
	removeobject 3
# 328 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 329 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 330 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_2
# 331 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 13
# 332 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Mom_PostStarter::
# 337 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 338 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_5
# 339 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 340 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 341 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 342 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 343 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 344 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 345 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 346 "data/maps/Player_House_1F/scripts.pory"
	delay 5
# 347 "data/maps/Player_House_1F/scripts.pory"
	turnobject 2, DIR_SOUTH
# 348 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 349 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_6
# 350 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_1
# 351 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom5
# 352 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 353 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 354 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 355 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom7
# 356 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 357 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 358 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_Exclam
# 359 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 360 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 361 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 362 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 363 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 364 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_2
# 365 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 366 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSW1
# 367 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 368 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_WEST
# 369 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 370 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 371 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 372 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 373 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 374 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 375 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 376 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_3
# 377 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 378 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 379 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 380 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 381 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 382 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 383 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 384 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 385 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 386 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 387 "data/maps/Player_House_1F/scripts.pory"
	delay 40
# 388 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 389 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 390 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 391 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 392 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Question
# 393 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 394 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 395 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 396 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 397 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 398 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 399 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom8
# 400 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 401 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 402 "data/maps/Player_House_1F/scripts.pory"
	playse SE_DOOR
# 403 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 404 "data/maps/Player_House_1F/scripts.pory"
	playse SE_WALL_HIT
# 405 "data/maps/Player_House_1F/scripts.pory"
	addobject 3
# 406 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PH1F_M_Player1
# 407 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 408 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 409 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 410 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 411 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike6
# 412 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 413 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 414 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 415 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 416 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 417 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 418 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 419 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 420 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_WEST
# 421 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 422 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 423 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 424 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 425 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_3
# 426 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 427 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 428 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 429 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 430 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 431 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 432 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 433 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 434 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 435 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 436 "data/maps/Player_House_1F/scripts.pory"
	delay 40
# 437 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 438 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 439 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 440 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 441 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 442 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom9
# 443 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 444 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 445 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 446 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 447 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 448 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 449 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike7
# 450 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 451 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 452 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 453 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 454 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 455 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 456 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 457 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 458 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 459 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 460 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom6
# 461 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 462 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 463 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 464 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 465 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 466 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom10
# 467 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 468 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 469 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 470 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom7
# 471 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 472 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 473 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 474 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 475 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom11
# 476 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 477 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 478 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom8
# 479 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 480 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 481 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 482 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 483 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 484 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_Mom_PostStarter_Text_0
# 485 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 486 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 487 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 488 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 489 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 490 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 491 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 492 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_3
# 493 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 494 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 495 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 496 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_StepUp1
# 497 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_4
# 498 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 499 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 500 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 501 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 502 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 503 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 504 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 505 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 506 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike8
# 507 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 508 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 509 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 510 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 511 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 512 "data/maps/Player_House_1F/scripts.pory"
	playse SE_EXIT
# 513 "data/maps/Player_House_1F/scripts.pory"
	removeobject 3
# 514 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 515 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 516 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 517 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 518 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 519 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_HF_HIDE_MAMAW
# 520 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_RH1F_HIDE_MAMAW
# 521 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 19
# 522 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


PH1F_MomFarewell::
# 527 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 528 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_7
# 529 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 530 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 531 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom9
# 532 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli5
# 533 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 1
# 534 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom10
# 535 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_7R
# 536 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli6
# 537 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 538 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 539 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 540 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 541 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom13
# 542 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 543 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 544 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 545 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL
# 546 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 547 "data/maps/Player_House_1F/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 548 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 549 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_MomFarewell_Text_0
# 550 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 551 "data/maps/Player_House_1F/scripts.pory"
	waitfanfare
# 552 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 553 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 554 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 555 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 556 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom14
# 557 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 558 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 559 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_WEST
# 560 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 561 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom15
# 562 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 563 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 564 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 565 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 566 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 567 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 568 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 569 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 570 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 571 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 572 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 573 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 574 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_Heart
# 575 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 576 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 577 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 578 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 579 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 580 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom16
# 581 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 582 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 583 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_WEST
# 584 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 585 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom17
# 586 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 587 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 588 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 589 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 590 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 591 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 592 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 593 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_StepUp1
# 594 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 595 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom11
# 596 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 597 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 598 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 599 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 600 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_PAUSE_FOLLOWERS
# 601 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MIKE_1
# 602 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_RHB1F_HIDE_RIVAL
# 603 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 24
# 604 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


# 610 "data/maps/Player_House_1F/scripts.pory"
Univ_Exclam:
# 611 "data/maps/Player_House_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 614 "data/maps/Player_House_1F/scripts.pory"
Univ_Question:
# 615 "data/maps/Player_House_1F/scripts.pory"
	emote_question_mark
	step_end

# 618 "data/maps/Player_House_1F/scripts.pory"
Univ_DoubleExclam:
# 619 "data/maps/Player_House_1F/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 622 "data/maps/Player_House_1F/scripts.pory"
Univ_Heart:
# 623 "data/maps/Player_House_1F/scripts.pory"
	emote_heart
	step_end

# 626 "data/maps/Player_House_1F/scripts.pory"
Univ_X:
# 627 "data/maps/Player_House_1F/scripts.pory"
	emote_x
	step_end

# 630 "data/maps/Player_House_1F/scripts.pory"
Univ_StepUp1:
# 631 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 634 "data/maps/Player_House_1F/scripts.pory"
Univ_StepDown1:
# 635 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 638 "data/maps/Player_House_1F/scripts.pory"
Univ_StepRight1:
# 639 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 642 "data/maps/Player_House_1F/scripts.pory"
Univ_StepLeft1:
# 643 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 646 "data/maps/Player_House_1F/scripts.pory"
Univ_StepNE1:
# 647 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northeast
	step_end

# 650 "data/maps/Player_House_1F/scripts.pory"
Univ_StepNW1:
# 651 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
	step_end

# 654 "data/maps/Player_House_1F/scripts.pory"
Univ_StepSE1:
# 655 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
	step_end

# 658 "data/maps/Player_House_1F/scripts.pory"
Univ_StepSW1:
# 659 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southwest
	step_end

# 662 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Up:
# 663 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_up
	step_end

# 666 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Down:
# 667 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_down
	step_end

# 670 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Right:
# 671 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_right
	step_end

# 674 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Left:
# 675 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_left
	step_end

# 678 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideUp1:
# 679 "data/maps/Player_House_1F/scripts.pory"
	slide_up
	step_end

# 682 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideDown1:
# 683 "data/maps/Player_House_1F/scripts.pory"
	slide_down
	step_end

# 686 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideRight1:
# 687 "data/maps/Player_House_1F/scripts.pory"
	slide_right
	step_end

# 690 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideLeft1:
# 691 "data/maps/Player_House_1F/scripts.pory"
	slide_left
	step_end

# 697 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom1:
# 698 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 698 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 698 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 698 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 699 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 702 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom2:
# 703 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 704 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 704 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 707 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom3:
# 708 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 708 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 709 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 712 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom4:
# 713 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 714 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 714 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 714 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 714 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 715 "data/maps/Player_House_1F/scripts.pory"
	face_up
	step_end

# 718 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom5:
# 719 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 719 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 720 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 721 "data/maps/Player_House_1F/scripts.pory"
	face_down
	step_end

# 724 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom6:
# 725 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 726 "data/maps/Player_House_1F/scripts.pory"
	face_down
	step_end

# 729 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom7:
# 730 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 731 "data/maps/Player_House_1F/scripts.pory"
	face_down
	step_end

# 734 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom8:
# 735 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 736 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 739 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom9:
# 740 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 741 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 741 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 741 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 741 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 744 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom10:
# 745 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 745 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 745 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 745 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 746 "data/maps/Player_House_1F/scripts.pory"
	face_down
	step_end

# 749 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom11:
# 750 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 750 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 751 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 751 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 752 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 752 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 752 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 753 "data/maps/Player_House_1F/scripts.pory"
	face_up
	step_end

# 756 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_1:
# 757 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 758 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 758 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 761 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_2:
# 762 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 763 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 766 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_3:
# 767 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 768 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 769 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 770 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 771 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 772 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 773 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 774 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 775 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 776 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 777 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 778 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 779 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 780 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 781 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 782 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 783 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 784 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 785 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 786 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 789 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_4:
# 790 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 790 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 791 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 792 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
	step_end

# 795 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli5:
# 796 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 796 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 797 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 797 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 797 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 800 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli6:
# 801 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 801 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 801 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 801 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 804 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_1:
# 805 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 805 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 806 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 809 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_2:
# 810 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 810 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 811 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 814 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_3:
# 815 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 815 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 815 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 815 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
	step_end

# 818 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_3R:
# 819 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 819 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 819 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 820 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 823 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_4:
# 824 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southwest
# 825 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 828 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_4R:
# 829 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 829 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 832 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_5:
# 833 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 833 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 833 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 836 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_6:
# 837 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 837 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 840 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_7:
# 841 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 842 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 842 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 842 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 845 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_7R:
# 846 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 846 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 846 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 846 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 849 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike1:
# 850 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 851 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 851 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 851 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 851 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 851 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 852 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 855 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike2:
# 856 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 856 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 857 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 857 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 857 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 858 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 858 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 858 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 858 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 858 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 858 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 858 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 858 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 858 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 859 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
	step_end

# 862 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Player1:
# 863 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 864 "data/maps/Player_House_1F/scripts.pory"
	slide_right
# 865 "data/maps/Player_House_1F/scripts.pory"
	face_left
	step_end

PH1F_MomIntro_Text_0:
# 66 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mom$"

PH1F_MomInteract_Text_0:
# 143 "data/maps/Player_House_1F/scripts.pory"
	.string "VAR Switch Error.$"

PH1F_BattleTapeStart_Text_0:
# 211 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

PH1F_Mom_PostStarter_Text_0:
# 484 "data/maps/Player_House_1F/scripts.pory"
	.string "Let's go, my little Lillipad!$"

PH1F_MomFarewell_Text_0:
# 549 "data/maps/Player_House_1F/scripts.pory"
	.string "{PLAYER} recieved the PokeNav!$"

PH1F_T_Mom1::
# 870 "data/maps/Player_House_1F/scripts.pory"
	.string "Oh, good morning honey! I'm sorry if\n"
	.string "Lilli woke you...\p"
	.string "Isn't she the cutest little Lillipad\n"
	.string "you've ever seen though?\p"
	.string "Oh!\p"
	.string "Your father wanted to get an early\n"
	.string "start on the crop today.\p"
	.string "You'd better get out there, {PLAYER}.\n"
	.string "You know how much he values your help.$"

PH1F_T_Mom6::
# 882 "data/maps/Player_House_1F/scripts.pory"
	.string "Silly me, I almost forgot!\n"
	.string "Your running shoes came in from the\l"
	.string "city this morning.\p"
	.string "Here you go!$"

PH1F_T_Mom2::
# 889 "data/maps/Player_House_1F/scripts.pory"
	.string "You're very welcome sweetie.\n"
	.string "You be sure to thank Bo as well!$"

PH1F_T_Mom3::
# 894 "data/maps/Player_House_1F/scripts.pory"
	.string "Don't forget to help your father,\n"
	.string "{PLAYER}, he shouldn't do all that work\l"
	.string "by himself.$"

PH1F_T_Mom4::
# 900 "data/maps/Player_House_1F/scripts.pory"
	.string "You two enjoy your movie, {PLAYER}!$"

PH1F_T_Mom5::
# 904 "data/maps/Player_House_1F/scripts.pory"
	.string "Lunch should be ready soon, sweetie!$"

PH1F_T_Mom7::
# 908 "data/maps/Player_House_1F/scripts.pory"
	.string "There you are, {PLAYER}!\n"
	.string "You missed lunch, sweetie, your father\l"
	.string "and I were worried!\p"
	.string "What took you so long?!$"

PH1F_T_Mom8::
# 915 "data/maps/Player_House_1F/scripts.pory"
	.string "Huh... {PAUSE 30}that's so strange.\n"
	.string "I've only seen Lilli act like that when\l"
	.string "there was another Pokemon nearby.\p"
	.string "Is there something you need to tell me,\n"
	.string "honey?$"

PH1F_T_Mom9::
# 923 "data/maps/Player_House_1F/scripts.pory"
	.string "Mike, someone needs to tell me what's\n"
	.string "going on here!\p"
	.string "Lilli is acting like there are Pokemon in\n"
	.string "the room, and I don't know how that\l"
	.string "would be possible.$"

PH1F_T_Mom10::
# 931 "data/maps/Player_House_1F/scripts.pory"
	.string "{PLAYER}, I cannot believe you would do\n"
	.string "something so reckless!\p"
	.string "Do you know how lucky you are that you\n"
	.string "weren't seriously hurt?!\p"
	.string "I guess I am proud of you, though.\p"
	.string "You risked your safety to help get\n"
	.string "someone's Pokemon back.\p"
	.string "I know I would be grateful if someone\n"
	.string "did that for Lilli.\p"
	.string "But wow, you two really have your own\n"
	.string "Pokemon now?\p"
	.string "I wanted to go on a Pokemon adventure\n"
	.string "when I was a little girl...\p"
	.string "Reading about all the elite trainers\n"
	.string "in the newspapers was my favorite\l"
	.string "thing to do back then!\p"
	.string "I was going to go for it too, but then I\n"
	.string "met the love of my life.\l"
	.string "I wouldn't change a thing!\p"
	.string "I'll cheer you on the whole way if you're\n"
	.string "really going to do this, {PLAYER},\l"
	.string "but I would hold off on telling your\l"
	.string "Father about all this for now.\p"
	.string "He can't let go of his dream that you\n"
	.string "will take over the farm one day, this\l"
	.string "might break his heart.\p"
	.string "Luckily, he's in town right now picking\n"
	.string "up some Tauros manure.\p"
	.string "I'll try to soften the blow when he\n"
	.string "gets back.$"

PH1F_T_Mom11::
# 965 "data/maps/Player_House_1F/scripts.pory"
	.string "You be safe out there too, sweetie!\p"
	.string "Make sure you tell your Grandparents\n"
	.string "about your plans!$"

PH1F_T_Mom12::
# 971 "data/maps/Player_House_1F/scripts.pory"
	.string "He didn't take that well at all,\n"
	.string "{PLAYER}...\p"
	.string "I think you should go out there and try\n"
	.string "to talk to him.\p"
	.string "At the very least, you need to say\n"
	.string "goodbye; he's probably out back\l"
	.string "somewhere.$"

PH1F_T_Mom13::
# 981 "data/maps/Player_House_1F/scripts.pory"
	.string "Don't worry about your father,\n"
	.string "{PLAYER}, he's just hurt right now, I'm\l"
	.string "sure he will come around!\p"
	.string "Oh!\n"
	.string "That reminds me!\p"
	.string "He never even answers this thing, I\n"
	.string "figure you'll get more use out of it on\l"
	.string "the road.$"

PH1F_T_Mom14::
# 992 "data/maps/Player_House_1F/scripts.pory"
	.string "Don't forget to call your Mom every\n"
	.string "once in a while!\p"
	.string "Also, {PLAYER}, you should try walking\n"
	.string "with your Pokemon instead of keeping it\l"
	.string "inside a Pokeball all the time!\p"
	.string "Your Pokemon will surely be happier\n"
	.string "walking alongside you, I never keep\l"
	.string "Lilli in her ball, and look how amazing my\l"
	.string "sweet little angel is!$"

PH1F_T_Mom15::
# 1004 "data/maps/Player_House_1F/scripts.pory"
	.string "Isn't that right my little Lillipad?$"

PH1F_T_Mom16::
# 1008 "data/maps/Player_House_1F/scripts.pory"
	.string "Alright, sweetie, you be safe out there,\n"
	.string "okay?\p"
	.string "Just know that I am always rooting for\n"
	.string "you, {PLAYER}!$"

PH1F_T_Mom17::
# 1015 "data/maps/Player_House_1F/scripts.pory"
	.string "Go back on your mat, little one!$"

PH1F_T_Mike1::
# 1019 "data/maps/Player_House_1F/scripts.pory"
	.string "Thank you so much for letting us use\n"
	.string "the TV again!\p"
	.string "I wish my Grandparents had one, but\n"
	.string "they spend all their money on\l"
	.string "PokeTreats for Millie...$"

PH1F_T_Mike2::
# 1027 "data/maps/Player_House_1F/scripts.pory"
	.string "Let's go, {PLAYER}!!$"

PH1F_T_Mike3::
# 1031 "data/maps/Player_House_1F/scripts.pory"
	.string "Bo said this one is his favorite!\n"
	.string "This is going to be so awesome!$"

PH1F_T_Mike5::
# 1036 "data/maps/Player_House_1F/scripts.pory"
	.string "Where ya goin, {PLAYER}?!\n"
	.string "Get over here!$"

PH1F_T_Mike4::
# 1041 "data/maps/Player_House_1F/scripts.pory"
	.string "That was unbelievable, {PLAYER}!!!\p"
	.string "Did you see how strong and cool their\n"
	.string "Pokemon were?!\p"
	.string "That Arcanine was so powerful...\n"
	.string "And that Dusclops, oh man!\p"
	.string "Bo sure wasn't kidding, that was great!\p"
	.string "Dang, {PLAYER}, if only we could become\n"
	.string "Pokemon trainers...\l"
	.string "I just know that could be us battling\l"
	.string "each other for a title one day!\p"
	.string "Well, that'll have to wait.\p"
	.string "I gotta feed Millie real quick, but we\n"
	.string "should go return this tape together!\p"
	.string "Meet me at my Grandparent's house!$"

PH1F_T_Mike6::
# 1058 "data/maps/Player_House_1F/scripts.pory"
	.string "Oh... {PAUSE 30}Shoot... {PAUSE 30}Hi, sorry, I just came over\n"
	.string "to tell {PLAYER} something!\p"
	.string "It isn't serious or anything like that,\n"
	.string "just nothin' but some yappin' as Papaw\l"
	.string "always says, haha!\p"
	.string "...$"

PH1F_T_Mike7::
# 1067 "data/maps/Player_House_1F/scripts.pory"
	.string "Well um... {PAUSE 30}so me and {PLAYER} went to\n"
	.string "Bo's house to return that battle tape...{PAUSE 30}\p"
	.string "We were waiting for him to get home\n"
	.string "when some of his Pokemon escaped the\l"
	.string "ranch!\p"
	.string "{PLAYER} rescued them from the woods,\n"
	.string "and Bo asked if we wanted to take one,\l"
	.string "so we said yes!\p"
	.string "I hope this doesn't get {PLAYER} in\n"
	.string "trouble!\p"
	.string "We've just wanted to become Pokemon\n"
	.string "Trainers for so long, and this seemed\l"
	.string "like our only chance!!$"

PH1F_T_Mike8::
# 1083 "data/maps/Player_House_1F/scripts.pory"
	.string "Alright, {PLAYER}, I guess it's time!\n"
	.string "Meet me in Millie's pen, I have something\l"
	.string "incredible to show you!$"

PH1F_T_System1::
# 1089 "data/maps/Player_House_1F/scripts.pory"
	.string "{PLAYER} received the Running Shoes!$"

PH1F_T_System2::
# 1093 "data/maps/Player_House_1F/scripts.pory"
	.string "'Hold {B_BUTTON} to run like the wind!'$"

PH1F_T_Dresser::
# 1097 "data/maps/Player_House_1F/scripts.pory"
	.string "The drawers are filled with old-style\n"
	.string "Western films.$"

PH1F_T_Picture::
# 1102 "data/maps/Player_House_1F/scripts.pory"
	.string "It is a beautiful sunset painting.\n"
	.string "The artist is clearly very talented.$"

PH1F_T_Oven::
# 1107 "data/maps/Player_House_1F/scripts.pory"
	.string "It smells delicious!$"
