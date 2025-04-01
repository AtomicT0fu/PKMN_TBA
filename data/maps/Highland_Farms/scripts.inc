Highland_Farms_MapScripts::
# 2 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HF_UpdateMetatiles
# 3 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HF_UpdateSpritePos
	.byte 0


HF_UpdateMetatiles::
# 8 "data/maps/Highland_Farms/scripts.pory"
	call CheckSproutFlag
# 9 "data/maps/Highland_Farms/scripts.pory"
	call HF_CheckLogFlag
	end


HF_UpdateSpritePos::
# 14 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_UpdateSpritePos_2
# 20 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 19
	goto_if_eq HF_UpdateSpritePos_3
HF_UpdateSpritePos_1:
	end

HF_UpdateSpritePos_2:
# 15 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 1, 12, 19
# 16 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 11, 19
# 17 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 18 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	goto HF_UpdateSpritePos_1

HF_UpdateSpritePos_3:
# 21 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 10, 19
# 22 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	goto HF_UpdateSpritePos_1


HF_Mike_Interact::
# 30 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 20
	goto_if_eq HF_Mike_Interact_2
# 38 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_Mike_Interact_3
HF_Mike_Interact_1:
# 48 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_Mike_Interact_2:
# 31 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 32 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 33 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike8
# 34 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 35 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 36 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_WEST
	goto HF_Mike_Interact_1

HF_Mike_Interact_3:
# 39 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 40 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 41 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike3
# 42 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 43 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 44 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_EAST
	goto HF_Mike_Interact_1


HF_Mamaw_Interact::
# 53 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 54 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mamaw_Interact_Text_0
# 55 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mamaw1
# 56 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 57 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 58 "data/maps/Highland_Farms/scripts.pory"
	turnobject 5, DIR_WEST
# 59 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Millie_Interact::
# 64 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_ADVENTURE_START, 18
	goto_if_eq HF_Millie_Interact_2
# 79 "data/maps/Highland_Farms/scripts.pory"
	lock
# 80 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 81 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_MILTANK, 0
# 82 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
HF_Millie_Interact_1:
# 84 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_Millie_Interact_2:
# 65 "data/maps/Highland_Farms/scripts.pory"
	lock
# 66 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 67 "data/maps/Highland_Farms/scripts.pory"
	playmoncry SPECIES_MILTANK, 0
# 68 "data/maps/Highland_Farms/scripts.pory"
	waitmoncry
# 69 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 70 "data/maps/Highland_Farms/scripts.pory"
	applymovement 1, Univ_Heart
# 71 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 72 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 73 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_Millie_Interact_Text_0
# 74 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 75 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 76 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
	goto HF_Millie_Interact_1


HF_DadIntro_A::
# 90 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 91 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1A
# 92 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 93 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 94 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 95 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 96 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 97 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 98 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 99 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 100 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 101 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 102 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 103 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 104 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 105 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 106 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 107 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 108 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 109 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 110 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 111 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 112 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 113 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 114 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 115 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 116 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 117 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 118 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 119 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 120 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 121 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 122 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 123 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 124 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 125 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 126 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 127 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 128 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 129 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 130 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 131 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
# 132 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 133 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 134 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 135 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 136 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 137 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 138 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 139 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 140 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 141 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 142 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 143 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 144 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 145 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 146 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 147 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 148 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 149 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1A
# 150 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 151 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 152 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 153 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 154 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 155 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 156 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 15
# 157 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 158 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 159 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 160 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 161 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 162 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 163 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 15
# 164 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 165 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 166 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 167 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 168 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 169 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 170 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 171 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_DadIntro_B::
# 176 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 177 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1B
# 178 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 179 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 180 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 181 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 182 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 183 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 184 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 185 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 186 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 187 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 188 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 189 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 190 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 191 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 192 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 193 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 194 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 195 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 196 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 197 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 198 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 199 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 200 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 201 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 202 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 203 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 204 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 205 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 206 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 207 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 208 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 209 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 210 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 211 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 212 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 213 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 214 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 215 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 216 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 217 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
# 218 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 219 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 220 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 221 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 222 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 223 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 224 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 225 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 226 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 227 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 228 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 229 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 230 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 231 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 232 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 233 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 234 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 235 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1B
# 236 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 237 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 238 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 239 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 240 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 241 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 242 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 15
# 243 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 244 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 245 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 246 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 247 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 248 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 249 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 15
# 250 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 251 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 252 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 253 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 254 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 255 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 256 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 257 "data/maps/Highland_Farms/scripts.pory"
	release
	end


CheckSproutFlag::
# 262 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_SPROUTS_PLANTED, CheckSproutFlag_2
CheckSproutFlag_1:
	return

CheckSproutFlag_2:
# 263 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 21, 0x00EF, TRUE
# 264 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 21, 0x0268, TRUE
# 265 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 21, 0x026A, TRUE
	goto CheckSproutFlag_1


HF_CheckLogFlag::
# 273 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_HF_REMOVE_LOG, HF_CheckLogFlag_2
HF_CheckLogFlag_1:
	return

HF_CheckLogFlag_2:
# 274 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 2, 12, 0x000, FALSE
# 275 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 3, 12, 0x000, FALSE
	goto HF_CheckLogFlag_1


BattleMike::
# 283 "data/maps/Highland_Farms/scripts.pory"
	lock
# 284 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 285 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE, LoseText
# 286 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_MikeIntro::
# 291 "data/maps/Highland_Farms/scripts.pory"
	turnobject 3, DIR_NORTH
# 292 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, Univ_Exclam
# 293 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 294 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 295 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 296 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 297 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, HF_W_Mike1
# 298 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 299 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 300 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike1
# 301 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 302 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 303 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, HF_W_Mike2
# 304 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 305 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 3
# 306 "data/maps/Highland_Farms/scripts.pory"
	opendoor 41, 33
# 307 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 308 "data/maps/Highland_Farms/scripts.pory"
	applymovement 3, Univ_StepUp1
# 309 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 310 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 311 "data/maps/Highland_Farms/scripts.pory"
	removeobject 3
# 312 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 313 "data/maps/Highland_Farms/scripts.pory"
	closedoor 41, 33
# 314 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 315 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_1
# 316 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 8
# 317 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MIKE_2
# 318 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_Mike_ReadyToGo::
# 323 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 324 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_2
# 325 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 326 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 327 "data/maps/Highland_Farms/scripts.pory"
	playse SE_DOOR
# 328 "data/maps/Highland_Farms/scripts.pory"
	opendoor 10, 16
# 329 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 330 "data/maps/Highland_Farms/scripts.pory"
	addobject 4
# 331 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_StepDown1
# 332 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 333 "data/maps/Highland_Farms/scripts.pory"
	closedoor 10, 16
# 334 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 335 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_Exclam
# 336 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 337 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 338 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 339 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 340 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_W_Mike3
# 341 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_3
# 342 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 4
# 343 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 344 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 345 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike2, MSGBOX_AUTOCLOSE
# 346 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_W_Player2
# 347 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 348 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_W_Mike4
# 349 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 350 "data/maps/Highland_Farms/scripts.pory"
	removeobject 4
# 351 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 14
# 352 "data/maps/Highland_Farms/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE
# 353 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_FirstBattleIntro_Trigger::
# 358 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 2, 12, 0x000, FALSE
# 359 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 3, 12, 0x000, FALSE
# 360 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HF_REMOVE_LOG
# 361 "data/maps/Highland_Farms/scripts.pory"
	turnobject 4, DIR_SOUTH
# 362 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 363 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_2
# 364 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 365 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 366 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 367 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike4
# 368 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 369 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 370 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player2
# 371 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 372 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 373 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 374 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike5, MSGBOX_YESNO
# 375 "data/maps/Highland_Farms/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HF_FirstBattleIntro_Trigger_2
# 382 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 383 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike6_No
# 384 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 385 "data/maps/Highland_Farms/scripts.pory"
	closemessage
HF_FirstBattleIntro_Trigger_1:
# 387 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike5
# 388 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Mike5
# 389 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player3
# 390 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 391 "data/maps/Highland_Farms/scripts.pory"
	delay 10
# 392 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 393 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 394 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 395 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 396 "data/maps/Highland_Farms/scripts.pory"
	delay 100
# 397 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 398 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 399 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike7
# 400 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 401 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 402 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, HF_M_Mike6
# 403 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 404 "data/maps/Highland_Farms/scripts.pory"
	setobjectxyperm 4, 11, 5
# 405 "data/maps/Highland_Farms/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 406 "data/maps/Highland_Farms/scripts.pory"
	delay 20
# 407 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 408 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 409 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 410 "data/maps/Highland_Farms/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 411 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 20
# 412 "data/maps/Highland_Farms/scripts.pory"
	release
	end

HF_FirstBattleIntro_Trigger_2:
# 376 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 377 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike6_Yes
# 378 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 379 "data/maps/Highland_Farms/scripts.pory"
	closemessage
	goto HF_FirstBattleIntro_Trigger_1


HF_NoExitBattleStage_Trigger::
# 417 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 418 "data/maps/Highland_Farms/scripts.pory"
	applymovement 4, Univ_Exclam
# 419 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 420 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_4
# 421 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 422 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_Mike_Interact_Text_0
# 423 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Mike9
# 424 "data/maps/Highland_Farms/scripts.pory"
	waitmessage
# 425 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 426 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_4R
# 427 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 428 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 429 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 430 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 431 "data/maps/Highland_Farms/scripts.pory"
	release
	end


# 436 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1A:
# 437 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 437 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 437 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 438 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 441 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1B:
# 442 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 442 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 442 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 442 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
	step_end

# 445 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_2:
# 446 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 446 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 446 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 449 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_3:
# 450 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 450 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 450 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 453 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_4:
# 454 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 454 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 454 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
# 454 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_northeast
	step_end

# 457 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_4R:
# 458 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 458 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 458 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
# 458 "data/maps/Highland_Farms/scripts.pory"
	walk_diag_southwest
	step_end

# 461 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad1:
# 462 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 462 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 462 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
	step_end

# 465 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad2:
# 466 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 467 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 470 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad3:
# 471 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 472 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 473 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 473 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 474 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 477 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad4:
# 478 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 478 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 478 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 479 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 479 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 479 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 480 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 483 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1A:
# 484 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 484 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 484 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 484 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 484 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 487 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1B:
# 488 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 489 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 489 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 489 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 489 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 489 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 492 "data/maps/Highland_Farms/scripts.pory"
HF_W_Player2:
# 493 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 494 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 497 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike1:
# 498 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 498 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
	step_end

# 501 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike2:
# 502 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 502 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 502 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 502 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 503 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 506 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player2:
# 507 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 507 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 510 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player3:
# 511 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 512 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 512 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 512 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 512 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 512 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 513 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 513 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 514 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 514 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 515 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 515 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 515 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 515 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 515 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 515 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 516 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 516 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 517 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 517 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 517 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 517 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 518 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 518 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 518 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 519 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 522 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike3:
# 523 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 523 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
# 523 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_down
	step_end

# 526 "data/maps/Highland_Farms/scripts.pory"
HF_W_Mike4:
# 527 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 527 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 527 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 527 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 527 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 527 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 527 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
# 527 "data/maps/Highland_Farms/scripts.pory"
	walk_faster_down
	step_end

# 530 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike5:
# 531 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 531 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 531 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 531 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 531 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 532 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 532 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 533 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 533 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 534 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 534 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 534 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 534 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 534 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 534 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 535 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 535 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 536 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 536 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 536 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 536 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 537 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 537 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 537 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 537 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 538 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

# 541 "data/maps/Highland_Farms/scripts.pory"
HF_M_Mike6:
# 542 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 542 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_up
# 543 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 543 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 544 "data/maps/Highland_Farms/scripts.pory"
	face_left
	step_end

HF_Mike_Interact_Text_0:
# 32 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

HF_Mamaw_Interact_Text_0:
# 54 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mamaw$"

HF_Millie_Interact_Text_0:
# 73 "data/maps/Highland_Farms/scripts.pory"
	.string "Millie loves to be brushed!$"

HF_DadIntro_A_Text_0:
# 146 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Dad$"

HF_T_Dad1::
# 551 "data/maps/Highland_Farms/scripts.pory"
	.string "Mornin', {PLAYER}!\n"
	.string "Come on over here, we got a job to do.$"

HF_T_Dad2::
# 556 "data/maps/Highland_Farms/scripts.pory"
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
# 568 "data/maps/Highland_Farms/scripts.pory"
	.string "{PLAYER}!!\p"
	.string "We gotta watch this new Battle Tape\n"
	.string "that Ol' Bo lent me!\p"
	.string "Come on, let's go!$"

HF_T_Mike2::
# 575 "data/maps/Highland_Farms/scripts.pory"
	.string "Hey, that was pretty quick, {PLAYER}!\n"
	.string "How about a race down to Bo's ranch?!\p"
	.string "Three... {PAUSE 30}Two... {PAUSE 30}GO!$"

HF_T_Mike3::
# 581 "data/maps/Highland_Farms/scripts.pory"
	.string "Hey, {PLAYER}, almost done over here.\n"
	.string "Come back in a lil' bit, I got somethin'\l"
	.string "to show you!$"

HF_T_Mike4::
# 587 "data/maps/Highland_Farms/scripts.pory"
	.string "Come on, {PLAYER}!\n"
	.string "I can't wait anymore!$"

HF_T_Mike5::
# 592 "data/maps/Highland_Farms/scripts.pory"
	.string "Alright, so what I'm about to show you,\n"
	.string "I've been workin' on for a while now...\p"
	.string "I didn't know if we would ever get to \n"
	.string "use it or not, but just in case we\l"
	.string "became real Pokemon Trainers, I knew we\l"
	.string "would need it!\p"
	.string "{PLAYER}... {PAUSE 30}are you ready?$"

HF_T_Mike6_Yes::
# 602 "data/maps/Highland_Farms/scripts.pory"
	.string "Haha! I knew you would be excited,\n"
	.string "{PLAYER}!\l"
	.string "Follow me!$"

HF_T_Mike6_No::
# 608 "data/maps/Highland_Farms/scripts.pory"
	.string "Oh, come on, don't be like that,\n"
	.string "{PLAYER}.\l"
	.string "Just follow me, would'ya?$"

HF_T_Mike7::
# 614 "data/maps/Highland_Farms/scripts.pory"
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
# 626 "data/maps/Highland_Farms/scripts.pory"
	.string "Hurry up, {PLAYER}!\n"
	.string "Go stand on your side so we can get\l"
	.string "this battle started!!$"

HF_T_Mike9::
# 632 "data/maps/Highland_Farms/scripts.pory"
	.string "Don't be timid now, {PLAYER}!\n"
	.string "Get back here and battle!$"

HF_T_Mamaw1::
# 637 "data/maps/Highland_Farms/scripts.pory"
	.string "Takin' care of Millie brings ol' Mamaw so\n"
	.string "much joy.\p"
	.string "I jus' love seein' her happy!$"
