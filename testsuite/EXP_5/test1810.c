#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x7 = 13U;
int8_t x8 = -1;
int64_t x11 = INT64_MAX;
int32_t x16 = -761;
int8_t x18 = 1;
volatile int64_t t4 = -49168377883LL;
volatile int64_t x24 = INT64_MIN;
int64_t x33 = INT64_MAX;
static int16_t x34 = INT16_MIN;
int64_t t8 = 247493LL;
int64_t x37 = INT64_MIN;
int64_t x38 = 94653016141LL;
volatile int8_t x40 = -2;
int32_t t10 = 6;
static int16_t x45 = INT16_MIN;
uint8_t x53 = UINT8_MAX;
uint8_t x54 = 11U;
int16_t x55 = INT16_MAX;
uint8_t x64 = UINT8_MAX;
int32_t x65 = INT32_MIN;
int32_t t16 = INT32_MIN;
int64_t t18 = INT64_MIN;
uint32_t x82 = 41U;
volatile uint32_t x87 = UINT32_MAX;
uint64_t x91 = 64622716607642LLU;
uint32_t x93 = 18637175U;
int8_t x94 = -8;
uint32_t t23 = 28U;
int32_t x97 = 980322809;
static uint16_t x99 = 964U;
volatile int32_t t26 = 820001;
volatile int64_t x109 = -1LL;
int16_t x110 = -7597;
int32_t x111 = INT32_MAX;
int16_t x113 = -2;
uint64_t x116 = UINT64_MAX;
volatile uint8_t x117 = 17U;
uint16_t x121 = 0U;
int8_t x123 = INT8_MIN;
static int64_t x130 = INT64_MAX;
volatile uint32_t x131 = 1178532U;
int16_t x141 = 5675;
volatile int32_t t35 = -926112816;
uint8_t x156 = 116U;
int64_t x160 = INT64_MAX;
static uint8_t x168 = 93U;
static uint32_t x180 = 1024118U;
uint16_t x182 = 496U;
uint16_t x193 = 64U;
int32_t t48 = 1422;
int16_t x198 = INT16_MAX;
uint64_t x206 = UINT64_MAX;
int64_t x213 = 36261347129031LL;
static volatile int64_t x216 = 6108944996LL;
static int8_t x218 = 0;
int64_t x226 = INT64_MAX;
uint16_t x230 = UINT16_MAX;
volatile int16_t x240 = -13;
int8_t x243 = -1;
static uint32_t x244 = UINT32_MAX;
volatile int64_t t60 = 12480LL;
uint32_t x246 = 1719U;
int64_t x250 = -6739744514314760LL;
int64_t x271 = INT64_MIN;
uint16_t x280 = 3U;
volatile int32_t x281 = -148955;
volatile int32_t t70 = 5076;
uint8_t x286 = 0U;
uint64_t x297 = UINT64_MAX;
static uint8_t x300 = UINT8_MAX;
int8_t x302 = INT8_MIN;
int64_t x311 = INT64_MAX;
int32_t x312 = -771066746;
int32_t x317 = INT32_MIN;
int64_t x318 = INT64_MIN;
static int32_t t79 = INT32_MIN;
volatile uint64_t t80 = 827158288LLU;
int64_t x332 = INT64_MAX;
int32_t t84 = -15917301;
volatile uint32_t x346 = UINT32_MAX;
uint64_t x348 = 21543LLU;
static int8_t x349 = INT8_MAX;
static int8_t x358 = INT8_MAX;
int32_t x360 = INT32_MIN;
volatile int64_t t89 = 37004407487223LL;
volatile int8_t x367 = -2;
int64_t x370 = INT64_MIN;
volatile uint8_t x372 = UINT8_MAX;
int8_t x373 = INT8_MIN;
volatile int32_t t93 = -52986089;
int16_t x379 = -1;
uint16_t x382 = 5U;
int64_t x384 = -1LL;
int8_t x387 = INT8_MIN;
int16_t x392 = INT16_MAX;
int32_t x398 = INT32_MIN;
int64_t t99 = 111686804LL;


void f0(void) {
	int32_t x1 = -1;
	volatile uint32_t x2 = 2U;
	int8_t x3 = -1;
	volatile int64_t x4 = 60731688565LL;
	static volatile int32_t t0 = -749061;

	t0 = (x1*((x2&x3)<=x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = -1LL;
	uint32_t x6 = 488U;
	static volatile int64_t t1 = 718317LL;

	t1 = (x5*((x6&x7)<=x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	int64_t x12 = -1491LL;
	int32_t t2 = 492;

	t2 = (x9*((x10&x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	static volatile uint64_t x14 = 1837746466LLU;
	int16_t x15 = 0;
	volatile int32_t t3 = 1223504;

	t3 = (x13*((x14&x15)<=x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int64_t x19 = -400490713403098593LL;
	static int32_t x20 = INT32_MIN;

	t4 = (x17*((x18&x19)<=x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MIN;
	int64_t x23 = 2221996634LL;
	int64_t t5 = -51767359545803LL;

	t5 = (x21*((x22&x23)<=x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = 5;
	uint8_t x27 = 55U;
	int64_t x28 = INT64_MIN;
	static int32_t t6 = -6099;

	t6 = (x25*((x26&x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint8_t x30 = 77U;
	int64_t x31 = 31607625LL;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 87;

	t7 = (x29*((x30&x31)<=x32));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = 0;
	int8_t x36 = INT8_MIN;

	t8 = (x33*((x34&x35)<=x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x39 = INT8_MIN;
	volatile int64_t t9 = -3064288130LL;

	t9 = (x37*((x38&x39)<=x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MAX;
	int64_t x42 = INT64_MIN;
	int32_t x43 = INT32_MIN;
	static uint8_t x44 = 47U;

	t10 = (x41*((x42&x43)<=x44));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -139622347904496LL;
	uint16_t x47 = UINT16_MAX;
	int64_t x48 = INT64_MIN;
	volatile int32_t t11 = -63379;

	t11 = (x45*((x46&x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	volatile int32_t x50 = -1;
	int64_t x51 = INT64_MAX;
	volatile int32_t x52 = -1;
	static volatile int32_t t12 = 5;

	t12 = (x49*((x50&x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x56 = INT8_MAX;
	int32_t t13 = -5;

	t13 = (x53*((x54&x55)<=x56));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint64_t x58 = UINT64_MAX;
	int8_t x59 = INT8_MAX;
	uint8_t x60 = 1U;
	int32_t t14 = -3;

	t14 = (x57*((x58&x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	static uint32_t x62 = 4834U;
	int8_t x63 = -26;
	static volatile int64_t t15 = -28100220824002672LL;

	t15 = (x61*((x62&x63)<=x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = -1;
	int16_t x67 = -1;
	int64_t x68 = INT64_MAX;

	t16 = (x65*((x66&x67)<=x68));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int64_t x70 = -1LL;
	int8_t x71 = INT8_MIN;
	int8_t x72 = 10;
	static int32_t t17 = 1472;

	t17 = (x69*((x70&x71)<=x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	volatile uint16_t x74 = 22400U;
	int32_t x75 = -1;
	uint64_t x76 = 4100298504300579LLU;

	t18 = (x73*((x74&x75)<=x76));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x77 = 1808038U;
	int16_t x78 = INT16_MIN;
	uint32_t x79 = 217595U;
	static uint16_t x80 = 12U;
	static volatile uint32_t t19 = 60931431U;

	t19 = (x77*((x78&x79)<=x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -334;
	volatile uint32_t x83 = 13454U;
	int32_t x84 = 8;
	volatile int32_t t20 = -97349;

	t20 = (x81*((x82&x83)<=x84));

	if (t20 != -334) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	uint32_t x86 = 290401U;
	uint32_t x88 = 295U;
	int64_t t21 = 1126787570LL;

	t21 = (x85*((x86&x87)<=x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = -24808497641471078LL;
	uint8_t x92 = 3U;
	int32_t t22 = 45;

	t22 = (x89*((x90&x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x95 = 2LLU;
	int32_t x96 = INT32_MIN;

	t23 = (x93*((x94&x95)<=x96));

	if (t23 != 18637175U) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x98 = 15;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = 43968;

	t24 = (x97*((x98&x99)<=x100));

	if (t24 != 980322809) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 7U;
	int64_t x102 = INT64_MAX;
	volatile int8_t x103 = INT8_MIN;
	volatile int32_t x104 = 1723;
	volatile int32_t t25 = -1229084;

	t25 = (x101*((x102&x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -13;
	int16_t x106 = -1;
	static uint8_t x107 = 5U;
	static volatile uint64_t x108 = 16872475910535101LLU;

	t26 = (x105*((x106&x107)<=x108));

	if (t26 != -13) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x112 = INT8_MAX;
	int64_t t27 = 129508411LL;

	t27 = (x109*((x110&x111)<=x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x114 = 122LLU;
	volatile int8_t x115 = INT8_MIN;
	static volatile int32_t t28 = 97483;

	t28 = (x113*((x114&x115)<=x116));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = -1;
	int32_t t29 = 43972;

	t29 = (x117*((x118&x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	int8_t x124 = -40;
	volatile int32_t t30 = -7109249;

	t30 = (x121*((x122&x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	static volatile int8_t x126 = -1;
	int64_t x127 = INT64_MAX;
	int64_t x128 = 63903LL;
	int64_t t31 = 209LL;

	t31 = (x125*((x126&x127)<=x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 14071U;
	uint64_t x132 = 20715373665601171LLU;
	int32_t t32 = -453;

	t32 = (x129*((x130&x131)<=x132));

	if (t32 != 14071) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 745495379LLU;
	uint32_t x134 = 1137U;
	static uint16_t x135 = 22101U;
	uint64_t x136 = 32503824LLU;
	uint64_t t33 = 8566593819205LLU;

	t33 = (x133*((x134&x135)<=x136));

	if (t33 != 745495379LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	uint32_t x138 = UINT32_MAX;
	int32_t x139 = INT32_MAX;
	int32_t x140 = INT32_MIN;
	int64_t t34 = INT64_MIN;

	t34 = (x137*((x138&x139)<=x140));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x142 = INT64_MAX;
	static int8_t x143 = -1;
	int32_t x144 = -1;

	t35 = (x141*((x142&x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	uint8_t x146 = UINT8_MAX;
	uint8_t x147 = 82U;
	int32_t x148 = -1;
	int32_t t36 = 313097515;

	t36 = (x145*((x146&x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MAX;
	static int32_t x150 = INT32_MAX;
	int8_t x151 = -1;
	static int32_t x152 = -22;
	volatile int64_t t37 = -44948LL;

	t37 = (x149*((x150&x151)<=x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = -1;
	uint16_t x155 = 5991U;
	int32_t t38 = 277;

	t38 = (x153*((x154&x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	volatile int16_t x158 = INT16_MIN;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x157*((x158&x159)<=x160));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	static volatile int32_t x162 = -13246167;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = 3365U;
	int32_t t40 = INT32_MIN;

	t40 = (x161*((x162&x163)<=x164));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 868LLU;
	static uint64_t x166 = 3372338347LLU;
	uint64_t x167 = UINT64_MAX;
	static uint64_t t41 = 5278577LLU;

	t41 = (x165*((x166&x167)<=x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = 18415359U;
	int32_t x170 = -3;
	int16_t x171 = INT16_MIN;
	int16_t x172 = -123;
	uint32_t t42 = 11U;

	t42 = (x169*((x170&x171)<=x172));

	if (t42 != 18415359U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 95LLU;
	volatile int16_t x174 = INT16_MIN;
	int64_t x175 = -1LL;
	volatile uint32_t x176 = 5042229U;
	static volatile uint64_t t43 = 47503866745LLU;

	t43 = (x173*((x174&x175)<=x176));

	if (t43 != 95LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	int32_t x178 = INT32_MAX;
	int8_t x179 = INT8_MAX;
	volatile int32_t t44 = -3430;

	t44 = (x177*((x178&x179)<=x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 169220178205LLU;
	volatile uint16_t x183 = 1114U;
	uint32_t x184 = 72548246U;
	static uint64_t t45 = 73952314LLU;

	t45 = (x181*((x182&x183)<=x184));

	if (t45 != 169220178205LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -158169LL;
	uint32_t x186 = UINT32_MAX;
	int16_t x187 = INT16_MIN;
	int8_t x188 = 23;
	volatile int64_t t46 = 41270544232LL;

	t46 = (x185*((x186&x187)<=x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 56;
	uint8_t x190 = 1U;
	volatile int32_t x191 = -31922668;
	int16_t x192 = -1;
	int32_t t47 = -545561;

	t47 = (x189*((x190&x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MIN;
	static uint16_t x196 = 8U;

	t48 = (x193*((x194&x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 1336733084041LLU;
	volatile uint64_t x199 = 2LLU;
	int8_t x200 = INT8_MIN;
	static uint64_t t49 = 16665325563307494LLU;

	t49 = (x197*((x198&x199)<=x200));

	if (t49 != 1336733084041LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = UINT32_MAX;
	volatile uint32_t x202 = 7439U;
	int8_t x203 = INT8_MAX;
	uint8_t x204 = 30U;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = (x201*((x202&x203)<=x204));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int8_t x207 = -9;
	uint64_t x208 = 1800050LLU;
	volatile int32_t t51 = -7;

	t51 = (x205*((x206&x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 3U;
	volatile int8_t x210 = INT8_MAX;
	uint64_t x211 = 138332653065897LLU;
	uint32_t x212 = 4U;
	static int32_t t52 = 109389;

	t52 = (x209*((x210&x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = -1;
	uint8_t x215 = UINT8_MAX;
	volatile int64_t t53 = -46054155LL;

	t53 = (x213*((x214&x215)<=x216));

	if (t53 != 36261347129031LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	int8_t x219 = -1;
	int32_t x220 = 216;
	static int32_t t54 = 89683;

	t54 = (x217*((x218&x219)<=x220));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 109319LLU;
	volatile uint8_t x222 = 1U;
	int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MAX;
	uint64_t t55 = 8759569117590233LLU;

	t55 = (x221*((x222&x223)<=x224));

	if (t55 != 109319LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -44;
	static volatile int64_t x227 = INT64_MIN;
	int32_t x228 = -1;
	int32_t t56 = -11;

	t56 = (x225*((x226&x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 1;
	int64_t x231 = -3075797610LL;
	uint64_t x232 = 2025405870147191LLU;
	volatile int32_t t57 = 629017765;

	t57 = (x229*((x230&x231)<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 86554143U;
	volatile int8_t x234 = -1;
	volatile int64_t x235 = INT64_MAX;
	int8_t x236 = INT8_MIN;
	uint32_t t58 = 2083359040U;

	t58 = (x233*((x234&x235)<=x236));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MAX;
	uint64_t x238 = 3594723788345448LLU;
	static uint8_t x239 = 48U;
	int32_t t59 = 33793274;

	t59 = (x237*((x238&x239)<=x240));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = -94754352525057956LL;
	int64_t x242 = INT64_MAX;

	t60 = (x241*((x242&x243)<=x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 0;
	int8_t x247 = 3;
	int16_t x248 = INT16_MAX;
	volatile int32_t t61 = -664723811;

	t61 = (x245*((x246&x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	int32_t x251 = 111;
	int8_t x252 = INT8_MIN;
	volatile int32_t t62 = 244;

	t62 = (x249*((x250&x251)<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = 57U;
	int16_t x254 = -1;
	uint8_t x255 = UINT8_MAX;
	int64_t x256 = INT64_MAX;
	volatile int32_t t63 = 0;

	t63 = (x253*((x254&x255)<=x256));

	if (t63 != 57) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 495748663U;
	volatile int16_t x258 = -170;
	int8_t x259 = INT8_MAX;
	static int8_t x260 = -1;
	volatile uint32_t t64 = 1749U;

	t64 = (x257*((x258&x259)<=x260));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = 1LL;
	uint16_t x262 = 462U;
	uint8_t x263 = UINT8_MAX;
	uint8_t x264 = UINT8_MAX;
	volatile int64_t t65 = 10468866848LL;

	t65 = (x261*((x262&x263)<=x264));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -134686264LL;
	int32_t x266 = -1;
	uint8_t x267 = 1U;
	int32_t x268 = -1;
	volatile int64_t t66 = -27770768LL;

	t66 = (x265*((x266&x267)<=x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = UINT64_MAX;
	int32_t x270 = -13823134;
	static int8_t x272 = -1;
	static volatile uint64_t t67 = UINT64_MAX;

	t67 = (x269*((x270&x271)<=x272));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static int32_t x274 = 175194037;
	uint32_t x275 = 38U;
	int64_t x276 = -107000534948LL;
	int64_t t68 = 70590736883303LL;

	t68 = (x273*((x274&x275)<=x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = INT32_MAX;
	static volatile int16_t x278 = INT16_MAX;
	static volatile int64_t x279 = INT64_MAX;
	static volatile int32_t t69 = 93289;

	t69 = (x277*((x278&x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = INT8_MAX;
	int8_t x284 = INT8_MAX;

	t70 = (x281*((x282&x283)<=x284));

	if (t70 != -148955) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = INT8_MAX;
	volatile int32_t x287 = INT32_MAX;
	static int32_t x288 = INT32_MAX;
	static volatile int32_t t71 = -1863;

	t71 = (x285*((x286&x287)<=x288));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x289 = -17;
	int8_t x290 = INT8_MIN;
	static volatile int16_t x291 = -1;
	volatile int16_t x292 = 904;
	volatile int32_t t72 = 14027582;

	t72 = (x289*((x290&x291)<=x292));

	if (t72 != -17) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -32;
	int64_t x294 = INT64_MAX;
	uint32_t x295 = 5239U;
	int64_t x296 = -1LL;
	int32_t t73 = 35;

	t73 = (x293*((x294&x295)<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x298 = INT32_MIN;
	int8_t x299 = 26;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x297*((x298&x299)<=x300));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = -18;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t75 = -7543571;

	t75 = (x301*((x302&x303)<=x304));

	if (t75 != -18) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	volatile uint8_t x306 = 0U;
	volatile uint16_t x307 = 17864U;
	uint8_t x308 = 6U;
	volatile int32_t t76 = 209014541;

	t76 = (x305*((x306&x307)<=x308));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	volatile uint32_t x310 = 66999U;
	static int32_t t77 = -17735;

	t77 = (x309*((x310&x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	uint32_t x314 = 517682U;
	int32_t x315 = INT32_MIN;
	int16_t x316 = INT16_MAX;
	int64_t t78 = INT64_MIN;

	t78 = (x313*((x314&x315)<=x316));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x319 = INT64_MAX;
	uint64_t x320 = UINT64_MAX;

	t79 = (x317*((x318&x319)<=x320));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 21973413424LLU;
	static int32_t x322 = -1;
	volatile uint8_t x323 = 20U;
	volatile int8_t x324 = INT8_MIN;

	t80 = (x321*((x322&x323)<=x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = -92446563;
	static int16_t x326 = INT16_MIN;
	volatile int32_t x327 = INT32_MIN;
	volatile uint16_t x328 = 32U;
	volatile int32_t t81 = 0;

	t81 = (x325*((x326&x327)<=x328));

	if (t81 != -92446563) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = -17008268336LL;
	volatile uint32_t x331 = 191959469U;
	static int32_t t82 = 2068434;

	t82 = (x329*((x330&x331)<=x332));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	static int64_t x334 = -232452867664361117LL;
	uint8_t x335 = 4U;
	static int64_t x336 = 2555072531191858853LL;
	volatile int32_t t83 = INT32_MAX;

	t83 = (x333*((x334&x335)<=x336));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	volatile uint8_t x338 = 1U;
	volatile int16_t x339 = INT16_MAX;
	static int64_t x340 = INT64_MAX;

	t84 = (x337*((x338&x339)<=x340));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = INT32_MAX;
	static uint16_t x342 = 123U;
	static int64_t x343 = -1LL;
	uint32_t x344 = 10388611U;
	volatile int32_t t85 = INT32_MAX;

	t85 = (x341*((x342&x343)<=x344));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 263555040729137LLU;
	static volatile uint32_t x347 = 28173U;
	static uint64_t t86 = 25662225421049302LLU;

	t86 = (x345*((x346&x347)<=x348));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = -1;
	int64_t x351 = INT64_MIN;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t87 = -52;

	t87 = (x349*((x350&x351)<=x352));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MIN;
	static int32_t x355 = INT32_MIN;
	uint8_t x356 = UINT8_MAX;
	static int64_t t88 = INT64_MIN;

	t88 = (x353*((x354&x355)<=x356));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -23388391331940657LL;
	int8_t x359 = -23;

	t89 = (x357*((x358&x359)<=x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MAX;
	static int32_t x363 = INT32_MAX;
	static int64_t x364 = INT64_MAX;
	int32_t t90 = 3489004;

	t90 = (x361*((x362&x363)<=x364));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 20093U;
	volatile uint64_t x366 = 248933414116700261LLU;
	int8_t x368 = 2;
	volatile int32_t t91 = -6596;

	t91 = (x365*((x366&x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 18023194595446399LLU;
	static int32_t x371 = INT32_MIN;
	volatile uint64_t t92 = 3163641114LLU;

	t92 = (x369*((x370&x371)<=x372));

	if (t92 != 18023194595446399LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MIN;
	volatile int64_t x375 = -1LL;
	uint16_t x376 = 3U;

	t93 = (x373*((x374&x375)<=x376));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 2958398738190609LLU;
	uint64_t x378 = UINT64_MAX;
	uint64_t x380 = 351LLU;
	uint64_t t94 = 20396170872157LLU;

	t94 = (x377*((x378&x379)<=x380));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int16_t x383 = INT16_MIN;
	volatile int32_t t95 = 1718057;

	t95 = (x381*((x382&x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 46U;
	uint64_t x386 = UINT64_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t96 = 38;

	t96 = (x385*((x386&x387)<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 5U;
	static volatile int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	int32_t t97 = -458933858;

	t97 = (x389*((x390&x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MIN;
	int64_t x394 = -454924260126144LL;
	static uint64_t x395 = 60120893175803890LLU;
	int8_t x396 = 1;
	volatile int64_t t98 = 50046606246LL;

	t98 = (x393*((x394&x395)<=x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -262077LL;
	volatile uint32_t x399 = UINT32_MAX;
	static uint32_t x400 = 1U;

	t99 = (x397*((x398&x399)<=x400));

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

