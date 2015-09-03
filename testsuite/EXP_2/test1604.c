#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t1 = 1069199590817490162LL;
int8_t x13 = 0;
static uint16_t x15 = UINT16_MAX;
int16_t x21 = INT16_MAX;
static int8_t x23 = 1;
int32_t t3 = -1;
int8_t x38 = INT8_MIN;
static uint32_t x40 = 55U;
uint64_t x52 = 870712LLU;
volatile uint64_t t6 = 113LLU;
volatile int32_t t8 = -236238;
volatile uint32_t x69 = 4196U;
uint64_t t9 = 195048140LLU;
volatile int32_t t10 = 19312744;
int64_t x81 = INT64_MAX;
int32_t x82 = -1;
int32_t x95 = -1;
static int64_t x111 = INT64_MAX;
uint32_t x121 = UINT32_MAX;
uint64_t x122 = 493941363LLU;
uint64_t x124 = 484268272337543913LLU;
volatile int8_t x130 = INT8_MIN;
uint8_t x154 = 107U;
volatile int16_t x161 = 12895;
int32_t x162 = INT32_MIN;
int64_t t24 = -66LL;
static volatile int8_t x173 = INT8_MAX;
static int32_t x182 = INT32_MIN;
uint8_t x184 = 60U;
int32_t x204 = -57189342;
static volatile int8_t x215 = 8;
int32_t x218 = 139;
static uint64_t x236 = 261398030LLU;
uint64_t x249 = UINT64_MAX;
int32_t x253 = INT32_MAX;
int32_t x272 = INT32_MIN;
int32_t t38 = 846290157;
int16_t x281 = INT16_MAX;
int32_t x288 = INT32_MIN;
uint16_t x292 = 35U;
uint8_t x301 = UINT8_MAX;
uint16_t x303 = 0U;
uint16_t x317 = 0U;
volatile int8_t x329 = 0;
static volatile int8_t x339 = INT8_MAX;
int32_t t50 = 9926;
uint16_t x366 = 39U;
uint64_t x367 = 24140498816LLU;
uint64_t x379 = 1001482LLU;
volatile int8_t x386 = 28;
int32_t t56 = -6792;
static uint8_t x401 = 0U;
uint64_t x403 = 485755821319LLU;
uint64_t x404 = 282156164LLU;
volatile int8_t x418 = 21;
uint64_t t58 = 739959LLU;
uint32_t x429 = 2113784U;
static int8_t x430 = -5;
static uint32_t t59 = 30923397U;
volatile int64_t x442 = -1LL;
static int16_t x446 = -103;
uint8_t x457 = 1U;
volatile int32_t t63 = -21576;
uint8_t x462 = 5U;
uint32_t x520 = 2U;
volatile uint32_t t69 = 2302U;
int16_t x522 = -1;
volatile uint32_t x526 = UINT32_MAX;
int16_t x535 = 15622;
int8_t x558 = -1;
static uint16_t x577 = 386U;
int32_t x578 = INT32_MIN;
static volatile int32_t t77 = -2;
volatile int64_t x587 = -522833656286520LL;
static volatile int32_t t79 = 513;
uint16_t x589 = 11U;
int16_t x598 = 0;
uint8_t x599 = 0U;
static uint64_t t81 = 2073LLU;
int8_t x620 = INT8_MIN;
uint32_t t84 = 14190869U;
int8_t x630 = -1;
static uint64_t x650 = 5144LLU;
int8_t x665 = INT8_MAX;
int8_t x668 = 9;
int64_t x679 = INT64_MAX;
int64_t t91 = 900616918457269LL;
int8_t x683 = INT8_MAX;
uint8_t x692 = 6U;
uint64_t t94 = 372478336689241183LLU;
uint32_t x697 = 1362U;
int16_t x704 = 7;
static uint32_t t96 = 418U;
volatile uint64_t x717 = 3983048LLU;
volatile int64_t x720 = 58599807444329LL;
uint64_t t97 = 64LLU;
volatile int64_t x726 = INT64_MAX;
volatile uint64_t t99 = 233LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int8_t x2 = -1;
	uint64_t x3 = 9137131420810289LLU;
	volatile uint8_t x4 = 121U;
	uint32_t t0 = 647398U;

	t0 = ((x1>>(x2<=x3))%x4);

	if (t0 != 58U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 71053391973731LL;
	uint8_t x6 = 15U;
	int64_t x7 = -280LL;
	int32_t x8 = -3;

	t1 = ((x5>>(x6<=x7))%x8);

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x14 = UINT16_MAX;
	static uint16_t x16 = 7768U;
	int32_t t2 = -957;

	t2 = ((x13>>(x14<=x15))%x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x22 = INT64_MAX;
	uint16_t x24 = 41U;

	t3 = ((x21>>(x22<=x23))%x24);

	if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = 3U;
	uint16_t x26 = UINT16_MAX;
	static int8_t x27 = -1;
	uint64_t x28 = UINT64_MAX;
	uint64_t t4 = 2664751684224552155LLU;

	t4 = ((x25>>(x26<=x27))%x28);

	if (t4 != 3LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x37 = 209410744977784LLU;
	static int16_t x39 = -1;
	static volatile uint64_t t5 = 11799914LLU;

	t5 = ((x37>>(x38<=x39))%x40);

	if (t5 != 32LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x49 = 53U;
	static volatile int32_t x50 = -1256432;
	static int32_t x51 = 773943;

	t6 = ((x49>>(x50<=x51))%x52);

	if (t6 != 26LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x57 = 1;
	static int32_t x58 = INT32_MIN;
	int64_t x59 = -1LL;
	static volatile int64_t x60 = -1LL;
	int64_t t7 = 126604310LL;

	t7 = ((x57>>(x58<=x59))%x60);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x65 = 17;
	int8_t x66 = INT8_MIN;
	volatile uint16_t x67 = 2095U;
	int32_t x68 = INT32_MIN;

	t8 = ((x65>>(x66<=x67))%x68);

	if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x70 = 13;
	uint8_t x71 = UINT8_MAX;
	uint64_t x72 = 11998697LLU;

	t9 = ((x69>>(x70<=x71))%x72);

	if (t9 != 2098LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x77 = INT32_MAX;
	int64_t x78 = INT64_MIN;
	uint8_t x79 = UINT8_MAX;
	static uint16_t x80 = UINT16_MAX;

	t10 = ((x77>>(x78<=x79))%x80);

	if (t10 != 16383) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x83 = 76U;
	int64_t x84 = 90400361439536LL;
	static int64_t t11 = -265408936548946912LL;

	t11 = ((x81>>(x82<=x83))%x84);

	if (t11 != 1979950898399LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x89 = 3509U;
	uint8_t x90 = 0U;
	uint16_t x91 = 1U;
	static int32_t x92 = -1;
	int32_t t12 = -33061401;

	t12 = ((x89>>(x90<=x91))%x92);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x93 = 1LL;
	volatile int64_t x94 = 1LL;
	volatile int32_t x96 = -220322;
	volatile int64_t t13 = 410518628LL;

	t13 = ((x93>>(x94<=x95))%x96);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x109 = UINT16_MAX;
	uint8_t x110 = 80U;
	static uint16_t x112 = UINT16_MAX;
	int32_t t14 = 1080445;

	t14 = ((x109>>(x110<=x111))%x112);

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x113 = UINT16_MAX;
	int32_t x114 = -1;
	static volatile int64_t x115 = INT64_MIN;
	volatile int32_t x116 = -199940;
	volatile int32_t t15 = 23058;

	t15 = ((x113>>(x114<=x115))%x116);

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x117 = 52803U;
	uint8_t x118 = 27U;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = INT16_MAX;
	static volatile uint32_t t16 = 5443U;

	t16 = ((x117>>(x118<=x119))%x120);

	if (t16 != 26401U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x123 = UINT8_MAX;
	volatile uint64_t t17 = 5601539070472113022LLU;

	t17 = ((x121>>(x122<=x123))%x124);

	if (t17 != 4294967295LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x125 = 1U;
	volatile uint64_t x126 = 80479553353121LLU;
	static int64_t x127 = 29023LL;
	int32_t x128 = INT32_MIN;
	static int32_t t18 = -1773;

	t18 = ((x125>>(x126<=x127))%x128);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x129 = 1934045481255358LL;
	volatile uint8_t x131 = 1U;
	int8_t x132 = INT8_MAX;
	static int64_t t19 = -5448346772581LL;

	t19 = ((x129>>(x130<=x131))%x132);

	if (t19 != 117LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x137 = INT32_MAX;
	volatile int16_t x138 = INT16_MIN;
	uint8_t x139 = 78U;
	int16_t x140 = INT16_MIN;
	volatile int32_t t20 = 5;

	t20 = ((x137>>(x138<=x139))%x140);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x141 = 44U;
	int8_t x142 = -4;
	uint8_t x143 = 1U;
	int16_t x144 = INT16_MAX;
	uint32_t t21 = 240U;

	t21 = ((x141>>(x142<=x143))%x144);

	if (t21 != 22U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x145 = 277U;
	volatile uint32_t x146 = 56488265U;
	volatile uint16_t x147 = 161U;
	int32_t x148 = INT32_MAX;
	int32_t t22 = 1085;

	t22 = ((x145>>(x146<=x147))%x148);

	if (t22 != 277) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x153 = 7U;
	int16_t x155 = INT16_MIN;
	uint32_t x156 = 10U;
	volatile uint32_t t23 = 14U;

	t23 = ((x153>>(x154<=x155))%x156);

	if (t23 != 7U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x163 = -1;
	int64_t x164 = INT64_MIN;

	t24 = ((x161>>(x162<=x163))%x164);

	if (t24 != 6447LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x174 = 2998;
	int64_t x175 = -664448LL;
	int32_t x176 = INT32_MAX;
	volatile int32_t t25 = -965752;

	t25 = ((x173>>(x174<=x175))%x176);

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x177 = UINT32_MAX;
	int32_t x178 = -1;
	static uint16_t x179 = UINT16_MAX;
	int32_t x180 = INT32_MIN;
	static volatile uint32_t t26 = 18796956U;

	t26 = ((x177>>(x178<=x179))%x180);

	if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x181 = INT64_MAX;
	static int16_t x183 = -1;
	int64_t t27 = -31383LL;

	t27 = ((x181>>(x182<=x183))%x184);

	if (t27 != 3LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x197 = 0LLU;
	uint16_t x198 = UINT16_MAX;
	int64_t x199 = INT64_MIN;
	static uint32_t x200 = 16020843U;
	volatile uint64_t t28 = 2087571079LLU;

	t28 = ((x197>>(x198<=x199))%x200);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x201 = 10;
	uint16_t x202 = UINT16_MAX;
	int32_t x203 = -7;
	static volatile int32_t t29 = -2;

	t29 = ((x201>>(x202<=x203))%x204);

	if (t29 != 10) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x213 = 17793U;
	uint16_t x214 = 0U;
	int8_t x216 = 1;
	int32_t t30 = -8;

	t30 = ((x213>>(x214<=x215))%x216);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x217 = 1U;
	static int64_t x219 = 51091625LL;
	static int32_t x220 = 242037624;
	static volatile int32_t t31 = -20681;

	t31 = ((x217>>(x218<=x219))%x220);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x233 = 31U;
	uint64_t x234 = UINT64_MAX;
	int16_t x235 = INT16_MIN;
	uint64_t t32 = 34545023988752LLU;

	t32 = ((x233>>(x234<=x235))%x236);

	if (t32 != 31LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x237 = 50732117U;
	volatile int64_t x238 = INT64_MIN;
	int16_t x239 = -1;
	static int16_t x240 = INT16_MIN;
	uint32_t t33 = 214422644U;

	t33 = ((x237>>(x238<=x239))%x240);

	if (t33 != 25366058U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x250 = -5;
	int16_t x251 = INT16_MAX;
	int64_t x252 = 3LL;
	static uint64_t t34 = 6726425LLU;

	t34 = ((x249>>(x250<=x251))%x252);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x254 = UINT8_MAX;
	int32_t x255 = 52181;
	volatile uint8_t x256 = 93U;
	static volatile int32_t t35 = 785322449;

	t35 = ((x253>>(x254<=x255))%x256);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x265 = 393711;
	static int64_t x266 = INT64_MIN;
	int8_t x267 = -1;
	static int64_t x268 = -1LL;
	volatile int64_t t36 = 11418553172LL;

	t36 = ((x265>>(x266<=x267))%x268);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x269 = 0;
	static int16_t x270 = -1;
	int32_t x271 = 229;
	static int32_t t37 = 22;

	t37 = ((x269>>(x270<=x271))%x272);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x277 = 14;
	int8_t x278 = -1;
	volatile int8_t x279 = -10;
	static int8_t x280 = -1;

	t38 = ((x277>>(x278<=x279))%x280);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x282 = UINT64_MAX;
	uint8_t x283 = 2U;
	uint16_t x284 = 14U;
	volatile int32_t t39 = -1;

	t39 = ((x281>>(x282<=x283))%x284);

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x285 = 59475484U;
	uint16_t x286 = 0U;
	uint64_t x287 = 105235596064LLU;
	volatile uint32_t t40 = 123U;

	t40 = ((x285>>(x286<=x287))%x288);

	if (t40 != 29737742U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x289 = 4;
	int64_t x290 = -22260995398651LL;
	int32_t x291 = -11632;
	volatile int32_t t41 = -33510260;

	t41 = ((x289>>(x290<=x291))%x292);

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x302 = 0U;
	uint16_t x304 = UINT16_MAX;
	int32_t t42 = -35924;

	t42 = ((x301>>(x302<=x303))%x304);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x309 = 149LLU;
	uint8_t x310 = 4U;
	uint8_t x311 = UINT8_MAX;
	uint8_t x312 = 19U;
	uint64_t t43 = 1658619091967LLU;

	t43 = ((x309>>(x310<=x311))%x312);

	if (t43 != 17LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x318 = INT16_MAX;
	int8_t x319 = -1;
	int32_t x320 = -32095;
	int32_t t44 = 334331;

	t44 = ((x317>>(x318<=x319))%x320);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x321 = INT8_MAX;
	uint32_t x322 = 46U;
	int32_t x323 = -385;
	volatile int64_t x324 = INT64_MIN;
	volatile int64_t t45 = 5917368LL;

	t45 = ((x321>>(x322<=x323))%x324);

	if (t45 != 63LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x325 = UINT64_MAX;
	uint8_t x326 = 53U;
	int32_t x327 = 24183;
	volatile int8_t x328 = INT8_MAX;
	volatile uint64_t t46 = 1167LLU;

	t46 = ((x325>>(x326<=x327))%x328);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x330 = 120U;
	static int32_t x331 = INT32_MIN;
	volatile int64_t x332 = -1LL;
	int64_t t47 = 41343826856256584LL;

	t47 = ((x329>>(x330<=x331))%x332);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x333 = 5U;
	static int16_t x334 = 1;
	int16_t x335 = 5969;
	static uint8_t x336 = 27U;
	volatile int32_t t48 = 590;

	t48 = ((x333>>(x334<=x335))%x336);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x337 = 1;
	volatile int8_t x338 = INT8_MAX;
	volatile int64_t x340 = -1LL;
	volatile int64_t t49 = -1630675219LL;

	t49 = ((x337>>(x338<=x339))%x340);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x349 = 120U;
	int32_t x350 = INT32_MIN;
	uint8_t x351 = UINT8_MAX;
	static int8_t x352 = -1;

	t50 = ((x349>>(x350<=x351))%x352);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x353 = 592LLU;
	static int16_t x354 = 25;
	volatile uint16_t x355 = 1213U;
	uint64_t x356 = 390761855601LLU;
	static uint64_t t51 = 369566008LLU;

	t51 = ((x353>>(x354<=x355))%x356);

	if (t51 != 296LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x365 = INT64_MAX;
	int32_t x368 = 248490;
	static int64_t t52 = -16930518662LL;

	t52 = ((x365>>(x366<=x367))%x368);

	if (t52 != 136623LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x377 = 20635554444743LLU;
	volatile int16_t x378 = INT16_MIN;
	int16_t x380 = -1;
	static uint64_t t53 = 324936650942771LLU;

	t53 = ((x377>>(x378<=x379))%x380);

	if (t53 != 20635554444743LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x381 = INT64_MAX;
	int32_t x382 = 42618;
	int32_t x383 = -548616;
	volatile uint32_t x384 = UINT32_MAX;
	int64_t t54 = -4LL;

	t54 = ((x381>>(x382<=x383))%x384);

	if (t54 != 2147483647LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x385 = INT16_MAX;
	volatile uint64_t x387 = UINT64_MAX;
	int8_t x388 = INT8_MIN;
	volatile int32_t t55 = -6;

	t55 = ((x385>>(x386<=x387))%x388);

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x397 = UINT8_MAX;
	int64_t x398 = 29826LL;
	static int16_t x399 = 4095;
	int8_t x400 = -22;

	t56 = ((x397>>(x398<=x399))%x400);

	if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x402 = 0U;
	uint64_t t57 = 3LLU;

	t57 = ((x401>>(x402<=x403))%x404);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x417 = UINT32_MAX;
	uint16_t x419 = 8017U;
	static uint64_t x420 = UINT64_MAX;

	t58 = ((x417>>(x418<=x419))%x420);

	if (t58 != 2147483647LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x431 = 3752996770771787LL;
	int8_t x432 = INT8_MIN;

	t59 = ((x429>>(x430<=x431))%x432);

	if (t59 != 1056892U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x441 = 1133LLU;
	static int32_t x443 = INT32_MIN;
	int16_t x444 = -9926;
	volatile uint64_t t60 = 6207267LLU;

	t60 = ((x441>>(x442<=x443))%x444);

	if (t60 != 1133LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x445 = UINT32_MAX;
	static int8_t x447 = -3;
	uint64_t x448 = UINT64_MAX;
	uint64_t t61 = 30666307LLU;

	t61 = ((x445>>(x446<=x447))%x448);

	if (t61 != 2147483647LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x449 = 5255;
	uint8_t x450 = UINT8_MAX;
	static uint32_t x451 = 1824U;
	uint16_t x452 = 1754U;
	int32_t t62 = -14742687;

	t62 = ((x449>>(x450<=x451))%x452);

	if (t62 != 873) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MAX;
	uint8_t x460 = UINT8_MAX;

	t63 = ((x457>>(x458<=x459))%x460);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x461 = UINT8_MAX;
	static volatile int64_t x463 = 41LL;
	static int8_t x464 = -27;
	static int32_t t64 = 6788;

	t64 = ((x461>>(x462<=x463))%x464);

	if (t64 != 19) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x481 = INT16_MAX;
	static volatile int32_t x482 = -1574029;
	int8_t x483 = -1;
	static int32_t x484 = -1;
	volatile int32_t t65 = 4298;

	t65 = ((x481>>(x482<=x483))%x484);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x485 = INT64_MAX;
	static uint16_t x486 = 71U;
	volatile uint8_t x487 = 65U;
	uint32_t x488 = 1836U;
	volatile int64_t t66 = 0LL;

	t66 = ((x485>>(x486<=x487))%x488);

	if (t66 != 943LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x493 = UINT64_MAX;
	int32_t x494 = 195617676;
	volatile int64_t x495 = -1LL;
	volatile uint32_t x496 = 6217248U;
	volatile uint64_t t67 = 0LLU;

	t67 = ((x493>>(x494<=x495))%x496);

	if (t67 != 2810655LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x513 = 11952617;
	int64_t x514 = INT64_MAX;
	static int16_t x515 = -1;
	int8_t x516 = INT8_MAX;
	volatile int32_t t68 = 95073652;

	t68 = ((x513>>(x514<=x515))%x516);

	if (t68 != 12) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x517 = 0U;
	volatile uint32_t x518 = UINT32_MAX;
	static volatile int32_t x519 = -1;

	t69 = ((x517>>(x518<=x519))%x520);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x521 = UINT64_MAX;
	volatile uint64_t x523 = UINT64_MAX;
	volatile int64_t x524 = INT64_MAX;
	volatile uint64_t t70 = 232425514LLU;

	t70 = ((x521>>(x522<=x523))%x524);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x525 = INT32_MAX;
	volatile uint32_t x527 = UINT32_MAX;
	int8_t x528 = 5;
	int32_t t71 = 6256;

	t71 = ((x525>>(x526<=x527))%x528);

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x533 = 15510LLU;
	uint16_t x534 = 115U;
	static uint16_t x536 = UINT16_MAX;
	volatile uint64_t t72 = 22LLU;

	t72 = ((x533>>(x534<=x535))%x536);

	if (t72 != 7755LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x537 = 3U;
	uint64_t x538 = 888255LLU;
	int16_t x539 = -1;
	int32_t x540 = -275462181;
	volatile int32_t t73 = 4;

	t73 = ((x537>>(x538<=x539))%x540);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x541 = 6698U;
	int16_t x542 = INT16_MAX;
	static uint64_t x543 = 13LLU;
	static int64_t x544 = INT64_MIN;
	int64_t t74 = 327406LL;

	t74 = ((x541>>(x542<=x543))%x544);

	if (t74 != 6698LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x557 = 549;
	volatile int8_t x559 = 1;
	uint32_t x560 = 705U;
	volatile uint32_t t75 = 62807U;

	t75 = ((x557>>(x558<=x559))%x560);

	if (t75 != 274U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x569 = INT64_MAX;
	int32_t x570 = INT32_MIN;
	uint8_t x571 = 80U;
	uint64_t x572 = 4441645748614007856LLU;
	uint64_t t76 = 173129588335LLU;

	t76 = ((x569>>(x570<=x571))%x572);

	if (t76 != 170040269813380047LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x579 = 110;
	int32_t x580 = -1;

	t77 = ((x577>>(x578<=x579))%x580);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x581 = 168;
	int64_t x582 = INT64_MIN;
	int32_t x583 = 1;
	int64_t x584 = -1LL;
	int64_t t78 = -35837962829716220LL;

	t78 = ((x581>>(x582<=x583))%x584);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x585 = 6204U;
	uint8_t x586 = UINT8_MAX;
	int16_t x588 = INT16_MIN;

	t79 = ((x585>>(x586<=x587))%x588);

	if (t79 != 6204) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x590 = 447857510LLU;
	static uint16_t x591 = 3U;
	int8_t x592 = -1;
	int32_t t80 = -19340;

	t80 = ((x589>>(x590<=x591))%x592);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x597 = 63819227933180374LLU;
	uint32_t x600 = 2272U;

	t81 = ((x597>>(x598<=x599))%x600);

	if (t81 != 2187LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x605 = 25U;
	int16_t x606 = -5024;
	static volatile int32_t x607 = 17913;
	int8_t x608 = -1;
	static volatile int32_t t82 = 0;

	t82 = ((x605>>(x606<=x607))%x608);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x609 = 77U;
	static volatile int16_t x610 = -1;
	int16_t x611 = INT16_MAX;
	uint64_t x612 = 6105571LLU;
	volatile uint64_t t83 = 109326308070566LLU;

	t83 = ((x609>>(x610<=x611))%x612);

	if (t83 != 38LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x617 = 351563U;
	static volatile int64_t x618 = INT64_MAX;
	int16_t x619 = -1;

	t84 = ((x617>>(x618<=x619))%x620);

	if (t84 != 351563U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x629 = 344U;
	int64_t x631 = 8759273605284LL;
	int16_t x632 = INT16_MIN;
	int32_t t85 = -1989469;

	t85 = ((x629>>(x630<=x631))%x632);

	if (t85 != 172) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x633 = 623904U;
	int64_t x634 = -128301223LL;
	int32_t x635 = -813993588;
	static int8_t x636 = INT8_MAX;
	volatile uint32_t t86 = 3U;

	t86 = ((x633>>(x634<=x635))%x636);

	if (t86 != 80U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x649 = 255U;
	volatile int16_t x651 = -1;
	static uint8_t x652 = 1U;
	int32_t t87 = -1;

	t87 = ((x649>>(x650<=x651))%x652);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x661 = INT8_MAX;
	volatile int32_t x662 = INT32_MIN;
	static int8_t x663 = -8;
	uint16_t x664 = 23842U;
	volatile int32_t t88 = 22169897;

	t88 = ((x661>>(x662<=x663))%x664);

	if (t88 != 63) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x666 = INT64_MIN;
	int32_t x667 = -1;
	int32_t t89 = -2147;

	t89 = ((x665>>(x666<=x667))%x668);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x673 = INT64_MAX;
	int16_t x674 = 1;
	int8_t x675 = -22;
	uint8_t x676 = 7U;
	volatile int64_t t90 = 88879415LL;

	t90 = ((x673>>(x674<=x675))%x676);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x677 = INT64_MAX;
	static int16_t x678 = INT16_MAX;
	static int16_t x680 = INT16_MIN;

	t91 = ((x677>>(x678<=x679))%x680);

	if (t91 != 32767LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x681 = 26819621636984LL;
	int64_t x682 = INT64_MIN;
	uint16_t x684 = UINT16_MAX;
	int64_t t92 = -719202851LL;

	t92 = ((x681>>(x682<=x683))%x684);

	if (t92 != 59632LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x685 = UINT32_MAX;
	uint64_t x686 = 3560754734013398344LLU;
	volatile int64_t x687 = INT64_MIN;
	int8_t x688 = INT8_MIN;
	static volatile uint32_t t93 = 363748U;

	t93 = ((x685>>(x686<=x687))%x688);

	if (t93 != 2147483647U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x689 = UINT64_MAX;
	static int16_t x690 = INT16_MAX;
	int16_t x691 = 42;

	t94 = ((x689>>(x690<=x691))%x692);

	if (t94 != 3LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x698 = INT32_MIN;
	uint32_t x699 = 10498U;
	int64_t x700 = 14655347LL;
	int64_t t95 = -118666LL;

	t95 = ((x697>>(x698<=x699))%x700);

	if (t95 != 1362LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x701 = 2U;
	int32_t x702 = INT32_MAX;
	int32_t x703 = INT32_MIN;

	t96 = ((x701>>(x702<=x703))%x704);

	if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x718 = UINT64_MAX;
	volatile uint16_t x719 = UINT16_MAX;

	t97 = ((x717>>(x718<=x719))%x720);

	if (t97 != 3983048LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x721 = 372748150;
	volatile int32_t x722 = 114005109;
	int8_t x723 = -1;
	uint8_t x724 = UINT8_MAX;
	static volatile int32_t t98 = 36035;

	t98 = ((x721>>(x722<=x723))%x724);

	if (t98 != 115) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x725 = 3018000882630516891LLU;
	int8_t x727 = -1;
	static volatile int32_t x728 = INT32_MIN;

	t99 = ((x725>>(x726<=x727))%x728);

	if (t99 != 3018000882630516891LLU) { NG(); } else { ; }
	
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

