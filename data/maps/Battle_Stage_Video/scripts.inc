Battle_Stage_Video_MapScripts::
# 2 "data/maps/Battle_Stage_Video/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Battle_Stage_Video_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Battle_Stage_Video_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Battle_Stage_Video/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 10, BSV_Scene_Start
# 4 "data/maps/Battle_Stage_Video/scripts.pory"
	map_script_2 VAR_ADVENTURE_START, 11, BSV_Post_Battle
	.2byte 0


BSV_Scene_Start::
# 9 "data/maps/Battle_Stage_Video/scripts.pory"
	lock
# 10 "data/maps/Battle_Stage_Video/scripts.pory"
	fadescreen FADE_TO_WHITE
# 11 "data/maps/Battle_Stage_Video/scripts.pory"
	special SpawnCameraObject
# 12 "data/maps/Battle_Stage_Video/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BSV_CAM_1
# 13 "data/maps/Battle_Stage_Video/scripts.pory"
	waitmovement 0
# 14 "data/maps/Battle_Stage_Video/scripts.pory"
	addobject 1
# 15 "data/maps/Battle_Stage_Video/scripts.pory"
	addobject 2
# 16 "data/maps/Battle_Stage_Video/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 4
# 17 "data/maps/Battle_Stage_Video/scripts.pory"
	playbgm MUS_RG_VICTORY_ROAD, TRUE
# 18 "data/maps/Battle_Stage_Video/scripts.pory"
	delay 60
# 19 "data/maps/Battle_Stage_Video/scripts.pory"
	speakername BSV_Scene_Start_Text_0
# 20 "data/maps/Battle_Stage_Video/scripts.pory"
	msgbox BSV_T_PA1
# 21 "data/maps/Battle_Stage_Video/scripts.pory"
	waitmessage
# 22 "data/maps/Battle_Stage_Video/scripts.pory"
	closemessage
# 23 "data/maps/Battle_Stage_Video/scripts.pory"
	playse SE_APPLAUSE
# 24 "data/maps/Battle_Stage_Video/scripts.pory"
	call BSV_ShakeScreen_Vars
# 25 "data/maps/Battle_Stage_Video/scripts.pory"
	delay 30
# 27 "data/maps/Battle_Stage_Video/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BSV_CAM_2
# 28 "data/maps/Battle_Stage_Video/scripts.pory"
	waitmovement 0
# 29 "data/maps/Battle_Stage_Video/scripts.pory"
	delay 10
# 30 "data/maps/Battle_Stage_Video/scripts.pory"
	speakername BSV_Scene_Start_Text_1
# 31 "data/maps/Battle_Stage_Video/scripts.pory"
	msgbox BSV_Scene_Start_Text_2
# 32 "data/maps/Battle_Stage_Video/scripts.pory"
	waitmessage
# 33 "data/maps/Battle_Stage_Video/scripts.pory"
	closemessage
# 34 "data/maps/Battle_Stage_Video/scripts.pory"
	delay 10
# 35 "data/maps/Battle_Stage_Video/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 36 "data/maps/Battle_Stage_Video/scripts.pory"
	addobject 6
# 37 "data/maps/Battle_Stage_Video/scripts.pory"
	waitse
# 38 "data/maps/Battle_Stage_Video/scripts.pory"
	playse SE_BALL_OPEN
# 39 "data/maps/Battle_Stage_Video/scripts.pory"
	addobject 4
# 40 "data/maps/Battle_Stage_Video/scripts.pory"
	removeobject 6
# 41 "data/maps/Battle_Stage_Video/scripts.pory"
	playmoncry SPECIES_ABSOL, 2
# 42 "data/maps/Battle_Stage_Video/scripts.pory"
	special ShakeCamera
# 43 "data/maps/Battle_Stage_Video/scripts.pory"
	waitmoncry
# 44 "data/maps/Battle_Stage_Video/scripts.pory"
	delay 80
# 46 "data/maps/Battle_Stage_Video/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BSV_CAM_3
# 47 "data/maps/Battle_Stage_Video/scripts.pory"
	waitmovement 0
# 48 "data/maps/Battle_Stage_Video/scripts.pory"
	delay 10
# 49 "data/maps/Battle_Stage_Video/scripts.pory"
	speakername BSV_Scene_Start_Text_3
# 50 "data/maps/Battle_Stage_Video/scripts.pory"
	msgbox BSV_Scene_Start_Text_4
# 51 "data/maps/Battle_Stage_Video/scripts.pory"
	waitmessage
# 52 "data/maps/Battle_Stage_Video/scripts.pory"
	closemessage
# 53 "data/maps/Battle_Stage_Video/scripts.pory"
	delay 10
# 54 "data/maps/Battle_Stage_Video/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 55 "data/maps/Battle_Stage_Video/scripts.pory"
	addobject 5
# 56 "data/maps/Battle_Stage_Video/scripts.pory"
	waitse
# 57 "data/maps/Battle_Stage_Video/scripts.pory"
	playse SE_BALL_OPEN
# 58 "data/maps/Battle_Stage_Video/scripts.pory"
	addobject 3
# 59 "data/maps/Battle_Stage_Video/scripts.pory"
	removeobject 5
# 60 "data/maps/Battle_Stage_Video/scripts.pory"
	playmoncry SPECIES_ARCANINE, 2
# 61 "data/maps/Battle_Stage_Video/scripts.pory"
	special ShakeCamera
# 62 "data/maps/Battle_Stage_Video/scripts.pory"
	waitmoncry
# 63 "data/maps/Battle_Stage_Video/scripts.pory"
	delay 80
# 65 "data/maps/Battle_Stage_Video/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BSV_CAM_2
# 66 "data/maps/Battle_Stage_Video/scripts.pory"
	waitmovement 0
# 67 "data/maps/Battle_Stage_Video/scripts.pory"
	delay 60
# 68 "data/maps/Battle_Stage_Video/scripts.pory"
	playse SE_M_SKY_UPPERCUT
# 69 "data/maps/Battle_Stage_Video/scripts.pory"
	applymovement 3, BSV_Arcanine_Lunge
# 70 "data/maps/Battle_Stage_Video/scripts.pory"
	applymovement 4, BSV_Absol_Lunge
# 71 "data/maps/Battle_Stage_Video/scripts.pory"
	waitmovement 0
# 72 "data/maps/Battle_Stage_Video/scripts.pory"
	ai_vs_ai_battle TRAINER_CHAMPION_NORMAN, TRAINER_CHAMPION_DEE
# 73 "data/maps/Battle_Stage_Video/scripts.pory"
	removeobject 3
# 74 "data/maps/Battle_Stage_Video/scripts.pory"
	removeobject 4
# 75 "data/maps/Battle_Stage_Video/scripts.pory"
	setvar VAR_ADVENTURE_START, 11
# 76 "data/maps/Battle_Stage_Video/scripts.pory"
	release
	end


BSV_Post_Battle::
# 81 "data/maps/Battle_Stage_Video/scripts.pory"
	delay 20
# 82 "data/maps/Battle_Stage_Video/scripts.pory"
	playse SE_APPLAUSE
# 83 "data/maps/Battle_Stage_Video/scripts.pory"
	speakername BSV_Scene_Start_Text_0
# 84 "data/maps/Battle_Stage_Video/scripts.pory"
	msgbox BSV_T_PA2
# 85 "data/maps/Battle_Stage_Video/scripts.pory"
	waitmessage
# 86 "data/maps/Battle_Stage_Video/scripts.pory"
	closemessage
# 87 "data/maps/Battle_Stage_Video/scripts.pory"
	special ZeroPlayerPartyMons
# 88 "data/maps/Battle_Stage_Video/scripts.pory"
	warpwhitefade MAP_PLAYER_HOUSE_1F, 4, 4
# 89 "data/maps/Battle_Stage_Video/scripts.pory"
	setvar VAR_ADVENTURE_START, 12
# 90 "data/maps/Battle_Stage_Video/scripts.pory"
	release
	end


BSV_ShakeScreen_Vars::
# 95 "data/maps/Battle_Stage_Video/scripts.pory"
	setvar VAR_0x8004, 1
# 96 "data/maps/Battle_Stage_Video/scripts.pory"
	setvar VAR_0x8005, 1
# 97 "data/maps/Battle_Stage_Video/scripts.pory"
	setvar VAR_0x8006, 6
# 98 "data/maps/Battle_Stage_Video/scripts.pory"
	setvar VAR_0x8007, 2
	return


# 102 "data/maps/Battle_Stage_Video/scripts.pory"
BSV_CAM_1:
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
# 103 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_up
	step_end

# 106 "data/maps/Battle_Stage_Video/scripts.pory"
BSV_CAM_2:
# 107 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_slow_right
# 107 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_slow_right
# 107 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_slow_right
	step_end

# 110 "data/maps/Battle_Stage_Video/scripts.pory"
BSV_CAM_3:
# 111 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_slow_left
# 111 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_slow_left
# 111 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_slow_left
# 111 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_slow_left
# 111 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_slow_left
# 111 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_slow_left
	step_end

# 114 "data/maps/Battle_Stage_Video/scripts.pory"
BSV_Arcanine_Lunge:
# 115 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_right
	step_end

# 118 "data/maps/Battle_Stage_Video/scripts.pory"
BSV_Absol_Lunge:
# 119 "data/maps/Battle_Stage_Video/scripts.pory"
	walk_faster_left
	step_end

BSV_Scene_Start_Text_0:
# 19 "data/maps/Battle_Stage_Video/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{FONT_SHORT}Announcer$"

BSV_Scene_Start_Text_1:
# 30 "data/maps/Battle_Stage_Video/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}{FONT_SHORT}Dee$"

BSV_Scene_Start_Text_2:
# 31 "data/maps/Battle_Stage_Video/scripts.pory"
	.string "Go, Absol!$"

BSV_Scene_Start_Text_3:
# 49 "data/maps/Battle_Stage_Video/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}{FONT_SHORT}Norman$"

BSV_Scene_Start_Text_4:
# 50 "data/maps/Battle_Stage_Video/scripts.pory"
	.string "Arcanine, you're up!$"

BSV_T_PA1::
# 122 "data/maps/Battle_Stage_Video/scripts.pory"
	.string "IT ALL COMES DOWN TO THIS, FOLKS!\n"
	.string "TWO TRAINERS FACING OFF!\p"
	.string "ONE WILL CLAIM THE DIVISION TITLE!\n"
	.string "NOW, TO THE ACTION!$"

BSV_T_PA2::
# 129 "data/maps/Battle_Stage_Video/scripts.pory"
	.string "AND THE WINNER IS, NORMAN!!!$"
