#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = -12;
int64_t x18 = -1LL;
volatile uint8_t x26 = 18U;
uint32_t x28 = UINT32_MAX;
int32_t x43 = INT32_MAX;
static volatile uint32_t x46 = 37222775U;
uint32_t x47 = 2086785U;
static int16_t x50 = INT16_MIN;
int16_t x52 = -1;
static int32_t x57 = INT32_MIN;
volatile uint16_t x58 = UINT16_MAX;
volatile uint32_t x59 = 1077U;
volatile uint16_t x60 = 53U;
volatile int16_t x71 = -3;
int64_t t11 = 122965017771930309LL;
volatile int16_t x94 = INT16_MIN;
volatile uint16_t x105 = 16U;
volatile int16_t x131 = INT16_MAX;
int16_t x132 = 986;
int64_t t19 = -1LL;
static int64_t x134 = -21351238763LL;
volatile int64_t x138 = INT64_MIN;
uint32_t t23 = 1595521777U;
int64_t x154 = INT64_MIN;
static volatile int8_t x158 = INT8_MIN;
uint32_t x159 = 59U;
uint64_t x161 = UINT64_MAX;
uint64_t x163 = 8745730636813576LLU;
static int8_t x168 = INT8_MAX;
volatile int32_t t27 = 22414143;
static int32_t x169 = -3068663;
int64_t t28 = -8194700LL;
static volatile uint64_t t35 = 47073588LLU;
int16_t x213 = -1;
static uint8_t x215 = UINT8_MAX;
static int8_t x229 = INT8_MIN;
volatile int64_t x230 = INT64_MIN;
uint16_t x231 = 35U;
static uint32_t x232 = UINT32_MAX;
int64_t t39 = 190501408167207942LL;
int8_t x258 = -32;
static volatile int64_t t42 = -5423587LL;
volatile int16_t x269 = INT16_MIN;
static int8_t x272 = INT8_MIN;
static int32_t t43 = 26666385;
static uint8_t x277 = UINT8_MAX;
static int8_t x281 = -1;
int32_t x282 = -1;
uint64_t x283 = 1005914735738LLU;
int32_t x285 = INT32_MIN;
static volatile int32_t x289 = 417;
int64_t x307 = 421458707LL;
static volatile int8_t x324 = 3;
uint8_t x340 = UINT8_MAX;
volatile uint32_t t56 = 997728U;
int8_t x353 = -1;
int16_t x356 = INT16_MIN;
uint16_t x361 = UINT16_MAX;
int32_t t61 = 245;
uint32_t x365 = UINT32_MAX;
int16_t x366 = INT16_MIN;
int16_t x368 = -165;
volatile uint8_t x369 = UINT8_MAX;
int32_t t64 = -8699;
static int32_t x397 = 15683;
int8_t x399 = INT8_MIN;
int32_t x408 = INT32_MIN;
uint32_t x411 = 3434998U;
volatile int8_t x412 = -2;
int32_t x430 = -1;
uint32_t x433 = 2051481U;
int32_t x447 = 1244019;
int32_t x451 = INT32_MIN;
uint8_t x452 = UINT8_MAX;
volatile uint8_t x454 = 21U;
int8_t x455 = 45;
volatile int32_t x474 = INT32_MIN;
volatile int8_t x477 = -1;
uint32_t x496 = 2021U;
int8_t x523 = INT8_MIN;
static uint8_t x527 = 27U;
volatile int64_t t83 = -23631492LL;
volatile int32_t t84 = -11774550;
int32_t x539 = 39168926;
static uint64_t t86 = 2506355LLU;
int64_t x543 = INT64_MIN;
int32_t x547 = INT32_MIN;
static uint16_t x550 = 1371U;
static int16_t x553 = 8;
static uint32_t x554 = 1017371305U;
int16_t x559 = -40;
int64_t x560 = INT64_MIN;
uint16_t x570 = 1U;
uint64_t t93 = 865430491061659347LLU;
int64_t x574 = 1LL;
int8_t x576 = INT8_MAX;
int32_t x579 = INT32_MIN;
uint8_t x581 = 28U;
int32_t x582 = INT32_MAX;
int32_t t96 = 2252;
uint16_t x587 = 77U;
int8_t x589 = 0;
int8_t x590 = 1;
volatile int64_t x596 = -1LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int64_t x2 = 1LL;
	int8_t x4 = INT8_MIN;
	int64_t t0 = -281LL;

	t0 = (x1/((x2%x3)%x4));

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint32_t x6 = 15551U;
	int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MIN;
	volatile uint32_t t1 = 1U;

	t1 = (x5/((x6%x7)%x8));

	if (t1 != 276185U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = -1;
	int64_t x14 = INT64_MIN;
	uint64_t x15 = 2541LLU;
	volatile int64_t x16 = 1769837318LL;
	volatile uint64_t t2 = 14LLU;

	t2 = (x13/((x14%x15)%x16));

	if (t2 != 39248391646190535LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	static int16_t x19 = 52;
	int64_t x20 = INT64_MAX;
	volatile int64_t t3 = -805058280772960LL;

	t3 = (x17/((x18%x19)%x20));

	if (t3 != 128LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	static volatile int8_t x27 = -47;
	int64_t t4 = -46LL;

	t4 = (x25/((x26%x27)%x28));

	if (t4 != -512409557603043100LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = INT8_MIN;
	int32_t x34 = -1;
	uint32_t x35 = 185U;
	int64_t x36 = INT64_MIN;
	static volatile int64_t t5 = 95532284LL;

	t5 = (x33/((x34%x35)%x36));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = 54U;
	volatile int16_t x42 = INT16_MIN;
	uint64_t x44 = UINT64_MAX;
	uint64_t t6 = 1521LLU;

	t6 = (x41/((x42%x43)%x44));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x45 = INT16_MIN;
	volatile int16_t x48 = -1;
	volatile uint32_t t7 = 990840U;

	t7 = (x45/((x46%x47)%x48));

	if (t7 != 2457U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = -1;
	uint32_t x51 = 325352331U;
	volatile uint32_t t8 = 35U;

	t8 = (x49/((x50%x51)%x52));

	if (t8 != 65U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t t9 = 581387644U;

	t9 = (x57/((x58%x59)%x60));

	if (t9 != 153391689U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = INT8_MIN;
	uint8_t x66 = 36U;
	uint64_t x67 = 3326LLU;
	static uint64_t x68 = 14973LLU;
	static volatile uint64_t t10 = 24582LLU;

	t10 = (x65/((x66%x67)%x68));

	if (t10 != 512409557603043096LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x69 = UINT8_MAX;
	int64_t x70 = -1LL;
	int8_t x72 = INT8_MIN;

	t11 = (x69/((x70%x71)%x72));

	if (t11 != -255LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x77 = INT8_MAX;
	int8_t x78 = INT8_MAX;
	volatile int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MAX;
	int32_t t12 = -63966818;

	t12 = (x77/((x78%x79)%x80));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = INT16_MIN;
	uint32_t x86 = 5675U;
	int16_t x87 = -1;
	uint16_t x88 = 20820U;
	volatile uint32_t t13 = 3879U;

	t13 = (x85/((x86%x87)%x88));

	if (t13 != 756816U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x93 = 244354233LL;
	int8_t x95 = -3;
	uint64_t x96 = 4205627991399850512LLU;
	uint64_t t14 = 77962654286LLU;

	t14 = (x93/((x94%x95)%x96));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x97 = 414075LLU;
	static uint32_t x98 = 1631341700U;
	volatile int16_t x99 = INT16_MIN;
	volatile uint32_t x100 = UINT32_MAX;
	uint64_t t15 = 1319041LLU;

	t15 = (x97/((x98%x99)%x100));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x106 = INT8_MIN;
	volatile uint8_t x107 = 62U;
	static volatile uint64_t x108 = 123179181144LLU;
	uint64_t t16 = 4948895296898953LLU;

	t16 = (x105/((x106%x107)%x108));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x109 = 9257956LLU;
	uint16_t x110 = 7U;
	int16_t x111 = INT16_MIN;
	uint64_t x112 = 1428018LLU;
	uint64_t t17 = 207LLU;

	t17 = (x109/((x110%x111)%x112));

	if (t17 != 1322565LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x121 = 1312598U;
	volatile uint32_t x122 = UINT32_MAX;
	int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MAX;
	volatile uint32_t t18 = 2482174U;

	t18 = (x121/((x122%x123)%x124));

	if (t18 != 1312598U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MAX;

	t19 = (x129/((x130%x131)%x132));

	if (t19 != -306783378LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x133 = -1;
	static int64_t x135 = INT64_MAX;
	static int16_t x136 = INT16_MIN;
	static volatile int64_t t20 = 886263625LL;

	t20 = (x133/((x134%x135)%x136));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x137 = 3955462963LLU;
	int64_t x139 = INT64_MAX;
	static int8_t x140 = INT8_MIN;
	volatile uint64_t t21 = 1659966221400174163LLU;

	t21 = (x137/((x138%x139)%x140));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	static uint16_t x143 = 13U;
	uint64_t x144 = 33809046LLU;
	static volatile uint64_t t22 = 5768978385757LLU;

	t22 = (x141/((x142%x143)%x144));

	if (t22 != 1259652489902LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x145 = 73U;
	uint8_t x146 = 115U;
	int16_t x147 = INT16_MAX;
	uint32_t x148 = 34450U;

	t23 = (x145/((x146%x147)%x148));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x153 = 18U;
	int64_t x155 = 1628LL;
	uint16_t x156 = UINT16_MAX;
	static int64_t t24 = -981813252LL;

	t24 = (x153/((x154%x155)%x156));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x157 = -1;
	int64_t x160 = -471798353124052639LL;
	static volatile int64_t t25 = -65708LL;

	t25 = (x157/((x158%x159)%x160));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x162 = INT8_MIN;
	int16_t x164 = INT16_MIN;
	volatile uint64_t t26 = 403231LLU;

	t26 = (x161/((x162%x163)%x164));

	if (t26 != 9231LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x165 = INT32_MIN;
	int16_t x166 = -1466;
	volatile int32_t x167 = -3;

	t27 = (x165/((x166%x167)%x168));

	if (t27 != 1073741824) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x170 = 2092347605385LL;
	int8_t x171 = 8;
	uint32_t x172 = UINT32_MAX;

	t28 = (x169/((x170%x171)%x172));

	if (t28 != -3068663LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x173 = 0;
	int16_t x174 = -1;
	volatile int8_t x175 = INT8_MIN;
	int64_t x176 = INT64_MIN;
	int64_t t29 = -1LL;

	t29 = (x173/((x174%x175)%x176));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MAX;
	static uint64_t x179 = 8237000676513597492LLU;
	volatile int64_t x180 = INT64_MAX;
	uint64_t t30 = 299144598244812224LLU;

	t30 = (x177/((x178%x179)%x180));

	if (t30 != 8589934595LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x181 = INT16_MIN;
	static volatile int8_t x182 = INT8_MIN;
	static int16_t x183 = -7697;
	uint16_t x184 = 3U;
	static volatile int32_t t31 = -294;

	t31 = (x181/((x182%x183)%x184));

	if (t31 != 16384) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x185 = INT64_MIN;
	int32_t x186 = INT32_MIN;
	int16_t x187 = 4490;
	int16_t x188 = INT16_MAX;
	volatile int64_t t32 = 4692LL;

	t32 = (x185/((x186%x187)%x188));

	if (t32 != 4710608803296616LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x189 = 3U;
	int64_t x190 = -1LL;
	int8_t x191 = INT8_MIN;
	volatile uint16_t x192 = 23922U;
	int64_t t33 = 4764956630LL;

	t33 = (x189/((x190%x191)%x192));

	if (t33 != -3LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x193 = 3U;
	volatile uint32_t x194 = 32U;
	int16_t x195 = -1;
	int32_t x196 = -1;
	volatile uint32_t t34 = 0U;

	t34 = (x193/((x194%x195)%x196));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x197 = 18LLU;
	volatile uint8_t x198 = UINT8_MAX;
	static uint64_t x199 = 130688690077760921LLU;
	int8_t x200 = INT8_MIN;

	t35 = (x197/((x198%x199)%x200));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x214 = 22U;
	volatile int16_t x216 = 200;
	int32_t t36 = 1955688;

	t36 = (x213/((x214%x215)%x216));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x221 = -669689LL;
	uint64_t x222 = UINT64_MAX;
	volatile int64_t x223 = INT64_MIN;
	int64_t x224 = INT64_MIN;
	volatile uint64_t t37 = 114416797748564147LLU;

	t37 = (x221/((x222%x223)%x224));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x225 = -1;
	int64_t x226 = -4191554713149708LL;
	static uint16_t x227 = 7377U;
	volatile int8_t x228 = 46;
	volatile int64_t t38 = 448108LL;

	t38 = (x225/((x226%x227)%x228));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {


	t39 = (x229/((x230%x231)%x232));

	if (t39 != 16LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x253 = -71;
	static uint32_t x254 = UINT32_MAX;
	volatile int64_t x255 = -646909LL;
	uint64_t x256 = 356249536257LLU;
	volatile uint64_t t40 = 5395015256LLU;

	t40 = (x253/((x254%x255)%x256));

	if (t40 != 133243362469370LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x257 = -27;
	uint8_t x259 = 17U;
	uint32_t x260 = 35536U;
	volatile uint32_t t41 = 5731379U;

	t41 = (x257/((x258%x259)%x260));

	if (t41 != 281655U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x261 = 263657U;
	static uint16_t x262 = 56U;
	int64_t x263 = INT64_MIN;
	static int64_t x264 = -1092721866688639428LL;

	t42 = (x261/((x262%x263)%x264));

	if (t42 != 4708LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x270 = 11405;
	uint8_t x271 = UINT8_MAX;

	t43 = (x269/((x270%x271)%x272));

	if (t43 != -574) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x273 = -37;
	volatile uint64_t x274 = 1460LLU;
	int64_t x275 = 929336LL;
	int32_t x276 = INT32_MAX;
	static volatile uint64_t t44 = 2019556LLU;

	t44 = (x273/((x274%x275)%x276));

	if (t44 != 12634756214869555LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x278 = INT8_MIN;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MAX;
	volatile int32_t t45 = -1657547;

	t45 = (x277/((x278%x279)%x280));

	if (t45 != -255) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x284 = UINT8_MAX;
	volatile uint64_t t46 = 242792LLU;

	t46 = (x281/((x282%x283)%x284));

	if (t46 != 202711473337467600LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x286 = UINT32_MAX;
	static int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MAX;
	int64_t t47 = -981LL;

	t47 = (x285/((x286%x287)%x288));

	if (t47 != -16909320LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x290 = 7738U;
	volatile int16_t x291 = INT16_MIN;
	int32_t x292 = INT32_MAX;
	static uint32_t t48 = 14460U;

	t48 = (x289/((x290%x291)%x292));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x293 = -1;
	uint8_t x294 = 52U;
	volatile int8_t x295 = INT8_MAX;
	uint64_t x296 = UINT64_MAX;
	uint64_t t49 = 5327885LLU;

	t49 = (x293/((x294%x295)%x296));

	if (t49 != 354745078340568300LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x297 = INT64_MIN;
	volatile int8_t x298 = INT8_MIN;
	int16_t x299 = 291;
	volatile int32_t x300 = INT32_MAX;
	int64_t t50 = 552998455018134LL;

	t50 = (x297/((x298%x299)%x300));

	if (t50 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x305 = INT32_MIN;
	int16_t x306 = -1;
	int8_t x308 = INT8_MIN;
	int64_t t51 = -16156LL;

	t51 = (x305/((x306%x307)%x308));

	if (t51 != 2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x309 = 45U;
	int8_t x310 = -1;
	uint8_t x311 = UINT8_MAX;
	uint8_t x312 = 33U;
	volatile int32_t t52 = -2776317;

	t52 = (x309/((x310%x311)%x312));

	if (t52 != -45) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x317 = 94069610782261908LL;
	volatile uint32_t x318 = 255U;
	int32_t x319 = INT32_MIN;
	int8_t x320 = INT8_MAX;
	int64_t t53 = -223526489LL;

	t53 = (x317/((x318%x319)%x320));

	if (t53 != 94069610782261908LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x321 = INT32_MIN;
	static uint16_t x322 = 2798U;
	uint16_t x323 = 3U;
	int32_t t54 = -1636;

	t54 = (x321/((x322%x323)%x324));

	if (t54 != -1073741824) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x329 = UINT64_MAX;
	int16_t x330 = -1;
	static volatile int32_t x331 = INT32_MIN;
	int64_t x332 = -74935316026LL;
	uint64_t t55 = 19356LLU;

	t55 = (x329/((x330%x331)%x332));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x337 = 155583861U;
	static int8_t x338 = -1;
	int32_t x339 = 656690003;

	t56 = (x337/((x338%x339)%x340));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x341 = 23;
	int16_t x342 = 5;
	static uint32_t x343 = UINT32_MAX;
	int16_t x344 = INT16_MAX;
	volatile uint32_t t57 = 5352U;

	t57 = (x341/((x342%x343)%x344));

	if (t57 != 4U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x345 = -1LL;
	volatile uint8_t x346 = UINT8_MAX;
	int64_t x347 = INT64_MAX;
	uint64_t x348 = 34745445290434818LLU;
	uint64_t t58 = 22069LLU;

	t58 = (x345/((x346%x347)%x348));

	if (t58 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x349 = 36U;
	static int64_t x350 = 45447592120164119LL;
	volatile uint32_t x351 = UINT32_MAX;
	int32_t x352 = INT32_MAX;
	int64_t t59 = 700LL;

	t59 = (x349/((x350%x351)%x352));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x354 = INT16_MAX;
	int32_t x355 = 93;
	volatile int32_t t60 = 1055939406;

	t60 = (x353/((x354%x355)%x356));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x362 = 2U;
	int8_t x363 = 26;
	volatile int8_t x364 = INT8_MIN;

	t61 = (x361/((x362%x363)%x364));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x367 = 15853483LLU;
	volatile uint64_t t62 = 16606059878238600LLU;

	t62 = (x365/((x366%x367)%x368));

	if (t62 != 358LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x370 = 1039698526925LLU;
	uint16_t x371 = 13177U;
	volatile int8_t x372 = 51;
	uint64_t t63 = 175074643LLU;

	t63 = (x369/((x370%x371)%x372));

	if (t63 != 36LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x373 = UINT8_MAX;
	uint8_t x374 = 74U;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = 31U;

	t64 = (x373/((x374%x375)%x376));

	if (t64 != 21) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x398 = INT16_MAX;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t65 = -20056279;

	t65 = (x397/((x398%x399)%x400));

	if (t65 != 123) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x405 = 62757474LLU;
	int16_t x406 = -1;
	int8_t x407 = INT8_MIN;
	volatile uint64_t t66 = 34615238LLU;

	t66 = (x405/((x406%x407)%x408));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x409 = INT8_MIN;
	static int16_t x410 = INT16_MIN;
	uint32_t t67 = 16120U;

	t67 = (x409/((x410%x411)%x412));

	if (t67 != 3618U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x417 = -8;
	int8_t x418 = -1;
	int16_t x419 = 250;
	static int16_t x420 = 176;
	int32_t t68 = 29881;

	t68 = (x417/((x418%x419)%x420));

	if (t68 != 8) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x429 = UINT16_MAX;
	int64_t x431 = 38602830777499LL;
	uint16_t x432 = 13U;
	int64_t t69 = -1990490LL;

	t69 = (x429/((x430%x431)%x432));

	if (t69 != -65535LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x434 = -3;
	static int64_t x435 = -1719280319642LL;
	static int16_t x436 = 3027;
	static int64_t t70 = -952906829491LL;

	t70 = (x433/((x434%x435)%x436));

	if (t70 != -683827LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x441 = 92U;
	volatile uint8_t x442 = 3U;
	int16_t x443 = INT16_MAX;
	volatile uint32_t x444 = 20945406U;
	volatile uint32_t t71 = 59078696U;

	t71 = (x441/((x442%x443)%x444));

	if (t71 != 30U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x445 = -1LL;
	uint16_t x446 = 487U;
	uint8_t x448 = UINT8_MAX;
	volatile int64_t t72 = -144485LL;

	t72 = (x445/((x446%x447)%x448));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x449 = -1;
	int16_t x450 = 110;
	int32_t t73 = -343208374;

	t73 = (x449/((x450%x451)%x452));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x453 = INT16_MAX;
	volatile int64_t x456 = INT64_MIN;
	static int64_t t74 = 9333310418LL;

	t74 = (x453/((x454%x455)%x456));

	if (t74 != 1560LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x473 = 97U;
	uint16_t x475 = 101U;
	static int32_t x476 = INT32_MIN;
	int32_t t75 = 3;

	t75 = (x473/((x474%x475)%x476));

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x478 = 1455U;
	int8_t x479 = INT8_MIN;
	uint16_t x480 = UINT16_MAX;
	volatile int32_t t76 = 1;

	t76 = (x477/((x478%x479)%x480));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x485 = 5364LLU;
	uint16_t x486 = 14537U;
	int16_t x487 = -290;
	int16_t x488 = INT16_MIN;
	volatile uint64_t t77 = 990552024593924309LLU;

	t77 = (x485/((x486%x487)%x488));

	if (t77 != 144LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x493 = INT16_MIN;
	uint16_t x494 = 3766U;
	int32_t x495 = INT32_MAX;
	static volatile uint32_t t78 = 58502132U;

	t78 = (x493/((x494%x495)%x496));

	if (t78 != 2461280U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x509 = 806U;
	uint32_t x510 = 209U;
	uint16_t x511 = 3208U;
	uint64_t x512 = 4108709510LLU;
	static volatile uint64_t t79 = 1815LLU;

	t79 = (x509/((x510%x511)%x512));

	if (t79 != 3LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x513 = -1;
	int8_t x514 = INT8_MAX;
	int32_t x515 = INT32_MAX;
	volatile int64_t x516 = INT64_MIN;
	volatile int64_t t80 = 161903645LL;

	t80 = (x513/((x514%x515)%x516));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x517 = -1;
	static int32_t x518 = 1;
	volatile uint32_t x519 = 1007258U;
	static volatile int32_t x520 = -1;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (x517/((x518%x519)%x520));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x521 = INT64_MIN;
	int8_t x522 = INT8_MAX;
	int64_t x524 = INT64_MIN;
	volatile int64_t t82 = -28535091041105788LL;

	t82 = (x521/((x522%x523)%x524));

	if (t82 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x525 = 30;
	int8_t x526 = INT8_MIN;
	int64_t x528 = INT64_MIN;

	t83 = (x525/((x526%x527)%x528));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x529 = 2U;
	volatile uint8_t x530 = UINT8_MAX;
	static int16_t x531 = 8;
	volatile uint8_t x532 = UINT8_MAX;

	t84 = (x529/((x530%x531)%x532));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x533 = 5U;
	int8_t x534 = -1;
	int16_t x535 = 2;
	uint32_t x536 = 470U;
	volatile uint32_t t85 = 267904356U;

	t85 = (x533/((x534%x535)%x536));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x537 = 4278015654879036LL;
	static int16_t x538 = INT16_MIN;
	uint64_t x540 = UINT64_MAX;

	t86 = (x537/((x538%x539)%x540));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x541 = INT32_MIN;
	volatile int16_t x542 = -1;
	volatile uint32_t x544 = 16634589U;
	static volatile int64_t t87 = 1279LL;

	t87 = (x541/((x542%x543)%x544));

	if (t87 != 2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x545 = INT32_MIN;
	uint32_t x546 = UINT32_MAX;
	uint32_t x548 = 524245U;
	static uint32_t t88 = 422492U;

	t88 = (x545/((x546%x547)%x548));

	if (t88 != 12192U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x549 = INT8_MIN;
	int32_t x551 = -29;
	int32_t x552 = -1151133;
	static int32_t t89 = -2962;

	t89 = (x549/((x550%x551)%x552));

	if (t89 != -16) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x555 = -21;
	volatile int16_t x556 = -1;
	uint32_t t90 = 30830U;

	t90 = (x553/((x554%x555)%x556));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x557 = -1;
	volatile uint64_t x558 = UINT64_MAX;
	volatile uint64_t t91 = 998LLU;

	t91 = (x557/((x558%x559)%x560));

	if (t91 != 472993437787424400LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x565 = UINT64_MAX;
	uint32_t x566 = UINT32_MAX;
	static uint32_t x567 = 1433191U;
	int32_t x568 = INT32_MIN;
	uint64_t t92 = 1881651762015LLU;

	t92 = (x565/((x566%x567)%x568));

	if (t92 != 16367150321065LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x569 = 31U;
	uint64_t x571 = UINT64_MAX;
	int16_t x572 = -1;

	t93 = (x569/((x570%x571)%x572));

	if (t93 != 31LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x573 = INT16_MAX;
	int16_t x575 = INT16_MIN;
	volatile int64_t t94 = 0LL;

	t94 = (x573/((x574%x575)%x576));

	if (t94 != 32767LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x577 = 3932964LL;
	volatile int32_t x578 = INT32_MAX;
	uint64_t x580 = 2104LLU;
	uint64_t t95 = 941746LLU;

	t95 = (x577/((x578%x579)%x580));

	if (t95 != 14096LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x583 = -17;
	int8_t x584 = INT8_MIN;

	t96 = (x581/((x582%x583)%x584));

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x585 = INT64_MIN;
	int32_t x586 = INT32_MIN;
	int32_t x588 = INT32_MAX;
	volatile int64_t t97 = -27337699580243249LL;

	t97 = (x585/((x586%x587)%x588));

	if (t97 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x591 = 151465041LL;
	int64_t x592 = INT64_MIN;
	static volatile int64_t t98 = -3223595230814014925LL;

	t98 = (x589/((x590%x591)%x592));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x593 = 30U;
	int8_t x594 = INT8_MAX;
	uint64_t x595 = 2133261LLU;
	volatile uint64_t t99 = 122368232978479123LLU;

	t99 = (x593/((x594%x595)%x596));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

