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
	playse SE_MUD_BALL
# 59 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 60 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 61 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 62 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 63 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 80
# 64 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 65 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 66 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 67 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 68 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 69 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 70 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 71 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Question
# 72 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 73 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 74 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 75 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 76 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 77 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike2
# 78 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 79 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 80 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 81 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan1
# 82 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 83 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 84 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 85 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 86 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 87 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 88 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 89 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 90 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 91 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 92 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Up
# 93 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 94 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 95 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Up
# 96 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 97 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 98 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten1
# 99 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_Litten1
# 100 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 101 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_WEST
# 102 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 6, DIR_WEST
# 103 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 104 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 105 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 106 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 107 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 108 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 109 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 110 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 111 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 112 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_EAST
# 113 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 114 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 115 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 116 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 117 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 118 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 119 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan2
# 120 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 121 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 122 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 123 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 124 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 125 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 126 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 127 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike3
# 128 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 129 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 130 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike3
# 131 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player2
# 132 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 133 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 134 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 135 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 136 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 137 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 138 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 139 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 140 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 141 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan3
# 142 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 143 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 144 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 145 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 146 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
# 147 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_EFFECTIVE
# 148 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig1
# 149 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 150 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_FENCE_BROKEN
# 151 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 152 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 153 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_EAST
# 154 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 155 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 156 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Right
# 157 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 158 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 159 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Left
# 160 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 161 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 162 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig2
# 163 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, OBR_M_Oshawott1
# 164 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 165 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 5
# 166 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 6
# 167 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_OSHAWOTT_AND_TURTWIG
# 168 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan4
# 169 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 170 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 171 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 7, DIR_SOUTH
# 172 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 173 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 174 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 175 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 176 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 177 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten2
# 178 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan5
# 179 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 180 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 8
# 181 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE
# 182 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 183 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 9
# 184 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 185 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten3
# 186 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan6
# 187 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 188 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 7
# 189 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_LITTEN
# 190 "data/maps/Old_Bos_Ranch/scripts.pory"
	fadeoutbgm 1
# 191 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
# 192 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 193 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 194 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 195 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 196 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, Univ_Exclam
# 197 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 198 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 199 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike4
# 200 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 201 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 202 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 203 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike4
# 204 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 205 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 206 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike5
# 207 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 208 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 209 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 210 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 211 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike5
# 212 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 213 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 214 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike6
# 215 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 216 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike7
# 217 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player3
# 218 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 219 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 220 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike6
# 221 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 222 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 223 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 224 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_SOUTH
# 225 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 226 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 227 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike7, MSGBOX_YESNO
# 228 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_Mike_FollowA_2
# 256 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 257 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 258 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 259 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 260 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 261 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 262 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 263 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 264 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 265 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 266 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike10
# 267 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 268 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 269 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 270 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 271 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 272 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 273 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 274 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 275 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 276 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
OBR_Mike_FollowA_1:
# 278 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_ENCOUNTERS
# 279 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 280 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_Mike_FollowA_2:
# 229 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 230 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike8
# 231 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 232 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 233 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 234 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 235 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 236 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 237 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 238 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 239 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 240 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 241 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 242 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 243 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike9
# 244 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 245 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 246 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 247 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 248 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 249 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 250 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 251 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 252 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 253 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
	goto OBR_Mike_FollowA_1


OBR_Mike_FollowB::
# 285 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 286 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
# 287 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_REMOVE_LOG
# 288 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_WEST
# 289 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 290 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 291 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 292 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 293 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 294 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike1_B
# 295 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 296 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 297 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 298 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 299 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike1
# 300 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 301 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 302 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike2_B
# 303 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player1_B
# 304 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 305 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 306 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 307 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 308 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 309 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 310 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 311 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 80
# 312 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 313 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 314 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 315 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 316 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 317 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 318 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 319 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Question
# 320 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 321 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 322 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 323 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 324 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 325 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike2
# 326 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 327 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 328 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 329 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan1
# 330 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 331 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 332 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 333 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 334 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 335 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 336 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 337 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 338 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 339 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 340 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Up
# 341 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 342 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 343 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Up
# 344 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 345 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 346 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten1
# 347 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_Litten1
# 348 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 349 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_WEST
# 350 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 6, DIR_WEST
# 351 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 352 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 353 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 354 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 355 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 356 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 357 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 358 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 359 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 360 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_EAST
# 361 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 362 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 363 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 364 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 365 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 366 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 367 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan2
# 368 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 369 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 370 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 371 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 372 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 373 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 374 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 375 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike3
# 376 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 377 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 378 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike3
# 379 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player2
# 380 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 381 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 382 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 383 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 384 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 385 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 386 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 387 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 388 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 389 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan3
# 390 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 391 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 392 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 393 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 394 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
# 395 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_EFFECTIVE
# 396 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig1
# 397 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 398 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_FENCE_BROKEN
# 399 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 400 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 401 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_EAST
# 402 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 403 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 404 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Right
# 405 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 406 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 407 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Left
# 408 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 409 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 410 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig2
# 411 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, OBR_M_Oshawott1
# 412 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 413 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 5
# 414 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 6
# 415 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_OSHAWOTT_AND_TURTWIG
# 416 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan4
# 417 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 418 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 419 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 7, DIR_SOUTH
# 420 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 421 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 422 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 423 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 424 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 425 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten2
# 426 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan5
# 427 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 428 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 8
# 429 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE
# 430 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 431 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 9
# 432 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 433 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten3
# 434 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan6
# 435 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 436 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 7
# 437 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_LITTEN
# 438 "data/maps/Old_Bos_Ranch/scripts.pory"
	fadeoutbgm 1
# 439 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
# 440 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 441 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 442 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 443 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 444 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, Univ_Exclam
# 445 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 446 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 447 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike4
# 448 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 449 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 450 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 451 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike4
# 452 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 453 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 454 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike5
# 455 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 456 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 457 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 458 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 459 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike5
# 460 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 461 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 462 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike6
# 463 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 464 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike7
# 465 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player3
# 466 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 467 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 468 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike6
# 469 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 470 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 471 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 472 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_SOUTH
# 473 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 474 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 475 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike7, MSGBOX_YESNO
# 476 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_Mike_FollowB_2
# 504 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 505 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 506 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 507 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 508 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 509 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 510 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 511 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 512 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 513 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 514 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike10
# 515 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 516 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 517 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 518 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 519 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 520 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 521 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 522 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 523 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 524 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
OBR_Mike_FollowB_1:
# 526 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_ENCOUNTERS
# 527 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 528 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_Mike_FollowB_2:
# 477 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 478 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike8
# 479 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 480 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 481 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 482 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 483 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 484 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 485 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 486 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 487 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 488 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 489 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 490 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 491 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike9
# 492 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 493 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 494 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 495 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 496 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 497 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 498 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 499 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 500 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 501 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
	goto OBR_Mike_FollowB_1


OBR_Mike_Interact_ForestEntrance::
# 533 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 534 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 535 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 536 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 537 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 538 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 539 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackA::
# 544 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 545 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 546 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 547 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 548 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 549 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 550 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 551 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 552 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 553 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackB::
# 558 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 559 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 560 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 561 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 562 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 563 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 564 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 565 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 566 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 567 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_OneStarterFound::
# 572 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 573 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 574 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 575 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 576 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike12
# 577 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 578 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 579 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 580 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 581 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 582 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 583 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 584 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TwoStartersFound::
# 589 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 590 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 591 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 592 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 593 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike13
# 594 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 595 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 596 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 597 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 598 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 599 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 600 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 601 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_AllStartersFound_A::
# 606 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_SHOW_OLD_BO
# 607 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 14
# 608 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 16
# 609 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player5
# 610 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 611 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 612 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 613 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 614 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 615 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike14
# 616 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 617 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 618 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 619 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 620 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 621 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 622 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike9
# 623 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 624 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepDown1
# 625 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, Univ_StepDown1
# 626 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, Univ_StepRight1
# 627 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, Univ_StepRight1
# 628 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 629 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike10
# 630 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott2
# 631 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten4
# 632 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig3
# 633 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player6
# 634 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 635 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 637 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 638 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 639 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 640 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 641 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 642 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike15
# 643 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 644 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 645 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 646 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike11
# 647 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott3
# 648 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten5
# 649 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig4
# 650 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player7
# 651 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 13
# 652 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 653 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 654 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 655 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 656 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 657 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 658 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 659 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 660 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 661 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo1
# 662 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 663 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 664 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 665 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 666 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 667 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike16
# 668 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 669 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 670 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 672 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 673 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 674 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo1
# 675 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 676 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 677 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 678 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 679 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 680 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo2
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 682 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 683 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 684 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 685 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 686 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 687 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike17
# 688 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 689 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 691 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 692 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 693 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo3
# 695 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 696 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 697 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 699 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 700 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 701 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 702 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 10
# 703 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 704 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike12
# 705 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 706 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 707 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 708 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 709 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 710 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike18
# 711 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 712 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 713 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 714 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike19
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 716 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 717 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 718 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike20
# 719 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 721 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 722 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 723 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 724 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo4
# 726 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 727 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 728 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 729 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 730 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 731 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 732 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 733 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike21
# 734 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 735 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 736 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 737 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 738 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 740 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 741 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo5
# 742 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 743 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 744 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL
# 745 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 746 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 747 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 748 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 749 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System2
# 750 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 751 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 752 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 753 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 754 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 755 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 13, 27, 26
# 756 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 12, 26, 26
# 757 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 11, 25, 26
# 758 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 10, 26, 23
# 759 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 14, 25, 23
# 760 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 761 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_WHH_STARTERS, 4
# 762 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 17
# 763 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_AllStartersFound_B::
# 768 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_SHOW_OLD_BO
# 769 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 14
# 770 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 16
# 771 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 772 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 773 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 774 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 775 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 776 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 777 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike14
# 778 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 779 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 780 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 781 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 782 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 783 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 784 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike9
# 785 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 786 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepDown1
# 787 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, Univ_StepDown1
# 788 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, Univ_StepRight1
# 789 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, Univ_StepRight1
# 790 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 791 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike10
# 792 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott2
# 793 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten4
# 794 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig3
# 795 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player6
# 796 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 797 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 798 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 799 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 800 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 801 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 802 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 803 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 804 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike15
# 805 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 806 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 807 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 808 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike11
# 809 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott3
# 810 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten5
# 811 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig4
# 812 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player7
# 813 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 13
# 814 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 815 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 816 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 817 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 818 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 819 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 820 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 821 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 822 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 823 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo1
# 824 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 825 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 826 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 827 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 828 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 829 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike16
# 830 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 831 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 832 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 833 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 834 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 835 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 836 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo1
# 837 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 838 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 839 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 840 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 841 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 842 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo2
# 843 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 844 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 845 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 846 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 847 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 848 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 849 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike17
# 850 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 851 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 852 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 853 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 854 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 855 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 856 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo3
# 857 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 858 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 859 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 860 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 861 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 862 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 863 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 864 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 10
# 865 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 866 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike12
# 867 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 868 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 869 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 870 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 871 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 872 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike18
# 873 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 874 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 875 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 876 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike19
# 877 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 878 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 879 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 880 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike20
# 881 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 882 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 883 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 884 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 885 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 886 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 887 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo4
# 888 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 889 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 890 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 891 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 892 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 893 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 894 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 895 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike21
# 896 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 897 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 898 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 899 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 900 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 901 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 902 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 903 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo5
# 904 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 905 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 906 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL
# 907 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 908 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 909 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 910 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 911 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System2
# 912 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 913 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 914 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 915 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 916 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 917 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 918 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 13, 27, 26
# 919 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 12, 26, 26
# 920 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 11, 25, 26
# 921 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 10, 26, 23
# 922 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 14, 25, 23
# 923 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 924 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_WHH_STARTERS, 4
# 925 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 17
# 926 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_A::
# 931 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 932 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8
# 933 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 934 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_WEST
# 935 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 936 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 937 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 938 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 939 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 940 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8_R
# 941 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 942 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 943 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 944 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 945 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 946 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_B::
# 951 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 952 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan9
# 953 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 954 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 955 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 956 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 957 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 958 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 959 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 960 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan9_R
# 961 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 962 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 963 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 964 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepLeft1
# 965 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 966 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_C::
# 971 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 972 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8_R
# 973 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 974 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 975 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 976 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 977 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 978 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 979 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8
# 980 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 981 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 982 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepLeft1
# 983 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 984 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_ChooseTurtwig::
# 989 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 990 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 0
# 991 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 992 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 993 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 994 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseTurtwig_Text_0, MSGBOX_YESNO
# 995 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseTurtwig_2
# 1116 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseTurtwig_1:
# 1118 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseTurtwig_2:
# 996 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 997 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 998 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 999 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1000 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 15
# 1001 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 15, MAP_OLD_BOS_RANCH, 0
# 1002 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 3
# 1003 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1004 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1005 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1006 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1007 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1008 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1009 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1010 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1011 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1012 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1013 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1014 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1015 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 15
# 1016 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1017 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1018 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1019 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseTurtwig_Text_1
# 1020 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1021 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1022 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1023 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1024 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Turtwig_Nickname, MSGBOX_YESNO
# 1025 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseTurtwig_6
# 1031 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseTurtwig_5:
# 1033 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1034 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToLitten
# 1035 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1036 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1037 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1038 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1039 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1040 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1041 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1042 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1043 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1044 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 16
# 1045 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 16, MAP_OLD_BOS_RANCH, 0
# 1046 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 12, MAP_OLD_BOS_RANCH, 3
# 1047 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1048 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1049 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1050 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1051 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1052 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1053 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1054 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1055 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1056 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1057 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1058 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1059 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 16
# 1060 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1061 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1062 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 11
# 1063 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1064 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 1065 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott4
# 1066 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1067 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1068 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1069 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1070 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1071 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 1072 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1073 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1074 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1075 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1076 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1077 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1078 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1079 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1080 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1081 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1082 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1083 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1084 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1085 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1086 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1087 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1088 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 1089 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1090 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1091 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1092 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1093 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1094 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1095 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Turtwig
# 1096 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1097 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1098 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1099 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 1100 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1101 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1102 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1103 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1104 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1105 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
# 1106 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PS_HIDE_DAD
# 1107 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_FOLLOWERS
# 1108 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_RH1F_HIDE_MAMAW
# 1109 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_MAMAW
# 1110 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_RIVAL_MIKE
# 1111 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_ITEM_WHH_MIRACLE_SEED
# 1112 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBH1F_HIDE_BO
# 1113 "data/maps/Old_Bos_Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE
	goto OBR_ChooseTurtwig_1

OBR_ChooseTurtwig_6:
# 1026 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1027 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1028 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseTurtwig_5


OBR_ChooseLitten::
# 1123 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 1124 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 1125 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1126 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 1127 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseLitten_Text_0, MSGBOX_YESNO
# 1128 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseLitten_2
# 1248 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseLitten_1:
# 1250 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseLitten_2:
# 1129 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1130 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 1131 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1132 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1133 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 16
# 1134 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 16, MAP_OLD_BOS_RANCH, 0
# 1135 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 12, MAP_OLD_BOS_RANCH, 3
# 1136 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1137 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1138 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1139 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1140 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1141 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1142 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1143 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1144 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1145 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1146 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1147 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1148 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 16
# 1149 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1150 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1151 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1152 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseLitten_Text_1
# 1153 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1154 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1155 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1156 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1157 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Litten_Nickname, MSGBOX_YESNO
# 1158 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseLitten_6
# 1164 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseLitten_5:
# 1166 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1167 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToOshawott
# 1168 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1169 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1170 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1171 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1172 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1173 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1174 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1175 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1176 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1177 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 17
# 1178 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 17, MAP_OLD_BOS_RANCH, 0
# 1179 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 13, MAP_OLD_BOS_RANCH, 3
# 1180 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1181 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1182 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1183 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1184 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1185 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1186 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1187 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1188 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1189 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1190 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1191 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1192 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 17
# 1193 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1194 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1195 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 11
# 1196 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1197 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1198 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1199 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig5
# 1200 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1201 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1202 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1203 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1204 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1205 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 1206 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1207 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1208 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1209 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1210 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1211 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1212 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1213 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1214 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1215 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1216 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1217 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1218 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1219 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1220 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1221 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1222 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 1223 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1224 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1225 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1226 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1227 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1228 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1229 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Litten
# 1230 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1231 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1232 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1233 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1234 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1235 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1236 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1237 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
# 1238 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PS_HIDE_DAD
# 1239 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_FOLLOWERS
# 1240 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_RH1F_HIDE_MAMAW
# 1241 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_MAMAW
# 1242 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_RIVAL_MIKE
# 1243 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_ITEM_WHH_CHARCOAL
# 1244 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBH1F_HIDE_BO
# 1245 "data/maps/Old_Bos_Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE
	goto OBR_ChooseLitten_1

OBR_ChooseLitten_6:
# 1159 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1160 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1161 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseLitten_5


OBR_ChooseOshawott::
# 1255 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 1256 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 1257 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1258 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 1259 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseOshawott_Text_0, MSGBOX_YESNO
# 1260 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseOshawott_2
# 1382 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseOshawott_1:
# 1384 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseOshawott_2:
# 1261 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1262 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 1263 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1264 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1265 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 17
# 1266 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 17, MAP_OLD_BOS_RANCH, 0
# 1267 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 13, MAP_OLD_BOS_RANCH, 3
# 1268 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1269 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1270 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1271 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1272 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1273 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1274 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1275 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1276 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1277 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1278 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1279 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1280 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 17
# 1281 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1282 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1283 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1284 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseOshawott_Text_1
# 1285 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1286 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1287 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1288 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1289 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Oshawott_Nickname, MSGBOX_YESNO
# 1290 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseOshawott_6
# 1296 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseOshawott_5:
# 1298 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 1299 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToTurtwig
# 1300 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1301 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1302 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1303 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1304 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1305 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1306 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1307 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1308 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1309 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 15
# 1310 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 15, MAP_OLD_BOS_RANCH, 0
# 1311 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 3
# 1312 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1313 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1314 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1315 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1316 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1317 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1318 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1319 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1320 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1321 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1322 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1323 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1324 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 15
# 1325 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1326 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1327 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 11
# 1328 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1329 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 1330 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1331 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten6
# 1332 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1333 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1334 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1335 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1336 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1337 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 1338 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1339 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1340 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1341 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1342 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1343 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1344 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1345 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1346 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1347 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1348 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1349 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1350 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1351 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1352 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepRight1
# 1353 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1354 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 1355 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1356 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1357 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1358 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1359 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1360 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1361 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Oshawott
# 1362 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1363 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1364 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1365 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 1366 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1367 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1368 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1369 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1370 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1371 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
# 1372 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_FOLLOWERS
# 1373 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PS_HIDE_DAD
# 1374 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_RH1F_HIDE_MAMAW
# 1375 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_MAMAW
# 1376 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_HF_HIDE_RIVAL_MIKE
# 1377 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_ITEM_WHH_MYSTIC_WATER
# 1378 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBH1F_HIDE_BO
# 1379 "data/maps/Old_Bos_Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE
	goto OBR_ChooseOshawott_1

OBR_ChooseOshawott_6:
# 1291 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1292 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1293 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseOshawott_5


OBR_UpdateMetatiles::
# 1389 "data/maps/Old_Bos_Ranch/scripts.pory"
	call OBR_CheckLogFlag
# 1390 "data/maps/Old_Bos_Ranch/scripts.pory"
	call CheckFenceFlag
# 1391 "data/maps/Old_Bos_Ranch/scripts.pory"
	call OBR_CheckDoorLock
# 1392 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


CheckFenceFlag::
# 1397 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_OBR_FENCE_BROKEN, CheckFenceFlag_2
CheckFenceFlag_1:
	return

CheckFenceFlag_2:
# 1398 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 1399 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 1400 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
	goto CheckFenceFlag_1


OBR_CheckDoorLock::
# 1408 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, OBR_CheckDoorLock_2
OBR_CheckDoorLock_1:
	return

OBR_CheckDoorLock_2:
# 1409 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
	goto OBR_CheckDoorLock_1


OBR_CheckLogFlag::
# 1417 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_OBR_REMOVE_LOG, OBR_CheckLogFlag_2
OBR_CheckLogFlag_1:
	return

OBR_CheckLogFlag_2:
# 1418 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 1419 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
	goto OBR_CheckLogFlag_1


# 1433 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1:
# 1434 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1435 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 1438 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1_B:
# 1439 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1439 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1440 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
	step_end

# 1443 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2:
# 1444 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1445 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1445 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1445 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1446 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1446 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1447 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1450 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2_B:
# 1451 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1452 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1452 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1453 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1453 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1454 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1454 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1455 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1458 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike3:
# 1459 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1459 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1459 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1462 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike4:
# 1463 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike5:
# 1467 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1468 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1471 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike6:
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_left
# 1473 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_down
# 1474 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1477 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike7:
# 1478 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1478 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1478 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1478 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1479 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1479 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1479 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
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
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1483 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1483 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1485 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1485 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1485 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1485 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1488 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike8:
# 1489 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1490 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_right
	step_end

# 1493 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike9:
# 1494 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1495 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1498 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike10:
# 1499 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1499 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1499 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1500 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1501 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1501 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
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
	step_end

# 1507 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike11:
# 1508 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1508 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1509 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1509 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1510 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1511 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1512 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1515 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike12:
# 1516 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1517 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1520 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToLitten:
# 1521 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1521 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1524 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToTurtwig:
# 1525 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1526 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1527 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1530 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToOshawott:
# 1531 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1532 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1533 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1536 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Turtwig:
# 1537 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1537 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1538 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1538 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1538 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1538 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
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
	step_end

# 1543 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Litten:
# 1544 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1544 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1545 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1545 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1545 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
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
# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1547 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1550 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Oshawott:
# 1551 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1551 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1552 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1552 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1552 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1552 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1552 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
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
	step_end

# 1559 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1:
# 1560 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1560 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1561 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1561 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1561 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1562 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1562 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1566 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1_B:
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1568 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1568 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1569 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1569 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1570 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1570 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1571 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1574 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player2:
# 1575 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1575 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1575 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1578 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player3:
# 1579 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1579 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1579 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1579 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1579 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1580 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1580 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1580 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
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
# 1583 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1584 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1584 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1589 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player4:
# 1590 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1590 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1593 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player5:
# 1594 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1595 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1599 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player6:
# 1600 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1601 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1602 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1602 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1602 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1602 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1602 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1608 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player7:
# 1609 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1610 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1610 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1611 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1612 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1612 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1613 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1613 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1616 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1621 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan1:
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1623 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1623 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1623 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 1626 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan2:
# 1627 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1627 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1627 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1627 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1627 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 1630 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan3:
# 1631 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1631 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_diag_southeast
# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 1635 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan4:
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1639 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan5:
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1643 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan6:
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1645 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1645 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1646 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1647 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1647 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1648 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1648 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1648 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1648 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1648 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1649 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
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
	step_end

# 1656 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan7:
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1657 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1658 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1658 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1658 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1658 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1661 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan8:
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
	step_end

# 1665 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan8_R:
# 1666 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
# 1666 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
# 1666 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
	step_end

# 1669 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan9:
# 1670 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
# 1670 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
# 1670 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
	step_end

# 1673 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan9_R:
# 1674 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1674 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1674 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
	step_end

# 1679 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten1:
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1681 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1684 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten2:
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1688 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten3:
# 1689 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1689 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1689 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1691 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1693 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1693 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1693 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1693 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1693 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
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
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1702 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten4:
# 1703 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1703 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1703 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1703 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1703 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1707 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
	step_end

# 1710 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten5:
# 1711 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
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
	walk_down
# 1715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1717 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1718 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1718 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1719 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1722 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten6:
# 1723 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1723 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1724 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1726 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1726 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1727 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1727 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1728 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1728 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1728 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1728 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1728 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig1:
# 1732 "data/maps/Old_Bos_Ranch/scripts.pory"
	slide_left
# 1733 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1736 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig2:
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1738 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1738 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1740 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1741 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1742 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1743 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1743 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1743 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1743 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1743 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1743 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1746 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig3:
# 1747 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1748 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1748 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1748 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1748 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1748 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1752 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1755 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig4:
# 1756 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1756 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1757 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1758 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1758 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1760 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1760 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1762 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1763 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1764 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1767 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig5:
# 1768 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1768 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1773 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1773 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1773 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1773 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1773 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1776 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott1:
# 1777 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1777 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1777 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1777 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1778 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1778 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1779 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1780 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1781 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1782 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1786 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott2:
# 1787 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1787 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1787 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1787 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1791 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1791 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1792 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_right
	step_end

# 1795 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott3:
# 1796 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1797 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1797 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1798 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1798 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1799 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1799 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1800 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1801 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1802 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1802 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1802 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1803 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1806 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott4:
# 1807 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1807 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1807 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1807 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1807 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1808 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1808 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1809 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1809 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1810 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1810 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1810 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1810 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1810 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1815 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Bo1:
# 1816 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1817 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1820 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Bo2:
# 1821 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1821 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1821 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1822 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1822 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
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
# 1826 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1826 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1826 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 660 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Old Bo$"

OBR_ChooseTurtwig_Text_0:
# 994 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseTurtwig_Text_1:
# 1019 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_ChooseLitten_Text_0:
# 1127 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseLitten_Text_1:
# 1152 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_ChooseOshawott_Text_0:
# 1259 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseOshawott_Text_1:
# 1284 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_T_Mike1::
# 1837 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Haha! Too slow again!\n"
	.string "Maybe next time, huh?\p"
	.string "Just messin' with ya, {PLAYER}.\p"
	.string "Let's get this tape back to Bo!$"

OBR_T_Mike2::
# 1844 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... Huh.\n"
	.string "{PAUSE 20}I guess Bo isn't home right now.\p"
	.string "Let's just wait here for a little while,\n"
	.string "{PLAYER}, I'm sure he'll be back soon.$"

OBR_T_Mike3::
# 1851 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Look how adorable that Litten is,\n"
	.string "{PLAYER}!\p"
	.string "We gotta go over and say hello!$"

OBR_T_Mike4::
# 1857 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Wha- wha- WHAT??!!$"

OBR_T_Mike5::
# 1861 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}, did you just see that?!\p"
	.string "I think those Pokemon just ran into the\n"
	.string "woods!\p"
	.string "We have to do something about this,\n"
	.string "{PLAYER}, we gotta get Bo's Pokemon\l"
	.string "back right away!$"

OBR_T_Mike6::
# 1870 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... {PAUSE 30}dang.$"

OBR_T_Mike7::
# 1874 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 1890 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, you're brave, {PLAYER}!$"

OBR_T_Mike9::
# 1894 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Alright, {PLAYER}, be quick!\n"
	.string "That repel won't last forever!$"

OBR_T_Mike10::
# 1899 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Ah jeez!\n"
	.string "Oh man I'm so sorry, {PLAYER}!\p"
	.string "Dang I can't believe my hand slipped\n"
	.string "like that!\p"
	.string "You better get going though, {PLAYER},\n"
	.string "that repel doesn't last forever!$"

OBR_T_Mike11::
# 1908 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Uh... {PAUSE 30}{PLAYER}, where are you going?!\p"
	.string "Go find Bo's Pokemon before the repel\n"
	.string "runs out!$"

OBR_T_Mike12::
# 1914 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Looks like we're still missin' two\n"
	.string "Pokemon over here, {PLAYER}!$"

OBR_T_Mike13::
# 1919 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Only one more, {PLAYER}!\n"
	.string "Hurry, before that repel wears off!$"

OBR_T_Mike14::
# 1924 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Awesome job, {PLAYER}!\p"
	.string "You're amazing, I can't believe you're\n"
	.string "brave enough to go and do that all by\l"
	.string "yourself!\p"
	.string "Now let's get these sneaky Pokemon\n"
	.string "back where they belong!$"

OBR_T_Mike15::
# 1933 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Hey, {PLAYER}, I think I see Ol' Bo up\n"
	.string "ahead!$"

OBR_T_Mike16::
# 1938 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "It was all {PLAYER}, Bo!\p"
	.string "It should be made into a comic book, it\n"
	.string "was incredible!\p"
	.string "I sprayed {PLAYER} with a repel and\n"
	.string "without a second thought, {PLAYER} ran\l"
	.string "into the woods and rescued them!$"

OBR_T_Mike17::
# 1947 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 1959 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "YES!\n"
	.string "Of course, yes!\p"
	.string "We're gonna take such good care of\n"
	.string "them Bo, we promise!$"

OBR_T_Mike19::
# 1966 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "We super promise don't we, {PLAYER}?!$"

OBR_T_Mike20::
# 1970 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, Bo thank you so much!\p"
	.string "Once me and {PLAYER} are super famous\n"
	.string "we're gonna build you a huge addition to\l"
	.string "the ranch!$"

OBR_T_Mike21::
# 1977 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}... {PAUSE 30}you should pick first.\p"
	.string "The way you rushed into action was so\n"
	.string "cool... {PAUSE 30}I wish I could be more like that.\p"
	.string "This only happened because of you,\n"
	.string "{PLAYER}, go ahead!$"

OBR_T_Mike23::
# 1985 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 2001 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Alright, OK!\n"
	.string "I choose this one!!$"

OBR_T_Bo1::
# 2006 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Mike, {PLAYER}!\p"
	.string "Boy am I glad to see youse guys were\n"
	.string "'round when them buggers made their\l"
	.string "escape, HAH!\p"
	.string "How'd youse get 'em back?\p"
	.string "If they ran back in them woods like\n"
	.string "usual I know you twos don't have any\l"
	.string "Pokemon to defend yerselves!$"

OBR_T_Bo2::
# 2017 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "HAHA! Impressive, {PLAYER}!\n"
	.string "Yer sure a brave young gun aren't ya?\p"
	.string "Say... {PAUSE 30}ya'll are always borrowin' from my\n"
	.string "battle tape collection.\p"
	.string "Am I right in assumin' yous want to have\n"
	.string "real battles of yer own someday?$"

OBR_T_Bo3::
# 2027 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 2040 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "HAH! That's nice lad, but Old Bo can\n"
	.string "barely keep track of the Pokemon he's\l"
	.string "got!\p"
	.string "Youse just focus on having fun on yer\n"
	.string "adventures, that's all any young gun\l"
	.string "trainer should be wantin'!\p"
	.string "Well, alrighty then!\n"
	.string "Who's gonna pick first?!$"

OBR_T_Bo5::
# 2051 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Well, you heard 'em, {PLAYER}.\n"
	.string "Go on n' choose yer Pokemon!\p"
	.string "Here's a PokeBall to hold 'em in.$"

OBR_T_Bo6::
# 2057 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Where ya goin', {PLAYER}?\n"
	.string "Come on back n' pick a Pokemon!$"

OBR_T_Bo7::
# 2062 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Don't yous worry about that lil' feller.\n"
	.string "I'll be sure to find a good home for 'em.\p"
	.string "Anways, y'all take care of those\n"
	.string "Pokemon, if ya do they'll surely grow up\l"
	.string "nice n' strong!\p"
	.string "Alrighty then, I'm gonna head inside for\n"
	.string "a glass o' sweet tea.\p"
	.string "See y'all young guns later!$"

OBR_T_System1::
# 2073 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mike {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}sprayed the repel on {PLAYER}.$"

OBR_T_System2::
# 2077 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} recieved one PokeBall!$"

Give_Turtwig_Nickname::
# 2081 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

Give_Litten_Nickname::
# 2085 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

Give_Oshawott_Nickname::
# 2089 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"
