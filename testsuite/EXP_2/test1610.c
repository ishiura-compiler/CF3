#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 26U;
uint8_t x5 = 0U;
volatile int16_t x21 = INT16_MAX;
uint16_t x22 = UINT16_MAX;
uint32_t t4 = 515234U;
int16_t x35 = INT16_MAX;
volatile uint32_t t5 = 3321U;
static int32_t x41 = 26954;
uint64_t x43 = 60238384LLU;
static int64_t t6 = 128806216784985984LL;
static int64_t x50 = 905623331107LL;
int32_t t9 = -1818905;
volatile int16_t x59 = INT16_MIN;
int64_t x72 = INT64_MIN;
int8_t x73 = 1;
int8_t x83 = 39;
uint64_t t13 = 98875115306583LLU;
volatile int32_t x86 = INT32_MIN;
int16_t x88 = -1;
uint64_t x92 = 7981224LLU;
int64_t x109 = INT64_MAX;
uint32_t x113 = 6723321U;
static uint64_t x116 = UINT64_MAX;
static volatile int32_t t20 = 924264845;
uint16_t x146 = UINT16_MAX;
static volatile int8_t x148 = -1;
volatile uint16_t x157 = UINT16_MAX;
int32_t x169 = INT32_MAX;
uint16_t x174 = 4U;
static uint8_t x181 = 1U;
int8_t x196 = INT8_MIN;
int16_t x204 = 3;
int64_t t30 = 928059946112846LL;
int32_t x211 = INT32_MIN;
volatile int32_t t31 = -142;
static volatile int32_t t32 = 44166678;
static uint16_t x225 = UINT16_MAX;
static uint8_t x229 = 0U;
int8_t x230 = 0;
uint32_t x231 = UINT32_MAX;
uint8_t x242 = UINT8_MAX;
int8_t x243 = INT8_MIN;
int64_t x249 = 40403LL;
int64_t x251 = INT64_MIN;
int64_t t37 = -646667695751LL;
static uint8_t x257 = 37U;
int32_t x263 = -1;
volatile uint64_t x264 = 7465465328591LLU;
uint8_t x275 = 26U;
int64_t x286 = -1LL;
int16_t x291 = -115;
volatile int32_t t46 = -642824;
static volatile uint32_t x319 = 10339U;
int32_t x336 = -1416;
int64_t x337 = INT64_MAX;
uint64_t x338 = 26LLU;
uint8_t x339 = 5U;
static volatile uint64_t t51 = 6600397492LLU;
uint32_t x369 = 1864U;
volatile uint32_t t53 = 15411U;
int64_t x374 = INT64_MAX;
static int8_t x375 = INT8_MAX;
int64_t x391 = INT64_MAX;
int8_t x392 = INT8_MIN;
uint32_t x393 = 15771126U;
static int64_t x408 = -1660600079071022970LL;
int8_t x409 = INT8_MAX;
int64_t x411 = 27LL;
uint8_t x441 = 0U;
uint16_t x443 = 1U;
uint64_t x445 = UINT64_MAX;
int32_t x458 = INT32_MIN;
uint32_t t68 = 1U;
uint16_t x469 = UINT16_MAX;
int64_t x471 = INT64_MIN;
uint32_t t70 = 24U;
int64_t x484 = INT64_MIN;
int64_t t71 = 1261718293LL;
uint32_t t73 = 112U;
int32_t x513 = INT32_MAX;
uint64_t x517 = 72548387650341095LLU;
int64_t x518 = INT64_MIN;
uint64_t t76 = 847316967311880LLU;
uint64_t x524 = 138LLU;
volatile uint64_t t77 = 2LLU;
uint64_t x525 = 622247503LLU;
int16_t x551 = -530;
static int32_t t80 = -7483;
uint16_t x559 = 8616U;
volatile int32_t t81 = -2;
int8_t x561 = 19;
volatile int16_t x564 = INT16_MAX;
static int32_t t82 = -1;
uint8_t x570 = UINT8_MAX;
int32_t t83 = -1896408;
int8_t x577 = 1;
static uint32_t x580 = 923696U;
int8_t x585 = INT8_MAX;
static int32_t t87 = 1;
volatile uint32_t x606 = 78271084U;
volatile uint64_t x612 = 17051377045LLU;
int32_t x622 = INT32_MIN;
volatile uint8_t x639 = UINT8_MAX;
int64_t x640 = 517019LL;
int16_t x643 = INT16_MAX;
int64_t x647 = INT64_MIN;
uint8_t x665 = 2U;
uint32_t x667 = 9U;
static volatile int32_t t98 = 0;
static uint32_t t99 = 221656U;


void f0(void) {
	int16_t x2 = -1;
	int8_t x3 = INT8_MIN;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 5;

	t0 = ((x1>>(x2<=x3))&x4);

	if (t0 != 26) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MAX;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 191867464802LL;

	t1 = ((x5>>(x6<=x7))&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x17 = UINT32_MAX;
	int64_t x18 = 22833674547525715LL;
	static int8_t x19 = INT8_MIN;
	int16_t x20 = INT16_MIN;
	volatile uint32_t t2 = 3274U;

	t2 = ((x17>>(x18<=x19))&x20);

	if (t2 != 4294934528U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x23 = UINT16_MAX;
	uint64_t x24 = 1417552425LLU;
	volatile uint64_t t3 = 16123457LLU;

	t3 = ((x21>>(x22<=x23))&x24);

	if (t3 != 8745LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 0;
	volatile int64_t x26 = -12133162072LL;
	int16_t x27 = -1;
	uint32_t x28 = UINT32_MAX;

	t4 = ((x25>>(x26<=x27))&x28);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x33 = UINT32_MAX;
	int16_t x34 = -1;
	int16_t x36 = 40;

	t5 = ((x33>>(x34<=x35))&x36);

	if (t5 != 40U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x42 = UINT32_MAX;
	volatile int64_t x44 = 2076281891941LL;

	t6 = ((x41>>(x42<=x43))&x44);

	if (t6 != 26688LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = 5137372840LL;
	int8_t x46 = INT8_MIN;
	int32_t x47 = INT32_MAX;
	int64_t x48 = -1LL;
	int64_t t7 = 128777668LL;

	t7 = ((x45>>(x46<=x47))&x48);

	if (t7 != 2568686420LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = UINT16_MAX;
	int64_t x51 = -1LL;
	static int64_t x52 = INT64_MIN;
	int64_t t8 = -3261LL;

	t8 = ((x49>>(x50<=x51))&x52);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = 0;
	volatile int32_t x54 = INT32_MIN;
	int16_t x55 = INT16_MAX;
	int8_t x56 = INT8_MIN;

	t9 = ((x53>>(x54<=x55))&x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x57 = INT32_MAX;
	int64_t x58 = INT64_MIN;
	volatile int32_t x60 = INT32_MIN;
	int32_t t10 = 0;

	t10 = ((x57>>(x58<=x59))&x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x69 = 5973U;
	int16_t x70 = INT16_MIN;
	uint32_t x71 = UINT32_MAX;
	int64_t t11 = -332947566858721844LL;

	t11 = ((x69>>(x70<=x71))&x72);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x74 = -1;
	int64_t x75 = -567LL;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t12 = -1;

	t12 = ((x73>>(x74<=x75))&x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x81 = 19U;
	uint16_t x82 = 7063U;
	static uint64_t x84 = UINT64_MAX;

	t13 = ((x81>>(x82<=x83))&x84);

	if (t13 != 19LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x85 = UINT8_MAX;
	int32_t x87 = 1;
	int32_t t14 = 57135;

	t14 = ((x85>>(x86<=x87))&x88);

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = INT16_MAX;
	int16_t x90 = -70;
	uint64_t x91 = 213137572648LLU;
	uint64_t t15 = 60011LLU;

	t15 = ((x89>>(x90<=x91))&x92);

	if (t15 != 18600LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = INT32_MAX;
	static int64_t x102 = -1LL;
	volatile int64_t x103 = INT64_MAX;
	volatile int64_t x104 = 381617705238561LL;
	volatile int64_t t16 = -168306650456996LL;

	t16 = ((x101>>(x102<=x103))&x104);

	if (t16 != 197312545LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x105 = UINT16_MAX;
	int64_t x106 = -37586LL;
	uint16_t x107 = UINT16_MAX;
	int64_t x108 = INT64_MIN;
	static int64_t t17 = -25461065322387625LL;

	t17 = ((x105>>(x106<=x107))&x108);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x110 = INT8_MAX;
	int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MIN;
	int64_t t18 = -630214289LL;

	t18 = ((x109>>(x110<=x111))&x112);

	if (t18 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x114 = UINT8_MAX;
	int64_t x115 = INT64_MIN;
	uint64_t t19 = 3LLU;

	t19 = ((x113>>(x114<=x115))&x116);

	if (t19 != 6723321LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x121 = INT16_MAX;
	uint64_t x122 = 868380376693LLU;
	int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MAX;

	t20 = ((x121>>(x122<=x123))&x124);

	if (t20 != 16383) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x125 = INT8_MAX;
	volatile uint64_t x126 = 3416840859366LLU;
	int8_t x127 = INT8_MIN;
	static volatile uint16_t x128 = 3U;
	int32_t t21 = -6645082;

	t21 = ((x125>>(x126<=x127))&x128);

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x145 = 1U;
	int8_t x147 = -3;
	uint32_t t22 = 122U;

	t22 = ((x145>>(x146<=x147))&x148);

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x149 = 780U;
	static volatile uint32_t x150 = 3575U;
	int8_t x151 = 47;
	uint64_t x152 = UINT64_MAX;
	uint64_t t23 = 2718262625506478LLU;

	t23 = ((x149>>(x150<=x151))&x152);

	if (t23 != 780LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MAX;
	volatile int8_t x160 = -2;
	int32_t t24 = 5;

	t24 = ((x157>>(x158<=x159))&x160);

	if (t24 != 32766) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x161 = 17608U;
	volatile uint16_t x162 = 0U;
	uint8_t x163 = 44U;
	uint32_t x164 = 720U;
	uint32_t t25 = 389119041U;

	t25 = ((x161>>(x162<=x163))&x164);

	if (t25 != 576U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x170 = 0U;
	int32_t x171 = -1221;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t26 = 19141296;

	t26 = ((x169>>(x170<=x171))&x172);

	if (t26 != 2147483520) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x173 = 976U;
	static uint16_t x175 = 1929U;
	int32_t x176 = INT32_MAX;
	volatile uint32_t t27 = 28382U;

	t27 = ((x173>>(x174<=x175))&x176);

	if (t27 != 488U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x182 = 93U;
	int32_t x183 = INT32_MAX;
	uint64_t x184 = 2LLU;
	volatile uint64_t t28 = 59296885489379LLU;

	t28 = ((x181>>(x182<=x183))&x184);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x193 = 94;
	int16_t x194 = INT16_MAX;
	uint16_t x195 = UINT16_MAX;
	int32_t t29 = 16;

	t29 = ((x193>>(x194<=x195))&x196);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x201 = 164111548054170033LL;
	uint64_t x202 = UINT64_MAX;
	int32_t x203 = INT32_MIN;

	t30 = ((x201>>(x202<=x203))&x204);

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x209 = INT8_MAX;
	uint64_t x210 = UINT64_MAX;
	int32_t x212 = 2318;

	t31 = ((x209>>(x210<=x211))&x212);

	if (t31 != 14) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x217 = 0U;
	int16_t x218 = 1965;
	int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MAX;

	t32 = ((x217>>(x218<=x219))&x220);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x226 = UINT8_MAX;
	int64_t x227 = -1LL;
	int64_t x228 = -1LL;
	static int64_t t33 = -86864LL;

	t33 = ((x225>>(x226<=x227))&x228);

	if (t33 != 65535LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x232 = INT8_MIN;
	int32_t t34 = -4828;

	t34 = ((x229>>(x230<=x231))&x232);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x233 = 55U;
	int32_t x234 = -9;
	volatile uint32_t x235 = UINT32_MAX;
	uint32_t x236 = UINT32_MAX;
	volatile uint32_t t35 = 1U;

	t35 = ((x233>>(x234<=x235))&x236);

	if (t35 != 27U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x241 = UINT8_MAX;
	int8_t x244 = -1;
	volatile int32_t t36 = -14058917;

	t36 = ((x241>>(x242<=x243))&x244);

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x250 = 210U;
	uint8_t x252 = UINT8_MAX;

	t37 = ((x249>>(x250<=x251))&x252);

	if (t37 != 211LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x258 = INT64_MAX;
	int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;
	volatile int32_t t38 = -797;

	t38 = ((x257>>(x258<=x259))&x260);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x261 = 655979U;
	uint16_t x262 = UINT16_MAX;
	uint64_t t39 = 123523296065LLU;

	t39 = ((x261>>(x262<=x263))&x264);

	if (t39 != 524875LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x273 = 1758;
	int64_t x274 = INT64_MAX;
	int32_t x276 = -686450;
	int32_t t40 = -1999826;

	t40 = ((x273>>(x274<=x275))&x276);

	if (t40 != 1678) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x277 = 7845934096149LL;
	uint16_t x278 = UINT16_MAX;
	int64_t x279 = INT64_MAX;
	int8_t x280 = -1;
	int64_t t41 = 54243802861308LL;

	t41 = ((x277>>(x278<=x279))&x280);

	if (t41 != 3922967048074LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x285 = 19465LL;
	volatile int64_t x287 = INT64_MIN;
	volatile uint16_t x288 = 1U;
	volatile int64_t t42 = 12063879LL;

	t42 = ((x285>>(x286<=x287))&x288);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x289 = UINT8_MAX;
	int16_t x290 = -43;
	int16_t x292 = INT16_MIN;
	int32_t t43 = -562;

	t43 = ((x289>>(x290<=x291))&x292);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x293 = INT64_MAX;
	static int8_t x294 = 4;
	static int16_t x295 = INT16_MAX;
	int64_t x296 = INT64_MIN;
	static int64_t t44 = 12LL;

	t44 = ((x293>>(x294<=x295))&x296);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x297 = 121U;
	static int64_t x298 = INT64_MIN;
	volatile uint32_t x299 = UINT32_MAX;
	static volatile int32_t x300 = INT32_MAX;
	int32_t t45 = -41243;

	t45 = ((x297>>(x298<=x299))&x300);

	if (t45 != 60) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x313 = 227U;
	int64_t x314 = -1LL;
	int8_t x315 = 0;
	int16_t x316 = -504;

	t46 = ((x313>>(x314<=x315))&x316);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x317 = 11331497378178LLU;
	uint8_t x318 = 0U;
	static int8_t x320 = INT8_MAX;
	static volatile uint64_t t47 = 306225794LLU;

	t47 = ((x317>>(x318<=x319))&x320);

	if (t47 != 65LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x321 = INT32_MAX;
	int64_t x322 = INT64_MIN;
	uint64_t x323 = UINT64_MAX;
	uint64_t x324 = 32229921LLU;
	uint64_t t48 = 22684630708539824LLU;

	t48 = ((x321>>(x322<=x323))&x324);

	if (t48 != 32229921LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x334 = 1;
	uint8_t x335 = UINT8_MAX;
	volatile uint64_t t49 = 44LLU;

	t49 = ((x333>>(x334<=x335))&x336);

	if (t49 != 9223372036854774392LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x340 = INT16_MIN;
	volatile int64_t t50 = -60267LL;

	t50 = ((x337>>(x338<=x339))&x340);

	if (t50 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x341 = 112372LLU;
	int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	static uint8_t x344 = 0U;

	t51 = ((x341>>(x342<=x343))&x344);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x353 = 6661287906782440LL;
	uint64_t x354 = UINT64_MAX;
	volatile int8_t x355 = 12;
	volatile int32_t x356 = 0;
	static volatile int64_t t52 = 6603354648301LL;

	t52 = ((x353>>(x354<=x355))&x356);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x370 = INT16_MIN;
	volatile uint8_t x371 = 1U;
	uint8_t x372 = 13U;

	t53 = ((x369>>(x370<=x371))&x372);

	if (t53 != 4U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x373 = UINT64_MAX;
	volatile uint16_t x376 = 2U;
	uint64_t t54 = 11666708LLU;

	t54 = ((x373>>(x374<=x375))&x376);

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x377 = 3538420601750086831LLU;
	uint16_t x378 = 261U;
	uint32_t x379 = 11U;
	int16_t x380 = INT16_MIN;
	static volatile uint64_t t55 = 1LLU;

	t55 = ((x377>>(x378<=x379))&x380);

	if (t55 != 3538420601750061056LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x385 = 25113339;
	int8_t x386 = 30;
	int64_t x387 = -11819076LL;
	int8_t x388 = INT8_MIN;
	volatile int32_t t56 = -24;

	t56 = ((x385>>(x386<=x387))&x388);

	if (t56 != 25113216) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x389 = INT8_MAX;
	static int8_t x390 = 60;
	static int32_t t57 = 9400641;

	t57 = ((x389>>(x390<=x391))&x392);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x394 = -24;
	volatile int16_t x395 = INT16_MAX;
	static volatile int8_t x396 = INT8_MIN;
	uint32_t t58 = 122026U;

	t58 = ((x393>>(x394<=x395))&x396);

	if (t58 != 7885440U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x405 = UINT32_MAX;
	volatile uint16_t x406 = 56U;
	int8_t x407 = 0;
	volatile int64_t t59 = 5631844LL;

	t59 = ((x405>>(x406<=x407))&x408);

	if (t59 != 3170660486LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x410 = INT32_MAX;
	int64_t x412 = INT64_MIN;
	static int64_t t60 = -103LL;

	t60 = ((x409>>(x410<=x411))&x412);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x413 = 5U;
	int8_t x414 = INT8_MIN;
	int16_t x415 = 19;
	uint16_t x416 = 2U;
	int32_t t61 = 1925086;

	t61 = ((x413>>(x414<=x415))&x416);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x421 = UINT8_MAX;
	int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MIN;
	static uint32_t x424 = 0U;
	uint32_t t62 = 787589963U;

	t62 = ((x421>>(x422<=x423))&x424);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x429 = 486LLU;
	static volatile int64_t x430 = -197874519296LL;
	volatile uint16_t x431 = UINT16_MAX;
	int64_t x432 = INT64_MIN;
	volatile uint64_t t63 = 7456259614109LLU;

	t63 = ((x429>>(x430<=x431))&x432);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x442 = INT16_MIN;
	uint64_t x444 = 8659191289475607674LLU;
	volatile uint64_t t64 = 5176903328LLU;

	t64 = ((x441>>(x442<=x443))&x444);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x446 = -1LL;
	int32_t x447 = INT32_MIN;
	int64_t x448 = -1LL;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = ((x445>>(x446<=x447))&x448);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x449 = UINT64_MAX;
	int64_t x450 = INT64_MIN;
	static uint64_t x451 = UINT64_MAX;
	int64_t x452 = INT64_MAX;
	uint64_t t66 = 38862411601000LLU;

	t66 = ((x449>>(x450<=x451))&x452);

	if (t66 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x453 = 1009432U;
	uint8_t x454 = UINT8_MAX;
	uint16_t x455 = 20U;
	int64_t x456 = -1LL;
	int64_t t67 = -1801790936404LL;

	t67 = ((x453>>(x454<=x455))&x456);

	if (t67 != 1009432LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x457 = 1U;
	uint8_t x459 = 2U;
	static int8_t x460 = INT8_MIN;

	t68 = ((x457>>(x458<=x459))&x460);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x461 = INT8_MAX;
	static int16_t x462 = 15;
	uint32_t x463 = 2U;
	static int32_t x464 = 85;
	int32_t t69 = 35933;

	t69 = ((x461>>(x462<=x463))&x464);

	if (t69 != 85) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x470 = UINT16_MAX;
	uint32_t x472 = 0U;

	t70 = ((x469>>(x470<=x471))&x472);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x481 = INT32_MAX;
	int16_t x482 = -752;
	int8_t x483 = INT8_MIN;

	t71 = ((x481>>(x482<=x483))&x484);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x497 = 51151828857LLU;
	uint64_t x498 = 7020560963303981593LLU;
	int16_t x499 = INT16_MIN;
	int8_t x500 = INT8_MIN;
	volatile uint64_t t72 = 192338949277993412LLU;

	t72 = ((x497>>(x498<=x499))&x500);

	if (t72 != 25575914368LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x501 = UINT32_MAX;
	int64_t x502 = INT64_MIN;
	int32_t x503 = INT32_MIN;
	static uint8_t x504 = 14U;

	t73 = ((x501>>(x502<=x503))&x504);

	if (t73 != 14U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x509 = 469U;
	int8_t x510 = INT8_MIN;
	static volatile uint64_t x511 = UINT64_MAX;
	int8_t x512 = INT8_MIN;
	volatile int32_t t74 = 1;

	t74 = ((x509>>(x510<=x511))&x512);

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x514 = 1;
	volatile int8_t x515 = INT8_MIN;
	int64_t x516 = 10405LL;
	volatile int64_t t75 = -153753LL;

	t75 = ((x513>>(x514<=x515))&x516);

	if (t75 != 10405LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x519 = INT8_MIN;
	int32_t x520 = INT32_MIN;

	t76 = ((x517>>(x518<=x519))&x520);

	if (t76 != 36274192122904576LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x521 = 729U;
	volatile uint8_t x522 = 2U;
	volatile int32_t x523 = INT32_MIN;

	t77 = ((x521>>(x522<=x523))&x524);

	if (t77 != 136LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x526 = 27704U;
	int32_t x527 = INT32_MIN;
	int32_t x528 = -5051026;
	volatile uint64_t t78 = 31896880110500LLU;

	t78 = ((x525>>(x526<=x527))&x528);

	if (t78 != 310529318LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x541 = 108228U;
	int32_t x542 = INT32_MAX;
	uint16_t x543 = 1U;
	uint16_t x544 = 0U;
	uint32_t t79 = 508480359U;

	t79 = ((x541>>(x542<=x543))&x544);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x549 = INT32_MAX;
	uint16_t x550 = 1197U;
	static int16_t x552 = INT16_MIN;

	t80 = ((x549>>(x550<=x551))&x552);

	if (t80 != 2147450880) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x557 = 15U;
	int8_t x558 = INT8_MIN;
	uint16_t x560 = 15678U;

	t81 = ((x557>>(x558<=x559))&x560);

	if (t81 != 6) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x562 = 4U;
	uint8_t x563 = 0U;

	t82 = ((x561>>(x562<=x563))&x564);

	if (t82 != 19) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x569 = INT32_MAX;
	volatile int16_t x571 = INT16_MIN;
	int32_t x572 = INT32_MIN;

	t83 = ((x569>>(x570<=x571))&x572);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x573 = 51U;
	volatile int32_t x574 = -1;
	uint16_t x575 = 60U;
	int8_t x576 = INT8_MIN;
	static int32_t t84 = -36;

	t84 = ((x573>>(x574<=x575))&x576);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x578 = 2017U;
	uint32_t x579 = 35584635U;
	uint32_t t85 = 3131202U;

	t85 = ((x577>>(x578<=x579))&x580);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x586 = 1;
	int16_t x587 = 446;
	int8_t x588 = -1;
	volatile int32_t t86 = -80;

	t86 = ((x585>>(x586<=x587))&x588);

	if (t86 != 63) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x589 = 1539U;
	uint8_t x590 = UINT8_MAX;
	int32_t x591 = INT32_MAX;
	int8_t x592 = INT8_MAX;

	t87 = ((x589>>(x590<=x591))&x592);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x593 = UINT8_MAX;
	int64_t x594 = -1LL;
	int64_t x595 = -129517026839LL;
	int32_t x596 = INT32_MIN;
	volatile int32_t t88 = -103376;

	t88 = ((x593>>(x594<=x595))&x596);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x605 = 211496;
	static int8_t x607 = INT8_MIN;
	uint8_t x608 = 2U;
	int32_t t89 = 2403;

	t89 = ((x605>>(x606<=x607))&x608);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x609 = INT32_MAX;
	int64_t x610 = -1LL;
	uint8_t x611 = UINT8_MAX;
	uint64_t t90 = 101072412LLU;

	t90 = ((x609>>(x610<=x611))&x612);

	if (t90 != 945249685LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x617 = INT8_MAX;
	int32_t x618 = INT32_MIN;
	int32_t x619 = INT32_MIN;
	int64_t x620 = INT64_MIN;
	static volatile int64_t t91 = -219226LL;

	t91 = ((x617>>(x618<=x619))&x620);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x621 = 1U;
	int8_t x623 = INT8_MAX;
	uint8_t x624 = 42U;
	static volatile uint32_t t92 = 4987633U;

	t92 = ((x621>>(x622<=x623))&x624);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x625 = 1;
	int8_t x626 = 1;
	volatile int16_t x627 = 117;
	static uint8_t x628 = UINT8_MAX;
	int32_t t93 = -958648477;

	t93 = ((x625>>(x626<=x627))&x628);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x637 = 4U;
	volatile int64_t x638 = -1LL;
	volatile int64_t t94 = 1177740698029242796LL;

	t94 = ((x637>>(x638<=x639))&x640);

	if (t94 != 2LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x641 = INT64_MAX;
	int64_t x642 = 16115LL;
	int16_t x644 = INT16_MIN;
	volatile int64_t t95 = 101LL;

	t95 = ((x641>>(x642<=x643))&x644);

	if (t95 != 4611686018427355136LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x645 = 30295419;
	volatile int64_t x646 = -681972898633349463LL;
	volatile int16_t x648 = -751;
	static volatile int32_t t96 = 209637;

	t96 = ((x645>>(x646<=x647))&x648);

	if (t96 != 30295313) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x666 = 3064LL;
	uint64_t x668 = 6LLU;
	uint64_t t97 = 13050411LLU;

	t97 = ((x665>>(x666<=x667))&x668);

	if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x669 = UINT16_MAX;
	int8_t x670 = -33;
	int16_t x671 = INT16_MAX;
	volatile uint8_t x672 = 1U;

	t98 = ((x669>>(x670<=x671))&x672);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x677 = 2302U;
	static int64_t x678 = INT64_MAX;
	static int8_t x679 = -1;
	volatile int32_t x680 = INT32_MIN;

	t99 = ((x677>>(x678<=x679))&x680);

	if (t99 != 0U) { NG(); } else { ; }
	
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

