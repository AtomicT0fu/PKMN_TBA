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


OBR_Mike_FollowA::
# 29 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 30 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
# 31 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_REMOVE_LOG
# 32 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_WEST
# 33 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 34 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 35 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 36 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 37 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 38 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike1
# 39 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 40 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 41 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 42 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike1
# 43 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 44 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 45 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike2
# 46 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player1
# 47 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 48 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 49 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 50 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 51 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 52 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 53 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 54 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 80
# 55 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 56 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 57 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 58 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 59 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 60 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 61 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 62 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Question
# 63 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 64 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 65 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 66 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 67 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 68 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike2
# 69 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 70 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 71 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 72 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan1
# 73 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 74 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 75 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 76 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 77 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 78 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 79 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 80 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 81 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 82 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 83 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Up
# 84 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 85 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 86 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Up
# 87 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 88 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 89 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten1
# 90 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_Litten1
# 91 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 92 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_WEST
# 93 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 6, DIR_WEST
# 94 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 95 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 96 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 97 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 98 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 99 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 100 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 101 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 102 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 103 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_EAST
# 104 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 105 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 106 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 107 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 108 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 109 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 110 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan2
# 111 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 112 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 113 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 114 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 115 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 116 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 117 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 118 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike3
# 119 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 120 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 121 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike3
# 122 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player2
# 123 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 124 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 125 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 126 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 127 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 128 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 129 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 130 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 131 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 132 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan3
# 133 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 134 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 135 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 136 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 137 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
# 138 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_EFFECTIVE
# 139 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig1
# 140 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 141 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_FENCE_BROKEN
# 142 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 143 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 144 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_EAST
# 145 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 146 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 147 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Right
# 148 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 149 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 150 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Left
# 151 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 152 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 153 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig2
# 154 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, OBR_M_Oshawott1
# 155 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 156 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 5
# 157 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 6
# 158 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_OSHAWOTT_AND_TURTWIG
# 159 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan4
# 160 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 161 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 162 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 7, DIR_SOUTH
# 163 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 164 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 165 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 166 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 167 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 168 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten2
# 169 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan5
# 170 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 171 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 8
# 172 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE
# 173 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 174 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 9
# 175 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 176 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten3
# 177 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan6
# 178 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 179 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 7
# 180 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_LITTEN
# 181 "data/maps/Old_Bos_Ranch/scripts.pory"
	fadeoutbgm 1
# 182 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
# 183 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 184 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 185 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 186 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 187 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, Univ_Exclam
# 188 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 189 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 190 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike4
# 191 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 192 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 193 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 194 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike4
# 195 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 196 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 197 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike5
# 198 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 199 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 200 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 201 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 202 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike5
# 203 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 204 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 205 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike6
# 206 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 207 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike7
# 208 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player3
# 209 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 210 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 211 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike6
# 212 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 213 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 214 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 215 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_SOUTH
# 216 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 217 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 218 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike7, MSGBOX_YESNO
# 219 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_Mike_FollowA_2
# 247 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 248 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 249 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 250 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 251 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 252 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 253 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 254 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 255 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 256 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 257 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike10
# 258 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 259 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 260 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 261 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 262 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 263 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 264 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 265 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 266 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 267 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
OBR_Mike_FollowA_1:
# 269 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_ENCOUNTERS
# 270 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 271 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_Mike_FollowA_2:
# 220 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 221 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike8
# 222 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 223 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 224 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 225 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 226 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 227 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 228 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 229 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 230 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 231 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 232 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 233 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 234 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike9
# 235 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 236 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 237 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 238 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 239 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 240 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 241 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 242 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 243 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 244 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
	goto OBR_Mike_FollowA_1


OBR_Mike_FollowB::
# 276 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 277 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
# 278 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_REMOVE_LOG
# 279 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_WEST
# 280 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 281 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 282 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 283 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 284 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 285 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike1_B
# 286 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 287 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 288 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 289 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 290 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike1
# 291 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 292 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 293 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike2_B
# 294 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player1_B
# 295 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 296 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 297 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 298 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 299 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 300 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 301 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 302 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 80
# 303 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 304 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 305 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 306 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 307 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 308 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 309 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 310 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Question
# 311 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 312 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 313 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 314 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 315 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 316 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike2
# 317 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 318 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 319 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 320 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan1
# 321 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 322 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 323 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 324 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 325 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 326 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 327 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 328 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 329 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 330 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 331 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Up
# 332 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 333 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 334 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Up
# 335 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 336 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 337 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten1
# 338 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_Litten1
# 339 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 340 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_WEST
# 341 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 6, DIR_WEST
# 342 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 343 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 344 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 345 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 346 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 347 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 348 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 349 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 350 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 351 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_EAST
# 352 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 353 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 354 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 355 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 356 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 357 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 358 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan2
# 359 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 360 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 361 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 362 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 363 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 364 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 365 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 366 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike3
# 367 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 368 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 369 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike3
# 370 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player2
# 371 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 372 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 373 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 374 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 375 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 376 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 377 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 378 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 379 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 380 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan3
# 381 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 382 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 383 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 384 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 385 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
# 386 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_EFFECTIVE
# 387 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig1
# 388 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 389 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_FENCE_BROKEN
# 390 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 391 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 392 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_EAST
# 393 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 394 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 395 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Right
# 396 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 397 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 398 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Left
# 399 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 400 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 401 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig2
# 402 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, OBR_M_Oshawott1
# 403 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 404 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 5
# 405 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 6
# 406 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_OSHAWOTT_AND_TURTWIG
# 407 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan4
# 408 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 409 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 410 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 7, DIR_SOUTH
# 411 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 412 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 413 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 414 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 415 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 416 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten2
# 417 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan5
# 418 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 419 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 8
# 420 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE
# 421 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 422 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 9
# 423 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 424 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten3
# 425 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan6
# 426 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 427 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 7
# 428 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_LITTEN
# 429 "data/maps/Old_Bos_Ranch/scripts.pory"
	fadeoutbgm 1
# 430 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
# 431 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 432 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 433 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 434 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 435 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, Univ_Exclam
# 436 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 437 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 438 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike4
# 439 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 440 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 441 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 442 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike4
# 443 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 444 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 445 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike5
# 446 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 447 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 448 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 449 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 450 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike5
# 451 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 452 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 453 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike6
# 454 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 455 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike7
# 456 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player3
# 457 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 458 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 459 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike6
# 460 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 461 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 462 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 463 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_SOUTH
# 464 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 465 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 466 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike7, MSGBOX_YESNO
# 467 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_Mike_FollowB_2
# 495 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 496 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 497 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 498 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 499 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 500 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 501 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 502 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 503 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 504 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 505 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike10
# 506 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 507 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 508 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 509 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 510 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 511 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 512 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 513 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 514 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 515 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
OBR_Mike_FollowB_1:
# 517 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_ENCOUNTERS
# 518 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 519 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_Mike_FollowB_2:
# 468 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 469 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike8
# 470 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 471 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 472 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 473 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 474 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 475 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 476 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 477 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 478 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 479 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 480 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 481 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 482 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike9
# 483 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 484 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 485 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 486 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 487 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 488 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 489 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 490 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 491 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 492 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
	goto OBR_Mike_FollowB_1


OBR_Mike_Interact_ForestEntrance::
# 524 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 525 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 526 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 527 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 528 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 529 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 530 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackA::
# 535 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 536 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 537 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 538 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 539 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 540 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 541 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 542 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 543 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 544 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackB::
# 549 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 550 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 551 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 552 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 553 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 554 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 555 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 556 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 557 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 558 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_OneStarterFound::
# 563 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 564 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 565 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 566 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 567 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike12
# 568 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 569 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 570 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 571 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 572 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 573 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 574 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 575 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TwoStartersFound::
# 580 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 581 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 582 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 583 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 584 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike13
# 585 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 586 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 587 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 588 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 589 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 590 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 591 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 592 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_AllStartersFound_A::
# 597 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_SHOW_OLD_BO
# 598 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 14
# 599 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 16
# 600 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player5
# 601 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 602 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 603 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 604 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 605 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 606 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike14
# 607 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 608 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 609 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 610 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 611 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 612 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 613 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike9
# 614 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 615 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepDown1
# 616 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, Univ_StepDown1
# 617 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, Univ_StepRight1
# 618 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, Univ_StepRight1
# 619 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 620 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike10
# 621 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott2
# 622 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten4
# 623 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig3
# 624 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player6
# 625 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 626 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 627 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 628 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 629 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 630 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 631 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 632 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 633 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike15
# 634 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 635 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 637 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike11
# 638 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott3
# 639 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten5
# 640 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig4
# 641 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player7
# 642 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 13
# 643 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 644 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 645 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 646 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 647 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 648 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 649 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 650 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 651 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 652 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo1
# 653 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 654 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 655 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 656 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 657 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 658 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike16
# 659 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 660 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 661 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 662 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 663 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 664 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 665 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo1
# 666 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 667 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 668 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 669 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 670 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo2
# 672 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 673 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 674 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 675 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 676 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 677 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 678 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike17
# 679 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 680 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 682 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 683 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 684 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 685 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo3
# 686 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 687 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 688 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 689 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 691 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 692 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 693 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 10
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 695 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike12
# 696 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 697 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 699 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 700 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 701 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike18
# 702 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 703 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 704 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 705 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike19
# 706 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 707 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 708 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 709 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike20
# 710 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 711 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 712 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 713 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 714 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 716 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo4
# 717 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 718 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 719 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 721 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 722 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 723 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 724 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike21
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 726 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 727 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 728 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 729 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 730 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 731 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 732 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo5
# 733 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 734 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 735 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL
# 736 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 737 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 738 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 740 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System2
# 741 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 742 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 743 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 744 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 745 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 746 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 13, 27, 26
# 747 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 12, 26, 26
# 748 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 11, 25, 26
# 749 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 10, 26, 23
# 750 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 14, 25, 23
# 751 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 752 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_WHH_STARTERS, 4
# 753 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 17
# 754 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_AllStartersFound_B::
# 759 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_SHOW_OLD_BO
# 760 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 14
# 761 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 16
# 762 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 763 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 764 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 765 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 766 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 767 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 768 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike14
# 769 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 770 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 771 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 772 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 773 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 774 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 775 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike9
# 776 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 777 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepDown1
# 778 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, Univ_StepDown1
# 779 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, Univ_StepRight1
# 780 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, Univ_StepRight1
# 781 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 782 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike10
# 783 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott2
# 784 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten4
# 785 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig3
# 786 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player6
# 787 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 788 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 789 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 790 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 791 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 792 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 793 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 794 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 795 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike15
# 796 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 797 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 798 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 799 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike11
# 800 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott3
# 801 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten5
# 802 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig4
# 803 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player7
# 804 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 13
# 805 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 806 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 807 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 808 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 809 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 810 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 811 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 812 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 813 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 814 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo1
# 815 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 816 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 817 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 818 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 819 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 820 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike16
# 821 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 822 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 823 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 824 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 825 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 826 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 827 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo1
# 828 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 829 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 830 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 831 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 832 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 833 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo2
# 834 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 835 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 836 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 837 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 838 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 839 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 840 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike17
# 841 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 842 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 843 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 844 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 845 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 846 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 847 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo3
# 848 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 849 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 850 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 851 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 852 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 853 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 854 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 855 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 10
# 856 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 857 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike12
# 858 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 859 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 860 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 861 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 862 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 863 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike18
# 864 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 865 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 866 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 867 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike19
# 868 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 869 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 870 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 871 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike20
# 872 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 873 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 874 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 875 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 876 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 877 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 878 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo4
# 879 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 880 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 881 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 882 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 883 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 884 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 885 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 886 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike21
# 887 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 888 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 889 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 890 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 891 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 892 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 893 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 894 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo5
# 895 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 896 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 897 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL
# 898 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 899 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 900 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 901 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 902 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System2
# 903 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 904 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 905 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 906 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 907 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 908 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 909 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 13, 27, 26
# 910 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 12, 26, 26
# 911 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 11, 25, 26
# 912 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 10, 26, 23
# 913 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 14, 25, 23
# 914 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 915 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_WHH_STARTERS, 4
# 916 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 17
# 917 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_A::
# 922 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 923 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8
# 924 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 925 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_WEST
# 926 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 927 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 928 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 929 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 930 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 931 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8_R
# 932 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 933 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 934 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 935 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 936 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 937 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_B::
# 942 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 943 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan9
# 944 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 945 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 946 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 947 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 948 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 949 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 950 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 951 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan9_R
# 952 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 953 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 954 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 955 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepLeft1
# 956 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 957 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_C::
# 962 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 963 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8_R
# 964 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 965 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 966 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 967 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 968 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 969 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 970 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8
# 971 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 972 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 973 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepLeft1
# 974 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 975 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_ChooseTurtwig::
# 980 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 981 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 0
# 982 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 983 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 984 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 985 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseTurtwig_Text_0, MSGBOX_YESNO
# 986 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseTurtwig_2
# 1106 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseTurtwig_1:
# 1108 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseTurtwig_2:
# 987 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 988 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 989 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 990 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 991 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 15
# 992 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 15, MAP_OLD_BOS_RANCH, 0
# 993 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 3
# 994 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 995 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 996 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 997 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 998 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 999 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1000 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1001 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1002 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1003 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1004 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1005 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1006 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 15
# 1007 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1008 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1009 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1010 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseTurtwig_Text_1
# 1011 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1012 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1013 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1014 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1015 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Turtwig_Nickname, MSGBOX_YESNO
# 1016 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseTurtwig_6
# 1022 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseTurtwig_5:
# 1024 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1025 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToLitten
# 1026 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1027 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1028 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1029 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1030 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1031 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1032 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1033 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1034 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1035 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 16
# 1036 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 16, MAP_OLD_BOS_RANCH, 0
# 1037 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 12, MAP_OLD_BOS_RANCH, 3
# 1038 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1039 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1040 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1041 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1042 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1043 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1044 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1045 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1046 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1047 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1048 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1049 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1050 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 16
# 1051 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1052 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1053 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 11
# 1054 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1055 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 1056 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott4
# 1057 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1058 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1059 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1060 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1061 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1062 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 1063 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1064 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1065 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1066 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1067 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1068 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1069 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1070 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1071 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1072 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1073 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1074 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1075 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1076 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1077 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1078 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1079 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 1080 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1081 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1082 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1083 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1084 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1085 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1086 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Turtwig
# 1087 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1088 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1089 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1090 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 1091 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1092 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1093 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1094 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1095 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1096 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
# 1097 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PS_HIDE_DAD
# 1098 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_FOLLOWERS
# 1099 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_RH1F_HIDE_MAMAW
# 1100 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_MAMAW
# 1101 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_RIVAL_MIKE
# 1102 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_ITEM_WHH_MIRACLE_SEED
# 1103 "data/maps/Old_Bos_Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE
	goto OBR_ChooseTurtwig_1

OBR_ChooseTurtwig_6:
# 1017 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1018 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1019 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseTurtwig_5


OBR_ChooseLitten::
# 1113 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 1114 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 1115 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1116 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 1117 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseLitten_Text_0, MSGBOX_YESNO
# 1118 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseLitten_2
# 1237 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseLitten_1:
# 1239 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseLitten_2:
# 1119 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1120 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 1121 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1122 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1123 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 16
# 1124 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 16, MAP_OLD_BOS_RANCH, 0
# 1125 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 12, MAP_OLD_BOS_RANCH, 3
# 1126 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1127 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1128 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1129 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1130 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1131 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1132 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1133 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1134 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1135 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1136 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1137 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1138 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 16
# 1139 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1140 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1141 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1142 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseLitten_Text_1
# 1143 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1144 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1145 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1146 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1147 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Litten_Nickname, MSGBOX_YESNO
# 1148 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseLitten_6
# 1154 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseLitten_5:
# 1156 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1157 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToOshawott
# 1158 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1159 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1160 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1161 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1162 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1163 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1164 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1165 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1166 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1167 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 17
# 1168 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 17, MAP_OLD_BOS_RANCH, 0
# 1169 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 13, MAP_OLD_BOS_RANCH, 3
# 1170 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1171 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1172 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1173 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1174 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1175 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1176 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1177 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1178 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1179 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1180 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1181 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1182 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 17
# 1183 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1184 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1185 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 11
# 1186 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1187 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1188 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1189 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig5
# 1190 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1191 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1192 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1193 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1194 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1195 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 1196 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1197 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1198 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1199 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1200 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1201 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1202 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1203 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1204 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1205 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1206 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1207 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1208 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1209 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1210 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1211 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1212 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 1213 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1214 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1215 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1216 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1217 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1218 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1219 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Litten
# 1220 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1221 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1222 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1223 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1224 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1225 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1226 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1227 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
# 1228 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PS_HIDE_DAD
# 1229 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_FOLLOWERS
# 1230 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_RH1F_HIDE_MAMAW
# 1231 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_MAMAW
# 1232 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_RIVAL_MIKE
# 1233 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_ITEM_WHH_CHARCOAL
# 1234 "data/maps/Old_Bos_Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE
	goto OBR_ChooseLitten_1

OBR_ChooseLitten_6:
# 1149 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1150 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1151 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseLitten_5


OBR_ChooseOshawott::
# 1244 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 1245 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 1246 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1247 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 1248 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseOshawott_Text_0, MSGBOX_YESNO
# 1249 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseOshawott_2
# 1370 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseOshawott_1:
# 1372 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseOshawott_2:
# 1250 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1251 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 1252 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1253 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1254 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 17
# 1255 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 17, MAP_OLD_BOS_RANCH, 0
# 1256 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 13, MAP_OLD_BOS_RANCH, 3
# 1257 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1258 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1259 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1260 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1261 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1262 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1263 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1264 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1265 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1266 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1267 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1268 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1269 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 17
# 1270 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1271 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1272 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1273 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseOshawott_Text_1
# 1274 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1275 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1276 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1277 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1278 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Oshawott_Nickname, MSGBOX_YESNO
# 1279 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseOshawott_6
# 1285 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseOshawott_5:
# 1287 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 1288 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToTurtwig
# 1289 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1290 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1291 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1292 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1293 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1294 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1295 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1296 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1297 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1298 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 15
# 1299 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 15, MAP_OLD_BOS_RANCH, 0
# 1300 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 3
# 1301 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1302 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1303 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1304 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1305 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1306 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1307 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1308 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1309 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1310 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1311 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1312 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1313 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 15
# 1314 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1315 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1316 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 11
# 1317 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1318 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 1319 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1320 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten6
# 1321 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1322 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1323 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1324 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1325 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1326 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 1327 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1328 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1329 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1330 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1331 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1332 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1333 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1334 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1335 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1336 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1337 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1338 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1339 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1340 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1341 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepRight1
# 1342 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1343 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 1344 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1345 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1346 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1347 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1348 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1349 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1350 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Oshawott
# 1351 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1352 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1353 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1354 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 1355 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1356 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1357 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1358 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1359 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1360 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
# 1361 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_FOLLOWERS
# 1362 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PS_HIDE_DAD
# 1363 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_RH1F_HIDE_MAMAW
# 1364 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_MAMAW
# 1365 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_RIVAL_MIKE
# 1366 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_ITEM_WHH_MYSTIC_WATER
# 1367 "data/maps/Old_Bos_Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE
	goto OBR_ChooseOshawott_1

OBR_ChooseOshawott_6:
# 1280 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1281 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1282 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseOshawott_5


OBR_UpdateMetatiles::
# 1377 "data/maps/Old_Bos_Ranch/scripts.pory"
	call OBR_CheckLogFlag
# 1378 "data/maps/Old_Bos_Ranch/scripts.pory"
	call CheckFenceFlag
# 1379 "data/maps/Old_Bos_Ranch/scripts.pory"
	call OBR_CheckDoorLock
# 1380 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


CheckFenceFlag::
# 1385 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_OBR_FENCE_BROKEN, CheckFenceFlag_2
CheckFenceFlag_1:
	return

CheckFenceFlag_2:
# 1386 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 1387 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 1388 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
	goto CheckFenceFlag_1


OBR_CheckDoorLock::
# 1396 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, OBR_CheckDoorLock_2
OBR_CheckDoorLock_1:
	return

OBR_CheckDoorLock_2:
# 1397 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
	goto OBR_CheckDoorLock_1


OBR_CheckLogFlag::
# 1405 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_OBR_REMOVE_LOG, OBR_CheckLogFlag_2
OBR_CheckLogFlag_1:
	return

OBR_CheckLogFlag_2:
# 1406 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 1407 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
	goto OBR_CheckLogFlag_1


# 1421 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1:
# 1422 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1423 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 1426 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1_B:
# 1427 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1427 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1428 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
	step_end

# 1431 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2:
# 1432 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1433 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1433 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1433 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1434 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1434 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1435 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1438 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2_B:
# 1439 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1440 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1440 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1441 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1441 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1442 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1442 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1443 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1446 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike3:
# 1447 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1447 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1447 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1450 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike4:
# 1451 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1454 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike5:
# 1455 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1456 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1459 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike6:
# 1460 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_left
# 1461 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_down
# 1462 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1465 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike7:
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1467 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1467 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1467 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1468 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1468 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1468 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1468 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1469 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1469 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1470 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1471 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1471 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1473 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1473 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1473 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1473 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1476 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike8:
# 1477 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1478 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_right
	step_end

# 1481 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike9:
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1483 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike10:
# 1487 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1487 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1487 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1489 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1489 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1490 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1490 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1491 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1491 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1492 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1495 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike11:
# 1496 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1496 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1497 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1497 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1498 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1499 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1499 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1499 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1503 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike12:
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1505 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1508 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToLitten:
# 1509 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1509 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1512 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToTurtwig:
# 1513 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1514 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1515 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToOshawott:
# 1519 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1520 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1521 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1524 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Turtwig:
# 1525 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1525 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1526 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1526 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1526 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1526 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1527 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1527 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1531 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Litten:
# 1532 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1532 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1533 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1533 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1533 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1534 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1534 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1538 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Oshawott:
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

# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1:
# 1548 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1548 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1550 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1550 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1551 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1554 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1_B:
# 1555 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1555 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1557 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1557 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1558 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1558 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1559 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1562 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player2:
# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1566 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player3:
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1568 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1568 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1568 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1569 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1569 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1569 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1569 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1570 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1570 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1571 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1572 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1572 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1574 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1574 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1574 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1577 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player4:
# 1578 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1578 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1581 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player5:
# 1582 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1583 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1584 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player6:
# 1588 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1589 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1590 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1590 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1590 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1590 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1590 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1592 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1592 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1593 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player7:
# 1597 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1598 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1598 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1599 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1600 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1600 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1601 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1601 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1602 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1609 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan1:
# 1610 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1610 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1610 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1610 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1610 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1611 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1611 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1611 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan2:
# 1615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 1618 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan3:
# 1619 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1619 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1620 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1620 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1620 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1620 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1620 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1620 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 1623 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan4:
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1627 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan5:
# 1628 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1628 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1628 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1628 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1628 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1628 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1628 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1628 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1628 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1631 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan6:
# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1633 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1633 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1635 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1635 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1637 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1637 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1639 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1639 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1641 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1641 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan7:
# 1645 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1645 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1645 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1645 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1645 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1645 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1645 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1646 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1646 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1646 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1646 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan8:
# 1650 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
# 1650 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
# 1650 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
	step_end

# 1653 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan8_R:
# 1654 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
# 1654 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
# 1654 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
	step_end

# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan9:
# 1658 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
# 1658 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
# 1658 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
	step_end

# 1661 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan9_R:
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
	step_end

# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten1:
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1669 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1672 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten2:
# 1673 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1673 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1673 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1673 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1673 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1673 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1673 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1673 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1673 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1676 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten3:
# 1677 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1677 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1677 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1678 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1678 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1679 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1683 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1683 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1684 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1684 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1690 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten4:
# 1691 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1691 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1691 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1691 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1691 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1693 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1693 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1695 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
	step_end

# 1698 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten5:
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1700 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1702 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1702 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1703 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1703 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1707 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1710 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten6:
# 1711 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1711 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1713 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1713 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1713 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1714 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1714 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1719 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig1:
# 1720 "data/maps/Old_Bos_Ranch/scripts.pory"
	slide_left
# 1721 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1724 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig2:
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1726 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1726 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1727 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1728 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1729 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1734 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig3:
# 1735 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1738 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1738 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1740 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1743 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig4:
# 1744 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1744 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1746 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1746 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1747 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1747 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1748 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1748 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1752 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1755 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig5:
# 1756 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1756 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1757 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1757 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1758 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1758 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1758 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1760 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1760 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1764 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott1:
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1766 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1766 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1767 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1768 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1774 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott2:
# 1775 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1775 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1775 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1775 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1776 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1776 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1776 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1776 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1776 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1776 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1776 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1776 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1776 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1776 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1777 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1777 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1778 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1778 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1779 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1779 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1780 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_right
	step_end

# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott3:
# 1784 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1785 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1785 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1786 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1786 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1787 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1787 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1791 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1794 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott4:
# 1795 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1795 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1795 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1795 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1795 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1796 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1796 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1797 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1797 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1798 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1798 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1798 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1798 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1798 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1803 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Bo1:
# 1804 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1805 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1808 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Bo2:
# 1809 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1809 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1809 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1810 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1810 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1811 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1811 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1812 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1812 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1813 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1814 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1814 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1814 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

OBR_DoorIsLocked_Text_0:
# 12 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "The door is locked.$"

OBR_DoorIsLocked_Text_1:
# 19 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "The door is unlocked.$"

OBR_Mike_FollowA_Text_0:
# 41 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

OBR_AllStartersFound_A_Text_0:
# 651 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Old Bo$"

OBR_ChooseTurtwig_Text_0:
# 985 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseTurtwig_Text_1:
# 1010 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_ChooseLitten_Text_0:
# 1117 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseLitten_Text_1:
# 1142 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_ChooseOshawott_Text_0:
# 1248 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseOshawott_Text_1:
# 1273 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_T_Mike1::
# 1825 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Haha! Too slow again!\n"
	.string "Maybe next time, huh?\p"
	.string "Just messin' with ya, {PLAYER}.\p"
	.string "Let's get this tape back to Bo!$"

OBR_T_Mike2::
# 1832 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... Huh.\n"
	.string "{PAUSE 20}I guess Bo isn't home right now.\p"
	.string "Let's just wait here for a little while,\n"
	.string "{PLAYER}, I'm sure he'll be back soon.$"

OBR_T_Mike3::
# 1839 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Look how adorable that Litten is,\n"
	.string "{PLAYER}!\p"
	.string "We gotta go over and say hello!$"

OBR_T_Mike4::
# 1845 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Wha- wha- WHAT??!!$"

OBR_T_Mike5::
# 1849 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}, did you just see that?!\p"
	.string "I think those Pokemon just ran into the\n"
	.string "woods!\p"
	.string "We have to do something about this,\n"
	.string "{PLAYER}, we gotta get Bo's Pokemon\l"
	.string "back right away!$"

OBR_T_Mike6::
# 1858 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... {PAUSE 30}dang.$"

OBR_T_Mike7::
# 1862 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 1878 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, you're brave, {PLAYER}!$"

OBR_T_Mike9::
# 1882 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Alright, {PLAYER}, be quick!\n"
	.string "That repel won't last forever!$"

OBR_T_Mike10::
# 1887 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Ah jeez!\n"
	.string "Oh man I'm so sorry, {PLAYER}!\p"
	.string "Dang I can't believe my hand slipped\n"
	.string "like that!\p"
	.string "You better get going though, {PLAYER},\n"
	.string "that repel doesn't last forever!$"

OBR_T_Mike11::
# 1896 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Uh... {PAUSE 30}{PLAYER}, where are you going?!\p"
	.string "Go find Bo's Pokemon before the repel\n"
	.string "runs out!$"

OBR_T_Mike12::
# 1902 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Looks like we're still missin' two\n"
	.string "Pokemon over here, {PLAYER}!$"

OBR_T_Mike13::
# 1907 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Only one more, {PLAYER}!\n"
	.string "Hurry, before that repel wears off!$"

OBR_T_Mike14::
# 1912 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Awesome job, {PLAYER}!\p"
	.string "You're amazing, I can't believe you're\n"
	.string "brave enough to go and do that all by\l"
	.string "yourself!\p"
	.string "Now let's get these sneaky Pokemon\n"
	.string "back where they belong!$"

OBR_T_Mike15::
# 1921 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Hey, {PLAYER}, I think I see Ol' Bo up\n"
	.string "ahead!$"

OBR_T_Mike16::
# 1926 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "It was all {PLAYER}, Bo!\p"
	.string "It should be made into a comic book, it\n"
	.string "was incredible!\p"
	.string "I sprayed {PLAYER} with a repel and\n"
	.string "without a second thought, {PLAYER} ran\l"
	.string "into the woods and rescued them!$"

OBR_T_Mike17::
# 1935 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 1947 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "YES!\n"
	.string "Of course, yes!\p"
	.string "We're gonna take such good care of\n"
	.string "them Bo, we promise!$"

OBR_T_Mike19::
# 1954 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "We super promise don't we, {PLAYER}?!$"

OBR_T_Mike20::
# 1958 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, Bo thank you so much!\p"
	.string "Once me and {PLAYER} are super famous\n"
	.string "we're gonna build you a huge addition to\l"
	.string "the ranch!$"

OBR_T_Mike21::
# 1965 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}... {PAUSE 30}you should pick first.\p"
	.string "The way you rushed into action was so\n"
	.string "cool... {PAUSE 30}I wish I could be more like that.\p"
	.string "This only happened because of you,\n"
	.string "{PLAYER}, go ahead!$"

OBR_T_Mike23::
# 1973 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}, this is unbelievable!\n"
	.string "I never thought we could actually have\l"
	.string "Pokemon of our own!\l"
	.string "They seem strong too!\p"
	.string "{PLAYER}, we gotta test 'em out right\n"
	.string "away, let's have a battle, you and me!\p"
	.string "Wait... {PAUSE 30}shoot, I forgot I'm supposed\n"
	.string "to help my Grandma brush Millie.\p"
	.string "Dang, I guess we're gonna have to do it\n"
	.string "some other time...\p"
	.string "How about you meet me back at my house\n"
	.string "in a few hours and we'll battle then?!\p"
	.string "I'll see ya later, {PLAYER}!$"

OBR_T_Mike22::
# 1989 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Alright, OK!\n"
	.string "I choose this one!!$"

OBR_T_Bo1::
# 1994 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Mike, {PLAYER}!\p"
	.string "Boy am I glad to see youse guys were\n"
	.string "'round when them buggers made their\l"
	.string "escape, HAH!\p"
	.string "How'd youse get 'em back?\p"
	.string "If they ran back in them woods like\n"
	.string "usual I know you twos don't have any\l"
	.string "Pokemon to defend yerselves!$"

OBR_T_Bo2::
# 2005 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "HAHA! Impressive, {PLAYER}!\n"
	.string "Yer sure a brave young gun aren't ya?\p"
	.string "Say... {PAUSE 30}ya'll are always borrowin' from my\n"
	.string "battle tape collection.\p"
	.string "Am I right in assumin' yous want to have\n"
	.string "real battles of yer own someday?$"

OBR_T_Bo3::
# 2015 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 2028 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "HAH! That's nice lad, but Old Bo can\n"
	.string "barely keep track of the Pokemon he's\l"
	.string "got!\p"
	.string "Youse just focus on having fun on yer\n"
	.string "adventures, that's all any young gun\l"
	.string "trainer should be wantin'!\p"
	.string "Well, alrighty then!\n"
	.string "Who's gonna pick first?!$"

OBR_T_Bo5::
# 2039 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Well, you heard 'em, {PLAYER}.\n"
	.string "Go on n' choose yer Pokemon!\p"
	.string "Here's a PokeBall to hold 'em in.$"

OBR_T_Bo6::
# 2045 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Where ya goin', {PLAYER}?\n"
	.string "Come on back n' pick a Pokemon!$"

OBR_T_Bo7::
# 2050 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Don't yous worry about that lil' feller.\n"
	.string "I'll be sure to find a good home for 'em.\p"
	.string "Anways, y'all take care of those\n"
	.string "Pokemon, if ya do they'll surely grow up\l"
	.string "nice n' strong!\p"
	.string "Alrighty then, I'm gonna head inside for\n"
	.string "a glass o' sweet tea.\p"
	.string "See y'all young guns later!$"

OBR_T_System1::
# 2061 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mike {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}sprayed the repel on {PLAYER}.$"

OBR_T_System2::
# 2065 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} recieved one PokeBall!$"

Give_Turtwig_Nickname::
# 2069 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

Give_Litten_Nickname::
# 2073 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

Give_Oshawott_Nickname::
# 2077 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"
