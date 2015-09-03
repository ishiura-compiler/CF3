#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
static int16_t x39 = -1855;
uint32_t x52 = UINT32_MAX;
static int8_t x54 = -1;
int8_t x67 = -1;
int64_t x72 = 1LL;
uint16_t x86 = 11U;
int64_t x87 = -1527LL;
volatile int32_t x99 = INT32_MAX;
int64_t t8 = -122153LL;
volatile int32_t x101 = INT32_MIN;
uint8_t x104 = UINT8_MAX;
int64_t x105 = INT64_MIN;
int16_t x106 = INT16_MAX;
uint32_t x111 = 4394U;
int64_t x112 = -13LL;
volatile int64_t t11 = 467LL;
volatile int16_t x113 = -32;
static uint16_t x115 = UINT16_MAX;
int16_t x132 = INT16_MAX;
int32_t x147 = -1;
int16_t x157 = -1;
uint64_t x164 = UINT64_MAX;
volatile uint64_t t19 = 80890736LLU;
int64_t x175 = INT64_MIN;
volatile int64_t t20 = 29137442216299LL;
uint32_t x181 = UINT32_MAX;
volatile int64_t x183 = INT64_MIN;
uint64_t x193 = 68410870155101221LLU;
int32_t t24 = -1101040;
uint16_t x206 = 1U;
int32_t x207 = INT32_MIN;
volatile int32_t t28 = -23;
uint8_t x262 = UINT8_MAX;
volatile int64_t t29 = 118LL;
int64_t x274 = INT64_MIN;
uint64_t x288 = 2017587262115LLU;
volatile uint32_t x291 = UINT32_MAX;
volatile uint32_t t32 = 180532985U;
uint32_t x304 = UINT32_MAX;
uint64_t x329 = 1125441163745413LLU;
static volatile uint8_t x333 = 0U;
volatile int16_t x343 = INT16_MAX;
int64_t x350 = INT64_MIN;
volatile uint16_t x382 = UINT16_MAX;
static int32_t x387 = 41;
volatile int64_t t45 = -1LL;
int64_t x422 = INT64_MAX;
volatile int16_t x452 = INT16_MIN;
int64_t x460 = -1LL;
static int8_t x475 = INT8_MIN;
int8_t x479 = INT8_MIN;
volatile int32_t t54 = -9097221;
volatile int32_t t56 = -76924;
int8_t x497 = INT8_MIN;
static volatile int64_t t57 = 990157336844057LL;
uint32_t x513 = UINT32_MAX;
static volatile int32_t t59 = -415108;
uint16_t x529 = 1316U;
uint8_t x538 = UINT8_MAX;
volatile uint64_t x542 = 1183246400952LLU;
volatile uint32_t t64 = 0U;
int64_t x561 = 83002794530LL;
int8_t x563 = INT8_MAX;
static uint32_t x611 = UINT32_MAX;
int8_t x622 = INT8_MIN;
int16_t x653 = INT16_MAX;
int32_t x655 = INT32_MAX;
uint16_t x676 = 5U;
volatile uint64_t x701 = UINT64_MAX;
int16_t x709 = INT16_MIN;
uint8_t x712 = 17U;
static int8_t x713 = INT8_MAX;
int8_t x716 = INT8_MIN;
int64_t t79 = -236LL;
int64_t x727 = INT64_MAX;
uint64_t x731 = UINT64_MAX;
static int32_t x735 = INT32_MAX;
static uint16_t x740 = UINT16_MAX;
volatile int64_t x742 = -170LL;
int16_t x744 = -1;
int16_t x756 = -2;
static volatile int64_t x757 = -118877616800580LL;
int8_t x760 = INT8_MIN;
int8_t x782 = 0;
volatile int32_t t89 = 349;
static volatile int64_t t90 = -405875744754LL;
int16_t x798 = -20;
static volatile int16_t x815 = INT16_MIN;
uint32_t x817 = 17864565U;
int64_t x826 = -72781948111194LL;
volatile uint32_t t96 = 300U;
static volatile uint8_t x840 = UINT8_MAX;
int64_t x843 = -21139307638251LL;
int32_t x846 = INT32_MIN;
int16_t x848 = INT16_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = 1231428488LL;
	int32_t x4 = INT32_MAX;
	uint64_t t0 = 291LLU;

	t0 = ((x1==x2)/(x3/x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x37 = UINT8_MAX;
	uint32_t x38 = 529207182U;
	static uint64_t x40 = 9639663LLU;
	static volatile uint64_t t1 = 168LLU;

	t1 = ((x37==x38)/(x39/x40));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x49 = INT16_MIN;
	volatile int32_t x50 = INT32_MAX;
	int32_t x51 = -1;
	uint32_t t2 = 109848U;

	t2 = ((x49==x50)/(x51/x52));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x53 = INT8_MIN;
	int8_t x55 = -14;
	uint64_t x56 = 61096405142LLU;
	static volatile uint64_t t3 = 116604128LLU;

	t3 = ((x53==x54)/(x55/x56));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x65 = INT8_MIN;
	uint32_t x66 = 9U;
	static int8_t x68 = -1;
	volatile int32_t t4 = -452;

	t4 = ((x65==x66)/(x67/x68));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x69 = -1;
	int16_t x70 = INT16_MAX;
	static uint16_t x71 = UINT16_MAX;
	static volatile int64_t t5 = 1421932LL;

	t5 = ((x69==x70)/(x71/x72));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x81 = 5U;
	uint8_t x82 = 7U;
	int64_t x83 = INT64_MIN;
	int64_t x84 = -112983095875628807LL;
	static int64_t t6 = -93LL;

	t6 = ((x81==x82)/(x83/x84));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x85 = -1;
	volatile int8_t x88 = 1;
	volatile int64_t t7 = -985564447943026LL;

	t7 = ((x85==x86)/(x87/x88));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x97 = UINT64_MAX;
	int32_t x98 = INT32_MIN;
	int64_t x100 = 520331547LL;

	t8 = ((x97==x98)/(x99/x100));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x102 = 25U;
	int16_t x103 = -2438;
	int32_t t9 = 6668;

	t9 = ((x101==x102)/(x103/x104));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x107 = -1;
	static uint32_t x108 = UINT32_MAX;
	volatile uint32_t t10 = 467428019U;

	t10 = ((x105==x106)/(x107/x108));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x109 = UINT32_MAX;
	volatile int64_t x110 = -21938224LL;

	t11 = ((x109==x110)/(x111/x112));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x114 = INT64_MIN;
	int32_t x116 = -1;
	volatile int32_t t12 = 6;

	t12 = ((x113==x114)/(x115/x116));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x117 = UINT32_MAX;
	static int64_t x118 = -1LL;
	int16_t x119 = -914;
	int16_t x120 = 1;
	static int32_t t13 = -310684;

	t13 = ((x117==x118)/(x119/x120));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x125 = UINT8_MAX;
	int64_t x126 = -1LL;
	int32_t x127 = INT32_MAX;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t14 = -5082;

	t14 = ((x125==x126)/(x127/x128));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x129 = INT64_MAX;
	volatile int16_t x130 = -1;
	uint64_t x131 = UINT64_MAX;
	volatile uint64_t t15 = 3466LLU;

	t15 = ((x129==x130)/(x131/x132));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x133 = 18059830LL;
	int64_t x134 = INT64_MIN;
	int64_t x135 = INT64_MIN;
	static uint64_t x136 = 36767427625602267LLU;
	volatile uint64_t t16 = 228882LLU;

	t16 = ((x133==x134)/(x135/x136));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x145 = -5606;
	uint64_t x146 = 3452LLU;
	static int64_t x148 = -1LL;
	static int64_t t17 = -1872725518523287052LL;

	t17 = ((x145==x146)/(x147/x148));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x158 = -1;
	int32_t x159 = 731608;
	static int32_t x160 = -1;
	volatile int32_t t18 = -11;

	t18 = ((x157==x158)/(x159/x160));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x161 = -1LL;
	int16_t x162 = -1;
	int8_t x163 = -1;

	t19 = ((x161==x162)/(x163/x164));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MIN;
	static int8_t x176 = INT8_MAX;

	t20 = ((x173==x174)/(x175/x176));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x182 = -682520575293308LL;
	volatile uint32_t x184 = UINT32_MAX;
	int64_t t21 = 29198132862LL;

	t21 = ((x181==x182)/(x183/x184));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x185 = UINT64_MAX;
	volatile uint64_t x186 = 362105622397015085LLU;
	int32_t x187 = -93;
	int64_t x188 = -1LL;
	volatile int64_t t22 = 126308084270094LL;

	t22 = ((x185==x186)/(x187/x188));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x189 = INT32_MAX;
	int64_t x190 = INT64_MIN;
	static int64_t x191 = INT64_MIN;
	uint16_t x192 = 3U;
	int64_t t23 = -24104772625356920LL;

	t23 = ((x189==x190)/(x191/x192));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x194 = -1LL;
	uint8_t x195 = 88U;
	static int32_t x196 = 4;

	t24 = ((x193==x194)/(x195/x196));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x205 = UINT32_MAX;
	volatile int64_t x208 = -48062LL;
	volatile int64_t t25 = -15LL;

	t25 = ((x205==x206)/(x207/x208));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x209 = -1LL;
	volatile uint64_t x210 = 11370166950118LLU;
	int8_t x211 = INT8_MIN;
	int64_t x212 = -1LL;
	volatile int64_t t26 = 3642531664LL;

	t26 = ((x209==x210)/(x211/x212));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x229 = 1;
	int32_t x230 = 1962;
	static volatile int64_t x231 = INT64_MIN;
	uint16_t x232 = UINT16_MAX;
	volatile int64_t t27 = 15702815705LL;

	t27 = ((x229==x230)/(x231/x232));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x237 = INT8_MIN;
	volatile int32_t x238 = -1;
	volatile uint16_t x239 = UINT16_MAX;
	static volatile int32_t x240 = 11191;

	t28 = ((x237==x238)/(x239/x240));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x261 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	uint16_t x264 = 2U;

	t29 = ((x261==x262)/(x263/x264));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x273 = 5U;
	volatile uint16_t x275 = UINT16_MAX;
	uint64_t x276 = 44LLU;
	volatile uint64_t t30 = 6732698832057776LLU;

	t30 = ((x273==x274)/(x275/x276));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x285 = INT64_MAX;
	uint32_t x286 = 7869627U;
	int32_t x287 = INT32_MIN;
	uint64_t t31 = 233489LLU;

	t31 = ((x285==x286)/(x287/x288));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x289 = 3554854U;
	int32_t x290 = INT32_MIN;
	uint8_t x292 = 39U;

	t32 = ((x289==x290)/(x291/x292));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x301 = UINT32_MAX;
	uint32_t x302 = UINT32_MAX;
	uint64_t x303 = 168212141910LLU;
	static volatile uint64_t t33 = 1LLU;

	t33 = ((x301==x302)/(x303/x304));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x330 = INT64_MAX;
	uint32_t x331 = 2439U;
	uint8_t x332 = UINT8_MAX;
	static uint32_t t34 = 43U;

	t34 = ((x329==x330)/(x331/x332));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x334 = INT16_MIN;
	static int64_t x335 = -989397LL;
	static int16_t x336 = -645;
	int64_t t35 = 4966938104LL;

	t35 = ((x333==x334)/(x335/x336));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x341 = UINT16_MAX;
	int16_t x342 = -1;
	volatile uint32_t x344 = 92U;
	static volatile uint32_t t36 = 32U;

	t36 = ((x341==x342)/(x343/x344));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x349 = -1LL;
	volatile int16_t x351 = -2944;
	int8_t x352 = INT8_MAX;
	int32_t t37 = -29756;

	t37 = ((x349==x350)/(x351/x352));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x353 = 8006U;
	static int32_t x354 = INT32_MIN;
	volatile int32_t x355 = INT32_MIN;
	static int8_t x356 = INT8_MIN;
	int32_t t38 = 848878;

	t38 = ((x353==x354)/(x355/x356));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x357 = INT32_MIN;
	static volatile int32_t x358 = INT32_MAX;
	int32_t x359 = INT32_MIN;
	int8_t x360 = 4;
	int32_t t39 = 1968133;

	t39 = ((x357==x358)/(x359/x360));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x369 = 10U;
	int16_t x370 = INT16_MIN;
	int64_t x371 = -1LL;
	static int32_t x372 = -1;
	volatile int64_t t40 = -5568142281LL;

	t40 = ((x369==x370)/(x371/x372));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	int32_t x375 = INT32_MIN;
	static int8_t x376 = INT8_MIN;
	int32_t t41 = -14479;

	t41 = ((x373==x374)/(x375/x376));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x381 = 6U;
	int32_t x383 = INT32_MIN;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t42 = -75478397;

	t42 = ((x381==x382)/(x383/x384));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x385 = 2U;
	int32_t x386 = INT32_MAX;
	volatile uint8_t x388 = 1U;
	int32_t t43 = -962;

	t43 = ((x385==x386)/(x387/x388));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x389 = INT32_MIN;
	int64_t x390 = -30511033748020671LL;
	int64_t x391 = INT64_MAX;
	int32_t x392 = INT32_MAX;
	static int64_t t44 = -22849607LL;

	t44 = ((x389==x390)/(x391/x392));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x393 = INT16_MAX;
	uint8_t x394 = 2U;
	int64_t x395 = INT64_MIN;
	uint32_t x396 = UINT32_MAX;

	t45 = ((x393==x394)/(x395/x396));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x397 = 4;
	volatile int8_t x398 = INT8_MIN;
	int32_t x399 = -1;
	uint32_t x400 = 1682459026U;
	uint32_t t46 = 6542U;

	t46 = ((x397==x398)/(x399/x400));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x421 = INT16_MAX;
	volatile int8_t x423 = INT8_MIN;
	int16_t x424 = -1;
	static int32_t t47 = 123578;

	t47 = ((x421==x422)/(x423/x424));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x433 = 366672972U;
	volatile int32_t x434 = INT32_MIN;
	volatile uint64_t x435 = 9191LLU;
	uint32_t x436 = 113U;
	static volatile uint64_t t48 = 9291299297239003LLU;

	t48 = ((x433==x434)/(x435/x436));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x449 = 10492U;
	int64_t x450 = 0LL;
	static volatile int64_t x451 = INT64_MIN;
	int64_t t49 = -28782175913LL;

	t49 = ((x449==x450)/(x451/x452));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x457 = 1;
	uint32_t x458 = 693381U;
	int8_t x459 = -1;
	volatile int64_t t50 = 99905LL;

	t50 = ((x457==x458)/(x459/x460));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x461 = UINT64_MAX;
	uint16_t x462 = 14692U;
	uint8_t x463 = UINT8_MAX;
	int16_t x464 = 75;
	int32_t t51 = 72633;

	t51 = ((x461==x462)/(x463/x464));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x469 = 1;
	volatile int32_t x470 = INT32_MIN;
	uint16_t x471 = UINT16_MAX;
	int8_t x472 = -2;
	volatile int32_t t52 = 507257486;

	t52 = ((x469==x470)/(x471/x472));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x473 = INT8_MAX;
	static int16_t x474 = 28;
	int8_t x476 = INT8_MIN;
	volatile int32_t t53 = -36090;

	t53 = ((x473==x474)/(x475/x476));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x477 = 4U;
	static int32_t x478 = -1;
	volatile int8_t x480 = 39;

	t54 = ((x477==x478)/(x479/x480));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x481 = 403;
	static int64_t x482 = INT64_MIN;
	uint64_t x483 = UINT64_MAX;
	volatile uint32_t x484 = 26U;
	volatile uint64_t t55 = 4009168159206619662LLU;

	t55 = ((x481==x482)/(x483/x484));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x489 = -13881755LL;
	static uint64_t x490 = 34608906821264972LLU;
	uint16_t x491 = 7246U;
	uint8_t x492 = 3U;

	t56 = ((x489==x490)/(x491/x492));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x498 = 1U;
	volatile int64_t x499 = 1069LL;
	uint32_t x500 = 147U;

	t57 = ((x497==x498)/(x499/x500));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x505 = -4569401;
	int32_t x506 = INT32_MAX;
	int32_t x507 = INT32_MIN;
	int32_t x508 = INT32_MIN;
	int32_t t58 = -256894;

	t58 = ((x505==x506)/(x507/x508));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x514 = -1;
	uint8_t x515 = UINT8_MAX;
	uint8_t x516 = 12U;

	t59 = ((x513==x514)/(x515/x516));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x525 = INT64_MIN;
	int32_t x526 = -1;
	int32_t x527 = INT32_MAX;
	uint8_t x528 = UINT8_MAX;
	int32_t t60 = -134718;

	t60 = ((x525==x526)/(x527/x528));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x530 = 59364439943435972LL;
	int32_t x531 = INT32_MIN;
	volatile int32_t x532 = 32;
	volatile int32_t t61 = 6;

	t61 = ((x529==x530)/(x531/x532));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x537 = INT32_MAX;
	int16_t x539 = -77;
	static int16_t x540 = -12;
	volatile int32_t t62 = 1859;

	t62 = ((x537==x538)/(x539/x540));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x541 = INT16_MAX;
	volatile int32_t x543 = INT32_MIN;
	int8_t x544 = INT8_MIN;
	volatile int32_t t63 = -6671;

	t63 = ((x541==x542)/(x543/x544));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x545 = 11937U;
	static volatile int32_t x546 = INT32_MAX;
	uint32_t x547 = UINT32_MAX;
	int16_t x548 = INT16_MAX;

	t64 = ((x545==x546)/(x547/x548));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x562 = INT8_MIN;
	static uint32_t x564 = 11U;
	uint32_t t65 = 3U;

	t65 = ((x561==x562)/(x563/x564));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x573 = 115LLU;
	int16_t x574 = INT16_MIN;
	volatile int8_t x575 = 5;
	volatile int32_t x576 = -1;
	int32_t t66 = 2080553;

	t66 = ((x573==x574)/(x575/x576));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x581 = -48;
	volatile uint8_t x582 = 52U;
	uint64_t x583 = 75595089LLU;
	volatile uint8_t x584 = UINT8_MAX;
	uint64_t t67 = 3864325010946LLU;

	t67 = ((x581==x582)/(x583/x584));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x589 = 14;
	volatile int32_t x590 = INT32_MIN;
	volatile int64_t x591 = INT64_MAX;
	int32_t x592 = -1;
	int64_t t68 = -24712010556017LL;

	t68 = ((x589==x590)/(x591/x592));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x609 = 1U;
	static volatile int8_t x610 = -1;
	int32_t x612 = INT32_MAX;
	uint32_t t69 = 2533U;

	t69 = ((x609==x610)/(x611/x612));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x621 = 15U;
	static int32_t x623 = INT32_MIN;
	int8_t x624 = INT8_MAX;
	int32_t t70 = 2344;

	t70 = ((x621==x622)/(x623/x624));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x625 = 1774U;
	int8_t x626 = INT8_MAX;
	static int64_t x627 = -609817174050LL;
	int32_t x628 = INT32_MIN;
	int64_t t71 = 6180LL;

	t71 = ((x625==x626)/(x627/x628));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x654 = INT32_MIN;
	int8_t x656 = INT8_MAX;
	int32_t t72 = -4979731;

	t72 = ((x653==x654)/(x655/x656));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x657 = UINT8_MAX;
	int64_t x658 = -152581108425673LL;
	int32_t x659 = INT32_MIN;
	uint16_t x660 = UINT16_MAX;
	int32_t t73 = -11284;

	t73 = ((x657==x658)/(x659/x660));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x673 = 75U;
	int64_t x674 = -324461105LL;
	static volatile uint8_t x675 = 10U;
	int32_t t74 = 1348694;

	t74 = ((x673==x674)/(x675/x676));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x689 = 239345LLU;
	uint8_t x690 = 30U;
	static volatile int32_t x691 = -1;
	uint64_t x692 = 25109278447812LLU;
	volatile uint64_t t75 = 734386629LLU;

	t75 = ((x689==x690)/(x691/x692));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x693 = INT8_MIN;
	int8_t x694 = INT8_MAX;
	static volatile uint16_t x695 = UINT16_MAX;
	int64_t x696 = -1LL;
	volatile int64_t t76 = 28609LL;

	t76 = ((x693==x694)/(x695/x696));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x702 = UINT8_MAX;
	uint32_t x703 = UINT32_MAX;
	int8_t x704 = -2;
	static volatile uint32_t t77 = 194U;

	t77 = ((x701==x702)/(x703/x704));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x710 = UINT16_MAX;
	static int16_t x711 = 365;
	int32_t t78 = 52;

	t78 = ((x709==x710)/(x711/x712));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x714 = INT16_MIN;
	int64_t x715 = INT64_MAX;

	t79 = ((x713==x714)/(x715/x716));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x725 = 0;
	int64_t x726 = -15018804643583LL;
	static int16_t x728 = 3;
	volatile int64_t t80 = 1LL;

	t80 = ((x725==x726)/(x727/x728));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x729 = 6U;
	static int8_t x730 = INT8_MIN;
	uint32_t x732 = UINT32_MAX;
	volatile uint64_t t81 = 1075921LLU;

	t81 = ((x729==x730)/(x731/x732));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x733 = UINT16_MAX;
	int8_t x734 = -35;
	int16_t x736 = INT16_MAX;
	volatile int32_t t82 = -39175;

	t82 = ((x733==x734)/(x735/x736));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x737 = INT32_MAX;
	int8_t x738 = -4;
	int32_t x739 = INT32_MIN;
	volatile int32_t t83 = -283486;

	t83 = ((x737==x738)/(x739/x740));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x741 = INT16_MAX;
	static volatile uint8_t x743 = 6U;
	int32_t t84 = -51668607;

	t84 = ((x741==x742)/(x743/x744));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x745 = -1;
	uint64_t x746 = UINT64_MAX;
	volatile uint16_t x747 = UINT16_MAX;
	int64_t x748 = -1LL;
	static volatile int64_t t85 = -399259866LL;

	t85 = ((x745==x746)/(x747/x748));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x753 = INT8_MAX;
	uint8_t x754 = UINT8_MAX;
	int32_t x755 = -249974;
	int32_t t86 = 1517;

	t86 = ((x753==x754)/(x755/x756));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x758 = UINT8_MAX;
	volatile int8_t x759 = INT8_MIN;
	static volatile int32_t t87 = -1365769;

	t87 = ((x757==x758)/(x759/x760));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x769 = INT8_MIN;
	int8_t x770 = INT8_MAX;
	int64_t x771 = INT64_MIN;
	volatile int16_t x772 = INT16_MAX;
	volatile int64_t t88 = -18461LL;

	t88 = ((x769==x770)/(x771/x772));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x781 = UINT64_MAX;
	int16_t x783 = INT16_MIN;
	int8_t x784 = -3;

	t89 = ((x781==x782)/(x783/x784));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x785 = 19U;
	volatile int64_t x786 = -27725647706576LL;
	static int64_t x787 = -142LL;
	static uint8_t x788 = 30U;

	t90 = ((x785==x786)/(x787/x788));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x797 = INT64_MIN;
	int32_t x799 = INT32_MIN;
	uint8_t x800 = UINT8_MAX;
	volatile int32_t t91 = -131065;

	t91 = ((x797==x798)/(x799/x800));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x805 = 25;
	int64_t x806 = INT64_MAX;
	int8_t x807 = INT8_MAX;
	static int16_t x808 = -1;
	static volatile int32_t t92 = 10;

	t92 = ((x805==x806)/(x807/x808));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x809 = 61U;
	volatile int64_t x810 = -1LL;
	volatile int64_t x811 = INT64_MIN;
	uint64_t x812 = 2791669911752575LLU;
	volatile uint64_t t93 = 117050937372450794LLU;

	t93 = ((x809==x810)/(x811/x812));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x813 = 2622U;
	int32_t x814 = INT32_MAX;
	int64_t x816 = 6LL;
	volatile int64_t t94 = 98628687062LL;

	t94 = ((x813==x814)/(x815/x816));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x818 = 525634401142LLU;
	uint64_t x819 = 710200210637645683LLU;
	static int64_t x820 = 18170LL;
	volatile uint64_t t95 = 30047919LLU;

	t95 = ((x817==x818)/(x819/x820));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x825 = INT16_MIN;
	uint32_t x827 = UINT32_MAX;
	uint32_t x828 = 84654U;

	t96 = ((x825==x826)/(x827/x828));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x837 = UINT8_MAX;
	int8_t x838 = INT8_MIN;
	int16_t x839 = INT16_MAX;
	static int32_t t97 = -30260446;

	t97 = ((x837==x838)/(x839/x840));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x841 = INT32_MIN;
	volatile int8_t x842 = -1;
	volatile uint8_t x844 = 6U;
	static volatile int64_t t98 = -310LL;

	t98 = ((x841==x842)/(x843/x844));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x845 = INT64_MIN;
	int32_t x847 = INT32_MAX;
	int32_t t99 = 17;

	t99 = ((x845==x846)/(x847/x848));

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

