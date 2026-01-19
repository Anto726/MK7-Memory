#pragma once

#include "types.hpp"

BEGIN_GLOBAL_NAMESPACE

    enum LMS_MessageID : u32
    {
        INVALID = 0,

        /// Common
        Driver_Mario = 1000,
        Driver_Luigi = 1001,
        Driver_Peach = 1002,
        Driver_Yoshi = 1003,
        Driver_Bowser = 1004,
        Driver_DonkeyKong = 1005,
        Driver_Toad = 1006,
        Driver_KoopaTroopa = 1007,
        Driver_Wario = 1008,
        Driver_Daisy = 1009,
        Driver_Lakitu = 1010,
        Driver_Rosalina = 1011,
        Driver_Wiggler = 1012,
        Driver_HoneyQueen = 1013,
        Driver_MetalMario = 1014,
        Driver_Mii = 1015,
        Driver_ShyGuy = 1016,

        Item_Mushroom = 1018,
        Item_FireFlower = 1019,
        Item_SuperStar = 1020,
        Item_GoldenMushroom = 1021,
        Item_GreenShell = 1022,
        Item_Banana = 1023,
        Item_SuperLeaf = 1024,
        Item_Lightning = 1025,
        Item_RedShell = 1026,
        Item_Bobomb = 1027,
        Item_SpinyShell = 1028,
        Item_Blooper = 1029,
        Item_BulletBill = 1030,
        Item_LuckySeven = 1031,
        Item_DoubleMushrooms = 1032,
        Item_TripleMushrooms = 1033,
        Item_TripleGreenShells = 1034,
        Item_TripleBananas = 1035,
        Item_TripleRedShells = 1036,

        Flag = 1043,
        Balloons = 1044,
        Coin = 1045,

        SteeringWheel = 1046,
        GoldenSteeringWheel = 1047,

        Driver_Mario_short = 1050,
        Driver_Luigi_short = 1051,
        Driver_Peach_short = 1052,
        Driver_Yoshi_short = 1053,
        Driver_Bowser_short = 1054,
        Driver_DonkeyKong_short = 1055,
        Driver_Toad_short = 1056,
        Driver_Koopa_short = 1057,
        Driver_Wario_short = 1058,
        Driver_Daisy_short = 1059,
        Driver_Lakitu_short = 1060,
        Driver_Rosalina_short = 1061,
        Driver_Wiggler_short = 1062,
        Driver_HoneyQueen_short = 1063,
        Driver_MetalMario_short = 1064,
        Driver_Mii_short = 1065,
        Driver_ShyGuy_short = 1066,

        Body_Standard = 1100,
        Body_BoltBuggy = 1101,
        Body_Egg1 = 1102,
        Body_TinyTug = 1103,
        Body_Cloud9 = 1104,
        Body_Zucchini = 1105,
        Body_BDasher = 1106,
        Body_Bruiser = 1107,
        Body_BumbleV = 1108,
        Body_KoopaClown = 1109,
        Body_PipeFrame = 1110,
        Body_BlueSeven = 1111,
        Body_BirthdayGirl = 1112,
        Body_CactX = 1113,
        Body_BarrelTrain = 1114,
        Body_SodaJet = 1115,
        Body_GoldStandard = 1116,

        Tire_Standard = 1200,
        Tire_Roller = 1201,
        Tire_Monster = 1202,
        Tire_Slick = 1203,
        Tire_Slim = 1204,
        Tire_Sponge = 1205,
        Tire_RedMonster = 1206,
        Tire_Mushroom = 1207,
        Tire_Wood = 1208,
        Tire_GoldTires = 1209,

        Wing_SuperGlider = 1300,
        Wing_Paraglider = 1301,
        Wing_PeachParasol = 1302,
        Wing_FlowerGlider = 1303,
        Wing_Swooper = 1304,
        Wing_BeastGlider = 1305,
        Wing_GoldGlider = 1306,

        Cups_begin = 1500,
        MushroomCup = Cups_begin,
        FlowerCup = 1501,
        StarCup = 1502,
        SpecialCup = 1503,
        ShellCup = 1504,
        BananaCup = 1505,
        LeafCup = 1506,
        LightningCup = 1507,
        Cups_end = LightningCup + 1,

        Course_MarioCircuit = 1600,
        Course_DaisyHills = 1601,
        Course_CheepCheepLagoon = 1602,
        Course_RockRockMountain = 1603,
        Course_ToadCircuit = 1604,
        Course_ShyGuyBazaar = 1605,
        Course_WuhuLoop = 1606,
        Course_WarioShipyard = 1607,
        Course_PiranhaPlantSlide = 1608,
        Course_MusicPark = 1609,
        Course_NeoBowserCity = 1610,
        Course_MakaWuhu = 1611,
        Course_DKJungle = 1612,
        Course_RosalinasIceWorld = 1613,
        Course_BowsersCastle = 1614,
        Course_RainbowRoad = 1615,

        Course_SNESMarioCircuit2 = 1700,
        Course_GBABowserCastle1 = 1701,
        Course_N64LuigiRaceway = 1702,
        Course_N64KalimariDesert = 1703,
        Course_DSLuigisMansion = 1704,
        Course_DSWaluigiPinball = 1705,
        Course_DSDKPass = 1706,
        Course_DSAirshipFortress = 1707,
        Course_WiiCoconutMall = 1708,
        Course_WiiKoopaCape = 1709,
        Course_WiiMapleTreeway = 1710,
        Course_WiiMushroomGorge = 1711,
        Course_GCNDinoDinoJungle = 1712,
        Course_GCNDaisyCruiser = 1713,
        Course_N64KoopaBeach = 1714,
        Course_SNESRainbowRoad = 1715,

        Course_HoneybeeHive = 1800,
        Course_SherbetRink = 1801,
        Course_WuhuTown = 1802,
        Course_GBABattleCourse1 = 1803,
        Course_N64BigDonut = 1804,
        Course_DSPalmShore = 1805,

        Course_Random = 1806,

        Title1_begin = 1900,
        Title1_ShellShark = Title1_begin,
        
        Title2_begin = 1950,

        /// Menu
        MarioKart7 = 2000,
        OK = 2001,
        Yes = 2003,
        No = 2004,
        Cancel = 2005,
        Next = 2006,

        Race = 2205,
        Battle = 2206,

        Mirror = 2223,

        Off = 2314,
        On = 2315,

        Random = 2322,
        InOrder = 2323,

        Mode = 2380,

        StreetPassTags = 5993,

        GoodGame = 6215,

        Items = 6328,
        Characters = 6329,
        Frames = 6330,
        Tires = 6331,
        Gliders = 6332,
        Other = 6333,

        VR = 6405,
        Wins = 6406,
        Losses = 6407,
        CoinsCollected = 6408,

        GrandPrix = 6411,

        Activated = 6441,
        Deactivated = 6442,

        Region = 6460,
        Display = 6461,
        Hide = 6462,

        Show = 6471,

        Use = 6481,
        DontUse = 6482,

        /// Race
        Race_begin = 9000,

        Race_end = 10000,

        /// Region
        Region_region = 50000,

        Region_begin = 50100,

        Japan = 50101,

        VaticanCity = 68501,

        Region_end = 68502,
    };

END_GLOBAL_NAMESPACE