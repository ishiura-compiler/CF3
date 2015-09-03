#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t3 = 4869LL;
static uint32_t x41 = 300U;
volatile int64_t x101 = INT64_MAX;
volatile int64_t x103 = -116445LL;
int8_t x108 = -1;
int16_t x114 = -1;
uint32_t x116 = 367982U;
static volatile uint32_t t11 = 1959849U;
uint16_t x117 = UINT16_MAX;
uint16_t x122 = 10U;
volatile uint8_t x127 = 8U;
static uint16_t x134 = 0U;
volatile int64_t t16 = -1LL;
int8_t x140 = -2;
int32_t x143 = -1;
int16_t x150 = -1;
static uint16_t x154 = 11U;
volatile int32_t t21 = 2639125;
volatile int64_t x157 = 42820497LL;
volatile int8_t x163 = INT8_MAX;
static uint32_t x174 = UINT32_MAX;
int16_t x176 = INT16_MAX;
volatile int32_t t24 = -451475735;
uint32_t t25 = 1125596U;
volatile int32_t x193 = 40535;
uint16_t x197 = 1807U;
volatile int32_t t27 = -453602958;
volatile uint64_t x206 = 2399324066644336012LLU;
volatile int64_t t28 = -387987970090239LL;
volatile int64_t x214 = INT64_MIN;
volatile int32_t x216 = INT32_MAX;
int64_t x227 = 11805912136015315LL;
volatile int32_t t31 = 6;
static int32_t x232 = -11728868;
int16_t x236 = 4;
uint64_t t33 = 59LLU;
volatile int32_t x244 = INT32_MAX;
int64_t x263 = -268888677159032994LL;
static uint64_t x264 = 52LLU;
volatile uint64_t t35 = 3026484284671110LLU;
int32_t x272 = 31677762;
int32_t x275 = -540291626;
int32_t x284 = -1;
uint64_t x291 = 264723391LLU;
int16_t x298 = INT16_MAX;
int8_t x300 = -1;
volatile int64_t t40 = INT64_MAX;
volatile int8_t x306 = INT8_MIN;
int8_t x307 = INT8_MIN;
uint8_t x318 = UINT8_MAX;
int64_t x332 = INT64_MIN;
uint16_t x339 = 229U;
static int64_t x351 = -1LL;
int16_t x357 = 1020;
static uint16_t x358 = UINT16_MAX;
int32_t t50 = 1;
volatile int32_t x371 = 19445;
volatile uint16_t x383 = UINT16_MAX;
volatile uint8_t x390 = 8U;
volatile int32_t x394 = -28268828;
int16_t x407 = 2129;
uint64_t x409 = UINT64_MAX;
static uint8_t x411 = 0U;
uint64_t x413 = 55915713413LLU;
uint16_t x415 = 17U;
int64_t x434 = -738137712628351LL;
int16_t x442 = INT16_MAX;
uint8_t x444 = UINT8_MAX;
int8_t x465 = INT8_MAX;
static int32_t x467 = INT32_MIN;
int64_t x469 = INT64_MAX;
static int8_t x470 = -12;
static volatile int8_t x480 = 3;
int16_t x486 = -61;
int16_t x492 = -10;
volatile uint32_t t72 = 197030367U;
volatile int64_t x508 = -1LL;
uint8_t x512 = 12U;
volatile uint64_t x513 = 387091205107LLU;
volatile int32_t t76 = 34330506;
uint64_t x523 = 1545821007817076048LLU;
static int8_t x529 = 14;
static int16_t x531 = INT16_MIN;
static volatile int64_t t80 = 1LL;
uint16_t x544 = 196U;
static uint16_t x555 = 157U;
volatile int8_t x566 = -12;
volatile int32_t x570 = INT32_MAX;
uint32_t x572 = UINT32_MAX;
uint16_t x574 = UINT16_MAX;
static uint32_t t85 = 1U;
volatile uint16_t x587 = 0U;
static int8_t x600 = -62;
int32_t t90 = 48203;
volatile int32_t x615 = INT32_MIN;
static int16_t x625 = 5;
volatile int16_t x659 = 0;
uint16_t x691 = 38U;
static int8_t x692 = -1;


void f0(void) {
	uint32_t x9 = 942163U;
	volatile uint8_t x10 = UINT8_MAX;
	volatile uint8_t x11 = UINT8_MAX;
	int16_t x12 = -3;
	static uint32_t t0 = 1U;

	t0 = ((x9<<(x10==x11))&x12);

	if (t0 != 1884324U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MAX;
	uint64_t x15 = UINT64_MAX;
	volatile int32_t x16 = -491601851;
	int32_t t1 = -3979590;

	t1 = ((x13<<(x14==x15))&x16);

	if (t1 != 49221) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x21 = INT16_MAX;
	volatile int16_t x22 = 2799;
	static volatile int8_t x23 = -11;
	int64_t x24 = -1LL;
	volatile int64_t t2 = -156LL;

	t2 = ((x21<<(x22==x23))&x24);

	if (t2 != 32767LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = INT64_MIN;
	static uint64_t x31 = 6610LLU;
	int64_t x32 = INT64_MAX;

	t3 = ((x29<<(x30==x31))&x32);

	if (t3 != 127LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x37 = 106U;
	static int8_t x38 = INT8_MIN;
	int16_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	static volatile int32_t t4 = -60;

	t4 = ((x37<<(x38==x39))&x40);

	if (t4 != 106) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x42 = 60407U;
	volatile uint16_t x43 = 13953U;
	volatile int8_t x44 = 1;
	static uint32_t t5 = 244686U;

	t5 = ((x41<<(x42==x43))&x44);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x61 = 6U;
	int16_t x62 = INT16_MIN;
	uint64_t x63 = 27542479LLU;
	int32_t x64 = INT32_MAX;
	static volatile int32_t t6 = 8017;

	t6 = ((x61<<(x62==x63))&x64);

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x65 = INT16_MAX;
	static uint32_t x66 = 2U;
	int16_t x67 = INT16_MIN;
	static int64_t x68 = INT64_MAX;
	volatile int64_t t7 = 2126614967173163LL;

	t7 = ((x65<<(x66==x67))&x68);

	if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x102 = INT32_MAX;
	static int64_t x104 = INT64_MIN;
	int64_t t8 = 1528884077485245153LL;

	t8 = ((x101<<(x102==x103))&x104);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x105 = 133LL;
	int8_t x106 = INT8_MAX;
	volatile uint32_t x107 = UINT32_MAX;
	volatile int64_t t9 = -31144771538LL;

	t9 = ((x105<<(x106==x107))&x108);

	if (t9 != 133LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x109 = INT8_MAX;
	volatile uint8_t x110 = 16U;
	int8_t x111 = INT8_MIN;
	uint32_t x112 = 3152498U;
	uint32_t t10 = 322699U;

	t10 = ((x109<<(x110==x111))&x112);

	if (t10 != 114U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x113 = 6488U;
	static volatile int8_t x115 = -1;

	t11 = ((x113<<(x114==x115))&x116);

	if (t11 != 4128U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x118 = INT64_MIN;
	int16_t x119 = INT16_MIN;
	static int8_t x120 = INT8_MIN;
	static volatile int32_t t12 = 203048;

	t12 = ((x117<<(x118==x119))&x120);

	if (t12 != 65408) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x121 = 19550U;
	int8_t x123 = INT8_MIN;
	uint16_t x124 = 20U;
	volatile int32_t t13 = 1667;

	t13 = ((x121<<(x122==x123))&x124);

	if (t13 != 20) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x125 = UINT16_MAX;
	int8_t x126 = 38;
	static int32_t x128 = -1;
	static volatile int32_t t14 = 0;

	t14 = ((x125<<(x126==x127))&x128);

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x129 = UINT8_MAX;
	int8_t x130 = INT8_MIN;
	volatile int64_t x131 = 1964554LL;
	int16_t x132 = -1;
	static int32_t t15 = 103;

	t15 = ((x129<<(x130==x131))&x132);

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x133 = 15954U;
	uint32_t x135 = 421U;
	int64_t x136 = 10560792901656LL;

	t16 = ((x133<<(x134==x135))&x136);

	if (t16 != 14352LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x137 = 1;
	uint8_t x138 = 56U;
	int64_t x139 = 3938919LL;
	int32_t t17 = 7136;

	t17 = ((x137<<(x138==x139))&x140);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x141 = 45U;
	int16_t x142 = INT16_MAX;
	volatile int8_t x144 = INT8_MIN;
	uint32_t t18 = 216565883U;

	t18 = ((x141<<(x142==x143))&x144);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x145 = 23899U;
	static int16_t x146 = 0;
	int32_t x147 = 5274;
	int32_t x148 = -1;
	volatile int32_t t19 = 2011;

	t19 = ((x145<<(x146==x147))&x148);

	if (t19 != 23899) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x149 = 13540843340596231LLU;
	uint16_t x151 = UINT16_MAX;
	static int64_t x152 = INT64_MIN;
	volatile uint64_t t20 = 3928495LLU;

	t20 = ((x149<<(x150==x151))&x152);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x153 = 1U;
	static uint16_t x155 = 0U;
	int32_t x156 = 1055187;

	t21 = ((x153<<(x154==x155))&x156);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x158 = INT16_MIN;
	volatile int32_t x159 = -1;
	int16_t x160 = -4;
	int64_t t22 = -3451299LL;

	t22 = ((x157<<(x158==x159))&x160);

	if (t22 != 42820496LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x161 = UINT32_MAX;
	static uint64_t x162 = 174606924113LLU;
	static int16_t x164 = INT16_MIN;
	uint32_t t23 = 25304720U;

	t23 = ((x161<<(x162==x163))&x164);

	if (t23 != 4294934528U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x173 = INT32_MAX;
	int16_t x175 = INT16_MIN;

	t24 = ((x173<<(x174==x175))&x176);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x185 = UINT32_MAX;
	volatile uint8_t x186 = 4U;
	volatile uint16_t x187 = 16U;
	int32_t x188 = INT32_MIN;

	t25 = ((x185<<(x186==x187))&x188);

	if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x194 = -5797165368956LL;
	volatile int8_t x195 = -39;
	volatile int8_t x196 = -1;
	int32_t t26 = -1;

	t26 = ((x193<<(x194==x195))&x196);

	if (t26 != 40535) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x198 = INT16_MIN;
	uint32_t x199 = UINT32_MAX;
	uint8_t x200 = UINT8_MAX;

	t27 = ((x197<<(x198==x199))&x200);

	if (t27 != 15) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x205 = INT64_MAX;
	volatile uint16_t x207 = UINT16_MAX;
	volatile int32_t x208 = 27;

	t28 = ((x205<<(x206==x207))&x208);

	if (t28 != 27LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x209 = 2603540;
	uint32_t x210 = 11495503U;
	int64_t x211 = -55796LL;
	int16_t x212 = 3543;
	volatile int32_t t29 = 16;

	t29 = ((x209<<(x210==x211))&x212);

	if (t29 != 2068) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x213 = 59363676844390LLU;
	int32_t x215 = 1;
	static volatile uint64_t t30 = 7LLU;

	t30 = ((x213<<(x214==x215))&x216);

	if (t30 != 786362726LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x225 = UINT16_MAX;
	int8_t x226 = -1;
	int8_t x228 = -1;

	t31 = ((x225<<(x226==x227))&x228);

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x229 = INT8_MAX;
	int16_t x230 = -1;
	static int32_t x231 = INT32_MIN;
	int32_t t32 = -1114;

	t32 = ((x229<<(x230==x231))&x232);

	if (t32 != 28) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x233 = 1143908551167LLU;
	static volatile int32_t x234 = INT32_MAX;
	uint32_t x235 = UINT32_MAX;

	t33 = ((x233<<(x234==x235))&x236);

	if (t33 != 4LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x241 = UINT16_MAX;
	int64_t x242 = 8017146LL;
	static int8_t x243 = INT8_MIN;
	volatile int32_t t34 = 119220;

	t34 = ((x241<<(x242==x243))&x244);

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x261 = UINT32_MAX;
	int8_t x262 = 21;

	t35 = ((x261<<(x262==x263))&x264);

	if (t35 != 52LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x269 = INT8_MAX;
	int64_t x270 = INT64_MAX;
	uint8_t x271 = 4U;
	volatile int32_t t36 = 101;

	t36 = ((x269<<(x270==x271))&x272);

	if (t36 != 66) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x274 = 16205513812LL;
	int32_t x276 = -1;
	int32_t t37 = -356672;

	t37 = ((x273<<(x274==x275))&x276);

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x281 = INT8_MAX;
	int32_t x282 = INT32_MAX;
	int64_t x283 = 624184LL;
	int32_t t38 = -449;

	t38 = ((x281<<(x282==x283))&x284);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x289 = 1439317LLU;
	static int32_t x290 = -323;
	uint8_t x292 = UINT8_MAX;
	volatile uint64_t t39 = 984217836LLU;

	t39 = ((x289<<(x290==x291))&x292);

	if (t39 != 85LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x297 = INT64_MAX;
	uint8_t x299 = 6U;

	t40 = ((x297<<(x298==x299))&x300);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x305 = 0;
	uint8_t x308 = UINT8_MAX;
	int32_t t41 = -3137;

	t41 = ((x305<<(x306==x307))&x308);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x317 = 59LL;
	uint32_t x319 = UINT32_MAX;
	static int32_t x320 = INT32_MAX;
	volatile int64_t t42 = -8458498940653854LL;

	t42 = ((x317<<(x318==x319))&x320);

	if (t42 != 59LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x321 = INT16_MAX;
	int32_t x322 = 34800535;
	static uint16_t x323 = 13148U;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t43 = -39846036;

	t43 = ((x321<<(x322==x323))&x324);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x329 = 58723302U;
	uint32_t x330 = UINT32_MAX;
	int64_t x331 = INT64_MIN;
	int64_t t44 = -45732161403007923LL;

	t44 = ((x329<<(x330==x331))&x332);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x333 = 26U;
	int32_t x334 = INT32_MIN;
	volatile uint64_t x335 = 772648LLU;
	volatile uint32_t x336 = 121U;
	uint32_t t45 = 422260U;

	t45 = ((x333<<(x334==x335))&x336);

	if (t45 != 24U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x337 = UINT8_MAX;
	volatile int64_t x338 = 0LL;
	int16_t x340 = -1;
	int32_t t46 = -7128;

	t46 = ((x337<<(x338==x339))&x340);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x345 = 35;
	int8_t x346 = -1;
	int8_t x347 = INT8_MIN;
	static uint8_t x348 = 93U;
	int32_t t47 = 120;

	t47 = ((x345<<(x346==x347))&x348);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x349 = 5LLU;
	static uint8_t x350 = 30U;
	static int32_t x352 = INT32_MIN;
	static uint64_t t48 = 852682561335069253LLU;

	t48 = ((x349<<(x350==x351))&x352);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x359 = INT64_MIN;
	int32_t x360 = INT32_MIN;
	int32_t t49 = 3;

	t49 = ((x357<<(x358==x359))&x360);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x361 = 3U;
	int8_t x362 = -1;
	int64_t x363 = 50LL;
	int32_t x364 = INT32_MAX;

	t50 = ((x361<<(x362==x363))&x364);

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x365 = UINT64_MAX;
	int8_t x366 = 59;
	int16_t x367 = -1;
	static volatile int8_t x368 = -1;
	uint64_t t51 = UINT64_MAX;

	t51 = ((x365<<(x366==x367))&x368);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x369 = 3U;
	volatile int16_t x370 = -1;
	uint64_t x372 = 11LLU;
	uint64_t t52 = 218567796223086LLU;

	t52 = ((x369<<(x370==x371))&x372);

	if (t52 != 3LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x373 = UINT8_MAX;
	uint32_t x374 = UINT32_MAX;
	volatile uint8_t x375 = 1U;
	volatile uint64_t x376 = UINT64_MAX;
	uint64_t t53 = 5901219332160LLU;

	t53 = ((x373<<(x374==x375))&x376);

	if (t53 != 255LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x377 = UINT8_MAX;
	static uint8_t x378 = 13U;
	int32_t x379 = -2;
	int16_t x380 = 395;
	volatile int32_t t54 = 175051331;

	t54 = ((x377<<(x378==x379))&x380);

	if (t54 != 139) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x381 = INT64_MAX;
	uint64_t x382 = 3513146LLU;
	uint32_t x384 = UINT32_MAX;
	volatile int64_t t55 = -31580678810130062LL;

	t55 = ((x381<<(x382==x383))&x384);

	if (t55 != 4294967295LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x385 = 10U;
	int16_t x386 = INT16_MIN;
	int64_t x387 = -589LL;
	static int32_t x388 = 620;
	int32_t t56 = 717019728;

	t56 = ((x385<<(x386==x387))&x388);

	if (t56 != 8) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x389 = UINT32_MAX;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 20U;
	volatile uint32_t t57 = 4U;

	t57 = ((x389<<(x390==x391))&x392);

	if (t57 != 20U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x393 = UINT32_MAX;
	int64_t x395 = INT64_MIN;
	int64_t x396 = INT64_MIN;
	static volatile int64_t t58 = 1LL;

	t58 = ((x393<<(x394==x395))&x396);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x405 = 581;
	int8_t x406 = INT8_MIN;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t59 = 8337839;

	t59 = ((x405<<(x406==x407))&x408);

	if (t59 != 69) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x410 = UINT8_MAX;
	uint16_t x412 = 2U;
	volatile uint64_t t60 = 12LLU;

	t60 = ((x409<<(x410==x411))&x412);

	if (t60 != 2LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x414 = -1;
	uint8_t x416 = UINT8_MAX;
	volatile uint64_t t61 = 6094882LLU;

	t61 = ((x413<<(x414==x415))&x416);

	if (t61 != 133LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x417 = 73LL;
	uint32_t x418 = 92655221U;
	int64_t x419 = 904503LL;
	uint16_t x420 = 27380U;
	int64_t t62 = 22869315031496LL;

	t62 = ((x417<<(x418==x419))&x420);

	if (t62 != 64LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x433 = INT32_MAX;
	static int32_t x435 = INT32_MIN;
	static uint8_t x436 = 7U;
	volatile int32_t t63 = -5;

	t63 = ((x433<<(x434==x435))&x436);

	if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x437 = INT64_MAX;
	uint8_t x438 = 3U;
	int16_t x439 = -1454;
	int64_t x440 = -67025022628496992LL;
	static int64_t t64 = 1469LL;

	t64 = ((x437<<(x438==x439))&x440);

	if (t64 != 9156347014226278816LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x441 = INT32_MAX;
	uint32_t x443 = 2U;
	volatile int32_t t65 = -36045;

	t65 = ((x441<<(x442==x443))&x444);

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x445 = 59U;
	int32_t x446 = 398055442;
	static uint32_t x447 = 1155859U;
	static volatile uint16_t x448 = 59U;
	volatile int32_t t66 = 1;

	t66 = ((x445<<(x446==x447))&x448);

	if (t66 != 59) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x453 = UINT32_MAX;
	static int16_t x454 = INT16_MIN;
	static int16_t x455 = -1;
	int64_t x456 = 449440613058925571LL;
	int64_t t67 = -19713278138070LL;

	t67 = ((x453<<(x454==x455))&x456);

	if (t67 != 956486659LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x466 = 1LL;
	int32_t x468 = -1;
	int32_t t68 = -14115146;

	t68 = ((x465<<(x466==x467))&x468);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x471 = 249962609977LLU;
	static uint64_t x472 = 263428597280348LLU;
	volatile uint64_t t69 = 147433410630LLU;

	t69 = ((x469<<(x470==x471))&x472);

	if (t69 != 263428597280348LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x477 = UINT8_MAX;
	volatile int8_t x478 = INT8_MIN;
	int64_t x479 = -49106641521583LL;
	volatile int32_t t70 = -275;

	t70 = ((x477<<(x478==x479))&x480);

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x485 = INT8_MAX;
	static int64_t x487 = INT64_MIN;
	static volatile int8_t x488 = INT8_MIN;
	volatile int32_t t71 = -58272;

	t71 = ((x485<<(x486==x487))&x488);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x489 = 4U;
	uint8_t x490 = 0U;
	volatile uint32_t x491 = 41U;

	t72 = ((x489<<(x490==x491))&x492);

	if (t72 != 4U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x505 = 16U;
	volatile int32_t x506 = INT32_MAX;
	int32_t x507 = -1;
	volatile int64_t t73 = -238637787897407LL;

	t73 = ((x505<<(x506==x507))&x508);

	if (t73 != 16LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x509 = UINT32_MAX;
	int32_t x510 = -1;
	static uint8_t x511 = 126U;
	static volatile uint32_t t74 = 112707824U;

	t74 = ((x509<<(x510==x511))&x512);

	if (t74 != 12U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x514 = 27U;
	volatile int64_t x515 = INT64_MIN;
	static int16_t x516 = -1;
	uint64_t t75 = 14LLU;

	t75 = ((x513<<(x514==x515))&x516);

	if (t75 != 387091205107LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x517 = INT32_MAX;
	int32_t x518 = 336604574;
	int64_t x519 = INT64_MIN;
	int8_t x520 = INT8_MIN;

	t76 = ((x517<<(x518==x519))&x520);

	if (t76 != 2147483520) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x521 = UINT32_MAX;
	uint16_t x522 = UINT16_MAX;
	volatile int16_t x524 = 69;
	volatile uint32_t t77 = 2022U;

	t77 = ((x521<<(x522==x523))&x524);

	if (t77 != 69U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x525 = 4LL;
	int64_t x526 = -412889773855LL;
	int16_t x527 = INT16_MAX;
	int64_t x528 = 43041440331716LL;
	static volatile int64_t t78 = -254963890269LL;

	t78 = ((x525<<(x526==x527))&x528);

	if (t78 != 4LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x530 = INT64_MAX;
	uint8_t x532 = 1U;
	static volatile int32_t t79 = -84194910;

	t79 = ((x529<<(x530==x531))&x532);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x533 = INT64_MAX;
	int8_t x534 = -1;
	static volatile int32_t x535 = INT32_MAX;
	int16_t x536 = INT16_MAX;

	t80 = ((x533<<(x534==x535))&x536);

	if (t80 != 32767LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x541 = 2517U;
	volatile int8_t x542 = INT8_MIN;
	int64_t x543 = -403768875538427894LL;
	static volatile int32_t t81 = -2067;

	t81 = ((x541<<(x542==x543))&x544);

	if (t81 != 196) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x553 = UINT64_MAX;
	int64_t x554 = -56716900265LL;
	int16_t x556 = INT16_MAX;
	volatile uint64_t t82 = 53LLU;

	t82 = ((x553<<(x554==x555))&x556);

	if (t82 != 32767LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x565 = INT16_MAX;
	int64_t x567 = -1LL;
	int64_t x568 = INT64_MAX;
	static int64_t t83 = -630288237685962446LL;

	t83 = ((x565<<(x566==x567))&x568);

	if (t83 != 32767LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x569 = UINT16_MAX;
	uint64_t x571 = UINT64_MAX;
	volatile uint32_t t84 = 349U;

	t84 = ((x569<<(x570==x571))&x572);

	if (t84 != 65535U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x573 = 27376U;
	int8_t x575 = 3;
	uint32_t x576 = 26U;

	t85 = ((x573<<(x574==x575))&x576);

	if (t85 != 16U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x577 = INT8_MAX;
	int32_t x578 = -19709;
	volatile int8_t x579 = -1;
	int32_t x580 = 6866;
	int32_t t86 = -4;

	t86 = ((x577<<(x578==x579))&x580);

	if (t86 != 82) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x585 = UINT16_MAX;
	uint32_t x586 = UINT32_MAX;
	int64_t x588 = INT64_MAX;
	volatile int64_t t87 = -289LL;

	t87 = ((x585<<(x586==x587))&x588);

	if (t87 != 65535LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x589 = 1671619516LLU;
	volatile int64_t x590 = -134LL;
	int16_t x591 = -48;
	int32_t x592 = -1;
	uint64_t t88 = 4687122952760333LLU;

	t88 = ((x589<<(x590==x591))&x592);

	if (t88 != 1671619516LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x593 = INT16_MAX;
	static uint8_t x594 = 13U;
	int32_t x595 = INT32_MAX;
	volatile uint64_t x596 = 33957058121LLU;
	volatile uint64_t t89 = 16629135539223607LLU;

	t89 = ((x593<<(x594==x595))&x596);

	if (t89 != 5705LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x597 = INT16_MAX;
	uint32_t x598 = 1836935618U;
	static volatile int32_t x599 = INT32_MIN;

	t90 = ((x597<<(x598==x599))&x600);

	if (t90 != 32706) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x613 = INT32_MAX;
	uint8_t x614 = 22U;
	uint64_t x616 = 6856660LLU;
	volatile uint64_t t91 = 1497827934086404LLU;

	t91 = ((x613<<(x614==x615))&x616);

	if (t91 != 6856660LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x621 = UINT8_MAX;
	static volatile uint64_t x622 = 1126912709012779387LLU;
	int32_t x623 = -1;
	uint64_t x624 = UINT64_MAX;
	uint64_t t92 = 15882084LLU;

	t92 = ((x621<<(x622==x623))&x624);

	if (t92 != 255LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x626 = -1;
	int8_t x627 = INT8_MAX;
	int32_t x628 = INT32_MIN;
	volatile int32_t t93 = -7704238;

	t93 = ((x625<<(x626==x627))&x628);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x629 = INT32_MAX;
	int32_t x630 = INT32_MIN;
	uint64_t x631 = UINT64_MAX;
	int32_t x632 = INT32_MIN;
	int32_t t94 = 431;

	t94 = ((x629<<(x630==x631))&x632);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x657 = 386;
	int32_t x658 = 63329;
	volatile int8_t x660 = -10;
	static int32_t t95 = -192304;

	t95 = ((x657<<(x658==x659))&x660);

	if (t95 != 386) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x665 = UINT8_MAX;
	int16_t x666 = INT16_MAX;
	uint64_t x667 = UINT64_MAX;
	uint8_t x668 = 54U;
	volatile int32_t t96 = 56478;

	t96 = ((x665<<(x666==x667))&x668);

	if (t96 != 54) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x673 = INT8_MAX;
	static int32_t x674 = -1;
	int64_t x675 = 92911808650LL;
	int8_t x676 = 6;
	int32_t t97 = 759;

	t97 = ((x673<<(x674==x675))&x676);

	if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x689 = 28;
	int64_t x690 = INT64_MIN;
	int32_t t98 = -1;

	t98 = ((x689<<(x690==x691))&x692);

	if (t98 != 28) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x693 = 21274U;
	int32_t x694 = INT32_MIN;
	volatile int8_t x695 = -1;
	static int16_t x696 = INT16_MAX;
	volatile uint32_t t99 = 53026078U;

	t99 = ((x693<<(x694==x695))&x696);

	if (t99 != 21274U) { NG(); } else { ; }
	
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

