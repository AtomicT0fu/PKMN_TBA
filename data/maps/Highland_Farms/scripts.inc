Highland_Farms_MapScripts::
# 2 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HF_UpdateMetatiles
# 3 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HF_UpdateSpritePos
# 4 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HF_RemoveRivalPokemon
# 5 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Highland_Farms_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Highland_Farms_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Highland_Farms/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 24, HF_Mike_Farewell
	.2byte 0


TestBattle_HF::
# 11 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_CALVIN_1, HF_T_MikeLoseBattle
	end


HF_RemoveRivalPokemon::
# 16 "data/maps/Highland_Farms/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HF_RemoveRivalPokemon_2
HF_RemoveRivalPokemon_1:
# 22 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq HF_RemoveRivalPokemon_5
HF_RemoveRivalPokemon_4:
	end

HF_RemoveRivalPokemon_2:
# 18 "data/maps/Highland_Farms/scripts.pory"
	removeobject 11
# 19 "data/maps/Highland_Farms/scripts.pory"
	removeobject 12
# 20 "data/maps/Highland_Farms/scripts.pory"
	removeobject 13
	goto HF_RemoveRivalPokemon_1

HF_RemoveRivalPokemon_5:
# 23 "data/maps/Highland_Farms/scripts.pory"
	removeobject 8
# 24 "data/maps/Highland_Farms/scripts.pory"
	removeobject 9
# 25 "data/maps/Highland_Farms/scripts.pory"
	removeobject 10
	goto HF_RemoveRivalPokemon_4


HF_RivalShed_IsDoorLocked::
# 33 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_UNLOCK_RIVAL_SHED, HF_RivalShed_IsDoorLocked_2
# 41 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 42 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_RivalShed_IsDoorLocked_Text_1
# 43 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 44 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 45 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
HF_RivalShed_IsDoorLocked_1:
# 47 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_RivalShed_IsDoorLocked_2:
# 34 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 35 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_RivalShed_IsDoorLocked_Text_0
# 36 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 37 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 38 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
	goto HF_RivalShed_IsDoorLocked_1


HF_UpdateMetatiles::
# 52 "data/maps/Highland_Farms/scripts.pory"
	call CheckSproutFlag
# 53 "data/maps/Highland_Farms/scripts.pory"
	call HF_CheckLogFlag
	end


HF_UpdateSpritePos::
# 58 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_UpdateSpritePos_2
# 64 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 19
	goto_if_eq HF_UpdateSpritePos_3
# 68 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 24
	goto_if_eq HF_UpdateSpritePos_4
HF_UpdateSpritePos_1:
	end

HF_UpdateSpritePos_2:
# 59 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 1, 12, 19
# 60 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 11, 19
# 61 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 62 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	goto HF_UpdateSpritePos_1

HF_UpdateSpritePos_3:
# 65 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 10, 19
# 66 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	goto HF_UpdateSpritePos_1

HF_UpdateSpritePos_4:
# 69 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 3, 41, 35
# 70 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
	goto HF_UpdateSpritePos_1


HF_PlayerHouse_Sign::
# 78 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 79 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_PlayerHouse_Sign_Text_0, MSGBOX_SIGN
# 80 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 81 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 82 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_RivalHouse_Sign::
# 87 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 88 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_RivalHouse_Sign_Text_0, MSGBOX_SIGN
# 89 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 90 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 91 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Mike_Interact::
# 96 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 20
	goto_if_eq HF_Mike_Interact_2
# 104 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_Mike_Interact_3
HF_Mike_Interact_1:
# 114 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_Mike_Interact_2:
# 97 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 98 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 99 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike8
# 100 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 101 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 102 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_WEST
	goto HF_Mike_Interact_1

HF_Mike_Interact_3:
# 105 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 106 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 107 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike3
# 108 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 109 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 110 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_EAST
	goto HF_Mike_Interact_1


HF_Mamaw_Interact::
# 119 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 120 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mamaw_Interact_Text_0
# 121 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mamaw1
# 122 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 123 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 124 "data/maps/Highland_Farms/scripts.pory"
	turnobject 5, DIR_WEST
# 125 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Millie_Interact::
# 130 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_Millie_Interact_2
# 145 "data/maps/Highland_Farms/scripts.pory"
	lock
# 146 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 147 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_MILTANK, 0
# 148 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
HF_Millie_Interact_1:
# 150 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_Millie_Interact_2:
# 131 "data/maps/Highland_Farms/scripts.pory"
	lock
# 132 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 133 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_MILTANK, 0
# 134 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 135 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 136 "data/maps/Highland_Farms/scripts.pory"
	applymovement 1, Univ_Heart
# 137 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 138 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 139 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_Millie_Interact_Text_0
# 140 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 141 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 142 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
	goto HF_Millie_Interact_1


HF_DadInteract::
# 155 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 22
	goto_if_eq HF_DadInteract_2
# 184 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadInteract_Text_0
# 185 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_DadInteract_Text_1
# 186 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 187 "data/maps/Highland_Farms/scripts.pory"
	closemessage
HF_DadInteract_1:
# 189 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_DadInteract_2:
# 156 "data/maps/Highland_Farms/scripts.pory"
	fadeoutbgm 2
# 157 "data/maps/Highland_Farms/scripts.pory"
	playbgm MUS_END, FALSE
# 158 "data/maps/Highland_Farms/scripts.pory"
	delay 180
# 159 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadInteract_Text_0
# 160 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad3, MSGBOX_YESNO
# 161 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HF_DadInteract_6
# 171 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 172 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 173 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadInteract_Text_0
# 174 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad4_No
# 175 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 176 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 177 "data/maps/Highland_Farms/scripts.pory"
	turnobject 16, DIR_WEST
HF_DadInteract_5:
# 179 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 23
# 180 "data/maps/Highland_Farms/scripts.pory"
	fadeoutbgm 2
# 181 "data/maps/Highland_Farms/scripts.pory"
	playbgm MUS_FALLARBOR, FALSE
	goto HF_DadInteract_1

HF_DadInteract_6:
# 162 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 163 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 164 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadInteract_Text_0
# 165 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad4_Yes
# 166 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 167 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 168 "data/maps/Highland_Farms/scripts.pory"
	turnobject 16, DIR_WEST
	goto HF_DadInteract_5


HF_DadIntro_A::
# 195 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 196 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1A
# 197 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 198 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 199 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 200 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 201 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 202 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 203 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 204 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 205 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 206 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 207 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 208 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 209 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 210 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 211 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 212 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 213 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 214 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 215 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 216 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 217 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 218 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 219 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 220 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 221 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 222 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 223 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 224 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 225 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 226 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 227 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 228 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 229 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 230 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 231 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 232 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 233 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 234 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 235 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 236 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
# 237 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 238 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 239 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 240 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 241 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 242 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 243 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 244 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 245 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 246 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 247 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 248 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 249 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 250 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 251 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadInteract_Text_0
# 252 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 253 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 254 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1A
# 255 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 256 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadInteract_Text_0
# 257 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 258 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 259 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 260 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 261 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 15
# 262 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 263 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 264 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 265 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 266 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 267 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 268 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 15
# 269 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 270 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 271 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 272 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 273 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 274 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 275 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 276 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_DadIntro_B::
# 281 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 282 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1B
# 283 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 284 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 285 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 286 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 287 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 288 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 289 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 290 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 291 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 292 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 293 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 294 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 295 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 296 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 297 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 298 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 299 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 300 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 301 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 302 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 303 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 304 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 305 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 306 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 307 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 308 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 309 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 310 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 311 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 312 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 313 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 314 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 315 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 316 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 317 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 318 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 319 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 320 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 321 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 322 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
# 323 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 324 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 325 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 326 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 327 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 328 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 329 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 330 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 331 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 332 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 333 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 334 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 335 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 336 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 337 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadInteract_Text_0
# 338 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 339 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 340 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1B
# 341 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 342 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadInteract_Text_0
# 343 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 344 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 345 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 346 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 347 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 15
# 348 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 349 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 350 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 351 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 352 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 353 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 354 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 15
# 355 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 356 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 357 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 358 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 359 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 360 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 361 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 362 "data/maps/Highland_Farms/scripts.pory"
	release
	end


CheckSproutFlag::
# 367 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_SPROUTS_PLANTED, CheckSproutFlag_2
CheckSproutFlag_1:
	return

CheckSproutFlag_2:
# 368 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 369 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 370 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
	goto CheckSproutFlag_1


HF_CheckLogFlag::
# 378 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_HF_REMOVE_LOG, HF_CheckLogFlag_2
HF_CheckLogFlag_1:
	return

HF_CheckLogFlag_2:
# 379 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 2, 12, 0x000, FALSE
# 380 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 3, 12, 0x000, FALSE
	goto HF_CheckLogFlag_1


BattleMike::
# 388 "data/maps/Highland_Farms/scripts.pory"
	lock
# 389 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 390 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE, LoseText
# 391 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_MikeIntro::
# 396 "data/maps/Highland_Farms/scripts.pory"
	turnobject 3, DIR_NORTH
# 397 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, Univ_Exclam
# 398 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 399 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 400 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 401 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 402 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, HF_W_Mike1
# 403 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 404 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 405 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike1
# 406 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 407 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 408 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, HF_W_Mike2
# 409 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 410 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 3
# 411 "data/maps/Highland_Farms/scripts.pory"
	opendoor 41, 33
# 412 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 413 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, Univ_StepUp1
# 414 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 415 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 416 "data/maps/Highland_Farms/scripts.pory"
	removeobject 3
# 417 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 418 "data/maps/Highland_Farms/scripts.pory"
	closedoor 41, 33
# 419 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 420 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_1
# 421 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 8
# 422 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MIKE_2
# 423 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Mike_ReadyToGo::
# 428 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 429 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_2
# 430 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 431 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 10, 16, 0x219, TRUE
# 432 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 433 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 434 "data/maps/Highland_Farms/scripts.pory"
	playse SE_DOOR
# 435 "data/maps/Highland_Farms/scripts.pory"
	opendoor 10, 16
# 436 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 437 "data/maps/Highland_Farms/scripts.pory"
	addobject 4
# 438 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_StepDown1
# 439 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 440 "data/maps/Highland_Farms/scripts.pory"
	closedoor 10, 16
# 441 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 442 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_Exclam
# 443 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 444 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 445 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 446 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 447 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_W_Mike3
# 448 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_3
# 449 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 4
# 450 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 451 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 452 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike2, MSGBOX_AUTOCLOSE
# 453 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_W_Player2
# 454 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 455 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_W_Mike4
# 456 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 457 "data/maps/Highland_Farms/scripts.pory"
	removeobject 4
# 458 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 10, 16, 0x226, TRUE
# 459 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 460 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 14
# 461 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE
# 462 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_FirstBattleIntro_Trigger::
# 467 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 2, 12, 0x000, FALSE
# 468 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 3, 12, 0x000, FALSE
# 469 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HF_REMOVE_LOG
# 470 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_SOUTH
# 471 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 472 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_2
# 473 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 474 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 475 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 476 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike4
# 477 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 478 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 479 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player2
# 480 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 481 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 482 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 483 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike5, MSGBOX_YESNO
# 484 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HF_FirstBattleIntro_Trigger_2
# 491 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 492 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike6_No
# 493 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 494 "data/maps/Highland_Farms/scripts.pory"
	closemessage
HF_FirstBattleIntro_Trigger_1:
# 496 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike5
# 497 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Mike5
# 498 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player3
# 499 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 500 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 501 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 502 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 503 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 504 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 505 "data/maps/Highland_Farms/scripts.pory"
	delay 100
# 506 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 507 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 508 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike7
# 509 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 510 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 511 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike6
# 512 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 513 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 11, 5
# 514 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 515 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 516 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 517 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 518 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 519 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 520 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 20
# 521 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_FirstBattleIntro_Trigger_2:
# 485 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 486 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike6_Yes
# 487 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 488 "data/maps/Highland_Farms/scripts.pory"
	closemessage
	goto HF_FirstBattleIntro_Trigger_1


HF_NoExitBattleStage_Trigger::
# 526 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 527 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_Exclam
# 528 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 529 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_4
# 530 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 531 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 532 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike9
# 533 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 534 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 535 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_4R
# 536 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 537 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 538 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 539 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 540 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_FirstBattleStart_Trigger::
# 545 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 546 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 547 "data/maps/Highland_Farms/scripts.pory"
	fadeoutbgm 1
# 548 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_5
# 549 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 550 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 551 "data/maps/Highland_Farms/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 552 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 553 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike10
# 554 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 555 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 556 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 557 "data/maps/Highland_Farms/scripts.pory"
	call HF_HandleBattleSprites_Rival
# 558 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 559 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_5R
# 560 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 561 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 562 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 563 "data/maps/Highland_Farms/scripts.pory"
	call HF_HandleBattleSprites_Player
# 564 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 565 "data/maps/Highland_Farms/scripts.pory"
	call HF_StartBattle_1
# 566 "data/maps/Highland_Farms/scripts.pory"
	fadedefaultbgm
# 567 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 568 "data/maps/Highland_Farms/scripts.pory"
	call HF_RemovePlayerPokemon_PostBattle
# 569 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 570 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike7
# 571 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player4
# 572 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 573 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 574 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 575 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike11
# 576 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 577 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 578 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike8
# 579 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 580 "data/maps/Highland_Farms/scripts.pory"
	removeobject 4
# 581 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HF_HIDE_RIVAL_MIKE
# 582 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_RHB1F_HIDE_RIVAL
# 583 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 21
# 584 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_RemovePlayerPokemon_PostBattle::
# 589 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_RemovePlayerPokemon_PostBattle_2
# 612 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_RemovePlayerPokemon_PostBattle_3
# 635 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_RemovePlayerPokemon_PostBattle_4
HF_RemovePlayerPokemon_PostBattle_1:
	return

HF_RemovePlayerPokemon_PostBattle_2:
# 590 "data/maps/Highland_Farms/scripts.pory"
	applymovement 10, Univ_StepLeft1
# 591 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 592 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 593 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 594 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BIKE_HOP
# 595 "data/maps/Highland_Farms/scripts.pory"
	applymovement 10, Univ_JumpIP_1Left
# 596 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 597 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 598 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 599 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 600 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 7, MAP_HIGHLAND_FARMS, 0
# 601 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 10, MAP_HIGHLAND_FARMS, 3
# 602 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 603 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 604 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 605 "data/maps/Highland_Farms/scripts.pory"
	removeobject 10
# 606 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 607 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 608 "data/maps/Highland_Farms/scripts.pory"
	playse SE_RG_BAG_POCKET
# 609 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 610 "data/maps/Highland_Farms/scripts.pory"
	waitse
	goto HF_RemovePlayerPokemon_PostBattle_1

HF_RemovePlayerPokemon_PostBattle_3:
# 613 "data/maps/Highland_Farms/scripts.pory"
	applymovement 9, Univ_StepLeft1
# 614 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 615 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 616 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 617 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BIKE_HOP
# 618 "data/maps/Highland_Farms/scripts.pory"
	applymovement 9, Univ_JumpIP_1Left
# 619 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 620 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 621 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 622 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 623 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 7, MAP_HIGHLAND_FARMS, 0
# 624 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 9, MAP_HIGHLAND_FARMS, 3
# 625 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 626 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 627 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 628 "data/maps/Highland_Farms/scripts.pory"
	removeobject 9
# 629 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 630 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 631 "data/maps/Highland_Farms/scripts.pory"
	playse SE_RG_BAG_POCKET
# 632 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 633 "data/maps/Highland_Farms/scripts.pory"
	waitse
	goto HF_RemovePlayerPokemon_PostBattle_1

HF_RemovePlayerPokemon_PostBattle_4:
# 636 "data/maps/Highland_Farms/scripts.pory"
	applymovement 8, Univ_StepLeft1
# 637 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 638 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 639 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 640 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BIKE_HOP
# 641 "data/maps/Highland_Farms/scripts.pory"
	applymovement 8, Univ_JumpIP_1Left
# 642 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 643 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 644 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 645 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 646 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 7, MAP_HIGHLAND_FARMS, 0
# 647 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 8, MAP_HIGHLAND_FARMS, 3
# 648 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 649 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 650 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 651 "data/maps/Highland_Farms/scripts.pory"
	removeobject 8
# 652 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 653 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 654 "data/maps/Highland_Farms/scripts.pory"
	playse SE_RG_BAG_POCKET
# 655 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 656 "data/maps/Highland_Farms/scripts.pory"
	waitse
	goto HF_RemovePlayerPokemon_PostBattle_1


HF_StartBattle_1::
# 662 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_StartBattle_1_1
# 672 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_StartBattle_1_2
# 682 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_StartBattle_1_3
	return

HF_StartBattle_1_1:
# 663 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 664 "data/maps/Highland_Farms/scripts.pory"
	applymovement 10, HF_M_PlayerPokemon
# 665 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 666 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 667 "data/maps/Highland_Farms/scripts.pory"
	applymovement 11, HF_M_RivalPokemon
# 668 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 669 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_HF_MIKE_TURTWIG, HF_T_MikeLoseBattle
	return

HF_StartBattle_1_2:
# 673 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 674 "data/maps/Highland_Farms/scripts.pory"
	applymovement 9, HF_M_PlayerPokemon
# 675 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 676 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 677 "data/maps/Highland_Farms/scripts.pory"
	applymovement 13, HF_M_RivalPokemon
# 678 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 679 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_HF_MIKE_OSHAWOTT, HF_T_MikeLoseBattle
	return

HF_StartBattle_1_3:
# 683 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 684 "data/maps/Highland_Farms/scripts.pory"
	applymovement 8, HF_M_PlayerPokemon
# 685 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 686 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 687 "data/maps/Highland_Farms/scripts.pory"
	applymovement 12, HF_M_RivalPokemon
# 688 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 689 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_HF_MIKE_LITTEN, HF_T_MikeLoseBattle
	return


HF_HandleBattleSprites_Rival::
# 697 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_HandleBattleSprites_Rival_2
# 714 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_HandleBattleSprites_Rival_3
# 731 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_HandleBattleSprites_Rival_4
HF_HandleBattleSprites_Rival_1:
	return

HF_HandleBattleSprites_Rival_2:
# 698 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 699 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_MikeGoTurtwig
# 700 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 701 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 702 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 703 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 704 "data/maps/Highland_Farms/scripts.pory"
	addobject 6
# 705 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 706 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 707 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 708 "data/maps/Highland_Farms/scripts.pory"
	addobject 11
# 709 "data/maps/Highland_Farms/scripts.pory"
	removeobject 6
# 710 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 711 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_TURTWIG, 2
# 712 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Rival_1

HF_HandleBattleSprites_Rival_3:
# 715 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 716 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_MikeGoOshawott
# 717 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 718 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 719 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 720 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 721 "data/maps/Highland_Farms/scripts.pory"
	addobject 6
# 722 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 723 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 724 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 725 "data/maps/Highland_Farms/scripts.pory"
	addobject 13
# 726 "data/maps/Highland_Farms/scripts.pory"
	removeobject 6
# 727 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 728 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 2
# 729 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Rival_1

HF_HandleBattleSprites_Rival_4:
# 732 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 733 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_MikeGoLitten
# 734 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 735 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 736 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 737 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 738 "data/maps/Highland_Farms/scripts.pory"
	addobject 6
# 739 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 740 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 741 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 742 "data/maps/Highland_Farms/scripts.pory"
	addobject 12
# 743 "data/maps/Highland_Farms/scripts.pory"
	removeobject 6
# 744 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 745 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_LITTEN, 2
# 746 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Rival_1


HF_HandleBattleSprites_Player::
# 752 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_HandleBattleSprites_Player_2
# 766 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_HandleBattleSprites_Player_3
# 780 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_HandleBattleSprites_Player_4
HF_HandleBattleSprites_Player_1:
	return

HF_HandleBattleSprites_Player_2:
# 753 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 754 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 755 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 756 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 757 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 758 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 759 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 760 "data/maps/Highland_Farms/scripts.pory"
	addobject 10
# 761 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 762 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 763 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 2
# 764 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Player_1

HF_HandleBattleSprites_Player_3:
# 767 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 768 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 769 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 770 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 771 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 772 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 773 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 774 "data/maps/Highland_Farms/scripts.pory"
	addobject 9
# 775 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 776 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 777 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_LITTEN, 2
# 778 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Player_1

HF_HandleBattleSprites_Player_4:
# 781 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 782 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 783 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 784 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 785 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 786 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 787 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 788 "data/maps/Highland_Farms/scripts.pory"
	addobject 8
# 789 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 790 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 791 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_TURTWIG, 2
# 792 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Player_1


HF_DadRunFromHouse_A::
# 798 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 799 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_7A
# 800 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 801 "data/maps/Highland_Farms/scripts.pory"
	playse SE_DOOR
# 802 "data/maps/Highland_Farms/scripts.pory"
	opendoor 41, 33
# 803 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 804 "data/maps/Highland_Farms/scripts.pory"
	addobject 14
# 805 "data/maps/Highland_Farms/scripts.pory"
	applymovement 14, HF_M_Dad5
# 806 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 807 "data/maps/Highland_Farms/scripts.pory"
	closedoor 41, 33
# 808 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 809 "data/maps/Highland_Farms/scripts.pory"
	applymovement 14, HF_M_Dad6
# 810 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 811 "data/maps/Highland_Farms/scripts.pory"
	removeobject 14
# 812 "data/maps/Highland_Farms/scripts.pory"
	playse SE_DOOR
# 813 "data/maps/Highland_Farms/scripts.pory"
	opendoor 41, 33
# 814 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 815 "data/maps/Highland_Farms/scripts.pory"
	addobject 15
# 816 "data/maps/Highland_Farms/scripts.pory"
	applymovement 15, HF_M_Mom1
# 817 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 818 "data/maps/Highland_Farms/scripts.pory"
	closedoor 41, 33
# 819 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadRunFromHouse_A_Text_0
# 820 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mom1
# 821 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 822 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 823 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 824 "data/maps/Highland_Farms/scripts.pory"
	turnobject 15, DIR_NORTH
# 825 "data/maps/Highland_Farms/scripts.pory"
	playse SE_DOOR
# 826 "data/maps/Highland_Farms/scripts.pory"
	opendoor 41, 33
# 827 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 828 "data/maps/Highland_Farms/scripts.pory"
	applymovement 15, Univ_StepUp1
# 829 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 830 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 831 "data/maps/Highland_Farms/scripts.pory"
	removeobject 15
# 832 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 833 "data/maps/Highland_Farms/scripts.pory"
	closedoor 41, 33
# 834 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 835 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_7A_R
# 836 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 837 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 838 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_HF_HIDE_DAD_2
# 839 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 22
# 840 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_DadRunFromHouse_B::
# 845 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 846 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_7B
# 847 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 848 "data/maps/Highland_Farms/scripts.pory"
	playse SE_DOOR
# 849 "data/maps/Highland_Farms/scripts.pory"
	opendoor 41, 33
# 850 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 851 "data/maps/Highland_Farms/scripts.pory"
	addobject 14
# 852 "data/maps/Highland_Farms/scripts.pory"
	applymovement 14, HF_M_Dad5
# 853 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 854 "data/maps/Highland_Farms/scripts.pory"
	closedoor 41, 33
# 855 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 856 "data/maps/Highland_Farms/scripts.pory"
	applymovement 14, HF_M_Dad6
# 857 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 858 "data/maps/Highland_Farms/scripts.pory"
	removeobject 14
# 859 "data/maps/Highland_Farms/scripts.pory"
	playse SE_DOOR
# 860 "data/maps/Highland_Farms/scripts.pory"
	opendoor 41, 33
# 861 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 862 "data/maps/Highland_Farms/scripts.pory"
	addobject 15
# 863 "data/maps/Highland_Farms/scripts.pory"
	applymovement 15, HF_M_Mom1
# 864 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 865 "data/maps/Highland_Farms/scripts.pory"
	closedoor 41, 33
# 866 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadRunFromHouse_A_Text_0
# 867 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mom1
# 868 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 869 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 870 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 871 "data/maps/Highland_Farms/scripts.pory"
	turnobject 15, DIR_NORTH
# 872 "data/maps/Highland_Farms/scripts.pory"
	playse SE_DOOR
# 873 "data/maps/Highland_Farms/scripts.pory"
	opendoor 41, 33
# 874 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 875 "data/maps/Highland_Farms/scripts.pory"
	applymovement 15, Univ_StepUp1
# 876 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 877 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 878 "data/maps/Highland_Farms/scripts.pory"
	removeobject 15
# 879 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 880 "data/maps/Highland_Farms/scripts.pory"
	closedoor 41, 33
# 881 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 882 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_7B_R
# 883 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 884 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 885 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_HF_HIDE_DAD_2
# 886 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 22
# 887 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Mike_Farewell::
# 892 "data/maps/Highland_Farms/scripts.pory"
	turnobject 3, DIR_NORTH
# 893 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 894 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, Univ_Exclam
# 895 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 896 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 897 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 898 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike12
# 899 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 900 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 901 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, HF_M_Mike9
# 902 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 903 "data/maps/Highland_Farms/scripts.pory"
	removeobject 3
# 904 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_1
# 905 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 25
# 906 "data/maps/Highland_Farms/scripts.pory"
	release
	end


# 910 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1A:
# 911 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 911 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 911 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 912 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 915 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1B:
# 916 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 916 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 916 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 916 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
	step_end

# 919 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_2:
# 920 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 920 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 920 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 923 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_3:
# 924 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 924 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 924 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 927 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_4:
# 928 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 928 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 928 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 928 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
	step_end

# 931 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_4R:
# 932 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 932 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 932 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 932 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
	step_end

# 935 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_5:
# 936 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 936 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 936 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 936 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 936 "data/maps/Highland_Farms/scripts.pory"
	walk_right
	step_end

# 939 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_5R:
# 940 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 940 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 940 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 940 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 940 "data/maps/Highland_Farms/scripts.pory"
	walk_left
	step_end

# 943 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_6:
# 944 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 944 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
	step_end

# 947 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_7A:
# 948 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 948 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 948 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 948 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 948 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 948 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
	step_end

# 951 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_7A_R:
# 952 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 952 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 952 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 952 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 952 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 952 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
	step_end

# 955 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_7B:
# 956 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 956 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 956 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 956 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 956 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 957 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 957 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 960 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_7B_R:
# 961 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 961 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 961 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 961 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 961 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 962 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 962 "data/maps/Highland_Farms/scripts.pory"
	walk_down
	step_end

# 965 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad1:
# 966 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 966 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 966 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
	step_end

# 969 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad2:
# 970 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 971 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 974 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad3:
# 975 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 976 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 977 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 977 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 978 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 981 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad4:
# 982 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 982 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 982 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 983 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 983 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 983 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 984 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 987 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad5:
# 988 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 991 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad6:
# 992 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_left
# 992 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_left
# 992 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_left
# 992 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_left
# 993 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 993 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 993 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 993 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 993 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
	step_end

# 996 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1A:
# 997 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 997 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 997 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 997 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 997 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 1000 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1B:
# 1001 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 1002 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1002 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1002 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1002 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1002 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 1005 "data/maps/Highland_Farms/scripts.pory"
HF_W_Player2:
# 1006 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1007 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 1010 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player4:
# 1011 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1011 "data/maps/Highland_Farms/scripts.pory"
	walk_right
	step_end

# 1014 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike1:
# 1015 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 1015 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
	step_end

# 1018 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike2:
# 1019 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 1019 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 1019 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 1019 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 1020 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 1023 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player2:
# 1024 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1024 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 1027 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player3:
# 1028 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1029 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1029 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1029 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1029 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1029 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1030 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1030 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1031 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1031 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1032 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1032 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1032 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1032 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1032 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1032 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1033 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1033 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1034 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1034 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1034 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1034 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1035 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1035 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1035 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1036 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 1039 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike3:
# 1040 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 1040 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 1040 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 1043 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike4:
# 1044 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 1044 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 1044 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 1044 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 1044 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 1044 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 1044 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 1044 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
	step_end

# 1047 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike5:
# 1048 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1048 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1048 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1048 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1048 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1049 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1049 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1050 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1050 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1051 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1051 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1051 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1051 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1051 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1051 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1052 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1052 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1053 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1053 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1053 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1053 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 1054 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1054 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1054 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1054 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 1055 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 1058 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike6:
# 1059 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 1059 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 1060 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 1060 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 1061 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 1064 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike7:
# 1065 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1065 "data/maps/Highland_Farms/scripts.pory"
	walk_left
	step_end

# 1068 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike8:
# 1069 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 1069 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 1070 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1070 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1070 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1070 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1070 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 1071 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 1071 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 1071 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 1071 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 1071 "data/maps/Highland_Farms/scripts.pory"
	walk_down
	step_end

# 1074 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike9:
# 1075 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 1075 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 1076 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_left
# 1076 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_left
# 1076 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_left
# 1077 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 1077 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 1077 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 1077 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 1077 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 1077 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 1080 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mom1:
# 1081 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 1082 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 1085 "data/maps/Highland_Farms/scripts.pory"
HF_M_PlayerPokemon:
# 1086 "data/maps/Highland_Farms/scripts.pory"
	slide_right
# 1087 "data/maps/Highland_Farms/scripts.pory"
	face_right
	step_end

# 1090 "data/maps/Highland_Farms/scripts.pory"
HF_M_RivalPokemon:
# 1091 "data/maps/Highland_Farms/scripts.pory"
	slide_left
# 1092 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

HF_RivalShed_IsDoorLocked_Text_0:
# 35 "data/maps/Highland_Farms/scripts.pory"
	.string "The door is unlocked.$"

HF_RivalShed_IsDoorLocked_Text_1:
# 42 "data/maps/Highland_Farms/scripts.pory"
	.string "The door is locked.$"

HF_PlayerHouse_Sign_Text_0:
# 79 "data/maps/Highland_Farms/scripts.pory"
	.string "{PLAYER}'s House$"

HF_RivalHouse_Sign_Text_0:
# 88 "data/maps/Highland_Farms/scripts.pory"
	.string "Mike's House$"

HF_Mike_Interact_Text_0:
# 98 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

HF_Mamaw_Interact_Text_0:
# 120 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mamaw$"

HF_Millie_Interact_Text_0:
# 139 "data/maps/Highland_Farms/scripts.pory"
	.string "Millie loves to be brushed!$"

HF_DadInteract_Text_0:
# 159 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Dad$"

HF_DadInteract_Text_1:
# 185 "data/maps/Highland_Farms/scripts.pory"
	.string "...$"

HF_DadRunFromHouse_A_Text_0:
# 819 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mom$"

HF_T_Dad1::
# 1099 "data/maps/Highland_Farms/scripts.pory"
	.string "Mornin', {PLAYER}!\n"
	.string "Come on over here, we got a job to do.$"

HF_T_Dad2::
# 1104 "data/maps/Highland_Farms/scripts.pory"
	.string "I already got them new plants in the \n"
	.string "ground, n' the harvest herbs moved\l"
	.string "over into the shed.\p"
	.string "If ya wanna meet me in there, we can\n"
	.string "get to processin' this new batch.\p"
	.string "I'll bet'cha we can get finished before\n"
	.string "Momma finishes lunch if we stick to it!\p"
	.string "It sure is great having yer help out\n"
	.string "here, {PLAYER}.$"

HF_T_Dad3::
# 1116 "data/maps/Highland_Farms/scripts.pory"
	.string "...{PAUSE 60}\n"
	.string "Is this really what ya want, {PLAYER}?\p$"

HF_T_Dad4_Yes::
# 1121 "data/maps/Highland_Farms/scripts.pory"
	.string "Well, at least I didn't raise ya to lie...\p"
	.string "I just can't believe this life ain't good\n"
	.string "'nough for ya, {PLAYER}.\p"
	.string "I just thought you were better than\n"
	.string "that.\p"
	.string "You go on now, {PLAYER}, I'm sure you've\n"
	.string "got plenty of important big city things\l"
	.string "to be doin'.\p"
	.string "Just leave me be.$"

HF_T_Dad4_No::
# 1133 "data/maps/Highland_Farms/scripts.pory"
	.string "Now I know I didn't raise ya to lie...\p"
	.string "I just can't believe this life ain't good\n"
	.string "'nough for ya, {PLAYER}.\p"
	.string "I just thought you were better than\n"
	.string "that.\p"
	.string "You go on now, {PLAYER}, I'm sure you've\n"
	.string "got plenty of important big city things\l"
	.string "to be doin'.\p"
	.string "Just leave your old man be.$"

HF_T_Mike1::
# 1145 "data/maps/Highland_Farms/scripts.pory"
	.string "{PLAYER}!!\p"
	.string "We gotta watch this new Battle Tape\n"
	.string "that Ol' Bo lent me!\p"
	.string "Come on, let's go!$"

HF_T_Mike2::
# 1152 "data/maps/Highland_Farms/scripts.pory"
	.string "Hey, that was pretty quick, {PLAYER}!\n"
	.string "How about a race down to Bo's ranch?!\p"
	.string "Three... {PAUSE 30}Two... {PAUSE 30}GO!$"

HF_T_Mike3::
# 1158 "data/maps/Highland_Farms/scripts.pory"
	.string "Hey, {PLAYER}, almost done over here.\n"
	.string "Come back in a lil' bit, I got somethin'\l"
	.string "to show you!$"

HF_T_Mike4::
# 1164 "data/maps/Highland_Farms/scripts.pory"
	.string "Hurry up, {PLAYER}!$"

HF_T_Mike5::
# 1168 "data/maps/Highland_Farms/scripts.pory"
	.string "Alright, so I've been workin' on this for\n"
	.string "a while now...\p"
	.string "I knew one day we would need one of\n"
	.string "these, I just didn't think it would be\l"
	.string "this soon!\p"
	.string "{PLAYER}... {PAUSE 30}are you ready?$"

HF_T_Mike6_Yes::
# 1177 "data/maps/Highland_Farms/scripts.pory"
	.string "Haha! I knew you would be excited,\n"
	.string "{PLAYER}!\l"
	.string "Follow me!$"

HF_T_Mike6_No::
# 1183 "data/maps/Highland_Farms/scripts.pory"
	.string "Oh, come on, don't be like that,\n"
	.string "{PLAYER}.\l"
	.string "Just follow me, would'ya?$"

HF_T_Mike7::
# 1189 "data/maps/Highland_Farms/scripts.pory"
	.string "Well, what do you think?!\p"
	.string "It's our very own battle stage!!\p"
	.string "I wanted to make sure that our first\n"
	.string "battle was in an arena just like Sammy\l"
	.string "and Agatha used to compete in!\p"
	.string "Well... {PAUSE 30}Pretty close, right?\p"
	.string "Let's go, {PLAYER}, we gotta test it out\n"
	.string "right away!$"

HF_T_Mike8::
# 1200 "data/maps/Highland_Farms/scripts.pory"
	.string "Hurry up, {PLAYER}!\n"
	.string "Go stand on your side so we can get\l"
	.string "this battle started!!$"

HF_T_Mike9::
# 1206 "data/maps/Highland_Farms/scripts.pory"
	.string "Don't be timid now, {PLAYER}!\n"
	.string "Get back here and battle!$"

HF_T_Mike10::
# 1211 "data/maps/Highland_Farms/scripts.pory"
	.string "Let's do this!$"

HF_T_Mike11::
# 1215 "data/maps/Highland_Farms/scripts.pory"
	.string "Man, I was really hoping I could win\n"
	.string "that first one...\p"
	.string "But no matter what, that was the most\n"
	.string "fun I've ever had!\p"
	.string "It seems like we both have a good bond\n"
	.string "with our Pokemon too.\p"
	.string "Anyways, I gotta go n' let this lil' fella\n"
	.string "rest for a while.\p"
	.string "See ya later, {PLAYER}!$"

HF_T_Mike12::
# 1227 "data/maps/Highland_Farms/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Just wanted to stop by before I hit the\n"
	.string "road!\p"
	.string "I'm gonna head North on Rt. 89 toward\n"
	.string "Verde Village, Bo said there was some\l"
	.string "sort of ''Trainer School'' there.\p"
	.string "Not that I need anyone to teach me how\n"
	.string "to battle or anything, haha!\p"
	.string "Anyways, if you're heading the same way\n"
	.string "and run into that pesky flock of\l"
	.string "Psyduck, just turn your Pokémon loose\l"
	.string "on 'em!\p"
	.string "Don't let anyone beat you before we\n"
	.string "battle again, {PLAYER}.\p"
	.string "Your first loss is going to be to me!\n"
	.string "See ya!$"

HF_T_MikeGoTurtwig::
# 1247 "data/maps/Highland_Farms/scripts.pory"
	.string "Go, Turtwig!$"

HF_T_MikeGoLitten::
# 1251 "data/maps/Highland_Farms/scripts.pory"
	.string "Go, Litten!$"

HF_T_MikeGoOshawott::
# 1255 "data/maps/Highland_Farms/scripts.pory"
	.string "Go, Oshawott!$"

HF_T_MikeLoseBattle::
# 1259 "data/maps/Highland_Farms/scripts.pory"
	.string "Not the start I was lookin' for...$"

HF_T_Mamaw1::
# 1263 "data/maps/Highland_Farms/scripts.pory"
	.string "Takin' care of Millie brings ol' Mamaw so\n"
	.string "much joy.\p"
	.string "I jus' love seein' her happy!$"

HF_T_Mom1::
# 1269 "data/maps/Highland_Farms/scripts.pory"
	.string "Honey, where are you going?!\n"
	.string "You're taking this too personally!\p"
	.string "...{PAUSE 30}\n"
	.string "{FONT_SMALL_NARROWER}Oh boy.$"
