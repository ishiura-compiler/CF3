#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x18 = -1;
int32_t t0 = -5652;
int32_t t1 = -864;
static volatile uint16_t x40 = UINT16_MAX;
static int64_t x51 = INT64_MAX;
int32_t x53 = INT32_MIN;
uint64_t x56 = 469957613775162LLU;
int32_t t6 = 199757769;
static int16_t x124 = -1;
uint8_t x127 = 5U;
int64_t x128 = -3630782979LL;
volatile int32_t x131 = INT32_MAX;
uint32_t x132 = 507U;
int8_t x145 = -1;
uint64_t x148 = 1494LLU;
static int32_t t14 = -6543687;
uint16_t x151 = 13U;
int8_t x179 = INT8_MIN;
static int32_t x181 = INT32_MIN;
static int32_t t18 = 143270;
static volatile int64_t x221 = -1LL;
uint32_t x222 = 101U;
int16_t x229 = -1;
uint64_t x235 = 77755816304359812LLU;
volatile int16_t x245 = INT16_MIN;
uint8_t x266 = 1U;
int32_t x275 = INT32_MIN;
uint64_t x276 = 181905282829150114LLU;
static volatile int32_t t29 = -820253;
int16_t x297 = -1;
static volatile int64_t x330 = -63835765110059519LL;
int32_t x341 = -16466918;
int8_t x347 = -26;
int32_t t39 = 100220065;
int16_t x369 = -1;
int16_t x371 = INT16_MIN;
int16_t x373 = -49;
volatile int32_t t44 = -11794982;
uint8_t x385 = UINT8_MAX;
int8_t x388 = INT8_MIN;
int8_t x393 = INT8_MAX;
volatile int32_t t48 = -7387488;
static int32_t x417 = -1;
uint64_t x420 = 12590239260679180LLU;
volatile int32_t t52 = -2163264;
int8_t x460 = INT8_MIN;
uint16_t x464 = 853U;
volatile int32_t t57 = -961;
volatile int32_t t59 = -296613634;
static volatile uint64_t x485 = UINT64_MAX;
volatile int8_t x487 = 2;
uint32_t x495 = 133809U;
int16_t x498 = -15;
int8_t x500 = INT8_MIN;
int8_t x508 = 8;
int32_t t63 = -8437724;
volatile int64_t x511 = INT64_MAX;
uint64_t x517 = 2LLU;
volatile int32_t x518 = 2591;
int32_t t65 = 1896895;
int32_t x525 = -36856755;
volatile int8_t x527 = INT8_MAX;
int32_t t69 = 1;
volatile int32_t t70 = -8087;
int16_t x545 = INT16_MIN;
volatile int16_t x547 = INT16_MIN;
int32_t t71 = -7;
int16_t x563 = INT16_MAX;
int32_t t74 = 43789966;
int32_t x584 = -1;
int32_t t75 = 27;
int16_t x619 = -1;
uint32_t x666 = UINT32_MAX;
int32_t t81 = 1;
static volatile uint32_t x671 = 226U;
uint8_t x672 = UINT8_MAX;
int8_t x681 = INT8_MIN;
int32_t x694 = INT32_MIN;
volatile uint64_t x715 = 7520413939353LLU;
static volatile int32_t t87 = -1;
int8_t x718 = -41;
int8_t x720 = 1;
volatile int32_t t88 = -1;
int16_t x722 = INT16_MIN;
int32_t x727 = -95;
volatile int32_t t90 = -58642;
int64_t x763 = -1LL;
volatile int16_t x782 = INT16_MAX;
int64_t x797 = -1LL;
static int16_t x799 = INT16_MAX;
volatile int32_t t98 = 28008528;
volatile int32_t t99 = 1949766;


void f0(void) {
	static int8_t x17 = -2;
	uint8_t x19 = 5U;
	uint8_t x20 = UINT8_MAX;

	t0 = ((x17*x18)==(x19*x20));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x21 = 7U;
	uint64_t x22 = UINT64_MAX;
	volatile int32_t x23 = INT32_MIN;
	uint64_t x24 = UINT64_MAX;

	t1 = ((x21*x22)==(x23*x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x33 = 29U;
	uint32_t x34 = 357U;
	uint64_t x35 = UINT64_MAX;
	static uint8_t x36 = UINT8_MAX;
	int32_t t2 = 65216;

	t2 = ((x33*x34)==(x35*x36));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x37 = -1LL;
	uint32_t x38 = UINT32_MAX;
	static int32_t x39 = -1;
	int32_t t3 = 1;

	t3 = ((x37*x38)==(x39*x40));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x45 = 180;
	int16_t x46 = -231;
	int32_t x47 = -1;
	static int8_t x48 = -1;
	volatile int32_t t4 = 1707957;

	t4 = ((x45*x46)==(x47*x48));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int64_t x50 = -556339546533390LL;
	static volatile int64_t x52 = -1LL;
	static volatile int32_t t5 = -8356898;

	t5 = ((x49*x50)==(x51*x52));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x54 = 364546U;
	int8_t x55 = 0;

	t6 = ((x53*x54)==(x55*x56));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x69 = UINT8_MAX;
	static volatile int32_t x70 = -15;
	static int8_t x71 = -3;
	uint16_t x72 = 1U;
	static int32_t t7 = 537929;

	t7 = ((x69*x70)==(x71*x72));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x81 = -1;
	uint16_t x82 = UINT16_MAX;
	uint64_t x83 = 250311753464852234LLU;
	static int8_t x84 = -1;
	int32_t t8 = 212;

	t8 = ((x81*x82)==(x83*x84));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x89 = 17;
	uint64_t x90 = 874870565LLU;
	uint64_t x91 = 33LLU;
	static int8_t x92 = 1;
	volatile int32_t t9 = -1;

	t9 = ((x89*x90)==(x91*x92));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x113 = -1;
	uint32_t x114 = 2U;
	int16_t x115 = INT16_MAX;
	static uint16_t x116 = 34U;
	volatile int32_t t10 = -1006573395;

	t10 = ((x113*x114)==(x115*x116));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x121 = -1LL;
	int16_t x122 = INT16_MIN;
	static int8_t x123 = 4;
	static volatile int32_t t11 = 252450;

	t11 = ((x121*x122)==(x123*x124));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x125 = 1U;
	volatile int64_t x126 = 16726329543609LL;
	static volatile int32_t t12 = -16114;

	t12 = ((x125*x126)==(x127*x128));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x129 = -1;
	static uint64_t x130 = UINT64_MAX;
	volatile int32_t t13 = 7;

	t13 = ((x129*x130)==(x131*x132));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x146 = 25;
	static int64_t x147 = INT64_MIN;

	t14 = ((x145*x146)==(x147*x148));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x149 = -1;
	volatile uint16_t x150 = 2U;
	int16_t x152 = -1;
	volatile int32_t t15 = 61;

	t15 = ((x149*x150)==(x151*x152));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = -8;
	uint64_t x163 = 44242514LLU;
	int32_t x164 = -1;
	int32_t t16 = 52608;

	t16 = ((x161*x162)==(x163*x164));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x177 = -5;
	static uint64_t x178 = 5LLU;
	volatile uint8_t x180 = 83U;
	int32_t t17 = 491314;

	t17 = ((x177*x178)==(x179*x180));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x182 = 47017038U;
	volatile int32_t x183 = 33;
	static int8_t x184 = INT8_MIN;

	t18 = ((x181*x182)==(x183*x184));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x201 = -1LL;
	int32_t x202 = INT32_MAX;
	volatile uint8_t x203 = UINT8_MAX;
	static int16_t x204 = -1;
	static volatile int32_t t19 = 33336443;

	t19 = ((x201*x202)==(x203*x204));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x209 = -1;
	uint16_t x210 = UINT16_MAX;
	uint32_t x211 = 96016618U;
	static int16_t x212 = -1;
	int32_t t20 = 51608163;

	t20 = ((x209*x210)==(x211*x212));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x223 = -1;
	int32_t x224 = 51;
	volatile int32_t t21 = -6687;

	t21 = ((x221*x222)==(x223*x224));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x225 = INT32_MAX;
	volatile uint32_t x226 = 7429U;
	volatile uint64_t x227 = 446859840355589LLU;
	int64_t x228 = INT64_MAX;
	volatile int32_t t22 = 9058;

	t22 = ((x225*x226)==(x227*x228));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x230 = INT16_MIN;
	volatile uint64_t x231 = 478879727LLU;
	int16_t x232 = 130;
	int32_t t23 = 229593;

	t23 = ((x229*x230)==(x231*x232));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x233 = 1495284LLU;
	static int16_t x234 = -72;
	volatile uint32_t x236 = UINT32_MAX;
	int32_t t24 = -486284982;

	t24 = ((x233*x234)==(x235*x236));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x246 = 134398U;
	int32_t x247 = INT32_MAX;
	volatile uint16_t x248 = 1U;
	int32_t t25 = 1;

	t25 = ((x245*x246)==(x247*x248));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x249 = 131146LLU;
	static int16_t x250 = -1;
	int8_t x251 = -1;
	int32_t x252 = 49;
	int32_t t26 = 1488;

	t26 = ((x249*x250)==(x251*x252));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x257 = UINT32_MAX;
	uint16_t x258 = 18726U;
	int16_t x259 = INT16_MAX;
	uint16_t x260 = UINT16_MAX;
	int32_t t27 = -18691424;

	t27 = ((x257*x258)==(x259*x260));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x265 = INT16_MIN;
	uint16_t x267 = UINT16_MAX;
	static volatile uint8_t x268 = UINT8_MAX;
	int32_t t28 = -509247;

	t28 = ((x265*x266)==(x267*x268));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x273 = -73;
	int8_t x274 = -1;

	t29 = ((x273*x274)==(x275*x276));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x281 = 29261U;
	int32_t x282 = 3702;
	int16_t x283 = -1;
	volatile uint32_t x284 = 71078445U;
	static int32_t t30 = 5438145;

	t30 = ((x281*x282)==(x283*x284));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x293 = 4U;
	int8_t x294 = -1;
	static int8_t x295 = -1;
	volatile int32_t x296 = 56930;
	volatile int32_t t31 = 12517943;

	t31 = ((x293*x294)==(x295*x296));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x298 = INT8_MIN;
	uint8_t x299 = 15U;
	uint64_t x300 = 89432276328355LLU;
	volatile int32_t t32 = -7;

	t32 = ((x297*x298)==(x299*x300));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x305 = 110U;
	int16_t x306 = -1;
	int32_t x307 = 990014663;
	static volatile uint64_t x308 = 11570962213649LLU;
	int32_t t33 = -118551;

	t33 = ((x305*x306)==(x307*x308));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x309 = INT32_MIN;
	static uint32_t x310 = 1507U;
	int32_t x311 = -1;
	int16_t x312 = INT16_MIN;
	int32_t t34 = -15509055;

	t34 = ((x309*x310)==(x311*x312));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = 11214859LL;
	uint64_t x323 = 148832935LLU;
	volatile int16_t x324 = INT16_MAX;
	volatile int32_t t35 = -1299;

	t35 = ((x321*x322)==(x323*x324));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x329 = -1;
	int16_t x331 = -2111;
	static int32_t x332 = -1;
	int32_t t36 = -6819918;

	t36 = ((x329*x330)==(x331*x332));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x342 = 633140912256LLU;
	uint32_t x343 = 798319U;
	int64_t x344 = -1LL;
	static int32_t t37 = -1006835;

	t37 = ((x341*x342)==(x343*x344));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x345 = 5409176870206LLU;
	static uint8_t x346 = 3U;
	int16_t x348 = INT16_MIN;
	int32_t t38 = -323576;

	t38 = ((x345*x346)==(x347*x348));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x353 = 3489;
	uint64_t x354 = 15LLU;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = -1;

	t39 = ((x353*x354)==(x355*x356));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x357 = -1LL;
	uint64_t x358 = UINT64_MAX;
	static volatile int64_t x359 = -378525083LL;
	static uint16_t x360 = 0U;
	volatile int32_t t40 = -79096;

	t40 = ((x357*x358)==(x359*x360));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x361 = -104507509519277LL;
	uint64_t x362 = 212535375LLU;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MIN;
	volatile int32_t t41 = -25508748;

	t41 = ((x361*x362)==(x363*x364));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x370 = UINT8_MAX;
	int8_t x372 = INT8_MAX;
	volatile int32_t t42 = -30582;

	t42 = ((x369*x370)==(x371*x372));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x374 = -1;
	volatile uint16_t x375 = 0U;
	static int8_t x376 = -57;
	volatile int32_t t43 = -12652945;

	t43 = ((x373*x374)==(x375*x376));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x377 = -1;
	volatile int8_t x378 = INT8_MAX;
	int16_t x379 = -1;
	volatile int8_t x380 = 25;

	t44 = ((x377*x378)==(x379*x380));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x386 = 0LLU;
	static int16_t x387 = INT16_MAX;
	static int32_t t45 = -997;

	t45 = ((x385*x386)==(x387*x388));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x389 = 98;
	static uint64_t x390 = UINT64_MAX;
	uint64_t x391 = 579770362882941LLU;
	volatile uint64_t x392 = 3953579816LLU;
	int32_t t46 = 3706;

	t46 = ((x389*x390)==(x391*x392));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x394 = -1;
	int8_t x395 = 0;
	volatile int16_t x396 = 349;
	volatile int32_t t47 = -38696;

	t47 = ((x393*x394)==(x395*x396));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x405 = INT16_MIN;
	volatile int8_t x406 = -20;
	static uint64_t x407 = 15880LLU;
	uint64_t x408 = 1802680470724752597LLU;

	t48 = ((x405*x406)==(x407*x408));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x409 = 53U;
	volatile int64_t x410 = -1LL;
	volatile uint16_t x411 = UINT16_MAX;
	int64_t x412 = -1LL;
	int32_t t49 = -2379407;

	t49 = ((x409*x410)==(x411*x412));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x413 = -7;
	int8_t x414 = 1;
	int16_t x415 = -1;
	int16_t x416 = 8;
	volatile int32_t t50 = -404176;

	t50 = ((x413*x414)==(x415*x416));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x418 = 412U;
	int32_t x419 = INT32_MAX;
	int32_t t51 = 813017;

	t51 = ((x417*x418)==(x419*x420));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x425 = INT32_MIN;
	uint32_t x426 = 42U;
	uint32_t x427 = UINT32_MAX;
	int16_t x428 = INT16_MIN;

	t52 = ((x425*x426)==(x427*x428));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x433 = -378325137;
	volatile uint64_t x434 = 3951947032480LLU;
	static uint8_t x435 = 1U;
	static uint64_t x436 = UINT64_MAX;
	volatile int32_t t53 = 32;

	t53 = ((x433*x434)==(x435*x436));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x449 = 33U;
	static int8_t x450 = -30;
	volatile int32_t x451 = -1;
	static volatile int8_t x452 = INT8_MIN;
	volatile int32_t t54 = -1343;

	t54 = ((x449*x450)==(x451*x452));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x457 = -1;
	int32_t x458 = -1083848;
	int16_t x459 = -1;
	int32_t t55 = 2036233;

	t55 = ((x457*x458)==(x459*x460));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x461 = UINT64_MAX;
	int8_t x462 = 3;
	uint16_t x463 = 2U;
	int32_t t56 = 50013082;

	t56 = ((x461*x462)==(x463*x464));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x469 = UINT64_MAX;
	int64_t x470 = INT64_MIN;
	uint64_t x471 = 81068989LLU;
	int64_t x472 = -1LL;

	t57 = ((x469*x470)==(x471*x472));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x473 = INT8_MAX;
	int16_t x474 = 251;
	static volatile int8_t x475 = -1;
	uint64_t x476 = 1238355567858228LLU;
	static volatile int32_t t58 = -23699763;

	t58 = ((x473*x474)==(x475*x476));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x477 = -3;
	volatile int8_t x478 = INT8_MIN;
	int64_t x479 = 2832070496471LL;
	uint16_t x480 = 2934U;

	t59 = ((x477*x478)==(x479*x480));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x486 = UINT16_MAX;
	volatile int16_t x488 = -37;
	static volatile int32_t t60 = 6;

	t60 = ((x485*x486)==(x487*x488));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x493 = INT32_MIN;
	uint64_t x494 = UINT64_MAX;
	int8_t x496 = -1;
	int32_t t61 = -1844;

	t61 = ((x493*x494)==(x495*x496));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x497 = INT16_MAX;
	uint8_t x499 = UINT8_MAX;
	int32_t t62 = 1;

	t62 = ((x497*x498)==(x499*x500));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x505 = -1LL;
	static int64_t x506 = -1LL;
	uint8_t x507 = 0U;

	t63 = ((x505*x506)==(x507*x508));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x509 = -1LL;
	uint32_t x510 = 395U;
	int8_t x512 = 1;
	int32_t t64 = 391;

	t64 = ((x509*x510)==(x511*x512));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x519 = 0U;
	uint32_t x520 = 100430U;

	t65 = ((x517*x518)==(x519*x520));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x521 = INT8_MAX;
	volatile uint16_t x522 = 0U;
	int16_t x523 = 466;
	static uint32_t x524 = 2U;
	int32_t t66 = 50;

	t66 = ((x521*x522)==(x523*x524));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x526 = UINT32_MAX;
	uint16_t x528 = 378U;
	int32_t t67 = -54427031;

	t67 = ((x525*x526)==(x527*x528));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x529 = INT8_MAX;
	volatile int32_t x530 = -1;
	uint32_t x531 = 20081U;
	static volatile int16_t x532 = INT16_MAX;
	volatile int32_t t68 = -35;

	t68 = ((x529*x530)==(x531*x532));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x533 = UINT64_MAX;
	static int8_t x534 = -1;
	int16_t x535 = -1;
	static uint16_t x536 = UINT16_MAX;

	t69 = ((x533*x534)==(x535*x536));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x537 = INT8_MIN;
	int8_t x538 = INT8_MIN;
	volatile uint64_t x539 = UINT64_MAX;
	int8_t x540 = -1;

	t70 = ((x537*x538)==(x539*x540));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x546 = UINT64_MAX;
	uint8_t x548 = 57U;

	t71 = ((x545*x546)==(x547*x548));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x561 = INT8_MIN;
	static int64_t x562 = -1LL;
	int8_t x564 = -1;
	volatile int32_t t72 = 1703479;

	t72 = ((x561*x562)==(x563*x564));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x565 = -1615429LL;
	static int16_t x566 = -1;
	uint16_t x567 = 1U;
	volatile uint8_t x568 = 41U;
	int32_t t73 = 12;

	t73 = ((x565*x566)==(x567*x568));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x569 = 39;
	int16_t x570 = INT16_MIN;
	volatile uint8_t x571 = UINT8_MAX;
	int16_t x572 = INT16_MAX;

	t74 = ((x569*x570)==(x571*x572));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x581 = -1;
	static uint8_t x582 = 14U;
	static int16_t x583 = INT16_MIN;

	t75 = ((x581*x582)==(x583*x584));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x617 = 78995680;
	uint64_t x618 = 69419LLU;
	int64_t x620 = -1LL;
	static int32_t t76 = -55207073;

	t76 = ((x617*x618)==(x619*x620));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x641 = INT8_MAX;
	static uint16_t x642 = UINT16_MAX;
	int8_t x643 = -1;
	uint32_t x644 = UINT32_MAX;
	volatile int32_t t77 = 13;

	t77 = ((x641*x642)==(x643*x644));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x645 = 20728630U;
	uint32_t x646 = 1193U;
	volatile uint32_t x647 = UINT32_MAX;
	int8_t x648 = 4;
	volatile int32_t t78 = 259701487;

	t78 = ((x645*x646)==(x647*x648));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x657 = INT8_MIN;
	int64_t x658 = -1LL;
	int8_t x659 = -9;
	static int8_t x660 = -26;
	int32_t t79 = -35177926;

	t79 = ((x657*x658)==(x659*x660));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x661 = 171822992U;
	volatile int64_t x662 = -1LL;
	uint64_t x663 = 58128396LLU;
	int16_t x664 = 1;
	int32_t t80 = 99915;

	t80 = ((x661*x662)==(x663*x664));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x665 = -1;
	int8_t x667 = INT8_MIN;
	int64_t x668 = 820805LL;

	t81 = ((x665*x666)==(x667*x668));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x669 = INT32_MAX;
	uint32_t x670 = 0U;
	int32_t t82 = -1;

	t82 = ((x669*x670)==(x671*x672));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x677 = 18090932LLU;
	int16_t x678 = INT16_MIN;
	int8_t x679 = -1;
	uint16_t x680 = UINT16_MAX;
	static volatile int32_t t83 = 113037842;

	t83 = ((x677*x678)==(x679*x680));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x682 = UINT8_MAX;
	volatile int16_t x683 = 834;
	int8_t x684 = -1;
	static volatile int32_t t84 = 811;

	t84 = ((x681*x682)==(x683*x684));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x693 = UINT64_MAX;
	uint64_t x695 = 12LLU;
	volatile int8_t x696 = -1;
	volatile int32_t t85 = 6388;

	t85 = ((x693*x694)==(x695*x696));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x697 = INT16_MIN;
	int16_t x698 = 1;
	volatile int8_t x699 = 0;
	volatile int8_t x700 = INT8_MIN;
	int32_t t86 = 820410;

	t86 = ((x697*x698)==(x699*x700));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x713 = 12LL;
	volatile int8_t x714 = -1;
	static uint16_t x716 = 71U;

	t87 = ((x713*x714)==(x715*x716));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x717 = -1;
	volatile int64_t x719 = -1LL;

	t88 = ((x717*x718)==(x719*x720));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x721 = INT16_MIN;
	static int32_t x723 = -5011907;
	uint64_t x724 = UINT64_MAX;
	int32_t t89 = -2386366;

	t89 = ((x721*x722)==(x723*x724));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x725 = -1;
	volatile int16_t x726 = INT16_MIN;
	volatile uint8_t x728 = 15U;

	t90 = ((x725*x726)==(x727*x728));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x737 = INT32_MAX;
	uint64_t x738 = UINT64_MAX;
	int16_t x739 = INT16_MAX;
	uint64_t x740 = UINT64_MAX;
	volatile int32_t t91 = -2937377;

	t91 = ((x737*x738)==(x739*x740));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x749 = UINT16_MAX;
	int16_t x750 = INT16_MIN;
	uint64_t x751 = 88LLU;
	static int64_t x752 = -50987LL;
	volatile int32_t t92 = 465015;

	t92 = ((x749*x750)==(x751*x752));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x761 = INT32_MIN;
	int64_t x762 = -1LL;
	uint64_t x764 = UINT64_MAX;
	int32_t t93 = -28997;

	t93 = ((x761*x762)==(x763*x764));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x765 = UINT32_MAX;
	uint64_t x766 = 277076778515408707LLU;
	int16_t x767 = INT16_MIN;
	volatile int32_t x768 = 2;
	volatile int32_t t94 = -109088479;

	t94 = ((x765*x766)==(x767*x768));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x781 = INT16_MIN;
	volatile int64_t x783 = 77465258108471LL;
	volatile uint8_t x784 = 116U;
	volatile int32_t t95 = -31546788;

	t95 = ((x781*x782)==(x783*x784));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x798 = 472995964U;
	static volatile int8_t x800 = 6;
	int32_t t96 = 2634039;

	t96 = ((x797*x798)==(x799*x800));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x801 = -13;
	static uint8_t x802 = UINT8_MAX;
	uint16_t x803 = UINT16_MAX;
	uint8_t x804 = UINT8_MAX;
	volatile int32_t t97 = 0;

	t97 = ((x801*x802)==(x803*x804));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x817 = 371U;
	volatile uint64_t x818 = 1575373869LLU;
	int8_t x819 = INT8_MAX;
	static int64_t x820 = 89786216LL;

	t98 = ((x817*x818)==(x819*x820));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x833 = 7698U;
	uint8_t x834 = UINT8_MAX;
	uint32_t x835 = 1U;
	int16_t x836 = 210;

	t99 = ((x833*x834)==(x835*x836));

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

