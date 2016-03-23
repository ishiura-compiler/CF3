
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

static int16_t x457 = 0;
static volatile uint16_t x458 = 12U;
volatile int32_t t5 = 95981785;
uint8_t x586 = 0U;
uint32_t t8 = 1U;
uint32_t x611 = UINT32_MAX;
volatile int32_t t12 = -29;
uint32_t x850 = 1U;
int16_t x851 = -2023;
int32_t x1000 = -1;
static int64_t x1027 = -1LL;
uint32_t x1029 = UINT32_MAX;
uint8_t x1030 = 31U;
volatile uint32_t t16 = 0U;
int8_t x1222 = 5;
uint32_t x1325 = 3U;
static uint16_t x1422 = 5U;
uint64_t x1570 = 4LLU;
static int8_t x1609 = INT8_MAX;
uint32_t x1612 = 0U;
volatile int16_t x1726 = 5;
int16_t x1780 = -60;
int32_t t29 = -3520;
uint32_t x1997 = UINT32_MAX;
static volatile int16_t x2045 = INT16_MAX;
volatile uint32_t x2081 = 3U;
int16_t x2083 = INT16_MIN;
volatile int16_t x2162 = 0;
uint64_t x2173 = 26523747036LLU;
static int64_t x2188 = -20618969223759045LL;
int16_t x2207 = 0;
int32_t t37 = -157877;
static int16_t x2267 = 77;
static uint64_t x2313 = 631504181962LLU;
uint64_t t39 = 1465151551425124622LLU;
uint32_t t40 = 1U;
uint64_t x2389 = UINT64_MAX;
volatile int8_t x2415 = -8;
int16_t x2416 = -310;
static volatile uint32_t t43 = 3U;
int32_t x2457 = 217;
static int32_t t45 = 1734;
int32_t t49 = 707;
int8_t x2699 = INT8_MIN;
uint8_t x2718 = 2U;
int64_t x2720 = INT64_MIN;
uint32_t x2734 = 3U;
int32_t t53 = -122181;
volatile int64_t x2777 = INT64_MAX;
int16_t x2850 = 1;
int64_t t57 = 14712979LL;
volatile uint32_t x2952 = UINT32_MAX;
uint16_t x2989 = UINT16_MAX;
static volatile int16_t x3004 = INT16_MAX;
uint64_t t61 = 472855345305937742LLU;
int16_t x3121 = INT16_MAX;
int32_t x3315 = INT32_MIN;
volatile int16_t x3477 = 32;
int8_t x3478 = 24;
uint16_t x3480 = 15U;
int8_t x3503 = INT8_MIN;
volatile int8_t x3526 = 1;
volatile uint64_t t69 = 107016060803707LLU;
uint8_t x3568 = 1U;
uint64_t t70 = 3173026312567LLU;
int32_t x3588 = -1464;
volatile int32_t t71 = 6989;
int16_t x3605 = 5220;
int8_t x3606 = 1;
int32_t t72 = -1;
int64_t x3617 = 0LL;
int8_t x3618 = INT8_MAX;
uint8_t x3870 = 12U;
uint8_t x3879 = 0U;
static uint32_t t78 = 23129775U;
uint16_t x4073 = 712U;
int32_t t82 = -211349808;
static int8_t x4188 = INT8_MIN;
static int16_t x4270 = 0;
int16_t x4271 = INT16_MIN;
uint8_t x4272 = 27U;
uint64_t x4735 = 18680772374LLU;
int64_t x4763 = INT64_MAX;
uint64_t x4764 = UINT64_MAX;
int64_t x4784 = INT64_MIN;
static volatile uint64_t x4925 = 96093813LLU;
uint64_t t90 = 99282741362700081LLU;
uint16_t x4965 = UINT16_MAX;
static int8_t x5070 = 1;
uint16_t x5154 = 7U;
static uint64_t x5155 = UINT64_MAX;
uint64_t x5156 = 7741256095LLU;
uint16_t x5159 = 3784U;
volatile uint8_t x5401 = 0U;
volatile uint16_t x5485 = 0U;
int8_t x5534 = 5;
int8_t x5536 = 0;
uint32_t t104 = 4U;
int32_t t106 = -256172795;
uint8_t x5870 = 1U;
uint16_t x5871 = UINT16_MAX;
static volatile uint64_t t107 = 473683610LLU;
volatile int16_t x5981 = INT16_MAX;
volatile int8_t x5983 = -1;
int32_t t110 = 32270415;
int16_t x6103 = INT16_MIN;
volatile int64_t x6155 = INT64_MIN;
uint32_t x6285 = 3U;
uint32_t t119 = 492U;
int16_t x6317 = INT16_MAX;
int32_t x6340 = -1;
static volatile uint8_t x6409 = UINT8_MAX;
int64_t x6416 = 8374297785LL;
static uint32_t x6488 = UINT32_MAX;
uint32_t x6526 = 0U;
uint64_t x6527 = UINT64_MAX;
int32_t t126 = 488;
int64_t x6591 = INT64_MIN;
volatile uint64_t t128 = 930772LLU;
static uint32_t t132 = 62155U;
static volatile uint32_t x6765 = 2714U;
static volatile uint16_t x6767 = 9U;
uint16_t x6849 = UINT16_MAX;
int64_t x6895 = -488108LL;
uint32_t x6896 = UINT32_MAX;
int32_t t135 = 785;
int32_t x6912 = INT32_MIN;
int64_t x6954 = 1LL;
int8_t x7270 = 1;
int32_t t139 = -232;
volatile int16_t x7370 = 9;
volatile uint16_t x7372 = UINT16_MAX;
static uint16_t x7418 = 1U;
int16_t x7420 = INT16_MAX;
int32_t x7739 = 21667901;
volatile uint64_t x8083 = 17288380099912614LLU;
static int16_t x8169 = 1;
int64_t x8171 = 15536049465483LL;
static int32_t x8185 = 6577;
static int16_t x8289 = 13;
volatile int32_t x8337 = 118251856;
int16_t x8339 = INT16_MAX;
static uint64_t x8340 = 2684754678609514213LLU;
uint8_t x8353 = UINT8_MAX;
static int16_t x8354 = 4;
uint32_t t158 = UINT32_MAX;
uint64_t t162 = 103799805335LLU;
int64_t x8943 = INT64_MIN;
volatile int32_t t163 = 414411;
volatile int64_t x9164 = -1LL;
volatile uint8_t x9322 = 3U;
static volatile int32_t t166 = 41344644;
volatile uint32_t x9357 = 1138U;
int8_t x9711 = -1;
static volatile uint64_t t170 = 888057592983709LLU;
uint16_t x9761 = 4U;
uint8_t x9902 = 0U;
uint32_t t173 = 13493U;
static int64_t x10135 = -1LL;
int8_t x10182 = 0;
int64_t x10184 = -563LL;
int32_t t178 = 30875954;
uint8_t x10276 = 4U;
uint16_t x10298 = 1U;
volatile int16_t x10451 = INT16_MIN;
uint32_t t181 = 1749U;
int64_t x10488 = INT64_MAX;
static int64_t t182 = -496LL;
int8_t x10576 = INT8_MIN;
static volatile uint16_t x10657 = 44U;
uint8_t x10659 = 2U;
volatile int32_t t185 = -2205;
volatile int32_t x10861 = 21;
static int8_t x10878 = 14;
uint64_t x10916 = UINT64_MAX;
int32_t t190 = 214616;
static uint8_t x10962 = 6U;
uint16_t x11114 = 14U;
volatile int16_t x11142 = 1;
static int8_t x11143 = -1;
static int8_t x11370 = 0;
static int8_t x11519 = 0;
int64_t x11520 = -1LL;
volatile int32_t x11618 = 0;


void f0(void) {
    	uint32_t x73 = UINT32_MAX;
	static int8_t x74 = 30;
	volatile int64_t x75 = INT64_MIN;
	int64_t x76 = -8518LL;
	volatile uint32_t t0 = 29501U;

    t0 = (x73<<(x74>>(x75==x76)));

    if (t0 != 3221225472U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x101 = 3633U;
	int8_t x102 = 0;
	int8_t x103 = 0;
	int16_t x104 = 502;
	static int32_t t1 = -125747401;

    t1 = (x101<<(x102>>(x103==x104)));

    if (t1 != 3633) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x193 = INT8_MAX;
	uint32_t x194 = 3U;
	int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MAX;
	volatile int32_t t2 = -22;

    t2 = (x193<<(x194>>(x195==x196)));

    if (t2 != 1016) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x221 = 18;
	uint8_t x222 = 9U;
	int64_t x223 = -13335175605720885LL;
	volatile uint32_t x224 = UINT32_MAX;
	int32_t t3 = 57;

    t3 = (x221<<(x222>>(x223==x224)));

    if (t3 != 9216) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x381 = 21809LL;
	int16_t x382 = 1;
	uint16_t x383 = 2173U;
	static uint32_t x384 = 123397180U;
	int64_t t4 = 668046418947810734LL;

    t4 = (x381<<(x382>>(x383==x384)));

    if (t4 != 43618LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x459 = INT64_MIN;
	static int8_t x460 = -1;

    t5 = (x457<<(x458>>(x459==x460)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x513 = 48;
	uint32_t x514 = 18U;
	uint8_t x515 = 95U;
	int16_t x516 = 0;
	volatile int32_t t6 = -13915;

    t6 = (x513<<(x514>>(x515==x516)));

    if (t6 != 12582912) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x585 = INT64_MAX;
	uint64_t x587 = 1LLU;
	uint32_t x588 = 2842527U;
	volatile int64_t t7 = INT64_MAX;

    t7 = (x585<<(x586>>(x587==x588)));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x597 = 4U;
	uint8_t x598 = 31U;
	static int64_t x599 = INT64_MIN;
	static int16_t x600 = INT16_MIN;

    t8 = (x597<<(x598>>(x599==x600)));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x609 = 10U;
	uint16_t x610 = 2U;
	uint32_t x612 = 203U;
	volatile int32_t t9 = 2;

    t9 = (x609<<(x610>>(x611==x612)));

    if (t9 != 40) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x621 = 17U;
	uint16_t x622 = 6U;
	int32_t x623 = INT32_MIN;
	int64_t x624 = 124509229LL;
	volatile int32_t t10 = 989704153;

    t10 = (x621<<(x622>>(x623==x624)));

    if (t10 != 1088) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x625 = INT8_MAX;
	volatile int64_t x626 = 22LL;
	volatile uint8_t x627 = UINT8_MAX;
	static volatile int32_t x628 = -191214676;
	volatile int32_t t11 = 6022;

    t11 = (x625<<(x626>>(x627==x628)));

    if (t11 != 532676608) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x697 = 79;
	volatile int64_t x698 = 0LL;
	int32_t x699 = 1194;
	static int64_t x700 = -1LL;

    t12 = (x697<<(x698>>(x699==x700)));

    if (t12 != 79) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x849 = UINT32_MAX;
	uint16_t x852 = 44U;
	uint32_t t13 = 0U;

    t13 = (x849<<(x850>>(x851==x852)));

    if (t13 != 4294967294U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x997 = UINT16_MAX;
	int8_t x998 = 4;
	uint8_t x999 = 6U;
	static int32_t t14 = -22699781;

    t14 = (x997<<(x998>>(x999==x1000)));

    if (t14 != 1048560) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x1025 = 3254LLU;
	uint8_t x1026 = 23U;
	int64_t x1028 = INT64_MIN;
	uint64_t t15 = 1081936LLU;

    t15 = (x1025<<(x1026>>(x1027==x1028)));

    if (t15 != 27296530432LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x1031 = INT64_MIN;
	int8_t x1032 = -1;

    t16 = (x1029<<(x1030>>(x1031==x1032)));

    if (t16 != 2147483648U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x1221 = 816155;
	int16_t x1223 = INT16_MAX;
	int16_t x1224 = INT16_MAX;
	int32_t t17 = 108267807;

    t17 = (x1221<<(x1222>>(x1223==x1224)));

    if (t17 != 3264620) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1245 = 434;
	uint16_t x1246 = 15U;
	uint64_t x1247 = 3LLU;
	volatile int32_t x1248 = -1;
	int32_t t18 = -2381483;

    t18 = (x1245<<(x1246>>(x1247==x1248)));

    if (t18 != 14221312) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1257 = 56U;
	int64_t x1258 = 23LL;
	static volatile int16_t x1259 = INT16_MIN;
	static int64_t x1260 = INT64_MAX;
	static uint32_t t19 = 1355U;

    t19 = (x1257<<(x1258>>(x1259==x1260)));

    if (t19 != 469762048U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x1261 = 3803095952LLU;
	volatile int8_t x1262 = 1;
	int8_t x1263 = -21;
	static uint64_t x1264 = UINT64_MAX;
	uint64_t t20 = 24427LLU;

    t20 = (x1261<<(x1262>>(x1263==x1264)));

    if (t20 != 7606191904LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1293 = UINT16_MAX;
	int8_t x1294 = 4;
	static int16_t x1295 = INT16_MAX;
	volatile int32_t x1296 = -27;
	volatile int32_t t21 = 1713;

    t21 = (x1293<<(x1294>>(x1295==x1296)));

    if (t21 != 1048560) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1326 = 1;
	static int16_t x1327 = INT16_MIN;
	volatile int16_t x1328 = -1;
	uint32_t t22 = 983322U;

    t22 = (x1325<<(x1326>>(x1327==x1328)));

    if (t22 != 6U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1421 = UINT32_MAX;
	uint64_t x1423 = 420127LLU;
	uint8_t x1424 = 6U;
	uint32_t t23 = 3U;

    t23 = (x1421<<(x1422>>(x1423==x1424)));

    if (t23 != 4294967264U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x1569 = UINT32_MAX;
	int8_t x1571 = INT8_MIN;
	int64_t x1572 = INT64_MAX;
	uint32_t t24 = 77723U;

    t24 = (x1569<<(x1570>>(x1571==x1572)));

    if (t24 != 4294967280U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1589 = 31U;
	int8_t x1590 = 1;
	int16_t x1591 = -164;
	uint32_t x1592 = 2U;
	volatile int32_t t25 = -328;

    t25 = (x1589<<(x1590>>(x1591==x1592)));

    if (t25 != 62) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x1610 = 3U;
	static int16_t x1611 = INT16_MIN;
	int32_t t26 = 9;

    t26 = (x1609<<(x1610>>(x1611==x1612)));

    if (t26 != 1016) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1625 = INT8_MAX;
	int32_t x1626 = 4;
	static int64_t x1627 = -1277047601189948LL;
	uint8_t x1628 = 65U;
	int32_t t27 = -55;

    t27 = (x1625<<(x1626>>(x1627==x1628)));

    if (t27 != 2032) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1725 = 4018;
	uint16_t x1727 = UINT16_MAX;
	int32_t x1728 = INT32_MIN;
	volatile int32_t t28 = -115475;

    t28 = (x1725<<(x1726>>(x1727==x1728)));

    if (t28 != 128576) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x1777 = INT16_MAX;
	uint16_t x1778 = 6U;
	static int16_t x1779 = -1;

    t29 = (x1777<<(x1778>>(x1779==x1780)));

    if (t29 != 2097088) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x1977 = 3LLU;
	uint32_t x1978 = 2U;
	static volatile int8_t x1979 = INT8_MAX;
	static volatile uint64_t x1980 = 6888048355702863978LLU;
	uint64_t t30 = 2LLU;

    t30 = (x1977<<(x1978>>(x1979==x1980)));

    if (t30 != 12LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1998 = 6U;
	int16_t x1999 = -1;
	static int64_t x2000 = INT64_MIN;
	volatile uint32_t t31 = 47U;

    t31 = (x1997<<(x1998>>(x1999==x2000)));

    if (t31 != 4294967232U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x2046 = 5U;
	uint16_t x2047 = 16074U;
	uint32_t x2048 = 6118941U;
	static int32_t t32 = 64046911;

    t32 = (x2045<<(x2046>>(x2047==x2048)));

    if (t32 != 1048544) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x2082 = 14LLU;
	int16_t x2084 = 157;
	volatile uint32_t t33 = 3081932U;

    t33 = (x2081<<(x2082>>(x2083==x2084)));

    if (t33 != 49152U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x2161 = UINT16_MAX;
	volatile int16_t x2163 = INT16_MIN;
	volatile int64_t x2164 = -1080100047944551LL;
	int32_t t34 = 481651316;

    t34 = (x2161<<(x2162>>(x2163==x2164)));

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x2174 = 58U;
	static int16_t x2175 = 2;
	volatile uint16_t x2176 = 0U;
	static volatile uint64_t t35 = 313443186572LLU;

    t35 = (x2173<<(x2174>>(x2175==x2176)));

    if (t35 != 8070450532247928832LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x2185 = 4079632;
	uint8_t x2186 = 9U;
	static uint32_t x2187 = 774336U;
	int32_t t36 = 37490501;

    t36 = (x2185<<(x2186>>(x2187==x2188)));

    if (t36 != 2088771584) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x2205 = INT16_MAX;
	int16_t x2206 = 1;
	uint32_t x2208 = 2668951U;

    t37 = (x2205<<(x2206>>(x2207==x2208)));

    if (t37 != 65534) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x2265 = 3946734LL;
	uint32_t x2266 = 8U;
	int32_t x2268 = INT32_MIN;
	int64_t t38 = -34836LL;

    t38 = (x2265<<(x2266>>(x2267==x2268)));

    if (t38 != 1010363904LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x2314 = 0;
	uint16_t x2315 = UINT16_MAX;
	int32_t x2316 = -1;

    t39 = (x2313<<(x2314>>(x2315==x2316)));

    if (t39 != 631504181962LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x2365 = 2003630325U;
	static int32_t x2366 = 9;
	uint64_t x2367 = UINT64_MAX;
	int64_t x2368 = INT64_MIN;

    t40 = (x2365<<(x2366>>(x2367==x2368)));

    if (t40 != 3656509952U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x2390 = 2U;
	volatile uint8_t x2391 = 13U;
	volatile int8_t x2392 = 6;
	volatile uint64_t t41 = 39273808441133972LLU;

    t41 = (x2389<<(x2390>>(x2391==x2392)));

    if (t41 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x2413 = INT16_MAX;
	static int16_t x2414 = 3;
	int32_t t42 = -373868;

    t42 = (x2413<<(x2414>>(x2415==x2416)));

    if (t42 != 262136) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x2449 = UINT32_MAX;
	static int32_t x2450 = 18;
	uint16_t x2451 = UINT16_MAX;
	int64_t x2452 = -173932717232LL;

    t43 = (x2449<<(x2450>>(x2451==x2452)));

    if (t43 != 4294705152U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2458 = 0;
	int64_t x2459 = -4133316LL;
	int8_t x2460 = 3;
	int32_t t44 = 6584552;

    t44 = (x2457<<(x2458>>(x2459==x2460)));

    if (t44 != 217) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x2485 = 71;
	int8_t x2486 = 3;
	uint8_t x2487 = 1U;
	int16_t x2488 = INT16_MIN;

    t45 = (x2485<<(x2486>>(x2487==x2488)));

    if (t45 != 568) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x2493 = 1U;
	int8_t x2494 = 0;
	volatile int16_t x2495 = INT16_MIN;
	uint16_t x2496 = 1758U;
	volatile int32_t t46 = -8258592;

    t46 = (x2493<<(x2494>>(x2495==x2496)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x2633 = 2;
	static volatile int32_t x2634 = 0;
	int64_t x2635 = -1LL;
	uint16_t x2636 = 30899U;
	volatile int32_t t47 = 247;

    t47 = (x2633<<(x2634>>(x2635==x2636)));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x2669 = UINT64_MAX;
	static uint8_t x2670 = 0U;
	int32_t x2671 = INT32_MIN;
	uint64_t x2672 = UINT64_MAX;
	uint64_t t48 = UINT64_MAX;

    t48 = (x2669<<(x2670>>(x2671==x2672)));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x2673 = 13;
	volatile int8_t x2674 = 14;
	uint8_t x2675 = UINT8_MAX;
	int64_t x2676 = INT64_MIN;

    t49 = (x2673<<(x2674>>(x2675==x2676)));

    if (t49 != 212992) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x2697 = 44488LL;
	volatile int8_t x2698 = 0;
	int32_t x2700 = 158;
	volatile int64_t t50 = -1LL;

    t50 = (x2697<<(x2698>>(x2699==x2700)));

    if (t50 != 44488LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x2705 = 1LL;
	static int16_t x2706 = 13;
	static volatile int16_t x2707 = -7;
	static volatile int32_t x2708 = -1;
	volatile int64_t t51 = 19950559014182LL;

    t51 = (x2705<<(x2706>>(x2707==x2708)));

    if (t51 != 8192LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x2717 = 0;
	volatile int8_t x2719 = INT8_MIN;
	volatile int32_t t52 = 179134;

    t52 = (x2717<<(x2718>>(x2719==x2720)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x2733 = 48326217;
	int32_t x2735 = -1;
	static int32_t x2736 = -4;

    t53 = (x2733<<(x2734>>(x2735==x2736)));

    if (t53 != 386609736) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x2778 = 0U;
	static uint16_t x2779 = 67U;
	int64_t x2780 = -1LL;
	volatile int64_t t54 = INT64_MAX;

    t54 = (x2777<<(x2778>>(x2779==x2780)));

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x2849 = 758230619U;
	uint8_t x2851 = 97U;
	static int8_t x2852 = -1;
	static volatile uint32_t t55 = 134716627U;

    t55 = (x2849<<(x2850>>(x2851==x2852)));

    if (t55 != 1516461238U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x2853 = INT8_MAX;
	uint8_t x2854 = 0U;
	int16_t x2855 = 133;
	uint8_t x2856 = UINT8_MAX;
	volatile int32_t t56 = 1;

    t56 = (x2853<<(x2854>>(x2855==x2856)));

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x2913 = 1588358LL;
	int8_t x2914 = 21;
	static int16_t x2915 = INT16_MAX;
	int16_t x2916 = -106;

    t57 = (x2913<<(x2914>>(x2915==x2916)));

    if (t57 != 3331028156416LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x2949 = 10;
	uint8_t x2950 = 0U;
	volatile uint64_t x2951 = 1439719LLU;
	volatile int32_t t58 = -1;

    t58 = (x2949<<(x2950>>(x2951==x2952)));

    if (t58 != 10) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x2990 = 4;
	uint8_t x2991 = 9U;
	uint16_t x2992 = 14552U;
	volatile int32_t t59 = 218;

    t59 = (x2989<<(x2990>>(x2991==x2992)));

    if (t59 != 1048560) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x3001 = 14U;
	int8_t x3002 = 0;
	volatile int16_t x3003 = -110;
	static int32_t t60 = -1;

    t60 = (x3001<<(x3002>>(x3003==x3004)));

    if (t60 != 14) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x3021 = 12524088502198152LLU;
	int8_t x3022 = 0;
	int16_t x3023 = 3348;
	int8_t x3024 = 1;

    t61 = (x3021<<(x3022>>(x3023==x3024)));

    if (t61 != 12524088502198152LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x3065 = 27183U;
	uint8_t x3066 = 4U;
	static uint32_t x3067 = 45949U;
	volatile uint8_t x3068 = 86U;
	volatile uint32_t t62 = 3364654U;

    t62 = (x3065<<(x3066>>(x3067==x3068)));

    if (t62 != 434928U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x3122 = 14U;
	int8_t x3123 = INT8_MIN;
	int8_t x3124 = -2;
	int32_t t63 = 13697;

    t63 = (x3121<<(x3122>>(x3123==x3124)));

    if (t63 != 536854528) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x3313 = 0;
	static uint8_t x3314 = 19U;
	uint64_t x3316 = 35054452891159542LLU;
	static volatile int32_t t64 = 64433866;

    t64 = (x3313<<(x3314>>(x3315==x3316)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x3361 = 443U;
	volatile int64_t x3362 = 28LL;
	int64_t x3363 = INT64_MIN;
	int64_t x3364 = -1LL;
	uint32_t t65 = 0U;

    t65 = (x3361<<(x3362>>(x3363==x3364)));

    if (t65 != 2952790016U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x3401 = INT8_MAX;
	static int16_t x3402 = 1;
	static int16_t x3403 = 1;
	int64_t x3404 = 1209LL;
	int32_t t66 = -62089;

    t66 = (x3401<<(x3402>>(x3403==x3404)));

    if (t66 != 254) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x3479 = 2;
	int32_t t67 = -821978992;

    t67 = (x3477<<(x3478>>(x3479==x3480)));

    if (t67 != 536870912) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x3501 = UINT64_MAX;
	uint16_t x3502 = 11U;
	int32_t x3504 = INT32_MIN;
	volatile uint64_t t68 = 1LLU;

    t68 = (x3501<<(x3502>>(x3503==x3504)));

    if (t68 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x3525 = UINT64_MAX;
	static volatile int16_t x3527 = INT16_MIN;
	static int8_t x3528 = -1;

    t69 = (x3525<<(x3526>>(x3527==x3528)));

    if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x3565 = 310189879838907LLU;
	volatile uint16_t x3566 = 3U;
	int8_t x3567 = -1;

    t70 = (x3565<<(x3566>>(x3567==x3568)));

    if (t70 != 2481519038711256LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x3585 = INT8_MAX;
	static volatile uint16_t x3586 = 3U;
	uint16_t x3587 = 632U;

    t71 = (x3585<<(x3586>>(x3587==x3588)));

    if (t71 != 1016) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x3607 = -1LL;
	int16_t x3608 = INT16_MIN;

    t72 = (x3605<<(x3606>>(x3607==x3608)));

    if (t72 != 10440) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x3619 = UINT32_MAX;
	int8_t x3620 = -1;
	int64_t t73 = 2308201149049492LL;

    t73 = (x3617<<(x3618>>(x3619==x3620)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint16_t x3661 = 13U;
	uint16_t x3662 = 1U;
	int8_t x3663 = INT8_MAX;
	static int32_t x3664 = 1;
	int32_t t74 = -43;

    t74 = (x3661<<(x3662>>(x3663==x3664)));

    if (t74 != 26) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x3869 = 165679509905534LLU;
	uint64_t x3871 = 2538LLU;
	int16_t x3872 = INT16_MIN;
	static uint64_t t75 = 1641369061133709223LLU;

    t75 = (x3869<<(x3870>>(x3871==x3872)));

    if (t75 != 678623272573067264LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x3877 = 2;
	static int16_t x3878 = 0;
	int32_t x3880 = 137661755;
	volatile int32_t t76 = -854;

    t76 = (x3877<<(x3878>>(x3879==x3880)));

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x3929 = 3U;
	static volatile uint8_t x3930 = 1U;
	int16_t x3931 = INT16_MIN;
	uint32_t x3932 = UINT32_MAX;
	volatile int32_t t77 = 35778;

    t77 = (x3929<<(x3930>>(x3931==x3932)));

    if (t77 != 6) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x4005 = 52U;
	static uint16_t x4006 = 12U;
	static int64_t x4007 = 28741430LL;
	int32_t x4008 = -482505583;

    t78 = (x4005<<(x4006>>(x4007==x4008)));

    if (t78 != 212992U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x4025 = 119293323064LL;
	uint8_t x4026 = 4U;
	static int32_t x4027 = INT32_MIN;
	uint16_t x4028 = UINT16_MAX;
	static int64_t t79 = -21452941542999LL;

    t79 = (x4025<<(x4026>>(x4027==x4028)));

    if (t79 != 1908693169024LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x4074 = 0U;
	int64_t x4075 = INT64_MIN;
	static int8_t x4076 = INT8_MIN;
	int32_t t80 = -255607626;

    t80 = (x4073<<(x4074>>(x4075==x4076)));

    if (t80 != 712) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x4137 = 8;
	uint8_t x4138 = 1U;
	int8_t x4139 = -1;
	int16_t x4140 = INT16_MIN;
	int32_t t81 = -494014619;

    t81 = (x4137<<(x4138>>(x4139==x4140)));

    if (t81 != 16) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x4165 = 245U;
	int8_t x4166 = 9;
	int64_t x4167 = INT64_MIN;
	int8_t x4168 = INT8_MAX;

    t82 = (x4165<<(x4166>>(x4167==x4168)));

    if (t82 != 125440) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x4185 = 0;
	volatile uint8_t x4186 = 11U;
	int16_t x4187 = INT16_MIN;
	int32_t t83 = -120706;

    t83 = (x4185<<(x4186>>(x4187==x4188)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x4213 = 21349U;
	uint16_t x4214 = 3U;
	volatile int64_t x4215 = -1LL;
	static int16_t x4216 = INT16_MIN;
	int32_t t84 = 1008633;

    t84 = (x4213<<(x4214>>(x4215==x4216)));

    if (t84 != 170792) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x4269 = 68944377251225LLU;
	uint64_t t85 = 5342182LLU;

    t85 = (x4269<<(x4270>>(x4271==x4272)));

    if (t85 != 68944377251225LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x4353 = 9;
	int16_t x4354 = 0;
	uint64_t x4355 = 2988461810LLU;
	uint64_t x4356 = UINT64_MAX;
	int32_t t86 = -1;

    t86 = (x4353<<(x4354>>(x4355==x4356)));

    if (t86 != 9) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x4733 = 1U;
	int8_t x4734 = 0;
	uint64_t x4736 = UINT64_MAX;
	int32_t t87 = 3608;

    t87 = (x4733<<(x4734>>(x4735==x4736)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x4761 = 151376972440190140LLU;
	uint32_t x4762 = 1U;
	volatile uint64_t t88 = 72956516LLU;

    t88 = (x4761<<(x4762>>(x4763==x4764)));

    if (t88 != 302753944880380280LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x4781 = 1;
	static uint16_t x4782 = 1U;
	static int16_t x4783 = INT16_MAX;
	volatile int32_t t89 = 759810361;

    t89 = (x4781<<(x4782>>(x4783==x4784)));

    if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x4926 = 55U;
	uint16_t x4927 = 8025U;
	uint32_t x4928 = 17U;

    t90 = (x4925<<(x4926>>(x4927==x4928)));

    if (t90 != 4215369251218784256LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x4966 = 0;
	int32_t x4967 = 117;
	volatile uint16_t x4968 = UINT16_MAX;
	static int32_t t91 = 6054467;

    t91 = (x4965<<(x4966>>(x4967==x4968)));

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x5069 = UINT16_MAX;
	uint8_t x5071 = 11U;
	static volatile int16_t x5072 = 3730;
	int32_t t92 = 8;

    t92 = (x5069<<(x5070>>(x5071==x5072)));

    if (t92 != 131070) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x5105 = 1979941948LLU;
	int16_t x5106 = 1;
	static uint8_t x5107 = 0U;
	volatile int32_t x5108 = -1;
	volatile uint64_t t93 = 8129043791229507LLU;

    t93 = (x5105<<(x5106>>(x5107==x5108)));

    if (t93 != 3959883896LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x5153 = 953393156863569113LLU;
	volatile uint64_t t94 = 9632718601796044LLU;

    t94 = (x5153<<(x5154>>(x5155==x5156)));

    if (t94 != 11353859636279536768LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x5157 = 402793LL;
	volatile uint8_t x5158 = 7U;
	uint8_t x5160 = 11U;
	int64_t t95 = 2LL;

    t95 = (x5157<<(x5158>>(x5159==x5160)));

    if (t95 != 51557504LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x5165 = INT32_MAX;
	static uint32_t x5166 = 0U;
	int32_t x5167 = INT32_MIN;
	int8_t x5168 = INT8_MIN;
	int32_t t96 = INT32_MAX;

    t96 = (x5165<<(x5166>>(x5167==x5168)));

    if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x5253 = 9900640LL;
	static uint8_t x5254 = 6U;
	volatile uint8_t x5255 = 1U;
	volatile int8_t x5256 = INT8_MIN;
	volatile int64_t t97 = 536441250LL;

    t97 = (x5253<<(x5254>>(x5255==x5256)));

    if (t97 != 633640960LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x5329 = 55559625238575LLU;
	uint8_t x5330 = 6U;
	int64_t x5331 = INT64_MIN;
	static int16_t x5332 = -351;
	volatile uint64_t t98 = 13LLU;

    t98 = (x5329<<(x5330>>(x5331==x5332)));

    if (t98 != 3555816015268800LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x5402 = 12;
	int8_t x5403 = -1;
	int32_t x5404 = INT32_MAX;
	volatile int32_t t99 = -84525766;

    t99 = (x5401<<(x5402>>(x5403==x5404)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x5486 = 3U;
	volatile int8_t x5487 = -3;
	volatile int32_t x5488 = -1;
	int32_t t100 = 108741707;

    t100 = (x5485<<(x5486>>(x5487==x5488)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x5533 = INT16_MAX;
	int32_t x5535 = -1;
	int32_t t101 = 63686287;

    t101 = (x5533<<(x5534>>(x5535==x5536)));

    if (t101 != 1048544) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x5561 = INT8_MAX;
	int16_t x5562 = 0;
	static int16_t x5563 = INT16_MIN;
	static int32_t x5564 = -1;
	volatile int32_t t102 = 64;

    t102 = (x5561<<(x5562>>(x5563==x5564)));

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x5721 = UINT32_MAX;
	static volatile uint8_t x5722 = 1U;
	volatile uint8_t x5723 = UINT8_MAX;
	int16_t x5724 = INT16_MIN;
	uint32_t t103 = 7152U;

    t103 = (x5721<<(x5722>>(x5723==x5724)));

    if (t103 != 4294967294U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x5773 = 707912137U;
	volatile int32_t x5774 = 3;
	int16_t x5775 = INT16_MAX;
	static uint16_t x5776 = 403U;

    t104 = (x5773<<(x5774>>(x5775==x5776)));

    if (t104 != 1368329800U) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x5813 = 140457132303180497LLU;
	int16_t x5814 = 2;
	uint8_t x5815 = 4U;
	uint64_t x5816 = 16329649823381LLU;
	uint64_t t105 = 6937874240057210771LLU;

    t105 = (x5813<<(x5814>>(x5815==x5816)));

    if (t105 != 561828529212721988LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x5845 = UINT8_MAX;
	int8_t x5846 = 0;
	int64_t x5847 = -3602LL;
	volatile int8_t x5848 = INT8_MIN;

    t106 = (x5845<<(x5846>>(x5847==x5848)));

    if (t106 != 255) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x5869 = UINT64_MAX;
	uint32_t x5872 = 0U;

    t107 = (x5869<<(x5870>>(x5871==x5872)));

    if (t107 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x5901 = INT32_MAX;
	static uint8_t x5902 = 0U;
	int8_t x5903 = 0;
	int64_t x5904 = INT64_MIN;
	volatile int32_t t108 = INT32_MAX;

    t108 = (x5901<<(x5902>>(x5903==x5904)));

    if (t108 != INT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x5982 = 10U;
	int8_t x5984 = INT8_MIN;
	int32_t t109 = -160479;

    t109 = (x5981<<(x5982>>(x5983==x5984)));

    if (t109 != 33553408) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x5989 = 172U;
	static int8_t x5990 = 0;
	static volatile int8_t x5991 = -38;
	int64_t x5992 = INT64_MIN;

    t110 = (x5989<<(x5990>>(x5991==x5992)));

    if (t110 != 172) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x6025 = INT16_MAX;
	int16_t x6026 = 1;
	uint16_t x6027 = 1U;
	int16_t x6028 = -1;
	volatile int32_t t111 = -5768;

    t111 = (x6025<<(x6026>>(x6027==x6028)));

    if (t111 != 65534) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x6097 = INT8_MAX;
	int8_t x6098 = 16;
	volatile int8_t x6099 = INT8_MIN;
	uint32_t x6100 = UINT32_MAX;
	volatile int32_t t112 = 40680432;

    t112 = (x6097<<(x6098>>(x6099==x6100)));

    if (t112 != 8323072) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x6101 = INT8_MAX;
	uint8_t x6102 = 1U;
	int16_t x6104 = INT16_MAX;
	int32_t t113 = 4;

    t113 = (x6101<<(x6102>>(x6103==x6104)));

    if (t113 != 254) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x6125 = 1LL;
	uint16_t x6126 = 3U;
	int16_t x6127 = INT16_MIN;
	volatile uint64_t x6128 = UINT64_MAX;
	static int64_t t114 = 5505092207772223LL;

    t114 = (x6125<<(x6126>>(x6127==x6128)));

    if (t114 != 8LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x6137 = 26;
	int8_t x6138 = 3;
	int64_t x6139 = -1125LL;
	volatile int64_t x6140 = -11426715791588313LL;
	static volatile int32_t t115 = 1;

    t115 = (x6137<<(x6138>>(x6139==x6140)));

    if (t115 != 208) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x6153 = 12;
	uint8_t x6154 = 19U;
	uint32_t x6156 = 387U;
	static int32_t t116 = 9;

    t116 = (x6153<<(x6154>>(x6155==x6156)));

    if (t116 != 6291456) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x6157 = 0;
	int8_t x6158 = 3;
	static volatile uint16_t x6159 = 26009U;
	uint32_t x6160 = UINT32_MAX;
	volatile int32_t t117 = 53003;

    t117 = (x6157<<(x6158>>(x6159==x6160)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x6213 = UINT16_MAX;
	int8_t x6214 = 6;
	static uint64_t x6215 = 965LLU;
	uint8_t x6216 = 57U;
	int32_t t118 = 1;

    t118 = (x6213<<(x6214>>(x6215==x6216)));

    if (t118 != 4194240) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x6286 = 1;
	volatile int16_t x6287 = 1;
	static int64_t x6288 = -890527LL;

    t119 = (x6285<<(x6286>>(x6287==x6288)));

    if (t119 != 6U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x6318 = 11U;
	static int32_t x6319 = -1;
	uint8_t x6320 = UINT8_MAX;
	int32_t t120 = -18;

    t120 = (x6317<<(x6318>>(x6319==x6320)));

    if (t120 != 67106816) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x6337 = 1;
	volatile uint8_t x6338 = 7U;
	uint8_t x6339 = 115U;
	static volatile int32_t t121 = -4;

    t121 = (x6337<<(x6338>>(x6339==x6340)));

    if (t121 != 128) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x6410 = 1U;
	static volatile int32_t x6411 = INT32_MIN;
	static uint8_t x6412 = UINT8_MAX;
	int32_t t122 = -7465;

    t122 = (x6409<<(x6410>>(x6411==x6412)));

    if (t122 != 510) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x6413 = 19LLU;
	volatile uint16_t x6414 = 4U;
	uint32_t x6415 = 12361629U;
	volatile uint64_t t123 = 66315242218188660LLU;

    t123 = (x6413<<(x6414>>(x6415==x6416)));

    if (t123 != 304LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x6485 = 3527U;
	uint8_t x6486 = 4U;
	static volatile int64_t x6487 = 223586717LL;
	volatile int32_t t124 = -1438;

    t124 = (x6485<<(x6486>>(x6487==x6488)));

    if (t124 != 56432) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x6505 = 0;
	uint32_t x6506 = 4U;
	int64_t x6507 = INT64_MIN;
	int64_t x6508 = INT64_MIN;
	volatile int32_t t125 = 2077712;

    t125 = (x6505<<(x6506>>(x6507==x6508)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x6525 = 0;
	int64_t x6528 = INT64_MIN;

    t126 = (x6525<<(x6526>>(x6527==x6528)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x6553 = 244;
	int8_t x6554 = 2;
	uint64_t x6555 = 20LLU;
	int64_t x6556 = -105581955812LL;
	volatile int32_t t127 = 30501799;

    t127 = (x6553<<(x6554>>(x6555==x6556)));

    if (t127 != 976) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint64_t x6589 = 3LLU;
	static uint16_t x6590 = 53U;
	int16_t x6592 = 3774;

    t128 = (x6589<<(x6590>>(x6591==x6592)));

    if (t128 != 27021597764222976LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x6673 = 1;
	static uint8_t x6674 = 14U;
	uint16_t x6675 = 0U;
	int64_t x6676 = 20LL;
	int32_t t129 = -982713;

    t129 = (x6673<<(x6674>>(x6675==x6676)));

    if (t129 != 16384) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x6689 = 3U;
	static volatile uint64_t x6690 = 0LLU;
	int32_t x6691 = INT32_MIN;
	int16_t x6692 = INT16_MIN;
	volatile uint32_t t130 = 2555422U;

    t130 = (x6689<<(x6690>>(x6691==x6692)));

    if (t130 != 3U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x6745 = 1867445195535481481LLU;
	volatile int32_t x6746 = 10;
	int16_t x6747 = -1;
	static volatile int8_t x6748 = -1;
	uint64_t t131 = 441179862202180120LLU;

    t131 = (x6745<<(x6746>>(x6747==x6748)));

    if (t131 != 4418014036006752544LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x6753 = 84471074U;
	uint8_t x6754 = 1U;
	static int32_t x6755 = 147795357;
	int32_t x6756 = INT32_MIN;

    t132 = (x6753<<(x6754>>(x6755==x6756)));

    if (t132 != 168942148U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x6766 = 28U;
	int64_t x6768 = INT64_MIN;
	uint32_t t133 = 1277652U;

    t133 = (x6765<<(x6766>>(x6767==x6768)));

    if (t133 != 2684354560U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x6850 = 1LLU;
	static uint16_t x6851 = 1U;
	uint32_t x6852 = UINT32_MAX;
	volatile int32_t t134 = 9;

    t134 = (x6849<<(x6850>>(x6851==x6852)));

    if (t134 != 131070) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x6893 = 892866917;
	uint16_t x6894 = 0U;

    t135 = (x6893<<(x6894>>(x6895==x6896)));

    if (t135 != 892866917) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x6909 = 35;
	static int16_t x6910 = 1;
	int8_t x6911 = 0;
	volatile int32_t t136 = -85636337;

    t136 = (x6909<<(x6910>>(x6911==x6912)));

    if (t136 != 70) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x6953 = 3U;
	static int32_t x6955 = 4544984;
	int8_t x6956 = -1;
	volatile uint32_t t137 = 3166009U;

    t137 = (x6953<<(x6954>>(x6955==x6956)));

    if (t137 != 6U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x7149 = UINT64_MAX;
	volatile int8_t x7150 = 1;
	volatile int32_t x7151 = 0;
	int64_t x7152 = INT64_MIN;
	static uint64_t t138 = 53192389807588LLU;

    t138 = (x7149<<(x7150>>(x7151==x7152)));

    if (t138 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x7269 = 0U;
	int16_t x7271 = 1;
	uint64_t x7272 = 1432406485615961648LLU;

    t139 = (x7269<<(x7270>>(x7271==x7272)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x7289 = UINT64_MAX;
	int16_t x7290 = 7;
	static volatile uint64_t x7291 = UINT64_MAX;
	static uint8_t x7292 = 1U;
	uint64_t t140 = 231246LLU;

    t140 = (x7289<<(x7290>>(x7291==x7292)));

    if (t140 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x7329 = 5U;
	uint32_t x7330 = 1U;
	int16_t x7331 = INT16_MAX;
	uint16_t x7332 = 3U;
	int32_t t141 = -793476990;

    t141 = (x7329<<(x7330>>(x7331==x7332)));

    if (t141 != 10) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x7369 = 11U;
	static int64_t x7371 = INT64_MAX;
	static int32_t t142 = 0;

    t142 = (x7369<<(x7370>>(x7371==x7372)));

    if (t142 != 5632) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x7417 = 23LLU;
	uint16_t x7419 = 13U;
	volatile uint64_t t143 = 20459093LLU;

    t143 = (x7417<<(x7418>>(x7419==x7420)));

    if (t143 != 46LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x7521 = 179535484324LLU;
	int8_t x7522 = 1;
	int16_t x7523 = INT16_MIN;
	volatile uint16_t x7524 = UINT16_MAX;
	volatile uint64_t t144 = 813127115LLU;

    t144 = (x7521<<(x7522>>(x7523==x7524)));

    if (t144 != 359070968648LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x7729 = UINT32_MAX;
	static uint8_t x7730 = 15U;
	volatile uint32_t x7731 = 85U;
	int32_t x7732 = INT32_MIN;
	uint32_t t145 = 182531U;

    t145 = (x7729<<(x7730>>(x7731==x7732)));

    if (t145 != 4294934528U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x7737 = 34304930007602LL;
	uint16_t x7738 = 4U;
	static int8_t x7740 = -1;
	volatile int64_t t146 = -2924076512LL;

    t146 = (x7737<<(x7738>>(x7739==x7740)));

    if (t146 != 548878880121632LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x7865 = 64034LLU;
	int8_t x7866 = 25;
	int16_t x7867 = -1;
	int32_t x7868 = 56095123;
	uint64_t t147 = 19LLU;

    t147 = (x7865<<(x7866>>(x7867==x7868)));

    if (t147 != 2148624498688LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x7957 = 5U;
	volatile uint16_t x7958 = 0U;
	uint32_t x7959 = UINT32_MAX;
	int32_t x7960 = -16;
	int32_t t148 = -12766;

    t148 = (x7957<<(x7958>>(x7959==x7960)));

    if (t148 != 5) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x8081 = 335341236LL;
	volatile uint8_t x8082 = 0U;
	static int64_t x8084 = INT64_MIN;
	static int64_t t149 = -123621LL;

    t149 = (x8081<<(x8082>>(x8083==x8084)));

    if (t149 != 335341236LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x8149 = 253729640U;
	uint32_t x8150 = 7U;
	static volatile int8_t x8151 = -1;
	int8_t x8152 = 1;
	uint32_t t150 = 2015102U;

    t150 = (x8149<<(x8150>>(x8151==x8152)));

    if (t150 != 2412622848U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x8170 = 1U;
	static int64_t x8172 = -1LL;
	static volatile int32_t t151 = 0;

    t151 = (x8169<<(x8170>>(x8171==x8172)));

    if (t151 != 2) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x8186 = 8;
	static uint16_t x8187 = 14U;
	int8_t x8188 = INT8_MAX;
	volatile int32_t t152 = 4202;

    t152 = (x8185<<(x8186>>(x8187==x8188)));

    if (t152 != 1683712) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x8281 = UINT8_MAX;
	int8_t x8282 = 0;
	uint8_t x8283 = 0U;
	int32_t x8284 = -1;
	volatile int32_t t153 = -14383;

    t153 = (x8281<<(x8282>>(x8283==x8284)));

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x8290 = 0U;
	uint32_t x8291 = 2914582U;
	static uint16_t x8292 = 51U;
	int32_t t154 = -4940755;

    t154 = (x8289<<(x8290>>(x8291==x8292)));

    if (t154 != 13) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x8338 = 2LLU;
	int32_t t155 = -4;

    t155 = (x8337<<(x8338>>(x8339==x8340)));

    if (t155 != 473007424) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x8355 = INT32_MIN;
	volatile int32_t x8356 = INT32_MAX;
	int32_t t156 = -28;

    t156 = (x8353<<(x8354>>(x8355==x8356)));

    if (t156 != 4080) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint32_t x8469 = UINT32_MAX;
	int8_t x8470 = 3;
	uint32_t x8471 = UINT32_MAX;
	static uint64_t x8472 = UINT64_MAX;
	uint32_t t157 = 163U;

    t157 = (x8469<<(x8470>>(x8471==x8472)));

    if (t157 != 4294967288U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x8521 = UINT32_MAX;
	int8_t x8522 = 0;
	uint8_t x8523 = 0U;
	static int32_t x8524 = INT32_MIN;

    t158 = (x8521<<(x8522>>(x8523==x8524)));

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x8709 = 834U;
	uint8_t x8710 = 26U;
	int32_t x8711 = INT32_MIN;
	uint32_t x8712 = 12811U;
	static volatile uint32_t t159 = 567681590U;

    t159 = (x8709<<(x8710>>(x8711==x8712)));

    if (t159 != 134217728U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x8753 = 2133065275LL;
	uint32_t x8754 = 9U;
	static int32_t x8755 = INT32_MIN;
	static uint16_t x8756 = 3U;
	volatile int64_t t160 = 63555209895897LL;

    t160 = (x8753<<(x8754>>(x8755==x8756)));

    if (t160 != 1092129420800LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x8793 = 0;
	uint32_t x8794 = 0U;
	static int16_t x8795 = 2;
	uint32_t x8796 = UINT32_MAX;
	volatile int32_t t161 = -48;

    t161 = (x8793<<(x8794>>(x8795==x8796)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x8837 = UINT64_MAX;
	static uint8_t x8838 = 60U;
	int32_t x8839 = INT32_MAX;
	int32_t x8840 = 258;

    t162 = (x8837<<(x8838>>(x8839==x8840)));

    if (t162 != 17293822569102704640LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x8941 = 26U;
	int16_t x8942 = 1;
	uint8_t x8944 = UINT8_MAX;

    t163 = (x8941<<(x8942>>(x8943==x8944)));

    if (t163 != 52) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x9121 = 24U;
	int64_t x9122 = 0LL;
	uint16_t x9123 = UINT16_MAX;
	int16_t x9124 = 19;
	static volatile int32_t t164 = -1;

    t164 = (x9121<<(x9122>>(x9123==x9124)));

    if (t164 != 24) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x9161 = INT32_MAX;
	uint8_t x9162 = 0U;
	int8_t x9163 = 0;
	int32_t t165 = INT32_MAX;

    t165 = (x9161<<(x9162>>(x9163==x9164)));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x9321 = 3308U;
	int64_t x9323 = INT64_MAX;
	static uint8_t x9324 = 3U;

    t166 = (x9321<<(x9322>>(x9323==x9324)));

    if (t166 != 26464) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x9358 = 23;
	uint8_t x9359 = UINT8_MAX;
	uint32_t x9360 = 28827029U;
	static volatile uint32_t t167 = 650378820U;

    t167 = (x9357<<(x9358>>(x9359==x9360)));

    if (t167 != 956301312U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x9469 = 5;
	int8_t x9470 = 2;
	volatile int32_t x9471 = INT32_MAX;
	int32_t x9472 = 41344;
	volatile int32_t t168 = -53808325;

    t168 = (x9469<<(x9470>>(x9471==x9472)));

    if (t168 != 20) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x9633 = UINT8_MAX;
	uint8_t x9634 = 0U;
	uint32_t x9635 = UINT32_MAX;
	static int8_t x9636 = INT8_MAX;
	volatile int32_t t169 = 538982347;

    t169 = (x9633<<(x9634>>(x9635==x9636)));

    if (t169 != 255) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x9709 = 434125383763900LLU;
	int64_t x9710 = 1LL;
	static uint8_t x9712 = 2U;

    t170 = (x9709<<(x9710>>(x9711==x9712)));

    if (t170 != 868250767527800LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x9725 = 8055;
	static uint32_t x9726 = 3U;
	int16_t x9727 = INT16_MAX;
	uint8_t x9728 = 4U;
	int32_t t171 = -136;

    t171 = (x9725<<(x9726>>(x9727==x9728)));

    if (t171 != 64440) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x9762 = 18U;
	uint32_t x9763 = 1465212545U;
	volatile uint16_t x9764 = 15900U;
	int32_t t172 = 120;

    t172 = (x9761<<(x9762>>(x9763==x9764)));

    if (t172 != 1048576) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x9901 = 362U;
	int8_t x9903 = -1;
	int64_t x9904 = 72942069154939LL;

    t173 = (x9901<<(x9902>>(x9903==x9904)));

    if (t173 != 362U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x10069 = 4U;
	uint64_t x10070 = 29LLU;
	volatile int64_t x10071 = INT64_MIN;
	uint32_t x10072 = UINT32_MAX;
	uint32_t t174 = 372U;

    t174 = (x10069<<(x10070>>(x10071==x10072)));

    if (t174 != 2147483648U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x10133 = UINT64_MAX;
	uint8_t x10134 = 0U;
	static uint8_t x10136 = 2U;
	static volatile uint64_t t175 = UINT64_MAX;

    t175 = (x10133<<(x10134>>(x10135==x10136)));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x10181 = 261076802962566LLU;
	static uint8_t x10183 = 20U;
	uint64_t t176 = 1775641LLU;

    t176 = (x10181<<(x10182>>(x10183==x10184)));

    if (t176 != 261076802962566LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x10197 = 1;
	uint16_t x10198 = 5U;
	int64_t x10199 = 1030LL;
	static volatile int32_t x10200 = 1590;
	int32_t t177 = 597653;

    t177 = (x10197<<(x10198>>(x10199==x10200)));

    if (t177 != 32) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x10253 = 5710U;
	int8_t x10254 = 0;
	int32_t x10255 = 2;
	int64_t x10256 = INT64_MIN;

    t178 = (x10253<<(x10254>>(x10255==x10256)));

    if (t178 != 5710) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x10273 = 8;
	uint8_t x10274 = 3U;
	int16_t x10275 = INT16_MAX;
	static volatile int32_t t179 = -99;

    t179 = (x10273<<(x10274>>(x10275==x10276)));

    if (t179 != 64) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x10297 = 1;
	int8_t x10299 = -1;
	int32_t x10300 = INT32_MIN;
	volatile int32_t t180 = -542338;

    t180 = (x10297<<(x10298>>(x10299==x10300)));

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x10449 = 673U;
	int64_t x10450 = 1LL;
	uint64_t x10452 = 11022857830076124LLU;

    t181 = (x10449<<(x10450>>(x10451==x10452)));

    if (t181 != 1346U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x10485 = 19155849135LL;
	static uint8_t x10486 = 11U;
	int8_t x10487 = INT8_MIN;

    t182 = (x10485<<(x10486>>(x10487==x10488)));

    if (t182 != 39231179028480LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x10505 = 103U;
	uint32_t x10506 = 0U;
	static int32_t x10507 = 320013139;
	int8_t x10508 = INT8_MIN;
	volatile int32_t t183 = 47141347;

    t183 = (x10505<<(x10506>>(x10507==x10508)));

    if (t183 != 103) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x10573 = 9515U;
	int64_t x10574 = 1LL;
	int8_t x10575 = 0;
	volatile int32_t t184 = 15582;

    t184 = (x10573<<(x10574>>(x10575==x10576)));

    if (t184 != 19030) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x10658 = 0;
	uint16_t x10660 = 389U;

    t185 = (x10657<<(x10658>>(x10659==x10660)));

    if (t185 != 44) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x10773 = 7789LLU;
	int8_t x10774 = 26;
	uint16_t x10775 = 18U;
	int64_t x10776 = 710LL;
	volatile uint64_t t186 = 262381348LLU;

    t186 = (x10773<<(x10774>>(x10775==x10776)));

    if (t186 != 522710941696LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x10817 = INT16_MAX;
	uint32_t x10818 = 3U;
	uint64_t x10819 = 2921405922368108LLU;
	int8_t x10820 = 0;
	int32_t t187 = -64;

    t187 = (x10817<<(x10818>>(x10819==x10820)));

    if (t187 != 262136) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x10862 = 5LL;
	int16_t x10863 = INT16_MIN;
	int32_t x10864 = -1;
	int32_t t188 = 0;

    t188 = (x10861<<(x10862>>(x10863==x10864)));

    if (t188 != 672) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x10877 = INT8_MAX;
	volatile int32_t x10879 = -1;
	uint16_t x10880 = UINT16_MAX;
	volatile int32_t t189 = 445456866;

    t189 = (x10877<<(x10878>>(x10879==x10880)));

    if (t189 != 2080768) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x10913 = 3734;
	int8_t x10914 = 0;
	int16_t x10915 = INT16_MAX;

    t190 = (x10913<<(x10914>>(x10915==x10916)));

    if (t190 != 3734) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x10961 = INT16_MAX;
	int64_t x10963 = -1LL;
	uint8_t x10964 = 9U;
	volatile int32_t t191 = 255504543;

    t191 = (x10961<<(x10962>>(x10963==x10964)));

    if (t191 != 2097088) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x11113 = UINT64_MAX;
	int64_t x11115 = INT64_MIN;
	volatile int64_t x11116 = 59750822482LL;
	volatile uint64_t t192 = 7318152835604719LLU;

    t192 = (x11113<<(x11114>>(x11115==x11116)));

    if (t192 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint32_t x11141 = 904911233U;
	uint32_t x11144 = 2U;
	uint32_t t193 = 0U;

    t193 = (x11141<<(x11142>>(x11143==x11144)));

    if (t193 != 1809822466U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x11297 = UINT32_MAX;
	static volatile int8_t x11298 = 5;
	uint16_t x11299 = 29U;
	int64_t x11300 = -1LL;
	volatile uint32_t t194 = 52U;

    t194 = (x11297<<(x11298>>(x11299==x11300)));

    if (t194 != 4294967264U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x11369 = 12U;
	int8_t x11371 = INT8_MIN;
	int32_t x11372 = INT32_MAX;
	static volatile int32_t t195 = 7485;

    t195 = (x11369<<(x11370>>(x11371==x11372)));

    if (t195 != 12) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x11517 = UINT64_MAX;
	static int16_t x11518 = 17;
	volatile uint64_t t196 = 1836950033869LLU;

    t196 = (x11517<<(x11518>>(x11519==x11520)));

    if (t196 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x11589 = 2U;
	uint16_t x11590 = 2U;
	int16_t x11591 = INT16_MIN;
	int16_t x11592 = INT16_MIN;
	volatile int32_t t197 = 0;

    t197 = (x11589<<(x11590>>(x11591==x11592)));

    if (t197 != 4) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x11617 = INT32_MAX;
	uint32_t x11619 = 19U;
	int64_t x11620 = INT64_MIN;
	volatile int32_t t198 = INT32_MAX;

    t198 = (x11617<<(x11618>>(x11619==x11620)));

    if (t198 != INT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x11805 = INT8_MAX;
	uint8_t x11806 = 12U;
	int8_t x11807 = INT8_MIN;
	uint32_t x11808 = 162466320U;
	int32_t t199 = -2924;

    t199 = (x11805<<(x11806>>(x11807==x11808)));

    if (t199 != 520192) { NG(); } else { ; }
	
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

