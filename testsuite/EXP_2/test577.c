#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = -1;
volatile uint16_t x21 = 15U;
volatile int32_t t1 = -17940;
uint16_t x47 = UINT16_MAX;
volatile uint16_t x48 = 1226U;
volatile int32_t t2 = -77260661;
uint64_t x89 = UINT64_MAX;
static uint64_t t4 = 15846LLU;
static uint16_t x97 = 958U;
volatile int32_t t6 = -582;
volatile int8_t x106 = INT8_MIN;
volatile int8_t x107 = -12;
static uint32_t x135 = UINT32_MAX;
volatile int8_t x136 = -2;
static volatile int32_t t11 = -777315068;
uint16_t x176 = UINT16_MAX;
uint32_t x177 = 509U;
int64_t x183 = INT64_MAX;
int64_t x184 = -13107324425804654LL;
int32_t x192 = -1;
volatile int32_t t16 = -371;
static volatile int32_t x238 = INT32_MIN;
static uint32_t x266 = 25U;
static volatile uint64_t t20 = 678406598LLU;
uint16_t x283 = UINT16_MAX;
volatile uint64_t x286 = UINT64_MAX;
static volatile int8_t x331 = INT8_MIN;
int8_t x332 = INT8_MIN;
uint32_t x376 = UINT32_MAX;
static int16_t x385 = INT16_MAX;
int32_t t30 = -1;
static volatile uint16_t x391 = UINT16_MAX;
int32_t x406 = INT32_MAX;
uint16_t x424 = 9U;
int32_t x511 = INT32_MAX;
uint16_t x541 = 859U;
uint64_t t44 = 138175718129192LLU;
volatile int8_t x590 = INT8_MAX;
volatile uint16_t x592 = 62U;
volatile int8_t x600 = -1;
static uint32_t x605 = 3U;
uint32_t x630 = 34038U;
volatile int16_t x639 = INT16_MIN;
uint8_t x652 = 1U;
static uint8_t x665 = 4U;
int64_t x667 = INT64_MIN;
static volatile int32_t x668 = INT32_MIN;
int32_t t52 = -190404;
int8_t x677 = 0;
volatile int32_t x684 = -210558;
volatile int32_t t54 = 3;
uint64_t x698 = 62520801631466859LLU;
volatile int64_t x700 = INT64_MAX;
int64_t x832 = 4646915069801457LL;
volatile int64_t t65 = 0LL;
static int8_t x854 = 10;
int64_t x855 = INT64_MAX;
int32_t x876 = INT32_MIN;
volatile int32_t t69 = -6084;
uint64_t x898 = 885751LLU;
static uint64_t x900 = UINT64_MAX;
int8_t x905 = 3;
uint64_t x907 = 137150495107780536LLU;
uint32_t x908 = 482695U;
int64_t x918 = INT64_MIN;
uint64_t t76 = 1551990095LLU;
static int32_t x958 = -1;
int8_t x965 = 0;
volatile int64_t x985 = 4208210254LL;
uint8_t x986 = 3U;
int64_t x998 = -1LL;
static uint32_t x1030 = 2444U;
uint64_t t85 = 1524002904473850168LLU;
int32_t x1043 = 721198815;
volatile uint32_t x1052 = UINT32_MAX;
volatile uint32_t t88 = 621U;
int32_t x1058 = -1;
static int16_t x1059 = INT16_MIN;
uint64_t x1093 = UINT64_MAX;
uint64_t t90 = 57906314761975LLU;
int32_t x1116 = INT32_MIN;
int32_t x1117 = 635;
uint64_t x1120 = UINT64_MAX;
uint64_t t93 = 128LLU;
volatile int16_t x1146 = INT16_MIN;
int64_t x1151 = -70LL;
int64_t x1157 = 7650492644LL;
volatile int32_t x1160 = INT32_MAX;
int8_t x1166 = -1;
volatile uint8_t x1170 = 6U;


void f0(void) {
	static int16_t x5 = INT16_MAX;
	volatile int64_t x7 = INT64_MIN;
	uint16_t x8 = 763U;
	static int32_t t0 = 6;

	t0 = ((x5<<(x6/x7))%x8);

	if (t0 != 721) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x22 = -1;
	volatile int8_t x23 = INT8_MAX;
	static int8_t x24 = INT8_MIN;

	t1 = ((x21<<(x22/x23))%x24);

	if (t1 != 15) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x45 = INT16_MAX;
	int64_t x46 = 36LL;

	t2 = ((x45<<(x46/x47))%x48);

	if (t2 != 891) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x49 = INT16_MAX;
	int16_t x50 = -13296;
	int16_t x51 = INT16_MIN;
	uint8_t x52 = 1U;
	volatile int32_t t3 = 159277;

	t3 = ((x49<<(x50/x51))%x52);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x90 = INT16_MIN;
	int64_t x91 = 3496353LL;
	static int8_t x92 = INT8_MAX;

	t4 = ((x89<<(x90/x91))%x92);

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x98 = UINT8_MAX;
	uint64_t x99 = 9006222138LLU;
	int32_t x100 = -1;
	volatile int32_t t5 = 37;

	t5 = ((x97<<(x98/x99))%x100);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x101 = INT32_MAX;
	uint8_t x102 = 40U;
	uint8_t x103 = UINT8_MAX;
	uint8_t x104 = UINT8_MAX;

	t6 = ((x101<<(x102/x103))%x104);

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x105 = INT8_MAX;
	uint16_t x108 = 59U;
	int32_t t7 = -3850216;

	t7 = ((x105<<(x106/x107))%x108);

	if (t7 != 12) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x133 = 6347884470866606LL;
	int16_t x134 = 2895;
	volatile int64_t t8 = 112LL;

	t8 = ((x133<<(x134/x135))%x136);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x137 = 1405753528LLU;
	static int64_t x138 = -1LL;
	int8_t x139 = INT8_MIN;
	uint64_t x140 = 4767404329827536154LLU;
	uint64_t t9 = 1655673602LLU;

	t9 = ((x137<<(x138/x139))%x140);

	if (t9 != 1405753528LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x149 = 7U;
	int64_t x150 = 412899948LL;
	int32_t x151 = INT32_MIN;
	uint32_t x152 = UINT32_MAX;
	uint32_t t10 = 28U;

	t10 = ((x149<<(x150/x151))%x152);

	if (t10 != 7U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x169 = INT8_MAX;
	int8_t x170 = -1;
	int64_t x171 = INT64_MIN;
	uint8_t x172 = 45U;

	t11 = ((x169<<(x170/x171))%x172);

	if (t11 != 37) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x173 = UINT64_MAX;
	uint32_t x174 = 23U;
	volatile int64_t x175 = INT64_MIN;
	uint64_t t12 = 2LLU;

	t12 = ((x173<<(x174/x175))%x176);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x178 = 33271992548685998LLU;
	static int32_t x179 = INT32_MIN;
	volatile int16_t x180 = 3364;
	volatile uint32_t t13 = 23U;

	t13 = ((x177<<(x178/x179))%x180);

	if (t13 != 509U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x181 = 1;
	static uint16_t x182 = UINT16_MAX;
	volatile int64_t t14 = -9071360743215794LL;

	t14 = ((x181<<(x182/x183))%x184);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x189 = INT32_MAX;
	int32_t x190 = INT32_MIN;
	int64_t x191 = INT64_MAX;
	int32_t t15 = 483;

	t15 = ((x189<<(x190/x191))%x192);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x209 = 77375596;
	volatile int64_t x210 = 47LL;
	int32_t x211 = INT32_MIN;
	int16_t x212 = INT16_MAX;

	t16 = ((x209<<(x210/x211))%x212);

	if (t16 != 12709) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x221 = 0;
	static uint16_t x222 = 462U;
	volatile uint64_t x223 = 790168324575545LLU;
	int32_t x224 = INT32_MIN;
	volatile int32_t t17 = 0;

	t17 = ((x221<<(x222/x223))%x224);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x225 = INT32_MAX;
	volatile int64_t x226 = INT64_MIN;
	uint64_t x227 = UINT64_MAX;
	volatile uint16_t x228 = 20915U;
	volatile int32_t t18 = 25;

	t18 = ((x225<<(x226/x227))%x228);

	if (t18 != 15107) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x237 = 1;
	uint64_t x239 = 8117602978469286335LLU;
	int16_t x240 = -1;
	static int32_t t19 = -1023374733;

	t19 = ((x237<<(x238/x239))%x240);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x265 = 3U;
	uint16_t x267 = 51U;
	uint64_t x268 = 137460LLU;

	t20 = ((x265<<(x266/x267))%x268);

	if (t20 != 3LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x281 = 2;
	int8_t x282 = INT8_MIN;
	volatile int32_t x284 = -3127008;
	volatile int32_t t21 = 651322;

	t21 = ((x281<<(x282/x283))%x284);

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x285 = 67U;
	int8_t x287 = INT8_MIN;
	int64_t x288 = 136184406810LL;
	int64_t t22 = 65296418LL;

	t22 = ((x285<<(x286/x287))%x288);

	if (t22 != 134LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x309 = 261887729LLU;
	uint8_t x310 = 2U;
	uint64_t x311 = 56915796174LLU;
	volatile uint8_t x312 = 14U;
	uint64_t t23 = 397373441462LLU;

	t23 = ((x309<<(x310/x311))%x312);

	if (t23 != 5LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x313 = UINT64_MAX;
	uint32_t x314 = 1662U;
	volatile uint16_t x315 = UINT16_MAX;
	static uint8_t x316 = UINT8_MAX;
	uint64_t t24 = 60727LLU;

	t24 = ((x313<<(x314/x315))%x316);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x329 = 127396945;
	int8_t x330 = INT8_MAX;
	volatile int32_t t25 = 122;

	t25 = ((x329<<(x330/x331))%x332);

	if (t25 != 81) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x341 = 30U;
	volatile int32_t x342 = -196942;
	int16_t x343 = INT16_MIN;
	static volatile int8_t x344 = -1;
	volatile int32_t t26 = -6314;

	t26 = ((x341<<(x342/x343))%x344);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x369 = 3284;
	int8_t x370 = 1;
	static volatile int8_t x371 = INT8_MIN;
	uint8_t x372 = 35U;
	static int32_t t27 = 8;

	t27 = ((x369<<(x370/x371))%x372);

	if (t27 != 29) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x373 = UINT64_MAX;
	uint16_t x374 = 366U;
	uint64_t x375 = 797891LLU;
	volatile uint64_t t28 = 7895717666178019LLU;

	t28 = ((x373<<(x374/x375))%x376);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x381 = 0LL;
	int16_t x382 = -4;
	int64_t x383 = 60917LL;
	uint8_t x384 = UINT8_MAX;
	volatile int64_t t29 = 1602143344811357571LL;

	t29 = ((x381<<(x382/x383))%x384);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x386 = INT8_MIN;
	static int16_t x387 = INT16_MIN;
	static int32_t x388 = -1;

	t30 = ((x385<<(x386/x387))%x388);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x389 = 1U;
	int16_t x390 = 0;
	int8_t x392 = INT8_MIN;
	uint32_t t31 = 58261158U;

	t31 = ((x389<<(x390/x391))%x392);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x405 = 7828;
	int64_t x407 = 2095156461LL;
	int16_t x408 = 7783;
	volatile int32_t t32 = 1;

	t32 = ((x405<<(x406/x407))%x408);

	if (t32 != 90) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x421 = UINT16_MAX;
	static int8_t x422 = 1;
	int32_t x423 = 104346;
	volatile int32_t t33 = 25070557;

	t33 = ((x421<<(x422/x423))%x424);

	if (t33 != 6) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x441 = INT8_MAX;
	static uint32_t x442 = UINT32_MAX;
	uint32_t x443 = UINT32_MAX;
	int8_t x444 = -1;
	int32_t t34 = -251359655;

	t34 = ((x441<<(x442/x443))%x444);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x445 = 35609LLU;
	volatile uint16_t x446 = 23U;
	uint16_t x447 = UINT16_MAX;
	int8_t x448 = INT8_MIN;
	uint64_t t35 = 87220LLU;

	t35 = ((x445<<(x446/x447))%x448);

	if (t35 != 35609LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x469 = UINT8_MAX;
	static int8_t x470 = -1;
	volatile int64_t x471 = -1LL;
	int32_t x472 = -1;
	int32_t t36 = 962079;

	t36 = ((x469<<(x470/x471))%x472);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x473 = 5490528010431LLU;
	int8_t x474 = INT8_MIN;
	volatile int32_t x475 = -127452;
	uint64_t x476 = 89386215441310LLU;
	uint64_t t37 = 6142LLU;

	t37 = ((x473<<(x474/x475))%x476);

	if (t37 != 5490528010431LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x477 = 8470U;
	int32_t x478 = INT32_MIN;
	uint64_t x479 = UINT64_MAX;
	int8_t x480 = INT8_MIN;
	static volatile int32_t t38 = 451915407;

	t38 = ((x477<<(x478/x479))%x480);

	if (t38 != 22) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x497 = UINT64_MAX;
	volatile uint8_t x498 = 4U;
	int16_t x499 = INT16_MAX;
	int8_t x500 = -1;
	volatile uint64_t t39 = 181317LLU;

	t39 = ((x497<<(x498/x499))%x500);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x509 = 18304379563LLU;
	int32_t x510 = 10795294;
	static uint16_t x512 = UINT16_MAX;
	uint64_t t40 = 3275LLU;

	t40 = ((x509<<(x510/x511))%x512);

	if (t40 != 60853LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x525 = 23U;
	volatile uint16_t x526 = 2U;
	uint32_t x527 = 56943647U;
	uint64_t x528 = 2892706539255LLU;
	static uint64_t t41 = 25946659821981044LLU;

	t41 = ((x525<<(x526/x527))%x528);

	if (t41 != 23LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x542 = -1;
	int32_t x543 = -3038;
	uint8_t x544 = 2U;
	static volatile int32_t t42 = 74558670;

	t42 = ((x541<<(x542/x543))%x544);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x581 = 1652781726U;
	static uint16_t x582 = 1U;
	int16_t x583 = 12;
	volatile uint16_t x584 = 3967U;
	uint32_t t43 = 1451U;

	t43 = ((x581<<(x582/x583))%x584);

	if (t43 != 2582U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x585 = 15;
	volatile uint64_t x586 = 33647321185LLU;
	static int64_t x587 = INT64_MAX;
	uint64_t x588 = UINT64_MAX;

	t44 = ((x585<<(x586/x587))%x588);

	if (t44 != 15LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x589 = UINT64_MAX;
	static uint32_t x591 = 1217478229U;
	uint64_t t45 = 7930679966160LLU;

	t45 = ((x589<<(x590/x591))%x592);

	if (t45 != 15LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x597 = 20;
	volatile int64_t x598 = -8LL;
	int32_t x599 = INT32_MIN;
	int32_t t46 = -15240951;

	t46 = ((x597<<(x598/x599))%x600);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x606 = 249049895U;
	int64_t x607 = INT64_MIN;
	int16_t x608 = INT16_MIN;
	volatile uint32_t t47 = 489236U;

	t47 = ((x605<<(x606/x607))%x608);

	if (t47 != 3U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x625 = INT8_MAX;
	static int64_t x626 = -1LL;
	int32_t x627 = INT32_MAX;
	static int16_t x628 = INT16_MIN;
	volatile int32_t t48 = 22297;

	t48 = ((x625<<(x626/x627))%x628);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x629 = 246U;
	uint64_t x631 = 25453LLU;
	uint8_t x632 = 93U;
	uint32_t t49 = 290683U;

	t49 = ((x629<<(x630/x631))%x632);

	if (t49 != 27U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x637 = INT8_MAX;
	uint16_t x638 = 3444U;
	static int32_t x640 = INT32_MIN;
	volatile int32_t t50 = -377649003;

	t50 = ((x637<<(x638/x639))%x640);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x649 = 28U;
	uint32_t x650 = 29U;
	int64_t x651 = INT64_MAX;
	int32_t t51 = -343398;

	t51 = ((x649<<(x650/x651))%x652);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x666 = INT8_MAX;

	t52 = ((x665<<(x666/x667))%x668);

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x678 = 15333891LL;
	volatile int64_t x679 = INT64_MAX;
	int32_t x680 = INT32_MAX;
	static volatile int32_t t53 = 0;

	t53 = ((x677<<(x678/x679))%x680);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x681 = UINT16_MAX;
	uint32_t x682 = 6840U;
	uint64_t x683 = 32780065172751LLU;

	t54 = ((x681<<(x682/x683))%x684);

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x697 = 13283732613087524LL;
	volatile int32_t x699 = -1;
	volatile int64_t t55 = 1606866LL;

	t55 = ((x697<<(x698/x699))%x700);

	if (t55 != 13283732613087524LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x701 = 0;
	uint8_t x702 = 4U;
	int8_t x703 = INT8_MIN;
	int32_t x704 = INT32_MIN;
	int32_t t56 = -101;

	t56 = ((x701<<(x702/x703))%x704);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x705 = UINT16_MAX;
	int16_t x706 = INT16_MAX;
	volatile uint16_t x707 = UINT16_MAX;
	uint8_t x708 = UINT8_MAX;
	volatile int32_t t57 = 9270;

	t57 = ((x705<<(x706/x707))%x708);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x729 = 57U;
	volatile int16_t x730 = -1;
	static int32_t x731 = 123555102;
	static int16_t x732 = INT16_MIN;
	static int32_t t58 = -84599022;

	t58 = ((x729<<(x730/x731))%x732);

	if (t58 != 57) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x733 = 372211073LL;
	int32_t x734 = -1673;
	int8_t x735 = INT8_MIN;
	int16_t x736 = INT16_MIN;
	static volatile int64_t t59 = -909324321LL;

	t59 = ((x733<<(x734/x735))%x736);

	if (t59 != 8192LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x745 = 21;
	uint8_t x746 = 6U;
	int16_t x747 = INT16_MIN;
	int32_t x748 = INT32_MIN;
	int32_t t60 = -11;

	t60 = ((x745<<(x746/x747))%x748);

	if (t60 != 21) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x753 = 3131LL;
	uint8_t x754 = 64U;
	int64_t x755 = INT64_MAX;
	int8_t x756 = INT8_MIN;
	volatile int64_t t61 = 9683397557833LL;

	t61 = ((x753<<(x754/x755))%x756);

	if (t61 != 59LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x757 = UINT16_MAX;
	int16_t x758 = -22;
	volatile int16_t x759 = INT16_MAX;
	volatile int64_t x760 = 180934450812205LL;
	static volatile int64_t t62 = 2631LL;

	t62 = ((x757<<(x758/x759))%x760);

	if (t62 != 65535LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x765 = UINT16_MAX;
	uint8_t x766 = 8U;
	volatile int64_t x767 = INT64_MAX;
	static int32_t x768 = INT32_MAX;
	int32_t t63 = 6;

	t63 = ((x765<<(x766/x767))%x768);

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x797 = UINT8_MAX;
	uint64_t x798 = 14159485145LLU;
	int8_t x799 = INT8_MIN;
	static int16_t x800 = -1;
	static volatile int32_t t64 = -7;

	t64 = ((x797<<(x798/x799))%x800);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x829 = 7326U;
	uint16_t x830 = 7445U;
	volatile int16_t x831 = INT16_MIN;

	t65 = ((x829<<(x830/x831))%x832);

	if (t65 != 7326LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x837 = 463324U;
	uint8_t x838 = 5U;
	volatile int64_t x839 = INT64_MIN;
	uint8_t x840 = 2U;
	volatile uint32_t t66 = 1U;

	t66 = ((x837<<(x838/x839))%x840);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x853 = 584U;
	static uint16_t x856 = UINT16_MAX;
	volatile uint32_t t67 = 669U;

	t67 = ((x853<<(x854/x855))%x856);

	if (t67 != 584U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x857 = INT64_MAX;
	int64_t x858 = -55607LL;
	int64_t x859 = INT64_MAX;
	static volatile int64_t x860 = -1LL;
	volatile int64_t t68 = -1LL;

	t68 = ((x857<<(x858/x859))%x860);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x873 = 6U;
	static uint8_t x874 = 1U;
	uint16_t x875 = UINT16_MAX;

	t69 = ((x873<<(x874/x875))%x876);

	if (t69 != 6) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x889 = 6562;
	volatile uint8_t x890 = 23U;
	uint32_t x891 = 58563U;
	int16_t x892 = 1;
	int32_t t70 = 199023;

	t70 = ((x889<<(x890/x891))%x892);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x893 = 2021244239865099995LLU;
	static int32_t x894 = -182;
	int16_t x895 = -570;
	int32_t x896 = 15141;
	uint64_t t71 = 22487171LLU;

	t71 = ((x893<<(x894/x895))%x896);

	if (t71 != 1691LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x897 = UINT16_MAX;
	int32_t x899 = INT32_MAX;
	uint64_t t72 = 6169947379132849381LLU;

	t72 = ((x897<<(x898/x899))%x900);

	if (t72 != 65535LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x901 = 3U;
	int32_t x902 = 1446243;
	uint64_t x903 = 94152738120612LLU;
	static int8_t x904 = INT8_MAX;
	int32_t t73 = 7113;

	t73 = ((x901<<(x902/x903))%x904);

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x906 = 321656092273LL;
	volatile uint32_t t74 = 382164U;

	t74 = ((x905<<(x906/x907))%x908);

	if (t74 != 3U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x913 = UINT32_MAX;
	uint8_t x914 = UINT8_MAX;
	volatile uint8_t x915 = UINT8_MAX;
	int32_t x916 = INT32_MIN;
	volatile uint32_t t75 = 0U;

	t75 = ((x913<<(x914/x915))%x916);

	if (t75 != 2147483646U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x917 = UINT64_MAX;
	uint64_t x919 = UINT64_MAX;
	uint32_t x920 = 118721U;

	t76 = ((x917<<(x918/x919))%x920);

	if (t76 != 44595LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x957 = 21199U;
	static int16_t x959 = INT16_MAX;
	static uint32_t x960 = UINT32_MAX;
	uint32_t t77 = 1667U;

	t77 = ((x957<<(x958/x959))%x960);

	if (t77 != 21199U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x966 = -1;
	int8_t x967 = INT8_MAX;
	uint8_t x968 = 15U;
	volatile int32_t t78 = 7;

	t78 = ((x965<<(x966/x967))%x968);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x973 = UINT16_MAX;
	static volatile int32_t x974 = INT32_MIN;
	int64_t x975 = INT64_MAX;
	volatile int16_t x976 = INT16_MIN;
	int32_t t79 = -3;

	t79 = ((x973<<(x974/x975))%x976);

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x977 = INT8_MAX;
	int64_t x978 = -58192LL;
	int64_t x979 = 1883541LL;
	volatile int8_t x980 = INT8_MIN;
	int32_t t80 = -3;

	t80 = ((x977<<(x978/x979))%x980);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x987 = INT64_MAX;
	static int16_t x988 = -7581;
	int64_t t81 = -1917LL;

	t81 = ((x985<<(x986/x987))%x988);

	if (t81 != 4735LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x989 = 3100523LLU;
	static int8_t x990 = 32;
	int16_t x991 = INT16_MAX;
	uint8_t x992 = 26U;
	uint64_t t82 = 779615800LLU;

	t82 = ((x989<<(x990/x991))%x992);

	if (t82 != 23LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x997 = 92432U;
	int64_t x999 = INT64_MAX;
	int16_t x1000 = INT16_MIN;
	volatile uint32_t t83 = 46272U;

	t83 = ((x997<<(x998/x999))%x1000);

	if (t83 != 92432U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x1029 = 3963604877LL;
	int8_t x1031 = INT8_MIN;
	int32_t x1032 = INT32_MAX;
	int64_t t84 = 532774222530235324LL;

	t84 = ((x1029<<(x1030/x1031))%x1032);

	if (t84 != 1816121230LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1037 = 150450LLU;
	static uint16_t x1038 = UINT16_MAX;
	uint64_t x1039 = 5244144260174463410LLU;
	static uint8_t x1040 = 17U;

	t85 = ((x1037<<(x1038/x1039))%x1040);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1041 = UINT32_MAX;
	static int8_t x1042 = -61;
	int16_t x1044 = INT16_MAX;
	volatile uint32_t t86 = 4512912U;

	t86 = ((x1041<<(x1042/x1043))%x1044);

	if (t86 != 3U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x1049 = UINT32_MAX;
	int8_t x1050 = INT8_MAX;
	uint8_t x1051 = 9U;
	volatile uint32_t t87 = 39597U;

	t87 = ((x1049<<(x1050/x1051))%x1052);

	if (t87 != 4294950912U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1053 = UINT32_MAX;
	static int32_t x1054 = INT32_MAX;
	static int32_t x1055 = INT32_MIN;
	static int16_t x1056 = 1;

	t88 = ((x1053<<(x1054/x1055))%x1056);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x1057 = 2;
	uint8_t x1060 = 8U;
	volatile int32_t t89 = 2167;

	t89 = ((x1057<<(x1058/x1059))%x1060);

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x1094 = 30820U;
	int64_t x1095 = INT64_MIN;
	uint32_t x1096 = 353U;

	t90 = ((x1093<<(x1094/x1095))%x1096);

	if (t90 != 186LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1113 = 6614;
	static uint32_t x1114 = 509088384U;
	uint64_t x1115 = UINT64_MAX;
	static int32_t t91 = 0;

	t91 = ((x1113<<(x1114/x1115))%x1116);

	if (t91 != 6614) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1118 = UINT16_MAX;
	int64_t x1119 = INT64_MAX;
	volatile uint64_t t92 = 0LLU;

	t92 = ((x1117<<(x1118/x1119))%x1120);

	if (t92 != 635LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1121 = 1506874U;
	static volatile int64_t x1122 = INT64_MIN;
	int64_t x1123 = INT64_MIN;
	uint64_t x1124 = UINT64_MAX;

	t93 = ((x1121<<(x1122/x1123))%x1124);

	if (t93 != 3013748LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x1129 = UINT16_MAX;
	uint8_t x1130 = UINT8_MAX;
	volatile uint8_t x1131 = UINT8_MAX;
	uint16_t x1132 = 1U;
	int32_t t94 = -10;

	t94 = ((x1129<<(x1130/x1131))%x1132);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x1145 = 17043070U;
	static volatile int16_t x1147 = INT16_MIN;
	int32_t x1148 = -1;
	volatile uint32_t t95 = 1052U;

	t95 = ((x1145<<(x1146/x1147))%x1148);

	if (t95 != 34086140U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x1149 = UINT32_MAX;
	uint32_t x1150 = 15U;
	uint64_t x1152 = 31438LLU;
	static volatile uint64_t t96 = 99134LLU;

	t96 = ((x1149<<(x1150/x1151))%x1152);

	if (t96 != 2049LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x1158 = -1;
	uint32_t x1159 = UINT32_MAX;
	volatile int64_t t97 = -1LL;

	t97 = ((x1157<<(x1158/x1159))%x1160);

	if (t97 != 268599759LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x1165 = INT16_MAX;
	int32_t x1167 = -1624396;
	uint16_t x1168 = UINT16_MAX;
	int32_t t98 = 0;

	t98 = ((x1165<<(x1166/x1167))%x1168);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1169 = INT8_MAX;
	volatile uint8_t x1171 = 4U;
	int64_t x1172 = -15193LL;
	static int64_t t99 = -3438167484LL;

	t99 = ((x1169<<(x1170/x1171))%x1172);

	if (t99 != 254LL) { NG(); } else { ; }
	
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

