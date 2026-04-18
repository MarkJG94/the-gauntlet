TheAbyss_MapScripts::
	.byte 0

TheAbyss_EventScript_Yuki::
	trainerbattle_double TRAINER_YUKI_ABYSS, TheAbyss_Text_YukiIntro, TheAbyss_Text_YukiDefeat, TheAbyss_Text_YukiNeedTwoMons
	msgbox TheAbyss_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
	end

TheAbyss_Text_YukiIntro:
	.string "So you've fallen all the way down...\n"
	.string "to face me?$"

TheAbyss_Text_YukiDefeat:
	.string "Impressive. You survived the abyss.$"

TheAbyss_Text_YukiNeedTwoMons:
	.string "You need at least two POKeMON\n"
	.string "for this battle.$"

TheAbyss_Text_YukiPostBattle:
	.string "There is no turning back now.$"
