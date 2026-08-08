#include "constants/species.h"
#include "constants/items.h"
#include "constants/abilities.h"
#include "constants/moves.h"

// Auto-generated from pokemon_sets.json
const struct PokemonSets gPokemonSets[NUM_SPECIES] =
{
    [SPECIES_BULBASAUR] = // Sun Sweeper Jr
    {
        .name = _("Bulbasaur"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 44, 156, 236, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_WEATHER_BALL}
    },

    [SPECIES_IVYSAUR] = // Defensive
    {
        .name = _("Ivysaur"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS}
    },

    [SPECIES_VENUSAUR] = // Sun Sweeper
    {
        .name = _("Venusaur"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL}
    },

    [SPECIES_CHARMANDER] = // Sun Wallbreaker
    {
        .name = _("Charmander"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SOLAR_POWER,
        .nature = NATURE_TIMID,
        .evs = {44, 0, 12, 236, 196, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WEATHER_BALL, MOVE_FIRE_BLAST, MOVE_OVERHEAT, MOVE_SLEEP_TALK}
    },

    [SPECIES_CHARMELEON] = // Special Sweeper
    {
        .name = _("Charmeleon"),
        .item = ITEM_CHARCOAL,
        .ability = ABILITY_SOLAR_POWER,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },

    [SPECIES_CHARIZARD] = // Sun Wallbreaker
    {
        .name = _("Charizard"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SOLAR_POWER,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WEATHER_BALL, MOVE_SOLAR_BEAM, MOVE_FOCUS_BLAST, MOVE_FLAMETHROWER}
    },

    [SPECIES_SQUIRTLE] = // Defensive Spin
    {
        .name = _("Squirtle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_RAIN_DISH,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_WISH, MOVE_ICE_BEAM, MOVE_SURF}
    },

    [SPECIES_WARTORTLE] = // Shell Smash
    {
        .name = _("Wartortle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_RAIN_DISH,
        .nature = NATURE_MODEST,
        .evs = {176, 0, 0, 80, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_SURF, MOVE_ICE_BEAM, MOVE_SUBSTITUTE}
    },

    [SPECIES_BLASTOISE] = // Shell Smash
    {
        .name = _("Blastoise"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_RAIN_DISH,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TERA_BLAST}
    },

    [SPECIES_CATERPIE] = // Literally don't Use.
    {
        .name = _("Caterpie"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHIELD_DUST,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_METAPOD] = // Literally don't Use.
    {
        .name = _("Metapod"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_JOLLY,
        .evs = {0, 0, 252, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_BUTTERFREE] = // Quiver Dance
    {
        .name = _("Butterfree"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER}
    },

    [SPECIES_WEEDLE] = // Literally don't Use.
    {
        .name = _("Weedle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHIELD_DUST,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_KAKUNA] = // Literally don't Use.
    {
        .name = _("Kakuna"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_JOLLY,
        .evs = {0, 0, 252, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_BEEDRILL] = // Mega Beedrill
    {
        .name = _("Beedrill"),
        .item = ITEM_BEEDRILLITE,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_KNOCK_OFF}
    },

    [SPECIES_PIDGEY] = // Agility
    {
        .name = _("Pidgey"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TANGLED_FEET,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_AGILITY}
    },

    [SPECIES_PIDGEOTTO] = // Offensive Pivot
    {
        .name = _("Pidgeotto"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TANGLED_FEET,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_ROOST}
    },

    [SPECIES_PIDGEOT] = // Mega Pidgeot
    {
        .name = _("Pidgeot"),
        .item = ITEM_PIDGEOTITE,
        .ability = ABILITY_TANGLED_FEET,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_TOXIC}
    },

    [SPECIES_RATTATA] = // FEAR
    {
        .name = _("Rattata"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_GUTS,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENDEAVOR, MOVE_QUICK_ATTACK, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_RATTATA_ALOLA] = // Curse Tank
    {
        .name = _("Rattata-A"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_FACADE, MOVE_SUCKER_PUNCH, MOVE_CRUNCH}
    },

    [SPECIES_RATICATE] = // Guts
    {
        .name = _("Raticate"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_THROAT_CHOP, MOVE_ZEN_HEADBUTT, MOVE_SWORDS_DANCE}
    },

    [SPECIES_RATICATE_ALOLA] = // Hustle Band
    {
        .name = _("Raticate-A"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_SUPER_FANG}
    },

    [SPECIES_SPEAROW] = // Early Bird Sweeper
    {
        .name = _("Spearow"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_DRILL_PECK, MOVE_U_TURN, MOVE_ROOST}
    },

    [SPECIES_FEAROW] = // Scarf Revenge
    {
        .name = _("Fearow"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_U_TURN, MOVE_RETURN}
    },

    [SPECIES_EKANS] = // Intimidating Distruptor
    {
        .name = _("Ekans"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_GLARE, MOVE_TOXIC_SPIKES}
    },

    [SPECIES_ARBOK] = // Coil Up
    {
        .name = _("Arbok"),
        .item = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COIL, MOVE_GUNK_SHOT, MOVE_EARTHQUAKE, MOVE_CRUNCH}
    },

    [SPECIES_PIKACHU] = // Glass Cannon (Atk)
    {
        .name = _("Pikachu"),
        .item = ITEM_LIGHT_BALL,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_VOLT_TACKLE, MOVE_KNOCK_OFF, MOVE_QUICK_ATTACK}
    },

    [SPECIES_PIKACHU_COSPLAY] = // Mixed Attacker
    {
        .name = _("Pikachu-Cos"),
        .item = ITEM_LIGHT_BALL,
        .ability = ABILITY_STATIC,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_TACKLE, MOVE_IRON_TAIL, MOVE_KNOCK_OFF, MOVE_FAKE_OUT}
    },

    [SPECIES_PIKACHU_ROCK_STAR] = // Metal Rocker
    {
        .name = _("Pikachu-RS"),
        .item = ITEM_LIGHT_BALL,
        .ability = ABILITY_STATIC,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_TACKLE, MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_KNOCK_OFF}
    },

    [SPECIES_PIKACHU_BELLE] = // Pageant Pivot
    {
        .name = _("Pikachu-Belle"),
        .item = ITEM_LIGHT_BALL,
        .ability = ABILITY_STATIC,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_NUZZLE, MOVE_VOLT_SWITCH, MOVE_SURF}
    },

    [SPECIES_PIKACHU_POP_STAR] = // Idol Sweeper
    {
        .name = _("Pikachu-PS"),
        .item = ITEM_LIGHT_BALL,
        .ability = ABILITY_STATIC,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_VOLT_SWITCH}
    },

    [SPECIES_PIKACHU_PHD] = // Smart Support
    {
        .name = _("Pikachu-PhD"),
        .item = ITEM_LIGHT_BALL,
        .ability = ABILITY_STATIC,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_ENCORE, MOVE_THUNDERBOLT, MOVE_GRASS_KNOT}
    },

    [SPECIES_PIKACHU_LIBRE] = // Luchador
    {
        .name = _("Pikachu-Libre"),
        .item = ITEM_LIGHT_BALL,
        .ability = ABILITY_STATIC,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_TACKLE, MOVE_DOUBLE_EDGE, MOVE_FAKE_OUT, MOVE_IRON_TAIL}
    },

    [SPECIES_PIKACHU_ORIGINAL] = // Classic Volt
    {
        .name = _("Pikachu-OG"),
        .item = ITEM_LIGHT_BALL,
        .ability = ABILITY_STATIC,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_TACKLE, MOVE_QUICK_ATTACK, MOVE_IRON_TAIL, MOVE_KNOCK_OFF}
    },

    [SPECIES_RAICHU] = // Nasty Plot (SpA)
    {
        .name = _("Raichu"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_DRAINING_KISS, MOVE_NASTY_PLOT}
    },

    [SPECIES_RAICHU_ALOLA] = // Nasty Plot (SpA)
    {
        .name = _("Raichu-A"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SURGE_SURFER,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_DRAINING_KISS, MOVE_NASTY_PLOT}
    },

    [SPECIES_SANDSHREW] = // Sand Sweeper
    {
        .name = _("Sandshrew"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAND_RUSH,
        .nature = NATURE_ADAMANT,
        .evs = {0, 236, 76, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_LEECH_LIFE, MOVE_RAPID_SPIN}
    },

    [SPECIES_SANDSHREW_ALOLA] = // Snow Sweeper
    {
        .name = _("Sandshrew-A"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SLUSH_RUSH,
        .nature = NATURE_JOLLY,
        .evs = {36, 236, 36, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_TRIPLE_AXEL, MOVE_EARTHQUAKE, MOVE_RAPID_SPIN}
    },

    [SPECIES_SANDSLASH] = // Defensive Spinner
    {
        .name = _("Sandslash"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SAND_RUSH,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_SPIKES}
    },

    [SPECIES_SANDSLASH_ALOLA] = // Specially Defensive Spinner
    {
        .name = _("Sandslash-A"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SLUSH_RUSH,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 0, 52, 0, 204},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_TRIPLE_AXEL, MOVE_KNOCK_OFF, MOVE_SPIKES}
    },

    [SPECIES_NIDORAN_F] = // Toxic Tank
    {
        .name = _("Nidoran-F"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_POISON_POINT,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_TOXIC_SPIKES, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },

    [SPECIES_NIDORINA] = // Special Tank
    {
        .name = _("Nidorina"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_POISON_POINT,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_TOXIC_SPIKES, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },

    [SPECIES_NIDOQUEEN] = // Budget Landorus-I
    {
        .name = _("Nidoqueen"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_TIMID,
        .evs = {48, 0, 0, 208, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },

    [SPECIES_NIDORAN_M] = // Hustle Jab
    {
        .name = _("Nidoran-M"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_SHADOW_CLAW}
    },

    [SPECIES_NIDORINO] = // Band Jab
    {
        .name = _("Nidorino"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_IRON_TAIL}
    },

    [SPECIES_NIDOKING] = // Budget Landorus-I
    {
        .name = _("Nidoking"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_FLAMETHROWER}
    },

    [SPECIES_CLEFAIRY] = // Bulky Support
    {
        .name = _("Clefairy"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FRIEND_GUARD,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 140, 0, 0, 116},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_HEAL_PULSE, MOVE_HELPING_HAND, MOVE_FOLLOW_ME, MOVE_PROTECT}
    },

    [SPECIES_CLEFABLE] = // Unaware Wall
    {
        .name = _("Clefable"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_VULPIX] = // Sun Support
    {
        .name = _("Vulpix"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_DROUGHT,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_FLAMETHROWER, MOVE_HYPNOSIS, MOVE_PROTECT}
    },

    [SPECIES_VULPIX_ALOLA] = // Veil Setter
    {
        .name = _("Vulpix-A"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_SNOW_WARNING,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AURORA_VEIL, MOVE_FREEZE_DRY, MOVE_ENCORE, MOVE_PROTECT}
    },

    [SPECIES_NINETALES] = // Sun Setter
    {
        .name = _("Ninetales"),
        .item = ITEM_HEAT_ROCK,
        .ability = ABILITY_DROUGHT,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_HEALING_WISH, MOVE_ENCORE, MOVE_WILL_O_WISP}
    },

    [SPECIES_NINETALES_ALOLA] = // Screens Setter
    {
        .name = _("Ninetales-A"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_SNOW_WARNING,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AURORA_VEIL, MOVE_FREEZE_DRY, MOVE_MOONBLAST, MOVE_NASTY_PLOT}
    },

    [SPECIES_JIGGLYPUFF] = // Wish Passer Jr
    {
        .name = _("Jigglypuff"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_MOONBLAST, MOVE_KNOCK_OFF}
    },

    [SPECIES_WIGGLYTUFF] = // Wish Wall
    {
        .name = _("Wigglytuff"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_MOONBLAST, MOVE_FIRE_BLAST}
    },

    [SPECIES_ZUBAT] = // Infiltrator Utility
    {
        .name = _("Zubat"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_TOXIC, MOVE_ROOST, MOVE_BRAVE_BIRD}
    },

    [SPECIES_GOLBAT] = // Bulky Defog
    {
        .name = _("Golbat"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_TOXIC, MOVE_ROOST, MOVE_BRAVE_BIRD}
    },

    [SPECIES_ODDISH] = // Sleep Tank
    {
        .name = _("Oddish"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS}
    },

    [SPECIES_GLOOM] = // Defensive Utility
    {
        .name = _("Gloom"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STENCH,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SYNTHESIS, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED}
    },

    [SPECIES_VILEPLUME] = // Phyiscally Defensive
    {
        .name = _("Vileplume"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_EFFECT_SPORE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_WAVE, MOVE_GIGA_DRAIN, MOVE_STRENGTH_SAP, MOVE_LEECH_SEED}
    },

    [SPECIES_PARAS] = // Spore Support
    {
        .name = _("Paras"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_EFFECT_SPORE,
        .nature = NATURE_CAREFUL,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPORE, MOVE_X_SCISSOR, MOVE_SEED_BOMB, MOVE_KNOCK_OFF}
    },

    [SPECIES_PARASECT] = // Dry Skin Wall
    {
        .name = _("Parasect"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_DRY_SKIN,
        .nature = NATURE_CAREFUL,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPORE, MOVE_X_SCISSOR, MOVE_SEED_BOMB, MOVE_REST}
    },

    [SPECIES_VENONAT] = // Sleep Passer
    {
        .name = _("Venonat"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_COMPOUND_EYES,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLEEP_POWDER, MOVE_BATON_PASS, MOVE_BUG_BUZZ, MOVE_PSYCHIC}
    },

    [SPECIES_VENOMOTH] = // Quiver Dance
    {
        .name = _("Venomoth"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_ROOST}
    },

    [SPECIES_DIGLETT] = // Sash Trapper
    {
        .name = _("Diglett"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_ARENA_TRAP,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH, MOVE_STEALTH_ROCK}
    },

    [SPECIES_DIGLETT_ALOLA] = // Life Orb
    {
        .name = _("Diglett-A"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TANGLING_HAIR,
        .nature = NATURE_JOLLY,
        .evs = {36, 236, 36, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_BLAST, MOVE_SUBSTITUTE}
    },

    [SPECIES_DUGTRIO] = // Trap Kill
    {
        .name = _("Dugtrio"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_ARENA_TRAP,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH, MOVE_MEMENTO}
    },

    [SPECIES_DUGTRIO_ALOLA] = // Fast Attacker
    {
        .name = _("Dugtrio-A"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TANGLING_HAIR,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_STONE_EDGE}
    },

    [SPECIES_MEOWTH] = // Revenge Killer
    {
        .name = _("Meowth"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_ADAMANT,
        .evs = {0, 236, 76, 196, 0, 0},
        .ivs = {19, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_FEINT, MOVE_U_TURN, MOVE_PLAY_ROUGH}
    },

    [SPECIES_MEOWTH_ALOLA] = // Screens Setter
    {
        .name = _("Meowth-A"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_REFLECT, MOVE_LIGHT_SCREEN}
    },

    [SPECIES_MEOWTH_GALAR] = // Steel Band
    {
        .name = _("Meowth-G"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_DOUBLE_EDGE}
    },

    [SPECIES_PERSIAN] = // Fake Out Pivot
    {
        .name = _("Persian"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_RETURN, MOVE_KNOCK_OFF, MOVE_U_TURN}
    },

    [SPECIES_PERSIAN_ALOLA] = // Defensive Pivot
    {
        .name = _("Persian-A"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FUR_COAT,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PARTING_SHOT, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_TAUNT}
    },

    [SPECIES_PSYDUCK] = // Rain Wallbreaker
    {
        .name = _("Psyduck"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 236, 236, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TERA_BLAST}
    },

    [SPECIES_GOLDUCK] = // Rain Sweeper
    {
        .name = _("Golduck"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PSYCHIC}
    },

    [SPECIES_MANKEY] = // Choice Scarf
    {
        .name = _("Mankey"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_JOLLY,
        .evs = {36, 196, 76, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_ASSURANCE}
    },

    [SPECIES_PRIMEAPE] = // Offensive Stealth Rock
    {
        .name = _("Primeape"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_U_TURN}
    },

    [SPECIES_GROWLITHE] = // Intimidate Pivot
    {
        .name = _("Growlithe"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN, MOVE_ROAR}
    },

    [SPECIES_GROWLITHE_HISUI] = // Choice Scarf
    {
        .name = _("Growlithe-H"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .evs = {36, 236, 0, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_PSYCHIC_FANGS, MOVE_ROCK_BLAST}
    },

    [SPECIES_ARCANINE] = // Curse
    {
        .name = _("Arcanine"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .evs = {160, 252, 0, 96, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_EXTREME_SPEED, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN}
    },

    [SPECIES_ARCANINE_HISUI] = // Offensive
    {
        .name = _("Arcanine-H"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAD_SMASH, MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_WILD_CHARGE}
    },

    [SPECIES_POLIWAG] = // Bulky Absorb
    {
        .name = _("Poliwag"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 4, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_REST}
    },

    [SPECIES_POLIWHIRL] = // RestTalk Tank
    {
        .name = _("Poliwhirl"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_REST}
    },

    [SPECIES_POLIWRATH] = // Bulk Up
    {
        .name = _("Poliwrath"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_SUBSTITUTE, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF}
    },

    [SPECIES_ABRA] = // Magic Guard Nuke
    {
        .name = _("Abra"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}
    },

    [SPECIES_KADABRA] = // Trick Sweeper
    {
        .name = _("Kadabra"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_TRICK, MOVE_NASTY_PLOT}
    },

    [SPECIES_ALAKAZAM] = // Nasty Plot
    {
        .name = _("Alakazam"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL}
    },

    [SPECIES_MACHOP] = // Bulk Up Jr
    {
        .name = _("Machop"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_GUTS,
        .nature = NATURE_CAREFUL,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH}
    },

    [SPECIES_MACHOKE] = // Bulk Up
    {
        .name = _("Machoke"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_GUTS,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH}
    },

    [SPECIES_MACHAMP] = // Dynamic Band
    {
        .name = _("Machamp"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_NO_GUARD,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_ICE_PUNCH}
    },

    [SPECIES_BELLSPROUT] = // Sun Sweeper
    {
        .name = _("Bellsprout"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 76, 196, 196, 36},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_SLEEP_POWDER}
    },

    [SPECIES_WEEPINBELL] = // Utility
    {
        .name = _("Weepinbell"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SYNTHESIS, MOVE_KNOCK_OFF, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN}
    },

    [SPECIES_VICTREEBEL] = // Sun Sweeper
    {
        .name = _("Victreebel"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL}
    },

    [SPECIES_TENTACOOL] = // Utility
    {
        .name = _("Tentacool"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIQUID_OOZE,
        .nature = NATURE_JOLLY,
        .evs = {36, 116, 156, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLIP_TURN, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN}
    },

    [SPECIES_TENTACRUEL] = // Defensive Pivot
    {
        .name = _("Tentacruel"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LIQUID_OOZE,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 120, 136, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLIP_TURN, MOVE_RAPID_SPIN, MOVE_KNOCK_OFF, MOVE_HAZE}
    },

    [SPECIES_GEODUDE] = // Custap Lead
    {
        .name = _("Geodude"),
        .item = ITEM_CUSTAP_BERRY,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}
    },

    [SPECIES_GEODUDE_ALOLA] = // Galvanize Boom
    {
        .name = _("Geodude-A"),
        .item = ITEM_CUSTAP_BERRY,
        .ability = ABILITY_GALVANIZE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}
    },

    [SPECIES_GRAVELER] = // Rock Wall
    {
        .name = _("Graveler"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_TOXIC}
    },

    [SPECIES_GRAVELER_ALOLA] = // Bulky Volt
    {
        .name = _("Graveler-A"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_WILD_CHARGE, MOVE_EARTHQUAKE, MOVE_TOXIC}
    },

    [SPECIES_GOLEM] = // Rock Lead
    {
        .name = _("Golem"),
        .item = ITEM_CUSTAP_BERRY,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_STONE_EDGE}
    },

    [SPECIES_GOLEM_ALOLA] = // Choice Band (Rock)
    {
        .name = _("Golem-A"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILD_CHARGE, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH}
    },

    [SPECIES_PONYTA] = // Flame Charger
    {
        .name = _("Ponyta"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_MORNING_SUN}
    },

    [SPECIES_PONYTA_GALAR] = // Psychic Tank
    {
        .name = _("Ponyta-G"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PASTEL_VEIL,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL}
    },

    [SPECIES_RAPIDASH] = // Sword Dancer
    {
        .name = _("Rapidash"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_MORNING_SUN}
    },

    [SPECIES_RAPIDASH_GALAR] = // Fairy Dancer
    {
        .name = _("Rapidash-G"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_PASTEL_VEIL,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_PLAY_ROUGH, MOVE_DRAIN_PUNCH, MOVE_HIGH_HORSEPOWER}
    },

    [SPECIES_SLOWPOKE] = // Defensive
    {
        .name = _("Slowpoke"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_MODEST,
        .evs = {116, 0, 236, 0, 36, 116},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_SLACK_OFF, MOVE_PSYCHIC, MOVE_FIRE_BLAST}
    },

    [SPECIES_SLOWPOKE_GALAR] = // Slack Off Wall
    {
        .name = _("Slowpoke-G"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_OWN_TEMPO,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_TOXIC, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_SLACK_OFF}
    },

    [SPECIES_SLOWBRO] = // Calm Mind
    {
        .name = _("Slowbro"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_SCALD, MOVE_PSYCHIC_NOISE, MOVE_SLACK_OFF}
    },

    [SPECIES_SLOWBRO_GALAR] = // Calm Mind
    {
        .name = _("Slowbro-G"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_SLACK_OFF}
    },

    [SPECIES_MAGNEMITE] = // Trapper
    {
        .name = _("Magnemite"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MAGNET_PULL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 36, 236, 236, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TERA_BLAST, MOVE_VOLT_SWITCH}
    },

    [SPECIES_MAGNETON] = // Offensive Pivot
    {
        .name = _("Magneton"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ANALYTIC,
        .nature = NATURE_MODEST,
        .evs = {172, 0, 0, 84, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_TERA_BLAST}
    },

    [SPECIES_FARFETCHD] = // Crit Leek
    {
        .name = _("Farfetchd"),
        .item = ITEM_LEEK,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_NIGHT_SLASH, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF}
    },

    [SPECIES_FARFETCHD_GALAR] = // Fighting Leek
    {
        .name = _("Farfetchd-G"),
        .item = ITEM_LEEK,
        .ability = ABILITY_SCRAPPY,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FIRST_IMPRESSION}
    },

    [SPECIES_DODUO] = // Fast Attacker
    {
        .name = _("Doduo"),
        .item = ITEM_SKY_PLATE,
        .ability = ABILITY_EARLY_BIRD,
        .nature = NATURE_JOLLY,
        .evs = {0, 236, 0, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_QUICK_ATTACK, MOVE_PROTECT}
    },

    [SPECIES_DODRIO] = // Swords Dance
    {
        .name = _("Dodrio"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TANGLED_FEET,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_BRAVE_BIRD, MOVE_LOW_KICK, MOVE_QUICK_ATTACK}
    },

    [SPECIES_SEEL] = // Bulky Recovery
    {
        .name = _("Seel"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_REST}
    },

    [SPECIES_DEWGONG] = // RestTalk Ice
    {
        .name = _("Dewgong"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_REST}
    },

    [SPECIES_GRIMER] = // Curse Punch
    {
        .name = _("Grimer"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_CAREFUL,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_GUNK_SHOT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH}
    },

    [SPECIES_GRIMER_ALOLA] = // Wallbreaker
    {
        .name = _("Grimer-A"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_ADAMANT,
        .evs = {36, 196, 196, 0, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_DRAIN_PUNCH, MOVE_SLEEP_TALK}
    },

    [SPECIES_MUK] = // Defensive
    {
        .name = _("Muk"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STICKY_HOLD,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_ZEN_HEADBUTT, MOVE_TOXIC}
    },

    [SPECIES_MUK_ALOLA] = // RestTalk
    {
        .name = _("Muk-A"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_SHELLDER] = // Shell Smash
    {
        .name = _("Shellder"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SKILL_LINK,
        .nature = NATURE_ADAMANT,
        .evs = {36, 236, 36, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_LIQUIDATION, MOVE_ROCK_BLAST}
    },

    [SPECIES_CLOYSTER] = // Shell Smash Sweeper
    {
        .name = _("Cloyster"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SKILL_LINK,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_DRILL_RUN, MOVE_TERA_BLAST}
    },

    [SPECIES_GASTLY] = // Sash Sweeper
    {
        .name = _("Gastly"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_SUBSTITUTE}
    },

    [SPECIES_HAUNTER] = // Choiced
    {
        .name = _("Haunter"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_PSYCHIC, MOVE_TRICK}
    },

    [SPECIES_GENGAR] = // Nasty Plot
    {
        .name = _("Gengar"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST}
    },

    [SPECIES_ONIX] = // Rock Setter
    {
        .name = _("Onix"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_TOXIC}
    },

    [SPECIES_DROWZEE] = // Seismic Wall
    {
        .name = _("Drowzee"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_THUNDER_WAVE}
    },

    [SPECIES_HYPNO] = // Seismic Toss Wall
    {
        .name = _("Hypno"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_THUNDER_WAVE}
    },

    [SPECIES_KRABBY] = // Sheer Force Jr
    {
        .name = _("Krabby"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_X_SCISSOR, MOVE_KNOCK_OFF}
    },

    [SPECIES_KINGLER] = // Sheer Force
    {
        .name = _("Kingler"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_X_SCISSOR, MOVE_KNOCK_OFF}
    },

    [SPECIES_VOLTORB] = // Scarf Boom
    {
        .name = _("Voltorb"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_STATIC,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TAUNT, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_EXPLOSION}
    },

    [SPECIES_VOLTORB_HISUI] = // Grass Boom
    {
        .name = _("Voltorb-H"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_STATIC,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_ENERGY_BALL, MOVE_TAUNT, MOVE_EXPLOSION}
    },

    [SPECIES_ELECTRODE] = // Specs Boom
    {
        .name = _("Electrode"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_AFTERMATH,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FOUL_PLAY, MOVE_EXPLOSION}
    },

    [SPECIES_ELECTRODE_HISUI] = // Pivot
    {
        .name = _("Electrode-H"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_AFTERMATH,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_LEAF_STORM, MOVE_TAUNT}
    },

    [SPECIES_EXEGGCUTE] = // Harvest Wall
    {
        .name = _("Exeggcute"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HARVEST,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE}
    },

    [SPECIES_EXEGGUTOR] = // Sun Nuke
    {
        .name = _("Exeggutor"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER}
    },

    [SPECIES_EXEGGUTOR_ALOLA] = // Choice Specs
    {
        .name = _("Exeggutor-A"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_HARVEST,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_LEAF_STORM, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN}
    },

    [SPECIES_CUBONE] = // Thick Club Jr
    {
        .name = _("Cubone"),
        .item = ITEM_THICK_CLUB,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_FIRE_PUNCH}
    },

    [SPECIES_MAROWAK] = // Thick Club
    {
        .name = _("Marowak"),
        .item = ITEM_THICK_CLUB,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_FIRE_PUNCH}
    },

    [SPECIES_MAROWAK_ALOLA] = // Fire Bones
    {
        .name = _("Marowak-A"),
        .item = ITEM_THICK_CLUB,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE}
    },

    [SPECIES_HITMONLEE] = // Terrain Sweeper
    {
        .name = _("Hitmonlee"),
        .item = ITEM_PSYCHIC_SEED,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE}
    },

    [SPECIES_HITMONCHAN] = // Bulky Rapid Spin
    {
        .name = _("Hitmonchan"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_ADAMANT,
        .evs = {248, 16, 0, 0, 0, 244},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_MACH_PUNCH, MOVE_RAPID_SPIN}
    },

    [SPECIES_LICKITUNG] = // Curse Tongue
    {
        .name = _("Lickitung"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_OBLIVIOUS,
        .nature = NATURE_CAREFUL,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_REST}
    },

    [SPECIES_KOFFING] = // Tank
    {
        .name = _("Koffing"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NEUTRALIZING_GAS,
        .nature = NATURE_MODEST,
        .evs = {36, 0, 156, 76, 196, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}
    },

    [SPECIES_WEEZING] = // Physical Wall
    {
        .name = _("Weezing"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_NEUTRALIZING_GAS,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 4, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_HAZE}
    },

    [SPECIES_WEEZING_GALAR] = // Defensive
    {
        .name = _("Weezing-G"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_NEUTRALIZING_GAS,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STRANGE_STEAM, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_DEFOG}
    },

    [SPECIES_RHYHORN] = // Setup Sweeper
    {
        .name = _("Rhyhorn"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_ADAMANT,
        .evs = {0, 236, 0, 156, 0, 116},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ROCK_POLISH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE}
    },

    [SPECIES_RHYDON] = // Stealth Rock
    {
        .name = _("Rhydon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_ADAMANT,
        .evs = {248, 16, 0, 44, 0, 200},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE}
    },

    [SPECIES_CHANSEY] = // Defensive
    {
        .name = _("Chansey"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_BOLD,
        .evs = {56, 0, 252, 0, 0, 200},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED, MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE}
    },

    [SPECIES_TANGELA] = // Regen Vine
    {
        .name = _("Tangela"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_SLEEP_POWDER, MOVE_SYNTHESIS}
    },

    [SPECIES_KANGASKHAN] = // Mega Parent
    {
        .name = _("Kangaskhan"),
        .item = ITEM_KANGASKHANITE,
        .ability = ABILITY_SCRAPPY,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE}
    },

    [SPECIES_HORSEA] = // Sniper Squirt
    {
        .name = _("Horsea"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 4, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FOCUS_ENERGY, MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE}
    },

    [SPECIES_SEADRA] = // RestTalk Pivot
    {
        .name = _("Seadra"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_POISON_POINT,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_FLIP_TURN, MOVE_SURF}
    },

    [SPECIES_GOLDEEN] = // Horn Dance
    {
        .name = _("Goldeen"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_WATERFALL, MOVE_MEGAHORN, MOVE_AQUA_JET}
    },

    [SPECIES_SEAKING] = // Horn Rush
    {
        .name = _("Seaking"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_WATERFALL, MOVE_MEGAHORN, MOVE_AQUA_JET}
    },

    [SPECIES_STARYU] = // Spin Star
    {
        .name = _("Staryu"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_SCALD, MOVE_RECOVER, MOVE_THUNDERBOLT}
    },

    [SPECIES_STARMIE] = // Offensive
    {
        .name = _("Starmie"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_ANALYTIC,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_RAPID_SPIN}
    },

    [SPECIES_MR_MIME] = // Nasty Mime
    {
        .name = _("Mr Mime"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_FILTER,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_FOCUS_BLAST}
    },

    [SPECIES_MR_MIME_GALAR] = // Freeze Mime
    {
        .name = _("Mr Mime-G"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_VITAL_SPIRIT,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_FREEZE_DRY, MOVE_FOCUS_BLAST}
    },

    [SPECIES_SCYTHER] = // Swords Dance
    {
        .name = _("Scyther"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DUAL_WINGBEAT, MOVE_CLOSE_COMBAT, MOVE_TRAILBLAZE}
    },

    [SPECIES_JYNX] = // Kiss and Plot
    {
        .name = _("Jynx"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_OBLIVIOUS,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_LOVELY_KISS, MOVE_NASTY_PLOT, MOVE_ICE_BEAM, MOVE_PSYCHIC}
    },

    [SPECIES_ELECTABUZZ] = // Trick Room Support
    {
        .name = _("Electabuzz"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VITAL_SPIRIT,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 180, 0, 0, 76},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOLLOW_ME, MOVE_VOLT_SWITCH, MOVE_TAUNT, MOVE_FEINT}
    },

    [SPECIES_MAGMAR] = // Bulky Redirector
    {
        .name = _("Magmar"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VITAL_SPIRIT,
        .nature = NATURE_CALM,
        .evs = {252, 0, 236, 0, 0, 20},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_FOLLOW_ME, MOVE_PROTECT}
    },

    [SPECIES_PINSIR] = // Swords Dance (Bug)
    {
        .name = _("Pinsir"),
        .item = ITEM_PINSIRITE,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_RETURN, MOVE_QUICK_ATTACK, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_TAUROS] = // All-Out Attacker
    {
        .name = _("Tauros"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_SUBSTITUTE}
    },

    [SPECIES_TAUROS_PALDEA_COMBAT] = // Bulk Up Bull
    {
        .name = _("Tauros-C"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_BODY_PRESS}
    },

    [SPECIES_TAUROS_PALDEA_BLAZE] = // Bulk Up
    {
        .name = _("Tauros-PB"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_TRAILBLAZE}
    },

    [SPECIES_TAUROS_PALDEA_AQUA] = // Choice Item
    {
        .name = _("Tauros-PA"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WAVE_CRASH, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, MOVE_ZEN_HEADBUTT}
    },

    [SPECIES_MAGIKARP] = // Sash Flail
    {
        .name = _("Magikarp"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAIL, MOVE_TACKLE, MOVE_BOUNCE, MOVE_TERA_BLAST}
    },

    [SPECIES_GYARADOS] = // Dragon Dance
    {
        .name = _("Gyarados"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_TERA_BLAST}
    },

    [SPECIES_LAPRAS] = // Curse Cruise
    {
        .name = _("Lapras"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_FREEZE_DRY, MOVE_ICE_SHARD, MOVE_BODY_SLAM}
    },

    [SPECIES_DITTO] = // Choice Scarf
    {
        .name = _("Ditto"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_IMPOSTER,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_EEVEE] = // Wish Passer
    {
        .name = _("Eevee"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_BATON_PASS, MOVE_FACADE}
    },

    [SPECIES_VAPOREON] = // Defensive
    {
        .name = _("Vaporeon"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_HAZE, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_JOLTEON] = // Calm Mind
    {
        .name = _("Jolteon"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_ALLURING_VOICE}
    },

    [SPECIES_FLAREON] = // Facade
    {
        .name = _("Flareon"),
        .item = ITEM_TOXIC_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_FACADE, MOVE_TRAILBLAZE, MOVE_QUICK_ATTACK}
    },

    [SPECIES_PORYGON] = // Download Recover
    {
        .name = _("Porygon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_DOWNLOAD,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 4, 0, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER}
    },

    [SPECIES_OMANYTE] = // Shell Smash
    {
        .name = _("Omanyte"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTH_POWER}
    },

    [SPECIES_OMASTAR] = // Shell Smash (Rock)
    {
        .name = _("Omastar"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER}
    },

    [SPECIES_KABUTO] = // Swift Blade Jr
    {
        .name = _("Kabuto"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_AQUA_JET}
    },

    [SPECIES_KABUTOPS] = // Swift Blade
    {
        .name = _("Kabutops"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_AQUA_JET}
    },

    [SPECIES_AERODACTYL] = // Mega Aerodactyl
    {
        .name = _("Aerodactyl"),
        .item = ITEM_AERODACTYLITE,
        .ability = ABILITY_UNNERVE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT, MOVE_ROOST}
    },

    [SPECIES_SNORLAX] = // Curse
    {
        .name = _("Snorlax"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_CAREFUL,
        .evs = {12, 0, 244, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_HEAT_CRASH, MOVE_REST}
    },

    [SPECIES_ARTICUNO] = // Specially Defensive (Flying)
    {
        .name = _("Articuno"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_CALM,
        .evs = {248, 0, 0, 52, 0, 208},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FREEZE_DRY, MOVE_ROOST, MOVE_SUBSTITUTE, MOVE_HAZE}
    },

    [SPECIES_ARTICUNO_GALAR] = // Calm Mind
    {
        .name = _("Articuno-G"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_TIMID,
        .evs = {248, 0, 8, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_STORED_POWER, MOVE_HURRICANE, MOVE_RECOVER}
    },

    [SPECIES_ZAPDOS] = // Defensive
    {
        .name = _("Zapdos"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STATIC,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 244, 16, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE, MOVE_ROOST}
    },

    [SPECIES_ZAPDOS_GALAR] = // Choice Scarf
    {
        .name = _("Zapdos-G"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_JOLLY,
        .evs = {96, 252, 0, 160, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_U_TURN}
    },

    [SPECIES_MOLTRES] = // Physically Defensive
    {
        .name = _("Moltres"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 248, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_U_TURN, MOVE_ROOST}
    },

    [SPECIES_MOLTRES_GALAR] = // Nasty Plot
    {
        .name = _("Moltres-G"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_BERSERK,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 4, 44, 164, 44},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_FIERY_WRATH, MOVE_HURRICANE, MOVE_TAUNT}
    },

    [SPECIES_DRATINI] = // Dance Speed
    {
        .name = _("Dratini"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_EXTREME_SPEED, MOVE_OUTRAGE, MOVE_AQUA_TAIL}
    },

    [SPECIES_DRAGONAIR] = // Dragon Dance
    {
        .name = _("Dragonair"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_EXTREME_SPEED, MOVE_OUTRAGE, MOVE_REST}
    },

    [SPECIES_DRAGONITE] = // Dragon Dance
    {
        .name = _("Dragonite"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_MULTISCALE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED, MOVE_ICE_SPINNER}
    },

    [SPECIES_MEWTWO] = // Nasty Plot
    {
        .name = _("Mewtwo"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_UNNERVE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYSTRIKE, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL}
    },

    [SPECIES_MEW] = // Hazard Lead
    {
        .name = _("Mew"),
        .item = ITEM_RED_CARD,
        .ability = ABILITY_SYNCHRONIZE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 96, 160, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_STEALTH_ROCK, MOVE_WILL_O_WISP, MOVE_TAUNT}
    },

    [SPECIES_CHIKORITA] = // Synthesis Support
    {
        .name = _("Chikorita"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_OVERGROW,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SYNTHESIS, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_BODY_SLAM}
    },

    [SPECIES_BAYLEEF] = // Aroma Support
    {
        .name = _("Bayleef"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_OVERGROW,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AROMATHERAPY, MOVE_SYNTHESIS, MOVE_LEECH_SEED, MOVE_BODY_SLAM}
    },

    [SPECIES_MEGANIUM] = // Press Wall
    {
        .name = _("Meganium"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_OVERGROW,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AROMATHERAPY, MOVE_SYNTHESIS, MOVE_LEECH_SEED, MOVE_BODY_PRESS}
    },

    [SPECIES_CYNDAQUIL] = // Scarf Eruption
    {
        .name = _("Cyndaquil"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_ERUPTION, MOVE_EXTRASENSORY, MOVE_SLUDGE_WAVE}
    },

    [SPECIES_QUILAVA] = // Orb Eruption
    {
        .name = _("Quilava"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_ERUPTION, MOVE_EXTRASENSORY, MOVE_SLUDGE_WAVE}
    },

    [SPECIES_TYPHLOSION] = // Choice Specs
    {
        .name = _("Typhlosion"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ERUPTION, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_SCORCHING_SANDS}
    },

    [SPECIES_TYPHLOSION_HISUI] = // Glass Cannon
    {
        .name = _("Typhlosion-H"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_OVERHEAT, MOVE_SHADOW_BALL}
    },

    [SPECIES_TOTODILE] = // Sheer Blade Jr
    {
        .name = _("Totodile"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_WATERFALL, MOVE_ICE_PUNCH, MOVE_CRUNCH}
    },

    [SPECIES_CROCONAW] = // Sheer Band
    {
        .name = _("Croconaw"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WATERFALL, MOVE_ICE_PUNCH, MOVE_CRUNCH, MOVE_AQUA_JET}
    },

    [SPECIES_FERALIGATR] = // Setup Sweeper
    {
        .name = _("Feraligatr"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_AQUA_JET, MOVE_ICE_PUNCH, MOVE_CRUNCH}
    },

    [SPECIES_SENTRET] = // Pivot Scout
    {
        .name = _("Sentret"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FRISK,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_SUPERPOWER}
    },

    [SPECIES_FURRET] = // Scarf Scout
    {
        .name = _("Furret"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_FRISK,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_TRICK, MOVE_FACADE, MOVE_KNOCK_OFF}
    },

    [SPECIES_HOOTHOOT] = // Bulky Roost
    {
        .name = _("Hoothoot"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ROOST, MOVE_TOXIC, MOVE_AIR_SLASH, MOVE_WHIRLWIND}
    },

    [SPECIES_NOCTOWL] = // Tinted Hurricane
    {
        .name = _("Noctowl"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_SHADOW_BALL, MOVE_HEAT_WAVE, MOVE_ROOST}
    },

    [SPECIES_LEDYBA] = // Screens Baton
    {
        .name = _("Ledyba"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_SWARM,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_BATON_PASS, MOVE_U_TURN}
    },

    [SPECIES_LEDIAN] = // Agility Baton
    {
        .name = _("Ledian"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_SWARM,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AGILITY, MOVE_BATON_PASS, MOVE_REFLECT, MOVE_LIGHT_SCREEN}
    },

    [SPECIES_SPINARAK] = // Web Setter
    {
        .name = _("Spinarak"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWARM,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_TOXIC_SPIKES, MOVE_BATON_PASS, MOVE_POISON_JAB}
    },

    [SPECIES_ARIADOS] = // Web Trapper
    {
        .name = _("Ariados"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SWARM,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_TOXIC_SPIKES, MOVE_SUCKER_PUNCH, MOVE_POISON_JAB}
    },

    [SPECIES_CROBAT] = // Utility (Poison)
    {
        .name = _("Crobat"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 0, 200, 0, 56},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_TOXIC, MOVE_DEFOG, MOVE_ROOST}
    },

    [SPECIES_CHINCHOU] = // Pivot
    {
        .name = _("Chinchou"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 132, 220, 148, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_VOLT_SWITCH}
    },

    [SPECIES_LANTURN] = // Defensive Pivot
    {
        .name = _("Lanturn"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_SCALD, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_PICHU] = // Encore Pivot
    {
        .name = _("Pichu"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STATIC,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENCORE, MOVE_VOLT_SWITCH, MOVE_NUZZLE, MOVE_THUNDERBOLT}
    },

    [SPECIES_CLEFFA] = // Wish Baby
    {
        .name = _("Cleffa"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_MOONBLAST, MOVE_ENCORE}
    },

    [SPECIES_IGGLYBUFF] = // Puff Wall
    {
        .name = _("Igglybuff"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM}
    },

    [SPECIES_TOGEPI] = // Serene Wish
    {
        .name = _("Togepi"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_BODY_SLAM, MOVE_DAZZLING_GLEAM}
    },

    [SPECIES_TOGETIC] = // Flinch Fairy
    {
        .name = _("Togetic"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_NASTY_PLOT, MOVE_AIR_SLASH}
    },

    [SPECIES_NATU] = // Magic Bounce Jr
    {
        .name = _("Natu"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ROOST, MOVE_U_TURN, MOVE_PSYCHIC, MOVE_NASTY_PLOT}
    },

    [SPECIES_XATU] = // Bounce Wall
    {
        .name = _("Xatu"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 180, 0, 0, 76},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_ROOST, MOVE_PSYCHIC, MOVE_HEAT_WAVE}
    },

    [SPECIES_MAREEP] = // Static Pivot
    {
        .name = _("Mareep"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STATIC,
        .nature = NATURE_CALM,
        .evs = {252, 0, 0, 0, 156, 100},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_PROTECT}
    },

    [SPECIES_FLAAFFY] = // Wooly Bolt
    {
        .name = _("Flaaffy"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STATIC,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 200, 56},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FOCUS_BLAST, MOVE_SIGNAL_BEAM}
    },

    [SPECIES_AMPHAROS] = // Mega Ampharos
    {
        .name = _("Ampharos"),
        .item = ITEM_AMPHAROSITE,
        .ability = ABILITY_STATIC,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 4, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT}
    },

    [SPECIES_BELLOSSOM] = // Bulky Quiver Dance
    {
        .name = _("Bellossom"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 4, 252, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_STRENGTH_SAP, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_MARILL] = // Belly Drum
    {
        .name = _("Marill"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_SUPERPOWER}
    },

    [SPECIES_AZUMARILL] = // Offensive
    {
        .name = _("Azumarill"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_KNOCK_OFF}
    },

    [SPECIES_SUDOWOODO] = // Rock Head Basher
    {
        .name = _("Sudowoodo"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WOOD_HAMMER, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_POLITOED] = // Perish Trapper
    {
        .name = _("Politoed"),
        .item = ITEM_DAMP_ROCK,
        .ability = ABILITY_DRIZZLE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 80, 176, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WHIRLPOOL, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_ENCORE}
    },

    [SPECIES_HOPPIP] = // Encore Fluff
    {
        .name = _("Hoppip"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENCORE, MOVE_LEECH_SEED, MOVE_PROTECT, MOVE_GIGA_DRAIN}
    },

    [SPECIES_SKIPLOOM] = // SubSeed Fluff
    {
        .name = _("Skiploom"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENCORE, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_GIGA_DRAIN}
    },

    [SPECIES_JUMPLUFF] = // SubSeed Infiltrator
    {
        .name = _("Jumpluff"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLEEP_POWDER, MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_ENCORE}
    },

    [SPECIES_AIPOM] = // Fake Out Pivot
    {
        .name = _("Aipom"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SKILL_LINK,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_DOUBLE_HIT}
    },

    [SPECIES_SUNKERN] = // Sun Joke
    {
        .name = _("Sunkern"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SUNNY_DAY, MOVE_GROWTH, MOVE_WEATHER_BALL, MOVE_GIGA_DRAIN}
    },

    [SPECIES_SUNFLORA] = // Sun Nuke
    {
        .name = _("Sunflora"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_WEATHER_BALL, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER}
    },

    [SPECIES_YANMA] = // Speed Boost Sweep
    {
        .name = _("Yanma"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PROTECT, MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_U_TURN}
    },

    [SPECIES_WOOPER] = // Unaware Curse
    {
        .name = _("Wooper"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_TOXIC}
    },

    [SPECIES_WOOPER_PALDEA] = // Toxic Tank
    {
        .name = _("Wooper-P"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RECOVER, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_CURSE}
    },

    [SPECIES_QUAGSIRE] = // Unaware Wall
    {
        .name = _("Quagsire"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_TOXIC, MOVE_EARTHQUAKE, MOVE_RECOVER}
    },

    [SPECIES_ESPEON] = // Choice Specs
    {
        .name = _("Espeon"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_ALLURING_VOICE, MOVE_TRICK}
    },

    [SPECIES_UMBREON] = // Support
    {
        .name = _("Umbreon"),
        .item = ITEM_SAFETY_GOGGLES,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 188, 0, 0, 68},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOUL_PLAY, MOVE_HELPING_HAND, MOVE_YAWN, MOVE_TAUNT}
    },

    [SPECIES_MURKROW] = // Nasty Plot
    {
        .name = _("Murkrow"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SUPER_LUCK,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_HURRICANE, MOVE_DARK_PULSE, MOVE_HEAT_WAVE}
    },

    [SPECIES_SLOWKING] = // Defensive Pivot
    {
        .name = _("Slowking"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_SCALD, MOVE_THUNDER_WAVE, MOVE_CHILLY_RECEPTION, MOVE_SLACK_OFF}
    },

    [SPECIES_SLOWKING_GALAR] = // Specially Defensive Pivot
    {
        .name = _("Slowking-G"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 0, 0, 4, 252},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_SLUDGE_BOMB, MOVE_FUTURE_SIGHT, MOVE_TOXIC, MOVE_CHILLY_RECEPTION}
    },

    [SPECIES_MISDREAVUS] = // Utility
    {
        .name = _("Misdreavus"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_HEX, MOVE_PAIN_SPLIT, MOVE_POWER_GEM}
    },

    [SPECIES_UNOWN] = // Nasty Alphabet
    {
        .name = _("Unown"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_SUBSTITUTE}
    },

    [SPECIES_WOBBUFFET] = // Shadow Tag Trap
    {
        .name = _("Wobbuffet"),
        .item = ITEM_CUSTAP_BERRY,
        .ability = ABILITY_SHADOW_TAG,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_SAFEGUARD}
    },

    [SPECIES_GIRAFARIG] = // Nasty Plot
    {
        .name = _("Girafarig"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_THUNDERBOLT}
    },

    [SPECIES_PINECO] = // Hazard Bomb
    {
        .name = _("Pineco"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_RAPID_SPIN, MOVE_TOXIC_SPIKES, MOVE_EXPLOSION}
    },

    [SPECIES_FORRETRESS] = // Support
    {
        .name = _("Forretress"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STURDY,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 164, 0, 0, 92},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_BODY_PRESS, MOVE_VOLT_SWITCH, MOVE_GYRO_BALL}
    },

    [SPECIES_DUNSPARCE] = // Calm Mind
    {
        .name = _("Dunsparce"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_ROOST}
    },

    [SPECIES_GLIGAR] = // Utility
    {
        .name = _("Gligar"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IMMUNITY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 204, 16, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_U_TURN}
    },

    [SPECIES_STEELIX] = // Curse (Ground)
    {
        .name = _("Steelix"),
        .item = ITEM_STEELIXITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_HEAVY_SLAM, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_SNUBBULL] = // Physically Defensive
    {
        .name = _("Snubbull"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .evs = {36, 116, 196, 36, 0, 116},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_THUNDER_WAVE, MOVE_THIEF}
    },

    [SPECIES_GRANBULL] = // Slow Wallbreaker
    {
        .name = _("Granbull"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_THUNDER_WAVE, MOVE_ICE_PUNCH}
    },

    [SPECIES_QWILFISH] = // Physical Defensive
    {
        .name = _("Qwilfish"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 240, 16, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_BARB_BARRAGE, MOVE_FLIP_TURN, MOVE_PAIN_SPLIT}
    },

    [SPECIES_QWILFISH_HISUI] = // Specially Defensive
    {
        .name = _("Qwilfish-H"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 0, 16, 0, 240},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_BARB_BARRAGE, MOVE_CRUNCH, MOVE_PAIN_SPLIT}
    },

    [SPECIES_SCIZOR] = // Pivot
    {
        .name = _("Scizor"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_ADAMANT,
        .evs = {120, 252, 0, 136, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_BULLET_PUNCH, MOVE_U_TURN, MOVE_KNOCK_OFF}
    },

    [SPECIES_SHUCKLE] = // Suicide Lead
    {
        .name = _("Shuckle"),
        .item = ITEM_MENTAL_HERB,
        .ability = ABILITY_STURDY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FINAL_GAMBIT, MOVE_ENCORE, MOVE_STEALTH_ROCK, MOVE_STICKY_WEB}
    },

    [SPECIES_HERACROSS] = // Wallbreaker
    {
        .name = _("Heracross"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_MEGAHORN}
    },

    [SPECIES_SNEASEL] = // Swords Dance
    {
        .name = _("Sneasel"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_TRIPLE_AXEL, MOVE_KNOCK_OFF, MOVE_ICE_SHARD}
    },

    [SPECIES_SNEASEL_HISUI] = // Swords Dance
    {
        .name = _("Sneasel-H"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT, MOVE_THROAT_CHOP}
    },

    [SPECIES_TEDDIURSA] = // Quick Feet Facade
    {
        .name = _("Teddiursa"),
        .item = ITEM_TOXIC_ORB,
        .ability = ABILITY_QUICK_FEET,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_FACADE, MOVE_CRUNCH, MOVE_FIRE_PUNCH}
    },

    [SPECIES_URSARING] = // Offensive Swords Dance (Spe)
    {
        .name = _("Ursaring"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}
    },

    [SPECIES_SLUGMA] = // Molten Wall
    {
        .name = _("Slugma"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_MAGCARGO] = // Slow Wall
    {
        .name = _("Magcargo"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 200, 0, 0, 56},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_TOXIC}
    },

    [SPECIES_SWINUB] = // Thick Fat Rocks
    {
        .name = _("Swinub"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_ICE_SHARD, MOVE_EARTHQUAKE, MOVE_PROTECT}
    },

    [SPECIES_PILOSWINE] = // Offensive Stealth Rock
    {
        .name = _("Piloswine"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_HIGH_HORSEPOWER, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD}
    },

    [SPECIES_CORSOLA] = // Regen Wall
    {
        .name = _("Corsola"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_RECOVER, MOVE_SCALD, MOVE_STEALTH_ROCK, MOVE_TOXIC}
    },

    [SPECIES_CORSOLA_GALAR] = // Defensive
    {
        .name = _("Corsola-G"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_NIGHT_SHADE, MOVE_WHIRLPOOL, MOVE_STRENGTH_SAP}
    },

    [SPECIES_REMORAID] = // Sniper Specs
    {
        .name = _("Remoraid"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_FOCUS_BLAST}
    },

    [SPECIES_OCTILLERY] = // Suction Specs
    {
        .name = _("Octillery"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_FIRE_BLAST, MOVE_ENERGY_BALL}
    },

    [SPECIES_DELIBIRD] = // Hazard Sash
    {
        .name = _("Delibird"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_RAPID_SPIN, MOVE_ICE_SHARD, MOVE_DESTINY_BOND}
    },

    [SPECIES_MANTINE] = // Water Absorb (Flying)
    {
        .name = _("Mantine"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 164, 96, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_SCALD, MOVE_ROOST, MOVE_HAZE}
    },

    [SPECIES_SKARMORY] = // Spikes
    {
        .name = _("Skarmory"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 208, 48, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_BRAVE_BIRD, MOVE_SPIKES, MOVE_ROOST}
    },

    [SPECIES_HOUNDOUR] = // Nasty Pup
    {
        .name = _("Houndour"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_NAIVE,
        .evs = {0, 4, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT}
    },

    [SPECIES_HOUNDOOM] = // Nasty Plot
    {
        .name = _("Houndoom"),
        .item = ITEM_HOUNDOOMINITE,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_KINGDRA] = // Rain Sweeper
    {
        .name = _("Kingdra"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_DRAGON_PULSE}
    },

    [SPECIES_PHANPY] = // Sturdy Rocks
    {
        .name = _("Phanpy"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_ICE_SHARD}
    },

    [SPECIES_DONPHAN] = // Offensive Utility
    {
        .name = _("Donphan"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 92, 144, 20, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN, MOVE_ICE_SPINNER}
    },

    [SPECIES_PORYGON2] = // Special Wall
    {
        .name = _("Porygon2"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_DOWNLOAD,
        .nature = NATURE_CALM,
        .evs = {252, 0, 0, 0, 4, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RECOVER, MOVE_TRI_ATTACK, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE}
    },

    [SPECIES_STANTLER] = // Choice Scarf
    {
        .name = _("Stantler"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_THIEF, MOVE_TRICK}
    },

    [SPECIES_SMEARGLE] = // Hazard Setter
    {
        .name = _("Smeargle"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_STONE_AXE, MOVE_POPULATION_BOMB, MOVE_BANEFUL_BUNKER}
    },

    [SPECIES_TYROGUE] = // Fake Out Baby
    {
        .name = _("Tyrogue"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_FACADE, MOVE_MACH_PUNCH, MOVE_HELPING_HAND}
    },

    [SPECIES_HITMONTOP] = // Rapid Spin
    {
        .name = _("Hitmontop"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL, MOVE_BULLET_PUNCH}
    },

    [SPECIES_SMOOCHUM] = // Nasty Kiss
    {
        .name = _("Smoochum"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_OBLIVIOUS,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_ICE_BEAM, MOVE_PSYSHOCK, MOVE_SUBSTITUTE}
    },

    [SPECIES_ELEKID] = // Offensive Pivot
    {
        .name = _("Elekid"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VITAL_SPIRIT,
        .nature = NATURE_NAIVE,
        .evs = {0, 0, 0, 236, 236, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_VOLT_SWITCH}
    },

    [SPECIES_MAGBY] = // Life Orb
    {
        .name = _("Magby"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_VITAL_SPIRIT,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 60, 252, 196, 0},
        .ivs = {9, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_SUBSTITUTE, MOVE_PROTECT}
    },

    [SPECIES_MILTANK] = // Whitney's Finest
    {
        .name = _("Miltank"),
        .item = ITEM_LUM_BERRY,
        .ability = ABILITY_SCRAPPY,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STOMP, MOVE_PLAY_ROUGH, MOVE_ATTRACT, MOVE_THUNDER_WAVE}
    },

    [SPECIES_BLISSEY] = // Calm Mind
    {
        .name = _("Blissey"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED}
    },

    [SPECIES_RAIKOU] = // Offensive Pivot
    {
        .name = _("Raikou"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_SCALD, MOVE_AURA_SPHERE, MOVE_VOLT_SWITCH}
    },

    [SPECIES_ENTEI] = // Choice Band
    {
        .name = _("Entei"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_ADAMANT,
        .evs = {20, 188, 4, 252, 0, 44},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EXTREME_SPEED, MOVE_SACRED_FIRE, MOVE_FLARE_BLITZ, MOVE_STONE_EDGE}
    },

    [SPECIES_SUICUNE] = // Substitute + Calm Mind
    {
        .name = _("Suicune"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 4, 252, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_CALM_MIND, MOVE_SCALD, MOVE_PROTECT}
    },

    [SPECIES_LARVITAR] = // Sand Dancer
    {
        .name = _("Larvitar"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAND_STREAM,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_CRUNCH}
    },

    [SPECIES_PUPITAR] = // Rock Cocoon
    {
        .name = _("Pupitar"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_PROTECT}
    },

    [SPECIES_TYRANITAR] = // Specially Defensive
    {
        .name = _("Tyranitar"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SAND_STREAM,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 0, 44, 0, 212},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK}
    },

    [SPECIES_LUGIA] = // Specially Defensive
    {
        .name = _("Lugia"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_MULTISCALE,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RECOVER, MOVE_WHIRLWIND, MOVE_AEROBLAST, MOVE_WHIRLPOOL}
    },

    [SPECIES_HO_OH] = // Bulky Offense
    {
        .name = _("Ho-Oh"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_RECOVER, MOVE_EARTHQUAKE}
    },

    [SPECIES_CELEBI] = // Nasty Plot (Grass)
    {
        .name = _("Celebi"),
        .item = ITEM_GROUNDIUM_Z,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_EARTH_POWER, MOVE_PSYCHIC, MOVE_RECOVER}
    },

    [SPECIES_TREECKO] = // Setup Sweeper
    {
        .name = _("Treecko"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_ADAMANT,
        .evs = {36, 236, 156, 36, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ACROBATICS, MOVE_DRAIN_PUNCH, MOVE_BULLET_SEED}
    },

    [SPECIES_GROVYLE] = // Unburden Blade
    {
        .name = _("Grovyle"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_ACROBATICS}
    },

    [SPECIES_SCEPTILE] = // Terrain Sweeper
    {
        .name = _("Sceptile"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_ADAMANT,
        .evs = {248, 252, 0, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_ACROBATICS, MOVE_DRAIN_PUNCH}
    },

    [SPECIES_TORCHIC] = // Life Orb
    {
        .name = _("Torchic"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 36, 236, 196, 36},
        .ivs = {9, 0, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_TERA_BLAST, MOVE_PROTECT, MOVE_WILL_O_WISP}
    },

    [SPECIES_COMBUSKEN] = // Speed Boost Kick
    {
        .name = _("Combusken"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_BATON_PASS}
    },

    [SPECIES_BLAZIKEN] = // Swords Dance + Burning Bulwark
    {
        .name = _("Blaziken"),
        .item = ITEM_COVERT_CLOAK,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .evs = {104, 252, 0, 152, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_PYRO_BALL, MOVE_THUNDEROUS_KICK, MOVE_BURNING_BULWARK}
    },

    [SPECIES_MUDKIP] = // Torrent Rocks
    {
        .name = _("Mudkip"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_PROTECT}
    },

    [SPECIES_MARSHTOMP] = // Offensive Stealth Rock
    {
        .name = _("Marshtomp"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_ICE_PUNCH}
    },

    [SPECIES_SWAMPERT] = // Defensive Utility
    {
        .name = _("Swampert"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_FLIP_TURN}
    },

    [SPECIES_POOCHYENA] = // Quick Feet Fang
    {
        .name = _("Poochyena"),
        .item = ITEM_TOXIC_ORB,
        .ability = ABILITY_QUICK_FEET,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_TAUNT}
    },

    [SPECIES_MIGHTYENA] = // Intimidate Band
    {
        .name = _("Mightyena"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_FIRE_FANG, MOVE_SUPERPOWER}
    },

    [SPECIES_ZIGZAGOON] = // Belly Drum Jr
    {
        .name = _("Zigzagoon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PICKUP,
        .nature = NATURE_JOLLY,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_EXTREME_SPEED, MOVE_RETURN, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_ZIGZAGOON_GALAR] = // Gluttony Drum
    {
        .name = _("Zigzagoon-G"),
        .item = ITEM_SALAC_BERRY,
        .ability = ABILITY_GLUTTONY,
        .nature = NATURE_JOLLY,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_EXTREME_SPEED, MOVE_SUCKER_PUNCH, MOVE_BODY_SLAM}
    },

    [SPECIES_LINOONE] = // ADV Drum
    {
        .name = _("Linoone"),
        .item = ITEM_SALAC_BERRY,
        .ability = ABILITY_GLUTTONY,
        .nature = NATURE_JOLLY,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_EXTREME_SPEED, MOVE_SHADOW_CLAW, MOVE_SEED_BOMB}
    },

    [SPECIES_LINOONE_GALAR] = // Toxic Facade
    {
        .name = _("Linoone-G"),
        .item = ITEM_TOXIC_ORB,
        .ability = ABILITY_RATTLED,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_SUCKER_PUNCH, MOVE_NIGHT_SLASH, MOVE_FIRE_FANG}
    },

    [SPECIES_WURMPLE] = // Eviolite Worm
    {
        .name = _("Wurmple"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHIELD_DUST,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_POISON_STING, MOVE_BUG_BITE}
    },

    [SPECIES_SILCOON] = // Silk Pass
    {
        .name = _("Silcoon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HARDEN, MOVE_AMNESIA, MOVE_SUBSTITUTE, MOVE_BATON_PASS}
    },

    [SPECIES_BEAUTIFLY] = // Quiver Dance
    {
        .name = _("Beautifly"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWARM,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_SUBSTITUTE}
    },

    [SPECIES_CASCOON] = // Web Pass
    {
        .name = _("Cascoon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HARDEN, MOVE_AMNESIA, MOVE_SUBSTITUTE, MOVE_BATON_PASS}
    },

    [SPECIES_DUSTOX] = // Quiver Shield
    {
        .name = _("Dustox"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SHIELD_DUST,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_PROTECT}
    },

    [SPECIES_LOTAD] = // Rain Pivot
    {
        .name = _("Lotad"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_RAIN_DISH,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_SCALD, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_LOMBRE] = // Rain Sweeper
    {
        .name = _("Lombre"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM}
    },

    [SPECIES_LUDICOLO] = // Rain Dance Sweeper
    {
        .name = _("Ludicolo"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_RAIN_DANCE}
    },

    [SPECIES_SEEDOT] = // SubSeed Acorn
    {
        .name = _("Seedot"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_SYNTHESIS, MOVE_GIGA_DRAIN}
    },

    [SPECIES_NUZLEAF] = // Pickpocket Blade
    {
        .name = _("Nuzleaf"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_PICKPOCKET,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_SEED_BOMB}
    },

    [SPECIES_SHIFTRY] = // All-Out Attacker (Tailwind)
    {
        .name = _("Shiftry"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_WIND_RIDER,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TAILWIND, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF, MOVE_LOW_KICK}
    },

    [SPECIES_TAILLOW] = // Guts Pivot
    {
        .name = _("Taillow"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_GUTS,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_BRAVE_BIRD, MOVE_QUICK_ATTACK, MOVE_PROTECT}
    },

    [SPECIES_SWELLOW] = // Guts Bird
    {
        .name = _("Swellow"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_QUICK_ATTACK}
    },

    [SPECIES_WINGULL] = // Offensive
    {
        .name = _("Wingull"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_HYDRATION,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 36, 236, 236, 0},
        .ivs = {19, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_PROTECT}
    },

    [SPECIES_PELIPPER] = // Rain Setter
    {
        .name = _("Pelipper"),
        .item = ITEM_DAMP_ROCK,
        .ability = ABILITY_DRIZZLE,
        .nature = NATURE_RELAXED,
        .evs = {248, 0, 224, 0, 0, 36},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_U_TURN, MOVE_ROOST, MOVE_KNOCK_OFF}
    },

    [SPECIES_RALTS] = // Calm Mind Baby
    {
        .name = _("Ralts"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TRACE,
        .nature = NATURE_CALM,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_PROTECT}
    },

    [SPECIES_KIRLIA] = // Scarf Trick
    {
        .name = _("Kirlia"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_TRACE,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TRICK}
    },

    [SPECIES_GARDEVOIR] = // Choice Scarf
    {
        .name = _("Gardevoir"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_TRACE,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_HEALING_WISH}
    },

    [SPECIES_SURSKIT] = // Rain Baton
    {
        .name = _("Surskit"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_BATON_PASS, MOVE_PROTECT, MOVE_WATER_PULSE, MOVE_BUG_BITE}
    },

    [SPECIES_MASQUERAIN] = // Quiver Bug
    {
        .name = _("Masquerain"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_HYDRO_PUMP}
    },

    [SPECIES_SHROOMISH] = // Poison Heal Spore
    {
        .name = _("Shroomish"),
        .item = ITEM_TOXIC_ORB,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPORE, MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_SEED_BOMB}
    },

    [SPECIES_BRELOOM] = // Choice Band
    {
        .name = _("Breloom"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_CLOSE_COMBAT, MOVE_ROCK_TOMB}
    },

    [SPECIES_SLAKOTH] = // Truant Wall
    {
        .name = _("Slakoth"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TRUANT,
        .nature = NATURE_IMPISH,
        .evs = {252, 128, 128, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLACK_OFF, MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_FACADE}
    },

    [SPECIES_VIGOROTH] = // Bulk Up
    {
        .name = _("Vigoroth"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VITAL_SPIRIT,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_SLACK_OFF}
    },

    [SPECIES_SLAKING] = // Truant Nuke
    {
        .name = _("Slaking"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_TRUANT,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF}
    },

    [SPECIES_NINCADA] = // Digger
    {
        .name = _("Nincada"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_COMPOUND_EYES,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DIG, MOVE_X_SCISSOR, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_NINJASK] = // Speed Pass
    {
        .name = _("Ninjask"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_BATON_PASS, MOVE_X_SCISSOR, MOVE_PROTECT}
    },

    [SPECIES_SHEDINJA] = // Dual Status User (Ghost)
    {
        .name = _("Shedinja"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WONDER_GUARD,
        .nature = NATURE_LONELY,
        .evs = {0, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_WHISMUR] = // Punk Wall
    {
        .name = _("Whismur"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PUNK_ROCK,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 128, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_BOOMBURST, MOVE_SCREECH, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_LOUDRED] = // RestTalk Burst
    {
        .name = _("Loudred"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PUNK_ROCK,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BOOMBURST, MOVE_FACADE, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_EXPLOUD] = // Specs Burst
    {
        .name = _("Exploud"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SCRAPPY,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_BOOMBURST, MOVE_FIRE_BLAST, MOVE_SURF, MOVE_FOCUS_BLAST}
    },

    [SPECIES_MAKUHITA] = // Guts Slap
    {
        .name = _("Makuhita"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_BULLET_PUNCH, MOVE_KNOCK_OFF, MOVE_BULK_UP}
    },

    [SPECIES_HARIYAMA] = // Bulk Up
    {
        .name = _("Hariyama"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_ADAMANT,
        .evs = {12, 200, 0, 44, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_BULLET_PUNCH}
    },

    [SPECIES_AZURILL] = // Belly Drum
    {
        .name = _("Azurill"),
        .item = ITEM_ORAN_BERRY,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .evs = {36, 196, 116, 116, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_AQUA_JET, MOVE_PROTECT}
    },

    [SPECIES_NOSEPASS] = // Magnet Press
    {
        .name = _("Nosepass"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MAGNET_PULL,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE}
    },

    [SPECIES_SKITTY] = // Wish Kitty
    {
        .name = _("Skitty"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WONDER_SKIN,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_BODY_SLAM, MOVE_TOXIC}
    },

    [SPECIES_DELCATTY] = // Normalize Wish
    {
        .name = _("Delcatty"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_NORMALIZE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_BODY_SLAM, MOVE_THUNDER_WAVE}
    },

    [SPECIES_SABLEYE] = // Defensive
    {
        .name = _("Sableye"),
        .item = ITEM_SABLENITE,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_WILL_O_WISP, MOVE_PROTECT, MOVE_RECOVER}
    },

    [SPECIES_MAWILE] = // Swords Dance
    {
        .name = _("Mawile"),
        .item = ITEM_MAWILITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .evs = {116, 252, 0, 140, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_ARON] = // Head Smash Jr
    {
        .name = _("Aron"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .evs = {252, 4, 252, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_HEAD_SMASH, MOVE_IRON_HEAD, MOVE_EARTHQUAKE}
    },

    [SPECIES_LAIRON] = // Autotomize Smash
    {
        .name = _("Lairon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AUTOTOMIZE, MOVE_HEAD_SMASH, MOVE_IRON_HEAD, MOVE_EARTHQUAKE}
    },

    [SPECIES_AGGRON] = // Tank
    {
        .name = _("Aggron"),
        .item = ITEM_AGGRONITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_TOXIC}
    },

    [SPECIES_MEDITITE] = // Wallbreaker
    {
        .name = _("Meditite"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_PURE_POWER,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_BULLET_PUNCH, MOVE_DRAIN_PUNCH}
    },

    [SPECIES_MEDICHAM] = // Choice Scarf
    {
        .name = _("Medicham"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PURE_POWER,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_TRICK}
    },

    [SPECIES_ELECTRIKE] = // Rod Pivot
    {
        .name = _("Electrike"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_PROTECT}
    },

    [SPECIES_MANECTRIC] = // Offensive Pivot
    {
        .name = _("Manectric"),
        .item = ITEM_MANECTITE,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_HIDDEN_POWER}
    },

    [SPECIES_PLUSLE] = // Nasty Plus
    {
        .name = _("Plusle"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_PLUS,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_GRASS_KNOT}
    },

    [SPECIES_MINUN] = // Encore Minus
    {
        .name = _("Minun"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MINUS,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ENCORE, MOVE_SUBSTITUTE, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH}
    },

    [SPECIES_VOLBEAT] = // Weather Setter
    {
        .name = _("Volbeat"),
        .item = ITEM_HEAT_ROCK,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_SUNNY_DAY, MOVE_ENCORE, MOVE_MOONLIGHT, MOVE_U_TURN}
    },

    [SPECIES_ILLUMISE] = // Prankster Charm
    {
        .name = _("Illumise"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENCORE, MOVE_CHARM, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_ROSELIA] = // Toxic Spiker
    {
        .name = _("Roselia"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_TOXIC_SPIKES, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_GULPIN] = // Stockpile Loop
    {
        .name = _("Gulpin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIQUID_OOZE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_TOXIC, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_SWALOT] = // Ooze Spikes
    {
        .name = _("Swalot"),
        .item = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_LIQUID_OOZE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_TOXIC_SPIKES, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_YAWN}
    },

    [SPECIES_CARVANHA] = // Speed Boost Fang
    {
        .name = _("Carvanha"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PROTECT, MOVE_WATERFALL, MOVE_CRUNCH, MOVE_ICE_FANG}
    },

    [SPECIES_SHARPEDO] = // Offensive
    {
        .name = _("Sharpedo"),
        .item = ITEM_SHARPEDONITE,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_CLOSE_COMBAT, MOVE_PROTECT}
    },

    [SPECIES_WAILMER] = // RestTalk Spout
    {
        .name = _("Wailmer"),
        .item = ITEM_CHESTO_BERRY,
        .ability = ABILITY_WATER_VEIL,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_REST}
    },

    [SPECIES_WAILORD] = // Specs Spout
    {
        .name = _("Wailord"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_WATER_VEIL,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_TOXIC}
    },

    [SPECIES_NUMEL] = // Special Attacker
    {
        .name = _("Numel"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SIMPLE,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 36, 236, 236, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_FIRE_BLAST, MOVE_EARTH_POWER, MOVE_WILL_O_WISP}
    },

    [SPECIES_CAMERUPT] = // Mega Camerupt
    {
        .name = _("Camerupt"),
        .item = ITEM_CAMERUPTITE,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE}
    },

    [SPECIES_TORKOAL] = // Supportive Sun Setter
    {
        .name = _("Torkoal"),
        .item = ITEM_EJECT_PACK,
        .ability = ABILITY_DROUGHT,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 4, 0, 252, 0},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_OVERHEAT, MOVE_ERUPTION, MOVE_HELPING_HAND, MOVE_PROTECT}
    },

    [SPECIES_SPOINK] = // Trick Room Bounce
    {
        .name = _("Spoink"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 0, 0, 128, 128},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_PROTECT}
    },

    [SPECIES_GRUMPIG] = // CM Rest
    {
        .name = _("Grumpig"),
        .item = ITEM_CHESTO_BERRY,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 128, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_REST}
    },

    [SPECIES_SPINDA] = // Contrary Power
    {
        .name = _("Spinda"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUPERPOWER, MOVE_FACADE, MOVE_BATON_PASS, MOVE_PROTECT}
    },

    [SPECIES_TRAPINCH] = // Trapper
    {
        .name = _("Trapinch"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ARENA_TRAP,
        .nature = NATURE_IMPISH,
        .evs = {0, 196, 156, 36, 0, 76},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_FEINT, MOVE_FIRST_IMPRESSION}
    },

    [SPECIES_VIBRAVA] = // Levitate Pivot
    {
        .name = _("Vibrava"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_EARTH_POWER, MOVE_BUG_BUZZ, MOVE_U_TURN, MOVE_PROTECT}
    },

    [SPECIES_FLYGON] = // Offensive Stealth Rock
    {
        .name = _("Flygon"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_SCALE_SHOT, MOVE_U_TURN}
    },

    [SPECIES_CACNEA] = // Water Absorb Spikes
    {
        .name = _("Cacnea"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_SEED_BOMB, MOVE_SUCKER_PUNCH, MOVE_DRAIN_PUNCH}
    },

    [SPECIES_CACTURNE] = // Mixed Attacker
    {
        .name = _("Cacturne"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_NAUGHTY,
        .evs = {0, 252, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_LEAF_STORM, MOVE_SPIKES}
    },

    [SPECIES_SWABLU] = // Perish Cloud
    {
        .name = _("Swablu"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ROOST, MOVE_TOXIC, MOVE_PERISH_SONG, MOVE_PROTECT}
    },

    [SPECIES_ALTARIA] = // Defensive
    {
        .name = _("Altaria"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 120, 136, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_ROOST, MOVE_BRAVE_BIRD, MOVE_WILL_O_WISP}
    },

    [SPECIES_ZANGOOSE] = // Toxic Boost Slash
    {
        .name = _("Zangoose"),
        .item = ITEM_TOXIC_ORB,
        .ability = ABILITY_TOXIC_BOOST,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_NIGHT_SLASH}
    },

    [SPECIES_SEVIPER] = // Infiltrator Venom
    {
        .name = _("Seviper"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_GLARE}
    },

    [SPECIES_LUNATONE] = // TR Boom
    {
        .name = _("Lunatone"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_STEALTH_ROCK, MOVE_PSYCHIC, MOVE_EXPLOSION}
    },

    [SPECIES_SOLROCK] = // Sunny Rock
    {
        .name = _("Solrock"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MORNING_SUN, MOVE_STEALTH_ROCK, MOVE_STONE_EDGE, MOVE_ZEN_HEADBUTT}
    },

    [SPECIES_BARBOACH] = // Whisker Rocks
    {
        .name = _("Barboach"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ANTICIPATION,
        .nature = NATURE_ADAMANT,
        .evs = {252, 128, 128, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_TOXIC}
    },

    [SPECIES_WHISCASH] = // Wall
    {
        .name = _("Whiscash"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_OBLIVIOUS,
        .nature = NATURE_SASSY,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTH_POWER, MOVE_STONE_EDGE, MOVE_SURF}
    },

    [SPECIES_CORPHISH] = // Dragon Dance
    {
        .name = _("Corphish"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_JOLLY,
        .evs = {0, 196, 76, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_CRABHAMMER, MOVE_AQUA_JET, MOVE_KNOCK_OFF}
    },

    [SPECIES_CRAWDAUNT] = // Choice Band
    {
        .name = _("Crawdaunt"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURGING_STRIKES, MOVE_KNOCK_OFF, MOVE_JET_PUNCH, MOVE_FLIP_TURN}
    },

    [SPECIES_BALTOY] = // Spin Boom
    {
        .name = _("Baltoy"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN, MOVE_PSYCHIC, MOVE_EXPLOSION}
    },

    [SPECIES_CLAYDOL] = // Spinner
    {
        .name = _("Claydol"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN, MOVE_EARTH_POWER, MOVE_ICE_BEAM}
    },

    [SPECIES_LILEEP] = // Storm Drain Fossil
    {
        .name = _("Lileep"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ANCIENT_POWER, MOVE_RECOVER, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_CRADILY] = // AncientPower Stall
    {
        .name = _("Cradily"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ANCIENT_POWER, MOVE_RECOVER, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },

    [SPECIES_ANORITH] = // Armored Digger
    {
        .name = _("Anorith"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BATTLE_ARMOR,
        .nature = NATURE_ADAMANT,
        .evs = {200, 252, 0, 56, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_AQUA_JET}
    },

    [SPECIES_ARMALDO] = // Fossil Breaker
    {
        .name = _("Armaldo"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_BATTLE_ARMOR,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_STONE_EDGE, MOVE_X_SCISSOR, MOVE_AQUA_JET}
    },

    [SPECIES_FEEBAS] = // Ugly Duckling
    {
        .name = _("Feebas"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MARVEL_SCALE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 200, 56, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_RECOVER, MOVE_MIRROR_COAT}
    },

    [SPECIES_MILOTIC] = // Defensive Utility
    {
        .name = _("Milotic"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_CALM,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_DRAGON_TAIL, MOVE_FLIP_TURN, MOVE_RECOVER}
    },

    [SPECIES_CASTFORM_NORMAL] = // Four Seasons
    {
        .name = _("Castform"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_FORECAST,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WEATHER_BALL, MOVE_SUNNY_DAY, MOVE_RAIN_DANCE, MOVE_HAIL}
    },

    [SPECIES_KECLEON] = // Drum Passer
    {
        .name = _("Kecleon"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_COLOR_CHANGE,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_SHUPPET] = // Cursed Doll
    {
        .name = _("Shuppet"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_BRAVE,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_SHADOW_SNEAK, MOVE_DESTINY_BOND, MOVE_WILL_O_WISP}
    },

    [SPECIES_BANETTE] = // Mega Marionette
    {
        .name = _("Banette"),
        .item = ITEM_BANETTITE,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_BRAVE,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_DESTINY_BOND, MOVE_SHADOW_CLAW, MOVE_KNOCK_OFF}
    },

    [SPECIES_DUSKULL] = // Little Reaper
    {
        .name = _("Duskull"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NIGHT_SHADE, MOVE_TOXIC, MOVE_PAIN_SPLIT, MOVE_PROTECT}
    },

    [SPECIES_DUSCLOPS] = // Defensive
    {
        .name = _("Dusclops"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_CALM,
        .evs = {252, 0, 0, 4, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_TROPIUS] = // Fruit Tree
    {
        .name = _("Tropius"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_HARVEST,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 176, 0, 0, 80},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SYNTHESIS, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED}
    },

    [SPECIES_CHIMECHO] = // Wind Chime
    {
        .name = _("Chimecho"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 128, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_RECOVER}
    },

    [SPECIES_ABSOL] = // Mega Absol
    {
        .name = _("Absol"),
        .item = ITEM_ABSOLITE,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_PURSUIT, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_WYNAUT] = // Mini Wobbuffet
    {
        .name = _("Wynaut"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHADOW_TAG,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND, MOVE_ENCORE}
    },

    [SPECIES_SNORUNT] = // Moody Iceberg
    {
        .name = _("Snorunt"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOODY,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_SHADOW_BALL}
    },

    [SPECIES_GLALIE] = // Mega Iceberg
    {
        .name = _("Glalie"),
        .item = ITEM_GLALITITE,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_JOLLY,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EXPLOSION, MOVE_ICE_SHARD, MOVE_EARTHQUAKE, MOVE_SPIKES}
    },

    [SPECIES_SPHEAL] = // Beach Ball
    {
        .name = _("Spheal"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_SEALEO] = // Rolling Blubber
    {
        .name = _("Sealeo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_YAWN}
    },

    [SPECIES_WALREIN] = // CurseTank
    {
        .name = _("Walrein"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_ADAMANT,
        .evs = {252, 128, 128, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_REST}
    },

    [SPECIES_CLAMPERL] = // Doubled Tooth
    {
        .name = _("Clamperl"),
        .item = ITEM_DEEP_SEA_TOOTH,
        .ability = ABILITY_SHELL_ARMOR,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_SURF, MOVE_ICE_BEAM, MOVE_BATON_PASS}
    },

    [SPECIES_HUNTAIL] = // Deep Sea Fangs
    {
        .name = _("Huntail"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_CRUNCH}
    },

    [SPECIES_GOREBYSS] = // Pink Smash
    {
        .name = _("Gorebyss"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_SURF, MOVE_ICE_BEAM, MOVE_BATON_PASS}
    },

    [SPECIES_RELICANTH] = // Living Fossil
    {
        .name = _("Relicanth"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAD_SMASH, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT}
    },

    [SPECIES_LUVDISC] = // Heart Wish
    {
        .name = _("Luvdisc"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_BATON_PASS}
    },

    [SPECIES_BAGON] = // Baby Dragon
    {
        .name = _("Bagon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .evs = {40, 252, 0, 216, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_OUTRAGE, MOVE_ZEN_HEADBUTT, MOVE_FIRE_FANG}
    },

    [SPECIES_SHELGON] = // Shelled Dragon
    {
        .name = _("Shelgon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .evs = {88, 252, 0, 168, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_ZEN_HEADBUTT, MOVE_PROTECT}
    },

    [SPECIES_SALAMENCE] = // 3 Attacks + Roost
    {
        .name = _("Salamence"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_MODEST,
        .evs = {160, 0, 0, 96, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_ROOST}
    },

    [SPECIES_BELDUM] = // Clunker
    {
        .name = _("Beldum"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_BRAVE,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD, MOVE_TAKE_DOWN, MOVE_PROTECT}
    },

    [SPECIES_METANG] = // Iron Claw
    {
        .name = _("Metang"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 200, 0, 56, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK}
    },

    [SPECIES_METAGROSS] = // Bulky Attacker
    {
        .name = _("Metagross"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 160, 0, 96, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAVY_SLAM, MOVE_PSYCHIC_FANGS, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK}
    },

    [SPECIES_REGIROCK] = // Stealth Rock
    {
        .name = _("Regirock"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_STONE_EDGE, MOVE_BODY_PRESS, MOVE_THUNDER_WAVE}
    },

    [SPECIES_REGICE] = // Frozen Core
    {
        .name = _("Regice"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_CALM,
        .evs = {252, 0, 0, 0, 4, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_REST}
    },

    [SPECIES_REGISTEEL] = // IronPress
    {
        .name = _("Registeel"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_IMPISH,
        .evs = {252, 52, 76, 4, 0, 124},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_HEAVY_SLAM, MOVE_IRON_DEFENSE, MOVE_PROTECT}
    },

    [SPECIES_LATIAS] = // Double Dance
    {
        .name = _("Latias"),
        .item = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 232, 24, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_AGILITY, MOVE_STORED_POWER, MOVE_AURA_SPHERE}
    },

    [SPECIES_LATIOS] = // Choice Specs
    {
        .name = _("Latios"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_LUSTER_PURGE, MOVE_SURF, MOVE_FLIP_TURN}
    },

    [SPECIES_KYOGRE] = // Calm Mind
    {
        .name = _("Kyogre"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_DRIZZLE,
        .nature = NATURE_MODEST,
        .evs = {132, 0, 68, 108, 196, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_PROTECT}
    },

    [SPECIES_GROUDON] = // Clear Amulet
    {
        .name = _("Groudon"),
        .item = ITEM_CLEAR_AMULET,
        .ability = ABILITY_DROUGHT,
        .nature = NATURE_ADAMANT,
        .evs = {188, 132, 92, 68, 0, 28},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_SWORDS_DANCE, MOVE_PROTECT}
    },

    [SPECIES_RAYQUAZA] = // Choice Band
    {
        .name = _("Rayquaza"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_AIR_LOCK,
        .nature = NATURE_JOLLY,
        .evs = {32, 252, 8, 216, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_ASCENT, MOVE_U_TURN, MOVE_V_CREATE, MOVE_EXTREME_SPEED}
    },

    [SPECIES_JIRACHI] = // Utility
    {
        .name = _("Jirachi"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 0, 224, 0, 32},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_IRON_HEAD, MOVE_BODY_SLAM, MOVE_ENCORE}
    },

    [SPECIES_DEOXYS_NORMAL] = // Extreme Killer
    {
        .name = _("Deoxys"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_NAIVE,
        .evs = {0, 128, 0, 252, 128, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHO_BOOST, MOVE_SUPERPOWER, MOVE_ICE_BEAM, MOVE_EXTREME_SPEED}
    },

    [SPECIES_DEOXYS_ATTACK] = // Mixed Attacker
    {
        .name = _("Deoxys-A"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_NAIVE,
        .evs = {0, 4, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHO_BOOST, MOVE_SHADOW_BALL, MOVE_LOW_KICK, MOVE_ROCK_SLIDE}
    },

    [SPECIES_DEOXYS_DEFENSE] = // Cosmic Power
    {
        .name = _("Deoxys-D"),
        .item = ITEM_COVERT_CLOAK,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_TIMID,
        .evs = {248, 0, 0, 216, 0, 44},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_COSMIC_POWER, MOVE_STORED_POWER, MOVE_KNOCK_OFF, MOVE_RECOVER}
    },

    [SPECIES_DEOXYS_SPEED] = // Lead
    {
        .name = _("Deoxys-S"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_TAUNT, MOVE_SUPERPOWER}
    },

    [SPECIES_TURTWIG] = // Sapling
    {
        .name = _("Turtwig"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_OVERGROW,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_EARTHQUAKE, MOVE_PROTECT}
    },

    [SPECIES_GROTLE] = // Shell Smash
    {
        .name = _("Grotle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHELL_ARMOR,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_SEED_BOMB, MOVE_IRON_HEAD, MOVE_SUPERPOWER}
    },

    [SPECIES_TORTERRA] = // Shell Smash Sweeper
    {
        .name = _("Torterra"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_SHELL_ARMOR,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_BULLET_SEED, MOVE_HEADLONG_RUSH, MOVE_ROCK_BLAST}
    },

    [SPECIES_CHIMCHAR] = // Punch Drunk
    {
        .name = _("Chimchar"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_NAIVE,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH}
    },

    [SPECIES_MONFERNO] = // Swords Dance
    {
        .name = _("Monferno"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF}
    },

    [SPECIES_INFERNAPE] = // Nasty Plot
    {
        .name = _("Infernape"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_GRASS_KNOT, MOVE_VACUUM_WAVE}
    },

    [SPECIES_PIPLUP] = // Little Penguin
    {
        .name = _("Piplup"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_PRINPLUP] = // Defensive Pivot
    {
        .name = _("Prinplup"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLIP_TURN, MOVE_ROOST, MOVE_SURF, MOVE_ICE_BEAM}
    },

    [SPECIES_EMPOLEON] = // Offensive
    {
        .name = _("Empoleon"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_MODEST,
        .evs = {144, 0, 0, 216, 148, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_GRASS_KNOT, MOVE_ROOST}
    },

    [SPECIES_STARLY] = // Little Bully
    {
        .name = _("Starly"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 128, 128, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_QUICK_ATTACK, MOVE_WING_ATTACK, MOVE_ROAR}
    },

    [SPECIES_STARAVIA] = // Reckless Flyer
    {
        .name = _("Staravia"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_RECKLESS,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_FACADE, MOVE_ROOST}
    },

    [SPECIES_STARAPTOR] = // Choice Band
    {
        .name = _("Staraptor"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_RECKLESS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_QUICK_ATTACK, MOVE_U_TURN, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_BIDOOF] = // Simple Log
    {
        .name = _("Bidoof"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SIMPLE,
        .nature = NATURE_CAREFUL,
        .evs = {252, 128, 0, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_SUBSTITUTE, MOVE_AQUA_TAIL, MOVE_REST}
    },

    [SPECIES_BIBAREL] = // Moody Log
    {
        .name = _("Bibarel"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MOODY,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_PROTECT, MOVE_WATERFALL, MOVE_FACADE}
    },

    [SPECIES_KRICKETOT] = // Chirping Baby
    {
        .name = _("Kricketot"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TAUNT, MOVE_SCREECH, MOVE_STRUGGLE_BUG, MOVE_PROTECT}
    },

    [SPECIES_KRICKETUNE] = // Fiddler
    {
        .name = _("Kricketune"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_FURY_CUTTER, MOVE_AERIAL_ACE, MOVE_FACADE}
    },

    [SPECIES_SHINX] = // Guts Cub
    {
        .name = _("Shinx"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_PROTECT}
    },

    [SPECIES_LUXIO] = // Static Pivot
    {
        .name = _("Luxio"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .evs = {252, 128, 0, 128, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_CRUNCH, MOVE_WILD_CHARGE, MOVE_ROAR}
    },

    [SPECIES_LUXRAY] = // Gleam Eyes
    {
        .name = _("Luxray"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_VOLT_SWITCH}
    },

    [SPECIES_BUDEW] = // Thorn Bud
    {
        .name = _("Budew"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLEEP_POWDER, MOVE_TOXIC_SPIKES, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS}
    },

    [SPECIES_ROSERADE] = // Offensive
    {
        .name = _("Roserade"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_BOMB, MOVE_MAGICAL_LEAF, MOVE_HIDDEN_POWER, MOVE_SPIKES}
    },

    [SPECIES_CRANIDOS] = // Headbanger
    {
        .name = _("Cranidos"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_ZEN_HEADBUTT}
    },

    [SPECIES_RAMPARDOS] = // Skull Bash
    {
        .name = _("Rampardos"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH}
    },

    [SPECIES_SHIELDON] = // Little Shield
    {
        .name = _("Shieldon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_IRON_HEAD, MOVE_PROTECT, MOVE_TOXIC}
    },

    [SPECIES_BASTIODON] = // Bulwark
    {
        .name = _("Bastiodon"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_TOXIC}
    },

    [SPECIES_BURMY_PLANT] = // Bagworm
    {
        .name = _("Burmy-P"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PROTECT, MOVE_BUG_BITE, MOVE_STRUGGLE_BUG, MOVE_TACKLE}
    },

    [SPECIES_BURMY_SANDY] = // Bagworm
    {
        .name = _("Burmy-S"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PROTECT, MOVE_BUG_BITE, MOVE_STRUGGLE_BUG, MOVE_TACKLE}
    },

    [SPECIES_BURMY_TRASH] = // Bagworm
    {
        .name = _("Burmy-T"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PROTECT, MOVE_BUG_BITE, MOVE_STRUGGLE_BUG, MOVE_TACKLE}
    },

    [SPECIES_WORMADAM_PLANT] = // Leafcoat
    {
        .name = _("Wormadam-P"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_ANTICIPATION,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_GIGA_DRAIN, MOVE_BUG_BUZZ, MOVE_PROTECT}
    },

    [SPECIES_WORMADAM_SANDY] = // Sandcoat
    {
        .name = _("Wormadam-S"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_ANTICIPATION,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_EARTH_POWER, MOVE_BUG_BUZZ, MOVE_PROTECT}
    },

    [SPECIES_WORMADAM_TRASH] = // Steelcoat
    {
        .name = _("Wormadam-T"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_ANTICIPATION,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_FLASH_CANNON, MOVE_BUG_BUZZ, MOVE_PROTECT}
    },

    [SPECIES_MOTHIM] = // Dusty Moth
    {
        .name = _("Mothim"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_HIDDEN_POWER}
    },

    [SPECIES_COMBEE] = // Tiny Hive
    {
        .name = _("Combee"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAL_ORDER, MOVE_ATTACK_ORDER, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_VESPIQUEN] = // Queen Bee
    {
        .name = _("Vespiquen"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAL_ORDER, MOVE_ATTACK_ORDER, MOVE_TOXIC, MOVE_DEFEND_ORDER}
    },

    [SPECIES_PACHIRISU] = // Cheek Pouch
    {
        .name = _("Pachirisu"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NUZZLE, MOVE_SUPER_FANG, MOVE_U_TURN, MOVE_TOXIC}
    },

    [SPECIES_BUIZEL] = // Rain Wallbreaker
    {
        .name = _("Buizel"),
        .item = ITEM_ORAN_BERRY,
        .ability = ABILITY_WATER_VEIL,
        .nature = NATURE_JOLLY,
        .evs = {0, 236, 0, 236, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_WAVE_CRASH, MOVE_ICE_SPINNER, MOVE_BRICK_BREAK}
    },

    [SPECIES_FLOATZEL] = // Choice Scarf
    {
        .name = _("Floatzel"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_WATER_VEIL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WAVE_CRASH, MOVE_FLIP_TURN, MOVE_ICE_SPINNER, MOVE_LIQUIDATION}
    },

    [SPECIES_CHERUBI] = // Little Sprout
    {
        .name = _("Cherubi"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SYNTHESIS, MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, MOVE_PROTECT}
    },

    [SPECIES_CHERRIM_OVERCAST] = // Flower Gift Shop
    {
        .name = _("Cherrim"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_FLOWER_GIFT,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUNNY_DAY, MOVE_GROWTH, MOVE_GIGA_DRAIN, MOVE_WEATHER_BALL}
    },

    [SPECIES_SHELLOS_WEST] = // Blue Slug
    {
        .name = _("Shellos-W"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STICKY_HOLD,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_RECOVER, MOVE_EARTH_POWER}
    },

    [SPECIES_SHELLOS_EAST] = // Pink Slug
    {
        .name = _("Shellos-E"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STICKY_HOLD,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_RECOVER, MOVE_EARTH_POWER}
    },

    [SPECIES_GASTRODON_WEST] = // Blue Slug King
    {
        .name = _("Gastrodon-W"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_CALM,
        .evs = {252, 0, 0, 0, 4, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_RECOVER}
    },

    [SPECIES_GASTRODON_EAST] = // Pink Slug King
    {
        .name = _("Gastrodon-E"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_CALM,
        .evs = {252, 0, 0, 0, 4, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_RECOVER}
    },

    [SPECIES_AMBIPOM] = // Offensive Pivot
    {
        .name = _("Ambipom"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_TRIPLE_AXEL}
    },

    [SPECIES_DRIFLOON] = // Setup Sweeper
    {
        .name = _("Drifloon"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 84, 196, 196, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP}
    },

    [SPECIES_DRIFBLIM] = // Unburden Sweeper (Def, SpA, SpD)
    {
        .name = _("Drifblim"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HEX, MOVE_WILL_O_WISP, MOVE_CALM_MIND, MOVE_STRENGTH_SAP}
    },

    [SPECIES_BUNEARY] = // Bouncy Ball
    {
        .name = _("Buneary"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIMBER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_RETURN, MOVE_ICE_PUNCH, MOVE_U_TURN}
    },

    [SPECIES_LOPUNNY] = // All-Out Attacker
    {
        .name = _("Lopunny"),
        .item = ITEM_LOPUNNITE,
        .ability = ABILITY_LIMBER,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_TRIPLE_AXEL}
    },

    [SPECIES_MISMAGIUS] = // Nasty Plot
    {
        .name = _("Mismagius"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_DRAINING_KISS, MOVE_SUBSTITUTE}
    },

    [SPECIES_HONCHKROW] = // Big Boss Bird
    {
        .name = _("Honchkrow"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUCKER_PUNCH, MOVE_BRAVE_BIRD, MOVE_SUPERPOWER, MOVE_HEAT_WAVE}
    },

    [SPECIES_GLAMEOW] = // Alley Cat
    {
        .name = _("Glameow"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIMBER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_RETURN, MOVE_TOXIC}
    },

    [SPECIES_PURUGLY] = // Fat Cat
    {
        .name = _("Purugly"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_OWN_TEMPO,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_RETURN, MOVE_U_TURN, MOVE_KNOCK_OFF}
    },

    [SPECIES_CHINGLING] = // Tiny Bell
    {
        .name = _("Chingling"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 0, 0, 4, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_PSYWAVE, MOVE_SHADOW_BALL, MOVE_PROTECT}
    },

    [SPECIES_STUNKY] = // Physical Attacker
    {
        .name = _("Stunky"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_AFTERMATH,
        .nature = NATURE_JOLLY,
        .evs = {12, 252, 0, 244, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_TEMPER_FLARE}
    },

    [SPECIES_SKUNTANK] = // Utility
    {
        .name = _("Skuntank"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_AFTERMATH,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_TAUNT}
    },

    [SPECIES_BRONZOR] = // Slow Bell
    {
        .name = _("Bronzor"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_GYRO_BALL, MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_BRONZONG] = // Defensive
    {
        .name = _("Bronzong"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_PSYCHIC_NOISE, MOVE_BODY_PRESS, MOVE_PROTECT}
    },

    [SPECIES_BONSLY] = // Fake Tears
    {
        .name = _("Bonsly"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_BRAVE,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EXPLOSION, MOVE_ROCK_SLIDE, MOVE_COUNTER}
    },

    [SPECIES_MIME_JR] = // Copycat Kid
    {
        .name = _("Mime Jr"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FILTER,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 128, 128, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_BATON_PASS, MOVE_ENCORE}
    },

    [SPECIES_HAPPINY] = // Baby Egg
    {
        .name = _("Happiny"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_SOFT_BOILED, MOVE_PROTECT}
    },

    [SPECIES_CHATOT] = // Boombox
    {
        .name = _("Chatot"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TANGLED_FEET,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BOOMBURST, MOVE_AIR_SLASH, MOVE_NASTY_PLOT, MOVE_HEAT_WAVE}
    },

    [SPECIES_SPIRITOMB] = // Offensive Trick Room
    {
        .name = _("Spiritomb"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_PSYSHOCK}
    },

    [SPECIES_GIBLE] = // Setup Sweeper
    {
        .name = _("Gible"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_JOLLY,
        .evs = {52, 196, 76, 180, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SCALE_SHOT, MOVE_EARTHQUAKE, MOVE_ENDURE}
    },

    [SPECIES_GABITE] = // Swords Dance
    {
        .name = _("Gabite"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE}
    },

    [SPECIES_GARCHOMP] = // Suicide Lead
    {
        .name = _("Garchomp"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_TAIL, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_SPIKES}
    },

    [SPECIES_MUNCHLAX] = // Snack Time
    {
        .name = _("Munchlax"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_CAREFUL,
        .evs = {252, 128, 0, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_REST}
    },

    [SPECIES_RIOLU] = // Junior Aura
    {
        .name = _("Riolu"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STEADFAST,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_ICE_PUNCH}
    },

    [SPECIES_LUCARIO] = // Swords Dance
    {
        .name = _("Lucario"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_METEOR_MASH, MOVE_EXTREME_SPEED}
    },

    [SPECIES_HIPPOPOTAS] = // Sand Setter
    {
        .name = _("Hippopotas"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAND_STREAM,
        .nature = NATURE_ADAMANT,
        .evs = {0, 100, 212, 0, 0, 180},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLACK_OFF, MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_ICE_FANG}
    },

    [SPECIES_HIPPOWDON] = // Stealth Rock
    {
        .name = _("Hippowdon"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SAND_STREAM,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 208, 0, 0, 48},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_SLACK_OFF, MOVE_STONE_EDGE}
    },

    [SPECIES_SKORUPI] = // Tiny Pincer
    {
        .name = _("Skorupi"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BATTLE_ARMOR,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TOXIC_SPIKES, MOVE_KNOCK_OFF, MOVE_WHIRLWIND, MOVE_PROTECT}
    },

    [SPECIES_DRAPION] = // Scorpion King
    {
        .name = _("Drapion"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_BATTLE_ARMOR,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_AQUA_TAIL, MOVE_EARTHQUAKE}
    },

    [SPECIES_CROAGUNK] = // Bulky Attacker
    {
        .name = _("Croagunk"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_DRY_SKIN,
        .nature = NATURE_ADAMANT,
        .evs = {52, 188, 116, 116, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE}
    },

    [SPECIES_TOXICROAK] = // Swords Dance
    {
        .name = _("Toxicroak"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_DRY_SKIN,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_GUNK_SHOT, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_CARNIVINE] = // Venus Trap
    {
        .name = _("Carnivine"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_POWER_WHIP, MOVE_CRUNCH, MOVE_SLEEP_POWDER}
    },

    [SPECIES_FINNEON] = // Little Lantern
    {
        .name = _("Finneon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_U_TURN, MOVE_ICE_BEAM, MOVE_PROTECT}
    },

    [SPECIES_LUMINEON] = // Neon Tetra
    {
        .name = _("Lumineon"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_U_TURN, MOVE_ICE_BEAM, MOVE_TOXIC}
    },

    [SPECIES_MANTYKE] = // Baby Manta
    {
        .name = _("Mantyke"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_AIR_SLASH, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_SNOVER] = // Snow Setter
    {
        .name = _("Snover"),
        .item = ITEM_ICY_ROCK,
        .ability = ABILITY_SNOW_WARNING,
        .nature = NATURE_HASTY,
        .evs = {0, 100, 0, 196, 180, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_ICE_SHARD, MOVE_PROTECT}
    },

    [SPECIES_ABOMASNOW] = // Aurora Veil
    {
        .name = _("Abomasnow"),
        .item = ITEM_EJECT_PACK,
        .ability = ABILITY_SNOW_WARNING,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AURORA_VEIL, MOVE_LEAF_STORM, MOVE_BLIZZARD, MOVE_EARTH_POWER}
    },

    [SPECIES_WEAVILE] = // Boots Attacker
    {
        .name = _("Weavile"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TRIPLE_AXEL, MOVE_KNOCK_OFF, MOVE_ICE_SHARD, MOVE_SWORDS_DANCE}
    },

    [SPECIES_MAGNEZONE] = // Choice Specs
    {
        .name = _("Magnezone"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_ANALYTIC,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_TERA_BLAST}
    },

    [SPECIES_LICKILICKY] = // Curse Tongue
    {
        .name = _("Lickilicky"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_OWN_TEMPO,
        .nature = NATURE_ADAMANT,
        .evs = {252, 128, 128, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_REST}
    },

    [SPECIES_RHYPERIOR] = // Stealth Rock
    {
        .name = _("Rhyperior"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_ADAMANT,
        .evs = {252, 16, 0, 0, 0, 240},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_MEGAHORN, MOVE_STEALTH_ROCK}
    },

    [SPECIES_TANGROWTH] = // Physically Defensive
    {
        .name = _("Tangrowth"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_RELAXED,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_HIDDEN_POWER, MOVE_SLEEP_POWDER}
    },

    [SPECIES_ELECTIVIRE] = // Motor Fists
    {
        .name = _("Electivire"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOTOR_DRIVE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILD_CHARGE, MOVE_ICE_PUNCH, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE}
    },

    [SPECIES_MAGMORTAR] = // All-Out Attacker
    {
        .name = _("Magmortar"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_SCORCHING_SANDS, MOVE_THUNDERBOLT, MOVE_KNOCK_OFF}
    },

    [SPECIES_TOGEKISS] = // Paraflinch
    {
        .name = _("Togekiss"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_NASTY_PLOT, MOVE_THUNDER_WAVE, MOVE_ROOST}
    },

    [SPECIES_YANMEGA] = // Choice Specs (Bug)
    {
        .name = _("Yanmega"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_U_TURN}
    },

    [SPECIES_LEAFEON] = // Sunny Day Attacker
    {
        .name = _("Leafeon"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SOLAR_BLADE, MOVE_DOUBLE_EDGE, MOVE_TERA_BLAST}
    },

    [SPECIES_GLACEON] = // Deep Freeze
    {
        .name = _("Glaceon"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SNOW_CLOAK,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FREEZE_DRY, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_CALM_MIND}
    },

    [SPECIES_GLISCOR] = // Defensive
    {
        .name = _("Gliscor"),
        .item = ITEM_TOXIC_ORB,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_IMPISH,
        .evs = {244, 0, 252, 0, 0, 12},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_SPIKES, MOVE_PROTECT}
    },

    [SPECIES_MAMOSWINE] = // Wallbreaker
    {
        .name = _("Mamoswine"),
        .item = ITEM_NEVER_MELT_ICE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_TRAILBLAZE}
    },

    [SPECIES_PORYGON_Z] = // Agility
    {
        .name = _("Porygon-Z"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DOWNLOAD,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_AGILITY, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },

    [SPECIES_GALLADE] = // Setup Sweeper
    {
        .name = _("Gallade"),
        .item = ITEM_LUM_BERRY,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_LEAF_BLADE}
    },

    [SPECIES_PROBOPASS] = // Magnet Trap
    {
        .name = _("Probopass"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MAGNET_PULL,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_POWER_GEM, MOVE_VOLT_SWITCH, MOVE_TOXIC}
    },

    [SPECIES_DUSKNOIR] = // Grim Reaper
    {
        .name = _("Dusknoir"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_POLTERGEIST, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH}
    },

    [SPECIES_FROSLASS] = // Suicide Lead
    {
        .name = _("Froslass"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_TAUNT, MOVE_DESTINY_BOND, MOVE_ICY_WIND}
    },

    [SPECIES_ROTOM] = // Choice Scarf
    {
        .name = _("Rotom"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH, MOVE_TRICK}
    },

    [SPECIES_ROTOM_HEAT] = // Nasty Plot
    {
        .name = _("Rotom-H"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {248, 0, 0, 252, 8, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_NASTY_PLOT, MOVE_PAIN_SPLIT}
    },

    [SPECIES_ROTOM_FAN] = // Propeller
    {
        .name = _("Rotom-Fan"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_AIR_SLASH, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP}
    },

    [SPECIES_ROTOM_FROST] = // Nasty Plot
    {
        .name = _("Rotom-Fr"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_BLIZZARD, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT}
    },

    [SPECIES_ROTOM_MOW] = // Choice Scarf
    {
        .name = _("Rotom-M"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_LEAF_STORM, MOVE_VOLT_SWITCH, MOVE_TRICK}
    },

    [SPECIES_ROTOM_WASH] = // Utility Pivot
    {
        .name = _("Rotom-W"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 168, 88, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}
    },

    [SPECIES_UXIE] = // Nasty Plot
    {
        .name = _("Uxie"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_ENCORE}
    },

    [SPECIES_MESPRIT] = // Utility
    {
        .name = _("Mesprit"),
        .item = ITEM_COLBUR_BERRY,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_PSYCHIC_NOISE, MOVE_U_TURN, MOVE_HEALING_WISH}
    },

    [SPECIES_AZELF] = // Lead
    {
        .name = _("Azelf"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_NAIVE,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_TAUNT, MOVE_EXPLOSION, MOVE_FLAMETHROWER}
    },

    [SPECIES_DIALGA] = // Mixed Utility
    {
        .name = _("Dialga"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 0, 0, 4, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_HEAVY_SLAM, MOVE_STEALTH_ROCK, MOVE_DRAGON_TAIL}
    },

    [SPECIES_DIALGA_ORIGIN] = // Mixed Utility
    {
        .name = _("Dialga"),
        .item = ITEM_ADAMANT_CRYSTAL,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_STEEL_BEAM, MOVE_STEALTH_ROCK, MOVE_DRAGON_TAIL}
    },

    [SPECIES_PALKIA] = // Choice Scarf
    {
        .name = _("Palkia"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SPACIAL_REND, MOVE_HYDRO_PUMP, MOVE_FIRE_BLAST, MOVE_TRICK}
    },

    [SPECIES_PALKIA_ORIGIN] = // Wallbreaker
    {
        .name = _("Palkia-O"),
        .item = ITEM_LUSTROUS_GLOBE,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_FIRE_BLAST, MOVE_SPACIAL_REND, MOVE_EARTH_POWER}
    },

    [SPECIES_HEATRAN] = // Offensive
    {
        .name = _("Heatran"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_MAGMA_STORM, MOVE_EARTH_POWER, MOVE_TERA_BLAST}
    },

    [SPECIES_REGIGIGAS] = // Slow Starter
    {
        .name = _("Regigigas"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOW_START,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_PROTECT, MOVE_RETURN, MOVE_KNOCK_OFF}
    },

    [SPECIES_GIRATINA_ALTERED] = // Defog
    {
        .name = _("Giratina"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_ROAR, MOVE_WILL_O_WISP, MOVE_REST}
    },

    [SPECIES_GIRATINA_ORIGIN] = // Special Utility
    {
        .name = _("Giratina-O"),
        .item = ITEM_GRISEOUS_CORE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .evs = {248, 0, 112, 44, 104, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HEX, MOVE_DRACO_METEOR, MOVE_WILL_O_WISP, MOVE_DEFOG}
    },

    [SPECIES_CRESSELIA] = // Trick Room Support
    {
        .name = _("Cresselia"),
        .item = ITEM_SAFETY_GOGGLES,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 180, 0, 0, 76},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND}
    },

    [SPECIES_PHIONE] = // Sea Prince
    {
        .name = _("Phione"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_HYDRATION,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_REST, MOVE_PROTECT}
    },

    [SPECIES_MANAPHY] = // Tail Glow
    {
        .name = _("Manaphy"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_HYDRATION,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_TAIL_GLOW, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_ENERGY_BALL}
    },

    [SPECIES_DARKRAI] = // Choice Scarf
    {
        .name = _("Darkrai"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_BAD_DREAMS,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_TRICK, MOVE_ICE_BEAM, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_SHAYMIN_LAND] = // Serene
    {
        .name = _("Shaymin-S"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_HEALING_WISH}
    },

    [SPECIES_SHAYMIN_SKY] = // Serene
    {
        .name = _("Shaymin-S"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_HEALING_WISH}
    },

    [SPECIES_ARCEUS_NORMAL] = // Extreme Killer
    {
        .name = _("Arceus"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_MULTITYPE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_RECOVER, MOVE_EXTREME_SPEED, MOVE_SHADOW_CLAW}
    },

    [SPECIES_VICTINI] = // Pivot
    {
        .name = _("Victini"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_VICTORY_STAR,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_V_CREATE, MOVE_U_TURN, MOVE_BOLT_STRIKE, MOVE_TOXIC}
    },

    [SPECIES_SNIVY] = // Contrary Storm
    {
        .name = _("Snivy"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEAF_STORM, MOVE_SUBSTITUTE, MOVE_GLARE, MOVE_HIDDEN_POWER}
    },

    [SPECIES_SERVINE] = // Defensive
    {
        .name = _("Servine"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEAF_STORM, MOVE_SYNTHESIS, MOVE_KNOCK_OFF, MOVE_GLARE}
    },

    [SPECIES_SERPERIOR] = // Dual Screens
    {
        .name = _("Serperior"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEAF_STORM, MOVE_GLARE, MOVE_REFLECT, MOVE_LIGHT_SCREEN}
    },

    [SPECIES_TEPIG] = // Piglet
    {
        .name = _("Tepig"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_NAIVE,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_FLAMETHROWER, MOVE_SUPERPOWER, MOVE_PROTECT}
    },

    [SPECIES_PIGNITE] = // All-Out Attacker
    {
        .name = _("Pignite"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_HIGH_HORSEPOWER}
    },

    [SPECIES_EMBOAR] = // Wallbreaker
    {
        .name = _("Emboar"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_RECKLESS,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF}
    },

    [SPECIES_OSHAWOTT] = // Scalchop
    {
        .name = _("Oshawott"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHELL_ARMOR,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_RAZOR_SHELL, MOVE_AQUA_JET, MOVE_SUPERPOWER}
    },

    [SPECIES_DEWOTT] = // Swords Dance
    {
        .name = _("Dewott"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_AQUA_JET}
    },

    [SPECIES_SAMUROTT] = // Special Wallbreaker
    {
        .name = _("Samurott"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_GRASS_KNOT, MOVE_ICE_BEAM, MOVE_AQUA_JET}
    },

    [SPECIES_SAMUROTT_HISUI] = // Lead
    {
        .name = _("Samurott-H"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CEASELESS_EDGE, MOVE_RAZOR_SHELL, MOVE_AQUA_JET, MOVE_KNOCK_OFF}
    },

    [SPECIES_PATRAT] = // Lookout
    {
        .name = _("Patrat"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_KEEN_EYE,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 128, 128, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUPER_FANG, MOVE_HYPNOSIS, MOVE_FOUL_PLAY, MOVE_PROTECT}
    },

    [SPECIES_WATCHOG] = // Night Watch
    {
        .name = _("Watchog"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_ANALYTIC,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOUL_PLAY, MOVE_SUPER_FANG, MOVE_HYPNOSIS, MOVE_TOXIC}
    },

    [SPECIES_LILLIPUP] = // Puppy Love
    {
        .name = _("Lillipup"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 128, 128, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PROTECT}
    },

    [SPECIES_HERDIER] = // Guard Dog
    {
        .name = _("Herdier"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 128, 128, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_WORK_UP}
    },

    [SPECIES_STOUTLAND] = // Big Dog
    {
        .name = _("Stoutland"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_FIRE_FANG}
    },

    [SPECIES_PURRLOIN] = // Sly Kitten
    {
        .name = _("Purrloin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TAUNT, MOVE_ENCORE, MOVE_FOUL_PLAY, MOVE_TOXIC}
    },

    [SPECIES_LIEPARD] = // Prank Call
    {
        .name = _("Liepard"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TAUNT, MOVE_TRICK, MOVE_FOUL_PLAY, MOVE_ENCORE}
    },

    [SPECIES_PANSAGE] = // Grass Monkey
    {
        .name = _("Pansage"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_GLUTTONY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 128, 128, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEECH_SEED, MOVE_SEED_BOMB, MOVE_ROCK_SLIDE, MOVE_PROTECT}
    },

    [SPECIES_SIMISAGE] = // Moody Monkey
    {
        .name = _("Simisage"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MOODY,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_SEED_BOMB, MOVE_RETURN}
    },

    [SPECIES_PANSEAR] = // Fire Monkey
    {
        .name = _("Pansear"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_GLUTTONY,
        .nature = NATURE_NAIVE,
        .evs = {252, 128, 0, 128, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_PROTECT, MOVE_TOXIC}
    },

    [SPECIES_SIMISEAR] = // Moody Ember
    {
        .name = _("Simisear"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MOODY,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_FLARE_BLITZ, MOVE_CRUNCH}
    },

    [SPECIES_PANPOUR] = // Water Monkey
    {
        .name = _("Panpour"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_GLUTTONY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PROTECT, MOVE_TOXIC}
    },

    [SPECIES_SIMIPOUR] = // Moody Splash
    {
        .name = _("Simipour"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MOODY,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_LIQUIDATION, MOVE_ICE_PUNCH}
    },

    [SPECIES_MUNNA] = // Slow Dreamer
    {
        .name = _("Munna"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SYNCHRONIZE,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_YAWN, MOVE_PSYCHIC, MOVE_MOONLIGHT}
    },

    [SPECIES_MUSHARNA] = // Dream Ward
    {
        .name = _("Musharna"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SYNCHRONIZE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_MOONLIGHT, MOVE_YAWN}
    },

    [SPECIES_PIDOVE] = // Bulk Pigeon
    {
        .name = _("Pidove"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BIG_PECKS,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_TAUNT}
    },

    [SPECIES_TRANQUILL] = // Pivot Wing
    {
        .name = _("Tranquill"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BIG_PECKS,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_DEFOG}
    },

    [SPECIES_UNFEZANT] = // Lucky Slash
    {
        .name = _("Unfezant"),
        .item = ITEM_SCOPE_LENS,
        .ability = ABILITY_SUPER_LUCK,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NIGHT_SLASH, MOVE_AIR_SLASH, MOVE_FACADE, MOVE_ROOST}
    },

    [SPECIES_BLITZLE] = // Static Charge
    {
        .name = _("Blitzle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOTOR_DRIVE,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_FLAME_CHARGE, MOVE_WILD_CHARGE, MOVE_IRON_TAIL}
    },

    [SPECIES_ZEBSTRIKA] = // Thunder Hooves
    {
        .name = _("Zebstrika"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_MOTOR_DRIVE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILD_CHARGE, MOVE_FLAME_CHARGE, MOVE_VOLT_SWITCH, MOVE_IRON_TAIL}
    },

    [SPECIES_ROGGENROLA] = // Sturdy Rock
    {
        .name = _("Roggenrola"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_BLAST, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },

    [SPECIES_BOLDORE] = // Sturdy Boulder
    {
        .name = _("Boldore"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },

    [SPECIES_GIGALITH] = // Sandstone Fist
    {
        .name = _("Gigalith"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SAND_STREAM,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_SUPERPOWER}
    },

    [SPECIES_WOOBAT] = // Simple Mind
    {
        .name = _("Woobat"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SIMPLE,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_ROOST}
    },

    [SPECIES_SWOOBAT] = // Simple Mind Plus
    {
        .name = _("Swoobat"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SIMPLE,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_ROOST}
    },

    [SPECIES_DRILBUR] = // Utility
    {
        .name = _("Drilbur"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_JOLLY,
        .evs = {0, 156, 116, 212, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_RAPID_SPIN}
    },

    [SPECIES_EXCADRILL] = // Utility
    {
        .name = _("Excadrill"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_JOLLY,
        .evs = {156, 0, 0, 100, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_RAPID_SPIN, MOVE_IRON_HEAD, MOVE_STEALTH_ROCK}
    },

    [SPECIES_AUDINO] = // Mega Nurse
    {
        .name = _("Audino"),
        .item = ITEM_AUDINITE,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_HEAL_BELL, MOVE_TOXIC}
    },

    [SPECIES_TIMBURR] = // Physical Attacker
    {
        .name = _("Timburr"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_ADAMANT,
        .evs = {0, 196, 156, 0, 0, 156},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH}
    },

    [SPECIES_GURDURR] = // Bulky Attacker
    {
        .name = _("Gurdurr"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_ADAMANT,
        .evs = {248, 16, 244, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_MACH_PUNCH, MOVE_DEFOG}
    },

    [SPECIES_CONKELDURR] = // Guts
    {
        .name = _("Conkeldurr"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_ADAMANT,
        .evs = {4, 68, 0, 216, 0, 220},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FACADE, MOVE_MACH_PUNCH}
    },

    [SPECIES_TYMPOLE] = // Rain Tadpole
    {
        .name = _("Tympole"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_SLUDGE_BOMB, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },

    [SPECIES_PALPITOAD] = // Mud Croak
    {
        .name = _("Palpitoad"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_STEALTH_ROCK}
    },

    [SPECIES_SEISMITOAD] = // Rain Bruiser
    {
        .name = _("Seismitoad"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM}
    },

    [SPECIES_THROH] = // Guts Grappler
    {
        .name = _("Throh"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_STORM_THROW, MOVE_BULK_UP, MOVE_REST}
    },

    [SPECIES_SAWK] = // Karate Chop
    {
        .name = _("Sawk"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_POISON_JAB, MOVE_STONE_EDGE}
    },

    [SPECIES_SEWADDLE] = // Leaf Larva
    {
        .name = _("Sewaddle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_OVERCOAT,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_BUG_BITE, MOVE_RAZOR_LEAF, MOVE_PROTECT}
    },

    [SPECIES_SWADLOON] = // Leaf Cocoon
    {
        .name = _("Swadloon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_OVERCOAT,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEECH_LIFE, MOVE_RAZOR_LEAF, MOVE_SYNTHESIS, MOVE_PROTECT}
    },

    [SPECIES_LEAVANNY] = // Sticky Web
    {
        .name = _("Leavanny"),
        .item = ITEM_EJECT_PACK,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_NAUGHTY,
        .evs = {0, 116, 0, 216, 176, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_LEAF_STORM, MOVE_TRIPLE_AXEL, MOVE_LOW_KICK}
    },

    [SPECIES_VENIPEDE] = // Boosted Crawl
    {
        .name = _("Venipede"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PROTECT, MOVE_POISON_JAB, MOVE_STEAMROLLER, MOVE_ROCK_SLIDE}
    },

    [SPECIES_WHIRLIPEDE] = // Boosted Roll
    {
        .name = _("Whirlipede"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PROTECT, MOVE_POISON_JAB, MOVE_STEAMROLLER, MOVE_ROCK_SLIDE}
    },

    [SPECIES_SCOLIPEDE] = // Boosted Blade
    {
        .name = _("Scolipede"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_EARTHQUAKE}
    },

    [SPECIES_COTTONEE] = // Memento
    {
        .name = _("Cottonee"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_TIMID,
        .evs = {36, 0, 36, 228, 140, 36},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_DAZZLING_GLEAM, MOVE_STUN_SPORE, MOVE_MEMENTO}
    },

    [SPECIES_WHIMSICOTT] = // Babiri Berry
    {
        .name = _("Whimsicott"),
        .item = ITEM_BABIRI_BERRY,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_IMPISH,
        .evs = {56, 0, 252, 0, 0, 200},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_PROTECT, MOVE_ENCORE}
    },

    [SPECIES_PETILIL] = // Sun Sleeper
    {
        .name = _("Petilil"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_SUBSTITUTE, MOVE_LEAF_STORM}
    },

    [SPECIES_LILLIGANT] = // Sun Sweeper
    {
        .name = _("Lilligant"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_ALLURING_VOICE}
    },

    [SPECIES_LILLIGANT_HISUI] = // Victory Dance
    {
        .name = _("Lilligant-H"),
        .item = ITEM_WIDE_LENS,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VICTORY_DANCE, MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_ICE_SPINNER}
    },

    [SPECIES_BASCULIN_RED_STRIPED] = // Reckless Bite
    {
        .name = _("Basculin-R"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_RECKLESS,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAD_SMASH, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_SUPERPOWER}
    },

    [SPECIES_BASCULIN_BLUE_STRIPED] = // Mold Fang
    {
        .name = _("Basculin-B"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_SUPERPOWER}
    },

    [SPECIES_BASCULIN_WHITE_STRIPED] = // Adapt Fang
    {
        .name = _("Basculin-W"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WATERFALL, MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_SUPERPOWER}
    },

    [SPECIES_SANDILE] = // Bulky Stealth Rock
    {
        .name = _("Sandile"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .evs = {0, 180, 76, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_TERA_BLAST, MOVE_EARTHQUAKE, MOVE_STONE_EDGE}
    },

    [SPECIES_KROKOROK] = // Choice Item
    {
        .name = _("Krokorok"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_AQUA_TAIL}
    },

    [SPECIES_KROOKODILE] = // Choice Band
    {
        .name = _("Krookodile"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_DARUMAKA] = // Hot Blood Jr
    {
        .name = _("Darumaka"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_SUPERPOWER, MOVE_U_TURN, MOVE_ICE_PUNCH}
    },

    [SPECIES_DARUMAKA_GALAR] = // Frost Fist Jr
    {
        .name = _("Darumaka-G"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_PUNCH, MOVE_SUPERPOWER, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD}
    },

    [SPECIES_DARMANITAN_STANDARD] = // Hot Blood
    {
        .name = _("Darmanitan"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_U_TURN}
    },

    [SPECIES_DARMANITAN_GALAR_STANDARD] = // Frost Fist
    {
        .name = _("Darmanitan-G"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_GORILLA_TACTICS,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_U_TURN}
    },

    [SPECIES_MARACTUS] = // Needle Spiker
    {
        .name = _("Maractus"),
        .item = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS}
    },

    [SPECIES_DWEBBLE] = // Rock Lead
    {
        .name = _("Dwebble"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_BLAST, MOVE_X_SCISSOR, MOVE_TOXIC}
    },

    [SPECIES_CRUSTLE] = // Shell Smasher
    {
        .name = _("Crustle"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_STONE_EDGE, MOVE_X_SCISSOR, MOVE_SUPERPOWER}
    },

    [SPECIES_SCRAGGY] = // Bulk Up
    {
        .name = _("Scraggy"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 0, 4, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_REST}
    },

    [SPECIES_SCRAFTY] = // Dragon Dance
    {
        .name = _("Scrafty"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_ADAMANT,
        .evs = {176, 100, 0, 232, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB}
    },

    [SPECIES_SIGILYPH] = // Guardless Glide
    {
        .name = _("Sigilyph"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_ROOST}
    },

    [SPECIES_YAMASK] = // Cursed Mask
    {
        .name = _("Yamask"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MUMMY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_HEX, MOVE_PROTECT}
    },

    [SPECIES_YAMASK_GALAR] = // Sand Tomb Guard
    {
        .name = _("Yamask-G"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WANDERING_SPIRIT,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PROTECT}
    },

    [SPECIES_COFAGRIGUS] = // Sarcophagus
    {
        .name = _("Cofagrigus"),
        .item = ITEM_MENTAL_HERB,
        .ability = ABILITY_MUMMY,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PROTECT}
    },

    [SPECIES_TIRTOUGA] = // Fossil Smash
    {
        .name = _("Tirtouga"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_AQUA_JET}
    },

    [SPECIES_CARRACOSTA] = // Ancient Smash
    {
        .name = _("Carracosta"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },

    [SPECIES_ARCHEN] = // Defeatist Dive
    {
        .name = _("Archen"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_DEFEATIST,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAD_SMASH, MOVE_ROCK_SLIDE, MOVE_ACROBATICS, MOVE_EARTHQUAKE}
    },

    [SPECIES_ARCHEOPS] = // First Strike
    {
        .name = _("Archeops"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DEFEATIST,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_ROCK_SLIDE}
    },

    [SPECIES_TRUBBISH] = // Hazard Bag
    {
        .name = _("Trubbish"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_AFTERMATH,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_TOXIC_SPIKES, MOVE_SLUDGE_BOMB, MOVE_PROTECT}
    },

    [SPECIES_GARBODOR] = // Toxic Dump
    {
        .name = _("Garbodor"),
        .item = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_AFTERMATH,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GUNK_SHOT, MOVE_DRAIN_PUNCH, MOVE_SPIKES, MOVE_EXPLOSION}
    },

    [SPECIES_ZORUA] = // Choice Scarf
    {
        .name = _("Zorua"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_ILLUSION,
        .nature = NATURE_NAIVE,
        .evs = {36, 236, 0, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_TERA_BLAST, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_ZORUA_HISUI] = // Wallbreaker
    {
        .name = _("Zorua-H"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ILLUSION,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 116, 196, 156, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TERA_BLAST, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_KNOCK_OFF}
    },

    [SPECIES_ZOROARK] = // Choice Specs
    {
        .name = _("Zoroark"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_ILLUSION,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_TRICK, MOVE_FOCUS_BLAST}
    },

    [SPECIES_ZOROARK_HISUI] = // Choice Specs
    {
        .name = _("Zoroark-H"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_ILLUSION,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_TRICK, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_HYPER_VOICE}
    },

    [SPECIES_MINCCINO] = // Skill Link Attacker
    {
        .name = _("Minccino"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SKILL_LINK,
        .nature = NATURE_JOLLY,
        .evs = {76, 196, 0, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TAIL_SLAP, MOVE_KNOCK_OFF, MOVE_PROTECT, MOVE_U_TURN}
    },

    [SPECIES_CINCCINO] = // Tidy Up
    {
        .name = _("Cinccino"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TIDY_UP, MOVE_TAIL_SLAP, MOVE_KNOCK_OFF, MOVE_ENCORE}
    },

    [SPECIES_GOTHITA] = // Trapper
    {
        .name = _("Gothita"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SHADOW_TAG,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 36, 236, 236, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_TRICK, MOVE_THUNDERBOLT, MOVE_ENERGY_BALL}
    },

    [SPECIES_GOTHORITA] = // Shadow Trap
    {
        .name = _("Gothorita"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHADOW_TAG,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 4, 0, 252, 0},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_PROTECT}
    },

    [SPECIES_GOTHITELLE] = // Supportive Trapper
    {
        .name = _("Gothitelle"),
        .item = ITEM_COVERT_CLOAK,
        .ability = ABILITY_SHADOW_TAG,
        .nature = NATURE_CALM,
        .evs = {252, 0, 100, 0, 0, 156},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_FOUL_PLAY, MOVE_TAUNT, MOVE_HELPING_HAND}
    },

    [SPECIES_SOLOSIS] = // Guarded Room
    {
        .name = _("Solosis"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 4, 0, 252, 0},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_PROTECT}
    },

    [SPECIES_DUOSION] = // Double Dance
    {
        .name = _("Duosion"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ACID_ARMOR, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_STORED_POWER}
    },

    [SPECIES_REUNICLUS] = // Calm Mind
    {
        .name = _("Reuniclus"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC_NOISE, MOVE_FOCUS_BLAST, MOVE_RECOVER}
    },

    [SPECIES_DUCKLETT] = // Downy Pivot
    {
        .name = _("Ducklett"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BIG_PECKS,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ROOST, MOVE_SCALD, MOVE_AIR_SLASH, MOVE_DEFOG}
    },

    [SPECIES_SWANNA] = // Storm Wing
    {
        .name = _("Swanna"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_BIG_PECKS,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_ROOST}
    },

    [SPECIES_VANILLITE] = // Frosty Cone
    {
        .name = _("Vanillite"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ICE_BODY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_MIRROR_COAT, MOVE_PROTECT}
    },

    [SPECIES_VANILLISH] = // Frosty Scoop
    {
        .name = _("Vanillish"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ICE_BODY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_MIRROR_COAT, MOVE_PROTECT}
    },

    [SPECIES_VANILLUXE] = // Blizzard Twins
    {
        .name = _("Vanilluxe"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SNOW_WARNING,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLIZZARD, MOVE_FLASH_CANNON, MOVE_EXPLOSION, MOVE_AUTOTOMIZE}
    },

    [SPECIES_DEERLING_SPRING] = // Bloom Antler
    {
        .name = _("Deerling-Spr"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_HORN_LEECH, MOVE_JUMP_KICK}
    },

    [SPECIES_DEERLING_SUMMER] = // Sun Antler
    {
        .name = _("Deerling-Sum"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_HORN_LEECH, MOVE_JUMP_KICK}
    },

    [SPECIES_DEERLING_AUTUMN] = // Amber Antler
    {
        .name = _("Deerling-Aut"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_HORN_LEECH, MOVE_JUMP_KICK}
    },

    [SPECIES_DEERLING_WINTER] = // Frost Antler
    {
        .name = _("Deerling-Win"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_HORN_LEECH, MOVE_JUMP_KICK}
    },

    [SPECIES_SAWSBUCK_SPRING] = // Bloom Stag
    {
        .name = _("Sawsbuck-Spr"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_HORN_LEECH, MOVE_JUMP_KICK}
    },

    [SPECIES_SAWSBUCK_SUMMER] = // Sun Stag
    {
        .name = _("Sawsbuck-Sum"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_HORN_LEECH, MOVE_JUMP_KICK}
    },

    [SPECIES_SAWSBUCK_AUTUMN] = // Amber Stag
    {
        .name = _("Sawsbuck-Aut"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_HORN_LEECH, MOVE_JUMP_KICK}
    },

    [SPECIES_SAWSBUCK_WINTER] = // Frost Stag
    {
        .name = _("Sawsbuck-Win"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_HORN_LEECH, MOVE_JUMP_KICK}
    },

    [SPECIES_EMOLGA] = // Static Glider
    {
        .name = _("Emolga"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_STATIC,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_AIR_SLASH, MOVE_KNOCK_OFF, MOVE_ENCORE}
    },

    [SPECIES_KARRABLAST] = // Shell Trader
    {
        .name = _("Karrablast"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWARM,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_PROTECT}
    },

    [SPECIES_ESCAVALIER] = // Iron Lance
    {
        .name = _("Escavalier"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_OVERCOAT,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MEGAHORN, MOVE_IRON_HEAD, MOVE_DRILL_RUN, MOVE_KNOCK_OFF}
    },

    [SPECIES_FOONGUS] = // Defensive
    {
        .name = _("Foongus"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .evs = {44, 0, 236, 0, 0, 156},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS}
    },

    [SPECIES_AMOONGUSS] = // Bulky Support
    {
        .name = _("Amoonguss"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .evs = {244, 0, 188, 0, 0, 76},
        .ivs = {31, 31, 31, 27, 31, 31},
        .moves = {MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_PROTECT}
    },

    [SPECIES_FRILLISH] = // Brine Ghost
    {
        .name = _("Frillish"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_TOXIC}
    },

    [SPECIES_JELLICENT] = // Bog Ghost
    {
        .name = _("Jellicent"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_WILL_O_WISP}
    },

    [SPECIES_ALOMOMOLA] = // Wish Passer
    {
        .name = _("Alomomola"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_FLIP_TURN, MOVE_SCALD}
    },

    [SPECIES_JOLTIK] = // Web Spinner
    {
        .name = _("Joltik"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_COMPOUND_EYES,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_VOLT_SWITCH}
    },

    [SPECIES_GALVANTULA] = // Sticky Web
    {
        .name = _("Galvantula"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_COMPOUND_EYES,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_ENERGY_BALL, MOVE_THUNDER, MOVE_THUNDER_WAVE}
    },

    [SPECIES_FERROSEED] = // Iron Hazard
    {
        .name = _("Ferroseed"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IRON_BARBS,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_GYRO_BALL, MOVE_LEECH_SEED, MOVE_PROTECT}
    },

    [SPECIES_FERROTHORN] = // Specially Defensive
    {
        .name = _("Ferrothorn"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_IRON_BARBS,
        .nature = NATURE_SASSY,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_POWER_WHIP, MOVE_SPIKES, MOVE_LEECH_SEED, MOVE_KNOCK_OFF}
    },

    [SPECIES_KLINK] = // Gear Trap
    {
        .name = _("Klink"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_GEAR_GRIND, MOVE_DISCHARGE, MOVE_THUNDER_WAVE, MOVE_PROTECT}
    },

    [SPECIES_KLANG] = // Gear Shift Jr
    {
        .name = _("Klang"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHIFT_GEAR, MOVE_GEAR_GRIND, MOVE_WILD_CHARGE, MOVE_SUBSTITUTE}
    },

    [SPECIES_KLINKLANG] = // Gear Shift
    {
        .name = _("Klinklang"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHIFT_GEAR, MOVE_GEAR_GRIND, MOVE_WILD_CHARGE, MOVE_RETURN}
    },

    [SPECIES_TYNAMO] = // Volt Larva
    {
        .name = _("Tynamo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DISCHARGE, MOVE_VOLT_SWITCH, MOVE_SUBSTITUTE, MOVE_PROTECT}
    },

    [SPECIES_EELEKTRIK] = // Defensive Pivot
    {
        .name = _("Eelektrik"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_DISCHARGE, MOVE_U_TURN, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_EELEKTROSS] = // Defensive Pivot
    {
        .name = _("Eelektross"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_DISCHARGE, MOVE_DRAGON_TAIL}
    },

    [SPECIES_ELGYEM] = // Last Mover
    {
        .name = _("Elgyem"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ANALYTIC,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT}
    },

    [SPECIES_BEHEEYEM] = // Analytic Nuke
    {
        .name = _("Beheeyem"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_ANALYTIC,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ENERGY_BALL}
    },

    [SPECIES_LITWICK] = // Candle Flame
    {
        .name = _("Litwick"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_SUBSTITUTE}
    },

    [SPECIES_LAMPENT] = // Choice Item
    {
        .name = _("Lampent"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TRICK, MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL}
    },

    [SPECIES_CHANDELURE] = // Choice Specs
    {
        .name = _("Chandelure"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_TRICK}
    },

    [SPECIES_AXEW] = // Dragon Dance
    {
        .name = _("Axew"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_UNNERVE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 220, 116, 140, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_OUTRAGE, MOVE_STOMPING_TANTRUM, MOVE_FIRST_IMPRESSION}
    },

    [SPECIES_FRAXURE] = // Setup Sweeper
    {
        .name = _("Fraxure"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_OUTRAGE, MOVE_STOMPING_TANTRUM, MOVE_SUBSTITUTE}
    },

    [SPECIES_HAXORUS] = // Choice Band
    {
        .name = _("Haxorus"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_POISON_JAB}
    },

    [SPECIES_CUBCHOO] = // Sniffly Slasher
    {
        .name = _("Cubchoo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SLUSH_RUSH,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_PUNCH, MOVE_SUPERPOWER, MOVE_AQUA_JET}
    },

    [SPECIES_BEARTIC] = // Snow Sweeper
    {
        .name = _("Beartic"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_SLUSH_RUSH,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICICLE_SPEAR, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE}
    },

    [SPECIES_CRYOGONAL] = // Hazard Remover
    {
        .name = _("Cryogonal"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_FREEZE_DRY, MOVE_RECOVER, MOVE_HAZE}
    },

    [SPECIES_SHELMET] = // Slow Armor
    {
        .name = _("Shelmet"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_OVERCOAT,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ACID_ARMOR, MOVE_BATON_PASS, MOVE_STRUGGLE_BUG, MOVE_YAWN}
    },

    [SPECIES_ACCELGOR] = // Unburden Sash
    {
        .name = _("Accelgor"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_HYDRO_PUMP}
    },

    [SPECIES_STUNFISK] = // Trap Fish
    {
        .name = _("Stunfisk"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STATIC,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_THUNDER_WAVE, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_STUNFISK_GALAR] = // Steel Trap
    {
        .name = _("Stunfisk-G"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_MIMICRY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_FOUL_PLAY, MOVE_PROTECT}
    },

    [SPECIES_MIENFOO] = // Fast Pivot
    {
        .name = _("Mienfoo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_JOLLY,
        .evs = {0, 0, 196, 236, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT}
    },

    [SPECIES_MIENSHAO] = // Offensive Utility
    {
        .name = _("Mienshao"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ICE_SPINNER, MOVE_U_TURN}
    },

    [SPECIES_DRUDDIGON] = // Cave Fang
    {
        .name = _("Druddigon"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_TAIL, MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK}
    },

    [SPECIES_GOLETT] = // No Guard Fist
    {
        .name = _("Golett"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_NO_GUARD,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_EARTHQUAKE, MOVE_SHADOW_PUNCH, MOVE_ICE_PUNCH}
    },

    [SPECIES_GOLURK] = // Wallbreaker
    {
        .name = _("Golurk"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_NO_GUARD,
        .nature = NATURE_ADAMANT,
        .evs = {132, 252, 0, 124, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POLTERGEIST, MOVE_EARTHQUAKE, MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE}
    },

    [SPECIES_PAWNIARD] = // Swords Dance
    {
        .name = _("Pawniard"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_JOLLY,
        .evs = {0, 236, 36, 196, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_TERA_BLAST}
    },

    [SPECIES_BISHARP] = // Swords Dance
    {
        .name = _("Bisharp"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_ADAMANT,
        .evs = {80, 252, 0, 176, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_IRON_HEAD, MOVE_THROAT_CHOP}
    },

    [SPECIES_BOUFFALANT] = // Head Charger
    {
        .name = _("Bouffalant"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_RECKLESS,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAD_CHARGE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_MEGAHORN}
    },

    [SPECIES_RUFFLET] = // Choice Band
    {
        .name = _("Rufflet"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_AERIAL_ACE, MOVE_FACADE, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_BRAVIARY] = // Physically Defensive (Normal)
    {
        .name = _("Braviary"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 240, 16, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_DEFOG, MOVE_ROOST, MOVE_U_TURN}
    },

    [SPECIES_BRAVIARY_HISUI] = // Sheer Force
    {
        .name = _("Braviary-H"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_AGILITY}
    },

    [SPECIES_VULLABY] = // Physical Attacker
    {
        .name = _("Vullaby"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_JOLLY,
        .evs = {0, 236, 76, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_ROOST, MOVE_U_TURN}
    },

    [SPECIES_MANDIBUZZ] = // Mixed Defensive
    {
        .name = _("Mandibuzz"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_OVERCOAT,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 136, 16, 0, 108},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOUL_PLAY, MOVE_DEFOG, MOVE_TOXIC, MOVE_ROOST}
    },

    [SPECIES_HEATMOR] = // Anteater Plot
    {
        .name = _("Heatmor"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_SUBSTITUTE}
    },

    [SPECIES_DURANT] = // Iron Swarm
    {
        .name = _("Durant"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_SUPERPOWER, MOVE_STONE_EDGE}
    },

    [SPECIES_DEINO] = // Hustle Hatchling
    {
        .name = _("Deino"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_BODY_SLAM, MOVE_SUBSTITUTE}
    },

    [SPECIES_ZWEILOUS] = // Wallbreaker
    {
        .name = _("Zweilous"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_OUTRAGE, MOVE_STOMPING_TANTRUM, MOVE_ZEN_HEADBUTT}
    },

    [SPECIES_HYDREIGON] = // Nasty Plot
    {
        .name = _("Hydreigon"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE}
    },

    [SPECIES_LARVESTA] = // Defensive
    {
        .name = _("Larvesta"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_IMPISH,
        .evs = {76, 0, 236, 36, 0, 156},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_MORNING_SUN}
    },

    [SPECIES_VOLCARONA] = // Life Orb
    {
        .name = _("Volcarona"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWARM,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 32, 196, 12, 16},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_OVERHEAT, MOVE_SUBSTITUTE}
    },

    [SPECIES_COBALION] = // Utility
    {
        .name = _("Cobalion"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_JUSTIFIED,
        .nature = NATURE_JOLLY,
        .evs = {0, 0, 252, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_BODY_PRESS, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE}
    },

    [SPECIES_TERRAKION] = // Choice Band
    {
        .name = _("Terrakion"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_JUSTIFIED,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_QUICK_ATTACK}
    },

    [SPECIES_VIRIZION] = // Swords Dance
    {
        .name = _("Virizion"),
        .item = ITEM_LUM_BERRY,
        .ability = ABILITY_JUSTIFIED,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SYNTHESIS}
    },

    [SPECIES_TORNADUS_INCARNATE] = // Offensive Pivot
    {
        .name = _("Tornadus"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_HEAT_WAVE}
    },

    [SPECIES_TORNADUS_THERIAN] = // Pivot
    {
        .name = _("Tornadus-T"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 192, 0, 64},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_FOCUS_BLAST, MOVE_KNOCK_OFF, MOVE_U_TURN}
    },

    [SPECIES_THUNDURUS_INCARNATE] = // Nasty Plot (Electric)
    {
        .name = _("Thundurus"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT, MOVE_THUNDER_WAVE}
    },

    [SPECIES_THUNDURUS_THERIAN] = // Pivot
    {
        .name = _("Thundurus-T"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB, MOVE_FOCUS_BLAST}
    },

    [SPECIES_RESHIRAM] = // Choice Specs
    {
        .name = _("Reshiram"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_TURBOBLAZE,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_BLUE_FLARE, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_SHADOW_BALL}
    },

    [SPECIES_ZEKROM] = // Setup Sweeper
    {
        .name = _("Zekrom"),
        .item = ITEM_DRAGONIUM_Z,
        .ability = ABILITY_TERAVOLT,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 204, 0, 52},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_BOLT_STRIKE, MOVE_OUTRAGE, MOVE_SUBSTITUTE}
    },

    [SPECIES_LANDORUS_INCARNATE] = // Sheer Genie
    {
        .name = _("Landorus"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTH_POWER, MOVE_FOCUS_BLAST, MOVE_SLUDGE_WAVE, MOVE_ROCK_SLIDE}
    },

    [SPECIES_LANDORUS_THERIAN] = // Assault Vest
    {
        .name = _("Landorus-T"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .evs = {196, 252, 4, 44, 0, 12},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TERA_BLAST, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE}
    },

    [SPECIES_KYUREM] = // Choice Specs
    {
        .name = _("Kyurem"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_DRACO_METEOR, MOVE_EARTH_POWER}
    },

    [SPECIES_KYUREM_BLACK] = // Dragon Dance
    {
        .name = _("Kyurem-B"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_TERAVOLT,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_ICICLE_SPEAR, MOVE_SCALE_SHOT, MOVE_FUSION_BOLT}
    },

    [SPECIES_KYUREM_WHITE] = // Choice Scarf
    {
        .name = _("Kyurem-W"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_TURBOBLAZE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_FUSION_FLARE}
    },

    [SPECIES_KELDEO_ORDINARY] = // Colt Blade
    {
        .name = _("Keldeo"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_JUSTIFIED,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_SCALD, MOVE_SECRET_SWORD, MOVE_SUBSTITUTE}
    },

    [SPECIES_MELOETTA_ARIA] = // Relic Diva
    {
        .name = _("Meloetta"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_NAIVE,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RELIC_SONG, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_KNOCK_OFF}
    },

    [SPECIES_GENESECT] = // Download Drone
    {
        .name = _("Genesect"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DOWNLOAD,
        .nature = NATURE_NAIVE,
        .evs = {0, 128, 0, 252, 128, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_IRON_HEAD, MOVE_ICE_BEAM, MOVE_FLAMETHROWER}
    },

    [SPECIES_CHESPIN] = // Spikes
    {
        .name = _("Chespin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BULLETPROOF,
        .nature = NATURE_CAREFUL,
        .evs = {148, 108, 76, 0, 0, 156},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_BULLET_SEED, MOVE_ROCK_SLIDE, MOVE_SYNTHESIS}
    },

    [SPECIES_QUILLADIN] = // Spikes
    {
        .name = _("Quilladin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BULLETPROOF,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_WOOD_HAMMER, MOVE_SUPER_FANG, MOVE_SYNTHESIS}
    },

    [SPECIES_CHESNAUGHT] = // Spikes Utility
    {
        .name = _("Chesnaught"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_BULLETPROOF,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_BODY_PRESS, MOVE_SYNTHESIS, MOVE_WOOD_HAMMER}
    },

    [SPECIES_FENNEKIN] = // Ember Fox
    {
        .name = _("Fennekin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_PSYSHOCK, MOVE_WILL_O_WISP, MOVE_PROTECT}
    },

    [SPECIES_BRAIXEN] = // Calm Mind
    {
        .name = _("Braixen"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_SUBSTITUTE}
    },

    [SPECIES_DELPHOX] = // Nasty Plot
    {
        .name = _("Delphox"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_PSYSHOCK, MOVE_ENCORE}
    },

    [SPECIES_FROAKIE] = // Bubble Shift
    {
        .name = _("Froakie"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PROTEAN,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 4, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_U_TURN}
    },

    [SPECIES_FROGADIER] = // Spikes Pivot
    {
        .name = _("Frogadier"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PROTEAN,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_SURF, MOVE_ICE_BEAM, MOVE_U_TURN}
    },

    [SPECIES_GRENINJA] = // Choice Specs
    {
        .name = _("Greninja"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PROTEAN,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_SLUDGE_WAVE}
    },

    [SPECIES_GRENINJA_BATTLE_BOND] = // Ash Path
    {
        .name = _("Greninja-BB"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_BATTLE_BOND,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_U_TURN}
    },

    [SPECIES_BUNNELBY] = // Huge Dig
    {
        .name = _("Bunnelby"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_QUICK_ATTACK}
    },

    [SPECIES_DIGGERSBY] = // Swords Dance (Normal)
    {
        .name = _("Diggersby"),
        .item = ITEM_FIRIUM_Z,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_QUICK_ATTACK}
    },

    [SPECIES_FLETCHLING] = // Ember Wing
    {
        .name = _("Fletchling"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_GALE_WINGS,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_BRAVE_BIRD, MOVE_RETURN, MOVE_ROOST}
    },

    [SPECIES_FLETCHINDER] = // Utility
    {
        .name = _("Flechinder"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_TIMID,
        .evs = {248, 0, 196, 64, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_WILL_O_WISP, MOVE_FLAMETHROWER, MOVE_ROOST}
    },

    [SPECIES_TALONFLAME] = // Utility
    {
        .name = _("Talonflame"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_GALE_WINGS,
        .nature = NATURE_JOLLY,
        .evs = {248, 8, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_WILL_O_WISP, MOVE_U_TURN, MOVE_ROOST}
    },

    [SPECIES_SCATTERBUG] = // Powder Larva
    {
        .name = _("Scatterbug"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_COMPOUND_EYES,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STRUGGLE_BUG, MOVE_BUG_BITE, MOVE_STUN_SPORE, MOVE_PROTECT}
    },

    [SPECIES_SPEWPA] = // Cocoon Wall
    {
        .name = _("Spewpa"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FRIEND_GUARD,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STUN_SPORE, MOVE_STRUGGLE_BUG, MOVE_PROTECT, MOVE_BATON_PASS}
    },

    [SPECIES_VIVILLON_ICY_SNOW] = // Frost Wing Dance
    {
        .name = _("Vivillon-Icy"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_COMPOUND_EYES,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_HURRICANE, MOVE_BUG_BUZZ, MOVE_SLEEP_POWDER}
    },

    [SPECIES_LITLEO] = // Pride Cub
    {
        .name = _("Litleo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_WORK_UP, MOVE_PROTECT}
    },

    [SPECIES_PYROAR] = // Special Attacker
    {
        .name = _("Pyroar"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_UNNERVE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_HYPER_VOICE, MOVE_TAUNT, MOVE_WILL_O_WISP}
    },

    [SPECIES_FLABEBE_RED] = // Red Bloom
    {
        .name = _("Flabebe-Red"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_FLABEBE_YELLOW] = // Yellow Bloom
    {
        .name = _("Flabebe-Yel"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_FLABEBE_ORANGE] = // Orange Bloom
    {
        .name = _("Flabebe-Org"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_FLABEBE_BLUE] = // Blue Bloom
    {
        .name = _("Flabebe-Blu"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_FLABEBE_WHITE] = // White Bloom
    {
        .name = _("Flabebe-Whi"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_FLOETTE_RED] = // Red Petal Cure
    {
        .name = _("Floette-Red"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_AROMATHERAPY, MOVE_MOONBLAST, MOVE_PROTECT}
    },

    [SPECIES_FLOETTE_YELLOW] = // Wish Bloom
    {
        .name = _("Floette-Yellow"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_MOONBLAST, MOVE_PROTECT, MOVE_AROMATHERAPY}
    },

    [SPECIES_FLOETTE_ORANGE] = // Wish Bloom
    {
        .name = _("Floette-Orange"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_MOONBLAST, MOVE_PROTECT, MOVE_AROMATHERAPY}
    },

    [SPECIES_FLOETTE_BLUE] = // Wish Bloom
    {
        .name = _("Floette-Blue"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_MOONBLAST, MOVE_PROTECT, MOVE_AROMATHERAPY}
    },

    [SPECIES_FLOETTE_WHITE] = // Wish Bloom
    {
        .name = _("Floette-White"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_MOONBLAST, MOVE_PROTECT, MOVE_AROMATHERAPY}
    },

    [SPECIES_FLOETTE_ETERNAL] = // Eternal Mega Bloom
    {
        .name = _("Floette-Eter"),
        .item = ITEM_FLOETTITE,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_SUBSTITUTE}
    },

    [SPECIES_FLORGES_RED] = // Garden Wish
    {
        .name = _("Florges-Red"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_FLORGES_YELLOW] = // Garden Wish
    {
        .name = _("Florges-Yellow"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_FLORGES_ORANGE] = // Garden Wish
    {
        .name = _("Florges-Orange"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_FLORGES_BLUE] = // Garden Wish
    {
        .name = _("Florges-Blue"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_FLORGES_WHITE] = // Garden Wish
    {
        .name = _("Florges-White"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FLOWER_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_SKIDDO] = // Sap Kid
    {
        .name = _("Skiddo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_HORN_LEECH, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE}
    },

    [SPECIES_GOGOAT] = // Sap Herd
    {
        .name = _("Gogoat"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_HORN_LEECH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    },

    [SPECIES_PANCHAM] = // Iron Cub
    {
        .name = _("Pancham"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_CAREFUL,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_PARTING_SHOT, MOVE_BULK_UP}
    },

    [SPECIES_PANGORO] = // Iron Brawler
    {
        .name = _("Pangoro"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_GUNK_SHOT}
    },

    [SPECIES_FURFROU_NATURAL] = // Fur Wall
    {
        .name = _("Furfrou"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FUR_COAT,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_ESPURR] = // Psi Cub
    {
        .name = _("Espurr"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT}
    },

    [SPECIES_MEOWSTIC_M] = // Prankster Mega
    {
        .name = _("Meowstic-M"),
        .item = ITEM_MEOWSTICITE,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_YAWN, MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_SHADOW_BALL}
    },

    [SPECIES_MEOWSTIC_F] = // Rival Mega
    {
        .name = _("Meowstic-F"),
        .item = ITEM_MEOWSTICITE,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT}
    },

    [SPECIES_HONEDGE] = // Guard Blade
    {
        .name = _("Honedge"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NO_GUARD,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_IRON_HEAD, MOVE_SACRED_SWORD}
    },

    [SPECIES_DOUBLADE] = // Guard Edge
    {
        .name = _("Doublade"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NO_GUARD,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_IRON_HEAD, MOVE_SACRED_SWORD}
    },

    [SPECIES_AEGISLASH_SHIELD] = // Stance Sweeper
    {
        .name = _("Aegislash"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STANCE_CHANGE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_KINGS_SHIELD, MOVE_SHADOW_SNEAK, MOVE_IRON_HEAD}
    },

    [SPECIES_SPRITZEE] = // Perfume Wish
    {
        .name = _("Spritzee"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_AROMA_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_MOONBLAST, MOVE_PROTECT, MOVE_CALM_MIND}
    },

    [SPECIES_AROMATISSE] = // Perfume Guard
    {
        .name = _("Aromatisse"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_AROMA_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_SWIRLIX] = // Sweet Tank
    {
        .name = _("Swirlix"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWEET_VEIL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_PLAY_ROUGH, MOVE_RETURN, MOVE_SUBSTITUTE}
    },

    [SPECIES_SLURPUFF] = // Unburden Cream
    {
        .name = _("Slurpuff"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_PLAY_ROUGH, MOVE_DRAIN_PUNCH, MOVE_SUBSTITUTE}
    },

    [SPECIES_INKAY] = // Contrary Squid
    {
        .name = _("Inkay"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_PSYCHO_CUT, MOVE_FOUL_PLAY}
    },

    [SPECIES_MALAMAR] = // Choice Scarf (Atk, Spe)
    {
        .name = _("Malamar"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_PSYCHO_CUT, MOVE_TRICK}
    },

    [SPECIES_BINACLE] = // Claw Duo
    {
        .name = _("Binacle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_RAZOR_SHELL, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE}
    },

    [SPECIES_BARBARACLE] = // Claw Mega
    {
        .name = _("Barbaracle"),
        .item = ITEM_BARBARACITE,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_RAZOR_SHELL, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE}
    },

    [SPECIES_SKRELP] = // Adapt Sting
    {
        .name = _("Skrelp"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 4, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_BOMB, MOVE_SURF, MOVE_ICE_BEAM}
    },

    [SPECIES_DRAGALGE] = // Bulky Pivot
    {
        .name = _("Dragalge"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 200, 56, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DRACO_METEOR, MOVE_TOXIC_SPIKES, MOVE_FLIP_TURN}
    },

    [SPECIES_CLAUNCHER] = // Launcher Pulse
    {
        .name = _("Clauncher"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MEGA_LAUNCHER,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 4, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_FLIP_TURN}
    },

    [SPECIES_CLAWITZER] = // Choice Specs
    {
        .name = _("Clawitzer"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MEGA_LAUNCHER,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE, MOVE_DARK_PULSE}
    },

    [SPECIES_HELIOPTILE] = // Solar Circuit
    {
        .name = _("Helioptile"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_DRY_SKIN,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_SURF, MOVE_PROTECT}
    },

    [SPECIES_HELIOLISK] = // Solar Grid
    {
        .name = _("Heliolisk"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_DRY_SKIN,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_SURF, MOVE_HYPER_VOICE}
    },

    [SPECIES_TYRUNT] = // Baby Jaw
    {
        .name = _("Tyrunt"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW}
    },

    [SPECIES_TYRANTRUM] = // Jaw Crusher
    {
        .name = _("Tyrantrum"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_DRAGON_CLAW}
    },

    [SPECIES_AMAURA] = // Frost Fossil
    {
        .name = _("Amaura"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_REFRIGERATE,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 4, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_THUNDER_WAVE}
    },

    [SPECIES_AURORUS] = // Frost Chorus
    {
        .name = _("Aurorus"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_REFRIGERATE,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 4, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_FOCUS_BLAST}
    },

    [SPECIES_SYLVEON] = // Life Orb
    {
        .name = _("Sylveon"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_PIXILATE,
        .nature = NATURE_MODEST,
        .evs = {104, 0, 224, 0, 180, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYPER_BEAM, MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_FAKE_TEARS}
    },

    [SPECIES_HAWLUCHA] = // Unburden Sweeper
    {
        .name = _("Hawlucha"),
        .item = ITEM_PSYCHIC_SEED,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_ENCORE}
    },

    [SPECIES_DEDENNE] = // Cheek Pivot
    {
        .name = _("Dedenne"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_CHEEK_POUCH,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NUZZLE, MOVE_SUPER_FANG, MOVE_VOLT_SWITCH, MOVE_PROTECT}
    },

    [SPECIES_CARBINK] = // Diamond Rocks
    {
        .name = _("Carbink"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STURDY,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_MOONBLAST, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_GOOMY] = // Baby Slime
    {
        .name = _("Goomy"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_HYDRATION,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAIN_DANCE, MOVE_SCALD, MOVE_TOXIC, MOVE_REST}
    },

    [SPECIES_SLIGGOO] = // Rain Slime
    {
        .name = _("Sliggoo"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_HYDRATION,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAIN_DANCE, MOVE_SCALD, MOVE_TOXIC, MOVE_REST}
    },

    [SPECIES_SLIGGOO_HISUI] = // Choice Specs
    {
        .name = _("Sliggoo-H"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SHELL_ARMOR,
        .nature = NATURE_MODEST,
        .evs = {160, 0, 0, 96, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },

    [SPECIES_GOODRA] = // Heavy-Duty Boots
    {
        .name = _("Goodra"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_KNOCK_OFF}
    },

    [SPECIES_GOODRA_HISUI] = // Bulky Attacker
    {
        .name = _("Goodra-H"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 64, 0, 192, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_HEAVY_SLAM, MOVE_KNOCK_OFF, MOVE_PROTECT}
    },

    [SPECIES_KLEFKI] = // Spikes
    {
        .name = _("Klefki"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_THUNDER_WAVE, MOVE_PLAY_ROUGH, MOVE_FOUL_PLAY}
    },

    [SPECIES_PHANTUMP] = // Sapling Sub
    {
        .name = _("Phantump"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_HARVEST,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HORN_LEECH, MOVE_WILL_O_WISP, MOVE_LEECH_SEED, MOVE_SUBSTITUTE}
    },

    [SPECIES_TREVENANT] = // Harvest Sub-Seed
    {
        .name = _("Trevenant"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_HARVEST,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HORN_LEECH, MOVE_WILL_O_WISP, MOVE_SUBSTITUTE, MOVE_LEECH_SEED}
    },

    [SPECIES_PUMPKABOO_AVERAGE] = // Trick Lantern
    {
        .name = _("Pumpkaboo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_SEED_BOMB, MOVE_SHADOW_SNEAK, MOVE_SYNTHESIS}
    },

    [SPECIES_PUMPKABOO_SMALL] = // Quick Lantern
    {
        .name = _("Pumpkaboo"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_SEED_BOMB, MOVE_SHADOW_SNEAK, MOVE_TRICK}
    },

    [SPECIES_PUMPKABOO_LARGE] = // Heavy Lantern
    {
        .name = _("Pumpkaboo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_SEED_BOMB, MOVE_SHADOW_SNEAK, MOVE_SYNTHESIS}
    },

    [SPECIES_PUMPKABOO_SUPER] = // Ancient Lantern
    {
        .name = _("Pumpkaboo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_SEED_BOMB, MOVE_SYNTHESIS, MOVE_PROTECT}
    },

    [SPECIES_GOURGEIST_AVERAGE] = // Trick Pumpkin
    {
        .name = _("Gourgeist"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_SEED_BOMB, MOVE_SHADOW_SNEAK, MOVE_SYNTHESIS}
    },

    [SPECIES_GOURGEIST_SMALL] = // Quick Pumpkin
    {
        .name = _("Gourgeist"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_SEED_BOMB, MOVE_SHADOW_SNEAK, MOVE_TRICK}
    },

    [SPECIES_GOURGEIST_LARGE] = // Heavy Pumpkin
    {
        .name = _("Gourgeist"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_SEED_BOMB, MOVE_SHADOW_SNEAK, MOVE_SYNTHESIS}
    },

    [SPECIES_GOURGEIST_SUPER] = // Ancient Pumpkin
    {
        .name = _("Gourgeist"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_SEED_BOMB, MOVE_SYNTHESIS, MOVE_PROTECT}
    },

    [SPECIES_BERGMITE] = // Baby Iceberg
    {
        .name = _("Bergmite"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_AVALANCHE, MOVE_RECOVER, MOVE_TOXIC}
    },

    [SPECIES_AVALUGG] = // Rapid Spin
    {
        .name = _("Avalugg"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_RAPID_SPIN, MOVE_RECOVER}
    },

    [SPECIES_AVALUGG_HISUI] = // Lead
    {
        .name = _("Avalugg-H"),
        .item = ITEM_CUSTAP_BERRY,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_MOUNTAIN_GALE, MOVE_BODY_PRESS, MOVE_RAPID_SPIN}
    },

    [SPECIES_NOIBAT] = // Sound Bat
    {
        .name = _("Noibat"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_DRAGON_PULSE, MOVE_ROOST, MOVE_SUBSTITUTE}
    },

    [SPECIES_NOIVERN] = // Offensive Pivot
    {
        .name = _("Noivern"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_U_TURN, MOVE_ROOST}
    },

    [SPECIES_XERNEAS_NEUTRAL] = // Geomancy
    {
        .name = _("Xerneas"),
        .item = ITEM_POWER_HERB,
        .ability = ABILITY_FAIRY_AURA,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 168, 88, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GEOMANCY, MOVE_MOONBLAST, MOVE_THUNDER, MOVE_SUBSTITUTE}
    },

    [SPECIES_YVELTAL] = // Specially Offensive
    {
        .name = _("Yveltal"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_DARK_AURA,
        .nature = NATURE_NAIVE,
        .evs = {0, 4, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_TAUNT, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_ZYGARDE_50] = // Coil Serpent
    {
        .name = _("Zygarde"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_AURA_BREAK,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COIL, MOVE_SUBSTITUTE, MOVE_THOUSAND_ARROWS, MOVE_REST}
    },

    [SPECIES_DIANCIE] = // Stealth Rock
    {
        .name = _("Diancie"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_CAREFUL,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_ENCORE, MOVE_DIAMOND_STORM, MOVE_BODY_PRESS}
    },

    [SPECIES_HOOPA_CONFINED] = // Choice Scarf
    {
        .name = _("Hoopa"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MAGICIAN,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_TRICK}
    },

    [SPECIES_HOOPA_UNBOUND] = // Choice Scarf
    {
        .name = _("Hoopa-U"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MAGICIAN,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 180, 0, 76, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_PSYCHIC_NOISE, MOVE_DRAIN_PUNCH, MOVE_THUNDERBOLT}
    },

    [SPECIES_VOLCANION] = // Offensive
    {
        .name = _("Volcanion"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_TAUNT}
    },

    [SPECIES_ROWLET] = // Silent Owl
    {
        .name = _("Rowlet"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LONG_REACH,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 4, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_LEAFAGE, MOVE_ROOST, MOVE_SUBSTITUTE}
    },

    [SPECIES_DARTRIX] = // Physically Defensive
    {
        .name = _("Dartrix"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LONG_REACH,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NIGHT_SHADE, MOVE_ROOST, MOVE_DEFOG, MOVE_KNOCK_OFF}
    },

    [SPECIES_DECIDUEYE] = // Swords Dance
    {
        .name = _("Decidueye"),
        .item = ITEM_SPELL_TAG,
        .ability = ABILITY_LONG_REACH,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_DECIDUEYE_HISUI] = // Choice Scarf
    {
        .name = _("Decidueye-H"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SCRAPPY,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TRIPLE_ARROWS, MOVE_U_TURN, MOVE_LEAF_BLADE, MOVE_BRAVE_BIRD}
    },

    [SPECIES_LITTEN] = // Ember Cub
    {
        .name = _("Litten"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_FANG, MOVE_FLAME_CHARGE, MOVE_ASSURANCE, MOVE_TAUNT}
    },

    [SPECIES_TORRACAT] = // Bulky Pivot
    {
        .name = _("Torracat"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PARTING_SHOT, MOVE_TAUNT, MOVE_OVERHEAT, MOVE_WILL_O_WISP}
    },

    [SPECIES_INCINEROAR] = // Bulky Support
    {
        .name = _("Incineroar"),
        .item = ITEM_SAFETY_GOGGLES,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 156, 0, 0, 100},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_PARTING_SHOT}
    },

    [SPECIES_POPPLIO] = // Balloon Pup
    {
        .name = _("Popplio"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_BRIONNE] = // Aria Dancer
    {
        .name = _("Brionne"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_LIQUID_VOICE,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPARKLING_ARIA, MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_TOXIC}
    },

    [SPECIES_PRIMARINA] = // Assault Vest
    {
        .name = _("Primarina"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_MODEST,
        .evs = {80, 0, 0, 176, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_MOONBLAST, MOVE_FLIP_TURN, MOVE_PSYCHIC_NOISE}
    },

    [SPECIES_PIKIPEK] = // Peck Drill
    {
        .name = _("Pikipek"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SKILL_LINK,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_DRILL_PECK, MOVE_ROOST}
    },

    [SPECIES_TRUMBEAK] = // Bugle Drill
    {
        .name = _("Trumbeak"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SKILL_LINK,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_DRILL_PECK, MOVE_ROOST}
    },

    [SPECIES_TOUCANNON] = // Multi-Beak
    {
        .name = _("Toucannon"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SKILL_LINK,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_BEAK_BLAST, MOVE_DRILL_PECK}
    },

    [SPECIES_YUNGOOS] = // Stakeout Jr
    {
        .name = _("Yungoos"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STAKEOUT,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_SUPERPOWER}
    },

    [SPECIES_GUMSHOOS] = // Stakeout Boss
    {
        .name = _("Gumshoos"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_STAKEOUT,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_SUPERPOWER}
    },

    [SPECIES_GRUBBIN] = // Bug Talker
    {
        .name = _("Grubbin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWARM,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STRUGGLE_BUG, MOVE_ROCK_TOMB, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_CHARJABUG] = // Sticky Web
    {
        .name = _("Charjabug"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BATTERY,
        .nature = NATURE_IMPISH,
        .evs = {252, 4, 252, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_SKITTER_SMACK, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE}
    },

    [SPECIES_VIKAVOLT] = // Sticky Web Setter
    {
        .name = _("Vikavolt"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_VOLT_SWITCH, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL}
    },

    [SPECIES_CRABRAWLER] = // Iron Pincer
    {
        .name = _("Crabrawler"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POWER_UP_PUNCH, MOVE_ICE_PUNCH, MOVE_CLOSE_COMBAT, MOVE_DRAIN_PUNCH}
    },

    [SPECIES_CRABOMINABLE] = // Choice Band
    {
        .name = _("Crabominable"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_HAMMER, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF}
    },

    [SPECIES_ORICORIO_BAILE] = // Fire Dance
    {
        .name = _("Oricorio-Baile"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_DANCER,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_ROOST}
    },

    [SPECIES_ORICORIO_POM_POM] = // Quiver Dance
    {
        .name = _("Oricorio-PP"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DANCER,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_ROOST}
    },

    [SPECIES_ORICORIO_PAU] = // Psychic Dance
    {
        .name = _("Oricorio-Pau"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_DANCER,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_ROOST}
    },

    [SPECIES_ORICORIO_SENSU] = // Ghost Dance
    {
        .name = _("Oricorio-Sensu"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_DANCER,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_ROOST}
    },

    [SPECIES_CUTIEFLY] = // Sticky Web Lead
    {
        .name = _("Cutiefly"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SHIELD_DUST,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_STUN_SPORE, MOVE_U_TURN, MOVE_MOONBLAST}
    },

    [SPECIES_RIBOMBEE] = // Offensive
    {
        .name = _("Ribombee"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SHIELD_DUST,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_BUG_BUZZ, MOVE_U_TURN, MOVE_PSYCHIC_NOISE}
    },

    [SPECIES_ROCKRUFF] = // Pebble Pup
    {
        .name = _("Rockruff"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STEADFAST,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_QUICK_ATTACK}
    },

    [SPECIES_LYCANROC_MIDDAY] = // Swords Dance
    {
        .name = _("Lycanroc"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SAND_RUSH,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_ACCELEROCK}
    },

    [SPECIES_LYCANROC_MIDNIGHT] = // Swords Dance
    {
        .name = _("Lycanroc-M"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_NO_GUARD,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_ROCK_POLISH}
    },

    [SPECIES_LYCANROC_DUSK] = // All-Out Attacker
    {
        .name = _("Lycanroc-D"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS}
    },

    [SPECIES_WISHIWASHI_SOLO] = // Lone Fish
    {
        .name = _("Wishiwashi"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SCHOOLING,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_PROTECT, MOVE_REST}
    },

    [SPECIES_MAREANIE] = // Physically Defensive
    {
        .name = _("Mareanie"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .evs = {116, 0, 180, 0, 12, 180},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_RECOVER, MOVE_IRON_DEFENSE}
    },

    [SPECIES_TOXAPEX] = // Mixed Wall
    {
        .name = _("Toxapex"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 152, 0, 0, 108},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_TOXIC, MOVE_HAZE, MOVE_RECOVER}
    },

    [SPECIES_MUDBRAY] = // Offensive Stealth Rock
    {
        .name = _("Mudbray"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_IMPISH,
        .evs = {36, 196, 196, 76, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_MUDSDALE] = // Physical Wall
    {
        .name = _("Mudsdale"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_ROAR}
    },

    [SPECIES_DEWPIDER] = // Web Diver
    {
        .name = _("Dewpider"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_WATER_BUBBLE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_LIQUIDATION, MOVE_BUG_BITE, MOVE_PROTECT}
    },

    [SPECIES_ARAQUANID] = // Sticky Web
    {
        .name = _("Araquanid"),
        .item = ITEM_MENTAL_HERB,
        .ability = ABILITY_WATER_BUBBLE,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_INFESTATION}
    },

    [SPECIES_FOMANTIS] = // Contrary Bloom
    {
        .name = _("Fomantis"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEAF_STORM, MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, MOVE_SYNTHESIS}
    },

    [SPECIES_LURANTIS] = // Defog
    {
        .name = _("Lurantis"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_SASSY,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEAF_STORM, MOVE_SUPERPOWER, MOVE_SYNTHESIS, MOVE_DEFOG}
    },

    [SPECIES_MORELULL] = // Spore Lamp
    {
        .name = _("Morelull"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_EFFECT_SPORE,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPORE, MOVE_MOONLIGHT, MOVE_GIGA_DRAIN, MOVE_STRENGTH_SAP}
    },

    [SPECIES_SHIINOTIC] = // Spore Lantern
    {
        .name = _("Shiinotic"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_EFFECT_SPORE,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPORE, MOVE_MOONLIGHT, MOVE_GIGA_DRAIN, MOVE_STRENGTH_SAP}
    },

    [SPECIES_SALANDIT] = // Corrosive Imp
    {
        .name = _("Salandit"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CORROSION,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_TOXIC}
    },

    [SPECIES_SALAZZLE] = // Substitute + Toxic
    {
        .name = _("Salazzle"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_CORROSION,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_SLUDGE_BOMB, MOVE_TOXIC}
    },

    [SPECIES_STUFFUL] = // Fluffy Cub
    {
        .name = _("Stufful"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLUFFY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_RETURN, MOVE_SUPERPOWER, MOVE_PAYBACK}
    },

    [SPECIES_BEWEAR] = // Fluffy Bear
    {
        .name = _("Bewear"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_FLUFFY,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_RETURN, MOVE_SUPERPOWER, MOVE_PAYBACK}
    },

    [SPECIES_BOUNSWEET] = // Sweet Kick
    {
        .name = _("Bounsweet"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWEET_VEIL,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_TROP_KICK, MOVE_PLAY_ROUGH, MOVE_AROMATHERAPY}
    },

    [SPECIES_STEENEE] = // Sweet Sequel
    {
        .name = _("Steenee"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWEET_VEIL,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_TROP_KICK, MOVE_PLAY_ROUGH, MOVE_AROMATHERAPY}
    },

    [SPECIES_TSAREENA] = // Fast Support
    {
        .name = _("Tsareena"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_QUEENLY_MAJESTY,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POWER_WHIP, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_COMFEY] = // Calm Mind
    {
        .name = _("Comfey"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TRIAGE,
        .nature = NATURE_MODEST,
        .evs = {240, 0, 0, 16, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_TERA_BLAST, MOVE_TAUNT}
    },

    [SPECIES_ORANGURU] = // Room Sage
    {
        .name = _("Oranguru"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 252, 0},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_INSTRUCT, MOVE_PSYCHIC, MOVE_FOUL_PLAY}
    },

    [SPECIES_PASSIMIAN] = // Choice Scarf
    {
        .name = _("Passimian"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_EARTHQUAKE}
    },

    [SPECIES_WIMPOD] = // Web Setter
    {
        .name = _("Wimpod"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WIMP_OUT,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TOXIC_SPIKES, MOVE_STRUGGLE_BUG, MOVE_X_SCISSOR, MOVE_PROTECT}
    },

    [SPECIES_GOLISOPOD] = // Mega Ambush
    {
        .name = _("Golisopod"),
        .item = ITEM_GOLISOPITE,
        .ability = ABILITY_EMERGENCY_EXIT,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_FIRST_IMPRESSION, MOVE_LIQUIDATION, MOVE_GYRO_BALL}
    },

    [SPECIES_SANDYGAST] = // Defensive
    {
        .name = _("Sandygast"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WATER_COMPACTION,
        .nature = NATURE_BOLD,
        .evs = {156, 0, 36, 0, 196, 76},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHORE_UP, MOVE_STEALTH_ROCK, MOVE_SHADOW_BALL, MOVE_EARTH_POWER}
    },

    [SPECIES_PALOSSAND] = // Defensive
    {
        .name = _("Palossand"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WATER_COMPACTION,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_SCORCHING_SANDS, MOVE_SHADOW_BALL, MOVE_SHORE_UP}
    },

    [SPECIES_PYUKUMUKU] = // Curse Slug
    {
        .name = _("Pyukumuku"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_RECOVER, MOVE_TOXIC}
    },

    [SPECIES_TYPE_NULL] = // Masked Beast
    {
        .name = _("Type: Null"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BATTLE_ARMOR,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_SUBSTITUTE}
    },

    [SPECIES_SILVALLY_NORMAL] = // RKS Blade
    {
        .name = _("Silvally"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_RKS_SYSTEM,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_MULTI_ATTACK, MOVE_CRUNCH, MOVE_SUBSTITUTE}
    },

    [SPECIES_MINIOR_METEOR_RED] = // Meteor Smash
    {
        .name = _("Minior"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SHIELDS_DOWN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_ACROBATICS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },

    [SPECIES_MINIOR_METEOR_ORANGE] = // Meteor Smash
    {
        .name = _("Minior"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SHIELDS_DOWN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_ACROBATICS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },

    [SPECIES_MINIOR_METEOR_YELLOW] = // Meteor Smash
    {
        .name = _("Minior"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SHIELDS_DOWN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_ACROBATICS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },

    [SPECIES_MINIOR_METEOR_GREEN] = // Meteor Smash
    {
        .name = _("Minior"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SHIELDS_DOWN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_ACROBATICS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },

    [SPECIES_MINIOR_METEOR_BLUE] = // Meteor Smash
    {
        .name = _("Minior"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SHIELDS_DOWN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_ACROBATICS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },

    [SPECIES_MINIOR_METEOR_INDIGO] = // Meteor Smash
    {
        .name = _("Minior"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SHIELDS_DOWN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_ACROBATICS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },

    [SPECIES_MINIOR_METEOR_VIOLET] = // Meteor Smash
    {
        .name = _("Minior"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SHIELDS_DOWN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_ACROBATICS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },

    [SPECIES_KOMALA] = // Perma Sleep
    {
        .name = _("Komala"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_COMATOSE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    },

    [SPECIES_TURTONATOR] = // Blast Shell
    {
        .name = _("Turtonator"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SHELL_ARMOR,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_SHELL_TRAP, MOVE_FLAMETHROWER, MOVE_PROTECT}
    },

    [SPECIES_TOGEDEMARU] = // Spike Trapper
    {
        .name = _("Togedemaru"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_IRON_BARBS,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKY_SHIELD, MOVE_ZING_ZAP, MOVE_NUZZLE, MOVE_ENDEAVOR}
    },

    [SPECIES_MIMIKYU_DISGUISED] = // Fake Fairy
    {
        .name = _("Mimikyu"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_DISGUISE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_BRUXISH] = // Choice Scarf
    {
        .name = _("Bruxish"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG, MOVE_FLIP_TURN, MOVE_CRUNCH}
    },

    [SPECIES_DRAMPA] = // Grumpy Mega
    {
        .name = _("Drampa"),
        .item = ITEM_DRAMPANITE,
        .ability = ABILITY_BERSERK,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, MOVE_FIRE_BLAST, MOVE_SUBSTITUTE}
    },

    [SPECIES_DHELMISE] = // Rapid Spin
    {
        .name = _("Dhelmise"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STEELWORKER,
        .nature = NATURE_ADAMANT,
        .evs = {248, 80, 0, 60, 0, 120},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_POWER_WHIP, MOVE_POLTERGEIST, MOVE_SYNTHESIS}
    },

    [SPECIES_JANGMO_O] = // Baby Scale
    {
        .name = _("Jangmo-o"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BULLETPROOF,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_DRAGON_CLAW, MOVE_POISON_JAB, MOVE_PROTECT}
    },

    [SPECIES_HAKAMO_O] = // Double Dance
    {
        .name = _("Hakamo-o"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SOUNDPROOF,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SCALE_SHOT, MOVE_DRAIN_PUNCH, MOVE_SUBSTITUTE}
    },

    [SPECIES_KOMMO_O] = // Clangorous Soul
    {
        .name = _("Kommo-o"),
        .item = ITEM_THROAT_SPRAY,
        .ability = ABILITY_SOUNDPROOF,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLANGOROUS_SOUL, MOVE_BOOMBURST, MOVE_FLAMETHROWER, MOVE_CLANGING_SCALES}
    },

    [SPECIES_TAPU_KOKO] = // Choice Specs (Electric)
    {
        .name = _("Tapu Koko"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_ELECTRIC_SURGE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_GRASS_KNOT, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER}
    },

    [SPECIES_TAPU_LELE] = // Psychic Terrain Setter
    {
        .name = _("Tapu Lele"),
        .item = ITEM_TERRAIN_EXTENDER,
        .ability = ABILITY_PSYCHIC_SURGE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TAUNT, MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_NATURES_MADNESS}
    },

    [SPECIES_TAPU_BULU] = // Swords Dance
    {
        .name = _("Tapu Bulu"),
        .item = ITEM_ROCKIUM_Z,
        .ability = ABILITY_GRASSY_SURGE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 96, 0, 144, 0, 16},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_HORN_LEECH, MOVE_STONE_EDGE, MOVE_HIGH_HORSEPOWER}
    },

    [SPECIES_TAPU_FINI] = // Choice Scarf
    {
        .name = _("Tapu Fini"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MISTY_SURGE,
        .nature = NATURE_TIMID,
        .evs = {188, 0, 0, 204, 116, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_MOONBLAST, MOVE_TRICK, MOVE_CALM_MIND}
    },

    [SPECIES_COSMOG] = // Cosmic Ramp
    {
        .name = _("Cosmog"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COSMIC_POWER, MOVE_STORED_POWER, MOVE_SUBSTITUTE, MOVE_REST}
    },

    [SPECIES_COSMOEM] = // Meteor Ramp
    {
        .name = _("Cosmoem"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STURDY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 128, 0, 0, 128},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COSMIC_POWER, MOVE_STORED_POWER, MOVE_SUBSTITUTE, MOVE_REST}
    },

    [SPECIES_SOLGALEO] = // Specially Defensive
    {
        .name = _("Solgaleo"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FULL_METAL_BODY,
        .nature = NATURE_CAREFUL,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_ROAR, MOVE_TELEPORT, MOVE_MORNING_SUN}
    },

    [SPECIES_LUNALA] = // Expanding Force Sweeper
    {
        .name = _("Lunala"),
        .item = ITEM_POWER_HERB,
        .ability = ABILITY_SHADOW_SHIELD,
        .nature = NATURE_MODEST,
        .evs = {116, 0, 108, 4, 252, 28},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_METEOR_BEAM, MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM}
    },

    [SPECIES_NIHILEGO] = // Choice Scarf (Poison)
    {
        .name = _("Nihilego"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_BEAST_BOOST,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_POWER_GEM, MOVE_GRASS_KNOT, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER}
    },

    [SPECIES_BUZZWOLE] = // Defensive
    {
        .name = _("Buzzwole"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_BEAST_BOOST,
        .nature = NATURE_IMPISH,
        .evs = {244, 16, 224, 24, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_ROOST}
    },

    [SPECIES_PHEROMOSA] = // Offensive Pivot
    {
        .name = _("Pheromosa"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_BEAST_BOOST,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL, MOVE_U_TURN, MOVE_RAPID_SPIN}
    },

    [SPECIES_XURKITREE] = // Tail Glow Beast
    {
        .name = _("Xurkitree"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_BEAST_BOOST,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TAIL_GLOW, MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_SUBSTITUTE}
    },

    [SPECIES_CELESTEELA] = // Defensive
    {
        .name = _("Celesteela"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_BEAST_BOOST,
        .nature = NATURE_SASSY,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEECH_SEED, MOVE_HEAVY_SLAM, MOVE_PROTECT, MOVE_FLAMETHROWER}
    },

    [SPECIES_KARTANA] = // Paper Cut
    {
        .name = _("Kartana"),
        .item = ITEM_NORMALIUM_Z,
        .ability = ABILITY_BEAST_BOOST,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_GIGA_IMPACT}
    },

    [SPECIES_GUZZLORD] = // Endless Maw
    {
        .name = _("Guzzlord"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_BEAST_BOOST,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_STONE_EDGE}
    },

    [SPECIES_NECROZMA] = // Psychic Terrain Sweeper
    {
        .name = _("Necrozma"),
        .item = ITEM_POWER_HERB,
        .ability = ABILITY_PRISM_ARMOR,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_EXPANDING_FORCE, MOVE_HEAT_WAVE, MOVE_METEOR_BEAM, MOVE_TRICK_ROOM}
    },

    [SPECIES_NECROZMA_DUSK_MANE] = // Weakness Policy Flame Charge
    {
        .name = _("Necrozma-DM"),
        .item = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_PRISM_ARMOR,
        .nature = NATURE_BRAVE,
        .evs = {244, 228, 36, 0, 0, 0},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_PHOTON_GEYSER, MOVE_SUNSTEEL_STRIKE, MOVE_SWORDS_DANCE, MOVE_FLAME_CHARGE}
    },

    [SPECIES_NECROZMA_DAWN_WINGS] = // Offensive Trick Room
    {
        .name = _("Necrozma-DW"),
        .item = ITEM_POWER_HERB,
        .ability = ABILITY_PRISM_ARMOR,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_METEOR_BEAM, MOVE_TERA_BLAST, MOVE_TRICK_ROOM}
    },

    [SPECIES_MAGEARNA] = // Physically Defensive
    {
        .name = _("Magearna"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SOUL_HEART,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLEUR_CANNON, MOVE_SPIKES, MOVE_ENCORE, MOVE_VOLT_SWITCH}
    },

    [SPECIES_MAGEARNA_ORIGINAL] = // Soul Mega
    {
        .name = _("Magearna"),
        .item = ITEM_MAGEARNITE,
        .ability = ABILITY_SOUL_HEART,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_FLASH_CANNON, MOVE_AURA_SPHERE, MOVE_THUNDERBOLT}
    },

    [SPECIES_MARSHADOW] = // All-Out Attacker
    {
        .name = _("Marshadow"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPECTRAL_THIEF, MOVE_POLTERGEIST, MOVE_LOW_KICK, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_POIPOLE] = // Plotting Beast
    {
        .name = _("Poipole"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BEAST_BOOST,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE}
    },

    [SPECIES_NAGANADEL] = // Beast Nuker
    {
        .name = _("Naganadel"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_BEAST_BOOST,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_DRAGON_PULSE, MOVE_SLUDGE_WAVE, MOVE_FIRE_BLAST}
    },

    [SPECIES_STAKATAKA] = // Trick Room Fortress
    {
        .name = _("Stakataka"),
        .item = ITEM_CHOPLE_BERRY,
        .ability = ABILITY_BEAST_BOOST,
        .nature = NATURE_BRAVE,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_GYRO_BALL, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },

    [SPECIES_BLACEPHALON] = // Choice Scarf
    {
        .name = _("Blacephalon"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_BEAST_BOOST,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHADOW_BALL, MOVE_FIRE_BLAST, MOVE_HIDDEN_POWER, MOVE_TRICK}
    },

    [SPECIES_ZERAORA] = // Offensive Pivot
    {
        .name = _("Zeraora"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PLASMA_FISTS, MOVE_KNOCK_OFF, MOVE_VOLT_SWITCH, MOVE_TOXIC}
    },

    [SPECIES_MELTAN] = // Iron Trapper
    {
        .name = _("Meltan"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MAGNET_PULL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_THUNDER_WAVE, MOVE_FLASH_CANNON, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_MELMETAL] = // Choice Band
    {
        .name = _("Melmetal"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_BRAVE,
        .evs = {56, 248, 16, 0, 0, 188},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_SUPERPOWER}
    },

    [SPECIES_GROOKEY] = // Pivot
    {
        .name = _("Grookey"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_GRASSY_SURGE,
        .nature = NATURE_JOLLY,
        .evs = {36, 76, 36, 236, 0, 116},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GRASSY_GLIDE, MOVE_WOOD_HAMMER, MOVE_KNOCK_OFF, MOVE_U_TURN}
    },

    [SPECIES_THWACKEY] = // Terrain Setter
    {
        .name = _("Thwackey"),
        .item = ITEM_TERRAIN_EXTENDER,
        .ability = ABILITY_GRASSY_SURGE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_TAUNT}
    },

    [SPECIES_RILLABOOM] = // Choice Band
    {
        .name = _("Rillaboom"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_GRASSY_SURGE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GRASSY_GLIDE, MOVE_WOOD_HAMMER, MOVE_U_TURN, MOVE_KNOCK_OFF}
    },

    [SPECIES_SCORBUNNY] = // Libero Rookie
    {
        .name = _("Scorbunny"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIBERO,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_DOUBLE_KICK, MOVE_U_TURN, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_RABOOT] = // Offensive Pivot
    {
        .name = _("Raboot"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LIBERO,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_CINDERACE] = // Pivot
    {
        .name = _("Cinderace"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LIBERO,
        .nature = NATURE_JOLLY,
        .evs = {224, 32, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PYRO_BALL, MOVE_U_TURN, MOVE_COURT_CHANGE, MOVE_WILL_O_WISP}
    },

    [SPECIES_SOBBLE] = // Tearful Wall
    {
        .name = _("Sobble"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_YAWN, MOVE_PROTECT}
    },

    [SPECIES_DRIZZILE] = // Sly Pivot
    {
        .name = _("Drizzile"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_U_TURN}
    },

    [SPECIES_INTELEON] = // Choice Specs
    {
        .name = _("Inteleon"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_U_TURN}
    },

    [SPECIES_SKWOVET] = // Cheeky Drum
    {
        .name = _("Skwovet"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_CHEEK_POUCH,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_SUPER_FANG}
    },

    [SPECIES_GREEDENT] = // Stuffed Cheeks
    {
        .name = _("Greedent"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_CHEEK_POUCH,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STUFF_CHEEKS, MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_FACADE}
    },

    [SPECIES_ROOKIDEE] = // Early Bird Pivot
    {
        .name = _("Rookidee"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_KEEN_EYE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_ROOST, MOVE_DEFOG}
    },

    [SPECIES_CORVISQUIRE] = // Rowdy Pivot
    {
        .name = _("Corvisquire"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_UNNERVE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_ROOST, MOVE_DEFOG}
    },

    [SPECIES_CORVIKNIGHT] = // Physically Defensive
    {
        .name = _("Corviknight"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MIRROR_ARMOR,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_U_TURN, MOVE_ROOST, MOVE_DEFOG}
    },

    [SPECIES_BLIPBUG] = // Screen Larva
    {
        .name = _("Blipbug"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_COMPOUND_EYES,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_STRUGGLE_BUG, MOVE_PROTECT}
    },

    [SPECIES_DOTTLER] = // Patient Shell
    {
        .name = _("Dottler"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_COMPOUND_EYES,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_STRUGGLE_BUG, MOVE_REFLECT, MOVE_LIGHT_SCREEN}
    },

    [SPECIES_ORBEETLE] = // Dual Screens
    {
        .name = _("Orbeetle"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_RECOVER}
    },

    [SPECIES_NICKIT] = // Thief Kit
    {
        .name = _("Nickit"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_RUN_AWAY,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_QUICK_ATTACK, MOVE_FOUL_PLAY, MOVE_U_TURN, MOVE_PROTECT}
    },

    [SPECIES_THIEVUL] = // Unburden Trickster
    {
        .name = _("Thievul"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_FLAMETHROWER, MOVE_PROTECT}
    },

    [SPECIES_GOSSIFLEUR] = // Little Bloom
    {
        .name = _("Gossifleur"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_SYNTHESIS, MOVE_STUN_SPORE, MOVE_LEECH_SEED}
    },

    [SPECIES_ELDEGOSS] = // Cotton Support
    {
        .name = _("Eldegoss"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_LEECH_SEED}
    },

    [SPECIES_WOOLOO] = // Fluffy Lamb
    {
        .name = _("Wooloo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLUFFY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BODY_SLAM, MOVE_WHIRLWIND, MOVE_PROTECT}
    },

    [SPECIES_DUBWOOL] = // Fluffy Presser
    {
        .name = _("Dubwool"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FLUFFY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_BODY_PRESS, MOVE_DOUBLE_EDGE, MOVE_SUBSTITUTE}
    },

    [SPECIES_CHEWTLE] = // Shell Smash
    {
        .name = _("Chewtle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .evs = {0, 244, 0, 244, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG}
    },

    [SPECIES_DREDNAW] = // Shell Smash
    {
        .name = _("Drednaw"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_CRUNCH}
    },

    [SPECIES_YAMPER] = // Good Boy
    {
        .name = _("Yamper"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BALL_FETCH,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILD_CHARGE, MOVE_VOLT_SWITCH, MOVE_BITE, MOVE_PROTECT}
    },

    [SPECIES_BOLTUND] = // Strong Jaw Sprinter
    {
        .name = _("Boltund"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_U_TURN}
    },

    [SPECIES_ROLYCOLY] = // Coal Rock
    {
        .name = _("Rolycoly"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_HEATPROOF,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_SLIDE, MOVE_PROTECT, MOVE_TOXIC}
    },

    [SPECIES_CARKOL] = // Physically Defensive
    {
        .name = _("Carkol"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_STEALTH_ROCK, MOVE_POWER_GEM, MOVE_WILL_O_WISP}
    },

    [SPECIES_COALOSSAL] = // Defensive
    {
        .name = _("Coalossal"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_CALM,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK, MOVE_FLAMETHROWER, MOVE_EARTH_POWER}
    },

    [SPECIES_APPLIN] = // Snug Core
    {
        .name = _("Applin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_RIPEN,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_DRAGON_PULSE, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_FLAPPLE] = // Grav Apple Dance
    {
        .name = _("Flapple"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_GRAV_APPLE, MOVE_OUTRAGE, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_APPLETUN] = // Special Wall
    {
        .name = _("Appletun"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_APPLE_ACID, MOVE_DRAGON_PULSE, MOVE_DRAGON_TAIL, MOVE_RECOVER}
    },

    [SPECIES_SILICOBRA] = // Sand Coil
    {
        .name = _("Silicobra"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAND_SPIT,
        .nature = NATURE_IMPISH,
        .evs = {252, 4, 252, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COIL, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_GLARE}
    },

    [SPECIES_SANDACONDA] = // Stealth Rock
    {
        .name = _("Sandaconda"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_GLARE, MOVE_REST}
    },

    [SPECIES_CRAMORANT] = // Defog
    {
        .name = _("Cramorant"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_GULP_MISSILE,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 188, 16, 0, 56},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_ROOST, MOVE_SURF, MOVE_BRAVE_BIRD}
    },

    [SPECIES_ARROKUDA] = // Swift Skewer
    {
        .name = _("Arrokuda"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LIQUIDATION, MOVE_FLIP_TURN, MOVE_POISON_JAB, MOVE_AQUA_JET}
    },

    [SPECIES_BARRASKEWDA] = // Offensive Pivot
    {
        .name = _("Barraskewda"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LIQUIDATION, MOVE_FLIP_TURN, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET}
    },

    [SPECIES_TOXEL] = // Punk Larva
    {
        .name = _("Toxel"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PUNK_ROCK,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_OVERDRIVE, MOVE_VOLT_SWITCH, MOVE_PROTECT}
    },

    [SPECIES_TOXTRICITY_AMPED] = // Punk Rock Star
    {
        .name = _("Toxtricity-A"),
        .item = ITEM_THROAT_SPRAY,
        .ability = ABILITY_PUNK_ROCK,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_SLUDGE_WAVE, MOVE_VOLT_SWITCH}
    },

    [SPECIES_TOXTRICITY_LOW_KEY] = // Choice Specs
    {
        .name = _("Toxtricity-L"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PUNK_ROCK,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_BOOMBURST, MOVE_OVERDRIVE, MOVE_SNARL, MOVE_VOLT_SWITCH}
    },

    [SPECIES_SIZZLIPEDE] = // Hot Centipede
    {
        .name = _("Sizzlipede"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BITE, MOVE_FLAME_CHARGE, MOVE_ROCK_TOMB, MOVE_PROTECT}
    },

    [SPECIES_CENTISKORCH] = // Blazing Crawler
    {
        .name = _("Centiskorch"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_LEECH_LIFE, MOVE_ROCK_SLIDE, MOVE_POISON_JAB}
    },

    [SPECIES_CLOBBOPUS] = // Grapple Tot
    {
        .name = _("Clobbopus"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIMBER,
        .nature = NATURE_CAREFUL,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_OCTOLOCK, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_BULK_UP}
    },

    [SPECIES_GRAPPLOCT] = // Octolock Grappler
    {
        .name = _("Grapploct"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LIMBER,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_OCTOLOCK, MOVE_POISON_JAB}
    },

    [SPECIES_SINISTEA_PHONY] = // Cracked Cup
    {
        .name = _("Sinistea-P"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_POLTEAGEIST_PHONY] = // Imitation Smash
    {
        .name = _("Polteageist-P"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_STORED_POWER, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL}
    },

    [SPECIES_HATENNA] = // Baby Bouncer
    {
        .name = _("Hatenna"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 4, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_PROTECT}
    },

    [SPECIES_HATTREM] = // Physically Defensive
    {
        .name = _("Hattrem"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEALING_WISH, MOVE_PSYCHIC, MOVE_NUZZLE, MOVE_MYSTICAL_FIRE}
    },

    [SPECIES_HATTERENE] = // Calm Mind (Fairy)
    {
        .name = _("Hatterene"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 204, 52, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_MYSTICAL_FIRE}
    },

    [SPECIES_IMPIDIMP] = // Dual Screens
    {
        .name = _("Impidimp"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_BOLD,
        .evs = {156, 0, 196, 36, 0, 116},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PARTING_SHOT, MOVE_DAZZLING_GLEAM}
    },

    [SPECIES_MORGREM] = // Dual Screens
    {
        .name = _("Morgrem"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PARTING_SHOT, MOVE_TAUNT}
    },

    [SPECIES_GRIMMSNARL] = // Bulky Pivot
    {
        .name = _("Grimmsnarl"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PARTING_SHOT, MOVE_THUNDER_WAVE, MOVE_SPIRIT_BREAK, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_OBSTAGOON] = // Guts Bruiser
    {
        .name = _("Obstagoon"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_PARTING_SHOT}
    },

    [SPECIES_PERRSERKER] = // Hazard Setter
    {
        .name = _("Perrserker"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_ADAMANT,
        .evs = {248, 252, 0, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_U_TURN}
    },

    [SPECIES_CURSOLA] = // Ghost Coral
    {
        .name = _("Cursola"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 4, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_STRENGTH_SAP}
    },

    [SPECIES_SIRFETCHD] = // Leek Crit
    {
        .name = _("Sirfetch'd"),
        .item = ITEM_LEEK,
        .ability = ABILITY_STEADFAST,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CROSS_CHOP, MOVE_NIGHT_SLASH, MOVE_BRAVE_BIRD}
    },

    [SPECIES_MR_RIME] = // Tap Dance CM
    {
        .name = _("Mr. Rime"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SCREEN_CLEANER,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_FREEZE_DRY, MOVE_PSYCHIC, MOVE_FOCUS_BLAST}
    },

    [SPECIES_RUNERIGUS] = // Cursed Mural
    {
        .name = _("Runerigus"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_WANDERING_SPIRIT,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_STEALTH_ROCK, MOVE_PROTECT, MOVE_EARTHQUAKE}
    },

    [SPECIES_MILCERY] = // Sweet Cream
    {
        .name = _("Milcery"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWEET_VEIL,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 4, 0, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_RECOVER, MOVE_PROTECT}
    },

    [SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM] = // Decadent Wall
    {
        .name = _("Alcremie-SV"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_AROMA_VEIL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 0, 4, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_RECOVER}
    },

    [SPECIES_FALINKS] = // No Retreat Squad
    {
        .name = _("Falinks"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NO_RETREAT, MOVE_FIRST_IMPRESSION, MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_PINCURCHIN] = // Terrain Setter
    {
        .name = _("Pincurchin"),
        .item = ITEM_TERRAIN_EXTENDER,
        .ability = ABILITY_ELECTRIC_SURGE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DISCHARGE, MOVE_SCALD, MOVE_SPIKES, MOVE_RECOVER}
    },

    [SPECIES_SNOM] = // Sleepy Snowball
    {
        .name = _("Snom"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ICE_SCALES,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STRUGGLE_BUG, MOVE_POWDER_SNOW, MOVE_PROTECT, MOVE_TOXIC}
    },

    [SPECIES_FROSMOTH] = // Defog
    {
        .name = _("Frosmoth"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_ICE_SCALES,
        .nature = NATURE_MODEST,
        .evs = {248, 0, 0, 0, 20, 240},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_U_TURN, MOVE_ICE_BEAM, MOVE_STUN_SPORE}
    },

    [SPECIES_STONJOURNER] = // Standing Stone
    {
        .name = _("Stonjourner"),
        .item = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_STURDY,
        .nature = NATURE_BRAVE,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_CURSE, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_HEAT_CRASH}
    },

    [SPECIES_EISCUE_ICE] = // Frozen Drum
    {
        .name = _("Eiscue-Ice"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_ICE_FACE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_ICICLE_CRASH, MOVE_ZEN_HEADBUTT, MOVE_SUBSTITUTE}
    },

    [SPECIES_INDEEDEE_M] = // Terrain Nuker
    {
        .name = _("Indeedee-M"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PSYCHIC_SURGE,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_EXPANDING_FORCE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM}
    },

    [SPECIES_INDEEDEE_F] = // Terrain Setter
    {
        .name = _("Indeedee-F"),
        .item = ITEM_TERRAIN_EXTENDER,
        .ability = ABILITY_PSYCHIC_SURGE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_HEALING_WISH}
    },

    [SPECIES_MORPEKO_FULL_BELLY] = // Hangry Switch
    {
        .name = _("Morpeko-FB"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_HUNGER_SWITCH,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AURA_WHEEL, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_SEED_BOMB}
    },

    [SPECIES_CUFANT] = // Heavy Calf
    {
        .name = _("Cufant"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_HEAVY_METAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_HEAVY_SLAM, MOVE_IRON_HEAD, MOVE_EARTHQUAKE}
    },

    [SPECIES_COPPERAJAH] = // Assault Vest
    {
        .name = _("Copperajah"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_HEAVY_METAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 192, 0, 124, 0, 192},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAVY_SLAM, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF}
    },

    [SPECIES_DRACOZOLT] = // Hustle Fossil
    {
        .name = _("Dracozolt"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BOLT_BEAK, MOVE_DRAGON_CLAW, MOVE_SUPERPOWER, MOVE_ICE_FANG}
    },

    [SPECIES_ARCTOZOLT] = // Slush Rush (Ice)
    {
        .name = _("Arctozolt"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_SLUSH_RUSH,
        .nature = NATURE_NAUGHTY,
        .evs = {0, 252, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BOLT_BEAK, MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_SUBSTITUTE}
    },

    [SPECIES_DRACOVISH] = // Fishious Menace
    {
        .name = _("Dracovish"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_SUPERPOWER}
    },

    [SPECIES_ARCTOVISH] = // Frozen Fossil
    {
        .name = _("Arctovish"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_CRUNCH}
    },

    [SPECIES_DURALUDON] = // Eviolite
    {
        .name = _("Duraludon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIGHT_METAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK}
    },

    [SPECIES_DREEPY] = // Wispy Dart
    {
        .name = _("Dreepy"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DARTS, MOVE_SUCKER_PUNCH, MOVE_PHANTOM_FORCE, MOVE_WILL_O_WISP}
    },

    [SPECIES_DRAKLOAK] = // RestTalk
    {
        .name = _("Drakloak"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 64, 192, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NIGHT_SHADE, MOVE_DRAGON_TAIL, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_DRAGAPULT] = // Boots Pivot
    {
        .name = _("Dragapult"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_NAIVE,
        .evs = {0, 60, 0, 252, 196, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DARTS, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_U_TURN}
    },

    [SPECIES_ZACIAN_HERO] = // Unbound Blade
    {
        .name = _("Zacian-Hero"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_INTREPID_SWORD,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD}
    },

    [SPECIES_ZAMAZENTA_HERO] = // Unbound Shield
    {
        .name = _("Zamazenta-Hero"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_DAUNTLESS_SHIELD,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_CRUNCH, MOVE_PROTECT}
    },

    [SPECIES_ETERNATUS] = // Cosmic Power
    {
        .name = _("Eternatus"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 236, 20, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_COSMIC_POWER, MOVE_RECOVER, MOVE_DYNAMAX_CANNON, MOVE_FLAMETHROWER}
    },

    [SPECIES_KUBFU] = // Cub Fighter
    {
        .name = _("Kubfu"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE}
    },

    [SPECIES_URSHIFU_SINGLE_STRIKE] = // Wicked Blow
    {
        .name = _("Urshifu-SS"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_UNSEEN_FIST,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_POISON_JAB}
    },

    [SPECIES_URSHIFU_RAPID_STRIKE] = // Choice Band
    {
        .name = _("Urshifu-R"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_UNSEEN_FIST,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_POISON_JAB}
    },

    [SPECIES_ZARUDE] = // Swords Dance
    {
        .name = _("Zarude"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEAF_GUARD,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_JUNGLE_HEALING}
    },

    [SPECIES_ZARUDE_DADA] = // Swords Dance
    {
        .name = _("Zarude-D"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEAF_GUARD,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_JUNGLE_HEALING}
    },

    [SPECIES_REGIELEKI] = // Dual Screens
    {
        .name = _("Regieleki"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_TRANSISTOR,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_VOLT_SWITCH, MOVE_RAPID_SPIN}
    },

    [SPECIES_REGIDRAGO] = // Choice Scarf
    {
        .name = _("Regidrago"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DRAGONS_MAW,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_TERA_BLAST}
    },

    [SPECIES_GLASTRIER] = // Swords Dance
    {
        .name = _("Glastrier"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_CHILLING_NEIGH,
        .nature = NATURE_ADAMANT,
        .evs = {128, 252, 0, 124, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICICLE_CRASH, MOVE_CLOSE_COMBAT, MOVE_HIGH_HORSEPOWER}
    },

    [SPECIES_SPECTRIER] = // Choice Scarf
    {
        .name = _("Spectrier"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_GRIM_NEIGH,
        .nature = NATURE_MODEST,
        .evs = {112, 0, 0, 144, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHADOW_BALL, MOVE_DRAINING_KISS, MOVE_FOUL_PLAY, MOVE_CURSE}
    },

    [SPECIES_CALYREX] = // Double Dance
    {
        .name = _("Calyrex"),
        .item = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_UNNERVE,
        .nature = NATURE_TIMID,
        .evs = {248, 0, 84, 176, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_AGILITY, MOVE_STORED_POWER, MOVE_GIGA_DRAIN}
    },

    [SPECIES_CALYREX_ICE] = // Bulky Trick Room Sweeper
    {
        .name = _("Calyrex-I"),
        .item = ITEM_CLEAR_AMULET,
        .ability = ABILITY_AS_ONE_ICE_RIDER,
        .nature = NATURE_ADAMANT,
        .evs = {212, 252, 4, 36, 0, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_TRICK_ROOM, MOVE_PROTECT}
    },

    [SPECIES_CALYREX_SHADOW] = // Setup Sweeper
    {
        .name = _("Calyrex-S"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_AS_ONE_SHADOW_RIDER,
        .nature = NATURE_TIMID,
        .evs = {140, 0, 4, 252, 100, 12},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_PSYCHIC, MOVE_NASTY_PLOT, MOVE_PROTECT}
    },

    [SPECIES_WYRDEER] = // Psyshield Wall
    {
        .name = _("Wyrdeer"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PSYSHIELD_BASH, MOVE_BODY_PRESS, MOVE_EARTHQUAKE, MOVE_FACADE}
    },

    [SPECIES_KLEAVOR] = // Lead
    {
        .name = _("Kleavor"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STONE_AXE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_URSALUNA] = // Swords Dance
    {
        .name = _("Ursaluna"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_HEADLONG_RUSH, MOVE_FIRE_PUNCH}
    },

    [SPECIES_URSALUNA_BLOODMOON] = // Chople Berry
    {
        .name = _("Ursaluna-B"),
        .item = ITEM_CHOPLE_BERRY,
        .ability = ABILITY_MINDS_EYE,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 108, 0, 100, 48},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLOOD_MOON, MOVE_EARTH_POWER, MOVE_VACUUM_WAVE, MOVE_HYPER_VOICE}
    },

    [SPECIES_BASCULEGION_M] = // Adaptive Wave
    {
        .name = _("Basculegion-M"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WAVE_CRASH, MOVE_FLIP_TURN, MOVE_AQUA_JET, MOVE_POLTERGEIST}
    },

    [SPECIES_BASCULEGION_F] = // Choice Scarf
    {
        .name = _("Basculegion-F"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHADOW_BALL, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLIP_TURN}
    },

    [SPECIES_SNEASLER] = // Choice Band (Poison)
    {
        .name = _("Sneasler"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_THROAT_CHOP, MOVE_U_TURN}
    },

    [SPECIES_OVERQWIL] = // Rain Sweeper
    {
        .name = _("Overqwil"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_GUNK_SHOT, MOVE_CRUNCH, MOVE_LIQUIDATION}
    },

    [SPECIES_ENAMORUS_INCARNATE] = // Contrary Bloom
    {
        .name = _("Enamorus-I"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_PSYCHIC, MOVE_SUBSTITUTE}
    },

    [SPECIES_ENAMORUS_THERIAN] = // Offensive
    {
        .name = _("Enamorus-T"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_OVERCOAT,
        .nature = NATURE_MODEST,
        .evs = {128, 0, 0, 128, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_DRAINING_KISS, MOVE_CALM_MIND}
    },

    [SPECIES_SPRIGATITO] = // Chameleon Kit
    {
        .name = _("Sprigatito"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_PROTEAN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_SEED_BOMB, MOVE_TAUNT}
    },

    [SPECIES_FLORAGATO] = // Blade Cat
    {
        .name = _("Floragato"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_PROTEAN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_LEAF_BLADE, MOVE_TAUNT}
    },

    [SPECIES_MEOWSCARADA] = // Lead
    {
        .name = _("Meowscarada"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PROTEAN,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TOXIC_SPIKES, MOVE_TRIPLE_AXEL, MOVE_FLOWER_TRICK, MOVE_U_TURN}
    },

    [SPECIES_FUECOCO] = // Defensive
    {
        .name = _("Fuecoco"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_CALM,
        .evs = {140, 0, 124, 0, 12, 196},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_FLAMETHROWER, MOVE_SLACK_OFF, MOVE_ROAR}
    },

    [SPECIES_CROCALOR] = // Physically Defensive
    {
        .name = _("Crocalor"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_ROAR, MOVE_SLACK_OFF}
    },

    [SPECIES_SKELEDIRGE] = // Unaware Wall
    {
        .name = _("Skeledirge"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 92, 0, 0, 164},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TORCH_SONG, MOVE_WILL_O_WISP, MOVE_HEX, MOVE_SLACK_OFF}
    },

    [SPECIES_QUAXLY] = // Rapid Spin
    {
        .name = _("Quaxly"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_ADAMANT,
        .evs = {76, 76, 76, 196, 0, 76},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_ROOST, MOVE_LIQUIDATION, MOVE_AQUA_JET}
    },

    [SPECIES_QUAXWELL] = // Defensive
    {
        .name = _("Quaxwell"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLIP_TURN, MOVE_RAPID_SPIN, MOVE_ENCORE, MOVE_ROOST}
    },

    [SPECIES_QUAQUAVAL] = // Assault Vest
    {
        .name = _("Quaquaval"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_AQUA_STEP, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN}
    },

    [SPECIES_LECHONK] = // Chunky Pig
    {
        .name = _("Lechonk"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_YAWN, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_OINKOLOGNE_M] = // Musk Drum
    {
        .name = _("Oinkologne-M"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_GLUTTONY,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_PROTECT}
    },

    [SPECIES_OINKOLOGNE_F] = // Matron Wall
    {
        .name = _("Oinkologne-F"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_REST}
    },

    [SPECIES_TAROUNTULA] = // Web Spinner
    {
        .name = _("Tarountula"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_BUG_BITE, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_SPIDOPS] = // Trapdoor Weaver
    {
        .name = _("Spidops"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_TOXIC_THREAD, MOVE_BUG_BITE, MOVE_PROTECT}
    },

    [SPECIES_NYMBLE] = // Revenge Killer
    {
        .name = _("Nymble"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_ADAMANT,
        .evs = {0, 228, 36, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LEECH_LIFE, MOVE_SUCKER_PUNCH, MOVE_U_TURN}
    },

    [SPECIES_LOKIX] = // Swords Dance
    {
        .name = _("Lokix"),
        .item = ITEM_BLACK_GLASSES,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_PROTECT}
    },

    [SPECIES_PAWMI] = // Static Cheeks
    {
        .name = _("Pawmi"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NUZZLE, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },

    [SPECIES_PAWMO] = // Fist Pivot
    {
        .name = _("Pawmo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NUZZLE, MOVE_THUNDER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH}
    },

    [SPECIES_PAWMOT] = // Offensive
    {
        .name = _("Pawmot"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_SHOCK, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_MACH_PUNCH}
    },

    [SPECIES_TANDEMAUS] = // Duo Bombers
    {
        .name = _("Tandemaus"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POPULATION_BOMB, MOVE_BITE, MOVE_BEAT_UP, MOVE_PROTECT}
    },

    [SPECIES_MAUSHOLD_FOUR] = // Tidy Up
    {
        .name = _("Maushold"),
        .item = ITEM_WIDE_LENS,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TIDY_UP, MOVE_POPULATION_BOMB, MOVE_BITE, MOVE_ENCORE}
    },

    [SPECIES_MAUSHOLD_THREE] = // Family Reunion
    {
        .name = _("Maushold-3"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POPULATION_BOMB, MOVE_TIDY_UP, MOVE_CRUNCH, MOVE_BEAT_UP}
    },

    [SPECIES_FIDOUGH] = // Baked Pup
    {
        .name = _("Fidough"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WELL_BAKED_BODY,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_DACHSBUN] = // Cleric
    {
        .name = _("Dachsbun"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WELL_BAKED_BODY,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_PLAY_ROUGH, MOVE_ROAR}
    },

    [SPECIES_SMOLIV] = // Little Olive
    {
        .name = _("Smoliv"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_SYNTHESIS, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_DOLLIV] = // Oil Sprout
    {
        .name = _("Dolliv"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_TOXIC}
    },

    [SPECIES_ARBOLIVA] = // Physically Defensive (Normal)
    {
        .name = _("Arboliva"),
        .item = ITEM_EJECT_BUTTON,
        .ability = ABILITY_SEED_SOWER,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_STRENGTH_SAP, MOVE_LEECH_SEED}
    },

    [SPECIES_SQUAWKABILLY_GREEN] = // Guts Squawker
    {
        .name = _("Squawk-Grn"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_ROOST}
    },

    [SPECIES_SQUAWKABILLY_BLUE] = // Hustle Squawker
    {
        .name = _("Squawk-Blu"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_U_TURN}
    },

    [SPECIES_SQUAWKABILLY_YELLOW] = // Intimidate Squawker
    {
        .name = _("Squawk-Ylw"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_ROOST}
    },

    [SPECIES_SQUAWKABILLY_WHITE] = // Life Orb Squawker
    {
        .name = _("Squawk-Wht"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_QUICK_ATTACK}
    },

    [SPECIES_NACLI] = // Salty Pebble
    {
        .name = _("Nacli"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PURIFYING_SALT,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SALT_CURE, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_RECOVER}
    },

    [SPECIES_NACLSTACK] = // Specially Defensive
    {
        .name = _("Naclstack"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PURIFYING_SALT,
        .nature = NATURE_CAREFUL,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SALT_CURE, MOVE_PROTECT, MOVE_RECOVER, MOVE_CURSE}
    },

    [SPECIES_GARGANACL] = // Setup
    {
        .name = _("Garganacl"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PURIFYING_SALT,
        .nature = NATURE_CAREFUL,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SALT_CURE, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_RECOVER}
    },

    [SPECIES_CHARCADET] = // Ember Coal
    {
        .name = _("Charcadet"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_PROTECT}
    },

    [SPECIES_ARMAROUGE] = // Calm Mind + 3 Attacks
    {
        .name = _("Armarouge"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ARMOR_CANNON, MOVE_PSYSHOCK, MOVE_ENERGY_BALL, MOVE_CALM_MIND}
    },

    [SPECIES_CERULEDGE] = // Swords Dance
    {
        .name = _("Ceruledge"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_BITTER_BLADE, MOVE_SHADOW_SNEAK, MOVE_POLTERGEIST}
    },

    [SPECIES_TADBULB] = // Charged Larva
    {
        .name = _("Tadbulb"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STATIC,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CHARGE_BEAM, MOVE_VOLT_SWITCH, MOVE_DISCHARGE, MOVE_TOXIC}
    },

    [SPECIES_BELLIBOLT] = // Physically Defensive Static
    {
        .name = _("Bellibolt"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STATIC,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_MUDDY_WATER, MOVE_SLACK_OFF, MOVE_TOXIC}
    },

    [SPECIES_WATTREL] = // Pivot
    {
        .name = _("Wattrel"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_TIMID,
        .evs = {36, 0, 76, 196, 76, 116},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_DISCHARGE, MOVE_VOLT_SWITCH, MOVE_ROOST}
    },

    [SPECIES_KILOWATTREL] = // Offensive Pivot
    {
        .name = _("Kilowattrel"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_HURRICANE, MOVE_VOLT_SWITCH, MOVE_ROOST}
    },

    [SPECIES_MASCHIFF] = // Choice Scarf
    {
        .name = _("Maschiff"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_STAKEOUT,
        .nature = NATURE_JOLLY,
        .evs = {0, 212, 0, 188, 0, 108},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_FIRE_FANG, MOVE_PSYCHIC_FANGS}
    },

    [SPECIES_MABOSSTIFF] = // Choiced
    {
        .name = _("Mabosstiff"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_STAKEOUT,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_DESTINY_BOND}
    },

    [SPECIES_SHROODLE] = // Setup Sweeper
    {
        .name = _("Shroodle"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_ADAMANT,
        .evs = {36, 236, 0, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_GUNK_SHOT, MOVE_TERA_BLAST, MOVE_SUBSTITUTE}
    },

    [SPECIES_GRAFAIAI] = // Terrain Sweeper
    {
        .name = _("Grafaiai"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ACROBATICS, MOVE_LOW_KICK, MOVE_ENCORE}
    },

    [SPECIES_BRAMBLIN] = // Spinner
    {
        .name = _("Bramblin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WIND_RIDER,
        .nature = NATURE_JOLLY,
        .evs = {0, 236, 36, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_POWER_WHIP, MOVE_SHADOW_SNEAK, MOVE_STRENGTH_SAP}
    },

    [SPECIES_BRAMBLEGHAST] = // Offensive Utility
    {
        .name = _("Brambleghast"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WIND_RIDER,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_RAPID_SPIN, MOVE_STRENGTH_SAP}
    },

    [SPECIES_TOEDSCOOL] = // Utility
    {
        .name = _("Toedscool"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MYCELIUM_MIGHT,
        .nature = NATURE_TIMID,
        .evs = {36, 0, 236, 196, 36, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_KNOCK_OFF, MOVE_EARTH_POWER, MOVE_GIGA_DRAIN}
    },

    [SPECIES_TOEDSCRUEL] = // Entry Hazard Support (Grass)
    {
        .name = _("Toedscruel"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_MYCELIUM_MIGHT,
        .nature = NATURE_TIMID,
        .evs = {180, 0, 64, 252, 12, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPORE, MOVE_SPIKES, MOVE_RAPID_SPIN, MOVE_EARTH_POWER}
    },

    [SPECIES_KLAWF] = // Anger Crab
    {
        .name = _("Klawf"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_ANGER_SHELL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_KNOCK_OFF, MOVE_SUBSTITUTE}
    },

    [SPECIES_CAPSAKID] = // Spicy Sprout
    {
        .name = _("Capsakid"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_SEED_BOMB, MOVE_BODY_SLAM, MOVE_PROTECT}
    },

    [SPECIES_SCOVILLAIN] = // Sun Sweeper (Fire)
    {
        .name = _("Scovillain"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_NAIVE,
        .evs = {0, 32, 0, 224, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_GIGA_DRAIN, MOVE_FIRE_BLAST, MOVE_STOMPING_TANTRUM}
    },

    [SPECIES_RELLOR] = // Dung Roller
    {
        .name = _("Rellor"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_COMPOUND_EYES,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_STORED_POWER, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_RABSCA] = // Offensive Trick Room
    {
        .name = _("Rabsca"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_SYNCHRONIZE,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_REVIVAL_BLESSING}
    },

    [SPECIES_FLITTLE] = // Sprint Ostrich
    {
        .name = _("Flittle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_PROTECT}
    },

    [SPECIES_ESPATHRA] = // Calm Mind
    {
        .name = _("Espathra"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 244, 12, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STORED_POWER, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_PROTECT}
    },

    [SPECIES_TINKATINK] = // Utility
    {
        .name = _("Tinkatink"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PICKPOCKET,
        .nature = NATURE_CALM,
        .evs = {36, 0, 236, 52, 0, 164},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAINING_KISS, MOVE_KNOCK_OFF, MOVE_FLASH_CANNON, MOVE_STEALTH_ROCK}
    },

    [SPECIES_TINKATUFF] = // Defensive Utility
    {
        .name = _("Tinkatuff"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PICKPOCKET,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE, MOVE_ENCORE}
    },

    [SPECIES_TINKATON] = // Utility
    {
        .name = _("Tinkaton"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 0, 232, 0, 24},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_GIGATON_HAMMER, MOVE_ENCORE, MOVE_THUNDER_WAVE}
    },

    [SPECIES_WIGLETT] = // Garden Eel
    {
        .name = _("Wiglett"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_GOOEY,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_TOXIC, MOVE_PROTECT}
    },

    [SPECIES_WUGTRIO] = // Triple Eel
    {
        .name = _("Wugtrio"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_GOOEY,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_BEAT_UP, MOVE_FACADE}
    },

    [SPECIES_BOMBIRDIER] = // Offensive
    {
        .name = _("Bombirdier"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_BIG_PECKS,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_BRAVE_BIRD, MOVE_SUCKER_PUNCH, MOVE_TAUNT}
    },

    [SPECIES_FINIZEN] = // Offensive
    {
        .name = _("Finizen"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_WATER_VEIL,
        .nature = NATURE_TIMID,
        .evs = {36, 0, 0, 236, 236, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_BOOMBURST, MOVE_ICE_BEAM, MOVE_PROTECT}
    },

    [SPECIES_PALAFIN_ZERO] = // Sleepy Sailor
    {
        .name = _("Palafin-Zero"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_ZERO_TO_HERO,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLIP_TURN, MOVE_WATERFALL, MOVE_SUBSTITUTE, MOVE_REST}
    },

    [SPECIES_VAROOM] = // Defensive Pivot
    {
        .name = _("Varoom"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_OVERCOAT,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 72, 0, 0, 184},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_PARTING_SHOT, MOVE_POISON_JAB, MOVE_TOXIC_SPIKES, MOVE_THIEF}
    },

    [SPECIES_REVAVROOM] = // Shift Gear
    {
        .name = _("Revavroom"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_FILTER,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHIFT_GEAR, MOVE_IRON_HEAD, MOVE_GUNK_SHOT, MOVE_HIGH_HORSEPOWER}
    },

    [SPECIES_CYCLIZAR] = // Utility
    {
        .name = _("Cyclizar"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_JOLLY,
        .evs = {248, 8, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHED_TAIL, MOVE_RAPID_SPIN, MOVE_KNOCK_OFF, MOVE_TAUNT}
    },

    [SPECIES_ORTHWORM] = // Defensive
    {
        .name = _("Orthworm"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_EARTH_EATER,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 16, 0, 0, 244},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}
    },

    [SPECIES_GLIMMET] = // Entry Hazard Setter
    {
        .name = _("Glimmet"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TOXIC_DEBRIS,
        .nature = NATURE_TIMID,
        .evs = {132, 0, 100, 196, 76, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_POWER_GEM, MOVE_MUD_SHOT, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_GLIMMORA] = // Meteor Beam
    {
        .name = _("Glimmora"),
        .item = ITEM_POWER_HERB,
        .ability = ABILITY_TOXIC_DEBRIS,
        .nature = NATURE_MODEST,
        .evs = {244, 0, 4, 92, 76, 92},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_METEOR_BEAM, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_SPIKY_SHIELD}
    },

    [SPECIES_GREAVARD] = // Clingy Pup
    {
        .name = _("Greavard"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLUFFY,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_BODY_SLAM, MOVE_PROTECT}
    },

    [SPECIES_HOUNDSTONE] = // Defensive
    {
        .name = _("Houndstone"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FLUFFY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NIGHT_SHADE, MOVE_BODY_PRESS, MOVE_WILL_O_WISP, MOVE_PROTECT}
    },

    [SPECIES_FLAMIGO] = // Glass Cannon
    {
        .name = _("Flamigo"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SCRAPPY,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_DETECT}
    },

    [SPECIES_CETODDLE] = // Chubby Calf
    {
        .name = _("Cetoddle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_IMPISH,
        .evs = {252, 4, 252, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_FANG, MOVE_BODY_SLAM, MOVE_CURSE, MOVE_REST}
    },

    [SPECIES_CETITAN] = // Belly Drum
    {
        .name = _("Cetitan"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLUSH_RUSH,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_EARTHQUAKE}
    },

    [SPECIES_VELUZA] = // Fillet Away
    {
        .name = _("Veluza"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FILLET_AWAY, MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_AQUA_JET}
    },

    [SPECIES_DONDOZO] = // Curse + Resttalk
    {
        .name = _("Dondozo"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_WATERFALL, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_TATSUGIRI] = // Nasty Plot
    {
        .name = _("Tatsugiri"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_DRACO_METEOR, MOVE_SURF, MOVE_RAPID_SPIN}
    },

    [SPECIES_TATSUGIRI_DROOPY] = // Rice Ball Support
    {
        .name = _("Tatsugiri-D"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_COMMANDER,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MUDDY_WATER, MOVE_DRACO_METEOR, MOVE_ICE_BEAM, MOVE_REST}
    },

    [SPECIES_TATSUGIRI_STRETCHY] = // Elastic Nuker
    {
        .name = _("Tatsugiri-S"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_COMMANDER,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ICY_WIND}
    },

    [SPECIES_ANNIHILAPE] = // Choice Scarf
    {
        .name = _("Annihilape"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FINAL_GAMBIT, MOVE_RAGE_FIST, MOVE_CLOSE_COMBAT, MOVE_COACHING}
    },

    [SPECIES_CLODSIRE] = // Defensive Hazard Setter
    {
        .name = _("Clodsire"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 176, 0, 0, 84},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_SPIKES, MOVE_RECOVER}
    },

    [SPECIES_FARIGIRAF] = // Offensive Trick Room
    {
        .name = _("Farigiraf"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_ARMOR_TAIL,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 4, 0, 252, 0},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_NASTY_PLOT, MOVE_PSYSHOCK, MOVE_TERA_BLAST}
    },

    [SPECIES_DUDUNSPARCE_TWO_SEGMENT] = // Serene Wall
    {
        .name = _("Dudunsparce-2"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_ROOST, MOVE_EARTHQUAKE, MOVE_COIL}
    },

    [SPECIES_DUDUNSPARCE_THREE_SEGMENT] = // Long Boi Tank
    {
        .name = _("Dudunsparce-3"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COIL, MOVE_BODY_SLAM, MOVE_ROOST, MOVE_EARTHQUAKE}
    },

    [SPECIES_KINGAMBIT] = // Assault Vest
    {
        .name = _("Kingambit"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SUPREME_OVERLORD,
        .nature = NATURE_ADAMANT,
        .evs = {244, 196, 0, 0, 0, 68},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE}
    },

    [SPECIES_GREAT_TUSK] = // Offensive Utility
    {
        .name = _("Great Tusk"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PROTOSYNTHESIS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_RAPID_SPIN}
    },

    [SPECIES_SCREAM_TAIL] = // Bulky Disruption
    {
        .name = _("Scream Tail"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_PROTOSYNTHESIS,
        .nature = NATURE_TIMID,
        .evs = {228, 0, 148, 100, 4, 28},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_ENCORE, MOVE_DISABLE, MOVE_PROTECT}
    },

    [SPECIES_BRUTE_BONNET] = // Speedy Spore
    {
        .name = _("Brute Bonnet"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_PROTOSYNTHESIS,
        .nature = NATURE_ADAMANT,
        .evs = {148, 100, 4, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPORE, MOVE_TRAILBLAZE, MOVE_CRUNCH, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_FLUTTER_MANE] = // Choice Specs (Ghost)
    {
        .name = _("Flutter Mane"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PROTOSYNTHESIS,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_POWER_GEM}
    },

    [SPECIES_SLITHER_WING] = // Bulk Up Sweeper
    {
        .name = _("Slither Wing"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_PROTOSYNTHESIS,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_LEECH_LIFE, MOVE_EARTHQUAKE, MOVE_FLAME_CHARGE}
    },

    [SPECIES_SANDY_SHOCKS] = // Pivot
    {
        .name = _("Sandy Shocks"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PROTOSYNTHESIS,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_SPIKES}
    },

    [SPECIES_IRON_TREADS] = // Utility
    {
        .name = _("Iron Treads"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_QUARK_DRIVE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN}
    },

    [SPECIES_IRON_BUNDLE] = // Fast Support
    {
        .name = _("Iron Bundle"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_QUARK_DRIVE,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FREEZE_DRY, MOVE_ICY_WIND, MOVE_ENCORE, MOVE_PROTECT}
    },

    [SPECIES_IRON_HANDS] = // Swords Dance
    {
        .name = _("Iron Hands"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 84, 0, 172},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },

    [SPECIES_IRON_JUGULIS] = // Booster Energy
    {
        .name = _("Iron Jugulis"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_HURRICANE, MOVE_EARTH_POWER, MOVE_WORK_UP}
    },

    [SPECIES_IRON_MOTH] = // Booster Energy
    {
        .name = _("Iron Moth"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 124, 252, 132, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FIERY_DANCE, MOVE_SLUDGE_WAVE, MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM}
    },

    [SPECIES_IRON_THORNS] = // Dragon Dance (Electric)
    {
        .name = _("Iron Thorns"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_QUARK_DRIVE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_PIN_MISSILE, MOVE_ROCK_BLAST}
    },

    [SPECIES_FRIGIBAX] = // Frozen Fang
    {
        .name = _("Frigibax"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THERMAL_EXCHANGE,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_ICE_FANG, MOVE_EARTHQUAKE}
    },

    [SPECIES_ARCTIBAX] = // Swords Dance
    {
        .name = _("Arctibax"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THERMAL_EXCHANGE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICICLE_CRASH, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD}
    },

    [SPECIES_BAXCALIBUR] = // Clear Amulet
    {
        .name = _("Baxcalibur"),
        .item = ITEM_CLEAR_AMULET,
        .ability = ABILITY_THERMAL_EXCHANGE,
        .nature = NATURE_ADAMANT,
        .evs = {220, 196, 4, 52, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GLAIVE_RUSH, MOVE_ICE_SHARD, MOVE_ICICLE_CRASH, MOVE_PROTECT}
    },

    [SPECIES_GIMMIGHOUL_CHEST] = // Coin Chest
    {
        .name = _("Gimmighoul-C"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_RATTLED,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_TRICK, MOVE_SHADOW_BALL, MOVE_CURSE, MOVE_PROTECT}
    },

    [SPECIES_GIMMIGHOUL_ROAMING] = // Runaway Coin
    {
        .name = _("Gimmighoul-R"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_RATTLED,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_TRICK, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_SUBSTITUTE}
    },

    [SPECIES_GHOLDENGO] = // Thunder Wave (Steel)
    {
        .name = _("Gholdengo"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_GOOD_AS_GOLD,
        .nature = NATURE_MODEST,
        .evs = {232, 0, 0, 104, 48, 124},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDER_WAVE, MOVE_HEX, MOVE_MAKE_IT_RAIN, MOVE_RECOVER}
    },

    [SPECIES_WO_CHIEN] = // Specially Defensive
    {
        .name = _("Wo-Chien"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_TABLETS_OF_RUIN,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_FOUL_PLAY, MOVE_LEECH_SEED, MOVE_PROTECT}
    },

    [SPECIES_CHIEN_PAO] = // Choice Band
    {
        .name = _("Chien-Pao"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SWORD_OF_RUIN,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_THROAT_CHOP, MOVE_GIGA_IMPACT}
    },

    [SPECIES_TING_LU] = // Special Wall
    {
        .name = _("Ting-Lu"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_VESSEL_OF_RUIN,
        .nature = NATURE_CAREFUL,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_RUINATION, MOVE_SPIKES, MOVE_WHIRLWIND}
    },

    [SPECIES_CHI_YU] = // Choice Item Attacker
    {
        .name = _("Chi-Yu"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_BEADS_OF_RUIN,
        .nature = NATURE_MODEST,
        .evs = {68, 0, 84, 236, 116, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_OVERHEAT, MOVE_SNARL}
    },

    [SPECIES_ROARING_MOON] = // Choice Scarf (Dragon)
    {
        .name = _("Roaring Moon"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PROTOSYNTHESIS,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_OUTRAGE, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_U_TURN}
    },

    [SPECIES_IRON_VALIANT] = // Mixed
    {
        .name = _("Iron Valiant"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .nature = NATURE_NAIVE,
        .evs = {0, 4, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ENCORE}
    },

    [SPECIES_KORAIDON] = // Clear Amulet
    {
        .name = _("Koraidon"),
        .item = ITEM_CLEAR_AMULET,
        .ability = ABILITY_ORICHALCUM_PULSE,
        .nature = NATURE_JOLLY,
        .evs = {236, 196, 4, 68, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COLLISION_COURSE, MOVE_FLARE_BLITZ, MOVE_FLAME_CHARGE, MOVE_PROTECT}
    },

    [SPECIES_MIRAIDON] = // Choice Specs
    {
        .name = _("Miraidon"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_HADRON_ENGINE,
        .nature = NATURE_MODEST,
        .evs = {44, 0, 4, 204, 244, 12},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ELECTRO_DRIFT, MOVE_DRACO_METEOR, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM}
    },

    [SPECIES_WALKING_WAKE] = // Choice Specs (Dragon)
    {
        .name = _("Walking Wake"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PROTOSYNTHESIS,
        .nature = NATURE_TIMID,
        .evs = {12, 0, 0, 252, 244, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_HYDRO_PUMP, MOVE_SCALD, MOVE_FLAMETHROWER}
    },

    [SPECIES_IRON_LEAVES] = // Swords Dance
    {
        .name = _("Iron Leaves"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .nature = NATURE_JOLLY,
        .evs = {96, 160, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_PSYBLADE, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_DIPPLIN] = // Growth
    {
        .name = _("Dipplin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STICKY_HOLD,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 252, 0, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_RECOVER, MOVE_DRAGON_TAIL, MOVE_GIGA_DRAIN}
    },

    [SPECIES_POLTCHAGEIST_COUNTERFEIT] = // Cheap Brew
    {
        .name = _("Poltchageist"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_HOSPITALITY,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STRENGTH_SAP, MOVE_GIGA_DRAIN, MOVE_WILL_O_WISP, MOVE_PROTECT}
    },

    [SPECIES_SINISTCHA_UNREMARKABLE] = // Plain Brew
    {
        .name = _("Sinistcha-U"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_HEATPROOF,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_STRENGTH_SAP}
    },

    [SPECIES_OKIDOGI] = // Assault Vest
    {
        .name = _("Okidogi"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_TOXIC_CHAIN,
        .nature = NATURE_ADAMANT,
        .evs = {240, 252, 0, 16, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH}
    },

    [SPECIES_MUNKIDORI] = // Offensive Pivot
    {
        .name = _("Munkidori"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TOXIC_CHAIN,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_WAVE, MOVE_PSYSHOCK, MOVE_GRASS_KNOT, MOVE_U_TURN}
    },

    [SPECIES_FEZANDIPITI] = // Fast Calm Mind
    {
        .name = _("Fezandpiti"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TOXIC_CHAIN,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 56, 200, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_ROOST, MOVE_U_TURN}
    },

    [SPECIES_OGERPON_TEAL] = // Pivot
    {
        .name = _("Ogerpon"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_IVY_CUDGEL, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_STOMPING_TANTRUM}
    },

    [SPECIES_OGERPON_CORNERSTONE] = // Swords Dance
    {
        .name = _("Ogerpon-C"),
        .item = ITEM_CORNERSTONE_MASK,
        .ability = ABILITY_STURDY,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_IVY_CUDGEL, MOVE_POWER_WHIP, MOVE_STOMPING_TANTRUM}
    },

    [SPECIES_OGERPON_HEARTHFLAME] = // Swords Dance
    {
        .name = _("Ogerpon-H"),
        .item = ITEM_HEARTHFLAME_MASK,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_IVY_CUDGEL, MOVE_POWER_WHIP, MOVE_TRAILBLAZE}
    },

    [SPECIES_OGERPON_WELLSPRING] = // Swords Dance
    {
        .name = _("Ogerpon-W"),
        .item = ITEM_WELLSPRING_MASK,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_IVY_CUDGEL, MOVE_POWER_WHIP, MOVE_PLAY_ROUGH}
    },

    [SPECIES_ARCHALUDON] = // Bulky Setup Sweeper
    {
        .name = _("Archaludon"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 4, 20, 36, 196},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ELECTRO_SHOT, MOVE_BODY_PRESS, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE}
    },

    [SPECIES_HYDRAPPLE] = // Nasty Plot
    {
        .name = _("Hydrapple"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 92, 0, 164, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_DRACO_METEOR, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER}
    },

    [SPECIES_GOUGING_FIRE] = // Offensive Support
    {
        .name = _("Gouging Fire"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_PROTOSYNTHESIS,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 20, 164, 0, 68},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAT_CRASH, MOVE_BURNING_BULWARK, MOVE_BREAKING_SWIPE, MOVE_DRAGON_DANCE}
    },

    [SPECIES_RAGING_BOLT] = // Calm Mind
    {
        .name = _("Raging Bolt"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_PROTOSYNTHESIS,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 20, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_THUNDERCLAP, MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT}
    },

    [SPECIES_IRON_BOULDER] = // Swords Dance
    {
        .name = _("Iron Boulder"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_MIGHTY_CLEAVE, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_IRON_CROWN] = // Assault Vest
    {
        .name = _("Iron Crown"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_QUARK_DRIVE,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 20, 31, 31, 31, 31},
        .moves = {MOVE_TACHYON_CUTTER, MOVE_FUTURE_SIGHT, MOVE_FOCUS_BLAST, MOVE_VOLT_SWITCH}
    },

    [SPECIES_TERAPAGOS_NORMAL] = // Dormant Shell
    {
        .name = _("Terapagos"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_TERA_SHELL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_RECOVER, MOVE_CALM_MIND, MOVE_EARTH_POWER, MOVE_TERA_BLAST}
    },

    [SPECIES_PECHARUNT] = // Pivot
    {
        .name = _("Pecharunt"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_POISON_PUPPETEER,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 4, 252, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MALIGNANT_CHAIN, MOVE_HEX, MOVE_PARTING_SHOT, MOVE_RECOVER}
    }
};
