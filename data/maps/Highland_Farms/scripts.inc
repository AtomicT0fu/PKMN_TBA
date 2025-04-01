Highland_Farms_MapScripts::
# 2 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CheckSproutFlag
# 3 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HF_UpdateSpritePos
	.byte 0


HF_UpdateSpritePos::
# 8 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_UpdateSpritePos_2
# 14 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 19
	goto_if_eq HF_UpdateSpritePos_3
HF_UpdateSpritePos_1:
	end

HF_UpdateSpritePos_2:
# 9 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 1, 12, 19
# 10 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 11, 19
# 11 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 12 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	goto HF_UpdateSpritePos_1

HF_UpdateSpritePos_3:
# 15 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 10, 19
# 16 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
	goto HF_UpdateSpritePos_1


HF_Mike_Interact::
# 24 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 25 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 26 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike3
# 27 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 28 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 29 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_EAST
# 30 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Mamaw_Interact::
# 35 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 36 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mamaw_Interact_Text_0
# 37 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mamaw1
# 38 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 39 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 40 "data/maps/Highland_Farms/scripts.pory"
	turnobject 5, DIR_WEST
# 41 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Millie_Interact::
# 46 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_Millie_Interact_2
# 61 "data/maps/Highland_Farms/scripts.pory"
	lock
# 62 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 63 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_MILTANK, 0
# 64 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
HF_Millie_Interact_1:
# 66 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_Millie_Interact_2:
# 47 "data/maps/Highland_Farms/scripts.pory"
	lock
# 48 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 49 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_MILTANK, 0
# 50 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 51 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 52 "data/maps/Highland_Farms/scripts.pory"
	applymovement 1, Univ_Heart
# 53 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 54 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 55 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_Millie_Interact_Text_0
# 56 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 57 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 58 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
	goto HF_Millie_Interact_1


HF_DadIntro_A::
# 72 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 73 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1A
# 74 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 75 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 76 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 77 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 78 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 79 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 80 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 81 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 82 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 83 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 84 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 85 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 86 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 87 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 88 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 89 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 90 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 91 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 92 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 93 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 94 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 95 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 96 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 97 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 98 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 99 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 100 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 101 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 102 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 103 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 104 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 105 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 106 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 107 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 108 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 109 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 110 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 111 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 112 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 113 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
# 114 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 115 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 116 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 117 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 118 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 119 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 120 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 121 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 122 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 123 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 124 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 125 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 126 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 127 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 128 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 129 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 130 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 131 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1A
# 132 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 133 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 134 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 135 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 136 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 137 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 138 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 15
# 139 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 140 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 141 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 142 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 143 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 144 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 145 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 15
# 146 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 147 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 148 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 149 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 150 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 151 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 152 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 153 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_DadIntro_B::
# 158 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 159 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1B
# 160 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 161 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 162 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 163 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 164 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 165 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 166 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 167 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 168 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 169 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 170 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 171 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 172 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 173 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 174 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 175 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 176 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 177 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 178 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 179 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 180 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 181 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 182 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 183 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 184 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 185 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 186 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 187 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 188 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 189 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 190 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 191 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 192 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 193 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 194 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 195 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 196 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 197 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 198 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 199 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
# 200 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 201 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 202 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 203 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 204 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 205 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 206 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 207 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 208 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 209 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 210 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 211 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 212 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 213 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 214 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 215 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 216 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 217 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1B
# 218 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 219 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 220 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 221 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 222 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 223 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 224 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 15
# 225 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 226 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 227 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 228 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 229 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 230 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 231 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 15
# 232 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 233 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 234 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 235 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 236 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 237 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 238 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 239 "data/maps/Highland_Farms/scripts.pory"
	release
	end


CheckSproutFlag::
# 244 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_SPROUTS_PLANTED, CheckSproutFlag_2
CheckSproutFlag_1:
	end

CheckSproutFlag_2:
# 245 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 246 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 247 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
	goto CheckSproutFlag_1


BattleMike::
# 255 "data/maps/Highland_Farms/scripts.pory"
	lock
# 256 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 257 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE, LoseText
# 258 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_MikeIntro::
# 263 "data/maps/Highland_Farms/scripts.pory"
	turnobject 3, DIR_NORTH
# 264 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, Univ_Exclam
# 265 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 266 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 267 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 268 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 269 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, HF_W_Mike1
# 270 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 271 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 272 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike1
# 273 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 274 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 275 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, HF_W_Mike2
# 276 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 277 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 3
# 278 "data/maps/Highland_Farms/scripts.pory"
	opendoor 41, 33
# 279 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 280 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, Univ_StepUp1
# 281 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 282 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 283 "data/maps/Highland_Farms/scripts.pory"
	removeobject 3
# 284 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 285 "data/maps/Highland_Farms/scripts.pory"
	closedoor 41, 33
# 286 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 287 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_1
# 288 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 8
# 289 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MIKE_2
# 290 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Mike_ReadyToGo::
# 295 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 296 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_2
# 297 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 298 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 299 "data/maps/Highland_Farms/scripts.pory"
	playse SE_DOOR
# 300 "data/maps/Highland_Farms/scripts.pory"
	opendoor 10, 16
# 301 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 302 "data/maps/Highland_Farms/scripts.pory"
	addobject 4
# 303 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_StepDown1
# 304 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 305 "data/maps/Highland_Farms/scripts.pory"
	closedoor 10, 16
# 306 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 307 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_Exclam
# 308 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 309 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 310 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 311 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 312 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_W_Mike3
# 313 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_3
# 314 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 4
# 315 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 316 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 317 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike2, MSGBOX_AUTOCLOSE
# 318 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_W_Player2
# 319 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 320 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_W_Mike4
# 321 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 322 "data/maps/Highland_Farms/scripts.pory"
	removeobject 4
# 323 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 14
# 324 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE
# 325 "data/maps/Highland_Farms/scripts.pory"
	release
	end


# 330 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1A:
# 331 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 331 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 331 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 332 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 335 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1B:
# 336 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 336 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 336 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 336 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
	step_end

# 339 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_2:
# 340 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 340 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 340 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 343 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_3:
# 344 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 344 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 344 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 347 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad1:
# 348 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 348 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 348 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
	step_end

# 351 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad2:
# 352 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 353 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 356 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad3:
# 357 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 358 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 359 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 359 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 360 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 363 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad4:
# 364 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 364 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 364 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 365 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 365 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 365 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 366 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 369 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1A:
# 370 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 370 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 370 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 370 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 370 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 373 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1B:
# 374 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 375 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 375 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 375 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 375 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 375 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 378 "data/maps/Highland_Farms/scripts.pory"
HF_W_Player2:
# 379 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 380 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 383 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike1:
# 384 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 384 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
	step_end

# 387 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike2:
# 388 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 388 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 388 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 388 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 389 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 392 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike3:
# 393 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 393 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 393 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 396 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike4:
# 397 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 397 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 397 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 397 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 397 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 397 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 397 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 397 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
	step_end

HF_Mike_Interact_Text_0:
# 25 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

HF_Mamaw_Interact_Text_0:
# 36 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mamaw$"

HF_Millie_Interact_Text_0:
# 55 "data/maps/Highland_Farms/scripts.pory"
	.string "Millie loves to be brushed!$"

HF_DadIntro_A_Text_0:
# 128 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Dad$"

HF_T_Dad1::
# 405 "data/maps/Highland_Farms/scripts.pory"
	.string "Mornin', {PLAYER}!\n"
	.string "Come on over here, we got a job to do.$"

HF_T_Dad2::
# 410 "data/maps/Highland_Farms/scripts.pory"
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
# 422 "data/maps/Highland_Farms/scripts.pory"
	.string "{PLAYER}!!\p"
	.string "We gotta watch this new Battle Tape\n"
	.string "that Ol' Bo lent me!\p"
	.string "Come on, let's go!$"

HF_T_Mike2::
# 429 "data/maps/Highland_Farms/scripts.pory"
	.string "Hey, that was pretty quick, {PLAYER}!\n"
	.string "How about a race down to Bo's ranch?!\p"
	.string "Three... {PAUSE 30}Two... {PAUSE 30}GO!$"

HF_T_Mike3::
# 435 "data/maps/Highland_Farms/scripts.pory"
	.string "Hey, {PLAYER}, almost done over here.\n"
	.string "Come back in a lil' bit, I got somethin'\l"
	.string "to show you!$"

HF_T_Mamaw1::
# 441 "data/maps/Highland_Farms/scripts.pory"
	.string "Takin' care of Millie brings ol' Mamaw so\n"
	.string "much joy.\p"
	.string "I jus' love seein' her happy!$"
