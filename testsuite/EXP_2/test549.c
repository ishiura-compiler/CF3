#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = 3850411231323833LL;
int64_t x50 = INT64_MAX;
volatile int32_t x56 = -1;
static uint32_t t5 = 22390U;
static volatile int64_t t7 = 9477265LL;
int16_t x94 = -1;
uint64_t t9 = 864116LLU;
uint8_t x107 = 63U;
volatile int64_t t10 = 768LL;
int8_t x119 = INT8_MIN;
volatile uint64_t t12 = 501963894324568268LLU;
int16_t x121 = INT16_MIN;
int32_t x153 = INT32_MAX;
int8_t x156 = -1;
uint8_t x158 = 13U;
int32_t x164 = INT32_MAX;
uint64_t t17 = 5620484644LLU;
static int32_t x166 = INT32_MAX;
int16_t x181 = -1;
int32_t x184 = -1;
static int8_t x208 = 1;
static int64_t t22 = 343726604844395955LL;
static volatile int32_t x213 = -1;
int64_t x214 = INT64_MIN;
uint64_t x216 = 156061LLU;
volatile uint8_t x229 = 0U;
static int8_t x231 = INT8_MIN;
volatile int8_t x232 = INT8_MIN;
static int16_t x238 = INT16_MAX;
int64_t x253 = INT64_MIN;
static volatile int64_t t27 = -229007161LL;
int16_t x258 = -27;
int16_t x260 = INT16_MAX;
volatile int32_t t28 = -44387;
int32_t x293 = -1;
static int16_t x300 = -1;
int64_t t35 = -752210676578092LL;
static volatile uint64_t t37 = 1LLU;
uint8_t x349 = UINT8_MAX;
uint16_t x351 = 675U;
int32_t x352 = INT32_MAX;
uint8_t x384 = 5U;
int64_t x398 = INT64_MIN;
uint64_t x400 = 1944474LLU;
volatile uint64_t t43 = 18315704344804736LLU;
volatile uint16_t x411 = 51U;
volatile uint64_t x414 = UINT64_MAX;
int32_t x440 = INT32_MIN;
int64_t x471 = -1LL;
uint32_t x477 = 12U;
int8_t x478 = INT8_MIN;
int8_t x479 = 1;
uint64_t x493 = 130683063486913LLU;
static uint64_t x494 = UINT64_MAX;
uint32_t x495 = 22556U;
uint64_t t54 = 192264LLU;
int32_t x497 = -1;
int32_t x499 = INT32_MAX;
uint64_t t55 = 406LLU;
volatile int16_t x502 = INT16_MIN;
uint32_t x504 = 15U;
int32_t x505 = -1;
int8_t x506 = INT8_MAX;
static int16_t x515 = -6;
int64_t t59 = 3775LL;
int32_t x521 = INT32_MIN;
static int32_t x534 = -43780;
int16_t x543 = INT16_MAX;
uint64_t x545 = 188989853792LLU;
uint32_t x550 = UINT32_MAX;
uint64_t x552 = 13752473472LLU;
uint64_t t65 = 801887775704200004LLU;
volatile int64_t t66 = 41LL;
int64_t x571 = 97LL;
int64_t x614 = INT64_MIN;
int16_t x636 = INT16_MAX;
volatile int32_t t72 = 337955392;
uint8_t x641 = UINT8_MAX;
volatile int8_t x642 = 22;
static volatile int8_t x643 = -1;
uint64_t x666 = 94773702432380LLU;
int32_t x667 = 21;
uint64_t t76 = 54339LLU;
static int64_t x680 = -526970LL;
volatile int64_t t77 = -426355685141310690LL;
static volatile int8_t x697 = INT8_MAX;
volatile uint64_t x698 = UINT64_MAX;
int8_t x699 = INT8_MIN;
uint16_t x702 = 28188U;
int16_t x704 = 3;
int32_t x713 = 567117538;
int16_t x714 = INT16_MIN;
static uint64_t t81 = 30LLU;
int16_t x737 = INT16_MAX;
uint16_t x765 = 58U;
int8_t x766 = INT8_MAX;
int32_t t85 = 58685958;
int16_t x797 = INT16_MIN;
int16_t x809 = INT16_MAX;
int16_t x820 = -1;
static int16_t x822 = INT16_MAX;
uint64_t x848 = 172LLU;
volatile uint64_t t95 = 116101584424389506LLU;
volatile int64_t x862 = INT64_MIN;
int64_t x870 = -37734971380070929LL;
uint32_t x871 = 1508024U;
uint16_t x873 = 6739U;


void f0(void) {
	uint8_t x5 = 1U;
	int64_t x6 = INT64_MAX;
	int64_t x7 = INT64_MAX;
	int16_t x8 = INT16_MIN;
	int64_t t0 = -42602181LL;

	t0 = ((x5/(x6/x7))*x8);

	if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = 713577319997424728LLU;
	uint16_t x11 = UINT16_MAX;
	uint32_t x12 = UINT32_MAX;
	uint64_t t1 = 29185132LLU;

	t1 = ((x9/(x10/x11))*x12);

	if (t1 != 52163541733911945LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x45 = 22081513032LLU;
	volatile int64_t x46 = INT64_MIN;
	int16_t x47 = 23;
	int32_t x48 = INT32_MIN;
	volatile uint64_t t2 = 7783372801LLU;

	t2 = ((x45/(x46/x47))*x48);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x49 = -13330;
	int32_t x51 = -590753257;
	int16_t x52 = -126;
	volatile int64_t t3 = 1426732622120017812LL;

	t3 = ((x49/(x50/x51))*x52);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x53 = 142779387LLU;
	volatile uint8_t x54 = UINT8_MAX;
	int16_t x55 = -1;
	static volatile uint64_t t4 = 692273314LLU;

	t4 = ((x53/(x54/x55))*x56);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = INT16_MIN;
	int8_t x59 = -18;
	static uint32_t x60 = UINT32_MAX;

	t5 = ((x57/(x58/x59))*x60);

	if (t5 != 18U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x77 = -1;
	static uint64_t x78 = UINT64_MAX;
	int8_t x79 = 3;
	static uint16_t x80 = UINT16_MAX;
	volatile uint64_t t6 = 35501LLU;

	t6 = ((x77/(x78/x79))*x80);

	if (t6 != 196605LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x85 = -7;
	volatile int64_t x86 = -33838293520579791LL;
	uint8_t x87 = 3U;
	int16_t x88 = -3;

	t7 = ((x85/(x86/x87))*x88);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x93 = INT8_MIN;
	static uint32_t x95 = 58U;
	int16_t x96 = INT16_MIN;
	static volatile uint32_t t8 = 32U;

	t8 = ((x93/(x94/x95))*x96);

	if (t8 != 4293099520U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x101 = -1;
	int32_t x102 = -1;
	static volatile uint64_t x103 = UINT64_MAX;
	volatile int64_t x104 = INT64_MIN;

	t9 = ((x101/(x102/x103))*x104);

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x105 = -95;
	int64_t x106 = INT64_MIN;
	int16_t x108 = INT16_MIN;

	t10 = ((x105/(x106/x107))*x108);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x109 = -38;
	int16_t x110 = -1;
	uint64_t x111 = 174101006LLU;
	int32_t x112 = -1;
	volatile uint64_t t11 = 234728LLU;

	t11 = ((x109/(x110/x111))*x112);

	if (t11 != 18446744073535450610LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x117 = 19U;
	static int8_t x118 = INT8_MIN;
	uint64_t x120 = 6560301LLU;

	t12 = ((x117/(x118/x119))*x120);

	if (t12 != 124645719LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x122 = 357626691LLU;
	uint32_t x123 = 82U;
	uint64_t x124 = UINT64_MAX;
	uint64_t t13 = 11510LLU;

	t13 = ((x121/(x122/x123))*x124);

	if (t13 != 18446739844067049595LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MAX;
	static int32_t x139 = 1;
	int16_t x140 = INT16_MAX;
	int64_t t14 = 31661338740069LL;

	t14 = ((x137/(x138/x139))*x140);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x154 = -711312213853LL;
	volatile int8_t x155 = 19;
	volatile int64_t t15 = 1808242958149566LL;

	t15 = ((x153/(x154/x155))*x156);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x159 = 1U;
	uint8_t x160 = UINT8_MAX;
	int32_t t16 = 209169255;

	t16 = ((x157/(x158/x159))*x160);

	if (t16 != -2295) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x161 = -1LL;
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = 29502LL;

	t17 = ((x161/(x162/x163))*x164);

	if (t17 != 63355062553794LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x165 = 361;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = -65211LL;
	int64_t t18 = -4384478719601LL;

	t18 = ((x165/(x166/x167))*x168);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x173 = -717;
	int32_t x174 = INT32_MIN;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	int32_t t19 = 3117;

	t19 = ((x173/(x174/x175))*x176);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x182 = 2U;
	uint8_t x183 = 2U;
	volatile int32_t t20 = 168681358;

	t20 = ((x181/(x182/x183))*x184);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x197 = -1LL;
	uint16_t x198 = 460U;
	int16_t x199 = -1;
	int32_t x200 = INT32_MIN;
	static volatile int64_t t21 = -2175628600385656555LL;

	t21 = ((x197/(x198/x199))*x200);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x205 = -449LL;
	static int64_t x206 = INT64_MAX;
	uint32_t x207 = UINT32_MAX;

	t22 = ((x205/(x206/x207))*x208);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x215 = INT8_MIN;
	static volatile uint64_t t23 = 27979771583510LLU;

	t23 = ((x213/(x214/x215))*x216);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x230 = -90301919572378LL;
	int64_t t24 = 7LL;

	t24 = ((x229/(x230/x231))*x232);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x237 = 34141010U;
	static int8_t x239 = INT8_MAX;
	int8_t x240 = INT8_MAX;
	volatile uint32_t t25 = 15342U;

	t25 = ((x237/(x238/x239))*x240);

	if (t25 != 16805783U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x241 = -1;
	uint64_t x242 = 2258292LLU;
	int16_t x243 = 3147;
	uint8_t x244 = 55U;
	volatile uint64_t t26 = 2288539134326LLU;

	t26 = ((x241/(x242/x243))*x244);

	if (t26 != 1415022209280370020LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x254 = -1019508951548132286LL;
	volatile uint8_t x255 = UINT8_MAX;
	int16_t x256 = INT16_MAX;

	t27 = ((x253/(x254/x255))*x256);

	if (t27 != 75560702LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x257 = INT8_MIN;
	int8_t x259 = -1;

	t28 = ((x257/(x258/x259))*x260);

	if (t28 != -131068) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x273 = 1987559709U;
	static volatile int64_t x274 = -138LL;
	uint64_t x275 = 1480143338246653LLU;
	int32_t x276 = INT32_MAX;
	static uint64_t t29 = 13748531704LLU;

	t29 = ((x273/(x274/x275))*x276);

	if (t29 != 342500019376383LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x277 = -18;
	static int16_t x278 = INT16_MIN;
	int64_t x279 = -1LL;
	int8_t x280 = -40;
	volatile int64_t t30 = 1LL;

	t30 = ((x277/(x278/x279))*x280);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MAX;
	volatile int32_t t31 = 227969;

	t31 = ((x293/(x294/x295))*x296);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x297 = 115U;
	uint16_t x298 = 22918U;
	static uint8_t x299 = 2U;
	volatile int32_t t32 = 13;

	t32 = ((x297/(x298/x299))*x300);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x305 = -1;
	static uint64_t x306 = UINT64_MAX;
	int64_t x307 = -1LL;
	uint16_t x308 = 0U;
	uint64_t t33 = 5566LLU;

	t33 = ((x305/(x306/x307))*x308);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x309 = INT64_MIN;
	int64_t x310 = INT64_MAX;
	int32_t x311 = -1;
	volatile int8_t x312 = INT8_MAX;
	static int64_t t34 = 53528474LL;

	t34 = ((x309/(x310/x311))*x312);

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x313 = -1LL;
	static volatile int64_t x314 = -974733LL;
	int32_t x315 = -205;
	static uint16_t x316 = 15U;

	t35 = ((x313/(x314/x315))*x316);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x317 = -7561367391023956LL;
	uint32_t x318 = UINT32_MAX;
	int64_t x319 = -1LL;
	int16_t x320 = 0;
	int64_t t36 = -3605317258057887423LL;

	t36 = ((x317/(x318/x319))*x320);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x321 = INT8_MAX;
	int64_t x322 = INT64_MIN;
	int64_t x323 = 334880673LL;
	static uint64_t x324 = UINT64_MAX;

	t37 = ((x321/(x322/x323))*x324);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x350 = 757488137697236294LLU;
	uint64_t t38 = 1250967LLU;

	t38 = ((x349/(x350/x351))*x352);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x361 = 3U;
	int64_t x362 = -826354751165893LL;
	static volatile int64_t x363 = -1LL;
	volatile int8_t x364 = -1;
	volatile int64_t t39 = 114417317LL;

	t39 = ((x361/(x362/x363))*x364);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = -264947902040746541LL;
	static int16_t x371 = -1;
	int32_t x372 = INT32_MIN;
	volatile int64_t t40 = 120564930691LL;

	t40 = ((x369/(x370/x371))*x372);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x381 = UINT32_MAX;
	int32_t x382 = INT32_MIN;
	static uint64_t x383 = 8084656012LLU;
	uint64_t t41 = 846009483502048487LLU;

	t41 = ((x381/(x382/x383))*x384);

	if (t41 != 5LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x385 = 10024U;
	static int16_t x386 = INT16_MIN;
	int16_t x387 = -1;
	volatile int32_t x388 = -643;
	uint32_t t42 = 126929U;

	t42 = ((x385/(x386/x387))*x388);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x397 = INT64_MIN;
	uint8_t x399 = UINT8_MAX;

	t43 = ((x397/(x398/x399))*x400);

	if (t43 != 495840870LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x405 = INT16_MIN;
	static volatile uint64_t x406 = 279148911346LLU;
	uint32_t x407 = UINT32_MAX;
	uint64_t x408 = 235019217370008LLU;
	uint64_t t44 = 366LLU;

	t44 = ((x405/(x406/x407))*x408);

	if (t44 != 6797199188347637760LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x409 = -1LL;
	int32_t x410 = -203994;
	int16_t x412 = INT16_MIN;
	static int64_t t45 = -8238108LL;

	t45 = ((x409/(x410/x411))*x412);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x413 = INT64_MAX;
	int32_t x415 = INT32_MIN;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t46 = 109146471379014LLU;

	t46 = ((x413/(x414/x415))*x416);

	if (t46 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x433 = INT32_MIN;
	uint32_t x434 = UINT32_MAX;
	static volatile int16_t x435 = INT16_MAX;
	int32_t x436 = INT32_MAX;
	static uint32_t t47 = 117126460U;

	t47 = ((x433/(x434/x435))*x436);

	if (t47 != 2147467265U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x437 = INT16_MAX;
	static volatile int64_t x438 = INT64_MIN;
	volatile int32_t x439 = -10711;
	volatile int64_t t48 = -232864788999LL;

	t48 = ((x437/(x438/x439))*x440);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x445 = 28928773868075LLU;
	int64_t x446 = INT64_MAX;
	int16_t x447 = -1;
	int16_t x448 = 44;
	volatile uint64_t t49 = 56LLU;

	t49 = ((x445/(x446/x447))*x448);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x453 = 1705U;
	volatile int32_t x454 = INT32_MIN;
	volatile uint8_t x455 = 1U;
	volatile int8_t x456 = INT8_MAX;
	uint32_t t50 = 64419U;

	t50 = ((x453/(x454/x455))*x456);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x469 = INT16_MIN;
	int16_t x470 = -208;
	volatile int16_t x472 = -485;
	static int64_t t51 = -351LL;

	t51 = ((x469/(x470/x471))*x472);

	if (t51 != 76145LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x480 = -1;
	uint32_t t52 = 31U;

	t52 = ((x477/(x478/x479))*x480);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x485 = INT8_MAX;
	static int64_t x486 = 37205802266957743LL;
	static int32_t x487 = INT32_MIN;
	int32_t x488 = -1;
	volatile int64_t t53 = 17930054912470950LL;

	t53 = ((x485/(x486/x487))*x488);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x496 = 1481829230763783482LL;

	t54 = ((x493/(x494/x495))*x496);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x498 = 340145312306LLU;
	int16_t x500 = INT16_MIN;

	t55 = ((x497/(x498/x499))*x500);

	if (t55 != 11208148297950134272LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x501 = 2U;
	int16_t x503 = -2;
	volatile uint32_t t56 = 16U;

	t56 = ((x501/(x502/x503))*x504);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x507 = 56U;
	int16_t x508 = INT16_MAX;
	int32_t t57 = 3332;

	t57 = ((x505/(x506/x507))*x508);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x509 = INT8_MAX;
	int64_t x510 = INT64_MIN;
	int64_t x511 = 2095938945115LL;
	int16_t x512 = -1;
	int64_t t58 = -12548504771658671LL;

	t58 = ((x509/(x510/x511))*x512);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x513 = 31354U;
	uint16_t x514 = 200U;
	static int64_t x516 = -1LL;

	t59 = ((x513/(x514/x515))*x516);

	if (t59 != 950LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x517 = INT64_MIN;
	static uint32_t x518 = UINT32_MAX;
	uint8_t x519 = 91U;
	volatile int16_t x520 = INT16_MIN;
	static int64_t t60 = -3672637541592279LL;

	t60 = ((x517/(x518/x519))*x520);

	if (t60 != 6403555830497280LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x522 = INT8_MIN;
	volatile int16_t x523 = -1;
	int8_t x524 = INT8_MAX;
	int32_t t61 = 2;

	t61 = ((x521/(x522/x523))*x524);

	if (t61 != -2130706432) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x533 = 92682U;
	int16_t x535 = INT16_MAX;
	volatile uint8_t x536 = UINT8_MAX;
	uint32_t t62 = 140U;

	t62 = ((x533/(x534/x535))*x536);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x541 = INT64_MIN;
	static volatile int32_t x542 = INT32_MIN;
	static volatile int64_t x544 = -1LL;
	int64_t t63 = -51601437LL;

	t63 = ((x541/(x542/x543))*x544);

	if (t63 != -140733193519100LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x546 = UINT8_MAX;
	static volatile int16_t x547 = 20;
	uint8_t x548 = UINT8_MAX;
	volatile uint64_t t64 = 98642951LLU;

	t64 = ((x545/(x546/x547))*x548);

	if (t64 != 4016034392910LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x549 = -1;
	int32_t x551 = INT32_MAX;

	t65 = ((x549/(x550/x551))*x552);

	if (t65 != 11086467813211760768LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x565 = 3;
	int64_t x566 = INT64_MAX;
	int8_t x567 = -43;
	int8_t x568 = INT8_MIN;

	t66 = ((x565/(x566/x567))*x568);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x569 = 2;
	int8_t x570 = INT8_MAX;
	int32_t x572 = -174618551;
	volatile int64_t t67 = 34892LL;

	t67 = ((x569/(x570/x571))*x572);

	if (t67 != -349237102LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x597 = INT32_MIN;
	int32_t x598 = INT32_MIN;
	int8_t x599 = INT8_MAX;
	volatile int32_t x600 = -1;
	volatile int32_t t68 = 7717004;

	t68 = ((x597/(x598/x599))*x600);

	if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x613 = UINT32_MAX;
	uint8_t x615 = 6U;
	static uint8_t x616 = 40U;
	volatile int64_t t69 = 1LL;

	t69 = ((x613/(x614/x615))*x616);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x621 = INT8_MIN;
	int32_t x622 = 1142;
	volatile uint16_t x623 = 322U;
	volatile uint64_t x624 = 25225LLU;
	uint64_t t70 = 30LLU;

	t70 = ((x621/(x622/x623))*x624);

	if (t70 != 18446744073708492166LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x629 = 507299U;
	uint16_t x630 = UINT16_MAX;
	int32_t x631 = -1;
	int16_t x632 = 1344;
	volatile uint32_t t71 = 1423482898U;

	t71 = ((x629/(x630/x631))*x632);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x633 = INT8_MAX;
	int32_t x634 = -1636724;
	uint16_t x635 = 1U;

	t72 = ((x633/(x634/x635))*x636);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x637 = 392353912LLU;
	int32_t x638 = -26;
	int32_t x639 = -1;
	static int8_t x640 = INT8_MIN;
	uint64_t t73 = 480LLU;

	t73 = ((x637/(x638/x639))*x640);

	if (t73 != 18446744071777963136LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x644 = -1;
	volatile int32_t t74 = 14750;

	t74 = ((x641/(x642/x643))*x644);

	if (t74 != 11) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x657 = INT16_MIN;
	static uint16_t x658 = UINT16_MAX;
	static volatile int16_t x659 = INT16_MIN;
	uint32_t x660 = 26U;
	static volatile uint32_t t75 = 163879170U;

	t75 = ((x657/(x658/x659))*x660);

	if (t75 != 851968U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x665 = 0U;
	volatile int64_t x668 = INT64_MIN;

	t76 = ((x665/(x666/x667))*x668);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x677 = INT16_MAX;
	int64_t x678 = -392339278LL;
	uint16_t x679 = 8217U;

	t77 = ((x677/(x678/x679))*x680);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x689 = INT16_MAX;
	int32_t x690 = -85;
	uint8_t x691 = 85U;
	int16_t x692 = INT16_MIN;
	static volatile int32_t t78 = -44299;

	t78 = ((x689/(x690/x691))*x692);

	if (t78 != 1073709056) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x700 = -496LL;
	volatile uint64_t t79 = 2LLU;

	t79 = ((x697/(x698/x699))*x700);

	if (t79 != 18446744073709488624LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x701 = 4U;
	int32_t x703 = -1;
	static volatile uint32_t t80 = 2987U;

	t80 = ((x701/(x702/x703))*x704);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x715 = 137LLU;
	int16_t x716 = 1;

	t81 = ((x713/(x714/x715))*x716);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x733 = INT64_MIN;
	uint16_t x734 = 359U;
	int8_t x735 = INT8_MIN;
	static volatile uint16_t x736 = 0U;
	volatile int64_t t82 = 50727914305LL;

	t82 = ((x733/(x734/x735))*x736);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x738 = INT8_MIN;
	uint32_t x739 = 2059681U;
	int64_t x740 = -48469180745919LL;
	int64_t t83 = -16377237913414LL;

	t83 = ((x737/(x738/x739))*x740);

	if (t83 != -727037711188785LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x741 = -6;
	volatile int64_t x742 = -1LL;
	uint64_t x743 = UINT64_MAX;
	volatile uint8_t x744 = 49U;
	static uint64_t t84 = 187LLU;

	t84 = ((x741/(x742/x743))*x744);

	if (t84 != 18446744073709551322LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x767 = INT8_MAX;
	uint16_t x768 = 1103U;

	t85 = ((x765/(x766/x767))*x768);

	if (t85 != 63974) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x777 = 30U;
	volatile int64_t x778 = INT64_MIN;
	uint16_t x779 = 1790U;
	int16_t x780 = -3793;
	volatile int64_t t86 = -9892990LL;

	t86 = ((x777/(x778/x779))*x780);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x793 = -1;
	uint8_t x794 = 7U;
	static int8_t x795 = -1;
	static int64_t x796 = -1LL;
	volatile int64_t t87 = -9380791LL;

	t87 = ((x793/(x794/x795))*x796);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x798 = INT16_MIN;
	volatile int8_t x799 = INT8_MIN;
	volatile int64_t x800 = -3638775973983LL;
	volatile int64_t t88 = 348618725015011038LL;

	t88 = ((x797/(x798/x799))*x800);

	if (t88 != 465763324669824LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x801 = UINT32_MAX;
	static int64_t x802 = INT64_MIN;
	static volatile int64_t x803 = -979941217893513556LL;
	int32_t x804 = INT32_MIN;
	static volatile int64_t t89 = -513686997LL;

	t89 = ((x801/(x802/x803))*x804);

	if (t89 != -1024819114251649024LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x810 = 52460369;
	int8_t x811 = INT8_MIN;
	int8_t x812 = INT8_MIN;
	int32_t t90 = 6;

	t90 = ((x809/(x810/x811))*x812);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x813 = INT64_MIN;
	static int16_t x814 = 23;
	int16_t x815 = -1;
	static int32_t x816 = -1;
	volatile int64_t t91 = -1235LL;

	t91 = ((x813/(x814/x815))*x816);

	if (t91 != -401016175515425035LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x817 = -1;
	int32_t x818 = INT32_MIN;
	uint32_t x819 = 304U;
	uint32_t t92 = 975U;

	t92 = ((x817/(x818/x819))*x820);

	if (t92 != 4294966688U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x821 = INT16_MIN;
	uint32_t x823 = 7458U;
	uint64_t x824 = 0LLU;
	volatile uint64_t t93 = 149498846843580LLU;

	t93 = ((x821/(x822/x823))*x824);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x829 = INT8_MIN;
	uint32_t x830 = UINT32_MAX;
	int8_t x831 = -1;
	int32_t x832 = -598403;
	uint32_t t94 = 1U;

	t94 = ((x829/(x830/x831))*x832);

	if (t94 != 76595584U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x845 = UINT32_MAX;
	int32_t x846 = -409841499;
	int32_t x847 = -1;

	t95 = ((x845/(x846/x847))*x848);

	if (t95 != 1720LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x853 = INT16_MIN;
	int8_t x854 = 21;
	int16_t x855 = -1;
	int8_t x856 = INT8_MAX;
	int32_t t96 = 1;

	t96 = ((x853/(x854/x855))*x856);

	if (t96 != 198120) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x861 = INT32_MIN;
	static volatile int16_t x863 = INT16_MAX;
	static volatile int16_t x864 = INT16_MIN;
	volatile int64_t t97 = 749773528182088LL;

	t97 = ((x861/(x862/x863))*x864);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x869 = INT16_MAX;
	volatile int32_t x872 = 27;
	int64_t t98 = 261078794183860LL;

	t98 = ((x869/(x870/x871))*x872);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x874 = INT8_MAX;
	uint8_t x875 = 7U;
	static uint64_t x876 = 750966511275LLU;
	volatile uint64_t t99 = 15LLU;

	t99 = ((x873/(x874/x875))*x876);

	if (t99 != 280861475216850LLU) { NG(); } else { ; }
	
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

