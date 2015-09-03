#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x9 = 21U;
int16_t x37 = INT16_MIN;
static int16_t x39 = -1;
uint8_t x43 = 4U;
static volatile uint16_t x44 = 803U;
static volatile uint16_t x49 = 94U;
volatile uint8_t x54 = UINT8_MAX;
uint32_t x55 = 1062652744U;
int32_t x56 = -1069427;
int32_t t8 = -1243821;
uint16_t x71 = 19U;
int32_t t10 = 60;
uint8_t x74 = 117U;
static int64_t x93 = -22818LL;
int64_t x95 = -178631913708489673LL;
uint64_t x100 = 26427680324LLU;
static uint8_t x113 = UINT8_MAX;
int32_t x114 = INT32_MIN;
int32_t t15 = -89;
uint8_t x118 = 38U;
volatile int8_t x126 = -3;
uint8_t x131 = UINT8_MAX;
uint16_t x141 = UINT16_MAX;
uint32_t t22 = UINT32_MAX;
static int64_t x161 = -1LL;
static volatile int32_t x162 = INT32_MAX;
int16_t x167 = 3;
int32_t x176 = 22289132;
int16_t x177 = -1;
uint16_t x180 = 1232U;
volatile uint64_t x187 = 3055627539524116LLU;
int32_t t31 = 3600;
uint64_t x231 = 123536072469LLU;
static volatile uint64_t t32 = 1997768288569LLU;
int16_t x252 = 9790;
int64_t x257 = INT64_MAX;
volatile int64_t t34 = INT64_MAX;
int8_t x266 = 0;
int32_t x274 = 288;
volatile int16_t x276 = -1;
static int16_t x300 = INT16_MAX;
int32_t x309 = INT32_MIN;
uint16_t x312 = 4600U;
int8_t x331 = 1;
uint64_t x363 = UINT64_MAX;
uint8_t x365 = 53U;
static uint32_t x369 = 88246U;
int8_t x373 = INT8_MIN;
static int32_t x380 = INT32_MAX;
static volatile int32_t t53 = -301251409;
int8_t x418 = -1;
uint64_t x429 = 2345842341208366LLU;
int32_t x430 = 5582035;
uint16_t x432 = 210U;
uint64_t t58 = UINT64_MAX;
uint16_t x451 = 334U;
static uint16_t x468 = UINT16_MAX;
volatile int64_t x471 = -735730478051600963LL;
uint32_t x472 = UINT32_MAX;
static int32_t x477 = -133;
int32_t x479 = INT32_MIN;
int32_t x480 = -1;
int64_t x498 = INT64_MIN;
int64_t t63 = -66515931992645305LL;
uint8_t x513 = 51U;
int64_t x514 = -94LL;
static volatile uint64_t x533 = UINT64_MAX;
int8_t x534 = INT8_MIN;
static volatile int16_t x535 = INT16_MIN;
uint32_t x542 = 75369U;
int8_t x543 = -1;
volatile int16_t x562 = INT16_MIN;
int32_t t69 = -58782832;
volatile int32_t t70 = 25;
int32_t x602 = INT32_MAX;
uint32_t x603 = 17216U;
volatile int64_t x606 = 245073301700179349LL;
int64_t x623 = INT64_MIN;
static volatile int16_t x625 = INT16_MIN;
uint32_t x632 = 583000614U;
int32_t t81 = 544;
uint64_t x654 = UINT64_MAX;
volatile uint64_t t82 = UINT64_MAX;
int64_t x669 = INT64_MAX;
volatile int8_t x677 = -1;
int32_t x695 = INT32_MAX;
int32_t x696 = INT32_MAX;
uint32_t x699 = 5U;
volatile int32_t x709 = -1;
uint8_t x711 = 0U;
static uint32_t x712 = 2183U;
volatile int32_t t89 = -109625001;
uint8_t x725 = 103U;
static int64_t x731 = INT64_MAX;
int16_t x748 = INT16_MAX;
static int8_t x758 = INT8_MIN;
volatile int32_t t96 = -399467082;
int8_t x777 = -1;
int32_t t99 = 155;


void f0(void) {
	volatile int16_t x5 = INT16_MAX;
	static uint8_t x6 = 101U;
	static int8_t x7 = -40;
	int8_t x8 = 2;
	volatile int32_t t0 = 262066;

	t0 = (x5|(x6/(x7<=x8)));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x10 = -1;
	static uint8_t x11 = 12U;
	uint64_t x12 = UINT64_MAX;
	static uint32_t t1 = UINT32_MAX;

	t1 = (x9|(x10/(x11<=x12)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MIN;
	int32_t x23 = INT32_MIN;
	uint8_t x24 = 1U;
	static int64_t t2 = -13025311LL;

	t2 = (x21|(x22/(x23<=x24)));

	if (t2 != -128LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x29 = 24U;
	int32_t x30 = INT32_MIN;
	uint32_t x31 = 163U;
	uint8_t x32 = UINT8_MAX;
	int32_t t3 = 21;

	t3 = (x29|(x30/(x31<=x32)));

	if (t3 != -2147483624) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = -1;
	uint32_t x35 = 110835013U;
	static int16_t x36 = -1;
	int32_t t4 = -2841449;

	t4 = (x33|(x34/(x35<=x36)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x38 = 13;
	uint8_t x40 = UINT8_MAX;
	int32_t t5 = -20;

	t5 = (x37|(x38/(x39<=x40)));

	if (t5 != -32755) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = -13;
	volatile int32_t x42 = INT32_MAX;
	static int32_t t6 = -15118;

	t6 = (x41|(x42/(x43<=x44)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x50 = INT64_MAX;
	int16_t x51 = INT16_MIN;
	int16_t x52 = -249;
	volatile int64_t t7 = INT64_MAX;

	t7 = (x49|(x50/(x51<=x52)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x53 = UINT8_MAX;

	t8 = (x53|(x54/(x55<=x56)));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x57 = INT32_MIN;
	static int32_t x58 = INT32_MIN;
	int32_t x59 = INT32_MIN;
	uint16_t x60 = UINT16_MAX;
	static int32_t t9 = INT32_MIN;

	t9 = (x57|(x58/(x59<=x60)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x69 = INT8_MIN;
	volatile int8_t x70 = -3;
	static volatile uint16_t x72 = 401U;

	t10 = (x69|(x70/(x71<=x72)));

	if (t10 != -3) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = 13;
	volatile uint32_t x75 = 0U;
	int32_t x76 = INT32_MIN;
	static int32_t t11 = -7622247;

	t11 = (x73|(x74/(x75<=x76)));

	if (t11 != 125) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x89 = -487LL;
	volatile int16_t x90 = 2738;
	static volatile int16_t x91 = -16220;
	int16_t x92 = INT16_MAX;
	volatile int64_t t12 = -9LL;

	t12 = (x89|(x90/(x91<=x92)));

	if (t12 != -325LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x94 = -4555911596231071358LL;
	volatile uint8_t x96 = UINT8_MAX;
	volatile int64_t t13 = 771484LL;

	t13 = (x93|(x94/(x95<=x96)));

	if (t13 != -4130LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x97 = INT16_MIN;
	int32_t x98 = -1;
	volatile uint8_t x99 = 23U;
	int32_t t14 = -63294;

	t14 = (x97|(x98/(x99<=x100)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x115 = INT16_MAX;
	static uint64_t x116 = UINT64_MAX;

	t15 = (x113|(x114/(x115<=x116)));

	if (t15 != -2147483393) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x117 = 46;
	static uint16_t x119 = 4903U;
	uint64_t x120 = UINT64_MAX;
	static volatile int32_t t16 = -1172;

	t16 = (x117|(x118/(x119<=x120)));

	if (t16 != 46) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x121 = 6675377LLU;
	volatile int64_t x122 = INT64_MAX;
	uint64_t x123 = 296584804LLU;
	volatile int32_t x124 = INT32_MIN;
	uint64_t t17 = 2678032LLU;

	t17 = (x121|(x122/(x123<=x124)));

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x125 = UINT8_MAX;
	uint64_t x127 = 618124375641305LLU;
	volatile int64_t x128 = INT64_MIN;
	volatile int32_t t18 = 2;

	t18 = (x125|(x126/(x127<=x128)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x129 = -32130;
	static int16_t x130 = INT16_MAX;
	uint8_t x132 = UINT8_MAX;
	int32_t t19 = 1725;

	t19 = (x129|(x130/(x131<=x132)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x133 = 5499314427998837LLU;
	uint8_t x134 = 14U;
	uint16_t x135 = 20U;
	uint64_t x136 = 74LLU;
	volatile uint64_t t20 = 152147808LLU;

	t20 = (x133|(x134/(x135<=x136)));

	if (t20 != 5499314427998847LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x142 = 0U;
	int32_t x143 = INT32_MIN;
	volatile int8_t x144 = -1;
	int32_t t21 = -757;

	t21 = (x141|(x142/(x143<=x144)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x149 = 2865U;
	int16_t x150 = -1;
	int32_t x151 = -1;
	static uint16_t x152 = 0U;

	t22 = (x149|(x150/(x151<=x152)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x153 = 5;
	int16_t x154 = INT16_MAX;
	int16_t x155 = INT16_MIN;
	int8_t x156 = -6;
	int32_t t23 = -18609;

	t23 = (x153|(x154/(x155<=x156)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x157 = 1658410U;
	int64_t x158 = INT64_MIN;
	volatile int64_t x159 = INT64_MIN;
	int16_t x160 = -1;
	volatile int64_t t24 = -477LL;

	t24 = (x157|(x158/(x159<=x160)));

	if (t24 != -9223372036853117398LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x163 = -1LL;
	uint8_t x164 = UINT8_MAX;
	int64_t t25 = 1206682LL;

	t25 = (x161|(x162/(x163<=x164)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x165 = 101135946U;
	static int8_t x166 = 3;
	volatile uint64_t x168 = UINT64_MAX;
	static volatile uint32_t t26 = 23847495U;

	t26 = (x165|(x166/(x167<=x168)));

	if (t26 != 101135947U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x169 = -1;
	volatile int16_t x170 = INT16_MAX;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = 28U;
	volatile int32_t t27 = -3606058;

	t27 = (x169|(x170/(x171<=x172)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x173 = -2LL;
	uint32_t x174 = 18U;
	int64_t x175 = -7426LL;
	int64_t t28 = 3766685430LL;

	t28 = (x173|(x174/(x175<=x176)));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x178 = INT16_MIN;
	static int64_t x179 = INT64_MIN;
	volatile int32_t t29 = -88992;

	t29 = (x177|(x178/(x179<=x180)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MAX;
	int8_t x188 = -1;
	int32_t t30 = -11580815;

	t30 = (x185|(x186/(x187<=x188)));

	if (t30 != -2147450881) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x213 = -1;
	static uint8_t x214 = UINT8_MAX;
	static int32_t x215 = -924842;
	static uint64_t x216 = UINT64_MAX;

	t31 = (x213|(x214/(x215<=x216)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x229 = 399303521LLU;
	int8_t x230 = INT8_MIN;
	int16_t x232 = -466;

	t32 = (x229|(x230/(x231<=x232)));

	if (t32 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int64_t x250 = 32407985952359LL;
	int16_t x251 = INT16_MIN;
	static volatile uint64_t t33 = UINT64_MAX;

	t33 = (x249|(x250/(x251<=x252)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x258 = INT8_MAX;
	int8_t x259 = INT8_MIN;
	int16_t x260 = -1;

	t34 = (x257|(x258/(x259<=x260)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x261 = -1;
	int16_t x262 = INT16_MIN;
	static int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MAX;
	int32_t t35 = -992071;

	t35 = (x261|(x262/(x263<=x264)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x265 = INT8_MIN;
	static uint64_t x267 = 606406LLU;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t36 = 45999770;

	t36 = (x265|(x266/(x267<=x268)));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x273 = -434LL;
	int16_t x275 = -14;
	int64_t t37 = -71872391384LL;

	t37 = (x273|(x274/(x275<=x276)));

	if (t37 != -146LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x281 = INT32_MAX;
	int64_t x282 = -1LL;
	static int64_t x283 = -363956596746426626LL;
	int8_t x284 = INT8_MAX;
	static int64_t t38 = -51995534802568LL;

	t38 = (x281|(x282/(x283<=x284)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x297 = 3671795695148991721LL;
	static volatile int8_t x298 = -1;
	volatile int8_t x299 = -1;
	volatile int64_t t39 = 6487285749LL;

	t39 = (x297|(x298/(x299<=x300)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x301 = -1;
	uint8_t x302 = UINT8_MAX;
	static uint32_t x303 = 13938209U;
	volatile int16_t x304 = INT16_MIN;
	static volatile int32_t t40 = -718817;

	t40 = (x301|(x302/(x303<=x304)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x310 = 0U;
	volatile int16_t x311 = -1;
	volatile int32_t t41 = INT32_MIN;

	t41 = (x309|(x310/(x311<=x312)));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MIN;
	static uint32_t x315 = 501490210U;
	int8_t x316 = INT8_MIN;
	volatile int32_t t42 = 86;

	t42 = (x313|(x314/(x315<=x316)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x329 = 1;
	static volatile uint8_t x330 = 7U;
	int8_t x332 = INT8_MAX;
	int32_t t43 = 1463311;

	t43 = (x329|(x330/(x331<=x332)));

	if (t43 != 7) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x333 = INT8_MAX;
	int32_t x334 = INT32_MIN;
	uint32_t x335 = 2841U;
	uint64_t x336 = UINT64_MAX;
	int32_t t44 = -1942;

	t44 = (x333|(x334/(x335<=x336)));

	if (t44 != -2147483521) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x341 = INT16_MAX;
	static int8_t x342 = INT8_MIN;
	int32_t x343 = -1;
	int32_t x344 = -1;
	static volatile int32_t t45 = -449528;

	t45 = (x341|(x342/(x343<=x344)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x361 = 557LLU;
	int32_t x362 = 10;
	volatile int32_t x364 = -1;
	volatile uint64_t t46 = 12899980621LLU;

	t46 = (x361|(x362/(x363<=x364)));

	if (t46 != 559LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x366 = -52;
	int8_t x367 = -15;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t47 = 995101;

	t47 = (x365|(x366/(x367<=x368)));

	if (t47 != -3) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x370 = UINT64_MAX;
	int64_t x371 = 4LL;
	static uint8_t x372 = 14U;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x369|(x370/(x371<=x372)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x374 = -1LL;
	static int16_t x375 = INT16_MIN;
	uint16_t x376 = UINT16_MAX;
	volatile int64_t t49 = -5271602449464LL;

	t49 = (x373|(x374/(x375<=x376)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MIN;
	static int32_t x379 = -33036;
	volatile int64_t t50 = 856860389843694LL;

	t50 = (x377|(x378/(x379<=x380)));

	if (t50 != -32768LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x381 = -1465;
	volatile int8_t x382 = -1;
	volatile uint16_t x383 = 0U;
	uint32_t x384 = 43009289U;
	volatile int32_t t51 = -1384;

	t51 = (x381|(x382/(x383<=x384)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x385 = 0;
	int32_t x386 = INT32_MIN;
	int64_t x387 = 86LL;
	int8_t x388 = INT8_MAX;
	int32_t t52 = INT32_MIN;

	t52 = (x385|(x386/(x387<=x388)));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x389 = UINT8_MAX;
	int16_t x390 = 961;
	int16_t x391 = INT16_MIN;
	volatile int8_t x392 = -1;

	t53 = (x389|(x390/(x391<=x392)));

	if (t53 != 1023) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x405 = INT8_MAX;
	uint32_t x406 = 65045587U;
	volatile int8_t x407 = -11;
	uint8_t x408 = 11U;
	volatile uint32_t t54 = 2963U;

	t54 = (x405|(x406/(x407<=x408)));

	if (t54 != 65045631U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x417 = -1;
	int16_t x419 = INT16_MIN;
	int8_t x420 = -1;
	int32_t t55 = 769278;

	t55 = (x417|(x418/(x419<=x420)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x425 = 0U;
	int16_t x426 = INT16_MIN;
	static uint8_t x427 = 1U;
	int8_t x428 = 1;
	static int32_t t56 = 0;

	t56 = (x425|(x426/(x427<=x428)));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x431 = INT64_MIN;
	uint64_t t57 = 6106714838LLU;

	t57 = (x429|(x430/(x431<=x432)));

	if (t57 != 2345842341539327LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x445 = 10;
	static uint64_t x446 = UINT64_MAX;
	volatile int16_t x447 = INT16_MIN;
	static int16_t x448 = -757;

	t58 = (x445|(x446/(x447<=x448)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x449 = -1LL;
	int8_t x450 = INT8_MIN;
	int64_t x452 = 4477104727LL;
	volatile int64_t t59 = -1048580758121770LL;

	t59 = (x449|(x450/(x451<=x452)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x465 = 83514901U;
	uint8_t x466 = UINT8_MAX;
	uint8_t x467 = 2U;
	volatile uint32_t t60 = 57230U;

	t60 = (x465|(x466/(x467<=x468)));

	if (t60 != 83515135U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x469 = -4689375522888438LL;
	int8_t x470 = INT8_MIN;
	int64_t t61 = -3576371510886140971LL;

	t61 = (x469|(x470/(x471<=x472)));

	if (t61 != -118LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x478 = UINT8_MAX;
	static int32_t t62 = 4225;

	t62 = (x477|(x478/(x479<=x480)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x497 = 1044;
	int8_t x499 = INT8_MIN;
	int64_t x500 = INT64_MAX;

	t63 = (x497|(x498/(x499<=x500)));

	if (t63 != -9223372036854774764LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x501 = -1LL;
	static int8_t x502 = 1;
	volatile uint16_t x503 = 1U;
	volatile int8_t x504 = INT8_MAX;
	volatile int64_t t64 = -1LL;

	t64 = (x501|(x502/(x503<=x504)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x505 = 7;
	int8_t x506 = INT8_MAX;
	int8_t x507 = -1;
	uint16_t x508 = UINT16_MAX;
	static int32_t t65 = 4;

	t65 = (x505|(x506/(x507<=x508)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x515 = -7;
	int8_t x516 = INT8_MAX;
	volatile int64_t t66 = 302114996128863623LL;

	t66 = (x513|(x514/(x515<=x516)));

	if (t66 != -77LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x536 = -1;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x533|(x534/(x535<=x536)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x541 = INT8_MIN;
	int8_t x544 = -1;
	static volatile uint32_t t68 = 37704729U;

	t68 = (x541|(x542/(x543<=x544)));

	if (t68 != 4294967273U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x561 = 1;
	static int32_t x563 = -12359856;
	uint32_t x564 = UINT32_MAX;

	t69 = (x561|(x562/(x563<=x564)));

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x573 = -598;
	int16_t x574 = 583;
	uint32_t x575 = 30234170U;
	volatile uint32_t x576 = UINT32_MAX;

	t70 = (x573|(x574/(x575<=x576)));

	if (t70 != -17) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x577 = 3U;
	int32_t x578 = 8362244;
	static int64_t x579 = -1LL;
	int16_t x580 = -1;
	volatile int32_t t71 = 488;

	t71 = (x577|(x578/(x579<=x580)));

	if (t71 != 8362247) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x581 = INT16_MIN;
	uint32_t x582 = UINT32_MAX;
	int64_t x583 = -1LL;
	uint8_t x584 = 30U;
	static uint32_t t72 = UINT32_MAX;

	t72 = (x581|(x582/(x583<=x584)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x597 = 11U;
	int32_t x598 = -1;
	volatile int32_t x599 = INT32_MIN;
	uint32_t x600 = UINT32_MAX;
	static int32_t t73 = -11322460;

	t73 = (x597|(x598/(x599<=x600)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x601 = INT32_MAX;
	int32_t x604 = INT32_MIN;
	int32_t t74 = INT32_MAX;

	t74 = (x601|(x602/(x603<=x604)));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x605 = 2396385;
	int32_t x607 = INT32_MIN;
	volatile int16_t x608 = INT16_MIN;
	int64_t t75 = 40356432LL;

	t75 = (x605|(x606/(x607<=x608)));

	if (t75 != 245073301702309365LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x613 = 128201430120991116LLU;
	volatile uint8_t x614 = 40U;
	static uint8_t x615 = 0U;
	static uint64_t x616 = 3798961688440168LLU;
	volatile uint64_t t76 = 375102680994048LLU;

	t76 = (x613|(x614/(x615<=x616)));

	if (t76 != 128201430120991148LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x617 = 6U;
	static volatile int8_t x618 = -2;
	int8_t x619 = 0;
	uint16_t x620 = 92U;
	int32_t t77 = 0;

	t77 = (x617|(x618/(x619<=x620)));

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x621 = 1195LLU;
	static int64_t x622 = -1LL;
	volatile int16_t x624 = -1;
	static uint64_t t78 = UINT64_MAX;

	t78 = (x621|(x622/(x623<=x624)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x626 = UINT8_MAX;
	uint16_t x627 = 15U;
	uint64_t x628 = UINT64_MAX;
	volatile int32_t t79 = -192352;

	t79 = (x625|(x626/(x627<=x628)));

	if (t79 != -32513) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x629 = INT16_MIN;
	int16_t x630 = INT16_MAX;
	static uint8_t x631 = UINT8_MAX;
	static volatile int32_t t80 = -3;

	t80 = (x629|(x630/(x631<=x632)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x641 = -13;
	int16_t x642 = -217;
	static int64_t x643 = 0LL;
	static int32_t x644 = INT32_MAX;

	t81 = (x641|(x642/(x643<=x644)));

	if (t81 != -9) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x653 = INT16_MIN;
	static uint16_t x655 = UINT16_MAX;
	uint64_t x656 = UINT64_MAX;

	t82 = (x653|(x654/(x655<=x656)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x661 = UINT16_MAX;
	int32_t x662 = INT32_MAX;
	int64_t x663 = -38594094710LL;
	volatile int32_t x664 = -454238;
	static int32_t t83 = INT32_MAX;

	t83 = (x661|(x662/(x663<=x664)));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x665 = -57;
	int8_t x666 = INT8_MIN;
	int32_t x667 = INT32_MAX;
	static volatile uint64_t x668 = 1615202116895076540LLU;
	int32_t t84 = -15135800;

	t84 = (x665|(x666/(x667<=x668)));

	if (t84 != -57) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x670 = 67931495311336LLU;
	static int32_t x671 = INT32_MIN;
	uint8_t x672 = 6U;
	uint64_t t85 = 4588965295LLU;

	t85 = (x669|(x670/(x671<=x672)));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x678 = INT32_MIN;
	int16_t x679 = INT16_MIN;
	volatile int16_t x680 = -1;
	int32_t t86 = -9;

	t86 = (x677|(x678/(x679<=x680)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x693 = 18040277299875907LLU;
	int16_t x694 = -1;
	uint64_t t87 = UINT64_MAX;

	t87 = (x693|(x694/(x695<=x696)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x697 = UINT64_MAX;
	static int64_t x698 = INT64_MAX;
	uint64_t x700 = UINT64_MAX;
	uint64_t t88 = UINT64_MAX;

	t88 = (x697|(x698/(x699<=x700)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x710 = 0U;

	t89 = (x709|(x710/(x711<=x712)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x713 = INT8_MIN;
	volatile int32_t x714 = -7;
	int32_t x715 = INT32_MIN;
	int32_t x716 = -1;
	volatile int32_t t90 = -349;

	t90 = (x713|(x714/(x715<=x716)));

	if (t90 != -7) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x717 = INT16_MIN;
	uint32_t x718 = 30221906U;
	int16_t x719 = INT16_MIN;
	int8_t x720 = -1;
	static volatile uint32_t t91 = 47911269U;

	t91 = (x717|(x718/(x719<=x720)));

	if (t91 != 4294944338U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x726 = INT16_MAX;
	int16_t x727 = -180;
	uint32_t x728 = UINT32_MAX;
	volatile int32_t t92 = 54692427;

	t92 = (x725|(x726/(x727<=x728)));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x729 = -1;
	int16_t x730 = -1;
	uint64_t x732 = UINT64_MAX;
	int32_t t93 = -1756;

	t93 = (x729|(x730/(x731<=x732)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x745 = -1;
	uint64_t x746 = 237151872LLU;
	static volatile uint64_t x747 = 82LLU;
	uint64_t t94 = UINT64_MAX;

	t94 = (x745|(x746/(x747<=x748)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x749 = UINT8_MAX;
	int32_t x750 = INT32_MIN;
	int32_t x751 = INT32_MAX;
	uint64_t x752 = 40092535030LLU;
	volatile int32_t t95 = 12;

	t95 = (x749|(x750/(x751<=x752)));

	if (t95 != -2147483393) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x757 = -1;
	int8_t x759 = 1;
	uint32_t x760 = UINT32_MAX;

	t96 = (x757|(x758/(x759<=x760)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x765 = -1;
	uint32_t x766 = 275885959U;
	volatile uint16_t x767 = 126U;
	static volatile uint64_t x768 = UINT64_MAX;
	static uint32_t t97 = UINT32_MAX;

	t97 = (x765|(x766/(x767<=x768)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x769 = -1LL;
	static uint16_t x770 = 46U;
	volatile int32_t x771 = INT32_MIN;
	uint64_t x772 = UINT64_MAX;
	int64_t t98 = 1552148731LL;

	t98 = (x769|(x770/(x771<=x772)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x778 = -1;
	static uint32_t x779 = 7U;
	static int16_t x780 = INT16_MAX;

	t99 = (x777|(x778/(x779<=x780)));

	if (t99 != -1) { NG(); } else { ; }
	
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

