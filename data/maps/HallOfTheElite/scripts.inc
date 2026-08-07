HallOfTheElite_MapScripts::
	.byte 0

HallofTheElite_EventScript_Katie::
	trainerbattle_single TRAINER_KATIE_ELITE, HallofTheElite_Text_KatieIntro, HallofTheElite_Text_KatieDefeat
	msgbox HallofTheElite_Text_KatiePostBattle, MSGBOX_AUTOCLOSE
	end

HallofTheElite_Text_KatieIntro::
    .string "GUP$"

HallofTheElite_Text_KatieDefeat::
    .string "Sadge :($"

HallofTheElite_Text_KatiePostBattle::
    .string "You beat me, yippee!$"

HallofTheElite_EventScript_Dave::
    trainerbattle_single TRAINER_DAVE_ELITE, HallofTheElite_Text_DaveIntro, HallofTheElite_Text_DaveDefeat
    msgbox HallofTheElite_Text_DavePostBattle, MSGBOX_AUTOCLOSE
    end

HallofTheElite_Text_DaveIntro::
    .string "I'll beat you up more than I\n"
    .string "beat up the Ardenweald dummies!$"

HallofTheElite_Text_DaveDefeat::
    .string "I dont even play WoW anyway$"

HallofTheElite_Text_DavePostBattle::
    .string "mmmm grey slop$"

HallofTheElite_EventScript_George::
    trainerbattle_single TRAINER_GEORGE_ELITE, HallofTheElite_Text_GeorgeIntro, HallofTheElite_Text_GeorgeDefeat
    msgbox HallofTheElite_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
    end

HallofTheElite_Text_GeorgeIntro::
    .string "BEN BEN BEN$"

HallofTheElite_Text_GeorgeDefeat::
    .string "Ben......$"

HallofTheElite_Text_GeorgePostBattle::
    .string "Ben :)$"

HallofTheElite_EventScript_Zade::
    trainerbattle_double TRAINER_ZADE_ELITE, HallofTheElite_Text_ZadeIntro, HallofTheElite_Text_ZadeDefeat, HallofTheElite_Text_ZadeNeedTwoMons
    msgbox HallofTheElite_Text_ZadePostBattle, MSGBOX_AUTOCLOSE
    end

HallofTheElite_Text_ZadeIntro::
    .string "yoo lets go xi home dumplings$"

HallofTheElite_Text_ZadeDefeat::
    .string "bro I just really needed a piss$"

HallofTheElite_Text_ZadeNeedTwoMons::
    .string "You need at least two POKeMON\n"
    .string "for this battle.$"

HallofTheElite_Text_ZadePostBattle::
    .string "I went to LOL park to cheer on\n"
    .string "a player that was benched XD$"

HallofTheElite_EventScript_Matthew::
    trainerbattle_double TRAINER_MATTHEW_ELITE, HallofTheElite_Text_MatthewIntro, HallofTheElite_Text_MatthewDefeat, HallofTheElite_Text_MatthewNeedTwoMons
    msgbox HallofTheElite_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
    end

HallofTheElite_Text_MatthewIntro::
    .string "I am a balance druid one trick$"

HallofTheElite_Text_MatthewDefeat::
    .string "balance nerfed gg$"

HallofTheElite_Text_MatthewNeedTwoMons::
    .string "You need at least two POKeMON\n"
    .string "for this battle.$"

HallofTheElite_Text_MatthewPostBattle::
    .string "matthew rogue omegalul$"

HallofTheElite_EventScript_Matt::
    trainerbattle_single TRAINER_MATT_ELITE, HallofTheElite_Text_MattIntro, HallofTheElite_Text_MattDefeat
    msgbox HallofTheElite_Text_MattPostBattle, MSGBOX_AUTOCLOSE
    end

HallofTheElite_Text_MattIntro::
    .string "drain gang$"

HallofTheElite_Text_MattDefeat::
    .string "hmmm i must eat my\n"
    .string "subway sandwich now$"

HallofTheElite_Text_MattPostBattle::
    .string "matt jungkook$"

HallofTheElite_EventScript_Jack::
    trainerbattle_single TRAINER_JACK_ELITE, HallofTheElite_Text_JackIntro, HallofTheElite_Text_JackDefeat
    msgbox HallofTheElite_Text_JackPostBattle, MSGBOX_AUTOCLOSE
    end

HallofTheElite_Text_JackIntro::
    .string "I scalp pokemon for profit$"

HallofTheElite_Text_JackDefeat::
    .string "I need to scalp more pokemon$"

HallofTheElite_Text_JackPostBattle::
    .string "I am an idiot$"

HallofTheElite_EventScript_Ceizor::
    trainerbattle_double TRAINER_CEIZOR_ELITE, HallofTheElite_Text_CeizorIntro, HallofTheElite_Text_CeizorDefeat, HallofTheElite_Text_CeizorNeedTwoMons
    msgbox HallofTheElite_Text_CeizorPostBattle, MSGBOX_AUTOCLOSE
    end

HallofTheElite_Text_CeizorIntro::
    .string "give me that shulker$"

HallofTheElite_Text_CeizorDefeat::
    .string "gg man$"

HallofTheElite_Text_CeizorNeedTwoMons::
    .string "You need at least two POKeMON\n"
    .string "for this battle.$"

HallofTheElite_Text_CeizorPostBattle::
    .string "Mr Lubba Lubba$"

HallofTheElite_EventScript_Cammy::
    trainerbattle_double TRAINER_CAMMY_ELITE, HallofTheElite_Text_CammyIntro, HallofTheElite_Text_CammyDefeat, HallofTheElite_Text_CammyNeedTwoMons
    msgbox HallofTheElite_Text_CammyPostBattle, MSGBOX_AUTOCLOSE
    end

HallofTheElite_EventScript_CammyApproachLeft::
    checktrainerflag TRAINER_CAMMY_ELITE
    goto_if TRUE, HallofTheElite_EventScript_CammyApproachDone
    lockall
    applymovement LOCALID_PLAYER, HallofTheElite_Movement_CammyApproachFromLeft
    waitmovement 0
    goto HallofTheElite_EventScript_CammyChampionFight
    end

HallofTheElite_EventScript_CammyApproachCenter::
    checktrainerflag TRAINER_CAMMY_ELITE
    goto_if TRUE, HallofTheElite_EventScript_CammyApproachDone
    lockall
    applymovement LOCALID_PLAYER, HallofTheElite_Movement_CammyApproachFromCenter
    waitmovement 0
    goto HallofTheElite_EventScript_CammyChampionFight
    end

HallofTheElite_EventScript_CammyApproachRight::
    checktrainerflag TRAINER_CAMMY_ELITE
    goto_if TRUE, HallofTheElite_EventScript_CammyApproachDone
    lockall
    applymovement LOCALID_PLAYER, HallofTheElite_Movement_CammyApproachFromRight
    waitmovement 0
    goto HallofTheElite_EventScript_CammyChampionFight
    end

HallofTheElite_EventScript_CammyChampionFight::
    trainerbattle_double TRAINER_CAMMY_ELITE, HallofTheElite_Text_CammyIntro, HallofTheElite_Text_CammyDefeat, HallofTheElite_Text_CammyNeedTwoMons
    msgbox HallofTheElite_Text_CammyPostBattle, MSGBOX_AUTOCLOSE
    releaseall
    end

HallofTheElite_EventScript_CammyApproachDone::
    end

HallofTheElite_Movement_CammyApproachFromLeft:
    walk_right
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

HallofTheElite_Movement_CammyApproachFromCenter:
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

HallofTheElite_Movement_CammyApproachFromRight:
    walk_left
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

HallofTheElite_Text_CammyIntro::
    .string "You expected to see Mark?\n"
    .string "But it's me, Cammy! YATTA!!$"

HallofTheElite_Text_CammyDefeat::
    .string "aw frick...$"

HallofTheElite_Text_CammyNeedTwoMons::
    .string "You need at least two POKeMON\n"
    .string "for this battle.$"

HallofTheElite_Text_CammyPostBattle::
    .string "Where's Mark? Go through the door\n"
    .string "and find out my slime!$"

HallofTheElite_EventScript_Porygon2Heal::
    lock
    faceplayer
    msgbox HallofTheElite_MyHealingNPC_Text, MSGBOX_DEFAULT
    special HealPlayerParty
    msgbox HallofTheElite_MyHealingNPC_DoneText, MSGBOX_DEFAULT
    release
    end

HallofTheElite_MyHealingNPC_Text:
    .string "H3AL HE--3=3AL\n"
    .string "h344444444444444444L$"

HallofTheElite_MyHealingNPC_DoneText:
    .string "====hhh=EAL\n"
    .string "n0 MOr3$"  