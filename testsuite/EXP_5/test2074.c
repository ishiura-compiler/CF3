#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x9 = 1;
static int32_t x23 = -1;
int8_t x62 = INT8_MAX;
int8_t x109 = INT8_MAX;
int32_t t4 = -548437;
static uint32_t x121 = 638694U;
uint32_t x137 = 1U;
static uint8_t x145 = 9U;
int8_t x147 = -1;
uint8_t x177 = UINT8_MAX;
int8_t x180 = -1;
volatile uint32_t t12 = UINT32_MAX;
uint8_t x219 = 15U;
volatile int32_t x221 = 113994959;
static volatile int8_t x222 = INT8_MIN;
volatile int16_t x231 = INT16_MIN;
volatile uint8_t x232 = 54U;
static int8_t x234 = 0;
volatile int32_t t17 = INT32_MAX;
volatile uint8_t x250 = 14U;
int32_t x297 = INT32_MAX;
static volatile int32_t t22 = INT32_MAX;
volatile uint32_t x333 = 7U;
volatile int32_t x336 = -107642;
int8_t x348 = INT8_MAX;
volatile int32_t t26 = -20251;
static int32_t x353 = INT32_MAX;
volatile uint32_t t30 = UINT32_MAX;
int32_t x392 = INT32_MIN;
uint64_t t31 = 215LLU;
static int32_t x404 = -130754;
int64_t x416 = INT64_MAX;
volatile int32_t t33 = -658269;
static uint16_t x455 = UINT16_MAX;
int64_t x456 = INT64_MIN;
static int8_t x466 = -1;
int32_t x476 = INT32_MIN;
volatile int16_t x496 = -4;
int16_t x500 = INT16_MIN;
int32_t t43 = INT32_MAX;
static volatile uint16_t x535 = 227U;
uint16_t x547 = UINT16_MAX;
uint8_t x553 = 1U;
static uint64_t x566 = 776349114421LLU;
static uint16_t x570 = 47U;
static volatile uint32_t t50 = 30U;
uint64_t x575 = UINT64_MAX;
int64_t x588 = INT64_MIN;
uint64_t x590 = 192556LLU;
uint32_t x594 = 1040229U;
static int32_t x607 = 80455;
uint64_t x632 = 8LLU;
uint16_t x633 = UINT16_MAX;
static int32_t t58 = 182568;
volatile int64_t x652 = INT64_MIN;
int8_t x679 = 1;
int64_t x692 = INT64_MAX;
uint8_t x693 = UINT8_MAX;
int64_t x696 = INT64_MIN;
int64_t x714 = INT64_MAX;
volatile uint64_t x716 = UINT64_MAX;
static int32_t t65 = -1;
uint64_t x732 = 146852860401857878LLU;
volatile int32_t t68 = -593595723;
uint32_t x756 = 2543U;
int32_t t69 = -37089412;
int8_t x784 = -1;
int8_t x795 = INT8_MAX;
volatile uint64_t t73 = 25015822LLU;
int16_t x801 = INT16_MAX;
uint16_t x819 = 10U;
int32_t x861 = 385937386;
int8_t x862 = 0;
int16_t x889 = INT16_MAX;
volatile int32_t x894 = INT32_MAX;
int8_t x936 = -1;
volatile int8_t x947 = 0;
uint16_t x982 = 208U;
int16_t x984 = 8542;
static int64_t t91 = 3892749234517657LL;
static volatile int64_t x988 = INT64_MAX;
int32_t x989 = INT32_MAX;
uint16_t x1016 = 6179U;
static volatile int32_t t94 = -58255;
static int64_t x1027 = -6524898LL;
int32_t t95 = INT32_MAX;
int32_t x1042 = INT32_MIN;
static uint32_t x1043 = UINT32_MAX;
uint8_t x1053 = 43U;
uint16_t x1055 = UINT16_MAX;
volatile int32_t x1066 = -36650;
volatile int32_t t99 = -975525;


void f0(void) {
	int8_t x10 = INT8_MIN;
	uint64_t x11 = 128257588LLU;
	int16_t x12 = -1;
	static int32_t t0 = 19322491;

	t0 = (x9>>((x10^x11)/x12));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x21 = 6816;
	volatile int32_t x22 = INT32_MIN;
	int32_t x24 = INT32_MIN;
	volatile int32_t t1 = 4875196;

	t1 = (x21>>((x22^x23)/x24));

	if (t1 != 6816) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x61 = 63U;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = INT64_MIN;
	int32_t t2 = -69;

	t2 = (x61>>((x62^x63)/x64));

	if (t2 != 31) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x93 = 1;
	volatile uint32_t x94 = 662047U;
	int32_t x95 = 0;
	int64_t x96 = INT64_MAX;
	static int32_t t3 = -109;

	t3 = (x93>>((x94^x95)/x96));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x110 = 1654U;
	static int16_t x111 = INT16_MAX;
	uint16_t x112 = UINT16_MAX;

	t4 = (x109>>((x110^x111)/x112));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x122 = 0;
	volatile int8_t x123 = INT8_MAX;
	int64_t x124 = -3571116814239193271LL;
	volatile uint32_t t5 = 79U;

	t5 = (x121>>((x122^x123)/x124));

	if (t5 != 638694U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x129 = 1U;
	uint32_t x130 = 557824294U;
	uint32_t x131 = 145447398U;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t6 = 6234;

	t6 = (x129>>((x130^x131)/x132));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x133 = INT64_MAX;
	uint8_t x134 = UINT8_MAX;
	int16_t x135 = -1;
	uint16_t x136 = UINT16_MAX;
	static volatile int64_t t7 = INT64_MAX;

	t7 = (x133>>((x134^x135)/x136));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x138 = 8307;
	uint64_t x139 = UINT64_MAX;
	volatile uint64_t x140 = UINT64_MAX;
	volatile uint32_t t8 = 1U;

	t8 = (x137>>((x138^x139)/x140));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x146 = 301LL;
	uint16_t x148 = UINT16_MAX;
	int32_t t9 = 52510;

	t9 = (x145>>((x146^x147)/x148));

	if (t9 != 9) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x169 = UINT16_MAX;
	volatile uint64_t x170 = UINT64_MAX;
	static int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MIN;
	int32_t t10 = 14749;

	t10 = (x169>>((x170^x171)/x172));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x178 = 10U;
	int32_t x179 = INT32_MAX;
	static int32_t t11 = -337089399;

	t11 = (x177>>((x178^x179)/x180));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x193 = UINT32_MAX;
	static int8_t x194 = -1;
	uint16_t x195 = 55U;
	int32_t x196 = INT32_MIN;

	t12 = (x193>>((x194^x195)/x196));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x217 = 1;
	int32_t x218 = 1;
	uint64_t x220 = 763198344LLU;
	volatile int32_t t13 = 81483;

	t13 = (x217>>((x218^x219)/x220));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x223 = 2U;
	int8_t x224 = -1;
	int32_t t14 = -8133438;

	t14 = (x221>>((x222^x223)/x224));

	if (t14 != 113994959) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x225 = UINT8_MAX;
	uint8_t x226 = 118U;
	int32_t x227 = 3494;
	int64_t x228 = INT64_MIN;
	int32_t t15 = 3;

	t15 = (x225>>((x226^x227)/x228));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x229 = INT32_MAX;
	int16_t x230 = INT16_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x229>>((x230^x231)/x232));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x233 = INT32_MAX;
	int8_t x235 = 1;
	uint32_t x236 = 206825U;

	t17 = (x233>>((x234^x235)/x236));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x249 = 1U;
	uint64_t x251 = 66399321LLU;
	static uint64_t x252 = UINT64_MAX;
	static volatile int32_t t18 = -488026345;

	t18 = (x249>>((x250^x251)/x252));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x257 = 5U;
	volatile int8_t x258 = INT8_MIN;
	int64_t x259 = -1LL;
	volatile int16_t x260 = -5360;
	static volatile int32_t t19 = -160798014;

	t19 = (x257>>((x258^x259)/x260));

	if (t19 != 5) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x265 = 1;
	volatile uint16_t x266 = UINT16_MAX;
	volatile int32_t x267 = -1;
	int16_t x268 = INT16_MIN;
	int32_t t20 = -8097976;

	t20 = (x265>>((x266^x267)/x268));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x273 = 14LL;
	int8_t x274 = INT8_MIN;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = 396677202U;
	volatile int64_t t21 = -44427643LL;

	t21 = (x273>>((x274^x275)/x276));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x298 = 1;
	int16_t x299 = INT16_MAX;
	volatile uint32_t x300 = UINT32_MAX;

	t22 = (x297>>((x298^x299)/x300));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x305 = 60533U;
	static int8_t x306 = INT8_MIN;
	static uint32_t x307 = 1977U;
	int16_t x308 = -1;
	static uint32_t t23 = 229730324U;

	t23 = (x305>>((x306^x307)/x308));

	if (t23 != 60533U) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x313 = INT8_MAX;
	uint16_t x314 = 292U;
	int16_t x315 = 0;
	int64_t x316 = -130768LL;
	int32_t t24 = -11;

	t24 = (x313>>((x314^x315)/x316));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x334 = 2084U;
	uint64_t x335 = 138658640LLU;
	static volatile uint32_t t25 = 266048444U;

	t25 = (x333>>((x334^x335)/x336));

	if (t25 != 7U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x345 = 123U;
	static uint16_t x346 = 8U;
	int64_t x347 = -1LL;

	t26 = (x345>>((x346^x347)/x348));

	if (t26 != 123) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x349 = UINT64_MAX;
	static uint16_t x350 = 6432U;
	uint16_t x351 = 588U;
	int32_t x352 = 12542;
	uint64_t t27 = UINT64_MAX;

	t27 = (x349>>((x350^x351)/x352));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x354 = -1;
	uint8_t x355 = 5U;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t28 = INT32_MAX;

	t28 = (x353>>((x354^x355)/x356));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x365 = INT64_MAX;
	volatile int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	int16_t x368 = -142;
	int64_t t29 = INT64_MAX;

	t29 = (x365>>((x366^x367)/x368));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x373 = UINT32_MAX;
	uint16_t x374 = UINT16_MAX;
	int32_t x375 = -2376935;
	int64_t x376 = -564882700300156595LL;

	t30 = (x373>>((x374^x375)/x376));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x389 = 1LLU;
	int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MIN;

	t31 = (x389>>((x390^x391)/x392));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x401 = UINT16_MAX;
	static int16_t x402 = -46;
	static uint16_t x403 = 85U;
	int32_t t32 = 51286;

	t32 = (x401>>((x402^x403)/x404));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x413 = 2592;
	int16_t x414 = -4;
	int8_t x415 = -1;

	t33 = (x413>>((x414^x415)/x416));

	if (t33 != 2592) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x437 = 23;
	uint16_t x438 = UINT16_MAX;
	int16_t x439 = INT16_MAX;
	uint16_t x440 = UINT16_MAX;
	int32_t t34 = -7701;

	t34 = (x437>>((x438^x439)/x440));

	if (t34 != 23) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x453 = 160523LLU;
	uint16_t x454 = 13U;
	uint64_t t35 = 341629426LLU;

	t35 = (x453>>((x454^x455)/x456));

	if (t35 != 160523LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x457 = INT64_MAX;
	int32_t x458 = INT32_MAX;
	static int32_t x459 = INT32_MIN;
	int64_t x460 = -1LL;
	static int64_t t36 = 12209009LL;

	t36 = (x457>>((x458^x459)/x460));

	if (t36 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x465 = 56763578873953LL;
	int16_t x467 = -1;
	volatile int16_t x468 = 5;
	volatile int64_t t37 = -20113168LL;

	t37 = (x465>>((x466^x467)/x468));

	if (t37 != 56763578873953LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x473 = 239855U;
	uint32_t x474 = UINT32_MAX;
	uint16_t x475 = UINT16_MAX;
	uint32_t t38 = 1724205226U;

	t38 = (x473>>((x474^x475)/x476));

	if (t38 != 119927U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x477 = 15U;
	int8_t x478 = -1;
	static uint32_t x479 = 38561U;
	int32_t x480 = INT32_MAX;
	int32_t t39 = 1206;

	t39 = (x477>>((x478^x479)/x480));

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x481 = UINT64_MAX;
	volatile int16_t x482 = INT16_MAX;
	uint64_t x483 = 5971680297947LLU;
	static int32_t x484 = -1;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x481>>((x482^x483)/x484));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x489 = INT16_MAX;
	volatile int64_t x490 = 7LL;
	int16_t x491 = INT16_MIN;
	int32_t x492 = -825214;
	int32_t t41 = 903;

	t41 = (x489>>((x490^x491)/x492));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x493 = 2U;
	volatile uint32_t x494 = UINT32_MAX;
	uint16_t x495 = UINT16_MAX;
	static volatile uint32_t t42 = 93U;

	t42 = (x493>>((x494^x495)/x496));

	if (t42 != 2U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x497 = INT32_MAX;
	static uint64_t x498 = 43855582797683579LLU;
	static int64_t x499 = INT64_MIN;

	t43 = (x497>>((x498^x499)/x500));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x501 = INT64_MAX;
	uint64_t x502 = 89716423LLU;
	volatile int64_t x503 = 5875899LL;
	int32_t x504 = INT32_MIN;
	int64_t t44 = INT64_MAX;

	t44 = (x501>>((x502^x503)/x504));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x525 = 7U;
	int16_t x526 = -1;
	int16_t x527 = -1;
	uint16_t x528 = 964U;
	volatile int32_t t45 = 1;

	t45 = (x525>>((x526^x527)/x528));

	if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x533 = 57583U;
	int32_t x534 = INT32_MAX;
	volatile int32_t x536 = INT32_MIN;
	volatile uint32_t t46 = 9U;

	t46 = (x533>>((x534^x535)/x536));

	if (t46 != 57583U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x545 = INT16_MAX;
	int8_t x546 = -1;
	uint64_t x548 = UINT64_MAX;
	volatile int32_t t47 = 2;

	t47 = (x545>>((x546^x547)/x548));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x554 = INT8_MIN;
	int8_t x555 = INT8_MIN;
	volatile int16_t x556 = INT16_MIN;
	static volatile int32_t t48 = 15;

	t48 = (x553>>((x554^x555)/x556));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x565 = 164;
	volatile int64_t x567 = INT64_MIN;
	int64_t x568 = -1LL;
	volatile int32_t t49 = 126;

	t49 = (x565>>((x566^x567)/x568));

	if (t49 != 164) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x569 = 978547106U;
	volatile int8_t x571 = 8;
	static volatile uint16_t x572 = 103U;

	t50 = (x569>>((x570^x571)/x572));

	if (t50 != 978547106U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x573 = 12U;
	volatile int8_t x574 = INT8_MIN;
	static int8_t x576 = -1;
	volatile uint32_t t51 = 327191U;

	t51 = (x573>>((x574^x575)/x576));

	if (t51 != 12U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x585 = 1979U;
	uint64_t x586 = UINT64_MAX;
	int16_t x587 = INT16_MIN;
	int32_t t52 = -3;

	t52 = (x585>>((x586^x587)/x588));

	if (t52 != 1979) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x589 = 16272730U;
	int8_t x591 = INT8_MAX;
	int64_t x592 = -11983896LL;
	static volatile uint32_t t53 = 177318U;

	t53 = (x589>>((x590^x591)/x592));

	if (t53 != 16272730U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x593 = 118U;
	static int16_t x595 = 6;
	static int32_t x596 = INT32_MIN;
	volatile int32_t t54 = 89147;

	t54 = (x593>>((x594^x595)/x596));

	if (t54 != 118) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x605 = INT16_MAX;
	volatile int8_t x606 = -5;
	int64_t x608 = INT64_MIN;
	volatile int32_t t55 = -218826954;

	t55 = (x605>>((x606^x607)/x608));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x609 = 149U;
	int16_t x610 = -1;
	uint8_t x611 = 0U;
	uint8_t x612 = 11U;
	volatile uint32_t t56 = 1145690U;

	t56 = (x609>>((x610^x611)/x612));

	if (t56 != 149U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x629 = UINT64_MAX;
	uint64_t x630 = UINT64_MAX;
	int8_t x631 = INT8_MIN;
	uint64_t t57 = 100258607624308LLU;

	t57 = (x629>>((x630^x631)/x632));

	if (t57 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MAX;
	int16_t x636 = -1;

	t58 = (x633>>((x634^x635)/x636));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x649 = INT32_MAX;
	uint8_t x650 = UINT8_MAX;
	uint64_t x651 = 24376589052204LLU;
	int32_t t59 = INT32_MAX;

	t59 = (x649>>((x650^x651)/x652));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x657 = UINT16_MAX;
	volatile int16_t x658 = 12028;
	int64_t x659 = -289LL;
	volatile int64_t x660 = 2203298250717506LL;
	int32_t t60 = -1778074;

	t60 = (x657>>((x658^x659)/x660));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x665 = 0U;
	uint16_t x666 = UINT16_MAX;
	volatile int32_t x667 = -10;
	int32_t x668 = 281921084;
	static int32_t t61 = 3050;

	t61 = (x665>>((x666^x667)/x668));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x677 = 12U;
	volatile int32_t x678 = -1;
	uint8_t x680 = UINT8_MAX;
	int32_t t62 = -1;

	t62 = (x677>>((x678^x679)/x680));

	if (t62 != 12) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x689 = 2226U;
	uint32_t x690 = 93757U;
	uint8_t x691 = UINT8_MAX;
	int32_t t63 = 823025;

	t63 = (x689>>((x690^x691)/x692));

	if (t63 != 2226) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x694 = INT8_MIN;
	static uint32_t x695 = 352017716U;
	volatile int32_t t64 = 2187664;

	t64 = (x693>>((x694^x695)/x696));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x713 = 23929U;
	uint16_t x715 = 1996U;

	t65 = (x713>>((x714^x715)/x716));

	if (t65 != 23929) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x729 = INT16_MAX;
	int32_t x730 = -623;
	int8_t x731 = INT8_MIN;
	volatile int32_t t66 = -2773220;

	t66 = (x729>>((x730^x731)/x732));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x741 = INT32_MAX;
	int8_t x742 = 0;
	int32_t x743 = 32231;
	static int64_t x744 = 39303221814LL;
	int32_t t67 = INT32_MAX;

	t67 = (x741>>((x742^x743)/x744));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x745 = UINT16_MAX;
	uint8_t x746 = 0U;
	volatile int8_t x747 = INT8_MAX;
	int64_t x748 = 14936LL;

	t68 = (x745>>((x746^x747)/x748));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x753 = UINT8_MAX;
	int64_t x754 = -1LL;
	int16_t x755 = -1;

	t69 = (x753>>((x754^x755)/x756));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x757 = INT8_MAX;
	static volatile uint16_t x758 = 117U;
	int32_t x759 = -1;
	static int64_t x760 = INT64_MIN;
	volatile int32_t t70 = 6386075;

	t70 = (x757>>((x758^x759)/x760));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x781 = INT32_MAX;
	int8_t x782 = -5;
	int32_t x783 = 12;
	volatile int32_t t71 = -617348832;

	t71 = (x781>>((x782^x783)/x784));

	if (t71 != 4194303) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x789 = INT64_MAX;
	static int8_t x790 = INT8_MIN;
	int8_t x791 = -1;
	int16_t x792 = -1754;
	volatile int64_t t72 = INT64_MAX;

	t72 = (x789>>((x790^x791)/x792));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x793 = 252446979LLU;
	volatile int32_t x794 = INT32_MAX;
	int64_t x796 = INT64_MIN;

	t73 = (x793>>((x794^x795)/x796));

	if (t73 != 252446979LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x802 = UINT64_MAX;
	int8_t x803 = INT8_MAX;
	static volatile int8_t x804 = -3;
	int32_t t74 = 1800830;

	t74 = (x801>>((x802^x803)/x804));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x809 = UINT64_MAX;
	int32_t x810 = -127701;
	int8_t x811 = -1;
	int32_t x812 = INT32_MIN;
	uint64_t t75 = UINT64_MAX;

	t75 = (x809>>((x810^x811)/x812));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x813 = INT16_MAX;
	int16_t x814 = INT16_MIN;
	static int16_t x815 = INT16_MIN;
	int16_t x816 = 337;
	volatile int32_t t76 = 121;

	t76 = (x813>>((x814^x815)/x816));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x817 = INT32_MAX;
	int64_t x818 = INT64_MAX;
	int64_t x820 = INT64_MIN;
	int32_t t77 = INT32_MAX;

	t77 = (x817>>((x818^x819)/x820));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x829 = 13U;
	int64_t x830 = INT64_MIN;
	int64_t x831 = -1LL;
	int64_t x832 = INT64_MIN;
	int32_t t78 = -102064900;

	t78 = (x829>>((x830^x831)/x832));

	if (t78 != 13) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x837 = 26340U;
	int16_t x838 = 44;
	volatile int16_t x839 = INT16_MIN;
	int32_t x840 = INT32_MIN;
	static int32_t t79 = 3;

	t79 = (x837>>((x838^x839)/x840));

	if (t79 != 26340) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x863 = 19927032;
	volatile uint32_t x864 = 1047896U;
	int32_t t80 = 1;

	t80 = (x861>>((x862^x863)/x864));

	if (t80 != 736) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x885 = 293155601864536LLU;
	uint8_t x886 = 7U;
	int16_t x887 = -1;
	int16_t x888 = -22;
	uint64_t t81 = 3434LLU;

	t81 = (x885>>((x886^x887)/x888));

	if (t81 != 293155601864536LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x890 = UINT32_MAX;
	int8_t x891 = -1;
	volatile uint64_t x892 = UINT64_MAX;
	static volatile int32_t t82 = 96;

	t82 = (x889>>((x890^x891)/x892));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x893 = INT16_MAX;
	int16_t x895 = INT16_MIN;
	uint64_t x896 = UINT64_MAX;
	volatile int32_t t83 = 585259410;

	t83 = (x893>>((x894^x895)/x896));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x905 = INT64_MAX;
	int8_t x906 = 13;
	uint32_t x907 = 84299490U;
	static int8_t x908 = -56;
	volatile int64_t t84 = INT64_MAX;

	t84 = (x905>>((x906^x907)/x908));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x917 = UINT32_MAX;
	volatile int8_t x918 = INT8_MIN;
	static int8_t x919 = INT8_MIN;
	uint32_t x920 = UINT32_MAX;
	uint32_t t85 = UINT32_MAX;

	t85 = (x917>>((x918^x919)/x920));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x921 = 101U;
	static int8_t x922 = -24;
	static uint16_t x923 = UINT16_MAX;
	static int16_t x924 = INT16_MIN;
	volatile int32_t t86 = 1;

	t86 = (x921>>((x922^x923)/x924));

	if (t86 != 50) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x929 = UINT32_MAX;
	static uint16_t x930 = 251U;
	uint16_t x931 = 1437U;
	uint16_t x932 = 978U;
	volatile uint32_t t87 = 9864U;

	t87 = (x929>>((x930^x931)/x932));

	if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x933 = UINT32_MAX;
	uint64_t x934 = 128820LLU;
	volatile int8_t x935 = 0;
	static uint32_t t88 = UINT32_MAX;

	t88 = (x933>>((x934^x935)/x936));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x945 = UINT16_MAX;
	uint32_t x946 = 2936U;
	int32_t x948 = -695;
	int32_t t89 = 1096140;

	t89 = (x945>>((x946^x947)/x948));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x957 = INT32_MAX;
	int8_t x958 = INT8_MIN;
	uint8_t x959 = 24U;
	uint64_t x960 = UINT64_MAX;
	static volatile int32_t t90 = INT32_MAX;

	t90 = (x957>>((x958^x959)/x960));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x981 = 21244LL;
	int16_t x983 = -21;

	t91 = (x981>>((x982^x983)/x984));

	if (t91 != 21244LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x985 = 660024027298LL;
	int32_t x986 = -1;
	volatile int32_t x987 = 762565;
	int64_t t92 = 2117326443644229LL;

	t92 = (x985>>((x986^x987)/x988));

	if (t92 != 660024027298LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x990 = UINT16_MAX;
	uint16_t x991 = UINT16_MAX;
	uint64_t x992 = UINT64_MAX;
	int32_t t93 = INT32_MAX;

	t93 = (x989>>((x990^x991)/x992));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x1013 = 2U;
	volatile uint64_t x1014 = UINT64_MAX;
	int8_t x1015 = -12;

	t94 = (x1013>>((x1014^x1015)/x1016));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1025 = INT32_MAX;
	volatile int16_t x1026 = INT16_MIN;
	uint32_t x1028 = 13763437U;

	t95 = (x1025>>((x1026^x1027)/x1028));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x1029 = 9U;
	uint64_t x1030 = UINT64_MAX;
	int16_t x1031 = -1;
	int64_t x1032 = -411290987843335500LL;
	static volatile int32_t t96 = -115;

	t96 = (x1029>>((x1030^x1031)/x1032));

	if (t96 != 9) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1041 = UINT16_MAX;
	uint64_t x1044 = 191511500179833LLU;
	volatile int32_t t97 = 6217;

	t97 = (x1041>>((x1042^x1043)/x1044));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x1054 = -1LL;
	volatile uint64_t x1056 = UINT64_MAX;
	static int32_t t98 = -120168;

	t98 = (x1053>>((x1054^x1055)/x1056));

	if (t98 != 43) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x1065 = 10036U;
	uint64_t x1067 = 3414206394351325LLU;
	static int16_t x1068 = -30;

	t99 = (x1065>>((x1066^x1067)/x1068));

	if (t99 != 10036) { NG(); } else { ; }
	
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

