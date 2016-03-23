
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

volatile uint16_t x41 = 18U;
volatile uint32_t t1 = 4U;
volatile uint16_t x65 = 8U;
static uint16_t x109 = UINT16_MAX;
volatile uint32_t x117 = 345450U;
static int8_t x119 = -1;
uint8_t x120 = 2U;
int16_t x127 = 2588;
static volatile uint32_t x162 = 1767578U;
uint16_t x167 = UINT16_MAX;
volatile int8_t x181 = 17;
static int64_t x183 = 66641186789496716LL;
uint64_t t12 = UINT64_MAX;
int32_t t13 = -2753172;
uint32_t x231 = 34359451U;
int8_t x251 = 0;
int32_t t17 = -331;
int16_t x313 = INT16_MAX;
int16_t x322 = 9;
volatile uint16_t x327 = UINT16_MAX;
int32_t x328 = 0;
int32_t x330 = -1;
uint8_t x334 = 80U;
volatile int32_t t24 = INT32_MAX;
int64_t x346 = -1770LL;
static uint32_t t29 = 1U;
int16_t x405 = INT16_MAX;
uint32_t x424 = 17962U;
int16_t x430 = INT16_MIN;
uint16_t x457 = 1496U;
int64_t x459 = INT64_MAX;
int8_t x480 = INT8_MAX;
static volatile uint64_t t41 = 88836791057472877LLU;
int8_t x485 = 1;
int64_t x486 = -1LL;
volatile int8_t x498 = -11;
int16_t x524 = INT16_MIN;
int32_t x545 = 698041;
int32_t x547 = -1;
volatile uint8_t x548 = UINT8_MAX;
static volatile int32_t t48 = 221;
int32_t x559 = -781282588;
uint8_t x569 = UINT8_MAX;
uint32_t x632 = 18423397U;
static uint32_t x637 = 640835221U;
static uint32_t x638 = 222U;
int64_t x663 = INT64_MIN;
volatile uint8_t x685 = 12U;
uint64_t x687 = 961881875LLU;
int16_t x712 = -10;
static uint32_t t61 = 5300U;
volatile int64_t x729 = INT64_MAX;
int8_t x750 = -2;
int64_t x752 = -171020463241850607LL;
int16_t x754 = -1;
uint8_t x758 = UINT8_MAX;
int8_t x770 = -2;
uint16_t x782 = UINT16_MAX;
static uint16_t x805 = UINT16_MAX;
volatile int32_t x807 = INT32_MIN;
int8_t x812 = 7;
static int32_t x822 = INT32_MAX;
int32_t x824 = INT32_MAX;
int32_t x835 = -76846;
int64_t x836 = INT64_MIN;
static volatile int32_t t72 = -88932953;
static volatile int32_t t73 = -50721060;
volatile uint64_t t75 = 427268539769478LLU;
int16_t x874 = INT16_MIN;
uint8_t x875 = 46U;
volatile int32_t t76 = -26;
uint8_t x879 = UINT8_MAX;
static uint32_t x889 = UINT32_MAX;
volatile uint8_t x890 = 19U;
uint64_t x891 = 1332138853726154LLU;
volatile int64_t x919 = INT64_MIN;
volatile uint64_t x925 = UINT64_MAX;
static int32_t x1001 = 0;
static int32_t x1003 = INT32_MAX;
static int32_t x1023 = INT32_MIN;
volatile int8_t x1035 = 3;
int8_t x1042 = INT8_MAX;
int8_t x1043 = INT8_MIN;
volatile uint64_t t89 = 24022019LLU;
uint16_t x1062 = 29U;
volatile int32_t x1073 = INT32_MAX;
uint32_t x1074 = UINT32_MAX;
int8_t x1078 = INT8_MIN;
int64_t x1080 = INT64_MIN;
volatile uint8_t x1177 = 0U;
static volatile int16_t x1185 = 14113;
static uint32_t x1186 = 964156587U;
int16_t x1203 = -9604;
volatile uint32_t x1291 = UINT32_MAX;
uint16_t x1294 = 114U;
uint16_t x1295 = 1338U;
static volatile int32_t t102 = 965;
uint64_t x1306 = 1978535447LLU;
uint64_t t103 = 0LLU;
int8_t x1313 = INT8_MAX;
int8_t x1315 = INT8_MIN;
int16_t x1320 = -297;
volatile int32_t x1341 = 26674;
uint32_t x1342 = UINT32_MAX;
static int32_t t107 = 168666;
int8_t x1378 = -13;
int32_t t109 = -115901612;
uint64_t x1402 = 2885LLU;
int8_t x1434 = INT8_MIN;
volatile uint16_t x1435 = 26662U;
int64_t x1444 = INT64_MIN;
volatile int32_t x1466 = INT32_MAX;
int64_t x1473 = 2283250LL;
volatile uint16_t x1485 = 86U;
int8_t x1488 = INT8_MAX;
int32_t x1499 = 7;
int32_t x1508 = INT32_MIN;
uint64_t x1509 = 52LLU;
uint16_t x1510 = 12U;
int8_t x1511 = -3;
volatile int32_t t122 = 456913;
int32_t x1548 = INT32_MIN;
int32_t t125 = -993;
volatile uint32_t x1579 = 3U;
uint8_t x1607 = 78U;
int64_t x1608 = -889707034221233760LL;
static int32_t t129 = -108738188;
static uint8_t x1622 = 7U;
int8_t x1626 = -20;
volatile int32_t t133 = 29784915;
uint32_t x1644 = 10278U;
int32_t t137 = 4613325;
static volatile uint64_t x1678 = UINT64_MAX;
volatile uint8_t x1680 = UINT8_MAX;
uint8_t x1711 = UINT8_MAX;
volatile int32_t t140 = 12;
int64_t x1718 = -1LL;
int16_t x1733 = 25;
uint64_t x1741 = 34861421016293LLU;
uint64_t x1793 = 735117LLU;
uint64_t x1794 = 1375LLU;
int8_t x1797 = 1;
static volatile uint64_t x1817 = 65872548299164763LLU;
static uint16_t x1833 = UINT16_MAX;
uint32_t x1841 = 36001471U;
int32_t x1854 = -1;
int32_t x1855 = 1;
static int64_t t156 = INT64_MAX;
int16_t x1883 = INT16_MAX;
int32_t t158 = 3653582;
int32_t x1968 = INT32_MIN;
int8_t x1980 = 1;
static uint64_t t166 = 2386110129LLU;
uint16_t x1983 = UINT16_MAX;
int32_t t167 = 199670;
static volatile uint64_t x1996 = 3754837950336425181LLU;
volatile uint32_t t170 = 2595819U;
int64_t x2044 = -43799720461364529LL;
static uint32_t t172 = 82942U;
volatile uint8_t x2066 = 19U;
uint64_t x2067 = 130961802LLU;
int8_t x2068 = INT8_MAX;
uint64_t x2105 = UINT64_MAX;
int16_t x2155 = -7617;
static uint8_t x2156 = UINT8_MAX;
volatile uint32_t t177 = 131098459U;
volatile uint64_t x2166 = UINT64_MAX;
int32_t t178 = 1;
uint64_t x2241 = UINT64_MAX;
uint32_t x2269 = 3U;
int8_t x2271 = INT8_MIN;
int8_t x2275 = INT8_MIN;
volatile int64_t x2301 = INT64_MAX;
uint32_t x2304 = 2U;
int8_t x2313 = INT8_MAX;
int32_t x2316 = -1;
static int16_t x2344 = 22;
uint16_t x2350 = UINT16_MAX;
static uint64_t x2382 = 16366028LLU;
static volatile int32_t t192 = -6743;
volatile int8_t x2470 = -1;
volatile int64_t x2486 = INT64_MIN;
static int64_t x2489 = 172652903836LL;
int32_t x2540 = INT32_MIN;
int32_t x2546 = INT32_MAX;
volatile uint64_t x2548 = UINT64_MAX;


void f0(void) {
    	int32_t x42 = INT32_MIN;
	int32_t x43 = -5226323;
	static uint32_t x44 = UINT32_MAX;
	volatile int32_t t0 = -12298;

    t0 = (x41<<(x42/(x43|x44)));

    if (t0 != 18) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x61 = 1U;
	uint64_t x62 = 2970039LLU;
	uint32_t x63 = 1729176U;
	int8_t x64 = -6;

    t1 = (x61<<(x62/(x63|x64)));

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x66 = INT32_MIN;
	static int32_t x67 = INT32_MIN;
	uint8_t x68 = 0U;
	static volatile int32_t t2 = -15;

    t2 = (x65<<(x66/(x67|x68)));

    if (t2 != 16) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x69 = 3LLU;
	volatile uint64_t x70 = 91623586LLU;
	int32_t x71 = INT32_MAX;
	int16_t x72 = -1;
	volatile uint64_t t3 = 5LLU;

    t3 = (x69<<(x70/(x71|x72)));

    if (t3 != 3LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x73 = 2LLU;
	uint64_t x74 = 355LLU;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = 40;
	volatile uint64_t t4 = 97350006487919LLU;

    t4 = (x73<<(x74/(x75|x76)));

    if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x110 = -3;
	int32_t x111 = INT32_MIN;
	int32_t x112 = INT32_MIN;
	int32_t t5 = -7543;

    t5 = (x109<<(x110/(x111|x112)));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x118 = 85648740LLU;
	volatile uint32_t t6 = 422917533U;

    t6 = (x117<<(x118/(x119|x120)));

    if (t6 != 345450U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x125 = INT32_MAX;
	static uint64_t x126 = 5762658LLU;
	int32_t x128 = INT32_MAX;
	int32_t t7 = INT32_MAX;

    t7 = (x125<<(x126/(x127|x128)));

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x161 = INT32_MAX;
	int16_t x163 = INT16_MAX;
	int8_t x164 = -13;
	volatile int32_t t8 = INT32_MAX;

    t8 = (x161<<(x162/(x163|x164)));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x165 = 13602572;
	int16_t x166 = INT16_MAX;
	volatile int16_t x168 = 894;
	int32_t t9 = -417;

    t9 = (x165<<(x166/(x167|x168)));

    if (t9 != 13602572) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x169 = 15U;
	volatile int64_t x170 = 60200558LL;
	uint64_t x171 = 878978LLU;
	static int16_t x172 = INT16_MIN;
	int32_t t10 = -47518631;

    t10 = (x169<<(x170/(x171|x172)));

    if (t10 != 15) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x182 = 1139280120U;
	int8_t x184 = 24;
	int32_t t11 = 1093487;

    t11 = (x181<<(x182/(x183|x184)));

    if (t11 != 17) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x189 = UINT64_MAX;
	int8_t x190 = 0;
	int64_t x191 = -1LL;
	static int64_t x192 = INT64_MAX;

    t12 = (x189<<(x190/(x191|x192)));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x221 = 86U;
	int16_t x222 = 4107;
	uint16_t x223 = 880U;
	static int16_t x224 = INT16_MAX;

    t13 = (x221<<(x222/(x223|x224)));

    if (t13 != 86) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x229 = 0;
	int32_t x230 = INT32_MAX;
	int32_t x232 = INT32_MIN;
	volatile int32_t t14 = -270461886;

    t14 = (x229<<(x230/(x231|x232)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x249 = 35U;
	int64_t x250 = -1LL;
	volatile int64_t x252 = INT64_MIN;
	volatile int32_t t15 = 28996089;

    t15 = (x249<<(x250/(x251|x252)));

    if (t15 != 35) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x265 = 1U;
	int64_t x266 = -1LL;
	uint64_t x267 = UINT64_MAX;
	static volatile int32_t x268 = INT32_MAX;
	static int32_t t16 = 176;

    t16 = (x265<<(x266/(x267|x268)));

    if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x281 = 1105U;
	uint8_t x282 = 1U;
	int64_t x283 = INT64_MIN;
	uint32_t x284 = UINT32_MAX;

    t17 = (x281<<(x282/(x283|x284)));

    if (t17 != 1105) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x289 = UINT16_MAX;
	static uint8_t x290 = 1U;
	static uint32_t x291 = 728159902U;
	static uint32_t x292 = 32706350U;
	volatile int32_t t18 = 25783;

    t18 = (x289<<(x290/(x291|x292)));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x297 = 0LLU;
	uint64_t x298 = 985687833118LLU;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = INT16_MIN;
	static volatile uint64_t t19 = 35LLU;

    t19 = (x297<<(x298/(x299|x300)));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x314 = 1938U;
	static int32_t x315 = 47477922;
	uint64_t x316 = 63455LLU;
	volatile int32_t t20 = -7166;

    t20 = (x313<<(x314/(x315|x316)));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x321 = 12933886;
	uint64_t x323 = 1191407771269LLU;
	int64_t x324 = 3669217631LL;
	int32_t t21 = 498295;

    t21 = (x321<<(x322/(x323|x324)));

    if (t21 != 12933886) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x325 = 7U;
	int32_t x326 = -1957;
	volatile int32_t t22 = 1111;

    t22 = (x325<<(x326/(x327|x328)));

    if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x329 = 31223;
	int64_t x331 = -1LL;
	uint8_t x332 = UINT8_MAX;
	int32_t t23 = 464;

    t23 = (x329<<(x330/(x331|x332)));

    if (t23 != 62446) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x333 = INT32_MAX;
	int8_t x335 = INT8_MAX;
	volatile int32_t x336 = INT32_MIN;

    t24 = (x333<<(x334/(x335|x336)));

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x337 = 94117731U;
	uint64_t x338 = 5908241956228840711LLU;
	int8_t x339 = INT8_MAX;
	volatile int8_t x340 = INT8_MIN;
	uint32_t t25 = 896458U;

    t25 = (x337<<(x338/(x339|x340)));

    if (t25 != 94117731U) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x341 = INT16_MAX;
	static uint8_t x342 = 67U;
	uint32_t x343 = 11527U;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t26 = -4719735;

    t26 = (x341<<(x342/(x343|x344)));

    if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x345 = 1U;
	static int64_t x347 = 230195LL;
	static int8_t x348 = INT8_MAX;
	static volatile int32_t t27 = 3;

    t27 = (x345<<(x346/(x347|x348)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x361 = 7U;
	static uint64_t x362 = 1866507LLU;
	volatile int64_t x363 = INT64_MIN;
	volatile int16_t x364 = INT16_MIN;
	volatile int32_t t28 = 0;

    t28 = (x361<<(x362/(x363|x364)));

    if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x389 = 839047078U;
	uint8_t x390 = 21U;
	static uint16_t x391 = 11U;
	int32_t x392 = INT32_MIN;

    t29 = (x389<<(x390/(x391|x392)));

    if (t29 != 839047078U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x406 = INT64_MIN;
	static uint64_t x407 = UINT64_MAX;
	static volatile uint16_t x408 = 5U;
	volatile int32_t t30 = 781;

    t30 = (x405<<(x406/(x407|x408)));

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x409 = 2661U;
	volatile int64_t x410 = -1LL;
	int32_t x411 = -1519;
	uint64_t x412 = 59894769827LLU;
	int32_t t31 = 5;

    t31 = (x409<<(x410/(x411|x412)));

    if (t31 != 5322) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x417 = 1;
	static int8_t x418 = -1;
	volatile uint8_t x419 = UINT8_MAX;
	static volatile uint8_t x420 = 92U;
	int32_t t32 = 10386919;

    t32 = (x417<<(x418/(x419|x420)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x421 = 6980;
	int16_t x422 = -1;
	int32_t x423 = -718;
	static int32_t t33 = -30996169;

    t33 = (x421<<(x422/(x423|x424)));

    if (t33 != 13960) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x425 = 41U;
	volatile uint32_t x426 = 34U;
	volatile int16_t x427 = INT16_MIN;
	static int8_t x428 = INT8_MIN;
	volatile int32_t t34 = -218;

    t34 = (x425<<(x426/(x427|x428)));

    if (t34 != 41) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x429 = INT16_MAX;
	volatile int16_t x431 = INT16_MIN;
	volatile int64_t x432 = -17791924325518644LL;
	int32_t t35 = -42;

    t35 = (x429<<(x430/(x431|x432)));

    if (t35 != 16776704) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x437 = 84938236309352351LLU;
	volatile int64_t x438 = 29801LL;
	volatile uint64_t x439 = UINT64_MAX;
	uint16_t x440 = UINT16_MAX;
	uint64_t t36 = 1629442494937LLU;

    t36 = (x437<<(x438/(x439|x440)));

    if (t36 != 84938236309352351LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	uint32_t x454 = 25808U;
	uint32_t x455 = 959U;
	int16_t x456 = INT16_MIN;
	int32_t t37 = -7;

    t37 = (x453<<(x454/(x455|x456)));

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x458 = 8U;
	uint32_t x460 = UINT32_MAX;
	static int32_t t38 = -2;

    t38 = (x457<<(x458/(x459|x460)));

    if (t38 != 1496) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x461 = 269034631409667641LLU;
	int32_t x462 = -41;
	static uint32_t x463 = 93903996U;
	int64_t x464 = INT64_MIN;
	uint64_t t39 = 29584903LLU;

    t39 = (x461<<(x462/(x463|x464)));

    if (t39 != 269034631409667641LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x469 = 512583680U;
	volatile int32_t x470 = INT32_MIN;
	volatile int64_t x471 = INT64_MIN;
	uint64_t x472 = 7LLU;
	volatile uint32_t t40 = 9U;

    t40 = (x469<<(x470/(x471|x472)));

    if (t40 != 1025167360U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x477 = 16199961LLU;
	int32_t x478 = 12980;
	uint16_t x479 = UINT16_MAX;

    t41 = (x477<<(x478/(x479|x480)));

    if (t41 != 16199961LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x487 = INT32_MIN;
	int64_t x488 = -1LL;
	volatile int32_t t42 = 18995;

    t42 = (x485<<(x486/(x487|x488)));

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x497 = INT8_MAX;
	uint8_t x499 = 60U;
	static int16_t x500 = -1477;
	static volatile int32_t t43 = -37646803;

    t43 = (x497<<(x498/(x499|x500)));

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x505 = 26746188181632183LLU;
	static volatile uint64_t x506 = 7LLU;
	int8_t x507 = INT8_MAX;
	static volatile int32_t x508 = INT32_MAX;
	volatile uint64_t t44 = 242811578966601LLU;

    t44 = (x505<<(x506/(x507|x508)));

    if (t44 != 26746188181632183LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x517 = 92;
	volatile uint8_t x518 = 104U;
	volatile int64_t x519 = 57740LL;
	volatile int16_t x520 = INT16_MIN;
	int32_t t45 = -2645;

    t45 = (x517<<(x518/(x519|x520)));

    if (t45 != 92) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x521 = 1551;
	static int16_t x522 = 46;
	int32_t x523 = 12221;
	int32_t t46 = -398400;

    t46 = (x521<<(x522/(x523|x524)));

    if (t46 != 1551) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x537 = 704875015U;
	uint16_t x538 = 28592U;
	volatile int32_t x539 = -48492266;
	int64_t x540 = -4422923497443628318LL;
	volatile uint32_t t47 = 13763U;

    t47 = (x537<<(x538/(x539|x540)));

    if (t47 != 704875015U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x546 = 23486802U;

    t48 = (x545<<(x546/(x547|x548)));

    if (t48 != 698041) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x557 = 50485U;
	int8_t x558 = -1;
	int8_t x560 = -1;
	volatile uint32_t t49 = 19368177U;

    t49 = (x557<<(x558/(x559|x560)));

    if (t49 != 100970U) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x570 = INT16_MAX;
	int16_t x571 = -114;
	uint64_t x572 = 478299248689601036LLU;
	volatile int32_t t50 = -279558;

    t50 = (x569<<(x570/(x571|x572)));

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x577 = 259453518U;
	static volatile int64_t x578 = 146968337683LL;
	volatile int64_t x579 = 104320057527506LL;
	int8_t x580 = 1;
	static uint32_t t51 = 2685U;

    t51 = (x577<<(x578/(x579|x580)));

    if (t51 != 259453518U) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x593 = INT8_MAX;
	static uint16_t x594 = 0U;
	int16_t x595 = INT16_MIN;
	int16_t x596 = INT16_MAX;
	int32_t t52 = -474524;

    t52 = (x593<<(x594/(x595|x596)));

    if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x605 = 661LL;
	static int64_t x606 = -5100231746LL;
	uint64_t x607 = 31LLU;
	static volatile int32_t x608 = INT32_MIN;
	volatile int64_t t53 = -7741496193LL;

    t53 = (x605<<(x606/(x607|x608)));

    if (t53 != 661LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x621 = INT16_MAX;
	uint64_t x622 = UINT64_MAX;
	int32_t x623 = -437;
	int8_t x624 = -1;
	volatile int32_t t54 = -20417858;

    t54 = (x621<<(x622/(x623|x624)));

    if (t54 != 65534) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x629 = 2;
	int16_t x630 = INT16_MAX;
	int64_t x631 = -107638997273829226LL;
	int32_t t55 = 165;

    t55 = (x629<<(x630/(x631|x632)));

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x639 = -2112;
	int16_t x640 = INT16_MAX;
	uint32_t t56 = 908446584U;

    t56 = (x637<<(x638/(x639|x640)));

    if (t56 != 640835221U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x649 = 0U;
	int16_t x650 = 1;
	uint8_t x651 = 27U;
	int8_t x652 = INT8_MIN;
	volatile int32_t t57 = 32704;

    t57 = (x649<<(x650/(x651|x652)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x661 = 5U;
	int64_t x662 = 878LL;
	uint32_t x664 = UINT32_MAX;
	volatile int32_t t58 = -341230;

    t58 = (x661<<(x662/(x663|x664)));

    if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x686 = 1;
	volatile int64_t x688 = INT64_MAX;
	int32_t t59 = -5457;

    t59 = (x685<<(x686/(x687|x688)));

    if (t59 != 12) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x701 = 11U;
	uint64_t x702 = 221402504033025LLU;
	int8_t x703 = INT8_MIN;
	int64_t x704 = -525199392LL;
	volatile int32_t t60 = -89082525;

    t60 = (x701<<(x702/(x703|x704)));

    if (t60 != 11) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x709 = 2U;
	int16_t x710 = 0;
	volatile int64_t x711 = -964870LL;

    t61 = (x709<<(x710/(x711|x712)));

    if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x730 = 15;
	static int32_t x731 = -4830225;
	uint32_t x732 = 882U;
	int64_t t62 = INT64_MAX;

    t62 = (x729<<(x730/(x731|x732)));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x749 = 678845120336634LLU;
	int16_t x751 = INT16_MAX;
	static uint64_t t63 = 2972LLU;

    t63 = (x749<<(x750/(x751|x752)));

    if (t63 != 678845120336634LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x753 = 135U;
	volatile int8_t x755 = INT8_MIN;
	uint16_t x756 = UINT16_MAX;
	uint32_t t64 = 897346305U;

    t64 = (x753<<(x754/(x755|x756)));

    if (t64 != 270U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x757 = 28980059646LLU;
	volatile uint8_t x759 = UINT8_MAX;
	volatile uint32_t x760 = UINT32_MAX;
	volatile uint64_t t65 = 29728883972112505LLU;

    t65 = (x757<<(x758/(x759|x760)));

    if (t65 != 28980059646LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x769 = 185U;
	volatile int8_t x771 = -1;
	int32_t x772 = -1;
	static uint32_t t66 = 332165741U;

    t66 = (x769<<(x770/(x771|x772)));

    if (t66 != 740U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x781 = 18;
	int32_t x783 = INT32_MIN;
	int64_t x784 = 815491LL;
	static volatile int32_t t67 = 228022;

    t67 = (x781<<(x782/(x783|x784)));

    if (t67 != 18) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x806 = UINT32_MAX;
	int32_t x808 = -12683200;
	int32_t t68 = 12;

    t68 = (x805<<(x806/(x807|x808)));

    if (t68 != 131070) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint64_t x809 = 30356336LLU;
	int8_t x810 = -2;
	uint8_t x811 = UINT8_MAX;
	volatile uint64_t t69 = 692972311720259LLU;

    t69 = (x809<<(x810/(x811|x812)));

    if (t69 != 30356336LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x821 = 107675U;
	uint64_t x823 = UINT64_MAX;
	volatile uint32_t t70 = 4598U;

    t70 = (x821<<(x822/(x823|x824)));

    if (t70 != 107675U) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x829 = 26U;
	int8_t x830 = -35;
	uint8_t x831 = 78U;
	int64_t x832 = 53098003063LL;
	volatile int32_t t71 = -549;

    t71 = (x829<<(x830/(x831|x832)));

    if (t71 != 26) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x833 = 579;
	uint64_t x834 = 2985LLU;

    t72 = (x833<<(x834/(x835|x836)));

    if (t72 != 579) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x853 = 3;
	uint16_t x854 = 96U;
	int8_t x855 = INT8_MIN;
	uint16_t x856 = 1U;

    t73 = (x853<<(x854/(x855|x856)));

    if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x861 = 3430U;
	static int32_t x862 = INT32_MIN;
	static int8_t x863 = INT8_MAX;
	int32_t x864 = INT32_MIN;
	int32_t t74 = 100331;

    t74 = (x861<<(x862/(x863|x864)));

    if (t74 != 6860) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x865 = 256161447062926LLU;
	static uint8_t x866 = 14U;
	int64_t x867 = -29137689475LL;
	volatile uint16_t x868 = 40U;

    t75 = (x865<<(x866/(x867|x868)));

    if (t75 != 256161447062926LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x873 = UINT16_MAX;
	static int32_t x876 = INT32_MAX;

    t76 = (x873<<(x874/(x875|x876)));

    if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x877 = 10U;
	static int32_t x878 = INT32_MIN;
	int32_t x880 = -250006161;
	static int32_t t77 = -73;

    t77 = (x877<<(x878/(x879|x880)));

    if (t77 != 2560) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x892 = INT64_MIN;
	uint32_t t78 = UINT32_MAX;

    t78 = (x889<<(x890/(x891|x892)));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x901 = 505086LLU;
	static int8_t x902 = INT8_MIN;
	int8_t x903 = -1;
	static volatile uint64_t x904 = 23LLU;
	uint64_t t79 = 2787799308679LLU;

    t79 = (x901<<(x902/(x903|x904)));

    if (t79 != 505086LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x905 = 38U;
	static int8_t x906 = 1;
	static int16_t x907 = INT16_MIN;
	int8_t x908 = -53;
	volatile int32_t t80 = 493466383;

    t80 = (x905<<(x906/(x907|x908)));

    if (t80 != 38) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x917 = 209386LL;
	uint8_t x918 = 2U;
	int16_t x920 = INT16_MIN;
	volatile int64_t t81 = 0LL;

    t81 = (x917<<(x918/(x919|x920)));

    if (t81 != 209386LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x926 = -1;
	int32_t x927 = -1;
	uint32_t x928 = UINT32_MAX;
	volatile uint64_t t82 = 1171115691LLU;

    t82 = (x925<<(x926/(x927|x928)));

    if (t82 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x937 = INT16_MAX;
	volatile int64_t x938 = INT64_MIN;
	int64_t x939 = INT64_MIN;
	uint32_t x940 = 1435212978U;
	static int32_t t83 = -13663927;

    t83 = (x937<<(x938/(x939|x940)));

    if (t83 != 65534) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x1002 = 144U;
	int8_t x1004 = -1;
	static int32_t t84 = -118298872;

    t84 = (x1001<<(x1002/(x1003|x1004)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint32_t x1021 = 12931U;
	volatile int8_t x1022 = INT8_MAX;
	int32_t x1024 = -6905657;
	uint32_t t85 = 3U;

    t85 = (x1021<<(x1022/(x1023|x1024)));

    if (t85 != 12931U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x1033 = 683231122207LLU;
	uint16_t x1034 = 3565U;
	volatile int32_t x1036 = 116840916;
	uint64_t t86 = 34757948257805584LLU;

    t86 = (x1033<<(x1034/(x1035|x1036)));

    if (t86 != 683231122207LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x1041 = 50;
	volatile uint64_t x1044 = 32358634LLU;
	volatile int32_t t87 = 182873;

    t87 = (x1041<<(x1042/(x1043|x1044)));

    if (t87 != 50) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int8_t x1045 = INT8_MAX;
	uint32_t x1046 = 200431U;
	static int32_t x1047 = -1;
	volatile uint64_t x1048 = 56809934LLU;
	int32_t t88 = -828286035;

    t88 = (x1045<<(x1046/(x1047|x1048)));

    if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x1057 = 3006240881101737510LLU;
	int16_t x1058 = 2786;
	volatile int32_t x1059 = 0;
	volatile int64_t x1060 = INT64_MIN;

    t89 = (x1057<<(x1058/(x1059|x1060)));

    if (t89 != 3006240881101737510LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x1061 = 1;
	uint8_t x1063 = 19U;
	int64_t x1064 = -645084688170LL;
	volatile int32_t t90 = -5;

    t90 = (x1061<<(x1062/(x1063|x1064)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x1075 = INT32_MAX;
	uint64_t x1076 = 1028923251483LLU;
	int32_t t91 = INT32_MAX;

    t91 = (x1073<<(x1074/(x1075|x1076)));

    if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x1077 = UINT64_MAX;
	uint16_t x1079 = 184U;
	uint64_t t92 = UINT64_MAX;

    t92 = (x1077<<(x1078/(x1079|x1080)));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x1109 = 3843;
	int64_t x1110 = INT64_MIN;
	uint64_t x1111 = 0LLU;
	int64_t x1112 = INT64_MIN;
	int32_t t93 = -2535;

    t93 = (x1109<<(x1110/(x1111|x1112)));

    if (t93 != 7686) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x1125 = 18U;
	static int32_t x1126 = -1;
	int8_t x1127 = 2;
	uint64_t x1128 = 5669728051933077783LLU;
	static volatile int32_t t94 = -12948779;

    t94 = (x1125<<(x1126/(x1127|x1128)));

    if (t94 != 144) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x1178 = -1;
	int64_t x1179 = INT64_MAX;
	volatile int8_t x1180 = -30;
	static volatile int32_t t95 = 1;

    t95 = (x1177<<(x1178/(x1179|x1180)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x1187 = INT32_MAX;
	int32_t x1188 = -2;
	volatile int32_t t96 = -27;

    t96 = (x1185<<(x1186/(x1187|x1188)));

    if (t96 != 14113) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x1197 = 0U;
	int8_t x1198 = -1;
	volatile uint8_t x1199 = 18U;
	static volatile int64_t x1200 = -283LL;
	volatile int32_t t97 = 129859;

    t97 = (x1197<<(x1198/(x1199|x1200)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x1201 = 1LL;
	uint64_t x1202 = UINT64_MAX;
	int16_t x1204 = -1;
	int64_t t98 = -1543203LL;

    t98 = (x1201<<(x1202/(x1203|x1204)));

    if (t98 != 2LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x1225 = INT64_MAX;
	volatile int8_t x1226 = INT8_MIN;
	int64_t x1227 = INT64_MIN;
	static uint8_t x1228 = 99U;
	int64_t t99 = INT64_MAX;

    t99 = (x1225<<(x1226/(x1227|x1228)));

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x1265 = UINT16_MAX;
	int32_t x1266 = -1;
	static uint8_t x1267 = UINT8_MAX;
	static volatile int32_t x1268 = -1;
	int32_t t100 = 0;

    t100 = (x1265<<(x1266/(x1267|x1268)));

    if (t100 != 131070) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x1289 = 201035437153790896LLU;
	int64_t x1290 = -1LL;
	static uint8_t x1292 = 6U;
	static volatile uint64_t t101 = 3999496LLU;

    t101 = (x1289<<(x1290/(x1291|x1292)));

    if (t101 != 201035437153790896LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x1293 = INT8_MAX;
	static int32_t x1296 = 4494;

    t102 = (x1293<<(x1294/(x1295|x1296)));

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x1305 = 76LLU;
	uint16_t x1307 = UINT16_MAX;
	int8_t x1308 = -1;

    t103 = (x1305<<(x1306/(x1307|x1308)));

    if (t103 != 76LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x1314 = INT8_MAX;
	uint32_t x1316 = 34U;
	volatile int32_t t104 = 9;

    t104 = (x1313<<(x1314/(x1315|x1316)));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x1317 = 2;
	uint16_t x1318 = UINT16_MAX;
	volatile uint64_t x1319 = UINT64_MAX;
	volatile int32_t t105 = -56;

    t105 = (x1317<<(x1318/(x1319|x1320)));

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x1333 = INT32_MAX;
	static int32_t x1334 = -1;
	static int32_t x1335 = 19;
	uint16_t x1336 = 1181U;
	static int32_t t106 = INT32_MAX;

    t106 = (x1333<<(x1334/(x1335|x1336)));

    if (t106 != INT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x1343 = INT32_MIN;
	static uint8_t x1344 = 29U;

    t107 = (x1341<<(x1342/(x1343|x1344)));

    if (t107 != 53348) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x1377 = 1057U;
	uint8_t x1379 = 35U;
	uint64_t x1380 = UINT64_MAX;
	int32_t t108 = -17927;

    t108 = (x1377<<(x1378/(x1379|x1380)));

    if (t108 != 1057) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x1393 = INT8_MAX;
	volatile int8_t x1394 = 4;
	uint8_t x1395 = 37U;
	int32_t x1396 = INT32_MIN;

    t109 = (x1393<<(x1394/(x1395|x1396)));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x1401 = 135U;
	static uint8_t x1403 = 2U;
	int64_t x1404 = INT64_MIN;
	int32_t t110 = 11;

    t110 = (x1401<<(x1402/(x1403|x1404)));

    if (t110 != 135) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x1409 = 0;
	int8_t x1410 = INT8_MIN;
	int8_t x1411 = 29;
	int64_t x1412 = INT64_MAX;
	volatile int32_t t111 = 1941578;

    t111 = (x1409<<(x1410/(x1411|x1412)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x1433 = UINT64_MAX;
	int16_t x1436 = INT16_MAX;
	uint64_t t112 = UINT64_MAX;

    t112 = (x1433<<(x1434/(x1435|x1436)));

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x1441 = INT16_MAX;
	int64_t x1442 = -1LL;
	uint32_t x1443 = 2018005425U;
	int32_t t113 = -121167009;

    t113 = (x1441<<(x1442/(x1443|x1444)));

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x1457 = 56;
	uint32_t x1458 = 3U;
	uint8_t x1459 = 14U;
	int8_t x1460 = 3;
	volatile int32_t t114 = -86;

    t114 = (x1457<<(x1458/(x1459|x1460)));

    if (t114 != 56) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x1461 = INT64_MAX;
	uint64_t x1462 = 3443678086257LLU;
	static volatile int64_t x1463 = -33662070298171LL;
	int8_t x1464 = 4;
	int64_t t115 = INT64_MAX;

    t115 = (x1461<<(x1462/(x1463|x1464)));

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x1465 = INT16_MAX;
	static volatile int64_t x1467 = 1832003287957LL;
	int64_t x1468 = 57494LL;
	static volatile int32_t t116 = 325;

    t116 = (x1465<<(x1466/(x1467|x1468)));

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x1474 = UINT8_MAX;
	volatile int8_t x1475 = 4;
	static int16_t x1476 = INT16_MIN;
	int64_t t117 = 69029626999946LL;

    t117 = (x1473<<(x1474/(x1475|x1476)));

    if (t117 != 2283250LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x1486 = -5;
	uint8_t x1487 = 71U;
	volatile int32_t t118 = -87021601;

    t118 = (x1485<<(x1486/(x1487|x1488)));

    if (t118 != 86) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x1497 = 932289417LLU;
	uint16_t x1498 = 6038U;
	int64_t x1500 = INT64_MAX;
	volatile uint64_t t119 = 1972243357272707LLU;

    t119 = (x1497<<(x1498/(x1499|x1500)));

    if (t119 != 932289417LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x1505 = 31338U;
	static int32_t x1506 = -47993370;
	uint16_t x1507 = 6U;
	volatile int32_t t120 = -136542022;

    t120 = (x1505<<(x1506/(x1507|x1508)));

    if (t120 != 31338) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x1512 = 39952U;
	static volatile uint64_t t121 = 296LLU;

    t121 = (x1509<<(x1510/(x1511|x1512)));

    if (t121 != 52LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x1521 = INT8_MAX;
	uint32_t x1522 = 2096U;
	int16_t x1523 = INT16_MIN;
	int64_t x1524 = -154065622726LL;

    t122 = (x1521<<(x1522/(x1523|x1524)));

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x1525 = UINT8_MAX;
	uint32_t x1526 = UINT32_MAX;
	int8_t x1527 = 60;
	volatile int8_t x1528 = -45;
	int32_t t123 = 21270;

    t123 = (x1525<<(x1526/(x1527|x1528)));

    if (t123 != 510) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x1541 = 0U;
	static volatile uint64_t x1542 = UINT64_MAX;
	int32_t x1543 = -96;
	int16_t x1544 = INT16_MIN;
	uint32_t t124 = 7U;

    t124 = (x1541<<(x1542/(x1543|x1544)));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x1545 = UINT16_MAX;
	int32_t x1546 = -4143;
	static int32_t x1547 = INT32_MIN;

    t125 = (x1545<<(x1546/(x1547|x1548)));

    if (t125 != 65535) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x1577 = 15U;
	int32_t x1578 = -1;
	int16_t x1580 = -3514;
	int32_t t126 = 3;

    t126 = (x1577<<(x1578/(x1579|x1580)));

    if (t126 != 30) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x1585 = INT64_MAX;
	volatile int8_t x1586 = INT8_MIN;
	int64_t x1587 = -556022223857111LL;
	int64_t x1588 = INT64_MIN;
	volatile int64_t t127 = INT64_MAX;

    t127 = (x1585<<(x1586/(x1587|x1588)));

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x1601 = UINT32_MAX;
	int32_t x1602 = INT32_MIN;
	uint32_t x1603 = 5U;
	int32_t x1604 = INT32_MAX;
	volatile uint32_t t128 = 10494U;

    t128 = (x1601<<(x1602/(x1603|x1604)));

    if (t128 != 4294967294U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x1605 = INT8_MAX;
	int32_t x1606 = INT32_MAX;

    t129 = (x1605<<(x1606/(x1607|x1608)));

    if (t129 != 127) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x1613 = UINT16_MAX;
	static volatile uint16_t x1614 = 483U;
	uint64_t x1615 = 518662LLU;
	static uint32_t x1616 = 6960U;
	int32_t t130 = 54175;

    t130 = (x1613<<(x1614/(x1615|x1616)));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x1621 = INT16_MAX;
	int8_t x1623 = 1;
	uint16_t x1624 = 67U;
	volatile int32_t t131 = -2;

    t131 = (x1621<<(x1622/(x1623|x1624)));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x1625 = 131644463173LLU;
	uint64_t x1627 = 22924189LLU;
	int64_t x1628 = INT64_MIN;
	volatile uint64_t t132 = 116539658LLU;

    t132 = (x1625<<(x1626/(x1627|x1628)));

    if (t132 != 263288926346LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1629 = 1;
	static int16_t x1630 = INT16_MIN;
	static volatile int16_t x1631 = INT16_MIN;
	uint64_t x1632 = UINT64_MAX;

    t133 = (x1629<<(x1630/(x1631|x1632)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x1633 = UINT16_MAX;
	uint32_t x1634 = 6U;
	volatile int8_t x1635 = 18;
	volatile int32_t x1636 = -1;
	volatile int32_t t134 = -25855262;

    t134 = (x1633<<(x1634/(x1635|x1636)));

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x1641 = INT32_MAX;
	volatile int64_t x1642 = -1LL;
	uint32_t x1643 = UINT32_MAX;
	volatile int32_t t135 = INT32_MAX;

    t135 = (x1641<<(x1642/(x1643|x1644)));

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x1649 = 111U;
	uint8_t x1650 = 21U;
	int32_t x1651 = INT32_MIN;
	int8_t x1652 = INT8_MAX;
	int32_t t136 = -658023;

    t136 = (x1649<<(x1650/(x1651|x1652)));

    if (t136 != 111) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1665 = 7;
	uint32_t x1666 = 7U;
	int64_t x1667 = -1481LL;
	volatile int64_t x1668 = INT64_MIN;

    t137 = (x1665<<(x1666/(x1667|x1668)));

    if (t137 != 7) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x1673 = UINT8_MAX;
	int8_t x1674 = INT8_MIN;
	uint16_t x1675 = UINT16_MAX;
	uint16_t x1676 = 14711U;
	int32_t t138 = 475;

    t138 = (x1673<<(x1674/(x1675|x1676)));

    if (t138 != 255) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x1677 = 60LL;
	uint64_t x1679 = 524028836708800705LLU;
	int64_t t139 = -4LL;

    t139 = (x1677<<(x1678/(x1679|x1680)));

    if (t139 != 2061584302080LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1709 = UINT8_MAX;
	int16_t x1710 = INT16_MAX;
	volatile int64_t x1712 = INT64_MAX;

    t140 = (x1709<<(x1710/(x1711|x1712)));

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x1713 = 0U;
	static volatile uint32_t x1714 = 4U;
	int8_t x1715 = INT8_MIN;
	volatile int32_t x1716 = -897035;
	int32_t t141 = -728;

    t141 = (x1713<<(x1714/(x1715|x1716)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x1717 = 22347U;
	volatile uint16_t x1719 = 2U;
	int64_t x1720 = INT64_MIN;
	int32_t t142 = -6;

    t142 = (x1717<<(x1718/(x1719|x1720)));

    if (t142 != 22347) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x1734 = UINT64_MAX;
	int64_t x1735 = INT64_MIN;
	static uint64_t x1736 = 166189626161632LLU;
	static volatile int32_t t143 = -8;

    t143 = (x1733<<(x1734/(x1735|x1736)));

    if (t143 != 50) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1742 = -107395530;
	static int16_t x1743 = -1;
	uint32_t x1744 = UINT32_MAX;
	static volatile uint64_t t144 = 5240LLU;

    t144 = (x1741<<(x1742/(x1743|x1744)));

    if (t144 != 34861421016293LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1749 = 50279U;
	int8_t x1750 = 35;
	static int64_t x1751 = INT64_MIN;
	int8_t x1752 = INT8_MAX;
	uint32_t t145 = 680067U;

    t145 = (x1749<<(x1750/(x1751|x1752)));

    if (t145 != 50279U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1785 = 10U;
	int16_t x1786 = -287;
	static int64_t x1787 = INT64_MIN;
	volatile int64_t x1788 = 4LL;
	volatile int32_t t146 = 16274;

    t146 = (x1785<<(x1786/(x1787|x1788)));

    if (t146 != 10) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x1795 = 20075U;
	int8_t x1796 = -1;
	uint64_t t147 = 544069LLU;

    t147 = (x1793<<(x1794/(x1795|x1796)));

    if (t147 != 735117LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1798 = -1;
	uint8_t x1799 = UINT8_MAX;
	volatile int8_t x1800 = -40;
	volatile int32_t t148 = 63564;

    t148 = (x1797<<(x1798/(x1799|x1800)));

    if (t148 != 2) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x1818 = 84U;
	static uint64_t x1819 = UINT64_MAX;
	volatile int64_t x1820 = -1LL;
	volatile uint64_t t149 = 203434479LLU;

    t149 = (x1817<<(x1818/(x1819|x1820)));

    if (t149 != 65872548299164763LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x1821 = 5053076U;
	static int32_t x1822 = -1;
	uint32_t x1823 = 3739749U;
	int32_t x1824 = INT32_MAX;
	volatile uint32_t t150 = 260U;

    t150 = (x1821<<(x1822/(x1823|x1824)));

    if (t150 != 20212304U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1834 = -3190961;
	uint16_t x1835 = 204U;
	int64_t x1836 = -1172271772426801136LL;
	int32_t t151 = 1354;

    t151 = (x1833<<(x1834/(x1835|x1836)));

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1842 = INT32_MAX;
	static uint16_t x1843 = 10945U;
	int64_t x1844 = INT64_MIN;
	uint32_t t152 = 1U;

    t152 = (x1841<<(x1842/(x1843|x1844)));

    if (t152 != 36001471U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x1849 = UINT64_MAX;
	int16_t x1850 = -225;
	static int16_t x1851 = INT16_MIN;
	uint64_t x1852 = UINT64_MAX;
	uint64_t t153 = UINT64_MAX;

    t153 = (x1849<<(x1850/(x1851|x1852)));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x1853 = 12861U;
	static uint16_t x1856 = UINT16_MAX;
	static volatile uint32_t t154 = 607U;

    t154 = (x1853<<(x1854/(x1855|x1856)));

    if (t154 != 12861U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1865 = 58381207U;
	int64_t x1866 = -1LL;
	uint32_t x1867 = 2309214U;
	int16_t x1868 = INT16_MIN;
	static uint32_t t155 = 4U;

    t155 = (x1865<<(x1866/(x1867|x1868)));

    if (t155 != 58381207U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x1873 = INT64_MAX;
	uint8_t x1874 = UINT8_MAX;
	int32_t x1875 = 32385;
	uint64_t x1876 = 295013128184254101LLU;

    t156 = (x1873<<(x1874/(x1875|x1876)));

    if (t156 != INT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1881 = 471675595LLU;
	static int8_t x1882 = INT8_MAX;
	int32_t x1884 = 380440;
	uint64_t t157 = 83079196467437LLU;

    t157 = (x1881<<(x1882/(x1883|x1884)));

    if (t157 != 471675595LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1893 = INT8_MAX;
	int8_t x1894 = INT8_MIN;
	int32_t x1895 = INT32_MAX;
	uint16_t x1896 = 28025U;

    t158 = (x1893<<(x1894/(x1895|x1896)));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1897 = UINT64_MAX;
	uint32_t x1898 = UINT32_MAX;
	uint32_t x1899 = 9U;
	static int16_t x1900 = INT16_MIN;
	uint64_t t159 = 839083913LLU;

    t159 = (x1897<<(x1898/(x1899|x1900)));

    if (t159 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1909 = INT8_MAX;
	uint64_t x1910 = 9114061794098144597LLU;
	uint8_t x1911 = 3U;
	static int64_t x1912 = INT64_MIN;
	volatile int32_t t160 = 33;

    t160 = (x1909<<(x1910/(x1911|x1912)));

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x1921 = 64041LLU;
	int8_t x1922 = -1;
	int8_t x1923 = -1;
	int64_t x1924 = -227867332473LL;
	volatile uint64_t t161 = 24855452815LLU;

    t161 = (x1921<<(x1922/(x1923|x1924)));

    if (t161 != 128082LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1925 = 2U;
	uint32_t x1926 = UINT32_MAX;
	static uint32_t x1927 = 4204U;
	static int32_t x1928 = INT32_MIN;
	volatile int32_t t162 = 211605;

    t162 = (x1925<<(x1926/(x1927|x1928)));

    if (t162 != 4) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1941 = UINT64_MAX;
	uint16_t x1942 = UINT16_MAX;
	int64_t x1943 = INT64_MIN;
	int64_t x1944 = 12936LL;
	static volatile uint64_t t163 = UINT64_MAX;

    t163 = (x1941<<(x1942/(x1943|x1944)));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1965 = 189941LL;
	int64_t x1966 = 60786204LL;
	uint8_t x1967 = 2U;
	int64_t t164 = 2319480225090142LL;

    t164 = (x1965<<(x1966/(x1967|x1968)));

    if (t164 != 189941LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1969 = 29LL;
	uint32_t x1970 = UINT32_MAX;
	int16_t x1971 = -675;
	int16_t x1972 = INT16_MIN;
	volatile int64_t t165 = 1594542076143320LL;

    t165 = (x1969<<(x1970/(x1971|x1972)));

    if (t165 != 58LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x1977 = 89011821523907LLU;
	uint16_t x1978 = UINT16_MAX;
	static uint32_t x1979 = 21767216U;

    t166 = (x1977<<(x1978/(x1979|x1980)));

    if (t166 != 89011821523907LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x1981 = UINT16_MAX;
	int32_t x1982 = -1;
	int32_t x1984 = -1006733232;

    t167 = (x1981<<(x1982/(x1983|x1984)));

    if (t167 != 65535) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1989 = 4776U;
	int8_t x1990 = 5;
	uint16_t x1991 = UINT16_MAX;
	int8_t x1992 = INT8_MAX;
	volatile int32_t t168 = -28706260;

    t168 = (x1989<<(x1990/(x1991|x1992)));

    if (t168 != 4776) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1993 = INT8_MAX;
	static int32_t x1994 = -1;
	uint16_t x1995 = 1U;
	volatile int32_t t169 = 840593925;

    t169 = (x1993<<(x1994/(x1995|x1996)));

    if (t169 != 2032) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1997 = 232055U;
	volatile uint64_t x1998 = UINT64_MAX;
	int64_t x1999 = INT64_MIN;
	uint8_t x2000 = 63U;

    t170 = (x1997<<(x1998/(x1999|x2000)));

    if (t170 != 464110U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x2037 = INT64_MAX;
	volatile uint16_t x2038 = 9739U;
	uint64_t x2039 = UINT64_MAX;
	int16_t x2040 = -1;
	static volatile int64_t t171 = INT64_MAX;

    t171 = (x2037<<(x2038/(x2039|x2040)));

    if (t171 != INT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x2041 = 15722950U;
	static int16_t x2042 = INT16_MIN;
	uint32_t x2043 = UINT32_MAX;

    t172 = (x2041<<(x2042/(x2043|x2044)));

    if (t172 != 15722950U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x2065 = UINT64_MAX;
	uint64_t t173 = UINT64_MAX;

    t173 = (x2065<<(x2066/(x2067|x2068)));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x2106 = -1;
	int16_t x2107 = -6;
	int8_t x2108 = INT8_MIN;
	static uint64_t t174 = UINT64_MAX;

    t174 = (x2105<<(x2106/(x2107|x2108)));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x2125 = UINT32_MAX;
	int64_t x2126 = INT64_MAX;
	int64_t x2127 = INT64_MIN;
	uint64_t x2128 = UINT64_MAX;
	uint32_t t175 = UINT32_MAX;

    t175 = (x2125<<(x2126/(x2127|x2128)));

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x2145 = 1538LL;
	uint8_t x2146 = 79U;
	uint32_t x2147 = 1676788U;
	volatile int64_t x2148 = INT64_MIN;
	static volatile int64_t t176 = -7301028185LL;

    t176 = (x2145<<(x2146/(x2147|x2148)));

    if (t176 != 1538LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x2153 = 1508U;
	volatile int8_t x2154 = 26;

    t177 = (x2153<<(x2154/(x2155|x2156)));

    if (t177 != 1508U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x2165 = 12U;
	int64_t x2167 = 43396559LL;
	int16_t x2168 = INT16_MIN;

    t178 = (x2165<<(x2166/(x2167|x2168)));

    if (t178 != 24) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x2193 = INT8_MAX;
	volatile int32_t x2194 = INT32_MAX;
	int64_t x2195 = -401922456271172LL;
	volatile uint8_t x2196 = 3U;
	int32_t t179 = -248331;

    t179 = (x2193<<(x2194/(x2195|x2196)));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x2242 = -1;
	static int8_t x2243 = -1;
	uint16_t x2244 = 2864U;
	volatile uint64_t t180 = 89901474LLU;

    t180 = (x2241<<(x2242/(x2243|x2244)));

    if (t180 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x2257 = UINT32_MAX;
	int32_t x2258 = INT32_MIN;
	int32_t x2259 = INT32_MIN;
	uint32_t x2260 = 55115616U;
	volatile uint32_t t181 = UINT32_MAX;

    t181 = (x2257<<(x2258/(x2259|x2260)));

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x2270 = -13;
	volatile int16_t x2272 = 56;
	static uint32_t t182 = 1009U;

    t182 = (x2269<<(x2270/(x2271|x2272)));

    if (t182 != 3U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x2273 = 19730LL;
	static volatile int16_t x2274 = -1;
	static int8_t x2276 = INT8_MAX;
	static int64_t t183 = -24118940410902323LL;

    t183 = (x2273<<(x2274/(x2275|x2276)));

    if (t183 != 39460LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x2297 = 2U;
	volatile int16_t x2298 = -1;
	uint64_t x2299 = 218LLU;
	int64_t x2300 = INT64_MAX;
	static int32_t t184 = 33376379;

    t184 = (x2297<<(x2298/(x2299|x2300)));

    if (t184 != 8) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x2302 = 20360LL;
	static uint16_t x2303 = UINT16_MAX;
	volatile int64_t t185 = INT64_MAX;

    t185 = (x2301<<(x2302/(x2303|x2304)));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint64_t x2309 = UINT64_MAX;
	volatile int32_t x2310 = -3992;
	volatile uint64_t x2311 = UINT64_MAX;
	int64_t x2312 = INT64_MIN;
	volatile uint64_t t186 = UINT64_MAX;

    t186 = (x2309<<(x2310/(x2311|x2312)));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x2314 = 0;
	int32_t x2315 = INT32_MIN;
	int32_t t187 = -920118;

    t187 = (x2313<<(x2314/(x2315|x2316)));

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x2321 = 3160145;
	uint16_t x2322 = 3453U;
	int16_t x2323 = INT16_MIN;
	int16_t x2324 = INT16_MIN;
	int32_t t188 = 454531939;

    t188 = (x2321<<(x2322/(x2323|x2324)));

    if (t188 != 3160145) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x2341 = 13;
	volatile uint8_t x2342 = UINT8_MAX;
	int16_t x2343 = INT16_MAX;
	static volatile int32_t t189 = -34;

    t189 = (x2341<<(x2342/(x2343|x2344)));

    if (t189 != 13) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x2349 = 1U;
	static int32_t x2351 = 1715370;
	static volatile int16_t x2352 = INT16_MAX;
	int32_t t190 = -1;

    t190 = (x2349<<(x2350/(x2351|x2352)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x2381 = UINT64_MAX;
	static int64_t x2383 = 981867739583LL;
	int64_t x2384 = -35458504009130506LL;
	uint64_t t191 = UINT64_MAX;

    t191 = (x2381<<(x2382/(x2383|x2384)));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x2385 = 31;
	uint32_t x2386 = 12541U;
	int32_t x2387 = -1;
	static int8_t x2388 = 29;

    t192 = (x2385<<(x2386/(x2387|x2388)));

    if (t192 != 31) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x2433 = UINT8_MAX;
	int16_t x2434 = INT16_MIN;
	int32_t x2435 = -1;
	uint64_t x2436 = 9123LLU;
	volatile int32_t t193 = 24231772;

    t193 = (x2433<<(x2434/(x2435|x2436)));

    if (t193 != 255) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x2469 = 20U;
	static int64_t x2471 = INT64_MAX;
	static int16_t x2472 = -12;
	int32_t t194 = 1;

    t194 = (x2469<<(x2470/(x2471|x2472)));

    if (t194 != 40) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x2485 = 1U;
	volatile int64_t x2487 = INT64_MAX;
	volatile uint64_t x2488 = UINT64_MAX;
	static int32_t t195 = 20249;

    t195 = (x2485<<(x2486/(x2487|x2488)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x2490 = 38659740736859208LLU;
	static uint16_t x2491 = 102U;
	static int8_t x2492 = INT8_MIN;
	volatile int64_t t196 = -102872LL;

    t196 = (x2489<<(x2490/(x2491|x2492)));

    if (t196 != 172652903836LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x2505 = 353;
	uint32_t x2506 = 1272792U;
	uint16_t x2507 = UINT16_MAX;
	volatile int16_t x2508 = INT16_MIN;
	int32_t t197 = -535230792;

    t197 = (x2505<<(x2506/(x2507|x2508)));

    if (t197 != 353) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x2537 = 0LL;
	int32_t x2538 = -1;
	volatile int64_t x2539 = INT64_MAX;
	int64_t t198 = -139772027552405LL;

    t198 = (x2537<<(x2538/(x2539|x2540)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x2545 = 1017504;
	int8_t x2547 = INT8_MAX;
	int32_t t199 = 3;

    t199 = (x2545<<(x2546/(x2547|x2548)));

    if (t199 != 1017504) { NG(); } else { ; }
	
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

