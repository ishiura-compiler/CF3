#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int8_t x4 = INT8_MAX;
int32_t x10 = -1;
static int16_t x13 = -617;
int16_t x37 = -284;
int16_t x45 = -7;
static uint16_t x83 = UINT16_MAX;
volatile int64_t x95 = -1LL;
int8_t x114 = INT8_MIN;
int8_t x145 = INT8_MAX;
int8_t x148 = 29;
static volatile int16_t x158 = -1832;
static int16_t x163 = 783;
int64_t x192 = -1LL;
int32_t x204 = -1;
int64_t x214 = -1LL;
static volatile int64_t t22 = 44603LL;
volatile int64_t x231 = INT64_MAX;
volatile int16_t x232 = -1;
volatile uint64_t t23 = 107433660262LLU;
int16_t x258 = INT16_MIN;
static volatile int64_t x259 = -49802650712LL;
int64_t t24 = -771934176324368LL;
int8_t x272 = -6;
static int16_t x287 = -1;
uint16_t x292 = 216U;
uint8_t x310 = 6U;
volatile int8_t x311 = 43;
int16_t x333 = -373;
static volatile int64_t x338 = INT64_MAX;
static int16_t x339 = -1;
int64_t t34 = 10LL;
static uint16_t x354 = UINT16_MAX;
volatile int8_t x355 = 4;
uint32_t x361 = UINT32_MAX;
static uint8_t x362 = 1U;
static int16_t x373 = -9339;
static volatile int32_t x374 = 44514;
volatile int8_t x377 = INT8_MIN;
int16_t x378 = INT16_MIN;
int16_t x387 = -109;
static volatile int32_t x388 = -1;
int32_t x401 = INT32_MIN;
static int16_t x414 = INT16_MIN;
uint64_t x433 = 941729490LLU;
int32_t x456 = -3656;
int64_t x463 = INT64_MIN;
static int16_t x464 = INT16_MAX;
volatile int64_t x485 = 314762609347LL;
static int16_t x505 = INT16_MAX;
int64_t t51 = -18635285LL;
int8_t x542 = INT8_MIN;
int32_t x553 = -1;
int64_t x555 = INT64_MIN;
int64_t t54 = -31646735014589LL;
int64_t x565 = -3145649LL;
int32_t x584 = 31491;
volatile int64_t t57 = -1701998LL;
volatile int32_t x618 = -206605369;
uint64_t x620 = 24986063956LLU;
uint64_t t58 = 215946976904722650LLU;
uint16_t x625 = 70U;
int64_t x629 = INT64_MIN;
int16_t x633 = INT16_MAX;
int32_t x634 = -337472;
int64_t x642 = INT64_MIN;
static volatile int16_t x648 = 717;
int64_t t64 = -8081451LL;
static volatile int8_t x662 = INT8_MIN;
static int64_t x663 = INT64_MAX;
uint16_t x677 = 1U;
uint16_t x680 = 3U;
static int32_t x766 = -262;
int64_t x767 = INT64_MIN;
volatile int64_t t69 = -5844305875135LL;
static int16_t x793 = INT16_MIN;
uint64_t x815 = 2046622770LLU;
static uint16_t x816 = UINT16_MAX;
int8_t x820 = INT8_MIN;
int64_t x826 = INT64_MIN;
volatile int16_t x862 = -2;
static int32_t x899 = INT32_MIN;
uint32_t x913 = 1977U;
volatile int8_t x914 = -1;
static int8_t x932 = INT8_MAX;
int8_t x948 = INT8_MIN;
volatile uint16_t x958 = UINT16_MAX;
static int32_t x970 = INT32_MIN;
int32_t x993 = INT32_MAX;
int8_t x995 = -7;
uint64_t x1004 = 468551LLU;
volatile uint32_t t90 = 2052U;
uint8_t x1015 = UINT8_MAX;
static int8_t x1016 = INT8_MIN;
static volatile int32_t x1027 = -1;
int8_t x1028 = INT8_MIN;
int32_t t94 = -493700;
uint64_t x1045 = 13610LLU;
int32_t x1053 = -3;
int64_t x1055 = INT64_MIN;
static int64_t x1056 = -2192918317976LL;
volatile int64_t x1074 = -1LL;
static int64_t t98 = 16513212549LL;
int32_t x1078 = -1;
int16_t x1080 = -1;


void f0(void) {
	volatile int8_t x2 = INT8_MAX;
	uint16_t x3 = UINT16_MAX;
	int64_t t0 = INT64_MIN;

	t0 = (x1/((x2&x3)/x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	int8_t x11 = -31;
	int16_t x12 = -10;
	volatile int32_t t1 = 84;

	t1 = (x9/((x10&x11)/x12));

	if (t1 != -715827882) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = 9U;
	int64_t x15 = -1LL;
	int64_t x16 = -1LL;
	volatile int64_t t2 = -462LL;

	t2 = (x13/((x14&x15)/x16));

	if (t2 != 68LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x38 = INT64_MAX;
	static int8_t x39 = -1;
	int64_t x40 = -1LL;
	int64_t t3 = 53919651018LL;

	t3 = (x37/((x38&x39)/x40));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x41 = INT32_MAX;
	int64_t x42 = -1LL;
	int64_t x43 = INT64_MIN;
	volatile uint16_t x44 = 1U;
	int64_t t4 = -76LL;

	t4 = (x41/((x42&x43)/x44));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x46 = -1;
	int64_t x47 = INT64_MIN;
	uint8_t x48 = UINT8_MAX;
	int64_t t5 = 374LL;

	t5 = (x45/((x46&x47)/x48));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x73 = -1;
	int64_t x74 = -15386171579LL;
	int32_t x75 = -117539390;
	int16_t x76 = -1;
	volatile int64_t t6 = 3802438096432001LL;

	t6 = (x73/((x74&x75)/x76));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x81 = -1LL;
	static int8_t x82 = INT8_MIN;
	uint8_t x84 = 27U;
	int64_t t7 = -11508610035482LL;

	t7 = (x81/((x82&x83)/x84));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x93 = -1;
	volatile uint16_t x94 = UINT16_MAX;
	int16_t x96 = 685;
	volatile int64_t t8 = -28312823770895LL;

	t8 = (x93/((x94&x95)/x96));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x105 = 1179U;
	int32_t x106 = -41631740;
	int32_t x107 = -4231326;
	int16_t x108 = INT16_MIN;
	uint32_t t9 = 965825U;

	t9 = (x105/((x106&x107)/x108));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x113 = 12U;
	int8_t x115 = INT8_MIN;
	volatile int32_t x116 = -1;
	volatile int32_t t10 = 10212;

	t10 = (x113/((x114&x115)/x116));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x137 = 86306498;
	int64_t x138 = INT64_MAX;
	volatile uint64_t x139 = UINT64_MAX;
	uint16_t x140 = 487U;
	uint64_t t11 = 2008LLU;

	t11 = (x137/((x138&x139)/x140));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x141 = -86;
	int32_t x142 = INT32_MIN;
	int16_t x143 = -1;
	int16_t x144 = INT16_MAX;
	int32_t t12 = 937461;

	t12 = (x141/((x142&x143)/x144));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x146 = -1468LL;
	volatile uint16_t x147 = UINT16_MAX;
	volatile int64_t t13 = -121861356008467064LL;

	t13 = (x145/((x146&x147)/x148));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x153 = -823;
	volatile int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MIN;
	int8_t x156 = 55;
	int32_t t14 = 1860255;

	t14 = (x153/((x154&x155)/x156));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x157 = INT64_MAX;
	int64_t x159 = -50845530523LL;
	int32_t x160 = INT32_MAX;
	int64_t t15 = 144708501815012LL;

	t15 = (x157/((x158&x159)/x160));

	if (t15 != -401016175515425035LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x161 = 11U;
	int8_t x162 = INT8_MIN;
	volatile uint8_t x164 = 1U;
	volatile int32_t t16 = -1555165;

	t16 = (x161/((x162&x163)/x164));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x189 = INT32_MAX;
	static volatile int64_t x190 = 57784466659771759LL;
	int8_t x191 = INT8_MIN;
	volatile int64_t t17 = 216402LL;

	t17 = (x189/((x190&x191)/x192));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x193 = UINT32_MAX;
	volatile int64_t x194 = -4001540413140911372LL;
	volatile int16_t x195 = INT16_MIN;
	uint8_t x196 = UINT8_MAX;
	static int64_t t18 = -985535147961LL;

	t18 = (x193/((x194&x195)/x196));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x201 = INT64_MIN;
	uint16_t x202 = 1414U;
	int8_t x203 = 3;
	volatile int64_t t19 = 29LL;

	t19 = (x201/((x202&x203)/x204));

	if (t19 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x205 = UINT8_MAX;
	int64_t x206 = INT64_MAX;
	int8_t x207 = INT8_MAX;
	static volatile int8_t x208 = INT8_MAX;
	volatile int64_t t20 = -595556404LL;

	t20 = (x205/((x206&x207)/x208));

	if (t20 != 255LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = -2;
	int16_t x211 = 35;
	int8_t x212 = -1;
	volatile int32_t t21 = -66;

	t21 = (x209/((x210&x211)/x212));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x213 = INT32_MAX;
	static int32_t x215 = INT32_MIN;
	uint8_t x216 = UINT8_MAX;

	t22 = (x213/((x214&x215)/x216));

	if (t22 != -255LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x229 = 31713890LLU;
	int32_t x230 = INT32_MIN;

	t23 = (x229/((x230&x231)/x232));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x257 = INT64_MIN;
	uint16_t x260 = UINT16_MAX;

	t24 = (x257/((x258&x259)/x260));

	if (t24 != 12136974020126LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x261 = UINT32_MAX;
	static int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MIN;
	static int64_t x264 = -962938LL;
	volatile int64_t t25 = 419654336667LL;

	t25 = (x261/((x262&x263)/x264));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x269 = 3U;
	int8_t x270 = INT8_MIN;
	uint8_t x271 = UINT8_MAX;
	int32_t t26 = 42;

	t26 = (x269/((x270&x271)/x272));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x285 = UINT32_MAX;
	uint32_t x286 = 194682U;
	int16_t x288 = INT16_MAX;
	uint32_t t27 = 30U;

	t27 = (x285/((x286&x287)/x288));

	if (t27 != 858993459U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x289 = -2;
	uint16_t x290 = 1363U;
	static volatile int8_t x291 = INT8_MIN;
	int32_t t28 = -178;

	t28 = (x289/((x290&x291)/x292));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x297 = 2;
	int32_t x298 = -1;
	static uint8_t x299 = 15U;
	int8_t x300 = 1;
	volatile int32_t t29 = -16180;

	t29 = (x297/((x298&x299)/x300));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x309 = -1LL;
	static volatile int8_t x312 = -1;
	int64_t t30 = -856722539754LL;

	t30 = (x309/((x310&x311)/x312));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x313 = -29053;
	int16_t x314 = INT16_MIN;
	int8_t x315 = -1;
	static uint8_t x316 = UINT8_MAX;
	volatile int32_t t31 = 2;

	t31 = (x313/((x314&x315)/x316));

	if (t31 != 226) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x334 = INT64_MAX;
	static volatile int32_t x335 = INT32_MIN;
	volatile int32_t x336 = 10338749;
	volatile int64_t t32 = -64272LL;

	t32 = (x333/((x334&x335)/x336));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x337 = INT64_MIN;
	int32_t x340 = -1;
	volatile int64_t t33 = 26824315322490LL;

	t33 = (x337/((x338&x339)/x340));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x345 = -1LL;
	volatile int64_t x346 = -1584012932639LL;
	volatile int16_t x347 = -1;
	static int32_t x348 = 438205110;

	t34 = (x345/((x346&x347)/x348));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x353 = -1;
	int16_t x356 = 1;
	volatile int32_t t35 = -508208;

	t35 = (x353/((x354&x355)/x356));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x363 = UINT8_MAX;
	volatile int32_t x364 = -1;
	uint32_t t36 = 1U;

	t36 = (x361/((x362&x363)/x364));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x375 = UINT64_MAX;
	uint8_t x376 = 6U;
	static volatile uint64_t t37 = 436543825646104LLU;

	t37 = (x373/((x374&x375)/x376));

	if (t37 != 2486419203896689LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x379 = UINT16_MAX;
	int8_t x380 = -5;
	int32_t t38 = 122684;

	t38 = (x377/((x378&x379)/x380));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x385 = -3;
	static volatile uint16_t x386 = 1U;
	volatile int32_t t39 = -1814;

	t39 = (x385/((x386&x387)/x388));

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x397 = 1U;
	int32_t x398 = INT32_MAX;
	uint64_t x399 = UINT64_MAX;
	static int32_t x400 = 150586;
	uint64_t t40 = 14877LLU;

	t40 = (x397/((x398&x399)/x400));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x402 = -1LL;
	int32_t x403 = -1591;
	int8_t x404 = 62;
	volatile int64_t t41 = -689244938LL;

	t41 = (x401/((x402&x403)/x404));

	if (t41 != 85899345LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x409 = UINT16_MAX;
	int8_t x410 = INT8_MIN;
	int64_t x411 = INT64_MIN;
	int64_t x412 = INT64_MIN;
	int64_t t42 = -22994645609975LL;

	t42 = (x409/((x410&x411)/x412));

	if (t42 != 65535LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x413 = INT8_MIN;
	volatile uint64_t x415 = UINT64_MAX;
	volatile int32_t x416 = INT32_MIN;
	volatile uint64_t t43 = 8122280721LLU;

	t43 = (x413/((x414&x415)/x416));

	if (t43 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x429 = 12U;
	static volatile uint16_t x430 = UINT16_MAX;
	static int8_t x431 = -14;
	static int16_t x432 = INT16_MIN;
	int32_t t44 = -5251;

	t44 = (x429/((x430&x431)/x432));

	if (t44 != -12) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x434 = 130527LLU;
	uint16_t x435 = UINT16_MAX;
	int32_t x436 = 59647;
	uint64_t t45 = 37513560880977LLU;

	t45 = (x433/((x434&x435)/x436));

	if (t45 != 941729490LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x453 = 20U;
	uint64_t x454 = UINT64_MAX;
	int64_t x455 = -1LL;
	uint64_t t46 = 5573273824LLU;

	t46 = (x453/((x454&x455)/x456));

	if (t46 != 20LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x461 = INT8_MIN;
	volatile int16_t x462 = -1;
	volatile int64_t t47 = -7397998676526945LL;

	t47 = (x461/((x462&x463)/x464));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x469 = 6U;
	int32_t x470 = 1;
	int8_t x471 = -1;
	int64_t x472 = -1LL;
	int64_t t48 = 2464995700482334LL;

	t48 = (x469/((x470&x471)/x472));

	if (t48 != -6LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x473 = INT64_MIN;
	static int32_t x474 = 327074;
	int64_t x475 = 3822LL;
	static uint8_t x476 = 3U;
	volatile int64_t t49 = -3458957472474061LL;

	t49 = (x473/((x474&x475)/x476));

	if (t49 != -8556003744763242LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x486 = INT64_MAX;
	int8_t x487 = INT8_MIN;
	int64_t x488 = -2LL;
	volatile int64_t t50 = 5LL;

	t50 = (x485/((x486&x487)/x488));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x506 = 3675194221591106LL;
	int64_t x507 = INT64_MAX;
	volatile int8_t x508 = 1;

	t51 = (x505/((x506&x507)/x508));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x533 = INT16_MIN;
	int16_t x534 = INT16_MIN;
	int64_t x535 = INT64_MAX;
	uint16_t x536 = 3U;
	int64_t t52 = -43794LL;

	t52 = (x533/((x534&x535)/x536));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x541 = -165108544462LL;
	static int32_t x543 = INT32_MIN;
	uint8_t x544 = 2U;
	volatile int64_t t53 = 6769LL;

	t53 = (x541/((x542&x543)/x544));

	if (t53 != 153LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x554 = INT32_MIN;
	int64_t x556 = INT64_MAX;

	t54 = (x553/((x554&x555)/x556));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x566 = INT16_MAX;
	volatile int16_t x567 = INT16_MAX;
	int16_t x568 = 1;
	int64_t t55 = 3721376303LL;

	t55 = (x565/((x566&x567)/x568));

	if (t55 != -96LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x581 = INT8_MIN;
	int32_t x582 = -1;
	int32_t x583 = -2550151;
	volatile int32_t t56 = 80;

	t56 = (x581/((x582&x583)/x584));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x601 = 86U;
	int8_t x602 = INT8_MIN;
	volatile int64_t x603 = -1LL;
	volatile int8_t x604 = INT8_MAX;

	t57 = (x601/((x602&x603)/x604));

	if (t57 != -86LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x617 = -2;
	uint64_t x619 = 252955069348LLU;

	t58 = (x617/((x618&x619)/x620));

	if (t58 != 1844674407370955161LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x626 = INT8_MIN;
	int64_t x627 = INT64_MIN;
	int16_t x628 = -14;
	int64_t t59 = -16305LL;

	t59 = (x625/((x626&x627)/x628));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x630 = 2985540745066LL;
	uint64_t x631 = UINT64_MAX;
	int8_t x632 = 19;
	uint64_t t60 = 943067604341LLU;

	t60 = (x629/((x630&x631)/x632));

	if (t60 != 58697597LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x635 = -211918;
	int64_t x636 = -1LL;
	int64_t t61 = -5666LL;

	t61 = (x633/((x634&x635)/x636));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x641 = 14428839LLU;
	int8_t x643 = INT8_MIN;
	int32_t x644 = INT32_MIN;
	volatile uint64_t t62 = 65813891800527796LLU;

	t62 = (x641/((x642&x643)/x644));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x645 = INT64_MIN;
	int8_t x646 = INT8_MIN;
	static int64_t x647 = INT64_MIN;
	int64_t t63 = 28307LL;

	t63 = (x645/((x646&x647)/x648));

	if (t63 != 717LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x657 = INT64_MAX;
	uint8_t x658 = 103U;
	int8_t x659 = INT8_MAX;
	static int8_t x660 = -17;

	t64 = (x657/((x658&x659)/x660));

	if (t64 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x661 = -1LL;
	volatile int64_t x664 = -1LL;
	volatile int64_t t65 = 0LL;

	t65 = (x661/((x662&x663)/x664));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x678 = -52;
	uint16_t x679 = UINT16_MAX;
	volatile int32_t t66 = -79;

	t66 = (x677/((x678&x679)/x680));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x721 = -1;
	volatile int16_t x722 = INT16_MAX;
	static volatile int8_t x723 = INT8_MIN;
	int16_t x724 = 18;
	int32_t t67 = -1625217;

	t67 = (x721/((x722&x723)/x724));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x753 = 0U;
	static int8_t x754 = -1;
	int64_t x755 = -33749518LL;
	int16_t x756 = 5604;
	volatile int64_t t68 = 359856191521072957LL;

	t68 = (x753/((x754&x755)/x756));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x765 = 0;
	uint16_t x768 = 20U;

	t69 = (x765/((x766&x767)/x768));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x794 = 14U;
	uint32_t x795 = UINT32_MAX;
	uint32_t x796 = 3U;
	volatile uint32_t t70 = 1635909985U;

	t70 = (x793/((x794&x795)/x796));

	if (t70 != 1073733632U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x805 = 394097175462090107LLU;
	static int32_t x806 = -1;
	int8_t x807 = -1;
	int32_t x808 = -1;
	static uint64_t t71 = 87695763693748LLU;

	t71 = (x805/((x806&x807)/x808));

	if (t71 != 394097175462090107LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x813 = UINT32_MAX;
	int64_t x814 = INT64_MAX;
	volatile uint64_t t72 = 533947216855LLU;

	t72 = (x813/((x814&x815)/x816));

	if (t72 != 137531LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x817 = INT32_MIN;
	static volatile int32_t x818 = -27437;
	int64_t x819 = INT64_MIN;
	volatile int64_t t73 = 3695849104LL;

	t73 = (x817/((x818&x819)/x820));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x825 = UINT32_MAX;
	int8_t x827 = INT8_MIN;
	uint64_t x828 = 379281276213002707LLU;
	uint64_t t74 = 247LLU;

	t74 = (x825/((x826&x827)/x828));

	if (t74 != 178956970LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x833 = -77574644LL;
	int16_t x834 = INT16_MIN;
	int32_t x835 = -24;
	uint32_t x836 = 317521U;
	volatile int64_t t75 = 176371LL;

	t75 = (x833/((x834&x835)/x836));

	if (t75 != -5735LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x849 = INT8_MIN;
	uint64_t x850 = 2LLU;
	static uint32_t x851 = UINT32_MAX;
	uint8_t x852 = 1U;
	volatile uint64_t t76 = 44576527LLU;

	t76 = (x849/((x850&x851)/x852));

	if (t76 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x861 = INT8_MAX;
	static int16_t x863 = INT16_MIN;
	int8_t x864 = 1;
	int32_t t77 = 1720;

	t77 = (x861/((x862&x863)/x864));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x889 = 4;
	static volatile uint16_t x890 = 348U;
	uint8_t x891 = UINT8_MAX;
	int8_t x892 = -14;
	int32_t t78 = 457144;

	t78 = (x889/((x890&x891)/x892));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x897 = 2896996;
	static int64_t x898 = -130010609161509LL;
	int8_t x900 = -17;
	int64_t t79 = 7267290987LL;

	t79 = (x897/((x898&x899)/x900));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x909 = INT32_MIN;
	uint8_t x910 = 3U;
	int16_t x911 = -787;
	int8_t x912 = 1;
	volatile int32_t t80 = INT32_MIN;

	t80 = (x909/((x910&x911)/x912));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x915 = INT64_MIN;
	volatile int32_t x916 = -431869020;
	static volatile int64_t t81 = 6048LL;

	t81 = (x913/((x914&x915)/x916));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x929 = 0;
	volatile int32_t x930 = INT32_MIN;
	int16_t x931 = -3914;
	int32_t t82 = -4073;

	t82 = (x929/((x930&x931)/x932));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x945 = -14090539955LL;
	uint8_t x946 = UINT8_MAX;
	int8_t x947 = INT8_MIN;
	volatile int64_t t83 = 499940710225LL;

	t83 = (x945/((x946&x947)/x948));

	if (t83 != 14090539955LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x953 = 4078171U;
	int8_t x954 = -1;
	int16_t x955 = -1;
	uint64_t x956 = 95450559550316215LLU;
	uint64_t t84 = 144048761984280014LLU;

	t84 = (x953/((x954&x955)/x956));

	if (t84 != 21130LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x957 = INT64_MAX;
	static uint16_t x959 = 2U;
	int16_t x960 = -1;
	volatile int64_t t85 = 2098LL;

	t85 = (x957/((x958&x959)/x960));

	if (t85 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x965 = 12268349LL;
	int16_t x966 = 155;
	static volatile int8_t x967 = 6;
	int8_t x968 = -1;
	volatile int64_t t86 = -29462333469612180LL;

	t86 = (x965/((x966&x967)/x968));

	if (t86 != -6134174LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x969 = 5U;
	int16_t x971 = INT16_MIN;
	uint16_t x972 = 359U;
	int32_t t87 = 111958;

	t87 = (x969/((x970&x971)/x972));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x994 = 664U;
	int64_t x996 = 117LL;
	int64_t t88 = 14LL;

	t88 = (x993/((x994&x995)/x996));

	if (t88 != 429496729LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x1001 = INT16_MIN;
	int64_t x1002 = INT64_MAX;
	int16_t x1003 = INT16_MIN;
	static uint64_t t89 = 2LLU;

	t89 = (x1001/((x1002&x1003)/x1004));

	if (t89 != 937102LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x1009 = 1U;
	uint32_t x1010 = 6213U;
	static int8_t x1011 = -1;
	uint32_t x1012 = 434U;

	t90 = (x1009/((x1010&x1011)/x1012));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x1013 = 181622U;
	int16_t x1014 = INT16_MAX;
	volatile uint32_t t91 = 20471966U;

	t91 = (x1013/((x1014&x1015)/x1016));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1017 = 6863U;
	uint8_t x1018 = UINT8_MAX;
	int8_t x1019 = -1;
	int32_t x1020 = 110;
	int32_t t92 = -5975246;

	t92 = (x1017/((x1018&x1019)/x1020));

	if (t92 != 3431) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1021 = INT64_MIN;
	int8_t x1022 = -1;
	static int16_t x1023 = INT16_MIN;
	uint16_t x1024 = 747U;
	volatile int64_t t93 = 21697LL;

	t93 = (x1021/((x1022&x1023)/x1024));

	if (t93 != 214497024112901762LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1025 = INT16_MIN;
	int16_t x1026 = INT16_MIN;

	t94 = (x1025/((x1026&x1027)/x1028));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x1029 = INT32_MAX;
	int16_t x1030 = 2342;
	volatile uint32_t x1031 = UINT32_MAX;
	uint8_t x1032 = 1U;
	uint32_t t95 = 23U;

	t95 = (x1029/((x1030&x1031)/x1032));

	if (t95 != 916944U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1046 = INT64_MIN;
	int32_t x1047 = INT32_MIN;
	int64_t x1048 = INT64_MIN;
	static uint64_t t96 = 28533LLU;

	t96 = (x1045/((x1046&x1047)/x1048));

	if (t96 != 13610LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1054 = INT16_MIN;
	volatile int64_t t97 = -1LL;

	t97 = (x1053/((x1054&x1055)/x1056));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x1073 = UINT16_MAX;
	uint16_t x1075 = UINT16_MAX;
	uint8_t x1076 = UINT8_MAX;

	t98 = (x1073/((x1074&x1075)/x1076));

	if (t98 != 255LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1077 = INT32_MAX;
	static int32_t x1079 = -18231037;
	int32_t t99 = 9227320;

	t99 = (x1077/((x1078&x1079)/x1080));

	if (t99 != 117) { NG(); } else { ; }
	
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

