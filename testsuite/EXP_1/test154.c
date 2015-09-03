#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x9 = 97U;
int16_t x16 = INT16_MAX;
int16_t x19 = INT16_MIN;
static int32_t x22 = -5;
volatile int64_t x42 = 882754174LL;
int8_t x44 = 2;
int8_t x47 = INT8_MAX;
static int64_t t11 = -19587279676LL;
uint16_t x56 = UINT16_MAX;
static uint64_t t12 = 1LLU;
static int8_t x67 = INT8_MIN;
int32_t x78 = -3176;
uint16_t x80 = UINT16_MAX;
int64_t x81 = 129923760723084LL;
volatile uint32_t x90 = 71657U;
int64_t x91 = INT64_MAX;
int32_t x93 = -73538;
uint32_t x94 = UINT32_MAX;
volatile int32_t x95 = -1;
uint32_t t21 = UINT32_MAX;
static uint32_t x98 = UINT32_MAX;
uint16_t x105 = 4071U;
volatile uint16_t x108 = 22U;
static int32_t x109 = -26;
static volatile int16_t x112 = -1;
volatile uint16_t x115 = UINT16_MAX;
uint32_t t26 = 595182U;
volatile int8_t x117 = INT8_MIN;
int8_t x118 = 0;
int32_t x124 = 2377;
int8_t x126 = INT8_MIN;
int8_t x128 = INT8_MIN;
volatile int64_t x129 = -1LL;
volatile int32_t x135 = -298;
static volatile int8_t x148 = -4;
uint16_t x151 = UINT16_MAX;
static int8_t x165 = -55;
volatile int8_t x168 = -1;
static uint32_t t38 = 737803U;
volatile int64_t x176 = INT64_MAX;
volatile int64_t t39 = -384923LL;
uint8_t x178 = 2U;
static int64_t x182 = -8571985804826LL;
int64_t t43 = 132390944LL;
volatile int64_t x195 = -1726077593770141LL;
int16_t x202 = INT16_MIN;
uint16_t x210 = 9U;
volatile uint32_t t48 = 47058U;
static int64_t x214 = 25826809319562556LL;
int64_t x218 = -1LL;
volatile int32_t x224 = 6720;
static int16_t x225 = INT16_MAX;
static uint32_t x226 = 30322U;
int32_t x229 = -1;
int32_t x232 = 410;
int16_t x240 = -1;
uint32_t x249 = 181027051U;
volatile uint64_t x252 = 4139485640LLU;
uint64_t x253 = 45373813885LLU;
int8_t x254 = -29;
uint64_t x261 = 412981LLU;
int64_t x264 = INT64_MIN;
int32_t x266 = -49417298;
int64_t x269 = -120LL;
int32_t x270 = 18;
static uint64_t t61 = 819250383870408283LLU;
volatile uint32_t x276 = UINT32_MAX;
uint16_t x284 = UINT16_MAX;
static int16_t x285 = 423;
int64_t x286 = -104642438LL;
uint64_t x296 = UINT64_MAX;
uint64_t t67 = 12672207LLU;
uint64_t x309 = 15339LLU;
static int16_t x315 = 3;
static uint64_t x316 = UINT64_MAX;
uint64_t t71 = 64LLU;
uint64_t t72 = 150774LLU;
uint16_t x324 = UINT16_MAX;
uint64_t t73 = 28859953618808779LLU;
volatile int32_t x328 = INT32_MIN;
int64_t x338 = 490371317553633LL;
static volatile int64_t t76 = 1283467LL;
static volatile int64_t x343 = -46918299LL;
int64_t x348 = -1LL;
uint32_t t79 = 103U;
static volatile int16_t x353 = 283;
static int16_t x354 = INT16_MIN;
int8_t x358 = INT8_MIN;
static volatile int32_t x364 = INT32_MIN;
int16_t x365 = INT16_MAX;
static volatile int8_t x366 = -1;
int32_t x375 = 2019237;
volatile int8_t x396 = -1;
static int16_t x400 = 2;
static volatile int32_t t91 = -144839;
int64_t x402 = -822LL;
static int64_t x407 = INT64_MAX;
int16_t x423 = INT16_MIN;
int64_t x424 = INT64_MIN;
uint16_t x437 = 481U;
int8_t x443 = -20;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	uint64_t x4 = UINT64_MAX;
	static volatile uint64_t t0 = UINT64_MAX;

	t0 = (((x1+x2)|x3)&x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile uint64_t x6 = 106069LLU;
	static int32_t x7 = -1;
	int64_t x8 = INT64_MAX;
	uint64_t t1 = 84LLU;

	t1 = (((x5+x6)|x7)&x8);

	if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x10 = 82U;
	uint8_t x11 = UINT8_MAX;
	uint8_t x12 = UINT8_MAX;
	uint32_t t2 = 50U;

	t2 = (((x9+x10)|x11)&x12);

	if (t2 != 255U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile uint64_t x14 = UINT64_MAX;
	int16_t x15 = -1;
	volatile uint64_t t3 = 366264014338677LLU;

	t3 = (((x13+x14)|x15)&x16);

	if (t3 != 32767LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MIN;
	int32_t x20 = -55800;
	volatile int32_t t4 = 1275146;

	t4 = (((x17+x18)|x19)&x20);

	if (t4 != -55808) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = UINT8_MAX;
	uint32_t x23 = 553297206U;
	uint8_t x24 = 98U;
	uint32_t t5 = 561705U;

	t5 = (((x21+x22)|x23)&x24);

	if (t5 != 98U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	uint64_t x30 = 11LLU;
	volatile int32_t x31 = INT32_MIN;
	int16_t x32 = -256;
	uint64_t t6 = 501289LLU;

	t6 = (((x29+x30)|x31)&x32);

	if (t6 != 18446744071562068224LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int8_t x34 = -1;
	int64_t x35 = INT64_MIN;
	static uint32_t x36 = 7509U;
	volatile int64_t t7 = 14934964LL;

	t7 = (((x33+x34)|x35)&x36);

	if (t7 != 7509LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MIN;
	uint8_t x38 = 0U;
	int32_t x39 = INT32_MIN;
	static uint32_t x40 = 1629U;
	volatile uint32_t t8 = 13003U;

	t8 = (((x37+x38)|x39)&x40);

	if (t8 != 1536U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	int8_t x43 = 4;
	volatile int64_t t9 = 92846466979624LL;

	t9 = (((x41+x42)|x43)&x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	uint8_t x46 = UINT8_MAX;
	uint16_t x48 = UINT16_MAX;
	volatile int64_t t10 = -54849741LL;

	t10 = (((x45+x46)|x47)&x48);

	if (t10 != 255LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = INT64_MAX;
	volatile int32_t x50 = -1;
	uint16_t x51 = UINT16_MAX;
	volatile int32_t x52 = 262674141;

	t11 = (((x49+x50)|x51)&x52);

	if (t11 != 262674141LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 6001031LLU;
	int16_t x54 = -1;
	int8_t x55 = -1;

	t12 = (((x53+x54)|x55)&x56);

	if (t12 != 65535LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = 108547733523874193LLU;
	static uint64_t x58 = UINT64_MAX;
	uint64_t x59 = UINT64_MAX;
	int16_t x60 = INT16_MAX;
	static uint64_t t13 = 253241835901276LLU;

	t13 = (((x57+x58)|x59)&x60);

	if (t13 != 32767LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = INT8_MAX;
	uint64_t x62 = 3060024623LLU;
	int8_t x63 = -10;
	int16_t x64 = 50;
	volatile uint64_t t14 = 519LLU;

	t14 = (((x61+x62)|x63)&x64);

	if (t14 != 50LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x65 = 24110509U;
	uint32_t x66 = 767U;
	uint16_t x68 = 2U;
	uint32_t t15 = 15267U;

	t15 = (((x65+x66)|x67)&x68);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	int16_t x74 = INT16_MIN;
	int64_t x75 = -255082270LL;
	uint8_t x76 = 0U;
	static volatile int64_t t16 = -1937LL;

	t16 = (((x73+x74)|x75)&x76);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MAX;
	int8_t x79 = 0;
	static int64_t t17 = 47644340622360962LL;

	t17 = (((x77+x78)|x79)&x80);

	if (t17 != 62359LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x82 = UINT16_MAX;
	uint32_t x83 = 3U;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t18 = 217438235806954442LLU;

	t18 = (((x81+x82)|x83)&x84);

	if (t18 != 129923760788619LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = UINT32_MAX;
	uint16_t x86 = 57U;
	int8_t x87 = INT8_MIN;
	int8_t x88 = -1;
	uint32_t t19 = 103983U;

	t19 = (((x85+x86)|x87)&x88);

	if (t19 != 4294967224U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -166;
	volatile int64_t x92 = INT64_MIN;
	volatile int64_t t20 = -644988245162252LL;

	t20 = (((x89+x90)|x91)&x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x96 = -1;

	t21 = (((x93+x94)|x95)&x96);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = INT64_MIN;
	uint64_t x99 = UINT64_MAX;
	int16_t x100 = INT16_MIN;
	volatile uint64_t t22 = 1870664117LLU;

	t22 = (((x97+x98)|x99)&x100);

	if (t22 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x101 = 647;
	int8_t x102 = INT8_MAX;
	uint32_t x103 = 973499805U;
	static int32_t x104 = 5925;
	uint32_t t23 = 1836443U;

	t23 = (((x101+x102)|x103)&x104);

	if (t23 != 1797U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x106 = -21171571;
	volatile int64_t x107 = INT64_MIN;
	volatile int64_t t24 = 189LL;

	t24 = (((x105+x106)|x107)&x108);

	if (t24 != 20LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x110 = 96U;
	uint8_t x111 = 3U;
	static volatile int32_t t25 = -3;

	t25 = (((x109+x110)|x111)&x112);

	if (t25 != 71) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 184U;
	uint8_t x114 = 0U;
	int32_t x116 = INT32_MAX;

	t26 = (((x113+x114)|x115)&x116);

	if (t26 != 65535U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x119 = INT64_MIN;
	static int8_t x120 = -3;
	int64_t t27 = -872116380LL;

	t27 = (((x117+x118)|x119)&x120);

	if (t27 != -128LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = 10;
	static uint32_t x122 = 4U;
	int8_t x123 = -32;
	volatile uint32_t t28 = 257693U;

	t28 = (((x121+x122)|x123)&x124);

	if (t28 != 2376U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 114522605191620984LLU;
	int32_t x127 = 196;
	uint64_t t29 = 59LLU;

	t29 = (((x125+x126)|x127)&x128);

	if (t29 != 114522605191620736LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x130 = -1LL;
	uint16_t x131 = 0U;
	static volatile int64_t x132 = -1LL;
	volatile int64_t t30 = -118008LL;

	t30 = (((x129+x130)|x131)&x132);

	if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = 4;
	uint32_t x134 = 0U;
	int64_t x136 = INT64_MIN;
	int64_t t31 = 44998001551690174LL;

	t31 = (((x133+x134)|x135)&x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = 0;
	static int16_t x138 = INT16_MIN;
	static int16_t x139 = -1;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t32 = -431041404;

	t32 = (((x137+x138)|x139)&x140);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 15963649338LLU;
	int32_t x146 = 7037;
	int32_t x147 = INT32_MIN;
	uint64_t t33 = 45667899154103618LLU;

	t33 = (((x145+x146)|x147)&x148);

	if (t33 != 18446744072493338804LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 70394LLU;
	uint64_t x150 = 7748451116807035665LLU;
	static volatile int32_t x152 = 13200051;
	volatile uint64_t t34 = 6057047LLU;

	t34 = (((x149+x150)|x151)&x152);

	if (t34 != 12610227LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x153 = -1;
	int32_t x154 = INT32_MAX;
	volatile int64_t x155 = INT64_MAX;
	uint16_t x156 = 18U;
	static volatile int64_t t35 = -14065925691788LL;

	t35 = (((x153+x154)|x155)&x156);

	if (t35 != 18LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = INT16_MAX;
	int64_t x158 = -1LL;
	static volatile uint64_t x159 = UINT64_MAX;
	volatile uint64_t x160 = 256123316942126LLU;
	volatile uint64_t t36 = 0LLU;

	t36 = (((x157+x158)|x159)&x160);

	if (t36 != 256123316942126LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = INT16_MIN;
	volatile uint16_t x167 = 1U;
	volatile int32_t t37 = -213883;

	t37 = (((x165+x166)|x167)&x168);

	if (t37 != -32823) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 4703430U;
	int8_t x170 = 6;
	uint16_t x171 = 0U;
	static int8_t x172 = INT8_MIN;

	t38 = (((x169+x170)|x171)&x172);

	if (t38 != 4703360U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = 38;
	int32_t x175 = INT32_MIN;

	t39 = (((x173+x174)|x175)&x176);

	if (t39 != 9223372034707292198LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	static volatile int8_t x179 = INT8_MAX;
	volatile int64_t x180 = -10195750401198640LL;
	int64_t t40 = 0LL;

	t40 = (((x177+x178)|x179)&x180);

	if (t40 != -10195750401212336LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x181 = 113U;
	int16_t x183 = -236;
	int16_t x184 = -1;
	volatile int64_t t41 = -22357345LL;

	t41 = (((x181+x182)|x183)&x184);

	if (t41 != -169LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = 1;
	int8_t x186 = -4;
	uint32_t x187 = UINT32_MAX;
	uint8_t x188 = 13U;
	volatile uint32_t t42 = 315U;

	t42 = (((x185+x186)|x187)&x188);

	if (t42 != 13U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x189 = 5U;
	uint8_t x190 = UINT8_MAX;
	volatile int64_t x191 = 88456880315LL;
	int64_t x192 = INT64_MIN;

	t43 = (((x189+x190)|x191)&x192);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = 15;
	int64_t x194 = -1LL;
	static uint64_t x196 = 101249LLU;
	uint64_t t44 = 70060744738LLU;

	t44 = (((x193+x194)|x195)&x196);

	if (t44 != 66305LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MAX;
	static int32_t x198 = -4;
	volatile int64_t x199 = -166LL;
	int8_t x200 = -16;
	static int64_t t45 = -10LL;

	t45 = (((x197+x198)|x199)&x200);

	if (t45 != -16LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MAX;
	uint32_t x203 = 2940833U;
	static uint32_t x204 = UINT32_MAX;
	uint32_t t46 = 218836344U;

	t46 = (((x201+x202)|x203)&x204);

	if (t46 != 2147483647U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x205 = 2U;
	int16_t x206 = INT16_MIN;
	static int64_t x207 = 29922261675518719LL;
	static uint64_t x208 = 1855961232999045LLU;
	uint64_t t47 = 33LLU;

	t47 = (((x205+x206)|x207)&x208);

	if (t47 != 1855961232999045LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = -1;
	uint32_t x211 = UINT32_MAX;
	int32_t x212 = INT32_MIN;

	t48 = (((x209+x210)|x211)&x212);

	if (t48 != 2147483648U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x213 = -1;
	volatile int16_t x215 = -1;
	volatile uint32_t x216 = 1347890U;
	static int64_t t49 = 788327697347114870LL;

	t49 = (((x213+x214)|x215)&x216);

	if (t49 != 1347890LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x217 = UINT16_MAX;
	int16_t x219 = INT16_MIN;
	int64_t x220 = -14404175051LL;
	volatile int64_t t50 = 30353218710LL;

	t50 = (((x217+x218)|x219)&x220);

	if (t50 != -14404175052LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = 77785LLU;
	int16_t x222 = -1;
	uint8_t x223 = 97U;
	uint64_t t51 = 1827086LLU;

	t51 = (((x221+x222)|x223)&x224);

	if (t51 != 2624LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x227 = INT64_MIN;
	volatile int64_t x228 = INT64_MIN;
	volatile int64_t t52 = INT64_MIN;

	t52 = (((x225+x226)|x227)&x228);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x230 = 402177069U;
	int64_t x231 = INT64_MIN;
	static volatile int64_t t53 = -490533760949562LL;

	t53 = (((x229+x230)|x231)&x232);

	if (t53 != 8LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = INT64_MIN;
	uint8_t x238 = 92U;
	static uint64_t x239 = UINT64_MAX;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (((x237+x238)|x239)&x240);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MIN;
	static uint64_t x242 = UINT64_MAX;
	uint16_t x243 = 1730U;
	int64_t x244 = 39LL;
	volatile uint64_t t55 = 7995781922042946731LLU;

	t55 = (((x241+x242)|x243)&x244);

	if (t55 != 39LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x250 = -1;
	volatile int16_t x251 = 31;
	uint64_t t56 = 1394540705190030062LLU;

	t56 = (((x249+x250)|x251)&x252);

	if (t56 != 42598600LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x255 = 0U;
	volatile int8_t x256 = 7;
	static volatile uint64_t t57 = 106845149993927828LLU;

	t57 = (((x253+x254)|x255)&x256);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = UINT16_MAX;
	int32_t x258 = INT32_MIN;
	int16_t x259 = 2;
	static uint8_t x260 = UINT8_MAX;
	volatile int32_t t58 = -811;

	t58 = (((x257+x258)|x259)&x260);

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x262 = INT16_MIN;
	int8_t x263 = -1;
	uint64_t t59 = 49811073LLU;

	t59 = (((x261+x262)|x263)&x264);

	if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x265 = -1041LL;
	volatile uint32_t x267 = 61783823U;
	int16_t x268 = INT16_MIN;
	int64_t t60 = -1666587576LL;

	t60 = (((x265+x266)|x267)&x268);

	if (t60 != -5275648LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x271 = -10794977;
	volatile uint64_t x272 = UINT64_MAX;

	t61 = (((x269+x270)|x271)&x272);

	if (t61 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = -1;
	int8_t x274 = INT8_MAX;
	static int32_t x275 = INT32_MAX;
	static volatile uint32_t t62 = 0U;

	t62 = (((x273+x274)|x275)&x276);

	if (t62 != 2147483647U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x277 = UINT16_MAX;
	uint64_t x278 = 430903LLU;
	int64_t x279 = INT64_MAX;
	int8_t x280 = -20;
	volatile uint64_t t63 = 28013903LLU;

	t63 = (((x277+x278)|x279)&x280);

	if (t63 != 9223372036854775788LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x281 = 1629892652U;
	int32_t x282 = -1;
	int32_t x283 = -11088326;
	volatile uint32_t t64 = 76508U;

	t64 = (((x281+x282)|x283)&x284);

	if (t64 != 65083U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x287 = -2;
	volatile int64_t x288 = -1LL;
	int64_t t65 = -2907613296962711400LL;

	t65 = (((x285+x286)|x287)&x288);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = -1;
	uint64_t x290 = 13497096LLU;
	static int16_t x291 = -1;
	int16_t x292 = -231;
	volatile uint64_t t66 = 195975398LLU;

	t66 = (((x289+x290)|x291)&x292);

	if (t66 != 18446744073709551385LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int64_t x294 = -1LL;
	int16_t x295 = INT16_MIN;

	t67 = (((x293+x294)|x295)&x296);

	if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x301 = UINT16_MAX;
	static int16_t x302 = 0;
	uint32_t x303 = 705736U;
	static int64_t x304 = -1LL;
	int64_t t68 = -64920053358LL;

	t68 = (((x301+x302)|x303)&x304);

	if (t68 != 720895LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x305 = INT8_MIN;
	int16_t x306 = 1;
	volatile int16_t x307 = -3;
	uint8_t x308 = UINT8_MAX;
	int32_t t69 = 8718095;

	t69 = (((x305+x306)|x307)&x308);

	if (t69 != 253) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x310 = 25;
	static uint64_t x311 = UINT64_MAX;
	int16_t x312 = INT16_MIN;
	uint64_t t70 = 1LLU;

	t70 = (((x309+x310)|x311)&x312);

	if (t70 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x313 = 448U;
	static int8_t x314 = -1;

	t71 = (((x313+x314)|x315)&x316);

	if (t71 != 447LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x317 = UINT32_MAX;
	int32_t x318 = INT32_MIN;
	uint64_t x319 = 2154142980538044885LLU;
	int16_t x320 = -10;

	t72 = (((x317+x318)|x319)&x320);

	if (t72 != 2154142981907546102LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x321 = 9889U;
	static uint64_t x322 = 324517LLU;
	int8_t x323 = INT8_MAX;

	t73 = (((x321+x322)|x323)&x324);

	if (t73 != 6783LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x325 = UINT32_MAX;
	int32_t x326 = INT32_MIN;
	int16_t x327 = 0;
	uint32_t t74 = 6352U;

	t74 = (((x325+x326)|x327)&x328);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = -1LL;
	int16_t x330 = -190;
	volatile int32_t x331 = INT32_MAX;
	int16_t x332 = -525;
	int64_t t75 = 281067036898443584LL;

	t75 = (((x329+x330)|x331)&x332);

	if (t75 != -525LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x337 = INT64_MIN;
	int16_t x339 = INT16_MIN;
	static uint32_t x340 = 239890U;

	t76 = (((x337+x338)|x339)&x340);

	if (t76 != 231680LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = 24848958U;
	static int64_t x342 = -1LL;
	int8_t x344 = 7;
	static int64_t t77 = 2441051338LL;

	t77 = (((x341+x342)|x343)&x344);

	if (t77 != 5LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = -9148;
	uint32_t x346 = UINT32_MAX;
	int32_t x347 = INT32_MIN;
	int64_t t78 = 78980800LL;

	t78 = (((x345+x346)|x347)&x348);

	if (t78 != 4294958147LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int16_t x350 = -175;
	static uint16_t x351 = 30U;
	int32_t x352 = -190378971;

	t79 = (((x349+x350)|x351)&x352);

	if (t79 != 4104588292U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x355 = INT32_MIN;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t80 = INT32_MIN;

	t80 = (((x353+x354)|x355)&x356);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x357 = UINT32_MAX;
	int32_t x359 = INT32_MIN;
	uint16_t x360 = UINT16_MAX;
	uint32_t t81 = 3085U;

	t81 = (((x357+x358)|x359)&x360);

	if (t81 != 65407U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = INT8_MAX;
	volatile uint32_t x362 = 91257252U;
	static uint16_t x363 = 936U;
	volatile uint32_t t82 = 476174U;

	t82 = (((x361+x362)|x363)&x364);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x367 = INT16_MIN;
	int32_t x368 = 838082;
	volatile int32_t t83 = 338765;

	t83 = (((x365+x366)|x367)&x368);

	if (t83 != 838082) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = 58LL;
	static int64_t x370 = INT64_MIN;
	uint32_t x371 = 64U;
	int64_t x372 = 1616LL;
	volatile int64_t t84 = 649591133940785LL;

	t84 = (((x369+x370)|x371)&x372);

	if (t84 != 80LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x373 = INT8_MAX;
	int64_t x374 = 10242266954LL;
	int64_t x376 = 98150285630167LL;
	static int64_t t85 = 1381223886068788LL;

	t85 = (((x373+x374)|x375)&x376);

	if (t85 != 1617484485LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x377 = -1;
	int16_t x378 = INT16_MAX;
	int8_t x379 = INT8_MIN;
	int32_t x380 = -1;
	int32_t t86 = 81533153;

	t86 = (((x377+x378)|x379)&x380);

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x381 = 2U;
	static int32_t x382 = INT32_MIN;
	static int16_t x383 = -1;
	uint8_t x384 = 112U;
	static volatile int32_t t87 = -499016;

	t87 = (((x381+x382)|x383)&x384);

	if (t87 != 112) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x385 = INT16_MIN;
	static uint32_t x386 = UINT32_MAX;
	static int16_t x387 = -94;
	int16_t x388 = INT16_MIN;
	uint32_t t88 = 43U;

	t88 = (((x385+x386)|x387)&x388);

	if (t88 != 4294934528U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x389 = INT16_MIN;
	static int64_t x390 = -252727316388058LL;
	int16_t x391 = INT16_MAX;
	static int8_t x392 = -41;
	static int64_t t89 = 51708LL;

	t89 = (((x389+x390)|x391)&x392);

	if (t89 != -252727316414505LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x393 = -1;
	static uint8_t x394 = UINT8_MAX;
	static int32_t x395 = 6186;
	volatile int32_t t90 = 492149699;

	t90 = (((x393+x394)|x395)&x396);

	if (t90 != 6398) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x397 = INT32_MIN;
	static uint16_t x398 = UINT16_MAX;
	uint8_t x399 = UINT8_MAX;

	t91 = (((x397+x398)|x399)&x400);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x401 = 815U;
	volatile int64_t x403 = 142532880125965835LL;
	int64_t x404 = -1LL;
	volatile int64_t t92 = -30095332148792880LL;

	t92 = (((x401+x402)|x403)&x404);

	if (t92 != -5LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x405 = UINT64_MAX;
	uint32_t x406 = 9U;
	volatile int64_t x408 = INT64_MIN;
	volatile uint64_t t93 = 46699762090LLU;

	t93 = (((x405+x406)|x407)&x408);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = -36;
	volatile int16_t x410 = -1;
	static uint16_t x411 = UINT16_MAX;
	uint32_t x412 = UINT32_MAX;
	uint32_t t94 = UINT32_MAX;

	t94 = (((x409+x410)|x411)&x412);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x413 = 2643U;
	int64_t x414 = 705898302302597LL;
	volatile uint8_t x415 = 27U;
	int32_t x416 = INT32_MAX;
	volatile int64_t t95 = 1458LL;

	t95 = (((x413+x414)|x415)&x416);

	if (t95 != 1099854811LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = INT8_MAX;
	volatile uint16_t x422 = 1U;
	int64_t t96 = INT64_MIN;

	t96 = (((x421+x422)|x423)&x424);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x438 = 56U;
	int32_t x439 = INT32_MIN;
	int64_t x440 = -31607LL;
	volatile int64_t t97 = -9281528500LL;

	t97 = (((x437+x438)|x439)&x440);

	if (t97 != -2147483639LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = -1;
	int8_t x442 = INT8_MIN;
	volatile int64_t x444 = -1LL;
	volatile int64_t t98 = 1LL;

	t98 = (((x441+x442)|x443)&x444);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x445 = -1;
	uint8_t x446 = UINT8_MAX;
	uint64_t x447 = 880892027571163468LLU;
	int16_t x448 = 3131;
	volatile uint64_t t99 = 788702939080646768LLU;

	t99 = (((x445+x446)|x447)&x448);

	if (t99 != 58LLU) { NG(); } else { ; }
	
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

