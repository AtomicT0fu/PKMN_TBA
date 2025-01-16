Player_Shed_MapScripts::
# 2 "data/maps/Player_Shed/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Player_Shed_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Player_Shed_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Player_Shed/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 4, PS_Dad_Intro
	.2byte 0


PS_Dad_Intro::
# 8 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_Player_Walk1
# 9 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 10 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 11 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad1
# 12 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 13 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 14 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad1
# 15 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 16 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Dad1
# 17 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 18 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 19 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad2
# 20 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 21 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 22 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_SOUTH
# 23 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 24 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 25 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad3, MSGBOX_YESNO
# 26 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PS_Dad_Intro_2
# 33 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 34 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad4B
# 35 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 36 "data/maps/Player_Shed/scripts.pory"
	closemessage
PS_Dad_Intro_1:
# 38 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad2
# 39 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Player2
# 40 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 41 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 42 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad5
# 43 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 44 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 45 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad3
# 46 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Player3
# 47 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 48 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 49 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad6
# 50 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 51 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 52 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 53 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 54 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 55 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad7
# 56 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 57 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 58 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad4
# 59 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 60 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 61 "data/maps/Player_Shed/scripts.pory"
	waitmovement 1
# 62 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 63 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 64 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22E, TRUE
# 65 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/Player_Shed/scripts.pory"
	waitse
# 67 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 68 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 69 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x225, TRUE
# 70 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x226, TRUE
# 71 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x227, TRUE
# 72 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 73 "data/maps/Player_Shed/scripts.pory"
	waitse
# 74 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 5
# 75 "data/maps/Player_Shed/scripts.pory"
	release
	end

PS_Dad_Intro_2:
# 27 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 28 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad4A
# 29 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 30 "data/maps/Player_Shed/scripts.pory"
	closemessage
	goto PS_Dad_Intro_1


RedHerb_Collect::
# 80 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS1, MSGBOX_YESNO
# 81 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RedHerb_Collect_2
# 93 "data/maps/Player_Shed/scripts.pory"
	release
RedHerb_Collect_1:
	end

RedHerb_Collect_2:
# 82 "data/maps/Player_Shed/scripts.pory"
	setmetatile 8, 3, 0x205, TRUE
# 83 "data/maps/Player_Shed/scripts.pory"
	setmetatile 9, 3, 0x206, TRUE
# 84 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 85 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 86 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 87 "data/maps/Player_Shed/scripts.pory"
	waitse
# 88 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_RED_HERB
# 89 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_NO_INT_BINS
# 90 "data/maps/Player_Shed/scripts.pory"
	release
	goto RedHerb_Collect_1


RedHerb_Bin::
# 99 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_HERB, Player_Has_Red_Herb
# 100 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_NO_INT_BINS, Player_Carrying_Herb
# 101 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_RED_HERB, RedHerb_Collect
	return


Player_Has_Red_Herb::
# 105 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player1
# 106 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 107 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 108 "data/maps/Player_Shed/scripts.pory"
	release
	end


Player_Carrying_Herb::
# 113 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player2
# 114 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 115 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 116 "data/maps/Player_Shed/scripts.pory"
	release
	end


Machine_Interact::
# 121 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_HERB, Red_Herb_In_Machine
# 122 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_NO_INT_BINS, Player_Has_No_Herb
	return


Red_Herb_In_Machine::
# 126 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS2, MSGBOX_YESNO
# 127 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Red_Herb_In_Machine_2
# 213 "data/maps/Player_Shed/scripts.pory"
	release
Red_Herb_In_Machine_1:
	end

Red_Herb_In_Machine_2:
# 128 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 129 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x235, TRUE
# 130 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x236, TRUE
# 131 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x237, TRUE
# 132 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 133 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 134 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 135 "data/maps/Player_Shed/scripts.pory"
	waitse
# 136 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 137 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 138 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 139 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 140 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad9
# 141 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 142 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 143 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 144 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 145 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 146 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 147 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 148 "data/maps/Player_Shed/scripts.pory"
	waitse
# 149 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 150 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 151 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x220, TRUE
# 152 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x221, TRUE
# 153 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x222, TRUE
# 154 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 155 "data/maps/Player_Shed/scripts.pory"
	waitse
# 156 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 157 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 158 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 159 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 160 "data/maps/Player_Shed/scripts.pory"
	waitse
# 161 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 162 "data/maps/Player_Shed/scripts.pory"
	playse SE_ESCALATOR
# 163 "data/maps/Player_Shed/scripts.pory"
	waitse
# 164 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21E, TRUE
# 165 "data/maps/Player_Shed/scripts.pory"
	call PS_Grinder_Shake_Vars
# 166 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 167 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 168 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 169 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 170 "data/maps/Player_Shed/scripts.pory"
	special ShakeCamera
# 171 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_MOVE
# 172 "data/maps/Player_Shed/scripts.pory"
	delay 180
# 173 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_STOP
# 174 "data/maps/Player_Shed/scripts.pory"
	waitse
# 175 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 176 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 177 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 178 "data/maps/Player_Shed/scripts.pory"
	waitse
# 179 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 180 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 181 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 182 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 183 "data/maps/Player_Shed/scripts.pory"
	waitse
# 184 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 185 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22F, TRUE
# 186 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 187 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 188 "data/maps/Player_Shed/scripts.pory"
	waitse
# 189 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 190 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 191 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x234, TRUE
# 192 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 193 "data/maps/Player_Shed/scripts.pory"
	waitse
# 194 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 195 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 196 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 197 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad10
# 198 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 199 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 200 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Dad1
# 201 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 202 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 203 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x22D, TRUE
# 204 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 205 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 206 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 207 "data/maps/Player_Shed/scripts.pory"
	waitse
# 208 "data/maps/Player_Shed/scripts.pory"
	delay 50
# 209 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 210 "data/maps/Player_Shed/scripts.pory"
	release
	goto Red_Herb_In_Machine_1


Player_Has_No_Herb::
	return


PS_NoExit_Trig::
# 223 "data/maps/Player_Shed/scripts.pory"
	lock
# 224 "data/maps/Player_Shed/scripts.pory"
	special SpawnCameraObject
# 225 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PS_CAM_1
# 226 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 227 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_SOUTH
# 228 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, Univ_Exclam
# 229 "data/maps/Player_Shed/scripts.pory"
	playse SE_PIN
# 230 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 231 "data/maps/Player_Shed/scripts.pory"
	waitse
# 232 "data/maps/Player_Shed/scripts.pory"
	delay 60
# 233 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 234 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad8
# 235 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 236 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 237 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 238 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 239 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 240 "data/maps/Player_Shed/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 241 "data/maps/Player_Shed/scripts.pory"
	special RemoveCameraObject
# 242 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end


PS_Grinder_Shake_Vars::
# 247 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8004, 1
# 248 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8005, 1
# 249 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8006, 45
# 250 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8007, 5
	return


# 255 "data/maps/Player_Shed/scripts.pory"
PS_Player_Walk1:
# 256 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 256 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

# 259 "data/maps/Player_Shed/scripts.pory"
PS_W_Player2:
# 260 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 260 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 261 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 262 "data/maps/Player_Shed/scripts.pory"
	face_up
	step_end

# 265 "data/maps/Player_Shed/scripts.pory"
PS_W_Player3:
# 266 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 266 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 266 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 267 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 268 "data/maps/Player_Shed/scripts.pory"
	face_left
	step_end

# 271 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad1:
# 272 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 272 "data/maps/Player_Shed/scripts.pory"
	walk_right
	step_end

# 275 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad2:
# 276 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 277 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 277 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 278 "data/maps/Player_Shed/scripts.pory"
	face_up
	step_end

# 281 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad3:
# 282 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 282 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 283 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 283 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 284 "data/maps/Player_Shed/scripts.pory"
	face_left
	step_end

# 287 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad4:
# 288 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 288 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 288 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 288 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 289 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 289 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 289 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

# 292 "data/maps/Player_Shed/scripts.pory"
PS_CAM_1:
# 293 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 293 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

PS_Dad_Intro_Text_0:
# 10 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Dad$"

PS_T_Dad1::
# 302 "data/maps/Player_Shed/scripts.pory"
	.string "Oh boy, there sure aint nothin' like\n"
	.string "processin' a new batch huh, {PLAYER}?\p"
	.string "Now I know you've done this plenty of\n"
	.string "times, but I'm gonna give you the\p"
	.string "rundown again.\p"
	.string "One day you're gonna have to do this all\n"
	.string "on 'yer own!\p"
	.string "Your old man can't stay in prime\n"
	.string "condition forever ya know?$"

PS_T_Dad2::
# 314 "data/maps/Player_Shed/scripts.pory"
	.string "Over here we got our plucked herbs all\n"
	.string "sorted in them bins.$"

PS_T_Dad3::
# 319 "data/maps/Player_Shed/scripts.pory"
	.string "You 'member what the different colored\n"
	.string "herbs are for, don't ya?$"

PS_T_Dad4A::
# 324 "data/maps/Player_Shed/scripts.pory"
	.string "Haha, of course you would, {PLAYER}.\n"
	.string "I wouldn't expect anythin' less!\p"
	.string "Now, let's keep movin'.$"

PS_T_Dad4B::
# 330 "data/maps/Player_Shed/scripts.pory"
	.string "No problem kiddo.\n"
	.string "I'll learn ya up real quick!\p"
	.string "Our herbs are mighty important to big\n"
	.string "city supplement companies.\p"
	.string "All those items that them hot shot\n"
	.string "title contenders use on their Pokemon\p"
	.string "to make 'em real strong, depend on the\n"
	.string "herbs we grow here on the farm!\p"
	.string "Our Red Herbs are used fer a Pokemon's\n"
	.string "physical stats.\p"
	.string "The Green Herbs help boost the special\n"
	.string "stats.\p"
	.string "And the Yellow Herbs make a Pokemon\n"
	.string "lightnin' quick!\p"
	.string "Now lets keep movin'.$"

PS_T_Dad5::
# 348 "data/maps/Player_Shed/scripts.pory"
	.string "Now here's the crown jewel of the farm!\n"
	.string "The Herb Processor Turbo 9000!\p"
	.string "This beauty takes our herbs and breaks\n"
	.string "'em down real nice into compact bricks.\p"
	.string "That way they're nice'n easy to handle.\p"
	.string "Them city boys got some soft hands...\p"
	.string "We wouldn't want them gettin' a splinter\n"
	.string "now would we? Haha!$"

PS_T_Dad6::
# 359 "data/maps/Player_Shed/scripts.pory"
	.string "Lastly, we got our packagin' area.\n"
	.string "Just drop the brick in the same colored\p"
	.string "box and we'll be good to go!$"

PS_T_Dad7::
# 365 "data/maps/Player_Shed/scripts.pory"
	.string "Alrighty then, {PLAYER}.\p"
	.string "I'm gonna open the loading door, you go\n"
	.string "ahead and throw them herbs in!$"

PS_T_Dad8::
# 371 "data/maps/Player_Shed/scripts.pory"
	.string "Where ya goin', {PLAYER}?\n"
	.string "We got work to do here!$"

PS_T_Dad9::
# 376 "data/maps/Player_Shed/scripts.pory"
	.string "Nice work, {PLAYER}!\n"
	.string "Let me start 'er up!$"

PS_T_Dad10::
# 381 "data/maps/Player_Shed/scripts.pory"
	.string "One brick ready fer ya, {PLAYER}!$"

PS_T_SYS1::
# 385 "data/maps/Player_Shed/scripts.pory"
	.string "Take the {COLOR RED}{SHADOW LIGHT_RED}Red Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS2::
# 389 "data/maps/Player_Shed/scripts.pory"
	.string "Place the {COLOR RED}{SHADOW LIGHT_RED}Red Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}in the processor?$"

PS_T_Player1::
# 393 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(Bin looks pretty empty...)$"

PS_T_Player2::
# 397 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(I should finish the batch before I\n"
	.string "move on...)\p"
	.string "(That's what Dad would do!)$"
