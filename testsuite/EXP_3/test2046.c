
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

static int64_t x41 = INT64_MIN;
int8_t x85 = INT8_MIN;
uint16_t x88 = 3U;
int32_t t1 = -602953621;
int8_t x162 = 0;
int32_t t3 = 77225;
uint16_t x232 = 53U;
uint32_t x280 = 0U;
int16_t x305 = INT16_MIN;
int64_t x425 = 27902744LL;
uint8_t x478 = 33U;
uint32_t x502 = 11151226U;
int32_t x504 = 1;
static volatile int32_t t14 = -6860;
int32_t x697 = -1;
uint32_t x999 = 21U;
volatile int64_t x1285 = INT64_MIN;
int32_t x1297 = INT32_MIN;
int64_t x1298 = INT64_MAX;
uint16_t x1299 = UINT16_MAX;
int8_t x1306 = INT8_MIN;
static int32_t x1307 = 54626;
uint8_t x1616 = 1U;
int64_t t30 = -364970853436282615LL;
static int16_t x1799 = 24;
int32_t x1800 = 2;
int16_t x1821 = INT16_MAX;
volatile int32_t t32 = -15059672;
int16_t x1867 = INT16_MAX;
volatile int64_t x1906 = -1LL;
uint64_t x1983 = UINT64_MAX;
int64_t x1996 = 42LL;
volatile uint8_t x2031 = 31U;
int8_t x2111 = INT8_MAX;
int8_t x2139 = INT8_MAX;
uint64_t x2150 = UINT64_MAX;
int32_t x2210 = -151057488;
volatile uint32_t x2251 = UINT32_MAX;
volatile uint32_t t43 = 67650802U;
uint32_t t44 = 2076596343U;
static int64_t x2389 = INT64_MIN;
static uint8_t x2392 = 3U;
volatile int64_t x2482 = -3729516LL;
uint64_t x2483 = 547995551657LLU;
volatile uint8_t x2767 = 74U;
uint8_t x2770 = 0U;
int16_t x2771 = INT16_MAX;
uint32_t x2847 = 24116674U;
int8_t x2892 = 0;
static int8_t x2904 = 11;
volatile int32_t x2941 = 781054;
int8_t x2943 = 13;
int8_t x3030 = 28;
int16_t x3089 = INT16_MAX;
static int16_t x3090 = INT16_MIN;
int16_t x3092 = 12;
static uint32_t t63 = 293U;
int16_t x3261 = INT16_MIN;
static uint8_t x3264 = 10U;
static int32_t x3597 = INT32_MIN;
uint16_t x3600 = 25U;
uint32_t t69 = 0U;
volatile int64_t x3707 = 50444338123218LL;
volatile uint16_t x3708 = 2U;
uint8_t x3714 = 2U;
volatile uint32_t x3831 = 3299U;
int8_t x3832 = 20;
uint32_t x3870 = UINT32_MAX;
uint8_t x3948 = 10U;
static int8_t x4004 = 29;
volatile int32_t x4189 = INT32_MIN;
int32_t t83 = -1;
int16_t x4397 = -60;
volatile int32_t t86 = -5147;
int64_t x4451 = 883LL;
volatile int64_t x4559 = 1040137268547LL;
uint8_t x4560 = 39U;
uint16_t x4597 = 524U;
static int32_t x4641 = 6;
volatile int32_t x4703 = INT32_MAX;
uint16_t x4704 = 2U;
volatile int32_t x4718 = -4147539;
int32_t t93 = -2480;
uint64_t x4779 = 27902920810660755LLU;
int16_t x4780 = 58;
int32_t x4838 = INT32_MIN;
uint8_t x5047 = 24U;
static uint16_t x5214 = 7U;
int8_t x5216 = 0;
static volatile uint32_t t99 = 171671U;
volatile uint64_t t100 = 117611LLU;
volatile int16_t x5390 = INT16_MAX;
int32_t t106 = -3647727;
uint32_t x5825 = 114391180U;
static int16_t x5906 = INT16_MIN;
static volatile uint64_t t108 = 40780077LLU;
volatile uint16_t x5940 = 14U;
volatile int32_t x6051 = 398;
volatile int32_t t112 = 30458;
static uint16_t x6176 = 6U;
int8_t x6513 = INT8_MIN;
static uint32_t x6516 = 1U;
uint16_t x6531 = UINT16_MAX;
int32_t x6551 = INT32_MAX;
int16_t x6559 = INT16_MAX;
static int16_t x6569 = INT16_MIN;
int32_t x6581 = INT32_MIN;
int8_t x6582 = -1;
int64_t t123 = 319999295598345221LL;
uint64_t x6626 = 220741802LLU;
static int8_t x6773 = 0;
static uint32_t x6775 = UINT32_MAX;
uint16_t x6781 = 36U;
static uint64_t x6782 = 16983564580137271LLU;
volatile int32_t t130 = -3;
volatile int32_t t133 = -97893369;
volatile int16_t x7115 = 2172;
volatile int8_t x7116 = 1;
static volatile int64_t t138 = -1169466436LL;
static volatile int32_t t139 = -321;
uint16_t x7669 = UINT16_MAX;
int64_t x7670 = 1448045649LL;
uint32_t x7775 = 10992149U;
volatile uint32_t x7877 = 26U;
static int16_t x7880 = 11;
static uint8_t x7945 = 14U;
static int8_t x8026 = INT8_MAX;
int16_t x8028 = 28;
uint32_t t146 = 32225416U;
volatile uint8_t x8560 = 11U;
volatile int8_t x8597 = INT8_MIN;
uint32_t x8669 = 190304906U;
static uint16_t x8670 = 2886U;
uint64_t t154 = 16885137098342740LLU;
uint32_t t155 = 3U;
int64_t x9058 = INT64_MIN;
int64_t x9059 = 6006440592766LL;
int8_t x9060 = 0;
volatile int8_t x9078 = -12;
static uint64_t x9203 = UINT64_MAX;
volatile int16_t x9222 = INT16_MAX;
static int64_t x9223 = INT64_MAX;
int64_t x9299 = INT64_MAX;
uint16_t x9300 = 10U;
volatile int64_t t162 = -1LL;
int8_t x9376 = 3;
int32_t t163 = -63;
volatile uint64_t t164 = 255644106837LLU;
uint32_t x9505 = 219508U;
volatile uint8_t x9657 = 16U;
static volatile int64_t x9755 = 109325198909021LL;
uint16_t x9756 = 0U;
uint32_t x9801 = 32756523U;
volatile int8_t x9803 = 0;
static volatile uint8_t x9837 = 0U;
uint16_t x9839 = UINT16_MAX;
uint64_t x9840 = 12LLU;
uint8_t x9899 = 1U;
static uint16_t x10114 = 26453U;
int32_t t173 = -1818937;
int8_t x10126 = 6;
uint64_t t175 = 95635LLU;
volatile uint32_t x10216 = 19U;
static int32_t t176 = -25096;
volatile int32_t t178 = -467192604;
volatile uint16_t x10444 = 1U;
int8_t x10452 = 12;
int8_t x10510 = INT8_MIN;
uint32_t x10511 = 1530U;
uint32_t x10599 = 9082U;
static uint16_t x10600 = 1U;
uint32_t t183 = 414U;
int32_t x10689 = -1;
int8_t x10692 = 0;
static int32_t t185 = 137;
uint64_t t188 = 28194560771810212LLU;
uint32_t x10903 = 148926883U;
static uint32_t t189 = 620964U;
uint8_t x10928 = 7U;
volatile uint16_t x10959 = 386U;
static int64_t x11015 = 1659LL;
uint16_t x11024 = 3U;
uint8_t x11233 = 43U;
volatile uint64_t x11235 = UINT64_MAX;


void f0(void) {
    	int64_t x42 = -15829122LL;
	uint8_t x43 = 108U;
	uint16_t x44 = 0U;
	int32_t t0 = -2;

    t0 = ((x41!=x42)-(x43>>x44));

    if (t0 != -107) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x86 = INT16_MAX;
	int32_t x87 = 1522946;

    t1 = ((x85!=x86)-(x87>>x88));

    if (t1 != -190367) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x93 = INT8_MIN;
	static int32_t x94 = -156242856;
	int64_t x95 = INT64_MAX;
	uint16_t x96 = 3U;
	volatile int64_t t2 = 54LL;

    t2 = ((x93!=x94)-(x95>>x96));

    if (t2 != -1152921504606846974LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x161 = UINT16_MAX;
	volatile uint16_t x163 = 11U;
	int8_t x164 = 1;

    t3 = ((x161!=x162)-(x163>>x164));

    if (t3 != -4) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x229 = INT8_MIN;
	int64_t x230 = -193900491135LL;
	uint64_t x231 = 1621188689LLU;
	static uint64_t t4 = 2699542984990425592LLU;

    t4 = ((x229!=x230)-(x231>>x232));

    if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x265 = 111148U;
	int32_t x266 = 3517899;
	volatile uint32_t x267 = 840546436U;
	int8_t x268 = 0;
	uint32_t t5 = 9302U;

    t5 = ((x265!=x266)-(x267>>x268));

    if (t5 != 3454420861U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x277 = -1;
	static int8_t x278 = -30;
	uint16_t x279 = 3U;
	static volatile int32_t t6 = -369096928;

    t6 = ((x277!=x278)-(x279>>x280));

    if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x297 = INT32_MAX;
	volatile uint64_t x298 = 192021665198734893LLU;
	volatile uint32_t x299 = 4679886U;
	uint8_t x300 = 0U;
	volatile uint32_t t7 = 2U;

    t7 = ((x297!=x298)-(x299>>x300));

    if (t7 != 4290287411U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x306 = 3206158620668420LLU;
	volatile int8_t x307 = 1;
	static int32_t x308 = 0;
	volatile int32_t t8 = -175267885;

    t8 = ((x305!=x306)-(x307>>x308));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x417 = 13621884U;
	volatile int64_t x418 = INT64_MAX;
	uint16_t x419 = UINT16_MAX;
	uint8_t x420 = 1U;
	volatile int32_t t9 = -526794640;

    t9 = ((x417!=x418)-(x419>>x420));

    if (t9 != -32766) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x426 = UINT64_MAX;
	static uint64_t x427 = 19LLU;
	int8_t x428 = 0;
	uint64_t t10 = 530393124266512618LLU;

    t10 = ((x425!=x426)-(x427>>x428));

    if (t10 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x465 = UINT32_MAX;
	uint16_t x466 = UINT16_MAX;
	int16_t x467 = INT16_MAX;
	uint8_t x468 = 27U;
	volatile int32_t t11 = -24934;

    t11 = ((x465!=x466)-(x467>>x468));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x477 = 66043202401LLU;
	uint8_t x479 = 95U;
	uint16_t x480 = 1U;
	volatile int32_t t12 = -988;

    t12 = ((x477!=x478)-(x479>>x480));

    if (t12 != -46) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x501 = INT32_MAX;
	int32_t x503 = INT32_MAX;
	volatile int32_t t13 = 1356512;

    t13 = ((x501!=x502)-(x503>>x504));

    if (t13 != -1073741822) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x605 = INT16_MIN;
	int32_t x606 = -754336;
	int16_t x607 = INT16_MAX;
	static int8_t x608 = 8;

    t14 = ((x605!=x606)-(x607>>x608));

    if (t14 != -126) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x641 = 978435LLU;
	static int8_t x642 = -1;
	volatile int8_t x643 = 1;
	uint16_t x644 = 18U;
	volatile int32_t t15 = 243356148;

    t15 = ((x641!=x642)-(x643>>x644));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x653 = 15U;
	uint8_t x654 = UINT8_MAX;
	uint64_t x655 = 21242702LLU;
	uint16_t x656 = 21U;
	static uint64_t t16 = 1LLU;

    t16 = ((x653!=x654)-(x655>>x656));

    if (t16 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x698 = -12066LL;
	volatile int8_t x699 = INT8_MAX;
	uint32_t x700 = 6U;
	static int32_t t17 = 1015260916;

    t17 = ((x697!=x698)-(x699>>x700));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint32_t x705 = 2108026493U;
	int32_t x706 = INT32_MAX;
	volatile int8_t x707 = INT8_MAX;
	volatile int16_t x708 = 0;
	volatile int32_t t18 = 159;

    t18 = ((x705!=x706)-(x707>>x708));

    if (t18 != -126) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x741 = UINT32_MAX;
	int64_t x742 = -1LL;
	int32_t x743 = 46;
	static int16_t x744 = 0;
	volatile int32_t t19 = 91935459;

    t19 = ((x741!=x742)-(x743>>x744));

    if (t19 != -45) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x865 = INT32_MAX;
	int32_t x866 = INT32_MAX;
	static uint32_t x867 = 909097452U;
	uint8_t x868 = 1U;
	uint32_t t20 = 2U;

    t20 = ((x865!=x866)-(x867>>x868));

    if (t20 != 3840418570U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x997 = -1;
	volatile int64_t x998 = -1LL;
	static uint16_t x1000 = 3U;
	static uint32_t t21 = 912434425U;

    t21 = ((x997!=x998)-(x999>>x1000));

    if (t21 != 4294967294U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1177 = 135433769553708LLU;
	static int16_t x1178 = INT16_MAX;
	uint64_t x1179 = 2160531255345225LLU;
	int8_t x1180 = 33;
	volatile uint64_t t22 = 7091698873LLU;

    t22 = ((x1177!=x1178)-(x1179>>x1180));

    if (t22 != 18446744073709300099LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1273 = INT16_MIN;
	int64_t x1274 = INT64_MAX;
	static volatile uint16_t x1275 = UINT16_MAX;
	int8_t x1276 = 0;
	static volatile int32_t t23 = 258901;

    t23 = ((x1273!=x1274)-(x1275>>x1276));

    if (t23 != -65534) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1277 = 6206274LL;
	static int32_t x1278 = INT32_MIN;
	uint32_t x1279 = 499U;
	int32_t x1280 = 2;
	volatile uint32_t t24 = 402U;

    t24 = ((x1277!=x1278)-(x1279>>x1280));

    if (t24 != 4294967173U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1286 = 31;
	int8_t x1287 = 13;
	uint16_t x1288 = 20U;
	int32_t t25 = -1508384;

    t25 = ((x1285!=x1286)-(x1287>>x1288));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1289 = 6898U;
	static int8_t x1290 = 49;
	uint16_t x1291 = UINT16_MAX;
	uint8_t x1292 = 19U;
	static volatile int32_t t26 = 0;

    t26 = ((x1289!=x1290)-(x1291>>x1292));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x1300 = 4U;
	int32_t t27 = 32824592;

    t27 = ((x1297!=x1298)-(x1299>>x1300));

    if (t27 != -4094) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x1305 = 14064U;
	static int32_t x1308 = 0;
	int32_t t28 = -330597;

    t28 = ((x1305!=x1306)-(x1307>>x1308));

    if (t28 != -54625) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1613 = INT32_MAX;
	static int32_t x1614 = INT32_MAX;
	uint8_t x1615 = UINT8_MAX;
	volatile int32_t t29 = 27509651;

    t29 = ((x1613!=x1614)-(x1615>>x1616));

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1777 = INT16_MAX;
	uint64_t x1778 = 20714589038380439LLU;
	int64_t x1779 = INT64_MAX;
	int8_t x1780 = 1;

    t30 = ((x1777!=x1778)-(x1779>>x1780));

    if (t30 != -4611686018427387902LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1797 = -1;
	uint64_t x1798 = UINT64_MAX;
	volatile int32_t t31 = -220;

    t31 = ((x1797!=x1798)-(x1799>>x1800));

    if (t31 != -6) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1822 = INT32_MAX;
	static volatile int16_t x1823 = 75;
	static uint8_t x1824 = 18U;

    t32 = ((x1821!=x1822)-(x1823>>x1824));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x1865 = UINT32_MAX;
	int64_t x1866 = INT64_MAX;
	volatile uint8_t x1868 = 2U;
	int32_t t33 = 0;

    t33 = ((x1865!=x1866)-(x1867>>x1868));

    if (t33 != -8190) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1905 = -1LL;
	uint8_t x1907 = UINT8_MAX;
	volatile int32_t x1908 = 15;
	int32_t t34 = -957;

    t34 = ((x1905!=x1906)-(x1907>>x1908));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1941 = UINT64_MAX;
	uint16_t x1942 = UINT16_MAX;
	uint8_t x1943 = UINT8_MAX;
	volatile uint16_t x1944 = 1U;
	static int32_t t35 = -146774045;

    t35 = ((x1941!=x1942)-(x1943>>x1944));

    if (t35 != -126) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1981 = 2807;
	int16_t x1982 = 2225;
	static volatile uint16_t x1984 = 6U;
	uint64_t t36 = 99308LLU;

    t36 = ((x1981!=x1982)-(x1983>>x1984));

    if (t36 != 18158513697557839874LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x1993 = 22;
	uint64_t x1994 = 1LLU;
	int64_t x1995 = 72437014767666LL;
	volatile int64_t t37 = 331400376LL;

    t37 = ((x1993!=x1994)-(x1995>>x1996));

    if (t37 != -15LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x2029 = INT64_MIN;
	uint8_t x2030 = 85U;
	uint64_t x2032 = 7LLU;
	int32_t t38 = 1907;

    t38 = ((x2029!=x2030)-(x2031>>x2032));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2109 = UINT32_MAX;
	volatile int16_t x2110 = -31;
	volatile int16_t x2112 = 3;
	volatile int32_t t39 = 5176;

    t39 = ((x2109!=x2110)-(x2111>>x2112));

    if (t39 != -14) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x2137 = INT64_MIN;
	int16_t x2138 = INT16_MIN;
	uint16_t x2140 = 3U;
	volatile int32_t t40 = -77;

    t40 = ((x2137!=x2138)-(x2139>>x2140));

    if (t40 != -14) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x2149 = UINT32_MAX;
	int32_t x2151 = INT32_MAX;
	static int8_t x2152 = 0;
	volatile int32_t t41 = 3338878;

    t41 = ((x2149!=x2150)-(x2151>>x2152));

    if (t41 != -2147483646) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x2209 = 2066320174755177971LLU;
	int64_t x2211 = INT64_MAX;
	static volatile int8_t x2212 = 1;
	volatile int64_t t42 = 2125689444LL;

    t42 = ((x2209!=x2210)-(x2211>>x2212));

    if (t42 != -4611686018427387902LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x2249 = 332U;
	int8_t x2250 = -2;
	uint16_t x2252 = 3U;

    t43 = ((x2249!=x2250)-(x2251>>x2252));

    if (t43 != 3758096386U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x2273 = UINT16_MAX;
	int8_t x2274 = 1;
	volatile uint32_t x2275 = 16387921U;
	uint8_t x2276 = 1U;

    t44 = ((x2273!=x2274)-(x2275>>x2276));

    if (t44 != 4286773337U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x2361 = INT16_MIN;
	uint32_t x2362 = 6673U;
	volatile uint8_t x2363 = 1U;
	static int8_t x2364 = 0;
	static volatile int32_t t45 = -110773681;

    t45 = ((x2361!=x2362)-(x2363>>x2364));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x2390 = UINT16_MAX;
	volatile int32_t x2391 = INT32_MAX;
	int32_t t46 = 0;

    t46 = ((x2389!=x2390)-(x2391>>x2392));

    if (t46 != -268435454) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x2417 = 171734;
	static uint16_t x2418 = 5489U;
	uint8_t x2419 = UINT8_MAX;
	int8_t x2420 = 0;
	static volatile int32_t t47 = 4;

    t47 = ((x2417!=x2418)-(x2419>>x2420));

    if (t47 != -254) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x2461 = UINT64_MAX;
	int8_t x2462 = INT8_MIN;
	static uint8_t x2463 = 3U;
	uint16_t x2464 = 10U;
	int32_t t48 = -1582;

    t48 = ((x2461!=x2462)-(x2463>>x2464));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x2481 = -1083387648LL;
	int8_t x2484 = 0;
	static uint64_t t49 = 56LLU;

    t49 = ((x2481!=x2482)-(x2483>>x2484));

    if (t49 != 18446743525713999960LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x2593 = 35U;
	int8_t x2594 = 0;
	uint32_t x2595 = UINT32_MAX;
	uint16_t x2596 = 6U;
	volatile uint32_t t50 = 1558551U;

    t50 = ((x2593!=x2594)-(x2595>>x2596));

    if (t50 != 4227858434U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x2597 = -53168765556580454LL;
	int8_t x2598 = -1;
	int8_t x2599 = INT8_MAX;
	int16_t x2600 = 30;
	int32_t t51 = 3544564;

    t51 = ((x2597!=x2598)-(x2599>>x2600));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x2649 = -1;
	volatile int8_t x2650 = -1;
	int16_t x2651 = 13;
	uint64_t x2652 = 13LLU;
	volatile int32_t t52 = -252348;

    t52 = ((x2649!=x2650)-(x2651>>x2652));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x2697 = INT16_MIN;
	int64_t x2698 = INT64_MIN;
	uint64_t x2699 = UINT64_MAX;
	volatile uint8_t x2700 = 62U;
	volatile uint64_t t53 = 28283LLU;

    t53 = ((x2697!=x2698)-(x2699>>x2700));

    if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x2765 = 16494U;
	int16_t x2766 = INT16_MIN;
	volatile int64_t x2768 = 3LL;
	static volatile int32_t t54 = -368;

    t54 = ((x2765!=x2766)-(x2767>>x2768));

    if (t54 != -8) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x2769 = 63364024861LLU;
	uint64_t x2772 = 19LLU;
	static int32_t t55 = 132020;

    t55 = ((x2769!=x2770)-(x2771>>x2772));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x2845 = UINT32_MAX;
	volatile int64_t x2846 = INT64_MIN;
	uint32_t x2848 = 6U;
	volatile uint32_t t56 = 41144U;

    t56 = ((x2845!=x2846)-(x2847>>x2848));

    if (t56 != 4294590474U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x2889 = UINT8_MAX;
	static int16_t x2890 = INT16_MAX;
	static int32_t x2891 = INT32_MAX;
	volatile int32_t t57 = 42;

    t57 = ((x2889!=x2890)-(x2891>>x2892));

    if (t57 != -2147483646) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x2901 = -13;
	int16_t x2902 = -89;
	int8_t x2903 = INT8_MAX;
	volatile int32_t t58 = 1;

    t58 = ((x2901!=x2902)-(x2903>>x2904));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x2942 = INT32_MAX;
	int16_t x2944 = 1;
	int32_t t59 = 202727895;

    t59 = ((x2941!=x2942)-(x2943>>x2944));

    if (t59 != -5) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x2969 = UINT64_MAX;
	int32_t x2970 = INT32_MAX;
	int16_t x2971 = INT16_MAX;
	uint8_t x2972 = 1U;
	static volatile int32_t t60 = -1;

    t60 = ((x2969!=x2970)-(x2971>>x2972));

    if (t60 != -16382) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x3029 = INT64_MIN;
	volatile uint16_t x3031 = UINT16_MAX;
	static uint16_t x3032 = 2U;
	volatile int32_t t61 = -734205;

    t61 = ((x3029!=x3030)-(x3031>>x3032));

    if (t61 != -16382) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x3091 = 22456979006718205LLU;
	uint64_t t62 = 947049510064LLU;

    t62 = ((x3089!=x3090)-(x3091>>x3092));

    if (t62 != 18446738591048661305LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x3193 = INT8_MIN;
	static int8_t x3194 = INT8_MIN;
	static uint32_t x3195 = 215U;
	int8_t x3196 = 8;

    t63 = ((x3193!=x3194)-(x3195>>x3196));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x3237 = 437LL;
	int64_t x3238 = -3278203050045101LL;
	volatile uint8_t x3239 = 14U;
	int8_t x3240 = 1;
	int32_t t64 = 118;

    t64 = ((x3237!=x3238)-(x3239>>x3240));

    if (t64 != -6) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x3262 = 40;
	static uint32_t x3263 = UINT32_MAX;
	uint32_t t65 = 70274086U;

    t65 = ((x3261!=x3262)-(x3263>>x3264));

    if (t65 != 4290772994U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x3341 = UINT16_MAX;
	volatile uint16_t x3342 = 1U;
	int32_t x3343 = 7980;
	int8_t x3344 = 1;
	volatile int32_t t66 = -197012;

    t66 = ((x3341!=x3342)-(x3343>>x3344));

    if (t66 != -3989) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x3389 = -1;
	int32_t x3390 = INT32_MIN;
	uint16_t x3391 = UINT16_MAX;
	int8_t x3392 = 1;
	int32_t t67 = 1008674;

    t67 = ((x3389!=x3390)-(x3391>>x3392));

    if (t67 != -32766) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x3445 = INT32_MIN;
	int8_t x3446 = INT8_MIN;
	uint32_t x3447 = 2284700U;
	volatile uint8_t x3448 = 25U;
	static uint32_t t68 = 1754401354U;

    t68 = ((x3445!=x3446)-(x3447>>x3448));

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x3598 = INT64_MIN;
	static uint32_t x3599 = 1U;

    t69 = ((x3597!=x3598)-(x3599>>x3600));

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x3693 = INT8_MIN;
	static volatile int16_t x3694 = -1;
	static volatile uint8_t x3695 = 6U;
	volatile uint16_t x3696 = 0U;
	volatile int32_t t70 = -592142589;

    t70 = ((x3693!=x3694)-(x3695>>x3696));

    if (t70 != -5) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x3705 = 4982;
	static uint16_t x3706 = 1523U;
	volatile int64_t t71 = 11281729794616420LL;

    t71 = ((x3705!=x3706)-(x3707>>x3708));

    if (t71 != -12611084530803LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x3713 = INT64_MIN;
	uint64_t x3715 = 27505289353LLU;
	static uint8_t x3716 = 6U;
	volatile uint64_t t72 = 267622572980LLU;

    t72 = ((x3713!=x3714)-(x3715>>x3716));

    if (t72 != 18446744073279781471LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x3829 = INT64_MIN;
	volatile uint32_t x3830 = 13U;
	volatile uint32_t t73 = 667609U;

    t73 = ((x3829!=x3830)-(x3831>>x3832));

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x3869 = INT16_MIN;
	int32_t x3871 = 141810797;
	static uint16_t x3872 = 2U;
	int32_t t74 = -890;

    t74 = ((x3869!=x3870)-(x3871>>x3872));

    if (t74 != -35452698) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x3937 = UINT16_MAX;
	uint32_t x3938 = 0U;
	volatile int64_t x3939 = 88541LL;
	uint16_t x3940 = 24U;
	volatile int64_t t75 = -3737010201131231158LL;

    t75 = ((x3937!=x3938)-(x3939>>x3940));

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x3945 = UINT16_MAX;
	uint16_t x3946 = 148U;
	static int64_t x3947 = 15575641454298838LL;
	volatile int64_t t76 = 194LL;

    t76 = ((x3945!=x3946)-(x3947>>x3948));

    if (t76 != -15210587357712LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x3981 = 80U;
	int16_t x3982 = INT16_MAX;
	static int32_t x3983 = INT32_MAX;
	uint8_t x3984 = 8U;
	volatile int32_t t77 = -59757;

    t77 = ((x3981!=x3982)-(x3983>>x3984));

    if (t77 != -8388606) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x4001 = INT16_MIN;
	int64_t x4002 = INT64_MAX;
	static uint32_t x4003 = UINT32_MAX;
	uint32_t t78 = 160341U;

    t78 = ((x4001!=x4002)-(x4003>>x4004));

    if (t78 != 4294967290U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x4165 = -621;
	volatile int8_t x4166 = INT8_MIN;
	uint16_t x4167 = 32140U;
	uint32_t x4168 = 0U;
	volatile int32_t t79 = -20885865;

    t79 = ((x4165!=x4166)-(x4167>>x4168));

    if (t79 != -32139) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x4190 = INT64_MAX;
	volatile uint32_t x4191 = 6600375U;
	uint16_t x4192 = 10U;
	volatile uint32_t t80 = 1584791139U;

    t80 = ((x4189!=x4190)-(x4191>>x4192));

    if (t80 != 4294960852U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x4257 = 30U;
	int64_t x4258 = INT64_MAX;
	int8_t x4259 = 22;
	uint16_t x4260 = 1U;
	int32_t t81 = -9;

    t81 = ((x4257!=x4258)-(x4259>>x4260));

    if (t81 != -10) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x4265 = 2U;
	static int32_t x4266 = INT32_MIN;
	volatile int8_t x4267 = 1;
	static int8_t x4268 = 1;
	int32_t t82 = -1;

    t82 = ((x4265!=x4266)-(x4267>>x4268));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x4365 = INT16_MAX;
	int8_t x4366 = 0;
	volatile int16_t x4367 = 139;
	volatile int8_t x4368 = 0;

    t83 = ((x4365!=x4366)-(x4367>>x4368));

    if (t83 != -138) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x4385 = 660;
	volatile int32_t x4386 = -1;
	volatile int8_t x4387 = INT8_MAX;
	static int16_t x4388 = 0;
	int32_t t84 = -3941;

    t84 = ((x4385!=x4386)-(x4387>>x4388));

    if (t84 != -126) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x4398 = 158U;
	int64_t x4399 = 126419199660184446LL;
	uint16_t x4400 = 1U;
	static volatile int64_t t85 = -4066403LL;

    t85 = ((x4397!=x4398)-(x4399>>x4400));

    if (t85 != -63209599830092222LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x4445 = INT32_MAX;
	int64_t x4446 = INT64_MAX;
	uint8_t x4447 = 118U;
	uint16_t x4448 = 2U;

    t86 = ((x4445!=x4446)-(x4447>>x4448));

    if (t86 != -28) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x4449 = INT64_MIN;
	int64_t x4450 = INT64_MAX;
	uint8_t x4452 = 12U;
	volatile int64_t t87 = -6354605637LL;

    t87 = ((x4449!=x4450)-(x4451>>x4452));

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x4557 = -1;
	static int64_t x4558 = -8074272LL;
	int64_t t88 = 1896020LL;

    t88 = ((x4557!=x4558)-(x4559>>x4560));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x4569 = INT64_MAX;
	uint8_t x4570 = 3U;
	int8_t x4571 = 2;
	int8_t x4572 = 0;
	int32_t t89 = 253;

    t89 = ((x4569!=x4570)-(x4571>>x4572));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x4598 = -97564752071LL;
	static uint64_t x4599 = 8915124007LLU;
	static volatile int16_t x4600 = 0;
	static volatile uint64_t t90 = 2969993097808441253LLU;

    t90 = ((x4597!=x4598)-(x4599>>x4600));

    if (t90 != 18446744064794427610LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x4642 = UINT64_MAX;
	int32_t x4643 = INT32_MAX;
	uint16_t x4644 = 0U;
	static int32_t t91 = -211;

    t91 = ((x4641!=x4642)-(x4643>>x4644));

    if (t91 != -2147483646) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x4701 = 7;
	int16_t x4702 = -1;
	int32_t t92 = 1;

    t92 = ((x4701!=x4702)-(x4703>>x4704));

    if (t92 != -536870910) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x4717 = -1LL;
	uint8_t x4719 = 1U;
	int8_t x4720 = 9;

    t93 = ((x4717!=x4718)-(x4719>>x4720));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x4777 = INT8_MIN;
	int32_t x4778 = INT32_MAX;
	volatile uint64_t t94 = 4320852468991LLU;

    t94 = ((x4777!=x4778)-(x4779>>x4780));

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x4837 = UINT16_MAX;
	uint8_t x4839 = UINT8_MAX;
	static int8_t x4840 = 2;
	volatile int32_t t95 = 10345;

    t95 = ((x4837!=x4838)-(x4839>>x4840));

    if (t95 != -62) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x5045 = INT32_MAX;
	int16_t x5046 = INT16_MIN;
	uint8_t x5048 = 21U;
	volatile int32_t t96 = -435;

    t96 = ((x5045!=x5046)-(x5047>>x5048));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x5053 = UINT64_MAX;
	int32_t x5054 = INT32_MAX;
	uint8_t x5055 = 0U;
	uint32_t x5056 = 5U;
	int32_t t97 = 3035;

    t97 = ((x5053!=x5054)-(x5055>>x5056));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x5141 = 3U;
	static int16_t x5142 = INT16_MIN;
	static volatile uint8_t x5143 = 1U;
	int8_t x5144 = 0;
	volatile int32_t t98 = 1885;

    t98 = ((x5141!=x5142)-(x5143>>x5144));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x5213 = 1257782;
	volatile uint32_t x5215 = UINT32_MAX;

    t99 = ((x5213!=x5214)-(x5215>>x5216));

    if (t99 != 2U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x5305 = INT64_MAX;
	uint64_t x5306 = 2271965287973839547LLU;
	volatile uint64_t x5307 = 27961LLU;
	static uint16_t x5308 = 5U;

    t100 = ((x5305!=x5306)-(x5307>>x5308));

    if (t100 != 18446744073709550744LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x5317 = 1U;
	uint64_t x5318 = UINT64_MAX;
	static uint32_t x5319 = 20802077U;
	static int16_t x5320 = 3;
	static volatile uint32_t t101 = 2U;

    t101 = ((x5317!=x5318)-(x5319>>x5320));

    if (t101 != 4292367038U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x5389 = -1;
	int64_t x5391 = 105LL;
	int8_t x5392 = 1;
	volatile int64_t t102 = -22636LL;

    t102 = ((x5389!=x5390)-(x5391>>x5392));

    if (t102 != -51LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x5453 = 0U;
	uint64_t x5454 = 1512LLU;
	uint32_t x5455 = 31385111U;
	int32_t x5456 = 24;
	uint32_t t103 = 276119U;

    t103 = ((x5453!=x5454)-(x5455>>x5456));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x5469 = INT32_MIN;
	uint16_t x5470 = 3329U;
	static uint16_t x5471 = UINT16_MAX;
	static uint16_t x5472 = 1U;
	volatile int32_t t104 = -104086440;

    t104 = ((x5469!=x5470)-(x5471>>x5472));

    if (t104 != -32766) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x5573 = INT64_MIN;
	volatile uint8_t x5574 = UINT8_MAX;
	uint32_t x5575 = 853250U;
	volatile uint8_t x5576 = 1U;
	uint32_t t105 = 886U;

    t105 = ((x5573!=x5574)-(x5575>>x5576));

    if (t105 != 4294540672U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x5809 = UINT32_MAX;
	volatile int16_t x5810 = 1;
	int8_t x5811 = 21;
	uint8_t x5812 = 2U;

    t106 = ((x5809!=x5810)-(x5811>>x5812));

    if (t106 != -4) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x5826 = 139866716431LLU;
	uint32_t x5827 = 6U;
	uint8_t x5828 = 24U;
	uint32_t t107 = 7586515U;

    t107 = ((x5825!=x5826)-(x5827>>x5828));

    if (t107 != 1U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x5905 = -6;
	volatile uint64_t x5907 = 8969641237922268LLU;
	uint8_t x5908 = 62U;

    t108 = ((x5905!=x5906)-(x5907>>x5908));

    if (t108 != 1LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x5937 = 6741478159685LLU;
	uint16_t x5938 = 1U;
	int8_t x5939 = 7;
	volatile int32_t t109 = 29;

    t109 = ((x5937!=x5938)-(x5939>>x5940));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x6017 = -1;
	int64_t x6018 = -385826207LL;
	volatile uint32_t x6019 = 9U;
	int16_t x6020 = 1;
	volatile uint32_t t110 = 132U;

    t110 = ((x6017!=x6018)-(x6019>>x6020));

    if (t110 != 4294967293U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x6049 = INT32_MAX;
	uint16_t x6050 = 822U;
	volatile uint8_t x6052 = 8U;
	volatile int32_t t111 = 55449;

    t111 = ((x6049!=x6050)-(x6051>>x6052));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x6057 = INT16_MIN;
	int64_t x6058 = INT64_MAX;
	int8_t x6059 = 0;
	int16_t x6060 = 1;

    t112 = ((x6057!=x6058)-(x6059>>x6060));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x6173 = 4;
	uint16_t x6174 = UINT16_MAX;
	int64_t x6175 = INT64_MAX;
	int64_t t113 = 600591810066LL;

    t113 = ((x6173!=x6174)-(x6175>>x6176));

    if (t113 != -144115188075855870LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x6329 = UINT64_MAX;
	int8_t x6330 = 1;
	int32_t x6331 = 222;
	uint8_t x6332 = 1U;
	volatile int32_t t114 = -793;

    t114 = ((x6329!=x6330)-(x6331>>x6332));

    if (t114 != -110) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x6345 = -3;
	int32_t x6346 = INT32_MIN;
	static int32_t x6347 = 57915057;
	volatile uint32_t x6348 = 0U;
	volatile int32_t t115 = -21588945;

    t115 = ((x6345!=x6346)-(x6347>>x6348));

    if (t115 != -57915056) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x6389 = -15;
	int16_t x6390 = 28;
	static uint64_t x6391 = UINT64_MAX;
	uint8_t x6392 = 0U;
	volatile uint64_t t116 = 2579946734608599LLU;

    t116 = ((x6389!=x6390)-(x6391>>x6392));

    if (t116 != 2LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x6393 = -1;
	static volatile int64_t x6394 = INT64_MIN;
	int16_t x6395 = 24;
	int64_t x6396 = 0LL;
	static int32_t t117 = 8;

    t117 = ((x6393!=x6394)-(x6395>>x6396));

    if (t117 != -23) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x6514 = -15824;
	uint16_t x6515 = UINT16_MAX;
	int32_t t118 = 204068;

    t118 = ((x6513!=x6514)-(x6515>>x6516));

    if (t118 != -32766) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x6529 = -5;
	int8_t x6530 = -18;
	uint32_t x6532 = 6U;
	volatile int32_t t119 = -50;

    t119 = ((x6529!=x6530)-(x6531>>x6532));

    if (t119 != -1022) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x6549 = -9;
	static volatile int8_t x6550 = INT8_MAX;
	int32_t x6552 = 0;
	static int32_t t120 = 6660255;

    t120 = ((x6549!=x6550)-(x6551>>x6552));

    if (t120 != -2147483646) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x6557 = -1;
	uint8_t x6558 = 1U;
	uint8_t x6560 = 23U;
	volatile int32_t t121 = -1216315;

    t121 = ((x6557!=x6558)-(x6559>>x6560));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x6570 = INT8_MIN;
	uint64_t x6571 = UINT64_MAX;
	uint32_t x6572 = 6U;
	static uint64_t t122 = 59379LLU;

    t122 = ((x6569!=x6570)-(x6571>>x6572));

    if (t122 != 18158513697557839874LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x6583 = INT64_MAX;
	volatile int8_t x6584 = 38;

    t123 = ((x6581!=x6582)-(x6583>>x6584));

    if (t123 != -33554430LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x6605 = UINT16_MAX;
	static volatile int32_t x6606 = INT32_MIN;
	volatile int8_t x6607 = 1;
	uint8_t x6608 = 3U;
	volatile int32_t t124 = 113408;

    t124 = ((x6605!=x6606)-(x6607>>x6608));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x6625 = INT32_MIN;
	volatile int16_t x6627 = INT16_MAX;
	int16_t x6628 = 13;
	int32_t t125 = 6186691;

    t125 = ((x6625!=x6626)-(x6627>>x6628));

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x6657 = 56954;
	static uint8_t x6658 = UINT8_MAX;
	uint32_t x6659 = UINT32_MAX;
	static volatile uint8_t x6660 = 5U;
	uint32_t t126 = 50932U;

    t126 = ((x6657!=x6658)-(x6659>>x6660));

    if (t126 != 4160749570U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x6717 = UINT16_MAX;
	static int64_t x6718 = -369LL;
	int32_t x6719 = INT32_MAX;
	int16_t x6720 = 1;
	volatile int32_t t127 = -3327;

    t127 = ((x6717!=x6718)-(x6719>>x6720));

    if (t127 != -1073741822) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x6774 = UINT16_MAX;
	uint64_t x6776 = 3LLU;
	volatile uint32_t t128 = 2588U;

    t128 = ((x6773!=x6774)-(x6775>>x6776));

    if (t128 != 3758096386U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x6783 = INT8_MAX;
	int8_t x6784 = 1;
	int32_t t129 = -1;

    t129 = ((x6781!=x6782)-(x6783>>x6784));

    if (t129 != -62) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x6873 = -1030;
	int64_t x6874 = -15333LL;
	static volatile uint8_t x6875 = UINT8_MAX;
	static int8_t x6876 = 11;

    t130 = ((x6873!=x6874)-(x6875>>x6876));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x6885 = 5;
	int8_t x6886 = INT8_MIN;
	volatile uint32_t x6887 = UINT32_MAX;
	uint64_t x6888 = 3LLU;
	volatile uint32_t t131 = 846U;

    t131 = ((x6885!=x6886)-(x6887>>x6888));

    if (t131 != 3758096386U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x6925 = INT8_MAX;
	uint64_t x6926 = 87054324451634LLU;
	uint64_t x6927 = 1242LLU;
	static uint8_t x6928 = 1U;
	uint64_t t132 = 5597625LLU;

    t132 = ((x6925!=x6926)-(x6927>>x6928));

    if (t132 != 18446744073709550996LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x7041 = -1;
	volatile uint16_t x7042 = UINT16_MAX;
	static uint16_t x7043 = 863U;
	volatile uint8_t x7044 = 14U;

    t133 = ((x7041!=x7042)-(x7043>>x7044));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x7113 = UINT32_MAX;
	int32_t x7114 = -1042362472;
	int32_t t134 = 9369;

    t134 = ((x7113!=x7114)-(x7115>>x7116));

    if (t134 != -1085) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x7197 = INT64_MAX;
	uint16_t x7198 = UINT16_MAX;
	uint64_t x7199 = 3173822697LLU;
	uint8_t x7200 = 0U;
	volatile uint64_t t135 = 7273802311105485538LLU;

    t135 = ((x7197!=x7198)-(x7199>>x7200));

    if (t135 != 18446744070535728920LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x7225 = INT32_MIN;
	volatile int64_t x7226 = INT64_MIN;
	int32_t x7227 = INT32_MAX;
	uint8_t x7228 = 0U;
	int32_t t136 = -3;

    t136 = ((x7225!=x7226)-(x7227>>x7228));

    if (t136 != -2147483646) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint32_t x7377 = 77722U;
	volatile uint8_t x7378 = UINT8_MAX;
	int64_t x7379 = INT64_MAX;
	uint8_t x7380 = 0U;
	int64_t t137 = 962755437LL;

    t137 = ((x7377!=x7378)-(x7379>>x7380));

    if (t137 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x7549 = 836LLU;
	volatile int64_t x7550 = INT64_MAX;
	int64_t x7551 = INT64_MAX;
	int8_t x7552 = 4;

    t138 = ((x7549!=x7550)-(x7551>>x7552));

    if (t138 != -576460752303423486LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x7641 = 1U;
	int32_t x7642 = INT32_MAX;
	static uint16_t x7643 = UINT16_MAX;
	uint16_t x7644 = 8U;

    t139 = ((x7641!=x7642)-(x7643>>x7644));

    if (t139 != -254) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x7671 = 42LL;
	static uint8_t x7672 = 0U;
	int64_t t140 = -37266175318529562LL;

    t140 = ((x7669!=x7670)-(x7671>>x7672));

    if (t140 != -41LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x7773 = INT16_MIN;
	uint8_t x7774 = 17U;
	volatile int8_t x7776 = 6;
	uint32_t t141 = 10958449U;

    t141 = ((x7773!=x7774)-(x7775>>x7776));

    if (t141 != 4294795545U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x7801 = 9967689;
	uint32_t x7802 = UINT32_MAX;
	int32_t x7803 = INT32_MAX;
	int8_t x7804 = 13;
	int32_t t142 = -55957;

    t142 = ((x7801!=x7802)-(x7803>>x7804));

    if (t142 != -262142) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x7878 = INT32_MIN;
	uint8_t x7879 = 1U;
	int32_t t143 = -1780;

    t143 = ((x7877!=x7878)-(x7879>>x7880));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x7917 = -1;
	static uint16_t x7918 = UINT16_MAX;
	static int8_t x7919 = INT8_MAX;
	int8_t x7920 = 1;
	int32_t t144 = 2119;

    t144 = ((x7917!=x7918)-(x7919>>x7920));

    if (t144 != -62) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x7946 = INT32_MAX;
	uint64_t x7947 = 1673619LLU;
	uint8_t x7948 = 4U;
	uint64_t t145 = 16123942977LLU;

    t145 = ((x7945!=x7946)-(x7947>>x7948));

    if (t145 != 18446744073709447016LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x8025 = INT8_MIN;
	uint32_t x8027 = 5U;

    t146 = ((x8025!=x8026)-(x8027>>x8028));

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x8097 = 28U;
	uint16_t x8098 = 13U;
	static int64_t x8099 = 1521128LL;
	uint8_t x8100 = 0U;
	static int64_t t147 = 145547LL;

    t147 = ((x8097!=x8098)-(x8099>>x8100));

    if (t147 != -1521127LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x8197 = -1;
	int32_t x8198 = 1098921;
	int64_t x8199 = INT64_MAX;
	int8_t x8200 = 1;
	int64_t t148 = 10152513293LL;

    t148 = ((x8197!=x8198)-(x8199>>x8200));

    if (t148 != -4611686018427387902LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x8337 = -2114422516291035LL;
	static int64_t x8338 = INT64_MIN;
	int32_t x8339 = 314200;
	uint8_t x8340 = 3U;
	int32_t t149 = 6048787;

    t149 = ((x8337!=x8338)-(x8339>>x8340));

    if (t149 != -39274) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x8529 = -4;
	static volatile int32_t x8530 = INT32_MAX;
	static uint16_t x8531 = 83U;
	int8_t x8532 = 1;
	static volatile int32_t t150 = 31155276;

    t150 = ((x8529!=x8530)-(x8531>>x8532));

    if (t150 != -40) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x8557 = INT16_MAX;
	uint32_t x8558 = UINT32_MAX;
	int32_t x8559 = 346;
	volatile int32_t t151 = 247901420;

    t151 = ((x8557!=x8558)-(x8559>>x8560));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x8598 = UINT16_MAX;
	uint8_t x8599 = 29U;
	uint16_t x8600 = 8U;
	volatile int32_t t152 = -1;

    t152 = ((x8597!=x8598)-(x8599>>x8600));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x8671 = 2U;
	uint16_t x8672 = 1U;
	volatile int32_t t153 = -328865;

    t153 = ((x8669!=x8670)-(x8671>>x8672));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x8865 = INT16_MAX;
	static uint8_t x8866 = 6U;
	static uint64_t x8867 = UINT64_MAX;
	uint32_t x8868 = 23U;

    t154 = ((x8865!=x8866)-(x8867>>x8868));

    if (t154 != 18446741874686296066LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x8949 = INT8_MIN;
	static uint8_t x8950 = 28U;
	static uint32_t x8951 = 20007U;
	volatile int32_t x8952 = 1;

    t155 = ((x8949!=x8950)-(x8951>>x8952));

    if (t155 != 4294957294U) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x9013 = 103U;
	int64_t x9014 = -627903841822753LL;
	uint32_t x9015 = 2051814683U;
	int8_t x9016 = 2;
	uint32_t t156 = 469U;

    t156 = ((x9013!=x9014)-(x9015>>x9016));

    if (t156 != 3782013627U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x9057 = 1369U;
	volatile int64_t t157 = 1603517721081LL;

    t157 = ((x9057!=x9058)-(x9059>>x9060));

    if (t157 != -6006440592765LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x9077 = 1;
	volatile int16_t x9079 = 389;
	static uint32_t x9080 = 1U;
	int32_t t158 = -1514;

    t158 = ((x9077!=x9078)-(x9079>>x9080));

    if (t158 != -193) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x9189 = INT8_MAX;
	static int64_t x9190 = -1LL;
	uint64_t x9191 = UINT64_MAX;
	int8_t x9192 = 42;
	volatile uint64_t t159 = 134565352931577081LLU;

    t159 = ((x9189!=x9190)-(x9191>>x9192));

    if (t159 != 18446744073705357314LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x9201 = 44U;
	uint32_t x9202 = 24604U;
	uint16_t x9204 = 50U;
	volatile uint64_t t160 = 7LLU;

    t160 = ((x9201!=x9202)-(x9203>>x9204));

    if (t160 != 18446744073709535234LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x9221 = UINT64_MAX;
	uint8_t x9224 = 36U;
	int64_t t161 = -3866029409616829323LL;

    t161 = ((x9221!=x9222)-(x9223>>x9224));

    if (t161 != -134217726LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int64_t x9297 = -1LL;
	uint64_t x9298 = UINT64_MAX;

    t162 = ((x9297!=x9298)-(x9299>>x9300));

    if (t162 != -9007199254740991LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x9373 = 1U;
	volatile uint8_t x9374 = 45U;
	volatile int8_t x9375 = 1;

    t163 = ((x9373!=x9374)-(x9375>>x9376));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x9405 = INT32_MIN;
	uint32_t x9406 = 794U;
	static volatile uint64_t x9407 = UINT64_MAX;
	uint32_t x9408 = 30U;

    t164 = ((x9405!=x9406)-(x9407>>x9408));

    if (t164 != 18446744056529682434LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x9506 = INT16_MIN;
	volatile uint64_t x9507 = 77469598LLU;
	static uint16_t x9508 = 1U;
	uint64_t t165 = 9061935212460LLU;

    t165 = ((x9505!=x9506)-(x9507>>x9508));

    if (t165 != 18446744073670816818LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x9658 = INT32_MIN;
	int8_t x9659 = INT8_MAX;
	static int16_t x9660 = 2;
	static int32_t t166 = -10575;

    t166 = ((x9657!=x9658)-(x9659>>x9660));

    if (t166 != -30) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x9741 = INT16_MIN;
	int32_t x9742 = INT32_MIN;
	int64_t x9743 = INT64_MAX;
	volatile uint8_t x9744 = 7U;
	int64_t t167 = 15440225700275910LL;

    t167 = ((x9741!=x9742)-(x9743>>x9744));

    if (t167 != -72057594037927934LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x9753 = INT32_MIN;
	uint64_t x9754 = 10947894226LLU;
	int64_t t168 = 112LL;

    t168 = ((x9753!=x9754)-(x9755>>x9756));

    if (t168 != -109325198909020LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x9802 = 28U;
	static int8_t x9804 = 0;
	volatile int32_t t169 = 596014;

    t169 = ((x9801!=x9802)-(x9803>>x9804));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x9838 = 1;
	static int32_t t170 = 1344315;

    t170 = ((x9837!=x9838)-(x9839>>x9840));

    if (t170 != -14) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x9897 = -89326LL;
	int8_t x9898 = INT8_MIN;
	int16_t x9900 = 3;
	int32_t t171 = 32932484;

    t171 = ((x9897!=x9898)-(x9899>>x9900));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x9929 = -1;
	int8_t x9930 = INT8_MIN;
	uint16_t x9931 = 23947U;
	uint8_t x9932 = 3U;
	volatile int32_t t172 = 303;

    t172 = ((x9929!=x9930)-(x9931>>x9932));

    if (t172 != -2992) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x10113 = INT64_MIN;
	static int32_t x10115 = INT32_MAX;
	static uint32_t x10116 = 1U;

    t173 = ((x10113!=x10114)-(x10115>>x10116));

    if (t173 != -1073741822) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x10125 = 200862792354LL;
	int64_t x10127 = 2669210180LL;
	uint8_t x10128 = 21U;
	volatile int64_t t174 = 49469LL;

    t174 = ((x10125!=x10126)-(x10127>>x10128));

    if (t174 != -1271LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x10201 = 196206769U;
	static int32_t x10202 = INT32_MIN;
	uint64_t x10203 = 39377LLU;
	int8_t x10204 = 0;

    t175 = ((x10201!=x10202)-(x10203>>x10204));

    if (t175 != 18446744073709512240LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x10213 = INT32_MIN;
	uint16_t x10214 = 12272U;
	static uint16_t x10215 = 102U;

    t176 = ((x10213!=x10214)-(x10215>>x10216));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x10265 = INT64_MAX;
	uint8_t x10266 = UINT8_MAX;
	int64_t x10267 = INT64_MAX;
	volatile uint64_t x10268 = 18LLU;
	int64_t t177 = 555000568LL;

    t177 = ((x10265!=x10266)-(x10267>>x10268));

    if (t177 != -35184372088830LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x10353 = INT32_MIN;
	uint32_t x10354 = UINT32_MAX;
	int32_t x10355 = 0;
	uint16_t x10356 = 1U;

    t178 = ((x10353!=x10354)-(x10355>>x10356));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x10365 = 1;
	int64_t x10366 = INT64_MIN;
	uint32_t x10367 = 11080096U;
	uint8_t x10368 = 0U;
	uint32_t t179 = 2121U;

    t179 = ((x10365!=x10366)-(x10367>>x10368));

    if (t179 != 4283887201U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x10441 = 396225759U;
	volatile int32_t x10442 = -400443947;
	volatile int8_t x10443 = INT8_MAX;
	int32_t t180 = -4589;

    t180 = ((x10441!=x10442)-(x10443>>x10444));

    if (t180 != -62) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x10449 = -17;
	int8_t x10450 = INT8_MAX;
	int32_t x10451 = 5;
	int32_t t181 = 12;

    t181 = ((x10449!=x10450)-(x10451>>x10452));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x10509 = 2U;
	int8_t x10512 = 3;
	uint32_t t182 = 220U;

    t182 = ((x10509!=x10510)-(x10511>>x10512));

    if (t182 != 4294967106U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x10597 = 30U;
	static volatile int64_t x10598 = -1LL;

    t183 = ((x10597!=x10598)-(x10599>>x10600));

    if (t183 != 4294962756U) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x10621 = -5960;
	int8_t x10622 = -10;
	int64_t x10623 = INT64_MAX;
	int8_t x10624 = 20;
	volatile int64_t t184 = -7191163932LL;

    t184 = ((x10621!=x10622)-(x10623>>x10624));

    if (t184 != -8796093022206LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x10690 = 248U;
	uint16_t x10691 = 1U;

    t185 = ((x10689!=x10690)-(x10691>>x10692));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x10745 = -1;
	uint16_t x10746 = 3U;
	int8_t x10747 = 13;
	static uint32_t x10748 = 3U;
	volatile int32_t t186 = -2;

    t186 = ((x10745!=x10746)-(x10747>>x10748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x10789 = 0;
	volatile int32_t x10790 = 8;
	int64_t x10791 = 56377777997816643LL;
	uint8_t x10792 = 43U;
	volatile int64_t t187 = -408868025694LL;

    t187 = ((x10789!=x10790)-(x10791>>x10792));

    if (t187 != -6408LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x10801 = UINT8_MAX;
	uint64_t x10802 = 13LLU;
	static volatile uint64_t x10803 = 17569917532335610LLU;
	int32_t x10804 = 44;

    t188 = ((x10801!=x10802)-(x10803>>x10804));

    if (t188 != 18446744073709550619LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x10901 = 781986877298388LLU;
	int32_t x10902 = INT32_MAX;
	uint8_t x10904 = 15U;

    t189 = ((x10901!=x10902)-(x10903>>x10904));

    if (t189 != 4294962753U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x10925 = UINT64_MAX;
	int64_t x10926 = -2975LL;
	static volatile uint32_t x10927 = 1U;
	volatile uint32_t t190 = 48127855U;

    t190 = ((x10925!=x10926)-(x10927>>x10928));

    if (t190 != 1U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x10937 = -1;
	int16_t x10938 = 4601;
	uint16_t x10939 = UINT16_MAX;
	volatile int8_t x10940 = 14;
	static int32_t t191 = -1;

    t191 = ((x10937!=x10938)-(x10939>>x10940));

    if (t191 != -2) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x10957 = -1;
	uint16_t x10958 = UINT16_MAX;
	int8_t x10960 = 3;
	int32_t t192 = -14;

    t192 = ((x10957!=x10958)-(x10959>>x10960));

    if (t192 != -47) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x11013 = -440;
	int64_t x11014 = -26221946409430673LL;
	int16_t x11016 = 1;
	volatile int64_t t193 = -1LL;

    t193 = ((x11013!=x11014)-(x11015>>x11016));

    if (t193 != -828LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x11017 = 2U;
	uint32_t x11018 = 951932U;
	volatile uint8_t x11019 = 80U;
	static int64_t x11020 = 0LL;
	int32_t t194 = 10;

    t194 = ((x11017!=x11018)-(x11019>>x11020));

    if (t194 != -79) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x11021 = -1111;
	uint16_t x11022 = 33U;
	uint16_t x11023 = 0U;
	volatile int32_t t195 = -658050;

    t195 = ((x11021!=x11022)-(x11023>>x11024));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x11069 = INT64_MAX;
	static int8_t x11070 = INT8_MIN;
	static uint16_t x11071 = 1U;
	uint16_t x11072 = 26U;
	int32_t t196 = 5365640;

    t196 = ((x11069!=x11070)-(x11071>>x11072));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x11234 = -483;
	int16_t x11236 = 0;
	uint64_t t197 = 394104614281565LLU;

    t197 = ((x11233!=x11234)-(x11235>>x11236));

    if (t197 != 2LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x11297 = 40U;
	static uint64_t x11298 = 15974828341042797LLU;
	volatile int32_t x11299 = INT32_MAX;
	volatile int8_t x11300 = 26;
	volatile int32_t t198 = 157172183;

    t198 = ((x11297!=x11298)-(x11299>>x11300));

    if (t198 != -30) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x11325 = INT8_MIN;
	int64_t x11326 = INT64_MIN;
	volatile uint32_t x11327 = UINT32_MAX;
	uint8_t x11328 = 6U;
	uint32_t t199 = 108516094U;

    t199 = ((x11325!=x11326)-(x11327>>x11328));

    if (t199 != 4227858434U) { NG(); } else { ; }
	
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

