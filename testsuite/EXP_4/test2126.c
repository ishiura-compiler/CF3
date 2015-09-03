#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = -1;
int16_t x16 = 29;
int32_t x18 = 11251128;
volatile uint32_t x29 = 170257U;
int32_t t5 = INT32_MAX;
int64_t x52 = 0LL;
uint32_t x66 = 1U;
uint16_t x70 = 42U;
int16_t x82 = -1;
int8_t x83 = INT8_MIN;
int32_t t12 = 81375000;
volatile int16_t x102 = INT16_MIN;
static int8_t x104 = INT8_MIN;
uint32_t t13 = 132U;
volatile int16_t x113 = 1107;
int16_t x136 = INT16_MAX;
uint8_t x137 = 3U;
static uint64_t x138 = 16082635LLU;
volatile uint64_t x139 = 228434621977238045LLU;
volatile int64_t x141 = 1695369026315353264LL;
uint32_t x151 = 4U;
static uint16_t x160 = UINT16_MAX;
static int64_t x188 = INT64_MIN;
int8_t x189 = INT8_MAX;
int8_t x212 = 0;
static volatile uint32_t t32 = UINT32_MAX;
static volatile int16_t x214 = -71;
uint64_t x230 = 0LLU;
int32_t x232 = -1;
volatile int8_t x254 = 0;
static int8_t x256 = INT8_MAX;
uint16_t x257 = 4U;
int32_t x259 = INT32_MIN;
static uint16_t x267 = 7U;
int32_t x273 = 46257;
int64_t x274 = -1LL;
uint64_t x276 = 8409LLU;
static int32_t t41 = -2569639;
uint32_t t43 = UINT32_MAX;
int32_t t45 = -1;
int32_t t47 = -275;
int32_t x345 = 1;
int64_t x346 = -16865106915298893LL;
static int16_t x348 = INT16_MIN;
int64_t x349 = INT64_MAX;
volatile int64_t t50 = INT64_MAX;
volatile uint16_t x356 = 244U;
uint8_t x357 = UINT8_MAX;
int16_t x359 = 1;
volatile int32_t t52 = -52748467;
uint64_t x364 = 36LLU;
static int32_t t53 = -264660029;
volatile int16_t x367 = -1;
uint64_t x369 = UINT64_MAX;
uint64_t t55 = UINT64_MAX;
uint64_t x373 = 521486684LLU;
uint64_t t56 = 1960552LLU;
volatile int32_t x387 = 5237;
volatile int32_t t57 = -7;
uint8_t x391 = UINT8_MAX;
uint8_t x409 = 34U;
static int8_t x413 = INT8_MAX;
uint16_t x415 = UINT16_MAX;
volatile int64_t x416 = -1LL;
uint32_t x417 = 3530U;
int8_t x427 = -1;
uint32_t x430 = 533851U;
int16_t x432 = INT16_MIN;
int8_t x449 = INT8_MAX;
static uint64_t x451 = UINT64_MAX;
static uint8_t x458 = UINT8_MAX;
volatile uint32_t x460 = 1835U;
int32_t t68 = -77311262;
uint64_t x462 = 18342981677629420LLU;
uint32_t x479 = 32437U;
static volatile uint32_t x486 = 15436U;
uint16_t x499 = 6086U;
int32_t x500 = 285258240;
volatile int32_t t74 = 16787295;
volatile int32_t t75 = -254470346;
volatile uint32_t x549 = 4591873U;
static int16_t x551 = -1;
uint32_t t76 = 16U;
volatile uint32_t t81 = 1U;
uint16_t x601 = UINT16_MAX;
int32_t x618 = INT32_MIN;
uint64_t x621 = 234348061819488700LLU;
static uint8_t x626 = 6U;
int32_t t86 = -962;
int8_t x630 = 6;
volatile int32_t t87 = INT32_MAX;
uint8_t x656 = UINT8_MAX;
volatile int32_t x658 = 3896791;
int32_t x660 = -63431;
int32_t x668 = INT32_MIN;
volatile uint32_t x683 = 0U;
uint32_t x685 = UINT32_MAX;
volatile uint32_t x690 = 11834517U;
volatile int64_t x691 = INT64_MAX;
uint16_t x700 = UINT16_MAX;
int8_t x702 = INT8_MAX;
uint8_t x705 = 7U;
uint8_t x706 = UINT8_MAX;
int32_t t98 = 0;
static int16_t x713 = INT16_MAX;


void f0(void) {
	volatile int32_t x5 = INT32_MAX;
	int16_t x6 = INT16_MIN;
	volatile uint64_t x8 = 22LLU;
	volatile int32_t t0 = INT32_MAX;

	t0 = (x5>>(x6==(x7^x8)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MIN;
	uint64_t x15 = 1055366761451474770LLU;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x13>>(x14==(x15^x16)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = UINT16_MAX;
	int8_t x19 = 0;
	volatile int8_t x20 = -1;
	int32_t t2 = -259;

	t2 = (x17>>(x18==(x19^x20)));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = 10;
	static volatile int32_t x26 = 1065173776;
	static uint64_t x27 = 9LLU;
	volatile int8_t x28 = INT8_MAX;
	int32_t t3 = 7059;

	t3 = (x25>>(x26==(x27^x28)));

	if (t3 != 10) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MIN;
	uint16_t x32 = 95U;
	uint32_t t4 = 65U;

	t4 = (x29>>(x30==(x31^x32)));

	if (t4 != 170257U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = INT32_MAX;
	uint32_t x38 = 185U;
	int32_t x39 = INT32_MIN;
	int8_t x40 = 1;

	t5 = (x37>>(x38==(x39^x40)));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x45 = 30;
	volatile int64_t x46 = INT64_MAX;
	int8_t x47 = INT8_MIN;
	uint64_t x48 = UINT64_MAX;
	int32_t t6 = -2926105;

	t6 = (x45>>(x46==(x47^x48)));

	if (t6 != 30) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x49 = 40452047017933LL;
	static int64_t x50 = 12811LL;
	uint16_t x51 = 31128U;
	static volatile int64_t t7 = 21LL;

	t7 = (x49>>(x50==(x51^x52)));

	if (t7 != 40452047017933LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x65 = UINT16_MAX;
	volatile int8_t x67 = 0;
	uint8_t x68 = UINT8_MAX;
	int32_t t8 = 128239975;

	t8 = (x65>>(x66==(x67^x68)));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x69 = INT16_MAX;
	int16_t x71 = INT16_MAX;
	volatile int16_t x72 = 0;
	int32_t t9 = 9;

	t9 = (x69>>(x70==(x71^x72)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x81 = 1027073497450915689LL;
	uint32_t x84 = UINT32_MAX;
	volatile int64_t t10 = -65LL;

	t10 = (x81>>(x82==(x83^x84)));

	if (t10 != 1027073497450915689LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x89 = 0;
	static int32_t x90 = INT32_MIN;
	static int32_t x91 = 99526;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t11 = 4104;

	t11 = (x89>>(x90==(x91^x92)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x93 = UINT8_MAX;
	uint64_t x94 = 141063476686LLU;
	uint16_t x95 = 19U;
	static int64_t x96 = -8419840652360880LL;

	t12 = (x93>>(x94==(x95^x96)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x101 = 2U;
	uint16_t x103 = 23U;

	t13 = (x101>>(x102==(x103^x104)));

	if (t13 != 2U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x109 = UINT8_MAX;
	int8_t x110 = 2;
	uint8_t x111 = 0U;
	volatile int64_t x112 = INT64_MIN;
	int32_t t14 = 48426;

	t14 = (x109>>(x110==(x111^x112)));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x114 = -7LL;
	int64_t x115 = -1LL;
	int64_t x116 = -1LL;
	static volatile int32_t t15 = -29378882;

	t15 = (x113>>(x114==(x115^x116)));

	if (t15 != 1107) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x133 = UINT64_MAX;
	static int64_t x134 = -1LL;
	int64_t x135 = 502037728LL;
	uint64_t t16 = UINT64_MAX;

	t16 = (x133>>(x134==(x135^x136)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x140 = UINT8_MAX;
	int32_t t17 = 11262864;

	t17 = (x137>>(x138==(x139^x140)));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x142 = INT8_MAX;
	int16_t x143 = 1;
	int8_t x144 = -11;
	volatile int64_t t18 = 59043689897952LL;

	t18 = (x141>>(x142==(x143^x144)));

	if (t18 != 1695369026315353264LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x145 = 0;
	int64_t x146 = INT64_MAX;
	int8_t x147 = INT8_MIN;
	int32_t x148 = 1;
	volatile int32_t t19 = 1;

	t19 = (x145>>(x146==(x147^x148)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x149 = INT32_MAX;
	static int16_t x150 = -1;
	int32_t x152 = -796701663;
	int32_t t20 = INT32_MAX;

	t20 = (x149>>(x150==(x151^x152)));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x153 = 1U;
	uint8_t x154 = 45U;
	volatile int8_t x155 = -7;
	int16_t x156 = -1;
	volatile int32_t t21 = -1009078331;

	t21 = (x153>>(x154==(x155^x156)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x157 = INT16_MAX;
	uint32_t x158 = UINT32_MAX;
	static int16_t x159 = -1;
	int32_t t22 = -16690;

	t22 = (x157>>(x158==(x159^x160)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x161 = 13LLU;
	uint32_t x162 = 2472345U;
	static volatile int64_t x163 = 1104096434580177978LL;
	int64_t x164 = -1LL;
	volatile uint64_t t23 = 43LLU;

	t23 = (x161>>(x162==(x163^x164)));

	if (t23 != 13LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x165 = UINT64_MAX;
	uint8_t x166 = 11U;
	int64_t x167 = 1454656701LL;
	volatile uint16_t x168 = UINT16_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (x165>>(x166==(x167^x168)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x169 = INT8_MAX;
	static volatile uint32_t x170 = UINT32_MAX;
	static int8_t x171 = 46;
	int8_t x172 = INT8_MIN;
	int32_t t25 = 55;

	t25 = (x169>>(x170==(x171^x172)));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x173 = 0;
	uint16_t x174 = 0U;
	int16_t x175 = -3;
	static int64_t x176 = -1LL;
	int32_t t26 = 153898;

	t26 = (x173>>(x174==(x175^x176)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x185 = 12966009U;
	int8_t x186 = INT8_MIN;
	static volatile int8_t x187 = INT8_MIN;
	volatile uint32_t t27 = 7457U;

	t27 = (x185>>(x186==(x187^x188)));

	if (t27 != 12966009U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x190 = UINT32_MAX;
	int16_t x191 = -1;
	int32_t x192 = -1;
	static int32_t t28 = 40132;

	t28 = (x189>>(x190==(x191^x192)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x193 = UINT32_MAX;
	int64_t x194 = INT64_MAX;
	int32_t x195 = INT32_MAX;
	static uint64_t x196 = 709LLU;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x193>>(x194==(x195^x196)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x197 = 37;
	uint64_t x198 = 552873193093421529LLU;
	int8_t x199 = -1;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t30 = 20220618;

	t30 = (x197>>(x198==(x199^x200)));

	if (t30 != 37) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x205 = INT16_MAX;
	uint32_t x206 = 159532U;
	int64_t x207 = -2240002802884895295LL;
	int16_t x208 = INT16_MAX;
	volatile int32_t t31 = -472878605;

	t31 = (x205>>(x206==(x207^x208)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x209 = UINT32_MAX;
	uint64_t x210 = 7045632678LLU;
	static volatile int16_t x211 = 0;

	t32 = (x209>>(x210==(x211^x212)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x213 = 215LL;
	int64_t x215 = INT64_MIN;
	static uint32_t x216 = 1U;
	static int64_t t33 = -4505LL;

	t33 = (x213>>(x214==(x215^x216)));

	if (t33 != 215LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x221 = UINT64_MAX;
	uint64_t x222 = 367054519LLU;
	static int16_t x223 = -1;
	int32_t x224 = INT32_MIN;
	uint64_t t34 = UINT64_MAX;

	t34 = (x221>>(x222==(x223^x224)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x229 = INT64_MAX;
	int16_t x231 = -1;
	int64_t t35 = 174306272227777LL;

	t35 = (x229>>(x230==(x231^x232)));

	if (t35 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x249 = 12142;
	static int16_t x250 = INT16_MIN;
	static int32_t x251 = 86866616;
	int32_t x252 = INT32_MAX;
	volatile int32_t t36 = -246275405;

	t36 = (x249>>(x250==(x251^x252)));

	if (t36 != 12142) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x253 = INT64_MAX;
	uint16_t x255 = 1U;
	int64_t t37 = INT64_MAX;

	t37 = (x253>>(x254==(x255^x256)));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x258 = INT16_MAX;
	static int8_t x260 = INT8_MIN;
	volatile int32_t t38 = 3;

	t38 = (x257>>(x258==(x259^x260)));

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x265 = 236U;
	int64_t x266 = INT64_MIN;
	static uint8_t x268 = 28U;
	volatile uint32_t t39 = 140495U;

	t39 = (x265>>(x266==(x267^x268)));

	if (t39 != 236U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x269 = 6333U;
	uint8_t x270 = UINT8_MAX;
	static int8_t x271 = -1;
	volatile int64_t x272 = -1LL;
	static uint32_t t40 = 9680U;

	t40 = (x269>>(x270==(x271^x272)));

	if (t40 != 6333U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x275 = -1;

	t41 = (x273>>(x274==(x275^x276)));

	if (t41 != 46257) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x277 = INT32_MAX;
	int8_t x278 = INT8_MIN;
	static uint32_t x279 = UINT32_MAX;
	uint8_t x280 = 10U;
	volatile int32_t t42 = INT32_MAX;

	t42 = (x277>>(x278==(x279^x280)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x281 = UINT32_MAX;
	static volatile int8_t x282 = INT8_MIN;
	static volatile uint16_t x283 = 22484U;
	uint64_t x284 = UINT64_MAX;

	t43 = (x281>>(x282==(x283^x284)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x305 = 8U;
	static volatile int16_t x306 = 1;
	static int8_t x307 = INT8_MIN;
	volatile uint8_t x308 = 0U;
	static volatile int32_t t44 = -1549;

	t44 = (x305>>(x306==(x307^x308)));

	if (t44 != 8) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x309 = INT16_MAX;
	uint8_t x310 = UINT8_MAX;
	int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MIN;

	t45 = (x309>>(x310==(x311^x312)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x317 = 2533U;
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = INT64_MAX;
	static uint32_t x320 = 11U;
	static int32_t t46 = 292929;

	t46 = (x317>>(x318==(x319^x320)));

	if (t46 != 2533) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x325 = 277622;
	static uint8_t x326 = 31U;
	volatile int32_t x327 = -1;
	uint32_t x328 = 20U;

	t47 = (x325>>(x326==(x327^x328)));

	if (t47 != 277622) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x329 = 24244U;
	static volatile uint8_t x330 = 3U;
	uint8_t x331 = 0U;
	static int64_t x332 = -203604923308841LL;
	static volatile uint32_t t48 = 105U;

	t48 = (x329>>(x330==(x331^x332)));

	if (t48 != 24244U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x347 = -1;
	int32_t t49 = 264939;

	t49 = (x345>>(x346==(x347^x348)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x350 = 195830896LL;
	int32_t x351 = 182702;
	uint64_t x352 = 481072333309LLU;

	t50 = (x349>>(x350==(x351^x352)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x353 = 359516142LL;
	int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	volatile int64_t t51 = -274566917LL;

	t51 = (x353>>(x354==(x355^x356)));

	if (t51 != 359516142LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x358 = -5;
	int64_t x360 = INT64_MAX;

	t52 = (x357>>(x358==(x359^x360)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x361 = 27U;
	uint32_t x362 = 4388U;
	int8_t x363 = -2;

	t53 = (x361>>(x362==(x363^x364)));

	if (t53 != 27) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x365 = UINT8_MAX;
	volatile int64_t x366 = INT64_MIN;
	int16_t x368 = 448;
	static int32_t t54 = 200426;

	t54 = (x365>>(x366==(x367^x368)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x370 = -1;
	uint64_t x371 = UINT64_MAX;
	volatile uint32_t x372 = UINT32_MAX;

	t55 = (x369>>(x370==(x371^x372)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x374 = 9U;
	static int32_t x375 = 6414076;
	uint16_t x376 = 12399U;

	t56 = (x373>>(x374==(x375^x376)));

	if (t56 != 521486684LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x385 = UINT16_MAX;
	volatile uint8_t x386 = 125U;
	uint16_t x388 = 1U;

	t57 = (x385>>(x386==(x387^x388)));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x389 = 300LLU;
	int32_t x390 = -1;
	int8_t x392 = -49;
	static uint64_t t58 = 253759489854277098LLU;

	t58 = (x389>>(x390==(x391^x392)));

	if (t58 != 300LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x397 = 172360LL;
	int8_t x398 = INT8_MAX;
	uint32_t x399 = 3281938U;
	static uint64_t x400 = UINT64_MAX;
	volatile int64_t t59 = -1594173LL;

	t59 = (x397>>(x398==(x399^x400)));

	if (t59 != 172360LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x405 = 102620U;
	int32_t x406 = -44;
	static int64_t x407 = INT64_MIN;
	static uint16_t x408 = UINT16_MAX;
	uint32_t t60 = 2117926483U;

	t60 = (x405>>(x406==(x407^x408)));

	if (t60 != 102620U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x410 = INT16_MIN;
	int8_t x411 = 3;
	static uint16_t x412 = 956U;
	volatile int32_t t61 = -71274546;

	t61 = (x409>>(x410==(x411^x412)));

	if (t61 != 34) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x414 = 27830746U;
	int32_t t62 = 5;

	t62 = (x413>>(x414==(x415^x416)));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x418 = INT64_MAX;
	static uint16_t x419 = UINT16_MAX;
	static int8_t x420 = 1;
	uint32_t t63 = 0U;

	t63 = (x417>>(x418==(x419^x420)));

	if (t63 != 3530U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x425 = 7;
	int64_t x426 = -1LL;
	int32_t x428 = INT32_MIN;
	volatile int32_t t64 = -229754081;

	t64 = (x425>>(x426==(x427^x428)));

	if (t64 != 7) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x429 = 15U;
	int16_t x431 = INT16_MAX;
	static volatile int32_t t65 = 1486155;

	t65 = (x429>>(x430==(x431^x432)));

	if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x441 = 848LL;
	static volatile int16_t x442 = INT16_MIN;
	static uint8_t x443 = UINT8_MAX;
	int64_t x444 = INT64_MIN;
	static int64_t t66 = -3758462LL;

	t66 = (x441>>(x442==(x443^x444)));

	if (t66 != 848LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x450 = -652138117143016859LL;
	int64_t x452 = INT64_MAX;
	int32_t t67 = -227028157;

	t67 = (x449>>(x450==(x451^x452)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x457 = INT16_MAX;
	int16_t x459 = INT16_MAX;

	t68 = (x457>>(x458==(x459^x460)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x461 = 688LLU;
	volatile uint8_t x463 = 15U;
	int32_t x464 = -695864;
	volatile uint64_t t69 = 1989644LLU;

	t69 = (x461>>(x462==(x463^x464)));

	if (t69 != 688LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x477 = INT8_MAX;
	int64_t x478 = INT64_MIN;
	volatile uint64_t x480 = 864LLU;
	int32_t t70 = 239461699;

	t70 = (x477>>(x478==(x479^x480)));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x485 = 21U;
	int32_t x487 = -3872674;
	static int8_t x488 = 6;
	int32_t t71 = -522011581;

	t71 = (x485>>(x486==(x487^x488)));

	if (t71 != 21) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x497 = UINT16_MAX;
	static int64_t x498 = -1LL;
	volatile int32_t t72 = -30;

	t72 = (x497>>(x498==(x499^x500)));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x521 = 204LLU;
	uint32_t x522 = 16U;
	volatile int64_t x523 = 3835777256LL;
	static int32_t x524 = INT32_MIN;
	uint64_t t73 = 3589387LLU;

	t73 = (x521>>(x522==(x523^x524)));

	if (t73 != 204LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x537 = 298U;
	int8_t x538 = -1;
	int64_t x539 = -1LL;
	uint8_t x540 = 23U;

	t74 = (x537>>(x538==(x539^x540)));

	if (t74 != 298) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x541 = UINT16_MAX;
	int8_t x542 = INT8_MAX;
	volatile uint16_t x543 = 16U;
	int8_t x544 = INT8_MAX;

	t75 = (x541>>(x542==(x543^x544)));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x550 = INT64_MIN;
	volatile int64_t x552 = -1LL;

	t76 = (x549>>(x550==(x551^x552)));

	if (t76 != 4591873U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x557 = UINT16_MAX;
	int16_t x558 = -1;
	volatile uint16_t x559 = UINT16_MAX;
	static int32_t x560 = INT32_MAX;
	int32_t t77 = -1268;

	t77 = (x557>>(x558==(x559^x560)));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x561 = UINT32_MAX;
	static uint16_t x562 = 22U;
	int16_t x563 = 8;
	int8_t x564 = INT8_MIN;
	uint32_t t78 = UINT32_MAX;

	t78 = (x561>>(x562==(x563^x564)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x577 = 6092U;
	int16_t x578 = -18;
	volatile uint32_t x579 = UINT32_MAX;
	uint64_t x580 = 54760054LLU;
	int32_t t79 = -170686399;

	t79 = (x577>>(x578==(x579^x580)));

	if (t79 != 6092) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x581 = 61159786LL;
	uint32_t x582 = 6U;
	int64_t x583 = -351406337506323LL;
	int8_t x584 = -3;
	int64_t t80 = 7721932182013882LL;

	t80 = (x581>>(x582==(x583^x584)));

	if (t80 != 61159786LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x593 = 386719U;
	uint16_t x594 = 1599U;
	uint64_t x595 = UINT64_MAX;
	volatile int16_t x596 = INT16_MAX;

	t81 = (x593>>(x594==(x595^x596)));

	if (t81 != 386719U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x602 = 369LL;
	int32_t x603 = 9;
	int64_t x604 = -2773047242038LL;
	static int32_t t82 = -1187;

	t82 = (x601>>(x602==(x603^x604)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x613 = 584U;
	int8_t x614 = INT8_MAX;
	static int16_t x615 = -2;
	static int16_t x616 = INT16_MIN;
	static volatile uint32_t t83 = 13U;

	t83 = (x613>>(x614==(x615^x616)));

	if (t83 != 584U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x617 = 76U;
	uint64_t x619 = 2558755320LLU;
	uint64_t x620 = 57830429103LLU;
	static volatile int32_t t84 = 64811361;

	t84 = (x617>>(x618==(x619^x620)));

	if (t84 != 76) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x622 = INT8_MIN;
	uint8_t x623 = 2U;
	uint8_t x624 = 1U;
	uint64_t t85 = 47830610610364LLU;

	t85 = (x621>>(x622==(x623^x624)));

	if (t85 != 234348061819488700LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x625 = 7;
	uint32_t x627 = UINT32_MAX;
	int8_t x628 = -52;

	t86 = (x625>>(x626==(x627^x628)));

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x629 = INT32_MAX;
	static volatile uint16_t x631 = UINT16_MAX;
	volatile int8_t x632 = -14;

	t87 = (x629>>(x630==(x631^x632)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x649 = INT32_MAX;
	static volatile int16_t x650 = INT16_MIN;
	int32_t x651 = INT32_MIN;
	int32_t x652 = 1;
	int32_t t88 = INT32_MAX;

	t88 = (x649>>(x650==(x651^x652)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x653 = 382764859U;
	uint64_t x654 = UINT64_MAX;
	static int8_t x655 = -20;
	uint32_t t89 = 3U;

	t89 = (x653>>(x654==(x655^x656)));

	if (t89 != 382764859U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x657 = 32428544U;
	static int16_t x659 = 3;
	uint32_t t90 = 0U;

	t90 = (x657>>(x658==(x659^x660)));

	if (t90 != 32428544U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x665 = UINT64_MAX;
	int64_t x666 = INT64_MIN;
	int32_t x667 = 0;
	static uint64_t t91 = UINT64_MAX;

	t91 = (x665>>(x666==(x667^x668)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x669 = UINT64_MAX;
	int32_t x670 = INT32_MAX;
	int16_t x671 = INT16_MAX;
	volatile int32_t x672 = 2896;
	uint64_t t92 = UINT64_MAX;

	t92 = (x669>>(x670==(x671^x672)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x681 = 1U;
	uint32_t x682 = 18479U;
	int32_t x684 = INT32_MIN;
	int32_t t93 = -5;

	t93 = (x681>>(x682==(x683^x684)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x686 = 9;
	volatile int32_t x687 = -13534078;
	int8_t x688 = INT8_MAX;
	uint32_t t94 = UINT32_MAX;

	t94 = (x685>>(x686==(x687^x688)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x689 = 2053207894U;
	volatile uint8_t x692 = UINT8_MAX;
	uint32_t t95 = 22999780U;

	t95 = (x689>>(x690==(x691^x692)));

	if (t95 != 2053207894U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x697 = INT64_MAX;
	int64_t x698 = 502314298LL;
	uint64_t x699 = 4067780LLU;
	static int64_t t96 = INT64_MAX;

	t96 = (x697>>(x698==(x699^x700)));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x701 = 2372U;
	uint64_t x703 = 7510LLU;
	int64_t x704 = INT64_MIN;
	volatile uint32_t t97 = 16844417U;

	t97 = (x701>>(x702==(x703^x704)));

	if (t97 != 2372U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x707 = -1LL;
	static int32_t x708 = INT32_MIN;

	t98 = (x705>>(x706==(x707^x708)));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x714 = -1;
	uint64_t x715 = UINT64_MAX;
	int32_t x716 = 3974;
	int32_t t99 = 5;

	t99 = (x713>>(x714==(x715^x716)));

	if (t99 != 32767) { NG(); } else { ; }
	
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

