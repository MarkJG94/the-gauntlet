ThePeak_MapScripts::
	.byte 0

ThePeak_EventScript_Porygon2::
    settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 1
    trainerbattle_single TRAINER_PORYGON2_PEAK, ThePeak_Text_Porygon2Intro, ThePeak_Text_Porygon2Defeat
    msgbox ThePeak_Text_Porygon2PostBattle, MSGBOX_AUTOCLOSE
    msgbox ThePeak_Text_Porygon2SelfDestruct, MSGBOX_AUTOCLOSE
    playse SE_M_EXPLOSION
    waitse
    removeobject 3
    setflag FLAG_HIDE_THE_PEAK_PORYGON2
    end

ThePeak_Text_Porygon2Intro::
    .string "K1LL.... K1LL....\n"
    .string "MU5T N0T R34CH...\p"
    .string "TH3 M45T3R...\n"
    .string "K1LL... K1LL... K1LL...$"

ThePeak_Text_Porygon2Defeat::
    .string "a-aaaaB0RT...$"

ThePeak_Text_Porygon2PostBattle::
    .string "K1LL... K1LL... K1LL...$"

ThePeak_Text_Porygon2SelfDestruct::
    .string "SYST3M C0MPR0M1S3D...\n"
    .string "1N1T14T1NG S3LF-D3STRUCT...$"

ThePeak_EventScript_Mark::
    trainerbattle_double TRAINER_MARK_PEAK, ThePeak_Text_MarkIntro, ThePeak_Text_MarkDefeat, ThePeak_Text_MarkNeedTwoMons
    msgbox ThePeak_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
    end

ThePeak_Text_MarkIntro::
    .string "I'm surprised you made it here.\p"
    .string "My attempts to get rid of you failed,\n"
    .string "not even the Porygon2 could stop you.\p"
    .string "I guess I'll have to do it myself.\p"
    .string "Let's end this. Right here, right now.$"

ThePeak_Text_MarkDefeat::
    .string "Impossible... How could I lose to you?\p"
    .string "How DARE you beat me in my own domain!$"

ThePeak_Text_MarkNeedTwoMons::
    .string "You need at least two POKeMON\n"
    .string "for this battle.$"

ThePeak_Text_MarkPostBattle::
    .string "I... I can't believe I lost to you.$"

ThePeak_EventScript_Porygon2Heal::
    lock
    faceplayer
    msgbox ThePeak_MyHealingNPC_Text, MSGBOX_DEFAULT
    special HealPlayerParty
    msgbox ThePeak_MyHealingNPC_DoneText, MSGBOX_DEFAULT
    release
    playse SE_M_EXPLOSION
    waitse
    removeobject 2
    setflag FLAG_HIDE_THE_PEAK_HEALING_PORYGON2
    end

ThePeak_MyHealingNPC_Text:
    .string "......\n"
    .string "(your party has been healed)$"

ThePeak_MyHealingNPC_DoneText:
    .string "......$"