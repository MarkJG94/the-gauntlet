TheAscent_MapScripts::
	.byte 0

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



