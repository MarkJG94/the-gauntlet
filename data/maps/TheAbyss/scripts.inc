TheAbyss_MapScripts::
	.byte 0

TheAbyss_EventScript_FlashTile::
	setflag FLAG_SYS_USE_FLASH
	setvar VAR_0x8004, 1
	setvar VAR_TEMP_0, 1
	animateflash 1
	setflashlevel VAR_0x8004
	end
TheAbyss_EventScript_Yuki::
	trainerbattle_double TRAINER_YUKI_ABYSS, TheAbyss_Text_YukiIntro, TheAbyss_Text_YukiDefeat, TheAbyss_Text_YukiNeedTwoMons
	msgbox TheAbyss_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
	end

TheAbyss_Text_YukiIntro:
	.string "So you've fallen all the way down...\n"
	.string "to face me?$"

TheAbyss_Text_YukiDefeat:
    .string "Impressive!!$"

TheAbyss_Text_YukiNeedTwoMons:
	.string "You need at least two POKeMON\n"
	.string "for this battle.$"

TheAbyss_Text_YukiPostBattle:
	.string "DM yukisnowfox on discord\n"
    .string "for art commissions!$"

TheAbyss_EventScript_Ollie::
    trainerbattle_double TRAINER_OLLIE_ABYSS, TheAbyss_Text_OllieIntro, TheAbyss_Text_OllieDefeat, TheAbyss_Text_OllieNeedTwoMons
    msgbox TheAbyss_Text_OlliePostBattle, MSGBOX_AUTOCLOSE
    end

TheAbyss_Text_OllieIntro:
    .string "I've been looking at logs...\n"
    .string "...for so long while I have been\n"
    .string "trapped down here...\n"
    .string "...I know everything about you...$"

TheAbyss_Text_OllieDefeat:
    .string "A 100 parse...\n"
    .string "I can't believe it...$"

TheAbyss_Text_OlliePostBattle:
    .string "<is in a M+ dungeon>\n"
    .string "Ollie doesn't even realise you defeated him.$"

TheAbyss_Text_OllieNeedTwoMons:
    .string "You need at least two POKeMON\n"
    .string "for this battle.$"

TheAbyss_EventScript_Cas::
    trainerbattle_single TRAINER_CAS_ABYSS, TheAbyss_Text_CasIntro, TheAbyss_Text_CasDefeat
    msgbox TheAbyss_Text_CasPostBattle, MSGBOX_AUTOCLOSE
    end

TheAbyss_Text_CasIntro:
    .string "Um computah...\n"
    .string "Time to catch this bug!$"

TheAbyss_Text_CasDefeat:
    .string "Turns out you're just that bug...$"
    
TheAbyss_Text_CasPostBattle:
    .string "I just took a DNA test...\n"
    .string "Turns out I'm 100% that bug!$" 

TheAbyss_EventScript_Smith::
    trainerbattle_single TRAINER_SMITH_ABYSS, TheAbyss_Text_SmithIntro, TheAbyss_Text_SmithDefeat
    msgbox TheAbyss_Text_SmithPostBattle, MSGBOX_AUTOCLOSE
    end

TheAbyss_Text_SmithIntro:
    .string "I've been tricked!\p"
    .string "I thought this was\n"
    .string "the Galactic Gathering!$"

TheAbyss_Text_SmithDefeat:
    .string "Need to make a trello card\n"
    .string "to cope with this loss...$"

TheAbyss_Text_SmithPostBattle:
    .string "HEEEEEEEELP$"
