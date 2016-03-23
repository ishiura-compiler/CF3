
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

int64_t x13 = 163085088972LL;
int8_t x42 = -32;
int32_t x44 = 51841498;
int16_t x48 = INT16_MIN;
uint16_t x53 = 3U;
static int64_t x63 = INT64_MAX;
volatile uint8_t x74 = 32U;
int32_t t10 = 362163;
int32_t x90 = INT32_MAX;
static int32_t t11 = 2919;
int32_t t13 = -4708184;
uint8_t x116 = 75U;
int32_t t14 = 24376306;
static int16_t x118 = 1;
uint8_t x125 = 0U;
int8_t x126 = INT8_MAX;
int16_t x128 = -1;
uint8_t x138 = 3U;
volatile int8_t x139 = -5;
int32_t x140 = -1;
int32_t x141 = INT32_MIN;
int32_t t19 = -425395;
uint8_t x149 = UINT8_MAX;
int32_t t21 = 479202787;
int32_t x175 = INT32_MIN;
uint64_t x194 = UINT64_MAX;
int8_t x196 = 9;
volatile int32_t t24 = -28831;
int8_t x197 = -1;
int16_t x198 = -1010;
int32_t t25 = -74;
static volatile uint16_t x202 = 14189U;
uint64_t x235 = 6907094383899021085LLU;
int32_t x236 = INT32_MAX;
volatile int32_t x238 = -1;
int8_t x240 = INT8_MAX;
uint8_t x281 = 4U;
static int64_t x284 = -1LL;
static int16_t x292 = 15420;
int32_t x296 = 36;
volatile int16_t x327 = INT16_MAX;
int32_t x334 = INT32_MIN;
volatile uint64_t x340 = 7777814794839223295LLU;
static int64_t x354 = -12069LL;
volatile uint32_t x355 = 56U;
volatile int32_t t46 = -16;
static int32_t x371 = 9863723;
int16_t x373 = 1;
static int32_t t50 = 1182770;
volatile uint32_t x389 = UINT32_MAX;
volatile uint32_t x394 = 127462687U;
int16_t x400 = INT16_MIN;
uint64_t x406 = 198760804010285199LLU;
volatile int64_t x407 = -6196564274348648LL;
int8_t x408 = INT8_MAX;
static uint8_t x409 = 0U;
volatile int16_t x412 = -1;
uint64_t x418 = 34823337347997LLU;
int64_t x419 = -9472224LL;
int32_t x438 = INT32_MAX;
static uint64_t x440 = 863282427609148LLU;
uint16_t x442 = UINT16_MAX;
uint64_t x444 = 161402235LLU;
static int16_t x450 = 888;
uint64_t x454 = 762498344LLU;
static int32_t x459 = INT32_MIN;
volatile uint16_t x482 = 53U;
uint32_t x493 = 6619203U;
static uint64_t x509 = UINT64_MAX;
int8_t x545 = -1;
uint16_t x554 = 26U;
static int32_t t77 = -65296;
static volatile uint64_t x557 = 80433417694LLU;
volatile int8_t x567 = -1;
static uint16_t x582 = 6U;
volatile int32_t t82 = 7430093;
uint64_t x585 = 43631183140LLU;
int32_t t83 = -212384;
int32_t x594 = INT32_MAX;
static int32_t t85 = 58;
int16_t x641 = 4;
volatile int32_t t88 = 257616;
int8_t x653 = 18;
uint8_t x657 = 3U;
static uint64_t x666 = UINT64_MAX;
static int32_t x697 = -64;
static int32_t x721 = -1;
volatile uint64_t x725 = UINT64_MAX;
volatile int8_t x728 = INT8_MIN;
int32_t t100 = -2;
int64_t x741 = -2389LL;
int32_t x743 = -349;
int16_t x745 = INT16_MAX;
static volatile int32_t x747 = 10797053;
volatile int32_t x751 = -1;
uint64_t x766 = 10LLU;
int64_t x790 = -21855030LL;
volatile int32_t t108 = 356595591;
static int32_t x799 = INT32_MIN;
static int32_t x800 = INT32_MAX;
int32_t t112 = 388;
int64_t x814 = INT64_MIN;
int64_t x818 = INT64_MIN;
volatile int32_t t114 = 1112023;
static int16_t x837 = INT16_MIN;
int8_t x848 = INT8_MAX;
int64_t x866 = 119LL;
static volatile uint16_t x867 = UINT16_MAX;
int32_t t119 = -8657216;
int32_t x900 = -1;
static volatile int64_t x915 = 1773033914614LL;
volatile int8_t x916 = 18;
uint32_t x930 = 726786037U;
int32_t x939 = -1;
volatile int8_t x949 = -1;
int32_t x954 = 1625518;
uint16_t x955 = UINT16_MAX;
static volatile int32_t t127 = -419;
volatile int64_t x971 = INT64_MIN;
static int16_t x972 = INT16_MIN;
uint32_t x977 = 0U;
volatile int16_t x992 = INT16_MAX;
int8_t x993 = -1;
volatile int16_t x994 = -1;
uint32_t x1018 = 11429U;
uint32_t x1019 = 318656678U;
volatile int8_t x1041 = 4;
static uint16_t x1044 = UINT16_MAX;
static int32_t t138 = -131984450;
static volatile int16_t x1053 = INT16_MIN;
uint8_t x1063 = 2U;
volatile int32_t t141 = 329386;
int64_t x1077 = -1LL;
volatile int8_t x1078 = INT8_MIN;
int8_t x1089 = -1;
int64_t x1091 = INT64_MIN;
int64_t x1092 = INT64_MIN;
static int32_t x1103 = -50269560;
static int32_t x1104 = -1;
int64_t x1116 = -1LL;
volatile int32_t t146 = -2;
volatile int32_t x1123 = INT32_MIN;
static volatile int32_t x1124 = INT32_MAX;
volatile int32_t x1141 = -38;
int32_t t151 = -177069408;
int64_t x1165 = INT64_MAX;
int16_t x1167 = INT16_MIN;
static int8_t x1168 = INT8_MIN;
int64_t x1172 = -118LL;
int32_t t153 = 124;
int8_t x1175 = -1;
volatile int32_t t154 = 13;
volatile int8_t x1188 = INT8_MIN;
volatile int16_t x1192 = INT16_MIN;
uint16_t x1218 = UINT16_MAX;
int32_t t158 = -7096;
uint32_t x1230 = UINT32_MAX;
uint32_t x1232 = 204U;
static int8_t x1237 = -1;
int64_t x1259 = 2366LL;
static uint32_t x1265 = 544995393U;
int64_t x1267 = -131883476977614LL;
uint32_t x1269 = 175680U;
int32_t x1270 = INT32_MIN;
int64_t x1309 = -1LL;
int32_t t168 = 861525;
static int64_t x1314 = INT64_MIN;
uint8_t x1315 = UINT8_MAX;
int16_t x1316 = -1;
int64_t x1319 = INT64_MAX;
int32_t t171 = 9;
int32_t x1338 = INT32_MIN;
int16_t x1339 = INT16_MIN;
int32_t x1341 = INT32_MIN;
int8_t x1344 = INT8_MIN;
static int64_t x1351 = -1LL;
volatile int32_t t176 = 11527;
int16_t x1384 = -1;
static uint32_t x1385 = UINT32_MAX;
uint64_t x1388 = 257473577710070LLU;
int32_t x1427 = -25;
static int8_t x1430 = 1;
uint8_t x1432 = 21U;
static int32_t t186 = 2;
uint16_t x1434 = UINT16_MAX;
int32_t t189 = -28673839;
int32_t x1449 = INT32_MIN;
int32_t x1451 = -237;
volatile uint64_t x1462 = UINT64_MAX;
static volatile int32_t t195 = -16386680;
static int8_t x1472 = INT8_MAX;
volatile int32_t t196 = -444309;


void f0(void) {
    	uint32_t x14 = UINT32_MAX;
	int16_t x15 = INT16_MIN;
	int32_t x16 = -1;
	int32_t t0 = -116;

    t0 = (x13<=(x14/(x15/x16)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x21 = INT8_MIN;
	volatile int64_t x22 = INT64_MIN;
	static uint64_t x23 = UINT64_MAX;
	int8_t x24 = INT8_MAX;
	int32_t t1 = 32650120;

    t1 = (x21<=(x22/(x23/x24)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x25 = -1;
	int32_t x26 = -1;
	static int64_t x27 = -28098804464870LL;
	int8_t x28 = 1;
	volatile int32_t t2 = -3;

    t2 = (x25<=(x26/(x27/x28)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x33 = INT8_MIN;
	uint32_t x34 = UINT32_MAX;
	volatile int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t3 = -904229;

    t3 = (x33<=(x34/(x35/x36)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x37 = -7;
	uint16_t x38 = 15U;
	static int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;
	int32_t t4 = -341;

    t4 = (x37<=(x38/(x39/x40)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x41 = INT64_MIN;
	uint64_t x43 = 537528129834443319LLU;
	static int32_t t5 = 19436;

    t5 = (x41<=(x42/(x43/x44)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x45 = INT16_MAX;
	uint16_t x46 = 111U;
	volatile int64_t x47 = INT64_MIN;
	volatile int32_t t6 = -13;

    t6 = (x45<=(x46/(x47/x48)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x54 = INT64_MIN;
	uint16_t x55 = UINT16_MAX;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t7 = 7889;

    t7 = (x53<=(x54/(x55/x56)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x61 = 33U;
	int16_t x62 = INT16_MIN;
	int16_t x64 = INT16_MAX;
	static volatile int32_t t8 = -24;

    t8 = (x61<=(x62/(x63/x64)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x69 = INT8_MIN;
	int64_t x70 = -98065119195281LL;
	volatile int16_t x71 = -8870;
	uint8_t x72 = 1U;
	int32_t t9 = -1;

    t9 = (x69<=(x70/(x71/x72)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x73 = 1U;
	uint64_t x75 = UINT64_MAX;
	uint8_t x76 = UINT8_MAX;

    t10 = (x73<=(x74/(x75/x76)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x89 = INT16_MIN;
	volatile int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MIN;

    t11 = (x89<=(x90/(x91/x92)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x97 = -1;
	int32_t x98 = INT32_MIN;
	volatile int16_t x99 = INT16_MAX;
	int8_t x100 = 13;
	int32_t t12 = -10;

    t12 = (x97<=(x98/(x99/x100)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x105 = -33;
	static volatile uint8_t x106 = 1U;
	int32_t x107 = INT32_MIN;
	int8_t x108 = -2;

    t13 = (x105<=(x106/(x107/x108)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x113 = -188LL;
	static int8_t x114 = -1;
	uint32_t x115 = 750324404U;

    t14 = (x113<=(x114/(x115/x116)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x117 = INT16_MAX;
	uint32_t x119 = 2002681177U;
	int64_t x120 = -1LL;
	static volatile int32_t t15 = -209;

    t15 = (x117<=(x118/(x119/x120)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x127 = 332;
	volatile int32_t t16 = 9626;

    t16 = (x125<=(x126/(x127/x128)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x137 = 7731U;
	volatile int32_t t17 = -10919;

    t17 = (x137<=(x138/(x139/x140)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x142 = INT64_MIN;
	static volatile int16_t x143 = INT16_MIN;
	int64_t x144 = -1LL;
	static int32_t t18 = -125;

    t18 = (x141<=(x142/(x143/x144)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x145 = 3U;
	uint64_t x146 = UINT64_MAX;
	uint32_t x147 = 1U;
	int64_t x148 = -1LL;

    t19 = (x145<=(x146/(x147/x148)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x150 = INT8_MIN;
	volatile int8_t x151 = 54;
	uint8_t x152 = 1U;
	volatile int32_t t20 = 7137;

    t20 = (x149<=(x150/(x151/x152)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x165 = -56;
	int8_t x166 = -1;
	int64_t x167 = INT64_MAX;
	static uint64_t x168 = 4295752282198LLU;

    t21 = (x165<=(x166/(x167/x168)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x173 = -1;
	static uint8_t x174 = 24U;
	static int8_t x176 = INT8_MIN;
	int32_t t22 = 733955679;

    t22 = (x173<=(x174/(x175/x176)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x185 = INT32_MIN;
	volatile int64_t x186 = INT64_MAX;
	int64_t x187 = INT64_MIN;
	volatile int64_t x188 = INT64_MIN;
	int32_t t23 = 29740;

    t23 = (x185<=(x186/(x187/x188)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x193 = INT8_MIN;
	int8_t x195 = INT8_MIN;

    t24 = (x193<=(x194/(x195/x196)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x199 = INT64_MIN;
	int64_t x200 = 255526789567480158LL;

    t25 = (x197<=(x198/(x199/x200)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x201 = 80;
	int32_t x203 = -381660;
	uint8_t x204 = UINT8_MAX;
	int32_t t26 = 7;

    t26 = (x201<=(x202/(x203/x204)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x217 = INT8_MIN;
	volatile uint8_t x218 = UINT8_MAX;
	int8_t x219 = INT8_MAX;
	int8_t x220 = INT8_MAX;
	volatile int32_t t27 = -12568;

    t27 = (x217<=(x218/(x219/x220)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x229 = INT64_MIN;
	uint8_t x230 = 3U;
	uint64_t x231 = UINT64_MAX;
	volatile uint32_t x232 = 205091105U;
	int32_t t28 = 16259;

    t28 = (x229<=(x230/(x231/x232)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MIN;
	int32_t t29 = -152236727;

    t29 = (x233<=(x234/(x235/x236)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x237 = 4027U;
	uint64_t x239 = 63459674LLU;
	int32_t t30 = -1276781;

    t30 = (x237<=(x238/(x239/x240)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x241 = INT16_MAX;
	static uint8_t x242 = 17U;
	int32_t x243 = INT32_MIN;
	volatile uint64_t x244 = 206846116126LLU;
	int32_t t31 = 2654513;

    t31 = (x241<=(x242/(x243/x244)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x245 = 15696191065090LLU;
	int8_t x246 = -1;
	volatile int64_t x247 = INT64_MIN;
	static uint32_t x248 = UINT32_MAX;
	static volatile int32_t t32 = 873;

    t32 = (x245<=(x246/(x247/x248)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x257 = 6623614U;
	int64_t x258 = 58002947083090884LL;
	static uint16_t x259 = 221U;
	int16_t x260 = -1;
	static int32_t t33 = -1599;

    t33 = (x257<=(x258/(x259/x260)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x265 = INT8_MIN;
	volatile int8_t x266 = 3;
	uint8_t x267 = 55U;
	int16_t x268 = -1;
	int32_t t34 = 14;

    t34 = (x265<=(x266/(x267/x268)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x282 = 17U;
	uint16_t x283 = 1U;
	int32_t t35 = 20280;

    t35 = (x281<=(x282/(x283/x284)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x285 = INT8_MAX;
	int32_t x286 = 174084183;
	int64_t x287 = -593LL;
	int16_t x288 = 12;
	volatile int32_t t36 = 3;

    t36 = (x285<=(x286/(x287/x288)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x289 = -1;
	int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	int32_t t37 = 28779759;

    t37 = (x289<=(x290/(x291/x292)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x293 = -4;
	int64_t x294 = -45426805357430800LL;
	int16_t x295 = INT16_MIN;
	volatile int32_t t38 = 6499041;

    t38 = (x293<=(x294/(x295/x296)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x297 = UINT16_MAX;
	static int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	int16_t x300 = 44;
	int32_t t39 = 400;

    t39 = (x297<=(x298/(x299/x300)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x301 = INT8_MAX;
	int32_t x302 = INT32_MIN;
	uint32_t x303 = 189956959U;
	static uint32_t x304 = 3849921U;
	int32_t t40 = 1299890;

    t40 = (x301<=(x302/(x303/x304)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x309 = 84U;
	static uint8_t x310 = 96U;
	volatile int16_t x311 = INT16_MAX;
	int8_t x312 = -3;
	int32_t t41 = 1;

    t41 = (x309<=(x310/(x311/x312)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x325 = INT16_MIN;
	volatile uint64_t x326 = 16284173289838LLU;
	int32_t x328 = -1;
	volatile int32_t t42 = 364773;

    t42 = (x325<=(x326/(x327/x328)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x333 = -1;
	int64_t x335 = 20169588631630953LL;
	uint64_t x336 = 2LLU;
	static int32_t t43 = -3896;

    t43 = (x333<=(x334/(x335/x336)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x337 = 0U;
	uint32_t x338 = 867330632U;
	int8_t x339 = INT8_MIN;
	int32_t t44 = -3875;

    t44 = (x337<=(x338/(x339/x340)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x349 = 572U;
	int8_t x350 = INT8_MIN;
	uint8_t x351 = UINT8_MAX;
	volatile uint8_t x352 = 3U;
	volatile int32_t t45 = -2;

    t45 = (x349<=(x350/(x351/x352)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x353 = INT8_MIN;
	static volatile int64_t x356 = -1LL;

    t46 = (x353<=(x354/(x355/x356)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x361 = 12U;
	static volatile int32_t x362 = -1;
	static uint8_t x363 = 38U;
	int16_t x364 = -1;
	static int32_t t47 = 3647398;

    t47 = (x361<=(x362/(x363/x364)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x369 = 4U;
	static uint16_t x370 = UINT16_MAX;
	volatile int16_t x372 = INT16_MIN;
	int32_t t48 = -91245119;

    t48 = (x369<=(x370/(x371/x372)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x374 = 31060U;
	uint16_t x375 = 4U;
	volatile int32_t x376 = -1;
	static volatile int32_t t49 = 432618;

    t49 = (x373<=(x374/(x375/x376)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x385 = INT32_MAX;
	int64_t x386 = INT64_MIN;
	static uint32_t x387 = UINT32_MAX;
	volatile uint16_t x388 = 780U;

    t50 = (x385<=(x386/(x387/x388)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x390 = INT8_MAX;
	static volatile uint32_t x391 = UINT32_MAX;
	static int16_t x392 = -1;
	volatile int32_t t51 = 696450578;

    t51 = (x389<=(x390/(x391/x392)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x393 = INT8_MAX;
	static volatile uint64_t x395 = UINT64_MAX;
	volatile int8_t x396 = INT8_MAX;
	int32_t t52 = -6996;

    t52 = (x393<=(x394/(x395/x396)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x397 = 1U;
	uint8_t x398 = 0U;
	uint64_t x399 = UINT64_MAX;
	volatile int32_t t53 = 218300;

    t53 = (x397<=(x398/(x399/x400)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x405 = -1;
	static int32_t t54 = -29453;

    t54 = (x405<=(x406/(x407/x408)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x410 = 510258LLU;
	volatile int32_t x411 = INT32_MAX;
	int32_t t55 = -211350;

    t55 = (x409<=(x410/(x411/x412)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x413 = -1;
	int64_t x414 = 65503610200824LL;
	int32_t x415 = INT32_MIN;
	static int64_t x416 = 199LL;
	int32_t t56 = 6087640;

    t56 = (x413<=(x414/(x415/x416)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x417 = 1942LLU;
	static uint8_t x420 = 5U;
	volatile int32_t t57 = 4690534;

    t57 = (x417<=(x418/(x419/x420)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x437 = INT64_MIN;
	int64_t x439 = INT64_MIN;
	static int32_t t58 = 65367;

    t58 = (x437<=(x438/(x439/x440)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x441 = UINT32_MAX;
	volatile uint32_t x443 = UINT32_MAX;
	int32_t t59 = 167695;

    t59 = (x441<=(x442/(x443/x444)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x445 = INT8_MIN;
	int16_t x446 = -3;
	uint8_t x447 = UINT8_MAX;
	uint8_t x448 = 23U;
	int32_t t60 = -879759;

    t60 = (x445<=(x446/(x447/x448)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x449 = INT32_MAX;
	int16_t x451 = INT16_MAX;
	int8_t x452 = -54;
	int32_t t61 = -2399101;

    t61 = (x449<=(x450/(x451/x452)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x453 = 0U;
	uint16_t x455 = UINT16_MAX;
	int8_t x456 = INT8_MAX;
	static int32_t t62 = -332;

    t62 = (x453<=(x454/(x455/x456)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x457 = INT64_MIN;
	int8_t x458 = -50;
	uint32_t x460 = 19092765U;
	int32_t t63 = 27127;

    t63 = (x457<=(x458/(x459/x460)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x465 = UINT16_MAX;
	int16_t x466 = 6;
	int16_t x467 = -25;
	uint16_t x468 = 6U;
	int32_t t64 = -184;

    t64 = (x465<=(x466/(x467/x468)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x469 = 3U;
	int32_t x470 = INT32_MIN;
	int64_t x471 = -1062882012219858LL;
	uint32_t x472 = 1U;
	int32_t t65 = 1;

    t65 = (x469<=(x470/(x471/x472)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x473 = INT64_MAX;
	int64_t x474 = -1LL;
	static int64_t x475 = -304607480039LL;
	int32_t x476 = INT32_MAX;
	int32_t t66 = -34;

    t66 = (x473<=(x474/(x475/x476)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x477 = INT64_MIN;
	int8_t x478 = -1;
	static volatile int16_t x479 = INT16_MIN;
	volatile int16_t x480 = INT16_MIN;
	int32_t t67 = -2;

    t67 = (x477<=(x478/(x479/x480)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x481 = INT16_MIN;
	int16_t x483 = INT16_MIN;
	static volatile uint16_t x484 = 3U;
	static volatile int32_t t68 = -6669233;

    t68 = (x481<=(x482/(x483/x484)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x489 = -797;
	uint32_t x490 = UINT32_MAX;
	int8_t x491 = INT8_MIN;
	static uint32_t x492 = 1U;
	int32_t t69 = -57504724;

    t69 = (x489<=(x490/(x491/x492)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x494 = 44029553;
	int64_t x495 = -1LL;
	int32_t x496 = -1;
	static int32_t t70 = -332;

    t70 = (x493<=(x494/(x495/x496)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x505 = -1LL;
	volatile int64_t x506 = INT64_MIN;
	uint64_t x507 = UINT64_MAX;
	int32_t x508 = -1;
	volatile int32_t t71 = -2663890;

    t71 = (x505<=(x506/(x507/x508)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x510 = INT8_MIN;
	int32_t x511 = -1;
	uint64_t x512 = 3474109576362LLU;
	int32_t t72 = -17;

    t72 = (x509<=(x510/(x511/x512)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x521 = -1;
	int32_t x522 = -14;
	volatile uint16_t x523 = 6443U;
	int16_t x524 = -1;
	volatile int32_t t73 = 35017;

    t73 = (x521<=(x522/(x523/x524)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x537 = INT32_MAX;
	static volatile uint32_t x538 = 365U;
	int16_t x539 = -1;
	static int32_t x540 = -1;
	int32_t t74 = -1;

    t74 = (x537<=(x538/(x539/x540)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x541 = INT32_MIN;
	volatile int16_t x542 = -1;
	static uint64_t x543 = UINT64_MAX;
	int8_t x544 = -1;
	volatile int32_t t75 = -56787527;

    t75 = (x541<=(x542/(x543/x544)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x546 = 4U;
	int8_t x547 = -1;
	volatile uint64_t x548 = UINT64_MAX;
	volatile int32_t t76 = 5385141;

    t76 = (x545<=(x546/(x547/x548)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x553 = 935U;
	int64_t x555 = -1LL;
	volatile int8_t x556 = 1;

    t77 = (x553<=(x554/(x555/x556)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x558 = UINT64_MAX;
	uint64_t x559 = 657564LLU;
	uint8_t x560 = UINT8_MAX;
	volatile int32_t t78 = -113062946;

    t78 = (x557<=(x558/(x559/x560)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x561 = 20U;
	int64_t x562 = -1LL;
	static int32_t x563 = INT32_MIN;
	uint64_t x564 = 971LLU;
	static int32_t t79 = 10;

    t79 = (x561<=(x562/(x563/x564)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x565 = 191674960974727337LLU;
	static int64_t x566 = INT64_MAX;
	volatile int64_t x568 = -1LL;
	volatile int32_t t80 = -2;

    t80 = (x565<=(x566/(x567/x568)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x569 = -28;
	int8_t x570 = -4;
	static int32_t x571 = INT32_MIN;
	int16_t x572 = -26;
	int32_t t81 = 1;

    t81 = (x569<=(x570/(x571/x572)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x581 = UINT8_MAX;
	uint16_t x583 = UINT16_MAX;
	int16_t x584 = -3;

    t82 = (x581<=(x582/(x583/x584)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x586 = INT8_MAX;
	int32_t x587 = INT32_MIN;
	int16_t x588 = 3386;

    t83 = (x585<=(x586/(x587/x588)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x593 = INT32_MIN;
	int16_t x595 = -1;
	uint32_t x596 = 60408673U;
	volatile int32_t t84 = -768859;

    t84 = (x593<=(x594/(x595/x596)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x609 = -1;
	static volatile int8_t x610 = -1;
	int16_t x611 = INT16_MIN;
	int8_t x612 = -13;

    t85 = (x609<=(x610/(x611/x612)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x633 = INT64_MIN;
	uint16_t x634 = 267U;
	int64_t x635 = INT64_MIN;
	volatile uint16_t x636 = 877U;
	volatile int32_t t86 = 91;

    t86 = (x633<=(x634/(x635/x636)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x642 = 0U;
	int8_t x643 = INT8_MAX;
	uint8_t x644 = 6U;
	int32_t t87 = 21750;

    t87 = (x641<=(x642/(x643/x644)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x645 = INT64_MAX;
	volatile int64_t x646 = 323291416107LL;
	uint64_t x647 = UINT64_MAX;
	int16_t x648 = INT16_MAX;

    t88 = (x645<=(x646/(x647/x648)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x654 = 4287232981286754657LL;
	int16_t x655 = INT16_MIN;
	int8_t x656 = INT8_MAX;
	int32_t t89 = -603141519;

    t89 = (x653<=(x654/(x655/x656)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x658 = INT8_MIN;
	int64_t x659 = -428539827LL;
	uint16_t x660 = 5U;
	int32_t t90 = -23;

    t90 = (x657<=(x658/(x659/x660)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x665 = 59U;
	uint64_t x667 = UINT64_MAX;
	uint64_t x668 = 7LLU;
	int32_t t91 = -58211526;

    t91 = (x665<=(x666/(x667/x668)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x669 = 1000679278230436559LLU;
	int32_t x670 = 258451594;
	int64_t x671 = INT64_MAX;
	static volatile uint32_t x672 = 1U;
	static int32_t t92 = 1310;

    t92 = (x669<=(x670/(x671/x672)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x673 = 58972835308389128LL;
	volatile int32_t x674 = -1;
	int8_t x675 = INT8_MIN;
	static int64_t x676 = -61LL;
	int32_t t93 = -14110;

    t93 = (x673<=(x674/(x675/x676)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x685 = 1;
	uint32_t x686 = 510U;
	int32_t x687 = -1;
	uint32_t x688 = 1U;
	int32_t t94 = -16634637;

    t94 = (x685<=(x686/(x687/x688)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x698 = 138778864U;
	int16_t x699 = INT16_MIN;
	static int8_t x700 = INT8_MIN;
	volatile int32_t t95 = 1052;

    t95 = (x697<=(x698/(x699/x700)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x709 = 196U;
	int32_t x710 = 16;
	int8_t x711 = INT8_MIN;
	static int8_t x712 = -48;
	int32_t t96 = 265132539;

    t96 = (x709<=(x710/(x711/x712)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x713 = 345;
	uint16_t x714 = 2U;
	volatile uint8_t x715 = 57U;
	static int16_t x716 = -1;
	int32_t t97 = 0;

    t97 = (x713<=(x714/(x715/x716)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x722 = -1;
	uint64_t x723 = UINT64_MAX;
	uint64_t x724 = UINT64_MAX;
	int32_t t98 = 195333618;

    t98 = (x721<=(x722/(x723/x724)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x726 = INT32_MIN;
	int64_t x727 = INT64_MIN;
	int32_t t99 = -329134698;

    t99 = (x725<=(x726/(x727/x728)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x729 = -1LL;
	volatile int32_t x730 = INT32_MIN;
	volatile int64_t x731 = INT64_MIN;
	uint8_t x732 = 23U;

    t100 = (x729<=(x730/(x731/x732)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x737 = UINT32_MAX;
	int8_t x738 = -1;
	static int64_t x739 = -5087228719LL;
	int8_t x740 = -8;
	volatile int32_t t101 = 5;

    t101 = (x737<=(x738/(x739/x740)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x742 = INT8_MAX;
	volatile int8_t x744 = INT8_MIN;
	static volatile int32_t t102 = 4166;

    t102 = (x741<=(x742/(x743/x744)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x746 = 7U;
	volatile uint32_t x748 = 6693072U;
	int32_t t103 = 622;

    t103 = (x745<=(x746/(x747/x748)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x749 = 51362333U;
	int16_t x750 = INT16_MIN;
	int64_t x752 = -1LL;
	int32_t t104 = 563237;

    t104 = (x749<=(x750/(x751/x752)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x765 = -1;
	int64_t x767 = 249LL;
	int8_t x768 = INT8_MIN;
	volatile int32_t t105 = -1;

    t105 = (x765<=(x766/(x767/x768)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x785 = 116U;
	uint64_t x786 = UINT64_MAX;
	volatile int64_t x787 = -1LL;
	static uint64_t x788 = 247654773180732LLU;
	volatile int32_t t106 = -934918;

    t106 = (x785<=(x786/(x787/x788)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x789 = -1;
	static int64_t x791 = -109429970674LL;
	int16_t x792 = 9433;
	volatile int32_t t107 = 351407;

    t107 = (x789<=(x790/(x791/x792)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x793 = -1;
	uint64_t x794 = 1103079089941LLU;
	volatile int8_t x795 = INT8_MIN;
	int8_t x796 = INT8_MIN;

    t108 = (x793<=(x794/(x795/x796)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x797 = INT8_MAX;
	volatile int32_t x798 = 9947;
	static volatile int32_t t109 = -3141;

    t109 = (x797<=(x798/(x799/x800)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x801 = -338773158LL;
	int8_t x802 = -1;
	int64_t x803 = INT64_MIN;
	static int64_t x804 = 4149735998LL;
	volatile int32_t t110 = 79;

    t110 = (x801<=(x802/(x803/x804)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x805 = -1;
	volatile int16_t x806 = 2274;
	int64_t x807 = INT64_MIN;
	static volatile int8_t x808 = INT8_MAX;
	int32_t t111 = 5183;

    t111 = (x805<=(x806/(x807/x808)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x809 = UINT16_MAX;
	static int64_t x810 = 71713243553257350LL;
	volatile uint16_t x811 = 1404U;
	uint32_t x812 = 7U;

    t112 = (x809<=(x810/(x811/x812)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x813 = -3;
	static int16_t x815 = INT16_MIN;
	volatile int32_t x816 = -1;
	int32_t t113 = -263164572;

    t113 = (x813<=(x814/(x815/x816)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x817 = 3740962U;
	uint64_t x819 = UINT64_MAX;
	int64_t x820 = -1LL;

    t114 = (x817<=(x818/(x819/x820)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x838 = INT8_MIN;
	static int64_t x839 = INT64_MAX;
	static int64_t x840 = 11801569048LL;
	int32_t t115 = -1232845;

    t115 = (x837<=(x838/(x839/x840)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x845 = 13380321090LLU;
	volatile uint32_t x846 = 973081U;
	uint32_t x847 = 1145469U;
	int32_t t116 = 7740;

    t116 = (x845<=(x846/(x847/x848)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x861 = 1591LLU;
	uint16_t x862 = 2U;
	int32_t x863 = -74217;
	int8_t x864 = INT8_MAX;
	int32_t t117 = -1614;

    t117 = (x861<=(x862/(x863/x864)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x865 = 1275193065974515995LL;
	uint16_t x868 = 250U;
	volatile int32_t t118 = -387011903;

    t118 = (x865<=(x866/(x867/x868)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x893 = 47546647;
	uint16_t x894 = 13U;
	static int64_t x895 = 180037607898114891LL;
	int8_t x896 = 11;

    t119 = (x893<=(x894/(x895/x896)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x897 = 70U;
	volatile uint8_t x898 = 0U;
	static int64_t x899 = 417175952LL;
	int32_t t120 = 3088;

    t120 = (x897<=(x898/(x899/x900)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x909 = 63772695193224LL;
	volatile uint16_t x910 = UINT16_MAX;
	static uint32_t x911 = UINT32_MAX;
	int32_t x912 = -41547;
	int32_t t121 = -1;

    t121 = (x909<=(x910/(x911/x912)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x913 = INT32_MAX;
	int16_t x914 = INT16_MAX;
	volatile int32_t t122 = -29853;

    t122 = (x913<=(x914/(x915/x916)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x929 = -244285724;
	int8_t x931 = -14;
	int8_t x932 = -1;
	volatile int32_t t123 = 6;

    t123 = (x929<=(x930/(x931/x932)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x937 = 9590U;
	int16_t x938 = INT16_MIN;
	uint32_t x940 = 7177U;
	static volatile int32_t t124 = 7905616;

    t124 = (x937<=(x938/(x939/x940)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x945 = 336U;
	static int64_t x946 = 68683LL;
	static int32_t x947 = -374882;
	static uint16_t x948 = 3U;
	volatile int32_t t125 = -18841289;

    t125 = (x945<=(x946/(x947/x948)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x950 = -1LL;
	static volatile uint16_t x951 = 8U;
	int8_t x952 = -1;
	static volatile int32_t t126 = -44873;

    t126 = (x949<=(x950/(x951/x952)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x953 = -1LL;
	static volatile int8_t x956 = INT8_MIN;

    t127 = (x953<=(x954/(x955/x956)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x965 = UINT32_MAX;
	volatile int64_t x966 = -1LL;
	int32_t x967 = INT32_MAX;
	int16_t x968 = INT16_MIN;
	int32_t t128 = 5359;

    t128 = (x965<=(x966/(x967/x968)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x969 = 284766767761218LLU;
	volatile uint32_t x970 = UINT32_MAX;
	static int32_t t129 = -803295;

    t129 = (x969<=(x970/(x971/x972)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x978 = 34157835641965LLU;
	static volatile uint16_t x979 = 84U;
	static int8_t x980 = 7;
	volatile int32_t t130 = -318;

    t130 = (x977<=(x978/(x979/x980)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x989 = INT8_MIN;
	uint32_t x990 = UINT32_MAX;
	volatile int64_t x991 = 64696LL;
	volatile int32_t t131 = -146;

    t131 = (x989<=(x990/(x991/x992)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x995 = -1;
	static int16_t x996 = -1;
	int32_t t132 = -21;

    t132 = (x993<=(x994/(x995/x996)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x1005 = 4U;
	int64_t x1006 = -1LL;
	int32_t x1007 = INT32_MIN;
	uint32_t x1008 = 2262255U;
	volatile int32_t t133 = -216808709;

    t133 = (x1005<=(x1006/(x1007/x1008)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x1013 = 5;
	volatile uint8_t x1014 = 6U;
	volatile int8_t x1015 = -29;
	uint64_t x1016 = 43LLU;
	volatile int32_t t134 = -2;

    t134 = (x1013<=(x1014/(x1015/x1016)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x1017 = 2351388;
	uint32_t x1020 = 5U;
	volatile int32_t t135 = 184451;

    t135 = (x1017<=(x1018/(x1019/x1020)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x1021 = 1U;
	int16_t x1022 = -1;
	volatile int16_t x1023 = -1;
	int8_t x1024 = -1;
	int32_t t136 = -168765622;

    t136 = (x1021<=(x1022/(x1023/x1024)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x1033 = 61U;
	uint64_t x1034 = UINT64_MAX;
	int64_t x1035 = -1LL;
	uint64_t x1036 = UINT64_MAX;
	volatile int32_t t137 = -6190781;

    t137 = (x1033<=(x1034/(x1035/x1036)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x1042 = 5436U;
	uint64_t x1043 = 1333982847656121LLU;

    t138 = (x1041<=(x1042/(x1043/x1044)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1049 = 7U;
	volatile int16_t x1050 = INT16_MAX;
	static int32_t x1051 = INT32_MIN;
	uint32_t x1052 = 4447U;
	static volatile int32_t t139 = 110855473;

    t139 = (x1049<=(x1050/(x1051/x1052)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x1054 = 28;
	uint32_t x1055 = UINT32_MAX;
	int8_t x1056 = INT8_MAX;
	int32_t t140 = 8161;

    t140 = (x1053<=(x1054/(x1055/x1056)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x1061 = 2045U;
	int32_t x1062 = INT32_MIN;
	int64_t x1064 = -1LL;

    t141 = (x1061<=(x1062/(x1063/x1064)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1073 = INT8_MIN;
	volatile int8_t x1074 = -1;
	static int64_t x1075 = 60776903000529468LL;
	static int16_t x1076 = -983;
	static int32_t t142 = -395;

    t142 = (x1073<=(x1074/(x1075/x1076)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x1079 = 1495991688424789LL;
	int16_t x1080 = INT16_MAX;
	int32_t t143 = 95001515;

    t143 = (x1077<=(x1078/(x1079/x1080)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1090 = INT16_MIN;
	volatile int32_t t144 = 10389201;

    t144 = (x1089<=(x1090/(x1091/x1092)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x1101 = INT16_MIN;
	uint32_t x1102 = 51662U;
	int32_t t145 = -128219235;

    t145 = (x1101<=(x1102/(x1103/x1104)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x1113 = -69;
	int64_t x1114 = 121LL;
	uint16_t x1115 = 64U;

    t146 = (x1113<=(x1114/(x1115/x1116)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1117 = -1;
	volatile int32_t x1118 = -1;
	uint32_t x1119 = UINT32_MAX;
	volatile uint16_t x1120 = UINT16_MAX;
	int32_t t147 = 193;

    t147 = (x1117<=(x1118/(x1119/x1120)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1121 = 25440U;
	volatile int32_t x1122 = -723830;
	volatile int32_t t148 = 23120;

    t148 = (x1121<=(x1122/(x1123/x1124)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1133 = INT16_MIN;
	int16_t x1134 = -970;
	static int32_t x1135 = 9987388;
	static int64_t x1136 = 2LL;
	int32_t t149 = -14;

    t149 = (x1133<=(x1134/(x1135/x1136)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x1142 = 762U;
	int16_t x1143 = INT16_MIN;
	uint8_t x1144 = 3U;
	volatile int32_t t150 = 5748;

    t150 = (x1141<=(x1142/(x1143/x1144)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x1161 = INT8_MIN;
	uint8_t x1162 = 1U;
	uint64_t x1163 = UINT64_MAX;
	int8_t x1164 = -1;

    t151 = (x1161<=(x1162/(x1163/x1164)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1166 = -1;
	volatile int32_t t152 = -4293;

    t152 = (x1165<=(x1166/(x1167/x1168)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1169 = -22;
	volatile int8_t x1170 = INT8_MIN;
	int32_t x1171 = -207;

    t153 = (x1169<=(x1170/(x1171/x1172)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x1173 = 119U;
	static int8_t x1174 = INT8_MIN;
	static int16_t x1176 = -1;

    t154 = (x1173<=(x1174/(x1175/x1176)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x1185 = -11;
	static volatile int16_t x1186 = INT16_MIN;
	int64_t x1187 = -6356069LL;
	static int32_t t155 = 605767271;

    t155 = (x1185<=(x1186/(x1187/x1188)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1189 = -18524;
	volatile int8_t x1190 = -1;
	int32_t x1191 = INT32_MIN;
	int32_t t156 = 239905874;

    t156 = (x1189<=(x1190/(x1191/x1192)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x1197 = INT8_MIN;
	volatile int32_t x1198 = INT32_MAX;
	static int64_t x1199 = INT64_MIN;
	volatile uint32_t x1200 = 1U;
	int32_t t157 = 78;

    t157 = (x1197<=(x1198/(x1199/x1200)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x1217 = UINT64_MAX;
	volatile int32_t x1219 = INT32_MAX;
	volatile uint8_t x1220 = 53U;

    t158 = (x1217<=(x1218/(x1219/x1220)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x1229 = -1;
	static volatile uint64_t x1231 = 41154853LLU;
	static int32_t t159 = 27;

    t159 = (x1229<=(x1230/(x1231/x1232)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1238 = INT16_MIN;
	static uint64_t x1239 = UINT64_MAX;
	int8_t x1240 = 1;
	int32_t t160 = -76;

    t160 = (x1237<=(x1238/(x1239/x1240)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1241 = 3908409;
	int16_t x1242 = -1;
	uint16_t x1243 = UINT16_MAX;
	static int16_t x1244 = -1;
	int32_t t161 = -121;

    t161 = (x1241<=(x1242/(x1243/x1244)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x1245 = INT64_MIN;
	int16_t x1246 = 534;
	int64_t x1247 = INT64_MIN;
	uint32_t x1248 = 272U;
	int32_t t162 = -11427;

    t162 = (x1245<=(x1246/(x1247/x1248)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1257 = INT8_MIN;
	static volatile int32_t x1258 = INT32_MAX;
	static uint32_t x1260 = 10U;
	int32_t t163 = 199743836;

    t163 = (x1257<=(x1258/(x1259/x1260)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1266 = -1;
	static uint16_t x1268 = UINT16_MAX;
	int32_t t164 = -1753;

    t164 = (x1265<=(x1266/(x1267/x1268)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1271 = INT8_MIN;
	uint8_t x1272 = 6U;
	static int32_t t165 = -404;

    t165 = (x1269<=(x1270/(x1271/x1272)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x1273 = 7;
	int8_t x1274 = INT8_MIN;
	int8_t x1275 = -1;
	volatile int32_t x1276 = -1;
	int32_t t166 = 115;

    t166 = (x1273<=(x1274/(x1275/x1276)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x1281 = INT8_MIN;
	int16_t x1282 = INT16_MIN;
	int32_t x1283 = INT32_MAX;
	static int32_t x1284 = 14609866;
	int32_t t167 = 26;

    t167 = (x1281<=(x1282/(x1283/x1284)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1310 = 0U;
	static int32_t x1311 = INT32_MAX;
	static int16_t x1312 = -2;

    t168 = (x1309<=(x1310/(x1311/x1312)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x1313 = 61;
	int32_t t169 = -4346019;

    t169 = (x1313<=(x1314/(x1315/x1316)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1317 = 0LLU;
	volatile uint8_t x1318 = UINT8_MAX;
	volatile uint16_t x1320 = UINT16_MAX;
	int32_t t170 = 467464684;

    t170 = (x1317<=(x1318/(x1319/x1320)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1321 = INT16_MIN;
	int32_t x1322 = INT32_MIN;
	static volatile int64_t x1323 = INT64_MIN;
	int16_t x1324 = INT16_MAX;

    t171 = (x1321<=(x1322/(x1323/x1324)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1325 = 39073U;
	static int16_t x1326 = -2222;
	int64_t x1327 = INT64_MIN;
	static int32_t x1328 = INT32_MIN;
	static int32_t t172 = 296899;

    t172 = (x1325<=(x1326/(x1327/x1328)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1333 = INT64_MAX;
	volatile uint32_t x1334 = 21541U;
	static volatile int32_t x1335 = INT32_MIN;
	static uint16_t x1336 = 13359U;
	int32_t t173 = 28;

    t173 = (x1333<=(x1334/(x1335/x1336)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1337 = INT8_MIN;
	volatile uint32_t x1340 = 36U;
	volatile int32_t t174 = -1681;

    t174 = (x1337<=(x1338/(x1339/x1340)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1342 = -1;
	uint64_t x1343 = UINT64_MAX;
	int32_t t175 = -307;

    t175 = (x1341<=(x1342/(x1343/x1344)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x1349 = -1;
	volatile uint8_t x1350 = 2U;
	uint64_t x1352 = UINT64_MAX;

    t176 = (x1349<=(x1350/(x1351/x1352)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1353 = INT8_MIN;
	volatile int64_t x1354 = INT64_MAX;
	volatile int16_t x1355 = -1;
	uint32_t x1356 = 713U;
	static int32_t t177 = -9;

    t177 = (x1353<=(x1354/(x1355/x1356)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x1365 = 1;
	volatile uint64_t x1366 = 270195197200671LLU;
	int8_t x1367 = -1;
	volatile uint32_t x1368 = UINT32_MAX;
	volatile int32_t t178 = 997972774;

    t178 = (x1365<=(x1366/(x1367/x1368)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1369 = INT64_MIN;
	int8_t x1370 = -11;
	int32_t x1371 = INT32_MIN;
	int32_t x1372 = INT32_MAX;
	int32_t t179 = -11;

    t179 = (x1369<=(x1370/(x1371/x1372)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x1381 = 183810681278342466LLU;
	uint32_t x1382 = 8204U;
	int64_t x1383 = -5172032055417926LL;
	volatile int32_t t180 = 3148;

    t180 = (x1381<=(x1382/(x1383/x1384)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x1386 = UINT8_MAX;
	static volatile int16_t x1387 = -1;
	int32_t t181 = 40;

    t181 = (x1385<=(x1386/(x1387/x1388)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1393 = -10070LL;
	static int16_t x1394 = -1;
	static uint64_t x1395 = UINT64_MAX;
	uint16_t x1396 = 998U;
	volatile int32_t t182 = -23084273;

    t182 = (x1393<=(x1394/(x1395/x1396)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1397 = INT64_MIN;
	volatile uint16_t x1398 = 35U;
	int32_t x1399 = INT32_MIN;
	uint64_t x1400 = 4LLU;
	volatile int32_t t183 = -1001980;

    t183 = (x1397<=(x1398/(x1399/x1400)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1405 = INT8_MAX;
	static uint8_t x1406 = 1U;
	int16_t x1407 = INT16_MIN;
	static int8_t x1408 = INT8_MIN;
	int32_t t184 = 4;

    t184 = (x1405<=(x1406/(x1407/x1408)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1425 = INT64_MIN;
	uint8_t x1426 = 0U;
	int32_t x1428 = -1;
	int32_t t185 = -5049;

    t185 = (x1425<=(x1426/(x1427/x1428)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1429 = UINT32_MAX;
	static uint32_t x1431 = 172U;

    t186 = (x1429<=(x1430/(x1431/x1432)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1433 = -1;
	volatile uint64_t x1435 = 393995651528628LLU;
	uint64_t x1436 = 43419200764151LLU;
	int32_t t187 = 1;

    t187 = (x1433<=(x1434/(x1435/x1436)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1437 = UINT8_MAX;
	static volatile int64_t x1438 = INT64_MIN;
	int64_t x1439 = INT64_MIN;
	volatile uint64_t x1440 = 240LLU;
	volatile int32_t t188 = -14496389;

    t188 = (x1437<=(x1438/(x1439/x1440)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1441 = 335564837475LLU;
	uint32_t x1442 = 67U;
	static int64_t x1443 = -1LL;
	static uint64_t x1444 = 2050936322101LLU;

    t189 = (x1441<=(x1442/(x1443/x1444)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1445 = 0U;
	static uint32_t x1446 = 101940592U;
	uint64_t x1447 = UINT64_MAX;
	volatile int32_t x1448 = INT32_MIN;
	volatile int32_t t190 = -5069089;

    t190 = (x1445<=(x1446/(x1447/x1448)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1450 = 7970U;
	static int8_t x1452 = 31;
	int32_t t191 = 3274009;

    t191 = (x1449<=(x1450/(x1451/x1452)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1453 = INT64_MIN;
	int8_t x1454 = INT8_MIN;
	volatile uint64_t x1455 = UINT64_MAX;
	int16_t x1456 = -1;
	static int32_t t192 = -81805;

    t192 = (x1453<=(x1454/(x1455/x1456)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1457 = UINT16_MAX;
	volatile int64_t x1458 = INT64_MIN;
	volatile int64_t x1459 = -474129852LL;
	static int16_t x1460 = -1;
	volatile int32_t t193 = 45;

    t193 = (x1457<=(x1458/(x1459/x1460)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1461 = UINT64_MAX;
	int8_t x1463 = INT8_MIN;
	int8_t x1464 = INT8_MIN;
	volatile int32_t t194 = -11425;

    t194 = (x1461<=(x1462/(x1463/x1464)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1465 = -1;
	int32_t x1466 = -31;
	int64_t x1467 = 4825031840LL;
	int16_t x1468 = 13;

    t195 = (x1465<=(x1466/(x1467/x1468)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1469 = INT16_MAX;
	int32_t x1470 = INT32_MIN;
	static uint64_t x1471 = 9739155462497LLU;

    t196 = (x1469<=(x1470/(x1471/x1472)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1489 = UINT16_MAX;
	int32_t x1490 = INT32_MAX;
	volatile int16_t x1491 = INT16_MIN;
	int8_t x1492 = 19;
	static volatile int32_t t197 = -59;

    t197 = (x1489<=(x1490/(x1491/x1492)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1501 = 1782801;
	static volatile int32_t x1502 = INT32_MIN;
	volatile int64_t x1503 = -420833206120LL;
	int64_t x1504 = -536845LL;
	int32_t t198 = 715252;

    t198 = (x1501<=(x1502/(x1503/x1504)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1509 = 0;
	static int32_t x1510 = -1;
	uint64_t x1511 = 2607328663389182422LLU;
	uint32_t x1512 = UINT32_MAX;
	volatile int32_t t199 = -60;

    t199 = (x1509<=(x1510/(x1511/x1512)));

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

