#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = 0;
int32_t x12 = -1;
uint32_t x16 = UINT32_MAX;
uint32_t t3 = 1724926U;
int8_t x28 = -1;
int16_t x29 = -1;
volatile int32_t t7 = 6;
int8_t x34 = INT8_MIN;
int16_t x38 = INT16_MIN;
int8_t x48 = INT8_MAX;
int8_t x59 = INT8_MIN;
uint8_t x63 = 0U;
static int64_t x64 = INT64_MAX;
static volatile int32_t t15 = -44074;
int8_t x72 = 11;
volatile int16_t x78 = INT16_MAX;
static volatile int16_t x86 = 436;
static volatile int32_t x88 = -284471850;
uint32_t x92 = 378U;
volatile int32_t t22 = -1;
volatile int8_t x98 = 1;
int32_t x108 = INT32_MIN;
uint64_t t26 = 12393028233LLU;
uint64_t x115 = 6252310146LLU;
int8_t x119 = -1;
int64_t x123 = INT64_MAX;
volatile int8_t x128 = INT8_MIN;
static uint32_t x129 = 3554U;
int32_t x131 = INT32_MIN;
int8_t x132 = 1;
uint32_t x134 = 16062U;
int16_t x135 = INT16_MIN;
volatile int8_t x137 = INT8_MIN;
uint32_t x143 = 613442U;
volatile uint64_t t34 = 132311700159059LLU;
static int64_t t35 = 61714LL;
uint8_t x151 = UINT8_MAX;
volatile uint16_t x152 = UINT16_MAX;
int8_t x162 = -1;
int16_t x165 = -1;
static int8_t x167 = INT8_MAX;
volatile int16_t x168 = INT16_MIN;
int32_t t40 = 182488059;
int64_t x170 = INT64_MIN;
int8_t x173 = INT8_MAX;
uint32_t x176 = 10831450U;
static int8_t x180 = INT8_MIN;
int64_t x183 = -1LL;
volatile int32_t t46 = 471;
int8_t x212 = INT8_MAX;
volatile int32_t t51 = -8975;
int32_t x225 = -853;
volatile int16_t x227 = -1;
int8_t x228 = -1;
static int16_t x242 = INT16_MIN;
int32_t t58 = 641997935;
static int8_t x249 = -1;
uint32_t t61 = 45679U;
int64_t x257 = -1LL;
int64_t x260 = 114663403352851LL;
uint64_t x261 = UINT64_MAX;
static int16_t x264 = -1;
volatile int32_t t63 = -33874;
volatile uint32_t x267 = 8U;
int64_t x268 = 22976404LL;
volatile uint32_t x272 = UINT32_MAX;
volatile uint16_t x277 = UINT16_MAX;
uint32_t x278 = 171U;
volatile int32_t x280 = 463541923;
volatile int32_t t67 = 0;
volatile int64_t x281 = 2LL;
int32_t x282 = 15495;
uint32_t x286 = 76584385U;
int64_t x298 = 3923LL;
int16_t x302 = 1;
int32_t t73 = -181076758;
int16_t x305 = -3;
volatile int16_t x309 = -1;
static int8_t x314 = 0;
uint16_t x316 = 2U;
uint64_t x323 = 1874LLU;
int32_t x324 = INT32_MIN;
int64_t x325 = INT64_MIN;
int64_t x329 = INT64_MAX;
uint64_t x332 = 2166LLU;
volatile uint64_t x333 = 1539374282475LLU;
volatile int32_t x334 = INT32_MIN;
static int16_t x336 = 1;
int32_t t81 = -2770;
static int8_t x340 = 3;
volatile int32_t t82 = -128117;
int64_t x341 = INT64_MIN;
int32_t t83 = -76;
static int32_t x345 = INT32_MIN;
int16_t x347 = INT16_MIN;
volatile int64_t t84 = 86459878170LL;
volatile int32_t x354 = -872502212;
volatile int64_t t86 = -3LL;
volatile int64_t x357 = 237LL;
uint16_t x358 = 68U;
int8_t x359 = INT8_MAX;
volatile int32_t x360 = -1;
volatile int32_t t87 = 436;
int8_t x365 = -43;
int8_t x366 = INT8_MIN;
uint16_t x373 = UINT16_MAX;
volatile uint8_t x380 = 57U;
volatile uint16_t x384 = 3U;
int32_t t93 = -931372409;
uint16_t x387 = UINT16_MAX;
uint32_t x388 = UINT32_MAX;
volatile int64_t t95 = -21LL;
static int8_t x398 = INT8_MIN;
int64_t x401 = INT64_MAX;
uint16_t x405 = 3U;
uint32_t x409 = 11U;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	int64_t x2 = INT64_MAX;
	int8_t x3 = 1;
	uint64_t x4 = 303545537002211LLU;
	volatile uint64_t t0 = 136049548518842849LLU;

	t0 = (((x1&x2)<x3)%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2307U;
	int16_t x6 = 0;
	int64_t x8 = -1LL;
	volatile int64_t t1 = -4082073407908LL;

	t1 = (((x5&x6)<x7)%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MIN;
	uint16_t x11 = 79U;
	int32_t t2 = 58000471;

	t2 = (((x9&x10)<x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	int8_t x14 = 1;
	int8_t x15 = INT8_MAX;

	t3 = (((x13&x14)<x15)%x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 96;
	int64_t x18 = INT64_MAX;
	uint16_t x19 = 240U;
	uint32_t x20 = 1909855870U;
	static uint32_t t4 = 7U;

	t4 = (((x17&x18)<x19)%x20);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x21 = 119598587U;
	int16_t x22 = -1;
	static uint64_t x23 = 3822720LLU;
	int8_t x24 = -1;
	static int32_t t5 = -92;

	t5 = (((x21&x22)<x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 31;
	int32_t x26 = -339707;
	int8_t x27 = INT8_MIN;
	volatile int32_t t6 = -60964;

	t6 = (((x25&x26)<x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = INT64_MAX;
	int64_t x31 = 8911270585416LL;
	int8_t x32 = -1;

	t7 = (((x29&x30)<x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	static uint8_t x35 = 3U;
	uint8_t x36 = 6U;
	volatile int32_t t8 = -26;

	t8 = (((x33&x34)<x35)%x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MAX;
	uint64_t x39 = 30090339LLU;
	uint16_t x40 = UINT16_MAX;
	static volatile int32_t t9 = -991;

	t9 = (((x37&x38)<x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 18094U;
	static int32_t x42 = INT32_MAX;
	volatile uint16_t x43 = 1762U;
	uint8_t x44 = 16U;
	int32_t t10 = -2214;

	t10 = (((x41&x42)<x43)%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 251;
	volatile int32_t x46 = -208620399;
	int64_t x47 = -1LL;
	volatile int32_t t11 = -1;

	t11 = (((x45&x46)<x47)%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	int64_t x54 = INT64_MIN;
	volatile int64_t x55 = 227440385244LL;
	static uint8_t x56 = 90U;
	int32_t t12 = -45;

	t12 = (((x53&x54)<x55)%x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = INT64_MIN;
	static uint8_t x58 = UINT8_MAX;
	int64_t x60 = 142252656079014277LL;
	int64_t t13 = 108LL;

	t13 = (((x57&x58)<x59)%x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	uint64_t x62 = UINT64_MAX;
	volatile int64_t t14 = 206787713LL;

	t14 = (((x61&x62)<x63)%x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = INT64_MIN;
	uint8_t x66 = 9U;
	uint32_t x67 = UINT32_MAX;
	volatile int16_t x68 = 10936;

	t15 = (((x65&x66)<x67)%x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 158U;
	uint32_t x70 = 955819U;
	int8_t x71 = INT8_MAX;
	static int32_t t16 = 592;

	t16 = (((x69&x70)<x71)%x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	static int64_t x74 = INT64_MIN;
	static int32_t x75 = INT32_MAX;
	uint32_t x76 = 57292618U;
	volatile uint32_t t17 = 628U;

	t17 = (((x73&x74)<x75)%x76);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = 97666;
	uint32_t x79 = UINT32_MAX;
	static int16_t x80 = -479;
	int32_t t18 = 193169635;

	t18 = (((x77&x78)<x79)%x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MAX;
	static uint64_t x82 = 46585LLU;
	static uint8_t x83 = 84U;
	int64_t x84 = INT64_MAX;
	int64_t t19 = -16088712212386431LL;

	t19 = (((x81&x82)<x83)%x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MAX;
	int32_t x87 = -1;
	static volatile int32_t t20 = 63234112;

	t20 = (((x85&x86)<x87)%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = UINT8_MAX;
	static volatile uint16_t x91 = 2796U;
	volatile uint32_t t21 = 5404U;

	t21 = (((x89&x90)<x91)%x92);

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x93 = 1730U;
	volatile uint8_t x94 = 17U;
	int64_t x95 = -2873058879690507LL;
	static int32_t x96 = INT32_MAX;

	t22 = (((x93&x94)<x95)%x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	volatile uint16_t x99 = UINT16_MAX;
	int64_t x100 = -76640LL;
	int64_t t23 = 29313853349LL;

	t23 = (((x97&x98)<x99)%x100);

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x101 = 69U;
	volatile uint8_t x102 = UINT8_MAX;
	int64_t x103 = 12382107830982499LL;
	volatile uint16_t x104 = UINT16_MAX;
	int32_t t24 = -40;

	t24 = (((x101&x102)<x103)%x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = INT32_MIN;
	int8_t x106 = 0;
	uint8_t x107 = UINT8_MAX;
	int32_t t25 = 1;

	t25 = (((x105&x106)<x107)%x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	int8_t x110 = INT8_MIN;
	int16_t x111 = -1;
	uint64_t x112 = 79771239LLU;

	t26 = (((x109&x110)<x111)%x112);

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MAX;
	static int16_t x114 = INT16_MIN;
	uint8_t x116 = 5U;
	int32_t t27 = -20;

	t27 = (((x113&x114)<x115)%x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = INT32_MIN;
	int8_t x118 = 1;
	int16_t x120 = INT16_MIN;
	volatile int32_t t28 = -19;

	t28 = (((x117&x118)<x119)%x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = -12568LL;
	uint64_t x122 = 54755LLU;
	volatile int8_t x124 = -1;
	volatile int32_t t29 = -16299;

	t29 = (((x121&x122)<x123)%x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = 21848417LL;
	int32_t x126 = INT32_MAX;
	uint64_t x127 = UINT64_MAX;
	volatile int32_t t30 = 36772;

	t30 = (((x125&x126)<x127)%x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = INT8_MAX;
	static volatile int32_t t31 = -3;

	t31 = (((x129&x130)<x131)%x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	volatile int32_t x136 = -1;
	volatile int32_t t32 = 4;

	t32 = (((x133&x134)<x135)%x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x138 = 1604118LLU;
	int16_t x139 = 44;
	uint32_t x140 = UINT32_MAX;
	uint32_t t33 = 12489U;

	t33 = (((x137&x138)<x139)%x140);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 127U;
	int64_t x142 = INT64_MAX;
	uint64_t x144 = 14039411737LLU;

	t34 = (((x141&x142)<x143)%x144);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x145 = 18U;
	int8_t x146 = -1;
	volatile int32_t x147 = INT32_MIN;
	int64_t x148 = 6LL;

	t35 = (((x145&x146)<x147)%x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = 0U;
	int16_t x150 = INT16_MIN;
	int32_t t36 = 9;

	t36 = (((x149&x150)<x151)%x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x153 = 5;
	int8_t x154 = -31;
	static volatile int64_t x155 = 936099526196750887LL;
	int16_t x156 = 3897;
	int32_t t37 = 1;

	t37 = (((x153&x154)<x155)%x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 115U;
	volatile int64_t x158 = INT64_MIN;
	int32_t x159 = INT32_MAX;
	volatile int64_t x160 = INT64_MIN;
	static volatile int64_t t38 = 12544657353LL;

	t38 = (((x157&x158)<x159)%x160);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -213;
	int8_t x163 = -2;
	int64_t x164 = 7689LL;
	int64_t t39 = -7764LL;

	t39 = (((x161&x162)<x163)%x164);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x166 = INT16_MAX;

	t40 = (((x165&x166)<x167)%x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	int8_t x171 = INT8_MAX;
	int32_t x172 = INT32_MAX;
	static int32_t t41 = 63;

	t41 = (((x169&x170)<x171)%x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x174 = INT64_MIN;
	volatile int64_t x175 = 2724218137536262LL;
	volatile uint32_t t42 = 4089002U;

	t42 = (((x173&x174)<x175)%x176);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = -1;
	uint16_t x178 = 12U;
	volatile int32_t x179 = -27;
	int32_t t43 = 1770163;

	t43 = (((x177&x178)<x179)%x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x181 = 5894240749LLU;
	volatile int16_t x182 = INT16_MIN;
	static volatile int64_t x184 = INT64_MIN;
	volatile int64_t t44 = 71516480043097LL;

	t44 = (((x181&x182)<x183)%x184);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = UINT16_MAX;
	volatile int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MIN;
	int32_t x188 = 6;
	int32_t t45 = -4;

	t45 = (((x185&x186)<x187)%x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x193 = 11;
	int8_t x194 = 11;
	uint32_t x195 = 1397U;
	volatile uint16_t x196 = 61U;

	t46 = (((x193&x194)<x195)%x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	volatile int16_t x198 = -1;
	int16_t x199 = 8;
	uint16_t x200 = 6187U;
	static int32_t t47 = -8811910;

	t47 = (((x197&x198)<x199)%x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -1;
	int64_t x202 = INT64_MIN;
	int64_t x203 = 25434LL;
	static int64_t x204 = INT64_MIN;
	volatile int64_t t48 = -260924LL;

	t48 = (((x201&x202)<x203)%x204);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MIN;
	int32_t x206 = -1;
	static volatile int16_t x207 = 183;
	int64_t x208 = -326LL;
	int64_t t49 = -4LL;

	t49 = (((x205&x206)<x207)%x208);

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = 23U;
	int16_t x210 = -3510;
	int32_t x211 = 6502305;
	int32_t t50 = -31;

	t50 = (((x209&x210)<x211)%x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 64U;
	static int8_t x214 = 0;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MIN;

	t51 = (((x213&x214)<x215)%x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MIN;
	volatile int64_t x218 = -1LL;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MAX;
	int64_t t52 = 23445168032496461LL;

	t52 = (((x217&x218)<x219)%x220);

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	volatile int8_t x222 = INT8_MIN;
	static int32_t x223 = -1;
	static volatile uint8_t x224 = UINT8_MAX;
	int32_t t53 = 0;

	t53 = (((x221&x222)<x223)%x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x226 = INT16_MAX;
	volatile int32_t t54 = 405;

	t54 = (((x225&x226)<x227)%x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x229 = INT16_MIN;
	volatile int8_t x230 = -3;
	int8_t x231 = INT8_MAX;
	uint8_t x232 = 60U;
	int32_t t55 = 1;

	t55 = (((x229&x230)<x231)%x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x233 = UINT16_MAX;
	uint32_t x234 = 42322U;
	volatile int64_t x235 = -1LL;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t56 = 93815117315LLU;

	t56 = (((x233&x234)<x235)%x236);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = INT8_MIN;
	volatile int64_t x238 = INT64_MIN;
	uint16_t x239 = 5923U;
	static uint16_t x240 = 30421U;
	static volatile int32_t t57 = 355;

	t57 = (((x237&x238)<x239)%x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x241 = 1LLU;
	static volatile int8_t x243 = INT8_MIN;
	volatile int16_t x244 = -1;

	t58 = (((x241&x242)<x243)%x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = -125073018;
	static int16_t x246 = 8711;
	int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MAX;
	volatile int64_t t59 = 7294298266109343LL;

	t59 = (((x245&x246)<x247)%x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x250 = UINT32_MAX;
	int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t60 = 45779422;

	t60 = (((x249&x250)<x251)%x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x253 = 358;
	int16_t x254 = -1;
	int8_t x255 = -31;
	uint32_t x256 = 4U;

	t61 = (((x253&x254)<x255)%x256);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x258 = 1020537004U;
	int16_t x259 = INT16_MAX;
	int64_t t62 = -60733090LL;

	t62 = (((x257&x258)<x259)%x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x262 = UINT32_MAX;
	volatile int8_t x263 = 0;

	t63 = (((x261&x262)<x263)%x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x265 = 483549LLU;
	static int32_t x266 = INT32_MAX;
	int64_t t64 = 30650405643LL;

	t64 = (((x265&x266)<x267)%x268);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	uint32_t x270 = 427U;
	uint8_t x271 = 7U;
	uint32_t t65 = 1918U;

	t65 = (((x269&x270)<x271)%x272);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MAX;
	static volatile uint8_t x274 = UINT8_MAX;
	static uint16_t x275 = UINT16_MAX;
	int64_t x276 = INT64_MIN;
	int64_t t66 = -25996LL;

	t66 = (((x273&x274)<x275)%x276);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x279 = INT16_MAX;

	t67 = (((x277&x278)<x279)%x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x283 = -1LL;
	static volatile int16_t x284 = 10;
	int32_t t68 = -67;

	t68 = (((x281&x282)<x283)%x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = -1;
	int32_t x287 = -357;
	volatile int64_t x288 = INT64_MIN;
	int64_t t69 = -239LL;

	t69 = (((x285&x286)<x287)%x288);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = 10;
	static uint32_t x291 = UINT32_MAX;
	int64_t x292 = -3LL;
	int64_t t70 = 168656873085093LL;

	t70 = (((x289&x290)<x291)%x292);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = 2084878035115828857LLU;
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = INT16_MIN;
	volatile uint32_t x296 = 737451305U;
	volatile uint32_t t71 = 4663U;

	t71 = (((x293&x294)<x295)%x296);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x297 = 1U;
	int32_t x299 = -486;
	static volatile int8_t x300 = INT8_MAX;
	int32_t t72 = 10165400;

	t72 = (((x297&x298)<x299)%x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = -1LL;
	volatile uint16_t x303 = 19363U;
	int8_t x304 = -2;

	t73 = (((x301&x302)<x303)%x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x306 = INT16_MAX;
	volatile uint32_t x307 = UINT32_MAX;
	int16_t x308 = 716;
	volatile int32_t t74 = -5138;

	t74 = (((x305&x306)<x307)%x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x310 = INT16_MIN;
	static int32_t x311 = -1;
	int8_t x312 = 13;
	int32_t t75 = -53945;

	t75 = (((x309&x310)<x311)%x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x313 = 482467;
	uint8_t x315 = UINT8_MAX;
	int32_t t76 = 23460400;

	t76 = (((x313&x314)<x315)%x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = UINT8_MAX;
	static int8_t x318 = 4;
	int32_t x319 = INT32_MIN;
	volatile int64_t x320 = INT64_MIN;
	int64_t t77 = 644LL;

	t77 = (((x317&x318)<x319)%x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x321 = UINT16_MAX;
	static volatile uint32_t x322 = 454U;
	volatile int32_t t78 = 3392928;

	t78 = (((x321&x322)<x323)%x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x326 = 2663U;
	static volatile int64_t x327 = INT64_MIN;
	int8_t x328 = INT8_MAX;
	volatile int32_t t79 = -29011554;

	t79 = (((x325&x326)<x327)%x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x330 = INT32_MIN;
	int32_t x331 = 121560;
	uint64_t t80 = 4091432306LLU;

	t80 = (((x329&x330)<x331)%x332);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x335 = INT32_MAX;

	t81 = (((x333&x334)<x335)%x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x337 = 980985LLU;
	uint32_t x338 = UINT32_MAX;
	volatile uint16_t x339 = UINT16_MAX;

	t82 = (((x337&x338)<x339)%x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x342 = 180661U;
	volatile int16_t x343 = 504;
	int16_t x344 = INT16_MAX;

	t83 = (((x341&x342)<x343)%x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x346 = INT64_MIN;
	static int64_t x348 = -1LL;

	t84 = (((x345&x346)<x347)%x348);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x349 = INT8_MIN;
	volatile uint16_t x350 = 2U;
	uint64_t x351 = 104737018791424LLU;
	static int64_t x352 = 734456LL;
	static int64_t t85 = 2484LL;

	t85 = (((x349&x350)<x351)%x352);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 3U;
	volatile int8_t x355 = -31;
	int64_t x356 = INT64_MIN;

	t86 = (((x353&x354)<x355)%x356);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {


	t87 = (((x357&x358)<x359)%x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = INT64_MAX;
	uint8_t x362 = 30U;
	static int8_t x363 = INT8_MIN;
	int16_t x364 = -1;
	volatile int32_t t88 = -19191459;

	t88 = (((x361&x362)<x363)%x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x367 = 147295652U;
	int32_t x368 = -1;
	volatile int32_t t89 = 795781;

	t89 = (((x365&x366)<x367)%x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = 20U;
	int16_t x371 = -4513;
	int64_t x372 = INT64_MIN;
	volatile int64_t t90 = -9LL;

	t90 = (((x369&x370)<x371)%x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x374 = INT64_MIN;
	volatile uint16_t x375 = 5U;
	uint8_t x376 = 56U;
	int32_t t91 = -582;

	t91 = (((x373&x374)<x375)%x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x377 = 27U;
	int8_t x378 = -1;
	static int16_t x379 = INT16_MIN;
	int32_t t92 = 0;

	t92 = (((x377&x378)<x379)%x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = INT8_MIN;
	static uint8_t x382 = UINT8_MAX;
	uint32_t x383 = 111U;

	t93 = (((x381&x382)<x383)%x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = INT32_MAX;
	static int64_t x386 = INT64_MIN;
	volatile uint32_t t94 = 2U;

	t94 = (((x385&x386)<x387)%x388);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MAX;
	uint32_t x395 = 78U;
	int64_t x396 = -29687414663418LL;

	t95 = (((x393&x394)<x395)%x396);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x399 = UINT16_MAX;
	int32_t x400 = INT32_MIN;
	static volatile int32_t t96 = 2;

	t96 = (((x397&x398)<x399)%x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	int32_t x404 = -1;
	int32_t t97 = -124339855;

	t97 = (((x401&x402)<x403)%x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x406 = -10;
	int32_t x407 = INT32_MIN;
	uint64_t x408 = 1277522LLU;
	uint64_t t98 = 15LLU;

	t98 = (((x405&x406)<x407)%x408);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x410 = 8U;
	int64_t x411 = 422LL;
	int16_t x412 = INT16_MIN;
	volatile int32_t t99 = -30297;

	t99 = (((x409&x410)<x411)%x412);

	if (t99 != 1) { NG(); } else { ; }
	
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

