#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
int16_t x16 = -1148;
volatile int64_t x23 = -1LL;
int16_t x40 = 0;
uint64_t x49 = 9838LLU;
static int8_t x61 = INT8_MAX;
int32_t t8 = 0;
int8_t x70 = INT8_MIN;
uint8_t x78 = UINT8_MAX;
volatile int32_t t12 = 3;
int32_t t14 = -2034;
int16_t x93 = -1;
uint64_t x100 = 21882565882958023LLU;
uint8_t x114 = 10U;
uint32_t x126 = UINT32_MAX;
static uint64_t x127 = 14387962071LLU;
int32_t x128 = 73;
uint16_t x135 = 1969U;
int32_t x139 = INT32_MIN;
volatile int16_t x140 = INT16_MIN;
int32_t t21 = 1949894;
int8_t x141 = -26;
int64_t x144 = INT64_MAX;
static volatile int64_t t22 = 12942LL;
static int32_t t23 = 42061469;
uint8_t x157 = 2U;
static uint32_t x160 = 887727U;
volatile uint32_t t24 = 222U;
int8_t x170 = INT8_MAX;
static volatile int64_t t26 = 7573898823LL;
static volatile int32_t t27 = 23757;
uint16_t x190 = 995U;
uint16_t x192 = 2U;
int32_t t28 = -10;
int64_t x197 = 79658680LL;
volatile int64_t x210 = INT64_MAX;
int8_t x212 = -29;
int64_t t31 = 1056519483833494512LL;
int16_t x272 = -1;
static uint32_t x281 = 6401U;
int64_t x283 = -1LL;
uint32_t t36 = 449785U;
int8_t x289 = INT8_MIN;
int32_t x310 = -1;
int8_t x314 = INT8_MIN;
static int32_t x322 = INT32_MIN;
uint8_t x340 = 16U;
volatile uint32_t t44 = 5532602U;
static int16_t x344 = INT16_MIN;
static uint8_t x351 = 7U;
uint32_t t47 = 5U;
volatile uint16_t x353 = 121U;
uint16_t x365 = 902U;
uint16_t x367 = 26U;
int64_t x368 = 3556538030062226LL;
static int32_t x388 = -244915133;
volatile int32_t t52 = -1;
volatile int16_t x390 = 4693;
int32_t t53 = 18996;
volatile int8_t x417 = INT8_MIN;
volatile int32_t t56 = -611535;
uint64_t x461 = 15LLU;
volatile uint64_t t57 = 30914644239851882LLU;
int16_t x476 = INT16_MIN;
static int32_t t58 = 2751175;
static int16_t x490 = INT16_MIN;
static uint16_t x492 = UINT16_MAX;
static int16_t x507 = -1;
static int8_t x513 = INT8_MIN;
static int16_t x515 = -1;
int8_t x516 = INT8_MIN;
int8_t x526 = INT8_MIN;
int64_t x538 = -2448609230789LL;
static int32_t x541 = INT32_MAX;
static int32_t x557 = INT32_MAX;
int32_t x560 = INT32_MAX;
int32_t t68 = 3;
static int16_t x566 = INT16_MIN;
int32_t t71 = 103562;
uint64_t t72 = 110423183LLU;
int16_t x618 = INT16_MIN;
volatile int8_t x624 = -1;
uint32_t x645 = UINT32_MAX;
uint64_t x646 = 43586LLU;
volatile uint32_t t78 = 31715U;
volatile int64_t x654 = INT64_MIN;
static volatile uint16_t x667 = 802U;
uint32_t x679 = 301037U;
int64_t t84 = 9268373982821LL;
static int16_t x698 = -1;
int32_t x706 = INT32_MIN;
uint16_t x707 = UINT16_MAX;
uint32_t x726 = 1844854894U;
uint8_t x730 = 115U;
volatile int16_t x745 = -1;
volatile uint32_t t92 = 44365847U;
uint64_t t96 = 4241LLU;
int16_t x784 = -1;
volatile int64_t t98 = -1573377LL;
static uint32_t x808 = 92004U;


void f0(void) {
	uint8_t x1 = 1U;
	int64_t x3 = INT64_MAX;
	volatile int32_t x4 = -1;
	static volatile int32_t t0 = 1490750;

	t0 = ((x1%(x2<=x3))-x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint64_t x6 = 28983LLU;
	uint64_t x7 = 46404803888039LLU;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = 17;

	t1 = ((x5%(x6<=x7))-x8);

	if (t1 != -255) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int8_t x14 = INT8_MIN;
	static int16_t x15 = -5;
	int64_t t2 = -39974425LL;

	t2 = ((x13%(x14<=x15))-x16);

	if (t2 != 1148LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	int32_t x22 = -28139;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t3 = 67244U;

	t3 = ((x21%(x22<=x23))-x24);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x25 = -1LL;
	int16_t x26 = -1;
	int32_t x27 = 72533669;
	volatile int8_t x28 = 3;
	int64_t t4 = 2182032072LL;

	t4 = ((x25%(x26<=x27))-x28);

	if (t4 != -3LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = -422766210577207024LL;
	int16_t x39 = -1;
	static volatile int32_t t5 = 1567;

	t5 = ((x37%(x38<=x39))-x40);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MIN;
	volatile uint8_t x47 = 4U;
	uint32_t x48 = UINT32_MAX;
	static uint32_t t6 = 82U;

	t6 = ((x45%(x46<=x47))-x48);

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x50 = -4;
	static int16_t x51 = 14;
	uint16_t x52 = 6U;
	volatile uint64_t t7 = 64806606308717LLU;

	t7 = ((x49%(x50<=x51))-x52);

	if (t7 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x62 = -58482752584696LL;
	static volatile int32_t x63 = 14634447;
	volatile int32_t x64 = -219904;

	t8 = ((x61%(x62<=x63))-x64);

	if (t8 != 219904) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x65 = 9;
	int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MIN;
	volatile int32_t t9 = -213332398;

	t9 = ((x65%(x66<=x67))-x68);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x69 = 307784U;
	int32_t x71 = 1777289;
	static int64_t x72 = INT64_MAX;
	volatile int64_t t10 = 2996471LL;

	t10 = ((x69%(x70<=x71))-x72);

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x77 = -62;
	uint64_t x79 = 1449864513347LLU;
	uint16_t x80 = 1701U;
	static int32_t t11 = -103;

	t11 = ((x77%(x78<=x79))-x80);

	if (t11 != -1701) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = -1;
	volatile int8_t x83 = INT8_MAX;
	volatile int8_t x84 = 45;

	t12 = ((x81%(x82<=x83))-x84);

	if (t12 != -45) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MIN;
	static int64_t x87 = 3959LL;
	volatile int8_t x88 = 3;
	int32_t t13 = 80199243;

	t13 = ((x85%(x86<=x87))-x88);

	if (t13 != -3) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x89 = 58U;
	uint64_t x90 = 535135324958LLU;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = UINT16_MAX;

	t14 = ((x89%(x90<=x91))-x92);

	if (t14 != -65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x94 = 0U;
	volatile uint64_t x95 = 97872446645LLU;
	static int64_t x96 = 10LL;
	volatile int64_t t15 = 5LL;

	t15 = ((x93%(x94<=x95))-x96);

	if (t15 != -10LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x97 = -1;
	int16_t x98 = -12045;
	int8_t x99 = 32;
	static volatile uint64_t t16 = 17216551231050LLU;

	t16 = ((x97%(x98<=x99))-x100);

	if (t16 != 18424861507826593593LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x113 = INT16_MIN;
	volatile uint32_t x115 = 126930582U;
	int16_t x116 = INT16_MIN;
	int32_t t17 = -21469635;

	t17 = ((x113%(x114<=x115))-x116);

	if (t17 != 32768) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x125 = INT64_MIN;
	volatile int64_t t18 = 1LL;

	t18 = ((x125%(x126<=x127))-x128);

	if (t18 != -73LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x129 = 20092LL;
	static int8_t x130 = INT8_MIN;
	volatile int8_t x131 = INT8_MAX;
	volatile int32_t x132 = -1;
	int64_t t19 = 1904298771670671LL;

	t19 = ((x129%(x130<=x131))-x132);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x133 = UINT16_MAX;
	volatile int8_t x134 = -1;
	uint8_t x136 = 90U;
	static volatile int32_t t20 = 521748727;

	t20 = ((x133%(x134<=x135))-x136);

	if (t20 != -90) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x137 = 1;
	volatile int64_t x138 = INT64_MIN;

	t21 = ((x137%(x138<=x139))-x140);

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x142 = INT16_MIN;
	uint16_t x143 = UINT16_MAX;

	t22 = ((x141%(x142<=x143))-x144);

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x153 = 1014U;
	int8_t x154 = -1;
	int64_t x155 = 458969930574216395LL;
	int16_t x156 = -1;

	t23 = ((x153%(x154<=x155))-x156);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x158 = INT64_MIN;
	uint32_t x159 = UINT32_MAX;

	t24 = ((x157%(x158<=x159))-x160);

	if (t24 != 4294079569U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x165 = -1;
	int16_t x166 = -1;
	int16_t x167 = 11017;
	uint16_t x168 = 225U;
	volatile int32_t t25 = -62;

	t25 = ((x165%(x166<=x167))-x168);

	if (t25 != -225) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x169 = 104U;
	uint16_t x171 = UINT16_MAX;
	volatile int64_t x172 = 0LL;

	t26 = ((x169%(x170<=x171))-x172);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x181 = INT32_MAX;
	volatile int8_t x182 = INT8_MIN;
	int8_t x183 = -3;
	volatile int32_t x184 = -1;

	t27 = ((x181%(x182<=x183))-x184);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x189 = INT8_MAX;
	uint64_t x191 = 1947LLU;

	t28 = ((x189%(x190<=x191))-x192);

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x198 = INT8_MIN;
	static uint64_t x199 = UINT64_MAX;
	int8_t x200 = INT8_MAX;
	int64_t t29 = -284LL;

	t29 = ((x197%(x198<=x199))-x200);

	if (t29 != -127LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x209 = INT32_MIN;
	volatile int64_t x211 = INT64_MAX;
	volatile int32_t t30 = 71;

	t30 = ((x209%(x210<=x211))-x212);

	if (t30 != 29) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x217 = -1LL;
	static uint32_t x218 = 120U;
	int16_t x219 = 13437;
	volatile int16_t x220 = 63;

	t31 = ((x217%(x218<=x219))-x220);

	if (t31 != -63LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x225 = 1662U;
	uint16_t x226 = UINT16_MAX;
	uint64_t x227 = 61466895LLU;
	int32_t x228 = INT32_MAX;
	int32_t t32 = 52225560;

	t32 = ((x225%(x226<=x227))-x228);

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x269 = 1949465LLU;
	int64_t x270 = -817704893LL;
	static int64_t x271 = 363994287LL;
	static uint64_t t33 = 26126762155560392LLU;

	t33 = ((x269%(x270<=x271))-x272);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x273 = -3;
	static int64_t x274 = INT64_MIN;
	uint32_t x275 = 274306U;
	int8_t x276 = 5;
	int32_t t34 = 488529;

	t34 = ((x273%(x274<=x275))-x276);

	if (t34 != -5) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x277 = 2515U;
	int8_t x278 = INT8_MIN;
	int64_t x279 = -1LL;
	static int64_t x280 = -1LL;
	volatile int64_t t35 = -6151847932157LL;

	t35 = ((x277%(x278<=x279))-x280);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x282 = -1;
	uint32_t x284 = 7U;

	t36 = ((x281%(x282<=x283))-x284);

	if (t36 != 4294967289U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x290 = INT16_MIN;
	int64_t x291 = -1LL;
	int32_t x292 = 76375648;
	int32_t t37 = 263;

	t37 = ((x289%(x290<=x291))-x292);

	if (t37 != -76375648) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x293 = 1200;
	int32_t x294 = INT32_MIN;
	static uint16_t x295 = UINT16_MAX;
	int16_t x296 = 182;
	volatile int32_t t38 = 6272962;

	t38 = ((x293%(x294<=x295))-x296);

	if (t38 != -182) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x309 = 77U;
	int32_t x311 = 390135;
	volatile uint8_t x312 = UINT8_MAX;
	volatile int32_t t39 = 2567;

	t39 = ((x309%(x310<=x311))-x312);

	if (t39 != -255) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x313 = -1;
	int16_t x315 = 78;
	uint16_t x316 = 925U;
	volatile int32_t t40 = -252;

	t40 = ((x313%(x314<=x315))-x316);

	if (t40 != -925) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x321 = 26682832U;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = INT8_MAX;
	volatile uint32_t t41 = 1839U;

	t41 = ((x321%(x322<=x323))-x324);

	if (t41 != 4294967169U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x325 = 6;
	volatile int8_t x326 = INT8_MIN;
	int8_t x327 = 0;
	int16_t x328 = 136;
	int32_t t42 = -632841;

	t42 = ((x325%(x326<=x327))-x328);

	if (t42 != -136) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x333 = -1LL;
	volatile int8_t x334 = INT8_MIN;
	uint16_t x335 = 1U;
	int64_t x336 = INT64_MAX;
	int64_t t43 = -110LL;

	t43 = ((x333%(x334<=x335))-x336);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x337 = 17U;
	int8_t x338 = INT8_MAX;
	int16_t x339 = 6244;

	t44 = ((x337%(x338<=x339))-x340);

	if (t44 != 4294967280U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x341 = 4;
	volatile uint32_t x342 = UINT32_MAX;
	uint32_t x343 = UINT32_MAX;
	volatile int32_t t45 = -1;

	t45 = ((x341%(x342<=x343))-x344);

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x345 = 90U;
	int16_t x346 = 1;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = INT32_MAX;
	volatile int32_t t46 = -34479;

	t46 = ((x345%(x346<=x347))-x348);

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x350 = INT16_MIN;
	static volatile uint16_t x352 = UINT16_MAX;

	t47 = ((x349%(x350<=x351))-x352);

	if (t47 != 4294901761U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x354 = -1LL;
	static int32_t x355 = INT32_MAX;
	static volatile int32_t x356 = -1;
	int32_t t48 = 362296334;

	t48 = ((x353%(x354<=x355))-x356);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x366 = -8;
	int64_t t49 = 24993093071831626LL;

	t49 = ((x365%(x366<=x367))-x368);

	if (t49 != -3556538030062226LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x369 = UINT32_MAX;
	volatile int64_t x370 = INT64_MIN;
	int32_t x371 = INT32_MAX;
	int32_t x372 = INT32_MAX;
	uint32_t t50 = 113918039U;

	t50 = ((x369%(x370<=x371))-x372);

	if (t50 != 2147483649U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x377 = 0U;
	int64_t x378 = INT64_MIN;
	volatile int32_t x379 = INT32_MIN;
	uint16_t x380 = 490U;
	static volatile int32_t t51 = -239564271;

	t51 = ((x377%(x378<=x379))-x380);

	if (t51 != -490) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x385 = -52;
	volatile int32_t x386 = -1;
	int32_t x387 = -1;

	t52 = ((x385%(x386<=x387))-x388);

	if (t52 != 244915133) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x389 = INT16_MIN;
	int32_t x391 = INT32_MAX;
	volatile uint8_t x392 = 92U;

	t53 = ((x389%(x390<=x391))-x392);

	if (t53 != -92) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x405 = INT32_MIN;
	int32_t x406 = INT32_MIN;
	volatile int16_t x407 = -1;
	int64_t x408 = INT64_MAX;
	volatile int64_t t54 = 537664LL;

	t54 = ((x405%(x406<=x407))-x408);

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x409 = -1;
	static int32_t x410 = INT32_MIN;
	uint32_t x411 = UINT32_MAX;
	volatile int16_t x412 = -90;
	volatile int32_t t55 = 0;

	t55 = ((x409%(x410<=x411))-x412);

	if (t55 != 90) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x418 = UINT16_MAX;
	volatile uint64_t x419 = 4590903LLU;
	int16_t x420 = 0;

	t56 = ((x417%(x418<=x419))-x420);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x462 = -51794806;
	static int64_t x463 = -1LL;
	uint8_t x464 = 5U;

	t57 = ((x461%(x462<=x463))-x464);

	if (t57 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x473 = -1;
	int64_t x474 = INT64_MIN;
	static int64_t x475 = INT64_MAX;

	t58 = ((x473%(x474<=x475))-x476);

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x481 = INT64_MIN;
	int8_t x482 = INT8_MIN;
	int8_t x483 = 1;
	int32_t x484 = INT32_MIN;
	int64_t t59 = 5208823LL;

	t59 = ((x481%(x482<=x483))-x484);

	if (t59 != 2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x489 = INT64_MIN;
	static int16_t x491 = -6;
	volatile int64_t t60 = 384739785682LL;

	t60 = ((x489%(x490<=x491))-x492);

	if (t60 != -65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x505 = INT16_MIN;
	int16_t x506 = INT16_MIN;
	uint32_t x508 = 288151868U;
	volatile uint32_t t61 = 435904210U;

	t61 = ((x505%(x506<=x507))-x508);

	if (t61 != 4006815428U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x514 = -8174629370LL;
	volatile int32_t t62 = 381804;

	t62 = ((x513%(x514<=x515))-x516);

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x517 = INT32_MIN;
	volatile uint64_t x518 = 169054LLU;
	volatile int8_t x519 = INT8_MIN;
	int32_t x520 = -1;
	int32_t t63 = 1;

	t63 = ((x517%(x518<=x519))-x520);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x525 = 302921558U;
	int8_t x527 = -1;
	uint32_t x528 = 748738U;
	volatile uint32_t t64 = 20027U;

	t64 = ((x525%(x526<=x527))-x528);

	if (t64 != 4294218558U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x533 = INT16_MIN;
	int64_t x534 = INT64_MIN;
	volatile uint64_t x535 = UINT64_MAX;
	int64_t x536 = -1LL;
	volatile int64_t t65 = 11714526311702LL;

	t65 = ((x533%(x534<=x535))-x536);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x537 = INT16_MAX;
	int8_t x539 = -30;
	int16_t x540 = -1;
	int32_t t66 = 6153483;

	t66 = ((x537%(x538<=x539))-x540);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x542 = 1U;
	int32_t x543 = INT32_MAX;
	int64_t x544 = -1LL;
	int64_t t67 = 106428772410LL;

	t67 = ((x541%(x542<=x543))-x544);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x558 = 168548LLU;
	int16_t x559 = -1;

	t68 = ((x557%(x558<=x559))-x560);

	if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x565 = INT64_MIN;
	int8_t x567 = INT8_MIN;
	int16_t x568 = -1;
	static int64_t t69 = 625460LL;

	t69 = ((x565%(x566<=x567))-x568);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x569 = 0;
	static volatile int64_t x570 = -3280743471432567LL;
	uint8_t x571 = UINT8_MAX;
	int8_t x572 = INT8_MAX;
	int32_t t70 = -1298638;

	t70 = ((x569%(x570<=x571))-x572);

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x593 = 809201589;
	int64_t x594 = INT64_MIN;
	uint32_t x595 = 42701U;
	int8_t x596 = INT8_MIN;

	t71 = ((x593%(x594<=x595))-x596);

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x597 = -1;
	static volatile uint64_t x598 = UINT64_MAX;
	static int16_t x599 = -1;
	uint64_t x600 = UINT64_MAX;

	t72 = ((x597%(x598<=x599))-x600);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x609 = 2778U;
	static volatile int16_t x610 = 3524;
	int32_t x611 = INT32_MAX;
	int32_t x612 = -63836258;
	static volatile uint32_t t73 = 0U;

	t73 = ((x609%(x610<=x611))-x612);

	if (t73 != 63836258U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x617 = INT64_MAX;
	uint8_t x619 = 78U;
	volatile uint8_t x620 = 11U;
	static volatile int64_t t74 = 6LL;

	t74 = ((x617%(x618<=x619))-x620);

	if (t74 != -11LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x621 = -359857899;
	uint16_t x622 = 3U;
	static uint32_t x623 = UINT32_MAX;
	volatile int32_t t75 = 26;

	t75 = ((x621%(x622<=x623))-x624);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x637 = -1;
	uint8_t x638 = UINT8_MAX;
	int32_t x639 = 44857191;
	static int8_t x640 = INT8_MAX;
	volatile int32_t t76 = 146;

	t76 = ((x637%(x638<=x639))-x640);

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x641 = INT64_MIN;
	static int64_t x642 = INT64_MIN;
	volatile int32_t x643 = -1;
	int8_t x644 = INT8_MIN;
	int64_t t77 = 320842949517LL;

	t77 = ((x641%(x642<=x643))-x644);

	if (t77 != 128LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x647 = INT32_MIN;
	uint8_t x648 = 16U;

	t78 = ((x645%(x646<=x647))-x648);

	if (t78 != 4294967280U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x649 = INT16_MIN;
	volatile uint64_t x650 = 4306623LLU;
	volatile uint64_t x651 = 15116224168806273LLU;
	volatile uint8_t x652 = 12U;
	int32_t t79 = -43;

	t79 = ((x649%(x650<=x651))-x652);

	if (t79 != -12) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x653 = 0U;
	int16_t x655 = INT16_MIN;
	int16_t x656 = INT16_MAX;
	int32_t t80 = 71238566;

	t80 = ((x653%(x654<=x655))-x656);

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x665 = -1;
	volatile int16_t x666 = INT16_MIN;
	volatile uint32_t x668 = 1366200U;
	volatile uint32_t t81 = 37U;

	t81 = ((x665%(x666<=x667))-x668);

	if (t81 != 4293601096U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x673 = INT16_MIN;
	int64_t x674 = INT64_MIN;
	int32_t x675 = -1;
	int16_t x676 = -232;
	volatile int32_t t82 = 9509012;

	t82 = ((x673%(x674<=x675))-x676);

	if (t82 != 232) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x677 = INT16_MAX;
	int64_t x678 = INT64_MIN;
	int64_t x680 = -1LL;
	int64_t t83 = -486LL;

	t83 = ((x677%(x678<=x679))-x680);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x681 = INT64_MIN;
	volatile int64_t x682 = -1LL;
	int8_t x683 = 7;
	static uint32_t x684 = 325U;

	t84 = ((x681%(x682<=x683))-x684);

	if (t84 != -325LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x685 = -851;
	volatile int16_t x686 = INT16_MIN;
	volatile int8_t x687 = INT8_MIN;
	uint32_t x688 = 1662126U;
	uint32_t t85 = 3U;

	t85 = ((x685%(x686<=x687))-x688);

	if (t85 != 4293305170U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x697 = -798110838LL;
	static int8_t x699 = 1;
	int8_t x700 = INT8_MAX;
	int64_t t86 = 2LL;

	t86 = ((x697%(x698<=x699))-x700);

	if (t86 != -127LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x701 = 4U;
	static int32_t x702 = INT32_MIN;
	volatile uint8_t x703 = 0U;
	uint32_t x704 = 3973U;
	static volatile uint32_t t87 = 1620U;

	t87 = ((x701%(x702<=x703))-x704);

	if (t87 != 4294963323U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x705 = 29U;
	uint64_t x708 = 3LLU;
	uint64_t t88 = 47252361LLU;

	t88 = ((x705%(x706<=x707))-x708);

	if (t88 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x717 = INT64_MAX;
	static volatile int16_t x718 = -1006;
	static int16_t x719 = 147;
	volatile uint16_t x720 = UINT16_MAX;
	volatile int64_t t89 = -182389LL;

	t89 = ((x717%(x718<=x719))-x720);

	if (t89 != -65535LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x725 = INT32_MIN;
	volatile uint64_t x727 = UINT64_MAX;
	uint16_t x728 = UINT16_MAX;
	static int32_t t90 = 134356744;

	t90 = ((x725%(x726<=x727))-x728);

	if (t90 != -65535) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x729 = -1;
	int64_t x731 = INT64_MAX;
	int16_t x732 = -1;
	int32_t t91 = -14163;

	t91 = ((x729%(x730<=x731))-x732);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x746 = -1LL;
	int64_t x747 = INT64_MAX;
	uint32_t x748 = 583U;

	t92 = ((x745%(x746<=x747))-x748);

	if (t92 != 4294966713U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x749 = 31101466;
	static volatile uint64_t x750 = 40737LLU;
	volatile uint16_t x751 = UINT16_MAX;
	int16_t x752 = -1235;
	volatile int32_t t93 = -3505;

	t93 = ((x749%(x750<=x751))-x752);

	if (t93 != 1235) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x753 = 1U;
	int64_t x754 = INT64_MIN;
	uint64_t x755 = UINT64_MAX;
	static int16_t x756 = -1;
	static int32_t t94 = 37079474;

	t94 = ((x753%(x754<=x755))-x756);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x761 = 3948159LLU;
	int64_t x762 = -120259894263LL;
	static int64_t x763 = -28LL;
	volatile uint32_t x764 = 1937U;
	uint64_t t95 = 1045677570415LLU;

	t95 = ((x761%(x762<=x763))-x764);

	if (t95 != 18446744073709549679LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x769 = UINT64_MAX;
	static int8_t x770 = -3;
	static volatile int64_t x771 = -1LL;
	uint32_t x772 = UINT32_MAX;

	t96 = ((x769%(x770<=x771))-x772);

	if (t96 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x781 = 0;
	uint64_t x782 = 435750LLU;
	volatile int8_t x783 = -1;
	volatile int32_t t97 = 7897;

	t97 = ((x781%(x782<=x783))-x784);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x797 = 1U;
	int64_t x798 = -55013808LL;
	int8_t x799 = INT8_MIN;
	static int64_t x800 = 63596351958815LL;

	t98 = ((x797%(x798<=x799))-x800);

	if (t98 != -63596351958815LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x805 = UINT16_MAX;
	uint8_t x806 = 25U;
	uint16_t x807 = 29791U;
	volatile uint32_t t99 = 11U;

	t99 = ((x805%(x806<=x807))-x808);

	if (t99 != 4294875292U) { NG(); } else { ; }
	
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

