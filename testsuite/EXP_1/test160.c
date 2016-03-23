
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x71 = 3U;
static uint8_t x72 = 7U;
int8_t x107 = 0;
static uint16_t x108 = 4U;
static int64_t x129 = -1LL;
volatile int16_t x139 = INT16_MAX;
int32_t x142 = 278000043;
volatile int8_t x155 = INT8_MIN;
int32_t x225 = 18525326;
volatile int16_t x226 = INT16_MAX;
int16_t x227 = 450;
static int8_t x234 = -1;
int8_t x236 = 4;
volatile int16_t x258 = -1;
uint16_t x287 = UINT16_MAX;
uint32_t x385 = 36568684U;
static volatile uint32_t x387 = UINT32_MAX;
uint16_t x542 = 165U;
static int64_t t17 = 53953957LL;
uint8_t x588 = 2U;
volatile uint32_t t18 = 51U;
static int8_t x729 = -1;
static uint64_t t25 = 879107LLU;
int8_t x865 = INT8_MIN;
uint16_t x895 = 3162U;
int16_t x905 = -1449;
uint32_t x906 = 59062U;
static volatile uint8_t x908 = 23U;
int16_t x1115 = 13982;
uint64_t t37 = 1885702287758975LLU;
uint32_t x1241 = 947U;
uint64_t x1254 = 65694675408108LLU;
int8_t x1332 = 0;
uint32_t x1449 = 565125848U;
static int64_t x1452 = 1LL;
int64_t t43 = 1955489334866LL;
static volatile int32_t x1493 = INT32_MIN;
int64_t x1521 = INT64_MAX;
static volatile int64_t t46 = 62358LL;
int64_t x1555 = -707161178887LL;
static uint16_t x1556 = 0U;
volatile uint32_t x1678 = UINT32_MAX;
static volatile int32_t x1746 = 743212162;
int32_t x1747 = -233;
static int8_t x1748 = 1;
int32_t x1755 = INT32_MIN;
static uint32_t x1756 = 15U;
uint64_t t51 = 4988889LLU;
int8_t x1778 = -1;
uint8_t x1780 = 2U;
uint8_t x1835 = 9U;
uint64_t x1981 = UINT64_MAX;
volatile int32_t x1983 = INT32_MAX;
uint32_t x2027 = 11669U;
uint32_t t57 = 16705014U;
uint8_t x2088 = 3U;
static volatile int32_t t58 = -251;
static int64_t x2158 = -1LL;
int16_t x2160 = 5;
static volatile uint64_t t59 = 596739364378LLU;
int8_t x2204 = 1;
volatile int8_t x2216 = 2;
volatile uint64_t t64 = 442LLU;
int8_t x2465 = INT8_MIN;
int32_t t65 = 310844499;
int64_t x2485 = INT64_MIN;
uint64_t x2725 = 9038308512278LLU;
volatile int32_t x2735 = -1;
int32_t t70 = 1;
static int16_t x2763 = INT16_MAX;
volatile uint64_t x2770 = 86129LLU;
volatile uint64_t t72 = 2419LLU;
volatile uint32_t t74 = 2U;
uint64_t t75 = 510LLU;
int16_t x3037 = -1;
int32_t x3040 = 21;
volatile int64_t t76 = 6454288LL;
volatile uint16_t x3292 = 11U;
uint32_t t78 = 59U;
int32_t x3326 = 3587;
uint8_t x3328 = 0U;
int16_t x3341 = INT16_MIN;
uint64_t x3342 = 1689690006482LLU;
volatile uint16_t x3413 = UINT16_MAX;
static int16_t x3496 = 2;
int32_t x3497 = INT32_MIN;
volatile int64_t t85 = -18739175LL;
volatile uint64_t x3775 = 1608514473611742LLU;
uint8_t x3776 = 14U;
volatile uint64_t t88 = 1LLU;
int8_t x3798 = INT8_MIN;
static uint16_t x3817 = UINT16_MAX;
int32_t t90 = 0;
int64_t t91 = -411LL;
static uint64_t t92 = 7263LLU;
static uint32_t t93 = 25U;
int64_t x4165 = -1LL;
uint16_t x4168 = 4U;
int64_t x4493 = -1LL;
static uint16_t x4499 = UINT16_MAX;
uint8_t x4500 = 2U;
int32_t t100 = -3938;
int32_t x4522 = INT32_MIN;
int16_t x4523 = 2;
volatile int32_t t101 = -260127;
int16_t x4599 = INT16_MAX;
uint16_t x4600 = 9U;
volatile uint64_t x4610 = UINT64_MAX;
static int16_t x4684 = 1;
uint64_t x4750 = 46758LLU;
int8_t x4758 = INT8_MAX;
volatile int64_t x4759 = -1LL;
volatile int64_t t111 = -1422LL;
volatile uint64_t x4793 = UINT64_MAX;
static uint8_t x4796 = 6U;
uint32_t t114 = 225158444U;
uint32_t t115 = 36140099U;
volatile uint8_t x5036 = 0U;
static int16_t x5055 = -38;
int16_t x5057 = -7884;
static uint64_t x5060 = 29LLU;
uint64_t x5169 = 419582124694LLU;
volatile int16_t x5171 = -1900;
volatile int64_t t122 = 21935383LL;
int32_t x5321 = INT32_MAX;
static int16_t x5381 = 305;
int8_t x5382 = 8;
int32_t t125 = -3193924;
uint64_t t126 = 1269593573662467LLU;
int32_t x5433 = INT32_MIN;
uint32_t x5434 = UINT32_MAX;
uint32_t t127 = 2U;
int8_t x5464 = 0;
volatile uint32_t t128 = 9U;
static uint8_t x5500 = 0U;
volatile uint64_t t129 = 65595571LLU;
int16_t x5543 = INT16_MIN;
volatile uint64_t x5547 = 192530005LLU;
int32_t t133 = -129700556;
int64_t x5658 = 6304399817LL;
uint32_t x5659 = UINT32_MAX;
int16_t x5680 = 3;
volatile int16_t x5695 = -7;
int8_t x5738 = INT8_MAX;
int8_t x5807 = INT8_MIN;
uint64_t t141 = 96071270750LLU;
int32_t x5866 = -1;
volatile int8_t x5867 = -18;
static int32_t x6002 = -693450539;
static int32_t x6014 = 864;
int32_t x6086 = 129023;
uint64_t x6191 = UINT64_MAX;
uint16_t x6194 = 382U;
volatile uint64_t t150 = 75LLU;
int64_t x6215 = -987242LL;
static int8_t x6369 = INT8_MIN;
int64_t x6370 = -1LL;
int64_t t152 = -178387073LL;
uint64_t x6408 = 3LLU;
int32_t t157 = -455339491;
int32_t x6646 = INT32_MAX;
uint64_t x6648 = 9LLU;
static volatile uint8_t x6660 = 0U;
static int64_t x6705 = INT64_MIN;
uint16_t x6708 = 0U;
uint32_t x6753 = UINT32_MAX;
volatile uint64_t x6755 = 50538576771LLU;
volatile int8_t x6805 = INT8_MIN;
uint64_t x6807 = 1695LLU;
int32_t x6810 = -24486834;
int16_t x6830 = INT16_MIN;
uint64_t t166 = 80472985822178583LLU;
static int8_t x6840 = 2;
uint8_t x6876 = 14U;
uint8_t x6971 = 23U;
int8_t x6972 = 16;
uint8_t x6990 = 113U;
int64_t x6991 = INT64_MIN;
uint8_t x7035 = 1U;
volatile uint64_t t174 = 573407686322322625LLU;
int64_t x7051 = 1596LL;
static int64_t t175 = 472372110774854419LL;
volatile int8_t x7093 = INT8_MIN;
uint64_t x7094 = UINT64_MAX;
static int8_t x7096 = 2;
static volatile uint64_t t176 = 99LLU;
int8_t x7199 = -1;
uint8_t x7217 = 1U;
int8_t x7397 = INT8_MIN;
uint64_t x7398 = 403603879189LLU;
int16_t x7446 = -1;
uint8_t x7447 = 12U;
volatile int64_t x7466 = -1LL;
volatile uint8_t x7468 = 18U;
static uint64_t t183 = 863085842538LLU;
uint32_t x7470 = 1187U;
volatile uint64_t x7471 = 280154217292824LLU;
static int8_t x7543 = INT8_MAX;
volatile uint64_t x7610 = 696100632404LLU;
volatile uint64_t t189 = 129048273744LLU;
volatile int64_t x7761 = -10056718206773950LL;
volatile int64_t t190 = 2039864LL;
volatile uint64_t t193 = 2437302LLU;
int16_t x7962 = -44;
static uint64_t x8082 = UINT64_MAX;
uint32_t x8133 = 167863187U;
int16_t x8134 = INT16_MAX;
uint16_t x8135 = UINT16_MAX;
static int64_t t199 = 7LL;


void f0(void) {
    	static uint64_t x21 = 0LLU;
	volatile uint64_t x22 = 90LLU;
	uint16_t x23 = 125U;
	int16_t x24 = 1;
	static uint64_t t0 = 369499LLU;

    t0 = (((x21+x22)&x23)<<x24);

    if (t0 != 176LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x69 = 42797143019133LLU;
	uint8_t x70 = 23U;
	uint64_t t1 = 8373600749639688619LLU;

    t1 = (((x69+x70)&x71)<<x72);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x105 = INT8_MAX;
	int32_t x106 = -1;
	volatile int32_t t2 = -45902782;

    t2 = (((x105+x106)&x107)<<x108);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x117 = 100769202503328LLU;
	int32_t x118 = INT32_MIN;
	int64_t x119 = INT64_MIN;
	uint8_t x120 = 0U;
	volatile uint64_t t3 = 69451374791LLU;

    t3 = (((x117+x118)&x119)<<x120);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x130 = 6;
	uint8_t x131 = UINT8_MAX;
	uint64_t x132 = 0LLU;
	int64_t t4 = 25961773574548LL;

    t4 = (((x129+x130)&x131)<<x132);

    if (t4 != 5LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x137 = INT8_MIN;
	uint64_t x138 = 4549174168488LLU;
	uint16_t x140 = 39U;
	volatile uint64_t t5 = 349773991225LLU;

    t5 = (((x137+x138)&x139)<<x140);

    if (t5 != 1570102604464128LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x141 = 221U;
	static int16_t x143 = INT16_MIN;
	int64_t x144 = 0LL;
	static volatile int32_t t6 = -27691064;

    t6 = (((x141+x142)&x143)<<x144);

    if (t6 != 277970944) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x153 = 48;
	volatile uint8_t x154 = 7U;
	volatile int16_t x156 = 1;
	static volatile int32_t t7 = 418117;

    t7 = (((x153+x154)&x155)<<x156);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x228 = 1U;
	int32_t t8 = -123;

    t8 = (((x225+x226)&x227)<<x228);

    if (t8 != 256) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x233 = INT32_MAX;
	static volatile int8_t x235 = INT8_MAX;
	volatile int32_t t9 = 3;

    t9 = (((x233+x234)&x235)<<x236);

    if (t9 != 2016) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x241 = INT16_MIN;
	uint32_t x242 = UINT32_MAX;
	int64_t x243 = -926910LL;
	int32_t x244 = 6;
	int64_t t10 = -48107451LL;

    t10 = (((x241+x242)&x243)<<x244);

    if (t10 != 274816487552LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x253 = 111U;
	uint8_t x254 = UINT8_MAX;
	int32_t x255 = INT32_MIN;
	static uint8_t x256 = 3U;
	int32_t t11 = -266261751;

    t11 = (((x253+x254)&x255)<<x256);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x257 = 2200782283346222530LL;
	static uint8_t x259 = 12U;
	int16_t x260 = 8;
	volatile int64_t t12 = 4677685LL;

    t12 = (((x257+x258)&x259)<<x260);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x285 = -1;
	uint8_t x286 = 5U;
	static int8_t x288 = 11;
	volatile int32_t t13 = 32320629;

    t13 = (((x285+x286)&x287)<<x288);

    if (t13 != 8192) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x386 = -1;
	int32_t x388 = 25;
	volatile uint32_t t14 = 52626376U;

    t14 = (((x385+x386)&x387)<<x388);

    if (t14 != 3590324224U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x461 = -1;
	volatile uint8_t x462 = 0U;
	static uint32_t x463 = UINT32_MAX;
	uint8_t x464 = 4U;
	static uint32_t t15 = 364U;

    t15 = (((x461+x462)&x463)<<x464);

    if (t15 != 4294967280U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x505 = 95;
	int16_t x506 = 280;
	volatile int32_t x507 = INT32_MIN;
	static uint8_t x508 = 8U;
	static int32_t t16 = -77706;

    t16 = (((x505+x506)&x507)<<x508);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x541 = 11630678370035LL;
	int8_t x543 = INT8_MIN;
	volatile uint8_t x544 = 12U;

    t17 = (((x541+x542)&x543)<<x544);

    if (t17 != 47639258604240896LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x585 = INT16_MIN;
	volatile uint32_t x586 = 1U;
	int16_t x587 = -1;

    t18 = (((x585+x586)&x587)<<x588);

    if (t18 != 4294836228U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x621 = 15260198416810629LLU;
	uint64_t x622 = UINT64_MAX;
	uint64_t x623 = 122347226795244LLU;
	static int8_t x624 = 25;
	uint64_t t19 = 97LLU;

    t19 = (((x621+x622)&x623)<<x624);

    if (t19 != 470595405873152LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x645 = INT32_MAX;
	static int16_t x646 = INT16_MIN;
	uint16_t x647 = 475U;
	static uint16_t x648 = 4U;
	int32_t t20 = 0;

    t20 = (((x645+x646)&x647)<<x648);

    if (t20 != 7600) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x730 = 7;
	volatile int8_t x731 = INT8_MAX;
	volatile int32_t x732 = 23;
	static volatile int32_t t21 = 373870;

    t21 = (((x729+x730)&x731)<<x732);

    if (t21 != 50331648) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x797 = INT8_MIN;
	int8_t x798 = -51;
	uint32_t x799 = UINT32_MAX;
	uint32_t x800 = 26U;
	uint32_t t22 = 27897U;

    t22 = (((x797+x798)&x799)<<x800);

    if (t22 != 872415232U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x833 = 1909331352746327758LLU;
	int16_t x834 = INT16_MAX;
	int8_t x835 = -1;
	uint32_t x836 = 16U;
	uint64_t t23 = 64440LLU;

    t23 = (((x833+x834)&x835)<<x836);

    if (t23 != 5674481613594755072LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x845 = -1;
	volatile int64_t x846 = -1LL;
	uint16_t x847 = 26369U;
	uint8_t x848 = 18U;
	static volatile int64_t t24 = -9233LL;

    t24 = (((x845+x846)&x847)<<x848);

    if (t24 != 6912212992LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x849 = 334136245058LLU;
	int8_t x850 = INT8_MAX;
	uint16_t x851 = UINT16_MAX;
	static uint32_t x852 = 4U;

    t25 = (((x849+x850)&x851)<<x852);

    if (t25 != 506896LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x866 = INT64_MAX;
	static uint32_t x867 = UINT32_MAX;
	int32_t x868 = 3;
	int64_t t26 = -391LL;

    t26 = (((x865+x866)&x867)<<x868);

    if (t26 != 34359737336LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x893 = INT64_MIN;
	volatile uint8_t x894 = UINT8_MAX;
	static volatile uint32_t x896 = 1U;
	volatile int64_t t27 = 955541091785856295LL;

    t27 = (((x893+x894)&x895)<<x896);

    if (t27 != 180LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x907 = 12;
	uint32_t t28 = 1616423791U;

    t28 = (((x905+x906)&x907)<<x908);

    if (t28 != 100663296U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x953 = -1;
	int16_t x954 = INT16_MAX;
	static int8_t x955 = -1;
	int8_t x956 = 1;
	volatile int32_t t29 = -1380;

    t29 = (((x953+x954)&x955)<<x956);

    if (t29 != 65532) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x1013 = INT64_MAX;
	int8_t x1014 = -2;
	uint64_t x1015 = 1281151LLU;
	volatile uint32_t x1016 = 57U;
	uint64_t t30 = 87LLU;

    t30 = (((x1013+x1014)&x1015)<<x1016);

    if (t30 != 18014398509481984000LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1017 = -1LL;
	int16_t x1018 = INT16_MIN;
	int32_t x1019 = 10109;
	volatile uint8_t x1020 = 21U;
	static volatile int64_t t31 = -31201061489310730LL;

    t31 = (((x1017+x1018)&x1019)<<x1020);

    if (t31 != 21200109568LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1041 = UINT16_MAX;
	static volatile int16_t x1042 = INT16_MAX;
	static volatile uint16_t x1043 = UINT16_MAX;
	volatile int8_t x1044 = 0;
	volatile int32_t t32 = 771347;

    t32 = (((x1041+x1042)&x1043)<<x1044);

    if (t32 != 32766) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x1113 = 1U;
	int16_t x1114 = INT16_MIN;
	static int8_t x1116 = 7;
	int32_t t33 = 89540;

    t33 = (((x1113+x1114)&x1115)<<x1116);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1129 = 4254367;
	uint8_t x1130 = UINT8_MAX;
	uint16_t x1131 = 20U;
	uint16_t x1132 = 1U;
	int32_t t34 = -35;

    t34 = (((x1129+x1130)&x1131)<<x1132);

    if (t34 != 40) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x1153 = 6960U;
	int32_t x1154 = -1;
	volatile uint16_t x1155 = 1U;
	int16_t x1156 = 3;
	uint32_t t35 = 89U;

    t35 = (((x1153+x1154)&x1155)<<x1156);

    if (t35 != 8U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1177 = 47;
	int32_t x1178 = 51;
	volatile int16_t x1179 = INT16_MIN;
	uint64_t x1180 = 1LLU;
	int32_t t36 = 30660;

    t36 = (((x1177+x1178)&x1179)<<x1180);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x1185 = UINT64_MAX;
	int8_t x1186 = -23;
	volatile int32_t x1187 = 26;
	int8_t x1188 = 1;

    t37 = (((x1185+x1186)&x1187)<<x1188);

    if (t37 != 16LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1217 = UINT8_MAX;
	uint64_t x1218 = UINT64_MAX;
	static int8_t x1219 = 1;
	int8_t x1220 = 59;
	static volatile uint64_t t38 = 1328552865065LLU;

    t38 = (((x1217+x1218)&x1219)<<x1220);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x1242 = INT16_MAX;
	int16_t x1243 = INT16_MIN;
	uint64_t x1244 = 22LLU;
	volatile uint32_t t39 = 4U;

    t39 = (((x1241+x1242)&x1243)<<x1244);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x1253 = 12U;
	uint64_t x1255 = UINT64_MAX;
	static uint32_t x1256 = 55U;
	uint64_t t40 = 116054418LLU;

    t40 = (((x1253+x1254)&x1255)<<x1256);

    if (t40 != 8935141660703064064LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x1301 = 1709U;
	int8_t x1302 = INT8_MIN;
	int8_t x1303 = 30;
	int8_t x1304 = 4;
	volatile int32_t t41 = -193267518;

    t41 = (((x1301+x1302)&x1303)<<x1304);

    if (t41 != 192) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1329 = -396404LL;
	int32_t x1330 = -432;
	static volatile uint16_t x1331 = UINT16_MAX;
	volatile int64_t t42 = -49794LL;

    t42 = (((x1329+x1330)&x1331)<<x1332);

    if (t42 != 61916LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x1450 = INT64_MIN;
	uint16_t x1451 = UINT16_MAX;

    t43 = (((x1449+x1450)&x1451)<<x1452);

    if (t43 != 17840LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x1494 = 1755705287U;
	volatile uint64_t x1495 = 307325LLU;
	int8_t x1496 = 0;
	static volatile uint64_t t44 = 511162758589LLU;

    t44 = (((x1493+x1494)&x1495)<<x1496);

    if (t44 != 303173LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x1513 = INT16_MAX;
	int64_t x1514 = 1133863LL;
	volatile int16_t x1515 = -507;
	int8_t x1516 = 6;
	volatile int64_t t45 = -74LL;

    t45 = (((x1513+x1514)&x1515)<<x1516);

    if (t45 != 74645760LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x1522 = -1;
	volatile uint32_t x1523 = 539716230U;
	uint8_t x1524 = 33U;

    t46 = (((x1521+x1522)&x1523)<<x1524);

    if (t46 != 4636127113940828160LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x1553 = INT8_MIN;
	int16_t x1554 = INT16_MAX;
	volatile int64_t t47 = -4167453646601LL;

    t47 = (((x1553+x1554)&x1555)<<x1556);

    if (t47 != 15481LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x1625 = 173081LLU;
	int64_t x1626 = -9931163LL;
	uint32_t x1627 = 12446243U;
	int16_t x1628 = 15;
	static uint64_t t48 = 2412LLU;

    t48 = (((x1625+x1626)&x1627)<<x1628);

    if (t48 != 88131829760LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x1677 = INT8_MIN;
	uint16_t x1679 = 1544U;
	static volatile uint32_t x1680 = 0U;
	uint32_t t49 = 2599904U;

    t49 = (((x1677+x1678)&x1679)<<x1680);

    if (t49 != 1544U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x1745 = 5U;
	int32_t t50 = -51;

    t50 = (((x1745+x1746)&x1747)<<x1748);

    if (t50 != 1486424078) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x1753 = UINT64_MAX;
	volatile int16_t x1754 = 7;

    t51 = (((x1753+x1754)&x1755)<<x1756);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x1777 = UINT32_MAX;
	uint16_t x1779 = UINT16_MAX;
	uint32_t t52 = 3U;

    t52 = (((x1777+x1778)&x1779)<<x1780);

    if (t52 != 262136U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1833 = INT16_MIN;
	int16_t x1834 = 1;
	static uint8_t x1836 = 1U;
	int32_t t53 = -9810867;

    t53 = (((x1833+x1834)&x1835)<<x1836);

    if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x1853 = -1;
	uint8_t x1854 = 83U;
	volatile int32_t x1855 = 141258760;
	static uint8_t x1856 = 4U;
	volatile int32_t t54 = -47768422;

    t54 = (((x1853+x1854)&x1855)<<x1856);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x1897 = 830361052888747811LLU;
	int16_t x1898 = INT16_MAX;
	volatile int8_t x1899 = INT8_MIN;
	volatile int8_t x1900 = 2;
	static uint64_t t55 = 2282LLU;

    t55 = (((x1897+x1898)&x1899)<<x1900);

    if (t55 != 3321444211555122176LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x1982 = INT32_MAX;
	int64_t x1984 = 2LL;
	static volatile uint64_t t56 = 1260910128415880773LLU;

    t56 = (((x1981+x1982)&x1983)<<x1984);

    if (t56 != 8589934584LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x2025 = INT16_MIN;
	volatile int32_t x2026 = -1;
	int8_t x2028 = 1;

    t57 = (((x2025+x2026)&x2027)<<x2028);

    if (t57 != 23338U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x2085 = INT16_MAX;
	static volatile int8_t x2086 = INT8_MAX;
	volatile int16_t x2087 = -70;

    t58 = (((x2085+x2086)&x2087)<<x2088);

    if (t58 != 262608) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x2157 = INT32_MIN;
	static uint64_t x2159 = UINT64_MAX;

    t59 = (((x2157+x2158)&x2159)<<x2160);

    if (t59 != 18446744004990074848LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x2181 = 260U;
	volatile int64_t x2182 = 139877024229897969LL;
	static uint16_t x2183 = 77U;
	volatile int8_t x2184 = 4;
	volatile int64_t t60 = -83273256411LL;

    t60 = (((x2181+x2182)&x2183)<<x2184);

    if (t60 != 1104LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x2201 = -1;
	int64_t x2202 = 464621473LL;
	volatile int32_t x2203 = -1;
	int64_t t61 = 2801LL;

    t61 = (((x2201+x2202)&x2203)<<x2204);

    if (t61 != 929242944LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x2213 = -1LL;
	int16_t x2214 = INT16_MAX;
	static int8_t x2215 = INT8_MAX;
	volatile int64_t t62 = 275238LL;

    t62 = (((x2213+x2214)&x2215)<<x2216);

    if (t62 != 504LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x2217 = 399078524900828580LL;
	int64_t x2218 = 371LL;
	int32_t x2219 = 7;
	uint8_t x2220 = 17U;
	volatile int64_t t63 = -30LL;

    t63 = (((x2217+x2218)&x2219)<<x2220);

    if (t63 != 917504LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x2409 = -1;
	uint64_t x2410 = UINT64_MAX;
	static int8_t x2411 = -1;
	static volatile uint16_t x2412 = 0U;

    t64 = (((x2409+x2410)&x2411)<<x2412);

    if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x2466 = UINT16_MAX;
	volatile int8_t x2467 = INT8_MAX;
	volatile int16_t x2468 = 15;

    t65 = (((x2465+x2466)&x2467)<<x2468);

    if (t65 != 4161536) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x2481 = 24U;
	int64_t x2482 = -7147950768283LL;
	static uint16_t x2483 = 1114U;
	uint32_t x2484 = 52U;
	int64_t t66 = -5631534149LL;

    t66 = (((x2481+x2482)&x2483)<<x2484);

    if (t66 != 5008002785635991552LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x2486 = 59;
	int8_t x2487 = INT8_MAX;
	static uint16_t x2488 = 1U;
	volatile int64_t t67 = -46367318137238259LL;

    t67 = (((x2485+x2486)&x2487)<<x2488);

    if (t67 != 118LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x2649 = UINT16_MAX;
	int16_t x2650 = -1;
	volatile int16_t x2651 = 2334;
	uint64_t x2652 = 6LLU;
	int32_t t68 = 6518027;

    t68 = (((x2649+x2650)&x2651)<<x2652);

    if (t68 != 149376) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x2726 = -1;
	int8_t x2727 = INT8_MIN;
	static uint32_t x2728 = 4U;
	static volatile uint64_t t69 = 29LLU;

    t69 = (((x2725+x2726)&x2727)<<x2728);

    if (t69 != 144612936196096LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x2733 = UINT8_MAX;
	static volatile int16_t x2734 = 752;
	uint8_t x2736 = 0U;

    t70 = (((x2733+x2734)&x2735)<<x2736);

    if (t70 != 1007) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x2761 = -1;
	static volatile uint32_t x2762 = UINT32_MAX;
	static int16_t x2764 = 1;
	static uint32_t t71 = 1U;

    t71 = (((x2761+x2762)&x2763)<<x2764);

    if (t71 != 65532U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x2769 = UINT8_MAX;
	int16_t x2771 = INT16_MAX;
	int8_t x2772 = 9;

    t72 = (((x2769+x2770)&x2771)<<x2772);

    if (t72 != 10674176LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x2773 = -1;
	uint64_t x2774 = UINT64_MAX;
	uint16_t x2775 = 51U;
	uint16_t x2776 = 7U;
	static uint64_t t73 = 30169917684901264LLU;

    t73 = (((x2773+x2774)&x2775)<<x2776);

    if (t73 != 6400LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x2797 = 117U;
	uint16_t x2798 = 1297U;
	volatile int16_t x2799 = -14;
	int8_t x2800 = 1;

    t74 = (((x2797+x2798)&x2799)<<x2800);

    if (t74 != 2820U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x2957 = -1;
	volatile uint64_t x2958 = UINT64_MAX;
	static int16_t x2959 = INT16_MAX;
	int32_t x2960 = 1;

    t75 = (((x2957+x2958)&x2959)<<x2960);

    if (t75 != 65532LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x3038 = -1714550803579538LL;
	int8_t x3039 = INT8_MAX;

    t76 = (((x3037+x3038)&x3039)<<x3040);

    if (t76 != 228589568LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x3089 = 558293;
	static uint64_t x3090 = 0LLU;
	int16_t x3091 = INT16_MAX;
	int8_t x3092 = 1;
	volatile uint64_t t77 = 40267216558875963LLU;

    t77 = (((x3089+x3090)&x3091)<<x3092);

    if (t77 != 2474LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x3289 = 207451731U;
	int16_t x3290 = -80;
	int8_t x3291 = INT8_MAX;

    t78 = (((x3289+x3290)&x3291)<<x3292);

    if (t78 != 6144U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x3305 = UINT64_MAX;
	static int16_t x3306 = INT16_MIN;
	uint16_t x3307 = UINT16_MAX;
	uint16_t x3308 = 43U;
	static volatile uint64_t t79 = 340202344102795LLU;

    t79 = (((x3305+x3306)&x3307)<<x3308);

    if (t79 != 288221580058689536LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x3325 = -865;
	uint32_t x3327 = UINT32_MAX;
	uint32_t t80 = 14746U;

    t80 = (((x3325+x3326)&x3327)<<x3328);

    if (t80 != 2722U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x3343 = 38170U;
	uint16_t x3344 = 57U;
	static volatile uint64_t t81 = 235005766359918LLU;

    t81 = (((x3341+x3342)&x3343)<<x3344);

    if (t81 != 2594073385365405696LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint32_t x3414 = 7114U;
	int16_t x3415 = -2178;
	volatile uint8_t x3416 = 1U;
	uint32_t t82 = 2219269U;

    t82 = (((x3413+x3414)&x3415)<<x3416);

    if (t82 != 140944U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x3493 = 41180634065LLU;
	int8_t x3494 = 9;
	int16_t x3495 = INT16_MAX;
	static volatile uint64_t t83 = 834908LLU;

    t83 = (((x3493+x3494)&x3495)<<x3496);

    if (t83 != 28520LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x3498 = UINT64_MAX;
	volatile int8_t x3499 = 3;
	uint8_t x3500 = 13U;
	volatile uint64_t t84 = 27360050572972625LLU;

    t84 = (((x3497+x3498)&x3499)<<x3500);

    if (t84 != 24576LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x3517 = INT16_MIN;
	static uint16_t x3518 = UINT16_MAX;
	static int64_t x3519 = 15894917339LL;
	uint32_t x3520 = 46U;

    t85 = (((x3517+x3518)&x3519)<<x3520);

    if (t85 != 880101883430043648LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x3537 = INT16_MIN;
	int8_t x3538 = -1;
	uint16_t x3539 = 0U;
	int16_t x3540 = 1;
	static volatile int32_t t86 = 1706;

    t86 = (((x3537+x3538)&x3539)<<x3540);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x3573 = 31U;
	int32_t x3574 = -15;
	int32_t x3575 = INT32_MIN;
	uint8_t x3576 = 8U;
	static int32_t t87 = 6396209;

    t87 = (((x3573+x3574)&x3575)<<x3576);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x3773 = -1235;
	static int8_t x3774 = 0;

    t88 = (((x3773+x3774)&x3775)<<x3776);

    if (t88 != 7907157061941788672LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x3797 = 1330LLU;
	int16_t x3799 = INT16_MIN;
	uint16_t x3800 = 7U;
	volatile uint64_t t89 = 185850562836065LLU;

    t89 = (((x3797+x3798)&x3799)<<x3800);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x3818 = INT16_MIN;
	uint8_t x3819 = 82U;
	int8_t x3820 = 10;

    t90 = (((x3817+x3818)&x3819)<<x3820);

    if (t90 != 83968) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x3993 = -43;
	int64_t x3994 = INT64_MAX;
	int8_t x3995 = 14;
	static uint32_t x3996 = 20U;

    t91 = (((x3993+x3994)&x3995)<<x3996);

    if (t91 != 4194304LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x4001 = 26051961845974LLU;
	uint8_t x4002 = UINT8_MAX;
	static int16_t x4003 = INT16_MIN;
	uint16_t x4004 = 6U;

    t92 = (((x4001+x4002)&x4003)<<x4004);

    if (t92 != 1667325556162560LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x4089 = 37134823U;
	int8_t x4090 = 0;
	static uint32_t x4091 = 3049873U;
	uint32_t x4092 = 30U;

    t93 = (((x4089+x4090)&x4091)<<x4092);

    if (t93 != 1073741824U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x4166 = 1;
	static uint16_t x4167 = UINT16_MAX;
	volatile int64_t t94 = -4337413613LL;

    t94 = (((x4165+x4166)&x4167)<<x4168);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x4205 = -7;
	int16_t x4206 = INT16_MAX;
	static int64_t x4207 = INT64_MIN;
	static uint32_t x4208 = 31U;
	volatile int64_t t95 = 80547249364176LL;

    t95 = (((x4205+x4206)&x4207)<<x4208);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x4401 = -1;
	volatile uint32_t x4402 = 325057014U;
	static uint16_t x4403 = UINT16_MAX;
	int64_t x4404 = 0LL;
	static volatile uint32_t t96 = 808U;

    t96 = (((x4401+x4402)&x4403)<<x4404);

    if (t96 != 63989U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x4469 = INT32_MIN;
	uint32_t x4470 = UINT32_MAX;
	int32_t x4471 = INT32_MAX;
	static uint16_t x4472 = 1U;
	volatile uint32_t t97 = 1U;

    t97 = (((x4469+x4470)&x4471)<<x4472);

    if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x4494 = INT16_MIN;
	uint64_t x4495 = UINT64_MAX;
	uint64_t x4496 = 26LLU;
	static uint64_t t98 = 1604612890847574LLU;

    t98 = (((x4493+x4494)&x4495)<<x4496);

    if (t98 != 18446741874619187200LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x4497 = INT32_MIN;
	volatile uint8_t x4498 = 13U;
	volatile int32_t t99 = 249;

    t99 = (((x4497+x4498)&x4499)<<x4500);

    if (t99 != 52) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x4509 = INT8_MAX;
	static volatile uint16_t x4510 = 55U;
	int16_t x4511 = INT16_MAX;
	volatile uint8_t x4512 = 1U;

    t100 = (((x4509+x4510)&x4511)<<x4512);

    if (t100 != 364) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x4521 = 155U;
	int16_t x4524 = 0;

    t101 = (((x4521+x4522)&x4523)<<x4524);

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint8_t x4597 = 114U;
	int16_t x4598 = -6279;
	static volatile int32_t t102 = 132338415;

    t102 = (((x4597+x4598)&x4599)<<x4600);

    if (t102 != 13620736) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x4609 = INT8_MIN;
	static int8_t x4611 = 1;
	uint8_t x4612 = 0U;
	uint64_t t103 = 1LLU;

    t103 = (((x4609+x4610)&x4611)<<x4612);

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x4629 = 508U;
	static uint8_t x4630 = 6U;
	int32_t x4631 = INT32_MAX;
	uint8_t x4632 = 1U;
	volatile uint32_t t104 = 235444U;

    t104 = (((x4629+x4630)&x4631)<<x4632);

    if (t104 != 1028U) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x4649 = 529295663;
	uint64_t x4650 = 1017003355413LLU;
	static uint64_t x4651 = UINT64_MAX;
	int8_t x4652 = 1;
	volatile uint64_t t105 = 3609077129789139LLU;

    t105 = (((x4649+x4650)&x4651)<<x4652);

    if (t105 != 2035065302152LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x4653 = 30366LL;
	static int16_t x4654 = INT16_MAX;
	uint32_t x4655 = 1208021U;
	volatile uint8_t x4656 = 3U;
	int64_t t106 = -5489575LL;

    t106 = (((x4653+x4654)&x4655)<<x4656);

    if (t106 != 210088LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x4681 = 0LLU;
	int8_t x4682 = INT8_MAX;
	static int16_t x4683 = INT16_MIN;
	uint64_t t107 = 782154982770602LLU;

    t107 = (((x4681+x4682)&x4683)<<x4684);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x4685 = 89LLU;
	uint64_t x4686 = UINT64_MAX;
	int8_t x4687 = -1;
	volatile uint32_t x4688 = 0U;
	volatile uint64_t t108 = 732143392804LLU;

    t108 = (((x4685+x4686)&x4687)<<x4688);

    if (t108 != 88LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x4749 = -219069;
	int32_t x4751 = -7;
	int8_t x4752 = 31;
	volatile uint64_t t109 = 27550369954619383LLU;

    t109 = (((x4749+x4750)&x4751)<<x4752);

    if (t109 != 18446374038654681088LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x4757 = INT16_MAX;
	uint8_t x4760 = 10U;
	int64_t t110 = -216909408187589LL;

    t110 = (((x4757+x4758)&x4759)<<x4760);

    if (t110 != 33683456LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x4777 = 0U;
	int64_t x4778 = -203534416LL;
	uint32_t x4779 = 0U;
	uint16_t x4780 = 0U;

    t111 = (((x4777+x4778)&x4779)<<x4780);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x4794 = INT16_MAX;
	volatile int32_t x4795 = -79164;
	static volatile uint64_t t112 = 1370747755377090LLU;

    t112 = (((x4793+x4794)&x4795)<<x4796);

    if (t112 != 1224960LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x4905 = -55313430886442394LL;
	static int32_t x4906 = INT32_MIN;
	int16_t x4907 = 1995;
	uint8_t x4908 = 10U;
	volatile int64_t t113 = 3LL;

    t113 = (((x4905+x4906)&x4907)<<x4908);

    if (t113 != 591872LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x4917 = 43U;
	int16_t x4918 = INT16_MIN;
	int8_t x4919 = INT8_MIN;
	int16_t x4920 = 1;

    t114 = (((x4917+x4918)&x4919)<<x4920);

    if (t114 != 4294901760U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x5025 = 251092U;
	int8_t x5026 = INT8_MAX;
	int32_t x5027 = -1;
	uint8_t x5028 = 28U;

    t115 = (((x5025+x5026)&x5027)<<x5028);

    if (t115 != 805306368U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x5033 = -1;
	int64_t x5034 = INT64_MAX;
	uint64_t x5035 = UINT64_MAX;
	uint64_t t116 = 1998873507LLU;

    t116 = (((x5033+x5034)&x5035)<<x5036);

    if (t116 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x5053 = 7124523U;
	static volatile uint8_t x5054 = UINT8_MAX;
	uint16_t x5056 = 2U;
	volatile uint32_t t117 = 23U;

    t117 = (((x5053+x5054)&x5055)<<x5056);

    if (t117 != 28498984U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x5058 = 3U;
	volatile int16_t x5059 = INT16_MIN;
	static volatile uint32_t t118 = 3426866U;

    t118 = (((x5057+x5058)&x5059)<<x5060);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x5065 = -127;
	volatile uint8_t x5066 = 0U;
	uint64_t x5067 = 4340189267978035LLU;
	uint16_t x5068 = 1U;
	uint64_t t119 = 404755744574LLU;

    t119 = (((x5065+x5066)&x5067)<<x5068);

    if (t119 != 8680378535955970LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x5097 = -1;
	uint32_t x5098 = UINT32_MAX;
	int32_t x5099 = -1;
	uint8_t x5100 = 3U;
	volatile uint32_t t120 = 10115U;

    t120 = (((x5097+x5098)&x5099)<<x5100);

    if (t120 != 4294967280U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x5170 = INT16_MAX;
	uint16_t x5172 = 2U;
	static volatile uint64_t t121 = 22894420976244223LLU;

    t121 = (((x5169+x5170)&x5171)<<x5172);

    if (t121 != 1678328627792LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x5269 = INT64_MIN;
	volatile uint32_t x5270 = 6728U;
	int8_t x5271 = 59;
	volatile int16_t x5272 = 0;

    t122 = (((x5269+x5270)&x5271)<<x5272);

    if (t122 != 8LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x5317 = -1LL;
	int32_t x5318 = -1;
	int32_t x5319 = 5641;
	int8_t x5320 = 3;
	static int64_t t123 = -238LL;

    t123 = (((x5317+x5318)&x5319)<<x5320);

    if (t123 != 45120LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x5322 = 2793LLU;
	int64_t x5323 = INT64_MAX;
	static uint8_t x5324 = 1U;
	uint64_t t124 = 2175LLU;

    t124 = (((x5321+x5322)&x5323)<<x5324);

    if (t124 != 4294972880LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x5383 = 51U;
	uint8_t x5384 = 25U;

    t125 = (((x5381+x5382)&x5383)<<x5384);

    if (t125 != 1644167168) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x5429 = UINT64_MAX;
	uint64_t x5430 = 12426201159LLU;
	volatile uint64_t x5431 = 20323869898LLU;
	uint32_t x5432 = 3U;

    t126 = (((x5429+x5430)&x5431)<<x5432);

    if (t126 != 21491876368LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x5435 = 11803338U;
	int8_t x5436 = 1;

    t127 = (((x5433+x5434)&x5435)<<x5436);

    if (t127 != 23606676U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x5461 = INT16_MAX;
	uint32_t x5462 = UINT32_MAX;
	int8_t x5463 = 30;

    t128 = (((x5461+x5462)&x5463)<<x5464);

    if (t128 != 30U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x5497 = INT64_MIN;
	uint64_t x5498 = UINT64_MAX;
	int64_t x5499 = 16337LL;

    t129 = (((x5497+x5498)&x5499)<<x5500);

    if (t129 != 16337LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x5505 = 593389U;
	volatile uint8_t x5506 = 25U;
	static int64_t x5507 = -1556556934091625322LL;
	uint8_t x5508 = 37U;
	volatile int64_t t130 = 14900713619476145LL;

    t130 = (((x5505+x5506)&x5507)<<x5508);

    if (t130 != 72480631136714752LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x5541 = 166;
	static int8_t x5542 = INT8_MIN;
	int16_t x5544 = 4;
	static int32_t t131 = 777357;

    t131 = (((x5541+x5542)&x5543)<<x5544);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x5545 = 361LL;
	uint64_t x5546 = 2702611937787389908LLU;
	volatile uint8_t x5548 = 7U;
	volatile uint64_t t132 = 59219LLU;

    t132 = (((x5545+x5546)&x5547)<<x5548);

    if (t132 != 2214595200LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x5573 = UINT16_MAX;
	uint8_t x5574 = UINT8_MAX;
	int16_t x5575 = INT16_MAX;
	uint8_t x5576 = 1U;

    t133 = (((x5573+x5574)&x5575)<<x5576);

    if (t133 != 508) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint32_t x5633 = 7U;
	int64_t x5634 = -1LL;
	int64_t x5635 = 7LL;
	uint16_t x5636 = 13U;
	int64_t t134 = 1LL;

    t134 = (((x5633+x5634)&x5635)<<x5636);

    if (t134 != 49152LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x5653 = INT32_MAX;
	int8_t x5654 = INT8_MIN;
	uint64_t x5655 = 5005318601293LLU;
	static uint8_t x5656 = 5U;
	volatile uint64_t t135 = 1LLU;

    t135 = (((x5653+x5654)&x5655)<<x5656);

    if (t135 != 53814446496LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x5657 = INT8_MAX;
	static uint16_t x5660 = 23U;
	volatile int64_t t136 = 25235LL;

    t136 = (((x5657+x5658)&x5659)<<x5660);

    if (t136 != 16856342786473984LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x5677 = INT16_MAX;
	int8_t x5678 = INT8_MAX;
	int8_t x5679 = INT8_MAX;
	volatile int32_t t137 = 8234;

    t137 = (((x5677+x5678)&x5679)<<x5680);

    if (t137 != 1008) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x5693 = 0;
	int32_t x5694 = INT32_MAX;
	volatile int16_t x5696 = 0;
	int32_t t138 = 668728;

    t138 = (((x5693+x5694)&x5695)<<x5696);

    if (t138 != 2147483641) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x5737 = -1;
	volatile int16_t x5739 = INT16_MIN;
	volatile uint8_t x5740 = 16U;
	volatile int32_t t139 = 0;

    t139 = (((x5737+x5738)&x5739)<<x5740);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x5777 = INT32_MIN;
	uint32_t x5778 = 5557U;
	static int16_t x5779 = 14854;
	static volatile uint8_t x5780 = 3U;
	uint32_t t140 = 62U;

    t140 = (((x5777+x5778)&x5779)<<x5780);

    if (t140 != 32800U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x5805 = 419404549513LLU;
	int64_t x5806 = -1LL;
	int8_t x5808 = 4;

    t141 = (((x5805+x5806)&x5807)<<x5808);

    if (t141 != 6710472792064LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x5865 = 108U;
	uint16_t x5868 = 24U;
	int32_t t142 = 45;

    t142 = (((x5865+x5866)&x5867)<<x5868);

    if (t142 != 1778384896) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x5985 = -1;
	int8_t x5986 = INT8_MAX;
	uint64_t x5987 = 7366018513417831965LLU;
	static int16_t x5988 = 16;
	volatile uint64_t t143 = 4142363561LLU;

    t143 = (((x5985+x5986)&x5987)<<x5988);

    if (t143 != 1835008LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x6001 = 347669U;
	volatile uint64_t x6003 = 607235801914035275LLU;
	volatile uint8_t x6004 = 3U;
	volatile uint64_t t144 = 8806459536372LLU;

    t144 = (((x6001+x6002)&x6003)<<x6004);

    if (t144 != 19688071760LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x6013 = -372;
	int16_t x6015 = -3;
	uint8_t x6016 = 15U;
	static volatile int32_t t145 = -21873;

    t145 = (((x6013+x6014)&x6015)<<x6016);

    if (t145 != 16121856) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x6073 = UINT8_MAX;
	volatile int32_t x6074 = INT32_MIN;
	static uint32_t x6075 = 357U;
	int8_t x6076 = 1;
	volatile uint32_t t146 = 4833365U;

    t146 = (((x6073+x6074)&x6075)<<x6076);

    if (t146 != 202U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x6085 = UINT16_MAX;
	static int16_t x6087 = INT16_MIN;
	static uint8_t x6088 = 0U;
	volatile int32_t t147 = -1405889;

    t147 = (((x6085+x6086)&x6087)<<x6088);

    if (t147 != 163840) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x6185 = 29U;
	int8_t x6186 = 58;
	volatile uint32_t x6187 = UINT32_MAX;
	uint8_t x6188 = 17U;
	uint32_t t148 = 55U;

    t148 = (((x6185+x6186)&x6187)<<x6188);

    if (t148 != 11403264U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x6189 = 741622005U;
	int8_t x6190 = INT8_MAX;
	static uint8_t x6192 = 38U;
	volatile uint64_t t149 = 18812LLU;

    t149 = (((x6189+x6190)&x6191)<<x6192);

    if (t149 != 941354576701816832LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x6193 = UINT16_MAX;
	volatile uint64_t x6195 = 5440148099LLU;
	uint8_t x6196 = 3U;

    t150 = (((x6193+x6194)&x6195)<<x6196);

    if (t150 != 8LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x6213 = 1;
	uint32_t x6214 = UINT32_MAX;
	volatile int32_t x6216 = 14;
	volatile int64_t t151 = -43510353297LL;

    t151 = (((x6213+x6214)&x6215)<<x6216);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x6371 = 1392;
	uint16_t x6372 = 1U;

    t152 = (((x6369+x6370)&x6371)<<x6372);

    if (t152 != 2784LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x6401 = 13155;
	int16_t x6402 = -2572;
	volatile int64_t x6403 = -1LL;
	uint8_t x6404 = 46U;
	volatile int64_t t153 = -63721LL;

    t153 = (((x6401+x6402)&x6403)<<x6404);

    if (t153 != 744712419632218112LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x6405 = 501716LL;
	volatile int8_t x6406 = INT8_MAX;
	int64_t x6407 = -1529536181817257554LL;
	volatile int64_t t154 = 8101322770LL;

    t154 = (((x6405+x6406)&x6407)<<x6408);

    if (t154 != 2359312LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x6437 = INT16_MIN;
	volatile int16_t x6438 = INT16_MIN;
	int32_t x6439 = 224867;
	volatile uint8_t x6440 = 1U;
	static volatile int32_t t155 = 10324179;

    t155 = (((x6437+x6438)&x6439)<<x6440);

    if (t155 != 393216) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x6497 = UINT64_MAX;
	int64_t x6498 = -9LL;
	static volatile int16_t x6499 = INT16_MIN;
	uint8_t x6500 = 0U;
	static uint64_t t156 = 104218790158633LLU;

    t156 = (((x6497+x6498)&x6499)<<x6500);

    if (t156 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x6633 = INT16_MAX;
	volatile int16_t x6634 = INT16_MIN;
	int32_t x6635 = 15;
	uint8_t x6636 = 1U;

    t157 = (((x6633+x6634)&x6635)<<x6636);

    if (t157 != 30) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x6645 = -1;
	uint16_t x6647 = 5U;
	int32_t t158 = 6540;

    t158 = (((x6645+x6646)&x6647)<<x6648);

    if (t158 != 2048) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x6657 = -1;
	uint64_t x6658 = 29487LLU;
	int8_t x6659 = 53;
	uint64_t t159 = 10491920212881LLU;

    t159 = (((x6657+x6658)&x6659)<<x6660);

    if (t159 != 36LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x6693 = -791046663LL;
	int64_t x6694 = 3289LL;
	uint16_t x6695 = 247U;
	int8_t x6696 = 1;
	volatile int64_t t160 = 1765LL;

    t160 = (((x6693+x6694)&x6695)<<x6696);

    if (t160 != 420LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x6706 = 3821;
	uint8_t x6707 = 59U;
	int64_t t161 = 3LL;

    t161 = (((x6705+x6706)&x6707)<<x6708);

    if (t161 != 41LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x6754 = INT64_MIN;
	volatile int16_t x6756 = 3;
	volatile uint64_t t162 = 62861123419565LLU;

    t162 = (((x6753+x6754)&x6755)<<x6756);

    if (t162 != 26351492120LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x6806 = INT8_MIN;
	uint8_t x6808 = 30U;
	static uint64_t t163 = 80051169LLU;

    t163 = (((x6805+x6806)&x6807)<<x6808);

    if (t163 != 1649267441664LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x6809 = INT16_MIN;
	uint64_t x6811 = UINT64_MAX;
	uint8_t x6812 = 29U;
	uint64_t t164 = 19164516554990LLU;

    t164 = (((x6809+x6810)&x6811)<<x6812);

    if (t164 != 18433580212621934592LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x6825 = INT32_MAX;
	int16_t x6826 = -67;
	uint32_t x6827 = 4625275U;
	volatile uint16_t x6828 = 4U;
	uint32_t t165 = 79U;

    t165 = (((x6825+x6826)&x6827)<<x6828);

    if (t165 != 74003328U) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x6829 = 3;
	uint64_t x6831 = 648182913LLU;
	uint8_t x6832 = 1U;

    t166 = (((x6829+x6830)&x6831)<<x6832);

    if (t166 != 1296302082LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x6837 = 58;
	uint32_t x6838 = UINT32_MAX;
	volatile int64_t x6839 = -3127047554LL;
	static int64_t t167 = 210LL;

    t167 = (((x6837+x6838)&x6839)<<x6840);

    if (t167 != 224LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x6845 = INT8_MAX;
	uint16_t x6846 = 1940U;
	uint64_t x6847 = UINT64_MAX;
	volatile uint16_t x6848 = 0U;
	uint64_t t168 = 4830644LLU;

    t168 = (((x6845+x6846)&x6847)<<x6848);

    if (t168 != 2067LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x6869 = UINT8_MAX;
	uint32_t x6870 = 793U;
	uint8_t x6871 = 2U;
	static volatile uint8_t x6872 = 6U;
	uint32_t t169 = 300865U;

    t169 = (((x6869+x6870)&x6871)<<x6872);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x6873 = 4764391245LLU;
	int64_t x6874 = INT64_MIN;
	volatile int32_t x6875 = INT32_MIN;
	volatile uint64_t t170 = 9143920934403376LLU;

    t170 = (((x6873+x6874)&x6875)<<x6876);

    if (t170 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x6969 = 5;
	static int8_t x6970 = INT8_MAX;
	int32_t t171 = 0;

    t171 = (((x6969+x6970)&x6971)<<x6972);

    if (t171 != 262144) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x6989 = 389U;
	int8_t x6992 = 1;
	int64_t t172 = 79LL;

    t172 = (((x6989+x6990)&x6991)<<x6992);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x7001 = -5;
	uint16_t x7002 = 0U;
	volatile int16_t x7003 = INT16_MAX;
	int16_t x7004 = 4;
	int32_t t173 = -7;

    t173 = (((x7001+x7002)&x7003)<<x7004);

    if (t173 != 524208) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x7033 = UINT64_MAX;
	uint64_t x7034 = UINT64_MAX;
	static int16_t x7036 = 1;

    t174 = (((x7033+x7034)&x7035)<<x7036);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x7049 = 4U;
	uint32_t x7050 = 296798U;
	int8_t x7052 = 1;

    t175 = (((x7049+x7050)&x7051)<<x7052);

    if (t175 != 3136LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint64_t x7095 = 572925040625442852LLU;

    t176 = (((x7093+x7094)&x7095)<<x7096);

    if (t176 != 2291700162501771408LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x7121 = 41036U;
	static uint64_t x7122 = 18560693197LLU;
	int8_t x7123 = INT8_MIN;
	static volatile int8_t x7124 = 21;
	uint64_t t177 = 611527646594LLU;

    t177 = (((x7121+x7122)&x7123)<<x7124);

    if (t177 != 38924680865775616LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x7197 = 97LL;
	static int8_t x7198 = 2;
	int8_t x7200 = 30;
	int64_t t178 = 369LL;

    t178 = (((x7197+x7198)&x7199)<<x7200);

    if (t178 != 106300440576LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x7218 = -7;
	volatile uint16_t x7219 = 5U;
	volatile uint64_t x7220 = 16LLU;
	int32_t t179 = 31957;

    t179 = (((x7217+x7218)&x7219)<<x7220);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x7257 = 975190U;
	volatile int8_t x7258 = -14;
	int16_t x7259 = 0;
	static uint64_t x7260 = 1LLU;
	uint32_t t180 = 8U;

    t180 = (((x7257+x7258)&x7259)<<x7260);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x7399 = 316198LLU;
	uint8_t x7400 = 50U;
	uint64_t t181 = 57432804851413741LLU;

    t181 = (((x7397+x7398)&x7399)<<x7400);

    if (t181 != 4616189618054758400LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x7445 = 348LLU;
	uint32_t x7448 = 5U;
	static uint64_t t182 = 12LLU;

    t182 = (((x7445+x7446)&x7447)<<x7448);

    if (t182 != 256LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x7465 = INT16_MIN;
	static volatile uint64_t x7467 = 313238LLU;

    t183 = (((x7465+x7466)&x7467)<<x7468);

    if (t183 != 73523527680LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x7469 = UINT8_MAX;
	int8_t x7472 = 30;
	uint64_t t184 = 3LLU;

    t184 = (((x7469+x7470)&x7471)<<x7472);

    if (t184 != 1099511627776LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint16_t x7541 = UINT16_MAX;
	int32_t x7542 = INT32_MIN;
	int8_t x7544 = 2;
	int32_t t185 = 61405;

    t185 = (((x7541+x7542)&x7543)<<x7544);

    if (t185 != 508) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x7569 = -1;
	volatile int64_t x7570 = INT64_MAX;
	static int16_t x7571 = INT16_MIN;
	int8_t x7572 = 0;
	int64_t t186 = -38254400LL;

    t186 = (((x7569+x7570)&x7571)<<x7572);

    if (t186 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x7609 = INT8_MIN;
	int64_t x7611 = 1449019584089LL;
	uint8_t x7612 = 1U;
	uint64_t t187 = 11534200104LLU;

    t187 = (((x7609+x7610)&x7611)<<x7612);

    if (t187 != 8932512LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x7637 = 20664U;
	uint8_t x7638 = UINT8_MAX;
	uint8_t x7639 = 71U;
	int8_t x7640 = 0;
	int32_t t188 = 200811;

    t188 = (((x7637+x7638)&x7639)<<x7640);

    if (t188 != 7) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x7745 = 4107475485078LLU;
	int16_t x7746 = -8;
	int32_t x7747 = INT32_MIN;
	int32_t x7748 = 14;

    t189 = (((x7745+x7746)&x7747)<<x7748);

    if (t189 != 67272519433846784LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x7762 = 4;
	static int16_t x7763 = INT16_MAX;
	int8_t x7764 = 1;

    t190 = (((x7761+x7762)&x7763)<<x7764);

    if (t190 != 43660LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x7837 = -1;
	uint8_t x7838 = 52U;
	static uint32_t x7839 = 4036U;
	volatile uint8_t x7840 = 0U;
	volatile uint32_t t191 = 444229177U;

    t191 = (((x7837+x7838)&x7839)<<x7840);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x7873 = INT8_MIN;
	volatile int8_t x7874 = INT8_MAX;
	uint32_t x7875 = 224761888U;
	uint8_t x7876 = 6U;
	volatile uint32_t t192 = 43U;

    t192 = (((x7873+x7874)&x7875)<<x7876);

    if (t192 != 1499858944U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x7893 = INT64_MIN;
	uint64_t x7894 = 774LLU;
	uint8_t x7895 = 14U;
	uint8_t x7896 = 3U;

    t193 = (((x7893+x7894)&x7895)<<x7896);

    if (t193 != 48LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x7933 = INT8_MAX;
	int8_t x7934 = INT8_MIN;
	int32_t x7935 = 32137;
	uint8_t x7936 = 4U;
	int32_t t194 = -234592;

    t194 = (((x7933+x7934)&x7935)<<x7936);

    if (t194 != 514192) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x7961 = 594009207278109LL;
	int32_t x7963 = INT32_MAX;
	volatile uint16_t x7964 = 2U;
	volatile int64_t t195 = -8LL;

    t195 = (((x7961+x7962)&x7963)<<x7964);

    if (t195 != 791422916LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x8081 = 14U;
	uint8_t x8083 = 0U;
	uint8_t x8084 = 10U;
	volatile uint64_t t196 = 585414195429LLU;

    t196 = (((x8081+x8082)&x8083)<<x8084);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x8085 = 3U;
	static uint64_t x8086 = 10308300388584LLU;
	static volatile int32_t x8087 = -1;
	uint8_t x8088 = 0U;
	uint64_t t197 = 246780512LLU;

    t197 = (((x8085+x8086)&x8087)<<x8088);

    if (t197 != 10308300388587LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x8136 = 19U;
	volatile uint32_t t198 = 6U;

    t198 = (((x8133+x8134)&x8135)<<x8136);

    if (t198 != 479199232U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x8141 = INT64_MIN;
	int32_t x8142 = 88;
	uint8_t x8143 = 37U;
	int32_t x8144 = 46;

    t199 = (((x8141+x8142)&x8143)<<x8144);

    if (t199 != 0LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

