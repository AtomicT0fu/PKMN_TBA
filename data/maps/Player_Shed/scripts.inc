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
# 92 "data/maps/Player_Shed/scripts.pory"
	release
RedHerb_Collect_1:
	end

RedHerb_Collect_2:
# 82 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 83 "data/maps/Player_Shed/scripts.pory"
	setmetatile 8, 3, 0x205, TRUE
# 84 "data/maps/Player_Shed/scripts.pory"
	setmetatile 9, 3, 0x206, TRUE
# 85 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 86 "data/maps/Player_Shed/scripts.pory"
	waitse
# 87 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_RED_HERB
# 88 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_NO_INT_BINS
# 89 "data/maps/Player_Shed/scripts.pory"
	release
	goto RedHerb_Collect_1


RedHerb_Bin::
# 98 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_HERB, Player_Has_Red_Herb
# 99 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_NO_INT_BINS, Player_Carrying_Herb
# 100 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_RED_HERB, RedHerb_Collect
	return


Player_Has_Red_Herb::
# 104 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player1
# 105 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 106 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 107 "data/maps/Player_Shed/scripts.pory"
	release
	end


Player_Carrying_Herb::
# 112 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player2
# 113 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 114 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 115 "data/maps/Player_Shed/scripts.pory"
	release
	end


PS_NoExit_Trig::
# 120 "data/maps/Player_Shed/scripts.pory"
	lock
# 121 "data/maps/Player_Shed/scripts.pory"
	special SpawnCameraObject
# 122 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PS_CAM_1
# 123 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 124 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_SOUTH
# 125 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, Univ_Exclam
# 126 "data/maps/Player_Shed/scripts.pory"
	playse SE_PIN
# 127 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 128 "data/maps/Player_Shed/scripts.pory"
	waitse
# 129 "data/maps/Player_Shed/scripts.pory"
	delay 60
# 130 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 131 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad8
# 132 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 133 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 134 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 135 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 136 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 137 "data/maps/Player_Shed/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 138 "data/maps/Player_Shed/scripts.pory"
	special RemoveCameraObject
# 139 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end


# 144 "data/maps/Player_Shed/scripts.pory"
PS_Player_Walk1:
# 145 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 145 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

# 148 "data/maps/Player_Shed/scripts.pory"
PS_W_Player2:
# 149 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 149 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 150 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 151 "data/maps/Player_Shed/scripts.pory"
	face_up
	step_end

# 154 "data/maps/Player_Shed/scripts.pory"
PS_W_Player3:
# 155 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 155 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 155 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 156 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 157 "data/maps/Player_Shed/scripts.pory"
	face_left
	step_end

# 160 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad1:
# 161 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 161 "data/maps/Player_Shed/scripts.pory"
	walk_right
	step_end

# 164 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad2:
# 165 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 166 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 166 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 167 "data/maps/Player_Shed/scripts.pory"
	face_up
	step_end

# 170 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad3:
# 171 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 171 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 172 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 172 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 173 "data/maps/Player_Shed/scripts.pory"
	face_left
	step_end

# 176 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad4:
# 177 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 177 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 177 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 177 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 178 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 178 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 178 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

# 181 "data/maps/Player_Shed/scripts.pory"
PS_CAM_1:
# 182 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 182 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

PS_Dad_Intro_Text_0:
# 10 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Dad$"

PS_T_Dad1::
# 191 "data/maps/Player_Shed/scripts.pory"
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
# 203 "data/maps/Player_Shed/scripts.pory"
	.string "Over here we got our plucked herbs all\n"
	.string "sorted in them bins.$"

PS_T_Dad3::
# 208 "data/maps/Player_Shed/scripts.pory"
	.string "You 'member what the different colored\n"
	.string "herbs are for, don't ya?$"

PS_T_Dad4A::
# 213 "data/maps/Player_Shed/scripts.pory"
	.string "Haha, of course you would, {PLAYER}.\n"
	.string "I wouldn't expect anythin' less!\p"
	.string "Now, let's keep movin'.$"

PS_T_Dad4B::
# 219 "data/maps/Player_Shed/scripts.pory"
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
# 237 "data/maps/Player_Shed/scripts.pory"
	.string "Now here's the crown jewel of the farm!\n"
	.string "The Herb Processor Turbo 9000!\p"
	.string "This beauty takes our herbs and breaks\n"
	.string "'em down real nice into compact bricks.\p"
	.string "That way they're nice'n easy to handle.\p"
	.string "Them city boys got some soft hands...\p"
	.string "We wouldn't want them gettin' a splinter\n"
	.string "now would we? Haha!$"

PS_T_Dad6::
# 248 "data/maps/Player_Shed/scripts.pory"
	.string "Lastly, we got our packagin' area.\n"
	.string "Just drop the brick in the same colored\p"
	.string "box and we'll be good to go!$"

PS_T_Dad7::
# 254 "data/maps/Player_Shed/scripts.pory"
	.string "Alrighty then, {PLAYER}.\p"
	.string "I'm gonna open the loading door, you go\n"
	.string "ahead and throw them herbs in!$"

PS_T_Dad8::
# 260 "data/maps/Player_Shed/scripts.pory"
	.string "Where ya goin', {PLAYER}?\n"
	.string "We got work to do here!$"

PS_T_SYS1::
# 265 "data/maps/Player_Shed/scripts.pory"
	.string "Take the {COLOR RED}{SHADOW LIGHT_RED}Red Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_Player1::
# 269 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(Bin looks pretty empty...)$"

PS_T_Player2::
# 273 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(I should finish the batch before I\n"
	.string "move on...)\p"
	.string "(That's what Dad would do!)$"
