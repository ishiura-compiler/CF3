#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MIN;
volatile int8_t x25 = 0;
volatile int8_t x31 = -1;
int16_t x32 = -2;
int64_t x39 = -3161341438LL;
int32_t t7 = -55313008;
int16_t x49 = INT16_MAX;
static int32_t x50 = 87;
uint32_t t10 = 575393723U;
volatile int8_t x98 = INT8_MIN;
int16_t x99 = INT16_MIN;
int32_t x111 = 54567;
static int64_t x118 = INT64_MAX;
static volatile int8_t x124 = 0;
int32_t t17 = -1900602;
static int16_t x125 = -1;
static volatile int32_t t19 = 19;
int16_t x137 = -1;
static uint16_t x139 = 1402U;
static uint64_t x146 = UINT64_MAX;
static int16_t x158 = -1;
volatile int32_t t22 = 38935;
static int8_t x179 = 0;
volatile uint8_t x180 = 37U;
int64_t x187 = -344097604016LL;
static volatile int32_t t27 = 0;
static uint16_t x207 = 3644U;
int32_t t32 = -3;
uint32_t x226 = UINT32_MAX;
volatile int32_t t34 = 13489;
volatile int64_t x244 = -1LL;
static int64_t x250 = INT64_MIN;
int8_t x251 = -1;
int8_t x252 = -1;
static uint64_t x266 = 5247721637841076LLU;
volatile uint64_t t37 = 113089761LLU;
int8_t x271 = -1;
int16_t x272 = 1;
volatile int32_t t38 = -123819;
static int16_t x275 = -1256;
int32_t x276 = 3;
uint32_t x277 = UINT32_MAX;
volatile int16_t x278 = 1;
uint8_t x279 = 4U;
int32_t x290 = INT32_MAX;
static int32_t t41 = -17;
int32_t x298 = INT32_MIN;
volatile int8_t x301 = INT8_MAX;
int16_t x302 = INT16_MIN;
uint32_t x337 = UINT32_MAX;
static uint64_t x339 = 2363589LLU;
int8_t x355 = -1;
static int16_t x367 = INT16_MIN;
int32_t x374 = 1;
static int32_t x378 = INT32_MAX;
uint64_t t53 = 97LLU;
int16_t x385 = -140;
uint64_t x388 = UINT64_MAX;
uint16_t x397 = 13611U;
static uint8_t x398 = UINT8_MAX;
int16_t x399 = -60;
uint8_t x400 = UINT8_MAX;
uint64_t x409 = UINT64_MAX;
volatile uint64_t t57 = 66026859LLU;
uint16_t x444 = 922U;
static int16_t x481 = -4657;
static uint32_t x492 = 180817656U;
static volatile int32_t t67 = 1;
int32_t x496 = INT32_MAX;
volatile int8_t x497 = -1;
static int8_t x504 = INT8_MIN;
int16_t x511 = INT16_MIN;
int64_t x516 = INT64_MAX;
volatile int64_t x525 = -36013802205142LL;
static int32_t x527 = -1;
uint32_t x531 = 761U;
static uint8_t x532 = UINT8_MAX;
static int32_t x544 = 248060;
int8_t x547 = INT8_MIN;
volatile int32_t t79 = -518813;
volatile uint32_t x562 = UINT32_MAX;
uint8_t x563 = UINT8_MAX;
uint8_t x589 = 2U;
int64_t x592 = -1LL;
uint32_t t86 = 303121177U;
int64_t x613 = -1LL;
volatile int64_t t88 = 140230895023LL;
volatile uint32_t x634 = 184233812U;
volatile int8_t x652 = INT8_MAX;
int32_t t94 = -215363877;
int64_t x656 = 4501509948505517914LL;
volatile uint32_t t95 = 26U;
int8_t x662 = -1;
static uint64_t t97 = 435318952580233124LLU;
volatile int64_t x686 = INT64_MIN;
uint16_t x688 = 44U;


void f0(void) {
	int16_t x10 = 0;
	volatile int16_t x11 = INT16_MAX;
	uint16_t x12 = 480U;
	int32_t t0 = 4155;

	t0 = (x9%((x10&x11)<=x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MAX;
	static int64_t x14 = -1LL;
	volatile uint8_t x15 = 1U;
	int16_t x16 = INT16_MAX;
	volatile int64_t t1 = -150157LL;

	t1 = (x13%((x14&x15)<=x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = UINT16_MAX;
	int64_t x18 = INT64_MIN;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = 0;
	volatile int32_t t2 = -2;

	t2 = (x17%((x18&x19)<=x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = INT8_MIN;
	static volatile int16_t x22 = -1;
	uint8_t x23 = 29U;
	static volatile int64_t x24 = INT64_MAX;
	static volatile int32_t t3 = 29996;

	t3 = (x21%((x22&x23)<=x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = 31498;
	int32_t x27 = INT32_MIN;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t4 = -193674917;

	t4 = (x25%((x26&x27)<=x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = 3;
	int8_t x30 = -3;
	int32_t t5 = -1592731;

	t5 = (x29%((x30&x31)<=x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = INT64_MAX;
	volatile int16_t x34 = -1;
	int16_t x35 = -1;
	uint32_t x36 = UINT32_MAX;
	volatile int64_t t6 = -23655323LL;

	t6 = (x33%((x34&x35)<=x36));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = INT16_MAX;
	int64_t x38 = -1883439329080LL;
	int16_t x40 = 500;

	t7 = (x37%((x38&x39)<=x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 69U;
	int16_t x46 = INT16_MAX;
	volatile uint16_t x47 = 107U;
	uint8_t x48 = UINT8_MAX;
	int32_t t8 = -953;

	t8 = (x45%((x46&x47)<=x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x51 = 48357U;
	static uint16_t x52 = 255U;
	volatile int32_t t9 = 3866469;

	t9 = (x49%((x50&x51)<=x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 624221U;
	volatile uint64_t x54 = 3186741794LLU;
	uint8_t x55 = UINT8_MAX;
	static uint8_t x56 = 58U;

	t10 = (x53%((x54&x55)<=x56));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x89 = 23;
	int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MAX;
	uint32_t x92 = 0U;
	int32_t t11 = 428344477;

	t11 = (x89%((x90&x91)<=x92));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x97 = INT32_MIN;
	volatile int64_t x100 = -1LL;
	static volatile int32_t t12 = 400191;

	t12 = (x97%((x98&x99)<=x100));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x101 = INT64_MAX;
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = INT64_MIN;
	volatile int64_t x104 = 3LL;
	static int64_t t13 = -7901331854457LL;

	t13 = (x101%((x102&x103)<=x104));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x105 = -12137;
	int32_t x106 = -1;
	int64_t x107 = -1LL;
	uint16_t x108 = UINT16_MAX;
	int32_t t14 = 54;

	t14 = (x105%((x106&x107)<=x108));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x109 = INT32_MIN;
	volatile int32_t x110 = -26913;
	uint32_t x112 = UINT32_MAX;
	int32_t t15 = 1879322;

	t15 = (x109%((x110&x111)<=x112));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x117 = INT16_MAX;
	int64_t x119 = INT64_MIN;
	int8_t x120 = 2;
	static volatile int32_t t16 = 29;

	t16 = (x117%((x118&x119)<=x120));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x121 = 118;
	volatile int64_t x122 = 0LL;
	volatile uint16_t x123 = UINT16_MAX;

	t17 = (x121%((x122&x123)<=x124));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x126 = INT32_MIN;
	static int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;
	volatile int32_t t18 = 451407000;

	t18 = (x125%((x126&x127)<=x128));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x129 = -1;
	static int16_t x130 = INT16_MIN;
	int16_t x131 = INT16_MIN;
	static uint64_t x132 = UINT64_MAX;

	t19 = (x129%((x130&x131)<=x132));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x138 = 36U;
	uint32_t x140 = 95154U;
	int32_t t20 = -695;

	t20 = (x137%((x138&x139)<=x140));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x145 = INT32_MIN;
	int8_t x147 = -1;
	static int16_t x148 = -1;
	static volatile int32_t t21 = -5879;

	t21 = (x145%((x146&x147)<=x148));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x157 = UINT16_MAX;
	uint8_t x159 = 2U;
	int16_t x160 = INT16_MAX;

	t22 = (x157%((x158&x159)<=x160));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x161 = INT16_MIN;
	int16_t x162 = -25;
	int8_t x163 = -16;
	uint8_t x164 = UINT8_MAX;
	int32_t t23 = 900;

	t23 = (x161%((x162&x163)<=x164));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x165 = INT16_MIN;
	volatile uint16_t x166 = UINT16_MAX;
	int64_t x167 = -7241787LL;
	uint32_t x168 = UINT32_MAX;
	int32_t t24 = 1;

	t24 = (x165%((x166&x167)<=x168));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x169 = 25;
	int32_t x170 = INT32_MIN;
	uint32_t x171 = 12U;
	static uint8_t x172 = 6U;
	static int32_t t25 = -56688561;

	t25 = (x169%((x170&x171)<=x172));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x177 = -1;
	volatile uint8_t x178 = UINT8_MAX;
	volatile int32_t t26 = -90;

	t26 = (x177%((x178&x179)<=x180));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x185 = 146U;
	int64_t x186 = -16397142115LL;
	static volatile int64_t x188 = 26LL;

	t27 = (x185%((x186&x187)<=x188));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x189 = 961;
	static int16_t x190 = 14;
	static uint32_t x191 = UINT32_MAX;
	static uint16_t x192 = 1605U;
	int32_t t28 = 14035767;

	t28 = (x189%((x190&x191)<=x192));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x193 = UINT8_MAX;
	int8_t x194 = 0;
	int8_t x195 = 0;
	static uint16_t x196 = 21135U;
	static volatile int32_t t29 = -82721;

	t29 = (x193%((x194&x195)<=x196));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = -221698358LL;
	volatile int64_t x203 = INT64_MIN;
	static int64_t x204 = INT64_MIN;
	int32_t t30 = -75078;

	t30 = (x201%((x202&x203)<=x204));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x205 = INT64_MIN;
	static uint16_t x206 = 3U;
	volatile uint64_t x208 = UINT64_MAX;
	int64_t t31 = -185998286262LL;

	t31 = (x205%((x206&x207)<=x208));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x213 = INT16_MIN;
	int16_t x214 = 331;
	static int8_t x215 = -1;
	int64_t x216 = 1136LL;

	t32 = (x213%((x214&x215)<=x216));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x225 = -1;
	volatile int32_t x227 = -678;
	int32_t x228 = -1;
	static volatile int32_t t33 = -79;

	t33 = (x225%((x226&x227)<=x228));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MAX;
	volatile int64_t x231 = -1LL;
	static int8_t x232 = INT8_MAX;

	t34 = (x229%((x230&x231)<=x232));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x241 = -43;
	static int8_t x242 = -1;
	int8_t x243 = INT8_MIN;
	static volatile int32_t t35 = 26132412;

	t35 = (x241%((x242&x243)<=x244));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x249 = INT32_MIN;
	static volatile int32_t t36 = -226;

	t36 = (x249%((x250&x251)<=x252));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x265 = UINT64_MAX;
	static volatile int64_t x267 = INT64_MIN;
	uint64_t x268 = 53195661LLU;

	t37 = (x265%((x266&x267)<=x268));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x269 = INT8_MIN;
	volatile int16_t x270 = 0;

	t38 = (x269%((x270&x271)<=x272));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x273 = 665;
	static int64_t x274 = INT64_MIN;
	volatile int32_t t39 = 73326104;

	t39 = (x273%((x274&x275)<=x276));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x280 = INT8_MAX;
	uint32_t t40 = 7847U;

	t40 = (x277%((x278&x279)<=x280));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x289 = 3U;
	uint32_t x291 = 3U;
	int32_t x292 = INT32_MAX;

	t41 = (x289%((x290&x291)<=x292));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MIN;
	int32_t t42 = 36;

	t42 = (x297%((x298&x299)<=x300));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x303 = UINT8_MAX;
	volatile int16_t x304 = 1;
	static volatile int32_t t43 = 10;

	t43 = (x301%((x302&x303)<=x304));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x313 = 14491127898831LL;
	uint64_t x314 = UINT64_MAX;
	static volatile int32_t x315 = 1;
	volatile int32_t x316 = INT32_MIN;
	int64_t t44 = 5696LL;

	t44 = (x313%((x314&x315)<=x316));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x317 = INT16_MAX;
	int16_t x318 = INT16_MAX;
	int64_t x319 = INT64_MAX;
	int16_t x320 = INT16_MAX;
	static volatile int32_t t45 = 154836212;

	t45 = (x317%((x318&x319)<=x320));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x329 = 26969732267510LL;
	int8_t x330 = INT8_MAX;
	int64_t x331 = 106565961593LL;
	uint32_t x332 = 759429621U;
	int64_t t46 = 3315330129223408422LL;

	t46 = (x329%((x330&x331)<=x332));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x338 = 0;
	int32_t x340 = 129206;
	uint32_t t47 = 20255583U;

	t47 = (x337%((x338&x339)<=x340));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x345 = 3663;
	int64_t x346 = -1LL;
	volatile int32_t x347 = INT32_MIN;
	static uint32_t x348 = 0U;
	volatile int32_t t48 = 1;

	t48 = (x345%((x346&x347)<=x348));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x349 = -7696;
	static int8_t x350 = 0;
	int8_t x351 = INT8_MIN;
	int16_t x352 = 108;
	static volatile int32_t t49 = -1;

	t49 = (x349%((x350&x351)<=x352));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = -38054LL;
	uint16_t x356 = 5613U;
	int32_t t50 = -322332288;

	t50 = (x353%((x354&x355)<=x356));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x365 = 72LLU;
	int64_t x366 = -4553882625917263079LL;
	static int8_t x368 = INT8_MIN;
	static uint64_t t51 = 39571177LLU;

	t51 = (x365%((x366&x367)<=x368));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x373 = -1;
	int8_t x375 = 39;
	uint32_t x376 = UINT32_MAX;
	int32_t t52 = 4126375;

	t52 = (x373%((x374&x375)<=x376));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x377 = UINT64_MAX;
	uint64_t x379 = 77LLU;
	static volatile int8_t x380 = -1;

	t53 = (x377%((x378&x379)<=x380));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x381 = 123U;
	int16_t x382 = INT16_MIN;
	int64_t x383 = -1594781360621LL;
	uint32_t x384 = 198273U;
	int32_t t54 = 4;

	t54 = (x381%((x382&x383)<=x384));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x386 = INT64_MAX;
	static uint64_t x387 = UINT64_MAX;
	int32_t t55 = 150241;

	t55 = (x385%((x386&x387)<=x388));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t t56 = -29165366;

	t56 = (x397%((x398&x399)<=x400));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x410 = INT64_MAX;
	uint64_t x411 = 3408LLU;
	volatile uint32_t x412 = 199137004U;

	t57 = (x409%((x410&x411)<=x412));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x413 = 2U;
	int64_t x414 = INT64_MIN;
	static volatile int32_t x415 = -542059530;
	int64_t x416 = -4317331172619LL;
	volatile int32_t t58 = 1844900;

	t58 = (x413%((x414&x415)<=x416));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x425 = -1LL;
	int16_t x426 = 5;
	int32_t x427 = INT32_MIN;
	static volatile uint16_t x428 = 132U;
	int64_t t59 = 17500404260609LL;

	t59 = (x425%((x426&x427)<=x428));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x429 = INT64_MIN;
	volatile uint32_t x430 = UINT32_MAX;
	uint8_t x431 = 11U;
	static uint64_t x432 = 102372445864796LLU;
	static int64_t t60 = 1LL;

	t60 = (x429%((x430&x431)<=x432));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x441 = UINT8_MAX;
	int8_t x442 = INT8_MAX;
	static uint64_t x443 = 1121832975746154113LLU;
	static volatile int32_t t61 = -24821;

	t61 = (x441%((x442&x443)<=x444));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x457 = 273U;
	static int64_t x458 = INT64_MIN;
	int32_t x459 = 214545;
	uint64_t x460 = UINT64_MAX;
	volatile uint32_t t62 = 39U;

	t62 = (x457%((x458&x459)<=x460));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x469 = INT8_MAX;
	static uint16_t x470 = 22894U;
	static int8_t x471 = -1;
	static int16_t x472 = INT16_MAX;
	int32_t t63 = 707296;

	t63 = (x469%((x470&x471)<=x472));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x473 = -47052;
	static volatile int16_t x474 = INT16_MAX;
	volatile uint32_t x475 = 34435160U;
	int32_t x476 = -1;
	int32_t t64 = 25105;

	t64 = (x473%((x474&x475)<=x476));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x482 = UINT64_MAX;
	int32_t x483 = INT32_MAX;
	volatile uint64_t x484 = 510668192561LLU;
	static int32_t t65 = -19261089;

	t65 = (x481%((x482&x483)<=x484));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x485 = UINT8_MAX;
	uint8_t x486 = UINT8_MAX;
	int16_t x487 = 15277;
	volatile int16_t x488 = INT16_MAX;
	volatile int32_t t66 = -34248809;

	t66 = (x485%((x486&x487)<=x488));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x489 = -1;
	int32_t x490 = INT32_MAX;
	volatile uint16_t x491 = 3672U;

	t67 = (x489%((x490&x491)<=x492));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x493 = INT8_MAX;
	uint32_t x494 = 3140U;
	uint32_t x495 = 41761388U;
	volatile int32_t t68 = -431619897;

	t68 = (x493%((x494&x495)<=x496));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x498 = INT16_MIN;
	int16_t x499 = 3;
	int8_t x500 = 41;
	volatile int32_t t69 = -10965782;

	t69 = (x497%((x498&x499)<=x500));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x501 = 7369;
	uint32_t x502 = 710112U;
	volatile int16_t x503 = -1;
	volatile int32_t t70 = -1542;

	t70 = (x501%((x502&x503)<=x504));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x505 = 167;
	static int32_t x506 = 1;
	int64_t x507 = -1LL;
	uint8_t x508 = 7U;
	int32_t t71 = -1316;

	t71 = (x505%((x506&x507)<=x508));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x509 = 7921U;
	int16_t x510 = -1;
	int16_t x512 = INT16_MIN;
	static volatile int32_t t72 = 116;

	t72 = (x509%((x510&x511)<=x512));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x513 = 43903729188LLU;
	static int16_t x514 = INT16_MIN;
	volatile int32_t x515 = INT32_MIN;
	static volatile uint64_t t73 = 112087108744825LLU;

	t73 = (x513%((x514&x515)<=x516));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x521 = 60433U;
	int16_t x522 = -1;
	static int16_t x523 = INT16_MIN;
	int16_t x524 = INT16_MAX;
	uint32_t t74 = 235807U;

	t74 = (x521%((x522&x523)<=x524));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x526 = INT32_MIN;
	volatile uint32_t x528 = UINT32_MAX;
	volatile int64_t t75 = 11660105254LL;

	t75 = (x525%((x526&x527)<=x528));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x529 = 235U;
	int64_t x530 = INT64_MIN;
	volatile int32_t t76 = -209081;

	t76 = (x529%((x530&x531)<=x532));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x537 = 52U;
	int64_t x538 = -1LL;
	static uint32_t x539 = 0U;
	int8_t x540 = INT8_MAX;
	volatile int32_t t77 = 61;

	t77 = (x537%((x538&x539)<=x540));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x541 = -1LL;
	int8_t x542 = INT8_MIN;
	int16_t x543 = INT16_MAX;
	int64_t t78 = 1477LL;

	t78 = (x541%((x542&x543)<=x544));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x545 = INT8_MAX;
	int32_t x546 = INT32_MIN;
	volatile int8_t x548 = INT8_MIN;

	t79 = (x545%((x546&x547)<=x548));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x553 = 1933396809LLU;
	volatile uint16_t x554 = UINT16_MAX;
	volatile uint32_t x555 = 7U;
	static uint16_t x556 = 14U;
	volatile uint64_t t80 = 1332040159716924LLU;

	t80 = (x553%((x554&x555)<=x556));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x561 = 3934U;
	int32_t x564 = -9171510;
	int32_t t81 = -31;

	t81 = (x561%((x562&x563)<=x564));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x569 = 15;
	static int16_t x570 = INT16_MIN;
	volatile int8_t x571 = INT8_MIN;
	int16_t x572 = INT16_MAX;
	volatile int32_t t82 = 0;

	t82 = (x569%((x570&x571)<=x572));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x581 = 0;
	int32_t x582 = INT32_MIN;
	volatile int64_t x583 = -5LL;
	int8_t x584 = INT8_MIN;
	static int32_t t83 = 230;

	t83 = (x581%((x582&x583)<=x584));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x590 = INT8_MIN;
	static int16_t x591 = -1;
	volatile int32_t t84 = -103;

	t84 = (x589%((x590&x591)<=x592));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x593 = -8;
	uint64_t x594 = 12LLU;
	int64_t x595 = -1LL;
	volatile int32_t x596 = 1046721905;
	static volatile int32_t t85 = -1164535;

	t85 = (x593%((x594&x595)<=x596));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x597 = 8U;
	static int64_t x598 = 52750323867692LL;
	volatile uint64_t x599 = 337689607LLU;
	static volatile uint64_t x600 = 35324561221007714LLU;

	t86 = (x597%((x598&x599)<=x600));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x605 = 70966155557582LLU;
	uint32_t x606 = UINT32_MAX;
	static volatile int16_t x607 = -1;
	int8_t x608 = -1;
	volatile uint64_t t87 = 7LLU;

	t87 = (x605%((x606&x607)<=x608));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x614 = INT16_MIN;
	volatile uint64_t x615 = 0LLU;
	static uint32_t x616 = UINT32_MAX;

	t88 = (x613%((x614&x615)<=x616));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x621 = UINT8_MAX;
	static uint16_t x622 = 1726U;
	uint64_t x623 = UINT64_MAX;
	int8_t x624 = INT8_MIN;
	volatile int32_t t89 = -3;

	t89 = (x621%((x622&x623)<=x624));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x629 = -3;
	int16_t x630 = -1;
	volatile int16_t x631 = INT16_MIN;
	static int16_t x632 = 640;
	static int32_t t90 = 34;

	t90 = (x629%((x630&x631)<=x632));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x633 = UINT32_MAX;
	static int16_t x635 = INT16_MAX;
	uint16_t x636 = UINT16_MAX;
	static volatile uint32_t t91 = 12567U;

	t91 = (x633%((x634&x635)<=x636));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x637 = 0LL;
	volatile int16_t x638 = INT16_MIN;
	int8_t x639 = INT8_MAX;
	uint16_t x640 = 12129U;
	int64_t t92 = 638LL;

	t92 = (x637%((x638&x639)<=x640));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x641 = 238794707827672936LL;
	static int32_t x642 = -1;
	volatile int8_t x643 = INT8_MIN;
	int16_t x644 = 3061;
	int64_t t93 = 7930258881416629LL;

	t93 = (x641%((x642&x643)<=x644));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x649 = 21;
	volatile int32_t x650 = INT32_MIN;
	int16_t x651 = -14;

	t94 = (x649%((x650&x651)<=x652));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x653 = 210U;
	int16_t x654 = INT16_MIN;
	volatile int8_t x655 = -1;

	t95 = (x653%((x654&x655)<=x656));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x657 = -1LL;
	static int8_t x658 = -1;
	static int64_t x659 = -1LL;
	volatile uint8_t x660 = UINT8_MAX;
	volatile int64_t t96 = 454910050344414037LL;

	t96 = (x657%((x658&x659)<=x660));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x661 = 321992570470666856LLU;
	int64_t x663 = -24984968183510680LL;
	int32_t x664 = INT32_MAX;

	t97 = (x661%((x662&x663)<=x664));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x669 = INT16_MAX;
	volatile uint8_t x670 = UINT8_MAX;
	static volatile int16_t x671 = -172;
	volatile uint64_t x672 = UINT64_MAX;
	volatile int32_t t98 = -3606;

	t98 = (x669%((x670&x671)<=x672));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x685 = -51;
	uint8_t x687 = 111U;
	int32_t t99 = -1001889012;

	t99 = (x685%((x686&x687)<=x688));

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

