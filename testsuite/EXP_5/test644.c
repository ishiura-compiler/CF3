#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = INT8_MAX;
int16_t x23 = INT16_MIN;
int32_t x56 = INT32_MIN;
int32_t x57 = 0;
int32_t x63 = INT32_MAX;
int32_t x91 = INT32_MIN;
volatile int32_t t11 = 3;
volatile int32_t x98 = -1;
int32_t x100 = INT32_MIN;
int8_t x102 = INT8_MIN;
uint8_t x139 = 15U;
volatile int32_t t16 = -63083;
volatile int64_t x147 = INT64_MIN;
int32_t x152 = 11;
int32_t x154 = 2075463;
uint16_t x169 = 0U;
int8_t x170 = INT8_MIN;
int32_t x178 = 222;
static int32_t x256 = INT32_MIN;
volatile int32_t t24 = 29945769;
uint8_t x278 = 28U;
uint32_t x281 = UINT32_MAX;
static uint32_t t26 = UINT32_MAX;
volatile int8_t x300 = 7;
volatile int32_t x303 = 49633033;
static int8_t x304 = INT8_MIN;
uint32_t x313 = 21U;
int64_t x315 = INT64_MIN;
uint32_t x318 = 1U;
static int64_t t32 = -16032712401853488LL;
uint32_t x325 = 1872U;
volatile uint64_t x326 = UINT64_MAX;
uint64_t x333 = UINT64_MAX;
volatile uint16_t x337 = UINT16_MAX;
int8_t x348 = 9;
uint32_t x362 = 83U;
int16_t x363 = INT16_MAX;
volatile uint64_t t38 = UINT64_MAX;
int64_t x373 = INT64_MAX;
volatile int64_t t40 = INT64_MAX;
int64_t x381 = 1148887397LL;
uint32_t x382 = 410321152U;
uint16_t x409 = UINT16_MAX;
volatile uint8_t x412 = 0U;
static int8_t x415 = INT8_MAX;
volatile int16_t x426 = -1;
int8_t x427 = -5;
uint16_t x445 = 3499U;
static volatile int64_t x470 = INT64_MIN;
int32_t x475 = INT32_MAX;
int32_t x479 = INT32_MIN;
static int32_t t50 = -265;
int32_t x482 = 140;
int64_t x486 = INT64_MIN;
uint32_t x495 = 37485474U;
uint8_t x496 = 3U;
int64_t x499 = -1LL;
uint32_t x500 = 21854U;
static uint8_t x509 = UINT8_MAX;
uint8_t x510 = 50U;
int32_t t55 = -783333;
static uint32_t x565 = 8U;
uint64_t x571 = 843394886308419686LLU;
volatile int64_t t62 = 1229255437448754058LL;
int32_t x575 = -14869952;
static int8_t x578 = INT8_MAX;
volatile int16_t x580 = INT16_MAX;
static uint64_t x586 = UINT64_MAX;
uint32_t x616 = 28157U;
int64_t x649 = INT64_MAX;
uint8_t x668 = 57U;
volatile int64_t x694 = 62029LL;
uint64_t x695 = 150358236LLU;
int32_t t69 = 1311744;
int16_t x698 = INT16_MIN;
int64_t x699 = 243567084410LL;
int16_t x717 = INT16_MAX;
static volatile int32_t x719 = INT32_MIN;
int64_t x758 = -1LL;
volatile int32_t t74 = 10259156;
int32_t t77 = -34146343;
uint32_t x790 = 58U;
int64_t x803 = -679394341329945LL;
uint32_t x821 = 1U;
int16_t x839 = -209;
uint16_t x840 = UINT16_MAX;
static volatile int32_t t82 = 3478;
volatile int64_t t83 = -16245734LL;
int32_t t85 = 124999;
int32_t t86 = 761;
volatile int32_t t87 = 2997;
int32_t x901 = 129290658;
static int8_t x902 = INT8_MIN;
static volatile uint32_t x908 = UINT32_MAX;
int64_t x918 = -1LL;
static uint8_t x933 = UINT8_MAX;
int32_t x935 = INT32_MIN;
int32_t t96 = 459;
uint8_t x995 = UINT8_MAX;
uint32_t t97 = UINT32_MAX;
uint32_t t99 = 4087962U;


void f0(void) {
	uint64_t x1 = 78LLU;
	uint8_t x2 = 12U;
	static volatile int8_t x3 = INT8_MAX;
	int8_t x4 = -22;
	uint64_t t0 = 46394023296LLU;

	t0 = (x1>>((x2/x3)&x4));

	if (t0 != 78LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 0LL;
	uint8_t x6 = 24U;
	int16_t x7 = INT16_MIN;
	uint8_t x8 = 20U;
	int64_t t1 = -336456286326522LL;

	t1 = (x5>>((x6/x7)&x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	static volatile int32_t x10 = -12812;
	int16_t x11 = INT16_MAX;
	static int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 0;

	t2 = (x9>>((x10/x11)&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = 708;
	int8_t x15 = INT8_MAX;
	volatile uint16_t x16 = 217U;
	int32_t t3 = -6267011;

	t3 = (x13>>((x14/x15)&x16));

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	int8_t x22 = INT8_MIN;
	volatile uint32_t x24 = 332855314U;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (x21>>((x22/x23)&x24));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x53 = 540551372093LLU;
	int8_t x54 = INT8_MIN;
	uint8_t x55 = UINT8_MAX;
	volatile uint64_t t5 = 119940842LLU;

	t5 = (x53>>((x54/x55)&x56));

	if (t5 != 540551372093LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x58 = INT8_MAX;
	int32_t x59 = 537718501;
	int64_t x60 = -1LL;
	volatile int32_t t6 = -258683623;

	t6 = (x57>>((x58/x59)&x60));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x61 = 72074U;
	volatile uint16_t x62 = 363U;
	int16_t x64 = -1;
	uint32_t t7 = 1442521196U;

	t7 = (x61>>((x62/x63)&x64));

	if (t7 != 72074U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x65 = 0;
	volatile int64_t x66 = -26399LL;
	volatile int64_t x67 = INT64_MIN;
	static int32_t x68 = INT32_MAX;
	volatile int32_t t8 = 5;

	t8 = (x65>>((x66/x67)&x68));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x73 = UINT16_MAX;
	int32_t x74 = INT32_MIN;
	volatile int32_t x75 = INT32_MIN;
	volatile int8_t x76 = 2;
	volatile int32_t t9 = 1648;

	t9 = (x73>>((x74/x75)&x76));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x89 = 1659;
	int8_t x90 = -1;
	uint32_t x92 = 324293U;
	volatile int32_t t10 = -41341128;

	t10 = (x89>>((x90/x91)&x92));

	if (t10 != 1659) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x93 = INT16_MAX;
	int16_t x94 = INT16_MIN;
	volatile int16_t x95 = -1;
	int32_t x96 = INT32_MIN;

	t11 = (x93>>((x94/x95)&x96));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x97 = 692359025U;
	int64_t x99 = INT64_MAX;
	static volatile uint32_t t12 = 1985135885U;

	t12 = (x97>>((x98/x99)&x100));

	if (t12 != 692359025U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int64_t x103 = 500LL;
	int8_t x104 = -1;
	int32_t t13 = 172;

	t13 = (x101>>((x102/x103)&x104));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x117 = INT8_MAX;
	uint8_t x118 = UINT8_MAX;
	static int32_t x119 = INT32_MAX;
	int16_t x120 = INT16_MIN;
	static volatile int32_t t14 = 126452;

	t14 = (x117>>((x118/x119)&x120));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x137 = 7832084151831448LLU;
	uint16_t x138 = UINT16_MAX;
	int32_t x140 = INT32_MIN;
	static volatile uint64_t t15 = 11307883076190423LLU;

	t15 = (x137>>((x138/x139)&x140));

	if (t15 != 7832084151831448LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x141 = UINT8_MAX;
	int64_t x142 = -51004LL;
	int32_t x143 = INT32_MIN;
	int32_t x144 = INT32_MIN;

	t16 = (x141>>((x142/x143)&x144));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x145 = 5470519717749LLU;
	int16_t x146 = INT16_MIN;
	int16_t x148 = INT16_MIN;
	uint64_t t17 = 22LLU;

	t17 = (x145>>((x146/x147)&x148));

	if (t17 != 5470519717749LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x149 = 93860746LLU;
	uint32_t x150 = UINT32_MAX;
	static uint8_t x151 = UINT8_MAX;
	uint64_t t18 = 37LLU;

	t18 = (x149>>((x150/x151)&x152));

	if (t18 != 46930373LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x153 = UINT16_MAX;
	uint32_t x155 = 101U;
	int16_t x156 = INT16_MIN;
	int32_t t19 = -1;

	t19 = (x153>>((x154/x155)&x156));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x171 = -1;
	volatile int16_t x172 = 0;
	int32_t t20 = -141370558;

	t20 = (x169>>((x170/x171)&x172));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x177 = INT64_MAX;
	int64_t x179 = INT64_MIN;
	uint32_t x180 = UINT32_MAX;
	volatile int64_t t21 = INT64_MAX;

	t21 = (x177>>((x178/x179)&x180));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x233 = UINT16_MAX;
	volatile uint64_t x234 = 247824478380339880LLU;
	int64_t x235 = INT64_MAX;
	uint16_t x236 = 2U;
	int32_t t22 = 1063286125;

	t22 = (x233>>((x234/x235)&x236));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x241 = INT8_MAX;
	int64_t x242 = -1LL;
	int8_t x243 = INT8_MIN;
	int64_t x244 = -1LL;
	volatile int32_t t23 = 1344506;

	t23 = (x241>>((x242/x243)&x244));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x253 = 1U;
	uint8_t x254 = UINT8_MAX;
	uint32_t x255 = 15207951U;

	t24 = (x253>>((x254/x255)&x256));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x277 = 55U;
	uint8_t x279 = 6U;
	volatile int8_t x280 = INT8_MAX;
	volatile int32_t t25 = -14165574;

	t25 = (x277>>((x278/x279)&x280));

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x282 = INT32_MIN;
	uint32_t x283 = UINT32_MAX;
	volatile uint32_t x284 = UINT32_MAX;

	t26 = (x281>>((x282/x283)&x284));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x293 = UINT8_MAX;
	uint64_t x294 = 273173334LLU;
	int64_t x295 = 16417322164LL;
	volatile int16_t x296 = INT16_MIN;
	static volatile int32_t t27 = -86040;

	t27 = (x293>>((x294/x295)&x296));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x297 = UINT64_MAX;
	int64_t x298 = INT64_MIN;
	volatile uint64_t x299 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = (x297>>((x298/x299)&x300));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x301 = 4U;
	int8_t x302 = -1;
	int32_t t29 = 576420784;

	t29 = (x301>>((x302/x303)&x304));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x305 = 2021409242U;
	int8_t x306 = INT8_MIN;
	static volatile int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MIN;
	uint32_t t30 = 29198455U;

	t30 = (x305>>((x306/x307)&x308));

	if (t30 != 2021409242U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x314 = -1LL;
	int16_t x316 = -178;
	static uint32_t t31 = 43134890U;

	t31 = (x313>>((x314/x315)&x316));

	if (t31 != 21U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x317 = 60257LL;
	uint64_t x319 = 3696904114621314896LLU;
	int64_t x320 = -1LL;

	t32 = (x317>>((x318/x319)&x320));

	if (t32 != 60257LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x327 = INT64_MAX;
	uint64_t x328 = 517556817LLU;
	volatile uint32_t t33 = 232U;

	t33 = (x325>>((x326/x327)&x328));

	if (t33 != 1872U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x334 = -142;
	uint64_t x335 = UINT64_MAX;
	int32_t x336 = INT32_MIN;
	static volatile uint64_t t34 = UINT64_MAX;

	t34 = (x333>>((x334/x335)&x336));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x338 = -1015806;
	volatile int16_t x339 = INT16_MIN;
	uint8_t x340 = 0U;
	volatile int32_t t35 = 49653577;

	t35 = (x337>>((x338/x339)&x340));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x341 = 95U;
	int8_t x342 = INT8_MAX;
	int64_t x343 = INT64_MAX;
	int64_t x344 = INT64_MIN;
	volatile int32_t t36 = 2022972;

	t36 = (x341>>((x342/x343)&x344));

	if (t36 != 95) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x345 = INT32_MAX;
	static volatile int32_t x346 = -62912;
	int16_t x347 = INT16_MIN;
	static volatile int32_t t37 = 1386904;

	t37 = (x345>>((x346/x347)&x348));

	if (t37 != 1073741823) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x361 = UINT64_MAX;
	int8_t x364 = -3;

	t38 = (x361>>((x362/x363)&x364));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x369 = INT64_MAX;
	static volatile int8_t x370 = -2;
	volatile int8_t x371 = INT8_MIN;
	uint8_t x372 = UINT8_MAX;
	volatile int64_t t39 = INT64_MAX;

	t39 = (x369>>((x370/x371)&x372));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x374 = UINT8_MAX;
	uint16_t x375 = UINT16_MAX;
	int32_t x376 = INT32_MIN;

	t40 = (x373>>((x374/x375)&x376));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x383 = INT16_MIN;
	static uint32_t x384 = 703U;
	volatile int64_t t41 = 233162195016862LL;

	t41 = (x381>>((x382/x383)&x384));

	if (t41 != 1148887397LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x389 = INT8_MAX;
	int8_t x390 = 0;
	int32_t x391 = INT32_MAX;
	int8_t x392 = INT8_MIN;
	int32_t t42 = -51842176;

	t42 = (x389>>((x390/x391)&x392));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x410 = -1;
	uint8_t x411 = UINT8_MAX;
	int32_t t43 = -341;

	t43 = (x409>>((x410/x411)&x412));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x413 = 5043U;
	uint8_t x414 = 0U;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t44 = -2;

	t44 = (x413>>((x414/x415)&x416));

	if (t44 != 5043) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x425 = 19749U;
	static int64_t x428 = -1LL;
	uint32_t t45 = 2U;

	t45 = (x425>>((x426/x427)&x428));

	if (t45 != 19749U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x429 = 31;
	static int32_t x430 = 138;
	uint32_t x431 = UINT32_MAX;
	int16_t x432 = 59;
	int32_t t46 = -41;

	t46 = (x429>>((x430/x431)&x432));

	if (t46 != 31) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x446 = 3U;
	volatile int8_t x447 = INT8_MAX;
	uint32_t x448 = UINT32_MAX;
	int32_t t47 = -4279;

	t47 = (x445>>((x446/x447)&x448));

	if (t47 != 3499) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x469 = 1;
	int8_t x471 = INT8_MIN;
	static volatile uint8_t x472 = 8U;
	volatile int32_t t48 = -7440806;

	t48 = (x469>>((x470/x471)&x472));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x473 = 242LL;
	static uint16_t x474 = 7472U;
	static uint16_t x476 = UINT16_MAX;
	volatile int64_t t49 = 343444666983183168LL;

	t49 = (x473>>((x474/x475)&x476));

	if (t49 != 242LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x477 = INT8_MAX;
	static volatile int16_t x478 = INT16_MAX;
	int64_t x480 = 58894746078080LL;

	t50 = (x477>>((x478/x479)&x480));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x481 = 18142449U;
	int16_t x483 = INT16_MAX;
	static int8_t x484 = INT8_MIN;
	volatile uint32_t t51 = 954265U;

	t51 = (x481>>((x482/x483)&x484));

	if (t51 != 18142449U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x485 = UINT8_MAX;
	uint64_t x487 = 751664017320LLU;
	int32_t x488 = INT32_MIN;
	volatile int32_t t52 = 1175;

	t52 = (x485>>((x486/x487)&x488));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x493 = 901547937U;
	int8_t x494 = INT8_MIN;
	volatile uint32_t t53 = 0U;

	t53 = (x493>>((x494/x495)&x496));

	if (t53 != 225386984U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x497 = UINT64_MAX;
	int32_t x498 = INT32_MAX;
	uint64_t t54 = UINT64_MAX;

	t54 = (x497>>((x498/x499)&x500));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x511 = INT16_MIN;
	static volatile int16_t x512 = INT16_MIN;

	t55 = (x509>>((x510/x511)&x512));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x517 = INT64_MAX;
	volatile uint32_t x518 = 210965585U;
	int32_t x519 = INT32_MIN;
	int8_t x520 = -1;
	int64_t t56 = INT64_MAX;

	t56 = (x517>>((x518/x519)&x520));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x521 = 0U;
	int8_t x522 = INT8_MIN;
	int32_t x523 = -259983334;
	volatile int8_t x524 = INT8_MIN;
	int32_t t57 = -15212;

	t57 = (x521>>((x522/x523)&x524));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x525 = INT32_MAX;
	volatile int8_t x526 = -1;
	uint64_t x527 = UINT64_MAX;
	int32_t x528 = INT32_MIN;
	int32_t t58 = INT32_MAX;

	t58 = (x525>>((x526/x527)&x528));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x549 = UINT16_MAX;
	int32_t x550 = -1;
	volatile int16_t x551 = INT16_MIN;
	uint32_t x552 = UINT32_MAX;
	static volatile int32_t t59 = 1;

	t59 = (x549>>((x550/x551)&x552));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x561 = 1525362U;
	int8_t x562 = -3;
	uint16_t x563 = UINT16_MAX;
	volatile uint32_t x564 = UINT32_MAX;
	volatile uint32_t t60 = 4U;

	t60 = (x561>>((x562/x563)&x564));

	if (t60 != 1525362U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x566 = 4;
	int16_t x567 = -1;
	static int8_t x568 = 0;
	uint32_t t61 = 490767U;

	t61 = (x565>>((x566/x567)&x568));

	if (t61 != 8U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x569 = 889104379267972830LL;
	volatile int8_t x570 = -1;
	uint32_t x572 = UINT32_MAX;

	t62 = (x569>>((x570/x571)&x572));

	if (t62 != 423958005556LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x573 = 13LLU;
	int64_t x574 = -1LL;
	int64_t x576 = -1LL;
	volatile uint64_t t63 = 343220004017419385LLU;

	t63 = (x573>>((x574/x575)&x576));

	if (t63 != 13LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x577 = 255259317U;
	uint32_t x579 = 496053U;
	volatile uint32_t t64 = 577U;

	t64 = (x577>>((x578/x579)&x580));

	if (t64 != 255259317U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x585 = 1062680140840159310LLU;
	int8_t x587 = 1;
	volatile int8_t x588 = 1;
	uint64_t t65 = 67382412223008978LLU;

	t65 = (x585>>((x586/x587)&x588));

	if (t65 != 531340070420079655LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x613 = INT32_MAX;
	static volatile uint32_t x614 = 351655U;
	int16_t x615 = INT16_MAX;
	volatile int32_t t66 = 7956;

	t66 = (x613>>((x614/x615)&x616));

	if (t66 != 8388607) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x650 = 47786LLU;
	static uint8_t x651 = UINT8_MAX;
	uint16_t x652 = 9U;
	int64_t t67 = -25902345712572060LL;

	t67 = (x649>>((x650/x651)&x652));

	if (t67 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x665 = 49U;
	int32_t x666 = -83848180;
	uint64_t x667 = 6169893LLU;
	static volatile int32_t t68 = -124415783;

	t68 = (x665>>((x666/x667)&x668));

	if (t68 != 49) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x693 = 33630;
	int32_t x696 = 0;

	t69 = (x693>>((x694/x695)&x696));

	if (t69 != 33630) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x697 = 0U;
	volatile int32_t x700 = -1;
	static volatile int32_t t70 = -20569;

	t70 = (x697>>((x698/x699)&x700));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x701 = UINT16_MAX;
	uint64_t x702 = 3624766LLU;
	volatile uint32_t x703 = UINT32_MAX;
	static volatile uint64_t x704 = 644LLU;
	volatile int32_t t71 = -254522157;

	t71 = (x701>>((x702/x703)&x704));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x709 = UINT8_MAX;
	volatile int32_t x710 = -1;
	volatile int64_t x711 = INT64_MIN;
	uint8_t x712 = 11U;
	int32_t t72 = 343414621;

	t72 = (x709>>((x710/x711)&x712));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x718 = INT64_MIN;
	static int8_t x720 = INT8_MAX;
	int32_t t73 = 5;

	t73 = (x717>>((x718/x719)&x720));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x757 = 272041187;
	int64_t x759 = -1125LL;
	int16_t x760 = -2163;

	t74 = (x757>>((x758/x759)&x760));

	if (t74 != 272041187) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x765 = 82U;
	static int32_t x766 = -358266;
	int32_t x767 = INT32_MAX;
	int32_t x768 = INT32_MIN;
	volatile int32_t t75 = 932686999;

	t75 = (x765>>((x766/x767)&x768));

	if (t75 != 82) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x777 = INT16_MAX;
	uint16_t x778 = 2904U;
	int16_t x779 = INT16_MIN;
	static uint8_t x780 = 47U;
	volatile int32_t t76 = -3;

	t76 = (x777>>((x778/x779)&x780));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x785 = 621;
	uint64_t x786 = 2533646600324787915LLU;
	uint8_t x787 = 5U;
	uint32_t x788 = 85U;

	t77 = (x785>>((x786/x787)&x788));

	if (t77 != 19) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x789 = 2623833;
	int8_t x791 = INT8_MIN;
	int32_t x792 = INT32_MIN;
	static int32_t t78 = 911881521;

	t78 = (x789>>((x790/x791)&x792));

	if (t78 != 2623833) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x801 = UINT16_MAX;
	static volatile uint32_t x802 = 1009564794U;
	volatile int32_t x804 = INT32_MIN;
	int32_t t79 = 7712382;

	t79 = (x801>>((x802/x803)&x804));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x805 = 0LL;
	int8_t x806 = 10;
	volatile int16_t x807 = -10892;
	int64_t x808 = INT64_MIN;
	int64_t t80 = 0LL;

	t80 = (x805>>((x806/x807)&x808));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x822 = 32341U;
	static int16_t x823 = INT16_MAX;
	int32_t x824 = 2;
	uint32_t t81 = 30274U;

	t81 = (x821>>((x822/x823)&x824));

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x837 = 21;
	uint16_t x838 = 2U;

	t82 = (x837>>((x838/x839)&x840));

	if (t82 != 21) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x845 = 49454426LL;
	uint64_t x846 = 2033708444691LLU;
	int8_t x847 = INT8_MIN;
	static volatile int64_t x848 = INT64_MIN;

	t83 = (x845>>((x846/x847)&x848));

	if (t83 != 49454426LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x849 = INT16_MAX;
	volatile int32_t x850 = -1;
	int64_t x851 = INT64_MAX;
	static uint64_t x852 = UINT64_MAX;
	int32_t t84 = 1;

	t84 = (x849>>((x850/x851)&x852));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x857 = 2;
	int8_t x858 = INT8_MIN;
	volatile int16_t x859 = INT16_MIN;
	int64_t x860 = INT64_MIN;

	t85 = (x857>>((x858/x859)&x860));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x861 = 0;
	volatile int8_t x862 = -1;
	static volatile int16_t x863 = INT16_MAX;
	int64_t x864 = INT64_MAX;

	t86 = (x861>>((x862/x863)&x864));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x885 = 10848;
	volatile int8_t x886 = -12;
	static int8_t x887 = -1;
	int32_t x888 = -1;

	t87 = (x885>>((x886/x887)&x888));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x897 = 170303U;
	volatile int16_t x898 = -116;
	int64_t x899 = INT64_MIN;
	static volatile uint64_t x900 = UINT64_MAX;
	uint32_t t88 = 836516U;

	t88 = (x897>>((x898/x899)&x900));

	if (t88 != 170303U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x903 = 166111U;
	uint32_t x904 = 2679U;
	volatile int32_t t89 = -26654;

	t89 = (x901>>((x902/x903)&x904));

	if (t89 != 129290658) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x905 = 499554940LLU;
	int64_t x906 = INT64_MAX;
	static int16_t x907 = INT16_MIN;
	uint64_t t90 = 77787488LLU;

	t90 = (x905>>((x906/x907)&x908));

	if (t90 != 249777470LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x909 = INT16_MAX;
	volatile int32_t x910 = -22;
	static volatile uint16_t x911 = 90U;
	int32_t x912 = INT32_MIN;
	static volatile int32_t t91 = 4712;

	t91 = (x909>>((x910/x911)&x912));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x917 = 3281584573556019614LLU;
	volatile uint8_t x919 = 15U;
	static int16_t x920 = INT16_MIN;
	volatile uint64_t t92 = 8039593370897LLU;

	t92 = (x917>>((x918/x919)&x920));

	if (t92 != 3281584573556019614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x934 = -3;
	int8_t x936 = -1;
	int32_t t93 = -686603;

	t93 = (x933>>((x934/x935)&x936));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x945 = 101U;
	int16_t x946 = -10;
	int32_t x947 = -1047197985;
	volatile int64_t x948 = INT64_MIN;
	volatile int32_t t94 = 2;

	t94 = (x945>>((x946/x947)&x948));

	if (t94 != 101) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x957 = INT8_MAX;
	static volatile int8_t x958 = -1;
	int32_t x959 = -1;
	int32_t x960 = 139;
	int32_t t95 = 875;

	t95 = (x957>>((x958/x959)&x960));

	if (t95 != 63) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x973 = 3U;
	int16_t x974 = INT16_MIN;
	int64_t x975 = 1LL;
	uint8_t x976 = 28U;

	t96 = (x973>>((x974/x975)&x976));

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x993 = UINT32_MAX;
	static int8_t x994 = 1;
	volatile uint16_t x996 = UINT16_MAX;

	t97 = (x993>>((x994/x995)&x996));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x997 = UINT64_MAX;
	uint8_t x998 = 2U;
	int16_t x999 = INT16_MIN;
	volatile int32_t x1000 = 86801827;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x997>>((x998/x999)&x1000));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1001 = 987330218U;
	int32_t x1002 = INT32_MAX;
	int8_t x1003 = -1;
	static int32_t x1004 = INT32_MAX;

	t99 = (x1001>>((x1002/x1003)&x1004));

	if (t99 != 493665109U) { NG(); } else { ; }
	
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

