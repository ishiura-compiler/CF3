#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = -1;
uint32_t x14 = UINT32_MAX;
int32_t t2 = -433270;
uint8_t x30 = 52U;
volatile int16_t x38 = INT16_MAX;
static int64_t t5 = 1047357913LL;
int32_t t9 = -86763;
volatile uint16_t x96 = UINT16_MAX;
volatile int32_t t11 = 2067467;
int64_t x99 = -1LL;
static volatile uint64_t t12 = 1139664270282830LLU;
static volatile uint64_t x104 = UINT64_MAX;
volatile int64_t t14 = -81LL;
static int32_t x113 = -5343470;
uint8_t x116 = 80U;
volatile int16_t x129 = 28;
uint64_t t17 = 428949848119335605LLU;
volatile int32_t t19 = -61325136;
uint8_t x156 = 110U;
int64_t x161 = -1LL;
int16_t x164 = -1;
static int64_t x171 = -33266876LL;
volatile int64_t x173 = 2091854LL;
int32_t x176 = INT32_MIN;
int16_t x177 = INT16_MAX;
static uint64_t t26 = 2063851574887LLU;
volatile uint8_t x196 = UINT8_MAX;
volatile int32_t x197 = -1;
static uint16_t x230 = UINT16_MAX;
uint32_t x241 = 498673722U;
uint32_t x243 = 16819U;
int16_t x244 = -1;
int32_t x248 = INT32_MAX;
static int8_t x250 = INT8_MAX;
int64_t x251 = -1LL;
int8_t x253 = INT8_MAX;
int16_t x254 = -946;
uint64_t x255 = UINT64_MAX;
int32_t t34 = -18662;
uint64_t x259 = 752969977570174LLU;
int32_t t35 = -110159;
int32_t x263 = -1;
uint16_t x264 = 0U;
volatile int64_t t36 = -1387669LL;
int8_t x276 = INT8_MAX;
int64_t t37 = -119116577764551124LL;
int8_t x281 = -3;
static uint16_t x285 = UINT16_MAX;
volatile uint8_t x287 = 37U;
static volatile uint16_t x288 = 62U;
static int64_t x291 = INT64_MIN;
uint16_t x300 = 268U;
int64_t t41 = 32404018810LL;
volatile int32_t x319 = -97;
int64_t x321 = -1491547LL;
volatile int16_t x322 = -647;
static uint64_t x343 = 903135LLU;
static int8_t x361 = -8;
int16_t x371 = -1;
static int64_t x380 = -1LL;
volatile uint64_t t53 = 1902740929953525450LLU;
int16_t x381 = -90;
int8_t x382 = 22;
uint64_t x384 = 919166LLU;
uint16_t x385 = 26U;
uint16_t x388 = 3005U;
int32_t x406 = -4863359;
static int8_t x415 = 14;
uint32_t x431 = 1U;
volatile int32_t t58 = -126896173;
volatile uint64_t t63 = 714222840711320LLU;
static int16_t x460 = 348;
uint64_t t64 = 3LLU;
uint32_t x467 = 108335U;
static int64_t x479 = -1LL;
int64_t x481 = 902658750774442577LL;
int32_t x483 = -1;
volatile int32_t x493 = -1;
int16_t x494 = INT16_MAX;
static int64_t x514 = INT64_MIN;
static volatile int16_t x515 = -1;
int16_t x543 = INT16_MIN;
volatile uint32_t t74 = 18827U;
int32_t x570 = INT32_MIN;
volatile int32_t x580 = INT32_MAX;
static volatile uint16_t x583 = 1887U;
int32_t t78 = -1149100;
int8_t x600 = 8;
volatile uint32_t t80 = 127952U;
volatile int64_t t81 = 21741767977LL;
int8_t x616 = INT8_MAX;
static int32_t x625 = INT32_MIN;
static int64_t x626 = INT64_MIN;
int16_t x631 = INT16_MIN;
uint64_t x646 = 27277773918LLU;
static uint64_t t87 = 1481010151692790LLU;
int8_t x659 = INT8_MIN;
int64_t x660 = -1LL;
volatile int64_t x666 = -49236323310LL;
uint32_t t90 = 93U;
int64_t t91 = -3123724462813LL;
volatile int64_t x687 = INT64_MIN;
int16_t x688 = -1;
int16_t x699 = INT16_MIN;
volatile int8_t x709 = INT8_MIN;


void f0(void) {
	volatile int16_t x9 = INT16_MIN;
	uint16_t x10 = 0U;
	uint64_t x11 = 88317238537LLU;
	volatile int64_t x12 = INT64_MAX;
	volatile int32_t t0 = -3;

	t0 = ((x9|x10)%(x11<=x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x15 = INT16_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile uint32_t t1 = 24436163U;

	t1 = ((x13|x14)%(x15<=x16));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x21 = 758;
	int8_t x22 = INT8_MIN;
	uint32_t x23 = UINT32_MAX;
	static int16_t x24 = -1;

	t2 = ((x21|x22)%(x23<=x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = 417815473710LL;
	int64_t x31 = 75048649LL;
	int64_t x32 = INT64_MAX;
	volatile int64_t t3 = 15532LL;

	t3 = ((x29|x30)%(x31<=x32));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = INT8_MIN;
	static int32_t x39 = INT32_MIN;
	int32_t x40 = -120236;
	volatile int32_t t4 = 814;

	t4 = ((x37|x38)%(x39<=x40));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x45 = -258676241LL;
	static int32_t x46 = -278;
	int16_t x47 = 1;
	volatile int8_t x48 = INT8_MAX;

	t5 = ((x45|x46)%(x47<=x48));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x53 = -1;
	static volatile uint16_t x54 = 177U;
	static int16_t x55 = INT16_MIN;
	static int64_t x56 = -1LL;
	volatile int32_t t6 = 0;

	t6 = ((x53|x54)%(x55<=x56));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x57 = UINT64_MAX;
	volatile uint8_t x58 = UINT8_MAX;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	uint64_t t7 = 149945480790LLU;

	t7 = ((x57|x58)%(x59<=x60));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x61 = -1LL;
	static uint64_t x62 = 29597LLU;
	static int32_t x63 = -1;
	uint16_t x64 = UINT16_MAX;
	static volatile uint64_t t8 = 846997427LLU;

	t8 = ((x61|x62)%(x63<=x64));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x65 = 1U;
	static int16_t x66 = INT16_MIN;
	static int16_t x67 = INT16_MIN;
	uint64_t x68 = UINT64_MAX;

	t9 = ((x65|x66)%(x67<=x68));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x69 = INT32_MIN;
	static volatile int32_t x70 = INT32_MIN;
	uint8_t x71 = 10U;
	volatile uint8_t x72 = UINT8_MAX;
	int32_t t10 = -19;

	t10 = ((x69|x70)%(x71<=x72));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x93 = -1;
	static int8_t x94 = -1;
	int16_t x95 = INT16_MIN;

	t11 = ((x93|x94)%(x95<=x96));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x97 = 19LLU;
	int16_t x98 = -1;
	static int32_t x100 = INT32_MAX;

	t12 = ((x97|x98)%(x99<=x100));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x101 = INT32_MIN;
	static int32_t x102 = -1;
	volatile int32_t x103 = INT32_MAX;
	static volatile int32_t t13 = 173512;

	t13 = ((x101|x102)%(x103<=x104));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x109 = INT32_MIN;
	static int64_t x110 = INT64_MAX;
	uint8_t x111 = 2U;
	uint64_t x112 = 528581414LLU;

	t14 = ((x109|x110)%(x111<=x112));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x114 = 504LLU;
	volatile int16_t x115 = -1;
	uint64_t t15 = 7162646120081LLU;

	t15 = ((x113|x114)%(x115<=x116));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MIN;
	static int64_t x132 = INT64_MAX;
	volatile int32_t t16 = -4;

	t16 = ((x129|x130)%(x131<=x132));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x133 = 440540LLU;
	int64_t x134 = INT64_MIN;
	static int64_t x135 = INT64_MIN;
	int32_t x136 = INT32_MIN;

	t17 = ((x133|x134)%(x135<=x136));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x141 = 18819358U;
	volatile int8_t x142 = INT8_MAX;
	volatile int8_t x143 = INT8_MIN;
	volatile uint8_t x144 = 27U;
	uint32_t t18 = 521529197U;

	t18 = ((x141|x142)%(x143<=x144));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x149 = INT16_MAX;
	int16_t x150 = INT16_MIN;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = -1;

	t19 = ((x149|x150)%(x151<=x152));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = 396;
	static int8_t x155 = INT8_MIN;
	static int64_t t20 = -8367902579553LL;

	t20 = ((x153|x154)%(x155<=x156));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x157 = 124U;
	volatile uint32_t x158 = UINT32_MAX;
	int64_t x159 = -13350194108LL;
	static int64_t x160 = INT64_MAX;
	volatile uint32_t t21 = 1U;

	t21 = ((x157|x158)%(x159<=x160));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x162 = -610;
	int32_t x163 = INT32_MIN;
	int64_t t22 = 653LL;

	t22 = ((x161|x162)%(x163<=x164));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x165 = 96;
	volatile int8_t x166 = INT8_MIN;
	static int32_t x167 = 0;
	int32_t x168 = 58157847;
	volatile int32_t t23 = -30;

	t23 = ((x165|x166)%(x167<=x168));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x169 = 1U;
	int8_t x170 = 15;
	static int8_t x172 = 0;
	int32_t t24 = 2;

	t24 = ((x169|x170)%(x171<=x172));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x174 = UINT16_MAX;
	int32_t x175 = INT32_MIN;
	volatile int64_t t25 = -890495231046630430LL;

	t25 = ((x173|x174)%(x175<=x176));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x178 = 42908398171968LLU;
	uint16_t x179 = 12912U;
	static int64_t x180 = 29379164293423909LL;

	t26 = ((x177|x178)%(x179<=x180));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x185 = UINT8_MAX;
	int64_t x186 = INT64_MAX;
	int16_t x187 = INT16_MIN;
	volatile int8_t x188 = INT8_MIN;
	int64_t t27 = -222815089193LL;

	t27 = ((x185|x186)%(x187<=x188));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x193 = 2886U;
	int32_t x194 = INT32_MIN;
	int32_t x195 = INT32_MIN;
	volatile uint32_t t28 = 52U;

	t28 = ((x193|x194)%(x195<=x196));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x198 = 1;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	int32_t t29 = 1073;

	t29 = ((x197|x198)%(x199<=x200));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x229 = 3U;
	volatile uint32_t x231 = 49280U;
	static int64_t x232 = INT64_MAX;
	int32_t t30 = -2;

	t30 = ((x229|x230)%(x231<=x232));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x242 = 31;
	uint32_t t31 = 8U;

	t31 = ((x241|x242)%(x243<=x244));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x245 = UINT16_MAX;
	static uint16_t x246 = 52U;
	uint16_t x247 = UINT16_MAX;
	int32_t t32 = 2242165;

	t32 = ((x245|x246)%(x247<=x248));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x249 = 0U;
	static uint8_t x252 = 81U;
	volatile int32_t t33 = -8;

	t33 = ((x249|x250)%(x251<=x252));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x256 = -1;

	t34 = ((x253|x254)%(x255<=x256));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x257 = -1;
	volatile uint8_t x258 = 2U;
	int16_t x260 = -1;

	t35 = ((x257|x258)%(x259<=x260));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x261 = INT16_MAX;
	int64_t x262 = INT64_MAX;

	t36 = ((x261|x262)%(x263<=x264));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x273 = 0;
	static int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;

	t37 = ((x273|x274)%(x275<=x276));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x282 = INT32_MAX;
	int32_t x283 = -13336;
	int32_t x284 = -1;
	volatile int32_t t38 = -58587251;

	t38 = ((x281|x282)%(x283<=x284));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x286 = INT32_MIN;
	int32_t t39 = -231;

	t39 = ((x285|x286)%(x287<=x288));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x289 = -1;
	volatile int32_t x290 = INT32_MIN;
	volatile int8_t x292 = INT8_MAX;
	static volatile int32_t t40 = -35;

	t40 = ((x289|x290)%(x291<=x292));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x297 = INT64_MIN;
	int16_t x298 = 7452;
	int8_t x299 = -1;

	t41 = ((x297|x298)%(x299<=x300));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x309 = 0U;
	int8_t x310 = 0;
	static int16_t x311 = INT16_MIN;
	volatile uint64_t x312 = UINT64_MAX;
	static int32_t t42 = 58123;

	t42 = ((x309|x310)%(x311<=x312));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x313 = 1374261000896397LLU;
	static uint8_t x314 = UINT8_MAX;
	static uint8_t x315 = 2U;
	int32_t x316 = 144;
	volatile uint64_t t43 = 24949819LLU;

	t43 = ((x313|x314)%(x315<=x316));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x317 = UINT8_MAX;
	uint8_t x318 = UINT8_MAX;
	uint32_t x320 = UINT32_MAX;
	static int32_t t44 = -473740884;

	t44 = ((x317|x318)%(x319<=x320));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x323 = -54;
	static volatile int8_t x324 = -1;
	int64_t t45 = 66695081LL;

	t45 = ((x321|x322)%(x323<=x324));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x333 = -1LL;
	static volatile int16_t x334 = INT16_MIN;
	int16_t x335 = -1;
	static volatile int32_t x336 = 15;
	volatile int64_t t46 = 6951096LL;

	t46 = ((x333|x334)%(x335<=x336));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x337 = -7479;
	int8_t x338 = INT8_MAX;
	int16_t x339 = INT16_MIN;
	int16_t x340 = -1;
	volatile int32_t t47 = -26705923;

	t47 = ((x337|x338)%(x339<=x340));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x341 = -3596660;
	int64_t x342 = INT64_MAX;
	int64_t x344 = INT64_MIN;
	int64_t t48 = -50LL;

	t48 = ((x341|x342)%(x343<=x344));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x357 = INT32_MIN;
	uint32_t x358 = UINT32_MAX;
	int64_t x359 = INT64_MIN;
	volatile uint64_t x360 = UINT64_MAX;
	static uint32_t t49 = 118074U;

	t49 = ((x357|x358)%(x359<=x360));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x362 = INT16_MIN;
	int8_t x363 = 4;
	uint16_t x364 = 3005U;
	static int32_t t50 = 48008247;

	t50 = ((x361|x362)%(x363<=x364));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x365 = INT32_MIN;
	volatile int8_t x366 = INT8_MIN;
	int64_t x367 = -105154777853788LL;
	volatile int16_t x368 = INT16_MAX;
	volatile int32_t t51 = -808257750;

	t51 = ((x365|x366)%(x367<=x368));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int8_t x370 = INT8_MIN;
	int8_t x372 = 10;
	volatile int32_t t52 = -2;

	t52 = ((x369|x370)%(x371<=x372));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x377 = 6016180U;
	static volatile uint64_t x378 = UINT64_MAX;
	static int32_t x379 = INT32_MIN;

	t53 = ((x377|x378)%(x379<=x380));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x383 = UINT8_MAX;
	int32_t t54 = 14;

	t54 = ((x381|x382)%(x383<=x384));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x386 = INT16_MIN;
	int8_t x387 = INT8_MAX;
	int32_t t55 = 118065;

	t55 = ((x385|x386)%(x387<=x388));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x405 = 759469LLU;
	static uint32_t x407 = UINT32_MAX;
	int8_t x408 = -1;
	volatile uint64_t t56 = 12452983LLU;

	t56 = ((x405|x406)%(x407<=x408));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x413 = 32766U;
	volatile int64_t x414 = 1901879LL;
	volatile uint32_t x416 = UINT32_MAX;
	int64_t t57 = 56202243197200LL;

	t57 = ((x413|x414)%(x415<=x416));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x429 = INT32_MAX;
	int8_t x430 = 7;
	static uint8_t x432 = UINT8_MAX;

	t58 = ((x429|x430)%(x431<=x432));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x433 = -7228LL;
	int8_t x434 = INT8_MIN;
	static volatile uint32_t x435 = 682243U;
	int32_t x436 = INT32_MIN;
	volatile int64_t t59 = -1LL;

	t59 = ((x433|x434)%(x435<=x436));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x437 = 1;
	int8_t x438 = -1;
	int64_t x439 = INT64_MIN;
	int64_t x440 = 106481493504312LL;
	volatile int32_t t60 = -1891;

	t60 = ((x437|x438)%(x439<=x440));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x441 = UINT16_MAX;
	volatile int8_t x442 = INT8_MAX;
	static volatile uint32_t x443 = 298406178U;
	static uint64_t x444 = 590369044921LLU;
	int32_t t61 = -458239062;

	t61 = ((x441|x442)%(x443<=x444));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x449 = INT16_MIN;
	uint8_t x450 = 0U;
	static int64_t x451 = INT64_MIN;
	int8_t x452 = INT8_MIN;
	static int32_t t62 = 9283;

	t62 = ((x449|x450)%(x451<=x452));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x453 = 6562464709041LLU;
	uint32_t x454 = UINT32_MAX;
	int8_t x455 = 0;
	uint8_t x456 = 1U;

	t63 = ((x453|x454)%(x455<=x456));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x457 = -17;
	static uint64_t x458 = UINT64_MAX;
	static int64_t x459 = -1LL;

	t64 = ((x457|x458)%(x459<=x460));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x465 = 2;
	int64_t x466 = -1LL;
	int16_t x468 = -2646;
	static int64_t t65 = -2164732217075LL;

	t65 = ((x465|x466)%(x467<=x468));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x469 = INT8_MAX;
	int32_t x470 = INT32_MIN;
	static int8_t x471 = INT8_MIN;
	volatile int64_t x472 = 3LL;
	int32_t t66 = 12865;

	t66 = ((x469|x470)%(x471<=x472));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x477 = UINT8_MAX;
	volatile uint16_t x478 = 105U;
	static volatile int8_t x480 = 13;
	static volatile int32_t t67 = 8326761;

	t67 = ((x477|x478)%(x479<=x480));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x482 = UINT64_MAX;
	int8_t x484 = -1;
	uint64_t t68 = 12366886078429142LLU;

	t68 = ((x481|x482)%(x483<=x484));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x489 = -1;
	uint8_t x490 = UINT8_MAX;
	int8_t x491 = INT8_MIN;
	int64_t x492 = INT64_MAX;
	int32_t t69 = -1;

	t69 = ((x489|x490)%(x491<=x492));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x495 = INT64_MIN;
	volatile uint8_t x496 = UINT8_MAX;
	volatile int32_t t70 = 486838;

	t70 = ((x493|x494)%(x495<=x496));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x509 = UINT32_MAX;
	int32_t x510 = 98260644;
	int64_t x511 = INT64_MIN;
	static int16_t x512 = 0;
	volatile uint32_t t71 = 85435U;

	t71 = ((x509|x510)%(x511<=x512));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x513 = -7021;
	int8_t x516 = 1;
	volatile int64_t t72 = -10966851LL;

	t72 = ((x513|x514)%(x515<=x516));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x525 = UINT8_MAX;
	static uint64_t x526 = 1940LLU;
	int64_t x527 = 476840LL;
	volatile uint64_t x528 = UINT64_MAX;
	uint64_t t73 = 128148LLU;

	t73 = ((x525|x526)%(x527<=x528));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x541 = INT8_MAX;
	uint32_t x542 = 416772U;
	uint64_t x544 = UINT64_MAX;

	t74 = ((x541|x542)%(x543<=x544));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x565 = INT8_MIN;
	static int8_t x566 = -2;
	volatile int64_t x567 = INT64_MIN;
	static int8_t x568 = INT8_MIN;
	volatile int32_t t75 = -251847499;

	t75 = ((x565|x566)%(x567<=x568));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x569 = INT32_MAX;
	volatile int8_t x571 = INT8_MIN;
	int16_t x572 = -1;
	int32_t t76 = 6805;

	t76 = ((x569|x570)%(x571<=x572));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x577 = -1LL;
	static int64_t x578 = -1LL;
	volatile int32_t x579 = INT32_MIN;
	int64_t t77 = 8965834300787045LL;

	t77 = ((x577|x578)%(x579<=x580));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x581 = -29;
	static uint16_t x582 = 175U;
	int64_t x584 = 40855491LL;

	t78 = ((x581|x582)%(x583<=x584));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x589 = 187;
	static int16_t x590 = -242;
	static volatile int16_t x591 = INT16_MIN;
	static volatile int16_t x592 = INT16_MAX;
	int32_t t79 = 28;

	t79 = ((x589|x590)%(x591<=x592));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x597 = INT16_MIN;
	uint32_t x598 = UINT32_MAX;
	int32_t x599 = INT32_MIN;

	t80 = ((x597|x598)%(x599<=x600));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x609 = INT64_MAX;
	volatile int8_t x610 = INT8_MIN;
	int8_t x611 = INT8_MAX;
	uint64_t x612 = 8575240858156619LLU;

	t81 = ((x609|x610)%(x611<=x612));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x613 = -1;
	uint8_t x614 = 32U;
	int8_t x615 = -4;
	volatile int32_t t82 = -323;

	t82 = ((x613|x614)%(x615<=x616));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x621 = 1533405242U;
	int8_t x622 = 0;
	int16_t x623 = INT16_MIN;
	int8_t x624 = 7;
	volatile uint32_t t83 = 6U;

	t83 = ((x621|x622)%(x623<=x624));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x627 = UINT64_MAX;
	int8_t x628 = -1;
	int64_t t84 = 199176563882LL;

	t84 = ((x625|x626)%(x627<=x628));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x629 = UINT64_MAX;
	int64_t x630 = INT64_MAX;
	int16_t x632 = INT16_MAX;
	volatile uint64_t t85 = 130LLU;

	t85 = ((x629|x630)%(x631<=x632));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x637 = UINT16_MAX;
	int16_t x638 = INT16_MAX;
	int16_t x639 = INT16_MIN;
	int8_t x640 = INT8_MIN;
	static volatile int32_t t86 = 1048402;

	t86 = ((x637|x638)%(x639<=x640));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x645 = -30;
	int32_t x647 = INT32_MIN;
	static int8_t x648 = INT8_MIN;

	t87 = ((x645|x646)%(x647<=x648));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x657 = 52070;
	int8_t x658 = 0;
	volatile int32_t t88 = 46382287;

	t88 = ((x657|x658)%(x659<=x660));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x665 = -81912LL;
	uint64_t x667 = 629862951LLU;
	uint64_t x668 = UINT64_MAX;
	int64_t t89 = 1771953803130LL;

	t89 = ((x665|x666)%(x667<=x668));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x677 = UINT8_MAX;
	static uint32_t x678 = UINT32_MAX;
	static int16_t x679 = -1;
	int8_t x680 = -1;

	t90 = ((x677|x678)%(x679<=x680));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x681 = INT64_MIN;
	uint32_t x682 = 285517U;
	volatile uint8_t x683 = UINT8_MAX;
	uint64_t x684 = 15764LLU;

	t91 = ((x681|x682)%(x683<=x684));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x685 = UINT16_MAX;
	int32_t x686 = -1;
	static volatile int32_t t92 = -207;

	t92 = ((x685|x686)%(x687<=x688));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x689 = -1;
	static int64_t x690 = -1LL;
	int8_t x691 = INT8_MIN;
	static uint8_t x692 = 0U;
	static volatile int64_t t93 = 69134410063360LL;

	t93 = ((x689|x690)%(x691<=x692));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x697 = 0U;
	static int32_t x698 = 160;
	int8_t x700 = -7;
	int32_t t94 = 214180;

	t94 = ((x697|x698)%(x699<=x700));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x701 = 1;
	static int64_t x702 = INT64_MAX;
	int8_t x703 = -30;
	int16_t x704 = 0;
	int64_t t95 = 166160559307527LL;

	t95 = ((x701|x702)%(x703<=x704));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x705 = INT64_MIN;
	uint16_t x706 = 26U;
	int16_t x707 = INT16_MIN;
	volatile int16_t x708 = -2800;
	volatile int64_t t96 = -2840433093443830LL;

	t96 = ((x705|x706)%(x707<=x708));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x710 = 0U;
	static int16_t x711 = -7548;
	int32_t x712 = -1;
	int32_t t97 = -7935053;

	t97 = ((x709|x710)%(x711<=x712));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x713 = -1439;
	int64_t x714 = 32600852085042LL;
	uint16_t x715 = 0U;
	uint16_t x716 = 2034U;
	volatile int64_t t98 = 6676645149422LL;

	t98 = ((x713|x714)%(x715<=x716));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x717 = INT64_MAX;
	uint8_t x718 = 11U;
	volatile int64_t x719 = INT64_MIN;
	int8_t x720 = 3;
	static volatile int64_t t99 = 1131298521LL;

	t99 = ((x717|x718)%(x719<=x720));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

