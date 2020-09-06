#ifndef ULDIR_H
#define ULDIR_H

uint32 const EncounterCount = 8;

enum EncounterData
{
    DATA_BOSS_TALOC = 1,
    DATA_BOSS_MOTHER,
    DATA_BOSS_DEVOURER,
    DATA_BOSS_ZEKVOZ,
    DATA_BOSS_VECTIS,
    DATA_BOSS_ZUL,
    DATA_BOSS_MYTHRAX,
    DATA_BOSS_GHUUN,

    DATA_MAX_ENCOUNTERS = 8,
};

enum CreatureIds
{
    BOSS_TALOC = 137119,
    BOSS_MOTHER = 140853,
    BOSS_DEVOURER = 133298,
    BOSS_ZEKVOZ = 134445,
    BOSS_VECTIS = 134442,
    BOSS_ZUL = 138967,
    BOSS_MYTHRAX = 136383,
    BOSS_GHUUN = 132998,
    NPC_RAMNANT_OF_CORRUPTION = 136315,
    NPC_VOLATILE_DROPLET = 138530,
    NPC_COALESCED_BLOOD = 138959,
    NPC_PURIFYING_FLAME = 136289,
    NPC_PURIFYING_FLAME_2 = 136325,
    NPC_WIND_TUNNEL = 136322,
    NPC_CHAMBER_NUMBER_1 = 136429,
    NPC_CHAMBER_NUMBER_2 = 137022,
    NPC_CHAMBER_NUMBER_3 = 137023,
    NPC_DEFENSE_GRID = 136298,
    NPC_CORRUPTION_CORPUSCLE = 133492,
};

enum Gameobjects
{
    GO_TALOC_ELEVATOR = 287464, //state 25
    GO_MOTHER_CACHE = 291079,
};

#endif // ULDIR_H
