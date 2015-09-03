#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 578;
volatile uint32_t t0 = 244365821U;
volatile int64_t t1 = 1LL;
static uint8_t x18 = 2U;
int32_t x23 = INT32_MIN;
int8_t x40 = INT8_MIN;
static volatile uint64_t t5 = 8759582012509156LLU;
int16_t x82 = INT16_MAX;
volatile int64_t x90 = 4LL;
uint8_t x108 = UINT8_MAX;
int32_t t11 = 27;
uint16_t x116 = UINT16_MAX;
static int16_t x118 = 17;
static volatile uint64_t t13 = 13534304622818763LLU;
volatile int64_t t14 = 1944896361LL;
uint16_t x126 = 17U;
int64_t t15 = 24100LL;
int64_t x172 = -1LL;
int64_t x183 = -94LL;
int16_t x201 = -1;
int16_t x202 = -13;
int32_t x216 = 6479791;
static volatile int16_t x221 = INT16_MAX;
uint32_t x222 = UINT32_MAX;
int64_t t27 = -152115LL;
int8_t x226 = INT8_MIN;
volatile int64_t t28 = -5LL;
uint16_t x236 = 528U;
int32_t x237 = INT32_MIN;
static uint32_t t33 = 8U;
uint64_t x261 = 4197717153132678LLU;
int16_t x264 = 2325;
static int32_t x279 = INT32_MAX;
static volatile uint64_t t37 = 789267LLU;
volatile int32_t x289 = -1;
volatile uint16_t x291 = 1U;
static uint32_t x298 = 6332U;
static uint64_t x300 = 15LLU;
static int64_t x314 = 0LL;
volatile int32_t x317 = -1;
volatile int32_t x319 = 1;
static volatile int32_t t41 = -202294;
uint64_t x341 = 3277LLU;
int32_t x343 = INT32_MIN;
uint64_t t42 = 56936037708819LLU;
int64_t x346 = -1LL;
int16_t x348 = -1;
volatile int64_t t43 = -29560012811616LL;
uint64_t x355 = UINT64_MAX;
volatile uint8_t x356 = 19U;
uint8_t x357 = 1U;
int16_t x375 = -8902;
int8_t x382 = INT8_MIN;
volatile int32_t x385 = -1;
volatile int32_t x399 = -1;
volatile uint64_t x430 = 103LLU;
volatile int64_t x432 = INT64_MAX;
volatile int32_t x447 = INT32_MIN;
static uint64_t t53 = 356941371LLU;
static uint8_t x456 = 88U;
int32_t x507 = INT32_MAX;
static volatile uint64_t x518 = 1728346395195767LLU;
volatile uint64_t t63 = 0LLU;
int16_t x522 = INT16_MIN;
static int32_t x524 = INT32_MIN;
int64_t t64 = -13LL;
volatile int32_t t66 = 0;
uint16_t x579 = UINT16_MAX;
int8_t x601 = 4;
volatile int64_t x603 = INT64_MIN;
static volatile int32_t t76 = -1919;
int64_t x642 = -60946113630993583LL;
uint16_t x644 = 2U;
static int32_t x646 = INT32_MIN;
int64_t x658 = 252468868057446LL;
int64_t x679 = -1LL;
int64_t t83 = 45637675LL;
static uint64_t x718 = UINT64_MAX;
int8_t x721 = INT8_MIN;
int32_t x730 = INT32_MIN;
int32_t x738 = INT32_MAX;
int64_t t90 = -44LL;
uint16_t x775 = 543U;
int16_t x777 = -1;
static volatile uint32_t x778 = 34U;
static volatile int8_t x798 = INT8_MIN;
static uint32_t x808 = 87872909U;
uint8_t x812 = 14U;
uint32_t t98 = 476182U;
uint8_t x817 = 0U;


void f0(void) {
	uint32_t x2 = 67350407U;
	int32_t x3 = INT32_MIN;
	int8_t x4 = 18;

	t0 = (x1%((x2+x3)/x4));

	if (t0 != 578U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x13 = INT32_MAX;
	int16_t x14 = 3270;
	static int64_t x15 = -83552059525878211LL;
	uint8_t x16 = UINT8_MAX;

	t1 = (x13%((x14+x15)/x16));

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 1U;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = 1;
	volatile uint32_t t2 = 23944U;

	t2 = (x17%((x18+x19)/x20));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 2824554U;
	volatile int64_t x22 = -467614521LL;
	static volatile uint32_t x24 = 119269U;
	volatile int64_t t3 = -71731LL;

	t3 = (x21%((x22+x23)/x24));

	if (t3 != 18026LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x37 = 1;
	uint8_t x38 = UINT8_MAX;
	int32_t x39 = -1;
	int32_t t4 = 4051;

	t4 = (x37%((x38+x39)/x40));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = 0LLU;
	uint32_t x42 = 13394221U;
	volatile int8_t x43 = INT8_MIN;
	int64_t x44 = -1LL;

	t5 = (x41%((x42+x43)/x44));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x49 = 7U;
	uint32_t x50 = 16681153U;
	static int32_t x51 = INT32_MAX;
	volatile uint8_t x52 = UINT8_MAX;
	uint32_t t6 = 7094952U;

	t6 = (x49%((x50+x51)/x52));

	if (t6 != 7U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x81 = 738023;
	int32_t x83 = 1002185;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t7 = -83533;

	t7 = (x81%((x82+x83)/x84));

	if (t7 != 3525) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x85 = INT64_MAX;
	static int64_t x86 = -1LL;
	uint64_t x87 = 1468023050726LLU;
	static int32_t x88 = 14851481;
	volatile uint64_t t8 = 11040419751LLU;

	t8 = (x85%((x86+x87)/x88));

	if (t8 != 85169LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x89 = -13582431238LL;
	volatile uint32_t x91 = 102U;
	int32_t x92 = -1;
	volatile int64_t t9 = -3939571467579LL;

	t9 = (x89%((x90+x91)/x92));

	if (t9 != -80LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x97 = UINT16_MAX;
	volatile int32_t x98 = -1;
	volatile int64_t x99 = -60491LL;
	int8_t x100 = 1;
	volatile int64_t t10 = 31907572LL;

	t10 = (x97%((x98+x99)/x100));

	if (t10 != 5043LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x105 = INT16_MAX;
	static uint16_t x106 = UINT16_MAX;
	volatile uint8_t x107 = 3U;

	t11 = (x105%((x106+x107)/x108));

	if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x113 = INT32_MIN;
	int64_t x114 = INT64_MIN;
	uint16_t x115 = UINT16_MAX;
	static int64_t t12 = -1866065LL;

	t12 = (x113%((x114+x115)/x116));

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x117 = UINT64_MAX;
	uint16_t x119 = 6058U;
	int16_t x120 = -1;

	t13 = (x117%((x118+x119)/x120));

	if (t13 != 6074LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x121 = 126355LL;
	int32_t x122 = -14665814;
	static int64_t x123 = -1LL;
	int32_t x124 = -1;

	t14 = (x121%((x122+x123)/x124));

	if (t14 != 126355LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x125 = 23;
	int64_t x127 = INT64_MIN;
	static int16_t x128 = INT16_MIN;

	t15 = (x125%((x126+x127)/x128));

	if (t15 != 23LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x133 = 21;
	static uint8_t x134 = UINT8_MAX;
	static int32_t x135 = 3315450;
	uint8_t x136 = 42U;
	volatile int32_t t16 = 1894;

	t16 = (x133%((x134+x135)/x136));

	if (t16 != 21) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x137 = -1;
	int64_t x138 = -1LL;
	static uint64_t x139 = 79569LLU;
	static int16_t x140 = 167;
	volatile uint64_t t17 = 1279526225684LLU;

	t17 = (x137%((x138+x139)/x140));

	if (t17 != 323LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x141 = INT32_MAX;
	int16_t x142 = INT16_MIN;
	int16_t x143 = -8469;
	uint8_t x144 = UINT8_MAX;
	int32_t t18 = 507197147;

	t18 = (x141%((x142+x143)/x144));

	if (t18 != 120) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x153 = UINT8_MAX;
	static int64_t x154 = 951093410645800LL;
	static int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	volatile int64_t t19 = 145506875681092151LL;

	t19 = (x153%((x154+x155)/x156));

	if (t19 != 255LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x157 = -45133785;
	int16_t x158 = -1;
	static int8_t x159 = INT8_MIN;
	static int16_t x160 = -1;
	static volatile int32_t t20 = 2019651;

	t20 = (x157%((x158+x159)/x160));

	if (t20 != -39) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x169 = 131077765776518LL;
	int64_t x170 = -1LL;
	uint32_t x171 = 246789594U;
	int64_t t21 = -8504649LL;

	t21 = (x169%((x170+x171)/x172));

	if (t21 != 162456835LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x177 = 28;
	int64_t x178 = -1657687728902279661LL;
	volatile uint32_t x179 = 12796978U;
	static uint8_t x180 = 38U;
	int64_t t22 = -257517877395LL;

	t22 = (x177%((x178+x179)/x180));

	if (t22 != 28LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x181 = 0;
	static int64_t x182 = -7862248714LL;
	static uint16_t x184 = UINT16_MAX;
	int64_t t23 = 0LL;

	t23 = (x181%((x182+x183)/x184));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x193 = 221U;
	static int32_t x194 = 472396;
	static int16_t x195 = INT16_MIN;
	volatile int8_t x196 = -1;
	int32_t t24 = 8094562;

	t24 = (x193%((x194+x195)/x196));

	if (t24 != 221) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x203 = 472U;
	int16_t x204 = 9;
	uint32_t t25 = 3862U;

	t25 = (x201%((x202+x203)/x204));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x213 = -1;
	int64_t x214 = INT64_MAX;
	static uint16_t x215 = 0U;
	int64_t t26 = -55069141983988LL;

	t26 = (x213%((x214+x215)/x216));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x223 = INT64_MIN;
	uint16_t x224 = UINT16_MAX;

	t27 = (x221%((x222+x223)/x224));

	if (t27 != 32767LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x225 = INT8_MIN;
	int64_t x227 = -3871396846LL;
	static volatile uint16_t x228 = 543U;

	t28 = (x225%((x226+x227)/x228));

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x233 = INT16_MAX;
	volatile int8_t x234 = -1;
	static uint32_t x235 = UINT32_MAX;
	volatile uint32_t t29 = 42U;

	t29 = (x233%((x234+x235)/x236));

	if (t29 != 32767U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x238 = 0;
	int64_t x239 = INT64_MIN;
	volatile int8_t x240 = INT8_MIN;
	int64_t t30 = -16LL;

	t30 = (x237%((x238+x239)/x240));

	if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x241 = 8U;
	int64_t x242 = INT64_MIN;
	uint32_t x243 = 1469227U;
	uint16_t x244 = 1554U;
	int64_t t31 = -473926466172024541LL;

	t31 = (x241%((x242+x243)/x244));

	if (t31 != 8LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x249 = INT16_MIN;
	uint8_t x250 = UINT8_MAX;
	static uint16_t x251 = UINT16_MAX;
	static uint16_t x252 = 27769U;
	static volatile int32_t t32 = 373;

	t32 = (x249%((x250+x251)/x252));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x257 = 122224U;
	uint8_t x258 = UINT8_MAX;
	int16_t x259 = 1;
	int8_t x260 = 1;

	t33 = (x257%((x258+x259)/x260));

	if (t33 != 112U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x262 = -2183094986422871LL;
	int8_t x263 = 1;
	uint64_t t34 = 26447268342999LLU;

	t34 = (x261%((x262+x263)/x264));

	if (t34 != 4197717153132678LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x273 = INT16_MIN;
	volatile int32_t x274 = -2833;
	uint32_t x275 = 1493700527U;
	int8_t x276 = 12;
	uint32_t t35 = 4U;

	t35 = (x273%((x274+x275)/x276));

	if (t35 != 62791090U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x277 = 2;
	static uint64_t x278 = UINT64_MAX;
	uint16_t x280 = UINT16_MAX;
	volatile uint64_t t36 = 93365329LLU;

	t36 = (x277%((x278+x279)/x280));

	if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x285 = -31184;
	int16_t x286 = 22;
	uint64_t x287 = 2278146385LLU;
	volatile uint8_t x288 = 85U;

	t37 = (x285%((x286+x287)/x288));

	if (t37 != 4514666LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x290 = -992713423109475866LL;
	static int32_t x292 = 9027176;
	volatile int64_t t38 = 1LL;

	t38 = (x289%((x290+x291)/x292));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x297 = INT16_MIN;
	int64_t x299 = -21912579LL;
	volatile uint64_t t39 = 2508LLU;

	t39 = (x297%((x298+x299)/x300));

	if (t39 != 21873488LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x313 = INT32_MIN;
	uint16_t x315 = 1237U;
	static uint16_t x316 = 1U;
	volatile int64_t t40 = -2107LL;

	t40 = (x313%((x314+x315)/x316));

	if (t40 != -931LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x318 = INT32_MIN;
	volatile uint8_t x320 = UINT8_MAX;

	t41 = (x317%((x318+x319)/x320));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x342 = INT16_MAX;
	static volatile int8_t x344 = -1;

	t42 = (x341%((x342+x343)/x344));

	if (t42 != 3277LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x345 = 1327367;
	static uint16_t x347 = 789U;

	t43 = (x345%((x346+x347)/x348));

	if (t43 != 375LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x353 = -1;
	int8_t x354 = INT8_MAX;
	volatile uint64_t t44 = 29455359371291LLU;

	t44 = (x353%((x354+x355)/x356));

	if (t44 != 3LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x358 = 141236293221987680LLU;
	int32_t x359 = INT32_MAX;
	static uint8_t x360 = UINT8_MAX;
	volatile uint64_t t45 = 16920283937751LLU;

	t45 = (x357%((x358+x359)/x360));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x373 = INT16_MIN;
	int8_t x374 = 1;
	volatile uint64_t x376 = 672177560LLU;
	uint64_t t46 = 736506LLU;

	t46 = (x373%((x374+x375)/x376));

	if (t46 != 132356688LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x377 = 123U;
	volatile uint64_t x378 = UINT64_MAX;
	volatile int32_t x379 = -3490953;
	uint64_t x380 = 492933LLU;
	volatile uint64_t t47 = 1783023035LLU;

	t47 = (x377%((x378+x379)/x380));

	if (t47 != 123LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x381 = INT64_MAX;
	static uint32_t x383 = UINT32_MAX;
	static volatile int16_t x384 = 799;
	int64_t t48 = 327927100397LL;

	t48 = (x381%((x382+x383)/x384));

	if (t48 != 52487LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x386 = INT16_MIN;
	int64_t x387 = -53853833161659389LL;
	static uint8_t x388 = 57U;
	volatile int64_t t49 = -41LL;

	t49 = (x385%((x386+x387)/x388));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x397 = -1LL;
	int8_t x398 = INT8_MIN;
	uint32_t x400 = 4345U;
	volatile int64_t t50 = -2558724727327277LL;

	t50 = (x397%((x398+x399)/x400));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x429 = 1313151285243021LLU;
	int32_t x431 = INT32_MIN;
	static volatile uint64_t t51 = 4956LLU;

	t51 = (x429%((x430+x431)/x432));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x433 = 2;
	int64_t x434 = -136564100LL;
	uint64_t x435 = 13656912LLU;
	uint8_t x436 = UINT8_MAX;
	volatile uint64_t t52 = 209186LLU;

	t52 = (x433%((x434+x435)/x436));

	if (t52 != 2LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x445 = INT16_MAX;
	static uint64_t x446 = UINT64_MAX;
	volatile uint8_t x448 = 3U;

	t53 = (x445%((x446+x447)/x448));

	if (t53 != 32767LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x449 = 1;
	uint8_t x450 = UINT8_MAX;
	uint32_t x451 = 0U;
	volatile int8_t x452 = INT8_MAX;
	uint32_t t54 = 713233U;

	t54 = (x449%((x450+x451)/x452));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x453 = 1114;
	int8_t x454 = -16;
	volatile int16_t x455 = INT16_MIN;
	volatile int32_t t55 = -844;

	t55 = (x453%((x454+x455)/x456));

	if (t55 != 370) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x457 = 3241086399520LLU;
	static volatile uint64_t x458 = UINT64_MAX;
	static int64_t x459 = -6517351718971493LL;
	static int8_t x460 = 1;
	uint64_t t56 = 14523LLU;

	t56 = (x457%((x458+x459)/x460));

	if (t56 != 3241086399520LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x469 = 513U;
	static int8_t x470 = -10;
	int8_t x471 = INT8_MIN;
	int8_t x472 = INT8_MIN;
	volatile uint32_t t57 = 45683590U;

	t57 = (x469%((x470+x471)/x472));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x481 = -1;
	static int16_t x482 = INT16_MIN;
	int8_t x483 = INT8_MIN;
	int8_t x484 = -1;
	int32_t t58 = -4109;

	t58 = (x481%((x482+x483)/x484));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x497 = 64058586U;
	int8_t x498 = INT8_MIN;
	volatile int64_t x499 = 9613803682LL;
	volatile uint64_t x500 = 10041704LLU;
	volatile uint64_t t59 = 1403355991670849LLU;

	t59 = (x497%((x498+x499)/x500));

	if (t59 != 834LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x501 = UINT16_MAX;
	int32_t x502 = -1;
	static uint16_t x503 = UINT16_MAX;
	volatile int64_t x504 = 37674LL;
	volatile int64_t t60 = 775230LL;

	t60 = (x501%((x502+x503)/x504));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x505 = 6;
	static volatile int32_t x506 = -1586;
	int16_t x508 = INT16_MAX;
	int32_t t61 = 1772240;

	t61 = (x505%((x506+x507)/x508));

	if (t61 != 6) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x513 = INT32_MIN;
	int64_t x514 = INT64_MAX;
	int32_t x515 = INT32_MIN;
	int64_t x516 = -1596LL;
	volatile int64_t t62 = 28436428254775996LL;

	t62 = (x513%((x514+x515)/x516));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x517 = 76580691685LLU;
	int32_t x519 = INT32_MIN;
	int64_t x520 = 12031LL;

	t63 = (x517%((x518+x519)/x520));

	if (t63 != 76580691685LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x521 = INT8_MIN;
	int64_t x523 = INT64_MAX;

	t64 = (x521%((x522+x523)/x524));

	if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x529 = 1058U;
	int16_t x530 = 233;
	static int32_t x531 = 859;
	int64_t x532 = -1LL;
	volatile int64_t t65 = -27111387603LL;

	t65 = (x529%((x530+x531)/x532));

	if (t65 != 1058LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x533 = 2U;
	int16_t x534 = INT16_MIN;
	uint8_t x535 = 1U;
	uint8_t x536 = 90U;

	t66 = (x533%((x534+x535)/x536));

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x537 = -385;
	static int64_t x538 = INT64_MIN;
	int64_t x539 = 327284736393573797LL;
	uint16_t x540 = 416U;
	volatile int64_t t67 = 110903594829693474LL;

	t67 = (x537%((x538+x539)/x540));

	if (t67 != -385LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x541 = INT8_MAX;
	int64_t x542 = 1796734158335227288LL;
	int16_t x543 = -1;
	int8_t x544 = -24;
	int64_t t68 = -366796817234996LL;

	t68 = (x541%((x542+x543)/x544));

	if (t68 != 127LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x545 = -1;
	int64_t x546 = -1LL;
	int16_t x547 = INT16_MIN;
	int8_t x548 = INT8_MIN;
	int64_t t69 = 670410148228908LL;

	t69 = (x545%((x546+x547)/x548));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x565 = 48U;
	static int64_t x566 = INT64_MAX;
	int64_t x567 = -3180133159LL;
	volatile uint64_t x568 = 8371891LLU;
	volatile uint64_t t70 = 26736LLU;

	t70 = (x565%((x566+x567)/x568));

	if (t70 != 48LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x577 = INT64_MIN;
	int64_t x578 = INT64_MIN;
	uint32_t x580 = 36297U;
	volatile int64_t t71 = 2LL;

	t71 = (x577%((x578+x579)/x580));

	if (t71 != -100313LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x589 = UINT16_MAX;
	volatile int64_t x590 = -231918767629LL;
	int16_t x591 = INT16_MIN;
	uint16_t x592 = 57U;
	int64_t t72 = 5459634214932LL;

	t72 = (x589%((x590+x591)/x592));

	if (t72 != 65535LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x602 = 1694U;
	uint32_t x604 = UINT32_MAX;
	volatile int64_t t73 = 2473787716LL;

	t73 = (x601%((x602+x603)/x604));

	if (t73 != 4LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x605 = INT8_MIN;
	int64_t x606 = INT64_MAX;
	int64_t x607 = -17LL;
	uint8_t x608 = 2U;
	int64_t t74 = -249674021147533002LL;

	t74 = (x605%((x606+x607)/x608));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x609 = INT64_MIN;
	int16_t x610 = -1;
	int32_t x611 = INT32_MAX;
	int8_t x612 = INT8_MAX;
	int64_t t75 = -8124688559LL;

	t75 = (x609%((x610+x611)/x612));

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x621 = INT8_MIN;
	static int16_t x622 = 9373;
	volatile uint16_t x623 = 20087U;
	volatile int8_t x624 = INT8_MAX;

	t76 = (x621%((x622+x623)/x624));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x637 = -1;
	int64_t x638 = INT64_MIN;
	uint16_t x639 = 135U;
	static int64_t x640 = -1LL;
	volatile int64_t t77 = 1259760LL;

	t77 = (x637%((x638+x639)/x640));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x641 = INT16_MIN;
	uint8_t x643 = UINT8_MAX;
	static volatile int64_t t78 = -219125LL;

	t78 = (x641%((x642+x643)/x644));

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x645 = INT64_MIN;
	volatile uint8_t x647 = 13U;
	static int16_t x648 = INT16_MIN;
	volatile int64_t t79 = -2276779600104LL;

	t79 = (x645%((x646+x647)/x648));

	if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x649 = 177;
	volatile uint8_t x650 = 82U;
	int64_t x651 = INT64_MIN;
	int8_t x652 = -1;
	volatile int64_t t80 = -453008755LL;

	t80 = (x649%((x650+x651)/x652));

	if (t80 != 177LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x657 = -1LL;
	static int64_t x659 = -31367822LL;
	int8_t x660 = INT8_MIN;
	int64_t t81 = 33162393LL;

	t81 = (x657%((x658+x659)/x660));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x673 = UINT16_MAX;
	int64_t x674 = INT64_MAX;
	int32_t x675 = -1;
	int8_t x676 = 48;
	int64_t t82 = -30187624390316531LL;

	t82 = (x673%((x674+x675)/x676));

	if (t82 != 65535LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x677 = -1;
	int64_t x678 = -417998772626460LL;
	static volatile int32_t x680 = 9901;

	t83 = (x677%((x678+x679)/x680));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x705 = 651027638;
	static int16_t x706 = -1;
	int64_t x707 = INT64_MAX;
	uint16_t x708 = 2662U;
	int64_t t84 = -732565267763LL;

	t84 = (x705%((x706+x707)/x708));

	if (t84 != 651027638LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x713 = INT8_MIN;
	uint64_t x714 = 7458855849139094991LLU;
	uint16_t x715 = 922U;
	uint64_t x716 = 728554770LLU;
	uint64_t t85 = 38773786979LLU;

	t85 = (x713%((x714+x715)/x716));

	if (t85 != 5878710071LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x717 = INT8_MIN;
	static int32_t x719 = INT32_MAX;
	uint32_t x720 = 29492U;
	static volatile uint64_t t86 = 2LLU;

	t86 = (x717%((x718+x719)/x720));

	if (t86 != 33588LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x722 = -1;
	uint32_t x723 = 16564561U;
	static int64_t x724 = -1LL;
	volatile int64_t t87 = -424041373LL;

	t87 = (x721%((x722+x723)/x724));

	if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x729 = 14881U;
	volatile uint16_t x731 = UINT16_MAX;
	int16_t x732 = INT16_MIN;
	static volatile uint32_t t88 = 212213U;

	t88 = (x729%((x730+x731)/x732));

	if (t88 != 14881U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x733 = 0;
	int8_t x734 = INT8_MAX;
	static int8_t x735 = INT8_MAX;
	int32_t x736 = -16;
	int32_t t89 = 8264483;

	t89 = (x733%((x734+x735)/x736));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x737 = -1;
	uint32_t x739 = 1638929430U;
	static int64_t x740 = 161887580LL;

	t90 = (x737%((x738+x739)/x740));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x745 = -1;
	volatile int16_t x746 = -3;
	int8_t x747 = INT8_MIN;
	uint8_t x748 = 5U;
	volatile int32_t t91 = -1966876;

	t91 = (x745%((x746+x747)/x748));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x757 = UINT8_MAX;
	uint32_t x758 = 459578851U;
	int8_t x759 = -1;
	uint8_t x760 = 2U;
	uint32_t t92 = 411136U;

	t92 = (x757%((x758+x759)/x760));

	if (t92 != 255U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x773 = -6808;
	uint64_t x774 = 143038077122650LLU;
	uint8_t x776 = 8U;
	uint64_t t93 = 995404917821638LLU;

	t93 = (x773%((x774+x775)/x776));

	if (t93 != 17255113492518LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x779 = 63U;
	int64_t x780 = -1LL;
	int64_t t94 = 199897468596LL;

	t94 = (x777%((x778+x779)/x780));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x793 = 154231410232858LL;
	int16_t x794 = INT16_MIN;
	int32_t x795 = -1;
	static uint8_t x796 = 6U;
	volatile int64_t t95 = -296LL;

	t95 = (x793%((x794+x795)/x796));

	if (t95 != 1096LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x797 = INT64_MAX;
	int16_t x799 = INT16_MIN;
	int64_t x800 = -1LL;
	static volatile int64_t t96 = -294524336LL;

	t96 = (x797%((x798+x799)/x800));

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x805 = -1;
	volatile int32_t x806 = INT32_MIN;
	int32_t x807 = 1;
	volatile uint32_t t97 = 13514U;

	t97 = (x805%((x806+x807)/x808));

	if (t97 != 15U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x809 = 2;
	static uint32_t x810 = 22U;
	static uint16_t x811 = UINT16_MAX;

	t98 = (x809%((x810+x811)/x812));

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x818 = 71;
	static int16_t x819 = INT16_MAX;
	int16_t x820 = INT16_MIN;
	volatile int32_t t99 = -29;

	t99 = (x817%((x818+x819)/x820));

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

