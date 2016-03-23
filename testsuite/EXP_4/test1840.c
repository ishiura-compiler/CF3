
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

static uint16_t x173 = 3U;
volatile uint8_t x174 = 2U;
static volatile int32_t t1 = 1595;
int32_t x202 = 0;
static uint32_t x229 = 57U;
volatile uint8_t x310 = 1U;
uint64_t t5 = 1221LLU;
volatile int8_t x338 = 0;
int32_t x374 = 6;
volatile int64_t x375 = -1LL;
uint64_t x389 = UINT64_MAX;
static int64_t x391 = -1LL;
volatile uint64_t t8 = 867318464877245LLU;
int32_t x809 = 0;
volatile int64_t x918 = 0LL;
volatile int64_t t13 = INT64_MAX;
uint8_t x1002 = 3U;
int8_t x1034 = 0;
uint8_t x1205 = 0U;
static uint32_t x1208 = 1020355U;
volatile uint64_t x1209 = 7LLU;
uint64_t t20 = 7LLU;
volatile uint16_t x1290 = 0U;
static volatile uint32_t t21 = 17993U;
static int64_t x1397 = 175697333726092998LL;
volatile int64_t t22 = 6089675325585508LL;
uint8_t x1446 = 0U;
uint64_t x1701 = UINT64_MAX;
int8_t x1703 = INT8_MIN;
int16_t x1704 = INT16_MIN;
uint8_t x1761 = 2U;
static volatile int64_t x1768 = INT64_MAX;
static uint32_t x1792 = 266464U;
static int8_t x1811 = INT8_MAX;
uint16_t x1812 = UINT16_MAX;
uint64_t x1837 = 3560LLU;
uint8_t x1869 = UINT8_MAX;
static int32_t x2064 = INT32_MAX;
uint32_t x2109 = 1U;
uint32_t t33 = 45U;
volatile int16_t x2247 = INT16_MIN;
int8_t x2344 = -1;
static volatile int32_t t36 = -29920197;
int16_t x2347 = 200;
volatile int32_t x2391 = -203297;
static uint8_t x2560 = 14U;
int64_t x2676 = 131052651180830282LL;
uint32_t x2775 = 199289U;
uint64_t t43 = 20510828LLU;
int64_t x2855 = INT64_MIN;
int64_t x2958 = 1LL;
volatile int32_t x2960 = -1;
uint64_t x3191 = UINT64_MAX;
static int32_t t47 = -53839351;
uint32_t x3309 = 492497U;
uint32_t t49 = 253U;
uint32_t x3506 = 3U;
int16_t x3627 = 107;
uint64_t t55 = 1288465652LLU;
int8_t x3671 = INT8_MIN;
static int8_t x3755 = 7;
volatile int32_t t57 = 3;
static int32_t x4167 = INT32_MAX;
int64_t x4168 = -1LL;
volatile int32_t x4205 = INT32_MAX;
static int32_t x4208 = -222866362;
int32_t t62 = INT32_MAX;
int16_t x4243 = INT16_MIN;
uint16_t x4317 = UINT16_MAX;
static uint8_t x4353 = 60U;
static volatile uint32_t x4401 = UINT32_MAX;
uint16_t x4505 = 7U;
int16_t x4508 = INT16_MAX;
int64_t x4619 = 18930276LL;
static uint16_t x4712 = 17017U;
uint8_t x4742 = 7U;
volatile int32_t t73 = 56;
int64_t x4812 = 247LL;
int64_t x4844 = INT64_MAX;
uint8_t x4865 = 2U;
uint16_t x4900 = 64U;
int16_t x5039 = INT16_MAX;
uint64_t t79 = 7818LLU;
uint8_t x5214 = 4U;
volatile uint8_t x5317 = UINT8_MAX;
volatile int64_t x5320 = -27046037569LL;
uint32_t x5373 = 53993U;
volatile uint32_t t84 = 65U;
int8_t x5650 = 4;
uint16_t x5652 = 23207U;
volatile uint64_t t87 = 8384LLU;
static volatile uint32_t x5797 = UINT32_MAX;
volatile int16_t x5832 = INT16_MAX;
static uint64_t x5837 = UINT64_MAX;
static volatile uint8_t x5949 = 11U;
static int32_t t92 = 24;
volatile uint64_t x6028 = UINT64_MAX;
volatile int8_t x6087 = 10;
volatile uint8_t x6088 = 1U;
volatile uint32_t x6168 = 31U;
uint32_t x6197 = UINT32_MAX;
static volatile uint64_t x6199 = UINT64_MAX;
int16_t x6392 = INT16_MIN;
int8_t x6480 = -1;
uint8_t x6513 = 13U;
static int64_t x6516 = 72277324364733157LL;
int32_t t102 = 55035771;
uint32_t x6748 = UINT32_MAX;
int64_t x6809 = 17641619995663854LL;
uint16_t x6841 = 4102U;
volatile int8_t x6900 = INT8_MAX;
volatile int32_t t107 = -1;
uint32_t x6950 = 4U;
static volatile uint32_t t108 = 218398U;
uint16_t x7012 = UINT16_MAX;
volatile int32_t t110 = INT32_MAX;
int32_t t112 = -33290;
uint16_t x7459 = UINT16_MAX;
int16_t x7460 = 115;
volatile int8_t x7471 = INT8_MIN;
uint16_t x7506 = 0U;
static int8_t x7634 = 11;
volatile uint64_t t120 = 1244520LLU;
static volatile uint8_t x7644 = 32U;
volatile uint32_t t121 = 469890U;
int32_t t123 = 536528;
static int8_t x7920 = INT8_MIN;
int16_t x7923 = 1251;
static int8_t x7924 = -1;
uint32_t t126 = 535247503U;
int32_t x7984 = -1;
int8_t x8109 = INT8_MAX;
static volatile uint16_t x8111 = UINT16_MAX;
static uint64_t x8129 = UINT64_MAX;
uint8_t x8130 = 0U;
uint32_t x8131 = 186605U;
int32_t x8132 = INT32_MIN;
volatile int8_t x8491 = -1;
static volatile int32_t x8492 = INT32_MAX;
volatile uint16_t x8577 = UINT16_MAX;
int64_t t137 = 941829LL;
int32_t x8805 = 95256752;
static uint64_t t140 = 60787LLU;
static int8_t x9037 = INT8_MAX;
uint8_t x9040 = UINT8_MAX;
volatile int64_t x9267 = -1LL;
volatile uint64_t t146 = 131LLU;
int16_t x9343 = INT16_MIN;
static volatile int64_t t147 = 760319994LL;
int16_t x9359 = INT16_MIN;
int32_t t148 = -728;
int64_t x9419 = 3716488612291509031LL;
uint64_t x9420 = 106280573189LLU;
uint64_t x9585 = UINT64_MAX;
uint8_t x9857 = 13U;
int16_t x9858 = 1;
volatile uint8_t x9978 = 4U;
volatile uint16_t x10086 = 20U;
int32_t x10120 = INT32_MIN;
static int32_t t156 = 0;
uint32_t t157 = 5259U;
static int16_t x10340 = -1;
int64_t x10467 = INT64_MIN;
volatile int32_t t162 = -327;
int8_t x10673 = 45;
int32_t x10675 = INT32_MAX;
int8_t x10745 = INT8_MAX;
int32_t t165 = -3;
uint16_t x10781 = 6U;
uint64_t x10798 = 6LLU;
static int32_t t167 = 269912528;
uint64_t t169 = 1300779510LLU;
uint64_t x11365 = 1057021504935856731LLU;
uint64_t t171 = 221525412549LLU;
int32_t t172 = 2966303;
int32_t x11479 = -1;
volatile int32_t t174 = -13684;
static int16_t x11620 = INT16_MIN;
int32_t t176 = 1595;
volatile uint16_t x11735 = 13U;
int16_t x11745 = 8;
int64_t x11747 = -852300590500221LL;
int32_t t179 = 47927;
static int16_t x12080 = INT16_MIN;
int32_t t183 = 3;
int32_t x12160 = INT32_MAX;
int32_t x12364 = -1;
uint32_t t186 = 159520576U;
volatile int8_t x12488 = 1;
static volatile uint64_t t187 = UINT64_MAX;
volatile int8_t x12509 = INT8_MAX;
volatile int32_t t188 = 15324;
static int16_t x12515 = -61;
int32_t x12516 = INT32_MIN;
static uint64_t x12567 = 69LLU;
static uint64_t x12629 = UINT64_MAX;
int16_t x12733 = 3527;
int8_t x12735 = INT8_MIN;
static int64_t x12763 = 2377803LL;
uint64_t t194 = 15249920717LLU;
uint64_t x12865 = 292949LLU;
uint64_t t196 = 2097762388158643LLU;
volatile uint32_t x12889 = 0U;
volatile uint8_t x12890 = 7U;
uint64_t x12922 = 0LLU;
volatile uint16_t x12923 = UINT16_MAX;
uint16_t x12930 = 0U;
uint8_t x12931 = 1U;


void f0(void) {
    	volatile uint8_t x41 = UINT8_MAX;
	static int64_t x42 = 1LL;
	static uint32_t x43 = 189U;
	int32_t x44 = -1;
	static volatile int32_t t0 = 29451095;

    t0 = (x41<<(x42<<(x43<=x44)));

    if (t0 != 1020) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;

    t1 = (x173<<(x174<<(x175<=x176)));

    if (t1 != 12) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x201 = 89U;
	volatile int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t2 = 187;

    t2 = (x201<<(x202<<(x203<=x204)));

    if (t2 != 89) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x230 = 10U;
	static uint8_t x231 = UINT8_MAX;
	int64_t x232 = 4112069859LL;
	uint32_t t3 = 538613093U;

    t3 = (x229<<(x230<<(x231<=x232)));

    if (t3 != 59768832U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x257 = 162017950076420518LLU;
	static volatile int16_t x258 = 1;
	int8_t x259 = INT8_MIN;
	uint64_t x260 = 6897016956900LLU;
	uint64_t t4 = 12LLU;

    t4 = (x257<<(x258<<(x259<=x260)));

    if (t4 != 324035900152841036LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x309 = 18116545718LLU;
	int8_t x311 = -1;
	int16_t x312 = INT16_MIN;

    t5 = (x309<<(x310<<(x311<=x312)));

    if (t5 != 36233091436LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x337 = INT16_MAX;
	uint32_t x339 = 43483U;
	int32_t x340 = INT32_MIN;
	volatile int32_t t6 = 63;

    t6 = (x337<<(x338<<(x339<=x340)));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x373 = 137U;
	static int64_t x376 = INT64_MIN;
	int32_t t7 = -441;

    t7 = (x373<<(x374<<(x375<=x376)));

    if (t7 != 8768) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x390 = 29LLU;
	uint8_t x392 = 121U;

    t8 = (x389<<(x390<<(x391<=x392)));

    if (t8 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x701 = 33236444U;
	uint8_t x702 = 1U;
	static volatile uint32_t x703 = 101363U;
	static uint32_t x704 = 721126U;
	volatile uint32_t t9 = 58623U;

    t9 = (x701<<(x702<<(x703<=x704)));

    if (t9 != 132945776U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x729 = 0;
	static int8_t x730 = 1;
	uint16_t x731 = UINT16_MAX;
	int8_t x732 = INT8_MIN;
	int32_t t10 = 85954;

    t10 = (x729<<(x730<<(x731<=x732)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x801 = 154074485U;
	uint8_t x802 = 8U;
	int32_t x803 = -1;
	static uint64_t x804 = 47461LLU;
	uint32_t t11 = 42381U;

    t11 = (x801<<(x802<<(x803<=x804)));

    if (t11 != 788362496U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x810 = 2U;
	int16_t x811 = 702;
	int32_t x812 = INT32_MIN;
	volatile int32_t t12 = -81592;

    t12 = (x809<<(x810<<(x811<=x812)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x917 = INT64_MAX;
	uint64_t x919 = 71133001647LLU;
	uint16_t x920 = UINT16_MAX;

    t13 = (x917<<(x918<<(x919<=x920)));

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x937 = 803LLU;
	int16_t x938 = 10;
	uint64_t x939 = 4166LLU;
	int8_t x940 = INT8_MAX;
	static uint64_t t14 = 49466358LLU;

    t14 = (x937<<(x938<<(x939<=x940)));

    if (t14 != 822272LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x1001 = 31LLU;
	static uint16_t x1003 = 15424U;
	int32_t x1004 = -11;
	uint64_t t15 = 115348931LLU;

    t15 = (x1001<<(x1002<<(x1003<=x1004)));

    if (t15 != 248LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x1033 = UINT8_MAX;
	volatile uint16_t x1035 = 857U;
	int8_t x1036 = INT8_MAX;
	int32_t t16 = -254451241;

    t16 = (x1033<<(x1034<<(x1035<=x1036)));

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1206 = 1U;
	int64_t x1207 = 487537187921320LL;
	int32_t t17 = 181550489;

    t17 = (x1205<<(x1206<<(x1207<=x1208)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x1210 = 4U;
	volatile int16_t x1211 = INT16_MAX;
	static volatile uint8_t x1212 = 0U;
	uint64_t t18 = 13093771182LLU;

    t18 = (x1209<<(x1210<<(x1211<=x1212)));

    if (t18 != 112LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x1229 = 246393;
	volatile uint32_t x1230 = 0U;
	static int16_t x1231 = INT16_MIN;
	uint16_t x1232 = 2691U;
	volatile int32_t t19 = 69;

    t19 = (x1229<<(x1230<<(x1231<=x1232)));

    if (t19 != 246393) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x1285 = 1287LLU;
	int8_t x1286 = 1;
	int32_t x1287 = INT32_MIN;
	int8_t x1288 = -1;

    t20 = (x1285<<(x1286<<(x1287<=x1288)));

    if (t20 != 5148LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1289 = 1505494278U;
	int8_t x1291 = INT8_MIN;
	static uint64_t x1292 = 800612LLU;

    t21 = (x1289<<(x1290<<(x1291<=x1292)));

    if (t21 != 1505494278U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x1398 = 0U;
	static volatile int16_t x1399 = INT16_MAX;
	uint32_t x1400 = UINT32_MAX;

    t22 = (x1397<<(x1398<<(x1399<=x1400)));

    if (t22 != 175697333726092998LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x1445 = 12798462U;
	int32_t x1447 = INT32_MIN;
	int64_t x1448 = 45626605263LL;
	uint32_t t23 = 63294925U;

    t23 = (x1445<<(x1446<<(x1447<=x1448)));

    if (t23 != 12798462U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x1702 = 1U;
	volatile uint64_t t24 = 9503062LLU;

    t24 = (x1701<<(x1702<<(x1703<=x1704)));

    if (t24 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1762 = 1;
	volatile uint8_t x1763 = 5U;
	int8_t x1764 = INT8_MIN;
	int32_t t25 = -106684311;

    t25 = (x1761<<(x1762<<(x1763<=x1764)));

    if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x1765 = 6U;
	uint8_t x1766 = 8U;
	int32_t x1767 = 411923801;
	volatile int32_t t26 = 10237;

    t26 = (x1765<<(x1766<<(x1767<=x1768)));

    if (t26 != 393216) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1789 = INT8_MAX;
	uint8_t x1790 = 16U;
	int8_t x1791 = INT8_MIN;
	volatile int32_t t27 = -7168925;

    t27 = (x1789<<(x1790<<(x1791<=x1792)));

    if (t27 != 8323072) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1809 = 11;
	int64_t x1810 = 1LL;
	static volatile int32_t t28 = 583;

    t28 = (x1809<<(x1810<<(x1811<=x1812)));

    if (t28 != 44) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1838 = 0LL;
	int16_t x1839 = INT16_MAX;
	static int32_t x1840 = INT32_MIN;
	uint64_t t29 = 56784411238445LLU;

    t29 = (x1837<<(x1838<<(x1839<=x1840)));

    if (t29 != 3560LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x1870 = 3U;
	uint64_t x1871 = 795620359342817033LLU;
	int32_t x1872 = -1;
	volatile int32_t t30 = 50852650;

    t30 = (x1869<<(x1870<<(x1871<=x1872)));

    if (t30 != 16320) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x2021 = 2729946;
	int32_t x2022 = 1;
	static uint16_t x2023 = 14U;
	static volatile int8_t x2024 = INT8_MIN;
	volatile int32_t t31 = -76852975;

    t31 = (x2021<<(x2022<<(x2023<=x2024)));

    if (t31 != 5459892) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x2061 = 2991U;
	int8_t x2062 = 13;
	int64_t x2063 = INT64_MAX;
	static int32_t t32 = 1012;

    t32 = (x2061<<(x2062<<(x2063<=x2064)));

    if (t32 != 24502272) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x2110 = 0U;
	static uint8_t x2111 = 2U;
	static uint8_t x2112 = 11U;

    t33 = (x2109<<(x2110<<(x2111<=x2112)));

    if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x2245 = 1;
	int16_t x2246 = 1;
	static int64_t x2248 = -33398156423735LL;
	static volatile int32_t t34 = 110;

    t34 = (x2245<<(x2246<<(x2247<=x2248)));

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x2305 = UINT8_MAX;
	uint32_t x2306 = 0U;
	int64_t x2307 = -1LL;
	int32_t x2308 = -65280;
	volatile int32_t t35 = -27072;

    t35 = (x2305<<(x2306<<(x2307<=x2308)));

    if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x2341 = INT16_MAX;
	uint8_t x2342 = 5U;
	static uint32_t x2343 = UINT32_MAX;

    t36 = (x2341<<(x2342<<(x2343<=x2344)));

    if (t36 != 33553408) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x2345 = 3U;
	uint8_t x2346 = 4U;
	static int16_t x2348 = INT16_MIN;
	volatile uint32_t t37 = 1036379U;

    t37 = (x2345<<(x2346<<(x2347<=x2348)));

    if (t37 != 48U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x2389 = 767348771LLU;
	static int8_t x2390 = 0;
	int16_t x2392 = -1;
	static volatile uint64_t t38 = 8771432153579LLU;

    t38 = (x2389<<(x2390<<(x2391<=x2392)));

    if (t38 != 767348771LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x2457 = 0LL;
	uint16_t x2458 = 1U;
	static volatile int64_t x2459 = 1720LL;
	uint8_t x2460 = UINT8_MAX;
	int64_t t39 = 1335706461118539LL;

    t39 = (x2457<<(x2458<<(x2459<=x2460)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x2557 = UINT64_MAX;
	int8_t x2558 = 0;
	int32_t x2559 = INT32_MIN;
	volatile uint64_t t40 = UINT64_MAX;

    t40 = (x2557<<(x2558<<(x2559<=x2560)));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x2653 = INT16_MAX;
	volatile uint8_t x2654 = 7U;
	static uint64_t x2655 = UINT64_MAX;
	uint64_t x2656 = UINT64_MAX;
	static int32_t t41 = 29334;

    t41 = (x2653<<(x2654<<(x2655<=x2656)));

    if (t41 != 536854528) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x2673 = UINT16_MAX;
	volatile int8_t x2674 = 5;
	static int8_t x2675 = INT8_MIN;
	volatile int32_t t42 = 99;

    t42 = (x2673<<(x2674<<(x2675<=x2676)));

    if (t42 != 67107840) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x2773 = 435794929842207LLU;
	uint8_t x2774 = 1U;
	int32_t x2776 = -1;

    t43 = (x2773<<(x2774<<(x2775<=x2776)));

    if (t43 != 1743179719368828LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x2853 = 7683U;
	int8_t x2854 = 1;
	static int64_t x2856 = 3479542770471284663LL;
	uint32_t t44 = 170565U;

    t44 = (x2853<<(x2854<<(x2855<=x2856)));

    if (t44 != 30732U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x2957 = UINT32_MAX;
	static volatile int8_t x2959 = INT8_MIN;
	volatile uint32_t t45 = 6660184U;

    t45 = (x2957<<(x2958<<(x2959<=x2960)));

    if (t45 != 4294967292U) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x3121 = UINT64_MAX;
	uint8_t x3122 = 21U;
	uint8_t x3123 = UINT8_MAX;
	uint32_t x3124 = 9947U;
	uint64_t t46 = 14868242730341102LLU;

    t46 = (x3121<<(x3122<<(x3123<=x3124)));

    if (t46 != 18446739675663040512LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x3189 = INT8_MAX;
	uint16_t x3190 = 6U;
	int32_t x3192 = -4119431;

    t47 = (x3189<<(x3190<<(x3191<=x3192)));

    if (t47 != 8128) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x3245 = 1U;
	uint16_t x3246 = 11U;
	volatile uint32_t x3247 = 1082U;
	int64_t x3248 = 43104052901338LL;
	int32_t t48 = 5;

    t48 = (x3245<<(x3246<<(x3247<=x3248)));

    if (t48 != 4194304) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x3310 = 3U;
	int8_t x3311 = -1;
	volatile int8_t x3312 = INT8_MIN;

    t49 = (x3309<<(x3310<<(x3311<=x3312)));

    if (t49 != 3939976U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x3505 = 1030731440900219753LLU;
	uint32_t x3507 = 1822314U;
	int16_t x3508 = -1;
	static uint64_t t50 = 3482113651LLU;

    t50 = (x3505<<(x3506<<(x3507<=x3508)));

    if (t50 != 10626579996485409344LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x3517 = 3;
	int16_t x3518 = 0;
	int64_t x3519 = -11570LL;
	volatile int32_t x3520 = INT32_MIN;
	volatile int32_t t51 = -2081179;

    t51 = (x3517<<(x3518<<(x3519<=x3520)));

    if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x3561 = UINT64_MAX;
	int16_t x3562 = 0;
	static int8_t x3563 = -1;
	uint16_t x3564 = 2283U;
	static uint64_t t52 = UINT64_MAX;

    t52 = (x3561<<(x3562<<(x3563<=x3564)));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x3565 = UINT16_MAX;
	int16_t x3566 = 1;
	int8_t x3567 = INT8_MIN;
	uint64_t x3568 = UINT64_MAX;
	static int32_t t53 = 54;

    t53 = (x3565<<(x3566<<(x3567<=x3568)));

    if (t53 != 262140) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x3621 = 560927170972261406LL;
	uint8_t x3622 = 0U;
	uint32_t x3623 = 165818U;
	static int64_t x3624 = INT64_MIN;
	int64_t t54 = 1207567516742579LL;

    t54 = (x3621<<(x3622<<(x3623<=x3624)));

    if (t54 != 560927170972261406LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x3625 = 48411795698196081LLU;
	static uint8_t x3626 = 1U;
	int64_t x3628 = INT64_MAX;

    t55 = (x3625<<(x3626<<(x3627<=x3628)));

    if (t55 != 193647182792784324LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x3669 = 5U;
	volatile uint8_t x3670 = 2U;
	int16_t x3672 = INT16_MIN;
	int32_t t56 = -218492161;

    t56 = (x3669<<(x3670<<(x3671<=x3672)));

    if (t56 != 20) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x3753 = 137;
	uint8_t x3754 = 5U;
	int32_t x3756 = INT32_MIN;

    t57 = (x3753<<(x3754<<(x3755<=x3756)));

    if (t57 != 4384) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x3773 = 2289323625778317475LLU;
	volatile int32_t x3774 = 28;
	uint8_t x3775 = 13U;
	uint64_t x3776 = UINT64_MAX;
	uint64_t t58 = 1387722LLU;

    t58 = (x3773<<(x3774<<(x3775<=x3776)));

    if (t58 != 11745387828182253568LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x3801 = 639364014712LLU;
	uint8_t x3802 = 17U;
	uint16_t x3803 = UINT16_MAX;
	int32_t x3804 = 15933;
	static volatile uint64_t t59 = 0LLU;

    t59 = (x3801<<(x3802<<(x3803<=x3804)));

    if (t59 != 83802720136331264LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x4021 = 51722062199LLU;
	uint8_t x4022 = 53U;
	int8_t x4023 = INT8_MIN;
	static int64_t x4024 = INT64_MIN;
	uint64_t t60 = 147979LLU;

    t60 = (x4021<<(x4022<<(x4023<=x4024)));

    if (t60 != 3377699720527872000LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x4165 = 553;
	uint16_t x4166 = 1U;
	volatile int32_t t61 = 681456054;

    t61 = (x4165<<(x4166<<(x4167<=x4168)));

    if (t61 != 1106) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x4206 = 0;
	uint64_t x4207 = 164069867LLU;

    t62 = (x4205<<(x4206<<(x4207<=x4208)));

    if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x4229 = UINT8_MAX;
	int32_t x4230 = 15;
	int16_t x4231 = INT16_MAX;
	int32_t x4232 = INT32_MIN;
	int32_t t63 = -3350;

    t63 = (x4229<<(x4230<<(x4231<=x4232)));

    if (t63 != 8355840) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x4241 = INT16_MAX;
	uint8_t x4242 = 0U;
	static volatile int64_t x4244 = INT64_MIN;
	int32_t t64 = 71414327;

    t64 = (x4241<<(x4242<<(x4243<=x4244)));

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x4318 = 1U;
	int16_t x4319 = -2;
	uint32_t x4320 = UINT32_MAX;
	volatile int32_t t65 = -53480;

    t65 = (x4317<<(x4318<<(x4319<=x4320)));

    if (t65 != 262140) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x4354 = 1LLU;
	int64_t x4355 = 656058502LL;
	int64_t x4356 = -1LL;
	int32_t t66 = 59;

    t66 = (x4353<<(x4354<<(x4355<=x4356)));

    if (t66 != 120) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x4402 = 6U;
	uint16_t x4403 = 758U;
	static uint16_t x4404 = UINT16_MAX;
	uint32_t t67 = 13247U;

    t67 = (x4401<<(x4402<<(x4403<=x4404)));

    if (t67 != 4294963200U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x4506 = 1;
	int8_t x4507 = -1;
	static volatile int32_t t68 = 110425095;

    t68 = (x4505<<(x4506<<(x4507<=x4508)));

    if (t68 != 28) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x4529 = 3950158783995LLU;
	uint8_t x4530 = 1U;
	volatile int8_t x4531 = INT8_MIN;
	uint64_t x4532 = 4013LLU;
	volatile uint64_t t69 = 11LLU;

    t69 = (x4529<<(x4530<<(x4531<=x4532)));

    if (t69 != 7900317567990LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x4617 = UINT16_MAX;
	volatile int8_t x4618 = 1;
	static uint8_t x4620 = UINT8_MAX;
	volatile int32_t t70 = 22;

    t70 = (x4617<<(x4618<<(x4619<=x4620)));

    if (t70 != 131070) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x4641 = UINT64_MAX;
	uint16_t x4642 = 1U;
	uint8_t x4643 = 4U;
	uint32_t x4644 = UINT32_MAX;
	uint64_t t71 = 637972LLU;

    t71 = (x4641<<(x4642<<(x4643<=x4644)));

    if (t71 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x4709 = 1989745U;
	uint16_t x4710 = 11U;
	static int32_t x4711 = 16504479;
	volatile uint32_t t72 = 230504U;

    t72 = (x4709<<(x4710<<(x4711<=x4712)));

    if (t72 != 4074997760U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x4741 = UINT8_MAX;
	static volatile int8_t x4743 = 5;
	static int16_t x4744 = -918;

    t73 = (x4741<<(x4742<<(x4743<=x4744)));

    if (t73 != 32640) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x4809 = 4U;
	static uint8_t x4810 = 1U;
	int16_t x4811 = 0;
	int32_t t74 = -19;

    t74 = (x4809<<(x4810<<(x4811<=x4812)));

    if (t74 != 16) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x4841 = 9558872U;
	uint8_t x4842 = 1U;
	int64_t x4843 = -1LL;
	volatile uint32_t t75 = 723114U;

    t75 = (x4841<<(x4842<<(x4843<=x4844)));

    if (t75 != 38235488U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x4861 = UINT8_MAX;
	uint16_t x4862 = 0U;
	uint32_t x4863 = UINT32_MAX;
	uint32_t x4864 = 11367U;
	int32_t t76 = 7446247;

    t76 = (x4861<<(x4862<<(x4863<=x4864)));

    if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x4866 = 4;
	int32_t x4867 = INT32_MIN;
	static uint8_t x4868 = 3U;
	volatile int32_t t77 = -1992;

    t77 = (x4865<<(x4866<<(x4867<=x4868)));

    if (t77 != 512) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x4897 = UINT8_MAX;
	int8_t x4898 = 0;
	uint32_t x4899 = 0U;
	int32_t t78 = -108;

    t78 = (x4897<<(x4898<<(x4899<=x4900)));

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x5037 = 4835LLU;
	uint16_t x5038 = 0U;
	int64_t x5040 = -7576420LL;

    t79 = (x5037<<(x5038<<(x5039<=x5040)));

    if (t79 != 4835LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x5133 = UINT64_MAX;
	uint8_t x5134 = 10U;
	int8_t x5135 = 1;
	int16_t x5136 = -1;
	volatile uint64_t t80 = 122250630131LLU;

    t80 = (x5133<<(x5134<<(x5135<=x5136)));

    if (t80 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x5165 = 22118U;
	uint64_t x5166 = 2LLU;
	uint64_t x5167 = UINT64_MAX;
	volatile uint64_t x5168 = UINT64_MAX;
	int32_t t81 = -160053627;

    t81 = (x5165<<(x5166<<(x5167<=x5168)));

    if (t81 != 353888) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x5213 = 10U;
	int8_t x5215 = -10;
	int32_t x5216 = 61411493;
	volatile uint32_t t82 = 11U;

    t82 = (x5213<<(x5214<<(x5215<=x5216)));

    if (t82 != 2560U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x5318 = 1;
	volatile uint64_t x5319 = 4803LLU;
	volatile int32_t t83 = -1059229;

    t83 = (x5317<<(x5318<<(x5319<=x5320)));

    if (t83 != 1020) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x5374 = 0LL;
	uint32_t x5375 = 468U;
	static uint32_t x5376 = UINT32_MAX;

    t84 = (x5373<<(x5374<<(x5375<=x5376)));

    if (t84 != 53993U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x5397 = 0U;
	uint16_t x5398 = 1U;
	uint16_t x5399 = 763U;
	volatile int32_t x5400 = INT32_MIN;
	int32_t t85 = 620;

    t85 = (x5397<<(x5398<<(x5399<=x5400)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x5569 = 3096731U;
	static volatile uint16_t x5570 = 7U;
	int8_t x5571 = INT8_MIN;
	volatile int16_t x5572 = -1;
	volatile uint32_t t86 = 63745U;

    t86 = (x5569<<(x5570<<(x5571<=x5572)));

    if (t86 != 3492200448U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x5649 = 6830418200278LLU;
	uint64_t x5651 = 293788969902958995LLU;

    t87 = (x5649<<(x5650<<(x5651<=x5652)));

    if (t87 != 109286691204448LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x5713 = 3U;
	static volatile int32_t x5714 = 0;
	volatile uint16_t x5715 = UINT16_MAX;
	volatile int16_t x5716 = 61;
	static volatile uint32_t t88 = 10U;

    t88 = (x5713<<(x5714<<(x5715<=x5716)));

    if (t88 != 3U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x5798 = 22U;
	static int16_t x5799 = -1;
	volatile int16_t x5800 = -42;
	volatile uint32_t t89 = 408057U;

    t89 = (x5797<<(x5798<<(x5799<=x5800)));

    if (t89 != 4290772992U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x5829 = UINT32_MAX;
	uint8_t x5830 = 1U;
	int32_t x5831 = INT32_MIN;
	volatile uint32_t t90 = 342564700U;

    t90 = (x5829<<(x5830<<(x5831<=x5832)));

    if (t90 != 4294967292U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x5838 = 0;
	volatile uint8_t x5839 = 3U;
	int32_t x5840 = -1;
	uint64_t t91 = UINT64_MAX;

    t91 = (x5837<<(x5838<<(x5839<=x5840)));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x5950 = 7U;
	volatile int8_t x5951 = INT8_MIN;
	static volatile int32_t x5952 = -1;

    t92 = (x5949<<(x5950<<(x5951<=x5952)));

    if (t92 != 180224) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x6025 = 27;
	int8_t x6026 = 2;
	int32_t x6027 = 373;
	volatile int32_t t93 = -3956;

    t93 = (x6025<<(x6026<<(x6027<=x6028)));

    if (t93 != 432) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x6041 = UINT32_MAX;
	int8_t x6042 = 0;
	int32_t x6043 = INT32_MAX;
	uint64_t x6044 = 37794856053206169LLU;
	volatile uint32_t t94 = UINT32_MAX;

    t94 = (x6041<<(x6042<<(x6043<=x6044)));

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x6085 = 9LL;
	uint16_t x6086 = 0U;
	volatile int64_t t95 = 2154488153LL;

    t95 = (x6085<<(x6086<<(x6087<=x6088)));

    if (t95 != 9LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x6165 = UINT8_MAX;
	int8_t x6166 = 1;
	volatile int8_t x6167 = -5;
	static volatile int32_t t96 = 180227;

    t96 = (x6165<<(x6166<<(x6167<=x6168)));

    if (t96 != 510) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x6198 = 0;
	int16_t x6200 = -353;
	volatile uint32_t t97 = UINT32_MAX;

    t97 = (x6197<<(x6198<<(x6199<=x6200)));

    if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x6269 = 2;
	int8_t x6270 = 28;
	uint64_t x6271 = 106346369724LLU;
	static int8_t x6272 = INT8_MAX;
	volatile int32_t t98 = 14;

    t98 = (x6269<<(x6270<<(x6271<=x6272)));

    if (t98 != 536870912) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x6389 = 136;
	int8_t x6390 = 7;
	static int16_t x6391 = INT16_MIN;
	int32_t t99 = -567581460;

    t99 = (x6389<<(x6390<<(x6391<=x6392)));

    if (t99 != 2228224) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x6473 = 3U;
	int16_t x6474 = 0;
	int64_t x6475 = -1440267373130969LL;
	static int32_t x6476 = INT32_MIN;
	volatile int32_t t100 = 2556;

    t100 = (x6473<<(x6474<<(x6475<=x6476)));

    if (t100 != 3) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x6477 = 283873084150500172LLU;
	int8_t x6478 = 39;
	uint8_t x6479 = 3U;
	uint64_t t101 = 753980792LLU;

    t101 = (x6477<<(x6478<<(x6479<=x6480)));

    if (t101 != 785216228976230400LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x6514 = 1;
	uint64_t x6515 = 101718005565LLU;

    t102 = (x6513<<(x6514<<(x6515<=x6516)));

    if (t102 != 52) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x6745 = 2U;
	uint8_t x6746 = 0U;
	int64_t x6747 = INT64_MAX;
	int32_t t103 = 185096;

    t103 = (x6745<<(x6746<<(x6747<=x6748)));

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x6793 = 505U;
	volatile uint8_t x6794 = 0U;
	int8_t x6795 = -1;
	uint16_t x6796 = 220U;
	int32_t t104 = -60;

    t104 = (x6793<<(x6794<<(x6795<=x6796)));

    if (t104 != 505) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x6810 = 0;
	uint16_t x6811 = 53U;
	int8_t x6812 = INT8_MIN;
	volatile int64_t t105 = 916286905570LL;

    t105 = (x6809<<(x6810<<(x6811<=x6812)));

    if (t105 != 17641619995663854LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x6842 = 5U;
	int16_t x6843 = INT16_MAX;
	int64_t x6844 = INT64_MIN;
	volatile int32_t t106 = -79;

    t106 = (x6841<<(x6842<<(x6843<=x6844)));

    if (t106 != 131264) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x6897 = 193U;
	uint16_t x6898 = 0U;
	static volatile int16_t x6899 = 7;

    t107 = (x6897<<(x6898<<(x6899<=x6900)));

    if (t107 != 193) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x6949 = 34268043U;
	int16_t x6951 = -1;
	static int32_t x6952 = INT32_MAX;

    t108 = (x6949<<(x6950<<(x6951<=x6952)));

    if (t108 != 182684416U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x6965 = 747517727674LLU;
	volatile uint8_t x6966 = 44U;
	uint16_t x6967 = 0U;
	volatile int32_t x6968 = INT32_MIN;
	static uint64_t t109 = 1257082603650LLU;

    t109 = (x6965<<(x6966<<(x6967<=x6968)));

    if (t109 != 8447521447923941376LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x7009 = INT32_MAX;
	int8_t x7010 = 0;
	static int8_t x7011 = 7;

    t110 = (x7009<<(x7010<<(x7011<=x7012)));

    if (t110 != INT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x7149 = 0U;
	volatile uint32_t x7150 = 7U;
	int64_t x7151 = -60300038LL;
	uint16_t x7152 = 0U;
	int32_t t111 = -873220;

    t111 = (x7149<<(x7150<<(x7151<=x7152)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x7341 = INT8_MAX;
	volatile uint8_t x7342 = 2U;
	uint32_t x7343 = UINT32_MAX;
	int8_t x7344 = -1;

    t112 = (x7341<<(x7342<<(x7343<=x7344)));

    if (t112 != 2032) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x7357 = UINT16_MAX;
	uint8_t x7358 = 2U;
	volatile int16_t x7359 = -6451;
	volatile int32_t x7360 = INT32_MIN;
	int32_t t113 = 0;

    t113 = (x7357<<(x7358<<(x7359<=x7360)));

    if (t113 != 262140) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint8_t x7457 = UINT8_MAX;
	volatile int8_t x7458 = 4;
	int32_t t114 = 41678966;

    t114 = (x7457<<(x7458<<(x7459<=x7460)));

    if (t114 != 4080) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x7469 = UINT16_MAX;
	volatile uint32_t x7470 = 7U;
	static volatile int32_t x7472 = INT32_MIN;
	volatile int32_t t115 = 480341;

    t115 = (x7469<<(x7470<<(x7471<=x7472)));

    if (t115 != 8388480) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x7505 = 182659651730858LLU;
	int8_t x7507 = -5;
	int16_t x7508 = INT16_MIN;
	uint64_t t116 = 53686663LLU;

    t116 = (x7505<<(x7506<<(x7507<=x7508)));

    if (t116 != 182659651730858LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x7509 = INT16_MAX;
	static uint16_t x7510 = 3U;
	int16_t x7511 = INT16_MIN;
	int32_t x7512 = -1;
	volatile int32_t t117 = 1694;

    t117 = (x7509<<(x7510<<(x7511<=x7512)));

    if (t117 != 2097088) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x7577 = 4U;
	volatile int16_t x7578 = 0;
	uint64_t x7579 = UINT64_MAX;
	int8_t x7580 = INT8_MIN;
	int32_t t118 = 839736325;

    t118 = (x7577<<(x7578<<(x7579<=x7580)));

    if (t118 != 4) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x7613 = 9804U;
	static volatile uint16_t x7614 = 4U;
	static volatile int16_t x7615 = INT16_MIN;
	int64_t x7616 = INT64_MAX;
	int32_t t119 = -343972102;

    t119 = (x7613<<(x7614<<(x7615<=x7616)));

    if (t119 != 2509824) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x7633 = 2016122207320571LLU;
	volatile int8_t x7635 = INT8_MIN;
	static int16_t x7636 = 827;

    t120 = (x7633<<(x7634<<(x7635<=x7636)));

    if (t120 != 7620652894525587456LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x7641 = 147273103U;
	int16_t x7642 = 0;
	int16_t x7643 = INT16_MIN;

    t121 = (x7641<<(x7642<<(x7643<=x7644)));

    if (t121 != 147273103U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x7713 = 3407LLU;
	int8_t x7714 = 14;
	uint8_t x7715 = 13U;
	int32_t x7716 = INT32_MIN;
	volatile uint64_t t122 = 711675009245116198LLU;

    t122 = (x7713<<(x7714<<(x7715<=x7716)));

    if (t122 != 55820288LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x7777 = UINT16_MAX;
	uint8_t x7778 = 1U;
	uint16_t x7779 = 1U;
	volatile int32_t x7780 = INT32_MAX;

    t123 = (x7777<<(x7778<<(x7779<=x7780)));

    if (t123 != 262140) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x7901 = UINT16_MAX;
	uint8_t x7902 = 1U;
	uint8_t x7903 = 1U;
	uint32_t x7904 = UINT32_MAX;
	volatile int32_t t124 = -8683;

    t124 = (x7901<<(x7902<<(x7903<=x7904)));

    if (t124 != 262140) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x7917 = 3U;
	static int8_t x7918 = 1;
	int32_t x7919 = -1;
	static volatile int32_t t125 = -560;

    t125 = (x7917<<(x7918<<(x7919<=x7920)));

    if (t125 != 6) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x7921 = UINT32_MAX;
	static volatile int8_t x7922 = 1;

    t126 = (x7921<<(x7922<<(x7923<=x7924)));

    if (t126 != 4294967294U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x7981 = 7U;
	static volatile uint32_t x7982 = 12U;
	int16_t x7983 = INT16_MAX;
	static volatile int32_t t127 = 61558;

    t127 = (x7981<<(x7982<<(x7983<=x7984)));

    if (t127 != 28672) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x8110 = 13;
	int32_t x8112 = -7088861;
	static int32_t t128 = 6146;

    t128 = (x8109<<(x8110<<(x8111<=x8112)));

    if (t128 != 1040384) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t t129 = UINT64_MAX;

    t129 = (x8129<<(x8130<<(x8131<=x8132)));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x8449 = 3;
	volatile uint8_t x8450 = 0U;
	int16_t x8451 = INT16_MIN;
	volatile int16_t x8452 = 5;
	int32_t t130 = 68532;

    t130 = (x8449<<(x8450<<(x8451<=x8452)));

    if (t130 != 3) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x8489 = UINT32_MAX;
	uint16_t x8490 = 5U;
	uint32_t t131 = 307U;

    t131 = (x8489<<(x8490<<(x8491<=x8492)));

    if (t131 != 4294966272U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x8565 = 88286;
	uint32_t x8566 = 2U;
	int32_t x8567 = 67;
	uint16_t x8568 = UINT16_MAX;
	volatile int32_t t132 = 61019230;

    t132 = (x8565<<(x8566<<(x8567<=x8568)));

    if (t132 != 1412576) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x8569 = 451LL;
	int8_t x8570 = 13;
	static int64_t x8571 = INT64_MIN;
	int8_t x8572 = -1;
	volatile int64_t t133 = -54LL;

    t133 = (x8569<<(x8570<<(x8571<=x8572)));

    if (t133 != 30266097664LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x8578 = 0U;
	uint16_t x8579 = 709U;
	volatile uint16_t x8580 = 662U;
	volatile int32_t t134 = -13319885;

    t134 = (x8577<<(x8578<<(x8579<=x8580)));

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x8589 = 1031681338U;
	int16_t x8590 = 0;
	int32_t x8591 = INT32_MIN;
	volatile int64_t x8592 = -57488848535550LL;
	volatile uint32_t t135 = 7024U;

    t135 = (x8589<<(x8590<<(x8591<=x8592)));

    if (t135 != 1031681338U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x8737 = 81;
	int8_t x8738 = 3;
	static int8_t x8739 = INT8_MIN;
	static int8_t x8740 = 6;
	volatile int32_t t136 = -109;

    t136 = (x8737<<(x8738<<(x8739<=x8740)));

    if (t136 != 5184) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x8777 = 1076921LL;
	uint8_t x8778 = 0U;
	uint64_t x8779 = 52LLU;
	int64_t x8780 = -1LL;

    t137 = (x8777<<(x8778<<(x8779<=x8780)));

    if (t137 != 1076921LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x8793 = 3;
	int64_t x8794 = 0LL;
	uint64_t x8795 = 68218548411LLU;
	uint8_t x8796 = UINT8_MAX;
	int32_t t138 = -4566;

    t138 = (x8793<<(x8794<<(x8795<=x8796)));

    if (t138 != 3) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x8806 = 0U;
	volatile int64_t x8807 = -13LL;
	static volatile uint32_t x8808 = 2416U;
	static volatile int32_t t139 = -15703;

    t139 = (x8805<<(x8806<<(x8807<=x8808)));

    if (t139 != 95256752) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x8941 = UINT64_MAX;
	static int16_t x8942 = 3;
	uint16_t x8943 = 33U;
	uint8_t x8944 = 24U;

    t140 = (x8941<<(x8942<<(x8943<=x8944)));

    if (t140 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x9038 = 0U;
	static int32_t x9039 = INT32_MIN;
	int32_t t141 = 3552561;

    t141 = (x9037<<(x9038<<(x9039<=x9040)));

    if (t141 != 127) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x9045 = UINT16_MAX;
	uint8_t x9046 = 2U;
	int64_t x9047 = INT64_MAX;
	int8_t x9048 = -13;
	int32_t t142 = 1;

    t142 = (x9045<<(x9046<<(x9047<=x9048)));

    if (t142 != 262140) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x9061 = UINT8_MAX;
	uint8_t x9062 = 1U;
	static int32_t x9063 = 428;
	volatile uint64_t x9064 = 3535654810LLU;
	int32_t t143 = 27846063;

    t143 = (x9061<<(x9062<<(x9063<=x9064)));

    if (t143 != 1020) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x9125 = 0;
	uint16_t x9126 = 1U;
	uint32_t x9127 = 885013U;
	int64_t x9128 = INT64_MIN;
	static volatile int32_t t144 = 37;

    t144 = (x9125<<(x9126<<(x9127<=x9128)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x9201 = 19U;
	uint8_t x9202 = 0U;
	uint32_t x9203 = 72U;
	volatile uint8_t x9204 = 8U;
	int32_t t145 = 42126;

    t145 = (x9201<<(x9202<<(x9203<=x9204)));

    if (t145 != 19) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x9265 = 123254LLU;
	static uint8_t x9266 = 15U;
	int16_t x9268 = 0;

    t146 = (x9265<<(x9266<<(x9267<=x9268)));

    if (t146 != 132342974775296LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x9341 = 2243LL;
	static int16_t x9342 = 17;
	uint64_t x9344 = UINT64_MAX;

    t147 = (x9341<<(x9342<<(x9343<=x9344)));

    if (t147 != 38534446579712LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x9357 = 1U;
	static int8_t x9358 = 0;
	static uint16_t x9360 = 0U;

    t148 = (x9357<<(x9358<<(x9359<=x9360)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x9417 = 6;
	int8_t x9418 = 1;
	int32_t t149 = 68096;

    t149 = (x9417<<(x9418<<(x9419<=x9420)));

    if (t149 != 12) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x9493 = 160156U;
	static volatile uint32_t x9494 = 1U;
	static int16_t x9495 = -1;
	int64_t x9496 = INT64_MIN;
	uint32_t t150 = 963143495U;

    t150 = (x9493<<(x9494<<(x9495<=x9496)));

    if (t150 != 320312U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x9586 = 2;
	uint16_t x9587 = 4U;
	static uint8_t x9588 = 117U;
	volatile uint64_t t151 = 7LLU;

    t151 = (x9585<<(x9586<<(x9587<=x9588)));

    if (t151 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x9837 = 979LL;
	uint8_t x9838 = 6U;
	int8_t x9839 = -1;
	int16_t x9840 = 407;
	int64_t t152 = 65236012258LL;

    t152 = (x9837<<(x9838<<(x9839<=x9840)));

    if (t152 != 4009984LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x9859 = 0;
	int32_t x9860 = INT32_MIN;
	volatile int32_t t153 = -90688388;

    t153 = (x9857<<(x9858<<(x9859<=x9860)));

    if (t153 != 26) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x9977 = 202U;
	int32_t x9979 = INT32_MIN;
	int16_t x9980 = INT16_MIN;
	int32_t t154 = 6991;

    t154 = (x9977<<(x9978<<(x9979<=x9980)));

    if (t154 != 51712) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x10085 = 1;
	static int16_t x10087 = INT16_MAX;
	int16_t x10088 = INT16_MIN;
	volatile int32_t t155 = 3;

    t155 = (x10085<<(x10086<<(x10087<=x10088)));

    if (t155 != 1048576) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x10117 = 1;
	int32_t x10118 = 11;
	volatile int32_t x10119 = INT32_MIN;

    t156 = (x10117<<(x10118<<(x10119<=x10120)));

    if (t156 != 4194304) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint32_t x10193 = UINT32_MAX;
	uint16_t x10194 = 7U;
	int16_t x10195 = -26;
	uint16_t x10196 = 0U;

    t157 = (x10193<<(x10194<<(x10195<=x10196)));

    if (t157 != 4294950912U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x10309 = 6U;
	int64_t x10310 = 7LL;
	volatile uint8_t x10311 = 3U;
	uint8_t x10312 = 2U;
	static volatile int32_t t158 = -889;

    t158 = (x10309<<(x10310<<(x10311<=x10312)));

    if (t158 != 768) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x10337 = 405U;
	int8_t x10338 = 2;
	uint32_t x10339 = 19U;
	volatile int32_t t159 = 6386;

    t159 = (x10337<<(x10338<<(x10339<=x10340)));

    if (t159 != 6480) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x10409 = UINT16_MAX;
	int8_t x10410 = 1;
	uint8_t x10411 = 2U;
	uint32_t x10412 = 1257168031U;
	volatile int32_t t160 = 94436;

    t160 = (x10409<<(x10410<<(x10411<=x10412)));

    if (t160 != 262140) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x10413 = 4624U;
	int8_t x10414 = 0;
	volatile uint32_t x10415 = UINT32_MAX;
	int16_t x10416 = 69;
	volatile uint32_t t161 = 27575539U;

    t161 = (x10413<<(x10414<<(x10415<=x10416)));

    if (t161 != 4624U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x10465 = UINT8_MAX;
	int64_t x10466 = 0LL;
	volatile int32_t x10468 = INT32_MAX;

    t162 = (x10465<<(x10466<<(x10467<=x10468)));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x10521 = 1;
	uint8_t x10522 = 7U;
	static int32_t x10523 = -19809611;
	static uint16_t x10524 = 5267U;
	int32_t t163 = 1;

    t163 = (x10521<<(x10522<<(x10523<=x10524)));

    if (t163 != 16384) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x10674 = 1;
	static uint32_t x10676 = 3670U;
	volatile int32_t t164 = -349;

    t164 = (x10673<<(x10674<<(x10675<=x10676)));

    if (t164 != 90) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x10746 = 3;
	int8_t x10747 = INT8_MIN;
	int16_t x10748 = INT16_MAX;

    t165 = (x10745<<(x10746<<(x10747<=x10748)));

    if (t165 != 8128) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x10782 = 7U;
	uint8_t x10783 = UINT8_MAX;
	int64_t x10784 = 1790388LL;
	int32_t t166 = -3665;

    t166 = (x10781<<(x10782<<(x10783<=x10784)));

    if (t166 != 98304) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x10797 = 7100;
	int64_t x10799 = -1LL;
	static int64_t x10800 = INT64_MIN;

    t167 = (x10797<<(x10798<<(x10799<=x10800)));

    if (t167 != 454400) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x10965 = INT16_MAX;
	int8_t x10966 = 1;
	volatile int64_t x10967 = -1LL;
	volatile int64_t x10968 = -16424601081LL;
	int32_t t168 = 60;

    t168 = (x10965<<(x10966<<(x10967<=x10968)));

    if (t168 != 65534) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x11073 = 301403LLU;
	uint8_t x11074 = 1U;
	int64_t x11075 = INT64_MIN;
	int32_t x11076 = INT32_MIN;

    t169 = (x11073<<(x11074<<(x11075<=x11076)));

    if (t169 != 1205612LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x11309 = INT32_MAX;
	int64_t x11310 = 0LL;
	volatile uint16_t x11311 = UINT16_MAX;
	static int16_t x11312 = INT16_MIN;
	int32_t t170 = INT32_MAX;

    t170 = (x11309<<(x11310<<(x11311<=x11312)));

    if (t170 != INT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x11366 = 0U;
	int64_t x11367 = INT64_MIN;
	int64_t x11368 = 59637068224LL;

    t171 = (x11365<<(x11366<<(x11367<=x11368)));

    if (t171 != 1057021504935856731LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x11377 = 0;
	int8_t x11378 = 4;
	int16_t x11379 = INT16_MIN;
	int64_t x11380 = INT64_MIN;

    t172 = (x11377<<(x11378<<(x11379<=x11380)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x11397 = 0U;
	int8_t x11398 = 13;
	int8_t x11399 = INT8_MAX;
	static int16_t x11400 = -1;
	uint32_t t173 = 30U;

    t173 = (x11397<<(x11398<<(x11399<=x11400)));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x11477 = 2U;
	static uint16_t x11478 = 14U;
	int16_t x11480 = INT16_MIN;

    t174 = (x11477<<(x11478<<(x11479<=x11480)));

    if (t174 != 32768) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x11509 = 2062505U;
	static uint8_t x11510 = 4U;
	int32_t x11511 = -7994823;
	int8_t x11512 = INT8_MIN;
	volatile uint32_t t175 = 1508U;

    t175 = (x11509<<(x11510<<(x11511<=x11512)));

    if (t175 != 528001280U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x11617 = 4486U;
	static int16_t x11618 = 11;
	int16_t x11619 = -1;

    t176 = (x11617<<(x11618<<(x11619<=x11620)));

    if (t176 != 9187328) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x11709 = 880243071220209LLU;
	int8_t x11710 = 0;
	int16_t x11711 = 1203;
	uint8_t x11712 = 15U;
	uint64_t t177 = 11418LLU;

    t177 = (x11709<<(x11710<<(x11711<=x11712)));

    if (t177 != 880243071220209LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x11733 = 0;
	int32_t x11734 = 4;
	int64_t x11736 = INT64_MIN;
	volatile int32_t t178 = 4;

    t178 = (x11733<<(x11734<<(x11735<=x11736)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x11746 = 7;
	static uint8_t x11748 = UINT8_MAX;

    t179 = (x11745<<(x11746<<(x11747<=x11748)));

    if (t179 != 131072) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x11869 = 54;
	uint32_t x11870 = 15U;
	static uint32_t x11871 = UINT32_MAX;
	uint16_t x11872 = 4382U;
	static volatile int32_t t180 = -5593943;

    t180 = (x11869<<(x11870<<(x11871<=x11872)));

    if (t180 != 1769472) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x11893 = 116U;
	uint8_t x11894 = 4U;
	static volatile int8_t x11895 = INT8_MAX;
	uint16_t x11896 = 1U;
	static int32_t t181 = -360478013;

    t181 = (x11893<<(x11894<<(x11895<=x11896)));

    if (t181 != 1856) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x12077 = UINT32_MAX;
	volatile uint32_t x12078 = 23U;
	int64_t x12079 = INT64_MAX;
	volatile uint32_t t182 = 96931386U;

    t182 = (x12077<<(x12078<<(x12079<=x12080)));

    if (t182 != 4286578688U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x12133 = 54;
	volatile int16_t x12134 = 1;
	static int32_t x12135 = INT32_MAX;
	uint32_t x12136 = 90004563U;

    t183 = (x12133<<(x12134<<(x12135<=x12136)));

    if (t183 != 108) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x12157 = UINT8_MAX;
	int8_t x12158 = 0;
	int32_t x12159 = -1;
	int32_t t184 = -2;

    t184 = (x12157<<(x12158<<(x12159<=x12160)));

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x12361 = UINT64_MAX;
	uint8_t x12362 = 7U;
	uint64_t x12363 = 98341231LLU;
	uint64_t t185 = 257929951644393046LLU;

    t185 = (x12361<<(x12362<<(x12363<=x12364)));

    if (t185 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x12401 = 122550U;
	int8_t x12402 = 0;
	uint8_t x12403 = UINT8_MAX;
	uint64_t x12404 = 115417LLU;

    t186 = (x12401<<(x12402<<(x12403<=x12404)));

    if (t186 != 122550U) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint64_t x12485 = UINT64_MAX;
	int64_t x12486 = 0LL;
	int16_t x12487 = INT16_MIN;

    t187 = (x12485<<(x12486<<(x12487<=x12488)));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x12510 = 6;
	volatile int8_t x12511 = 17;
	int8_t x12512 = INT8_MIN;

    t188 = (x12509<<(x12510<<(x12511<=x12512)));

    if (t188 != 8128) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x12513 = 45823U;
	uint8_t x12514 = 5U;
	uint32_t t189 = 617672802U;

    t189 = (x12513<<(x12514<<(x12515<=x12516)));

    if (t189 != 1466336U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x12557 = 4639070260271705952LLU;
	int16_t x12558 = 0;
	volatile int16_t x12559 = INT16_MIN;
	int64_t x12560 = INT64_MIN;
	volatile uint64_t t190 = 6491971LLU;

    t190 = (x12557<<(x12558<<(x12559<=x12560)));

    if (t190 != 4639070260271705952LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x12565 = 564U;
	int8_t x12566 = 4;
	uint32_t x12568 = 147581U;
	volatile int32_t t191 = 1;

    t191 = (x12565<<(x12566<<(x12567<=x12568)));

    if (t191 != 144384) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x12630 = 0U;
	int32_t x12631 = -85756;
	static int32_t x12632 = -17356;
	uint64_t t192 = UINT64_MAX;

    t192 = (x12629<<(x12630<<(x12631<=x12632)));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x12734 = 1U;
	static int32_t x12736 = 7872211;
	volatile int32_t t193 = -1;

    t193 = (x12733<<(x12734<<(x12735<=x12736)));

    if (t193 != 14108) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x12761 = 659733512188LLU;
	uint16_t x12762 = 0U;
	uint32_t x12764 = 4715U;

    t194 = (x12761<<(x12762<<(x12763<=x12764)));

    if (t194 != 659733512188LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x12801 = 747471U;
	static int16_t x12802 = 7;
	static uint8_t x12803 = UINT8_MAX;
	uint8_t x12804 = 2U;
	uint32_t t195 = 6U;

    t195 = (x12801<<(x12802<<(x12803<=x12804)));

    if (t195 != 95676288U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x12866 = 6U;
	int16_t x12867 = 3;
	uint8_t x12868 = 30U;

    t196 = (x12865<<(x12866<<(x12867<=x12868)));

    if (t196 != 1199919104LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x12891 = 15361;
	volatile int64_t x12892 = INT64_MIN;
	uint32_t t197 = 1427158U;

    t197 = (x12889<<(x12890<<(x12891<=x12892)));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x12921 = INT32_MAX;
	uint32_t x12924 = 4U;
	volatile int32_t t198 = INT32_MAX;

    t198 = (x12921<<(x12922<<(x12923<=x12924)));

    if (t198 != INT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x12929 = 1;
	volatile uint8_t x12932 = 3U;
	volatile int32_t t199 = -1;

    t199 = (x12929<<(x12930<<(x12931<=x12932)));

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

