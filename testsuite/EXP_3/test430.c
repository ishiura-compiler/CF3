
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

int32_t x5 = -1;
int8_t x8 = INT8_MIN;
static int32_t x11 = -110;
uint32_t x55 = 126837U;
uint64_t x73 = 74315740405248134LLU;
uint8_t x75 = 0U;
uint16_t x80 = UINT16_MAX;
int32_t t6 = -106807085;
int64_t x89 = 0LL;
volatile uint8_t x94 = 0U;
int64_t x95 = -197LL;
uint8_t x96 = UINT8_MAX;
int16_t x100 = INT16_MIN;
int32_t t9 = -244664728;
int32_t t12 = -86;
int32_t x126 = -1;
uint16_t x128 = 25U;
int32_t t15 = -14092;
int8_t x130 = INT8_MIN;
uint16_t x138 = 1720U;
int16_t x139 = -1;
static uint32_t x140 = 188565U;
uint32_t x151 = 61355U;
int32_t t19 = 148060824;
static uint32_t x155 = 0U;
static int64_t x178 = -1LL;
int16_t x180 = -1161;
static uint8_t x185 = UINT8_MAX;
int64_t x186 = -1LL;
int32_t t23 = -243184936;
int64_t x192 = 4202509196051838LL;
volatile int32_t t24 = 6;
int8_t x198 = INT8_MAX;
int64_t x201 = -1LL;
int32_t t27 = -27250;
int32_t t28 = -36634890;
volatile int8_t x234 = -1;
int16_t x235 = -1;
int8_t x236 = 4;
volatile int32_t t30 = 25946;
uint64_t x246 = 18606430547668748LLU;
volatile int32_t t34 = 2090109;
uint64_t x262 = 3312LLU;
int32_t x263 = -1;
uint32_t x265 = 1301432U;
static volatile int64_t x268 = INT64_MIN;
int32_t t36 = -145017;
uint32_t x279 = 56U;
static int64_t x306 = -1LL;
volatile int32_t t40 = -60;
int16_t x335 = -7;
volatile int32_t t41 = 95;
int16_t x344 = -1;
uint16_t x346 = 11U;
uint32_t x347 = 3898536U;
int32_t t44 = -598;
static uint32_t x350 = 317364U;
int16_t x351 = INT16_MIN;
volatile int8_t x354 = INT8_MIN;
int32_t t47 = -41;
volatile int8_t x371 = -1;
uint32_t x372 = 5763422U;
int8_t x381 = -5;
static int16_t x383 = INT16_MAX;
volatile int32_t t49 = -275340;
int16_t x397 = -1;
static uint8_t x400 = 0U;
int32_t x403 = 165953;
int8_t x409 = -1;
volatile int16_t x410 = 743;
int8_t x417 = 42;
volatile int32_t t54 = 32011;
uint32_t x426 = UINT32_MAX;
static uint64_t x430 = UINT64_MAX;
volatile uint8_t x433 = 45U;
static uint8_t x434 = 43U;
uint64_t x436 = 25319LLU;
static uint8_t x441 = UINT8_MAX;
volatile int64_t x442 = -1LL;
int16_t x449 = 24;
volatile int16_t x460 = INT16_MIN;
static int32_t t61 = -1;
volatile uint16_t x465 = 30U;
uint64_t x466 = 7690705500534471LLU;
static int8_t x472 = -1;
int8_t x474 = 5;
uint64_t x481 = 178218LLU;
uint64_t x484 = UINT64_MAX;
int16_t x487 = INT16_MIN;
volatile int16_t x507 = INT16_MAX;
int16_t x508 = -1529;
int64_t x510 = 92352320390435559LL;
volatile uint64_t x520 = 0LLU;
int32_t t74 = 688762;
int64_t x522 = -1LL;
int64_t x523 = 52LL;
volatile int16_t x538 = -13;
int8_t x554 = -1;
volatile int32_t t80 = -1;
int16_t x562 = INT16_MAX;
int8_t x567 = -1;
static int16_t x581 = INT16_MIN;
static volatile int16_t x583 = INT16_MIN;
uint16_t x599 = 1217U;
int8_t x600 = -1;
volatile int32_t t87 = 0;
uint32_t x604 = UINT32_MAX;
uint64_t x616 = 5278LLU;
uint16_t x620 = 868U;
volatile uint64_t x634 = 26LLU;
uint32_t x640 = 7972U;
volatile int8_t x643 = 22;
uint16_t x648 = 7U;
int8_t x657 = 23;
static int8_t x660 = INT8_MAX;
static int64_t x667 = -60LL;
uint16_t x668 = 2045U;
uint16_t x671 = 12U;
volatile int32_t t99 = -223956;
int64_t x697 = -1LL;
uint32_t x698 = UINT32_MAX;
int64_t x701 = -1LL;
int8_t x707 = -1;
volatile uint16_t x732 = 0U;
int32_t t106 = 777;
int64_t x750 = 1580857796603LL;
volatile int32_t t109 = -1055223;
int8_t x764 = INT8_MIN;
int64_t x765 = INT64_MIN;
volatile int32_t x767 = INT32_MIN;
static int32_t t111 = 181567065;
volatile int32_t x771 = -54;
int64_t x773 = INT64_MAX;
uint16_t x781 = 504U;
int16_t x782 = -1;
static int8_t x786 = INT8_MAX;
volatile int32_t t115 = -2;
uint64_t x798 = 6624361016LLU;
volatile uint64_t x801 = 12071LLU;
int8_t x810 = 1;
int8_t x831 = INT8_MAX;
int32_t t124 = 5;
volatile uint32_t x870 = 104U;
int32_t t127 = -1;
volatile int32_t t128 = 11789;
int16_t x893 = -1;
volatile int64_t x902 = 15030641250891LL;
int32_t x904 = -1;
int32_t x912 = INT32_MAX;
static int32_t x913 = -12549;
int32_t x918 = -1;
uint8_t x925 = 7U;
int32_t t136 = 3781;
uint16_t x929 = 2U;
static volatile int32_t x949 = -15;
static volatile int32_t t140 = 252709643;
uint32_t x958 = 3551U;
int32_t x962 = 0;
static int32_t x976 = 222433;
int16_t x983 = -1092;
int32_t t148 = 685181;
uint16_t x1001 = 4U;
int64_t x1004 = 319301LL;
uint64_t x1009 = UINT64_MAX;
int16_t x1010 = INT16_MIN;
static volatile int8_t x1012 = -12;
static int32_t x1041 = -1;
uint16_t x1052 = 4U;
int64_t x1053 = 101213868217LL;
int32_t t161 = 15436087;
int32_t x1072 = INT32_MIN;
int32_t x1074 = -1;
static volatile int32_t t164 = 28935098;
volatile int32_t t165 = 1;
uint64_t x1088 = 374427657515LLU;
volatile int32_t t167 = -25897;
volatile int8_t x1127 = -7;
int8_t x1135 = INT8_MIN;
uint16_t x1136 = 10U;
int8_t x1137 = -5;
int32_t t176 = 16;
volatile int8_t x1159 = -1;
static int16_t x1160 = INT16_MIN;
static int16_t x1170 = -25;
int16_t x1174 = INT16_MIN;
int32_t x1189 = INT32_MIN;
volatile uint64_t x1191 = 273148LLU;
volatile uint16_t x1192 = 9618U;
uint32_t x1195 = 6U;
int8_t x1215 = INT8_MAX;
volatile int8_t x1221 = INT8_MAX;
int16_t x1223 = INT16_MIN;
int16_t x1230 = 14104;
static int32_t t189 = 178;
volatile int32_t t191 = -1058500248;
int64_t x1257 = -1LL;
static uint16_t x1258 = 9833U;
volatile int32_t t192 = 15;
uint8_t x1271 = 116U;
static int8_t x1274 = INT8_MIN;
uint32_t x1291 = 3387U;
volatile int32_t t197 = 6612018;
volatile int32_t t198 = 211;


void f0(void) {
    	static int8_t x1 = INT8_MAX;
	volatile uint64_t x2 = 0LLU;
	uint16_t x3 = 6U;
	static int64_t x4 = 5456487380208LL;
	static volatile int32_t t0 = 1238;

    t0 = ((x1*x2)<=(x3*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = -25;
	uint8_t x7 = 7U;
	volatile int32_t t1 = -15137;

    t1 = ((x5*x6)<=(x7*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	volatile int32_t x10 = 3;
	static int16_t x12 = INT16_MIN;
	int32_t t2 = 7;

    t2 = ((x9*x10)<=(x11*x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x17 = UINT8_MAX;
	int16_t x18 = 1;
	uint16_t x19 = 998U;
	volatile uint16_t x20 = 5731U;
	volatile int32_t t3 = -1354;

    t3 = ((x17*x18)<=(x19*x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x53 = UINT8_MAX;
	volatile uint16_t x54 = UINT16_MAX;
	volatile int8_t x56 = INT8_MIN;
	int32_t t4 = -12933624;

    t4 = ((x53*x54)<=(x55*x56));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x74 = 23545524406539LLU;
	int32_t x76 = INT32_MAX;
	static volatile int32_t t5 = -20195;

    t5 = ((x73*x74)<=(x75*x76));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x77 = -1;
	static uint8_t x78 = 3U;
	uint16_t x79 = 34U;

    t6 = ((x77*x78)<=(x79*x80));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x90 = INT8_MIN;
	static int16_t x91 = INT16_MAX;
	uint16_t x92 = 13U;
	int32_t t7 = 147460;

    t7 = ((x89*x90)<=(x91*x92));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x93 = -62152805550LL;
	int32_t t8 = -3962120;

    t8 = ((x93*x94)<=(x95*x96));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x97 = 1U;
	static volatile int16_t x98 = INT16_MIN;
	uint64_t x99 = 55705415785LLU;

    t9 = ((x97*x98)<=(x99*x100));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x105 = 30U;
	int16_t x106 = INT16_MAX;
	uint64_t x107 = UINT64_MAX;
	int64_t x108 = -1LL;
	int32_t t10 = 38;

    t10 = ((x105*x106)<=(x107*x108));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x109 = INT32_MAX;
	int8_t x110 = -1;
	int8_t x111 = INT8_MIN;
	volatile uint64_t x112 = 23880989LLU;
	int32_t t11 = 1;

    t11 = ((x109*x110)<=(x111*x112));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x113 = -1LL;
	volatile int16_t x114 = -15515;
	static uint32_t x115 = 679130U;
	int8_t x116 = INT8_MIN;

    t12 = ((x113*x114)<=(x115*x116));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x117 = -1;
	int16_t x118 = INT16_MAX;
	int8_t x119 = -29;
	static uint16_t x120 = 0U;
	volatile int32_t t13 = 0;

    t13 = ((x117*x118)<=(x119*x120));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x121 = 136584732127LLU;
	uint64_t x122 = 264LLU;
	static int32_t x123 = -1;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t14 = 2134883;

    t14 = ((x121*x122)<=(x123*x124));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint32_t x125 = UINT32_MAX;
	static uint8_t x127 = 7U;

    t15 = ((x125*x126)<=(x127*x128));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x129 = 44522867LLU;
	int32_t x131 = -1;
	int16_t x132 = INT16_MIN;
	volatile int32_t t16 = 3417;

    t16 = ((x129*x130)<=(x131*x132));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x133 = 2U;
	uint32_t x134 = 61009U;
	volatile uint64_t x135 = UINT64_MAX;
	int32_t x136 = INT32_MIN;
	volatile int32_t t17 = 28710;

    t17 = ((x133*x134)<=(x135*x136));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x137 = -9;
	int32_t t18 = 25;

    t18 = ((x137*x138)<=(x139*x140));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x149 = UINT32_MAX;
	static uint64_t x150 = UINT64_MAX;
	int32_t x152 = -358917647;

    t19 = ((x149*x150)<=(x151*x152));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x153 = 15U;
	static uint64_t x154 = UINT64_MAX;
	int64_t x156 = -16615998LL;
	int32_t t20 = -67494;

    t20 = ((x153*x154)<=(x155*x156));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x177 = -1;
	uint64_t x179 = UINT64_MAX;
	int32_t t21 = 1;

    t21 = ((x177*x178)<=(x179*x180));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x181 = INT8_MIN;
	int64_t x182 = -957LL;
	static int8_t x183 = 0;
	uint32_t x184 = 315U;
	static int32_t t22 = 252;

    t22 = ((x181*x182)<=(x183*x184));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x187 = 4U;
	uint8_t x188 = UINT8_MAX;

    t23 = ((x185*x186)<=(x187*x188));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x189 = INT8_MIN;
	volatile int16_t x190 = INT16_MIN;
	uint32_t x191 = 513U;

    t24 = ((x189*x190)<=(x191*x192));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x193 = INT16_MAX;
	int8_t x194 = -1;
	uint32_t x195 = 9700109U;
	uint8_t x196 = 5U;
	static int32_t t25 = -15076917;

    t25 = ((x193*x194)<=(x195*x196));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x197 = UINT32_MAX;
	volatile uint8_t x199 = 1U;
	uint16_t x200 = UINT16_MAX;
	int32_t t26 = 227840882;

    t26 = ((x197*x198)<=(x199*x200));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x202 = -2658;
	volatile uint64_t x203 = UINT64_MAX;
	volatile uint32_t x204 = 12U;

    t27 = ((x201*x202)<=(x203*x204));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x213 = -3115646433620LL;
	volatile uint8_t x214 = 16U;
	static uint32_t x215 = 332179070U;
	int32_t x216 = -1;

    t28 = ((x213*x214)<=(x215*x216));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x225 = UINT8_MAX;
	uint64_t x226 = 57052559391903993LLU;
	volatile int16_t x227 = -862;
	int8_t x228 = -3;
	static volatile int32_t t29 = 476574474;

    t29 = ((x225*x226)<=(x227*x228));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x233 = 40U;

    t30 = ((x233*x234)<=(x235*x236));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x237 = 17U;
	int16_t x238 = 3;
	int64_t x239 = -4253908580929406LL;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t31 = -54494;

    t31 = ((x237*x238)<=(x239*x240));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x241 = INT16_MAX;
	uint8_t x242 = 3U;
	int32_t x243 = 1;
	uint16_t x244 = UINT16_MAX;
	int32_t t32 = 448786947;

    t32 = ((x241*x242)<=(x243*x244));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x245 = -1;
	int64_t x247 = -11868LL;
	uint32_t x248 = UINT32_MAX;
	int32_t t33 = 2;

    t33 = ((x245*x246)<=(x247*x248));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x253 = -1LL;
	static int8_t x254 = INT8_MIN;
	int16_t x255 = -808;
	int16_t x256 = INT16_MIN;

    t34 = ((x253*x254)<=(x255*x256));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x261 = UINT64_MAX;
	uint64_t x264 = 250045950361480LLU;
	static volatile int32_t t35 = -745357507;

    t35 = ((x261*x262)<=(x263*x264));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint64_t x266 = 172295LLU;
	int8_t x267 = 0;

    t36 = ((x265*x266)<=(x267*x268));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x277 = -1LL;
	volatile uint32_t x278 = UINT32_MAX;
	int8_t x280 = INT8_MAX;
	volatile int32_t t37 = -580749;

    t37 = ((x277*x278)<=(x279*x280));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x305 = -1LL;
	static volatile int64_t x307 = -1LL;
	volatile int16_t x308 = -1;
	static int32_t t38 = -6;

    t38 = ((x305*x306)<=(x307*x308));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x309 = 1U;
	volatile int64_t x310 = -1LL;
	int64_t x311 = 13600998240625123LL;
	static int64_t x312 = -1LL;
	int32_t t39 = -555261242;

    t39 = ((x309*x310)<=(x311*x312));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x329 = INT16_MIN;
	static uint8_t x330 = UINT8_MAX;
	uint32_t x331 = UINT32_MAX;
	volatile uint32_t x332 = 1244460893U;

    t40 = ((x329*x330)<=(x331*x332));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x333 = INT16_MIN;
	int8_t x334 = 2;
	int16_t x336 = INT16_MIN;

    t41 = ((x333*x334)<=(x335*x336));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x337 = INT8_MIN;
	volatile int8_t x338 = INT8_MIN;
	int16_t x339 = 20;
	uint16_t x340 = 131U;
	int32_t t42 = -261028;

    t42 = ((x337*x338)<=(x339*x340));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x341 = UINT32_MAX;
	static uint8_t x342 = 9U;
	uint32_t x343 = 3546410U;
	volatile int32_t t43 = -220;

    t43 = ((x341*x342)<=(x343*x344));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x345 = -16;
	int32_t x348 = -1;

    t44 = ((x345*x346)<=(x347*x348));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x349 = INT16_MIN;
	int32_t x352 = -1;
	volatile int32_t t45 = 237;

    t45 = ((x349*x350)<=(x351*x352));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x353 = INT8_MIN;
	int8_t x355 = -1;
	volatile int64_t x356 = -563628822120539257LL;
	volatile int32_t t46 = -175705282;

    t46 = ((x353*x354)<=(x355*x356));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x365 = INT16_MAX;
	int16_t x366 = -1;
	int16_t x367 = INT16_MIN;
	volatile uint64_t x368 = 11143LLU;

    t47 = ((x365*x366)<=(x367*x368));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x369 = INT32_MIN;
	int64_t x370 = -190LL;
	volatile int32_t t48 = 11033;

    t48 = ((x369*x370)<=(x371*x372));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x382 = 673;
	uint32_t x384 = UINT32_MAX;

    t49 = ((x381*x382)<=(x383*x384));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x398 = 1469U;
	int16_t x399 = INT16_MIN;
	volatile int32_t t50 = -13;

    t50 = ((x397*x398)<=(x399*x400));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x401 = INT8_MIN;
	int32_t x402 = -94;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t51 = -114;

    t51 = ((x401*x402)<=(x403*x404));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x405 = INT8_MAX;
	volatile uint32_t x406 = UINT32_MAX;
	volatile int32_t x407 = -1;
	int8_t x408 = 11;
	volatile int32_t t52 = 11211;

    t52 = ((x405*x406)<=(x407*x408));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x411 = -1;
	uint32_t x412 = 39U;
	int32_t t53 = -9077012;

    t53 = ((x409*x410)<=(x411*x412));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x418 = UINT8_MAX;
	uint64_t x419 = 79680192687518854LLU;
	uint8_t x420 = 2U;

    t54 = ((x417*x418)<=(x419*x420));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x421 = INT8_MAX;
	uint16_t x422 = UINT16_MAX;
	uint64_t x423 = UINT64_MAX;
	static int16_t x424 = INT16_MIN;
	volatile int32_t t55 = -455704;

    t55 = ((x421*x422)<=(x423*x424));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x425 = 0;
	uint8_t x427 = 2U;
	int16_t x428 = -1;
	volatile int32_t t56 = -754766137;

    t56 = ((x425*x426)<=(x427*x428));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x429 = 1616350787550LLU;
	volatile int64_t x431 = -1LL;
	int16_t x432 = -1;
	static int32_t t57 = 131081640;

    t57 = ((x429*x430)<=(x431*x432));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x435 = -70;
	volatile int32_t t58 = 10;

    t58 = ((x433*x434)<=(x435*x436));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x443 = UINT16_MAX;
	static int64_t x444 = -59LL;
	int32_t t59 = 304;

    t59 = ((x441*x442)<=(x443*x444));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x450 = INT8_MIN;
	static int64_t x451 = 205144831731LL;
	static uint8_t x452 = 1U;
	volatile int32_t t60 = 30705639;

    t60 = ((x449*x450)<=(x451*x452));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x457 = -1LL;
	int16_t x458 = -1;
	static int8_t x459 = INT8_MIN;

    t61 = ((x457*x458)<=(x459*x460));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x467 = 43U;
	volatile int16_t x468 = -1;
	volatile int32_t t62 = -3378132;

    t62 = ((x465*x466)<=(x467*x468));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x469 = INT8_MIN;
	int64_t x470 = -1LL;
	volatile int16_t x471 = INT16_MIN;
	int32_t t63 = 415052462;

    t63 = ((x469*x470)<=(x471*x472));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x473 = UINT16_MAX;
	int16_t x475 = 3;
	uint16_t x476 = 338U;
	int32_t t64 = -3;

    t64 = ((x473*x474)<=(x475*x476));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x477 = 108;
	int32_t x478 = -1700482;
	uint32_t x479 = 13509063U;
	static uint8_t x480 = 2U;
	volatile int32_t t65 = -3191913;

    t65 = ((x477*x478)<=(x479*x480));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x482 = INT8_MAX;
	static uint64_t x483 = 5963122962890LLU;
	int32_t t66 = -22594;

    t66 = ((x481*x482)<=(x483*x484));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x485 = -639230;
	static uint8_t x486 = 2U;
	static volatile int8_t x488 = INT8_MIN;
	volatile int32_t t67 = -245821;

    t67 = ((x485*x486)<=(x487*x488));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x489 = 0U;
	int64_t x490 = -1LL;
	int64_t x491 = -4380080376044LL;
	volatile uint16_t x492 = UINT16_MAX;
	int32_t t68 = 1;

    t68 = ((x489*x490)<=(x491*x492));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x493 = INT8_MAX;
	volatile uint64_t x494 = UINT64_MAX;
	uint16_t x495 = 2U;
	int16_t x496 = -1;
	volatile int32_t t69 = 241;

    t69 = ((x493*x494)<=(x495*x496));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x497 = INT16_MIN;
	uint64_t x498 = 1LLU;
	uint64_t x499 = UINT64_MAX;
	volatile uint64_t x500 = 3128LLU;
	volatile int32_t t70 = 118;

    t70 = ((x497*x498)<=(x499*x500));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x501 = 806763U;
	uint32_t x502 = 13719U;
	uint8_t x503 = 2U;
	int16_t x504 = INT16_MIN;
	static int32_t t71 = 105402418;

    t71 = ((x501*x502)<=(x503*x504));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x505 = -1;
	uint32_t x506 = 116289152U;
	static int32_t t72 = 1071625997;

    t72 = ((x505*x506)<=(x507*x508));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x509 = -1;
	int8_t x511 = 0;
	int32_t x512 = INT32_MIN;
	volatile int32_t t73 = -171529;

    t73 = ((x509*x510)<=(x511*x512));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x517 = -1;
	int8_t x518 = 0;
	int16_t x519 = INT16_MIN;

    t74 = ((x517*x518)<=(x519*x520));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x521 = -63396927051LL;
	volatile int32_t x524 = -39149;
	volatile int32_t t75 = -108770074;

    t75 = ((x521*x522)<=(x523*x524));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x525 = INT16_MIN;
	uint16_t x526 = 2640U;
	volatile int16_t x527 = -1;
	int8_t x528 = INT8_MIN;
	volatile int32_t t76 = -22;

    t76 = ((x525*x526)<=(x527*x528));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x533 = 36000634127530626LLU;
	uint32_t x534 = 100737U;
	int8_t x535 = 55;
	int16_t x536 = INT16_MAX;
	int32_t t77 = -824697618;

    t77 = ((x533*x534)<=(x535*x536));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x537 = 0;
	int8_t x539 = 8;
	int32_t x540 = 1423514;
	static volatile int32_t t78 = 806200;

    t78 = ((x537*x538)<=(x539*x540));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x553 = -1LL;
	uint64_t x555 = 8575LLU;
	int64_t x556 = 28313203167970LL;
	int32_t t79 = -288;

    t79 = ((x553*x554)<=(x555*x556));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x557 = INT16_MAX;
	volatile int32_t x558 = -11405;
	int8_t x559 = -1;
	int32_t x560 = 107770301;

    t80 = ((x557*x558)<=(x559*x560));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x561 = INT8_MAX;
	static int8_t x563 = 0;
	int8_t x564 = INT8_MAX;
	static int32_t t81 = 122;

    t81 = ((x561*x562)<=(x563*x564));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x565 = -1;
	uint64_t x566 = 97590LLU;
	uint8_t x568 = 3U;
	int32_t t82 = 67290070;

    t82 = ((x565*x566)<=(x567*x568));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x569 = INT16_MIN;
	volatile int16_t x570 = 2653;
	volatile uint64_t x571 = 11987958857292LLU;
	int8_t x572 = INT8_MAX;
	int32_t t83 = 0;

    t83 = ((x569*x570)<=(x571*x572));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x582 = UINT16_MAX;
	volatile uint16_t x584 = UINT16_MAX;
	static int32_t t84 = 0;

    t84 = ((x581*x582)<=(x583*x584));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x589 = INT16_MAX;
	int16_t x590 = INT16_MIN;
	uint32_t x591 = UINT32_MAX;
	int16_t x592 = INT16_MIN;
	int32_t t85 = 7741;

    t85 = ((x589*x590)<=(x591*x592));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x593 = UINT8_MAX;
	int8_t x594 = 8;
	int32_t x595 = 114;
	int64_t x596 = 69820LL;
	int32_t t86 = 137448621;

    t86 = ((x593*x594)<=(x595*x596));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x597 = INT32_MAX;
	int16_t x598 = -1;

    t87 = ((x597*x598)<=(x599*x600));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x601 = 0;
	int16_t x602 = 1;
	volatile uint32_t x603 = UINT32_MAX;
	int32_t t88 = 19980;

    t88 = ((x601*x602)<=(x603*x604));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x613 = INT64_MAX;
	static int16_t x614 = -1;
	int16_t x615 = 7;
	int32_t t89 = 969017634;

    t89 = ((x613*x614)<=(x615*x616));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint64_t x617 = 32417133LLU;
	volatile int32_t x618 = -6;
	uint64_t x619 = 1514643921673LLU;
	int32_t t90 = -454876620;

    t90 = ((x617*x618)<=(x619*x620));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x633 = -1;
	int16_t x635 = INT16_MIN;
	volatile uint8_t x636 = 8U;
	volatile int32_t t91 = -4262421;

    t91 = ((x633*x634)<=(x635*x636));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x637 = 1843U;
	volatile int8_t x638 = 6;
	volatile int16_t x639 = -1;
	static volatile int32_t t92 = 1383036;

    t92 = ((x637*x638)<=(x639*x640));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x641 = -3;
	static uint8_t x642 = UINT8_MAX;
	uint8_t x644 = 77U;
	volatile int32_t t93 = -3821;

    t93 = ((x641*x642)<=(x643*x644));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x645 = 1U;
	int16_t x646 = INT16_MIN;
	int8_t x647 = 0;
	static int32_t t94 = -10812;

    t94 = ((x645*x646)<=(x647*x648));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x649 = -126462;
	volatile uint16_t x650 = 0U;
	uint8_t x651 = UINT8_MAX;
	static int16_t x652 = 93;
	volatile int32_t t95 = -5;

    t95 = ((x649*x650)<=(x651*x652));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x658 = 76239428LLU;
	uint8_t x659 = 31U;
	int32_t t96 = 81015679;

    t96 = ((x657*x658)<=(x659*x660));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x665 = 301141U;
	volatile int32_t x666 = INT32_MIN;
	int32_t t97 = -26552;

    t97 = ((x665*x666)<=(x667*x668));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x669 = -251191942LL;
	int8_t x670 = INT8_MIN;
	volatile int8_t x672 = 1;
	static volatile int32_t t98 = 32665;

    t98 = ((x669*x670)<=(x671*x672));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x673 = 10U;
	static int16_t x674 = INT16_MAX;
	uint32_t x675 = 746916U;
	int32_t x676 = -65412;

    t99 = ((x673*x674)<=(x675*x676));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x685 = -1;
	volatile uint64_t x686 = 5LLU;
	int64_t x687 = INT64_MAX;
	int8_t x688 = -1;
	static int32_t t100 = 1062;

    t100 = ((x685*x686)<=(x687*x688));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x699 = UINT16_MAX;
	static volatile uint8_t x700 = UINT8_MAX;
	volatile int32_t t101 = -63;

    t101 = ((x697*x698)<=(x699*x700));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x702 = INT16_MAX;
	static volatile uint16_t x703 = 6U;
	uint64_t x704 = 2LLU;
	volatile int32_t t102 = -43;

    t102 = ((x701*x702)<=(x703*x704));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x705 = 1U;
	uint32_t x706 = UINT32_MAX;
	int16_t x708 = INT16_MIN;
	volatile int32_t t103 = -27880081;

    t103 = ((x705*x706)<=(x707*x708));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x713 = 5U;
	static int8_t x714 = -1;
	static volatile int16_t x715 = -1;
	int8_t x716 = INT8_MIN;
	volatile int32_t t104 = 12;

    t104 = ((x713*x714)<=(x715*x716));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x725 = -1;
	int32_t x726 = -20;
	uint64_t x727 = UINT64_MAX;
	volatile int32_t x728 = INT32_MAX;
	int32_t t105 = 0;

    t105 = ((x725*x726)<=(x727*x728));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x729 = -14;
	volatile int16_t x730 = INT16_MIN;
	volatile uint16_t x731 = 4081U;

    t106 = ((x729*x730)<=(x731*x732));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x733 = INT64_MAX;
	uint64_t x734 = 516LLU;
	uint32_t x735 = 32983687U;
	int64_t x736 = -1LL;
	int32_t t107 = -5066299;

    t107 = ((x733*x734)<=(x735*x736));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x749 = -1LL;
	volatile int32_t x751 = -1;
	volatile int64_t x752 = 7022428916LL;
	volatile int32_t t108 = -1567085;

    t108 = ((x749*x750)<=(x751*x752));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x753 = INT8_MIN;
	int16_t x754 = INT16_MIN;
	int8_t x755 = INT8_MIN;
	volatile uint64_t x756 = 2153934184878124LLU;

    t109 = ((x753*x754)<=(x755*x756));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x761 = -1;
	volatile int8_t x762 = -1;
	volatile uint64_t x763 = 277846174169610344LLU;
	int32_t t110 = -506416845;

    t110 = ((x761*x762)<=(x763*x764));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x766 = UINT64_MAX;
	uint32_t x768 = 19U;

    t111 = ((x765*x766)<=(x767*x768));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x769 = 13081;
	static volatile int16_t x770 = INT16_MIN;
	static int16_t x772 = 238;
	int32_t t112 = 144959;

    t112 = ((x769*x770)<=(x771*x772));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x774 = -1LL;
	uint8_t x775 = 2U;
	volatile uint16_t x776 = UINT16_MAX;
	int32_t t113 = -23329;

    t113 = ((x773*x774)<=(x775*x776));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x783 = INT8_MIN;
	static volatile uint32_t x784 = 6U;
	int32_t t114 = -10102;

    t114 = ((x781*x782)<=(x783*x784));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x785 = 5;
	uint16_t x787 = 20U;
	volatile uint32_t x788 = UINT32_MAX;

    t115 = ((x785*x786)<=(x787*x788));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x797 = 4384U;
	static int8_t x799 = INT8_MAX;
	int8_t x800 = -18;
	int32_t t116 = 48276;

    t116 = ((x797*x798)<=(x799*x800));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x802 = INT32_MIN;
	static volatile int16_t x803 = 462;
	uint32_t x804 = 2U;
	int32_t t117 = -245239210;

    t117 = ((x801*x802)<=(x803*x804));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x809 = -4;
	static int16_t x811 = -1;
	int32_t x812 = -1;
	int32_t t118 = 2486;

    t118 = ((x809*x810)<=(x811*x812));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x817 = 3;
	uint32_t x818 = UINT32_MAX;
	int8_t x819 = -6;
	volatile uint16_t x820 = 5U;
	int32_t t119 = 171974;

    t119 = ((x817*x818)<=(x819*x820));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x825 = 8LL;
	int64_t x826 = -1LL;
	int16_t x827 = -13;
	int64_t x828 = 246292450LL;
	int32_t t120 = 1353199;

    t120 = ((x825*x826)<=(x827*x828));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x829 = -1LL;
	uint16_t x830 = 423U;
	int8_t x832 = INT8_MAX;
	int32_t t121 = -50156;

    t121 = ((x829*x830)<=(x831*x832));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x833 = -789;
	uint8_t x834 = 87U;
	uint32_t x835 = 927663U;
	volatile int8_t x836 = 0;
	int32_t t122 = -271015457;

    t122 = ((x833*x834)<=(x835*x836));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x849 = UINT32_MAX;
	uint64_t x850 = 10510502973LLU;
	uint8_t x851 = UINT8_MAX;
	int32_t x852 = 1421;
	int32_t t123 = 635;

    t123 = ((x849*x850)<=(x851*x852));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x853 = UINT32_MAX;
	uint8_t x854 = UINT8_MAX;
	uint64_t x855 = 25LLU;
	volatile int16_t x856 = INT16_MIN;

    t124 = ((x853*x854)<=(x855*x856));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x857 = UINT8_MAX;
	uint16_t x858 = 1995U;
	uint16_t x859 = 825U;
	int16_t x860 = -1;
	volatile int32_t t125 = 2496703;

    t125 = ((x857*x858)<=(x859*x860));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x865 = INT8_MAX;
	int8_t x866 = INT8_MIN;
	static uint16_t x867 = UINT16_MAX;
	int8_t x868 = -4;
	int32_t t126 = -14063835;

    t126 = ((x865*x866)<=(x867*x868));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x869 = UINT8_MAX;
	static uint32_t x871 = UINT32_MAX;
	int32_t x872 = -137;

    t127 = ((x869*x870)<=(x871*x872));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x873 = INT16_MIN;
	static uint16_t x874 = 209U;
	int16_t x875 = INT16_MAX;
	volatile uint64_t x876 = 4218875765LLU;

    t128 = ((x873*x874)<=(x875*x876));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int8_t x894 = 0;
	int8_t x895 = INT8_MIN;
	int16_t x896 = INT16_MIN;
	int32_t t129 = -3868700;

    t129 = ((x893*x894)<=(x895*x896));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x901 = 25U;
	int16_t x903 = INT16_MAX;
	volatile int32_t t130 = 198830;

    t130 = ((x901*x902)<=(x903*x904));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x905 = -2906869LL;
	uint64_t x906 = 2664260939517420925LLU;
	volatile int64_t x907 = -23LL;
	volatile uint64_t x908 = 12978LLU;
	int32_t t131 = 14491;

    t131 = ((x905*x906)<=(x907*x908));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x909 = -1;
	static int32_t x910 = 4780877;
	uint64_t x911 = 3084957LLU;
	volatile int32_t t132 = 4252674;

    t132 = ((x909*x910)<=(x911*x912));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x914 = -119;
	static uint8_t x915 = 50U;
	static volatile int32_t x916 = -1;
	int32_t t133 = 250;

    t133 = ((x913*x914)<=(x915*x916));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x917 = -45080;
	int32_t x919 = -150961;
	int16_t x920 = 1;
	int32_t t134 = -159583734;

    t134 = ((x917*x918)<=(x919*x920));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x921 = UINT8_MAX;
	uint32_t x922 = 9572057U;
	uint64_t x923 = 912424886LLU;
	int64_t x924 = INT64_MIN;
	volatile int32_t t135 = -3;

    t135 = ((x921*x922)<=(x923*x924));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x926 = -1;
	int16_t x927 = INT16_MAX;
	uint16_t x928 = UINT16_MAX;

    t136 = ((x925*x926)<=(x927*x928));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x930 = UINT64_MAX;
	int32_t x931 = INT32_MIN;
	volatile uint64_t x932 = 652342041358868295LLU;
	int32_t t137 = -92051;

    t137 = ((x929*x930)<=(x931*x932));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x933 = 4075U;
	uint64_t x934 = 102LLU;
	int16_t x935 = -1;
	volatile uint8_t x936 = UINT8_MAX;
	volatile int32_t t138 = -8;

    t138 = ((x933*x934)<=(x935*x936));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x937 = UINT64_MAX;
	uint64_t x938 = UINT64_MAX;
	int16_t x939 = -10312;
	int16_t x940 = -1;
	static int32_t t139 = 5890077;

    t139 = ((x937*x938)<=(x939*x940));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x950 = 15960054U;
	uint64_t x951 = 630352LLU;
	static volatile int32_t x952 = -301;

    t140 = ((x949*x950)<=(x951*x952));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x953 = 10U;
	int32_t x954 = -1;
	static int8_t x955 = -1;
	uint16_t x956 = 2042U;
	static volatile int32_t t141 = -5111149;

    t141 = ((x953*x954)<=(x955*x956));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x957 = -10;
	static uint8_t x959 = 2U;
	int64_t x960 = -1LL;
	static volatile int32_t t142 = 80982135;

    t142 = ((x957*x958)<=(x959*x960));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x961 = 0;
	int64_t x963 = -3212309598913LL;
	volatile int16_t x964 = -1;
	volatile int32_t t143 = -50;

    t143 = ((x961*x962)<=(x963*x964));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x969 = -1LL;
	static int8_t x970 = INT8_MAX;
	int16_t x971 = INT16_MIN;
	int8_t x972 = INT8_MIN;
	int32_t t144 = 38551505;

    t144 = ((x969*x970)<=(x971*x972));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x973 = 20991120U;
	int16_t x974 = INT16_MIN;
	static uint32_t x975 = UINT32_MAX;
	volatile int32_t t145 = -761819978;

    t145 = ((x973*x974)<=(x975*x976));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x977 = -112187743980LL;
	static volatile int16_t x978 = -1;
	uint32_t x979 = UINT32_MAX;
	static volatile int16_t x980 = INT16_MAX;
	volatile int32_t t146 = -3589;

    t146 = ((x977*x978)<=(x979*x980));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x981 = 13106726987LLU;
	int64_t x982 = INT64_MIN;
	uint8_t x984 = 4U;
	static int32_t t147 = -1761;

    t147 = ((x981*x982)<=(x983*x984));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x989 = INT8_MIN;
	int16_t x990 = INT16_MAX;
	static volatile uint64_t x991 = UINT64_MAX;
	volatile int16_t x992 = INT16_MAX;

    t148 = ((x989*x990)<=(x991*x992));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x993 = INT16_MIN;
	int32_t x994 = -1149;
	int8_t x995 = -1;
	int16_t x996 = -1;
	int32_t t149 = 145193740;

    t149 = ((x993*x994)<=(x995*x996));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x997 = 12;
	static int64_t x998 = -1LL;
	volatile int8_t x999 = INT8_MIN;
	int16_t x1000 = -1;
	int32_t t150 = 32544547;

    t150 = ((x997*x998)<=(x999*x1000));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x1002 = 28U;
	int8_t x1003 = INT8_MIN;
	volatile int32_t t151 = 1;

    t151 = ((x1001*x1002)<=(x1003*x1004));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1005 = INT16_MAX;
	uint8_t x1006 = 92U;
	volatile int8_t x1007 = -1;
	static uint16_t x1008 = 5418U;
	volatile int32_t t152 = 1937128;

    t152 = ((x1005*x1006)<=(x1007*x1008));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1011 = 2U;
	volatile int32_t t153 = -930;

    t153 = ((x1009*x1010)<=(x1011*x1012));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x1025 = UINT8_MAX;
	int8_t x1026 = INT8_MAX;
	int32_t x1027 = INT32_MAX;
	uint64_t x1028 = 384739602203LLU;
	int32_t t154 = -23846627;

    t154 = ((x1025*x1026)<=(x1027*x1028));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x1029 = 6;
	int64_t x1030 = -32447178802276107LL;
	static int8_t x1031 = -11;
	volatile int32_t x1032 = -1;
	static int32_t t155 = 3564;

    t155 = ((x1029*x1030)<=(x1031*x1032));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1033 = -1;
	volatile int32_t x1034 = -14;
	int16_t x1035 = INT16_MIN;
	int8_t x1036 = 7;
	volatile int32_t t156 = 280015;

    t156 = ((x1033*x1034)<=(x1035*x1036));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x1037 = 7235809LLU;
	volatile int64_t x1038 = -1LL;
	int8_t x1039 = INT8_MIN;
	uint16_t x1040 = 7U;
	int32_t t157 = 31325;

    t157 = ((x1037*x1038)<=(x1039*x1040));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x1042 = -1;
	volatile int32_t x1043 = INT32_MAX;
	int16_t x1044 = -1;
	static volatile int32_t t158 = 15522;

    t158 = ((x1041*x1042)<=(x1043*x1044));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1045 = 226821U;
	int64_t x1046 = -1LL;
	static int16_t x1047 = INT16_MAX;
	int32_t x1048 = -1;
	static volatile int32_t t159 = 2913808;

    t159 = ((x1045*x1046)<=(x1047*x1048));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1049 = -1;
	uint16_t x1050 = 1U;
	int8_t x1051 = INT8_MAX;
	volatile int32_t t160 = 355707402;

    t160 = ((x1049*x1050)<=(x1051*x1052));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1054 = 1;
	static volatile uint32_t x1055 = 18U;
	volatile uint32_t x1056 = 259U;

    t161 = ((x1053*x1054)<=(x1055*x1056));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1061 = -249123;
	static int16_t x1062 = -1;
	int32_t x1063 = INT32_MAX;
	uint32_t x1064 = 573696U;
	static int32_t t162 = -591747;

    t162 = ((x1061*x1062)<=(x1063*x1064));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1069 = 8U;
	int32_t x1070 = -1;
	uint32_t x1071 = 1U;
	static int32_t t163 = -6206;

    t163 = ((x1069*x1070)<=(x1071*x1072));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1073 = 1238U;
	volatile int16_t x1075 = INT16_MIN;
	static volatile uint8_t x1076 = 16U;

    t164 = ((x1073*x1074)<=(x1075*x1076));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1077 = 28789194610804316LLU;
	int8_t x1078 = INT8_MIN;
	static int16_t x1079 = INT16_MIN;
	uint16_t x1080 = 73U;

    t165 = ((x1077*x1078)<=(x1079*x1080));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1085 = -1;
	static int32_t x1086 = 7736565;
	uint32_t x1087 = UINT32_MAX;
	volatile int32_t t166 = 14;

    t166 = ((x1085*x1086)<=(x1087*x1088));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1097 = 5U;
	uint32_t x1098 = 5548U;
	int8_t x1099 = INT8_MIN;
	uint64_t x1100 = 4529317525854448LLU;

    t167 = ((x1097*x1098)<=(x1099*x1100));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x1101 = INT32_MAX;
	static volatile uint64_t x1102 = UINT64_MAX;
	uint64_t x1103 = 251337498038LLU;
	uint8_t x1104 = 2U;
	int32_t t168 = -5153960;

    t168 = ((x1101*x1102)<=(x1103*x1104));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1105 = 41U;
	int8_t x1106 = INT8_MIN;
	uint64_t x1107 = 315327LLU;
	int64_t x1108 = INT64_MIN;
	int32_t t169 = -157978;

    t169 = ((x1105*x1106)<=(x1107*x1108));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x1113 = -57LL;
	int32_t x1114 = -81789;
	int8_t x1115 = -1;
	int8_t x1116 = 0;
	int32_t t170 = -2;

    t170 = ((x1113*x1114)<=(x1115*x1116));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x1125 = 1;
	int32_t x1126 = -125818771;
	volatile int64_t x1128 = 56124570111044458LL;
	volatile int32_t t171 = -117136;

    t171 = ((x1125*x1126)<=(x1127*x1128));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1129 = INT8_MAX;
	static volatile int32_t x1130 = -1;
	int64_t x1131 = -50426524506LL;
	uint32_t x1132 = 1070U;
	static int32_t t172 = 689;

    t172 = ((x1129*x1130)<=(x1131*x1132));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1133 = UINT32_MAX;
	uint32_t x1134 = 860U;
	int32_t t173 = -4;

    t173 = ((x1133*x1134)<=(x1135*x1136));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1138 = 742U;
	volatile uint64_t x1139 = 7LLU;
	uint64_t x1140 = 24432042LLU;
	volatile int32_t t174 = 80268547;

    t174 = ((x1137*x1138)<=(x1139*x1140));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1141 = -1;
	int8_t x1142 = 1;
	uint32_t x1143 = 363411U;
	volatile uint64_t x1144 = 188895335246892LLU;
	int32_t t175 = -55;

    t175 = ((x1141*x1142)<=(x1143*x1144));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x1145 = 44LLU;
	int8_t x1146 = 0;
	static int8_t x1147 = INT8_MIN;
	static int32_t x1148 = 123021;

    t176 = ((x1145*x1146)<=(x1147*x1148));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1153 = 1;
	int64_t x1154 = INT64_MIN;
	volatile int16_t x1155 = INT16_MIN;
	volatile int8_t x1156 = -1;
	static volatile int32_t t177 = 525885791;

    t177 = ((x1153*x1154)<=(x1155*x1156));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1157 = -8;
	int16_t x1158 = INT16_MAX;
	int32_t t178 = -56;

    t178 = ((x1157*x1158)<=(x1159*x1160));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1169 = -1LL;
	int16_t x1171 = -1;
	volatile int64_t x1172 = 322LL;
	static int32_t t179 = 45;

    t179 = ((x1169*x1170)<=(x1171*x1172));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x1173 = INT8_MIN;
	uint16_t x1175 = 0U;
	int64_t x1176 = -56905247266469LL;
	volatile int32_t t180 = 209;

    t180 = ((x1173*x1174)<=(x1175*x1176));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1190 = 149236431424LLU;
	int32_t t181 = -23;

    t181 = ((x1189*x1190)<=(x1191*x1192));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1193 = 0;
	volatile int16_t x1194 = INT16_MAX;
	int8_t x1196 = INT8_MIN;
	int32_t t182 = 237;

    t182 = ((x1193*x1194)<=(x1195*x1196));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x1197 = INT32_MIN;
	static uint64_t x1198 = 590506785LLU;
	uint64_t x1199 = UINT64_MAX;
	int64_t x1200 = 475909538972LL;
	volatile int32_t t183 = -10;

    t183 = ((x1197*x1198)<=(x1199*x1200));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1205 = 60U;
	int32_t x1206 = 1;
	uint16_t x1207 = UINT16_MAX;
	uint64_t x1208 = 2142454645095LLU;
	volatile int32_t t184 = 42827;

    t184 = ((x1205*x1206)<=(x1207*x1208));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1213 = UINT16_MAX;
	int8_t x1214 = -1;
	static int32_t x1216 = -1;
	volatile int32_t t185 = -2;

    t185 = ((x1213*x1214)<=(x1215*x1216));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1217 = 1;
	int16_t x1218 = -1;
	uint8_t x1219 = 2U;
	volatile int16_t x1220 = -4;
	int32_t t186 = -37724;

    t186 = ((x1217*x1218)<=(x1219*x1220));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1222 = INT8_MIN;
	int32_t x1224 = -15;
	volatile int32_t t187 = 4;

    t187 = ((x1221*x1222)<=(x1223*x1224));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1229 = 0U;
	int32_t x1231 = -1;
	int8_t x1232 = -1;
	int32_t t188 = -61933309;

    t188 = ((x1229*x1230)<=(x1231*x1232));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1241 = 58569804LLU;
	static int8_t x1242 = INT8_MIN;
	int8_t x1243 = 0;
	static uint32_t x1244 = 97U;

    t189 = ((x1241*x1242)<=(x1243*x1244));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1249 = 524LLU;
	int16_t x1250 = INT16_MAX;
	uint8_t x1251 = UINT8_MAX;
	static uint16_t x1252 = UINT16_MAX;
	volatile int32_t t190 = -15;

    t190 = ((x1249*x1250)<=(x1251*x1252));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1253 = 0;
	volatile int32_t x1254 = INT32_MIN;
	uint8_t x1255 = UINT8_MAX;
	int16_t x1256 = INT16_MIN;

    t191 = ((x1253*x1254)<=(x1255*x1256));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1259 = INT8_MIN;
	static uint32_t x1260 = 811455806U;

    t192 = ((x1257*x1258)<=(x1259*x1260));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1269 = 493096;
	int64_t x1270 = 0LL;
	uint64_t x1272 = 15LLU;
	volatile int32_t t193 = 3262;

    t193 = ((x1269*x1270)<=(x1271*x1272));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1273 = 12;
	static uint16_t x1275 = 298U;
	volatile uint64_t x1276 = 143850018LLU;
	volatile int32_t t194 = -53088936;

    t194 = ((x1273*x1274)<=(x1275*x1276));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1277 = -1;
	uint8_t x1278 = 1U;
	uint32_t x1279 = 258151933U;
	static int8_t x1280 = -1;
	volatile int32_t t195 = 634;

    t195 = ((x1277*x1278)<=(x1279*x1280));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x1285 = 2574U;
	int16_t x1286 = INT16_MIN;
	static uint8_t x1287 = 7U;
	static uint8_t x1288 = UINT8_MAX;
	volatile int32_t t196 = 712;

    t196 = ((x1285*x1286)<=(x1287*x1288));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1289 = 585933627744435LLU;
	volatile uint64_t x1290 = 190LLU;
	static uint32_t x1292 = 252403014U;

    t197 = ((x1289*x1290)<=(x1291*x1292));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1293 = UINT64_MAX;
	int8_t x1294 = 3;
	int16_t x1295 = INT16_MIN;
	int16_t x1296 = -1;

    t198 = ((x1293*x1294)<=(x1295*x1296));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1297 = -1;
	uint64_t x1298 = 3380LLU;
	int8_t x1299 = 1;
	int32_t x1300 = -2402;
	volatile int32_t t199 = -551908396;

    t199 = ((x1297*x1298)<=(x1299*x1300));

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

