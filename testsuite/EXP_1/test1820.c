#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile uint16_t x15 = 2U;
static uint8_t x18 = 6U;
uint8_t x20 = 1U;
uint16_t x35 = 0U;
int64_t t9 = 247114107693345LL;
static volatile uint32_t x43 = 6595U;
int16_t x46 = INT16_MAX;
int64_t x47 = -673222660076377LL;
int8_t x53 = INT8_MAX;
volatile int8_t x54 = -1;
int64_t x60 = INT64_MAX;
volatile int8_t x62 = -1;
volatile int32_t t17 = -3728;
static uint64_t x75 = 22146988140LLU;
uint64_t x77 = 119250636687298LLU;
volatile int32_t t19 = -1;
int16_t x81 = 5355;
static int32_t x82 = 462243651;
int32_t t21 = 7;
uint32_t x90 = 31U;
static uint16_t x95 = 3U;
int16_t x97 = INT16_MIN;
int16_t x107 = INT16_MAX;
volatile int16_t x111 = INT16_MAX;
volatile uint16_t x117 = 17852U;
uint16_t x118 = 1U;
uint8_t x129 = 3U;
int16_t x137 = -1;
uint32_t x143 = UINT32_MAX;
int8_t x146 = -40;
uint64_t x148 = 367705894734042LLU;
int16_t x149 = -1;
int64_t x155 = INT64_MAX;
int32_t x160 = -1;
static uint8_t x163 = 42U;
int64_t x164 = -1LL;
int64_t t40 = 52LL;
int16_t x166 = 1;
int16_t x168 = -12;
static uint64_t x169 = 124342501LLU;
int64_t x175 = -1LL;
int32_t t44 = -7957;
volatile int64_t x182 = INT64_MIN;
int32_t x191 = -1;
uint64_t t50 = 382482712773622LLU;
int8_t x209 = INT8_MIN;
static int32_t x213 = 1;
int8_t x214 = INT8_MAX;
static volatile int64_t t53 = -712817LL;
uint8_t x221 = 6U;
uint16_t x227 = UINT16_MAX;
uint16_t x235 = UINT16_MAX;
uint32_t t58 = UINT32_MAX;
uint64_t x243 = UINT64_MAX;
uint64_t x250 = 319475174326865452LLU;
static int16_t x256 = INT16_MAX;
uint8_t x262 = 1U;
int32_t x265 = -1;
static int16_t x266 = INT16_MIN;
int64_t x267 = 13LL;
int16_t x268 = -1;
static volatile int32_t t68 = 10655;
volatile int32_t t71 = 31;
int32_t t73 = 7513;
volatile uint32_t x307 = 102725233U;
int64_t x312 = -15LL;
volatile int64_t t77 = -7LL;
volatile int64_t x319 = -3091006229850683LL;
static volatile int32_t x321 = -1;
volatile int8_t x323 = 1;
volatile int8_t x325 = 23;
int8_t x327 = INT8_MIN;
int64_t x328 = 8LL;
int32_t x335 = -1;
int16_t x338 = INT16_MAX;
int32_t t84 = -3820;
static int8_t x344 = -1;
int64_t x348 = INT64_MIN;
int64_t x354 = -1LL;
static volatile int8_t x358 = INT8_MAX;
volatile uint16_t x361 = 13U;
volatile int32_t t91 = 26457579;
uint32_t x370 = 5U;
int32_t x371 = INT32_MAX;
uint32_t x374 = 46271U;
int64_t x382 = -1LL;
int32_t t96 = 948080793;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint8_t x3 = UINT8_MAX;
	int32_t x4 = -1;
	int32_t t0 = -1724;

	t0 = (((x1&x2)<=x3)^x4);

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 9U;
	int8_t x6 = INT8_MAX;
	int32_t x7 = INT32_MAX;
	int64_t x8 = -1LL;
	volatile int64_t t1 = 914593192696378041LL;

	t1 = (((x5&x6)<=x7)^x8);

	if (t1 != -2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	uint64_t x10 = UINT64_MAX;
	volatile int32_t x11 = 4083;
	static int32_t x12 = INT32_MAX;
	static int32_t t2 = INT32_MAX;

	t2 = (((x9&x10)<=x11)^x12);

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	volatile int8_t x14 = INT8_MIN;
	int16_t x16 = -231;
	int32_t t3 = -52;

	t3 = (((x13&x14)<=x15)^x16);

	if (t3 != -232) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int16_t x19 = INT16_MIN;
	volatile int32_t t4 = -128;

	t4 = (((x17&x18)<=x19)^x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MAX;
	uint32_t x22 = 1097U;
	int64_t x23 = -93371187812905LL;
	int32_t x24 = 4044;
	volatile int32_t t5 = -489;

	t5 = (((x21&x22)<=x23)^x24);

	if (t5 != 4044) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -42161619LL;
	int8_t x26 = INT8_MIN;
	uint64_t x27 = 21832599539LLU;
	volatile int64_t x28 = 206266707LL;
	int64_t t6 = -799012862522LL;

	t6 = (((x25&x26)<=x27)^x28);

	if (t6 != 206266707LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 17U;
	volatile uint16_t x30 = 9U;
	uint64_t x31 = 16LLU;
	int16_t x32 = 0;
	int32_t t7 = -130614000;

	t7 = (((x29&x30)<=x31)^x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 74U;
	int16_t x34 = -1;
	int8_t x36 = -3;
	int32_t t8 = 16606;

	t8 = (((x33&x34)<=x35)^x36);

	if (t8 != -3) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 29U;
	int16_t x38 = 117;
	volatile uint32_t x39 = 5336727U;
	int64_t x40 = INT64_MIN;

	t9 = (((x37&x38)<=x39)^x40);

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MAX;
	volatile int8_t x42 = INT8_MIN;
	static int16_t x44 = -1;
	volatile int32_t t10 = 1397797;

	t10 = (((x41&x42)<=x43)^x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 948U;
	static uint32_t x48 = 258U;
	uint32_t t11 = 183770U;

	t11 = (((x45&x46)<=x47)^x48);

	if (t11 != 258U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static int32_t x50 = INT32_MAX;
	static int16_t x51 = -1;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 2;

	t12 = (((x49&x50)<=x51)^x52);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x55 = INT64_MAX;
	int64_t x56 = INT64_MIN;
	volatile int64_t t13 = -1615204285151372175LL;

	t13 = (((x53&x54)<=x55)^x56);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	static int16_t x58 = INT16_MIN;
	volatile int32_t x59 = -1;
	static volatile int64_t t14 = -1957215LL;

	t14 = (((x57&x58)<=x59)^x60);

	if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	volatile int32_t x63 = 361778877;
	int32_t x64 = -2;
	static int32_t t15 = 528;

	t15 = (((x61&x62)<=x63)^x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 65759256;
	int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MAX;
	int32_t x68 = -1;
	volatile int32_t t16 = -384875;

	t16 = (((x65&x66)<=x67)^x68);

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -6427;
	uint16_t x70 = 426U;
	volatile int64_t x71 = -1LL;
	int32_t x72 = -1;

	t17 = (((x69&x70)<=x71)^x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	int16_t x74 = 4;
	int8_t x76 = INT8_MIN;
	int32_t t18 = 1958;

	t18 = (((x73&x74)<=x75)^x76);

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MIN;
	int32_t x79 = INT32_MIN;
	int32_t x80 = INT32_MAX;

	t19 = (((x77&x78)<=x79)^x80);

	if (t19 != 2147483646) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x83 = 7;
	uint16_t x84 = 336U;
	int32_t t20 = -19193882;

	t20 = (((x81&x82)<=x83)^x84);

	if (t20 != 336) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	static volatile uint32_t x86 = 25382U;
	volatile int32_t x87 = -1;
	int16_t x88 = -559;

	t21 = (((x85&x86)<=x87)^x88);

	if (t21 != -560) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 0U;
	static volatile uint16_t x91 = 3360U;
	uint64_t x92 = 122206909LLU;
	volatile uint64_t t22 = 14459LLU;

	t22 = (((x89&x90)<=x91)^x92);

	if (t22 != 122206908LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -399439500;
	uint32_t x94 = 117162U;
	uint64_t x96 = 7LLU;
	volatile uint64_t t23 = 15LLU;

	t23 = (((x93&x94)<=x95)^x96);

	if (t23 != 7LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x98 = INT64_MIN;
	static uint16_t x99 = 2337U;
	int32_t x100 = -1;
	static volatile int32_t t24 = -85902510;

	t24 = (((x97&x98)<=x99)^x100);

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	int32_t x102 = 2617;
	volatile uint32_t x103 = 4445U;
	int64_t x104 = INT64_MIN;
	int64_t t25 = -3519699LL;

	t25 = (((x101&x102)<=x103)^x104);

	if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	volatile int32_t x106 = -1;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -427245;

	t26 = (((x105&x106)<=x107)^x108);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	uint8_t x110 = 52U;
	static uint64_t x112 = 3286275492LLU;
	volatile uint64_t t27 = 853634502654720881LLU;

	t27 = (((x109&x110)<=x111)^x112);

	if (t27 != 3286275493LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	static int8_t x114 = INT8_MIN;
	static int32_t x115 = INT32_MIN;
	int16_t x116 = INT16_MIN;
	int32_t t28 = 0;

	t28 = (((x113&x114)<=x115)^x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x119 = UINT64_MAX;
	static uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = -2529898;

	t29 = (((x117&x118)<=x119)^x120);

	if (t29 != 254) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 0U;
	int16_t x122 = INT16_MIN;
	static int8_t x123 = 5;
	uint8_t x124 = UINT8_MAX;
	static int32_t t30 = 4122111;

	t30 = (((x121&x122)<=x123)^x124);

	if (t30 != 254) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 994387U;
	uint32_t x126 = 525195270U;
	static int16_t x127 = INT16_MIN;
	static int32_t x128 = -1;
	volatile int32_t t31 = -120892;

	t31 = (((x125&x126)<=x127)^x128);

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 3U;
	uint8_t x131 = 26U;
	uint8_t x132 = UINT8_MAX;
	int32_t t32 = -18442477;

	t32 = (((x129&x130)<=x131)^x132);

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = -6;
	static int32_t x134 = -1;
	int64_t x135 = INT64_MIN;
	int32_t x136 = -1;
	volatile int32_t t33 = 30499600;

	t33 = (((x133&x134)<=x135)^x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x138 = 35U;
	int64_t x139 = INT64_MAX;
	int64_t x140 = -779260701004731242LL;
	int64_t t34 = -84LL;

	t34 = (((x137&x138)<=x139)^x140);

	if (t34 != -779260701004731241LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 12U;
	static int64_t x142 = -2068498851366LL;
	int8_t x144 = INT8_MAX;
	int32_t t35 = -938;

	t35 = (((x141&x142)<=x143)^x144);

	if (t35 != 126) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	static int16_t x147 = 15357;
	volatile uint64_t t36 = 792428139399LLU;

	t36 = (((x145&x146)<=x147)^x148);

	if (t36 != 367705894734043LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x150 = 131;
	int32_t x151 = INT32_MIN;
	static volatile int64_t x152 = 18580433326LL;
	static int64_t t37 = 2516LL;

	t37 = (((x149&x150)<=x151)^x152);

	if (t37 != 18580433326LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MAX;
	uint8_t x156 = UINT8_MAX;
	static int32_t t38 = -914547;

	t38 = (((x153&x154)<=x155)^x156);

	if (t38 != 254) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 12138U;
	int8_t x158 = -38;
	int8_t x159 = INT8_MIN;
	volatile int32_t t39 = 455631;

	t39 = (((x157&x158)<=x159)^x160);

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -60;
	int16_t x162 = INT16_MAX;

	t40 = (((x161&x162)<=x163)^x164);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 1U;
	uint8_t x167 = 61U;
	volatile int32_t t41 = 49096;

	t41 = (((x165&x166)<=x167)^x168);

	if (t41 != -11) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = 1U;
	int32_t x171 = INT32_MAX;
	volatile int8_t x172 = -1;
	volatile int32_t t42 = 11;

	t42 = (((x169&x170)<=x171)^x172);

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 7U;
	volatile uint64_t x174 = 46166653723795LLU;
	int64_t x176 = -1LL;
	static int64_t t43 = 4395LL;

	t43 = (((x173&x174)<=x175)^x176);

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 288153736970LLU;
	int64_t x178 = INT64_MIN;
	static volatile int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MIN;

	t44 = (((x177&x178)<=x179)^x180);

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	volatile int8_t x183 = INT8_MAX;
	static int64_t x184 = -1LL;
	volatile int64_t t45 = -2669609417854044118LL;

	t45 = (((x181&x182)<=x183)^x184);

	if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MIN;
	static uint64_t x188 = 146519324601LLU;
	static volatile uint64_t t46 = 22506078433012879LLU;

	t46 = (((x185&x186)<=x187)^x188);

	if (t46 != 146519324601LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	uint16_t x190 = 15053U;
	int16_t x192 = INT16_MAX;
	volatile int32_t t47 = 89;

	t47 = (((x189&x190)<=x191)^x192);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 1U;
	int32_t x194 = -1;
	int32_t x195 = INT32_MIN;
	uint32_t x196 = 29239532U;
	uint32_t t48 = 114U;

	t48 = (((x193&x194)<=x195)^x196);

	if (t48 != 29239532U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -267003LL;
	int64_t x198 = INT64_MAX;
	static int16_t x199 = INT16_MIN;
	uint16_t x200 = 12U;
	int32_t t49 = 12457604;

	t49 = (((x197&x198)<=x199)^x200);

	if (t49 != 12) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	uint64_t x202 = 2762486282964LLU;
	int64_t x203 = 870LL;
	volatile uint64_t x204 = 56127LLU;

	t50 = (((x201&x202)<=x203)^x204);

	if (t50 != 56127LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 228736804LLU;
	uint16_t x206 = UINT16_MAX;
	static uint64_t x207 = 237LLU;
	int8_t x208 = -7;
	volatile int32_t t51 = 156824569;

	t51 = (((x205&x206)<=x207)^x208);

	if (t51 != -7) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x210 = 126LLU;
	int64_t x211 = -113268016468LL;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t52 = 1179LLU;

	t52 = (((x209&x210)<=x211)^x212);

	if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x215 = -1;
	int64_t x216 = -1LL;

	t53 = (((x213&x214)<=x215)^x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -3342;
	int32_t x218 = -2669144;
	static int32_t x219 = INT32_MIN;
	int64_t x220 = INT64_MAX;
	int64_t t54 = INT64_MAX;

	t54 = (((x217&x218)<=x219)^x220);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x222 = INT32_MAX;
	int8_t x223 = INT8_MAX;
	int8_t x224 = INT8_MAX;
	volatile int32_t t55 = -4598140;

	t55 = (((x221&x222)<=x223)^x224);

	if (t55 != 126) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = -177;
	int64_t x226 = INT64_MAX;
	int8_t x228 = -1;
	int32_t t56 = -66;

	t56 = (((x225&x226)<=x227)^x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MIN;
	volatile uint32_t x231 = 3319234U;
	int8_t x232 = -1;
	volatile int32_t t57 = -60;

	t57 = (((x229&x230)<=x231)^x232);

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -1;
	volatile int64_t x234 = INT64_MAX;
	volatile uint32_t x236 = UINT32_MAX;

	t58 = (((x233&x234)<=x235)^x236);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -1;
	volatile int32_t x238 = -1;
	volatile int16_t x239 = INT16_MAX;
	int16_t x240 = -1;
	int32_t t59 = -63;

	t59 = (((x237&x238)<=x239)^x240);

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x242 = -1;
	static volatile int32_t x244 = 499;
	volatile int32_t t60 = 334168;

	t60 = (((x241&x242)<=x243)^x244);

	if (t60 != 498) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -782613;
	uint64_t x246 = UINT64_MAX;
	volatile uint32_t x247 = 3708818U;
	int32_t x248 = -3401947;
	volatile int32_t t61 = 463906336;

	t61 = (((x245&x246)<=x247)^x248);

	if (t61 != -3401947) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	volatile int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MAX;
	int32_t t62 = 817518;

	t62 = (((x249&x250)<=x251)^x252);

	if (t62 != 126) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x253 = -1;
	int16_t x254 = INT16_MIN;
	static volatile uint64_t x255 = 559084LLU;
	static volatile int32_t t63 = -1;

	t63 = (((x253&x254)<=x255)^x256);

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 34LLU;
	static int64_t x258 = INT64_MAX;
	volatile int32_t x259 = INT32_MIN;
	int32_t x260 = 1;
	volatile int32_t t64 = 20383;

	t64 = (((x257&x258)<=x259)^x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 1174;
	int16_t x263 = INT16_MIN;
	volatile int16_t x264 = INT16_MIN;
	static int32_t t65 = -11379309;

	t65 = (((x261&x262)<=x263)^x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t t66 = -1;

	t66 = (((x265&x266)<=x267)^x268);

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x269 = 33393580LLU;
	uint32_t x270 = 8185232U;
	int16_t x271 = INT16_MIN;
	int64_t x272 = INT64_MIN;
	volatile int64_t t67 = 386073546382LL;

	t67 = (((x269&x270)<=x271)^x272);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int64_t x274 = -28294573LL;
	int8_t x275 = INT8_MIN;
	int32_t x276 = INT32_MAX;

	t68 = (((x273&x274)<=x275)^x276);

	if (t68 != 2147483646) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MIN;
	static int64_t x280 = -9407734167LL;
	volatile int64_t t69 = -12LL;

	t69 = (((x277&x278)<=x279)^x280);

	if (t69 != -9407734168LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	int64_t x282 = -1LL;
	static int32_t x283 = -1;
	int64_t x284 = INT64_MAX;
	volatile int64_t t70 = 235784508555LL;

	t70 = (((x281&x282)<=x283)^x284);

	if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint16_t x286 = 14U;
	int16_t x287 = INT16_MIN;
	volatile uint16_t x288 = 62U;

	t71 = (((x285&x286)<=x287)^x288);

	if (t71 != 62) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MAX;
	int16_t x291 = 1244;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = 1;

	t72 = (((x289&x290)<=x291)^x292);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MIN;
	uint64_t x294 = UINT64_MAX;
	int64_t x295 = -1LL;
	static uint8_t x296 = 109U;

	t73 = (((x293&x294)<=x295)^x296);

	if (t73 != 108) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	volatile uint64_t x298 = 7LLU;
	uint64_t x299 = UINT64_MAX;
	uint32_t x300 = UINT32_MAX;
	static uint32_t t74 = 756U;

	t74 = (((x297&x298)<=x299)^x300);

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = 126;
	int8_t x303 = INT8_MIN;
	int8_t x304 = -1;
	int32_t t75 = 989;

	t75 = (((x301&x302)<=x303)^x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -407359490LL;
	int32_t x306 = INT32_MAX;
	static int64_t x308 = -498895LL;
	volatile int64_t t76 = -4LL;

	t76 = (((x305&x306)<=x307)^x308);

	if (t76 != -498895LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x309 = 19U;
	int32_t x310 = INT32_MIN;
	int8_t x311 = 14;

	t77 = (((x309&x310)<=x311)^x312);

	if (t77 != -16LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = 24U;
	uint16_t x314 = 34U;
	uint16_t x315 = 2U;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = -15541854;

	t78 = (((x313&x314)<=x315)^x316);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -2613792;
	int16_t x318 = -1;
	uint16_t x320 = 0U;
	int32_t t79 = -1;

	t79 = (((x317&x318)<=x319)^x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x322 = -1486815681472LL;
	int32_t x324 = 157;
	volatile int32_t t80 = -6;

	t80 = (((x321&x322)<=x323)^x324);

	if (t80 != 156) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x326 = INT8_MAX;
	int64_t t81 = -3207253792591161LL;

	t81 = (((x325&x326)<=x327)^x328);

	if (t81 != 8LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = 16168614289443993LL;
	static volatile int64_t x330 = INT64_MIN;
	int8_t x331 = -1;
	volatile int16_t x332 = INT16_MIN;
	int32_t t82 = 482085;

	t82 = (((x329&x330)<=x331)^x332);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	static volatile uint64_t x334 = 15393987563LLU;
	static uint8_t x336 = 0U;
	int32_t t83 = -8;

	t83 = (((x333&x334)<=x335)^x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x337 = 15U;
	int16_t x339 = -1;
	int32_t x340 = -1;

	t84 = (((x337&x338)<=x339)^x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -31;
	int32_t x342 = INT32_MAX;
	static volatile int32_t x343 = -1;
	int32_t t85 = 62484282;

	t85 = (((x341&x342)<=x343)^x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 341642;
	int8_t x346 = 1;
	int8_t x347 = INT8_MAX;
	static int64_t t86 = 2313963441149LL;

	t86 = (((x345&x346)<=x347)^x348);

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 9355;
	volatile int8_t x350 = -1;
	uint16_t x351 = UINT16_MAX;
	static uint8_t x352 = UINT8_MAX;
	volatile int32_t t87 = -12384291;

	t87 = (((x349&x350)<=x351)^x352);

	if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 1;
	uint16_t x355 = 11623U;
	uint32_t x356 = 0U;
	volatile uint32_t t88 = 24755U;

	t88 = (((x353&x354)<=x355)^x356);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 2U;
	uint32_t x359 = 50851746U;
	int64_t x360 = INT64_MIN;
	volatile int64_t t89 = -117LL;

	t89 = (((x357&x358)<=x359)^x360);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = -1;
	volatile int16_t x363 = 1781;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t90 = 0;

	t90 = (((x361&x362)<=x363)^x364);

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MIN;
	uint16_t x366 = 3230U;
	uint32_t x367 = 1U;
	volatile int8_t x368 = -1;

	t91 = (((x365&x366)<=x367)^x368);

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = INT32_MAX;
	int64_t x372 = -16463785273643LL;
	int64_t t92 = 9LL;

	t92 = (((x369&x370)<=x371)^x372);

	if (t92 != -16463785273644LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int64_t x375 = -1LL;
	static volatile int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 655811572;

	t93 = (((x373&x374)<=x375)^x376);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = -15;
	volatile int32_t x378 = INT32_MAX;
	static int32_t x379 = 28025728;
	static int16_t x380 = 91;
	int32_t t94 = -250226088;

	t94 = (((x377&x378)<=x379)^x380);

	if (t94 != 91) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = INT16_MAX;
	int64_t x383 = -1LL;
	int32_t x384 = INT32_MIN;
	int32_t t95 = INT32_MIN;

	t95 = (((x381&x382)<=x383)^x384);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	uint16_t x386 = 30207U;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;

	t96 = (((x385&x386)<=x387)^x388);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 42U;
	int32_t x390 = -8944356;
	int64_t x391 = INT64_MIN;
	int64_t x392 = 5521137303939LL;
	volatile int64_t t97 = 2056907633860897LL;

	t97 = (((x389&x390)<=x391)^x392);

	if (t97 != 5521137303939LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int8_t x394 = INT8_MIN;
	uint32_t x395 = 64217U;
	int64_t x396 = 21268561599260LL;
	static volatile int64_t t98 = 896191352422424LL;

	t98 = (((x393&x394)<=x395)^x396);

	if (t98 != 21268561599260LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x398 = 3U;
	int64_t x399 = INT64_MIN;
	int32_t x400 = 3;
	int32_t t99 = 18453;

	t99 = (((x397&x398)<=x399)^x400);

	if (t99 != 3) { NG(); } else { ; }
	
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

