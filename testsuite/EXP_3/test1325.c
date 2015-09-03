#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int64_t x2 = -189473079589410LL;
int32_t t1 = -5;
uint16_t x13 = 99U;
uint64_t x14 = 4233799701781614LLU;
int8_t x17 = INT8_MIN;
volatile uint32_t x20 = 583U;
int32_t x29 = INT32_MAX;
uint32_t x31 = UINT32_MAX;
int16_t x35 = INT16_MAX;
int32_t x39 = -80;
static int32_t t10 = 2404775;
static int16_t x54 = INT16_MAX;
int64_t x59 = INT64_MAX;
uint8_t x60 = 2U;
volatile uint32_t t14 = 3U;
int16_t x61 = INT16_MIN;
uint8_t x73 = 124U;
static int8_t x76 = -4;
static volatile int32_t t18 = 26559393;
int32_t x79 = -53954;
static int8_t x82 = 53;
int8_t x83 = INT8_MIN;
int32_t x85 = INT32_MIN;
int16_t x86 = 91;
volatile int32_t t21 = -98729464;
int16_t x90 = INT16_MIN;
int8_t x101 = 23;
volatile int32_t x103 = INT32_MAX;
uint64_t x111 = 797088LLU;
int16_t x112 = INT16_MAX;
int32_t x120 = 70409;
static int8_t x127 = 5;
int64_t x141 = INT64_MAX;
volatile int16_t x144 = INT16_MAX;
uint16_t x147 = 15U;
volatile int32_t x151 = -79;
volatile int16_t x152 = -1;
int8_t x153 = INT8_MIN;
static int64_t x157 = -1LL;
static uint32_t x162 = UINT32_MAX;
volatile int32_t x164 = -1;
volatile uint32_t t40 = 3U;
volatile int16_t x167 = INT16_MAX;
volatile uint32_t x176 = 11554U;
uint64_t t43 = 52221704LLU;
int32_t x177 = INT32_MAX;
static int32_t x181 = INT32_MIN;
volatile int32_t t45 = INT32_MIN;
static int64_t x185 = -6614377953009LL;
uint32_t x188 = 976669U;
int32_t x189 = 27050527;
static int32_t x196 = -50930;
int32_t t48 = -2;
volatile int32_t t50 = 2748;
static uint64_t x207 = 4154666573770172LLU;
static int32_t x212 = INT32_MIN;
uint32_t x215 = 1323180739U;
volatile int64_t x216 = INT64_MIN;
static uint64_t t53 = 38712021666951LLU;
int64_t x218 = -10339193LL;
uint64_t x219 = 11814988LLU;
static uint32_t x223 = 15903U;
uint16_t x224 = UINT16_MAX;
int32_t x233 = INT32_MAX;
int32_t x234 = -1;
volatile int64_t x237 = -1LL;
static int8_t x242 = -15;
int32_t t60 = 4;
static int32_t x249 = -1;
static int64_t x251 = INT64_MIN;
volatile int32_t t62 = 26;
uint32_t x253 = UINT32_MAX;
uint32_t x259 = UINT32_MAX;
volatile int64_t x261 = -1LL;
static int32_t x263 = -1;
volatile int32_t t66 = 8;
volatile int32_t x272 = 42;
int32_t x278 = INT32_MIN;
int16_t x279 = INT16_MIN;
int32_t x283 = 0;
int64_t t73 = 950695066572LL;
int16_t x298 = -941;
uint64_t x301 = 1951158190871522835LLU;
volatile int16_t x303 = INT16_MIN;
static volatile uint32_t x306 = 241763U;
int8_t x310 = -1;
int8_t x314 = INT8_MIN;
int32_t x322 = INT32_MIN;
volatile int16_t x323 = -1;
int32_t t80 = -814;
int64_t x330 = INT64_MIN;
volatile int32_t x332 = -1;
volatile int16_t x338 = INT16_MIN;
uint32_t x342 = UINT32_MAX;
int16_t x344 = 47;
int64_t x356 = INT64_MIN;
static volatile int8_t x360 = 16;
volatile uint32_t x387 = 1119143U;
int32_t x389 = -6662;
int16_t x390 = -1;
static volatile int32_t t97 = -53573547;
static int8_t x394 = 0;
static volatile int16_t x400 = 102;


void f0(void) {
	int16_t x3 = -1;
	int16_t x4 = INT16_MIN;
	int64_t t0 = -8007789361327617LL;

	t0 = ((x1&x2)|(x3==x4));

	if (t0 != -189473079589410LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -8371970;
	volatile int32_t x6 = -1;
	static volatile int32_t x7 = -1;
	int32_t x8 = 31;

	t1 = ((x5&x6)|(x7==x8));

	if (t1 != -8371970) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int16_t x10 = 54;
	int32_t x11 = INT32_MAX;
	volatile int16_t x12 = 200;
	int32_t t2 = -71;

	t2 = ((x9&x10)|(x11==x12));

	if (t2 != 54) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = INT8_MIN;
	volatile uint16_t x16 = 2426U;
	static volatile uint64_t t3 = 2451561042777762LLU;

	t3 = ((x13&x14)|(x15==x16));

	if (t3 != 98LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	static uint64_t x19 = UINT64_MAX;
	int32_t t4 = 41419;

	t4 = ((x17&x18)|(x19==x20));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static int32_t x22 = -1;
	int8_t x23 = INT8_MIN;
	static uint16_t x24 = 25U;
	int32_t t5 = -2402877;

	t5 = ((x21&x22)|(x23==x24));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = 7871;
	uint8_t x27 = 0U;
	uint16_t x28 = UINT16_MAX;
	int64_t t6 = 363699166165153133LL;

	t6 = ((x25&x26)|(x27==x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = -1LL;
	volatile int16_t x32 = -1;
	int64_t t7 = -2131140470499LL;

	t7 = ((x29&x30)|(x31==x32));

	if (t7 != 2147483647LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int8_t x34 = INT8_MIN;
	int64_t x36 = INT64_MAX;
	volatile int32_t t8 = INT32_MIN;

	t8 = ((x33&x34)|(x35==x36));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static uint64_t x38 = 459089010719LLU;
	int64_t x40 = -1LL;
	static volatile uint64_t t9 = 3107023122432145LLU;

	t9 = ((x37&x38)|(x39==x40));

	if (t9 != 459088986112LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint8_t x42 = UINT8_MAX;
	int8_t x43 = INT8_MIN;
	volatile int16_t x44 = -1;

	t10 = ((x41&x42)|(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static uint8_t x46 = UINT8_MAX;
	int64_t x47 = -1LL;
	uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = -483;

	t11 = ((x45&x46)|(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int64_t x50 = INT64_MAX;
	int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MIN;
	static volatile uint64_t t12 = 1065768354227241LLU;

	t12 = ((x49&x50)|(x51==x52));

	if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	static int64_t x55 = INT64_MIN;
	static uint8_t x56 = 0U;
	int32_t t13 = 143069;

	t13 = ((x53&x54)|(x55==x56));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 57285417U;
	volatile uint8_t x58 = 3U;

	t14 = ((x57&x58)|(x59==x60));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x62 = -1;
	volatile int64_t x63 = -66492247613469LL;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -324731889;

	t15 = ((x61&x62)|(x63==x64));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x66 = -1LL;
	int64_t x67 = INT64_MIN;
	int8_t x68 = -1;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = ((x65&x66)|(x67==x68));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = UINT16_MAX;
	volatile int64_t x70 = INT64_MIN;
	int64_t x71 = -1541LL;
	uint8_t x72 = UINT8_MAX;
	int64_t t17 = 725345925116LL;

	t17 = ((x69&x70)|(x71==x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = 21170U;
	uint16_t x75 = 1562U;

	t18 = ((x73&x74)|(x75==x76));

	if (t18 != 48) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = UINT8_MAX;
	uint32_t x78 = 1040U;
	uint16_t x80 = 45U;
	volatile uint32_t t19 = 7851443U;

	t19 = ((x77&x78)|(x79==x80));

	if (t19 != 16U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = 120353;
	static volatile int32_t x84 = -3192;
	volatile int32_t t20 = 290644;

	t20 = ((x81&x82)|(x83==x84));

	if (t20 != 33) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x87 = UINT32_MAX;
	int8_t x88 = 10;

	t21 = ((x85&x86)|(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -1LL;
	static uint64_t x91 = 4060939764273LLU;
	int8_t x92 = -2;
	int64_t t22 = -85LL;

	t22 = ((x89&x90)|(x91==x92));

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x93 = 27U;
	int32_t x94 = INT32_MAX;
	int8_t x95 = INT8_MIN;
	int64_t x96 = -1LL;
	volatile uint32_t t23 = 17742714U;

	t23 = ((x93&x94)|(x95==x96));

	if (t23 != 27U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MAX;
	int32_t x99 = 12256723;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = -7904;

	t24 = ((x97&x98)|(x99==x100));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x102 = 148314;
	uint8_t x104 = 9U;
	int32_t t25 = -212;

	t25 = ((x101&x102)|(x103==x104));

	if (t25 != 18) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int32_t x106 = INT32_MAX;
	uint8_t x107 = 62U;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = INT32_MAX;

	t26 = ((x105&x106)|(x107==x108));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -2675356;
	volatile int64_t x110 = INT64_MAX;
	int64_t t27 = 33628217964520520LL;

	t27 = ((x109&x110)|(x111==x112));

	if (t27 != 9223372036852100452LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 0;
	volatile int64_t x114 = -70845291972990373LL;
	uint8_t x115 = UINT8_MAX;
	volatile int32_t x116 = -1;
	int64_t t28 = 105576680074890LL;

	t28 = ((x113&x114)|(x115==x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x117 = UINT8_MAX;
	volatile int32_t x118 = -1;
	int16_t x119 = INT16_MAX;
	int32_t t29 = 13108;

	t29 = ((x117&x118)|(x119==x120));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -531;
	int64_t x122 = 93565LL;
	static int8_t x123 = -38;
	volatile uint8_t x124 = 2U;
	volatile int64_t t30 = 852601LL;

	t30 = ((x121&x122)|(x123==x124));

	if (t30 != 93549LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 16U;
	int16_t x126 = -1;
	static uint8_t x128 = UINT8_MAX;
	int32_t t31 = -162214543;

	t31 = ((x125&x126)|(x127==x128));

	if (t31 != 16) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -4458228LL;
	static int8_t x130 = -1;
	volatile int32_t x131 = -515822;
	int32_t x132 = -1;
	int64_t t32 = -3841302LL;

	t32 = ((x129&x130)|(x131==x132));

	if (t32 != -4458228LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 29;
	uint64_t x134 = 20374826617397LLU;
	int32_t x135 = -1;
	int32_t x136 = -833606;
	volatile uint64_t t33 = 108131222488287305LLU;

	t33 = ((x133&x134)|(x135==x136));

	if (t33 != 21LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x137 = INT16_MIN;
	int32_t x138 = -181906;
	int16_t x139 = INT16_MIN;
	int16_t x140 = 0;
	volatile int32_t t34 = 225;

	t34 = ((x137&x138)|(x139==x140));

	if (t34 != -196608) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	int64_t t35 = -17LL;

	t35 = ((x141&x142)|(x143==x144));

	if (t35 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	static int64_t x146 = INT64_MIN;
	uint8_t x148 = 1U;
	static int64_t t36 = INT64_MIN;

	t36 = ((x145&x146)|(x147==x148));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = -41350LL;
	static uint64_t x150 = UINT64_MAX;
	uint64_t t37 = 1744141746463LLU;

	t37 = ((x149&x150)|(x151==x152));

	if (t37 != 18446744073709510266LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = -1;
	uint64_t x155 = 1LLU;
	volatile int16_t x156 = -1;
	static int32_t t38 = -1;

	t38 = ((x153&x154)|(x155==x156));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = 929609714;
	uint64_t x159 = 241009239806255LLU;
	uint32_t x160 = UINT32_MAX;
	volatile int64_t t39 = 6288019933LL;

	t39 = ((x157&x158)|(x159==x160));

	if (t39 != 929609714LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int8_t x163 = INT8_MIN;

	t40 = ((x161&x162)|(x163==x164));

	if (t40 != 4294934528U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	static uint32_t x166 = 22U;
	volatile int16_t x168 = INT16_MAX;
	int64_t t41 = -15LL;

	t41 = ((x165&x166)|(x167==x168));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = -1;
	static int64_t x171 = -3212522979646525135LL;
	int8_t x172 = INT8_MIN;
	int32_t t42 = 3316;

	t42 = ((x169&x170)|(x171==x172));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = -424;
	static uint64_t x174 = UINT64_MAX;
	int16_t x175 = -1;

	t43 = ((x173&x174)|(x175==x176));

	if (t43 != 18446744073709551192LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -1;
	int16_t x179 = INT16_MIN;
	volatile uint32_t x180 = 353127136U;
	int32_t t44 = INT32_MAX;

	t44 = ((x177&x178)|(x179==x180));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x182 = -102333;
	int32_t x183 = INT32_MIN;
	uint8_t x184 = 13U;

	t45 = ((x181&x182)|(x183==x184));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	volatile int64_t t46 = INT64_MIN;

	t46 = ((x185&x186)|(x187==x188));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x190 = 69U;
	uint16_t x191 = UINT16_MAX;
	uint16_t x192 = UINT16_MAX;
	int32_t t47 = -26;

	t47 = ((x189&x190)|(x191==x192));

	if (t47 != 5) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	uint16_t x194 = UINT16_MAX;
	static int32_t x195 = INT32_MIN;

	t48 = ((x193&x194)|(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	static int32_t x198 = INT32_MIN;
	int8_t x199 = INT8_MAX;
	int32_t x200 = INT32_MAX;
	volatile int32_t t49 = INT32_MIN;

	t49 = ((x197&x198)|(x199==x200));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	static int16_t x202 = INT16_MIN;
	static int16_t x203 = INT16_MAX;
	int16_t x204 = -1;

	t50 = ((x201&x202)|(x203==x204));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 156150183914590880LLU;
	int16_t x206 = -1;
	uint32_t x208 = 128343U;
	static volatile uint64_t t51 = 38923884672589878LLU;

	t51 = ((x205&x206)|(x207==x208));

	if (t51 != 156150183914590880LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	static uint64_t x210 = 7940471184299964LLU;
	int32_t x211 = INT32_MIN;
	volatile uint64_t t52 = 28557636061948LLU;

	t52 = ((x209&x210)|(x211==x212));

	if (t52 != 189LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int16_t x214 = 707;

	t53 = ((x213&x214)|(x215==x216));

	if (t53 != 707LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 0;
	static int64_t x220 = INT64_MAX;
	static int64_t t54 = -135001656013367LL;

	t54 = ((x217&x218)|(x219==x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	static int32_t x222 = -28558989;
	int32_t t55 = -6693411;

	t55 = ((x221&x222)|(x223==x224));

	if (t55 != -28573696) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x225 = UINT16_MAX;
	uint32_t x226 = 967U;
	int32_t x227 = INT32_MIN;
	static uint16_t x228 = 0U;
	volatile uint32_t t56 = 225606U;

	t56 = ((x225&x226)|(x227==x228));

	if (t56 != 967U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 3;
	static int64_t x230 = 981755997831729LL;
	uint16_t x231 = 9U;
	int8_t x232 = INT8_MAX;
	volatile int64_t t57 = 38LL;

	t57 = ((x229&x230)|(x231==x232));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x235 = -8;
	uint8_t x236 = 5U;
	static int32_t t58 = INT32_MAX;

	t58 = ((x233&x234)|(x235==x236));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = INT32_MIN;
	uint16_t x239 = 0U;
	static uint16_t x240 = 1U;
	static int64_t t59 = 37321488510470520LL;

	t59 = ((x237&x238)|(x239==x240));

	if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 79U;
	static int32_t x243 = INT32_MAX;
	volatile uint16_t x244 = 621U;

	t60 = ((x241&x242)|(x243==x244));

	if (t60 != 65) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	volatile int64_t x246 = INT64_MIN;
	volatile int16_t x247 = -42;
	int32_t x248 = INT32_MIN;
	volatile int64_t t61 = INT64_MIN;

	t61 = ((x245&x246)|(x247==x248));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = INT16_MIN;
	int32_t x252 = -1;

	t62 = ((x249&x250)|(x251==x252));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x254 = 1U;
	int8_t x255 = INT8_MAX;
	volatile int16_t x256 = INT16_MAX;
	uint32_t t63 = 219086286U;

	t63 = ((x253&x254)|(x255==x256));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	uint16_t x258 = UINT16_MAX;
	uint64_t x260 = UINT64_MAX;
	int32_t t64 = 116799719;

	t64 = ((x257&x258)|(x259==x260));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x262 = INT16_MAX;
	static int32_t x264 = INT32_MIN;
	volatile int64_t t65 = 3LL;

	t65 = ((x261&x262)|(x263==x264));

	if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = 12;
	int32_t x266 = -103931365;
	uint32_t x267 = UINT32_MAX;
	uint64_t x268 = 5624108LLU;

	t66 = ((x265&x266)|(x267==x268));

	if (t66 != 8) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	int16_t x270 = 11427;
	int32_t x271 = -1;
	volatile int32_t t67 = 0;

	t67 = ((x269&x270)|(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = 3;
	int64_t x274 = INT64_MIN;
	int64_t x275 = 1781308255352LL;
	static int64_t x276 = -1429440367651436669LL;
	volatile int64_t t68 = -687668856170LL;

	t68 = ((x273&x274)|(x275==x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 28455690620LLU;
	static volatile int32_t x280 = INT32_MAX;
	uint64_t t69 = 3076327485571LLU;

	t69 = ((x277&x278)|(x279==x280));

	if (t69 != 27917287424LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = -5411;
	int64_t x282 = INT64_MAX;
	int16_t x284 = 8;
	volatile int64_t t70 = -7774444LL;

	t70 = ((x281&x282)|(x283==x284));

	if (t70 != 9223372036854770397LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -362893998LL;
	int32_t x286 = INT32_MIN;
	volatile int32_t x287 = INT32_MIN;
	int32_t x288 = INT32_MIN;
	static int64_t t71 = -364163LL;

	t71 = ((x285&x286)|(x287==x288));

	if (t71 != -2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = 6U;
	volatile uint8_t x290 = 44U;
	int16_t x291 = 507;
	int16_t x292 = 714;
	static volatile int32_t t72 = 0;

	t72 = ((x289&x290)|(x291==x292));

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = INT64_MAX;
	volatile uint32_t x295 = 11650335U;
	static uint32_t x296 = 214U;

	t73 = ((x293&x294)|(x295==x296));

	if (t73 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 13U;
	int16_t x299 = INT16_MAX;
	volatile int8_t x300 = -1;
	int32_t t74 = 1;

	t74 = ((x297&x298)|(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x302 = -1;
	uint32_t x304 = UINT32_MAX;
	volatile uint64_t t75 = 1LLU;

	t75 = ((x301&x302)|(x303==x304));

	if (t75 != 1951158190871522835LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = INT8_MIN;
	uint32_t x307 = 19U;
	volatile int64_t x308 = -54448999853700LL;
	uint32_t t76 = 242737U;

	t76 = ((x305&x306)|(x307==x308));

	if (t76 != 241664U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -10093;
	int64_t x311 = INT64_MIN;
	volatile int32_t x312 = INT32_MIN;
	int32_t t77 = -1571179;

	t77 = ((x309&x310)|(x311==x312));

	if (t77 != -10093) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	uint64_t x315 = 12647918504408480LLU;
	volatile int64_t x316 = INT64_MIN;
	int32_t t78 = 422;

	t78 = ((x313&x314)|(x315==x316));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 21U;
	int16_t x318 = 3924;
	int64_t x319 = INT64_MAX;
	uint32_t x320 = 568186661U;
	int32_t t79 = -554863794;

	t79 = ((x317&x318)|(x319==x320));

	if (t79 != 20) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 8U;
	volatile uint16_t x324 = 29U;

	t80 = ((x321&x322)|(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = INT32_MIN;
	volatile uint8_t x326 = 5U;
	volatile int64_t x327 = 1038068546431LL;
	static volatile uint64_t x328 = 1346LLU;
	volatile int32_t t81 = 2533751;

	t81 = ((x325&x326)|(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 0U;
	int64_t x331 = -62816894629084410LL;
	static int64_t t82 = 3860LL;

	t82 = ((x329&x330)|(x331==x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	static int32_t x334 = INT32_MIN;
	uint8_t x335 = UINT8_MAX;
	int8_t x336 = INT8_MAX;
	int32_t t83 = INT32_MIN;

	t83 = ((x333&x334)|(x335==x336));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	static int8_t x339 = -41;
	static int8_t x340 = INT8_MIN;
	static volatile int32_t t84 = -3017178;

	t84 = ((x337&x338)|(x339==x340));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MIN;
	int32_t x343 = -1;
	uint32_t t85 = 0U;

	t85 = ((x341&x342)|(x343==x344));

	if (t85 != 4294934528U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	uint16_t x346 = 105U;
	uint16_t x347 = 1U;
	static int64_t x348 = INT64_MIN;
	volatile int64_t t86 = -3297LL;

	t86 = ((x345&x346)|(x347==x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x349 = UINT8_MAX;
	int16_t x350 = INT16_MIN;
	uint16_t x351 = UINT16_MAX;
	int64_t x352 = INT64_MIN;
	static int32_t t87 = 202974595;

	t87 = ((x349&x350)|(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 1;
	int64_t x354 = -1LL;
	volatile uint8_t x355 = UINT8_MAX;
	int64_t t88 = -8358224347LL;

	t88 = ((x353&x354)|(x355==x356));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = -1;
	int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MIN;
	int32_t t89 = INT32_MIN;

	t89 = ((x357&x358)|(x359==x360));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x361 = 529LLU;
	uint32_t x362 = 13514979U;
	int16_t x363 = INT16_MAX;
	int16_t x364 = INT16_MIN;
	volatile uint64_t t90 = 104836765732603LLU;

	t90 = ((x361&x362)|(x363==x364));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 501267955U;
	int8_t x366 = -1;
	int16_t x367 = 6;
	static uint64_t x368 = 3027183LLU;
	uint32_t t91 = 12197399U;

	t91 = ((x365&x366)|(x367==x368));

	if (t91 != 501267955U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = 1582139418324LLU;
	int32_t x370 = INT32_MAX;
	uint64_t x371 = UINT64_MAX;
	static uint32_t x372 = 791925957U;
	uint64_t t92 = 14609951LLU;

	t92 = ((x369&x370)|(x371==x372));

	if (t92 != 1591453396LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	volatile int8_t x374 = INT8_MIN;
	volatile uint32_t x375 = UINT32_MAX;
	static volatile uint64_t x376 = 378977932LLU;
	volatile int32_t t93 = -1360534;

	t93 = ((x373&x374)|(x375==x376));

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = 3;
	int32_t x378 = INT32_MIN;
	uint8_t x379 = 1U;
	volatile int8_t x380 = 55;
	int32_t t94 = 9;

	t94 = ((x377&x378)|(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 6295U;
	volatile int16_t x384 = INT16_MAX;
	int32_t t95 = INT32_MIN;

	t95 = ((x381&x382)|(x383==x384));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = INT16_MIN;
	uint64_t x388 = 3630880171364863186LLU;
	static int32_t t96 = 223;

	t96 = ((x385&x386)|(x387==x388));

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x391 = INT64_MAX;
	volatile uint32_t x392 = 5612026U;

	t97 = ((x389&x390)|(x391==x392));

	if (t97 != -6662) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -11;
	volatile int64_t x395 = -4853LL;
	uint8_t x396 = UINT8_MAX;
	static volatile int32_t t98 = -606293666;

	t98 = ((x393&x394)|(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 260490;
	volatile uint8_t x398 = UINT8_MAX;
	volatile uint32_t x399 = 58U;
	static int32_t t99 = 0;

	t99 = ((x397&x398)|(x399==x400));

	if (t99 != 138) { NG(); } else { ; }
	
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

