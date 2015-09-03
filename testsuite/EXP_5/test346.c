#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 11U;
static int64_t x7 = INT64_MAX;
static uint8_t x23 = 0U;
int64_t x29 = INT64_MIN;
static uint16_t x34 = 27859U;
uint64_t x37 = 1646LLU;
int64_t x43 = -1LL;
int32_t t10 = -4;
static uint32_t x75 = UINT32_MAX;
static int8_t x83 = INT8_MAX;
static int32_t t15 = -506317796;
int16_t x107 = INT16_MAX;
volatile uint32_t x108 = 1U;
int8_t x111 = -52;
int32_t x113 = INT32_MIN;
int16_t x114 = -1;
volatile int16_t x119 = INT16_MIN;
volatile int32_t t21 = -49;
volatile int64_t x151 = -1LL;
static volatile uint64_t x156 = UINT64_MAX;
uint64_t x173 = 72112366747394LLU;
static int16_t x178 = 0;
static volatile uint64_t x179 = 1867LLU;
volatile uint64_t x180 = 203037579LLU;
int32_t t28 = -49946;
int32_t x189 = -850858460;
volatile int64_t x198 = 1LL;
uint64_t x199 = UINT64_MAX;
int16_t x202 = INT16_MAX;
int16_t x203 = INT16_MIN;
volatile int64_t x206 = INT64_MIN;
static int64_t x208 = INT64_MIN;
uint32_t x214 = 0U;
volatile uint32_t x219 = UINT32_MAX;
static int16_t x225 = 1;
int32_t t36 = -846994864;
volatile int16_t x239 = INT16_MIN;
static uint32_t x240 = UINT32_MAX;
static volatile int32_t t37 = 217;
int16_t x243 = 4374;
static volatile int32_t t38 = 9928;
int8_t x247 = INT8_MIN;
uint16_t x249 = 1U;
uint16_t x250 = UINT16_MAX;
volatile uint16_t x253 = UINT16_MAX;
static int64_t x263 = 517176326059LL;
volatile int32_t x269 = -3;
int16_t x278 = -674;
volatile int64_t x284 = INT64_MIN;
static int32_t x288 = INT32_MAX;
volatile int32_t t50 = 10;
int16_t x329 = -1;
int32_t x333 = INT32_MIN;
int16_t x350 = INT16_MIN;
int8_t x351 = INT8_MIN;
int32_t x369 = INT32_MIN;
int32_t x380 = INT32_MIN;
static uint16_t x384 = 470U;
static int16_t x390 = -1;
int32_t x391 = -1;
volatile int32_t t64 = -1;
volatile int8_t x397 = 5;
int32_t x399 = -64023207;
static int64_t x407 = 76277962337LL;
int8_t x409 = -1;
static uint16_t x417 = UINT16_MAX;
uint8_t x419 = UINT8_MAX;
int32_t x429 = INT32_MAX;
uint16_t x439 = UINT16_MAX;
uint32_t x440 = 52U;
volatile int64_t x446 = 132962LL;
volatile int16_t x448 = INT16_MAX;
uint16_t x465 = 1211U;
uint32_t x466 = UINT32_MAX;
int8_t x469 = 58;
volatile int16_t x470 = -1;
uint16_t x475 = 4451U;
volatile uint32_t x476 = 2U;
int8_t x478 = -1;
uint32_t x482 = UINT32_MAX;
int64_t x487 = -1LL;
volatile int32_t t80 = -1086;
volatile uint64_t x495 = 139365132093169566LLU;
volatile uint64_t x496 = 4840257453611786LLU;
volatile int64_t x513 = INT64_MIN;
int8_t x514 = -50;
uint32_t x518 = UINT32_MAX;
int32_t t85 = 1081057;
uint16_t x529 = 1021U;
uint64_t x532 = UINT64_MAX;
int32_t x543 = 11;
uint64_t x551 = 317565199828643LLU;
static uint16_t x555 = 3U;
int8_t x561 = INT8_MAX;
uint16_t x562 = 1554U;
volatile uint8_t x564 = UINT8_MAX;
volatile int32_t t91 = -22277;
int16_t x579 = -2752;
int32_t x581 = 211865844;
int16_t x582 = INT16_MIN;
int8_t x584 = INT8_MAX;
int64_t x585 = 151800165LL;
int64_t x588 = -1LL;
uint8_t x590 = 13U;
uint32_t x591 = UINT32_MAX;
uint32_t x626 = 44303450U;
static int64_t x628 = INT64_MIN;
static volatile int32_t t99 = 2;


void f0(void) {
	uint8_t x2 = 1U;
	int64_t x3 = INT64_MAX;
	volatile int64_t x4 = INT64_MIN;
	int32_t t0 = 1407068;

	t0 = (x1==((x2*x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -57582233LL;
	int16_t x6 = -1;
	int32_t x8 = 880537582;
	int32_t t1 = -5396028;

	t1 = (x5==((x6*x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = 173;
	uint32_t x15 = 1339948847U;
	int32_t x16 = 6710;
	volatile int32_t t2 = 243253907;

	t2 = (x13==((x14*x15)+x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 0U;
	int8_t x18 = INT8_MIN;
	static int16_t x19 = INT16_MIN;
	uint8_t x20 = UINT8_MAX;
	int32_t t3 = -1;

	t3 = (x17==((x18*x19)+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x21 = -403518878622099LL;
	static uint64_t x22 = UINT64_MAX;
	uint8_t x24 = 3U;
	int32_t t4 = -77158;

	t4 = (x21==((x22*x23)+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -2221229052LL;
	uint16_t x26 = 42U;
	int8_t x27 = INT8_MIN;
	static volatile int8_t x28 = INT8_MIN;
	volatile int32_t t5 = 43129;

	t5 = (x25==((x26*x27)+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x30 = 1466U;
	uint32_t x31 = 12940311U;
	int32_t x32 = -10;
	static int32_t t6 = 1;

	t6 = (x29==((x30*x31)+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 12565U;
	int16_t x35 = -1;
	int64_t x36 = -1LL;
	volatile int32_t t7 = 36501561;

	t7 = (x33==((x34*x35)+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = 55061124697042868LL;
	int16_t x39 = -2;
	int8_t x40 = INT8_MAX;
	static int32_t t8 = 90363662;

	t8 = (x37==((x38*x39)+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	int8_t x42 = INT8_MIN;
	uint16_t x44 = 9653U;
	int32_t t9 = 11;

	t9 = (x41==((x42*x43)+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 863U;
	static uint8_t x54 = 0U;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = 1U;

	t10 = (x53==((x54*x55)+x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x69 = UINT64_MAX;
	uint16_t x70 = UINT16_MAX;
	static int32_t x71 = -8;
	static volatile int32_t x72 = INT32_MAX;
	volatile int32_t t11 = 1;

	t11 = (x69==((x70*x71)+x72));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x73 = INT16_MIN;
	volatile int32_t x74 = -27;
	int64_t x76 = INT64_MIN;
	volatile int32_t t12 = 167;

	t12 = (x73==((x74*x75)+x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = -1LL;
	int8_t x82 = -1;
	int16_t x84 = -1;
	int32_t t13 = 0;

	t13 = (x81==((x82*x83)+x84));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x89 = -1;
	int64_t x90 = -19508675978008LL;
	static uint64_t x91 = UINT64_MAX;
	volatile int64_t x92 = 0LL;
	static volatile int32_t t14 = -53307;

	t14 = (x89==((x90*x91)+x92));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x93 = UINT64_MAX;
	uint32_t x94 = 2237U;
	volatile uint16_t x95 = 14978U;
	int16_t x96 = -28;

	t15 = (x93==((x94*x95)+x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x97 = UINT64_MAX;
	static int16_t x98 = -1;
	int64_t x99 = 7777596LL;
	int16_t x100 = INT16_MIN;
	int32_t t16 = 14454058;

	t16 = (x97==((x98*x99)+x100));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x105 = -1;
	uint16_t x106 = 64U;
	int32_t t17 = -18147;

	t17 = (x105==((x106*x107)+x108));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x109 = 2969754U;
	int8_t x110 = 0;
	static int64_t x112 = -1LL;
	volatile int32_t t18 = -1;

	t18 = (x109==((x110*x111)+x112));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x115 = INT16_MIN;
	volatile int32_t x116 = -3213;
	int32_t t19 = -85579;

	t19 = (x113==((x114*x115)+x116));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = -1;
	static uint32_t x118 = UINT32_MAX;
	int32_t x120 = -1;
	volatile int32_t t20 = -232;

	t20 = (x117==((x118*x119)+x120));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x129 = INT8_MAX;
	int8_t x130 = INT8_MIN;
	uint64_t x131 = 4937LLU;
	uint16_t x132 = 1U;

	t21 = (x129==((x130*x131)+x132));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x149 = 15641LLU;
	int32_t x150 = -1;
	volatile uint8_t x152 = 5U;
	volatile int32_t t22 = 286;

	t22 = (x149==((x150*x151)+x152));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x153 = INT64_MIN;
	int16_t x154 = INT16_MIN;
	int8_t x155 = INT8_MAX;
	int32_t t23 = -12;

	t23 = (x153==((x154*x155)+x156));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x157 = 1;
	volatile int8_t x158 = INT8_MAX;
	int32_t x159 = 3;
	volatile uint8_t x160 = 1U;
	int32_t t24 = 171753;

	t24 = (x157==((x158*x159)+x160));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x161 = INT64_MAX;
	uint64_t x162 = 38256573956442304LLU;
	volatile int8_t x163 = INT8_MAX;
	static volatile int16_t x164 = -1;
	static int32_t t25 = -1323;

	t25 = (x161==((x162*x163)+x164));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x165 = INT16_MAX;
	int8_t x166 = INT8_MIN;
	volatile uint16_t x167 = 0U;
	int32_t x168 = -1;
	static volatile int32_t t26 = -192;

	t26 = (x165==((x166*x167)+x168));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x174 = 577928LLU;
	volatile int8_t x175 = INT8_MAX;
	int32_t x176 = INT32_MIN;
	volatile int32_t t27 = -76997;

	t27 = (x173==((x174*x175)+x176));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x177 = -1LL;

	t28 = (x177==((x178*x179)+x180));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x181 = 1043U;
	int8_t x182 = -1;
	static volatile uint8_t x183 = UINT8_MAX;
	uint16_t x184 = UINT16_MAX;
	int32_t t29 = 2040773;

	t29 = (x181==((x182*x183)+x184));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x190 = 248;
	int32_t x191 = -32;
	uint32_t x192 = UINT32_MAX;
	int32_t t30 = 138763244;

	t30 = (x189==((x190*x191)+x192));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x197 = -1;
	volatile int32_t x200 = -1;
	static volatile int32_t t31 = 904145;

	t31 = (x197==((x198*x199)+x200));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x201 = 533336277583LL;
	volatile int16_t x204 = -4547;
	int32_t t32 = -3777417;

	t32 = (x201==((x202*x203)+x204));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x205 = -1;
	uint64_t x207 = 26485343800771LLU;
	volatile int32_t t33 = 1;

	t33 = (x205==((x206*x207)+x208));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x213 = INT8_MIN;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = 0U;
	int32_t t34 = 1;

	t34 = (x213==((x214*x215)+x216));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x217 = -12;
	uint16_t x218 = UINT16_MAX;
	int64_t x220 = INT64_MIN;
	volatile int32_t t35 = 2;

	t35 = (x217==((x218*x219)+x220));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x226 = 0U;
	int8_t x227 = INT8_MIN;
	static int16_t x228 = INT16_MIN;

	t36 = (x225==((x226*x227)+x228));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x237 = INT32_MIN;
	volatile int8_t x238 = 2;

	t37 = (x237==((x238*x239)+x240));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x241 = 559347343LL;
	volatile uint32_t x242 = 1767U;
	static volatile int32_t x244 = INT32_MIN;

	t38 = (x241==((x242*x243)+x244));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x245 = INT8_MAX;
	int64_t x246 = 429594LL;
	volatile int8_t x248 = 4;
	volatile int32_t t39 = 6167;

	t39 = (x245==((x246*x247)+x248));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x251 = UINT64_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t40 = 5;

	t40 = (x249==((x250*x251)+x252));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x254 = -1;
	int8_t x255 = INT8_MAX;
	int64_t x256 = 16594561170LL;
	volatile int32_t t41 = -25743686;

	t41 = (x253==((x254*x255)+x256));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x261 = 31U;
	int16_t x262 = 6;
	static uint64_t x264 = UINT64_MAX;
	int32_t t42 = 22;

	t42 = (x261==((x262*x263)+x264));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x265 = -1LL;
	uint32_t x266 = UINT32_MAX;
	uint8_t x267 = 10U;
	int16_t x268 = 3;
	static volatile int32_t t43 = -1100724;

	t43 = (x265==((x266*x267)+x268));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x270 = INT32_MAX;
	uint32_t x271 = 3576U;
	int64_t x272 = -1LL;
	int32_t t44 = -9382168;

	t44 = (x269==((x270*x271)+x272));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x277 = 3U;
	static int16_t x279 = 10;
	int32_t x280 = -1;
	volatile int32_t t45 = -95086;

	t45 = (x277==((x278*x279)+x280));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x281 = INT16_MAX;
	uint64_t x282 = 152961274LLU;
	int16_t x283 = INT16_MIN;
	int32_t t46 = -69663;

	t46 = (x281==((x282*x283)+x284));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x285 = INT16_MIN;
	uint64_t x286 = UINT64_MAX;
	uint8_t x287 = 11U;
	static int32_t t47 = -49283311;

	t47 = (x285==((x286*x287)+x288));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x297 = 3530245703320LLU;
	uint64_t x298 = UINT64_MAX;
	volatile int16_t x299 = INT16_MAX;
	volatile uint64_t x300 = 3140521711307732LLU;
	volatile int32_t t48 = 5;

	t48 = (x297==((x298*x299)+x300));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x301 = INT16_MIN;
	static uint16_t x302 = 73U;
	volatile uint16_t x303 = 132U;
	volatile int64_t x304 = 487750121LL;
	volatile int32_t t49 = -274828136;

	t49 = (x301==((x302*x303)+x304));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x309 = INT32_MAX;
	static int32_t x310 = -1;
	int16_t x311 = -4;
	int16_t x312 = -190;

	t50 = (x309==((x310*x311)+x312));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x313 = INT64_MIN;
	volatile int32_t x314 = -1;
	uint64_t x315 = 15LLU;
	volatile int32_t x316 = INT32_MAX;
	volatile int32_t t51 = -835498806;

	t51 = (x313==((x314*x315)+x316));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x321 = -1;
	uint64_t x322 = 94227540LLU;
	int8_t x323 = 1;
	static int32_t x324 = INT32_MIN;
	int32_t t52 = -118;

	t52 = (x321==((x322*x323)+x324));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x330 = 85U;
	uint32_t x331 = 90038937U;
	int32_t x332 = INT32_MIN;
	int32_t t53 = -129680434;

	t53 = (x329==((x330*x331)+x332));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x334 = -928;
	int16_t x335 = INT16_MIN;
	uint32_t x336 = 4041U;
	static volatile int32_t t54 = 82302363;

	t54 = (x333==((x334*x335)+x336));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x337 = UINT32_MAX;
	volatile int8_t x338 = INT8_MIN;
	static uint32_t x339 = UINT32_MAX;
	volatile uint16_t x340 = UINT16_MAX;
	volatile int32_t t55 = -3371624;

	t55 = (x337==((x338*x339)+x340));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x352 = 3922U;
	volatile int32_t t56 = -1;

	t56 = (x349==((x350*x351)+x352));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x353 = INT64_MIN;
	int16_t x354 = INT16_MIN;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = INT32_MIN;
	volatile int32_t t57 = -6;

	t57 = (x353==((x354*x355)+x356));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x361 = 5379844558083198LLU;
	static int8_t x362 = -1;
	uint8_t x363 = 0U;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t58 = -88;

	t58 = (x361==((x362*x363)+x364));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x370 = -473;
	static volatile uint64_t x371 = 3053149LLU;
	int32_t x372 = -4433752;
	int32_t t59 = -6661;

	t59 = (x369==((x370*x371)+x372));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x373 = INT8_MIN;
	uint64_t x374 = 17190731063596168LLU;
	int32_t x375 = INT32_MIN;
	static int16_t x376 = INT16_MIN;
	volatile int32_t t60 = 15;

	t60 = (x373==((x374*x375)+x376));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x377 = 5U;
	volatile uint16_t x378 = 13U;
	uint32_t x379 = 848U;
	static volatile int32_t t61 = 1;

	t61 = (x377==((x378*x379)+x380));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x381 = 2;
	uint64_t x382 = UINT64_MAX;
	static int32_t x383 = INT32_MIN;
	volatile int32_t t62 = -907100;

	t62 = (x381==((x382*x383)+x384));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x389 = INT64_MIN;
	int32_t x392 = -1;
	int32_t t63 = 13622710;

	t63 = (x389==((x390*x391)+x392));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x393 = -1;
	uint8_t x394 = 29U;
	volatile uint32_t x395 = 3187U;
	int64_t x396 = -1LL;

	t64 = (x393==((x394*x395)+x396));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x398 = 516883240598924083LLU;
	int16_t x400 = 4479;
	volatile int32_t t65 = -21;

	t65 = (x397==((x398*x399)+x400));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x405 = 12U;
	int8_t x406 = INT8_MIN;
	int16_t x408 = INT16_MAX;
	volatile int32_t t66 = -14206542;

	t66 = (x405==((x406*x407)+x408));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x410 = -1;
	static uint8_t x411 = 3U;
	int32_t x412 = -1;
	int32_t t67 = -1;

	t67 = (x409==((x410*x411)+x412));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x418 = 31644194U;
	int16_t x420 = INT16_MIN;
	static int32_t t68 = 88781428;

	t68 = (x417==((x418*x419)+x420));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x430 = 14U;
	uint8_t x431 = 1U;
	int64_t x432 = -1722964978LL;
	volatile int32_t t69 = 4180905;

	t69 = (x429==((x430*x431)+x432));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x433 = INT32_MIN;
	uint8_t x434 = 21U;
	int32_t x435 = -6827;
	int64_t x436 = INT64_MAX;
	int32_t t70 = -6;

	t70 = (x433==((x434*x435)+x436));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x437 = 0U;
	static volatile int8_t x438 = 0;
	static int32_t t71 = 0;

	t71 = (x437==((x438*x439)+x440));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x445 = INT64_MIN;
	static uint8_t x447 = 22U;
	int32_t t72 = -78051491;

	t72 = (x445==((x446*x447)+x448));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x453 = -28;
	int8_t x454 = -17;
	uint32_t x455 = UINT32_MAX;
	int32_t x456 = INT32_MAX;
	volatile int32_t t73 = 42624;

	t73 = (x453==((x454*x455)+x456));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x461 = -1LL;
	static int16_t x462 = 348;
	volatile uint8_t x463 = 1U;
	int8_t x464 = -1;
	volatile int32_t t74 = 948683;

	t74 = (x461==((x462*x463)+x464));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x467 = 214U;
	int8_t x468 = INT8_MIN;
	volatile int32_t t75 = -33;

	t75 = (x465==((x466*x467)+x468));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x471 = INT16_MAX;
	int8_t x472 = -1;
	int32_t t76 = 4207;

	t76 = (x469==((x470*x471)+x472));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x473 = UINT16_MAX;
	int64_t x474 = -1LL;
	volatile int32_t t77 = 329478405;

	t77 = (x473==((x474*x475)+x476));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x477 = INT32_MAX;
	uint32_t x479 = 1453U;
	uint64_t x480 = 53062144558251144LLU;
	int32_t t78 = -342;

	t78 = (x477==((x478*x479)+x480));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x481 = 100526760857LL;
	uint32_t x483 = 462570U;
	volatile uint8_t x484 = UINT8_MAX;
	int32_t t79 = 11549488;

	t79 = (x481==((x482*x483)+x484));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x485 = 12;
	uint8_t x486 = 42U;
	int64_t x488 = INT64_MAX;

	t80 = (x485==((x486*x487)+x488));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x489 = UINT64_MAX;
	static uint64_t x490 = UINT64_MAX;
	int32_t x491 = -1;
	int32_t x492 = INT32_MAX;
	int32_t t81 = 1226717;

	t81 = (x489==((x490*x491)+x492));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x493 = -1LL;
	int64_t x494 = INT64_MIN;
	static int32_t t82 = -964374301;

	t82 = (x493==((x494*x495)+x496));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x515 = 5U;
	int16_t x516 = -12;
	int32_t t83 = 0;

	t83 = (x513==((x514*x515)+x516));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x517 = 154267;
	volatile int8_t x519 = 34;
	int8_t x520 = -56;
	int32_t t84 = -352835;

	t84 = (x517==((x518*x519)+x520));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x525 = INT64_MAX;
	uint8_t x526 = 6U;
	uint16_t x527 = UINT16_MAX;
	int16_t x528 = -4;

	t85 = (x525==((x526*x527)+x528));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x530 = INT16_MIN;
	volatile uint32_t x531 = 15034U;
	volatile int32_t t86 = 302;

	t86 = (x529==((x530*x531)+x532));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x541 = INT16_MAX;
	uint64_t x542 = 2128608LLU;
	int8_t x544 = INT8_MIN;
	int32_t t87 = -17981435;

	t87 = (x541==((x542*x543)+x544));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x549 = 28555;
	int32_t x550 = INT32_MIN;
	int16_t x552 = INT16_MIN;
	volatile int32_t t88 = 91;

	t88 = (x549==((x550*x551)+x552));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x553 = 23U;
	volatile int16_t x554 = INT16_MAX;
	uint64_t x556 = 2938739LLU;
	volatile int32_t t89 = 3421;

	t89 = (x553==((x554*x555)+x556));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x563 = INT8_MIN;
	volatile int32_t t90 = -11;

	t90 = (x561==((x562*x563)+x564));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x569 = 1;
	int8_t x570 = 1;
	int8_t x571 = INT8_MAX;
	uint8_t x572 = UINT8_MAX;

	t91 = (x569==((x570*x571)+x572));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x577 = 325LL;
	static uint8_t x578 = 108U;
	int8_t x580 = -2;
	volatile int32_t t92 = 96;

	t92 = (x577==((x578*x579)+x580));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x583 = UINT32_MAX;
	volatile int32_t t93 = 23;

	t93 = (x581==((x582*x583)+x584));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x586 = INT16_MIN;
	static int8_t x587 = INT8_MIN;
	volatile int32_t t94 = -500;

	t94 = (x585==((x586*x587)+x588));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x589 = INT8_MAX;
	int32_t x592 = 143859;
	int32_t t95 = -3767317;

	t95 = (x589==((x590*x591)+x592));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x601 = INT8_MAX;
	volatile int8_t x602 = INT8_MIN;
	static int64_t x603 = -32341457607921177LL;
	int64_t x604 = INT64_MIN;
	volatile int32_t t96 = 123132964;

	t96 = (x601==((x602*x603)+x604));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x609 = 6U;
	uint32_t x610 = UINT32_MAX;
	int32_t x611 = INT32_MAX;
	uint8_t x612 = 13U;
	int32_t t97 = -1931;

	t97 = (x609==((x610*x611)+x612));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x621 = UINT16_MAX;
	static int8_t x622 = -1;
	uint8_t x623 = 88U;
	static int64_t x624 = 2650248413LL;
	volatile int32_t t98 = 1;

	t98 = (x621==((x622*x623)+x624));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x625 = 1;
	int8_t x627 = -1;

	t99 = (x625==((x626*x627)+x628));

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

