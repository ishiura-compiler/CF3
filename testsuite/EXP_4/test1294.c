#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = 6247LL;
int8_t x11 = 1;
volatile uint32_t t1 = 3445846U;
static int32_t x19 = -1;
int32_t t2 = 771281404;
uint32_t x28 = UINT32_MAX;
int8_t x32 = 8;
int16_t x43 = INT16_MIN;
int64_t x54 = 1LL;
static int32_t x58 = 0;
volatile uint8_t x89 = UINT8_MAX;
int64_t x118 = -1LL;
int8_t x124 = -10;
volatile uint16_t x128 = UINT16_MAX;
static volatile int16_t x150 = INT16_MAX;
static int16_t x165 = INT16_MAX;
int32_t x166 = -13847;
int32_t x167 = 17259;
uint32_t x178 = 25U;
int32_t x180 = -7000;
volatile int16_t x183 = INT16_MIN;
uint32_t x210 = 1U;
int32_t t28 = 10198;
static int8_t x226 = INT8_MIN;
volatile uint32_t x227 = 3178U;
uint32_t t29 = 134U;
static volatile uint32_t x230 = 263810656U;
static volatile uint32_t x237 = UINT32_MAX;
uint32_t x241 = UINT32_MAX;
volatile uint16_t x253 = 440U;
volatile int8_t x254 = 4;
uint8_t x259 = 7U;
static int16_t x261 = 0;
static uint32_t x263 = UINT32_MAX;
int8_t x274 = -1;
static int8_t x276 = INT8_MAX;
uint64_t t38 = 60LLU;
volatile int32_t x283 = INT32_MAX;
static volatile uint64_t t40 = 463921646773731006LLU;
int64_t x286 = INT64_MIN;
uint8_t x290 = 42U;
volatile int64_t x291 = -1LL;
int16_t x292 = -296;
int32_t x295 = -971;
int32_t x296 = INT32_MIN;
int64_t x300 = -75076664709060LL;
int64_t x303 = -1LL;
static uint8_t x310 = 5U;
static volatile int32_t t46 = 942;
uint8_t x314 = 3U;
int32_t x323 = 708268;
uint16_t x339 = UINT16_MAX;
uint8_t x340 = 8U;
static int16_t x357 = INT16_MAX;
uint8_t x360 = 55U;
int32_t x374 = INT32_MIN;
uint8_t x378 = UINT8_MAX;
uint32_t x407 = 0U;
volatile int64_t t55 = -58LL;
int16_t x425 = INT16_MAX;
volatile int32_t t58 = -237849713;
uint64_t x437 = UINT64_MAX;
uint64_t t60 = UINT64_MAX;
uint8_t x449 = UINT8_MAX;
int32_t t63 = -202235;
int16_t x467 = INT16_MIN;
static int8_t x470 = -38;
volatile int16_t x478 = INT16_MIN;
uint16_t x501 = UINT16_MAX;
static volatile int64_t x502 = -1LL;
uint8_t x513 = UINT8_MAX;
int32_t x515 = INT32_MIN;
int8_t x525 = INT8_MAX;
volatile int32_t t74 = 34121279;
uint16_t x545 = 16U;
int64_t x547 = INT64_MIN;
int32_t x552 = INT32_MIN;
static uint32_t t76 = 966932856U;
int16_t x554 = 24;
uint16_t x555 = UINT16_MAX;
int16_t x556 = INT16_MIN;
int8_t x559 = -1;
int32_t x568 = 29;
uint32_t x570 = 743U;
int16_t x579 = INT16_MAX;
volatile int32_t t81 = 8013;
uint32_t t82 = UINT32_MAX;
int16_t x585 = INT16_MAX;
volatile uint32_t x593 = UINT32_MAX;
uint16_t x605 = 32240U;
volatile int64_t x622 = INT64_MIN;
uint32_t x638 = 27668826U;
int64_t x646 = INT64_MIN;
volatile int64_t x668 = INT64_MAX;
int32_t t93 = 49691842;
volatile uint32_t x681 = UINT32_MAX;
uint16_t x694 = 5639U;
int32_t x696 = INT32_MIN;
int16_t x699 = -977;
uint32_t t99 = 210546610U;


void f0(void) {
	uint8_t x5 = UINT8_MAX;
	uint16_t x6 = UINT16_MAX;
	int8_t x8 = INT8_MAX;
	volatile int32_t t0 = 0;

	t0 = (x5>>(x6<(x7==x8)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 672653979U;
	int16_t x10 = -1;
	static uint64_t x12 = UINT64_MAX;

	t1 = (x9>>(x10<(x11==x12)));

	if (t1 != 336326989U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = 7;
	uint64_t x18 = 78847LLU;
	int32_t x20 = INT32_MAX;

	t2 = (x17>>(x18<(x19==x20)));

	if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x21 = 8125U;
	int32_t x22 = -1;
	uint8_t x23 = UINT8_MAX;
	int32_t x24 = INT32_MAX;
	int32_t t3 = -2511;

	t3 = (x21>>(x22<(x23==x24)));

	if (t3 != 4062) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 7;
	int16_t x26 = INT16_MIN;
	int16_t x27 = 20;
	volatile int32_t t4 = 20;

	t4 = (x25>>(x26<(x27==x28)));

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 72487LLU;
	volatile int64_t x30 = INT64_MIN;
	uint16_t x31 = UINT16_MAX;
	uint64_t t5 = 15LLU;

	t5 = (x29>>(x30<(x31==x32)));

	if (t5 != 36243LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = INT16_MAX;
	volatile int8_t x42 = -1;
	int64_t x44 = INT64_MAX;
	int32_t t6 = 4;

	t6 = (x41>>(x42<(x43==x44)));

	if (t6 != 16383) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x53 = 1U;
	int8_t x55 = -1;
	int8_t x56 = 14;
	int32_t t7 = 469134049;

	t7 = (x53>>(x54<(x55==x56)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x57 = INT8_MAX;
	int16_t x59 = -1;
	int64_t x60 = 10LL;
	int32_t t8 = 936347698;

	t8 = (x57>>(x58<(x59==x60)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x69 = 6920;
	static int64_t x70 = -1LL;
	static uint64_t x71 = 6596LLU;
	static uint32_t x72 = 1376124U;
	int32_t t9 = 9;

	t9 = (x69>>(x70<(x71==x72)));

	if (t9 != 3460) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x81 = 70U;
	static uint8_t x82 = 15U;
	int8_t x83 = INT8_MIN;
	uint8_t x84 = UINT8_MAX;
	uint32_t t10 = 2358263U;

	t10 = (x81>>(x82<(x83==x84)));

	if (t10 != 70U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x90 = 4U;
	int64_t x91 = -1LL;
	int32_t x92 = INT32_MAX;
	volatile int32_t t11 = 244739668;

	t11 = (x89>>(x90<(x91==x92)));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x109 = INT32_MAX;
	int16_t x110 = -3;
	uint16_t x111 = 54U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t12 = -339262;

	t12 = (x109>>(x110<(x111==x112)));

	if (t12 != 1073741823) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x117 = INT8_MAX;
	uint16_t x119 = UINT16_MAX;
	uint64_t x120 = 30LLU;
	int32_t t13 = 11855;

	t13 = (x117>>(x118<(x119==x120)));

	if (t13 != 63) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x121 = 317U;
	uint32_t x122 = 385813160U;
	volatile int64_t x123 = INT64_MIN;
	int32_t t14 = 9756;

	t14 = (x121>>(x122<(x123==x124)));

	if (t14 != 317) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x125 = UINT16_MAX;
	int64_t x126 = INT64_MIN;
	uint8_t x127 = UINT8_MAX;
	int32_t t15 = -926954;

	t15 = (x125>>(x126<(x127==x128)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x141 = INT16_MAX;
	uint32_t x142 = 95729117U;
	uint8_t x143 = UINT8_MAX;
	volatile uint64_t x144 = 3311010LLU;
	int32_t t16 = -847;

	t16 = (x141>>(x142<(x143==x144)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = 0;
	volatile int32_t x147 = -10877090;
	volatile uint64_t x148 = UINT64_MAX;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = (x145>>(x146<(x147==x148)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x149 = UINT32_MAX;
	int16_t x151 = INT16_MIN;
	uint16_t x152 = UINT16_MAX;
	uint32_t t18 = UINT32_MAX;

	t18 = (x149>>(x150<(x151==x152)));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x153 = 27766;
	static int64_t x154 = INT64_MIN;
	volatile int32_t x155 = -928;
	static uint16_t x156 = UINT16_MAX;
	volatile int32_t t19 = 283537972;

	t19 = (x153>>(x154<(x155==x156)));

	if (t19 != 13883) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x168 = INT64_MIN;
	volatile int32_t t20 = -975884;

	t20 = (x165>>(x166<(x167==x168)));

	if (t20 != 16383) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x169 = 2629477U;
	static int8_t x170 = -1;
	int64_t x171 = INT64_MIN;
	uint16_t x172 = 25786U;
	volatile uint32_t t21 = 91152U;

	t21 = (x169>>(x170<(x171==x172)));

	if (t21 != 1314738U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x173 = UINT16_MAX;
	int8_t x174 = INT8_MIN;
	volatile int16_t x175 = -1;
	volatile int16_t x176 = -1;
	volatile int32_t t22 = -427517843;

	t22 = (x173>>(x174<(x175==x176)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x177 = INT64_MAX;
	int8_t x179 = INT8_MIN;
	int64_t t23 = INT64_MAX;

	t23 = (x177>>(x178<(x179==x180)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x181 = 1;
	static int8_t x182 = INT8_MAX;
	uint64_t x184 = 8155389811194302LLU;
	volatile int32_t t24 = 340426;

	t24 = (x181>>(x182<(x183==x184)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x197 = 15U;
	int16_t x198 = INT16_MIN;
	volatile int16_t x199 = -1;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t25 = -913;

	t25 = (x197>>(x198<(x199==x200)));

	if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x209 = UINT8_MAX;
	static int16_t x211 = INT16_MIN;
	static int8_t x212 = INT8_MIN;
	int32_t t26 = 3067742;

	t26 = (x209>>(x210<(x211==x212)));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x213 = 281U;
	int64_t x214 = INT64_MAX;
	volatile uint8_t x215 = 2U;
	volatile int8_t x216 = 0;
	int32_t t27 = 106284121;

	t27 = (x213>>(x214<(x215==x216)));

	if (t27 != 281) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x217 = 1U;
	int8_t x218 = INT8_MIN;
	int64_t x219 = 43318782202713LL;
	int64_t x220 = -715583085753824623LL;

	t28 = (x217>>(x218<(x219==x220)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x225 = 601506U;
	uint8_t x228 = 83U;

	t29 = (x225>>(x226<(x227==x228)));

	if (t29 != 300753U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x229 = UINT16_MAX;
	int32_t x231 = -586226;
	int64_t x232 = 2520681024LL;
	int32_t t30 = 1;

	t30 = (x229>>(x230<(x231==x232)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x233 = 913U;
	int8_t x234 = INT8_MIN;
	int64_t x235 = -7LL;
	uint64_t x236 = 12709385LLU;
	static volatile int32_t t31 = 4;

	t31 = (x233>>(x234<(x235==x236)));

	if (t31 != 456) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x238 = 35;
	static int64_t x239 = INT64_MAX;
	int32_t x240 = INT32_MAX;
	static volatile uint32_t t32 = UINT32_MAX;

	t32 = (x237>>(x238<(x239==x240)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x242 = UINT16_MAX;
	uint8_t x243 = 1U;
	static int64_t x244 = INT64_MIN;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = (x241>>(x242<(x243==x244)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x249 = 13U;
	int64_t x250 = -252848LL;
	int32_t x251 = -15360243;
	static uint16_t x252 = UINT16_MAX;
	volatile int32_t t34 = 3;

	t34 = (x249>>(x250<(x251==x252)));

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x255 = 537726822158LLU;
	int8_t x256 = INT8_MIN;
	int32_t t35 = 123;

	t35 = (x253>>(x254<(x255==x256)));

	if (t35 != 440) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x257 = 2641U;
	uint16_t x258 = UINT16_MAX;
	int16_t x260 = -1;
	static volatile int32_t t36 = 58;

	t36 = (x257>>(x258<(x259==x260)));

	if (t36 != 2641) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x262 = INT8_MIN;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t37 = 28;

	t37 = (x261>>(x262<(x263==x264)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x273 = 102371647448LLU;
	volatile uint8_t x275 = UINT8_MAX;

	t38 = (x273>>(x274<(x275==x276)));

	if (t38 != 51185823724LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x277 = UINT16_MAX;
	int64_t x278 = 634329553969215965LL;
	int16_t x279 = INT16_MIN;
	static uint64_t x280 = 4239903789LLU;
	volatile int32_t t39 = -119518586;

	t39 = (x277>>(x278<(x279==x280)));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x281 = 999657924292LLU;
	int32_t x282 = -1;
	uint32_t x284 = UINT32_MAX;

	t40 = (x281>>(x282<(x283==x284)));

	if (t40 != 499828962146LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x285 = 6;
	int8_t x287 = 0;
	static int64_t x288 = INT64_MIN;
	int32_t t41 = -38;

	t41 = (x285>>(x286<(x287==x288)));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x289 = 0U;
	volatile int32_t t42 = 266;

	t42 = (x289>>(x290<(x291==x292)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x293 = 9U;
	int8_t x294 = INT8_MAX;
	int32_t t43 = 127667;

	t43 = (x293>>(x294<(x295==x296)));

	if (t43 != 9) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x297 = 29U;
	int16_t x298 = 3472;
	uint32_t x299 = 105U;
	int32_t t44 = -67273;

	t44 = (x297>>(x298<(x299==x300)));

	if (t44 != 29) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x301 = UINT32_MAX;
	int64_t x302 = -3663991966471842LL;
	volatile uint16_t x304 = 24U;
	volatile uint32_t t45 = 1673755613U;

	t45 = (x301>>(x302<(x303==x304)));

	if (t45 != 2147483647U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x309 = UINT8_MAX;
	int16_t x311 = INT16_MAX;
	static int32_t x312 = -18;

	t46 = (x309>>(x310<(x311==x312)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x313 = 3195;
	volatile int32_t x315 = -1;
	int8_t x316 = -1;
	volatile int32_t t47 = 28;

	t47 = (x313>>(x314<(x315==x316)));

	if (t47 != 3195) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x321 = 145968U;
	volatile uint16_t x322 = 3U;
	int8_t x324 = INT8_MIN;
	uint32_t t48 = 204452527U;

	t48 = (x321>>(x322<(x323==x324)));

	if (t48 != 145968U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x329 = 1936148U;
	uint32_t x330 = 9U;
	int16_t x331 = INT16_MAX;
	int8_t x332 = 0;
	volatile uint32_t t49 = 18U;

	t49 = (x329>>(x330<(x331==x332)));

	if (t49 != 1936148U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x337 = 11U;
	int64_t x338 = -1LL;
	volatile uint32_t t50 = 530798275U;

	t50 = (x337>>(x338<(x339==x340)));

	if (t50 != 5U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x358 = 40388055;
	static volatile uint64_t x359 = 19811024238LLU;
	int32_t t51 = -456;

	t51 = (x357>>(x358<(x359==x360)));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x365 = 12561792LLU;
	uint16_t x366 = UINT16_MAX;
	volatile int64_t x367 = 1372056445083110385LL;
	volatile uint16_t x368 = 45U;
	volatile uint64_t t52 = 17857LLU;

	t52 = (x365>>(x366<(x367==x368)));

	if (t52 != 12561792LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x373 = 453U;
	uint16_t x375 = UINT16_MAX;
	volatile int64_t x376 = INT64_MIN;
	int32_t t53 = 120249;

	t53 = (x373>>(x374<(x375==x376)));

	if (t53 != 226) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x377 = 19;
	volatile int16_t x379 = INT16_MAX;
	static uint32_t x380 = 929496772U;
	int32_t t54 = 736;

	t54 = (x377>>(x378<(x379==x380)));

	if (t54 != 19) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x405 = 1286970019855950378LL;
	static volatile uint64_t x406 = UINT64_MAX;
	int64_t x408 = INT64_MAX;

	t55 = (x405>>(x406<(x407==x408)));

	if (t55 != 1286970019855950378LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x409 = INT8_MAX;
	volatile uint32_t x410 = UINT32_MAX;
	volatile int32_t x411 = INT32_MIN;
	int32_t x412 = -1;
	int32_t t56 = -113037;

	t56 = (x409>>(x410<(x411==x412)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x421 = 20U;
	int32_t x422 = INT32_MAX;
	volatile uint8_t x423 = 23U;
	volatile int16_t x424 = INT16_MIN;
	int32_t t57 = -278456;

	t57 = (x421>>(x422<(x423==x424)));

	if (t57 != 20) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x426 = 17496LL;
	uint64_t x427 = UINT64_MAX;
	volatile uint64_t x428 = 1LLU;

	t58 = (x425>>(x426<(x427==x428)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x433 = 0U;
	static volatile uint16_t x434 = 6591U;
	int64_t x435 = INT64_MIN;
	static volatile int8_t x436 = INT8_MIN;
	volatile int32_t t59 = 3769035;

	t59 = (x433>>(x434<(x435==x436)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x438 = 86043677850925078LLU;
	uint8_t x439 = UINT8_MAX;
	int32_t x440 = INT32_MAX;

	t60 = (x437>>(x438<(x439==x440)));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x441 = 250759971208757434LL;
	uint32_t x442 = 14U;
	static volatile int8_t x443 = INT8_MIN;
	int64_t x444 = -232193649384322LL;
	volatile int64_t t61 = 197662LL;

	t61 = (x441>>(x442<(x443==x444)));

	if (t61 != 250759971208757434LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x450 = UINT8_MAX;
	volatile int16_t x451 = INT16_MIN;
	int8_t x452 = INT8_MIN;
	volatile int32_t t62 = 4;

	t62 = (x449>>(x450<(x451==x452)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x453 = 66U;
	uint32_t x454 = 5636942U;
	volatile int16_t x455 = INT16_MAX;
	int32_t x456 = INT32_MAX;

	t63 = (x453>>(x454<(x455==x456)));

	if (t63 != 66) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x465 = UINT32_MAX;
	int8_t x466 = INT8_MAX;
	static uint8_t x468 = 108U;
	uint32_t t64 = UINT32_MAX;

	t64 = (x465>>(x466<(x467==x468)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x469 = UINT32_MAX;
	volatile uint32_t x471 = 4U;
	volatile int8_t x472 = INT8_MIN;
	volatile uint32_t t65 = 99534U;

	t65 = (x469>>(x470<(x471==x472)));

	if (t65 != 2147483647U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x477 = UINT32_MAX;
	volatile int16_t x479 = 1032;
	uint64_t x480 = UINT64_MAX;
	static volatile uint32_t t66 = 450U;

	t66 = (x477>>(x478<(x479==x480)));

	if (t66 != 2147483647U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x481 = 611836U;
	uint8_t x482 = UINT8_MAX;
	int16_t x483 = INT16_MIN;
	int32_t x484 = INT32_MAX;
	uint32_t t67 = 239U;

	t67 = (x481>>(x482<(x483==x484)));

	if (t67 != 611836U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x497 = 29;
	uint8_t x498 = UINT8_MAX;
	int64_t x499 = INT64_MIN;
	int64_t x500 = -1LL;
	volatile int32_t t68 = 7199;

	t68 = (x497>>(x498<(x499==x500)));

	if (t68 != 29) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x503 = -1;
	static int8_t x504 = INT8_MIN;
	volatile int32_t t69 = -6472;

	t69 = (x501>>(x502<(x503==x504)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x514 = UINT64_MAX;
	int8_t x516 = INT8_MIN;
	int32_t t70 = 3946430;

	t70 = (x513>>(x514<(x515==x516)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x526 = 6U;
	volatile int16_t x527 = INT16_MIN;
	uint32_t x528 = UINT32_MAX;
	volatile int32_t t71 = -31383330;

	t71 = (x525>>(x526<(x527==x528)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x529 = INT32_MAX;
	int16_t x530 = -6278;
	uint16_t x531 = 229U;
	int8_t x532 = INT8_MIN;
	static int32_t t72 = 79954998;

	t72 = (x529>>(x530<(x531==x532)));

	if (t72 != 1073741823) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x533 = 1U;
	volatile int8_t x534 = 0;
	static volatile int16_t x535 = 1;
	int64_t x536 = 71195LL;
	volatile int32_t t73 = -15525;

	t73 = (x533>>(x534<(x535==x536)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x537 = 3U;
	static int64_t x538 = -1LL;
	static int16_t x539 = INT16_MAX;
	int32_t x540 = -874;

	t74 = (x537>>(x538<(x539==x540)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x546 = -1;
	static int32_t x548 = -1;
	static volatile int32_t t75 = 2910723;

	t75 = (x545>>(x546<(x547==x548)));

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x549 = UINT32_MAX;
	int64_t x550 = -1LL;
	int8_t x551 = -55;

	t76 = (x549>>(x550<(x551==x552)));

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x553 = 20991LL;
	static int64_t t77 = -369075LL;

	t77 = (x553>>(x554<(x555==x556)));

	if (t77 != 20991LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x557 = 16335LLU;
	volatile uint32_t x558 = 31U;
	int8_t x560 = -1;
	uint64_t t78 = 7927049860270261LLU;

	t78 = (x557>>(x558<(x559==x560)));

	if (t78 != 16335LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x565 = UINT16_MAX;
	static volatile int32_t x566 = 399;
	uint32_t x567 = 2141607221U;
	int32_t t79 = 2;

	t79 = (x565>>(x566<(x567==x568)));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x569 = 1U;
	volatile int64_t x571 = INT64_MIN;
	int32_t x572 = -4591;
	volatile int32_t t80 = -1033;

	t80 = (x569>>(x570<(x571==x572)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x577 = UINT8_MAX;
	volatile int32_t x578 = -1;
	int8_t x580 = INT8_MIN;

	t81 = (x577>>(x578<(x579==x580)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x581 = UINT32_MAX;
	static uint32_t x582 = UINT32_MAX;
	static volatile int32_t x583 = INT32_MIN;
	uint64_t x584 = 247750683LLU;

	t82 = (x581>>(x582<(x583==x584)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x586 = INT32_MAX;
	volatile int16_t x587 = 170;
	volatile int32_t x588 = INT32_MIN;
	int32_t t83 = 1;

	t83 = (x585>>(x586<(x587==x588)));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x594 = INT8_MIN;
	uint64_t x595 = 30294743359175448LLU;
	volatile int64_t x596 = INT64_MIN;
	volatile uint32_t t84 = 6193U;

	t84 = (x593>>(x594<(x595==x596)));

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x601 = UINT64_MAX;
	uint64_t x602 = 3758514LLU;
	static volatile uint32_t x603 = 671898955U;
	volatile int16_t x604 = INT16_MIN;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x601>>(x602<(x603==x604)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x606 = INT16_MIN;
	int16_t x607 = INT16_MIN;
	volatile uint8_t x608 = 31U;
	volatile int32_t t86 = 16113;

	t86 = (x605>>(x606<(x607==x608)));

	if (t86 != 16120) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x617 = INT64_MAX;
	static uint8_t x618 = UINT8_MAX;
	uint16_t x619 = 4U;
	uint32_t x620 = UINT32_MAX;
	int64_t t87 = INT64_MAX;

	t87 = (x617>>(x618<(x619==x620)));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x621 = INT64_MAX;
	static int64_t x623 = INT64_MIN;
	int16_t x624 = -1;
	int64_t t88 = 1924LL;

	t88 = (x621>>(x622<(x623==x624)));

	if (t88 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x625 = UINT32_MAX;
	int32_t x626 = -1904;
	int16_t x627 = 0;
	int16_t x628 = -1;
	static uint32_t t89 = 1885U;

	t89 = (x625>>(x626<(x627==x628)));

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x637 = 22151;
	int8_t x639 = 3;
	uint16_t x640 = 7108U;
	volatile int32_t t90 = 3200466;

	t90 = (x637>>(x638<(x639==x640)));

	if (t90 != 22151) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x645 = UINT16_MAX;
	static int8_t x647 = INT8_MIN;
	static uint16_t x648 = UINT16_MAX;
	int32_t t91 = -13525778;

	t91 = (x645>>(x646<(x647==x648)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x649 = UINT64_MAX;
	uint64_t x650 = 436570530377LLU;
	volatile int16_t x651 = -263;
	int16_t x652 = INT16_MAX;
	static uint64_t t92 = UINT64_MAX;

	t92 = (x649>>(x650<(x651==x652)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x665 = INT16_MAX;
	int64_t x666 = 433595LL;
	volatile uint8_t x667 = UINT8_MAX;

	t93 = (x665>>(x666<(x667==x668)));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x669 = 447U;
	int64_t x670 = INT64_MIN;
	static uint16_t x671 = UINT16_MAX;
	volatile int64_t x672 = INT64_MIN;
	static volatile int32_t t94 = 1750;

	t94 = (x669>>(x670<(x671==x672)));

	if (t94 != 223) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x682 = UINT32_MAX;
	int32_t x683 = -1;
	uint8_t x684 = 3U;
	uint32_t t95 = UINT32_MAX;

	t95 = (x681>>(x682<(x683==x684)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x689 = 0U;
	int16_t x690 = INT16_MIN;
	volatile int8_t x691 = -1;
	int8_t x692 = INT8_MIN;
	static volatile int32_t t96 = 1808;

	t96 = (x689>>(x690<(x691==x692)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x693 = UINT8_MAX;
	uint8_t x695 = 7U;
	int32_t t97 = -46479970;

	t97 = (x693>>(x694<(x695==x696)));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x697 = 32694U;
	volatile uint32_t x698 = 0U;
	uint8_t x700 = UINT8_MAX;
	volatile int32_t t98 = 345640173;

	t98 = (x697>>(x698<(x699==x700)));

	if (t98 != 32694) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x701 = 24179U;
	static uint8_t x702 = 115U;
	int64_t x703 = INT64_MIN;
	int16_t x704 = -1;

	t99 = (x701>>(x702<(x703==x704)));

	if (t99 != 24179U) { NG(); } else { ; }
	
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

