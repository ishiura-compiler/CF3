#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MAX;
volatile uint64_t x8 = 202483538LLU;
uint8_t x13 = 8U;
int16_t x20 = -1;
static uint64_t x24 = 78289485205092LLU;
volatile int32_t t6 = 164;
static int16_t x38 = INT16_MAX;
int32_t t7 = -12638;
static int32_t x43 = -1;
int8_t x45 = -1;
int8_t x69 = INT8_MAX;
uint8_t x72 = UINT8_MAX;
uint32_t x80 = UINT32_MAX;
volatile uint32_t x81 = 27165U;
int32_t x93 = INT32_MIN;
volatile int64_t x101 = 23197850186LL;
int32_t t18 = 63;
int8_t x105 = -1;
int16_t x108 = -714;
static int8_t x114 = -1;
uint64_t x119 = UINT64_MAX;
uint32_t x120 = 2873U;
volatile uint16_t x121 = 0U;
int32_t t24 = 79;
static int64_t x138 = -1LL;
static uint32_t x140 = 222U;
volatile int8_t x149 = INT8_MAX;
volatile int32_t t28 = 1461;
int8_t x159 = -1;
volatile int64_t x160 = INT64_MAX;
int32_t t29 = 9277;
int16_t x166 = -1;
uint8_t x169 = UINT8_MAX;
static volatile uint32_t x178 = UINT32_MAX;
int8_t x179 = INT8_MIN;
static uint16_t x180 = 2U;
int64_t x184 = 7082567LL;
int32_t t33 = 64233722;
volatile int32_t x194 = -1;
uint32_t x195 = UINT32_MAX;
int16_t x201 = -1;
int8_t x219 = -1;
int64_t x222 = INT64_MIN;
volatile int32_t t42 = 326597;
volatile int8_t x237 = -1;
uint16_t x239 = 7U;
int32_t t45 = 1;
volatile uint64_t x262 = UINT64_MAX;
volatile int32_t t49 = -82;
uint16_t x275 = 5386U;
int64_t x276 = 267361207155LL;
static volatile int64_t x284 = INT64_MIN;
int64_t x288 = -1LL;
static volatile int32_t t54 = 6;
int64_t x312 = -1LL;
volatile uint32_t x315 = UINT32_MAX;
int32_t t56 = -133378;
uint8_t x336 = 1U;
int64_t x356 = -1LL;
int8_t x364 = INT8_MIN;
uint8_t x365 = 12U;
uint64_t x367 = 431947124LLU;
int64_t x370 = -14059089LL;
volatile int16_t x376 = -3896;
int32_t t69 = -465;
volatile int32_t t70 = -42;
int16_t x390 = 1;
int32_t x396 = 249418;
static int64_t x397 = 273671928481641513LL;
int32_t x400 = -6562;
int16_t x401 = INT16_MIN;
volatile int8_t x421 = INT8_MAX;
uint64_t x424 = 23004LLU;
static volatile int32_t x426 = INT32_MIN;
static uint64_t x428 = UINT64_MAX;
int32_t x429 = INT32_MIN;
int8_t x431 = INT8_MIN;
int8_t x432 = INT8_MIN;
static uint64_t x436 = UINT64_MAX;
int64_t x443 = 59860LL;
static uint16_t x445 = 0U;
static volatile int32_t t85 = 255546;
int64_t x465 = 695844660269046768LL;
int16_t x466 = -1;
static volatile int32_t t94 = 881836;
int16_t x498 = INT16_MIN;
int32_t x499 = INT32_MAX;
int32_t x508 = INT32_MAX;
int32_t t97 = 64;
static int64_t x521 = INT64_MIN;
int16_t x523 = 2;


void f0(void) {
	int32_t x2 = INT32_MIN;
	static int16_t x3 = INT16_MIN;
	uint8_t x4 = 1U;
	int32_t t0 = -7350564;

	t0 = ((x1==x2)==(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -462078;
	volatile uint32_t x6 = 420U;
	int64_t x7 = -795477670407568LL;
	volatile int32_t t1 = 228;

	t1 = ((x5==x6)==(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = INT8_MAX;
	int16_t x15 = 0;
	uint8_t x16 = 115U;
	volatile int32_t t2 = -54380;

	t2 = ((x13==x14)==(x15*x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x17 = 659025653990150881LLU;
	uint16_t x18 = 25U;
	int64_t x19 = -755505354LL;
	int32_t t3 = 4;

	t3 = ((x17==x18)==(x19*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = INT32_MIN;
	volatile int16_t x22 = 1;
	int64_t x23 = 884123238LL;
	volatile int32_t t4 = 1120558;

	t4 = ((x21==x22)==(x23*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 16090U;
	int8_t x30 = 8;
	static uint32_t x31 = 125U;
	volatile uint32_t x32 = UINT32_MAX;
	volatile int32_t t5 = 66946402;

	t5 = ((x29==x30)==(x31*x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 3;
	int32_t x34 = 422227;
	static int32_t x35 = -1;
	uint16_t x36 = 5U;

	t6 = ((x33==x34)==(x35*x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = -124;
	volatile int16_t x39 = 16;
	static int64_t x40 = -1LL;

	t7 = ((x37==x38)==(x39*x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MIN;
	static int8_t x42 = INT8_MIN;
	int8_t x44 = INT8_MAX;
	int32_t t8 = 741;

	t8 = ((x41==x42)==(x43*x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x46 = 1U;
	int8_t x47 = -2;
	uint16_t x48 = 2180U;
	static volatile int32_t t9 = 240;

	t9 = ((x45==x46)==(x47*x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 63874;
	static volatile int8_t x50 = INT8_MIN;
	uint32_t x51 = 1352U;
	int32_t x52 = -1;
	static volatile int32_t t10 = -5497963;

	t10 = ((x49==x50)==(x51*x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = -2462;
	uint8_t x66 = 17U;
	int8_t x67 = 0;
	static int16_t x68 = INT16_MIN;
	static volatile int32_t t11 = 1732;

	t11 = ((x65==x66)==(x67*x68));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x70 = -53;
	static int8_t x71 = INT8_MAX;
	int32_t t12 = -3904;

	t12 = ((x69==x70)==(x71*x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x77 = -24;
	int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MAX;
	int32_t t13 = -392909195;

	t13 = ((x77==x78)==(x79*x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x82 = 45854593U;
	int32_t x83 = -233721385;
	static volatile int16_t x84 = 5;
	volatile int32_t t14 = -22132;

	t14 = ((x81==x82)==(x83*x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x89 = INT32_MAX;
	uint32_t x90 = UINT32_MAX;
	int64_t x91 = -1LL;
	int32_t x92 = INT32_MIN;
	volatile int32_t t15 = -8098;

	t15 = ((x89==x90)==(x91*x92));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x94 = UINT64_MAX;
	uint32_t x95 = 2423805U;
	uint16_t x96 = 467U;
	volatile int32_t t16 = 1669731;

	t16 = ((x93==x94)==(x95*x96));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = 111815;
	int16_t x98 = INT16_MIN;
	volatile int8_t x99 = -60;
	int8_t x100 = -1;
	int32_t t17 = -1020;

	t17 = ((x97==x98)==(x99*x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x102 = -1LL;
	uint32_t x103 = UINT32_MAX;
	volatile int8_t x104 = INT8_MIN;

	t18 = ((x101==x102)==(x103*x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x106 = -61;
	int64_t x107 = -83LL;
	int32_t t19 = -25;

	t19 = ((x105==x106)==(x107*x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x109 = UINT64_MAX;
	static volatile int64_t x110 = INT64_MIN;
	uint64_t x111 = 829LLU;
	int8_t x112 = INT8_MIN;
	volatile int32_t t20 = -2;

	t20 = ((x109==x110)==(x111*x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = INT64_MAX;
	volatile uint16_t x115 = 393U;
	uint32_t x116 = 58U;
	int32_t t21 = -1207;

	t21 = ((x113==x114)==(x115*x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = 6766697450LLU;
	uint32_t x118 = 340U;
	volatile int32_t t22 = 151219728;

	t22 = ((x117==x118)==(x119*x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x122 = 1U;
	static uint8_t x123 = UINT8_MAX;
	int64_t x124 = -1LL;
	volatile int32_t t23 = -518872;

	t23 = ((x121==x122)==(x123*x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MAX;
	uint16_t x127 = 53U;
	static uint64_t x128 = 58378236LLU;

	t24 = ((x125==x126)==(x127*x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x129 = 36158087118LLU;
	static int16_t x130 = -1;
	int8_t x131 = 31;
	uint64_t x132 = 2480727942691352477LLU;
	int32_t t25 = 110340299;

	t25 = ((x129==x130)==(x131*x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = INT8_MAX;
	uint8_t x139 = 1U;
	static volatile int32_t t26 = 10271;

	t26 = ((x137==x138)==(x139*x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	volatile uint64_t x147 = 2LLU;
	static int8_t x148 = INT8_MAX;
	static volatile int32_t t27 = -2242;

	t27 = ((x145==x146)==(x147*x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x150 = 722233568569911LLU;
	int32_t x151 = INT32_MIN;
	int8_t x152 = 1;

	t28 = ((x149==x150)==(x151*x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x157 = UINT64_MAX;
	volatile int32_t x158 = INT32_MIN;

	t29 = ((x157==x158)==(x159*x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x165 = UINT64_MAX;
	int16_t x167 = -1;
	int64_t x168 = INT64_MAX;
	volatile int32_t t30 = 15;

	t30 = ((x165==x166)==(x167*x168));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x170 = 34707894642LL;
	uint16_t x171 = 119U;
	static int32_t x172 = -11;
	int32_t t31 = 1116;

	t31 = ((x169==x170)==(x171*x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x177 = -577410;
	static int32_t t32 = 1053921902;

	t32 = ((x177==x178)==(x179*x180));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x181 = INT16_MIN;
	int32_t x182 = -1;
	volatile int32_t x183 = -1958257;

	t33 = ((x181==x182)==(x183*x184));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x185 = 12U;
	int64_t x186 = -399LL;
	uint64_t x187 = 1635006662174LLU;
	int64_t x188 = -1639601974689450LL;
	int32_t t34 = -512493;

	t34 = ((x185==x186)==(x187*x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x189 = 0U;
	int8_t x190 = -3;
	int32_t x191 = INT32_MIN;
	volatile uint64_t x192 = 6914095LLU;
	int32_t t35 = 44584;

	t35 = ((x189==x190)==(x191*x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = INT16_MIN;
	static uint32_t x196 = UINT32_MAX;
	volatile int32_t t36 = -7;

	t36 = ((x193==x194)==(x195*x196));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x197 = INT16_MAX;
	int32_t x198 = 3974070;
	uint64_t x199 = 911756803250LLU;
	int64_t x200 = INT64_MAX;
	volatile int32_t t37 = 109361163;

	t37 = ((x197==x198)==(x199*x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x202 = INT16_MIN;
	int16_t x203 = -1;
	int16_t x204 = -1897;
	int32_t t38 = 13;

	t38 = ((x201==x202)==(x203*x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MIN;
	volatile int32_t x206 = INT32_MIN;
	uint32_t x207 = 163236521U;
	int16_t x208 = INT16_MAX;
	int32_t t39 = -118;

	t39 = ((x205==x206)==(x207*x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x213 = -1;
	static int64_t x214 = INT64_MIN;
	int16_t x215 = INT16_MAX;
	uint16_t x216 = 8436U;
	volatile int32_t t40 = 3600;

	t40 = ((x213==x214)==(x215*x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x217 = 71LLU;
	static int64_t x218 = -1LL;
	static volatile int16_t x220 = INT16_MIN;
	static volatile int32_t t41 = 1;

	t41 = ((x217==x218)==(x219*x220));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = INT8_MIN;
	int32_t x223 = -1;
	int8_t x224 = INT8_MIN;

	t42 = ((x221==x222)==(x223*x224));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x233 = -4;
	int32_t x234 = INT32_MIN;
	int8_t x235 = 1;
	static volatile int64_t x236 = -1LL;
	static volatile int32_t t43 = -1114;

	t43 = ((x233==x234)==(x235*x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x238 = INT64_MIN;
	int8_t x240 = -25;
	int32_t t44 = -203418;

	t44 = ((x237==x238)==(x239*x240));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x253 = 1;
	volatile int64_t x254 = INT64_MAX;
	int64_t x255 = INT64_MAX;
	int8_t x256 = 0;

	t45 = ((x253==x254)==(x255*x256));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MAX;
	volatile uint8_t x259 = 0U;
	int64_t x260 = -5046621867326LL;
	int32_t t46 = -46;

	t46 = ((x257==x258)==(x259*x260));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x261 = -10;
	static volatile int16_t x263 = 11364;
	uint8_t x264 = UINT8_MAX;
	int32_t t47 = -648;

	t47 = ((x261==x262)==(x263*x264));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x265 = UINT32_MAX;
	int32_t x266 = 4831;
	static int8_t x267 = 1;
	uint16_t x268 = 709U;
	static int32_t t48 = -3101;

	t48 = ((x265==x266)==(x267*x268));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x269 = INT32_MAX;
	int64_t x270 = INT64_MAX;
	uint32_t x271 = 3203018U;
	uint8_t x272 = 106U;

	t49 = ((x269==x270)==(x271*x272));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x273 = 194177746U;
	int8_t x274 = 1;
	volatile int32_t t50 = 62220;

	t50 = ((x273==x274)==(x275*x276));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x281 = INT16_MAX;
	static uint8_t x282 = UINT8_MAX;
	int16_t x283 = 0;
	static int32_t t51 = 31163669;

	t51 = ((x281==x282)==(x283*x284));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x285 = -500;
	int64_t x286 = INT64_MIN;
	int32_t x287 = -594995471;
	volatile int32_t t52 = 157269864;

	t52 = ((x285==x286)==(x287*x288));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x289 = INT16_MAX;
	int8_t x290 = INT8_MIN;
	static volatile uint8_t x291 = UINT8_MAX;
	uint32_t x292 = 413506899U;
	static volatile int32_t t53 = 7;

	t53 = ((x289==x290)==(x291*x292));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x297 = INT64_MAX;
	static volatile int8_t x298 = 0;
	static uint32_t x299 = 62069815U;
	int8_t x300 = 1;

	t54 = ((x297==x298)==(x299*x300));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x309 = -1;
	int8_t x310 = 0;
	volatile int8_t x311 = -1;
	volatile int32_t t55 = 0;

	t55 = ((x309==x310)==(x311*x312));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x313 = -1;
	static volatile uint16_t x314 = UINT16_MAX;
	int8_t x316 = -2;

	t56 = ((x313==x314)==(x315*x316));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x321 = 1751U;
	int64_t x322 = INT64_MIN;
	volatile uint32_t x323 = UINT32_MAX;
	int16_t x324 = -4068;
	volatile int32_t t57 = -1882;

	t57 = ((x321==x322)==(x323*x324));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x325 = -1LL;
	volatile uint8_t x326 = 0U;
	volatile uint8_t x327 = 44U;
	uint64_t x328 = UINT64_MAX;
	int32_t t58 = 9587165;

	t58 = ((x325==x326)==(x327*x328));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x329 = INT64_MIN;
	int16_t x330 = INT16_MAX;
	int32_t x331 = INT32_MIN;
	static int64_t x332 = -1LL;
	int32_t t59 = 474170845;

	t59 = ((x329==x330)==(x331*x332));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x333 = INT16_MAX;
	volatile int16_t x334 = INT16_MAX;
	volatile int64_t x335 = 90514755846309683LL;
	int32_t t60 = -3;

	t60 = ((x333==x334)==(x335*x336));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x337 = -4;
	volatile uint32_t x338 = UINT32_MAX;
	static uint16_t x339 = 2312U;
	static volatile uint64_t x340 = 60LLU;
	int32_t t61 = -12;

	t61 = ((x337==x338)==(x339*x340));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x341 = 28;
	volatile uint16_t x342 = 5063U;
	volatile uint8_t x343 = 0U;
	static volatile int16_t x344 = -6;
	volatile int32_t t62 = 12;

	t62 = ((x341==x342)==(x343*x344));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x349 = INT32_MAX;
	static int64_t x350 = 1891554560LL;
	static uint64_t x351 = 224886013LLU;
	int8_t x352 = INT8_MIN;
	int32_t t63 = -57178;

	t63 = ((x349==x350)==(x351*x352));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x353 = 24654U;
	static int16_t x354 = INT16_MAX;
	int16_t x355 = 1;
	int32_t t64 = 1786;

	t64 = ((x353==x354)==(x355*x356));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x357 = 72867050U;
	static int64_t x358 = INT64_MIN;
	volatile int16_t x359 = INT16_MIN;
	int16_t x360 = 1;
	int32_t t65 = -37768;

	t65 = ((x357==x358)==(x359*x360));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x361 = UINT16_MAX;
	int16_t x362 = INT16_MIN;
	int16_t x363 = INT16_MIN;
	volatile int32_t t66 = 515;

	t66 = ((x361==x362)==(x363*x364));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x366 = INT64_MAX;
	int64_t x368 = -285103LL;
	volatile int32_t t67 = 7847;

	t67 = ((x365==x366)==(x367*x368));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x369 = 27723734502108281LLU;
	int16_t x371 = INT16_MIN;
	int32_t x372 = 28931;
	static int32_t t68 = 56;

	t68 = ((x369==x370)==(x371*x372));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x373 = INT16_MIN;
	volatile uint64_t x374 = UINT64_MAX;
	int16_t x375 = -7798;

	t69 = ((x373==x374)==(x375*x376));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x377 = INT64_MIN;
	int32_t x378 = INT32_MAX;
	volatile uint64_t x379 = 636952091LLU;
	volatile int16_t x380 = 0;

	t70 = ((x377==x378)==(x379*x380));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x381 = INT32_MIN;
	uint32_t x382 = 1771U;
	int64_t x383 = 52370588188LL;
	int8_t x384 = 0;
	int32_t t71 = 31402758;

	t71 = ((x381==x382)==(x383*x384));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x385 = INT64_MAX;
	volatile int8_t x386 = INT8_MIN;
	int8_t x387 = 39;
	static uint64_t x388 = 12959236930510069LLU;
	int32_t t72 = 39082;

	t72 = ((x385==x386)==(x387*x388));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x389 = INT8_MIN;
	volatile uint32_t x391 = 16059698U;
	int16_t x392 = -1;
	int32_t t73 = 1;

	t73 = ((x389==x390)==(x391*x392));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x393 = 27U;
	uint32_t x394 = 7821U;
	int16_t x395 = 0;
	int32_t t74 = 40490;

	t74 = ((x393==x394)==(x395*x396));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x398 = UINT64_MAX;
	uint64_t x399 = 846005377852773LLU;
	volatile int32_t t75 = 29;

	t75 = ((x397==x398)==(x399*x400));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x402 = INT16_MIN;
	static int64_t x403 = -1LL;
	static int8_t x404 = -16;
	int32_t t76 = -16;

	t76 = ((x401==x402)==(x403*x404));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x405 = 13U;
	uint64_t x406 = 1567411LLU;
	uint16_t x407 = 1U;
	int64_t x408 = INT64_MIN;
	volatile int32_t t77 = 55;

	t77 = ((x405==x406)==(x407*x408));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x409 = -1;
	int64_t x410 = INT64_MAX;
	volatile int8_t x411 = -1;
	int32_t x412 = 62;
	int32_t t78 = -1;

	t78 = ((x409==x410)==(x411*x412));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x422 = UINT8_MAX;
	static uint8_t x423 = UINT8_MAX;
	volatile int32_t t79 = 661421183;

	t79 = ((x421==x422)==(x423*x424));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x425 = 24U;
	int64_t x427 = -1LL;
	int32_t t80 = -57542;

	t80 = ((x425==x426)==(x427*x428));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x430 = 55LL;
	int32_t t81 = 135;

	t81 = ((x429==x430)==(x431*x432));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x433 = UINT8_MAX;
	int64_t x434 = INT64_MAX;
	static int16_t x435 = INT16_MAX;
	static int32_t t82 = -119071970;

	t82 = ((x433==x434)==(x435*x436));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x437 = UINT16_MAX;
	static uint32_t x438 = UINT32_MAX;
	volatile uint8_t x439 = UINT8_MAX;
	int16_t x440 = INT16_MAX;
	volatile int32_t t83 = 1;

	t83 = ((x437==x438)==(x439*x440));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x441 = 22U;
	static volatile int16_t x442 = INT16_MIN;
	uint8_t x444 = UINT8_MAX;
	int32_t t84 = 307543;

	t84 = ((x441==x442)==(x443*x444));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x446 = INT32_MIN;
	volatile int32_t x447 = 843365;
	int32_t x448 = 0;

	t85 = ((x445==x446)==(x447*x448));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x449 = 2U;
	static uint64_t x450 = 42087418466LLU;
	int64_t x451 = -1LL;
	volatile uint32_t x452 = UINT32_MAX;
	volatile int32_t t86 = 4;

	t86 = ((x449==x450)==(x451*x452));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x457 = 51895390LLU;
	uint64_t x458 = 1366LLU;
	volatile uint64_t x459 = 71941888LLU;
	static int16_t x460 = 1549;
	int32_t t87 = -1;

	t87 = ((x457==x458)==(x459*x460));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x461 = INT64_MIN;
	volatile int8_t x462 = -1;
	int16_t x463 = INT16_MIN;
	static uint32_t x464 = UINT32_MAX;
	volatile int32_t t88 = -36;

	t88 = ((x461==x462)==(x463*x464));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x467 = INT16_MAX;
	static int8_t x468 = 13;
	static volatile int32_t t89 = -60;

	t89 = ((x465==x466)==(x467*x468));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x469 = -4;
	int32_t x470 = INT32_MIN;
	volatile uint16_t x471 = 25285U;
	uint64_t x472 = UINT64_MAX;
	volatile int32_t t90 = -1652104;

	t90 = ((x469==x470)==(x471*x472));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x473 = INT16_MIN;
	volatile uint16_t x474 = 237U;
	uint64_t x475 = 44620925LLU;
	int16_t x476 = INT16_MIN;
	int32_t t91 = -12;

	t91 = ((x473==x474)==(x475*x476));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x485 = 18631837286471LLU;
	uint8_t x486 = 1U;
	int16_t x487 = INT16_MAX;
	volatile int16_t x488 = INT16_MIN;
	volatile int32_t t92 = 60529494;

	t92 = ((x485==x486)==(x487*x488));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x489 = INT64_MIN;
	int32_t x490 = -1;
	static int8_t x491 = 1;
	volatile uint8_t x492 = 0U;
	volatile int32_t t93 = -368;

	t93 = ((x489==x490)==(x491*x492));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x493 = UINT8_MAX;
	static int8_t x494 = INT8_MIN;
	uint64_t x495 = 113052LLU;
	int8_t x496 = INT8_MIN;

	t94 = ((x493==x494)==(x495*x496));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x497 = INT16_MIN;
	static volatile uint32_t x500 = 188U;
	volatile int32_t t95 = 33771;

	t95 = ((x497==x498)==(x499*x500));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x501 = INT16_MIN;
	volatile uint8_t x502 = 30U;
	volatile uint64_t x503 = 2014118LLU;
	uint8_t x504 = 11U;
	int32_t t96 = 5;

	t96 = ((x501==x502)==(x503*x504));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x505 = -508;
	volatile int32_t x506 = 55669;
	static uint64_t x507 = 58LLU;

	t97 = ((x505==x506)==(x507*x508));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x517 = INT64_MIN;
	static int8_t x518 = 2;
	uint64_t x519 = UINT64_MAX;
	int32_t x520 = INT32_MAX;
	static volatile int32_t t98 = 4325;

	t98 = ((x517==x518)==(x519*x520));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x522 = 4;
	int8_t x524 = -1;
	int32_t t99 = 47135;

	t99 = ((x521==x522)==(x523*x524));

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

