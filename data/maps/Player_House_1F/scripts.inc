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
	.2byte 0


PH1F_UpdateSpritePos::
# 13 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 8
	goto_if_eq PH1F_UpdateSpritePos_2
# 18 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 12
	goto_if_eq PH1F_UpdateSpritePos_3
# 22 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq PH1F_UpdateSpritePos_4
PH1F_UpdateSpritePos_1:
	end

PH1F_UpdateSpritePos_2:
# 14 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 1, 9, 5
# 15 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 16 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	goto PH1F_UpdateSpritePos_1

PH1F_UpdateSpritePos_3:
# 19 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 3, 3, 4
# 20 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	goto PH1F_UpdateSpritePos_1

PH1F_UpdateSpritePos_4:
# 23 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 1, 9, 5
# 24 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 2, 8, 5
# 25 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 3, 10, 8
# 26 "data/maps/Player_House_1F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	goto PH1F_UpdateSpritePos_1


PH1F_Update_Tiles::
# 34 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 12
	goto_if_eq PH1F_Update_Tiles_2
PH1F_Update_Tiles_1:
	end

PH1F_Update_Tiles_2:
# 35 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x0BC, TRUE
# 36 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x0BD, TRUE
# 37 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x0C4, TRUE
# 38 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x0C5, TRUE
	goto PH1F_Update_Tiles_1


PH1F_MomIntro::
# 46 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_WEST
# 47 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 48 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 49 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 51 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom1
# 52 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 54 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom1
# 55 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 56 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom2
# 57 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 58 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 59 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 60 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 61 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 63 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom3
# 64 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 66 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 67 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom6
# 68 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 69 "data/maps/Player_House_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 70 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 71 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_System1
# 72 "data/maps/Player_House_1F/scripts.pory"
	waitfanfare
# 73 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_System2
# 74 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 75 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 76 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 77 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom4
# 78 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 3
# 80 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 81 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


PH1F_MomInteract::
# 86 "data/maps/Player_House_1F/scripts.pory"
	faceplayer
# 87 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 3
	goto_if_eq PH1F_MomInteract_2
# 94 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 4
	goto_if_eq PH1F_MomInteract_3
# 101 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 9
	goto_if_eq PH1F_MomInteract_4
# 107 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 13
	goto_if_eq PH1F_MomInteract_5
# 114 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 14
	goto_if_eq PH1F_MomInteract_6
# 122 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 123 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_MomInteract_Text_0
# 124 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 125 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 126 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
PH1F_MomInteract_1:
# 128 "data/maps/Player_House_1F/scripts.pory"
	release
	end

PH1F_MomInteract_2:
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

PH1F_MomInteract_3:
# 95 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 96 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom3
# 97 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 98 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 99 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
	goto PH1F_MomInteract_1

PH1F_MomInteract_4:
# 102 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 103 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom4
# 104 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 105 "data/maps/Player_House_1F/scripts.pory"
	closemessage
	goto PH1F_MomInteract_1

PH1F_MomInteract_5:
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

PH1F_MomInteract_6:
# 115 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 116 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom5
# 117 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 118 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 119 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
	goto PH1F_MomInteract_1


PH1F_Lilli_Interact::
# 133 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 9
	goto_if_eq PH1F_Lilli_Interact_2
# 140 "data/maps/Player_House_1F/scripts.pory"
	faceplayer
# 141 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 142 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 143 "data/maps/Player_House_1F/scripts.pory"
	turnobject 2, DIR_NORTH
PH1F_Lilli_Interact_1:
# 145 "data/maps/Player_House_1F/scripts.pory"
	release
	end

PH1F_Lilli_Interact_2:
# 134 "data/maps/Player_House_1F/scripts.pory"
	faceplayer
# 135 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 136 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 137 "data/maps/Player_House_1F/scripts.pory"
	turnobject 2, DIR_WEST
	goto PH1F_Lilli_Interact_1


PH1F_Dresser_Interact::
# 150 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 151 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Dresser
# 152 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 153 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 154 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 155 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Picture_Interact::
# 160 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 161 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Picture
# 162 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 163 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 164 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 165 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Oven_Interact::
# 170 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 171 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Oven
# 172 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 173 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 174 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 175 "data/maps/Player_House_1F/scripts.pory"
	release
	end


WarpTo_Test::
# 180 "data/maps/Player_House_1F/scripts.pory"
	lock
# 181 "data/maps/Player_House_1F/scripts.pory"
	warpsilent MAP_TEST_MAP, 9, 14
# 182 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTapeStart::
# 188 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 189 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_1
# 190 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 191 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 192 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike1
# 193 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 194 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 195 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 196 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 197 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 198 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 199 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom2
# 200 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 201 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 202 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 203 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 204 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 205 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 206 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 207 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike2
# 208 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 209 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 210 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike1
# 211 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 212 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 3, 3, 4
# 213 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_2
# 214 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 215 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 216 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 217 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 218 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 9
# 219 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape_TurnBack::
# 224 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 225 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_3
# 226 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 227 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 228 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike5
# 229 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 230 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 231 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_3R
# 232 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 233 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 234 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 235 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape_TurnBack_B::
# 240 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 241 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_4
# 242 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 243 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 244 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike5
# 245 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 246 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 247 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_4R
# 248 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 249 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 250 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 251 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape::
# 256 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 257 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 258 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike3
# 259 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 260 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 261 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 262 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 263 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 264 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 265 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 266 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 267 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 268 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x0BC, TRUE
# 269 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x0BD, TRUE
# 270 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x0C4, TRUE
# 271 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x0C5, TRUE
# 272 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 273 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 274 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 275 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 276 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 10
# 277 "data/maps/Player_House_1F/scripts.pory"
	warpwhitefade MAP_BATTLE_STAGE_VIDEO, 15, 29
# 278 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Post_BattleTape::
# 283 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 284 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 285 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 286 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 287 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike4
# 288 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 289 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 290 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 291 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x08B, TRUE
# 292 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x08C, TRUE
# 293 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x093, TRUE
# 294 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x094, TRUE
# 295 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 296 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 297 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 298 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 299 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 300 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL
# 301 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 302 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 303 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike2
# 304 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 305 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 306 "data/maps/Player_House_1F/scripts.pory"
	playse SE_EXIT
# 307 "data/maps/Player_House_1F/scripts.pory"
	removeobject 3
# 308 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 309 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 310 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_2
# 311 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 13
# 312 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Mom_PostStarter::
# 317 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 318 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_5
# 319 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 320 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 321 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 322 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 323 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 324 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 325 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 326 "data/maps/Player_House_1F/scripts.pory"
	delay 5
# 327 "data/maps/Player_House_1F/scripts.pory"
	turnobject 2, DIR_SOUTH
# 328 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 329 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_6
# 330 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_1
# 331 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom5
# 332 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 333 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 334 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 335 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom7
# 336 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 337 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 338 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_Exclam
# 339 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 340 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 341 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 342 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 343 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 344 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_2
# 345 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 346 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSW1
# 347 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 348 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_WEST
# 349 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 350 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 351 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 352 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 353 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 354 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 355 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 356 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_3
# 357 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 358 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 359 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 360 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 361 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 362 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 363 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 364 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 365 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 366 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 367 "data/maps/Player_House_1F/scripts.pory"
	delay 40
# 368 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 369 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 370 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 371 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 372 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Question
# 373 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 374 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 375 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 376 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 377 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 378 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 379 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom8
# 380 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 381 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 382 "data/maps/Player_House_1F/scripts.pory"
	playse SE_DOOR
# 383 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 384 "data/maps/Player_House_1F/scripts.pory"
	playse SE_WALL_HIT
# 385 "data/maps/Player_House_1F/scripts.pory"
	addobject 3
# 386 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PH1F_M_Player1
# 387 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 388 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 389 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 390 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 391 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike6
# 392 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 393 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 394 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 395 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 396 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 397 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 398 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 399 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 400 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_WEST
# 401 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 402 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 403 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 404 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 405 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_3
# 406 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 407 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 408 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 409 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 410 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 411 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 412 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 413 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 414 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 415 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 416 "data/maps/Player_House_1F/scripts.pory"
	delay 40
# 417 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 418 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 419 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 420 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 421 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 422 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom9
# 423 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 424 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 425 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 426 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 427 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 428 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 429 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike7
# 430 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 431 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 432 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 433 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 434 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 435 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 436 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 437 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 438 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 439 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 440 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom6
# 441 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 442 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 443 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 444 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 445 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 446 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom10
# 447 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 448 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 449 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 450 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom7
# 451 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 452 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 453 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 454 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 455 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom11
# 456 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 457 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 458 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom8
# 459 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 460 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 461 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 462 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 463 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 464 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_Mom_PostStarter_Text_0
# 465 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 466 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 467 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 468 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 469 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 470 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 471 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 472 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_3
# 473 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 474 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 475 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 476 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_StepUp1
# 477 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_4
# 478 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 479 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 480 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 481 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 482 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 483 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 484 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 485 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 486 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike8
# 487 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 488 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 489 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 490 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 491 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 492 "data/maps/Player_House_1F/scripts.pory"
	playse SE_EXIT
# 493 "data/maps/Player_House_1F/scripts.pory"
	removeobject 3
# 494 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 495 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 496 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 497 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 498 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 499 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_HF_HIDE_MAMAW
# 500 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_RH1F_HIDE_MAMAW
# 501 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 19
# 502 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


# 508 "data/maps/Player_House_1F/scripts.pory"
Univ_Exclam:
# 509 "data/maps/Player_House_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 512 "data/maps/Player_House_1F/scripts.pory"
Univ_Question:
# 513 "data/maps/Player_House_1F/scripts.pory"
	emote_question_mark
	step_end

# 516 "data/maps/Player_House_1F/scripts.pory"
Univ_DoubleExclam:
# 517 "data/maps/Player_House_1F/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 520 "data/maps/Player_House_1F/scripts.pory"
Univ_Heart:
# 521 "data/maps/Player_House_1F/scripts.pory"
	emote_heart
	step_end

# 524 "data/maps/Player_House_1F/scripts.pory"
Univ_X:
# 525 "data/maps/Player_House_1F/scripts.pory"
	emote_x
	step_end

# 528 "data/maps/Player_House_1F/scripts.pory"
Univ_StepUp1:
# 529 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 532 "data/maps/Player_House_1F/scripts.pory"
Univ_StepDown1:
# 533 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 536 "data/maps/Player_House_1F/scripts.pory"
Univ_StepRight1:
# 537 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 540 "data/maps/Player_House_1F/scripts.pory"
Univ_StepLeft1:
# 541 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 544 "data/maps/Player_House_1F/scripts.pory"
Univ_StepNE1:
# 545 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northeast
	step_end

# 548 "data/maps/Player_House_1F/scripts.pory"
Univ_StepNW1:
# 549 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
	step_end

# 552 "data/maps/Player_House_1F/scripts.pory"
Univ_StepSE1:
# 553 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
	step_end

# 556 "data/maps/Player_House_1F/scripts.pory"
Univ_StepSW1:
# 557 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southwest
	step_end

# 560 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Up:
# 561 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_up
	step_end

# 564 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Down:
# 565 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_down
	step_end

# 568 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Right:
# 569 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_right
	step_end

# 572 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Left:
# 573 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_left
	step_end

# 576 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideUp1:
# 577 "data/maps/Player_House_1F/scripts.pory"
	slide_up
	step_end

# 580 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideDown1:
# 581 "data/maps/Player_House_1F/scripts.pory"
	slide_down
	step_end

# 584 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideRight1:
# 585 "data/maps/Player_House_1F/scripts.pory"
	slide_right
	step_end

# 588 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideLeft1:
# 589 "data/maps/Player_House_1F/scripts.pory"
	slide_left
	step_end

# 595 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom1:
# 596 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 596 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 596 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 596 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 597 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 600 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom2:
# 601 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 602 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 602 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 605 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom3:
# 606 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 606 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 607 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 610 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom4:
# 611 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 612 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 612 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 612 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 612 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 613 "data/maps/Player_House_1F/scripts.pory"
	face_up
	step_end

# 616 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom5:
# 617 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 617 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 618 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 619 "data/maps/Player_House_1F/scripts.pory"
	face_down
	step_end

# 622 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom6:
# 623 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 624 "data/maps/Player_House_1F/scripts.pory"
	face_down
	step_end

# 627 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom7:
# 628 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 629 "data/maps/Player_House_1F/scripts.pory"
	face_down
	step_end

# 632 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom8:
# 633 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 634 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 637 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_1:
# 638 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 639 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 639 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 642 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_2:
# 643 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 644 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 647 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_3:
# 648 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 649 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 650 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 651 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 652 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 653 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 654 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 655 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 656 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 657 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 658 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 659 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 660 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 661 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 662 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 663 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 664 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 665 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 666 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 667 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 670 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_4:
# 671 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 671 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 672 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 673 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
	step_end

# 676 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_1:
# 677 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 677 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 678 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 681 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_2:
# 682 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 682 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 683 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 686 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_3:
# 687 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 687 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 687 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 687 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
	step_end

# 690 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_3R:
# 691 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 691 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 691 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 692 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 695 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_4:
# 696 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southwest
# 697 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 700 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_4R:
# 701 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 701 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 704 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_5:
# 705 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 705 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 705 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 708 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_6:
# 709 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 709 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 712 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike1:
# 713 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 714 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 714 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 714 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 714 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 714 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 715 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 718 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike2:
# 719 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 719 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 720 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 720 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 720 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 721 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 721 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 721 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 721 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 721 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 721 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 721 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 721 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 721 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 722 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
	step_end

# 725 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Player1:
# 726 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 727 "data/maps/Player_House_1F/scripts.pory"
	slide_right
# 728 "data/maps/Player_House_1F/scripts.pory"
	face_left
	step_end

PH1F_MomIntro_Text_0:
# 53 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mom$"

PH1F_MomInteract_Text_0:
# 123 "data/maps/Player_House_1F/scripts.pory"
	.string "VAR Switch Error.$"

PH1F_BattleTapeStart_Text_0:
# 191 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

PH1F_Mom_PostStarter_Text_0:
# 464 "data/maps/Player_House_1F/scripts.pory"
	.string "Let's go, my little Lillipad!$"

PH1F_T_Mom1::
# 733 "data/maps/Player_House_1F/scripts.pory"
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
# 745 "data/maps/Player_House_1F/scripts.pory"
	.string "Silly me, I almost forgot!\n"
	.string "Your running shoes came in from the\l"
	.string "city this morning.\p"
	.string "Here you go!$"

PH1F_T_Mom2::
# 752 "data/maps/Player_House_1F/scripts.pory"
	.string "You're very welcome sweetie.\n"
	.string "You be sure to thank Bo as well!$"

PH1F_T_Mom3::
# 757 "data/maps/Player_House_1F/scripts.pory"
	.string "Don't forget to help your father,\n"
	.string "{PLAYER}, he shouldn't do all that work\l"
	.string "by himself.$"

PH1F_T_Mom4::
# 763 "data/maps/Player_House_1F/scripts.pory"
	.string "You two enjoy your movie, {PLAYER}!$"

PH1F_T_Mom5::
# 767 "data/maps/Player_House_1F/scripts.pory"
	.string "Lunch should be ready soon, sweetie!$"

PH1F_T_Mom7::
# 771 "data/maps/Player_House_1F/scripts.pory"
	.string "There you are, {PLAYER}!\n"
	.string "You missed lunch, sweetie, your father\l"
	.string "and I were worried!\p"
	.string "What took you so long?!$"

PH1F_T_Mom8::
# 778 "data/maps/Player_House_1F/scripts.pory"
	.string "Huh... {PAUSE 30}that's so strange.\n"
	.string "I've only seen Lilli act like that when\l"
	.string "there was another Pokemon nearby.\p"
	.string "Is there something you need to tell me,\n"
	.string "honey?$"

PH1F_T_Mom9::
# 786 "data/maps/Player_House_1F/scripts.pory"
	.string "Mike, someone needs to tell me what's\n"
	.string "going on here!\p"
	.string "Lilli is acting like there are Pokemon in\n"
	.string "the room, and I don't know how that\l"
	.string "would be possible.$"

PH1F_T_Mom10::
# 794 "data/maps/Player_House_1F/scripts.pory"
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
# 828 "data/maps/Player_House_1F/scripts.pory"
	.string "You be safe out there too, sweetie!\p"
	.string "Make sure you tell your Grandparents\n"
	.string "about your plans!$"

PH1F_T_Mike1::
# 834 "data/maps/Player_House_1F/scripts.pory"
	.string "Thank you so much for letting us use\n"
	.string "the TV again!\p"
	.string "I wish my Grandparents had one, but\n"
	.string "they spend all their money on\l"
	.string "PokeTreats for Millie...$"

PH1F_T_Mike2::
# 842 "data/maps/Player_House_1F/scripts.pory"
	.string "Let's go, {PLAYER}!!$"

PH1F_T_Mike3::
# 846 "data/maps/Player_House_1F/scripts.pory"
	.string "Bo said this one is his favorite!\n"
	.string "This is going to be so awesome!$"

PH1F_T_Mike5::
# 851 "data/maps/Player_House_1F/scripts.pory"
	.string "Where ya goin, {PLAYER}?!\n"
	.string "Get over here!$"

PH1F_T_Mike4::
# 856 "data/maps/Player_House_1F/scripts.pory"
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
# 873 "data/maps/Player_House_1F/scripts.pory"
	.string "Oh... {PAUSE 30}Shoot... {PAUSE 30}Hi, sorry, I just came over\n"
	.string "to tell {PLAYER} something!\p"
	.string "It isn't serious or anything like that,\n"
	.string "just nothin' but some yappin' as Papaw\l"
	.string "always says, haha!\p"
	.string "...$"

PH1F_T_Mike7::
# 882 "data/maps/Player_House_1F/scripts.pory"
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
# 898 "data/maps/Player_House_1F/scripts.pory"
	.string "Alright, {PLAYER}, I guess it's time!\n"
	.string "Meet me in Millie's pen, I have something\l"
	.string "incredible to show you!$"

PH1F_T_System1::
# 904 "data/maps/Player_House_1F/scripts.pory"
	.string "{PLAYER} received the Running Shoes!$"

PH1F_T_System2::
# 908 "data/maps/Player_House_1F/scripts.pory"
	.string "'Hold {B_BUTTON} to run like the wind!'$"

PH1F_T_Dresser::
# 912 "data/maps/Player_House_1F/scripts.pory"
	.string "The drawers are filled with old-style\n"
	.string "Western films.$"

PH1F_T_Picture::
# 917 "data/maps/Player_House_1F/scripts.pory"
	.string "It is a beautiful sunset painting.\n"
	.string "The artist is clearly very talented.$"

PH1F_T_Oven::
# 922 "data/maps/Player_House_1F/scripts.pory"
	.string "It smells delicious!$"
