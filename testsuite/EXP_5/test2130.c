#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = 42;
int32_t x15 = -1;
static volatile uint64_t t3 = 561962906484LLU;
int64_t x26 = -18LL;
volatile int32_t t6 = -14772300;
int8_t x34 = 1;
volatile uint64_t t10 = 3851538059674LLU;
uint8_t x45 = UINT8_MAX;
static int64_t x63 = -1LL;
volatile int32_t t17 = 1915528;
int64_t x75 = -1LL;
volatile int16_t x79 = INT16_MIN;
uint32_t x84 = 0U;
static int32_t t20 = -18289399;
int64_t x88 = -2129040981LL;
uint32_t x94 = 268U;
int32_t x96 = -511796;
static volatile uint16_t x97 = 114U;
int16_t x101 = -897;
int32_t x108 = INT32_MIN;
volatile int32_t x114 = 813;
static uint16_t x115 = 289U;
uint32_t x116 = UINT32_MAX;
volatile int32_t t28 = 203547;
int32_t x125 = 6137355;
static volatile uint32_t x131 = UINT32_MAX;
uint8_t x134 = 105U;
int32_t x136 = 323378;
static int32_t x138 = INT32_MIN;
uint32_t x140 = UINT32_MAX;
static int32_t x144 = INT32_MIN;
int16_t x157 = -1;
int32_t x158 = INT32_MIN;
static int16_t x164 = -1;
volatile int32_t t40 = -110268;
int32_t x167 = 88969;
volatile int32_t t41 = 945121359;
static volatile int64_t x170 = INT64_MIN;
uint8_t x174 = 47U;
uint64_t x175 = UINT64_MAX;
static volatile int32_t t43 = -95017845;
int16_t x185 = 207;
static int32_t x197 = INT32_MIN;
int32_t x202 = -1;
volatile int16_t x206 = 0;
uint64_t x212 = 1547LLU;
uint16_t x215 = 49U;
static int32_t x227 = -2862706;
uint16_t x233 = 3U;
int16_t x242 = 0;
int32_t x248 = 2228882;
uint32_t x251 = 339U;
int32_t t63 = 19058755;
uint8_t x258 = UINT8_MAX;
int16_t x264 = 219;
static uint64_t x265 = 1137LLU;
volatile int32_t x268 = INT32_MAX;
int8_t x270 = INT8_MAX;
int8_t x271 = INT8_MIN;
volatile int8_t x278 = INT8_MAX;
volatile int32_t t69 = 91;
static int16_t x282 = INT16_MAX;
int32_t x283 = INT32_MIN;
uint64_t x288 = 186LLU;
uint8_t x292 = 29U;
volatile uint64_t t72 = 89893884LLU;
int8_t x298 = INT8_MAX;
static uint8_t x300 = UINT8_MAX;
int8_t x305 = INT8_MAX;
static uint8_t x307 = UINT8_MAX;
uint64_t x309 = 429LLU;
volatile int8_t x316 = INT8_MIN;
int16_t x318 = -1;
int16_t x325 = 191;
uint8_t x326 = 11U;
volatile int16_t x336 = INT16_MIN;
int32_t x344 = INT32_MAX;
volatile int32_t t85 = 206172367;
int8_t x347 = -12;
static uint32_t x350 = 1130658U;
uint32_t x351 = 85U;
volatile int32_t x354 = INT32_MAX;
int32_t x357 = -1;
volatile uint32_t x360 = 337U;
static int32_t t89 = -2913628;
uint16_t x361 = 8U;
static int8_t x364 = INT8_MAX;
volatile uint8_t x366 = UINT8_MAX;
static uint16_t x368 = UINT16_MAX;
volatile int32_t t91 = 0;
uint64_t x373 = 253203903470149LLU;
volatile uint64_t x378 = UINT64_MAX;
uint16_t x380 = 17U;
volatile int16_t x393 = INT16_MIN;
static int16_t x395 = -1;
int16_t x396 = -10039;


void f0(void) {
	uint16_t x1 = 1753U;
	int64_t x2 = INT64_MIN;
	int8_t x3 = -57;
	uint16_t x4 = 11196U;
	volatile int32_t t0 = -4278;

	t0 = (x1&((x2^x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile int32_t x6 = INT32_MIN;
	volatile uint8_t x7 = 99U;
	uint32_t x8 = 295363U;
	volatile uint64_t t1 = 3380072428430LLU;

	t1 = (x5&((x6^x7)==x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 4085U;
	volatile uint8_t x10 = UINT8_MAX;
	volatile int16_t x11 = INT16_MIN;
	volatile uint16_t x12 = 1U;

	t2 = (x9&((x10^x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	static int8_t x14 = INT8_MAX;
	int8_t x16 = INT8_MIN;

	t3 = (x13&((x14^x15)==x16));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1U;
	static uint32_t x18 = UINT32_MAX;
	volatile int64_t x19 = INT64_MIN;
	int16_t x20 = 15243;
	volatile int32_t t4 = 232;

	t4 = (x17&((x18^x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 2758U;
	int16_t x22 = -1;
	volatile int8_t x23 = -1;
	static uint32_t x24 = UINT32_MAX;
	int32_t t5 = 2461241;

	t5 = (x21&((x22^x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static volatile int16_t x27 = INT16_MIN;
	uint8_t x28 = UINT8_MAX;

	t6 = (x25&((x26^x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int16_t x30 = INT16_MAX;
	uint16_t x31 = UINT16_MAX;
	volatile int8_t x32 = 24;
	int32_t t7 = -1;

	t7 = (x29&((x30^x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	static uint16_t x35 = UINT16_MAX;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -992;

	t8 = (x33&((x34^x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	uint16_t x38 = 1615U;
	int32_t x39 = 1;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -629;

	t9 = (x37&((x38^x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = UINT64_MAX;
	volatile uint16_t x42 = 0U;
	uint64_t x43 = 11681LLU;
	static uint32_t x44 = 936425U;

	t10 = (x41&((x42^x43)==x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = INT64_MIN;
	uint8_t x47 = UINT8_MAX;
	int32_t x48 = -1;
	static volatile int32_t t11 = -18066;

	t11 = (x45&((x46^x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 7U;
	uint8_t x50 = UINT8_MAX;
	uint8_t x51 = UINT8_MAX;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 2473;

	t12 = (x49&((x50^x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	int8_t x54 = -1;
	volatile int8_t x55 = INT8_MAX;
	volatile int32_t x56 = INT32_MIN;
	volatile uint64_t t13 = 896LLU;

	t13 = (x53&((x54^x55)==x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 14;
	int32_t x58 = -148;
	static int32_t x59 = INT32_MIN;
	int16_t x60 = INT16_MAX;
	int32_t t14 = 1;

	t14 = (x57&((x58^x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = UINT16_MAX;
	volatile int8_t x62 = INT8_MIN;
	volatile int32_t x64 = 0;
	volatile int32_t t15 = 3147;

	t15 = (x61&((x62^x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -3799;
	static uint32_t x66 = 700634U;
	static int32_t x67 = INT32_MIN;
	int64_t x68 = INT64_MIN;
	volatile int32_t t16 = -67492425;

	t16 = (x65&((x66^x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static uint8_t x70 = UINT8_MAX;
	int32_t x71 = INT32_MAX;
	static uint32_t x72 = UINT32_MAX;

	t17 = (x69&((x70^x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = -1;
	volatile uint16_t x76 = 2984U;
	static volatile int32_t t18 = -6294846;

	t18 = (x73&((x74^x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int8_t x78 = INT8_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile int64_t t19 = -258210572971LL;

	t19 = (x77&((x78^x79)==x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 7U;
	uint8_t x82 = UINT8_MAX;
	uint16_t x83 = 10U;

	t20 = (x81&((x82^x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	int8_t x86 = INT8_MAX;
	volatile int8_t x87 = -1;
	int32_t t21 = -131370476;

	t21 = (x85&((x86^x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 0;
	uint64_t x90 = UINT64_MAX;
	uint16_t x91 = 13633U;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 79842734;

	t22 = (x89&((x90^x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	volatile int64_t x95 = -8201174076991LL;
	int64_t t23 = -73464254321752LL;

	t23 = (x93&((x94^x95)==x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x98 = 252265U;
	int64_t x99 = INT64_MIN;
	int16_t x100 = INT16_MIN;
	int32_t t24 = 1873032;

	t24 = (x97&((x98^x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = 1;
	uint64_t x103 = 117311302736LLU;
	int16_t x104 = -1;
	volatile int32_t t25 = -21813700;

	t25 = (x101&((x102^x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = 0;
	uint64_t x106 = 3805583929942791442LLU;
	static int8_t x107 = 38;
	int32_t t26 = 3;

	t26 = (x105&((x106^x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 91U;
	static int64_t x110 = INT64_MIN;
	int16_t x111 = INT16_MIN;
	int32_t x112 = -1;
	volatile int32_t t27 = 1;

	t27 = (x109&((x110^x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;

	t28 = (x113&((x114^x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = INT8_MIN;
	uint8_t x118 = 0U;
	uint64_t x119 = 501LLU;
	volatile int8_t x120 = -58;
	int32_t t29 = -1;

	t29 = (x117&((x118^x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	volatile int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MIN;
	int8_t x124 = INT8_MAX;
	int64_t t30 = 2916LL;

	t30 = (x121&((x122^x123)==x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = UINT16_MAX;
	int32_t x127 = INT32_MAX;
	int16_t x128 = 150;
	int32_t t31 = -1;

	t31 = (x125&((x126^x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	static int8_t x130 = -1;
	int16_t x132 = INT16_MAX;
	volatile int32_t t32 = -9;

	t32 = (x129&((x130^x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 41LLU;
	uint64_t x135 = UINT64_MAX;
	volatile uint64_t t33 = 237145561941995343LLU;

	t33 = (x133&((x134^x135)==x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	int64_t x139 = -1330125574222600LL;
	int64_t t34 = -7650648616376LL;

	t34 = (x137&((x138^x139)==x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 28;
	int32_t x142 = 487294055;
	int16_t x143 = 142;
	int32_t t35 = -1;

	t35 = (x141&((x142^x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x145 = -1;
	uint16_t x146 = 1089U;
	int16_t x147 = INT16_MIN;
	int16_t x148 = -1;
	volatile int32_t t36 = 3;

	t36 = (x145&((x146^x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int64_t x150 = INT64_MAX;
	int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 500509345;

	t37 = (x149&((x150^x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = -1;
	int8_t x154 = INT8_MIN;
	int64_t x155 = INT64_MAX;
	uint16_t x156 = 4174U;
	int32_t t38 = 9959;

	t38 = (x153&((x154^x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x159 = INT32_MIN;
	volatile int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 107838;

	t39 = (x157&((x158^x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 464721254;
	int32_t x162 = -1;
	int16_t x163 = INT16_MIN;

	t40 = (x161&((x162^x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 0;
	int64_t x166 = INT64_MAX;
	int16_t x168 = -119;

	t41 = (x165&((x166^x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 2U;
	int8_t x171 = 0;
	static int16_t x172 = INT16_MAX;
	static int32_t t42 = -1544075;

	t42 = (x169&((x170^x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	static int64_t x176 = -1LL;

	t43 = (x173&((x174^x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	static uint64_t x178 = 90707572286358360LLU;
	uint8_t x179 = UINT8_MAX;
	int8_t x180 = 42;
	volatile int64_t t44 = -1LL;

	t44 = (x177&((x178^x179)==x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MAX;
	int8_t x182 = -1;
	int8_t x183 = 38;
	uint8_t x184 = 1U;
	int64_t t45 = -308LL;

	t45 = (x181&((x182^x183)==x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x186 = 2LLU;
	int16_t x187 = INT16_MAX;
	int16_t x188 = INT16_MIN;
	static int32_t t46 = -1;

	t46 = (x185&((x186^x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 4359770U;
	static volatile uint32_t x190 = 63658733U;
	volatile uint32_t x191 = UINT32_MAX;
	static int8_t x192 = INT8_MAX;
	volatile uint32_t t47 = 1359767U;

	t47 = (x189&((x190^x191)==x192));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 1LLU;
	static volatile uint32_t x194 = UINT32_MAX;
	static uint8_t x195 = UINT8_MAX;
	static uint32_t x196 = UINT32_MAX;
	uint64_t t48 = 2854416LLU;

	t48 = (x193&((x194^x195)==x196));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x198 = 123U;
	int64_t x199 = 405443025LL;
	volatile uint16_t x200 = 6U;
	volatile int32_t t49 = -1749301;

	t49 = (x197&((x198^x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	uint16_t x203 = UINT16_MAX;
	int64_t x204 = -5925006657LL;
	volatile uint64_t t50 = 123013071335378880LLU;

	t50 = (x201&((x202^x203)==x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	static int32_t x207 = INT32_MIN;
	int16_t x208 = -1;
	volatile int32_t t51 = -4;

	t51 = (x205&((x206^x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = 22;
	static int32_t x210 = INT32_MIN;
	static uint32_t x211 = 3U;
	int32_t t52 = -179978;

	t52 = (x209&((x210^x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	int16_t x214 = INT16_MAX;
	volatile int64_t x216 = INT64_MAX;
	int64_t t53 = -271868046LL;

	t53 = (x213&((x214^x215)==x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -1;
	int64_t x218 = 142LL;
	int32_t x219 = -1;
	int8_t x220 = INT8_MAX;
	volatile int32_t t54 = -1555;

	t54 = (x217&((x218^x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	volatile int8_t x222 = -1;
	static volatile int16_t x223 = 119;
	volatile uint64_t x224 = 2906LLU;
	volatile int32_t t55 = 379;

	t55 = (x221&((x222^x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	uint32_t x226 = 7U;
	int64_t x228 = 10841606LL;
	static volatile int32_t t56 = -2;

	t56 = (x225&((x226^x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint8_t x230 = UINT8_MAX;
	int64_t x231 = -1LL;
	uint16_t x232 = 20303U;
	volatile int32_t t57 = -3299;

	t57 = (x229&((x230^x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x234 = -5LL;
	int16_t x235 = 1973;
	int8_t x236 = -1;
	volatile int32_t t58 = 7878243;

	t58 = (x233&((x234^x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int64_t x238 = -1LL;
	static int64_t x239 = -175131314013188331LL;
	static volatile uint32_t x240 = 1424U;
	int32_t t59 = 1;

	t59 = (x237&((x238^x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	uint16_t x243 = UINT16_MAX;
	uint64_t x244 = 116705816947349416LLU;
	static int64_t t60 = 543793200LL;

	t60 = (x241&((x242^x243)==x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 76386LL;
	uint8_t x246 = 13U;
	int64_t x247 = 7697398258LL;
	int64_t t61 = -1771100278395301LL;

	t61 = (x245&((x246^x247)==x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = 447231284U;
	int32_t x250 = INT32_MIN;
	uint16_t x252 = 7U;
	volatile uint32_t t62 = 3U;

	t62 = (x249&((x250^x251)==x252));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = -1;
	static uint8_t x254 = 7U;
	int64_t x255 = INT64_MIN;
	volatile int8_t x256 = INT8_MAX;

	t63 = (x253&((x254^x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 4134891;
	volatile uint16_t x259 = UINT16_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t64 = -2585;

	t64 = (x257&((x258^x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MAX;
	int8_t x263 = -1;
	int32_t t65 = -12532;

	t65 = (x261&((x262^x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = INT32_MAX;
	uint8_t x267 = UINT8_MAX;
	volatile uint64_t t66 = 2905554764679162345LLU;

	t66 = (x265&((x266^x267)==x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 0U;
	int64_t x272 = INT64_MIN;
	volatile uint32_t t67 = 78305U;

	t67 = (x269&((x270^x271)==x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = -1;
	int32_t x275 = -230;
	uint64_t x276 = 750438077822LLU;
	static uint64_t t68 = 37096851LLU;

	t68 = (x273&((x274^x275)==x276));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	volatile uint16_t x279 = 561U;
	uint64_t x280 = UINT64_MAX;

	t69 = (x277&((x278^x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	int16_t x284 = INT16_MAX;
	volatile int32_t t70 = -2;

	t70 = (x281&((x282^x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	volatile int8_t x286 = INT8_MIN;
	static uint64_t x287 = 1386063LLU;
	volatile int32_t t71 = -23;

	t71 = (x285&((x286^x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x289 = 3833068744173171211LLU;
	uint16_t x290 = 1040U;
	static uint32_t x291 = 7506U;

	t72 = (x289&((x290^x291)==x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 0U;
	int32_t x294 = -1;
	static volatile uint32_t x295 = 29669125U;
	int64_t x296 = -101LL;
	int32_t t73 = 367413335;

	t73 = (x293&((x294^x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x297 = INT8_MAX;
	volatile int8_t x299 = INT8_MAX;
	volatile int32_t t74 = 4837533;

	t74 = (x297&((x298^x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	uint32_t x302 = UINT32_MAX;
	volatile int32_t x303 = INT32_MAX;
	volatile int64_t x304 = -47362802LL;
	volatile int32_t t75 = 10;

	t75 = (x301&((x302^x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = 12755564LLU;
	static uint16_t x308 = 482U;
	static int32_t t76 = 1876263;

	t76 = (x305&((x306^x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = UINT64_MAX;
	uint16_t x311 = 1U;
	int32_t x312 = INT32_MIN;
	uint64_t t77 = 223518674636165082LLU;

	t77 = (x309&((x310^x311)==x312));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 8168522U;
	static int32_t x314 = INT32_MIN;
	uint64_t x315 = UINT64_MAX;
	volatile uint32_t t78 = 3006860U;

	t78 = (x313&((x314^x315)==x316));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x317 = INT8_MAX;
	int16_t x319 = INT16_MIN;
	int64_t x320 = -1LL;
	int32_t t79 = -210;

	t79 = (x317&((x318^x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	static int8_t x322 = -6;
	static volatile uint64_t x323 = 1LLU;
	uint32_t x324 = UINT32_MAX;
	int64_t t80 = -124LL;

	t80 = (x321&((x322^x323)==x324));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x327 = -1;
	int64_t x328 = INT64_MIN;
	int32_t t81 = -165681759;

	t81 = (x325&((x326^x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -7906509;
	uint16_t x330 = 139U;
	int32_t x331 = 67;
	uint64_t x332 = 115574309466LLU;
	volatile int32_t t82 = 72;

	t82 = (x329&((x330^x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 30U;
	volatile uint8_t x334 = 20U;
	int64_t x335 = 431825733LL;
	volatile uint32_t t83 = 180U;

	t83 = (x333&((x334^x335)==x336));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MAX;
	uint64_t x339 = UINT64_MAX;
	volatile int8_t x340 = INT8_MIN;
	static volatile int32_t t84 = 13215;

	t84 = (x337&((x338^x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	volatile int16_t x342 = INT16_MAX;
	volatile int8_t x343 = -1;

	t85 = (x341&((x342^x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 14289139088896LLU;
	int16_t x346 = INT16_MAX;
	static int16_t x348 = INT16_MIN;
	uint64_t t86 = 1984607947065LLU;

	t86 = (x345&((x346^x347)==x348));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 99626;
	int8_t x352 = INT8_MAX;
	volatile int32_t t87 = 7;

	t87 = (x349&((x350^x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	uint16_t x355 = 1U;
	uint16_t x356 = 58U;
	volatile int64_t t88 = 3372548605004642LL;

	t88 = (x353&((x354^x355)==x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x358 = 118676377;
	uint8_t x359 = 4U;

	t89 = (x357&((x358^x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x362 = INT8_MIN;
	int32_t x363 = -1;
	volatile int32_t t90 = -92516745;

	t90 = (x361&((x362^x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x367 = INT16_MIN;

	t91 = (x365&((x366^x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -2;
	static uint64_t x370 = 12LLU;
	int64_t x371 = -1LL;
	uint8_t x372 = 6U;
	static int32_t t92 = -832949;

	t92 = (x369&((x370^x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = INT8_MIN;
	static int16_t x375 = INT16_MIN;
	uint32_t x376 = UINT32_MAX;
	uint64_t t93 = 13085014LLU;

	t93 = (x373&((x374^x375)==x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MAX;
	volatile int64_t x379 = -1LL;
	volatile int64_t t94 = -24750LL;

	t94 = (x377&((x378^x379)==x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	volatile int32_t x382 = -1;
	int16_t x383 = INT16_MIN;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = 479;

	t95 = (x381&((x382^x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 3476;
	int32_t x386 = -793666258;
	static int32_t x387 = INT32_MAX;
	int64_t x388 = INT64_MAX;
	int32_t t96 = -1;

	t96 = (x385&((x386^x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = UINT16_MAX;
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MIN;
	uint32_t x392 = 50879643U;
	int32_t t97 = -1;

	t97 = (x389&((x390^x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x394 = -7;
	static volatile int32_t t98 = 7;

	t98 = (x393&((x394^x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 1792;
	int64_t x398 = -1LL;
	int16_t x399 = INT16_MAX;
	int64_t x400 = INT64_MAX;
	volatile int32_t t99 = 1;

	t99 = (x397&((x398^x399)==x400));

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

