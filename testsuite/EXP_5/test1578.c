#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x28 = UINT8_MAX;
static volatile int64_t t2 = 16276LL;
static int64_t x29 = INT64_MIN;
int64_t x40 = INT64_MAX;
volatile uint32_t x81 = 3439U;
volatile uint32_t t8 = 9U;
uint8_t x93 = UINT8_MAX;
int16_t x110 = 5836;
uint16_t x111 = UINT16_MAX;
volatile int64_t t10 = -3657962824712563LL;
int8_t x116 = INT8_MIN;
volatile uint16_t x122 = UINT16_MAX;
int64_t x127 = 19900952176LL;
volatile int8_t x132 = INT8_MAX;
static uint64_t x163 = UINT64_MAX;
volatile uint64_t t19 = 50LLU;
volatile int64_t x169 = -4117230026689210349LL;
volatile uint8_t x172 = 15U;
volatile uint32_t x191 = UINT32_MAX;
int32_t x193 = 95;
int64_t x208 = INT64_MAX;
uint64_t x213 = 38003990733473LLU;
int64_t x217 = 176540721461327LL;
int16_t x219 = INT16_MIN;
int64_t x225 = INT64_MIN;
int64_t t31 = -250133295LL;
static volatile uint64_t t32 = 1550234357LLU;
int8_t x250 = INT8_MIN;
volatile int16_t x258 = -1;
int64_t x259 = -1LL;
volatile int32_t t37 = -1152095;
volatile int32_t t42 = 2;
int64_t x376 = -23LL;
volatile int16_t x379 = INT16_MIN;
static int32_t x389 = INT32_MIN;
uint16_t x411 = UINT16_MAX;
static int16_t x413 = INT16_MIN;
int16_t x431 = INT16_MAX;
uint32_t x443 = UINT32_MAX;
volatile uint64_t t54 = 10956LLU;
static int32_t x449 = INT32_MIN;
uint8_t x457 = 26U;
int32_t x458 = INT32_MIN;
int8_t x464 = INT8_MAX;
int64_t x465 = -397307009637202970LL;
int8_t x468 = INT8_MAX;
int64_t x478 = 32202314543LL;
uint32_t x575 = 186U;
uint16_t x585 = UINT16_MAX;
int64_t x586 = INT64_MIN;
volatile uint16_t x599 = 29U;
static int8_t x621 = -5;
int8_t x622 = -39;
static volatile int32_t t71 = 361779;
uint16_t x627 = UINT16_MAX;
int16_t x653 = -1;
static int8_t x680 = INT8_MIN;
static volatile int8_t x686 = INT8_MAX;
static int32_t x688 = INT32_MIN;
int32_t x691 = -1;
int64_t x692 = -448940LL;
volatile int32_t t82 = -9732253;
int32_t x730 = INT32_MIN;
static uint16_t x732 = 961U;
volatile int32_t t84 = -5262307;
int16_t x733 = INT16_MIN;
static int16_t x738 = INT16_MIN;
uint16_t x743 = 546U;
uint32_t t87 = 1699325344U;
volatile uint64_t x780 = 2892166LLU;
static int32_t x786 = -7;
static int64_t x788 = INT64_MIN;
int8_t x790 = INT8_MIN;
int8_t x791 = -25;
int32_t x792 = INT32_MIN;
volatile uint64_t t96 = 2349444162031081LLU;
static uint64_t x809 = 1201538093801997LLU;
uint32_t x810 = 647231U;
volatile int16_t x815 = 6070;
int16_t x823 = 138;


void f0(void) {
	int32_t x5 = -1;
	int64_t x6 = INT64_MAX;
	uint64_t x7 = UINT64_MAX;
	uint32_t x8 = 76532865U;
	uint32_t t0 = 3U;

	t0 = (x5%((x6<=x7)%x8));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = -1LL;
	uint16_t x18 = 32138U;
	uint32_t x19 = UINT32_MAX;
	uint8_t x20 = 31U;
	volatile int64_t t1 = 5158123LL;

	t1 = (x17%((x18<=x19)%x20));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = INT64_MIN;
	int64_t x26 = -1LL;
	uint32_t x27 = 0U;

	t2 = (x25%((x26<=x27)%x28));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x30 = -1LL;
	uint32_t x31 = 0U;
	static uint32_t x32 = 1035749454U;
	volatile int64_t t3 = -9LL;

	t3 = (x29%((x30<=x31)%x32));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x37 = 1;
	uint64_t x38 = 7LLU;
	int64_t x39 = INT64_MIN;
	volatile int64_t t4 = -476013868506314187LL;

	t4 = (x37%((x38<=x39)%x40));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x41 = -1;
	int64_t x42 = -1LL;
	uint8_t x43 = 5U;
	uint16_t x44 = 5U;
	int32_t t5 = 61;

	t5 = (x41%((x42<=x43)%x44));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x45 = 387727580LL;
	int64_t x46 = 16LL;
	static volatile uint64_t x47 = 859395346185LLU;
	int16_t x48 = INT16_MAX;
	int64_t t6 = -136327121966604LL;

	t6 = (x45%((x46<=x47)%x48));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x69 = 5U;
	static volatile int32_t x70 = -1;
	static uint8_t x71 = 9U;
	int32_t x72 = INT32_MIN;
	int32_t t7 = 41;

	t7 = (x69%((x70<=x71)%x72));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x82 = INT16_MIN;
	int32_t x83 = -1;
	volatile uint16_t x84 = UINT16_MAX;

	t8 = (x81%((x82<=x83)%x84));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x94 = -1;
	volatile int8_t x95 = -1;
	int32_t x96 = INT32_MIN;
	volatile int32_t t9 = 1;

	t9 = (x93%((x94<=x95)%x96));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x109 = INT64_MIN;
	int64_t x112 = -3796640559416747650LL;

	t10 = (x109%((x110<=x111)%x112));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x113 = INT32_MIN;
	static int32_t x114 = -1;
	uint64_t x115 = UINT64_MAX;
	volatile int32_t t11 = 1;

	t11 = (x113%((x114<=x115)%x116));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x121 = INT64_MAX;
	int32_t x123 = INT32_MAX;
	static int64_t x124 = 879517903387464780LL;
	int64_t t12 = 189191606375984986LL;

	t12 = (x121%((x122<=x123)%x124));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x125 = 7U;
	int64_t x126 = INT64_MIN;
	int64_t x128 = 85LL;
	int64_t t13 = 1LL;

	t13 = (x125%((x126<=x127)%x128));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x129 = -1LL;
	int64_t x130 = INT64_MIN;
	uint8_t x131 = UINT8_MAX;
	int64_t t14 = 1147446830870069LL;

	t14 = (x129%((x130<=x131)%x132));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x133 = INT64_MAX;
	uint64_t x134 = 6897264LLU;
	static int32_t x135 = INT32_MAX;
	int16_t x136 = INT16_MIN;
	volatile int64_t t15 = 92282813LL;

	t15 = (x133%((x134<=x135)%x136));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x137 = -1;
	int8_t x138 = INT8_MIN;
	int32_t x139 = 42996;
	int32_t x140 = 9035;
	volatile int32_t t16 = 49;

	t16 = (x137%((x138<=x139)%x140));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x141 = 508916;
	int32_t x142 = -1;
	int64_t x143 = INT64_MAX;
	uint8_t x144 = 4U;
	volatile int32_t t17 = 7;

	t17 = (x141%((x142<=x143)%x144));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x153 = UINT64_MAX;
	int64_t x154 = -1LL;
	static volatile uint8_t x155 = UINT8_MAX;
	volatile int8_t x156 = 10;
	volatile uint64_t t18 = 3657264275720LLU;

	t18 = (x153%((x154<=x155)%x156));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x161 = 1118060548521756LLU;
	static int8_t x162 = INT8_MIN;
	volatile int64_t x164 = 192720377263LL;

	t19 = (x161%((x162<=x163)%x164));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x170 = 13U;
	static volatile uint64_t x171 = 264LLU;
	int64_t t20 = 4566278505LL;

	t20 = (x169%((x170<=x171)%x172));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x173 = 608539U;
	int8_t x174 = INT8_MIN;
	volatile uint16_t x175 = 1U;
	int16_t x176 = INT16_MIN;
	uint32_t t21 = 252U;

	t21 = (x173%((x174<=x175)%x176));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x190 = INT8_MIN;
	int16_t x192 = -3259;
	volatile uint64_t t22 = 3278344536219LLU;

	t22 = (x189%((x190<=x191)%x192));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x194 = -1LL;
	static int64_t x195 = 7927LL;
	int16_t x196 = INT16_MIN;
	static int32_t t23 = -4203;

	t23 = (x193%((x194<=x195)%x196));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x205 = 0U;
	volatile int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	volatile int64_t t24 = 14929LL;

	t24 = (x205%((x206<=x207)%x208));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x214 = -1;
	uint8_t x215 = 5U;
	static uint16_t x216 = 6412U;
	uint64_t t25 = 65958198806LLU;

	t25 = (x213%((x214<=x215)%x216));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x218 = 157LLU;
	int64_t x220 = -16452007LL;
	int64_t t26 = 148LL;

	t26 = (x217%((x218<=x219)%x220));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x221 = 6U;
	volatile uint32_t x222 = 324432196U;
	int16_t x223 = -1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t27 = 109;

	t27 = (x221%((x222<=x223)%x224));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x226 = -8312303LL;
	static volatile int64_t x227 = 44136931105667870LL;
	uint8_t x228 = UINT8_MAX;
	volatile int64_t t28 = -496638307878LL;

	t28 = (x225%((x226<=x227)%x228));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x229 = INT64_MIN;
	uint8_t x230 = 6U;
	volatile int16_t x231 = INT16_MAX;
	uint8_t x232 = 79U;
	int64_t t29 = 3913650759LL;

	t29 = (x229%((x230<=x231)%x232));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x233 = INT8_MIN;
	static uint32_t x234 = 23359969U;
	int8_t x235 = -1;
	int16_t x236 = INT16_MAX;
	int32_t t30 = 0;

	t30 = (x233%((x234<=x235)%x236));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = -87690061113354874LL;
	static volatile int64_t x239 = 816940807722LL;
	int32_t x240 = -1736;

	t31 = (x237%((x238<=x239)%x240));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x245 = UINT32_MAX;
	int32_t x246 = -488;
	volatile int16_t x247 = INT16_MAX;
	volatile uint64_t x248 = 251236846LLU;

	t32 = (x245%((x246<=x247)%x248));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x249 = -1;
	int8_t x251 = 63;
	uint32_t x252 = UINT32_MAX;
	uint32_t t33 = 7473U;

	t33 = (x249%((x250<=x251)%x252));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x253 = 1LLU;
	uint64_t x254 = 555569864260LLU;
	int8_t x255 = -1;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t34 = 76974707LLU;

	t34 = (x253%((x254<=x255)%x256));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x260 = UINT16_MAX;
	int32_t t35 = -436189;

	t35 = (x257%((x258<=x259)%x260));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x265 = INT32_MAX;
	int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	static int8_t x268 = 7;
	int32_t t36 = -932;

	t36 = (x265%((x266<=x267)%x268));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x285 = INT16_MAX;
	volatile int64_t x286 = INT64_MIN;
	int8_t x287 = INT8_MIN;
	uint16_t x288 = 585U;

	t37 = (x285%((x286<=x287)%x288));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x289 = INT32_MIN;
	int8_t x290 = -1;
	int64_t x291 = 546642109LL;
	int8_t x292 = INT8_MAX;
	static volatile int32_t t38 = -150426675;

	t38 = (x289%((x290<=x291)%x292));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x313 = 13937;
	int64_t x314 = INT64_MIN;
	uint64_t x315 = UINT64_MAX;
	uint8_t x316 = 40U;
	int32_t t39 = -3077;

	t39 = (x313%((x314<=x315)%x316));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x321 = INT32_MAX;
	int16_t x322 = -1;
	static int8_t x323 = -1;
	int32_t x324 = INT32_MIN;
	int32_t t40 = 167710;

	t40 = (x321%((x322<=x323)%x324));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x325 = -78009683;
	volatile int64_t x326 = -1LL;
	int64_t x327 = INT64_MAX;
	uint32_t x328 = 2024U;
	static volatile uint32_t t41 = 0U;

	t41 = (x325%((x326<=x327)%x328));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MIN;
	static uint8_t x339 = 0U;
	int8_t x340 = INT8_MIN;

	t42 = (x337%((x338<=x339)%x340));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x345 = -1LL;
	int64_t x346 = INT64_MIN;
	int32_t x347 = 5151941;
	uint16_t x348 = 1917U;
	volatile int64_t t43 = 2500112442056326LL;

	t43 = (x345%((x346<=x347)%x348));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x353 = 28U;
	static int32_t x354 = -501;
	int64_t x355 = INT64_MAX;
	uint64_t x356 = UINT64_MAX;
	uint64_t t44 = 8584894444LLU;

	t44 = (x353%((x354<=x355)%x356));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x357 = 69958253079498LLU;
	volatile int8_t x358 = INT8_MAX;
	static uint32_t x359 = 3488U;
	uint32_t x360 = 1008U;
	volatile uint64_t t45 = 87LLU;

	t45 = (x357%((x358<=x359)%x360));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x373 = -1;
	uint8_t x374 = UINT8_MAX;
	volatile uint64_t x375 = 1119470399LLU;
	volatile int64_t t46 = 21917715954957578LL;

	t46 = (x373%((x374<=x375)%x376));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x377 = INT64_MAX;
	int32_t x378 = INT32_MIN;
	int8_t x380 = INT8_MIN;
	int64_t t47 = 316123145945746LL;

	t47 = (x377%((x378<=x379)%x380));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x385 = 290U;
	uint8_t x386 = UINT8_MAX;
	uint8_t x387 = UINT8_MAX;
	volatile int64_t x388 = INT64_MIN;
	volatile int64_t t48 = 10LL;

	t48 = (x385%((x386<=x387)%x388));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x390 = -42161156328LL;
	uint32_t x391 = 150114474U;
	uint64_t x392 = 6568LLU;
	uint64_t t49 = 10679636293580589LLU;

	t49 = (x389%((x390<=x391)%x392));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x409 = INT64_MIN;
	int64_t x410 = -1LL;
	int64_t x412 = -396924LL;
	volatile int64_t t50 = -15LL;

	t50 = (x409%((x410<=x411)%x412));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x414 = -1410423577LL;
	uint32_t x415 = UINT32_MAX;
	int32_t x416 = 117485;
	int32_t t51 = 1;

	t51 = (x413%((x414<=x415)%x416));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x429 = 49U;
	volatile int16_t x430 = -13597;
	static uint16_t x432 = UINT16_MAX;
	volatile int32_t t52 = -407502;

	t52 = (x429%((x430<=x431)%x432));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x441 = 3642;
	int16_t x442 = 301;
	uint16_t x444 = UINT16_MAX;
	static volatile int32_t t53 = 241;

	t53 = (x441%((x442<=x443)%x444));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x445 = 380197957LLU;
	int64_t x446 = INT64_MIN;
	volatile int8_t x447 = 12;
	volatile int64_t x448 = -17231582326194LL;

	t54 = (x445%((x446<=x447)%x448));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x450 = 6;
	volatile int16_t x451 = INT16_MAX;
	static uint64_t x452 = 6LLU;
	volatile uint64_t t55 = 3335LLU;

	t55 = (x449%((x450<=x451)%x452));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x459 = -1;
	uint64_t x460 = 120044LLU;
	static uint64_t t56 = 532LLU;

	t56 = (x457%((x458<=x459)%x460));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x461 = -13283;
	int64_t x462 = INT64_MIN;
	uint8_t x463 = UINT8_MAX;
	static int32_t t57 = -1315258;

	t57 = (x461%((x462<=x463)%x464));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x466 = -1;
	static int8_t x467 = INT8_MAX;
	int64_t t58 = 101121942846288818LL;

	t58 = (x465%((x466<=x467)%x468));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x477 = INT8_MIN;
	static uint64_t x479 = 377659269052730LLU;
	int8_t x480 = INT8_MAX;
	volatile int32_t t59 = -995;

	t59 = (x477%((x478<=x479)%x480));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x493 = INT64_MAX;
	int16_t x494 = INT16_MIN;
	int8_t x495 = -1;
	int16_t x496 = INT16_MIN;
	volatile int64_t t60 = 82887175LL;

	t60 = (x493%((x494<=x495)%x496));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x509 = 1U;
	int64_t x510 = INT64_MIN;
	volatile int64_t x511 = INT64_MIN;
	uint8_t x512 = UINT8_MAX;
	volatile int32_t t61 = -4694975;

	t61 = (x509%((x510<=x511)%x512));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x533 = -1LL;
	int64_t x534 = INT64_MAX;
	uint64_t x535 = UINT64_MAX;
	uint16_t x536 = 76U;
	volatile int64_t t62 = 1LL;

	t62 = (x533%((x534<=x535)%x536));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x541 = -22;
	static volatile int8_t x542 = -29;
	int16_t x543 = 10779;
	volatile int64_t x544 = INT64_MIN;
	volatile int64_t t63 = -4577783353239376LL;

	t63 = (x541%((x542<=x543)%x544));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x557 = UINT64_MAX;
	int16_t x558 = 7192;
	static int64_t x559 = INT64_MAX;
	int64_t x560 = -6LL;
	volatile uint64_t t64 = 18LLU;

	t64 = (x557%((x558<=x559)%x560));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x573 = INT64_MIN;
	uint8_t x574 = 3U;
	int32_t x576 = INT32_MIN;
	int64_t t65 = 13760180LL;

	t65 = (x573%((x574<=x575)%x576));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x577 = -21;
	int8_t x578 = INT8_MAX;
	volatile int32_t x579 = INT32_MAX;
	uint64_t x580 = 18LLU;
	uint64_t t66 = 103LLU;

	t66 = (x577%((x578<=x579)%x580));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x581 = 987880162LLU;
	volatile int8_t x582 = 0;
	int32_t x583 = INT32_MAX;
	static int8_t x584 = INT8_MIN;
	volatile uint64_t t67 = 6LLU;

	t67 = (x581%((x582<=x583)%x584));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x587 = INT8_MIN;
	uint32_t x588 = 3U;
	static uint32_t t68 = 5239U;

	t68 = (x585%((x586<=x587)%x588));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x597 = INT16_MIN;
	int64_t x598 = INT64_MIN;
	int16_t x600 = INT16_MIN;
	int32_t t69 = -349705097;

	t69 = (x597%((x598<=x599)%x600));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x601 = INT16_MIN;
	int8_t x602 = INT8_MIN;
	int32_t x603 = INT32_MAX;
	volatile int8_t x604 = INT8_MIN;
	volatile int32_t t70 = -40173;

	t70 = (x601%((x602<=x603)%x604));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x623 = -1;
	volatile int32_t x624 = -36;

	t71 = (x621%((x622<=x623)%x624));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x625 = INT64_MIN;
	volatile int32_t x626 = -1023938;
	volatile uint16_t x628 = UINT16_MAX;
	volatile int64_t t72 = 837LL;

	t72 = (x625%((x626<=x627)%x628));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x629 = 48LL;
	int32_t x630 = INT32_MIN;
	static int64_t x631 = INT64_MAX;
	int32_t x632 = INT32_MIN;
	int64_t t73 = -16762403551LL;

	t73 = (x629%((x630<=x631)%x632));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x633 = INT8_MIN;
	uint16_t x634 = 7U;
	int32_t x635 = INT32_MAX;
	uint32_t x636 = 1690U;
	uint32_t t74 = 256998066U;

	t74 = (x633%((x634<=x635)%x636));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x641 = INT8_MIN;
	int16_t x642 = INT16_MIN;
	static int64_t x643 = INT64_MAX;
	int32_t x644 = 124184;
	static volatile int32_t t75 = 76216960;

	t75 = (x641%((x642<=x643)%x644));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x654 = INT16_MIN;
	static uint16_t x655 = 49U;
	static int16_t x656 = 72;
	volatile int32_t t76 = 1297;

	t76 = (x653%((x654<=x655)%x656));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x669 = INT32_MIN;
	int16_t x670 = 0;
	int16_t x671 = 2862;
	static uint32_t x672 = 10U;
	static volatile uint32_t t77 = 31U;

	t77 = (x669%((x670<=x671)%x672));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x673 = INT16_MAX;
	int64_t x674 = 99609447954LL;
	volatile int64_t x675 = INT64_MAX;
	volatile int8_t x676 = INT8_MIN;
	int32_t t78 = -29286;

	t78 = (x673%((x674<=x675)%x676));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x677 = INT8_MIN;
	static int16_t x678 = -766;
	static int16_t x679 = -26;
	int32_t t79 = 38906;

	t79 = (x677%((x678<=x679)%x680));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x685 = -1;
	volatile int64_t x687 = 2044763479057LL;
	static int32_t t80 = -37;

	t80 = (x685%((x686<=x687)%x688));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x689 = -1;
	int32_t x690 = -1;
	int64_t t81 = 29604740445LL;

	t81 = (x689%((x690<=x691)%x692));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x713 = UINT16_MAX;
	int32_t x714 = INT32_MIN;
	int32_t x715 = -84825;
	int8_t x716 = INT8_MIN;

	t82 = (x713%((x714<=x715)%x716));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x721 = INT8_MIN;
	static int8_t x722 = -1;
	uint16_t x723 = UINT16_MAX;
	volatile uint16_t x724 = UINT16_MAX;
	int32_t t83 = -2;

	t83 = (x721%((x722<=x723)%x724));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x729 = INT16_MIN;
	volatile int32_t x731 = -1;

	t84 = (x729%((x730<=x731)%x732));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x734 = UINT8_MAX;
	uint64_t x735 = UINT64_MAX;
	int32_t x736 = INT32_MAX;
	static volatile int32_t t85 = -1;

	t85 = (x733%((x734<=x735)%x736));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x737 = 55386858170545067LL;
	static uint8_t x739 = 3U;
	uint32_t x740 = 1229253U;
	int64_t t86 = 324050LL;

	t86 = (x737%((x738<=x739)%x740));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x741 = 85578703U;
	volatile int16_t x742 = -84;
	static int8_t x744 = INT8_MIN;

	t87 = (x741%((x742<=x743)%x744));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x761 = INT32_MAX;
	int32_t x762 = INT32_MAX;
	volatile int64_t x763 = INT64_MAX;
	int64_t x764 = INT64_MIN;
	volatile int64_t t88 = 3867544LL;

	t88 = (x761%((x762<=x763)%x764));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x769 = -1210;
	int16_t x770 = INT16_MIN;
	int64_t x771 = INT64_MAX;
	uint8_t x772 = 19U;
	int32_t t89 = 91;

	t89 = (x769%((x770<=x771)%x772));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x773 = INT32_MAX;
	int8_t x774 = INT8_MIN;
	volatile int16_t x775 = INT16_MAX;
	int16_t x776 = INT16_MIN;
	volatile int32_t t90 = -67689480;

	t90 = (x773%((x774<=x775)%x776));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x777 = UINT8_MAX;
	int64_t x778 = INT64_MIN;
	int16_t x779 = INT16_MIN;
	uint64_t t91 = 152924LLU;

	t91 = (x777%((x778<=x779)%x780));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x785 = INT64_MAX;
	uint16_t x787 = 0U;
	volatile int64_t t92 = -4030548194LL;

	t92 = (x785%((x786<=x787)%x788));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x789 = 43U;
	int32_t t93 = 12;

	t93 = (x789%((x790<=x791)%x792));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x793 = INT16_MIN;
	int32_t x794 = INT32_MIN;
	int16_t x795 = 159;
	volatile uint8_t x796 = UINT8_MAX;
	static volatile int32_t t94 = 2749969;

	t94 = (x793%((x794<=x795)%x796));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x797 = 1699384LL;
	static int64_t x798 = -1LL;
	int32_t x799 = -1;
	uint8_t x800 = 110U;
	volatile int64_t t95 = -35839LL;

	t95 = (x797%((x798<=x799)%x800));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x801 = 824924380660718LLU;
	int32_t x802 = -4;
	int16_t x803 = INT16_MAX;
	int32_t x804 = INT32_MIN;

	t96 = (x801%((x802<=x803)%x804));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x811 = INT8_MIN;
	volatile uint64_t x812 = UINT64_MAX;
	uint64_t t97 = 182816434LLU;

	t97 = (x809%((x810<=x811)%x812));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x813 = INT64_MIN;
	volatile uint8_t x814 = UINT8_MAX;
	uint16_t x816 = 234U;
	volatile int64_t t98 = -3799373410113456LL;

	t98 = (x813%((x814<=x815)%x816));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x821 = 0U;
	int32_t x822 = -1;
	volatile int16_t x824 = INT16_MIN;
	volatile int32_t t99 = -13;

	t99 = (x821%((x822<=x823)%x824));

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

