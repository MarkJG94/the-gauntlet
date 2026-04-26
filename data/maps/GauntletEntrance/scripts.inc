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
    goto EventScript_GetPokemonFromCodeEntry
    end

GauntletEntrance_EventScript_End:
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

