#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
int64_t x8 = INT64_MIN;
int8_t x9 = INT8_MAX;
int8_t x15 = INT8_MIN;
uint32_t t3 = 100U;
static volatile int16_t x20 = INT16_MAX;
static int64_t x21 = INT64_MIN;
int64_t x31 = -277375962001901LL;
volatile uint64_t t7 = 59LLU;
int32_t x40 = 16641572;
uint32_t x49 = 1U;
int16_t x50 = -2;
uint8_t x53 = 68U;
int8_t x60 = INT8_MIN;
int8_t x73 = INT8_MAX;
uint16_t x75 = 15364U;
static int16_t x76 = INT16_MAX;
uint64_t x82 = UINT64_MAX;
uint64_t x91 = 5195097LLU;
static uint16_t x97 = 27U;
uint16_t x104 = 50U;
static uint8_t x105 = UINT8_MAX;
static int32_t t18 = 66178;
uint8_t x124 = 18U;
uint32_t x140 = 1254640528U;
static int16_t x142 = 1;
int16_t x144 = INT16_MAX;
static volatile int64_t x146 = INT64_MIN;
int64_t x159 = -1728292LL;
volatile uint32_t t27 = 223255839U;
volatile int8_t x198 = INT8_MAX;
int64_t x203 = -1LL;
volatile uint64_t t29 = 1250242846630726LLU;
static volatile uint16_t x206 = 49U;
int64_t x208 = INT64_MIN;
int16_t x216 = -805;
volatile uint8_t x218 = 9U;
int16_t x230 = 8351;
int32_t t33 = 0;
volatile int8_t x234 = -1;
uint16_t x236 = 98U;
static volatile int64_t x241 = 462732774100511346LL;
uint64_t x243 = 8875460342604LLU;
volatile uint64_t t37 = 6450549LLU;
volatile int8_t x256 = INT8_MIN;
int32_t x261 = 3146;
uint8_t x262 = UINT8_MAX;
volatile int8_t x263 = INT8_MIN;
static int32_t x264 = -274025;
uint16_t x265 = UINT16_MAX;
uint16_t x267 = 597U;
volatile int64_t x268 = -232077190835469489LL;
static int32_t x269 = INT32_MIN;
volatile int32_t x280 = INT32_MAX;
uint8_t x288 = 3U;
int8_t x293 = INT8_MIN;
volatile uint64_t x299 = UINT64_MAX;
int16_t x301 = INT16_MAX;
uint32_t x310 = 26U;
volatile uint16_t x314 = UINT16_MAX;
volatile int32_t x321 = INT32_MAX;
int32_t x327 = -1;
static int32_t x328 = INT32_MAX;
volatile uint16_t x336 = UINT16_MAX;
int8_t x339 = -1;
static volatile int16_t x388 = INT16_MIN;
static int64_t x414 = 2300125695682455344LL;
static uint64_t x416 = 1648488171LLU;
int16_t x417 = INT16_MAX;
int8_t x420 = INT8_MIN;
volatile uint32_t t69 = 6207U;
int32_t x436 = -16043;
int8_t x447 = 1;
int8_t x448 = -1;
uint8_t x451 = UINT8_MAX;
int16_t x457 = INT16_MIN;
uint8_t x459 = 35U;
static int32_t x460 = INT32_MAX;
int32_t x509 = -11890543;
int64_t x510 = -1LL;
int32_t x517 = INT32_MIN;
volatile uint16_t x518 = 24U;
int16_t x523 = -1;
int64_t t81 = -5LL;
uint16_t x529 = 3867U;
uint8_t x531 = 1U;
volatile int8_t x532 = INT8_MIN;
static uint64_t x534 = 8540373782LLU;
uint16_t x539 = 4319U;
static int8_t x540 = INT8_MIN;
volatile uint8_t x545 = UINT8_MAX;
volatile int64_t t86 = -11LL;
volatile uint16_t x615 = 9U;
int32_t x647 = -1;
volatile int64_t t96 = 910672LL;


void f0(void) {
	int64_t x1 = -1658061694888LL;
	volatile int16_t x3 = 403;
	int32_t x4 = INT32_MIN;
	static volatile int64_t t0 = 82061736LL;

	t0 = (x1%((x2*x3)%x4));

	if (t0 != -261LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	uint64_t x6 = 12113801LLU;
	uint16_t x7 = 733U;
	uint64_t t1 = 59LLU;

	t1 = (x5%((x6*x7)%x8));

	if (t1 != 7106866628LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = -1;
	int32_t x11 = -532517;
	static int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 61;

	t2 = (x9%((x10*x11)%x12));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int8_t x14 = -30;
	static uint32_t x16 = 838U;

	t3 = (x13%((x14*x15)%x16));

	if (t3 != 120U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -513;
	int16_t x18 = INT16_MIN;
	uint16_t x19 = UINT16_MAX;
	volatile int32_t t4 = 1850532;

	t4 = (x17%((x18*x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 29712777U;
	static uint16_t x23 = 1U;
	int32_t x24 = -1;
	volatile int64_t t5 = -109977195LL;

	t5 = (x21%((x22*x23)%x24));

	if (t5 != -14121692LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = 47204721567LLU;
	static uint32_t x30 = 19564U;
	uint32_t x32 = 3U;
	uint64_t t6 = 716LLU;

	t6 = (x29%((x30*x31)%x32));

	if (t6 != 47204721567LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -2706;
	uint64_t x34 = 29536970LLU;
	volatile int8_t x35 = INT8_MIN;
	volatile int16_t x36 = INT16_MAX;

	t7 = (x33%((x34*x35)%x36));

	if (t7 != 10162LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MAX;
	int64_t x39 = -1LL;
	volatile int64_t t8 = 133766604569275924LL;

	t8 = (x37%((x38*x39)%x40));

	if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x51 = -1LL;
	int64_t x52 = INT64_MIN;
	volatile int64_t t9 = 4057422449193323LL;

	t9 = (x49%((x50*x51)%x52));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	static int64_t x56 = INT64_MIN;
	static volatile int64_t t10 = -147180502124LL;

	t10 = (x53%((x54*x55)%x56));

	if (t10 != 68LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 9U;
	int64_t x58 = 201LL;
	uint16_t x59 = 1883U;
	volatile int64_t t11 = -119990180393375350LL;

	t11 = (x57%((x58*x59)%x60));

	if (t11 != 9LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MIN;
	volatile int32_t x70 = -37;
	int16_t x71 = 5199;
	volatile int32_t x72 = INT32_MAX;
	static volatile int32_t t12 = 0;

	t12 = (x69%((x70*x71)%x72));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x74 = INT16_MIN;
	volatile int32_t t13 = 43;

	t13 = (x73%((x74*x75)%x76));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = INT64_MIN;
	volatile int16_t x83 = -1;
	volatile int32_t x84 = 22679;
	volatile uint64_t t14 = 10LLU;

	t14 = (x81%((x82*x83)%x84));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 2373133261140460LLU;
	int8_t x90 = INT8_MIN;
	volatile uint32_t x92 = 33U;
	uint64_t t15 = 3102LLU;

	t15 = (x89%((x90*x91)%x92));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x98 = INT8_MAX;
	uint8_t x99 = 4U;
	int64_t x100 = INT64_MAX;
	static int64_t t16 = -4028551024851LL;

	t16 = (x97%((x98*x99)%x100));

	if (t16 != 27LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = 357;
	static volatile uint64_t x103 = 6942604274914LLU;
	uint64_t t17 = 69452LLU;

	t17 = (x101%((x102*x103)%x104));

	if (t17 != 32LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x106 = 5;
	int16_t x107 = INT16_MIN;
	uint16_t x108 = 26U;

	t18 = (x105%((x106*x107)%x108));

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x121 = 30096202;
	volatile int16_t x122 = 1;
	int64_t x123 = INT64_MIN;
	int64_t t19 = 506730007LL;

	t19 = (x121%((x122*x123)%x124));

	if (t19 != 2LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x137 = 2U;
	static volatile int8_t x138 = -1;
	int8_t x139 = INT8_MIN;
	volatile uint32_t t20 = 20829381U;

	t20 = (x137%((x138*x139)%x140));

	if (t20 != 2U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x141 = INT64_MIN;
	static int64_t x143 = INT64_MAX;
	volatile int64_t t21 = 11LL;

	t21 = (x141%((x142*x143)%x144));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x145 = 62090474634267LLU;
	volatile uint64_t x147 = 1365LLU;
	int8_t x148 = INT8_MIN;
	uint64_t t22 = 67173645LLU;

	t22 = (x145%((x146*x147)%x148));

	if (t22 != 62090474634267LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x157 = 5U;
	volatile uint64_t x158 = 75908612096117963LLU;
	int32_t x160 = 809054;
	volatile uint64_t t23 = 1565LLU;

	t23 = (x157%((x158*x159)%x160));

	if (t23 != 5LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x165 = 6686U;
	int8_t x166 = -1;
	int8_t x167 = 1;
	uint16_t x168 = UINT16_MAX;
	int32_t t24 = 130009694;

	t24 = (x165%((x166*x167)%x168));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x173 = INT16_MAX;
	uint16_t x174 = UINT16_MAX;
	int64_t x175 = -1LL;
	int64_t x176 = INT64_MIN;
	int64_t t25 = -432768094161LL;

	t25 = (x173%((x174*x175)%x176));

	if (t25 != 32767LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x177 = INT16_MIN;
	uint16_t x178 = 193U;
	static uint16_t x179 = 4U;
	int32_t x180 = -31134024;
	int32_t t26 = -1358;

	t26 = (x177%((x178*x179)%x180));

	if (t26 != -344) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x189 = INT16_MIN;
	uint32_t x190 = 972971547U;
	uint16_t x191 = 590U;
	int8_t x192 = -1;

	t27 = (x189%((x190*x191)%x192));

	if (t27 != 1472372166U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x197 = 0;
	int32_t x199 = -1;
	int32_t x200 = INT32_MAX;
	volatile int32_t t28 = -1;

	t28 = (x197%((x198*x199)%x200));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x201 = INT64_MIN;
	uint64_t x202 = 13740248865LLU;
	static uint64_t x204 = 398585LLU;

	t29 = (x201%((x202*x203)%x204));

	if (t29 != 5376LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x205 = -1;
	volatile int8_t x207 = INT8_MIN;
	volatile int64_t t30 = -65170425113LL;

	t30 = (x205%((x206*x207)%x208));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = 4;
	int32_t x215 = -13;
	volatile int32_t t31 = 3588;

	t31 = (x213%((x214*x215)%x216));

	if (t31 != -8) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x217 = INT16_MIN;
	int32_t x219 = -1;
	static uint32_t x220 = UINT32_MAX;
	uint32_t t32 = 641U;

	t32 = (x217%((x218*x219)%x220));

	if (t32 != 4294934528U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x229 = -1;
	static int8_t x231 = -1;
	int16_t x232 = INT16_MAX;

	t33 = (x229%((x230*x231)%x232));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x233 = -1;
	uint32_t x235 = 12U;
	uint32_t t34 = 19008885U;

	t34 = (x233%((x234*x235)%x236));

	if (t34 != 43U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x242 = UINT64_MAX;
	int64_t x244 = 148935824621837421LL;
	static volatile uint64_t t35 = 707869LLU;

	t35 = (x241%((x242*x243)%x244));

	if (t35 != 79846464810892659LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x245 = 126U;
	int64_t x246 = -1LL;
	static volatile int16_t x247 = -111;
	int16_t x248 = INT16_MAX;
	volatile int64_t t36 = 22085442LL;

	t36 = (x245%((x246*x247)%x248));

	if (t36 != 15LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x249 = INT32_MAX;
	int16_t x250 = -282;
	static uint64_t x251 = 66766395LLU;
	int32_t x252 = 5187433;

	t37 = (x249%((x250*x251)%x252));

	if (t37 != 917882LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x253 = 19U;
	uint64_t x254 = UINT64_MAX;
	int64_t x255 = -1LL;
	static uint64_t t38 = 18279948192LLU;

	t38 = (x253%((x254*x255)%x256));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t t39 = -1;

	t39 = (x261%((x262*x263)%x264));

	if (t39 != 3146) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x266 = 334003019049344496LLU;
	static uint64_t t40 = 3205011359884122681LLU;

	t40 = (x265%((x266*x267)%x268));

	if (t40 != 65535LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x270 = UINT8_MAX;
	static uint32_t x271 = UINT32_MAX;
	int8_t x272 = INT8_MIN;
	volatile uint32_t t41 = 646334U;

	t41 = (x269%((x270*x271)%x272));

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x273 = 4U;
	int32_t x274 = INT32_MIN;
	uint32_t x275 = UINT32_MAX;
	int64_t x276 = INT64_MIN;
	volatile int64_t t42 = -830115513LL;

	t42 = (x273%((x274*x275)%x276));

	if (t42 != 4LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x277 = UINT16_MAX;
	uint64_t x278 = UINT64_MAX;
	int32_t x279 = INT32_MIN;
	uint64_t t43 = 8042772679699431LLU;

	t43 = (x277%((x278*x279)%x280));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x281 = UINT16_MAX;
	int8_t x282 = -1;
	volatile int8_t x283 = -1;
	int16_t x284 = INT16_MAX;
	volatile int32_t t44 = 738;

	t44 = (x281%((x282*x283)%x284));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x285 = 3U;
	int32_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	volatile uint64_t t45 = 30LLU;

	t45 = (x285%((x286*x287)%x288));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x294 = -1;
	int64_t x295 = 8281005LL;
	int16_t x296 = INT16_MIN;
	volatile int64_t t46 = -153622481338049LL;

	t46 = (x293%((x294*x295)%x296));

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x297 = INT8_MIN;
	static int16_t x298 = -1988;
	int64_t x300 = INT64_MIN;
	static uint64_t t47 = 34070868143008LLU;

	t47 = (x297%((x298*x299)%x300));

	if (t47 != 308LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x302 = INT16_MIN;
	uint16_t x303 = 14142U;
	uint64_t x304 = 1618552447883311LLU;
	uint64_t t48 = 3008410886286LLU;

	t48 = (x301%((x302*x303)%x304));

	if (t48 != 32767LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x309 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	volatile uint8_t x312 = 7U;
	uint32_t t49 = 4144171U;

	t49 = (x309%((x310*x311)%x312));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x313 = 887;
	int32_t x315 = -6436;
	volatile int32_t x316 = INT32_MAX;
	int32_t t50 = 851076;

	t50 = (x313%((x314*x315)%x316));

	if (t50 != 887) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x322 = 728U;
	int32_t x323 = -1;
	int64_t x324 = 6466386442139566LL;
	int64_t t51 = 963228288652545615LL;

	t51 = (x321%((x322*x323)%x324));

	if (t51 != 127LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x325 = INT32_MIN;
	uint16_t x326 = 9U;
	static int32_t t52 = -2;

	t52 = (x325%((x326*x327)%x328));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x329 = 3U;
	static int32_t x330 = 16773753;
	uint32_t x331 = 2547U;
	int16_t x332 = INT16_MIN;
	static volatile uint32_t t53 = 874U;

	t53 = (x329%((x330*x331)%x332));

	if (t53 != 3U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x333 = -63593;
	int16_t x334 = INT16_MIN;
	uint32_t x335 = 2124288U;
	static volatile uint32_t t54 = 42U;

	t54 = (x333%((x334*x335)%x336));

	if (t54 != 8343U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x337 = 3109U;
	int32_t x338 = -1;
	int8_t x340 = -53;
	int32_t t55 = 1241626;

	t55 = (x337%((x338*x339)%x340));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x345 = 543305U;
	static volatile int64_t x346 = -13113LL;
	volatile uint16_t x347 = 31U;
	static uint8_t x348 = 7U;
	volatile int64_t t56 = -758360223215LL;

	t56 = (x345%((x346*x347)%x348));

	if (t56 != 5LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x349 = INT64_MAX;
	uint16_t x350 = 1177U;
	static uint64_t x351 = 460336781LLU;
	volatile int64_t x352 = -64579LL;
	static uint64_t t57 = 794LLU;

	t57 = (x349%((x350*x351)%x352));

	if (t57 != 183476633061LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x353 = INT32_MIN;
	volatile int64_t x354 = -3364327985823247LL;
	uint8_t x355 = 2U;
	int64_t x356 = INT64_MAX;
	volatile int64_t t58 = -1228339LL;

	t58 = (x353%((x354*x355)%x356));

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x357 = INT64_MAX;
	static int32_t x358 = -1;
	volatile uint8_t x359 = 1U;
	int32_t x360 = INT32_MIN;
	int64_t t59 = 254347904649LL;

	t59 = (x357%((x358*x359)%x360));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x369 = 4U;
	uint64_t x370 = 908669LLU;
	volatile uint64_t x371 = UINT64_MAX;
	volatile uint64_t x372 = 93842929142183LLU;
	volatile uint64_t t60 = 34823976373414254LLU;

	t60 = (x369%((x370*x371)%x372));

	if (t60 != 4LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x385 = 7864938181LLU;
	uint64_t x386 = UINT64_MAX;
	volatile int64_t x387 = INT64_MAX;
	volatile uint64_t t61 = 203LLU;

	t61 = (x385%((x386*x387)%x388));

	if (t61 != 7864938181LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x389 = 88811;
	volatile int16_t x390 = -1;
	int16_t x391 = 4;
	volatile uint32_t x392 = 1573218U;
	uint32_t t62 = 948885U;

	t62 = (x389%((x390*x391)%x392));

	if (t62 != 6659U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x393 = INT8_MIN;
	uint16_t x394 = 559U;
	volatile int16_t x395 = INT16_MIN;
	static int32_t x396 = INT32_MIN;
	volatile int32_t t63 = -54312;

	t63 = (x393%((x394*x395)%x396));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x397 = -1;
	int8_t x398 = -1;
	uint16_t x399 = 9U;
	volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t64 = 22996;

	t64 = (x397%((x398*x399)%x400));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x405 = INT32_MIN;
	volatile uint32_t x406 = UINT32_MAX;
	volatile int16_t x407 = -2032;
	int16_t x408 = -1;
	uint32_t t65 = 3887685U;

	t65 = (x405%((x406*x407)%x408));

	if (t65 != 1024U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x409 = INT32_MIN;
	int16_t x410 = -1;
	uint64_t x411 = UINT64_MAX;
	volatile int32_t x412 = -54421;
	static volatile uint64_t t66 = 29282LLU;

	t66 = (x409%((x410*x411)%x412));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x413 = 9;
	int8_t x415 = -1;
	static uint64_t t67 = 215085966219LLU;

	t67 = (x413%((x414*x415)%x416));

	if (t67 != 9LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x418 = INT8_MAX;
	static uint64_t x419 = 156916LLU;
	volatile uint64_t t68 = 2107297880255LLU;

	t68 = (x417%((x418*x419)%x420));

	if (t68 != 32767LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x421 = 0U;
	uint32_t x422 = UINT32_MAX;
	int8_t x423 = INT8_MAX;
	static uint16_t x424 = 10U;

	t69 = (x421%((x422*x423)%x424));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x433 = INT8_MIN;
	uint32_t x434 = 9246781U;
	int32_t x435 = -12306035;
	volatile uint32_t t70 = 476U;

	t70 = (x433%((x434*x435)%x436));

	if (t70 != 347082983U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x437 = 18U;
	static int16_t x438 = -1;
	int8_t x439 = INT8_MAX;
	int16_t x440 = INT16_MAX;
	int32_t t71 = 234735;

	t71 = (x437%((x438*x439)%x440));

	if (t71 != 18) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x445 = 0U;
	uint64_t x446 = 529LLU;
	uint64_t t72 = 30197735LLU;

	t72 = (x445%((x446*x447)%x448));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x449 = -1LL;
	volatile uint32_t x450 = UINT32_MAX;
	uint32_t x452 = UINT32_MAX;
	volatile int64_t t73 = -1207881278LL;

	t73 = (x449%((x450*x451)%x452));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x458 = -14424;
	volatile int32_t t74 = 100496;

	t74 = (x457%((x458*x459)%x460));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x461 = -1;
	int16_t x462 = 31;
	uint64_t x463 = 8258183447675825LLU;
	uint8_t x464 = UINT8_MAX;
	volatile uint64_t t75 = 14266626586824681LLU;

	t75 = (x461%((x462*x463)%x464));

	if (t75 != 15LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x469 = 18521;
	static volatile int16_t x470 = -2294;
	int8_t x471 = -1;
	uint8_t x472 = 14U;
	volatile int32_t t76 = -162;

	t76 = (x469%((x470*x471)%x472));

	if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x473 = INT16_MIN;
	int64_t x474 = -3809819183352101LL;
	volatile uint8_t x475 = 5U;
	static int16_t x476 = 14126;
	volatile int64_t t77 = -2758227801248205LL;

	t77 = (x473%((x474*x475)%x476));

	if (t77 != -2283LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x501 = 162177232841LLU;
	int16_t x502 = 618;
	uint16_t x503 = 160U;
	int8_t x504 = INT8_MAX;
	uint64_t t78 = 1001730273LLU;

	t78 = (x501%((x502*x503)%x504));

	if (t78 != 43LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x511 = 11U;
	volatile int64_t x512 = INT64_MIN;
	int64_t t79 = 2026661LL;

	t79 = (x509%((x510*x511)%x512));

	if (t79 != -5LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x519 = 94674;
	int8_t x520 = INT8_MIN;
	int32_t t80 = 496;

	t80 = (x517%((x518*x519)%x520));

	if (t80 != -32) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x521 = 355262U;
	int64_t x522 = -1LL;
	volatile uint32_t x524 = 20817U;

	t81 = (x521%((x522*x523)%x524));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x525 = INT16_MIN;
	volatile int32_t x526 = INT32_MIN;
	uint64_t x527 = 1190370481201LLU;
	static uint32_t x528 = 1094632U;
	volatile uint64_t t82 = 122185LLU;

	t82 = (x525%((x526*x527)%x528));

	if (t82 != 3648LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x530 = 756880;
	static volatile int32_t t83 = 27244181;

	t83 = (x529%((x530*x531)%x532));

	if (t83 != 11) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x533 = INT8_MIN;
	uint16_t x535 = 1967U;
	int64_t x536 = INT64_MIN;
	uint64_t t84 = 157721841365444LLU;

	t84 = (x533%((x534*x535)%x536));

	if (t84 != 6450768682834LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x537 = 6529U;
	uint64_t x538 = UINT64_MAX;
	volatile uint64_t t85 = 5573756077164444464LLU;

	t85 = (x537%((x538*x539)%x540));

	if (t85 != 6529LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x546 = -2;
	uint32_t x547 = 13151U;
	volatile int64_t x548 = INT64_MAX;

	t86 = (x545%((x546*x547)%x548));

	if (t86 != 255LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x549 = INT16_MAX;
	uint8_t x550 = UINT8_MAX;
	uint64_t x551 = 4096469580842981397LLU;
	int64_t x552 = INT64_MIN;
	volatile uint64_t t87 = 6904194799379048LLU;

	t87 = (x549%((x550*x551)%x552));

	if (t87 != 32767LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x553 = 10357U;
	uint64_t x554 = UINT64_MAX;
	static int32_t x555 = -1;
	static int32_t x556 = INT32_MIN;
	volatile uint64_t t88 = 106854771133635283LLU;

	t88 = (x553%((x554*x555)%x556));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x581 = INT8_MAX;
	uint8_t x582 = 3U;
	static int64_t x583 = 978845644LL;
	volatile int16_t x584 = -4519;
	static int64_t t89 = 8164973LL;

	t89 = (x581%((x582*x583)%x584));

	if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x585 = INT16_MIN;
	static int16_t x586 = INT16_MIN;
	static int16_t x587 = INT16_MIN;
	uint32_t x588 = 6128972U;
	static uint32_t t90 = 154810113U;

	t90 = (x585%((x586*x587)%x588));

	if (t90 != 566068U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x589 = INT8_MIN;
	uint32_t x590 = 201647U;
	int8_t x591 = -42;
	int16_t x592 = INT16_MIN;
	uint32_t t91 = 1849856921U;

	t91 = (x589%((x590*x591)%x592));

	if (t91 != 8469046U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x601 = 21U;
	int8_t x602 = INT8_MIN;
	int8_t x603 = INT8_MIN;
	int8_t x604 = INT8_MAX;
	volatile int32_t t92 = 108330;

	t92 = (x601%((x602*x603)%x604));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x605 = UINT64_MAX;
	volatile uint16_t x606 = UINT16_MAX;
	uint16_t x607 = 5U;
	volatile int16_t x608 = INT16_MIN;
	volatile uint64_t t93 = 11412108694LLU;

	t93 = (x605%((x606*x607)%x608));

	if (t93 != 9999LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x613 = 27601943389599LL;
	volatile int64_t x614 = -166668250186LL;
	volatile int8_t x616 = -14;
	volatile int64_t t94 = 41LL;

	t94 = (x613%((x614*x615)%x616));

	if (t94 != 7LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x629 = 24U;
	uint64_t x630 = 23810819133LLU;
	uint32_t x631 = UINT32_MAX;
	uint16_t x632 = UINT16_MAX;
	static volatile uint64_t t95 = 24LLU;

	t95 = (x629%((x630*x631)%x632));

	if (t95 != 24LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x645 = 3;
	volatile int64_t x646 = INT64_MAX;
	int64_t x648 = -316048LL;

	t96 = (x645%((x646*x647)%x648));

	if (t96 != 3LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x661 = 179365329866LLU;
	volatile uint32_t x662 = UINT32_MAX;
	int64_t x663 = -1LL;
	int8_t x664 = INT8_MIN;
	uint64_t t97 = 33772405616847460LLU;

	t97 = (x661%((x662*x663)%x664));

	if (t97 != 179365329866LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x673 = 132590;
	int32_t x674 = 1643022;
	uint64_t x675 = 7966LLU;
	volatile uint64_t x676 = UINT64_MAX;
	uint64_t t98 = 3007534982145737005LLU;

	t98 = (x673%((x674*x675)%x676));

	if (t98 != 132590LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x677 = INT16_MIN;
	volatile uint8_t x678 = UINT8_MAX;
	uint64_t x679 = 103LLU;
	int8_t x680 = 32;
	volatile uint64_t t99 = 1730349LLU;

	t99 = (x677%((x678*x679)%x680));

	if (t99 != 23LLU) { NG(); } else { ; }
	
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

