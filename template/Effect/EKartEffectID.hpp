#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Effect)
{
    enum class EKartEffectID : u32
    {
        cdn_kart_driftsmoke=0,
        cdn_kart_driftsmoke_fp=1,
        cdu_kart_driftblue_l_trig=2,
        cdu_kart_driftblue_r_trig=3,
        cdu_kart_driftblue_l_trig_fp=4,
        cdu_kart_driftblue_r_trig_fp=5,
        cdu_kart_driftblue_l_en=6,
        cdu_kart_driftblue_r_en=7,
        cdu_kart_driftblue_l_fp=8,
        cdu_kart_driftblue_r_fp=9,
        cdu_kart_driftblue_tail=10,
        cdu_kart_driftred_l_trig=11,
        cdu_kart_driftred_r_trig=12,
        cdu_kart_driftred_l_trig_fp=13,
        cdu_kart_driftred_r_trig_fp=14,
        cdu_kart_driftred_l=15,
        cdu_kart_driftred_r=16,
        cdu_kart_driftred_l_fp=17,
        cdu_kart_driftred_r_fp=18,
        cdu_kart_driftred_tail=19,
        cdu_kart_gassmoke=20,
        cdu_kart_gassmoke_2=21,
        cdu_kart_gassmoke_3=22,
        cdu_kart_gassmoke_4=23,
        cdu_kart_miniturbo_en=24,
        cdu_kart_miniturbo_en_2=25,
        cdu_kart_miniturbo_en_3=26,
        cdu_kart_miniturbo_en_4=27,
        cdn_kart_dirtsmoke=65,
        cdu_kart_dirtsmoke_w=66,
        cdn_kart_petal01=67,
        cdu_kart_movingwater=81,
        cdu_kart_water_outpota=96,
        cdu_kart_jgm_water=100,
        cdu_kart_startmiss=101,
        cdu_kart_jmpact1=102,
        cdu_kart_jmpact1_fp=103,
        cdu_kart_jmpact2=104,
        cdu_kart_jmpact2_fp=105,
        cdu_coin_hit=106,
        cdu_kart_coin=107
    };
}