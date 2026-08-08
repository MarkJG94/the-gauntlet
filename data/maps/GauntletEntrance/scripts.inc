GauntletEntrance_MapScripts::
	.byte 0

GauntletEntrance_EventScript_Porygon2Doll::
	lock
	msgbox GauntletEntrance_Text_Porygon2Intro, MSGBOX_DEFAULT
	checkflag FLAG_GAUNTLET_ENTRANCE_DOLL_MOVED
	goto_if_eq VAR_RESULT, TRUE, GauntletEntrance_EventScript_End
	msgbox GauntletEntrance_Text_Porygon2Warning, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GauntletEntrance_EventScript_End
	applymovement VAR_LAST_TALKED, GauntletEntrance_Movement_Porygon2MoveAside
	waitmovement 0
	setobjectxyperm 1, 6, 5
	setflag FLAG_GAUNTLET_ENTRANCE_DOLL_MOVED
    release
    end

GauntletEntrance_EventScript_BradTree::
    lock
    msgbox GauntletEntrance_Text_BradTree, MSGBOX_DEFAULT
    release
    end

GauntletEntrance_EventScript_GetPokemonOnCodeEntry::
	goto EventScript_GetPokemonFromCodeEntry_Gauntlet
    end

GauntletEntrance_EventScript_End:
	release
	end

GauntletEntrance_EventScript_DebugTeamBall::
	lock
	msgbox GauntletEntrance_Text_DebugTeamBall, MSGBOX_DEFAULT
	givemon SPECIES_URSHIFU_RAPID_STRIKE, 100, item=ITEM_CHOICE_BAND, nature=NATURE_JOLLY, abilityNum=0, hpEv=0, atkEv=252, defEv=4, speedEv=252, spAtkEv=0, spDefEv=0, hpIv=31, atkIv=31, defIv=31, speedIv=31, spAtkIv=31, spDefIv=31, move1=MOVE_SURGING_STRIKES, move2=MOVE_CLOSE_COMBAT, move3=MOVE_IRON_HEAD, move4=MOVE_POISON_JAB
	givemon SPECIES_FLUTTER_MANE, 100, item=ITEM_CHOICE_SPECS, nature=NATURE_TIMID, abilityNum=0, hpEv=0, atkEv=0, defEv=0, speedEv=252, spAtkEv=252, spDefEv=4, hpIv=31, atkIv=31, defIv=31, speedIv=31, spAtkIv=31, spDefIv=31, move1=MOVE_MOONBLAST, move2=MOVE_SHADOW_BALL, move3=MOVE_THUNDERBOLT, move4=MOVE_POWER_GEM
	givemon SPECIES_ARCEUS, 100, item=ITEM_LIFE_ORB, nature=NATURE_ADAMANT, abilityNum=0, hpEv=252, atkEv=252, defEv=0, speedEv=0, spAtkEv=0, spDefEv=4, hpIv=31, atkIv=31, defIv=31, speedIv=31, spAtkIv=31, spDefIv=31, move1=MOVE_SWORDS_DANCE, move2=MOVE_RECOVER, move3=MOVE_EXTREME_SPEED, move4=MOVE_SHADOW_CLAW
	givemon SPECIES_KYOGRE, 100, item=ITEM_LEFTOVERS, nature=NATURE_MODEST, abilityNum=0, hpEv=132, atkEv=0, defEv=68, speedEv=108, spAtkEv=196, spDefEv=4, hpIv=31, atkIv=31, defIv=31, speedIv=31, spAtkIv=31, spDefIv=31, move1=MOVE_ORIGIN_PULSE, move2=MOVE_ICE_BEAM, move3=MOVE_CALM_MIND, move4=MOVE_PROTECT
	givemon SPECIES_RAGING_BOLT, 100, item=ITEM_BOOSTER_ENERGY, nature=NATURE_MODEST, abilityNum=0, hpEv=0, atkEv=0, defEv=4, speedEv=252, spAtkEv=252, spDefEv=0, hpIv=31, atkIv=20, defIv=31, speedIv=31, spAtkIv=31, spDefIv=31, move1=MOVE_CALM_MIND, move2=MOVE_THUNDERCLAP, move3=MOVE_DRAGON_PULSE, move4=MOVE_THUNDERBOLT
	givemon SPECIES_MELMETAL, 100, item=ITEM_CHOICE_BAND, nature=NATURE_BRAVE, abilityNum=0, hpEv=56, atkEv=248, defEv=16, speedEv=0, spAtkEv=0, spDefEv=188, hpIv=31, atkIv=31, defIv=31, speedIv=31, spAtkIv=31, spDefIv=31, move1=MOVE_DOUBLE_IRON_BASH, move2=MOVE_ICE_PUNCH, move3=MOVE_THUNDER_PUNCH, move4=MOVE_SUPERPOWER
	release
	end

GauntletEntrance_Movement_Porygon2MoveAside:
	walk_up
	walk_left
	step_end

GauntletEntrance_Text_Porygon2Intro:
	.string "BEEP! The Poke Ball beside me\n"
    .string "can generate POKeMON.\p"
	.string "The left PC is your POKeMON BOX, and\n"
	.string "the right PC is an ITEM SHOP.$"

GauntletEntrance_Text_Porygon2Warning:
	.string "WARNING! Once you enter the gauntlet,\n"
	.string "there is no turning back. Proceed?$"

GauntletEntrance_Text_BradTree:
    .string "This just seems like a regular tree.\p"
    .string "Nothing special about it.\p"
    .string "Brad the Tree: 'CHEESECAKE'\p"
    .string "You quickly walk away from\n"
    .string "Brad the Tree.$"

GauntletEntrance_Text_DebugTeamBall:
	.string "DEBUG: Added URSHIFU, FLUTTER MANE,\n"
	.string "ARCEUS, KYOGRE, RAGING BOLT and\l"
	.string "MELMETAL to your party.$"

