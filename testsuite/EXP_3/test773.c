#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 13U;
static volatile int16_t x17 = -1;
volatile uint32_t x47 = UINT32_MAX;
volatile uint32_t x85 = 0U;
uint16_t x90 = 59U;
static uint16_t x118 = UINT16_MAX;
int32_t x138 = -1;
volatile int32_t t10 = -63;
static uint32_t x151 = UINT32_MAX;
uint16_t x152 = 9U;
volatile uint32_t x168 = 13151594U;
uint64_t x193 = 173284LLU;
volatile int32_t t15 = -98571;
static int64_t x197 = -15152028419459890LL;
static int8_t x198 = -1;
int32_t x200 = INT32_MIN;
int64_t x239 = -2068671061846070LL;
volatile uint32_t x250 = UINT32_MAX;
volatile uint16_t x251 = 16846U;
static volatile int32_t t22 = -64970181;
static int32_t x272 = -1;
int16_t x276 = INT16_MIN;
volatile int32_t t24 = 82260;
int64_t x287 = INT64_MIN;
int32_t x317 = INT32_MIN;
volatile int16_t x320 = INT16_MIN;
static uint8_t x322 = UINT8_MAX;
volatile int16_t x326 = INT16_MAX;
int32_t t29 = -330;
volatile uint8_t x333 = UINT8_MAX;
static int8_t x334 = -1;
uint16_t x357 = UINT16_MAX;
static int32_t t31 = -15571;
uint16_t x365 = 115U;
static int32_t x370 = -308052534;
static uint8_t x371 = 0U;
uint8_t x390 = 14U;
static volatile int32_t t36 = 489107249;
int8_t x404 = -1;
int32_t x406 = INT32_MIN;
static int8_t x410 = INT8_MAX;
uint16_t x412 = 3154U;
static volatile int32_t t42 = -416417;
static int8_t x450 = INT8_MIN;
int32_t x451 = INT32_MIN;
int8_t x457 = 7;
volatile int16_t x459 = 3;
int16_t x465 = -1;
static int8_t x466 = INT8_MAX;
int32_t x473 = INT32_MAX;
int8_t x475 = 0;
volatile uint64_t x478 = 1614962943374189LLU;
int32_t t51 = -26884;
static volatile int8_t x530 = INT8_MIN;
int8_t x546 = -1;
uint32_t x560 = 1U;
uint64_t x561 = 45611LLU;
static int64_t x562 = INT64_MIN;
uint16_t x563 = 27U;
int32_t x564 = INT32_MIN;
static volatile int16_t x581 = INT16_MIN;
volatile uint8_t x583 = UINT8_MAX;
static volatile uint16_t x626 = UINT16_MAX;
uint16_t x628 = 16U;
static int8_t x634 = INT8_MIN;
static int16_t x649 = INT16_MAX;
static int16_t x664 = INT16_MAX;
int64_t x665 = -1LL;
int32_t t68 = -19405703;
volatile uint64_t x750 = UINT64_MAX;
static volatile int32_t t70 = -10089;
volatile uint8_t x757 = 1U;
static int8_t x760 = -1;
uint8_t x775 = 3U;
int64_t x813 = 1LL;
int64_t x817 = 28952692004962495LL;
static int32_t x823 = -1;
int32_t t82 = 160006;
int64_t x866 = -1LL;
int16_t x871 = 1;
int32_t x879 = INT32_MIN;
volatile int32_t t85 = 877;
int32_t x909 = INT32_MIN;
int16_t x917 = 9;
int32_t t88 = 242714;
int32_t t94 = -3836;
int16_t x980 = INT16_MIN;
static int32_t t96 = -14270950;
volatile int8_t x1012 = -1;
int16_t x1016 = -2;
volatile int32_t x1022 = -1;


void f0(void) {
	volatile uint64_t x1 = 22769009699LLU;
	uint32_t x2 = 68U;
	static volatile int16_t x4 = -1;
	volatile int32_t t0 = 2035;

	t0 = ((x1==x2)<<(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x18 = -13700250962997174LL;
	volatile int32_t x19 = 0;
	static volatile int16_t x20 = INT16_MAX;
	int32_t t1 = 21013662;

	t1 = ((x17==x18)<<(x19%x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x45 = -1;
	int8_t x46 = INT8_MAX;
	int16_t x48 = -1;
	int32_t t2 = -19;

	t2 = ((x45==x46)<<(x47%x48));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x61 = UINT32_MAX;
	int8_t x62 = INT8_MAX;
	uint16_t x63 = UINT16_MAX;
	int16_t x64 = INT16_MAX;
	int32_t t3 = 368170;

	t3 = ((x61==x62)<<(x63%x64));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x69 = -1373241016345LL;
	uint32_t x70 = 48318537U;
	volatile int64_t x71 = INT64_MIN;
	int8_t x72 = -1;
	static volatile int32_t t4 = -286;

	t4 = ((x69==x70)<<(x71%x72));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x86 = 17846699003704151LLU;
	volatile uint64_t x87 = UINT64_MAX;
	int16_t x88 = INT16_MAX;
	volatile int32_t t5 = -84212548;

	t5 = ((x85==x86)<<(x87%x88));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x89 = UINT8_MAX;
	uint16_t x91 = 0U;
	uint64_t x92 = 182LLU;
	volatile int32_t t6 = -66246;

	t6 = ((x89==x90)<<(x91%x92));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x93 = 6U;
	uint64_t x94 = 531003827LLU;
	static int32_t x95 = INT32_MAX;
	int16_t x96 = INT16_MAX;
	volatile int32_t t7 = -26;

	t7 = ((x93==x94)<<(x95%x96));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x101 = -1;
	volatile int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MAX;
	static int8_t x104 = INT8_MAX;
	static int32_t t8 = 9;

	t8 = ((x101==x102)<<(x103%x104));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x117 = 1516U;
	uint16_t x119 = 59U;
	int32_t x120 = -1;
	int32_t t9 = 1;

	t9 = ((x117==x118)<<(x119%x120));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x137 = -1;
	int16_t x139 = -2421;
	int8_t x140 = -1;

	t10 = ((x137==x138)<<(x139%x140));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x145 = INT8_MIN;
	uint16_t x146 = 704U;
	uint16_t x147 = 1302U;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t11 = -17061;

	t11 = ((x145==x146)<<(x147%x148));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x149 = 53;
	uint8_t x150 = UINT8_MAX;
	static int32_t t12 = -1039;

	t12 = ((x149==x150)<<(x151%x152));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x157 = 4022952014417LLU;
	int16_t x158 = INT16_MIN;
	static uint8_t x159 = 2U;
	int64_t x160 = -16056383643431743LL;
	int32_t t13 = -161;

	t13 = ((x157==x158)<<(x159%x160));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x165 = INT16_MIN;
	volatile int32_t x166 = INT32_MIN;
	int16_t x167 = 17;
	int32_t t14 = 1;

	t14 = ((x165==x166)<<(x167%x168));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x194 = -671438696275896LL;
	static volatile uint16_t x195 = UINT16_MAX;
	int8_t x196 = -1;

	t15 = ((x193==x194)<<(x195%x196));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x199 = INT64_MIN;
	int32_t t16 = 0;

	t16 = ((x197==x198)<<(x199%x200));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x201 = INT64_MAX;
	uint8_t x202 = UINT8_MAX;
	uint16_t x203 = 21085U;
	volatile int32_t x204 = 1;
	volatile int32_t t17 = -60501501;

	t17 = ((x201==x202)<<(x203%x204));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x205 = -1LL;
	int32_t x206 = INT32_MIN;
	volatile uint8_t x207 = 0U;
	int32_t x208 = INT32_MIN;
	int32_t t18 = 101662783;

	t18 = ((x205==x206)<<(x207%x208));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x233 = 40U;
	int8_t x234 = -1;
	int8_t x235 = 2;
	static int64_t x236 = INT64_MIN;
	static int32_t t19 = -197;

	t19 = ((x233==x234)<<(x235%x236));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x237 = 237125283U;
	int32_t x238 = INT32_MIN;
	int32_t x240 = -1;
	int32_t t20 = -41978;

	t20 = ((x237==x238)<<(x239%x240));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x249 = INT8_MIN;
	static volatile int16_t x252 = -1;
	static volatile int32_t t21 = 187;

	t21 = ((x249==x250)<<(x251%x252));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x265 = -1;
	int16_t x266 = INT16_MIN;
	uint64_t x267 = 4LLU;
	static int32_t x268 = -48382;

	t22 = ((x265==x266)<<(x267%x268));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x269 = 3U;
	static int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	volatile int32_t t23 = -7;

	t23 = ((x269==x270)<<(x271%x272));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x273 = 283530U;
	volatile int64_t x274 = INT64_MIN;
	volatile int32_t x275 = INT32_MIN;

	t24 = ((x273==x274)<<(x275%x276));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x285 = 1;
	volatile int64_t x286 = -42330LL;
	volatile int16_t x288 = INT16_MIN;
	volatile int32_t t25 = 110;

	t25 = ((x285==x286)<<(x287%x288));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x318 = UINT64_MAX;
	static volatile uint8_t x319 = 0U;
	int32_t t26 = -956442679;

	t26 = ((x317==x318)<<(x319%x320));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x321 = 43U;
	int64_t x323 = INT64_MAX;
	int64_t x324 = -1LL;
	static volatile int32_t t27 = 37160420;

	t27 = ((x321==x322)<<(x323%x324));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x325 = 29U;
	static int16_t x327 = -5433;
	int16_t x328 = -1;
	volatile int32_t t28 = 382;

	t28 = ((x325==x326)<<(x327%x328));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x329 = 2026LLU;
	volatile int32_t x330 = -1;
	uint8_t x331 = 5U;
	int8_t x332 = 22;

	t29 = ((x329==x330)<<(x331%x332));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t30 = 2;

	t30 = ((x333==x334)<<(x335%x336));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x358 = INT16_MIN;
	uint64_t x359 = UINT64_MAX;
	int32_t x360 = INT32_MAX;

	t31 = ((x357==x358)<<(x359%x360));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x366 = 6U;
	int8_t x367 = INT8_MAX;
	int8_t x368 = 1;
	volatile int32_t t32 = 0;

	t32 = ((x365==x366)<<(x367%x368));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x369 = -5;
	int64_t x372 = -1LL;
	volatile int32_t t33 = -2639;

	t33 = ((x369==x370)<<(x371%x372));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x377 = 11U;
	int32_t x378 = -2951751;
	int16_t x379 = INT16_MAX;
	int32_t x380 = 70;
	int32_t t34 = -72961;

	t34 = ((x377==x378)<<(x379%x380));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x381 = INT8_MIN;
	volatile int32_t x382 = -32248;
	static uint16_t x383 = 21732U;
	int8_t x384 = 19;
	int32_t t35 = -31760899;

	t35 = ((x381==x382)<<(x383%x384));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x389 = 3U;
	static volatile int16_t x391 = INT16_MAX;
	int8_t x392 = INT8_MAX;

	t36 = ((x389==x390)<<(x391%x392));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x393 = INT8_MIN;
	static volatile int16_t x394 = -1;
	static int32_t x395 = INT32_MAX;
	int32_t x396 = INT32_MAX;
	int32_t t37 = 2271578;

	t37 = ((x393==x394)<<(x395%x396));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x397 = 5052U;
	static int8_t x398 = -1;
	static volatile int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MIN;
	volatile int32_t t38 = 2923;

	t38 = ((x397==x398)<<(x399%x400));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x401 = 2103938444U;
	int16_t x402 = -1;
	uint16_t x403 = 124U;
	volatile int32_t t39 = -6;

	t39 = ((x401==x402)<<(x403%x404));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x405 = 9469;
	volatile uint32_t x407 = 0U;
	uint8_t x408 = 18U;
	int32_t t40 = -192;

	t40 = ((x405==x406)<<(x407%x408));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x409 = INT32_MIN;
	volatile uint8_t x411 = 1U;
	volatile int32_t t41 = -63;

	t41 = ((x409==x410)<<(x411%x412));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x421 = INT32_MIN;
	static uint32_t x422 = 183U;
	static int64_t x423 = -1LL;
	int16_t x424 = -1;

	t42 = ((x421==x422)<<(x423%x424));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x441 = INT8_MIN;
	uint32_t x442 = UINT32_MAX;
	int8_t x443 = INT8_MAX;
	uint32_t x444 = 4U;
	volatile int32_t t43 = 24;

	t43 = ((x441==x442)<<(x443%x444));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x449 = 0;
	int32_t x452 = -1;
	int32_t t44 = 6017;

	t44 = ((x449==x450)<<(x451%x452));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x458 = 59U;
	static uint16_t x460 = UINT16_MAX;
	int32_t t45 = -1;

	t45 = ((x457==x458)<<(x459%x460));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x467 = INT64_MAX;
	int32_t x468 = -1;
	volatile int32_t t46 = 28;

	t46 = ((x465==x466)<<(x467%x468));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x474 = INT64_MAX;
	uint64_t x476 = 4082943393078LLU;
	static volatile int32_t t47 = 12;

	t47 = ((x473==x474)<<(x475%x476));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x477 = INT64_MAX;
	int64_t x479 = INT64_MIN;
	static int16_t x480 = INT16_MIN;
	static volatile int32_t t48 = 9985117;

	t48 = ((x477==x478)<<(x479%x480));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x493 = -1;
	uint64_t x494 = 248343976LLU;
	int8_t x495 = INT8_MAX;
	int32_t x496 = -1;
	volatile int32_t t49 = -3;

	t49 = ((x493==x494)<<(x495%x496));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x505 = INT64_MAX;
	int64_t x506 = INT64_MIN;
	volatile int16_t x507 = INT16_MAX;
	static volatile int16_t x508 = -1;
	int32_t t50 = 41094796;

	t50 = ((x505==x506)<<(x507%x508));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x517 = -1LL;
	uint8_t x518 = 13U;
	volatile uint8_t x519 = 18U;
	int16_t x520 = INT16_MAX;

	t51 = ((x517==x518)<<(x519%x520));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x525 = INT8_MAX;
	static volatile int8_t x526 = INT8_MIN;
	uint32_t x527 = UINT32_MAX;
	int16_t x528 = -1;
	volatile int32_t t52 = -4568874;

	t52 = ((x525==x526)<<(x527%x528));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x529 = 6644667994LLU;
	uint32_t x531 = 695U;
	int8_t x532 = 4;
	volatile int32_t t53 = 4597;

	t53 = ((x529==x530)<<(x531%x532));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x537 = INT16_MIN;
	int64_t x538 = -1LL;
	int8_t x539 = INT8_MIN;
	int8_t x540 = 1;
	static volatile int32_t t54 = 3144;

	t54 = ((x537==x538)<<(x539%x540));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x545 = INT64_MAX;
	int8_t x547 = 0;
	static uint64_t x548 = 68849575506680414LLU;
	static int32_t t55 = -877831380;

	t55 = ((x545==x546)<<(x547%x548));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x557 = INT64_MIN;
	static volatile int32_t x558 = 1;
	static int32_t x559 = INT32_MIN;
	volatile int32_t t56 = -3;

	t56 = ((x557==x558)<<(x559%x560));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t t57 = -224;

	t57 = ((x561==x562)<<(x563%x564));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x569 = INT64_MIN;
	uint32_t x570 = 9118U;
	uint64_t x571 = 291994264LLU;
	int32_t x572 = 2;
	volatile int32_t t58 = 0;

	t58 = ((x569==x570)<<(x571%x572));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x573 = UINT8_MAX;
	uint16_t x574 = 47U;
	uint32_t x575 = UINT32_MAX;
	volatile int16_t x576 = -16;
	volatile int32_t t59 = -129975810;

	t59 = ((x573==x574)<<(x575%x576));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x582 = 2302981LL;
	volatile uint8_t x584 = 27U;
	volatile int32_t t60 = 6070472;

	t60 = ((x581==x582)<<(x583%x584));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x601 = -1;
	int32_t x602 = INT32_MIN;
	uint32_t x603 = 35533319U;
	uint32_t x604 = 11U;
	int32_t t61 = -166;

	t61 = ((x601==x602)<<(x603%x604));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x605 = INT8_MIN;
	int8_t x606 = INT8_MIN;
	static uint8_t x607 = 85U;
	uint32_t x608 = 5U;
	int32_t t62 = -2844;

	t62 = ((x605==x606)<<(x607%x608));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x625 = INT8_MAX;
	static int8_t x627 = INT8_MIN;
	volatile int32_t t63 = -1;

	t63 = ((x625==x626)<<(x627%x628));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x633 = INT32_MAX;
	int8_t x635 = INT8_MIN;
	static int8_t x636 = 1;
	int32_t t64 = -250532;

	t64 = ((x633==x634)<<(x635%x636));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x650 = 76U;
	uint8_t x651 = 0U;
	volatile int16_t x652 = 15646;
	volatile int32_t t65 = 0;

	t65 = ((x649==x650)<<(x651%x652));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x661 = 4625948939LL;
	int16_t x662 = -656;
	uint8_t x663 = 1U;
	int32_t t66 = 257900988;

	t66 = ((x661==x662)<<(x663%x664));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x666 = 1500;
	uint16_t x667 = 9U;
	int8_t x668 = INT8_MIN;
	int32_t t67 = -135223;

	t67 = ((x665==x666)<<(x667%x668));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x737 = -1LL;
	int32_t x738 = INT32_MIN;
	volatile uint32_t x739 = 1U;
	volatile int32_t x740 = INT32_MIN;

	t68 = ((x737==x738)<<(x739%x740));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x749 = 7U;
	int8_t x751 = 1;
	static uint64_t x752 = 3151196384579246392LLU;
	int32_t t69 = 54;

	t69 = ((x749==x750)<<(x751%x752));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x753 = INT32_MIN;
	static volatile uint16_t x754 = UINT16_MAX;
	int16_t x755 = INT16_MAX;
	uint16_t x756 = 1U;

	t70 = ((x753==x754)<<(x755%x756));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x758 = 60851240LL;
	static int16_t x759 = INT16_MAX;
	int32_t t71 = 838098;

	t71 = ((x757==x758)<<(x759%x760));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x773 = 190U;
	static volatile int32_t x774 = -38;
	static int16_t x776 = 884;
	volatile int32_t t72 = -22085930;

	t72 = ((x773==x774)<<(x775%x776));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x777 = -1;
	volatile uint64_t x778 = 2152258450LLU;
	volatile int32_t x779 = INT32_MIN;
	volatile int8_t x780 = 1;
	volatile int32_t t73 = 32;

	t73 = ((x777==x778)<<(x779%x780));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x785 = -1;
	volatile int8_t x786 = INT8_MIN;
	uint8_t x787 = 8U;
	static volatile uint32_t x788 = UINT32_MAX;
	static volatile int32_t t74 = -6469324;

	t74 = ((x785==x786)<<(x787%x788));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x789 = INT8_MIN;
	int8_t x790 = 7;
	uint8_t x791 = UINT8_MAX;
	int8_t x792 = 12;
	int32_t t75 = 121388121;

	t75 = ((x789==x790)<<(x791%x792));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x801 = 1U;
	int8_t x802 = -1;
	uint64_t x803 = UINT64_MAX;
	volatile uint16_t x804 = UINT16_MAX;
	volatile int32_t t76 = -3218;

	t76 = ((x801==x802)<<(x803%x804));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x814 = 9U;
	int32_t x815 = 263230;
	volatile int64_t x816 = 17LL;
	int32_t t77 = -5176;

	t77 = ((x813==x814)<<(x815%x816));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x818 = 4711U;
	static uint8_t x819 = 3U;
	int64_t x820 = -266LL;
	volatile int32_t t78 = 180;

	t78 = ((x817==x818)<<(x819%x820));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x821 = -1;
	int64_t x822 = INT64_MIN;
	volatile int32_t x824 = -1;
	volatile int32_t t79 = -417453;

	t79 = ((x821==x822)<<(x823%x824));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x849 = INT16_MIN;
	uint8_t x850 = 27U;
	static uint16_t x851 = 7U;
	int16_t x852 = -1;
	int32_t t80 = 46326417;

	t80 = ((x849==x850)<<(x851%x852));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x853 = INT32_MAX;
	int8_t x854 = -1;
	volatile int8_t x855 = -4;
	int8_t x856 = 1;
	static int32_t t81 = -124837;

	t81 = ((x853==x854)<<(x855%x856));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x857 = UINT32_MAX;
	volatile int8_t x858 = INT8_MIN;
	uint8_t x859 = 1U;
	uint8_t x860 = 1U;

	t82 = ((x857==x858)<<(x859%x860));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x865 = INT16_MIN;
	int16_t x867 = -1;
	static int8_t x868 = -1;
	volatile int32_t t83 = -193200073;

	t83 = ((x865==x866)<<(x867%x868));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x869 = 242U;
	uint32_t x870 = UINT32_MAX;
	int32_t x872 = 132228683;
	int32_t t84 = 4;

	t84 = ((x869==x870)<<(x871%x872));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x877 = UINT32_MAX;
	int64_t x878 = 2044222840786LL;
	int16_t x880 = INT16_MIN;

	t85 = ((x877==x878)<<(x879%x880));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x889 = 155078149108797810LLU;
	volatile int32_t x890 = INT32_MAX;
	int16_t x891 = 346;
	static volatile uint8_t x892 = 1U;
	static int32_t t86 = 1;

	t86 = ((x889==x890)<<(x891%x892));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x910 = 9118239304202207537LLU;
	int16_t x911 = 5029;
	static uint8_t x912 = 3U;
	int32_t t87 = 157339;

	t87 = ((x909==x910)<<(x911%x912));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x918 = INT64_MIN;
	int32_t x919 = -1;
	uint8_t x920 = 1U;

	t88 = ((x917==x918)<<(x919%x920));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x925 = INT16_MAX;
	int32_t x926 = -37391144;
	volatile uint32_t x927 = UINT32_MAX;
	int16_t x928 = 1;
	volatile int32_t t89 = -1;

	t89 = ((x925==x926)<<(x927%x928));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x937 = UINT8_MAX;
	int16_t x938 = -1;
	int16_t x939 = INT16_MAX;
	int32_t x940 = -1;
	int32_t t90 = -22713044;

	t90 = ((x937==x938)<<(x939%x940));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x949 = 30488LLU;
	int8_t x950 = INT8_MIN;
	uint16_t x951 = UINT16_MAX;
	uint8_t x952 = 3U;
	volatile int32_t t91 = 109559;

	t91 = ((x949==x950)<<(x951%x952));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x953 = 104U;
	int16_t x954 = -1;
	static int64_t x955 = 16217347593188LL;
	int64_t x956 = -1LL;
	int32_t t92 = -105145154;

	t92 = ((x953==x954)<<(x955%x956));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x957 = INT64_MIN;
	volatile int32_t x958 = -3;
	uint64_t x959 = UINT64_MAX;
	int16_t x960 = INT16_MAX;
	int32_t t93 = -6;

	t93 = ((x957==x958)<<(x959%x960));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x973 = UINT64_MAX;
	uint32_t x974 = 326669U;
	volatile int8_t x975 = 7;
	volatile int8_t x976 = INT8_MIN;

	t94 = ((x973==x974)<<(x975%x976));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x977 = INT32_MAX;
	static volatile int8_t x978 = -1;
	volatile int16_t x979 = 7;
	volatile int32_t t95 = -539657;

	t95 = ((x977==x978)<<(x979%x980));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x993 = INT64_MIN;
	int8_t x994 = INT8_MAX;
	static uint16_t x995 = 181U;
	volatile int16_t x996 = 19;

	t96 = ((x993==x994)<<(x995%x996));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1009 = INT16_MIN;
	int64_t x1010 = -13LL;
	static uint16_t x1011 = UINT16_MAX;
	int32_t t97 = 6720494;

	t97 = ((x1009==x1010)<<(x1011%x1012));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x1013 = UINT8_MAX;
	volatile uint16_t x1014 = UINT16_MAX;
	int8_t x1015 = INT8_MIN;
	volatile int32_t t98 = 1666149;

	t98 = ((x1013==x1014)<<(x1015%x1016));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x1021 = 1;
	static uint32_t x1023 = UINT32_MAX;
	static int64_t x1024 = -1LL;
	int32_t t99 = 43;

	t99 = ((x1021==x1022)<<(x1023%x1024));

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

