#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 4U;
int8_t x8 = INT8_MIN;
static int64_t x10 = 3LL;
volatile int64_t t2 = -24281211296527698LL;
int32_t x16 = INT32_MAX;
int64_t t4 = 487567063616845546LL;
static volatile int16_t x25 = INT16_MIN;
int16_t x28 = INT16_MAX;
static int16_t x46 = -1;
uint64_t t9 = 92131542750486278LLU;
int8_t x62 = -4;
int16_t x65 = -2;
uint8_t x66 = 43U;
int8_t x69 = 0;
int8_t x70 = INT8_MAX;
volatile int8_t x79 = 61;
volatile int64_t t15 = 7619LL;
volatile int8_t x85 = 0;
volatile int8_t x87 = INT8_MAX;
int64_t t17 = -325618912354LL;
static volatile int32_t x103 = -8;
int32_t t20 = -646052759;
int8_t x109 = INT8_MIN;
static int32_t x111 = -1;
int8_t x112 = INT8_MAX;
volatile int32_t t22 = 657;
int32_t x116 = -1;
volatile int16_t x122 = INT16_MAX;
static volatile int16_t x124 = INT16_MAX;
volatile int64_t x133 = INT64_MIN;
int8_t x134 = 5;
int32_t x135 = 2356850;
int64_t t27 = 57259LL;
static uint32_t x141 = UINT32_MAX;
volatile int16_t x144 = -87;
volatile int32_t t29 = -16;
uint64_t x161 = 1953955481670927LLU;
volatile uint32_t x164 = 958279U;
int32_t x173 = 6925317;
static volatile int32_t x174 = INT32_MIN;
volatile uint16_t x176 = 16U;
volatile int32_t x177 = 12913;
static int8_t x179 = -1;
static volatile int64_t t37 = 11621341584056446LL;
static volatile uint64_t t38 = 26641LLU;
volatile uint64_t t39 = UINT64_MAX;
int64_t x198 = INT64_MAX;
volatile int8_t x199 = 9;
volatile int8_t x201 = 0;
static uint32_t t42 = 54612U;
volatile int64_t x207 = INT64_MIN;
static uint8_t x227 = 38U;
static int16_t x229 = INT16_MIN;
int64_t x230 = -1LL;
static uint32_t x232 = 314727223U;
int8_t x246 = -1;
int8_t x253 = 7;
volatile uint32_t t53 = 4980U;
uint8_t x257 = 6U;
uint8_t x263 = UINT8_MAX;
uint8_t x285 = 1U;
uint32_t x286 = UINT32_MAX;
volatile int64_t t61 = 450LL;
uint64_t x294 = 125LLU;
int8_t x305 = 1;
static uint64_t x311 = 152713300915828108LLU;
int16_t x315 = -792;
volatile uint64_t t67 = 31475LLU;
uint16_t x320 = UINT16_MAX;
static int8_t x332 = 12;
int16_t x334 = INT16_MIN;
volatile int64_t x339 = 29264301248LL;
int32_t x343 = -13;
static uint8_t x344 = 125U;
int64_t x346 = INT64_MIN;
int16_t x352 = INT16_MIN;
static int32_t x353 = 206173272;
int8_t x354 = -1;
static uint8_t x357 = UINT8_MAX;
int16_t x361 = -1;
int64_t x383 = -1454943941LL;
volatile int64_t t82 = -528969833LL;
uint64_t x388 = 408743825LLU;
static int32_t x389 = INT32_MIN;
static int32_t x393 = INT32_MIN;
static int16_t x403 = -1;
static uint32_t x412 = 932U;
uint8_t x420 = 110U;
static volatile uint64_t t92 = 384704LLU;
volatile uint64_t t93 = 7281379972368LLU;
int32_t x435 = -92205;
int8_t x437 = 22;
int8_t x440 = 0;
int16_t x443 = 4399;
static volatile uint16_t x445 = 6678U;
int32_t x447 = 7029712;
int16_t x448 = INT16_MIN;
static int64_t t98 = 1042217LL;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint32_t x2 = 33011U;
	int8_t x3 = INT8_MIN;
	static uint32_t t0 = 80U;

	t0 = ((x1&(x2/x3))*x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 58;
	uint16_t x6 = 50U;
	int8_t x7 = 55;
	int32_t t1 = 34253;

	t1 = ((x5&(x6/x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 36;
	static volatile int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MIN;

	t2 = ((x9&(x10/x11))*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	volatile int64_t x14 = -2633997141LL;
	uint32_t x15 = UINT32_MAX;
	volatile int64_t t3 = 2078131LL;

	t3 = ((x13&(x14/x15))*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	int64_t x18 = 12471LL;
	uint32_t x19 = UINT32_MAX;
	volatile int8_t x20 = 32;

	t4 = ((x17&(x18/x19))*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x26 = INT8_MIN;
	int32_t x27 = -1;
	volatile int32_t t5 = -1672461;

	t5 = ((x25&(x26/x27))*x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = INT8_MAX;
	int16_t x34 = INT16_MAX;
	uint8_t x35 = UINT8_MAX;
	int16_t x36 = INT16_MAX;
	static int32_t t6 = -18492964;

	t6 = ((x33&(x34/x35))*x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = UINT64_MAX;
	int64_t x38 = INT64_MIN;
	static int64_t x39 = INT64_MAX;
	int64_t x40 = INT64_MIN;
	static volatile uint64_t t7 = 22247731301113827LLU;

	t7 = ((x37&(x38/x39))*x40);

	if (t7 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1LL;
	uint32_t x42 = 2U;
	int8_t x43 = INT8_MAX;
	int16_t x44 = INT16_MIN;
	int64_t t8 = -7332512423730LL;

	t8 = ((x41&(x42/x43))*x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 167U;
	uint64_t x47 = 1854121LLU;
	int16_t x48 = INT16_MIN;

	t9 = ((x45&(x46/x47))*x48);

	if (t9 != 18446744073708404736LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	volatile int16_t x54 = INT16_MAX;
	volatile uint64_t x55 = 126390034028LLU;
	volatile uint16_t x56 = UINT16_MAX;
	static uint64_t t10 = 131921129460LLU;

	t10 = ((x53&(x54/x55))*x56);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = 108939625LLU;
	uint32_t x58 = 2755U;
	volatile int8_t x59 = INT8_MIN;
	volatile int16_t x60 = INT16_MIN;
	uint64_t t11 = 1140953575LLU;

	t11 = ((x57&(x58/x59))*x60);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MAX;
	int16_t x63 = -26;
	static int8_t x64 = -57;
	volatile int32_t t12 = 8123586;

	t12 = ((x61&(x62/x63))*x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x67 = -6614579;
	int8_t x68 = INT8_MIN;
	int32_t t13 = 12244;

	t13 = ((x65&(x66/x67))*x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x71 = INT32_MAX;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t14 = -760459196;

	t14 = ((x69&(x70/x71))*x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x77 = UINT16_MAX;
	int64_t x78 = -1LL;
	int32_t x80 = INT32_MIN;

	t15 = ((x77&(x78/x79))*x80);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x86 = INT8_MIN;
	static volatile int32_t x88 = INT32_MIN;
	int32_t t16 = 76;

	t16 = ((x85&(x86/x87))*x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = -129842611LL;
	uint32_t x90 = 91401289U;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = 1U;

	t17 = ((x89&(x90/x91))*x92);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	volatile uint32_t x94 = 631042167U;
	static uint64_t x95 = UINT64_MAX;
	static int16_t x96 = INT16_MIN;
	uint64_t t18 = 301387LLU;

	t18 = ((x93&(x94/x95))*x96);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = 861;
	uint16_t x98 = UINT16_MAX;
	int16_t x99 = -1;
	uint8_t x100 = 121U;
	int32_t t19 = -855643;

	t19 = ((x97&(x98/x99))*x100);

	if (t19 != 121) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = 302474;
	static int16_t x102 = -825;
	static uint16_t x104 = 0U;

	t20 = ((x101&(x102/x103))*x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x105 = INT32_MIN;
	int64_t x106 = 41741LL;
	volatile int16_t x107 = 5800;
	static uint32_t x108 = UINT32_MAX;
	int64_t t21 = 11LL;

	t21 = ((x105&(x106/x107))*x108);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x110 = 857U;

	t22 = ((x109&(x110/x111))*x112);

	if (t22 != -113792) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x113 = 61428LLU;
	volatile uint64_t x114 = 20836205066699LLU;
	int16_t x115 = INT16_MAX;
	uint64_t t23 = 420LLU;

	t23 = ((x113&(x114/x115))*x116);

	if (t23 != 18446744073709491968LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MAX;
	int8_t x118 = -1;
	int8_t x119 = -1;
	uint32_t x120 = UINT32_MAX;
	static volatile uint32_t t24 = UINT32_MAX;

	t24 = ((x117&(x118/x119))*x120);

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x121 = -1LL;
	int64_t x123 = INT64_MIN;
	volatile int64_t t25 = 219367LL;

	t25 = ((x121&(x122/x123))*x124);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x125 = INT32_MIN;
	volatile uint8_t x126 = 0U;
	int32_t x127 = INT32_MIN;
	int8_t x128 = -1;
	int32_t t26 = 652295;

	t26 = ((x125&(x126/x127))*x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x136 = 1;

	t27 = ((x133&(x134/x135))*x136);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x142 = -6127204755696LL;
	uint16_t x143 = UINT16_MAX;
	volatile int64_t t28 = -3051124451862LL;

	t28 = ((x141&(x142/x143))*x144);

	if (t28 != -365528076615LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MAX;
	uint16_t x146 = UINT16_MAX;
	int8_t x147 = 8;
	static volatile uint8_t x148 = UINT8_MAX;

	t29 = ((x145&(x146/x147))*x148);

	if (t29 != 32385) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = INT64_MIN;
	uint32_t x150 = 830183U;
	volatile int8_t x151 = INT8_MAX;
	uint64_t x152 = 1007455339283898LLU;
	uint64_t t30 = 478181087017576894LLU;

	t30 = ((x149&(x150/x151))*x152);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x153 = UINT16_MAX;
	uint8_t x154 = UINT8_MAX;
	static uint16_t x155 = UINT16_MAX;
	volatile int16_t x156 = INT16_MIN;
	int32_t t31 = 1731678;

	t31 = ((x153&(x154/x155))*x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x157 = INT64_MAX;
	volatile uint16_t x158 = 295U;
	int64_t x159 = INT64_MIN;
	static uint16_t x160 = 11U;
	static int64_t t32 = 6852523417745LL;

	t32 = ((x157&(x158/x159))*x160);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MAX;
	volatile uint64_t t33 = 27704800919LLU;

	t33 = ((x161&(x162/x163))*x164);

	if (t33 != 9313353575223263714LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = UINT32_MAX;
	int16_t x166 = -12090;
	static uint64_t x167 = UINT64_MAX;
	static volatile int32_t x168 = INT32_MIN;
	volatile uint64_t t34 = 3559046LLU;

	t34 = ((x165&(x166/x167))*x168);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = -480175LL;
	int16_t x170 = INT16_MIN;
	static int64_t x171 = INT64_MIN;
	volatile int32_t x172 = -1509;
	int64_t t35 = 2409520721673409567LL;

	t35 = ((x169&(x170/x171))*x172);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x175 = UINT16_MAX;
	int32_t t36 = 1;

	t36 = ((x173&(x174/x175))*x176);

	if (t36 != 110624768) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x178 = -10;
	int64_t x180 = -2125236444379432LL;

	t37 = ((x177&(x178/x179))*x180);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x185 = UINT64_MAX;
	int8_t x186 = 13;
	int32_t x187 = INT32_MAX;
	int64_t x188 = 7995402LL;

	t38 = ((x185&(x186/x187))*x188);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x189 = 2001;
	volatile int8_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	static uint64_t x192 = UINT64_MAX;

	t39 = ((x189&(x190/x191))*x192);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x193 = -1LL;
	int64_t x194 = -1501LL;
	int64_t x195 = 1689LL;
	volatile int64_t x196 = INT64_MAX;
	static volatile int64_t t40 = -643871572660LL;

	t40 = ((x193&(x194/x195))*x196);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x197 = 121U;
	int8_t x200 = INT8_MAX;
	int64_t t41 = -3735019782LL;

	t41 = ((x197&(x198/x199))*x200);

	if (t41 != 7112LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x202 = INT16_MAX;
	static volatile int8_t x203 = INT8_MIN;
	volatile uint32_t x204 = 1U;

	t42 = ((x201&(x202/x203))*x204);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x205 = 591202506105LLU;
	static volatile int16_t x206 = 1;
	uint8_t x208 = UINT8_MAX;
	static uint64_t t43 = 47538LLU;

	t43 = ((x205&(x206/x207))*x208);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MIN;
	volatile uint64_t x215 = UINT64_MAX;
	volatile int8_t x216 = 1;
	volatile uint64_t t44 = 47807626719665941LLU;

	t44 = ((x213&(x214/x215))*x216);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x217 = UINT64_MAX;
	volatile int32_t x218 = 53643504;
	uint32_t x219 = 1219428U;
	volatile int16_t x220 = INT16_MIN;
	volatile uint64_t t45 = 148248688808LLU;

	t45 = ((x217&(x218/x219))*x220);

	if (t45 != 18446744073708142592LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x225 = 44790622LLU;
	volatile uint8_t x226 = UINT8_MAX;
	int16_t x228 = -3;
	volatile uint64_t t46 = 0LLU;

	t46 = ((x225&(x226/x227))*x228);

	if (t46 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x231 = 4U;
	volatile int64_t t47 = -6202733167186LL;

	t47 = ((x229&(x230/x231))*x232);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = INT64_MIN;
	volatile uint32_t x234 = 524090U;
	static volatile uint32_t x235 = 25718U;
	int64_t x236 = -1LL;
	int64_t t48 = -30055997425037LL;

	t48 = ((x233&(x234/x235))*x236);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x237 = UINT64_MAX;
	volatile int16_t x238 = INT16_MAX;
	volatile int32_t x239 = INT32_MIN;
	uint8_t x240 = 20U;
	volatile uint64_t t49 = 6652379815638069535LLU;

	t49 = ((x237&(x238/x239))*x240);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x241 = -3;
	volatile int16_t x242 = 1;
	int64_t x243 = INT64_MIN;
	volatile uint8_t x244 = 0U;
	int64_t t50 = 20705953592054LL;

	t50 = ((x241&(x242/x243))*x244);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x245 = -1LL;
	uint64_t x247 = UINT64_MAX;
	static volatile uint8_t x248 = 7U;
	volatile uint64_t t51 = 18604LLU;

	t51 = ((x245&(x246/x247))*x248);

	if (t51 != 7LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x249 = INT16_MIN;
	static uint16_t x250 = 4037U;
	volatile int8_t x251 = INT8_MIN;
	uint32_t x252 = UINT32_MAX;
	uint32_t t52 = 96123308U;

	t52 = ((x249&(x250/x251))*x252);

	if (t52 != 32768U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x254 = INT8_MAX;
	uint32_t x255 = 511425U;
	volatile int32_t x256 = -1;

	t53 = ((x253&(x254/x255))*x256);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x258 = -743;
	int64_t x259 = INT64_MIN;
	uint32_t x260 = 325476U;
	volatile int64_t t54 = -69378434309LL;

	t54 = ((x257&(x258/x259))*x260);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = -1;
	int32_t x262 = 76;
	int32_t x264 = 15213;
	volatile int32_t t55 = -2074585;

	t55 = ((x261&(x262/x263))*x264);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x265 = UINT8_MAX;
	int8_t x266 = -1;
	int64_t x267 = INT64_MIN;
	static int16_t x268 = INT16_MAX;
	volatile int64_t t56 = -57116805760958LL;

	t56 = ((x265&(x266/x267))*x268);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x269 = 0U;
	static int8_t x270 = -26;
	uint8_t x271 = 56U;
	int32_t x272 = INT32_MIN;
	static int32_t t57 = 1310;

	t57 = ((x269&(x270/x271))*x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x273 = UINT64_MAX;
	uint32_t x274 = 3U;
	int16_t x275 = 5671;
	int8_t x276 = -4;
	volatile uint64_t t58 = 6758337LLU;

	t58 = ((x273&(x274/x275))*x276);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x277 = 43060719;
	static uint8_t x278 = 86U;
	static uint8_t x279 = 1U;
	uint8_t x280 = 0U;
	static int32_t t59 = -249275;

	t59 = ((x277&(x278/x279))*x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = 1;
	int64_t x282 = -1LL;
	int16_t x283 = -1;
	int64_t x284 = INT64_MAX;
	volatile int64_t t60 = INT64_MAX;

	t60 = ((x281&(x282/x283))*x284);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x287 = INT64_MIN;
	volatile int16_t x288 = -3522;

	t61 = ((x285&(x286/x287))*x288);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x289 = 1U;
	int8_t x290 = INT8_MIN;
	static volatile int32_t x291 = -1;
	int16_t x292 = -259;
	uint32_t t62 = 12U;

	t62 = ((x289&(x290/x291))*x292);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x293 = 10U;
	uint16_t x295 = 132U;
	uint32_t x296 = 380535455U;
	volatile uint64_t t63 = 1398613103117082LLU;

	t63 = ((x293&(x294/x295))*x296);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x301 = 2195213508LLU;
	int16_t x302 = INT16_MIN;
	uint16_t x303 = UINT16_MAX;
	uint64_t x304 = 138944103829053LLU;
	uint64_t t64 = 18344LLU;

	t64 = ((x301&(x302/x303))*x304);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x306 = INT64_MAX;
	int8_t x307 = -1;
	volatile uint8_t x308 = UINT8_MAX;
	static volatile int64_t t65 = -28732055975LL;

	t65 = ((x305&(x306/x307))*x308);

	if (t65 != 255LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x309 = UINT32_MAX;
	int16_t x310 = 1;
	int16_t x312 = 1;
	uint64_t t66 = 7275063713466996LLU;

	t66 = ((x309&(x310/x311))*x312);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x313 = -2717773858051LL;
	uint64_t x314 = 226055818LLU;
	uint8_t x316 = 0U;

	t67 = ((x313&(x314/x315))*x316);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MAX;
	int64_t t68 = -1LL;

	t68 = ((x317&(x318/x319))*x320);

	if (t68 != -281470690131840LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x321 = -1;
	int32_t x322 = -3189;
	static int8_t x323 = INT8_MIN;
	int8_t x324 = -1;
	int32_t t69 = 6172005;

	t69 = ((x321&(x322/x323))*x324);

	if (t69 != -24) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x329 = UINT16_MAX;
	int32_t x330 = 5791;
	uint32_t x331 = UINT32_MAX;
	volatile uint32_t t70 = 30929U;

	t70 = ((x329&(x330/x331))*x332);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x333 = 252429U;
	int16_t x335 = INT16_MIN;
	uint16_t x336 = UINT16_MAX;
	volatile uint32_t t71 = 2035U;

	t71 = ((x333&(x334/x335))*x336);

	if (t71 != 65535U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x337 = 34849477U;
	volatile int16_t x338 = INT16_MAX;
	static int8_t x340 = INT8_MIN;
	static int64_t t72 = -1415LL;

	t72 = ((x337&(x338/x339))*x340);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x341 = 20;
	int32_t x342 = INT32_MIN;
	int32_t t73 = 180953;

	t73 = ((x341&(x342/x343))*x344);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x345 = -1963716;
	int16_t x347 = 406;
	static int8_t x348 = -2;
	volatile int64_t t74 = 77141125175576864LL;

	t74 = ((x345&(x346/x347))*x348);

	if (t74 != 45435330232057272LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x349 = 80015386541434LLU;
	int32_t x350 = INT32_MIN;
	int8_t x351 = -6;
	volatile uint64_t t75 = 381965LLU;

	t75 = ((x349&(x350/x351))*x352);

	if (t75 != 18446744038634160128LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x355 = INT32_MAX;
	int8_t x356 = 54;
	static volatile int32_t t76 = -395183951;

	t76 = ((x353&(x354/x355))*x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x358 = -1;
	int64_t x359 = INT64_MAX;
	uint16_t x360 = 23U;
	int64_t t77 = 155323960991992574LL;

	t77 = ((x357&(x358/x359))*x360);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x362 = INT8_MIN;
	uint32_t x363 = 19198629U;
	int16_t x364 = 1;
	static volatile uint32_t t78 = 49780843U;

	t78 = ((x361&(x362/x363))*x364);

	if (t78 != 223U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x365 = 4U;
	int32_t x366 = INT32_MIN;
	volatile int64_t x367 = 306736997LL;
	uint32_t x368 = 3708U;
	static int64_t t79 = 1154372LL;

	t79 = ((x365&(x366/x367))*x368);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x373 = -14529LL;
	static int16_t x374 = INT16_MAX;
	static int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;
	volatile int64_t t80 = -1688460661083LL;

	t80 = ((x373&(x374/x375))*x376);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x377 = 0U;
	uint16_t x378 = 188U;
	uint64_t x379 = 1184029396652LLU;
	static int16_t x380 = -1;
	uint64_t t81 = 137448522541714554LLU;

	t81 = ((x377&(x378/x379))*x380);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x381 = INT8_MAX;
	int16_t x382 = INT16_MAX;
	volatile int32_t x384 = 6281;

	t82 = ((x381&(x382/x383))*x384);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x385 = UINT64_MAX;
	int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MIN;
	volatile uint64_t t83 = 1754825LLU;

	t83 = ((x385&(x386/x387))*x388);

	if (t83 != 1755541360816947200LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x390 = INT16_MIN;
	volatile int32_t x391 = -1;
	static int64_t x392 = INT64_MAX;
	int64_t t84 = 11862445LL;

	t84 = ((x389&(x390/x391))*x392);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x394 = UINT32_MAX;
	volatile uint32_t x395 = 180U;
	uint32_t x396 = UINT32_MAX;
	static uint32_t t85 = 2090U;

	t85 = ((x393&(x394/x395))*x396);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x397 = 105U;
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MIN;
	int32_t x400 = INT32_MIN;
	int64_t t86 = 28843996734LL;

	t86 = ((x397&(x398/x399))*x400);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x401 = INT8_MAX;
	int32_t x402 = 0;
	int32_t x404 = -1;
	int32_t t87 = 2936713;

	t87 = ((x401&(x402/x403))*x404);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x405 = UINT64_MAX;
	int16_t x406 = 3764;
	int64_t x407 = INT64_MIN;
	int32_t x408 = INT32_MIN;
	static volatile uint64_t t88 = 5046185282424023LLU;

	t88 = ((x405&(x406/x407))*x408);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = INT32_MAX;
	volatile uint64_t x410 = 448850140927317LLU;
	volatile int8_t x411 = 5;
	uint64_t t89 = 92182LLU;

	t89 = ((x409&(x410/x411))*x412);

	if (t89 != 854394006844LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x413 = UINT64_MAX;
	static int32_t x414 = INT32_MIN;
	int8_t x415 = INT8_MIN;
	static uint64_t x416 = UINT64_MAX;
	uint64_t t90 = 13410598917275763LLU;

	t90 = ((x413&(x414/x415))*x416);

	if (t90 != 18446744073692774400LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x417 = INT32_MAX;
	int64_t x418 = -1LL;
	int8_t x419 = -1;
	static int64_t t91 = 1144LL;

	t91 = ((x417&(x418/x419))*x420);

	if (t91 != 110LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x425 = 37008100763014LLU;
	uint8_t x426 = 14U;
	static int16_t x427 = INT16_MIN;
	volatile int8_t x428 = -1;

	t92 = ((x425&(x426/x427))*x428);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x429 = 3061468088LLU;
	uint16_t x430 = 52U;
	uint32_t x431 = 84925750U;
	int8_t x432 = -1;

	t93 = ((x429&(x430/x431))*x432);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x433 = INT32_MAX;
	int32_t x434 = INT32_MIN;
	volatile int8_t x436 = INT8_MAX;
	static int32_t t94 = 9;

	t94 = ((x433&(x434/x435))*x436);

	if (t94 != 2957830) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x438 = -1;
	int32_t x439 = INT32_MIN;
	int32_t t95 = -442066;

	t95 = ((x437&(x438/x439))*x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x441 = INT32_MAX;
	uint16_t x442 = 221U;
	uint8_t x444 = UINT8_MAX;
	volatile int32_t t96 = 404;

	t96 = ((x441&(x442/x443))*x444);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x446 = 1919154413922875014LL;
	static int64_t t97 = -310177671100LL;

	t97 = ((x445&(x446/x447))*x448);

	if (t97 != -134742016LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x449 = UINT8_MAX;
	int64_t x450 = INT64_MIN;
	volatile uint16_t x451 = UINT16_MAX;
	uint16_t x452 = UINT16_MAX;

	t98 = ((x449&(x450/x451))*x452);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = INT64_MIN;
	int16_t x454 = INT16_MAX;
	uint64_t x455 = 30605LLU;
	int32_t x456 = INT32_MIN;
	uint64_t t99 = 67096158930702LLU;

	t99 = ((x453&(x454/x455))*x456);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

