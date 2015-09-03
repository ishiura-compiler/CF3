#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t1 = 42U;
uint64_t x13 = 25018562717679LLU;
uint64_t t3 = 303LLU;
int64_t x18 = -95276397LL;
int16_t x20 = INT16_MIN;
uint64_t t4 = 55111477LLU;
volatile uint16_t x31 = 2819U;
static int64_t x35 = 2009189240LL;
int16_t x38 = -1;
uint64_t t9 = 5709521482442LLU;
uint8_t x45 = 0U;
int8_t x61 = INT8_MAX;
int64_t x71 = INT64_MIN;
volatile int64_t t14 = 1566878LL;
int32_t x84 = -1;
int32_t x91 = 8070;
volatile int16_t x99 = -1;
volatile int32_t t20 = 0;
uint32_t x105 = UINT32_MAX;
int64_t x109 = -1LL;
int64_t x112 = -1LL;
uint64_t t24 = 770743418246LLU;
int32_t x132 = -71;
int16_t x139 = INT16_MIN;
int32_t x143 = INT32_MIN;
int16_t x144 = -1;
static uint64_t t28 = 226865522LLU;
uint64_t t29 = 21583824334746561LLU;
int8_t x151 = -1;
static volatile int32_t x152 = 732;
int32_t x159 = INT32_MAX;
volatile uint64_t t34 = 257LLU;
int64_t x177 = INT64_MIN;
static int64_t x180 = -1LL;
int64_t x182 = 3111LL;
static uint16_t x184 = 27025U;
static int16_t x192 = -2;
int16_t x194 = 477;
int64_t x201 = -55241308468452LL;
volatile int64_t t41 = -10612LL;
volatile uint32_t x208 = 51U;
int64_t x209 = INT64_MIN;
int8_t x211 = INT8_MIN;
volatile uint16_t x212 = UINT16_MAX;
int32_t t45 = -316228;
int16_t x229 = INT16_MAX;
uint8_t x232 = 108U;
int32_t t51 = -16092171;
volatile int64_t x255 = INT64_MAX;
int8_t x261 = 0;
volatile uint16_t x263 = 259U;
static uint32_t x267 = 10577947U;
int32_t x269 = -1;
int32_t x270 = INT32_MAX;
static int16_t x272 = INT16_MIN;
uint64_t x289 = 48434050711LLU;
static int16_t x292 = -31;
uint64_t x293 = 524332759954848LLU;
static int64_t x296 = INT64_MIN;
int16_t x297 = -11;
uint16_t x303 = 7243U;
int16_t x305 = 1;
int32_t t64 = 2723;
volatile int16_t x311 = -124;
int8_t x313 = -1;
int32_t t66 = 1;
volatile int32_t x324 = INT32_MAX;
int8_t x325 = -1;
volatile int64_t x329 = 5469LL;
static int8_t x330 = -1;
volatile int32_t x331 = -1;
int8_t x333 = -4;
static int64_t x338 = INT64_MIN;
int64_t x342 = -1LL;
uint64_t t72 = 281320541466533LLU;
static volatile int32_t t73 = -449;
int32_t x351 = -60655;
volatile int64_t x359 = -1LL;
int64_t x361 = INT64_MAX;
int16_t x362 = 1;
volatile int64_t x363 = -1616327312855LL;
int8_t x364 = INT8_MIN;
int64_t x370 = 8661778723317LL;
uint64_t x372 = 506281651411LLU;
int64_t x377 = INT64_MIN;
int64_t x380 = 1082733664629826334LL;
int16_t x413 = INT16_MIN;
int32_t x419 = -1;
uint32_t x431 = 25792997U;
int8_t x434 = 1;
uint16_t x445 = 62U;
uint32_t x446 = 31347716U;
volatile int64_t x447 = 49LL;
int64_t t93 = -37LL;
uint16_t x453 = UINT16_MAX;
int16_t x461 = INT16_MIN;
static uint64_t t98 = 2365139758235739LLU;
volatile int8_t x469 = -3;
int32_t x470 = 103843;
int8_t x471 = 1;
static volatile int64_t x472 = -27LL;
volatile int64_t t99 = 7LL;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	static uint32_t x2 = 2U;
	volatile int16_t x3 = INT16_MAX;
	static int32_t x4 = -35543649;
	uint64_t t0 = UINT64_MAX;

	t0 = (x1+((x2/x3)*x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int16_t x6 = INT16_MIN;
	static uint8_t x7 = UINT8_MAX;
	uint32_t x8 = 30U;

	t1 = (x5+((x6/x7)*x8));

	if (t1 != 4294963583U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 27592239;
	volatile int8_t x10 = INT8_MAX;
	static volatile int8_t x11 = -1;
	volatile int16_t x12 = INT16_MAX;
	static volatile int32_t t2 = 3476918;

	t2 = (x9+((x10/x11)*x12));

	if (t2 != 23430830) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = UINT8_MAX;
	int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MIN;

	t3 = (x13+((x14/x15)*x16));

	if (t3 != 25018562717679LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	uint64_t x19 = 59496LLU;

	t4 = (x17+((x18/x19)*x20));

	if (t4 != 8287020566176399359LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	static int32_t x22 = INT32_MIN;
	int16_t x23 = 2654;
	int8_t x24 = -1;
	int32_t t5 = -197915;

	t5 = (x21+((x22/x23)*x24));

	if (t5 != 809148) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MIN;
	int64_t x30 = -1LL;
	static uint32_t x32 = UINT32_MAX;
	int64_t t6 = 22023551LL;

	t6 = (x29+((x30/x31)*x32));

	if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 46U;
	int64_t x34 = INT64_MIN;
	int16_t x36 = 40;
	volatile int64_t t7 = -4420LL;

	t7 = (x33+((x34/x35)*x36));

	if (t7 != -183623759274LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	uint32_t x39 = UINT32_MAX;
	volatile int8_t x40 = -23;
	static int64_t t8 = 7841559858LL;

	t8 = (x37+((x38/x39)*x40));

	if (t8 != -9223372032559808535LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	int8_t x42 = 45;
	int32_t x43 = -1;
	uint64_t x44 = 5003611154544114LLU;

	t9 = (x41+((x42/x43)*x44));

	if (t9 != 18221581571755066485LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x46 = INT64_MIN;
	int8_t x47 = 20;
	uint8_t x48 = 12U;
	volatile int64_t t10 = 247913540LL;

	t10 = (x45+((x46/x47)*x48));

	if (t10 != -5534023222112865480LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x49 = 3U;
	int8_t x50 = INT8_MAX;
	int16_t x51 = -602;
	int64_t x52 = -3566345051107130LL;
	int64_t t11 = -1596246399082482LL;

	t11 = (x49+((x50/x51)*x52));

	if (t11 != 3LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = INT32_MIN;
	volatile int32_t x54 = -84660;
	volatile uint32_t x55 = 5339687U;
	int64_t x56 = 701587633LL;
	int64_t t12 = 939591838373181059LL;

	t12 = (x53+((x54/x55)*x56));

	if (t12 != 561928973284LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = INT8_MAX;
	int32_t x63 = 1;
	static volatile int16_t x64 = -1;
	static volatile int32_t t13 = -463;

	t13 = (x61+((x62/x63)*x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 1665U;
	uint16_t x70 = 3U;
	int64_t x72 = 103462148LL;

	t14 = (x69+((x70/x71)*x72));

	if (t14 != 1665LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 3966U;
	int32_t x78 = -1;
	int32_t x79 = INT32_MIN;
	int64_t x80 = -116160562LL;
	int64_t t15 = -35779844LL;

	t15 = (x77+((x78/x79)*x80));

	if (t15 != 3966LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = -1;
	uint32_t x83 = 1U;
	volatile uint32_t t16 = 110348424U;

	t16 = (x81+((x82/x83)*x84));

	if (t16 != 4294967169U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x85 = INT64_MIN;
	static volatile int32_t x86 = -1;
	uint16_t x87 = 225U;
	volatile uint8_t x88 = UINT8_MAX;
	int64_t t17 = INT64_MIN;

	t17 = (x85+((x86/x87)*x88));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x89 = -1;
	int8_t x90 = -1;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (x89+((x90/x91)*x92));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x93 = 3719347248LLU;
	uint8_t x94 = UINT8_MAX;
	uint32_t x95 = 1008U;
	int32_t x96 = INT32_MAX;
	uint64_t t19 = 128525526308178177LLU;

	t19 = (x93+((x94/x95)*x96));

	if (t19 != 3719347248LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 1U;
	static volatile int16_t x98 = INT16_MAX;
	uint8_t x100 = UINT8_MAX;

	t20 = (x97+((x98/x99)*x100));

	if (t20 != -8355584) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x106 = UINT32_MAX;
	int64_t x107 = INT64_MIN;
	int64_t x108 = -1LL;
	volatile int64_t t21 = -5052933LL;

	t21 = (x105+((x106/x107)*x108));

	if (t21 != 4294967295LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x110 = -1;
	static int32_t x111 = INT32_MIN;
	int64_t t22 = 3LL;

	t22 = (x109+((x110/x111)*x112));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x117 = INT64_MIN;
	static volatile int16_t x118 = -1;
	static int8_t x119 = 13;
	static int16_t x120 = INT16_MAX;
	int64_t t23 = INT64_MIN;

	t23 = (x117+((x118/x119)*x120));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = 18;
	int64_t x126 = -33772779481258880LL;
	static uint64_t x127 = 2963083999LLU;
	uint32_t x128 = 1U;

	t24 = (x125+((x126/x127)*x128));

	if (t24 != 6214123984LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x129 = UINT64_MAX;
	int32_t x130 = -1;
	uint32_t x131 = UINT32_MAX;
	uint64_t t25 = 6135135751792LLU;

	t25 = (x129+((x130/x131)*x132));

	if (t25 != 4294967224LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x133 = INT32_MIN;
	uint32_t x134 = 62U;
	volatile int8_t x135 = -1;
	volatile int32_t x136 = -7485033;
	uint32_t t26 = 2411U;

	t26 = (x133+((x134/x135)*x136));

	if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = 0;
	int8_t x138 = -11;
	uint16_t x140 = 2U;
	volatile int32_t t27 = 432932613;

	t27 = (x137+((x138/x139)*x140));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x141 = 4719635986582LLU;
	static volatile int8_t x142 = INT8_MAX;

	t28 = (x141+((x142/x143)*x144));

	if (t28 != 4719635986582LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x145 = 289604U;
	int32_t x146 = 885345512;
	uint64_t x147 = 7061552786432LLU;
	uint32_t x148 = UINT32_MAX;

	t29 = (x145+((x146/x147)*x148));

	if (t29 != 289604LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = UINT64_MAX;
	int32_t x150 = 53;
	static volatile uint64_t t30 = 5003891977706783LLU;

	t30 = (x149+((x150/x151)*x152));

	if (t30 != 18446744073709512819LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = INT32_MIN;
	uint32_t x154 = UINT32_MAX;
	volatile int64_t x155 = -335581LL;
	volatile uint8_t x156 = 0U;
	int64_t t31 = -16180338932LL;

	t31 = (x153+((x154/x155)*x156));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x157 = 1U;
	int8_t x158 = -3;
	int8_t x160 = 61;
	static int32_t t32 = -15;

	t32 = (x157+((x158/x159)*x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = -4LL;
	uint64_t x162 = 633368301791LLU;
	int8_t x163 = -1;
	int64_t x164 = INT64_MAX;
	volatile uint64_t t33 = 449672000087274LLU;

	t33 = (x161+((x162/x163)*x164));

	if (t33 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x173 = UINT16_MAX;
	uint16_t x174 = 283U;
	uint64_t x175 = 6LLU;
	int16_t x176 = INT16_MIN;

	t34 = (x173+((x174/x175)*x176));

	if (t34 != 18446744073708077055LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x178 = UINT64_MAX;
	static int64_t x179 = -1LL;
	volatile uint64_t t35 = 203985572408LLU;

	t35 = (x177+((x178/x179)*x180));

	if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x181 = INT64_MIN;
	static int64_t x183 = INT64_MIN;
	volatile int64_t t36 = INT64_MIN;

	t36 = (x181+((x182/x183)*x184));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x185 = 447799510LLU;
	volatile uint16_t x186 = 608U;
	static uint32_t x187 = 3686U;
	int64_t x188 = INT64_MIN;
	static uint64_t t37 = 2043668201LLU;

	t37 = (x185+((x186/x187)*x188));

	if (t37 != 447799510LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x189 = 55291724U;
	int32_t x190 = INT32_MIN;
	uint16_t x191 = UINT16_MAX;
	static uint32_t t38 = 19U;

	t38 = (x189+((x190/x191)*x192));

	if (t38 != 55357260U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x193 = 2U;
	uint64_t x195 = 327991280LLU;
	int64_t x196 = -115620512LL;
	static uint64_t t39 = 1175760227332279LLU;

	t39 = (x193+((x194/x195)*x196));

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = -60;
	volatile uint32_t x199 = 275782929U;
	int32_t x200 = INT32_MAX;
	volatile uint32_t t40 = 4864U;

	t40 = (x197+((x198/x199)*x200));

	if (t40 != 2147450865U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x202 = 1179U;
	static int64_t x203 = -1LL;
	volatile int8_t x204 = INT8_MIN;

	t41 = (x201+((x202/x203)*x204));

	if (t41 != -55241308317540LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x205 = INT64_MIN;
	int8_t x206 = -40;
	uint8_t x207 = UINT8_MAX;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x205+((x206/x207)*x208));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x210 = INT8_MIN;
	int64_t t43 = 671064LL;

	t43 = (x209+((x210/x211)*x212));

	if (t43 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x213 = 60344942314LLU;
	uint8_t x214 = 1U;
	volatile uint64_t x215 = 121479182131757995LLU;
	int32_t x216 = -1;
	volatile uint64_t t44 = 3LLU;

	t44 = (x213+((x214/x215)*x216));

	if (t44 != 60344942314LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = INT16_MAX;
	uint8_t x222 = UINT8_MAX;
	volatile int8_t x223 = INT8_MIN;
	volatile int8_t x224 = INT8_MIN;

	t45 = (x221+((x222/x223)*x224));

	if (t45 != 32895) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x225 = INT16_MIN;
	volatile uint32_t x226 = 713U;
	int64_t x227 = INT64_MIN;
	static uint64_t x228 = 450208LLU;
	static uint64_t t46 = 1771540047LLU;

	t46 = (x225+((x226/x227)*x228));

	if (t46 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x230 = INT16_MIN;
	uint16_t x231 = 1U;
	volatile int32_t t47 = 43;

	t47 = (x229+((x230/x231)*x232));

	if (t47 != -3506177) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x233 = INT8_MAX;
	int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	int32_t x236 = 3;
	volatile int32_t t48 = -2184759;

	t48 = (x233+((x234/x235)*x236));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x241 = UINT32_MAX;
	static int16_t x242 = -1;
	uint8_t x243 = UINT8_MAX;
	uint32_t x244 = UINT32_MAX;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (x241+((x242/x243)*x244));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = INT8_MIN;
	static volatile int64_t x246 = -1LL;
	static int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;
	volatile int64_t t50 = -43370096528077LL;

	t50 = (x245+((x246/x247)*x248));

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MAX;
	static int16_t x250 = 0;
	volatile int32_t x251 = -91402161;
	int16_t x252 = INT16_MIN;

	t51 = (x249+((x250/x251)*x252));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x253 = UINT8_MAX;
	int16_t x254 = INT16_MIN;
	uint64_t x256 = 7597525323305939LLU;
	static uint64_t t52 = 150959552807LLU;

	t52 = (x253+((x254/x255)*x256));

	if (t52 != 255LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = -1;
	static int16_t x258 = INT16_MIN;
	uint16_t x259 = UINT16_MAX;
	int8_t x260 = 6;
	volatile int32_t t53 = 1331352;

	t53 = (x257+((x258/x259)*x260));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x262 = 79LLU;
	uint64_t x264 = 2359408750LLU;
	uint64_t t54 = 46810846784299LLU;

	t54 = (x261+((x262/x263)*x264));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x265 = 4997094U;
	int16_t x266 = 3031;
	int32_t x268 = INT32_MIN;
	volatile uint32_t t55 = 0U;

	t55 = (x265+((x266/x267)*x268));

	if (t55 != 4997094U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x271 = 67484006LLU;
	static volatile uint64_t t56 = 1812876198LLU;

	t56 = (x269+((x270/x271)*x272));

	if (t56 != 18446744073708535807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x277 = -1649;
	int8_t x278 = INT8_MIN;
	static int32_t x279 = INT32_MIN;
	int8_t x280 = INT8_MAX;
	static int32_t t57 = 94169;

	t57 = (x277+((x278/x279)*x280));

	if (t57 != -1649) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x281 = UINT64_MAX;
	volatile uint32_t x282 = 231813U;
	volatile uint16_t x283 = UINT16_MAX;
	static uint32_t x284 = 3244U;
	uint64_t t58 = 272713537LLU;

	t58 = (x281+((x282/x283)*x284));

	if (t58 != 9731LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x285 = UINT32_MAX;
	volatile uint8_t x286 = 4U;
	static volatile uint16_t x287 = 123U;
	int16_t x288 = -1;
	static volatile uint32_t t59 = UINT32_MAX;

	t59 = (x285+((x286/x287)*x288));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x290 = 374748277122132766LL;
	uint16_t x291 = 858U;
	uint64_t t60 = 3342322LLU;

	t60 = (x289+((x290/x291)*x292));

	if (t60 != 18433204265977184958LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x294 = 3146230854LLU;
	int32_t x295 = INT32_MIN;
	volatile uint64_t t61 = 4332LLU;

	t61 = (x293+((x294/x295)*x296));

	if (t61 != 524332759954848LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x298 = INT16_MAX;
	int16_t x299 = 420;
	uint32_t x300 = 1570U;
	volatile uint32_t t62 = 1187339014U;

	t62 = (x297+((x298/x299)*x300));

	if (t62 != 122449U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x301 = INT16_MIN;
	static volatile uint16_t x302 = 7U;
	int64_t x304 = INT64_MIN;
	int64_t t63 = -186296680778LL;

	t63 = (x301+((x302/x303)*x304));

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x306 = 7;
	int8_t x307 = INT8_MIN;
	volatile uint8_t x308 = UINT8_MAX;

	t64 = (x305+((x306/x307)*x308));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x309 = -1;
	static int16_t x310 = INT16_MIN;
	volatile uint64_t x312 = 99LLU;
	static volatile uint64_t t65 = 810LLU;

	t65 = (x309+((x310/x311)*x312));

	if (t65 != 26135LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x314 = -1;
	uint8_t x315 = 32U;
	int32_t x316 = -120797;

	t66 = (x313+((x314/x315)*x316));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x321 = INT64_MIN;
	int32_t x322 = -23845;
	volatile uint64_t x323 = 3673357545744425LLU;
	volatile uint64_t t67 = 1LLU;

	t67 = (x321+((x322/x323)*x324));

	if (t67 != 9223382819370167395LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x326 = -1;
	volatile uint32_t x327 = UINT32_MAX;
	int8_t x328 = INT8_MAX;
	static uint32_t t68 = 2U;

	t68 = (x325+((x326/x327)*x328));

	if (t68 != 126U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x332 = INT32_MAX;
	static volatile int64_t t69 = 6937511100871997LL;

	t69 = (x329+((x330/x331)*x332));

	if (t69 != 2147489116LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x334 = 551911501168LLU;
	uint16_t x335 = 1288U;
	int32_t x336 = INT32_MAX;
	volatile uint64_t t70 = 1440LLU;

	t70 = (x333+((x334/x335)*x336));

	if (t70 != 920202579600052542LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = INT32_MAX;
	uint16_t x339 = 3U;
	static volatile int8_t x340 = -2;
	volatile int64_t t71 = 1784394935198564355LL;

	t71 = (x337+((x338/x339)*x340));

	if (t71 != 6148914693384000851LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x341 = INT32_MIN;
	static volatile uint32_t x343 = UINT32_MAX;
	uint64_t x344 = 4915225274398LLU;

	t72 = (x341+((x342/x343)*x344));

	if (t72 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MIN;
	int8_t x347 = 24;
	static volatile int32_t x348 = 1;

	t73 = (x345+((x346/x347)*x348));

	if (t73 != -1493) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x349 = INT32_MAX;
	int64_t x350 = 592412518982136LL;
	static volatile int8_t x352 = -8;
	int64_t t74 = -2832LL;

	t74 = (x349+((x350/x351)*x352));

	if (t74 != 80282841847LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x353 = INT8_MAX;
	uint8_t x354 = UINT8_MAX;
	int32_t x355 = 212;
	uint64_t x356 = UINT64_MAX;
	uint64_t t75 = 36046076777090LLU;

	t75 = (x353+((x354/x355)*x356));

	if (t75 != 126LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x357 = 0LLU;
	uint16_t x358 = 6U;
	uint32_t x360 = UINT32_MAX;
	uint64_t t76 = 409318614108LLU;

	t76 = (x357+((x358/x359)*x360));

	if (t76 != 18446744047939747846LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t t77 = INT64_MAX;

	t77 = (x361+((x362/x363)*x364));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MAX;
	static int32_t x367 = 2879207;
	uint8_t x368 = UINT8_MAX;
	static volatile int32_t t78 = 0;

	t78 = (x365+((x366/x367)*x368));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x371 = INT8_MIN;
	volatile uint64_t t79 = 15482609LLU;

	t79 = (x369+((x370/x371)*x372));

	if (t79 != 13897081625711725798LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x373 = INT32_MIN;
	int32_t x374 = 141441819;
	static int32_t x375 = INT32_MIN;
	static uint32_t x376 = 7U;
	uint32_t t80 = 4275U;

	t80 = (x373+((x374/x375)*x376));

	if (t80 != 2147483648U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x378 = 1394808U;
	int64_t x379 = INT64_MIN;
	int64_t t81 = INT64_MIN;

	t81 = (x377+((x378/x379)*x380));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x385 = 56790869U;
	int8_t x386 = -1;
	int32_t x387 = -111;
	int32_t x388 = 42895365;
	uint32_t t82 = 2611021U;

	t82 = (x385+((x386/x387)*x388));

	if (t82 != 56790869U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x389 = 1046858278LL;
	uint8_t x390 = 15U;
	static int16_t x391 = INT16_MIN;
	static int8_t x392 = 13;
	volatile int64_t t83 = -1985221363020691562LL;

	t83 = (x389+((x390/x391)*x392));

	if (t83 != 1046858278LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x393 = 323U;
	int16_t x394 = INT16_MAX;
	uint16_t x395 = UINT16_MAX;
	uint16_t x396 = 17U;
	int32_t t84 = -24481078;

	t84 = (x393+((x394/x395)*x396));

	if (t84 != 323) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = INT16_MAX;
	volatile int16_t x398 = INT16_MIN;
	int64_t x399 = -1066LL;
	int8_t x400 = INT8_MIN;
	volatile int64_t t85 = -15060248496437LL;

	t85 = (x397+((x398/x399)*x400));

	if (t85 != 28927LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x409 = INT64_MIN;
	int16_t x410 = 13;
	static int64_t x411 = INT64_MIN;
	uint64_t x412 = 288726LLU;
	volatile uint64_t t86 = 39309828863131LLU;

	t86 = (x409+((x410/x411)*x412));

	if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x414 = INT32_MIN;
	uint32_t x415 = 775U;
	static int64_t x416 = -252266142859LL;
	volatile int64_t t87 = 34712976LL;

	t87 = (x413+((x414/x415)*x416));

	if (t87 != -699015859490607382LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x417 = INT32_MIN;
	static uint16_t x418 = UINT16_MAX;
	static int8_t x420 = 0;
	volatile int32_t t88 = INT32_MIN;

	t88 = (x417+((x418/x419)*x420));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x421 = 122;
	uint64_t x422 = 1390439711571235715LLU;
	int8_t x423 = INT8_MIN;
	int64_t x424 = INT64_MIN;
	volatile uint64_t t89 = 16718395326855LLU;

	t89 = (x421+((x422/x423)*x424));

	if (t89 != 122LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = -1;
	volatile int32_t x430 = INT32_MIN;
	static int16_t x432 = INT16_MIN;
	static volatile uint32_t t90 = 885131759U;

	t90 = (x429+((x430/x431)*x432));

	if (t90 != 4292247551U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x433 = UINT32_MAX;
	uint64_t x435 = 300240630LLU;
	uint8_t x436 = 93U;
	uint64_t t91 = 1LLU;

	t91 = (x433+((x434/x435)*x436));

	if (t91 != 4294967295LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x437 = 2743953;
	volatile int8_t x438 = INT8_MIN;
	uint16_t x439 = UINT16_MAX;
	volatile int16_t x440 = -3401;
	int32_t t92 = 129117;

	t92 = (x437+((x438/x439)*x440));

	if (t92 != 2743953) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x448 = INT16_MIN;

	t93 = (x445+((x446/x447)*x448));

	if (t93 != -20963295170LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x449 = 3;
	uint32_t x450 = 108145U;
	static int64_t x451 = -1LL;
	static volatile int32_t x452 = -13845;
	static volatile int64_t t94 = 2176027LL;

	t94 = (x449+((x450/x451)*x452));

	if (t94 != 1497267528LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x454 = 7074858716540727929LLU;
	int16_t x455 = INT16_MAX;
	static int64_t x456 = -1LL;
	static volatile uint64_t t95 = 2078677398LLU;

	t95 = (x453+((x454/x455)*x456));

	if (t95 != 18446528159566835062LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x457 = INT16_MIN;
	volatile int32_t x458 = 7;
	static int16_t x459 = 124;
	static volatile int16_t x460 = -94;
	static int32_t t96 = 41;

	t96 = (x457+((x458/x459)*x460));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x462 = 8U;
	volatile uint32_t x463 = 1839U;
	int64_t x464 = -50909429963547648LL;
	volatile int64_t t97 = -65LL;

	t97 = (x461+((x462/x463)*x464));

	if (t97 != -32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x465 = 37;
	uint64_t x466 = 3582848753979660211LLU;
	int64_t x467 = INT64_MIN;
	static volatile int8_t x468 = INT8_MIN;

	t98 = (x465+((x466/x467)*x468));

	if (t98 != 37LLU) { NG(); } else { ; }
	
}

void f99(void) {


	t99 = (x469+((x470/x471)*x472));

	if (t99 != -2803764LL) { NG(); } else { ; }
	
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

