#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
volatile int16_t x3 = -14;
static int8_t x4 = INT8_MAX;
int8_t x7 = INT8_MAX;
volatile int32_t t1 = 61775;
volatile int8_t x9 = 3;
int32_t x16 = INT32_MIN;
static int32_t x20 = 169944;
int32_t x25 = 22813;
uint16_t x37 = 0U;
volatile int32_t t8 = -3;
int16_t x42 = 12273;
int32_t t9 = 10472553;
volatile int32_t t12 = -216106340;
int8_t x61 = -14;
int64_t x62 = INT64_MIN;
uint8_t x73 = 8U;
int16_t x87 = 773;
volatile int8_t x89 = 1;
volatile uint8_t x96 = UINT8_MAX;
uint64_t x101 = 8373LLU;
static int32_t x103 = INT32_MAX;
volatile int32_t t22 = -16;
volatile int8_t x110 = INT8_MIN;
static int16_t x112 = INT16_MIN;
volatile int8_t x120 = -6;
int32_t x126 = INT32_MIN;
int8_t x130 = INT8_MIN;
volatile int64_t x135 = -6216598415191203LL;
int32_t t28 = -22;
uint64_t x139 = 148379126266LLU;
int32_t x140 = 15539969;
uint32_t x142 = 29U;
volatile int32_t x155 = INT32_MAX;
uint64_t x158 = UINT64_MAX;
volatile int32_t t34 = 68;
uint64_t x161 = 2427411LLU;
static int16_t x165 = INT16_MAX;
uint16_t x170 = UINT16_MAX;
int16_t x172 = 595;
static int16_t x173 = -1;
int8_t x181 = INT8_MIN;
int32_t t39 = 27794;
uint64_t x194 = UINT64_MAX;
uint32_t x197 = UINT32_MAX;
int64_t x199 = INT64_MIN;
int64_t x200 = 1728582929627909LL;
volatile int32_t t44 = -26924353;
uint16_t x228 = UINT16_MAX;
int64_t x229 = 2015509938080079LL;
uint8_t x232 = 29U;
static int32_t x237 = INT32_MAX;
uint64_t x241 = 330416566549992LLU;
static volatile int64_t x245 = -1LL;
int16_t x250 = 1;
static int64_t x251 = -23756898LL;
uint16_t x254 = UINT16_MAX;
static int16_t x256 = 2;
int32_t x264 = INT32_MAX;
int32_t t56 = 1;
int32_t x266 = INT32_MAX;
int64_t x267 = -8042396469310254LL;
static uint32_t x275 = UINT32_MAX;
int64_t x276 = INT64_MAX;
uint16_t x280 = 1U;
uint8_t x282 = UINT8_MAX;
int16_t x284 = INT16_MAX;
uint8_t x293 = UINT8_MAX;
int8_t x294 = -21;
int32_t t63 = 164857;
static uint64_t x299 = UINT64_MAX;
uint16_t x312 = UINT16_MAX;
int16_t x317 = INT16_MAX;
static uint32_t x318 = UINT32_MAX;
int16_t x327 = INT16_MIN;
int32_t x328 = INT32_MIN;
int8_t x330 = INT8_MIN;
int16_t x332 = 7;
static volatile int8_t x336 = -1;
int32_t t70 = 1;
int16_t x337 = INT16_MAX;
int64_t x339 = INT64_MIN;
int16_t x343 = 1526;
int64_t x344 = -1LL;
int64_t x353 = -32360244188684LL;
uint32_t x354 = 3695U;
uint32_t x364 = UINT32_MAX;
volatile int32_t t78 = 237332;
int8_t x378 = INT8_MAX;
static int32_t x384 = INT32_MIN;
int64_t x386 = INT64_MIN;
volatile uint16_t x389 = 24U;
static volatile uint64_t x396 = 14700859955516572LLU;
int8_t x403 = -1;
static volatile uint32_t x410 = UINT32_MAX;
int64_t x415 = -1LL;
volatile uint64_t x419 = 3353807LLU;
int32_t t90 = -2589;
uint16_t x425 = 8U;
volatile int32_t t93 = -1;
static volatile uint64_t x433 = UINT64_MAX;
int32_t x434 = -1;
volatile int32_t t94 = -14;
int16_t x437 = INT16_MIN;
uint64_t x438 = UINT64_MAX;
int8_t x449 = -1;


void f0(void) {
	int8_t x2 = 6;
	volatile int32_t t0 = 190138;

	t0 = (x1<=((x2/x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	volatile uint64_t x6 = 24043612436172480LLU;
	int16_t x8 = 1404;

	t1 = (x5<=((x6/x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	uint32_t x11 = UINT32_MAX;
	static int16_t x12 = 1;
	int32_t t2 = 206;

	t2 = (x9<=((x10/x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint16_t x14 = 45U;
	static uint8_t x15 = 86U;
	static volatile int32_t t3 = -1;

	t3 = (x13<=((x14/x15)%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 27U;
	static int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MAX;
	static volatile int32_t t4 = 14;

	t4 = (x17<=((x18/x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = 29648991862948119LL;
	volatile int16_t x27 = -1;
	uint64_t x28 = 51607075LLU;
	int32_t t5 = -56940;

	t5 = (x25<=((x26/x27)%x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 524194215LLU;
	static volatile uint64_t x30 = 11841877383528890LLU;
	uint16_t x31 = 1614U;
	volatile int8_t x32 = 1;
	volatile int32_t t6 = -13732163;

	t6 = (x29<=((x30/x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	static int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	int32_t t7 = -24;

	t7 = (x33<=((x34/x35)%x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = INT8_MAX;
	static int16_t x39 = INT16_MIN;
	volatile int8_t x40 = INT8_MAX;

	t8 = (x37<=((x38/x39)%x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MIN;
	static int32_t x43 = -722501;
	volatile int8_t x44 = -2;

	t9 = (x41<=((x42/x43)%x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = INT32_MAX;
	static int16_t x46 = INT16_MIN;
	static uint8_t x47 = UINT8_MAX;
	static int64_t x48 = -4085LL;
	int32_t t10 = 7;

	t10 = (x45<=((x46/x47)%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x53 = 5330924731851141474LLU;
	static int64_t x54 = -33446158705905180LL;
	uint64_t x55 = 625444611575576LLU;
	uint8_t x56 = UINT8_MAX;
	int32_t t11 = -853;

	t11 = (x53<=((x54/x55)%x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	static volatile uint32_t x58 = 616212U;
	static int64_t x59 = 7LL;
	int8_t x60 = INT8_MIN;

	t12 = (x57<=((x58/x59)%x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x63 = -15;
	int16_t x64 = INT16_MIN;
	volatile int32_t t13 = -155120;

	t13 = (x61<=((x62/x63)%x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	int32_t x66 = -1;
	uint8_t x67 = 5U;
	volatile uint64_t x68 = 43LLU;
	volatile int32_t t14 = -62231;

	t14 = (x65<=((x66/x67)%x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x74 = -24;
	static int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MAX;
	int32_t t15 = 78;

	t15 = (x73<=((x74/x75)%x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MAX;
	int8_t x78 = INT8_MAX;
	static volatile int8_t x79 = INT8_MIN;
	static uint32_t x80 = UINT32_MAX;
	int32_t t16 = -8063776;

	t16 = (x77<=((x78/x79)%x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x81 = UINT8_MAX;
	volatile int8_t x82 = INT8_MIN;
	int32_t x83 = INT32_MAX;
	int16_t x84 = INT16_MAX;
	int32_t t17 = -368;

	t17 = (x81<=((x82/x83)%x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MIN;
	volatile uint64_t x88 = 7848131809689LLU;
	int32_t t18 = 138;

	t18 = (x85<=((x86/x87)%x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = -251;
	int32_t x91 = -215;
	int32_t x92 = -334059218;
	int32_t t19 = -3;

	t19 = (x89<=((x90/x91)%x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	uint64_t x94 = 1839719LLU;
	int16_t x95 = INT16_MIN;
	volatile int32_t t20 = -42776;

	t20 = (x93<=((x94/x95)%x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x102 = UINT8_MAX;
	int64_t x104 = INT64_MIN;
	volatile int32_t t21 = -6357624;

	t21 = (x101<=((x102/x103)%x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = 99061434;
	static uint64_t x106 = UINT64_MAX;
	uint32_t x107 = UINT32_MAX;
	static uint16_t x108 = 2U;

	t22 = (x105<=((x106/x107)%x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x109 = 2U;
	int32_t x111 = -180;
	static volatile int32_t t23 = 326291;

	t23 = (x109<=((x110/x111)%x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 15286U;
	uint32_t x114 = 51U;
	static int8_t x115 = 1;
	uint32_t x116 = 84025882U;
	volatile int32_t t24 = 399809;

	t24 = (x113<=((x114/x115)%x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = 1LL;
	int8_t x118 = -53;
	int64_t x119 = 1590691565175734479LL;
	static volatile int32_t t25 = -932;

	t25 = (x117<=((x118/x119)%x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = -242;
	static uint8_t x127 = 29U;
	int32_t x128 = INT32_MIN;
	volatile int32_t t26 = 175359;

	t26 = (x125<=((x126/x127)%x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MAX;
	volatile int32_t x131 = INT32_MIN;
	volatile int64_t x132 = INT64_MAX;
	int32_t t27 = -349016441;

	t27 = (x129<=((x130/x131)%x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = 2;
	int8_t x134 = INT8_MIN;
	int8_t x136 = INT8_MIN;

	t28 = (x133<=((x134/x135)%x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = 120968;
	volatile int8_t x138 = INT8_MAX;
	int32_t t29 = 595;

	t29 = (x137<=((x138/x139)%x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x141 = 0U;
	volatile int8_t x143 = INT8_MIN;
	static int64_t x144 = -64083765786405224LL;
	volatile int32_t t30 = -61054;

	t30 = (x141<=((x142/x143)%x144));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = -10976;
	static uint32_t x147 = 29540373U;
	static uint16_t x148 = 474U;
	int32_t t31 = 235378;

	t31 = (x145<=((x146/x147)%x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x149 = 1115719649368733808LLU;
	volatile uint64_t x150 = 929573239347LLU;
	uint64_t x151 = UINT64_MAX;
	static int8_t x152 = INT8_MIN;
	int32_t t32 = -8720;

	t32 = (x149<=((x150/x151)%x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = INT64_MIN;
	uint16_t x154 = 368U;
	int16_t x156 = 38;
	static int32_t t33 = 8587;

	t33 = (x153<=((x154/x155)%x156));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x157 = INT32_MAX;
	static uint16_t x159 = 807U;
	int16_t x160 = INT16_MIN;

	t34 = (x157<=((x158/x159)%x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x162 = 15;
	int16_t x163 = INT16_MIN;
	uint64_t x164 = UINT64_MAX;
	int32_t t35 = 0;

	t35 = (x161<=((x162/x163)%x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x166 = INT32_MAX;
	int32_t x167 = INT32_MIN;
	static int64_t x168 = INT64_MAX;
	static volatile int32_t t36 = 220155;

	t36 = (x165<=((x166/x167)%x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x169 = UINT8_MAX;
	volatile int64_t x171 = INT64_MIN;
	int32_t t37 = -50;

	t37 = (x169<=((x170/x171)%x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x174 = 1;
	int8_t x175 = INT8_MIN;
	int32_t x176 = -53734;
	int32_t t38 = 730890936;

	t38 = (x173<=((x174/x175)%x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x182 = INT8_MAX;
	int16_t x183 = -249;
	int16_t x184 = -1;

	t39 = (x181<=((x182/x183)%x184));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = -91640587136LL;
	volatile int16_t x186 = -1;
	int16_t x187 = INT16_MIN;
	uint8_t x188 = 1U;
	static volatile int32_t t40 = -61718;

	t40 = (x185<=((x186/x187)%x188));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x189 = -1;
	int64_t x190 = INT64_MIN;
	static uint8_t x191 = UINT8_MAX;
	static int8_t x192 = -9;
	int32_t t41 = -1439676;

	t41 = (x189<=((x190/x191)%x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x193 = -1;
	volatile int32_t x195 = INT32_MIN;
	int32_t x196 = INT32_MIN;
	volatile int32_t t42 = -204;

	t42 = (x193<=((x194/x195)%x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x198 = 14702;
	volatile int32_t t43 = -1944;

	t43 = (x197<=((x198/x199)%x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = INT8_MAX;
	uint64_t x202 = 141498279766LLU;
	static int16_t x203 = 30;
	int8_t x204 = -1;

	t44 = (x201<=((x202/x203)%x204));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = -1634;
	int8_t x206 = 0;
	uint16_t x207 = 290U;
	int64_t x208 = 346440485616344532LL;
	int32_t t45 = 215257;

	t45 = (x205<=((x206/x207)%x208));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MAX;
	static int64_t x210 = -1071306403567LL;
	int32_t x211 = INT32_MIN;
	int32_t x212 = 7;
	int32_t t46 = 136;

	t46 = (x209<=((x210/x211)%x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x225 = 387;
	uint8_t x226 = UINT8_MAX;
	int64_t x227 = -5804831257LL;
	volatile int32_t t47 = 0;

	t47 = (x225<=((x226/x227)%x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x230 = INT64_MIN;
	uint32_t x231 = UINT32_MAX;
	int32_t t48 = 11997265;

	t48 = (x229<=((x230/x231)%x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = -1;
	static uint8_t x234 = 35U;
	static int8_t x235 = -1;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t49 = 27;

	t49 = (x233<=((x234/x235)%x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x238 = INT16_MIN;
	uint16_t x239 = UINT16_MAX;
	int32_t x240 = -1;
	int32_t t50 = -482;

	t50 = (x237<=((x238/x239)%x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x242 = INT16_MAX;
	volatile int8_t x243 = INT8_MAX;
	static int32_t x244 = INT32_MIN;
	volatile int32_t t51 = 437523;

	t51 = (x241<=((x242/x243)%x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x246 = -1LL;
	static volatile uint16_t x247 = UINT16_MAX;
	volatile int64_t x248 = -1LL;
	static volatile int32_t t52 = 0;

	t52 = (x245<=((x246/x247)%x248));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = -1LL;
	uint32_t x252 = 1239U;
	int32_t t53 = 182;

	t53 = (x249<=((x250/x251)%x252));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x253 = 57;
	uint8_t x255 = UINT8_MAX;
	int32_t t54 = -500500;

	t54 = (x253<=((x254/x255)%x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x257 = INT32_MAX;
	uint16_t x258 = 5U;
	int64_t x259 = INT64_MIN;
	uint8_t x260 = 39U;
	int32_t t55 = -13195682;

	t55 = (x257<=((x258/x259)%x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = 1;
	int64_t x262 = 514906775575386601LL;
	volatile int16_t x263 = INT16_MIN;

	t56 = (x261<=((x262/x263)%x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = 0;
	uint16_t x268 = 778U;
	static volatile int32_t t57 = -27;

	t57 = (x265<=((x266/x267)%x268));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = -1;
	static volatile uint32_t x270 = UINT32_MAX;
	static uint32_t x271 = 30676U;
	volatile int32_t x272 = INT32_MIN;
	int32_t t58 = 648346755;

	t58 = (x269<=((x270/x271)%x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = INT8_MIN;
	uint32_t x274 = UINT32_MAX;
	int32_t t59 = -134671;

	t59 = (x273<=((x274/x275)%x276));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = -359058;
	volatile uint64_t x278 = 4430358892237489951LLU;
	volatile int64_t x279 = -1LL;
	int32_t t60 = -16719696;

	t60 = (x277<=((x278/x279)%x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = INT32_MAX;
	uint32_t x283 = 818736U;
	volatile int32_t t61 = -15182;

	t61 = (x281<=((x282/x283)%x284));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x289 = 21U;
	int16_t x290 = -1;
	int32_t x291 = INT32_MAX;
	uint64_t x292 = 6292LLU;
	volatile int32_t t62 = 124553;

	t62 = (x289<=((x290/x291)%x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x295 = 95031LLU;
	int32_t x296 = INT32_MIN;

	t63 = (x293<=((x294/x295)%x296));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x297 = -1;
	static volatile int16_t x298 = -1;
	int16_t x300 = -1;
	int32_t t64 = -1;

	t64 = (x297<=((x298/x299)%x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x305 = 11869996655983LLU;
	static volatile uint64_t x306 = UINT64_MAX;
	int16_t x307 = -1;
	volatile uint64_t x308 = 2864LLU;
	volatile int32_t t65 = -58912850;

	t65 = (x305<=((x306/x307)%x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x309 = 46569158LLU;
	uint32_t x310 = UINT32_MAX;
	volatile int32_t x311 = -12976;
	static int32_t t66 = -260418;

	t66 = (x309<=((x310/x311)%x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x319 = UINT16_MAX;
	int64_t x320 = INT64_MAX;
	volatile int32_t t67 = -132405650;

	t67 = (x317<=((x318/x319)%x320));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x325 = INT16_MIN;
	uint8_t x326 = UINT8_MAX;
	int32_t t68 = -820091071;

	t68 = (x325<=((x326/x327)%x328));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x329 = INT8_MIN;
	static uint16_t x331 = 1U;
	int32_t t69 = -243;

	t69 = (x329<=((x330/x331)%x332));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x333 = INT16_MAX;
	volatile int8_t x334 = -1;
	uint64_t x335 = 8492367677LLU;

	t70 = (x333<=((x334/x335)%x336));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x338 = 328114255U;
	int64_t x340 = INT64_MAX;
	int32_t t71 = -78128298;

	t71 = (x337<=((x338/x339)%x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x341 = UINT16_MAX;
	int32_t x342 = -1;
	volatile int32_t t72 = -5;

	t72 = (x341<=((x342/x343)%x344));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = -1;
	int64_t x347 = -1LL;
	int16_t x348 = INT16_MIN;
	int32_t t73 = -26675;

	t73 = (x345<=((x346/x347)%x348));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x355 = INT16_MIN;
	int64_t x356 = -477604142084520793LL;
	static volatile int32_t t74 = -1;

	t74 = (x353<=((x354/x355)%x356));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = INT8_MAX;
	int64_t x359 = -1LL;
	static int32_t x360 = INT32_MAX;
	int32_t t75 = -20;

	t75 = (x357<=((x358/x359)%x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = INT32_MAX;
	int8_t x362 = -7;
	static uint32_t x363 = 140966U;
	int32_t t76 = 1;

	t76 = (x361<=((x362/x363)%x364));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x365 = 6181140465524LLU;
	int32_t x366 = INT32_MIN;
	static int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MIN;
	volatile int32_t t77 = -232;

	t77 = (x365<=((x366/x367)%x368));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x369 = 26763U;
	static volatile int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	uint64_t x372 = 72683644850629LLU;

	t78 = (x369<=((x370/x371)%x372));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x373 = UINT64_MAX;
	uint64_t x374 = 2LLU;
	uint8_t x375 = UINT8_MAX;
	uint16_t x376 = 232U;
	volatile int32_t t79 = -148;

	t79 = (x373<=((x374/x375)%x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x377 = -3775;
	static int32_t x379 = INT32_MIN;
	static int16_t x380 = INT16_MIN;
	static volatile int32_t t80 = 2;

	t80 = (x377<=((x378/x379)%x380));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x382 = UINT8_MAX;
	static int64_t x383 = -16548456LL;
	volatile int32_t t81 = 39574526;

	t81 = (x381<=((x382/x383)%x384));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x385 = -449831894718198575LL;
	static int64_t x387 = INT64_MIN;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t82 = -6;

	t82 = (x385<=((x386/x387)%x388));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x390 = INT32_MIN;
	uint8_t x391 = 90U;
	int8_t x392 = -3;
	int32_t t83 = 7;

	t83 = (x389<=((x390/x391)%x392));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x393 = INT16_MAX;
	uint32_t x394 = 32817963U;
	int32_t x395 = -31080;
	volatile int32_t t84 = 0;

	t84 = (x393<=((x394/x395)%x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int64_t x398 = -30LL;
	static uint32_t x399 = UINT32_MAX;
	uint64_t x400 = 2452059992630299LLU;
	static int32_t t85 = -1;

	t85 = (x397<=((x398/x399)%x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x401 = UINT16_MAX;
	int8_t x402 = 3;
	static uint8_t x404 = UINT8_MAX;
	volatile int32_t t86 = 159;

	t86 = (x401<=((x402/x403)%x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x405 = INT64_MIN;
	uint16_t x406 = 3U;
	volatile int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	volatile int32_t t87 = -6;

	t87 = (x405<=((x406/x407)%x408));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x409 = 0LLU;
	static volatile int32_t x411 = 22;
	uint32_t x412 = UINT32_MAX;
	int32_t t88 = 1;

	t88 = (x409<=((x410/x411)%x412));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x413 = 22794U;
	volatile uint8_t x414 = 107U;
	uint16_t x416 = 9U;
	volatile int32_t t89 = -5616317;

	t89 = (x413<=((x414/x415)%x416));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x417 = -1;
	volatile int8_t x418 = -10;
	static int64_t x420 = -1LL;

	t90 = (x417<=((x418/x419)%x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x421 = -1;
	volatile uint16_t x422 = 0U;
	uint32_t x423 = UINT32_MAX;
	volatile uint32_t x424 = UINT32_MAX;
	static int32_t t91 = -2167;

	t91 = (x421<=((x422/x423)%x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x426 = INT16_MAX;
	int16_t x427 = INT16_MIN;
	volatile int8_t x428 = -1;
	static volatile int32_t t92 = -589610209;

	t92 = (x425<=((x426/x427)%x428));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = 51;
	static volatile int8_t x430 = -1;
	int16_t x431 = -1;
	uint32_t x432 = 330067U;

	t93 = (x429<=((x430/x431)%x432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x435 = 27;
	uint16_t x436 = UINT16_MAX;

	t94 = (x433<=((x434/x435)%x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x439 = UINT64_MAX;
	int64_t x440 = INT64_MAX;
	int32_t t95 = 292668455;

	t95 = (x437<=((x438/x439)%x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x441 = UINT32_MAX;
	int64_t x442 = -166274704848LL;
	int32_t x443 = INT32_MAX;
	uint16_t x444 = 2U;
	int32_t t96 = -752557;

	t96 = (x441<=((x442/x443)%x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x445 = 266709910799LLU;
	int32_t x446 = INT32_MAX;
	int64_t x447 = INT64_MIN;
	static uint16_t x448 = 10572U;
	volatile int32_t t97 = -1;

	t97 = (x445<=((x446/x447)%x448));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x450 = INT8_MIN;
	int8_t x451 = -18;
	int64_t x452 = -3835596891288LL;
	static volatile int32_t t98 = 15016;

	t98 = (x449<=((x450/x451)%x452));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x453 = INT64_MIN;
	uint8_t x454 = 34U;
	int8_t x455 = INT8_MIN;
	int16_t x456 = INT16_MAX;
	static volatile int32_t t99 = 295;

	t99 = (x453<=((x454/x455)%x456));

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

