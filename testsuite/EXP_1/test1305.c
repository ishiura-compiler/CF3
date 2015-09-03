#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = 3;
static int64_t x4 = -792553400321928LL;
uint8_t x9 = UINT8_MAX;
static int64_t x11 = INT64_MAX;
volatile int32_t x15 = INT32_MIN;
uint32_t x19 = 240731789U;
uint16_t x20 = UINT16_MAX;
uint16_t x25 = UINT16_MAX;
int32_t x27 = -1;
int32_t x28 = -4;
int8_t x35 = INT8_MIN;
int16_t x38 = INT16_MIN;
int32_t x39 = INT32_MIN;
int32_t t9 = 127;
uint16_t x41 = 22192U;
volatile uint8_t x47 = UINT8_MAX;
volatile uint64_t x53 = 95LLU;
int32_t x54 = INT32_MAX;
volatile int16_t x55 = INT16_MIN;
int64_t t14 = -1LL;
int32_t t15 = -1;
uint64_t x74 = 1861099LLU;
uint32_t x81 = UINT32_MAX;
static uint64_t x86 = 256158050471065946LLU;
volatile int32_t x90 = -1;
static int32_t x92 = INT32_MAX;
volatile int32_t t23 = -1784072;
uint16_t x108 = UINT16_MAX;
int64_t x111 = INT64_MAX;
static int32_t t26 = -17;
static uint16_t x115 = 24520U;
int64_t x116 = INT64_MIN;
static int64_t t27 = 0LL;
int32_t t32 = -3781;
int32_t x140 = INT32_MIN;
static int32_t x148 = INT32_MIN;
volatile uint16_t x149 = 572U;
volatile int64_t x151 = 25846771260878658LL;
static int16_t x153 = INT16_MAX;
int32_t x154 = INT32_MIN;
uint16_t x156 = 276U;
int16_t x161 = INT16_MAX;
static int32_t x162 = INT32_MAX;
volatile int32_t x164 = INT32_MIN;
volatile int32_t t39 = -51;
volatile uint32_t t44 = 4810259U;
int16_t x185 = INT16_MIN;
uint32_t x187 = 6697575U;
int32_t x196 = INT32_MIN;
static uint32_t x203 = 24U;
uint32_t x210 = 5U;
volatile int32_t t51 = -1;
int32_t t52 = 942709590;
uint16_t x219 = 25779U;
volatile uint16_t x220 = UINT16_MAX;
int64_t x222 = INT64_MAX;
volatile uint16_t x224 = 30U;
uint32_t x225 = 1579U;
volatile int64_t t55 = -53215846LL;
uint32_t x229 = 50441583U;
int8_t x232 = INT8_MIN;
uint16_t x233 = UINT16_MAX;
volatile int32_t t58 = -47;
uint16_t x241 = 11U;
int8_t x246 = INT8_MIN;
volatile int64_t x251 = INT64_MIN;
int32_t t61 = 99668809;
volatile int64_t x255 = -124486315138973836LL;
static int64_t x258 = -1LL;
uint64_t x261 = 205568035LLU;
int16_t x264 = -1;
volatile uint64_t x269 = UINT64_MAX;
int64_t x271 = -1LL;
volatile uint16_t x272 = UINT16_MAX;
static int64_t x287 = INT64_MAX;
int8_t x289 = 0;
volatile int64_t t71 = 6510LL;
int16_t x299 = -1;
int32_t t73 = 317298;
volatile int16_t x301 = -1;
volatile uint64_t t74 = 784674538025851LLU;
static int32_t x309 = -1;
static int16_t x314 = INT16_MAX;
static uint64_t x316 = UINT64_MAX;
int8_t x318 = -2;
static uint32_t x321 = UINT32_MAX;
volatile int16_t x332 = INT16_MIN;
static volatile int32_t t81 = 1178458;
uint64_t x335 = 57LLU;
int32_t x336 = -1;
volatile int32_t t83 = -20;
int8_t x345 = -1;
uint8_t x354 = 4U;
static uint16_t x355 = 981U;
static volatile uint16_t x360 = UINT16_MAX;
static int16_t x369 = INT16_MAX;
static int8_t x372 = INT8_MIN;
volatile int32_t t89 = 1508115;
volatile int32_t t90 = 22542;
static int16_t x382 = -1;
uint32_t x385 = 36U;
volatile int32_t x386 = INT32_MIN;
int32_t x396 = INT32_MAX;
static int64_t x398 = -6995670479118570LL;
int8_t x405 = 1;
uint8_t x409 = UINT8_MAX;
int16_t x411 = INT16_MIN;
uint16_t x412 = 1U;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	volatile uint32_t x2 = UINT32_MAX;
	int64_t t0 = 1936LL;

	t0 = (((x1==x2)<=x3)%x4);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int32_t x6 = INT32_MIN;
	volatile int8_t x7 = INT8_MIN;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 3223059;

	t1 = (((x5==x6)<=x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x10 = 58U;
	uint8_t x12 = 1U;
	volatile int32_t t2 = -31;

	t2 = (((x9==x10)<=x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	static volatile int64_t x14 = INT64_MIN;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 1938325352399560319LLU;

	t3 = (((x13==x14)<=x15)%x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 3LLU;
	volatile int8_t x18 = INT8_MAX;
	int32_t t4 = -20;

	t4 = (((x17==x18)<=x19)%x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 2460U;
	static volatile int16_t x22 = INT16_MAX;
	volatile uint32_t x23 = 502730U;
	uint8_t x24 = 4U;
	int32_t t5 = 58389;

	t5 = (((x21==x22)<=x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -5;
	volatile int32_t t6 = -7481781;

	t6 = (((x25==x26)<=x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 467U;
	uint64_t x30 = 621398LLU;
	int8_t x31 = -1;
	static uint32_t x32 = 6372515U;
	static uint32_t t7 = 12079U;

	t7 = (((x29==x30)<=x31)%x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 8U;
	int32_t x34 = -1;
	int32_t x36 = INT32_MIN;
	int32_t t8 = 7746;

	t8 = (((x33==x34)<=x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 42382LLU;
	int16_t x40 = -1;

	t9 = (((x37==x38)<=x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x42 = 4U;
	int8_t x43 = 36;
	int16_t x44 = -806;
	int32_t t10 = 22704;

	t10 = (((x41==x42)<=x43)%x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	int8_t x46 = INT8_MIN;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = 224313;

	t11 = (((x45==x46)<=x47)%x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x50 = 112U;
	uint32_t x51 = 246705U;
	int16_t x52 = -97;
	volatile int32_t t12 = 98845;

	t12 = (((x49==x50)<=x51)%x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x56 = 1U;
	int32_t t13 = 0;

	t13 = (((x53==x54)<=x55)%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MIN;
	int64_t x60 = INT64_MIN;

	t14 = (((x57==x58)<=x59)%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int64_t x62 = 107594464417084910LL;
	static int64_t x63 = 264628LL;
	int8_t x64 = INT8_MAX;

	t15 = (((x61==x62)<=x63)%x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int32_t x66 = -1;
	volatile int16_t x67 = INT16_MIN;
	int16_t x68 = INT16_MAX;
	int32_t t16 = 0;

	t16 = (((x65==x66)<=x67)%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 44U;
	static int16_t x70 = INT16_MIN;
	int16_t x71 = 172;
	int64_t x72 = INT64_MAX;
	int64_t t17 = 22895053738473659LL;

	t17 = (((x69==x70)<=x71)%x72);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1618928;
	int8_t x75 = INT8_MIN;
	volatile int32_t x76 = INT32_MIN;
	int32_t t18 = -9367514;

	t18 = (((x73==x74)<=x75)%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = INT32_MIN;
	uint16_t x83 = UINT16_MAX;
	static uint32_t x84 = 922U;
	volatile uint32_t t19 = 481736U;

	t19 = (((x81==x82)<=x83)%x84);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	static volatile int32_t x87 = -1;
	int16_t x88 = INT16_MIN;
	int32_t t20 = -241674648;

	t20 = (((x85==x86)<=x87)%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = UINT16_MAX;
	volatile uint16_t x91 = 21U;
	volatile int32_t t21 = -645858;

	t21 = (((x89==x90)<=x91)%x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = -1;
	uint64_t x94 = UINT64_MAX;
	static int64_t x95 = INT64_MIN;
	int16_t x96 = INT16_MIN;
	int32_t t22 = -5183838;

	t22 = (((x93==x94)<=x95)%x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	static uint32_t x98 = 18036750U;
	int32_t x99 = INT32_MIN;
	static volatile uint16_t x100 = UINT16_MAX;

	t23 = (((x97==x98)<=x99)%x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MIN;
	volatile int8_t x103 = INT8_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t24 = 18;

	t24 = (((x101==x102)<=x103)%x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MAX;
	int64_t x106 = -1LL;
	int32_t x107 = INT32_MAX;
	volatile int32_t t25 = -1019680;

	t25 = (((x105==x106)<=x107)%x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 9484LLU;
	int64_t x110 = INT64_MAX;
	int8_t x112 = INT8_MAX;

	t26 = (((x109==x110)<=x111)%x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	int32_t x114 = INT32_MIN;

	t27 = (((x113==x114)<=x115)%x116);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 164U;
	static uint16_t x118 = 400U;
	int64_t x119 = -1LL;
	int32_t x120 = INT32_MIN;
	volatile int32_t t28 = -1;

	t28 = (((x117==x118)<=x119)%x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = -1LL;
	int8_t x122 = 0;
	uint8_t x123 = UINT8_MAX;
	int8_t x124 = -1;
	volatile int32_t t29 = -27241190;

	t29 = (((x121==x122)<=x123)%x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -1156LL;
	volatile int16_t x126 = INT16_MIN;
	static uint64_t x127 = 29125844063619LLU;
	static int8_t x128 = INT8_MIN;
	volatile int32_t t30 = 348701;

	t30 = (((x125==x126)<=x127)%x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 43;
	int8_t x130 = -2;
	uint64_t x131 = 437688794124537LLU;
	int16_t x132 = -1;
	static volatile int32_t t31 = 174784281;

	t31 = (((x129==x130)<=x131)%x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -1;
	int32_t x134 = -1;
	static volatile int64_t x135 = -1LL;
	int8_t x136 = -1;

	t32 = (((x133==x134)<=x135)%x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 12607U;
	static uint8_t x138 = UINT8_MAX;
	int8_t x139 = INT8_MAX;
	volatile int32_t t33 = 193409;

	t33 = (((x137==x138)<=x139)%x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MAX;
	volatile int16_t x142 = -1;
	int8_t x143 = INT8_MAX;
	int64_t x144 = -1LL;
	volatile int64_t t34 = 1038722562844LL;

	t34 = (((x141==x142)<=x143)%x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x145 = 9U;
	int8_t x146 = INT8_MIN;
	volatile int8_t x147 = INT8_MAX;
	static int32_t t35 = 533709392;

	t35 = (((x145==x146)<=x147)%x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x150 = INT32_MIN;
	volatile int64_t x152 = INT64_MIN;
	int64_t t36 = 61132099LL;

	t36 = (((x149==x150)<=x151)%x152);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x155 = -178650285059LL;
	static volatile int32_t t37 = -105820;

	t37 = (((x153==x154)<=x155)%x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MIN;
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	int32_t x160 = 13513472;
	int32_t t38 = 1060705503;

	t38 = (((x157==x158)<=x159)%x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x163 = 14LL;

	t39 = (((x161==x162)<=x163)%x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x165 = INT32_MIN;
	uint32_t x166 = 127118U;
	uint64_t x167 = UINT64_MAX;
	int64_t x168 = -1LL;
	volatile int64_t t40 = 1608868509891LL;

	t40 = (((x165==x166)<=x167)%x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MAX;
	int64_t x170 = 61966981086LL;
	int8_t x171 = INT8_MIN;
	uint16_t x172 = 32U;
	volatile int32_t t41 = -8386824;

	t41 = (((x169==x170)<=x171)%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -1810800;
	int16_t x174 = 0;
	int8_t x175 = INT8_MIN;
	volatile uint16_t x176 = 6U;
	int32_t t42 = 55;

	t42 = (((x173==x174)<=x175)%x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -1;
	int32_t x178 = 8379463;
	static uint8_t x179 = 0U;
	static uint16_t x180 = 27858U;
	volatile int32_t t43 = 4993429;

	t43 = (((x177==x178)<=x179)%x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = INT16_MIN;
	uint8_t x183 = UINT8_MAX;
	uint32_t x184 = UINT32_MAX;

	t44 = (((x181==x182)<=x183)%x184);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x186 = -1;
	uint32_t x188 = 981893754U;
	volatile uint32_t t45 = 2697492U;

	t45 = (((x185==x186)<=x187)%x188);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x189 = UINT32_MAX;
	static int8_t x190 = -1;
	static int16_t x191 = INT16_MIN;
	int64_t x192 = -280874455152726525LL;
	int64_t t46 = 30670463084LL;

	t46 = (((x189==x190)<=x191)%x192);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x193 = -1;
	uint8_t x194 = 1U;
	uint16_t x195 = 26U;
	int32_t t47 = -247537269;

	t47 = (((x193==x194)<=x195)%x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x197 = 129834U;
	uint8_t x198 = UINT8_MAX;
	int32_t x199 = INT32_MAX;
	volatile int64_t x200 = 48380377405842LL;
	volatile int64_t t48 = -25408070603947792LL;

	t48 = (((x197==x198)<=x199)%x200);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x201 = INT8_MIN;
	uint64_t x202 = UINT64_MAX;
	int8_t x204 = -1;
	int32_t t49 = -8614;

	t49 = (((x201==x202)<=x203)%x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = 3222;
	int32_t x206 = 11089620;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = 20U;
	volatile int32_t t50 = 176;

	t50 = (((x205==x206)<=x207)%x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MIN;
	volatile int16_t x211 = 782;
	int16_t x212 = INT16_MIN;

	t51 = (((x209==x210)<=x211)%x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = 3LLU;
	volatile int32_t x214 = 0;
	volatile int64_t x215 = 103134486052891LL;
	static int32_t x216 = INT32_MIN;

	t52 = (((x213==x214)<=x215)%x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x217 = UINT16_MAX;
	static int32_t x218 = INT32_MIN;
	volatile int32_t t53 = 4005738;

	t53 = (((x217==x218)<=x219)%x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = 3LL;
	int32_t x223 = -1;
	int32_t t54 = 535659289;

	t54 = (((x221==x222)<=x223)%x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x226 = INT8_MIN;
	int32_t x227 = -2397538;
	int64_t x228 = -1LL;

	t55 = (((x225==x226)<=x227)%x228);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x230 = INT32_MAX;
	uint32_t x231 = 27122U;
	int32_t t56 = -44;

	t56 = (((x229==x230)<=x231)%x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x234 = INT8_MIN;
	uint8_t x235 = UINT8_MAX;
	int64_t x236 = INT64_MAX;
	volatile int64_t t57 = 1021751LL;

	t57 = (((x233==x234)<=x235)%x236);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = -3;
	static uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MIN;
	int32_t x240 = INT32_MAX;

	t58 = (((x237==x238)<=x239)%x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MAX;
	int32_t t59 = -238112123;

	t59 = (((x241==x242)<=x243)%x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 0U;
	uint8_t x247 = 23U;
	static uint32_t x248 = 28929146U;
	static volatile uint32_t t60 = 22779314U;

	t60 = (((x245==x246)<=x247)%x248);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x249 = 30828725778659342LLU;
	int32_t x250 = -56;
	int8_t x252 = 3;

	t61 = (((x249==x250)<=x251)%x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 208071126LLU;
	uint16_t x254 = UINT16_MAX;
	int64_t x256 = INT64_MIN;
	int64_t t62 = 3041535879502672LL;

	t62 = (((x253==x254)<=x255)%x256);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = -1;
	uint64_t x259 = 18583739793962796LLU;
	volatile int64_t x260 = -991647176239LL;
	volatile int64_t t63 = 508606900831550LL;

	t63 = (((x257==x258)<=x259)%x260);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 166U;
	static int32_t t64 = 241;

	t64 = (((x261==x262)<=x263)%x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 2U;
	volatile uint32_t x266 = UINT32_MAX;
	volatile int32_t x267 = 29294;
	int32_t x268 = INT32_MAX;
	volatile int32_t t65 = -1008296322;

	t65 = (((x265==x266)<=x267)%x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x270 = 58893U;
	int32_t t66 = -52;

	t66 = (((x269==x270)<=x271)%x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x273 = -4103060520498446LL;
	static volatile int8_t x274 = 1;
	uint64_t x275 = 12638LLU;
	volatile int8_t x276 = INT8_MIN;
	static volatile int32_t t67 = -1009753;

	t67 = (((x273==x274)<=x275)%x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = -1855LL;
	volatile uint16_t x278 = 112U;
	int8_t x279 = INT8_MAX;
	volatile int32_t x280 = -1;
	volatile int32_t t68 = 30286;

	t68 = (((x277==x278)<=x279)%x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = UINT32_MAX;
	uint8_t x282 = 1U;
	volatile int8_t x283 = INT8_MAX;
	int8_t x284 = -1;
	int32_t t69 = -8595;

	t69 = (((x281==x282)<=x283)%x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x285 = UINT16_MAX;
	volatile int16_t x286 = INT16_MIN;
	uint32_t x288 = UINT32_MAX;
	uint32_t t70 = 213911294U;

	t70 = (((x285==x286)<=x287)%x288);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MIN;
	volatile int64_t x292 = -13938466LL;

	t71 = (((x289==x290)<=x291)%x292);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x293 = 14;
	uint64_t x294 = 2694242146747722817LLU;
	static uint16_t x295 = 0U;
	static volatile uint32_t x296 = 1U;
	uint32_t t72 = 2U;

	t72 = (((x293==x294)<=x295)%x296);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = INT8_MAX;
	static uint32_t x298 = UINT32_MAX;
	uint8_t x300 = 1U;

	t73 = (((x297==x298)<=x299)%x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x302 = -849;
	static int64_t x303 = -8672666986LL;
	uint64_t x304 = 1598LLU;

	t74 = (((x301==x302)<=x303)%x304);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x305 = UINT32_MAX;
	uint8_t x306 = UINT8_MAX;
	static uint16_t x307 = UINT16_MAX;
	int8_t x308 = -1;
	volatile int32_t t75 = 116;

	t75 = (((x305==x306)<=x307)%x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x310 = 5945834U;
	int32_t x311 = INT32_MIN;
	volatile int64_t x312 = INT64_MIN;
	int64_t t76 = 24LL;

	t76 = (((x309==x310)<=x311)%x312);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = -32;
	volatile int32_t x315 = INT32_MIN;
	volatile uint64_t t77 = 570LLU;

	t77 = (((x313==x314)<=x315)%x316);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x317 = INT32_MAX;
	int64_t x319 = INT64_MIN;
	volatile int32_t x320 = -49956824;
	volatile int32_t t78 = 0;

	t78 = (((x317==x318)<=x319)%x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x322 = INT32_MIN;
	int8_t x323 = -1;
	int64_t x324 = INT64_MIN;
	int64_t t79 = -85772297637LL;

	t79 = (((x321==x322)<=x323)%x324);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = -1;
	int64_t x326 = 194954679LL;
	int64_t x327 = INT64_MAX;
	int16_t x328 = 7966;
	int32_t t80 = -1833;

	t80 = (((x325==x326)<=x327)%x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x329 = 299U;
	volatile uint32_t x330 = 130454U;
	int64_t x331 = 157369102610816502LL;

	t81 = (((x329==x330)<=x331)%x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x333 = INT64_MIN;
	int8_t x334 = -1;
	volatile int32_t t82 = 0;

	t82 = (((x333==x334)<=x335)%x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x341 = 82U;
	static int64_t x342 = INT64_MAX;
	int16_t x343 = -1;
	volatile int8_t x344 = INT8_MIN;

	t83 = (((x341==x342)<=x343)%x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x346 = 3696U;
	uint64_t x347 = 198944848608562584LLU;
	int16_t x348 = 1;
	volatile int32_t t84 = -1860997;

	t84 = (((x345==x346)<=x347)%x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x349 = 5U;
	int32_t x350 = INT32_MIN;
	static uint32_t x351 = 83U;
	volatile uint32_t x352 = 17354U;
	volatile uint32_t t85 = 1690U;

	t85 = (((x349==x350)<=x351)%x352);

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = INT32_MIN;
	static uint16_t x356 = UINT16_MAX;
	static int32_t t86 = -47293352;

	t86 = (((x353==x354)<=x355)%x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x357 = -1;
	volatile int8_t x358 = INT8_MAX;
	int8_t x359 = -1;
	int32_t t87 = 164979;

	t87 = (((x357==x358)<=x359)%x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	volatile int64_t x368 = INT64_MIN;
	int64_t t88 = -79660060288414LL;

	t88 = (((x365==x366)<=x367)%x368);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x370 = -7;
	static int16_t x371 = -1;

	t89 = (((x369==x370)<=x371)%x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x373 = INT8_MAX;
	static int32_t x374 = -1;
	int16_t x375 = -1;
	int32_t x376 = INT32_MAX;

	t90 = (((x373==x374)<=x375)%x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = INT64_MIN;
	volatile uint16_t x378 = 1861U;
	int16_t x379 = INT16_MAX;
	uint64_t x380 = 4905LLU;
	uint64_t t91 = 46699056LLU;

	t91 = (((x377==x378)<=x379)%x380);

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x381 = INT32_MIN;
	int64_t x383 = INT64_MIN;
	uint64_t x384 = UINT64_MAX;
	static volatile uint64_t t92 = 1791657887589656LLU;

	t92 = (((x381==x382)<=x383)%x384);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x387 = INT32_MAX;
	static int64_t x388 = INT64_MIN;
	int64_t t93 = 49512718587LL;

	t93 = (((x385==x386)<=x387)%x388);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x389 = 21;
	uint32_t x390 = 9218U;
	volatile int32_t x391 = INT32_MIN;
	int32_t x392 = 18;
	static int32_t t94 = 807049664;

	t94 = (((x389==x390)<=x391)%x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x393 = 31U;
	static int32_t x394 = INT32_MAX;
	uint16_t x395 = 8U;
	volatile int32_t t95 = 215;

	t95 = (((x393==x394)<=x395)%x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MAX;
	int64_t x399 = -645584552952681557LL;
	uint16_t x400 = 7U;
	static int32_t t96 = -729;

	t96 = (((x397==x398)<=x399)%x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = -4237;
	static int64_t x402 = 3LL;
	int16_t x403 = INT16_MIN;
	uint32_t x404 = 66248628U;
	uint32_t t97 = 188005U;

	t97 = (((x401==x402)<=x403)%x404);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x406 = UINT64_MAX;
	volatile uint32_t x407 = UINT32_MAX;
	uint32_t x408 = UINT32_MAX;
	volatile uint32_t t98 = 1452101970U;

	t98 = (((x405==x406)<=x407)%x408);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x410 = INT16_MIN;
	static int32_t t99 = -1217178;

	t99 = (((x409==x410)<=x411)%x412);

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

