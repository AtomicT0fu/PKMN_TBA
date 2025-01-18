Player_Shed_MapScripts::
# 2 "data/maps/Player_Shed/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Check_Herbs_Complete
# 3 "data/maps/Player_Shed/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Player_Shed_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Player_Shed_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Player_Shed/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 4, PS_Dad_Intro
	.2byte 0


Check_Herbs_Complete::
# 9 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_ALL_HERBS_COMPLETE, Check_Herbs_Complete_2
Check_Herbs_Complete_1:
	end

Check_Herbs_Complete_2:
# 10 "data/maps/Player_Shed/scripts.pory"
	setmetatile 8, 3, 0x205, TRUE
# 11 "data/maps/Player_Shed/scripts.pory"
	setmetatile 9, 3, 0x206, TRUE
# 12 "data/maps/Player_Shed/scripts.pory"
	setmetatile 8, 5, 0x20D, TRUE
# 13 "data/maps/Player_Shed/scripts.pory"
	setmetatile 9, 5, 0x20E, TRUE
# 14 "data/maps/Player_Shed/scripts.pory"
	setmetatile 8, 7, 0x20D, TRUE
# 15 "data/maps/Player_Shed/scripts.pory"
	setmetatile 9, 7, 0x20E, TRUE
# 16 "data/maps/Player_Shed/scripts.pory"
	setmetatile 0, 4, 0x239, TRUE
# 17 "data/maps/Player_Shed/scripts.pory"
	setmetatile 0, 5, 0x23A, TRUE
# 18 "data/maps/Player_Shed/scripts.pory"
	setmetatile 0, 6, 0x238, TRUE
	goto Check_Herbs_Complete_1


PS_Dad_Interact::
# 26 "data/maps/Player_Shed/scripts.pory"
	faceplayer
# 27 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_ALL_HERBS_COMPLETE, PS_Dad_Interact_2
# 34 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_GREEN_BRICK, PS_Dad_Interact_3
# 34 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_BRICK, PS_Dad_Interact_3
# 34 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_YELLOW_BRICK, PS_Dad_Interact_3
# 43 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 44 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad16
# 45 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 46 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 47 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 48 "data/maps/Player_Shed/scripts.pory"
	release
PS_Dad_Interact_1:
	end

PS_Dad_Interact_2:
# 28 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 29 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad15
# 30 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 31 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 32 "data/maps/Player_Shed/scripts.pory"
	release
	goto PS_Dad_Interact_1

PS_Dad_Interact_3:
# 35 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 36 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad16
# 37 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 38 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 39 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 40 "data/maps/Player_Shed/scripts.pory"
	release
	goto PS_Dad_Interact_1


PS_Dad_Intro::
# 54 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_Player_Walk1
# 55 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 56 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 57 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad1
# 58 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 59 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 60 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad1
# 61 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 62 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Dad1
# 63 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 64 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 65 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad2
# 66 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 67 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 68 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_SOUTH
# 69 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 70 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 71 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad3, MSGBOX_YESNO
# 72 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PS_Dad_Intro_2
# 79 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 80 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad4B
# 81 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 82 "data/maps/Player_Shed/scripts.pory"
	closemessage
PS_Dad_Intro_1:
# 84 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad2
# 85 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Player2
# 86 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 87 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 88 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad5
# 89 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 90 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 91 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad3
# 92 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Player3
# 93 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 94 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 95 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad6
# 96 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 97 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 98 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 99 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 100 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 101 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad7
# 102 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 103 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 104 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad4
# 105 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 106 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 107 "data/maps/Player_Shed/scripts.pory"
	waitmovement 1
# 108 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 109 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 110 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22E, TRUE
# 111 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 112 "data/maps/Player_Shed/scripts.pory"
	waitse
# 113 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 114 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 115 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x225, TRUE
# 116 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x226, TRUE
# 117 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x227, TRUE
# 118 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 119 "data/maps/Player_Shed/scripts.pory"
	waitse
# 120 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 5
# 121 "data/maps/Player_Shed/scripts.pory"
	release
	end

PS_Dad_Intro_2:
# 73 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 74 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad4A
# 75 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 76 "data/maps/Player_Shed/scripts.pory"
	closemessage
	goto PS_Dad_Intro_1


RedHerb_Collect::
# 126 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS1_R, MSGBOX_YESNO
# 127 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RedHerb_Collect_2
# 139 "data/maps/Player_Shed/scripts.pory"
	release
RedHerb_Collect_1:
	end

RedHerb_Collect_2:
# 128 "data/maps/Player_Shed/scripts.pory"
	setmetatile 8, 3, 0x205, TRUE
# 129 "data/maps/Player_Shed/scripts.pory"
	setmetatile 9, 3, 0x206, TRUE
# 130 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 131 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 132 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 133 "data/maps/Player_Shed/scripts.pory"
	waitse
# 134 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_RED_HERB
# 135 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_PLAYER_HAS_HERBS
# 136 "data/maps/Player_Shed/scripts.pory"
	release
	goto RedHerb_Collect_1


YellowHerb_Collect::
# 145 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS1_Y, MSGBOX_YESNO
# 146 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq YellowHerb_Collect_2
# 158 "data/maps/Player_Shed/scripts.pory"
	release
YellowHerb_Collect_1:
	end

YellowHerb_Collect_2:
# 147 "data/maps/Player_Shed/scripts.pory"
	setmetatile 8, 5, 0x20D, TRUE
# 148 "data/maps/Player_Shed/scripts.pory"
	setmetatile 9, 5, 0x20E, TRUE
# 149 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 150 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 151 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 152 "data/maps/Player_Shed/scripts.pory"
	waitse
# 153 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_YELLOW_HERB
# 154 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_PLAYER_HAS_HERBS
# 155 "data/maps/Player_Shed/scripts.pory"
	release
	goto YellowHerb_Collect_1


GreenHerb_Collect::
# 164 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS1_G, MSGBOX_YESNO
# 165 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GreenHerb_Collect_2
# 177 "data/maps/Player_Shed/scripts.pory"
	release
GreenHerb_Collect_1:
	end

GreenHerb_Collect_2:
# 166 "data/maps/Player_Shed/scripts.pory"
	setmetatile 8, 7, 0x20D, TRUE
# 167 "data/maps/Player_Shed/scripts.pory"
	setmetatile 9, 7, 0x20E, TRUE
# 168 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 169 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 170 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 171 "data/maps/Player_Shed/scripts.pory"
	waitse
# 172 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_GREEN_HERB
# 173 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_PLAYER_HAS_HERBS
# 174 "data/maps/Player_Shed/scripts.pory"
	release
	goto GreenHerb_Collect_1


RedHerb_Bin::
# 183 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_HERB, Bin_Is_Empty
# 184 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_BRICK, Bin_Is_Empty
# 185 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_RED_HERB_COMPLETE, Bin_Is_Empty
# 186 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_PLAYER_HAS_HERBS, Player_Carrying_Other_Herb
# 187 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_RED_HERB, RedHerb_Collect
	return


YellowHerb_Bin::
# 191 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_YELLOW_HERB, Bin_Is_Empty
# 192 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_YELLOW_BRICK, Bin_Is_Empty
# 193 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_YELLOW_HERB_COMPLETE, Bin_Is_Empty
# 194 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_PLAYER_HAS_HERBS, Player_Carrying_Other_Herb
# 195 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_YELLOW_HERB, YellowHerb_Collect
	return


GreenHerb_Bin::
# 199 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_GREEN_HERB, Bin_Is_Empty
# 200 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_GREEN_BRICK, Bin_Is_Empty
# 201 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_GREEN_HERB_COMPLETE, Bin_Is_Empty
# 202 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_PLAYER_HAS_HERBS, Player_Carrying_Other_Herb
# 203 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_GREEN_HERB, GreenHerb_Collect
	return


Bin_Is_Empty::
# 207 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player1
# 208 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 209 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 210 "data/maps/Player_Shed/scripts.pory"
	release
	end


Player_Carrying_Other_Herb::
# 215 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player2
# 216 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 217 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 218 "data/maps/Player_Shed/scripts.pory"
	release
	end


Machine_Interact::
# 223 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_ALL_HERBS_COMPLETE, Door_Is_Sealed
# 224 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_HERB, Red_Herb_In_Machine
# 225 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_GREEN_HERB, Green_Herb_In_Machine
# 226 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_YELLOW_HERB, Yellow_Herb_In_Machine
# 227 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_BRICK, Door_Is_Sealed
# 228 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_GREEN_BRICK, Door_Is_Sealed
# 229 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_YELLOW_BRICK, Door_Is_Sealed
# 230 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_PLAYER_HAS_HERBS, Player_Has_No_Herb
	return


Red_Herb_In_Machine::
# 234 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS2_R, MSGBOX_YESNO
# 235 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Red_Herb_In_Machine_2
# 329 "data/maps/Player_Shed/scripts.pory"
	release
Red_Herb_In_Machine_1:
	end

Red_Herb_In_Machine_2:
# 236 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 237 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x235, TRUE
# 238 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x236, TRUE
# 239 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x237, TRUE
# 240 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 241 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 242 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 243 "data/maps/Player_Shed/scripts.pory"
	waitse
# 244 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 245 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 246 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 247 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 248 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad9
# 249 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 250 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 251 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 252 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 253 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 254 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 255 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 256 "data/maps/Player_Shed/scripts.pory"
	waitse
# 257 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 258 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 259 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x220, TRUE
# 260 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x221, TRUE
# 261 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x222, TRUE
# 262 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 263 "data/maps/Player_Shed/scripts.pory"
	waitse
# 264 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 265 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 266 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 267 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 268 "data/maps/Player_Shed/scripts.pory"
	waitse
# 269 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 270 "data/maps/Player_Shed/scripts.pory"
	playse SE_ESCALATOR
# 271 "data/maps/Player_Shed/scripts.pory"
	waitse
# 272 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21E, TRUE
# 273 "data/maps/Player_Shed/scripts.pory"
	call PS_Grinder_Shake_Vars
# 274 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 275 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 276 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 277 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 278 "data/maps/Player_Shed/scripts.pory"
	special ShakeCamera
# 279 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_MOVE
# 280 "data/maps/Player_Shed/scripts.pory"
	delay 180
# 281 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_STOP
# 282 "data/maps/Player_Shed/scripts.pory"
	waitse
# 283 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 284 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 285 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 286 "data/maps/Player_Shed/scripts.pory"
	waitse
# 287 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 288 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 289 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 290 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 291 "data/maps/Player_Shed/scripts.pory"
	waitse
# 292 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 293 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22F, TRUE
# 294 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 295 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 296 "data/maps/Player_Shed/scripts.pory"
	waitse
# 297 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 298 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 299 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x234, TRUE
# 300 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 301 "data/maps/Player_Shed/scripts.pory"
	waitse
# 302 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 303 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 304 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 305 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad10
# 306 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 307 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 308 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Dad1
# 309 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 310 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 311 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x22D, TRUE
# 312 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 313 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 314 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 315 "data/maps/Player_Shed/scripts.pory"
	waitse
# 316 "data/maps/Player_Shed/scripts.pory"
	delay 50
# 317 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 318 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 319 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 320 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad11
# 321 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 322 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 323 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_RED_BRICK
# 324 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_RED_HERB
# 325 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 6
# 326 "data/maps/Player_Shed/scripts.pory"
	release
	goto Red_Herb_In_Machine_1


Yellow_Herb_In_Machine::
# 335 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS2_Y, MSGBOX_YESNO
# 336 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Yellow_Herb_In_Machine_2
# 430 "data/maps/Player_Shed/scripts.pory"
	release
Yellow_Herb_In_Machine_1:
	end

Yellow_Herb_In_Machine_2:
# 337 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 338 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x23D, TRUE
# 339 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x23E, TRUE
# 340 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x23F, TRUE
# 341 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 342 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 343 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 344 "data/maps/Player_Shed/scripts.pory"
	waitse
# 345 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 346 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 347 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 348 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 349 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad9
# 350 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 351 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 352 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 353 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 354 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 355 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 356 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 357 "data/maps/Player_Shed/scripts.pory"
	waitse
# 358 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 359 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 360 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x220, TRUE
# 361 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x221, TRUE
# 362 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x222, TRUE
# 363 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 364 "data/maps/Player_Shed/scripts.pory"
	waitse
# 365 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 366 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 367 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 368 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 369 "data/maps/Player_Shed/scripts.pory"
	waitse
# 370 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 371 "data/maps/Player_Shed/scripts.pory"
	playse SE_ESCALATOR
# 372 "data/maps/Player_Shed/scripts.pory"
	waitse
# 373 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21E, TRUE
# 374 "data/maps/Player_Shed/scripts.pory"
	call PS_Grinder_Shake_Vars
# 375 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 376 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 377 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 378 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 379 "data/maps/Player_Shed/scripts.pory"
	special ShakeCamera
# 380 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_MOVE
# 381 "data/maps/Player_Shed/scripts.pory"
	delay 180
# 382 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_STOP
# 383 "data/maps/Player_Shed/scripts.pory"
	waitse
# 384 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 385 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 386 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 387 "data/maps/Player_Shed/scripts.pory"
	waitse
# 388 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 389 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 390 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 391 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 392 "data/maps/Player_Shed/scripts.pory"
	waitse
# 393 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 394 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22F, TRUE
# 395 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 396 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 397 "data/maps/Player_Shed/scripts.pory"
	waitse
# 398 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 399 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 400 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x23C, TRUE
# 401 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 402 "data/maps/Player_Shed/scripts.pory"
	waitse
# 403 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 404 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 405 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 406 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad10
# 407 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 408 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 409 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Dad1
# 410 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 411 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 412 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x22D, TRUE
# 413 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 414 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 415 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 416 "data/maps/Player_Shed/scripts.pory"
	waitse
# 417 "data/maps/Player_Shed/scripts.pory"
	delay 50
# 418 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 419 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 420 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 421 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad11
# 422 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 423 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 424 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_YELLOW_BRICK
# 425 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_YELLOW_HERB
# 426 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 6
# 427 "data/maps/Player_Shed/scripts.pory"
	release
	goto Yellow_Herb_In_Machine_1


Green_Herb_In_Machine::
# 436 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS2_G, MSGBOX_YESNO
# 437 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Green_Herb_In_Machine_2
# 531 "data/maps/Player_Shed/scripts.pory"
	release
Green_Herb_In_Machine_1:
	end

Green_Herb_In_Machine_2:
# 438 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 439 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x245, TRUE
# 440 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x246, TRUE
# 441 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x247, TRUE
# 442 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 443 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 444 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 445 "data/maps/Player_Shed/scripts.pory"
	waitse
# 446 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 447 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 448 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 449 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 450 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad9
# 451 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 452 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 453 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 454 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 455 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 456 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 457 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 458 "data/maps/Player_Shed/scripts.pory"
	waitse
# 459 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 460 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 461 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x220, TRUE
# 462 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x221, TRUE
# 463 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x222, TRUE
# 464 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 465 "data/maps/Player_Shed/scripts.pory"
	waitse
# 466 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 467 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 468 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 469 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 470 "data/maps/Player_Shed/scripts.pory"
	waitse
# 471 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 472 "data/maps/Player_Shed/scripts.pory"
	playse SE_ESCALATOR
# 473 "data/maps/Player_Shed/scripts.pory"
	waitse
# 474 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21E, TRUE
# 475 "data/maps/Player_Shed/scripts.pory"
	call PS_Grinder_Shake_Vars
# 476 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 477 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 478 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 479 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 480 "data/maps/Player_Shed/scripts.pory"
	special ShakeCamera
# 481 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_MOVE
# 482 "data/maps/Player_Shed/scripts.pory"
	delay 180
# 483 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_STOP
# 484 "data/maps/Player_Shed/scripts.pory"
	waitse
# 485 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 486 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 487 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 488 "data/maps/Player_Shed/scripts.pory"
	waitse
# 489 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 490 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 491 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 492 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 493 "data/maps/Player_Shed/scripts.pory"
	waitse
# 494 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 495 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22F, TRUE
# 496 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 497 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 498 "data/maps/Player_Shed/scripts.pory"
	waitse
# 499 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 500 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 501 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x244, TRUE
# 502 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 503 "data/maps/Player_Shed/scripts.pory"
	waitse
# 504 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 505 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 506 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 507 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad10
# 508 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 509 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 510 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Dad1
# 511 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 512 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 513 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x22D, TRUE
# 514 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 515 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 516 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 517 "data/maps/Player_Shed/scripts.pory"
	waitse
# 518 "data/maps/Player_Shed/scripts.pory"
	delay 50
# 519 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 520 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 521 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 522 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad11
# 523 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 524 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 525 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_GREEN_BRICK
# 526 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_GREEN_HERB
# 527 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 6
# 528 "data/maps/Player_Shed/scripts.pory"
	release
	goto Green_Herb_In_Machine_1


Door_Is_Sealed::
# 537 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS4
# 538 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 539 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 540 "data/maps/Player_Shed/scripts.pory"
	release
	end


Brick_Goes_Here::
# 545 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player3
# 546 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 547 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 548 "data/maps/Player_Shed/scripts.pory"
	release
	end


Red_Herb_Shipment::
# 553 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS5_R
# 554 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 555 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 556 "data/maps/Player_Shed/scripts.pory"
	release
	end


Yellow_Herb_Shipment::
# 561 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS5_Y
# 562 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 563 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 564 "data/maps/Player_Shed/scripts.pory"
	release
	end


Green_Herb_Shipment::
# 569 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS5_G
# 570 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 571 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 572 "data/maps/Player_Shed/scripts.pory"
	release
	end


Int_Package_Red_Herb::
# 577 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_RED_HERB_COMPLETE, Red_Herb_Shipment
# 578 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_BRICK, Red_Herb_In_Package
# 579 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_RED_BRICK, Brick_Goes_Here
	return


Int_Package_Yellow_Herb::
# 583 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_YELLOW_HERB_COMPLETE, Yellow_Herb_Shipment
# 584 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_YELLOW_BRICK, Yellow_Herb_In_Package
# 585 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_YELLOW_BRICK, Brick_Goes_Here
	return


Int_Package_Green_Herb::
# 589 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_GREEN_HERB_COMPLETE, Green_Herb_Shipment
# 590 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_GREEN_BRICK, Green_Herb_In_Package
# 591 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_GREEN_BRICK, Brick_Goes_Here
	return


Red_Herb_In_Package::
# 595 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS3_R, MSGBOX_YESNO
# 596 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Red_Herb_In_Package_2
# 680 "data/maps/Player_Shed/scripts.pory"
	release
Red_Herb_In_Package_1:
	end

Red_Herb_In_Package_2:
# 597 "data/maps/Player_Shed/scripts.pory"
	setmetatile 0, 4, 0x239, TRUE
# 598 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 599 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 600 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 601 "data/maps/Player_Shed/scripts.pory"
	waitse
# 602 "data/maps/Player_Shed/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 603 "data/maps/Player_Shed/scripts.pory"
	waitfanfare
# 604 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 605 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_RED_BRICK
# 606 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_PLAYER_HAS_HERBS
# 607 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_RED_HERB_COMPLETE
# 608 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_RED_HERB_COMPLETE, Red_Herb_In_Package_8
Red_Herb_In_Package_7:
# 644 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 645 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 646 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 647 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 648 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad12
# 649 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 650 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 651 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 652 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 653 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 654 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 655 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 656 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 657 "data/maps/Player_Shed/scripts.pory"
	waitse
# 658 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 659 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 660 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x223, TRUE
# 661 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 662 "data/maps/Player_Shed/scripts.pory"
	waitse
# 663 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 664 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22E, TRUE
# 665 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 666 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 667 "data/maps/Player_Shed/scripts.pory"
	waitse
# 668 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 669 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 670 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x225, TRUE
# 671 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x226, TRUE
# 672 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x227, TRUE
# 673 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 674 "data/maps/Player_Shed/scripts.pory"
	waitse
# 676 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 5
# 677 "data/maps/Player_Shed/scripts.pory"
	release
	goto Red_Herb_In_Package_1

Red_Herb_In_Package_6:
# 609 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 610 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_ALL_HERBS_COMPLETE
# 611 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 612 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 613 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 614 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad13
# 615 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 616 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 617 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 618 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 619 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 620 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 621 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 622 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 623 "data/maps/Player_Shed/scripts.pory"
	waitse
# 624 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 625 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 626 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x223, TRUE
# 627 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 628 "data/maps/Player_Shed/scripts.pory"
	waitse
# 629 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 630 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad5
# 631 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Player4_Red
# 632 "data/maps/Player_Shed/scripts.pory"
	waitmovement 1
# 633 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 634 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 635 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad14
# 636 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 637 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 638 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MIKE_1
# 639 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 7
# 640 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end

Red_Herb_In_Package_8:
# 608 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_GREEN_HERB_COMPLETE, Red_Herb_In_Package_10
	goto Red_Herb_In_Package_7

Red_Herb_In_Package_10:
# 608 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_YELLOW_HERB_COMPLETE, Red_Herb_In_Package_6
	goto Red_Herb_In_Package_7


Yellow_Herb_In_Package::
# 686 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS3_Y, MSGBOX_YESNO
# 687 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Yellow_Herb_In_Package_2
# 770 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 771 "data/maps/Player_Shed/scripts.pory"
	release
Yellow_Herb_In_Package_1:
	end

Yellow_Herb_In_Package_2:
# 688 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 689 "data/maps/Player_Shed/scripts.pory"
	setmetatile 0, 5, 0x23A, TRUE
# 690 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 691 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 692 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 693 "data/maps/Player_Shed/scripts.pory"
	waitse
# 694 "data/maps/Player_Shed/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 695 "data/maps/Player_Shed/scripts.pory"
	waitfanfare
# 696 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 697 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_YELLOW_BRICK
# 698 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_PLAYER_HAS_HERBS
# 699 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_YELLOW_HERB_COMPLETE
# 700 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_RED_HERB_COMPLETE, Yellow_Herb_In_Package_8
Yellow_Herb_In_Package_7:
# 735 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 736 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 737 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 738 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad12
# 739 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 740 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 741 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 742 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 743 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 744 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 745 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 746 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 747 "data/maps/Player_Shed/scripts.pory"
	waitse
# 748 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 749 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 750 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x223, TRUE
# 751 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 752 "data/maps/Player_Shed/scripts.pory"
	waitse
# 753 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 754 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22E, TRUE
# 755 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 756 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 757 "data/maps/Player_Shed/scripts.pory"
	waitse
# 758 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 759 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 760 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x225, TRUE
# 761 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x226, TRUE
# 762 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x227, TRUE
# 763 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 764 "data/maps/Player_Shed/scripts.pory"
	waitse
# 766 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 5
# 767 "data/maps/Player_Shed/scripts.pory"
	release
	goto Yellow_Herb_In_Package_1

Yellow_Herb_In_Package_6:
# 701 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_ALL_HERBS_COMPLETE
# 702 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 703 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 704 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 705 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad13
# 706 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 707 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 708 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 709 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 710 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 711 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 712 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 713 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 714 "data/maps/Player_Shed/scripts.pory"
	waitse
# 715 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 716 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 717 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x223, TRUE
# 718 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 719 "data/maps/Player_Shed/scripts.pory"
	waitse
# 720 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 721 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad5
# 722 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Player4_Yellow
# 723 "data/maps/Player_Shed/scripts.pory"
	waitmovement 1
# 724 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 725 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 726 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad14
# 727 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 728 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 729 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MIKE_1
# 730 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 7
# 731 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end

Yellow_Herb_In_Package_8:
# 700 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_GREEN_HERB_COMPLETE, Yellow_Herb_In_Package_10
	goto Yellow_Herb_In_Package_7

Yellow_Herb_In_Package_10:
# 700 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_YELLOW_HERB_COMPLETE, Yellow_Herb_In_Package_6
	goto Yellow_Herb_In_Package_7


Green_Herb_In_Package::
# 777 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS3_G, MSGBOX_YESNO
# 778 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Green_Herb_In_Package_2
# 861 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 862 "data/maps/Player_Shed/scripts.pory"
	release
Green_Herb_In_Package_1:
	end

Green_Herb_In_Package_2:
# 779 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 780 "data/maps/Player_Shed/scripts.pory"
	setmetatile 0, 6, 0x238, TRUE
# 781 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 782 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 783 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 784 "data/maps/Player_Shed/scripts.pory"
	waitse
# 785 "data/maps/Player_Shed/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 786 "data/maps/Player_Shed/scripts.pory"
	waitfanfare
# 787 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 788 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_GREEN_BRICK
# 789 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_PLAYER_HAS_HERBS
# 790 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_GREEN_HERB_COMPLETE
# 791 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_RED_HERB_COMPLETE, Green_Herb_In_Package_8
Green_Herb_In_Package_7:
# 826 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 827 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 828 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 829 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad12
# 830 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 831 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 832 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 833 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 834 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 835 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 836 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 837 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 838 "data/maps/Player_Shed/scripts.pory"
	waitse
# 839 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 840 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 841 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x223, TRUE
# 842 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 843 "data/maps/Player_Shed/scripts.pory"
	waitse
# 844 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 845 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22E, TRUE
# 846 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 847 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 848 "data/maps/Player_Shed/scripts.pory"
	waitse
# 849 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 850 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 851 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x225, TRUE
# 852 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x226, TRUE
# 853 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x227, TRUE
# 854 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 855 "data/maps/Player_Shed/scripts.pory"
	waitse
# 857 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 5
# 858 "data/maps/Player_Shed/scripts.pory"
	release
	goto Green_Herb_In_Package_1

Green_Herb_In_Package_6:
# 792 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_ALL_HERBS_COMPLETE
# 793 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 794 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 795 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 796 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad13
# 797 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 798 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 799 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 800 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 801 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 802 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 803 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 804 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 805 "data/maps/Player_Shed/scripts.pory"
	waitse
# 806 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 807 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 808 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x223, TRUE
# 809 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 810 "data/maps/Player_Shed/scripts.pory"
	waitse
# 811 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 812 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad5
# 813 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Player4_Green
# 814 "data/maps/Player_Shed/scripts.pory"
	waitmovement 1
# 815 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 816 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 817 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad14
# 818 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 819 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 820 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MIKE_1
# 821 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 7
# 822 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end

Green_Herb_In_Package_8:
# 791 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_GREEN_HERB_COMPLETE, Green_Herb_In_Package_10
	goto Green_Herb_In_Package_7

Green_Herb_In_Package_10:
# 791 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_YELLOW_HERB_COMPLETE, Green_Herb_In_Package_6
	goto Green_Herb_In_Package_7


Player_Has_No_Herb::
# 868 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player4
# 869 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 870 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 871 "data/maps/Player_Shed/scripts.pory"
	release
	end


PS_NoExit_Trig::
# 876 "data/maps/Player_Shed/scripts.pory"
	lock
# 877 "data/maps/Player_Shed/scripts.pory"
	special SpawnCameraObject
# 878 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PS_CAM_1
# 879 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 880 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_SOUTH
# 881 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, Univ_Exclam
# 882 "data/maps/Player_Shed/scripts.pory"
	playse SE_PIN
# 883 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 884 "data/maps/Player_Shed/scripts.pory"
	waitse
# 885 "data/maps/Player_Shed/scripts.pory"
	delay 60
# 886 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 887 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad8
# 888 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 889 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 890 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 891 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 892 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 893 "data/maps/Player_Shed/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 894 "data/maps/Player_Shed/scripts.pory"
	special RemoveCameraObject
# 895 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end


PS_NoExit_Trig_2::
# 900 "data/maps/Player_Shed/scripts.pory"
	lock
# 901 "data/maps/Player_Shed/scripts.pory"
	special SpawnCameraObject
# 902 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PS_CAM_1
# 903 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 904 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_SOUTH
# 905 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, Univ_Exclam
# 906 "data/maps/Player_Shed/scripts.pory"
	playse SE_PIN
# 907 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 908 "data/maps/Player_Shed/scripts.pory"
	waitse
# 909 "data/maps/Player_Shed/scripts.pory"
	delay 60
# 910 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Interact_Text_0
# 911 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad8
# 912 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 913 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 914 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 915 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 916 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 917 "data/maps/Player_Shed/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 918 "data/maps/Player_Shed/scripts.pory"
	special RemoveCameraObject
# 919 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end


PS_Grinder_Shake_Vars::
# 924 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8004, 1
# 925 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8005, 1
# 926 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8006, 45
# 927 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8007, 5
	return


# 932 "data/maps/Player_Shed/scripts.pory"
PS_Player_Walk1:
# 933 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 933 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

# 936 "data/maps/Player_Shed/scripts.pory"
PS_W_Player2:
# 937 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 937 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 938 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 939 "data/maps/Player_Shed/scripts.pory"
	face_up
	step_end

# 942 "data/maps/Player_Shed/scripts.pory"
PS_W_Player3:
# 943 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 943 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 943 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 944 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 945 "data/maps/Player_Shed/scripts.pory"
	face_left
	step_end

# 948 "data/maps/Player_Shed/scripts.pory"
PS_W_Player4_Red:
# 949 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 950 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 950 "data/maps/Player_Shed/scripts.pory"
	walk_right
	step_end

# 953 "data/maps/Player_Shed/scripts.pory"
PS_W_Player4_Yellow:
# 954 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 954 "data/maps/Player_Shed/scripts.pory"
	walk_right
	step_end

# 957 "data/maps/Player_Shed/scripts.pory"
PS_W_Player4_Green:
# 958 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 959 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 959 "data/maps/Player_Shed/scripts.pory"
	walk_right
	step_end

# 962 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad1:
# 963 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 963 "data/maps/Player_Shed/scripts.pory"
	walk_right
	step_end

# 966 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad2:
# 967 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 968 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 968 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 969 "data/maps/Player_Shed/scripts.pory"
	face_up
	step_end

# 972 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad3:
# 973 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 973 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 974 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 974 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 975 "data/maps/Player_Shed/scripts.pory"
	face_left
	step_end

# 978 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad4:
# 979 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 979 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 979 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 979 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 980 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 980 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 980 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

# 983 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad5:
# 984 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 984 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 985 "data/maps/Player_Shed/scripts.pory"
	walk_left
	step_end

# 988 "data/maps/Player_Shed/scripts.pory"
PS_CAM_1:
# 989 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 989 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

PS_Dad_Interact_Text_0:
# 28 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Dad$"

PS_T_Dad1::
# 998 "data/maps/Player_Shed/scripts.pory"
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
# 1010 "data/maps/Player_Shed/scripts.pory"
	.string "Over here we got our plucked herbs all\n"
	.string "sorted in them bins.$"

PS_T_Dad3::
# 1015 "data/maps/Player_Shed/scripts.pory"
	.string "You 'member what the different colored\n"
	.string "herbs are for, don't ya?$"

PS_T_Dad4A::
# 1020 "data/maps/Player_Shed/scripts.pory"
	.string "Haha, of course you would, {PLAYER}.\n"
	.string "I wouldn't expect anythin' less!\p"
	.string "Now, let's keep movin'.$"

PS_T_Dad4B::
# 1026 "data/maps/Player_Shed/scripts.pory"
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
# 1044 "data/maps/Player_Shed/scripts.pory"
	.string "Now here's the crown jewel of the farm!\n"
	.string "The Herb Processor Turbo 9000!\p"
	.string "This beauty takes our herbs and breaks\n"
	.string "'em down real nice into compact bricks.\p"
	.string "That way they're nice'n easy to handle.\p"
	.string "Them city boys got some soft hands...\p"
	.string "We wouldn't want them gettin' a splinter\n"
	.string "now would we? Haha!$"

PS_T_Dad6::
# 1055 "data/maps/Player_Shed/scripts.pory"
	.string "Lastly, we got our packagin' area.\n"
	.string "Just drop the brick in the same colored\p"
	.string "box and we'll be good to go!$"

PS_T_Dad7::
# 1061 "data/maps/Player_Shed/scripts.pory"
	.string "Alrighty then, {PLAYER}.\p"
	.string "I'm gonna open the loading door, you go\n"
	.string "ahead and throw them herbs in!$"

PS_T_Dad8::
# 1067 "data/maps/Player_Shed/scripts.pory"
	.string "Where ya goin', {PLAYER}?\n"
	.string "We got work to do here!$"

PS_T_Dad9::
# 1072 "data/maps/Player_Shed/scripts.pory"
	.string "Nice work, {PLAYER}!\n"
	.string "Let me start 'er up!$"

PS_T_Dad10::
# 1077 "data/maps/Player_Shed/scripts.pory"
	.string "One brick ready fer ya, {PLAYER}!$"

PS_T_Dad11::
# 1081 "data/maps/Player_Shed/scripts.pory"
	.string "Now go n' get that packaged up!$"

PS_T_Dad12::
# 1085 "data/maps/Player_Shed/scripts.pory"
	.string "Looks great, {PLAYER}!\n"
	.string "Let's get another batch goin'.$"

PS_T_Dad13::
# 1090 "data/maps/Player_Shed/scripts.pory"
	.string "Seems like that's all the herbs that\n"
	.string "needed processin'!\p"
	.string "Let me just shut this 'ol thing down...$"

PS_T_Dad14::
# 1096 "data/maps/Player_Shed/scripts.pory"
	.string "Hey, real nice job today, {PLAYER}.\p"
	.string "Since ya worked hard, I'll letcha take\n"
	.string "off while clean up 'round here.\p"
	.string "See y'all at lunch!$"

PS_T_Dad15::
# 1103 "data/maps/Player_Shed/scripts.pory"
	.string "You go on now, {PLAYER}.\n"
	.string "This place needs a little fixin' yet.$"

PS_T_Dad16::
# 1108 "data/maps/Player_Shed/scripts.pory"
	.string "Come on, {PLAYER}, yer wastin' daylight!$"

PS_T_SYS1_R::
# 1112 "data/maps/Player_Shed/scripts.pory"
	.string "Take the {COLOR RED}{SHADOW LIGHT_RED}Red Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS2_R::
# 1116 "data/maps/Player_Shed/scripts.pory"
	.string "Place the {COLOR RED}{SHADOW LIGHT_RED}Red Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}in the processor?$"

PS_T_SYS3_R::
# 1120 "data/maps/Player_Shed/scripts.pory"
	.string "Package the {COLOR RED}{SHADOW LIGHT_RED}Red Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS4::
# 1124 "data/maps/Player_Shed/scripts.pory"
	.string "The door is sealed shut.$"

PS_T_SYS5_R::
# 1128 "data/maps/Player_Shed/scripts.pory"
	.string "The {COLOR RED}{SHADOW LIGHT_RED}Red Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}are prepared to ship!$"

PS_T_SYS1_Y::
# 1132 "data/maps/Player_Shed/scripts.pory"
	.string "Take the {COLOR BLUE}{SHADOW LIGHT_BLUE}Yellow Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS2_Y::
# 1136 "data/maps/Player_Shed/scripts.pory"
	.string "Place the {COLOR BLUE}{SHADOW LIGHT_BLUE}Yellow Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}in the processor?$"

PS_T_SYS3_Y::
# 1140 "data/maps/Player_Shed/scripts.pory"
	.string "Package the {COLOR BLUE}{SHADOW LIGHT_BLUE}Yellow Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS5_Y::
# 1144 "data/maps/Player_Shed/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Yellow Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}are prepared to ship!$"

PS_T_SYS1_G::
# 1148 "data/maps/Player_Shed/scripts.pory"
	.string "Take the {COLOR GREEN}{SHADOW LIGHT_GREEN}Green Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS2_G::
# 1152 "data/maps/Player_Shed/scripts.pory"
	.string "Place the {COLOR GREEN}{SHADOW LIGHT_GREEN}Green Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}in the processor?$"

PS_T_SYS3_G::
# 1156 "data/maps/Player_Shed/scripts.pory"
	.string "Package the {COLOR GREEN}{SHADOW LIGHT_GREEN}Green Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS5_G::
# 1160 "data/maps/Player_Shed/scripts.pory"
	.string "The {COLOR GREEN}{SHADOW LIGHT_GREEN}Green Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}are prepared to ship!$"

PS_T_Player1::
# 1164 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(Bin looks pretty empty...)$"

PS_T_Player2::
# 1168 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(I should finish the batch before I\n"
	.string "move on...)\p"
	.string "(That's what Dad would do.)$"

PS_T_Player3::
# 1174 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(The herb bricks should fit perfectly in\n"
	.string "these packages...)$"

PS_T_Player4::
# 1179 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(I need to gather some herbs...)$"
