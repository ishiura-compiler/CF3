#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
int32_t t0 = 3;
volatile uint32_t x10 = 5U;
int16_t x24 = INT16_MAX;
uint16_t x31 = 106U;
uint8_t x33 = 0U;
volatile uint64_t x38 = UINT64_MAX;
volatile uint64_t t9 = 846731179186902LLU;
uint32_t t10 = 206931U;
int32_t x59 = -1;
uint8_t x60 = 5U;
uint32_t t15 = 71905136U;
static int16_t x67 = -1;
static int32_t x72 = INT32_MIN;
static int32_t t17 = -1842;
int64_t x81 = INT64_MIN;
volatile int64_t t20 = -3366LL;
static int64_t x88 = INT64_MAX;
int16_t x89 = -1;
static volatile int16_t x93 = INT16_MIN;
static int8_t x103 = -1;
volatile int32_t t25 = -623;
int32_t x112 = 29865312;
int64_t x113 = INT64_MIN;
int64_t t28 = -106LL;
int64_t x117 = -1LL;
static int64_t t30 = 1631LL;
uint64_t x129 = 33830170638095880LLU;
uint8_t x132 = 15U;
volatile uint64_t t32 = 3304553723287606377LLU;
int64_t t34 = 1LL;
uint32_t x143 = 31687127U;
static uint64_t t35 = 1126338721804087104LLU;
uint8_t x148 = 0U;
static int16_t x149 = INT16_MIN;
int16_t x151 = INT16_MAX;
int64_t t38 = -174240702437197LL;
int64_t t39 = -9024166489513698LL;
uint16_t x165 = 113U;
int32_t t41 = 57;
int16_t x178 = INT16_MIN;
int64_t x181 = -1LL;
int16_t x182 = INT16_MIN;
uint64_t t45 = 127640860477LLU;
int8_t x186 = INT8_MIN;
int16_t x191 = 1552;
uint32_t x192 = UINT32_MAX;
static int64_t t47 = 28835684565176451LL;
int8_t x193 = INT8_MIN;
int16_t x198 = 132;
uint64_t x200 = 17906409295698637LLU;
uint16_t x201 = 3787U;
volatile int32_t x206 = 4;
static uint8_t x208 = 10U;
volatile uint64_t t51 = 26822766LLU;
static int64_t t52 = 377354296045LL;
int32_t x217 = INT32_MIN;
int32_t t54 = -2218916;
static volatile uint32_t x228 = 1U;
volatile int16_t x231 = INT16_MIN;
int64_t t60 = -140938LL;
uint64_t x245 = 3169723LLU;
uint8_t x254 = 18U;
uint64_t x261 = 15277466664964LLU;
int64_t t66 = 0LL;
int64_t x272 = INT64_MIN;
static int64_t x274 = -1LL;
uint8_t x275 = UINT8_MAX;
volatile uint64_t t69 = 93972LLU;
volatile int16_t x284 = INT16_MIN;
uint16_t x305 = UINT16_MAX;
uint32_t x308 = 105940U;
int64_t t76 = 3540953683048795538LL;
int64_t x312 = -1LL;
uint32_t x313 = UINT32_MAX;
int32_t x318 = -5;
volatile int64_t t81 = 40LL;
uint64_t x329 = UINT64_MAX;
static uint16_t x334 = 30U;
volatile int16_t x336 = -1;
static volatile uint16_t x338 = 105U;
int8_t x339 = 1;
uint32_t t84 = 2965U;
static uint64_t x349 = UINT64_MAX;
volatile uint32_t x355 = 437915435U;
int64_t t88 = -261019199LL;
int64_t x364 = 542636048767812LL;
uint8_t x365 = 2U;
volatile int64_t x366 = -262124785LL;
static uint64_t x373 = 1595572085679835LLU;
uint32_t x375 = 2U;
uint8_t x376 = 0U;
int32_t x381 = INT32_MIN;
int16_t x385 = -1;
int8_t x389 = INT8_MAX;
uint32_t x392 = UINT32_MAX;
static int64_t x393 = -1LL;
uint64_t x398 = UINT64_MAX;
static int32_t x400 = 190725378;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	volatile int32_t x3 = -924;
	uint16_t x4 = UINT16_MAX;

	t0 = (((x1&x2)^x3)^x4);

	if (t0 != 2147419035) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -22;
	int64_t x6 = -1LL;
	uint32_t x7 = 72681U;
	volatile int8_t x8 = 1;
	static int64_t t1 = -1516961LL;

	t1 = (((x5&x6)^x7)^x8);

	if (t1 != -72702LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int16_t x11 = INT16_MIN;
	int16_t x12 = INT16_MIN;
	uint32_t t2 = 33290U;

	t2 = (((x9&x10)^x11)^x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile int8_t x14 = INT8_MIN;
	uint16_t x15 = UINT16_MAX;
	uint64_t x16 = 138103734236144606LLU;
	volatile uint64_t t3 = 2294LLU;

	t3 = (((x13&x14)^x15)^x16);

	if (t3 != 18308640340188077089LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	volatile uint16_t x18 = 899U;
	int32_t x19 = -3;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -834626913;

	t4 = (((x17&x18)^x19)^x20);

	if (t4 != -2147483646) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int16_t x22 = INT16_MIN;
	int8_t x23 = INT8_MIN;
	volatile int32_t t5 = 129;

	t5 = (((x21&x22)^x23)^x24);

	if (t5 != -32641) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	static uint16_t x26 = 21U;
	int8_t x27 = -42;
	volatile int64_t x28 = 4071543LL;
	static volatile int64_t t6 = -31734LL;

	t6 = (((x25&x26)^x27)^x28);

	if (t6 != -4071500LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	static int16_t x30 = INT16_MIN;
	static volatile int16_t x32 = INT16_MIN;
	static int32_t t7 = 112417;

	t7 = (((x29&x30)^x31)^x32);

	if (t7 != 106) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = UINT8_MAX;
	volatile int16_t x35 = INT16_MIN;
	int32_t x36 = -49145;
	static int32_t t8 = -212926;

	t8 = (((x33&x34)^x35)^x36);

	if (t8 != 49159) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int32_t x39 = INT32_MAX;
	uint16_t x40 = 421U;

	t9 = (((x37&x38)^x39)^x40);

	if (t9 != 2147451301LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	int8_t x42 = -12;
	uint32_t x43 = UINT32_MAX;
	uint32_t x44 = 24U;

	t10 = (((x41&x42)^x43)^x44);

	if (t10 != 32743U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	uint64_t x46 = 1243015893896LLU;
	uint64_t x47 = 837258585074110870LLU;
	int16_t x48 = 172;
	uint64_t t11 = 10430997274934191LLU;

	t11 = (((x45&x46)^x47)^x48);

	if (t11 != 837259542851817786LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	volatile uint8_t x50 = 0U;
	static int64_t x51 = -1LL;
	uint8_t x52 = UINT8_MAX;
	int64_t t12 = -14910716586LL;

	t12 = (((x49&x50)^x51)^x52);

	if (t12 != -256LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	uint16_t x54 = 8033U;
	static volatile int64_t x55 = INT64_MIN;
	int8_t x56 = -1;
	volatile int64_t t13 = 11179996918334111LL;

	t13 = (((x53&x54)^x55)^x56);

	if (t13 != 9223372036854767774LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	static uint64_t x58 = 3LLU;
	uint64_t t14 = 1LLU;

	t14 = (((x57&x58)^x59)^x60);

	if (t14 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x61 = -1;
	static uint32_t x62 = UINT32_MAX;
	volatile uint8_t x63 = 0U;
	volatile int32_t x64 = INT32_MIN;

	t15 = (((x61&x62)^x63)^x64);

	if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 27U;
	static uint32_t x66 = 47726836U;
	int64_t x68 = INT64_MAX;
	int64_t t16 = -24602232637978LL;

	t16 = (((x65&x66)^x67)^x68);

	if (t16 != 9223372032559808528LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 0U;
	int32_t x70 = -87132;
	uint16_t x71 = 32372U;

	t17 = (((x69&x70)^x71)^x72);

	if (t17 != -2147451276) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MIN;
	uint32_t x75 = 22262U;
	uint16_t x76 = 462U;
	volatile int64_t t18 = 1LL;

	t18 = (((x73&x74)^x75)^x76);

	if (t18 != -9223372036854753480LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = UINT32_MAX;
	uint64_t x78 = UINT64_MAX;
	static volatile uint8_t x79 = 1U;
	uint8_t x80 = 107U;
	volatile uint64_t t19 = 206820255LLU;

	t19 = (((x77&x78)^x79)^x80);

	if (t19 != 4294967189LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = UINT16_MAX;
	int16_t x83 = -246;
	int8_t x84 = INT8_MIN;

	t20 = (((x81&x82)^x83)^x84);

	if (t20 != 138LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = 1LL;
	static int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	int64_t t21 = -11072372766180LL;

	t21 = (((x85&x86)^x87)^x88);

	if (t21 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = UINT8_MAX;
	int32_t x91 = -1;
	static int64_t x92 = INT64_MAX;
	volatile int64_t t22 = -389LL;

	t22 = (((x89&x90)^x91)^x92);

	if (t22 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = UINT8_MAX;
	int32_t x95 = -1;
	uint32_t x96 = 1U;
	volatile uint32_t t23 = 2U;

	t23 = (((x93&x94)^x95)^x96);

	if (t23 != 4294967294U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 3U;
	uint16_t x98 = 24632U;
	uint32_t x99 = 14375729U;
	int32_t x100 = 0;
	volatile uint32_t t24 = 16U;

	t24 = (((x97&x98)^x99)^x100);

	if (t24 != 14375729U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 0;
	uint16_t x102 = 3267U;
	int16_t x104 = -2;

	t25 = (((x101&x102)^x103)^x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int16_t x106 = -597;
	volatile int16_t x107 = -1;
	int64_t x108 = INT64_MIN;
	static int64_t t26 = -15050982LL;

	t26 = (((x105&x106)^x107)^x108);

	if (t26 != -9223372036854775212LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	uint8_t x110 = 0U;
	static int8_t x111 = -1;
	static volatile int64_t t27 = 283073LL;

	t27 = (((x109&x110)^x111)^x112);

	if (t27 != -29865313LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MIN;
	volatile uint8_t x115 = 1U;
	int64_t x116 = 4729LL;

	t28 = (((x113&x114)^x115)^x116);

	if (t28 != -9223372036854771080LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x118 = UINT16_MAX;
	uint16_t x119 = UINT16_MAX;
	uint64_t x120 = 1503828415LLU;
	uint64_t t29 = 108672630LLU;

	t29 = (((x117&x118)^x119)^x120);

	if (t29 != 1503828415LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	int32_t x122 = 13921431;
	int64_t x123 = -1LL;
	int64_t x124 = -1LL;

	t30 = (((x121&x122)^x123)^x124);

	if (t30 != 13921431LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x126 = UINT8_MAX;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = 5086814378LLU;
	uint64_t t31 = 7208LLU;

	t31 = (((x125&x126)^x127)^x128);

	if (t31 != 18446744068622721066LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = -1;
	int8_t x131 = -1;

	t32 = (((x129&x130)^x131)^x132);

	if (t32 != 18412913903071455736LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static int32_t x134 = -1;
	int16_t x135 = -28;
	int64_t x136 = INT64_MAX;
	volatile int64_t t33 = -53420521464852LL;

	t33 = (((x133&x134)^x135)^x136);

	if (t33 != 9223372036854775707LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = -1LL;
	static uint16_t x138 = UINT16_MAX;
	int16_t x139 = INT16_MIN;
	volatile int64_t x140 = INT64_MAX;

	t34 = (((x137&x138)^x139)^x140);

	if (t34 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int16_t x142 = 0;
	static uint64_t x144 = 6636LLU;

	t35 = (((x141&x142)^x143)^x144);

	if (t35 != 31692859LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	uint8_t x146 = UINT8_MAX;
	static int64_t x147 = 12951306897LL;
	static volatile uint64_t t36 = 374501307457LLU;

	t36 = (((x145&x146)^x147)^x148);

	if (t36 != 12951306862LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x150 = UINT64_MAX;
	int16_t x152 = -1;
	volatile uint64_t t37 = 7LLU;

	t37 = (((x149&x150)^x151)^x152);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	volatile uint32_t x154 = 248U;
	int32_t x155 = -1;
	static volatile int64_t x156 = -1LL;

	t38 = (((x153&x154)^x155)^x156);

	if (t38 != -4294967296LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 1643594540864375LL;
	int64_t x158 = INT64_MIN;
	int64_t x159 = -86180756975753LL;
	int16_t x160 = INT16_MIN;

	t39 = (((x157&x158)^x159)^x160);

	if (t39 != 86180756950903LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	uint8_t x162 = 122U;
	int64_t x163 = INT64_MIN;
	int16_t x164 = 1028;
	volatile int64_t t40 = -5LL;

	t40 = (((x161&x162)^x163)^x164);

	if (t40 != -9223372036854774780LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 98U;
	uint16_t x167 = 6172U;
	int32_t x168 = INT32_MIN;

	t41 = (((x165&x166)^x167)^x168);

	if (t41 != -2147477380) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 1178U;
	static int8_t x170 = -1;
	static int16_t x171 = INT16_MAX;
	static int16_t x172 = INT16_MAX;
	static volatile int32_t t42 = -1998;

	t42 = (((x169&x170)^x171)^x172);

	if (t42 != 1178) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = -1;
	volatile int8_t x174 = 1;
	int32_t x175 = INT32_MAX;
	int32_t x176 = INT32_MAX;
	volatile int32_t t43 = 121355857;

	t43 = (((x173&x174)^x175)^x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = UINT8_MAX;
	uint8_t x179 = UINT8_MAX;
	int32_t x180 = -5973;
	volatile int32_t t44 = 6380;

	t44 = (((x177&x178)^x179)^x180);

	if (t44 != -6060) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x183 = -1;
	uint64_t x184 = 5LLU;

	t45 = (((x181&x182)^x183)^x184);

	if (t45 != 32762LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	volatile uint32_t x187 = 25995291U;
	int64_t x188 = INT64_MIN;
	int64_t t46 = -63LL;

	t46 = (((x185&x186)^x187)^x188);

	if (t46 != -9223372034733287525LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = 12009304852729LL;
	int16_t x190 = INT16_MIN;

	t47 = (((x189&x190)^x191)^x192);

	if (t47 != 12012447234543LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = 442343664LL;
	uint32_t x195 = UINT32_MAX;
	int64_t x196 = INT64_MAX;
	volatile int64_t t48 = 23425939LL;

	t48 = (((x193&x194)^x195)^x196);

	if (t48 != 9223372033002152064LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MAX;
	volatile int8_t x199 = INT8_MAX;
	uint64_t t49 = 1066753984LLU;

	t49 = (((x197&x198)^x199)^x200);

	if (t49 != 17906409295698486LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = -13541;
	volatile int16_t x203 = INT16_MIN;
	static volatile int8_t x204 = INT8_MAX;
	int32_t t50 = -366601;

	t50 = (((x201&x202)^x203)^x204);

	if (t50 != -30092) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	int16_t x207 = INT16_MAX;

	t51 = (((x205&x206)^x207)^x208);

	if (t51 != 32753LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	int64_t x210 = INT64_MAX;
	int32_t x211 = INT32_MIN;
	int16_t x212 = -1;

	t52 = (((x209&x210)^x211)^x212);

	if (t52 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MAX;
	uint16_t x214 = 23259U;
	int64_t x215 = -3614461LL;
	int32_t x216 = INT32_MIN;
	volatile int64_t t53 = -15834726132852728LL;

	t53 = (((x213&x214)^x215)^x216);

	if (t53 != 2143847384LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x218 = -1;
	volatile int32_t x219 = -16310;
	int32_t x220 = 172132177;

	t54 = (((x217&x218)^x219)^x220);

	if (t54 != 1975338779) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int64_t x222 = -1LL;
	volatile int32_t x223 = -1;
	int16_t x224 = INT16_MIN;
	volatile int64_t t55 = -78860362639321538LL;

	t55 = (((x221&x222)^x223)^x224);

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint8_t x226 = 107U;
	int64_t x227 = INT64_MAX;
	int64_t t56 = -3991LL;

	t56 = (((x225&x226)^x227)^x228);

	if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int64_t x230 = INT64_MAX;
	volatile uint32_t x232 = 7U;
	static int64_t t57 = -780782781135794LL;

	t57 = (((x229&x230)^x231)^x232);

	if (t57 != -4294934536LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = 6075920771452221LL;
	volatile int16_t x234 = 57;
	int8_t x235 = INT8_MIN;
	int64_t x236 = -1LL;
	static int64_t t58 = -2LL;

	t58 = (((x233&x234)^x235)^x236);

	if (t58 != 70LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	int8_t x238 = INT8_MAX;
	uint32_t x239 = UINT32_MAX;
	int16_t x240 = INT16_MIN;
	static volatile int64_t t59 = -4788939158728LL;

	t59 = (((x237&x238)^x239)^x240);

	if (t59 != -4294934656LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = 4;
	int64_t x242 = -1LL;
	uint32_t x243 = 10261620U;
	int16_t x244 = -1;

	t60 = (((x241&x242)^x243)^x244);

	if (t60 != -10261617LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x246 = INT32_MIN;
	int32_t x247 = INT32_MAX;
	static uint32_t x248 = 606170U;
	static volatile uint64_t t61 = 9LLU;

	t61 = (((x245&x246)^x247)^x248);

	if (t61 != 2146877477LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -1;
	uint32_t x250 = 23342585U;
	volatile int8_t x251 = -4;
	int16_t x252 = INT16_MIN;
	volatile uint32_t t62 = 138021311U;

	t62 = (((x249&x250)^x251)^x252);

	if (t62 != 23351813U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 458U;
	int16_t x255 = INT16_MIN;
	static int64_t x256 = -656720364447862LL;
	volatile int64_t t63 = -23070469LL;

	t63 = (((x253&x254)^x255)^x256);

	if (t63 != 656720364459912LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	volatile int64_t x258 = -573957LL;
	int64_t x259 = INT64_MAX;
	int8_t x260 = INT8_MAX;
	volatile int64_t t64 = 28710682611LL;

	t64 = (((x257&x258)^x259)^x260);

	if (t64 != 9223372036854760059LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x262 = INT32_MAX;
	int64_t x263 = INT64_MAX;
	static int8_t x264 = INT8_MIN;
	volatile uint64_t t65 = 19LLU;

	t65 = (((x261&x262)^x263)^x264);

	if (t65 != 9223372037122769019LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	volatile int8_t x266 = -1;
	volatile int64_t x267 = INT64_MIN;
	volatile uint32_t x268 = 14U;

	t66 = (((x265&x266)^x267)^x268);

	if (t66 != 9223372036854743054LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	static uint8_t x270 = 2U;
	static int8_t x271 = 23;
	int64_t t67 = 702876330533773LL;

	t67 = (((x269&x270)^x271)^x272);

	if (t67 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 383165978LL;
	int64_t x276 = INT64_MAX;
	volatile int64_t t68 = -44650456698121641LL;

	t68 = (((x273&x274)^x275)^x276);

	if (t68 != 9223372036471609626LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int16_t x278 = -6188;
	int8_t x279 = 0;
	static volatile uint64_t x280 = 95LLU;

	t69 = (((x277&x278)^x279)^x280);

	if (t69 != 4294961035LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	static volatile uint16_t x282 = UINT16_MAX;
	static uint8_t x283 = UINT8_MAX;
	int32_t t70 = 127248;

	t70 = (((x281&x282)^x283)^x284);

	if (t70 != -65281) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	static int16_t x286 = 1382;
	static int8_t x287 = -25;
	int64_t x288 = 106055115024154LL;
	int64_t t71 = -39819757176106062LL;

	t71 = (((x285&x286)^x287)^x288);

	if (t71 != -106055115024229LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	int32_t x290 = -2351;
	int16_t x291 = 24;
	int32_t x292 = -12;
	int32_t t72 = -536136;

	t72 = (((x289&x290)^x291)^x292);

	if (t72 != 2365) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 110;
	uint8_t x294 = 2U;
	volatile int8_t x295 = 6;
	uint16_t x296 = UINT16_MAX;
	int32_t t73 = 64795;

	t73 = (((x293&x294)^x295)^x296);

	if (t73 != 65531) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 31;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = INT32_MAX;
	int64_t x300 = INT64_MIN;
	int64_t t74 = -849474568786LL;

	t74 = (((x297&x298)^x299)^x300);

	if (t74 != -9223372034707292192LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = -1;
	uint16_t x303 = UINT16_MAX;
	static int64_t x304 = 952090LL;
	int64_t t75 = -420572374844786386LL;

	t75 = (((x301&x302)^x303)^x304);

	if (t75 != -2146535195LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MAX;
	uint32_t x307 = 150662U;

	t76 = (((x305&x306)^x307)^x308);

	if (t76 != 208557LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -22;
	volatile int32_t x310 = -3152;
	int64_t x311 = INT64_MIN;
	int64_t t77 = -65LL;

	t77 = (((x309&x310)^x311)^x312);

	if (t77 != -9223372036854772641LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = -15527902LL;
	volatile int8_t x315 = INT8_MIN;
	int32_t x316 = -1;
	int64_t t78 = 218301208890766035LL;

	t78 = (((x313&x314)^x315)^x316);

	if (t78 != 4279439453LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	uint64_t x319 = 815262049780149061LLU;
	static int16_t x320 = INT16_MIN;
	uint64_t t79 = 1550348426263371796LLU;

	t79 = (((x317&x318)^x319)^x320);

	if (t79 != 815262049780159678LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = -471618798803421LL;
	int32_t x322 = -41456;
	uint8_t x323 = UINT8_MAX;
	int16_t x324 = 0;
	int64_t t80 = 133397341970673663LL;

	t80 = (((x321&x322)^x323)^x324);

	if (t80 != -471618798811393LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = -7594749LL;
	volatile int64_t x326 = -554955489160593375LL;
	volatile int64_t x327 = INT64_MIN;
	int64_t x328 = -1LL;

	t81 = (((x325&x326)^x327)^x328);

	if (t81 != -8668416547687759874LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MIN;
	int8_t x332 = 10;
	uint64_t t82 = 31960791605230LLU;

	t82 = (((x329&x330)^x331)^x332);

	if (t82 != 9223372034707292170LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MIN;
	static volatile int32_t x335 = -1;
	static int64_t t83 = -46LL;

	t83 = (((x333&x334)^x335)^x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	uint32_t x340 = 233744419U;

	t84 = (((x337&x338)^x339)^x340);

	if (t84 != 233744459U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MIN;
	static int32_t x342 = -4983994;
	static int32_t x343 = INT32_MIN;
	static uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = -13085;

	t85 = (((x341&x342)^x343)^x344);

	if (t85 != 2142470143) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = INT16_MAX;
	int64_t x347 = INT64_MAX;
	uint32_t x348 = 1123344U;
	volatile int64_t t86 = 2169567397LL;

	t86 = (((x345&x346)^x347)^x348);

	if (t86 != 9223372036853638160LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x350 = INT64_MAX;
	int64_t x351 = -144672932917683LL;
	static int8_t x352 = INT8_MIN;
	volatile uint64_t t87 = 2401733464775LLU;

	t87 = (((x349&x350)^x351)^x352);

	if (t87 != 9223227363921858098LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	static int64_t x354 = -1LL;
	uint32_t x356 = UINT32_MAX;

	t88 = (((x353&x354)^x355)^x356);

	if (t88 != 3857051691LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = -1;
	static volatile uint32_t x358 = 299181645U;
	int16_t x359 = -3;
	uint32_t x360 = UINT32_MAX;
	uint32_t t89 = 3U;

	t89 = (((x357&x358)^x359)^x360);

	if (t89 != 299181647U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = 1;
	int32_t x362 = 468799711;
	static int32_t x363 = 0;
	int64_t t90 = -254547560681224854LL;

	t90 = (((x361&x362)^x363)^x364);

	if (t90 != 542636048767813LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x367 = UINT8_MAX;
	int16_t x368 = INT16_MIN;
	int64_t t91 = -164LL;

	t91 = (((x365&x366)^x367)^x368);

	if (t91 != -32515LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = 925181;
	static int32_t x370 = INT32_MAX;
	int64_t x371 = INT64_MIN;
	static int64_t x372 = INT64_MAX;
	int64_t t92 = 13933LL;

	t92 = (((x369&x370)^x371)^x372);

	if (t92 != -925182LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MIN;
	static uint64_t t93 = 2256346655469LLU;

	t93 = (((x373&x374)^x375)^x376);

	if (t93 != 1595571760529410LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = UINT8_MAX;
	int32_t x378 = 140;
	static uint16_t x379 = 0U;
	int64_t x380 = -81455LL;
	volatile int64_t t94 = -2860LL;

	t94 = (((x377&x378)^x379)^x380);

	if (t94 != -81571LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = 2156882617971961LLU;
	int8_t x383 = INT8_MIN;
	int16_t x384 = 4;
	volatile uint64_t t95 = 20843LLU;

	t95 = (((x381&x382)^x383)^x384);

	if (t95 != 18444587192673107844LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x386 = UINT16_MAX;
	uint32_t x387 = UINT32_MAX;
	static volatile int32_t x388 = INT32_MIN;
	uint32_t t96 = 861490511U;

	t96 = (((x385&x386)^x387)^x388);

	if (t96 != 2147418112U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x390 = INT64_MIN;
	uint64_t x391 = 8103647LLU;
	uint64_t t97 = 708778LLU;

	t97 = (((x389&x390)^x391)^x392);

	if (t97 != 4286863648LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x394 = 3U;
	uint8_t x395 = UINT8_MAX;
	int64_t x396 = -31305LL;
	volatile int64_t t98 = 2305306101LL;

	t98 = (((x393&x394)^x395)^x396);

	if (t98 != -31413LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x397 = 3U;
	int16_t x399 = INT16_MIN;
	static uint64_t t99 = 205538LLU;

	t99 = (((x397&x398)^x399)^x400);

	if (t99 != 18446744073518824705LLU) { NG(); } else { ; }
	
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

