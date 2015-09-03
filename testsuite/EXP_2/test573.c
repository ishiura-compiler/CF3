#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x33 = UINT8_MAX;
volatile int16_t x34 = INT16_MIN;
int64_t t3 = -447LL;
int64_t x82 = -1LL;
int8_t x134 = INT8_MAX;
volatile uint64_t t8 = 236654391LLU;
static int64_t x144 = 3485315LL;
static volatile int64_t t11 = -6171979013475LL;
volatile uint16_t x216 = 0U;
volatile int32_t x226 = -1;
uint8_t x246 = 10U;
uint64_t x253 = UINT64_MAX;
static int64_t x261 = 27432743185276LL;
uint8_t x274 = 0U;
uint8_t x275 = 14U;
static uint8_t x311 = UINT8_MAX;
int32_t x332 = -1;
uint64_t x339 = UINT64_MAX;
uint16_t x349 = UINT16_MAX;
volatile int16_t x369 = 8686;
static int32_t t27 = -10;
uint8_t x373 = 1U;
uint32_t x387 = UINT32_MAX;
static uint32_t x388 = UINT32_MAX;
int16_t x394 = INT16_MAX;
uint8_t x404 = UINT8_MAX;
uint64_t x405 = UINT64_MAX;
volatile int8_t x424 = 1;
volatile uint32_t t33 = 63U;
uint8_t x453 = UINT8_MAX;
uint32_t t35 = 399U;
int64_t x464 = INT64_MIN;
static int8_t x489 = INT8_MAX;
uint32_t x513 = UINT32_MAX;
int16_t x514 = 11038;
uint32_t t38 = 468027U;
volatile uint32_t t40 = UINT32_MAX;
volatile uint16_t x576 = UINT16_MAX;
volatile uint32_t t41 = 823496U;
volatile int32_t t42 = -145;
uint16_t x583 = 8597U;
uint64_t t43 = 9946956793LLU;
uint16_t x585 = 23U;
int8_t x588 = INT8_MIN;
int64_t x595 = 190318592594307LL;
int16_t x608 = -15;
static uint64_t x625 = UINT64_MAX;
int32_t t49 = 3844;
volatile int64_t x684 = INT64_MIN;
int16_t x740 = INT16_MAX;
volatile int32_t t53 = -10;
static int32_t x762 = INT32_MIN;
volatile int32_t t54 = -1225;
static uint8_t x777 = 5U;
uint16_t x782 = UINT16_MAX;
int8_t x796 = -1;
volatile uint64_t t57 = 227376585528014LLU;
int16_t x821 = 12435;
uint8_t x887 = UINT8_MAX;
int16_t x903 = INT16_MIN;
int32_t x925 = 4146170;
static volatile int64_t t65 = 81268LL;
static uint32_t x949 = 14877U;
volatile int8_t x1043 = -2;
static int16_t x1063 = INT16_MIN;
uint32_t x1065 = 133385516U;
int32_t x1103 = INT32_MAX;
uint8_t x1130 = 0U;
static int16_t x1131 = INT16_MAX;
static int32_t t74 = -188;
uint8_t x1141 = 42U;
uint16_t x1144 = 6733U;
int8_t x1171 = INT8_MIN;
volatile uint64_t x1184 = UINT64_MAX;
volatile int32_t t79 = -503;
int32_t x1225 = 8077;
int32_t t81 = -1;
uint64_t t83 = 171748671440LLU;
int64_t x1289 = INT64_MAX;
volatile int16_t x1290 = 1;
int8_t x1296 = INT8_MIN;
volatile int32_t t88 = 379;
volatile int64_t x1337 = INT64_MAX;
volatile uint64_t t90 = 3899LLU;
volatile uint16_t x1341 = 8063U;
int32_t t91 = -24215227;
static int32_t x1351 = -95;
int64_t x1395 = 66856742267LL;
volatile uint32_t x1396 = 5261U;
int16_t x1398 = INT16_MIN;
int32_t x1410 = INT32_MIN;
uint8_t x1422 = 93U;
int32_t x1439 = INT32_MAX;


void f0(void) {
	static int64_t x35 = 2743409LL;
	int8_t x36 = INT8_MAX;
	volatile int32_t t0 = -12635;

	t0 = ((x33<<(x34/x35))+x36);

	if (t0 != 382) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x37 = INT64_MAX;
	int8_t x38 = INT8_MAX;
	int64_t x39 = INT64_MIN;
	volatile int64_t x40 = -1LL;
	volatile int64_t t1 = 13348LL;

	t1 = ((x37<<(x38/x39))+x40);

	if (t1 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x49 = INT8_MAX;
	volatile uint32_t x50 = 1U;
	int32_t x51 = -1;
	int16_t x52 = INT16_MAX;
	static int32_t t2 = -341;

	t2 = ((x49<<(x50/x51))+x52);

	if (t2 != 32894) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x73 = 1;
	uint64_t x74 = 36888008170788LLU;
	int64_t x75 = INT64_MIN;
	static volatile int64_t x76 = 161496149262086354LL;

	t3 = ((x73<<(x74/x75))+x76);

	if (t3 != 161496149262086355LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x81 = 0;
	volatile int8_t x83 = 5;
	volatile uint8_t x84 = 26U;
	int32_t t4 = -53404197;

	t4 = ((x81<<(x82/x83))+x84);

	if (t4 != 26) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x97 = INT16_MAX;
	static int64_t x98 = -4LL;
	static int32_t x99 = -1;
	static int16_t x100 = INT16_MIN;
	int32_t t5 = -1;

	t5 = ((x97<<(x98/x99))+x100);

	if (t5 != 491504) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x125 = INT32_MAX;
	int16_t x126 = -3176;
	uint16_t x127 = 12309U;
	int64_t x128 = INT64_MIN;
	static int64_t t6 = 13301512230427035LL;

	t6 = ((x125<<(x126/x127))+x128);

	if (t6 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x133 = UINT16_MAX;
	uint32_t x135 = 270U;
	int16_t x136 = INT16_MAX;
	volatile int32_t t7 = -3514569;

	t7 = ((x133<<(x134/x135))+x136);

	if (t7 != 98302) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x137 = INT16_MAX;
	uint8_t x138 = UINT8_MAX;
	static uint64_t x139 = 310091690696421525LLU;
	volatile uint64_t x140 = 10902359014LLU;

	t8 = ((x137<<(x138/x139))+x140);

	if (t8 != 10902391781LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x141 = 1;
	uint32_t x142 = 2901776U;
	uint64_t x143 = 864211LLU;
	volatile int64_t t9 = 6747383175360634LL;

	t9 = ((x141<<(x142/x143))+x144);

	if (t9 != 3485323LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x145 = UINT16_MAX;
	int32_t x146 = -3;
	int8_t x147 = INT8_MIN;
	static int16_t x148 = INT16_MAX;
	volatile int32_t t10 = 7;

	t10 = ((x145<<(x146/x147))+x148);

	if (t10 != 98302) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x189 = INT8_MAX;
	volatile int8_t x190 = INT8_MIN;
	static volatile uint16_t x191 = 244U;
	int64_t x192 = 108446959450795LL;

	t11 = ((x189<<(x190/x191))+x192);

	if (t11 != 108446959450922LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x213 = 31U;
	volatile uint64_t x214 = 1LLU;
	int16_t x215 = 1883;
	uint32_t t12 = 1316U;

	t12 = ((x213<<(x214/x215))+x216);

	if (t12 != 31U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x225 = 17U;
	static int32_t x227 = INT32_MIN;
	int16_t x228 = 1;
	int32_t t13 = -1;

	t13 = ((x225<<(x226/x227))+x228);

	if (t13 != 18) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x233 = INT16_MAX;
	int8_t x234 = -1;
	int64_t x235 = -527309955105LL;
	int16_t x236 = INT16_MIN;
	volatile int32_t t14 = -18;

	t14 = ((x233<<(x234/x235))+x236);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x245 = 7U;
	int16_t x247 = INT16_MIN;
	int64_t x248 = 1521120015156898LL;
	static int64_t t15 = -14742457689LL;

	t15 = ((x245<<(x246/x247))+x248);

	if (t15 != 1521120015156905LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x254 = 41445312257932263LLU;
	int64_t x255 = -16722042LL;
	int32_t x256 = INT32_MAX;
	uint64_t t16 = 18371180272513082LLU;

	t16 = ((x253<<(x254/x255))+x256);

	if (t16 != 2147483646LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x262 = INT8_MAX;
	int64_t x263 = INT64_MIN;
	uint16_t x264 = UINT16_MAX;
	volatile int64_t t17 = -807545061957LL;

	t17 = ((x261<<(x262/x263))+x264);

	if (t17 != 27432743250811LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x265 = 1;
	volatile int8_t x266 = 21;
	uint16_t x267 = 826U;
	uint8_t x268 = 35U;
	int32_t t18 = -1;

	t18 = ((x265<<(x266/x267))+x268);

	if (t18 != 36) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x273 = 7U;
	volatile int16_t x276 = -1;
	volatile int32_t t19 = -340985591;

	t19 = ((x273<<(x274/x275))+x276);

	if (t19 != 6) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x301 = INT64_MAX;
	int64_t x302 = -1LL;
	int64_t x303 = INT64_MIN;
	static uint64_t x304 = 17596787LLU;
	static uint64_t t20 = 25LLU;

	t20 = ((x301<<(x302/x303))+x304);

	if (t20 != 9223372036872372594LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x309 = 505984796U;
	int16_t x310 = -1;
	int64_t x312 = INT64_MIN;
	int64_t t21 = -15189LL;

	t21 = ((x309<<(x310/x311))+x312);

	if (t21 != -9223372036348791012LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x329 = 128U;
	int64_t x330 = -1LL;
	volatile int8_t x331 = -1;
	volatile uint32_t t22 = 291176U;

	t22 = ((x329<<(x330/x331))+x332);

	if (t22 != 255U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x333 = 20U;
	static int64_t x334 = 218LL;
	volatile int32_t x335 = INT32_MAX;
	int8_t x336 = -10;
	int32_t t23 = -45987;

	t23 = ((x333<<(x334/x335))+x336);

	if (t23 != 10) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x337 = 1;
	static int16_t x338 = INT16_MAX;
	volatile uint16_t x340 = 924U;
	static volatile int32_t t24 = -101;

	t24 = ((x337<<(x338/x339))+x340);

	if (t24 != 925) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x350 = INT8_MIN;
	uint8_t x351 = UINT8_MAX;
	int32_t x352 = INT32_MIN;
	volatile int32_t t25 = -1629;

	t25 = ((x349<<(x350/x351))+x352);

	if (t25 != -2147418113) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x357 = 1;
	int64_t x358 = INT64_MAX;
	uint64_t x359 = UINT64_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t26 = 1625247;

	t26 = ((x357<<(x358/x359))+x360);

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x370 = 7LLU;
	static int32_t x371 = -1;
	uint8_t x372 = 8U;

	t27 = ((x369<<(x370/x371))+x372);

	if (t27 != 8694) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x374 = -1;
	volatile int64_t x375 = INT64_MIN;
	int16_t x376 = -1;
	int32_t t28 = -1;

	t28 = ((x373<<(x374/x375))+x376);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x385 = UINT64_MAX;
	uint16_t x386 = UINT16_MAX;
	volatile uint64_t t29 = 68004072219438996LLU;

	t29 = ((x385<<(x386/x387))+x388);

	if (t29 != 4294967294LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x393 = 3497U;
	static int16_t x395 = INT16_MAX;
	int8_t x396 = -2;
	static int32_t t30 = -145522053;

	t30 = ((x393<<(x394/x395))+x396);

	if (t30 != 6992) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x401 = 889070544U;
	uint64_t x402 = 540973949LLU;
	int16_t x403 = INT16_MIN;
	static uint32_t t31 = 0U;

	t31 = ((x401<<(x402/x403))+x404);

	if (t31 != 889070799U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x406 = 44U;
	static uint32_t x407 = UINT32_MAX;
	static int32_t x408 = INT32_MIN;
	volatile uint64_t t32 = 7740442929042436197LLU;

	t32 = ((x405<<(x406/x407))+x408);

	if (t32 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x421 = 5U;
	int16_t x422 = INT16_MAX;
	volatile int64_t x423 = INT64_MIN;

	t33 = ((x421<<(x422/x423))+x424);

	if (t33 != 6U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x437 = 37272658LL;
	volatile uint8_t x438 = UINT8_MAX;
	uint64_t x439 = 874648729357836LLU;
	uint32_t x440 = UINT32_MAX;
	int64_t t34 = 1217722669LL;

	t34 = ((x437<<(x438/x439))+x440);

	if (t34 != 4332239953LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x454 = 0LLU;
	static int64_t x455 = -484LL;
	uint32_t x456 = 5314444U;

	t35 = ((x453<<(x454/x455))+x456);

	if (t35 != 5314699U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x461 = 0U;
	uint8_t x462 = 1U;
	uint32_t x463 = UINT32_MAX;
	int64_t t36 = INT64_MIN;

	t36 = ((x461<<(x462/x463))+x464);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x490 = 58521846U;
	volatile int32_t x491 = INT32_MAX;
	uint32_t x492 = UINT32_MAX;
	static uint32_t t37 = 12972649U;

	t37 = ((x489<<(x490/x491))+x492);

	if (t37 != 126U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x515 = 428LLU;
	uint8_t x516 = 88U;

	t38 = ((x513<<(x514/x515))+x516);

	if (t38 != 4261412952U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x517 = 9U;
	static volatile int16_t x518 = INT16_MIN;
	static int64_t x519 = 5644472LL;
	static int64_t x520 = -21311LL;
	volatile int64_t t39 = 1880605069813541474LL;

	t39 = ((x517<<(x518/x519))+x520);

	if (t39 != -21302LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x533 = UINT32_MAX;
	int16_t x534 = -1;
	int8_t x535 = INT8_MIN;
	volatile uint8_t x536 = 0U;

	t40 = ((x533<<(x534/x535))+x536);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x573 = 1569252U;
	volatile uint64_t x574 = UINT64_MAX;
	int64_t x575 = -1LL;

	t41 = ((x573<<(x574/x575))+x576);

	if (t41 != 3204039U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x577 = INT16_MAX;
	volatile int32_t x578 = -1;
	uint32_t x579 = 1038035118U;
	static uint8_t x580 = 3U;

	t42 = ((x577<<(x578/x579))+x580);

	if (t42 != 524275) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x581 = UINT64_MAX;
	int16_t x582 = -1;
	static int32_t x584 = -1;

	t43 = ((x581<<(x582/x583))+x584);

	if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x586 = 1LL;
	volatile int32_t x587 = INT32_MIN;
	volatile int32_t t44 = 114;

	t44 = ((x585<<(x586/x587))+x588);

	if (t44 != -105) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x593 = INT8_MAX;
	int8_t x594 = INT8_MIN;
	static int64_t x596 = INT64_MIN;
	static int64_t t45 = 29232595LL;

	t45 = ((x593<<(x594/x595))+x596);

	if (t45 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x605 = UINT8_MAX;
	int16_t x606 = -26;
	int32_t x607 = -3428;
	static volatile int32_t t46 = 32;

	t46 = ((x605<<(x606/x607))+x608);

	if (t46 != 240) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x626 = INT32_MAX;
	uint32_t x627 = UINT32_MAX;
	int8_t x628 = 45;
	uint64_t t47 = 8198146LLU;

	t47 = ((x625<<(x626/x627))+x628);

	if (t47 != 44LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x629 = UINT64_MAX;
	int16_t x630 = INT16_MAX;
	int16_t x631 = INT16_MIN;
	int64_t x632 = INT64_MIN;
	volatile uint64_t t48 = 520177445LLU;

	t48 = ((x629<<(x630/x631))+x632);

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x653 = INT8_MAX;
	int16_t x654 = -1;
	int32_t x655 = INT32_MIN;
	int16_t x656 = 2;

	t49 = ((x653<<(x654/x655))+x656);

	if (t49 != 129) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x669 = INT8_MAX;
	int64_t x670 = -1LL;
	uint32_t x671 = UINT32_MAX;
	static int8_t x672 = 21;
	int32_t t50 = -282839160;

	t50 = ((x669<<(x670/x671))+x672);

	if (t50 != 148) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x681 = 0U;
	uint8_t x682 = 1U;
	static int64_t x683 = -1950269LL;
	int64_t t51 = INT64_MIN;

	t51 = ((x681<<(x682/x683))+x684);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x685 = 41U;
	int8_t x686 = INT8_MAX;
	volatile int64_t x687 = INT64_MIN;
	int64_t x688 = INT64_MIN;
	int64_t t52 = -1LL;

	t52 = ((x685<<(x686/x687))+x688);

	if (t52 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x737 = 1;
	int32_t x738 = -14521;
	volatile int16_t x739 = INT16_MIN;

	t53 = ((x737<<(x738/x739))+x740);

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x761 = 13;
	volatile uint64_t x763 = UINT64_MAX;
	static uint16_t x764 = UINT16_MAX;

	t54 = ((x761<<(x762/x763))+x764);

	if (t54 != 65548) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x778 = -1;
	static uint8_t x779 = UINT8_MAX;
	volatile int64_t x780 = INT64_MIN;
	int64_t t55 = 986LL;

	t55 = ((x777<<(x778/x779))+x780);

	if (t55 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x781 = 33348906U;
	int16_t x783 = 3152;
	static volatile uint8_t x784 = UINT8_MAX;
	uint32_t t56 = 264U;

	t56 = ((x781<<(x782/x783))+x784);

	if (t56 != 3533701375U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x793 = UINT64_MAX;
	static uint64_t x794 = UINT64_MAX;
	int16_t x795 = -1;

	t57 = ((x793<<(x794/x795))+x796);

	if (t57 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x822 = -1LL;
	static volatile uint32_t x823 = 4U;
	int16_t x824 = -1;
	volatile int32_t t58 = 105;

	t58 = ((x821<<(x822/x823))+x824);

	if (t58 != 12434) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x825 = 6U;
	static uint8_t x826 = 101U;
	int64_t x827 = INT64_MIN;
	static volatile int16_t x828 = INT16_MIN;
	volatile int32_t t59 = -114867;

	t59 = ((x825<<(x826/x827))+x828);

	if (t59 != -32762) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x865 = 15457;
	int8_t x866 = -1;
	static int64_t x867 = 276216829565535409LL;
	int8_t x868 = -1;
	volatile int32_t t60 = -217316328;

	t60 = ((x865<<(x866/x867))+x868);

	if (t60 != 15456) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x881 = INT16_MAX;
	int8_t x882 = -14;
	int32_t x883 = -1;
	uint32_t x884 = 78028U;
	uint32_t t61 = 14402977U;

	t61 = ((x881<<(x882/x883))+x884);

	if (t61 != 536932556U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x885 = 0;
	uint64_t x886 = 7549LLU;
	int16_t x888 = INT16_MIN;
	static int32_t t62 = -1726;

	t62 = ((x885<<(x886/x887))+x888);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x901 = 1061U;
	volatile int32_t x902 = -1;
	volatile uint32_t x904 = 1723U;
	static uint32_t t63 = 4995U;

	t63 = ((x901<<(x902/x903))+x904);

	if (t63 != 2784U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x926 = 0U;
	static int16_t x927 = -26;
	volatile uint32_t x928 = 167217U;
	volatile uint32_t t64 = 59U;

	t64 = ((x925<<(x926/x927))+x928);

	if (t64 != 4313387U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x945 = 444161855015839912LL;
	volatile uint8_t x946 = 0U;
	static int8_t x947 = -1;
	int64_t x948 = 29048150518LL;

	t65 = ((x945<<(x946/x947))+x948);

	if (t65 != 444161884063990430LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x950 = 18086U;
	volatile int32_t x951 = INT32_MAX;
	int8_t x952 = 0;
	volatile uint32_t t66 = 1U;

	t66 = ((x949<<(x950/x951))+x952);

	if (t66 != 14877U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x981 = 7062;
	int32_t x982 = INT32_MIN;
	static int64_t x983 = INT64_MIN;
	uint32_t x984 = 159311760U;
	uint32_t t67 = 105U;

	t67 = ((x981<<(x982/x983))+x984);

	if (t67 != 159318822U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1001 = UINT16_MAX;
	uint16_t x1002 = 1211U;
	static uint8_t x1003 = UINT8_MAX;
	volatile int32_t x1004 = INT32_MIN;
	int32_t t68 = -1;

	t68 = ((x1001<<(x1002/x1003))+x1004);

	if (t68 != -2146435088) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1041 = UINT8_MAX;
	int32_t x1042 = -1;
	int8_t x1044 = INT8_MIN;
	static volatile int32_t t69 = -129171839;

	t69 = ((x1041<<(x1042/x1043))+x1044);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x1061 = 1267U;
	static volatile uint32_t x1062 = UINT32_MAX;
	int32_t x1064 = -343571013;
	static uint32_t t70 = 139072U;

	t70 = ((x1061<<(x1062/x1063))+x1064);

	if (t70 != 3951398817U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x1066 = 60787LLU;
	int32_t x1067 = INT32_MIN;
	static uint16_t x1068 = 171U;
	static uint32_t t71 = 473715645U;

	t71 = ((x1065<<(x1066/x1067))+x1068);

	if (t71 != 133385687U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1101 = INT32_MAX;
	uint8_t x1102 = 6U;
	static volatile int8_t x1104 = -1;
	int32_t t72 = -1984316;

	t72 = ((x1101<<(x1102/x1103))+x1104);

	if (t72 != 2147483646) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1109 = 31U;
	int8_t x1110 = 2;
	static uint32_t x1111 = UINT32_MAX;
	int64_t x1112 = -1LL;
	volatile int64_t t73 = -1603642LL;

	t73 = ((x1109<<(x1110/x1111))+x1112);

	if (t73 != 30LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x1129 = 205U;
	int16_t x1132 = INT16_MIN;

	t74 = ((x1129<<(x1130/x1131))+x1132);

	if (t74 != -32563) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x1142 = -5;
	uint64_t x1143 = UINT64_MAX;
	static volatile int32_t t75 = -396;

	t75 = ((x1141<<(x1142/x1143))+x1144);

	if (t75 != 6775) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1169 = 4U;
	volatile uint8_t x1170 = 6U;
	volatile int16_t x1172 = 686;
	int32_t t76 = 893;

	t76 = ((x1169<<(x1170/x1171))+x1172);

	if (t76 != 690) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1177 = 2U;
	uint64_t x1178 = UINT64_MAX;
	int16_t x1179 = INT16_MIN;
	static volatile int16_t x1180 = 811;
	volatile int32_t t77 = 112734613;

	t77 = ((x1177<<(x1178/x1179))+x1180);

	if (t77 != 815) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1181 = 7055U;
	static uint64_t x1182 = UINT64_MAX;
	int32_t x1183 = -1;
	static uint64_t t78 = 98233LLU;

	t78 = ((x1181<<(x1182/x1183))+x1184);

	if (t78 != 14109LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1197 = UINT16_MAX;
	uint8_t x1198 = 48U;
	uint32_t x1199 = UINT32_MAX;
	uint16_t x1200 = 12U;

	t79 = ((x1197<<(x1198/x1199))+x1200);

	if (t79 != 65547) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1201 = UINT8_MAX;
	int8_t x1202 = INT8_MIN;
	volatile int32_t x1203 = INT32_MAX;
	static uint8_t x1204 = 0U;
	volatile int32_t t80 = 0;

	t80 = ((x1201<<(x1202/x1203))+x1204);

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x1226 = INT16_MAX;
	int32_t x1227 = INT32_MAX;
	int8_t x1228 = INT8_MIN;

	t81 = ((x1225<<(x1226/x1227))+x1228);

	if (t81 != 7949) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x1233 = 0;
	uint64_t x1234 = UINT64_MAX;
	uint64_t x1235 = UINT64_MAX;
	static uint32_t x1236 = 1913U;
	volatile uint32_t t82 = 741195U;

	t82 = ((x1233<<(x1234/x1235))+x1236);

	if (t82 != 1913U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x1249 = UINT8_MAX;
	uint64_t x1250 = 6LLU;
	int16_t x1251 = -3;
	uint64_t x1252 = 1LLU;

	t83 = ((x1249<<(x1250/x1251))+x1252);

	if (t83 != 256LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x1281 = 10392U;
	uint16_t x1282 = 741U;
	int16_t x1283 = INT16_MAX;
	static uint32_t x1284 = 397U;
	uint32_t t84 = 528051289U;

	t84 = ((x1281<<(x1282/x1283))+x1284);

	if (t84 != 10789U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x1285 = 161841U;
	int16_t x1286 = -1;
	int32_t x1287 = -820757;
	volatile int64_t x1288 = INT64_MIN;
	int64_t t85 = -854427043LL;

	t85 = ((x1285<<(x1286/x1287))+x1288);

	if (t85 != -9223372036854613967LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1291 = -747;
	int32_t x1292 = -1;
	volatile int64_t t86 = 8063025372689106LL;

	t86 = ((x1289<<(x1290/x1291))+x1292);

	if (t86 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x1293 = 102;
	uint8_t x1294 = UINT8_MAX;
	int16_t x1295 = INT16_MAX;
	volatile int32_t t87 = 2;

	t87 = ((x1293<<(x1294/x1295))+x1296);

	if (t87 != -26) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1321 = INT16_MAX;
	int16_t x1322 = INT16_MIN;
	uint16_t x1323 = UINT16_MAX;
	int16_t x1324 = INT16_MIN;

	t88 = ((x1321<<(x1322/x1323))+x1324);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1329 = 1;
	uint8_t x1330 = UINT8_MAX;
	int32_t x1331 = -1182;
	volatile int16_t x1332 = INT16_MAX;
	volatile int32_t t89 = 536144;

	t89 = ((x1329<<(x1330/x1331))+x1332);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x1338 = 4LL;
	static int8_t x1339 = INT8_MIN;
	uint64_t x1340 = UINT64_MAX;

	t90 = ((x1337<<(x1338/x1339))+x1340);

	if (t90 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x1342 = 54U;
	static int32_t x1343 = INT32_MIN;
	int32_t x1344 = INT32_MIN;

	t91 = ((x1341<<(x1342/x1343))+x1344);

	if (t91 != -2147475585) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x1349 = 1691046877814436695LLU;
	static uint64_t x1350 = UINT64_MAX;
	int32_t x1352 = INT32_MAX;
	volatile uint64_t t92 = 34118881254276LLU;

	t92 = ((x1349<<(x1350/x1351))+x1352);

	if (t92 != 3382093757776357037LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1393 = 0U;
	static uint32_t x1394 = 1U;
	static uint32_t t93 = 17424792U;

	t93 = ((x1393<<(x1394/x1395))+x1396);

	if (t93 != 5261U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1397 = INT32_MAX;
	int32_t x1399 = -5713558;
	int8_t x1400 = INT8_MIN;
	volatile int32_t t94 = -47825;

	t94 = ((x1397<<(x1398/x1399))+x1400);

	if (t94 != 2147483519) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x1409 = UINT32_MAX;
	uint32_t x1411 = 1022517871U;
	volatile int32_t x1412 = -1;
	volatile uint32_t t95 = 1U;

	t95 = ((x1409<<(x1410/x1411))+x1412);

	if (t95 != 4294967291U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1421 = 251;
	int32_t x1423 = 56558;
	uint8_t x1424 = 81U;
	static volatile int32_t t96 = 25986;

	t96 = ((x1421<<(x1422/x1423))+x1424);

	if (t96 != 332) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1429 = UINT32_MAX;
	int8_t x1430 = INT8_MIN;
	uint16_t x1431 = UINT16_MAX;
	uint32_t x1432 = 905U;
	uint32_t t97 = 265477845U;

	t97 = ((x1429<<(x1430/x1431))+x1432);

	if (t97 != 904U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1437 = 11473616133LLU;
	int32_t x1438 = -243;
	int32_t x1440 = -10;
	static volatile uint64_t t98 = 959285LLU;

	t98 = ((x1437<<(x1438/x1439))+x1440);

	if (t98 != 11473616123LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x1441 = UINT8_MAX;
	int8_t x1442 = -1;
	volatile int8_t x1443 = INT8_MIN;
	uint32_t x1444 = 54016693U;
	uint32_t t99 = 1U;

	t99 = ((x1441<<(x1442/x1443))+x1444);

	if (t99 != 54016948U) { NG(); } else { ; }
	
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

