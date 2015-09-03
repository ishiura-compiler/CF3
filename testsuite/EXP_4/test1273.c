#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x54 = INT16_MAX;
int16_t x65 = INT16_MIN;
uint64_t x70 = UINT64_MAX;
int16_t x79 = INT16_MIN;
int64_t x98 = INT64_MAX;
int64_t t14 = INT64_MAX;
uint16_t x105 = 469U;
int16_t x106 = INT16_MAX;
static uint64_t x114 = 909904755322536078LLU;
volatile int8_t x117 = 0;
int8_t x119 = INT8_MIN;
volatile uint16_t x127 = 185U;
static uint16_t x133 = UINT16_MAX;
static uint64_t x139 = UINT64_MAX;
static uint64_t t21 = 430LLU;
uint8_t x149 = 5U;
int16_t x151 = INT16_MIN;
static volatile int32_t t26 = -5;
static uint16_t x173 = 136U;
volatile uint32_t t27 = 40U;
uint32_t x183 = 19097U;
int32_t x190 = INT32_MAX;
volatile uint8_t x191 = 62U;
volatile uint8_t x193 = 115U;
static int8_t x197 = INT8_MIN;
static volatile int64_t x199 = INT64_MIN;
static int8_t x211 = 1;
volatile int16_t x215 = -3985;
int64_t x216 = INT64_MIN;
int64_t x218 = INT64_MAX;
static uint64_t x219 = 69LLU;
static uint32_t x222 = 14121361U;
uint64_t t35 = UINT64_MAX;
volatile int64_t x233 = -1716LL;
int8_t x236 = INT8_MIN;
static int64_t x250 = 3514723803959872417LL;
int64_t x251 = -1LL;
int64_t t37 = 18004792124831401LL;
uint32_t x255 = 46U;
static uint8_t x295 = 14U;
volatile int64_t t44 = -108593LL;
int8_t x313 = 0;
uint8_t x317 = 6U;
int16_t x318 = INT16_MAX;
volatile int8_t x320 = -1;
int32_t x333 = -20411950;
int16_t x335 = 7534;
int8_t x339 = INT8_MAX;
int64_t x340 = INT64_MAX;
static volatile int32_t x360 = INT32_MIN;
volatile int32_t t55 = 114;
volatile uint32_t x381 = 824329311U;
int64_t t59 = -17319448151499993LL;
static int32_t x419 = 1201698;
int32_t t61 = -1748;
uint8_t x435 = UINT8_MAX;
volatile uint16_t x443 = UINT16_MAX;
uint64_t x451 = 3509533352691696485LLU;
static volatile int64_t t65 = 4468378288017866LL;
uint8_t x454 = UINT8_MAX;
int32_t t67 = 1364;
int32_t x488 = INT32_MAX;
int32_t t69 = 10114034;
uint32_t x496 = 1824U;
volatile uint64_t t73 = 126106173693LLU;
uint8_t x546 = 2U;
uint32_t x547 = 116U;
int32_t x553 = INT32_MAX;
static int8_t x555 = INT8_MIN;
static volatile int64_t x556 = 445394775LL;
int16_t x563 = -2210;
static uint32_t x565 = 28685182U;
uint32_t t78 = 0U;
int64_t x574 = 29656175503LL;
uint16_t x575 = 27U;
uint8_t x608 = 2U;
int64_t t82 = 12903104LL;
uint32_t x624 = UINT32_MAX;
int32_t x626 = INT32_MAX;
uint32_t t87 = UINT32_MAX;
uint16_t x629 = UINT16_MAX;
volatile int32_t x636 = INT32_MIN;
uint8_t x639 = 13U;
volatile int64_t t90 = -1LL;
uint64_t x665 = UINT64_MAX;
volatile int8_t x666 = 3;
int16_t x669 = -2;
static int32_t t98 = -350;
uint8_t x699 = 63U;
static volatile int16_t x700 = INT16_MAX;


void f0(void) {
	volatile int16_t x5 = INT16_MIN;
	int32_t x6 = 0;
	volatile int8_t x7 = INT8_MIN;
	static uint16_t x8 = 9U;
	int32_t t0 = 271;

	t0 = (x5|(x6>>(x7==x8)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MAX;
	static volatile int32_t x14 = INT32_MAX;
	int64_t x15 = -24LL;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t1 = INT32_MAX;

	t1 = (x13|(x14>>(x15==x16)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x17 = UINT32_MAX;
	int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MAX;
	uint32_t x20 = 361660510U;
	uint32_t t2 = UINT32_MAX;

	t2 = (x17|(x18>>(x19==x20)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 1183U;
	uint16_t x22 = 165U;
	int32_t x23 = 0;
	int64_t x24 = INT64_MAX;
	volatile uint32_t t3 = 324401U;

	t3 = (x21|(x22>>(x23==x24)));

	if (t3 != 1215U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1;
	int64_t x26 = INT64_MAX;
	int16_t x27 = -225;
	int16_t x28 = INT16_MIN;
	volatile int64_t t4 = -14546LL;

	t4 = (x25|(x26>>(x27==x28)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x37 = -22002960748LL;
	uint32_t x38 = 21200U;
	int64_t x39 = 254842844LL;
	int64_t x40 = -1LL;
	int64_t t5 = -24805520309LL;

	t5 = (x37|(x38>>(x39==x40)));

	if (t5 != -22002960684LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x41 = UINT8_MAX;
	uint16_t x42 = 4U;
	volatile int16_t x43 = -2;
	int8_t x44 = INT8_MIN;
	int32_t t6 = 28;

	t6 = (x41|(x42>>(x43==x44)));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = 1U;
	uint16_t x50 = 666U;
	volatile uint64_t x51 = UINT64_MAX;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t7 = 11873;

	t7 = (x49|(x50>>(x51==x52)));

	if (t7 != 667) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MIN;
	uint32_t x55 = 267U;
	uint16_t x56 = 62U;
	volatile int32_t t8 = -21050;

	t8 = (x53|(x54>>(x55==x56)));

	if (t8 != -2147450881) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = INT64_MIN;
	static uint32_t x58 = 57U;
	static int64_t x59 = INT64_MIN;
	static int64_t x60 = INT64_MAX;
	volatile int64_t t9 = 3870807079396877012LL;

	t9 = (x57|(x58>>(x59==x60)));

	if (t9 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x66 = 60056113LLU;
	uint32_t x67 = 414244U;
	static int8_t x68 = INT8_MIN;
	volatile uint64_t t10 = 101LLU;

	t10 = (x65|(x66>>(x67==x68)));

	if (t10 != 18446744073709543985LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = -1;
	int16_t x71 = INT16_MIN;
	volatile uint32_t x72 = 3254U;
	static uint64_t t11 = UINT64_MAX;

	t11 = (x69|(x70>>(x71==x72)));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = UINT64_MAX;
	int16_t x74 = INT16_MAX;
	static uint16_t x75 = 6U;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x73|(x74>>(x75==x76)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = -155524682462678817LL;
	int32_t x78 = 1618822;
	static int8_t x80 = INT8_MIN;
	int64_t t13 = 863797517596215LL;

	t13 = (x77|(x78>>(x79==x80)));

	if (t13 != -155524682461105185LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x97 = 4;
	static int32_t x99 = INT32_MIN;
	uint64_t x100 = 38269683313LLU;

	t14 = (x97|(x98>>(x99==x100)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x101 = INT8_MAX;
	int8_t x102 = INT8_MAX;
	int16_t x103 = -1;
	static uint32_t x104 = UINT32_MAX;
	static int32_t t15 = -18995118;

	t15 = (x101|(x102>>(x103==x104)));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x107 = 7U;
	int16_t x108 = -851;
	int32_t t16 = 3;

	t16 = (x105|(x106>>(x107==x108)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x113 = 172592920LLU;
	int16_t x115 = INT16_MIN;
	static int64_t x116 = -789580292611774206LL;
	volatile uint64_t t17 = 96378276426LLU;

	t17 = (x113|(x114>>(x115==x116)));

	if (t17 != 909904755356716958LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x118 = 25400192LL;
	int32_t x120 = 326;
	static int64_t t18 = 2395632LL;

	t18 = (x117|(x118>>(x119==x120)));

	if (t18 != 25400192LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x125 = UINT32_MAX;
	uint64_t x126 = 2623730675807482642LLU;
	static int16_t x128 = 436;
	volatile uint64_t t19 = 8LLU;

	t19 = (x125|(x126>>(x127==x128)));

	if (t19 != 2623730680005132287LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x134 = UINT64_MAX;
	static int64_t x135 = INT64_MAX;
	int8_t x136 = -6;
	uint64_t t20 = UINT64_MAX;

	t20 = (x133|(x134>>(x135==x136)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x137 = INT32_MIN;
	uint64_t x138 = 21187LLU;
	uint64_t x140 = UINT64_MAX;

	t21 = (x137|(x138>>(x139==x140)));

	if (t21 != 18446744071562078561LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x145 = INT64_MAX;
	int16_t x146 = INT16_MAX;
	static uint32_t x147 = 0U;
	static int16_t x148 = INT16_MAX;
	static volatile int64_t t22 = INT64_MAX;

	t22 = (x145|(x146>>(x147==x148)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x150 = 1316515U;
	static int32_t x152 = -1;
	uint32_t t23 = 15U;

	t23 = (x149|(x150>>(x151==x152)));

	if (t23 != 1316519U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x157 = 0U;
	uint64_t x158 = 1398LLU;
	int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MAX;
	volatile uint64_t t24 = 252LLU;

	t24 = (x157|(x158>>(x159==x160)));

	if (t24 != 1398LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x165 = INT32_MIN;
	static int8_t x166 = 0;
	static uint8_t x167 = UINT8_MAX;
	static int8_t x168 = -1;
	volatile int32_t t25 = INT32_MIN;

	t25 = (x165|(x166>>(x167==x168)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x169 = 289U;
	uint16_t x170 = UINT16_MAX;
	int16_t x171 = 0;
	static int8_t x172 = -5;

	t26 = (x169|(x170>>(x171==x172)));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x174 = 2217U;
	int64_t x175 = INT64_MIN;
	static int64_t x176 = INT64_MIN;

	t27 = (x173|(x174>>(x175==x176)));

	if (t27 != 1244U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x181 = 2LL;
	uint32_t x182 = 3113U;
	static int32_t x184 = -1;
	static volatile int64_t t28 = 3775699117267926218LL;

	t28 = (x181|(x182>>(x183==x184)));

	if (t28 != 3115LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x189 = UINT16_MAX;
	volatile uint16_t x192 = UINT16_MAX;
	int32_t t29 = INT32_MAX;

	t29 = (x189|(x190>>(x191==x192)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x194 = UINT16_MAX;
	int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MAX;
	int32_t t30 = -3603;

	t30 = (x193|(x194>>(x195==x196)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x198 = UINT16_MAX;
	int16_t x200 = INT16_MIN;
	volatile int32_t t31 = 0;

	t31 = (x197|(x198>>(x199==x200)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x209 = UINT32_MAX;
	int32_t x210 = INT32_MAX;
	int8_t x212 = INT8_MIN;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x209|(x210>>(x211==x212)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x213 = INT16_MIN;
	uint16_t x214 = 3U;
	volatile int32_t t33 = -1891;

	t33 = (x213|(x214>>(x215==x216)));

	if (t33 != -32765) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x217 = -1;
	uint32_t x220 = 26208574U;
	static volatile int64_t t34 = -7534236LL;

	t34 = (x217|(x218>>(x219==x220)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x221 = UINT64_MAX;
	int64_t x223 = INT64_MIN;
	static int64_t x224 = INT64_MAX;

	t35 = (x221|(x222>>(x223==x224)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x234 = 2;
	int16_t x235 = -1;
	volatile int64_t t36 = 128125095197LL;

	t36 = (x233|(x234>>(x235==x236)));

	if (t36 != -1714LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x249 = -1;
	int16_t x252 = INT16_MAX;

	t37 = (x249|(x250>>(x251==x252)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x253 = 1U;
	static volatile uint64_t x254 = 183611358471994974LLU;
	int64_t x256 = 14381973411539550LL;
	volatile uint64_t t38 = 3162676110LLU;

	t38 = (x253|(x254>>(x255==x256)));

	if (t38 != 183611358471994975LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x265 = INT8_MIN;
	static volatile uint32_t x266 = UINT32_MAX;
	uint32_t x267 = 5071U;
	volatile int16_t x268 = INT16_MIN;
	uint32_t t39 = UINT32_MAX;

	t39 = (x265|(x266>>(x267==x268)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x269 = INT32_MIN;
	int32_t x270 = INT32_MAX;
	volatile int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;
	int32_t t40 = -13604323;

	t40 = (x269|(x270>>(x271==x272)));

	if (t40 != -1073741825) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x277 = 6U;
	int8_t x278 = 0;
	int64_t x279 = -31005714082228133LL;
	volatile uint8_t x280 = 0U;
	int32_t t41 = -4;

	t41 = (x277|(x278>>(x279==x280)));

	if (t41 != 6) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x281 = UINT32_MAX;
	static uint32_t x282 = 11854U;
	int64_t x283 = INT64_MAX;
	volatile uint8_t x284 = 97U;
	static volatile uint32_t t42 = UINT32_MAX;

	t42 = (x281|(x282>>(x283==x284)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x293 = UINT64_MAX;
	uint8_t x294 = UINT8_MAX;
	uint64_t x296 = 107116719058LLU;
	uint64_t t43 = UINT64_MAX;

	t43 = (x293|(x294>>(x295==x296)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x301 = -217500910679LL;
	int32_t x302 = 244168357;
	int32_t x303 = -1;
	int8_t x304 = INT8_MIN;

	t44 = (x301|(x302>>(x303==x304)));

	if (t44 != -217433768019LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x305 = UINT32_MAX;
	int32_t x306 = INT32_MAX;
	uint32_t x307 = 8205U;
	volatile uint64_t x308 = UINT64_MAX;
	uint32_t t45 = UINT32_MAX;

	t45 = (x305|(x306>>(x307==x308)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x314 = INT8_MAX;
	static int8_t x315 = -1;
	static uint32_t x316 = 2658166U;
	volatile int32_t t46 = -3688;

	t46 = (x313|(x314>>(x315==x316)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x319 = INT8_MIN;
	volatile int32_t t47 = 7303346;

	t47 = (x317|(x318>>(x319==x320)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x321 = -1;
	uint8_t x322 = 13U;
	static int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MIN;
	int32_t t48 = 6590;

	t48 = (x321|(x322>>(x323==x324)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x334 = 28U;
	uint32_t x336 = 62368107U;
	int32_t t49 = -6824;

	t49 = (x333|(x334>>(x335==x336)));

	if (t49 != -20411938) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x337 = -2855768861966LL;
	int32_t x338 = INT32_MAX;
	volatile int64_t t50 = -538958882696476336LL;

	t50 = (x337|(x338>>(x339==x340)));

	if (t50 != -2854005768193LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x341 = INT32_MIN;
	uint64_t x342 = 1176264734828522715LLU;
	int64_t x343 = INT64_MIN;
	int32_t x344 = -1;
	uint64_t t51 = 70525529901675LLU;

	t51 = (x341|(x342>>(x343==x344)));

	if (t51 != 18446744072925605083LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x349 = 437630676119LLU;
	uint16_t x350 = 6217U;
	int32_t x351 = -22;
	int32_t x352 = -6;
	static volatile uint64_t t52 = 7632762191LLU;

	t52 = (x349|(x350>>(x351==x352)));

	if (t52 != 437630680287LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x353 = UINT64_MAX;
	static int32_t x354 = INT32_MAX;
	int8_t x355 = INT8_MIN;
	static uint64_t x356 = UINT64_MAX;
	uint64_t t53 = UINT64_MAX;

	t53 = (x353|(x354>>(x355==x356)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x357 = -1;
	uint8_t x358 = UINT8_MAX;
	volatile uint16_t x359 = 60U;
	int32_t t54 = 57;

	t54 = (x357|(x358>>(x359==x360)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x365 = INT16_MIN;
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = UINT8_MAX;
	uint32_t x368 = 0U;

	t55 = (x365|(x366>>(x367==x368)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x382 = 1U;
	uint32_t x383 = 14U;
	int64_t x384 = -3886238260LL;
	uint32_t t56 = 10772U;

	t56 = (x381|(x382>>(x383==x384)));

	if (t56 != 824329311U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MAX;
	volatile int32_t x395 = INT32_MIN;
	int8_t x396 = INT8_MIN;
	volatile int64_t t57 = -15916655708LL;

	t57 = (x393|(x394>>(x395==x396)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x401 = 7U;
	uint32_t x402 = 0U;
	uint64_t x403 = 415215897LLU;
	uint32_t x404 = 1324U;
	volatile uint32_t t58 = 3U;

	t58 = (x401|(x402>>(x403==x404)));

	if (t58 != 7U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x413 = -1LL;
	int32_t x414 = INT32_MAX;
	int16_t x415 = 3;
	uint32_t x416 = UINT32_MAX;

	t59 = (x413|(x414>>(x415==x416)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x417 = -1;
	int32_t x418 = 355777887;
	int32_t x420 = -976914935;
	int32_t t60 = 24677501;

	t60 = (x417|(x418>>(x419==x420)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x429 = -1;
	static volatile uint16_t x430 = UINT16_MAX;
	static volatile int64_t x431 = INT64_MIN;
	uint64_t x432 = 258926948LLU;

	t61 = (x429|(x430>>(x431==x432)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x433 = 26;
	int16_t x434 = INT16_MAX;
	static int16_t x436 = INT16_MIN;
	volatile int32_t t62 = 762;

	t62 = (x433|(x434>>(x435==x436)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x441 = INT64_MIN;
	int8_t x442 = INT8_MAX;
	static int32_t x444 = 1483044;
	static volatile int64_t t63 = -6LL;

	t63 = (x441|(x442>>(x443==x444)));

	if (t63 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x445 = INT8_MAX;
	uint64_t x446 = 264836113193977603LLU;
	uint64_t x447 = 159LLU;
	int16_t x448 = -1;
	uint64_t t64 = 32472884012064214LLU;

	t64 = (x445|(x446>>(x447==x448)));

	if (t64 != 264836113193977727LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x449 = -1LL;
	static int32_t x450 = INT32_MAX;
	int16_t x452 = INT16_MIN;

	t65 = (x449|(x450>>(x451==x452)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x453 = 1667973917835581LLU;
	static int16_t x455 = -304;
	static int64_t x456 = -1LL;
	volatile uint64_t t66 = 2016LLU;

	t66 = (x453|(x454>>(x455==x456)));

	if (t66 != 1667973917835775LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x457 = 1U;
	volatile int16_t x458 = INT16_MAX;
	int8_t x459 = INT8_MIN;
	static int32_t x460 = INT32_MIN;

	t67 = (x457|(x458>>(x459==x460)));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x477 = INT64_MIN;
	int8_t x478 = 0;
	int16_t x479 = INT16_MIN;
	uint16_t x480 = UINT16_MAX;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x477|(x478>>(x479==x480)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x485 = INT8_MIN;
	int16_t x486 = INT16_MAX;
	uint32_t x487 = 6427509U;

	t69 = (x485|(x486>>(x487==x488)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x493 = -1LL;
	uint16_t x494 = 6U;
	uint16_t x495 = UINT16_MAX;
	int64_t t70 = 1109959349240803LL;

	t70 = (x493|(x494>>(x495==x496)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x497 = -59;
	uint16_t x498 = 250U;
	int8_t x499 = -30;
	int16_t x500 = -1;
	int32_t t71 = 153;

	t71 = (x497|(x498>>(x499==x500)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x505 = INT32_MAX;
	int8_t x506 = 0;
	static int32_t x507 = INT32_MIN;
	static uint32_t x508 = 1U;
	int32_t t72 = INT32_MAX;

	t72 = (x505|(x506>>(x507==x508)));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x521 = 162436274414LLU;
	uint8_t x522 = 2U;
	volatile int16_t x523 = -1;
	int8_t x524 = -4;

	t73 = (x521|(x522>>(x523==x524)));

	if (t73 != 162436274414LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x537 = -3;
	static uint8_t x538 = UINT8_MAX;
	int64_t x539 = INT64_MIN;
	volatile int64_t x540 = INT64_MIN;
	volatile int32_t t74 = -472;

	t74 = (x537|(x538>>(x539==x540)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x545 = -1;
	uint32_t x548 = 2U;
	static int32_t t75 = -8;

	t75 = (x545|(x546>>(x547==x548)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x554 = INT32_MAX;
	int32_t t76 = INT32_MAX;

	t76 = (x553|(x554>>(x555==x556)));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x561 = INT32_MIN;
	volatile int16_t x562 = INT16_MAX;
	int8_t x564 = INT8_MAX;
	int32_t t77 = -9994536;

	t77 = (x561|(x562>>(x563==x564)));

	if (t77 != -2147450881) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x566 = INT16_MAX;
	uint32_t x567 = 73U;
	int16_t x568 = INT16_MIN;

	t78 = (x565|(x566>>(x567==x568)));

	if (t78 != 28704767U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x573 = INT32_MIN;
	uint64_t x576 = 3LLU;
	volatile int64_t t79 = -585244LL;

	t79 = (x573|(x574>>(x575==x576)));

	if (t79 != -408595569LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x581 = INT32_MAX;
	uint32_t x582 = UINT32_MAX;
	uint8_t x583 = 3U;
	volatile int8_t x584 = -1;
	static volatile uint32_t t80 = UINT32_MAX;

	t80 = (x581|(x582>>(x583==x584)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x585 = 12253504;
	volatile int32_t x586 = 814;
	int32_t x587 = INT32_MAX;
	volatile int8_t x588 = -20;
	static int32_t t81 = -12517096;

	t81 = (x585|(x586>>(x587==x588)));

	if (t81 != 12254062) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x605 = -1LL;
	static uint32_t x606 = 96966U;
	static volatile uint32_t x607 = 2667170U;

	t82 = (x605|(x606>>(x607==x608)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x609 = 0U;
	static uint16_t x610 = UINT16_MAX;
	int32_t x611 = -674810;
	int64_t x612 = -1LL;
	static int32_t t83 = 6965;

	t83 = (x609|(x610>>(x611==x612)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x613 = UINT32_MAX;
	uint8_t x614 = UINT8_MAX;
	int8_t x615 = -1;
	static int32_t x616 = INT32_MAX;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = (x613|(x614>>(x615==x616)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x617 = 1U;
	uint32_t x618 = UINT32_MAX;
	int32_t x619 = 195;
	uint16_t x620 = 272U;
	static volatile uint32_t t85 = UINT32_MAX;

	t85 = (x617|(x618>>(x619==x620)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x621 = 5;
	int64_t x622 = 5142881947LL;
	int32_t x623 = 776006826;
	static volatile int64_t t86 = -6842LL;

	t86 = (x621|(x622>>(x623==x624)));

	if (t86 != 5142881951LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x625 = UINT32_MAX;
	uint32_t x627 = 99U;
	int32_t x628 = INT32_MIN;

	t87 = (x625|(x626>>(x627==x628)));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x630 = UINT32_MAX;
	uint32_t x631 = 1493929U;
	uint16_t x632 = 1U;
	uint32_t t88 = UINT32_MAX;

	t88 = (x629|(x630>>(x631==x632)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x633 = 129158981U;
	uint8_t x634 = 12U;
	uint16_t x635 = 5U;
	uint32_t t89 = 1232877929U;

	t89 = (x633|(x634>>(x635==x636)));

	if (t89 != 129158989U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x637 = INT64_MIN;
	uint8_t x638 = UINT8_MAX;
	volatile int16_t x640 = INT16_MAX;

	t90 = (x637|(x638>>(x639==x640)));

	if (t90 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x641 = INT16_MIN;
	uint8_t x642 = UINT8_MAX;
	int8_t x643 = -1;
	int16_t x644 = INT16_MAX;
	static int32_t t91 = -742064;

	t91 = (x641|(x642>>(x643==x644)));

	if (t91 != -32513) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x645 = 8U;
	uint32_t x646 = 168U;
	static volatile int16_t x647 = INT16_MAX;
	static int8_t x648 = INT8_MIN;
	volatile uint32_t t92 = 1449967U;

	t92 = (x645|(x646>>(x647==x648)));

	if (t92 != 168U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x649 = INT8_MIN;
	volatile uint8_t x650 = UINT8_MAX;
	volatile uint16_t x651 = UINT16_MAX;
	static int32_t x652 = INT32_MIN;
	static volatile int32_t t93 = 45836;

	t93 = (x649|(x650>>(x651==x652)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x667 = -1;
	int32_t x668 = INT32_MAX;
	static volatile uint64_t t94 = UINT64_MAX;

	t94 = (x665|(x666>>(x667==x668)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x670 = 1867814U;
	volatile int8_t x671 = 3;
	int8_t x672 = INT8_MAX;
	volatile uint32_t t95 = 1286996U;

	t95 = (x669|(x670>>(x671==x672)));

	if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x673 = 102374555U;
	static volatile uint32_t x674 = 5796U;
	static volatile int32_t x675 = INT32_MAX;
	int64_t x676 = INT64_MIN;
	uint32_t t96 = 3630873U;

	t96 = (x673|(x674>>(x675==x676)));

	if (t96 != 102375103U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x677 = 12U;
	static uint64_t x678 = UINT64_MAX;
	volatile int8_t x679 = 0;
	uint32_t x680 = 10U;
	uint64_t t97 = UINT64_MAX;

	t97 = (x677|(x678>>(x679==x680)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x681 = INT16_MAX;
	uint16_t x682 = 4858U;
	volatile uint32_t x683 = UINT32_MAX;
	static int8_t x684 = -1;

	t98 = (x681|(x682>>(x683==x684)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x697 = 0U;
	int16_t x698 = 980;
	volatile int32_t t99 = 217310;

	t99 = (x697|(x698>>(x699==x700)));

	if (t99 != 980) { NG(); } else { ; }
	
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

