TheAscent_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, TheAscent_OnResume
	.byte 0

TheAscent_OnResume::
	checktrainerflag TRAINER_MARKTEAM1_ASCENT
	goto_if TRUE, TheAscent_OnResume_Team1Beaten
	goto TheAscent_OnResume_CheckTeam2
TheAscent_OnResume_Team1Beaten:
	setobjectxyperm 7, 15, 21
TheAscent_OnResume_CheckTeam2:
	checktrainerflag TRAINER_MARKTEAM2_ASCENT
	goto_if TRUE, TheAscent_OnResume_Team2Beaten
	goto TheAscent_OnResume_CheckTeam3
TheAscent_OnResume_Team2Beaten:
	setobjectxyperm 8, 13, 16
TheAscent_OnResume_CheckTeam3:
	checktrainerflag TRAINER_MARKTEAM3_ASCENT
	goto_if TRUE, TheAscent_OnResume_Team3Beaten
	goto TheAscent_OnResume_End
TheAscent_OnResume_Team3Beaten:
	setobjectxyperm 9, 15, 12
TheAscent_OnResume_End:
	end

TheAscent_EventScript_Ben::
	trainerbattle_double TRAINER_BEN_ASCENT, TheAscent_Text_BenIntro, TheAscent_Text_BenDefeat, TheAscent_Text_BenNeedTwoMons
	msgbox TheAscent_Text_BenPostBattle, MSGBOX_AUTOCLOSE
	end

TheAscent_Text_BenIntro:
	.string "I was the boss of the first version\n"
	.string "of the game... why am I here!?$"

TheAscent_Text_BenDefeat:
    .string "…falls asleep…$"

TheAscent_Text_BenNeedTwoMons:
	.string "You need at least two POKeMON\n"
	.string "for this battle.$"

TheAscent_Text_BenPostBattle:
	.string "Is too busy singing The Beatles\n"
    .string "rather than giving you attention.$"

TheAscent_EventScript_itag::
	trainerbattle_double TRAINER_ITAG_ASCENT, TheAscent_Text_itagIntro, TheAscent_Text_itagDefeat, TheAscent_Text_itagNeedTwoMons
	msgbox TheAscent_Text_itagPostBattle, MSGBOX_AUTOCLOSE
	end

TheAscent_Text_itagIntro:
	.string "Mario Kart when? MYMAP$"

TheAscent_Text_itagDefeat:
    .string "I'll never play MK again...$"

TheAscent_Text_itagNeedTwoMons:
	.string "You need at least two POKeMON\n"
	.string "for this battle.$"

TheAscent_Text_itagPostBattle:
	.string "Browt is the best!$"

TheAscent_EventScript_Vici::
	trainerbattle_double TRAINER_VICI_ASCENT, TheAscent_Text_ViciIntro, TheAscent_Text_ViciDefeat, TheAscent_Text_ViciNeedTwoMons
	msgbox TheAscent_Text_ViciPostBattle, MSGBOX_AUTOCLOSE
	end

TheAscent_Text_ViciIntro:
	.string "xdd$"

TheAscent_Text_ViciDefeat:
    .string "catDespair$"

TheAscent_Text_ViciNeedTwoMons:
	.string "You need at least two POKeMON\n"
	.string "for this battle.$"

TheAscent_Text_ViciPostBattle:
	.string "xddbull$"

TheAscent_EventScript_DusclopsSight::
	lock
	msgbox TheAscent_Text_DusclopsSightExclaim, MSGBOX_DEFAULT
	warp MAP_THE_ASCENT, 8, 45
	waitstate
	end

TheAscent_Text_DusclopsSightExclaim:
	.string "!!!$"

TheAscent_EventScript_MarkTeam1::
	trainerbattle_single TRAINER_MARKTEAM1_ASCENT, TheAscent_Text_MarkTeam1Intro, TheAscent_Text_MarkTeam1Defeat
	msgbox TheAscent_Text_MarkTeam1PostBattle, MSGBOX_AUTOCLOSE
	checkflag FLAG_MARKTEAM1_ASCENT_MOVED
	goto_if TRUE, TheAscent_EventScript_MarkTeam1_End
	setflag FLAG_MARKTEAM1_ASCENT_MOVED
	applymovement 7, Common_Movement_WalkRight
	waitmovement 0
	setobjectxyperm 7, 15, 21
TheAscent_EventScript_MarkTeam1_End:
	end

TheAscent_Text_MarkTeam1Intro:
	.string "I am the first of three...\n"
	.string "Will you defeat me?$"

TheAscent_Text_MarkTeam1Defeat:
	.string "Two left.$"

TheAscent_Text_MarkTeam1PostBattle:
	.string "Go on, then.$"

TheAscent_EventScript_MarkTeam2::
	trainerbattle_double TRAINER_MARKTEAM2_ASCENT, TheAscent_Text_MarkTeam2Intro, TheAscent_Text_MarkTeam2Defeat, TheAscent_Text_MarkTeam2NeedTwoMons
	msgbox TheAscent_Text_MarkTeam2PostBattle, MSGBOX_AUTOCLOSE
	checkflag FLAG_MARKTEAM2_ASCENT_MOVED
	goto_if TRUE, TheAscent_EventScript_MarkTeam2_End
	setflag FLAG_MARKTEAM2_ASCENT_MOVED
	applymovement 8, Common_Movement_WalkLeft
	waitmovement 0
	setobjectxyperm 8, 13, 16
TheAscent_EventScript_MarkTeam2_End:
	end

TheAscent_Text_MarkTeam2Intro:
	.string "You shall not win here.$"

TheAscent_Text_MarkTeam2Defeat:
	.string "Not bad...$"

TheAscent_Text_MarkTeam2NeedTwoMons:
	.string "You need at least two POKeMON\n"
	.string "for this battle.$"

TheAscent_Text_MarkTeam2PostBattle:
	.string "Fine, fine.$"

TheAscent_EventScript_MarkTeam3::
	trainerbattle_double TRAINER_MARKTEAM3_ASCENT, TheAscent_Text_MarkTeam3Intro, TheAscent_Text_MarkTeam3Defeat, TheAscent_Text_MarkTeam3NeedTwoMons
	msgbox TheAscent_Text_MarkTeam3PostBattle, MSGBOX_AUTOCLOSE
	checkflag FLAG_MARKTEAM3_ASCENT_MOVED
	goto_if TRUE, TheAscent_EventScript_MarkTeam3_End
	setflag FLAG_MARKTEAM3_ASCENT_MOVED
	applymovement 9, Common_Movement_WalkRight
	waitmovement 0
	setobjectxyperm 9, 15, 12
TheAscent_EventScript_MarkTeam3_End:
	end

TheAscent_Text_MarkTeam3Intro:
	.string "Fight against the full might\n"
    .string "of my master!$"

TheAscent_Text_MarkTeam3Defeat:
	.string "...Alright.$"

TheAscent_Text_MarkTeam3NeedTwoMons:
	.string "You need at least two POKeMON\n"
	.string "for this battle.$"

TheAscent_Text_MarkTeam3PostBattle:
	.string "The way is clear now.\n"
    .string "You can never defeat the real deal.$"

TheAscent_EventScript_Surprise::
    trainerbattle_single TRAINER_SURPRISE_ASCENT, TheAscent_Text_SurpriseIntro, TheAscent_Text_SurpriseDefeat, TheAscent_Text_SurpriseNeedTwoMons
    msgbox TheAscent_Text_SurprisePostBattle, MSGBOX_AUTOCLOSE
    end

TheAscent_Text_SurpriseIntro:
    .string "Surprise!$"

TheAscent_Text_SurpriseDefeat:
    .string "Surprise!$"

TheAscent_Text_SurpriseNeedTwoMons:
    .string "You need at least two POKeMON\n"
    .string "for this battle.$"

TheAscent_Text_SurprisePostBattle:
    .string "Surprise!$"

TheAscent_EventScript_Porygon2Heal::
    lock
    faceplayer
    msgbox TheAscent_MyHealingNPC_Text, MSGBOX_DEFAULT
    special HealPlayerParty
    msgbox TheAscent_MyHealingNPC_DoneText, MSGBOX_DEFAULT
    release
    end

TheAscent_MyHealingNPC_Text:
    .string "H1! I am Poryg0n2 v-v-version h..!\n"
    .string "BZZT! Let m3 <ERROR> y0ur P0K3M0N!$"

TheAscent_MyHealingNPC_DoneText:
    .string "BZZT! Your P0K3M0N are <ERROR>!\n"
    .string "BZZT!$"  

