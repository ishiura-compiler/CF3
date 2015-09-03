#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
volatile int16_t x7 = -13887;
int8_t x9 = 2;
int32_t x15 = INT32_MIN;
int16_t x26 = INT16_MIN;
uint8_t x29 = UINT8_MAX;
volatile uint16_t x31 = UINT16_MAX;
static volatile int32_t x41 = INT32_MIN;
uint16_t x42 = 0U;
int32_t t10 = INT32_MIN;
static uint8_t x48 = 1U;
static int8_t x59 = -1;
uint32_t x65 = 487U;
int8_t x67 = 15;
volatile int16_t x71 = INT16_MAX;
volatile uint16_t x73 = UINT16_MAX;
static uint64_t x78 = UINT64_MAX;
volatile uint32_t x79 = 532152467U;
volatile int8_t x82 = 7;
uint8_t x93 = 116U;
static int16_t x99 = INT16_MAX;
int32_t t24 = 26464;
uint16_t x103 = UINT16_MAX;
static volatile uint16_t x105 = 27716U;
static int32_t t28 = -115812188;
int64_t x119 = 1688LL;
static volatile uint64_t t29 = 14LLU;
int32_t x123 = INT32_MAX;
int32_t x125 = 220416;
volatile int32_t t31 = 2061397;
static int64_t x133 = INT64_MIN;
int8_t x139 = INT8_MAX;
int32_t x140 = INT32_MAX;
uint32_t t35 = 21466776U;
int64_t x150 = INT64_MIN;
uint64_t t39 = 819130334680156LLU;
volatile int16_t x163 = -1;
static volatile uint8_t x166 = 1U;
volatile int32_t t41 = -1;
uint32_t x176 = 567409611U;
volatile int64_t t43 = -17913234LL;
volatile int64_t x179 = INT64_MIN;
uint32_t x185 = 112U;
int16_t x186 = -1;
volatile uint32_t x199 = UINT32_MAX;
int32_t x200 = 91052;
volatile int64_t x202 = -1LL;
static volatile int32_t x205 = -7295181;
int8_t x215 = INT8_MIN;
int64_t x221 = INT64_MIN;
static int16_t x223 = -890;
int8_t x235 = INT8_MAX;
volatile int16_t x245 = INT16_MAX;
int64_t x246 = 86801LL;
volatile int16_t x247 = -2;
int8_t x249 = INT8_MIN;
int32_t x253 = INT32_MIN;
static volatile uint64_t x264 = 13511733339LLU;
int64_t x267 = INT64_MIN;
int16_t x270 = -1;
static int8_t x271 = INT8_MAX;
int32_t t69 = -3191276;
int32_t t72 = 3748;
uint64_t x298 = UINT64_MAX;
static volatile int32_t t75 = -3;
static volatile int8_t x308 = -1;
uint8_t x310 = 2U;
int64_t x325 = -430579616262602985LL;
int16_t x326 = -31;
volatile int64_t t81 = 5361460583LL;
uint16_t x335 = UINT16_MAX;
int64_t x339 = -1666872LL;
uint16_t x340 = 4681U;
static int64_t x341 = -1LL;
static int8_t x342 = INT8_MIN;
volatile int8_t x360 = -1;
uint64_t x363 = UINT64_MAX;
static int16_t x366 = INT16_MIN;
volatile int64_t t90 = -1385696872LL;
volatile uint32_t x369 = 39300U;
uint32_t t91 = 17U;
int8_t x373 = INT8_MIN;
int16_t x376 = INT16_MAX;
static int32_t x382 = INT32_MAX;
uint32_t x383 = 40928284U;
uint32_t x387 = UINT32_MAX;
volatile int8_t x395 = -1;
static volatile int32_t t97 = 77;
volatile int32_t t98 = -60;
volatile int64_t t99 = INT64_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = 7401692U;
	static int64_t t0 = INT64_MAX;

	t0 = (x1*((x2/x3)<=x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	static int32_t x8 = INT32_MIN;
	int64_t t1 = -371408250826444LL;

	t1 = (x5*((x6/x7)<=x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x10 = 155U;
	int32_t x11 = INT32_MAX;
	uint8_t x12 = 97U;
	volatile int32_t t2 = -10232905;

	t2 = (x9*((x10/x11)<=x12));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile int32_t x14 = 0;
	int8_t x16 = -26;
	int32_t t3 = 26;

	t3 = (x13*((x14/x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = 0;
	volatile int64_t x18 = INT64_MIN;
	int64_t x19 = 52790520LL;
	int8_t x20 = 15;
	static int32_t t4 = 19230081;

	t4 = (x17*((x18/x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	uint64_t x22 = 0LLU;
	int32_t x23 = INT32_MIN;
	uint64_t x24 = UINT64_MAX;
	int32_t t5 = 26473;

	t5 = (x21*((x22/x23)<=x24));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 7253U;
	volatile int64_t x27 = 118384858853612LL;
	static int8_t x28 = -1;
	volatile int32_t t6 = -16;

	t6 = (x25*((x26/x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = 25;
	uint8_t x32 = 2U;
	volatile int32_t t7 = 571569;

	t7 = (x29*((x30/x31)<=x32));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint64_t x34 = 389147LLU;
	int16_t x35 = 21;
	int64_t x36 = INT64_MAX;
	int32_t t8 = INT32_MAX;

	t8 = (x33*((x34/x35)<=x36));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	static int16_t x38 = 1;
	volatile int8_t x39 = INT8_MIN;
	static int32_t x40 = INT32_MIN;
	int32_t t9 = 1020073;

	t9 = (x37*((x38/x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x43 = 6372U;
	int32_t x44 = INT32_MAX;

	t10 = (x41*((x42/x43)<=x44));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static uint16_t x46 = 236U;
	int16_t x47 = INT16_MIN;
	static int32_t t11 = 81788118;

	t11 = (x45*((x46/x47)<=x48));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 114U;
	int8_t x50 = INT8_MAX;
	int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MAX;
	static volatile int32_t t12 = -58;

	t12 = (x49*((x50/x51)<=x52));

	if (t12 != 114) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = UINT32_MAX;
	static uint16_t x54 = 47U;
	int64_t x55 = 132073LL;
	static int8_t x56 = INT8_MAX;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x53*((x54/x55)<=x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	int16_t x58 = INT16_MIN;
	volatile int32_t x60 = 0;
	static volatile uint64_t t14 = 995096LLU;

	t14 = (x57*((x58/x59)<=x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile uint64_t x62 = 10841536097LLU;
	uint8_t x63 = 1U;
	int8_t x64 = INT8_MIN;
	static volatile int32_t t15 = 1;

	t15 = (x61*((x62/x63)<=x64));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = -56;
	volatile uint64_t x68 = UINT64_MAX;
	uint32_t t16 = 3876U;

	t16 = (x65*((x66/x67)<=x68));

	if (t16 != 487U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 115U;
	int8_t x70 = INT8_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t17 = 154326;

	t17 = (x69*((x70/x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 4U;
	static int16_t x75 = INT16_MIN;
	int32_t x76 = 102156;
	int32_t t18 = -445587326;

	t18 = (x73*((x74/x75)<=x76));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 754586;
	int32_t x80 = -91241010;
	volatile int32_t t19 = 22;

	t19 = (x77*((x78/x79)<=x80));

	if (t19 != 754586) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	static int64_t x83 = -1LL;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t20 = 198;

	t20 = (x81*((x82/x83)<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MAX;
	int32_t x86 = -995571;
	int8_t x87 = INT8_MIN;
	volatile uint64_t x88 = 1LLU;
	volatile int32_t t21 = 156;

	t21 = (x85*((x86/x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int64_t x90 = 335LL;
	static int64_t x91 = 79576646015912LL;
	volatile int32_t x92 = INT32_MIN;
	int32_t t22 = -3651;

	t22 = (x89*((x90/x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x94 = UINT32_MAX;
	int64_t x95 = INT64_MAX;
	int16_t x96 = INT16_MAX;
	volatile int32_t t23 = 1296;

	t23 = (x93*((x94/x95)<=x96));

	if (t23 != 116) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	volatile uint8_t x100 = UINT8_MAX;

	t24 = (x97*((x98/x99)<=x100));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MIN;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = 19;

	t25 = (x101*((x102/x103)<=x104));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = -888775506225087702LL;
	static volatile uint32_t x107 = UINT32_MAX;
	volatile int64_t x108 = INT64_MAX;
	int32_t t26 = -38318;

	t26 = (x105*((x106/x107)<=x108));

	if (t26 != 27716) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MAX;
	int64_t x111 = -1LL;
	uint64_t x112 = UINT64_MAX;
	int32_t t27 = INT32_MIN;

	t27 = (x109*((x110/x111)<=x112));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	static volatile uint32_t x114 = 145U;
	uint16_t x115 = 3U;
	volatile uint64_t x116 = 45437698LLU;

	t28 = (x113*((x114/x115)<=x116));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x117 = 3451LLU;
	int32_t x118 = INT32_MAX;
	int32_t x120 = 615538260;

	t29 = (x117*((x118/x119)<=x120));

	if (t29 != 3451LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MIN;
	static volatile int32_t x124 = INT32_MIN;
	static int32_t t30 = -30286;

	t30 = (x121*((x122/x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 14U;
	static int16_t x127 = INT16_MIN;
	uint32_t x128 = 192U;

	t31 = (x125*((x126/x127)<=x128));

	if (t31 != 220416) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 5U;
	int8_t x130 = INT8_MIN;
	int8_t x131 = INT8_MIN;
	int16_t x132 = INT16_MIN;
	static volatile uint32_t t32 = 2U;

	t32 = (x129*((x130/x131)<=x132));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x134 = 57;
	uint64_t x135 = 4LLU;
	int8_t x136 = INT8_MAX;
	static volatile int64_t t33 = INT64_MIN;

	t33 = (x133*((x134/x135)<=x136));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 90991877979LLU;
	int8_t x138 = -1;
	static uint64_t t34 = 138LLU;

	t34 = (x137*((x138/x139)<=x140));

	if (t34 != 90991877979LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 117521U;
	int64_t x142 = INT64_MIN;
	volatile uint32_t x143 = 1U;
	volatile int8_t x144 = INT8_MIN;

	t35 = (x141*((x142/x143)<=x144));

	if (t35 != 117521U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x145 = 0;
	int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MAX;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t36 = -30678;

	t36 = (x145*((x146/x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int32_t x151 = -9656277;
	volatile int64_t x152 = 29LL;
	volatile int32_t t37 = 0;

	t37 = (x149*((x150/x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 344LLU;
	volatile int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MAX;
	uint8_t x156 = 1U;
	volatile uint64_t t38 = 1624277386LLU;

	t38 = (x153*((x154/x155)<=x156));

	if (t38 != 344LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 180982610LLU;
	uint32_t x158 = 1975689U;
	static int64_t x159 = INT64_MIN;
	uint64_t x160 = 120120580108LLU;

	t39 = (x157*((x158/x159)<=x160));

	if (t39 != 180982610LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	int32_t x162 = -1;
	volatile int16_t x164 = INT16_MIN;
	int32_t t40 = -840;

	t40 = (x161*((x162/x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	int32_t x167 = 17;
	int16_t x168 = -1;

	t41 = (x165*((x166/x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MIN;
	static int64_t x170 = INT64_MAX;
	static int8_t x171 = 61;
	uint32_t x172 = 180643U;
	static volatile int64_t t42 = -2LL;

	t42 = (x169*((x170/x171)<=x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = -2LL;
	int8_t x174 = INT8_MAX;
	static int8_t x175 = INT8_MIN;

	t43 = (x173*((x174/x175)<=x176));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = 21751576503LLU;
	int16_t x178 = INT16_MIN;
	uint32_t x180 = 68874U;
	volatile uint64_t t44 = 8891608LLU;

	t44 = (x177*((x178/x179)<=x180));

	if (t44 != 21751576503LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = -1;
	static int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MIN;
	int64_t x184 = -1LL;
	static int32_t t45 = 50918168;

	t45 = (x181*((x182/x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x187 = INT64_MIN;
	int16_t x188 = 1;
	uint32_t t46 = 3U;

	t46 = (x185*((x186/x187)<=x188));

	if (t46 != 112U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MIN;
	int8_t x190 = -1;
	static uint64_t x191 = 21956733LLU;
	volatile int8_t x192 = INT8_MIN;
	volatile int32_t t47 = -38540;

	t47 = (x189*((x190/x191)<=x192));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = 2;
	int32_t x194 = 58780;
	uint8_t x195 = UINT8_MAX;
	uint8_t x196 = 6U;
	static volatile int32_t t48 = -199301;

	t48 = (x193*((x194/x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = -6546224185593LL;
	int32_t x198 = INT32_MIN;
	int64_t t49 = 6686018764222LL;

	t49 = (x197*((x198/x199)<=x200));

	if (t49 != -6546224185593LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -2;
	int64_t x203 = INT64_MIN;
	uint8_t x204 = UINT8_MAX;
	static int32_t t50 = -36541;

	t50 = (x201*((x202/x203)<=x204));

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x206 = INT8_MIN;
	static uint64_t x207 = 250710711029806617LLU;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = -1177;

	t51 = (x205*((x206/x207)<=x208));

	if (t51 != -7295181) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = INT64_MAX;
	static uint32_t x210 = 182067431U;
	static volatile uint8_t x211 = 10U;
	int32_t x212 = INT32_MIN;
	volatile int64_t t52 = INT64_MAX;

	t52 = (x209*((x210/x211)<=x212));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	volatile int8_t x214 = 23;
	uint32_t x216 = 2U;
	int32_t t53 = 1;

	t53 = (x213*((x214/x215)<=x216));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MAX;
	static int16_t x218 = INT16_MIN;
	int64_t x219 = 3LL;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t54 = INT32_MAX;

	t54 = (x217*((x218/x219)<=x220));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x222 = UINT32_MAX;
	int32_t x224 = -2;
	volatile int64_t t55 = INT64_MIN;

	t55 = (x221*((x222/x223)<=x224));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 1714760824542430183LLU;
	int8_t x226 = INT8_MIN;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = -1;
	volatile uint64_t t56 = 623658268759214959LLU;

	t56 = (x225*((x226/x227)<=x228));

	if (t56 != 1714760824542430183LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	int32_t x230 = -1;
	uint16_t x231 = 96U;
	uint64_t x232 = 5936769226683842129LLU;
	volatile int32_t t57 = -43538;

	t57 = (x229*((x230/x231)<=x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = 520788582LLU;
	int8_t x234 = INT8_MAX;
	int16_t x236 = INT16_MAX;
	uint64_t t58 = 521674020939LLU;

	t58 = (x233*((x234/x235)<=x236));

	if (t58 != 520788582LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = 218531120LLU;
	int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MIN;
	volatile uint32_t x240 = 28254U;
	volatile uint64_t t59 = 1145150685587LLU;

	t59 = (x237*((x238/x239)<=x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = 258;
	uint16_t x242 = UINT16_MAX;
	static int16_t x243 = -1;
	volatile int32_t x244 = INT32_MAX;
	int32_t t60 = 317;

	t60 = (x241*((x242/x243)<=x244));

	if (t60 != 258) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x248 = -894278;
	int32_t t61 = 1;

	t61 = (x245*((x246/x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = 1;
	int8_t x251 = 2;
	int64_t x252 = -88LL;
	volatile int32_t t62 = -270384134;

	t62 = (x249*((x250/x251)<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MAX;
	int8_t x255 = INT8_MIN;
	uint32_t x256 = 27U;
	volatile int32_t t63 = 14526379;

	t63 = (x253*((x254/x255)<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	int16_t x258 = INT16_MAX;
	uint64_t x259 = 119801687882LLU;
	int32_t x260 = 56592;
	static int32_t t64 = 1197;

	t64 = (x257*((x258/x259)<=x260));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 7U;
	int32_t x262 = -1365;
	int8_t x263 = -1;
	int32_t t65 = -926;

	t65 = (x261*((x262/x263)<=x264));

	if (t65 != 7) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = 1019006266642607435LL;
	volatile int8_t x268 = INT8_MIN;
	static int32_t t66 = 521498114;

	t66 = (x265*((x266/x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = -1;
	int32_t x272 = INT32_MIN;
	int32_t t67 = -17102;

	t67 = (x269*((x270/x271)<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x273 = 4U;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = INT8_MIN;
	static volatile int16_t x276 = 363;
	int32_t t68 = -9;

	t68 = (x273*((x274/x275)<=x276));

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = INT8_MAX;
	int32_t x279 = -1;
	static int8_t x280 = 3;

	t69 = (x277*((x278/x279)<=x280));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 0U;
	uint32_t x282 = 2688U;
	int64_t x283 = -1600517LL;
	int8_t x284 = INT8_MIN;
	int32_t t70 = 18251;

	t70 = (x281*((x282/x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = -1949;
	volatile uint64_t x287 = UINT64_MAX;
	static int64_t x288 = INT64_MIN;
	int32_t t71 = -212206;

	t71 = (x285*((x286/x287)<=x288));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 1U;
	uint32_t x290 = 6U;
	uint32_t x291 = 832862355U;
	uint16_t x292 = UINT16_MAX;

	t72 = (x289*((x290/x291)<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x293 = 1104U;
	static int8_t x294 = 1;
	int32_t x295 = 951;
	volatile int32_t x296 = 656633717;
	volatile int32_t t73 = 146082015;

	t73 = (x293*((x294/x295)<=x296));

	if (t73 != 1104) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = INT64_MAX;
	uint16_t x299 = 7016U;
	static volatile int16_t x300 = INT16_MIN;
	int64_t t74 = INT64_MAX;

	t74 = (x297*((x298/x299)<=x300));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = 14;
	uint16_t x303 = 3U;
	static int8_t x304 = INT8_MIN;

	t75 = (x301*((x302/x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = -1;
	static uint64_t x306 = UINT64_MAX;
	uint8_t x307 = 17U;
	int32_t t76 = -2;

	t76 = (x305*((x306/x307)<=x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	static volatile uint8_t x311 = UINT8_MAX;
	int8_t x312 = -1;
	volatile int64_t t77 = 7117024123LL;

	t77 = (x309*((x310/x311)<=x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x313 = UINT8_MAX;
	static int64_t x314 = -1LL;
	int16_t x315 = INT16_MIN;
	volatile uint16_t x316 = UINT16_MAX;
	int32_t t78 = 25586;

	t78 = (x313*((x314/x315)<=x316));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 3U;
	int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MAX;
	int32_t x320 = -1;
	volatile int32_t t79 = 17;

	t79 = (x317*((x318/x319)<=x320));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = 5399;
	uint64_t x323 = UINT64_MAX;
	int64_t x324 = INT64_MAX;
	int64_t t80 = INT64_MIN;

	t80 = (x321*((x322/x323)<=x324));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x327 = 6;
	int16_t x328 = 14;

	t81 = (x325*((x326/x327)<=x328));

	if (t81 != -430579616262602985LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	static int64_t x330 = INT64_MIN;
	int8_t x331 = -5;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = 85009296;

	t82 = (x329*((x330/x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = -1;
	uint8_t x334 = 84U;
	uint64_t x336 = 4299476667LLU;
	volatile int32_t t83 = 50891;

	t83 = (x333*((x334/x335)<=x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = -43LL;
	volatile int32_t x338 = -2188;
	static volatile int64_t t84 = -369956LL;

	t84 = (x337*((x338/x339)<=x340));

	if (t84 != -43LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x343 = -1;
	volatile int8_t x344 = -9;
	volatile int64_t t85 = 3860684231252092LL;

	t85 = (x341*((x342/x343)<=x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = INT32_MIN;
	int8_t x350 = 15;
	volatile int8_t x351 = -1;
	int64_t x352 = INT64_MIN;
	int32_t t86 = 302;

	t86 = (x349*((x350/x351)<=x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x353 = -1;
	uint16_t x354 = 1112U;
	int32_t x355 = -7365849;
	int8_t x356 = INT8_MIN;
	int32_t t87 = -392500019;

	t87 = (x353*((x354/x355)<=x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = INT8_MIN;
	int8_t x358 = -1;
	volatile uint8_t x359 = UINT8_MAX;
	int32_t t88 = 12380;

	t88 = (x357*((x358/x359)<=x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MIN;
	uint64_t x364 = 682974LLU;
	volatile int32_t t89 = INT32_MIN;

	t89 = (x361*((x362/x363)<=x364));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x365 = 5624839LL;
	int16_t x367 = -1;
	int64_t x368 = 81262465385LL;

	t90 = (x365*((x366/x367)<=x368));

	if (t90 != 5624839LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x370 = -493;
	int32_t x371 = INT32_MIN;
	int64_t x372 = -1400452573LL;

	t91 = (x369*((x370/x371)<=x372));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x374 = INT64_MIN;
	uint64_t x375 = UINT64_MAX;
	volatile int32_t t92 = 15091;

	t92 = (x373*((x374/x375)<=x376));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = -1;
	volatile int16_t x378 = -921;
	static int16_t x379 = INT16_MAX;
	int64_t x380 = INT64_MIN;
	volatile int32_t t93 = -1311517;

	t93 = (x377*((x378/x379)<=x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x381 = 127729041166LLU;
	int32_t x384 = -1;
	volatile uint64_t t94 = 0LLU;

	t94 = (x381*((x382/x383)<=x384));

	if (t94 != 127729041166LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x385 = INT64_MIN;
	int64_t x386 = INT64_MAX;
	static uint8_t x388 = 69U;
	static int64_t t95 = 16588254667375LL;

	t95 = (x385*((x386/x387)<=x388));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x389 = 7739929LLU;
	static int8_t x390 = -13;
	int8_t x391 = INT8_MIN;
	int8_t x392 = -1;
	volatile uint64_t t96 = 12583955166087949LLU;

	t96 = (x389*((x390/x391)<=x392));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = -6;
	static volatile int32_t x394 = INT32_MAX;
	uint8_t x396 = UINT8_MAX;

	t97 = (x393*((x394/x395)<=x396));

	if (t97 != -6) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x397 = 876U;
	int32_t x398 = 5264771;
	int16_t x399 = -18;
	int32_t x400 = INT32_MIN;

	t98 = (x397*((x398/x399)<=x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = INT64_MIN;
	static int16_t x402 = -1;
	volatile int64_t x403 = INT64_MIN;
	volatile uint32_t x404 = 26U;

	t99 = (x401*((x402/x403)<=x404));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

