#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x3 = INT16_MAX;
static int8_t x13 = 0;
volatile int32_t t2 = -11;
static int8_t x36 = INT8_MAX;
uint8_t x51 = 1U;
int16_t x52 = 18;
int8_t x65 = 1;
static int16_t x68 = -1;
int8_t x74 = -1;
int32_t x75 = 209030551;
static volatile int32_t t7 = -29;
volatile uint8_t x100 = 4U;
uint64_t x103 = 387526LLU;
static int32_t t11 = -48790548;
int64_t x105 = INT64_MIN;
static uint8_t x108 = 0U;
int64_t x126 = INT64_MIN;
volatile int8_t x127 = INT8_MIN;
volatile int32_t t17 = -720214475;
int32_t x146 = -1;
int16_t x147 = 0;
volatile int32_t t19 = 2038674;
int16_t x178 = 41;
uint32_t x179 = 63477U;
int32_t x184 = INT32_MIN;
uint64_t x210 = 297873940397368428LLU;
int64_t x249 = -28445852LL;
int8_t x252 = 1;
int32_t x278 = INT32_MIN;
static int16_t x280 = INT16_MAX;
static int32_t t27 = 15649600;
int64_t x281 = -229409LL;
volatile int32_t x282 = INT32_MAX;
int8_t x301 = INT8_MIN;
uint32_t x302 = 0U;
volatile int32_t t30 = 924350;
static uint16_t x309 = UINT16_MAX;
static int8_t x311 = 23;
uint16_t x315 = UINT16_MAX;
static volatile int32_t x318 = INT32_MIN;
volatile int64_t x319 = -1LL;
static int16_t x320 = INT16_MAX;
uint8_t x348 = UINT8_MAX;
uint16_t x355 = UINT16_MAX;
volatile int32_t t37 = -1;
uint64_t x366 = 13416754LLU;
uint8_t x377 = 60U;
int32_t x385 = -1;
int64_t x390 = INT64_MIN;
uint16_t x395 = 13U;
int64_t x413 = -6058655LL;
volatile int32_t t44 = -3;
volatile int32_t t46 = 75050712;
volatile int32_t t47 = -911633070;
int64_t x441 = INT64_MIN;
int64_t x445 = -13656308794LL;
volatile int32_t t49 = 19611951;
static uint16_t x464 = 107U;
static int8_t x469 = 0;
int64_t x470 = -21478281473LL;
int32_t x491 = 24744;
uint8_t x492 = 1U;
int32_t t58 = -1844484;
int16_t x514 = -1;
uint8_t x515 = UINT8_MAX;
static volatile int32_t t59 = -38559;
int16_t x528 = INT16_MIN;
int16_t x536 = -1;
int32_t t62 = -614752;
static int64_t x573 = 5848LL;
int64_t x575 = INT64_MAX;
static int32_t x576 = 3965920;
uint64_t x582 = 6615543235583847038LLU;
int32_t t65 = -4898975;
int8_t x614 = INT8_MAX;
uint8_t x616 = 0U;
int16_t x630 = 119;
static int32_t x631 = 225760273;
int32_t t71 = 5000;
int8_t x639 = -1;
int8_t x649 = -1;
int16_t x651 = -1;
int16_t x663 = 2;
int32_t x668 = INT32_MAX;
int32_t t75 = 245;
volatile int64_t x669 = -1LL;
uint32_t x677 = UINT32_MAX;
uint64_t x679 = UINT64_MAX;
static volatile int32_t t79 = -1;
int32_t t80 = 645660;
uint64_t x727 = 3806926955849825505LLU;
int32_t t85 = 265;
static uint16_t x742 = 6U;
uint64_t x743 = 1503818967LLU;
static int32_t x752 = -113933;
volatile uint64_t x767 = UINT64_MAX;
volatile int32_t t88 = 29918;
volatile int32_t x773 = INT32_MIN;
int32_t x776 = INT32_MIN;
volatile int32_t t89 = 210171;
uint16_t x778 = 1U;
volatile int32_t t90 = -3524;
int8_t x788 = INT8_MAX;
int16_t x825 = -1;
uint64_t x827 = UINT64_MAX;
volatile int32_t t93 = 964;
int8_t x841 = 1;
int64_t x844 = INT64_MIN;
static volatile int32_t t94 = 31059;
volatile uint32_t x852 = UINT32_MAX;
volatile int32_t t95 = 9360411;
int16_t x861 = INT16_MIN;
int32_t x889 = INT32_MIN;
volatile uint64_t x900 = 1727714600229087960LLU;


void f0(void) {
	int32_t x1 = -1;
	int8_t x2 = -8;
	static uint64_t x4 = UINT64_MAX;
	static volatile int32_t t0 = -9640;

	t0 = ((x1/(x2<x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x14 = 35;
	static uint64_t x15 = UINT64_MAX;
	volatile uint16_t x16 = UINT16_MAX;
	int32_t t1 = 1375939;

	t1 = ((x13/(x14<x15))<=x16);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = 16U;
	int32_t x22 = -87;
	static uint16_t x23 = 1010U;
	int32_t x24 = INT32_MIN;

	t2 = ((x21/(x22<x23))<=x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x33 = UINT16_MAX;
	uint32_t x34 = 5U;
	int32_t x35 = INT32_MIN;
	int32_t t3 = 433355;

	t3 = ((x33/(x34<x35))<=x36);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x37 = 0;
	static volatile uint16_t x38 = UINT16_MAX;
	static uint64_t x39 = UINT64_MAX;
	uint16_t x40 = 79U;
	volatile int32_t t4 = 438357500;

	t4 = ((x37/(x38<x39))<=x40);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x49 = 288445;
	static int64_t x50 = -219LL;
	int32_t t5 = -492400811;

	t5 = ((x49/(x50<x51))<=x52);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MIN;
	int32_t t6 = 47675432;

	t6 = ((x65/(x66<x67))<=x68);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x73 = UINT8_MAX;
	static int16_t x76 = INT16_MIN;

	t7 = ((x73/(x74<x75))<=x76);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x81 = UINT64_MAX;
	static int8_t x82 = INT8_MAX;
	uint32_t x83 = 856045768U;
	static int16_t x84 = INT16_MIN;
	int32_t t8 = -5073973;

	t8 = ((x81/(x82<x83))<=x84);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x85 = INT16_MAX;
	static int8_t x86 = -15;
	volatile int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t9 = 326887;

	t9 = ((x85/(x86<x87))<=x88);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x97 = 1;
	int16_t x98 = -507;
	int16_t x99 = 11023;
	volatile int32_t t10 = -1048314;

	t10 = ((x97/(x98<x99))<=x100);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x101 = -1LL;
	static volatile uint32_t x102 = 20564U;
	int64_t x104 = INT64_MIN;

	t11 = ((x101/(x102<x103))<=x104);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x106 = INT64_MIN;
	volatile uint32_t x107 = 30046554U;
	int32_t t12 = -49986;

	t12 = ((x105/(x106<x107))<=x108);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x117 = INT32_MAX;
	uint64_t x118 = 235LLU;
	static volatile int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MAX;
	static volatile int32_t t13 = -858;

	t13 = ((x117/(x118<x119))<=x120);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x121 = 20;
	static volatile uint32_t x122 = 55471546U;
	static int8_t x123 = -1;
	uint16_t x124 = 2773U;
	volatile int32_t t14 = -23193;

	t14 = ((x121/(x122<x123))<=x124);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x125 = UINT64_MAX;
	static uint16_t x128 = UINT16_MAX;
	volatile int32_t t15 = -361257;

	t15 = ((x125/(x126<x127))<=x128);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x133 = 30U;
	uint16_t x134 = 27U;
	int64_t x135 = INT64_MAX;
	int16_t x136 = INT16_MIN;
	int32_t t16 = 9678950;

	t16 = ((x133/(x134<x135))<=x136);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x137 = 0;
	int8_t x138 = INT8_MIN;
	int64_t x139 = 6712391283161772LL;
	uint16_t x140 = 17U;

	t17 = ((x137/(x138<x139))<=x140);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x145 = 6U;
	volatile int32_t x148 = INT32_MIN;
	volatile int32_t t18 = 181899;

	t18 = ((x145/(x146<x147))<=x148);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x149 = 377242235U;
	int32_t x150 = -8;
	int8_t x151 = INT8_MAX;
	volatile int64_t x152 = -3514LL;

	t19 = ((x149/(x150<x151))<=x152);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x153 = 530U;
	static int8_t x154 = 0;
	uint16_t x155 = 1U;
	volatile uint64_t x156 = UINT64_MAX;
	int32_t t20 = 28271;

	t20 = ((x153/(x154<x155))<=x156);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x177 = INT32_MIN;
	static int8_t x180 = -1;
	int32_t t21 = -1;

	t21 = ((x177/(x178<x179))<=x180);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x181 = 6;
	static int32_t x182 = INT32_MIN;
	volatile uint64_t x183 = UINT64_MAX;
	int32_t t22 = -5718;

	t22 = ((x181/(x182<x183))<=x184);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x209 = -11144816;
	int16_t x211 = -14686;
	int64_t x212 = 791105LL;
	int32_t t23 = 7;

	t23 = ((x209/(x210<x211))<=x212);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x213 = -4;
	uint8_t x214 = UINT8_MAX;
	int16_t x215 = 1802;
	static int64_t x216 = INT64_MIN;
	volatile int32_t t24 = 6354;

	t24 = ((x213/(x214<x215))<=x216);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x250 = INT16_MIN;
	uint32_t x251 = UINT32_MAX;
	volatile int32_t t25 = -99480515;

	t25 = ((x249/(x250<x251))<=x252);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x265 = INT16_MAX;
	int8_t x266 = 1;
	static int16_t x267 = 2;
	volatile uint64_t x268 = 1481LLU;
	volatile int32_t t26 = 2;

	t26 = ((x265/(x266<x267))<=x268);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x277 = -1;
	int32_t x279 = INT32_MAX;

	t27 = ((x277/(x278<x279))<=x280);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x283 = UINT32_MAX;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t28 = 44;

	t28 = ((x281/(x282<x283))<=x284);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x297 = 1U;
	int8_t x298 = INT8_MIN;
	volatile uint16_t x299 = 20505U;
	int32_t x300 = INT32_MIN;
	int32_t t29 = -27;

	t29 = ((x297/(x298<x299))<=x300);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x303 = INT16_MIN;
	volatile int32_t x304 = 403;

	t30 = ((x301/(x302<x303))<=x304);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x310 = INT32_MIN;
	int8_t x312 = -1;
	volatile int32_t t31 = -27779451;

	t31 = ((x309/(x310<x311))<=x312);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = -1;
	int8_t x316 = 57;
	static int32_t t32 = 1;

	t32 = ((x313/(x314<x315))<=x316);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x317 = -1;
	int32_t t33 = -21574401;

	t33 = ((x317/(x318<x319))<=x320);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x333 = 2510;
	uint64_t x334 = 1892168991827987683LLU;
	volatile int8_t x335 = -1;
	volatile int64_t x336 = INT64_MIN;
	volatile int32_t t34 = -335485;

	t34 = ((x333/(x334<x335))<=x336);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x341 = 107U;
	volatile int16_t x342 = INT16_MIN;
	static uint64_t x343 = UINT64_MAX;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t35 = -6650775;

	t35 = ((x341/(x342<x343))<=x344);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x345 = INT32_MIN;
	int64_t x346 = -1LL;
	uint32_t x347 = 11684212U;
	int32_t t36 = 7627978;

	t36 = ((x345/(x346<x347))<=x348);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x353 = 28829771211954LLU;
	volatile uint16_t x354 = 1U;
	static int64_t x356 = 387722209973801265LL;

	t37 = ((x353/(x354<x355))<=x356);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x365 = -1;
	uint32_t x367 = 37894236U;
	int8_t x368 = -1;
	int32_t t38 = -523;

	t38 = ((x365/(x366<x367))<=x368);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x378 = INT64_MIN;
	static int32_t x379 = INT32_MAX;
	static int8_t x380 = 1;
	int32_t t39 = 1928265;

	t39 = ((x377/(x378<x379))<=x380);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x386 = UINT32_MAX;
	uint64_t x387 = UINT64_MAX;
	int32_t x388 = 361;
	int32_t t40 = 2988;

	t40 = ((x385/(x386<x387))<=x388);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x389 = -487;
	int16_t x391 = 797;
	volatile int64_t x392 = INT64_MIN;
	volatile int32_t t41 = 9383500;

	t41 = ((x389/(x390<x391))<=x392);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x393 = 2028U;
	int32_t x394 = INT32_MIN;
	uint32_t x396 = UINT32_MAX;
	int32_t t42 = -17460;

	t42 = ((x393/(x394<x395))<=x396);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x405 = 324U;
	static volatile int8_t x406 = INT8_MAX;
	uint16_t x407 = 16335U;
	uint8_t x408 = 3U;
	int32_t t43 = 49;

	t43 = ((x405/(x406<x407))<=x408);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x414 = -13167;
	static uint8_t x415 = 0U;
	static int8_t x416 = -1;

	t44 = ((x413/(x414<x415))<=x416);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x421 = INT64_MIN;
	uint8_t x422 = 74U;
	volatile int64_t x423 = INT64_MAX;
	volatile int64_t x424 = INT64_MIN;
	volatile int32_t t45 = -68;

	t45 = ((x421/(x422<x423))<=x424);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x433 = INT32_MIN;
	uint32_t x434 = 665791U;
	static int32_t x435 = -1011703;
	volatile int32_t x436 = INT32_MAX;

	t46 = ((x433/(x434<x435))<=x436);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x437 = 2797587759662833LLU;
	int32_t x438 = INT32_MIN;
	volatile int32_t x439 = INT32_MAX;
	int64_t x440 = 38633LL;

	t47 = ((x437/(x438<x439))<=x440);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x442 = INT64_MIN;
	int32_t x443 = -1;
	int64_t x444 = INT64_MIN;
	volatile int32_t t48 = 19;

	t48 = ((x441/(x442<x443))<=x444);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x446 = 2;
	uint8_t x447 = 4U;
	int64_t x448 = INT64_MIN;

	t49 = ((x445/(x446<x447))<=x448);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x461 = INT8_MIN;
	int32_t x462 = INT32_MIN;
	volatile int16_t x463 = INT16_MIN;
	static int32_t t50 = 96494073;

	t50 = ((x461/(x462<x463))<=x464);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x465 = -1;
	int16_t x466 = -21;
	static int8_t x467 = -3;
	uint16_t x468 = 139U;
	int32_t t51 = 0;

	t51 = ((x465/(x466<x467))<=x468);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x471 = INT32_MIN;
	int8_t x472 = -32;
	static volatile int32_t t52 = -4684507;

	t52 = ((x469/(x470<x471))<=x472);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x481 = -1LL;
	static int8_t x482 = INT8_MIN;
	int64_t x483 = INT64_MAX;
	uint16_t x484 = UINT16_MAX;
	int32_t t53 = 156564663;

	t53 = ((x481/(x482<x483))<=x484);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x485 = -2;
	static int64_t x486 = INT64_MIN;
	int16_t x487 = INT16_MIN;
	int16_t x488 = -8;
	volatile int32_t t54 = -93540;

	t54 = ((x485/(x486<x487))<=x488);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x489 = 0U;
	static int32_t x490 = INT32_MIN;
	static int32_t t55 = 0;

	t55 = ((x489/(x490<x491))<=x492);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x493 = -41;
	static int16_t x494 = INT16_MIN;
	int8_t x495 = -1;
	static uint64_t x496 = 107946902502LLU;
	int32_t t56 = -96;

	t56 = ((x493/(x494<x495))<=x496);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x497 = INT64_MAX;
	static int32_t x498 = 5867;
	uint64_t x499 = 38863LLU;
	uint32_t x500 = 60262U;
	static volatile int32_t t57 = 698215271;

	t57 = ((x497/(x498<x499))<=x500);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x505 = -27;
	static uint32_t x506 = 14159U;
	int16_t x507 = -1;
	int32_t x508 = -60319;

	t58 = ((x505/(x506<x507))<=x508);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x513 = INT8_MAX;
	int64_t x516 = -85979461128528442LL;

	t59 = ((x513/(x514<x515))<=x516);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x525 = INT32_MIN;
	int8_t x526 = -1;
	int8_t x527 = INT8_MAX;
	volatile int32_t t60 = 173;

	t60 = ((x525/(x526<x527))<=x528);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x529 = 666U;
	int64_t x530 = INT64_MIN;
	int64_t x531 = -160958693LL;
	uint16_t x532 = 5745U;
	int32_t t61 = 1;

	t61 = ((x529/(x530<x531))<=x532);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x533 = INT64_MIN;
	int64_t x534 = 234LL;
	uint64_t x535 = UINT64_MAX;

	t62 = ((x533/(x534<x535))<=x536);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x537 = INT64_MAX;
	static int64_t x538 = -1009165819LL;
	int32_t x539 = INT32_MAX;
	static volatile int32_t x540 = INT32_MIN;
	int32_t t63 = -42571205;

	t63 = ((x537/(x538<x539))<=x540);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x574 = 3;
	int32_t t64 = -2770;

	t64 = ((x573/(x574<x575))<=x576);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x581 = INT16_MIN;
	int8_t x583 = INT8_MIN;
	volatile int32_t x584 = INT32_MIN;

	t65 = ((x581/(x582<x583))<=x584);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x585 = UINT8_MAX;
	int64_t x586 = INT64_MIN;
	int8_t x587 = INT8_MAX;
	uint32_t x588 = UINT32_MAX;
	static int32_t t66 = -3618099;

	t66 = ((x585/(x586<x587))<=x588);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x609 = INT8_MIN;
	int16_t x610 = INT16_MIN;
	int8_t x611 = 0;
	int32_t x612 = INT32_MAX;
	int32_t t67 = 71;

	t67 = ((x609/(x610<x611))<=x612);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x613 = 222U;
	static uint64_t x615 = 178980243563934LLU;
	int32_t t68 = -1;

	t68 = ((x613/(x614<x615))<=x616);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x617 = INT16_MIN;
	int16_t x618 = -1291;
	int8_t x619 = INT8_MAX;
	int16_t x620 = -41;
	int32_t t69 = -74361;

	t69 = ((x617/(x618<x619))<=x620);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x629 = 8957U;
	int16_t x632 = -243;
	static volatile int32_t t70 = 0;

	t70 = ((x629/(x630<x631))<=x632);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x633 = 1U;
	static int64_t x634 = INT64_MIN;
	int16_t x635 = -4;
	static volatile int16_t x636 = INT16_MIN;

	t71 = ((x633/(x634<x635))<=x636);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x637 = 14;
	volatile int32_t x638 = INT32_MIN;
	static uint8_t x640 = UINT8_MAX;
	int32_t t72 = 65407;

	t72 = ((x637/(x638<x639))<=x640);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x650 = INT16_MIN;
	int32_t x652 = INT32_MIN;
	static int32_t t73 = -5761633;

	t73 = ((x649/(x650<x651))<=x652);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x661 = 50U;
	int16_t x662 = -1;
	int64_t x664 = INT64_MIN;
	volatile int32_t t74 = 5;

	t74 = ((x661/(x662<x663))<=x664);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x665 = INT16_MIN;
	static int64_t x666 = -208847363LL;
	static uint16_t x667 = 228U;

	t75 = ((x665/(x666<x667))<=x668);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x670 = INT16_MIN;
	int8_t x671 = 25;
	int64_t x672 = INT64_MIN;
	static int32_t t76 = -4926;

	t76 = ((x669/(x670<x671))<=x672);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x673 = 1595;
	uint8_t x674 = 59U;
	static uint64_t x675 = 1580329009260389993LLU;
	uint32_t x676 = 4U;
	int32_t t77 = -192688;

	t77 = ((x673/(x674<x675))<=x676);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x678 = INT16_MAX;
	int16_t x680 = 164;
	int32_t t78 = -10703184;

	t78 = ((x677/(x678<x679))<=x680);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x681 = INT64_MAX;
	int32_t x682 = INT32_MIN;
	int16_t x683 = INT16_MIN;
	volatile int64_t x684 = INT64_MAX;

	t79 = ((x681/(x682<x683))<=x684);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x689 = -1LL;
	static int32_t x690 = INT32_MIN;
	uint16_t x691 = UINT16_MAX;
	volatile uint32_t x692 = 57863U;

	t80 = ((x689/(x690<x691))<=x692);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x697 = INT16_MIN;
	int32_t x698 = INT32_MIN;
	int16_t x699 = INT16_MIN;
	volatile int16_t x700 = INT16_MIN;
	volatile int32_t t81 = 5222;

	t81 = ((x697/(x698<x699))<=x700);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x705 = -59;
	int16_t x706 = -30;
	int8_t x707 = INT8_MAX;
	static volatile int16_t x708 = 4025;
	volatile int32_t t82 = -100921800;

	t82 = ((x705/(x706<x707))<=x708);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x725 = INT32_MAX;
	uint8_t x726 = UINT8_MAX;
	uint16_t x728 = 3U;
	static int32_t t83 = 27364023;

	t83 = ((x725/(x726<x727))<=x728);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x729 = 1258993U;
	int32_t x730 = -1;
	volatile int64_t x731 = INT64_MAX;
	volatile uint64_t x732 = 11467LLU;
	int32_t t84 = -2642;

	t84 = ((x729/(x730<x731))<=x732);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x737 = -2445;
	int8_t x738 = INT8_MIN;
	static volatile uint64_t x739 = UINT64_MAX;
	int8_t x740 = -1;

	t85 = ((x737/(x738<x739))<=x740);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x741 = 2LLU;
	int64_t x744 = INT64_MIN;
	volatile int32_t t86 = -198337;

	t86 = ((x741/(x742<x743))<=x744);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x749 = INT16_MIN;
	volatile int16_t x750 = 14;
	int16_t x751 = 15;
	int32_t t87 = -498487571;

	t87 = ((x749/(x750<x751))<=x752);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x765 = INT32_MAX;
	static uint32_t x766 = UINT32_MAX;
	int64_t x768 = 2372788730702990LL;

	t88 = ((x765/(x766<x767))<=x768);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x774 = 1U;
	int16_t x775 = INT16_MIN;

	t89 = ((x773/(x774<x775))<=x776);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x777 = -1;
	static int64_t x779 = 765LL;
	volatile int64_t x780 = INT64_MIN;

	t90 = ((x777/(x778<x779))<=x780);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x785 = -2;
	int8_t x786 = -52;
	volatile int64_t x787 = INT64_MAX;
	int32_t t91 = 1;

	t91 = ((x785/(x786<x787))<=x788);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x817 = -1;
	int64_t x818 = INT64_MIN;
	volatile int32_t x819 = INT32_MIN;
	static uint32_t x820 = UINT32_MAX;
	int32_t t92 = 72097;

	t92 = ((x817/(x818<x819))<=x820);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x826 = INT8_MIN;
	uint64_t x828 = UINT64_MAX;

	t93 = ((x825/(x826<x827))<=x828);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x842 = -62;
	int32_t x843 = -1;

	t94 = ((x841/(x842<x843))<=x844);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x849 = INT16_MAX;
	static int32_t x850 = INT32_MIN;
	int64_t x851 = INT64_MAX;

	t95 = ((x849/(x850<x851))<=x852);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x857 = INT32_MIN;
	static int32_t x858 = 3;
	int8_t x859 = 60;
	volatile int8_t x860 = INT8_MIN;
	int32_t t96 = 553090569;

	t96 = ((x857/(x858<x859))<=x860);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x862 = 24U;
	uint8_t x863 = UINT8_MAX;
	int16_t x864 = INT16_MIN;
	volatile int32_t t97 = -823703900;

	t97 = ((x861/(x862<x863))<=x864);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x890 = INT64_MIN;
	static int8_t x891 = INT8_MIN;
	volatile uint8_t x892 = 19U;
	int32_t t98 = -2;

	t98 = ((x889/(x890<x891))<=x892);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x897 = UINT32_MAX;
	static uint16_t x898 = 1421U;
	uint32_t x899 = 1809U;
	volatile int32_t t99 = 1140269;

	t99 = ((x897/(x898<x899))<=x900);

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

