#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
static int32_t x2 = -1;
uint8_t x8 = UINT8_MAX;
int16_t x10 = INT16_MAX;
int64_t x12 = 17605029649467LL;
static int8_t x18 = -1;
volatile int32_t x21 = INT32_MIN;
static volatile int32_t t5 = INT32_MIN;
uint64_t x27 = 96231300620203748LLU;
volatile int32_t t6 = -5591;
volatile uint64_t x34 = UINT64_MAX;
int64_t x43 = -519783994016449LL;
static volatile int64_t t10 = INT64_MIN;
int8_t x51 = -2;
uint32_t x63 = 1U;
static int16_t x64 = INT16_MIN;
uint16_t x68 = UINT16_MAX;
int32_t x74 = -1;
int64_t t20 = 525383720589182LL;
int64_t x87 = -1LL;
static int64_t x92 = -337913LL;
static int32_t x101 = INT32_MIN;
int8_t x104 = INT8_MIN;
static volatile int32_t x109 = -1;
uint32_t x125 = UINT32_MAX;
int16_t x130 = -1;
uint32_t x132 = UINT32_MAX;
static volatile uint32_t t32 = 29179U;
static int64_t x135 = INT64_MIN;
volatile int64_t t34 = -878709198702LL;
uint16_t x146 = UINT16_MAX;
int32_t t36 = 1510598;
int32_t t37 = 2628776;
uint8_t x153 = 40U;
int64_t x155 = INT64_MIN;
volatile int32_t t39 = -320228226;
int32_t x172 = -163244;
uint32_t x176 = UINT32_MAX;
int16_t x190 = INT16_MIN;
int32_t t47 = -85;
volatile int32_t x194 = 239;
int8_t x196 = INT8_MIN;
uint32_t x201 = UINT32_MAX;
static int8_t x204 = INT8_MIN;
int16_t x206 = 3;
volatile int32_t t51 = -7;
int64_t x213 = -7754LL;
static int32_t x220 = INT32_MIN;
int8_t x223 = 0;
volatile uint8_t x224 = UINT8_MAX;
volatile int32_t x232 = -1;
static volatile uint64_t x238 = UINT64_MAX;
int32_t x240 = INT32_MIN;
static volatile uint8_t x244 = 7U;
int32_t t60 = 3;
uint8_t x247 = 7U;
uint8_t x269 = UINT8_MAX;
volatile int8_t x270 = -9;
int32_t t66 = -38577954;
int8_t x273 = 33;
static int64_t x274 = INT64_MAX;
int64_t x280 = 5LL;
static uint64_t x281 = 8328624LLU;
int32_t x287 = INT32_MAX;
uint64_t t71 = UINT64_MAX;
int16_t x297 = INT16_MAX;
int16_t x300 = INT16_MAX;
int64_t t74 = -1LL;
int32_t x313 = INT32_MAX;
uint64_t x319 = 441700109448765LLU;
int16_t x324 = INT16_MIN;
volatile int32_t t79 = INT32_MIN;
int32_t x330 = INT32_MIN;
volatile uint64_t t81 = 4313680745LLU;
int16_t x333 = INT16_MIN;
volatile int32_t t82 = -7557;
uint32_t x339 = UINT32_MAX;
uint8_t x343 = 1U;
uint16_t x344 = 171U;
static volatile int32_t t84 = -13;
uint64_t x345 = UINT64_MAX;
uint64_t t85 = 1818765682889336LLU;
int16_t x352 = -8049;
int16_t x354 = INT16_MIN;
int32_t x361 = -1;
int16_t x369 = -3;
volatile int8_t x370 = INT8_MIN;
uint16_t x371 = 6847U;
static int32_t x377 = -1;
uint16_t x378 = 14387U;
int16_t x380 = 1;
volatile int8_t x385 = -8;
uint16_t x390 = 18U;
static int8_t x391 = INT8_MAX;
int64_t t97 = 24296LL;
static int64_t x400 = INT64_MIN;
volatile int32_t x404 = INT32_MAX;
volatile int32_t t99 = -37750238;


void f0(void) {
	volatile uint32_t x3 = UINT32_MAX;
	volatile int64_t x4 = -1LL;
	int64_t t0 = 5182LL;

	t0 = (x1+((x2<=x3)&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int16_t x6 = INT16_MAX;
	volatile int8_t x7 = 3;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5+((x6<=x7)&x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	volatile int64_t x11 = INT64_MAX;
	volatile int64_t t2 = 2101964734928096874LL;

	t2 = (x9+((x10<=x11)&x12));

	if (t2 != 256LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -2033;
	static uint16_t x14 = 1403U;
	int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MIN;
	static int32_t t3 = -48809;

	t3 = (x13+((x14<=x15)&x16));

	if (t3 != -2033) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 95U;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = -1;
	int32_t t4 = -169047750;

	t4 = (x17+((x18<=x19)&x20));

	if (t4 != 96) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MAX;
	int8_t x23 = -1;
	static volatile int8_t x24 = INT8_MIN;

	t5 = (x21+((x22<=x23)&x24));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -22;
	uint8_t x26 = 3U;
	int8_t x28 = -1;

	t6 = (x25+((x26<=x27)&x28));

	if (t6 != -21) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int16_t x30 = 1540;
	volatile int64_t x31 = 1574563780456LL;
	volatile uint16_t x32 = 0U;
	int64_t t7 = INT64_MIN;

	t7 = (x29+((x30<=x31)&x32));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int32_t x35 = 36169243;
	uint8_t x36 = 0U;
	uint64_t t8 = UINT64_MAX;

	t8 = (x33+((x34<=x35)&x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int64_t x38 = INT64_MAX;
	uint32_t x39 = 178307U;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -1;

	t9 = (x37+((x38<=x39)&x40));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	uint32_t x42 = 234U;
	int32_t x44 = INT32_MIN;

	t10 = (x41+((x42<=x43)&x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint64_t x46 = 6446556270182292LLU;
	int8_t x47 = 1;
	static int32_t x48 = INT32_MAX;
	static int32_t t11 = INT32_MIN;

	t11 = (x45+((x46<=x47)&x48));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = UINT64_MAX;
	int16_t x50 = INT16_MAX;
	int16_t x52 = INT16_MIN;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x49+((x50<=x51)&x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 88;
	volatile int8_t x54 = -1;
	int32_t x55 = -12707720;
	int64_t x56 = -30162LL;
	volatile int64_t t13 = -430810488721LL;

	t13 = (x53+((x54<=x55)&x56));

	if (t13 != 88LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = UINT16_MAX;
	volatile int8_t x58 = INT8_MIN;
	volatile uint8_t x59 = 1U;
	uint16_t x60 = 1U;
	volatile int32_t t14 = 1591473;

	t14 = (x57+((x58<=x59)&x60));

	if (t14 != 65536) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int32_t x62 = INT32_MAX;
	static volatile int32_t t15 = 7;

	t15 = (x61+((x62<=x63)&x64));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x65 = UINT32_MAX;
	int32_t x66 = INT32_MIN;
	int64_t x67 = 31616LL;
	volatile uint32_t t16 = 0U;

	t16 = (x65+((x66<=x67)&x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -74434;
	static volatile int64_t x70 = -1LL;
	static uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = -129953227090LL;

	t17 = (x69+((x70<=x71)&x72));

	if (t17 != -74434LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int32_t x75 = -1;
	int64_t x76 = INT64_MIN;
	int64_t t18 = -141346157965LL;

	t18 = (x73+((x74<=x75)&x76));

	if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = -1LL;
	static volatile uint32_t x79 = 1468264U;
	static int32_t x80 = 52435;
	volatile int64_t t19 = 48062049LL;

	t19 = (x77+((x78<=x79)&x80));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int64_t x82 = INT64_MIN;
	uint64_t x83 = UINT64_MAX;
	int64_t x84 = INT64_MAX;

	t20 = (x81+((x82<=x83)&x84));

	if (t20 != 32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	volatile uint64_t x86 = UINT64_MAX;
	int16_t x88 = 1;
	int64_t t21 = -32044195709LL;

	t21 = (x85+((x86<=x87)&x88));

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = -7LL;
	int8_t x91 = -1;
	volatile int64_t t22 = 466312LL;

	t22 = (x89+((x90<=x91)&x92));

	if (t22 != -127LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int16_t x94 = 2006;
	static uint64_t x95 = 524416909497927LLU;
	static int8_t x96 = INT8_MIN;
	int32_t t23 = 0;

	t23 = (x93+((x94<=x95)&x96));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	int64_t x98 = INT64_MIN;
	int8_t x99 = 2;
	int16_t x100 = INT16_MAX;
	volatile int32_t t24 = -1;

	t24 = (x97+((x98<=x99)&x100));

	if (t24 != 128) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MAX;
	static volatile int32_t t25 = INT32_MIN;

	t25 = (x101+((x102<=x103)&x104));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	static volatile uint64_t x106 = UINT64_MAX;
	uint16_t x107 = 10370U;
	int64_t x108 = -2LL;
	volatile int64_t t26 = -334996LL;

	t26 = (x105+((x106<=x107)&x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 0U;
	uint16_t x111 = 23462U;
	int8_t x112 = -54;
	volatile int32_t t27 = 28875489;

	t27 = (x109+((x110<=x111)&x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 39U;
	int32_t x114 = 126217233;
	uint64_t x115 = UINT64_MAX;
	int64_t x116 = INT64_MIN;
	volatile int64_t t28 = 455670LL;

	t28 = (x113+((x114<=x115)&x116));

	if (t28 != 39LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	static uint16_t x118 = 476U;
	int32_t x119 = INT32_MIN;
	volatile int32_t x120 = -273608;
	int32_t t29 = -220420364;

	t29 = (x117+((x118<=x119)&x120));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MIN;
	int16_t x122 = -1;
	static volatile int32_t x123 = -11232;
	int8_t x124 = -1;
	int32_t t30 = 2;

	t30 = (x121+((x122<=x123)&x124));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -1;
	volatile int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = (x125+((x126<=x127)&x128));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 0U;
	int8_t x131 = INT8_MAX;

	t32 = (x129+((x130<=x131)&x132));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	static uint64_t x134 = 4344686LLU;
	volatile int64_t x136 = -41168437270050933LL;
	int64_t t33 = 358965359443LL;

	t33 = (x133+((x134<=x135)&x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -66507LL;
	uint32_t x138 = 600828723U;
	int32_t x139 = INT32_MAX;
	uint8_t x140 = 1U;

	t34 = (x137+((x138<=x139)&x140));

	if (t34 != -66506LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 217038;
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	static int64_t x144 = -977646051791207162LL;
	volatile int64_t t35 = -3056645LL;

	t35 = (x141+((x142<=x143)&x144));

	if (t35 != 217038LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	volatile int32_t x147 = -1;
	volatile int32_t x148 = 217036;

	t36 = (x145+((x146<=x147)&x148));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int8_t x150 = INT8_MIN;
	uint64_t x151 = 16266LLU;
	int32_t x152 = 1458;

	t37 = (x149+((x150<=x151)&x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = 28862LLU;
	volatile int16_t x156 = INT16_MIN;
	int32_t t38 = 114;

	t38 = (x153+((x154<=x155)&x156));

	if (t38 != 40) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x157 = INT16_MIN;
	static volatile int8_t x158 = INT8_MIN;
	uint32_t x159 = UINT32_MAX;
	int16_t x160 = INT16_MIN;

	t39 = (x157+((x158<=x159)&x160));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = 375U;
	int8_t x162 = 58;
	volatile uint16_t x163 = UINT16_MAX;
	int32_t x164 = -1;
	volatile uint32_t t40 = 1142018U;

	t40 = (x161+((x162<=x163)&x164));

	if (t40 != 376U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x166 = -1LL;
	uint32_t x167 = 3U;
	static uint32_t x168 = 7265U;
	volatile uint32_t t41 = 58186U;

	t41 = (x165+((x166<=x167)&x168));

	if (t41 != 65536U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	uint64_t x170 = 52963LLU;
	int32_t x171 = 427856255;
	volatile int32_t t42 = 46758036;

	t42 = (x169+((x170<=x171)&x172));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = 7U;
	uint64_t x174 = UINT64_MAX;
	int64_t x175 = INT64_MIN;
	volatile uint32_t t43 = 22506656U;

	t43 = (x173+((x174<=x175)&x176));

	if (t43 != 7U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = 56;
	uint8_t x179 = 1U;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = -44;

	t44 = (x177+((x178<=x179)&x180));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	static volatile uint16_t x182 = 10442U;
	static int64_t x183 = INT64_MIN;
	static uint8_t x184 = 26U;
	int32_t t45 = -629494;

	t45 = (x181+((x182<=x183)&x184));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = 0;
	uint32_t x187 = UINT32_MAX;
	int64_t x188 = INT64_MIN;
	int64_t t46 = -21663LL;

	t46 = (x185+((x186<=x187)&x188));

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -1;
	int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MIN;

	t47 = (x189+((x190<=x191)&x192));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -210;
	volatile int8_t x195 = INT8_MIN;
	static volatile int32_t t48 = 123337192;

	t48 = (x193+((x194<=x195)&x196));

	if (t48 != -210) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 26855843;
	int32_t x198 = -492;
	int16_t x199 = -1;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 0;

	t49 = (x197+((x198<=x199)&x200));

	if (t49 != 26855843) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MIN;
	static volatile int16_t x203 = 27;
	uint32_t t50 = UINT32_MAX;

	t50 = (x201+((x202<=x203)&x204));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 174U;
	int32_t x207 = INT32_MIN;
	int16_t x208 = -23;

	t51 = (x205+((x206<=x207)&x208));

	if (t51 != 174) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	int8_t x210 = INT8_MAX;
	int16_t x211 = INT16_MIN;
	static volatile uint64_t x212 = 14647013724621LLU;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x209+((x210<=x211)&x212));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = -1938103;
	volatile uint32_t x215 = 3964548U;
	uint32_t x216 = 147690U;
	static int64_t t53 = 85878LL;

	t53 = (x213+((x214<=x215)&x216));

	if (t53 != -7754LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -7917;
	uint8_t x218 = 18U;
	uint64_t x219 = 123735436365170564LLU;
	int32_t t54 = 9808861;

	t54 = (x217+((x218<=x219)&x220));

	if (t54 != -7917) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 154U;
	int32_t x222 = INT32_MIN;
	uint32_t t55 = 1743127U;

	t55 = (x221+((x222<=x223)&x224));

	if (t55 != 155U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = 380706395460914LLU;
	volatile int8_t x226 = 28;
	volatile int64_t x227 = INT64_MAX;
	int64_t x228 = INT64_MIN;
	uint64_t t56 = 3LLU;

	t56 = (x225+((x226<=x227)&x228));

	if (t56 != 380706395460914LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x229 = INT16_MIN;
	uint8_t x230 = 56U;
	static int32_t x231 = INT32_MAX;
	volatile int32_t t57 = -20991;

	t57 = (x229+((x230<=x231)&x232));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = 7556485;
	int64_t x234 = -29430LL;
	int32_t x235 = INT32_MIN;
	static int32_t x236 = -1;
	volatile int32_t t58 = -272451047;

	t58 = (x233+((x234<=x235)&x236));

	if (t58 != 7556485) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int8_t x239 = 0;
	volatile int32_t t59 = 329785;

	t59 = (x237+((x238<=x239)&x240));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MAX;
	int32_t x242 = INT32_MIN;
	int8_t x243 = -1;

	t60 = (x241+((x242<=x243)&x244));

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 2U;
	static uint64_t x246 = 4902492959878LLU;
	uint32_t x248 = UINT32_MAX;
	uint32_t t61 = 10428U;

	t61 = (x245+((x246<=x247)&x248));

	if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x253 = INT64_MIN;
	int32_t x254 = -25299;
	volatile int32_t x255 = INT32_MIN;
	static int64_t x256 = INT64_MAX;
	int64_t t62 = INT64_MIN;

	t62 = (x253+((x254<=x255)&x256));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = -1LL;
	int32_t x258 = 23334;
	int32_t x259 = INT32_MAX;
	uint8_t x260 = UINT8_MAX;
	int64_t t63 = -55803LL;

	t63 = (x257+((x258<=x259)&x260));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x261 = 14283485U;
	uint16_t x262 = UINT16_MAX;
	int32_t x263 = -122324048;
	static volatile int16_t x264 = INT16_MIN;
	uint32_t t64 = 2935U;

	t64 = (x261+((x262<=x263)&x264));

	if (t64 != 14283485U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = -1LL;
	volatile int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MAX;
	static volatile int16_t x268 = INT16_MAX;
	static int64_t t65 = 6LL;

	t65 = (x265+((x266<=x267)&x268));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x271 = -19;
	int16_t x272 = -1;

	t66 = (x269+((x270<=x271)&x272));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x275 = INT64_MAX;
	int16_t x276 = INT16_MIN;
	volatile int32_t t67 = 12;

	t67 = (x273+((x274<=x275)&x276));

	if (t67 != 33) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = 1331;
	int32_t x279 = INT32_MIN;
	int64_t t68 = -49505579144LL;

	t68 = (x277+((x278<=x279)&x280));

	if (t68 != -32768LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x282 = -1;
	uint16_t x283 = 467U;
	int64_t x284 = -1LL;
	uint64_t t69 = 5514601LLU;

	t69 = (x281+((x282<=x283)&x284));

	if (t69 != 8328625LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MIN;
	static volatile uint16_t x286 = 251U;
	static int64_t x288 = INT64_MAX;
	volatile int64_t t70 = -36LL;

	t70 = (x285+((x286<=x287)&x288));

	if (t70 != -2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = UINT64_MAX;
	uint32_t x290 = 790125U;
	uint8_t x291 = UINT8_MAX;
	static int8_t x292 = INT8_MIN;

	t71 = (x289+((x290<=x291)&x292));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MIN;
	volatile int8_t x294 = INT8_MAX;
	int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MAX;
	int32_t t72 = 511656866;

	t72 = (x293+((x294<=x295)&x296));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x298 = INT8_MIN;
	volatile int16_t x299 = 53;
	volatile int32_t t73 = -1;

	t73 = (x297+((x298<=x299)&x300));

	if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = -1;
	static uint32_t x302 = 2044145682U;
	uint64_t x303 = UINT64_MAX;
	static int64_t x304 = INT64_MIN;

	t74 = (x301+((x302<=x303)&x304));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = -1654;
	int32_t x306 = INT32_MIN;
	volatile uint64_t x307 = 31862021148040783LLU;
	int64_t x308 = INT64_MIN;
	volatile int64_t t75 = -1431776268331038219LL;

	t75 = (x305+((x306<=x307)&x308));

	if (t75 != -1654LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x309 = 1600921920U;
	int8_t x310 = -1;
	uint16_t x311 = 12U;
	volatile int32_t x312 = -1;
	uint32_t t76 = 74U;

	t76 = (x309+((x310<=x311)&x312));

	if (t76 != 1600921921U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x314 = 2U;
	int16_t x315 = INT16_MIN;
	static int8_t x316 = INT8_MIN;
	static int32_t t77 = INT32_MAX;

	t77 = (x313+((x314<=x315)&x316));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = -59;
	static volatile int32_t x318 = INT32_MIN;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t78 = -260009287;

	t78 = (x317+((x318<=x319)&x320));

	if (t78 != -59) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x322 = UINT64_MAX;
	static int64_t x323 = INT64_MAX;

	t79 = (x321+((x322<=x323)&x324));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 4U;
	uint8_t x326 = 123U;
	int32_t x327 = INT32_MIN;
	static uint64_t x328 = 5565584802694081694LLU;
	volatile uint64_t t80 = 22LLU;

	t80 = (x325+((x326<=x327)&x328));

	if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x329 = 1973283985157747LLU;
	uint16_t x331 = UINT16_MAX;
	static volatile int64_t x332 = 375687160LL;

	t81 = (x329+((x330<=x331)&x332));

	if (t81 != 1973283985157747LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x334 = -1LL;
	static int32_t x335 = -1;
	volatile uint8_t x336 = 1U;

	t82 = (x333+((x334<=x335)&x336));

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = 1;
	static int32_t x338 = -1;
	int32_t x340 = -15408267;
	int32_t t83 = 191;

	t83 = (x337+((x338<=x339)&x340));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = -1;
	static int64_t x342 = INT64_MAX;

	t84 = (x341+((x342<=x343)&x344));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x346 = -1LL;
	volatile int64_t x347 = 491279632283989785LL;
	static uint32_t x348 = UINT32_MAX;

	t85 = (x345+((x346<=x347)&x348));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = INT16_MAX;
	static int64_t x350 = -611690980633084LL;
	int8_t x351 = -1;
	static volatile int32_t t86 = -401323;

	t86 = (x349+((x350<=x351)&x352));

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x353 = UINT8_MAX;
	volatile uint16_t x355 = 5U;
	int32_t x356 = -1;
	int32_t t87 = 15135007;

	t87 = (x353+((x354<=x355)&x356));

	if (t87 != 256) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = -62;
	static uint16_t x358 = 1U;
	int16_t x359 = -1;
	uint8_t x360 = 79U;
	int32_t t88 = 951508871;

	t88 = (x357+((x358<=x359)&x360));

	if (t88 != -62) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x362 = -192295430276982LL;
	int64_t x363 = INT64_MAX;
	int64_t x364 = -1106LL;
	int64_t t89 = 4212512358006LL;

	t89 = (x361+((x362<=x363)&x364));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x365 = INT64_MIN;
	int8_t x366 = -25;
	static uint8_t x367 = 2U;
	static int64_t x368 = INT64_MIN;
	int64_t t90 = INT64_MIN;

	t90 = (x365+((x366<=x367)&x368));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x372 = 10U;
	static uint32_t t91 = 21312U;

	t91 = (x369+((x370<=x371)&x372));

	if (t91 != 4294967293U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x373 = INT64_MIN;
	static uint8_t x374 = 59U;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = UINT8_MAX;
	int64_t t92 = INT64_MIN;

	t92 = (x373+((x374<=x375)&x376));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x379 = -1LL;
	volatile int32_t t93 = 846234885;

	t93 = (x377+((x378<=x379)&x380));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x381 = -1;
	static volatile uint8_t x382 = 5U;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = INT64_MIN;
	volatile int64_t t94 = 8581317115LL;

	t94 = (x381+((x382<=x383)&x384));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x386 = UINT16_MAX;
	uint32_t x387 = 1061777041U;
	int16_t x388 = -8;
	int32_t t95 = -29822;

	t95 = (x385+((x386<=x387)&x388));

	if (t95 != -8) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x389 = INT32_MAX;
	int64_t x392 = INT64_MIN;
	static int64_t t96 = -2759078LL;

	t96 = (x389+((x390<=x391)&x392));

	if (t96 != 2147483647LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = -465504614139LL;
	int64_t x394 = 109451478950LL;
	uint64_t x395 = 442849550LLU;
	volatile int64_t x396 = 50LL;

	t97 = (x393+((x394<=x395)&x396));

	if (t97 != -465504614139LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x397 = INT64_MIN;
	uint64_t x398 = UINT64_MAX;
	static int8_t x399 = -1;
	volatile int64_t t98 = INT64_MIN;

	t98 = (x397+((x398<=x399)&x400));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x401 = UINT8_MAX;
	int16_t x402 = INT16_MIN;
	int64_t x403 = INT64_MIN;

	t99 = (x401+((x402<=x403)&x404));

	if (t99 != 255) { NG(); } else { ; }
	
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
