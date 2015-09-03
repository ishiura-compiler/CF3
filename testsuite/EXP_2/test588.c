#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x33 = 1U;
int64_t x34 = -7152LL;
static uint64_t x65 = UINT64_MAX;
int8_t x70 = -1;
uint16_t x102 = UINT16_MAX;
uint64_t x105 = 11870261303LLU;
int64_t x108 = INT64_MIN;
uint16_t x137 = 234U;
int8_t x138 = -1;
uint8_t x216 = 8U;
uint32_t x241 = UINT32_MAX;
int64_t x251 = INT64_MAX;
int8_t x266 = -1;
static int8_t x267 = INT8_MIN;
static uint64_t x268 = UINT64_MAX;
static int16_t x279 = INT16_MAX;
volatile int32_t x284 = -1;
int64_t x333 = 13173002373LL;
uint32_t x334 = UINT32_MAX;
uint8_t x416 = 4U;
volatile int64_t t29 = -5LL;
int8_t x427 = INT8_MAX;
int8_t x430 = INT8_MIN;
volatile int16_t x457 = INT16_MAX;
static int16_t x459 = -6;
volatile int64_t x470 = 0LL;
uint16_t x487 = 394U;
int32_t x490 = -8933;
static int32_t x491 = INT32_MIN;
static uint8_t x492 = UINT8_MAX;
int8_t x505 = INT8_MAX;
int32_t t39 = -28181;
uint8_t x559 = UINT8_MAX;
uint32_t x560 = UINT32_MAX;
volatile uint16_t x562 = 158U;
uint16_t x563 = 28U;
static int8_t x575 = -50;
volatile int16_t x576 = INT16_MIN;
int32_t t43 = 10;
uint8_t x591 = UINT8_MAX;
uint8_t x628 = 8U;
volatile int32_t x641 = 47654575;
volatile int16_t x642 = INT16_MIN;
int16_t x663 = INT16_MAX;
volatile int64_t x675 = INT64_MIN;
uint64_t x676 = UINT64_MAX;
static uint16_t x681 = 97U;
int8_t x684 = INT8_MAX;
static uint8_t x725 = 5U;
int8_t x774 = INT8_MAX;
static uint32_t x796 = 15541U;
uint8_t x801 = 1U;
int8_t x808 = -1;
volatile int16_t x826 = 2;
int8_t x828 = INT8_MIN;
volatile uint32_t x853 = 153305U;
volatile int16_t x854 = INT16_MIN;
uint32_t t61 = 1017799U;
int16_t x870 = -1;
volatile uint16_t x872 = UINT16_MAX;
uint32_t x873 = 9892U;
static int8_t x883 = INT8_MAX;
static int32_t t64 = 476520251;
static int8_t x928 = -23;
int64_t t69 = -4300018LL;
int8_t x966 = -30;
volatile int64_t t70 = 12558LL;
int16_t x970 = INT16_MIN;
int32_t t72 = 93147119;
volatile uint32_t t73 = 12U;
volatile int64_t x1014 = -1LL;
static int16_t x1025 = 1;
int32_t x1143 = INT32_MAX;
volatile uint8_t x1144 = 60U;
static uint16_t x1145 = UINT16_MAX;
static volatile int64_t x1147 = INT64_MIN;
volatile int32_t t83 = -62;
static int64_t t84 = INT64_MAX;
volatile uint16_t x1168 = 25151U;
static int32_t t86 = 0;
int16_t x1243 = INT16_MIN;
static int16_t x1328 = 4589;
static uint32_t x1336 = 7369U;
static int64_t x1350 = -14582266500LL;
int8_t x1352 = -1;
uint32_t x1374 = UINT32_MAX;
uint8_t x1389 = 0U;
static uint32_t x1401 = 5U;
volatile uint16_t x1403 = 45U;
int64_t x1416 = 2065013LL;
volatile int32_t x1428 = -1;


void f0(void) {
	uint16_t x21 = 17472U;
	static volatile int8_t x22 = INT8_MIN;
	int64_t x23 = -6LL;
	volatile int32_t x24 = -1;
	static volatile int32_t t0 = -634324354;

	t0 = ((x21>>(x22/x23))*x24);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x35 = INT32_MIN;
	int64_t x36 = 75LL;
	int64_t t1 = 361353LL;

	t1 = ((x33>>(x34/x35))*x36);

	if (t1 != 75LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x41 = 1631LL;
	static volatile uint16_t x42 = 22U;
	int16_t x43 = INT16_MIN;
	static int16_t x44 = 12254;
	volatile int64_t t2 = 872098LL;

	t2 = ((x41>>(x42/x43))*x44);

	if (t2 != 19986274LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x66 = -1;
	int16_t x67 = -1;
	int8_t x68 = INT8_MAX;
	static uint64_t t3 = 1968324LLU;

	t3 = ((x65>>(x66/x67))*x68);

	if (t3 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x69 = 58U;
	int16_t x71 = INT16_MIN;
	static int16_t x72 = -1;
	int32_t t4 = -13121;

	t4 = ((x69>>(x70/x71))*x72);

	if (t4 != -58) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x73 = UINT16_MAX;
	int32_t x74 = -457;
	volatile int64_t x75 = INT64_MAX;
	int8_t x76 = INT8_MIN;
	static int32_t t5 = 269772;

	t5 = ((x73>>(x74/x75))*x76);

	if (t5 != -8388480) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x101 = UINT8_MAX;
	volatile uint64_t x103 = UINT64_MAX;
	uint8_t x104 = 80U;
	int32_t t6 = 22468;

	t6 = ((x101>>(x102/x103))*x104);

	if (t6 != 20400) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x106 = INT16_MIN;
	static volatile int64_t x107 = -65556779LL;
	uint64_t t7 = 87974216535LLU;

	t7 = ((x105>>(x106/x107))*x108);

	if (t7 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x113 = 79139;
	volatile int32_t x114 = 12224;
	uint32_t x115 = 572749784U;
	int8_t x116 = 1;
	volatile int32_t t8 = 1;

	t8 = ((x113>>(x114/x115))*x116);

	if (t8 != 79139) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x125 = UINT32_MAX;
	int64_t x126 = -1LL;
	uint32_t x127 = 103U;
	int32_t x128 = -1;
	volatile uint32_t t9 = 451541U;

	t9 = ((x125>>(x126/x127))*x128);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x139 = -1;
	static int32_t x140 = -439447;
	int32_t t10 = -1250;

	t10 = ((x137>>(x138/x139))*x140);

	if (t10 != -51415299) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x141 = UINT64_MAX;
	int8_t x142 = 0;
	int32_t x143 = INT32_MIN;
	static uint16_t x144 = UINT16_MAX;
	uint64_t t11 = 4236594LLU;

	t11 = ((x141>>(x142/x143))*x144);

	if (t11 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x149 = UINT8_MAX;
	static int64_t x150 = -4992839449LL;
	int64_t x151 = -1894893972633LL;
	int8_t x152 = -31;
	int32_t t12 = 95321337;

	t12 = ((x149>>(x150/x151))*x152);

	if (t12 != -7905) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x165 = 6484639385LL;
	volatile uint8_t x166 = 21U;
	uint32_t x167 = 1399962U;
	static int64_t x168 = -902284937LL;
	static int64_t t13 = -11647104523156LL;

	t13 = ((x165>>(x166/x167))*x168);

	if (t13 != -5850992438962443745LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x185 = 757LL;
	int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MAX;
	uint64_t x188 = 4LLU;
	static uint64_t t14 = 103536142524133975LLU;

	t14 = ((x185>>(x186/x187))*x188);

	if (t14 != 3028LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x189 = 1U;
	int8_t x190 = 52;
	int16_t x191 = 64;
	int64_t x192 = INT64_MAX;
	static int64_t t15 = INT64_MAX;

	t15 = ((x189>>(x190/x191))*x192);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x213 = 6786U;
	volatile uint8_t x214 = UINT8_MAX;
	int16_t x215 = INT16_MAX;
	uint32_t t16 = 25918470U;

	t16 = ((x213>>(x214/x215))*x216);

	if (t16 != 54288U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x221 = 0U;
	volatile int16_t x222 = -1;
	int32_t x223 = INT32_MIN;
	static volatile uint32_t x224 = 5866U;
	volatile uint32_t t17 = 16382U;

	t17 = ((x221>>(x222/x223))*x224);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x225 = 133235399U;
	uint32_t x226 = 436U;
	int16_t x227 = 15;
	int8_t x228 = 6;
	uint32_t t18 = 19772U;

	t18 = ((x225>>(x226/x227))*x228);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x242 = INT16_MIN;
	static volatile int64_t x243 = 7022377LL;
	int32_t x244 = 47;
	static uint32_t t19 = 4001810U;

	t19 = ((x241>>(x242/x243))*x244);

	if (t19 != 4294967249U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x249 = 6345U;
	uint64_t x250 = 19042350LLU;
	int32_t x252 = -210;
	volatile uint32_t t20 = 9956U;

	t20 = ((x249>>(x250/x251))*x252);

	if (t20 != 4293634846U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x265 = 250U;
	static uint64_t t21 = 3991951247834406LLU;

	t21 = ((x265>>(x266/x267))*x268);

	if (t21 != 18446744073709551366LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x277 = 1U;
	int8_t x278 = -1;
	uint64_t x280 = 157765951893685922LLU;
	static volatile uint64_t t22 = 565276725189367LLU;

	t22 = ((x277>>(x278/x279))*x280);

	if (t22 != 157765951893685922LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x281 = 3;
	int32_t x282 = INT32_MAX;
	int64_t x283 = 15683810805871LL;
	int32_t t23 = 6775;

	t23 = ((x281>>(x282/x283))*x284);

	if (t23 != -3) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x285 = 58080728369001LL;
	volatile uint32_t x286 = 59U;
	int64_t x287 = INT64_MAX;
	volatile uint16_t x288 = UINT16_MAX;
	int64_t t24 = -447250187787274648LL;

	t24 = ((x285>>(x286/x287))*x288);

	if (t24 != 3806320533662480535LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x293 = 1902U;
	int16_t x294 = 59;
	static int64_t x295 = INT64_MIN;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t25 = 395523535U;

	t25 = ((x293>>(x294/x295))*x296);

	if (t25 != 4294965394U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x313 = 0LL;
	int64_t x314 = -1LL;
	static volatile uint16_t x315 = 11U;
	int8_t x316 = 44;
	int64_t t26 = -238809186497LL;

	t26 = ((x313>>(x314/x315))*x316);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x335 = -1;
	uint16_t x336 = 1179U;
	int64_t t27 = 5117LL;

	t27 = ((x333>>(x334/x335))*x336);

	if (t27 != 7765484898294LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x353 = INT8_MAX;
	uint8_t x354 = 4U;
	int16_t x355 = INT16_MAX;
	int64_t x356 = -1LL;
	volatile int64_t t28 = 338LL;

	t28 = ((x353>>(x354/x355))*x356);

	if (t28 != -127LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x413 = 6010785798483LL;
	uint32_t x414 = UINT32_MAX;
	int32_t x415 = -85518547;

	t29 = ((x413>>(x414/x415))*x416);

	if (t29 != 12021571596964LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x425 = 4701;
	int64_t x426 = -1LL;
	static uint8_t x428 = UINT8_MAX;
	int32_t t30 = -30;

	t30 = ((x425>>(x426/x427))*x428);

	if (t30 != 1198755) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x429 = UINT8_MAX;
	int64_t x431 = INT64_MIN;
	int8_t x432 = 7;
	int32_t t31 = 77849;

	t31 = ((x429>>(x430/x431))*x432);

	if (t31 != 1785) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x445 = 2U;
	int16_t x446 = -1;
	int8_t x447 = -1;
	int8_t x448 = -1;
	static volatile int32_t t32 = 26489090;

	t32 = ((x445>>(x446/x447))*x448);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x458 = -3;
	volatile int16_t x460 = INT16_MIN;
	volatile int32_t t33 = -3478;

	t33 = ((x457>>(x458/x459))*x460);

	if (t33 != -1073709056) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x469 = 47070893;
	uint8_t x471 = UINT8_MAX;
	volatile int8_t x472 = -1;
	static volatile int32_t t34 = -104;

	t34 = ((x469>>(x470/x471))*x472);

	if (t34 != -47070893) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x485 = 552LL;
	static uint32_t x486 = 970U;
	int8_t x488 = INT8_MIN;
	int64_t t35 = -49079802136194152LL;

	t35 = ((x485>>(x486/x487))*x488);

	if (t35 != -17664LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x489 = 1LL;
	static volatile int64_t t36 = -2850610954LL;

	t36 = ((x489>>(x490/x491))*x492);

	if (t36 != 255LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x493 = UINT32_MAX;
	uint32_t x494 = 9349U;
	static uint64_t x495 = 4842349335855LLU;
	static volatile int32_t x496 = INT32_MAX;
	uint32_t t37 = 28212368U;

	t37 = ((x493>>(x494/x495))*x496);

	if (t37 != 2147483649U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x506 = -4;
	volatile int32_t x507 = -1;
	volatile int8_t x508 = 23;
	static int32_t t38 = -771715;

	t38 = ((x505>>(x506/x507))*x508);

	if (t38 != 161) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x521 = 30;
	int8_t x522 = 26;
	volatile uint32_t x523 = 1083337U;
	int16_t x524 = INT16_MAX;

	t39 = ((x521>>(x522/x523))*x524);

	if (t39 != 983010) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x557 = INT32_MAX;
	int8_t x558 = INT8_MAX;
	static volatile uint32_t t40 = 1258693U;

	t40 = ((x557>>(x558/x559))*x560);

	if (t40 != 2147483649U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x561 = 51U;
	uint8_t x564 = UINT8_MAX;
	static volatile int32_t t41 = -1;

	t41 = ((x561>>(x562/x563))*x564);

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x573 = 0;
	uint8_t x574 = 1U;
	volatile int32_t t42 = -42417;

	t42 = ((x573>>(x574/x575))*x576);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x585 = UINT16_MAX;
	static volatile int8_t x586 = INT8_MIN;
	int16_t x587 = INT16_MIN;
	int8_t x588 = -1;

	t43 = ((x585>>(x586/x587))*x588);

	if (t43 != -65535) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x589 = 29;
	volatile int16_t x590 = 8;
	uint32_t x592 = 7757168U;
	static volatile uint32_t t44 = 22944628U;

	t44 = ((x589>>(x590/x591))*x592);

	if (t44 != 224957872U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x621 = 6;
	uint64_t x622 = 169693721194396LLU;
	int64_t x623 = INT64_MAX;
	int16_t x624 = INT16_MAX;
	static volatile int32_t t45 = -92876;

	t45 = ((x621>>(x622/x623))*x624);

	if (t45 != 196602) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x625 = 0U;
	static int64_t x626 = -1LL;
	int16_t x627 = -14313;
	uint32_t t46 = 48U;

	t46 = ((x625>>(x626/x627))*x628);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x633 = 9;
	static uint16_t x634 = 6U;
	volatile int32_t x635 = INT32_MIN;
	static uint8_t x636 = UINT8_MAX;
	int32_t t47 = 6;

	t47 = ((x633>>(x634/x635))*x636);

	if (t47 != 2295) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x643 = UINT64_MAX;
	volatile int32_t x644 = -1;
	int32_t t48 = 146;

	t48 = ((x641>>(x642/x643))*x644);

	if (t48 != -47654575) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x661 = 228887584924LLU;
	int8_t x662 = INT8_MAX;
	uint8_t x664 = UINT8_MAX;
	uint64_t t49 = 16476905123765LLU;

	t49 = ((x661>>(x662/x663))*x664);

	if (t49 != 58366334155620LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x673 = 2061U;
	int64_t x674 = -1LL;
	uint64_t t50 = 248465LLU;

	t50 = ((x673>>(x674/x675))*x676);

	if (t50 != 18446744073709549555LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x682 = -1;
	volatile int64_t x683 = -1LL;
	static int32_t t51 = 16031;

	t51 = ((x681>>(x682/x683))*x684);

	if (t51 != 6096) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x726 = 13U;
	uint8_t x727 = 11U;
	int32_t x728 = -1;
	volatile int32_t t52 = -2556;

	t52 = ((x725>>(x726/x727))*x728);

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x741 = 7U;
	volatile int64_t x742 = -1LL;
	static int32_t x743 = -1;
	uint16_t x744 = 357U;
	int32_t t53 = -21;

	t53 = ((x741>>(x742/x743))*x744);

	if (t53 != 1071) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x773 = 0LLU;
	static int16_t x775 = -6546;
	uint16_t x776 = 4134U;
	static uint64_t t54 = 2727LLU;

	t54 = ((x773>>(x774/x775))*x776);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x789 = 1U;
	uint8_t x790 = UINT8_MAX;
	int32_t x791 = INT32_MIN;
	static int8_t x792 = INT8_MIN;
	int32_t t55 = 7;

	t55 = ((x789>>(x790/x791))*x792);

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x793 = 110;
	int8_t x794 = INT8_MAX;
	uint32_t x795 = 17142721U;
	static volatile uint32_t t56 = 45U;

	t56 = ((x793>>(x794/x795))*x796);

	if (t56 != 1709510U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x802 = -1555;
	volatile int16_t x803 = INT16_MAX;
	volatile uint32_t x804 = 872340U;
	uint32_t t57 = 300721133U;

	t57 = ((x801>>(x802/x803))*x804);

	if (t57 != 872340U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x805 = UINT16_MAX;
	static int8_t x806 = -1;
	int16_t x807 = 13353;
	static int32_t t58 = 3128;

	t58 = ((x805>>(x806/x807))*x808);

	if (t58 != -65535) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x817 = 22U;
	static int8_t x818 = 10;
	uint64_t x819 = UINT64_MAX;
	int16_t x820 = 370;
	volatile int32_t t59 = -1;

	t59 = ((x817>>(x818/x819))*x820);

	if (t59 != 8140) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x825 = 1084275653045620858LLU;
	int8_t x827 = INT8_MIN;
	uint64_t t60 = 927361626747759164LLU;

	t60 = ((x825>>(x826/x827))*x828);

	if (t60 != 8786668999836943104LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x855 = INT64_MIN;
	int8_t x856 = -1;

	t61 = ((x853>>(x854/x855))*x856);

	if (t61 != 4294813991U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x869 = UINT8_MAX;
	volatile int8_t x871 = INT8_MIN;
	int32_t t62 = -61;

	t62 = ((x869>>(x870/x871))*x872);

	if (t62 != 16711425) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x874 = -1;
	volatile int8_t x875 = -3;
	int16_t x876 = INT16_MAX;
	uint32_t t63 = 3184573U;

	t63 = ((x873>>(x874/x875))*x876);

	if (t63 != 324131164U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x881 = 1;
	int8_t x882 = -1;
	int8_t x884 = 19;

	t64 = ((x881>>(x882/x883))*x884);

	if (t64 != 19) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x889 = 1U;
	static volatile int32_t x890 = -1;
	int64_t x891 = -1LL;
	volatile int16_t x892 = 4437;
	volatile int32_t t65 = 59885;

	t65 = ((x889>>(x890/x891))*x892);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x901 = 33954U;
	static int64_t x902 = -1LL;
	int32_t x903 = INT32_MIN;
	uint8_t x904 = UINT8_MAX;
	static uint32_t t66 = 3U;

	t66 = ((x901>>(x902/x903))*x904);

	if (t66 != 8658270U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x905 = 15069198123LL;
	static uint64_t x906 = 117453792LLU;
	int64_t x907 = -1075113567080544651LL;
	int16_t x908 = -1;
	volatile int64_t t67 = -129918515032028LL;

	t67 = ((x905>>(x906/x907))*x908);

	if (t67 != -15069198123LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x925 = 2538U;
	int8_t x926 = INT8_MIN;
	static uint16_t x927 = 570U;
	volatile int32_t t68 = 3275438;

	t68 = ((x925>>(x926/x927))*x928);

	if (t68 != -58374) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x949 = 0;
	static uint8_t x950 = UINT8_MAX;
	uint32_t x951 = 447U;
	int64_t x952 = -221957085950783LL;

	t69 = ((x949>>(x950/x951))*x952);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x965 = 623900;
	int64_t x967 = INT64_MIN;
	int64_t x968 = -2620360658817LL;

	t70 = ((x965>>(x966/x967))*x968);

	if (t70 != -1634843015035926300LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x969 = 1;
	volatile int64_t x971 = INT64_MIN;
	static int16_t x972 = -1;
	int32_t t71 = -1706;

	t71 = ((x969>>(x970/x971))*x972);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x977 = INT8_MAX;
	uint64_t x978 = 3LLU;
	int16_t x979 = INT16_MIN;
	int16_t x980 = 15230;

	t72 = ((x977>>(x978/x979))*x980);

	if (t72 != 1934210) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x985 = 10789U;
	int16_t x986 = 1015;
	static uint64_t x987 = 3403033226647LLU;
	static int16_t x988 = -362;

	t73 = ((x985>>(x986/x987))*x988);

	if (t73 != 4291061678U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1001 = INT8_MAX;
	int16_t x1002 = INT16_MIN;
	int64_t x1003 = -3960534933450930LL;
	int16_t x1004 = -1;
	volatile int32_t t74 = 71;

	t74 = ((x1001>>(x1002/x1003))*x1004);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1005 = INT8_MAX;
	uint32_t x1006 = 45U;
	volatile int32_t x1007 = -1;
	int64_t x1008 = -1LL;
	int64_t t75 = 298LL;

	t75 = ((x1005>>(x1006/x1007))*x1008);

	if (t75 != -127LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1009 = UINT16_MAX;
	volatile int8_t x1010 = -1;
	static int64_t x1011 = INT64_MAX;
	int8_t x1012 = INT8_MAX;
	volatile int32_t t76 = -4378182;

	t76 = ((x1009>>(x1010/x1011))*x1012);

	if (t76 != 8322945) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1013 = 264U;
	uint16_t x1015 = 102U;
	uint32_t x1016 = 221450494U;
	uint32_t t77 = 13417U;

	t77 = ((x1013>>(x1014/x1015))*x1016);

	if (t77 != 2628355568U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x1026 = 0;
	uint8_t x1027 = 87U;
	static int64_t x1028 = INT64_MAX;
	volatile int64_t t78 = INT64_MAX;

	t78 = ((x1025>>(x1026/x1027))*x1028);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x1049 = INT8_MAX;
	static uint32_t x1050 = 25455273U;
	static int8_t x1051 = INT8_MIN;
	int16_t x1052 = -1;
	int32_t t79 = 107437497;

	t79 = ((x1049>>(x1050/x1051))*x1052);

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1057 = UINT16_MAX;
	uint64_t x1058 = 110548375775LLU;
	int64_t x1059 = INT64_MIN;
	static uint8_t x1060 = UINT8_MAX;
	volatile int32_t t80 = -13;

	t80 = ((x1057>>(x1058/x1059))*x1060);

	if (t80 != 16711425) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1117 = 0U;
	int64_t x1118 = INT64_MIN;
	int64_t x1119 = INT64_MIN;
	int32_t x1120 = -5289304;
	volatile int32_t t81 = 18817434;

	t81 = ((x1117>>(x1118/x1119))*x1120);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x1141 = 11570U;
	int16_t x1142 = INT16_MAX;
	volatile int32_t t82 = -357660;

	t82 = ((x1141>>(x1142/x1143))*x1144);

	if (t82 != 694200) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1146 = INT64_MIN;
	int16_t x1148 = 669;

	t83 = ((x1145>>(x1146/x1147))*x1148);

	if (t83 != 21921123) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1157 = INT64_MAX;
	int16_t x1158 = INT16_MAX;
	volatile uint64_t x1159 = UINT64_MAX;
	int8_t x1160 = 1;

	t84 = ((x1157>>(x1158/x1159))*x1160);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x1165 = INT8_MAX;
	static uint8_t x1166 = UINT8_MAX;
	volatile int64_t x1167 = 6621552LL;
	static volatile int32_t t85 = 18;

	t85 = ((x1165>>(x1166/x1167))*x1168);

	if (t85 != 3194177) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x1173 = 5903U;
	uint16_t x1174 = UINT16_MAX;
	int32_t x1175 = INT32_MAX;
	uint16_t x1176 = 3U;

	t86 = ((x1173>>(x1174/x1175))*x1176);

	if (t86 != 17709) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x1241 = INT16_MAX;
	uint8_t x1242 = 10U;
	int8_t x1244 = INT8_MAX;
	volatile int32_t t87 = -31;

	t87 = ((x1241>>(x1242/x1243))*x1244);

	if (t87 != 4161409) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1245 = UINT16_MAX;
	int8_t x1246 = 41;
	volatile uint8_t x1247 = 2U;
	volatile int16_t x1248 = 5202;
	volatile int32_t t88 = -475;

	t88 = ((x1245>>(x1246/x1247))*x1248);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1261 = UINT8_MAX;
	int16_t x1262 = -1;
	int16_t x1263 = 6;
	static uint16_t x1264 = 32234U;
	volatile int32_t t89 = 30;

	t89 = ((x1261>>(x1262/x1263))*x1264);

	if (t89 != 8219670) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1321 = UINT64_MAX;
	volatile uint16_t x1322 = 1U;
	uint8_t x1323 = UINT8_MAX;
	uint8_t x1324 = UINT8_MAX;
	uint64_t t90 = 162603324491LLU;

	t90 = ((x1321>>(x1322/x1323))*x1324);

	if (t90 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1325 = 4184;
	int16_t x1326 = INT16_MIN;
	static int32_t x1327 = INT32_MAX;
	volatile int32_t t91 = -24627;

	t91 = ((x1325>>(x1326/x1327))*x1328);

	if (t91 != 19200376) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x1333 = INT32_MAX;
	static volatile uint16_t x1334 = 10339U;
	int64_t x1335 = INT64_MIN;
	uint32_t t92 = 8U;

	t92 = ((x1333>>(x1334/x1335))*x1336);

	if (t92 != 2147476279U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1349 = 50LL;
	int32_t x1351 = INT32_MIN;
	volatile int64_t t93 = -68128270LL;

	t93 = ((x1349>>(x1350/x1351))*x1352);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1373 = 14298062008057LLU;
	int16_t x1375 = -1;
	int16_t x1376 = INT16_MIN;
	volatile uint64_t t94 = 260292593072921618LLU;

	t94 = ((x1373>>(x1374/x1375))*x1376);

	if (t94 != 18212484625769562112LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1390 = -61;
	int32_t x1391 = INT32_MAX;
	static volatile uint64_t x1392 = 19018544398364LLU;
	uint64_t t95 = 0LLU;

	t95 = ((x1389>>(x1390/x1391))*x1392);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x1402 = 0U;
	static int32_t x1404 = -1;
	volatile uint32_t t96 = 30080U;

	t96 = ((x1401>>(x1402/x1403))*x1404);

	if (t96 != 4294967291U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1413 = 4U;
	static int32_t x1414 = -15;
	static int16_t x1415 = INT16_MIN;
	volatile int64_t t97 = 0LL;

	t97 = ((x1413>>(x1414/x1415))*x1416);

	if (t97 != 8260052LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1425 = 23U;
	uint8_t x1426 = 6U;
	int32_t x1427 = INT32_MIN;
	volatile int32_t t98 = 1410;

	t98 = ((x1425>>(x1426/x1427))*x1428);

	if (t98 != -23) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1429 = 28874109723LLU;
	static volatile int32_t x1430 = -1;
	volatile int16_t x1431 = -1;
	int32_t x1432 = INT32_MIN;
	volatile uint64_t t99 = 25766LLU;

	t99 = ((x1429>>(x1430/x1431))*x1432);

	if (t99 != 5890148908142690304LLU) { NG(); } else { ; }
	
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

