Player_House_B1F_MapScripts::
	.byte 0


GiveMon4::
# 4 "data/maps/Player_House_B1F/scripts.pory"
	lock
# 5 "data/maps/Player_House_B1F/scripts.pory"
	removeobject 2
# 6 "data/maps/Player_House_B1F/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 7 "data/maps/Player_House_B1F/scripts.pory"
	showmonpic SPECIES_SKIDDO, 10, 3
# 8 "data/maps/Player_House_B1F/scripts.pory"
	givemon SPECIES_SKIDDO, 15, ITEM_MIRACLE_SEED, ITEM_POKE_BALL, 3, 0, MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_RAZOR_LEAF, MOVE_LEECH_SEED, MOVE_TACKLE, MOVE_GROWL, TRUE
# 9 "data/maps/Player_House_B1F/scripts.pory"
	waitse
# 10 "data/maps/Player_House_B1F/scripts.pory"
	hidemonpic
# 11 "data/maps/Player_House_B1F/scripts.pory"
	closemessage
# 12 "data/maps/Player_House_B1F/scripts.pory"
	setflag FLAG_HIDE_BALL
# 13 "data/maps/Player_House_B1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 14 "data/maps/Player_House_B1F/scripts.pory"
	release
	end


BattleNorman::
# 19 "data/maps/Player_House_B1F/scripts.pory"
	lock
# 20 "data/maps/Player_House_B1F/scripts.pory"
	faceplayer
# 21 "data/maps/Player_House_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_NORMAN, LoseText
# 22 "data/maps/Player_House_B1F/scripts.pory"
	release
	end

