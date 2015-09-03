#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x8 = INT64_MAX;
int32_t x13 = 120540;
static int8_t x15 = 6;
int32_t t3 = 367;
static int32_t x17 = -1;
int32_t x18 = -1;
volatile int32_t t4 = -875;
int32_t t5 = -100185;
int16_t x26 = INT16_MIN;
uint64_t x31 = 56427307680LLU;
static int64_t x32 = INT64_MIN;
static volatile int32_t x34 = 0;
uint32_t x43 = 113318U;
static int8_t x51 = -1;
static int8_t x52 = INT8_MAX;
static int16_t x56 = INT16_MIN;
int64_t t13 = 0LL;
volatile int32_t x60 = -12;
uint32_t x64 = 488U;
uint64_t x67 = 7709889694949079376LLU;
int32_t t18 = 67;
static uint32_t x81 = UINT32_MAX;
int64_t x82 = -79991112LL;
static int16_t x83 = INT16_MIN;
int64_t x91 = -1LL;
volatile int8_t x97 = INT8_MAX;
volatile uint8_t x99 = UINT8_MAX;
volatile uint32_t t25 = 52950234U;
volatile int32_t t26 = 28847;
uint16_t x112 = UINT16_MAX;
int64_t x116 = 14656882609LL;
int8_t x118 = 0;
volatile int64_t x121 = -1LL;
int8_t x126 = INT8_MAX;
volatile int16_t x127 = -1;
static uint32_t x128 = 107213961U;
int64_t x130 = 177804378LL;
volatile int32_t x135 = -1;
int64_t t34 = -5297617392868128LL;
volatile int32_t t38 = -1;
static int64_t x163 = -1LL;
int8_t x165 = -1;
int32_t x166 = 3;
int64_t x174 = INT64_MIN;
int32_t t43 = 6125390;
volatile uint16_t x182 = UINT16_MAX;
int64_t x183 = 7860972593193137LL;
int32_t t46 = -5980;
static uint16_t x191 = 30U;
int16_t x201 = INT16_MIN;
uint64_t x212 = 56562172LLU;
int64_t t52 = 101LL;
int8_t x220 = INT8_MAX;
volatile int32_t x226 = -1;
int32_t x227 = INT32_MIN;
uint64_t t57 = UINT64_MAX;
static int8_t x235 = INT8_MIN;
int32_t t60 = 125543956;
int16_t x247 = -1;
uint64_t x249 = UINT64_MAX;
uint64_t t62 = UINT64_MAX;
static int64_t x253 = INT64_MIN;
volatile int64_t t63 = 0LL;
static int8_t x258 = -1;
volatile int32_t x262 = -47;
uint32_t x263 = 12098358U;
static int64_t x264 = -1LL;
int32_t x268 = INT32_MAX;
int16_t x270 = INT16_MIN;
volatile int32_t t67 = 1;
uint16_t x274 = UINT16_MAX;
int16_t x285 = INT16_MIN;
uint32_t x286 = UINT32_MAX;
static int8_t x294 = INT8_MIN;
int32_t t73 = 0;
uint64_t x297 = UINT64_MAX;
int32_t x298 = INT32_MIN;
uint64_t t74 = UINT64_MAX;
uint32_t x308 = UINT32_MAX;
uint64_t t76 = 1013066256LLU;
int64_t x311 = INT64_MIN;
uint64_t x316 = 1205147599LLU;
static int16_t x317 = -1;
volatile uint64_t t81 = 1269689759699624399LLU;
int32_t x330 = INT32_MIN;
volatile int32_t t82 = 99932037;
int16_t x336 = INT16_MAX;
volatile int64_t t83 = 221LL;
volatile uint8_t x337 = 57U;
int32_t x345 = INT32_MIN;
int8_t x352 = INT8_MAX;
volatile int8_t x355 = 0;
volatile int32_t t89 = -71475;
int64_t x364 = INT64_MAX;
int8_t x378 = 1;
volatile int64_t x383 = -1LL;
uint16_t x385 = 268U;
static int8_t x387 = INT8_MIN;
int64_t x393 = INT64_MIN;
int64_t x394 = -1LL;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MIN;
	static volatile int16_t x3 = -1;
	volatile int16_t x4 = 0;
	static int32_t t0 = -296;

	t0 = (x1*((x2<=x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int16_t x6 = 2318;
	static volatile uint16_t x7 = 337U;
	static volatile int32_t t1 = INT32_MIN;

	t1 = (x5*((x6<=x7)<=x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 1;
	volatile int8_t x10 = INT8_MIN;
	int32_t x11 = INT32_MAX;
	uint8_t x12 = 62U;
	volatile int32_t t2 = -4844;

	t2 = (x9*((x10<=x11)<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = INT8_MAX;
	int32_t x16 = INT32_MIN;

	t3 = (x13*((x14<=x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MIN;

	t4 = (x17*((x18<=x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = -18;
	uint32_t x23 = 28584801U;
	int8_t x24 = -1;

	t5 = (x21*((x22<=x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -5672522;
	uint8_t x27 = UINT8_MAX;
	static volatile int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -90133;

	t6 = (x25*((x26<=x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint16_t x30 = 25796U;
	static int64_t t7 = 486612LL;

	t7 = (x29*((x30<=x31)<=x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 2U;
	volatile uint64_t x35 = 79726054803778LLU;
	volatile int32_t x36 = INT32_MIN;
	int32_t t8 = 13535;

	t8 = (x33*((x34<=x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	static uint16_t x38 = UINT16_MAX;
	int64_t x39 = 1255LL;
	int64_t x40 = INT64_MIN;
	static int32_t t9 = 464;

	t9 = (x37*((x38<=x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MAX;
	volatile uint64_t x44 = 1LLU;
	int32_t t10 = 0;

	t10 = (x41*((x42<=x43)<=x44));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	volatile int16_t x46 = 90;
	uint8_t x47 = 14U;
	uint8_t x48 = 41U;
	int64_t t11 = INT64_MIN;

	t11 = (x45*((x46<=x47)<=x48));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	int64_t x50 = INT64_MIN;
	volatile int64_t t12 = 44749589LL;

	t12 = (x49*((x50<=x51)<=x52));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x54 = 4343889LLU;
	int64_t x55 = INT64_MIN;

	t13 = (x53*((x54<=x55)<=x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -41;
	static volatile int16_t x58 = INT16_MAX;
	static uint32_t x59 = UINT32_MAX;
	static int32_t t14 = 1894560;

	t14 = (x57*((x58<=x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 32107934495544LL;
	uint32_t x62 = UINT32_MAX;
	volatile uint32_t x63 = UINT32_MAX;
	volatile int64_t t15 = -1540127743LL;

	t15 = (x61*((x62<=x63)<=x64));

	if (t15 != 32107934495544LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	volatile int32_t x66 = 106939418;
	static uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = 305;

	t16 = (x65*((x66<=x67)<=x68));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -2;
	volatile int64_t x70 = INT64_MIN;
	static uint8_t x71 = UINT8_MAX;
	static int8_t x72 = INT8_MAX;
	int32_t t17 = 70726;

	t17 = (x69*((x70<=x71)<=x72));

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	static volatile int8_t x74 = INT8_MIN;
	uint16_t x75 = 23349U;
	int32_t x76 = INT32_MIN;

	t18 = (x73*((x74<=x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	static int32_t x79 = INT32_MAX;
	uint32_t x80 = 10U;
	static volatile int32_t t19 = 1276973;

	t19 = (x77*((x78<=x79)<=x80));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x84 = -80913320;
	volatile uint32_t t20 = 1278U;

	t20 = (x81*((x82<=x83)<=x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MIN;
	int64_t x86 = 55262LL;
	int64_t x87 = -25019109083LL;
	uint8_t x88 = 7U;
	static int32_t t21 = INT32_MIN;

	t21 = (x85*((x86<=x87)<=x88));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MAX;
	static int8_t x90 = INT8_MIN;
	static volatile int32_t x92 = -108327;
	static int32_t t22 = -38;

	t22 = (x89*((x90<=x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 0U;
	uint32_t x94 = 11861578U;
	static int16_t x95 = INT16_MIN;
	int16_t x96 = -1;
	static int32_t t23 = 9344;

	t23 = (x93*((x94<=x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 10U;
	int64_t x100 = INT64_MAX;
	int32_t t24 = -7555825;

	t24 = (x97*((x98<=x99)<=x100));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 11U;
	uint32_t x102 = 197127759U;
	uint64_t x103 = 7863LLU;
	volatile int64_t x104 = -186625732712225LL;

	t25 = (x101*((x102<=x103)<=x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = -1;
	volatile int32_t x107 = -1;
	int16_t x108 = INT16_MIN;

	t26 = (x105*((x106<=x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	int64_t x110 = INT64_MIN;
	int32_t x111 = INT32_MIN;
	int32_t t27 = -8279521;

	t27 = (x109*((x110<=x111)<=x112));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint16_t x114 = UINT16_MAX;
	uint32_t x115 = UINT32_MAX;
	volatile int32_t t28 = -311;

	t28 = (x113*((x114<=x115)<=x116));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = -1;
	int16_t x119 = INT16_MIN;
	uint64_t x120 = 76LLU;
	volatile int32_t t29 = 818890;

	t29 = (x117*((x118<=x119)<=x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x122 = -1LL;
	int8_t x123 = -1;
	volatile int16_t x124 = -1;
	int64_t t30 = 43492205LL;

	t30 = (x121*((x122<=x123)<=x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 1U;
	static volatile int32_t t31 = 3426576;

	t31 = (x125*((x126<=x127)<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 0LL;
	int8_t x131 = 1;
	int16_t x132 = INT16_MAX;
	volatile int64_t t32 = -2906121173LL;

	t32 = (x129*((x130<=x131)<=x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1573;
	volatile int16_t x134 = -1;
	int8_t x136 = -1;
	volatile int32_t t33 = 247;

	t33 = (x133*((x134<=x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = 1558468LL;
	int32_t x138 = -1;
	int16_t x139 = -6;
	volatile uint32_t x140 = UINT32_MAX;

	t34 = (x137*((x138<=x139)<=x140));

	if (t34 != 1558468LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MIN;
	volatile uint32_t x144 = 1352256U;
	int32_t t35 = -190785;

	t35 = (x141*((x142<=x143)<=x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -826;
	int16_t x146 = 2;
	static int16_t x147 = -242;
	static volatile int8_t x148 = INT8_MIN;
	volatile int32_t t36 = 80;

	t36 = (x145*((x146<=x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = -33;
	int64_t x151 = -1LL;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -1218672;

	t37 = (x149*((x150<=x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 0;
	static volatile int16_t x154 = -1;
	volatile uint16_t x155 = 0U;
	static uint8_t x156 = UINT8_MAX;

	t38 = (x153*((x154<=x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -59172185;
	int32_t x158 = INT32_MIN;
	int64_t x159 = -1LL;
	int32_t x160 = INT32_MIN;
	int32_t t39 = 9691818;

	t39 = (x157*((x158<=x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	uint32_t x162 = UINT32_MAX;
	volatile int64_t x164 = INT64_MAX;
	int32_t t40 = INT32_MIN;

	t40 = (x161*((x162<=x163)<=x164));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x167 = UINT64_MAX;
	uint32_t x168 = UINT32_MAX;
	int32_t t41 = 354222482;

	t41 = (x165*((x166<=x167)<=x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = -253;
	static int16_t x170 = -1;
	uint64_t x171 = 361374LLU;
	static int32_t x172 = INT32_MIN;
	volatile int32_t t42 = -59250;

	t42 = (x169*((x170<=x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 54;
	uint16_t x175 = 14678U;
	int32_t x176 = -24563;

	t43 = (x173*((x174<=x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 12772721249058LL;
	static uint64_t x178 = UINT64_MAX;
	int16_t x179 = -1;
	uint32_t x180 = 782048U;
	int64_t t44 = -28804LL;

	t44 = (x177*((x178<=x179)<=x180));

	if (t44 != 12772721249058LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 11U;
	volatile int16_t x184 = INT16_MIN;
	int32_t t45 = 7799;

	t45 = (x181*((x182<=x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = 1926;
	static int8_t x186 = -10;
	static volatile int16_t x187 = INT16_MIN;
	int8_t x188 = INT8_MIN;

	t46 = (x185*((x186<=x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MIN;
	static int64_t x190 = INT64_MIN;
	int8_t x192 = INT8_MAX;
	int32_t t47 = -1724961;

	t47 = (x189*((x190<=x191)<=x192));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MIN;
	int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MIN;
	static volatile int64_t t48 = -5719568557419LL;

	t48 = (x193*((x194<=x195)<=x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = 0;
	static uint16_t x198 = UINT16_MAX;
	int16_t x199 = -1;
	int8_t x200 = 1;
	int32_t t49 = 9913;

	t49 = (x197*((x198<=x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x202 = INT8_MIN;
	int8_t x203 = -1;
	static int64_t x204 = INT64_MIN;
	static volatile int32_t t50 = 193;

	t50 = (x201*((x202<=x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	uint16_t x206 = 11194U;
	uint64_t x207 = 831810928LLU;
	int64_t x208 = INT64_MIN;
	int32_t t51 = 24;

	t51 = (x205*((x206<=x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	int16_t x210 = INT16_MAX;
	uint32_t x211 = 23U;

	t52 = (x209*((x210<=x211)<=x212));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	volatile int64_t x214 = INT64_MAX;
	static int32_t x215 = 9495428;
	int16_t x216 = 807;
	int32_t t53 = INT32_MAX;

	t53 = (x213*((x214<=x215)<=x216));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = UINT16_MAX;
	int64_t x218 = INT64_MAX;
	int8_t x219 = 36;
	volatile int32_t t54 = 17392133;

	t54 = (x217*((x218<=x219)<=x220));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	uint16_t x222 = 1045U;
	int32_t x223 = INT32_MIN;
	volatile int32_t x224 = INT32_MIN;
	int32_t t55 = 8;

	t55 = (x221*((x222<=x223)<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	int64_t x228 = 411852349LL;
	uint32_t t56 = UINT32_MAX;

	t56 = (x225*((x226<=x227)<=x228));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = UINT64_MAX;
	static int8_t x230 = -1;
	int32_t x231 = INT32_MIN;
	uint8_t x232 = 6U;

	t57 = (x229*((x230<=x231)<=x232));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 3U;
	uint16_t x234 = 5U;
	uint64_t x236 = 94345534519231454LLU;
	volatile uint32_t t58 = 724U;

	t58 = (x233*((x234<=x235)<=x236));

	if (t58 != 3U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	uint8_t x238 = 43U;
	volatile int8_t x239 = 6;
	int64_t x240 = INT64_MIN;
	int32_t t59 = 1790855;

	t59 = (x237*((x238<=x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int64_t x242 = -144509924498942LL;
	int16_t x243 = INT16_MIN;
	volatile int64_t x244 = -1LL;

	t60 = (x241*((x242<=x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 6989;
	int16_t x246 = INT16_MAX;
	uint8_t x248 = 0U;
	int32_t t61 = -2005;

	t61 = (x245*((x246<=x247)<=x248));

	if (t61 != 6989) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = UINT32_MAX;
	uint8_t x251 = UINT8_MAX;
	volatile uint8_t x252 = UINT8_MAX;

	t62 = (x249*((x250<=x251)<=x252));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = -1;
	int64_t x255 = -1LL;
	int32_t x256 = -19;

	t63 = (x253*((x254<=x255)<=x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	static uint8_t x259 = 14U;
	int8_t x260 = -1;
	volatile int32_t t64 = 396805;

	t64 = (x257*((x258<=x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int32_t t65 = 530998249;

	t65 = (x261*((x262<=x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint64_t x266 = UINT64_MAX;
	uint8_t x267 = 15U;
	int32_t t66 = -1;

	t66 = (x265*((x266<=x267)<=x268));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 10431U;
	uint32_t x271 = UINT32_MAX;
	int64_t x272 = -43052247LL;

	t67 = (x269*((x270<=x271)<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = INT64_MAX;
	int16_t x275 = 2216;
	int32_t x276 = INT32_MIN;
	int64_t t68 = -1910586344LL;

	t68 = (x273*((x274<=x275)<=x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int64_t x278 = 45134544LL;
	int8_t x279 = INT8_MAX;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t69 = 8;

	t69 = (x277*((x278<=x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = 0U;
	static uint8_t x282 = 1U;
	static int16_t x283 = INT16_MIN;
	volatile int32_t x284 = INT32_MAX;
	volatile int32_t t70 = 303;

	t70 = (x281*((x282<=x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x287 = 56;
	int64_t x288 = -1LL;
	int32_t t71 = -1;

	t71 = (x285*((x286<=x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	int16_t x290 = INT16_MIN;
	static uint32_t x291 = 3896U;
	volatile uint16_t x292 = 1U;
	static int32_t t72 = -1;

	t72 = (x289*((x290<=x291)<=x292));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	int16_t x295 = -1;
	int8_t x296 = INT8_MIN;

	t73 = (x293*((x294<=x295)<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x299 = UINT64_MAX;
	static volatile int8_t x300 = INT8_MAX;

	t74 = (x297*((x298<=x299)<=x300));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	static uint64_t x302 = UINT64_MAX;
	static uint32_t x303 = 2273U;
	volatile int32_t x304 = 717018;
	int64_t t75 = INT64_MIN;

	t75 = (x301*((x302<=x303)<=x304));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 88947628405201LLU;
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MAX;

	t76 = (x305*((x306<=x307)<=x308));

	if (t76 != 88947628405201LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 3U;
	int16_t x310 = INT16_MAX;
	uint64_t x312 = UINT64_MAX;
	static int32_t t77 = -6028;

	t77 = (x309*((x310<=x311)<=x312));

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x313 = UINT8_MAX;
	volatile int32_t x314 = 156;
	int32_t x315 = -1;
	int32_t t78 = 20117;

	t78 = (x313*((x314<=x315)<=x316));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x318 = -1;
	uint64_t x319 = 924727LLU;
	uint8_t x320 = 5U;
	volatile int32_t t79 = 184;

	t79 = (x317*((x318<=x319)<=x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	static int64_t x322 = -1LL;
	int16_t x323 = -1;
	static int64_t x324 = INT64_MIN;
	volatile int32_t t80 = 233908;

	t80 = (x321*((x322<=x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = 0LLU;
	int64_t x326 = INT64_MAX;
	int8_t x327 = 2;
	static volatile int16_t x328 = INT16_MAX;

	t81 = (x325*((x326<=x327)<=x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int8_t x331 = INT8_MAX;
	int32_t x332 = -1;

	t82 = (x329*((x330<=x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -2356LL;
	uint32_t x334 = 18U;
	int8_t x335 = -1;

	t83 = (x333*((x334<=x335)<=x336));

	if (t83 != -2356LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x338 = -56;
	uint32_t x339 = 63979612U;
	static volatile int8_t x340 = INT8_MAX;
	int32_t t84 = -9190234;

	t84 = (x337*((x338<=x339)<=x340));

	if (t84 != 57) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	int32_t x342 = INT32_MAX;
	static int16_t x343 = INT16_MIN;
	int8_t x344 = 1;
	static int32_t t85 = INT32_MAX;

	t85 = (x341*((x342<=x343)<=x344));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x346 = -341396899167662LL;
	static volatile uint32_t x347 = 12U;
	uint64_t x348 = 3603607618020LLU;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x345*((x346<=x347)<=x348));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = 794267009U;
	int64_t x350 = INT64_MAX;
	uint64_t x351 = UINT64_MAX;
	static uint32_t t87 = 4310U;

	t87 = (x349*((x350<=x351)<=x352));

	if (t87 != 794267009U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	uint32_t x354 = UINT32_MAX;
	int32_t x356 = -31860165;
	static int32_t t88 = 1;

	t88 = (x353*((x354<=x355)<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x357 = UINT16_MAX;
	uint64_t x358 = 10477234577980LLU;
	int16_t x359 = 1;
	uint64_t x360 = 132065404LLU;

	t89 = (x357*((x358<=x359)<=x360));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	int16_t x362 = -80;
	static int64_t x363 = 31976259655017935LL;
	int32_t t90 = -1;

	t90 = (x361*((x362<=x363)<=x364));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -19;
	int64_t x366 = INT64_MAX;
	int32_t x367 = -1;
	static int8_t x368 = INT8_MAX;
	static volatile int32_t t91 = 27;

	t91 = (x365*((x366<=x367)<=x368));

	if (t91 != -19) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	int8_t x370 = INT8_MIN;
	uint32_t x371 = UINT32_MAX;
	static int64_t x372 = INT64_MAX;
	volatile int64_t t92 = INT64_MAX;

	t92 = (x369*((x370<=x371)<=x372));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -18;
	static int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MAX;
	static int32_t x376 = 162551576;
	volatile int32_t t93 = 7183110;

	t93 = (x373*((x374<=x375)<=x376));

	if (t93 != -18) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 0;
	uint8_t x379 = UINT8_MAX;
	uint64_t x380 = 7793990LLU;
	int32_t t94 = -236539489;

	t94 = (x377*((x378<=x379)<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 0U;
	uint64_t x382 = UINT64_MAX;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = -28413465;

	t95 = (x381*((x382<=x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x386 = INT16_MIN;
	uint8_t x388 = UINT8_MAX;
	static int32_t t96 = 152633;

	t96 = (x385*((x386<=x387)<=x388));

	if (t96 != 268) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 20465U;
	int64_t x390 = INT64_MIN;
	static uint32_t x391 = 4U;
	int8_t x392 = INT8_MIN;
	int32_t t97 = -67016592;

	t97 = (x389*((x390<=x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x395 = -3;
	uint16_t x396 = 8U;
	int64_t t98 = INT64_MIN;

	t98 = (x393*((x394<=x395)<=x396));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = -1;
	uint16_t x398 = 1U;
	volatile uint8_t x399 = 23U;
	int64_t x400 = INT64_MAX;
	int32_t t99 = -48610761;

	t99 = (x397*((x398<=x399)<=x400));

	if (t99 != -1) { NG(); } else { ; }
	
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

