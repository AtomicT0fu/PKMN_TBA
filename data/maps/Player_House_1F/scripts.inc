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
	delay 30
# 52 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 53 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 54 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 55 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 56 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom3
# 57 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 58 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 59 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 60 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom6
# 61 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 62 "data/maps/Player_House_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 64 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_System1
# 65 "data/maps/Player_House_1F/scripts.pory"
	waitfanfare
# 66 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_System2
# 67 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 68 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 69 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 70 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom4
# 71 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 72 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 3
# 73 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 74 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


PH1F_MomInteract::
# 79 "data/maps/Player_House_1F/scripts.pory"
	faceplayer
# 80 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 3
	goto_if_eq PH1F_MomInteract_2
# 87 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 4
	goto_if_eq PH1F_MomInteract_3
# 94 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 9
	goto_if_eq PH1F_MomInteract_4
# 100 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 13
	goto_if_eq PH1F_MomInteract_5
# 107 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 14
	goto_if_eq PH1F_MomInteract_6
# 115 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 116 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_MomInteract_Text_0
# 117 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 118 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 119 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
PH1F_MomInteract_1:
# 121 "data/maps/Player_House_1F/scripts.pory"
	release
	end

PH1F_MomInteract_2:
# 81 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 82 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom3
# 83 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 84 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 85 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
	goto PH1F_MomInteract_1

PH1F_MomInteract_3:
# 88 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 89 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom3
# 90 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 91 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 92 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
	goto PH1F_MomInteract_1

PH1F_MomInteract_4:
# 95 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 96 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom4
# 97 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 98 "data/maps/Player_House_1F/scripts.pory"
	closemessage
	goto PH1F_MomInteract_1

PH1F_MomInteract_5:
# 101 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 102 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom5
# 103 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 104 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 105 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
	goto PH1F_MomInteract_1

PH1F_MomInteract_6:
# 108 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 109 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom5
# 110 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 111 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 112 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
	goto PH1F_MomInteract_1


PH1F_Lilli_Interact::
# 126 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 9
	goto_if_eq PH1F_Lilli_Interact_2
# 133 "data/maps/Player_House_1F/scripts.pory"
	faceplayer
# 134 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 135 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 136 "data/maps/Player_House_1F/scripts.pory"
	turnobject 2, DIR_NORTH
PH1F_Lilli_Interact_1:
# 138 "data/maps/Player_House_1F/scripts.pory"
	release
	end

PH1F_Lilli_Interact_2:
# 127 "data/maps/Player_House_1F/scripts.pory"
	faceplayer
# 128 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 129 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 130 "data/maps/Player_House_1F/scripts.pory"
	turnobject 2, DIR_WEST
	goto PH1F_Lilli_Interact_1


PH1F_Dresser_Interact::
# 143 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 144 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Dresser
# 145 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 146 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 147 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 148 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Picture_Interact::
# 153 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 154 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Picture
# 155 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 156 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 157 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 158 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Oven_Interact::
# 163 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 164 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Oven
# 165 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 166 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 167 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 168 "data/maps/Player_House_1F/scripts.pory"
	release
	end


WarpTo_Test::
# 173 "data/maps/Player_House_1F/scripts.pory"
	lock
# 174 "data/maps/Player_House_1F/scripts.pory"
	warpsilent MAP_TEST_MAP, 9, 14
# 175 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTapeStart::
# 181 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 182 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_1
# 183 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 184 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 185 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike1
# 186 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 187 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 188 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 189 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 190 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 191 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 192 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom2
# 193 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 194 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 195 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 196 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 197 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 198 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 199 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 200 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike2
# 201 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 202 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 203 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike1
# 204 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 205 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 3, 3, 4
# 206 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_2
# 207 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 208 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 209 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 210 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 211 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 9
# 212 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape_TurnBack::
# 217 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 218 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_3
# 219 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 220 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 221 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike5
# 222 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 223 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 224 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_3R
# 225 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 226 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 227 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 228 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape_TurnBack_B::
# 233 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 234 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_4
# 235 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 236 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 237 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike5
# 238 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 239 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 240 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_4R
# 241 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 242 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 243 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 244 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape::
# 249 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 250 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 251 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike3
# 252 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 253 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 254 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 255 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 256 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 257 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 258 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 259 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 260 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 261 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x0BC, TRUE
# 262 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x0BD, TRUE
# 263 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x0C4, TRUE
# 264 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x0C5, TRUE
# 265 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 266 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 267 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 268 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 269 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 10
# 270 "data/maps/Player_House_1F/scripts.pory"
	warpwhitefade MAP_BATTLE_STAGE_VIDEO, 15, 29
# 271 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Post_BattleTape::
# 276 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 277 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 278 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 279 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 280 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike4
# 281 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 282 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 283 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 284 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x08B, TRUE
# 285 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x08C, TRUE
# 286 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x093, TRUE
# 287 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x094, TRUE
# 288 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 289 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 290 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 291 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 292 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 293 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL
# 294 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 295 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 296 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike2
# 297 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 298 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 299 "data/maps/Player_House_1F/scripts.pory"
	playse SE_EXIT
# 300 "data/maps/Player_House_1F/scripts.pory"
	removeobject 3
# 301 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 302 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 303 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_2
# 304 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 13
# 305 "data/maps/Player_House_1F/scripts.pory"
	release
	end


# 311 "data/maps/Player_House_1F/scripts.pory"
Univ_Exclam:
# 312 "data/maps/Player_House_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 315 "data/maps/Player_House_1F/scripts.pory"
Univ_Question:
# 316 "data/maps/Player_House_1F/scripts.pory"
	emote_question_mark
	step_end

# 319 "data/maps/Player_House_1F/scripts.pory"
Univ_DoubleExclam:
# 320 "data/maps/Player_House_1F/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 323 "data/maps/Player_House_1F/scripts.pory"
Univ_Heart:
# 324 "data/maps/Player_House_1F/scripts.pory"
	emote_heart
	step_end

# 327 "data/maps/Player_House_1F/scripts.pory"
Univ_X:
# 328 "data/maps/Player_House_1F/scripts.pory"
	emote_x
	step_end

# 331 "data/maps/Player_House_1F/scripts.pory"
Univ_StepUp1:
# 332 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 335 "data/maps/Player_House_1F/scripts.pory"
Univ_StepDown1:
# 336 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 339 "data/maps/Player_House_1F/scripts.pory"
Univ_StepRight1:
# 340 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 343 "data/maps/Player_House_1F/scripts.pory"
Univ_StepLeft1:
# 344 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 347 "data/maps/Player_House_1F/scripts.pory"
Univ_StepNE1:
# 348 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northeast
	step_end

# 351 "data/maps/Player_House_1F/scripts.pory"
Univ_StepNW1:
# 352 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
	step_end

# 355 "data/maps/Player_House_1F/scripts.pory"
Univ_StepSE1:
# 356 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
	step_end

# 359 "data/maps/Player_House_1F/scripts.pory"
Univ_StepSW1:
# 360 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southwest
	step_end

# 363 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Up:
# 364 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_up
	step_end

# 367 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Down:
# 368 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_down
	step_end

# 371 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Right:
# 372 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_right
	step_end

# 375 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Left:
# 376 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_left
	step_end

# 379 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideUp1:
# 380 "data/maps/Player_House_1F/scripts.pory"
	slide_up
	step_end

# 383 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideDown1:
# 384 "data/maps/Player_House_1F/scripts.pory"
	slide_down
	step_end

# 387 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideRight1:
# 388 "data/maps/Player_House_1F/scripts.pory"
	slide_right
	step_end

# 391 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideLeft1:
# 392 "data/maps/Player_House_1F/scripts.pory"
	slide_left
	step_end

# 398 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom1:
# 399 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 399 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 399 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 399 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 400 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 403 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom2:
# 404 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 405 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 405 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 408 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom3:
# 409 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 409 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 410 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 413 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom4:
# 414 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 415 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 415 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 415 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 415 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 416 "data/maps/Player_House_1F/scripts.pory"
	face_up
	step_end

# 419 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_1:
# 420 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 420 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 420 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 421 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 421 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 424 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_2:
# 425 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 425 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 425 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 426 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 426 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 429 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_3:
# 430 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 430 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 430 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 430 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
	step_end

# 433 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_3R:
# 434 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 434 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 434 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 435 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 438 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_4:
# 439 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southwest
# 440 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 443 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_4R:
# 444 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 444 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 447 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike1:
# 448 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 449 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 449 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 449 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 449 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 449 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 450 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 453 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike2:
# 454 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 454 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 455 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 455 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 455 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 456 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 456 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 456 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 456 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 456 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 456 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 456 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 456 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 456 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 457 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
	step_end

PH1F_MomIntro_Text_0:
# 46 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mom$"

PH1F_MomInteract_Text_0:
# 116 "data/maps/Player_House_1F/scripts.pory"
	.string "VAR Switch Error.$"

PH1F_BattleTapeStart_Text_0:
# 184 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

PH1F_T_Mom1::
# 462 "data/maps/Player_House_1F/scripts.pory"
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
# 474 "data/maps/Player_House_1F/scripts.pory"
	.string "Silly me, I almost forgot!\n"
	.string "Your running shoes came in from the\l"
	.string "city this morning.\p"
	.string "Here you go!$"

PH1F_T_Mom2::
# 481 "data/maps/Player_House_1F/scripts.pory"
	.string "You're very welcome sweetie.\n"
	.string "You be sure to thank Bo as well!$"

PH1F_T_Mom3::
# 486 "data/maps/Player_House_1F/scripts.pory"
	.string "Don't forget to help your father,\n"
	.string "{PLAYER}, he shouldn't do all that work\l"
	.string "by himself.$"

PH1F_T_Mom4::
# 492 "data/maps/Player_House_1F/scripts.pory"
	.string "You two enjoy your movie, {PLAYER}!$"

PH1F_T_Mom5::
# 496 "data/maps/Player_House_1F/scripts.pory"
	.string "Lunch should be ready soon, sweetie!$"

PH1F_T_Mike1::
# 500 "data/maps/Player_House_1F/scripts.pory"
	.string "Thank you so much for letting us use\n"
	.string "the TV again!\p"
	.string "I wish my Grandparents had one, but\n"
	.string "they spend all their money on\p"
	.string "PokeTreats for Millie...$"

PH1F_T_Mike2::
# 508 "data/maps/Player_House_1F/scripts.pory"
	.string "Let's go, {PLAYER}!!$"

PH1F_T_Mike3::
# 512 "data/maps/Player_House_1F/scripts.pory"
	.string "Bo said this one is his favorite!\n"
	.string "This is going to be so awesome!$"

PH1F_T_Mike5::
# 517 "data/maps/Player_House_1F/scripts.pory"
	.string "Where ya goin, {PLAYER}?!\n"
	.string "Get over here!$"

PH1F_T_Mike4::
# 522 "data/maps/Player_House_1F/scripts.pory"
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
# 539 "data/maps/Player_House_1F/scripts.pory"
	.string "{PLAYER} received the Running Shoes!$"

PH1F_T_System2::
# 543 "data/maps/Player_House_1F/scripts.pory"
	.string "'Hold {B_BUTTON} to run like the wind!'$"

PH1F_T_Dresser::
# 547 "data/maps/Player_House_1F/scripts.pory"
	.string "The drawers are filled with old-style\n"
	.string "Western films.$"

PH1F_T_Picture::
# 552 "data/maps/Player_House_1F/scripts.pory"
	.string "It is a beautiful sunset painting.\n"
	.string "The artist is clearly very talented.$"

PH1F_T_Oven::
# 557 "data/maps/Player_House_1F/scripts.pory"
	.string "It smells delicious!$"
