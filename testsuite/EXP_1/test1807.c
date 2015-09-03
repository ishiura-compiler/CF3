#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t0 = 153130370215358502LL;
uint8_t x20 = 1U;
int64_t x24 = INT64_MIN;
static int32_t x30 = 1088;
static volatile int64_t t7 = INT64_MAX;
uint64_t x33 = 964250LLU;
uint64_t x39 = 14590313606LLU;
int32_t t9 = 89195709;
volatile uint16_t x44 = UINT16_MAX;
volatile uint64_t t11 = UINT64_MAX;
volatile uint64_t t12 = UINT64_MAX;
int16_t x56 = INT16_MIN;
volatile int8_t x60 = INT8_MIN;
int32_t t15 = 109;
int16_t x65 = 16;
static int32_t t16 = 576;
static int32_t x72 = -311;
int64_t x76 = INT64_MIN;
int64_t x80 = -1LL;
volatile int32_t t21 = -613;
static uint8_t x91 = UINT8_MAX;
int32_t t22 = -1266;
uint32_t x104 = 12383422U;
static volatile uint32_t t25 = 23169U;
volatile uint32_t x107 = UINT32_MAX;
int16_t x112 = 0;
int32_t x117 = INT32_MIN;
static int16_t x120 = INT16_MAX;
volatile int32_t t29 = 427745;
int64_t x121 = INT64_MIN;
static uint16_t x124 = 1307U;
int8_t x133 = INT8_MIN;
static uint8_t x134 = UINT8_MAX;
int8_t x138 = 3;
static volatile int16_t x143 = INT16_MAX;
int32_t x150 = -1;
int16_t x154 = INT16_MAX;
uint8_t x162 = UINT8_MAX;
uint32_t x175 = UINT32_MAX;
static int8_t x176 = INT8_MAX;
int8_t x178 = INT8_MAX;
static int32_t x180 = -126504;
volatile int64_t x186 = 15720LL;
int32_t x188 = INT32_MAX;
volatile int32_t t46 = INT32_MAX;
uint32_t x193 = UINT32_MAX;
volatile int32_t t48 = -11633529;
int32_t x203 = INT32_MIN;
volatile int32_t x206 = 17776;
uint32_t x208 = 6U;
volatile uint32_t t51 = 564U;
int16_t x214 = 7552;
int64_t x217 = -98LL;
static int16_t x218 = INT16_MIN;
uint64_t x220 = 245LLU;
volatile uint64_t t54 = 76879335756LLU;
static volatile int32_t x228 = 21055336;
volatile uint16_t x234 = 221U;
volatile int64_t x236 = -1LL;
int16_t x244 = -1;
uint8_t x249 = UINT8_MAX;
volatile int64_t t64 = INT64_MAX;
int32_t t66 = 1;
int16_t x269 = -1;
volatile uint32_t t67 = 8022U;
int8_t x273 = -1;
int16_t x278 = 22;
int16_t x281 = INT16_MIN;
static uint64_t t72 = 25591LLU;
int16_t x295 = INT16_MIN;
int8_t x303 = INT8_MAX;
int16_t x315 = INT16_MIN;
static uint64_t t78 = UINT64_MAX;
static volatile uint16_t x317 = 1U;
int32_t x323 = -1;
int8_t x328 = INT8_MIN;
volatile int64_t x336 = INT64_MIN;
static int64_t x341 = 598LL;
static int8_t x342 = INT8_MIN;
int64_t x354 = -4020848505LL;
uint16_t x355 = 4030U;
uint16_t x360 = 26U;
uint32_t x363 = 28U;
volatile int32_t t90 = -3531339;
int16_t x368 = -1;
int64_t x369 = 1482465LL;
int64_t t93 = INT64_MIN;
uint16_t x380 = UINT16_MAX;
int32_t t94 = 1686;
int32_t x381 = INT32_MIN;
uint64_t x387 = UINT64_MAX;
uint8_t x389 = 1U;
volatile int64_t x397 = INT64_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int32_t x2 = INT32_MIN;
	uint32_t x3 = 15340U;
	volatile int64_t x4 = -1LL;

	t0 = (((x1&x2)<x3)^x4);

	if (t0 != -2LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 238U;
	int16_t x6 = -1;
	int64_t x7 = INT64_MIN;
	int8_t x8 = -7;
	volatile int32_t t1 = 3851649;

	t1 = (((x5&x6)<x7)^x8);

	if (t1 != -7) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int64_t x10 = -25LL;
	volatile int32_t x11 = 138;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = INT32_MIN;

	t2 = (((x9&x10)<x11)^x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 7263815LLU;
	volatile int64_t x14 = 1LL;
	int8_t x15 = -1;
	static volatile int32_t x16 = INT32_MAX;
	int32_t t3 = 150052;

	t3 = (((x13&x14)<x15)^x16);

	if (t3 != 2147483646) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int32_t x18 = INT32_MAX;
	volatile int64_t x19 = -6031254248660LL;
	int32_t t4 = 119;

	t4 = (((x17&x18)<x19)^x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 5U;
	uint64_t x22 = 16515419290LLU;
	int64_t x23 = 4159257LL;
	volatile int64_t t5 = 163976893426981LL;

	t5 = (((x21&x22)<x23)^x24);

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 1939U;
	int8_t x26 = -1;
	uint32_t x27 = 87U;
	int64_t x28 = 56LL;
	int64_t t6 = 57922119762170LL;

	t6 = (((x25&x26)<x27)^x28);

	if (t6 != 56LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -37;
	uint16_t x31 = 86U;
	volatile int64_t x32 = INT64_MAX;

	t7 = (((x29&x30)<x31)^x32);

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -101814726415698865LL;
	uint32_t x35 = 6657213U;
	static uint32_t x36 = UINT32_MAX;
	volatile uint32_t t8 = 33367231U;

	t8 = (((x33&x34)<x35)^x36);

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -172;
	uint32_t x38 = 60U;
	static int32_t x40 = INT32_MAX;

	t9 = (((x37&x38)<x39)^x40);

	if (t9 != 2147483646) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 99912;
	int16_t x42 = INT16_MIN;
	static uint64_t x43 = 5565LLU;
	static volatile int32_t t10 = -8;

	t10 = (((x41&x42)<x43)^x44);

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static int64_t x46 = 2601LL;
	int16_t x47 = -4664;
	static volatile uint64_t x48 = UINT64_MAX;

	t11 = (((x45&x46)<x47)^x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = UINT32_MAX;
	static int64_t x50 = 1037065LL;
	int64_t x51 = INT64_MIN;
	volatile uint64_t x52 = UINT64_MAX;

	t12 = (((x49&x50)<x51)^x52);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	uint16_t x54 = UINT16_MAX;
	volatile uint32_t x55 = 1217U;
	volatile int32_t t13 = -864653;

	t13 = (((x53&x54)<x55)^x56);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 6802U;
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = -30;
	volatile int32_t t14 = -1138639;

	t14 = (((x57&x58)<x59)^x60);

	if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static int16_t x62 = 12;
	uint64_t x63 = 133168671381672LLU;
	static int32_t x64 = INT32_MIN;

	t15 = (((x61&x62)<x63)^x64);

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MIN;
	int32_t x67 = -439198;
	int8_t x68 = 1;

	t16 = (((x65&x66)<x67)^x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 1276U;
	int64_t x70 = INT64_MAX;
	static uint32_t x71 = 2U;
	volatile int32_t t17 = 308071;

	t17 = (((x69&x70)<x71)^x72);

	if (t17 != -311) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = 12U;
	static volatile int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	int64_t t18 = INT64_MIN;

	t18 = (((x73&x74)<x75)^x76);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -11490974;
	volatile int16_t x78 = INT16_MAX;
	int32_t x79 = INT32_MIN;
	static volatile int64_t t19 = 1LL;

	t19 = (((x77&x78)<x79)^x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 754422;
	uint16_t x82 = 8U;
	volatile int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 784;

	t20 = (((x81&x82)<x83)^x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 1251U;
	uint64_t x86 = 15985450045851LLU;
	static uint64_t x87 = 35848550966545660LLU;
	int32_t x88 = INT32_MIN;

	t21 = (((x85&x86)<x87)^x88);

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	static int32_t x90 = -1;
	int16_t x92 = INT16_MAX;

	t22 = (((x89&x90)<x91)^x92);

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 3U;
	uint16_t x94 = 62U;
	volatile int8_t x95 = INT8_MAX;
	int64_t x96 = -5888192171LL;
	static int64_t t23 = -2LL;

	t23 = (((x93&x94)<x95)^x96);

	if (t23 != -5888192172LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	uint32_t x98 = 29U;
	uint8_t x99 = 26U;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = -1207144;

	t24 = (((x97&x98)<x99)^x100);

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x101 = -1;
	static int16_t x102 = 15764;
	int64_t x103 = -484838LL;

	t25 = (((x101&x102)<x103)^x104);

	if (t25 != 12383422U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 8974;
	volatile int32_t x106 = INT32_MIN;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 0;

	t26 = (((x105&x106)<x107)^x108);

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	int16_t x110 = 1;
	uint16_t x111 = UINT16_MAX;
	volatile int32_t t27 = 1;

	t27 = (((x109&x110)<x111)^x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1LL;
	volatile int8_t x114 = INT8_MIN;
	uint16_t x115 = 164U;
	int32_t x116 = -94374785;
	int32_t t28 = 47208988;

	t28 = (((x113&x114)<x115)^x116);

	if (t28 != -94374786) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -627267629;
	volatile int32_t x119 = INT32_MAX;

	t29 = (((x117&x118)<x119)^x120);

	if (t29 != 32766) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -1LL;
	uint16_t x123 = 17682U;
	static int32_t t30 = 2;

	t30 = (((x121&x122)<x123)^x124);

	if (t30 != 1306) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = -1;
	uint8_t x126 = 33U;
	volatile int64_t x127 = INT64_MAX;
	volatile int16_t x128 = INT16_MIN;
	int32_t t31 = 7325;

	t31 = (((x125&x126)<x127)^x128);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 3206412U;
	volatile uint8_t x130 = 11U;
	uint16_t x131 = UINT16_MAX;
	uint32_t x132 = 63U;
	volatile uint32_t t32 = 690663U;

	t32 = (((x129&x130)<x131)^x132);

	if (t32 != 62U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x135 = INT16_MAX;
	int16_t x136 = -1;
	int32_t t33 = -8355825;

	t33 = (((x133&x134)<x135)^x136);

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x137 = -1LL;
	volatile int32_t x139 = INT32_MAX;
	int16_t x140 = INT16_MAX;
	int32_t t34 = -5676711;

	t34 = (((x137&x138)<x139)^x140);

	if (t34 != 32766) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -424;
	int8_t x142 = INT8_MAX;
	int64_t x144 = INT64_MAX;
	static int64_t t35 = -7833LL;

	t35 = (((x141&x142)<x143)^x144);

	if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	static int64_t x146 = INT64_MAX;
	int8_t x147 = -1;
	int64_t x148 = INT64_MIN;
	int64_t t36 = INT64_MIN;

	t36 = (((x145&x146)<x147)^x148);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int16_t x151 = -225;
	int64_t x152 = INT64_MIN;
	volatile int64_t t37 = 12331370492029LL;

	t37 = (((x149&x150)<x151)^x152);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = -1;
	volatile int32_t x155 = -1;
	static int16_t x156 = 1675;
	int32_t t38 = -241866400;

	t38 = (((x153&x154)<x155)^x156);

	if (t38 != 1675) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x157 = -1;
	int64_t x158 = -57655LL;
	uint16_t x159 = 412U;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t39 = -12;

	t39 = (((x157&x158)<x159)^x160);

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MAX;
	int32_t t40 = INT32_MAX;

	t40 = (((x161&x162)<x163)^x164);

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 4;
	static uint8_t x166 = UINT8_MAX;
	static int8_t x167 = INT8_MIN;
	uint64_t x168 = 20877819LLU;
	static uint64_t t41 = 3241043582LLU;

	t41 = (((x165&x166)<x167)^x168);

	if (t41 != 20877819LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	int64_t x170 = INT64_MAX;
	int64_t x171 = -16LL;
	uint32_t x172 = 127130600U;
	uint32_t t42 = 801587820U;

	t42 = (((x169&x170)<x171)^x172);

	if (t42 != 127130600U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -4886796;
	uint8_t x174 = UINT8_MAX;
	int32_t t43 = 1;

	t43 = (((x173&x174)<x175)^x176);

	if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = -1;
	static volatile int64_t x179 = INT64_MIN;
	volatile int32_t t44 = 12711;

	t44 = (((x177&x178)<x179)^x180);

	if (t44 != -126504) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 7U;
	volatile int16_t x182 = 1164;
	int64_t x183 = INT64_MIN;
	uint8_t x184 = UINT8_MAX;
	int32_t t45 = -6;

	t45 = (((x181&x182)<x183)^x184);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	static volatile int64_t x187 = INT64_MIN;

	t46 = (((x185&x186)<x187)^x188);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x189 = 7U;
	uint8_t x190 = 7U;
	int32_t x191 = -1;
	int16_t x192 = -1337;
	static volatile int32_t t47 = -861333;

	t47 = (((x189&x190)<x191)^x192);

	if (t47 != -1337) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = UINT64_MAX;
	int64_t x195 = -1LL;
	uint8_t x196 = 1U;

	t48 = (((x193&x194)<x195)^x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	uint32_t x198 = 152442U;
	uint16_t x199 = 4U;
	volatile int8_t x200 = 5;
	volatile int32_t t49 = 106731418;

	t49 = (((x197&x198)<x199)^x200);

	if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MAX;
	int32_t x204 = 7025;
	int32_t t50 = -58268014;

	t50 = (((x201&x202)<x203)^x204);

	if (t50 != 7025) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 24203U;
	int16_t x207 = INT16_MIN;

	t51 = (((x205&x206)<x207)^x208);

	if (t51 != 7U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -225LL;
	static uint8_t x210 = 0U;
	volatile int16_t x211 = INT16_MIN;
	uint64_t x212 = 30369033902LLU;
	static uint64_t t52 = 89481333LLU;

	t52 = (((x209&x210)<x211)^x212);

	if (t52 != 30369033902LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -33485819199271399LL;
	static int8_t x215 = -4;
	int64_t x216 = INT64_MIN;
	int64_t t53 = INT64_MIN;

	t53 = (((x213&x214)<x215)^x216);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x219 = INT64_MIN;

	t54 = (((x217&x218)<x219)^x220);

	if (t54 != 245LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	uint8_t x222 = UINT8_MAX;
	static uint32_t x223 = 2387558U;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t55 = 27262565LLU;

	t55 = (((x221&x222)<x223)^x224);

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 1LL;
	int64_t x226 = -7581649937338LL;
	uint64_t x227 = 158591137446055050LLU;
	static int32_t t56 = -1;

	t56 = (((x225&x226)<x227)^x228);

	if (t56 != 21055337) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	static int64_t x230 = -1LL;
	static int8_t x231 = -1;
	int16_t x232 = 11303;
	volatile int32_t t57 = -42547;

	t57 = (((x229&x230)<x231)^x232);

	if (t57 != 11302) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MAX;
	int64_t x235 = INT64_MAX;
	static int64_t t58 = 15310417LL;

	t58 = (((x233&x234)<x235)^x236);

	if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x237 = -1;
	uint8_t x238 = 104U;
	int8_t x239 = INT8_MAX;
	int64_t x240 = INT64_MAX;
	int64_t t59 = 1526LL;

	t59 = (((x237&x238)<x239)^x240);

	if (t59 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -54758545LL;
	volatile uint16_t x242 = UINT16_MAX;
	uint64_t x243 = 2002724178709LLU;
	volatile int32_t t60 = -16412;

	t60 = (((x241&x242)<x243)^x244);

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 114U;
	int64_t x246 = 56LL;
	volatile uint32_t x247 = 0U;
	int64_t x248 = INT64_MIN;
	volatile int64_t t61 = INT64_MIN;

	t61 = (((x245&x246)<x247)^x248);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -2;
	volatile int8_t x251 = -1;
	volatile int64_t x252 = 62973530917870585LL;
	static volatile int64_t t62 = 56973324631834695LL;

	t62 = (((x249&x250)<x251)^x252);

	if (t62 != 62973530917870585LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 57960302618LLU;
	static int16_t x254 = 2867;
	int32_t x255 = INT32_MIN;
	uint32_t x256 = 630U;
	volatile uint32_t t63 = 38213893U;

	t63 = (((x253&x254)<x255)^x256);

	if (t63 != 631U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int64_t x258 = INT64_MAX;
	static uint8_t x259 = UINT8_MAX;
	volatile int64_t x260 = INT64_MAX;

	t64 = (((x257&x258)<x259)^x260);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 3U;
	uint32_t x262 = UINT32_MAX;
	int8_t x263 = -1;
	static int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -301;

	t65 = (((x261&x262)<x263)^x264);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MAX;
	static int32_t x267 = INT32_MIN;
	volatile int16_t x268 = 2115;

	t66 = (((x265&x266)<x267)^x268);

	if (t66 != 2115) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = UINT64_MAX;
	uint64_t x271 = UINT64_MAX;
	uint32_t x272 = 2953531U;

	t67 = (((x269&x270)<x271)^x272);

	if (t67 != 2953531U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MIN;
	int32_t x275 = -1;
	int32_t x276 = 24331120;
	volatile int32_t t68 = 893;

	t68 = (((x273&x274)<x275)^x276);

	if (t68 != 24331121) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint64_t x279 = 890382LLU;
	int64_t x280 = INT64_MAX;
	static int64_t t69 = 939458837459LL;

	t69 = (((x277&x278)<x279)^x280);

	if (t69 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -1;
	static uint64_t x283 = UINT64_MAX;
	volatile uint8_t x284 = 115U;
	int32_t t70 = -7184;

	t70 = (((x281&x282)<x283)^x284);

	if (t70 != 114) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	volatile int16_t x286 = -6601;
	int16_t x287 = 2;
	volatile uint64_t x288 = 82450805LLU;
	uint64_t t71 = 105740662LLU;

	t71 = (((x285&x286)<x287)^x288);

	if (t71 != 82450804LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 76U;
	uint8_t x290 = UINT8_MAX;
	volatile int8_t x291 = INT8_MIN;
	uint64_t x292 = 796827882271LLU;

	t72 = (((x289&x290)<x291)^x292);

	if (t72 != 796827882271LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	static volatile int8_t x294 = 1;
	int32_t x296 = INT32_MAX;
	volatile int32_t t73 = INT32_MAX;

	t73 = (((x293&x294)<x295)^x296);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MAX;
	volatile int32_t x298 = -1834611;
	volatile int32_t x299 = -1;
	uint8_t x300 = UINT8_MAX;
	static volatile int32_t t74 = 93510180;

	t74 = (((x297&x298)<x299)^x300);

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = UINT8_MAX;
	uint8_t x302 = 14U;
	int64_t x304 = INT64_MAX;
	volatile int64_t t75 = 3324918LL;

	t75 = (((x301&x302)<x303)^x304);

	if (t75 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	static int32_t x306 = 126;
	static int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MAX;
	static volatile int32_t t76 = -7442;

	t76 = (((x305&x306)<x307)^x308);

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	uint16_t x310 = 647U;
	int8_t x311 = INT8_MAX;
	uint64_t x312 = 1669LLU;
	uint64_t t77 = 41138636141768LLU;

	t77 = (((x309&x310)<x311)^x312);

	if (t77 != 1668LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MIN;
	uint8_t x314 = 22U;
	static uint64_t x316 = UINT64_MAX;

	t78 = (((x313&x314)<x315)^x316);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = 1501U;
	volatile uint16_t x319 = 5U;
	static int8_t x320 = -1;
	int32_t t79 = 4641;

	t79 = (((x317&x318)<x319)^x320);

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -320;
	int16_t x322 = INT16_MAX;
	int8_t x324 = INT8_MIN;
	volatile int32_t t80 = -1756;

	t80 = (((x321&x322)<x323)^x324);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	static int32_t x326 = -1;
	uint8_t x327 = UINT8_MAX;
	static int32_t t81 = 1;

	t81 = (((x325&x326)<x327)^x328);

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	int32_t x330 = 466615453;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = 103;

	t82 = (((x329&x330)<x331)^x332);

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	int32_t x334 = -8284148;
	int64_t x335 = INT64_MIN;
	int64_t t83 = INT64_MIN;

	t83 = (((x333&x334)<x335)^x336);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	int8_t x338 = -4;
	volatile int8_t x339 = -1;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t84 = -770036534;

	t84 = (((x337&x338)<x339)^x340);

	if (t84 != 65534) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x343 = INT64_MAX;
	int64_t x344 = 3538LL;
	int64_t t85 = 132197658985343LL;

	t85 = (((x341&x342)<x343)^x344);

	if (t85 != 3539LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	uint8_t x346 = 15U;
	int8_t x347 = 0;
	static int8_t x348 = -45;
	int32_t t86 = -130;

	t86 = (((x345&x346)<x347)^x348);

	if (t86 != -45) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	volatile int64_t x350 = -1LL;
	int32_t x351 = 272167035;
	uint64_t x352 = 43705113061191LLU;
	uint64_t t87 = 15017LLU;

	t87 = (((x349&x350)<x351)^x352);

	if (t87 != 43705113061190LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 1000897349589LLU;
	static volatile int8_t x356 = -1;
	int32_t t88 = 150058;

	t88 = (((x353&x354)<x355)^x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MIN;
	volatile int16_t x359 = -1;
	volatile int32_t t89 = 1;

	t89 = (((x357&x358)<x359)^x360);

	if (t89 != 27) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = 3056;
	uint8_t x362 = UINT8_MAX;
	volatile uint8_t x364 = 80U;

	t90 = (((x361&x362)<x363)^x364);

	if (t90 != 80) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = 536;
	volatile int8_t x366 = INT8_MAX;
	int16_t x367 = INT16_MIN;
	int32_t t91 = 46732405;

	t91 = (((x365&x366)<x367)^x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = INT32_MIN;
	volatile int32_t x371 = INT32_MIN;
	int64_t x372 = -1LL;
	int64_t t92 = -3816997386879581LL;

	t92 = (((x369&x370)<x371)^x372);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	int16_t x374 = 1610;
	static volatile int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MIN;

	t93 = (((x373&x374)<x375)^x376);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -40036;
	int16_t x378 = 14;
	int32_t x379 = 22;

	t94 = (((x377&x378)<x379)^x380);

	if (t94 != 65534) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = INT64_MIN;
	int32_t x383 = -1;
	int8_t x384 = -1;
	int32_t t95 = -11138;

	t95 = (((x381&x382)<x383)^x384);

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	uint64_t x386 = UINT64_MAX;
	static int16_t x388 = -70;
	volatile int32_t t96 = 245670516;

	t96 = (((x385&x386)<x387)^x388);

	if (t96 != -69) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MAX;
	volatile int32_t x391 = -1;
	int8_t x392 = 3;
	int32_t t97 = -467996;

	t97 = (((x389&x390)<x391)^x392);

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 6U;
	static int32_t x394 = INT32_MAX;
	static uint16_t x395 = 14U;
	static uint64_t x396 = UINT64_MAX;
	uint64_t t98 = 39LLU;

	t98 = (((x393&x394)<x395)^x396);

	if (t98 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x398 = 937U;
	int64_t x399 = -1627640153744387LL;
	int64_t x400 = -754605309685473067LL;
	static volatile int64_t t99 = -830089971LL;

	t99 = (((x397&x398)<x399)^x400);

	if (t99 != -754605309685473067LL) { NG(); } else { ; }
	
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

