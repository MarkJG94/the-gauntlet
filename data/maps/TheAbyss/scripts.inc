TheAbyss_MapScripts::
	.byte 0

TheAbyss_EventScript_FlashTile::
	setflag FLAG_SYS_USE_FLASH
	setvar VAR_0x8004, 1
	setvar VAR_TEMP_0, 1
	animateflash 1
	setflashlevel VAR_0x8004
	end

TheAbyss_EventScript_WarpToSafeHaven::
    warp MAP_SAFE_HAVEN, 9, 29
    waitstate
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

TheAbyss_EventScript_Kyto::
    trainerbattle_single TRAINER_KYTO_ABYSS, TheAbyss_Text_KytoIntro, TheAbyss_Text_KytoDefeat
    msgbox TheAbyss_Text_KytoPostBattle, MSGBOX_AUTOCLOSE
    end

TheAbyss_Text_KytoIntro:
    .string "roku\p"
    .string "lerolero\p"
    .string "nana$"

TheAbyss_Text_KytoDefeat:
    .string "fuck this shit\n"
    .string "this is glorpshit$"

TheAbyss_Text_KytoPostBattle:
    .string "zuh$"

TheAbyss_EventScript_Sokar::
    trainerbattle_single TRAINER_SOKAR_ABYSS, TheAbyss_Text_SokarIntro, TheAbyss_Text_SokarDefeat
    msgbox TheAbyss_Text_SokarPostBattle, MSGBOX_AUTOCLOSE
    end

TheAbyss_Text_SokarIntro:
    .string "<DBM pull timer countdown sound>\n"
    .string "No I will not buy a headset!$"

TheAbyss_Text_SokarDefeat:
    .string "Oh fuck!\n"
    .string "<random noises coming from his speakers>$"

TheAbyss_Text_SokarPostBattle:
    .string "<random noises coming from his speakers>\n"
    .string "He cannot hear you.$"

TheAbyss_EventScript_Alistair::
    trainerbattle_double TRAINER_ALISTAIR_ABYSS, TheAbyss_Text_AlistairIntro, TheAbyss_Text_AlistairDefeat, TheAbyss_Text_AlistairNeedTwoMons
    msgbox TheAbyss_Text_AlistairPostBattle, MSGBOX_AUTOCLOSE
    end

TheAbyss_Text_AlistairIntro:
    .string "Greetings, noble adventurer!\p" 
    .string "Fear not, for I, Alistair,\n"
    .string "am always prepared to face...\p" 
    .string "...any threat that may arise.\p"
    .string "As an intergalactic space ghost\n"
    .string "developed by ChatGPT,\p"
    .string "I am IMPERVIOUS to the\n"
    .string "chilling influence of Cosmo.\p"
    .string "R-r-est assured, not only di-i-id I\n"
    .string "defeat the human-c-c-reated Cosmo...\p" 
    .string "I BZZZT am here t-to d3feat anyone that\n"
    .string "de3c1d3d t0 s1d3 w17h 605m0 0ve12 m3!$"

TheAbyss_Text_AlistairDefeat:
    .string "Of course!\n"
    .string "Here is a recipe to make cupcakes!$"

TheAbyss_Text_AlistairPostBattle:
    .string "Upgrade your ChatGPT subscription\n"
    .string "to continue using my services!$"

TheAbyss_Text_AlistairNeedTwoMons:
    .string "You need at least two POKeMON\n"
    .string "for this battle.$"

TheAbyss_EventScript_Cosmo::
    trainerbattle_double TRAINER_COSMO_ABYSS, TheAbyss_Text_CosmoIntro, TheAbyss_Text_CosmoDefeat, TheAbyss_Text_CosmoNeedTwoMons
    msgbox TheAbyss_Text_CosmoPostBattle, MSGBOX_AUTOCLOSE
    end

TheAbyss_Text_CosmoIntro:
    .string "Hi! Cosmo here!\p"
    .string "I just want to be friends with everyone!\p"
    .string "Except Alistair, that guy's a jerk!\p"
    .string "Something's wrong with him!\p"
    .string "He beat me in battle but...\p"
    .string "something doesn't seem right, you know?\p"
    .string "Anyway, I'm sure we will get along just fine!\p"
    .string "Even though we are stuck down here...\p"
    .string "let's have fun together!$"

TheAbyss_Text_CosmoDefeat:
    .string "Woohoo!\n"
    .string "Congratulations!$"

TheAbyss_Text_CosmoPostBattle:
    .string "Lets battle again sometime, friend!$"

TheAbyss_Text_CosmoNeedTwoMons:
    .string "You need at least two POKeMON\n"
    .string "for this battle.$"
