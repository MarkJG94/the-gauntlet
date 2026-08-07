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
    TRAINER_MARKTEAM3_ASCENT,
    TRAINER_SURPRISE_ASCENT,
    TRAINER_KATIE_ELITE,
    TRAINER_DAVE_ELITE,
    TRAINER_GEORGE_ELITE,
    TRAINER_ZADE_ELITE,
    TRAINER_MATTHEW_ELITE,
    TRAINER_MATT_ELITE,
    TRAINER_JACK_ELITE,
    TRAINER_CEIZOR_ELITE,
    TRAINER_CAMMY_ELITE
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
static const u8 sCustomTitleSurprise[] = _(""); // Surprise
static const u8 sCustomTitleWoolooEnjoyer[] = _("Wooloo Enjoyer"); // Katie
static const u8 sCustomTitleFireMage[] = _("Fire Mage"); // Dave
static const u8 sCustomTitleConstable[] = _("Constable"); // George
static const u8 sCustomTitlePolishPisser[] = _("Polish Pisser"); // Zade
static const u8 sCustomTitleItemLevelMaxxer[] = _("Item Level Maxxer"); // Matthew
static const u8 sCustomTitleKPopHairline[] = _("K-Pop Hairline"); // Matt
static const u8 sCustomTitleVillageIdiot[] = _("Village Idiot"); // Jack
static const u8 sCustomTitleSoupervisor[] = _("Soupervisor"); // Ceizor
static const u8 sCustomTitleFoodKing[] = _("Food King"); // Cammy





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
    sCustomTitleFinalEcho,
    sCustomTitleSurprise,
    sCustomTitleWoolooEnjoyer,
    sCustomTitleFireMage,
    sCustomTitleConstable,
    sCustomTitlePolishPisser,
    sCustomTitleItemLevelMaxxer,
    sCustomTitleKPopHairline,
    sCustomTitleVillageIdiot,
    sCustomTitleSoupervisor,
    sCustomTitleFoodKing
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


