#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MAX;
static uint32_t x20 = 251597010U;
volatile uint32_t t1 = 887U;
int8_t x32 = -57;
uint8_t x42 = 0U;
volatile int32_t x60 = INT32_MIN;
uint64_t x65 = 1253378846LLU;
static uint64_t x73 = UINT64_MAX;
static int8_t x74 = -23;
uint32_t x75 = 48345U;
uint64_t t7 = 306648706403111013LLU;
volatile uint64_t x82 = 946594169015729302LLU;
volatile int32_t t8 = 50391;
static volatile uint16_t x89 = UINT16_MAX;
int16_t x90 = 147;
int64_t x102 = -45LL;
int8_t x110 = INT8_MIN;
int8_t x111 = INT8_MIN;
static int8_t x119 = INT8_MIN;
int16_t x127 = INT16_MIN;
static uint64_t x128 = UINT64_MAX;
volatile uint64_t t15 = UINT64_MAX;
int8_t x138 = INT8_MIN;
uint64_t x140 = 59544652812364674LLU;
volatile uint64_t t16 = 4100459514LLU;
volatile uint16_t x141 = 3491U;
volatile uint16_t x142 = 31493U;
uint8_t x145 = 2U;
int32_t t18 = 1158;
static int32_t x190 = 6658757;
volatile uint64_t t22 = 866944669371460225LLU;
uint16_t x193 = 15U;
uint32_t x196 = UINT32_MAX;
int8_t x206 = 0;
uint64_t x225 = 54526734678LLU;
static uint64_t t27 = 328269634052LLU;
volatile uint16_t x229 = 1491U;
int16_t x244 = 317;
static volatile int32_t t29 = -1157;
volatile int32_t x259 = 1;
volatile int32_t t31 = 1809;
volatile int64_t x263 = 417098076LL;
static volatile uint64_t t32 = 1366583267274075693LLU;
static int8_t x266 = -1;
volatile int32_t t35 = -366236;
volatile int32_t t36 = -613898475;
uint32_t x289 = 682324720U;
int32_t x303 = INT32_MAX;
volatile int64_t t40 = 15968LL;
static uint64_t x308 = 5831107850LLU;
uint64_t x314 = UINT64_MAX;
static volatile int64_t x315 = INT64_MAX;
int16_t x316 = -52;
static int32_t x330 = -1;
volatile uint64_t x332 = 79593LLU;
volatile int64_t x347 = INT64_MIN;
static int8_t x348 = -56;
volatile uint32_t x349 = 48U;
int32_t x358 = INT32_MAX;
int16_t x367 = INT16_MIN;
uint32_t x390 = 3488823U;
volatile int16_t x391 = -109;
int32_t x398 = -6;
static int32_t x399 = INT32_MIN;
volatile int32_t x404 = INT32_MIN;
volatile int64_t t53 = -1789891LL;
int64_t x408 = INT64_MIN;
volatile int32_t t55 = -189274;
volatile int64_t x435 = 66437457911LL;
static uint32_t x436 = 0U;
int32_t x438 = INT32_MIN;
uint32_t x440 = 9135U;
int64_t x455 = INT64_MAX;
volatile uint32_t x483 = UINT32_MAX;
int16_t x494 = -1;
static uint64_t x496 = UINT64_MAX;
volatile uint32_t x509 = UINT32_MAX;
int16_t x550 = INT16_MAX;
uint16_t x551 = UINT16_MAX;
int32_t x562 = -2167;
int32_t x564 = -7;
static uint8_t x566 = 1U;
uint64_t x568 = UINT64_MAX;
uint32_t x574 = UINT32_MAX;
int16_t x583 = INT16_MAX;
volatile int32_t x588 = -1;
static int64_t x591 = 158858026LL;
int8_t x592 = INT8_MIN;
uint16_t x593 = UINT16_MAX;
volatile uint16_t x596 = 1U;
static int64_t t76 = 3019LL;
static uint64_t x625 = 3391679148085758013LLU;
int8_t x627 = INT8_MAX;
int32_t t78 = -1;
uint64_t t79 = 199499004LLU;
uint32_t x661 = 150U;
volatile uint32_t t82 = 9940U;
static uint32_t x669 = UINT32_MAX;
uint64_t x674 = 224555125932LLU;
int8_t x687 = INT8_MIN;
static int64_t x709 = 21799LL;
int64_t x724 = INT64_MIN;
uint64_t x731 = 12200024LLU;
uint64_t x753 = UINT64_MAX;
uint16_t x757 = UINT16_MAX;
volatile int16_t x760 = -310;


void f0(void) {
	uint32_t x9 = 1231784U;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	uint32_t t0 = 82834412U;

	t0 = ((x9>>(x10==x11))+x12);

	if (t0 != 1231911U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x17 = 54U;
	uint64_t x18 = 165513885633070795LLU;
	volatile int64_t x19 = INT64_MAX;

	t1 = ((x17>>(x18==x19))+x20);

	if (t1 != 251597064U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x29 = 5;
	volatile int64_t x30 = INT64_MIN;
	static int64_t x31 = -1LL;
	volatile int32_t t2 = -5547560;

	t2 = ((x29>>(x30==x31))+x32);

	if (t2 != -52) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x41 = 5U;
	static int32_t x43 = INT32_MIN;
	volatile int16_t x44 = INT16_MAX;
	volatile int32_t t3 = -155;

	t3 = ((x41>>(x42==x43))+x44);

	if (t3 != 32772) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x57 = 29U;
	uint64_t x58 = UINT64_MAX;
	uint8_t x59 = 6U;
	volatile int32_t t4 = 84;

	t4 = ((x57>>(x58==x59))+x60);

	if (t4 != -2147483619) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x61 = 4055517LLU;
	int64_t x62 = -48803LL;
	static int8_t x63 = -13;
	int32_t x64 = 844667;
	uint64_t t5 = 1818105210790748LLU;

	t5 = ((x61>>(x62==x63))+x64);

	if (t5 != 4900184LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x66 = 5384133U;
	volatile uint64_t x67 = 93LLU;
	uint64_t x68 = 525032163853260468LLU;
	static volatile uint64_t t6 = 22292LLU;

	t6 = ((x65>>(x66==x67))+x68);

	if (t6 != 525032165106639314LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x76 = INT16_MIN;

	t7 = ((x73>>(x74==x75))+x76);

	if (t7 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x81 = 4;
	int32_t x83 = INT32_MAX;
	int32_t x84 = -1;

	t8 = ((x81>>(x82==x83))+x84);

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x91 = UINT8_MAX;
	int16_t x92 = INT16_MIN;
	int32_t t9 = -68;

	t9 = ((x89>>(x90==x91))+x92);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x97 = 8LLU;
	volatile int64_t x98 = INT64_MIN;
	int32_t x99 = INT32_MIN;
	int16_t x100 = 21;
	volatile uint64_t t10 = 2233220952820251002LLU;

	t10 = ((x97>>(x98==x99))+x100);

	if (t10 != 29LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x101 = 7871678665790LLU;
	int32_t x103 = -97251030;
	volatile int8_t x104 = INT8_MIN;
	static volatile uint64_t t11 = 335LLU;

	t11 = ((x101>>(x102==x103))+x104);

	if (t11 != 7871678665662LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x109 = UINT16_MAX;
	int16_t x112 = -1;
	int32_t t12 = 66;

	t12 = ((x109>>(x110==x111))+x112);

	if (t12 != 32766) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x117 = 1;
	uint64_t x118 = UINT64_MAX;
	int64_t x120 = INT64_MIN;
	volatile int64_t t13 = 1232910300LL;

	t13 = ((x117>>(x118==x119))+x120);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x121 = 493080U;
	volatile int8_t x122 = -15;
	int64_t x123 = 35LL;
	int8_t x124 = INT8_MIN;
	volatile uint32_t t14 = 15982570U;

	t14 = ((x121>>(x122==x123))+x124);

	if (t14 != 492952U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x125 = 0U;
	static uint16_t x126 = 4823U;

	t15 = ((x125>>(x126==x127))+x128);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x137 = 77646021U;
	int8_t x139 = INT8_MAX;

	t16 = ((x137>>(x138==x139))+x140);

	if (t16 != 59544652890010695LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x143 = 2U;
	int64_t x144 = INT64_MIN;
	int64_t t17 = 5625LL;

	t17 = ((x141>>(x142==x143))+x144);

	if (t17 != -9223372036854772317LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x146 = UINT8_MAX;
	uint64_t x147 = 21LLU;
	int32_t x148 = INT32_MIN;

	t18 = ((x145>>(x146==x147))+x148);

	if (t18 != -2147483646) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x149 = INT8_MAX;
	uint32_t x150 = UINT32_MAX;
	uint16_t x151 = UINT16_MAX;
	int16_t x152 = INT16_MIN;
	static volatile int32_t t19 = -148;

	t19 = ((x149>>(x150==x151))+x152);

	if (t19 != -32641) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x173 = UINT32_MAX;
	uint32_t x174 = 231U;
	int32_t x175 = -1;
	volatile int64_t x176 = -55374844435742829LL;
	volatile int64_t t20 = 7170548167LL;

	t20 = ((x173>>(x174==x175))+x176);

	if (t20 != -55374840140775534LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x177 = INT32_MAX;
	int16_t x178 = 84;
	static volatile uint8_t x179 = 62U;
	int32_t x180 = INT32_MIN;
	volatile int32_t t21 = -4;

	t21 = ((x177>>(x178==x179))+x180);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x189 = 977550359192240LLU;
	uint16_t x191 = 40U;
	uint32_t x192 = 0U;

	t22 = ((x189>>(x190==x191))+x192);

	if (t22 != 977550359192240LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x194 = 2U;
	uint64_t x195 = 370238873LLU;
	volatile uint32_t t23 = 19U;

	t23 = ((x193>>(x194==x195))+x196);

	if (t23 != 14U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x205 = UINT32_MAX;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	volatile int64_t t24 = 407278LL;

	t24 = ((x205>>(x206==x207))+x208);

	if (t24 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x209 = UINT32_MAX;
	uint16_t x210 = UINT16_MAX;
	static uint32_t x211 = 567923819U;
	volatile int16_t x212 = INT16_MIN;
	volatile uint32_t t25 = 1U;

	t25 = ((x209>>(x210==x211))+x212);

	if (t25 != 4294934527U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x217 = 5U;
	int32_t x218 = -4903392;
	int8_t x219 = INT8_MIN;
	volatile uint64_t x220 = 1578089351LLU;
	volatile uint64_t t26 = 103LLU;

	t26 = ((x217>>(x218==x219))+x220);

	if (t26 != 1578089356LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x226 = -3;
	uint16_t x227 = 23264U;
	int64_t x228 = -50309133963LL;

	t27 = ((x225>>(x226==x227))+x228);

	if (t27 != 4217600715LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x230 = 2LL;
	int64_t x231 = 1756299327287LL;
	uint16_t x232 = UINT16_MAX;
	int32_t t28 = 627415;

	t28 = ((x229>>(x230==x231))+x232);

	if (t28 != 67026) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x241 = UINT8_MAX;
	int8_t x242 = INT8_MIN;
	static volatile uint8_t x243 = UINT8_MAX;

	t29 = ((x241>>(x242==x243))+x244);

	if (t29 != 572) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x253 = INT8_MAX;
	int64_t x254 = INT64_MIN;
	int64_t x255 = -5LL;
	volatile uint8_t x256 = UINT8_MAX;
	static int32_t t30 = -14;

	t30 = ((x253>>(x254==x255))+x256);

	if (t30 != 382) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x257 = 28;
	volatile uint64_t x258 = 333LLU;
	int32_t x260 = INT32_MIN;

	t31 = ((x257>>(x258==x259))+x260);

	if (t31 != -2147483620) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x261 = 43543635423192216LLU;
	int32_t x262 = 536560;
	int64_t x264 = INT64_MIN;

	t32 = ((x261>>(x262==x263))+x264);

	if (t32 != 9266915672277968024LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x265 = 29703;
	uint32_t x267 = UINT32_MAX;
	uint16_t x268 = UINT16_MAX;
	int32_t t33 = 0;

	t33 = ((x265>>(x266==x267))+x268);

	if (t33 != 80386) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x269 = 1948516293U;
	volatile uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MAX;
	volatile uint32_t t34 = 2054800U;

	t34 = ((x269>>(x270==x271))+x272);

	if (t34 != 4095999940U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x273 = 4U;
	static int64_t x274 = INT64_MIN;
	int16_t x275 = -1;
	static int8_t x276 = INT8_MAX;

	t35 = ((x273>>(x274==x275))+x276);

	if (t35 != 131) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x281 = INT32_MAX;
	volatile int32_t x282 = -100;
	volatile int32_t x283 = INT32_MIN;
	int32_t x284 = -89;

	t36 = ((x281>>(x282==x283))+x284);

	if (t36 != 2147483558) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x290 = 25U;
	int32_t x291 = INT32_MAX;
	int16_t x292 = INT16_MIN;
	static uint32_t t37 = 214635325U;

	t37 = ((x289>>(x290==x291))+x292);

	if (t37 != 682291952U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x293 = INT32_MAX;
	volatile int8_t x294 = INT8_MIN;
	uint32_t x295 = 160296664U;
	int64_t x296 = INT64_MIN;
	int64_t t38 = -385016LL;

	t38 = ((x293>>(x294==x295))+x296);

	if (t38 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x297 = UINT32_MAX;
	uint16_t x298 = 430U;
	static int32_t x299 = -1;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t39 = 120618705033205764LLU;

	t39 = ((x297>>(x298==x299))+x300);

	if (t39 != 4294967294LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x301 = UINT32_MAX;
	int32_t x302 = INT32_MIN;
	int64_t x304 = -1LL;

	t40 = ((x301>>(x302==x303))+x304);

	if (t40 != 4294967294LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x305 = UINT16_MAX;
	static volatile uint8_t x306 = 3U;
	static volatile int32_t x307 = INT32_MIN;
	static uint64_t t41 = 4581887933LLU;

	t41 = ((x305>>(x306==x307))+x308);

	if (t41 != 5831173385LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x313 = 0U;
	static int32_t t42 = 43375;

	t42 = ((x313>>(x314==x315))+x316);

	if (t42 != -52) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x329 = 14219105U;
	int64_t x331 = INT64_MAX;
	uint64_t t43 = 52658179136LLU;

	t43 = ((x329>>(x330==x331))+x332);

	if (t43 != 14298698LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x333 = INT8_MAX;
	static uint8_t x334 = 24U;
	uint8_t x335 = UINT8_MAX;
	volatile int8_t x336 = -1;
	volatile int32_t t44 = -25;

	t44 = ((x333>>(x334==x335))+x336);

	if (t44 != 126) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x341 = 3562246U;
	uint8_t x342 = 4U;
	int32_t x343 = -61578;
	volatile uint16_t x344 = 0U;
	static volatile uint32_t t45 = 485U;

	t45 = ((x341>>(x342==x343))+x344);

	if (t45 != 3562246U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x345 = UINT32_MAX;
	int64_t x346 = INT64_MIN;
	uint32_t t46 = 127928834U;

	t46 = ((x345>>(x346==x347))+x348);

	if (t46 != 2147483591U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x350 = INT16_MAX;
	static int32_t x351 = -1;
	static uint16_t x352 = 16977U;
	volatile uint32_t t47 = 12579820U;

	t47 = ((x349>>(x350==x351))+x352);

	if (t47 != 17025U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x357 = UINT8_MAX;
	static int16_t x359 = -1;
	uint32_t x360 = 361303U;
	uint32_t t48 = 208625663U;

	t48 = ((x357>>(x358==x359))+x360);

	if (t48 != 361558U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x365 = 1;
	volatile int32_t x366 = -1;
	int8_t x368 = -1;
	int32_t t49 = 12161;

	t49 = ((x365>>(x366==x367))+x368);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x377 = 164U;
	int32_t x378 = INT32_MIN;
	uint8_t x379 = 20U;
	int32_t x380 = -56154;
	int32_t t50 = 1;

	t50 = ((x377>>(x378==x379))+x380);

	if (t50 != -55990) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x389 = 1;
	uint32_t x392 = 0U;
	volatile uint32_t t51 = 29U;

	t51 = ((x389>>(x390==x391))+x392);

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x397 = 567801093815627LLU;
	int8_t x400 = INT8_MAX;
	volatile uint64_t t52 = 7757877837LLU;

	t52 = ((x397>>(x398==x399))+x400);

	if (t52 != 567801093815754LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x401 = INT64_MAX;
	static int16_t x402 = INT16_MIN;
	int64_t x403 = INT64_MAX;

	t53 = ((x401>>(x402==x403))+x404);

	if (t53 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x405 = UINT8_MAX;
	volatile int8_t x406 = INT8_MIN;
	int64_t x407 = -31218148620LL;
	static volatile int64_t t54 = 1LL;

	t54 = ((x405>>(x406==x407))+x408);

	if (t54 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x417 = UINT8_MAX;
	volatile int64_t x418 = -506LL;
	static int64_t x419 = -8062660632684LL;
	static volatile int32_t x420 = 143292;

	t55 = ((x417>>(x418==x419))+x420);

	if (t55 != 143547) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x421 = UINT32_MAX;
	static volatile int8_t x422 = INT8_MIN;
	uint8_t x423 = 2U;
	int16_t x424 = -176;
	uint32_t t56 = 523404516U;

	t56 = ((x421>>(x422==x423))+x424);

	if (t56 != 4294967119U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x429 = 31536U;
	uint64_t x430 = 10175492LLU;
	int64_t x431 = -21873861582LL;
	volatile int16_t x432 = INT16_MAX;
	int32_t t57 = -3;

	t57 = ((x429>>(x430==x431))+x432);

	if (t57 != 64303) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x433 = 34569166556077831LL;
	static int32_t x434 = INT32_MIN;
	volatile int64_t t58 = -43692635423884LL;

	t58 = ((x433>>(x434==x435))+x436);

	if (t58 != 34569166556077831LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x437 = 3U;
	uint32_t x439 = UINT32_MAX;
	uint32_t t59 = 3648992U;

	t59 = ((x437>>(x438==x439))+x440);

	if (t59 != 9138U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x445 = 1U;
	static int32_t x446 = INT32_MIN;
	volatile int64_t x447 = INT64_MIN;
	int64_t x448 = -87968196LL;
	volatile int64_t t60 = -73503795643240LL;

	t60 = ((x445>>(x446==x447))+x448);

	if (t60 != -87968195LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x453 = UINT64_MAX;
	int8_t x454 = -58;
	int16_t x456 = -1;
	uint64_t t61 = 1239136LLU;

	t61 = ((x453>>(x454==x455))+x456);

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x481 = INT32_MAX;
	int16_t x482 = -1;
	volatile int32_t x484 = 340;
	int32_t t62 = 101159;

	t62 = ((x481>>(x482==x483))+x484);

	if (t62 != 1073742163) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x493 = UINT8_MAX;
	volatile int8_t x495 = INT8_MIN;
	volatile uint64_t t63 = 4065422008LLU;

	t63 = ((x493>>(x494==x495))+x496);

	if (t63 != 254LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x501 = 4U;
	uint8_t x502 = UINT8_MAX;
	volatile int16_t x503 = INT16_MIN;
	uint32_t x504 = 1178508659U;
	volatile uint32_t t64 = 17U;

	t64 = ((x501>>(x502==x503))+x504);

	if (t64 != 1178508663U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x505 = INT8_MAX;
	int32_t x506 = INT32_MIN;
	int32_t x507 = -1;
	volatile int8_t x508 = INT8_MAX;
	volatile int32_t t65 = -55213;

	t65 = ((x505>>(x506==x507))+x508);

	if (t65 != 254) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x510 = UINT64_MAX;
	int32_t x511 = INT32_MIN;
	volatile uint8_t x512 = 1U;
	uint32_t t66 = 63419866U;

	t66 = ((x509>>(x510==x511))+x512);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x521 = INT16_MAX;
	int64_t x522 = INT64_MIN;
	int8_t x523 = INT8_MIN;
	uint32_t x524 = UINT32_MAX;
	volatile uint32_t t67 = 1U;

	t67 = ((x521>>(x522==x523))+x524);

	if (t67 != 32766U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x549 = INT8_MAX;
	volatile int32_t x552 = -1;
	volatile int32_t t68 = -121;

	t68 = ((x549>>(x550==x551))+x552);

	if (t68 != 126) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x561 = 3U;
	int64_t x563 = INT64_MAX;
	volatile int32_t t69 = 0;

	t69 = ((x561>>(x562==x563))+x564);

	if (t69 != -4) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x565 = UINT16_MAX;
	int8_t x567 = INT8_MIN;
	uint64_t t70 = 397757112126599163LLU;

	t70 = ((x565>>(x566==x567))+x568);

	if (t70 != 65534LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x573 = 7U;
	int8_t x575 = INT8_MIN;
	int16_t x576 = INT16_MIN;
	volatile int32_t t71 = 2;

	t71 = ((x573>>(x574==x575))+x576);

	if (t71 != -32761) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x581 = INT16_MAX;
	volatile int32_t x582 = 0;
	volatile int16_t x584 = 1;
	static int32_t t72 = -913806;

	t72 = ((x581>>(x582==x583))+x584);

	if (t72 != 32768) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x585 = UINT16_MAX;
	int16_t x586 = 13386;
	volatile uint16_t x587 = 1831U;
	int32_t t73 = -61899;

	t73 = ((x585>>(x586==x587))+x588);

	if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x589 = 1U;
	static uint64_t x590 = 1405449LLU;
	volatile int32_t t74 = 5;

	t74 = ((x589>>(x590==x591))+x592);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x594 = -58;
	static int16_t x595 = INT16_MIN;
	static int32_t t75 = 9657959;

	t75 = ((x593>>(x594==x595))+x596);

	if (t75 != 65536) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x601 = 62U;
	volatile int16_t x602 = 1;
	uint32_t x603 = UINT32_MAX;
	int64_t x604 = INT64_MIN;

	t76 = ((x601>>(x602==x603))+x604);

	if (t76 != -9223372036854775746LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x626 = -1;
	int16_t x628 = INT16_MAX;
	static uint64_t t77 = 1LLU;

	t77 = ((x625>>(x626==x627))+x628);

	if (t77 != 3391679148085790780LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x637 = UINT16_MAX;
	static int64_t x638 = INT64_MAX;
	uint8_t x639 = 6U;
	int16_t x640 = -1;

	t78 = ((x637>>(x638==x639))+x640);

	if (t78 != 65534) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x641 = 4507328912628LLU;
	uint64_t x642 = 39027257021LLU;
	int64_t x643 = INT64_MIN;
	int64_t x644 = 700265LL;

	t79 = ((x641>>(x642==x643))+x644);

	if (t79 != 4507329612893LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x645 = UINT32_MAX;
	static int32_t x646 = INT32_MIN;
	uint16_t x647 = UINT16_MAX;
	uint8_t x648 = 91U;
	uint32_t t80 = 4508U;

	t80 = ((x645>>(x646==x647))+x648);

	if (t80 != 90U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x653 = UINT16_MAX;
	int32_t x654 = INT32_MAX;
	int32_t x655 = 4176;
	static volatile int8_t x656 = INT8_MIN;
	int32_t t81 = 57126;

	t81 = ((x653>>(x654==x655))+x656);

	if (t81 != 65407) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x662 = INT32_MIN;
	int32_t x663 = -1;
	uint8_t x664 = UINT8_MAX;

	t82 = ((x661>>(x662==x663))+x664);

	if (t82 != 405U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x670 = INT64_MIN;
	static uint16_t x671 = 452U;
	int8_t x672 = -1;
	static volatile uint32_t t83 = 1U;

	t83 = ((x669>>(x670==x671))+x672);

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x673 = UINT16_MAX;
	int32_t x675 = -13744109;
	uint32_t x676 = 1748335U;
	uint32_t t84 = 140683U;

	t84 = ((x673>>(x674==x675))+x676);

	if (t84 != 1813870U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x677 = 86676;
	int8_t x678 = INT8_MIN;
	int64_t x679 = -3LL;
	int64_t x680 = 387811252LL;
	int64_t t85 = -297LL;

	t85 = ((x677>>(x678==x679))+x680);

	if (t85 != 387897928LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x681 = 57;
	int32_t x682 = INT32_MIN;
	static int32_t x683 = INT32_MAX;
	static volatile uint8_t x684 = 41U;
	static int32_t t86 = -85089856;

	t86 = ((x681>>(x682==x683))+x684);

	if (t86 != 98) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x685 = 0;
	static int32_t x686 = -1;
	static volatile uint32_t x688 = UINT32_MAX;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = ((x685>>(x686==x687))+x688);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x689 = 24;
	uint8_t x690 = UINT8_MAX;
	static uint32_t x691 = 9336820U;
	uint16_t x692 = 5U;
	volatile int32_t t88 = -13;

	t88 = ((x689>>(x690==x691))+x692);

	if (t88 != 29) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x693 = UINT16_MAX;
	int16_t x694 = INT16_MIN;
	static uint64_t x695 = 290LLU;
	volatile int16_t x696 = -1;
	int32_t t89 = -368571721;

	t89 = ((x693>>(x694==x695))+x696);

	if (t89 != 65534) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x697 = INT8_MAX;
	int64_t x698 = -56LL;
	static volatile int8_t x699 = 1;
	int64_t x700 = -1LL;
	int64_t t90 = 8191670615LL;

	t90 = ((x697>>(x698==x699))+x700);

	if (t90 != 126LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x710 = UINT16_MAX;
	static uint32_t x711 = UINT32_MAX;
	int8_t x712 = -1;
	int64_t t91 = 20419914LL;

	t91 = ((x709>>(x710==x711))+x712);

	if (t91 != 21798LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x721 = 375974U;
	uint8_t x722 = UINT8_MAX;
	uint32_t x723 = UINT32_MAX;
	int64_t t92 = -3509LL;

	t92 = ((x721>>(x722==x723))+x724);

	if (t92 != -9223372036854399834LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x725 = 4568227;
	int64_t x726 = -1LL;
	volatile int8_t x727 = INT8_MIN;
	volatile uint8_t x728 = UINT8_MAX;
	static int32_t t93 = 58;

	t93 = ((x725>>(x726==x727))+x728);

	if (t93 != 4568482) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x729 = INT16_MAX;
	static volatile int16_t x730 = INT16_MAX;
	int32_t x732 = INT32_MIN;
	volatile int32_t t94 = -4075;

	t94 = ((x729>>(x730==x731))+x732);

	if (t94 != -2147450881) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x737 = UINT16_MAX;
	uint16_t x738 = UINT16_MAX;
	static int16_t x739 = 4;
	int16_t x740 = INT16_MIN;
	volatile int32_t t95 = 4762;

	t95 = ((x737>>(x738==x739))+x740);

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x745 = INT16_MAX;
	volatile int16_t x746 = INT16_MAX;
	int8_t x747 = INT8_MIN;
	uint32_t x748 = 30U;
	volatile uint32_t t96 = 89184U;

	t96 = ((x745>>(x746==x747))+x748);

	if (t96 != 32797U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x749 = 7627;
	volatile int64_t x750 = -26070462881134753LL;
	int64_t x751 = INT64_MAX;
	int8_t x752 = INT8_MAX;
	volatile int32_t t97 = -23696906;

	t97 = ((x749>>(x750==x751))+x752);

	if (t97 != 7754) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x754 = -1;
	uint32_t x755 = 43299U;
	int64_t x756 = -1LL;
	static volatile uint64_t t98 = 187354771849LLU;

	t98 = ((x753>>(x754==x755))+x756);

	if (t98 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x758 = -1LL;
	uint32_t x759 = UINT32_MAX;
	int32_t t99 = -219;

	t99 = ((x757>>(x758==x759))+x760);

	if (t99 != 65225) { NG(); } else { ; }
	
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

