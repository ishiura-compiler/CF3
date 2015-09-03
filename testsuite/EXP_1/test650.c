#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
uint8_t x6 = 1U;
int64_t x12 = -1LL;
int32_t x17 = 2311157;
int64_t x18 = INT64_MAX;
int16_t x22 = 337;
int32_t x24 = -673545;
volatile int32_t t8 = INT32_MAX;
uint8_t x43 = 1U;
int64_t x45 = -118676992157266725LL;
int64_t t11 = 4199128232473LL;
static int64_t t14 = 5154874LL;
uint16_t x64 = 196U;
int8_t x68 = INT8_MIN;
int32_t x74 = -1;
int8_t x75 = INT8_MIN;
uint32_t x77 = UINT32_MAX;
int64_t x78 = 11LL;
uint32_t t21 = 13U;
int32_t t22 = INT32_MIN;
int64_t x98 = INT64_MIN;
uint16_t x99 = 229U;
int16_t x104 = 122;
uint32_t x105 = UINT32_MAX;
volatile int32_t x106 = INT32_MIN;
int32_t x123 = -373126;
volatile int32_t t30 = -148978;
int64_t x130 = INT64_MIN;
int8_t x133 = INT8_MAX;
uint64_t x134 = 55795LLU;
static volatile int64_t x145 = 8943662477316LL;
int8_t x146 = 47;
uint16_t x159 = 2U;
int8_t x160 = 7;
static uint64_t t39 = 42910366754680081LLU;
uint16_t x162 = 866U;
uint16_t x165 = 184U;
int64_t t42 = 145800869720417529LL;
uint64_t t43 = 207662433843LLU;
volatile uint8_t x181 = 67U;
int64_t x190 = -66380476369LL;
int8_t x191 = INT8_MIN;
uint64_t x198 = 991932113648731LLU;
int16_t x200 = -22;
static uint64_t x207 = 85239264698908240LLU;
static int16_t x210 = INT16_MIN;
volatile int64_t t51 = -35845575054209284LL;
volatile int16_t x221 = -14351;
uint8_t x224 = 20U;
volatile int32_t t54 = -34144;
volatile int64_t t55 = INT64_MIN;
static volatile int32_t x235 = INT32_MIN;
int8_t x236 = -1;
uint16_t x240 = 92U;
uint16_t x247 = 452U;
uint32_t x248 = UINT32_MAX;
volatile uint32_t t59 = UINT32_MAX;
uint8_t x249 = 10U;
volatile int64_t x260 = INT64_MIN;
volatile int64_t t62 = -17153693LL;
volatile int32_t x266 = INT32_MIN;
volatile int8_t x267 = INT8_MIN;
int16_t x276 = INT16_MAX;
static int8_t x285 = INT8_MIN;
int32_t x288 = -1;
int32_t x291 = 315;
uint64_t x292 = 80991601303010914LLU;
uint8_t x293 = 0U;
int64_t t71 = 6105249183LL;
static volatile uint64_t t73 = 1729383LLU;
volatile uint64_t t74 = UINT64_MAX;
int8_t x322 = INT8_MAX;
uint16_t x333 = UINT16_MAX;
static uint8_t x338 = 4U;
int8_t x342 = INT8_MIN;
int64_t x346 = INT64_MIN;
static uint64_t x352 = 786059LLU;
uint32_t x363 = 88U;
static uint8_t x364 = UINT8_MAX;
volatile int64_t t88 = -554957820976LL;
uint64_t x374 = 1698278470944621260LLU;
int64_t x378 = 1906607LL;
int8_t x385 = 19;
int16_t x386 = INT16_MIN;
uint64_t t91 = 78859520432031LLU;
static int32_t x389 = INT32_MIN;
int16_t x391 = -3061;
int16_t x400 = 907;
volatile int16_t x401 = INT16_MIN;
static int8_t x405 = 3;
volatile int64_t x413 = INT64_MIN;
static int16_t x415 = -57;
volatile int64_t t98 = -2100532985418878465LL;
uint64_t t99 = 4582156388LLU;


void f0(void) {
	int32_t x2 = -25978271;
	int64_t x3 = 31533668038LL;
	uint16_t x4 = UINT16_MAX;
	int64_t t0 = 1060588572144LL;

	t0 = (((x1/x2)&x3)^x4);

	if (t0 != 65535LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x7 = 4;
	volatile uint64_t x8 = 3469268596603902LLU;
	static volatile uint64_t t1 = 365907274115203465LLU;

	t1 = (((x5/x6)&x7)^x8);

	if (t1 != 3469268596603902LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 2455U;
	uint16_t x10 = 20U;
	static int32_t x11 = INT32_MIN;
	static int64_t t2 = 857312063LL;

	t2 = (((x9/x10)&x11)^x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = INT64_MIN;
	uint8_t x15 = 3U;
	int32_t x16 = INT32_MIN;
	int64_t t3 = 12022205164LL;

	t3 = (((x13/x14)&x15)^x16);

	if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x19 = INT8_MIN;
	int16_t x20 = INT16_MIN;
	volatile int64_t t4 = 8477814750710129LL;

	t4 = (((x17/x18)&x19)^x20);

	if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	int32_t t5 = 8433;

	t5 = (((x21/x22)&x23)^x24);

	if (t5 != -673545) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = 428312;
	volatile uint8_t x26 = 5U;
	int32_t x27 = INT32_MIN;
	int32_t x28 = 431067;
	volatile int32_t t6 = -92899906;

	t6 = (((x25/x26)&x27)^x28);

	if (t6 != 431067) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 119167U;
	int64_t x30 = -9996371LL;
	static uint8_t x31 = 6U;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (((x29/x30)&x31)^x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int32_t x34 = -19;
	int32_t x35 = INT32_MIN;
	static int32_t x36 = -1;

	t8 = (((x33/x34)&x35)^x36);

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int32_t x38 = -266;
	uint8_t x39 = 89U;
	static uint8_t x40 = 4U;
	int64_t t9 = -752063731LL;

	t9 = (((x37/x38)&x39)^x40);

	if (t9 != 5LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	static int16_t x42 = -96;
	int8_t x44 = 3;
	volatile int32_t t10 = -118954;

	t10 = (((x41/x42)&x43)^x44);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -17822268890LL;
	static int64_t x47 = INT64_MIN;
	volatile int32_t x48 = -53293;

	t11 = (((x45/x46)&x47)^x48);

	if (t11 != -53293LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 6756U;
	int64_t x50 = 2916902587778162294LL;
	static int64_t x51 = INT64_MAX;
	int16_t x52 = INT16_MAX;
	int64_t t12 = -94LL;

	t12 = (((x49/x50)&x51)^x52);

	if (t12 != 32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	uint32_t x54 = UINT32_MAX;
	int32_t x55 = INT32_MIN;
	int64_t x56 = 10986963919834LL;
	volatile int64_t t13 = -30175441LL;

	t13 = (((x53/x54)&x55)^x56);

	if (t13 != 10986963919834LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 38536388907919503LL;
	uint16_t x58 = UINT16_MAX;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = 5LL;

	t14 = (((x57/x58)&x59)^x60);

	if (t14 != 240LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	static int8_t x62 = INT8_MIN;
	volatile int64_t x63 = INT64_MIN;
	volatile int64_t t15 = 10312098399LL;

	t15 = (((x61/x62)&x63)^x64);

	if (t15 != 196LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	uint8_t x66 = 1U;
	int32_t x67 = INT32_MIN;
	volatile int32_t t16 = -1721;

	t16 = (((x65/x66)&x67)^x68);

	if (t16 != 2147483520) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile int8_t x70 = -3;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = 5513550LLU;
	uint64_t t17 = 1171LLU;

	t17 = (((x69/x70)&x71)^x72);

	if (t17 != 5513550LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	static int8_t x76 = -5;
	int32_t t18 = 19;

	t18 = (((x73/x74)&x75)^x76);

	if (t18 != 65531) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x79 = INT8_MIN;
	int16_t x80 = 55;
	int64_t t19 = 49952770471838574LL;

	t19 = (((x77/x78)&x79)^x80);

	if (t19 != 390451511LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 94U;
	int32_t x82 = -2;
	int16_t x83 = 0;
	int16_t x84 = INT16_MIN;
	volatile uint32_t t20 = 297950U;

	t20 = (((x81/x82)&x83)^x84);

	if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	static uint32_t x86 = 14837060U;
	volatile int8_t x87 = -8;
	int8_t x88 = -1;

	t21 = (((x85/x86)&x87)^x88);

	if (t21 != 4294967151U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int16_t x90 = 20;
	volatile int16_t x91 = -1712;
	int32_t x92 = INT32_MIN;

	t22 = (((x89/x90)&x91)^x92);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	static int16_t x94 = -21;
	static volatile int32_t x95 = INT32_MIN;
	static volatile int16_t x96 = 3;
	int64_t t23 = -57437LL;

	t23 = (((x93/x94)&x95)^x96);

	if (t23 != 3LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = UINT16_MAX;
	uint16_t x100 = 3U;
	int64_t t24 = -8LL;

	t24 = (((x97/x98)&x99)^x100);

	if (t24 != 3LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	int16_t x102 = 212;
	int64_t x103 = -1LL;
	int64_t t25 = 25959936861341278LL;

	t25 = (((x101/x102)&x103)^x104);

	if (t25 != 122LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x107 = INT8_MIN;
	int64_t x108 = 111520187482706134LL;
	volatile int64_t t26 = -5716353076192107LL;

	t26 = (((x105/x106)&x107)^x108);

	if (t26 != 111520187482706134LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MIN;
	volatile uint32_t x111 = 430432992U;
	static uint64_t x112 = 844122040935LLU;
	volatile uint64_t t27 = 1703881LLU;

	t27 = (((x109/x110)&x111)^x112);

	if (t27 != 844122106471LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = UINT64_MAX;
	uint64_t x114 = UINT64_MAX;
	volatile int32_t x115 = INT32_MIN;
	volatile int16_t x116 = -1;
	uint64_t t28 = UINT64_MAX;

	t28 = (((x113/x114)&x115)^x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 2;
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = INT32_MIN;
	int32_t x120 = -3;
	volatile uint32_t t29 = 389769U;

	t29 = (((x117/x118)&x119)^x120);

	if (t29 != 4294967293U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -838;
	int32_t x122 = INT32_MIN;
	int16_t x124 = 30;

	t30 = (((x121/x122)&x123)^x124);

	if (t30 != 30) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = UINT16_MAX;
	static int64_t x126 = INT64_MIN;
	uint32_t x127 = UINT32_MAX;
	static int32_t x128 = -763682033;
	static volatile int64_t t31 = 558LL;

	t31 = (((x125/x126)&x127)^x128);

	if (t31 != -763682033LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 0U;
	static int8_t x131 = 30;
	int64_t x132 = INT64_MIN;
	int64_t t32 = INT64_MIN;

	t32 = (((x129/x130)&x131)^x132);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x135 = 0LLU;
	volatile int64_t x136 = INT64_MAX;
	volatile uint64_t t33 = 6688168997359LLU;

	t33 = (((x133/x134)&x135)^x136);

	if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	static int64_t x138 = -700781LL;
	uint64_t x139 = UINT64_MAX;
	volatile int64_t x140 = INT64_MIN;
	volatile uint64_t t34 = 7410686835839990LLU;

	t34 = (((x137/x138)&x139)^x140);

	if (t34 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MIN;
	static int8_t x143 = -1;
	volatile int64_t x144 = -8245188LL;
	volatile int64_t t35 = -3236LL;

	t35 = (((x141/x142)&x143)^x144);

	if (t35 != -4303212484LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x147 = 847537LL;
	int16_t x148 = 0;
	volatile int64_t t36 = -535700259719365LL;

	t36 = (((x145/x146)&x147)^x148);

	if (t36 != 295600LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x149 = INT8_MIN;
	int16_t x150 = -1;
	int16_t x151 = INT16_MIN;
	uint32_t x152 = 1U;
	uint32_t t37 = 305U;

	t37 = (((x149/x150)&x151)^x152);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 116541435;
	int32_t x154 = INT32_MIN;
	volatile int8_t x155 = -1;
	static int8_t x156 = 1;
	int32_t t38 = -55;

	t38 = (((x153/x154)&x155)^x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	static int64_t x158 = -1LL;

	t39 = (((x157/x158)&x159)^x160);

	if (t39 != 7LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x161 = 47U;
	uint64_t x163 = 1685725088201550112LLU;
	int64_t x164 = -73013556552337LL;
	volatile uint64_t t40 = 162LLU;

	t40 = (((x161/x162)&x163)^x164);

	if (t40 != 18446671060152999279LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x166 = 3U;
	static uint32_t x167 = 262443U;
	int64_t x168 = INT64_MIN;
	volatile int64_t t41 = 9187922LL;

	t41 = (((x165/x166)&x167)^x168);

	if (t41 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	int8_t x170 = -1;
	int8_t x171 = 1;
	int32_t x172 = INT32_MIN;

	t42 = (((x169/x170)&x171)^x172);

	if (t42 != -2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = INT32_MIN;

	t43 = (((x173/x174)&x175)^x176);

	if (t43 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = 22317287217LLU;
	volatile int64_t x178 = INT64_MIN;
	int8_t x179 = INT8_MAX;
	uint16_t x180 = 1U;
	volatile uint64_t t44 = 5082788431919239LLU;

	t44 = (((x177/x178)&x179)^x180);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MAX;
	uint16_t x184 = UINT16_MAX;
	int32_t t45 = 414;

	t45 = (((x181/x182)&x183)^x184);

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x189 = 395918440482488LLU;
	static volatile int16_t x192 = 0;
	uint64_t t46 = 12619LLU;

	t46 = (((x189/x190)&x191)^x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = -1;
	int32_t x194 = INT32_MIN;
	volatile uint32_t x195 = 2884U;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (((x193/x194)&x195)^x196);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = -10;
	uint16_t x199 = 6U;
	volatile uint64_t t48 = 31704911754894LLU;

	t48 = (((x197/x198)&x199)^x200);

	if (t48 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x201 = UINT16_MAX;
	int8_t x202 = INT8_MAX;
	int64_t x203 = 372077040280350LL;
	int8_t x204 = 23;
	int64_t t49 = -62012562887LL;

	t49 = (((x201/x202)&x203)^x204);

	if (t49 != 531LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x205 = INT32_MAX;
	int8_t x206 = 2;
	volatile int64_t x208 = -232LL;
	uint64_t t50 = 235LLU;

	t50 = (((x205/x206)&x207)^x208);

	if (t50 != 18446744073218081096LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MAX;
	volatile int64_t x211 = -4675LL;
	volatile int16_t x212 = -25;

	t51 = (((x209/x210)&x211)^x212);

	if (t51 != -25LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x213 = INT64_MIN;
	static int16_t x214 = -12;
	volatile uint8_t x215 = 0U;
	int32_t x216 = 394796;
	static int64_t t52 = 150016LL;

	t52 = (((x213/x214)&x215)^x216);

	if (t52 != 394796LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x217 = UINT8_MAX;
	static uint8_t x218 = UINT8_MAX;
	int32_t x219 = -57;
	uint64_t x220 = 1271995694658202532LLU;
	static uint64_t t53 = 8646662267151LLU;

	t53 = (((x217/x218)&x219)^x220);

	if (t53 != 1271995694658202533LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x222 = -1;
	int16_t x223 = INT16_MIN;

	t54 = (((x221/x222)&x223)^x224);

	if (t54 != 20) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = 1;
	volatile uint16_t x230 = UINT16_MAX;
	int8_t x231 = -2;
	int64_t x232 = INT64_MIN;

	t55 = (((x229/x230)&x231)^x232);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	static uint32_t x234 = 301U;
	uint32_t t56 = UINT32_MAX;

	t56 = (((x233/x234)&x235)^x236);

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = UINT8_MAX;
	uint16_t x238 = 2U;
	volatile int32_t x239 = -18237;
	volatile int32_t t57 = -2071544;

	t57 = (((x237/x238)&x239)^x240);

	if (t57 != 31) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -310;
	uint64_t x242 = 235LLU;
	static int16_t x243 = INT16_MAX;
	uint16_t x244 = UINT16_MAX;
	uint64_t t58 = 242948299892LLU;

	t58 = (((x241/x242)&x243)^x244);

	if (t58 != 51314LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = 0;
	int32_t x246 = INT32_MAX;

	t59 = (((x245/x246)&x247)^x248);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x250 = INT64_MAX;
	int32_t x251 = INT32_MAX;
	uint8_t x252 = 7U;
	int64_t t60 = 181531163LL;

	t60 = (((x249/x250)&x251)^x252);

	if (t60 != 7LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = 4388473575490020373LLU;
	uint32_t x254 = 52831U;
	int64_t x255 = 480839230697544LL;
	int32_t x256 = INT32_MIN;
	volatile uint64_t t61 = 33409966812517LLU;

	t61 = (((x253/x254)&x255)^x256);

	if (t61 != 18446742972495568904LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MAX;
	uint8_t x259 = 2U;

	t62 = (((x257/x258)&x259)^x260);

	if (t62 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = 1;
	uint16_t x263 = 15343U;
	int32_t x264 = 17624294;
	volatile int32_t t63 = -62050;

	t63 = (((x261/x262)&x263)^x264);

	if (t63 != 17624294) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MAX;
	int32_t x268 = 3965;
	int32_t t64 = 353934;

	t64 = (((x265/x266)&x267)^x268);

	if (t64 != 3965) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = -1;
	volatile int32_t x271 = -62459;
	static int8_t x272 = INT8_MIN;
	int32_t t65 = -120205;

	t65 = (((x269/x270)&x271)^x272);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = INT32_MAX;
	static int8_t x274 = -14;
	int8_t x275 = 3;
	volatile int32_t t66 = 367;

	t66 = (((x273/x274)&x275)^x276);

	if (t66 != 32764) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x278 = INT32_MAX;
	int64_t x279 = -688280LL;
	int64_t x280 = INT64_MAX;
	int64_t t67 = INT64_MAX;

	t67 = (((x277/x278)&x279)^x280);

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = UINT8_MAX;
	static int32_t x282 = INT32_MAX;
	static uint8_t x283 = UINT8_MAX;
	volatile int32_t x284 = -1054577;
	int32_t t68 = 288249;

	t68 = (((x281/x282)&x283)^x284);

	if (t68 != -1054577) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x286 = INT16_MAX;
	volatile uint16_t x287 = UINT16_MAX;
	int32_t t69 = 1085;

	t69 = (((x285/x286)&x287)^x288);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	static volatile uint64_t t70 = 401445124LLU;

	t70 = (((x289/x290)&x291)^x292);

	if (t70 != 80991601303010915LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x294 = 10U;
	volatile int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MIN;

	t71 = (((x293/x294)&x295)^x296);

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = 48;
	uint32_t x298 = 2271U;
	uint8_t x299 = 16U;
	static uint8_t x300 = 2U;
	uint32_t t72 = 1365036U;

	t72 = (((x297/x298)&x299)^x300);

	if (t72 != 2U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = -14;
	volatile int32_t x302 = 10170553;
	uint64_t x303 = 3LLU;
	int32_t x304 = 40981635;

	t73 = (((x301/x302)&x303)^x304);

	if (t73 != 40981635LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x305 = 1;
	uint16_t x306 = 8U;
	uint16_t x307 = 19U;
	uint64_t x308 = UINT64_MAX;

	t74 = (((x305/x306)&x307)^x308);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = -1;
	int16_t x310 = INT16_MIN;
	int8_t x311 = 1;
	uint32_t x312 = 2258U;
	uint32_t t75 = 42329580U;

	t75 = (((x309/x310)&x311)^x312);

	if (t75 != 2258U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = UINT32_MAX;
	static int16_t x314 = INT16_MAX;
	int16_t x315 = INT16_MAX;
	uint16_t x316 = 29123U;
	volatile uint32_t t76 = 3981811U;

	t76 = (((x313/x314)&x315)^x316);

	if (t76 != 29127U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x321 = -1;
	int64_t x323 = INT64_MIN;
	uint32_t x324 = 207U;
	int64_t t77 = -101381902392039LL;

	t77 = (((x321/x322)&x323)^x324);

	if (t77 != 207LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x325 = 12996740U;
	volatile int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MAX;
	uint64_t x328 = 33228148671120872LLU;
	uint64_t t78 = 19098LLU;

	t78 = (((x325/x326)&x327)^x328);

	if (t78 != 33228148671120872LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = -1509LL;
	static int8_t x331 = -1;
	uint8_t x332 = 0U;
	volatile uint64_t t79 = 2847063404349344LLU;

	t79 = (((x329/x330)&x331)^x332);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x334 = -1;
	int64_t x335 = 18238LL;
	int32_t x336 = -12012;
	volatile int64_t t80 = 1LL;

	t80 = (((x333/x334)&x335)^x336);

	if (t80 != -12012LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = INT32_MIN;
	volatile int16_t x339 = INT16_MAX;
	int32_t x340 = 1440;
	static int32_t t81 = -57210488;

	t81 = (((x337/x338)&x339)^x340);

	if (t81 != 1440) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = -1;
	uint16_t x343 = 2U;
	static uint64_t x344 = UINT64_MAX;
	uint64_t t82 = UINT64_MAX;

	t82 = (((x341/x342)&x343)^x344);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x345 = UINT32_MAX;
	volatile uint64_t x347 = UINT64_MAX;
	int16_t x348 = INT16_MIN;
	volatile uint64_t t83 = 474648232032LLU;

	t83 = (((x345/x346)&x347)^x348);

	if (t83 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = 73LL;
	static uint8_t x350 = UINT8_MAX;
	volatile uint16_t x351 = 1021U;
	volatile uint64_t t84 = 491667LLU;

	t84 = (((x349/x350)&x351)^x352);

	if (t84 != 786059LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x353 = -11;
	int8_t x354 = INT8_MIN;
	static volatile uint8_t x355 = 12U;
	static uint32_t x356 = 2539U;
	uint32_t t85 = 558401U;

	t85 = (((x353/x354)&x355)^x356);

	if (t85 != 2539U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x361 = 6U;
	int64_t x362 = 1LL;
	int64_t t86 = -464848LL;

	t86 = (((x361/x362)&x363)^x364);

	if (t86 != 255LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = INT32_MIN;
	int32_t x366 = 4058827;
	uint8_t x367 = 8U;
	volatile int32_t x368 = INT32_MAX;
	int32_t t87 = -30;

	t87 = (((x365/x366)&x367)^x368);

	if (t87 != 2147483639) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = UINT16_MAX;
	static uint32_t x370 = 2626382U;
	static int64_t x371 = INT64_MAX;
	int8_t x372 = INT8_MIN;

	t88 = (((x369/x370)&x371)^x372);

	if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x373 = 1849871002LL;
	int16_t x375 = 1892;
	int16_t x376 = -1;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (((x373/x374)&x375)^x376);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x377 = -1;
	int64_t x379 = 115502943765908803LL;
	int16_t x380 = INT16_MAX;
	static int64_t t90 = 53616373LL;

	t90 = (((x377/x378)&x379)^x380);

	if (t90 != 32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x387 = 0U;
	uint64_t x388 = 3825835971LLU;

	t91 = (((x385/x386)&x387)^x388);

	if (t91 != 3825835971LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x390 = 134;
	int8_t x392 = -1;
	int32_t t92 = -3868667;

	t92 = (((x389/x390)&x391)^x392);

	if (t92 != 16026620) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = INT32_MAX;
	volatile int32_t x394 = INT32_MIN;
	int16_t x395 = INT16_MIN;
	int32_t x396 = -2874794;
	static volatile int32_t t93 = -21709;

	t93 = (((x393/x394)&x395)^x396);

	if (t93 != -2874794) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x397 = INT32_MIN;
	int8_t x398 = -50;
	int32_t x399 = -1;
	volatile int32_t t94 = 51;

	t94 = (((x397/x398)&x399)^x400);

	if (t94 != 42950563) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x402 = INT16_MAX;
	static uint8_t x403 = 0U;
	static uint32_t x404 = 6U;
	volatile uint32_t t95 = 68190U;

	t95 = (((x401/x402)&x403)^x404);

	if (t95 != 6U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x406 = 17218501U;
	uint16_t x407 = 51U;
	uint64_t x408 = 7LLU;
	volatile uint64_t t96 = 7LLU;

	t96 = (((x405/x406)&x407)^x408);

	if (t96 != 7LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x409 = -1;
	static uint16_t x410 = 31U;
	uint8_t x411 = UINT8_MAX;
	int8_t x412 = -1;
	static volatile int32_t t97 = 136932891;

	t97 = (((x409/x410)&x411)^x412);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x414 = INT64_MIN;
	volatile int32_t x416 = -1;

	t98 = (((x413/x414)&x415)^x416);

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x417 = 14U;
	int16_t x418 = INT16_MIN;
	uint64_t x419 = 1LLU;
	int8_t x420 = INT8_MIN;

	t99 = (((x417/x418)&x419)^x420);

	if (t99 != 18446744073709551488LLU) { NG(); } else { ; }
	
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

