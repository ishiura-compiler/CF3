#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = INT32_MIN;
int16_t x13 = -1;
int64_t x16 = -1LL;
static volatile int8_t x23 = INT8_MIN;
static volatile int16_t x27 = INT16_MIN;
uint64_t x35 = UINT64_MAX;
static int32_t t8 = -2091155;
uint8_t x42 = UINT8_MAX;
volatile int32_t t11 = -60;
volatile uint8_t x52 = 45U;
int32_t x58 = INT32_MIN;
int64_t x59 = 862290LL;
static volatile uint8_t x62 = 22U;
int64_t x63 = INT64_MAX;
int32_t t16 = -6;
int64_t x74 = -5318160LL;
uint16_t x78 = 60U;
int16_t x79 = INT16_MIN;
static volatile int8_t x88 = INT8_MIN;
static uint16_t x89 = 10298U;
static int8_t x94 = INT8_MAX;
static uint8_t x99 = UINT8_MAX;
int16_t x101 = 144;
static int32_t x107 = INT32_MAX;
uint16_t x108 = 178U;
int8_t x112 = INT8_MIN;
uint8_t x124 = UINT8_MAX;
int32_t t31 = -62326091;
uint8_t x135 = 7U;
uint16_t x139 = UINT16_MAX;
int32_t t38 = 1;
static int32_t t40 = 539;
int32_t x167 = -73371;
int16_t x173 = -1;
static volatile uint8_t x181 = UINT8_MAX;
uint32_t x182 = UINT32_MAX;
volatile int32_t t45 = 54242;
int16_t x186 = INT16_MAX;
volatile int16_t x191 = INT16_MAX;
int16_t x199 = INT16_MIN;
int32_t t49 = 2525;
int32_t x201 = INT32_MIN;
volatile uint32_t x203 = UINT32_MAX;
static int8_t x208 = INT8_MAX;
int8_t x209 = INT8_MIN;
int8_t x211 = INT8_MAX;
int16_t x212 = -1;
uint32_t x216 = 19728U;
uint16_t x218 = 7083U;
int32_t t54 = 683391;
int64_t x225 = INT64_MAX;
int32_t t56 = 0;
int32_t t57 = -65;
int32_t x234 = INT32_MIN;
static int64_t x238 = -2957343670596625LL;
int16_t x241 = 7011;
int8_t x245 = 14;
int8_t x249 = INT8_MIN;
static volatile int32_t t63 = 159;
volatile uint8_t x260 = 22U;
int8_t x261 = INT8_MIN;
volatile int32_t t66 = -257937598;
uint64_t x271 = UINT64_MAX;
int16_t x274 = INT16_MIN;
volatile int32_t t68 = -6931;
volatile int32_t x279 = INT32_MIN;
volatile int32_t t71 = -1827;
int8_t x296 = -1;
volatile int32_t t75 = 940038602;
int32_t x306 = INT32_MIN;
int32_t t76 = 195272178;
static volatile uint64_t x309 = 4149760987162491060LLU;
int32_t x310 = -1;
static int8_t x313 = INT8_MAX;
uint8_t x315 = 0U;
static int32_t x316 = 14917669;
int32_t x317 = -911981853;
volatile int32_t t79 = 38955899;
uint64_t x321 = 4512977002911362117LLU;
int32_t t80 = 1;
int16_t x327 = -66;
uint32_t x329 = 404241785U;
int32_t x334 = -1;
int32_t t83 = 3121600;
static volatile int32_t t84 = 11187194;
uint16_t x343 = 0U;
static int32_t x350 = INT32_MIN;
int16_t x351 = -2347;
volatile int32_t t89 = 2030;
int32_t x366 = 11075126;
volatile int32_t t91 = 3;
uint64_t x372 = 9799990LLU;
volatile uint32_t x383 = 1U;
static volatile uint16_t x386 = 375U;
volatile int32_t t96 = 18817560;
static int16_t x391 = INT16_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint32_t x2 = 2305605U;
	int8_t x3 = -1;
	volatile int32_t t0 = -97158976;

	t0 = (x1<=((x2&x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	volatile uint8_t x6 = UINT8_MAX;
	uint32_t x7 = UINT32_MAX;
	volatile int64_t x8 = -1LL;
	int32_t t1 = 252434;

	t1 = (x5<=((x6&x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int32_t x10 = -1;
	uint64_t x11 = 4626911353884227LLU;
	static int16_t x12 = INT16_MAX;
	volatile int32_t t2 = -1;

	t2 = (x9<=((x10&x11)<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	int32_t x15 = -2348878;
	int32_t t3 = -25;

	t3 = (x13<=((x14&x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	uint64_t x18 = 237222LLU;
	volatile int16_t x19 = INT16_MIN;
	int16_t x20 = -248;
	volatile int32_t t4 = -214153;

	t4 = (x17<=((x18&x19)<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -73LL;
	uint16_t x22 = 11U;
	static int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -252;

	t5 = (x21<=((x22&x23)<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 19503672U;
	static uint64_t x26 = 16293844523217601LLU;
	volatile uint16_t x28 = 0U;
	int32_t t6 = 351683;

	t6 = (x25<=((x26&x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int16_t x30 = INT16_MIN;
	uint64_t x31 = UINT64_MAX;
	int64_t x32 = -1LL;
	int32_t t7 = -8;

	t7 = (x29<=((x30&x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 1510150136427904283LLU;
	uint64_t x34 = 55812449233LLU;
	static int16_t x36 = INT16_MIN;

	t8 = (x33<=((x34&x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MAX;
	static int32_t x38 = -85;
	uint16_t x39 = 3U;
	uint8_t x40 = 111U;
	int32_t t9 = -14;

	t9 = (x37<=((x38&x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x41 = -1;
	int16_t x43 = INT16_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t10 = -606503;

	t10 = (x41<=((x42&x43)<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = -199;
	int8_t x46 = INT8_MIN;
	uint16_t x47 = 19336U;
	int32_t x48 = INT32_MIN;

	t11 = (x45<=((x46&x47)<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -647446;
	int16_t x50 = INT16_MAX;
	int16_t x51 = 120;
	static volatile int32_t t12 = 28;

	t12 = (x49<=((x50&x51)<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 5;
	static int16_t x54 = -1;
	int16_t x55 = 45;
	static volatile int64_t x56 = -1LL;
	volatile int32_t t13 = 1279;

	t13 = (x53<=((x54&x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = INT64_MIN;
	int64_t x60 = INT64_MAX;
	volatile int32_t t14 = 1448;

	t14 = (x57<=((x58&x59)<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	int8_t x64 = 9;
	int32_t t15 = -14;

	t15 = (x61<=((x62&x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = UINT8_MAX;
	int16_t x66 = INT16_MIN;
	int16_t x67 = 1;
	volatile int8_t x68 = -1;

	t16 = (x65<=((x66&x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	int8_t x70 = INT8_MIN;
	static int16_t x71 = 4;
	volatile int8_t x72 = 1;
	volatile int32_t t17 = 25;

	t17 = (x69<=((x70&x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 3736U;
	int32_t x75 = -1;
	int16_t x76 = INT16_MIN;
	int32_t t18 = -2;

	t18 = (x73<=((x74&x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int16_t x80 = -14;
	static volatile int32_t t19 = 6245528;

	t19 = (x77<=((x78&x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -1;
	uint16_t x82 = 0U;
	static uint16_t x83 = 0U;
	volatile int8_t x84 = 0;
	volatile int32_t t20 = -1824;

	t20 = (x81<=((x82&x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 7122573940LL;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = 18;
	static int32_t t21 = -2227;

	t21 = (x85<=((x86&x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MIN;
	static int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = -3340593;

	t22 = (x89<=((x90&x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 26U;
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = 3006;

	t23 = (x93<=((x94&x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int32_t x98 = 6702779;
	int16_t x100 = INT16_MAX;
	int32_t t24 = 6;

	t24 = (x97<=((x98&x99)<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x102 = 29308377976LLU;
	volatile int64_t x103 = -1LL;
	static int64_t x104 = -1LL;
	int32_t t25 = -656;

	t25 = (x101<=((x102&x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	static uint64_t x106 = UINT64_MAX;
	int32_t t26 = -1527488;

	t26 = (x105<=((x106&x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 4U;
	int64_t x110 = INT64_MIN;
	volatile uint8_t x111 = UINT8_MAX;
	volatile int32_t t27 = 52014158;

	t27 = (x109<=((x110&x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = -1LL;
	int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t28 = -1270;

	t28 = (x113<=((x114&x115)<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	volatile int64_t x118 = -24880385LL;
	uint8_t x119 = 1U;
	int8_t x120 = INT8_MAX;
	volatile int32_t t29 = -1003777;

	t29 = (x117<=((x118&x119)<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	static int32_t x122 = INT32_MIN;
	uint8_t x123 = 0U;
	int32_t t30 = 143;

	t30 = (x121<=((x122&x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MAX;
	int32_t x126 = INT32_MIN;
	volatile uint16_t x127 = 7U;
	volatile int16_t x128 = INT16_MIN;

	t31 = (x125<=((x126&x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = -6;
	uint16_t x130 = 5622U;
	uint64_t x131 = UINT64_MAX;
	uint16_t x132 = UINT16_MAX;
	int32_t t32 = -2894818;

	t32 = (x129<=((x130&x131)<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MAX;
	int8_t x134 = INT8_MAX;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -20856;

	t33 = (x133<=((x134&x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	static int16_t x138 = INT16_MIN;
	int64_t x140 = INT64_MAX;
	int32_t t34 = 0;

	t34 = (x137<=((x138&x139)<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 296008U;
	static volatile uint64_t x142 = 70213LLU;
	uint16_t x143 = UINT16_MAX;
	int32_t x144 = INT32_MIN;
	int32_t t35 = 15916;

	t35 = (x141<=((x142&x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = 395;
	static volatile int32_t x146 = INT32_MIN;
	int32_t x147 = INT32_MAX;
	int16_t x148 = -1723;
	int32_t t36 = 18549;

	t36 = (x145<=((x146&x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 0;
	static int32_t x150 = -87526;
	static int64_t x151 = -8336973167LL;
	int32_t x152 = -1;
	static volatile int32_t t37 = 359;

	t37 = (x149<=((x150&x151)<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	int32_t x154 = -24;
	volatile int16_t x155 = INT16_MIN;
	int64_t x156 = -1LL;

	t38 = (x153<=((x154&x155)<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = INT64_MAX;
	int16_t x159 = INT16_MIN;
	volatile int64_t x160 = 32LL;
	int32_t t39 = -47759007;

	t39 = (x157<=((x158&x159)<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 30U;
	int8_t x162 = INT8_MIN;
	static uint64_t x163 = 10LLU;
	static int8_t x164 = -1;

	t40 = (x161<=((x162&x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 10;
	int8_t x166 = 29;
	volatile uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = 26743;

	t41 = (x165<=((x166&x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 92;
	uint8_t x170 = 13U;
	int8_t x171 = INT8_MAX;
	int32_t x172 = INT32_MAX;
	static int32_t t42 = -97;

	t42 = (x169<=((x170&x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x174 = UINT8_MAX;
	int8_t x175 = -1;
	static uint8_t x176 = UINT8_MAX;
	int32_t t43 = -30071158;

	t43 = (x173<=((x174&x175)<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	uint64_t x178 = 3060538356577LLU;
	uint8_t x179 = 30U;
	int64_t x180 = INT64_MIN;
	static volatile int32_t t44 = 2878716;

	t44 = (x177<=((x178&x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x183 = -1;
	uint64_t x184 = 9LLU;

	t45 = (x181<=((x182&x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 102576LL;
	int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MIN;
	int32_t t46 = -19;

	t46 = (x185<=((x186&x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	uint64_t x190 = 255254965LLU;
	int32_t x192 = INT32_MAX;
	volatile int32_t t47 = 2;

	t47 = (x189<=((x190&x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	int32_t x194 = -1;
	int32_t x195 = -51854;
	int32_t x196 = INT32_MAX;
	int32_t t48 = -52348391;

	t48 = (x193<=((x194&x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x197 = INT16_MIN;
	static int16_t x198 = -1;
	int32_t x200 = -1;

	t49 = (x197<=((x198&x199)<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x202 = 3U;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = -75;

	t50 = (x201<=((x202&x203)<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	volatile int8_t x206 = INT8_MIN;
	int8_t x207 = -1;
	static volatile int32_t t51 = -445246554;

	t51 = (x205<=((x206&x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x210 = UINT32_MAX;
	static int32_t t52 = 606741874;

	t52 = (x209<=((x210&x211)<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 225336981U;
	int64_t x214 = INT64_MIN;
	int64_t x215 = -1235527374LL;
	int32_t t53 = 227;

	t53 = (x213<=((x214&x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	uint32_t x219 = 171473U;
	uint64_t x220 = UINT64_MAX;

	t54 = (x217<=((x218&x219)<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 1513715259826LLU;
	volatile int64_t x222 = 6068722756205LL;
	static int8_t x223 = INT8_MIN;
	volatile int16_t x224 = 201;
	volatile int32_t t55 = -1;

	t55 = (x221<=((x222&x223)<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x226 = 51U;
	uint8_t x227 = 91U;
	int16_t x228 = INT16_MAX;

	t56 = (x225<=((x226&x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 1270354LLU;
	int64_t x230 = INT64_MAX;
	static int64_t x231 = INT64_MIN;
	int8_t x232 = INT8_MAX;

	t57 = (x229<=((x230&x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	uint64_t x235 = 8271096105LLU;
	uint64_t x236 = 14199LLU;
	int32_t t58 = 222926;

	t58 = (x233<=((x234&x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 53U;
	uint16_t x239 = 60U;
	uint32_t x240 = 79371745U;
	volatile int32_t t59 = -2048183;

	t59 = (x237<=((x238&x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = INT64_MIN;
	volatile int16_t x243 = INT16_MAX;
	int32_t x244 = 1349274;
	volatile int32_t t60 = 106765;

	t60 = (x241<=((x242&x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = INT16_MIN;
	uint16_t x247 = 22337U;
	static uint64_t x248 = 36420LLU;
	int32_t t61 = 453;

	t61 = (x245<=((x246&x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -1;
	int8_t x251 = INT8_MAX;
	volatile int16_t x252 = -14;
	volatile int32_t t62 = -513647881;

	t62 = (x249<=((x250&x251)<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int64_t x254 = -6LL;
	int16_t x255 = 0;
	int64_t x256 = INT64_MAX;

	t63 = (x253<=((x254&x255)<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = 676396313569LL;
	int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MAX;
	volatile int32_t t64 = 31489;

	t64 = (x257<=((x258&x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = 2;
	volatile uint8_t x263 = 2U;
	volatile uint16_t x264 = 4228U;
	volatile int32_t t65 = -709;

	t65 = (x261<=((x262&x263)<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x265 = 599U;
	int32_t x266 = INT32_MIN;
	static int32_t x267 = -824;
	static uint16_t x268 = 1U;

	t66 = (x265<=((x266&x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1808;
	static int8_t x270 = -1;
	int64_t x272 = -5908738994LL;
	volatile int32_t t67 = 1973010;

	t67 = (x269<=((x270&x271)<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MAX;
	int8_t x275 = -1;
	int8_t x276 = -1;

	t68 = (x273<=((x274&x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MIN;
	static volatile int64_t x278 = 80839618851237LL;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t69 = 67676;

	t69 = (x277<=((x278&x279)<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	int64_t x282 = -1LL;
	static int64_t x283 = -1LL;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t70 = -1621744;

	t70 = (x281<=((x282&x283)<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x285 = 622769560048210LL;
	int32_t x286 = -927;
	static volatile uint8_t x287 = 5U;
	volatile int16_t x288 = INT16_MIN;

	t71 = (x285<=((x286&x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	static int32_t x290 = -1037054;
	uint16_t x291 = 0U;
	uint32_t x292 = 11317U;
	int32_t t72 = -15563013;

	t72 = (x289<=((x290&x291)<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x293 = UINT32_MAX;
	static uint8_t x294 = 2U;
	int32_t x295 = INT32_MIN;
	volatile int32_t t73 = -5332;

	t73 = (x293<=((x294&x295)<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MAX;
	int16_t x298 = INT16_MIN;
	uint16_t x299 = UINT16_MAX;
	int64_t x300 = -1LL;
	volatile int32_t t74 = 3;

	t74 = (x297<=((x298&x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 779785523U;
	int16_t x302 = INT16_MIN;
	static int16_t x303 = INT16_MIN;
	int32_t x304 = -1;

	t75 = (x301<=((x302&x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 11U;
	volatile int64_t x307 = -1LL;
	int32_t x308 = 11;

	t76 = (x305<=((x306&x307)<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x311 = INT8_MIN;
	volatile int16_t x312 = -3586;
	static int32_t t77 = -60138;

	t77 = (x309<=((x310&x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = UINT64_MAX;
	volatile int32_t t78 = -46;

	t78 = (x313<=((x314&x315)<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = INT64_MAX;
	volatile int8_t x319 = -1;
	volatile uint8_t x320 = 2U;

	t79 = (x317<=((x318&x319)<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x322 = 16792663U;
	int32_t x323 = INT32_MIN;
	uint16_t x324 = UINT16_MAX;

	t80 = (x321<=((x322&x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	uint32_t x326 = 1323012040U;
	int64_t x328 = 13LL;
	static volatile int32_t t81 = -202;

	t81 = (x325<=((x326&x327)<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MAX;
	uint32_t x332 = UINT32_MAX;
	volatile int32_t t82 = 149;

	t82 = (x329<=((x330&x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	int32_t x335 = 33;
	static int32_t x336 = -234510;

	t83 = (x333<=((x334&x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	int64_t x338 = 48204797768946802LL;
	int32_t x339 = 659;
	static volatile int16_t x340 = 924;

	t84 = (x337<=((x338&x339)<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = -38057484LL;
	int32_t x342 = -19919;
	int32_t x344 = -1;
	volatile int32_t t85 = 233384543;

	t85 = (x341<=((x342&x343)<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	volatile int16_t x346 = INT16_MIN;
	static int8_t x347 = INT8_MIN;
	volatile int8_t x348 = -1;
	int32_t t86 = -1;

	t86 = (x345<=((x346&x347)<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = INT64_MIN;
	volatile int32_t x352 = -12983;
	int32_t t87 = -1043133890;

	t87 = (x349<=((x350&x351)<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MAX;
	static int8_t x354 = INT8_MIN;
	uint16_t x355 = 3U;
	int16_t x356 = INT16_MIN;
	int32_t t88 = -2;

	t88 = (x353<=((x354&x355)<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = -22440;
	static int64_t x359 = -168067136712575647LL;
	int32_t x360 = -1;

	t89 = (x357<=((x358&x359)<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 37LLU;
	int8_t x362 = 7;
	static uint8_t x363 = UINT8_MAX;
	int64_t x364 = -1LL;
	int32_t t90 = 14586736;

	t90 = (x361<=((x362&x363)<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MIN;
	int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MAX;

	t91 = (x365<=((x366&x367)<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	uint32_t x370 = 545U;
	volatile int64_t x371 = INT64_MIN;
	int32_t t92 = 120;

	t92 = (x369<=((x370&x371)<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	uint16_t x374 = 29U;
	uint32_t x375 = UINT32_MAX;
	int64_t x376 = INT64_MAX;
	int32_t t93 = 1;

	t93 = (x373<=((x374&x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	static int32_t x378 = -172233575;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = 21U;
	int32_t t94 = -223383660;

	t94 = (x377<=((x378&x379)<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = INT32_MIN;
	static int8_t x384 = 1;
	static int32_t t95 = 3;

	t95 = (x381<=((x382&x383)<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 0LL;
	int8_t x387 = -1;
	static int64_t x388 = -1LL;

	t96 = (x385<=((x386&x387)<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -1;
	volatile int8_t x390 = -1;
	int64_t x392 = 26487730664416LL;
	int32_t t97 = -1059363940;

	t97 = (x389<=((x390&x391)<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 4088073932863LLU;
	int64_t x394 = -410001LL;
	int8_t x395 = -1;
	int32_t x396 = -1;
	static volatile int32_t t98 = -2041056;

	t98 = (x393<=((x394&x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 0U;
	int32_t x398 = INT32_MIN;
	static volatile uint32_t x399 = 296U;
	uint16_t x400 = 0U;
	volatile int32_t t99 = 1254;

	t99 = (x397<=((x398&x399)<=x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

