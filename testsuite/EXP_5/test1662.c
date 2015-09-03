#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MIN;
uint32_t x14 = 6U;
static int64_t x18 = INT64_MIN;
int32_t x21 = -11422;
int8_t x23 = -17;
volatile int8_t x26 = 4;
int8_t x27 = -2;
int32_t t6 = 44;
int16_t x34 = 240;
int8_t x40 = -1;
int8_t x47 = INT8_MIN;
volatile uint32_t x52 = 190680846U;
int16_t x56 = INT16_MIN;
int32_t t13 = -236982;
volatile int64_t t14 = -95129LL;
int64_t x68 = 794478904787LL;
static int32_t x69 = -1;
uint64_t x70 = 240LLU;
int8_t x71 = 0;
int64_t x75 = -9503399011LL;
int64_t x78 = -1LL;
static int32_t t19 = 19049;
static volatile int64_t t20 = 14652020984LL;
static int64_t x87 = INT64_MIN;
volatile int32_t t22 = -4;
int64_t x97 = INT64_MIN;
int64_t x104 = INT64_MIN;
int8_t x115 = -1;
int16_t x119 = INT16_MAX;
static int32_t t32 = 9621;
static volatile uint16_t x133 = 16341U;
uint8_t x137 = 10U;
int64_t x140 = INT64_MAX;
volatile int64_t t34 = -6143230LL;
uint64_t x143 = 375000683004LLU;
int16_t x144 = INT16_MIN;
int32_t t35 = -110528949;
int16_t x145 = INT16_MIN;
static int32_t x158 = -91419783;
int32_t x174 = INT32_MAX;
volatile uint64_t t44 = 159324411176190923LLU;
static uint64_t x181 = UINT64_MAX;
volatile uint8_t x187 = 25U;
int16_t x190 = 412;
static int32_t x194 = INT32_MAX;
static volatile uint32_t t49 = 235U;
static int64_t x201 = INT64_MIN;
volatile int32_t x203 = -1;
static int32_t x204 = -27009501;
volatile int8_t x212 = INT8_MAX;
int32_t t52 = -709085;
int16_t x213 = 0;
uint16_t x214 = UINT16_MAX;
static int32_t x216 = INT32_MIN;
int16_t x218 = 562;
volatile int32_t x219 = -1;
int8_t x228 = INT8_MIN;
int32_t x229 = -1;
static int8_t x230 = INT8_MIN;
int16_t x232 = INT16_MIN;
uint64_t x233 = UINT64_MAX;
int32_t x236 = INT32_MIN;
static uint32_t x242 = UINT32_MAX;
int8_t x247 = -10;
uint32_t t61 = 1668383575U;
uint16_t x249 = 9U;
volatile int32_t t62 = 8375;
static int32_t x255 = INT32_MIN;
static volatile int32_t t64 = 9808;
volatile uint16_t x261 = 5100U;
int8_t x266 = 1;
int32_t x270 = 0;
volatile int16_t x273 = -2;
int32_t x274 = 66739377;
volatile int32_t x276 = INT32_MIN;
static uint32_t x279 = 65171513U;
volatile uint64_t t69 = 26277066211599LLU;
uint32_t x281 = UINT32_MAX;
int32_t x283 = -240649;
int32_t x290 = INT32_MIN;
volatile int16_t x291 = INT16_MIN;
int32_t x295 = INT32_MAX;
static uint64_t x303 = 200819016653LLU;
static uint32_t t75 = 42714U;
uint32_t x306 = UINT32_MAX;
static uint32_t t76 = 1654579U;
int64_t x313 = INT64_MIN;
int16_t x316 = -1837;
static int32_t t80 = 170811;
int32_t x328 = INT32_MAX;
uint8_t x334 = 15U;
int8_t x336 = 1;
volatile int8_t x338 = 6;
static volatile int8_t x340 = -1;
static int32_t x344 = -1;
int32_t x351 = -112890;
static int32_t x353 = -2728152;
static volatile int16_t x354 = INT16_MAX;
int16_t x359 = -1;
int32_t x361 = -90917392;
volatile int64_t t91 = 11835LL;
int64_t x378 = -1LL;
uint16_t x380 = 3428U;
volatile uint64_t t95 = 111530238601725LLU;
int32_t x391 = -40306654;
volatile uint64_t t97 = 837LLU;
static volatile uint64_t x395 = UINT64_MAX;
int16_t x398 = -1;


void f0(void) {
	static int64_t x1 = -1LL;
	volatile int64_t x2 = INT64_MAX;
	int16_t x3 = 1;
	int32_t x4 = -5;
	volatile int64_t t0 = 79396271965014LL;

	t0 = (x1&((x2<=x3)&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MIN;
	static uint8_t x7 = 1U;
	int32_t t1 = 1257539;

	t1 = (x5&((x6<=x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	uint8_t x10 = UINT8_MAX;
	int16_t x11 = -1;
	static int32_t x12 = 217158;
	int32_t t2 = -56;

	t2 = (x9&((x10<=x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	int32_t x15 = 249069;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 2412339;

	t3 = (x13&((x14<=x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 294179689U;
	static uint64_t x19 = UINT64_MAX;
	int16_t x20 = INT16_MIN;
	uint32_t t4 = 0U;

	t4 = (x17&((x18<=x19)&x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	int8_t x24 = -1;
	int32_t t5 = 515724;

	t5 = (x21&((x22<=x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	volatile int8_t x28 = 0;

	t6 = (x25&((x26<=x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int8_t x30 = INT8_MAX;
	int16_t x31 = INT16_MIN;
	int16_t x32 = -1;
	volatile int32_t t7 = 154;

	t7 = (x29&((x30<=x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -913934;
	static uint64_t x35 = 21481257345LLU;
	static int64_t x36 = INT64_MAX;
	int64_t t8 = -4130835060381LL;

	t8 = (x33&((x34<=x35)&x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x37 = 41491U;
	static uint32_t x38 = UINT32_MAX;
	int16_t x39 = 16101;
	uint32_t t9 = 304602550U;

	t9 = (x37&((x38<=x39)&x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int16_t x42 = INT16_MAX;
	static volatile int8_t x43 = 1;
	int16_t x44 = -1;
	int64_t t10 = 181LL;

	t10 = (x41&((x42<=x43)&x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	static int64_t x46 = -108481695519LL;
	static volatile int16_t x48 = 9120;
	int32_t t11 = -83442;

	t11 = (x45&((x46<=x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 447U;
	int16_t x50 = -1;
	volatile int8_t x51 = INT8_MIN;
	volatile uint32_t t12 = 107867180U;

	t12 = (x49&((x50<=x51)&x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	uint64_t x54 = 28774944629976LLU;
	int64_t x55 = -1LL;

	t13 = (x53&((x54<=x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 21U;
	static volatile int8_t x58 = -10;
	int32_t x59 = -3;
	static int64_t x60 = -1LL;

	t14 = (x57&((x58<=x59)&x60));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	int64_t x62 = INT64_MAX;
	uint64_t x63 = UINT64_MAX;
	volatile int32_t x64 = -249;
	static volatile uint32_t t15 = 9651070U;

	t15 = (x61&((x62<=x63)&x64));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 11331;
	int32_t x66 = -7080;
	int8_t x67 = -1;
	int64_t t16 = 75927LL;

	t16 = (x65&((x66<=x67)&x68));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x72 = -1;
	volatile int32_t t17 = -263659642;

	t17 = (x69&((x70<=x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MIN;
	volatile int32_t x76 = INT32_MIN;
	volatile int64_t t18 = 472324761LL;

	t18 = (x73&((x74<=x75)&x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -53;
	int8_t x79 = 1;
	int16_t x80 = INT16_MIN;

	t19 = (x77&((x78<=x79)&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x82 = 33538LLU;
	volatile uint64_t x83 = 2618237LLU;
	volatile uint32_t x84 = UINT32_MAX;

	t20 = (x81&((x82<=x83)&x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 95215U;
	volatile int16_t x86 = INT16_MIN;
	volatile uint32_t x88 = UINT32_MAX;
	uint32_t t21 = 2086348081U;

	t21 = (x85&((x86<=x87)&x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	uint8_t x90 = 52U;
	volatile int16_t x91 = INT16_MAX;
	volatile uint8_t x92 = UINT8_MAX;

	t22 = (x89&((x90<=x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int64_t x94 = -511506491024LL;
	int32_t x95 = INT32_MAX;
	volatile int16_t x96 = INT16_MIN;
	int32_t t23 = 1065472811;

	t23 = (x93&((x94<=x95)&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x98 = -1;
	int16_t x99 = -1;
	int32_t x100 = -1;
	int64_t t24 = -21250LL;

	t24 = (x97&((x98<=x99)&x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 18282U;
	volatile int16_t x102 = INT16_MAX;
	volatile uint32_t x103 = UINT32_MAX;
	volatile int64_t t25 = 7279292LL;

	t25 = (x101&((x102<=x103)&x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	static int8_t x106 = 19;
	int64_t x107 = INT64_MAX;
	volatile int8_t x108 = -7;
	int64_t t26 = 12431597669132553LL;

	t26 = (x105&((x106<=x107)&x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	static int64_t x110 = INT64_MIN;
	static uint16_t x111 = 0U;
	static uint64_t x112 = 58855027LLU;
	uint64_t t27 = 8976641672439475131LLU;

	t27 = (x109&((x110<=x111)&x112));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	volatile int32_t x114 = INT32_MIN;
	int8_t x116 = 1;
	volatile int32_t t28 = -75;

	t28 = (x113&((x114<=x115)&x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = INT32_MAX;
	static int32_t x118 = INT32_MAX;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = 216971364;

	t29 = (x117&((x118<=x119)&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	volatile int32_t x122 = 97;
	volatile uint64_t x123 = 144951006724184LLU;
	uint8_t x124 = UINT8_MAX;
	static volatile int64_t t30 = -194065241LL;

	t30 = (x121&((x122<=x123)&x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	uint32_t x126 = UINT32_MAX;
	int8_t x127 = INT8_MIN;
	volatile int64_t x128 = -1LL;
	int64_t t31 = -1116545LL;

	t31 = (x125&((x126<=x127)&x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	int32_t x130 = 73629154;
	uint8_t x131 = 67U;
	int32_t x132 = -1;

	t32 = (x129&((x130<=x131)&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = INT8_MIN;
	static uint8_t x135 = 6U;
	int16_t x136 = INT16_MIN;
	static int32_t t33 = 130427365;

	t33 = (x133&((x134<=x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = UINT16_MAX;
	int8_t x139 = -1;

	t34 = (x137&((x138<=x139)&x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	int8_t x142 = -1;

	t35 = (x141&((x142<=x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = UINT64_MAX;
	uint16_t x147 = 2122U;
	uint8_t x148 = 1U;
	volatile int32_t t36 = 209308;

	t36 = (x145&((x146<=x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 2089081618U;
	int64_t x150 = 28442878122LL;
	int64_t x151 = INT64_MIN;
	volatile int64_t x152 = INT64_MAX;
	int64_t t37 = -837250899413093173LL;

	t37 = (x149&((x150<=x151)&x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	int16_t x154 = -12823;
	int16_t x155 = INT16_MIN;
	static int32_t x156 = 417;
	int32_t t38 = -6427575;

	t38 = (x153&((x154<=x155)&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -135;
	int64_t x159 = INT64_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t39 = 57935401;

	t39 = (x157&((x158<=x159)&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -13530LL;
	uint16_t x162 = 31U;
	uint64_t x163 = 511490548202730394LLU;
	static volatile int8_t x164 = INT8_MAX;
	volatile int64_t t40 = -328357737LL;

	t40 = (x161&((x162<=x163)&x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MAX;
	volatile int64_t x166 = -106334LL;
	volatile int32_t x167 = INT32_MAX;
	uint16_t x168 = 217U;
	volatile int32_t t41 = 875659447;

	t41 = (x165&((x166<=x167)&x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 1U;
	volatile int64_t x170 = 48462236430110LL;
	uint64_t x171 = 43363936890LLU;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 244229831;

	t42 = (x169&((x170<=x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	static uint64_t x175 = 236LLU;
	volatile int32_t x176 = INT32_MIN;
	volatile int64_t t43 = 14585738679982LL;

	t43 = (x173&((x174<=x175)&x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 267713LLU;
	int8_t x178 = INT8_MIN;
	int8_t x179 = -1;
	int32_t x180 = -1;

	t44 = (x177&((x178<=x179)&x180));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x182 = UINT32_MAX;
	int32_t x183 = 4956;
	static int64_t x184 = INT64_MIN;
	volatile uint64_t t45 = 299LLU;

	t45 = (x181&((x182<=x183)&x184));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	volatile int8_t x186 = INT8_MIN;
	static int64_t x188 = -1LL;
	int64_t t46 = -37841LL;

	t46 = (x185&((x186<=x187)&x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	static int64_t t47 = 17174867729LL;

	t47 = (x189&((x190<=x191)&x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	int8_t x195 = INT8_MIN;
	int16_t x196 = -1;
	int32_t t48 = 423456414;

	t48 = (x193&((x194<=x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 370U;
	int8_t x198 = 46;
	int64_t x199 = -1LL;
	int16_t x200 = INT16_MIN;

	t49 = (x197&((x198<=x199)&x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 116149038078441646LLU;
	volatile int64_t t50 = 488835488876426LL;

	t50 = (x201&((x202<=x203)&x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 8;
	int16_t x206 = 0;
	int8_t x207 = -1;
	static int64_t x208 = INT64_MIN;
	volatile int64_t t51 = -3540931986242LL;

	t51 = (x205&((x206<=x207)&x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 3305U;
	uint64_t x210 = 64842LLU;
	int16_t x211 = -1;

	t52 = (x209&((x210<=x211)&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x215 = INT8_MIN;
	static volatile int32_t t53 = 0;

	t53 = (x213&((x214<=x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	int64_t x220 = -1560LL;
	int64_t t54 = -1854LL;

	t54 = (x217&((x218<=x219)&x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -51720LL;
	static uint8_t x222 = 3U;
	int16_t x223 = INT16_MIN;
	int64_t x224 = -1LL;
	volatile int64_t t55 = 16289582LL;

	t55 = (x221&((x222<=x223)&x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -38;
	volatile int16_t x226 = INT16_MIN;
	uint16_t x227 = UINT16_MAX;
	volatile int32_t t56 = 3;

	t56 = (x225&((x226<=x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x231 = -2126669515456972772LL;
	volatile int32_t t57 = -134771;

	t57 = (x229&((x230<=x231)&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x234 = -1LL;
	uint8_t x235 = 14U;
	uint64_t t58 = 1721207048440754248LLU;

	t58 = (x233&((x234<=x235)&x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int32_t x238 = -1;
	int32_t x239 = INT32_MIN;
	static uint32_t x240 = 62723U;
	uint64_t t59 = 108855906309366LLU;

	t59 = (x237&((x238<=x239)&x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -2;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MIN;
	static volatile int32_t t60 = 10;

	t60 = (x241&((x242<=x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	volatile int64_t x246 = -1LL;
	uint32_t x248 = UINT32_MAX;

	t61 = (x245&((x246<=x247)&x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = INT16_MIN;
	int64_t x251 = -35038065LL;
	uint8_t x252 = 0U;

	t62 = (x249&((x250<=x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	uint8_t x254 = UINT8_MAX;
	int64_t x256 = -1LL;
	static int64_t t63 = 31381331LL;

	t63 = (x253&((x254<=x255)&x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = 2;
	uint8_t x259 = 7U;
	volatile int32_t x260 = 3812;

	t64 = (x257&((x258<=x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MIN;
	static int8_t x263 = INT8_MIN;
	uint8_t x264 = 19U;
	int32_t t65 = 33045616;

	t65 = (x261&((x262<=x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 68;
	uint32_t x267 = UINT32_MAX;
	int32_t x268 = -494272249;
	static int32_t t66 = -23;

	t66 = (x265&((x266<=x267)&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 7743U;
	static int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MAX;
	int64_t t67 = 676883083LL;

	t67 = (x269&((x270<=x271)&x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x275 = INT16_MIN;
	volatile int32_t t68 = -1286234;

	t68 = (x273&((x274<=x275)&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = UINT64_MAX;
	volatile int8_t x278 = 0;
	int64_t x280 = 1342640290LL;

	t69 = (x277&((x278<=x279)&x280));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x282 = INT64_MIN;
	static uint32_t x284 = UINT32_MAX;
	uint32_t t70 = 2856U;

	t70 = (x281&((x282<=x283)&x284));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = UINT32_MAX;
	int64_t x286 = -3202LL;
	static volatile uint16_t x287 = UINT16_MAX;
	int8_t x288 = -1;
	uint32_t t71 = 0U;

	t71 = (x285&((x286<=x287)&x288));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 52333052LLU;
	static int8_t x292 = INT8_MAX;
	volatile uint64_t t72 = 23LLU;

	t72 = (x289&((x290<=x291)&x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 202736682U;
	volatile int32_t x294 = INT32_MAX;
	int64_t x296 = INT64_MAX;
	int64_t t73 = 266199820LL;

	t73 = (x293&((x294<=x295)&x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	static volatile int16_t x298 = 170;
	int8_t x299 = INT8_MAX;
	volatile int32_t x300 = INT32_MIN;
	int32_t t74 = -5214;

	t74 = (x297&((x298<=x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	uint16_t x302 = UINT16_MAX;
	static uint32_t x304 = UINT32_MAX;

	t75 = (x301&((x302<=x303)&x304));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x305 = 22828U;
	uint16_t x307 = UINT16_MAX;
	int8_t x308 = -4;

	t76 = (x305&((x306<=x307)&x308));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;
	int8_t x310 = -1;
	static uint32_t x311 = 89U;
	uint8_t x312 = 0U;
	int64_t t77 = -465LL;

	t77 = (x309&((x310<=x311)&x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x314 = UINT16_MAX;
	static int32_t x315 = -1;
	int64_t t78 = -26730798079LL;

	t78 = (x313&((x314<=x315)&x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 189U;
	int32_t x318 = 487;
	int64_t x319 = 0LL;
	int64_t x320 = 139077678339LL;
	int64_t t79 = 1LL;

	t79 = (x317&((x318<=x319)&x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 1;
	static int32_t x322 = INT32_MIN;
	uint64_t x323 = 5LLU;
	int16_t x324 = INT16_MAX;

	t80 = (x321&((x322<=x323)&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = -1;
	static int32_t x326 = -1;
	int8_t x327 = 3;
	int32_t t81 = -1554552;

	t81 = (x325&((x326<=x327)&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = INT64_MIN;
	int8_t x331 = INT8_MIN;
	int16_t x332 = 60;
	static volatile uint64_t t82 = 248LLU;

	t82 = (x329&((x330<=x331)&x332));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	int32_t x335 = -1;
	volatile int32_t t83 = 1;

	t83 = (x333&((x334<=x335)&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	volatile int8_t x339 = INT8_MAX;
	static volatile int32_t t84 = 161;

	t84 = (x337&((x338<=x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x341 = 6U;
	static uint8_t x342 = 0U;
	static volatile int32_t x343 = -1;
	static volatile int32_t t85 = 1;

	t85 = (x341&((x342<=x343)&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x345 = UINT32_MAX;
	static volatile int64_t x346 = 419097275312078LL;
	uint32_t x347 = UINT32_MAX;
	uint8_t x348 = 10U;
	volatile uint32_t t86 = 453019578U;

	t86 = (x345&((x346<=x347)&x348));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	uint8_t x350 = 3U;
	static uint16_t x352 = 0U;
	int64_t t87 = 388LL;

	t87 = (x349&((x350<=x351)&x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 7150;

	t88 = (x353&((x354<=x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = -1515;
	uint8_t x360 = 76U;
	volatile int32_t t89 = -883607;

	t89 = (x357&((x358<=x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MIN;
	uint16_t x363 = UINT16_MAX;
	uint8_t x364 = 1U;
	int32_t t90 = 782;

	t90 = (x361&((x362<=x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	static volatile int16_t x366 = INT16_MAX;
	volatile int16_t x367 = 6475;
	volatile int64_t x368 = -6975455LL;

	t91 = (x365&((x366<=x367)&x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	static int8_t x370 = -2;
	int64_t x371 = 1LL;
	volatile int16_t x372 = INT16_MIN;
	volatile int64_t t92 = 649975788LL;

	t92 = (x369&((x370<=x371)&x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x373 = 1654U;
	static int8_t x374 = 1;
	volatile int16_t x375 = -16045;
	int32_t x376 = INT32_MIN;
	static uint32_t t93 = 1007040599U;

	t93 = (x373&((x374<=x375)&x376));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	volatile int32_t x379 = INT32_MIN;
	static int32_t t94 = -341926;

	t94 = (x377&((x378<=x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 95932870LLU;
	int64_t x382 = -1LL;
	int8_t x383 = INT8_MIN;
	static int8_t x384 = INT8_MIN;

	t95 = (x381&((x382<=x383)&x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	uint32_t x386 = UINT32_MAX;
	int32_t x387 = INT32_MIN;
	static volatile int64_t x388 = INT64_MIN;
	volatile int64_t t96 = -946954LL;

	t96 = (x385&((x386<=x387)&x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	int16_t x390 = -1;
	int64_t x392 = 53703759663144LL;

	t97 = (x389&((x390<=x391)&x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	static uint8_t x394 = UINT8_MAX;
	volatile int64_t x396 = 13632277LL;
	volatile int64_t t98 = 12564118676408LL;

	t98 = (x393&((x394<=x395)&x396));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x397 = INT64_MAX;
	volatile uint8_t x399 = 1U;
	volatile int32_t x400 = INT32_MAX;
	volatile int64_t t99 = 15362534068750000LL;

	t99 = (x397&((x398<=x399)&x400));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

