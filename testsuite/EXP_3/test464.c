#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x9 = UINT32_MAX;
int8_t x10 = INT8_MAX;
static volatile int8_t x13 = INT8_MIN;
uint64_t x16 = 0LLU;
volatile int32_t t2 = -3611;
static uint8_t x21 = 0U;
static uint32_t x22 = UINT32_MAX;
static int64_t x24 = -1LL;
int64_t x29 = INT64_MIN;
int8_t x32 = 17;
int64_t x34 = INT64_MAX;
int64_t x35 = -1LL;
int8_t x44 = INT8_MIN;
int64_t x55 = 3721492473LL;
uint16_t x58 = 650U;
int8_t x67 = 14;
int32_t t16 = -1;
static uint8_t x77 = 25U;
static uint8_t x80 = 48U;
static volatile int32_t t18 = 7118683;
int32_t x90 = -1;
int8_t x91 = 0;
uint64_t x99 = UINT64_MAX;
int64_t x132 = 65607396LL;
volatile int32_t t27 = 9;
uint32_t x140 = UINT32_MAX;
int16_t x150 = -1;
int32_t t30 = 10;
uint64_t x161 = UINT64_MAX;
volatile uint8_t x164 = UINT8_MAX;
static int16_t x165 = -1;
static int32_t x171 = -1;
int32_t x173 = INT32_MAX;
int32_t t35 = 1;
int64_t x179 = -992777712LL;
int64_t x191 = -1LL;
uint8_t x195 = 79U;
uint64_t x202 = 18420LLU;
int16_t x203 = 1;
int16_t x216 = INT16_MAX;
int32_t x229 = INT32_MIN;
static int32_t x234 = -79619847;
int32_t x246 = INT32_MIN;
int16_t x248 = INT16_MIN;
volatile int32_t t46 = 18742921;
uint64_t x253 = 51LLU;
int64_t x262 = -441593521223273652LL;
volatile uint8_t x271 = 117U;
volatile int32_t t50 = 598;
int8_t x276 = 1;
int16_t x277 = -1;
volatile int32_t x289 = INT32_MIN;
static int32_t t53 = 260632;
int16_t x294 = INT16_MIN;
static int64_t x298 = -1LL;
int8_t x301 = 0;
int32_t x303 = 3560307;
int8_t x304 = INT8_MIN;
int32_t t57 = -375;
int8_t x310 = -1;
int32_t x311 = INT32_MIN;
uint32_t x312 = 3470283U;
volatile int32_t x318 = -33908;
volatile int32_t t59 = -109;
volatile int32_t x323 = INT32_MAX;
int32_t x329 = INT32_MIN;
static int8_t x332 = INT8_MIN;
uint64_t x343 = UINT64_MAX;
uint32_t x349 = 57U;
int32_t t64 = 36719721;
uint64_t x353 = UINT64_MAX;
uint16_t x358 = UINT16_MAX;
volatile int8_t x360 = -6;
static int8_t x361 = 0;
int32_t t68 = -693678;
uint64_t x379 = UINT64_MAX;
static volatile int32_t t69 = 0;
static int8_t x400 = INT8_MAX;
int32_t t71 = 245611;
int64_t x402 = -28LL;
int16_t x405 = INT16_MAX;
volatile uint16_t x419 = 2U;
volatile int32_t t75 = 0;
volatile int64_t x426 = 0LL;
volatile uint8_t x430 = UINT8_MAX;
int16_t x432 = INT16_MIN;
int8_t x444 = INT8_MIN;
static volatile int32_t t78 = -371740;
volatile uint64_t x456 = 3LLU;
uint16_t x458 = 30U;
uint8_t x460 = 65U;
static int16_t x482 = INT16_MIN;
uint16_t x486 = 25969U;
uint16_t x488 = 1U;
static uint16_t x494 = 26U;
int64_t x496 = -1LL;
uint32_t x497 = 1060U;
volatile int64_t x498 = -110315713316382356LL;
int16_t x511 = 29;
int32_t x512 = 0;
int8_t x520 = INT8_MIN;
uint64_t x524 = 5702LLU;
int16_t x527 = -71;
static int32_t t92 = 149;
uint8_t x529 = UINT8_MAX;
static int64_t x533 = INT64_MAX;
static volatile int32_t t95 = 3618651;
uint16_t x541 = UINT16_MAX;
int64_t x547 = INT64_MIN;
int32_t x548 = 0;
int32_t x552 = INT32_MIN;


void f0(void) {
	static int8_t x5 = -3;
	static uint8_t x6 = 5U;
	volatile int8_t x7 = -1;
	int8_t x8 = INT8_MAX;
	volatile int32_t t0 = 165336969;

	t0 = ((x5<=x6)<(x7*x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x11 = 1U;
	uint16_t x12 = UINT16_MAX;
	int32_t t1 = -1019152372;

	t1 = ((x9<=x10)<(x11*x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = 759423859058477997LLU;
	uint16_t x15 = 4267U;

	t2 = ((x13<=x14)<(x15*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 17085986;
	int16_t x18 = 4;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = UINT16_MAX;
	static int32_t t3 = -2;

	t3 = ((x17<=x18)<(x19*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x23 = UINT32_MAX;
	static volatile int32_t t4 = -129275665;

	t4 = ((x21<=x22)<(x23*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MAX;
	static int16_t x26 = -1;
	int16_t x27 = 1;
	static uint32_t x28 = 5032U;
	static volatile int32_t t5 = 0;

	t5 = ((x25<=x26)<(x27*x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x30 = INT8_MIN;
	volatile int64_t x31 = -1LL;
	volatile int32_t t6 = 12136459;

	t6 = ((x29<=x30)<(x31*x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = INT64_MAX;
	volatile uint16_t x36 = 1862U;
	static volatile int32_t t7 = 383821316;

	t7 = ((x33<=x34)<(x35*x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = 190859259U;
	int16_t x38 = -1504;
	int8_t x39 = 2;
	volatile uint8_t x40 = UINT8_MAX;
	static int32_t t8 = -1;

	t8 = ((x37<=x38)<(x39*x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 8;
	int16_t x42 = 0;
	int32_t x43 = -1;
	int32_t t9 = 8272773;

	t9 = ((x41<=x42)<(x43*x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	uint8_t x46 = 24U;
	static volatile int32_t x47 = -1;
	uint8_t x48 = UINT8_MAX;
	int32_t t10 = 28701;

	t10 = ((x45<=x46)<(x47*x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MIN;
	static int16_t x51 = -1;
	static uint8_t x52 = 1U;
	int32_t t11 = -2;

	t11 = ((x49<=x50)<(x51*x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	uint32_t x54 = 35461773U;
	static volatile int8_t x56 = -1;
	volatile int32_t t12 = 191;

	t12 = ((x53<=x54)<(x55*x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -6;
	uint8_t x59 = 2U;
	volatile uint64_t x60 = 35532103504017LLU;
	volatile int32_t t13 = -1377924;

	t13 = ((x57<=x58)<(x59*x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	uint64_t x62 = 17238668270046718LLU;
	uint16_t x63 = 123U;
	int32_t x64 = -174993;
	static int32_t t14 = -1001343;

	t14 = ((x61<=x62)<(x63*x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = 5978618;
	int16_t x68 = INT16_MIN;
	int32_t t15 = 3;

	t15 = ((x65<=x66)<(x67*x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	static int64_t x70 = INT64_MIN;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = -24;

	t16 = ((x69<=x70)<(x71*x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 698397U;
	int16_t x74 = INT16_MIN;
	volatile int16_t x75 = INT16_MAX;
	static int8_t x76 = INT8_MIN;
	static int32_t t17 = -193044;

	t17 = ((x73<=x74)<(x75*x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;

	t18 = ((x77<=x78)<(x79*x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 361265U;
	int8_t x86 = INT8_MIN;
	uint64_t x87 = 7119LLU;
	int8_t x88 = -1;
	int32_t t19 = 67;

	t19 = ((x85<=x86)<(x87*x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	int8_t x92 = -4;
	volatile int32_t t20 = 205861;

	t20 = ((x89<=x90)<(x91*x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	int32_t x94 = INT32_MIN;
	uint16_t x95 = 1U;
	int8_t x96 = -46;
	static int32_t t21 = 394058;

	t21 = ((x93<=x94)<(x95*x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = 114U;
	uint8_t x98 = UINT8_MAX;
	uint32_t x100 = UINT32_MAX;
	static int32_t t22 = -39816;

	t22 = ((x97<=x98)<(x99*x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x101 = INT8_MAX;
	uint8_t x102 = 7U;
	uint64_t x103 = UINT64_MAX;
	uint32_t x104 = 185328573U;
	volatile int32_t t23 = -37886714;

	t23 = ((x101<=x102)<(x103*x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = INT16_MAX;
	int32_t x106 = 16148;
	uint16_t x107 = 976U;
	int16_t x108 = INT16_MAX;
	static volatile int32_t t24 = 56489588;

	t24 = ((x105<=x106)<(x107*x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x125 = -26064088LL;
	int32_t x126 = INT32_MIN;
	volatile int16_t x127 = INT16_MIN;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t25 = -9947972;

	t25 = ((x125<=x126)<(x127*x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = 109LL;
	static int8_t x131 = -6;
	volatile int32_t t26 = -293;

	t26 = ((x129<=x130)<(x131*x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = 44;
	int64_t x135 = -503068203LL;
	uint32_t x136 = 312036821U;

	t27 = ((x133<=x134)<(x135*x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x137 = INT16_MIN;
	uint16_t x138 = 1U;
	static int8_t x139 = INT8_MIN;
	int32_t t28 = 134;

	t28 = ((x137<=x138)<(x139*x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = INT32_MIN;
	volatile int32_t x142 = -353315404;
	volatile int64_t x143 = 984408LL;
	int32_t x144 = INT32_MAX;
	int32_t t29 = -1289;

	t29 = ((x141<=x142)<(x143*x144));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = 472U;
	static int64_t x151 = -34LL;
	int16_t x152 = INT16_MIN;

	t30 = ((x149<=x150)<(x151*x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = INT8_MIN;
	int32_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	uint32_t x160 = 1830U;
	volatile int32_t t31 = 78767;

	t31 = ((x157<=x158)<(x159*x160));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x162 = UINT8_MAX;
	int32_t x163 = 375270;
	static volatile int32_t t32 = -4902;

	t32 = ((x161<=x162)<(x163*x164));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x166 = INT16_MAX;
	int32_t x167 = INT32_MIN;
	volatile uint32_t x168 = UINT32_MAX;
	int32_t t33 = -554394;

	t33 = ((x165<=x166)<(x167*x168));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x169 = 3490U;
	int64_t x170 = INT64_MIN;
	volatile uint16_t x172 = 6566U;
	static int32_t t34 = 208321532;

	t34 = ((x169<=x170)<(x171*x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x174 = 3U;
	static uint64_t x175 = UINT64_MAX;
	int32_t x176 = -1;

	t35 = ((x173<=x174)<(x175*x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x177 = 2421U;
	int16_t x178 = -34;
	uint32_t x180 = 1195103510U;
	volatile int32_t t36 = 249656;

	t36 = ((x177<=x178)<(x179*x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x189 = 731901145048692370LLU;
	int16_t x190 = INT16_MIN;
	int32_t x192 = INT32_MIN;
	int32_t t37 = -15004;

	t37 = ((x189<=x190)<(x191*x192));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x193 = INT8_MAX;
	int8_t x194 = INT8_MIN;
	int32_t x196 = -1;
	int32_t t38 = 8;

	t38 = ((x193<=x194)<(x195*x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x197 = 24LL;
	static int64_t x198 = -1LL;
	int8_t x199 = INT8_MAX;
	int8_t x200 = INT8_MAX;
	int32_t t39 = -50767;

	t39 = ((x197<=x198)<(x199*x200));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x201 = -57;
	uint8_t x204 = 28U;
	volatile int32_t t40 = 0;

	t40 = ((x201<=x202)<(x203*x204));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x213 = INT64_MIN;
	volatile int64_t x214 = INT64_MIN;
	uint32_t x215 = 563025U;
	volatile int32_t t41 = 91293;

	t41 = ((x213<=x214)<(x215*x216));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x217 = 24118797604035LLU;
	static int8_t x218 = 0;
	int64_t x219 = -1LL;
	uint8_t x220 = 0U;
	volatile int32_t t42 = 987921038;

	t42 = ((x217<=x218)<(x219*x220));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x230 = 0U;
	static int8_t x231 = -1;
	static int64_t x232 = INT64_MAX;
	volatile int32_t t43 = 110;

	t43 = ((x229<=x230)<(x231*x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x233 = INT64_MAX;
	uint8_t x235 = UINT8_MAX;
	volatile int8_t x236 = 1;
	int32_t t44 = -522738433;

	t44 = ((x233<=x234)<(x235*x236));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x241 = 8041U;
	int8_t x242 = INT8_MIN;
	uint64_t x243 = UINT64_MAX;
	int16_t x244 = 66;
	int32_t t45 = 2624958;

	t45 = ((x241<=x242)<(x243*x244));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x245 = 59502U;
	volatile uint32_t x247 = UINT32_MAX;

	t46 = ((x245<=x246)<(x247*x248));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x254 = INT32_MIN;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = -30919414166398LL;
	int32_t t47 = -21186362;

	t47 = ((x253<=x254)<(x255*x256));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x261 = INT16_MIN;
	int32_t x263 = -45;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t48 = 7274814;

	t48 = ((x261<=x262)<(x263*x264));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x265 = 3U;
	int16_t x266 = -3442;
	static int64_t x267 = INT64_MAX;
	static uint64_t x268 = 1LLU;
	volatile int32_t t49 = -61119755;

	t49 = ((x265<=x266)<(x267*x268));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = INT32_MAX;
	uint32_t x270 = 1226937806U;
	uint16_t x272 = UINT16_MAX;

	t50 = ((x269<=x270)<(x271*x272));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	uint32_t x275 = 710U;
	int32_t t51 = -757562895;

	t51 = ((x273<=x274)<(x275*x276));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x278 = UINT16_MAX;
	int16_t x279 = -1;
	int16_t x280 = -6818;
	volatile int32_t t52 = 445224826;

	t52 = ((x277<=x278)<(x279*x280));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x290 = -1;
	volatile int32_t x291 = -490;
	volatile int8_t x292 = -5;

	t53 = ((x289<=x290)<(x291*x292));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x293 = INT64_MIN;
	volatile uint64_t x295 = 5963712425222077815LLU;
	int32_t x296 = -1;
	static int32_t t54 = -7423684;

	t54 = ((x293<=x294)<(x295*x296));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x297 = INT64_MIN;
	int8_t x299 = INT8_MAX;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t55 = 3838888;

	t55 = ((x297<=x298)<(x299*x300));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x302 = -3471;
	int32_t t56 = 2630;

	t56 = ((x301<=x302)<(x303*x304));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = 658U;
	static int64_t x307 = 1LL;
	int32_t x308 = INT32_MIN;

	t57 = ((x305<=x306)<(x307*x308));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x309 = -8827967149186LL;
	volatile int32_t t58 = 4092897;

	t58 = ((x309<=x310)<(x311*x312));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x317 = -1LL;
	static int8_t x319 = INT8_MAX;
	uint16_t x320 = 3820U;

	t59 = ((x317<=x318)<(x319*x320));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x321 = INT8_MAX;
	int64_t x322 = -416LL;
	uint32_t x324 = 25U;
	static int32_t t60 = -5612;

	t60 = ((x321<=x322)<(x323*x324));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x325 = -1LL;
	int64_t x326 = -17669080993951563LL;
	int64_t x327 = -1LL;
	uint8_t x328 = 1U;
	int32_t t61 = 1;

	t61 = ((x325<=x326)<(x327*x328));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x330 = INT32_MIN;
	int64_t x331 = -6LL;
	static int32_t t62 = -5;

	t62 = ((x329<=x330)<(x331*x332));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x341 = INT8_MIN;
	uint32_t x342 = 38U;
	static volatile int16_t x344 = -53;
	static int32_t t63 = 615;

	t63 = ((x341<=x342)<(x343*x344));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x350 = INT32_MIN;
	int8_t x351 = -5;
	int16_t x352 = -342;

	t64 = ((x349<=x350)<(x351*x352));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x354 = 41901541LLU;
	uint64_t x355 = 49373LLU;
	volatile int64_t x356 = INT64_MAX;
	static int32_t t65 = -4;

	t65 = ((x353<=x354)<(x355*x356));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x357 = INT32_MIN;
	int8_t x359 = 4;
	static int32_t t66 = 995;

	t66 = ((x357<=x358)<(x359*x360));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x362 = 4052190U;
	int32_t x363 = -1;
	int16_t x364 = INT16_MIN;
	volatile int32_t t67 = 54817179;

	t67 = ((x361<=x362)<(x363*x364));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x373 = INT16_MIN;
	static int8_t x374 = -1;
	int8_t x375 = INT8_MIN;
	int32_t x376 = -3958159;

	t68 = ((x373<=x374)<(x375*x376));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x377 = 8U;
	int64_t x378 = -1LL;
	static int8_t x380 = -1;

	t69 = ((x377<=x378)<(x379*x380));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MAX;
	uint64_t x395 = 377726149LLU;
	uint8_t x396 = 0U;
	volatile int32_t t70 = 4;

	t70 = ((x393<=x394)<(x395*x396));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x398 = 22U;
	int8_t x399 = INT8_MIN;

	t71 = ((x397<=x398)<(x399*x400));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x401 = INT8_MAX;
	uint32_t x403 = 2U;
	uint16_t x404 = 177U;
	volatile int32_t t72 = -4;

	t72 = ((x401<=x402)<(x403*x404));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x406 = UINT16_MAX;
	uint32_t x407 = UINT32_MAX;
	static int16_t x408 = -2;
	volatile int32_t t73 = -765;

	t73 = ((x405<=x406)<(x407*x408));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x413 = 6;
	int32_t x414 = -15;
	volatile int64_t x415 = 3926258568832707LL;
	int16_t x416 = -261;
	volatile int32_t t74 = 21873661;

	t74 = ((x413<=x414)<(x415*x416));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x417 = -1LL;
	int16_t x418 = INT16_MIN;
	static int16_t x420 = 3883;

	t75 = ((x417<=x418)<(x419*x420));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x425 = UINT64_MAX;
	volatile int16_t x427 = INT16_MIN;
	int16_t x428 = -1;
	int32_t t76 = 0;

	t76 = ((x425<=x426)<(x427*x428));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x429 = 49181342LL;
	uint64_t x431 = 36129538LLU;
	volatile int32_t t77 = -4064;

	t77 = ((x429<=x430)<(x431*x432));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x441 = UINT16_MAX;
	int16_t x442 = INT16_MAX;
	static volatile int8_t x443 = INT8_MAX;

	t78 = ((x441<=x442)<(x443*x444));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x453 = -1LL;
	uint64_t x454 = 19620LLU;
	volatile int32_t x455 = -288;
	int32_t t79 = 2;

	t79 = ((x453<=x454)<(x455*x456));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x457 = 461251826U;
	static uint32_t x459 = 6U;
	volatile int32_t t80 = -98;

	t80 = ((x457<=x458)<(x459*x460));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x461 = INT64_MIN;
	uint64_t x462 = 1037730944416LLU;
	static uint16_t x463 = UINT16_MAX;
	volatile int8_t x464 = INT8_MIN;
	static volatile int32_t t81 = -4;

	t81 = ((x461<=x462)<(x463*x464));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x469 = INT32_MIN;
	int8_t x470 = INT8_MAX;
	uint8_t x471 = UINT8_MAX;
	volatile uint16_t x472 = 12941U;
	int32_t t82 = -33193;

	t82 = ((x469<=x470)<(x471*x472));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x473 = 47;
	uint16_t x474 = UINT16_MAX;
	static int64_t x475 = -1LL;
	int8_t x476 = -1;
	volatile int32_t t83 = -254666;

	t83 = ((x473<=x474)<(x475*x476));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x481 = 86U;
	int16_t x483 = -1;
	int16_t x484 = INT16_MIN;
	static volatile int32_t t84 = 1;

	t84 = ((x481<=x482)<(x483*x484));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x485 = 222U;
	static int8_t x487 = INT8_MIN;
	volatile int32_t t85 = 156;

	t85 = ((x485<=x486)<(x487*x488));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x489 = 149820923LLU;
	volatile int32_t x490 = INT32_MIN;
	volatile uint64_t x491 = 8155988LLU;
	uint32_t x492 = UINT32_MAX;
	volatile int32_t t86 = -33;

	t86 = ((x489<=x490)<(x491*x492));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x493 = INT32_MIN;
	int16_t x495 = -1;
	volatile int32_t t87 = -4689;

	t87 = ((x493<=x494)<(x495*x496));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x499 = 16U;
	uint16_t x500 = UINT16_MAX;
	static volatile int32_t t88 = -867348212;

	t88 = ((x497<=x498)<(x499*x500));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x509 = -1;
	int64_t x510 = -2400581233LL;
	volatile int32_t t89 = -62782;

	t89 = ((x509<=x510)<(x511*x512));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x517 = UINT32_MAX;
	volatile uint64_t x518 = 20450946992024LLU;
	int64_t x519 = -29247249019124LL;
	volatile int32_t t90 = 1067837706;

	t90 = ((x517<=x518)<(x519*x520));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x521 = 6956707U;
	uint8_t x522 = 31U;
	volatile uint8_t x523 = UINT8_MAX;
	int32_t t91 = -514;

	t91 = ((x521<=x522)<(x523*x524));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x525 = INT64_MIN;
	int8_t x526 = INT8_MIN;
	int16_t x528 = INT16_MIN;

	t92 = ((x525<=x526)<(x527*x528));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x530 = 806350866U;
	uint16_t x531 = 7U;
	int16_t x532 = INT16_MIN;
	volatile int32_t t93 = 15205480;

	t93 = ((x529<=x530)<(x531*x532));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x534 = 0U;
	volatile int64_t x535 = -238LL;
	volatile int16_t x536 = -1;
	int32_t t94 = 114166940;

	t94 = ((x533<=x534)<(x535*x536));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x537 = -1;
	int16_t x538 = INT16_MIN;
	volatile uint64_t x539 = 140767218883841798LLU;
	int64_t x540 = 907298932180977LL;

	t95 = ((x537<=x538)<(x539*x540));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x542 = 25793811610062967LL;
	static uint16_t x543 = 955U;
	int16_t x544 = -1;
	int32_t t96 = 1;

	t96 = ((x541<=x542)<(x543*x544));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x545 = INT64_MIN;
	uint8_t x546 = UINT8_MAX;
	volatile int32_t t97 = 32446562;

	t97 = ((x545<=x546)<(x547*x548));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x549 = INT8_MAX;
	uint64_t x550 = UINT64_MAX;
	int8_t x551 = 0;
	volatile int32_t t98 = -63;

	t98 = ((x549<=x550)<(x551*x552));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x553 = INT8_MAX;
	static int64_t x554 = INT64_MIN;
	int64_t x555 = -1LL;
	int32_t x556 = INT32_MIN;
	static int32_t t99 = 435;

	t99 = ((x553<=x554)<(x555*x556));

	if (t99 != 1) { NG(); } else { ; }
	
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

