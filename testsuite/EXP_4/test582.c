#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = 221973305;
int32_t x22 = 5713;
volatile int32_t t1 = -3;
int32_t t5 = 7;
static uint32_t x97 = 391630U;
volatile int32_t t6 = -23569726;
static int16_t x117 = 3267;
static uint8_t x118 = 21U;
int64_t x120 = INT64_MIN;
volatile uint64_t x131 = 14571781888LLU;
int64_t x161 = -1LL;
uint8_t x163 = UINT8_MAX;
uint16_t x164 = 6113U;
uint8_t x173 = 3U;
static int32_t x174 = INT32_MAX;
volatile int32_t x192 = INT32_MIN;
volatile int32_t t16 = 630955;
volatile int8_t x244 = INT8_MAX;
int32_t x295 = -47;
int16_t x307 = INT16_MIN;
int64_t x308 = INT64_MAX;
volatile int64_t x316 = INT64_MIN;
int32_t x325 = INT32_MIN;
volatile int16_t x326 = INT16_MAX;
uint16_t x327 = 29U;
volatile int64_t x328 = 246LL;
static volatile int32_t x331 = 213;
uint64_t x430 = UINT64_MAX;
int32_t t30 = -31266;
int32_t x441 = -9500;
int16_t x443 = INT16_MIN;
int64_t x482 = INT64_MAX;
volatile int32_t t35 = 29163184;
volatile int64_t x521 = -1410630754LL;
volatile int32_t t36 = 4921;
uint64_t x578 = UINT64_MAX;
volatile int64_t x579 = 0LL;
uint32_t x580 = 3406U;
uint32_t x617 = 5U;
uint32_t x618 = 1648407U;
static volatile int8_t x646 = INT8_MAX;
int8_t x658 = INT8_MAX;
uint8_t x662 = UINT8_MAX;
int32_t x676 = INT32_MIN;
int8_t x677 = INT8_MAX;
uint8_t x681 = 0U;
uint16_t x682 = UINT16_MAX;
int16_t x685 = INT16_MAX;
static uint8_t x687 = 21U;
uint16_t x735 = 7016U;
int64_t x736 = INT64_MAX;
int32_t x748 = INT32_MIN;
uint16_t x755 = 29U;
uint32_t x774 = UINT32_MAX;
int32_t x795 = -1;
int16_t x813 = -1;
volatile int32_t t56 = -11922;
uint64_t x826 = 902613023383722675LLU;
int32_t t58 = -981695;
int64_t x833 = INT64_MAX;
uint64_t x834 = 366425281318LLU;
int32_t t59 = 40406122;
volatile int32_t x842 = INT32_MAX;
uint8_t x851 = 13U;
static uint64_t x926 = 3482366956904LLU;
int32_t t65 = 2938;
uint32_t x934 = 62U;
uint32_t x946 = 1U;
static int16_t x947 = -4346;
int64_t x948 = INT64_MIN;
volatile int32_t t68 = -10285173;
int8_t x995 = INT8_MAX;
uint32_t x1011 = 1730U;
volatile int32_t t72 = 2397786;
int16_t x1045 = 10;
uint8_t x1046 = UINT8_MAX;
uint8_t x1087 = 2U;
int8_t x1097 = INT8_MAX;
volatile int16_t x1104 = INT16_MIN;
volatile int32_t x1122 = INT32_MAX;
volatile int32_t t82 = 17;
int16_t x1125 = -389;
volatile uint16_t x1126 = UINT16_MAX;
uint32_t x1127 = 67U;
volatile int16_t x1161 = INT16_MIN;
static int64_t x1164 = INT64_MIN;
volatile int8_t x1173 = INT8_MAX;
int64_t x1181 = -1LL;
uint32_t x1182 = UINT32_MAX;
uint8_t x1183 = 45U;
uint64_t x1184 = 29611966608LLU;
uint16_t x1212 = UINT16_MAX;
int32_t t90 = -19;
uint8_t x1226 = 4U;
int64_t x1228 = INT64_MIN;
int16_t x1245 = INT16_MAX;
static int16_t x1246 = INT16_MAX;
int8_t x1248 = INT8_MIN;
volatile int64_t x1256 = -4424653307920204197LL;
volatile int16_t x1279 = -22;
int64_t x1289 = -2648865784508736638LL;
uint8_t x1292 = 58U;
uint32_t x1293 = 633U;


void f0(void) {
	int64_t x5 = 5006LL;
	static uint16_t x6 = 1U;
	uint8_t x7 = 36U;
	uint16_t x8 = 21U;

	t0 = (x5<=(x6<<(x7/x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = -1;
	uint8_t x23 = 0U;
	volatile int8_t x24 = -2;

	t1 = (x21<=(x22<<(x23/x24)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = INT8_MIN;
	volatile int64_t x26 = 5137LL;
	int8_t x27 = 0;
	volatile int64_t x28 = INT64_MIN;
	volatile int32_t t2 = -282;

	t2 = (x25<=(x26<<(x27/x28)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x37 = 3U;
	uint16_t x38 = UINT16_MAX;
	volatile int64_t x39 = INT64_MIN;
	int64_t x40 = INT64_MIN;
	volatile int32_t t3 = 4038901;

	t3 = (x37<=(x38<<(x39/x40)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MAX;
	int32_t x47 = INT32_MIN;
	uint64_t x48 = UINT64_MAX;
	volatile int32_t t4 = 227437;

	t4 = (x45<=(x46<<(x47/x48)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x93 = 532;
	int64_t x94 = INT64_MAX;
	volatile uint16_t x95 = 836U;
	volatile int16_t x96 = INT16_MIN;

	t5 = (x93<=(x94<<(x95/x96)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x98 = INT8_MAX;
	int16_t x99 = 42;
	int64_t x100 = 1112LL;

	t6 = (x97<=(x98<<(x99/x100)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x109 = UINT64_MAX;
	uint16_t x110 = 14U;
	int32_t x111 = -1;
	int8_t x112 = -1;
	int32_t t7 = 646153395;

	t7 = (x109<=(x110<<(x111/x112)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x119 = UINT64_MAX;
	volatile int32_t t8 = 12;

	t8 = (x117<=(x118<<(x119/x120)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x129 = -1933;
	uint64_t x130 = 9981LLU;
	static int16_t x132 = INT16_MIN;
	static volatile int32_t t9 = 18236;

	t9 = (x129<=(x130<<(x131/x132)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x137 = 13U;
	uint32_t x138 = 21U;
	int32_t x139 = -1;
	uint8_t x140 = UINT8_MAX;
	int32_t t10 = 29270464;

	t10 = (x137<=(x138<<(x139/x140)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x162 = UINT32_MAX;
	volatile int32_t t11 = -32072;

	t11 = (x161<=(x162<<(x163/x164)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x165 = -1;
	uint64_t x166 = 6067455213613LLU;
	volatile uint8_t x167 = UINT8_MAX;
	volatile uint32_t x168 = UINT32_MAX;
	int32_t t12 = 577;

	t12 = (x165<=(x166<<(x167/x168)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x175 = 0;
	int64_t x176 = -1LL;
	int32_t t13 = -2561;

	t13 = (x173<=(x174<<(x175/x176)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x181 = -19;
	uint8_t x182 = 1U;
	volatile int8_t x183 = -21;
	static uint32_t x184 = UINT32_MAX;
	int32_t t14 = -57870456;

	t14 = (x181<=(x182<<(x183/x184)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x189 = 1U;
	uint32_t x190 = 0U;
	static int8_t x191 = 12;
	static int32_t t15 = -182166;

	t15 = (x189<=(x190<<(x191/x192)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x201 = INT64_MIN;
	static uint64_t x202 = UINT64_MAX;
	static volatile int32_t x203 = 19567229;
	volatile int32_t x204 = INT32_MIN;

	t16 = (x201<=(x202<<(x203/x204)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x237 = 0U;
	uint64_t x238 = 49039640468105724LLU;
	volatile uint64_t x239 = 115375604035360LLU;
	int64_t x240 = INT64_MIN;
	volatile int32_t t17 = 156;

	t17 = (x237<=(x238<<(x239/x240)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x241 = -1;
	static int8_t x242 = 59;
	uint8_t x243 = 49U;
	int32_t t18 = 0;

	t18 = (x241<=(x242<<(x243/x244)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x261 = INT16_MAX;
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = -1;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t19 = -289;

	t19 = (x261<=(x262<<(x263/x264)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x293 = 15LLU;
	int8_t x294 = INT8_MAX;
	static volatile int8_t x296 = -10;
	int32_t t20 = -25926742;

	t20 = (x293<=(x294<<(x295/x296)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x305 = UINT32_MAX;
	uint8_t x306 = UINT8_MAX;
	int32_t t21 = -150;

	t21 = (x305<=(x306<<(x307/x308)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x313 = INT8_MIN;
	static int16_t x314 = 0;
	uint64_t x315 = UINT64_MAX;
	int32_t t22 = -12;

	t22 = (x313<=(x314<<(x315/x316)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x318 = UINT16_MAX;
	static uint8_t x319 = 18U;
	uint8_t x320 = 3U;
	static volatile int32_t t23 = -29010425;

	t23 = (x317<=(x318<<(x319/x320)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t t24 = 3229287;

	t24 = (x325<=(x326<<(x327/x328)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x329 = -11888;
	uint8_t x330 = 5U;
	volatile int8_t x332 = 15;
	volatile int32_t t25 = 6435;

	t25 = (x329<=(x330<<(x331/x332)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x349 = INT8_MIN;
	uint8_t x350 = UINT8_MAX;
	int32_t x351 = INT32_MAX;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t26 = -6;

	t26 = (x349<=(x350<<(x351/x352)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x353 = INT64_MAX;
	uint32_t x354 = 8229380U;
	volatile int8_t x355 = 27;
	int16_t x356 = INT16_MIN;
	int32_t t27 = -2728944;

	t27 = (x353<=(x354<<(x355/x356)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x369 = -1LL;
	volatile uint8_t x370 = 9U;
	int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;
	static int32_t t28 = 121407;

	t28 = (x369<=(x370<<(x371/x372)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x389 = -1;
	uint64_t x390 = 16501894462941909LLU;
	int16_t x391 = -1;
	uint8_t x392 = 23U;
	static int32_t t29 = -173;

	t29 = (x389<=(x390<<(x391/x392)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x429 = 148U;
	int64_t x431 = 2272751436LL;
	static uint64_t x432 = UINT64_MAX;

	t30 = (x429<=(x430<<(x431/x432)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x442 = 1082480093877243317LLU;
	static int32_t x444 = -6833722;
	static volatile int32_t t31 = -190676092;

	t31 = (x441<=(x442<<(x443/x444)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x469 = INT64_MIN;
	static int16_t x470 = 0;
	volatile int8_t x471 = INT8_MIN;
	int8_t x472 = INT8_MIN;
	static volatile int32_t t32 = 12153;

	t32 = (x469<=(x470<<(x471/x472)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x481 = INT8_MIN;
	uint64_t x483 = 75438LLU;
	static int64_t x484 = -1LL;
	static volatile int32_t t33 = 373;

	t33 = (x481<=(x482<<(x483/x484)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x505 = 41477935196LLU;
	uint16_t x506 = 28870U;
	uint8_t x507 = 1U;
	int8_t x508 = INT8_MAX;
	volatile int32_t t34 = -462704063;

	t34 = (x505<=(x506<<(x507/x508)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x509 = INT32_MAX;
	uint32_t x510 = 16149U;
	static int32_t x511 = 97;
	int16_t x512 = INT16_MIN;

	t35 = (x509<=(x510<<(x511/x512)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x522 = UINT16_MAX;
	uint64_t x523 = 250897402LLU;
	int64_t x524 = -1LL;

	t36 = (x521<=(x522<<(x523/x524)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x577 = 1U;
	volatile int32_t t37 = 10;

	t37 = (x577<=(x578<<(x579/x580)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x593 = INT64_MAX;
	static uint16_t x594 = 821U;
	int16_t x595 = -123;
	int64_t x596 = 65191002966636722LL;
	volatile int32_t t38 = -1;

	t38 = (x593<=(x594<<(x595/x596)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x619 = INT16_MIN;
	volatile uint64_t x620 = UINT64_MAX;
	int32_t t39 = 480;

	t39 = (x617<=(x618<<(x619/x620)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x637 = INT32_MIN;
	volatile int32_t x638 = INT32_MAX;
	static uint8_t x639 = 5U;
	volatile int8_t x640 = -27;
	int32_t t40 = 145400;

	t40 = (x637<=(x638<<(x639/x640)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x645 = -1;
	int8_t x647 = INT8_MAX;
	static int64_t x648 = INT64_MIN;
	int32_t t41 = 1275066;

	t41 = (x645<=(x646<<(x647/x648)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x657 = INT32_MAX;
	int8_t x659 = -1;
	int32_t x660 = -173788807;
	static volatile int32_t t42 = 608449950;

	t42 = (x657<=(x658<<(x659/x660)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x661 = 4;
	uint8_t x663 = 11U;
	int8_t x664 = 51;
	volatile int32_t t43 = -953;

	t43 = (x661<=(x662<<(x663/x664)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x673 = -1;
	uint8_t x674 = 5U;
	static int8_t x675 = INT8_MAX;
	int32_t t44 = -1335658;

	t44 = (x673<=(x674<<(x675/x676)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x678 = 102U;
	uint16_t x679 = 3255U;
	int64_t x680 = INT64_MAX;
	int32_t t45 = -256636;

	t45 = (x677<=(x678<<(x679/x680)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x683 = -184;
	static volatile uint32_t x684 = UINT32_MAX;
	static int32_t t46 = -475131;

	t46 = (x681<=(x682<<(x683/x684)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x686 = 1290U;
	static int8_t x688 = INT8_MIN;
	volatile int32_t t47 = 910432539;

	t47 = (x685<=(x686<<(x687/x688)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x693 = INT16_MAX;
	static uint8_t x694 = 118U;
	static volatile uint16_t x695 = 5865U;
	uint32_t x696 = 1210299U;
	int32_t t48 = -3914663;

	t48 = (x693<=(x694<<(x695/x696)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x709 = 15537U;
	volatile uint64_t x710 = UINT64_MAX;
	volatile uint16_t x711 = UINT16_MAX;
	int32_t x712 = INT32_MIN;
	static volatile int32_t t49 = -6569;

	t49 = (x709<=(x710<<(x711/x712)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x733 = UINT64_MAX;
	uint8_t x734 = 0U;
	int32_t t50 = -3;

	t50 = (x733<=(x734<<(x735/x736)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x745 = 0U;
	int64_t x746 = INT64_MAX;
	uint32_t x747 = 19055U;
	int32_t t51 = 97928536;

	t51 = (x745<=(x746<<(x747/x748)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x753 = 6;
	int16_t x754 = 96;
	uint64_t x756 = 4448803LLU;
	int32_t t52 = 121;

	t52 = (x753<=(x754<<(x755/x756)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x773 = -1LL;
	int64_t x775 = -1LL;
	volatile uint8_t x776 = 22U;
	volatile int32_t t53 = -1661;

	t53 = (x773<=(x774<<(x775/x776)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x793 = -6042617;
	static int16_t x794 = INT16_MAX;
	int8_t x796 = -1;
	volatile int32_t t54 = -673646359;

	t54 = (x793<=(x794<<(x795/x796)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x797 = INT64_MIN;
	int32_t x798 = INT32_MAX;
	uint8_t x799 = 9U;
	uint8_t x800 = UINT8_MAX;
	int32_t t55 = -256741;

	t55 = (x797<=(x798<<(x799/x800)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x814 = UINT16_MAX;
	uint32_t x815 = 13U;
	int64_t x816 = INT64_MAX;

	t56 = (x813<=(x814<<(x815/x816)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x825 = UINT64_MAX;
	uint32_t x827 = 22048678U;
	static int32_t x828 = 4080609;
	volatile int32_t t57 = 0;

	t57 = (x825<=(x826<<(x827/x828)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x829 = INT16_MIN;
	uint32_t x830 = 25998734U;
	int16_t x831 = INT16_MAX;
	int32_t x832 = INT32_MAX;

	t58 = (x829<=(x830<<(x831/x832)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x835 = -1;
	int8_t x836 = INT8_MAX;

	t59 = (x833<=(x834<<(x835/x836)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x841 = INT64_MIN;
	static int8_t x843 = -1;
	static uint8_t x844 = 2U;
	volatile int32_t t60 = -236;

	t60 = (x841<=(x842<<(x843/x844)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x849 = 0U;
	uint16_t x850 = 5U;
	int64_t x852 = INT64_MIN;
	volatile int32_t t61 = 15397;

	t61 = (x849<=(x850<<(x851/x852)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x857 = -1;
	uint32_t x858 = 114109U;
	int16_t x859 = -1;
	int32_t x860 = -54;
	static volatile int32_t t62 = 1;

	t62 = (x857<=(x858<<(x859/x860)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x881 = 28U;
	uint32_t x882 = 578U;
	static volatile int16_t x883 = -37;
	uint32_t x884 = UINT32_MAX;
	int32_t t63 = -733428;

	t63 = (x881<=(x882<<(x883/x884)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x885 = 1;
	int32_t x886 = 57391;
	int64_t x887 = -655LL;
	int32_t x888 = INT32_MAX;
	volatile int32_t t64 = -2;

	t64 = (x885<=(x886<<(x887/x888)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x925 = -1526;
	volatile int8_t x927 = -1;
	volatile uint16_t x928 = UINT16_MAX;

	t65 = (x925<=(x926<<(x927/x928)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x933 = 0U;
	int16_t x935 = -168;
	static volatile int8_t x936 = INT8_MIN;
	volatile int32_t t66 = 43;

	t66 = (x933<=(x934<<(x935/x936)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x941 = 1385701526U;
	int16_t x942 = INT16_MAX;
	uint32_t x943 = 30065582U;
	int64_t x944 = INT64_MIN;
	int32_t t67 = 15321759;

	t67 = (x941<=(x942<<(x943/x944)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x945 = INT8_MIN;

	t68 = (x945<=(x946<<(x947/x948)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x981 = INT32_MIN;
	static uint8_t x982 = 3U;
	volatile int16_t x983 = -456;
	volatile uint16_t x984 = UINT16_MAX;
	int32_t t69 = 0;

	t69 = (x981<=(x982<<(x983/x984)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x989 = UINT16_MAX;
	volatile uint8_t x990 = 1U;
	volatile uint8_t x991 = 43U;
	int16_t x992 = INT16_MIN;
	static int32_t t70 = -8644535;

	t70 = (x989<=(x990<<(x991/x992)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x993 = -1;
	static volatile int8_t x994 = INT8_MAX;
	static int16_t x996 = INT16_MAX;
	volatile int32_t t71 = 72165684;

	t71 = (x993<=(x994<<(x995/x996)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1009 = -1;
	volatile uint8_t x1010 = 94U;
	uint16_t x1012 = 10157U;

	t72 = (x1009<=(x1010<<(x1011/x1012)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x1021 = 44801LLU;
	int16_t x1022 = 49;
	int16_t x1023 = -48;
	static int16_t x1024 = INT16_MIN;
	int32_t t73 = 11359341;

	t73 = (x1021<=(x1022<<(x1023/x1024)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x1047 = 50387LLU;
	uint16_t x1048 = UINT16_MAX;
	int32_t t74 = 120321230;

	t74 = (x1045<=(x1046<<(x1047/x1048)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x1073 = 374878285044749LL;
	int8_t x1074 = INT8_MAX;
	int8_t x1075 = INT8_MIN;
	uint32_t x1076 = UINT32_MAX;
	static volatile int32_t t75 = 1172227;

	t75 = (x1073<=(x1074<<(x1075/x1076)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x1081 = INT16_MIN;
	static uint16_t x1082 = 2672U;
	int16_t x1083 = 417;
	int32_t x1084 = INT32_MAX;
	int32_t t76 = -1335624;

	t76 = (x1081<=(x1082<<(x1083/x1084)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1085 = UINT32_MAX;
	volatile uint32_t x1086 = UINT32_MAX;
	int16_t x1088 = -3992;
	volatile int32_t t77 = 11317996;

	t77 = (x1085<=(x1086<<(x1087/x1088)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1098 = UINT32_MAX;
	int8_t x1099 = 20;
	uint8_t x1100 = 6U;
	int32_t t78 = 110930;

	t78 = (x1097<=(x1098<<(x1099/x1100)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x1101 = 708184712U;
	volatile uint8_t x1102 = UINT8_MAX;
	uint64_t x1103 = 4561993LLU;
	volatile int32_t t79 = -15841447;

	t79 = (x1101<=(x1102<<(x1103/x1104)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1105 = -1;
	volatile int64_t x1106 = INT64_MAX;
	volatile int16_t x1107 = 1;
	uint64_t x1108 = UINT64_MAX;
	int32_t t80 = -3312195;

	t80 = (x1105<=(x1106<<(x1107/x1108)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x1117 = -216;
	volatile int8_t x1118 = 22;
	uint8_t x1119 = 63U;
	int8_t x1120 = INT8_MAX;
	int32_t t81 = 81;

	t81 = (x1117<=(x1118<<(x1119/x1120)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x1121 = 878788301201412858LLU;
	uint32_t x1123 = 37325357U;
	uint32_t x1124 = UINT32_MAX;

	t82 = (x1121<=(x1122<<(x1123/x1124)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1128 = 112;
	volatile int32_t t83 = -30;

	t83 = (x1125<=(x1126<<(x1127/x1128)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x1153 = -485;
	int64_t x1154 = 78127763498618298LL;
	static uint32_t x1155 = UINT32_MAX;
	volatile int8_t x1156 = -1;
	volatile int32_t t84 = 0;

	t84 = (x1153<=(x1154<<(x1155/x1156)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x1157 = UINT32_MAX;
	uint32_t x1158 = 730029025U;
	int16_t x1159 = -5;
	volatile int16_t x1160 = INT16_MAX;
	volatile int32_t t85 = 0;

	t85 = (x1157<=(x1158<<(x1159/x1160)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1162 = UINT64_MAX;
	uint8_t x1163 = UINT8_MAX;
	volatile int32_t t86 = 23471;

	t86 = (x1161<=(x1162<<(x1163/x1164)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1174 = 387146U;
	int8_t x1175 = -1;
	uint16_t x1176 = UINT16_MAX;
	volatile int32_t t87 = 11449343;

	t87 = (x1173<=(x1174<<(x1175/x1176)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t t88 = 510868780;

	t88 = (x1181<=(x1182<<(x1183/x1184)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x1185 = UINT64_MAX;
	int8_t x1186 = 0;
	int16_t x1187 = 35;
	int64_t x1188 = -33095696LL;
	static int32_t t89 = 1713691;

	t89 = (x1185<=(x1186<<(x1187/x1188)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x1209 = 0U;
	volatile int32_t x1210 = INT32_MAX;
	static int32_t x1211 = 16127;

	t90 = (x1209<=(x1210<<(x1211/x1212)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x1225 = INT8_MAX;
	int64_t x1227 = INT64_MIN;
	int32_t t91 = -6;

	t91 = (x1225<=(x1226<<(x1227/x1228)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x1229 = 40024712051LLU;
	uint16_t x1230 = UINT16_MAX;
	uint8_t x1231 = 2U;
	int8_t x1232 = INT8_MIN;
	int32_t t92 = 1;

	t92 = (x1229<=(x1230<<(x1231/x1232)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x1233 = INT32_MAX;
	uint64_t x1234 = 961LLU;
	static int16_t x1235 = INT16_MIN;
	int64_t x1236 = -649929833875LL;
	volatile int32_t t93 = -967131269;

	t93 = (x1233<=(x1234<<(x1235/x1236)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1247 = -1;
	static int32_t t94 = 443968277;

	t94 = (x1245<=(x1246<<(x1247/x1248)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1253 = -46;
	uint32_t x1254 = 74514U;
	volatile int64_t x1255 = -1LL;
	static int32_t t95 = 14317859;

	t95 = (x1253<=(x1254<<(x1255/x1256)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1261 = INT16_MIN;
	uint16_t x1262 = UINT16_MAX;
	int64_t x1263 = -1LL;
	int32_t x1264 = INT32_MAX;
	int32_t t96 = 1;

	t96 = (x1261<=(x1262<<(x1263/x1264)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1277 = 54827209U;
	int64_t x1278 = 6055LL;
	int64_t x1280 = 209628159LL;
	int32_t t97 = -194768;

	t97 = (x1277<=(x1278<<(x1279/x1280)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x1290 = UINT8_MAX;
	volatile int64_t x1291 = -1LL;
	int32_t t98 = -2;

	t98 = (x1289<=(x1290<<(x1291/x1292)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1294 = INT64_MAX;
	volatile int8_t x1295 = INT8_MAX;
	int32_t x1296 = INT32_MIN;
	static volatile int32_t t99 = 10;

	t99 = (x1293<=(x1294<<(x1295/x1296)));

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

