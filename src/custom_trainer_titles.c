#include "global.h"
#include "data.h"

// Custom trainer titles override the default class name
// To add a custom title for a trainer:
// 1. Add the trainer ID to sCustomTitlesTrainerIds array
// 2. Add the corresponding title to sCustomTitles array (same index)
// If no custom title exists for a trainer, the default class name is used

static const u16 sCustomTitlesTrainerIds[] = {
    TRAINER_YUKI_ABYSS,
};

static const u8 sCustomTitleKrustyKrabOwner[] = _("Krusty Krab Owner");

static const u8 *sCustomTitles[] = {
    sCustomTitleKrustyKrabOwner,
};

const u8 *GetCustomTrainerTitle(u16 trainerId)
{
    u32 i;
    
    for (i = 0; i < ARRAY_COUNT(sCustomTitlesTrainerIds); i++)
    {
        if (sCustomTitlesTrainerIds[i] == trainerId)
            return sCustomTitles[i];
    }
    
    // No custom title found, return NULL
    return NULL;
}


