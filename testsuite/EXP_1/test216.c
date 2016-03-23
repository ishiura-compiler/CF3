
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

uint8_t x16 = 10U;
uint8_t x17 = 13U;
int8_t x20 = 15;
uint32_t t1 = 357466U;
uint32_t x52 = 14U;
int32_t x97 = 118;
uint64_t x209 = UINT64_MAX;
volatile int64_t x229 = -1LL;
uint8_t x232 = 26U;
int64_t t8 = -8741520342LL;
static int64_t x277 = -1LL;
int16_t x278 = -7094;
uint64_t t10 = 0LLU;
int16_t x431 = INT16_MIN;
uint64_t x500 = 21LLU;
static int32_t x518 = INT32_MIN;
int64_t x554 = -178594345969969816LL;
int32_t x555 = INT32_MAX;
int16_t x633 = 2142;
int8_t x781 = -1;
int8_t x784 = 0;
static int16_t x814 = INT16_MAX;
int64_t x1065 = -1LL;
static volatile uint8_t x1252 = 13U;
volatile int8_t x1316 = 0;
static uint8_t x1720 = 30U;
int8_t x1726 = INT8_MIN;
uint64_t t33 = 18441LLU;
int8_t x1765 = -1;
int64_t x1766 = -9177265606235LL;
int16_t x1768 = 1;
volatile uint8_t x2077 = 66U;
uint32_t t35 = 23735852U;
uint32_t x2379 = 107294464U;
uint64_t x2466 = 1088039056388LLU;
int32_t x2601 = -1;
int8_t x2602 = 11;
int8_t x2604 = 1;
uint16_t x2660 = 14U;
volatile uint64_t t41 = 896875297535324494LLU;
int16_t x2801 = 3685;
int8_t x2803 = INT8_MAX;
static int16_t x2804 = 0;
uint16_t x2819 = UINT16_MAX;
int16_t x2820 = 0;
volatile uint64_t t46 = 11364155398166LLU;
uint32_t x2933 = 6892938U;
int64_t x2995 = -1LL;
static uint64_t t49 = 22LLU;
static int32_t x2997 = -1;
uint16_t x3092 = 5U;
volatile uint64_t x3093 = 1511419784477185LLU;
uint32_t x3121 = UINT32_MAX;
static uint8_t x3124 = 2U;
volatile int32_t t56 = 124088;
uint64_t x3289 = UINT64_MAX;
uint64_t x3291 = 4058661933947LLU;
volatile int8_t x3292 = 26;
volatile uint64_t t58 = 585438533609016897LLU;
volatile int32_t x3353 = -83;
int64_t x3355 = INT64_MAX;
volatile int32_t x3521 = INT32_MIN;
uint16_t x3524 = 26U;
uint16_t x3589 = UINT16_MAX;
static volatile int16_t x3623 = INT16_MIN;
int16_t x3685 = -1;
static volatile uint8_t x3810 = 48U;
uint32_t x3812 = 0U;
uint64_t t69 = 1319127674166LLU;
volatile uint32_t x3848 = 10U;
int64_t x3889 = -1LL;
uint16_t x3892 = 55U;
int16_t x4014 = INT16_MIN;
static uint64_t x4015 = 1279174684LLU;
int8_t x4033 = -1;
uint8_t x4072 = 3U;
uint32_t t74 = 17U;
int32_t t77 = 1765;
uint32_t x4219 = 2083U;
static volatile uint32_t t78 = 1240073577U;
static int16_t x4248 = 1;
static int16_t x4330 = 4;
uint64_t x4371 = UINT64_MAX;
uint64_t t82 = 13362043948LLU;
uint32_t x4402 = 1375394676U;
int8_t x4404 = 3;
static int32_t x4410 = INT32_MIN;
uint8_t x4449 = 31U;
int8_t x4450 = INT8_MIN;
uint8_t x4524 = 60U;
int8_t x4539 = -1;
uint64_t x4573 = 52923LLU;
int64_t x4575 = INT64_MAX;
static volatile uint64_t t91 = 1526393830359868LLU;
uint8_t x4864 = 14U;
static int32_t x4933 = INT32_MAX;
uint8_t x4935 = 59U;
uint8_t x4936 = 15U;
volatile uint32_t t94 = 7502346U;
int8_t x5039 = -1;
int32_t t95 = -533;
int64_t x5134 = INT64_MIN;
int8_t x5135 = INT8_MIN;
uint64_t x5186 = 215945015298058LLU;
volatile uint8_t x5188 = 4U;
uint64_t t98 = 33681456747LLU;
volatile int64_t x5233 = INT64_MIN;
int32_t x5236 = 0;
uint8_t x5266 = UINT8_MAX;
volatile int32_t t101 = -1525;
int64_t x5339 = -1LL;
int64_t x5433 = 113424921919901076LL;
int64_t x5442 = 454848LL;
static volatile uint64_t x5443 = 756053060LLU;
static int16_t x5444 = 1;
static int32_t x5625 = -1;
uint64_t x5746 = 616623LLU;
static volatile uint64_t x5888 = 0LLU;
uint16_t x5897 = UINT16_MAX;
volatile int32_t t109 = -26318383;
int16_t x5945 = -1425;
int8_t x5948 = 7;
static int64_t x6041 = INT64_MIN;
int8_t x6044 = 6;
volatile int64_t x6049 = -864LL;
volatile uint8_t x6133 = 0U;
volatile int64_t t116 = -123288252224988147LL;
volatile int32_t t118 = 349883290;
static uint64_t x6381 = UINT64_MAX;
static uint32_t t120 = 884U;
uint32_t x6420 = 0U;
uint32_t t122 = 4U;
int64_t x6554 = INT64_MAX;
uint8_t x6565 = UINT8_MAX;
uint8_t x6568 = 2U;
uint32_t t125 = 101U;
volatile int16_t x6621 = 2069;
uint64_t x6622 = 5217828195313928544LLU;
uint64_t x6662 = UINT64_MAX;
int64_t x6664 = 7LL;
volatile uint64_t t128 = 4095815610248947277LLU;
int8_t x6693 = INT8_MIN;
volatile uint32_t t129 = 7435360U;
uint64_t t130 = 273LLU;
uint64_t t131 = 1546938702881053496LLU;
int8_t x6986 = 61;
int8_t x7020 = 4;
static int8_t x7155 = -7;
uint32_t x7156 = 26U;
uint32_t t139 = 5483590U;
uint32_t x7286 = UINT32_MAX;
uint8_t x7313 = 93U;
uint8_t x7314 = 3U;
int8_t x7336 = 1;
uint64_t x7339 = UINT64_MAX;
static uint8_t x7384 = 1U;
int16_t x7385 = 0;
int8_t x7386 = -31;
volatile uint32_t x7387 = UINT32_MAX;
volatile uint64_t x7482 = 1LLU;
int16_t x7484 = 0;
volatile uint64_t t147 = UINT64_MAX;
int16_t x7679 = -154;
static uint16_t x7680 = 1U;
uint64_t t149 = 1775252767LLU;
static uint8_t x7804 = 0U;
volatile uint32_t t155 = 26U;
static volatile uint8_t x8005 = 18U;
volatile int16_t x8006 = -1;
static int32_t x8077 = -92791;
int32_t x8302 = -61687619;
uint32_t x8395 = 3422480U;
static int64_t x8505 = INT64_MIN;
uint32_t x8507 = 1578U;
int64_t x8727 = 1LL;
static uint32_t x8844 = 18U;
uint32_t x9040 = 4U;
int16_t x9136 = 11;
volatile int32_t t171 = 100425;
volatile uint64_t t173 = 5750435783332462LLU;
int16_t x9421 = 73;
int32_t t176 = 0;
uint32_t x9666 = UINT32_MAX;
int16_t x9758 = INT16_MIN;
uint32_t x9760 = 9U;
volatile uint8_t x9952 = 0U;
int8_t x9980 = 1;
volatile uint16_t x10046 = 3U;
int16_t x10053 = INT16_MAX;
uint16_t x10129 = 724U;
int32_t x10222 = -1;
static volatile int32_t t191 = -146532154;
int16_t x10427 = INT16_MIN;
int64_t t193 = 50738077664348416LL;
volatile int8_t x10453 = -1;
int8_t x10454 = -1;
int32_t t194 = 1208;
int32_t x10505 = 33831220;
int8_t x10695 = -1;
volatile uint64_t x10718 = 149124074207LLU;


void f0(void) {
    	volatile uint8_t x13 = 9U;
	int64_t x14 = 16142850652LL;
	static volatile uint64_t x15 = 0LLU;
	uint64_t t0 = 313495326600423731LLU;

    t0 = (((x13-x14)-x15)<<x16);

    if (t0 != 18446727543430493184LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x18 = 0U;
	uint32_t x19 = 14865U;

    t1 = (((x17-x18)-x19)<<x20);

    if (t1 != 3808296960U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x49 = -103;
	uint16_t x50 = UINT16_MAX;
	uint64_t x51 = 67435167LLU;
	volatile uint64_t t2 = 2599LLU;

    t2 = (((x49-x50)-x51)<<x52);

    if (t2 != 18446742967776362496LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x73 = 459;
	static uint32_t x74 = 34287892U;
	uint8_t x75 = 72U;
	int16_t x76 = 4;
	volatile uint32_t t3 = 8334133U;

    t3 = (((x73-x74)-x75)<<x76);

    if (t3 != 3746367216U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x98 = 1LLU;
	volatile int32_t x99 = -241631;
	uint16_t x100 = 1U;
	volatile uint64_t t4 = 6772187451581084590LLU;

    t4 = (((x97-x98)-x99)<<x100);

    if (t4 != 483496LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x125 = 33368798;
	uint32_t x126 = 10U;
	int16_t x127 = 553;
	static uint32_t x128 = 17U;
	volatile uint32_t t5 = 1604999613U;

    t5 = (((x125-x126)-x127)<<x128);

    if (t5 != 1364590592U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x210 = INT8_MIN;
	volatile int16_t x211 = 0;
	volatile int16_t x212 = 0;
	volatile uint64_t t6 = 19963488393987883LLU;

    t6 = (((x209-x210)-x211)<<x212);

    if (t6 != 127LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x225 = 3LLU;
	uint64_t x226 = 2724755185883047LLU;
	uint64_t x227 = 3513505440510LLU;
	volatile int8_t x228 = 7;
	uint64_t t7 = 257LLU;

    t7 = (((x225-x226)-x227)<<x228);

    if (t7 != 18097525681220136704LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x230 = INT32_MIN;
	int32_t x231 = INT32_MAX;

    t8 = (((x229-x230)-x231)<<x232);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x279 = 1U;
	uint16_t x280 = 0U;
	int64_t t9 = -369866277LL;

    t9 = (((x277-x278)-x279)<<x280);

    if (t9 != 7092LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x297 = INT32_MIN;
	uint64_t x298 = UINT64_MAX;
	int32_t x299 = -28058;
	uint32_t x300 = 1U;

    t10 = (((x297-x298)-x299)<<x300);

    if (t10 != 18446744069414640438LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x429 = INT32_MIN;
	volatile uint32_t x430 = UINT32_MAX;
	uint32_t x432 = 1U;
	uint32_t t11 = 103468285U;

    t11 = (((x429-x430)-x431)<<x432);

    if (t11 != 65538U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x497 = -241046;
	uint64_t x498 = UINT64_MAX;
	uint16_t x499 = 799U;
	uint64_t t12 = 6LLU;

    t12 = (((x497-x498)-x499)<<x500);

    if (t12 != 18446743566525923328LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x517 = -1LL;
	static volatile int16_t x519 = INT16_MAX;
	int32_t x520 = 1;
	int64_t t13 = 3750213182659LL;

    t13 = (((x517-x518)-x519)<<x520);

    if (t13 != 4294901760LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x529 = 6600329;
	static int16_t x530 = -1;
	uint32_t x531 = UINT32_MAX;
	int64_t x532 = 0LL;
	volatile uint32_t t14 = 7903199U;

    t14 = (((x529-x530)-x531)<<x532);

    if (t14 != 6600331U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x553 = UINT64_MAX;
	int8_t x556 = 3;
	uint64_t t15 = 25590556LLU;

    t15 = (((x553-x554)-x555)<<x556);

    if (t15 != 1428754750579889344LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x634 = -51350LL;
	static int32_t x635 = INT32_MIN;
	uint8_t x636 = 10U;
	int64_t t16 = 13826974499046LL;

    t16 = (((x633-x634)-x635)<<x636);

    if (t16 != 2199078031360LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x717 = 4415907865607565316LL;
	static uint32_t x718 = 1173247U;
	static volatile int16_t x719 = INT16_MAX;
	volatile uint32_t x720 = 0U;
	volatile int64_t t17 = -13761440278LL;

    t17 = (((x717-x718)-x719)<<x720);

    if (t17 != 4415907865606359302LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint16_t x741 = 5U;
	uint64_t x742 = 679806LLU;
	uint8_t x743 = UINT8_MAX;
	int8_t x744 = 1;
	volatile uint64_t t18 = 85762LLU;

    t18 = (((x741-x742)-x743)<<x744);

    if (t18 != 18446744073708191504LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x782 = INT16_MIN;
	volatile int16_t x783 = INT16_MIN;
	int32_t t19 = 5650943;

    t19 = (((x781-x782)-x783)<<x784);

    if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x813 = UINT64_MAX;
	static uint8_t x815 = 39U;
	uint8_t x816 = 2U;
	uint64_t t20 = 289810802422055LLU;

    t20 = (((x813-x814)-x815)<<x816);

    if (t20 != 18446744073709420388LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x1005 = INT32_MIN;
	static volatile uint32_t x1006 = UINT32_MAX;
	static int32_t x1007 = -1;
	uint16_t x1008 = 4U;
	volatile uint32_t t21 = 16730485U;

    t21 = (((x1005-x1006)-x1007)<<x1008);

    if (t21 != 32U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1066 = -1LL;
	int32_t x1067 = -1;
	uint16_t x1068 = 6U;
	volatile int64_t t22 = 3242580LL;

    t22 = (((x1065-x1066)-x1067)<<x1068);

    if (t22 != 64LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x1197 = INT32_MIN;
	uint64_t x1198 = UINT64_MAX;
	static int8_t x1199 = 1;
	uint32_t x1200 = 4U;
	uint64_t t23 = 3121287520647LLU;

    t23 = (((x1197-x1198)-x1199)<<x1200);

    if (t23 != 18446744039349813248LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x1249 = INT16_MIN;
	uint64_t x1250 = 3362418LLU;
	uint16_t x1251 = 31534U;
	volatile uint64_t t24 = 6LLU;

    t24 = (((x1249-x1250)-x1251)<<x1252);

    if (t24 != 18446744045637861376LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x1313 = INT32_MIN;
	volatile int16_t x1314 = INT16_MIN;
	int64_t x1315 = -1626738554589LL;
	int64_t t25 = -28LL;

    t25 = (((x1313-x1314)-x1315)<<x1316);

    if (t25 != 1624591103709LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1329 = 7288007357LL;
	volatile uint64_t x1330 = 13632046LLU;
	volatile int8_t x1331 = -25;
	static uint8_t x1332 = 0U;
	uint64_t t26 = 702LLU;

    t26 = (((x1329-x1330)-x1331)<<x1332);

    if (t26 != 7274375336LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x1377 = UINT32_MAX;
	static uint8_t x1378 = UINT8_MAX;
	int32_t x1379 = -268245662;
	int8_t x1380 = 3;
	uint32_t t27 = 274496U;

    t27 = (((x1377-x1378)-x1379)<<x1380);

    if (t27 != 2145963248U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1453 = 33;
	int8_t x1454 = 1;
	int16_t x1455 = INT16_MIN;
	volatile uint16_t x1456 = 0U;
	int32_t t28 = 413;

    t28 = (((x1453-x1454)-x1455)<<x1456);

    if (t28 != 32800) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x1665 = 448U;
	int16_t x1666 = 12;
	uint32_t x1667 = 111052U;
	uint8_t x1668 = 31U;
	static uint32_t t29 = 3U;

    t29 = (((x1665-x1666)-x1667)<<x1668);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x1709 = -15680;
	static int32_t x1710 = -990;
	volatile int64_t x1711 = INT64_MIN;
	int16_t x1712 = 0;
	int64_t t30 = -50030719379499LL;

    t30 = (((x1709-x1710)-x1711)<<x1712);

    if (t30 != 9223372036854761118LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x1717 = UINT16_MAX;
	int8_t x1718 = INT8_MIN;
	int64_t x1719 = -1LL;
	static int64_t t31 = 2891115346846997LL;

    t31 = (((x1717-x1718)-x1719)<<x1720);

    if (t31 != 70506183131136LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x1725 = 0;
	static volatile uint64_t x1727 = 5626LLU;
	static uint16_t x1728 = 1U;
	uint64_t t32 = 869527615884720LLU;

    t32 = (((x1725-x1726)-x1727)<<x1728);

    if (t32 != 18446744073709540620LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x1749 = UINT64_MAX;
	int16_t x1750 = -1;
	int16_t x1751 = -1;
	uint8_t x1752 = 34U;

    t33 = (((x1749-x1750)-x1751)<<x1752);

    if (t33 != 17179869184LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1767 = -17658LL;
	volatile int64_t t34 = 10002LL;

    t34 = (((x1765-x1766)-x1767)<<x1768);

    if (t34 != 18354531247784LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x2078 = INT16_MAX;
	volatile uint32_t x2079 = UINT32_MAX;
	uint32_t x2080 = 4U;

    t35 = (((x2077-x2078)-x2079)<<x2080);

    if (t35 != 4294444096U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x2377 = -60130547;
	int32_t x2378 = INT32_MIN;
	uint16_t x2380 = 5U;
	volatile uint32_t t36 = 827097067U;

    t36 = (((x2377-x2378)-x2379)<<x2380);

    if (t36 != 3232334240U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x2465 = 2U;
	int32_t x2467 = INT32_MIN;
	static uint8_t x2468 = 5U;
	uint64_t t37 = 23758640924869LLU;

    t37 = (((x2465-x2466)-x2467)<<x2468);

    if (t37 != 18446709325179224000LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2525 = -1;
	int32_t x2526 = -1;
	int16_t x2527 = INT16_MIN;
	int8_t x2528 = 9;
	static int32_t t38 = -1314756;

    t38 = (((x2525-x2526)-x2527)<<x2528);

    if (t38 != 16777216) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2603 = UINT32_MAX;
	uint32_t t39 = 336U;

    t39 = (((x2601-x2602)-x2603)<<x2604);

    if (t39 != 4294967274U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x2637 = 12;
	static uint64_t x2638 = 75114LLU;
	volatile int8_t x2639 = -1;
	static uint16_t x2640 = 1U;
	uint64_t t40 = 255459LLU;

    t40 = (((x2637-x2638)-x2639)<<x2640);

    if (t40 != 18446744073709401414LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x2657 = 3;
	static uint64_t x2658 = 23429904456LLU;
	volatile int16_t x2659 = -1;

    t41 = (((x2657-x2658)-x2659)<<x2660);

    if (t41 != 18446360198155010048LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x2685 = 177357487;
	uint64_t x2686 = 1751423364LLU;
	static volatile int8_t x2687 = 10;
	static uint8_t x2688 = 8U;
	volatile uint64_t t42 = 125677185506167539LLU;

    t42 = (((x2685-x2686)-x2687)<<x2688);

    if (t42 != 18446743670748684544LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2802 = INT8_MIN;
	static int32_t t43 = -966762203;

    t43 = (((x2801-x2802)-x2803)<<x2804);

    if (t43 != 3686) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x2817 = UINT32_MAX;
	uint64_t x2818 = UINT64_MAX;
	static volatile uint64_t t44 = 20059026861712588LLU;

    t44 = (((x2817-x2818)-x2819)<<x2820);

    if (t44 != 4294901761LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x2881 = 0U;
	uint64_t x2882 = 1262378371838LLU;
	uint8_t x2883 = 1U;
	static volatile int16_t x2884 = 0;
	volatile uint64_t t45 = 3712418994561299609LLU;

    t45 = (((x2881-x2882)-x2883)<<x2884);

    if (t45 != 18446742811331179777LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x2925 = 2389LLU;
	int8_t x2926 = INT8_MIN;
	uint8_t x2927 = 5U;
	uint16_t x2928 = 21U;

    t46 = (((x2925-x2926)-x2927)<<x2928);

    if (t46 != 5268045824LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x2934 = INT16_MIN;
	uint16_t x2935 = UINT16_MAX;
	static int32_t x2936 = 0;
	static uint32_t t47 = 3U;

    t47 = (((x2933-x2934)-x2935)<<x2936);

    if (t47 != 6860171U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x2977 = 719677736240626410LLU;
	uint64_t x2978 = 636124801661LLU;
	uint16_t x2979 = 1119U;
	volatile uint8_t x2980 = 2U;
	volatile uint64_t t48 = 57499351444746LLU;

    t48 = (((x2977-x2978)-x2979)<<x2980);

    if (t48 != 2878708400463294520LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x2993 = 1266438358653LLU;
	static uint64_t x2994 = 19LLU;
	uint8_t x2996 = 51U;

    t49 = (((x2993-x2994)-x2995)<<x2996);

    if (t49 != 3699707093884862464LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x2998 = 18U;
	uint64_t x2999 = UINT64_MAX;
	uint8_t x3000 = 2U;
	uint64_t t50 = 632881692213985LLU;

    t50 = (((x2997-x2998)-x2999)<<x3000);

    if (t50 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x3073 = INT64_MIN;
	volatile int64_t x3074 = INT64_MIN;
	int8_t x3075 = INT8_MIN;
	int32_t x3076 = 31;
	int64_t t51 = 985535876510483280LL;

    t51 = (((x3073-x3074)-x3075)<<x3076);

    if (t51 != 274877906944LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x3089 = 15545U;
	volatile int64_t x3090 = -128221LL;
	volatile int16_t x3091 = INT16_MAX;
	static int64_t t52 = 1445LL;

    t52 = (((x3089-x3090)-x3091)<<x3092);

    if (t52 != 3551968LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x3094 = 270813444676LLU;
	uint8_t x3095 = 1U;
	uint16_t x3096 = 0U;
	static uint64_t t53 = 537681812284795LLU;

    t53 = (((x3093-x3094)-x3095)<<x3096);

    if (t53 != 1511148971032508LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x3122 = -1LL;
	volatile int8_t x3123 = INT8_MIN;
	int64_t t54 = 247478897LL;

    t54 = (((x3121-x3122)-x3123)<<x3124);

    if (t54 != 17179869696LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x3157 = 103;
	static int32_t x3158 = -624289;
	int16_t x3159 = -1;
	uint8_t x3160 = 1U;
	static int32_t t55 = 158214149;

    t55 = (((x3157-x3158)-x3159)<<x3160);

    if (t55 != 1248786) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x3225 = 2180U;
	uint8_t x3226 = 0U;
	uint8_t x3227 = 26U;
	uint8_t x3228 = 7U;

    t56 = (((x3225-x3226)-x3227)<<x3228);

    if (t56 != 275712) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x3290 = UINT32_MAX;
	volatile uint64_t t57 = 5423126672251312LLU;

    t57 = (((x3289-x3290)-x3291)<<x3292);

    if (t57 != 4040738982265356288LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x3321 = 0LLU;
	int16_t x3322 = INT16_MIN;
	int64_t x3323 = INT64_MIN;
	static int16_t x3324 = 5;

    t58 = (((x3321-x3322)-x3323)<<x3324);

    if (t58 != 1048576LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x3354 = 2646453093765LLU;
	uint32_t x3356 = 2U;
	uint64_t t59 = 231209724LLU;

    t59 = (((x3353-x3354)-x3355)<<x3356);

    if (t59 != 18446733487897176228LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x3413 = -1;
	volatile int16_t x3414 = -1;
	static uint32_t x3415 = 213653U;
	volatile uint8_t x3416 = 1U;
	uint32_t t60 = 31146738U;

    t60 = (((x3413-x3414)-x3415)<<x3416);

    if (t60 != 4294539990U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x3465 = 1946257586LLU;
	static int64_t x3466 = -3784180622144846LL;
	static int8_t x3467 = INT8_MIN;
	uint8_t x3468 = 15U;
	static volatile uint64_t t61 = 3251252LLU;

    t61 = (((x3465-x3466)-x3467)<<x3468);

    if (t61 != 13319629959157776384LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x3522 = -1;
	volatile uint64_t x3523 = 146927808LLU;
	volatile uint64_t t62 = 220LLU;

    t62 = (((x3521-x3522)-x3523)<<x3524);

    if (t62 != 18292768727415914496LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x3590 = UINT64_MAX;
	int64_t x3591 = INT64_MIN;
	int8_t x3592 = 0;
	volatile uint64_t t63 = 75LLU;

    t63 = (((x3589-x3590)-x3591)<<x3592);

    if (t63 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x3621 = 1275883140U;
	uint8_t x3622 = UINT8_MAX;
	volatile int16_t x3624 = 1;
	uint32_t t64 = 119231724U;

    t64 = (((x3621-x3622)-x3623)<<x3624);

    if (t64 != 2551831306U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x3633 = INT64_MIN;
	volatile int32_t x3634 = INT32_MIN;
	int64_t x3635 = INT64_MIN;
	static int32_t x3636 = 8;
	volatile int64_t t65 = 751344165572777533LL;

    t65 = (((x3633-x3634)-x3635)<<x3636);

    if (t65 != 549755813888LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x3653 = INT16_MIN;
	uint64_t x3654 = UINT64_MAX;
	static uint16_t x3655 = UINT16_MAX;
	static uint64_t x3656 = 1LLU;
	uint64_t t66 = 46036089304170656LLU;

    t66 = (((x3653-x3654)-x3655)<<x3656);

    if (t66 != 18446744073709355012LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x3686 = INT16_MIN;
	int8_t x3687 = INT8_MIN;
	static int32_t x3688 = 0;
	int32_t t67 = 60925;

    t67 = (((x3685-x3686)-x3687)<<x3688);

    if (t67 != 32895) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x3693 = INT8_MAX;
	uint8_t x3694 = UINT8_MAX;
	int8_t x3695 = INT8_MIN;
	uint32_t x3696 = 11U;
	volatile int32_t t68 = 5;

    t68 = (((x3693-x3694)-x3695)<<x3696);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x3809 = 6438627718909LLU;
	uint64_t x3811 = UINT64_MAX;

    t69 = (((x3809-x3810)-x3811)<<x3812);

    if (t69 != 6438627718862LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x3845 = INT16_MIN;
	int8_t x3846 = -1;
	uint32_t x3847 = UINT32_MAX;
	static volatile uint32_t t70 = 88314U;

    t70 = (((x3845-x3846)-x3847)<<x3848);

    if (t70 != 4261414912U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x3890 = -1;
	int8_t x3891 = 0;
	volatile int64_t t71 = 914479LL;

    t71 = (((x3889-x3890)-x3891)<<x3892);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x4013 = -7;
	uint8_t x4016 = 58U;
	volatile uint64_t t72 = 133146958593506901LLU;

    t72 = (((x4013-x4014)-x4015)<<x4016);

    if (t72 != 8358680908399640576LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x4034 = UINT64_MAX;
	int64_t x4035 = INT64_MAX;
	uint8_t x4036 = 0U;
	volatile uint64_t t73 = 99201LLU;

    t73 = (((x4033-x4034)-x4035)<<x4036);

    if (t73 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x4069 = 5;
	uint32_t x4070 = UINT32_MAX;
	static int16_t x4071 = INT16_MIN;

    t74 = (((x4069-x4070)-x4071)<<x4072);

    if (t74 != 262192U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x4121 = INT32_MAX;
	uint8_t x4122 = UINT8_MAX;
	static uint64_t x4123 = 4958062857626057LLU;
	static uint8_t x4124 = 0U;
	static uint64_t t75 = 949461LLU;

    t75 = (((x4121-x4122)-x4123)<<x4124);

    if (t75 != 18441786012999408951LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x4173 = UINT32_MAX;
	int16_t x4174 = INT16_MAX;
	int64_t x4175 = -15849054530036268LL;
	uint32_t x4176 = 0U;
	volatile int64_t t76 = 21573532585LL;

    t76 = (((x4173-x4174)-x4175)<<x4176);

    if (t76 != 15849058824970796LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x4197 = 24;
	uint16_t x4198 = 3U;
	int16_t x4199 = INT16_MIN;
	static int8_t x4200 = 0;

    t77 = (((x4197-x4198)-x4199)<<x4200);

    if (t77 != 32789) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x4217 = UINT8_MAX;
	volatile uint32_t x4218 = 45452U;
	static int16_t x4220 = 7;

    t78 = (((x4217-x4218)-x4219)<<x4220);

    if (t78 != 4288915456U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x4245 = 6U;
	volatile uint64_t x4246 = 3162362209LLU;
	static int64_t x4247 = INT64_MAX;
	static uint64_t t79 = 56LLU;

    t79 = (((x4245-x4246)-x4247)<<x4248);

    if (t79 != 18446744067384827212LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x4329 = UINT64_MAX;
	int32_t x4331 = 144746;
	int8_t x4332 = 2;
	uint64_t t80 = 492056LLU;

    t80 = (((x4329-x4330)-x4331)<<x4332);

    if (t80 != 18446744073708972612LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x4369 = 7;
	volatile int8_t x4370 = INT8_MAX;
	static uint8_t x4372 = 39U;
	uint64_t t81 = 164LLU;

    t81 = (((x4369-x4370)-x4371)<<x4372);

    if (t81 != 18446678652767698944LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x4397 = INT16_MIN;
	int8_t x4398 = 2;
	static uint64_t x4399 = 9155765994664LLU;
	uint8_t x4400 = 5U;

    t82 = (((x4397-x4398)-x4399)<<x4400);

    if (t82 != 18446451089196673728LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x4401 = 3744561037309LLU;
	volatile uint16_t x4403 = UINT16_MAX;
	uint64_t t83 = 996875775987798939LLU;

    t83 = (((x4401-x4402)-x4403)<<x4404);

    if (t83 != 29945484616784LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x4409 = 1339778639600LLU;
	uint8_t x4411 = 4U;
	int8_t x4412 = 23;
	volatile uint64_t t84 = 3LLU;

    t84 = (((x4409-x4410)-x4411)<<x4412);

    if (t84 != 11256892212853604352LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x4451 = UINT64_MAX;
	volatile int64_t x4452 = 2LL;
	volatile uint64_t t85 = 81LLU;

    t85 = (((x4449-x4450)-x4451)<<x4452);

    if (t85 != 640LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x4497 = INT16_MAX;
	uint32_t x4498 = 20U;
	volatile int32_t x4499 = INT32_MAX;
	int32_t x4500 = 3;
	static volatile uint32_t t86 = 47U;

    t86 = (((x4497-x4498)-x4499)<<x4500);

    if (t86 != 261984U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x4521 = INT16_MAX;
	uint64_t x4522 = 480979189862754736LLU;
	static int32_t x4523 = INT32_MIN;
	uint64_t t87 = 3059853708LLU;

    t87 = (((x4521-x4522)-x4523)<<x4524);

    if (t87 != 17293822569102704640LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x4537 = UINT32_MAX;
	volatile uint16_t x4538 = 2187U;
	uint16_t x4540 = 31U;
	uint32_t t88 = 2047682945U;

    t88 = (((x4537-x4538)-x4539)<<x4540);

    if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x4574 = INT64_MIN;
	uint16_t x4576 = 5U;
	uint64_t t89 = 399707015384LLU;

    t89 = (((x4573-x4574)-x4575)<<x4576);

    if (t89 != 1693568LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x4601 = INT32_MIN;
	volatile int32_t x4602 = -448990;
	uint32_t x4603 = UINT32_MAX;
	static volatile int16_t x4604 = 7;
	uint32_t t90 = 76943564U;

    t90 = (((x4601-x4602)-x4603)<<x4604);

    if (t90 != 57470848U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x4805 = UINT16_MAX;
	uint64_t x4806 = 1902LLU;
	int16_t x4807 = -3;
	uint16_t x4808 = 0U;

    t91 = (((x4805-x4806)-x4807)<<x4808);

    if (t91 != 63636LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x4861 = 1882U;
	uint64_t x4862 = UINT64_MAX;
	int8_t x4863 = -1;
	uint64_t t92 = 2780811LLU;

    t92 = (((x4861-x4862)-x4863)<<x4864);

    if (t92 != 30867456LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x4865 = -1640;
	int16_t x4866 = INT16_MIN;
	static volatile uint32_t x4867 = 855805U;
	uint16_t x4868 = 3U;
	volatile uint32_t t93 = 602U;

    t93 = (((x4865-x4866)-x4867)<<x4868);

    if (t93 != 4288369880U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x4934 = 1765U;

    t94 = (((x4933-x4934)-x4935)<<x4936);

    if (t94 != 4235165696U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x5037 = INT16_MAX;
	int16_t x5038 = 1;
	int8_t x5040 = 11;

    t95 = (((x5037-x5038)-x5039)<<x5040);

    if (t95 != 67106816) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x5041 = INT32_MIN;
	uint32_t x5042 = UINT32_MAX;
	int64_t x5043 = -1LL;
	uint16_t x5044 = 29U;
	int64_t t96 = 10409191478112086LL;

    t96 = (((x5041-x5042)-x5043)<<x5044);

    if (t96 != 1152921505680588800LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x5133 = 12LLU;
	int16_t x5136 = 0;
	static volatile uint64_t t97 = 2140963176856665LLU;

    t97 = (((x5133-x5134)-x5135)<<x5136);

    if (t97 != 9223372036854775948LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x5185 = -1;
	static volatile int16_t x5187 = 344;

    t98 = (((x5185-x5186)-x5187)<<x5188);

    if (t98 != 18443288953464777168LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x5234 = -1;
	uint64_t x5235 = 223732969937LLU;
	static volatile uint64_t t99 = 969LLU;

    t99 = (((x5233-x5234)-x5235)<<x5236);

    if (t99 != 9223371813121805872LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x5265 = 1U;
	volatile int32_t x5267 = INT32_MIN;
	uint8_t x5268 = 0U;
	volatile int32_t t100 = -1;

    t100 = (((x5265-x5266)-x5267)<<x5268);

    if (t100 != 2147483394) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x5273 = 5U;
	static volatile int16_t x5274 = INT16_MIN;
	uint8_t x5275 = 119U;
	uint8_t x5276 = 0U;

    t101 = (((x5273-x5274)-x5275)<<x5276);

    if (t101 != 32654) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x5333 = INT32_MIN;
	uint64_t x5334 = 1707812885169LLU;
	int16_t x5335 = -43;
	uint16_t x5336 = 0U;
	volatile uint64_t t102 = 49466LLU;

    t102 = (((x5333-x5334)-x5335)<<x5336);

    if (t102 != 18446742363749182842LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x5337 = INT8_MIN;
	uint32_t x5338 = UINT32_MAX;
	uint32_t x5340 = 31U;
	volatile int64_t t103 = -1083467232232561LL;

    t103 = (((x5337-x5338)-x5339)<<x5340);

    if (t103 != 9223371766271836160LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x5434 = UINT16_MAX;
	uint8_t x5435 = UINT8_MAX;
	uint8_t x5436 = 2U;
	volatile int64_t t104 = -46394130948LL;

    t104 = (((x5433-x5434)-x5435)<<x5436);

    if (t104 != 453699687679341144LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x5441 = 4082U;
	uint64_t t105 = 700656617485LLU;

    t105 = (((x5441-x5442)-x5443)<<x5444);

    if (t105 != 18446744072196543964LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x5626 = -1;
	static int16_t x5627 = INT16_MIN;
	int32_t x5628 = 5;
	volatile int32_t t106 = -14;

    t106 = (((x5625-x5626)-x5627)<<x5628);

    if (t106 != 1048576) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x5745 = 27224;
	volatile int16_t x5747 = -1;
	uint8_t x5748 = 11U;
	volatile uint64_t t107 = 165116LLU;

    t107 = (((x5745-x5746)-x5747)<<x5748);

    if (t107 != 18446744072502464512LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x5885 = -2;
	volatile int8_t x5886 = INT8_MIN;
	int64_t x5887 = -1LL;
	volatile int64_t t108 = 884027LL;

    t108 = (((x5885-x5886)-x5887)<<x5888);

    if (t108 != 127LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x5898 = INT16_MIN;
	int16_t x5899 = INT16_MIN;
	static int16_t x5900 = 7;

    t109 = (((x5897-x5898)-x5899)<<x5900);

    if (t109 != 16777088) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x5925 = -1;
	uint64_t x5926 = 5778780LLU;
	volatile int64_t x5927 = 13773039964340LL;
	volatile uint16_t x5928 = 30U;
	uint64_t t110 = 19383953LLU;

    t110 = (((x5925-x5926)-x5927)<<x5928);

    if (t110 != 5593488860882403328LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x5946 = UINT64_MAX;
	int64_t x5947 = INT64_MAX;
	static uint64_t t111 = 520394187LLU;

    t111 = (((x5945-x5946)-x5947)<<x5948);

    if (t111 != 18446744073709369472LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x5997 = UINT64_MAX;
	static uint32_t x5998 = 32578153U;
	uint64_t x5999 = 2193LLU;
	static uint8_t x6000 = 13U;
	uint64_t t112 = 1915270849466328LLU;

    t112 = (((x5997-x5998)-x5999)<<x6000);

    if (t112 != 18446743806811348992LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x6042 = UINT64_MAX;
	uint16_t x6043 = 15U;
	volatile uint64_t t113 = 1343767483LLU;

    t113 = (((x6041-x6042)-x6043)<<x6044);

    if (t113 != 18446744073709550720LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x6050 = INT32_MIN;
	uint16_t x6051 = UINT16_MAX;
	uint32_t x6052 = 1U;
	volatile int64_t t114 = 2LL;

    t114 = (((x6049-x6050)-x6051)<<x6052);

    if (t114 != 4294834498LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x6109 = UINT8_MAX;
	int32_t x6110 = -2;
	uint64_t x6111 = 9550319869926LLU;
	static int32_t x6112 = 3;
	static volatile uint64_t t115 = 100895478LLU;

    t115 = (((x6109-x6110)-x6111)<<x6112);

    if (t115 != 18446667671150594264LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x6134 = -19129644594LL;
	int16_t x6135 = -1;
	uint8_t x6136 = 2U;

    t116 = (((x6133-x6134)-x6135)<<x6136);

    if (t116 != 76518578380LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x6149 = UINT16_MAX;
	uint8_t x6150 = 2U;
	int16_t x6151 = -252;
	static uint8_t x6152 = 1U;
	static volatile int32_t t117 = 890215680;

    t117 = (((x6149-x6150)-x6151)<<x6152);

    if (t117 != 131570) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x6297 = 12U;
	int32_t x6298 = -73504283;
	static volatile int8_t x6299 = -3;
	uint8_t x6300 = 4U;

    t118 = (((x6297-x6298)-x6299)<<x6300);

    if (t118 != 1176068768) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x6382 = INT8_MIN;
	int32_t x6383 = 375986;
	int32_t x6384 = 29;
	uint64_t t119 = 7836LLU;

    t119 = (((x6381-x6382)-x6383)<<x6384);

    if (t119 != 18446542285945438208LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x6393 = -854015916;
	volatile int32_t x6394 = INT32_MIN;
	uint32_t x6395 = 4740U;
	volatile uint8_t x6396 = 6U;

    t120 = (((x6393-x6394)-x6395)<<x6396);

    if (t120 != 1177252864U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x6417 = -1;
	uint64_t x6418 = 323LLU;
	volatile int16_t x6419 = INT16_MAX;
	volatile uint64_t t121 = 4748LLU;

    t121 = (((x6417-x6418)-x6419)<<x6420);

    if (t121 != 18446744073709518525LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x6461 = -1;
	int32_t x6462 = 2;
	uint32_t x6463 = UINT32_MAX;
	uint32_t x6464 = 15U;

    t122 = (((x6461-x6462)-x6463)<<x6464);

    if (t122 != 4294901760U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x6553 = UINT16_MAX;
	uint64_t x6555 = 32008LLU;
	int8_t x6556 = 18;
	uint64_t t123 = 69164611879390410LLU;

    t123 = (((x6553-x6554)-x6555)<<x6556);

    if (t123 != 8789164032LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x6566 = INT8_MIN;
	volatile int8_t x6567 = INT8_MIN;
	int32_t t124 = 80047502;

    t124 = (((x6565-x6566)-x6567)<<x6568);

    if (t124 != 2044) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x6605 = INT8_MIN;
	static int16_t x6606 = INT16_MAX;
	uint32_t x6607 = UINT32_MAX;
	uint8_t x6608 = 1U;

    t125 = (((x6605-x6606)-x6607)<<x6608);

    if (t125 != 4294901508U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x6623 = INT8_MIN;
	volatile int16_t x6624 = 1;
	uint64_t t126 = 2195562262594908LLU;

    t126 = (((x6621-x6622)-x6623)<<x6624);

    if (t126 != 8011087683081698922LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x6653 = 2623375849039388LL;
	volatile int16_t x6654 = -6;
	int32_t x6655 = 0;
	uint64_t x6656 = 2LLU;
	static int64_t t127 = -14667394965267LL;

    t127 = (((x6653-x6654)-x6655)<<x6656);

    if (t127 != 10493503396157576LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x6661 = 0U;
	uint16_t x6663 = 84U;

    t128 = (((x6661-x6662)-x6663)<<x6664);

    if (t128 != 18446744073709540992LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x6694 = UINT16_MAX;
	uint32_t x6695 = UINT32_MAX;
	volatile int8_t x6696 = 15;

    t129 = (((x6693-x6694)-x6695)<<x6696);

    if (t129 != 2143354880U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x6881 = 3646711279LLU;
	int8_t x6882 = -11;
	uint16_t x6883 = 3827U;
	static int32_t x6884 = 0;

    t130 = (((x6881-x6882)-x6883)<<x6884);

    if (t130 != 3646707463LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x6929 = 30017205752908LLU;
	volatile int64_t x6930 = 52939370764915899LL;
	int64_t x6931 = -1LL;
	int64_t x6932 = 12LL;

    t131 = (((x6929-x6930)-x6931)<<x6932);

    if (t131 != 4644216706183012352LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x6945 = UINT32_MAX;
	volatile int16_t x6946 = INT16_MIN;
	volatile int8_t x6947 = INT8_MIN;
	int16_t x6948 = 1;
	static volatile uint32_t t132 = 4458565U;

    t132 = (((x6945-x6946)-x6947)<<x6948);

    if (t132 != 65790U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x6965 = INT16_MIN;
	int16_t x6966 = INT16_MAX;
	uint32_t x6967 = 71863U;
	uint16_t x6968 = 1U;
	volatile uint32_t t133 = 24U;

    t133 = (((x6965-x6966)-x6967)<<x6968);

    if (t133 != 4294692500U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x6985 = INT16_MAX;
	uint32_t x6987 = 260176664U;
	uint8_t x6988 = 1U;
	static volatile uint32_t t134 = 10U;

    t134 = (((x6985-x6986)-x6987)<<x6988);

    if (t134 != 3774679380U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x7017 = INT8_MIN;
	uint32_t x7018 = UINT32_MAX;
	static int8_t x7019 = 54;
	static volatile uint32_t t135 = 85379U;

    t135 = (((x7017-x7018)-x7019)<<x7020);

    if (t135 != 4294964400U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x7113 = 12U;
	uint64_t x7114 = UINT64_MAX;
	int64_t x7115 = INT64_MAX;
	uint8_t x7116 = 32U;
	volatile uint64_t t136 = 560098231340LLU;

    t136 = (((x7113-x7114)-x7115)<<x7116);

    if (t136 != 60129542144LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x7153 = 54087;
	int64_t x7154 = -1LL;
	volatile int64_t t137 = -581597LL;

    t137 = (((x7153-x7154)-x7155)<<x7156);

    if (t137 != 3630253998080LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x7229 = INT32_MIN;
	uint64_t x7230 = UINT64_MAX;
	int32_t x7231 = -1;
	uint32_t x7232 = 0U;
	static uint64_t t138 = 2033406083138496374LLU;

    t138 = (((x7229-x7230)-x7231)<<x7232);

    if (t138 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x7257 = 978U;
	uint32_t x7258 = 0U;
	uint8_t x7259 = 1U;
	int32_t x7260 = 25;

    t139 = (((x7257-x7258)-x7259)<<x7260);

    if (t139 != 2717908992U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x7265 = 198210389U;
	uint64_t x7266 = 3518447005888299LLU;
	int16_t x7267 = INT16_MIN;
	volatile uint8_t x7268 = 6U;
	volatile uint64_t t140 = 8648LLU;

    t140 = (((x7265-x7266)-x7267)<<x7268);

    if (t140 != 18221563478020262528LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x7285 = -3;
	static volatile uint8_t x7287 = 12U;
	static int8_t x7288 = 21;
	uint32_t t141 = 122U;

    t141 = (((x7285-x7286)-x7287)<<x7288);

    if (t141 != 4265607168U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x7315 = -1;
	static volatile uint8_t x7316 = 1U;
	volatile int32_t t142 = 1;

    t142 = (((x7313-x7314)-x7315)<<x7316);

    if (t142 != 182) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x7333 = UINT64_MAX;
	int32_t x7334 = INT32_MIN;
	int64_t x7335 = INT64_MIN;
	volatile uint64_t t143 = 9LLU;

    t143 = (((x7333-x7334)-x7335)<<x7336);

    if (t143 != 4294967294LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x7337 = INT64_MIN;
	int8_t x7338 = -1;
	uint8_t x7340 = 0U;
	static volatile uint64_t t144 = 2150791282LLU;

    t144 = (((x7337-x7338)-x7339)<<x7340);

    if (t144 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x7381 = UINT8_MAX;
	uint64_t x7382 = 13339089LLU;
	volatile uint8_t x7383 = 25U;
	volatile uint64_t t145 = 1022823121090458LLU;

    t145 = (((x7381-x7382)-x7383)<<x7384);

    if (t145 != 18446744073682873898LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x7388 = 14U;
	uint32_t t146 = 167231873U;

    t146 = (((x7385-x7386)-x7387)<<x7388);

    if (t146 != 524288U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x7481 = INT32_MIN;
	int32_t x7483 = INT32_MIN;

    t147 = (((x7481-x7482)-x7483)<<x7484);

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x7673 = 60U;
	static int8_t x7674 = -2;
	volatile int32_t x7675 = -1;
	volatile int32_t x7676 = 1;
	int32_t t148 = -473;

    t148 = (((x7673-x7674)-x7675)<<x7676);

    if (t148 != 126) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x7677 = 15U;
	volatile uint64_t x7678 = UINT64_MAX;

    t149 = (((x7677-x7678)-x7679)<<x7680);

    if (t149 != 340LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x7773 = -35;
	static uint64_t x7774 = 27049759830LLU;
	static int16_t x7775 = INT16_MIN;
	static int8_t x7776 = 30;
	uint64_t t150 = 630107LLU;

    t150 = (((x7773-x7774)-x7775)<<x7776);

    if (t150 != 7849064835584098304LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x7801 = 15U;
	static uint64_t x7802 = UINT64_MAX;
	volatile int32_t x7803 = 37833530;
	static uint64_t t151 = 167964247965411LLU;

    t151 = (((x7801-x7802)-x7803)<<x7804);

    if (t151 != 18446744073671718102LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x7825 = -1;
	int16_t x7826 = -1;
	uint64_t x7827 = 2918688870LLU;
	static volatile int8_t x7828 = 4;
	static volatile uint64_t t152 = 22219801669269446LLU;

    t152 = (((x7825-x7826)-x7827)<<x7828);

    if (t152 != 18446744027010529696LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x7897 = 0U;
	uint32_t x7898 = 892313U;
	static uint32_t x7899 = UINT32_MAX;
	static uint8_t x7900 = 0U;
	uint32_t t153 = 1304986U;

    t153 = (((x7897-x7898)-x7899)<<x7900);

    if (t153 != 4294074984U) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x7913 = 1232349LLU;
	int16_t x7914 = 19;
	int8_t x7915 = INT8_MIN;
	uint8_t x7916 = 1U;
	uint64_t t154 = 9559913673226445LLU;

    t154 = (((x7913-x7914)-x7915)<<x7916);

    if (t154 != 2464916LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x7953 = INT16_MIN;
	static int32_t x7954 = INT32_MIN;
	volatile uint32_t x7955 = 1497695161U;
	uint8_t x7956 = 2U;

    t155 = (((x7953-x7954)-x7955)<<x7956);

    if (t155 != 2599022876U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x7973 = 2239485844661933525LLU;
	uint32_t x7974 = 53U;
	volatile uint64_t x7975 = 3787LLU;
	volatile uint64_t x7976 = 0LLU;
	uint64_t t156 = 760817339028LLU;

    t156 = (((x7973-x7974)-x7975)<<x7976);

    if (t156 != 2239485844661929685LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x8007 = -1;
	int32_t x8008 = 6;
	int32_t t157 = -24359;

    t157 = (((x8005-x8006)-x8007)<<x8008);

    if (t157 != 1280) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x8078 = UINT64_MAX;
	int16_t x8079 = INT16_MIN;
	volatile uint64_t x8080 = 12LLU;
	static uint64_t t158 = 75409425633LLU;

    t158 = (((x8077-x8078)-x8079)<<x8080);

    if (t158 != 18446744073463701504LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x8301 = -1;
	uint64_t x8303 = UINT64_MAX;
	uint64_t x8304 = 2LLU;
	volatile uint64_t t159 = 131778LLU;

    t159 = (((x8301-x8302)-x8303)<<x8304);

    if (t159 != 246750476LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x8349 = UINT32_MAX;
	uint8_t x8350 = 3U;
	int8_t x8351 = INT8_MIN;
	static int16_t x8352 = 2;
	static volatile uint32_t t160 = 873043167U;

    t160 = (((x8349-x8350)-x8351)<<x8352);

    if (t160 != 496U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x8393 = 214377143;
	uint64_t x8394 = 5468372LLU;
	volatile uint32_t x8396 = 6U;
	volatile uint64_t t161 = 452LLU;

    t161 = (((x8393-x8394)-x8395)<<x8396);

    if (t161 != 13151122624LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x8449 = -61;
	static int16_t x8450 = INT16_MIN;
	uint64_t x8451 = 13530LLU;
	uint8_t x8452 = 0U;
	uint64_t t162 = 58559253428213242LLU;

    t162 = (((x8449-x8450)-x8451)<<x8452);

    if (t162 != 19177LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x8506 = 8658933933821692778LLU;
	int32_t x8508 = 0;
	static volatile uint64_t t163 = 229517062572275LLU;

    t163 = (((x8505-x8506)-x8507)<<x8508);

    if (t163 != 564438103033081452LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x8725 = INT8_MAX;
	static uint32_t x8726 = 1836256733U;
	volatile int8_t x8728 = 11;
	static volatile int64_t t164 = -65355015LL;

    t164 = (((x8725-x8726)-x8727)<<x8728);

    if (t164 != 5035439491072LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x8797 = 2U;
	int8_t x8798 = -1;
	volatile int64_t x8799 = -152046283LL;
	volatile uint8_t x8800 = 20U;
	volatile int64_t t165 = -1007614802023LL;

    t165 = (((x8797-x8798)-x8799)<<x8800);

    if (t165 != 159432086388736LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x8841 = 6390U;
	static int64_t x8842 = -287209647385694LL;
	uint64_t x8843 = 3560688969LLU;
	uint64_t t166 = 29288768366LLU;

    t166 = (((x8841-x8842)-x8843)<<x8844);

    if (t166 != 1502376097863172096LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x8913 = 19608U;
	uint32_t x8914 = 32124827U;
	int32_t x8915 = INT32_MAX;
	uint8_t x8916 = 28U;
	uint32_t t167 = 17274117U;

    t167 = (((x8913-x8914)-x8915)<<x8916);

    if (t167 != 3758096384U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x8989 = 1168267471U;
	int8_t x8990 = -3;
	volatile uint16_t x8991 = 119U;
	volatile uint8_t x8992 = 1U;
	volatile uint32_t t168 = 694088U;

    t168 = (((x8989-x8990)-x8991)<<x8992);

    if (t168 != 2336534710U) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint32_t x9037 = 333U;
	static uint32_t x9038 = 1U;
	int32_t x9039 = 219730009;
	uint32_t t169 = 21U;

    t169 = (((x9037-x9038)-x9039)<<x9040);

    if (t169 != 779292464U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x9061 = 115152U;
	static uint32_t x9062 = UINT32_MAX;
	int16_t x9063 = -220;
	uint32_t x9064 = 10U;
	volatile uint32_t t170 = 31745U;

    t170 = (((x9061-x9062)-x9063)<<x9064);

    if (t170 != 118141952U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x9133 = -1;
	volatile int32_t x9134 = -67;
	volatile int8_t x9135 = -1;

    t171 = (((x9133-x9134)-x9135)<<x9136);

    if (t171 != 137216) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x9177 = INT16_MAX;
	static int16_t x9178 = INT16_MAX;
	volatile uint64_t x9179 = UINT64_MAX;
	int8_t x9180 = 1;
	static volatile uint64_t t172 = 15111LLU;

    t172 = (((x9177-x9178)-x9179)<<x9180);

    if (t172 != 2LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x9273 = UINT32_MAX;
	volatile uint64_t x9274 = UINT64_MAX;
	volatile uint8_t x9275 = 102U;
	static volatile uint8_t x9276 = 0U;

    t173 = (((x9273-x9274)-x9275)<<x9276);

    if (t173 != 4294967194LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x9313 = UINT64_MAX;
	static uint8_t x9314 = 28U;
	int16_t x9315 = -1;
	uint8_t x9316 = 10U;
	volatile uint64_t t174 = 18943LLU;

    t174 = (((x9313-x9314)-x9315)<<x9316);

    if (t174 != 18446744073709522944LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x9409 = INT8_MIN;
	uint64_t x9410 = 127LLU;
	uint16_t x9411 = UINT16_MAX;
	int32_t x9412 = 1;
	volatile uint64_t t175 = 252115409615614943LLU;

    t175 = (((x9409-x9410)-x9411)<<x9412);

    if (t175 != 18446744073709420036LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x9422 = -1;
	static int32_t x9423 = -1;
	uint8_t x9424 = 0U;

    t176 = (((x9421-x9422)-x9423)<<x9424);

    if (t176 != 75) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x9473 = -1;
	int8_t x9474 = INT8_MIN;
	uint8_t x9475 = 16U;
	uint8_t x9476 = 0U;
	int32_t t177 = 4019;

    t177 = (((x9473-x9474)-x9475)<<x9476);

    if (t177 != 111) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x9629 = INT32_MIN;
	static int32_t x9630 = -6;
	volatile uint32_t x9631 = UINT32_MAX;
	static int16_t x9632 = 0;
	uint32_t t178 = 4U;

    t178 = (((x9629-x9630)-x9631)<<x9632);

    if (t178 != 2147483655U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x9645 = INT32_MIN;
	uint64_t x9646 = UINT64_MAX;
	uint64_t x9647 = 5488718711LLU;
	static int16_t x9648 = 4;
	uint64_t t179 = 4193106396678000181LLU;

    t179 = (((x9645-x9646)-x9647)<<x9648);

    if (t179 != 18446743951530313888LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x9665 = INT8_MAX;
	static int64_t x9667 = -1LL;
	int8_t x9668 = 0;
	int64_t t180 = 1837626316LL;

    t180 = (((x9665-x9666)-x9667)<<x9668);

    if (t180 != 129LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x9757 = -1;
	uint32_t x9759 = 962547924U;
	volatile uint32_t t181 = 56212U;

    t181 = (((x9757-x9758)-x9759)<<x9760);

    if (t181 != 1113478656U) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x9797 = -1;
	volatile int32_t x9798 = INT32_MAX;
	uint32_t x9799 = 870U;
	volatile int8_t x9800 = 0;
	volatile uint32_t t182 = 1U;

    t182 = (((x9797-x9798)-x9799)<<x9800);

    if (t182 != 2147482778U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x9869 = -1LL;
	uint32_t x9870 = UINT32_MAX;
	volatile uint64_t x9871 = UINT64_MAX;
	uint16_t x9872 = 28U;
	volatile uint64_t t183 = 351632LLU;

    t183 = (((x9869-x9870)-x9871)<<x9872);

    if (t183 != 17293822569371140096LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x9949 = 3730;
	volatile int16_t x9950 = INT16_MIN;
	uint32_t x9951 = 222U;
	volatile uint32_t t184 = 526U;

    t184 = (((x9949-x9950)-x9951)<<x9952);

    if (t184 != 36276U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x9977 = -1;
	int64_t x9978 = 19358943LL;
	int32_t x9979 = INT32_MIN;
	int64_t t185 = 129757480LL;

    t185 = (((x9977-x9978)-x9979)<<x9980);

    if (t185 != 4256249408LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x10045 = -5940;
	uint64_t x10047 = UINT64_MAX;
	static uint16_t x10048 = 14U;
	volatile uint64_t t186 = 842861147987LLU;

    t186 = (((x10045-x10046)-x10047)<<x10048);

    if (t186 != 18446744073612197888LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x10054 = INT16_MAX;
	uint64_t x10055 = 14898506497493LLU;
	static uint16_t x10056 = 33U;
	uint64_t t187 = 6375LLU;

    t187 = (((x10053-x10054)-x10055)<<x10056);

    if (t187 != 6314051444987133952LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x10130 = 6U;
	static uint8_t x10131 = 2U;
	uint8_t x10132 = 3U;
	volatile int32_t t188 = 16167460;

    t188 = (((x10129-x10130)-x10131)<<x10132);

    if (t188 != 5728) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x10177 = 14027U;
	uint32_t x10178 = 1788948773U;
	uint32_t x10179 = 943764863U;
	int8_t x10180 = 1;
	volatile uint32_t t189 = 15U;

    t189 = (((x10177-x10178)-x10179)<<x10180);

    if (t189 != 3124535374U) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x10221 = 108U;
	volatile uint32_t x10223 = UINT32_MAX;
	int16_t x10224 = 0;
	static volatile uint32_t t190 = 2601272U;

    t190 = (((x10221-x10222)-x10223)<<x10224);

    if (t190 != 110U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x10249 = UINT16_MAX;
	static int16_t x10250 = INT16_MIN;
	uint16_t x10251 = UINT16_MAX;
	static int8_t x10252 = 14;

    t191 = (((x10249-x10250)-x10251)<<x10252);

    if (t191 != 536870912) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int64_t x10385 = 436408395044748555LL;
	static volatile int16_t x10386 = 97;
	int16_t x10387 = -54;
	static int8_t x10388 = 0;
	volatile int64_t t192 = -766225541797266LL;

    t192 = (((x10385-x10386)-x10387)<<x10388);

    if (t192 != 436408395044748512LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x10425 = -1LL;
	int32_t x10426 = INT32_MIN;
	int32_t x10428 = 17;

    t193 = (((x10425-x10426)-x10427)<<x10428);

    if (t193 != 281479271546880LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x10455 = -50179;
	static volatile int8_t x10456 = 10;

    t194 = (((x10453-x10454)-x10455)<<x10456);

    if (t194 != 51383296) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x10506 = -1LL;
	int8_t x10507 = INT8_MIN;
	int8_t x10508 = 16;
	volatile int64_t t195 = 273712908LL;

    t195 = (((x10505-x10506)-x10507)<<x10508);

    if (t195 != 2217171288064LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x10601 = 10U;
	int8_t x10602 = INT8_MIN;
	int16_t x10603 = 23;
	uint8_t x10604 = 7U;
	static int32_t t196 = -1765024;

    t196 = (((x10601-x10602)-x10603)<<x10604);

    if (t196 != 14720) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x10685 = 82U;
	int16_t x10686 = -2;
	uint32_t x10687 = UINT32_MAX;
	volatile int8_t x10688 = 0;
	uint32_t t197 = 13239U;

    t197 = (((x10685-x10686)-x10687)<<x10688);

    if (t197 != 85U) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x10693 = UINT64_MAX;
	volatile uint32_t x10694 = 197824096U;
	static uint16_t x10696 = 1U;
	static volatile uint64_t t198 = 62209LLU;

    t198 = (((x10693-x10694)-x10695)<<x10696);

    if (t198 != 18446744073313903424LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x10717 = -1;
	uint16_t x10719 = 13U;
	uint8_t x10720 = 2U;
	static volatile uint64_t t199 = 18817759196431LLU;

    t199 = (((x10717-x10718)-x10719)<<x10720);

    if (t199 != 18446743477213254732LLU) { NG(); } else { ; }
	
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

