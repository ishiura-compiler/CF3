#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x14 = INT16_MIN;
volatile uint32_t x22 = 425492172U;
int16_t x23 = -43;
volatile int64_t x39 = 15447LL;
uint64_t t6 = 20469045007862306LLU;
uint32_t x51 = UINT32_MAX;
volatile uint64_t t10 = 142441662543LLU;
static uint32_t x71 = 8U;
static int8_t x72 = INT8_MAX;
int32_t x73 = 211932538;
uint16_t x77 = 0U;
int16_t x92 = INT16_MIN;
int32_t x100 = -276295959;
volatile uint64_t t15 = 7945618LLU;
int16_t x110 = 3499;
volatile uint16_t x117 = UINT16_MAX;
volatile uint16_t x118 = 50U;
int32_t x120 = INT32_MIN;
int16_t x156 = INT16_MIN;
uint16_t x169 = 12U;
int16_t x171 = -1;
static uint32_t x187 = UINT32_MAX;
volatile uint64_t t28 = 97617759003945LLU;
int16_t x193 = 175;
uint32_t x215 = 1737142419U;
uint16_t x216 = 1927U;
int32_t x219 = -48;
uint64_t t32 = 69656LLU;
static uint64_t t33 = 4530733LLU;
uint16_t x229 = 2U;
int64_t x248 = -1LL;
uint64_t x264 = UINT64_MAX;
int16_t x281 = INT16_MAX;
uint64_t x294 = 107316LLU;
uint16_t x309 = 3418U;
volatile uint8_t x310 = 2U;
int8_t x312 = -1;
static int8_t x315 = INT8_MIN;
int64_t x323 = INT64_MAX;
volatile uint64_t t46 = 89369202LLU;
static int64_t x334 = 19041746249LL;
volatile uint64_t t47 = 3729348420290LLU;
volatile int16_t x342 = 1;
static uint8_t x344 = 3U;
static int64_t x351 = 56254518297LL;
int64_t t50 = 7301LL;
int64_t x360 = 4816565846LL;
int8_t x363 = 31;
static volatile uint64_t t52 = 550997446739925586LLU;
uint32_t x369 = UINT32_MAX;
uint8_t x373 = UINT8_MAX;
static int8_t x375 = 0;
volatile int32_t t54 = -99;
static uint64_t x380 = 3976968LLU;
volatile int32_t t56 = -51;
uint32_t t57 = 6457U;
static int64_t x407 = -2LL;
volatile uint64_t t58 = 253970004542776800LLU;
int64_t x409 = -1LL;
int8_t x410 = -1;
int64_t x416 = INT64_MIN;
volatile int64_t t61 = 1LL;
int32_t x445 = -1;
volatile int64_t t64 = -2788963711498587887LL;
uint64_t t66 = 51072LLU;
static int8_t x473 = INT8_MIN;
int8_t x482 = -1;
int32_t x484 = -786953314;
volatile int32_t t71 = 116055;
int64_t x504 = -1LL;
static uint32_t x505 = UINT32_MAX;
int8_t x509 = INT8_MAX;
int64_t x521 = -6LL;
volatile uint64_t x523 = UINT64_MAX;
int16_t x538 = INT16_MAX;
int8_t x540 = INT8_MAX;
volatile int32_t x553 = 39902;
static uint8_t x554 = UINT8_MAX;
volatile uint8_t x558 = 17U;
int16_t x560 = INT16_MIN;
uint64_t t84 = 179084201899LLU;
uint64_t x563 = UINT64_MAX;
uint16_t x564 = UINT16_MAX;
uint32_t x565 = 1U;
volatile int64_t t87 = -238LL;
uint64_t t88 = 296601417926103265LLU;
int64_t x613 = -7342LL;
int8_t x618 = -1;
int16_t x625 = 3;
int8_t x638 = -1;
uint8_t x645 = 79U;
uint8_t x646 = 85U;
int32_t x650 = -1;
static int64_t x651 = 216861LL;
int64_t x656 = -1LL;
volatile uint64_t t97 = 1916294571858291613LLU;
int16_t x662 = -12;
volatile uint64_t t98 = 25748281723614558LLU;
uint64_t t99 = 4579172405740293382LLU;


void f0(void) {
	int16_t x1 = -12178;
	uint8_t x2 = UINT8_MAX;
	static int64_t x3 = 1LL;
	volatile int16_t x4 = INT16_MIN;
	static volatile int64_t t0 = 268LL;

	t0 = (x1*((x2*x3)^x4));

	if (t0 != 395943314LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = 123;
	static int16_t x15 = 31;
	uint32_t x16 = 5303U;
	volatile uint32_t t1 = 134334U;

	t1 = (x13*((x14*x15)^x16));

	if (t1 != 4170675181U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -2341645326283943LL;
	static int16_t x18 = 5;
	int64_t x19 = -2LL;
	uint64_t x20 = 1039642LLU;
	uint64_t t2 = 242985863483626585LLU;

	t2 = (x17*((x18*x19)^x20));

	if (t2 != 17935306780582103052LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	int32_t x24 = 5764;
	uint32_t t3 = 2099U;

	t3 = (x21*((x22*x23)^x24));

	if (t3 != 2909011968U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x25 = 7948;
	uint32_t x26 = 509766U;
	int16_t x27 = -1;
	int8_t x28 = -1;
	volatile uint32_t t4 = 1U;

	t4 = (x25*((x26*x27)^x28));

	if (t4 != 4051612220U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x37 = UINT16_MAX;
	int16_t x38 = -1;
	static int16_t x40 = INT16_MIN;
	static int64_t t5 = 1LL;

	t5 = (x37*((x38*x39)^x40));

	if (t5 != 1135131735LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x42 = INT8_MAX;
	int32_t x43 = -1;
	int16_t x44 = -1188;

	t6 = (x41*((x42*x43)^x44));

	if (t6 != 18446744073709550371LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x45 = INT8_MIN;
	volatile uint32_t x46 = 241356U;
	static int64_t x47 = -1LL;
	int8_t x48 = -1;
	volatile int64_t t7 = 63398892343161LL;

	t7 = (x45*((x46*x47)^x48));

	if (t7 != -30893440LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MIN;
	static volatile int8_t x50 = INT8_MIN;
	static int16_t x52 = -1;
	uint32_t t8 = 482087610U;

	t8 = (x49*((x50*x51)^x52));

	if (t8 != 4227072U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MAX;
	uint8_t x58 = UINT8_MAX;
	volatile uint8_t x59 = 2U;
	int16_t x60 = 3;
	static int32_t t9 = -639118;

	t9 = (x57*((x58*x59)^x60));

	if (t9 != 16678403) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x65 = INT8_MIN;
	static int16_t x66 = INT16_MIN;
	uint64_t x67 = UINT64_MAX;
	static uint64_t x68 = 491782LLU;

	t10 = (x65*((x66*x67)^x68));

	if (t10 != 18446744073650797824LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x69 = -5;
	static int16_t x70 = INT16_MIN;
	static volatile uint32_t t11 = 91279268U;

	t11 = (x69*((x70*x71)^x72));

	if (t11 != 1310085U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x74 = -1;
	int32_t x75 = INT32_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t12 = 245U;

	t12 = (x73*((x74*x75)^x76));

	if (t12 != 3871102220U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x78 = INT32_MIN;
	uint32_t x79 = 5U;
	int64_t x80 = INT64_MAX;
	int64_t t13 = -210LL;

	t13 = (x77*((x78*x79)^x80));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x89 = UINT64_MAX;
	uint32_t x90 = 35303611U;
	int64_t x91 = -49436834LL;
	volatile uint64_t t14 = 6LLU;

	t14 = (x89*((x90*x91)^x92));

	if (t14 != 18444998774952926806LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = INT16_MAX;
	static int8_t x98 = -56;
	uint64_t x99 = 28888765LLU;

	t15 = (x97*((x98*x99)^x100));

	if (t15 != 61628284778431LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x101 = INT32_MIN;
	uint64_t x102 = 60696053889463LLU;
	volatile uint64_t x103 = 7012LLU;
	int8_t x104 = 13;
	uint64_t t16 = 322LLU;

	t16 = (x101*((x102*x103)^x104));

	if (t16 != 1144921215337496576LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x109 = INT8_MIN;
	uint64_t x111 = 64021656406LLU;
	static uint8_t x112 = UINT8_MAX;
	volatile uint64_t t17 = 478006207488LLU;

	t17 = (x109*((x110*x111)^x112));

	if (t17 != 18418070566411680128LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x113 = 12070U;
	int32_t x114 = 12326;
	uint16_t x115 = 120U;
	int16_t x116 = INT16_MAX;
	uint32_t t18 = 103865U;

	t18 = (x113*((x114*x115)^x116));

	if (t18 != 958528506U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x119 = UINT32_MAX;
	volatile uint32_t t19 = 2U;

	t19 = (x117*((x118*x119)^x120));

	if (t19 != 2144206898U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x121 = 2LL;
	uint16_t x122 = 577U;
	uint64_t x123 = 744LLU;
	static int32_t x124 = INT32_MAX;
	uint64_t t20 = 1946378861668997199LLU;

	t20 = (x121*((x122*x123)^x124));

	if (t20 != 4294108718LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x129 = 10995954LL;
	uint64_t x130 = UINT64_MAX;
	int64_t x131 = INT64_MAX;
	int32_t x132 = INT32_MAX;
	uint64_t t21 = 132960LLU;

	t21 = (x129*((x130*x131)^x132));

	if (t21 != 23613631387168284LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x137 = 1473LLU;
	int8_t x138 = -1;
	uint32_t x139 = 6U;
	static volatile int32_t x140 = INT32_MIN;
	volatile uint64_t t22 = 69LLU;

	t22 = (x137*((x138*x139)^x140));

	if (t22 != 3163243404666LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x149 = 62965705033LL;
	int32_t x150 = INT32_MIN;
	static volatile uint16_t x151 = 0U;
	static volatile int16_t x152 = INT16_MIN;
	volatile int64_t t23 = 148144756741LL;

	t23 = (x149*((x150*x151)^x152));

	if (t23 != -2063260222521344LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x153 = UINT16_MAX;
	volatile uint32_t x154 = 7U;
	int16_t x155 = INT16_MIN;
	uint32_t t24 = 288396U;

	t24 = (x153*((x154*x155)^x156));

	if (t24 != 4294770688U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x157 = INT16_MIN;
	static uint16_t x158 = UINT16_MAX;
	static int64_t x159 = -109917960LL;
	volatile int32_t x160 = 156168861;
	int64_t t25 = 1LL;

	t25 = (x157*((x158*x159)^x160));

	if (t25 != 236048216212471808LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x170 = -54;
	uint64_t x172 = 18532692135214LLU;
	uint64_t t26 = 16136LLU;

	t26 = (x169*((x170*x171)^x172));

	if (t26 != 222392305622304LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x173 = INT32_MAX;
	int8_t x174 = 2;
	volatile int32_t x175 = -1;
	volatile int64_t x176 = -1LL;
	volatile int64_t t27 = 53145261733634244LL;

	t27 = (x173*((x174*x175)^x176));

	if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x185 = 580271LLU;
	uint64_t x186 = 177249328435236274LLU;
	int32_t x188 = INT32_MIN;

	t28 = (x185*((x186*x187)^x188));

	if (t28 != 13234806437873192786LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x194 = UINT64_MAX;
	int64_t x195 = -1LL;
	static int32_t x196 = 656572688;
	uint64_t t29 = 131553902130645111LLU;

	t29 = (x193*((x194*x195)^x196));

	if (t29 != 114900220575LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x205 = -1;
	int16_t x206 = INT16_MIN;
	uint32_t x207 = 274403U;
	static uint64_t x208 = 147318159LLU;
	volatile uint64_t t30 = 8274678331LLU;

	t30 = (x205*((x206*x207)^x208));

	if (t30 != 18446744069938256497LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x213 = -1;
	int8_t x214 = INT8_MAX;
	volatile uint32_t t31 = 483144U;

	t31 = (x213*((x214*x215)^x216));

	if (t31 != 2721210518U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x217 = INT64_MAX;
	uint8_t x218 = 14U;
	static uint64_t x220 = 631092590498LLU;

	t32 = (x217*((x218*x219)^x220));

	if (t32 != 631092589886LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x225 = UINT64_MAX;
	int16_t x226 = 1643;
	uint64_t x227 = UINT64_MAX;
	int64_t x228 = INT64_MAX;

	t33 = (x225*((x226*x227)^x228));

	if (t33 != 9223372036854774166LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x230 = 16364585428203308LLU;
	static int64_t x231 = INT64_MIN;
	int8_t x232 = 51;
	uint64_t t34 = 13394563273409760LLU;

	t34 = (x229*((x230*x231)^x232));

	if (t34 != 102LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x241 = 1662238245740809LLU;
	volatile int32_t x242 = 1224808;
	int64_t x243 = -1LL;
	uint32_t x244 = UINT32_MAX;
	volatile uint64_t t35 = 3LLU;

	t35 = (x241*((x242*x243)^x244));

	if (t35 != 6766980827731212959LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x245 = -1;
	static int16_t x246 = 6;
	uint64_t x247 = 442491LLU;
	volatile uint64_t t36 = 1LLU;

	t36 = (x245*((x246*x247)^x248));

	if (t36 != 2654947LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x249 = INT8_MIN;
	int32_t x250 = -5704;
	static uint32_t x251 = 7U;
	int16_t x252 = INT16_MIN;
	volatile uint32_t t37 = 1549U;

	t37 = (x249*((x250*x251)^x252));

	if (t37 != 4287495168U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x253 = -3;
	volatile int32_t x254 = 2;
	static uint8_t x255 = 53U;
	int8_t x256 = INT8_MIN;
	int32_t t38 = 1578448;

	t38 = (x253*((x254*x255)^x256));

	if (t38 != 66) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x261 = -1;
	int16_t x262 = INT16_MIN;
	volatile int8_t x263 = -1;
	static volatile uint64_t t39 = 10601081103282644LLU;

	t39 = (x261*((x262*x263)^x264));

	if (t39 != 32769LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x269 = 4LL;
	static uint64_t x270 = 1807406547911LLU;
	int16_t x271 = -46;
	uint8_t x272 = 1U;
	uint64_t t40 = 8063616883255027586LLU;

	t40 = (x269*((x270*x271)^x272));

	if (t40 != 18446411510904735996LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x277 = UINT64_MAX;
	uint32_t x278 = 2868U;
	int8_t x279 = INT8_MIN;
	int32_t x280 = INT32_MIN;
	uint64_t t41 = 120102478965370LLU;

	t41 = (x277*((x278*x279)^x280));

	if (t41 != 18446744071562435072LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x282 = INT32_MAX;
	int8_t x283 = 0;
	uint16_t x284 = 25775U;
	int32_t t42 = 439508;

	t42 = (x281*((x282*x283)^x284));

	if (t42 != 844569425) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x293 = UINT32_MAX;
	int64_t x295 = 53243LL;
	int16_t x296 = INT16_MAX;
	uint64_t t43 = 12214050261908LLU;

	t43 = (x293*((x294*x295)^x296));

	if (t43 != 6094056398259064829LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x311 = 3;
	int32_t t44 = 661302;

	t44 = (x309*((x310*x311)^x312));

	if (t44 != -23926) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x313 = 29U;
	uint64_t x314 = 7392259027LLU;
	static int64_t x316 = INT64_MIN;
	uint64_t t45 = 354865697LLU;

	t45 = (x313*((x314*x315)^x316));

	if (t45 != 9223344596789267584LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x321 = INT32_MIN;
	uint64_t x322 = UINT64_MAX;
	int32_t x324 = INT32_MIN;

	t46 = (x321*((x322*x323)^x324));

	if (t46 != 4611686016279904256LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x333 = 1U;
	volatile int64_t x335 = -1LL;
	uint64_t x336 = 1197715196LLU;

	t47 = (x333*((x334*x335)^x336));

	if (t47 != 18446744055831702603LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x341 = 238095U;
	static int16_t x343 = INT16_MIN;
	volatile uint32_t t48 = 5177244U;

	t48 = (x341*((x342*x343)^x344));

	if (t48 != 788751917U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x345 = UINT64_MAX;
	static int16_t x346 = INT16_MAX;
	int64_t x347 = 14028LL;
	uint64_t x348 = 2372950LLU;
	volatile uint64_t t49 = 4328238480916179LLU;

	t49 = (x345*((x346*x347)^x348));

	if (t49 != 18446744073252242334LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x349 = 107U;
	static int16_t x350 = -2;
	static int16_t x352 = 11;

	t50 = (x349*((x350*x351)^x352));

	if (t50 != -12038466916521LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x357 = -1;
	static uint8_t x358 = 35U;
	int64_t x359 = -304190454LL;
	volatile int64_t t51 = -134118866467616523LL;

	t51 = (x357*((x358*x359)^x360));

	if (t51 != 14587907320LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x362 = INT16_MIN;
	int8_t x364 = INT8_MIN;

	t52 = (x361*((x362*x363)^x364));

	if (t52 != 18446744073708535936LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x370 = -51;
	int16_t x371 = -25;
	uint64_t x372 = 388301270LLU;
	volatile uint64_t t53 = 2311769LLU;

	t53 = (x369*((x370*x371)^x372));

	if (t53 != 1667744927454001875LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x374 = -1;
	uint16_t x376 = UINT16_MAX;

	t54 = (x373*((x374*x375)^x376));

	if (t54 != 16711425) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x377 = INT32_MIN;
	uint64_t x378 = 147065023254LLU;
	int8_t x379 = INT8_MIN;
	static uint64_t t55 = 26LLU;

	t55 = (x377*((x378*x379)^x380));

	if (t55 != 8112270439830519808LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x381 = UINT8_MAX;
	int16_t x382 = 5160;
	volatile int8_t x383 = INT8_MIN;
	uint8_t x384 = UINT8_MAX;

	t56 = (x381*((x382*x383)^x384));

	if (t56 != -168357375) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x401 = -1;
	uint32_t x402 = 56U;
	uint8_t x403 = UINT8_MAX;
	uint32_t x404 = UINT32_MAX;

	t57 = (x401*((x402*x403)^x404));

	if (t57 != 14281U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x405 = 175873LLU;
	int16_t x406 = INT16_MIN;
	static uint32_t x408 = 247085U;

	t58 = (x405*((x406*x407)^x408));

	if (t58 != 31929567277LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x411 = INT16_MIN;
	int64_t x412 = -1LL;
	volatile int64_t t59 = 264141310877LL;

	t59 = (x409*((x410*x411)^x412));

	if (t59 != 32769LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x413 = -1;
	uint16_t x414 = UINT16_MAX;
	volatile int16_t x415 = INT16_MAX;
	int64_t t60 = -2384LL;

	t60 = (x413*((x414*x415)^x416));

	if (t60 != 9223372034707390463LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x417 = -1;
	static int16_t x418 = -1;
	static uint8_t x419 = 108U;
	int64_t x420 = -551676437080065729LL;

	t61 = (x417*((x418*x419)^x420));

	if (t61 != -551676437080065707LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x425 = 3U;
	int8_t x426 = -1;
	int16_t x427 = 1377;
	volatile uint64_t x428 = UINT64_MAX;
	volatile uint64_t t62 = 9527124974137229LLU;

	t62 = (x425*((x426*x427)^x428));

	if (t62 != 4128LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x437 = INT32_MAX;
	uint8_t x438 = UINT8_MAX;
	uint64_t x439 = 1637463LLU;
	int32_t x440 = -49009572;
	uint64_t t63 = 129202LLU;

	t63 = (x437*((x438*x439)^x440));

	if (t63 != 17508794111577590027LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x446 = -957866758967LL;
	volatile int8_t x447 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;

	t64 = (x445*((x446*x447)^x448));

	if (t64 != -122606945133695LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x449 = INT16_MIN;
	uint64_t x450 = 18940688LLU;
	int32_t x451 = -1;
	int64_t x452 = -1LL;
	volatile uint64_t t65 = 5003301LLU;

	t65 = (x449*((x450*x451)^x452));

	if (t65 != 18446743453061120000LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x461 = UINT8_MAX;
	volatile int16_t x462 = INT16_MIN;
	uint64_t x463 = 1467508LLU;
	int64_t x464 = 101600178LL;

	t66 = (x461*((x462*x463)^x464));

	if (t66 != 18446731802929489486LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x465 = -1;
	int64_t x466 = -1LL;
	uint16_t x467 = UINT16_MAX;
	int16_t x468 = -1;
	int64_t t67 = 10454501LL;

	t67 = (x465*((x466*x467)^x468));

	if (t67 != -65534LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x474 = 26719818506371603LLU;
	int32_t x475 = INT32_MAX;
	volatile uint64_t x476 = 3935142423433LLU;
	volatile uint64_t t68 = 13538745905LLU;

	t68 = (x473*((x474*x475)^x476));

	if (t68 != 10175871921193012736LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x477 = -1;
	static int8_t x478 = INT8_MAX;
	volatile int32_t x479 = -37;
	static uint8_t x480 = 8U;
	static volatile int32_t t69 = -22419304;

	t69 = (x477*((x478*x479)^x480));

	if (t69 != 4691) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x481 = -1;
	volatile uint64_t x483 = UINT64_MAX;
	volatile uint64_t t70 = 20506174300LLU;

	t70 = (x481*((x482*x483)^x484));

	if (t70 != 786953313LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x493 = 0;
	uint8_t x494 = 2U;
	volatile uint8_t x495 = UINT8_MAX;
	int8_t x496 = -1;

	t71 = (x493*((x494*x495)^x496));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x497 = INT16_MIN;
	uint16_t x498 = 6518U;
	uint8_t x499 = 11U;
	uint64_t x500 = UINT64_MAX;
	volatile uint64_t t72 = 94LLU;

	t72 = (x497*((x498*x499)^x500));

	if (t72 != 2349432832LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x501 = -1LL;
	volatile int32_t x502 = INT32_MIN;
	int8_t x503 = 1;
	static volatile int64_t t73 = 48LL;

	t73 = (x501*((x502*x503)^x504));

	if (t73 != -2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x506 = 3503615039495870847LL;
	static uint64_t x507 = 1419072531533767939LLU;
	volatile int64_t x508 = INT64_MAX;
	volatile uint64_t t74 = 68599392475908137LLU;

	t74 = (x505*((x506*x507)^x508));

	if (t74 != 16119274200634763134LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x510 = 12464671LLU;
	uint64_t x511 = 87752860486LLU;
	uint8_t x512 = 38U;
	uint64_t t75 = 5064700203323571046LLU;

	t75 = (x509*((x510*x511)^x512));

	if (t75 != 9786729462928178340LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x517 = -1LL;
	int16_t x518 = INT16_MIN;
	volatile int32_t x519 = 9;
	volatile int64_t x520 = INT64_MIN;
	int64_t t76 = -310871315533932LL;

	t76 = (x517*((x518*x519)^x520));

	if (t76 != -9223372036854480896LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x522 = -1;
	volatile int64_t x524 = INT64_MIN;
	uint64_t t77 = 388105601416LLU;

	t77 = (x521*((x522*x523)^x524));

	if (t77 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x525 = -73;
	uint64_t x526 = 384718965105LLU;
	uint32_t x527 = 442U;
	int32_t x528 = INT32_MIN;
	volatile uint64_t t78 = 366965974397LLU;

	t78 = (x525*((x526*x527)^x528));

	if (t78 != 12413267502367638LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x529 = UINT32_MAX;
	int32_t x530 = INT32_MAX;
	uint64_t x531 = 5491777874764484LLU;
	int8_t x532 = INT8_MIN;
	uint64_t t79 = 26530883240LLU;

	t79 = (x529*((x530*x531)^x532));

	if (t79 != 4902785431970962756LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x537 = 64043;
	int8_t x539 = 1;
	int32_t t80 = -1;

	t80 = (x537*((x538*x539)^x540));

	if (t80 != 2090363520) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x541 = -1;
	int64_t x542 = -106LL;
	uint32_t x543 = UINT32_MAX;
	volatile int16_t x544 = INT16_MIN;
	int64_t t81 = -1LL;

	t81 = (x541*((x542*x543)^x544));

	if (t81 != -455266500714LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x545 = -15;
	int64_t x546 = 1LL;
	int8_t x547 = -1;
	int32_t x548 = -1;
	int64_t t82 = -51922277281LL;

	t82 = (x545*((x546*x547)^x548));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x555 = 1U;
	int16_t x556 = -72;
	volatile int32_t t83 = 28;

	t83 = (x553*((x554*x555)^x556));

	if (t83 != -7381870) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x557 = 24423U;
	volatile uint64_t x559 = UINT64_MAX;

	t84 = (x557*((x558*x559)^x560));

	if (t84 != 799877673LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x561 = 66699456;
	uint16_t x562 = 12314U;
	volatile uint64_t t85 = 129924050517438LLU;

	t85 = (x561*((x562*x563)^x564));

	if (t85 != 18446740523764404928LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x566 = -1;
	int64_t x567 = -1LL;
	int8_t x568 = INT8_MIN;
	int64_t t86 = -3605561727822917LL;

	t86 = (x565*((x566*x567)^x568));

	if (t86 != -127LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x573 = 3660;
	volatile int32_t x574 = INT32_MAX;
	uint32_t x575 = UINT32_MAX;
	static int64_t x576 = 222LL;

	t87 = (x573*((x574*x575)^x576));

	if (t87 != 7859790967860LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x597 = 4026;
	uint64_t x598 = 3027729112113653686LLU;
	int64_t x599 = -7754032191117562LL;
	int32_t x600 = -85;

	t88 = (x597*((x598*x599)^x600));

	if (t88 != 7016835385646638246LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x614 = UINT32_MAX;
	int16_t x615 = -1;
	volatile int8_t x616 = 11;
	static volatile int64_t t89 = 5477231885769514LL;

	t89 = (x613*((x614*x615)^x616));

	if (t89 != -73420LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x617 = 48LLU;
	int32_t x619 = -1;
	volatile int64_t x620 = 141130720048355977LL;
	volatile uint64_t t90 = 432LLU;

	t90 = (x617*((x618*x619)^x620));

	if (t90 != 6774274562321086848LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x626 = 5976U;
	int8_t x627 = -53;
	volatile int16_t x628 = 2047;
	volatile int32_t t91 = -121;

	t91 = (x625*((x626*x627)^x628));

	if (t91 != -948315) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x629 = -3854351;
	int32_t x630 = INT32_MIN;
	uint64_t x631 = 406590676582290099LLU;
	int64_t x632 = INT64_MAX;
	uint64_t t92 = 59LLU;

	t92 = (x629*((x630*x631)^x632));

	if (t92 != 2455547845973561359LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x637 = 14131419386720456LLU;
	uint32_t x639 = 8872U;
	int8_t x640 = INT8_MAX;
	volatile uint64_t t93 = 39164157132LLU;

	t93 = (x637*((x638*x639)^x640));

	if (t93 != 11759431745363023480LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x647 = -1;
	uint8_t x648 = 1U;
	volatile int32_t t94 = 7;

	t94 = (x645*((x646*x647)^x648));

	if (t94 != -6794) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x649 = INT16_MAX;
	int32_t x652 = 0;
	volatile int64_t t95 = 8LL;

	t95 = (x649*((x650*x651)^x652));

	if (t95 != -7105884387LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x653 = UINT64_MAX;
	static uint64_t x654 = 11250013342991LLU;
	int16_t x655 = -27;
	uint64_t t96 = 3756724589473057LLU;

	t96 = (x653*((x654*x655)^x656));

	if (t96 != 18446440323349290860LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x657 = 30236858501779441LLU;
	int16_t x658 = -3;
	int64_t x659 = -374029744244LL;
	uint16_t x660 = 141U;

	t97 = (x657*((x658*x659)^x660));

	if (t97 != 1856399533331487937LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x661 = -3;
	uint8_t x663 = 15U;
	uint64_t x664 = 124896LLU;

	t98 = (x661*((x662*x663)^x664));

	if (t98 != 374268LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x673 = 0U;
	volatile int32_t x674 = 19;
	uint16_t x675 = UINT16_MAX;
	uint64_t x676 = UINT64_MAX;

	t99 = (x673*((x674*x675)^x676));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

