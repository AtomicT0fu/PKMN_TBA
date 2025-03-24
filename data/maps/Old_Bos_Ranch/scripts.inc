Old_Bos_Ranch_MapScripts::
# 2 "data/maps/Old_Bos_Ranch/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CheckFenceFlag
# 3 "data/maps/Old_Bos_Ranch/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Old_Bos_Ranch_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Old_Bos_Ranch_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Old_Bos_Ranch/scripts.pory"
	map_script_2 VAR_WHH_STARTERS, 3, OBR_AllStartersFound
	.2byte 0


OBR_Mike_FollowA::
# 9 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_WEST
# 10 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 11 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 12 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 13 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 14 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 15 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike1
# 16 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 17 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 18 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 19 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike1
# 20 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 21 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 22 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike2
# 23 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player1
# 24 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 25 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 26 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 27 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 28 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 29 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 30 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 31 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 80
# 32 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 33 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 34 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 35 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 36 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 37 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 38 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 39 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Question
# 40 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 41 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 42 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 43 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 44 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 45 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike2
# 46 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 47 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 48 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 49 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan1
# 50 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 51 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 52 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 53 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 54 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 55 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 56 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 57 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 58 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 59 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 60 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Up
# 61 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 62 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 63 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Up
# 64 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 65 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 66 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Ponyta1
# 67 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_Ponyta1
# 68 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 69 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_WEST
# 70 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 6, DIR_WEST
# 71 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 72 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_PONYTA, 0
# 73 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 74 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 75 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 76 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 77 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 78 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_PONYTA, 0
# 79 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 80 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_EAST
# 81 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 82 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 83 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 84 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 85 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 86 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 87 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan2
# 88 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 89 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 90 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 91 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 92 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 93 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 94 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 95 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike3
# 96 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 97 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 98 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike3
# 99 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player2
# 100 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 101 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 102 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_PONYTA, 0
# 103 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 104 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 105 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 106 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 107 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 108 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 109 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan3
# 110 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 111 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 112 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 113 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 114 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
# 115 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_EFFECTIVE
# 116 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Mudbray1
# 117 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 118 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_FENCE_BROKEN
# 119 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 120 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 121 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_EAST
# 122 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 123 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 124 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Right
# 125 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 126 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 127 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Left
# 128 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 129 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 130 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Mudbray2
# 131 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, OBR_M_Skiddo1
# 132 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 133 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 5
# 134 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 6
# 135 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_SKIDDO_AND_MUDRBAY
# 136 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan4
# 137 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 138 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 139 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 7, DIR_SOUTH
# 140 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 141 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 142 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 143 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 144 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 145 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Ponyta2
# 146 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan5
# 147 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 148 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 8
# 149 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE
# 150 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 151 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 9
# 152 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 153 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Ponyta3
# 154 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan6
# 155 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 156 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 7
# 157 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_PONYTA
# 158 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 159 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 160 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 161 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 162 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
# 163 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 164 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, Univ_Exclam
# 165 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 166 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 167 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike4
# 168 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 169 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 170 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 171 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike4
# 172 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 173 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 174 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike5
# 175 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 176 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 177 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 178 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 179 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike5
# 180 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 181 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 182 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike6
# 183 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 184 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike7
# 185 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player3
# 186 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 187 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 188 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike6
# 189 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 190 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 191 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 192 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_SOUTH
# 193 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 194 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 195 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike7, MSGBOX_YESNO
# 196 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_Mike_FollowA_2
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
	msgbox OBR_T_Mike10
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
OBR_Mike_FollowA_1:
# 246 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 247 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_Mike_FollowA_2:
# 197 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 198 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike8
# 199 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 200 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 201 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 202 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 203 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 204 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 205 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 206 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 207 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 208 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 209 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 210 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 211 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike9
# 212 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 213 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 214 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 215 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 216 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 217 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 218 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 219 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 220 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 221 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
	goto OBR_Mike_FollowA_1


OBR_Mike_FollowB::
# 252 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_WEST
# 253 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 254 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 255 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 256 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 257 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 258 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike1_B
# 259 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 260 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 261 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 262 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 263 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike1
# 264 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 265 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 266 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike2_B
# 267 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player1_B
# 268 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 269 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 270 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 271 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 272 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 273 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 274 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 275 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 80
# 276 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 277 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 278 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 279 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 280 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_MUD_BALL
# 281 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 282 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 283 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Question
# 284 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 285 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 286 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 287 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 288 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 289 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike2
# 290 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 291 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 292 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 293 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan1
# 294 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 295 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 296 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 297 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 298 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 299 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 300 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 301 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 302 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 303 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 304 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Up
# 305 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 306 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 307 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Up
# 308 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 309 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 310 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Ponyta1
# 311 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_Ponyta1
# 312 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 313 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_WEST
# 314 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 6, DIR_WEST
# 315 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 316 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_PONYTA, 0
# 317 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 318 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 319 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 320 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 321 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 322 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_PONYTA, 0
# 323 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 324 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_EAST
# 325 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 326 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 327 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 328 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, Univ_Exclam
# 329 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_Exclam
# 330 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 331 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan2
# 332 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 333 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 334 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 335 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 8, DIR_SOUTH
# 336 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 337 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 338 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 339 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike3
# 340 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 341 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 342 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 8, OBR_M_Mike3
# 343 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player2
# 344 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 345 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 346 "data/maps/Old_Bos_Ranch/scripts.pory"
	playmoncry SPECIES_PONYTA, 0
# 347 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmoncry
# 348 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 349 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Left
# 350 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 351 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 352 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 353 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan3
# 354 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 355 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 356 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 357 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 358 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
# 359 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_EFFECTIVE
# 360 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Mudbray1
# 361 "data/maps/Old_Bos_Ranch/scripts.pory"
	special DrawWholeMapView
# 362 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_FENCE_BROKEN
# 363 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 364 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 365 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 5, DIR_EAST
# 366 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 367 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 368 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, Univ_JumpIP_1Right
# 369 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 370 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 371 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, Univ_JumpIP_1Left
# 372 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 373 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 374 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 5, OBR_M_Mudbray2
# 375 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 6, OBR_M_Skiddo1
# 376 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 377 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 5
# 378 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 6
# 379 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_SKIDDO_AND_MUDRBAY
# 380 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan4
# 381 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 382 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 383 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 7, DIR_SOUTH
# 384 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 385 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 386 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, Univ_JumpIP_1Down
# 387 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 388 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 389 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Ponyta2
# 390 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan5
# 391 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 392 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 8
# 393 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE
# 394 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 395 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 9
# 396 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 397 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 7, OBR_M_Ponyta3
# 398 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan6
# 399 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 7
# 400 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 7
# 401 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_PONYTA
# 402 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 403 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OBR_M_CamPan7
# 404 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 405 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 406 "data/maps/Old_Bos_Ranch/scripts.pory"
	playbgm MUS_HELP, FALSE
# 407 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_PIN
# 408 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, Univ_Exclam
# 409 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 410 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 411 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike4
# 412 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 413 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 414 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 415 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike4
# 416 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 417 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 418 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike5
# 419 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 420 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 421 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 422 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 423 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike5
# 424 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 425 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 426 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike6
# 427 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 9
# 428 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike7
# 429 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player3
# 430 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 431 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 432 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike6
# 433 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 434 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 435 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 60
# 436 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_SOUTH
# 437 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 30
# 438 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 439 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike7, MSGBOX_YESNO
# 440 "data/maps/Old_Bos_Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OBR_Mike_FollowB_2
# 468 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 469 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 470 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 471 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 472 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 473 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 474 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 475 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 476 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 477 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 478 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike10
# 479 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 480 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 481 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 482 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 483 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 484 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 485 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 486 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 487 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 488 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
OBR_Mike_FollowB_1:
# 490 "data/maps/Old_Bos_Ranch/scripts.pory"
	setvar VAR_ADVENTURE_START, 15
# 491 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end

OBR_Mike_FollowB_2:
# 441 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 442 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike8
# 443 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 444 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 445 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 446 "data/maps/Old_Bos_Ranch/scripts.pory"
	playse SE_REPEL
# 447 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitse
# 448 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 449 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_System1
# 450 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 451 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 452 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 40
# 453 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 454 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 455 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike9
# 456 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 457 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 458 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement 9, OBR_M_Mike8
# 459 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OBR_M_Player4
# 460 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 461 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 9, DIR_NORTH
# 462 "data/maps/Old_Bos_Ranch/scripts.pory"
	clearflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 463 "data/maps/Old_Bos_Ranch/scripts.pory"
	addobject 10
# 464 "data/maps/Old_Bos_Ranch/scripts.pory"
	removeobject 9
# 465 "data/maps/Old_Bos_Ranch/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
	goto OBR_Mike_FollowB_1


OBR_Mike_Interact_ForestEntrance::
# 496 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 497 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 498 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 499 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 500 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 501 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 10
# 502 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackA::
# 507 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_WEST
# 508 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 509 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 510 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 511 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 512 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 513 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 514 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 515 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 516 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TurnBackB::
# 521 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_EAST
# 522 "data/maps/Old_Bos_Ranch/scripts.pory"
	delay 20
# 523 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 524 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike11
# 525 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 526 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 527 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 528 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 529 "data/maps/Old_Bos_Ranch/scripts.pory"
	turnobject 10, DIR_NORTH
# 530 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_OneStarterFound::
# 535 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 536 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 537 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 538 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 539 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike12
# 540 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 541 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 542 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 543 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 544 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 545 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 546 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 547 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_TwoStartersFound::
# 552 "data/maps/Old_Bos_Ranch/scripts.pory"
	special SpawnCameraObject
# 553 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 554 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 555 "data/maps/Old_Bos_Ranch/scripts.pory"
	speakername OBR_Mike_FollowA_Text_0
# 556 "data/maps/Old_Bos_Ranch/scripts.pory"
	msgbox OBR_T_Mike13
# 557 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmessage
# 558 "data/maps/Old_Bos_Ranch/scripts.pory"
	closemessage
# 559 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepUp1
# 560 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 561 "data/maps/Old_Bos_Ranch/scripts.pory"
	special RemoveCameraObject
# 562 "data/maps/Old_Bos_Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 563 "data/maps/Old_Bos_Ranch/scripts.pory"
	waitmovement 0
# 564 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


OBR_AllStartersFound::
# 569 "data/maps/Old_Bos_Ranch/scripts.pory"
	release
	end


CheckFenceFlag::
# 574 "data/maps/Old_Bos_Ranch/scripts.pory"
	goto_if_set FLAG_OBR_FENCE_BROKEN, CheckFenceFlag_2
CheckFenceFlag_1:
	end

CheckFenceFlag_2:
# 575 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 18, 0x267, TRUE
# 576 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 19, 0x000, FALSE
# 577 "data/maps/Old_Bos_Ranch/scripts.pory"
	setmetatile 30, 20, 0x25F, TRUE
	goto CheckFenceFlag_1


# 585 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1:
# 586 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
# 587 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 590 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike1_B:
# 591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 591 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 592 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_down
	step_end

# 595 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2:
# 596 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 597 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 597 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 597 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 598 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 598 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 599 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 602 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike2_B:
# 603 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 604 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 605 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 606 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 606 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 607 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 610 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike3:
# 611 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 611 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 611 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
	step_end

# 614 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike4:
# 615 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 618 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike5:
# 619 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_right
# 620 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_down
	step_end

# 623 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike6:
# 624 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_left
# 625 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_faster_down
# 626 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 629 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike7:
# 630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 630 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 631 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 631 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 631 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 632 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 633 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 633 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 634 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 635 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 635 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 636 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 637 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 637 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 637 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 637 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 640 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mike8:
# 641 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 642 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_right
	step_end

# 645 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1:
# 646 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 646 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 647 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 647 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 647 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 648 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 648 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 649 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 652 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player1_B:
# 653 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 653 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 654 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 654 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 655 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 655 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 656 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 656 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 657 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_up
	step_end

# 660 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player2:
# 661 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 661 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 661 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 664 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player3:
# 665 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 665 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 665 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 665 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 665 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 666 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 666 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 666 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 667 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 668 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 669 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 670 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 670 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 671 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 672 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 672 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 672 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 675 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Player4:
# 676 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 676 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
	step_end

# 679 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan1:
# 680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 680 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 681 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 684 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan2:
# 685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
# 685 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_left
	step_end

# 688 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan3:
# 689 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 689 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_right
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
# 690 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_slow_down
	step_end

# 693 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan4:
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 694 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 697 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan5:
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 698 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 701 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan6:
# 702 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 702 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 702 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 703 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 703 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 704 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 705 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 706 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 707 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 707 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 708 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 708 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 709 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 709 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 710 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 710 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 711 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 711 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
	step_end

# 714 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_CamPan7:
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 715 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_diag_northeast
# 716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
# 716 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_right
	step_end

# 719 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Ponyta1:
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 720 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_up
# 721 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 724 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Ponyta2:
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 725 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 728 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Ponyta3:
# 729 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 729 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 729 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 730 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 731 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 732 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 732 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 733 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 733 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 733 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 733 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 733 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 734 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 734 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 735 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 735 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 736 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 737 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 738 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 738 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_up
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 739 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
	step_end

# 742 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mudbray1:
# 743 "data/maps/Old_Bos_Ranch/scripts.pory"
	slide_left
# 744 "data/maps/Old_Bos_Ranch/scripts.pory"
	face_left
	step_end

# 747 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Mudbray2:
# 748 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 748 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 749 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 750 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 751 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 752 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 753 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

# 756 "data/maps/Old_Bos_Ranch/scripts.pory"
OBR_M_Skiddo1:
# 757 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 757 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 757 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 757 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 758 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 758 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 759 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 760 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 761 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_left
# 762 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 762 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 762 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 762 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 762 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
# 762 "data/maps/Old_Bos_Ranch/scripts.pory"
	walk_fast_down
	step_end

OBR_Mike_FollowA_Text_0:
# 18 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Mike$"

OBR_T_Mike1::
# 765 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Haha! Too slow again!\n"
	.string "Maybe next time, huh?\p"
	.string "Just messin' with ya, {PLAYER}.\p"
	.string "Let's get this tape back to Bo!$"

OBR_T_Mike2::
# 772 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... Huh.\n"
	.string "{PAUSE 20}I guess Bo isn't home right now.\p"
	.string "Let's just wait here for a little while,\n"
	.string "{PLAYER}, I'm sure he'll be back soon.$"

OBR_T_Mike3::
# 779 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Look how adorable that Ponyta is,\n"
	.string "{PLAYER}!\p"
	.string "We gotta go over and say hello!$"

OBR_T_Mike4::
# 785 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Wha- wha- WHAT??!!$"

OBR_T_Mike5::
# 789 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{PLAYER}, did you just see that?!\p"
	.string "I think those Pokemon just ran into the\n"
	.string "woods!\p"
	.string "We have to do something about this,\n"
	.string "{PLAYER}, we gotta get Bo's Pokemon\l"
	.string "back right away!$"

OBR_T_Mike6::
# 798 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "... {PAUSE 30}dang.$"

OBR_T_Mike7::
# 802 "data/maps/Old_Bos_Ranch/scripts.pory"
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
# 818 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Oh man, you're brave, {PLAYER}!$"

OBR_T_Mike9::
# 822 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Alright, {PLAYER}, be quick!\n"
	.string "That repel won't last forever!$"

OBR_T_Mike10::
# 827 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Ah jeez!\n"
	.string "Oh man I'm so sorry, {PLAYER}!\p"
	.string "Dang I can't believe my hand slipped\n"
	.string "like that!\p"
	.string "You better get going though, {PLAYER},\n"
	.string "that repel doesn't last forever!$"

OBR_T_Mike11::
# 836 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Uh... {PAUSE 30}{PLAYER}, where are you going?!\p"
	.string "Go find Bo's Pokemon before the repel\n"
	.string "runs out!$"

OBR_T_Mike12::
# 842 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Looks like we're still missin' two\n"
	.string "Pokemon over here, {PLAYER}!$"

OBR_T_Mike13::
# 847 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "Only one more, {PLAYER}!\n"
	.string "Hurry, before that repel wears off!$"

OBR_T_System1::
# 852 "data/maps/Old_Bos_Ranch/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mike {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}sprayed the repel on {PLAYER}.$"
