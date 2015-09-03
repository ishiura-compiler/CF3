#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x4 = 26824118U;
int32_t x19 = 230;
uint64_t x20 = 54841540LLU;
static int16_t x61 = INT16_MIN;
uint32_t x105 = UINT32_MAX;
volatile int64_t t9 = -1368010934696519089LL;
int8_t x133 = INT8_MIN;
int16_t x144 = 6;
static volatile int64_t t12 = 7490266333023246LL;
int16_t x178 = INT16_MIN;
static volatile uint32_t x179 = 93952U;
int64_t x187 = INT64_MIN;
volatile uint32_t t16 = 85723424U;
int64_t x201 = INT64_MIN;
uint8_t x208 = UINT8_MAX;
volatile int32_t x221 = -1;
int16_t x222 = INT16_MAX;
int8_t x243 = -1;
int32_t x247 = INT32_MIN;
static volatile int32_t t22 = 1963;
uint32_t t23 = 32U;
volatile uint8_t x276 = UINT8_MAX;
static int32_t t31 = INT32_MAX;
uint8_t x352 = UINT8_MAX;
uint64_t x355 = 3182LLU;
int32_t t33 = 993081;
uint8_t x369 = UINT8_MAX;
volatile int32_t t37 = -153;
int8_t x382 = 15;
uint8_t x397 = 68U;
static volatile uint16_t x399 = 2281U;
uint16_t x413 = UINT16_MAX;
volatile int16_t x414 = -1;
uint64_t x415 = 748838331LLU;
volatile int64_t x426 = -1LL;
int64_t x459 = INT64_MIN;
static volatile int8_t x466 = INT8_MIN;
int16_t x488 = -5;
volatile int8_t x490 = -8;
uint32_t x510 = UINT32_MAX;
uint64_t x512 = UINT64_MAX;
int32_t x539 = INT32_MIN;
volatile uint32_t t51 = 375528838U;
static volatile int64_t t52 = -403613352421893LL;
static volatile int32_t x565 = INT32_MIN;
static volatile int16_t x566 = -1;
int32_t x578 = INT32_MIN;
uint64_t x584 = 1059113LLU;
int8_t x586 = -1;
int32_t x587 = -919254038;
static int8_t x600 = 0;
int8_t x607 = -1;
int64_t x610 = -1LL;
int64_t t62 = -433008184490LL;
int8_t x616 = INT8_MIN;
uint8_t x619 = 104U;
static int8_t x620 = INT8_MAX;
static int64_t t66 = -457413351LL;
static volatile int32_t t67 = -3739917;
volatile int32_t t68 = 213625688;
uint16_t x673 = 11U;
static uint16_t x676 = UINT16_MAX;
uint16_t x689 = 967U;
volatile int32_t x691 = INT32_MIN;
uint32_t x707 = 133644939U;
int64_t t75 = 1LL;
uint16_t x750 = 2U;
static int32_t x752 = -760;
uint64_t x762 = 1608415880LLU;
volatile uint8_t x769 = 33U;
static int16_t x770 = 3;
int8_t x783 = INT8_MIN;
static volatile int8_t x784 = -1;
int32_t t80 = 190;
static volatile int8_t x785 = 1;
int8_t x786 = -1;
int8_t x790 = 28;
static uint8_t x793 = UINT8_MAX;
uint8_t x816 = UINT8_MAX;
static int64_t x836 = INT64_MAX;
uint64_t t87 = 108263544LLU;
uint16_t x849 = UINT16_MAX;
int64_t x852 = -1LL;
int16_t x857 = INT16_MIN;
int64_t x859 = -18800LL;
static volatile int32_t t89 = 334682417;
static volatile int64_t t93 = INT64_MAX;
static uint16_t x928 = 35U;
static volatile int64_t t96 = INT64_MAX;
volatile int16_t x966 = -1;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int64_t x2 = INT64_MAX;
	static int16_t x3 = INT16_MAX;
	static int64_t t0 = 0LL;

	t0 = (x1-(x2%(x3<x4)));

	if (t0 != 2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -1;
	int16_t x14 = -2327;
	static int8_t x15 = INT8_MIN;
	uint8_t x16 = 1U;
	int32_t t1 = 12895904;

	t1 = (x13-(x14%(x15<x16)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MAX;
	volatile int32_t x18 = INT32_MAX;
	int32_t t2 = 2843023;

	t2 = (x17-(x18%(x19<x20)));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x41 = 25;
	volatile int8_t x42 = -1;
	int64_t x43 = -3553611112057LL;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t3 = 2480;

	t3 = (x41-(x42%(x43<x44)));

	if (t3 != 25) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x62 = INT32_MIN;
	volatile int32_t x63 = 1231645;
	uint64_t x64 = 814650864LLU;
	static volatile int32_t t4 = -603234015;

	t4 = (x61-(x62%(x63<x64)));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x85 = 0;
	static int16_t x86 = INT16_MIN;
	static volatile uint16_t x87 = 24U;
	int64_t x88 = 3672688102209835049LL;
	volatile int32_t t5 = 42909;

	t5 = (x85-(x86%(x87<x88)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x93 = -1;
	uint16_t x94 = 0U;
	volatile int64_t x95 = INT64_MIN;
	uint16_t x96 = 63U;
	int32_t t6 = 443732;

	t6 = (x93-(x94%(x95<x96)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x106 = 2169656621885861LL;
	int64_t x107 = -1LL;
	uint32_t x108 = UINT32_MAX;
	int64_t t7 = -819LL;

	t7 = (x105-(x106%(x107<x108)));

	if (t7 != 4294967295LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x113 = INT64_MIN;
	int16_t x114 = -1;
	int64_t x115 = INT64_MIN;
	volatile uint16_t x116 = 10U;
	static volatile int64_t t8 = INT64_MIN;

	t8 = (x113-(x114%(x115<x116)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x129 = UINT8_MAX;
	int64_t x130 = INT64_MAX;
	static int16_t x131 = INT16_MIN;
	uint16_t x132 = 358U;

	t9 = (x129-(x130%(x131<x132)));

	if (t9 != 255LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x134 = 10007147U;
	volatile int64_t x135 = INT64_MIN;
	uint32_t x136 = 661653835U;
	uint32_t t10 = 6243U;

	t10 = (x133-(x134%(x135<x136)));

	if (t10 != 4294967168U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x141 = -36;
	static volatile int32_t x142 = INT32_MIN;
	static int16_t x143 = INT16_MIN;
	static int32_t t11 = -18486;

	t11 = (x141-(x142%(x143<x144)));

	if (t11 != -36) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x157 = 15U;
	int64_t x158 = INT64_MAX;
	static int32_t x159 = 3;
	int64_t x160 = INT64_MAX;

	t12 = (x157-(x158%(x159<x160)));

	if (t12 != 15LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x173 = -397;
	int32_t x174 = INT32_MAX;
	int32_t x175 = INT32_MIN;
	uint16_t x176 = 2U;
	volatile int32_t t13 = -26123082;

	t13 = (x173-(x174%(x175<x176)));

	if (t13 != -397) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x177 = 1260287521706LLU;
	volatile int8_t x180 = INT8_MIN;
	uint64_t t14 = 642837974LLU;

	t14 = (x177-(x178%(x179<x180)));

	if (t14 != 1260287521706LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x185 = 0U;
	volatile uint32_t x186 = 63603U;
	uint16_t x188 = 124U;
	volatile uint32_t t15 = 452U;

	t15 = (x185-(x186%(x187<x188)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x193 = INT8_MIN;
	uint32_t x194 = UINT32_MAX;
	int32_t x195 = -1;
	int32_t x196 = INT32_MAX;

	t16 = (x193-(x194%(x195<x196)));

	if (t16 != 4294967168U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x202 = INT64_MIN;
	static uint8_t x203 = 2U;
	volatile uint32_t x204 = UINT32_MAX;
	static volatile int64_t t17 = INT64_MIN;

	t17 = (x201-(x202%(x203<x204)));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x205 = INT16_MIN;
	int64_t x206 = -735544530LL;
	uint16_t x207 = 7U;
	volatile int64_t t18 = 43537179996659LL;

	t18 = (x205-(x206%(x207<x208)));

	if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x223 = INT16_MIN;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int32_t t19 = -57001480;

	t19 = (x221-(x222%(x223<x224)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x237 = 164;
	static uint32_t x238 = 9128678U;
	int64_t x239 = -1LL;
	int64_t x240 = INT64_MAX;
	uint32_t t20 = 469148134U;

	t20 = (x237-(x238%(x239<x240)));

	if (t20 != 164U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x241 = INT8_MIN;
	volatile int64_t x242 = -1LL;
	int8_t x244 = INT8_MAX;
	static volatile int64_t t21 = -1794513LL;

	t21 = (x241-(x242%(x243<x244)));

	if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x245 = 6U;
	int8_t x246 = INT8_MIN;
	uint64_t x248 = UINT64_MAX;

	t22 = (x245-(x246%(x247<x248)));

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x261 = 11854215U;
	int16_t x262 = INT16_MAX;
	uint32_t x263 = 1660241U;
	int32_t x264 = INT32_MIN;

	t23 = (x261-(x262%(x263<x264)));

	if (t23 != 11854215U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MIN;
	volatile uint64_t x267 = 116748359194605742LLU;
	static int16_t x268 = -1;
	int32_t t24 = INT32_MIN;

	t24 = (x265-(x266%(x267<x268)));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x273 = -1;
	int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;
	volatile int32_t t25 = -13255;

	t25 = (x273-(x274%(x275<x276)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x285 = 4U;
	int64_t x286 = INT64_MAX;
	int8_t x287 = INT8_MAX;
	uint32_t x288 = UINT32_MAX;
	int64_t t26 = 5LL;

	t26 = (x285-(x286%(x287<x288)));

	if (t26 != 4LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x301 = -1;
	uint64_t x302 = 27868960880585403LLU;
	int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MAX;
	uint64_t t27 = UINT64_MAX;

	t27 = (x301-(x302%(x303<x304)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = INT32_MAX;
	int8_t x319 = 5;
	int32_t x320 = INT32_MAX;
	static volatile int32_t t28 = 0;

	t28 = (x317-(x318%(x319<x320)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x325 = 188711U;
	int16_t x326 = -7;
	static uint64_t x327 = 22928LLU;
	static int32_t x328 = INT32_MIN;
	volatile uint32_t t29 = 3284U;

	t29 = (x325-(x326%(x327<x328)));

	if (t29 != 188711U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x329 = UINT16_MAX;
	volatile int8_t x330 = INT8_MIN;
	uint8_t x331 = 48U;
	int32_t x332 = 824417379;
	volatile int32_t t30 = 14070096;

	t30 = (x329-(x330%(x331<x332)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x333 = INT32_MAX;
	volatile int32_t x334 = INT32_MIN;
	uint8_t x335 = UINT8_MAX;
	static volatile int16_t x336 = 481;

	t31 = (x333-(x334%(x335<x336)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x349 = INT16_MIN;
	int64_t x350 = INT64_MIN;
	int64_t x351 = INT64_MIN;
	volatile int64_t t32 = 1054868220712LL;

	t32 = (x349-(x350%(x351<x352)));

	if (t32 != -32768LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x353 = 51U;
	int32_t x354 = INT32_MIN;
	int64_t x356 = 1545506835LL;

	t33 = (x353-(x354%(x355<x356)));

	if (t33 != 51) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x361 = -1;
	volatile int32_t x362 = INT32_MAX;
	volatile int64_t x363 = -1LL;
	uint32_t x364 = 22U;
	int32_t t34 = 16;

	t34 = (x361-(x362%(x363<x364)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x365 = -1;
	int32_t x366 = INT32_MAX;
	int32_t x367 = INT32_MIN;
	static int16_t x368 = INT16_MIN;
	static volatile int32_t t35 = 12;

	t35 = (x365-(x366%(x367<x368)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x370 = -1LL;
	static volatile uint8_t x371 = 2U;
	uint32_t x372 = 104U;
	static volatile int64_t t36 = -110275974487146634LL;

	t36 = (x369-(x370%(x371<x372)));

	if (t36 != 255LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x377 = 22948U;
	volatile int8_t x378 = INT8_MIN;
	static int64_t x379 = -1LL;
	int32_t x380 = INT32_MAX;

	t37 = (x377-(x378%(x379<x380)));

	if (t37 != 22948) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x383 = 3U;
	volatile int64_t x384 = 90633LL;
	static int32_t t38 = 10257455;

	t38 = (x381-(x382%(x383<x384)));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x398 = INT8_MIN;
	int32_t x400 = 216405534;
	volatile int32_t t39 = -24651590;

	t39 = (x397-(x398%(x399<x400)));

	if (t39 != 68) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x405 = INT16_MAX;
	uint32_t x406 = UINT32_MAX;
	volatile int64_t x407 = INT64_MIN;
	int16_t x408 = -839;
	uint32_t t40 = 398762751U;

	t40 = (x405-(x406%(x407<x408)));

	if (t40 != 32767U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x416 = UINT64_MAX;
	static volatile int32_t t41 = -22259;

	t41 = (x413-(x414%(x415<x416)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x417 = INT8_MAX;
	static volatile int64_t x418 = -1LL;
	int32_t x419 = INT32_MIN;
	volatile int8_t x420 = -28;
	static int64_t t42 = 28092493LL;

	t42 = (x417-(x418%(x419<x420)));

	if (t42 != 127LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x425 = 21U;
	int16_t x427 = INT16_MIN;
	uint8_t x428 = UINT8_MAX;
	int64_t t43 = 3LL;

	t43 = (x425-(x426%(x427<x428)));

	if (t43 != 21LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x457 = INT32_MIN;
	volatile int16_t x458 = 48;
	volatile uint16_t x460 = 4830U;
	volatile int32_t t44 = INT32_MIN;

	t44 = (x457-(x458%(x459<x460)));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x465 = INT64_MIN;
	int16_t x467 = INT16_MIN;
	static int64_t x468 = -1LL;
	int64_t t45 = INT64_MIN;

	t45 = (x465-(x466%(x467<x468)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x481 = INT64_MAX;
	int16_t x482 = -351;
	uint32_t x483 = 6478U;
	volatile uint32_t x484 = 162549U;
	volatile int64_t t46 = INT64_MAX;

	t46 = (x481-(x482%(x483<x484)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x485 = 3;
	static volatile uint16_t x486 = 1U;
	volatile uint64_t x487 = 8223305760854104LLU;
	static int32_t t47 = 7;

	t47 = (x485-(x486%(x487<x488)));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x489 = -63556349;
	int32_t x491 = -12992518;
	int64_t x492 = INT64_MAX;
	volatile int32_t t48 = 8;

	t48 = (x489-(x490%(x491<x492)));

	if (t48 != -63556349) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x509 = INT16_MAX;
	uint32_t x511 = 48U;
	volatile uint32_t t49 = 352612444U;

	t49 = (x509-(x510%(x511<x512)));

	if (t49 != 32767U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x521 = INT16_MAX;
	static uint8_t x522 = UINT8_MAX;
	uint16_t x523 = 48U;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t50 = 0;

	t50 = (x521-(x522%(x523<x524)));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x537 = UINT16_MAX;
	static uint32_t x538 = 871531660U;
	volatile int16_t x540 = 77;

	t51 = (x537-(x538%(x539<x540)));

	if (t51 != 65535U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x557 = 13400LL;
	int64_t x558 = -2203636645721LL;
	static int16_t x559 = 0;
	volatile uint64_t x560 = UINT64_MAX;

	t52 = (x557-(x558%(x559<x560)));

	if (t52 != 13400LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x561 = -1;
	int32_t x562 = INT32_MIN;
	uint16_t x563 = 25489U;
	volatile int64_t x564 = 104399981360LL;
	static int32_t t53 = -14;

	t53 = (x561-(x562%(x563<x564)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x567 = 3;
	int64_t x568 = 22LL;
	volatile int32_t t54 = INT32_MIN;

	t54 = (x565-(x566%(x567<x568)));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x569 = UINT64_MAX;
	int16_t x570 = INT16_MAX;
	int16_t x571 = -269;
	int32_t x572 = 3628;
	uint64_t t55 = UINT64_MAX;

	t55 = (x569-(x570%(x571<x572)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x573 = UINT8_MAX;
	static int64_t x574 = INT64_MIN;
	volatile uint32_t x575 = 1668U;
	int16_t x576 = -1;
	volatile int64_t t56 = 18563266464004678LL;

	t56 = (x573-(x574%(x575<x576)));

	if (t56 != 255LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x577 = INT32_MIN;
	static int32_t x579 = INT32_MIN;
	int8_t x580 = INT8_MIN;
	int32_t t57 = INT32_MIN;

	t57 = (x577-(x578%(x579<x580)));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x581 = 2474;
	volatile int8_t x582 = 61;
	uint16_t x583 = 0U;
	int32_t t58 = 1459672;

	t58 = (x581-(x582%(x583<x584)));

	if (t58 != 2474) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x585 = INT16_MIN;
	volatile int8_t x588 = INT8_MIN;
	static int32_t t59 = -335;

	t59 = (x585-(x586%(x587<x588)));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x597 = -1001364920516LL;
	volatile int16_t x598 = -3161;
	volatile int32_t x599 = -157238;
	volatile int64_t t60 = -24LL;

	t60 = (x597-(x598%(x599<x600)));

	if (t60 != -1001364920516LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x605 = -4672;
	int8_t x606 = INT8_MAX;
	int16_t x608 = 31;
	int32_t t61 = -5315971;

	t61 = (x605-(x606%(x607<x608)));

	if (t61 != -4672) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x609 = 2U;
	int16_t x611 = -1;
	static int64_t x612 = INT64_MAX;

	t62 = (x609-(x610%(x611<x612)));

	if (t62 != 2LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x613 = 1;
	static int32_t x614 = INT32_MIN;
	uint32_t x615 = 6390U;
	int32_t t63 = -27;

	t63 = (x613-(x614%(x615<x616)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x617 = 32715U;
	volatile int32_t x618 = -248751;
	volatile uint32_t t64 = 5413107U;

	t64 = (x617-(x618%(x619<x620)));

	if (t64 != 32715U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x641 = 340812406U;
	int64_t x642 = -1LL;
	uint8_t x643 = 15U;
	static uint64_t x644 = 98LLU;
	int64_t t65 = -1840461581300224466LL;

	t65 = (x641-(x642%(x643<x644)));

	if (t65 != 340812406LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x645 = -1;
	int64_t x646 = 3475886542263873920LL;
	int8_t x647 = INT8_MIN;
	int64_t x648 = -1LL;

	t66 = (x645-(x646%(x647<x648)));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x657 = 1;
	static int8_t x658 = INT8_MIN;
	int32_t x659 = -1;
	int32_t x660 = 33;

	t67 = (x657-(x658%(x659<x660)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x665 = -15550;
	static volatile int8_t x666 = INT8_MAX;
	int64_t x667 = -1861797LL;
	int16_t x668 = INT16_MIN;

	t68 = (x665-(x666%(x667<x668)));

	if (t68 != -15550) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x669 = UINT8_MAX;
	static uint16_t x670 = 39U;
	int32_t x671 = -312477935;
	int16_t x672 = INT16_MAX;
	int32_t t69 = -951350;

	t69 = (x669-(x670%(x671<x672)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x674 = 2408381LLU;
	int8_t x675 = 0;
	uint64_t t70 = 1432781172LLU;

	t70 = (x673-(x674%(x675<x676)));

	if (t70 != 11LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x690 = INT32_MAX;
	int16_t x692 = -1607;
	int32_t t71 = -8427;

	t71 = (x689-(x690%(x691<x692)));

	if (t71 != 967) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x693 = INT16_MIN;
	static uint64_t x694 = UINT64_MAX;
	int64_t x695 = INT64_MIN;
	volatile int64_t x696 = INT64_MAX;
	uint64_t t72 = 10LLU;

	t72 = (x693-(x694%(x695<x696)));

	if (t72 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x705 = 0;
	volatile int32_t x706 = INT32_MAX;
	volatile int8_t x708 = -9;
	volatile int32_t t73 = -112;

	t73 = (x705-(x706%(x707<x708)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x713 = 59;
	static int16_t x714 = INT16_MIN;
	volatile uint32_t x715 = 25U;
	int16_t x716 = -2653;
	static volatile int32_t t74 = 63;

	t74 = (x713-(x714%(x715<x716)));

	if (t74 != 59) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x729 = -1LL;
	int64_t x730 = INT64_MAX;
	int64_t x731 = INT64_MIN;
	volatile int64_t x732 = 32146137216623LL;

	t75 = (x729-(x730%(x731<x732)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x749 = -1987;
	static int64_t x751 = -23359955011LL;
	int32_t t76 = -339579;

	t76 = (x749-(x750%(x751<x752)));

	if (t76 != -1987) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x761 = INT16_MAX;
	static int64_t x763 = INT64_MIN;
	uint8_t x764 = UINT8_MAX;
	volatile uint64_t t77 = 6555681413194706707LLU;

	t77 = (x761-(x762%(x763<x764)));

	if (t77 != 32767LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x765 = 0U;
	uint8_t x766 = 31U;
	int64_t x767 = -1LL;
	int32_t x768 = 374;
	volatile uint32_t t78 = 3125298U;

	t78 = (x765-(x766%(x767<x768)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x771 = 51;
	static volatile uint64_t x772 = 385827723671LLU;
	int32_t t79 = 52;

	t79 = (x769-(x770%(x771<x772)));

	if (t79 != 33) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x781 = 3789U;
	int32_t x782 = -1;

	t80 = (x781-(x782%(x783<x784)));

	if (t80 != 3789) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x787 = 15752422;
	uint64_t x788 = 31514880449LLU;
	volatile int32_t t81 = -956725;

	t81 = (x785-(x786%(x787<x788)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x789 = INT64_MIN;
	int64_t x791 = INT64_MIN;
	uint16_t x792 = 28991U;
	volatile int64_t t82 = INT64_MIN;

	t82 = (x789-(x790%(x791<x792)));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x794 = INT8_MIN;
	volatile int8_t x795 = -1;
	int16_t x796 = 40;
	volatile int32_t t83 = -497271491;

	t83 = (x793-(x794%(x795<x796)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x813 = UINT8_MAX;
	int64_t x814 = 3224097396610LL;
	static int16_t x815 = 18;
	int64_t t84 = -8LL;

	t84 = (x813-(x814%(x815<x816)));

	if (t84 != 255LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x817 = UINT32_MAX;
	uint8_t x818 = 2U;
	static int16_t x819 = -1006;
	int8_t x820 = INT8_MIN;
	uint32_t t85 = UINT32_MAX;

	t85 = (x817-(x818%(x819<x820)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x825 = INT32_MIN;
	int8_t x826 = 44;
	volatile int64_t x827 = INT64_MIN;
	int16_t x828 = -1;
	int32_t t86 = INT32_MIN;

	t86 = (x825-(x826%(x827<x828)));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x833 = -22282002;
	uint64_t x834 = 429LLU;
	int32_t x835 = INT32_MIN;

	t87 = (x833-(x834%(x835<x836)));

	if (t87 != 18446744073687269614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x850 = INT8_MIN;
	int32_t x851 = INT32_MIN;
	volatile int32_t t88 = 881691;

	t88 = (x849-(x850%(x851<x852)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x858 = INT32_MIN;
	volatile uint64_t x860 = UINT64_MAX;

	t89 = (x857-(x858%(x859<x860)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x869 = INT32_MIN;
	volatile int16_t x870 = -1;
	int64_t x871 = 68441LL;
	static int64_t x872 = INT64_MAX;
	int32_t t90 = INT32_MIN;

	t90 = (x869-(x870%(x871<x872)));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x877 = INT32_MIN;
	int64_t x878 = 71660831211518LL;
	uint16_t x879 = 56U;
	int8_t x880 = INT8_MAX;
	int64_t t91 = 47689711402LL;

	t91 = (x877-(x878%(x879<x880)));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x893 = 5U;
	uint32_t x894 = 5953331U;
	int32_t x895 = INT32_MAX;
	int64_t x896 = INT64_MAX;
	uint32_t t92 = 10U;

	t92 = (x893-(x894%(x895<x896)));

	if (t92 != 5U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x897 = INT64_MAX;
	int64_t x898 = INT64_MIN;
	uint8_t x899 = 11U;
	static uint8_t x900 = UINT8_MAX;

	t93 = (x897-(x898%(x899<x900)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x925 = INT8_MIN;
	volatile int16_t x926 = INT16_MIN;
	static volatile int16_t x927 = 2;
	int32_t t94 = -24095;

	t94 = (x925-(x926%(x927<x928)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x933 = UINT64_MAX;
	uint16_t x934 = UINT16_MAX;
	int64_t x935 = INT64_MIN;
	static int32_t x936 = 13269;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x933-(x934%(x935<x936)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x937 = INT64_MAX;
	int64_t x938 = INT64_MIN;
	int32_t x939 = -2799;
	static volatile int16_t x940 = 297;

	t96 = (x937-(x938%(x939<x940)));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x941 = INT64_MAX;
	uint8_t x942 = 15U;
	int32_t x943 = 26;
	uint32_t x944 = 4733873U;
	int64_t t97 = INT64_MAX;

	t97 = (x941-(x942%(x943<x944)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x949 = -39350;
	static int16_t x950 = INT16_MIN;
	int64_t x951 = INT64_MIN;
	int8_t x952 = 1;
	int32_t t98 = 3122361;

	t98 = (x949-(x950%(x951<x952)));

	if (t98 != -39350) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x965 = UINT16_MAX;
	volatile uint64_t x967 = 217591581377142013LLU;
	int32_t x968 = -1;
	volatile int32_t t99 = -735798802;

	t99 = (x965-(x966%(x967<x968)));

	if (t99 != 65535) { NG(); } else { ; }
	
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

