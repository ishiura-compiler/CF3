#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x68 = UINT32_MAX;
int8_t x209 = INT8_MAX;
int16_t x210 = INT16_MIN;
volatile uint64_t x321 = UINT64_MAX;
volatile int32_t t3 = -253864552;
volatile int64_t x349 = INT64_MAX;
int8_t x379 = -13;
volatile int32_t t5 = -6;
int16_t x511 = -1;
int64_t x512 = -1LL;
static volatile uint32_t x522 = 130699U;
volatile int8_t x541 = -1;
uint16_t x542 = 3U;
static volatile int32_t x543 = INT32_MIN;
int8_t x576 = -1;
static uint64_t x649 = 120869133573391268LLU;
volatile int8_t x705 = -5;
volatile int32_t t14 = -2;
int8_t x727 = -1;
int32_t t16 = -32399602;
int64_t x843 = INT64_MIN;
volatile int32_t t18 = 6388060;
int32_t t20 = -984;
int8_t x977 = -36;
int64_t x978 = INT64_MIN;
volatile int32_t t21 = -158731523;
int8_t x1057 = INT8_MAX;
volatile int32_t t22 = 164700;
uint8_t x1097 = 21U;
int16_t x1303 = -11;
static volatile int8_t x1455 = -1;
volatile int32_t t26 = -870;
int16_t x1578 = -3338;
static uint16_t x1582 = UINT16_MAX;
int16_t x1734 = -1;
static volatile int32_t t31 = 2;
static uint64_t x1856 = UINT64_MAX;
int32_t t32 = 15025551;
int16_t x1969 = -1;
static int8_t x1971 = -5;
static int16_t x1972 = -2;
volatile int32_t t36 = 14;
uint16_t x2300 = 11U;
int64_t x2509 = 291628278739574145LL;
int64_t x2510 = INT64_MIN;
int32_t x2530 = INT32_MIN;
volatile int8_t x2531 = INT8_MIN;
volatile uint8_t x2637 = 2U;
static uint64_t x2639 = 7LLU;
int8_t x2796 = -1;
int32_t x2840 = -1;
static uint32_t x2967 = UINT32_MAX;
uint32_t x2968 = UINT32_MAX;
volatile int32_t t48 = -191;
uint64_t x3029 = 1741273388760310LLU;
static int16_t x3030 = INT16_MIN;
static uint8_t x3034 = UINT8_MAX;
static volatile uint64_t x3078 = 164184LLU;
static int32_t t52 = -66757;
int32_t x3135 = -1;
uint64_t x3137 = UINT64_MAX;
int32_t x3140 = INT32_MIN;
volatile int16_t x3208 = INT16_MIN;
volatile int8_t x3216 = -1;
volatile int8_t x3342 = -1;
volatile int16_t x3354 = INT16_MIN;
int16_t x3355 = -3;
int64_t x3394 = -517890027634331LL;
int8_t x3395 = -1;
uint32_t x3422 = 193U;
uint16_t x3570 = UINT16_MAX;
int8_t x3661 = 1;
int64_t x3663 = -1LL;
volatile int32_t t69 = -59969;
int8_t x3855 = -1;
static uint8_t x3875 = 3U;
uint8_t x3937 = 1U;
volatile int8_t x4055 = -12;
uint64_t x4056 = UINT64_MAX;
static int32_t t78 = 0;
static volatile int32_t t79 = -355583147;
volatile int64_t x4366 = -1LL;
uint8_t x4367 = 29U;
volatile int16_t x4487 = -1;
volatile int32_t t83 = 469895056;
uint64_t x4559 = UINT64_MAX;
volatile int32_t x4560 = -1;
int32_t t84 = 46389534;
uint32_t x4623 = UINT32_MAX;
volatile uint64_t x4676 = UINT64_MAX;
static int32_t x4827 = -1;
static uint32_t x5058 = UINT32_MAX;
int16_t x5072 = -3;
uint64_t x5149 = UINT64_MAX;
uint16_t x5249 = 60U;
volatile uint8_t x5296 = 3U;
int32_t t97 = 5080;
int32_t t99 = -14977615;


void f0(void) {
	int16_t x65 = INT16_MAX;
	int64_t x66 = INT64_MIN;
	uint32_t x67 = UINT32_MAX;
	int32_t t0 = -37870942;

	t0 = ((x65<x66)>>(x67^x68));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x89 = 12;
	uint32_t x90 = 753283842U;
	int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MIN;
	volatile int32_t t1 = -3385;

	t1 = ((x89<x90)>>(x91^x92));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x211 = -1;
	int64_t x212 = -1LL;
	int32_t t2 = -244946;

	t2 = ((x209<x210)>>(x211^x212));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x322 = 6U;
	uint16_t x323 = UINT16_MAX;
	static uint16_t x324 = UINT16_MAX;

	t3 = ((x321<x322)>>(x323^x324));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x350 = INT64_MIN;
	volatile int8_t x351 = -8;
	int32_t x352 = -1;
	volatile int32_t t4 = -205648;

	t4 = ((x349<x350)>>(x351^x352));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x377 = UINT8_MAX;
	volatile int8_t x378 = -1;
	uint32_t x380 = UINT32_MAX;

	t5 = ((x377<x378)>>(x379^x380));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x509 = 52930536418030919LL;
	uint64_t x510 = UINT64_MAX;
	int32_t t6 = -818514895;

	t6 = ((x509<x510)>>(x511^x512));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x521 = 115;
	static uint64_t x523 = UINT64_MAX;
	volatile int64_t x524 = -1LL;
	int32_t t7 = 1649;

	t7 = ((x521<x522)>>(x523^x524));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x544 = INT32_MIN;
	volatile int32_t t8 = 128448;

	t8 = ((x541<x542)>>(x543^x544));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x573 = 3737801LL;
	int16_t x574 = -311;
	int8_t x575 = -1;
	int32_t t9 = -419;

	t9 = ((x573<x574)>>(x575^x576));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x589 = INT32_MAX;
	int16_t x590 = 645;
	int8_t x591 = -1;
	int16_t x592 = -1;
	volatile int32_t t10 = 1495;

	t10 = ((x589<x590)>>(x591^x592));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x650 = UINT16_MAX;
	volatile int8_t x651 = -1;
	int16_t x652 = -1;
	int32_t t11 = -53;

	t11 = ((x649<x650)>>(x651^x652));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x677 = INT32_MAX;
	int16_t x678 = -30;
	int32_t x679 = -1;
	int64_t x680 = -1LL;
	int32_t t12 = 63788987;

	t12 = ((x677<x678)>>(x679^x680));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x681 = UINT64_MAX;
	int16_t x682 = INT16_MIN;
	static int8_t x683 = -22;
	int8_t x684 = -1;
	static int32_t t13 = -281373208;

	t13 = ((x681<x682)>>(x683^x684));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x706 = INT16_MIN;
	int16_t x707 = -1;
	static int64_t x708 = -1LL;

	t14 = ((x705<x706)>>(x707^x708));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x725 = INT64_MAX;
	volatile int8_t x726 = INT8_MIN;
	static int8_t x728 = -1;
	int32_t t15 = 415073361;

	t15 = ((x725<x726)>>(x727^x728));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x789 = 504288U;
	int32_t x790 = INT32_MIN;
	int32_t x791 = -1;
	int64_t x792 = -1LL;

	t16 = ((x789<x790)>>(x791^x792));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x825 = 19U;
	int8_t x826 = -1;
	uint8_t x827 = 6U;
	static uint64_t x828 = 6LLU;
	volatile int32_t t17 = -1;

	t17 = ((x825<x826)>>(x827^x828));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x841 = 0U;
	uint64_t x842 = 277749530LLU;
	volatile int64_t x844 = INT64_MIN;

	t18 = ((x841<x842)>>(x843^x844));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x905 = -545558142035676259LL;
	int8_t x906 = INT8_MIN;
	volatile int16_t x907 = INT16_MIN;
	int16_t x908 = INT16_MIN;
	volatile int32_t t19 = 0;

	t19 = ((x905<x906)>>(x907^x908));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x909 = -1LL;
	int16_t x910 = INT16_MIN;
	int8_t x911 = INT8_MAX;
	uint8_t x912 = 122U;

	t20 = ((x909<x910)>>(x911^x912));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x979 = INT64_MIN;
	int64_t x980 = INT64_MIN;

	t21 = ((x977<x978)>>(x979^x980));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1058 = 83037727U;
	int32_t x1059 = -1;
	int8_t x1060 = -1;

	t22 = ((x1057<x1058)>>(x1059^x1060));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1098 = -1;
	static uint32_t x1099 = UINT32_MAX;
	int16_t x1100 = -4;
	int32_t t23 = 83;

	t23 = ((x1097<x1098)>>(x1099^x1100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1117 = 0;
	uint16_t x1118 = UINT16_MAX;
	static volatile int16_t x1119 = 5;
	volatile uint64_t x1120 = 19LLU;
	static int32_t t24 = 16936965;

	t24 = ((x1117<x1118)>>(x1119^x1120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x1301 = 29U;
	static uint32_t x1302 = 2471U;
	int8_t x1304 = -1;
	int32_t t25 = -24;

	t25 = ((x1301<x1302)>>(x1303^x1304));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1453 = -1;
	int8_t x1454 = INT8_MIN;
	static volatile uint64_t x1456 = UINT64_MAX;

	t26 = ((x1453<x1454)>>(x1455^x1456));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1577 = INT32_MIN;
	static uint64_t x1579 = UINT64_MAX;
	int8_t x1580 = -1;
	int32_t t27 = 464890140;

	t27 = ((x1577<x1578)>>(x1579^x1580));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1581 = INT32_MAX;
	uint16_t x1583 = 20U;
	volatile uint16_t x1584 = 9U;
	volatile int32_t t28 = 2;

	t28 = ((x1581<x1582)>>(x1583^x1584));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1637 = -47;
	volatile int16_t x1638 = INT16_MAX;
	volatile int8_t x1639 = -30;
	volatile uint64_t x1640 = UINT64_MAX;
	volatile int32_t t29 = 8396;

	t29 = ((x1637<x1638)>>(x1639^x1640));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1669 = INT16_MAX;
	uint32_t x1670 = 13261629U;
	volatile uint32_t x1671 = UINT32_MAX;
	int8_t x1672 = -15;
	static volatile int32_t t30 = 3832;

	t30 = ((x1669<x1670)>>(x1671^x1672));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1733 = INT64_MIN;
	uint64_t x1735 = UINT64_MAX;
	static int16_t x1736 = -1;

	t31 = ((x1733<x1734)>>(x1735^x1736));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1853 = INT8_MIN;
	int8_t x1854 = -30;
	int64_t x1855 = -1LL;

	t32 = ((x1853<x1854)>>(x1855^x1856));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x1970 = 139439U;
	volatile int32_t t33 = 223;

	t33 = ((x1969<x1970)>>(x1971^x1972));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1977 = INT16_MIN;
	volatile int32_t x1978 = INT32_MIN;
	int16_t x1979 = 11;
	volatile int16_t x1980 = 1;
	volatile int32_t t34 = -67598;

	t34 = ((x1977<x1978)>>(x1979^x1980));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2009 = INT32_MAX;
	int8_t x2010 = INT8_MIN;
	int32_t x2011 = -1;
	static uint64_t x2012 = UINT64_MAX;
	int32_t t35 = -111295;

	t35 = ((x2009<x2010)>>(x2011^x2012));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2053 = UINT64_MAX;
	int8_t x2054 = -1;
	int8_t x2055 = -7;
	int16_t x2056 = -1;

	t36 = ((x2053<x2054)>>(x2055^x2056));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x2169 = -1;
	static volatile int16_t x2170 = -1;
	static int8_t x2171 = INT8_MIN;
	int8_t x2172 = INT8_MIN;
	int32_t t37 = -57761443;

	t37 = ((x2169<x2170)>>(x2171^x2172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x2297 = INT16_MAX;
	int32_t x2298 = INT32_MIN;
	static uint8_t x2299 = 4U;
	int32_t t38 = 743675209;

	t38 = ((x2297<x2298)>>(x2299^x2300));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2401 = 425057908523027LL;
	int8_t x2402 = -3;
	volatile uint64_t x2403 = UINT64_MAX;
	int8_t x2404 = -20;
	static int32_t t39 = 13031;

	t39 = ((x2401<x2402)>>(x2403^x2404));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2511 = INT16_MAX;
	static int16_t x2512 = INT16_MAX;
	volatile int32_t t40 = -1660746;

	t40 = ((x2509<x2510)>>(x2511^x2512));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x2529 = 408U;
	int8_t x2532 = INT8_MIN;
	int32_t t41 = -8386707;

	t41 = ((x2529<x2530)>>(x2531^x2532));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2561 = INT32_MIN;
	static volatile int64_t x2562 = INT64_MIN;
	int32_t x2563 = -1;
	int16_t x2564 = -19;
	static volatile int32_t t42 = 1;

	t42 = ((x2561<x2562)>>(x2563^x2564));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2638 = 2;
	int8_t x2640 = 22;
	static int32_t t43 = 0;

	t43 = ((x2637<x2638)>>(x2639^x2640));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2661 = 20768LL;
	int8_t x2662 = INT8_MIN;
	volatile uint64_t x2663 = UINT64_MAX;
	int64_t x2664 = -1LL;
	volatile int32_t t44 = 126;

	t44 = ((x2661<x2662)>>(x2663^x2664));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2793 = -1;
	volatile int16_t x2794 = INT16_MAX;
	int16_t x2795 = -1;
	volatile int32_t t45 = 18;

	t45 = ((x2793<x2794)>>(x2795^x2796));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2837 = INT64_MAX;
	static uint32_t x2838 = 369054U;
	uint32_t x2839 = UINT32_MAX;
	static int32_t t46 = -876;

	t46 = ((x2837<x2838)>>(x2839^x2840));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x2957 = UINT16_MAX;
	int32_t x2958 = INT32_MIN;
	static uint32_t x2959 = UINT32_MAX;
	volatile int16_t x2960 = -1;
	volatile int32_t t47 = 2258908;

	t47 = ((x2957<x2958)>>(x2959^x2960));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2965 = -15325432;
	uint8_t x2966 = 6U;

	t48 = ((x2965<x2966)>>(x2967^x2968));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3031 = 12;
	uint32_t x3032 = 1U;
	static volatile int32_t t49 = 237831318;

	t49 = ((x3029<x3030)>>(x3031^x3032));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x3033 = 222LLU;
	static int16_t x3035 = -1;
	static int64_t x3036 = -1LL;
	volatile int32_t t50 = -255;

	t50 = ((x3033<x3034)>>(x3035^x3036));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3077 = 175220220;
	int8_t x3079 = INT8_MIN;
	int8_t x3080 = INT8_MIN;
	static volatile int32_t t51 = -27;

	t51 = ((x3077<x3078)>>(x3079^x3080));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3129 = 1;
	uint8_t x3130 = UINT8_MAX;
	uint8_t x3131 = UINT8_MAX;
	uint8_t x3132 = UINT8_MAX;

	t52 = ((x3129<x3130)>>(x3131^x3132));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x3133 = 116929351798865387LLU;
	int16_t x3134 = INT16_MIN;
	static uint32_t x3136 = UINT32_MAX;
	volatile int32_t t53 = 7104;

	t53 = ((x3133<x3134)>>(x3135^x3136));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3138 = -1;
	int32_t x3139 = INT32_MIN;
	int32_t t54 = 1001842;

	t54 = ((x3137<x3138)>>(x3139^x3140));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3205 = INT64_MAX;
	uint64_t x3206 = 53LLU;
	int16_t x3207 = INT16_MIN;
	static int32_t t55 = 114080;

	t55 = ((x3205<x3206)>>(x3207^x3208));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3213 = UINT32_MAX;
	uint64_t x3214 = 15095077123LLU;
	int8_t x3215 = -1;
	volatile int32_t t56 = 472184;

	t56 = ((x3213<x3214)>>(x3215^x3216));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3313 = INT16_MIN;
	static int64_t x3314 = INT64_MIN;
	uint64_t x3315 = 8LLU;
	volatile int8_t x3316 = 0;
	int32_t t57 = -1875203;

	t57 = ((x3313<x3314)>>(x3315^x3316));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x3341 = 337183LLU;
	int8_t x3343 = -1;
	int64_t x3344 = -1LL;
	volatile int32_t t58 = 1900;

	t58 = ((x3341<x3342)>>(x3343^x3344));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3353 = INT32_MAX;
	uint64_t x3356 = UINT64_MAX;
	static int32_t t59 = -7794574;

	t59 = ((x3353<x3354)>>(x3355^x3356));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3393 = INT64_MIN;
	static volatile uint32_t x3396 = UINT32_MAX;
	static volatile int32_t t60 = -279385312;

	t60 = ((x3393<x3394)>>(x3395^x3396));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3421 = INT8_MIN;
	int64_t x3423 = -1LL;
	int64_t x3424 = -1LL;
	volatile int32_t t61 = 0;

	t61 = ((x3421<x3422)>>(x3423^x3424));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3517 = UINT16_MAX;
	static uint16_t x3518 = UINT16_MAX;
	uint8_t x3519 = 12U;
	uint32_t x3520 = 3U;
	static volatile int32_t t62 = 320237333;

	t62 = ((x3517<x3518)>>(x3519^x3520));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3569 = INT64_MAX;
	static int8_t x3571 = 6;
	uint8_t x3572 = 6U;
	volatile int32_t t63 = 33611;

	t63 = ((x3569<x3570)>>(x3571^x3572));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x3585 = 20U;
	int16_t x3586 = 16;
	int8_t x3587 = -3;
	static int8_t x3588 = -1;
	volatile int32_t t64 = 18309542;

	t64 = ((x3585<x3586)>>(x3587^x3588));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3641 = 95753U;
	uint8_t x3642 = 1U;
	uint64_t x3643 = 5LLU;
	int16_t x3644 = 19;
	int32_t t65 = -2;

	t65 = ((x3641<x3642)>>(x3643^x3644));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3653 = 25262U;
	int8_t x3654 = -1;
	volatile int8_t x3655 = -4;
	volatile int64_t x3656 = -1LL;
	int32_t t66 = -114527;

	t66 = ((x3653<x3654)>>(x3655^x3656));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3662 = INT8_MIN;
	int64_t x3664 = -1LL;
	static int32_t t67 = 790;

	t67 = ((x3661<x3662)>>(x3663^x3664));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3793 = 53009LL;
	uint16_t x3794 = 17757U;
	int8_t x3795 = -1;
	int32_t x3796 = -1;
	volatile int32_t t68 = 5013174;

	t68 = ((x3793<x3794)>>(x3795^x3796));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3797 = -1;
	int8_t x3798 = INT8_MIN;
	int32_t x3799 = -1;
	uint32_t x3800 = UINT32_MAX;

	t69 = ((x3797<x3798)>>(x3799^x3800));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3833 = INT32_MIN;
	uint32_t x3834 = 865U;
	static int32_t x3835 = -1;
	static int64_t x3836 = -1LL;
	int32_t t70 = -1;

	t70 = ((x3833<x3834)>>(x3835^x3836));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x3845 = UINT8_MAX;
	int32_t x3846 = -8829833;
	int64_t x3847 = -1LL;
	int16_t x3848 = -1;
	int32_t t71 = 14;

	t71 = ((x3845<x3846)>>(x3847^x3848));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3853 = -1;
	int32_t x3854 = 3952432;
	int64_t x3856 = -1LL;
	volatile int32_t t72 = -15;

	t72 = ((x3853<x3854)>>(x3855^x3856));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x3873 = 9335041U;
	volatile int64_t x3874 = -1LL;
	static uint16_t x3876 = 25U;
	static volatile int32_t t73 = 8228880;

	t73 = ((x3873<x3874)>>(x3875^x3876));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x3889 = 5096U;
	volatile int64_t x3890 = -1LL;
	uint16_t x3891 = 8U;
	uint8_t x3892 = 2U;
	volatile int32_t t74 = 821513951;

	t74 = ((x3889<x3890)>>(x3891^x3892));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x3938 = INT64_MIN;
	uint8_t x3939 = 2U;
	static int32_t x3940 = 1;
	volatile int32_t t75 = 881403107;

	t75 = ((x3937<x3938)>>(x3939^x3940));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3957 = -1629759085121LL;
	static uint32_t x3958 = 1164U;
	static uint64_t x3959 = UINT64_MAX;
	int32_t x3960 = -1;
	int32_t t76 = -15205814;

	t76 = ((x3957<x3958)>>(x3959^x3960));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4013 = 36;
	volatile int8_t x4014 = -2;
	int16_t x4015 = 252;
	static uint8_t x4016 = UINT8_MAX;
	int32_t t77 = 166;

	t77 = ((x4013<x4014)>>(x4015^x4016));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4053 = 9993185U;
	int32_t x4054 = INT32_MAX;

	t78 = ((x4053<x4054)>>(x4055^x4056));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x4157 = 1U;
	int32_t x4158 = -1;
	uint16_t x4159 = 14U;
	uint8_t x4160 = 6U;

	t79 = ((x4157<x4158)>>(x4159^x4160));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4221 = -1;
	int32_t x4222 = 7729959;
	int8_t x4223 = 17;
	int8_t x4224 = 0;
	int32_t t80 = 90480121;

	t80 = ((x4221<x4222)>>(x4223^x4224));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4265 = INT64_MAX;
	uint64_t x4266 = 1LLU;
	uint16_t x4267 = 40U;
	uint8_t x4268 = 60U;
	volatile int32_t t81 = -1;

	t81 = ((x4265<x4266)>>(x4267^x4268));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x4365 = -1;
	uint16_t x4368 = 1U;
	volatile int32_t t82 = -3;

	t82 = ((x4365<x4366)>>(x4367^x4368));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4485 = 6000LL;
	int16_t x4486 = -1;
	int8_t x4488 = -1;

	t83 = ((x4485<x4486)>>(x4487^x4488));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4557 = -1;
	static uint32_t x4558 = UINT32_MAX;

	t84 = ((x4557<x4558)>>(x4559^x4560));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4577 = -20203437;
	static int8_t x4578 = INT8_MIN;
	uint32_t x4579 = 1U;
	int8_t x4580 = 0;
	static volatile int32_t t85 = 692;

	t85 = ((x4577<x4578)>>(x4579^x4580));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4621 = 509327410U;
	static int64_t x4622 = INT64_MIN;
	volatile int32_t x4624 = -1;
	int32_t t86 = -16191148;

	t86 = ((x4621<x4622)>>(x4623^x4624));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x4673 = INT64_MIN;
	static int16_t x4674 = 0;
	int64_t x4675 = -1LL;
	volatile int32_t t87 = -9347823;

	t87 = ((x4673<x4674)>>(x4675^x4676));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x4825 = -1;
	uint32_t x4826 = 13U;
	volatile int8_t x4828 = -1;
	int32_t t88 = 1206120;

	t88 = ((x4825<x4826)>>(x4827^x4828));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x4985 = 4U;
	int32_t x4986 = -1;
	static int32_t x4987 = INT32_MIN;
	static int32_t x4988 = INT32_MIN;
	int32_t t89 = 503493021;

	t89 = ((x4985<x4986)>>(x4987^x4988));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5045 = -4108;
	int64_t x5046 = INT64_MAX;
	volatile int16_t x5047 = -11;
	uint64_t x5048 = UINT64_MAX;
	int32_t t90 = 48;

	t90 = ((x5045<x5046)>>(x5047^x5048));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x5057 = 61U;
	int8_t x5059 = INT8_MAX;
	volatile int8_t x5060 = INT8_MAX;
	int32_t t91 = -551;

	t91 = ((x5057<x5058)>>(x5059^x5060));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x5069 = -1LL;
	uint32_t x5070 = UINT32_MAX;
	static volatile int16_t x5071 = -1;
	static int32_t t92 = 121019900;

	t92 = ((x5069<x5070)>>(x5071^x5072));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x5145 = 53;
	static uint64_t x5146 = UINT64_MAX;
	uint64_t x5147 = 1LLU;
	static int8_t x5148 = 0;
	volatile int32_t t93 = -86136621;

	t93 = ((x5145<x5146)>>(x5147^x5148));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x5150 = INT16_MIN;
	int32_t x5151 = 1;
	volatile uint32_t x5152 = 1U;
	volatile int32_t t94 = -73514992;

	t94 = ((x5149<x5150)>>(x5151^x5152));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5250 = -1;
	volatile int32_t x5251 = INT32_MIN;
	static volatile int32_t x5252 = INT32_MIN;
	static volatile int32_t t95 = 257;

	t95 = ((x5249<x5250)>>(x5251^x5252));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5261 = 32;
	volatile int8_t x5262 = -21;
	volatile int8_t x5263 = -51;
	int8_t x5264 = -55;
	volatile int32_t t96 = -89185;

	t96 = ((x5261<x5262)>>(x5263^x5264));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5293 = INT16_MIN;
	volatile int32_t x5294 = -6577;
	int8_t x5295 = 2;

	t97 = ((x5293<x5294)>>(x5295^x5296));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x5361 = INT8_MAX;
	static uint32_t x5362 = 0U;
	int16_t x5363 = 1;
	uint8_t x5364 = 1U;
	volatile int32_t t98 = -2866;

	t98 = ((x5361<x5362)>>(x5363^x5364));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x5389 = -1LL;
	int8_t x5390 = INT8_MIN;
	int32_t x5391 = INT32_MIN;
	int32_t x5392 = INT32_MIN;

	t99 = ((x5389<x5390)>>(x5391^x5392));

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

