#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
int32_t x4 = INT32_MIN;
int8_t x9 = INT8_MIN;
int64_t x17 = INT64_MAX;
static volatile int32_t x21 = 1;
uint32_t x23 = UINT32_MAX;
uint32_t x31 = UINT32_MAX;
static int16_t x32 = -1;
static int64_t x33 = -1LL;
static uint32_t x41 = 364U;
int16_t x42 = INT16_MIN;
int64_t t8 = -62333865LL;
static int64_t x61 = INT64_MAX;
static int64_t x62 = INT64_MAX;
static int64_t x67 = -1463LL;
int8_t x73 = -31;
uint32_t x77 = 110883U;
int8_t x79 = -1;
static uint16_t x80 = UINT16_MAX;
uint32_t t12 = 1U;
uint32_t x88 = 92221U;
volatile uint64_t t14 = 8449882343524461LLU;
static volatile int8_t x110 = INT8_MIN;
int16_t x112 = 1002;
uint8_t x127 = 5U;
static uint16_t x136 = 3U;
static uint32_t t17 = 876588U;
static int16_t x140 = INT16_MIN;
volatile int32_t t18 = 120687903;
uint8_t x150 = 87U;
static volatile int32_t x151 = INT32_MAX;
int8_t x154 = 10;
uint16_t x155 = 7U;
int32_t x157 = INT32_MAX;
static int8_t x158 = INT8_MIN;
volatile int32_t t22 = 56397;
static uint16_t x164 = UINT16_MAX;
uint8_t x165 = 42U;
int32_t x170 = -1;
uint8_t x175 = 8U;
uint32_t x176 = UINT32_MAX;
int64_t t26 = -2968265220558936LL;
int8_t x182 = INT8_MIN;
static int8_t x186 = -1;
int8_t x197 = INT8_MAX;
int64_t x218 = 855705LL;
uint16_t x223 = 4U;
uint16_t x238 = 47U;
uint16_t x251 = 2916U;
uint32_t t39 = 67856634U;
static int32_t t40 = -254509169;
int16_t x298 = INT16_MIN;
uint8_t x328 = 25U;
static uint64_t t45 = 14295868322023LLU;
uint8_t x333 = 5U;
int8_t x334 = -15;
volatile uint64_t t48 = 9019238963LLU;
int64_t x387 = -92LL;
int8_t x393 = INT8_MIN;
uint32_t x399 = UINT32_MAX;
int64_t t53 = -49909547513520LL;
volatile uint32_t x403 = 48300638U;
int64_t t54 = -39005504LL;
static int64_t t57 = -26LL;
int8_t x427 = -29;
uint32_t x446 = UINT32_MAX;
static int8_t x447 = INT8_MAX;
uint64_t t60 = 4436684852738074457LLU;
volatile int32_t x468 = INT32_MAX;
int32_t x471 = -1;
uint64_t x478 = 8045199539LLU;
volatile int8_t x479 = -53;
uint32_t x482 = UINT32_MAX;
int16_t x483 = INT16_MIN;
int64_t x484 = -1LL;
int64_t t65 = -9928918LL;
volatile int16_t x503 = -1;
static uint64_t x525 = 126831780241LLU;
volatile uint64_t t71 = 5870038LLU;
uint64_t x533 = 56LLU;
uint16_t x536 = UINT16_MAX;
static int32_t x541 = -1;
volatile int8_t x544 = INT8_MIN;
volatile int32_t t73 = -790369254;
int64_t t75 = 3263346220591021446LL;
static int16_t x592 = INT16_MAX;
int64_t x607 = -33651LL;
uint64_t x628 = 708122LLU;
uint64_t t82 = 30180826534172327LLU;
static uint16_t x629 = 5U;
static uint32_t t83 = 476486U;
uint16_t x641 = 6719U;
uint32_t t84 = 580341U;
int64_t x646 = INT64_MAX;
static int64_t t85 = -108276895278005101LL;
volatile int64_t t86 = 937527289563075889LL;
static volatile int16_t x653 = INT16_MIN;
static uint16_t x656 = 5224U;
int16_t x657 = INT16_MAX;
int16_t x659 = -1239;
volatile int8_t x670 = 35;
int64_t t89 = -1089476130LL;
volatile int8_t x678 = 41;
int32_t x679 = -405;
uint16_t x680 = UINT16_MAX;
int32_t x682 = INT32_MIN;
int64_t x684 = INT64_MIN;
int32_t x693 = -27632;
static int64_t t95 = 6662928271003LL;
int8_t x736 = -1;
uint64_t t96 = 4069633237LLU;
int32_t x739 = -5368203;
static int64_t t97 = 1013824195247796330LL;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	static int32_t x3 = -2;
	volatile int32_t t0 = 1396079;

	t0 = (x1%((x2&x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = -1111961;
	int64_t x7 = INT64_MIN;
	static int64_t x8 = -415LL;
	volatile int64_t t1 = 24551155895326312LL;

	t1 = (x5%((x6&x7)&x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x10 = 31179U;
	int16_t x11 = 2585;
	int32_t x12 = INT32_MAX;
	static volatile uint32_t t2 = 131223715U;

	t2 = (x9%((x10&x11)&x12));

	if (t2 != 536U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MAX;
	uint64_t x19 = UINT64_MAX;
	int64_t x20 = -1LL;
	volatile uint64_t t3 = 229LLU;

	t3 = (x17%((x18&x19)&x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = -1;
	static uint8_t x24 = UINT8_MAX;
	volatile uint32_t t4 = 1882592506U;

	t4 = (x21%((x22&x23)&x24));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	int16_t x26 = INT16_MIN;
	uint32_t x27 = UINT32_MAX;
	static int16_t x28 = -1;
	static volatile uint32_t t5 = 160U;

	t5 = (x25%((x26&x27)&x28));

	if (t5 != 255U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = 211;
	int16_t x30 = -1;
	static uint32_t t6 = 8580U;

	t6 = (x29%((x30&x31)&x32));

	if (t6 != 211U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = INT64_MAX;
	int32_t x35 = INT32_MIN;
	static int16_t x36 = -1;
	static volatile int64_t t7 = 12651390665541LL;

	t7 = (x33%((x34&x35)&x36));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x43 = INT64_MIN;
	int64_t x44 = INT64_MIN;

	t8 = (x41%((x42&x43)&x44));

	if (t8 != 364LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x63 = 23LLU;
	uint32_t x64 = 8043595U;
	volatile uint64_t t9 = 6LLU;

	t9 = (x61%((x62&x63)&x64));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x65 = -1LL;
	int8_t x66 = INT8_MIN;
	static int8_t x68 = -1;
	volatile int64_t t10 = 0LL;

	t10 = (x65%((x66&x67)&x68));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x74 = -2062724581LL;
	int8_t x75 = INT8_MIN;
	int16_t x76 = -1;
	int64_t t11 = -844950556775082989LL;

	t11 = (x73%((x74&x75)&x76));

	if (t11 != -31LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x78 = -1;

	t12 = (x77%((x78&x79)&x80));

	if (t12 != 45348U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x85 = INT64_MAX;
	int16_t x86 = -1;
	volatile int32_t x87 = -21757;
	int64_t t13 = 280820LL;

	t13 = (x85%((x86&x87)&x88));

	if (t13 != 4999LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x97 = INT64_MAX;
	uint64_t x98 = 273197093678991LLU;
	uint16_t x99 = 11920U;
	uint8_t x100 = UINT8_MAX;

	t14 = (x97%((x98&x99)&x100));

	if (t14 != 127LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x109 = -161979LL;
	static int16_t x111 = -12;
	int64_t t15 = 579836750LL;

	t15 = (x109%((x110&x111)&x112));

	if (t15 != -699LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x125 = -1LL;
	int8_t x126 = -1;
	volatile int8_t x128 = -1;
	volatile int64_t t16 = -4485098516LL;

	t16 = (x125%((x126&x127)&x128));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x133 = 94U;
	int8_t x134 = -1;
	volatile int32_t x135 = -6;

	t17 = (x133%((x134&x135)&x136));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x137 = UINT8_MAX;
	int8_t x138 = -1;
	int8_t x139 = INT8_MIN;

	t18 = (x137%((x138&x139)&x140));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x141 = 7U;
	int8_t x142 = INT8_MIN;
	volatile uint32_t x143 = 805U;
	int32_t x144 = 84971;
	volatile uint32_t t19 = 236021U;

	t19 = (x141%((x142&x143)&x144));

	if (t19 != 7U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x149 = UINT64_MAX;
	int64_t x152 = -29315488079LL;
	volatile uint64_t t20 = 41651322LLU;

	t20 = (x149%((x150&x151)&x152));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x153 = INT32_MIN;
	int16_t x156 = -1;
	volatile int32_t t21 = 26;

	t21 = (x153%((x154&x155)&x156));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x159 = INT8_MIN;
	static volatile int32_t x160 = INT32_MAX;

	t22 = (x157%((x158&x159)&x160));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x161 = INT64_MAX;
	uint32_t x162 = 5U;
	int16_t x163 = 31;
	volatile int64_t t23 = -779569583LL;

	t23 = (x161%((x162&x163)&x164));

	if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x166 = -1;
	static uint8_t x167 = UINT8_MAX;
	int16_t x168 = -1;
	static volatile int32_t t24 = 494;

	t24 = (x165%((x166&x167)&x168));

	if (t24 != 42) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x169 = UINT64_MAX;
	volatile uint64_t x171 = 29086019296294589LLU;
	volatile int16_t x172 = 1;
	uint64_t t25 = 38724162225LLU;

	t25 = (x169%((x170&x171)&x172));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x173 = -17942012643509LL;
	uint16_t x174 = 11U;

	t26 = (x173%((x174&x175)&x176));

	if (t26 != -5LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x177 = UINT16_MAX;
	volatile int64_t x178 = INT64_MIN;
	static int32_t x179 = -315556;
	int8_t x180 = INT8_MIN;
	int64_t t27 = -16696967036LL;

	t27 = (x177%((x178&x179)&x180));

	if (t27 != 65535LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x181 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	static int32_t x184 = INT32_MAX;
	static int32_t t28 = -10466;

	t28 = (x181%((x182&x183)&x184));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x185 = 1;
	int8_t x187 = INT8_MAX;
	int16_t x188 = 92;
	int32_t t29 = 7625;

	t29 = (x185%((x186&x187)&x188));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MAX;
	volatile int8_t x191 = -1;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t30 = -6274532;

	t30 = (x189%((x190&x191)&x192));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MAX;
	uint32_t x195 = 123U;
	int8_t x196 = INT8_MAX;
	volatile int64_t t31 = 1128LL;

	t31 = (x193%((x194&x195)&x196));

	if (t31 != -5LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x198 = 433U;
	volatile int16_t x199 = -3759;
	static volatile int64_t x200 = INT64_MAX;
	volatile int64_t t32 = -589201574515LL;

	t32 = (x197%((x198&x199)&x200));

	if (t32 != 127LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x201 = INT32_MAX;
	uint8_t x202 = 83U;
	uint16_t x203 = 7907U;
	int64_t x204 = INT64_MAX;
	int64_t t33 = 83561162947318321LL;

	t33 = (x201%((x202&x203)&x204));

	if (t33 != 49LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x213 = INT64_MAX;
	int32_t x214 = -1;
	volatile uint32_t x215 = 978736U;
	uint32_t x216 = UINT32_MAX;
	int64_t t34 = 1864631646LL;

	t34 = (x213%((x214&x215)&x216));

	if (t34 != 431119LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x217 = 22U;
	int8_t x219 = -19;
	int32_t x220 = INT32_MAX;
	static int64_t t35 = -1166638831LL;

	t35 = (x217%((x218&x219)&x220));

	if (t35 != 22LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = 4;
	volatile int32_t x224 = -1;
	int64_t t36 = 418215098LL;

	t36 = (x221%((x222&x223)&x224));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x237 = 21U;
	static int64_t x239 = -1LL;
	uint8_t x240 = UINT8_MAX;
	int64_t t37 = -136927045227274654LL;

	t37 = (x237%((x238&x239)&x240));

	if (t37 != 21LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x245 = INT64_MIN;
	volatile uint16_t x246 = 24U;
	static int8_t x247 = INT8_MAX;
	int32_t x248 = 598;
	int64_t t38 = -264276955267428LL;

	t38 = (x245%((x246&x247)&x248));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x249 = 0;
	volatile uint16_t x250 = UINT16_MAX;
	uint32_t x252 = UINT32_MAX;

	t39 = (x249%((x250&x251)&x252));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x253 = INT16_MIN;
	uint8_t x254 = 21U;
	int8_t x255 = -1;
	static int16_t x256 = -1;

	t40 = (x253%((x254&x255)&x256));

	if (t40 != -8) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x273 = -111580084970458022LL;
	volatile int16_t x274 = -3;
	int32_t x275 = -1;
	static volatile int64_t x276 = INT64_MIN;
	int64_t t41 = -18225920LL;

	t41 = (x273%((x274&x275)&x276));

	if (t41 != -111580084970458022LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x281 = INT64_MAX;
	int16_t x282 = INT16_MAX;
	int8_t x283 = -17;
	int64_t x284 = 16184996233LL;
	volatile int64_t t42 = -113367159947062496LL;

	t42 = (x281%((x282&x283)&x284));

	if (t42 != 16602LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x297 = INT64_MIN;
	static int8_t x299 = -1;
	uint16_t x300 = UINT16_MAX;
	int64_t t43 = -2278779LL;

	t43 = (x297%((x298&x299)&x300));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x305 = UINT8_MAX;
	volatile int32_t x306 = INT32_MAX;
	int16_t x307 = INT16_MAX;
	int64_t x308 = -1LL;
	static int64_t t44 = 3239361691431782377LL;

	t44 = (x305%((x306&x307)&x308));

	if (t44 != 255LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x325 = 100086742416669LLU;
	int64_t x326 = -1LL;
	int16_t x327 = -9158;

	t45 = (x325%((x326&x327)&x328));

	if (t45 != 21LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x329 = -1609;
	static uint8_t x330 = UINT8_MAX;
	int16_t x331 = -1;
	int16_t x332 = 1;
	int32_t t46 = 825762;

	t46 = (x329%((x330&x331)&x332));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x335 = 858U;
	static uint64_t x336 = 22241964479859LLU;
	volatile uint64_t t47 = 15822909818LLU;

	t47 = (x333%((x334&x335)&x336));

	if (t47 != 5LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x337 = INT32_MAX;
	volatile uint64_t x338 = 9232LLU;
	static int16_t x339 = -1;
	uint32_t x340 = UINT32_MAX;

	t48 = (x337%((x338&x339)&x340));

	if (t48 != 431LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x349 = -1;
	static int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	static int32_t x352 = INT32_MAX;
	volatile int32_t t49 = -13997;

	t49 = (x349%((x350&x351)&x352));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x357 = INT32_MAX;
	volatile int8_t x358 = -6;
	int64_t x359 = INT64_MAX;
	int32_t x360 = INT32_MIN;
	int64_t t50 = -96812035089898446LL;

	t50 = (x357%((x358&x359)&x360));

	if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x385 = 4U;
	static uint64_t x386 = 19917384480503670LLU;
	uint32_t x388 = 16347459U;
	uint64_t t51 = 0LLU;

	t51 = (x385%((x386&x387)&x388));

	if (t51 != 4LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x394 = UINT16_MAX;
	int16_t x395 = INT16_MIN;
	volatile int64_t x396 = INT64_MAX;
	static int64_t t52 = -1460262065276852LL;

	t52 = (x393%((x394&x395)&x396));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x397 = 1U;
	int64_t x398 = -1LL;
	int64_t x400 = -38473069658LL;

	t53 = (x397%((x398&x399)&x400));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x401 = 11U;
	int64_t x402 = -2583545191089780LL;
	int64_t x404 = -1LL;

	t54 = (x401%((x402&x403)&x404));

	if (t54 != 11LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x405 = 824839894519300050LLU;
	int16_t x406 = -477;
	volatile int16_t x407 = INT16_MIN;
	int64_t x408 = 9355485869772LL;
	uint64_t t55 = 108299660009215LLU;

	t55 = (x405%((x406&x407)&x408));

	if (t55 != 4130006286290LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x413 = UINT32_MAX;
	int16_t x414 = INT16_MAX;
	int16_t x415 = 1445;
	static int8_t x416 = -7;
	uint32_t t56 = 148431299U;

	t56 = (x413%((x414&x415)&x416));

	if (t56 != 509U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = 4;
	volatile int64_t x423 = -1LL;
	static volatile int16_t x424 = -1;

	t57 = (x421%((x422&x423)&x424));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x425 = -1LL;
	uint64_t x426 = UINT64_MAX;
	int32_t x428 = -41867842;
	volatile uint64_t t58 = 354232744LLU;

	t58 = (x425%((x426&x427)&x428));

	if (t58 != 41867869LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x445 = -1;
	int16_t x448 = 28;
	uint32_t t59 = 60U;

	t59 = (x445%((x446&x447)&x448));

	if (t59 != 3U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x449 = 1783317LLU;
	uint32_t x450 = 102719U;
	static int64_t x451 = -1LL;
	int16_t x452 = 3932;

	t60 = (x449%((x450&x451)&x452));

	if (t60 != 81LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x465 = 7579182355955LLU;
	static int8_t x466 = 38;
	int16_t x467 = INT16_MAX;
	uint64_t t61 = 1566LLU;

	t61 = (x465%((x466&x467)&x468));

	if (t61 != 37LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x469 = INT8_MAX;
	volatile uint32_t x470 = 16983335U;
	volatile int32_t x472 = -570652144;
	volatile uint32_t t62 = 164480U;

	t62 = (x469%((x470&x471)&x472));

	if (t62 != 127U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x473 = INT32_MIN;
	int64_t x474 = INT64_MAX;
	volatile int32_t x475 = INT32_MAX;
	int16_t x476 = -4;
	int64_t t63 = 1027632429LL;

	t63 = (x473%((x474&x475)&x476));

	if (t63 != -4LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x477 = UINT32_MAX;
	int64_t x480 = 17854364LL;
	uint64_t t64 = 5115923LLU;

	t64 = (x477%((x478&x479)&x480));

	if (t64 != 16744575LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x481 = -2;

	t65 = (x481%((x482&x483)&x484));

	if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x489 = 3U;
	uint16_t x490 = UINT16_MAX;
	uint64_t x491 = 213674964065296110LLU;
	static int64_t x492 = 37355LL;
	volatile uint64_t t66 = 390894234556029673LLU;

	t66 = (x489%((x490&x491)&x492));

	if (t66 != 3LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x501 = 6U;
	volatile int64_t x502 = INT64_MIN;
	volatile int8_t x504 = -1;
	static int64_t t67 = -3867LL;

	t67 = (x501%((x502&x503)&x504));

	if (t67 != 6LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x505 = INT64_MIN;
	uint16_t x506 = 14207U;
	static uint8_t x507 = 3U;
	uint16_t x508 = UINT16_MAX;
	int64_t t68 = -8969834663906504LL;

	t68 = (x505%((x506&x507)&x508));

	if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x517 = INT8_MIN;
	int16_t x518 = INT16_MAX;
	static uint64_t x519 = UINT64_MAX;
	volatile uint32_t x520 = UINT32_MAX;
	volatile uint64_t t69 = 56735969LLU;

	t69 = (x517%((x518&x519)&x520));

	if (t69 != 32655LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x521 = UINT16_MAX;
	uint64_t x522 = 465838380899364690LLU;
	static volatile int64_t x523 = -3536707462LL;
	volatile int32_t x524 = -64607;
	volatile uint64_t t70 = 975494333LLU;

	t70 = (x521%((x522&x523)&x524));

	if (t70 != 65535LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x526 = UINT8_MAX;
	uint32_t x527 = UINT32_MAX;
	uint64_t x528 = 5884906076157659390LLU;

	t71 = (x525%((x526&x527)&x528));

	if (t71 != 123LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x534 = 116U;
	uint16_t x535 = UINT16_MAX;
	static uint64_t t72 = 378895LLU;

	t72 = (x533%((x534&x535)&x536));

	if (t72 != 56LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x542 = INT16_MIN;
	static int8_t x543 = -1;

	t73 = (x541%((x542&x543)&x544));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x549 = INT64_MAX;
	static volatile int32_t x550 = INT32_MIN;
	int8_t x551 = -1;
	int16_t x552 = INT16_MIN;
	volatile int64_t t74 = 1557319LL;

	t74 = (x549%((x550&x551)&x552));

	if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x561 = -1050010830LL;
	int8_t x562 = INT8_MIN;
	volatile uint32_t x563 = UINT32_MAX;
	int16_t x564 = INT16_MAX;

	t75 = (x561%((x562&x563)&x564));

	if (t75 != -14670LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x577 = INT32_MAX;
	int64_t x578 = -1LL;
	uint8_t x579 = 1U;
	int64_t x580 = 276611246689036397LL;
	volatile int64_t t76 = 34370019156452539LL;

	t76 = (x577%((x578&x579)&x580));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x585 = 3432U;
	int64_t x586 = -4330372994509115070LL;
	static int64_t x587 = INT64_MAX;
	static int16_t x588 = INT16_MIN;
	int64_t t77 = 5252LL;

	t77 = (x585%((x586&x587)&x588));

	if (t77 != 3432LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x589 = 7;
	uint64_t x590 = 2530640586344372915LLU;
	uint32_t x591 = 1296114514U;
	uint64_t t78 = 2183LLU;

	t78 = (x589%((x590&x591)&x592));

	if (t78 != 7LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x601 = INT16_MIN;
	volatile int64_t x602 = 1900200614006LL;
	int64_t x603 = -1LL;
	int16_t x604 = -871;
	static int64_t t79 = -952LL;

	t79 = (x601%((x602&x603)&x604));

	if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x605 = -15;
	int16_t x606 = INT16_MAX;
	uint64_t x608 = 2519211033683686LLU;
	uint64_t t80 = 121568LLU;

	t80 = (x605%((x606&x607)&x608));

	if (t80 != 25285LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x609 = INT32_MIN;
	static volatile uint64_t x610 = 475795LLU;
	int16_t x611 = -1146;
	uint64_t x612 = UINT64_MAX;
	static volatile uint64_t t81 = 36LLU;

	t81 = (x609%((x610&x611)&x612));

	if (t81 != 238142LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x625 = 12;
	int32_t x626 = INT32_MAX;
	static int64_t x627 = -1LL;

	t82 = (x625%((x626&x627)&x628));

	if (t82 != 12LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x630 = 365220369U;
	int8_t x631 = INT8_MAX;
	int8_t x632 = -13;

	t83 = (x629%((x630&x631)&x632));

	if (t83 != 5U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x642 = -1;
	int16_t x643 = 1476;
	volatile uint32_t x644 = UINT32_MAX;

	t84 = (x641%((x642&x643)&x644));

	if (t84 != 815U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x645 = INT16_MIN;
	uint32_t x647 = 148756U;
	int8_t x648 = INT8_MIN;

	t85 = (x645%((x646&x647)&x648));

	if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x649 = -2413LL;
	uint8_t x650 = 41U;
	int32_t x651 = -1;
	int8_t x652 = -1;

	t86 = (x649%((x650&x651)&x652));

	if (t86 != -35LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x654 = -46;
	int64_t x655 = INT64_MAX;
	static int64_t t87 = 565154960LL;

	t87 = (x653%((x654&x655)&x656));

	if (t87 != -1664LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x658 = UINT16_MAX;
	int8_t x660 = -2;
	int32_t t88 = 471499398;

	t88 = (x657%((x658&x659)&x660));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x669 = 1LL;
	uint16_t x671 = 1U;
	uint32_t x672 = UINT32_MAX;

	t89 = (x669%((x670&x671)&x672));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x677 = UINT32_MAX;
	static volatile uint32_t t90 = 184U;

	t90 = (x677%((x678&x679)&x680));

	if (t90 != 36U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x681 = -1;
	int32_t x683 = -18;
	volatile int64_t t91 = 513259582328085LL;

	t91 = (x681%((x682&x683)&x684));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x694 = INT32_MAX;
	uint64_t x695 = 56343503LLU;
	int32_t x696 = 1899;
	uint64_t t92 = 31LLU;

	t92 = (x693%((x694&x695)&x696));

	if (t92 != 569LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x697 = INT32_MIN;
	static int32_t x698 = -1;
	uint64_t x699 = 67420862628921LLU;
	int8_t x700 = -1;
	uint64_t t93 = 273279060240586799LLU;

	t93 = (x697%((x698&x699)&x700));

	if (t93 != 58951976137763LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x709 = 105U;
	int8_t x710 = INT8_MAX;
	int16_t x711 = -1;
	int16_t x712 = 62;
	volatile int32_t t94 = -2;

	t94 = (x709%((x710&x711)&x712));

	if (t94 != 43) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x725 = 1;
	volatile uint32_t x726 = UINT32_MAX;
	int8_t x727 = INT8_MAX;
	int64_t x728 = -1LL;

	t95 = (x725%((x726&x727)&x728));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x733 = 26351825381LLU;
	static volatile int64_t x734 = -1LL;
	int32_t x735 = -1;

	t96 = (x733%((x734&x735)&x736));

	if (t96 != 26351825381LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x737 = INT64_MAX;
	uint8_t x738 = UINT8_MAX;
	uint32_t x740 = UINT32_MAX;

	t97 = (x737%((x738&x739)&x740));

	if (t97 != 7LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x745 = 4;
	uint16_t x746 = 37U;
	int32_t x747 = INT32_MAX;
	int8_t x748 = -1;
	volatile int32_t t98 = -7;

	t98 = (x745%((x746&x747)&x748));

	if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x749 = 3;
	uint32_t x750 = UINT32_MAX;
	uint8_t x751 = 1U;
	static int64_t x752 = 45544207673831LL;
	int64_t t99 = 3835080360119431LL;

	t99 = (x749%((x750&x751)&x752));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

