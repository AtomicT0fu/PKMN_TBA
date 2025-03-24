Black_Screen_MapScripts::
# 2 "data/maps/Black_Screen/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Black_Screen_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Black_Screen_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Black_Screen/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 0, WarpToStart
	.2byte 0


WarpToStart::
# 8 "data/maps/Black_Screen/scripts.pory"
	lock
# 9 "data/maps/Black_Screen/scripts.pory"
	delay 60
# 10 "data/maps/Black_Screen/scripts.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/maps/Black_Screen/scripts.pory"
	call ReDrawRoom
# 12 "data/maps/Black_Screen/scripts.pory"
	fadenewbgm MUS_FALLARBOR
# 13 "data/maps/Black_Screen/scripts.pory"
	delay 30
# 14 "data/maps/Black_Screen/scripts.pory"
	addobject 1
# 15 "data/maps/Black_Screen/scripts.pory"
	playse SE_EXIT
# 16 "data/maps/Black_Screen/scripts.pory"
	waitse
# 17 "data/maps/Black_Screen/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 18 "data/maps/Black_Screen/scripts.pory"
	waitmoncry
# 19 "data/maps/Black_Screen/scripts.pory"
	applymovement 1, JumpInPlace_Down
# 20 "data/maps/Black_Screen/scripts.pory"
	playse SE_BIKE_HOP
# 21 "data/maps/Black_Screen/scripts.pory"
	waitmovement 0
# 22 "data/maps/Black_Screen/scripts.pory"
	applymovement 1, PHB1F_Lillipup_Walk1
# 23 "data/maps/Black_Screen/scripts.pory"
	waitmovement 0
# 24 "data/maps/Black_Screen/scripts.pory"
	applymovement 1, JumpInPlace_Right
# 25 "data/maps/Black_Screen/scripts.pory"
	playse SE_BIKE_HOP
# 26 "data/maps/Black_Screen/scripts.pory"
	waitmovement 0
# 27 "data/maps/Black_Screen/scripts.pory"
	removeobject 1
# 28 "data/maps/Black_Screen/scripts.pory"
	addobject 2
# 29 "data/maps/Black_Screen/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 30 "data/maps/Black_Screen/scripts.pory"
	waitmoncry
# 31 "data/maps/Black_Screen/scripts.pory"
	setvar VAR_ADVENTURE_START, 1
# 32 "data/maps/Black_Screen/scripts.pory"
	release
	end


BS_Leave_Bed::
# 37 "data/maps/Black_Screen/scripts.pory"
	speakername BS_Leave_Bed_Text_0
# 38 "data/maps/Black_Screen/scripts.pory"
	msgbox BS_T_Mom1
# 39 "data/maps/Black_Screen/scripts.pory"
	closemessage
# 40 "data/maps/Black_Screen/scripts.pory"
	turnobject 2, DIR_NORTH
# 41 "data/maps/Black_Screen/scripts.pory"
	playse SE_PIN
# 42 "data/maps/Black_Screen/scripts.pory"
	applymovement 2, BS_Lilli_Ex1
# 43 "data/maps/Black_Screen/scripts.pory"
	waitmovement 0
# 44 "data/maps/Black_Screen/scripts.pory"
	delay 90
# 45 "data/maps/Black_Screen/scripts.pory"
	speakername BS_Leave_Bed_Text_0
# 46 "data/maps/Black_Screen/scripts.pory"
	msgbox BS_T_Mom2
# 47 "data/maps/Black_Screen/scripts.pory"
	closemessage
# 48 "data/maps/Black_Screen/scripts.pory"
	applymovement 2, JumpInPlace_Up
# 49 "data/maps/Black_Screen/scripts.pory"
	playse SE_BIKE_HOP
# 50 "data/maps/Black_Screen/scripts.pory"
	waitmovement 0
# 51 "data/maps/Black_Screen/scripts.pory"
	playmoncry SPECIES_LILLIPUP, 0
# 52 "data/maps/Black_Screen/scripts.pory"
	waitmoncry
# 53 "data/maps/Black_Screen/scripts.pory"
	applymovement 2, BS_Lilli_Move1
# 54 "data/maps/Black_Screen/scripts.pory"
	waitmovement 0
# 55 "data/maps/Black_Screen/scripts.pory"
	playse SE_EXIT
# 56 "data/maps/Black_Screen/scripts.pory"
	removeobject 2
# 57 "data/maps/Black_Screen/scripts.pory"
	call Set_Start_Flags
# 58 "data/maps/Black_Screen/scripts.pory"
	setvar VAR_ADVENTURE_START, 2
# 59 "data/maps/Black_Screen/scripts.pory"
	release
	end


ReDrawRoom::
# 64 "data/maps/Black_Screen/scripts.pory"
	setmetatile 0, 0, 0x001B, TRUE
# 65 "data/maps/Black_Screen/scripts.pory"
	setmetatile 1, 0, 0x001C, TRUE
# 66 "data/maps/Black_Screen/scripts.pory"
	setmetatile 2, 0, 0x001D, TRUE
# 67 "data/maps/Black_Screen/scripts.pory"
	setmetatile 3, 0, 0x0019, TRUE
# 68 "data/maps/Black_Screen/scripts.pory"
	setmetatile 4, 0, 0x009E, TRUE
# 69 "data/maps/Black_Screen/scripts.pory"
	setmetatile 5, 0, 0x0019, TRUE
# 70 "data/maps/Black_Screen/scripts.pory"
	setmetatile 6, 0, 0x0088, TRUE
# 71 "data/maps/Black_Screen/scripts.pory"
	setmetatile 7, 0, 0x0089, TRUE
# 72 "data/maps/Black_Screen/scripts.pory"
	setmetatile 0, 1, 0x0023, TRUE
# 73 "data/maps/Black_Screen/scripts.pory"
	setmetatile 1, 1, 0x0011, FALSE
# 74 "data/maps/Black_Screen/scripts.pory"
	setmetatile 2, 1, 0x0025, TRUE
# 75 "data/maps/Black_Screen/scripts.pory"
	setmetatile 3, 1, 0x007D, TRUE
# 76 "data/maps/Black_Screen/scripts.pory"
	setmetatile 4, 1, 0x00A6, TRUE
# 77 "data/maps/Black_Screen/scripts.pory"
	setmetatile 5, 1, 0x007F, TRUE
# 78 "data/maps/Black_Screen/scripts.pory"
	setmetatile 6, 1, 0x0090, TRUE
# 79 "data/maps/Black_Screen/scripts.pory"
	setmetatile 7, 1, 0x0091, TRUE
# 80 "data/maps/Black_Screen/scripts.pory"
	setmetatile 0, 2, 0x000E, FALSE
# 81 "data/maps/Black_Screen/scripts.pory"
	setmetatile 1, 2, 0x0003, FALSE
# 82 "data/maps/Black_Screen/scripts.pory"
	setmetatile 2, 2, 0x0003, FALSE
# 83 "data/maps/Black_Screen/scripts.pory"
	setmetatile 3, 2, 0x0085, FALSE
# 84 "data/maps/Black_Screen/scripts.pory"
	setmetatile 4, 2, 0x0086, FALSE
# 85 "data/maps/Black_Screen/scripts.pory"
	setmetatile 5, 2, 0x0087, FALSE
# 86 "data/maps/Black_Screen/scripts.pory"
	setmetatile 6, 2, 0x0098, FALSE
# 87 "data/maps/Black_Screen/scripts.pory"
	setmetatile 7, 2, 0x0099, FALSE
# 88 "data/maps/Black_Screen/scripts.pory"
	setmetatile 0, 3, 0x0005, FALSE
# 89 "data/maps/Black_Screen/scripts.pory"
	setmetatile 1, 3, 0x0001, FALSE
# 90 "data/maps/Black_Screen/scripts.pory"
	setmetatile 2, 3, 0x0001, FALSE
# 91 "data/maps/Black_Screen/scripts.pory"
	setmetatile 3, 3, 0x0060, FALSE
# 92 "data/maps/Black_Screen/scripts.pory"
	setmetatile 4, 3, 0x0061, FALSE
# 93 "data/maps/Black_Screen/scripts.pory"
	setmetatile 5, 3, 0x0061, FALSE
# 94 "data/maps/Black_Screen/scripts.pory"
	setmetatile 6, 3, 0x0061, FALSE
# 95 "data/maps/Black_Screen/scripts.pory"
	setmetatile 7, 3, 0x0062, FALSE
# 96 "data/maps/Black_Screen/scripts.pory"
	setmetatile 0, 4, 0x0005, FALSE
# 97 "data/maps/Black_Screen/scripts.pory"
	setmetatile 1, 4, 0x0001, FALSE
# 98 "data/maps/Black_Screen/scripts.pory"
	setmetatile 2, 4, 0x0001, FALSE
# 99 "data/maps/Black_Screen/scripts.pory"
	setmetatile 3, 4, 0x0068, FALSE
# 100 "data/maps/Black_Screen/scripts.pory"
	setmetatile 4, 4, 0x00B0, FALSE
# 101 "data/maps/Black_Screen/scripts.pory"
	setmetatile 5, 4, 0x00B1, FALSE
# 102 "data/maps/Black_Screen/scripts.pory"
	setmetatile 6, 4, 0x00B2, FALSE
# 103 "data/maps/Black_Screen/scripts.pory"
	setmetatile 7, 4, 0x006A, FALSE
# 104 "data/maps/Black_Screen/scripts.pory"
	setmetatile 0, 5, 0x00A4, TRUE
# 105 "data/maps/Black_Screen/scripts.pory"
	setmetatile 1, 5, 0x007C, FALSE
# 106 "data/maps/Black_Screen/scripts.pory"
	setmetatile 2, 5, 0x0001, FALSE
# 107 "data/maps/Black_Screen/scripts.pory"
	setmetatile 3, 5, 0x0068, FALSE
# 108 "data/maps/Black_Screen/scripts.pory"
	setmetatile 4, 5, 0x00B8, FALSE
# 109 "data/maps/Black_Screen/scripts.pory"
	setmetatile 5, 5, 0x00B9, TRUE
# 110 "data/maps/Black_Screen/scripts.pory"
	setmetatile 6, 5, 0x00BA, FALSE
# 111 "data/maps/Black_Screen/scripts.pory"
	setmetatile 7, 5, 0x006A, FALSE
# 112 "data/maps/Black_Screen/scripts.pory"
	setmetatile 0, 6, 0x00A3, TRUE
# 113 "data/maps/Black_Screen/scripts.pory"
	setmetatile 1, 6, 0x009C, TRUE
# 114 "data/maps/Black_Screen/scripts.pory"
	setmetatile 2, 6, 0x009B, TRUE
# 115 "data/maps/Black_Screen/scripts.pory"
	setmetatile 3, 6, 0x0070, FALSE
# 116 "data/maps/Black_Screen/scripts.pory"
	setmetatile 4, 6, 0x0071, FALSE
# 117 "data/maps/Black_Screen/scripts.pory"
	setmetatile 5, 6, 0x0071, FALSE
# 118 "data/maps/Black_Screen/scripts.pory"
	setmetatile 6, 6, 0x0071, FALSE
# 119 "data/maps/Black_Screen/scripts.pory"
	setmetatile 7, 6, 0x0072, FALSE
# 120 "data/maps/Black_Screen/scripts.pory"
	special DrawWholeMapView
# 121 "data/maps/Black_Screen/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 15
	return


Set_Start_Flags::
# 126 "data/maps/Black_Screen/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_1
# 127 "data/maps/Black_Screen/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MIKE_2
# 128 "data/maps/Black_Screen/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_2
# 129 "data/maps/Black_Screen/scripts.pory"
	setflag FLAG_OBR_HIDE_RIVAL_MIKE_3
# 130 "data/maps/Black_Screen/scripts.pory"
	setflag FLAG_OBR_SHOW_MUDBRAY
# 131 "data/maps/Black_Screen/scripts.pory"
	setflag FLAG_OBR_SHOW_SKIDDO
# 132 "data/maps/Black_Screen/scripts.pory"
	setflag FLAG_OBR_SHOW_PONYTA
	return


# 141 "data/maps/Black_Screen/scripts.pory"
PHB1F_Lillipup_Walk1:
# 142 "data/maps/Black_Screen/scripts.pory"
	walk_fast_down
# 142 "data/maps/Black_Screen/scripts.pory"
	walk_fast_down
# 142 "data/maps/Black_Screen/scripts.pory"
	walk_fast_down
# 143 "data/maps/Black_Screen/scripts.pory"
	walk_fast_right
# 143 "data/maps/Black_Screen/scripts.pory"
	walk_fast_right
	step_end

# 146 "data/maps/Black_Screen/scripts.pory"
JumpInPlace_Down:
# 147 "data/maps/Black_Screen/scripts.pory"
	jump_in_place_down
	step_end

# 150 "data/maps/Black_Screen/scripts.pory"
JumpInPlace_Right:
# 151 "data/maps/Black_Screen/scripts.pory"
	jump_in_place_right
	step_end

# 154 "data/maps/Black_Screen/scripts.pory"
JumpInPlace_Up:
# 155 "data/maps/Black_Screen/scripts.pory"
	jump_in_place_up
	step_end

# 158 "data/maps/Black_Screen/scripts.pory"
BS_Lilli_Ex1:
# 159 "data/maps/Black_Screen/scripts.pory"
	emote_exclamation_mark
	step_end

# 162 "data/maps/Black_Screen/scripts.pory"
BS_Lilli_Move1:
# 163 "data/maps/Black_Screen/scripts.pory"
	walk_fast_left
# 163 "data/maps/Black_Screen/scripts.pory"
	walk_fast_left
# 164 "data/maps/Black_Screen/scripts.pory"
	walk_fast_up
# 164 "data/maps/Black_Screen/scripts.pory"
	walk_fast_up
# 164 "data/maps/Black_Screen/scripts.pory"
	walk_fast_up
	step_end

BS_Leave_Bed_Text_0:
# 37 "data/maps/Black_Screen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Mom$"

BS_T_Mom1::
# 169 "data/maps/Black_Screen/scripts.pory"
	.string "{FONT_SMALL_NARROWER}Lilli!$"

BS_T_Mom2::
# 173 "data/maps/Black_Screen/scripts.pory"
	.string "{FONT_SMALL_NARROWER}Where'd you go, sweetie??$"
