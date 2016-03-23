
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

static uint16_t x5 = 101U;
static uint64_t x6 = UINT64_MAX;
static int32_t x7 = -1;
static int8_t x13 = INT8_MAX;
int32_t t1 = -156726863;
volatile int32_t t8 = -187654;
static uint32_t x693 = 103792556U;
uint8_t x804 = 11U;
int32_t x845 = 2047794;
uint8_t x928 = 3U;
int64_t x1049 = INT64_MAX;
static int64_t x1170 = INT64_MIN;
static uint16_t x1270 = UINT16_MAX;
int16_t x1272 = 0;
int32_t t20 = 1195033;
int8_t x1379 = -1;
int8_t x1424 = 0;
int8_t x1468 = 55;
volatile int64_t t23 = -30LL;
uint32_t x1535 = 65200U;
static int8_t x1536 = 5;
static volatile uint16_t x1624 = 19U;
volatile int32_t t27 = -80455963;
static uint16_t x2044 = 10U;
int32_t x2051 = -1;
volatile uint16_t x2077 = UINT16_MAX;
static int8_t x2110 = INT8_MAX;
int64_t x2143 = -98274187748877908LL;
int8_t x2266 = INT8_MIN;
int16_t x2300 = 1;
uint64_t x2309 = UINT64_MAX;
volatile uint64_t t36 = 103319700380450LLU;
static uint64_t x2365 = 1726LLU;
uint16_t x2366 = UINT16_MAX;
uint64_t x2368 = 45LLU;
static uint8_t x2584 = 5U;
int32_t t39 = -691;
volatile uint64_t t40 = 368721LLU;
int64_t x2613 = INT64_MAX;
int16_t x2678 = -11125;
int32_t t42 = 66704149;
uint8_t x2685 = 17U;
uint32_t x2725 = 326U;
uint16_t x2728 = 0U;
uint64_t t47 = 10040751LLU;
uint32_t x2992 = 2U;
uint64_t t53 = 16085641068LLU;
uint8_t x3292 = 0U;
int16_t x3419 = 93;
static volatile int8_t x3420 = 8;
uint16_t x3461 = 2U;
uint8_t x3480 = 0U;
volatile uint32_t t61 = 2007965189U;
volatile int16_t x3635 = -1;
int8_t x3793 = INT8_MAX;
uint32_t x3795 = 33259413U;
uint8_t x3796 = 1U;
volatile uint32_t x3830 = UINT32_MAX;
uint16_t x4053 = 7195U;
volatile int64_t x4077 = 2633415LL;
int8_t x4119 = -1;
static uint8_t x4150 = 0U;
uint16_t x4152 = 2U;
uint32_t x4181 = 122U;
int64_t x4182 = -4094732558296LL;
int64_t x4184 = 0LL;
int32_t x4217 = INT32_MAX;
int64_t x4219 = INT64_MIN;
uint8_t x4277 = 123U;
int16_t x4278 = -156;
volatile uint32_t x4305 = 19883U;
volatile uint64_t t80 = 14860300797652954LLU;
static volatile uint64_t t82 = 215803161882LLU;
uint32_t x4425 = 76U;
volatile uint16_t x4426 = 10U;
int32_t x4427 = INT32_MIN;
uint8_t x4428 = 6U;
uint32_t t83 = 1343U;
volatile int32_t t84 = -5;
int64_t x4574 = INT64_MIN;
uint16_t x4576 = 9U;
volatile int32_t t87 = 1;
uint8_t x4721 = UINT8_MAX;
uint16_t x4722 = 319U;
int64_t x4735 = 260681LL;
volatile int32_t t90 = 3810104;
volatile int32_t t93 = -297;
int32_t t94 = 100268;
int8_t x5244 = 7;
volatile uint64_t x5249 = UINT64_MAX;
static int64_t x5250 = INT64_MIN;
uint32_t x5377 = 127U;
static int64_t x5394 = -490LL;
volatile int64_t t101 = 1804351303648LL;
static int16_t x5426 = 7;
volatile uint16_t x5625 = UINT16_MAX;
static int16_t x5651 = INT16_MIN;
int8_t x5714 = INT8_MAX;
static int8_t x5768 = 0;
int32_t t111 = 69100492;
volatile int32_t t114 = 1273;
static uint32_t x6017 = 444U;
int16_t x6068 = 8;
static uint32_t x6281 = 4U;
int8_t x6282 = 3;
static volatile int32_t x6321 = 0;
int32_t x6322 = INT32_MIN;
static int16_t x6363 = -1;
uint8_t x6381 = UINT8_MAX;
uint16_t x6512 = 14U;
int64_t x6587 = -7215LL;
int32_t x6608 = 7;
int16_t x6638 = -1;
static int32_t x6639 = -1;
int32_t x6640 = 0;
int32_t t126 = -323321;
int64_t x6702 = INT64_MAX;
int8_t x6724 = 22;
int16_t x6838 = -1;
int32_t t131 = -115;
int16_t x6868 = 1;
static int32_t t133 = -51098076;
volatile uint16_t x6929 = UINT16_MAX;
uint32_t x6932 = 2U;
volatile int32_t t134 = 25;
uint8_t x7036 = 0U;
volatile uint64_t x7147 = UINT64_MAX;
uint32_t x7148 = 25U;
static volatile uint64_t x7263 = 2530421790117474LLU;
int32_t x7539 = -1;
static int64_t x7566 = INT64_MIN;
int8_t x7567 = INT8_MIN;
uint16_t x7655 = 1U;
static volatile uint16_t x7656 = 14U;
int64_t x7709 = INT64_MAX;
uint32_t x7710 = 19U;
int16_t x7766 = 28;
int64_t x7793 = INT64_MAX;
static uint16_t x7865 = 13U;
static int64_t x7866 = -11051121LL;
static int64_t x7907 = INT64_MIN;
int32_t x7982 = -51604;
static int32_t t155 = 58;
volatile int64_t t157 = -128658477LL;
static volatile int32_t x8137 = INT32_MAX;
volatile uint64_t x8140 = 2LLU;
int32_t t158 = -201;
volatile int16_t x8158 = -1;
int16_t x8183 = INT16_MIN;
int16_t x8259 = -7796;
volatile int16_t x8262 = INT16_MAX;
static volatile uint8_t x8277 = 5U;
int8_t x8292 = 4;
static int16_t x8475 = -101;
static volatile int8_t x8516 = 8;
int32_t x8574 = -30992924;
static uint8_t x8575 = 19U;
uint32_t t167 = 362393462U;
volatile int32_t x8722 = INT32_MAX;
volatile int64_t x8723 = INT64_MAX;
volatile int32_t t169 = 33;
int64_t x8730 = 1737866675LL;
int64_t x8731 = 20293119154582114LL;
uint32_t x8732 = 43U;
volatile int32_t t171 = -44346;
static int32_t x8765 = 96549;
int32_t x8807 = 1;
int32_t t173 = 1736104;
int32_t t174 = 220797803;
uint32_t x8967 = 15U;
static int32_t t176 = 27988615;
volatile uint8_t x9148 = 2U;
int32_t t179 = 102540;
int16_t x9158 = INT16_MAX;
volatile uint32_t x9160 = 1U;
uint16_t x9252 = 12U;
static int32_t t183 = 0;
uint8_t x9308 = 0U;
static int32_t t184 = 223971659;
static uint16_t x9317 = 308U;
volatile uint16_t x9318 = 399U;
uint64_t x9319 = 7076874380370175695LLU;
int16_t x9383 = -1;
static int8_t x9385 = 8;
static int32_t x9386 = -1;
int32_t x9387 = -56699077;
static volatile int32_t t188 = -36;
int16_t x9664 = 1;
int32_t x9839 = 1157;
static uint32_t x9913 = UINT32_MAX;


void f0(void) {
    	static int8_t x8 = 3;
	int32_t t0 = -72320719;

    t0 = ((x5>>(x6==x7))>>x8);

    if (t0 != 6) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x14 = -216;
	static int64_t x15 = -16625594798219681LL;
	int8_t x16 = 0;

    t1 = ((x13>>(x14==x15))>>x16);

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x41 = INT32_MAX;
	volatile int8_t x42 = INT8_MAX;
	int32_t x43 = INT32_MIN;
	volatile uint8_t x44 = 17U;
	volatile int32_t t2 = 45;

    t2 = ((x41>>(x42==x43))>>x44);

    if (t2 != 16383) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x117 = UINT64_MAX;
	volatile uint8_t x118 = UINT8_MAX;
	volatile int32_t x119 = INT32_MIN;
	uint8_t x120 = 3U;
	uint64_t t3 = 127924700243373157LLU;

    t3 = ((x117>>(x118==x119))>>x120);

    if (t3 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x141 = 32525413018114626LL;
	static int32_t x142 = 1301;
	static volatile uint64_t x143 = 716850006474305466LLU;
	static uint32_t x144 = 5U;
	static int64_t t4 = -26119LL;

    t4 = ((x141>>(x142==x143))>>x144);

    if (t4 != 1016419156816082LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x145 = 29U;
	int8_t x146 = INT8_MAX;
	int8_t x147 = 1;
	volatile uint8_t x148 = 3U;
	static volatile int32_t t5 = 2006216;

    t5 = ((x145>>(x146==x147))>>x148);

    if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x185 = 0U;
	volatile int8_t x186 = 1;
	int32_t x187 = INT32_MIN;
	volatile uint8_t x188 = 25U;
	volatile int32_t t6 = 1;

    t6 = ((x185>>(x186==x187))>>x188);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x445 = 52;
	int32_t x446 = INT32_MAX;
	volatile int32_t x447 = -1;
	volatile uint16_t x448 = 30U;
	int32_t t7 = 23;

    t7 = ((x445>>(x446==x447))>>x448);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x581 = INT32_MAX;
	int32_t x582 = 1;
	static uint16_t x583 = UINT16_MAX;
	uint8_t x584 = 1U;

    t8 = ((x581>>(x582==x583))>>x584);

    if (t8 != 1073741823) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x694 = 2U;
	static uint64_t x695 = UINT64_MAX;
	int8_t x696 = 0;
	uint32_t t9 = 224743U;

    t9 = ((x693>>(x694==x695))>>x696);

    if (t9 != 103792556U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x785 = INT64_MAX;
	static volatile uint64_t x786 = 4LLU;
	volatile uint64_t x787 = UINT64_MAX;
	static uint8_t x788 = 5U;
	volatile int64_t t10 = -30LL;

    t10 = ((x785>>(x786==x787))>>x788);

    if (t10 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x801 = 37;
	uint16_t x802 = UINT16_MAX;
	uint8_t x803 = 1U;
	int32_t t11 = 11;

    t11 = ((x801>>(x802==x803))>>x804);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x846 = 488U;
	int16_t x847 = INT16_MIN;
	uint8_t x848 = 14U;
	int32_t t12 = 77;

    t12 = ((x845>>(x846==x847))>>x848);

    if (t12 != 124) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x861 = UINT64_MAX;
	static volatile int16_t x862 = 401;
	uint32_t x863 = 1U;
	volatile uint8_t x864 = 2U;
	static volatile uint64_t t13 = 6LLU;

    t13 = ((x861>>(x862==x863))>>x864);

    if (t13 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x865 = INT64_MAX;
	int32_t x866 = -1;
	int32_t x867 = INT32_MAX;
	uint64_t x868 = 25LLU;
	static int64_t t14 = 183357858LL;

    t14 = ((x865>>(x866==x867))>>x868);

    if (t14 != 274877906943LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x925 = 118U;
	static int32_t x926 = INT32_MIN;
	int16_t x927 = -31;
	volatile int32_t t15 = 56016;

    t15 = ((x925>>(x926==x927))>>x928);

    if (t15 != 14) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1050 = INT16_MIN;
	static int8_t x1051 = INT8_MAX;
	int16_t x1052 = 3;
	static int64_t t16 = 2LL;

    t16 = ((x1049>>(x1050==x1051))>>x1052);

    if (t16 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1169 = 15120;
	int32_t x1171 = -248169;
	static volatile uint32_t x1172 = 1U;
	int32_t t17 = -2077561;

    t17 = ((x1169>>(x1170==x1171))>>x1172);

    if (t17 != 7560) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x1269 = 8U;
	volatile uint32_t x1271 = 158217U;
	int32_t t18 = 484;

    t18 = ((x1269>>(x1270==x1271))>>x1272);

    if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1285 = INT64_MAX;
	int8_t x1286 = 0;
	int16_t x1287 = -291;
	int8_t x1288 = 1;
	volatile int64_t t19 = 925701LL;

    t19 = ((x1285>>(x1286==x1287))>>x1288);

    if (t19 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x1341 = 0U;
	int64_t x1342 = -4LL;
	int32_t x1343 = 5244322;
	volatile int8_t x1344 = 0;

    t20 = ((x1341>>(x1342==x1343))>>x1344);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1377 = INT8_MAX;
	int16_t x1378 = -1;
	uint8_t x1380 = 6U;
	volatile int32_t t21 = -1;

    t21 = ((x1377>>(x1378==x1379))>>x1380);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x1421 = UINT32_MAX;
	int8_t x1422 = INT8_MAX;
	uint64_t x1423 = 118244961LLU;
	uint32_t t22 = UINT32_MAX;

    t22 = ((x1421>>(x1422==x1423))>>x1424);

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x1465 = 3235LL;
	int16_t x1466 = 6910;
	uint64_t x1467 = 1087456667939LLU;

    t23 = ((x1465>>(x1466==x1467))>>x1468);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x1533 = UINT64_MAX;
	volatile uint32_t x1534 = 4727715U;
	uint64_t t24 = 18408LLU;

    t24 = ((x1533>>(x1534==x1535))>>x1536);

    if (t24 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x1585 = UINT16_MAX;
	int16_t x1586 = INT16_MIN;
	static int8_t x1587 = -1;
	uint64_t x1588 = 12LLU;
	volatile int32_t t25 = -6745;

    t25 = ((x1585>>(x1586==x1587))>>x1588);

    if (t25 != 15) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1621 = 3686U;
	static uint64_t x1622 = UINT64_MAX;
	static uint16_t x1623 = UINT16_MAX;
	uint32_t t26 = 7336U;

    t26 = ((x1621>>(x1622==x1623))>>x1624);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint8_t x1961 = UINT8_MAX;
	uint64_t x1962 = UINT64_MAX;
	static int64_t x1963 = -2280661364LL;
	uint16_t x1964 = 3U;

    t27 = ((x1961>>(x1962==x1963))>>x1964);

    if (t27 != 31) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2041 = 2068739LLU;
	int8_t x2042 = -1;
	int16_t x2043 = INT16_MIN;
	volatile uint64_t t28 = 178534575157LLU;

    t28 = ((x2041>>(x2042==x2043))>>x2044);

    if (t28 != 2020LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x2049 = UINT16_MAX;
	int64_t x2050 = -1LL;
	uint8_t x2052 = 2U;
	volatile int32_t t29 = -223;

    t29 = ((x2049>>(x2050==x2051))>>x2052);

    if (t29 != 8191) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x2078 = INT8_MIN;
	static uint8_t x2079 = 6U;
	uint32_t x2080 = 3U;
	int32_t t30 = 5432;

    t30 = ((x2077>>(x2078==x2079))>>x2080);

    if (t30 != 8191) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x2081 = 254341737U;
	volatile int16_t x2082 = -1;
	int16_t x2083 = INT16_MIN;
	volatile uint16_t x2084 = 1U;
	uint32_t t31 = 5076U;

    t31 = ((x2081>>(x2082==x2083))>>x2084);

    if (t31 != 127170868U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x2109 = UINT32_MAX;
	uint16_t x2111 = 5818U;
	static int8_t x2112 = 1;
	volatile uint32_t t32 = 9328U;

    t32 = ((x2109>>(x2110==x2111))>>x2112);

    if (t32 != 2147483647U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2141 = 18;
	static volatile uint32_t x2142 = 0U;
	int16_t x2144 = 1;
	static int32_t t33 = -3213;

    t33 = ((x2141>>(x2142==x2143))>>x2144);

    if (t33 != 9) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint16_t x2265 = UINT16_MAX;
	int64_t x2267 = -1LL;
	volatile int32_t x2268 = 1;
	static int32_t t34 = -3475694;

    t34 = ((x2265>>(x2266==x2267))>>x2268);

    if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x2297 = 133U;
	int16_t x2298 = -1;
	int8_t x2299 = INT8_MIN;
	int32_t t35 = -3;

    t35 = ((x2297>>(x2298==x2299))>>x2300);

    if (t35 != 66) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x2310 = 0U;
	uint8_t x2311 = UINT8_MAX;
	int32_t x2312 = 61;

    t36 = ((x2309>>(x2310==x2311))>>x2312);

    if (t36 != 7LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x2367 = INT32_MIN;
	static volatile uint64_t t37 = 13984138351298LLU;

    t37 = ((x2365>>(x2366==x2367))>>x2368);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x2521 = 19U;
	uint8_t x2522 = 13U;
	uint64_t x2523 = UINT64_MAX;
	volatile int8_t x2524 = 26;
	int32_t t38 = 47787;

    t38 = ((x2521>>(x2522==x2523))>>x2524);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x2581 = 3U;
	uint16_t x2582 = 7158U;
	static uint64_t x2583 = UINT64_MAX;

    t39 = ((x2581>>(x2582==x2583))>>x2584);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x2609 = UINT64_MAX;
	volatile uint64_t x2610 = 5202546LLU;
	int32_t x2611 = -1;
	uint8_t x2612 = 22U;

    t40 = ((x2609>>(x2610==x2611))>>x2612);

    if (t40 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x2614 = 2LL;
	static int64_t x2615 = INT64_MAX;
	uint32_t x2616 = 31U;
	int64_t t41 = 28295406LL;

    t41 = ((x2613>>(x2614==x2615))>>x2616);

    if (t41 != 4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x2677 = INT32_MAX;
	int64_t x2679 = INT64_MIN;
	uint32_t x2680 = 1U;

    t42 = ((x2677>>(x2678==x2679))>>x2680);

    if (t42 != 1073741823) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2686 = INT8_MIN;
	int64_t x2687 = INT64_MAX;
	static uint16_t x2688 = 1U;
	int32_t t43 = -175;

    t43 = ((x2685>>(x2686==x2687))>>x2688);

    if (t43 != 8) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x2709 = 10;
	uint32_t x2710 = 4U;
	uint8_t x2711 = 1U;
	volatile uint8_t x2712 = 0U;
	volatile int32_t t44 = 8260612;

    t44 = ((x2709>>(x2710==x2711))>>x2712);

    if (t44 != 10) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x2726 = 84061U;
	static int32_t x2727 = INT32_MIN;
	static volatile uint32_t t45 = 1833890U;

    t45 = ((x2725>>(x2726==x2727))>>x2728);

    if (t45 != 326U) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x2833 = INT32_MAX;
	static uint16_t x2834 = 7U;
	int8_t x2835 = -1;
	uint8_t x2836 = 3U;
	int32_t t46 = 5441621;

    t46 = ((x2833>>(x2834==x2835))>>x2836);

    if (t46 != 268435455) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x2901 = 2072665513LLU;
	int8_t x2902 = INT8_MIN;
	int8_t x2903 = INT8_MAX;
	uint8_t x2904 = 0U;

    t47 = ((x2901>>(x2902==x2903))>>x2904);

    if (t47 != 2072665513LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x2973 = UINT64_MAX;
	int16_t x2974 = INT16_MIN;
	static uint16_t x2975 = 3U;
	static volatile uint16_t x2976 = 1U;
	uint64_t t48 = 193386349796LLU;

    t48 = ((x2973>>(x2974==x2975))>>x2976);

    if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x2989 = 168;
	int64_t x2990 = 3842273867044719LL;
	int8_t x2991 = 3;
	int32_t t49 = -3;

    t49 = ((x2989>>(x2990==x2991))>>x2992);

    if (t49 != 42) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x3033 = 1U;
	int8_t x3034 = INT8_MIN;
	volatile int64_t x3035 = INT64_MIN;
	int8_t x3036 = 2;
	volatile int32_t t50 = 1859;

    t50 = ((x3033>>(x3034==x3035))>>x3036);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x3045 = 567;
	volatile uint64_t x3046 = UINT64_MAX;
	volatile int16_t x3047 = -25;
	uint8_t x3048 = 1U;
	volatile int32_t t51 = 4772787;

    t51 = ((x3045>>(x3046==x3047))>>x3048);

    if (t51 != 283) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x3053 = 8938445000LLU;
	uint16_t x3054 = 9U;
	uint8_t x3055 = 1U;
	uint32_t x3056 = 10U;
	volatile uint64_t t52 = 18LLU;

    t52 = ((x3053>>(x3054==x3055))>>x3056);

    if (t52 != 8728950LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x3133 = 67217093LLU;
	int16_t x3134 = -9;
	uint64_t x3135 = UINT64_MAX;
	int8_t x3136 = 0;

    t53 = ((x3133>>(x3134==x3135))>>x3136);

    if (t53 != 67217093LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x3205 = INT64_MAX;
	volatile int8_t x3206 = INT8_MIN;
	uint64_t x3207 = UINT64_MAX;
	static int64_t x3208 = 7LL;
	volatile int64_t t54 = 4174216472015117LL;

    t54 = ((x3205>>(x3206==x3207))>>x3208);

    if (t54 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x3217 = UINT16_MAX;
	uint64_t x3218 = 1790851257LLU;
	int64_t x3219 = INT64_MAX;
	int16_t x3220 = 1;
	volatile int32_t t55 = 446181512;

    t55 = ((x3217>>(x3218==x3219))>>x3220);

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x3241 = 29264031186571941LLU;
	static int8_t x3242 = -1;
	volatile uint64_t x3243 = 13240433LLU;
	volatile int16_t x3244 = 0;
	volatile uint64_t t56 = 315177LLU;

    t56 = ((x3241>>(x3242==x3243))>>x3244);

    if (t56 != 29264031186571941LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x3289 = 4224LLU;
	uint64_t x3290 = 14LLU;
	uint8_t x3291 = UINT8_MAX;
	static volatile uint64_t t57 = 62348869639822397LLU;

    t57 = ((x3289>>(x3290==x3291))>>x3292);

    if (t57 != 4224LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x3417 = INT32_MAX;
	int16_t x3418 = -234;
	int32_t t58 = 1;

    t58 = ((x3417>>(x3418==x3419))>>x3420);

    if (t58 != 8388607) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x3462 = UINT16_MAX;
	static uint64_t x3463 = 195316LLU;
	uint16_t x3464 = 1U;
	static volatile int32_t t59 = -507889;

    t59 = ((x3461>>(x3462==x3463))>>x3464);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x3477 = 6755U;
	static uint16_t x3478 = 44U;
	volatile uint16_t x3479 = 371U;
	int32_t t60 = -13;

    t60 = ((x3477>>(x3478==x3479))>>x3480);

    if (t60 != 6755) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x3541 = 49035U;
	static int16_t x3542 = -8;
	int32_t x3543 = INT32_MIN;
	volatile uint16_t x3544 = 29U;

    t61 = ((x3541>>(x3542==x3543))>>x3544);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x3545 = 0;
	volatile int16_t x3546 = -1;
	volatile int32_t x3547 = INT32_MIN;
	uint32_t x3548 = 0U;
	int32_t t62 = 56668;

    t62 = ((x3545>>(x3546==x3547))>>x3548);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint32_t x3633 = 2557463U;
	int8_t x3634 = INT8_MIN;
	static int8_t x3636 = 1;
	static volatile uint32_t t63 = 7U;

    t63 = ((x3633>>(x3634==x3635))>>x3636);

    if (t63 != 1278731U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x3669 = 9261U;
	int32_t x3670 = INT32_MIN;
	int32_t x3671 = 2586;
	int8_t x3672 = 7;
	int32_t t64 = -897621906;

    t64 = ((x3669>>(x3670==x3671))>>x3672);

    if (t64 != 72) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x3673 = INT64_MAX;
	int64_t x3674 = -1LL;
	static volatile int64_t x3675 = 18918LL;
	uint8_t x3676 = 0U;
	volatile int64_t t65 = INT64_MAX;

    t65 = ((x3673>>(x3674==x3675))>>x3676);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x3697 = 552406LLU;
	static int8_t x3698 = -10;
	uint16_t x3699 = UINT16_MAX;
	volatile uint8_t x3700 = 2U;
	uint64_t t66 = 1LLU;

    t66 = ((x3697>>(x3698==x3699))>>x3700);

    if (t66 != 138101LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x3794 = UINT32_MAX;
	int32_t t67 = -22429566;

    t67 = ((x3793>>(x3794==x3795))>>x3796);

    if (t67 != 63) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x3797 = 25;
	int8_t x3798 = 3;
	int8_t x3799 = 3;
	volatile uint32_t x3800 = 1U;
	int32_t t68 = -251;

    t68 = ((x3797>>(x3798==x3799))>>x3800);

    if (t68 != 6) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x3829 = 1U;
	int32_t x3831 = -1;
	int32_t x3832 = 0;
	int32_t t69 = 150146077;

    t69 = ((x3829>>(x3830==x3831))>>x3832);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x4049 = 4336649453065LLU;
	volatile uint16_t x4050 = 1149U;
	volatile int64_t x4051 = -1LL;
	uint8_t x4052 = 1U;
	volatile uint64_t t70 = 367LLU;

    t70 = ((x4049>>(x4050==x4051))>>x4052);

    if (t70 != 2168324726532LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x4054 = -3293354;
	static int32_t x4055 = -1;
	int32_t x4056 = 7;
	int32_t t71 = 441484859;

    t71 = ((x4053>>(x4054==x4055))>>x4056);

    if (t71 != 56) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x4078 = 76U;
	int8_t x4079 = 0;
	uint16_t x4080 = 31U;
	int64_t t72 = 725768LL;

    t72 = ((x4077>>(x4078==x4079))>>x4080);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x4117 = 4611U;
	uint16_t x4118 = 19834U;
	int16_t x4120 = 29;
	int32_t t73 = -915447;

    t73 = ((x4117>>(x4118==x4119))>>x4120);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x4149 = 104LLU;
	int16_t x4151 = 15;
	uint64_t t74 = 152066LLU;

    t74 = ((x4149>>(x4150==x4151))>>x4152);

    if (t74 != 26LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint16_t x4165 = 2U;
	uint32_t x4166 = 229U;
	uint32_t x4167 = 1138815855U;
	volatile uint32_t x4168 = 1U;
	volatile int32_t t75 = -1;

    t75 = ((x4165>>(x4166==x4167))>>x4168);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x4183 = INT32_MAX;
	uint32_t t76 = 7435497U;

    t76 = ((x4181>>(x4182==x4183))>>x4184);

    if (t76 != 122U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x4218 = -5;
	uint16_t x4220 = 0U;
	int32_t t77 = INT32_MAX;

    t77 = ((x4217>>(x4218==x4219))>>x4220);

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x4279 = UINT16_MAX;
	int8_t x4280 = 18;
	int32_t t78 = 994;

    t78 = ((x4277>>(x4278==x4279))>>x4280);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x4306 = 0U;
	static int8_t x4307 = INT8_MIN;
	int16_t x4308 = 0;
	uint32_t t79 = 1721944341U;

    t79 = ((x4305>>(x4306==x4307))>>x4308);

    if (t79 != 19883U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x4357 = 3787051450009722287LLU;
	int16_t x4358 = INT16_MAX;
	static volatile uint8_t x4359 = 5U;
	uint8_t x4360 = 48U;

    t80 = ((x4357>>(x4358==x4359))>>x4360);

    if (t80 != 13454LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x4361 = INT8_MAX;
	int64_t x4362 = -1LL;
	volatile uint8_t x4363 = 0U;
	uint16_t x4364 = 7U;
	volatile int32_t t81 = 0;

    t81 = ((x4361>>(x4362==x4363))>>x4364);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x4409 = 384882591LLU;
	volatile int64_t x4410 = 520643384LL;
	volatile int64_t x4411 = INT64_MIN;
	static volatile uint8_t x4412 = 2U;

    t82 = ((x4409>>(x4410==x4411))>>x4412);

    if (t82 != 96220647LLU) { NG(); } else { ; }
	
}

void f83(void) {
    

    t83 = ((x4425>>(x4426==x4427))>>x4428);

    if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x4481 = UINT8_MAX;
	volatile int16_t x4482 = INT16_MIN;
	int64_t x4483 = -1LL;
	uint8_t x4484 = 2U;

    t84 = ((x4481>>(x4482==x4483))>>x4484);

    if (t84 != 63) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x4489 = INT8_MAX;
	int8_t x4490 = -29;
	static uint8_t x4491 = 0U;
	volatile int8_t x4492 = 0;
	int32_t t85 = 1;

    t85 = ((x4489>>(x4490==x4491))>>x4492);

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x4573 = 35U;
	int8_t x4575 = 4;
	volatile uint32_t t86 = 9391U;

    t86 = ((x4573>>(x4574==x4575))>>x4576);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x4593 = 13098;
	volatile int16_t x4594 = -1591;
	int64_t x4595 = -1LL;
	uint8_t x4596 = 3U;

    t87 = ((x4593>>(x4594==x4595))>>x4596);

    if (t87 != 1637) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x4689 = 37805711;
	int16_t x4690 = INT16_MIN;
	static int8_t x4691 = INT8_MAX;
	uint8_t x4692 = 27U;
	volatile int32_t t88 = 15;

    t88 = ((x4689>>(x4690==x4691))>>x4692);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x4723 = 1968938370923LL;
	volatile int16_t x4724 = 16;
	int32_t t89 = -628630;

    t89 = ((x4721>>(x4722==x4723))>>x4724);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x4733 = UINT8_MAX;
	uint32_t x4734 = 381U;
	int16_t x4736 = 0;

    t90 = ((x4733>>(x4734==x4735))>>x4736);

    if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x4881 = INT8_MAX;
	uint64_t x4882 = 105935944618953LLU;
	static int8_t x4883 = -1;
	static int16_t x4884 = 1;
	volatile int32_t t91 = -33;

    t91 = ((x4881>>(x4882==x4883))>>x4884);

    if (t91 != 63) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x4901 = 3170;
	static int8_t x4902 = INT8_MAX;
	int32_t x4903 = -1;
	static volatile uint8_t x4904 = 25U;
	volatile int32_t t92 = 1;

    t92 = ((x4901>>(x4902==x4903))>>x4904);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x5065 = INT32_MAX;
	int16_t x5066 = INT16_MIN;
	volatile int8_t x5067 = 8;
	int8_t x5068 = 16;

    t93 = ((x5065>>(x5066==x5067))>>x5068);

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x5085 = 2046U;
	volatile uint64_t x5086 = UINT64_MAX;
	static int16_t x5087 = 4;
	uint32_t x5088 = 19U;

    t94 = ((x5085>>(x5086==x5087))>>x5088);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x5241 = UINT32_MAX;
	uint64_t x5242 = 290LLU;
	int32_t x5243 = INT32_MAX;
	volatile uint32_t t95 = 47270U;

    t95 = ((x5241>>(x5242==x5243))>>x5244);

    if (t95 != 33554431U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x5251 = INT64_MIN;
	volatile int32_t x5252 = 0;
	volatile uint64_t t96 = 23794853956494LLU;

    t96 = ((x5249>>(x5250==x5251))>>x5252);

    if (t96 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x5373 = INT8_MAX;
	int16_t x5374 = INT16_MIN;
	volatile uint32_t x5375 = UINT32_MAX;
	int32_t x5376 = 0;
	int32_t t97 = -6885;

    t97 = ((x5373>>(x5374==x5375))>>x5376);

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x5378 = 107787711U;
	static int32_t x5379 = 3;
	volatile uint16_t x5380 = 0U;
	volatile uint32_t t98 = 266289929U;

    t98 = ((x5377>>(x5378==x5379))>>x5380);

    if (t98 != 127U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x5393 = 5448798474797775LLU;
	volatile uint16_t x5395 = 683U;
	int64_t x5396 = 29LL;
	volatile uint64_t t99 = 5979975790LLU;

    t99 = ((x5393>>(x5394==x5395))>>x5396);

    if (t99 != 10149178LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x5397 = 6U;
	uint8_t x5398 = 1U;
	int8_t x5399 = INT8_MAX;
	uint8_t x5400 = 3U;
	volatile int32_t t100 = -7;

    t100 = ((x5397>>(x5398==x5399))>>x5400);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x5409 = INT64_MAX;
	volatile int8_t x5410 = -1;
	uint16_t x5411 = 2069U;
	uint8_t x5412 = 32U;

    t101 = ((x5409>>(x5410==x5411))>>x5412);

    if (t101 != 2147483647LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x5425 = UINT64_MAX;
	static uint8_t x5427 = 27U;
	uint8_t x5428 = 37U;
	static uint64_t t102 = 8630835957113LLU;

    t102 = ((x5425>>(x5426==x5427))>>x5428);

    if (t102 != 134217727LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x5457 = 10809U;
	int32_t x5458 = INT32_MIN;
	volatile int32_t x5459 = INT32_MAX;
	static uint8_t x5460 = 0U;
	volatile int32_t t103 = -672192570;

    t103 = ((x5457>>(x5458==x5459))>>x5460);

    if (t103 != 10809) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x5489 = UINT16_MAX;
	int64_t x5490 = INT64_MAX;
	uint32_t x5491 = 270245U;
	int8_t x5492 = 1;
	volatile int32_t t104 = 128017966;

    t104 = ((x5489>>(x5490==x5491))>>x5492);

    if (t104 != 32767) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x5549 = INT32_MAX;
	static int8_t x5550 = INT8_MIN;
	int32_t x5551 = -100213;
	uint8_t x5552 = 2U;
	int32_t t105 = -1;

    t105 = ((x5549>>(x5550==x5551))>>x5552);

    if (t105 != 536870911) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x5626 = INT64_MAX;
	int8_t x5627 = INT8_MIN;
	uint16_t x5628 = 1U;
	int32_t t106 = -8141;

    t106 = ((x5625>>(x5626==x5627))>>x5628);

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x5649 = 100390321LLU;
	static int16_t x5650 = -325;
	uint8_t x5652 = 7U;
	volatile uint64_t t107 = 335909548893LLU;

    t107 = ((x5649>>(x5650==x5651))>>x5652);

    if (t107 != 784299LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x5713 = 0U;
	static uint16_t x5715 = 410U;
	int8_t x5716 = 5;
	volatile uint32_t t108 = 3256U;

    t108 = ((x5713>>(x5714==x5715))>>x5716);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x5729 = INT64_MAX;
	uint16_t x5730 = 16U;
	int64_t x5731 = INT64_MAX;
	int8_t x5732 = 3;
	volatile int64_t t109 = 1LL;

    t109 = ((x5729>>(x5730==x5731))>>x5732);

    if (t109 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x5741 = 24;
	int16_t x5742 = 1043;
	static int32_t x5743 = 42666;
	uint16_t x5744 = 9U;
	static volatile int32_t t110 = 5;

    t110 = ((x5741>>(x5742==x5743))>>x5744);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x5765 = 7U;
	int16_t x5766 = INT16_MAX;
	int32_t x5767 = -1;

    t111 = ((x5765>>(x5766==x5767))>>x5768);

    if (t111 != 7) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x5789 = 0U;
	static volatile uint8_t x5790 = 0U;
	static int8_t x5791 = INT8_MIN;
	uint32_t x5792 = 13U;
	static volatile int32_t t112 = 2;

    t112 = ((x5789>>(x5790==x5791))>>x5792);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x5801 = UINT16_MAX;
	static int32_t x5802 = -1681353;
	int8_t x5803 = INT8_MIN;
	int8_t x5804 = 1;
	volatile int32_t t113 = 825497;

    t113 = ((x5801>>(x5802==x5803))>>x5804);

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x5825 = 0;
	int32_t x5826 = -246;
	int8_t x5827 = -18;
	int8_t x5828 = 5;

    t114 = ((x5825>>(x5826==x5827))>>x5828);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x6018 = UINT64_MAX;
	static volatile uint8_t x6019 = 7U;
	int16_t x6020 = 6;
	uint32_t t115 = 21U;

    t115 = ((x6017>>(x6018==x6019))>>x6020);

    if (t115 != 6U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x6065 = 42354862346LLU;
	uint64_t x6066 = UINT64_MAX;
	int64_t x6067 = -1LL;
	static uint64_t t116 = 570LLU;

    t116 = ((x6065>>(x6066==x6067))>>x6068);

    if (t116 != 82724340LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x6283 = -1;
	static int8_t x6284 = 1;
	volatile uint32_t t117 = 702277674U;

    t117 = ((x6281>>(x6282==x6283))>>x6284);

    if (t117 != 2U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x6323 = INT8_MIN;
	int32_t x6324 = 11;
	int32_t t118 = -18;

    t118 = ((x6321>>(x6322==x6323))>>x6324);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x6361 = 218U;
	static int8_t x6362 = INT8_MIN;
	int32_t x6364 = 0;
	volatile int32_t t119 = -1545;

    t119 = ((x6361>>(x6362==x6363))>>x6364);

    if (t119 != 218) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x6382 = 2U;
	int32_t x6383 = -14;
	uint8_t x6384 = 4U;
	int32_t t120 = 315346045;

    t120 = ((x6381>>(x6382==x6383))>>x6384);

    if (t120 != 15) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x6465 = 3261U;
	int8_t x6466 = INT8_MIN;
	static int32_t x6467 = -172;
	static volatile int16_t x6468 = 0;
	static int32_t t121 = 37468;

    t121 = ((x6465>>(x6466==x6467))>>x6468);

    if (t121 != 3261) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x6509 = 29553LL;
	int32_t x6510 = INT32_MIN;
	int16_t x6511 = -1;
	static int64_t t122 = 931106420456401LL;

    t122 = ((x6509>>(x6510==x6511))>>x6512);

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x6525 = 1266;
	uint16_t x6526 = 2640U;
	static int8_t x6527 = INT8_MIN;
	uint16_t x6528 = 23U;
	int32_t t123 = -680;

    t123 = ((x6525>>(x6526==x6527))>>x6528);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x6585 = 10U;
	uint32_t x6586 = 994883U;
	static uint8_t x6588 = 1U;
	int32_t t124 = -128902;

    t124 = ((x6585>>(x6586==x6587))>>x6588);

    if (t124 != 5) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x6605 = INT16_MAX;
	uint64_t x6606 = UINT64_MAX;
	uint8_t x6607 = 37U;
	volatile int32_t t125 = -218;

    t125 = ((x6605>>(x6606==x6607))>>x6608);

    if (t125 != 255) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x6637 = 0;

    t126 = ((x6637>>(x6638==x6639))>>x6640);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x6701 = 0;
	volatile uint32_t x6703 = 219355U;
	int16_t x6704 = 9;
	static volatile int32_t t127 = 9094312;

    t127 = ((x6701>>(x6702==x6703))>>x6704);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x6721 = UINT64_MAX;
	static uint8_t x6722 = 0U;
	uint16_t x6723 = UINT16_MAX;
	uint64_t t128 = 1913498466LLU;

    t128 = ((x6721>>(x6722==x6723))>>x6724);

    if (t128 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x6753 = 2U;
	static uint8_t x6754 = 2U;
	uint16_t x6755 = 5U;
	uint8_t x6756 = 1U;
	static volatile int32_t t129 = 23650;

    t129 = ((x6753>>(x6754==x6755))>>x6756);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x6829 = 126U;
	uint32_t x6830 = UINT32_MAX;
	static volatile int16_t x6831 = INT16_MAX;
	static int8_t x6832 = 1;
	volatile int32_t t130 = 780;

    t130 = ((x6829>>(x6830==x6831))>>x6832);

    if (t130 != 63) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x6837 = 7;
	static volatile int32_t x6839 = -11;
	volatile int8_t x6840 = 9;

    t131 = ((x6837>>(x6838==x6839))>>x6840);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x6853 = UINT16_MAX;
	int16_t x6854 = INT16_MIN;
	volatile int64_t x6855 = INT64_MIN;
	static uint8_t x6856 = 19U;
	static volatile int32_t t132 = -353;

    t132 = ((x6853>>(x6854==x6855))>>x6856);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x6865 = 6;
	volatile int8_t x6866 = INT8_MAX;
	static volatile int8_t x6867 = 2;

    t133 = ((x6865>>(x6866==x6867))>>x6868);

    if (t133 != 3) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x6930 = INT64_MAX;
	uint32_t x6931 = 1376U;

    t134 = ((x6929>>(x6930==x6931))>>x6932);

    if (t134 != 16383) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x7001 = 0;
	int8_t x7002 = 34;
	static volatile uint16_t x7003 = 27U;
	uint32_t x7004 = 2U;
	volatile int32_t t135 = 2488;

    t135 = ((x7001>>(x7002==x7003))>>x7004);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x7009 = INT32_MAX;
	static int32_t x7010 = 62;
	int16_t x7011 = INT16_MAX;
	int16_t x7012 = 1;
	volatile int32_t t136 = 30116;

    t136 = ((x7009>>(x7010==x7011))>>x7012);

    if (t136 != 1073741823) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x7033 = INT8_MAX;
	static int64_t x7034 = INT64_MIN;
	static int8_t x7035 = INT8_MIN;
	int32_t t137 = 1;

    t137 = ((x7033>>(x7034==x7035))>>x7036);

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x7081 = 2190LL;
	static int8_t x7082 = INT8_MAX;
	volatile int16_t x7083 = 879;
	volatile int64_t x7084 = 3LL;
	volatile int64_t t138 = 1357939965448638915LL;

    t138 = ((x7081>>(x7082==x7083))>>x7084);

    if (t138 != 273LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x7097 = INT32_MAX;
	int8_t x7098 = INT8_MIN;
	int64_t x7099 = INT64_MIN;
	static uint8_t x7100 = 11U;
	static volatile int32_t t139 = 127224621;

    t139 = ((x7097>>(x7098==x7099))>>x7100);

    if (t139 != 1048575) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint8_t x7113 = 43U;
	uint32_t x7114 = 19142382U;
	uint64_t x7115 = 1LLU;
	int8_t x7116 = 1;
	volatile int32_t t140 = -1;

    t140 = ((x7113>>(x7114==x7115))>>x7116);

    if (t140 != 21) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x7145 = 1328798526053499LLU;
	int32_t x7146 = -1;
	volatile uint64_t t141 = 15885LLU;

    t141 = ((x7145>>(x7146==x7147))>>x7148);

    if (t141 != 19800641LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x7261 = 3U;
	uint32_t x7262 = 1915U;
	static int8_t x7264 = 3;
	volatile int32_t t142 = -51667;

    t142 = ((x7261>>(x7262==x7263))>>x7264);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x7461 = UINT64_MAX;
	static uint8_t x7462 = 2U;
	static uint64_t x7463 = 78LLU;
	uint8_t x7464 = 6U;
	uint64_t t143 = 4543670975255068LLU;

    t143 = ((x7461>>(x7462==x7463))>>x7464);

    if (t143 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x7537 = 3708U;
	static int32_t x7538 = INT32_MIN;
	uint8_t x7540 = 19U;
	static uint32_t t144 = 6246U;

    t144 = ((x7537>>(x7538==x7539))>>x7540);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x7565 = 281049U;
	static int16_t x7568 = 7;
	uint32_t t145 = 10467956U;

    t145 = ((x7565>>(x7566==x7567))>>x7568);

    if (t145 != 2195U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x7597 = INT16_MAX;
	volatile int64_t x7598 = INT64_MIN;
	static volatile uint64_t x7599 = 2479522LLU;
	volatile uint16_t x7600 = 2U;
	int32_t t146 = -186;

    t146 = ((x7597>>(x7598==x7599))>>x7600);

    if (t146 != 8191) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x7653 = UINT8_MAX;
	int8_t x7654 = INT8_MIN;
	int32_t t147 = 82361709;

    t147 = ((x7653>>(x7654==x7655))>>x7656);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x7711 = INT64_MIN;
	static uint8_t x7712 = 8U;
	int64_t t148 = 24511637638LL;

    t148 = ((x7709>>(x7710==x7711))>>x7712);

    if (t148 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x7765 = 2;
	static uint64_t x7767 = UINT64_MAX;
	volatile int16_t x7768 = 1;
	static volatile int32_t t149 = 1;

    t149 = ((x7765>>(x7766==x7767))>>x7768);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x7794 = 6142550548318LLU;
	uint16_t x7795 = 5496U;
	int8_t x7796 = 1;
	int64_t t150 = -15478400784LL;

    t150 = ((x7793>>(x7794==x7795))>>x7796);

    if (t150 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x7867 = INT16_MIN;
	static volatile uint8_t x7868 = 7U;
	static volatile int32_t t151 = 13782726;

    t151 = ((x7865>>(x7866==x7867))>>x7868);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x7905 = UINT16_MAX;
	static int16_t x7906 = -3;
	int16_t x7908 = 1;
	volatile int32_t t152 = -5416;

    t152 = ((x7905>>(x7906==x7907))>>x7908);

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x7981 = 53U;
	int8_t x7983 = -7;
	uint8_t x7984 = 1U;
	volatile int32_t t153 = -142;

    t153 = ((x7981>>(x7982==x7983))>>x7984);

    if (t153 != 26) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x7985 = 0U;
	int8_t x7986 = INT8_MIN;
	static uint64_t x7987 = 8963556146572570128LLU;
	int8_t x7988 = 0;
	volatile int32_t t154 = -427;

    t154 = ((x7985>>(x7986==x7987))>>x7988);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x8009 = UINT16_MAX;
	static int8_t x8010 = INT8_MIN;
	static uint8_t x8011 = UINT8_MAX;
	int8_t x8012 = 1;

    t155 = ((x8009>>(x8010==x8011))>>x8012);

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x8097 = 126U;
	static int8_t x8098 = 62;
	int32_t x8099 = -1;
	volatile uint8_t x8100 = 0U;
	int32_t t156 = 1044158;

    t156 = ((x8097>>(x8098==x8099))>>x8100);

    if (t156 != 126) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x8121 = 996296473314143107LL;
	int16_t x8122 = INT16_MIN;
	volatile int16_t x8123 = 145;
	volatile int8_t x8124 = 31;

    t157 = ((x8121>>(x8122==x8123))>>x8124);

    if (t157 != 463936698LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x8138 = 2U;
	int64_t x8139 = -1LL;

    t158 = ((x8137>>(x8138==x8139))>>x8140);

    if (t158 != 536870911) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x8157 = UINT64_MAX;
	volatile int64_t x8159 = INT64_MIN;
	volatile int64_t x8160 = 3LL;
	volatile uint64_t t159 = 2707158520428720LLU;

    t159 = ((x8157>>(x8158==x8159))>>x8160);

    if (t159 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x8181 = INT32_MAX;
	uint64_t x8182 = UINT64_MAX;
	int8_t x8184 = 1;
	static int32_t t160 = -239117;

    t160 = ((x8181>>(x8182==x8183))>>x8184);

    if (t160 != 1073741823) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x8257 = UINT16_MAX;
	int64_t x8258 = INT64_MIN;
	int8_t x8260 = 16;
	static volatile int32_t t161 = 108;

    t161 = ((x8257>>(x8258==x8259))>>x8260);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x8261 = 159203LLU;
	uint16_t x8263 = UINT16_MAX;
	uint32_t x8264 = 17U;
	volatile uint64_t t162 = 1599003201151LLU;

    t162 = ((x8261>>(x8262==x8263))>>x8264);

    if (t162 != 1LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x8278 = -1;
	static uint8_t x8279 = UINT8_MAX;
	int8_t x8280 = 30;
	int32_t t163 = -3;

    t163 = ((x8277>>(x8278==x8279))>>x8280);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x8289 = 4;
	int16_t x8290 = INT16_MIN;
	uint64_t x8291 = UINT64_MAX;
	int32_t t164 = -158443198;

    t164 = ((x8289>>(x8290==x8291))>>x8292);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x8473 = 6LL;
	int16_t x8474 = INT16_MAX;
	int32_t x8476 = 1;
	static int64_t t165 = 488821155150LL;

    t165 = ((x8473>>(x8474==x8475))>>x8476);

    if (t165 != 3LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x8513 = 0;
	int16_t x8514 = 0;
	static int16_t x8515 = -1;
	volatile int32_t t166 = -115924;

    t166 = ((x8513>>(x8514==x8515))>>x8516);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x8573 = UINT32_MAX;
	static uint16_t x8576 = 1U;

    t167 = ((x8573>>(x8574==x8575))>>x8576);

    if (t167 != 2147483647U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x8697 = 122U;
	int8_t x8698 = -1;
	int64_t x8699 = INT64_MIN;
	int8_t x8700 = 0;
	static volatile uint32_t t168 = 72U;

    t168 = ((x8697>>(x8698==x8699))>>x8700);

    if (t168 != 122U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x8721 = UINT16_MAX;
	int8_t x8724 = 4;

    t169 = ((x8721>>(x8722==x8723))>>x8724);

    if (t169 != 4095) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x8729 = 253988230LLU;
	uint64_t t170 = 8LLU;

    t170 = ((x8729>>(x8730==x8731))>>x8732);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x8745 = INT16_MAX;
	int32_t x8746 = INT32_MIN;
	uint16_t x8747 = UINT16_MAX;
	uint32_t x8748 = 30U;

    t171 = ((x8745>>(x8746==x8747))>>x8748);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x8766 = 34U;
	uint64_t x8767 = UINT64_MAX;
	uint16_t x8768 = 7U;
	int32_t t172 = 297;

    t172 = ((x8765>>(x8766==x8767))>>x8768);

    if (t172 != 754) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x8805 = 1;
	volatile uint16_t x8806 = 91U;
	volatile int64_t x8808 = 21LL;

    t173 = ((x8805>>(x8806==x8807))>>x8808);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x8905 = 1893U;
	uint64_t x8906 = UINT64_MAX;
	uint8_t x8907 = UINT8_MAX;
	static uint8_t x8908 = 1U;

    t174 = ((x8905>>(x8906==x8907))>>x8908);

    if (t174 != 946) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x8965 = INT8_MAX;
	static int64_t x8966 = INT64_MIN;
	volatile uint16_t x8968 = 10U;
	volatile int32_t t175 = 38953762;

    t175 = ((x8965>>(x8966==x8967))>>x8968);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x8989 = 29U;
	int64_t x8990 = -1LL;
	uint64_t x8991 = 564279636283201LLU;
	int16_t x8992 = 30;

    t176 = ((x8989>>(x8990==x8991))>>x8992);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x9101 = INT64_MAX;
	int64_t x9102 = 1339453643858LL;
	uint16_t x9103 = 15443U;
	int16_t x9104 = 1;
	volatile int64_t t177 = 1890877578615745653LL;

    t177 = ((x9101>>(x9102==x9103))>>x9104);

    if (t177 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x9141 = 501U;
	uint64_t x9142 = 49758488LLU;
	int16_t x9143 = INT16_MAX;
	volatile uint8_t x9144 = 22U;
	volatile uint32_t t178 = 2262246U;

    t178 = ((x9141>>(x9142==x9143))>>x9144);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x9145 = 755;
	static uint16_t x9146 = UINT16_MAX;
	static int64_t x9147 = -1LL;

    t179 = ((x9145>>(x9146==x9147))>>x9148);

    if (t179 != 188) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x9157 = 1U;
	static uint32_t x9159 = UINT32_MAX;
	volatile int32_t t180 = -417;

    t180 = ((x9157>>(x9158==x9159))>>x9160);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x9241 = 467091502U;
	volatile int16_t x9242 = INT16_MIN;
	int8_t x9243 = INT8_MIN;
	uint8_t x9244 = 2U;
	static uint32_t t181 = 5951U;

    t181 = ((x9241>>(x9242==x9243))>>x9244);

    if (t181 != 116772875U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x9249 = UINT8_MAX;
	int8_t x9250 = -1;
	static volatile int8_t x9251 = INT8_MIN;
	int32_t t182 = 13326306;

    t182 = ((x9249>>(x9250==x9251))>>x9252);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x9293 = 16U;
	static uint16_t x9294 = 174U;
	uint8_t x9295 = 2U;
	uint16_t x9296 = 0U;

    t183 = ((x9293>>(x9294==x9295))>>x9296);

    if (t183 != 16) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x9305 = 209571042;
	int16_t x9306 = 0;
	uint16_t x9307 = 1314U;

    t184 = ((x9305>>(x9306==x9307))>>x9308);

    if (t184 != 209571042) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x9320 = 29U;
	int32_t t185 = 5;

    t185 = ((x9317>>(x9318==x9319))>>x9320);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x9369 = 10459435624025LLU;
	volatile int8_t x9370 = INT8_MIN;
	uint8_t x9371 = 8U;
	volatile int16_t x9372 = 61;
	volatile uint64_t t186 = 7558LLU;

    t186 = ((x9369>>(x9370==x9371))>>x9372);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x9381 = 6U;
	int32_t x9382 = INT32_MIN;
	uint8_t x9384 = 15U;
	static int32_t t187 = 42595;

    t187 = ((x9381>>(x9382==x9383))>>x9384);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x9388 = 6U;

    t188 = ((x9385>>(x9386==x9387))>>x9388);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x9417 = 313U;
	uint64_t x9418 = 0LLU;
	static int32_t x9419 = -1;
	uint8_t x9420 = 5U;
	uint32_t t189 = 7265U;

    t189 = ((x9417>>(x9418==x9419))>>x9420);

    if (t189 != 9U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x9437 = INT16_MAX;
	static int32_t x9438 = -1;
	uint8_t x9439 = UINT8_MAX;
	uint8_t x9440 = 26U;
	int32_t t190 = -15;

    t190 = ((x9437>>(x9438==x9439))>>x9440);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x9465 = 507U;
	int16_t x9466 = -1;
	static int16_t x9467 = -1;
	volatile int8_t x9468 = 8;
	volatile uint32_t t191 = 606665U;

    t191 = ((x9465>>(x9466==x9467))>>x9468);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x9505 = INT8_MAX;
	uint64_t x9506 = 2219120662636LLU;
	volatile int32_t x9507 = -8604698;
	uint8_t x9508 = 6U;
	static volatile int32_t t192 = 10443;

    t192 = ((x9505>>(x9506==x9507))>>x9508);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x9629 = UINT8_MAX;
	int64_t x9630 = -1LL;
	volatile int8_t x9631 = INT8_MIN;
	uint32_t x9632 = 3U;
	static volatile int32_t t193 = 123843385;

    t193 = ((x9629>>(x9630==x9631))>>x9632);

    if (t193 != 31) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x9661 = UINT32_MAX;
	volatile int8_t x9662 = 0;
	int8_t x9663 = -1;
	uint32_t t194 = 827868U;

    t194 = ((x9661>>(x9662==x9663))>>x9664);

    if (t194 != 2147483647U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x9685 = 223LLU;
	int8_t x9686 = -2;
	volatile int16_t x9687 = -379;
	volatile uint8_t x9688 = 3U;
	uint64_t t195 = 1367418334614LLU;

    t195 = ((x9685>>(x9686==x9687))>>x9688);

    if (t195 != 27LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x9729 = UINT8_MAX;
	int32_t x9730 = INT32_MAX;
	volatile uint32_t x9731 = UINT32_MAX;
	static volatile uint8_t x9732 = 1U;
	volatile int32_t t196 = -472492104;

    t196 = ((x9729>>(x9730==x9731))>>x9732);

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x9745 = 1;
	int32_t x9746 = INT32_MIN;
	volatile uint8_t x9747 = 42U;
	int8_t x9748 = 0;
	volatile int32_t t197 = -4055897;

    t197 = ((x9745>>(x9746==x9747))>>x9748);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x9837 = 611182273U;
	volatile int8_t x9838 = INT8_MAX;
	static int8_t x9840 = 0;
	volatile uint32_t t198 = 8196U;

    t198 = ((x9837>>(x9838==x9839))>>x9840);

    if (t198 != 611182273U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x9914 = INT16_MIN;
	static int16_t x9915 = -6;
	static uint8_t x9916 = 3U;
	volatile uint32_t t199 = 8252U;

    t199 = ((x9913>>(x9914==x9915))>>x9916);

    if (t199 != 536870911U) { NG(); } else { ; }
	
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

