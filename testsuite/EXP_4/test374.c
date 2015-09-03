#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MAX;
int32_t x9 = -7426030;
uint16_t x10 = UINT16_MAX;
volatile uint32_t x11 = 16431107U;
int16_t x13 = -1;
uint8_t x27 = UINT8_MAX;
int32_t t5 = 683;
volatile int16_t x31 = -15930;
uint32_t x32 = UINT32_MAX;
uint32_t x36 = 1908U;
static volatile int16_t x43 = 85;
static volatile uint8_t x46 = 63U;
volatile int32_t t10 = 333340;
int32_t x53 = INT32_MAX;
int64_t x55 = INT64_MAX;
int16_t x70 = INT16_MAX;
int32_t x72 = 0;
volatile int8_t x75 = INT8_MIN;
int8_t x91 = INT8_MAX;
int32_t t17 = -349;
int32_t t18 = 17397307;
int64_t x102 = -76865003LL;
volatile int32_t x109 = INT32_MIN;
uint64_t x126 = 27741LLU;
uint32_t x132 = 220U;
uint8_t x141 = 10U;
uint16_t x143 = UINT16_MAX;
int64_t x158 = 15LL;
int16_t x159 = INT16_MAX;
int32_t t29 = -3716;
int8_t x175 = -1;
uint16_t x183 = 807U;
uint32_t x189 = 11448U;
static volatile int8_t x192 = -1;
int32_t t33 = 67182;
volatile uint64_t x195 = UINT64_MAX;
static uint16_t x196 = 15166U;
static uint16_t x207 = 412U;
uint16_t x217 = 359U;
uint16_t x232 = 18U;
volatile int16_t x233 = 3134;
volatile int32_t t40 = -20723622;
volatile int8_t x249 = INT8_MIN;
volatile int32_t t41 = 100;
static volatile int32_t t42 = -5492;
static volatile int16_t x266 = INT16_MAX;
uint64_t x272 = 975LLU;
int32_t t44 = -29520;
uint8_t x274 = UINT8_MAX;
int16_t x283 = -1;
volatile int64_t x285 = -49360903092952591LL;
int64_t x288 = -1LL;
int8_t x289 = INT8_MAX;
int32_t x292 = INT32_MIN;
int8_t x306 = -1;
static volatile int8_t x308 = -16;
uint8_t x332 = 0U;
volatile int32_t t51 = -372613;
int32_t x338 = -7932870;
uint8_t x342 = 7U;
int16_t x344 = INT16_MAX;
uint16_t x345 = 676U;
static int32_t t56 = 20308;
int64_t x384 = -1LL;
int64_t x390 = -1LL;
uint16_t x391 = 12432U;
int8_t x393 = -1;
int8_t x395 = INT8_MIN;
int8_t x403 = -40;
uint32_t x419 = 876327063U;
static uint8_t x420 = 4U;
uint16_t x435 = UINT16_MAX;
volatile uint8_t x441 = 1U;
int8_t x447 = INT8_MAX;
static volatile int32_t t66 = 323380;
uint32_t x461 = UINT32_MAX;
uint8_t x467 = 0U;
int64_t x473 = -1LL;
uint8_t x481 = 1U;
uint8_t x485 = 2U;
volatile int32_t t74 = 2;
int64_t x489 = INT64_MIN;
uint32_t x492 = 21355U;
static int32_t t75 = -3667630;
uint32_t x496 = UINT32_MAX;
int16_t x497 = -4;
int8_t x499 = INT8_MIN;
int8_t x504 = -1;
volatile int32_t t78 = 13;
int32_t x524 = -1;
volatile int32_t t83 = 347;
int32_t x539 = INT32_MAX;
volatile int32_t t84 = 79;
uint64_t x549 = 3994629LLU;
uint64_t x551 = 39963580LLU;
int32_t t86 = 7;
static int16_t x566 = -570;
volatile int32_t t87 = 1721856;
int16_t x580 = -1;
static volatile int32_t t88 = -256892;
static uint8_t x582 = 2U;
volatile int32_t x597 = -1;
volatile int32_t t92 = 375;
uint64_t x609 = 1268862991LLU;
uint32_t x650 = UINT32_MAX;
int8_t x652 = 6;
static uint16_t x654 = 34U;
int8_t x658 = INT8_MIN;


void f0(void) {
	int8_t x1 = -1;
	volatile int64_t x2 = INT64_MIN;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = -93843307;

	t0 = (x1<=(x2*(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint64_t x6 = 3LLU;
	int8_t x7 = -1;
	static int16_t x8 = 5;
	int32_t t1 = -788505;

	t1 = (x5<=(x6*(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x12 = INT16_MIN;
	int32_t t2 = -5132;

	t2 = (x9<=(x10*(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	uint8_t x16 = UINT8_MAX;
	static volatile int32_t t3 = -115;

	t3 = (x13<=(x14*(x15*x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static int8_t x18 = INT8_MIN;
	uint8_t x19 = 31U;
	static volatile int64_t x20 = -1LL;
	int32_t t4 = 926949;

	t4 = (x17<=(x18*(x19*x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = -1;
	int64_t x26 = 425176674LL;
	int16_t x28 = INT16_MIN;

	t5 = (x25<=(x26*(x27*x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	uint64_t x30 = UINT64_MAX;
	static int32_t t6 = 55;

	t6 = (x29<=(x30*(x31*x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 12U;
	int32_t x34 = INT32_MIN;
	static uint32_t x35 = UINT32_MAX;
	static int32_t t7 = -67;

	t7 = (x33<=(x34*(x35*x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	int8_t x42 = 1;
	volatile uint16_t x44 = 12U;
	int32_t t8 = -444154006;

	t8 = (x41<=(x42*(x43*x44)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x47 = 1137U;
	volatile int8_t x48 = -51;
	volatile int32_t t9 = -433205914;

	t9 = (x45<=(x46*(x47*x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = 11U;
	static int32_t x51 = INT32_MIN;
	uint32_t x52 = UINT32_MAX;

	t10 = (x49<=(x50*(x51*x52)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x54 = 0U;
	int8_t x56 = 1;
	int32_t t11 = 8330;

	t11 = (x53<=(x54*(x55*x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x57 = UINT8_MAX;
	uint8_t x58 = UINT8_MAX;
	int8_t x59 = -39;
	int64_t x60 = -290075463LL;
	volatile int32_t t12 = 3856849;

	t12 = (x57<=(x58*(x59*x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x62 = 2118001136U;
	uint64_t x63 = 309256014318LLU;
	volatile int8_t x64 = -1;
	int32_t t13 = 32422444;

	t13 = (x61<=(x62*(x63*x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = -4;
	int32_t x66 = INT32_MIN;
	uint64_t x67 = 3096657LLU;
	volatile uint64_t x68 = 10077491432LLU;
	static volatile int32_t t14 = -58637656;

	t14 = (x65<=(x66*(x67*x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x69 = 91U;
	uint32_t x71 = 4U;
	volatile int32_t t15 = -118;

	t15 = (x69<=(x70*(x71*x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	static int16_t x74 = INT16_MIN;
	volatile int8_t x76 = INT8_MAX;
	volatile int32_t t16 = -12;

	t16 = (x73<=(x74*(x75*x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x89 = INT32_MIN;
	uint32_t x90 = UINT32_MAX;
	int16_t x92 = 151;

	t17 = (x89<=(x90*(x91*x92)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = 0;
	static int16_t x94 = -1;
	int64_t x95 = -1LL;
	uint8_t x96 = 10U;

	t18 = (x93<=(x94*(x95*x96)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x97 = 75832780LLU;
	uint32_t x98 = UINT32_MAX;
	volatile uint32_t x99 = 1U;
	static uint16_t x100 = 2018U;
	int32_t t19 = -3189;

	t19 = (x97<=(x98*(x99*x100)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	int32_t x103 = INT32_MAX;
	int64_t x104 = -1LL;
	static volatile int32_t t20 = 14413;

	t20 = (x101<=(x102*(x103*x104)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x110 = INT16_MIN;
	volatile int32_t x111 = -1;
	int8_t x112 = INT8_MIN;
	int32_t t21 = 968230361;

	t21 = (x109<=(x110*(x111*x112)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x113 = 2U;
	static uint64_t x114 = 5736LLU;
	uint16_t x115 = UINT16_MAX;
	volatile int32_t x116 = -1;
	volatile int32_t t22 = 7;

	t22 = (x113<=(x114*(x115*x116)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x125 = -1;
	uint32_t x127 = 2533U;
	int16_t x128 = INT16_MIN;
	static volatile int32_t t23 = -2023;

	t23 = (x125<=(x126*(x127*x128)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x129 = 13;
	uint32_t x130 = 19887146U;
	volatile int8_t x131 = -1;
	volatile int32_t t24 = -1;

	t24 = (x129<=(x130*(x131*x132)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x137 = INT32_MIN;
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = 13;
	int16_t x140 = INT16_MAX;
	int32_t t25 = -768754735;

	t25 = (x137<=(x138*(x139*x140)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x142 = INT16_MIN;
	static int32_t x144 = -1;
	static volatile int32_t t26 = 1;

	t26 = (x141<=(x142*(x143*x144)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x145 = 124192335458967LLU;
	uint16_t x146 = 718U;
	uint64_t x147 = 39549LLU;
	uint16_t x148 = 10U;
	volatile int32_t t27 = -994389;

	t27 = (x145<=(x146*(x147*x148)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = -4899188;
	uint64_t x154 = 27LLU;
	int16_t x155 = INT16_MIN;
	uint8_t x156 = 103U;
	static int32_t t28 = 34645849;

	t28 = (x153<=(x154*(x155*x156)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x157 = 10U;
	int8_t x160 = 0;

	t29 = (x157<=(x158*(x159*x160)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x173 = INT32_MIN;
	volatile uint32_t x174 = 7581U;
	static int8_t x176 = 2;
	int32_t t30 = -83;

	t30 = (x173<=(x174*(x175*x176)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x181 = 2U;
	int8_t x182 = INT8_MIN;
	uint16_t x184 = 2980U;
	volatile int32_t t31 = -22504;

	t31 = (x181<=(x182*(x183*x184)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MIN;
	uint64_t x187 = 5691LLU;
	static volatile int16_t x188 = INT16_MAX;
	volatile int32_t t32 = -6013;

	t32 = (x185<=(x186*(x187*x188)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x190 = 17694U;
	static uint8_t x191 = 27U;

	t33 = (x189<=(x190*(x191*x192)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x193 = 8559246550LLU;
	static uint64_t x194 = 34859190LLU;
	volatile int32_t t34 = -457733;

	t34 = (x193<=(x194*(x195*x196)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x205 = -1LL;
	int64_t x206 = 6LL;
	static uint8_t x208 = 2U;
	int32_t t35 = 1698;

	t35 = (x205<=(x206*(x207*x208)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x218 = INT32_MAX;
	uint64_t x219 = 50505LLU;
	int64_t x220 = -956067730LL;
	volatile int32_t t36 = 383453806;

	t36 = (x217<=(x218*(x219*x220)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x221 = 169LLU;
	static int8_t x222 = INT8_MIN;
	volatile int8_t x223 = -34;
	uint64_t x224 = UINT64_MAX;
	static volatile int32_t t37 = 516565;

	t37 = (x221<=(x222*(x223*x224)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x229 = INT16_MIN;
	volatile int64_t x230 = 53LL;
	int8_t x231 = 23;
	volatile int32_t t38 = -201;

	t38 = (x229<=(x230*(x231*x232)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x234 = 3U;
	uint8_t x235 = 0U;
	static int32_t x236 = 74049314;
	volatile int32_t t39 = -25;

	t39 = (x233<=(x234*(x235*x236)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x237 = UINT64_MAX;
	volatile int8_t x238 = -2;
	uint16_t x239 = 3107U;
	int16_t x240 = -15833;

	t40 = (x237<=(x238*(x239*x240)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x250 = INT8_MIN;
	uint32_t x251 = 0U;
	static int64_t x252 = 59795603947116293LL;

	t41 = (x249<=(x250*(x251*x252)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x257 = 7U;
	int64_t x258 = -6242811977680LL;
	static int8_t x259 = -1;
	int16_t x260 = INT16_MIN;

	t42 = (x257<=(x258*(x259*x260)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x265 = -97217949;
	uint32_t x267 = UINT32_MAX;
	static uint32_t x268 = 144679U;
	volatile int32_t t43 = 3;

	t43 = (x265<=(x266*(x267*x268)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x269 = 186;
	int16_t x270 = 0;
	int8_t x271 = 0;

	t44 = (x269<=(x270*(x271*x272)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x273 = UINT16_MAX;
	volatile uint32_t x275 = 5019U;
	int8_t x276 = INT8_MIN;
	int32_t t45 = 78142750;

	t45 = (x273<=(x274*(x275*x276)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x281 = INT32_MIN;
	volatile uint16_t x282 = 1U;
	int8_t x284 = -41;
	int32_t t46 = 123640283;

	t46 = (x281<=(x282*(x283*x284)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x286 = -335;
	uint64_t x287 = 0LLU;
	volatile int32_t t47 = 0;

	t47 = (x285<=(x286*(x287*x288)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x290 = 1U;
	uint64_t x291 = 113873LLU;
	volatile int32_t t48 = 1477;

	t48 = (x289<=(x290*(x291*x292)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x305 = UINT64_MAX;
	uint16_t x307 = UINT16_MAX;
	int32_t t49 = 15541;

	t49 = (x305<=(x306*(x307*x308)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MAX;
	volatile uint64_t x319 = UINT64_MAX;
	int16_t x320 = INT16_MAX;
	int32_t t50 = 38;

	t50 = (x317<=(x318*(x319*x320)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x329 = -29145;
	static int16_t x330 = -17;
	volatile int64_t x331 = INT64_MIN;

	t51 = (x329<=(x330*(x331*x332)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x337 = INT32_MIN;
	volatile uint8_t x339 = UINT8_MAX;
	volatile int32_t x340 = -1;
	int32_t t52 = 105;

	t52 = (x337<=(x338*(x339*x340)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x341 = UINT16_MAX;
	uint64_t x343 = 628781701LLU;
	volatile int32_t t53 = 1;

	t53 = (x341<=(x342*(x343*x344)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x346 = 2425;
	uint32_t x347 = UINT32_MAX;
	static int8_t x348 = 9;
	volatile int32_t t54 = -1551681;

	t54 = (x345<=(x346*(x347*x348)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = -3418;
	uint64_t x351 = 164391109LLU;
	volatile int8_t x352 = INT8_MAX;
	int32_t t55 = -234;

	t55 = (x349<=(x350*(x351*x352)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x353 = INT16_MAX;
	uint64_t x354 = 1827LLU;
	uint8_t x355 = 2U;
	int64_t x356 = -16059807771714789LL;

	t56 = (x353<=(x354*(x355*x356)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x365 = INT8_MIN;
	static uint16_t x366 = UINT16_MAX;
	int32_t x367 = INT32_MIN;
	uint32_t x368 = UINT32_MAX;
	static volatile int32_t t57 = -1410;

	t57 = (x365<=(x366*(x367*x368)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x381 = 8639;
	int8_t x382 = 5;
	volatile int32_t x383 = INT32_MAX;
	volatile int32_t t58 = 807;

	t58 = (x381<=(x382*(x383*x384)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x389 = 5461369778LLU;
	static int8_t x392 = 27;
	volatile int32_t t59 = -3613082;

	t59 = (x389<=(x390*(x391*x392)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x394 = 595U;
	int16_t x396 = -1;
	volatile int32_t t60 = 10668;

	t60 = (x393<=(x394*(x395*x396)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x397 = INT8_MIN;
	uint16_t x398 = 36U;
	int32_t x399 = -15;
	uint16_t x400 = 375U;
	volatile int32_t t61 = -28;

	t61 = (x397<=(x398*(x399*x400)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x401 = 683951424719LLU;
	uint16_t x402 = 0U;
	int8_t x404 = INT8_MAX;
	int32_t t62 = -27734;

	t62 = (x401<=(x402*(x403*x404)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x417 = INT16_MIN;
	volatile int64_t x418 = -1LL;
	volatile int32_t t63 = -19308272;

	t63 = (x417<=(x418*(x419*x420)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x433 = 7528624548LL;
	int8_t x434 = 0;
	uint64_t x436 = 11740967078LLU;
	int32_t t64 = -7838;

	t64 = (x433<=(x434*(x435*x436)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x442 = 13;
	int8_t x443 = INT8_MIN;
	uint64_t x444 = 13606LLU;
	int32_t t65 = -66142304;

	t65 = (x441<=(x442*(x443*x444)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x445 = INT32_MIN;
	int8_t x446 = -3;
	static uint64_t x448 = 3LLU;

	t66 = (x445<=(x446*(x447*x448)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x453 = INT64_MIN;
	uint64_t x454 = 48702384989757531LLU;
	uint32_t x455 = UINT32_MAX;
	uint8_t x456 = 12U;
	volatile int32_t t67 = -118467005;

	t67 = (x453<=(x454*(x455*x456)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x457 = -1;
	uint64_t x458 = 2447377726416278LLU;
	int16_t x459 = -4008;
	uint16_t x460 = UINT16_MAX;
	int32_t t68 = 213580116;

	t68 = (x457<=(x458*(x459*x460)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x462 = -1;
	uint64_t x463 = UINT64_MAX;
	int64_t x464 = 1343860LL;
	static int32_t t69 = -159058;

	t69 = (x461<=(x462*(x463*x464)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x465 = 1;
	int16_t x466 = -29;
	uint16_t x468 = 32435U;
	static volatile int32_t t70 = 1;

	t70 = (x465<=(x466*(x467*x468)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x469 = 3674382851543094LL;
	uint16_t x470 = UINT16_MAX;
	uint64_t x471 = UINT64_MAX;
	int16_t x472 = 12290;
	int32_t t71 = 92275;

	t71 = (x469<=(x470*(x471*x472)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x474 = -19;
	int64_t x475 = INT64_MAX;
	uint64_t x476 = UINT64_MAX;
	volatile int32_t t72 = -1;

	t72 = (x473<=(x474*(x475*x476)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x482 = INT16_MIN;
	int8_t x483 = 48;
	static uint64_t x484 = UINT64_MAX;
	static int32_t t73 = -206937;

	t73 = (x481<=(x482*(x483*x484)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x486 = -425279307LL;
	uint32_t x487 = 15328307U;
	uint16_t x488 = 478U;

	t74 = (x485<=(x486*(x487*x488)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x490 = INT8_MIN;
	volatile int16_t x491 = -1;

	t75 = (x489<=(x490*(x491*x492)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x493 = INT64_MIN;
	volatile int16_t x494 = 304;
	static uint8_t x495 = UINT8_MAX;
	volatile int32_t t76 = -2;

	t76 = (x493<=(x494*(x495*x496)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x498 = 0U;
	int8_t x500 = -17;
	int32_t t77 = 26289;

	t77 = (x497<=(x498*(x499*x500)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x501 = INT64_MAX;
	volatile int64_t x502 = -18274140703LL;
	static int16_t x503 = INT16_MIN;

	t78 = (x501<=(x502*(x503*x504)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x509 = 241U;
	int16_t x510 = INT16_MIN;
	static uint8_t x511 = UINT8_MAX;
	int8_t x512 = -9;
	volatile int32_t t79 = -24465;

	t79 = (x509<=(x510*(x511*x512)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x517 = 2793007LLU;
	volatile int8_t x518 = INT8_MAX;
	uint8_t x519 = UINT8_MAX;
	int16_t x520 = 84;
	int32_t t80 = 182;

	t80 = (x517<=(x518*(x519*x520)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x521 = -1;
	uint8_t x522 = UINT8_MAX;
	int8_t x523 = INT8_MIN;
	static int32_t t81 = -36;

	t81 = (x521<=(x522*(x523*x524)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x529 = 21U;
	uint32_t x530 = UINT32_MAX;
	int16_t x531 = -1154;
	volatile int8_t x532 = 22;
	int32_t t82 = -3143648;

	t82 = (x529<=(x530*(x531*x532)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x533 = INT64_MIN;
	int8_t x534 = INT8_MAX;
	int8_t x535 = 0;
	static int16_t x536 = INT16_MAX;

	t83 = (x533<=(x534*(x535*x536)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x537 = 4U;
	static int8_t x538 = INT8_MAX;
	int64_t x540 = -1LL;

	t84 = (x537<=(x538*(x539*x540)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x550 = INT16_MAX;
	int64_t x552 = -1LL;
	static volatile int32_t t85 = -82;

	t85 = (x549<=(x550*(x551*x552)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x561 = 9U;
	int8_t x562 = INT8_MIN;
	volatile int32_t x563 = -1;
	static int8_t x564 = 1;

	t86 = (x561<=(x562*(x563*x564)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x565 = INT8_MIN;
	volatile int64_t x567 = INT64_MAX;
	uint64_t x568 = 13394656554049LLU;

	t87 = (x565<=(x566*(x567*x568)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x577 = 3855099LLU;
	int8_t x578 = INT8_MIN;
	static volatile uint64_t x579 = 624214157361787LLU;

	t88 = (x577<=(x578*(x579*x580)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x581 = INT8_MIN;
	static int8_t x583 = -7;
	int32_t x584 = -7070934;
	static int32_t t89 = -5172238;

	t89 = (x581<=(x582*(x583*x584)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x589 = INT8_MIN;
	static volatile int64_t x590 = INT64_MIN;
	uint8_t x591 = 0U;
	static int32_t x592 = INT32_MIN;
	static int32_t t90 = 3006;

	t90 = (x589<=(x590*(x591*x592)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x598 = INT8_MIN;
	uint64_t x599 = 497734834405LLU;
	int16_t x600 = INT16_MIN;
	volatile int32_t t91 = -193780;

	t91 = (x597<=(x598*(x599*x600)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x601 = INT64_MIN;
	volatile int32_t x602 = 48142;
	uint32_t x603 = 7373U;
	static uint32_t x604 = 452929U;

	t92 = (x601<=(x602*(x603*x604)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x610 = 41397185LLU;
	uint64_t x611 = UINT64_MAX;
	volatile int8_t x612 = INT8_MIN;
	volatile int32_t t93 = -1049234364;

	t93 = (x609<=(x610*(x611*x612)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x633 = UINT8_MAX;
	int8_t x634 = -1;
	int16_t x635 = INT16_MIN;
	int16_t x636 = -6;
	volatile int32_t t94 = 187015810;

	t94 = (x633<=(x634*(x635*x636)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x641 = 27246068604062LLU;
	uint64_t x642 = UINT64_MAX;
	int8_t x643 = INT8_MIN;
	int32_t x644 = -1;
	static int32_t t95 = -18;

	t95 = (x641<=(x642*(x643*x644)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x645 = INT32_MIN;
	int32_t x646 = 32388;
	uint16_t x647 = 41U;
	volatile uint64_t x648 = 202004930LLU;
	volatile int32_t t96 = -182014451;

	t96 = (x645<=(x646*(x647*x648)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x649 = -1;
	int16_t x651 = -1;
	int32_t t97 = 240855;

	t97 = (x649<=(x650*(x651*x652)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x653 = UINT32_MAX;
	int32_t x655 = -1;
	int64_t x656 = 356994LL;
	volatile int32_t t98 = 20339;

	t98 = (x653<=(x654*(x655*x656)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x657 = -1;
	int64_t x659 = -1LL;
	uint64_t x660 = 18281493864843LLU;
	volatile int32_t t99 = 48106;

	t99 = (x657<=(x658*(x659*x660)));

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

