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


HF_UpdateMetatiles::
# 30 "data/maps/Highland_Farms/scripts.pory"
	call CheckSproutFlag
# 31 "data/maps/Highland_Farms/scripts.pory"
	call HF_CheckLogFlag
	end


HF_UpdateSpritePos::
# 36 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_UpdateSpritePos_2
# 42 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 19
	goto_if_eq HF_UpdateSpritePos_3
HF_UpdateSpritePos_1:
	end

HF_UpdateSpritePos_2:
# 37 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 1, 12, 19
# 38 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 11, 19
# 39 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 40 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	goto HF_UpdateSpritePos_1

HF_UpdateSpritePos_3:
# 43 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 10, 19
# 44 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	goto HF_UpdateSpritePos_1


HF_Mike_Interact::
# 52 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 20
	goto_if_eq HF_Mike_Interact_2
# 60 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_Mike_Interact_3
HF_Mike_Interact_1:
# 70 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_Mike_Interact_2:
# 53 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 54 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 55 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike8
# 56 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 57 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 58 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_WEST
	goto HF_Mike_Interact_1

HF_Mike_Interact_3:
# 61 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 62 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 63 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike3
# 64 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 65 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 66 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_EAST
	goto HF_Mike_Interact_1


HF_Mamaw_Interact::
# 75 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 76 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mamaw_Interact_Text_0
# 77 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mamaw1
# 78 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 79 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 80 "data/maps/Highland_Farms/scripts.pory"
	turnobject 5, DIR_WEST
# 81 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Millie_Interact::
# 86 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_Millie_Interact_2
# 101 "data/maps/Highland_Farms/scripts.pory"
	lock
# 102 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 103 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_MILTANK, 0
# 104 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
HF_Millie_Interact_1:
# 106 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_Millie_Interact_2:
# 87 "data/maps/Highland_Farms/scripts.pory"
	lock
# 88 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 89 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_MILTANK, 0
# 90 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 91 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 92 "data/maps/Highland_Farms/scripts.pory"
	applymovement 1, Univ_Heart
# 93 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 94 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 95 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_Millie_Interact_Text_0
# 96 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 97 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 98 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
	goto HF_Millie_Interact_1


HF_DadIntro_A::
# 112 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 113 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1A
# 114 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 115 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 116 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 117 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 118 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 119 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 120 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 121 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 122 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 123 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 124 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 125 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 126 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 127 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 128 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 129 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 130 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 131 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 132 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 133 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 134 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 135 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 136 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 137 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 138 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 139 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 140 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 141 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 142 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 143 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 144 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 145 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 146 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 147 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 148 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 149 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 150 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 151 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 152 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 153 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
# 154 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 155 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 156 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 157 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 158 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 159 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 160 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 161 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 162 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 163 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 164 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 165 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 166 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 167 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 168 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 169 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 170 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 171 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1A
# 172 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 173 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 174 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 175 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 176 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 177 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 178 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 15
# 179 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 180 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 181 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 182 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 183 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 184 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 185 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 15
# 186 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 187 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 188 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 189 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 190 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 191 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 192 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 193 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_DadIntro_B::
# 198 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 199 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1B
# 200 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 201 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 202 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 203 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 204 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 205 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 206 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 207 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 208 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 209 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 210 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 211 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 212 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 213 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 214 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 215 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 216 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 217 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 218 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 219 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 220 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 221 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 222 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 223 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 224 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 225 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 226 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 227 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 228 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 229 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 230 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 231 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 232 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 233 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 234 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 235 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 236 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 237 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 238 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 239 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
# 240 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 241 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 242 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 243 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 244 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 245 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 246 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 247 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 248 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 249 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 250 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 251 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 252 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 253 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 254 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 255 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 256 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 257 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1B
# 258 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 259 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 260 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 261 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 262 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 263 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 264 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 15
# 265 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 266 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 267 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 268 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 269 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 270 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 271 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 15
# 272 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 273 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 274 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 275 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 276 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 277 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 278 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 279 "data/maps/Highland_Farms/scripts.pory"
	release
	end


CheckSproutFlag::
# 284 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_SPROUTS_PLANTED, CheckSproutFlag_2
CheckSproutFlag_1:
	return

CheckSproutFlag_2:
# 285 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 286 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 287 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
	goto CheckSproutFlag_1


HF_CheckLogFlag::
# 295 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_HF_REMOVE_LOG, HF_CheckLogFlag_2
HF_CheckLogFlag_1:
	return

HF_CheckLogFlag_2:
# 296 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 2, 12, 0x000, FALSE
# 297 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 3, 12, 0x000, FALSE
	goto HF_CheckLogFlag_1


BattleMike::
# 305 "data/maps/Highland_Farms/scripts.pory"
	lock
# 306 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 307 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE, LoseText
# 308 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_MikeIntro::
# 313 "data/maps/Highland_Farms/scripts.pory"
	turnobject 3, DIR_NORTH
# 314 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, Univ_Exclam
# 315 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 316 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 317 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 318 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 319 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, HF_W_Mike1
# 320 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 321 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 322 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike1
# 323 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 324 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 325 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, HF_W_Mike2
# 326 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 327 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 3
# 328 "data/maps/Highland_Farms/scripts.pory"
	opendoor 41, 33
# 329 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 330 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, Univ_StepUp1
# 331 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 332 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 333 "data/maps/Highland_Farms/scripts.pory"
	removeobject 3
# 334 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 335 "data/maps/Highland_Farms/scripts.pory"
	closedoor 41, 33
# 336 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 337 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_1
# 338 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 8
# 339 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MIKE_2
# 340 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Mike_ReadyToGo::
# 345 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 346 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_2
# 347 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 348 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 349 "data/maps/Highland_Farms/scripts.pory"
	playse SE_DOOR
# 350 "data/maps/Highland_Farms/scripts.pory"
	opendoor 10, 16
# 351 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 352 "data/maps/Highland_Farms/scripts.pory"
	addobject 4
# 353 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_StepDown1
# 354 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 355 "data/maps/Highland_Farms/scripts.pory"
	closedoor 10, 16
# 356 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 357 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_Exclam
# 358 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 359 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 360 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 361 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 362 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_W_Mike3
# 363 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_3
# 364 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 4
# 365 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 366 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 367 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike2, MSGBOX_AUTOCLOSE
# 368 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_W_Player2
# 369 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 370 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_W_Mike4
# 371 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 372 "data/maps/Highland_Farms/scripts.pory"
	removeobject 4
# 373 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 14
# 374 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE
# 375 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_FirstBattleIntro_Trigger::
# 380 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 2, 12, 0x000, FALSE
# 381 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 3, 12, 0x000, FALSE
# 382 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HF_REMOVE_LOG
# 383 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_SOUTH
# 384 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 385 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_2
# 386 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 387 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 388 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 389 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike4
# 390 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 391 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 392 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player2
# 393 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 394 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 395 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 396 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike5, MSGBOX_YESNO
# 397 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HF_FirstBattleIntro_Trigger_2
# 404 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 405 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike6_No
# 406 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 407 "data/maps/Highland_Farms/scripts.pory"
	closemessage
HF_FirstBattleIntro_Trigger_1:
# 409 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike5
# 410 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Mike5
# 411 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player3
# 412 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 413 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 414 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 415 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 416 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 417 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 418 "data/maps/Highland_Farms/scripts.pory"
	delay 100
# 419 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 420 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 421 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike7
# 422 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 423 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 424 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike6
# 425 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 426 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 11, 5
# 427 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 428 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 429 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 430 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 431 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 432 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 433 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 20
# 434 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_FirstBattleIntro_Trigger_2:
# 398 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 399 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike6_Yes
# 400 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 401 "data/maps/Highland_Farms/scripts.pory"
	closemessage
	goto HF_FirstBattleIntro_Trigger_1


HF_NoExitBattleStage_Trigger::
# 439 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 440 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_Exclam
# 441 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 442 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_4
# 443 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 444 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 445 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike9
# 446 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 447 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 448 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_4R
# 449 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 450 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 451 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 452 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 453 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_FirstBattleStart_Trigger::
# 458 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 459 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 460 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_5
# 461 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 462 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 463 "data/maps/Highland_Farms/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 464 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 465 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike10
# 466 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 467 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 468 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 469 "data/maps/Highland_Farms/scripts.pory"
	call HF_HandleBattleSprites_Rival
# 470 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 471 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_5R
# 472 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 473 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 474 "data/maps/Highland_Farms/scripts.pory"
	call HF_HandleBattleSprites_Player
# 475 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 476 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_6
# 477 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 478 "data/maps/Highland_Farms/scripts.pory"
	call HF_StartBattle_1
# 479 "data/maps/Highland_Farms/scripts.pory"
	fadedefaultbgm
# 480 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 481 "data/maps/Highland_Farms/scripts.pory"
	call HF_RemovePlayerPokemon_PostBattle
# 482 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 483 "data/maps/Highland_Farms/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 484 "data/maps/Highland_Farms/scripts.pory"
	waitfanfare
# 485 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 21
# 486 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_RemovePlayerPokemon_PostBattle::
# 491 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_RemovePlayerPokemon_PostBattle_2
# 514 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_RemovePlayerPokemon_PostBattle_3
# 537 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_RemovePlayerPokemon_PostBattle_4
HF_RemovePlayerPokemon_PostBattle_1:
	return

HF_RemovePlayerPokemon_PostBattle_2:
# 492 "data/maps/Highland_Farms/scripts.pory"
	applymovement 10, Univ_StepLeft1
# 493 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 494 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 495 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 496 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BIKE_HOP
# 497 "data/maps/Highland_Farms/scripts.pory"
	applymovement 10, Univ_JumpIP_1Left
# 498 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 499 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 500 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 501 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 502 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 7, MAP_HIGHLAND_FARMS, 0
# 503 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 10, MAP_HIGHLAND_FARMS, 3
# 504 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 505 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 506 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 507 "data/maps/Highland_Farms/scripts.pory"
	removeobject 10
# 508 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 509 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 510 "data/maps/Highland_Farms/scripts.pory"
	playse SE_RG_BAG_POCKET
# 511 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 512 "data/maps/Highland_Farms/scripts.pory"
	waitse
	goto HF_RemovePlayerPokemon_PostBattle_1

HF_RemovePlayerPokemon_PostBattle_3:
# 515 "data/maps/Highland_Farms/scripts.pory"
	applymovement 9, Univ_StepLeft1
# 516 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 517 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 518 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 519 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BIKE_HOP
# 520 "data/maps/Highland_Farms/scripts.pory"
	applymovement 9, Univ_JumpIP_1Left
# 521 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 522 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 523 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 524 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 525 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 7, MAP_HIGHLAND_FARMS, 0
# 526 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 9, MAP_HIGHLAND_FARMS, 3
# 527 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 528 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 529 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 530 "data/maps/Highland_Farms/scripts.pory"
	removeobject 9
# 531 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 532 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 533 "data/maps/Highland_Farms/scripts.pory"
	playse SE_RG_BAG_POCKET
# 534 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 535 "data/maps/Highland_Farms/scripts.pory"
	waitse
	goto HF_RemovePlayerPokemon_PostBattle_1

HF_RemovePlayerPokemon_PostBattle_4:
# 538 "data/maps/Highland_Farms/scripts.pory"
	applymovement 8, Univ_StepLeft1
# 539 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 540 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 541 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 542 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BIKE_HOP
# 543 "data/maps/Highland_Farms/scripts.pory"
	applymovement 8, Univ_JumpIP_1Left
# 544 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 545 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 546 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 547 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 548 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 7, MAP_HIGHLAND_FARMS, 0
# 549 "data/maps/Highland_Farms/scripts.pory"
	setobjectsubpriority 8, MAP_HIGHLAND_FARMS, 3
# 550 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 551 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 552 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 553 "data/maps/Highland_Farms/scripts.pory"
	removeobject 8
# 554 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 555 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 556 "data/maps/Highland_Farms/scripts.pory"
	playse SE_RG_BAG_POCKET
# 557 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 558 "data/maps/Highland_Farms/scripts.pory"
	waitse
	goto HF_RemovePlayerPokemon_PostBattle_1


HF_StartBattle_1::
# 564 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_StartBattle_1_1
# 574 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_StartBattle_1_2
# 584 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_StartBattle_1_3
	return

HF_StartBattle_1_1:
# 565 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 566 "data/maps/Highland_Farms/scripts.pory"
	applymovement 10, HF_M_PlayerPokemon
# 567 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 568 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 569 "data/maps/Highland_Farms/scripts.pory"
	applymovement 11, HF_M_RivalPokemon
# 570 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 571 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_HF_MIKE_TURTWIG, HF_T_MikeLoseBattle
	return

HF_StartBattle_1_2:
# 575 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 576 "data/maps/Highland_Farms/scripts.pory"
	applymovement 9, HF_M_PlayerPokemon
# 577 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 578 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 579 "data/maps/Highland_Farms/scripts.pory"
	applymovement 13, HF_M_RivalPokemon
# 580 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 581 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_HF_MIKE_OSHAWOTT, HF_T_MikeLoseBattle
	return

HF_StartBattle_1_3:
# 585 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 586 "data/maps/Highland_Farms/scripts.pory"
	applymovement 8, HF_M_PlayerPokemon
# 587 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 588 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_GUST2
# 589 "data/maps/Highland_Farms/scripts.pory"
	applymovement 12, HF_M_RivalPokemon
# 590 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 591 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_HF_MIKE_LITTEN, HF_T_MikeLoseBattle
	return


HF_HandleBattleSprites_Rival::
# 599 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_HandleBattleSprites_Rival_2
# 616 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_HandleBattleSprites_Rival_3
# 633 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_HandleBattleSprites_Rival_4
HF_HandleBattleSprites_Rival_1:
	return

HF_HandleBattleSprites_Rival_2:
# 600 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 601 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_MikeGoTurtwig
# 602 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 603 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 604 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 605 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 606 "data/maps/Highland_Farms/scripts.pory"
	addobject 6
# 607 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 608 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 609 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 610 "data/maps/Highland_Farms/scripts.pory"
	addobject 11
# 611 "data/maps/Highland_Farms/scripts.pory"
	removeobject 6
# 612 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 613 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_TURTWIG, 2
# 614 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Rival_1

HF_HandleBattleSprites_Rival_3:
# 617 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 618 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_MikeGoOshawott
# 619 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 620 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 621 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 622 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 623 "data/maps/Highland_Farms/scripts.pory"
	addobject 6
# 624 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 625 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 626 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 627 "data/maps/Highland_Farms/scripts.pory"
	addobject 13
# 628 "data/maps/Highland_Farms/scripts.pory"
	removeobject 6
# 629 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 630 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 2
# 631 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Rival_1

HF_HandleBattleSprites_Rival_4:
# 634 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 635 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_MikeGoLitten
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
	addobject 12
# 645 "data/maps/Highland_Farms/scripts.pory"
	removeobject 6
# 646 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 647 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_LITTEN, 2
# 648 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Rival_1


HF_HandleBattleSprites_Player::
# 654 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq HF_HandleBattleSprites_Player_2
# 668 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq HF_HandleBattleSprites_Player_3
# 682 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq HF_HandleBattleSprites_Player_4
HF_HandleBattleSprites_Player_1:
	return

HF_HandleBattleSprites_Player_2:
# 655 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 656 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 657 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 658 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 659 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 660 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 661 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 662 "data/maps/Highland_Farms/scripts.pory"
	addobject 10
# 663 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 664 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 665 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 2
# 666 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Player_1

HF_HandleBattleSprites_Player_3:
# 669 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 670 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 671 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 672 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 673 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 674 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 675 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 676 "data/maps/Highland_Farms/scripts.pory"
	addobject 9
# 677 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 678 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 679 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_LITTEN, 2
# 680 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Player_1

HF_HandleBattleSprites_Player_4:
# 683 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_THROW
# 684 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 685 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 686 "data/maps/Highland_Farms/scripts.pory"
	addobject 7
# 687 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 688 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 689 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_OPEN
# 690 "data/maps/Highland_Farms/scripts.pory"
	addobject 8
# 691 "data/maps/Highland_Farms/scripts.pory"
	removeobject 7
# 692 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 693 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_TURTWIG, 2
# 694 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
	goto HF_HandleBattleSprites_Player_1


# 699 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1A:
# 700 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 700 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 700 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 701 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 704 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1B:
# 705 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 705 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 705 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 705 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
	step_end

# 708 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_2:
# 709 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 709 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 709 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 712 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_3:
# 713 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 713 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 713 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 716 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_4:
# 717 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 717 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 717 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 717 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
	step_end

# 720 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_4R:
# 721 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 721 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 721 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 721 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
	step_end

# 724 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_5:
# 725 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 725 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 725 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 725 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 725 "data/maps/Highland_Farms/scripts.pory"
	walk_right
	step_end

# 728 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_5R:
# 729 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 729 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 729 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 729 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 729 "data/maps/Highland_Farms/scripts.pory"
	walk_left
	step_end

# 732 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_6:
# 733 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 733 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
	step_end

# 736 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad1:
# 737 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 737 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 737 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
	step_end

# 740 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad2:
# 741 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 742 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 745 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad3:
# 746 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 747 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 748 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 748 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 749 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 752 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad4:
# 753 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 753 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 753 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 754 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 754 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 754 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 755 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 758 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1A:
# 759 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 759 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 759 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 759 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 759 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 762 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1B:
# 763 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 764 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 764 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 764 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 764 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 764 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 767 "data/maps/Highland_Farms/scripts.pory"
HF_W_Player2:
# 768 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 769 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 772 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike1:
# 773 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 773 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
	step_end

# 776 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike2:
# 777 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 777 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 777 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 777 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 778 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 781 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player2:
# 782 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 782 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 785 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player3:
# 786 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 787 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 787 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 787 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 787 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 787 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 788 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 788 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 789 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 789 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 790 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 790 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 790 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 790 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 790 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 790 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 791 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 791 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 792 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 792 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 792 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 792 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 793 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 793 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 793 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 794 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 797 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike3:
# 798 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 798 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 798 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 801 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike4:
# 802 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 802 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 802 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 802 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 802 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 802 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 802 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 802 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
	step_end

# 805 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike5:
# 806 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 806 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 806 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 806 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 806 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 807 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 807 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 808 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 808 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 809 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 809 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 809 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 809 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 809 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 809 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 810 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 810 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 811 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 811 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 811 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 811 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 812 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 812 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 812 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 812 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 813 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 816 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike6:
# 817 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 817 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 818 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 818 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 819 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 822 "data/maps/Highland_Farms/scripts.pory"
HF_M_PlayerPokemon:
# 823 "data/maps/Highland_Farms/scripts.pory"
	slide_right
# 824 "data/maps/Highland_Farms/scripts.pory"
	face_right
	step_end

# 827 "data/maps/Highland_Farms/scripts.pory"
HF_M_RivalPokemon:
# 828 "data/maps/Highland_Farms/scripts.pory"
	slide_left
# 829 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

HF_Mike_Interact_Text_0:
# 54 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

HF_Mamaw_Interact_Text_0:
# 76 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mamaw$"

HF_Millie_Interact_Text_0:
# 95 "data/maps/Highland_Farms/scripts.pory"
	.string "Millie loves to be brushed!$"

HF_DadIntro_A_Text_0:
# 168 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Dad$"

HF_T_Dad1::
# 836 "data/maps/Highland_Farms/scripts.pory"
	.string "Mornin', {PLAYER}!\n"
	.string "Come on over here, we got a job to do.$"

HF_T_Dad2::
# 841 "data/maps/Highland_Farms/scripts.pory"
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
# 853 "data/maps/Highland_Farms/scripts.pory"
	.string "{PLAYER}!!\p"
	.string "We gotta watch this new Battle Tape\n"
	.string "that Ol' Bo lent me!\p"
	.string "Come on, let's go!$"

HF_T_Mike2::
# 860 "data/maps/Highland_Farms/scripts.pory"
	.string "Hey, that was pretty quick, {PLAYER}!\n"
	.string "How about a race down to Bo's ranch?!\p"
	.string "Three... {PAUSE 30}Two... {PAUSE 30}GO!$"

HF_T_Mike3::
# 866 "data/maps/Highland_Farms/scripts.pory"
	.string "Hey, {PLAYER}, almost done over here.\n"
	.string "Come back in a lil' bit, I got somethin'\l"
	.string "to show you!$"

HF_T_Mike4::
# 872 "data/maps/Highland_Farms/scripts.pory"
	.string "Come on, {PLAYER}!\n"
	.string "I can't wait anymore!$"

HF_T_Mike5::
# 877 "data/maps/Highland_Farms/scripts.pory"
	.string "Alright, so what I'm about to show you,\n"
	.string "I've been workin' on for a while now...\p"
	.string "I didn't know if we would ever get to \n"
	.string "use it or not, but just in case we\l"
	.string "became real Pokemon Trainers, I knew we\l"
	.string "would need it!\p"
	.string "{PLAYER}... {PAUSE 30}are you ready?$"

HF_T_Mike6_Yes::
# 887 "data/maps/Highland_Farms/scripts.pory"
	.string "Haha! I knew you would be excited,\n"
	.string "{PLAYER}!\l"
	.string "Follow me!$"

HF_T_Mike6_No::
# 893 "data/maps/Highland_Farms/scripts.pory"
	.string "Oh, come on, don't be like that,\n"
	.string "{PLAYER}.\l"
	.string "Just follow me, would'ya?$"

HF_T_Mike7::
# 899 "data/maps/Highland_Farms/scripts.pory"
	.string "Well, what do you think?!\p"
	.string "It's our very own battle stage,\n"
	.string "{PLAYER}!!\p"
	.string "I wanted to make sure that our first\n"
	.string "battle was in an arena just like Sammy\l"
	.string "and Agatha used to compete in!\p"
	.string "Well... {PAUSE 30}Pretty close, right?\p"
	.string "Let's go, {PLAYER}, we gotta test it out\n"
	.string "right away!$"

HF_T_Mike8::
# 911 "data/maps/Highland_Farms/scripts.pory"
	.string "Hurry up, {PLAYER}!\n"
	.string "Go stand on your side so we can get\l"
	.string "this battle started!!$"

HF_T_Mike9::
# 917 "data/maps/Highland_Farms/scripts.pory"
	.string "Don't be timid now, {PLAYER}!\n"
	.string "Get back here and battle!$"

HF_T_Mike10::
# 922 "data/maps/Highland_Farms/scripts.pory"
	.string "This is so cool!\n"
	.string "Let's do this, {PLAYER}!$"

HF_T_MikeGoTurtwig::
# 927 "data/maps/Highland_Farms/scripts.pory"
	.string "Go, Turtwig!$"

HF_T_MikeGoLitten::
# 931 "data/maps/Highland_Farms/scripts.pory"
	.string "Go, Litten!$"

HF_T_MikeGoOshawott::
# 935 "data/maps/Highland_Farms/scripts.pory"
	.string "Go, Oshawott!$"

HF_T_MikeLoseBattle::
# 939 "data/maps/Highland_Farms/scripts.pory"
	.string "Not the start I was lookin' for...$"

HF_T_Mamaw1::
# 943 "data/maps/Highland_Farms/scripts.pory"
	.string "Takin' care of Millie brings ol' Mamaw so\n"
	.string "much joy.\p"
	.string "I jus' love seein' her happy!$"
