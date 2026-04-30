SafeHaven_MapScripts::
    map_script MAP_SCRIPT_ON_LOAD, SafeHaven_OnLoad
	.byte 0

SafeHaven_OnLoad:
    checkflag FLAG_SAFE_HAVEN_CODE_ENTRY_HIDDEN
    goto_if_eq VAR_RESULT, TRUE, SafeHaven_OnLoad_End
    checkflag FLAG_SAFE_HAVEN_CODE_ENTRY_USED
    goto_if_eq VAR_RESULT, FALSE, SafeHaven_OnLoad_End
    clearflag FLAG_SAFE_HAVEN_CODE_ENTRY_USED

SafeHaven_OnLoad_End:
    end

SafeHaven_EventScript_GetPokemonOnCodeEntry::
    lock
    msgbox SafeHaven_Text_CodeEntryWarning, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, SafeHaven_EventScript_End
    release
    goto EventScript_GetPokemonFromCodeEntry
    end

SafeHaven_EventScript_End::
    release
    end

SafeHaven_Text_CodeEntryWarning:
    .string "Using this service will remove any\n"
    .string "fainted POKeMON from your party.\p"
    .string "You can only use this once.\n"
    .string "Proceed?$"

SafeHaven_EventScript_Dusclops::
    trainerbattle_single TRAINER_DUSCLOPS_SH, TheAbyss_Text_DusclopsIntro, TheAbyss_Text_DusclopsDefeat
    msgbox TheAbyss_Text_DusclopsPostBattle, MSGBOX_AUTOCLOSE
    end

TheAbyss_Text_DusclopsIntro:
    .string "LEAVE....$"

TheAbyss_Text_DusclopsDefeat:
    .string "...$"
    
TheAbyss_Text_DusclopsPostBattle:
    .string "...\n"
    .string "...$" 

