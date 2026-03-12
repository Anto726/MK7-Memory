#ifndef VERSIONS_H
#define VERSIONS_H

#define VERSION_CHN_DLP       0
#define VERSION_CHN_REV1      1
#define VERSION_EUR_DLP       2
#define VERSION_EUR_KIOSK     3
#define VERSION_EUR_REV0      4
#define VERSION_EUR_REV0_V11  5
#define VERSION_EUR_REV1      6
#define VERSION_EUR_REV2      7
#define VERSION_JPN_DLP       8
#define VERSION_JPN_KIOSK     9
#define VERSION_JPN_REV0      10
#define VERSION_JPN_REV0_V11  11
#define VERSION_JPN_REV1      12
#define VERSION_JPN_REV2      13
#define VERSION_KOR_DLP       14
#define VERSION_KOR_REV1      15
#define VERSION_KOR_REV2      16
#define VERSION_TWN_DLP       17
#define VERSION_TWN_REV1      18
#define VERSION_TWN_REV2      19
#define VERSION_USA_DLP       20
#define VERSION_USA_KIOSK     21
#define VERSION_USA_REV0      22
#define VERSION_USA_REV0_V11  23
#define VERSION_USA_REV1      24
#define VERSION_USA_REV2      25
#define VERSION_E3_2010       26

////// Regions ////////
// Europe
#if GAME_VERSION == VERSION_EUR_DLP      || \
    GAME_VERSION == VERSION_EUR_KIOSK    || \
    GAME_VERSION == VERSION_EUR_REV0     || \
    GAME_VERSION == VERSION_EUR_REV0_V11 || \
    GAME_VERSION == VERSION_EUR_REV1     || \
    GAME_VERSION == VERSION_EUR_REV2
#define ALL_EUR 1
#else
#define ALL_EUR 0
#endif

// Americas
#if GAME_VERSION == VERSION_USA_DLP      || \
    GAME_VERSION == VERSION_USA_KIOSK    || \
    GAME_VERSION == VERSION_USA_REV0     || \
    GAME_VERSION == VERSION_USA_REV0_V11 || \
    GAME_VERSION == VERSION_USA_REV1     || \
    GAME_VERSION == VERSION_USA_REV2
#define ALL_USA 1
#else
#define ALL_USA 0
#endif

// Japan
#if GAME_VERSION == VERSION_JPN_DLP      || \
    GAME_VERSION == VERSION_JPN_KIOSK    || \
    GAME_VERSION == VERSION_JPN_REV0     || \
    GAME_VERSION == VERSION_JPN_REV0_V11 || \
    GAME_VERSION == VERSION_JPN_REV1     || \
    GAME_VERSION == VERSION_JPN_REV2
#define ALL_JPN 1
#else
#define ALL_JPN 0
#endif

// Korea
#if GAME_VERSION == VERSION_KOR_DLP      || \
    GAME_VERSION == VERSION_KOR_REV1     || \
    GAME_VERSION == VERSION_KOR_REV2
#define ALL_KOR 1
#else
#define ALL_KOR 0
#endif

// Taiwan
#if GAME_VERSION == VERSION_TWN_DLP      || \
    GAME_VERSION == VERSION_TWN_REV1     || \
    GAME_VERSION == VERSION_TWN_REV2
#define ALL_TWN 1
#else
#define ALL_TWN 0
#endif

// China
#if GAME_VERSION == VERSION_CHN_DLP      || \
    GAME_VERSION == VERSION_CHN_REV1
#define ALL_CHN 1
#else
#define ALL_CHN 0
#endif

////// Revisions ////////
// Download Play
#if GAME_VERSION == VERSION_CHN_DLP || \
    GAME_VERSION == VERSION_EUR_DLP || \
    GAME_VERSION == VERSION_JPN_DLP || \
    GAME_VERSION == VERSION_KOR_DLP || \
    GAME_VERSION == VERSION_TWN_DLP || \
    GAME_VERSION == VERSION_USA_DLP
#define ALL_DLP 1
#else
#define ALL_DLP 0
#endif

// Kiosk Demo
#if GAME_VERSION == VERSION_EUR_KIOSK || \
    GAME_VERSION == VERSION_JPN_KIOSK || \
    GAME_VERSION == VERSION_USA_KIOSK
#define ALL_KIOSK 1
#else
#define ALL_KIOSK 0
#endif

// v1.0
#if GAME_VERSION == VERSION_EUR_REV0 || \
    GAME_VERSION == VERSION_JPN_REV0 || \
    GAME_VERSION == VERSION_USA_REV0
#define ALL_V10 1
#else
#define ALL_V10 0
#endif

// v1.1
// v1.0 + v1.1 patch
#if GAME_VERSION == VERSION_EUR_REV0_V11 || \
    GAME_VERSION == VERSION_JPN_REV0_V11 || \
    GAME_VERSION == VERSION_USA_REV0_V11
#define ALL_REV0_V11 1
#else
#define ALL_REV0_V11 0
#endif

// v1.1 patch preinstalled
#if GAME_VERSION == VERSION_EUR_REV1     || \
    GAME_VERSION == VERSION_JPN_REV1     || \
    GAME_VERSION == VERSION_USA_REV1     || \
    GAME_VERSION == VERSION_CHN_REV1     || \
    GAME_VERSION == VERSION_KOR_REV1     || \
    GAME_VERSION == VERSION_TWN_REV1
#define ALL_REV1 1
#else
#define ALL_REV1 0
#endif

#if ALL_REV0_V11 || ALL_REV1
#define ALL_V11 1
#else
#define ALL_V11 0
#endif

// v1.2
#if GAME_VERSION == VERSION_EUR_REV2 || \
    GAME_VERSION == VERSION_JPN_REV2 || \
    GAME_VERSION == VERSION_KOR_REV2 || \
    GAME_VERSION == VERSION_TWN_REV2 || \
    GAME_VERSION == VERSION_USA_REV2
#define ALL_V12 1
#else
#define ALL_V12 0
#endif

#if ALL_V10 || ALL_V11 || ALL_V12
#define ALL_RETAIL 1
#else
#define ALL_RETAIL 0
#endif

#endif
