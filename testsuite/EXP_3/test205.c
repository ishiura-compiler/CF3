#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x28 = INT8_MIN;
int16_t x30 = 88;
uint8_t x32 = 3U;
int8_t x34 = INT8_MIN;
volatile uint64_t x38 = 253698689882176LLU;
int32_t x39 = INT32_MIN;
uint64_t x41 = UINT64_MAX;
uint16_t x44 = 95U;
uint64_t x52 = 161286615LLU;
uint16_t x55 = 11078U;
volatile int32_t t11 = -7311917;
static int32_t x78 = -13947939;
int64_t x80 = -223878311LL;
int16_t x90 = INT16_MIN;
int64_t x91 = -1LL;
int16_t x100 = 96;
int16_t x102 = INT16_MIN;
int32_t x105 = INT32_MAX;
volatile uint64_t x106 = UINT64_MAX;
uint32_t x108 = 4U;
int32_t t17 = 997912082;
int32_t t18 = -74;
uint32_t x137 = 7U;
int32_t t20 = 2661732;
int32_t x147 = -1;
uint8_t x150 = UINT8_MAX;
uint16_t x154 = UINT16_MAX;
int16_t x159 = 6890;
int16_t x172 = 944;
volatile int32_t t26 = 12;
int64_t x183 = INT64_MAX;
int32_t t28 = 249549;
int64_t x186 = 110640585927LL;
static volatile int32_t t30 = -9298741;
int8_t x199 = -1;
volatile int32_t t32 = 12351;
static volatile int8_t x220 = INT8_MAX;
uint8_t x223 = 2U;
volatile int32_t t36 = 1;
int16_t x237 = 25;
uint16_t x251 = UINT16_MAX;
uint16_t x257 = 1U;
uint64_t x263 = 9744213623621LLU;
static volatile uint32_t x266 = 25U;
static int64_t x271 = INT64_MIN;
volatile uint32_t x301 = UINT32_MAX;
int32_t x311 = -1;
int8_t x312 = -1;
static int8_t x319 = -1;
volatile int16_t x321 = INT16_MAX;
int16_t x323 = INT16_MAX;
int64_t x331 = -95376701166426554LL;
int32_t t54 = 608061432;
int32_t t55 = 359;
volatile int32_t t56 = 0;
int32_t x363 = INT32_MIN;
int32_t t60 = -52318;
int8_t x375 = 5;
volatile uint64_t x377 = UINT64_MAX;
uint8_t x385 = UINT8_MAX;
static volatile int32_t t63 = 392566;
uint32_t x406 = 99U;
uint8_t x408 = 30U;
int8_t x413 = INT8_MIN;
volatile uint8_t x416 = 1U;
static uint8_t x421 = 1U;
static int64_t x422 = INT64_MAX;
volatile uint8_t x423 = 22U;
volatile int8_t x437 = 18;
int16_t x438 = INT16_MIN;
int8_t x440 = 0;
uint64_t x445 = 10514628368LLU;
int64_t x449 = INT64_MAX;
volatile int64_t x455 = INT64_MIN;
int32_t x459 = INT32_MIN;
volatile int64_t x460 = -1125136966578240LL;
int32_t t75 = -115908611;
int8_t x462 = -1;
int32_t t76 = -1;
volatile int16_t x469 = INT16_MIN;
uint64_t x471 = UINT64_MAX;
volatile int8_t x472 = 3;
volatile int16_t x483 = -2318;
volatile int32_t t83 = 0;
int32_t x510 = 5231;
int32_t t85 = -210916;
static volatile int16_t x539 = 141;
int64_t x540 = INT64_MAX;
volatile int64_t x543 = -198180479LL;
int8_t x546 = -1;
volatile int32_t t89 = -4;
static int32_t x549 = -1;
volatile int8_t x551 = INT8_MIN;
volatile uint64_t x558 = UINT64_MAX;
static int64_t x559 = INT64_MIN;
int16_t x560 = INT16_MIN;
int16_t x571 = INT16_MIN;
volatile uint16_t x573 = 10U;
uint64_t x575 = 1129551531459520886LLU;
int32_t t94 = 9505;
volatile uint8_t x587 = 2U;
volatile int8_t x589 = INT8_MAX;
volatile int16_t x592 = 61;
uint8_t x602 = UINT8_MAX;
int64_t x603 = -1LL;
static volatile int32_t t98 = -8421;


void f0(void) {
	int8_t x5 = -10;
	int8_t x6 = -55;
	volatile int64_t x7 = INT64_MIN;
	volatile int64_t x8 = -2073157209LL;
	volatile int32_t t0 = -2881295;

	t0 = ((x5*x6)<=(x7-x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x25 = INT32_MAX;
	int16_t x26 = 0;
	static int16_t x27 = 59;
	int32_t t1 = -31;

	t1 = ((x25*x26)<=(x27-x28));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x29 = 451743726U;
	int32_t x31 = -1;
	int32_t t2 = -2178373;

	t2 = ((x29*x30)<=(x31-x32));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x33 = 2143U;
	int8_t x35 = INT8_MIN;
	uint64_t x36 = UINT64_MAX;
	int32_t t3 = 6719048;

	t3 = ((x33*x34)<=(x35-x36));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x37 = 45U;
	int64_t x40 = INT64_MIN;
	int32_t t4 = 1;

	t4 = ((x37*x38)<=(x39-x40));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x42 = 4484898166718784LLU;
	static int16_t x43 = 28;
	volatile int32_t t5 = 3559163;

	t5 = ((x41*x42)<=(x43-x44));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = -1;
	static int64_t x50 = -1LL;
	uint16_t x51 = 14626U;
	volatile int32_t t6 = -74;

	t6 = ((x49*x50)<=(x51-x52));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x53 = INT16_MIN;
	uint16_t x54 = 5U;
	int8_t x56 = INT8_MAX;
	volatile int32_t t7 = -722;

	t7 = ((x53*x54)<=(x55-x56));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x57 = UINT64_MAX;
	int64_t x58 = -64590578536LL;
	volatile int16_t x59 = -1;
	volatile int8_t x60 = -1;
	volatile int32_t t8 = -20385;

	t8 = ((x57*x58)<=(x59-x60));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x65 = UINT64_MAX;
	int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MIN;
	volatile int16_t x68 = INT16_MIN;
	volatile int32_t t9 = -1;

	t9 = ((x65*x66)<=(x67-x68));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x69 = 50U;
	uint16_t x70 = 927U;
	static uint32_t x71 = UINT32_MAX;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t10 = 233695186;

	t10 = ((x69*x70)<=(x71-x72));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = UINT32_MAX;
	volatile int32_t x75 = INT32_MAX;
	uint8_t x76 = 2U;

	t11 = ((x73*x74)<=(x75-x76));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x77 = UINT64_MAX;
	int8_t x79 = INT8_MAX;
	volatile int32_t t12 = 4;

	t12 = ((x77*x78)<=(x79-x80));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x89 = -3520;
	int64_t x92 = INT64_MIN;
	static volatile int32_t t13 = 132187654;

	t13 = ((x89*x90)<=(x91-x92));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x93 = INT64_MIN;
	int16_t x94 = 1;
	volatile uint64_t x95 = 1202180LLU;
	int8_t x96 = INT8_MAX;
	volatile int32_t t14 = 224231630;

	t14 = ((x93*x94)<=(x95-x96));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x97 = UINT64_MAX;
	int64_t x98 = INT64_MIN;
	int8_t x99 = -1;
	int32_t t15 = 3281586;

	t15 = ((x97*x98)<=(x99-x100));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x101 = UINT64_MAX;
	int32_t x103 = -1;
	int64_t x104 = INT64_MIN;
	int32_t t16 = -103;

	t16 = ((x101*x102)<=(x103-x104));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x107 = -127;

	t17 = ((x105*x106)<=(x107-x108));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MAX;
	uint16_t x123 = 15U;
	volatile int64_t x124 = 46162LL;

	t18 = ((x121*x122)<=(x123-x124));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x125 = INT8_MIN;
	int64_t x126 = -6LL;
	static int16_t x127 = -4;
	uint64_t x128 = 1LLU;
	volatile int32_t t19 = 39400572;

	t19 = ((x125*x126)<=(x127-x128));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x138 = 17774593U;
	volatile int32_t x139 = -115;
	uint8_t x140 = 21U;

	t20 = ((x137*x138)<=(x139-x140));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x141 = 64U;
	int8_t x142 = INT8_MIN;
	uint64_t x143 = 1810LLU;
	uint16_t x144 = 177U;
	int32_t t21 = -612961001;

	t21 = ((x141*x142)<=(x143-x144));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x145 = -1LL;
	int32_t x146 = -145;
	static int64_t x148 = -22849852192LL;
	volatile int32_t t22 = 497114;

	t22 = ((x145*x146)<=(x147-x148));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x149 = -1;
	uint64_t x151 = UINT64_MAX;
	static volatile int64_t x152 = INT64_MIN;
	volatile int32_t t23 = 32;

	t23 = ((x149*x150)<=(x151-x152));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x153 = 44;
	uint8_t x155 = 1U;
	int8_t x156 = -3;
	static volatile int32_t t24 = 12;

	t24 = ((x153*x154)<=(x155-x156));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x157 = 22U;
	volatile int16_t x158 = INT16_MIN;
	int8_t x160 = -18;
	int32_t t25 = 666813452;

	t25 = ((x157*x158)<=(x159-x160));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x169 = UINT32_MAX;
	uint32_t x170 = 480786913U;
	static volatile uint64_t x171 = 23LLU;

	t26 = ((x169*x170)<=(x171-x172));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x173 = INT16_MIN;
	uint64_t x174 = 17322573LLU;
	int32_t x175 = -1;
	volatile uint16_t x176 = 4U;
	static int32_t t27 = -404;

	t27 = ((x173*x174)<=(x175-x176));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x181 = 33599LLU;
	int32_t x182 = INT32_MIN;
	uint8_t x184 = 3U;

	t28 = ((x181*x182)<=(x183-x184));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x185 = INT8_MIN;
	static uint8_t x187 = 15U;
	uint32_t x188 = 8453762U;
	static int32_t t29 = -982838979;

	t29 = ((x185*x186)<=(x187-x188));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x193 = UINT16_MAX;
	uint16_t x194 = 14U;
	uint32_t x195 = 2518993U;
	volatile int32_t x196 = 6;

	t30 = ((x193*x194)<=(x195-x196));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x197 = UINT8_MAX;
	int16_t x198 = -2;
	volatile int8_t x200 = -1;
	volatile int32_t t31 = 208481;

	t31 = ((x197*x198)<=(x199-x200));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x201 = 26LLU;
	volatile int64_t x202 = INT64_MAX;
	int8_t x203 = -53;
	uint32_t x204 = UINT32_MAX;

	t32 = ((x201*x202)<=(x203-x204));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x205 = INT16_MAX;
	volatile uint8_t x206 = 22U;
	volatile uint32_t x207 = 1U;
	static uint16_t x208 = 22U;
	int32_t t33 = -199700461;

	t33 = ((x205*x206)<=(x207-x208));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x213 = 30680869LL;
	volatile uint32_t x214 = UINT32_MAX;
	int64_t x215 = INT64_MAX;
	int32_t x216 = INT32_MAX;
	volatile int32_t t34 = 119;

	t34 = ((x213*x214)<=(x215-x216));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x217 = UINT8_MAX;
	volatile uint32_t x218 = 162976U;
	uint8_t x219 = 38U;
	static volatile int32_t t35 = -336708648;

	t35 = ((x217*x218)<=(x219-x220));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x221 = UINT8_MAX;
	int16_t x222 = INT16_MAX;
	int32_t x224 = -1768620;

	t36 = ((x221*x222)<=(x223-x224));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x233 = INT16_MAX;
	static uint8_t x234 = 3U;
	volatile int64_t x235 = -1LL;
	uint16_t x236 = 119U;
	volatile int32_t t37 = -1888;

	t37 = ((x233*x234)<=(x235-x236));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	uint64_t x240 = 322114LLU;
	volatile int32_t t38 = 6;

	t38 = ((x237*x238)<=(x239-x240));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x241 = 41695688U;
	static int64_t x242 = 41426950558LL;
	static uint8_t x243 = 11U;
	volatile int8_t x244 = INT8_MAX;
	volatile int32_t t39 = 1487429;

	t39 = ((x241*x242)<=(x243-x244));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x249 = 264;
	volatile int16_t x250 = -127;
	int16_t x252 = -1;
	volatile int32_t t40 = -505379;

	t40 = ((x249*x250)<=(x251-x252));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x258 = 352U;
	int16_t x259 = INT16_MIN;
	int8_t x260 = -56;
	volatile int32_t t41 = -13780;

	t41 = ((x257*x258)<=(x259-x260));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x261 = UINT64_MAX;
	uint8_t x262 = UINT8_MAX;
	uint32_t x264 = 346U;
	volatile int32_t t42 = -10091529;

	t42 = ((x261*x262)<=(x263-x264));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x265 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	int64_t x268 = 133LL;
	static volatile int32_t t43 = 48;

	t43 = ((x265*x266)<=(x267-x268));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x269 = INT8_MIN;
	uint64_t x270 = 333LLU;
	uint16_t x272 = 0U;
	volatile int32_t t44 = 3442;

	t44 = ((x269*x270)<=(x271-x272));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x277 = INT32_MAX;
	int32_t x278 = -1;
	uint32_t x279 = UINT32_MAX;
	static int8_t x280 = -1;
	volatile int32_t t45 = -110;

	t45 = ((x277*x278)<=(x279-x280));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x281 = INT8_MAX;
	int64_t x282 = 23699LL;
	static int64_t x283 = 1156LL;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t46 = -1659;

	t46 = ((x281*x282)<=(x283-x284));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x285 = INT8_MIN;
	volatile int64_t x286 = 1LL;
	int8_t x287 = 5;
	volatile uint8_t x288 = 7U;
	static int32_t t47 = -8643;

	t47 = ((x285*x286)<=(x287-x288));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x293 = -1LL;
	int64_t x294 = -831LL;
	uint16_t x295 = 17675U;
	volatile uint32_t x296 = UINT32_MAX;
	volatile int32_t t48 = -10876339;

	t48 = ((x293*x294)<=(x295-x296));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x302 = INT16_MAX;
	int16_t x303 = 272;
	volatile int8_t x304 = 1;
	static int32_t t49 = -2423133;

	t49 = ((x301*x302)<=(x303-x304));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x305 = 1U;
	int32_t x306 = -1;
	int32_t x307 = INT32_MAX;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t50 = -101617;

	t50 = ((x305*x306)<=(x307-x308));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x309 = 6U;
	int64_t x310 = -30801113346259905LL;
	int32_t t51 = 1030341629;

	t51 = ((x309*x310)<=(x311-x312));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x317 = 27030061LL;
	int8_t x318 = INT8_MIN;
	static volatile uint32_t x320 = 128189U;
	volatile int32_t t52 = -1;

	t52 = ((x317*x318)<=(x319-x320));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x322 = INT8_MIN;
	uint8_t x324 = 120U;
	static int32_t t53 = 0;

	t53 = ((x321*x322)<=(x323-x324));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x329 = 30LLU;
	int16_t x330 = INT16_MIN;
	int32_t x332 = INT32_MIN;

	t54 = ((x329*x330)<=(x331-x332));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int16_t x338 = 1;
	uint16_t x339 = UINT16_MAX;
	uint64_t x340 = UINT64_MAX;

	t55 = ((x337*x338)<=(x339-x340));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x341 = -1;
	static volatile int8_t x342 = 0;
	uint32_t x343 = 119U;
	int32_t x344 = -50085838;

	t56 = ((x341*x342)<=(x343-x344));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x353 = -58140803845776355LL;
	int8_t x354 = -1;
	static uint8_t x355 = 120U;
	int64_t x356 = -1LL;
	volatile int32_t t57 = 829464;

	t57 = ((x353*x354)<=(x355-x356));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x357 = 46U;
	static volatile int32_t x358 = 334994735;
	volatile uint64_t x359 = 7323156254LLU;
	int8_t x360 = -1;
	static volatile int32_t t58 = 1536455;

	t58 = ((x357*x358)<=(x359-x360));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x361 = 0U;
	uint8_t x362 = UINT8_MAX;
	static int8_t x364 = INT8_MIN;
	static volatile int32_t t59 = 5;

	t59 = ((x361*x362)<=(x363-x364));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x365 = 419U;
	volatile int64_t x366 = 180020855945773LL;
	uint16_t x367 = 3U;
	uint16_t x368 = 139U;

	t60 = ((x365*x366)<=(x367-x368));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x373 = 6U;
	int16_t x374 = -1;
	int16_t x376 = -1548;
	int32_t t61 = 50663;

	t61 = ((x373*x374)<=(x375-x376));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x378 = INT64_MIN;
	static int32_t x379 = -145;
	int16_t x380 = -1;
	int32_t t62 = -141;

	t62 = ((x377*x378)<=(x379-x380));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x386 = UINT64_MAX;
	int32_t x387 = INT32_MAX;
	volatile uint32_t x388 = 152U;

	t63 = ((x385*x386)<=(x387-x388));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x401 = INT16_MIN;
	uint32_t x402 = 686530455U;
	int32_t x403 = 26008;
	static int64_t x404 = INT64_MAX;
	int32_t t64 = -2;

	t64 = ((x401*x402)<=(x403-x404));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x405 = INT8_MIN;
	uint64_t x407 = 3340806896LLU;
	int32_t t65 = 48;

	t65 = ((x405*x406)<=(x407-x408));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x409 = -1;
	uint64_t x410 = 861754573042983735LLU;
	volatile uint64_t x411 = 77LLU;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t66 = -112138;

	t66 = ((x409*x410)<=(x411-x412));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x414 = -419157445357LL;
	int32_t x415 = -1;
	static int32_t t67 = 2;

	t67 = ((x413*x414)<=(x415-x416));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x424 = INT16_MIN;
	static volatile int32_t t68 = -19020848;

	t68 = ((x421*x422)<=(x423-x424));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x425 = -1LL;
	int32_t x426 = INT32_MIN;
	volatile int16_t x427 = INT16_MIN;
	int8_t x428 = INT8_MIN;
	int32_t t69 = -1;

	t69 = ((x425*x426)<=(x427-x428));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x433 = 16383U;
	int16_t x434 = INT16_MIN;
	int64_t x435 = -1LL;
	int16_t x436 = -1;
	static int32_t t70 = 1820094;

	t70 = ((x433*x434)<=(x435-x436));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x439 = 64179940LLU;
	volatile int32_t t71 = 3043511;

	t71 = ((x437*x438)<=(x439-x440));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x446 = UINT16_MAX;
	int16_t x447 = -1;
	int16_t x448 = -11812;
	volatile int32_t t72 = -5;

	t72 = ((x445*x446)<=(x447-x448));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x450 = -1LL;
	int8_t x451 = -9;
	volatile int32_t x452 = -1;
	volatile int32_t t73 = -33506425;

	t73 = ((x449*x450)<=(x451-x452));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x453 = INT8_MIN;
	volatile int16_t x454 = INT16_MIN;
	int8_t x456 = -1;
	volatile int32_t t74 = 7741;

	t74 = ((x453*x454)<=(x455-x456));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x457 = -12;
	int8_t x458 = -1;

	t75 = ((x457*x458)<=(x459-x460));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x461 = UINT64_MAX;
	static uint64_t x463 = 59061560678LLU;
	volatile uint32_t x464 = UINT32_MAX;

	t76 = ((x461*x462)<=(x463-x464));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x465 = UINT8_MAX;
	uint16_t x466 = UINT16_MAX;
	volatile uint32_t x467 = 192384U;
	static int32_t x468 = -1;
	int32_t t77 = 3884;

	t77 = ((x465*x466)<=(x467-x468));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x470 = -23;
	int32_t t78 = -186450268;

	t78 = ((x469*x470)<=(x471-x472));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x481 = -4891847616LL;
	int16_t x482 = INT16_MIN;
	static int8_t x484 = 2;
	static int32_t t79 = 3401;

	t79 = ((x481*x482)<=(x483-x484));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x489 = UINT16_MAX;
	int32_t x490 = -1;
	static uint64_t x491 = UINT64_MAX;
	static volatile int32_t x492 = INT32_MIN;
	int32_t t80 = -658;

	t80 = ((x489*x490)<=(x491-x492));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x497 = UINT16_MAX;
	volatile uint8_t x498 = 1U;
	int32_t x499 = INT32_MIN;
	volatile int64_t x500 = -36716825896LL;
	volatile int32_t t81 = 13522;

	t81 = ((x497*x498)<=(x499-x500));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x501 = -5;
	static volatile uint16_t x502 = UINT16_MAX;
	static int8_t x503 = INT8_MIN;
	volatile int32_t x504 = -104974325;
	static int32_t t82 = -103342657;

	t82 = ((x501*x502)<=(x503-x504));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x505 = INT16_MIN;
	int32_t x506 = 1;
	int16_t x507 = 410;
	uint16_t x508 = UINT16_MAX;

	t83 = ((x505*x506)<=(x507-x508));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x509 = INT8_MIN;
	int64_t x511 = INT64_MIN;
	uint64_t x512 = UINT64_MAX;
	volatile int32_t t84 = -75;

	t84 = ((x509*x510)<=(x511-x512));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x513 = -1;
	volatile int32_t x514 = -1;
	volatile int32_t x515 = -1;
	int32_t x516 = INT32_MIN;

	t85 = ((x513*x514)<=(x515-x516));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x521 = 6701U;
	static int16_t x522 = -3;
	uint32_t x523 = UINT32_MAX;
	int8_t x524 = -1;
	volatile int32_t t86 = 20;

	t86 = ((x521*x522)<=(x523-x524));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x537 = 1U;
	uint8_t x538 = 2U;
	int32_t t87 = -1;

	t87 = ((x537*x538)<=(x539-x540));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x541 = 207578U;
	volatile int32_t x542 = INT32_MIN;
	uint8_t x544 = 13U;
	volatile int32_t t88 = -13;

	t88 = ((x541*x542)<=(x543-x544));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x545 = 18;
	static uint64_t x547 = 1556797994LLU;
	int16_t x548 = INT16_MAX;

	t89 = ((x545*x546)<=(x547-x548));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x550 = INT8_MAX;
	static uint64_t x552 = 27016640996LLU;
	volatile int32_t t90 = -413;

	t90 = ((x549*x550)<=(x551-x552));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x557 = INT32_MAX;
	static volatile int32_t t91 = 294788927;

	t91 = ((x557*x558)<=(x559-x560));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x565 = -1;
	int16_t x566 = INT16_MIN;
	int32_t x567 = -1;
	static int32_t x568 = INT32_MIN;
	int32_t t92 = 686;

	t92 = ((x565*x566)<=(x567-x568));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x569 = 529146468U;
	volatile int32_t x570 = INT32_MIN;
	int64_t x572 = INT64_MIN;
	static int32_t t93 = 26324;

	t93 = ((x569*x570)<=(x571-x572));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x574 = -1;
	uint64_t x576 = UINT64_MAX;

	t94 = ((x573*x574)<=(x575-x576));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x585 = INT32_MAX;
	uint64_t x586 = 59029133207922876LLU;
	uint32_t x588 = 4U;
	volatile int32_t t95 = 29231858;

	t95 = ((x585*x586)<=(x587-x588));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x590 = 0U;
	volatile uint16_t x591 = 1U;
	static int32_t t96 = -491665;

	t96 = ((x589*x590)<=(x591-x592));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x593 = INT16_MIN;
	int16_t x594 = -1;
	int16_t x595 = -31;
	int32_t x596 = INT32_MIN;
	int32_t t97 = -7;

	t97 = ((x593*x594)<=(x595-x596));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x601 = INT16_MAX;
	int8_t x604 = -2;

	t98 = ((x601*x602)<=(x603-x604));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x605 = -132225490909390205LL;
	uint16_t x606 = 5U;
	int64_t x607 = INT64_MIN;
	int8_t x608 = INT8_MIN;
	static volatile int32_t t99 = 2;

	t99 = ((x605*x606)<=(x607-x608));

	if (t99 != 0) { NG(); } else { ; }
	
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

