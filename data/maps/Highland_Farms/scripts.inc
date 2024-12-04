Highland_Farms_MapScripts::
# 2 "data/maps/Highland_Farms/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CheckSproutFlag
	.byte 0


HF_DadIntro_A::
# 6 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 7 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1A
# 8 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 9 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 10 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 11 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 12 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 13 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 14 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 15 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 16 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 17 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 13, 0x00EF, TRUE
# 18 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 19 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 20 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 21 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 22 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 23 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 24 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 25 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 26 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 27 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 28 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 29 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 30 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 31 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 32 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 13, 0x0268, TRUE
# 33 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 34 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 35 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 36 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 37 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 38 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 39 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 40 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 41 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 42 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 43 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 44 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 45 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 46 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 47 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 13, 0x026A, TRUE
# 48 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 49 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 50 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 51 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 52 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 53 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 54 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 55 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 56 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 57 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 58 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 59 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 60 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 61 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 62 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 63 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 64 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 65 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1A
# 66 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 67 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 68 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 69 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 70 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 71 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 72 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 7
# 73 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 74 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 75 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 76 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 77 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 78 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 79 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 7
# 80 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 81 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 82 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 83 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 84 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 85 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 86 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 87 "data/maps/Highland_Farms/scripts.pory"
	release
	end


HF_DadIntro_B::
# 92 "data/maps/Highland_Farms/scripts.pory"
	special SpawnCameraObject
# 93 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_CAM_1B
# 94 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 95 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 96 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 97 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 98 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 99 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 100 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 101 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 102 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 103 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 13, 0x00EF, TRUE
# 104 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 105 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 106 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 107 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 108 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 109 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 110 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 111 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 112 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 113 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 114 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 115 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 116 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 117 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 118 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 13, 0x0268, TRUE
# 119 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 120 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 121 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 122 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 123 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad2
# 124 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 125 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad1
# 126 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 127 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 128 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 129 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 130 "data/maps/Highland_Farms/scripts.pory"
	playse SE_M_DIG
# 131 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 132 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 2
# 133 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 13, 0x026A, TRUE
# 134 "data/maps/Highland_Farms/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 135 "data/maps/Highland_Farms/scripts.pory"
	special DrawWholeMapView
# 136 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 137 "data/maps/Highland_Farms/scripts.pory"
	delay 30
# 138 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad3
# 139 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HF_M_Dad3
# 140 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 141 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 142 "data/maps/Highland_Farms/scripts.pory"
	turnobject 2, DIR_SOUTH
# 143 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_Exclam
# 144 "data/maps/Highland_Farms/scripts.pory"
	playse SE_PIN
# 145 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 146 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 147 "data/maps/Highland_Farms/scripts.pory"
	delay 60
# 148 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 149 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad1
# 150 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 151 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HF_M_Player1B
# 152 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 153 "data/maps/Highland_Farms/scripts.pory"
	speakername HF_DadIntro_A_Text_0
# 154 "data/maps/Highland_Farms/scripts.pory"
	msgbox HF_T_Dad2
# 155 "data/maps/Highland_Farms/scripts.pory"
	closemessage
# 156 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, HF_M_Dad4
# 157 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 158 "data/maps/Highland_Farms/scripts.pory"
	opendoor 45, 7
# 159 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 160 "data/maps/Highland_Farms/scripts.pory"
	applymovement 2, Univ_StepUp1
# 161 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 162 "data/maps/Highland_Farms/scripts.pory"
	playse SE_EXIT
# 163 "data/maps/Highland_Farms/scripts.pory"
	removeobject 2
# 164 "data/maps/Highland_Farms/scripts.pory"
	waitse
# 165 "data/maps/Highland_Farms/scripts.pory"
	closedoor 45, 7
# 166 "data/maps/Highland_Farms/scripts.pory"
	waitdooranim
# 167 "data/maps/Highland_Farms/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 168 "data/maps/Highland_Farms/scripts.pory"
	waitmovement 0
# 169 "data/maps/Highland_Farms/scripts.pory"
	special RemoveCameraObject
# 170 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_HIDE_DAD_1
# 171 "data/maps/Highland_Farms/scripts.pory"
	setflag FLAG_SPROUTS_PLANTED
# 172 "data/maps/Highland_Farms/scripts.pory"
	setvar VAR_ADVENTURE_START, 4
# 173 "data/maps/Highland_Farms/scripts.pory"
	release
	end


CheckSproutFlag::
# 178 "data/maps/Highland_Farms/scripts.pory"
	goto_if_set FLAG_SPROUTS_PLANTED, CheckSproutFlag_2
CheckSproutFlag_1:
	end

CheckSproutFlag_2:
# 179 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 47, 13, 0x00EF, TRUE
# 180 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 46, 13, 0x0268, TRUE
# 181 "data/maps/Highland_Farms/scripts.pory"
	setmetatile 45, 13, 0x026A, TRUE
	goto CheckSproutFlag_1


BattleMike::
# 189 "data/maps/Highland_Farms/scripts.pory"
	lock
# 190 "data/maps/Highland_Farms/scripts.pory"
	faceplayer
# 191 "data/maps/Highland_Farms/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE, LoseText
# 192 "data/maps/Highland_Farms/scripts.pory"
	release
	end


# 197 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1A:
# 198 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 198 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 198 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 198 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 199 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 199 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 199 "data/maps/Highland_Farms/scripts.pory"
	walk_right
	step_end

# 202 "data/maps/Highland_Farms/scripts.pory"
HF_CAM_1B:
# 203 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 203 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 203 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 203 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 204 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 204 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 204 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 204 "data/maps/Highland_Farms/scripts.pory"
	walk_right
	step_end

# 207 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad1:
# 208 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 208 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
# 208 "data/maps/Highland_Farms/scripts.pory"
	walk_in_place_up
	step_end

# 211 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad2:
# 212 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 213 "data/maps/Highland_Farms/scripts.pory"
	face_up
	step_end

# 216 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad3:
# 217 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 218 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 219 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 219 "data/maps/Highland_Farms/scripts.pory"
	walk_left
# 220 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 223 "data/maps/Highland_Farms/scripts.pory"
HF_M_Dad4:
# 224 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 224 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 224 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 225 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 225 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 225 "data/maps/Highland_Farms/scripts.pory"
	walk_right
# 226 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 229 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1A:
# 230 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 230 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 230 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 230 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 230 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

# 233 "data/maps/Highland_Farms/scripts.pory"
HF_M_Player1B:
# 234 "data/maps/Highland_Farms/scripts.pory"
	walk_fast_right
# 235 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 235 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 235 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 235 "data/maps/Highland_Farms/scripts.pory"
	walk_up
# 235 "data/maps/Highland_Farms/scripts.pory"
	walk_up
	step_end

HF_DadIntro_A_Text_0:
# 62 "data/maps/Highland_Farms/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Dad$"

HF_T_Dad1::
# 242 "data/maps/Highland_Farms/scripts.pory"
	.string "Mornin', {PLAYER}!\n"
	.string "Come on over here, we got a job to do.$"

HF_T_Dad2::
# 247 "data/maps/Highland_Farms/scripts.pory"
	.string "I already got them new plants in the \n"
	.string "ground, and the harvest herbs moved\p"
	.string "over into the shed.\p"
	.string "If you wanna meet me in there, we can\n"
	.string "get to processin' this new batch.\p"
	.string "I'll bet'cha we can get finished before\n"
	.string "Momma finishes lunch if we stick to it!\p"
	.string "It sure is great having your help out\n"
	.string "here, {PLAYER}.$"
