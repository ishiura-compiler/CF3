
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

static int32_t x25 = -13294496;
int64_t x79 = -11893LL;
static volatile int8_t x98 = INT8_MIN;
int16_t x350 = 2526;
volatile uint64_t x546 = UINT64_MAX;
uint16_t x621 = UINT16_MAX;
static volatile uint64_t x635 = 5636420677263769177LLU;
volatile int64_t x657 = -1LL;
static volatile int32_t x659 = 1;
int32_t x664 = 6;
int32_t x738 = -1;
int16_t x800 = 30;
int16_t x865 = 776;
uint64_t t23 = 44862310LLU;
static volatile int8_t x1133 = 1;
int16_t x1135 = 102;
volatile int32_t t28 = -17725129;
static int32_t t29 = 180;
static uint16_t x1353 = 7U;
int32_t x1370 = 5;
int32_t x1371 = -1;
static uint8_t x1372 = 1U;
uint64_t x1593 = UINT64_MAX;
int32_t x1621 = 3;
uint64_t x1623 = 7540625LLU;
static volatile int32_t x1682 = 3314913;
int32_t x1683 = -1;
static int32_t t41 = -4130828;
uint32_t x1730 = 268338031U;
uint8_t x1880 = 55U;
volatile int8_t x1922 = INT8_MIN;
volatile uint8_t x1924 = 11U;
volatile int8_t x1985 = 1;
uint8_t x1988 = 7U;
volatile int16_t x1997 = 699;
static int32_t x1999 = INT32_MIN;
uint8_t x2080 = 8U;
int32_t t51 = -7;
volatile int8_t x2141 = INT8_MAX;
uint64_t t52 = 322795243107LLU;
uint64_t x2147 = 3151097LLU;
volatile uint8_t x2168 = 59U;
uint32_t x2202 = 179U;
volatile int8_t x2232 = 0;
uint32_t x2294 = UINT32_MAX;
volatile uint8_t x2316 = 5U;
uint8_t x2346 = 1U;
int32_t x2491 = INT32_MIN;
int32_t x2521 = 163873691;
uint8_t x2534 = 34U;
uint8_t x2535 = 3U;
static volatile int8_t x2574 = INT8_MAX;
uint32_t x2659 = UINT32_MAX;
int32_t x2664 = 0;
int64_t t76 = -15351LL;
volatile int32_t x2733 = 1;
volatile int32_t x2734 = -1;
uint16_t x2753 = UINT16_MAX;
volatile uint32_t t79 = 805618452U;
volatile uint64_t x2869 = 157264720LLU;
int8_t x2870 = 4;
uint32_t x3102 = 5220U;
static volatile int32_t x3103 = -8718;
int16_t x3129 = -1;
uint16_t x3131 = UINT16_MAX;
int16_t x3132 = 16;
int64_t x3213 = -1LL;
uint32_t x3214 = UINT32_MAX;
int32_t x3267 = INT32_MIN;
uint64_t t92 = 28744919658093566LLU;
uint16_t x3446 = UINT16_MAX;
static int8_t x3533 = INT8_MAX;
static uint8_t x3536 = 1U;
uint32_t x3599 = 60080332U;
volatile int64_t x3737 = INT64_MAX;
uint16_t x3833 = 784U;
uint8_t x3836 = 4U;
int32_t t104 = -159007018;
volatile uint16_t x3908 = 0U;
int64_t t106 = -1170409193858LL;
volatile int64_t t108 = 17425046898495887LL;
volatile uint64_t t109 = 72171790895191LLU;
int16_t x3981 = INT16_MIN;
static int32_t t111 = 108686;
static int16_t x4121 = INT16_MIN;
int8_t x4124 = 4;
int64_t x4218 = 1719259910LL;
static uint32_t x4228 = 4U;
uint32_t x4279 = 1U;
uint64_t t120 = 7768LLU;
int8_t x4529 = INT8_MIN;
static uint16_t x4530 = 15821U;
volatile uint32_t x4581 = 782U;
static int32_t x4593 = -4674;
static int32_t x4594 = INT32_MIN;
static uint64_t x4595 = 6035LLU;
uint32_t x4645 = 57332236U;
static uint16_t x4646 = 2234U;
volatile uint32_t t124 = 331605U;
uint8_t x4657 = 5U;
int16_t x4677 = -1;
volatile uint64_t x4703 = 1010LLU;
int16_t x4717 = INT16_MAX;
int16_t x4719 = INT16_MIN;
int64_t t130 = 35567932044LL;
uint32_t t131 = 55U;
static uint8_t x4995 = 4U;
int16_t x4996 = 28;
int8_t x5022 = -3;
int32_t x5023 = -45;
volatile int32_t t135 = 3651985;
static int8_t x5051 = INT8_MIN;
int32_t x5052 = 0;
uint32_t t136 = 31545U;
static int8_t x5067 = INT8_MAX;
uint64_t t139 = 1167618158383111LLU;
static int8_t x5405 = 1;
int32_t t141 = -1;
int16_t x5524 = 20;
static int64_t t144 = 1844796156LL;
int64_t t145 = 2177081418034676LL;
static volatile int8_t x5653 = 1;
volatile int64_t x5659 = -404470357819LL;
uint16_t x5660 = 0U;
int8_t x5682 = -1;
static uint32_t x5734 = 49004933U;
uint32_t x5735 = 432U;
volatile int32_t x5739 = -1;
uint64_t x5741 = 113630LLU;
static int64_t t153 = -4026269356739753LL;
uint32_t x5917 = UINT32_MAX;
volatile uint32_t t154 = 829U;
int8_t x6049 = INT8_MAX;
int8_t x6051 = INT8_MIN;
int8_t x6118 = INT8_MAX;
uint32_t x6119 = 1901821379U;
static uint32_t x6120 = 1U;
uint64_t x6169 = UINT64_MAX;
int32_t x6170 = INT32_MIN;
int16_t x6171 = INT16_MIN;
uint16_t x6200 = 9U;
static int8_t x6239 = 1;
volatile int32_t t161 = 13;
static uint8_t x6511 = UINT8_MAX;
int32_t x6512 = 17;
int32_t x6520 = 10;
int16_t x6598 = -1;
int64_t x6599 = -7107452044LL;
static uint8_t x6637 = 7U;
int8_t x6652 = 28;
int32_t t170 = 15438288;
int32_t x6744 = 3;
uint8_t x6779 = UINT8_MAX;
uint64_t t174 = 4319553LLU;
uint8_t x6796 = 23U;
int16_t x6899 = 2757;
volatile int64_t t180 = -32208834128235LL;
uint64_t x7017 = 1100529LLU;
uint8_t x7024 = 3U;
uint16_t x7047 = 13722U;
uint64_t t183 = UINT64_MAX;
static volatile int8_t x7059 = INT8_MIN;
uint32_t x7061 = 5U;
uint64_t x7062 = 212LLU;
int32_t x7263 = INT32_MAX;
volatile int8_t x7343 = -7;
volatile int8_t x7356 = 1;
static volatile uint64_t x7405 = 7501412LLU;
int8_t x7483 = -1;
volatile int64_t x7529 = 1077542883880LL;
uint16_t x7532 = 0U;
static int8_t x7571 = -1;
int32_t t196 = 763044;
static int16_t x7661 = -14;


void f0(void) {
    	int16_t x26 = INT16_MIN;
	uint32_t x27 = UINT32_MAX;
	static int32_t x28 = 1;
	volatile uint32_t t0 = 349572679U;

    t0 = ((x25-(x26/x27))>>x28);

    if (t0 != 2140836400U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x61 = 15763;
	static uint32_t x62 = UINT32_MAX;
	int16_t x63 = -1;
	int8_t x64 = 0;
	volatile uint32_t t1 = 92235U;

    t1 = ((x61-(x62/x63))>>x64);

    if (t1 != 15762U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x77 = 8617488479288793LLU;
	int64_t x78 = INT64_MIN;
	volatile uint32_t x80 = 0U;
	uint64_t t2 = 921241130LLU;

    t2 = ((x77-(x78/x79))>>x80);

    if (t2 != 7841959005072467LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x97 = UINT32_MAX;
	uint64_t x99 = UINT64_MAX;
	uint64_t x100 = 10LLU;
	uint64_t t3 = 748064369117498LLU;

    t3 = ((x97-(x98/x99))>>x100);

    if (t3 != 4194303LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x261 = 274;
	int16_t x262 = 42;
	int64_t x263 = -1LL;
	uint8_t x264 = 1U;
	int64_t t4 = 3797LL;

    t4 = ((x261-(x262/x263))>>x264);

    if (t4 != 158LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x265 = 13LL;
	int32_t x266 = -33;
	uint8_t x267 = 55U;
	uint16_t x268 = 28U;
	static volatile int64_t t5 = -8176329655LL;

    t5 = ((x265-(x266/x267))>>x268);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x285 = -1;
	uint16_t x286 = UINT16_MAX;
	volatile int8_t x287 = INT8_MIN;
	int32_t x288 = 2;
	volatile int32_t t6 = 130103;

    t6 = ((x285-(x286/x287))>>x288);

    if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x293 = -1LL;
	static volatile int64_t x294 = -3597330720403204LL;
	uint16_t x295 = 1U;
	volatile int32_t x296 = 6;
	volatile int64_t t7 = 66463679961570130LL;

    t7 = ((x293-(x294/x295))>>x296);

    if (t7 != 56208292506300LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x345 = UINT64_MAX;
	int64_t x346 = 89LL;
	int16_t x347 = INT16_MIN;
	uint16_t x348 = 5U;
	uint64_t t8 = 248631203975665103LLU;

    t8 = ((x345-(x346/x347))>>x348);

    if (t8 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x349 = INT16_MIN;
	volatile uint32_t x351 = 1332071862U;
	volatile uint8_t x352 = 1U;
	uint32_t t9 = 3504U;

    t9 = ((x349-(x350/x351))>>x352);

    if (t9 != 2147467264U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x413 = UINT8_MAX;
	uint16_t x414 = 21U;
	int32_t x415 = INT32_MIN;
	int8_t x416 = 1;
	volatile int32_t t10 = 1036858094;

    t10 = ((x413-(x414/x415))>>x416);

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x545 = INT16_MAX;
	uint32_t x547 = 901064U;
	volatile uint8_t x548 = 23U;
	volatile uint64_t t11 = 77808LLU;

    t11 = ((x545-(x546/x547))>>x548);

    if (t11 != 2199020815078LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x581 = 34U;
	volatile int16_t x582 = INT16_MIN;
	uint8_t x583 = 7U;
	static uint32_t x584 = 28U;
	int32_t t12 = 0;

    t12 = ((x581-(x582/x583))>>x584);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x622 = INT64_MIN;
	int32_t x623 = 94;
	uint32_t x624 = 9U;
	int64_t t13 = -197386804178LL;

    t13 = ((x621-(x622/x623))>>x624);

    if (t13 != 191642537335042LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x633 = INT64_MAX;
	static int32_t x634 = -1;
	uint32_t x636 = 4U;
	volatile uint64_t t14 = 230368891815805LLU;

    t14 = ((x633-(x634/x635))>>x636);

    if (t14 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x658 = -3;
	uint32_t x660 = 15U;
	int64_t t15 = -72477318741LL;

    t15 = ((x657-(x658/x659))>>x660);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x661 = 214948U;
	uint64_t x662 = 3101LLU;
	uint8_t x663 = UINT8_MAX;
	static uint64_t t16 = 134LLU;

    t16 = ((x661-(x662/x663))>>x664);

    if (t16 != 3358LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x673 = UINT16_MAX;
	int32_t x674 = 6268693;
	int32_t x675 = INT32_MIN;
	uint16_t x676 = 7U;
	int32_t t17 = 521972894;

    t17 = ((x673-(x674/x675))>>x676);

    if (t17 != 511) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x705 = 1U;
	int64_t x706 = INT64_MIN;
	int16_t x707 = 334;
	volatile int8_t x708 = 7;
	volatile int64_t t18 = -24046LL;

    t18 = ((x705-(x706/x707))>>x708);

    if (t18 != 215741299514754LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x729 = 184;
	int64_t x730 = 3964192LL;
	int16_t x731 = INT16_MAX;
	int8_t x732 = 1;
	static volatile int64_t t19 = -190283841284LL;

    t19 = ((x729-(x730/x731))>>x732);

    if (t19 != 32LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x737 = 7240U;
	int32_t x739 = INT32_MIN;
	static uint32_t x740 = 0U;
	static volatile int32_t t20 = 0;

    t20 = ((x737-(x738/x739))>>x740);

    if (t20 != 7240) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x797 = 283LLU;
	int8_t x798 = -1;
	static int16_t x799 = -5;
	volatile uint64_t t21 = 25145355LLU;

    t21 = ((x797-(x798/x799))>>x800);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x866 = INT8_MAX;
	uint8_t x867 = 2U;
	uint8_t x868 = 9U;
	int32_t t22 = -217;

    t22 = ((x865-(x866/x867))>>x868);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x873 = 1;
	uint64_t x874 = 93107LLU;
	int32_t x875 = -1;
	static int8_t x876 = 41;

    t23 = ((x873-(x874/x875))>>x876);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x941 = UINT16_MAX;
	static uint16_t x942 = 31U;
	int64_t x943 = INT64_MAX;
	uint8_t x944 = 6U;
	static volatile int64_t t24 = -1LL;

    t24 = ((x941-(x942/x943))>>x944);

    if (t24 != 1023LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x949 = UINT8_MAX;
	uint8_t x950 = 26U;
	static int32_t x951 = INT32_MIN;
	uint16_t x952 = 0U;
	int32_t t25 = 10;

    t25 = ((x949-(x950/x951))>>x952);

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x973 = 296937916LL;
	int8_t x974 = INT8_MAX;
	int32_t x975 = -3;
	static int8_t x976 = 24;
	int64_t t26 = -3542LL;

    t26 = ((x973-(x974/x975))>>x976);

    if (t26 != 17LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1077 = INT64_MAX;
	static int64_t x1078 = INT64_MIN;
	int64_t x1079 = INT64_MIN;
	uint8_t x1080 = 17U;
	volatile int64_t t27 = 43063358656331LL;

    t27 = ((x1077-(x1078/x1079))>>x1080);

    if (t27 != 70368744177663LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1134 = -1;
	static uint16_t x1136 = 5U;

    t28 = ((x1133-(x1134/x1135))>>x1136);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x1197 = INT16_MIN;
	static int32_t x1198 = 660400;
	int16_t x1199 = -1;
	static int32_t x1200 = 22;

    t29 = ((x1197-(x1198/x1199))>>x1200);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1201 = INT32_MAX;
	int32_t x1202 = 51784643;
	uint32_t x1203 = 2076U;
	uint16_t x1204 = 9U;
	static uint32_t t30 = 89U;

    t30 = ((x1201-(x1202/x1203))>>x1204);

    if (t30 != 4194255U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1337 = UINT16_MAX;
	int64_t x1338 = -1LL;
	int8_t x1339 = -1;
	static uint8_t x1340 = 1U;
	volatile int64_t t31 = 3395067913093462767LL;

    t31 = ((x1337-(x1338/x1339))>>x1340);

    if (t31 != 32767LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x1354 = INT8_MIN;
	static int32_t x1355 = INT32_MIN;
	uint8_t x1356 = 0U;
	volatile int32_t t32 = 199775;

    t32 = ((x1353-(x1354/x1355))>>x1356);

    if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1369 = 0LL;
	volatile int64_t t33 = -1LL;

    t33 = ((x1369-(x1370/x1371))>>x1372);

    if (t33 != 2LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x1381 = INT32_MAX;
	int8_t x1382 = INT8_MIN;
	int8_t x1383 = -1;
	volatile int64_t x1384 = 17LL;
	static int32_t t34 = -2;

    t34 = ((x1381-(x1382/x1383))>>x1384);

    if (t34 != 16383) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1465 = INT8_MIN;
	int8_t x1466 = -1;
	uint32_t x1467 = 27140128U;
	uint8_t x1468 = 17U;
	static volatile uint32_t t35 = 137618U;

    t35 = ((x1465-(x1466/x1467))>>x1468);

    if (t35 != 32767U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x1594 = 37;
	static int8_t x1595 = INT8_MIN;
	int8_t x1596 = 1;
	static volatile uint64_t t36 = 50728188419357099LLU;

    t36 = ((x1593-(x1594/x1595))>>x1596);

    if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x1601 = UINT8_MAX;
	int32_t x1602 = INT32_MAX;
	int64_t x1603 = INT64_MAX;
	uint8_t x1604 = 15U;
	int64_t t37 = 19849129328329LL;

    t37 = ((x1601-(x1602/x1603))>>x1604);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1622 = INT8_MIN;
	int32_t x1624 = 0;
	uint64_t t38 = 1286139339374061LLU;

    t38 = ((x1621-(x1622/x1623))>>x1624);

    if (t38 != 18446741627394548061LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x1653 = UINT64_MAX;
	static volatile int32_t x1654 = INT32_MIN;
	int32_t x1655 = INT32_MIN;
	int8_t x1656 = 1;
	volatile uint64_t t39 = 1780545926LLU;

    t39 = ((x1653-(x1654/x1655))>>x1656);

    if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1681 = INT8_MAX;
	uint8_t x1684 = 24U;
	volatile int32_t t40 = 32005713;

    t40 = ((x1681-(x1682/x1683))>>x1684);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x1689 = 6U;
	static volatile int16_t x1690 = INT16_MAX;
	int32_t x1691 = -1;
	static uint32_t x1692 = 4U;

    t41 = ((x1689-(x1690/x1691))>>x1692);

    if (t41 != 2048) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x1729 = UINT64_MAX;
	uint32_t x1731 = 132U;
	uint16_t x1732 = 6U;
	uint64_t t42 = 8211448LLU;

    t42 = ((x1729-(x1730/x1731))>>x1732);

    if (t42 != 288230376151679980LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x1785 = 0U;
	int8_t x1786 = INT8_MIN;
	int32_t x1787 = -219111526;
	int16_t x1788 = 5;
	volatile uint32_t t43 = 3001U;

    t43 = ((x1785-(x1786/x1787))>>x1788);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x1789 = INT32_MIN;
	volatile int8_t x1790 = -1;
	uint32_t x1791 = UINT32_MAX;
	uint16_t x1792 = 13U;
	volatile uint32_t t44 = 67975317U;

    t44 = ((x1789-(x1790/x1791))>>x1792);

    if (t44 != 262143U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x1877 = 1;
	uint64_t x1878 = 27LLU;
	volatile uint64_t x1879 = 173365LLU;
	static volatile uint64_t t45 = 909685166181LLU;

    t45 = ((x1877-(x1878/x1879))>>x1880);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x1921 = UINT64_MAX;
	int32_t x1923 = INT32_MIN;
	volatile uint64_t t46 = 34755097LLU;

    t46 = ((x1921-(x1922/x1923))>>x1924);

    if (t46 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x1953 = 8457;
	volatile int32_t x1954 = INT32_MIN;
	int64_t x1955 = INT64_MIN;
	int32_t x1956 = 1;
	volatile int64_t t47 = -990161617LL;

    t47 = ((x1953-(x1954/x1955))>>x1956);

    if (t47 != 4228LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x1986 = INT64_MIN;
	volatile uint16_t x1987 = UINT16_MAX;
	volatile int64_t t48 = 6777286979616LL;

    t48 = ((x1985-(x1986/x1987))>>x1988);

    if (t48 != 1099528405248LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x1998 = -13;
	static uint32_t x2000 = 14U;
	static volatile int32_t t49 = 78701428;

    t49 = ((x1997-(x1998/x1999))>>x2000);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x2045 = 2054892;
	volatile uint16_t x2046 = 673U;
	static int8_t x2047 = -1;
	static uint32_t x2048 = 0U;
	static volatile int32_t t50 = 59962;

    t50 = ((x2045-(x2046/x2047))>>x2048);

    if (t50 != 2055565) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x2077 = UINT16_MAX;
	uint8_t x2078 = 3U;
	static volatile int32_t x2079 = -19013;

    t51 = ((x2077-(x2078/x2079))>>x2080);

    if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x2142 = 30772207948285LLU;
	volatile int8_t x2143 = INT8_MIN;
	int8_t x2144 = 0;

    t52 = ((x2141-(x2142/x2143))>>x2144);

    if (t52 != 127LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x2145 = UINT8_MAX;
	int64_t x2146 = -3599645395573160LL;
	uint64_t x2148 = 0LLU;
	volatile uint64_t t53 = 3LLU;

    t53 = ((x2145-(x2146/x2147))>>x2148);

    if (t53 != 18446738220781372157LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x2149 = 246082U;
	int32_t x2150 = 185741852;
	int64_t x2151 = INT64_MIN;
	int8_t x2152 = 1;
	volatile int64_t t54 = 33805425937LL;

    t54 = ((x2149-(x2150/x2151))>>x2152);

    if (t54 != 123041LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x2165 = INT64_MAX;
	uint32_t x2166 = UINT32_MAX;
	uint16_t x2167 = 28U;
	static int64_t t55 = -543017523731879242LL;

    t55 = ((x2165-(x2166/x2167))>>x2168);

    if (t55 != 15LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x2173 = UINT32_MAX;
	uint64_t x2174 = UINT64_MAX;
	int64_t x2175 = -1LL;
	uint8_t x2176 = 39U;
	static volatile uint64_t t56 = 1343141733825115LLU;

    t56 = ((x2173-(x2174/x2175))>>x2176);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x2201 = 27U;
	int16_t x2203 = INT16_MIN;
	static uint32_t x2204 = 27U;
	volatile uint32_t t57 = 13885766U;

    t57 = ((x2201-(x2202/x2203))>>x2204);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x2205 = INT8_MAX;
	int32_t x2206 = INT32_MIN;
	static uint64_t x2207 = 11496002041815000LLU;
	volatile int16_t x2208 = 3;
	uint64_t t58 = 18977415LLU;

    t58 = ((x2205-(x2206/x2207))>>x2208);

    if (t58 != 2305843009213693767LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x2209 = 0LLU;
	volatile uint64_t x2210 = UINT64_MAX;
	static uint64_t x2211 = 20492964873382LLU;
	static uint8_t x2212 = 1U;
	volatile uint64_t t59 = 3477088982884659LLU;

    t59 = ((x2209-(x2210/x2211))>>x2212);

    if (t59 != 9223372036854325733LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x2229 = 737;
	static volatile int8_t x2230 = INT8_MIN;
	uint32_t x2231 = UINT32_MAX;
	static volatile uint32_t t60 = 1U;

    t60 = ((x2229-(x2230/x2231))>>x2232);

    if (t60 != 737U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x2293 = -1;
	int8_t x2295 = 1;
	volatile uint8_t x2296 = 31U;
	uint32_t t61 = 0U;

    t61 = ((x2293-(x2294/x2295))>>x2296);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x2313 = INT8_MAX;
	int32_t x2314 = INT32_MIN;
	static volatile uint32_t x2315 = 5U;
	volatile uint32_t t62 = 46565909U;

    t62 = ((x2313-(x2314/x2315))>>x2316);

    if (t62 != 120795959U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x2341 = -1;
	volatile uint64_t x2342 = 341922233432LLU;
	uint8_t x2343 = 37U;
	volatile uint16_t x2344 = 7U;
	volatile uint64_t t63 = 39603941LLU;

    t63 = ((x2341-(x2342/x2343))>>x2344);

    if (t63 != 144115188003659454LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x2345 = 1;
	int64_t x2347 = -1LL;
	static int8_t x2348 = 1;
	int64_t t64 = 27242LL;

    t64 = ((x2345-(x2346/x2347))>>x2348);

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x2397 = 12361;
	int64_t x2398 = INT64_MAX;
	int64_t x2399 = -8710170606871823LL;
	volatile int16_t x2400 = 1;
	int64_t t65 = -119461211329061LL;

    t65 = ((x2397-(x2398/x2399))>>x2400);

    if (t65 != 6709LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x2489 = INT64_MAX;
	int32_t x2490 = INT32_MAX;
	int32_t x2492 = 0;
	int64_t t66 = INT64_MAX;

    t66 = ((x2489-(x2490/x2491))>>x2492);

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x2493 = 28710105U;
	volatile int8_t x2494 = 1;
	volatile uint64_t x2495 = UINT64_MAX;
	uint16_t x2496 = 2U;
	volatile uint64_t t67 = 7038583526848137536LLU;

    t67 = ((x2493-(x2494/x2495))>>x2496);

    if (t67 != 7177526LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x2522 = INT16_MAX;
	uint64_t x2523 = UINT64_MAX;
	uint16_t x2524 = 3U;
	uint64_t t68 = 1308949LLU;

    t68 = ((x2521-(x2522/x2523))>>x2524);

    if (t68 != 20484211LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x2533 = 11U;
	uint16_t x2536 = 4U;
	int32_t t69 = -1;

    t69 = ((x2533-(x2534/x2535))>>x2536);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2537 = 0;
	int8_t x2538 = INT8_MIN;
	int64_t x2539 = INT64_MIN;
	uint8_t x2540 = 43U;
	volatile int64_t t70 = -5231124232980LL;

    t70 = ((x2537-(x2538/x2539))>>x2540);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x2573 = 5LLU;
	uint32_t x2575 = UINT32_MAX;
	int64_t x2576 = 7LL;
	static uint64_t t71 = 1002610409LLU;

    t71 = ((x2573-(x2574/x2575))>>x2576);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2657 = 1;
	int8_t x2658 = INT8_MIN;
	uint16_t x2660 = 0U;
	static uint32_t t72 = 178394402U;

    t72 = ((x2657-(x2658/x2659))>>x2660);

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x2661 = 11;
	uint64_t x2662 = UINT64_MAX;
	uint16_t x2663 = 2382U;
	uint64_t t73 = 92578LLU;

    t73 = ((x2661-(x2662/x2663))>>x2664);

    if (t73 != 18438999848657616467LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x2673 = UINT8_MAX;
	int32_t x2674 = INT32_MIN;
	volatile int64_t x2675 = INT64_MIN;
	volatile int8_t x2676 = 1;
	volatile int64_t t74 = 0LL;

    t74 = ((x2673-(x2674/x2675))>>x2676);

    if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x2701 = INT32_MIN;
	uint64_t x2702 = 565512091703245949LLU;
	uint64_t x2703 = 706192177167LLU;
	int16_t x2704 = 13;
	volatile uint64_t t75 = 12149170823LLU;

    t75 = ((x2701-(x2702/x2703))>>x2704);

    if (t75 != 2251799813423006LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x2717 = 869U;
	int64_t x2718 = 3003543670358999LL;
	int16_t x2719 = INT16_MIN;
	volatile int16_t x2720 = 1;

    t76 = ((x2717-(x2718/x2719))>>x2720);

    if (t76 != 45830439740LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x2735 = 15U;
	int8_t x2736 = 1;
	volatile int32_t t77 = -18505070;

    t77 = ((x2733-(x2734/x2735))>>x2736);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x2754 = -1LL;
	static int64_t x2755 = INT64_MIN;
	static uint8_t x2756 = 2U;
	volatile int64_t t78 = -15479LL;

    t78 = ((x2753-(x2754/x2755))>>x2756);

    if (t78 != 16383LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x2805 = 0U;
	int32_t x2806 = 0;
	int8_t x2807 = -1;
	volatile int8_t x2808 = 29;

    t79 = ((x2805-(x2806/x2807))>>x2808);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x2857 = 12U;
	int8_t x2858 = INT8_MIN;
	int32_t x2859 = INT32_MIN;
	uint8_t x2860 = 0U;
	int32_t t80 = -1510;

    t80 = ((x2857-(x2858/x2859))>>x2860);

    if (t80 != 12) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x2871 = -1LL;
	uint8_t x2872 = 1U;
	uint64_t t81 = 48481989321LLU;

    t81 = ((x2869-(x2870/x2871))>>x2872);

    if (t81 != 78632362LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x2957 = INT8_MIN;
	volatile int64_t x2958 = INT64_MIN;
	volatile uint16_t x2959 = 8U;
	uint16_t x2960 = 47U;
	int64_t t82 = 98490337LL;

    t82 = ((x2957-(x2958/x2959))>>x2960);

    if (t82 != 8191LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x3089 = INT32_MIN;
	uint64_t x3090 = UINT64_MAX;
	static uint8_t x3091 = 121U;
	int8_t x3092 = 1;
	uint64_t t83 = 171689800LLU;

    t83 = ((x3089-(x3090/x3091))>>x3092);

    if (t83 != 9147145820600416002LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x3101 = 124U;
	static volatile uint8_t x3104 = 30U;
	uint32_t t84 = 0U;

    t84 = ((x3101-(x3102/x3103))>>x3104);

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x3130 = INT64_MIN;
	int64_t t85 = 178754736265LL;

    t85 = ((x3129-(x3130/x3131))>>x3132);

    if (t85 != 2147516416LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x3153 = UINT8_MAX;
	volatile uint32_t x3154 = 61U;
	static int32_t x3155 = INT32_MIN;
	static uint8_t x3156 = 3U;
	volatile uint32_t t86 = 59420U;

    t86 = ((x3153-(x3154/x3155))>>x3156);

    if (t86 != 31U) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x3173 = 7341907193878319LLU;
	static volatile int64_t x3174 = INT64_MIN;
	uint16_t x3175 = 13529U;
	static volatile int64_t x3176 = 3LL;
	volatile uint64_t t87 = 4081920251427146775LLU;

    t87 = ((x3173-(x3174/x3175))>>x3176);

    if (t87 != 1002956930139280LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x3215 = -1LL;
	static volatile int8_t x3216 = 6;
	volatile int64_t t88 = 5LL;

    t88 = ((x3213-(x3214/x3215))>>x3216);

    if (t88 != 67108863LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x3265 = 14076494635461LLU;
	int16_t x3266 = 14;
	int8_t x3268 = 0;
	volatile uint64_t t89 = 4099926LLU;

    t89 = ((x3265-(x3266/x3267))>>x3268);

    if (t89 != 14076494635461LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x3325 = UINT32_MAX;
	int8_t x3326 = 0;
	uint8_t x3327 = UINT8_MAX;
	uint8_t x3328 = 22U;
	static uint32_t t90 = 718640391U;

    t90 = ((x3325-(x3326/x3327))>>x3328);

    if (t90 != 1023U) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x3337 = 1052437388669446LLU;
	static volatile int16_t x3338 = INT16_MIN;
	uint16_t x3339 = 332U;
	uint8_t x3340 = 24U;
	static uint64_t t91 = 651380588014788LLU;

    t91 = ((x3337-(x3338/x3339))>>x3340);

    if (t91 != 62730156LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x3361 = INT8_MAX;
	static int8_t x3362 = INT8_MAX;
	static uint64_t x3363 = 11115029733247LLU;
	uint16_t x3364 = 11U;

    t92 = ((x3361-(x3362/x3363))>>x3364);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x3445 = UINT32_MAX;
	int64_t x3447 = -1LL;
	uint8_t x3448 = 12U;
	volatile int64_t t93 = -256646033LL;

    t93 = ((x3445-(x3446/x3447))>>x3448);

    if (t93 != 1048591LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x3449 = INT16_MAX;
	uint32_t x3450 = UINT32_MAX;
	volatile int64_t x3451 = 1478330521072150100LL;
	uint16_t x3452 = 61U;
	int64_t t94 = 490358912893731LL;

    t94 = ((x3449-(x3450/x3451))>>x3452);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x3534 = 183;
	int64_t x3535 = INT64_MAX;
	static volatile int64_t t95 = -4103957714039394LL;

    t95 = ((x3533-(x3534/x3535))>>x3536);

    if (t95 != 63LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x3585 = 143U;
	volatile int64_t x3586 = INT64_MIN;
	static volatile int64_t x3587 = 65466LL;
	int8_t x3588 = 50;
	static int64_t t96 = 5246579730LL;

    t96 = ((x3585-(x3586/x3587))>>x3588);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x3597 = INT16_MAX;
	uint16_t x3598 = UINT16_MAX;
	static volatile uint8_t x3600 = 4U;
	volatile uint32_t t97 = 36U;

    t97 = ((x3597-(x3598/x3599))>>x3600);

    if (t97 != 2047U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x3661 = INT8_MIN;
	uint64_t x3662 = UINT64_MAX;
	int32_t x3663 = -36569;
	int16_t x3664 = 15;
	volatile uint64_t t98 = 10LLU;

    t98 = ((x3661-(x3662/x3663))>>x3664);

    if (t98 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x3697 = INT32_MIN;
	uint64_t x3698 = UINT64_MAX;
	int64_t x3699 = -41LL;
	int64_t x3700 = 41LL;
	uint64_t t99 = 1534347787531606385LLU;

    t99 = ((x3697-(x3698/x3699))>>x3700);

    if (t99 != 8388607LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x3705 = INT16_MIN;
	volatile int8_t x3706 = INT8_MAX;
	uint32_t x3707 = 57894U;
	volatile uint32_t x3708 = 10U;
	volatile uint32_t t100 = 919119U;

    t100 = ((x3705-(x3706/x3707))>>x3708);

    if (t100 != 4194272U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x3733 = INT16_MAX;
	uint8_t x3734 = UINT8_MAX;
	int64_t x3735 = INT64_MIN;
	static volatile int8_t x3736 = 21;
	volatile int64_t t101 = 0LL;

    t101 = ((x3733-(x3734/x3735))>>x3736);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x3738 = INT16_MIN;
	int32_t x3739 = INT32_MIN;
	uint8_t x3740 = 10U;
	static int64_t t102 = 6862144125817LL;

    t102 = ((x3737-(x3738/x3739))>>x3740);

    if (t102 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x3785 = UINT16_MAX;
	static uint64_t x3786 = UINT64_MAX;
	uint16_t x3787 = 23482U;
	static uint64_t x3788 = 7LLU;
	uint64_t t103 = 20046223436LLU;

    t103 = ((x3785-(x3786/x3787))>>x3788);

    if (t103 != 144109050813780076LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x3834 = 493U;
	volatile uint16_t x3835 = 191U;

    t104 = ((x3833-(x3834/x3835))>>x3836);

    if (t104 != 48) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x3897 = INT8_MIN;
	int16_t x3898 = INT16_MAX;
	static uint32_t x3899 = 484951911U;
	uint8_t x3900 = 2U;
	static uint32_t t105 = 27043160U;

    t105 = ((x3897-(x3898/x3899))>>x3900);

    if (t105 != 1073741792U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x3905 = INT64_MAX;
	int64_t x3906 = INT64_MIN;
	volatile int32_t x3907 = INT32_MIN;

    t106 = ((x3905-(x3906/x3907))>>x3908);

    if (t106 != 9223372032559808511LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x3949 = 181U;
	int64_t x3950 = INT64_MIN;
	uint16_t x3951 = 3511U;
	static volatile int32_t x3952 = 0;
	volatile int64_t t107 = -4218554999534LL;

    t107 = ((x3949-(x3950/x3951))>>x3952);

    if (t107 != 2626992890018630LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x3969 = INT16_MAX;
	int16_t x3970 = -1;
	int64_t x3971 = 48609695809189LL;
	uint8_t x3972 = 7U;

    t108 = ((x3969-(x3970/x3971))>>x3972);

    if (t108 != 255LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x3973 = -6;
	uint64_t x3974 = 129371125LLU;
	int64_t x3975 = INT64_MIN;
	uint32_t x3976 = 3U;

    t109 = ((x3973-(x3974/x3975))>>x3976);

    if (t109 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x3982 = UINT64_MAX;
	static int64_t x3983 = INT64_MAX;
	uint16_t x3984 = 54U;
	volatile uint64_t t110 = 1997711996LLU;

    t110 = ((x3981-(x3982/x3983))>>x3984);

    if (t110 != 1023LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x4037 = 1;
	uint16_t x4038 = 59U;
	int8_t x4039 = -6;
	uint8_t x4040 = 0U;

    t111 = ((x4037-(x4038/x4039))>>x4040);

    if (t111 != 10) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x4049 = 86U;
	int8_t x4050 = -1;
	uint8_t x4051 = 24U;
	uint8_t x4052 = 7U;
	uint32_t t112 = 3572U;

    t112 = ((x4049-(x4050/x4051))>>x4052);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x4081 = 22U;
	volatile int64_t x4082 = -45160LL;
	static int32_t x4083 = 31879915;
	volatile int16_t x4084 = 27;
	int64_t t113 = 69177183404146621LL;

    t113 = ((x4081-(x4082/x4083))>>x4084);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x4122 = INT64_MIN;
	volatile int8_t x4123 = 21;
	int64_t t114 = 6421798LL;

    t114 = ((x4121-(x4122/x4123))>>x4124);

    if (t114 != 27450512014446689LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x4217 = INT8_MIN;
	int16_t x4219 = -439;
	volatile uint16_t x4220 = 10U;
	volatile int64_t t115 = 984190725452385LL;

    t115 = ((x4217-(x4218/x4219))>>x4220);

    if (t115 != 3824LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint64_t x4225 = UINT64_MAX;
	uint32_t x4226 = UINT32_MAX;
	static uint16_t x4227 = 3135U;
	uint64_t t116 = 1004LLU;

    t116 = ((x4225-(x4226/x4227))>>x4228);

    if (t116 != 1152921504606761350LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x4277 = 687U;
	static int32_t x4278 = INT32_MIN;
	int8_t x4280 = 26;
	uint32_t t117 = 10U;

    t117 = ((x4277-(x4278/x4279))>>x4280);

    if (t117 != 32U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x4341 = 1U;
	int32_t x4342 = -1;
	static volatile int8_t x4343 = -1;
	int8_t x4344 = 3;
	volatile int32_t t118 = 403631;

    t118 = ((x4341-(x4342/x4343))>>x4344);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x4509 = 3443U;
	volatile uint16_t x4510 = 18982U;
	static int16_t x4511 = -1;
	volatile uint32_t x4512 = 3U;
	static volatile int32_t t119 = 570502;

    t119 = ((x4509-(x4510/x4511))>>x4512);

    if (t119 != 2803) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x4517 = UINT32_MAX;
	uint32_t x4518 = UINT32_MAX;
	uint64_t x4519 = 32981702474LLU;
	uint8_t x4520 = 18U;

    t120 = ((x4517-(x4518/x4519))>>x4520);

    if (t120 != 16383LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x4531 = 3992923LLU;
	volatile uint16_t x4532 = 47U;
	uint64_t t121 = 193026613883LLU;

    t121 = ((x4529-(x4530/x4531))>>x4532);

    if (t121 != 131071LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint64_t x4582 = UINT64_MAX;
	volatile int16_t x4583 = 954;
	volatile int16_t x4584 = 0;
	uint64_t t122 = 5521600245590322289LLU;

    t122 = ((x4581-(x4582/x4583))>>x4584);

    if (t122 != 18427407863988682848LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x4596 = 3U;
	static volatile uint64_t t123 = 1575891LLU;

    t123 = ((x4593-(x4594/x4595))>>x4596);

    if (t123 != 2305460930836071949LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x4647 = INT16_MAX;
	uint8_t x4648 = 0U;

    t124 = ((x4645-(x4646/x4647))>>x4648);

    if (t124 != 57332236U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x4658 = 740559517U;
	static int64_t x4659 = INT64_MIN;
	int8_t x4660 = 25;
	static int64_t t125 = -3022944476496767954LL;

    t125 = ((x4657-(x4658/x4659))>>x4660);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x4665 = INT32_MIN;
	uint32_t x4666 = 745750998U;
	volatile int8_t x4667 = 13;
	uint8_t x4668 = 9U;
	static uint32_t t126 = 63U;

    t126 = ((x4665-(x4666/x4667))>>x4668);

    if (t126 != 4082262U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x4678 = INT16_MAX;
	uint32_t x4679 = UINT32_MAX;
	volatile uint8_t x4680 = 4U;
	volatile uint32_t t127 = 53U;

    t127 = ((x4677-(x4678/x4679))>>x4680);

    if (t127 != 268435455U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x4701 = UINT8_MAX;
	int8_t x4702 = -1;
	static uint8_t x4704 = 36U;
	static uint64_t t128 = 888244041098886171LLU;

    t128 = ((x4701-(x4702/x4703))>>x4704);

    if (t128 != 268169678LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x4713 = 1LLU;
	volatile uint8_t x4714 = UINT8_MAX;
	volatile int16_t x4715 = -1;
	uint16_t x4716 = 4U;
	uint64_t t129 = 39949LLU;

    t129 = ((x4713-(x4714/x4715))>>x4716);

    if (t129 != 16LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x4718 = INT64_MAX;
	int64_t x4720 = 0LL;

    t130 = ((x4717-(x4718/x4719))>>x4720);

    if (t130 != 281474976743422LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x4757 = INT32_MIN;
	uint32_t x4758 = 33U;
	int16_t x4759 = INT16_MAX;
	int8_t x4760 = 10;

    t131 = ((x4757-(x4758/x4759))>>x4760);

    if (t131 != 2097152U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x4809 = INT8_MIN;
	uint64_t x4810 = UINT64_MAX;
	int16_t x4811 = INT16_MIN;
	volatile uint32_t x4812 = 5U;
	volatile uint64_t t132 = 881LLU;

    t132 = ((x4809-(x4810/x4811))>>x4812);

    if (t132 != 576460752303423483LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x4853 = 410;
	int8_t x4854 = INT8_MAX;
	static int8_t x4855 = INT8_MAX;
	uint32_t x4856 = 12U;
	int32_t t133 = 24497548;

    t133 = ((x4853-(x4854/x4855))>>x4856);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x4993 = -1;
	int16_t x4994 = INT16_MIN;
	int32_t t134 = -50872;

    t134 = ((x4993-(x4994/x4995))>>x4996);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x5021 = 103U;
	uint16_t x5024 = 0U;

    t135 = ((x5021-(x5022/x5023))>>x5024);

    if (t135 != 103) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x5049 = -1;
	uint32_t x5050 = UINT32_MAX;

    t136 = ((x5049-(x5050/x5051))>>x5052);

    if (t136 != 4294967294U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x5065 = -50;
	uint32_t x5066 = 1201U;
	int16_t x5068 = 0;
	volatile uint32_t t137 = 23U;

    t137 = ((x5065-(x5066/x5067))>>x5068);

    if (t137 != 4294967237U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x5101 = 0;
	uint32_t x5102 = UINT32_MAX;
	int16_t x5103 = INT16_MAX;
	uint8_t x5104 = 0U;
	uint32_t t138 = 70010U;

    t138 = ((x5101-(x5102/x5103))>>x5104);

    if (t138 != 4294836220U) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x5133 = UINT32_MAX;
	uint16_t x5134 = UINT16_MAX;
	uint64_t x5135 = 9140571628LLU;
	int8_t x5136 = 2;

    t139 = ((x5133-(x5134/x5135))>>x5136);

    if (t139 != 1073741823LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x5365 = -302;
	int32_t x5366 = INT32_MAX;
	static volatile uint64_t x5367 = 7973406LLU;
	static int32_t x5368 = 49;
	uint64_t t140 = 3LLU;

    t140 = ((x5365-(x5366/x5367))>>x5368);

    if (t140 != 32767LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint8_t x5406 = 1U;
	int8_t x5407 = 1;
	uint16_t x5408 = 2U;

    t141 = ((x5405-(x5406/x5407))>>x5408);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x5425 = 31U;
	uint32_t x5426 = 16986U;
	int16_t x5427 = -1;
	uint8_t x5428 = 2U;
	uint32_t t142 = 122286320U;

    t142 = ((x5425-(x5426/x5427))>>x5428);

    if (t142 != 7U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x5521 = 0;
	static uint8_t x5522 = UINT8_MAX;
	int64_t x5523 = INT64_MAX;
	static volatile int64_t t143 = -24705568361963127LL;

    t143 = ((x5521-(x5522/x5523))>>x5524);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x5565 = INT64_MAX;
	static int8_t x5566 = INT8_MAX;
	uint8_t x5567 = UINT8_MAX;
	int16_t x5568 = 14;

    t144 = ((x5565-(x5566/x5567))>>x5568);

    if (t144 != 562949953421311LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x5645 = INT16_MIN;
	volatile int64_t x5646 = INT64_MAX;
	volatile int32_t x5647 = INT32_MIN;
	static uint8_t x5648 = 15U;

    t145 = ((x5645-(x5646/x5647))>>x5648);

    if (t145 != 131070LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x5654 = INT16_MAX;
	volatile int32_t x5655 = INT32_MAX;
	static uint32_t x5656 = 0U;
	volatile int32_t t146 = -28;

    t146 = ((x5653-(x5654/x5655))>>x5656);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x5657 = UINT64_MAX;
	volatile uint16_t x5658 = 6827U;
	volatile uint64_t t147 = UINT64_MAX;

    t147 = ((x5657-(x5658/x5659))>>x5660);

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x5681 = 128326514U;
	int8_t x5683 = -1;
	uint8_t x5684 = 27U;
	static uint32_t t148 = 3794U;

    t148 = ((x5681-(x5682/x5683))>>x5684);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x5733 = UINT64_MAX;
	uint8_t x5736 = 22U;
	uint64_t t149 = 3461LLU;

    t149 = ((x5733-(x5734/x5735))>>x5736);

    if (t149 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x5737 = 6U;
	volatile uint16_t x5738 = 3U;
	int8_t x5740 = 1;
	static int32_t t150 = -13449;

    t150 = ((x5737-(x5738/x5739))>>x5740);

    if (t150 != 4) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x5742 = -1;
	uint32_t x5743 = 64654744U;
	volatile uint8_t x5744 = 0U;
	volatile uint64_t t151 = 1LLU;

    t151 = ((x5741-(x5742/x5743))>>x5744);

    if (t151 != 113564LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x5769 = 25125263U;
	volatile int16_t x5770 = INT16_MIN;
	int32_t x5771 = INT32_MIN;
	uint8_t x5772 = 3U;
	volatile uint32_t t152 = 1051382443U;

    t152 = ((x5769-(x5770/x5771))>>x5772);

    if (t152 != 3140657U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x5781 = INT16_MIN;
	int64_t x5782 = INT64_MAX;
	volatile int16_t x5783 = INT16_MIN;
	static uint8_t x5784 = 35U;

    t153 = ((x5781-(x5782/x5783))>>x5784);

    if (t153 != 8191LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x5918 = INT32_MAX;
	volatile int32_t x5919 = -22098779;
	static int64_t x5920 = 1LL;

    t154 = ((x5917-(x5918/x5919))>>x5920);

    if (t154 != 48U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x6050 = 893830288LLU;
	int8_t x6052 = 0;
	uint64_t t155 = 8507808610869166762LLU;

    t155 = ((x6049-(x6050/x6051))>>x6052);

    if (t155 != 127LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x6061 = 2314U;
	int16_t x6062 = INT16_MAX;
	volatile int8_t x6063 = INT8_MIN;
	uint8_t x6064 = 3U;
	volatile int32_t t156 = -9;

    t156 = ((x6061-(x6062/x6063))>>x6064);

    if (t156 != 321) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x6117 = INT32_MIN;
	uint32_t t157 = 370574485U;

    t157 = ((x6117-(x6118/x6119))>>x6120);

    if (t157 != 1073741824U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x6121 = UINT32_MAX;
	static uint64_t x6122 = 1812485085LLU;
	volatile uint8_t x6123 = 77U;
	int8_t x6124 = 1;
	volatile uint64_t t158 = 4808019LLU;

    t158 = ((x6121-(x6122/x6123))>>x6124);

    if (t158 != 2135714264LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x6172 = 0;
	uint64_t t159 = 35384914701103LLU;

    t159 = ((x6169-(x6170/x6171))>>x6172);

    if (t159 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x6197 = UINT32_MAX;
	int32_t x6198 = INT32_MIN;
	uint16_t x6199 = 608U;
	volatile uint32_t t160 = 58661293U;

    t160 = ((x6197-(x6198/x6199))>>x6200);

    if (t160 != 6898U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x6237 = UINT8_MAX;
	int32_t x6238 = -1817;
	int64_t x6240 = 1LL;

    t161 = ((x6237-(x6238/x6239))>>x6240);

    if (t161 != 1036) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x6285 = -1;
	int64_t x6286 = -195163043LL;
	uint8_t x6287 = 14U;
	static int8_t x6288 = 0;
	static volatile int64_t t162 = -357984271LL;

    t162 = ((x6285-(x6286/x6287))>>x6288);

    if (t162 != 13940216LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x6509 = 1847608570329LL;
	uint64_t x6510 = 11488815LLU;
	uint64_t t163 = 247366LLU;

    t163 = ((x6509-(x6510/x6511))>>x6512);

    if (t163 != 14096134LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x6513 = 3;
	uint64_t x6514 = 67LLU;
	volatile int16_t x6515 = INT16_MIN;
	uint16_t x6516 = 1U;
	volatile uint64_t t164 = 24520624LLU;

    t164 = ((x6513-(x6514/x6515))>>x6516);

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x6517 = UINT32_MAX;
	volatile int32_t x6518 = 0;
	int16_t x6519 = INT16_MAX;
	uint32_t t165 = 35500844U;

    t165 = ((x6517-(x6518/x6519))>>x6520);

    if (t165 != 4194303U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x6553 = -4174;
	int16_t x6554 = INT16_MAX;
	static int16_t x6555 = -6;
	uint8_t x6556 = 6U;
	volatile int32_t t166 = -83;

    t166 = ((x6553-(x6554/x6555))>>x6556);

    if (t166 != 20) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x6597 = UINT64_MAX;
	uint8_t x6600 = 56U;
	volatile uint64_t t167 = 7110LLU;

    t167 = ((x6597-(x6598/x6599))>>x6600);

    if (t167 != 255LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x6638 = INT8_MIN;
	int64_t x6639 = 376594875274292LL;
	volatile uint8_t x6640 = 3U;
	int64_t t168 = -7059627LL;

    t168 = ((x6637-(x6638/x6639))>>x6640);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x6649 = 95U;
	int8_t x6650 = INT8_MAX;
	int8_t x6651 = INT8_MIN;
	int32_t t169 = -232;

    t169 = ((x6649-(x6650/x6651))>>x6652);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x6705 = 2U;
	int32_t x6706 = INT32_MAX;
	static volatile int32_t x6707 = INT32_MIN;
	uint16_t x6708 = 0U;

    t170 = ((x6705-(x6706/x6707))>>x6708);

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x6737 = INT32_MAX;
	uint64_t x6738 = 492277756LLU;
	static int16_t x6739 = -5;
	uint16_t x6740 = 21U;
	uint64_t t171 = 1528131170406091LLU;

    t171 = ((x6737-(x6738/x6739))>>x6740);

    if (t171 != 1023LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x6741 = UINT16_MAX;
	uint16_t x6742 = 24U;
	static uint32_t x6743 = 690399U;
	volatile uint32_t t172 = 2U;

    t172 = ((x6741-(x6742/x6743))>>x6744);

    if (t172 != 8191U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x6773 = 106;
	uint8_t x6774 = 10U;
	static uint32_t x6775 = 9380U;
	uint16_t x6776 = 4U;
	uint32_t t173 = 1453U;

    t173 = ((x6773-(x6774/x6775))>>x6776);

    if (t173 != 6U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x6777 = 26952LLU;
	uint32_t x6778 = 317805304U;
	int16_t x6780 = 18;

    t174 = ((x6777-(x6778/x6779))>>x6780);

    if (t174 != 70368744177659LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x6793 = 12U;
	uint32_t x6794 = UINT32_MAX;
	volatile uint32_t x6795 = UINT32_MAX;
	uint32_t t175 = 1294780369U;

    t175 = ((x6793-(x6794/x6795))>>x6796);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x6833 = INT64_MIN;
	uint64_t x6834 = UINT64_MAX;
	int8_t x6835 = INT8_MAX;
	static volatile uint16_t x6836 = 6U;
	volatile uint64_t t176 = 2083334596487LLU;

    t176 = ((x6833-(x6834/x6835))>>x6836);

    if (t176 != 141845657554976251LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x6849 = 0U;
	static uint32_t x6850 = 6U;
	volatile uint32_t x6851 = 1970U;
	static int64_t x6852 = 0LL;
	static volatile uint32_t t177 = 57724U;

    t177 = ((x6849-(x6850/x6851))>>x6852);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x6897 = 2U;
	uint16_t x6898 = 161U;
	static uint16_t x6900 = 14U;
	static int32_t t178 = 183;

    t178 = ((x6897-(x6898/x6899))>>x6900);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x6937 = INT64_MAX;
	volatile int8_t x6938 = -1;
	int16_t x6939 = INT16_MAX;
	uint16_t x6940 = 1U;
	volatile int64_t t179 = 1LL;

    t179 = ((x6937-(x6938/x6939))>>x6940);

    if (t179 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x6989 = UINT32_MAX;
	static uint32_t x6990 = 12285U;
	int64_t x6991 = -9612LL;
	uint8_t x6992 = 0U;

    t180 = ((x6989-(x6990/x6991))>>x6992);

    if (t180 != 4294967296LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x7018 = INT8_MAX;
	int64_t x7019 = 21LL;
	uint16_t x7020 = 10U;
	volatile uint64_t t181 = 85100045433LLU;

    t181 = ((x7017-(x7018/x7019))>>x7020);

    if (t181 != 1074LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x7021 = INT8_MAX;
	int32_t x7022 = INT32_MIN;
	int32_t x7023 = INT32_MAX;
	volatile int32_t t182 = 104159;

    t182 = ((x7021-(x7022/x7023))>>x7024);

    if (t182 != 16) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x7045 = -1;
	uint64_t x7046 = 42LLU;
	static uint64_t x7048 = 0LLU;

    t183 = ((x7045-(x7046/x7047))>>x7048);

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x7057 = 2667U;
	int8_t x7058 = INT8_MIN;
	int8_t x7060 = 0;
	int32_t t184 = 2;

    t184 = ((x7057-(x7058/x7059))>>x7060);

    if (t184 != 2666) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x7063 = -4;
	int8_t x7064 = 0;
	volatile uint64_t t185 = 423469LLU;

    t185 = ((x7061-(x7062/x7063))>>x7064);

    if (t185 != 5LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x7101 = 94;
	volatile int32_t x7102 = -5137;
	int16_t x7103 = INT16_MAX;
	volatile int16_t x7104 = 2;
	volatile int32_t t186 = 40;

    t186 = ((x7101-(x7102/x7103))>>x7104);

    if (t186 != 23) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x7261 = 72475094321587595LL;
	uint8_t x7262 = UINT8_MAX;
	int16_t x7264 = 1;
	volatile int64_t t187 = 1532547198879626332LL;

    t187 = ((x7261-(x7262/x7263))>>x7264);

    if (t187 != 36237547160793797LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x7341 = 5349201LLU;
	static int32_t x7342 = 0;
	static uint64_t x7344 = 1LLU;
	uint64_t t188 = 6458625208LLU;

    t188 = ((x7341-(x7342/x7343))>>x7344);

    if (t188 != 2674600LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x7353 = INT64_MAX;
	volatile uint64_t x7354 = 745LLU;
	int32_t x7355 = INT32_MIN;
	static uint64_t t189 = 343717209730696LLU;

    t189 = ((x7353-(x7354/x7355))>>x7356);

    if (t189 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x7373 = INT16_MIN;
	volatile uint32_t x7374 = 0U;
	int16_t x7375 = 5;
	int8_t x7376 = 0;
	uint32_t t190 = 901771U;

    t190 = ((x7373-(x7374/x7375))>>x7376);

    if (t190 != 4294934528U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x7406 = INT8_MAX;
	static uint8_t x7407 = 2U;
	static volatile uint32_t x7408 = 10U;
	volatile uint64_t t191 = 10197617LLU;

    t191 = ((x7405-(x7406/x7407))>>x7408);

    if (t191 != 7325LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x7481 = -59;
	uint64_t x7482 = 378LLU;
	uint8_t x7484 = 1U;
	static volatile uint64_t t192 = 1LLU;

    t192 = ((x7481-(x7482/x7483))>>x7484);

    if (t192 != 9223372036854775778LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x7489 = INT16_MIN;
	int8_t x7490 = INT8_MIN;
	uint64_t x7491 = 2835136967684LLU;
	uint8_t x7492 = 35U;
	volatile uint64_t t193 = 1860852358654648818LLU;

    t193 = ((x7489-(x7490/x7491))>>x7492);

    if (t193 != 536870911LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x7530 = -1;
	int64_t x7531 = -1LL;
	volatile int64_t t194 = 19825598198761LL;

    t194 = ((x7529-(x7530/x7531))>>x7532);

    if (t194 != 1077542883879LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x7565 = INT32_MIN;
	uint32_t x7566 = 20U;
	int8_t x7567 = INT8_MIN;
	int32_t x7568 = 0;
	volatile uint32_t t195 = 342U;

    t195 = ((x7565-(x7566/x7567))>>x7568);

    if (t195 != 2147483648U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x7569 = 0U;
	int8_t x7570 = 1;
	uint8_t x7572 = 18U;

    t196 = ((x7569-(x7570/x7571))>>x7572);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x7662 = UINT16_MAX;
	volatile uint64_t x7663 = UINT64_MAX;
	static int16_t x7664 = 26;
	uint64_t t197 = 12579818991454640LLU;

    t197 = ((x7661-(x7662/x7663))>>x7664);

    if (t197 != 274877906943LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x7677 = UINT8_MAX;
	int16_t x7678 = 31;
	static int64_t x7679 = INT64_MIN;
	int16_t x7680 = 27;
	int64_t t198 = 2752LL;

    t198 = ((x7677-(x7678/x7679))>>x7680);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x7737 = -5;
	int8_t x7738 = INT8_MIN;
	static uint64_t x7739 = 961141LLU;
	uint8_t x7740 = 1U;
	volatile uint64_t t199 = 1334LLU;

    t199 = ((x7737-(x7738/x7739))>>x7740);

    if (t199 != 9223362440581141807LLU) { NG(); } else { ; }
	
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

