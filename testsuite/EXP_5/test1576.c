#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = INT32_MAX;
static int32_t x8 = 9086;
uint64_t t1 = 2904LLU;
static int16_t x19 = INT16_MIN;
int8_t x23 = 8;
uint16_t x26 = UINT16_MAX;
int64_t x27 = 257506214928836116LL;
int64_t x31 = 2673LL;
static int32_t x32 = -7;
static int16_t x34 = 0;
volatile int64_t x47 = 13LL;
int32_t t12 = INT32_MIN;
int8_t x59 = -1;
int16_t x65 = INT16_MAX;
int32_t x67 = INT32_MAX;
static uint8_t x73 = UINT8_MAX;
int64_t x79 = -1LL;
int8_t x82 = 15;
int64_t x84 = INT64_MIN;
static volatile int16_t x88 = -1;
int64_t x93 = INT64_MIN;
int32_t x95 = INT32_MIN;
uint16_t x96 = 6U;
int16_t x97 = 1;
volatile int64_t t24 = -819LL;
int64_t x110 = INT64_MIN;
int64_t x112 = -1LL;
int8_t x115 = INT8_MIN;
int16_t x120 = INT16_MAX;
int32_t x124 = 39338747;
static int32_t t29 = INT32_MIN;
int64_t x132 = -8336167729LL;
volatile int64_t t31 = 229776714LL;
int16_t x139 = -70;
volatile int32_t x146 = INT32_MIN;
int64_t x147 = 6617272LL;
int64_t t34 = -30532176857LL;
volatile int64_t x149 = -39844464LL;
int8_t x150 = INT8_MAX;
uint32_t x155 = 31316U;
static uint8_t x165 = 72U;
uint32_t x168 = 9379242U;
volatile int16_t x169 = INT16_MIN;
volatile int64_t x179 = -14LL;
static int8_t x194 = -2;
uint16_t x197 = UINT16_MAX;
uint64_t x199 = 409129LLU;
static uint8_t x212 = UINT8_MAX;
volatile int64_t t51 = 2805018591183632128LL;
int16_t x218 = 115;
int32_t t52 = -273;
int32_t t53 = 873167663;
int16_t x228 = 948;
volatile uint64_t t55 = 115LLU;
int64_t x235 = INT64_MIN;
static volatile uint32_t x244 = 64373U;
uint8_t x247 = UINT8_MAX;
int32_t x248 = -54;
int32_t t59 = 5162843;
int16_t x250 = INT16_MIN;
int16_t x252 = INT16_MIN;
volatile int32_t t60 = -20425539;
uint32_t t61 = 23U;
static uint32_t t63 = 875U;
volatile uint32_t t65 = 708U;
static volatile int8_t x275 = INT8_MIN;
volatile int8_t x278 = INT8_MAX;
static int64_t x283 = INT64_MIN;
int16_t x291 = -1;
int64_t x301 = INT64_MAX;
volatile uint16_t x304 = 312U;
uint64_t x309 = UINT64_MAX;
int8_t x315 = -1;
volatile int32_t x320 = INT32_MIN;
volatile int64_t x322 = 181144811371LL;
int16_t x326 = INT16_MIN;
static volatile int16_t x338 = INT16_MIN;
int64_t x340 = -1LL;
uint16_t x343 = 3757U;
static volatile int32_t t83 = 6349554;
int16_t x348 = -25;
volatile int64_t x352 = INT64_MIN;
uint32_t t86 = 51U;
int8_t x359 = 0;
uint8_t x363 = UINT8_MAX;
volatile int8_t x364 = -6;
static int32_t t92 = 478505120;
static int16_t x383 = INT16_MAX;
uint8_t x389 = 4U;
int64_t x390 = INT64_MIN;
int32_t t95 = 11901096;
int8_t x401 = INT8_MAX;
int16_t x403 = -24;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int64_t x3 = 3LL;
	static volatile int32_t x4 = -9834503;
	static int32_t t0 = -5;

	t0 = (x1*((x2<=x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	static volatile uint16_t x6 = UINT16_MAX;
	int8_t x7 = -1;

	t1 = (x5*((x6<=x7)%x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 1180U;
	int64_t x10 = 1370950665917803723LL;
	volatile int64_t x11 = -1002883563883639407LL;
	uint32_t x12 = 595U;
	uint32_t t2 = 30U;

	t2 = (x9*((x10<=x11)%x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	static int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MAX;
	static int16_t x16 = -1;
	static int32_t t3 = -10;

	t3 = (x13*((x14<=x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int8_t x18 = INT8_MIN;
	static int32_t x20 = INT32_MAX;
	int32_t t4 = -39;

	t4 = (x17*((x18<=x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	int8_t x22 = -1;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = 1;

	t5 = (x21*((x22<=x23)%x24));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	int16_t x28 = INT16_MIN;
	uint32_t t6 = UINT32_MAX;

	t6 = (x25*((x26<=x27)%x28));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	uint8_t x30 = 1U;
	volatile int64_t t7 = -2474389493983649LL;

	t7 = (x29*((x30<=x31)%x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x33 = -176155177;
	uint32_t x35 = 134993018U;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = -1;

	t8 = (x33*((x34<=x35)%x36));

	if (t8 != -176155177) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -4;
	static int32_t x38 = INT32_MAX;
	uint8_t x39 = 10U;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -3042301;

	t9 = (x37*((x38<=x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 6673258238209249LLU;
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	static uint8_t x44 = 7U;
	volatile uint64_t t10 = 374984930701577765LLU;

	t10 = (x41*((x42<=x43)%x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	uint64_t x46 = UINT64_MAX;
	static uint64_t x48 = 34327LLU;
	volatile uint64_t t11 = 272378692LLU;

	t11 = (x45*((x46<=x47)%x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MIN;
	uint8_t x51 = 30U;
	volatile int8_t x52 = 2;

	t12 = (x49*((x50<=x51)%x52));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x57 = UINT32_MAX;
	int16_t x58 = INT16_MAX;
	int32_t x60 = INT32_MIN;
	volatile uint32_t t13 = 1U;

	t13 = (x57*((x58<=x59)%x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MIN;
	volatile int16_t x62 = INT16_MAX;
	int32_t x63 = 871066;
	static int8_t x64 = INT8_MIN;
	static volatile int64_t t14 = INT64_MIN;

	t14 = (x61*((x62<=x63)%x64));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = 304037;
	static volatile int16_t x68 = -1;
	static int32_t t15 = 87414;

	t15 = (x65*((x66<=x67)%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = 62155848LL;
	static int16_t x70 = -1954;
	uint64_t x71 = 2566033272632154964LLU;
	int16_t x72 = 1;
	static volatile int64_t t16 = 6LL;

	t16 = (x69*((x70<=x71)%x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x74 = -1;
	int32_t x75 = -1;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t17 = 279U;

	t17 = (x73*((x74<=x75)%x76));

	if (t17 != 255U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = 1;
	volatile uint32_t x78 = 1999520U;
	int64_t x80 = -1LL;
	int64_t t18 = 1792LL;

	t18 = (x77*((x78<=x79)%x80));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 3U;
	volatile int64_t x83 = INT64_MAX;
	volatile int64_t t19 = -108783484102LL;

	t19 = (x81*((x82<=x83)%x84));

	if (t19 != 3LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 3U;
	uint8_t x86 = UINT8_MAX;
	int32_t x87 = INT32_MIN;
	uint32_t t20 = 12774U;

	t20 = (x85*((x86<=x87)%x88));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MIN;
	uint32_t x90 = 373U;
	int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MIN;
	static int64_t t21 = INT64_MIN;

	t21 = (x89*((x90<=x91)%x92));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x94 = UINT64_MAX;
	int64_t t22 = 2620099612LL;

	t22 = (x93*((x94<=x95)%x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x98 = 76U;
	static int16_t x99 = 19;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t23 = 188;

	t23 = (x97*((x98<=x99)%x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = INT16_MIN;
	int16_t x102 = -1;
	static int16_t x103 = -521;
	static int64_t x104 = INT64_MIN;

	t24 = (x101*((x102<=x103)%x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -29;
	volatile int16_t x106 = INT16_MIN;
	int32_t x107 = -1022457;
	uint32_t x108 = UINT32_MAX;
	static volatile uint32_t t25 = 517537509U;

	t25 = (x105*((x106<=x107)%x108));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 7U;
	static volatile uint32_t x111 = 8U;
	int64_t t26 = -707136691LL;

	t26 = (x109*((x110<=x111)%x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = -1;
	static int16_t x114 = 259;
	int64_t x116 = INT64_MAX;
	int64_t t27 = -267052737915LL;

	t27 = (x113*((x114<=x115)%x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -1;
	volatile int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	int32_t t28 = -494706014;

	t28 = (x117*((x118<=x119)%x120));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = -2;
	uint16_t x123 = 5501U;

	t29 = (x121*((x122<=x123)%x124));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -1;
	int64_t x126 = INT64_MIN;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = -68442567LL;
	int64_t t30 = 2270206750155639415LL;

	t30 = (x125*((x126<=x127)%x128));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 45;
	int8_t x130 = INT8_MAX;
	int8_t x131 = -1;

	t31 = (x129*((x130<=x131)%x132));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x133 = 20U;
	int32_t x134 = 5870;
	static int16_t x135 = -1;
	int16_t x136 = INT16_MIN;
	volatile int32_t t32 = -1;

	t32 = (x133*((x134<=x135)%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x137 = -1;
	volatile int64_t x138 = 1313113844LL;
	int8_t x140 = INT8_MIN;
	static int32_t t33 = -11;

	t33 = (x137*((x138<=x139)%x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = 12725LL;
	int64_t x148 = 2430322217412LL;

	t34 = (x145*((x146<=x147)%x148));

	if (t34 != 12725LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x151 = 7U;
	int8_t x152 = 1;
	int64_t t35 = 119835519823LL;

	t35 = (x149*((x150<=x151)%x152));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = UINT32_MAX;
	static int32_t x154 = INT32_MAX;
	int32_t x156 = INT32_MIN;
	static volatile uint32_t t36 = 2027380U;

	t36 = (x153*((x154<=x155)%x156));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = -1;
	int32_t x158 = -1;
	int32_t x159 = 1;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x157*((x158<=x159)%x160));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	uint64_t x163 = 1865661861LLU;
	volatile int64_t x164 = -6190266587058279LL;
	volatile uint64_t t38 = 1988705837247751LLU;

	t38 = (x161*((x162<=x163)%x164));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x166 = UINT8_MAX;
	int32_t x167 = INT32_MIN;
	uint32_t t39 = 1413922U;

	t39 = (x165*((x166<=x167)%x168));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x170 = 32U;
	int16_t x171 = -1;
	static uint64_t x172 = UINT64_MAX;
	uint64_t t40 = 3717498200034853LLU;

	t40 = (x169*((x170<=x171)%x172));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x173 = -895;
	static uint64_t x174 = UINT64_MAX;
	int64_t x175 = INT64_MIN;
	int8_t x176 = INT8_MAX;
	static volatile int32_t t41 = -81;

	t41 = (x173*((x174<=x175)%x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x177 = 20489LLU;
	uint8_t x178 = 56U;
	int64_t x180 = INT64_MIN;
	volatile uint64_t t42 = 124701LLU;

	t42 = (x177*((x178<=x179)%x180));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x181 = INT32_MIN;
	int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MAX;
	static uint32_t x184 = UINT32_MAX;
	uint32_t t43 = 385575U;

	t43 = (x181*((x182<=x183)%x184));

	if (t43 != 2147483648U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = UINT16_MAX;
	volatile uint64_t x186 = UINT64_MAX;
	static volatile int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MAX;
	static int64_t t44 = -898528509735346431LL;

	t44 = (x185*((x186<=x187)%x188));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = 3436LL;
	int32_t x190 = INT32_MIN;
	int64_t x191 = -1LL;
	int8_t x192 = INT8_MIN;
	static int64_t t45 = 3208127179LL;

	t45 = (x189*((x190<=x191)%x192));

	if (t45 != 3436LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x193 = INT32_MAX;
	int32_t x195 = -1;
	uint32_t x196 = UINT32_MAX;
	static uint32_t t46 = 737759309U;

	t46 = (x193*((x194<=x195)%x196));

	if (t46 != 2147483647U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x198 = 63;
	volatile int16_t x200 = INT16_MIN;
	int32_t t47 = 1624;

	t47 = (x197*((x198<=x199)%x200));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x201 = INT32_MAX;
	int32_t x202 = INT32_MIN;
	int16_t x203 = -956;
	int32_t x204 = -1;
	volatile int32_t t48 = 177828906;

	t48 = (x201*((x202<=x203)%x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -1;
	int16_t x206 = -1;
	int32_t x207 = -100;
	static volatile uint8_t x208 = 2U;
	volatile int32_t t49 = 4;

	t49 = (x205*((x206<=x207)%x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x209 = -1;
	int64_t x210 = INT64_MIN;
	static volatile int32_t x211 = 316613687;
	static volatile int32_t t50 = 1896237;

	t50 = (x209*((x210<=x211)%x212));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = -102348;
	uint8_t x214 = 14U;
	static volatile uint64_t x215 = UINT64_MAX;
	int64_t x216 = -1LL;

	t51 = (x213*((x214<=x215)%x216));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = 45U;
	uint32_t x219 = UINT32_MAX;
	int8_t x220 = INT8_MAX;

	t52 = (x217*((x218<=x219)%x220));

	if (t52 != 45) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = 15557U;
	uint8_t x222 = 0U;
	int16_t x223 = INT16_MIN;
	volatile int8_t x224 = INT8_MIN;

	t53 = (x221*((x222<=x223)%x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x225 = -1;
	static uint16_t x226 = UINT16_MAX;
	uint32_t x227 = UINT32_MAX;
	volatile int32_t t54 = 118;

	t54 = (x225*((x226<=x227)%x228));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x229 = 847149406597LLU;
	int16_t x230 = INT16_MIN;
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = -1LL;

	t55 = (x229*((x230<=x231)%x232));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x233 = 6777895085069830LLU;
	volatile int32_t x234 = INT32_MIN;
	int32_t x236 = INT32_MIN;
	uint64_t t56 = 856500LLU;

	t56 = (x233*((x234<=x235)%x236));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 79U;
	static int32_t x238 = INT32_MIN;
	int64_t x239 = -1LL;
	int16_t x240 = INT16_MAX;
	int32_t t57 = -30586;

	t57 = (x237*((x238<=x239)%x240));

	if (t57 != 79) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x241 = UINT16_MAX;
	int32_t x242 = INT32_MAX;
	volatile int16_t x243 = INT16_MIN;
	uint32_t t58 = 493195U;

	t58 = (x241*((x242<=x243)%x244));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -1;
	static int16_t x246 = -1;

	t59 = (x245*((x246<=x247)%x248));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 4633U;
	int32_t x251 = INT32_MIN;

	t60 = (x249*((x250<=x251)%x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 23U;
	static uint32_t x254 = 187U;
	int64_t x255 = -13LL;
	volatile uint32_t x256 = 512064U;

	t61 = (x253*((x254<=x255)%x256));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = 853U;
	volatile int64_t x258 = INT64_MAX;
	volatile int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;
	volatile int32_t t62 = -128;

	t62 = (x257*((x258<=x259)%x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = UINT32_MAX;
	static uint16_t x262 = 2618U;
	int16_t x263 = 1871;
	volatile int16_t x264 = INT16_MIN;

	t63 = (x261*((x262<=x263)%x264));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int16_t x266 = INT16_MAX;
	int32_t x267 = 24474517;
	int64_t x268 = INT64_MIN;
	volatile int64_t t64 = -530263514431964LL;

	t64 = (x265*((x266<=x267)%x268));

	if (t64 != 65535LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x269 = INT32_MAX;
	int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MIN;
	uint32_t x272 = 318074234U;

	t65 = (x269*((x270<=x271)%x272));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = -2;
	static int8_t x274 = -10;
	uint16_t x276 = 2U;
	volatile int32_t t66 = 11;

	t66 = (x273*((x274<=x275)%x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x277 = 5U;
	int16_t x279 = 51;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t67 = 6;

	t67 = (x277*((x278<=x279)%x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = 13;
	volatile int16_t x282 = 53;
	static int32_t x284 = -167545;
	int32_t t68 = -673462268;

	t68 = (x281*((x282<=x283)%x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x285 = 935107143985227LL;
	int64_t x286 = -3339132233746641LL;
	int16_t x287 = -1;
	int8_t x288 = -1;
	volatile int64_t t69 = 4128971LL;

	t69 = (x285*((x286<=x287)%x288));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -3;
	int8_t x290 = INT8_MAX;
	uint64_t x292 = 117LLU;
	volatile uint64_t t70 = 11641769LLU;

	t70 = (x289*((x290<=x291)%x292));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = -45896LL;
	int64_t x294 = -32712449526931180LL;
	int32_t x295 = INT32_MIN;
	uint64_t x296 = 16018940LLU;
	static volatile uint64_t t71 = 2103201645858472LLU;

	t71 = (x293*((x294<=x295)%x296));

	if (t71 != 18446744073709505720LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x297 = INT32_MAX;
	int64_t x298 = INT64_MIN;
	uint64_t x299 = 167LLU;
	int32_t x300 = INT32_MIN;
	volatile int32_t t72 = 1429072;

	t72 = (x297*((x298<=x299)%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x302 = -6;
	uint64_t x303 = 845345985791LLU;
	volatile int64_t t73 = -227772826LL;

	t73 = (x301*((x302<=x303)%x304));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x305 = 2298339U;
	int16_t x306 = INT16_MAX;
	static int16_t x307 = INT16_MIN;
	static int8_t x308 = INT8_MIN;
	uint32_t t74 = 152U;

	t74 = (x305*((x306<=x307)%x308));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x310 = INT32_MAX;
	int16_t x311 = -11;
	static volatile uint8_t x312 = 18U;
	volatile uint64_t t75 = 2478LLU;

	t75 = (x309*((x310<=x311)%x312));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x313 = 4U;
	int16_t x314 = 4897;
	int8_t x316 = -1;
	volatile int32_t t76 = -22072;

	t76 = (x313*((x314<=x315)%x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MAX;
	uint8_t x319 = 13U;
	volatile int32_t t77 = -47;

	t77 = (x317*((x318<=x319)%x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x321 = 3U;
	int8_t x323 = 3;
	int64_t x324 = INT64_MAX;
	volatile int64_t t78 = 41175121949658LL;

	t78 = (x321*((x322<=x323)%x324));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MAX;
	int64_t x327 = INT64_MIN;
	volatile int8_t x328 = -1;
	int32_t t79 = -24282;

	t79 = (x325*((x326<=x327)%x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x329 = 117U;
	int16_t x330 = -1;
	volatile int8_t x331 = INT8_MAX;
	int8_t x332 = INT8_MAX;
	volatile int32_t t80 = 10535;

	t80 = (x329*((x330<=x331)%x332));

	if (t80 != 117) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x333 = UINT16_MAX;
	int32_t x334 = 105321;
	int64_t x335 = INT64_MIN;
	volatile uint8_t x336 = UINT8_MAX;
	int32_t t81 = -519677;

	t81 = (x333*((x334<=x335)%x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = -1;
	int32_t x339 = INT32_MAX;
	volatile int64_t t82 = -114396LL;

	t82 = (x337*((x338<=x339)%x340));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = 490991834;
	uint16_t x342 = UINT16_MAX;
	int32_t x344 = -1;

	t83 = (x341*((x342<=x343)%x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x345 = 2110787558205529943LLU;
	uint16_t x346 = 1U;
	int32_t x347 = 14043727;
	uint64_t t84 = 57053422LLU;

	t84 = (x345*((x346<=x347)%x348));

	if (t84 != 2110787558205529943LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x349 = 10U;
	static int32_t x350 = -1;
	static uint64_t x351 = 50602LLU;
	int64_t t85 = -264676085592118445LL;

	t85 = (x349*((x350<=x351)%x352));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x353 = 5U;
	int32_t x354 = -751590;
	volatile int32_t x355 = INT32_MAX;
	uint32_t x356 = UINT32_MAX;

	t86 = (x353*((x354<=x355)%x356));

	if (t86 != 5U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x357 = 588901982156300LLU;
	int32_t x358 = INT32_MIN;
	uint16_t x360 = 117U;
	volatile uint64_t t87 = 14986138903LLU;

	t87 = (x357*((x358<=x359)%x360));

	if (t87 != 588901982156300LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x361 = 28964311585978582LLU;
	int32_t x362 = INT32_MAX;
	uint64_t t88 = 27LLU;

	t88 = (x361*((x362<=x363)%x364));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = 1200;
	uint32_t x366 = UINT32_MAX;
	int8_t x367 = INT8_MAX;
	int16_t x368 = INT16_MAX;
	volatile int32_t t89 = -670531299;

	t89 = (x365*((x366<=x367)%x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x369 = INT64_MIN;
	uint64_t x370 = 66011006620053603LLU;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = 34U;
	static volatile int64_t t90 = INT64_MIN;

	t90 = (x369*((x370<=x371)%x372));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x373 = -12;
	int32_t x374 = -61;
	int32_t x375 = INT32_MAX;
	uint8_t x376 = 3U;
	int32_t t91 = -42;

	t91 = (x373*((x374<=x375)%x376));

	if (t91 != -12) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = INT8_MAX;
	volatile int8_t x378 = -1;
	int8_t x379 = INT8_MAX;
	static int32_t x380 = 44022;

	t92 = (x377*((x378<=x379)%x380));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = INT8_MIN;
	volatile int32_t x382 = 968;
	int32_t x384 = 98;
	static volatile int32_t t93 = -3852433;

	t93 = (x381*((x382<=x383)%x384));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MIN;
	uint16_t x386 = 9027U;
	uint16_t x387 = 10U;
	int8_t x388 = -7;
	int32_t t94 = 30;

	t94 = (x385*((x386<=x387)%x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x391 = INT16_MAX;
	static uint8_t x392 = 5U;

	t95 = (x389*((x390<=x391)%x392));

	if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = -11546654300322295LL;
	int16_t x394 = INT16_MIN;
	int8_t x395 = -1;
	int64_t x396 = -1LL;
	volatile int64_t t96 = 1LL;

	t96 = (x393*((x394<=x395)%x396));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x397 = 2;
	static uint16_t x398 = UINT16_MAX;
	int8_t x399 = -2;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t97 = -15427;

	t97 = (x397*((x398<=x399)%x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x402 = -1;
	static volatile int32_t x404 = INT32_MAX;
	int32_t t98 = 3387;

	t98 = (x401*((x402<=x403)%x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x405 = -31;
	int64_t x406 = INT64_MAX;
	volatile uint16_t x407 = 15855U;
	volatile int16_t x408 = -1;
	volatile int32_t t99 = 8226;

	t99 = (x405*((x406<=x407)%x408));

	if (t99 != 0) { NG(); } else { ; }
	
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

