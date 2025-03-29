Old_Bos_Ranch_MapScripts::
# 2 "data/maps/Old_Bos_Ranch/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OBR_UpdateMetatiles
# 3 "data/maps/Old_Bos_Ranch/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OBR_Set_Music
	.byte 0


OBR_Set_Music::
# 11 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_WHH_STARTERS, 3
	goto_if_eq OBR_Set_Music_1
# 14 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_ADVENTURE_START, 15
	goto_if_eq OBR_Set_Music_2
# 18 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_FALLARBOR, TRUE
	return

OBR_Set_Music_1:
# 12 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_FALLARBOR, TRUE
	return

OBR_Set_Music_2:
# 15 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
	return


OBR_DoorIsLocked::
# 23 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, OBR_DoorIsLocked_2
# 31 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 32 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_DoorIsLocked_Text_1
# 33 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 34 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 35 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
OBR_DoorIsLocked_1:
# 37 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_DoorIsLocked_2:
# 24 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 25 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_DoorIsLocked_Text_0
# 26 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 27 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 28 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
	goto OBR_DoorIsLocked_1


OBR_Mike_FollowA::
# 42 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 43 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
# 44 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_REMOVE_LOG
# 45 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_WEST
# 46 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 47 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 48 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 49 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 50 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 51 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike1
# 52 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 53 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 54 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 55 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike1
# 56 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 57 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 58 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike2
# 59 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player1
# 60 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 61 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 62 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 63 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 64 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 65 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 66 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 67 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 80
# 68 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 69 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 70 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 71 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 72 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 73 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 74 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 75 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Question
# 76 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 77 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 78 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 79 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 80 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 81 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike2
# 82 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 83 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 84 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 85 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan1
# 86 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 87 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 88 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 89 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 90 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 91 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 92 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 93 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 94 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 95 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 96 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Up
# 97 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 98 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 99 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Up
# 100 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 101 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 102 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten1
# 103 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_Litten1
# 104 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 105 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_WEST
# 106 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 6, DIR_WEST
# 107 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 108 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 109 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 110 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 111 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 112 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 113 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 114 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 115 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 116 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_EAST
# 117 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 118 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 119 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 120 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 121 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 122 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 123 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan2
# 124 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 125 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 126 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 127 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 128 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 129 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 130 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 131 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike3
# 132 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 133 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 134 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike3
# 135 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player2
# 136 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 137 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 138 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 139 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 140 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 141 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 142 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 143 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 144 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 145 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan3
# 146 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 147 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 148 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 149 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 150 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
# 151 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_EFFECTIVE
# 152 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig1
# 153 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 154 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_FENCE_BROKEN
# 155 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 156 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 157 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_EAST
# 158 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 159 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 160 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Right
# 161 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 162 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 163 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Left
# 164 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 165 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 166 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig2
# 167 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, OBR_M_Oshawott1
# 168 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 169 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 5
# 170 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 6
# 171 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_OSHAWOTT_AND_TURTWIG
# 172 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan4
# 173 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 174 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 175 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 7, DIR_SOUTH
# 176 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 177 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 178 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 179 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 180 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 181 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten2
# 182 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan5
# 183 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 184 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 8
# 185 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE
# 186 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 187 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 9
# 188 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 189 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten3
# 190 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan6
# 191 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 192 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 7
# 193 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_LITTEN
# 194 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 195 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 196 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 197 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 198 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
# 199 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 200 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, Univ_Exclam
# 201 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 202 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 203 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike4
# 204 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 205 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 206 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 207 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike4
# 208 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 209 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 210 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike5
# 211 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 212 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 213 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 214 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 215 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike5
# 216 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 217 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 218 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike6
# 219 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 220 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike7
# 221 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player3
# 222 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 223 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 224 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike6
# 225 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 226 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 227 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 228 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_SOUTH
# 229 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 230 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 231 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike7, MSGBOX_YESNO
# 232 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_Mike_FollowA_2
# 260 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 261 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 262 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 263 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 264 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 265 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 266 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 267 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 268 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 269 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 270 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike10
# 271 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 272 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 273 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 274 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 275 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 276 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 277 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 278 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 279 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 280 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
OBR_Mike_FollowA_1:
# 282 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_ENCOUNTERS
# 283 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 284 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_Mike_FollowA_2:
# 233 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 234 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike8
# 235 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 236 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 237 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 238 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 239 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 240 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 241 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 242 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 243 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 244 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 245 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 246 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 247 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike9
# 248 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 249 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 250 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 251 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 252 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 253 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 254 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 255 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 256 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 257 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
	goto OBR_Mike_FollowA_1


OBR_Mike_FollowB::
# 289 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 290 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
# 291 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_REMOVE_LOG
# 292 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_WEST
# 293 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 294 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 295 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 296 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 297 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 298 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike1_B
# 299 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 300 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 301 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 302 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 303 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike1
# 304 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 305 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 306 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike2_B
# 307 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player1_B
# 308 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 309 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 310 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 311 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 312 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 313 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 314 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 315 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 80
# 316 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 317 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 318 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 319 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 320 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 321 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 322 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 323 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Question
# 324 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 325 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 326 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 327 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 328 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 329 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike2
# 330 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 331 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 332 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 333 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan1
# 334 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 335 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 336 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 337 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 338 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 339 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 340 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 341 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 342 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 343 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 344 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Up
# 345 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 346 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 347 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Up
# 348 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 349 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 350 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten1
# 351 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_Litten1
# 352 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 353 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_WEST
# 354 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 6, DIR_WEST
# 355 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 356 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 357 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 358 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 359 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 360 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 361 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 362 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 363 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 364 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_EAST
# 365 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 366 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 367 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 368 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 369 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 370 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 371 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan2
# 372 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 373 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 374 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 375 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 376 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 377 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 378 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 379 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike3
# 380 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 381 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 382 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike3
# 383 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player2
# 384 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 385 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 386 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 387 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 388 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 389 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 390 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 391 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 392 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 393 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan3
# 394 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 395 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 396 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 397 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 398 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
# 399 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_EFFECTIVE
# 400 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig1
# 401 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 402 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_FENCE_BROKEN
# 403 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 404 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 405 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_EAST
# 406 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 407 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 408 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Right
# 409 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 410 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 411 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Left
# 412 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 413 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 414 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Turtwig2
# 415 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, OBR_M_Oshawott1
# 416 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 417 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 5
# 418 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 6
# 419 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_OSHAWOTT_AND_TURTWIG
# 420 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan4
# 421 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 422 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 423 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 7, DIR_SOUTH
# 424 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 425 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 426 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 427 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 428 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 429 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten2
# 430 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan5
# 431 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 432 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 8
# 433 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE
# 434 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 435 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 9
# 436 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 437 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Litten3
# 438 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan6
# 439 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 440 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 7
# 441 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_LITTEN
# 442 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 443 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 444 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 445 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 446 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
# 447 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 448 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, Univ_Exclam
# 449 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 450 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 451 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike4
# 452 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 453 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 454 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 455 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike4
# 456 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 457 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 458 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike5
# 459 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 460 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 461 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 462 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 463 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike5
# 464 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 465 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 466 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike6
# 467 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 468 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike7
# 469 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player3
# 470 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 471 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 472 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike6
# 473 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 474 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 475 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 476 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_SOUTH
# 477 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 478 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 479 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike7, MSGBOX_YESNO
# 480 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_Mike_FollowB_2
# 508 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 509 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 510 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 511 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 512 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 513 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 514 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 515 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 516 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 517 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 518 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike10
# 519 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 520 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 521 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 522 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 523 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 524 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 525 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 526 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 527 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 528 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
OBR_Mike_FollowB_1:
# 530 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_PAUSE_ENCOUNTERS
# 531 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 532 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_Mike_FollowB_2:
# 481 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 482 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike8
# 483 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 484 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 485 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 486 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 487 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 488 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 489 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 490 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 491 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 492 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 493 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 494 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 495 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike9
# 496 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 497 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 498 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 499 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 500 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 501 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 502 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 503 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 504 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 505 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
	goto OBR_Mike_FollowB_1


OBR_Mike_Interact_ForestEntrance::
# 537 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 538 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 539 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 540 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 541 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 542 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 543 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackA::
# 548 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 549 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 550 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 551 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 552 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 553 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 554 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 555 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 556 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 557 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackB::
# 562 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 563 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 564 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 565 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 566 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 567 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 568 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 569 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 570 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 571 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_OneStarterFound::
# 576 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 577 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 578 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 579 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 580 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike12
# 581 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 582 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 583 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 584 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 585 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 586 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 587 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 588 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TwoStartersFound::
# 593 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 594 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 595 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 596 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 597 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike13
# 598 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 599 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 600 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 601 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 602 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 603 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 604 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 605 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_AllStartersFound_A::
# 610 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_SHOW_OLD_BO
# 611 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 14
# 612 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 16
# 613 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player5
# 614 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 615 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 616 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 617 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 618 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 619 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike14
# 620 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 621 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 622 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 623 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 624 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 625 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 626 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike9
# 627 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 628 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepDown1
# 629 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, Univ_StepDown1
# 630 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, Univ_StepRight1
# 631 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, Univ_StepRight1
# 632 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 633 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike10
# 634 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott2
# 635 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten4
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig3
# 637 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player6
# 638 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 639 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 640 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 641 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 642 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 643 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 644 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 645 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 646 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike15
# 647 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 648 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 649 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 650 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike11
# 651 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott3
# 652 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten5
# 653 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig4
# 654 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player7
# 655 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 13
# 656 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 657 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 658 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 659 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 660 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 661 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 662 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 663 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 664 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 665 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo1
# 666 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 667 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 668 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 669 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 670 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike16
# 672 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 673 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 674 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 675 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 676 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 677 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 678 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo1
# 679 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 680 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 682 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 683 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 684 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo2
# 685 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 686 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 687 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 688 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 689 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 691 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike17
# 692 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 693 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 695 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 696 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 697 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo3
# 699 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 700 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 701 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 702 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 703 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 704 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 705 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 706 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 10
# 707 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 708 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike12
# 709 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 710 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 711 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 712 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 713 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 714 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike18
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 716 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 717 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 718 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike19
# 719 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 721 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 722 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike20
# 723 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 724 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 726 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 727 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 728 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 729 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo4
# 730 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 731 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 732 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 733 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 734 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 735 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 736 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 737 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike21
# 738 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 740 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 741 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 742 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 743 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 744 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 745 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo5
# 746 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 747 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 748 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL
# 749 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 750 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 751 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 752 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 753 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System2
# 754 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 755 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 756 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 757 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 758 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 759 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 13, 27, 26
# 760 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 12, 26, 26
# 761 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 11, 25, 26
# 762 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 10, 26, 23
# 763 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 14, 25, 23
# 764 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 765 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_WHH_STARTERS, 4
# 766 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 17
# 767 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_AllStartersFound_B::
# 772 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_SHOW_OLD_BO
# 773 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 14
# 774 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 16
# 775 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 776 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 777 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 778 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 779 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 780 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 781 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike14
# 782 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 783 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 784 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 785 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 786 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 787 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 788 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike9
# 789 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 790 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepDown1
# 791 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, Univ_StepDown1
# 792 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, Univ_StepRight1
# 793 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, Univ_StepRight1
# 794 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 795 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike10
# 796 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott2
# 797 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten4
# 798 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig3
# 799 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player6
# 800 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 801 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 802 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 803 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 804 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 805 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 806 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 807 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 808 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike15
# 809 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 810 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 811 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 812 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike11
# 813 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott3
# 814 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten5
# 815 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig4
# 816 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player7
# 817 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 13
# 818 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 819 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 820 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 821 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 822 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 823 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 824 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNE1
# 825 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 826 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 827 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo1
# 828 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 829 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 830 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 831 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 832 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 833 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike16
# 834 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 835 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 836 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 837 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, Univ_Exclam
# 838 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 839 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 840 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo1
# 841 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 842 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 843 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 844 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 845 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 846 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo2
# 847 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 848 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 849 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 850 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 851 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 852 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 853 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike17
# 854 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 855 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 856 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 857 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 858 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 859 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 860 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo3
# 861 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 862 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 863 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_Exclam
# 864 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 865 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 866 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 867 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 868 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 10
# 869 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 870 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike12
# 871 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 872 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 873 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 874 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 875 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 876 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike18
# 877 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 878 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 879 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 880 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike19
# 881 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 882 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 883 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 884 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike20
# 885 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 886 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 887 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 888 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 889 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 890 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 891 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo4
# 892 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 893 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 894 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 895 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 896 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_SOUTH
# 897 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 898 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 899 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike21
# 900 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 901 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 902 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 903 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 904 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 905 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 906 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 907 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo5
# 908 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 909 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 910 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL
# 911 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 912 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 913 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 914 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 915 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System2
# 916 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 917 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 918 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 919 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 920 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 921 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 922 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 13, 27, 26
# 923 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 12, 26, 26
# 924 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 11, 25, 26
# 925 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 10, 26, 23
# 926 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectxyperm 14, 25, 23
# 927 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 928 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_WHH_STARTERS, 4
# 929 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 17
# 930 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_A::
# 935 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 936 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8
# 937 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 938 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_WEST
# 939 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 940 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 941 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 942 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 943 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 944 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8_R
# 945 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 946 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 947 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 948 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepDown1
# 949 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 950 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_B::
# 955 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 956 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan9
# 957 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 958 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_EAST
# 959 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 960 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 961 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 962 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 963 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 964 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan9_R
# 965 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 966 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 967 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 14, DIR_SOUTH
# 968 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepLeft1
# 969 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 970 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_StarterTurnAround_Trig_C::
# 975 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 976 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8_R
# 977 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 978 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 979 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 980 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo6
# 981 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 982 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 983 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan8
# 984 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 985 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 986 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepLeft1
# 987 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 988 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_ChooseTurtwig::
# 993 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 994 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 0
# 995 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 996 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 997 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 998 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseTurtwig_Text_0, MSGBOX_YESNO
# 999 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseTurtwig_2
# 1112 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseTurtwig_1:
# 1114 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseTurtwig_2:
# 1000 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1001 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 1002 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1003 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1004 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 15
# 1005 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 15, MAP_OLD_BOS_RANCH, 0
# 1006 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 3
# 1007 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1008 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1009 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1010 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1011 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1012 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1013 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1014 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1015 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1016 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1017 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1018 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1019 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 15
# 1020 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1021 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1022 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1023 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseTurtwig_Text_1
# 1024 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1025 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1026 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1027 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1028 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Turtwig_Nickname, MSGBOX_YESNO
# 1029 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseTurtwig_6
# 1035 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseTurtwig_5:
# 1037 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1038 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToLitten
# 1039 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1040 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1041 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1042 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1043 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1044 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1045 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1046 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1047 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1048 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 16
# 1049 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 16, MAP_OLD_BOS_RANCH, 0
# 1050 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 12, MAP_OLD_BOS_RANCH, 3
# 1051 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1052 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1053 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1054 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1055 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1056 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1057 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1058 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1059 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1060 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1061 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1062 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1063 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 16
# 1064 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1065 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1066 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 11
# 1067 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1068 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 1069 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 13, OBR_M_Oshawott4
# 1070 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1071 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1072 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1073 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1074 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1075 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 1076 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1077 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1078 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1079 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1080 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1081 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1082 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1083 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1084 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1085 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1086 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1087 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1088 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1089 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1090 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1091 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1092 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 1093 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1094 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1095 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1096 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1097 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1098 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1099 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Turtwig
# 1100 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1101 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1102 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1103 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 1104 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1105 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1106 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1107 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1108 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1109 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
	goto OBR_ChooseTurtwig_1

OBR_ChooseTurtwig_6:
# 1030 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1031 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1032 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseTurtwig_5


OBR_ChooseLitten::
# 1119 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 1120 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 1121 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1122 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 1123 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseLitten_Text_0, MSGBOX_YESNO
# 1124 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseLitten_2
# 1238 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseLitten_1:
# 1240 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseLitten_2:
# 1125 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1126 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 0
# 1127 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1128 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1129 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 16
# 1130 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 16, MAP_OLD_BOS_RANCH, 0
# 1131 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 12, MAP_OLD_BOS_RANCH, 3
# 1132 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1133 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1134 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1135 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1136 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1137 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1138 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1139 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1140 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1141 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1142 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1143 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1144 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 16
# 1145 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1146 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1147 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1148 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseLitten_Text_1
# 1149 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1150 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1151 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1152 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1153 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Litten_Nickname, MSGBOX_YESNO
# 1154 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseLitten_6
# 1160 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseLitten_5:
# 1162 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1163 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToOshawott
# 1164 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1165 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1166 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1167 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1168 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1169 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1170 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1171 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1172 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1173 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 17
# 1174 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 17, MAP_OLD_BOS_RANCH, 0
# 1175 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 13, MAP_OLD_BOS_RANCH, 3
# 1176 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1177 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1178 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1179 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1180 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1181 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1182 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1183 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1184 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1185 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1186 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1187 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1188 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 17
# 1189 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1190 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1191 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_TURTWIG, 11
# 1192 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1193 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1194 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1195 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 11, OBR_M_Turtwig5
# 1196 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1197 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1198 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1199 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1200 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1201 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 1202 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1203 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1204 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1205 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1206 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1207 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1208 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1209 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1210 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1211 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1212 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1213 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1214 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1215 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1216 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 1217 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1218 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepSE1
# 1219 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1220 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1221 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1222 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1223 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1224 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1225 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Litten
# 1226 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1227 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1228 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1229 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepLeft1
# 1230 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1231 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1232 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1233 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1234 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1235 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
	goto OBR_ChooseLitten_1

OBR_ChooseLitten_6:
# 1155 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1156 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1157 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseLitten_5


OBR_ChooseOshawott::
# 1245 "data/maps/Old_Bos_Ranch/scripts.pory"
	faceplayer
# 1246 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 1247 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1248 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 1249 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseOshawott_Text_0, MSGBOX_YESNO
# 1250 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseOshawott_2
# 1364 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseOshawott_1:
# 1366 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_ChooseOshawott_2:
# 1251 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1252 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 1253 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1254 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1255 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 17
# 1256 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 17, MAP_OLD_BOS_RANCH, 0
# 1257 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 13, MAP_OLD_BOS_RANCH, 3
# 1258 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1259 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1260 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1261 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1262 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 13
# 1263 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_LITTEN
# 1264 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1265 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1266 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1267 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1268 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1269 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1270 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 17
# 1271 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1272 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1273 "data/maps/Old_Bos_Ranch/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1274 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_ChooseOshawott_Text_1
# 1275 "data/maps/Old_Bos_Ranch/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY, ITEM_POKE_BALL
# 1276 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1277 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitfanfare
# 1278 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1279 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox Give_Oshawott_Nickname, MSGBOX_YESNO
# 1280 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_ChooseOshawott_6
# 1286 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
OBR_ChooseOshawott_5:
# 1288 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 1289 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike13_ToTurtwig
# 1290 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1291 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1292 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1293 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 1294 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1295 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike22
# 1296 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1297 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1298 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1299 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 15
# 1300 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 15, MAP_OLD_BOS_RANCH, 0
# 1301 "data/maps/Old_Bos_Ranch/scripts.pory"
	setobjectsubpriority 11, MAP_OLD_BOS_RANCH, 3
# 1302 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_THROW
# 1303 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1304 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1305 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BALL_OPEN
# 1306 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 11
# 1307 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OSHAWOTT
# 1308 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1309 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1310 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BALL_CLICK
# 1311 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1312 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1313 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_RG_BAG_POCKET
# 1314 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 15
# 1315 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 1316 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1317 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_LITTEN, 11
# 1318 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 1319 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 1320 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1321 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 12, OBR_M_Litten6
# 1322 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1323 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 12
# 1324 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_TURTWIG
# 1325 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 1326 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 1327 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepNW1
# 1328 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 1329 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 1330 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1331 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1332 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_AllStartersFound_A_Text_0
# 1333 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Bo7
# 1334 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1335 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1336 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 14, OBR_M_Bo2
# 1337 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1338 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 14
# 1339 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_SHOW_OLD_BO
# 1340 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1341 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 1342 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, Univ_StepRight1
# 1343 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 1344 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 1345 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1346 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 1347 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 1348 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike23
# 1349 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 1350 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 1351 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 10, OBR_M_Mike15_LeaveScene_Oshawott
# 1352 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1353 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 10
# 1354 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 1355 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepRight1
# 1356 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 1357 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 1358 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
# 1359 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 1360 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 18
# 1361 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_PAUSE_ENCOUNTERS
	goto OBR_ChooseOshawott_1

OBR_ChooseOshawott_6:
# 1281 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1282 "data/maps/Old_Bos_Ranch/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1283 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
	goto OBR_ChooseOshawott_5


OBR_UpdateMetatiles::
# 1371 "data/maps/Old_Bos_Ranch/scripts.pory"
	call OBR_CheckLogFlag
# 1372 "data/maps/Old_Bos_Ranch/scripts.pory"
	call CheckFenceFlag
# 1373 "data/maps/Old_Bos_Ranch/scripts.pory"
	call OBR_CheckDoorLock
# 1374 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


CheckFenceFlag::
# 1379 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_OBR_FENCE_BROKEN, CheckFenceFlag_2
CheckFenceFlag_1:
	return

CheckFenceFlag_2:
# 1380 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 1381 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 1382 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
	goto CheckFenceFlag_1


OBR_CheckDoorLock::
# 1390 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, OBR_CheckDoorLock_2
OBR_CheckDoorLock_1:
	return

OBR_CheckDoorLock_2:
# 1391 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 26, 8, 0x241, TRUE
	goto OBR_CheckDoorLock_1


OBR_CheckLogFlag::
# 1399 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_OBR_REMOVE_LOG, OBR_CheckLogFlag_2
OBR_CheckLogFlag_1:
	return

OBR_CheckLogFlag_2:
# 1400 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 6, 11, 0x004, FALSE
# 1401 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 7, 11, 0x000, FALSE
	goto OBR_CheckLogFlag_1


# 1415 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1:
# 1416 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1417 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 1420 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1_B:
# 1421 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1421 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1422 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
	step_end

# 1425 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2:
# 1426 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1427 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1427 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1427 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1428 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1428 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1429 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1432 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2_B:
# 1433 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1434 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1434 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1435 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1435 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1436 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1436 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1437 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1440 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike3:
# 1441 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1441 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1441 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1444 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike4:
# 1445 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1448 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike5:
# 1449 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1450 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1453 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike6:
# 1454 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_left
# 1455 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_down
# 1456 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1459 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike7:
# 1460 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1460 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1460 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1460 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1461 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1461 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1461 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1462 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1462 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1462 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1462 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1463 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1463 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1464 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1465 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1465 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1466 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1467 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1467 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1467 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1467 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1470 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike8:
# 1471 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1472 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_right
	step_end

# 1475 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike9:
# 1476 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1477 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1480 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike10:
# 1481 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1481 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1481 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1482 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1483 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1483 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1484 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1485 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1485 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1486 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1489 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike11:
# 1490 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1490 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1491 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1491 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1492 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1493 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1493 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1493 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1494 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1497 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike12:
# 1498 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1499 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1502 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToLitten:
# 1503 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1503 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1506 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToTurtwig:
# 1507 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1508 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1509 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1512 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike13_ToOshawott:
# 1513 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1514 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1515 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1518 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Turtwig:
# 1519 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1519 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1520 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1520 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1520 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1520 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1521 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1521 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1522 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1522 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1522 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1522 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1522 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1522 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1522 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1522 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1522 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1522 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1525 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Litten:
# 1526 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1526 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1527 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1527 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1527 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1528 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1529 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1529 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1529 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1529 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1529 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1529 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1529 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1529 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1529 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1529 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1532 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike15_LeaveScene_Oshawott:
# 1533 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1533 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1534 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1534 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1534 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1534 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1534 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1535 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1536 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1536 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1536 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1536 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1536 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1536 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1536 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1536 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1536 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 1536 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 1541 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1:
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1542 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1543 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1543 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1543 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1544 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1544 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1545 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1548 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1_B:
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1549 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1550 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1550 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1551 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1551 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1552 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1552 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1553 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1556 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player2:
# 1557 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1557 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1557 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1560 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player3:
# 1561 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1561 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1561 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1561 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1561 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1562 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1562 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1562 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1563 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1564 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1564 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1565 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1566 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1566 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
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
# 1567 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1568 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1568 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1568 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1571 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player4:
# 1572 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1572 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 1575 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player5:
# 1576 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1577 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1578 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1581 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player6:
# 1582 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1583 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1584 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1584 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1584 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1584 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1584 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1585 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1590 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player7:
# 1591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1592 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1592 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1593 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1594 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1594 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1595 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1595 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1596 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1597 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1597 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1598 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1603 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan1:
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 1608 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan2:
# 1609 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1609 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1609 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1609 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1609 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 1612 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan3:
# 1613 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1613 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 1614 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 1617 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan4:
# 1618 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1618 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1618 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1618 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1618 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1618 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1618 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1618 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1621 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan5:
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1622 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1625 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan6:
# 1626 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1626 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1626 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1627 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1627 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1628 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1629 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1629 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1631 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1631 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1633 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1633 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1635 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1635 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1638 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan7:
# 1639 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1639 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1639 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1639 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1639 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1639 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1639 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1640 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 1643 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan8:
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
# 1644 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southeast
	step_end

# 1647 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan8_R:
# 1648 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
# 1648 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
# 1648 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northwest
	step_end

# 1651 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan9:
# 1652 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
# 1652 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
# 1652 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_southwest
	step_end

# 1655 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan9_R:
# 1656 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1656 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 1656 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
	step_end

# 1661 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten1:
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1662 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1663 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1666 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten2:
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 1670 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten3:
# 1671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1672 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1672 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1673 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1674 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1674 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1675 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1675 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1675 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1675 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1675 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1676 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1676 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1677 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1677 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1678 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1678 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1679 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1679 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
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
	step_end

# 1684 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten4:
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1686 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1687 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1688 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1688 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1689 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
	step_end

# 1692 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten5:
# 1693 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1695 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1695 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1696 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1696 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1697 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1697 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1699 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1700 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1700 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1701 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1704 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Litten6:
# 1705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1707 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1707 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1707 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1708 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1708 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1709 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1709 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1710 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1710 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1710 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1710 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1710 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1713 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig1:
# 1714 "data/maps/Old_Bos_Ranch/scripts.pory"
	slide_left
# 1715 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 1718 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig2:
# 1719 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1719 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1721 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1722 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1723 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1724 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1728 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig3:
# 1729 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1732 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1732 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1733 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1733 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1734 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1737 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig4:
# 1738 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1738 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1740 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1740 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1741 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1741 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1742 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1742 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1743 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1744 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1745 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1746 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1749 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Turtwig5:
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1752 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1752 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1752 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1754 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1754 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1755 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1755 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1755 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1755 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1755 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1758 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott1:
# 1759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1760 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1760 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1762 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1763 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1764 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 1765 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 1768 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott2:
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1769 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1770 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1771 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1772 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1773 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1773 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1774 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_right
	step_end

# 1777 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott3:
# 1778 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1779 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1779 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1780 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1780 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1781 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1781 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1782 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1783 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 1784 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1784 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1784 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 1785 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 1788 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Oshawott4:
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1789 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1790 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1791 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1791 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_up
# 1792 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1792 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1792 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1792 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
# 1792 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_right
	step_end

# 1797 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Bo1:
# 1798 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1799 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 1802 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Bo2:
# 1803 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1803 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1803 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1804 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1804 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1805 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1805 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1806 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1806 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1807 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 1808 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1808 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 1808 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

OBR_DoorIsLocked_Text_0:
# 25 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "The door is locked.$"

OBR_DoorIsLocked_Text_1:
# 32 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "The door is unlocked.$"

OBR_Mike_FollowA_Text_0:
# 54 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

OBR_AllStartersFound_A_Text_0:
# 664 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Old Bo$"

OBR_ChooseTurtwig_Text_0:
# 998 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseTurtwig_Text_1:
# 1023 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_ChooseLitten_Text_0:
# 1123 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseLitten_Text_1:
# 1148 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_ChooseOshawott_Text_0:
# 1249 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Choose {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

OBR_ChooseOshawott_Text_1:
# 1274 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} received {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

OBR_T_Mike1::
# 1819 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Haha! Too slow again!\n"
	.string "Maybe next time, huh?\p"
	.string "Just messin' with ya, {PLAYER}.\p"
	.string "Let's get this tape back to Bo!$"

OBR_T_Mike2::
# 1826 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... Huh.\n"
	.string "{PAUSE 20}I guess Bo isn't home right now.\p"
	.string "Let's just wait here for a little while,\n"
	.string "{PLAYER}, I'm sure he'll be back soon.$"

OBR_T_Mike3::
# 1833 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Look how adorable that Litten is,\n"
	.string "{PLAYER}!\p"
	.string "We gotta go over and say hello!$"

OBR_T_Mike4::
# 1839 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Wha- wha- WHAT??!!$"

OBR_T_Mike5::
# 1843 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}, did you just see that?!\p"
	.string "I think those Pokemon just ran into the\n"
	.string "woods!\p"
	.string "We have to do something about this,\n"
	.string "{PLAYER}, we gotta get Bo's Pokemon\l"
	.string "back right away!$"

OBR_T_Mike6::
# 1852 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... {PAUSE 30}dang.$"

OBR_T_Mike7::
# 1856 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 1872 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, you're brave, {PLAYER}!$"

OBR_T_Mike9::
# 1876 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Alright, {PLAYER}, be quick!\n"
	.string "That repel won't last forever!$"

OBR_T_Mike10::
# 1881 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Ah jeez!\n"
	.string "Oh man I'm so sorry, {PLAYER}!\p"
	.string "Dang I can't believe my hand slipped\n"
	.string "like that!\p"
	.string "You better get going though, {PLAYER},\n"
	.string "that repel doesn't last forever!$"

OBR_T_Mike11::
# 1890 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Uh... {PAUSE 30}{PLAYER}, where are you going?!\p"
	.string "Go find Bo's Pokemon before the repel\n"
	.string "runs out!$"

OBR_T_Mike12::
# 1896 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Looks like we're still missin' two\n"
	.string "Pokemon over here, {PLAYER}!$"

OBR_T_Mike13::
# 1901 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Only one more, {PLAYER}!\n"
	.string "Hurry, before that repel wears off!$"

OBR_T_Mike14::
# 1906 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Awesome job, {PLAYER}!\p"
	.string "You're amazing, I can't believe you're\n"
	.string "brave enough to go and do that all by\l"
	.string "yourself!\p"
	.string "Now let's get these sneaky Pokemon\n"
	.string "back where they belong!$"

OBR_T_Mike15::
# 1915 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Hey, {PLAYER}, I think I see Ol' Bo up\n"
	.string "ahead!$"

OBR_T_Mike16::
# 1920 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "It was all {PLAYER}, Bo!\p"
	.string "It should be made into a comic book, it\n"
	.string "was incredible!\p"
	.string "I sprayed {PLAYER} with a repel and\n"
	.string "without a second thought, {PLAYER} ran\l"
	.string "into the woods and rescued them!$"

OBR_T_Mike17::
# 1929 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 1941 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "YES!\n"
	.string "Of course, yes!\p"
	.string "We're gonna take such good care of\n"
	.string "them Bo, we promise!$"

OBR_T_Mike19::
# 1948 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "We super promise don't we, {PLAYER}?!$"

OBR_T_Mike20::
# 1952 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, Bo thank you so much!\p"
	.string "Once me and {PLAYER} are super famous\n"
	.string "we're gonna build you a huge addition to\l"
	.string "the ranch!$"

OBR_T_Mike21::
# 1959 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}... {PAUSE 30}you should pick first.\p"
	.string "The way you rushed into action was so\n"
	.string "cool... {PAUSE 30}I wish I could be more like that.\p"
	.string "This only happened because of you,\n"
	.string "{PLAYER}, go ahead!$"

OBR_T_Mike23::
# 1967 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 1983 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Alright, OK!\n"
	.string "I choose this one!!$"

OBR_T_Bo1::
# 1988 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Mike, {PLAYER}!\p"
	.string "Boy am I glad to see youse guys were\n"
	.string "'round when them buggers made their\l"
	.string "escape, HAH!\p"
	.string "How'd youse get 'em back?\p"
	.string "If they ran back in them woods like\n"
	.string "usual I know you twos don't have any\l"
	.string "Pokemon to defend yerselves!$"

OBR_T_Bo2::
# 1999 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "HAHA! Impressive, {PLAYER}!\n"
	.string "Yer sure a brave young gun aren't ya?\p"
	.string "Say... {PAUSE 30}ya'll are always borrowin' from my\n"
	.string "battle tape collection.\p"
	.string "Am I right in assumin' yous want to have\n"
	.string "real battles of yer own someday?$"

OBR_T_Bo3::
# 2009 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 2022 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "HAH! That's nice lad, but Old Bo can\n"
	.string "barely keep track of the Pokemon he's\l"
	.string "got!\p"
	.string "Youse just focus on having fun on yer\n"
	.string "adventures, that's all any young gun\l"
	.string "trainer should be wantin'!\p"
	.string "Well, alrighty then!\n"
	.string "Who's gonna pick first?!$"

OBR_T_Bo5::
# 2033 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Well, you heard 'em, {PLAYER}.\n"
	.string "Go on n' choose yer Pokemon!\p"
	.string "Here's a PokeBall to hold 'em in.$"

OBR_T_Bo6::
# 2039 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Where ya goin', {PLAYER}?\n"
	.string "Come on back n' pick a Pokemon!$"

OBR_T_Bo7::
# 2044 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Don't yous worry about that lil' feller.\n"
	.string "I'll be sure to find a good home for 'em.\p"
	.string "Anways, y'all take care of those\n"
	.string "Pokemon, if ya do they'll surely grow up\l"
	.string "nice n' strong!\p"
	.string "Alrighty then, I'm gonna head inside for\n"
	.string "a glass o' sweet tea.\p"
	.string "See y'all young guns later!$"

OBR_T_System1::
# 2055 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mike {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}sprayed the repel on {PLAYER}.$"

OBR_T_System2::
# 2059 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER} recieved one PokeBall!$"

Give_Turtwig_Nickname::
# 2063 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR GREEN}{SHADOW LIGHT_GREEN}Turtwig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

Give_Litten_Nickname::
# 2067 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR RED}{SHADOW LIGHT_RED}Litten{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

Give_Oshawott_Nickname::
# 2071 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Give a nickname to {COLOR BLUE}{SHADOW LIGHT_BLUE}Oshawott{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"
