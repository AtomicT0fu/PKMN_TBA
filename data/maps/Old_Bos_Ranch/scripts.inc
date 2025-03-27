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
	delay 20
# 182 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 183 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 184 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 185 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
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
	setvar VAR_ADVENTURE_START, 15
# 270 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 275 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 276 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
# 277 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_REMOVE_LOG
# 278 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_WEST
# 279 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 280 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 281 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 282 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 283 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 284 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike1_B
# 285 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 286 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 287 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 288 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 289 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike1
# 290 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 291 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 292 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike2_B
# 293 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player1_B
# 294 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 295 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 296 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 297 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 298 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 299 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 300 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 301 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 80
# 302 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 303 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 304 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 305 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 306 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 307 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 308 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 309 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Question
# 310 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 311 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 312 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 313 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 314 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 315 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike2
# 316 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 317 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 318 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 319 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan1
# 320 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 321 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 322 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 323 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 324 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 325 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 326 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 327 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 328 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 329 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 330 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Up
# 331 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 332 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 333 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Up
# 334 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 335 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 336 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten1
# 337 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_Litten1
# 338 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 339 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_WEST
# 340 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 6, DIR_WEST
# 341 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 342 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 343 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 344 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 345 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 346 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 347 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 348 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 349 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 350 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_EAST
# 351 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 352 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 353 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 354 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 355 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 356 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 357 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan2
# 358 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 359 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 360 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 361 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 362 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 363 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 364 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 365 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike3
# 366 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 367 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 368 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike3
# 369 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player2
# 370 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 371 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 372 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 373 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 374 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 375 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 376 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 377 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 378 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 379 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan3
# 380 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 381 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 382 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 383 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 384 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
# 385 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_EFFECTIVE
# 386 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig1
# 387 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 388 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_FENCE_BROKEN
# 389 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 390 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 391 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_EAST
# 392 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 393 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 394 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Right
# 395 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 396 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 397 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Left
# 398 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 399 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 400 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig2
# 401 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, OBR_M_Oshawott1
# 402 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 403 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 5
# 404 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 6
# 405 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_OSHAWOTT_AND_TURTWIG
# 406 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan4
# 407 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 408 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 409 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 7, DIR_SOUTH
# 410 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 411 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 412 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 413 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 414 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 415 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten2
# 416 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan5
# 417 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 418 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 8
# 419 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE
# 420 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 421 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 9
# 422 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 423 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten3
# 424 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan6
# 425 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 426 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 7
# 427 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_LITTEN
# 428 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 429 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 430 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 431 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 432 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
# 433 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 434 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, Univ_Exclam
# 435 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 436 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 437 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike4
# 438 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 439 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 440 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 441 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike4
# 442 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 443 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 444 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike5
# 445 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 446 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 447 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 448 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 449 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike5
# 450 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 451 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 452 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike6
# 453 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 454 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike7
# 455 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player3
# 456 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 457 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 458 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike6
# 459 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 460 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 461 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 462 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_SOUTH
# 463 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 464 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 465 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike7, MSGBOX_YESNO
# 466 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_Mike_FollowB_2
# 494 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 495 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 496 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 497 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 498 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 499 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 500 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 501 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 502 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 503 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 504 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike10
# 505 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 506 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 507 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 508 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 509 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 510 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 511 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 512 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 513 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 514 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
OBR_Mike_FollowB_1:
# 516 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 517 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_Mike_FollowB_2:
# 467 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 468 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike8
# 469 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 470 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 471 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 472 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 473 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 474 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 475 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 476 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 477 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 478 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 479 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 480 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 481 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike9
# 482 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 483 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 484 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 485 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 486 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 487 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 488 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 489 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 490 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 491 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
	goto OBR_Mike_FollowB_1


OBR_Mike_Interact_ForestEntrance::
# 522 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 523 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 524 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 525 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 526 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 527 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 528 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackA::
# 533 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 534 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 535 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 536 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 537 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 538 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 539 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 540 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 541 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 542 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackB::
# 547 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 548 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 549 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 550 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 551 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 552 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 553 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 554 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 555 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 556 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_OneStarterFound::
# 561 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 562 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 563 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 564 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 565 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike12
# 566 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 567 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 568 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 569 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 570 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 571 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 572 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 573 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TwoStartersFound::
# 578 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 579 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 580 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 581 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 582 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike13
# 583 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 584 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 585 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 586 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 587 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 588 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 589 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 590 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_AllStartersFound_A::
# 595 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_SHOW_OLD_BO
# 596 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 14
# 597 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 16
# 598 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player5
# 599 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 600 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 601 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 602 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 603 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 604 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike14
# 605 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 606 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 607 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 608 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 609 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 610 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 611 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike9
# 612 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 613 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepDown1
# 614 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, Univ_StepDown1
# 615 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, Univ_StepRight1
# 616 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, Univ_StepRight1
# 617 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 618 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike10
# 619 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott2
# 620 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten4
# 621 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig3
# 622 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player6
# 623 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 624 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 625 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 626 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 627 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 628 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 629 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 630 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 631 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike15
# 632 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 633 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 634 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 635 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike11
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott3
# 637 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten5
# 638 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig4
# 639 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player7
# 640 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 13
# 641 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 642 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 643 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 644 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 645 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 646 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 647 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 648 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 649 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 650 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo1
# 651 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 652 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 653 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 654 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 655 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 656 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike16
# 657 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 658 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 659 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 660 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 661 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 662 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 663 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo1
# 664 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 665 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 666 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 667 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 668 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 669 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo2
# 670 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 672 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 673 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 674 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 675 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 676 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike17
# 677 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 678 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 679 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 680 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 682 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 683 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo3
# 684 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 685 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 686 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 687 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 688 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 689 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 691 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 10
# 692 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 693 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike12
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 695 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 696 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 697 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 699 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike18
# 700 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 701 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 702 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 703 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike19
# 704 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 705 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 706 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 707 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike20
# 708 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 709 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 710 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 711 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 712 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 713 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 714 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo4
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 716 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 717 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 718 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 719 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 721 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 722 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike21
# 723 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 724 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 726 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 727 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 728 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 729 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 730 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo5
# 731 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 732 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 733 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL
# 734 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 735 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 736 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 737 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 738 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System2
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 740 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 741 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 742 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 743 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 744 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 13, 27, 26
# 745 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 12, 26, 26
# 746 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 11, 25, 26
# 747 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 10, 26, 23
# 748 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 14, 25, 23
# 749 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 750 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_WHH_STARTERS, 4
# 751 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 17
# 752 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_AllStartersFound_B::
# 757 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_SHOW_OLD_BO
# 758 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 14
# 759 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 16
# 760 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 761 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 762 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 763 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 764 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 765 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 766 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike14
# 767 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 768 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 769 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 770 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 771 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 772 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 773 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike9
# 774 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 775 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepDown1
# 776 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, Univ_StepDown1
# 777 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, Univ_StepRight1
# 778 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, Univ_StepRight1
# 779 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 780 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike10
# 781 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott2
# 782 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten4
# 783 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig3
# 784 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player6
# 785 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 786 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 787 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 788 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 789 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 790 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 791 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 792 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 793 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike15
# 794 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 795 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 796 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 797 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike11
# 798 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott3
# 799 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten5
# 800 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig4
# 801 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player7
# 802 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 13
# 803 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 804 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 805 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 806 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 807 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 808 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 809 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 810 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 811 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 812 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo1
# 813 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 814 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 815 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 816 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 817 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 818 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike16
# 819 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 820 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 821 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 822 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 823 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 824 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 825 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo1
# 826 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 827 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 828 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 829 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 830 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 831 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo2
# 832 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 833 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 834 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 835 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 836 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 837 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 838 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike17
# 839 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 840 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 841 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 842 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 843 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 844 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 845 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo3
# 846 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 847 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 848 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 849 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 850 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 851 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 852 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 853 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 10
# 854 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 855 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike12
# 856 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 857 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 858 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 859 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 860 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 861 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike18
# 862 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 863 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 864 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 865 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike19
# 866 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 867 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 868 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 869 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike20
# 870 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 871 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 872 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 873 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 874 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 875 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 876 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo4
# 877 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 878 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 879 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 880 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 881 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 882 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 883 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 884 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike21
# 885 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 886 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 887 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 888 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 889 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 890 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 891 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 892 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo5
# 893 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 894 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 895 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL
# 896 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 897 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 898 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 899 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 900 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System2
# 901 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 902 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 903 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 904 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 905 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 906 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 907 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 13, 27, 26
# 908 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 12, 26, 26
# 909 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 11, 25, 26
# 910 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 10, 26, 23
# 911 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 14, 25, 23
# 912 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 913 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_WHH_STARTERS, 4
# 914 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 17
# 915 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_A::
# 920 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 921 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8
# 922 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 923 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_WEST
# 924 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 925 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 926 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 927 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 928 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 929 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8_R
# 930 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 931 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 932 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 933 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 934 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 935 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_B::
# 940 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 941 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan9
# 942 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 943 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 944 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 945 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 946 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 947 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 948 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 949 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan9_R
# 950 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 951 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 952 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 953 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepLeft1
# 954 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 955 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_C::
# 960 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 961 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8_R
# 962 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 963 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 964 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 965 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 966 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 967 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 968 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8
# 969 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 970 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 971 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepLeft1
# 972 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 973 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_ChooseTurtwig::
# 978 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 979 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 0
# 980 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 981 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 982 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 983 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseTurtwig_Text_0, MSGBOX_YESNO
# 984 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseTurtwig_2
# 1096 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseTurtwig_1:
# 1098 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseTurtwig_2:
# 985 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 986 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 987 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 988 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 989 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 15
# 990 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 15, MAP_OLD_BOS_RANCH, 0
# 991 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 3
# 992 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 993 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 994 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 995 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 996 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 997 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 998 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 999 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1000 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1001 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1002 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1003 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1004 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 15
# 1005 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1006 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1007 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1008 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseTurtwig_Text_1
# 1009 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1010 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1011 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1012 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1013 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Turtwig_Nickname, MSGBOX_YESNO
# 1014 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseTurtwig_6
# 1020 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseTurtwig_5:
# 1022 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1023 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToLitten
# 1024 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1025 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1026 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1027 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1028 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1029 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1030 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1031 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1032 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1033 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 16
# 1034 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 16, MAP_OLD_BOS_RANCH, 0
# 1035 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 12, MAP_OLD_BOS_RANCH, 3
# 1036 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1037 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1038 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1039 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1040 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1041 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1042 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1043 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1044 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1045 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1046 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1047 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1048 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 16
# 1049 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1050 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1051 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 11
# 1052 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1053 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 1054 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott4
# 1055 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1056 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1057 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1058 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1059 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1060 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 1061 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1062 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1063 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1064 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1065 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1066 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1067 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1068 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1069 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1070 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1071 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1072 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1073 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1074 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1075 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1076 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1077 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 1078 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1079 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1080 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1081 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1082 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1083 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1084 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Turtwig
# 1085 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1086 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1087 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1088 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 1089 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1090 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1091 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1092 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1093 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
	goto OBR_ChooseTurtwig_1

OBR_ChooseTurtwig_6:
# 1015 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1016 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1017 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseTurtwig_5


OBR_ChooseLitten::
# 1103 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 1104 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 1105 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1106 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 1107 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseLitten_Text_0, MSGBOX_YESNO
# 1108 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseLitten_2
# 1221 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseLitten_1:
# 1223 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseLitten_2:
# 1109 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1110 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 1111 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1112 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1113 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 16
# 1114 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 16, MAP_OLD_BOS_RANCH, 0
# 1115 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 12, MAP_OLD_BOS_RANCH, 3
# 1116 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1117 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1118 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1119 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1120 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1121 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1122 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1123 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1124 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1125 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1126 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1127 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1128 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 16
# 1129 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1130 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1131 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1132 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseLitten_Text_1
# 1133 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1134 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1135 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1136 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1137 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Litten_Nickname, MSGBOX_YESNO
# 1138 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseLitten_6
# 1144 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseLitten_5:
# 1146 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1147 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToOshawott
# 1148 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1149 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1150 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1151 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1152 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1153 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1154 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1155 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1156 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1157 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 17
# 1158 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 17, MAP_OLD_BOS_RANCH, 0
# 1159 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 13, MAP_OLD_BOS_RANCH, 3
# 1160 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1161 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1162 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1163 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1164 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1165 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1166 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1167 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1168 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1169 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1170 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1171 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1172 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 17
# 1173 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1174 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1175 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 11
# 1176 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1177 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1178 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1179 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig5
# 1180 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1181 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1182 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1183 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1184 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1185 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 1186 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1187 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1188 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1189 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1190 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1191 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1192 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1193 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1194 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1195 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1196 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1197 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1198 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1199 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1200 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1201 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1202 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 1203 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1204 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1205 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1206 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1207 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1208 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1209 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Litten
# 1210 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1211 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1212 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1213 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 1214 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1215 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1216 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1217 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1218 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
	goto OBR_ChooseLitten_1

OBR_ChooseLitten_6:
# 1139 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1140 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1141 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseLitten_5


OBR_ChooseOshawott::
# 1228 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 1229 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 1230 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1231 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 1232 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseOshawott_Text_0, MSGBOX_YESNO
# 1233 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseOshawott_2
# 1346 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseOshawott_1:
# 1348 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseOshawott_2:
# 1234 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1235 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 1236 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1237 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1238 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 17
# 1239 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 17, MAP_OLD_BOS_RANCH, 0
# 1240 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 13, MAP_OLD_BOS_RANCH, 3
# 1241 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1242 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1243 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1244 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1245 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1246 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1247 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1248 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1249 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1250 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1251 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1252 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1253 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 17
# 1254 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1255 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1256 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1257 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseOshawott_Text_1
# 1258 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1259 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1260 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1261 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1262 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Oshawott_Nickname, MSGBOX_YESNO
# 1263 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseOshawott_6
# 1269 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseOshawott_5:
# 1271 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 1272 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToTurtwig
# 1273 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1274 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1275 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1276 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1277 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1278 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1279 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1280 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1281 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1282 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 15
# 1283 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 15, MAP_OLD_BOS_RANCH, 0
# 1284 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 3
# 1285 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1286 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1287 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1288 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1289 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1290 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1291 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1292 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1293 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1294 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1295 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1296 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1297 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 15
# 1298 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1299 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1300 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 11
# 1301 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1302 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 1303 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1304 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten6
# 1305 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1306 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1307 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1308 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1309 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1310 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 1311 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1312 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1313 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1314 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1315 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1316 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1317 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1318 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1319 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1320 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1321 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1322 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1323 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1324 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1325 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepRight1
# 1326 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1327 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 1328 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1329 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1330 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1331 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1332 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1333 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1334 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Oshawott
# 1335 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1336 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1337 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1338 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 1339 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1340 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1341 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1342 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1343 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
	goto OBR_ChooseOshawott_1

OBR_ChooseOshawott_6:
# 1264 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1265 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1266 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseOshawott_5


OBR_UpdateMetatiles::
# 1353 "data/maps/Old_Bos_Ranch/scripts.pory"
	call OBR_CheckLogFlag
# 1354 "data/maps/Old_Bos_Ranch/scripts.pory"
	call CheckFenceFlag
# 1355 "data/maps/Old_Bos_Ranch/scripts.pory"
	call OBR_CheckDoorLock
# 1356 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


CheckFenceFlag::
# 1361 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_OBR_FENCE_BROKEN, CheckFenceFlag_2
CheckFenceFlag_1:
	return

CheckFenceFlag_2:
# 1362 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 1363 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 1364 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
	goto CheckFenceFlag_1


OBR_CheckDoorLock::
# 1372 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, OBR_CheckDoorLock_2
OBR_CheckDoorLock_1:
	return

OBR_CheckDoorLock_2:
# 1373 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
	goto OBR_CheckDoorLock_1


OBR_CheckLogFlag::
# 1381 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_OBR_REMOVE_LOG, OBR_CheckLogFlag_2
OBR_CheckLogFlag_1:
	return

OBR_CheckLogFlag_2:
# 1382 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 1383 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
	goto OBR_CheckLogFlag_1


# 1397 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1:
# 1398 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1399 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 1402 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1_B:
# 1403 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1403 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1404 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
	step_end

# 1407 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2:
# 1408 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1409 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1409 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1409 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1410 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1410 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1411 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1414 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2_B:
# 1415 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1416 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1416 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1417 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1417 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1418 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1418 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1419 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1422 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike3:
# 1423 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1423 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1423 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1426 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike4:
# 1427 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1430 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike5:
# 1431 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1432 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1435 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike6:
# 1436 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_left
# 1437 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_down
# 1438 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1441 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike7:
# 1442 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1442 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1442 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1442 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1443 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1443 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1443 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1444 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1444 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1444 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1444 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1445 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1445 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1446 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1447 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1447 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1449 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1449 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1449 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1449 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1452 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike8:
# 1453 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1454 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_right
	step_end

# 1457 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike9:
# 1458 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1459 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1462 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike10:
# 1463 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1463 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1463 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1465 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1465 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1467 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1467 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1468 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1471 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike11:
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1473 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1473 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1474 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1475 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1475 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1475 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1476 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1479 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike12:
# 1480 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1481 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToLitten:
# 1485 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1485 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToTurtwig:
# 1489 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1490 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1491 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1494 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToOshawott:
# 1495 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1496 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1497 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Turtwig:
# 1501 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1501 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1503 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1503 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1504 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1507 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Litten:
# 1508 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1508 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1509 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1509 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1509 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1510 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1510 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1514 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Oshawott:
# 1515 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1515 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1516 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1516 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1516 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1516 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1516 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1517 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1517 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1523 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1:
# 1524 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1524 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1525 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1525 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1525 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1526 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1526 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1527 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1530 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1_B:
# 1531 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1531 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1532 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1532 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1533 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1533 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1534 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1534 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1538 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player2:
# 1539 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1539 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1539 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player3:
# 1543 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1543 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1543 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1543 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1543 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1544 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1544 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1544 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1545 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1545 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1545 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1545 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1546 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1546 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1548 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1548 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1550 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1550 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1550 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1553 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player4:
# 1554 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1554 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1557 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player5:
# 1558 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1559 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1560 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player6:
# 1564 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1565 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1566 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1566 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1566 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1566 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1566 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1568 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1568 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1569 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1572 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player7:
# 1573 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1574 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1574 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1575 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1576 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1576 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1577 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1577 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1578 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1579 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1579 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1580 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan1:
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 1590 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan2:
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 1594 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan3:
# 1595 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1595 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 1599 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan4:
# 1600 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1600 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1600 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1600 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1600 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1600 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1600 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1600 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan5:
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1607 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan6:
# 1608 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1608 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1608 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1609 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1609 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1610 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1611 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1611 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1612 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1612 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1612 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1612 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1612 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1613 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1613 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1616 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1616 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1617 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1617 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1620 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan7:
# 1621 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1621 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1621 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1621 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1621 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1621 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1621 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1625 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan8:
# 1626 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
# 1626 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
# 1626 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
	step_end

# 1629 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan8_R:
# 1630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
# 1630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
# 1630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
	step_end

# 1633 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan9:
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
	step_end

# 1637 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan9_R:
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
	step_end

# 1643 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten1:
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1645 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1648 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten2:
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1652 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten3:
# 1653 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1653 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1653 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1654 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1654 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1655 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1656 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1656 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1658 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1658 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1659 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1659 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1660 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1660 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1661 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1661 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1666 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten4:
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1669 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1669 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1670 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1670 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
	step_end

# 1674 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten5:
# 1675 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1676 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1677 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1677 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1678 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1678 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1679 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1679 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1682 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1683 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten6:
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1688 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1689 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1689 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1689 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1691 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1691 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1695 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig1:
# 1696 "data/maps/Old_Bos_Ranch/scripts.pory"
	slide_left
# 1697 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1700 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig2:
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1702 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1702 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1703 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1709 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig3:
# 1710 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1711 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1711 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1711 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1711 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1711 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1712 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1713 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1713 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1714 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1714 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1715 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1718 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig4:
# 1719 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1719 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1721 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1721 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1722 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1722 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1723 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1723 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1724 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1726 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1727 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig5:
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1732 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1732 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1733 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1733 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1733 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1734 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1734 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1735 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1735 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1739 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott1:
# 1740 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1740 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1740 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1740 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1741 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1741 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1742 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1743 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1744 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1748 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott2:
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1752 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1752 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1754 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_right
	step_end

# 1757 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott3:
# 1758 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1760 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1760 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1762 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1763 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1764 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1764 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1764 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1768 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott4:
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1777 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Bo1:
# 1778 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1779 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1782 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Bo2:
# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1784 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1784 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1785 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1785 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1786 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1786 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1787 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 649 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Old Bo$"

OBR_ChooseTurtwig_Text_0:
# 983 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseTurtwig_Text_1:
# 1008 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_ChooseLitten_Text_0:
# 1107 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseLitten_Text_1:
# 1132 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_ChooseOshawott_Text_0:
# 1232 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseOshawott_Text_1:
# 1257 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_T_Mike1::
# 1799 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Haha! Too slow again!\n"
	.string "Maybe next time, huh?\p"
	.string "Just messin' with ya, {PLAYER}.\p"
	.string "Let's get this tape back to Bo!$"

OBR_T_Mike2::
# 1806 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... Huh.\n"
	.string "{PAUSE 20}I guess Bo isn't home right now.\p"
	.string "Let's just wait here for a little while,\n"
	.string "{PLAYER}, I'm sure he'll be back soon.$"

OBR_T_Mike3::
# 1813 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Look how adorable that Litten is,\n"
	.string "{PLAYER}!\p"
	.string "We gotta go over and say hello!$"

OBR_T_Mike4::
# 1819 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Wha- wha- WHAT??!!$"

OBR_T_Mike5::
# 1823 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}, did you just see that?!\p"
	.string "I think those Pokemon just ran into the\n"
	.string "woods!\p"
	.string "We have to do something about this,\n"
	.string "{PLAYER}, we gotta get Bo's Pokemon\l"
	.string "back right away!$"

OBR_T_Mike6::
# 1832 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... {PAUSE 30}dang.$"

OBR_T_Mike7::
# 1836 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 1852 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, you're brave, {PLAYER}!$"

OBR_T_Mike9::
# 1856 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Alright, {PLAYER}, be quick!\n"
	.string "That repel won't last forever!$"

OBR_T_Mike10::
# 1861 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Ah jeez!\n"
	.string "Oh man I'm so sorry, {PLAYER}!\p"
	.string "Dang I can't believe my hand slipped\n"
	.string "like that!\p"
	.string "You better get going though, {PLAYER},\n"
	.string "that repel doesn't last forever!$"

OBR_T_Mike11::
# 1870 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Uh... {PAUSE 30}{PLAYER}, where are you going?!\p"
	.string "Go find Bo's Pokemon before the repel\n"
	.string "runs out!$"

OBR_T_Mike12::
# 1876 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Looks like we're still missin' two\n"
	.string "Pokemon over here, {PLAYER}!$"

OBR_T_Mike13::
# 1881 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Only one more, {PLAYER}!\n"
	.string "Hurry, before that repel wears off!$"

OBR_T_Mike14::
# 1886 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Awesome job, {PLAYER}!\p"
	.string "You're amazing, I can't believe you're\n"
	.string "brave enough to go and do that all by\l"
	.string "yourself!\p"
	.string "Now let's get these sneaky Pokemon\n"
	.string "back where they belong!$"

OBR_T_Mike15::
# 1895 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Hey, {PLAYER}, I think I see Ol' Bo up\n"
	.string "ahead!$"

OBR_T_Mike16::
# 1900 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "It was all {PLAYER}, Bo!\p"
	.string "It should be made into a comic book, it\n"
	.string "was incredible!\p"
	.string "I sprayed {PLAYER} with a repel and\n"
	.string "without a second thought, {PLAYER} ran\l"
	.string "into the woods and rescued them!$"

OBR_T_Mike17::
# 1909 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 1921 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "YES!\n"
	.string "Of course, yes!\p"
	.string "We're gonna take such good care of\n"
	.string "them Bo, we promise!$"

OBR_T_Mike19::
# 1928 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "We super promise don't we, {PLAYER}?!$"

OBR_T_Mike20::
# 1932 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, Bo thank you so much!\p"
	.string "Once me and {PLAYER} are super famous\n"
	.string "we're gonna build you a huge addition to\l"
	.string "the ranch!$"

OBR_T_Mike21::
# 1939 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}... {PAUSE 30}you should pick first.\p"
	.string "The way you rushed into action was so\n"
	.string "cool... {PAUSE 30}I wish I could be more like that.\p"
	.string "This only happened because of you,\n"
	.string "{PLAYER}, go ahead!$"

OBR_T_Mike23::
# 1947 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 1963 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Alright, OK!\n"
	.string "I choose this one!!$"

OBR_T_Bo1::
# 1968 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Mike, {PLAYER}!\p"
	.string "Boy am I glad to see youse guys were\n"
	.string "'round when them buggers made their\l"
	.string "escape, HAH!\p"
	.string "How'd youse get 'em back?\p"
	.string "If they ran back in them woods like\n"
	.string "usual I know you twos don't have any\l"
	.string "Pokemon to defend yerselves!$"

OBR_T_Bo2::
# 1979 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "HAHA! Impressive, {PLAYER}!\n"
	.string "Yer sure a brave young gun aren't ya?\p"
	.string "Say... {PAUSE 30}ya'll are always borrowin' from my\n"
	.string "battle tape collection.\p"
	.string "Am I right in assumin' yous want to have\n"
	.string "real battles of yer own someday?$"

OBR_T_Bo3::
# 1989 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 2002 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "HAH! That's nice lad, but Old Bo can\n"
	.string "barely keep track of the Pokemon he's\l"
	.string "got!\p"
	.string "Youse just focus on having fun on yer\n"
	.string "adventures, that's all any young gun\l"
	.string "trainer should be wantin'!\p"
	.string "Well, alrighty then!\n"
	.string "Who's gonna pick first?!$"

OBR_T_Bo5::
# 2013 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Well, you heard 'em, {PLAYER}.\n"
	.string "Go on n' choose yer Pokemon!\p"
	.string "Here's a PokeBall to hold 'em in.$"

OBR_T_Bo6::
# 2019 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Where ya goin', {PLAYER}?\n"
	.string "Come on back n' pick a Pokemon!$"

OBR_T_Bo7::
# 2024 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Don't yous worry about that lil' feller.\n"
	.string "I'll be sure to find a good home for 'em.\p"
	.string "Anways, y'all take care of those\n"
	.string "Pokemon, if ya do they'll surely grow up\l"
	.string "nice n' strong!\p"
	.string "Alrighty then, I'm gonna head inside for\n"
	.string "a glass o' sweet tea.\p"
	.string "See y'all young guns later!$"

OBR_T_System1::
# 2035 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mike {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}sprayed the repel on {PLAYER}.$"

OBR_T_System2::
# 2039 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} recieved one PokeBall!$"

Give_Turtwig_Nickname::
# 2043 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

Give_Litten_Nickname::
# 2047 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

Give_Oshawott_Nickname::
# 2051 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"
