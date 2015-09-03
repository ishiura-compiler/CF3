#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 0U;
volatile int8_t x7 = INT8_MIN;
static uint16_t x19 = UINT16_MAX;
int16_t x26 = 0;
int8_t x53 = 1;
int16_t x54 = INT16_MIN;
volatile int32_t t6 = -10372;
uint16_t x62 = 11432U;
int32_t x71 = 1618299;
int64_t t9 = -6489LL;
uint32_t x103 = 40U;
static volatile int32_t x106 = -1;
int8_t x115 = -6;
int32_t t16 = -45861893;
static int32_t x123 = -1;
int32_t t17 = 0;
int16_t x125 = 81;
static int64_t x148 = 139293078127952947LL;
int32_t x154 = INT32_MIN;
uint32_t x156 = UINT32_MAX;
static volatile int64_t x213 = INT64_MIN;
uint8_t x241 = 9U;
int64_t x250 = 921LL;
volatile uint8_t x252 = 3U;
uint32_t x253 = 242U;
int16_t x254 = -1;
uint16_t x255 = 3788U;
int64_t x267 = 122397098757LL;
uint8_t x268 = 2U;
static volatile int32_t x279 = -1;
int16_t x294 = INT16_MIN;
static int16_t x296 = -1;
int8_t x309 = 12;
uint64_t x312 = UINT64_MAX;
static int32_t t36 = -41480948;
uint32_t x315 = UINT32_MAX;
volatile uint64_t x316 = UINT64_MAX;
volatile uint8_t x320 = 8U;
int32_t t38 = -123;
int32_t x322 = INT32_MIN;
volatile uint32_t x333 = 121613U;
static int32_t x343 = -1849114;
int32_t t42 = 52509;
int64_t x369 = INT64_MIN;
int64_t x372 = -1LL;
int32_t x388 = -74;
int8_t x391 = 0;
static int32_t t46 = -32;
volatile int8_t x397 = INT8_MAX;
static uint8_t x404 = 1U;
uint32_t x407 = 23U;
uint64_t x413 = 888268230LLU;
static int16_t x415 = -15446;
volatile uint64_t t51 = 61564897783LLU;
volatile int16_t x454 = INT16_MAX;
int64_t t55 = INT64_MAX;
int64_t x465 = 79522087639459LL;
uint16_t x474 = 13U;
int64_t x500 = INT64_MAX;
uint16_t x517 = 930U;
int16_t x528 = -1;
static int8_t x534 = INT8_MIN;
int16_t x537 = -292;
int32_t t68 = -7344399;
int64_t x554 = INT64_MIN;
static int8_t x555 = INT8_MIN;
int16_t x566 = -5138;
volatile int8_t x567 = INT8_MIN;
int32_t x568 = -1;
static int16_t x603 = -1;
static uint8_t x604 = UINT8_MAX;
volatile int8_t x622 = INT8_MAX;
static uint64_t x624 = UINT64_MAX;
static int8_t x638 = INT8_MIN;
static int8_t x659 = -3;
static int16_t x663 = INT16_MIN;
int32_t t84 = 0;
uint8_t x670 = UINT8_MAX;
int8_t x671 = INT8_MAX;
uint32_t x672 = 881U;
int32_t t85 = -12763436;
int16_t x687 = INT16_MAX;
int64_t x689 = -562875598LL;
int64_t x693 = INT64_MAX;
volatile int64_t t89 = -1LL;
int16_t x714 = INT16_MIN;
int64_t x715 = INT64_MIN;
int16_t x720 = INT16_MAX;
int32_t t92 = -7;
static int32_t x749 = -1;
static uint32_t x757 = 5477030U;
int64_t x762 = INT64_MIN;
volatile int16_t x764 = INT16_MAX;
volatile int32_t t98 = -1277671;
int8_t x780 = INT8_MIN;


void f0(void) {
	int64_t x1 = -247612958LL;
	int8_t x2 = -1;
	int16_t x3 = 677;
	static int64_t x4 = 14963835LL;
	int64_t t0 = 10376181540336LL;

	t0 = (x1/((x2|x3)<=x4));

	if (t0 != -247612958LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	static uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 1;

	t1 = (x5/((x6|x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	uint32_t x14 = 517U;
	int64_t x15 = INT64_MIN;
	static int8_t x16 = INT8_MIN;
	static volatile int32_t t2 = INT32_MIN;

	t2 = (x13/((x14|x15)<=x16));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	static int16_t x20 = -1;
	int32_t t3 = 11;

	t3 = (x17/((x18|x19)<=x20));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	int64_t x27 = -38806908387730LL;
	uint16_t x28 = 552U;
	static volatile int32_t t4 = INT32_MAX;

	t4 = (x25/((x26|x27)<=x28));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -894119690;
	static int32_t x30 = INT32_MIN;
	volatile int32_t x31 = 11935508;
	static int64_t x32 = INT64_MAX;
	int32_t t5 = -1787;

	t5 = (x29/((x30|x31)<=x32));

	if (t5 != -894119690) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x55 = 0;
	uint16_t x56 = 2775U;

	t6 = (x53/((x54|x55)<=x56));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x61 = INT64_MAX;
	int8_t x63 = INT8_MIN;
	int64_t x64 = 3747506418752736502LL;
	int64_t t7 = INT64_MAX;

	t7 = (x61/((x62|x63)<=x64));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = 12;
	volatile int16_t x66 = -1;
	uint8_t x67 = 15U;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t8 = -26472;

	t8 = (x65/((x66|x67)<=x68));

	if (t8 != 12) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x69 = -1LL;
	volatile int64_t x70 = -1LL;
	static int16_t x72 = -1;

	t9 = (x69/((x70|x71)<=x72));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x73 = -1;
	static uint8_t x74 = UINT8_MAX;
	volatile int16_t x75 = INT16_MIN;
	static int8_t x76 = 4;
	int32_t t10 = 402;

	t10 = (x73/((x74|x75)<=x76));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x85 = 0;
	volatile int16_t x86 = -2;
	int64_t x87 = -1LL;
	int8_t x88 = INT8_MAX;
	volatile int32_t t11 = -19631687;

	t11 = (x85/((x86|x87)<=x88));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x93 = INT64_MIN;
	int64_t x94 = -44423289786279141LL;
	int32_t x95 = INT32_MIN;
	int32_t x96 = 14543043;
	volatile int64_t t12 = INT64_MIN;

	t12 = (x93/((x94|x95)<=x96));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x101 = 18125U;
	static uint64_t x102 = 122020LLU;
	volatile int64_t x104 = INT64_MIN;
	volatile uint32_t t13 = 10029061U;

	t13 = (x101/((x102|x103)<=x104));

	if (t13 != 18125U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x105 = UINT32_MAX;
	volatile int32_t x107 = INT32_MAX;
	static int16_t x108 = INT16_MAX;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (x105/((x106|x107)<=x108));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x109 = UINT32_MAX;
	volatile uint8_t x110 = UINT8_MAX;
	int16_t x111 = INT16_MIN;
	volatile uint16_t x112 = 6545U;
	uint32_t t15 = UINT32_MAX;

	t15 = (x109/((x110|x111)<=x112));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x113 = 0;
	uint16_t x114 = 1U;
	uint32_t x116 = UINT32_MAX;

	t16 = (x113/((x114|x115)<=x116));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x121 = -1;
	int16_t x122 = -1;
	volatile int16_t x124 = -1;

	t17 = (x121/((x122|x123)<=x124));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x126 = INT16_MIN;
	volatile int8_t x127 = -3;
	int8_t x128 = 1;
	int32_t t18 = 1;

	t18 = (x125/((x126|x127)<=x128));

	if (t18 != 81) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x129 = UINT8_MAX;
	static int32_t x130 = -1;
	uint8_t x131 = 25U;
	static uint8_t x132 = 12U;
	volatile int32_t t19 = 9797;

	t19 = (x129/((x130|x131)<=x132));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x137 = -1LL;
	int16_t x138 = -6978;
	volatile int64_t x139 = INT64_MIN;
	static int16_t x140 = -1;
	volatile int64_t t20 = 53713341867162LL;

	t20 = (x137/((x138|x139)<=x140));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x141 = UINT16_MAX;
	static int8_t x142 = INT8_MIN;
	int32_t x143 = 2612;
	uint8_t x144 = 2U;
	static int32_t t21 = -30;

	t21 = (x141/((x142|x143)<=x144));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x145 = 105319870LL;
	volatile uint64_t x146 = 21744371965LLU;
	static uint8_t x147 = UINT8_MAX;
	volatile int64_t t22 = -1LL;

	t22 = (x145/((x146|x147)<=x148));

	if (t22 != 105319870LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MIN;
	int32_t x151 = INT32_MIN;
	int32_t x152 = -1;
	volatile int32_t t23 = -6139;

	t23 = (x149/((x150|x151)<=x152));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x153 = -1;
	int32_t x155 = INT32_MIN;
	volatile int32_t t24 = 6376334;

	t24 = (x153/((x154|x155)<=x156));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x157 = 43U;
	static volatile int64_t x158 = INT64_MAX;
	uint64_t x159 = 116LLU;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t25 = 1730;

	t25 = (x157/((x158|x159)<=x160));

	if (t25 != 43) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x209 = 4724LLU;
	int8_t x210 = 0;
	static int16_t x211 = 0;
	int8_t x212 = INT8_MAX;
	volatile uint64_t t26 = 20800LLU;

	t26 = (x209/((x210|x211)<=x212));

	if (t26 != 4724LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x214 = INT8_MAX;
	static uint8_t x215 = 0U;
	static uint64_t x216 = UINT64_MAX;
	static int64_t t27 = INT64_MIN;

	t27 = (x213/((x214|x215)<=x216));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x242 = INT64_MIN;
	uint16_t x243 = 51U;
	int16_t x244 = INT16_MIN;
	int32_t t28 = 1881993;

	t28 = (x241/((x242|x243)<=x244));

	if (t28 != 9) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x249 = INT16_MIN;
	int64_t x251 = INT64_MIN;
	int32_t t29 = 261269;

	t29 = (x249/((x250|x251)<=x252));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x256 = 6;
	volatile uint32_t t30 = 6512U;

	t30 = (x253/((x254|x255)<=x256));

	if (t30 != 242U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x265 = 112U;
	int32_t x266 = INT32_MIN;
	int32_t t31 = 1221395;

	t31 = (x265/((x266|x267)<=x268));

	if (t31 != 112) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x269 = -8035LL;
	static int64_t x270 = -14897263296LL;
	uint64_t x271 = UINT64_MAX;
	int8_t x272 = -1;
	int64_t t32 = -890317462351LL;

	t32 = (x269/((x270|x271)<=x272));

	if (t32 != -8035LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x277 = UINT32_MAX;
	int32_t x278 = -38815838;
	int8_t x280 = INT8_MAX;
	uint32_t t33 = UINT32_MAX;

	t33 = (x277/((x278|x279)<=x280));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x293 = 1U;
	int32_t x295 = INT32_MIN;
	volatile int32_t t34 = 0;

	t34 = (x293/((x294|x295)<=x296));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	int16_t x304 = -1;
	volatile int64_t t35 = INT64_MIN;

	t35 = (x301/((x302|x303)<=x304));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x310 = INT32_MAX;
	int64_t x311 = INT64_MAX;

	t36 = (x309/((x310|x311)<=x312));

	if (t36 != 12) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	volatile int32_t t37 = -13160480;

	t37 = (x313/((x314|x315)<=x316));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x317 = 1;
	static int32_t x318 = -1;
	uint16_t x319 = 1U;

	t38 = (x317/((x318|x319)<=x320));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x321 = 20LLU;
	int16_t x323 = -1;
	uint16_t x324 = UINT16_MAX;
	volatile uint64_t t39 = 33557603443LLU;

	t39 = (x321/((x322|x323)<=x324));

	if (t39 != 20LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x334 = -1;
	static int16_t x335 = INT16_MIN;
	static int32_t x336 = INT32_MAX;
	uint32_t t40 = 825U;

	t40 = (x333/((x334|x335)<=x336));

	if (t40 != 121613U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MIN;
	volatile uint32_t x344 = UINT32_MAX;
	int32_t t41 = 6960;

	t41 = (x341/((x342|x343)<=x344));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x365 = INT16_MAX;
	int64_t x366 = INT64_MAX;
	volatile int8_t x367 = -1;
	int64_t x368 = -1LL;

	t42 = (x365/((x366|x367)<=x368));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x370 = 530LL;
	int32_t x371 = -65;
	int64_t t43 = INT64_MIN;

	t43 = (x369/((x370|x371)<=x372));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x373 = INT16_MAX;
	static int16_t x374 = -10;
	int8_t x375 = -32;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t44 = 0;

	t44 = (x373/((x374|x375)<=x376));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x385 = INT8_MIN;
	static volatile uint32_t x386 = 4U;
	int16_t x387 = INT16_MIN;
	int32_t t45 = 443;

	t45 = (x385/((x386|x387)<=x388));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x389 = 61U;
	static int16_t x390 = -1;
	volatile int8_t x392 = -1;

	t46 = (x389/((x390|x391)<=x392));

	if (t46 != 61) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x398 = INT32_MIN;
	uint16_t x399 = UINT16_MAX;
	uint16_t x400 = 254U;
	int32_t t47 = 13457;

	t47 = (x397/((x398|x399)<=x400));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x401 = -1LL;
	volatile int64_t x402 = INT64_MIN;
	int16_t x403 = 78;
	static int64_t t48 = -3LL;

	t48 = (x401/((x402|x403)<=x404));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x405 = INT64_MIN;
	int8_t x406 = 25;
	static int32_t x408 = INT32_MIN;
	volatile int64_t t49 = INT64_MIN;

	t49 = (x405/((x406|x407)<=x408));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x409 = 9040985LL;
	int32_t x410 = -4931;
	int16_t x411 = -1;
	int16_t x412 = -1;
	int64_t t50 = 3LL;

	t50 = (x409/((x410|x411)<=x412));

	if (t50 != 9040985LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x414 = INT32_MIN;
	static int8_t x416 = INT8_MAX;

	t51 = (x413/((x414|x415)<=x416));

	if (t51 != 888268230LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x421 = INT16_MAX;
	uint32_t x422 = 5U;
	uint32_t x423 = UINT32_MAX;
	volatile uint64_t x424 = UINT64_MAX;
	static volatile int32_t t52 = -631527;

	t52 = (x421/((x422|x423)<=x424));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x437 = -1213836722204LL;
	int64_t x438 = -132503697LL;
	static int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MAX;
	int64_t t53 = -91667658LL;

	t53 = (x437/((x438|x439)<=x440));

	if (t53 != -1213836722204LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x441 = -2;
	volatile int16_t x442 = 706;
	int64_t x443 = -1LL;
	uint8_t x444 = 3U;
	volatile int32_t t54 = 582380289;

	t54 = (x441/((x442|x443)<=x444));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x453 = INT64_MAX;
	uint16_t x455 = 0U;
	static volatile uint64_t x456 = 264378859LLU;

	t55 = (x453/((x454|x455)<=x456));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x457 = UINT16_MAX;
	int8_t x458 = 1;
	volatile int16_t x459 = -5;
	int32_t x460 = INT32_MAX;
	int32_t t56 = -513530;

	t56 = (x457/((x458|x459)<=x460));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x466 = -2LL;
	int8_t x467 = INT8_MIN;
	volatile int16_t x468 = INT16_MAX;
	int64_t t57 = -3853103LL;

	t57 = (x465/((x466|x467)<=x468));

	if (t57 != 79522087639459LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x473 = 6956U;
	static int16_t x475 = INT16_MIN;
	int8_t x476 = 22;
	volatile uint32_t t58 = 39642U;

	t58 = (x473/((x474|x475)<=x476));

	if (t58 != 6956U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x481 = INT32_MAX;
	static uint8_t x482 = UINT8_MAX;
	int64_t x483 = INT64_MIN;
	volatile int8_t x484 = INT8_MAX;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x481/((x482|x483)<=x484));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x485 = INT8_MIN;
	int16_t x486 = INT16_MIN;
	int8_t x487 = -1;
	int64_t x488 = -1LL;
	volatile int32_t t60 = 180913;

	t60 = (x485/((x486|x487)<=x488));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x489 = INT8_MAX;
	int64_t x490 = INT64_MIN;
	int64_t x491 = INT64_MIN;
	static int64_t x492 = INT64_MIN;
	volatile int32_t t61 = -976842;

	t61 = (x489/((x490|x491)<=x492));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x497 = 5300U;
	volatile uint32_t x498 = 80U;
	volatile int16_t x499 = INT16_MAX;
	volatile int32_t t62 = 50818534;

	t62 = (x497/((x498|x499)<=x500));

	if (t62 != 5300) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x509 = INT8_MIN;
	static uint8_t x510 = UINT8_MAX;
	static volatile int32_t x511 = INT32_MIN;
	static int8_t x512 = -1;
	static volatile int32_t t63 = 1976;

	t63 = (x509/((x510|x511)<=x512));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x513 = INT32_MIN;
	volatile uint32_t x514 = 125U;
	volatile int32_t x515 = 8435501;
	volatile int8_t x516 = -1;
	int32_t t64 = INT32_MIN;

	t64 = (x513/((x514|x515)<=x516));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x518 = 71086702U;
	int64_t x519 = -1LL;
	static uint32_t x520 = 1312U;
	volatile int32_t t65 = 4;

	t65 = (x517/((x518|x519)<=x520));

	if (t65 != 930) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x525 = 7;
	static int64_t x526 = -13955504928LL;
	static int32_t x527 = INT32_MIN;
	volatile int32_t t66 = 0;

	t66 = (x525/((x526|x527)<=x528));

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x533 = 153738909040361LLU;
	volatile int64_t x535 = INT64_MIN;
	uint32_t x536 = 11182493U;
	volatile uint64_t t67 = 1051LLU;

	t67 = (x533/((x534|x535)<=x536));

	if (t67 != 153738909040361LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x538 = 1U;
	uint64_t x539 = 253249LLU;
	volatile uint64_t x540 = UINT64_MAX;

	t68 = (x537/((x538|x539)<=x540));

	if (t68 != -292) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x549 = 1791016LLU;
	volatile int64_t x550 = INT64_MIN;
	uint8_t x551 = 1U;
	volatile uint32_t x552 = 596234709U;
	volatile uint64_t t69 = 15LLU;

	t69 = (x549/((x550|x551)<=x552));

	if (t69 != 1791016LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x553 = 36;
	int32_t x556 = -1;
	int32_t t70 = -911;

	t70 = (x553/((x554|x555)<=x556));

	if (t70 != 36) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x565 = UINT64_MAX;
	static uint64_t t71 = UINT64_MAX;

	t71 = (x565/((x566|x567)<=x568));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x577 = 8U;
	int64_t x578 = INT64_MIN;
	static int32_t x579 = INT32_MIN;
	uint32_t x580 = 1987U;
	int32_t t72 = 0;

	t72 = (x577/((x578|x579)<=x580));

	if (t72 != 8) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x585 = 25770146U;
	int64_t x586 = INT64_MIN;
	int64_t x587 = -10973062597527LL;
	int32_t x588 = INT32_MAX;
	uint32_t t73 = 207998U;

	t73 = (x585/((x586|x587)<=x588));

	if (t73 != 25770146U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x593 = UINT8_MAX;
	static uint32_t x594 = 1701U;
	static int32_t x595 = -1;
	int32_t x596 = -1;
	int32_t t74 = 0;

	t74 = (x593/((x594|x595)<=x596));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x597 = UINT8_MAX;
	volatile int64_t x598 = -1LL;
	int32_t x599 = 1;
	int32_t x600 = -1;
	int32_t t75 = -15562749;

	t75 = (x597/((x598|x599)<=x600));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x601 = INT16_MIN;
	volatile int32_t x602 = INT32_MIN;
	volatile int32_t t76 = -675003654;

	t76 = (x601/((x602|x603)<=x604));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x613 = UINT8_MAX;
	static uint64_t x614 = 0LLU;
	volatile uint32_t x615 = 3U;
	static int64_t x616 = INT64_MIN;
	int32_t t77 = 738711599;

	t77 = (x613/((x614|x615)<=x616));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x621 = 79;
	int32_t x623 = INT32_MAX;
	static volatile int32_t t78 = -63;

	t78 = (x621/((x622|x623)<=x624));

	if (t78 != 79) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x629 = UINT16_MAX;
	int8_t x630 = -1;
	int8_t x631 = INT8_MAX;
	static uint16_t x632 = UINT16_MAX;
	volatile int32_t t79 = -2744;

	t79 = (x629/((x630|x631)<=x632));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x637 = UINT16_MAX;
	int16_t x639 = -1;
	uint8_t x640 = 0U;
	volatile int32_t t80 = -284943588;

	t80 = (x637/((x638|x639)<=x640));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x645 = 2677U;
	int32_t x646 = 3446500;
	uint16_t x647 = 1U;
	static int32_t x648 = INT32_MAX;
	int32_t t81 = -238;

	t81 = (x645/((x646|x647)<=x648));

	if (t81 != 2677) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x653 = INT64_MIN;
	int32_t x654 = INT32_MIN;
	int32_t x655 = 16;
	uint64_t x656 = UINT64_MAX;
	int64_t t82 = INT64_MIN;

	t82 = (x653/((x654|x655)<=x656));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x657 = 6877;
	int8_t x658 = INT8_MIN;
	int16_t x660 = 7179;
	volatile int32_t t83 = 12;

	t83 = (x657/((x658|x659)<=x660));

	if (t83 != 6877) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x661 = UINT8_MAX;
	static int32_t x662 = 61;
	static uint8_t x664 = 1U;

	t84 = (x661/((x662|x663)<=x664));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x669 = UINT8_MAX;

	t85 = (x669/((x670|x671)<=x672));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x685 = -1;
	int16_t x686 = INT16_MIN;
	static volatile uint8_t x688 = UINT8_MAX;
	int32_t t86 = 111;

	t86 = (x685/((x686|x687)<=x688));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x690 = 27U;
	volatile uint8_t x691 = UINT8_MAX;
	uint32_t x692 = UINT32_MAX;
	int64_t t87 = 30830494LL;

	t87 = (x689/((x690|x691)<=x692));

	if (t87 != -562875598LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x694 = INT8_MAX;
	static uint32_t x695 = 194298U;
	volatile uint64_t x696 = 2666902LLU;
	int64_t t88 = INT64_MAX;

	t88 = (x693/((x694|x695)<=x696));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x697 = 1LL;
	uint8_t x698 = 1U;
	int64_t x699 = -1LL;
	uint32_t x700 = 37U;

	t89 = (x697/((x698|x699)<=x700));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x713 = -32;
	uint16_t x716 = 2712U;
	int32_t t90 = -62751;

	t90 = (x713/((x714|x715)<=x716));

	if (t90 != -32) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x717 = INT32_MAX;
	static int16_t x718 = 89;
	static volatile int32_t x719 = INT32_MIN;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x717/((x718|x719)<=x720));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x725 = INT16_MIN;
	int32_t x726 = -672;
	int8_t x727 = INT8_MIN;
	volatile int64_t x728 = INT64_MAX;

	t92 = (x725/((x726|x727)<=x728));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x741 = 2459U;
	static volatile uint16_t x742 = 31649U;
	volatile uint64_t x743 = 1LLU;
	volatile int64_t x744 = -3LL;
	uint32_t t93 = 1411U;

	t93 = (x741/((x742|x743)<=x744));

	if (t93 != 2459U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x750 = -3698;
	volatile int16_t x751 = 18;
	static int8_t x752 = -45;
	int32_t t94 = -6;

	t94 = (x749/((x750|x751)<=x752));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x758 = INT16_MIN;
	int32_t x759 = -5745583;
	uint64_t x760 = UINT64_MAX;
	static volatile uint32_t t95 = 12U;

	t95 = (x757/((x758|x759)<=x760));

	if (t95 != 5477030U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x761 = INT8_MIN;
	int16_t x763 = -366;
	int32_t t96 = 18;

	t96 = (x761/((x762|x763)<=x764));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x765 = UINT8_MAX;
	static int64_t x766 = INT64_MIN;
	int32_t x767 = 4056;
	static volatile int8_t x768 = -1;
	volatile int32_t t97 = -16;

	t97 = (x765/((x766|x767)<=x768));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x769 = 50;
	int16_t x770 = INT16_MIN;
	volatile int64_t x771 = INT64_MAX;
	static uint64_t x772 = UINT64_MAX;

	t98 = (x769/((x770|x771)<=x772));

	if (t98 != 50) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x777 = UINT64_MAX;
	volatile int32_t x778 = 7229783;
	volatile int32_t x779 = INT32_MIN;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (x777/((x778|x779)<=x780));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

