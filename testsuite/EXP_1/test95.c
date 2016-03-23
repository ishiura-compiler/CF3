
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

static uint16_t x181 = UINT16_MAX;
static uint8_t x280 = 12U;
static int8_t x296 = 1;
uint32_t x309 = 4057636U;
volatile uint32_t x314 = UINT32_MAX;
static int8_t x402 = 1;
uint32_t x404 = 3U;
uint32_t x406 = UINT32_MAX;
uint8_t x408 = 0U;
int8_t x494 = 1;
int16_t x495 = -1;
static int32_t t14 = 3;
int16_t x532 = 2;
volatile int32_t t15 = 7579572;
volatile int16_t x558 = 0;
int32_t x574 = INT32_MIN;
volatile uint16_t x701 = 1124U;
volatile uint16_t x703 = 29U;
volatile uint8_t x733 = 0U;
volatile uint16_t x735 = 3431U;
int32_t t22 = -10;
int16_t x765 = -1;
static uint8_t x766 = 14U;
uint16_t x768 = 9U;
int32_t x782 = INT32_MAX;
volatile int8_t x786 = INT8_MIN;
static int8_t x829 = INT8_MAX;
uint16_t x830 = 0U;
uint8_t x831 = UINT8_MAX;
static uint8_t x918 = 0U;
int8_t x1081 = INT8_MIN;
static uint16_t x1126 = 6314U;
static uint32_t x1128 = 2U;
int64_t x1147 = -1LL;
int32_t t35 = -67;
uint8_t x1301 = 5U;
int32_t x1314 = 33276732;
uint8_t x1329 = 122U;
int32_t x1382 = INT32_MAX;
int8_t x1528 = 18;
static int64_t x1539 = -1LL;
volatile uint8_t x1540 = 1U;
uint16_t x1561 = UINT16_MAX;
volatile int32_t t44 = 659991026;
int8_t x1613 = INT8_MIN;
int64_t x1615 = -1207088495921253LL;
static volatile int8_t x1616 = 1;
int8_t x1776 = 0;
static volatile uint32_t x1809 = 2U;
uint16_t x1810 = 3947U;
int64_t x1875 = -1LL;
int64_t x1983 = -1LL;
int32_t t55 = 60;
volatile int32_t x2058 = -1;
volatile int32_t t57 = 1391;
volatile int32_t t61 = 1;
int32_t x2306 = -59;
uint8_t x2308 = 18U;
volatile int32_t t63 = 147980;
uint32_t x2382 = 16083228U;
uint64_t x2472 = 2LLU;
volatile int32_t t67 = 6186219;
int32_t x2590 = -27;
static volatile uint8_t x2592 = 1U;
uint32_t x2742 = UINT32_MAX;
int32_t t71 = -504155;
static int8_t x2769 = INT8_MIN;
uint8_t x2772 = 9U;
volatile int32_t t72 = 1191;
uint32_t x2858 = 31252087U;
static uint32_t x2859 = UINT32_MAX;
int32_t t74 = 4288986;
int32_t x2941 = INT32_MAX;
uint64_t x2942 = UINT64_MAX;
volatile int32_t t76 = -549;
uint16_t x3001 = 105U;
int16_t x3002 = INT16_MIN;
static int32_t t77 = 8;
int32_t x3043 = -1;
volatile int32_t t79 = 66;
volatile uint8_t x3224 = 6U;
volatile uint8_t x3228 = 0U;
static volatile int64_t x3269 = -1LL;
static int32_t x3322 = -31378903;
volatile int8_t x3390 = INT8_MIN;
uint16_t x3392 = 3U;
volatile int32_t t89 = 30;
int8_t x3420 = 0;
uint16_t x3443 = 0U;
uint16_t x3521 = 3U;
uint16_t x3522 = 3454U;
int16_t x3569 = -135;
int16_t x3579 = -1;
int64_t x3601 = -1027624LL;
int16_t x3604 = 12;
uint64_t x3800 = 8LLU;
volatile int32_t t99 = -439282794;
int16_t x3843 = INT16_MIN;
volatile int32_t t101 = 21;
int8_t x3897 = 1;
uint16_t x3938 = UINT16_MAX;
int8_t x4013 = -8;
static uint8_t x4016 = 1U;
uint32_t x4018 = 0U;
int32_t t105 = 0;
int8_t x4043 = -1;
static volatile uint64_t x4045 = 108771492919409684LLU;
int8_t x4119 = INT8_MAX;
volatile int8_t x4133 = INT8_MIN;
volatile int64_t x4258 = -541043025419LL;
int32_t x4260 = 30;
volatile int32_t t112 = 2741;
int16_t x4278 = INT16_MIN;
uint32_t x4279 = 523494U;
int8_t x4294 = INT8_MIN;
int32_t t115 = 22656;
int64_t x4597 = INT64_MAX;
int16_t x4598 = INT16_MIN;
volatile uint8_t x4600 = 3U;
int8_t x4678 = INT8_MIN;
uint16_t x4680 = 23U;
uint16_t x4683 = 3U;
uint16_t x4743 = UINT16_MAX;
uint8_t x4744 = 0U;
int8_t x4756 = 0;
static volatile int32_t t126 = 26846;
int32_t t127 = -3474;
int8_t x4841 = INT8_MIN;
uint8_t x4842 = UINT8_MAX;
int16_t x4843 = 1;
int8_t x4849 = INT8_MIN;
volatile int8_t x4852 = 3;
volatile int32_t x4891 = -1;
int8_t x4944 = 0;
volatile uint16_t x4960 = 0U;
int32_t x5021 = -1120697;
uint16_t x5023 = 836U;
static uint64_t x5183 = 15LLU;
uint8_t x5184 = 20U;
uint8_t x5318 = 2U;
int32_t x5320 = 17;
uint16_t x5365 = 3543U;
volatile uint8_t x5366 = 43U;
int16_t x5377 = -6;
static uint16_t x5380 = 1U;
uint16_t x5409 = 48U;
int8_t x5485 = -1;
uint8_t x5487 = 3U;
uint64_t x5529 = 25894046LLU;
static int16_t x5531 = 3;
uint64_t x5537 = 225LLU;
static uint8_t x5540 = 18U;
static uint8_t x5561 = UINT8_MAX;
volatile int16_t x5586 = INT16_MIN;
int8_t x5589 = -9;
uint8_t x5590 = 7U;
volatile int32_t t151 = 2931;
int32_t x5668 = 8;
volatile uint8_t x5685 = 20U;
volatile int32_t x5686 = INT32_MIN;
int8_t x5761 = INT8_MAX;
int8_t x5764 = 22;
uint32_t x5817 = UINT32_MAX;
volatile int32_t t157 = 8443;
int64_t x5891 = INT64_MIN;
uint16_t x5927 = UINT16_MAX;
int16_t x6009 = INT16_MIN;
int32_t t161 = 2;
int16_t x6022 = -1;
int32_t x6023 = INT32_MIN;
static int64_t x6074 = INT64_MIN;
static uint64_t x6075 = UINT64_MAX;
uint8_t x6076 = 29U;
volatile int32_t t163 = 1317888;
int8_t x6188 = 12;
int32_t x6190 = 2496;
uint32_t x6191 = 7490801U;
int16_t x6202 = -1;
volatile uint8_t x6232 = 7U;
static int32_t t172 = -388220;
int8_t x6302 = INT8_MIN;
uint32_t x6394 = UINT32_MAX;
int32_t x6402 = -1;
int8_t x6403 = -22;
volatile int16_t x6419 = -1;
int8_t x6465 = 0;
uint16_t x6466 = UINT16_MAX;
volatile uint64_t x6467 = 57371LLU;
int64_t x6468 = 4LL;
int32_t x6479 = INT32_MIN;
uint32_t x6484 = 14U;
int8_t x6488 = 1;
volatile int32_t t182 = -37334363;
uint8_t x6493 = 59U;
uint32_t x6496 = 21U;
static int32_t t183 = 1295;
static int64_t x6503 = -1LL;
int8_t x6606 = -9;
int32_t t187 = -5;
static volatile int32_t x6702 = -1;
static int32_t x6733 = INT32_MIN;
volatile int16_t x6735 = -121;
static uint32_t x6759 = 4424830U;
int16_t x6809 = INT16_MAX;


void f0(void) {
    	volatile int8_t x5 = INT8_MIN;
	uint8_t x6 = UINT8_MAX;
	int32_t x7 = -1;
	volatile uint16_t x8 = 0U;
	int32_t t0 = -51;

    t0 = (((x5+x6)!=x7)>>x8);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x93 = -1007;
	static uint64_t x94 = UINT64_MAX;
	int8_t x95 = -1;
	uint8_t x96 = 0U;
	volatile int32_t t1 = 1;

    t1 = (((x93+x94)!=x95)>>x96);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x182 = -1LL;
	uint8_t x183 = 24U;
	uint32_t x184 = 19U;
	int32_t t2 = -618;

    t2 = (((x181+x182)!=x183)>>x184);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x277 = 2655226U;
	int16_t x278 = INT16_MAX;
	volatile int8_t x279 = INT8_MAX;
	int32_t t3 = -1;

    t3 = (((x277+x278)!=x279)>>x280);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MAX;
	volatile uint16_t x295 = 1U;
	static volatile int32_t t4 = -24;

    t4 = (((x293+x294)!=x295)>>x296);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x305 = UINT16_MAX;
	uint16_t x306 = 67U;
	int64_t x307 = 201LL;
	static uint8_t x308 = 3U;
	volatile int32_t t5 = 15057;

    t5 = (((x305+x306)!=x307)>>x308);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x310 = -1;
	uint16_t x311 = 1590U;
	int32_t x312 = 4;
	int32_t t6 = 2089867;

    t6 = (((x309+x310)!=x311)>>x312);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x313 = UINT32_MAX;
	int32_t x315 = INT32_MAX;
	uint32_t x316 = 0U;
	int32_t t7 = 247923;

    t7 = (((x313+x314)!=x315)>>x316);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x373 = UINT64_MAX;
	int64_t x374 = -1LL;
	static uint32_t x375 = UINT32_MAX;
	int8_t x376 = 2;
	int32_t t8 = -130728;

    t8 = (((x373+x374)!=x375)>>x376);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x401 = INT32_MIN;
	uint16_t x403 = 11870U;
	int32_t t9 = 1;

    t9 = (((x401+x402)!=x403)>>x404);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x405 = INT32_MIN;
	static int16_t x407 = INT16_MIN;
	volatile int32_t t10 = 31129;

    t10 = (((x405+x406)!=x407)>>x408);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x429 = 1;
	volatile int32_t x430 = -10597;
	int8_t x431 = -1;
	int64_t x432 = 0LL;
	volatile int32_t t11 = -109674;

    t11 = (((x429+x430)!=x431)>>x432);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x449 = UINT64_MAX;
	uint32_t x450 = 2358U;
	uint8_t x451 = UINT8_MAX;
	int16_t x452 = 24;
	int32_t t12 = -1194536;

    t12 = (((x449+x450)!=x451)>>x452);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x457 = -1;
	int64_t x458 = 53293LL;
	int8_t x459 = -1;
	uint16_t x460 = 2U;
	int32_t t13 = 3;

    t13 = (((x457+x458)!=x459)>>x460);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x493 = 2U;
	int16_t x496 = 3;

    t14 = (((x493+x494)!=x495)>>x496);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint16_t x529 = UINT16_MAX;
	static int64_t x530 = -481147909419LL;
	static volatile uint8_t x531 = 3U;

    t15 = (((x529+x530)!=x531)>>x532);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x557 = -3033;
	int16_t x559 = 1;
	volatile uint8_t x560 = 0U;
	volatile int32_t t16 = -852;

    t16 = (((x557+x558)!=x559)>>x560);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x565 = -1;
	int8_t x566 = -1;
	int8_t x567 = INT8_MIN;
	volatile uint32_t x568 = 23U;
	int32_t t17 = -151195592;

    t17 = (((x565+x566)!=x567)>>x568);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x573 = 0U;
	uint64_t x575 = 1546LLU;
	static uint16_t x576 = 3U;
	volatile int32_t t18 = -749707;

    t18 = (((x573+x574)!=x575)>>x576);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x593 = UINT8_MAX;
	int64_t x594 = -1LL;
	int16_t x595 = INT16_MAX;
	int16_t x596 = 5;
	static int32_t t19 = 3;

    t19 = (((x593+x594)!=x595)>>x596);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x677 = INT8_MAX;
	volatile uint64_t x678 = 824225388LLU;
	static int32_t x679 = INT32_MIN;
	volatile uint8_t x680 = 15U;
	int32_t t20 = -8069502;

    t20 = (((x677+x678)!=x679)>>x680);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x702 = 1U;
	uint32_t x704 = 5U;
	int32_t t21 = -91;

    t21 = (((x701+x702)!=x703)>>x704);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x734 = 59U;
	volatile int16_t x736 = 2;

    t22 = (((x733+x734)!=x735)>>x736);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x767 = 11097LL;
	volatile int32_t t23 = 99;

    t23 = (((x765+x766)!=x767)>>x768);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x781 = INT16_MIN;
	int16_t x783 = INT16_MIN;
	static int8_t x784 = 5;
	int32_t t24 = 243;

    t24 = (((x781+x782)!=x783)>>x784);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x785 = 15850U;
	int8_t x787 = INT8_MIN;
	int8_t x788 = 0;
	volatile int32_t t25 = -7;

    t25 = (((x785+x786)!=x787)>>x788);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x832 = 1;
	volatile int32_t t26 = 762620196;

    t26 = (((x829+x830)!=x831)>>x832);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x841 = UINT32_MAX;
	static volatile int16_t x842 = 312;
	volatile int8_t x843 = -1;
	int8_t x844 = 27;
	int32_t t27 = 92;

    t27 = (((x841+x842)!=x843)>>x844);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x917 = 471;
	uint8_t x919 = UINT8_MAX;
	uint8_t x920 = 1U;
	volatile int32_t t28 = 6954211;

    t28 = (((x917+x918)!=x919)>>x920);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x1082 = UINT64_MAX;
	int32_t x1083 = -1;
	static volatile uint16_t x1084 = 0U;
	int32_t t29 = 316;

    t29 = (((x1081+x1082)!=x1083)>>x1084);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint8_t x1117 = UINT8_MAX;
	static int32_t x1118 = 2;
	static volatile int8_t x1119 = INT8_MIN;
	uint8_t x1120 = 3U;
	int32_t t30 = -14181414;

    t30 = (((x1117+x1118)!=x1119)>>x1120);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x1125 = -1;
	int8_t x1127 = -1;
	volatile int32_t t31 = 1005367717;

    t31 = (((x1125+x1126)!=x1127)>>x1128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1145 = -1300884964180LL;
	int8_t x1146 = -1;
	int16_t x1148 = 16;
	int32_t t32 = 2896500;

    t32 = (((x1145+x1146)!=x1147)>>x1148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x1157 = UINT16_MAX;
	int32_t x1158 = -1;
	static uint8_t x1159 = 1U;
	int8_t x1160 = 1;
	volatile int32_t t33 = -35;

    t33 = (((x1157+x1158)!=x1159)>>x1160);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x1221 = 6247126184912LLU;
	int16_t x1222 = 1693;
	int8_t x1223 = INT8_MAX;
	int32_t x1224 = 2;
	int32_t t34 = -1098398;

    t34 = (((x1221+x1222)!=x1223)>>x1224);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1233 = INT32_MIN;
	uint32_t x1234 = UINT32_MAX;
	volatile int64_t x1235 = -1LL;
	uint8_t x1236 = 3U;

    t35 = (((x1233+x1234)!=x1235)>>x1236);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x1302 = INT32_MIN;
	int16_t x1303 = INT16_MAX;
	uint16_t x1304 = 0U;
	volatile int32_t t36 = -2812;

    t36 = (((x1301+x1302)!=x1303)>>x1304);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x1313 = 2975707U;
	int8_t x1315 = -1;
	uint8_t x1316 = 14U;
	int32_t t37 = -128130813;

    t37 = (((x1313+x1314)!=x1315)>>x1316);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint16_t x1330 = UINT16_MAX;
	int16_t x1331 = INT16_MIN;
	uint8_t x1332 = 0U;
	volatile int32_t t38 = -680;

    t38 = (((x1329+x1330)!=x1331)>>x1332);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x1381 = -1;
	volatile int64_t x1383 = -6513368LL;
	static int16_t x1384 = 0;
	volatile int32_t t39 = -10398;

    t39 = (((x1381+x1382)!=x1383)>>x1384);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1409 = 12415311837812LLU;
	int32_t x1410 = -1;
	int64_t x1411 = INT64_MIN;
	static uint8_t x1412 = 0U;
	int32_t t40 = -88;

    t40 = (((x1409+x1410)!=x1411)>>x1412);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x1525 = 60628188185251LL;
	static int32_t x1526 = -1;
	static int64_t x1527 = INT64_MIN;
	volatile int32_t t41 = 984;

    t41 = (((x1525+x1526)!=x1527)>>x1528);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x1537 = 3667U;
	int32_t x1538 = -183166;
	static int32_t t42 = 105;

    t42 = (((x1537+x1538)!=x1539)>>x1540);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x1545 = INT8_MIN;
	uint8_t x1546 = 21U;
	int32_t x1547 = -1;
	int8_t x1548 = 1;
	int32_t t43 = 124;

    t43 = (((x1545+x1546)!=x1547)>>x1548);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x1562 = 793808518LLU;
	uint64_t x1563 = 299046445820127314LLU;
	int32_t x1564 = 0;

    t44 = (((x1561+x1562)!=x1563)>>x1564);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x1614 = -1;
	static volatile int32_t t45 = -216373020;

    t45 = (((x1613+x1614)!=x1615)>>x1616);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x1773 = UINT8_MAX;
	uint16_t x1774 = UINT16_MAX;
	static uint64_t x1775 = UINT64_MAX;
	static volatile int32_t t46 = 13882548;

    t46 = (((x1773+x1774)!=x1775)>>x1776);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x1781 = -1;
	uint64_t x1782 = UINT64_MAX;
	int8_t x1783 = INT8_MIN;
	uint16_t x1784 = 13U;
	int32_t t47 = -567492;

    t47 = (((x1781+x1782)!=x1783)>>x1784);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x1811 = INT64_MIN;
	uint8_t x1812 = 21U;
	int32_t t48 = 25534;

    t48 = (((x1809+x1810)!=x1811)>>x1812);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x1821 = INT32_MIN;
	uint8_t x1822 = UINT8_MAX;
	int64_t x1823 = -11498629553674465LL;
	static int8_t x1824 = 6;
	volatile int32_t t49 = 206068;

    t49 = (((x1821+x1822)!=x1823)>>x1824);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x1873 = INT16_MIN;
	volatile uint64_t x1874 = 769910LLU;
	uint16_t x1876 = 25U;
	int32_t t50 = -34594;

    t50 = (((x1873+x1874)!=x1875)>>x1876);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1877 = -1;
	uint16_t x1878 = 501U;
	uint16_t x1879 = UINT16_MAX;
	static uint8_t x1880 = 1U;
	volatile int32_t t51 = -49;

    t51 = (((x1877+x1878)!=x1879)>>x1880);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x1885 = UINT64_MAX;
	volatile uint64_t x1886 = 300LLU;
	int8_t x1887 = -1;
	static int16_t x1888 = 1;
	volatile int32_t t52 = 824314348;

    t52 = (((x1885+x1886)!=x1887)>>x1888);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x1945 = INT16_MIN;
	int32_t x1946 = -1;
	int32_t x1947 = 739405101;
	uint16_t x1948 = 4U;
	volatile int32_t t53 = 132;

    t53 = (((x1945+x1946)!=x1947)>>x1948);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x1981 = UINT32_MAX;
	int8_t x1982 = -17;
	int8_t x1984 = 3;
	int32_t t54 = 10;

    t54 = (((x1981+x1982)!=x1983)>>x1984);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x1997 = -107;
	int8_t x1998 = 44;
	int8_t x1999 = -1;
	uint8_t x2000 = 26U;

    t55 = (((x1997+x1998)!=x1999)>>x2000);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x2057 = 1246639U;
	static int64_t x2059 = 1064779424518683719LL;
	uint8_t x2060 = 10U;
	volatile int32_t t56 = -188210641;

    t56 = (((x2057+x2058)!=x2059)>>x2060);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x2193 = INT16_MAX;
	uint16_t x2194 = UINT16_MAX;
	uint16_t x2195 = 7085U;
	uint16_t x2196 = 3U;

    t57 = (((x2193+x2194)!=x2195)>>x2196);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x2213 = INT64_MIN;
	int8_t x2214 = 1;
	static int8_t x2215 = INT8_MIN;
	int16_t x2216 = 26;
	volatile int32_t t58 = 5;

    t58 = (((x2213+x2214)!=x2215)>>x2216);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x2265 = -4;
	int16_t x2266 = -1;
	volatile uint64_t x2267 = 5833282390LLU;
	int16_t x2268 = 5;
	static volatile int32_t t59 = -31;

    t59 = (((x2265+x2266)!=x2267)>>x2268);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x2277 = 1306358040514LL;
	int64_t x2278 = INT64_MIN;
	volatile int8_t x2279 = INT8_MAX;
	static uint32_t x2280 = 2U;
	volatile int32_t t60 = -33164084;

    t60 = (((x2277+x2278)!=x2279)>>x2280);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x2281 = -1;
	int8_t x2282 = 3;
	int32_t x2283 = INT32_MAX;
	int8_t x2284 = 1;

    t61 = (((x2281+x2282)!=x2283)>>x2284);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x2297 = -1LL;
	int16_t x2298 = INT16_MAX;
	uint64_t x2299 = 4LLU;
	uint16_t x2300 = 7U;
	volatile int32_t t62 = -451;

    t62 = (((x2297+x2298)!=x2299)>>x2300);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x2305 = 3;
	static uint64_t x2307 = 19044414011LLU;

    t63 = (((x2305+x2306)!=x2307)>>x2308);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x2381 = 13568LL;
	volatile int32_t x2383 = 1805;
	static uint16_t x2384 = 30U;
	volatile int32_t t64 = -1638376;

    t64 = (((x2381+x2382)!=x2383)>>x2384);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x2421 = UINT32_MAX;
	uint32_t x2422 = UINT32_MAX;
	uint16_t x2423 = 19701U;
	int8_t x2424 = 1;
	volatile int32_t t65 = 13641826;

    t65 = (((x2421+x2422)!=x2423)>>x2424);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x2469 = UINT8_MAX;
	volatile int8_t x2470 = -1;
	uint8_t x2471 = 3U;
	int32_t t66 = -3;

    t66 = (((x2469+x2470)!=x2471)>>x2472);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x2493 = 3U;
	int8_t x2494 = 4;
	static uint16_t x2495 = 27U;
	int8_t x2496 = 0;

    t67 = (((x2493+x2494)!=x2495)>>x2496);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x2553 = UINT8_MAX;
	int32_t x2554 = INT32_MIN;
	int64_t x2555 = INT64_MAX;
	static volatile uint8_t x2556 = 31U;
	static volatile int32_t t68 = 124416212;

    t68 = (((x2553+x2554)!=x2555)>>x2556);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x2577 = 3U;
	uint32_t x2578 = 1362417335U;
	uint64_t x2579 = 55377709223592582LLU;
	int32_t x2580 = 1;
	volatile int32_t t69 = 1;

    t69 = (((x2577+x2578)!=x2579)>>x2580);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x2589 = INT16_MAX;
	static uint32_t x2591 = UINT32_MAX;
	volatile int32_t t70 = 35477;

    t70 = (((x2589+x2590)!=x2591)>>x2592);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x2741 = 15U;
	int32_t x2743 = 14747007;
	static uint16_t x2744 = 2U;

    t71 = (((x2741+x2742)!=x2743)>>x2744);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2770 = -1;
	uint16_t x2771 = 129U;

    t72 = (((x2769+x2770)!=x2771)>>x2772);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x2857 = 3786682139400659LL;
	volatile uint8_t x2860 = 13U;
	int32_t t73 = -159;

    t73 = (((x2857+x2858)!=x2859)>>x2860);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint8_t x2909 = UINT8_MAX;
	int8_t x2910 = 26;
	static int16_t x2911 = INT16_MIN;
	volatile uint8_t x2912 = 10U;

    t74 = (((x2909+x2910)!=x2911)>>x2912);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x2921 = INT8_MAX;
	int32_t x2922 = INT32_MIN;
	volatile int64_t x2923 = -25LL;
	static uint8_t x2924 = 2U;
	int32_t t75 = 159;

    t75 = (((x2921+x2922)!=x2923)>>x2924);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x2943 = INT64_MAX;
	int64_t x2944 = 1LL;

    t76 = (((x2941+x2942)!=x2943)>>x2944);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x3003 = -1LL;
	int8_t x3004 = 3;

    t77 = (((x3001+x3002)!=x3003)>>x3004);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x3041 = 1U;
	int32_t x3042 = -1055452871;
	uint16_t x3044 = 3U;
	int32_t t78 = -3137;

    t78 = (((x3041+x3042)!=x3043)>>x3044);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x3085 = INT8_MIN;
	uint16_t x3086 = UINT16_MAX;
	int16_t x3087 = -2;
	volatile uint8_t x3088 = 4U;

    t79 = (((x3085+x3086)!=x3087)>>x3088);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x3121 = UINT32_MAX;
	uint16_t x3122 = 1812U;
	int32_t x3123 = INT32_MIN;
	static uint8_t x3124 = 0U;
	volatile int32_t t80 = 255;

    t80 = (((x3121+x3122)!=x3123)>>x3124);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x3145 = 2LLU;
	static uint8_t x3146 = 19U;
	uint8_t x3147 = 23U;
	static uint32_t x3148 = 11U;
	static int32_t t81 = -88;

    t81 = (((x3145+x3146)!=x3147)>>x3148);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint32_t x3221 = 3362624U;
	static uint16_t x3222 = UINT16_MAX;
	volatile uint8_t x3223 = 30U;
	volatile int32_t t82 = -2577;

    t82 = (((x3221+x3222)!=x3223)>>x3224);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x3225 = INT64_MAX;
	static int16_t x3226 = -1;
	uint64_t x3227 = UINT64_MAX;
	int32_t t83 = -423364722;

    t83 = (((x3225+x3226)!=x3227)>>x3228);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x3270 = 34;
	volatile int64_t x3271 = -1LL;
	static int8_t x3272 = 0;
	int32_t t84 = -937193657;

    t84 = (((x3269+x3270)!=x3271)>>x3272);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x3281 = -104803LL;
	uint16_t x3282 = 209U;
	int64_t x3283 = 77143055143885LL;
	uint8_t x3284 = 8U;
	int32_t t85 = 1969;

    t85 = (((x3281+x3282)!=x3283)>>x3284);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x3313 = -1;
	int8_t x3314 = -1;
	volatile int32_t x3315 = -168715;
	int8_t x3316 = 12;
	volatile int32_t t86 = -175419;

    t86 = (((x3313+x3314)!=x3315)>>x3316);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x3321 = -1;
	static int16_t x3323 = -1;
	uint8_t x3324 = 2U;
	volatile int32_t t87 = -344510;

    t87 = (((x3321+x3322)!=x3323)>>x3324);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x3389 = INT8_MAX;
	int32_t x3391 = -1;
	volatile int32_t t88 = -105;

    t88 = (((x3389+x3390)!=x3391)>>x3392);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x3393 = INT8_MAX;
	uint16_t x3394 = 87U;
	int64_t x3395 = -50577886671477701LL;
	int8_t x3396 = 6;

    t89 = (((x3393+x3394)!=x3395)>>x3396);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x3397 = INT32_MIN;
	uint64_t x3398 = UINT64_MAX;
	uint16_t x3399 = 2U;
	uint8_t x3400 = 31U;
	int32_t t90 = 191702322;

    t90 = (((x3397+x3398)!=x3399)>>x3400);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x3417 = -1;
	volatile uint32_t x3418 = 28U;
	uint8_t x3419 = 102U;
	int32_t t91 = 1;

    t91 = (((x3417+x3418)!=x3419)>>x3420);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x3441 = INT8_MIN;
	static uint8_t x3442 = 0U;
	uint16_t x3444 = 14U;
	volatile int32_t t92 = 12220;

    t92 = (((x3441+x3442)!=x3443)>>x3444);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x3523 = INT8_MAX;
	int8_t x3524 = 3;
	volatile int32_t t93 = -217;

    t93 = (((x3521+x3522)!=x3523)>>x3524);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x3570 = 0U;
	uint32_t x3571 = 8U;
	uint8_t x3572 = 26U;
	volatile int32_t t94 = 6907887;

    t94 = (((x3569+x3570)!=x3571)>>x3572);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x3573 = 1U;
	int64_t x3574 = 4737775976062LL;
	int32_t x3575 = -22024383;
	uint32_t x3576 = 1U;
	volatile int32_t t95 = -561458;

    t95 = (((x3573+x3574)!=x3575)>>x3576);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x3577 = 22;
	int64_t x3578 = -7026680LL;
	volatile int8_t x3580 = 1;
	int32_t t96 = 2929;

    t96 = (((x3577+x3578)!=x3579)>>x3580);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x3602 = 288U;
	volatile int16_t x3603 = 277;
	volatile int32_t t97 = 174;

    t97 = (((x3601+x3602)!=x3603)>>x3604);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x3785 = 26882LL;
	int8_t x3786 = INT8_MIN;
	int64_t x3787 = INT64_MIN;
	uint8_t x3788 = 2U;
	volatile int32_t t98 = -1669;

    t98 = (((x3785+x3786)!=x3787)>>x3788);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x3797 = INT8_MIN;
	static int16_t x3798 = -1;
	volatile int64_t x3799 = 380900LL;

    t99 = (((x3797+x3798)!=x3799)>>x3800);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x3841 = -1LL;
	int8_t x3842 = -1;
	int8_t x3844 = 6;
	volatile int32_t t100 = 251984;

    t100 = (((x3841+x3842)!=x3843)>>x3844);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x3881 = INT8_MIN;
	int16_t x3882 = 45;
	static int16_t x3883 = INT16_MIN;
	uint32_t x3884 = 1U;

    t101 = (((x3881+x3882)!=x3883)>>x3884);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x3898 = 38;
	int32_t x3899 = INT32_MIN;
	uint8_t x3900 = 6U;
	int32_t t102 = -4;

    t102 = (((x3897+x3898)!=x3899)>>x3900);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x3937 = -1;
	volatile int8_t x3939 = -1;
	uint32_t x3940 = 1U;
	int32_t t103 = -16900;

    t103 = (((x3937+x3938)!=x3939)>>x3940);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x4014 = -1;
	int8_t x4015 = INT8_MIN;
	int32_t t104 = 470;

    t104 = (((x4013+x4014)!=x4015)>>x4016);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x4017 = UINT64_MAX;
	int8_t x4019 = INT8_MAX;
	uint8_t x4020 = 0U;

    t105 = (((x4017+x4018)!=x4019)>>x4020);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x4021 = -1;
	uint8_t x4022 = UINT8_MAX;
	int64_t x4023 = INT64_MIN;
	static volatile int16_t x4024 = 1;
	int32_t t106 = -79606265;

    t106 = (((x4021+x4022)!=x4023)>>x4024);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x4041 = 17U;
	uint16_t x4042 = UINT16_MAX;
	volatile uint8_t x4044 = 30U;
	int32_t t107 = 44168;

    t107 = (((x4041+x4042)!=x4043)>>x4044);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x4046 = 983;
	static int16_t x4047 = 3662;
	volatile uint16_t x4048 = 16U;
	int32_t t108 = -1346;

    t108 = (((x4045+x4046)!=x4047)>>x4048);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x4117 = INT32_MIN;
	static uint32_t x4118 = 15083U;
	uint8_t x4120 = 0U;
	volatile int32_t t109 = 1;

    t109 = (((x4117+x4118)!=x4119)>>x4120);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x4134 = UINT64_MAX;
	uint32_t x4135 = 7330950U;
	volatile int32_t x4136 = 1;
	volatile int32_t t110 = 399;

    t110 = (((x4133+x4134)!=x4135)>>x4136);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x4209 = UINT32_MAX;
	volatile int8_t x4210 = -41;
	int64_t x4211 = -16248876008LL;
	volatile uint8_t x4212 = 19U;
	volatile int32_t t111 = 788596457;

    t111 = (((x4209+x4210)!=x4211)>>x4212);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x4257 = -1LL;
	int8_t x4259 = -1;

    t112 = (((x4257+x4258)!=x4259)>>x4260);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x4277 = -1;
	static int8_t x4280 = 0;
	static int32_t t113 = 16671;

    t113 = (((x4277+x4278)!=x4279)>>x4280);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x4293 = INT16_MIN;
	int32_t x4295 = -6302448;
	int32_t x4296 = 13;
	int32_t t114 = 3395;

    t114 = (((x4293+x4294)!=x4295)>>x4296);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x4373 = -14;
	static int32_t x4374 = -1;
	volatile uint8_t x4375 = 109U;
	uint8_t x4376 = 6U;

    t115 = (((x4373+x4374)!=x4375)>>x4376);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x4381 = 0LL;
	static int32_t x4382 = INT32_MIN;
	static int32_t x4383 = INT32_MIN;
	static int8_t x4384 = 3;
	volatile int32_t t116 = 16;

    t116 = (((x4381+x4382)!=x4383)>>x4384);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x4405 = 259939LLU;
	int32_t x4406 = -49253;
	static uint64_t x4407 = 2590451321977981326LLU;
	uint16_t x4408 = 1U;
	static volatile int32_t t117 = -119297095;

    t117 = (((x4405+x4406)!=x4407)>>x4408);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x4433 = 13932211920LLU;
	volatile uint32_t x4434 = UINT32_MAX;
	int32_t x4435 = INT32_MAX;
	int16_t x4436 = 1;
	int32_t t118 = -20028570;

    t118 = (((x4433+x4434)!=x4435)>>x4436);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x4581 = 2U;
	uint32_t x4582 = 7672083U;
	uint32_t x4583 = 9U;
	uint8_t x4584 = 28U;
	int32_t t119 = 10156;

    t119 = (((x4581+x4582)!=x4583)>>x4584);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x4599 = INT32_MAX;
	static volatile int32_t t120 = -954645;

    t120 = (((x4597+x4598)!=x4599)>>x4600);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x4605 = 10595279U;
	static int8_t x4606 = 1;
	int32_t x4607 = INT32_MIN;
	static uint8_t x4608 = 0U;
	static int32_t t121 = -12761;

    t121 = (((x4605+x4606)!=x4607)>>x4608);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x4677 = -1;
	volatile int64_t x4679 = INT64_MAX;
	int32_t t122 = -24929141;

    t122 = (((x4677+x4678)!=x4679)>>x4680);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x4681 = UINT32_MAX;
	int16_t x4682 = -1277;
	volatile uint8_t x4684 = 0U;
	static volatile int32_t t123 = 6;

    t123 = (((x4681+x4682)!=x4683)>>x4684);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x4741 = 0;
	static int32_t x4742 = INT32_MIN;
	int32_t t124 = 6959;

    t124 = (((x4741+x4742)!=x4743)>>x4744);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x4753 = INT64_MIN;
	int32_t x4754 = INT32_MAX;
	int32_t x4755 = INT32_MIN;
	volatile int32_t t125 = -15023273;

    t125 = (((x4753+x4754)!=x4755)>>x4756);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x4761 = 1638;
	int64_t x4762 = INT64_MIN;
	int32_t x4763 = 3725619;
	uint16_t x4764 = 0U;

    t126 = (((x4761+x4762)!=x4763)>>x4764);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x4773 = INT8_MIN;
	uint8_t x4774 = 29U;
	int64_t x4775 = INT64_MIN;
	volatile uint32_t x4776 = 31U;

    t127 = (((x4773+x4774)!=x4775)>>x4776);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x4844 = 6U;
	int32_t t128 = 4;

    t128 = (((x4841+x4842)!=x4843)>>x4844);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x4850 = INT8_MAX;
	volatile int16_t x4851 = -1;
	volatile int32_t t129 = -145598;

    t129 = (((x4849+x4850)!=x4851)>>x4852);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x4857 = INT16_MAX;
	static uint64_t x4858 = 1740466157LLU;
	volatile int16_t x4859 = INT16_MAX;
	static int64_t x4860 = 1LL;
	int32_t t130 = -55509;

    t130 = (((x4857+x4858)!=x4859)>>x4860);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x4889 = 0U;
	int32_t x4890 = 1142;
	static uint16_t x4892 = 4U;
	volatile int32_t t131 = 15;

    t131 = (((x4889+x4890)!=x4891)>>x4892);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x4925 = 20154U;
	int16_t x4926 = INT16_MIN;
	int16_t x4927 = 15267;
	static volatile int8_t x4928 = 0;
	volatile int32_t t132 = -1;

    t132 = (((x4925+x4926)!=x4927)>>x4928);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x4941 = 0U;
	static int32_t x4942 = -1;
	volatile int32_t x4943 = -5309563;
	static int32_t t133 = 1;

    t133 = (((x4941+x4942)!=x4943)>>x4944);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x4957 = INT8_MIN;
	uint16_t x4958 = UINT16_MAX;
	int16_t x4959 = 2216;
	volatile int32_t t134 = -685223;

    t134 = (((x4957+x4958)!=x4959)>>x4960);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x5022 = 89;
	int32_t x5024 = 0;
	volatile int32_t t135 = -794869;

    t135 = (((x5021+x5022)!=x5023)>>x5024);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x5181 = 181775U;
	uint64_t x5182 = UINT64_MAX;
	int32_t t136 = 231516;

    t136 = (((x5181+x5182)!=x5183)>>x5184);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x5253 = UINT32_MAX;
	int32_t x5254 = INT32_MAX;
	uint64_t x5255 = 1743615032387728LLU;
	volatile uint16_t x5256 = 1U;
	static int32_t t137 = 445678459;

    t137 = (((x5253+x5254)!=x5255)>>x5256);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x5317 = INT16_MAX;
	static volatile uint8_t x5319 = 83U;
	static volatile int32_t t138 = -57;

    t138 = (((x5317+x5318)!=x5319)>>x5320);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x5367 = UINT8_MAX;
	volatile uint8_t x5368 = 11U;
	volatile int32_t t139 = 90313;

    t139 = (((x5365+x5366)!=x5367)>>x5368);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x5373 = 5058643170LLU;
	int64_t x5374 = -1LL;
	int32_t x5375 = -1;
	uint16_t x5376 = 2U;
	static volatile int32_t t140 = -241;

    t140 = (((x5373+x5374)!=x5375)>>x5376);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x5378 = -1LL;
	int64_t x5379 = -17338399LL;
	volatile int32_t t141 = -38;

    t141 = (((x5377+x5378)!=x5379)>>x5380);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x5381 = -2002994;
	int32_t x5382 = -1;
	uint16_t x5383 = 62U;
	uint16_t x5384 = 30U;
	volatile int32_t t142 = -51176;

    t142 = (((x5381+x5382)!=x5383)>>x5384);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x5393 = INT8_MIN;
	int32_t x5394 = -1;
	uint32_t x5395 = 797183U;
	int8_t x5396 = 0;
	int32_t t143 = 81855;

    t143 = (((x5393+x5394)!=x5395)>>x5396);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x5410 = -42889969LL;
	uint16_t x5411 = 4U;
	uint32_t x5412 = 30U;
	volatile int32_t t144 = -1708;

    t144 = (((x5409+x5410)!=x5411)>>x5412);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x5486 = -1;
	uint8_t x5488 = 6U;
	volatile int32_t t145 = 77;

    t145 = (((x5485+x5486)!=x5487)>>x5488);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x5530 = 34450;
	static volatile int16_t x5532 = 1;
	static int32_t t146 = -20658133;

    t146 = (((x5529+x5530)!=x5531)>>x5532);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint16_t x5538 = 6U;
	int8_t x5539 = 8;
	volatile int32_t t147 = -53245509;

    t147 = (((x5537+x5538)!=x5539)>>x5540);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x5562 = INT32_MIN;
	int16_t x5563 = 1;
	uint16_t x5564 = 12U;
	static volatile int32_t t148 = 1040;

    t148 = (((x5561+x5562)!=x5563)>>x5564);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x5585 = 978LLU;
	int16_t x5587 = INT16_MAX;
	uint16_t x5588 = 9U;
	volatile int32_t t149 = -237;

    t149 = (((x5585+x5586)!=x5587)>>x5588);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x5591 = 10765911187LLU;
	int8_t x5592 = 5;
	int32_t t150 = 940539338;

    t150 = (((x5589+x5590)!=x5591)>>x5592);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x5661 = 109;
	uint8_t x5662 = 14U;
	int32_t x5663 = INT32_MIN;
	int8_t x5664 = 0;

    t151 = (((x5661+x5662)!=x5663)>>x5664);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x5665 = -1LL;
	uint64_t x5666 = 123801328LLU;
	volatile int32_t x5667 = INT32_MAX;
	int32_t t152 = 27281;

    t152 = (((x5665+x5666)!=x5667)>>x5668);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x5681 = 5U;
	uint8_t x5682 = UINT8_MAX;
	int16_t x5683 = -1;
	static uint8_t x5684 = 3U;
	int32_t t153 = -6;

    t153 = (((x5681+x5682)!=x5683)>>x5684);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x5687 = INT32_MAX;
	static volatile uint8_t x5688 = 30U;
	static volatile int32_t t154 = -2869;

    t154 = (((x5685+x5686)!=x5687)>>x5688);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x5737 = 1U;
	static uint16_t x5738 = 27U;
	static uint16_t x5739 = UINT16_MAX;
	int8_t x5740 = 16;
	int32_t t155 = -1;

    t155 = (((x5737+x5738)!=x5739)>>x5740);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x5762 = INT8_MAX;
	int32_t x5763 = INT32_MIN;
	static int32_t t156 = -79461511;

    t156 = (((x5761+x5762)!=x5763)>>x5764);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x5818 = 81091072U;
	int64_t x5819 = INT64_MAX;
	static volatile int16_t x5820 = 1;

    t157 = (((x5817+x5818)!=x5819)>>x5820);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x5889 = -1;
	volatile int64_t x5890 = -892LL;
	uint16_t x5892 = 17U;
	int32_t t158 = 2;

    t158 = (((x5889+x5890)!=x5891)>>x5892);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x5925 = 0LLU;
	uint8_t x5926 = UINT8_MAX;
	static int8_t x5928 = 6;
	int32_t t159 = 4943352;

    t159 = (((x5925+x5926)!=x5927)>>x5928);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x5945 = 897LLU;
	static uint32_t x5946 = UINT32_MAX;
	int16_t x5947 = INT16_MIN;
	uint8_t x5948 = 13U;
	int32_t t160 = -1;

    t160 = (((x5945+x5946)!=x5947)>>x5948);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x6010 = -1LL;
	static uint32_t x6011 = 1068721197U;
	volatile int8_t x6012 = 1;

    t161 = (((x6009+x6010)!=x6011)>>x6012);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x6021 = 5;
	static int32_t x6024 = 14;
	volatile int32_t t162 = -34;

    t162 = (((x6021+x6022)!=x6023)>>x6024);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x6073 = INT16_MAX;

    t163 = (((x6073+x6074)!=x6075)>>x6076);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x6149 = 16U;
	int64_t x6150 = INT64_MIN;
	volatile uint16_t x6151 = 7U;
	static uint8_t x6152 = 1U;
	static volatile int32_t t164 = -46763356;

    t164 = (((x6149+x6150)!=x6151)>>x6152);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x6185 = 45U;
	static volatile uint8_t x6186 = 1U;
	int32_t x6187 = INT32_MIN;
	int32_t t165 = -22020736;

    t165 = (((x6185+x6186)!=x6187)>>x6188);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x6189 = 6951U;
	int16_t x6192 = 0;
	volatile int32_t t166 = 301669;

    t166 = (((x6189+x6190)!=x6191)>>x6192);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x6197 = INT64_MIN;
	static int8_t x6198 = 0;
	static int64_t x6199 = INT64_MIN;
	uint16_t x6200 = 2U;
	volatile int32_t t167 = 801434;

    t167 = (((x6197+x6198)!=x6199)>>x6200);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x6201 = 3U;
	int16_t x6203 = INT16_MIN;
	uint8_t x6204 = 0U;
	volatile int32_t t168 = -879;

    t168 = (((x6201+x6202)!=x6203)>>x6204);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x6229 = INT64_MIN;
	int16_t x6230 = 14;
	int64_t x6231 = -390268210097894641LL;
	volatile int32_t t169 = -489084239;

    t169 = (((x6229+x6230)!=x6231)>>x6232);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x6233 = 6U;
	int8_t x6234 = -1;
	volatile uint64_t x6235 = 1061LLU;
	int16_t x6236 = 1;
	volatile int32_t t170 = -949244638;

    t170 = (((x6233+x6234)!=x6235)>>x6236);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x6241 = UINT32_MAX;
	int16_t x6242 = INT16_MIN;
	static uint8_t x6243 = UINT8_MAX;
	volatile uint32_t x6244 = 1U;
	volatile int32_t t171 = -15836;

    t171 = (((x6241+x6242)!=x6243)>>x6244);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x6269 = -69237140;
	static volatile int16_t x6270 = INT16_MAX;
	static uint8_t x6271 = 3U;
	uint16_t x6272 = 15U;

    t172 = (((x6269+x6270)!=x6271)>>x6272);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x6289 = INT8_MIN;
	int16_t x6290 = INT16_MIN;
	uint16_t x6291 = 38U;
	uint8_t x6292 = 0U;
	int32_t t173 = 47501971;

    t173 = (((x6289+x6290)!=x6291)>>x6292);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x6301 = -3;
	int8_t x6303 = INT8_MIN;
	int8_t x6304 = 0;
	volatile int32_t t174 = -109;

    t174 = (((x6301+x6302)!=x6303)>>x6304);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x6393 = -20;
	int8_t x6395 = -47;
	int16_t x6396 = 10;
	volatile int32_t t175 = -837519821;

    t175 = (((x6393+x6394)!=x6395)>>x6396);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x6401 = 1;
	uint8_t x6404 = 26U;
	static int32_t t176 = -51603;

    t176 = (((x6401+x6402)!=x6403)>>x6404);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x6409 = -1;
	uint32_t x6410 = 1496072U;
	volatile int8_t x6411 = 1;
	uint16_t x6412 = 18U;
	static volatile int32_t t177 = 0;

    t177 = (((x6409+x6410)!=x6411)>>x6412);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x6417 = INT32_MIN;
	uint16_t x6418 = 15U;
	uint8_t x6420 = 6U;
	int32_t t178 = -1;

    t178 = (((x6417+x6418)!=x6419)>>x6420);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t t179 = -36420903;

    t179 = (((x6465+x6466)!=x6467)>>x6468);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x6477 = UINT64_MAX;
	int16_t x6478 = INT16_MAX;
	int64_t x6480 = 0LL;
	volatile int32_t t180 = 10;

    t180 = (((x6477+x6478)!=x6479)>>x6480);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x6481 = -1;
	uint32_t x6482 = UINT32_MAX;
	static int8_t x6483 = 1;
	static volatile int32_t t181 = 0;

    t181 = (((x6481+x6482)!=x6483)>>x6484);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x6485 = -1;
	int8_t x6486 = INT8_MIN;
	static int64_t x6487 = INT64_MAX;

    t182 = (((x6485+x6486)!=x6487)>>x6488);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x6494 = 412;
	uint64_t x6495 = 179006757482954LLU;

    t183 = (((x6493+x6494)!=x6495)>>x6496);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x6501 = 422U;
	static volatile uint32_t x6502 = 7439109U;
	uint64_t x6504 = 4LLU;
	int32_t t184 = -3228442;

    t184 = (((x6501+x6502)!=x6503)>>x6504);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x6585 = 7LLU;
	uint16_t x6586 = 3534U;
	static int32_t x6587 = INT32_MAX;
	volatile uint8_t x6588 = 26U;
	volatile int32_t t185 = 502;

    t185 = (((x6585+x6586)!=x6587)>>x6588);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x6605 = INT64_MAX;
	int16_t x6607 = -8;
	uint8_t x6608 = 0U;
	int32_t t186 = 64838;

    t186 = (((x6605+x6606)!=x6607)>>x6608);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x6685 = -1;
	int16_t x6686 = INT16_MIN;
	volatile int32_t x6687 = INT32_MIN;
	uint8_t x6688 = 0U;

    t187 = (((x6685+x6686)!=x6687)>>x6688);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x6701 = 48611LLU;
	static uint16_t x6703 = 9U;
	static int16_t x6704 = 22;
	volatile int32_t t188 = 4345;

    t188 = (((x6701+x6702)!=x6703)>>x6704);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x6717 = INT32_MAX;
	int32_t x6718 = INT32_MIN;
	int16_t x6719 = -2586;
	uint16_t x6720 = 17U;
	volatile int32_t t189 = 54;

    t189 = (((x6717+x6718)!=x6719)>>x6720);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x6721 = -1LL;
	int32_t x6722 = -1;
	int8_t x6723 = INT8_MAX;
	uint8_t x6724 = 0U;
	static int32_t t190 = -31105;

    t190 = (((x6721+x6722)!=x6723)>>x6724);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x6734 = UINT64_MAX;
	uint32_t x6736 = 27U;
	volatile int32_t t191 = -14;

    t191 = (((x6733+x6734)!=x6735)>>x6736);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x6753 = 3U;
	uint64_t x6754 = 195470530361LLU;
	static int64_t x6755 = INT64_MIN;
	uint16_t x6756 = 2U;
	volatile int32_t t192 = -3354;

    t192 = (((x6753+x6754)!=x6755)>>x6756);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x6757 = UINT32_MAX;
	volatile int8_t x6758 = -1;
	static uint8_t x6760 = 3U;
	volatile int32_t t193 = -1969;

    t193 = (((x6757+x6758)!=x6759)>>x6760);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x6769 = UINT64_MAX;
	int32_t x6770 = INT32_MIN;
	int8_t x6771 = INT8_MIN;
	uint16_t x6772 = 0U;
	int32_t t194 = -89450;

    t194 = (((x6769+x6770)!=x6771)>>x6772);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x6773 = 2U;
	int32_t x6774 = -1;
	static uint32_t x6775 = 14U;
	volatile uint8_t x6776 = 0U;
	static volatile int32_t t195 = 52198;

    t195 = (((x6773+x6774)!=x6775)>>x6776);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x6810 = 111U;
	int32_t x6811 = -2;
	int8_t x6812 = 4;
	int32_t t196 = 1;

    t196 = (((x6809+x6810)!=x6811)>>x6812);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x6889 = 63U;
	int16_t x6890 = -1;
	int32_t x6891 = -197;
	int16_t x6892 = 3;
	int32_t t197 = 1888;

    t197 = (((x6889+x6890)!=x6891)>>x6892);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x6897 = 5;
	int16_t x6898 = INT16_MAX;
	int16_t x6899 = INT16_MIN;
	uint16_t x6900 = 5U;
	volatile int32_t t198 = -3;

    t198 = (((x6897+x6898)!=x6899)>>x6900);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x6917 = 4U;
	int32_t x6918 = -1;
	static int16_t x6919 = -58;
	static uint64_t x6920 = 11LLU;
	volatile int32_t t199 = -20523;

    t199 = (((x6917+x6918)!=x6919)>>x6920);

    if (t199 != 0) { NG(); } else { ; }
	
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

