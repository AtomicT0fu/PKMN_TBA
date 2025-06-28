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
# 141 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 24
	goto_if_ge PH1F_MomInteract_8
PH1F_MomInteract_1:
# 157 "data/maps/Player_House_1F/scripts.pory"
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

PH1F_MomInteract_8:
# 142 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 143 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_MomHealParty
# 144 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 145 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 146 "data/maps/Player_House_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 147 "data/maps/Player_House_1F/scripts.pory"
	playfanfare MUS_RG_HEAL
# 148 "data/maps/Player_House_1F/scripts.pory"
	waitfanfare
# 149 "data/maps/Player_House_1F/scripts.pory"
	special HealPlayerParty
# 150 "data/maps/Player_House_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 151 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 152 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_MomPostHeal
# 153 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 154 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 155 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_NORTH
	goto PH1F_MomInteract_1


PH1F_Lilli_Interact::
# 162 "data/maps/Player_House_1F/scripts.pory"
	compare VAR_ADVENTURE_START, 9
	goto_if_eq PH1F_Lilli_Interact_2
# 169 "data/maps/Player_House_1F/scripts.pory"
	faceplayer
# 170 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 171 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 172 "data/maps/Player_House_1F/scripts.pory"
	turnobject 2, DIR_NORTH
PH1F_Lilli_Interact_1:
# 174 "data/maps/Player_House_1F/scripts.pory"
	release
	end

PH1F_Lilli_Interact_2:
# 163 "data/maps/Player_House_1F/scripts.pory"
	faceplayer
# 164 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 165 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 166 "data/maps/Player_House_1F/scripts.pory"
	turnobject 2, DIR_WEST
	goto PH1F_Lilli_Interact_1


PH1F_Dresser_Interact::
# 179 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 180 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Dresser
# 181 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 182 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 183 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 184 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Picture_Interact::
# 189 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 190 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Picture
# 191 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 192 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 193 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 194 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Oven_Interact::
# 199 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 200 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Oven
# 201 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 202 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 203 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 204 "data/maps/Player_House_1F/scripts.pory"
	release
	end


WarpTo_Test::
# 209 "data/maps/Player_House_1F/scripts.pory"
	lock
# 210 "data/maps/Player_House_1F/scripts.pory"
	warpsilent MAP_TEST_MAP, 9, 14
# 211 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTapeStart::
# 217 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 218 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_1
# 219 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 220 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 221 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike1
# 222 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 223 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 224 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 225 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 226 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 227 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 228 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom2
# 229 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 230 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 231 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 232 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 233 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 234 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 235 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 236 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike2
# 237 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 238 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 239 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike1
# 240 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 241 "data/maps/Player_House_1F/scripts.pory"
	setobjectxyperm 3, 3, 4
# 242 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_2
# 243 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 244 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 245 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 246 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 247 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 9
# 248 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape_TurnBack::
# 253 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 254 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_3
# 255 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 256 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 257 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike5
# 258 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 259 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 260 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_3R
# 261 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 262 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 263 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 264 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape_TurnBack_B::
# 269 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 270 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_4
# 271 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 272 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 273 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike5
# 274 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 275 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 276 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_4R
# 277 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 278 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 279 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 280 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_BattleTape::
# 285 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 286 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 287 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike3
# 288 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 289 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 290 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 291 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 292 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 293 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 294 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 295 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 296 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 297 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x0BC, TRUE
# 298 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x0BD, TRUE
# 299 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x0C4, TRUE
# 300 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x0C5, TRUE
# 301 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 302 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 303 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 304 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 305 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 10
# 306 "data/maps/Player_House_1F/scripts.pory"
	warpwhitefade MAP_BATTLE_STAGE_VIDEO, 15, 29
# 307 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Post_BattleTape::
# 312 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 313 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 314 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 315 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 316 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike4
# 317 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 318 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 319 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 320 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 2, 0x08B, TRUE
# 321 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 2, 0x08C, TRUE
# 322 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 3, 3, 0x093, TRUE
# 323 "data/maps/Player_House_1F/scripts.pory"
	setmetatile 4, 3, 0x094, TRUE
# 324 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 325 "data/maps/Player_House_1F/scripts.pory"
	playse SE_SWITCH
# 326 "data/maps/Player_House_1F/scripts.pory"
	special DrawWholeMapView
# 327 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 328 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 329 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL
# 330 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 331 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 332 "data/maps/Player_House_1F/scripts.pory"
	applymovement 3, PH1F_W_Mike2
# 333 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 334 "data/maps/Player_House_1F/scripts.pory"
	delay 10
# 335 "data/maps/Player_House_1F/scripts.pory"
	playse SE_EXIT
# 336 "data/maps/Player_House_1F/scripts.pory"
	removeobject 3
# 337 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 338 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 339 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_2
# 340 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 13
# 341 "data/maps/Player_House_1F/scripts.pory"
	release
	end


PH1F_Mom_PostStarter::
# 346 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 347 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_5
# 348 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 349 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 350 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 351 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 352 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 353 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 354 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 355 "data/maps/Player_House_1F/scripts.pory"
	delay 5
# 356 "data/maps/Player_House_1F/scripts.pory"
	turnobject 2, DIR_SOUTH
# 357 "data/maps/Player_House_1F/scripts.pory"
	delay 60
# 358 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_6
# 359 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_1
# 360 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom5
# 361 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 362 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 363 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 364 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom7
# 365 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 366 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 367 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_Exclam
# 368 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 369 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 370 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 371 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 372 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 373 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_2
# 374 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 375 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSW1
# 376 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 377 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_WEST
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
	applymovement 2, PH1F_M_Lilli_3
# 386 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 387 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 388 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 389 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 390 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 391 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 392 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 393 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 394 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 395 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 396 "data/maps/Player_House_1F/scripts.pory"
	delay 40
# 397 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 398 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 399 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 400 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 401 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Question
# 402 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 403 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 404 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 405 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 406 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 407 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 408 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom8
# 409 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 410 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 411 "data/maps/Player_House_1F/scripts.pory"
	playse SE_DOOR
# 412 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 413 "data/maps/Player_House_1F/scripts.pory"
	playse SE_WALL_HIT
# 414 "data/maps/Player_House_1F/scripts.pory"
	addobject 3
# 415 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PH1F_M_Player1
# 416 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 417 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 418 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 419 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 420 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike6
# 421 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 422 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 423 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 424 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 425 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 426 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 427 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 428 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 429 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_WEST
# 430 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 431 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 432 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 433 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 434 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_3
# 435 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 436 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 437 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 438 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 439 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 440 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 441 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 442 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 443 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 444 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 445 "data/maps/Player_House_1F/scripts.pory"
	delay 40
# 446 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 447 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 448 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 449 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 450 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 451 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom9
# 452 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 453 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 454 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 455 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 456 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 457 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 458 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike7
# 459 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 460 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 461 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 462 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 463 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 464 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 465 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_Exclam
# 466 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 467 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 468 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 469 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom6
# 470 "data/maps/Player_House_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 471 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 472 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 473 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 474 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 475 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom10
# 476 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 477 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 478 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 479 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom7
# 480 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 481 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_NORTH
# 482 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 483 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 484 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom11
# 485 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 486 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 487 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom8
# 488 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 489 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 490 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 491 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 492 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 493 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_Mom_PostStarter_Text_0
# 494 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 495 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 496 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 497 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 498 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 499 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 500 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 501 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_3
# 502 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 503 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 504 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 505 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, Univ_StepUp1
# 506 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli_4
# 507 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 508 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 509 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 510 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 511 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_EAST
# 512 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 513 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 514 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_BattleTapeStart_Text_0
# 515 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mike8
# 516 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 517 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 518 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 519 "data/maps/Player_House_1F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 520 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 521 "data/maps/Player_House_1F/scripts.pory"
	playse SE_EXIT
# 522 "data/maps/Player_House_1F/scripts.pory"
	removeobject 3
# 523 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 524 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 525 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 526 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 527 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 528 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_HF_HIDE_MAMAW
# 529 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_RH1F_HIDE_MAMAW
# 530 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 19
# 531 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


PH1F_MomFarewell::
# 536 "data/maps/Player_House_1F/scripts.pory"
	special SpawnCameraObject
# 537 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_7
# 538 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 539 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 540 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom9
# 541 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli5
# 542 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 1
# 543 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom10
# 544 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PH1F_CAM_7R
# 545 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, PH1F_M_Lilli6
# 546 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 547 "data/maps/Player_House_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 548 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 549 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 550 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom13
# 551 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 552 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 553 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 554 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BALL
# 555 "data/maps/Player_House_1F/scripts.pory"
	waitse
# 556 "data/maps/Player_House_1F/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 557 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 558 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_MomFarewell_Text_0
# 559 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 560 "data/maps/Player_House_1F/scripts.pory"
	waitfanfare
# 561 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 562 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 563 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 564 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 565 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom14
# 566 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 567 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 568 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_WEST
# 569 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 570 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom15
# 571 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 572 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 573 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 574 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 575 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 576 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 577 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 578 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 579 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 580 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 581 "data/maps/Player_House_1F/scripts.pory"
	delay 20
# 582 "data/maps/Player_House_1F/scripts.pory"
	playse SE_PIN
# 583 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_Heart
# 584 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 585 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 586 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 587 "data/maps/Player_House_1F/scripts.pory"
	delay 30
# 588 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 589 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom16
# 590 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 591 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 592 "data/maps/Player_House_1F/scripts.pory"
	turnobject 1, DIR_WEST
# 593 "data/maps/Player_House_1F/scripts.pory"
	speakername PH1F_MomIntro_Text_0
# 594 "data/maps/Player_House_1F/scripts.pory"
	msgbox PH1F_T_Mom17
# 595 "data/maps/Player_House_1F/scripts.pory"
	waitmessage
# 596 "data/maps/Player_House_1F/scripts.pory"
	closemessage
# 597 "data/maps/Player_House_1F/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 598 "data/maps/Player_House_1F/scripts.pory"
	waitmoncry
# 599 "data/maps/Player_House_1F/scripts.pory"
	playse SE_BIKE_HOP
# 600 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_JumpIP_1Right
# 601 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 602 "data/maps/Player_House_1F/scripts.pory"
	applymovement 2, Univ_StepUp1
# 603 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 604 "data/maps/Player_House_1F/scripts.pory"
	applymovement 1, PH1F_M_Mom11
# 605 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 606 "data/maps/Player_House_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 607 "data/maps/Player_House_1F/scripts.pory"
	waitmovement 0
# 608 "data/maps/Player_House_1F/scripts.pory"
	special RemoveCameraObject
# 609 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_PAUSE_FOLLOWERS
# 610 "data/maps/Player_House_1F/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MIKE_1
# 611 "data/maps/Player_House_1F/scripts.pory"
	setflag FLAG_RHB1F_HIDE_RIVAL
# 612 "data/maps/Player_House_1F/scripts.pory"
	setvar VAR_ADVENTURE_START, 24
# 613 "data/maps/Player_House_1F/scripts.pory"
	releaseall
	end


# 619 "data/maps/Player_House_1F/scripts.pory"
Univ_Exclam:
# 620 "data/maps/Player_House_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 623 "data/maps/Player_House_1F/scripts.pory"
Univ_Question:
# 624 "data/maps/Player_House_1F/scripts.pory"
	emote_question_mark
	step_end

# 627 "data/maps/Player_House_1F/scripts.pory"
Univ_DoubleExclam:
# 628 "data/maps/Player_House_1F/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 631 "data/maps/Player_House_1F/scripts.pory"
Univ_Heart:
# 632 "data/maps/Player_House_1F/scripts.pory"
	emote_heart
	step_end

# 635 "data/maps/Player_House_1F/scripts.pory"
Univ_X:
# 636 "data/maps/Player_House_1F/scripts.pory"
	emote_x
	step_end

# 639 "data/maps/Player_House_1F/scripts.pory"
Univ_StepUp1:
# 640 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 643 "data/maps/Player_House_1F/scripts.pory"
Univ_StepDown1:
# 644 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 647 "data/maps/Player_House_1F/scripts.pory"
Univ_StepRight1:
# 648 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 651 "data/maps/Player_House_1F/scripts.pory"
Univ_StepLeft1:
# 652 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 655 "data/maps/Player_House_1F/scripts.pory"
Univ_StepNE1:
# 656 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northeast
	step_end

# 659 "data/maps/Player_House_1F/scripts.pory"
Univ_StepNW1:
# 660 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
	step_end

# 663 "data/maps/Player_House_1F/scripts.pory"
Univ_StepSE1:
# 664 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
	step_end

# 667 "data/maps/Player_House_1F/scripts.pory"
Univ_StepSW1:
# 668 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southwest
	step_end

# 671 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Up:
# 672 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_up
	step_end

# 675 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Down:
# 676 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_down
	step_end

# 679 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Right:
# 680 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_right
	step_end

# 683 "data/maps/Player_House_1F/scripts.pory"
Univ_JumpIP_1Left:
# 684 "data/maps/Player_House_1F/scripts.pory"
	jump_in_place_left
	step_end

# 687 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideUp1:
# 688 "data/maps/Player_House_1F/scripts.pory"
	slide_up
	step_end

# 691 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideDown1:
# 692 "data/maps/Player_House_1F/scripts.pory"
	slide_down
	step_end

# 695 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideRight1:
# 696 "data/maps/Player_House_1F/scripts.pory"
	slide_right
	step_end

# 699 "data/maps/Player_House_1F/scripts.pory"
Univ_SlideLeft1:
# 700 "data/maps/Player_House_1F/scripts.pory"
	slide_left
	step_end

# 706 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom1:
# 707 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 707 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 707 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 707 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 708 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 711 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom2:
# 712 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 713 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 713 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 716 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom3:
# 717 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 717 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 718 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 721 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom4:
# 722 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 723 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 723 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 723 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 723 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 724 "data/maps/Player_House_1F/scripts.pory"
	face_up
	step_end

# 727 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom5:
# 728 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 728 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 729 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 730 "data/maps/Player_House_1F/scripts.pory"
	face_down
	step_end

# 733 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom6:
# 734 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 735 "data/maps/Player_House_1F/scripts.pory"
	face_down
	step_end

# 738 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom7:
# 739 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 740 "data/maps/Player_House_1F/scripts.pory"
	face_down
	step_end

# 743 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom8:
# 744 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 745 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 748 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom9:
# 749 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 750 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 750 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 750 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 750 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 753 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom10:
# 754 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 754 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 754 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 754 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 755 "data/maps/Player_House_1F/scripts.pory"
	face_down
	step_end

# 758 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Mom11:
# 759 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 759 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 760 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 760 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 761 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 761 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 761 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 762 "data/maps/Player_House_1F/scripts.pory"
	face_up
	step_end

# 765 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_1:
# 766 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 767 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 767 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 770 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_2:
# 771 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 772 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 775 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_3:
# 776 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 777 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 778 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 779 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 780 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 781 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 782 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 783 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 784 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 785 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 786 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 787 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 788 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 789 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 790 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 791 "data/maps/Player_House_1F/scripts.pory"
	face_right
# 792 "data/maps/Player_House_1F/scripts.pory"
	face_up
# 793 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 794 "data/maps/Player_House_1F/scripts.pory"
	face_down
# 795 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 798 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli_4:
# 799 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 799 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 800 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 801 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
	step_end

# 804 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli5:
# 805 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 805 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 806 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 806 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 806 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 809 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Lilli6:
# 810 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 810 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 810 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 810 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 813 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_1:
# 814 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 814 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 815 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 818 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_2:
# 819 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 819 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 820 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 823 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_3:
# 824 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 824 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 824 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 824 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
	step_end

# 827 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_3R:
# 828 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 828 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 828 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southeast
# 829 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 832 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_4:
# 833 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_southwest
# 834 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 837 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_4R:
# 838 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 838 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 841 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_5:
# 842 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 842 "data/maps/Player_House_1F/scripts.pory"
	walk_up
# 842 "data/maps/Player_House_1F/scripts.pory"
	walk_up
	step_end

# 845 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_6:
# 846 "data/maps/Player_House_1F/scripts.pory"
	walk_down
# 846 "data/maps/Player_House_1F/scripts.pory"
	walk_down
	step_end

# 849 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_7:
# 850 "data/maps/Player_House_1F/scripts.pory"
	walk_diag_northwest
# 851 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 851 "data/maps/Player_House_1F/scripts.pory"
	walk_left
# 851 "data/maps/Player_House_1F/scripts.pory"
	walk_left
	step_end

# 854 "data/maps/Player_House_1F/scripts.pory"
PH1F_CAM_7R:
# 855 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 855 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 855 "data/maps/Player_House_1F/scripts.pory"
	walk_right
# 855 "data/maps/Player_House_1F/scripts.pory"
	walk_right
	step_end

# 858 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike1:
# 859 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_up
# 860 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 860 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 860 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 860 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 860 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 861 "data/maps/Player_House_1F/scripts.pory"
	face_right
	step_end

# 864 "data/maps/Player_House_1F/scripts.pory"
PH1F_W_Mike2:
# 865 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 865 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_left
# 866 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 866 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 866 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
# 867 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 867 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 867 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 867 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 867 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 867 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 867 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 867 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 867 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_right
# 868 "data/maps/Player_House_1F/scripts.pory"
	walk_fast_down
	step_end

# 871 "data/maps/Player_House_1F/scripts.pory"
PH1F_M_Player1:
# 872 "data/maps/Player_House_1F/scripts.pory"
	face_left
# 873 "data/maps/Player_House_1F/scripts.pory"
	slide_right
# 874 "data/maps/Player_House_1F/scripts.pory"
	face_left
	step_end

PH1F_MomIntro_Text_0:
# 66 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mom$"

PH1F_BattleTapeStart_Text_0:
# 220 "data/maps/Player_House_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

PH1F_Mom_PostStarter_Text_0:
# 493 "data/maps/Player_House_1F/scripts.pory"
	.string "Let's go, my little Lillipad!$"

PH1F_MomFarewell_Text_0:
# 558 "data/maps/Player_House_1F/scripts.pory"
	.string "{PLAYER} recieved the PokeNav!$"

PH1F_T_Mom1::
# 879 "data/maps/Player_House_1F/scripts.pory"
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
# 891 "data/maps/Player_House_1F/scripts.pory"
	.string "Silly me, I almost forgot!\n"
	.string "Your running shoes came in from the\l"
	.string "city this morning.\p"
	.string "Here you go!$"

PH1F_T_Mom2::
# 898 "data/maps/Player_House_1F/scripts.pory"
	.string "You're very welcome sweetie.\n"
	.string "You be sure to thank Bo as well!$"

PH1F_T_Mom3::
# 903 "data/maps/Player_House_1F/scripts.pory"
	.string "Don't forget to help your father,\n"
	.string "{PLAYER}, he shouldn't do all that work\l"
	.string "by himself.$"

PH1F_T_Mom4::
# 909 "data/maps/Player_House_1F/scripts.pory"
	.string "You two enjoy your movie, {PLAYER}!$"

PH1F_T_Mom5::
# 913 "data/maps/Player_House_1F/scripts.pory"
	.string "Lunch should be ready soon, sweetie!$"

PH1F_T_Mom7::
# 917 "data/maps/Player_House_1F/scripts.pory"
	.string "There you are, {PLAYER}!\n"
	.string "You missed lunch, sweetie, your father\l"
	.string "and I were worried!\p"
	.string "What took you so long?!$"

PH1F_T_Mom8::
# 924 "data/maps/Player_House_1F/scripts.pory"
	.string "Huh... {PAUSE 30}that's so strange.\n"
	.string "I've only seen Lilli act like that when\l"
	.string "there was another Pokemon nearby.\p"
	.string "Is there something you need to tell me,\n"
	.string "honey?$"

PH1F_T_Mom9::
# 932 "data/maps/Player_House_1F/scripts.pory"
	.string "Mike, someone needs to tell me what's\n"
	.string "going on here!\p"
	.string "Lilli is acting like there are Pokemon in\n"
	.string "the room, and I don't know how that\l"
	.string "would be possible.$"

PH1F_T_Mom10::
# 940 "data/maps/Player_House_1F/scripts.pory"
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
# 974 "data/maps/Player_House_1F/scripts.pory"
	.string "You be safe out there too, sweetie!\p"
	.string "Make sure you tell your Grandparents\n"
	.string "about your plans!$"

PH1F_T_Mom12::
# 980 "data/maps/Player_House_1F/scripts.pory"
	.string "He didn't take that well at all,\n"
	.string "{PLAYER}...\p"
	.string "I think you should go out there and try\n"
	.string "to talk to him.\p"
	.string "At the very least, you need to say\n"
	.string "goodbye; he's probably out back\l"
	.string "somewhere.$"

PH1F_T_Mom13::
# 990 "data/maps/Player_House_1F/scripts.pory"
	.string "Don't worry about your father,\n"
	.string "{PLAYER}, he's just hurt right now, I'm\l"
	.string "sure he will come around!\p"
	.string "Oh!\n"
	.string "That reminds me!\p"
	.string "He never even answers this thing, I\n"
	.string "figure you'll get more use out of it on\l"
	.string "the road.$"

PH1F_T_Mom14::
# 1001 "data/maps/Player_House_1F/scripts.pory"
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
# 1013 "data/maps/Player_House_1F/scripts.pory"
	.string "Isn't that right my little Lillipad?$"

PH1F_T_Mom16::
# 1017 "data/maps/Player_House_1F/scripts.pory"
	.string "Alright, sweetie, you be safe out there,\n"
	.string "okay?\p"
	.string "Just know that I am always rooting for\n"
	.string "you, {PLAYER}!$"

PH1F_T_Mom17::
# 1024 "data/maps/Player_House_1F/scripts.pory"
	.string "Go back on your mat, little one!$"

PH1F_T_MomHealParty::
# 1028 "data/maps/Player_House_1F/scripts.pory"
	.string "Hello there, sweetie!\p"
	.string "Oh my, you and your Pokémon look\n"
	.string "exhausted, {PLAYER}!\l"
	.string "You should get some rest.$"

PH1F_T_MomPostHeal::
# 1035 "data/maps/Player_House_1F/scripts.pory"
	.string "Wow, you look much better!\n"
	.string "You stay safe now, {PLAYER}.$"

PH1F_T_Mike1::
# 1040 "data/maps/Player_House_1F/scripts.pory"
	.string "Thank you so much for letting us use\n"
	.string "the TV again!\p"
	.string "I wish my Grandparents had one, but\n"
	.string "they spend all their money on\l"
	.string "PokeTreats for Millie...$"

PH1F_T_Mike2::
# 1048 "data/maps/Player_House_1F/scripts.pory"
	.string "Let's go, {PLAYER}!!$"

PH1F_T_Mike3::
# 1052 "data/maps/Player_House_1F/scripts.pory"
	.string "Bo said this one is his favorite!\n"
	.string "This is going to be so awesome!$"

PH1F_T_Mike5::
# 1057 "data/maps/Player_House_1F/scripts.pory"
	.string "Where ya goin, {PLAYER}?!\n"
	.string "Get over here!$"

PH1F_T_Mike4::
# 1062 "data/maps/Player_House_1F/scripts.pory"
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
# 1079 "data/maps/Player_House_1F/scripts.pory"
	.string "Oh... {PAUSE 30}Shoot... {PAUSE 30}Hi, sorry, I just came over\n"
	.string "to tell {PLAYER} something!\p"
	.string "It isn't serious or anything like that,\n"
	.string "just nothin' but some yappin' as Papaw\l"
	.string "always says, haha!\p"
	.string "...$"

PH1F_T_Mike7::
# 1088 "data/maps/Player_House_1F/scripts.pory"
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
# 1104 "data/maps/Player_House_1F/scripts.pory"
	.string "Alright, {PLAYER}, I guess it's time!\n"
	.string "Meet me in Millie's pen, I have something\l"
	.string "incredible to show you!$"

PH1F_T_System1::
# 1110 "data/maps/Player_House_1F/scripts.pory"
	.string "{PLAYER} received the Running Shoes!$"

PH1F_T_System2::
# 1114 "data/maps/Player_House_1F/scripts.pory"
	.string "'Hold {B_BUTTON} to run like the wind!'$"

PH1F_T_Dresser::
# 1118 "data/maps/Player_House_1F/scripts.pory"
	.string "The drawers are filled with old-style\n"
	.string "Western films.$"

PH1F_T_Picture::
# 1123 "data/maps/Player_House_1F/scripts.pory"
	.string "It is a beautiful sunset painting.\n"
	.string "The artist is clearly very talented.$"

PH1F_T_Oven::
# 1128 "data/maps/Player_House_1F/scripts.pory"
	.string "It smells delicious!$"
