#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
int64_t x12 = -1LL;
int64_t x17 = INT64_MAX;
static volatile int64_t t4 = 3839865692757352LL;
int64_t x28 = INT64_MIN;
static uint64_t t5 = 802LLU;
int64_t x29 = INT64_MIN;
static int64_t t6 = -18601879219889304LL;
int16_t x37 = INT16_MAX;
volatile int16_t x44 = -1768;
uint8_t x54 = 2U;
int32_t x55 = 2012354;
volatile int32_t x56 = -1351076;
int8_t x83 = INT8_MIN;
int64_t x89 = -1LL;
int64_t x91 = 3025605432939634LL;
volatile int8_t x92 = -34;
static int8_t x93 = INT8_MIN;
volatile int64_t t17 = 6699627LL;
static volatile uint64_t x110 = UINT64_MAX;
volatile int64_t x117 = INT64_MIN;
int64_t t19 = INT64_MAX;
int64_t t23 = -38123006989898685LL;
static int16_t x138 = -1;
volatile int32_t t24 = 6295;
uint16_t x148 = UINT16_MAX;
int64_t t26 = -1LL;
int32_t x157 = INT32_MIN;
volatile uint32_t t28 = 1U;
int32_t x168 = INT32_MIN;
int16_t x169 = INT16_MIN;
uint64_t x170 = 2426937707LLU;
int32_t x171 = INT32_MIN;
static uint16_t x172 = 27U;
int64_t x179 = -1LL;
volatile uint64_t t34 = 6062268648LLU;
int64_t x198 = -1LL;
int32_t x215 = -1566673;
uint32_t x237 = 12601310U;
static int8_t x238 = INT8_MIN;
int16_t x239 = 197;
static int8_t x240 = -1;
uint32_t t41 = UINT32_MAX;
static uint8_t x271 = UINT8_MAX;
volatile int64_t t49 = INT64_MIN;
static int64_t t51 = 1079LL;
static int64_t x301 = -1LL;
uint64_t t55 = 1458256998695506LLU;
static int32_t x320 = INT32_MIN;
int16_t x327 = INT16_MIN;
uint64_t x339 = UINT64_MAX;
volatile int16_t x347 = INT16_MAX;
int32_t t63 = INT32_MIN;
volatile int32_t x352 = INT32_MIN;
volatile int64_t x354 = -1LL;
uint32_t x364 = 18394U;
volatile int32_t x365 = INT32_MIN;
static volatile int16_t x371 = INT16_MAX;
static volatile int8_t x380 = INT8_MIN;
volatile uint64_t x385 = UINT64_MAX;
volatile uint64_t x389 = 539482LLU;
int8_t x400 = -1;
uint64_t t73 = UINT64_MAX;
volatile uint64_t t74 = 3680468374LLU;
uint16_t x412 = UINT16_MAX;
uint16_t x431 = 391U;
volatile int32_t x432 = INT32_MIN;
uint8_t x439 = 44U;
int16_t x454 = INT16_MIN;
static volatile int64_t t83 = INT64_MAX;
static int64_t x469 = INT64_MIN;
int64_t x470 = INT64_MIN;
uint64_t x476 = 5907549885256310543LLU;
int8_t x490 = INT8_MIN;
int64_t t91 = 121518920872421512LL;
static int8_t x515 = INT8_MIN;
static uint32_t x516 = UINT32_MAX;
int64_t x524 = 109255300012955245LL;
int8_t x527 = INT8_MAX;
volatile int64_t t98 = INT64_MIN;
uint64_t t99 = 29LLU;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static uint8_t x2 = 19U;
	uint32_t x4 = 1U;
	uint32_t t0 = 23664U;

	t0 = ((x1/(x2*x3))|x4);

	if (t0 != 443237U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	volatile uint32_t x10 = 98561852U;
	volatile int8_t x11 = -1;
	int64_t t1 = -53978279925LL;

	t1 = ((x9/(x10*x11))|x12);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	int32_t x14 = -1;
	uint32_t x15 = UINT32_MAX;
	volatile int16_t x16 = -8723;
	static uint32_t t2 = 514763U;

	t2 = ((x13/(x14*x15))|x16);

	if (t2 != 4294958573U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = -1;
	int8_t x19 = 3;
	static uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = ((x17/(x18*x19))|x20);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = 190719540787LL;
	int32_t x22 = -1;
	static int32_t x23 = -1;
	volatile int64_t x24 = -1LL;

	t4 = ((x21/(x22*x23))|x24);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 9U;
	volatile uint64_t x26 = 139256643807617LLU;
	volatile int64_t x27 = INT64_MIN;

	t5 = ((x25/(x26*x27))|x28);

	if (t5 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = -1LL;
	int8_t x31 = INT8_MAX;
	int8_t x32 = INT8_MIN;

	t6 = ((x29/(x30*x31))|x32);

	if (t6 != -127LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x38 = 671435691316LL;
	uint16_t x39 = 451U;
	uint16_t x40 = 6424U;
	volatile int64_t t7 = -1766359LL;

	t7 = ((x37/(x38*x39))|x40);

	if (t7 != 6424LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x41 = UINT8_MAX;
	int16_t x42 = -19;
	volatile int8_t x43 = -38;
	int32_t t8 = -52140980;

	t8 = ((x41/(x42*x43))|x44);

	if (t8 != -1768) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MAX;
	uint64_t x47 = 29127943LLU;
	static volatile int64_t x48 = INT64_MAX;
	volatile uint64_t t9 = 229977LLU;

	t9 = ((x45/(x46*x47))|x48);

	if (t9 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = 14;
	volatile uint8_t x50 = 11U;
	static uint8_t x51 = 1U;
	int8_t x52 = -1;
	int32_t t10 = -330;

	t10 = ((x49/(x50*x51))|x52);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -2;
	volatile int32_t t11 = 257365;

	t11 = ((x53/(x54*x55))|x56);

	if (t11 != -1351076) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = 1623;
	volatile uint16_t x66 = 2U;
	uint64_t x67 = UINT64_MAX;
	int64_t x68 = -1LL;
	static uint64_t t12 = UINT64_MAX;

	t12 = ((x65/(x66*x67))|x68);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 3U;
	uint32_t x70 = 5811U;
	int8_t x71 = 28;
	uint16_t x72 = 3187U;
	uint32_t t13 = 1938897U;

	t13 = ((x69/(x70*x71))|x72);

	if (t13 != 3187U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x81 = UINT64_MAX;
	uint8_t x82 = UINT8_MAX;
	static uint16_t x84 = 1635U;
	volatile uint64_t t14 = 24374951514LLU;

	t14 = ((x81/(x82*x83))|x84);

	if (t14 != 1635LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x90 = -1;
	volatile int64_t t15 = -90111246033618LL;

	t15 = ((x89/(x90*x91))|x92);

	if (t15 != -34LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x94 = 896807620751863LLU;
	static int8_t x95 = INT8_MIN;
	uint16_t x96 = 8U;
	volatile uint64_t t16 = 6389677775731LLU;

	t16 = ((x93/(x94*x95))|x96);

	if (t16 != 9LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = INT64_MAX;
	uint8_t x102 = UINT8_MAX;
	static int16_t x103 = -28;
	int64_t x104 = INT64_MAX;

	t17 = ((x101/(x102*x103))|x104);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x109 = INT16_MIN;
	int32_t x111 = -36;
	static int64_t x112 = INT64_MIN;
	volatile uint64_t t18 = 5746115077403967LLU;

	t18 = ((x109/(x110*x111))|x112);

	if (t18 != 9735781594457817998LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x118 = 94U;
	volatile int8_t x119 = INT8_MIN;
	volatile int64_t x120 = INT64_MAX;

	t19 = ((x117/(x118*x119))|x120);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x121 = 328306231265951LL;
	static volatile uint32_t x122 = 233U;
	int32_t x123 = 124;
	uint64_t x124 = UINT64_MAX;
	uint64_t t20 = UINT64_MAX;

	t20 = ((x121/(x122*x123))|x124);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x125 = -1;
	static int64_t x126 = 391559533143123614LL;
	uint64_t x127 = 25036LLU;
	static int32_t x128 = 74731;
	volatile uint64_t t21 = 639282842763596619LLU;

	t21 = ((x125/(x126*x127))|x128);

	if (t21 != 74731LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x129 = -1;
	uint32_t x130 = 125655U;
	uint16_t x131 = UINT16_MAX;
	volatile int16_t x132 = INT16_MAX;
	volatile uint32_t t22 = 853U;

	t22 = ((x129/(x130*x131))|x132);

	if (t22 != 32767U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x133 = INT64_MIN;
	volatile int16_t x134 = -1;
	volatile uint8_t x135 = UINT8_MAX;
	int64_t x136 = -1LL;

	t23 = ((x133/(x134*x135))|x136);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x137 = UINT16_MAX;
	uint8_t x139 = UINT8_MAX;
	int32_t x140 = INT32_MIN;

	t24 = ((x137/(x138*x139))|x140);

	if (t24 != -257) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x141 = 0;
	volatile int8_t x142 = -1;
	int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	static int32_t t25 = 0;

	t25 = ((x141/(x142*x143))|x144);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x145 = UINT32_MAX;
	int64_t x146 = 10LL;
	int16_t x147 = INT16_MIN;

	t26 = ((x145/(x146*x147))|x148);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x149 = INT16_MIN;
	uint8_t x150 = 14U;
	uint64_t x151 = 3135908116LLU;
	uint32_t x152 = 193830U;
	volatile uint64_t t27 = 1495588836LLU;

	t27 = ((x149/(x150*x151))|x152);

	if (t27 != 420214207LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x158 = INT8_MIN;
	volatile uint32_t x159 = UINT32_MAX;
	int16_t x160 = INT16_MAX;

	t28 = ((x157/(x158*x159))|x160);

	if (t28 != 16809983U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x162 = UINT32_MAX;
	uint8_t x163 = 79U;
	int64_t x164 = INT64_MAX;
	volatile int64_t t29 = INT64_MAX;

	t29 = ((x161/(x162*x163))|x164);

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x165 = UINT16_MAX;
	volatile uint32_t x166 = 283603907U;
	int8_t x167 = INT8_MAX;
	volatile uint32_t t30 = 5653U;

	t30 = ((x165/(x166*x167))|x168);

	if (t30 != 2147483648U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t t31 = 3413082440226016LLU;

	t31 = ((x169/(x170*x171))|x172);

	if (t31 != 27LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x177 = -668;
	volatile int8_t x178 = INT8_MAX;
	uint16_t x180 = UINT16_MAX;
	volatile int64_t t32 = -1070LL;

	t32 = ((x177/(x178*x179))|x180);

	if (t32 != 65535LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x181 = -1;
	volatile int16_t x182 = INT16_MIN;
	int8_t x183 = 5;
	volatile int16_t x184 = INT16_MAX;
	volatile int32_t t33 = 33384873;

	t33 = ((x181/(x182*x183))|x184);

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x185 = 59U;
	int64_t x186 = INT64_MAX;
	static uint64_t x187 = UINT64_MAX;
	static int8_t x188 = INT8_MIN;

	t34 = ((x185/(x186*x187))|x188);

	if (t34 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x193 = INT16_MAX;
	int32_t x194 = INT32_MAX;
	uint64_t x195 = UINT64_MAX;
	uint16_t x196 = UINT16_MAX;
	volatile uint64_t t35 = 218LLU;

	t35 = ((x193/(x194*x195))|x196);

	if (t35 != 65535LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x197 = INT64_MIN;
	static volatile int32_t x199 = INT32_MIN;
	static int16_t x200 = INT16_MIN;
	int64_t t36 = -2315339178LL;

	t36 = ((x197/(x198*x199))|x200);

	if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x201 = INT16_MIN;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = 2177U;
	static int32_t x204 = INT32_MAX;
	volatile int32_t t37 = INT32_MAX;

	t37 = ((x201/(x202*x203))|x204);

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x213 = -1;
	uint16_t x214 = 15U;
	int32_t x216 = INT32_MIN;
	int32_t t38 = INT32_MIN;

	t38 = ((x213/(x214*x215))|x216);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x217 = UINT16_MAX;
	int64_t x218 = 3LL;
	static int32_t x219 = -1;
	int16_t x220 = INT16_MIN;
	int64_t t39 = -21LL;

	t39 = ((x217/(x218*x219))|x220);

	if (t39 != -21845LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x225 = INT8_MIN;
	uint64_t x226 = 12224LLU;
	int64_t x227 = -56233LL;
	volatile uint64_t x228 = 1360893429483LLU;
	static uint64_t t40 = 4200663LLU;

	t40 = ((x225/(x226*x227))|x228);

	if (t40 != 1360893429483LLU) { NG(); } else { ; }
	
}

void f41(void) {


	t41 = ((x237/(x238*x239))|x240);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x241 = 8;
	int64_t x242 = -1LL;
	int32_t x243 = -364;
	int64_t x244 = INT64_MAX;
	volatile int64_t t42 = INT64_MAX;

	t42 = ((x241/(x242*x243))|x244);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x245 = INT8_MIN;
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = -2;
	uint32_t x248 = 9U;
	static uint32_t t43 = 495952U;

	t43 = ((x245/(x246*x247))|x248);

	if (t43 != 9U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = -13;
	volatile int16_t x251 = -3;
	int16_t x252 = -47;
	volatile int32_t t44 = -23;

	t44 = ((x249/(x250*x251))|x252);

	if (t44 != -3) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x253 = 26896U;
	uint8_t x254 = 119U;
	static uint16_t x255 = 269U;
	volatile int64_t x256 = INT64_MIN;
	static volatile int64_t t45 = INT64_MIN;

	t45 = ((x253/(x254*x255))|x256);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x261 = UINT16_MAX;
	int64_t x262 = -1LL;
	int16_t x263 = 1397;
	static int64_t x264 = INT64_MAX;
	volatile int64_t t46 = 20972996959389279LL;

	t46 = ((x261/(x262*x263))|x264);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x265 = 100721226356LLU;
	static uint64_t x266 = UINT64_MAX;
	int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MIN;
	uint64_t t47 = 62429072051LLU;

	t47 = ((x265/(x266*x267))|x268);

	if (t47 != 18446744073709545444LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x269 = -1LL;
	int16_t x270 = -3;
	int8_t x272 = INT8_MIN;
	volatile int64_t t48 = 1LL;

	t48 = ((x269/(x270*x271))|x272);

	if (t48 != -128LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x273 = 10U;
	int32_t x274 = -670899;
	int8_t x275 = INT8_MAX;
	static int64_t x276 = INT64_MIN;

	t49 = ((x273/(x274*x275))|x276);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x285 = INT16_MIN;
	static int64_t x286 = 1918850846581014603LL;
	volatile int32_t x287 = 1;
	volatile int64_t x288 = INT64_MIN;
	static volatile int64_t t50 = INT64_MIN;

	t50 = ((x285/(x286*x287))|x288);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x289 = -1;
	int64_t x290 = 2409780LL;
	int32_t x291 = 82575;
	int8_t x292 = INT8_MIN;

	t51 = ((x289/(x290*x291))|x292);

	if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x293 = 52067022664948LL;
	uint16_t x294 = UINT16_MAX;
	int16_t x295 = 17;
	static int64_t x296 = INT64_MAX;
	volatile int64_t t52 = INT64_MAX;

	t52 = ((x293/(x294*x295))|x296);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x297 = UINT16_MAX;
	uint64_t x298 = UINT64_MAX;
	static int64_t x299 = 12148896044185945LL;
	int64_t x300 = -413674005002959LL;
	static uint64_t t53 = 8291LLU;

	t53 = ((x297/(x298*x299))|x300);

	if (t53 != 18446330399704548657LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x302 = -1934668LL;
	static int8_t x303 = 4;
	int8_t x304 = 36;
	static int64_t t54 = -764LL;

	t54 = ((x301/(x302*x303))|x304);

	if (t54 != 36LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x305 = 770025906LL;
	volatile uint64_t x306 = 1693291LLU;
	uint16_t x307 = UINT16_MAX;
	uint64_t x308 = 43649379141769878LLU;

	t55 = ((x305/(x306*x307))|x308);

	if (t55 != 43649379141769878LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x313 = 18U;
	volatile uint8_t x314 = 123U;
	static int8_t x315 = INT8_MAX;
	int8_t x316 = INT8_MIN;
	volatile int32_t t56 = 6302;

	t56 = ((x313/(x314*x315))|x316);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x317 = 0;
	volatile int64_t x318 = -650944LL;
	int8_t x319 = -9;
	volatile int64_t t57 = 64613667384657255LL;

	t57 = ((x317/(x318*x319))|x320);

	if (t57 != -2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x321 = -1;
	int64_t x322 = -1LL;
	static int16_t x323 = -112;
	uint64_t x324 = 8144252LLU;
	static volatile uint64_t t58 = 297318529LLU;

	t58 = ((x321/(x322*x323))|x324);

	if (t58 != 8144252LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MAX;
	uint16_t x328 = 89U;
	int64_t t59 = 214167LL;

	t59 = ((x325/(x326*x327))|x328);

	if (t59 != 2216338399321LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x329 = -1;
	int8_t x330 = 59;
	int8_t x331 = 46;
	static int32_t x332 = INT32_MIN;
	volatile int32_t t60 = INT32_MIN;

	t60 = ((x329/(x330*x331))|x332);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x333 = 25U;
	uint16_t x334 = 123U;
	volatile int8_t x335 = INT8_MIN;
	uint32_t x336 = UINT32_MAX;
	static uint32_t t61 = UINT32_MAX;

	t61 = ((x333/(x334*x335))|x336);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x337 = INT64_MIN;
	static uint8_t x338 = 6U;
	uint64_t x340 = 6LLU;
	uint64_t t62 = 3407291793582313LLU;

	t62 = ((x337/(x338*x339))|x340);

	if (t62 != 6LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x345 = -58;
	volatile int8_t x346 = INT8_MAX;
	int32_t x348 = INT32_MIN;

	t63 = ((x345/(x346*x347))|x348);

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x349 = INT16_MIN;
	volatile int8_t x350 = 14;
	int16_t x351 = INT16_MIN;
	volatile int32_t t64 = INT32_MIN;

	t64 = ((x349/(x350*x351))|x352);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x353 = -3558LL;
	uint8_t x355 = UINT8_MAX;
	static uint32_t x356 = UINT32_MAX;
	volatile int64_t t65 = -22549072196LL;

	t65 = ((x353/(x354*x355))|x356);

	if (t65 != 4294967295LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x357 = INT16_MAX;
	uint64_t x358 = 1965375139LLU;
	int8_t x359 = -1;
	int16_t x360 = INT16_MAX;
	volatile uint64_t t66 = 168349179215401LLU;

	t66 = ((x357/(x358*x359))|x360);

	if (t66 != 32767LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x361 = INT64_MIN;
	uint16_t x362 = UINT16_MAX;
	volatile uint64_t x363 = 624840LLU;
	uint64_t t67 = 336685863LLU;

	t67 = ((x361/(x362*x363))|x364);

	if (t67 != 225241087LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x366 = -5531;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = 448;
	volatile int32_t t68 = 1226064;

	t68 = ((x365/(x366*x367))|x368);

	if (t68 != 453) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x369 = INT64_MAX;
	uint64_t x370 = 81408LLU;
	static int16_t x372 = INT16_MIN;
	static uint64_t t69 = 1936270615656403568LLU;

	t69 = ((x369/(x370*x371))|x372);

	if (t69 != 18446744073709528743LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x377 = 4LL;
	int64_t x378 = INT64_MAX;
	int64_t x379 = -1LL;
	int64_t t70 = 57923473306349750LL;

	t70 = ((x377/(x378*x379))|x380);

	if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x386 = 38U;
	volatile int16_t x387 = 12324;
	uint16_t x388 = 54U;
	uint64_t t71 = 4574257398495160LLU;

	t71 = ((x385/(x386*x387))|x388);

	if (t71 != 39389859909046LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x390 = UINT16_MAX;
	volatile int8_t x391 = 21;
	static uint16_t x392 = UINT16_MAX;
	uint64_t t72 = 4056736411557362LLU;

	t72 = ((x389/(x390*x391))|x392);

	if (t72 != 65535LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x397 = INT16_MIN;
	uint64_t x398 = UINT64_MAX;
	uint64_t x399 = 102347736522957630LLU;

	t73 = ((x397/(x398*x399))|x400);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x401 = INT16_MIN;
	static uint32_t x402 = UINT32_MAX;
	uint64_t x403 = 120497661621428LLU;
	int16_t x404 = INT16_MIN;

	t74 = ((x401/(x402*x403))|x404);

	if (t74 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x409 = 1977865U;
	static int32_t x410 = 2978628;
	uint64_t x411 = 500860827503454LLU;
	uint64_t t75 = 87LLU;

	t75 = ((x409/(x410*x411))|x412);

	if (t75 != 65535LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x413 = INT32_MAX;
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = INT32_MAX;
	uint64_t x416 = 14432LLU;
	static uint64_t t76 = 74560145605LLU;

	t76 = ((x413/(x414*x415))|x416);

	if (t76 != 14432LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x417 = UINT64_MAX;
	volatile uint64_t x418 = 27588388756LLU;
	int8_t x419 = INT8_MIN;
	volatile uint16_t x420 = 133U;
	uint64_t t77 = 1540198586LLU;

	t77 = ((x417/(x418*x419))|x420);

	if (t77 != 133LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x421 = INT32_MIN;
	static int16_t x422 = 757;
	static int64_t x423 = 1982673558LL;
	volatile uint16_t x424 = UINT16_MAX;
	static volatile int64_t t78 = 13LL;

	t78 = ((x421/(x422*x423))|x424);

	if (t78 != 65535LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x429 = UINT32_MAX;
	int16_t x430 = -1;
	static volatile uint32_t t79 = 259U;

	t79 = ((x429/(x430*x431))|x432);

	if (t79 != 2147483649U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x437 = 49;
	volatile int32_t x438 = 66;
	int64_t x440 = INT64_MIN;
	static volatile int64_t t80 = INT64_MIN;

	t80 = ((x437/(x438*x439))|x440);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x441 = -1489;
	uint32_t x442 = 33765U;
	static uint32_t x443 = UINT32_MAX;
	int64_t x444 = -1LL;
	int64_t t81 = -533183LL;

	t81 = ((x441/(x442*x443))|x444);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x445 = 17U;
	volatile int64_t x446 = -10740845512028946LL;
	static volatile int8_t x447 = -22;
	static volatile int64_t x448 = INT64_MAX;
	static int64_t t82 = INT64_MAX;

	t82 = ((x445/(x446*x447))|x448);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x453 = UINT32_MAX;
	int8_t x455 = 1;
	int64_t x456 = INT64_MAX;

	t83 = ((x453/(x454*x455))|x456);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x457 = 2;
	int16_t x458 = INT16_MIN;
	uint16_t x459 = 87U;
	int8_t x460 = -1;
	volatile int32_t t84 = -65062;

	t84 = ((x457/(x458*x459))|x460);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x471 = UINT64_MAX;
	int64_t x472 = -6490090152109815LL;
	volatile uint64_t t85 = 16286529LLU;

	t85 = ((x469/(x470*x471))|x472);

	if (t85 != 18440253983557441801LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x473 = INT16_MAX;
	uint32_t x474 = 1206569U;
	static int32_t x475 = 340868486;
	volatile uint64_t t86 = 480664LLU;

	t86 = ((x473/(x474*x475))|x476);

	if (t86 != 5907549885256310543LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x477 = 1171928U;
	int32_t x478 = -1;
	uint8_t x479 = 7U;
	uint32_t x480 = 65U;
	uint32_t t87 = 1U;

	t87 = ((x477/(x478*x479))|x480);

	if (t87 != 65U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x481 = -182502391;
	volatile uint8_t x482 = 23U;
	volatile int8_t x483 = -1;
	uint64_t x484 = 198878LLU;
	static uint64_t t88 = 297LLU;

	t88 = ((x481/(x482*x483))|x484);

	if (t88 != 8068094LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x489 = UINT16_MAX;
	int64_t x491 = -1LL;
	volatile int64_t x492 = INT64_MIN;
	volatile int64_t t89 = -2528869601210LL;

	t89 = ((x489/(x490*x491))|x492);

	if (t89 != -9223372036854775297LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x493 = -1;
	int16_t x494 = -11;
	volatile uint64_t x495 = UINT64_MAX;
	uint16_t x496 = 6406U;
	volatile uint64_t t90 = 43338108724LLU;

	t90 = ((x493/(x494*x495))|x496);

	if (t90 != 1676976733973601751LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x497 = 386;
	static int16_t x498 = INT16_MIN;
	int64_t x499 = -1LL;
	int8_t x500 = INT8_MIN;

	t91 = ((x497/(x498*x499))|x500);

	if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x501 = -1;
	static uint16_t x502 = 205U;
	volatile int16_t x503 = 1;
	uint32_t x504 = 503808045U;
	volatile uint32_t t92 = 4U;

	t92 = ((x501/(x502*x503))|x504);

	if (t92 != 503808045U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x505 = 187;
	volatile uint64_t x506 = 33270083LLU;
	int8_t x507 = INT8_MAX;
	uint32_t x508 = 1040147U;
	uint64_t t93 = 15417884631545397LLU;

	t93 = ((x505/(x506*x507))|x508);

	if (t93 != 1040147LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x513 = -1;
	static uint32_t x514 = UINT32_MAX;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = ((x513/(x514*x515))|x516);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x517 = UINT16_MAX;
	int16_t x518 = -1;
	int16_t x519 = INT16_MIN;
	int64_t x520 = INT64_MIN;
	static int64_t t95 = -7850456260LL;

	t95 = ((x517/(x518*x519))|x520);

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x521 = 1328U;
	volatile int32_t x522 = 30530;
	int8_t x523 = -1;
	int64_t t96 = 465015863LL;

	t96 = ((x521/(x522*x523))|x524);

	if (t96 != 109255300012955245LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x525 = -1;
	volatile int8_t x526 = -8;
	volatile int64_t x528 = INT64_MIN;
	int64_t t97 = INT64_MIN;

	t97 = ((x525/(x526*x527))|x528);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x529 = 122U;
	int64_t x530 = 634756029324LL;
	uint8_t x531 = 1U;
	int64_t x532 = INT64_MIN;

	t98 = ((x529/(x530*x531))|x532);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x533 = INT16_MAX;
	volatile uint8_t x534 = UINT8_MAX;
	uint8_t x535 = 80U;
	static uint64_t x536 = 372644LLU;

	t99 = ((x533/(x534*x535))|x536);

	if (t99 != 372645LLU) { NG(); } else { ; }
	
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

