
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

static uint16_t x125 = UINT16_MAX;
static int64_t x128 = -1LL;
volatile int32_t x195 = INT32_MAX;
volatile uint8_t x196 = UINT8_MAX;
volatile int32_t t5 = 3848599;
int8_t x310 = 1;
static int8_t x311 = -13;
volatile int32_t t6 = 25164;
uint8_t x366 = 2U;
uint16_t x386 = 3U;
int8_t x509 = 15;
int8_t x512 = INT8_MIN;
uint16_t x595 = 28U;
int8_t x673 = 10;
uint8_t x734 = 12U;
int64_t x736 = INT64_MIN;
static int16_t x761 = INT16_MAX;
int8_t x763 = INT8_MAX;
int16_t x1025 = 353;
uint64_t x1027 = 201770643100008923LLU;
int8_t x1112 = -1;
volatile int32_t t20 = 267;
volatile int32_t t22 = -3;
int32_t x1202 = 30;
uint64_t x1244 = 1LLU;
static uint8_t x1330 = 2U;
int64_t x1369 = INT64_MAX;
uint8_t x1370 = 34U;
uint8_t x1525 = UINT8_MAX;
int32_t t30 = 1443249;
static int32_t t31 = -7203973;
static volatile int8_t x1818 = 1;
int32_t x1881 = INT32_MAX;
int32_t x1884 = INT32_MAX;
volatile int8_t x1937 = 44;
volatile uint8_t x1938 = 0U;
volatile uint64_t x2005 = 2LLU;
int8_t x2043 = 3;
uint8_t x2210 = 24U;
static uint64_t x2211 = 33418LLU;
volatile int64_t x2212 = INT64_MAX;
uint64_t x2313 = UINT64_MAX;
static uint32_t x2315 = 91U;
static volatile int32_t t43 = 3841737;
static volatile int16_t x2329 = 829;
int64_t x2331 = 35550678392LL;
static int64_t x2512 = INT64_MAX;
int32_t x2568 = -1;
volatile int32_t t47 = -1491;
static volatile int64_t x2583 = 333112LL;
volatile int8_t x2950 = 1;
int64_t x2951 = 27LL;
int16_t x2958 = 1;
volatile int32_t x2959 = INT32_MAX;
uint16_t x3105 = 2691U;
uint8_t x3108 = 1U;
static volatile uint8_t x3157 = UINT8_MAX;
volatile int32_t t57 = -72106;
int32_t x3269 = 3848;
volatile int32_t x3272 = -919891859;
uint16_t x3273 = UINT16_MAX;
uint64_t x3289 = 82861285335537LLU;
volatile int16_t x3292 = -1;
uint16_t x3345 = 3938U;
int32_t t62 = 41;
static volatile int64_t x3389 = 3534124280674LL;
int8_t x3390 = 1;
uint16_t x3401 = 368U;
int8_t x3402 = 3;
uint64_t x3457 = UINT64_MAX;
int32_t x3459 = 1877980;
static int32_t x3651 = 68;
uint16_t x3705 = 2U;
uint8_t x3801 = 13U;
int16_t x3804 = -1;
uint32_t x3885 = UINT32_MAX;
int8_t x3887 = 51;
uint32_t x3905 = UINT32_MAX;
int8_t x3906 = 4;
int16_t x3908 = INT16_MAX;
int32_t t72 = 17309;
uint8_t x4131 = 1U;
int16_t x4136 = INT16_MIN;
uint16_t x4220 = 3U;
uint64_t x4224 = 26800025177149LLU;
static int32_t t77 = 563;
uint32_t x4367 = 453872541U;
int64_t x4440 = 0LL;
volatile int32_t t82 = -69;
volatile int32_t t84 = -3931874;
uint16_t x4750 = 6U;
int16_t x4751 = INT16_MIN;
uint32_t x4853 = UINT32_MAX;
volatile int8_t x4892 = INT8_MAX;
uint8_t x4997 = 1U;
int32_t t94 = -644436;
volatile int32_t t96 = -1978;
uint16_t x5088 = 3913U;
uint64_t x5156 = 72895810LLU;
static int64_t x5169 = INT64_MAX;
int8_t x5258 = 2;
static uint32_t x5348 = UINT32_MAX;
static volatile uint8_t x5374 = 1U;
uint64_t x5409 = 34013657626986727LLU;
uint8_t x5454 = 0U;
int8_t x5522 = 61;
uint8_t x5524 = 6U;
int64_t x5552 = -4601233207721708810LL;
uint16_t x5587 = 329U;
uint16_t x5588 = UINT16_MAX;
static uint16_t x5715 = 4381U;
static uint8_t x5742 = 7U;
uint32_t x5743 = 1U;
uint16_t x5825 = UINT16_MAX;
volatile uint32_t x5826 = 21U;
int64_t x5926 = 3LL;
uint8_t x6026 = 28U;
static uint32_t x6039 = UINT32_MAX;
static uint64_t x6067 = 1071924942228LLU;
int32_t t123 = 11;
static int8_t x6190 = 30;
uint32_t x6202 = 25U;
static int16_t x6232 = -5;
uint16_t x6246 = 6U;
uint16_t x6425 = UINT16_MAX;
uint8_t x6426 = 26U;
static volatile int32_t x6428 = INT32_MAX;
static uint32_t x6437 = 41U;
volatile int32_t t133 = 195065825;
uint64_t x6636 = UINT64_MAX;
static volatile int8_t x6802 = 10;
volatile uint16_t x6804 = UINT16_MAX;
int32_t t137 = -439;
uint16_t x6866 = 3U;
static volatile int32_t t138 = -1;
static int16_t x6881 = 823;
uint64_t x6882 = 8LLU;
volatile uint16_t x6936 = 7050U;
uint16_t x6998 = 16U;
int8_t x7003 = INT8_MAX;
int8_t x7071 = -29;
static volatile int64_t x7099 = INT64_MIN;
uint32_t x7173 = UINT32_MAX;
int16_t x7176 = -1;
int32_t x7264 = -1;
volatile uint8_t x7270 = 0U;
static int32_t t148 = -475900060;
volatile uint64_t x7340 = 50618LLU;
int32_t t151 = -1346;
int8_t x7543 = INT8_MAX;
uint32_t x7582 = 21U;
uint32_t x7613 = UINT32_MAX;
volatile int16_t x7617 = INT16_MAX;
volatile int64_t x7791 = INT64_MIN;
static uint32_t x7885 = 11092U;
uint64_t x8063 = UINT64_MAX;
uint64_t x8073 = 1342437669163401165LLU;
int64_t x8123 = INT64_MIN;
int16_t x8185 = 246;
static uint32_t x8186 = 23U;
int32_t x8188 = INT32_MAX;
static volatile int32_t t165 = 0;
int32_t x8420 = 2945;
int8_t x8435 = -1;
static int32_t t169 = -2305734;
uint64_t x8453 = UINT64_MAX;
int16_t x8509 = INT16_MAX;
int64_t x8510 = 20LL;
int16_t x8543 = -109;
uint32_t x8544 = 75U;
volatile int32_t t175 = -14;
static int32_t x8599 = -1;
static int16_t x8666 = 6;
volatile int8_t x8668 = -1;
int16_t x8749 = INT16_MAX;
int32_t t179 = 274349644;
static int32_t t180 = -6653;
static int32_t x9091 = 5;
uint64_t x9121 = 2721LLU;
uint32_t x9133 = 5891400U;
uint16_t x9134 = 1U;
int64_t x9240 = INT64_MIN;
volatile uint8_t x9257 = UINT8_MAX;
uint8_t x9261 = UINT8_MAX;
volatile int8_t x9263 = -1;
int8_t x9291 = INT8_MIN;
int32_t t192 = -21;
uint8_t x9494 = 2U;
uint64_t x9521 = UINT64_MAX;
uint8_t x9522 = 40U;
volatile int32_t t195 = 1;
int64_t x9536 = INT64_MIN;
volatile int16_t x9594 = 0;
uint8_t x9746 = 15U;
volatile int32_t x9748 = 1631005;


void f0(void) {
    	int32_t x57 = INT32_MAX;
	uint32_t x58 = 0U;
	static int16_t x59 = -1;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t0 = -46;

    t0 = ((x57>>x58)<=(x59!=x60));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x69 = INT64_MAX;
	uint8_t x70 = 7U;
	int16_t x71 = 2794;
	uint16_t x72 = 56U;
	static int32_t t1 = 4466804;

    t1 = ((x69>>x70)<=(x71!=x72));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x109 = INT16_MAX;
	volatile uint16_t x110 = 29U;
	uint64_t x111 = 41801124LLU;
	int16_t x112 = INT16_MAX;
	volatile int32_t t2 = -774;

    t2 = ((x109>>x110)<=(x111!=x112));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x126 = 8U;
	uint16_t x127 = UINT16_MAX;
	volatile int32_t t3 = -22337479;

    t3 = ((x125>>x126)<=(x127!=x128));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x193 = 6;
	static int32_t x194 = 0;
	volatile int32_t t4 = 2498;

    t4 = ((x193>>x194)<=(x195!=x196));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x229 = UINT8_MAX;
	int8_t x230 = 0;
	uint64_t x231 = UINT64_MAX;
	uint16_t x232 = 570U;

    t5 = ((x229>>x230)<=(x231!=x232));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x309 = UINT16_MAX;
	int16_t x312 = INT16_MIN;

    t6 = ((x309>>x310)<=(x311!=x312));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x365 = 3991LL;
	static uint8_t x367 = 8U;
	int8_t x368 = INT8_MIN;
	volatile int32_t t7 = -250;

    t7 = ((x365>>x366)<=(x367!=x368));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x385 = 13184U;
	uint8_t x387 = UINT8_MAX;
	volatile int64_t x388 = 3502163LL;
	static volatile int32_t t8 = -1;

    t8 = ((x385>>x386)<=(x387!=x388));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x389 = UINT8_MAX;
	uint8_t x390 = 6U;
	uint32_t x391 = 21U;
	volatile int8_t x392 = INT8_MAX;
	static volatile int32_t t9 = 754;

    t9 = ((x389>>x390)<=(x391!=x392));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x510 = 1LL;
	int16_t x511 = INT16_MIN;
	int32_t t10 = -447501;

    t10 = ((x509>>x510)<=(x511!=x512));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x549 = 712422LLU;
	uint16_t x550 = 2U;
	static int64_t x551 = 85LL;
	volatile uint32_t x552 = 803849U;
	volatile int32_t t11 = -45153525;

    t11 = ((x549>>x550)<=(x551!=x552));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x593 = 2539U;
	static volatile uint16_t x594 = 1U;
	volatile int64_t x596 = INT64_MIN;
	int32_t t12 = -2535117;

    t12 = ((x593>>x594)<=(x595!=x596));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x674 = 0;
	static volatile int8_t x675 = -1;
	int16_t x676 = INT16_MIN;
	int32_t t13 = 4;

    t13 = ((x673>>x674)<=(x675!=x676));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x733 = 14U;
	volatile int16_t x735 = INT16_MIN;
	static volatile int32_t t14 = -100;

    t14 = ((x733>>x734)<=(x735!=x736));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x737 = UINT32_MAX;
	uint16_t x738 = 0U;
	volatile uint16_t x739 = UINT16_MAX;
	uint64_t x740 = 4777373LLU;
	static volatile int32_t t15 = -122925494;

    t15 = ((x737>>x738)<=(x739!=x740));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x762 = 10U;
	uint32_t x764 = UINT32_MAX;
	static volatile int32_t t16 = -24255;

    t16 = ((x761>>x762)<=(x763!=x764));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1021 = 337U;
	int32_t x1022 = 0;
	int8_t x1023 = -58;
	int8_t x1024 = 3;
	int32_t t17 = -3874693;

    t17 = ((x1021>>x1022)<=(x1023!=x1024));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x1026 = 2U;
	uint16_t x1028 = UINT16_MAX;
	volatile int32_t t18 = -9;

    t18 = ((x1025>>x1026)<=(x1027!=x1028));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x1029 = 0LL;
	uint8_t x1030 = 1U;
	uint8_t x1031 = UINT8_MAX;
	int8_t x1032 = INT8_MIN;
	int32_t t19 = -108;

    t19 = ((x1029>>x1030)<=(x1031!=x1032));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x1109 = UINT16_MAX;
	int8_t x1110 = 1;
	static uint64_t x1111 = 1211477201601LLU;

    t20 = ((x1109>>x1110)<=(x1111!=x1112));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1173 = 57;
	int8_t x1174 = 5;
	static int64_t x1175 = INT64_MIN;
	int8_t x1176 = -1;
	volatile int32_t t21 = 3952;

    t21 = ((x1173>>x1174)<=(x1175!=x1176));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x1189 = 116U;
	static uint8_t x1190 = 2U;
	int8_t x1191 = INT8_MAX;
	uint64_t x1192 = 1LLU;

    t22 = ((x1189>>x1190)<=(x1191!=x1192));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x1201 = 257791818U;
	uint32_t x1203 = 7012994U;
	int64_t x1204 = -1LL;
	int32_t t23 = -2752835;

    t23 = ((x1201>>x1202)<=(x1203!=x1204));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1241 = INT64_MAX;
	int32_t x1242 = 7;
	volatile uint64_t x1243 = 2173418512026LLU;
	static volatile int32_t t24 = -1;

    t24 = ((x1241>>x1242)<=(x1243!=x1244));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x1265 = INT16_MAX;
	uint16_t x1266 = 1U;
	uint32_t x1267 = 53239U;
	static uint32_t x1268 = 4256U;
	volatile int32_t t25 = 379;

    t25 = ((x1265>>x1266)<=(x1267!=x1268));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x1329 = INT16_MAX;
	uint32_t x1331 = 42U;
	uint16_t x1332 = UINT16_MAX;
	int32_t t26 = 42225;

    t26 = ((x1329>>x1330)<=(x1331!=x1332));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x1371 = INT32_MAX;
	int16_t x1372 = INT16_MIN;
	int32_t t27 = -4;

    t27 = ((x1369>>x1370)<=(x1371!=x1372));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x1509 = UINT16_MAX;
	uint8_t x1510 = 0U;
	uint32_t x1511 = UINT32_MAX;
	volatile int32_t x1512 = INT32_MAX;
	volatile int32_t t28 = 1246;

    t28 = ((x1509>>x1510)<=(x1511!=x1512));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x1526 = 0;
	static int32_t x1527 = INT32_MIN;
	int8_t x1528 = INT8_MIN;
	static int32_t t29 = 6418;

    t29 = ((x1525>>x1526)<=(x1527!=x1528));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1573 = INT32_MAX;
	uint32_t x1574 = 12U;
	int8_t x1575 = INT8_MIN;
	int64_t x1576 = INT64_MIN;

    t30 = ((x1573>>x1574)<=(x1575!=x1576));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1729 = 1;
	uint8_t x1730 = 4U;
	static uint16_t x1731 = 345U;
	static int64_t x1732 = INT64_MIN;

    t31 = ((x1729>>x1730)<=(x1731!=x1732));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1817 = UINT16_MAX;
	volatile int64_t x1819 = INT64_MIN;
	int64_t x1820 = 3686LL;
	volatile int32_t t32 = 102863706;

    t32 = ((x1817>>x1818)<=(x1819!=x1820));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x1882 = 13;
	static uint16_t x1883 = 87U;
	static volatile int32_t t33 = -2231769;

    t33 = ((x1881>>x1882)<=(x1883!=x1884));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1939 = 134911;
	volatile int8_t x1940 = 1;
	volatile int32_t t34 = 2883633;

    t34 = ((x1937>>x1938)<=(x1939!=x1940));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x2006 = 3U;
	int32_t x2007 = INT32_MIN;
	volatile int64_t x2008 = INT64_MIN;
	volatile int32_t t35 = 19354200;

    t35 = ((x2005>>x2006)<=(x2007!=x2008));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2017 = 22420638382770744LL;
	static int16_t x2018 = 14;
	int16_t x2019 = 15482;
	int16_t x2020 = 52;
	int32_t t36 = -846170;

    t36 = ((x2017>>x2018)<=(x2019!=x2020));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x2041 = INT8_MAX;
	static uint16_t x2042 = 2U;
	uint32_t x2044 = UINT32_MAX;
	volatile int32_t t37 = -54321;

    t37 = ((x2041>>x2042)<=(x2043!=x2044));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x2081 = INT64_MAX;
	volatile uint64_t x2082 = 50LLU;
	int32_t x2083 = INT32_MAX;
	uint32_t x2084 = 13U;
	int32_t t38 = 1;

    t38 = ((x2081>>x2082)<=(x2083!=x2084));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x2161 = 0;
	uint32_t x2162 = 20U;
	static int32_t x2163 = 45198;
	int32_t x2164 = 17;
	volatile int32_t t39 = 70421085;

    t39 = ((x2161>>x2162)<=(x2163!=x2164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x2209 = 1338969593U;
	volatile int32_t t40 = -1512619;

    t40 = ((x2209>>x2210)<=(x2211!=x2212));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x2257 = 43;
	int8_t x2258 = 1;
	int32_t x2259 = INT32_MAX;
	int64_t x2260 = INT64_MIN;
	volatile int32_t t41 = -37232203;

    t41 = ((x2257>>x2258)<=(x2259!=x2260));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x2261 = 8263672LLU;
	uint16_t x2262 = 1U;
	int32_t x2263 = INT32_MAX;
	int32_t x2264 = INT32_MIN;
	int32_t t42 = 1;

    t42 = ((x2261>>x2262)<=(x2263!=x2264));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x2314 = 6U;
	static uint8_t x2316 = 1U;

    t43 = ((x2313>>x2314)<=(x2315!=x2316));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x2330 = 5U;
	uint8_t x2332 = UINT8_MAX;
	int32_t t44 = -201774594;

    t44 = ((x2329>>x2330)<=(x2331!=x2332));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2485 = 0LLU;
	static int8_t x2486 = 0;
	volatile uint32_t x2487 = 1U;
	uint32_t x2488 = 25361212U;
	volatile int32_t t45 = -80916;

    t45 = ((x2485>>x2486)<=(x2487!=x2488));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x2509 = 6;
	int16_t x2510 = 18;
	static uint8_t x2511 = 5U;
	volatile int32_t t46 = 13578709;

    t46 = ((x2509>>x2510)<=(x2511!=x2512));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x2565 = INT64_MAX;
	int16_t x2566 = 6;
	int8_t x2567 = INT8_MIN;

    t47 = ((x2565>>x2566)<=(x2567!=x2568));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x2581 = 672222897371978LLU;
	int8_t x2582 = 16;
	static int8_t x2584 = INT8_MAX;
	volatile int32_t t48 = 653;

    t48 = ((x2581>>x2582)<=(x2583!=x2584));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x2853 = 5209U;
	uint64_t x2854 = 31LLU;
	uint32_t x2855 = UINT32_MAX;
	static int64_t x2856 = INT64_MIN;
	int32_t t49 = 8820;

    t49 = ((x2853>>x2854)<=(x2855!=x2856));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x2949 = 10LL;
	uint16_t x2952 = 12826U;
	volatile int32_t t50 = -1003;

    t50 = ((x2949>>x2950)<=(x2951!=x2952));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x2957 = 41120780139048LL;
	static int8_t x2960 = INT8_MIN;
	volatile int32_t t51 = 232607737;

    t51 = ((x2957>>x2958)<=(x2959!=x2960));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x2961 = INT8_MAX;
	static int64_t x2962 = 23LL;
	int16_t x2963 = -11;
	int32_t x2964 = INT32_MIN;
	int32_t t52 = 38659;

    t52 = ((x2961>>x2962)<=(x2963!=x2964));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x3013 = UINT32_MAX;
	uint32_t x3014 = 12U;
	int64_t x3015 = INT64_MIN;
	static uint32_t x3016 = UINT32_MAX;
	volatile int32_t t53 = 0;

    t53 = ((x3013>>x3014)<=(x3015!=x3016));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x3045 = UINT64_MAX;
	int16_t x3046 = 0;
	volatile int32_t x3047 = INT32_MAX;
	uint8_t x3048 = UINT8_MAX;
	static int32_t t54 = -17736;

    t54 = ((x3045>>x3046)<=(x3047!=x3048));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint8_t x3106 = 5U;
	uint16_t x3107 = 6U;
	static volatile int32_t t55 = 32260;

    t55 = ((x3105>>x3106)<=(x3107!=x3108));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x3158 = 7U;
	volatile int16_t x3159 = INT16_MIN;
	int32_t x3160 = 0;
	static int32_t t56 = 114967;

    t56 = ((x3157>>x3158)<=(x3159!=x3160));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x3209 = INT32_MAX;
	volatile int8_t x3210 = 0;
	int64_t x3211 = INT64_MIN;
	int64_t x3212 = 384427863LL;

    t57 = ((x3209>>x3210)<=(x3211!=x3212));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x3253 = UINT8_MAX;
	static uint8_t x3254 = 2U;
	volatile uint16_t x3255 = 21U;
	static volatile int16_t x3256 = 0;
	volatile int32_t t58 = 1277038;

    t58 = ((x3253>>x3254)<=(x3255!=x3256));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x3270 = 0;
	uint8_t x3271 = 1U;
	int32_t t59 = 7978081;

    t59 = ((x3269>>x3270)<=(x3271!=x3272));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x3274 = 5;
	int8_t x3275 = INT8_MIN;
	int32_t x3276 = 52989;
	volatile int32_t t60 = 48822;

    t60 = ((x3273>>x3274)<=(x3275!=x3276));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x3290 = 17U;
	volatile uint8_t x3291 = 1U;
	volatile int32_t t61 = 0;

    t61 = ((x3289>>x3290)<=(x3291!=x3292));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x3346 = 3;
	volatile int64_t x3347 = INT64_MIN;
	volatile uint64_t x3348 = 46267LLU;

    t62 = ((x3345>>x3346)<=(x3347!=x3348));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x3391 = INT32_MIN;
	volatile uint16_t x3392 = 32029U;
	volatile int32_t t63 = -130;

    t63 = ((x3389>>x3390)<=(x3391!=x3392));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x3403 = 244113652239122LL;
	int16_t x3404 = -1;
	int32_t t64 = -3003481;

    t64 = ((x3401>>x3402)<=(x3403!=x3404));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x3458 = 4LLU;
	int8_t x3460 = INT8_MIN;
	static volatile int32_t t65 = 1654;

    t65 = ((x3457>>x3458)<=(x3459!=x3460));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x3649 = 372U;
	uint8_t x3650 = 3U;
	int64_t x3652 = -1LL;
	volatile int32_t t66 = -63;

    t66 = ((x3649>>x3650)<=(x3651!=x3652));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x3693 = 11646719U;
	uint64_t x3694 = 0LLU;
	volatile uint8_t x3695 = 32U;
	int32_t x3696 = INT32_MAX;
	volatile int32_t t67 = -902050;

    t67 = ((x3693>>x3694)<=(x3695!=x3696));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x3706 = 0U;
	static int32_t x3707 = -1;
	static volatile int8_t x3708 = INT8_MAX;
	int32_t t68 = -232;

    t68 = ((x3705>>x3706)<=(x3707!=x3708));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint8_t x3802 = 4U;
	int16_t x3803 = INT16_MAX;
	volatile int32_t t69 = -2160882;

    t69 = ((x3801>>x3802)<=(x3803!=x3804));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x3886 = 1;
	volatile int16_t x3888 = INT16_MIN;
	int32_t t70 = -427138200;

    t70 = ((x3885>>x3886)<=(x3887!=x3888));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x3907 = 3U;
	int32_t t71 = -132954588;

    t71 = ((x3905>>x3906)<=(x3907!=x3908));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x4037 = INT64_MAX;
	static int8_t x4038 = 14;
	volatile int16_t x4039 = -1;
	int8_t x4040 = -1;

    t72 = ((x4037>>x4038)<=(x4039!=x4040));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x4129 = INT64_MAX;
	uint8_t x4130 = 6U;
	static volatile int16_t x4132 = -57;
	int32_t t73 = 11368854;

    t73 = ((x4129>>x4130)<=(x4131!=x4132));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x4133 = UINT16_MAX;
	uint8_t x4134 = 3U;
	static uint32_t x4135 = 7028906U;
	volatile int32_t t74 = 1357;

    t74 = ((x4133>>x4134)<=(x4135!=x4136));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x4149 = UINT16_MAX;
	volatile int8_t x4150 = 0;
	int8_t x4151 = INT8_MAX;
	int16_t x4152 = -108;
	int32_t t75 = 0;

    t75 = ((x4149>>x4150)<=(x4151!=x4152));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x4217 = UINT16_MAX;
	volatile uint16_t x4218 = 12U;
	int64_t x4219 = INT64_MIN;
	volatile int32_t t76 = 1801;

    t76 = ((x4217>>x4218)<=(x4219!=x4220));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x4221 = UINT16_MAX;
	int16_t x4222 = 25;
	static int64_t x4223 = -38566283731590LL;

    t77 = ((x4221>>x4222)<=(x4223!=x4224));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x4281 = INT8_MAX;
	int8_t x4282 = 0;
	uint8_t x4283 = 64U;
	int8_t x4284 = INT8_MIN;
	static volatile int32_t t78 = 2006;

    t78 = ((x4281>>x4282)<=(x4283!=x4284));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x4341 = 800U;
	int8_t x4342 = 25;
	static uint64_t x4343 = UINT64_MAX;
	volatile uint64_t x4344 = 14200443037946LLU;
	volatile int32_t t79 = 76256;

    t79 = ((x4341>>x4342)<=(x4343!=x4344));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x4361 = INT8_MAX;
	uint8_t x4362 = 0U;
	volatile int16_t x4363 = INT16_MAX;
	uint8_t x4364 = 14U;
	volatile int32_t t80 = -7339555;

    t80 = ((x4361>>x4362)<=(x4363!=x4364));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x4365 = 2;
	int8_t x4366 = 31;
	static volatile int64_t x4368 = -993186200294722875LL;
	static volatile int32_t t81 = -5;

    t81 = ((x4365>>x4366)<=(x4367!=x4368));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint64_t x4437 = 399817125LLU;
	static uint32_t x4438 = 14U;
	int8_t x4439 = -1;

    t82 = ((x4437>>x4438)<=(x4439!=x4440));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x4529 = UINT16_MAX;
	uint8_t x4530 = 6U;
	uint8_t x4531 = 92U;
	static volatile int32_t x4532 = 1542415;
	int32_t t83 = -4;

    t83 = ((x4529>>x4530)<=(x4531!=x4532));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x4593 = UINT8_MAX;
	static uint8_t x4594 = 1U;
	static volatile uint8_t x4595 = UINT8_MAX;
	int8_t x4596 = 0;

    t84 = ((x4593>>x4594)<=(x4595!=x4596));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x4749 = 128170525U;
	int16_t x4752 = INT16_MAX;
	int32_t t85 = -1;

    t85 = ((x4749>>x4750)<=(x4751!=x4752));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x4781 = UINT8_MAX;
	int16_t x4782 = 0;
	int8_t x4783 = -26;
	int16_t x4784 = -1;
	int32_t t86 = -119;

    t86 = ((x4781>>x4782)<=(x4783!=x4784));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x4813 = 2216533763LLU;
	int16_t x4814 = 5;
	int8_t x4815 = 24;
	static volatile uint8_t x4816 = 3U;
	int32_t t87 = 15;

    t87 = ((x4813>>x4814)<=(x4815!=x4816));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x4854 = 26;
	volatile int64_t x4855 = 127LL;
	uint16_t x4856 = UINT16_MAX;
	int32_t t88 = 13654577;

    t88 = ((x4853>>x4854)<=(x4855!=x4856));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x4857 = INT16_MAX;
	int16_t x4858 = 4;
	uint64_t x4859 = UINT64_MAX;
	volatile int64_t x4860 = -1LL;
	int32_t t89 = 151002;

    t89 = ((x4857>>x4858)<=(x4859!=x4860));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x4889 = INT8_MAX;
	int8_t x4890 = 1;
	static int8_t x4891 = INT8_MAX;
	static volatile int32_t t90 = 234;

    t90 = ((x4889>>x4890)<=(x4891!=x4892));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x4957 = UINT32_MAX;
	uint16_t x4958 = 14U;
	volatile uint8_t x4959 = 22U;
	int16_t x4960 = INT16_MAX;
	int32_t t91 = -77774749;

    t91 = ((x4957>>x4958)<=(x4959!=x4960));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x4981 = 127LLU;
	static uint8_t x4982 = 38U;
	int16_t x4983 = INT16_MIN;
	volatile int16_t x4984 = 1;
	static volatile int32_t t92 = -243256471;

    t92 = ((x4981>>x4982)<=(x4983!=x4984));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x4989 = INT32_MAX;
	static volatile uint8_t x4990 = 0U;
	static int32_t x4991 = INT32_MIN;
	volatile int16_t x4992 = INT16_MIN;
	int32_t t93 = 63755600;

    t93 = ((x4989>>x4990)<=(x4991!=x4992));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x4998 = 1;
	int64_t x4999 = INT64_MIN;
	int32_t x5000 = 584401;

    t94 = ((x4997>>x4998)<=(x4999!=x5000));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x5001 = INT64_MAX;
	uint8_t x5002 = 1U;
	int32_t x5003 = INT32_MIN;
	volatile int16_t x5004 = 1078;
	int32_t t95 = 3102;

    t95 = ((x5001>>x5002)<=(x5003!=x5004));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint32_t x5005 = UINT32_MAX;
	int64_t x5006 = 3LL;
	static uint8_t x5007 = UINT8_MAX;
	static int32_t x5008 = INT32_MAX;

    t96 = ((x5005>>x5006)<=(x5007!=x5008));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x5085 = 277LLU;
	volatile int32_t x5086 = 2;
	uint64_t x5087 = 44391327686696LLU;
	static volatile int32_t t97 = 651855029;

    t97 = ((x5085>>x5086)<=(x5087!=x5088));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x5117 = 1757096754081973LL;
	uint64_t x5118 = 8LLU;
	volatile int16_t x5119 = INT16_MIN;
	static uint32_t x5120 = UINT32_MAX;
	static volatile int32_t t98 = -7;

    t98 = ((x5117>>x5118)<=(x5119!=x5120));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x5153 = UINT8_MAX;
	uint16_t x5154 = 27U;
	static int64_t x5155 = 1063463086940LL;
	volatile int32_t t99 = -178337000;

    t99 = ((x5153>>x5154)<=(x5155!=x5156));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x5170 = 5;
	uint16_t x5171 = UINT16_MAX;
	uint32_t x5172 = 1206562U;
	volatile int32_t t100 = -1;

    t100 = ((x5169>>x5170)<=(x5171!=x5172));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x5209 = UINT32_MAX;
	int16_t x5210 = 2;
	int8_t x5211 = -1;
	int8_t x5212 = 1;
	int32_t t101 = -2;

    t101 = ((x5209>>x5210)<=(x5211!=x5212));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x5257 = 577637827005LL;
	static volatile uint64_t x5259 = 11193423LLU;
	int64_t x5260 = INT64_MAX;
	volatile int32_t t102 = 1;

    t102 = ((x5257>>x5258)<=(x5259!=x5260));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x5345 = 0U;
	uint16_t x5346 = 0U;
	uint32_t x5347 = 10658U;
	volatile int32_t t103 = 48267;

    t103 = ((x5345>>x5346)<=(x5347!=x5348));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x5373 = 29U;
	volatile int32_t x5375 = -1;
	static int64_t x5376 = -1LL;
	int32_t t104 = 258173;

    t104 = ((x5373>>x5374)<=(x5375!=x5376));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x5410 = 1;
	int16_t x5411 = 2;
	int32_t x5412 = INT32_MAX;
	volatile int32_t t105 = 60437515;

    t105 = ((x5409>>x5410)<=(x5411!=x5412));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x5413 = 1359639897U;
	int8_t x5414 = 15;
	volatile int32_t x5415 = -2049234;
	int32_t x5416 = INT32_MIN;
	volatile int32_t t106 = -477757386;

    t106 = ((x5413>>x5414)<=(x5415!=x5416));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x5433 = 9;
	volatile int16_t x5434 = 0;
	static int64_t x5435 = 2510LL;
	volatile int64_t x5436 = INT64_MIN;
	volatile int32_t t107 = -1026759;

    t107 = ((x5433>>x5434)<=(x5435!=x5436));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x5453 = 4LLU;
	int16_t x5455 = INT16_MAX;
	int64_t x5456 = -14051309730182LL;
	volatile int32_t t108 = 1482709;

    t108 = ((x5453>>x5454)<=(x5455!=x5456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x5521 = UINT64_MAX;
	volatile int32_t x5523 = INT32_MIN;
	int32_t t109 = -612764548;

    t109 = ((x5521>>x5522)<=(x5523!=x5524));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x5549 = INT32_MAX;
	int8_t x5550 = 1;
	uint64_t x5551 = UINT64_MAX;
	int32_t t110 = -13;

    t110 = ((x5549>>x5550)<=(x5551!=x5552));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x5577 = INT64_MAX;
	static int16_t x5578 = 13;
	volatile int64_t x5579 = INT64_MIN;
	int8_t x5580 = -1;
	static volatile int32_t t111 = -47;

    t111 = ((x5577>>x5578)<=(x5579!=x5580));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x5585 = UINT16_MAX;
	static int8_t x5586 = 0;
	volatile int32_t t112 = 542686;

    t112 = ((x5585>>x5586)<=(x5587!=x5588));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x5681 = 10425286120LL;
	int8_t x5682 = 0;
	int16_t x5683 = INT16_MAX;
	int32_t x5684 = INT32_MAX;
	int32_t t113 = -12860721;

    t113 = ((x5681>>x5682)<=(x5683!=x5684));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x5685 = UINT32_MAX;
	uint8_t x5686 = 14U;
	int16_t x5687 = INT16_MIN;
	int8_t x5688 = -1;
	volatile int32_t t114 = -1040102;

    t114 = ((x5685>>x5686)<=(x5687!=x5688));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x5713 = 30;
	uint8_t x5714 = 1U;
	volatile int32_t x5716 = INT32_MAX;
	volatile int32_t t115 = 6;

    t115 = ((x5713>>x5714)<=(x5715!=x5716));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x5741 = 6U;
	int32_t x5744 = INT32_MAX;
	static volatile int32_t t116 = -49973;

    t116 = ((x5741>>x5742)<=(x5743!=x5744));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x5827 = -1LL;
	int64_t x5828 = 105405LL;
	static int32_t t117 = 0;

    t117 = ((x5825>>x5826)<=(x5827!=x5828));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x5877 = INT64_MAX;
	static volatile uint32_t x5878 = 23U;
	int16_t x5879 = 5894;
	int64_t x5880 = INT64_MIN;
	volatile int32_t t118 = -17251616;

    t118 = ((x5877>>x5878)<=(x5879!=x5880));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x5925 = 802;
	int16_t x5927 = -551;
	volatile uint16_t x5928 = 1U;
	volatile int32_t t119 = -56576717;

    t119 = ((x5925>>x5926)<=(x5927!=x5928));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x6001 = 219521620LLU;
	uint8_t x6002 = 0U;
	int16_t x6003 = INT16_MAX;
	static volatile int8_t x6004 = -1;
	int32_t t120 = -36712611;

    t120 = ((x6001>>x6002)<=(x6003!=x6004));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x6025 = 120746257U;
	int8_t x6027 = INT8_MIN;
	static int32_t x6028 = -1;
	static volatile int32_t t121 = -649174911;

    t121 = ((x6025>>x6026)<=(x6027!=x6028));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x6037 = UINT64_MAX;
	uint8_t x6038 = 0U;
	uint64_t x6040 = 1596535762240LLU;
	static volatile int32_t t122 = -23611;

    t122 = ((x6037>>x6038)<=(x6039!=x6040));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x6065 = 1;
	static uint8_t x6066 = 7U;
	int16_t x6068 = INT16_MIN;

    t123 = ((x6065>>x6066)<=(x6067!=x6068));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x6081 = UINT64_MAX;
	int16_t x6082 = 0;
	static volatile uint64_t x6083 = UINT64_MAX;
	static int32_t x6084 = -81;
	int32_t t124 = -33552838;

    t124 = ((x6081>>x6082)<=(x6083!=x6084));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x6189 = UINT64_MAX;
	int16_t x6191 = 0;
	int64_t x6192 = INT64_MAX;
	volatile int32_t t125 = -2611479;

    t125 = ((x6189>>x6190)<=(x6191!=x6192));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x6201 = UINT64_MAX;
	int64_t x6203 = INT64_MIN;
	static int64_t x6204 = -1429570450LL;
	int32_t t126 = 51;

    t126 = ((x6201>>x6202)<=(x6203!=x6204));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x6229 = 10007728U;
	int8_t x6230 = 0;
	volatile int32_t x6231 = -5870;
	volatile int32_t t127 = -5;

    t127 = ((x6229>>x6230)<=(x6231!=x6232));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x6245 = 26;
	static int64_t x6247 = INT64_MIN;
	static int64_t x6248 = INT64_MIN;
	static int32_t t128 = -282;

    t128 = ((x6245>>x6246)<=(x6247!=x6248));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x6357 = UINT32_MAX;
	int16_t x6358 = 1;
	uint64_t x6359 = UINT64_MAX;
	int32_t x6360 = -1;
	volatile int32_t t129 = 21;

    t129 = ((x6357>>x6358)<=(x6359!=x6360));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x6377 = INT64_MAX;
	uint8_t x6378 = 22U;
	static int8_t x6379 = INT8_MIN;
	int64_t x6380 = -6068LL;
	volatile int32_t t130 = 106926;

    t130 = ((x6377>>x6378)<=(x6379!=x6380));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x6427 = -1;
	static volatile int32_t t131 = 0;

    t131 = ((x6425>>x6426)<=(x6427!=x6428));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x6438 = 15;
	static uint32_t x6439 = 463407U;
	int32_t x6440 = -1;
	volatile int32_t t132 = 1;

    t132 = ((x6437>>x6438)<=(x6439!=x6440));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x6473 = 211293LLU;
	uint8_t x6474 = 0U;
	static uint64_t x6475 = 101549LLU;
	static uint16_t x6476 = 1049U;

    t133 = ((x6473>>x6474)<=(x6475!=x6476));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x6509 = 7;
	uint8_t x6510 = 3U;
	int32_t x6511 = INT32_MIN;
	static int64_t x6512 = INT64_MAX;
	int32_t t134 = 53843304;

    t134 = ((x6509>>x6510)<=(x6511!=x6512));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x6633 = UINT8_MAX;
	int64_t x6634 = 7LL;
	int16_t x6635 = -1;
	volatile int32_t t135 = -4366295;

    t135 = ((x6633>>x6634)<=(x6635!=x6636));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x6681 = 0LLU;
	int8_t x6682 = 0;
	static int8_t x6683 = -12;
	int16_t x6684 = -1;
	volatile int32_t t136 = -236611;

    t136 = ((x6681>>x6682)<=(x6683!=x6684));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x6801 = 28635U;
	int8_t x6803 = -1;

    t137 = ((x6801>>x6802)<=(x6803!=x6804));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x6865 = 516U;
	volatile uint32_t x6867 = 755U;
	uint64_t x6868 = UINT64_MAX;

    t138 = ((x6865>>x6866)<=(x6867!=x6868));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x6883 = -1;
	uint64_t x6884 = 5624LLU;
	volatile int32_t t139 = -3034;

    t139 = ((x6881>>x6882)<=(x6883!=x6884));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x6933 = 26U;
	volatile uint8_t x6934 = 4U;
	int64_t x6935 = INT64_MIN;
	volatile int32_t t140 = -1183;

    t140 = ((x6933>>x6934)<=(x6935!=x6936));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x6997 = 5U;
	int64_t x6999 = 3189934LL;
	uint64_t x7000 = UINT64_MAX;
	int32_t t141 = 29030;

    t141 = ((x6997>>x6998)<=(x6999!=x7000));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x7001 = 1;
	uint8_t x7002 = 23U;
	int8_t x7004 = -1;
	volatile int32_t t142 = 29;

    t142 = ((x7001>>x7002)<=(x7003!=x7004));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x7069 = 303671616176526LL;
	int8_t x7070 = 53;
	int32_t x7072 = INT32_MIN;
	volatile int32_t t143 = 1;

    t143 = ((x7069>>x7070)<=(x7071!=x7072));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x7097 = 338497792869270LLU;
	int8_t x7098 = 5;
	static int32_t x7100 = INT32_MIN;
	volatile int32_t t144 = -186407145;

    t144 = ((x7097>>x7098)<=(x7099!=x7100));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x7174 = 0U;
	int32_t x7175 = -1;
	int32_t t145 = 11504516;

    t145 = ((x7173>>x7174)<=(x7175!=x7176));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x7261 = 5U;
	volatile int16_t x7262 = 7;
	volatile int32_t x7263 = INT32_MAX;
	static int32_t t146 = 218543906;

    t146 = ((x7261>>x7262)<=(x7263!=x7264));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x7269 = UINT8_MAX;
	uint64_t x7271 = 166368453963LLU;
	volatile int64_t x7272 = INT64_MAX;
	int32_t t147 = -14;

    t147 = ((x7269>>x7270)<=(x7271!=x7272));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x7309 = 1;
	uint8_t x7310 = 1U;
	volatile int64_t x7311 = -9839758934LL;
	uint64_t x7312 = UINT64_MAX;

    t148 = ((x7309>>x7310)<=(x7311!=x7312));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x7337 = UINT32_MAX;
	uint32_t x7338 = 3U;
	static int16_t x7339 = -1;
	volatile int32_t t149 = -80509;

    t149 = ((x7337>>x7338)<=(x7339!=x7340));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x7413 = UINT16_MAX;
	uint8_t x7414 = 3U;
	int8_t x7415 = 50;
	static int64_t x7416 = INT64_MIN;
	volatile int32_t t150 = 343427;

    t150 = ((x7413>>x7414)<=(x7415!=x7416));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x7505 = UINT64_MAX;
	int64_t x7506 = 4LL;
	int16_t x7507 = INT16_MIN;
	static int16_t x7508 = -1899;

    t151 = ((x7505>>x7506)<=(x7507!=x7508));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x7541 = INT16_MAX;
	int16_t x7542 = 0;
	uint64_t x7544 = UINT64_MAX;
	volatile int32_t t152 = -29400;

    t152 = ((x7541>>x7542)<=(x7543!=x7544));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x7581 = UINT64_MAX;
	int16_t x7583 = INT16_MAX;
	int16_t x7584 = -1;
	volatile int32_t t153 = 121995;

    t153 = ((x7581>>x7582)<=(x7583!=x7584));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x7614 = 7;
	uint16_t x7615 = UINT16_MAX;
	static int32_t x7616 = INT32_MIN;
	volatile int32_t t154 = 349212;

    t154 = ((x7613>>x7614)<=(x7615!=x7616));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x7618 = 1LLU;
	int16_t x7619 = -1;
	int16_t x7620 = INT16_MIN;
	static int32_t t155 = -4332560;

    t155 = ((x7617>>x7618)<=(x7619!=x7620));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x7769 = INT64_MAX;
	int16_t x7770 = 62;
	uint8_t x7771 = UINT8_MAX;
	uint8_t x7772 = UINT8_MAX;
	volatile int32_t t156 = 236243;

    t156 = ((x7769>>x7770)<=(x7771!=x7772));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x7789 = 5908U;
	int8_t x7790 = 4;
	int64_t x7792 = 90463LL;
	int32_t t157 = 3171;

    t157 = ((x7789>>x7790)<=(x7791!=x7792));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x7793 = 103;
	static int16_t x7794 = 0;
	int16_t x7795 = INT16_MIN;
	int32_t x7796 = INT32_MIN;
	volatile int32_t t158 = 11934;

    t158 = ((x7793>>x7794)<=(x7795!=x7796));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x7886 = 1;
	uint16_t x7887 = 27U;
	int16_t x7888 = INT16_MIN;
	int32_t t159 = 32870183;

    t159 = ((x7885>>x7886)<=(x7887!=x7888));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x8001 = INT32_MAX;
	volatile int8_t x8002 = 0;
	int32_t x8003 = INT32_MAX;
	uint8_t x8004 = 14U;
	volatile int32_t t160 = -6;

    t160 = ((x8001>>x8002)<=(x8003!=x8004));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x8061 = 239U;
	uint16_t x8062 = 2U;
	int16_t x8064 = INT16_MIN;
	static int32_t t161 = 887;

    t161 = ((x8061>>x8062)<=(x8063!=x8064));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint8_t x8074 = 45U;
	static int32_t x8075 = -1;
	volatile int64_t x8076 = INT64_MIN;
	volatile int32_t t162 = 28433878;

    t162 = ((x8073>>x8074)<=(x8075!=x8076));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x8121 = UINT16_MAX;
	volatile uint8_t x8122 = 15U;
	int32_t x8124 = -1;
	volatile int32_t t163 = -121315163;

    t163 = ((x8121>>x8122)<=(x8123!=x8124));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x8187 = -1;
	int32_t t164 = 20052110;

    t164 = ((x8185>>x8186)<=(x8187!=x8188));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x8189 = 6471U;
	uint8_t x8190 = 6U;
	volatile int32_t x8191 = 944303;
	int8_t x8192 = INT8_MIN;

    t165 = ((x8189>>x8190)<=(x8191!=x8192));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint8_t x8253 = 1U;
	int64_t x8254 = 26LL;
	static int8_t x8255 = -1;
	uint16_t x8256 = 1U;
	volatile int32_t t166 = -842103940;

    t166 = ((x8253>>x8254)<=(x8255!=x8256));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x8361 = INT16_MAX;
	static uint16_t x8362 = 31U;
	static int32_t x8363 = INT32_MIN;
	int32_t x8364 = -1;
	volatile int32_t t167 = 883;

    t167 = ((x8361>>x8362)<=(x8363!=x8364));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x8417 = 94U;
	uint8_t x8418 = 2U;
	uint32_t x8419 = 81U;
	int32_t t168 = 1823375;

    t168 = ((x8417>>x8418)<=(x8419!=x8420));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x8433 = INT64_MAX;
	int8_t x8434 = 1;
	uint8_t x8436 = UINT8_MAX;

    t169 = ((x8433>>x8434)<=(x8435!=x8436));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x8454 = 0U;
	uint16_t x8455 = 0U;
	volatile uint32_t x8456 = 138256U;
	static int32_t t170 = 33933404;

    t170 = ((x8453>>x8454)<=(x8455!=x8456));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x8497 = INT32_MAX;
	uint8_t x8498 = 5U;
	uint64_t x8499 = 119LLU;
	volatile int8_t x8500 = -15;
	volatile int32_t t171 = 495;

    t171 = ((x8497>>x8498)<=(x8499!=x8500));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x8511 = INT16_MAX;
	static volatile uint64_t x8512 = 2414213LLU;
	int32_t t172 = 0;

    t172 = ((x8509>>x8510)<=(x8511!=x8512));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x8513 = 229471U;
	volatile int8_t x8514 = 0;
	uint32_t x8515 = UINT32_MAX;
	volatile int64_t x8516 = -1LL;
	volatile int32_t t173 = 414;

    t173 = ((x8513>>x8514)<=(x8515!=x8516));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x8541 = UINT32_MAX;
	uint64_t x8542 = 0LLU;
	int32_t t174 = -16888;

    t174 = ((x8541>>x8542)<=(x8543!=x8544));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x8557 = 14596028163LL;
	uint8_t x8558 = 4U;
	volatile int64_t x8559 = -2564943LL;
	volatile int8_t x8560 = 59;

    t175 = ((x8557>>x8558)<=(x8559!=x8560));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x8581 = UINT64_MAX;
	static uint8_t x8582 = 27U;
	int8_t x8583 = -29;
	int16_t x8584 = INT16_MIN;
	static volatile int32_t t176 = 5318;

    t176 = ((x8581>>x8582)<=(x8583!=x8584));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x8597 = UINT16_MAX;
	int32_t x8598 = 21;
	int64_t x8600 = 31752365326533946LL;
	int32_t t177 = 441881;

    t177 = ((x8597>>x8598)<=(x8599!=x8600));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x8665 = 7426U;
	volatile uint8_t x8667 = UINT8_MAX;
	volatile int32_t t178 = 2;

    t178 = ((x8665>>x8666)<=(x8667!=x8668));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x8750 = 29U;
	int16_t x8751 = 9339;
	int8_t x8752 = -1;

    t179 = ((x8749>>x8750)<=(x8751!=x8752));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x8789 = 1811097083LLU;
	uint8_t x8790 = 9U;
	int32_t x8791 = -16;
	volatile int32_t x8792 = INT32_MIN;

    t180 = ((x8789>>x8790)<=(x8791!=x8792));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x8805 = 10U;
	uint16_t x8806 = 30U;
	static int16_t x8807 = 1;
	static uint32_t x8808 = 1071092794U;
	int32_t t181 = 1;

    t181 = ((x8805>>x8806)<=(x8807!=x8808));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x8917 = INT32_MAX;
	int8_t x8918 = 30;
	volatile int8_t x8919 = -1;
	int16_t x8920 = 1008;
	volatile int32_t t182 = 12;

    t182 = ((x8917>>x8918)<=(x8919!=x8920));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x8925 = INT64_MAX;
	static volatile int8_t x8926 = 15;
	int16_t x8927 = INT16_MAX;
	uint16_t x8928 = UINT16_MAX;
	volatile int32_t t183 = 1;

    t183 = ((x8925>>x8926)<=(x8927!=x8928));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x8953 = 647U;
	int8_t x8954 = 1;
	static volatile int16_t x8955 = INT16_MAX;
	static int64_t x8956 = INT64_MIN;
	int32_t t184 = -28;

    t184 = ((x8953>>x8954)<=(x8955!=x8956));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x9089 = 27U;
	uint8_t x9090 = 7U;
	static volatile uint8_t x9092 = UINT8_MAX;
	int32_t t185 = -13615;

    t185 = ((x9089>>x9090)<=(x9091!=x9092));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x9122 = 52;
	int8_t x9123 = -1;
	int64_t x9124 = INT64_MIN;
	static int32_t t186 = -633;

    t186 = ((x9121>>x9122)<=(x9123!=x9124));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x9135 = -1;
	static volatile int16_t x9136 = 474;
	volatile int32_t t187 = 348300;

    t187 = ((x9133>>x9134)<=(x9135!=x9136));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x9237 = 26096U;
	uint8_t x9238 = 1U;
	int16_t x9239 = 1721;
	volatile int32_t t188 = -842;

    t188 = ((x9237>>x9238)<=(x9239!=x9240));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x9258 = 4;
	uint64_t x9259 = UINT64_MAX;
	static uint64_t x9260 = 11LLU;
	int32_t t189 = -3926;

    t189 = ((x9257>>x9258)<=(x9259!=x9260));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x9262 = 8U;
	static uint8_t x9264 = UINT8_MAX;
	volatile int32_t t190 = 973;

    t190 = ((x9261>>x9262)<=(x9263!=x9264));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x9289 = 23212812278142LL;
	int8_t x9290 = 1;
	int32_t x9292 = INT32_MIN;
	static int32_t t191 = 284071;

    t191 = ((x9289>>x9290)<=(x9291!=x9292));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x9369 = 10104U;
	static uint8_t x9370 = 0U;
	volatile int32_t x9371 = INT32_MAX;
	int8_t x9372 = 14;

    t192 = ((x9369>>x9370)<=(x9371!=x9372));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x9493 = 0U;
	volatile uint32_t x9495 = UINT32_MAX;
	int32_t x9496 = INT32_MIN;
	int32_t t193 = 311651390;

    t193 = ((x9493>>x9494)<=(x9495!=x9496));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x9509 = 146;
	static uint8_t x9510 = 1U;
	uint32_t x9511 = 107658678U;
	volatile int16_t x9512 = INT16_MAX;
	int32_t t194 = 1;

    t194 = ((x9509>>x9510)<=(x9511!=x9512));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x9523 = UINT64_MAX;
	uint16_t x9524 = UINT16_MAX;

    t195 = ((x9521>>x9522)<=(x9523!=x9524));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x9533 = INT16_MAX;
	int8_t x9534 = 3;
	static uint64_t x9535 = UINT64_MAX;
	static volatile int32_t t196 = 34208705;

    t196 = ((x9533>>x9534)<=(x9535!=x9536));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x9593 = 42LL;
	int64_t x9595 = 72LL;
	uint32_t x9596 = 771429U;
	int32_t t197 = 253;

    t197 = ((x9593>>x9594)<=(x9595!=x9596));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x9689 = 9;
	uint16_t x9690 = 10U;
	int64_t x9691 = -1LL;
	uint8_t x9692 = 79U;
	volatile int32_t t198 = -506;

    t198 = ((x9689>>x9690)<=(x9691!=x9692));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x9745 = UINT16_MAX;
	static volatile uint32_t x9747 = 399911U;
	volatile int32_t t199 = 1;

    t199 = ((x9745>>x9746)<=(x9747!=x9748));

    if (t199 != 1) { NG(); } else { ; }
	
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

