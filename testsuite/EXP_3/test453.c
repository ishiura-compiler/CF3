
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

static uint8_t x8 = 45U;
static int16_t x9 = -722;
int8_t x17 = -1;
int8_t x26 = INT8_MIN;
int16_t x27 = INT16_MIN;
volatile int32_t x39 = INT32_MIN;
int64_t x40 = 17777822LL;
int16_t x49 = 0;
static volatile int64_t x65 = INT64_MAX;
uint8_t x66 = 45U;
int8_t x80 = -13;
uint8_t x82 = UINT8_MAX;
volatile uint32_t t12 = 1683143020U;
volatile uint64_t t13 = 4087LLU;
int32_t x124 = INT32_MIN;
int64_t t15 = 3684961572472LL;
int32_t x158 = INT32_MAX;
uint32_t x159 = 200U;
static volatile uint32_t x164 = 5002U;
volatile uint16_t x174 = UINT16_MAX;
static int64_t x175 = 5472LL;
int64_t t22 = 117099855022LL;
volatile int64_t x178 = INT64_MIN;
volatile uint8_t x193 = 0U;
int32_t x203 = INT32_MIN;
volatile int64_t t29 = -20643226997LL;
static volatile uint32_t x210 = 22530477U;
static volatile int16_t x212 = -7;
uint8_t x216 = UINT8_MAX;
volatile uint64_t x219 = UINT64_MAX;
volatile uint64_t t32 = 464655906233539LLU;
int8_t x242 = 2;
volatile int8_t x247 = 12;
int32_t x253 = INT32_MIN;
static volatile uint8_t x254 = 3U;
int8_t x255 = INT8_MAX;
int32_t x297 = INT32_MIN;
uint32_t x307 = 18980185U;
int8_t x324 = INT8_MIN;
volatile int64_t t43 = 11166979592899894LL;
static uint64_t x325 = 6402LLU;
int16_t x328 = INT16_MIN;
uint64_t t44 = 552741340LLU;
static volatile uint32_t t45 = 14U;
uint64_t x352 = UINT64_MAX;
static volatile uint64_t x353 = 140704489799010151LLU;
int16_t x356 = 15;
uint32_t x357 = 85759742U;
int8_t x362 = 28;
int64_t x367 = -129465470LL;
static uint32_t x378 = 10757U;
uint8_t x382 = UINT8_MAX;
int16_t x384 = INT16_MIN;
uint32_t x389 = 13U;
int64_t x390 = INT64_MAX;
volatile int16_t x394 = INT16_MAX;
int8_t x410 = INT8_MIN;
static volatile int32_t t61 = -236;
int32_t x427 = 1915;
static uint64_t t64 = 16624131746703254LLU;
int8_t x444 = -1;
static volatile uint64_t x447 = 804625LLU;
static uint16_t x450 = 7849U;
volatile uint32_t t69 = 161729040U;
uint8_t x473 = UINT8_MAX;
static int32_t x485 = -137869;
static int32_t x498 = INT32_MIN;
int16_t x500 = INT16_MIN;
int8_t x505 = INT8_MIN;
static uint64_t x514 = UINT64_MAX;
uint32_t x529 = UINT32_MAX;
volatile int16_t x530 = INT16_MIN;
int64_t x542 = -94375503LL;
int64_t t79 = 207056LL;
int16_t x547 = 1;
uint64_t x548 = 1003600705LLU;
int64_t t81 = 70336970154766LL;
uint8_t x563 = UINT8_MAX;
uint64_t x565 = UINT64_MAX;
static int16_t x569 = INT16_MIN;
static uint8_t x583 = 20U;
volatile uint16_t x592 = UINT16_MAX;
static int32_t t88 = -2107;
uint32_t x603 = 4490U;
volatile int64_t t91 = -22796347531449768LL;
static volatile uint64_t x609 = 6LLU;
int8_t x612 = INT8_MAX;
uint64_t t92 = 1LLU;
volatile int16_t x638 = INT16_MIN;
uint64_t x639 = 134041958706096718LLU;
int64_t x640 = -1LL;
int32_t x645 = INT32_MAX;
volatile int16_t x646 = -12429;
int8_t x648 = -52;
uint32_t x650 = 322U;
uint32_t x667 = UINT32_MAX;
static uint64_t t103 = 86730LLU;
int8_t x681 = INT8_MIN;
static volatile int32_t t107 = -1264;
uint64_t x692 = 11LLU;
uint64_t t110 = 30961483250600LLU;
uint32_t x709 = UINT32_MAX;
uint64_t t115 = 6165467558LLU;
uint64_t x740 = 132099019100LLU;
int64_t x742 = INT64_MIN;
int64_t t117 = -8598104795810LL;
uint8_t x750 = 15U;
int16_t x761 = -1610;
static volatile int32_t t119 = -404831366;
static int8_t x769 = -13;
static volatile uint64_t t121 = 1762784844150410LLU;
int8_t x786 = -16;
volatile uint32_t x790 = 15548U;
volatile int8_t x806 = 1;
int64_t x815 = INT64_MAX;
static uint8_t x816 = 1U;
int16_t x819 = INT16_MIN;
uint32_t x821 = UINT32_MAX;
int64_t x845 = INT64_MAX;
uint32_t x848 = 181351U;
static int64_t t130 = -219138408084512LL;
int32_t x849 = -1;
static uint8_t x862 = 78U;
volatile int8_t x864 = 58;
int8_t x866 = 1;
int64_t x886 = -12496433LL;
int16_t x897 = INT16_MAX;
uint32_t x900 = UINT32_MAX;
volatile uint64_t t139 = 7008LLU;
int16_t x924 = INT16_MAX;
volatile int64_t t141 = -363LL;
int8_t x930 = INT8_MAX;
static volatile int32_t t142 = 4;
static uint8_t x942 = 30U;
uint64_t t144 = 18358218132717583LLU;
uint8_t x960 = UINT8_MAX;
int32_t x964 = -1;
int32_t x976 = -1426;
static int64_t x986 = -19555314194272LL;
volatile int32_t x988 = -1;
int32_t x992 = -1;
int8_t x995 = INT8_MAX;
volatile uint32_t x1001 = 41506696U;
int32_t x1004 = 480636;
uint64_t x1009 = 10405561LLU;
static volatile uint64_t t153 = 2562LLU;
volatile int8_t x1030 = INT8_MIN;
int16_t x1032 = 49;
static volatile uint64_t x1034 = 9660794LLU;
int8_t x1035 = 7;
int8_t x1042 = -6;
static volatile int32_t t157 = -831222;
int32_t x1046 = INT32_MIN;
int64_t x1053 = INT64_MAX;
static volatile int64_t t161 = 236308780207140LL;
static uint64_t x1077 = 49036963LLU;
volatile int64_t x1078 = 13LL;
uint8_t x1089 = UINT8_MAX;
uint32_t x1091 = 1520654U;
uint64_t t165 = 4885LLU;
uint16_t x1098 = 300U;
uint8_t x1103 = 51U;
int8_t x1104 = 1;
volatile uint32_t t167 = 23510181U;
static int32_t x1108 = -848651378;
uint32_t x1123 = UINT32_MAX;
uint8_t x1124 = 1U;
uint32_t t170 = 1U;
volatile uint64_t t173 = 10530425500LLU;
uint64_t x1179 = 63505LLU;
static int64_t x1185 = INT64_MIN;
volatile uint8_t x1187 = 126U;
uint64_t t179 = 125681678322701921LLU;
int64_t x1209 = INT64_MIN;
int64_t t180 = 763915504155379LL;
static uint16_t x1219 = 2U;
static int16_t x1220 = INT16_MIN;
int32_t t181 = -757;
volatile uint8_t x1221 = 3U;
int64_t x1226 = INT64_MIN;
uint8_t x1228 = 27U;
volatile uint64_t t184 = 34LLU;
int8_t x1238 = INT8_MIN;
int64_t x1241 = 1393LL;
int64_t x1243 = -1LL;
uint16_t x1251 = 3U;
int16_t x1252 = INT16_MIN;
static uint8_t x1275 = 82U;
volatile uint64_t x1294 = 40785941LLU;
uint64_t t193 = 617LLU;
volatile uint64_t x1297 = 130435471LLU;
int16_t x1298 = -1;
static volatile uint64_t t194 = 21510LLU;
int32_t x1306 = INT32_MIN;
int32_t t195 = -25;
uint32_t x1315 = UINT32_MAX;
static volatile uint64_t x1324 = 29LLU;
uint64_t x1331 = 1320543LLU;
int32_t x1332 = -1;


void f0(void) {
    	uint32_t x5 = 19880881U;
	static uint16_t x6 = 319U;
	uint8_t x7 = 5U;
	uint32_t t0 = 502U;

    t0 = ((x5%x6)%(x7*x8));

    if (t0 != 163U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x10 = INT32_MAX;
	static int64_t x11 = -5884LL;
	uint32_t x12 = UINT32_MAX;
	static int64_t t1 = 6320LL;

    t1 = ((x9%x10)%(x11*x12));

    if (t1 != -722LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = 71U;
	uint16_t x14 = 8171U;
	volatile int32_t x15 = 23;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t2 = 14345238;

    t2 = ((x13%x14)%(x15*x16));

    if (t2 != 71) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x18 = INT64_MIN;
	uint8_t x19 = 4U;
	int16_t x20 = INT16_MIN;
	static volatile int64_t t3 = -23340586103285LL;

    t3 = ((x17%x18)%(x19*x20));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x25 = 0;
	int64_t x28 = -231654655706899LL;
	volatile int64_t t4 = -865173908630LL;

    t4 = ((x25%x26)%(x27*x28));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x37 = 2U;
	static uint32_t x38 = UINT32_MAX;
	static volatile int64_t t5 = -18344687893876856LL;

    t5 = ((x37%x38)%(x39*x40));

    if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x50 = 939126526718162453LLU;
	int32_t x51 = 1;
	int16_t x52 = INT16_MIN;
	volatile uint64_t t6 = 1660253LLU;

    t6 = ((x49%x50)%(x51*x52));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x67 = -1;
	volatile int16_t x68 = INT16_MIN;
	static volatile int64_t t7 = 323742109391LL;

    t7 = ((x65%x66)%(x67*x68));

    if (t7 != 7LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x69 = -11;
	uint64_t x70 = UINT64_MAX;
	int16_t x71 = INT16_MAX;
	uint32_t x72 = 152758U;
	uint64_t t8 = 8047179159926LLU;

    t8 = ((x69%x70)%(x71*x72));

    if (t8 != 632752145LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x77 = INT64_MAX;
	static volatile int8_t x78 = 1;
	static uint32_t x79 = UINT32_MAX;
	volatile int64_t t9 = -112121281682548853LL;

    t9 = ((x77%x78)%(x79*x80));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x81 = INT8_MIN;
	int32_t x83 = INT32_MIN;
	uint64_t x84 = 1273366676139LLU;
	uint64_t t10 = 130586403950983254LLU;

    t10 = ((x81%x82)%(x83*x84));

    if (t10 != 4415992007600635776LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x85 = 3U;
	uint64_t x86 = 10443948LLU;
	int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MIN;
	uint64_t t11 = 4134330LLU;

    t11 = ((x85%x86)%(x87*x88));

    if (t11 != 3LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x97 = 0;
	static int32_t x98 = 14;
	static uint32_t x99 = 52U;
	int32_t x100 = 7509423;

    t12 = ((x97%x98)%(x99*x100));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x101 = UINT16_MAX;
	uint8_t x102 = UINT8_MAX;
	static uint64_t x103 = UINT64_MAX;
	uint16_t x104 = 12U;

    t13 = ((x101%x102)%(x103*x104));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x109 = 160941317237LLU;
	int32_t x110 = -1;
	uint8_t x111 = UINT8_MAX;
	int64_t x112 = -2196LL;
	uint64_t t14 = 82531438LLU;

    t14 = ((x109%x110)%(x111*x112));

    if (t14 != 160941317237LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x121 = -1;
	int64_t x122 = INT64_MIN;
	uint32_t x123 = UINT32_MAX;

    t15 = ((x121%x122)%(x123*x124));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x133 = INT64_MIN;
	volatile int32_t x134 = INT32_MAX;
	uint16_t x135 = 1U;
	volatile int16_t x136 = -1;
	int64_t t16 = -2566980726075593519LL;

    t16 = ((x133%x134)%(x135*x136));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x145 = -1;
	uint64_t x146 = 3689356792396330639LLU;
	static uint16_t x147 = 24253U;
	uint16_t x148 = UINT16_MAX;
	volatile uint64_t t17 = 15499763585985LLU;

    t17 = ((x145%x146)%(x147*x148));

    if (t17 != 409519334LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x157 = -1;
	volatile int8_t x160 = INT8_MIN;
	uint32_t t18 = 603663U;

    t18 = ((x157%x158)%(x159*x160));

    if (t18 != 25599U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x161 = 1651U;
	int32_t x162 = 131;
	int32_t x163 = 423968920;
	volatile uint32_t t19 = 59175U;

    t19 = ((x161%x162)%(x163*x164));

    if (t19 != 79U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x165 = INT64_MIN;
	static int64_t x166 = -1LL;
	int16_t x167 = INT16_MIN;
	int16_t x168 = INT16_MIN;
	volatile int64_t t20 = -110LL;

    t20 = ((x165%x166)%(x167*x168));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x169 = INT16_MAX;
	uint32_t x170 = 106U;
	volatile uint16_t x171 = 2U;
	static uint16_t x172 = 3174U;
	volatile uint32_t t21 = 1U;

    t21 = ((x169%x170)%(x171*x172));

    if (t21 != 13U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x173 = -2;
	uint16_t x176 = UINT16_MAX;

    t22 = ((x173%x174)%(x175*x176));

    if (t22 != -2LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x177 = 512214;
	uint8_t x179 = UINT8_MAX;
	uint8_t x180 = UINT8_MAX;
	volatile int64_t t23 = 1920016965LL;

    t23 = ((x177%x178)%(x179*x180));

    if (t23 != 57039LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x185 = -1;
	static volatile int64_t x186 = INT64_MIN;
	uint64_t x187 = 49367556848LLU;
	int16_t x188 = INT16_MIN;
	volatile uint64_t t24 = 21493445LLU;

    t24 = ((x185%x186)%(x187*x188));

    if (t24 != 1617676102795263LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x189 = -1;
	int32_t x190 = INT32_MIN;
	int64_t x191 = -105088838LL;
	volatile int8_t x192 = INT8_MIN;
	volatile int64_t t25 = 1141434022613943970LL;

    t25 = ((x189%x190)%(x191*x192));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x194 = 27U;
	int16_t x195 = INT16_MAX;
	int8_t x196 = -1;
	volatile int32_t t26 = -4445279;

    t26 = ((x193%x194)%(x195*x196));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x197 = -1;
	uint16_t x198 = UINT16_MAX;
	volatile uint8_t x199 = UINT8_MAX;
	uint16_t x200 = 19U;
	volatile int32_t t27 = 14;

    t27 = ((x197%x198)%(x199*x200));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x201 = 30U;
	int32_t x202 = INT32_MIN;
	uint32_t x204 = 23U;
	uint32_t t28 = 2892687U;

    t28 = ((x201%x202)%(x203*x204));

    if (t28 != 30U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x205 = -1;
	static int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MAX;
	static int8_t x208 = -1;

    t29 = ((x205%x206)%(x207*x208));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x209 = 1U;
	int16_t x211 = -6;
	volatile uint32_t t30 = 42U;

    t30 = ((x209%x210)%(x211*x212));

    if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x213 = 0U;
	static int64_t x214 = -643LL;
	static int32_t x215 = 1552;
	volatile int64_t t31 = 2940244537019607LL;

    t31 = ((x213%x214)%(x215*x216));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x217 = 236679LLU;
	static int64_t x218 = 5007419423938186LL;
	uint8_t x220 = UINT8_MAX;

    t32 = ((x217%x218)%(x219*x220));

    if (t32 != 236679LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x221 = INT16_MAX;
	int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MAX;
	static volatile int8_t x224 = INT8_MAX;
	static volatile int64_t t33 = 196820567766539LL;

    t33 = ((x221%x222)%(x223*x224));

    if (t33 != 509LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x225 = INT16_MIN;
	uint64_t x226 = UINT64_MAX;
	static int16_t x227 = INT16_MAX;
	static int8_t x228 = -1;
	volatile uint64_t t34 = 126575LLU;

    t34 = ((x225%x226)%(x227*x228));

    if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x233 = INT64_MIN;
	int32_t x234 = INT32_MIN;
	int64_t x235 = -1LL;
	volatile int32_t x236 = 457;
	int64_t t35 = 14608374509799LL;

    t35 = ((x233%x234)%(x235*x236));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x241 = -1;
	uint64_t x243 = 657LLU;
	int64_t x244 = -48382LL;
	volatile uint64_t t36 = 8405836723042LLU;

    t36 = ((x241%x242)%(x243*x244));

    if (t36 != 31786973LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x245 = INT16_MAX;
	int8_t x246 = -26;
	int16_t x248 = 9;
	int32_t t37 = -4;

    t37 = ((x245%x246)%(x247*x248));

    if (t37 != 7) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x249 = -1;
	int8_t x250 = INT8_MIN;
	int64_t x251 = -69LL;
	int16_t x252 = -1;
	static volatile int64_t t38 = -109044915693LL;

    t38 = ((x249%x250)%(x251*x252));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x256 = 52LLU;
	volatile uint64_t t39 = 15960858362LLU;

    t39 = ((x253%x254)%(x255*x256));

    if (t39 != 3810LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	uint32_t x300 = 1899U;
	volatile uint32_t t40 = 1U;

    t40 = ((x297%x298)%(x299*x300));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x305 = -51;
	int32_t x306 = -48421938;
	int32_t x308 = INT32_MAX;
	volatile uint32_t t41 = 181U;

    t41 = ((x305%x306)%(x307*x308));

    if (t41 != 37960319U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x309 = -258949652;
	volatile int32_t x310 = -357924;
	volatile int16_t x311 = INT16_MIN;
	volatile int16_t x312 = -1;
	int32_t t42 = 10094442;

    t42 = ((x309%x310)%(x311*x312));

    if (t42 != -6760) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x321 = 7;
	volatile int8_t x322 = INT8_MAX;
	int64_t x323 = 13589323LL;

    t43 = ((x321%x322)%(x323*x324));

    if (t43 != 7LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x326 = 35664450U;
	int32_t x327 = 4;

    t44 = ((x325%x326)%(x327*x328));

    if (t44 != 6402LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x329 = -1;
	int16_t x330 = INT16_MIN;
	uint32_t x331 = 38293057U;
	uint32_t x332 = 582286614U;

    t45 = ((x329%x330)%(x331*x332));

    if (t45 != 305994813U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x333 = INT64_MIN;
	uint64_t x334 = 43615LLU;
	uint64_t x335 = 1LLU;
	int64_t x336 = INT64_MIN;
	static volatile uint64_t t46 = 50855659807LLU;

    t46 = ((x333%x334)%(x335*x336));

    if (t46 != 8LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x349 = INT64_MAX;
	volatile uint16_t x350 = 11U;
	volatile int8_t x351 = INT8_MIN;
	volatile uint64_t t47 = 7797442549899589LLU;

    t47 = ((x349%x350)%(x351*x352));

    if (t47 != 7LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x354 = 6384502LLU;
	int64_t x355 = -139139245350694LL;
	volatile uint64_t t48 = 3470898735499LLU;

    t48 = ((x353%x354)%(x355*x356));

    if (t48 != 4122151LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x358 = 63U;
	int64_t x359 = -599835195000426086LL;
	int16_t x360 = -1;
	int64_t t49 = 31380181130LL;

    t49 = ((x357%x358)%(x359*x360));

    if (t49 != 47LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x361 = 96918;
	int16_t x363 = INT16_MIN;
	int16_t x364 = 118;
	volatile int32_t t50 = 364031;

    t50 = ((x361%x362)%(x363*x364));

    if (t50 != 10) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint16_t x365 = 24462U;
	int64_t x366 = -1LL;
	int32_t x368 = -1;
	int64_t t51 = 638865991991543LL;

    t51 = ((x365%x366)%(x367*x368));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x369 = 48516;
	int8_t x370 = INT8_MIN;
	volatile uint64_t x371 = 314815057110LLU;
	volatile int32_t x372 = -1;
	uint64_t t52 = 43026LLU;

    t52 = ((x369%x370)%(x371*x372));

    if (t52 != 4LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x373 = INT32_MIN;
	volatile uint8_t x374 = UINT8_MAX;
	static volatile int16_t x375 = 3232;
	static int64_t x376 = -26184245883727LL;
	int64_t t53 = -29LL;

    t53 = ((x373%x374)%(x375*x376));

    if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x377 = 4;
	int16_t x379 = INT16_MIN;
	static volatile uint8_t x380 = 8U;
	volatile uint32_t t54 = 49978U;

    t54 = ((x377%x378)%(x379*x380));

    if (t54 != 4U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x381 = -1;
	uint16_t x383 = UINT16_MAX;
	static volatile int32_t t55 = -256407;

    t55 = ((x381%x382)%(x383*x384));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x391 = UINT16_MAX;
	uint32_t x392 = UINT32_MAX;
	volatile int64_t t56 = -218823899733617LL;

    t56 = ((x389%x390)%(x391*x392));

    if (t56 != 13LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x393 = 14610;
	int64_t x395 = -1LL;
	int64_t x396 = -81461691060LL;
	volatile int64_t t57 = -138344782412080280LL;

    t57 = ((x393%x394)%(x395*x396));

    if (t57 != 14610LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x397 = INT8_MAX;
	static volatile int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MAX;
	uint32_t x400 = 1138247U;
	volatile uint32_t t58 = 15351594U;

    t58 = ((x397%x398)%(x399*x400));

    if (t58 != 127U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x409 = INT64_MIN;
	static uint32_t x411 = 11455761U;
	int16_t x412 = INT16_MIN;
	volatile int64_t t59 = -36853LL;

    t59 = ((x409%x410)%(x411*x412));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x413 = 0;
	uint16_t x414 = UINT16_MAX;
	volatile int8_t x415 = -3;
	volatile uint64_t x416 = 1939499604197529349LLU;
	uint64_t t60 = 5357637271565LLU;

    t60 = ((x413%x414)%(x415*x416));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x421 = UINT8_MAX;
	static int32_t x422 = -1;
	volatile int32_t x423 = 3952;
	volatile uint8_t x424 = UINT8_MAX;

    t61 = ((x421%x422)%(x423*x424));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x425 = INT32_MAX;
	int64_t x426 = -1LL;
	int16_t x428 = -115;
	int64_t t62 = -10522036891354122LL;

    t62 = ((x425%x426)%(x427*x428));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x429 = 11U;
	uint64_t x430 = 4654953842655270808LLU;
	volatile uint16_t x431 = 140U;
	int16_t x432 = -1;
	uint64_t t63 = 64659404471269302LLU;

    t63 = ((x429%x430)%(x431*x432));

    if (t63 != 11LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x437 = 119171299745LLU;
	int16_t x438 = -1;
	volatile int8_t x439 = -1;
	int32_t x440 = INT32_MAX;

    t64 = ((x437%x438)%(x439*x440));

    if (t64 != 119171299745LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x441 = 10080788;
	uint8_t x442 = 47U;
	volatile int64_t x443 = 29LL;
	int64_t t65 = 4974655730LL;

    t65 = ((x441%x442)%(x443*x444));

    if (t65 != 11LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x445 = UINT64_MAX;
	uint64_t x446 = 29LLU;
	uint8_t x448 = 13U;
	uint64_t t66 = 8287079586356LLU;

    t66 = ((x445%x446)%(x447*x448));

    if (t66 != 23LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x449 = UINT32_MAX;
	static int16_t x451 = -1;
	uint8_t x452 = UINT8_MAX;
	static uint32_t t67 = 469922767U;

    t67 = ((x449%x450)%(x451*x452));

    if (t67 != 2344U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x461 = INT16_MIN;
	volatile int8_t x462 = INT8_MIN;
	static int8_t x463 = INT8_MAX;
	static uint16_t x464 = UINT16_MAX;
	int32_t t68 = -12479426;

    t68 = ((x461%x462)%(x463*x464));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x469 = 78976646U;
	uint8_t x470 = 4U;
	uint8_t x471 = 9U;
	int16_t x472 = -4;

    t69 = ((x469%x470)%(x471*x472));

    if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x474 = 52726;
	static uint16_t x475 = 9U;
	uint8_t x476 = 44U;
	static int32_t t70 = -15;

    t70 = ((x473%x474)%(x475*x476));

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x481 = INT8_MIN;
	int8_t x482 = 54;
	uint64_t x483 = UINT64_MAX;
	volatile uint64_t x484 = 123822379LLU;
	volatile uint64_t t71 = 14615081LLU;

    t71 = ((x481%x482)%(x483*x484));

    if (t71 != 123822359LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint32_t x486 = UINT32_MAX;
	volatile int64_t x487 = 25229LL;
	int16_t x488 = -1;
	static volatile int64_t t72 = 6157LL;

    t72 = ((x485%x486)%(x487*x488));

    if (t72 != 21070LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x489 = 10755U;
	static uint16_t x490 = UINT16_MAX;
	uint32_t x491 = 519U;
	int64_t x492 = 426389850LL;
	int64_t t73 = -3416026245LL;

    t73 = ((x489%x490)%(x491*x492));

    if (t73 != 10755LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x497 = 789LLU;
	uint8_t x499 = 6U;
	uint64_t t74 = 9346LLU;

    t74 = ((x497%x498)%(x499*x500));

    if (t74 != 789LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint16_t x501 = 416U;
	static uint32_t x502 = 2U;
	uint16_t x503 = 4U;
	int16_t x504 = INT16_MAX;
	volatile uint32_t t75 = 6138480U;

    t75 = ((x501%x502)%(x503*x504));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x506 = 253;
	static int32_t x507 = INT32_MIN;
	int64_t x508 = -1LL;
	int64_t t76 = -499204821053861LL;

    t76 = ((x505%x506)%(x507*x508));

    if (t76 != -128LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x513 = 4U;
	volatile int8_t x515 = -1;
	int16_t x516 = 2005;
	volatile uint64_t t77 = 7544LLU;

    t77 = ((x513%x514)%(x515*x516));

    if (t77 != 4LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x531 = INT32_MIN;
	uint64_t x532 = 1030616538LLU;
	volatile uint64_t t78 = 231580964586582441LLU;

    t78 = ((x529%x530)%(x531*x532));

    if (t78 != 32767LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x541 = 65U;
	int32_t x543 = -1;
	uint32_t x544 = 433918U;

    t79 = ((x541%x542)%(x543*x544));

    if (t79 != 65LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x545 = UINT8_MAX;
	int16_t x546 = INT16_MIN;
	static volatile uint64_t t80 = 12318782954193217LLU;

    t80 = ((x545%x546)%(x547*x548));

    if (t80 != 255LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x549 = -1;
	static int16_t x550 = -1;
	int16_t x551 = INT16_MAX;
	static int64_t x552 = -1LL;

    t81 = ((x549%x550)%(x551*x552));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x561 = 732U;
	volatile int8_t x562 = INT8_MIN;
	volatile uint64_t x564 = 59743288114787LLU;
	volatile uint64_t t82 = 563093622013740670LLU;

    t82 = ((x561%x562)%(x563*x564));

    if (t82 != 92LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x566 = -15157;
	static uint64_t x567 = UINT64_MAX;
	uint16_t x568 = UINT16_MAX;
	uint64_t t83 = 74141066273513422LLU;

    t83 = ((x565%x566)%(x567*x568));

    if (t83 != 15156LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x570 = UINT16_MAX;
	static int8_t x571 = 5;
	volatile uint64_t x572 = 298198LLU;
	volatile uint64_t t84 = 589764LLU;

    t84 = ((x569%x570)%(x571*x572));

    if (t84 != 1289128LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x573 = -1;
	int32_t x574 = INT32_MAX;
	uint64_t x575 = 1228948039274596053LLU;
	static uint64_t x576 = 8662LLU;
	uint64_t t85 = 6910788LLU;

    t85 = ((x573%x574)%(x575*x576));

    if (t85 != 551130413893079113LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x577 = INT32_MIN;
	uint8_t x578 = 7U;
	int8_t x579 = -1;
	static uint8_t x580 = 78U;
	volatile int32_t t86 = 2575741;

    t86 = ((x577%x578)%(x579*x580));

    if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x581 = 79U;
	static uint8_t x582 = UINT8_MAX;
	volatile int16_t x584 = -1;
	int32_t t87 = -5851256;

    t87 = ((x581%x582)%(x583*x584));

    if (t87 != 19) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x589 = INT16_MIN;
	static volatile int32_t x590 = 214;
	volatile int8_t x591 = 14;

    t88 = ((x589%x590)%(x591*x592));

    if (t88 != -26) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x593 = INT32_MAX;
	volatile uint8_t x594 = 2U;
	int16_t x595 = -1;
	uint32_t x596 = 5053U;
	volatile uint32_t t89 = 201U;

    t89 = ((x593%x594)%(x595*x596));

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x601 = -30781LL;
	volatile uint16_t x602 = 11058U;
	int32_t x604 = -65126;
	static volatile int64_t t90 = -2217065374LL;

    t90 = ((x601%x602)%(x603*x604));

    if (t90 != -8665LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x605 = -1;
	int64_t x606 = 29157120334LL;
	uint8_t x607 = UINT8_MAX;
	int64_t x608 = -1LL;

    t91 = ((x605%x606)%(x607*x608));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x610 = 605U;
	int8_t x611 = 14;

    t92 = ((x609%x610)%(x611*x612));

    if (t92 != 6LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x617 = 7LLU;
	uint64_t x618 = 784LLU;
	uint8_t x619 = UINT8_MAX;
	int8_t x620 = INT8_MIN;
	volatile uint64_t t93 = 1324006360556134LLU;

    t93 = ((x617%x618)%(x619*x620));

    if (t93 != 7LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x621 = 3424;
	int32_t x622 = INT32_MIN;
	int16_t x623 = -1;
	int16_t x624 = INT16_MIN;
	static int32_t t94 = 21377907;

    t94 = ((x621%x622)%(x623*x624));

    if (t94 != 3424) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x625 = INT64_MIN;
	int32_t x626 = -1;
	uint32_t x627 = UINT32_MAX;
	volatile int16_t x628 = INT16_MIN;
	volatile int64_t t95 = -1649309416488351LL;

    t95 = ((x625%x626)%(x627*x628));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x629 = -1;
	static uint64_t x630 = 66578967467961636LLU;
	uint32_t x631 = 5871761U;
	volatile int32_t x632 = -831;
	uint64_t t96 = 15145446071LLU;

    t96 = ((x629%x630)%(x631*x632));

    if (t96 != 1479187482LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x633 = INT32_MIN;
	static int64_t x634 = 2549191844LL;
	uint64_t x635 = 71533859900LLU;
	int8_t x636 = INT8_MIN;
	uint64_t t97 = 4436851964544829764LLU;

    t97 = ((x633%x634)%(x635*x636));

    if (t97 != 9154186583552LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x637 = INT64_MIN;
	static volatile uint64_t t98 = 8924799359779820581LLU;

    t98 = ((x637%x638)%(x639*x640));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x647 = -1LL;
	int64_t t99 = 60636174LL;

    t99 = ((x645%x646)%(x647*x648));

    if (t99 != 39LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x649 = INT16_MIN;
	int8_t x651 = INT8_MIN;
	int8_t x652 = INT8_MIN;
	uint32_t t100 = 1537246U;

    t100 = ((x649%x650)%(x651*x652));

    if (t100 != 318U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x653 = 7498250246LLU;
	uint8_t x654 = 9U;
	int64_t x655 = 111LL;
	static int16_t x656 = INT16_MIN;
	volatile uint64_t t101 = 5264LLU;

    t101 = ((x653%x654)%(x655*x656));

    if (t101 != 2LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x657 = INT64_MIN;
	volatile int16_t x658 = INT16_MIN;
	volatile int16_t x659 = INT16_MIN;
	int16_t x660 = -3760;
	int64_t t102 = 4539038473LL;

    t102 = ((x657%x658)%(x659*x660));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x665 = 24LLU;
	volatile uint16_t x666 = 6729U;
	static int64_t x668 = -1LL;

    t103 = ((x665%x666)%(x667*x668));

    if (t103 != 24LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x669 = INT32_MIN;
	volatile uint16_t x670 = 19451U;
	int64_t x671 = -1LL;
	int16_t x672 = INT16_MIN;
	int64_t t104 = -16364886379LL;

    t104 = ((x669%x670)%(x671*x672));

    if (t104 != -15444LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x673 = INT64_MIN;
	int32_t x674 = INT32_MAX;
	uint8_t x675 = 2U;
	int64_t x676 = -1LL;
	volatile int64_t t105 = 9287LL;

    t105 = ((x673%x674)%(x675*x676));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x677 = UINT8_MAX;
	static volatile uint32_t x678 = 299555U;
	int16_t x679 = INT16_MAX;
	volatile int64_t x680 = -1LL;
	volatile int64_t t106 = -261692243138277LL;

    t106 = ((x677%x678)%(x679*x680));

    if (t106 != 255LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x682 = 59U;
	int32_t x683 = INT32_MAX;
	volatile int32_t x684 = -1;

    t107 = ((x681%x682)%(x683*x684));

    if (t107 != -10) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x689 = -1LL;
	uint16_t x690 = 7595U;
	static int64_t x691 = 25892475520LL;
	volatile uint64_t t108 = 49272LLU;

    t108 = ((x689%x690)%(x691*x692));

    if (t108 != 162894386175LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x693 = 19LLU;
	static uint64_t x694 = UINT64_MAX;
	int16_t x695 = INT16_MIN;
	volatile int8_t x696 = INT8_MAX;
	volatile uint64_t t109 = 1420452737107609260LLU;

    t109 = ((x693%x694)%(x695*x696));

    if (t109 != 19LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x701 = INT32_MIN;
	volatile uint64_t x702 = 4978LLU;
	static int64_t x703 = INT64_MAX;
	uint64_t x704 = 47093365898LLU;

    t110 = ((x701%x702)%(x703*x704));

    if (t110 != 1382LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x705 = 2;
	static int8_t x706 = INT8_MIN;
	uint8_t x707 = 25U;
	int8_t x708 = INT8_MIN;
	static int32_t t111 = 2210005;

    t111 = ((x705%x706)%(x707*x708));

    if (t111 != 2) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x710 = 154;
	uint8_t x711 = 18U;
	int8_t x712 = -1;
	volatile uint32_t t112 = 1850275U;

    t112 = ((x709%x710)%(x711*x712));

    if (t112 != 3U) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x713 = -1LL;
	int8_t x714 = 2;
	int32_t x715 = -1;
	static int16_t x716 = INT16_MIN;
	int64_t t113 = -111LL;

    t113 = ((x713%x714)%(x715*x716));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x721 = -129633439;
	volatile int64_t x722 = INT64_MIN;
	uint64_t x723 = 7918LLU;
	int16_t x724 = INT16_MIN;
	volatile uint64_t t114 = 5236412131918059515LLU;

    t114 = ((x721%x722)%(x723*x724));

    if (t114 != 129823585LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x725 = 261U;
	volatile int64_t x726 = INT64_MAX;
	int64_t x727 = INT64_MIN;
	static volatile uint64_t x728 = UINT64_MAX;

    t115 = ((x725%x726)%(x727*x728));

    if (t115 != 261LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x737 = INT64_MIN;
	int8_t x738 = -8;
	int8_t x739 = 1;
	uint64_t t116 = 941LLU;

    t116 = ((x737%x738)%(x739*x740));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x741 = INT16_MAX;
	volatile int32_t x743 = INT32_MIN;
	static volatile int64_t x744 = -1LL;

    t117 = ((x741%x742)%(x743*x744));

    if (t117 != 32767LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x749 = INT64_MIN;
	uint32_t x751 = 24U;
	int16_t x752 = INT16_MAX;
	volatile int64_t t118 = 1LL;

    t118 = ((x749%x750)%(x751*x752));

    if (t118 != -8LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x762 = INT16_MAX;
	static uint8_t x763 = UINT8_MAX;
	int16_t x764 = -1;

    t119 = ((x761%x762)%(x763*x764));

    if (t119 != -80) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x770 = INT8_MIN;
	static uint16_t x771 = UINT16_MAX;
	volatile int64_t x772 = 430600835376LL;
	static int64_t t120 = 151353655651601144LL;

    t120 = ((x769%x770)%(x771*x772));

    if (t120 != -13LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x773 = 64018732736360731LLU;
	int8_t x774 = INT8_MIN;
	int64_t x775 = -70641LL;
	int32_t x776 = INT32_MIN;

    t121 = ((x773%x774)%(x775*x776));

    if (t121 != 1167152689435LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x777 = -104;
	static volatile int16_t x778 = INT16_MIN;
	volatile int16_t x779 = 15774;
	static int16_t x780 = -1;
	volatile int32_t t122 = 21;

    t122 = ((x777%x778)%(x779*x780));

    if (t122 != -104) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x785 = -1;
	int8_t x787 = INT8_MIN;
	int16_t x788 = -1;
	volatile int32_t t123 = -472070112;

    t123 = ((x785%x786)%(x787*x788));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x789 = UINT32_MAX;
	volatile uint8_t x791 = 22U;
	uint8_t x792 = UINT8_MAX;
	volatile uint32_t t124 = 4U;

    t124 = ((x789%x790)%(x791*x792));

    if (t124 != 3323U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x793 = INT8_MIN;
	int8_t x794 = INT8_MIN;
	int16_t x795 = INT16_MIN;
	static uint64_t x796 = 2516355LLU;
	uint64_t t125 = 16573419374135LLU;

    t125 = ((x793%x794)%(x795*x796));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x805 = INT64_MIN;
	int32_t x807 = 60143306;
	int16_t x808 = 3;
	int64_t t126 = -6805236LL;

    t126 = ((x805%x806)%(x807*x808));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x813 = 74749287LLU;
	volatile int32_t x814 = 815010470;
	volatile uint64_t t127 = 3023027296LLU;

    t127 = ((x813%x814)%(x815*x816));

    if (t127 != 74749287LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x817 = INT64_MAX;
	int64_t x818 = INT64_MIN;
	static int8_t x820 = -1;
	static volatile int64_t t128 = -1625383315000904614LL;

    t128 = ((x817%x818)%(x819*x820));

    if (t128 != 32767LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x822 = INT8_MIN;
	int32_t x823 = -1;
	uint8_t x824 = UINT8_MAX;
	uint32_t t129 = 9515U;

    t129 = ((x821%x822)%(x823*x824));

    if (t129 != 127U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x846 = INT16_MAX;
	volatile uint8_t x847 = 68U;

    t130 = ((x845%x846)%(x847*x848));

    if (t130 != 7LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x850 = 5U;
	static volatile int8_t x851 = 17;
	uint8_t x852 = UINT8_MAX;
	int32_t t131 = -26715798;

    t131 = ((x849%x850)%(x851*x852));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x861 = -1;
	uint32_t x863 = 1U;
	static uint32_t t132 = 3097329U;

    t132 = ((x861%x862)%(x863*x864));

    if (t132 != 15U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x865 = 23;
	static int16_t x867 = -1;
	uint64_t x868 = 596LLU;
	volatile uint64_t t133 = 83191796867097281LLU;

    t133 = ((x865%x866)%(x867*x868));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x869 = 45U;
	int64_t x870 = INT64_MIN;
	static volatile int8_t x871 = INT8_MIN;
	static uint8_t x872 = 13U;
	volatile int64_t t134 = -10533LL;

    t134 = ((x869%x870)%(x871*x872));

    if (t134 != 45LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x873 = 80063212LL;
	int16_t x874 = INT16_MIN;
	int16_t x875 = -2;
	static uint32_t x876 = 1U;
	volatile int64_t t135 = 6367208691LL;

    t135 = ((x873%x874)%(x875*x876));

    if (t135 != 10988LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x877 = 320U;
	uint32_t x878 = UINT32_MAX;
	static int8_t x879 = -1;
	static int16_t x880 = INT16_MAX;
	uint32_t t136 = 0U;

    t136 = ((x877%x878)%(x879*x880));

    if (t136 != 320U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x881 = INT64_MAX;
	volatile int16_t x882 = 16303;
	int16_t x883 = INT16_MIN;
	int16_t x884 = INT16_MIN;
	static volatile int64_t t137 = -1080280LL;

    t137 = ((x881%x882)%(x883*x884));

    if (t137 != 6468LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x885 = INT64_MIN;
	static int16_t x887 = INT16_MIN;
	int8_t x888 = INT8_MAX;
	static int64_t t138 = -333353399992LL;

    t138 = ((x885%x886)%(x887*x888));

    if (t138 != -821730LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x898 = UINT8_MAX;
	uint64_t x899 = 481980311355437041LLU;

    t139 = ((x897%x898)%(x899*x900));

    if (t139 != 127LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x917 = -1;
	volatile int8_t x918 = -2;
	uint64_t x919 = 295973545898LLU;
	int16_t x920 = INT16_MAX;
	volatile uint64_t t140 = 1327680348072LLU;

    t140 = ((x917%x918)%(x919*x920));

    if (t140 != 833904317116683LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x921 = INT16_MAX;
	volatile int64_t x922 = -1LL;
	uint8_t x923 = UINT8_MAX;

    t141 = ((x921%x922)%(x923*x924));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x929 = 762;
	int16_t x931 = INT16_MAX;
	int16_t x932 = INT16_MAX;

    t142 = ((x929%x930)%(x931*x932));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x941 = UINT16_MAX;
	int32_t x943 = 430451;
	volatile uint32_t x944 = 3871U;
	volatile uint32_t t143 = 18338U;

    t143 = ((x941%x942)%(x943*x944));

    if (t143 != 15U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x953 = 62;
	static volatile uint32_t x954 = 5609754U;
	int16_t x955 = -14;
	uint64_t x956 = 3903328LLU;

    t144 = ((x953%x954)%(x955*x956));

    if (t144 != 62LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x957 = 72U;
	int32_t x958 = INT32_MAX;
	int8_t x959 = INT8_MIN;
	volatile int32_t t145 = -1;

    t145 = ((x957%x958)%(x959*x960));

    if (t145 != 72) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x961 = -1;
	int16_t x962 = -1;
	int16_t x963 = -1;
	int32_t t146 = 91423;

    t146 = ((x961%x962)%(x963*x964));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x965 = -1;
	int32_t x966 = -199902;
	volatile int16_t x967 = INT16_MAX;
	int64_t x968 = -65LL;
	volatile int64_t t147 = -1991LL;

    t147 = ((x965%x966)%(x967*x968));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x973 = -1LL;
	uint16_t x974 = 19U;
	uint32_t x975 = 11741U;
	int64_t t148 = -30LL;

    t148 = ((x973%x974)%(x975*x976));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x985 = -4704110LL;
	volatile int8_t x987 = INT8_MIN;
	static volatile int64_t t149 = -56649746450275126LL;

    t149 = ((x985%x986)%(x987*x988));

    if (t149 != -110LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x989 = INT8_MIN;
	static int8_t x990 = -1;
	volatile int8_t x991 = INT8_MIN;
	volatile int32_t t150 = 1426;

    t150 = ((x989%x990)%(x991*x992));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x993 = INT16_MIN;
	uint32_t x994 = UINT32_MAX;
	int32_t x996 = -6;
	static uint32_t t151 = 116950U;

    t151 = ((x993%x994)%(x995*x996));

    if (t151 != 4294934528U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1002 = INT64_MIN;
	uint64_t x1003 = 7387732506457LLU;
	uint64_t t152 = 0LLU;

    t152 = ((x1001%x1002)%(x1003*x1004));

    if (t152 != 41506696LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x1010 = 2U;
	int8_t x1011 = INT8_MIN;
	volatile uint8_t x1012 = 81U;

    t153 = ((x1009%x1010)%(x1011*x1012));

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x1013 = -394079073181LL;
	uint64_t x1014 = 1LLU;
	int64_t x1015 = -1LL;
	int16_t x1016 = -1;
	static volatile uint64_t t154 = 3242259LLU;

    t154 = ((x1013%x1014)%(x1015*x1016));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint16_t x1029 = 0U;
	volatile int32_t x1031 = -1;
	volatile int32_t t155 = -32033;

    t155 = ((x1029%x1030)%(x1031*x1032));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1033 = -1;
	int16_t x1036 = -1;
	static volatile uint64_t t156 = 1269082564LLU;

    t156 = ((x1033%x1034)%(x1035*x1036));

    if (t156 != 5587883LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1041 = INT32_MIN;
	uint8_t x1043 = UINT8_MAX;
	int16_t x1044 = INT16_MIN;

    t157 = ((x1041%x1042)%(x1043*x1044));

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1045 = INT16_MIN;
	uint64_t x1047 = UINT64_MAX;
	int16_t x1048 = -1;
	volatile uint64_t t158 = 57336032LLU;

    t158 = ((x1045%x1046)%(x1047*x1048));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1054 = 2306LLU;
	uint16_t x1055 = 449U;
	uint32_t x1056 = 1790190U;
	uint64_t t159 = 22205LLU;

    t159 = ((x1053%x1054)%(x1055*x1056));

    if (t159 != 1467LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1061 = INT8_MAX;
	static uint32_t x1062 = 21604U;
	int32_t x1063 = -1;
	uint32_t x1064 = UINT32_MAX;
	uint32_t t160 = 3571U;

    t160 = ((x1061%x1062)%(x1063*x1064));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1065 = INT8_MIN;
	static int64_t x1066 = INT64_MIN;
	volatile int16_t x1067 = INT16_MAX;
	int32_t x1068 = 29921;

    t161 = ((x1065%x1066)%(x1067*x1068));

    if (t161 != -128LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x1069 = -14184;
	static volatile int32_t x1070 = -1;
	int16_t x1071 = 1;
	static volatile uint64_t x1072 = UINT64_MAX;
	uint64_t t162 = 88LLU;

    t162 = ((x1069%x1070)%(x1071*x1072));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x1079 = -1LL;
	uint64_t x1080 = 8018567880778092LLU;
	static uint64_t t163 = 1438LLU;

    t163 = ((x1077%x1078)%(x1079*x1080));

    if (t163 != 1LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1081 = INT16_MIN;
	static volatile int8_t x1082 = INT8_MIN;
	volatile int16_t x1083 = -5561;
	int16_t x1084 = -27;
	int32_t t164 = 797;

    t164 = ((x1081%x1082)%(x1083*x1084));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x1090 = INT32_MAX;
	uint64_t x1092 = 2877135692996441775LLU;

    t165 = ((x1089%x1090)%(x1091*x1092));

    if (t165 != 255LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1097 = -4480787704149044LL;
	static uint8_t x1099 = 2U;
	int32_t x1100 = -1;
	int64_t t166 = 14937LL;

    t166 = ((x1097%x1098)%(x1099*x1100));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1101 = 54U;
	uint32_t x1102 = UINT32_MAX;

    t167 = ((x1101%x1102)%(x1103*x1104));

    if (t167 != 3U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x1105 = INT32_MIN;
	uint16_t x1106 = 26855U;
	int32_t x1107 = -1;
	static volatile int32_t t168 = 164161373;

    t168 = ((x1105%x1106)%(x1107*x1108));

    if (t168 != -23573) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1117 = INT32_MAX;
	uint32_t x1118 = 6441U;
	uint16_t x1119 = 63U;
	uint64_t x1120 = UINT64_MAX;
	uint64_t t169 = 13549419571824LLU;

    t169 = ((x1117%x1118)%(x1119*x1120));

    if (t169 != 2719LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1121 = INT8_MIN;
	int8_t x1122 = INT8_MIN;

    t170 = ((x1121%x1122)%(x1123*x1124));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1125 = INT64_MIN;
	static int32_t x1126 = -1;
	int64_t x1127 = 25251LL;
	static int64_t x1128 = -1LL;
	volatile int64_t t171 = 1LL;

    t171 = ((x1125%x1126)%(x1127*x1128));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x1133 = 53209456716042683LL;
	static int64_t x1134 = INT64_MIN;
	static volatile uint64_t x1135 = 40820810997504511LLU;
	int16_t x1136 = 12;
	static volatile uint64_t t172 = 465LLU;

    t172 = ((x1133%x1134)%(x1135*x1136));

    if (t172 != 53209456716042683LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1145 = INT16_MIN;
	int8_t x1146 = INT8_MIN;
	uint64_t x1147 = UINT64_MAX;
	uint8_t x1148 = 30U;

    t173 = ((x1145%x1146)%(x1147*x1148));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x1149 = -1;
	uint64_t x1150 = UINT64_MAX;
	uint64_t x1151 = 3532524994194454LLU;
	int32_t x1152 = INT32_MIN;
	static uint64_t t174 = 1995169572LLU;

    t174 = ((x1149%x1150)%(x1151*x1152));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1153 = 4677267305984324LL;
	int64_t x1154 = INT64_MIN;
	uint16_t x1155 = 19344U;
	int8_t x1156 = -1;
	volatile int64_t t175 = -5575590251LL;

    t175 = ((x1153%x1154)%(x1155*x1156));

    if (t175 != 17588LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x1177 = INT16_MIN;
	int16_t x1178 = INT16_MAX;
	uint16_t x1180 = 26U;
	volatile uint64_t t176 = 6814764217380656LLU;

    t176 = ((x1177%x1178)%(x1179*x1180));

    if (t176 != 200865LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1181 = -2983;
	int32_t x1182 = 53516;
	uint16_t x1183 = 5U;
	int16_t x1184 = -1;
	volatile int32_t t177 = 987258755;

    t177 = ((x1181%x1182)%(x1183*x1184));

    if (t177 != -3) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x1186 = -19;
	int8_t x1188 = INT8_MIN;
	static int64_t t178 = -11161LL;

    t178 = ((x1185%x1186)%(x1187*x1188));

    if (t178 != -18LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1189 = 140U;
	volatile int16_t x1190 = -14857;
	uint64_t x1191 = 848906LLU;
	int16_t x1192 = INT16_MIN;

    t179 = ((x1189%x1190)%(x1191*x1192));

    if (t179 != 140LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x1210 = 12U;
	int16_t x1211 = -1;
	volatile uint32_t x1212 = UINT32_MAX;

    t180 = ((x1209%x1210)%(x1211*x1212));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1217 = 8U;
	static int16_t x1218 = INT16_MIN;

    t181 = ((x1217%x1218)%(x1219*x1220));

    if (t181 != 8) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x1222 = INT32_MIN;
	volatile uint32_t x1223 = 234U;
	int8_t x1224 = INT8_MAX;
	uint32_t t182 = 41U;

    t182 = ((x1221%x1222)%(x1223*x1224));

    if (t182 != 3U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1225 = 11;
	uint64_t x1227 = 25LLU;
	volatile uint64_t t183 = 1587399LLU;

    t183 = ((x1225%x1226)%(x1227*x1228));

    if (t183 != 11LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1229 = INT16_MIN;
	int64_t x1230 = INT64_MIN;
	uint64_t x1231 = UINT64_MAX;
	volatile uint8_t x1232 = 38U;

    t184 = ((x1229%x1230)%(x1231*x1232));

    if (t184 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x1233 = -168435031;
	static int16_t x1234 = 20;
	uint64_t x1235 = UINT64_MAX;
	static int32_t x1236 = INT32_MIN;
	volatile uint64_t t185 = 212640096652196LLU;

    t185 = ((x1233%x1234)%(x1235*x1236));

    if (t185 != 2147483637LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x1237 = UINT16_MAX;
	int8_t x1239 = INT8_MIN;
	int16_t x1240 = INT16_MIN;
	volatile int32_t t186 = 3;

    t186 = ((x1237%x1238)%(x1239*x1240));

    if (t186 != 127) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1242 = -1;
	uint8_t x1244 = UINT8_MAX;
	int64_t t187 = 1254053197346310LL;

    t187 = ((x1241%x1242)%(x1243*x1244));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x1245 = -1;
	int8_t x1246 = INT8_MIN;
	int8_t x1247 = -1;
	volatile uint16_t x1248 = UINT16_MAX;
	volatile int32_t t188 = 626141;

    t188 = ((x1245%x1246)%(x1247*x1248));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1249 = INT64_MIN;
	int32_t x1250 = INT32_MAX;
	int64_t t189 = 3537LL;

    t189 = ((x1249%x1250)%(x1251*x1252));

    if (t189 != -2LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x1273 = -1948895;
	volatile int8_t x1274 = -11;
	int32_t x1276 = 2123;
	int32_t t190 = -104475600;

    t190 = ((x1273%x1274)%(x1275*x1276));

    if (t190 != -3) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1281 = -99963894LL;
	int64_t x1282 = -1LL;
	uint64_t x1283 = 3592454LLU;
	int64_t x1284 = 2863LL;
	uint64_t t191 = 14547071917345LLU;

    t191 = ((x1281%x1282)%(x1283*x1284));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1289 = -480;
	int8_t x1290 = -1;
	int16_t x1291 = -1;
	int16_t x1292 = INT16_MIN;
	int32_t t192 = 3599;

    t192 = ((x1289%x1290)%(x1291*x1292));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1293 = UINT16_MAX;
	int64_t x1295 = INT64_MIN;
	volatile uint64_t x1296 = 115LLU;

    t193 = ((x1293%x1294)%(x1295*x1296));

    if (t193 != 65535LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1299 = INT16_MAX;
	int8_t x1300 = INT8_MIN;

    t194 = ((x1297%x1298)%(x1299*x1300));

    if (t194 != 130435471LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1305 = INT8_MIN;
	volatile int8_t x1307 = -1;
	int16_t x1308 = INT16_MIN;

    t195 = ((x1305%x1306)%(x1307*x1308));

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1309 = 31U;
	static uint8_t x1310 = UINT8_MAX;
	static int16_t x1311 = 2;
	static volatile int16_t x1312 = INT16_MAX;
	volatile int32_t t196 = 119;

    t196 = ((x1309%x1310)%(x1311*x1312));

    if (t196 != 31) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1313 = -5;
	uint32_t x1314 = 9749040U;
	int8_t x1316 = INT8_MIN;
	uint32_t t197 = 94101U;

    t197 = ((x1313%x1314)%(x1315*x1316));

    if (t197 != 123U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1321 = INT16_MAX;
	int32_t x1322 = INT32_MIN;
	uint32_t x1323 = 1052088U;
	uint64_t t198 = 15390569376963LLU;

    t198 = ((x1321%x1322)%(x1323*x1324));

    if (t198 != 32767LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1329 = -1;
	int32_t x1330 = 438808;
	static uint64_t t199 = 28902968578084LLU;

    t199 = ((x1329%x1330)%(x1331*x1332));

    if (t199 != 1320542LLU) { NG(); } else { ; }
	
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

