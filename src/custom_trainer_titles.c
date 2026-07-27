#include "global.h"
#include "data.h"

// Custom trainer titles override the default class name
// To add a custom title for a trainer:
// 1. Add the trainer ID to sCustomTitlesTrainerIds array
// 2. Add the corresponding title to sCustomTitles array (same index)
// If no custom title exists for a trainer, the default class name is used

static const u16 sCustomTitlesTrainerIds[] = {
    TRAINER_YUKI_ABYSS,
    TRAINER_OLLIE_ABYSS,
    TRAINER_CAS_ABYSS,
    TRAINER_SMITH_ABYSS,
    TRAINER_KYTO_ABYSS,
    TRAINER_SOKAR_ABYSS,
    TRAINER_ALISTAIR_ABYSS,
    TRAINER_COSMO_ABYSS,
    TRAINER_DUSCLOPS_SH,
    TRAINER_BEN_ASCENT,
    TRAINER_ITAG_ASCENT,
    TRAINER_VICI_ASCENT,
    TRAINER_MARKTEAM1_ASCENT,
    TRAINER_MARKTEAM2_ASCENT,
    TRAINER_MARKTEAM3_ASCENT
};

static const u8 sCustomTitleWitchOfRuin[] = _("Witch of Ruin"); // Yuki
static const u8 sCustomTitleHeliosCaptain[] = _("Helios Captain"); // Ollie
static const u8 sCustomTitleCertifiedBug[] = _("Certified Bug"); // Cas
static const u8 sCustomTitleStarshipLeader[] = _("Starship Leader"); // Smith
static const u8 sCustomTitleSoCold[] = _("So Cold"); // Kyto
static const u8 sCustomTitleHeadsetHater[] = _("Headset Hater"); // Sokar
static const u8 sCustomTitleAbandonedAI[] = _("Abandoned AI"); // Alistair
static const u8 sCustomTitleStarshipMascot[] = _("Starship Mascot"); // Cosmo
static const u8 sCustomTitleTheForgotten[] = _("The Forgotten"); // Dusclops SH
static const u8 sCustomTitleSleepy[] = _("Sleepy"); // Ben
static const u8 sCustomTitleStreamSniper[] = _("Stream Sniper"); // itag
static const u8 sCustomTitleNuzlockeSaviour[] = _("Nuzlocke Saviour"); // Vici
static const u8 sCustomTitleFirstEcho[] = _("First Echo of "); // Mark Team 1
static const u8 sCustomTitleSecondEcho[] = _("Second Echo of "); // Mark Team 2
static const u8 sCustomTitleFinalEcho[] = _("Legendary Echo of "); // Mark Team 3




static const u8 *sCustomTitles[] = {
    sCustomTitleWitchOfRuin,
    sCustomTitleHeliosCaptain,
    sCustomTitleCertifiedBug,
    sCustomTitleStarshipLeader,
    sCustomTitleSoCold,
    sCustomTitleHeadsetHater,
    sCustomTitleAbandonedAI,
    sCustomTitleStarshipMascot,
    sCustomTitleTheForgotten,
    sCustomTitleSleepy,
    sCustomTitleStreamSniper,
    sCustomTitleNuzlockeSaviour,
    sCustomTitleFirstEcho,
    sCustomTitleSecondEcho,
    sCustomTitleFinalEcho
};

const u8 *GetCustomTrainerTitle(u16 trainerId)
{
    u32 i;
    u16 sanitizedTrainerId = SanitizeTrainerId(trainerId);
    
    for (i = 0; i < ARRAY_COUNT(sCustomTitlesTrainerIds); i++)
    {
        if (sCustomTitlesTrainerIds[i] == sanitizedTrainerId)
            return sCustomTitles[i];
    }
    
    // No custom title found, return NULL
    return NULL;
}


