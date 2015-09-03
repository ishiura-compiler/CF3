#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 91452312;
static int32_t x222 = INT32_MAX;
uint16_t x366 = UINT16_MAX;
volatile uint8_t x367 = 120U;
volatile uint32_t x403 = UINT32_MAX;
volatile int8_t x521 = INT8_MIN;
volatile int16_t x669 = INT16_MIN;
uint8_t x672 = 29U;
volatile int8_t x779 = INT8_MAX;
uint64_t x959 = UINT64_MAX;
uint8_t x960 = 4U;
uint64_t t12 = 9807730411553900LLU;
int16_t x1075 = 1246;
volatile int8_t x1076 = 2;
static volatile uint32_t x1091 = 1397U;
int8_t x1255 = 2;
uint32_t x1308 = 2U;
int32_t x1341 = INT32_MIN;
int8_t x1344 = 0;
static int32_t t20 = 0;
uint32_t x1467 = UINT32_MAX;
uint8_t x1468 = 6U;
static int32_t x1525 = INT32_MIN;
static volatile uint8_t x1632 = 1U;
int64_t x1672 = 0LL;
static uint32_t x1691 = 79077847U;
int8_t x1692 = 0;
static uint64_t x1767 = 4758437455097729LLU;
int32_t x1768 = 1;
volatile int64_t x1793 = INT64_MIN;
static int32_t x1794 = -14;
uint32_t x1829 = UINT32_MAX;
uint16_t x1931 = UINT16_MAX;
int8_t x1998 = 4;
static uint64_t x2074 = 175LLU;
uint8_t x2171 = UINT8_MAX;
volatile int8_t x2193 = INT8_MIN;
uint32_t t38 = 5831U;
int8_t x2264 = 3;
int16_t x2322 = -603;
uint64_t x2323 = 191272LLU;
volatile int32_t x2354 = -1;
volatile uint32_t x2364 = 3U;
volatile int32_t t43 = -44;
static int16_t x2755 = 1;
uint16_t x2891 = 7U;
static uint16_t x3184 = 0U;
uint32_t t53 = 25U;
uint8_t x3427 = UINT8_MAX;
int32_t t55 = -2379;
volatile int8_t x3445 = INT8_MAX;
uint32_t x3476 = 12U;
volatile uint32_t x3578 = UINT32_MAX;
volatile uint32_t x3583 = 2422U;
int32_t x3609 = INT32_MAX;
int16_t x3612 = 0;
uint32_t x3643 = 494U;
volatile uint16_t x3644 = 20U;
int8_t x3809 = INT8_MIN;
int8_t x4142 = 1;
uint8_t x4144 = 1U;
uint32_t x4173 = UINT32_MAX;
int32_t x4193 = 221313194;
int16_t x4194 = INT16_MIN;
static uint8_t x4196 = 21U;
static volatile int16_t x4342 = -1;
uint32_t x4343 = UINT32_MAX;
volatile uint8_t x4436 = 20U;
uint8_t x4552 = 2U;
volatile int32_t t76 = 4;
uint64_t t78 = 5LLU;
int16_t x5087 = INT16_MAX;
uint32_t x5091 = 106121058U;
uint32_t t82 = 1681U;
int64_t x5164 = 4LL;
static uint8_t x5315 = UINT8_MAX;
volatile int64_t x5378 = 2235041385841229LL;
uint32_t t88 = 0U;
uint32_t x5417 = 2450U;
static int8_t x5419 = INT8_MAX;
static int8_t x5420 = 0;
volatile uint64_t x5431 = 58062359692403LLU;
uint64_t t90 = 16431282490LLU;
volatile int8_t x5438 = -1;
int8_t x5439 = INT8_MAX;
static volatile int32_t t91 = 232326;
volatile int16_t x5492 = 6;
int32_t t93 = 1028;
uint64_t x5655 = UINT64_MAX;
volatile uint64_t t94 = 780343607872992LLU;
volatile int16_t x5658 = -406;
static volatile int64_t t95 = 7LL;
uint16_t x5689 = 7262U;
static volatile int8_t x5690 = INT8_MAX;
uint32_t x5691 = 54956521U;
uint16_t x5808 = 0U;


void f0(void) {
	volatile int16_t x81 = 35;
	int8_t x82 = -1;
	int32_t x83 = 16;
	uint8_t x84 = 20U;

	t0 = ((x81<x82)%(x83<<x84));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x137 = 30062U;
	uint16_t x138 = 99U;
	volatile int8_t x139 = 51;
	uint8_t x140 = 0U;
	static int32_t t1 = 93612677;

	t1 = ((x137<x138)%(x139<<x140));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x221 = UINT8_MAX;
	uint64_t x223 = UINT64_MAX;
	volatile uint32_t x224 = 8U;
	volatile uint64_t t2 = 11567601968LLU;

	t2 = ((x221<x222)%(x223<<x224));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x253 = -38;
	volatile int32_t x254 = INT32_MIN;
	uint8_t x255 = UINT8_MAX;
	volatile int64_t x256 = 0LL;
	int32_t t3 = -125306;

	t3 = ((x253<x254)%(x255<<x256));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x365 = INT32_MIN;
	int8_t x368 = 6;
	volatile int32_t t4 = -4641;

	t4 = ((x365<x366)%(x367<<x368));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x401 = -1;
	uint8_t x402 = 19U;
	int16_t x404 = 12;
	static uint32_t t5 = 1812296U;

	t5 = ((x401<x402)%(x403<<x404));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x489 = 10U;
	int8_t x490 = 59;
	uint8_t x491 = UINT8_MAX;
	volatile uint32_t x492 = 9U;
	volatile int32_t t6 = 1;

	t6 = ((x489<x490)%(x491<<x492));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x522 = 0;
	uint64_t x523 = UINT64_MAX;
	uint64_t x524 = 0LLU;
	uint64_t t7 = 20071LLU;

	t7 = ((x521<x522)%(x523<<x524));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x670 = INT16_MIN;
	uint32_t x671 = UINT32_MAX;
	uint32_t t8 = 67433U;

	t8 = ((x669<x670)%(x671<<x672));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x693 = -1;
	uint64_t x694 = 7842880327LLU;
	static uint64_t x695 = 10535LLU;
	uint64_t x696 = 51LLU;
	volatile uint64_t t9 = 619866LLU;

	t9 = ((x693<x694)%(x695<<x696));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x777 = INT32_MAX;
	volatile int64_t x778 = INT64_MIN;
	uint16_t x780 = 0U;
	int32_t t10 = 769;

	t10 = ((x777<x778)%(x779<<x780));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x869 = 262933U;
	uint32_t x870 = 696142042U;
	static volatile uint8_t x871 = 3U;
	int8_t x872 = 1;
	volatile int32_t t11 = -16341513;

	t11 = ((x869<x870)%(x871<<x872));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x957 = 41966658332384LLU;
	static volatile int16_t x958 = -1;

	t12 = ((x957<x958)%(x959<<x960));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x977 = 1U;
	static volatile uint64_t x978 = UINT64_MAX;
	uint64_t x979 = 60353209418LLU;
	uint32_t x980 = 2U;
	volatile uint64_t t13 = 30420630684LLU;

	t13 = ((x977<x978)%(x979<<x980));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1073 = INT16_MIN;
	volatile int16_t x1074 = 13;
	volatile int32_t t14 = 1420170;

	t14 = ((x1073<x1074)%(x1075<<x1076));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1089 = UINT32_MAX;
	int8_t x1090 = INT8_MIN;
	volatile int16_t x1092 = 21;
	uint32_t t15 = 238904U;

	t15 = ((x1089<x1090)%(x1091<<x1092));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1253 = INT16_MIN;
	int64_t x1254 = INT64_MIN;
	uint16_t x1256 = 1U;
	int32_t t16 = 1;

	t16 = ((x1253<x1254)%(x1255<<x1256));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1293 = -1;
	int16_t x1294 = INT16_MAX;
	uint32_t x1295 = 193440388U;
	volatile uint8_t x1296 = 2U;
	volatile uint32_t t17 = 412638U;

	t17 = ((x1293<x1294)%(x1295<<x1296));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1305 = 1;
	uint8_t x1306 = UINT8_MAX;
	int64_t x1307 = 5197881LL;
	volatile int64_t t18 = -891216986576LL;

	t18 = ((x1305<x1306)%(x1307<<x1308));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1342 = 0;
	uint32_t x1343 = UINT32_MAX;
	uint32_t t19 = 259616U;

	t19 = ((x1341<x1342)%(x1343<<x1344));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x1401 = 0U;
	uint64_t x1402 = 447910388068LLU;
	uint16_t x1403 = UINT16_MAX;
	volatile int32_t x1404 = 7;

	t20 = ((x1401<x1402)%(x1403<<x1404));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1409 = INT8_MAX;
	int32_t x1410 = INT32_MIN;
	uint32_t x1411 = 21071087U;
	uint8_t x1412 = 27U;
	static volatile uint32_t t21 = 39319U;

	t21 = ((x1409<x1410)%(x1411<<x1412));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1441 = -1;
	int64_t x1442 = INT64_MIN;
	uint16_t x1443 = 15364U;
	uint16_t x1444 = 14U;
	volatile int32_t t22 = 551279089;

	t22 = ((x1441<x1442)%(x1443<<x1444));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1465 = 1310LLU;
	int32_t x1466 = INT32_MIN;
	volatile uint32_t t23 = 0U;

	t23 = ((x1465<x1466)%(x1467<<x1468));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1526 = -1;
	volatile uint16_t x1527 = 5U;
	uint8_t x1528 = 16U;
	int32_t t24 = 1;

	t24 = ((x1525<x1526)%(x1527<<x1528));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1553 = 233657252578866339LL;
	int16_t x1554 = -57;
	static uint64_t x1555 = UINT64_MAX;
	uint8_t x1556 = 0U;
	volatile uint64_t t25 = 56918648770LLU;

	t25 = ((x1553<x1554)%(x1555<<x1556));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1605 = 154059023716559LLU;
	uint16_t x1606 = 1U;
	int16_t x1607 = 1298;
	int8_t x1608 = 0;
	int32_t t26 = -683;

	t26 = ((x1605<x1606)%(x1607<<x1608));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1629 = INT8_MIN;
	static int64_t x1630 = 487250568128846LL;
	static uint64_t x1631 = 702538599510LLU;
	static volatile uint64_t t27 = 57632LLU;

	t27 = ((x1629<x1630)%(x1631<<x1632));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1669 = INT64_MIN;
	int8_t x1670 = INT8_MIN;
	static uint16_t x1671 = 127U;
	int32_t t28 = -1;

	t28 = ((x1669<x1670)%(x1671<<x1672));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1689 = 1378U;
	static int8_t x1690 = -3;
	uint32_t t29 = 725828U;

	t29 = ((x1689<x1690)%(x1691<<x1692));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1737 = UINT32_MAX;
	uint64_t x1738 = 49499612846491LLU;
	static uint64_t x1739 = UINT64_MAX;
	uint32_t x1740 = 0U;
	static uint64_t t30 = 1123267803LLU;

	t30 = ((x1737<x1738)%(x1739<<x1740));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1765 = 8969;
	static uint32_t x1766 = 1U;
	volatile uint64_t t31 = 798211215294LLU;

	t31 = ((x1765<x1766)%(x1767<<x1768));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1795 = 21593763;
	int16_t x1796 = 0;
	volatile int32_t t32 = -121;

	t32 = ((x1793<x1794)%(x1795<<x1796));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1830 = INT16_MAX;
	static volatile int32_t x1831 = 4373;
	uint32_t x1832 = 2U;
	volatile int32_t t33 = -27520146;

	t33 = ((x1829<x1830)%(x1831<<x1832));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1929 = 0U;
	int64_t x1930 = -847596LL;
	uint8_t x1932 = 4U;
	static volatile int32_t t34 = -1;

	t34 = ((x1929<x1930)%(x1931<<x1932));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1997 = 2;
	uint16_t x1999 = 6U;
	int8_t x2000 = 1;
	static volatile int32_t t35 = 3665313;

	t35 = ((x1997<x1998)%(x1999<<x2000));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2073 = 476154LL;
	uint8_t x2075 = 5U;
	uint8_t x2076 = 7U;
	volatile int32_t t36 = -145315;

	t36 = ((x2073<x2074)%(x2075<<x2076));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2169 = -57;
	int64_t x2170 = -1LL;
	uint32_t x2172 = 12U;
	static int32_t t37 = -3380;

	t37 = ((x2169<x2170)%(x2171<<x2172));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2194 = -1LL;
	static uint32_t x2195 = 1244U;
	uint16_t x2196 = 11U;

	t38 = ((x2193<x2194)%(x2195<<x2196));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x2261 = 55U;
	volatile uint32_t x2262 = 32031038U;
	uint32_t x2263 = UINT32_MAX;
	static uint32_t t39 = 1024105U;

	t39 = ((x2261<x2262)%(x2263<<x2264));

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2321 = 10U;
	int8_t x2324 = 35;
	uint64_t t40 = 123377LLU;

	t40 = ((x2321<x2322)%(x2323<<x2324));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2341 = INT16_MAX;
	volatile int64_t x2342 = INT64_MAX;
	uint8_t x2343 = 125U;
	uint8_t x2344 = 8U;
	volatile int32_t t41 = -112;

	t41 = ((x2341<x2342)%(x2343<<x2344));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2353 = -1LL;
	uint32_t x2355 = 24U;
	int16_t x2356 = 1;
	volatile uint32_t t42 = 5826316U;

	t42 = ((x2353<x2354)%(x2355<<x2356));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2361 = INT64_MIN;
	int64_t x2362 = INT64_MIN;
	volatile uint8_t x2363 = UINT8_MAX;

	t43 = ((x2361<x2362)%(x2363<<x2364));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2381 = -2;
	int8_t x2382 = INT8_MAX;
	uint8_t x2383 = 7U;
	static int32_t x2384 = 3;
	static volatile int32_t t44 = -1;

	t44 = ((x2381<x2382)%(x2383<<x2384));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2489 = INT32_MIN;
	int64_t x2490 = INT64_MAX;
	uint16_t x2491 = 5U;
	uint8_t x2492 = 5U;
	volatile int32_t t45 = 21;

	t45 = ((x2489<x2490)%(x2491<<x2492));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2681 = INT16_MIN;
	int16_t x2682 = INT16_MIN;
	int32_t x2683 = 3;
	uint8_t x2684 = 15U;
	volatile int32_t t46 = -1016886966;

	t46 = ((x2681<x2682)%(x2683<<x2684));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2753 = UINT16_MAX;
	volatile int32_t x2754 = 0;
	volatile int8_t x2756 = 1;
	volatile int32_t t47 = -11171088;

	t47 = ((x2753<x2754)%(x2755<<x2756));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2809 = UINT32_MAX;
	int8_t x2810 = INT8_MIN;
	uint64_t x2811 = UINT64_MAX;
	int8_t x2812 = 0;
	static uint64_t t48 = 14LLU;

	t48 = ((x2809<x2810)%(x2811<<x2812));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2813 = 1514;
	volatile uint64_t x2814 = UINT64_MAX;
	uint64_t x2815 = 1590675088200641076LLU;
	static int8_t x2816 = 1;
	uint64_t t49 = 729LLU;

	t49 = ((x2813<x2814)%(x2815<<x2816));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2889 = 0U;
	int8_t x2890 = INT8_MIN;
	volatile uint16_t x2892 = 2U;
	static int32_t t50 = 1;

	t50 = ((x2889<x2890)%(x2891<<x2892));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x3021 = 36359566LLU;
	volatile int8_t x3022 = INT8_MAX;
	uint64_t x3023 = 3224818529LLU;
	int8_t x3024 = 3;
	volatile uint64_t t51 = 14203089564LLU;

	t51 = ((x3021<x3022)%(x3023<<x3024));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x3177 = INT8_MIN;
	int8_t x3178 = INT8_MIN;
	uint64_t x3179 = UINT64_MAX;
	static volatile int8_t x3180 = 28;
	uint64_t t52 = 140365165LLU;

	t52 = ((x3177<x3178)%(x3179<<x3180));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3181 = 58U;
	volatile int16_t x3182 = -1;
	static uint32_t x3183 = 5500U;

	t53 = ((x3181<x3182)%(x3183<<x3184));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3341 = INT8_MAX;
	int16_t x3342 = -10;
	uint64_t x3343 = UINT64_MAX;
	int8_t x3344 = 1;
	volatile uint64_t t54 = 327453479119062286LLU;

	t54 = ((x3341<x3342)%(x3343<<x3344));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3425 = 7LL;
	int64_t x3426 = -1LL;
	int8_t x3428 = 1;

	t55 = ((x3425<x3426)%(x3427<<x3428));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3446 = -1;
	uint8_t x3447 = 32U;
	volatile int8_t x3448 = 0;
	static volatile int32_t t56 = 29779155;

	t56 = ((x3445<x3446)%(x3447<<x3448));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3453 = 1U;
	int8_t x3454 = -4;
	volatile int16_t x3455 = 16270;
	uint8_t x3456 = 0U;
	int32_t t57 = 862282;

	t57 = ((x3453<x3454)%(x3455<<x3456));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3473 = -1;
	int64_t x3474 = INT64_MIN;
	uint32_t x3475 = 3260462U;
	volatile uint32_t t58 = 4U;

	t58 = ((x3473<x3474)%(x3475<<x3476));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3577 = -1274;
	volatile uint16_t x3579 = 1586U;
	uint64_t x3580 = 7LLU;
	static int32_t t59 = -125663272;

	t59 = ((x3577<x3578)%(x3579<<x3580));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3581 = 17U;
	int8_t x3582 = -1;
	uint8_t x3584 = 8U;
	static uint32_t t60 = 65190579U;

	t60 = ((x3581<x3582)%(x3583<<x3584));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3601 = 42U;
	static int32_t x3602 = INT32_MIN;
	static uint32_t x3603 = 37424597U;
	static uint8_t x3604 = 1U;
	volatile uint32_t t61 = 3741278U;

	t61 = ((x3601<x3602)%(x3603<<x3604));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3610 = 56U;
	volatile uint64_t x3611 = 4323883990LLU;
	volatile uint64_t t62 = 17171340552LLU;

	t62 = ((x3609<x3610)%(x3611<<x3612));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3641 = 8224U;
	int16_t x3642 = INT16_MIN;
	static volatile uint32_t t63 = 21160203U;

	t63 = ((x3641<x3642)%(x3643<<x3644));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3709 = 0U;
	uint16_t x3710 = 0U;
	int8_t x3711 = 37;
	uint16_t x3712 = 1U;
	int32_t t64 = 23584;

	t64 = ((x3709<x3710)%(x3711<<x3712));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3729 = INT16_MIN;
	static int16_t x3730 = -1499;
	static uint32_t x3731 = UINT32_MAX;
	static uint8_t x3732 = 0U;
	uint32_t t65 = 55814U;

	t65 = ((x3729<x3730)%(x3731<<x3732));

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3810 = INT32_MIN;
	int64_t x3811 = 30843LL;
	int32_t x3812 = 8;
	int64_t t66 = 19887477708LL;

	t66 = ((x3809<x3810)%(x3811<<x3812));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4141 = INT8_MIN;
	int16_t x4143 = INT16_MAX;
	volatile int32_t t67 = -221;

	t67 = ((x4141<x4142)%(x4143<<x4144));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4174 = -1;
	uint8_t x4175 = 12U;
	int16_t x4176 = 1;
	volatile int32_t t68 = 228605;

	t68 = ((x4173<x4174)%(x4175<<x4176));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4195 = 11U;
	volatile uint32_t t69 = 557200688U;

	t69 = ((x4193<x4194)%(x4195<<x4196));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4217 = 506383040LLU;
	int32_t x4218 = INT32_MAX;
	int32_t x4219 = 1;
	int8_t x4220 = 15;
	int32_t t70 = -1;

	t70 = ((x4217<x4218)%(x4219<<x4220));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4253 = INT16_MAX;
	uint8_t x4254 = UINT8_MAX;
	int32_t x4255 = INT32_MAX;
	int32_t x4256 = 0;
	int32_t t71 = 178;

	t71 = ((x4253<x4254)%(x4255<<x4256));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4341 = INT16_MAX;
	uint8_t x4344 = 5U;
	uint32_t t72 = 28U;

	t72 = ((x4341<x4342)%(x4343<<x4344));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4433 = 10;
	int32_t x4434 = INT32_MAX;
	int32_t x4435 = 11;
	static volatile int32_t t73 = 1310962;

	t73 = ((x4433<x4434)%(x4435<<x4436));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4549 = 364;
	int8_t x4550 = INT8_MIN;
	uint8_t x4551 = 13U;
	static int32_t t74 = 31;

	t74 = ((x4549<x4550)%(x4551<<x4552));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x4597 = 5U;
	uint64_t x4598 = UINT64_MAX;
	volatile uint8_t x4599 = 60U;
	int16_t x4600 = 0;
	int32_t t75 = 7;

	t75 = ((x4597<x4598)%(x4599<<x4600));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4665 = 786256945LLU;
	int16_t x4666 = -842;
	volatile uint16_t x4667 = 711U;
	static int16_t x4668 = 6;

	t76 = ((x4665<x4666)%(x4667<<x4668));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4693 = INT64_MIN;
	volatile int8_t x4694 = INT8_MIN;
	static uint8_t x4695 = 2U;
	volatile int16_t x4696 = 6;
	static int32_t t77 = -39859;

	t77 = ((x4693<x4694)%(x4695<<x4696));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4913 = 910U;
	static int8_t x4914 = INT8_MIN;
	static uint64_t x4915 = 3066873943950633193LLU;
	uint16_t x4916 = 30U;

	t78 = ((x4913<x4914)%(x4915<<x4916));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4973 = -125843985206LL;
	int32_t x4974 = INT32_MAX;
	int16_t x4975 = 5;
	static int32_t x4976 = 6;
	volatile int32_t t79 = -532298;

	t79 = ((x4973<x4974)%(x4975<<x4976));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5065 = UINT64_MAX;
	int8_t x5066 = 2;
	static uint32_t x5067 = 40092U;
	uint8_t x5068 = 4U;
	uint32_t t80 = 1296527604U;

	t80 = ((x5065<x5066)%(x5067<<x5068));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5085 = INT32_MIN;
	int8_t x5086 = INT8_MIN;
	int8_t x5088 = 2;
	volatile int32_t t81 = -31;

	t81 = ((x5085<x5086)%(x5087<<x5088));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5089 = -15;
	int64_t x5090 = -1LL;
	uint8_t x5092 = 8U;

	t82 = ((x5089<x5090)%(x5091<<x5092));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5161 = 13U;
	int8_t x5162 = -58;
	static int64_t x5163 = 2360894LL;
	volatile int64_t t83 = 9597285135286LL;

	t83 = ((x5161<x5162)%(x5163<<x5164));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5205 = 1008707U;
	uint8_t x5206 = 8U;
	int64_t x5207 = 891085973LL;
	int64_t x5208 = 7LL;
	volatile int64_t t84 = -2748639757LL;

	t84 = ((x5205<x5206)%(x5207<<x5208));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5269 = -1;
	int64_t x5270 = 10LL;
	uint8_t x5271 = 81U;
	uint32_t x5272 = 11U;
	int32_t t85 = -265561;

	t85 = ((x5269<x5270)%(x5271<<x5272));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5313 = 4037LL;
	uint64_t x5314 = 44602866819LLU;
	uint8_t x5316 = 2U;
	int32_t t86 = 541784723;

	t86 = ((x5313<x5314)%(x5315<<x5316));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5353 = INT16_MAX;
	int8_t x5354 = 10;
	uint64_t x5355 = UINT64_MAX;
	int8_t x5356 = 1;
	volatile uint64_t t87 = 9152LLU;

	t87 = ((x5353<x5354)%(x5355<<x5356));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x5377 = 3;
	volatile uint32_t x5379 = 5775U;
	uint32_t x5380 = 4U;

	t88 = ((x5377<x5378)%(x5379<<x5380));

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5418 = -406;
	volatile int32_t t89 = -1;

	t89 = ((x5417<x5418)%(x5419<<x5420));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5429 = INT32_MIN;
	int8_t x5430 = INT8_MIN;
	volatile uint16_t x5432 = 8U;

	t90 = ((x5429<x5430)%(x5431<<x5432));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5437 = INT32_MAX;
	uint32_t x5440 = 0U;

	t91 = ((x5437<x5438)%(x5439<<x5440));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5489 = INT16_MAX;
	uint64_t x5490 = 13282999951264LLU;
	int16_t x5491 = INT16_MAX;
	volatile int32_t t92 = -1;

	t92 = ((x5489<x5490)%(x5491<<x5492));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x5569 = 5956U;
	static int64_t x5570 = 1077289184511LL;
	static uint16_t x5571 = 14646U;
	static uint8_t x5572 = 13U;

	t93 = ((x5569<x5570)%(x5571<<x5572));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5653 = 6;
	uint32_t x5654 = UINT32_MAX;
	uint32_t x5656 = 13U;

	t94 = ((x5653<x5654)%(x5655<<x5656));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5657 = 1;
	int64_t x5659 = INT64_MAX;
	static int16_t x5660 = 0;

	t95 = ((x5657<x5658)%(x5659<<x5660));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5692 = 3U;
	static volatile uint32_t t96 = 519314U;

	t96 = ((x5689<x5690)%(x5691<<x5692));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5749 = 1;
	uint64_t x5750 = 8822286988575944LLU;
	uint32_t x5751 = 1556U;
	uint8_t x5752 = 14U;
	volatile uint32_t t97 = 527U;

	t97 = ((x5749<x5750)%(x5751<<x5752));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x5789 = -1;
	uint32_t x5790 = 14081233U;
	int8_t x5791 = 2;
	static uint32_t x5792 = 1U;
	static volatile int32_t t98 = -6;

	t98 = ((x5789<x5790)%(x5791<<x5792));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5805 = UINT64_MAX;
	int32_t x5806 = INT32_MIN;
	uint16_t x5807 = 928U;
	int32_t t99 = -24;

	t99 = ((x5805<x5806)%(x5807<<x5808));

	if (t99 != 0) { NG(); } else { ; }
	
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


    return 0;
}

