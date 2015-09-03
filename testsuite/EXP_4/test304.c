#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
int64_t t0 = 1LL;
static int8_t x5 = 0;
volatile uint64_t x8 = UINT64_MAX;
int16_t x13 = 13031;
static uint64_t x15 = UINT64_MAX;
int32_t x18 = INT32_MIN;
volatile int64_t x20 = INT64_MIN;
uint8_t x40 = UINT8_MAX;
static int8_t x56 = 21;
int64_t t9 = -93533032139LL;
int32_t x66 = 3879;
static int16_t x109 = 1;
volatile uint64_t x117 = 55843305693LLU;
uint64_t t15 = 133791492420805175LLU;
static int64_t x125 = -2LL;
uint16_t x126 = 21262U;
int64_t x127 = 5211765557108235LL;
static volatile int16_t x128 = INT16_MAX;
static int16_t x139 = -1;
static int64_t t17 = 268194LL;
static int32_t x146 = 16719626;
volatile uint64_t t19 = 15LLU;
static uint16_t x153 = UINT16_MAX;
int32_t x164 = 29;
int16_t x185 = INT16_MIN;
volatile int16_t x186 = INT16_MIN;
int64_t x189 = 4791LL;
volatile int64_t t26 = -42727339LL;
int64_t t27 = 733536886732830LL;
static volatile int64_t t31 = 0LL;
uint8_t x225 = UINT8_MAX;
uint16_t x226 = 57U;
static int32_t x235 = 98;
static int64_t x236 = -1LL;
uint8_t x242 = 46U;
int32_t x253 = -1;
int32_t t38 = -685334;
uint16_t x262 = 17628U;
int32_t x263 = -1;
int32_t x264 = 84;
volatile uint64_t t39 = 13315655333288779LLU;
int8_t x266 = -5;
int32_t t41 = 2;
volatile uint64_t x287 = 94894105505889LLU;
int32_t x290 = INT32_MAX;
int64_t x293 = 878456LL;
int32_t x303 = INT32_MAX;
int64_t x304 = INT64_MAX;
int64_t t47 = 3607365972808LL;
uint64_t t48 = 28620544652LLU;
int16_t x309 = -886;
volatile int64_t x312 = INT64_MIN;
uint32_t x313 = 676166U;
int32_t x316 = -19923422;
uint32_t x318 = 29175074U;
int8_t x322 = INT8_MIN;
static int16_t x324 = -1;
volatile int32_t t53 = 3;
int16_t x329 = -14;
volatile int8_t x334 = INT8_MIN;
uint8_t x341 = 0U;
int8_t x343 = INT8_MAX;
volatile int16_t x352 = -1;
int32_t x355 = INT32_MAX;
static volatile uint32_t t60 = 25116222U;
int16_t x377 = INT16_MIN;
volatile int8_t x379 = -1;
volatile int32_t t65 = 125584;
static uint64_t x385 = 3702LLU;
int8_t x386 = INT8_MIN;
static volatile int16_t x399 = 3881;
uint32_t t68 = 2186U;
int64_t x401 = 7843125467602639LL;
int8_t x403 = -1;
int32_t x404 = -71641;
int64_t t69 = 9158LL;
uint64_t x405 = 15655567217702179LLU;
int16_t x406 = INT16_MIN;
int16_t x408 = 134;
static uint16_t x415 = UINT16_MAX;
uint16_t x417 = 6U;
int32_t x421 = -3;
int16_t x445 = INT16_MIN;
volatile uint16_t x446 = UINT16_MAX;
uint64_t t80 = 206261127824LLU;
int32_t x465 = -1;
static int8_t x470 = -10;
uint8_t x479 = 5U;
volatile int64_t x490 = 483LL;
static int16_t x493 = 1;
static volatile int16_t x525 = INT16_MIN;
int32_t t87 = 221637337;
uint64_t x533 = 568729883LLU;
int16_t x545 = 1;
static volatile uint32_t t91 = 1U;
int64_t x576 = INT64_MAX;
volatile int64_t t96 = 3479645092LL;
int32_t x580 = INT32_MIN;
static uint32_t x590 = 10U;
static uint32_t t98 = 56U;
static int8_t x593 = -3;
volatile uint32_t t99 = 25U;


void f0(void) {
	int8_t x1 = -16;
	int32_t x3 = 74995;
	uint8_t x4 = 17U;

	t0 = (x1%(x2&(x3-x4)));

	if (t0 != -16LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	volatile int8_t x7 = INT8_MAX;
	volatile uint64_t t1 = 6981373428494387038LLU;

	t1 = (x5%(x6&(x7-x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile uint8_t x10 = 20U;
	int32_t x11 = INT32_MIN;
	int16_t x12 = -11610;
	int32_t t2 = 510830;

	t2 = (x9%(x10&(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = -3960;
	int32_t x16 = INT32_MAX;
	volatile uint64_t t3 = 645936099967LLU;

	t3 = (x13%(x14&(x15-x16)));

	if (t3 != 13031LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	uint64_t x19 = UINT64_MAX;
	uint64_t t4 = 2308LLU;

	t4 = (x17%(x18&(x19-x20)));

	if (t4 != 4294967295LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MIN;
	volatile uint16_t x23 = 106U;
	int8_t x24 = INT8_MIN;
	int64_t t5 = -1923926109395771LL;

	t5 = (x21%(x22&(x23-x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x29 = 216843U;
	static uint64_t x30 = 6965052311523796LLU;
	int64_t x31 = -64LL;
	static int64_t x32 = 85078582455594049LL;
	uint64_t t6 = 4124LLU;

	t6 = (x29%(x30&(x31-x32)));

	if (t6 != 216843LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x37 = UINT8_MAX;
	int64_t x38 = INT64_MIN;
	volatile uint64_t x39 = UINT64_MAX;
	uint64_t t7 = 56966263790LLU;

	t7 = (x37%(x38&(x39-x40)));

	if (t7 != 255LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x53 = INT64_MIN;
	int32_t x54 = INT32_MAX;
	uint8_t x55 = 37U;
	int64_t t8 = 129968671LL;

	t8 = (x53%(x54&(x55-x56)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = INT64_MIN;
	static int32_t x58 = -1;
	int8_t x59 = -1;
	int8_t x60 = INT8_MAX;

	t9 = (x57%(x58&(x59-x60)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x61 = 3881U;
	int32_t x62 = -1;
	int32_t x63 = -31;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t10 = -83758;

	t10 = (x61%(x62&(x63-x64)));

	if (t10 != 163) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = INT8_MIN;
	uint32_t x67 = 50U;
	int8_t x68 = INT8_MAX;
	volatile uint32_t t11 = 3887265U;

	t11 = (x65%(x66&(x67-x68)));

	if (t11 != 2418U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = INT8_MIN;
	int32_t x82 = 33281697;
	uint16_t x83 = UINT16_MAX;
	volatile int16_t x84 = INT16_MIN;
	static volatile int32_t t12 = -55082;

	t12 = (x81%(x82&(x83-x84)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x93 = -1493;
	int16_t x94 = INT16_MIN;
	static volatile uint64_t x95 = 302LLU;
	static int16_t x96 = INT16_MIN;
	uint64_t t13 = 7198872569141LLU;

	t13 = (x93%(x94&(x95-x96)));

	if (t13 != 31275LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x110 = -755616702231821LL;
	int64_t x111 = -86285146898807LL;
	uint16_t x112 = 931U;
	volatile int64_t t14 = -932LL;

	t14 = (x109%(x110&(x111-x112)));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x118 = 198946348U;
	uint8_t x119 = 29U;
	int8_t x120 = INT8_MIN;

	t15 = (x117%(x118&(x119-x120)));

	if (t15 != 9LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t t16 = -730651792LL;

	t16 = (x125%(x126&(x127-x128)));

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x137 = 7643U;
	int64_t x138 = 74664924865LL;
	int8_t x140 = INT8_MAX;

	t17 = (x137%(x138&(x139-x140)));

	if (t17 != 7643LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x145 = 26LL;
	static int16_t x147 = INT16_MIN;
	int8_t x148 = 17;
	int64_t t18 = 271LL;

	t18 = (x145%(x146&(x147-x148)));

	if (t18 != 26LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x149 = INT16_MAX;
	volatile uint64_t x150 = UINT64_MAX;
	static uint8_t x151 = UINT8_MAX;
	static int8_t x152 = -3;

	t19 = (x149%(x150&(x151-x152)));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x154 = -1;
	uint16_t x155 = 837U;
	int64_t x156 = INT64_MAX;
	int64_t t20 = 986LL;

	t20 = (x153%(x154&(x155-x156)));

	if (t20 != 65535LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MAX;
	uint32_t x163 = 28013U;
	uint32_t t21 = 3217U;

	t21 = (x161%(x162&(x163-x164)));

	if (t21 != 15U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x169 = 38U;
	volatile uint16_t x170 = 1U;
	int8_t x171 = 0;
	volatile int32_t x172 = -1;
	volatile int32_t t22 = 8425;

	t22 = (x169%(x170&(x171-x172)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x187 = INT32_MIN;
	static volatile int64_t x188 = INT64_MIN;
	static volatile int64_t t23 = -215964045951377792LL;

	t23 = (x185%(x186&(x187-x188)));

	if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x190 = -3;
	volatile int64_t x191 = INT64_MAX;
	int64_t x192 = 8253717058LL;
	int64_t t24 = -3151771LL;

	t24 = (x189%(x190&(x191-x192)));

	if (t24 != 4791LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x197 = 3267;
	volatile int32_t x198 = 717371;
	uint8_t x199 = UINT8_MAX;
	static volatile int8_t x200 = 1;
	int32_t t25 = -15;

	t25 = (x197%(x198&(x199-x200)));

	if (t25 != 19) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x201 = INT64_MIN;
	uint16_t x202 = 19277U;
	static uint16_t x203 = 32240U;
	int32_t x204 = -1;

	t26 = (x201%(x202&(x203-x204)));

	if (t26 != -5300LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x205 = 380662145U;
	static uint16_t x206 = UINT16_MAX;
	int64_t x207 = 1792467294916727888LL;
	int32_t x208 = -2454043;

	t27 = (x205%(x206&(x207-x208)));

	if (t27 != 4415LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x209 = INT64_MIN;
	volatile int16_t x210 = -1;
	uint8_t x211 = UINT8_MAX;
	static int16_t x212 = 9363;
	static volatile int64_t t28 = 2LL;

	t28 = (x209%(x210&(x211-x212)));

	if (t28 != -8720LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x213 = INT16_MIN;
	int16_t x214 = -434;
	volatile int16_t x215 = INT16_MAX;
	uint32_t x216 = 7166U;
	volatile uint32_t t29 = 24U;

	t29 = (x213%(x214&(x215-x216)));

	if (t29 != 22528U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x217 = INT32_MAX;
	static int32_t x218 = -1;
	int64_t x219 = -1LL;
	int64_t x220 = INT64_MIN;
	int64_t t30 = -1030868LL;

	t30 = (x217%(x218&(x219-x220)));

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x221 = INT8_MIN;
	uint8_t x222 = 4U;
	int64_t x223 = 1840946382963LL;
	int64_t x224 = 245LL;

	t31 = (x221%(x222&(x223-x224)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x227 = INT8_MIN;
	uint32_t x228 = 171255U;
	volatile uint32_t t32 = 24009U;

	t32 = (x225%(x226&(x227-x228)));

	if (t32 != 3U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x229 = 21U;
	int32_t x230 = INT32_MIN;
	volatile int16_t x231 = -1;
	uint32_t x232 = 1029809U;
	static uint32_t t33 = 7U;

	t33 = (x229%(x230&(x231-x232)));

	if (t33 != 21U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x233 = 0;
	int64_t x234 = INT64_MAX;
	int64_t t34 = 387662LL;

	t34 = (x233%(x234&(x235-x236)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x237 = -379534238;
	static uint64_t x238 = UINT64_MAX;
	uint32_t x239 = UINT32_MAX;
	static volatile int8_t x240 = 1;
	uint64_t t35 = 2246975245LLU;

	t35 = (x237%(x238&(x239-x240)));

	if (t35 != 3915433060LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x241 = INT8_MIN;
	volatile int16_t x243 = -918;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t36 = 2;

	t36 = (x241%(x242&(x243-x244)));

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x245 = 81504;
	static volatile int32_t x246 = INT32_MAX;
	uint8_t x247 = UINT8_MAX;
	static int8_t x248 = -1;
	int32_t t37 = 222;

	t37 = (x245%(x246&(x247-x248)));

	if (t37 != 96) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x254 = INT8_MIN;
	volatile int8_t x255 = -1;
	uint16_t x256 = UINT16_MAX;

	t38 = (x253%(x254&(x255-x256)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x261 = UINT64_MAX;

	t39 = (x261%(x262&(x263-x264)));

	if (t39 != 255LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x265 = 7977U;
	int16_t x267 = INT16_MIN;
	volatile uint64_t x268 = 2LLU;
	volatile uint64_t t40 = 1987112938LLU;

	t40 = (x265%(x266&(x267-x268)));

	if (t40 != 7977LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x269 = 65U;
	uint8_t x270 = UINT8_MAX;
	uint8_t x271 = 52U;
	int8_t x272 = 3;

	t41 = (x269%(x270&(x271-x272)));

	if (t41 != 16) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x281 = INT32_MAX;
	uint8_t x282 = UINT8_MAX;
	int64_t x283 = -1LL;
	static int8_t x284 = 36;
	static volatile int64_t t42 = 1903507809593LL;

	t42 = (x281%(x282&(x283-x284)));

	if (t42 != 88LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x285 = 1;
	static volatile uint32_t x286 = UINT32_MAX;
	int32_t x288 = 1;
	uint64_t t43 = 32LLU;

	t43 = (x285%(x286&(x287-x288)));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x289 = -236;
	int16_t x291 = INT16_MAX;
	uint64_t x292 = 1024737473854951LLU;
	uint64_t t44 = 5269198523870094067LLU;

	t44 = (x289%(x290&(x291-x292)));

	if (t44 != 896434228LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x294 = -1LL;
	volatile int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MIN;
	volatile int64_t t45 = -296729892LL;

	t45 = (x293%(x294&(x295-x296)));

	if (t45 != 878456LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = 2;
	static int16_t x299 = INT16_MAX;
	int32_t x300 = 301;
	static volatile int32_t t46 = -10751967;

	t46 = (x297%(x298&(x299-x300)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x301 = 65U;
	static volatile int64_t x302 = -1LL;

	t47 = (x301%(x302&(x303-x304)));

	if (t47 != 65LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x305 = INT32_MAX;
	int8_t x306 = INT8_MAX;
	int16_t x307 = -1;
	uint64_t x308 = 801LLU;

	t48 = (x305%(x306&(x307-x308)));

	if (t48 != 67LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x310 = 88884LLU;
	static int16_t x311 = INT16_MIN;
	uint64_t t49 = 19836925593LLU;

	t49 = (x309%(x310&(x311-x312)));

	if (t49 != 64650LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x314 = 631;
	int16_t x315 = INT16_MAX;
	uint32_t t50 = 81U;

	t50 = (x313%(x314&(x315-x316)));

	if (t50 != 76U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x317 = INT64_MIN;
	uint32_t x319 = 10770198U;
	uint32_t x320 = 3333U;
	int64_t t51 = -4153550LL;

	t51 = (x317%(x318&(x319-x320)));

	if (t51 != -3545088LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x321 = -1;
	static int16_t x323 = INT16_MAX;
	volatile int32_t t52 = 239;

	t52 = (x321%(x322&(x323-x324)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x325 = -1;
	int32_t x326 = INT32_MIN;
	static int16_t x327 = INT16_MIN;
	uint8_t x328 = UINT8_MAX;

	t53 = (x325%(x326&(x327-x328)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x330 = 10261838LLU;
	int8_t x331 = INT8_MAX;
	static volatile uint32_t x332 = 177364863U;
	volatile uint64_t t54 = 10009113568445LLU;

	t54 = (x329%(x330&(x331-x332)));

	if (t54 != 810482LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x333 = INT64_MAX;
	uint32_t x335 = UINT32_MAX;
	int16_t x336 = 1460;
	volatile int64_t t55 = 3499937593222415021LL;

	t55 = (x333%(x334&(x335-x336)));

	if (t55 != 1179647LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x337 = -549396497143182937LL;
	uint64_t x338 = 204102193071484LLU;
	uint8_t x339 = 2U;
	uint8_t x340 = 12U;
	volatile uint64_t t56 = 25LLU;

	t56 = (x337%(x338&(x339-x340)));

	if (t56 != 34470514781191LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x342 = -1LL;
	static int16_t x344 = -1;
	int64_t t57 = -1145049084LL;

	t57 = (x341%(x342&(x343-x344)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x349 = 10LLU;
	int8_t x350 = 3;
	int16_t x351 = INT16_MIN;
	uint64_t t58 = 1LLU;

	t58 = (x349%(x350&(x351-x352)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x353 = -1;
	volatile int32_t x354 = 16604578;
	volatile int64_t x356 = 4LL;
	int64_t t59 = -69548783509175234LL;

	t59 = (x353%(x354&(x355-x356)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x357 = INT16_MIN;
	uint32_t x358 = 1U;
	int32_t x359 = -54143134;
	int16_t x360 = INT16_MAX;

	t60 = (x357%(x358&(x359-x360)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x361 = -1;
	uint8_t x362 = UINT8_MAX;
	uint8_t x363 = 95U;
	int16_t x364 = 62;
	volatile int32_t t61 = 1913887;

	t61 = (x361%(x362&(x363-x364)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x365 = 108U;
	int32_t x366 = -16877;
	int8_t x367 = -6;
	volatile uint8_t x368 = 48U;
	int32_t t62 = -321250;

	t62 = (x365%(x366&(x367-x368)));

	if (t62 != 108) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x369 = INT16_MIN;
	uint32_t x370 = UINT32_MAX;
	static int32_t x371 = -1;
	static int8_t x372 = INT8_MAX;
	uint32_t t63 = 3951483U;

	t63 = (x369%(x370&(x371-x372)));

	if (t63 != 4294934528U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x378 = INT64_MAX;
	int64_t x380 = INT64_MIN;
	volatile int64_t t64 = 16576517LL;

	t64 = (x377%(x378&(x379-x380)));

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x381 = 2;
	int16_t x382 = -125;
	int16_t x383 = INT16_MIN;
	static volatile int16_t x384 = -1;

	t65 = (x381%(x382&(x383-x384)));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x387 = -1;
	static int64_t x388 = 121014158678LL;
	volatile uint64_t t66 = 5341581870170659161LLU;

	t66 = (x385%(x386&(x387-x388)));

	if (t66 != 3702LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x389 = -1LL;
	uint16_t x390 = UINT16_MAX;
	int16_t x391 = 122;
	int8_t x392 = -46;
	int64_t t67 = -204226842330LL;

	t67 = (x389%(x390&(x391-x392)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x397 = -1;
	uint16_t x398 = 3065U;
	uint32_t x400 = UINT32_MAX;

	t68 = (x397%(x398&(x399-x400)));

	if (t68 != 255U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x402 = -1;

	t69 = (x401%(x402&(x403-x404)));

	if (t69 != 26479LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x407 = INT8_MAX;
	static volatile uint64_t t70 = 1228LLU;

	t70 = (x405%(x406&(x407-x408)));

	if (t70 != 15655567217702179LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x413 = INT16_MAX;
	uint32_t x414 = 10701U;
	uint8_t x416 = 3U;
	uint32_t t71 = 10681U;

	t71 = (x413%(x414&(x415-x416)));

	if (t71 != 667U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x418 = INT64_MIN;
	int8_t x419 = 42;
	int32_t x420 = 51369;
	volatile int64_t t72 = 17LL;

	t72 = (x417%(x418&(x419-x420)));

	if (t72 != 6LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x422 = INT8_MIN;
	static int32_t x423 = 1;
	volatile uint8_t x424 = UINT8_MAX;
	int32_t t73 = 58708758;

	t73 = (x421%(x422&(x423-x424)));

	if (t73 != -3) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x425 = 1741;
	volatile uint64_t x426 = UINT64_MAX;
	int8_t x427 = INT8_MIN;
	static int8_t x428 = -1;
	volatile uint64_t t74 = 141296204442859285LLU;

	t74 = (x425%(x426&(x427-x428)));

	if (t74 != 1741LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x437 = INT64_MAX;
	int64_t x438 = INT64_MAX;
	volatile int64_t x439 = -1LL;
	int64_t x440 = INT64_MIN;
	int64_t t75 = 553868820815428054LL;

	t75 = (x437%(x438&(x439-x440)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x441 = INT16_MIN;
	int8_t x442 = -1;
	uint8_t x443 = 69U;
	int8_t x444 = 4;
	int32_t t76 = 1;

	t76 = (x441%(x442&(x443-x444)));

	if (t76 != -8) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x447 = -18;
	int64_t x448 = 52290635578959877LL;
	volatile int64_t t77 = 12678503726737183LL;

	t77 = (x445%(x446&(x447-x448)));

	if (t77 != -32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x449 = 6629023014121943961LLU;
	int8_t x450 = INT8_MIN;
	volatile int8_t x451 = 1;
	volatile int8_t x452 = 51;
	volatile uint64_t t78 = 4441087023468699LLU;

	t78 = (x449%(x450&(x451-x452)));

	if (t78 != 6629023014121943961LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x457 = -210285;
	int64_t x458 = -196LL;
	uint32_t x459 = 16422432U;
	volatile int32_t x460 = -290054;
	static volatile int64_t t79 = -1LL;

	t79 = (x457%(x458&(x459-x460)));

	if (t79 != -210285LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x461 = INT16_MIN;
	uint64_t x462 = 7844019689233648LLU;
	static uint32_t x463 = 7U;
	volatile uint16_t x464 = UINT16_MAX;

	t80 = (x461%(x462&(x463-x464)));

	if (t80 != 328171520LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x466 = -1;
	static uint64_t x467 = UINT64_MAX;
	int8_t x468 = INT8_MIN;
	volatile uint64_t t81 = 1940906864LLU;

	t81 = (x465%(x466&(x467-x468)));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x469 = -1;
	volatile uint32_t x471 = 2760626U;
	volatile int64_t x472 = -1LL;
	static int64_t t82 = -5LL;

	t82 = (x469%(x470&(x471-x472)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x477 = INT64_MAX;
	volatile int16_t x478 = -1;
	int8_t x480 = INT8_MAX;
	volatile int64_t t83 = 3197LL;

	t83 = (x477%(x478&(x479-x480)));

	if (t83 != 7LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x489 = INT16_MIN;
	int32_t x491 = 1;
	int8_t x492 = INT8_MIN;
	volatile int64_t t84 = 47845380063LL;

	t84 = (x489%(x490&(x491-x492)));

	if (t84 != -2LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x494 = 8835756U;
	static volatile uint8_t x495 = 2U;
	uint16_t x496 = 576U;
	volatile uint32_t t85 = 873887428U;

	t85 = (x493%(x494&(x495-x496)));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x497 = -1;
	static uint16_t x498 = 10089U;
	uint32_t x499 = UINT32_MAX;
	int32_t x500 = -107841076;
	volatile uint32_t t86 = 24668U;

	t86 = (x497%(x498&(x499-x500)));

	if (t86 != 816U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x526 = -2;
	static int8_t x527 = INT8_MIN;
	uint16_t x528 = 1558U;

	t87 = (x525%(x526&(x527-x528)));

	if (t87 != -734) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x529 = 84866883U;
	volatile uint32_t x530 = UINT32_MAX;
	static volatile int16_t x531 = INT16_MIN;
	uint64_t x532 = 23817513LLU;
	volatile uint64_t t88 = 2LLU;

	t88 = (x529%(x530&(x531-x532)));

	if (t88 != 84866883LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x534 = 22U;
	int64_t x535 = INT64_MAX;
	int16_t x536 = 1927;
	static uint64_t t89 = 30721114286646LLU;

	t89 = (x533%(x534&(x535-x536)));

	if (t89 != 11LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x541 = -101;
	uint64_t x542 = 2988046717859LLU;
	int8_t x543 = -3;
	uint64_t x544 = UINT64_MAX;
	uint64_t t90 = 48910378242626LLU;

	t90 = (x541%(x542&(x543-x544)));

	if (t90 != 1804452574219LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x546 = -801;
	int8_t x547 = INT8_MIN;
	uint32_t x548 = 42809595U;

	t91 = (x545%(x546&(x547-x548)));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x549 = INT8_MIN;
	int16_t x550 = -7436;
	static int16_t x551 = -1;
	int64_t x552 = INT64_MIN;
	static int64_t t92 = 2203042458013558173LL;

	t92 = (x549%(x550&(x551-x552)));

	if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x553 = 2U;
	int8_t x554 = 48;
	int64_t x555 = INT64_MAX;
	int8_t x556 = 1;
	int64_t t93 = -142LL;

	t93 = (x553%(x554&(x555-x556)));

	if (t93 != 2LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x561 = -1;
	static volatile uint64_t x562 = 92666385807008659LLU;
	int32_t x563 = 2966;
	static int32_t x564 = -1;
	static volatile uint64_t t94 = 11481726LLU;

	t94 = (x561%(x562&(x563-x564)));

	if (t94 != 15LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x565 = 14103;
	uint8_t x566 = UINT8_MAX;
	uint64_t x567 = 8690LLU;
	volatile uint8_t x568 = 3U;
	uint64_t t95 = 4084265556136483224LLU;

	t95 = (x565%(x566&(x567-x568)));

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x573 = INT16_MIN;
	int64_t x574 = INT64_MAX;
	int32_t x575 = 64;

	t96 = (x573%(x574&(x575-x576)));

	if (t96 != -8LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x577 = INT8_MIN;
	int16_t x578 = INT16_MIN;
	int64_t x579 = INT64_MIN;
	static volatile int64_t t97 = 430108955518LL;

	t97 = (x577%(x578&(x579-x580)));

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x589 = 386U;
	int16_t x591 = INT16_MAX;
	static volatile int32_t x592 = -29560;

	t98 = (x589%(x590&(x591-x592)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x594 = UINT32_MAX;
	uint16_t x595 = 0U;
	int16_t x596 = -212;

	t99 = (x593%(x594&(x595-x596)));

	if (t99 != 145U) { NG(); } else { ; }
	
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

