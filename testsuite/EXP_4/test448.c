#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x6 = INT8_MIN;
int64_t x7 = -2433027133LL;
uint32_t x33 = 5443U;
volatile int64_t x34 = INT64_MAX;
int32_t t5 = 47806439;
volatile uint16_t x69 = 2514U;
int64_t x70 = INT64_MAX;
uint64_t x80 = UINT64_MAX;
static volatile int64_t x99 = 935LL;
int16_t x100 = INT16_MIN;
int64_t x102 = INT64_MIN;
static volatile uint32_t t10 = 48206147U;
int16_t x116 = INT16_MAX;
int64_t x130 = 45544953LL;
static volatile int8_t x132 = 0;
static uint16_t x173 = 17U;
static int16_t x177 = 176;
uint8_t x180 = UINT8_MAX;
static uint64_t x184 = UINT64_MAX;
static int32_t t19 = 1053011795;
int32_t x203 = INT32_MIN;
uint16_t x208 = UINT16_MAX;
int64_t x222 = 6941718191129997LL;
volatile int32_t t23 = -3;
int8_t x253 = INT8_MAX;
int16_t x298 = INT16_MAX;
int64_t x300 = -1LL;
int8_t x319 = INT8_MAX;
uint32_t x321 = 216779016U;
static int8_t x323 = INT8_MIN;
uint32_t t30 = 2U;
int32_t x346 = INT32_MIN;
uint32_t x371 = UINT32_MAX;
uint16_t x401 = 30U;
volatile uint64_t x403 = 22012904440709LLU;
volatile int64_t x417 = 0LL;
uint64_t x421 = 10107953LLU;
int16_t x422 = INT16_MIN;
uint8_t x423 = 38U;
volatile uint64_t t38 = 21031245540LLU;
int8_t x439 = INT8_MIN;
static int32_t t39 = -459810543;
int32_t x478 = 7472241;
uint16_t x485 = 13496U;
int8_t x488 = INT8_MIN;
int32_t t42 = -886;
uint64_t t43 = 50951741566LLU;
uint32_t x493 = 29U;
static volatile int32_t x494 = INT32_MIN;
static uint16_t x495 = 10U;
volatile int32_t x496 = 1788;
uint64_t x497 = 14778LLU;
volatile int64_t x498 = 905LL;
int8_t x507 = INT8_MIN;
int16_t x518 = -1;
static int16_t x520 = -1;
int32_t t50 = 108659;
uint64_t x537 = 89341LLU;
volatile int16_t x579 = 1;
int64_t x582 = -1LL;
volatile int32_t x606 = -776164614;
uint64_t x609 = 145LLU;
static int16_t x612 = 19;
uint64_t x613 = 1809056953178272329LLU;
int64_t x615 = 12398290147LL;
volatile int16_t x617 = INT16_MAX;
uint32_t x630 = 12170881U;
uint8_t x649 = 1U;
int32_t t63 = -58896553;
int8_t x661 = 30;
uint64_t x681 = UINT64_MAX;
volatile int16_t x689 = 3723;
uint8_t x691 = UINT8_MAX;
int8_t x721 = INT8_MAX;
static int32_t t67 = 32;
static int8_t x731 = 29;
static int16_t x738 = INT16_MIN;
volatile uint8_t x765 = 0U;
volatile int8_t x768 = 1;
volatile int16_t x783 = 1;
uint8_t x785 = UINT8_MAX;
volatile uint64_t x799 = 17378979293LLU;
static uint8_t x822 = 68U;
uint64_t x829 = 5410LLU;
uint64_t x840 = 1864LLU;
static uint64_t x842 = UINT64_MAX;
volatile uint64_t t80 = UINT64_MAX;
volatile uint64_t x866 = 8559957052LLU;
volatile int32_t t82 = -15;
uint16_t x922 = 87U;
int32_t x934 = -7374;
uint16_t x939 = 9U;
static volatile uint32_t x940 = UINT32_MAX;
int16_t x944 = INT16_MIN;
int16_t x965 = 1;
volatile int8_t x966 = -1;
volatile uint8_t x967 = UINT8_MAX;
volatile uint64_t t91 = 1726LLU;
static int32_t t92 = -29;
int16_t x992 = INT16_MAX;
volatile uint32_t t93 = 49U;
volatile int16_t x1016 = -1;
static volatile uint8_t x1027 = 10U;
static int16_t x1028 = 1;
int16_t x1032 = -19;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	uint32_t t0 = UINT32_MAX;

	t0 = (x5<<(x6<(x7*x8)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 244711520;
	static volatile int16_t x10 = -55;
	static uint8_t x11 = 1U;
	int16_t x12 = INT16_MIN;
	static volatile int32_t t1 = 227;

	t1 = (x9<<(x10<(x11*x12)));

	if (t1 != 244711520) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x35 = 46U;
	volatile uint8_t x36 = 4U;
	volatile uint32_t t2 = 23355345U;

	t2 = (x33<<(x34<(x35*x36)));

	if (t2 != 5443U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x41 = 8390;
	uint16_t x42 = 0U;
	int8_t x43 = 0;
	static int8_t x44 = -1;
	int32_t t3 = -29672;

	t3 = (x41<<(x42<(x43*x44)));

	if (t3 != 8390) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x57 = 289205U;
	int16_t x58 = -6;
	volatile uint16_t x59 = 7U;
	static int16_t x60 = INT16_MIN;
	uint32_t t4 = 7711U;

	t4 = (x57<<(x58<(x59*x60)));

	if (t4 != 289205U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x65 = UINT16_MAX;
	static volatile int8_t x66 = INT8_MAX;
	uint32_t x67 = 24750806U;
	int64_t x68 = -1LL;

	t5 = (x65<<(x66<(x67*x68)));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x71 = 1579593622U;
	int8_t x72 = INT8_MAX;
	int32_t t6 = -2;

	t6 = (x69<<(x70<(x71*x72)));

	if (t6 != 2514) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x77 = 3758U;
	int64_t x78 = INT64_MIN;
	volatile uint32_t x79 = 262U;
	int32_t t7 = 66229;

	t7 = (x77<<(x78<(x79*x80)));

	if (t7 != 7516) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x89 = 6U;
	volatile int32_t x90 = -43156;
	volatile int32_t x91 = -1;
	volatile uint16_t x92 = 231U;
	int32_t t8 = 238030614;

	t8 = (x89<<(x90<(x91*x92)));

	if (t8 != 12) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x97 = 4;
	int32_t x98 = 136;
	static volatile int32_t t9 = 0;

	t9 = (x97<<(x98<(x99*x100)));

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x101 = 44549U;
	int16_t x103 = INT16_MIN;
	uint16_t x104 = UINT16_MAX;

	t10 = (x101<<(x102<(x103*x104)));

	if (t10 != 89098U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x113 = UINT8_MAX;
	uint64_t x114 = 98496480550952LLU;
	static uint32_t x115 = 0U;
	volatile int32_t t11 = 25;

	t11 = (x113<<(x114<(x115*x116)));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x129 = INT64_MAX;
	volatile int8_t x131 = INT8_MIN;
	static int64_t t12 = INT64_MAX;

	t12 = (x129<<(x130<(x131*x132)));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x137 = 3U;
	int8_t x138 = INT8_MAX;
	int64_t x139 = -1LL;
	int16_t x140 = INT16_MIN;
	uint32_t t13 = 27959U;

	t13 = (x137<<(x138<(x139*x140)));

	if (t13 != 6U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x153 = 21;
	int64_t x154 = -1LL;
	volatile uint16_t x155 = UINT16_MAX;
	static volatile int16_t x156 = INT16_MIN;
	int32_t t14 = -258021013;

	t14 = (x153<<(x154<(x155*x156)));

	if (t14 != 21) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x157 = 1;
	uint64_t x158 = UINT64_MAX;
	int8_t x159 = 0;
	int8_t x160 = INT8_MAX;
	volatile int32_t t15 = -3481838;

	t15 = (x157<<(x158<(x159*x160)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x169 = 878LLU;
	static uint32_t x170 = 0U;
	static int16_t x171 = -7;
	volatile uint64_t x172 = 376988723493630LLU;
	volatile uint64_t t16 = 402LLU;

	t16 = (x169<<(x170<(x171*x172)));

	if (t16 != 1756LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x174 = UINT16_MAX;
	int16_t x175 = -1;
	uint32_t x176 = 2U;
	volatile int32_t t17 = 6;

	t17 = (x173<<(x174<(x175*x176)));

	if (t17 != 34) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x178 = INT16_MIN;
	volatile int16_t x179 = INT16_MAX;
	int32_t t18 = 8628353;

	t18 = (x177<<(x178<(x179*x180)));

	if (t18 != 352) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x181 = INT16_MAX;
	volatile int8_t x182 = 0;
	uint16_t x183 = 10U;

	t19 = (x181<<(x182<(x183*x184)));

	if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x201 = 234408407;
	int32_t x202 = INT32_MIN;
	uint8_t x204 = 1U;
	volatile int32_t t20 = -199;

	t20 = (x201<<(x202<(x203*x204)));

	if (t20 != 234408407) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x205 = 39662U;
	int32_t x206 = INT32_MIN;
	uint8_t x207 = 2U;
	volatile uint32_t t21 = 0U;

	t21 = (x205<<(x206<(x207*x208)));

	if (t21 != 79324U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x221 = INT16_MAX;
	volatile uint64_t x223 = UINT64_MAX;
	int32_t x224 = INT32_MAX;
	volatile int32_t t22 = 143785;

	t22 = (x221<<(x222<(x223*x224)));

	if (t22 != 65534) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x237 = INT16_MAX;
	int16_t x238 = 403;
	volatile uint64_t x239 = 544295496601LLU;
	int64_t x240 = INT64_MAX;

	t23 = (x237<<(x238<(x239*x240)));

	if (t23 != 65534) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x254 = 19U;
	volatile int64_t x255 = -1LL;
	volatile uint64_t x256 = 20699095964150634LLU;
	volatile int32_t t24 = -1;

	t24 = (x253<<(x254<(x255*x256)));

	if (t24 != 254) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x297 = 1999;
	uint32_t x299 = 0U;
	static volatile int32_t t25 = -1980;

	t25 = (x297<<(x298<(x299*x300)));

	if (t25 != 1999) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x301 = 11175U;
	static int32_t x302 = INT32_MAX;
	static volatile uint64_t x303 = UINT64_MAX;
	int64_t x304 = -4025739814976LL;
	static volatile int32_t t26 = 120;

	t26 = (x301<<(x302<(x303*x304)));

	if (t26 != 22350) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x317 = 1207290403666530LLU;
	int8_t x318 = -1;
	int64_t x320 = -222LL;
	static uint64_t t27 = 300LLU;

	t27 = (x317<<(x318<(x319*x320)));

	if (t27 != 1207290403666530LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x322 = 157LLU;
	uint32_t x324 = 1942712488U;
	static volatile uint32_t t28 = 389350U;

	t28 = (x321<<(x322<(x323*x324)));

	if (t28 != 433558032U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x325 = 29U;
	int64_t x326 = -1LL;
	volatile uint16_t x327 = 784U;
	static volatile uint16_t x328 = UINT16_MAX;
	int32_t t29 = 791;

	t29 = (x325<<(x326<(x327*x328)));

	if (t29 != 58) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x333 = UINT32_MAX;
	volatile uint32_t x334 = 40830629U;
	uint64_t x335 = 3209493535747LLU;
	uint8_t x336 = 7U;

	t30 = (x333<<(x334<(x335*x336)));

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x345 = INT16_MAX;
	uint16_t x347 = 16635U;
	static int64_t x348 = 12761416763314LL;
	volatile int32_t t31 = -3406310;

	t31 = (x345<<(x346<(x347*x348)));

	if (t31 != 65534) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x369 = 211U;
	int32_t x370 = INT32_MAX;
	int8_t x372 = 6;
	uint32_t t32 = 156U;

	t32 = (x369<<(x370<(x371*x372)));

	if (t32 != 422U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x389 = INT8_MAX;
	static volatile int32_t x390 = INT32_MIN;
	int8_t x391 = -5;
	int64_t x392 = -1LL;
	int32_t t33 = 5;

	t33 = (x389<<(x390<(x391*x392)));

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x393 = 2709521U;
	int16_t x394 = INT16_MAX;
	int8_t x395 = -1;
	int16_t x396 = -25;
	uint32_t t34 = 620136U;

	t34 = (x393<<(x394<(x395*x396)));

	if (t34 != 2709521U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x402 = INT64_MIN;
	uint64_t x404 = 4716427257273621LLU;
	int32_t t35 = 338;

	t35 = (x401<<(x402<(x403*x404)));

	if (t35 != 60) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x409 = 3U;
	uint64_t x410 = 117217LLU;
	static uint8_t x411 = 0U;
	int32_t x412 = -7895475;
	int32_t t36 = -7;

	t36 = (x409<<(x410<(x411*x412)));

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x418 = INT64_MAX;
	int16_t x419 = 724;
	static int16_t x420 = 0;
	int64_t t37 = -98783064LL;

	t37 = (x417<<(x418<(x419*x420)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x424 = -1;

	t38 = (x421<<(x422<(x423*x424)));

	if (t38 != 20215906LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x437 = 19U;
	volatile int64_t x438 = INT64_MAX;
	uint8_t x440 = 20U;

	t39 = (x437<<(x438<(x439*x440)));

	if (t39 != 19) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x441 = 77253262599LLU;
	volatile int16_t x442 = 0;
	static int8_t x443 = INT8_MAX;
	int64_t x444 = -1LL;
	uint64_t t40 = 2622900618131LLU;

	t40 = (x441<<(x442<(x443*x444)));

	if (t40 != 77253262599LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x477 = 1873264557U;
	uint16_t x479 = 13979U;
	uint16_t x480 = UINT16_MAX;
	static uint32_t t41 = 971U;

	t41 = (x477<<(x478<(x479*x480)));

	if (t41 != 3746529114U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x486 = -1;
	int8_t x487 = INT8_MIN;

	t42 = (x485<<(x486<(x487*x488)));

	if (t42 != 26992) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x489 = 3176830783481717482LLU;
	uint64_t x490 = 48LLU;
	static int16_t x491 = 1;
	uint64_t x492 = UINT64_MAX;

	t43 = (x489<<(x490<(x491*x492)));

	if (t43 != 6353661566963434964LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t t44 = 1498U;

	t44 = (x493<<(x494<(x495*x496)));

	if (t44 != 58U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x499 = INT16_MIN;
	volatile int8_t x500 = -1;
	uint64_t t45 = 9LLU;

	t45 = (x497<<(x498<(x499*x500)));

	if (t45 != 29556LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x501 = UINT8_MAX;
	int64_t x502 = -2023404444960327LL;
	int16_t x503 = 159;
	uint8_t x504 = UINT8_MAX;
	int32_t t46 = -31;

	t46 = (x501<<(x502<(x503*x504)));

	if (t46 != 510) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x505 = 135090436148343LLU;
	static int8_t x506 = INT8_MIN;
	uint8_t x508 = 3U;
	volatile uint64_t t47 = 184112LLU;

	t47 = (x505<<(x506<(x507*x508)));

	if (t47 != 135090436148343LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x509 = 82LL;
	int8_t x510 = INT8_MIN;
	int16_t x511 = INT16_MIN;
	uint16_t x512 = 19U;
	volatile int64_t t48 = 1121LL;

	t48 = (x509<<(x510<(x511*x512)));

	if (t48 != 82LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x517 = 70869409;
	volatile uint32_t x519 = 1185580U;
	int32_t t49 = 178717;

	t49 = (x517<<(x518<(x519*x520)));

	if (t49 != 70869409) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x521 = 173U;
	int64_t x522 = INT64_MAX;
	volatile uint64_t x523 = 19735890015708LLU;
	uint8_t x524 = 12U;

	t50 = (x521<<(x522<(x523*x524)));

	if (t50 != 173) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x538 = 6;
	int64_t x539 = -342LL;
	volatile int16_t x540 = -36;
	uint64_t t51 = 58601688546105274LLU;

	t51 = (x537<<(x538<(x539*x540)));

	if (t51 != 178682LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x541 = 1U;
	int8_t x542 = INT8_MAX;
	volatile uint32_t x543 = 1U;
	int16_t x544 = INT16_MIN;
	volatile uint32_t t52 = 634U;

	t52 = (x541<<(x542<(x543*x544)));

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x557 = INT16_MAX;
	int8_t x558 = INT8_MAX;
	static uint64_t x559 = UINT64_MAX;
	uint32_t x560 = UINT32_MAX;
	int32_t t53 = -25467934;

	t53 = (x557<<(x558<(x559*x560)));

	if (t53 != 65534) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x573 = 3;
	uint8_t x574 = 27U;
	uint16_t x575 = 422U;
	int64_t x576 = 3377811829LL;
	int32_t t54 = 2;

	t54 = (x573<<(x574<(x575*x576)));

	if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x577 = 41444;
	static uint64_t x578 = 74967011LLU;
	int64_t x580 = -694352985LL;
	volatile int32_t t55 = 13153;

	t55 = (x577<<(x578<(x579*x580)));

	if (t55 != 82888) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x581 = UINT64_MAX;
	uint64_t x583 = 977750942LLU;
	int64_t x584 = INT64_MAX;
	uint64_t t56 = UINT64_MAX;

	t56 = (x581<<(x582<(x583*x584)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x593 = 1727U;
	int8_t x594 = 0;
	uint64_t x595 = 100204888863LLU;
	volatile uint64_t x596 = 290LLU;
	int32_t t57 = -968;

	t57 = (x593<<(x594<(x595*x596)));

	if (t57 != 3454) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x605 = 0U;
	volatile int32_t x607 = -1;
	static uint16_t x608 = 34U;
	volatile int32_t t58 = -344176572;

	t58 = (x605<<(x606<(x607*x608)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x610 = -1;
	static volatile int8_t x611 = INT8_MAX;
	static uint64_t t59 = 4259076277607LLU;

	t59 = (x609<<(x610<(x611*x612)));

	if (t59 != 290LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x614 = INT16_MIN;
	volatile int16_t x616 = -1;
	volatile uint64_t t60 = 45585LLU;

	t60 = (x613<<(x614<(x615*x616)));

	if (t60 != 1809056953178272329LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x618 = INT8_MIN;
	static int32_t x619 = INT32_MAX;
	uint64_t x620 = UINT64_MAX;
	static int32_t t61 = -2722288;

	t61 = (x617<<(x618<(x619*x620)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x629 = INT8_MAX;
	int32_t x631 = 2;
	volatile uint32_t x632 = 1955U;
	static int32_t t62 = -481;

	t62 = (x629<<(x630<(x631*x632)));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x650 = -1;
	int16_t x651 = -1;
	int64_t x652 = INT64_MAX;

	t63 = (x649<<(x650<(x651*x652)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x662 = 13;
	int32_t x663 = -1;
	int32_t x664 = 54;
	volatile int32_t t64 = 57181;

	t64 = (x661<<(x662<(x663*x664)));

	if (t64 != 30) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x682 = INT8_MIN;
	volatile uint32_t x683 = 1115U;
	static int8_t x684 = INT8_MIN;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x681<<(x682<(x683*x684)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x690 = 350U;
	int16_t x692 = 7981;
	volatile int32_t t66 = 6;

	t66 = (x689<<(x690<(x691*x692)));

	if (t66 != 7446) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x722 = INT8_MIN;
	static uint32_t x723 = 3531087U;
	int16_t x724 = INT16_MIN;

	t67 = (x721<<(x722<(x723*x724)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x725 = 933288557LL;
	uint32_t x726 = 175011325U;
	static volatile int64_t x727 = INT64_MIN;
	uint64_t x728 = 2LLU;
	static int64_t t68 = -15753877687LL;

	t68 = (x725<<(x726<(x727*x728)));

	if (t68 != 933288557LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x729 = 2897040763201299486LL;
	int64_t x730 = -28LL;
	static int64_t x732 = -1LL;
	int64_t t69 = -1942305144976727LL;

	t69 = (x729<<(x730<(x731*x732)));

	if (t69 != 2897040763201299486LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x737 = 23U;
	int32_t x739 = -1;
	int32_t x740 = 12854;
	volatile int32_t t70 = 679365215;

	t70 = (x737<<(x738<(x739*x740)));

	if (t70 != 46) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x757 = UINT16_MAX;
	volatile int32_t x758 = 1332637;
	uint16_t x759 = UINT16_MAX;
	static int8_t x760 = INT8_MIN;
	int32_t t71 = 2582;

	t71 = (x757<<(x758<(x759*x760)));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x766 = 1633U;
	uint8_t x767 = 1U;
	volatile int32_t t72 = -10472755;

	t72 = (x765<<(x766<(x767*x768)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x781 = INT16_MAX;
	static uint8_t x782 = 3U;
	int16_t x784 = 6;
	volatile int32_t t73 = -632013176;

	t73 = (x781<<(x782<(x783*x784)));

	if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x786 = -1;
	int8_t x787 = INT8_MAX;
	int32_t x788 = -1;
	volatile int32_t t74 = -702311;

	t74 = (x785<<(x786<(x787*x788)));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x797 = 5;
	int32_t x798 = INT32_MIN;
	uint16_t x800 = UINT16_MAX;
	static volatile int32_t t75 = -29702510;

	t75 = (x797<<(x798<(x799*x800)));

	if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x805 = INT16_MAX;
	int8_t x806 = -1;
	int8_t x807 = 1;
	int32_t x808 = INT32_MIN;
	volatile int32_t t76 = -111272;

	t76 = (x805<<(x806<(x807*x808)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x821 = 16746U;
	uint64_t x823 = 12947835079036124LLU;
	uint64_t x824 = UINT64_MAX;
	static int32_t t77 = 560710272;

	t77 = (x821<<(x822<(x823*x824)));

	if (t77 != 33492) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x830 = INT8_MIN;
	volatile int8_t x831 = 6;
	int64_t x832 = -1853296LL;
	uint64_t t78 = 101616LLU;

	t78 = (x829<<(x830<(x831*x832)));

	if (t78 != 5410LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x837 = 1992;
	int64_t x838 = -1LL;
	volatile int64_t x839 = INT64_MAX;
	volatile int32_t t79 = 19320870;

	t79 = (x837<<(x838<(x839*x840)));

	if (t79 != 1992) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x841 = UINT64_MAX;
	int32_t x843 = 1560232;
	int8_t x844 = INT8_MAX;

	t80 = (x841<<(x842<(x843*x844)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x845 = UINT8_MAX;
	int16_t x846 = INT16_MIN;
	int8_t x847 = -1;
	int8_t x848 = INT8_MIN;
	int32_t t81 = -9;

	t81 = (x845<<(x846<(x847*x848)));

	if (t81 != 510) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x865 = UINT16_MAX;
	uint32_t x867 = 130U;
	int32_t x868 = -2521;

	t82 = (x865<<(x866<(x867*x868)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x897 = 200614137477LL;
	int8_t x898 = INT8_MIN;
	uint8_t x899 = 3U;
	int8_t x900 = INT8_MAX;
	volatile int64_t t83 = -17168676LL;

	t83 = (x897<<(x898<(x899*x900)));

	if (t83 != 401228274954LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x905 = 16;
	static int8_t x906 = 1;
	int8_t x907 = 1;
	volatile uint32_t x908 = UINT32_MAX;
	volatile int32_t t84 = 10;

	t84 = (x905<<(x906<(x907*x908)));

	if (t84 != 32) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x921 = INT16_MAX;
	int64_t x923 = -79606LL;
	int16_t x924 = -1;
	volatile int32_t t85 = -156687;

	t85 = (x921<<(x922<(x923*x924)));

	if (t85 != 65534) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x925 = 3U;
	int32_t x926 = -19604;
	uint64_t x927 = 211221874542966713LLU;
	int8_t x928 = INT8_MIN;
	volatile int32_t t86 = 32628358;

	t86 = (x925<<(x926<(x927*x928)));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x933 = 103LLU;
	int8_t x935 = INT8_MIN;
	static int8_t x936 = -26;
	volatile uint64_t t87 = 226845197490LLU;

	t87 = (x933<<(x934<(x935*x936)));

	if (t87 != 206LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x937 = UINT16_MAX;
	int16_t x938 = INT16_MAX;
	static int32_t t88 = 100752;

	t88 = (x937<<(x938<(x939*x940)));

	if (t88 != 131070) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x941 = 1U;
	volatile int16_t x942 = 1721;
	int32_t x943 = -90;
	uint32_t t89 = 57253U;

	t89 = (x941<<(x942<(x943*x944)));

	if (t89 != 2U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x968 = INT8_MIN;
	int32_t t90 = -1436;

	t90 = (x965<<(x966<(x967*x968)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x973 = 398492641LLU;
	uint64_t x974 = UINT64_MAX;
	uint32_t x975 = UINT32_MAX;
	int8_t x976 = INT8_MAX;

	t91 = (x973<<(x974<(x975*x976)));

	if (t91 != 398492641LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x981 = 35U;
	int32_t x982 = INT32_MAX;
	static int64_t x983 = -1LL;
	int64_t x984 = -1LL;

	t92 = (x981<<(x982<(x983*x984)));

	if (t92 != 35) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x989 = 1729924355U;
	static int8_t x990 = INT8_MAX;
	static uint64_t x991 = 31241393352796810LLU;

	t93 = (x989<<(x990<(x991*x992)));

	if (t93 != 3459848710U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1005 = INT8_MAX;
	int32_t x1006 = INT32_MIN;
	int16_t x1007 = -1;
	int16_t x1008 = INT16_MAX;
	volatile int32_t t94 = -663680812;

	t94 = (x1005<<(x1006<(x1007*x1008)));

	if (t94 != 254) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1013 = 118044485;
	int32_t x1014 = 2115;
	static int32_t x1015 = 1;
	volatile int32_t t95 = 865887713;

	t95 = (x1013<<(x1014<(x1015*x1016)));

	if (t95 != 118044485) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1021 = 13;
	static int64_t x1022 = 271210160273744LL;
	uint64_t x1023 = 4LLU;
	uint32_t x1024 = 340177U;
	int32_t t96 = 142247;

	t96 = (x1021<<(x1022<(x1023*x1024)));

	if (t96 != 13) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1025 = 18128;
	int32_t x1026 = -1;
	int32_t t97 = 0;

	t97 = (x1025<<(x1026<(x1027*x1028)));

	if (t97 != 36256) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1029 = INT8_MAX;
	static int16_t x1030 = 15186;
	uint16_t x1031 = UINT16_MAX;
	int32_t t98 = -12;

	t98 = (x1029<<(x1030<(x1031*x1032)));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1033 = UINT8_MAX;
	static uint32_t x1034 = 52952138U;
	int8_t x1035 = 55;
	volatile uint16_t x1036 = 11086U;
	static int32_t t99 = -1;

	t99 = (x1033<<(x1034<(x1035*x1036)));

	if (t99 != 255) { NG(); } else { ; }
	
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

