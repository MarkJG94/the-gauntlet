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
    .string "YOUR FAULT....$"

TheAbyss_Text_DusclopsDefeat:
    .string "...$"
    
TheAbyss_Text_DusclopsPostBattle:
    .string "...\n"
    .string "...$" 

SafeHaven_EventScript_Porygon2Heal::
    lock
    faceplayer
    msgbox MyHealingNPC_Text, MSGBOX_DEFAULT
    special HealPlayerParty
    msgbox MyHealingNPC_DoneText, MSGBOX_DEFAULT
    release
    end

MyHealingNPC_Text:
    .string "HI! I am Porygon2 version h.341!\n"
    .string "BZZT! Let me heal your POKéMON!$"

MyHealingNPC_DoneText:
    .string "BZZT! Your POKéMON are fully healed!\n"
    .string "BZZT! Take care!$"  
      
