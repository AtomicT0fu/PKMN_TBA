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
	msgbox PS_T_SYS1_R, MSGBOX_YESNO
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
	setflag FLAG_PLAYER_HAS_HERBS
# 90 "data/maps/Player_Shed/scripts.pory"
	release
	goto RedHerb_Collect_1


YellowHerb_Collect::
# 99 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS1_Y, MSGBOX_YESNO
# 100 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq YellowHerb_Collect_2
# 112 "data/maps/Player_Shed/scripts.pory"
	release
YellowHerb_Collect_1:
	end

YellowHerb_Collect_2:
# 101 "data/maps/Player_Shed/scripts.pory"
	setmetatile 8, 5, 0x20D, TRUE
# 102 "data/maps/Player_Shed/scripts.pory"
	setmetatile 9, 5, 0x20E, TRUE
# 103 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 104 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 105 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 106 "data/maps/Player_Shed/scripts.pory"
	waitse
# 107 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_YELLOW_HERB
# 108 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_PLAYER_HAS_HERBS
# 109 "data/maps/Player_Shed/scripts.pory"
	release
	goto YellowHerb_Collect_1


GreenHerb_Collect::
# 118 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS1_G, MSGBOX_YESNO
# 119 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GreenHerb_Collect_2
# 131 "data/maps/Player_Shed/scripts.pory"
	release
GreenHerb_Collect_1:
	end

GreenHerb_Collect_2:
# 120 "data/maps/Player_Shed/scripts.pory"
	setmetatile 8, 7, 0x20D, TRUE
# 121 "data/maps/Player_Shed/scripts.pory"
	setmetatile 9, 7, 0x20E, TRUE
# 122 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 123 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 124 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 125 "data/maps/Player_Shed/scripts.pory"
	waitse
# 126 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_GREEN_HERB
# 127 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_PLAYER_HAS_HERBS
# 128 "data/maps/Player_Shed/scripts.pory"
	release
	goto GreenHerb_Collect_1


RedHerb_Bin::
# 137 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_HERB, Bin_Is_Empty
# 138 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_BRICK, Bin_Is_Empty
# 139 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_RED_HERB_COMPLETE, Bin_Is_Empty
# 140 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_PLAYER_HAS_HERBS, Player_Carrying_Other_Herb
# 141 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_RED_HERB, RedHerb_Collect
	return


YellowHerb_Bin::
# 145 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_YELLOW_HERB, Bin_Is_Empty
# 146 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_YELLOW_BRICK, Bin_Is_Empty
# 147 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_YELLOW_HERB_COMPLETE, Bin_Is_Empty
# 148 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_PLAYER_HAS_HERBS, Player_Carrying_Other_Herb
# 149 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_YELLOW_HERB, YellowHerb_Collect
	return


GreenHerb_Bin::
# 153 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_GREEN_HERB, Bin_Is_Empty
# 154 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_GREEN_BRICK, Bin_Is_Empty
# 155 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_GREEN_HERB_COMPLETE, Bin_Is_Empty
# 156 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_PLAYER_HAS_HERBS, Player_Carrying_Other_Herb
# 157 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_GREEN_HERB, GreenHerb_Collect
	return


Bin_Is_Empty::
# 161 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player1
# 162 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 163 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 164 "data/maps/Player_Shed/scripts.pory"
	release
	end


Player_Carrying_Other_Herb::
# 169 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player2
# 170 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 171 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 172 "data/maps/Player_Shed/scripts.pory"
	release
	end


Machine_Interact::
# 177 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_ALL_HERBS_COMPLETE, Door_Is_Sealed
# 178 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_HERB, Red_Herb_In_Machine
# 179 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_GREEN_HERB, Green_Herb_In_Machine
# 180 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_YELLOW_HERB, Yellow_Herb_In_Machine
# 181 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_BRICK, Door_Is_Sealed
# 182 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_GREEN_BRICK, Door_Is_Sealed
# 183 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_YELLOW_BRICK, Door_Is_Sealed
# 184 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_PLAYER_HAS_HERBS, Player_Has_No_Herb
	return


Red_Herb_In_Machine::
# 188 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS2_R, MSGBOX_YESNO
# 189 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Red_Herb_In_Machine_2
# 283 "data/maps/Player_Shed/scripts.pory"
	release
Red_Herb_In_Machine_1:
	end

Red_Herb_In_Machine_2:
# 190 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 191 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x235, TRUE
# 192 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x236, TRUE
# 193 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x237, TRUE
# 194 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 195 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 196 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 197 "data/maps/Player_Shed/scripts.pory"
	waitse
# 198 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 199 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 200 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 201 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 202 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad9
# 203 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 204 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 205 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 206 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 207 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 208 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 209 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 210 "data/maps/Player_Shed/scripts.pory"
	waitse
# 211 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 212 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 213 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x220, TRUE
# 214 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x221, TRUE
# 215 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x222, TRUE
# 216 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 217 "data/maps/Player_Shed/scripts.pory"
	waitse
# 218 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 219 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 220 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 221 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 222 "data/maps/Player_Shed/scripts.pory"
	waitse
# 223 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 224 "data/maps/Player_Shed/scripts.pory"
	playse SE_ESCALATOR
# 225 "data/maps/Player_Shed/scripts.pory"
	waitse
# 226 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21E, TRUE
# 227 "data/maps/Player_Shed/scripts.pory"
	call PS_Grinder_Shake_Vars
# 228 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 229 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 230 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 231 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 232 "data/maps/Player_Shed/scripts.pory"
	special ShakeCamera
# 233 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_MOVE
# 234 "data/maps/Player_Shed/scripts.pory"
	delay 180
# 235 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_STOP
# 236 "data/maps/Player_Shed/scripts.pory"
	waitse
# 237 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 238 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 239 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 240 "data/maps/Player_Shed/scripts.pory"
	waitse
# 241 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 242 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 243 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 244 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 245 "data/maps/Player_Shed/scripts.pory"
	waitse
# 246 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 247 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22F, TRUE
# 248 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 249 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 250 "data/maps/Player_Shed/scripts.pory"
	waitse
# 251 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 252 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 253 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x234, TRUE
# 254 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 255 "data/maps/Player_Shed/scripts.pory"
	waitse
# 256 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 257 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 258 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 259 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad10
# 260 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 261 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 262 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Dad1
# 263 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 264 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 265 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x22D, TRUE
# 266 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 267 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 268 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 269 "data/maps/Player_Shed/scripts.pory"
	waitse
# 270 "data/maps/Player_Shed/scripts.pory"
	delay 50
# 271 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 272 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 273 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 274 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad11
# 275 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 276 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 277 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_RED_BRICK
# 278 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_RED_HERB
# 279 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 6
# 280 "data/maps/Player_Shed/scripts.pory"
	release
	goto Red_Herb_In_Machine_1


Yellow_Herb_In_Machine::
# 289 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS2_Y, MSGBOX_YESNO
# 290 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Yellow_Herb_In_Machine_2
# 384 "data/maps/Player_Shed/scripts.pory"
	release
Yellow_Herb_In_Machine_1:
	end

Yellow_Herb_In_Machine_2:
# 291 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 292 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x23D, TRUE
# 293 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x23E, TRUE
# 294 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x23F, TRUE
# 295 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 296 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 297 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 298 "data/maps/Player_Shed/scripts.pory"
	waitse
# 299 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 300 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 301 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 302 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 303 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad9
# 304 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 305 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 306 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 307 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 308 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 309 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 310 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 311 "data/maps/Player_Shed/scripts.pory"
	waitse
# 312 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 313 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 314 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x220, TRUE
# 315 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x221, TRUE
# 316 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x222, TRUE
# 317 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 318 "data/maps/Player_Shed/scripts.pory"
	waitse
# 319 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 320 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 321 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 322 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 323 "data/maps/Player_Shed/scripts.pory"
	waitse
# 324 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 325 "data/maps/Player_Shed/scripts.pory"
	playse SE_ESCALATOR
# 326 "data/maps/Player_Shed/scripts.pory"
	waitse
# 327 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21E, TRUE
# 328 "data/maps/Player_Shed/scripts.pory"
	call PS_Grinder_Shake_Vars
# 329 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 330 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 331 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 332 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 333 "data/maps/Player_Shed/scripts.pory"
	special ShakeCamera
# 334 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_MOVE
# 335 "data/maps/Player_Shed/scripts.pory"
	delay 180
# 336 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_STOP
# 337 "data/maps/Player_Shed/scripts.pory"
	waitse
# 338 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 339 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 340 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 341 "data/maps/Player_Shed/scripts.pory"
	waitse
# 342 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 343 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 344 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 345 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 346 "data/maps/Player_Shed/scripts.pory"
	waitse
# 347 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 348 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22F, TRUE
# 349 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 350 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 351 "data/maps/Player_Shed/scripts.pory"
	waitse
# 352 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 353 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 354 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x23C, TRUE
# 355 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 356 "data/maps/Player_Shed/scripts.pory"
	waitse
# 357 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 358 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 359 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 360 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad10
# 361 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 362 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 363 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Dad1
# 364 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 365 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 366 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x22D, TRUE
# 367 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 368 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 369 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 370 "data/maps/Player_Shed/scripts.pory"
	waitse
# 371 "data/maps/Player_Shed/scripts.pory"
	delay 50
# 372 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 373 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 374 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 375 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad11
# 376 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 377 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 378 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_YELLOW_BRICK
# 379 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_YELLOW_HERB
# 380 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 6
# 381 "data/maps/Player_Shed/scripts.pory"
	release
	goto Yellow_Herb_In_Machine_1


Green_Herb_In_Machine::
# 390 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS2_G, MSGBOX_YESNO
# 391 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Green_Herb_In_Machine_2
# 485 "data/maps/Player_Shed/scripts.pory"
	release
Green_Herb_In_Machine_1:
	end

Green_Herb_In_Machine_2:
# 392 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 393 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x245, TRUE
# 394 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x246, TRUE
# 395 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x247, TRUE
# 396 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 397 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 398 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 399 "data/maps/Player_Shed/scripts.pory"
	waitse
# 400 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 401 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 402 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 403 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 404 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad9
# 405 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 406 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 407 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 408 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 409 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 410 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 411 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 412 "data/maps/Player_Shed/scripts.pory"
	waitse
# 413 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 414 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 415 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x220, TRUE
# 416 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x221, TRUE
# 417 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x222, TRUE
# 418 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 419 "data/maps/Player_Shed/scripts.pory"
	waitse
# 420 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 421 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 422 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 423 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 424 "data/maps/Player_Shed/scripts.pory"
	waitse
# 425 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 426 "data/maps/Player_Shed/scripts.pory"
	playse SE_ESCALATOR
# 427 "data/maps/Player_Shed/scripts.pory"
	waitse
# 428 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21E, TRUE
# 429 "data/maps/Player_Shed/scripts.pory"
	call PS_Grinder_Shake_Vars
# 430 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 431 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 432 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 433 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 434 "data/maps/Player_Shed/scripts.pory"
	special ShakeCamera
# 435 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_MOVE
# 436 "data/maps/Player_Shed/scripts.pory"
	delay 180
# 437 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_STOP
# 438 "data/maps/Player_Shed/scripts.pory"
	waitse
# 439 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x21D, TRUE
# 440 "data/maps/Player_Shed/scripts.pory"
	playse SE_CLICK
# 441 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 442 "data/maps/Player_Shed/scripts.pory"
	waitse
# 443 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 444 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 445 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 446 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 447 "data/maps/Player_Shed/scripts.pory"
	waitse
# 448 "data/maps/Player_Shed/scripts.pory"
	delay 40
# 449 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22F, TRUE
# 450 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 451 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 452 "data/maps/Player_Shed/scripts.pory"
	waitse
# 453 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 454 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 455 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x244, TRUE
# 456 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 457 "data/maps/Player_Shed/scripts.pory"
	waitse
# 458 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 459 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 460 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 461 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad10
# 462 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 463 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 464 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Dad1
# 465 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 466 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 467 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x22D, TRUE
# 468 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 469 "data/maps/Player_Shed/scripts.pory"
	playse SE_MUD_BALL
# 470 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 471 "data/maps/Player_Shed/scripts.pory"
	waitse
# 472 "data/maps/Player_Shed/scripts.pory"
	delay 50
# 473 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 474 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 475 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 476 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad11
# 477 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 478 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 479 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_OBT_GREEN_BRICK
# 480 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_GREEN_HERB
# 481 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 6
# 482 "data/maps/Player_Shed/scripts.pory"
	release
	goto Green_Herb_In_Machine_1


Door_Is_Sealed::
# 491 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS4
# 492 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 493 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 494 "data/maps/Player_Shed/scripts.pory"
	release
	end


Brick_Goes_Here::
# 499 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player3
# 500 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 501 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 502 "data/maps/Player_Shed/scripts.pory"
	release
	end


Red_Herb_Shipment::
# 507 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS5_R
# 508 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 509 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 510 "data/maps/Player_Shed/scripts.pory"
	release
	end


Yellow_Herb_Shipment::
# 515 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS5_Y
# 516 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 517 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 518 "data/maps/Player_Shed/scripts.pory"
	release
	end


Green_Herb_Shipment::
# 523 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS5_G
# 524 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 525 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 526 "data/maps/Player_Shed/scripts.pory"
	release
	end


Int_Package_Red_Herb::
# 531 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_RED_HERB_COMPLETE, Red_Herb_Shipment
# 532 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_RED_BRICK, Red_Herb_In_Package
# 533 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_RED_BRICK, Brick_Goes_Here
	return


Int_Package_Yellow_Herb::
# 537 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_YELLOW_HERB_COMPLETE, Yellow_Herb_Shipment
# 538 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_YELLOW_BRICK, Yellow_Herb_In_Package
# 539 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_YELLOW_BRICK, Brick_Goes_Here
	return


Int_Package_Green_Herb::
# 543 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_GREEN_HERB_COMPLETE, Green_Herb_Shipment
# 544 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_OBT_GREEN_BRICK, Green_Herb_In_Package
# 545 "data/maps/Player_Shed/scripts.pory"
	goto_if_unset FLAG_OBT_GREEN_BRICK, Brick_Goes_Here
	return


Red_Herb_In_Package::
# 549 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS3_R, MSGBOX_YESNO
# 550 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Red_Herb_In_Package_2
# 633 "data/maps/Player_Shed/scripts.pory"
	release
Red_Herb_In_Package_1:
	end

Red_Herb_In_Package_2:
# 551 "data/maps/Player_Shed/scripts.pory"
	setmetatile 0, 4, 0x239, TRUE
# 552 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 553 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 554 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 555 "data/maps/Player_Shed/scripts.pory"
	waitse
# 556 "data/maps/Player_Shed/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 557 "data/maps/Player_Shed/scripts.pory"
	waitfanfare
# 558 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 559 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_RED_BRICK
# 560 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_PLAYER_HAS_HERBS
# 561 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_RED_HERB_COMPLETE
# 562 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_RED_HERB_COMPLETE, Red_Herb_In_Package_8
Red_Herb_In_Package_7:
# 597 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 598 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 599 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 600 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 601 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad12
# 602 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 603 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 604 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 605 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 606 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 607 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 608 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 609 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 610 "data/maps/Player_Shed/scripts.pory"
	waitse
# 611 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 612 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 613 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x223, TRUE
# 614 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 615 "data/maps/Player_Shed/scripts.pory"
	waitse
# 616 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 617 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22E, TRUE
# 618 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 619 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 620 "data/maps/Player_Shed/scripts.pory"
	waitse
# 621 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 622 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 623 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x225, TRUE
# 624 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x226, TRUE
# 625 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x227, TRUE
# 626 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 627 "data/maps/Player_Shed/scripts.pory"
	waitse
# 629 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 5
# 630 "data/maps/Player_Shed/scripts.pory"
	release
	goto Red_Herb_In_Package_1

Red_Herb_In_Package_6:
# 563 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 564 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_ALL_HERBS_COMPLETE
# 565 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 566 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 567 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 568 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad13
# 569 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 570 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 571 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 572 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 573 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 574 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 575 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 576 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 577 "data/maps/Player_Shed/scripts.pory"
	waitse
# 578 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 579 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 580 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x223, TRUE
# 581 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 582 "data/maps/Player_Shed/scripts.pory"
	waitse
# 583 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 584 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad5
# 585 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Player4_Red
# 586 "data/maps/Player_Shed/scripts.pory"
	waitmovement 1
# 587 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 588 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 589 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad14
# 590 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 591 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 592 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 7
# 593 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end

Red_Herb_In_Package_8:
# 562 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_GREEN_HERB_COMPLETE, Red_Herb_In_Package_10
	goto Red_Herb_In_Package_7

Red_Herb_In_Package_10:
# 562 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_YELLOW_HERB_COMPLETE, Red_Herb_In_Package_6
	goto Red_Herb_In_Package_7


Yellow_Herb_In_Package::
# 639 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS3_Y, MSGBOX_YESNO
# 640 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Yellow_Herb_In_Package_2
# 722 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 723 "data/maps/Player_Shed/scripts.pory"
	release
Yellow_Herb_In_Package_1:
	end

Yellow_Herb_In_Package_2:
# 641 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 642 "data/maps/Player_Shed/scripts.pory"
	setmetatile 0, 5, 0x23A, TRUE
# 643 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 644 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 645 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 646 "data/maps/Player_Shed/scripts.pory"
	waitse
# 647 "data/maps/Player_Shed/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 648 "data/maps/Player_Shed/scripts.pory"
	waitfanfare
# 649 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 650 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_YELLOW_BRICK
# 651 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_PLAYER_HAS_HERBS
# 652 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_YELLOW_HERB_COMPLETE
# 653 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_RED_HERB_COMPLETE, Yellow_Herb_In_Package_8
Yellow_Herb_In_Package_7:
# 687 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 688 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 689 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 690 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad12
# 691 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 692 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 693 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 694 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 695 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 696 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 697 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 698 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 699 "data/maps/Player_Shed/scripts.pory"
	waitse
# 700 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 701 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 702 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x223, TRUE
# 703 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 704 "data/maps/Player_Shed/scripts.pory"
	waitse
# 705 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 706 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22E, TRUE
# 707 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 708 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 709 "data/maps/Player_Shed/scripts.pory"
	waitse
# 710 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 711 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 712 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x225, TRUE
# 713 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x226, TRUE
# 714 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x227, TRUE
# 715 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 716 "data/maps/Player_Shed/scripts.pory"
	waitse
# 718 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 5
# 719 "data/maps/Player_Shed/scripts.pory"
	release
	goto Yellow_Herb_In_Package_1

Yellow_Herb_In_Package_6:
# 654 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_ALL_HERBS_COMPLETE
# 655 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 656 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 657 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 658 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad13
# 659 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 660 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 661 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 662 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 663 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 664 "data/maps/Player_Shed/scripts.pory"
	delay 30
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
	setmetatile 5, 2, 0x223, TRUE
# 671 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 672 "data/maps/Player_Shed/scripts.pory"
	waitse
# 673 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 674 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad5
# 675 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Player4_Yellow
# 676 "data/maps/Player_Shed/scripts.pory"
	waitmovement 1
# 677 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 678 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 679 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad14
# 680 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 681 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 682 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 7
# 683 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end

Yellow_Herb_In_Package_8:
# 653 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_GREEN_HERB_COMPLETE, Yellow_Herb_In_Package_10
	goto Yellow_Herb_In_Package_7

Yellow_Herb_In_Package_10:
# 653 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_YELLOW_HERB_COMPLETE, Yellow_Herb_In_Package_6
	goto Yellow_Herb_In_Package_7


Green_Herb_In_Package::
# 729 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_SYS3_G, MSGBOX_YESNO
# 730 "data/maps/Player_Shed/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Green_Herb_In_Package_2
# 812 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 813 "data/maps/Player_Shed/scripts.pory"
	release
Green_Herb_In_Package_1:
	end

Green_Herb_In_Package_2:
# 731 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 732 "data/maps/Player_Shed/scripts.pory"
	setmetatile 0, 6, 0x238, TRUE
# 733 "data/maps/Player_Shed/scripts.pory"
	delay 10
# 734 "data/maps/Player_Shed/scripts.pory"
	playse SE_BALL
# 735 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 736 "data/maps/Player_Shed/scripts.pory"
	waitse
# 737 "data/maps/Player_Shed/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 738 "data/maps/Player_Shed/scripts.pory"
	waitfanfare
# 739 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 740 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_OBT_GREEN_BRICK
# 741 "data/maps/Player_Shed/scripts.pory"
	clearflag FLAG_PLAYER_HAS_HERBS
# 742 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_GREEN_HERB_COMPLETE
# 743 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_RED_HERB_COMPLETE, Green_Herb_In_Package_8
Green_Herb_In_Package_7:
# 777 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 778 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 779 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 780 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad12
# 781 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 782 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 783 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 784 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 785 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 786 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 787 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 788 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 789 "data/maps/Player_Shed/scripts.pory"
	waitse
# 790 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 791 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 792 "data/maps/Player_Shed/scripts.pory"
	setmetatile 5, 2, 0x223, TRUE
# 793 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 794 "data/maps/Player_Shed/scripts.pory"
	waitse
# 795 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 796 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x22E, TRUE
# 797 "data/maps/Player_Shed/scripts.pory"
	playse SE_SWITCH
# 798 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 799 "data/maps/Player_Shed/scripts.pory"
	waitse
# 800 "data/maps/Player_Shed/scripts.pory"
	delay 20
# 801 "data/maps/Player_Shed/scripts.pory"
	playse SE_TRUCK_DOOR
# 802 "data/maps/Player_Shed/scripts.pory"
	setmetatile 2, 2, 0x225, TRUE
# 803 "data/maps/Player_Shed/scripts.pory"
	setmetatile 3, 2, 0x226, TRUE
# 804 "data/maps/Player_Shed/scripts.pory"
	setmetatile 4, 2, 0x227, TRUE
# 805 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 806 "data/maps/Player_Shed/scripts.pory"
	waitse
# 808 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 5
# 809 "data/maps/Player_Shed/scripts.pory"
	release
	goto Green_Herb_In_Package_1

Green_Herb_In_Package_6:
# 744 "data/maps/Player_Shed/scripts.pory"
	setflag FLAG_ALL_HERBS_COMPLETE
# 745 "data/maps/Player_Shed/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 746 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 747 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 748 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad13
# 749 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 750 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 751 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 752 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 753 "data/maps/Player_Shed/scripts.pory"
	setmetatile 6, 2, 0x224, TRUE
# 754 "data/maps/Player_Shed/scripts.pory"
	delay 30
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
	setmetatile 5, 2, 0x223, TRUE
# 761 "data/maps/Player_Shed/scripts.pory"
	special DrawWholeMapView
# 762 "data/maps/Player_Shed/scripts.pory"
	waitse
# 763 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 764 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, PS_W_Dad5
# 765 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PS_W_Player4_Green
# 766 "data/maps/Player_Shed/scripts.pory"
	waitmovement 1
# 767 "data/maps/Player_Shed/scripts.pory"
	delay 30
# 768 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 769 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad14
# 770 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 771 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 772 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_ADVENTURE_START, 7
# 773 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end

Green_Herb_In_Package_8:
# 743 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_GREEN_HERB_COMPLETE, Green_Herb_In_Package_10
	goto Green_Herb_In_Package_7

Green_Herb_In_Package_10:
# 743 "data/maps/Player_Shed/scripts.pory"
	goto_if_set FLAG_YELLOW_HERB_COMPLETE, Green_Herb_In_Package_6
	goto Green_Herb_In_Package_7


Player_Has_No_Herb::
# 819 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Player4
# 820 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 821 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 822 "data/maps/Player_Shed/scripts.pory"
	release
	end


PS_NoExit_Trig::
# 827 "data/maps/Player_Shed/scripts.pory"
	lock
# 828 "data/maps/Player_Shed/scripts.pory"
	special SpawnCameraObject
# 829 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PS_CAM_1
# 830 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 831 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_SOUTH
# 832 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, Univ_Exclam
# 833 "data/maps/Player_Shed/scripts.pory"
	playse SE_PIN
# 834 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 835 "data/maps/Player_Shed/scripts.pory"
	waitse
# 836 "data/maps/Player_Shed/scripts.pory"
	delay 60
# 837 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 838 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad8
# 839 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 840 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 841 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 842 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 843 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_NORTH
# 844 "data/maps/Player_Shed/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 845 "data/maps/Player_Shed/scripts.pory"
	special RemoveCameraObject
# 846 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end


PS_NoExit_Trig_2::
# 851 "data/maps/Player_Shed/scripts.pory"
	lock
# 852 "data/maps/Player_Shed/scripts.pory"
	special SpawnCameraObject
# 853 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PS_CAM_1
# 854 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 855 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_SOUTH
# 856 "data/maps/Player_Shed/scripts.pory"
	applymovement 1, Univ_Exclam
# 857 "data/maps/Player_Shed/scripts.pory"
	playse SE_PIN
# 858 "data/maps/Player_Shed/scripts.pory"
	waitmovement 0
# 859 "data/maps/Player_Shed/scripts.pory"
	waitse
# 860 "data/maps/Player_Shed/scripts.pory"
	delay 60
# 861 "data/maps/Player_Shed/scripts.pory"
	speakername PS_Dad_Intro_Text_0
# 862 "data/maps/Player_Shed/scripts.pory"
	msgbox PS_T_Dad8
# 863 "data/maps/Player_Shed/scripts.pory"
	waitmessage
# 864 "data/maps/Player_Shed/scripts.pory"
	closemessage
# 865 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Univ_StepUp1
# 866 "data/maps/Player_Shed/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Univ_StepDown1
# 867 "data/maps/Player_Shed/scripts.pory"
	turnobject 1, DIR_WEST
# 868 "data/maps/Player_Shed/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 869 "data/maps/Player_Shed/scripts.pory"
	special RemoveCameraObject
# 870 "data/maps/Player_Shed/scripts.pory"
	releaseall
	end


PS_Grinder_Shake_Vars::
# 875 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8004, 1
# 876 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8005, 1
# 877 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8006, 45
# 878 "data/maps/Player_Shed/scripts.pory"
	setvar VAR_0x8007, 5
	return


# 883 "data/maps/Player_Shed/scripts.pory"
PS_Player_Walk1:
# 884 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 884 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

# 887 "data/maps/Player_Shed/scripts.pory"
PS_W_Player2:
# 888 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 888 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 889 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 890 "data/maps/Player_Shed/scripts.pory"
	face_up
	step_end

# 893 "data/maps/Player_Shed/scripts.pory"
PS_W_Player3:
# 894 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 894 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 894 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 895 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 896 "data/maps/Player_Shed/scripts.pory"
	face_left
	step_end

# 899 "data/maps/Player_Shed/scripts.pory"
PS_W_Player4_Red:
# 900 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 901 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 901 "data/maps/Player_Shed/scripts.pory"
	walk_right
	step_end

# 904 "data/maps/Player_Shed/scripts.pory"
PS_W_Player4_Yellow:
# 905 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 905 "data/maps/Player_Shed/scripts.pory"
	walk_right
	step_end

# 908 "data/maps/Player_Shed/scripts.pory"
PS_W_Player4_Green:
# 909 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 910 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 910 "data/maps/Player_Shed/scripts.pory"
	walk_right
	step_end

# 913 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad1:
# 914 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 914 "data/maps/Player_Shed/scripts.pory"
	walk_right
	step_end

# 917 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad2:
# 918 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 919 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 919 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 920 "data/maps/Player_Shed/scripts.pory"
	face_up
	step_end

# 923 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad3:
# 924 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 924 "data/maps/Player_Shed/scripts.pory"
	walk_left
# 925 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 925 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 926 "data/maps/Player_Shed/scripts.pory"
	face_left
	step_end

# 929 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad4:
# 930 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 930 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 930 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 930 "data/maps/Player_Shed/scripts.pory"
	walk_right
# 931 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 931 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 931 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

# 934 "data/maps/Player_Shed/scripts.pory"
PS_W_Dad5:
# 935 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 935 "data/maps/Player_Shed/scripts.pory"
	walk_down
# 936 "data/maps/Player_Shed/scripts.pory"
	walk_left
	step_end

# 939 "data/maps/Player_Shed/scripts.pory"
PS_CAM_1:
# 940 "data/maps/Player_Shed/scripts.pory"
	walk_up
# 940 "data/maps/Player_Shed/scripts.pory"
	walk_up
	step_end

PS_Dad_Intro_Text_0:
# 10 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Dad$"

PS_T_Dad1::
# 949 "data/maps/Player_Shed/scripts.pory"
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
# 961 "data/maps/Player_Shed/scripts.pory"
	.string "Over here we got our plucked herbs all\n"
	.string "sorted in them bins.$"

PS_T_Dad3::
# 966 "data/maps/Player_Shed/scripts.pory"
	.string "You 'member what the different colored\n"
	.string "herbs are for, don't ya?$"

PS_T_Dad4A::
# 971 "data/maps/Player_Shed/scripts.pory"
	.string "Haha, of course you would, {PLAYER}.\n"
	.string "I wouldn't expect anythin' less!\p"
	.string "Now, let's keep movin'.$"

PS_T_Dad4B::
# 977 "data/maps/Player_Shed/scripts.pory"
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
# 995 "data/maps/Player_Shed/scripts.pory"
	.string "Now here's the crown jewel of the farm!\n"
	.string "The Herb Processor Turbo 9000!\p"
	.string "This beauty takes our herbs and breaks\n"
	.string "'em down real nice into compact bricks.\p"
	.string "That way they're nice'n easy to handle.\p"
	.string "Them city boys got some soft hands...\p"
	.string "We wouldn't want them gettin' a splinter\n"
	.string "now would we? Haha!$"

PS_T_Dad6::
# 1006 "data/maps/Player_Shed/scripts.pory"
	.string "Lastly, we got our packagin' area.\n"
	.string "Just drop the brick in the same colored\p"
	.string "box and we'll be good to go!$"

PS_T_Dad7::
# 1012 "data/maps/Player_Shed/scripts.pory"
	.string "Alrighty then, {PLAYER}.\p"
	.string "I'm gonna open the loading door, you go\n"
	.string "ahead and throw them herbs in!$"

PS_T_Dad8::
# 1018 "data/maps/Player_Shed/scripts.pory"
	.string "Where ya goin', {PLAYER}?\n"
	.string "We got work to do here!$"

PS_T_Dad9::
# 1023 "data/maps/Player_Shed/scripts.pory"
	.string "Nice work, {PLAYER}!\n"
	.string "Let me start 'er up!$"

PS_T_Dad10::
# 1028 "data/maps/Player_Shed/scripts.pory"
	.string "One brick ready fer ya, {PLAYER}!$"

PS_T_Dad11::
# 1032 "data/maps/Player_Shed/scripts.pory"
	.string "Now go n' get that packaged up!$"

PS_T_Dad12::
# 1036 "data/maps/Player_Shed/scripts.pory"
	.string "Looks great, {PLAYER}!\n"
	.string "Let's get another batch goin'.$"

PS_T_Dad13::
# 1041 "data/maps/Player_Shed/scripts.pory"
	.string "Seems like that's all the herbs that\n"
	.string "needed processin'!\p"
	.string "Let me just shut this 'ol thing down...$"

PS_T_Dad14::
# 1047 "data/maps/Player_Shed/scripts.pory"
	.string "Hey, real nice job today, {PLAYER}.\p"
	.string "Since ya worked hard, I'll letcha take\n"
	.string "off while clean up 'round here.\p"
	.string "See y'all at lunch!$"

PS_T_SYS1_R::
# 1054 "data/maps/Player_Shed/scripts.pory"
	.string "Take the {COLOR RED}{SHADOW LIGHT_RED}Red Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS2_R::
# 1058 "data/maps/Player_Shed/scripts.pory"
	.string "Place the {COLOR RED}{SHADOW LIGHT_RED}Red Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}in the processor?$"

PS_T_SYS3_R::
# 1062 "data/maps/Player_Shed/scripts.pory"
	.string "Package the {COLOR RED}{SHADOW LIGHT_RED}Red Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS4::
# 1066 "data/maps/Player_Shed/scripts.pory"
	.string "The door is sealed shut.$"

PS_T_SYS5_R::
# 1070 "data/maps/Player_Shed/scripts.pory"
	.string "The {COLOR RED}{SHADOW LIGHT_RED}Red Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}are prepared to ship!$"

PS_T_SYS1_Y::
# 1074 "data/maps/Player_Shed/scripts.pory"
	.string "Take the {COLOR BLUE}{SHADOW LIGHT_BLUE}Yellow Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS2_Y::
# 1078 "data/maps/Player_Shed/scripts.pory"
	.string "Place the {COLOR BLUE}{SHADOW LIGHT_BLUE}Yellow Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}in the processor?$"

PS_T_SYS3_Y::
# 1082 "data/maps/Player_Shed/scripts.pory"
	.string "Package the {COLOR BLUE}{SHADOW LIGHT_BLUE}Yellow Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS5_Y::
# 1086 "data/maps/Player_Shed/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Yellow Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}are prepared to ship!$"

PS_T_SYS1_G::
# 1090 "data/maps/Player_Shed/scripts.pory"
	.string "Take the {COLOR GREEN}{SHADOW LIGHT_GREEN}Green Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS2_G::
# 1094 "data/maps/Player_Shed/scripts.pory"
	.string "Place the {COLOR GREEN}{SHADOW LIGHT_GREEN}Green Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}in the processor?$"

PS_T_SYS3_G::
# 1098 "data/maps/Player_Shed/scripts.pory"
	.string "Package the {COLOR GREEN}{SHADOW LIGHT_GREEN}Green Herbs{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

PS_T_SYS5_G::
# 1102 "data/maps/Player_Shed/scripts.pory"
	.string "The {COLOR GREEN}{SHADOW LIGHT_GREEN}Green Herbs {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}are prepared to ship!$"

PS_T_Player1::
# 1106 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(Bin looks pretty empty...)$"

PS_T_Player2::
# 1110 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(I should finish the batch before I\n"
	.string "move on...)\p"
	.string "(That's what Dad would do.)$"

PS_T_Player3::
# 1116 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(The herb bricks should fit perfectly in\n"
	.string "these packages...)$"

PS_T_Player4::
# 1121 "data/maps/Player_Shed/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}(I need to gather some herbs...)$"
