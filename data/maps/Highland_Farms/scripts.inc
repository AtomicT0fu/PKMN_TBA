Highland_Farms_MapScripts::
# 2 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HF_UpdateMetatiles
# 3 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HF_UpdateSpritePos
# 4 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HF_RemoveRivalPokemon
	.byte 0


TestBattle_HF::
# 8 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_CALVIN_1, HF_T_MikeLoseBattle
	end


HF_RemoveRivalPokemon::
# 13 "data/maps/Highland_Farms/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HF_RemoveRivalPokemon_2
HF_RemoveRivalPokemon_1:
# 19 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq HF_RemoveRivalPokemon_5
HF_RemoveRivalPokemon_4:
	end

HF_RemoveRivalPokemon_2:
# 15 "data/maps/Highland_Farms/scripts.pory"
	removeobject 11
# 16 "data/maps/Highland_Farms/scripts.pory"
	removeobject 12
# 17 "data/maps/Highland_Farms/scripts.pory"
	removeobject 13
	goto HF_RemoveRivalPokemon_1

HF_RemoveRivalPokemon_5:
# 20 "data/maps/Highland_Farms/scripts.pory"
	removeobject 8
# 21 "data/maps/Highland_Farms/scripts.pory"
	removeobject 9
# 22 "data/maps/Highland_Farms/scripts.pory"
	removeobject 10
	goto HF_RemoveRivalPokemon_4


HF_RivalShed_IsDoorLocked::
# 30 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_UNLOCK_RIVAL_SHED, HF_RivalShed_IsDoorLocked_2
# 38 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 39 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_RivalShed_IsDoorLocked_Text_1
# 40 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 41 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 42 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
HF_RivalShed_IsDoorLocked_1:
# 44 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_RivalShed_IsDoorLocked_2:
# 31 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 32 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_RivalShed_IsDoorLocked_Text_0
# 33 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 34 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 35 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
	goto HF_RivalShed_IsDoorLocked_1


HF_UpdateMetatiles::
# 49 "data/maps/Highland_Farms/scripts.pory"
	call CheckSproutFlag
# 50 "data/maps/Highland_Farms/scripts.pory"
	call HF_CheckLogFlag
	end


HF_UpdateSpritePos::
# 55 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_UpdateSpritePos_2
# 61 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 19
	goto_if_eq HF_UpdateSpritePos_3
HF_UpdateSpritePos_1:
	end

HF_UpdateSpritePos_2:
# 56 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 1, 12, 19
# 57 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 11, 19
# 58 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 59 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	goto HF_UpdateSpritePos_1

HF_UpdateSpritePos_3:
# 62 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 10, 19
# 63 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	goto HF_UpdateSpritePos_1


HF_Mike_Interact::
# 71 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 20
	goto_if_eq HF_Mike_Interact_2
# 79 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_Mike_Interact_3
HF_Mike_Interact_1:
# 89 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_Mike_Interact_2:
# 72 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 73 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 74 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike8
# 75 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 76 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 77 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_WEST
	goto HF_Mike_Interact_1

HF_Mike_Interact_3:
# 80 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 81 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 82 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike3
# 83 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 84 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 85 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_EAST
	goto HF_Mike_Interact_1


HF_Mamaw_Interact::
# 94 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 95 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mamaw_Interact_Text_0
# 96 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mamaw1
# 97 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 98 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 99 "data/maps/Highland_Farms/scripts.pory"
	turnobject 5, DIR_WEST
# 100 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Millie_Interact::
# 105 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_Millie_Interact_2
# 120 "data/maps/Highland_Farms/scripts.pory"
	lock
# 121 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 122 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_MILTANK, 0
# 123 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
HF_Millie_Interact_1:
# 125 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_Millie_Interact_2:
# 106 "data/maps/Highland_Farms/scripts.pory"
	lock
# 107 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 108 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_MILTANK, 0
# 109 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 110 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 111 "data/maps/Highland_Farms/scripts.pory"
	applymovement 1, Univ_Heart
# 112 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 113 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 114 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_Millie_Interact_Text_0
# 115 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 116 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 117 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
	goto HF_Millie_Interact_1


HF_DadIntro_A::
# 131 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 132 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1A
# 133 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 134 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 135 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 136 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 137 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 138 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 139 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 140 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 141 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 142 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 143 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 144 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 145 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 146 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 147 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 148 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 149 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 150 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 151 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 152 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 153 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 154 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 155 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 156 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 157 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 158 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 159 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 160 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 161 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 162 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 163 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 164 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 165 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 166 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 167 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 168 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 169 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 170 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 171 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 172 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
# 173 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 174 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 175 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 176 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 177 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 178 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 179 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 180 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 181 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 182 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 183 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 184 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 185 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 186 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 187 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 188 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 189 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 190 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1A
# 191 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 192 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 193 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 194 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 195 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 196 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 197 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 15
# 198 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 199 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 200 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 201 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 202 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 203 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 204 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 15
# 205 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 206 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 207 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 208 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 209 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 210 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 211 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 212 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_DadIntro_B::
# 217 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 218 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1B
# 219 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 220 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 221 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 222 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 223 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 224 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 225 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 226 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 227 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 228 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 229 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 230 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 231 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 232 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 233 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 234 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 235 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 236 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 237 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 238 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 239 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 240 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 241 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 242 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 243 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 244 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 245 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 246 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 247 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 248 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 249 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 250 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 251 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 252 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 253 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 254 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 255 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 256 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 257 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 258 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
# 259 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 260 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 261 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 262 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 263 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 264 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 265 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 266 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 267 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 268 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 269 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 270 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 271 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 272 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 273 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 274 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 275 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 276 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1B
# 277 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 278 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 279 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 280 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 281 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 282 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 283 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 15
# 284 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 285 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 286 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 287 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 288 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 289 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 290 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 15
# 291 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 292 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 293 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 294 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 295 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 296 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 297 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 298 "data/maps/Highland_Farms/scripts.pory"
	release
	end


CheckSproutFlag::
# 303 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_SPROUTS_PLANTED, CheckSproutFlag_2
CheckSproutFlag_1:
	return

CheckSproutFlag_2:
# 304 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 305 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 306 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
	goto CheckSproutFlag_1


HF_CheckLogFlag::
# 314 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_HF_REMOVE_LOG, HF_CheckLogFlag_2
HF_CheckLogFlag_1:
	return

HF_CheckLogFlag_2:
# 315 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 2, 12, 0x000, FALSE
# 316 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 3, 12, 0x000, FALSE
	goto HF_CheckLogFlag_1


BattleMike::
# 324 "data/maps/Highland_Farms/scripts.pory"
	lock
# 325 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 326 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE, LoseText
# 327 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_MikeIntro::
# 332 "data/maps/Highland_Farms/scripts.pory"
	turnobject 3, DIR_NORTH
# 333 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, Univ_Exclam
# 334 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 335 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 336 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 337 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 338 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, HF_W_Mike1
# 339 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 340 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 341 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike1
# 342 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 343 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 344 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, HF_W_Mike2
# 345 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 346 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 3
# 347 "data/maps/Highland_Farms/scripts.pory"
	opendoor 41, 33
# 348 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 349 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, Univ_StepUp1
# 350 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 351 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 352 "data/maps/Highland_Farms/scripts.pory"
	removeobject 3
# 353 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 354 "data/maps/Highland_Farms/scripts.pory"
	closedoor 41, 33
# 355 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 356 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_1
# 357 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 8
# 358 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MIKE_2
# 359 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Mike_ReadyToGo::
# 364 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 365 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_2
# 366 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 367 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 10, 16, 0x219, TRUE
# 368 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 369 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 370 "data/maps/Highland_Farms/scripts.pory"
	playse SE_DOOR
# 371 "data/maps/Highland_Farms/scripts.pory"
	opendoor 10, 16
# 372 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 373 "data/maps/Highland_Farms/scripts.pory"
	addobject 4
# 374 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_StepDown1
# 375 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 376 "data/maps/Highland_Farms/scripts.pory"
	closedoor 10, 16
# 377 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 378 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_Exclam
# 379 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 380 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 381 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 382 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 383 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_W_Mike3
# 384 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_3
# 385 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 4
# 386 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 387 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 388 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike2, MSGBOX_AUTOCLOSE
# 389 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_W_Player2
# 390 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 391 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_W_Mike4
# 392 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 393 "data/maps/Highland_Farms/scripts.pory"
	removeobject 4
# 394 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 10, 16, 0x226, TRUE
# 395 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 396 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 14
# 397 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE
# 398 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_FirstBattleIntro_Trigger::
# 403 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 2, 12, 0x000, FALSE
# 404 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 3, 12, 0x000, FALSE
# 405 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HF_REMOVE_LOG
# 406 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_SOUTH
# 407 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 408 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_2
# 409 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 410 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 411 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 412 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike4
# 413 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 414 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 415 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player2
# 416 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 417 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 418 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 419 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike5, MSGBOX_YESNO
# 420 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HF_FirstBattleIntro_Trigger_2
# 427 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 428 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike6_No
# 429 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 430 "data/maps/Highland_Farms/scripts.pory"
	closemessage
HF_FirstBattleIntro_Trigger_1:
# 432 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike5
# 433 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Mike5
# 434 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player3
# 435 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 436 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 437 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 438 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 439 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 440 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 441 "data/maps/Highland_Farms/scripts.pory"
	delay 100
# 442 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 443 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 444 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike7
# 445 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 446 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 447 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike6
# 448 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 449 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 11, 5
# 450 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 451 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 452 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 453 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 454 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 455 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 456 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 20
# 457 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_FirstBattleIntro_Trigger_2:
# 421 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 422 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike6_Yes
# 423 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 424 "data/maps/Highland_Farms/scripts.pory"
	closemessage
	goto HF_FirstBattleIntro_Trigger_1


HF_NoExitBattleStage_Trigger::
# 462 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 463 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_Exclam
# 464 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 465 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_4
# 466 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 467 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 468 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike9
# 469 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 470 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 471 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_4R
# 472 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 473 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 474 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 475 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 476 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_FirstBattleStart_Trigger::
# 481 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 482 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 483 "data/maps/Highland_Farms/scripts.pory"
	fadeoutbgm 1
# 484 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_5
# 485 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 486 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 487 "data/maps/Highland_Farms/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 488 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 489 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike10
# 490 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 491 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 492 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 493 "data/maps/Highland_Farms/scripts.pory"
	call HF_HandleBattleSprites_Rival
# 494 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 495 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_5R
# 496 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 497 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 498 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 499 "data/maps/Highland_Farms/scripts.pory"
	call HF_HandleBattleSprites_Player
# 500 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 501 "data/maps/Highland_Farms/scripts.pory"
	call HF_StartBattle_1
# 502 "data/maps/Highland_Farms/scripts.pory"
	fadedefaultbgm
# 503 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 504 "data/maps/Highland_Farms/scripts.pory"
	call HF_RemovePlayerPokemon_PostBattle
# 505 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 506 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike7
# 507 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player4
# 508 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 509 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 510 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 511 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike11
# 512 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 513 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 514 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike8
# 515 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 516 "data/maps/Highland_Farms/scripts.pory"
	removeobject 4
# 517 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HF_HIDE_RIVAL_MIKE
# 518 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_RHB1F_HIDE_RIVAL
# 519 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 21
# 520 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_RemovePlayerPokemon_PostBattle::
# 525 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_RemovePlayerPokemon_PostBattle_2
# 548 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_RemovePlayerPokemon_PostBattle_3
# 571 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_RemovePlayerPokemon_PostBattle_4
HF_RemovePlayerPokemon_PostBattle_1:
	return

HF_RemovePlayerPokemon_PostBattle_2:
# 526 "data/maps/Highland_Farms/scripts.pory"
	applymovement 10, Univ_StepLeft1
# 527 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 528 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 529 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 530 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BIKE_HOP
# 531 "data/maps/Highland_Farms/scripts.pory"
	applymovement 10, Univ_JumpIP_1Left
# 532 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 533 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 534 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 535 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 536 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 7, MAP_HIGHLAND_FARMS, 0
# 537 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 10, MAP_HIGHLAND_FARMS, 3
# 538 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 539 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 540 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 541 "data/maps/Highland_Farms/scripts.pory"
	removeobject 10
# 542 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 543 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 544 "data/maps/Highland_Farms/scripts.pory"
	playse SE_RG_BAG_POCKET
# 545 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 546 "data/maps/Highland_Farms/scripts.pory"
	waitse
	goto HF_RemovePlayerPokemon_PostBattle_1

HF_RemovePlayerPokemon_PostBattle_3:
# 549 "data/maps/Highland_Farms/scripts.pory"
	applymovement 9, Univ_StepLeft1
# 550 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 551 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 552 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 553 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BIKE_HOP
# 554 "data/maps/Highland_Farms/scripts.pory"
	applymovement 9, Univ_JumpIP_1Left
# 555 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 556 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 557 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 558 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 559 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 7, MAP_HIGHLAND_FARMS, 0
# 560 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 9, MAP_HIGHLAND_FARMS, 3
# 561 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 562 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 563 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 564 "data/maps/Highland_Farms/scripts.pory"
	removeobject 9
# 565 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 566 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 567 "data/maps/Highland_Farms/scripts.pory"
	playse SE_RG_BAG_POCKET
# 568 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 569 "data/maps/Highland_Farms/scripts.pory"
	waitse
	goto HF_RemovePlayerPokemon_PostBattle_1

HF_RemovePlayerPokemon_PostBattle_4:
# 572 "data/maps/Highland_Farms/scripts.pory"
	applymovement 8, Univ_StepLeft1
# 573 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 574 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 575 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 576 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BIKE_HOP
# 577 "data/maps/Highland_Farms/scripts.pory"
	applymovement 8, Univ_JumpIP_1Left
# 578 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 579 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 580 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 581 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 582 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 7, MAP_HIGHLAND_FARMS, 0
# 583 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 8, MAP_HIGHLAND_FARMS, 3
# 584 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 585 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 586 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 587 "data/maps/Highland_Farms/scripts.pory"
	removeobject 8
# 588 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 589 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 590 "data/maps/Highland_Farms/scripts.pory"
	playse SE_RG_BAG_POCKET
# 591 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 592 "data/maps/Highland_Farms/scripts.pory"
	waitse
	goto HF_RemovePlayerPokemon_PostBattle_1


HF_StartBattle_1::
# 598 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_StartBattle_1_1
# 608 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_StartBattle_1_2
# 618 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_StartBattle_1_3
	return

HF_StartBattle_1_1:
# 599 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 600 "data/maps/Highland_Farms/scripts.pory"
	applymovement 10, HF_M_PlayerPokemon
# 601 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 602 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 603 "data/maps/Highland_Farms/scripts.pory"
	applymovement 11, HF_M_RivalPokemon
# 604 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 605 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_HF_MIKE_TURTWIG, HF_T_MikeLoseBattle
	return

HF_StartBattle_1_2:
# 609 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 610 "data/maps/Highland_Farms/scripts.pory"
	applymovement 9, HF_M_PlayerPokemon
# 611 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 612 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 613 "data/maps/Highland_Farms/scripts.pory"
	applymovement 13, HF_M_RivalPokemon
# 614 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 615 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_HF_MIKE_OSHAWOTT, HF_T_MikeLoseBattle
	return

HF_StartBattle_1_3:
# 619 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 620 "data/maps/Highland_Farms/scripts.pory"
	applymovement 8, HF_M_PlayerPokemon
# 621 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 622 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 623 "data/maps/Highland_Farms/scripts.pory"
	applymovement 12, HF_M_RivalPokemon
# 624 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 625 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_HF_MIKE_LITTEN, HF_T_MikeLoseBattle
	return


HF_HandleBattleSprites_Rival::
# 633 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_HandleBattleSprites_Rival_2
# 650 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_HandleBattleSprites_Rival_3
# 667 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_HandleBattleSprites_Rival_4
HF_HandleBattleSprites_Rival_1:
	return

HF_HandleBattleSprites_Rival_2:
# 634 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 635 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_MikeGoTurtwig
# 636 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 637 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 638 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 639 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 640 "data/maps/Highland_Farms/scripts.pory"
	addobject 6
# 641 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 642 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 643 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 644 "data/maps/Highland_Farms/scripts.pory"
	addobject 11
# 645 "data/maps/Highland_Farms/scripts.pory"
	removeobject 6
# 646 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 647 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_TURTWIG, 2
# 648 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Rival_1

HF_HandleBattleSprites_Rival_3:
# 651 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 652 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_MikeGoOshawott
# 653 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 654 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 655 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 656 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 657 "data/maps/Highland_Farms/scripts.pory"
	addobject 6
# 658 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 659 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 660 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 661 "data/maps/Highland_Farms/scripts.pory"
	addobject 13
# 662 "data/maps/Highland_Farms/scripts.pory"
	removeobject 6
# 663 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 664 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 2
# 665 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Rival_1

HF_HandleBattleSprites_Rival_4:
# 668 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 669 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_MikeGoLitten
# 670 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 671 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 672 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 673 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 674 "data/maps/Highland_Farms/scripts.pory"
	addobject 6
# 675 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 676 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 677 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 678 "data/maps/Highland_Farms/scripts.pory"
	addobject 12
# 679 "data/maps/Highland_Farms/scripts.pory"
	removeobject 6
# 680 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 681 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_LITTEN, 2
# 682 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Rival_1


HF_HandleBattleSprites_Player::
# 688 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_HandleBattleSprites_Player_2
# 702 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_HandleBattleSprites_Player_3
# 716 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_HandleBattleSprites_Player_4
HF_HandleBattleSprites_Player_1:
	return

HF_HandleBattleSprites_Player_2:
# 689 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 690 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 691 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 692 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 693 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 694 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 695 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 696 "data/maps/Highland_Farms/scripts.pory"
	addobject 10
# 697 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 698 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 699 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 2
# 700 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Player_1

HF_HandleBattleSprites_Player_3:
# 703 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 704 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 705 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 706 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 707 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 708 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 709 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 710 "data/maps/Highland_Farms/scripts.pory"
	addobject 9
# 711 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 712 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 713 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_LITTEN, 2
# 714 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Player_1

HF_HandleBattleSprites_Player_4:
# 717 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 718 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 719 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 720 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 721 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 722 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 723 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 724 "data/maps/Highland_Farms/scripts.pory"
	addobject 8
# 725 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 726 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 727 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_TURTWIG, 2
# 728 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Player_1


# 733 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1A:
# 734 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 734 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 734 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 735 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 738 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1B:
# 739 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 739 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 739 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 739 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
	step_end

# 742 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_2:
# 743 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 743 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 743 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 746 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_3:
# 747 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 747 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 747 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 750 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_4:
# 751 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 751 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 751 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 751 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
	step_end

# 754 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_4R:
# 755 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 755 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 755 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 755 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
	step_end

# 758 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_5:
# 759 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 759 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 759 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 759 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 759 "data/maps/Highland_Farms/scripts.pory"
	walk_right
	step_end

# 762 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_5R:
# 763 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 763 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 763 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 763 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 763 "data/maps/Highland_Farms/scripts.pory"
	walk_left
	step_end

# 766 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_6:
# 767 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 767 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
	step_end

# 770 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad1:
# 771 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 771 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 771 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
	step_end

# 774 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad2:
# 775 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 776 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 779 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad3:
# 780 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 781 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 782 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 782 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 783 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 786 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad4:
# 787 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 787 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 787 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 788 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 788 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 788 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 789 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 792 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1A:
# 793 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 793 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 793 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 793 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 793 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 796 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1B:
# 797 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 798 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 798 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 798 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 798 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 798 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 801 "data/maps/Highland_Farms/scripts.pory"
HF_W_Player2:
# 802 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 803 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 806 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player4:
# 807 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 807 "data/maps/Highland_Farms/scripts.pory"
	walk_right
	step_end

# 810 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike1:
# 811 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 811 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
	step_end

# 814 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike2:
# 815 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 815 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 815 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 815 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 816 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 819 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player2:
# 820 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 820 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 823 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player3:
# 824 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 825 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 825 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 825 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 825 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 825 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 826 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 826 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 827 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 827 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 828 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 828 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 828 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 828 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 828 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 828 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 829 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 829 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 830 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 830 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 830 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 830 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 831 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 831 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 831 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 832 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 835 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike3:
# 836 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 836 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 836 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 839 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike4:
# 840 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 840 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 840 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 840 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 840 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 840 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 840 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 840 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
	step_end

# 843 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike5:
# 844 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 844 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 844 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 844 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 844 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 845 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 845 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 846 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 846 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 847 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 847 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 847 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 847 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 847 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 847 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 848 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 848 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 849 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 849 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 849 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 849 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 850 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 850 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 850 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 850 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 851 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 854 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike6:
# 855 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 855 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 856 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 856 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 857 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 860 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike7:
# 861 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 861 "data/maps/Highland_Farms/scripts.pory"
	walk_left
	step_end

# 864 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike8:
# 865 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 865 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 866 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 866 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 866 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 866 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 866 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 867 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 867 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 867 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 867 "data/maps/Highland_Farms/scripts.pory"
	walk_down
# 867 "data/maps/Highland_Farms/scripts.pory"
	walk_down
	step_end

# 870 "data/maps/Highland_Farms/scripts.pory"
HF_M_PlayerPokemon:
# 871 "data/maps/Highland_Farms/scripts.pory"
	slide_right
# 872 "data/maps/Highland_Farms/scripts.pory"
	face_right
	step_end

# 875 "data/maps/Highland_Farms/scripts.pory"
HF_M_RivalPokemon:
# 876 "data/maps/Highland_Farms/scripts.pory"
	slide_left
# 877 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

HF_RivalShed_IsDoorLocked_Text_0:
# 32 "data/maps/Highland_Farms/scripts.pory"
	.string "The door is unlocked.$"

HF_RivalShed_IsDoorLocked_Text_1:
# 39 "data/maps/Highland_Farms/scripts.pory"
	.string "The door is locked.$"

HF_Mike_Interact_Text_0:
# 73 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

HF_Mamaw_Interact_Text_0:
# 95 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mamaw$"

HF_Millie_Interact_Text_0:
# 114 "data/maps/Highland_Farms/scripts.pory"
	.string "Millie loves to be brushed!$"

HF_DadIntro_A_Text_0:
# 187 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Dad$"

HF_T_Dad1::
# 884 "data/maps/Highland_Farms/scripts.pory"
	.string "Mornin', {PLAYER}!\n"
	.string "Come on over here, we got a job to do.$"

HF_T_Dad2::
# 889 "data/maps/Highland_Farms/scripts.pory"
	.string "I already got them new plants in the \n"
	.string "ground, n' the harvest herbs moved\l"
	.string "over into the shed.\p"
	.string "If ya wanna meet me in there, we can\n"
	.string "get to processin' this new batch.\p"
	.string "I'll bet'cha we can get finished before\n"
	.string "Momma finishes lunch if we stick to it!\p"
	.string "It sure is great having yer help out\n"
	.string "here, {PLAYER}.$"

HF_T_Mike1::
# 901 "data/maps/Highland_Farms/scripts.pory"
	.string "{PLAYER}!!\p"
	.string "We gotta watch this new Battle Tape\n"
	.string "that Ol' Bo lent me!\p"
	.string "Come on, let's go!$"

HF_T_Mike2::
# 908 "data/maps/Highland_Farms/scripts.pory"
	.string "Hey, that was pretty quick, {PLAYER}!\n"
	.string "How about a race down to Bo's ranch?!\p"
	.string "Three... {PAUSE 30}Two... {PAUSE 30}GO!$"

HF_T_Mike3::
# 914 "data/maps/Highland_Farms/scripts.pory"
	.string "Hey, {PLAYER}, almost done over here.\n"
	.string "Come back in a lil' bit, I got somethin'\l"
	.string "to show you!$"

HF_T_Mike4::
# 920 "data/maps/Highland_Farms/scripts.pory"
	.string "Hurry up, {PLAYER}!$"

HF_T_Mike5::
# 924 "data/maps/Highland_Farms/scripts.pory"
	.string "Alright, so I've been workin' on this for\n"
	.string "a while now...\p"
	.string "I knew one day we would need one of\n"
	.string "these, I just didn't think it would be\l"
	.string "this soon!\p"
	.string "{PLAYER}... {PAUSE 30}are you ready?$"

HF_T_Mike6_Yes::
# 933 "data/maps/Highland_Farms/scripts.pory"
	.string "Haha! I knew you would be excited,\n"
	.string "{PLAYER}!\l"
	.string "Follow me!$"

HF_T_Mike6_No::
# 939 "data/maps/Highland_Farms/scripts.pory"
	.string "Oh, come on, don't be like that,\n"
	.string "{PLAYER}.\l"
	.string "Just follow me, would'ya?$"

HF_T_Mike7::
# 945 "data/maps/Highland_Farms/scripts.pory"
	.string "Well, what do you think?!\p"
	.string "It's our very own battle stage!!\p"
	.string "I wanted to make sure that our first\n"
	.string "battle was in an arena just like Sammy\l"
	.string "and Agatha used to compete in!\p"
	.string "Well... {PAUSE 30}Pretty close, right?\p"
	.string "Let's go, {PLAYER}, we gotta test it out\n"
	.string "right away!$"

HF_T_Mike8::
# 956 "data/maps/Highland_Farms/scripts.pory"
	.string "Hurry up, {PLAYER}!\n"
	.string "Go stand on your side so we can get\l"
	.string "this battle started!!$"

HF_T_Mike9::
# 962 "data/maps/Highland_Farms/scripts.pory"
	.string "Don't be timid now, {PLAYER}!\n"
	.string "Get back here and battle!$"

HF_T_Mike10::
# 967 "data/maps/Highland_Farms/scripts.pory"
	.string "Let's do this!$"

HF_T_Mike11::
# 971 "data/maps/Highland_Farms/scripts.pory"
	.string "Man, I was really hoping I could win\n"
	.string "that first one...\p"
	.string "But no matter what, that was the most\n"
	.string "fun I've ever had!\p"
	.string "It seems like we both have a good bond\n"
	.string "with our Pokemon too.\p"
	.string "Anyways, I gotta go n' let this lil' fella\n"
	.string "rest for a while.\p"
	.string "See ya later, {PLAYER}!$"

HF_T_MikeGoTurtwig::
# 983 "data/maps/Highland_Farms/scripts.pory"
	.string "Go, Turtwig!$"

HF_T_MikeGoLitten::
# 987 "data/maps/Highland_Farms/scripts.pory"
	.string "Go, Litten!$"

HF_T_MikeGoOshawott::
# 991 "data/maps/Highland_Farms/scripts.pory"
	.string "Go, Oshawott!$"

HF_T_MikeLoseBattle::
# 995 "data/maps/Highland_Farms/scripts.pory"
	.string "Not the start I was lookin' for...$"

HF_T_Mamaw1::
# 999 "data/maps/Highland_Farms/scripts.pory"
	.string "Takin' care of Millie brings ol' Mamaw so\n"
	.string "much joy.\p"
	.string "I jus' love seein' her happy!$"
