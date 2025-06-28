Old_Bos_Ranch_MapScripts::
# 2 "data/maps/Old_Bos_Ranch/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OBR_UpdateMetatiles
	.byte 0


OBR_DoorIsLocked::
# 10 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, OBR_DoorIsLocked_2
# 18 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 19 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_DoorIsLocked_Text_1
# 20 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 21 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 22 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
OBR_DoorIsLocked_1:
# 24 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_DoorIsLocked_2:
# 11 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 12 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_DoorIsLocked_Text_0
# 13 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 14 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 15 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
	goto OBR_DoorIsLocked_1


OBR_OldBosRanch_Sign::
# 29 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 30 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_OldBosRanch_Sign_Text_0, MSGBOX_SIGN
# 31 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 32 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 33 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_Mike_FollowA::
# 38 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 39 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
# 40 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_REMOVE_LOG
# 41 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_WEST
# 42 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 43 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 44 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 45 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 46 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 47 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike1
# 48 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 49 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 50 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 51 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike1
# 52 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 53 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 54 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike2
# 55 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player1
# 56 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 57 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 58 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 59 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 60 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 61 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 62 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 63 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 80
# 64 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 65 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 66 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 67 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 68 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 69 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 70 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 71 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 72 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Question
# 73 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 74 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 75 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 76 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 77 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 78 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike2
# 79 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 80 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 81 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 82 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan1
# 83 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 84 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 85 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 86 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 87 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 88 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 89 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 90 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 91 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 92 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 93 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Up
# 94 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 95 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 96 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Up
# 97 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 98 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 99 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten1
# 100 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_Litten1
# 101 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 102 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_WEST
# 103 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 6, DIR_WEST
# 104 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 105 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 106 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 107 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 108 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 109 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 110 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 111 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 112 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 113 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_EAST
# 114 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 115 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 116 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 117 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 118 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 119 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 120 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan2
# 121 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 122 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 123 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 124 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 125 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 126 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 127 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 128 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike3
# 129 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 130 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 131 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike3
# 132 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player2
# 133 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 134 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 135 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 136 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 137 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 138 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 139 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 140 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 141 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 142 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan3
# 143 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 144 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 145 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 146 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 147 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
# 148 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_EFFECTIVE
# 149 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig1
# 150 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 151 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_FENCE_BROKEN
# 152 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 153 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 154 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_EAST
# 155 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 156 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 157 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Right
# 158 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 159 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 160 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Left
# 161 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 162 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 163 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig2
# 164 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, OBR_M_Oshawott1
# 165 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 166 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 5
# 167 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 6
# 168 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_OSHAWOTT_AND_TURTWIG
# 169 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan4
# 170 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 171 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 172 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 7, DIR_SOUTH
# 173 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 174 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 175 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 176 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 177 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 178 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten2
# 179 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan5
# 180 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 181 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 8
# 182 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE
# 183 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 184 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 9
# 185 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 186 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten3
# 187 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan6
# 188 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 189 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 7
# 190 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_LITTEN
# 191 "data/maps/Old_Bos_Ranch/scripts.pory"
	fadeoutbgm 1
# 192 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
# 193 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 194 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 195 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 196 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 197 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, Univ_Exclam
# 198 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 199 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 200 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike4
# 201 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 202 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 203 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 204 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike4
# 205 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 206 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 207 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike5
# 208 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 209 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 210 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 211 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 212 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike5
# 213 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 214 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 215 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike6
# 216 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 217 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike7
# 218 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player3
# 219 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 220 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 221 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike6
# 222 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 223 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 224 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 225 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_SOUTH
# 226 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 227 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 228 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike7, MSGBOX_YESNO
# 229 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_Mike_FollowA_2
# 257 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 258 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 259 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 260 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 261 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 262 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 263 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 264 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 265 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 266 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 267 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike10
# 268 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 269 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 270 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 271 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 272 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 273 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 274 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 275 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 276 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 277 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
OBR_Mike_FollowA_1:
# 279 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_ENCOUNTERS
# 280 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 281 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_Mike_FollowA_2:
# 230 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 231 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike8
# 232 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 233 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 234 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 235 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 236 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 237 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 238 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 239 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 240 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 241 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 242 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 243 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 244 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike9
# 245 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 246 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 247 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 248 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 249 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 250 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 251 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 252 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 253 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 254 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
	goto OBR_Mike_FollowA_1


OBR_Mike_FollowB::
# 286 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 287 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
# 288 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_REMOVE_LOG
# 289 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_WEST
# 290 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 291 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 292 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 293 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 294 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 295 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike1_B
# 296 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 297 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 298 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 299 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 300 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike1
# 301 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 302 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 303 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike2_B
# 304 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player1_B
# 305 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 306 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 307 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 308 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 309 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 310 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 311 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 312 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 80
# 313 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 314 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 315 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 316 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 317 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_ARENA_TIMEUP1
# 318 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 319 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 320 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 321 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Question
# 322 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 323 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 324 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 325 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 326 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 327 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike2
# 328 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 329 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 330 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 331 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan1
# 332 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 333 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 334 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 335 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 336 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 337 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 338 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 339 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 340 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 341 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 342 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Up
# 343 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 344 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 345 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Up
# 346 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 347 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 348 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten1
# 349 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_Litten1
# 350 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 351 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_WEST
# 352 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 6, DIR_WEST
# 353 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 354 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 355 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 356 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 357 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 358 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 359 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 360 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 361 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 362 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_EAST
# 363 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 364 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 365 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 366 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 367 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 368 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 369 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan2
# 370 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 371 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 372 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 373 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 374 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 375 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 376 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 377 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike3
# 378 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 379 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 380 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike3
# 381 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player2
# 382 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 383 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 384 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 385 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 386 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 387 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 388 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 389 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 390 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 391 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan3
# 392 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 393 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 394 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 395 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 396 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
# 397 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_EFFECTIVE
# 398 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig1
# 399 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 400 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_FENCE_BROKEN
# 401 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 402 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 403 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_EAST
# 404 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 405 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 406 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Right
# 407 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 408 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 409 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Left
# 410 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 411 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 412 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig2
# 413 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, OBR_M_Oshawott1
# 414 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 415 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 5
# 416 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 6
# 417 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_OSHAWOTT_AND_TURTWIG
# 418 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan4
# 419 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 420 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 421 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 7, DIR_SOUTH
# 422 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 423 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 424 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 425 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 426 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 427 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten2
# 428 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan5
# 429 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 430 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 8
# 431 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE
# 432 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 433 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 9
# 434 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 435 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten3
# 436 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan6
# 437 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 438 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 7
# 439 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_LITTEN
# 440 "data/maps/Old_Bos_Ranch/scripts.pory"
	fadeoutbgm 1
# 441 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
# 442 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 443 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 444 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 445 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 446 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, Univ_Exclam
# 447 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 448 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 449 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike4
# 450 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 451 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 452 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 453 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike4
# 454 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 455 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 456 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike5
# 457 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 458 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 459 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 460 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 461 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike5
# 462 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 463 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 464 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike6
# 465 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 466 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike7
# 467 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player3
# 468 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 469 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 470 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike6
# 471 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 472 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 473 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 474 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_SOUTH
# 475 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 476 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 477 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike7, MSGBOX_YESNO
# 478 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_Mike_FollowB_2
# 506 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 507 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 508 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 509 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 510 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 511 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 512 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 513 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 514 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 515 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 516 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike10
# 517 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 518 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 519 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 520 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 521 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 522 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 523 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 524 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 525 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 526 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
OBR_Mike_FollowB_1:
# 528 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_ENCOUNTERS
# 529 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 530 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_Mike_FollowB_2:
# 479 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 480 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike8
# 481 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 482 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 483 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 484 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 485 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 486 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 487 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 488 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 489 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 490 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 491 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 492 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 493 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike9
# 494 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 495 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 496 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 497 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 498 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 499 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 500 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 501 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 502 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 503 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
	goto OBR_Mike_FollowB_1


OBR_Mike_Interact_ForestEntrance::
# 535 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 536 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 537 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 538 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 539 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 540 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 541 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackA::
# 546 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 547 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 548 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 549 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 550 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 551 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 552 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 553 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 554 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 555 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackB::
# 560 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 561 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 562 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 563 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 564 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 565 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 566 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 567 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 568 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 569 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_OneStarterFound::
# 574 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 575 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 576 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 577 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 578 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike12
# 579 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 580 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 581 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 582 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 583 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 584 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 585 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 586 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TwoStartersFound::
# 591 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 592 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 593 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 594 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 595 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike13
# 596 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 597 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 598 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 599 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 600 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 601 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 602 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 603 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_AllStartersFound_A::
# 608 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_SHOW_OLD_BO
# 609 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 14
# 610 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 16
# 611 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player5
# 612 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 613 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 614 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 615 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 616 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 617 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike14
# 618 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 619 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 620 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 621 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 622 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 623 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 624 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike9
# 625 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 626 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepDown1
# 627 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, Univ_StepDown1
# 628 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, Univ_StepRight1
# 629 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, Univ_StepRight1
# 630 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 631 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike10
# 632 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott2
# 633 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten4
# 634 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig3
# 635 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player6
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 637 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 638 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 639 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 640 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 641 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 642 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 643 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 644 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike15
# 645 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 646 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 647 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 648 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike11
# 649 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott3
# 650 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten5
# 651 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig4
# 652 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player7
# 653 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 13
# 654 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 655 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 656 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 657 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 658 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 659 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 660 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 661 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 662 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 663 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo1
# 664 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 665 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 666 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 667 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 668 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 669 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike16
# 670 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 672 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 673 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 674 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 675 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 676 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo1
# 677 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 678 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 679 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 680 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 682 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo2
# 683 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 684 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 685 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 686 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 687 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 688 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 689 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike17
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 691 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 692 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 693 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 695 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 696 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo3
# 697 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 699 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 700 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 701 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 702 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 703 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 704 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 10
# 705 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 706 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike12
# 707 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 708 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 709 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 710 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 711 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 712 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike18
# 713 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 714 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 716 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike19
# 717 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 718 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 719 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike20
# 721 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 722 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 723 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 724 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 726 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 727 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo4
# 728 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 729 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 730 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 731 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 732 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 733 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 734 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 735 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike21
# 736 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 737 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 738 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 740 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 741 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 742 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 743 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo5
# 744 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 745 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 746 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL
# 747 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 748 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 749 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 750 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 751 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System2
# 752 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 753 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 754 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 755 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 756 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 757 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 13, 27, 26
# 758 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 12, 26, 26
# 759 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 11, 25, 26
# 760 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 10, 26, 23
# 761 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 14, 25, 23
# 762 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 763 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_WHH_STARTERS, 4
# 764 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 17
# 765 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_AllStartersFound_B::
# 770 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_SHOW_OLD_BO
# 771 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 14
# 772 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 16
# 773 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 774 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 775 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 776 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 777 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 778 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 779 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike14
# 780 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 781 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 782 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 783 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 784 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 785 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 786 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike9
# 787 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 788 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepDown1
# 789 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, Univ_StepDown1
# 790 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, Univ_StepRight1
# 791 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, Univ_StepRight1
# 792 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 793 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike10
# 794 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott2
# 795 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten4
# 796 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig3
# 797 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player6
# 798 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 799 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 800 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 801 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 802 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 803 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 804 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 805 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 806 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike15
# 807 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 808 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 809 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 810 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike11
# 811 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott3
# 812 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten5
# 813 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig4
# 814 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player7
# 815 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 13
# 816 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 817 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 818 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 819 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 820 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 821 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 822 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 823 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 824 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 825 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo1
# 826 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 827 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 828 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 829 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 830 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 831 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike16
# 832 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 833 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 834 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 835 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 836 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 837 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 838 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo1
# 839 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 840 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 841 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 842 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 843 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 844 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo2
# 845 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 846 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 847 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 848 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 849 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 850 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 851 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike17
# 852 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 853 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 854 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 855 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 856 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 857 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 858 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo3
# 859 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 860 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 861 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 862 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 863 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 864 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 865 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 866 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 10
# 867 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 868 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike12
# 869 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 870 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 871 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 872 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 873 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 874 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike18
# 875 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 876 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 877 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 878 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike19
# 879 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 880 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 881 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 882 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike20
# 883 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 884 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 885 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 886 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 887 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 888 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 889 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo4
# 890 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 891 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 892 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 893 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 894 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 895 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 896 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 897 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike21
# 898 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 899 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 900 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 901 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 902 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 903 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 904 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 905 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo5
# 906 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 907 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 908 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL
# 909 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 910 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 911 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 912 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 913 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System2
# 914 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 915 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 916 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 917 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 918 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 919 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 920 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 13, 27, 26
# 921 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 12, 26, 26
# 922 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 11, 25, 26
# 923 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 10, 26, 23
# 924 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 14, 25, 23
# 925 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 926 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_WHH_STARTERS, 4
# 927 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 17
# 928 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_A::
# 933 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 934 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8
# 935 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 936 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_WEST
# 937 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 938 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 939 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 940 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 941 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 942 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8_R
# 943 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 944 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 945 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 946 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 947 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 948 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_B::
# 953 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 954 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan9
# 955 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 956 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 957 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 958 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 959 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 960 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 961 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 962 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan9_R
# 963 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 964 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 965 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 966 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepLeft1
# 967 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 968 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_C::
# 973 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 974 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8_R
# 975 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 976 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 977 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 978 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 979 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 980 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 981 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8
# 982 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 983 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 984 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepLeft1
# 985 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 986 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_ChooseTurtwig::
# 991 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 992 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 0
# 993 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 994 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 995 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 996 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseTurtwig_Text_0, MSGBOX_YESNO
# 997 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseTurtwig_2
# 1118 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseTurtwig_1:
# 1120 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseTurtwig_2:
# 998 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 999 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 1000 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1001 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1002 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 15
# 1003 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 15, MAP_OLD_BOS_RANCH, 0
# 1004 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 3
# 1005 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1006 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1007 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1008 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1009 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1010 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1011 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1012 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1013 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1014 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1015 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1016 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1017 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 15
# 1018 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1019 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1020 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1021 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseTurtwig_Text_1
# 1022 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1023 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1024 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1025 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1026 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Turtwig_Nickname, MSGBOX_YESNO
# 1027 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseTurtwig_6
# 1033 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseTurtwig_5:
# 1035 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1036 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToLitten
# 1037 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1038 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1039 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1040 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1041 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1042 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1043 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1044 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1045 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1046 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 16
# 1047 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 16, MAP_OLD_BOS_RANCH, 0
# 1048 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 12, MAP_OLD_BOS_RANCH, 3
# 1049 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1050 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1051 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1052 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1053 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1054 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1055 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1056 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1057 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1058 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1059 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1060 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1061 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 16
# 1062 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1063 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1064 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 11
# 1065 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1066 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 1067 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott4
# 1068 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1069 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1070 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1071 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1072 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1073 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 1074 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1075 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1076 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1077 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1078 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1079 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1080 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1081 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1082 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1083 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1084 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1085 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1086 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1087 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1088 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1089 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1090 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 1091 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1092 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1093 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1094 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1095 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1096 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1097 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Turtwig
# 1098 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1099 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1100 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1101 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 1102 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1103 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1104 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1105 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1106 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1107 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
# 1108 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PS_HIDE_DAD
# 1109 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_FOLLOWERS
# 1110 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_RH1F_HIDE_MAMAW
# 1111 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_MAMAW
# 1112 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_RIVAL_MIKE
# 1113 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_ITEM_WHH_MIRACLE_SEED
# 1114 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBH1F_HIDE_BO
# 1115 "data/maps/Old_Bos_Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE
	goto OBR_ChooseTurtwig_1

OBR_ChooseTurtwig_6:
# 1028 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1029 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1030 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseTurtwig_5


OBR_ChooseLitten::
# 1125 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 1126 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 1127 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1128 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 1129 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseLitten_Text_0, MSGBOX_YESNO
# 1130 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseLitten_2
# 1250 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseLitten_1:
# 1252 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseLitten_2:
# 1131 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1132 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 1133 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1134 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1135 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 16
# 1136 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 16, MAP_OLD_BOS_RANCH, 0
# 1137 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 12, MAP_OLD_BOS_RANCH, 3
# 1138 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1139 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1140 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1141 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1142 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1143 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1144 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1145 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1146 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1147 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1148 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1149 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1150 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 16
# 1151 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1152 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1153 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1154 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseLitten_Text_1
# 1155 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1156 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1157 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1158 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1159 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Litten_Nickname, MSGBOX_YESNO
# 1160 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseLitten_6
# 1166 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseLitten_5:
# 1168 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1169 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToOshawott
# 1170 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1171 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1172 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1173 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1174 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1175 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1176 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1177 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1178 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1179 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 17
# 1180 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 17, MAP_OLD_BOS_RANCH, 0
# 1181 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 13, MAP_OLD_BOS_RANCH, 3
# 1182 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1183 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1184 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1185 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1186 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1187 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1188 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1189 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1190 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1191 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1192 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1193 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1194 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 17
# 1195 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1196 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1197 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 11
# 1198 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1199 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1200 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1201 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig5
# 1202 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1203 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1204 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1205 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1206 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1207 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 1208 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1209 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1210 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1211 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1212 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1213 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1214 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1215 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1216 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1217 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1218 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1219 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1220 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1221 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1222 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1223 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1224 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 1225 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1226 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1227 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1228 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1229 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1230 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1231 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Litten
# 1232 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1233 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1234 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1235 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1236 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1237 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1238 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1239 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
# 1240 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PS_HIDE_DAD
# 1241 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_FOLLOWERS
# 1242 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_RH1F_HIDE_MAMAW
# 1243 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_MAMAW
# 1244 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_RIVAL_MIKE
# 1245 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_ITEM_WHH_CHARCOAL
# 1246 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBH1F_HIDE_BO
# 1247 "data/maps/Old_Bos_Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE
	goto OBR_ChooseLitten_1

OBR_ChooseLitten_6:
# 1161 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1162 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1163 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseLitten_5


OBR_ChooseOshawott::
# 1257 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 1258 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 1259 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1260 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 1261 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseOshawott_Text_0, MSGBOX_YESNO
# 1262 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseOshawott_2
# 1384 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseOshawott_1:
# 1386 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseOshawott_2:
# 1263 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1264 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 1265 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1266 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1267 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 17
# 1268 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 17, MAP_OLD_BOS_RANCH, 0
# 1269 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 13, MAP_OLD_BOS_RANCH, 3
# 1270 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1271 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1272 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1273 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1274 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1275 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1276 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1277 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1278 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1279 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1280 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1281 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1282 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 17
# 1283 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1284 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1285 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1286 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseOshawott_Text_1
# 1287 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1288 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1289 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1290 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1291 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Oshawott_Nickname, MSGBOX_YESNO
# 1292 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseOshawott_6
# 1298 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseOshawott_5:
# 1300 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 1301 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToTurtwig
# 1302 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1303 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1304 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1305 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1306 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1307 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1308 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1309 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1310 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1311 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 15
# 1312 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 15, MAP_OLD_BOS_RANCH, 0
# 1313 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 3
# 1314 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1315 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1316 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1317 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1318 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1319 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1320 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1321 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1322 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1323 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1324 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1325 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1326 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 15
# 1327 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1328 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1329 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 11
# 1330 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1331 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 1332 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1333 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten6
# 1334 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1335 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1336 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1337 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1338 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1339 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 1340 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1341 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1342 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1343 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1344 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1345 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1346 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1347 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1348 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1349 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1350 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1351 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1352 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1353 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1354 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepRight1
# 1355 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1356 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 1357 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1358 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1359 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1360 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1361 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1362 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1363 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Oshawott
# 1364 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1365 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1366 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1367 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 1368 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1369 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1370 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1371 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1372 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1373 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
# 1374 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_FOLLOWERS
# 1375 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PS_HIDE_DAD
# 1376 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_RH1F_HIDE_MAMAW
# 1377 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_MAMAW
# 1378 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_RIVAL_MIKE
# 1379 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_ITEM_WHH_MYSTIC_WATER
# 1380 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBH1F_HIDE_BO
# 1381 "data/maps/Old_Bos_Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE
	goto OBR_ChooseOshawott_1

OBR_ChooseOshawott_6:
# 1293 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1294 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1295 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseOshawott_5


OBR_UpdateMetatiles::
# 1391 "data/maps/Old_Bos_Ranch/scripts.pory"
	call OBR_CheckLogFlag
# 1392 "data/maps/Old_Bos_Ranch/scripts.pory"
	call CheckFenceFlag
# 1393 "data/maps/Old_Bos_Ranch/scripts.pory"
	call OBR_CheckDoorLock
# 1394 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


CheckFenceFlag::
# 1399 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_OBR_FENCE_BROKEN, CheckFenceFlag_2
CheckFenceFlag_1:
	return

CheckFenceFlag_2:
# 1400 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 1401 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 1402 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
	goto CheckFenceFlag_1


OBR_CheckDoorLock::
# 1410 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, OBR_CheckDoorLock_2
OBR_CheckDoorLock_1:
	return

OBR_CheckDoorLock_2:
# 1411 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
	goto OBR_CheckDoorLock_1


OBR_CheckLogFlag::
# 1419 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_OBR_REMOVE_LOG, OBR_CheckLogFlag_2
OBR_CheckLogFlag_1:
	return

OBR_CheckLogFlag_2:
# 1420 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 1421 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
	goto OBR_CheckLogFlag_1


# 1435 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1:
# 1436 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1437 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 1440 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1_B:
# 1441 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1441 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1442 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
	step_end

# 1445 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2:
# 1446 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1447 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1447 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1447 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1449 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1452 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2_B:
# 1453 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1454 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1454 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1455 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1455 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1456 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1456 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1457 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1460 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike3:
# 1461 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1461 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1461 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike4:
# 1465 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1468 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike5:
# 1469 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1470 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1473 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike6:
# 1474 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_left
# 1475 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_down
# 1476 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1479 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike7:
# 1480 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1480 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1480 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1480 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1481 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1481 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1481 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1483 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1483 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1485 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1485 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1487 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1487 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1487 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1487 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1490 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike8:
# 1491 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1492 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_right
	step_end

# 1495 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike9:
# 1496 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1497 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike10:
# 1501 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1501 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1501 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1503 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1503 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1505 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1505 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1506 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1509 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike11:
# 1510 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1510 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1512 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1513 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1513 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1513 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1514 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1517 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike12:
# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1519 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1522 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToLitten:
# 1523 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1523 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1526 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToTurtwig:
# 1527 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1529 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1532 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToOshawott:
# 1533 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1534 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1538 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Turtwig:
# 1539 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1539 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1540 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1540 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1540 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1540 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1541 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1541 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1545 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Litten:
# 1546 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1546 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1548 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1548 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1552 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Oshawott:
# 1553 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1553 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1554 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1554 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1554 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1554 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1554 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1555 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1555 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1561 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1:
# 1562 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1562 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1564 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1564 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1565 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1568 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1_B:
# 1569 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1569 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1570 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1570 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1571 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1571 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1572 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1572 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1576 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player2:
# 1577 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1577 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1577 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1580 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player3:
# 1581 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1581 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1581 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1581 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1581 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1582 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1582 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1582 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1583 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1583 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1583 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1583 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1584 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1584 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1588 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1588 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1588 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player4:
# 1592 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1592 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1595 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player5:
# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1597 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1598 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1601 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player6:
# 1602 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1606 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1606 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1607 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1610 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player7:
# 1611 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1612 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1612 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1613 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1616 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1617 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1617 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1618 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1623 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan1:
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1625 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1625 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1625 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 1628 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan2:
# 1629 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1629 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1629 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1629 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1629 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan3:
# 1633 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1633 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 1637 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan4:
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1641 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan5:
# 1642 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1642 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1642 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1642 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1642 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1642 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1642 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1642 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1642 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1645 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan6:
# 1646 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1646 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1646 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1647 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1647 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1648 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1650 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1650 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1650 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1650 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1650 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1651 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1651 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1652 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1652 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1653 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1653 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1654 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1654 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1655 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1655 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1658 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan7:
# 1659 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1659 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1659 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1659 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1659 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1659 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1659 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1660 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1660 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1660 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1660 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan8:
# 1664 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
# 1664 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
# 1664 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
	step_end

# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan8_R:
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
	step_end

# 1671 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan9:
# 1672 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
# 1672 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
# 1672 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
	step_end

# 1675 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan9_R:
# 1676 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1676 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1676 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
	step_end

# 1681 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten1:
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1683 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten2:
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1690 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten3:
# 1691 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1691 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1691 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1693 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1695 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1695 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1695 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1695 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1695 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1696 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1696 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1697 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1697 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1700 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1700 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten4:
# 1705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1707 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1707 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1708 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1708 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1709 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
	step_end

# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten5:
# 1713 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1714 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1717 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1717 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1718 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1719 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1721 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1724 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten6:
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1726 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1727 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1727 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1727 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1728 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1728 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1729 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1729 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1733 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig1:
# 1734 "data/maps/Old_Bos_Ranch/scripts.pory"
	slide_left
# 1735 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1738 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig2:
# 1739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1740 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1740 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1741 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1742 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1743 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1744 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1748 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig3:
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1752 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1752 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1754 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1757 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig4:
# 1758 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1758 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1760 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1760 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1762 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1762 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1763 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1764 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1766 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig5:
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1773 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1773 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1774 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1774 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1775 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1775 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1775 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1775 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1775 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1778 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott1:
# 1779 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1779 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1779 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1779 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1780 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1780 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1781 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1782 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1784 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1785 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1785 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1785 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1785 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1785 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1785 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott2:
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1791 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1791 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1792 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1792 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1793 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1793 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1794 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_right
	step_end

# 1797 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott3:
# 1798 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1799 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1799 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1800 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1800 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1801 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1801 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1802 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1803 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1804 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1804 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1804 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1805 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1808 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott4:
# 1809 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1809 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1809 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1809 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1809 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1810 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1810 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1811 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1811 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1812 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1812 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1812 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1812 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1812 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1817 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Bo1:
# 1818 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1819 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1822 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Bo2:
# 1823 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1823 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1823 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1824 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1824 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1825 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1825 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1826 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1826 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1827 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1828 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1828 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1828 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

OBR_DoorIsLocked_Text_0:
# 12 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "The door is locked.$"

OBR_DoorIsLocked_Text_1:
# 19 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "The door is unlocked.$"

OBR_OldBosRanch_Sign_Text_0:
# 30 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Old Bo's Ranch$"

OBR_Mike_FollowA_Text_0:
# 50 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

OBR_AllStartersFound_A_Text_0:
# 662 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Old Bo$"

OBR_ChooseTurtwig_Text_0:
# 996 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseTurtwig_Text_1:
# 1021 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_ChooseLitten_Text_0:
# 1129 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseLitten_Text_1:
# 1154 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_ChooseOshawott_Text_0:
# 1261 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseOshawott_Text_1:
# 1286 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_T_Mike1::
# 1839 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Haha! Too slow again!\n"
	.string "Maybe next time, huh?\p"
	.string "Just messin' with ya, {PLAYER}.\p"
	.string "Let's get this tape back to Bo!$"

OBR_T_Mike2::
# 1846 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... Huh.\n"
	.string "{PAUSE 20}I guess Bo isn't home right now.\p"
	.string "Let's just wait here for a little while,\n"
	.string "{PLAYER}, I'm sure he'll be back soon.$"

OBR_T_Mike3::
# 1853 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Look how adorable that Litten is,\n"
	.string "{PLAYER}!\p"
	.string "We gotta go over and say hello!$"

OBR_T_Mike4::
# 1859 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Wha- wha- WHAT??!!$"

OBR_T_Mike5::
# 1863 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}, did you just see that?!\p"
	.string "I think those Pokemon just ran into the\n"
	.string "woods!\p"
	.string "We have to do something about this,\n"
	.string "{PLAYER}, we gotta get Bo's Pokemon\l"
	.string "back right away!$"

OBR_T_Mike6::
# 1872 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... {PAUSE 30}dang.$"

OBR_T_Mike7::
# 1876 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "I just realized I only have one repel...\p"
	.string "We can't risk going in there without a\n"
	.string "repel or a Pokemon of our own, {PLAYER},\l"
	.string "there's wild Pokemon in there!\p"
	.string "These aren't like the Pokemon from Bo's\n"
	.string "Ranch.\p"
	.string "A wild Pokemon can seriously mess you\n"
	.string "up, {PLAYER}!\p"
	.string "Maybe... {PAUSE 30}You should go?\p"
	.string "Come on {PLAYER}, I'm a little tired and\n"
	.string "I think I have a stuffy nose too!\p"
	.string "Please, {PLAYER} you gotta go save Bo's\n"
	.string "Pokemon!$"

OBR_T_Mike8::
# 1892 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, you're brave, {PLAYER}!$"

OBR_T_Mike9::
# 1896 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Alright, {PLAYER}, be quick!\n"
	.string "That repel won't last forever!$"

OBR_T_Mike10::
# 1901 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Ah jeez!\n"
	.string "Oh man I'm so sorry, {PLAYER}!\p"
	.string "Dang I can't believe my hand slipped\n"
	.string "like that!\p"
	.string "You better get going though, {PLAYER},\n"
	.string "that repel doesn't last forever!$"

OBR_T_Mike11::
# 1910 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Uh... {PAUSE 30}{PLAYER}, where are you going?!\p"
	.string "Go find Bo's Pokemon before the repel\n"
	.string "runs out!$"

OBR_T_Mike12::
# 1916 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Looks like we're still missin' two\n"
	.string "Pokemon over here, {PLAYER}!$"

OBR_T_Mike13::
# 1921 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Only one more, {PLAYER}!\n"
	.string "Hurry, before that repel wears off!$"

OBR_T_Mike14::
# 1926 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Awesome job, {PLAYER}!\p"
	.string "Now let's get these sneaky Pokemon\n"
	.string "back where they belong!$"

OBR_T_Mike15::
# 1932 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Hey, {PLAYER}, I think I see Ol' Bo up\n"
	.string "ahead!$"

OBR_T_Mike16::
# 1937 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "It was all {PLAYER}, Bo!\p"
	.string "It should be made into a comic book, it\n"
	.string "was incredible!\p"
	.string "I sprayed {PLAYER} with a repel and\n"
	.string "without a second thought, {PLAYER} ran\l"
	.string "into the woods and rescued them!$"

OBR_T_Mike17::
# 1946 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, yes of course, absolutely!\p"
	.string "I was just talkin' with {PLAYER} about\n"
	.string "this after the last tape we watched!\p"
	.string "We wanna be like Norman and Dee one\n"
	.string "day, two title contenders dukin' it out\l"
	.string "for a championship!\p"
	.string "We're totally gonna do it too, Bo!\p"
	.string "We... {PAUSE 30}we just don't have any Pokemon at\n"
	.string "the moment.$"

OBR_T_Mike18::
# 1958 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "YES!\n"
	.string "Of course, yes!\p"
	.string "We're gonna take such good care of\n"
	.string "them Bo, we promise!$"

OBR_T_Mike19::
# 1965 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "We super promise don't we, {PLAYER}?!$"

OBR_T_Mike20::
# 1969 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, Bo thank you so much!\p"
	.string "Once me and {PLAYER} are super famous\n"
	.string "we're gonna build you a huge addition to\l"
	.string "the ranch!$"

OBR_T_Mike21::
# 1976 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "You should pick first, {PLAYER}!\p"
	.string "Go on now, I wouldn't want ya to have\n"
	.string "any excuses after I win our first\l"
	.string "battle, haha!$"

OBR_T_Mike23::
# 1983 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}, this is unbelievable!\n"
	.string "I never thought we could actually have\l"
	.string "Pokemon of our own!\l"
	.string "They seem strong too!\p"
	.string "{PLAYER}, we gotta test 'em out right\n"
	.string "away, let's have a battle, you and me!\p"
	.string "Wait... {PAUSE 30}shoot, I forgot I'm supposed\n"
	.string "to help Mamaw brush Millie.\p"
	.string "Dang, I guess we're gonna have to do it\n"
	.string "some other time...\p"
	.string "How about you meet me back at my house\n"
	.string "in a few hours and we'll battle then?!\p"
	.string "I'll see ya later, {PLAYER}!$"

OBR_T_Mike22::
# 1999 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Alright, OK!\n"
	.string "I choose this one!!$"

OBR_T_Bo1::
# 2004 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Mike, {PLAYER}!\p"
	.string "Boy am I glad to see youse guys were\n"
	.string "'round when them buggers made their\l"
	.string "escape, HAH!\p"
	.string "How'd youse get 'em back?\p"
	.string "If they ran back in them woods like\n"
	.string "usual I know you twos don't have any\l"
	.string "Pokemon to defend yerselves!$"

OBR_T_Bo2::
# 2015 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "HAHA! Impressive, {PLAYER}!\n"
	.string "Yer sure a brave young gun aren't ya?\p"
	.string "Say... {PAUSE 30}ya'll are always borrowin' from my\n"
	.string "battle tape collection.\p"
	.string "Am I right in assumin' yous want to have\n"
	.string "real battles of yer own someday?$"

OBR_T_Bo3::
# 2025 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Hmm... battle for a title, but no Pokemon\n"
	.string "huh?\p"
	.string "Well... {PAUSE 30}yous' did save me a lotta hassle\n"
	.string "tryin' to get these rascals back.\p"
	.string "I've been meanin' to split 'em up...{PAUSE 30}\n"
	.string "the've been nothin' but trouble since\l"
	.string "my brother dropped 'em off here.\p"
	.string "Hmph!\p"
	.string "Alright, how's about you each take one\n"
	.string "of these little fellers as yer own?$"

OBR_T_Bo4::
# 2038 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "HAH! That's nice lad, but Old Bo can\n"
	.string "barely keep track of the Pokemon he's\l"
	.string "got!\p"
	.string "Youse just focus on having fun on yer\n"
	.string "adventures, that's all any young gun\l"
	.string "trainer should be wantin'!\p"
	.string "Well, alrighty then!\n"
	.string "Who's gonna pick first?!$"

OBR_T_Bo5::
# 2049 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Well, you heard 'em, {PLAYER}.\n"
	.string "Go on n' choose yer Pokemon!\p"
	.string "Here's a PokeBall to hold 'em in.$"

OBR_T_Bo6::
# 2055 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Where ya goin', {PLAYER}?\n"
	.string "Come on back n' pick a Pokemon!$"

OBR_T_Bo7::
# 2060 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Don't yous worry about that lil' feller.\n"
	.string "I'll be sure to find a good home for 'em.\p"
	.string "Anways, y'all take care of those\n"
	.string "Pokemon, if ya do they'll surely grow up\l"
	.string "nice n' strong!\p"
	.string "Alrighty then, I'm gonna head inside for\n"
	.string "a glass o' sweet tea.\p"
	.string "See y'all young guns later!$"

OBR_T_System1::
# 2071 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mike {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}sprayed the repel on {PLAYER}.$"

OBR_T_System2::
# 2075 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} recieved one PokeBall!$"

Give_Turtwig_Nickname::
# 2079 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

Give_Litten_Nickname::
# 2083 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

Give_Oshawott_Nickname::
# 2087 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"
