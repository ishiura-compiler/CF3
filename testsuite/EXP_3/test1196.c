#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = INT32_MIN;
int16_t x14 = INT16_MAX;
volatile int16_t x16 = 4049;
int8_t x19 = -10;
int64_t x22 = INT64_MIN;
static int64_t x36 = INT64_MAX;
volatile uint32_t x45 = UINT32_MAX;
int32_t x48 = INT32_MIN;
volatile int64_t t9 = 2650342216034268101LL;
volatile int32_t t10 = 0;
int8_t x56 = INT8_MIN;
int64_t x58 = INT64_MAX;
uint16_t x59 = UINT16_MAX;
volatile int64_t t12 = INT64_MAX;
int8_t x67 = INT8_MAX;
int64_t x68 = INT64_MAX;
uint32_t t13 = 1U;
static uint16_t x75 = 878U;
int32_t x84 = 14;
uint8_t x100 = UINT8_MAX;
volatile uint64_t x104 = 185LLU;
volatile int64_t x107 = INT64_MIN;
uint16_t x109 = 13U;
uint32_t x112 = UINT32_MAX;
uint8_t x124 = UINT8_MAX;
volatile uint64_t t24 = 112140873926298405LLU;
uint32_t x125 = 249109U;
uint32_t x139 = UINT32_MAX;
int32_t t26 = 17512139;
static uint64_t x147 = 899494794859311000LLU;
int16_t x149 = -1;
uint32_t x150 = 204676925U;
int64_t x151 = -1LL;
static volatile int64_t x157 = 1489LL;
volatile uint64_t t31 = 531320007117865988LLU;
int64_t t32 = 8783773103164625LL;
int16_t x179 = INT16_MIN;
volatile int32_t t34 = -477837;
uint64_t x186 = UINT64_MAX;
uint64_t t35 = 570592LLU;
int64_t t36 = INT64_MAX;
int32_t t37 = 12;
uint8_t x213 = UINT8_MAX;
uint32_t x219 = 15825210U;
uint8_t x221 = UINT8_MAX;
static int16_t x228 = INT16_MIN;
uint64_t x246 = 103534826LLU;
static int32_t x248 = -1;
uint64_t t48 = 169992LLU;
int64_t x251 = INT64_MAX;
uint32_t x253 = 500U;
uint64_t x254 = 3383309132LLU;
int64_t x256 = -133543LL;
volatile int8_t x273 = INT8_MAX;
int16_t x283 = INT16_MAX;
int8_t x284 = -1;
volatile int32_t t56 = -32293;
volatile int8_t x294 = 0;
static int16_t x302 = 18;
static volatile uint64_t x311 = 2387957176527607LLU;
static int8_t x318 = 1;
int8_t x319 = 54;
volatile int8_t x321 = INT8_MAX;
volatile uint32_t t63 = 31U;
uint32_t x330 = 123U;
int32_t x331 = -2189017;
static uint32_t t65 = 5575349U;
int8_t x344 = INT8_MIN;
int64_t t66 = 0LL;
int64_t x350 = 2459LL;
volatile int16_t x354 = INT16_MIN;
static volatile int64_t x356 = -29180799LL;
int16_t x358 = -23;
static int32_t t70 = 85660;
uint8_t x366 = 7U;
int64_t x369 = -9805280112LL;
volatile int32_t t73 = -1589;
volatile int16_t x379 = -1;
static int8_t x389 = 0;
static int32_t x390 = INT32_MIN;
volatile int32_t t75 = INT32_MIN;
int16_t x395 = 308;
static volatile uint16_t x400 = 963U;
volatile int64_t t77 = 1972662096595673LL;
int16_t x404 = INT16_MAX;
int64_t x410 = 351588903761701768LL;
volatile int64_t t80 = -22615219196LL;
int16_t x429 = 6772;
int64_t x431 = INT64_MIN;
volatile int16_t x433 = 5;
int16_t x441 = -1310;
int32_t x443 = INT32_MAX;
int32_t t86 = 22;
uint64_t x453 = 457LLU;
int8_t x460 = INT8_MAX;
int8_t x470 = 3;
volatile int32_t x471 = -1;
uint64_t x473 = 18812LLU;
uint64_t t92 = 919806LLU;
static uint16_t x482 = 24289U;
uint64_t x483 = 76041314697LLU;
int16_t x487 = INT16_MIN;
uint16_t x488 = 131U;
int64_t x489 = -1LL;
uint32_t x494 = UINT32_MAX;


void f0(void) {
	static uint64_t x1 = 79444695549186476LLU;
	uint8_t x2 = 50U;
	volatile int8_t x3 = INT8_MAX;
	uint64_t x4 = 6044081LLU;
	volatile uint64_t t0 = 1406792810529611423LLU;

	t0 = ((x1+x2)^(x3==x4));

	if (t0 != 79444695549186526LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -9LL;
	uint32_t x6 = 39463031U;
	int16_t x7 = -1;
	uint64_t x8 = 1121LLU;
	static volatile int64_t t1 = -371LL;

	t1 = ((x5+x6)^(x7==x8));

	if (t1 != 39463022LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x15 = INT8_MAX;
	int32_t t2 = 44920;

	t2 = ((x13+x14)^(x15==x16));

	if (t2 != -2147450881) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	uint32_t x18 = 21321U;
	int64_t x20 = -36LL;
	volatile int64_t t3 = -3986107549928312574LL;

	t3 = ((x17+x18)^(x19==x20));

	if (t3 != 21320LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	volatile int64_t x23 = INT64_MIN;
	int64_t x24 = -1LL;
	volatile int64_t t4 = 75917LL;

	t4 = ((x21+x22)^(x23==x24));

	if (t4 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x29 = INT8_MIN;
	volatile int16_t x30 = INT16_MIN;
	volatile int16_t x31 = -1;
	volatile int8_t x32 = -1;
	volatile int32_t t5 = 331349952;

	t5 = ((x29+x30)^(x31==x32));

	if (t5 != -32895) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x33 = 2U;
	int16_t x34 = INT16_MAX;
	static int8_t x35 = 2;
	volatile int32_t t6 = -131724016;

	t6 = ((x33+x34)^(x35==x36));

	if (t6 != 32769) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	uint16_t x38 = 9299U;
	volatile int16_t x39 = -25;
	int8_t x40 = INT8_MAX;
	int32_t t7 = 229875742;

	t7 = ((x37+x38)^(x39==x40));

	if (t7 != 42066) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MAX;
	static int8_t x44 = INT8_MIN;
	static int64_t t8 = -1056776328LL;

	t8 = ((x41+x42)^(x43==x44));

	if (t8 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x46 = 33985658187LL;
	int16_t x47 = -1;

	t9 = ((x45+x46)^(x47==x48));

	if (t9 != 38280625482LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = UINT16_MAX;
	uint8_t x50 = 3U;
	volatile int16_t x51 = 6;
	uint8_t x52 = UINT8_MAX;

	t10 = ((x49+x50)^(x51==x52));

	if (t10 != 65538) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	uint16_t x54 = 13570U;
	static int16_t x55 = 11759;
	int32_t t11 = -7;

	t11 = ((x53+x54)^(x55==x56));

	if (t11 != 79105) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x57 = 0;
	int64_t x60 = 228937LL;

	t12 = ((x57+x58)^(x59==x60));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x65 = 1874U;
	static int8_t x66 = INT8_MIN;

	t13 = ((x65+x66)^(x67==x68));

	if (t13 != 1746U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x69 = 1LLU;
	uint64_t x70 = 5198326263060785699LLU;
	uint16_t x71 = 11U;
	static uint16_t x72 = 7U;
	static uint64_t t14 = 37LLU;

	t14 = ((x69+x70)^(x71==x72));

	if (t14 != 5198326263060785700LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	int16_t x74 = 127;
	uint16_t x76 = 7U;
	int64_t t15 = 913035139702LL;

	t15 = ((x73+x74)^(x75==x76));

	if (t15 != 126LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MIN;
	static uint8_t x83 = 9U;
	static int64_t t16 = 4465406944217470LL;

	t16 = ((x81+x82)^(x83==x84));

	if (t16 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x89 = UINT16_MAX;
	int8_t x90 = INT8_MAX;
	int16_t x91 = -1;
	int16_t x92 = 43;
	volatile int32_t t17 = -2;

	t17 = ((x89+x90)^(x91==x92));

	if (t17 != 65662) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x97 = 9324U;
	int32_t x98 = INT32_MIN;
	int32_t x99 = INT32_MIN;
	volatile uint32_t t18 = 153599613U;

	t18 = ((x97+x98)^(x99==x100));

	if (t18 != 2147492972U) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x101 = -91361343LL;
	volatile uint8_t x102 = 12U;
	volatile int16_t x103 = 140;
	volatile int64_t t19 = 10905797LL;

	t19 = ((x101+x102)^(x103==x104));

	if (t19 != -91361331LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x105 = INT64_MIN;
	static int16_t x106 = 15114;
	int8_t x108 = INT8_MIN;
	volatile int64_t t20 = -34743174LL;

	t20 = ((x105+x106)^(x107==x108));

	if (t20 != -9223372036854760694LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x110 = INT16_MIN;
	volatile int8_t x111 = INT8_MIN;
	volatile int32_t t21 = -3663943;

	t21 = ((x109+x110)^(x111==x112));

	if (t21 != -32755) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = 0U;
	int32_t x114 = -1;
	int32_t x115 = INT32_MIN;
	volatile int64_t x116 = -2749847619369LL;
	static volatile int32_t t22 = -236;

	t22 = ((x113+x114)^(x115==x116));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x117 = 23;
	int32_t x118 = INT32_MIN;
	volatile int64_t x119 = -5515959252203LL;
	static int64_t x120 = INT64_MAX;
	static volatile int32_t t23 = 1;

	t23 = ((x117+x118)^(x119==x120));

	if (t23 != -2147483625) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = 1949867LLU;
	static volatile int8_t x122 = INT8_MIN;
	int8_t x123 = -58;

	t24 = ((x121+x122)^(x123==x124));

	if (t24 != 1949739LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x126 = INT64_MIN;
	uint16_t x127 = 95U;
	uint8_t x128 = 39U;
	int64_t t25 = 1134LL;

	t25 = ((x125+x126)^(x127==x128));

	if (t25 != -9223372036854526699LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x137 = 2U;
	volatile int32_t x138 = 2774;
	int16_t x140 = 14640;

	t26 = ((x137+x138)^(x139==x140));

	if (t26 != 2776) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x145 = 505004511U;
	volatile int16_t x146 = 32;
	int64_t x148 = INT64_MIN;
	volatile uint32_t t27 = 428130U;

	t27 = ((x145+x146)^(x147==x148));

	if (t27 != 505004543U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x152 = 13968558248324797LLU;
	uint32_t t28 = 3981232U;

	t28 = ((x149+x150)^(x151==x152));

	if (t28 != 204676924U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x153 = INT8_MAX;
	int16_t x154 = -366;
	int32_t x155 = INT32_MIN;
	static int64_t x156 = INT64_MIN;
	volatile int32_t t29 = 18178740;

	t29 = ((x153+x154)^(x155==x156));

	if (t29 != -239) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x158 = UINT32_MAX;
	volatile int8_t x159 = -1;
	int64_t x160 = INT64_MAX;
	int64_t t30 = 3764063LL;

	t30 = ((x157+x158)^(x159==x160));

	if (t30 != 4294968784LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x161 = 37LLU;
	int8_t x162 = INT8_MIN;
	int64_t x163 = 1700222731511277LL;
	uint64_t x164 = 1448LLU;

	t31 = ((x161+x162)^(x163==x164));

	if (t31 != 18446744073709551525LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x165 = 68185LL;
	int8_t x166 = 0;
	uint64_t x167 = UINT64_MAX;
	int64_t x168 = -7048123LL;

	t32 = ((x165+x166)^(x167==x168));

	if (t32 != 68185LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x173 = 0;
	int16_t x174 = -1;
	volatile int16_t x175 = INT16_MIN;
	int64_t x176 = 184044686878620LL;
	static volatile int32_t t33 = 275;

	t33 = ((x173+x174)^(x175==x176));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x177 = -15;
	int16_t x178 = INT16_MIN;
	static uint32_t x180 = UINT32_MAX;

	t34 = ((x177+x178)^(x179==x180));

	if (t34 != -32783) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x185 = 1676761671579356LLU;
	volatile uint64_t x187 = UINT64_MAX;
	int16_t x188 = 31;

	t35 = ((x185+x186)^(x187==x188));

	if (t35 != 1676761671579355LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = INT64_MAX;
	int64_t x190 = -1LL;
	int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MIN;

	t36 = ((x189+x190)^(x191==x192));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x194 = 4;
	static volatile uint8_t x195 = 39U;
	static uint8_t x196 = 1U;

	t37 = ((x193+x194)^(x195==x196));

	if (t37 != 65539) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x205 = -1LL;
	int16_t x206 = -1;
	volatile uint64_t x207 = 1LLU;
	volatile int8_t x208 = -1;
	int64_t t38 = -961313LL;

	t38 = ((x205+x206)^(x207==x208));

	if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x209 = -1;
	int8_t x210 = INT8_MAX;
	volatile int8_t x211 = -29;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t39 = -2218;

	t39 = ((x209+x210)^(x211==x212));

	if (t39 != 126) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x214 = 8663089U;
	int32_t x215 = -950280;
	int32_t x216 = -1;
	uint32_t t40 = 2U;

	t40 = ((x213+x214)^(x215==x216));

	if (t40 != 8663344U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x217 = 51022U;
	int32_t x218 = 301619;
	int32_t x220 = INT32_MAX;
	uint32_t t41 = 311303329U;

	t41 = ((x217+x218)^(x219==x220));

	if (t41 != 352641U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x222 = INT64_MIN;
	uint16_t x223 = 118U;
	uint8_t x224 = 126U;
	int64_t t42 = -20992037203322611LL;

	t42 = ((x221+x222)^(x223==x224));

	if (t42 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x225 = 3U;
	static int8_t x226 = 4;
	uint32_t x227 = 0U;
	static volatile int32_t t43 = 6386268;

	t43 = ((x225+x226)^(x227==x228));

	if (t43 != 7) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x229 = 922U;
	int8_t x230 = INT8_MAX;
	int16_t x231 = 1;
	uint32_t x232 = 222U;
	volatile int32_t t44 = 408678;

	t44 = ((x229+x230)^(x231==x232));

	if (t44 != 1049) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x233 = 61U;
	uint64_t x234 = 21LLU;
	int32_t x235 = INT32_MIN;
	static int64_t x236 = -1LL;
	volatile uint64_t t45 = 7899217547843275723LLU;

	t45 = ((x233+x234)^(x235==x236));

	if (t45 != 82LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x237 = 0U;
	static int8_t x238 = INT8_MIN;
	static int8_t x239 = INT8_MIN;
	static uint64_t x240 = UINT64_MAX;
	int32_t t46 = 19298;

	t46 = ((x237+x238)^(x239==x240));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x241 = -1;
	uint32_t x242 = 1U;
	int8_t x243 = INT8_MAX;
	int8_t x244 = -6;
	volatile uint32_t t47 = 1179U;

	t47 = ((x241+x242)^(x243==x244));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x245 = 46U;
	uint8_t x247 = 3U;

	t48 = ((x245+x246)^(x247==x248));

	if (t48 != 103534872LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x249 = 0;
	uint8_t x250 = 5U;
	uint64_t x252 = 777LLU;
	int32_t t49 = -156740;

	t49 = ((x249+x250)^(x251==x252));

	if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x255 = -244658585073033747LL;
	volatile uint64_t t50 = 26813726LLU;

	t50 = ((x253+x254)^(x255==x256));

	if (t50 != 3383309632LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x265 = -1LL;
	uint16_t x266 = UINT16_MAX;
	volatile uint16_t x267 = 543U;
	static uint32_t x268 = UINT32_MAX;
	int64_t t51 = -808810987LL;

	t51 = ((x265+x266)^(x267==x268));

	if (t51 != 65534LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x269 = INT8_MIN;
	uint64_t x270 = UINT64_MAX;
	int64_t x271 = 171845401LL;
	static uint64_t x272 = UINT64_MAX;
	uint64_t t52 = 8LLU;

	t52 = ((x269+x270)^(x271==x272));

	if (t52 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MAX;
	volatile int16_t x276 = 49;
	volatile int64_t t53 = -96568592243778LL;

	t53 = ((x273+x274)^(x275==x276));

	if (t53 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x277 = -1LL;
	volatile int64_t x278 = 405025LL;
	static int32_t x279 = INT32_MAX;
	static uint64_t x280 = UINT64_MAX;
	volatile int64_t t54 = -1667585389409LL;

	t54 = ((x277+x278)^(x279==x280));

	if (t54 != 405024LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x281 = -39;
	volatile uint32_t x282 = 238U;
	volatile uint32_t t55 = 96795310U;

	t55 = ((x281+x282)^(x283==x284));

	if (t55 != 199U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x289 = INT8_MAX;
	int16_t x290 = 69;
	static int8_t x291 = INT8_MAX;
	int8_t x292 = -1;

	t56 = ((x289+x290)^(x291==x292));

	if (t56 != 196) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x293 = 738U;
	volatile int16_t x295 = INT16_MIN;
	int32_t x296 = 317;
	int32_t t57 = -2;

	t57 = ((x293+x294)^(x295==x296));

	if (t57 != 738) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x297 = 18853U;
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = INT64_MIN;
	uint32_t x300 = UINT32_MAX;
	uint32_t t58 = 200184238U;

	t58 = ((x297+x298)^(x299==x300));

	if (t58 != 18852U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x301 = -1;
	static int8_t x303 = -5;
	int32_t x304 = 11731156;
	volatile int32_t t59 = -4845;

	t59 = ((x301+x302)^(x303==x304));

	if (t59 != 17) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x309 = -1;
	static uint16_t x310 = 15310U;
	volatile int32_t x312 = -305132477;
	volatile int32_t t60 = 126;

	t60 = ((x309+x310)^(x311==x312));

	if (t60 != 15309) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x317 = INT32_MIN;
	static uint8_t x320 = 87U;
	int32_t t61 = 4433;

	t61 = ((x317+x318)^(x319==x320));

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x322 = INT64_MIN;
	uint32_t x323 = 115061437U;
	int32_t x324 = 32097;
	volatile int64_t t62 = -222631LL;

	t62 = ((x321+x322)^(x323==x324));

	if (t62 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x325 = UINT32_MAX;
	static uint8_t x326 = UINT8_MAX;
	static int8_t x327 = -1;
	uint32_t x328 = 52U;

	t63 = ((x325+x326)^(x327==x328));

	if (t63 != 254U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x329 = 1U;
	volatile int8_t x332 = INT8_MIN;
	uint32_t t64 = 50129U;

	t64 = ((x329+x330)^(x331==x332));

	if (t64 != 124U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x333 = 55U;
	static uint32_t x334 = 52U;
	uint8_t x335 = 4U;
	static volatile int16_t x336 = INT16_MIN;

	t65 = ((x333+x334)^(x335==x336));

	if (t65 != 107U) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x341 = 1561011658461819442LL;
	static int8_t x342 = INT8_MIN;
	int16_t x343 = 24;

	t66 = ((x341+x342)^(x343==x344));

	if (t66 != 1561011658461819314LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x345 = 1;
	int16_t x346 = INT16_MAX;
	uint16_t x347 = 6U;
	volatile int8_t x348 = INT8_MAX;
	int32_t t67 = -933;

	t67 = ((x345+x346)^(x347==x348));

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x349 = 2852U;
	int32_t x351 = INT32_MIN;
	static uint8_t x352 = 20U;
	volatile int64_t t68 = -71529LL;

	t68 = ((x349+x350)^(x351==x352));

	if (t68 != 5311LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x353 = -22095018616753LL;
	static int16_t x355 = INT16_MIN;
	static int64_t t69 = 3728717LL;

	t69 = ((x353+x354)^(x355==x356));

	if (t69 != -22095018649521LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x357 = 5;
	int32_t x359 = INT32_MIN;
	volatile uint8_t x360 = 1U;

	t70 = ((x357+x358)^(x359==x360));

	if (t70 != -18) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x365 = -1;
	int64_t x367 = INT64_MAX;
	uint64_t x368 = 2LLU;
	volatile int32_t t71 = 158212;

	t71 = ((x365+x366)^(x367==x368));

	if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x370 = -56;
	int64_t x371 = INT64_MAX;
	uint64_t x372 = 128129247859954LLU;
	volatile int64_t t72 = -1LL;

	t72 = ((x369+x370)^(x371==x372));

	if (t72 != -9805280168LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x373 = -1;
	uint16_t x374 = 697U;
	static uint64_t x375 = 7037818942022LLU;
	uint16_t x376 = UINT16_MAX;

	t73 = ((x373+x374)^(x375==x376));

	if (t73 != 696) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x377 = INT16_MAX;
	uint32_t x378 = UINT32_MAX;
	uint64_t x380 = 83031748647398LLU;
	uint32_t t74 = 2931997U;

	t74 = ((x377+x378)^(x379==x380));

	if (t74 != 32766U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x391 = -1;
	uint8_t x392 = 2U;

	t75 = ((x389+x390)^(x391==x392));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MAX;
	int64_t x396 = INT64_MIN;
	static int32_t t76 = 239136285;

	t76 = ((x393+x394)^(x395==x396));

	if (t76 != -32641) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x397 = -1;
	static int64_t x398 = INT64_MAX;
	int32_t x399 = -27544;

	t77 = ((x397+x398)^(x399==x400));

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x401 = UINT8_MAX;
	volatile int16_t x402 = -1;
	int32_t x403 = INT32_MAX;
	volatile int32_t t78 = 157684194;

	t78 = ((x401+x402)^(x403==x404));

	if (t78 != 254) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x409 = INT16_MAX;
	uint64_t x411 = UINT64_MAX;
	static uint16_t x412 = UINT16_MAX;
	volatile int64_t t79 = 98697583365903896LL;

	t79 = ((x409+x410)^(x411==x412));

	if (t79 != 351588903761734535LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x413 = -1LL;
	int16_t x414 = INT16_MIN;
	volatile uint32_t x415 = UINT32_MAX;
	int64_t x416 = -1090329764174566412LL;

	t80 = ((x413+x414)^(x415==x416));

	if (t80 != -32769LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x417 = UINT16_MAX;
	volatile int8_t x418 = -1;
	volatile uint32_t x419 = UINT32_MAX;
	uint32_t x420 = 648049626U;
	int32_t t81 = -4;

	t81 = ((x417+x418)^(x419==x420));

	if (t81 != 65534) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x430 = -1;
	uint8_t x432 = 1U;
	int32_t t82 = -770;

	t82 = ((x429+x430)^(x431==x432));

	if (t82 != 6771) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x434 = 50U;
	volatile int32_t x435 = INT32_MIN;
	static int16_t x436 = 454;
	static volatile uint32_t t83 = 898137U;

	t83 = ((x433+x434)^(x435==x436));

	if (t83 != 55U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x437 = 5944681311340560LLU;
	int16_t x438 = INT16_MIN;
	static int16_t x439 = -1;
	int32_t x440 = INT32_MIN;
	static uint64_t t84 = 8311839407378188LLU;

	t84 = ((x437+x438)^(x439==x440));

	if (t84 != 5944681311307792LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x442 = 45;
	static int64_t x444 = -1LL;
	int32_t t85 = 819128181;

	t85 = ((x441+x442)^(x443==x444));

	if (t85 != -1265) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x445 = INT8_MIN;
	static uint16_t x446 = UINT16_MAX;
	uint64_t x447 = 103641626LLU;
	int8_t x448 = INT8_MIN;

	t86 = ((x445+x446)^(x447==x448));

	if (t86 != 65407) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x454 = UINT16_MAX;
	static uint16_t x455 = 16213U;
	int64_t x456 = INT64_MAX;
	uint64_t t87 = 35LLU;

	t87 = ((x453+x454)^(x455==x456));

	if (t87 != 65992LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x457 = INT32_MIN;
	uint32_t x458 = UINT32_MAX;
	volatile int16_t x459 = INT16_MIN;
	uint32_t t88 = 556770819U;

	t88 = ((x457+x458)^(x459==x460));

	if (t88 != 2147483647U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x461 = INT32_MIN;
	int64_t x462 = 26244LL;
	uint32_t x463 = 671837035U;
	static int8_t x464 = INT8_MIN;
	volatile int64_t t89 = -81605LL;

	t89 = ((x461+x462)^(x463==x464));

	if (t89 != -2147457404LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x465 = 1U;
	uint16_t x466 = 11388U;
	uint64_t x467 = 46398204869841364LLU;
	int8_t x468 = INT8_MIN;
	static volatile int32_t t90 = -41916;

	t90 = ((x465+x466)^(x467==x468));

	if (t90 != 11389) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x469 = 25U;
	static int16_t x472 = INT16_MAX;
	int32_t t91 = 1;

	t91 = ((x469+x470)^(x471==x472));

	if (t91 != 28) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x474 = INT16_MIN;
	static int64_t x475 = -1LL;
	volatile int16_t x476 = INT16_MIN;

	t92 = ((x473+x474)^(x475==x476));

	if (t92 != 18446744073709537660LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x481 = -1;
	int32_t x484 = -1;
	volatile int32_t t93 = -123511;

	t93 = ((x481+x482)^(x483==x484));

	if (t93 != 24288) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x485 = 419U;
	static uint32_t x486 = UINT32_MAX;
	volatile uint32_t t94 = 3U;

	t94 = ((x485+x486)^(x487==x488));

	if (t94 != 418U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x490 = UINT16_MAX;
	int16_t x491 = INT16_MAX;
	volatile int16_t x492 = INT16_MAX;
	volatile int64_t t95 = -1668289453994262LL;

	t95 = ((x489+x490)^(x491==x492));

	if (t95 != 65535LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x493 = -1;
	int16_t x495 = INT16_MAX;
	int16_t x496 = INT16_MIN;
	static uint32_t t96 = 1U;

	t96 = ((x493+x494)^(x495==x496));

	if (t96 != 4294967294U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x497 = UINT32_MAX;
	uint32_t x498 = 0U;
	int64_t x499 = 1603175606572415599LL;
	int32_t x500 = INT32_MIN;
	static uint32_t t97 = UINT32_MAX;

	t97 = ((x497+x498)^(x499==x500));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x501 = 24044850U;
	volatile int8_t x502 = INT8_MIN;
	volatile uint64_t x503 = 14683471LLU;
	volatile uint64_t x504 = 20906642690LLU;
	uint32_t t98 = 80276U;

	t98 = ((x501+x502)^(x503==x504));

	if (t98 != 24044722U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x505 = -8;
	static uint16_t x506 = 38U;
	int32_t x507 = -10174;
	volatile int64_t x508 = 2434431LL;
	int32_t t99 = 39453725;

	t99 = ((x505+x506)^(x507==x508));

	if (t99 != 30) { NG(); } else { ; }
	
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

