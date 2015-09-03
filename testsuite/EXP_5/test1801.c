#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x3 = UINT8_MAX;
int32_t t0 = -93;
int64_t t2 = -7536823459183966LL;
int8_t x23 = -1;
int16_t x37 = INT16_MAX;
int8_t x39 = INT8_MAX;
volatile int32_t x43 = INT32_MIN;
volatile int32_t t5 = -6562903;
volatile uint64_t x49 = 27487547763668LLU;
static uint16_t x52 = UINT16_MAX;
volatile int8_t x58 = INT8_MIN;
static uint32_t x59 = UINT32_MAX;
int64_t x60 = -1LL;
static uint64_t t7 = UINT64_MAX;
uint8_t x101 = UINT8_MAX;
uint64_t x105 = 29612492150LLU;
volatile uint32_t x114 = UINT32_MAX;
uint16_t x115 = UINT16_MAX;
uint64_t x116 = 13812039595LLU;
volatile int64_t x118 = -1LL;
static int64_t x123 = INT64_MIN;
volatile uint32_t x136 = UINT32_MAX;
int32_t x141 = INT32_MAX;
volatile int32_t t20 = -523208;
uint16_t x156 = UINT16_MAX;
uint64_t x165 = UINT64_MAX;
int16_t x167 = 203;
static uint64_t t24 = UINT64_MAX;
int32_t t25 = -132;
int16_t x184 = INT16_MIN;
int8_t x190 = INT8_MAX;
int8_t x208 = INT8_MIN;
volatile int16_t x210 = INT16_MIN;
int8_t x215 = -2;
volatile int32_t x217 = 1539131;
int16_t x218 = 495;
uint8_t x220 = 57U;
int32_t t31 = -1;
uint16_t x223 = 3U;
int16_t x225 = 0;
int8_t x226 = 5;
int64_t x230 = INT64_MAX;
uint32_t t34 = UINT32_MAX;
int64_t x244 = INT64_MIN;
volatile uint32_t t38 = 882395130U;
volatile int32_t x283 = INT32_MAX;
uint8_t x296 = 27U;
static int64_t t46 = -580819898141252LL;
static uint64_t x312 = 39LLU;
volatile int8_t x313 = 28;
volatile int32_t t48 = -263711;
volatile int32_t t49 = 120;
int8_t x331 = INT8_MIN;
static int32_t x334 = INT32_MAX;
int8_t x340 = -14;
int32_t x359 = 25484;
volatile uint32_t x362 = 1979U;
int32_t x363 = INT32_MAX;
static uint32_t x365 = 22736549U;
static int32_t x368 = -1;
uint32_t x382 = 1311109348U;
int16_t x385 = 15;
volatile int32_t t61 = -27;
uint8_t x427 = 2U;
uint8_t x442 = UINT8_MAX;
uint16_t x452 = UINT16_MAX;
static int32_t x456 = -1;
volatile uint32_t x457 = UINT32_MAX;
static volatile uint16_t x461 = UINT16_MAX;
static uint64_t x481 = 869537LLU;
uint64_t x484 = UINT64_MAX;
uint16_t x486 = 6286U;
int64_t x492 = INT64_MIN;
volatile int64_t x500 = -1LL;
int64_t x501 = 4LL;
int64_t x503 = -17747928LL;
int32_t x504 = INT32_MIN;
static int8_t x511 = INT8_MAX;
volatile uint64_t x526 = 1LLU;
int32_t x542 = INT32_MIN;
volatile int32_t x558 = INT32_MIN;
volatile int8_t x561 = INT8_MAX;
static volatile int32_t t87 = 46671925;
int32_t x583 = INT32_MAX;
volatile int64_t t89 = -40139580LL;
uint8_t x597 = 72U;
int8_t x603 = INT8_MAX;
int16_t x604 = -1;
int16_t x624 = 1117;
uint8_t x630 = 89U;
uint16_t x635 = 903U;
uint32_t t96 = 3548325U;
static uint16_t x641 = UINT16_MAX;
uint32_t x644 = 374529515U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int32_t x2 = -1;
	uint8_t x4 = UINT8_MAX;

	t0 = (x1>>((x2&x3)<x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 14U;
	uint8_t x6 = 3U;
	static int8_t x7 = INT8_MAX;
	static uint16_t x8 = 11U;
	volatile int32_t t1 = -1359;

	t1 = (x5>>((x6&x7)<x8));

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MAX;
	int64_t x18 = INT64_MIN;
	volatile int32_t x19 = -1;
	uint8_t x20 = 3U;

	t2 = (x17>>((x18&x19)<x20));

	if (t2 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MAX;
	static int16_t x22 = INT16_MIN;
	volatile uint32_t x24 = 219311U;
	volatile int32_t t3 = INT32_MAX;

	t3 = (x21>>((x22&x23)<x24));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x38 = INT16_MIN;
	int32_t x40 = INT32_MAX;
	static int32_t t4 = 2345;

	t4 = (x37>>((x38&x39)<x40));

	if (t4 != 16383) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x41 = UINT16_MAX;
	int8_t x42 = -2;
	uint16_t x44 = UINT16_MAX;

	t5 = (x41>>((x42&x43)<x44));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x50 = 702LLU;
	int8_t x51 = -1;
	volatile uint64_t t6 = 8924236839322LLU;

	t6 = (x49>>((x50&x51)<x52));

	if (t6 != 13743773881834LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x57 = UINT64_MAX;

	t7 = (x57>>((x58&x59)<x60));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x69 = UINT64_MAX;
	int16_t x70 = INT16_MAX;
	uint64_t x71 = 0LLU;
	int64_t x72 = INT64_MIN;
	uint64_t t8 = 2361684037LLU;

	t8 = (x69>>((x70&x71)<x72));

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x77 = 8U;
	int8_t x78 = INT8_MAX;
	static int16_t x79 = INT16_MIN;
	volatile uint32_t x80 = UINT32_MAX;
	int32_t t9 = 1978712;

	t9 = (x77>>((x78&x79)<x80));

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x81 = UINT8_MAX;
	int64_t x82 = 1LL;
	static uint32_t x83 = 117U;
	static uint16_t x84 = 839U;
	volatile int32_t t10 = -786986;

	t10 = (x81>>((x82&x83)<x84));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x89 = 4430LLU;
	int8_t x90 = 14;
	int8_t x91 = INT8_MAX;
	uint64_t x92 = 372286457522LLU;
	volatile uint64_t t11 = 28222145181016LLU;

	t11 = (x89>>((x90&x91)<x92));

	if (t11 != 2215LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x93 = 30;
	int64_t x94 = INT64_MIN;
	int64_t x95 = -1LL;
	static int8_t x96 = -1;
	volatile int32_t t12 = 1;

	t12 = (x93>>((x94&x95)<x96));

	if (t12 != 15) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x102 = INT64_MIN;
	uint64_t x103 = 640959312LLU;
	volatile uint8_t x104 = 1U;
	volatile int32_t t13 = 38;

	t13 = (x101>>((x102&x103)<x104));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x106 = UINT32_MAX;
	static int16_t x107 = -1;
	static int16_t x108 = 7;
	volatile uint64_t t14 = 4822289LLU;

	t14 = (x105>>((x106&x107)<x108));

	if (t14 != 29612492150LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x113 = 541U;
	static uint32_t t15 = 140502U;

	t15 = (x113>>((x114&x115)<x116));

	if (t15 != 270U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x117 = 0LL;
	volatile int32_t x119 = INT32_MAX;
	static volatile int16_t x120 = INT16_MIN;
	volatile int64_t t16 = -4993819033LL;

	t16 = (x117>>((x118&x119)<x120));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x121 = 6;
	uint32_t x122 = UINT32_MAX;
	int8_t x124 = 4;
	int32_t t17 = 1216;

	t17 = (x121>>((x122&x123)<x124));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x133 = UINT64_MAX;
	uint64_t x134 = 147369052711LLU;
	int64_t x135 = -3290872730280LL;
	uint64_t t18 = 5623964LLU;

	t18 = (x133>>((x134&x135)<x136));

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x137 = 1;
	uint16_t x138 = 1553U;
	volatile int64_t x139 = INT64_MAX;
	int16_t x140 = INT16_MAX;
	volatile int32_t t19 = 1811352;

	t19 = (x137>>((x138&x139)<x140));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MAX;
	volatile uint64_t x144 = 2270747883349513LLU;

	t20 = (x141>>((x142&x143)<x144));

	if (t20 != 1073741823) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x153 = UINT64_MAX;
	uint8_t x154 = 2U;
	int32_t x155 = INT32_MIN;
	uint64_t t21 = 823581LLU;

	t21 = (x153>>((x154&x155)<x156));

	if (t21 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x157 = 3438LL;
	static int64_t x158 = INT64_MIN;
	uint8_t x159 = 60U;
	int32_t x160 = INT32_MAX;
	static int64_t t22 = 2056503LL;

	t22 = (x157>>((x158&x159)<x160));

	if (t22 != 1719LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x161 = UINT8_MAX;
	uint64_t x162 = 46LLU;
	static uint8_t x163 = UINT8_MAX;
	int64_t x164 = INT64_MIN;
	volatile int32_t t23 = 8468826;

	t23 = (x161>>((x162&x163)<x164));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x166 = INT8_MAX;
	uint8_t x168 = 11U;

	t24 = (x165>>((x166&x167)<x168));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x173 = UINT16_MAX;
	static int16_t x174 = -7356;
	uint16_t x175 = 4360U;
	static int64_t x176 = -1LL;

	t25 = (x173>>((x174&x175)<x176));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = INT64_MAX;
	static volatile uint64_t x183 = 540451088358LLU;
	uint32_t t26 = 2066727U;

	t26 = (x181>>((x182&x183)<x184));

	if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x189 = 38;
	uint16_t x191 = 0U;
	int64_t x192 = 14316LL;
	static volatile int32_t t27 = -967509;

	t27 = (x189>>((x190&x191)<x192));

	if (t27 != 19) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x205 = INT32_MAX;
	int32_t x206 = INT32_MIN;
	int64_t x207 = -1LL;
	volatile int32_t t28 = -5419588;

	t28 = (x205>>((x206&x207)<x208));

	if (t28 != 1073741823) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x209 = 1625520963U;
	uint16_t x211 = 26U;
	static uint32_t x212 = 674U;
	volatile uint32_t t29 = 1837U;

	t29 = (x209>>((x210&x211)<x212));

	if (t29 != 812760481U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x213 = INT8_MAX;
	uint16_t x214 = UINT16_MAX;
	int16_t x216 = INT16_MIN;
	volatile int32_t t30 = 576617;

	t30 = (x213>>((x214&x215)<x216));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x219 = -11491;

	t31 = (x217>>((x218&x219)<x220));

	if (t31 != 1539131) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x221 = 1;
	int16_t x222 = INT16_MIN;
	volatile int8_t x224 = -1;
	int32_t t32 = 2001;

	t32 = (x221>>((x222&x223)<x224));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x227 = INT32_MIN;
	uint64_t x228 = 53LLU;
	int32_t t33 = 15935;

	t33 = (x225>>((x226&x227)<x228));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x229 = UINT32_MAX;
	static volatile uint16_t x231 = 186U;
	int32_t x232 = -4873869;

	t34 = (x229>>((x230&x231)<x232));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x233 = 899U;
	static int8_t x234 = INT8_MIN;
	static int16_t x235 = -1;
	static volatile int16_t x236 = -102;
	uint32_t t35 = 1019976590U;

	t35 = (x233>>((x234&x235)<x236));

	if (t35 != 449U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x237 = 5506U;
	uint8_t x238 = 4U;
	static int32_t x239 = INT32_MAX;
	static volatile int16_t x240 = INT16_MAX;
	uint32_t t36 = 491U;

	t36 = (x237>>((x238&x239)<x240));

	if (t36 != 2753U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x241 = UINT16_MAX;
	static volatile uint8_t x242 = 1U;
	uint8_t x243 = 104U;
	static int32_t t37 = 7;

	t37 = (x241>>((x242&x243)<x244));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x249 = 10343964U;
	uint16_t x250 = 3U;
	uint32_t x251 = 126481U;
	static uint64_t x252 = 16185LLU;

	t38 = (x249>>((x250&x251)<x252));

	if (t38 != 5171982U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x257 = UINT8_MAX;
	static int8_t x258 = INT8_MIN;
	int16_t x259 = -1;
	static int16_t x260 = INT16_MIN;
	static int32_t t39 = 30538448;

	t39 = (x257>>((x258&x259)<x260));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x265 = INT64_MAX;
	volatile int32_t x266 = INT32_MAX;
	static uint16_t x267 = 4834U;
	static volatile int64_t x268 = INT64_MIN;
	static int64_t t40 = INT64_MAX;

	t40 = (x265>>((x266&x267)<x268));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x273 = 3U;
	int32_t x274 = -1;
	uint32_t x275 = 12U;
	int32_t x276 = INT32_MAX;
	static volatile int32_t t41 = 533545786;

	t41 = (x273>>((x274&x275)<x276));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x281 = 2959U;
	int16_t x282 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	int32_t t42 = 16099;

	t42 = (x281>>((x282&x283)<x284));

	if (t42 != 1479) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x293 = 333U;
	uint32_t x294 = 0U;
	int8_t x295 = INT8_MIN;
	volatile int32_t t43 = 183375;

	t43 = (x293>>((x294&x295)<x296));

	if (t43 != 166) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x297 = 0U;
	int64_t x298 = INT64_MIN;
	uint32_t x299 = UINT32_MAX;
	uint32_t x300 = UINT32_MAX;
	int32_t t44 = 12;

	t44 = (x297>>((x298&x299)<x300));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x301 = UINT16_MAX;
	int32_t x302 = INT32_MIN;
	int16_t x303 = INT16_MIN;
	int8_t x304 = -1;
	volatile int32_t t45 = 23030;

	t45 = (x301>>((x302&x303)<x304));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x305 = 1472460761056LL;
	int8_t x306 = -1;
	static int32_t x307 = INT32_MAX;
	int16_t x308 = INT16_MAX;

	t46 = (x305>>((x306&x307)<x308));

	if (t46 != 1472460761056LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x309 = INT64_MAX;
	int32_t x310 = -26925746;
	int16_t x311 = -123;
	volatile int64_t t47 = INT64_MAX;

	t47 = (x309>>((x310&x311)<x312));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x314 = INT8_MIN;
	static int64_t x315 = INT64_MAX;
	int8_t x316 = 17;

	t48 = (x313>>((x314&x315)<x316));

	if (t48 != 28) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x325 = 0U;
	uint32_t x326 = 1871992309U;
	int64_t x327 = INT64_MIN;
	int64_t x328 = -65424LL;

	t49 = (x325>>((x326&x327)<x328));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x329 = 1U;
	static int16_t x330 = INT16_MAX;
	int8_t x332 = INT8_MAX;
	int32_t t50 = 3;

	t50 = (x329>>((x330&x331)<x332));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x333 = UINT8_MAX;
	int16_t x335 = INT16_MAX;
	int8_t x336 = 54;
	static volatile int32_t t51 = 260129;

	t51 = (x333>>((x334&x335)<x336));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x337 = 101U;
	volatile int32_t x338 = INT32_MIN;
	static uint32_t x339 = 622U;
	static volatile int32_t t52 = -551380;

	t52 = (x337>>((x338&x339)<x340));

	if (t52 != 50) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x345 = 783LLU;
	int32_t x346 = INT32_MIN;
	static uint32_t x347 = UINT32_MAX;
	uint64_t x348 = 326386LLU;
	uint64_t t53 = 7062553273LLU;

	t53 = (x345>>((x346&x347)<x348));

	if (t53 != 783LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x349 = 2430LLU;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MAX;
	int32_t x352 = INT32_MAX;
	static uint64_t t54 = 168906869LLU;

	t54 = (x349>>((x350&x351)<x352));

	if (t54 != 1215LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x357 = 84U;
	volatile int64_t x358 = -23LL;
	int32_t x360 = INT32_MAX;
	volatile uint32_t t55 = 1428337U;

	t55 = (x357>>((x358&x359)<x360));

	if (t55 != 42U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x361 = 45342395U;
	static uint16_t x364 = UINT16_MAX;
	static volatile uint32_t t56 = 7855944U;

	t56 = (x361>>((x362&x363)<x364));

	if (t56 != 22671197U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x366 = -8;
	static uint32_t x367 = UINT32_MAX;
	static uint32_t t57 = 284486689U;

	t57 = (x365>>((x366&x367)<x368));

	if (t57 != 11368274U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x377 = UINT8_MAX;
	uint8_t x378 = 29U;
	volatile int8_t x379 = INT8_MAX;
	static int64_t x380 = 849101584247LL;
	volatile int32_t t58 = 452055089;

	t58 = (x377>>((x378&x379)<x380));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x381 = 147U;
	volatile int16_t x383 = -649;
	static int64_t x384 = -3255044584248760597LL;
	volatile int32_t t59 = -2108569;

	t59 = (x381>>((x382&x383)<x384));

	if (t59 != 147) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	static uint16_t x388 = 7476U;
	int32_t t60 = -410241;

	t60 = (x385>>((x386&x387)<x388));

	if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x389 = UINT16_MAX;
	uint16_t x390 = 43U;
	static int8_t x391 = INT8_MIN;
	uint16_t x392 = 18313U;

	t61 = (x389>>((x390&x391)<x392));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x397 = 3U;
	uint32_t x398 = 6115451U;
	int16_t x399 = -7419;
	int8_t x400 = INT8_MIN;
	volatile int32_t t62 = 1;

	t62 = (x397>>((x398&x399)<x400));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x409 = 21647924U;
	int32_t x410 = INT32_MIN;
	volatile uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	uint32_t t63 = 1629U;

	t63 = (x409>>((x410&x411)<x412));

	if (t63 != 21647924U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x417 = UINT32_MAX;
	int32_t x418 = 812537958;
	int32_t x419 = INT32_MIN;
	static uint8_t x420 = 1U;
	uint32_t t64 = 45U;

	t64 = (x417>>((x418&x419)<x420));

	if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x421 = 16851945U;
	int16_t x422 = INT16_MAX;
	int8_t x423 = INT8_MAX;
	uint8_t x424 = 1U;
	static uint32_t t65 = 1332827U;

	t65 = (x421>>((x422&x423)<x424));

	if (t65 != 16851945U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x425 = 28515110547407111LLU;
	static int32_t x426 = INT32_MIN;
	uint64_t x428 = UINT64_MAX;
	static uint64_t t66 = 69LLU;

	t66 = (x425>>((x426&x427)<x428));

	if (t66 != 14257555273703555LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x429 = INT32_MAX;
	uint64_t x430 = 19976665256523LLU;
	int64_t x431 = INT64_MAX;
	static uint32_t x432 = 163U;
	volatile int32_t t67 = INT32_MAX;

	t67 = (x429>>((x430&x431)<x432));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x437 = 33;
	int16_t x438 = INT16_MIN;
	int32_t x439 = INT32_MIN;
	static uint32_t x440 = UINT32_MAX;
	int32_t t68 = -108042335;

	t68 = (x437>>((x438&x439)<x440));

	if (t68 != 16) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x441 = 24278U;
	int64_t x443 = INT64_MIN;
	uint8_t x444 = UINT8_MAX;
	int32_t t69 = -15922;

	t69 = (x441>>((x442&x443)<x444));

	if (t69 != 12139) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x449 = INT32_MAX;
	int64_t x450 = -1LL;
	static int8_t x451 = -1;
	static int32_t t70 = -58669330;

	t70 = (x449>>((x450&x451)<x452));

	if (t70 != 1073741823) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x453 = 9909620U;
	static uint32_t x454 = 1833U;
	int16_t x455 = INT16_MIN;
	static uint32_t t71 = 28247U;

	t71 = (x453>>((x454&x455)<x456));

	if (t71 != 4954810U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x458 = 7696341LLU;
	volatile int32_t x459 = -1;
	int32_t x460 = -1;
	volatile uint32_t t72 = 5640U;

	t72 = (x457>>((x458&x459)<x460));

	if (t72 != 2147483647U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x462 = 1479176353201192741LLU;
	volatile uint32_t x463 = 215U;
	int8_t x464 = 7;
	volatile int32_t t73 = -1718161;

	t73 = (x461>>((x462&x463)<x464));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x469 = INT64_MAX;
	int64_t x470 = -1784522538193LL;
	int64_t x471 = INT64_MAX;
	static int32_t x472 = INT32_MIN;
	int64_t t74 = INT64_MAX;

	t74 = (x469>>((x470&x471)<x472));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x477 = 0U;
	volatile uint16_t x478 = 198U;
	int8_t x479 = -25;
	static int8_t x480 = -1;
	static uint32_t t75 = 118329U;

	t75 = (x477>>((x478&x479)<x480));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x482 = INT16_MAX;
	uint8_t x483 = UINT8_MAX;
	volatile uint64_t t76 = 1701218LLU;

	t76 = (x481>>((x482&x483)<x484));

	if (t76 != 434768LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x485 = 0U;
	uint64_t x487 = 1868831375919LLU;
	volatile uint64_t x488 = UINT64_MAX;
	int32_t t77 = 1383584;

	t77 = (x485>>((x486&x487)<x488));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x489 = UINT8_MAX;
	int32_t x490 = 1;
	volatile int32_t x491 = 3072;
	int32_t t78 = -83;

	t78 = (x489>>((x490&x491)<x492));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x497 = 50144400;
	uint16_t x498 = UINT16_MAX;
	static int8_t x499 = INT8_MAX;
	int32_t t79 = -1;

	t79 = (x497>>((x498&x499)<x500));

	if (t79 != 50144400) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x502 = -1;
	volatile int64_t t80 = -271151510LL;

	t80 = (x501>>((x502&x503)<x504));

	if (t80 != 4LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x509 = 226U;
	static int8_t x510 = INT8_MIN;
	static int32_t x512 = INT32_MAX;
	volatile uint32_t t81 = 422733264U;

	t81 = (x509>>((x510&x511)<x512));

	if (t81 != 113U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x513 = 4;
	volatile int16_t x514 = INT16_MAX;
	uint16_t x515 = 25870U;
	uint64_t x516 = 6527LLU;
	int32_t t82 = -1;

	t82 = (x513>>((x514&x515)<x516));

	if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x525 = 1;
	static int16_t x527 = -1;
	int64_t x528 = INT64_MIN;
	volatile int32_t t83 = -67835;

	t83 = (x525>>((x526&x527)<x528));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x541 = 1273U;
	int8_t x543 = -1;
	int64_t x544 = INT64_MIN;
	volatile int32_t t84 = 2299;

	t84 = (x541>>((x542&x543)<x544));

	if (t84 != 1273) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x553 = INT8_MAX;
	uint64_t x554 = 226525LLU;
	int32_t x555 = INT32_MIN;
	int64_t x556 = INT64_MAX;
	volatile int32_t t85 = -18;

	t85 = (x553>>((x554&x555)<x556));

	if (t85 != 63) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x557 = UINT16_MAX;
	int32_t x559 = INT32_MIN;
	int8_t x560 = 0;
	volatile int32_t t86 = -2876413;

	t86 = (x557>>((x558&x559)<x560));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x562 = UINT16_MAX;
	static volatile int32_t x563 = INT32_MIN;
	int64_t x564 = INT64_MIN;

	t87 = (x561>>((x562&x563)<x564));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x581 = UINT64_MAX;
	int8_t x582 = INT8_MIN;
	static int8_t x584 = INT8_MIN;
	uint64_t t88 = UINT64_MAX;

	t88 = (x581>>((x582&x583)<x584));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x585 = 132582594923743LL;
	int32_t x586 = -973120;
	int64_t x587 = INT64_MIN;
	static int64_t x588 = -1136039915415038101LL;

	t89 = (x585>>((x586&x587)<x588));

	if (t89 != 66291297461871LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x589 = INT32_MAX;
	int64_t x590 = -1LL;
	uint32_t x591 = UINT32_MAX;
	uint16_t x592 = 85U;
	int32_t t90 = INT32_MAX;

	t90 = (x589>>((x590&x591)<x592));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x598 = INT16_MAX;
	int32_t x599 = -1;
	static volatile int64_t x600 = -1LL;
	int32_t t91 = -65662;

	t91 = (x597>>((x598&x599)<x600));

	if (t91 != 72) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x601 = 72;
	volatile uint16_t x602 = UINT16_MAX;
	volatile int32_t t92 = -453795897;

	t92 = (x601>>((x602&x603)<x604));

	if (t92 != 72) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x605 = 9305063578LL;
	int32_t x606 = INT32_MIN;
	uint64_t x607 = 14LLU;
	volatile uint8_t x608 = 24U;
	static int64_t t93 = -55008075368LL;

	t93 = (x605>>((x606&x607)<x608));

	if (t93 != 4652531789LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x621 = 21328LL;
	static int8_t x622 = -25;
	volatile int32_t x623 = -1;
	int64_t t94 = -721003842312LL;

	t94 = (x621>>((x622&x623)<x624));

	if (t94 != 10664LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x629 = UINT64_MAX;
	int8_t x631 = INT8_MAX;
	static uint32_t x632 = 20661U;
	static volatile uint64_t t95 = 973148LLU;

	t95 = (x629>>((x630&x631)<x632));

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x633 = 129020U;
	int8_t x634 = INT8_MIN;
	uint8_t x636 = UINT8_MAX;

	t96 = (x633>>((x634&x635)<x636));

	if (t96 != 129020U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x642 = UINT32_MAX;
	static volatile int64_t x643 = 12LL;
	volatile int32_t t97 = 2612;

	t97 = (x641>>((x642&x643)<x644));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x649 = INT16_MAX;
	static int32_t x650 = 3;
	int32_t x651 = 592;
	uint64_t x652 = 14642177LLU;
	int32_t t98 = -16438627;

	t98 = (x649>>((x650&x651)<x652));

	if (t98 != 16383) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x657 = 484357995968LLU;
	int32_t x658 = -1;
	int64_t x659 = -1LL;
	static volatile uint8_t x660 = 1U;
	volatile uint64_t t99 = 54971873424351747LLU;

	t99 = (x657>>((x658&x659)<x660));

	if (t99 != 242178997984LLU) { NG(); } else { ; }
	
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

