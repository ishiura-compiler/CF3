#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x13 = -1LL;
volatile int32_t t2 = 52047;
uint32_t x17 = 393U;
static int8_t x22 = INT8_MIN;
int32_t t4 = -966924045;
volatile int32_t t6 = -5409;
volatile uint16_t x39 = UINT16_MAX;
volatile int64_t x42 = -1LL;
volatile int32_t t8 = 50;
volatile int32_t t9 = 4912;
uint16_t x54 = 1U;
volatile int64_t x57 = INT64_MIN;
uint64_t x65 = 2289LLU;
volatile int8_t x71 = INT8_MIN;
static volatile int32_t t13 = -5580191;
static int8_t x79 = -1;
static volatile uint32_t x83 = 3110220U;
static volatile int32_t x87 = 31733;
static uint64_t x89 = 1840LLU;
int32_t x90 = INT32_MIN;
int32_t t17 = 12027;
int64_t x99 = 40670817218132LL;
int8_t x101 = INT8_MIN;
static int8_t x104 = INT8_MIN;
static int32_t t19 = 257175;
int16_t x112 = -1;
int32_t x116 = INT32_MIN;
volatile int32_t t21 = -324572079;
static uint32_t x118 = 56033686U;
int16_t x120 = -803;
uint16_t x130 = 210U;
int32_t x141 = 2746493;
uint64_t x146 = 4153982613366945LLU;
int32_t t28 = -1995;
int8_t x153 = INT8_MIN;
int16_t x155 = -1;
int8_t x160 = -1;
int64_t x163 = INT64_MIN;
uint64_t x164 = UINT64_MAX;
static int8_t x174 = 3;
static int8_t x175 = INT8_MAX;
static uint16_t x176 = 471U;
volatile int32_t t32 = 782096773;
int8_t x177 = -1;
int32_t t33 = -1836749;
volatile int64_t x194 = -1LL;
int32_t x196 = INT32_MIN;
int64_t x202 = -1LL;
uint16_t x203 = 16879U;
static volatile int32_t t39 = 1087;
static volatile uint64_t x212 = UINT64_MAX;
int32_t x227 = INT32_MAX;
volatile uint8_t x242 = 2U;
volatile uint16_t x244 = 95U;
int8_t x249 = INT8_MIN;
static int8_t x253 = -46;
volatile int32_t x257 = -1;
int16_t x261 = INT16_MAX;
volatile int16_t x263 = INT16_MAX;
static uint16_t x273 = 18U;
static int16_t x286 = INT16_MAX;
uint16_t x287 = 14U;
int8_t x290 = -1;
int16_t x304 = INT16_MIN;
int64_t x309 = -1LL;
int32_t t57 = -99;
int64_t x317 = 14851793LL;
static int16_t x320 = INT16_MIN;
static uint32_t x336 = 1761028271U;
int32_t x343 = 2;
int8_t x354 = INT8_MIN;
int16_t x372 = INT16_MIN;
volatile uint16_t x378 = 22709U;
uint64_t x387 = 85730LLU;
volatile uint32_t x396 = 126U;
uint64_t x403 = UINT64_MAX;
int64_t x413 = -1LL;
static int32_t x415 = INT32_MIN;
int8_t x429 = INT8_MIN;
uint32_t x434 = 446U;
int8_t x435 = INT8_MIN;
int32_t x436 = -15;
volatile int32_t t75 = 14;
uint64_t x437 = UINT64_MAX;
int32_t x439 = INT32_MIN;
static uint8_t x449 = UINT8_MAX;
int32_t t78 = 193762287;
int16_t x461 = INT16_MIN;
int64_t x462 = -1LL;
int32_t x475 = -725;
uint16_t x476 = 14880U;
int16_t x483 = INT16_MIN;
int32_t t83 = 14;
int16_t x521 = 0;
int16_t x529 = INT16_MIN;
static uint16_t x536 = 6U;
static uint32_t x539 = 902055591U;
uint16_t x540 = 12921U;
int32_t t89 = -558;
volatile int32_t t91 = -5;
static int16_t x551 = INT16_MAX;
int16_t x552 = INT16_MIN;
uint64_t x561 = UINT64_MAX;
int8_t x562 = 5;
int16_t x567 = -735;
int64_t x580 = -2090166890657724LL;
volatile int32_t t97 = 102450;


void f0(void) {
	int32_t x5 = 14303583;
	int8_t x6 = INT8_MIN;
	volatile int16_t x7 = INT16_MIN;
	uint16_t x8 = 1U;
	int32_t t0 = -77148;

	t0 = ((x5*x6)<(x7-x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	static volatile uint64_t x10 = UINT64_MAX;
	uint32_t x11 = 109029042U;
	int32_t x12 = INT32_MAX;
	int32_t t1 = 40529;

	t1 = ((x9*x10)<(x11-x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = 22U;
	int8_t x15 = -1;
	int64_t x16 = -17LL;

	t2 = ((x13*x14)<(x15-x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x18 = 12U;
	volatile uint8_t x19 = UINT8_MAX;
	int64_t x20 = INT64_MAX;
	int32_t t3 = 299745216;

	t3 = ((x17*x18)<(x19-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	int64_t x23 = -379961756LL;
	volatile int64_t x24 = INT64_MIN;

	t4 = ((x21*x22)<(x23-x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	volatile int16_t x26 = INT16_MIN;
	static volatile int16_t x27 = 5;
	volatile int32_t x28 = -1;
	static volatile int32_t t5 = -498845;

	t5 = ((x25*x26)<(x27-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 30U;
	volatile uint16_t x34 = 303U;
	volatile int64_t x35 = -334574012945005034LL;
	static volatile int32_t x36 = -1;

	t6 = ((x33*x34)<(x35-x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 1389LLU;
	int64_t x38 = INT64_MIN;
	int8_t x40 = -1;
	volatile int32_t t7 = -8499991;

	t7 = ((x37*x38)<(x39-x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	static int64_t x43 = -1LL;
	int32_t x44 = -62221575;

	t8 = ((x41*x42)<(x43-x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	static int64_t x46 = 461236LL;
	static int16_t x47 = INT16_MIN;
	int64_t x48 = 128LL;

	t9 = ((x45*x46)<(x47-x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = UINT8_MAX;
	static int64_t x55 = INT64_MAX;
	int8_t x56 = 1;
	int32_t t10 = -7;

	t10 = ((x53*x54)<(x55-x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x58 = UINT64_MAX;
	static uint16_t x59 = UINT16_MAX;
	int32_t x60 = -1;
	static int32_t t11 = -63828;

	t11 = ((x57*x58)<(x59-x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MIN;
	static int64_t x68 = INT64_MIN;
	volatile int32_t t12 = 1674;

	t12 = ((x65*x66)<(x67-x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = INT16_MIN;
	volatile uint64_t x70 = 11793326213073853LLU;
	uint8_t x72 = UINT8_MAX;

	t13 = ((x69*x70)<(x71-x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x77 = 1;
	volatile int16_t x78 = -74;
	uint16_t x80 = 9U;
	int32_t t14 = 4106163;

	t14 = ((x77*x78)<(x79-x80));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 90518787U;
	int16_t x82 = INT16_MAX;
	static uint8_t x84 = UINT8_MAX;
	volatile int32_t t15 = 0;

	t15 = ((x81*x82)<(x83-x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = 1196993521268070256LLU;
	int16_t x86 = 684;
	int64_t x88 = -1LL;
	static int32_t t16 = -14934961;

	t16 = ((x85*x86)<(x87-x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x91 = INT64_MAX;
	int8_t x92 = INT8_MAX;

	t17 = ((x89*x90)<(x91-x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = INT64_MAX;
	int64_t x98 = -1LL;
	static int16_t x100 = INT16_MIN;
	int32_t t18 = -29076589;

	t18 = ((x97*x98)<(x99-x100));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x102 = 4U;
	volatile uint64_t x103 = 472675LLU;

	t19 = ((x101*x102)<(x103-x104));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x109 = -2917991;
	int8_t x110 = INT8_MIN;
	uint32_t x111 = 2U;
	volatile int32_t t20 = 186823357;

	t20 = ((x109*x110)<(x111-x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = 12;
	int64_t x114 = -6295735367808LL;
	int64_t x115 = -11498268781489799LL;

	t21 = ((x113*x114)<(x115-x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x117 = 387733U;
	int64_t x119 = -1LL;
	volatile int32_t t22 = -62352;

	t22 = ((x117*x118)<(x119-x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x121 = 1U;
	int8_t x122 = 5;
	volatile uint16_t x123 = UINT16_MAX;
	int16_t x124 = INT16_MIN;
	volatile int32_t t23 = 28466820;

	t23 = ((x121*x122)<(x123-x124));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x125 = INT64_MAX;
	volatile int8_t x126 = 0;
	static int16_t x127 = -1;
	static volatile int16_t x128 = INT16_MIN;
	static volatile int32_t t24 = 7;

	t24 = ((x125*x126)<(x127-x128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MIN;
	int64_t x131 = -1LL;
	uint64_t x132 = UINT64_MAX;
	static int32_t t25 = 0;

	t25 = ((x129*x130)<(x131-x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x137 = 3571335775773LLU;
	volatile int64_t x138 = INT64_MIN;
	int64_t x139 = -1LL;
	int16_t x140 = 14138;
	volatile int32_t t26 = 26;

	t26 = ((x137*x138)<(x139-x140));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x142 = UINT32_MAX;
	uint8_t x143 = UINT8_MAX;
	int16_t x144 = 803;
	volatile int32_t t27 = -8387878;

	t27 = ((x141*x142)<(x143-x144));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = 1;
	uint32_t x147 = UINT32_MAX;
	uint32_t x148 = UINT32_MAX;

	t28 = ((x145*x146)<(x147-x148));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x154 = 21097316U;
	volatile uint16_t x156 = 0U;
	int32_t t29 = 4230;

	t29 = ((x153*x154)<(x155-x156));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x157 = UINT8_MAX;
	uint16_t x158 = UINT16_MAX;
	int8_t x159 = -16;
	volatile int32_t t30 = 502826190;

	t30 = ((x157*x158)<(x159-x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = INT8_MIN;
	int8_t x162 = INT8_MIN;
	volatile int32_t t31 = 45104405;

	t31 = ((x161*x162)<(x163-x164));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = 9192802;

	t32 = ((x173*x174)<(x175-x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x178 = 129U;
	int64_t x179 = -140838331927203212LL;
	static int64_t x180 = 15466LL;

	t33 = ((x177*x178)<(x179-x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = -41;
	int32_t x183 = INT32_MIN;
	static int8_t x184 = INT8_MIN;
	static int32_t t34 = -301714;

	t34 = ((x181*x182)<(x183-x184));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = 1;
	static int64_t x190 = 129033457532LL;
	static int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	volatile int32_t t35 = -31839272;

	t35 = ((x189*x190)<(x191-x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = INT16_MAX;
	uint64_t x195 = UINT64_MAX;
	int32_t t36 = -61230;

	t36 = ((x193*x194)<(x195-x196));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = INT32_MIN;
	uint64_t x198 = 52686680011993938LLU;
	int16_t x199 = -4098;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t37 = 6;

	t37 = ((x197*x198)<(x199-x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x201 = INT16_MAX;
	volatile int8_t x204 = -22;
	volatile int32_t t38 = 0;

	t38 = ((x201*x202)<(x203-x204));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x205 = INT16_MAX;
	static int32_t x206 = -7660;
	volatile int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MAX;

	t39 = ((x205*x206)<(x207-x208));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x209 = -1;
	volatile int16_t x210 = INT16_MIN;
	volatile int16_t x211 = -1;
	volatile int32_t t40 = -7892387;

	t40 = ((x209*x210)<(x211-x212));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = -1;
	int16_t x218 = INT16_MIN;
	volatile int64_t x219 = 271608523650518599LL;
	int64_t x220 = -157971LL;
	int32_t t41 = 856781;

	t41 = ((x217*x218)<(x219-x220));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MIN;
	int32_t x228 = INT32_MAX;
	int32_t t42 = -15920;

	t42 = ((x225*x226)<(x227-x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x229 = UINT64_MAX;
	int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MIN;
	volatile int64_t x232 = -1LL;
	int32_t t43 = 674;

	t43 = ((x229*x230)<(x231-x232));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x241 = UINT8_MAX;
	static volatile int16_t x243 = -784;
	volatile int32_t t44 = -13376713;

	t44 = ((x241*x242)<(x243-x244));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x250 = INT8_MAX;
	static int64_t x251 = 403973549177759760LL;
	uint64_t x252 = 988569LLU;
	volatile int32_t t45 = 145773;

	t45 = ((x249*x250)<(x251-x252));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x254 = -1;
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = INT64_MAX;
	volatile int32_t t46 = -976;

	t46 = ((x253*x254)<(x255-x256));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x258 = -3629;
	int16_t x259 = INT16_MIN;
	volatile int64_t x260 = -8823374209LL;
	volatile int32_t t47 = 581010;

	t47 = ((x257*x258)<(x259-x260));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x262 = UINT32_MAX;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t48 = -7203;

	t48 = ((x261*x262)<(x263-x264));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x265 = -1LL;
	static volatile uint16_t x266 = 124U;
	volatile int32_t x267 = INT32_MIN;
	uint64_t x268 = 3LLU;
	int32_t t49 = 22530;

	t49 = ((x265*x266)<(x267-x268));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x274 = 44U;
	static int16_t x275 = INT16_MAX;
	uint16_t x276 = 6U;
	volatile int32_t t50 = 0;

	t50 = ((x273*x274)<(x275-x276));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x281 = 6LLU;
	static int64_t x282 = 185147619544820269LL;
	uint16_t x283 = 1U;
	int8_t x284 = INT8_MAX;
	static int32_t t51 = -15;

	t51 = ((x281*x282)<(x283-x284));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x285 = -1;
	volatile uint32_t x288 = UINT32_MAX;
	int32_t t52 = 0;

	t52 = ((x285*x286)<(x287-x288));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x289 = -503163412;
	volatile int32_t x291 = -5492542;
	static int16_t x292 = INT16_MAX;
	int32_t t53 = -24;

	t53 = ((x289*x290)<(x291-x292));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x293 = 58277975975908LLU;
	uint64_t x294 = 2166353778052216967LLU;
	uint32_t x295 = 685U;
	uint32_t x296 = UINT32_MAX;
	static volatile int32_t t54 = -7573814;

	t54 = ((x293*x294)<(x295-x296));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x301 = 30;
	uint32_t x302 = 398865U;
	volatile uint64_t x303 = 17321236LLU;
	volatile int32_t t55 = 146953;

	t55 = ((x301*x302)<(x303-x304));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x305 = UINT64_MAX;
	volatile uint16_t x306 = 603U;
	int32_t x307 = -23063931;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t56 = 113864447;

	t56 = ((x305*x306)<(x307-x308));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x310 = 2;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;

	t57 = ((x309*x310)<(x311-x312));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x318 = UINT32_MAX;
	int16_t x319 = INT16_MIN;
	int32_t t58 = 123961912;

	t58 = ((x317*x318)<(x319-x320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x325 = 65474992880703852LLU;
	uint64_t x326 = UINT64_MAX;
	uint32_t x327 = 1636511U;
	int16_t x328 = INT16_MIN;
	volatile int32_t t59 = -234399880;

	t59 = ((x325*x326)<(x327-x328));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x329 = 31U;
	static int64_t x330 = -1LL;
	int64_t x331 = -1LL;
	uint32_t x332 = 7301012U;
	static volatile int32_t t60 = -1326;

	t60 = ((x329*x330)<(x331-x332));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x333 = 56207296116LLU;
	int64_t x334 = -1LL;
	volatile int64_t x335 = -3LL;
	volatile int32_t t61 = 5237877;

	t61 = ((x333*x334)<(x335-x336));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x337 = 20248;
	int8_t x338 = 0;
	uint32_t x339 = 5U;
	uint16_t x340 = 14898U;
	int32_t t62 = 317408;

	t62 = ((x337*x338)<(x339-x340));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x341 = UINT16_MAX;
	int8_t x342 = -1;
	static uint16_t x344 = 719U;
	volatile int32_t t63 = 177593;

	t63 = ((x341*x342)<(x343-x344));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x353 = -1;
	static int32_t x355 = -109776;
	uint8_t x356 = UINT8_MAX;
	static volatile int32_t t64 = -42927;

	t64 = ((x353*x354)<(x355-x356));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x369 = 29;
	static int8_t x370 = -6;
	static int16_t x371 = 1;
	static volatile int32_t t65 = -30;

	t65 = ((x369*x370)<(x371-x372));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x373 = UINT8_MAX;
	int16_t x374 = -1;
	volatile int32_t x375 = -1;
	volatile int8_t x376 = -1;
	static volatile int32_t t66 = 131;

	t66 = ((x373*x374)<(x375-x376));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x377 = UINT16_MAX;
	int32_t x379 = 298;
	int64_t x380 = -6082LL;
	volatile int32_t t67 = -1;

	t67 = ((x377*x378)<(x379-x380));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x385 = 1U;
	static int32_t x386 = INT32_MIN;
	int32_t x388 = -7526616;
	static volatile int32_t t68 = 126458;

	t68 = ((x385*x386)<(x387-x388));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x389 = -1LL;
	int32_t x390 = -12921;
	static volatile int64_t x391 = INT64_MAX;
	static uint32_t x392 = 905158U;
	static int32_t t69 = -221;

	t69 = ((x389*x390)<(x391-x392));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x393 = 0U;
	volatile uint32_t x394 = 2029U;
	uint32_t x395 = 32678U;
	volatile int32_t t70 = 21951;

	t70 = ((x393*x394)<(x395-x396));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x401 = INT8_MIN;
	uint32_t x402 = 39U;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t71 = -1260;

	t71 = ((x401*x402)<(x403-x404));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x414 = INT32_MAX;
	uint32_t x416 = 2761U;
	volatile int32_t t72 = 2284;

	t72 = ((x413*x414)<(x415-x416));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x417 = INT8_MIN;
	uint64_t x418 = UINT64_MAX;
	int32_t x419 = -41;
	int32_t x420 = 270393595;
	int32_t t73 = -178;

	t73 = ((x417*x418)<(x419-x420));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x430 = UINT64_MAX;
	int8_t x431 = INT8_MIN;
	static int16_t x432 = INT16_MIN;
	volatile int32_t t74 = -750;

	t74 = ((x429*x430)<(x431-x432));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x433 = INT32_MIN;

	t75 = ((x433*x434)<(x435-x436));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x438 = 0;
	int8_t x440 = -1;
	static volatile int32_t t76 = 225;

	t76 = ((x437*x438)<(x439-x440));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x441 = INT32_MIN;
	int64_t x442 = -1LL;
	int32_t x443 = -1;
	static volatile int32_t x444 = INT32_MAX;
	volatile int32_t t77 = 11;

	t77 = ((x441*x442)<(x443-x444));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x450 = 3263459840LLU;
	uint8_t x451 = 27U;
	static uint32_t x452 = UINT32_MAX;

	t78 = ((x449*x450)<(x451-x452));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x463 = -1LL;
	int8_t x464 = INT8_MIN;
	int32_t t79 = 99;

	t79 = ((x461*x462)<(x463-x464));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x469 = INT8_MIN;
	uint32_t x470 = UINT32_MAX;
	static uint64_t x471 = 31674842903909280LLU;
	int8_t x472 = INT8_MIN;
	volatile int32_t t80 = 641;

	t80 = ((x469*x470)<(x471-x472));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x473 = 55U;
	int8_t x474 = INT8_MIN;
	volatile int32_t t81 = -402869768;

	t81 = ((x473*x474)<(x475-x476));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x477 = INT16_MIN;
	uint8_t x478 = UINT8_MAX;
	uint64_t x479 = 27530LLU;
	int16_t x480 = 110;
	int32_t t82 = 825739;

	t82 = ((x477*x478)<(x479-x480));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x481 = 0U;
	static int16_t x482 = 1;
	int8_t x484 = INT8_MIN;

	t83 = ((x481*x482)<(x483-x484));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x497 = UINT8_MAX;
	volatile int32_t x498 = 2608017;
	volatile int16_t x499 = -2;
	int8_t x500 = INT8_MIN;
	int32_t t84 = -43465;

	t84 = ((x497*x498)<(x499-x500));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x505 = UINT64_MAX;
	int64_t x506 = INT64_MIN;
	int16_t x507 = -157;
	uint32_t x508 = 268171U;
	static volatile int32_t t85 = -11821;

	t85 = ((x505*x506)<(x507-x508));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x522 = -1;
	int16_t x523 = 57;
	int16_t x524 = -1;
	int32_t t86 = -231354919;

	t86 = ((x521*x522)<(x523-x524));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x530 = -37070LL;
	uint64_t x531 = 32522903745LLU;
	int8_t x532 = INT8_MIN;
	volatile int32_t t87 = -31858451;

	t87 = ((x529*x530)<(x531-x532));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x533 = INT8_MIN;
	int8_t x534 = -1;
	int16_t x535 = -1;
	volatile int32_t t88 = -273774057;

	t88 = ((x533*x534)<(x535-x536));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x537 = 26527U;
	static int8_t x538 = -42;

	t89 = ((x537*x538)<(x539-x540));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x541 = 8LL;
	int8_t x542 = -1;
	int8_t x543 = -1;
	uint64_t x544 = UINT64_MAX;
	volatile int32_t t90 = 3;

	t90 = ((x541*x542)<(x543-x544));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x545 = 3;
	volatile uint32_t x546 = UINT32_MAX;
	volatile int8_t x547 = INT8_MIN;
	int16_t x548 = 3;

	t91 = ((x545*x546)<(x547-x548));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x549 = 8U;
	uint16_t x550 = 23320U;
	int32_t t92 = -5570518;

	t92 = ((x549*x550)<(x551-x552));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x557 = 0U;
	volatile int64_t x558 = INT64_MIN;
	volatile uint8_t x559 = UINT8_MAX;
	uint16_t x560 = 1479U;
	static volatile int32_t t93 = 1;

	t93 = ((x557*x558)<(x559-x560));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x563 = -1;
	static uint32_t x564 = 18246U;
	int32_t t94 = 38884;

	t94 = ((x561*x562)<(x563-x564));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x565 = 6U;
	static volatile int32_t x566 = -214;
	static uint32_t x568 = 9489U;
	volatile int32_t t95 = -10;

	t95 = ((x565*x566)<(x567-x568));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x573 = 16U;
	uint16_t x574 = 65U;
	int16_t x575 = -1;
	static volatile int64_t x576 = INT64_MAX;
	int32_t t96 = -1728;

	t96 = ((x573*x574)<(x575-x576));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x577 = -1;
	uint16_t x578 = 236U;
	uint32_t x579 = UINT32_MAX;

	t97 = ((x577*x578)<(x579-x580));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x589 = -1;
	uint64_t x590 = 4000060461067835LLU;
	static int32_t x591 = -1;
	volatile int32_t x592 = INT32_MAX;
	int32_t t98 = 3780;

	t98 = ((x589*x590)<(x591-x592));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x593 = 6;
	volatile int64_t x594 = -1LL;
	int8_t x595 = INT8_MIN;
	volatile int16_t x596 = INT16_MIN;
	int32_t t99 = -150874227;

	t99 = ((x593*x594)<(x595-x596));

	if (t99 != 1) { NG(); } else { ; }
	
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

