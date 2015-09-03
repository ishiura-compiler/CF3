#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x45 = -1;
int32_t t2 = 752408;
volatile uint32_t x52 = UINT32_MAX;
volatile int8_t x57 = INT8_MIN;
volatile uint8_t x60 = 6U;
uint8_t x63 = UINT8_MAX;
volatile int64_t x64 = -1LL;
static int32_t x69 = INT32_MIN;
int16_t x87 = INT16_MIN;
volatile uint16_t x88 = UINT16_MAX;
uint64_t x101 = 3914125631799LLU;
int32_t x105 = -1;
int16_t x106 = 1;
int64_t x114 = 31344667LL;
static volatile int32_t t16 = -1833593;
static volatile uint16_t x126 = UINT16_MAX;
int8_t x130 = 2;
int8_t x164 = INT8_MAX;
uint32_t x171 = UINT32_MAX;
static int16_t x176 = INT16_MIN;
static int16_t x178 = INT16_MIN;
uint64_t x180 = UINT64_MAX;
int32_t t23 = -41;
static int32_t t24 = -634504639;
uint32_t x185 = 118U;
int32_t t25 = 91;
static volatile int16_t x192 = -319;
int32_t t26 = 51;
int16_t x198 = INT16_MIN;
uint16_t x202 = 13U;
static int8_t x205 = 0;
static uint8_t x222 = UINT8_MAX;
static int8_t x224 = 1;
static volatile int32_t t32 = -22;
volatile int16_t x237 = -1;
int16_t x240 = INT16_MAX;
uint32_t x247 = UINT32_MAX;
int32_t t37 = -269432;
volatile uint8_t x266 = UINT8_MAX;
uint32_t x267 = 27424U;
int64_t x272 = 1158034427194LL;
int8_t x276 = -1;
volatile int32_t t41 = 1;
uint8_t x309 = UINT8_MAX;
int64_t x313 = -1LL;
int32_t t46 = 295437863;
int32_t t47 = 189;
uint64_t x334 = 10582026LLU;
volatile uint32_t x339 = UINT32_MAX;
volatile uint64_t x340 = UINT64_MAX;
int32_t t51 = 1;
uint64_t x343 = 812984353LLU;
int64_t x356 = INT64_MAX;
int8_t x366 = INT8_MAX;
int64_t x368 = INT64_MIN;
volatile int8_t x377 = -6;
int32_t t59 = 144;
int16_t x382 = 1;
uint32_t x384 = UINT32_MAX;
int64_t x386 = -1LL;
int32_t t62 = 62729450;
static uint32_t x402 = 62099U;
static int8_t x404 = -1;
volatile int8_t x405 = INT8_MAX;
volatile uint16_t x414 = 0U;
uint8_t x421 = 0U;
volatile uint16_t x425 = 4U;
volatile uint32_t x431 = 705302062U;
uint8_t x434 = 2U;
int32_t t71 = -1032928418;
volatile int16_t x438 = 56;
int16_t x439 = INT16_MIN;
int64_t x442 = INT64_MAX;
int16_t x444 = -1;
volatile int32_t t74 = 2929105;
static uint32_t x453 = UINT32_MAX;
volatile int8_t x456 = INT8_MAX;
uint8_t x461 = 1U;
static volatile int8_t x464 = INT8_MAX;
volatile int32_t t77 = 32222868;
int8_t x472 = INT8_MIN;
uint32_t x474 = UINT32_MAX;
volatile int32_t x476 = INT32_MIN;
static int16_t x480 = INT16_MIN;
int32_t t80 = -3;
static int8_t x498 = INT8_MAX;
uint32_t x501 = UINT32_MAX;
int32_t x516 = INT32_MIN;
int8_t x524 = -1;
volatile int32_t t89 = -91;
uint32_t x525 = UINT32_MAX;
int32_t x528 = INT32_MIN;
int32_t x540 = INT32_MAX;
int32_t t91 = 254714050;
int32_t x541 = -1;
int8_t x543 = -18;
int32_t x558 = -254;
volatile int16_t x559 = -515;
uint64_t x565 = 12619913022244LLU;
int32_t t95 = -1047218262;
uint8_t x580 = 4U;
int32_t x583 = -1;
volatile int32_t x589 = INT32_MIN;


void f0(void) {
	static uint64_t x13 = 31876813315LLU;
	int32_t x14 = -1;
	uint16_t x15 = 11U;
	uint16_t x16 = 1907U;
	volatile int32_t t0 = 616;

	t0 = ((x13*(x14-x15))==x16);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x33 = -1;
	static int16_t x34 = -1;
	int16_t x35 = INT16_MAX;
	volatile int16_t x36 = 27;
	int32_t t1 = 10952;

	t1 = ((x33*(x34-x35))==x36);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x46 = -1;
	static int8_t x47 = -19;
	int32_t x48 = INT32_MAX;

	t2 = ((x45*(x46-x47))==x48);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x49 = 3U;
	int32_t x50 = -1;
	static int32_t x51 = 0;
	int32_t t3 = 3192;

	t3 = ((x49*(x50-x51))==x52);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x53 = UINT64_MAX;
	static int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MIN;
	volatile uint8_t x56 = UINT8_MAX;
	static int32_t t4 = 11;

	t4 = ((x53*(x54-x55))==x56);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x58 = 0;
	uint64_t x59 = UINT64_MAX;
	int32_t t5 = -75449516;

	t5 = ((x57*(x58-x59))==x60);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x61 = 0;
	uint32_t x62 = 16038U;
	int32_t t6 = 24146392;

	t6 = ((x61*(x62-x63))==x64);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x65 = INT32_MIN;
	volatile uint64_t x66 = 2939706844670774LLU;
	int8_t x67 = INT8_MIN;
	int32_t x68 = INT32_MIN;
	volatile int32_t t7 = 6518;

	t7 = ((x65*(x66-x67))==x68);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x70 = UINT64_MAX;
	int64_t x71 = INT64_MIN;
	volatile int64_t x72 = -356760LL;
	static int32_t t8 = -2179;

	t8 = ((x69*(x70-x71))==x72);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x81 = 2394U;
	int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	static int64_t x84 = INT64_MIN;
	volatile int32_t t9 = -133055917;

	t9 = ((x81*(x82-x83))==x84);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x85 = INT16_MIN;
	static int16_t x86 = INT16_MIN;
	volatile int32_t t10 = -220;

	t10 = ((x85*(x86-x87))==x88);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x93 = 1U;
	static int64_t x94 = -1LL;
	uint32_t x95 = 254U;
	int64_t x96 = INT64_MIN;
	int32_t t11 = 49;

	t11 = ((x93*(x94-x95))==x96);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x97 = INT8_MAX;
	uint16_t x98 = 2U;
	volatile int16_t x99 = -318;
	volatile int64_t x100 = INT64_MIN;
	volatile int32_t t12 = 19069;

	t12 = ((x97*(x98-x99))==x100);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x102 = 84LL;
	int64_t x103 = -1LL;
	uint8_t x104 = 6U;
	int32_t t13 = 36137451;

	t13 = ((x101*(x102-x103))==x104);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x107 = 368LLU;
	int32_t x108 = -95892511;
	int32_t t14 = -5014597;

	t14 = ((x105*(x106-x107))==x108);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x113 = UINT32_MAX;
	volatile uint64_t x115 = UINT64_MAX;
	int8_t x116 = -19;
	volatile int32_t t15 = -32526611;

	t15 = ((x113*(x114-x115))==x116);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x121 = INT16_MAX;
	int32_t x122 = INT32_MIN;
	uint32_t x123 = 147749U;
	volatile int64_t x124 = INT64_MIN;

	t16 = ((x121*(x122-x123))==x124);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x125 = -884;
	uint8_t x127 = 43U;
	static int32_t x128 = INT32_MAX;
	int32_t t17 = 31;

	t17 = ((x125*(x126-x127))==x128);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x129 = 82510011;
	volatile int32_t x131 = -1;
	static uint16_t x132 = UINT16_MAX;
	volatile int32_t t18 = 3;

	t18 = ((x129*(x130-x131))==x132);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x145 = 12180471U;
	volatile int16_t x146 = INT16_MIN;
	static int8_t x147 = INT8_MAX;
	static volatile int64_t x148 = -20318LL;
	volatile int32_t t19 = 30;

	t19 = ((x145*(x146-x147))==x148);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x161 = 0;
	static int8_t x162 = INT8_MIN;
	uint16_t x163 = 76U;
	int32_t t20 = -1716;

	t20 = ((x161*(x162-x163))==x164);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x169 = -1;
	static uint64_t x170 = 162068LLU;
	volatile uint8_t x172 = UINT8_MAX;
	volatile int32_t t21 = 200956;

	t21 = ((x169*(x170-x171))==x172);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x173 = UINT8_MAX;
	static int8_t x174 = 24;
	static volatile int16_t x175 = INT16_MAX;
	volatile int32_t t22 = 1;

	t22 = ((x173*(x174-x175))==x176);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x177 = -1;
	uint64_t x179 = 24600280801LLU;

	t23 = ((x177*(x178-x179))==x180);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x181 = -1;
	int16_t x182 = -1;
	int8_t x183 = INT8_MIN;
	static int16_t x184 = INT16_MAX;

	t24 = ((x181*(x182-x183))==x184);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x186 = -1;
	static uint32_t x187 = UINT32_MAX;
	volatile uint8_t x188 = 25U;

	t25 = ((x185*(x186-x187))==x188);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x189 = -1;
	uint8_t x190 = UINT8_MAX;
	int32_t x191 = INT32_MAX;

	t26 = ((x189*(x190-x191))==x192);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x197 = 91;
	int32_t x199 = -1;
	static uint64_t x200 = 3LLU;
	volatile int32_t t27 = -218362441;

	t27 = ((x197*(x198-x199))==x200);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x201 = 2528U;
	static uint16_t x203 = 1U;
	int16_t x204 = INT16_MIN;
	static volatile int32_t t28 = -8;

	t28 = ((x201*(x202-x203))==x204);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x206 = -1;
	static volatile int16_t x207 = -1;
	static uint16_t x208 = UINT16_MAX;
	static int32_t t29 = 3;

	t29 = ((x205*(x206-x207))==x208);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x209 = INT32_MIN;
	volatile int8_t x210 = 11;
	uint32_t x211 = UINT32_MAX;
	int16_t x212 = 9;
	volatile int32_t t30 = -198950924;

	t30 = ((x209*(x210-x211))==x212);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x217 = INT16_MIN;
	uint64_t x218 = 1357LLU;
	int64_t x219 = INT64_MAX;
	uint16_t x220 = 172U;
	volatile int32_t t31 = 4116;

	t31 = ((x217*(x218-x219))==x220);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x221 = INT8_MIN;
	uint64_t x223 = 1046636LLU;

	t32 = ((x221*(x222-x223))==x224);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x225 = -16782966;
	volatile uint32_t x226 = 236U;
	int64_t x227 = -4967312379LL;
	int64_t x228 = INT64_MAX;
	volatile int32_t t33 = 420328720;

	t33 = ((x225*(x226-x227))==x228);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x238 = -1839125LL;
	int8_t x239 = INT8_MIN;
	int32_t t34 = -71414;

	t34 = ((x237*(x238-x239))==x240);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x241 = -1;
	int8_t x242 = -28;
	int64_t x243 = 3955784163LL;
	int8_t x244 = INT8_MAX;
	int32_t t35 = -4748091;

	t35 = ((x241*(x242-x243))==x244);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x245 = -46;
	int16_t x246 = 29;
	int8_t x248 = INT8_MAX;
	int32_t t36 = -8598302;

	t36 = ((x245*(x246-x247))==x248);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x253 = 2;
	volatile uint8_t x254 = 0U;
	int8_t x255 = -53;
	static int16_t x256 = 3312;

	t37 = ((x253*(x254-x255))==x256);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x265 = -1;
	uint8_t x268 = 66U;
	static volatile int32_t t38 = -26367961;

	t38 = ((x265*(x266-x267))==x268);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x269 = -776261711511041LL;
	uint8_t x270 = 74U;
	static int16_t x271 = 200;
	int32_t t39 = -17092447;

	t39 = ((x269*(x270-x271))==x272);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x273 = 90U;
	static int8_t x274 = INT8_MAX;
	static int64_t x275 = -1LL;
	int32_t t40 = -3339096;

	t40 = ((x273*(x274-x275))==x276);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x285 = 61U;
	volatile int16_t x286 = INT16_MAX;
	uint16_t x287 = 37U;
	int8_t x288 = INT8_MIN;

	t41 = ((x285*(x286-x287))==x288);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x289 = 0;
	static volatile int8_t x290 = INT8_MIN;
	int16_t x291 = INT16_MAX;
	int16_t x292 = INT16_MIN;
	int32_t t42 = 3;

	t42 = ((x289*(x290-x291))==x292);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x305 = 1143107790843LLU;
	static volatile uint32_t x306 = 109939U;
	static uint32_t x307 = 317345870U;
	int64_t x308 = 1076582900761683217LL;
	int32_t t43 = 14788;

	t43 = ((x305*(x306-x307))==x308);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x310 = -1LL;
	volatile int16_t x311 = INT16_MAX;
	uint8_t x312 = UINT8_MAX;
	int32_t t44 = 1863537;

	t44 = ((x309*(x310-x311))==x312);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x314 = -1;
	int32_t x315 = -1;
	static volatile int64_t x316 = -1571546206459829LL;
	volatile int32_t t45 = -16764596;

	t45 = ((x313*(x314-x315))==x316);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x317 = -1;
	int16_t x318 = 10;
	int16_t x319 = 15064;
	volatile int8_t x320 = INT8_MIN;

	t46 = ((x317*(x318-x319))==x320);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = -1;
	int16_t x323 = -1;
	int8_t x324 = INT8_MAX;

	t47 = ((x321*(x322-x323))==x324);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x325 = 3777U;
	int16_t x326 = -3622;
	volatile uint8_t x327 = UINT8_MAX;
	uint8_t x328 = 0U;
	volatile int32_t t48 = -917;

	t48 = ((x325*(x326-x327))==x328);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x330 = -1LL;
	static int16_t x331 = -1;
	int32_t x332 = INT32_MIN;
	volatile int32_t t49 = 84;

	t49 = ((x329*(x330-x331))==x332);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x335 = 7;
	int64_t x336 = INT64_MAX;
	volatile int32_t t50 = -2593306;

	t50 = ((x333*(x334-x335))==x336);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x337 = 3U;
	static int32_t x338 = INT32_MAX;

	t51 = ((x337*(x338-x339))==x340);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x341 = 11335139383LLU;
	static uint32_t x342 = 6921286U;
	volatile int32_t x344 = -1;
	int32_t t52 = 2028731;

	t52 = ((x341*(x342-x343))==x344);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x349 = UINT8_MAX;
	int64_t x350 = -98864LL;
	int8_t x351 = INT8_MIN;
	static int32_t x352 = INT32_MIN;
	int32_t t53 = 1;

	t53 = ((x349*(x350-x351))==x352);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x353 = 72U;
	int64_t x354 = -1LL;
	uint32_t x355 = UINT32_MAX;
	int32_t t54 = 2895574;

	t54 = ((x353*(x354-x355))==x356);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x357 = -9;
	int8_t x358 = 5;
	int8_t x359 = -1;
	int16_t x360 = INT16_MAX;
	int32_t t55 = 1875;

	t55 = ((x357*(x358-x359))==x360);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x367 = -1;
	int32_t t56 = -25786961;

	t56 = ((x365*(x366-x367))==x368);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x369 = INT32_MAX;
	static volatile int64_t x370 = -887897LL;
	static int64_t x371 = -1LL;
	int8_t x372 = 0;
	volatile int32_t t57 = 14500555;

	t57 = ((x369*(x370-x371))==x372);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x373 = UINT32_MAX;
	int8_t x374 = INT8_MAX;
	int16_t x375 = 2505;
	uint8_t x376 = UINT8_MAX;
	int32_t t58 = 0;

	t58 = ((x373*(x374-x375))==x376);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x378 = 19U;
	uint64_t x379 = 256759LLU;
	int8_t x380 = 8;

	t59 = ((x377*(x378-x379))==x380);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x381 = INT32_MIN;
	int8_t x383 = 0;
	int32_t t60 = 31626995;

	t60 = ((x381*(x382-x383))==x384);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x385 = -1;
	volatile int8_t x387 = INT8_MAX;
	static int32_t x388 = INT32_MIN;
	static volatile int32_t t61 = -171894508;

	t61 = ((x385*(x386-x387))==x388);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	static uint32_t x391 = 2049U;
	int64_t x392 = INT64_MAX;

	t62 = ((x389*(x390-x391))==x392);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x393 = UINT16_MAX;
	int8_t x394 = -1;
	static int16_t x395 = 0;
	int32_t x396 = 14049;
	static volatile int32_t t63 = 539030534;

	t63 = ((x393*(x394-x395))==x396);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x401 = UINT32_MAX;
	int16_t x403 = -18;
	int32_t t64 = -3;

	t64 = ((x401*(x402-x403))==x404);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x406 = 0;
	static int16_t x407 = 73;
	int16_t x408 = 89;
	int32_t t65 = -1062561;

	t65 = ((x405*(x406-x407))==x408);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x409 = INT8_MIN;
	int16_t x410 = INT16_MIN;
	volatile uint64_t x411 = 30226LLU;
	static int32_t x412 = 28596837;
	volatile int32_t t66 = 697388;

	t66 = ((x409*(x410-x411))==x412);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x413 = -1LL;
	static uint8_t x415 = UINT8_MAX;
	static uint8_t x416 = UINT8_MAX;
	volatile int32_t t67 = -2533;

	t67 = ((x413*(x414-x415))==x416);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x422 = 15U;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = -1;
	volatile int32_t t68 = 29354178;

	t68 = ((x421*(x422-x423))==x424);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x426 = 31;
	int64_t x427 = -456804026038LL;
	int8_t x428 = -1;
	static volatile int32_t t69 = -152;

	t69 = ((x425*(x426-x427))==x428);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x429 = 3642468055682749LLU;
	uint64_t x430 = 603238452619626LLU;
	int8_t x432 = INT8_MIN;
	int32_t t70 = -779;

	t70 = ((x429*(x430-x431))==x432);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x433 = 0;
	volatile uint64_t x435 = 9494LLU;
	uint32_t x436 = 44756U;

	t71 = ((x433*(x434-x435))==x436);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x437 = UINT64_MAX;
	uint32_t x440 = 886U;
	int32_t t72 = -6910;

	t72 = ((x437*(x438-x439))==x440);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x441 = INT32_MAX;
	uint64_t x443 = 21438257366417098LLU;
	int32_t t73 = -36988;

	t73 = ((x441*(x442-x443))==x444);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x449 = -1;
	uint32_t x450 = 174372U;
	uint8_t x451 = 6U;
	int16_t x452 = -1;

	t74 = ((x449*(x450-x451))==x452);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x454 = 31;
	uint8_t x455 = UINT8_MAX;
	int32_t t75 = 264644;

	t75 = ((x453*(x454-x455))==x456);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x462 = -1;
	volatile uint32_t x463 = 185415704U;
	volatile int32_t t76 = 446308196;

	t76 = ((x461*(x462-x463))==x464);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x465 = -143447264167682LL;
	uint8_t x466 = 0U;
	int64_t x467 = 3LL;
	volatile uint32_t x468 = 398729409U;

	t77 = ((x465*(x466-x467))==x468);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x469 = -10;
	static volatile uint64_t x470 = 8655657933LLU;
	uint8_t x471 = 98U;
	volatile int32_t t78 = -42859;

	t78 = ((x469*(x470-x471))==x472);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x473 = UINT8_MAX;
	int16_t x475 = INT16_MIN;
	static volatile int32_t t79 = -234140465;

	t79 = ((x473*(x474-x475))==x476);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x477 = 26;
	volatile uint32_t x478 = 2U;
	static int16_t x479 = INT16_MAX;

	t80 = ((x477*(x478-x479))==x480);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x485 = INT16_MIN;
	int8_t x486 = INT8_MAX;
	int8_t x487 = -1;
	int8_t x488 = INT8_MAX;
	int32_t t81 = -37673447;

	t81 = ((x485*(x486-x487))==x488);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x489 = -4;
	uint16_t x490 = UINT16_MAX;
	int8_t x491 = -1;
	uint16_t x492 = 0U;
	static int32_t t82 = 1;

	t82 = ((x489*(x490-x491))==x492);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x493 = UINT32_MAX;
	volatile int8_t x494 = 1;
	int64_t x495 = 300436217LL;
	static uint32_t x496 = UINT32_MAX;
	volatile int32_t t83 = 0;

	t83 = ((x493*(x494-x495))==x496);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x497 = INT8_MAX;
	static uint8_t x499 = 1U;
	static volatile uint8_t x500 = 1U;
	int32_t t84 = 0;

	t84 = ((x497*(x498-x499))==x500);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x502 = UINT64_MAX;
	int64_t x503 = INT64_MAX;
	uint32_t x504 = UINT32_MAX;
	static volatile int32_t t85 = 1365417;

	t85 = ((x501*(x502-x503))==x504);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x509 = UINT8_MAX;
	int16_t x510 = -11;
	volatile uint16_t x511 = 3233U;
	int32_t x512 = INT32_MIN;
	static volatile int32_t t86 = -16761841;

	t86 = ((x509*(x510-x511))==x512);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x513 = 1442616144LL;
	uint64_t x514 = UINT64_MAX;
	uint32_t x515 = 538706U;
	volatile int32_t t87 = 31;

	t87 = ((x513*(x514-x515))==x516);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x517 = -137837101837354475LL;
	static uint32_t x518 = 115U;
	volatile uint64_t x519 = 1176480397519LLU;
	static uint32_t x520 = UINT32_MAX;
	static int32_t t88 = -156;

	t88 = ((x517*(x518-x519))==x520);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x521 = 3U;
	static int16_t x522 = 77;
	int64_t x523 = -1LL;

	t89 = ((x521*(x522-x523))==x524);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x526 = 296399672;
	uint16_t x527 = 4U;
	volatile int32_t t90 = -11264028;

	t90 = ((x525*(x526-x527))==x528);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x537 = 872628U;
	int8_t x538 = 1;
	int8_t x539 = INT8_MIN;

	t91 = ((x537*(x538-x539))==x540);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x542 = 3U;
	uint32_t x544 = UINT32_MAX;
	int32_t t92 = 56;

	t92 = ((x541*(x542-x543))==x544);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x557 = 907U;
	static int16_t x560 = INT16_MIN;
	int32_t t93 = -7968422;

	t93 = ((x557*(x558-x559))==x560);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x566 = INT8_MAX;
	uint32_t x567 = UINT32_MAX;
	static volatile uint8_t x568 = 27U;
	int32_t t94 = 128460992;

	t94 = ((x565*(x566-x567))==x568);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x573 = -15;
	static volatile uint16_t x574 = UINT16_MAX;
	volatile int16_t x575 = INT16_MIN;
	int64_t x576 = -1LL;

	t95 = ((x573*(x574-x575))==x576);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x577 = 17U;
	static uint32_t x578 = 84745211U;
	static uint64_t x579 = UINT64_MAX;
	int32_t t96 = 29277;

	t96 = ((x577*(x578-x579))==x580);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x581 = -18774108697743472LL;
	uint8_t x582 = 2U;
	static int64_t x584 = INT64_MIN;
	volatile int32_t t97 = -1386824;

	t97 = ((x581*(x582-x583))==x584);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x585 = INT16_MAX;
	int32_t x586 = -396100481;
	int64_t x587 = 0LL;
	static int32_t x588 = -5766692;
	volatile int32_t t98 = -1;

	t98 = ((x585*(x586-x587))==x588);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x590 = INT32_MIN;
	volatile int32_t x591 = INT32_MIN;
	static int32_t x592 = -1;
	static volatile int32_t t99 = 2956215;

	t99 = ((x589*(x590-x591))==x592);

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

