
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

int64_t x41 = INT64_MIN;
uint8_t x44 = 2U;
uint32_t x151 = 2U;
int16_t x169 = INT16_MIN;
static uint16_t x170 = UINT16_MAX;
static int8_t x183 = 10;
int16_t x213 = INT16_MIN;
volatile int8_t x214 = INT8_MAX;
static uint64_t t8 = 2023LLU;
volatile int8_t x633 = -1;
int8_t x634 = -12;
int64_t x636 = 12LL;
int32_t t9 = 7;
static int16_t x778 = INT16_MAX;
uint64_t x798 = 1460110027147793799LLU;
static uint8_t x800 = 3U;
uint8_t x808 = 20U;
static int32_t x831 = INT32_MAX;
uint32_t x855 = 29U;
int64_t x859 = 370896345206702LL;
int64_t t16 = 9154024617LL;
int16_t x933 = -3381;
int64_t t17 = INT64_MAX;
static int8_t x973 = INT8_MIN;
uint32_t x1067 = 0U;
volatile uint64_t t21 = 2274827LLU;
int8_t x1102 = INT8_MIN;
int8_t x1125 = INT8_MIN;
int16_t x1165 = -1;
volatile uint32_t t27 = 2U;
uint16_t x1263 = 13U;
int8_t x1264 = 0;
int32_t x1270 = INT32_MIN;
int8_t x1272 = 0;
uint8_t x1350 = UINT8_MAX;
int32_t t30 = 3052;
volatile int32_t x1405 = -355058006;
static int16_t x1406 = INT16_MAX;
uint32_t t32 = 2994875U;
volatile uint32_t x1456 = 15U;
int64_t t35 = -84506LL;
int32_t x1639 = INT32_MAX;
static volatile uint32_t x1655 = 446590U;
int64_t x1662 = 6785910LL;
volatile int64_t x1778 = 3583046146177316753LL;
uint32_t x1779 = 1637196U;
uint32_t t42 = 901982541U;
uint16_t x1792 = 49U;
volatile int64_t x1807 = INT64_MAX;
int16_t x1873 = -1;
int8_t x1884 = 1;
uint8_t x2218 = 73U;
int32_t x2219 = 6020;
int64_t x2220 = 0LL;
uint8_t x2224 = 4U;
int8_t x2278 = 21;
static int32_t x2281 = -1;
uint64_t x2282 = UINT64_MAX;
int16_t x2335 = 21;
static int8_t x2377 = INT8_MIN;
int64_t x2378 = INT64_MIN;
uint64_t x2490 = UINT64_MAX;
uint16_t x2529 = 10U;
static uint16_t x2531 = UINT16_MAX;
uint32_t x2671 = 1820411U;
uint32_t t63 = 628380U;
uint64_t t64 = 14740LLU;
int32_t x2733 = -3702;
int16_t x2736 = 22;
uint64_t t65 = 1544168420115577LLU;
static int32_t x2745 = INT32_MIN;
static uint32_t x2747 = 30684U;
uint32_t t66 = 7226231U;
int16_t x2957 = INT16_MIN;
uint8_t x2960 = 3U;
static int32_t x3171 = 21952;
int16_t x3282 = -2;
int8_t x3284 = 20;
uint64_t x3311 = 1410LLU;
int32_t x3441 = -26;
volatile int8_t x3442 = -1;
static int16_t x3734 = INT16_MIN;
volatile int32_t t80 = 1;
uint32_t x3951 = 15U;
static uint8_t x3954 = 3U;
uint16_t x3956 = 0U;
volatile int32_t t82 = -480956738;
static volatile uint8_t x4044 = 8U;
volatile int32_t x4056 = 6;
static int16_t x4161 = INT16_MAX;
int64_t x4178 = INT64_MIN;
int32_t x4301 = INT32_MIN;
uint8_t x4514 = 84U;
uint64_t x4695 = 1151707398255256674LLU;
uint8_t x4696 = 39U;
volatile int16_t x4705 = INT16_MIN;
uint32_t x4720 = 15U;
int64_t x4978 = INT64_MIN;
int64_t x5113 = -59478LL;
volatile int16_t x5114 = -1;
uint8_t x5116 = 0U;
static int32_t t102 = 6361;
uint8_t x5276 = 7U;
volatile uint8_t x5280 = 0U;
uint32_t x5350 = UINT32_MAX;
int8_t x5352 = 13;
uint8_t x5416 = 3U;
int64_t x5451 = INT64_MAX;
uint16_t x5493 = 67U;
int32_t x5494 = INT32_MAX;
volatile uint32_t x5495 = 105734U;
uint16_t x5514 = 7264U;
uint16_t x5516 = 1U;
uint16_t x5520 = 43U;
static int32_t x5525 = 533275084;
int32_t x5657 = INT32_MIN;
uint64_t x5658 = UINT64_MAX;
uint16_t x5659 = 5U;
volatile int8_t x5681 = INT8_MIN;
static uint16_t x5683 = UINT16_MAX;
int16_t x5749 = INT16_MIN;
uint32_t x5769 = UINT32_MAX;
volatile uint8_t x5772 = 27U;
uint16_t x5807 = 295U;
uint64_t x5930 = UINT64_MAX;
int64_t x5931 = 558241674373284502LL;
int32_t x5932 = 0;
volatile int64_t t123 = -8719018428805LL;
int8_t x6065 = INT8_MIN;
volatile uint32_t x6132 = 9U;
int64_t x6330 = 98353271747987LL;
volatile int32_t t127 = 0;
volatile int32_t t128 = -13551;
int8_t x6371 = INT8_MAX;
static volatile uint8_t x6372 = 11U;
volatile int32_t t129 = 667;
volatile uint8_t x6384 = 14U;
int16_t x6405 = INT16_MIN;
int8_t x6536 = 16;
uint64_t x6589 = 33038LLU;
int8_t x6592 = 7;
int32_t t135 = 2;
static int64_t x6718 = 56LL;
uint8_t x6732 = 53U;
int64_t x6906 = -3LL;
static uint8_t x7053 = 115U;
uint8_t x7056 = 2U;
volatile uint8_t x7187 = 7U;
int64_t x7255 = INT64_MAX;
static volatile int32_t x7278 = -115885;
uint16_t x7390 = UINT16_MAX;
static volatile uint16_t x7437 = UINT16_MAX;
volatile uint8_t x7483 = 19U;
int8_t x7512 = 0;
volatile uint64_t x7720 = 7LLU;
static int32_t t153 = 54927;
uint16_t x7760 = 4U;
uint8_t x7955 = 20U;
uint16_t x8001 = 155U;
uint16_t x8024 = 3U;
int32_t x8026 = 35160517;
static uint16_t x8027 = UINT16_MAX;
int32_t t161 = -5083;
int8_t x8150 = 1;
static uint8_t x8168 = 1U;
static volatile int32_t t163 = 1036656189;
uint64_t x8267 = 6977LLU;
static volatile int8_t x8333 = INT8_MIN;
volatile int64_t t167 = -65544295860743393LL;
uint16_t x8557 = 9U;
int64_t x8734 = 226524464498683998LL;
int64_t x8913 = INT64_MIN;
int32_t t173 = -2077489;
int64_t x8958 = INT64_MIN;
uint8_t x8960 = 1U;
volatile uint32_t t178 = 6U;
static volatile int32_t t179 = -676204473;
uint8_t x9125 = 9U;
int64_t x9134 = INT64_MIN;
static int32_t x9186 = INT32_MIN;
static int32_t x9248 = 3;
volatile int8_t x9294 = INT8_MIN;
volatile uint16_t x9295 = UINT16_MAX;
int8_t x9296 = 0;
static uint32_t x9367 = 131642U;
volatile uint32_t t186 = 26848U;
uint64_t t187 = 3210622LLU;
static volatile int16_t x9538 = INT16_MIN;
uint32_t x9638 = 1U;
static int32_t t191 = 21255409;
volatile uint16_t x9649 = 5U;
volatile uint64_t t192 = 26651484446348LLU;
int8_t x9817 = INT8_MIN;
uint8_t x9820 = 0U;
int8_t x10061 = INT8_MIN;
volatile uint64_t t196 = 6192834LLU;
volatile uint8_t x10288 = 8U;
int8_t x10342 = -1;


void f0(void) {
    	static int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MAX;
	volatile int32_t t0 = 46038350;

    t0 = (((x41==x42)|x43)>>x44);

    if (t0 != 8191) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x97 = -1;
	volatile uint8_t x98 = 0U;
	volatile uint64_t x99 = 65LLU;
	uint8_t x100 = 4U;
	volatile uint64_t t1 = 224623148725446LLU;

    t1 = (((x97==x98)|x99)>>x100);

    if (t1 != 4LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x113 = INT16_MIN;
	volatile int32_t x114 = -1;
	static uint16_t x115 = 243U;
	uint32_t x116 = 10U;
	int32_t t2 = -470;

    t2 = (((x113==x114)|x115)>>x116);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x149 = INT32_MIN;
	uint64_t x150 = UINT64_MAX;
	uint8_t x152 = 2U;
	volatile uint32_t t3 = 3996U;

    t3 = (((x149==x150)|x151)>>x152);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x171 = 4;
	volatile int8_t x172 = 1;
	static int32_t t4 = 1;

    t4 = (((x169==x170)|x171)>>x172);

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x181 = 15U;
	int32_t x182 = INT32_MIN;
	volatile uint32_t x184 = 29U;
	int32_t t5 = -109403;

    t5 = (((x181==x182)|x183)>>x184);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x215 = UINT16_MAX;
	static int16_t x216 = 8;
	int32_t t6 = -1;

    t6 = (((x213==x214)|x215)>>x216);

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x553 = 7LL;
	static volatile int16_t x554 = INT16_MAX;
	int16_t x555 = 0;
	uint16_t x556 = 3U;
	int32_t t7 = -19344;

    t7 = (((x553==x554)|x555)>>x556);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x593 = -1LL;
	volatile int8_t x594 = INT8_MIN;
	uint64_t x595 = 381LLU;
	int8_t x596 = 42;

    t8 = (((x593==x594)|x595)>>x596);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x635 = 0U;

    t9 = (((x633==x634)|x635)>>x636);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x637 = -1;
	int16_t x638 = -1;
	static uint32_t x639 = 2139091U;
	static int8_t x640 = 7;
	uint32_t t10 = 26911U;

    t10 = (((x637==x638)|x639)>>x640);

    if (t10 != 16711U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x777 = INT32_MIN;
	uint64_t x779 = 6039458427318LLU;
	volatile uint8_t x780 = 13U;
	volatile uint64_t t11 = 175673007773578939LLU;

    t11 = (((x777==x778)|x779)>>x780);

    if (t11 != 737238577LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x797 = 21U;
	volatile int16_t x799 = 86;
	volatile int32_t t12 = -1131623;

    t12 = (((x797==x798)|x799)>>x800);

    if (t12 != 10) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x805 = UINT16_MAX;
	int16_t x806 = INT16_MIN;
	int64_t x807 = 6666704LL;
	int64_t t13 = -613768808704488629LL;

    t13 = (((x805==x806)|x807)>>x808);

    if (t13 != 6LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x829 = INT32_MIN;
	volatile uint8_t x830 = 21U;
	uint8_t x832 = 1U;
	volatile int32_t t14 = -3748721;

    t14 = (((x829==x830)|x831)>>x832);

    if (t14 != 1073741823) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x853 = 1U;
	int8_t x854 = INT8_MIN;
	volatile uint16_t x856 = 2U;
	volatile uint32_t t15 = 12229U;

    t15 = (((x853==x854)|x855)>>x856);

    if (t15 != 7U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x857 = INT16_MAX;
	uint64_t x858 = 111891948937360LLU;
	volatile uint16_t x860 = 1U;

    t16 = (((x857==x858)|x859)>>x860);

    if (t16 != 185448172603351LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x934 = INT16_MIN;
	int64_t x935 = INT64_MAX;
	int8_t x936 = 0;

    t17 = (((x933==x934)|x935)>>x936);

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x974 = -1;
	uint64_t x975 = 34180LLU;
	volatile uint16_t x976 = 1U;
	uint64_t t18 = 1745253221381941392LLU;

    t18 = (((x973==x974)|x975)>>x976);

    if (t18 != 17090LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1065 = UINT32_MAX;
	static volatile int64_t x1066 = -1415426493224LL;
	volatile uint8_t x1068 = 3U;
	volatile uint32_t t19 = 30404U;

    t19 = (((x1065==x1066)|x1067)>>x1068);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x1073 = UINT64_MAX;
	uint8_t x1074 = 2U;
	int64_t x1075 = INT64_MAX;
	int16_t x1076 = 1;
	volatile int64_t t20 = 94306700936LL;

    t20 = (((x1073==x1074)|x1075)>>x1076);

    if (t20 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1093 = 8127593;
	int32_t x1094 = INT32_MAX;
	volatile uint64_t x1095 = 15865089LLU;
	int8_t x1096 = 31;

    t21 = (((x1093==x1094)|x1095)>>x1096);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1101 = UINT64_MAX;
	uint16_t x1103 = 0U;
	uint64_t x1104 = 25LLU;
	int32_t t22 = -156801592;

    t22 = (((x1101==x1102)|x1103)>>x1104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1126 = INT32_MIN;
	int64_t x1127 = 2087310548LL;
	int8_t x1128 = 1;
	volatile int64_t t23 = 90536LL;

    t23 = (((x1125==x1126)|x1127)>>x1128);

    if (t23 != 1043655274LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1166 = INT64_MAX;
	int64_t x1167 = 544956389894496011LL;
	int16_t x1168 = 2;
	volatile int64_t t24 = 122051234403003199LL;

    t24 = (((x1165==x1166)|x1167)>>x1168);

    if (t24 != 136239097473624002LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x1185 = 187;
	uint32_t x1186 = 77910U;
	volatile int16_t x1187 = 0;
	static int8_t x1188 = 0;
	static int32_t t25 = -117577676;

    t25 = (((x1185==x1186)|x1187)>>x1188);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1209 = -1;
	int64_t x1210 = INT64_MIN;
	static volatile uint8_t x1211 = UINT8_MAX;
	int16_t x1212 = 2;
	static int32_t t26 = -9;

    t26 = (((x1209==x1210)|x1211)>>x1212);

    if (t26 != 63) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x1221 = 0LL;
	static uint32_t x1222 = 113905304U;
	volatile uint32_t x1223 = 1407407581U;
	uint8_t x1224 = 31U;

    t27 = (((x1221==x1222)|x1223)>>x1224);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1261 = INT64_MAX;
	volatile int8_t x1262 = INT8_MIN;
	static volatile int32_t t28 = 125;

    t28 = (((x1261==x1262)|x1263)>>x1264);

    if (t28 != 13) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x1269 = UINT32_MAX;
	int64_t x1271 = 18LL;
	static volatile int64_t t29 = 455779656LL;

    t29 = (((x1269==x1270)|x1271)>>x1272);

    if (t29 != 18LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x1349 = 16108244280LLU;
	int8_t x1351 = INT8_MAX;
	int8_t x1352 = 0;

    t30 = (((x1349==x1350)|x1351)>>x1352);

    if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x1407 = UINT64_MAX;
	int16_t x1408 = 1;
	static uint64_t t31 = 2149530759784658LLU;

    t31 = (((x1405==x1406)|x1407)>>x1408);

    if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x1421 = INT16_MAX;
	uint32_t x1422 = 16983U;
	uint32_t x1423 = 2092093549U;
	uint8_t x1424 = 0U;

    t32 = (((x1421==x1422)|x1423)>>x1424);

    if (t32 != 2092093549U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1453 = INT64_MAX;
	static int16_t x1454 = INT16_MIN;
	uint8_t x1455 = 2U;
	volatile int32_t t33 = 9995842;

    t33 = (((x1453==x1454)|x1455)>>x1456);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1461 = 124;
	int64_t x1462 = 0LL;
	uint8_t x1463 = UINT8_MAX;
	volatile uint8_t x1464 = 13U;
	volatile int32_t t34 = -179818967;

    t34 = (((x1461==x1462)|x1463)>>x1464);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1465 = -686005833963295LL;
	static int64_t x1466 = -1LL;
	int64_t x1467 = INT64_MAX;
	uint8_t x1468 = 5U;

    t35 = (((x1465==x1466)|x1467)>>x1468);

    if (t35 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1477 = -53;
	int16_t x1478 = -1;
	static uint8_t x1479 = 2U;
	uint8_t x1480 = 0U;
	static volatile int32_t t36 = 10138;

    t36 = (((x1477==x1478)|x1479)>>x1480);

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x1637 = 23;
	int32_t x1638 = INT32_MAX;
	volatile uint8_t x1640 = 6U;
	volatile int32_t t37 = 506857;

    t37 = (((x1637==x1638)|x1639)>>x1640);

    if (t37 != 33554431) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x1653 = -13;
	static uint64_t x1654 = 1915020001LLU;
	volatile uint16_t x1656 = 6U;
	volatile uint32_t t38 = 219U;

    t38 = (((x1653==x1654)|x1655)>>x1656);

    if (t38 != 6977U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x1661 = 33;
	static volatile uint32_t x1663 = UINT32_MAX;
	int8_t x1664 = 1;
	static uint32_t t39 = 37U;

    t39 = (((x1661==x1662)|x1663)>>x1664);

    if (t39 != 2147483647U) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x1665 = -53885506886251LL;
	static int64_t x1666 = INT64_MIN;
	uint8_t x1667 = 29U;
	uint8_t x1668 = 14U;
	volatile int32_t t40 = 14;

    t40 = (((x1665==x1666)|x1667)>>x1668);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x1713 = INT32_MAX;
	int16_t x1714 = -3630;
	int64_t x1715 = 1338310LL;
	uint64_t x1716 = 2LLU;
	int64_t t41 = -24888848564400LL;

    t41 = (((x1713==x1714)|x1715)>>x1716);

    if (t41 != 334577LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1777 = INT8_MIN;
	volatile uint16_t x1780 = 0U;

    t42 = (((x1777==x1778)|x1779)>>x1780);

    if (t42 != 1637196U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x1789 = -1;
	int16_t x1790 = INT16_MIN;
	static volatile int64_t x1791 = INT64_MAX;
	volatile int64_t t43 = -3LL;

    t43 = (((x1789==x1790)|x1791)>>x1792);

    if (t43 != 16383LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x1805 = 11U;
	int8_t x1806 = INT8_MIN;
	volatile uint8_t x1808 = 17U;
	int64_t t44 = 446146980642LL;

    t44 = (((x1805==x1806)|x1807)>>x1808);

    if (t44 != 70368744177663LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x1874 = UINT8_MAX;
	uint16_t x1875 = 24U;
	uint8_t x1876 = 2U;
	static volatile int32_t t45 = -103;

    t45 = (((x1873==x1874)|x1875)>>x1876);

    if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x1881 = INT16_MIN;
	uint32_t x1882 = UINT32_MAX;
	volatile uint8_t x1883 = 0U;
	static volatile int32_t t46 = 4336;

    t46 = (((x1881==x1882)|x1883)>>x1884);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x2017 = 1372;
	int32_t x2018 = -9567;
	uint32_t x2019 = UINT32_MAX;
	uint8_t x2020 = 1U;
	volatile uint32_t t47 = 0U;

    t47 = (((x2017==x2018)|x2019)>>x2020);

    if (t47 != 2147483647U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x2037 = 15544896U;
	int8_t x2038 = -1;
	volatile uint32_t x2039 = UINT32_MAX;
	static uint8_t x2040 = 5U;
	volatile uint32_t t48 = 879989817U;

    t48 = (((x2037==x2038)|x2039)>>x2040);

    if (t48 != 134217727U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2177 = 72U;
	volatile int32_t x2178 = INT32_MIN;
	uint8_t x2179 = 13U;
	static int8_t x2180 = 1;
	volatile int32_t t49 = 4;

    t49 = (((x2177==x2178)|x2179)>>x2180);

    if (t49 != 6) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x2193 = -1;
	static uint8_t x2194 = UINT8_MAX;
	static volatile int16_t x2195 = INT16_MAX;
	int32_t x2196 = 0;
	static int32_t t50 = -466517;

    t50 = (((x2193==x2194)|x2195)>>x2196);

    if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x2217 = INT16_MAX;
	static int32_t t51 = -119;

    t51 = (((x2217==x2218)|x2219)>>x2220);

    if (t51 != 6020) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x2221 = 20799U;
	int64_t x2222 = -1LL;
	uint8_t x2223 = 9U;
	volatile int32_t t52 = 43;

    t52 = (((x2221==x2222)|x2223)>>x2224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x2273 = -1;
	volatile uint16_t x2274 = UINT16_MAX;
	volatile uint16_t x2275 = 32146U;
	static volatile uint8_t x2276 = 4U;
	static int32_t t53 = -440590;

    t53 = (((x2273==x2274)|x2275)>>x2276);

    if (t53 != 2009) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x2277 = INT32_MAX;
	static volatile int64_t x2279 = 121800999726006195LL;
	volatile int8_t x2280 = 42;
	volatile int64_t t54 = 39192LL;

    t54 = (((x2277==x2278)|x2279)>>x2280);

    if (t54 != 27694LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x2283 = INT32_MAX;
	volatile uint16_t x2284 = 1U;
	int32_t t55 = -1;

    t55 = (((x2281==x2282)|x2283)>>x2284);

    if (t55 != 1073741823) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x2333 = 1151057899826358692LLU;
	static int32_t x2334 = INT32_MIN;
	volatile int64_t x2336 = 1LL;
	volatile int32_t t56 = -159;

    t56 = (((x2333==x2334)|x2335)>>x2336);

    if (t56 != 10) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x2379 = 0LL;
	uint16_t x2380 = 5U;
	volatile int64_t t57 = -23LL;

    t57 = (((x2377==x2378)|x2379)>>x2380);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x2413 = -1;
	int8_t x2414 = -1;
	volatile int16_t x2415 = INT16_MAX;
	int16_t x2416 = 2;
	volatile int32_t t58 = 144782;

    t58 = (((x2413==x2414)|x2415)>>x2416);

    if (t58 != 8191) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x2457 = 0;
	volatile uint16_t x2458 = UINT16_MAX;
	volatile int64_t x2459 = 139217864465350213LL;
	int8_t x2460 = 1;
	int64_t t59 = 1919582324LL;

    t59 = (((x2457==x2458)|x2459)>>x2460);

    if (t59 != 69608932232675106LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x2489 = 1U;
	int16_t x2491 = 13;
	static int8_t x2492 = 1;
	int32_t t60 = -21057798;

    t60 = (((x2489==x2490)|x2491)>>x2492);

    if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x2530 = UINT16_MAX;
	uint8_t x2532 = 7U;
	int32_t t61 = 58;

    t61 = (((x2529==x2530)|x2531)>>x2532);

    if (t61 != 511) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x2645 = 2550805U;
	int32_t x2646 = -63;
	volatile uint64_t x2647 = 92481826811920652LLU;
	volatile uint16_t x2648 = 1U;
	uint64_t t62 = 2289208970292290LLU;

    t62 = (((x2645==x2646)|x2647)>>x2648);

    if (t62 != 46240913405960326LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x2669 = -1;
	uint32_t x2670 = 204442500U;
	static int8_t x2672 = 1;

    t63 = (((x2669==x2670)|x2671)>>x2672);

    if (t63 != 910205U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x2673 = -1;
	int32_t x2674 = 596558;
	uint64_t x2675 = UINT64_MAX;
	int16_t x2676 = 1;

    t64 = (((x2673==x2674)|x2675)>>x2676);

    if (t64 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x2734 = 180298380380135LLU;
	uint64_t x2735 = 66908396521152LLU;

    t65 = (((x2733==x2734)|x2735)>>x2736);

    if (t65 != 15952204LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x2746 = INT16_MAX;
	uint8_t x2748 = 1U;

    t66 = (((x2745==x2746)|x2747)>>x2748);

    if (t66 != 15342U) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x2813 = -52793822;
	int32_t x2814 = 777007;
	int32_t x2815 = INT32_MAX;
	static int8_t x2816 = 13;
	int32_t t67 = -146;

    t67 = (((x2813==x2814)|x2815)>>x2816);

    if (t67 != 262143) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x2829 = INT16_MAX;
	uint8_t x2830 = 5U;
	int32_t x2831 = INT32_MAX;
	static volatile int16_t x2832 = 0;
	static volatile int32_t t68 = INT32_MAX;

    t68 = (((x2829==x2830)|x2831)>>x2832);

    if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x2958 = INT32_MIN;
	int8_t x2959 = 1;
	volatile int32_t t69 = 632703;

    t69 = (((x2957==x2958)|x2959)>>x2960);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x2965 = 1239U;
	int64_t x2966 = INT64_MAX;
	static int8_t x2967 = 6;
	volatile uint8_t x2968 = 0U;
	static volatile int32_t t70 = 544;

    t70 = (((x2965==x2966)|x2967)>>x2968);

    if (t70 != 6) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x3069 = INT8_MAX;
	int8_t x3070 = INT8_MAX;
	int8_t x3071 = 0;
	int16_t x3072 = 12;
	int32_t t71 = -231084;

    t71 = (((x3069==x3070)|x3071)>>x3072);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x3161 = INT8_MIN;
	static volatile uint64_t x3162 = UINT64_MAX;
	int16_t x3163 = 26;
	uint16_t x3164 = 1U;
	int32_t t72 = -5457;

    t72 = (((x3161==x3162)|x3163)>>x3164);

    if (t72 != 13) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x3169 = 7U;
	volatile uint8_t x3170 = UINT8_MAX;
	volatile uint16_t x3172 = 16U;
	int32_t t73 = 11498;

    t73 = (((x3169==x3170)|x3171)>>x3172);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x3261 = INT32_MIN;
	static uint32_t x3262 = 12417196U;
	static uint8_t x3263 = UINT8_MAX;
	int32_t x3264 = 1;
	int32_t t74 = -1250;

    t74 = (((x3261==x3262)|x3263)>>x3264);

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x3281 = INT32_MIN;
	uint64_t x3283 = 196LLU;
	volatile uint64_t t75 = 170999085808618301LLU;

    t75 = (((x3281==x3282)|x3283)>>x3284);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x3309 = 51945145U;
	int64_t x3310 = 70819882LL;
	static uint8_t x3312 = 5U;
	uint64_t t76 = 833207696LLU;

    t76 = (((x3309==x3310)|x3311)>>x3312);

    if (t76 != 44LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x3443 = 1764195U;
	uint8_t x3444 = 5U;
	uint32_t t77 = 3488416U;

    t77 = (((x3441==x3442)|x3443)>>x3444);

    if (t77 != 55131U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x3497 = INT16_MIN;
	static int32_t x3498 = INT32_MAX;
	uint16_t x3499 = 1U;
	int16_t x3500 = 1;
	volatile int32_t t78 = -6322;

    t78 = (((x3497==x3498)|x3499)>>x3500);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x3705 = INT16_MAX;
	int16_t x3706 = INT16_MAX;
	volatile uint16_t x3707 = 2U;
	int16_t x3708 = 29;
	int32_t t79 = 52832;

    t79 = (((x3705==x3706)|x3707)>>x3708);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x3733 = 220634305;
	volatile int32_t x3735 = 144992672;
	static uint8_t x3736 = 1U;

    t80 = (((x3733==x3734)|x3735)>>x3736);

    if (t80 != 72496336) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x3949 = INT32_MIN;
	int64_t x3950 = INT64_MIN;
	int8_t x3952 = 4;
	uint32_t t81 = 895U;

    t81 = (((x3949==x3950)|x3951)>>x3952);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x3953 = -40;
	static uint16_t x3955 = UINT16_MAX;

    t82 = (((x3953==x3954)|x3955)>>x3956);

    if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x3993 = UINT8_MAX;
	volatile int8_t x3994 = -8;
	uint8_t x3995 = UINT8_MAX;
	uint16_t x3996 = 0U;
	int32_t t83 = 36362954;

    t83 = (((x3993==x3994)|x3995)>>x3996);

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x4041 = INT64_MIN;
	int64_t x4042 = INT64_MIN;
	uint8_t x4043 = 0U;
	int32_t t84 = -190;

    t84 = (((x4041==x4042)|x4043)>>x4044);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x4053 = 6U;
	int16_t x4054 = INT16_MAX;
	uint16_t x4055 = UINT16_MAX;
	int32_t t85 = -51748;

    t85 = (((x4053==x4054)|x4055)>>x4056);

    if (t85 != 1023) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x4097 = -1LL;
	uint64_t x4098 = 332658810LLU;
	static int8_t x4099 = 1;
	int32_t x4100 = 20;
	volatile int32_t t86 = 16;

    t86 = (((x4097==x4098)|x4099)>>x4100);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x4162 = -1;
	uint8_t x4163 = 11U;
	uint8_t x4164 = 9U;
	volatile int32_t t87 = 0;

    t87 = (((x4161==x4162)|x4163)>>x4164);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x4165 = 56164935U;
	int64_t x4166 = -1LL;
	static uint8_t x4167 = 3U;
	uint32_t x4168 = 0U;
	volatile int32_t t88 = 3696;

    t88 = (((x4165==x4166)|x4167)>>x4168);

    if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x4177 = 6997;
	volatile int8_t x4179 = INT8_MAX;
	static volatile int16_t x4180 = 0;
	int32_t t89 = -851;

    t89 = (((x4177==x4178)|x4179)>>x4180);

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x4209 = 3U;
	int8_t x4210 = INT8_MAX;
	volatile uint8_t x4211 = 112U;
	uint32_t x4212 = 4U;
	int32_t t90 = -15692;

    t90 = (((x4209==x4210)|x4211)>>x4212);

    if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x4269 = -3714;
	uint16_t x4270 = 2239U;
	static volatile uint64_t x4271 = 71314583880733921LLU;
	volatile int16_t x4272 = 52;
	volatile uint64_t t91 = 19876070857745229LLU;

    t91 = (((x4269==x4270)|x4271)>>x4272);

    if (t91 != 15LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x4302 = 42U;
	uint64_t x4303 = 1415970539583989LLU;
	int16_t x4304 = 17;
	uint64_t t92 = 830429LLU;

    t92 = (((x4301==x4302)|x4303)>>x4304);

    if (t92 != 10802997891LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x4513 = -1;
	uint16_t x4515 = UINT16_MAX;
	static uint16_t x4516 = 1U;
	volatile int32_t t93 = -1998;

    t93 = (((x4513==x4514)|x4515)>>x4516);

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x4581 = 615690LL;
	int16_t x4582 = INT16_MAX;
	int8_t x4583 = INT8_MAX;
	uint8_t x4584 = 6U;
	int32_t t94 = -2;

    t94 = (((x4581==x4582)|x4583)>>x4584);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x4693 = 11;
	int8_t x4694 = 0;
	volatile uint64_t t95 = 9538LLU;

    t95 = (((x4693==x4694)|x4695)>>x4696);

    if (t95 != 2094943LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x4706 = -1;
	volatile uint64_t x4707 = 72345770873524LLU;
	int16_t x4708 = 3;
	uint64_t t96 = 114449257LLU;

    t96 = (((x4705==x4706)|x4707)>>x4708);

    if (t96 != 9043221359190LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x4717 = UINT32_MAX;
	static volatile uint64_t x4718 = UINT64_MAX;
	uint64_t x4719 = 944107272460765643LLU;
	uint64_t t97 = 6421LLU;

    t97 = (((x4717==x4718)|x4719)>>x4720);

    if (t97 != 28811867445702LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x4977 = 31034U;
	int16_t x4979 = INT16_MAX;
	static int8_t x4980 = 11;
	volatile int32_t t98 = 97923497;

    t98 = (((x4977==x4978)|x4979)>>x4980);

    if (t98 != 15) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x5017 = 7187U;
	volatile uint16_t x5018 = 102U;
	int16_t x5019 = 0;
	static uint8_t x5020 = 3U;
	volatile int32_t t99 = -90936656;

    t99 = (((x5017==x5018)|x5019)>>x5020);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x5065 = UINT16_MAX;
	static int8_t x5066 = INT8_MIN;
	volatile uint16_t x5067 = 11591U;
	uint8_t x5068 = 0U;
	int32_t t100 = 104806;

    t100 = (((x5065==x5066)|x5067)>>x5068);

    if (t100 != 11591) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x5115 = 163U;
	volatile uint32_t t101 = 135419U;

    t101 = (((x5113==x5114)|x5115)>>x5116);

    if (t101 != 163U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x5181 = -1LL;
	uint8_t x5182 = UINT8_MAX;
	static uint16_t x5183 = 249U;
	int8_t x5184 = 0;

    t102 = (((x5181==x5182)|x5183)>>x5184);

    if (t102 != 249) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x5201 = -1;
	int8_t x5202 = INT8_MAX;
	static int32_t x5203 = 353;
	int8_t x5204 = 4;
	volatile int32_t t103 = -182945281;

    t103 = (((x5201==x5202)|x5203)>>x5204);

    if (t103 != 22) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x5273 = INT64_MAX;
	static int8_t x5274 = -26;
	int64_t x5275 = 18509583573LL;
	volatile int64_t t104 = -6215067076869LL;

    t104 = (((x5273==x5274)|x5275)>>x5276);

    if (t104 != 144606121LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x5277 = -14758;
	int8_t x5278 = -1;
	uint16_t x5279 = 15022U;
	volatile int32_t t105 = 247;

    t105 = (((x5277==x5278)|x5279)>>x5280);

    if (t105 != 15022) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x5349 = INT8_MAX;
	volatile uint16_t x5351 = UINT16_MAX;
	volatile int32_t t106 = 1;

    t106 = (((x5349==x5350)|x5351)>>x5352);

    if (t106 != 7) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x5413 = UINT32_MAX;
	static int16_t x5414 = INT16_MIN;
	int32_t x5415 = 12;
	volatile int32_t t107 = -3;

    t107 = (((x5413==x5414)|x5415)>>x5416);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x5417 = 43U;
	static int64_t x5418 = INT64_MIN;
	static uint32_t x5419 = UINT32_MAX;
	uint32_t x5420 = 0U;
	uint32_t t108 = UINT32_MAX;

    t108 = (((x5417==x5418)|x5419)>>x5420);

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x5449 = -3;
	static int64_t x5450 = -4469496397406106LL;
	volatile uint16_t x5452 = 11U;
	volatile int64_t t109 = 375365687858874LL;

    t109 = (((x5449==x5450)|x5451)>>x5452);

    if (t109 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x5496 = 2U;
	volatile uint32_t t110 = 9277358U;

    t110 = (((x5493==x5494)|x5495)>>x5496);

    if (t110 != 26433U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x5513 = INT8_MIN;
	uint16_t x5515 = 2U;
	volatile int32_t t111 = -287274;

    t111 = (((x5513==x5514)|x5515)>>x5516);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x5517 = INT32_MIN;
	int64_t x5518 = INT64_MIN;
	static int64_t x5519 = 1LL;
	static volatile int64_t t112 = 681936522709829LL;

    t112 = (((x5517==x5518)|x5519)>>x5520);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x5526 = 76;
	static int32_t x5527 = 6;
	static volatile uint16_t x5528 = 31U;
	volatile int32_t t113 = -4;

    t113 = (((x5525==x5526)|x5527)>>x5528);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x5597 = INT32_MAX;
	int64_t x5598 = -13186749674964LL;
	int8_t x5599 = INT8_MAX;
	volatile uint8_t x5600 = 1U;
	int32_t t114 = -185017;

    t114 = (((x5597==x5598)|x5599)>>x5600);

    if (t114 != 63) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x5660 = 0U;
	int32_t t115 = -14346;

    t115 = (((x5657==x5658)|x5659)>>x5660);

    if (t115 != 5) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x5682 = INT32_MIN;
	uint64_t x5684 = 13LLU;
	volatile int32_t t116 = -53974;

    t116 = (((x5681==x5682)|x5683)>>x5684);

    if (t116 != 7) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x5750 = INT64_MIN;
	uint16_t x5751 = 95U;
	volatile uint8_t x5752 = 0U;
	volatile int32_t t117 = -62296818;

    t117 = (((x5749==x5750)|x5751)>>x5752);

    if (t117 != 95) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x5770 = INT8_MIN;
	int8_t x5771 = INT8_MAX;
	volatile int32_t t118 = -69738869;

    t118 = (((x5769==x5770)|x5771)>>x5772);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x5773 = 6209U;
	static int16_t x5774 = 2;
	int8_t x5775 = 0;
	uint8_t x5776 = 1U;
	int32_t t119 = 2835997;

    t119 = (((x5773==x5774)|x5775)>>x5776);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x5805 = 45U;
	int64_t x5806 = -391856LL;
	uint32_t x5808 = 1U;
	int32_t t120 = -15;

    t120 = (((x5805==x5806)|x5807)>>x5808);

    if (t120 != 147) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x5809 = 1U;
	int64_t x5810 = 96079LL;
	uint64_t x5811 = 14LLU;
	uint64_t x5812 = 6LLU;
	static uint64_t t121 = 7929042173946840LLU;

    t121 = (((x5809==x5810)|x5811)>>x5812);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x5845 = INT16_MAX;
	volatile int32_t x5846 = INT32_MIN;
	uint8_t x5847 = 49U;
	uint8_t x5848 = 4U;
	int32_t t122 = -1;

    t122 = (((x5845==x5846)|x5847)>>x5848);

    if (t122 != 3) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x5929 = 3U;

    t123 = (((x5929==x5930)|x5931)>>x5932);

    if (t123 != 558241674373284502LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x6066 = -220;
	uint32_t x6067 = 1U;
	int16_t x6068 = 0;
	volatile uint32_t t124 = 186U;

    t124 = (((x6065==x6066)|x6067)>>x6068);

    if (t124 != 1U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x6129 = INT16_MAX;
	int32_t x6130 = INT32_MIN;
	uint32_t x6131 = 31787U;
	uint32_t t125 = 380067U;

    t125 = (((x6129==x6130)|x6131)>>x6132);

    if (t125 != 62U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x6149 = 1U;
	uint32_t x6150 = 28417U;
	static volatile int32_t x6151 = 2663;
	static uint64_t x6152 = 1LLU;
	int32_t t126 = 521387;

    t126 = (((x6149==x6150)|x6151)>>x6152);

    if (t126 != 1331) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x6329 = 20462U;
	volatile uint8_t x6331 = 0U;
	static volatile int8_t x6332 = 6;

    t127 = (((x6329==x6330)|x6331)>>x6332);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x6349 = -24;
	static int32_t x6350 = -1;
	static uint8_t x6351 = UINT8_MAX;
	volatile uint8_t x6352 = 5U;

    t128 = (((x6349==x6350)|x6351)>>x6352);

    if (t128 != 7) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x6369 = 77U;
	int64_t x6370 = INT64_MAX;

    t129 = (((x6369==x6370)|x6371)>>x6372);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x6381 = -1LL;
	uint16_t x6382 = 3760U;
	int16_t x6383 = INT16_MAX;
	int32_t t130 = -42;

    t130 = (((x6381==x6382)|x6383)>>x6384);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x6406 = 0;
	int8_t x6407 = INT8_MAX;
	uint64_t x6408 = 0LLU;
	volatile int32_t t131 = -89;

    t131 = (((x6405==x6406)|x6407)>>x6408);

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x6421 = 31U;
	uint32_t x6422 = UINT32_MAX;
	static int64_t x6423 = 64732285LL;
	int16_t x6424 = 8;
	static volatile int64_t t132 = -7064588308364765LL;

    t132 = (((x6421==x6422)|x6423)>>x6424);

    if (t132 != 252860LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x6533 = -4;
	static int8_t x6534 = -1;
	uint32_t x6535 = 91U;
	static uint32_t t133 = 10934741U;

    t133 = (((x6533==x6534)|x6535)>>x6536);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x6590 = 5012U;
	int64_t x6591 = 1592297680767569LL;
	volatile int64_t t134 = -1644416065LL;

    t134 = (((x6589==x6590)|x6591)>>x6592);

    if (t134 != 12439825630996LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x6621 = UINT8_MAX;
	int8_t x6622 = INT8_MIN;
	int8_t x6623 = INT8_MAX;
	volatile uint8_t x6624 = 11U;

    t135 = (((x6621==x6622)|x6623)>>x6624);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x6717 = -131;
	int32_t x6719 = INT32_MAX;
	int8_t x6720 = 26;
	static volatile int32_t t136 = -27908006;

    t136 = (((x6717==x6718)|x6719)>>x6720);

    if (t136 != 31) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x6729 = 5U;
	int16_t x6730 = -3448;
	int64_t x6731 = 216424939979LL;
	int64_t t137 = -102542100923727851LL;

    t137 = (((x6729==x6730)|x6731)>>x6732);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x6905 = INT32_MIN;
	int16_t x6907 = INT16_MAX;
	volatile int8_t x6908 = 11;
	int32_t t138 = 8067;

    t138 = (((x6905==x6906)|x6907)>>x6908);

    if (t138 != 15) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x7054 = 91U;
	int32_t x7055 = 403116;
	int32_t t139 = 18633;

    t139 = (((x7053==x7054)|x7055)>>x7056);

    if (t139 != 100779) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x7153 = 418472897724331LLU;
	volatile uint32_t x7154 = 189985U;
	uint32_t x7155 = 76U;
	static volatile uint64_t x7156 = 1LLU;
	uint32_t t140 = 38250375U;

    t140 = (((x7153==x7154)|x7155)>>x7156);

    if (t140 != 38U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x7185 = UINT16_MAX;
	int16_t x7186 = -1;
	volatile uint8_t x7188 = 1U;
	int32_t t141 = 165;

    t141 = (((x7185==x7186)|x7187)>>x7188);

    if (t141 != 3) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x7253 = INT8_MIN;
	int32_t x7254 = INT32_MIN;
	volatile uint8_t x7256 = 0U;
	static int64_t t142 = INT64_MAX;

    t142 = (((x7253==x7254)|x7255)>>x7256);

    if (t142 != INT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x7277 = -450883;
	uint64_t x7279 = 140136583831053763LLU;
	uint8_t x7280 = 11U;
	volatile uint64_t t143 = 251148800193LLU;

    t143 = (((x7277==x7278)|x7279)>>x7280);

    if (t143 != 68426066323756LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x7389 = 211017LLU;
	static volatile uint16_t x7391 = 19282U;
	uint8_t x7392 = 7U;
	volatile int32_t t144 = 322270;

    t144 = (((x7389==x7390)|x7391)>>x7392);

    if (t144 != 150) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x7417 = -232200;
	static int16_t x7418 = INT16_MIN;
	int64_t x7419 = INT64_MAX;
	uint16_t x7420 = 0U;
	static volatile int64_t t145 = INT64_MAX;

    t145 = (((x7417==x7418)|x7419)>>x7420);

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x7438 = INT8_MIN;
	volatile uint32_t x7439 = 0U;
	volatile uint8_t x7440 = 1U;
	uint32_t t146 = 224U;

    t146 = (((x7437==x7438)|x7439)>>x7440);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x7441 = INT8_MIN;
	int64_t x7442 = 7LL;
	uint8_t x7443 = 0U;
	volatile int8_t x7444 = 28;
	volatile int32_t t147 = 2985;

    t147 = (((x7441==x7442)|x7443)>>x7444);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x7461 = 345501446U;
	static uint16_t x7462 = UINT16_MAX;
	uint16_t x7463 = 1U;
	static uint8_t x7464 = 1U;
	int32_t t148 = 1425;

    t148 = (((x7461==x7462)|x7463)>>x7464);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x7481 = 752U;
	uint64_t x7482 = UINT64_MAX;
	uint16_t x7484 = 1U;
	volatile int32_t t149 = -11735571;

    t149 = (((x7481==x7482)|x7483)>>x7484);

    if (t149 != 9) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x7501 = 121087LLU;
	static int64_t x7502 = INT64_MAX;
	uint8_t x7503 = 114U;
	int16_t x7504 = 0;
	static int32_t t150 = 12603282;

    t150 = (((x7501==x7502)|x7503)>>x7504);

    if (t150 != 114) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x7509 = INT64_MIN;
	uint16_t x7510 = 2161U;
	static uint32_t x7511 = 996U;
	uint32_t t151 = 710078U;

    t151 = (((x7509==x7510)|x7511)>>x7512);

    if (t151 != 996U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x7521 = -1LL;
	int64_t x7522 = INT64_MIN;
	volatile uint16_t x7523 = UINT16_MAX;
	int8_t x7524 = 1;
	static volatile int32_t t152 = 882207;

    t152 = (((x7521==x7522)|x7523)>>x7524);

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x7717 = -549776572;
	int64_t x7718 = INT64_MIN;
	uint8_t x7719 = 25U;

    t153 = (((x7717==x7718)|x7719)>>x7720);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x7757 = INT32_MAX;
	static int8_t x7758 = INT8_MAX;
	int64_t x7759 = INT64_MAX;
	volatile int64_t t154 = 5083LL;

    t154 = (((x7757==x7758)|x7759)>>x7760);

    if (t154 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x7769 = UINT64_MAX;
	int16_t x7770 = 0;
	uint16_t x7771 = 296U;
	static volatile int16_t x7772 = 1;
	int32_t t155 = -2771789;

    t155 = (((x7769==x7770)|x7771)>>x7772);

    if (t155 != 148) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x7813 = -7263;
	volatile uint8_t x7814 = 1U;
	int32_t x7815 = INT32_MAX;
	int8_t x7816 = 1;
	static volatile int32_t t156 = -9;

    t156 = (((x7813==x7814)|x7815)>>x7816);

    if (t156 != 1073741823) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x7905 = UINT16_MAX;
	static uint32_t x7906 = 41U;
	int8_t x7907 = 0;
	int8_t x7908 = 20;
	volatile int32_t t157 = -83;

    t157 = (((x7905==x7906)|x7907)>>x7908);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x7953 = INT64_MIN;
	static uint32_t x7954 = UINT32_MAX;
	int8_t x7956 = 12;
	static volatile int32_t t158 = 252;

    t158 = (((x7953==x7954)|x7955)>>x7956);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x8002 = 48U;
	static int16_t x8003 = INT16_MAX;
	uint8_t x8004 = 14U;
	volatile int32_t t159 = -24254582;

    t159 = (((x8001==x8002)|x8003)>>x8004);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x8021 = -1;
	uint8_t x8022 = 1U;
	uint32_t x8023 = UINT32_MAX;
	volatile uint32_t t160 = 8508U;

    t160 = (((x8021==x8022)|x8023)>>x8024);

    if (t160 != 536870911U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x8025 = 3;
	static int8_t x8028 = 0;

    t161 = (((x8025==x8026)|x8027)>>x8028);

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x8149 = UINT64_MAX;
	int32_t x8151 = INT32_MAX;
	uint8_t x8152 = 1U;
	int32_t t162 = 1277;

    t162 = (((x8149==x8150)|x8151)>>x8152);

    if (t162 != 1073741823) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x8165 = 175794000U;
	volatile uint16_t x8166 = 700U;
	static volatile uint8_t x8167 = 13U;

    t163 = (((x8165==x8166)|x8167)>>x8168);

    if (t163 != 6) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x8261 = INT64_MIN;
	int32_t x8262 = INT32_MIN;
	static int64_t x8263 = INT64_MAX;
	volatile uint8_t x8264 = 0U;
	int64_t t164 = INT64_MAX;

    t164 = (((x8261==x8262)|x8263)>>x8264);

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x8265 = 212U;
	int8_t x8266 = INT8_MAX;
	volatile uint16_t x8268 = 1U;
	volatile uint64_t t165 = 38LLU;

    t165 = (((x8265==x8266)|x8267)>>x8268);

    if (t165 != 3488LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x8334 = INT8_MIN;
	uint64_t x8335 = 3LLU;
	int32_t x8336 = 6;
	uint64_t t166 = 14418247602657LLU;

    t166 = (((x8333==x8334)|x8335)>>x8336);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x8437 = INT32_MAX;
	int8_t x8438 = INT8_MAX;
	int64_t x8439 = INT64_MAX;
	uint8_t x8440 = 2U;

    t167 = (((x8437==x8438)|x8439)>>x8440);

    if (t167 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x8558 = 101U;
	uint64_t x8559 = UINT64_MAX;
	volatile int16_t x8560 = 1;
	volatile uint64_t t168 = 461LLU;

    t168 = (((x8557==x8558)|x8559)>>x8560);

    if (t168 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x8693 = 3680U;
	int64_t x8694 = INT64_MIN;
	volatile int8_t x8695 = 28;
	int16_t x8696 = 11;
	volatile int32_t t169 = -2911744;

    t169 = (((x8693==x8694)|x8695)>>x8696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x8733 = UINT16_MAX;
	volatile uint32_t x8735 = UINT32_MAX;
	uint16_t x8736 = 4U;
	uint32_t t170 = 6990U;

    t170 = (((x8733==x8734)|x8735)>>x8736);

    if (t170 != 268435455U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x8869 = INT16_MIN;
	int8_t x8870 = INT8_MIN;
	uint32_t x8871 = 39307270U;
	volatile int8_t x8872 = 19;
	uint32_t t171 = 4447U;

    t171 = (((x8869==x8870)|x8871)>>x8872);

    if (t171 != 74U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x8914 = INT8_MIN;
	volatile uint64_t x8915 = 422583740346116868LLU;
	int32_t x8916 = 0;
	uint64_t t172 = 11115423304432608LLU;

    t172 = (((x8913==x8914)|x8915)>>x8916);

    if (t172 != 422583740346116868LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x8921 = -23;
	uint64_t x8922 = 2LLU;
	int8_t x8923 = 6;
	int16_t x8924 = 1;

    t173 = (((x8921==x8922)|x8923)>>x8924);

    if (t173 != 3) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x8957 = 27746U;
	volatile uint32_t x8959 = UINT32_MAX;
	volatile uint32_t t174 = 1U;

    t174 = (((x8957==x8958)|x8959)>>x8960);

    if (t174 != 2147483647U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x8969 = 9859U;
	int32_t x8970 = INT32_MIN;
	volatile int64_t x8971 = 2118108415054LL;
	int32_t x8972 = 5;
	volatile int64_t t175 = 518LL;

    t175 = (((x8969==x8970)|x8971)>>x8972);

    if (t175 != 66190887970LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x8989 = -1;
	int32_t x8990 = INT32_MIN;
	static uint32_t x8991 = UINT32_MAX;
	static uint8_t x8992 = 0U;
	static uint32_t t176 = UINT32_MAX;

    t176 = (((x8989==x8990)|x8991)>>x8992);

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x9029 = INT16_MAX;
	uint32_t x9030 = 96U;
	int16_t x9031 = 218;
	uint16_t x9032 = 3U;
	volatile int32_t t177 = -12694;

    t177 = (((x9029==x9030)|x9031)>>x9032);

    if (t177 != 27) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x9073 = -144;
	static int16_t x9074 = INT16_MIN;
	uint32_t x9075 = 222107897U;
	uint16_t x9076 = 0U;

    t178 = (((x9073==x9074)|x9075)>>x9076);

    if (t178 != 222107897U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x9121 = 268U;
	int8_t x9122 = -1;
	uint8_t x9123 = UINT8_MAX;
	uint32_t x9124 = 6U;

    t179 = (((x9121==x9122)|x9123)>>x9124);

    if (t179 != 3) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x9126 = 85452833LLU;
	uint8_t x9127 = 0U;
	volatile uint8_t x9128 = 3U;
	volatile int32_t t180 = 1011047;

    t180 = (((x9125==x9126)|x9127)>>x9128);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x9133 = 2414575LLU;
	volatile uint64_t x9135 = UINT64_MAX;
	volatile uint8_t x9136 = 5U;
	uint64_t t181 = 4231742201LLU;

    t181 = (((x9133==x9134)|x9135)>>x9136);

    if (t181 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x9185 = INT64_MAX;
	int8_t x9187 = 0;
	uint32_t x9188 = 0U;
	int32_t t182 = -32114;

    t182 = (((x9185==x9186)|x9187)>>x9188);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x9237 = 731538049614629LLU;
	volatile uint8_t x9238 = 44U;
	uint32_t x9239 = 1172818381U;
	int8_t x9240 = 0;
	uint32_t t183 = 20108U;

    t183 = (((x9237==x9238)|x9239)>>x9240);

    if (t183 != 1172818381U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x9245 = UINT8_MAX;
	volatile uint64_t x9246 = UINT64_MAX;
	static uint64_t x9247 = 40481LLU;
	volatile uint64_t t184 = 8LLU;

    t184 = (((x9245==x9246)|x9247)>>x9248);

    if (t184 != 5060LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x9293 = INT32_MIN;
	volatile int32_t t185 = -17274979;

    t185 = (((x9293==x9294)|x9295)>>x9296);

    if (t185 != 65535) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x9365 = UINT16_MAX;
	static int8_t x9366 = 28;
	uint8_t x9368 = 5U;

    t186 = (((x9365==x9366)|x9367)>>x9368);

    if (t186 != 4113U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x9409 = INT16_MAX;
	uint64_t x9410 = 839352LLU;
	uint64_t x9411 = UINT64_MAX;
	int16_t x9412 = 1;

    t187 = (((x9409==x9410)|x9411)>>x9412);

    if (t187 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x9493 = -264510007;
	int32_t x9494 = INT32_MAX;
	volatile uint32_t x9495 = 20488U;
	uint8_t x9496 = 14U;
	volatile uint32_t t188 = 45116U;

    t188 = (((x9493==x9494)|x9495)>>x9496);

    if (t188 != 1U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x9537 = INT16_MIN;
	static uint8_t x9539 = 20U;
	uint8_t x9540 = 3U;
	static volatile int32_t t189 = -62490;

    t189 = (((x9537==x9538)|x9539)>>x9540);

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x9629 = INT64_MIN;
	uint16_t x9630 = UINT16_MAX;
	int64_t x9631 = INT64_MAX;
	int8_t x9632 = 10;
	static volatile int64_t t190 = 1LL;

    t190 = (((x9629==x9630)|x9631)>>x9632);

    if (t190 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x9637 = UINT32_MAX;
	int16_t x9639 = INT16_MAX;
	uint8_t x9640 = 6U;

    t191 = (((x9637==x9638)|x9639)>>x9640);

    if (t191 != 511) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x9650 = INT16_MIN;
	uint64_t x9651 = 1852841LLU;
	static int8_t x9652 = 0;

    t192 = (((x9649==x9650)|x9651)>>x9652);

    if (t192 != 1852841LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x9818 = INT64_MIN;
	static uint64_t x9819 = 14LLU;
	static uint64_t t193 = 54395152LLU;

    t193 = (((x9817==x9818)|x9819)>>x9820);

    if (t193 != 14LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x10062 = -4960855297596LL;
	static uint64_t x10063 = UINT64_MAX;
	uint8_t x10064 = 4U;
	static uint64_t t194 = 857LLU;

    t194 = (((x10061==x10062)|x10063)>>x10064);

    if (t194 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x10181 = -1;
	static volatile int8_t x10182 = -1;
	uint64_t x10183 = 3328566672330344046LLU;
	int64_t x10184 = 16LL;
	volatile uint64_t t195 = 16LLU;

    t195 = (((x10181==x10182)|x10183)>>x10184);

    if (t195 != 50789896733556LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x10189 = INT8_MIN;
	volatile int8_t x10190 = -1;
	uint64_t x10191 = 14648442953776LLU;
	int16_t x10192 = 6;

    t196 = (((x10189==x10190)|x10191)>>x10192);

    if (t196 != 228881921152LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x10237 = 46;
	static int32_t x10238 = -1211;
	uint16_t x10239 = UINT16_MAX;
	uint8_t x10240 = 13U;
	int32_t t197 = 1338461;

    t197 = (((x10237==x10238)|x10239)>>x10240);

    if (t197 != 7) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x10285 = UINT32_MAX;
	static int16_t x10286 = -1;
	static volatile uint8_t x10287 = 0U;
	int32_t t198 = -107;

    t198 = (((x10285==x10286)|x10287)>>x10288);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x10341 = -4;
	static int32_t x10343 = INT32_MAX;
	int8_t x10344 = 3;
	volatile int32_t t199 = -15;

    t199 = (((x10341==x10342)|x10343)>>x10344);

    if (t199 != 268435455) { NG(); } else { ; }
	
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

