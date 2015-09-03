#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = 830;
uint8_t x21 = 28U;
int32_t x41 = INT32_MIN;
int16_t x58 = INT16_MIN;
int16_t x61 = -1;
int64_t x69 = 127150516341LL;
volatile int8_t x77 = INT8_MIN;
int32_t t12 = -175947;
uint16_t x113 = UINT16_MAX;
static int32_t x114 = INT32_MIN;
uint32_t x115 = 2038307617U;
volatile uint32_t x116 = 13893U;
static int16_t x126 = INT16_MIN;
int32_t t16 = 423671084;
volatile int32_t t17 = 12229788;
uint32_t x135 = 2076448277U;
volatile int32_t t20 = 27;
int8_t x154 = INT8_MIN;
int32_t t21 = -36;
int32_t x163 = -1;
int8_t x176 = INT8_MIN;
int32_t x187 = -1;
volatile uint32_t x292 = UINT32_MAX;
int32_t x294 = INT32_MIN;
int16_t x295 = INT16_MIN;
volatile int16_t x299 = -1;
int64_t x300 = 1LL;
uint8_t x309 = UINT8_MAX;
int16_t x385 = INT16_MIN;
volatile int32_t t42 = -6444;
volatile int32_t x418 = 373;
int32_t x423 = INT32_MIN;
uint64_t x424 = 9372168965LLU;
int32_t x426 = INT32_MAX;
int16_t x454 = 322;
uint16_t x455 = 6057U;
int8_t x475 = INT8_MIN;
volatile uint64_t x479 = 3331351LLU;
uint16_t x484 = 4U;
volatile int32_t t56 = 15276161;
uint64_t x504 = 144667578361633211LLU;
int8_t x505 = 4;
uint16_t x506 = UINT16_MAX;
static int64_t x514 = -1LL;
static int32_t t59 = 303;
int16_t x528 = INT16_MIN;
int16_t x529 = 2;
static volatile int64_t x533 = INT64_MIN;
static volatile int16_t x547 = INT16_MIN;
uint8_t x558 = 3U;
volatile int64_t x559 = INT64_MIN;
int32_t x561 = 217239971;
int16_t x577 = 1098;
int32_t t70 = -32989;
static uint8_t x609 = UINT8_MAX;
volatile uint16_t x612 = 1815U;
static volatile int32_t t72 = -47694994;
uint8_t x613 = 112U;
uint8_t x614 = 3U;
int8_t x621 = -1;
int32_t x665 = INT32_MAX;
volatile int32_t t76 = -4056;
int16_t x693 = INT16_MAX;
volatile int32_t t78 = 130257;
uint64_t x712 = 4738046144LLU;
int8_t x733 = 14;
static int8_t x734 = -1;
static uint8_t x740 = 1U;
int32_t x742 = INT32_MAX;
uint8_t x755 = UINT8_MAX;
volatile int8_t x756 = INT8_MIN;
volatile int32_t t87 = -2;
volatile int32_t t90 = -173956894;
volatile int32_t t91 = -1;
volatile uint32_t x813 = UINT32_MAX;
int8_t x826 = INT8_MIN;
volatile int64_t x837 = -33501130369508LL;
int32_t t94 = 1947;
volatile int32_t x843 = -58509;
int64_t x847 = 10614369391928LL;
static int16_t x850 = INT16_MAX;
int32_t x851 = 876236930;
uint64_t x864 = 10990084605528045LLU;
volatile int32_t t98 = 1968131;
int16_t x865 = -1;


void f0(void) {
	volatile int64_t x1 = -122160486979463LL;
	int8_t x2 = -3;
	uint16_t x3 = UINT16_MAX;
	static uint16_t x4 = 189U;
	int32_t t0 = -1060;

	t0 = (x1==(x2/(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 1471U;
	uint16_t x6 = 5U;
	static int16_t x8 = 1;
	static volatile int32_t t1 = -13333;

	t1 = (x5==(x6/(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 21219247U;
	int8_t x10 = INT8_MIN;
	int32_t x11 = INT32_MAX;
	static volatile int8_t x12 = -1;
	volatile int32_t t2 = -5095;

	t2 = (x9==(x10/(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x22 = UINT16_MAX;
	int64_t x23 = 94LL;
	volatile int16_t x24 = 15;
	int32_t t3 = 225629088;

	t3 = (x21==(x22/(x23/x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 5U;
	int16_t x26 = INT16_MIN;
	volatile uint64_t x27 = 31875216LLU;
	static int8_t x28 = INT8_MAX;
	int32_t t4 = 378151;

	t4 = (x25==(x26/(x27/x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x42 = 1882;
	static int8_t x43 = INT8_MIN;
	int8_t x44 = -1;
	static int32_t t5 = -1;

	t5 = (x41==(x42/(x43/x44)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x57 = UINT32_MAX;
	volatile uint32_t x59 = 705772343U;
	static uint64_t x60 = 21LLU;
	int32_t t6 = -51;

	t6 = (x57==(x58/(x59/x60)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x62 = -2243LL;
	volatile int32_t x63 = INT32_MAX;
	int8_t x64 = INT8_MIN;
	int32_t t7 = 0;

	t7 = (x61==(x62/(x63/x64)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x70 = -1;
	uint32_t x71 = UINT32_MAX;
	volatile int16_t x72 = -1;
	static volatile int32_t t8 = 15829307;

	t8 = (x69==(x70/(x71/x72)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x78 = 39922027LLU;
	volatile int32_t x79 = 95;
	static volatile int64_t x80 = -1LL;
	int32_t t9 = -1;

	t9 = (x77==(x78/(x79/x80)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x93 = INT8_MIN;
	static uint8_t x94 = 22U;
	uint16_t x95 = 3400U;
	volatile int16_t x96 = 10;
	volatile int32_t t10 = -6;

	t10 = (x93==(x94/(x95/x96)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x101 = INT64_MIN;
	volatile int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MAX;
	static uint64_t x104 = 821682LLU;
	volatile int32_t t11 = 145313532;

	t11 = (x101==(x102/(x103/x104)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x109 = 124U;
	uint8_t x110 = UINT8_MAX;
	volatile int64_t x111 = INT64_MIN;
	int32_t x112 = INT32_MAX;

	t12 = (x109==(x110/(x111/x112)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t t13 = -4632;

	t13 = (x113==(x114/(x115/x116)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x117 = 32U;
	static uint8_t x118 = 14U;
	volatile int8_t x119 = INT8_MIN;
	int32_t x120 = -1;
	int32_t t14 = -340;

	t14 = (x117==(x118/(x119/x120)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x121 = 9;
	int64_t x122 = INT64_MAX;
	int32_t x123 = INT32_MIN;
	int32_t x124 = -101;
	static int32_t t15 = -589;

	t15 = (x121==(x122/(x123/x124)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x125 = 206058284868816LLU;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = INT16_MAX;

	t16 = (x125==(x126/(x127/x128)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x129 = -403212625LL;
	static uint16_t x130 = 3U;
	volatile int64_t x131 = INT64_MIN;
	volatile uint32_t x132 = 1003U;

	t17 = (x129==(x130/(x131/x132)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x134 = INT32_MAX;
	int16_t x136 = 107;
	volatile int32_t t18 = 304280;

	t18 = (x133==(x134/(x135/x136)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x141 = 1U;
	int32_t x142 = -1;
	static uint32_t x143 = UINT32_MAX;
	uint8_t x144 = 1U;
	volatile int32_t t19 = 18546;

	t19 = (x141==(x142/(x143/x144)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x149 = 8U;
	uint64_t x150 = UINT64_MAX;
	int16_t x151 = INT16_MAX;
	volatile int8_t x152 = INT8_MAX;

	t20 = (x149==(x150/(x151/x152)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x153 = -1;
	uint64_t x155 = UINT64_MAX;
	int32_t x156 = INT32_MIN;

	t21 = (x153==(x154/(x155/x156)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x161 = INT8_MIN;
	static uint32_t x162 = 38U;
	int8_t x164 = 1;
	static int32_t t22 = 4244391;

	t22 = (x161==(x162/(x163/x164)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x173 = -1LL;
	uint8_t x174 = 7U;
	static uint16_t x175 = UINT16_MAX;
	static volatile int32_t t23 = 4018;

	t23 = (x173==(x174/(x175/x176)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x177 = -1LL;
	uint32_t x178 = UINT32_MAX;
	uint32_t x179 = UINT32_MAX;
	int64_t x180 = 12LL;
	int32_t t24 = 637;

	t24 = (x177==(x178/(x179/x180)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x185 = INT8_MAX;
	static uint16_t x186 = 79U;
	uint64_t x188 = 30LLU;
	volatile int32_t t25 = 1;

	t25 = (x185==(x186/(x187/x188)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	static uint16_t x200 = 1125U;
	volatile int32_t t26 = 1;

	t26 = (x197==(x198/(x199/x200)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x217 = UINT32_MAX;
	uint8_t x218 = 13U;
	volatile uint16_t x219 = UINT16_MAX;
	static volatile uint8_t x220 = UINT8_MAX;
	volatile int32_t t27 = -187;

	t27 = (x217==(x218/(x219/x220)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x221 = 62477763U;
	int16_t x222 = INT16_MAX;
	volatile int32_t x223 = -5;
	volatile int8_t x224 = -1;
	volatile int32_t t28 = 0;

	t28 = (x221==(x222/(x223/x224)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x249 = INT64_MIN;
	int32_t x250 = -14239;
	volatile int16_t x251 = INT16_MAX;
	uint8_t x252 = UINT8_MAX;
	int32_t t29 = -3241;

	t29 = (x249==(x250/(x251/x252)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x253 = 1693U;
	int16_t x254 = -1;
	volatile uint16_t x255 = 334U;
	volatile int8_t x256 = INT8_MIN;
	int32_t t30 = 1;

	t30 = (x253==(x254/(x255/x256)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x277 = UINT32_MAX;
	static int16_t x278 = -1;
	int16_t x279 = INT16_MIN;
	int8_t x280 = -1;
	static int32_t t31 = -53371;

	t31 = (x277==(x278/(x279/x280)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x289 = 1556214;
	uint16_t x290 = UINT16_MAX;
	int32_t x291 = -1;
	volatile int32_t t32 = 259444487;

	t32 = (x289==(x290/(x291/x292)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x293 = -1;
	int8_t x296 = INT8_MIN;
	volatile int32_t t33 = 63028;

	t33 = (x293==(x294/(x295/x296)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x297 = 7190202898614636LLU;
	uint16_t x298 = 15U;
	volatile int32_t t34 = 4490;

	t34 = (x297==(x298/(x299/x300)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x301 = 12U;
	static int32_t x302 = INT32_MAX;
	uint32_t x303 = UINT32_MAX;
	int32_t x304 = INT32_MIN;
	int32_t t35 = -15659853;

	t35 = (x301==(x302/(x303/x304)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x310 = INT16_MAX;
	uint32_t x311 = UINT32_MAX;
	uint64_t x312 = 83068707LLU;
	static int32_t t36 = 200;

	t36 = (x309==(x310/(x311/x312)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MAX;
	int8_t x315 = -27;
	volatile uint16_t x316 = 6U;
	static volatile int32_t t37 = -7168948;

	t37 = (x313==(x314/(x315/x316)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x317 = 28256354349443590LLU;
	static uint64_t x318 = 92564391701995962LLU;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;
	volatile int32_t t38 = -2;

	t38 = (x317==(x318/(x319/x320)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x341 = 0U;
	int32_t x342 = -13134;
	int32_t x343 = -70;
	int32_t x344 = -1;
	volatile int32_t t39 = -51;

	t39 = (x341==(x342/(x343/x344)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x369 = 129U;
	int64_t x370 = 0LL;
	static int32_t x371 = INT32_MAX;
	int8_t x372 = -1;
	int32_t t40 = -702117;

	t40 = (x369==(x370/(x371/x372)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x386 = 202U;
	int8_t x387 = INT8_MIN;
	static volatile int8_t x388 = INT8_MIN;
	volatile int32_t t41 = 112347;

	t41 = (x385==(x386/(x387/x388)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x389 = 6141U;
	static int32_t x390 = INT32_MIN;
	int8_t x391 = -1;
	volatile int8_t x392 = -1;

	t42 = (x389==(x390/(x391/x392)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x393 = INT16_MAX;
	static volatile int64_t x394 = INT64_MIN;
	static int32_t x395 = -247;
	uint16_t x396 = 3U;
	volatile int32_t t43 = 7371533;

	t43 = (x393==(x394/(x395/x396)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x409 = UINT64_MAX;
	uint8_t x410 = UINT8_MAX;
	int64_t x411 = INT64_MAX;
	int16_t x412 = INT16_MIN;
	int32_t t44 = -25;

	t44 = (x409==(x410/(x411/x412)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x417 = -257871;
	static uint64_t x419 = UINT64_MAX;
	static volatile int8_t x420 = INT8_MIN;
	volatile int32_t t45 = 176580172;

	t45 = (x417==(x418/(x419/x420)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x421 = INT64_MAX;
	int64_t x422 = -199621LL;
	int32_t t46 = -1;

	t46 = (x421==(x422/(x423/x424)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x425 = INT64_MAX;
	int32_t x427 = -407936;
	uint16_t x428 = 9U;
	volatile int32_t t47 = 48;

	t47 = (x425==(x426/(x427/x428)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x437 = -759;
	static uint64_t x438 = 807228042622697241LLU;
	int32_t x439 = INT32_MIN;
	int16_t x440 = INT16_MIN;
	int32_t t48 = -141;

	t48 = (x437==(x438/(x439/x440)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x441 = 0;
	int8_t x442 = 46;
	int32_t x443 = INT32_MAX;
	int8_t x444 = INT8_MIN;
	int32_t t49 = -11075;

	t49 = (x441==(x442/(x443/x444)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x453 = INT64_MIN;
	int8_t x456 = INT8_MIN;
	int32_t t50 = 164172;

	t50 = (x453==(x454/(x455/x456)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x457 = 266U;
	uint8_t x458 = 35U;
	int16_t x459 = INT16_MIN;
	int8_t x460 = INT8_MIN;
	volatile int32_t t51 = -24959245;

	t51 = (x457==(x458/(x459/x460)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x473 = INT64_MIN;
	static volatile int8_t x474 = 20;
	static int8_t x476 = INT8_MIN;
	volatile int32_t t52 = 0;

	t52 = (x473==(x474/(x475/x476)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x477 = INT16_MIN;
	uint64_t x478 = 937LLU;
	static int16_t x480 = INT16_MAX;
	volatile int32_t t53 = -927642045;

	t53 = (x477==(x478/(x479/x480)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x481 = INT16_MIN;
	int32_t x482 = INT32_MIN;
	volatile uint64_t x483 = 783LLU;
	static volatile int32_t t54 = -189;

	t54 = (x481==(x482/(x483/x484)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x485 = 43091LL;
	int64_t x486 = -6115671162LL;
	int8_t x487 = INT8_MIN;
	volatile int32_t x488 = 1;
	int32_t t55 = 28135135;

	t55 = (x485==(x486/(x487/x488)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x497 = -1;
	uint32_t x498 = 2U;
	int32_t x499 = INT32_MIN;
	int64_t x500 = -3792LL;

	t56 = (x497==(x498/(x499/x500)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x501 = 412;
	static uint64_t x502 = 25848944968104735LLU;
	volatile int8_t x503 = INT8_MIN;
	volatile int32_t t57 = -7061;

	t57 = (x501==(x502/(x503/x504)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x507 = INT64_MAX;
	static volatile uint16_t x508 = 1194U;
	static volatile int32_t t58 = -47598;

	t58 = (x505==(x506/(x507/x508)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x513 = INT64_MIN;
	uint32_t x515 = 730478470U;
	int16_t x516 = 658;

	t59 = (x513==(x514/(x515/x516)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x517 = 329821408LLU;
	int32_t x518 = INT32_MIN;
	int32_t x519 = INT32_MIN;
	uint16_t x520 = 2860U;
	volatile int32_t t60 = 151564;

	t60 = (x517==(x518/(x519/x520)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x525 = 56U;
	static int64_t x526 = 3LL;
	volatile uint64_t x527 = UINT64_MAX;
	int32_t t61 = -91827;

	t61 = (x525==(x526/(x527/x528)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x530 = 57U;
	volatile int64_t x531 = INT64_MIN;
	volatile uint8_t x532 = UINT8_MAX;
	volatile int32_t t62 = -63;

	t62 = (x529==(x530/(x531/x532)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x534 = 277479854;
	int16_t x535 = INT16_MIN;
	uint8_t x536 = 3U;
	volatile int32_t t63 = 1;

	t63 = (x533==(x534/(x535/x536)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x545 = INT64_MIN;
	uint32_t x546 = 6059U;
	int16_t x548 = INT16_MIN;
	volatile int32_t t64 = -69618291;

	t64 = (x545==(x546/(x547/x548)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x553 = UINT32_MAX;
	int32_t x554 = -1;
	int16_t x555 = -1;
	volatile uint32_t x556 = UINT32_MAX;
	int32_t t65 = -157;

	t65 = (x553==(x554/(x555/x556)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x557 = 5U;
	uint8_t x560 = 108U;
	int32_t t66 = 905;

	t66 = (x557==(x558/(x559/x560)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x562 = UINT32_MAX;
	static int16_t x563 = INT16_MAX;
	uint16_t x564 = 19642U;
	int32_t t67 = -1795250;

	t67 = (x561==(x562/(x563/x564)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x565 = 63037U;
	static volatile int32_t x566 = -1;
	int64_t x567 = -1LL;
	volatile int8_t x568 = -1;
	int32_t t68 = 5;

	t68 = (x565==(x566/(x567/x568)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x578 = INT8_MAX;
	volatile int32_t x579 = INT32_MIN;
	volatile uint8_t x580 = 102U;
	static volatile int32_t t69 = -514;

	t69 = (x577==(x578/(x579/x580)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x593 = INT32_MIN;
	static uint64_t x594 = 57595785LLU;
	volatile uint64_t x595 = UINT64_MAX;
	int64_t x596 = -693195788114LL;

	t70 = (x593==(x594/(x595/x596)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x605 = 0;
	static int16_t x606 = INT16_MAX;
	int32_t x607 = -24;
	int8_t x608 = -8;
	static int32_t t71 = -41884855;

	t71 = (x605==(x606/(x607/x608)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x610 = UINT8_MAX;
	uint64_t x611 = 6924542LLU;

	t72 = (x609==(x610/(x611/x612)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x615 = 63012U;
	int8_t x616 = INT8_MAX;
	int32_t t73 = 1;

	t73 = (x613==(x614/(x615/x616)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x622 = -1;
	uint64_t x623 = 84785106932966171LLU;
	volatile int8_t x624 = INT8_MAX;
	int32_t t74 = 2627465;

	t74 = (x621==(x622/(x623/x624)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x645 = -1;
	static uint16_t x646 = UINT16_MAX;
	int64_t x647 = INT64_MAX;
	int32_t x648 = -1;
	volatile int32_t t75 = 13026588;

	t75 = (x645==(x646/(x647/x648)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x666 = INT16_MIN;
	uint16_t x667 = UINT16_MAX;
	int8_t x668 = INT8_MIN;

	t76 = (x665==(x666/(x667/x668)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x694 = INT32_MAX;
	int16_t x695 = INT16_MAX;
	int64_t x696 = -1LL;
	volatile int32_t t77 = 427;

	t77 = (x693==(x694/(x695/x696)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x701 = -1;
	int16_t x702 = 9;
	uint16_t x703 = 1512U;
	static uint16_t x704 = 123U;

	t78 = (x701==(x702/(x703/x704)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x709 = INT32_MIN;
	volatile int64_t x710 = INT64_MAX;
	int32_t x711 = INT32_MIN;
	int32_t t79 = 395755;

	t79 = (x709==(x710/(x711/x712)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x713 = INT64_MIN;
	uint32_t x714 = UINT32_MAX;
	int32_t x715 = INT32_MIN;
	uint8_t x716 = 1U;
	volatile int32_t t80 = 6;

	t80 = (x713==(x714/(x715/x716)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x717 = INT64_MIN;
	volatile int16_t x718 = 3029;
	volatile int64_t x719 = -916115LL;
	int16_t x720 = -1;
	static volatile int32_t t81 = 596652;

	t81 = (x717==(x718/(x719/x720)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x735 = 4188619776LL;
	int8_t x736 = INT8_MIN;
	int32_t t82 = 4308;

	t82 = (x733==(x734/(x735/x736)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x737 = INT64_MIN;
	uint8_t x738 = UINT8_MAX;
	volatile uint8_t x739 = 61U;
	int32_t t83 = -33538966;

	t83 = (x737==(x738/(x739/x740)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x741 = UINT32_MAX;
	int64_t x743 = INT64_MIN;
	volatile int16_t x744 = INT16_MAX;
	int32_t t84 = 68785676;

	t84 = (x741==(x742/(x743/x744)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x745 = -1LL;
	int32_t x746 = 15121528;
	volatile int64_t x747 = -4034151412756514852LL;
	int64_t x748 = -1LL;
	volatile int32_t t85 = 15;

	t85 = (x745==(x746/(x747/x748)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x749 = 197;
	static uint8_t x750 = 2U;
	int8_t x751 = -1;
	static int16_t x752 = -1;
	int32_t t86 = 30467825;

	t86 = (x749==(x750/(x751/x752)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x753 = UINT8_MAX;
	uint64_t x754 = 244623510673377241LLU;

	t87 = (x753==(x754/(x755/x756)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x757 = UINT16_MAX;
	int16_t x758 = -1;
	int64_t x759 = -39438960237023890LL;
	static int8_t x760 = INT8_MIN;
	int32_t t88 = -11922288;

	t88 = (x757==(x758/(x759/x760)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x761 = 22823U;
	static uint32_t x762 = UINT32_MAX;
	uint64_t x763 = UINT64_MAX;
	static uint32_t x764 = UINT32_MAX;
	volatile int32_t t89 = -182140817;

	t89 = (x761==(x762/(x763/x764)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x785 = 22;
	volatile int64_t x786 = -1LL;
	uint16_t x787 = 6U;
	int16_t x788 = -1;

	t90 = (x785==(x786/(x787/x788)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x789 = 38LL;
	uint8_t x790 = 0U;
	volatile uint64_t x791 = UINT64_MAX;
	int16_t x792 = INT16_MIN;

	t91 = (x789==(x790/(x791/x792)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x814 = -17420;
	int8_t x815 = INT8_MIN;
	int8_t x816 = -1;
	volatile int32_t t92 = -469;

	t92 = (x813==(x814/(x815/x816)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x825 = 55LL;
	uint64_t x827 = 758141314LLU;
	int16_t x828 = INT16_MAX;
	int32_t t93 = -357;

	t93 = (x825==(x826/(x827/x828)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x838 = INT32_MAX;
	static volatile int16_t x839 = INT16_MIN;
	uint8_t x840 = UINT8_MAX;

	t94 = (x837==(x838/(x839/x840)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x841 = 3LL;
	static uint8_t x842 = 4U;
	volatile uint8_t x844 = 91U;
	int32_t t95 = 114293688;

	t95 = (x841==(x842/(x843/x844)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x845 = UINT8_MAX;
	int8_t x846 = -1;
	static uint64_t x848 = 7836189105LLU;
	volatile int32_t t96 = 146002;

	t96 = (x845==(x846/(x847/x848)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x849 = INT16_MIN;
	volatile uint8_t x852 = UINT8_MAX;
	static int32_t t97 = -2161117;

	t97 = (x849==(x850/(x851/x852)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x861 = 229;
	int32_t x862 = -12194717;
	int16_t x863 = -1;

	t98 = (x861==(x862/(x863/x864)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x866 = INT32_MAX;
	uint16_t x867 = 9651U;
	int32_t x868 = -1;
	volatile int32_t t99 = 1;

	t99 = (x865==(x866/(x867/x868)));

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

