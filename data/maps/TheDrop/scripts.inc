TheDrop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TheDrop_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TheDrop_OnFrame
	.byte 0

TheDrop_OnTransition::
	setholewarp MAP_THE_ABYSS, 7, 58
	end

TheDrop_OnFrame::
	map_script_2 VAR_TEMP_0, 0, TheDrop_EventScript_EntranceCutscene
	.2byte 0

TheDrop_EventScript_EntranceCutscene::
	lockall
	setvar VAR_TEMP_0, 1
	applymovement LOCALID_PLAYER, TheDrop_Movement_PlayerStepForward
	waitmovement 0
	delay 8
	addobject 1
	clearflag FLAG_UNUSED_0x4A7
	setobjectxy 1, 3, 4
	showobjectat 1, MAP_THE_DROP
	playse SE_FALL
	delay 4
	setobjectxy 1, 3, 5
	delay 4
	setobjectxy 1, 3, 6
	playse SE_M_STRENGTH
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 6
	setvar VAR_0x8007, 4
	special ShakeCamera
	waitstate
	delay 30
	msgbox TheDrop_Text_NoWayOut, MSGBOX_DEFAULT
	releaseall
	end

TheDrop_Movement_PlayerStepForward:
	face_up
	walk_up
	walk_up
	step_end

TheDrop_Text_NoWayOut:
	.string "There is only one way out.\p" 
    .string "Good luck.$"
