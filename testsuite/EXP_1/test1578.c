#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = -6027953LL;
int32_t x11 = INT32_MIN;
volatile int64_t t2 = 33927556448LL;
volatile int64_t x15 = -1LL;
volatile int64_t t3 = -799368186LL;
static int32_t x31 = -4418569;
volatile int8_t x36 = 57;
volatile int16_t x41 = 29;
int16_t x59 = -389;
volatile int16_t x76 = INT16_MIN;
static volatile int64_t t15 = -1358509625347LL;
uint64_t x77 = UINT64_MAX;
volatile uint64_t t16 = 20161114936312475LLU;
int64_t x93 = INT64_MIN;
static int32_t x99 = INT32_MIN;
volatile int32_t t22 = 0;
int32_t t23 = -38614057;
volatile int32_t t24 = -1;
uint8_t x116 = 48U;
volatile int32_t x127 = 8;
volatile uint32_t x129 = 2341U;
int8_t x132 = INT8_MIN;
int8_t x134 = -1;
uint8_t x142 = UINT8_MAX;
volatile uint8_t x143 = UINT8_MAX;
volatile int32_t t32 = 210;
static uint64_t t33 = 3073850279LLU;
volatile uint8_t x154 = 38U;
int32_t x166 = INT32_MAX;
int32_t x170 = -1;
volatile int32_t t39 = -7702;
uint8_t x177 = 11U;
static int16_t x180 = 294;
int16_t x181 = INT16_MAX;
static int16_t x195 = INT16_MIN;
int16_t x203 = -4;
volatile int16_t x206 = INT16_MAX;
volatile int8_t x207 = INT8_MIN;
volatile int16_t x211 = INT16_MAX;
static volatile int32_t t48 = -108;
static int16_t x220 = -2490;
volatile uint16_t x226 = 132U;
static int32_t t52 = -2344;
static uint64_t x231 = 394897893250LLU;
int32_t x232 = INT32_MIN;
static uint16_t x239 = 3U;
static uint8_t x241 = 5U;
uint64_t x242 = UINT64_MAX;
int32_t x245 = 0;
static uint64_t x247 = UINT64_MAX;
volatile uint64_t x263 = UINT64_MAX;
static uint64_t t61 = 5203LLU;
volatile int64_t t63 = -217579782LL;
uint64_t x285 = 14383LLU;
uint32_t x288 = 413U;
static volatile uint32_t t65 = 12U;
int64_t x290 = INT64_MAX;
int32_t t67 = 3;
int8_t x303 = -1;
int16_t x305 = 49;
int8_t x309 = -1;
static volatile int32_t t72 = -4;
volatile int8_t x330 = INT8_MAX;
int64_t x336 = INT64_MIN;
volatile uint32_t x338 = 10446U;
uint64_t x342 = 30783797LLU;
int8_t x351 = INT8_MIN;
int8_t x355 = 1;
static uint64_t x356 = 18188LLU;
uint8_t x360 = 120U;
volatile int16_t x361 = -3;
int32_t x364 = -1;
uint16_t x369 = 69U;
int8_t x374 = INT8_MAX;
int16_t x377 = -9652;
uint16_t x378 = 23U;
volatile int32_t x384 = INT32_MIN;
volatile uint64_t t89 = 122862LLU;
uint64_t x391 = 10364135LLU;
int64_t t91 = 10LL;
volatile uint64_t t92 = 82LLU;
int64_t x408 = INT64_MIN;
int16_t x411 = -7306;
int8_t x415 = 1;
static volatile int64_t x416 = INT64_MIN;
volatile int32_t x432 = INT32_MIN;


void f0(void) {
	uint8_t x1 = 111U;
	int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = 69U;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 140221;

	t0 = (((x1<=x2)%x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int32_t x6 = INT32_MAX;
	int16_t x7 = -1141;
	int64_t t1 = 7266892275LL;

	t1 = (((x5<=x6)%x7)%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MAX;
	int64_t x12 = INT64_MAX;

	t2 = (((x9<=x10)%x11)%x12);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint16_t x14 = 2529U;
	uint8_t x16 = 18U;

	t3 = (((x13<=x14)%x15)%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 654164U;
	int64_t x18 = -1LL;
	int32_t x19 = INT32_MIN;
	static volatile int16_t x20 = INT16_MIN;
	int32_t t4 = -423647;

	t4 = (((x17<=x18)%x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -752895578544LL;
	int64_t x22 = INT64_MAX;
	int32_t x23 = 1478;
	uint8_t x24 = 4U;
	volatile int32_t t5 = -440906207;

	t5 = (((x21<=x22)%x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 140082076U;
	int16_t x30 = 30;
	static int32_t x32 = INT32_MIN;
	int32_t t6 = 619;

	t6 = (((x29<=x30)%x31)%x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = -1;
	uint32_t x35 = UINT32_MAX;
	uint32_t t7 = 1174U;

	t7 = (((x33<=x34)%x35)%x36);

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MAX;
	int16_t x38 = -1;
	volatile uint32_t x39 = 1332675U;
	uint16_t x40 = 17U;
	volatile uint32_t t8 = 345782698U;

	t8 = (((x37<=x38)%x39)%x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = -1;
	volatile int32_t x43 = -1;
	static int64_t x44 = INT64_MAX;
	volatile int64_t t9 = -2200487647064558306LL;

	t9 = (((x41<=x42)%x43)%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 13175U;
	int8_t x46 = INT8_MIN;
	static uint32_t x47 = UINT32_MAX;
	int64_t x48 = -1LL;
	static int64_t t10 = 6LL;

	t10 = (((x45<=x46)%x47)%x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 57U;
	static int64_t x54 = 20LL;
	int32_t x55 = INT32_MIN;
	int64_t x56 = 921615LL;
	int64_t t11 = -2LL;

	t11 = (((x53<=x54)%x55)%x56);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x57 = 7565922599LLU;
	uint16_t x58 = 1612U;
	uint8_t x60 = 2U;
	static volatile int32_t t12 = -47228287;

	t12 = (((x57<=x58)%x59)%x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	int16_t x66 = -306;
	int64_t x67 = INT64_MIN;
	int16_t x68 = INT16_MAX;
	int64_t t13 = -320885439LL;

	t13 = (((x65<=x66)%x67)%x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = UINT64_MAX;
	int64_t x70 = INT64_MAX;
	static uint8_t x71 = UINT8_MAX;
	int64_t x72 = -1LL;
	volatile int64_t t14 = 115249370190428LL;

	t14 = (((x69<=x70)%x71)%x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x73 = -1;
	static volatile uint64_t x74 = 22362831297743LLU;
	int64_t x75 = -5598042178867LL;

	t15 = (((x73<=x74)%x75)%x76);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x78 = UINT32_MAX;
	static volatile uint64_t x79 = 513568611149LLU;
	int8_t x80 = INT8_MIN;

	t16 = (((x77<=x78)%x79)%x80);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x81 = INT64_MIN;
	static int64_t x82 = -6778630LL;
	int32_t x83 = INT32_MIN;
	int16_t x84 = INT16_MIN;
	volatile int32_t t17 = 4;

	t17 = (((x81<=x82)%x83)%x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 640U;
	int32_t x86 = INT32_MIN;
	uint32_t x87 = 78U;
	int8_t x88 = INT8_MAX;
	volatile uint32_t t18 = 3897U;

	t18 = (((x85<=x86)%x87)%x88);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = -1LL;
	static volatile int32_t x90 = -1;
	int64_t x91 = INT64_MIN;
	int32_t x92 = -1;
	volatile int64_t t19 = 3410LL;

	t19 = (((x89<=x90)%x91)%x92);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x94 = -1;
	static volatile int8_t x95 = -19;
	volatile uint64_t x96 = 4794940957LLU;
	volatile uint64_t t20 = 7451117339267LLU;

	t20 = (((x93<=x94)%x95)%x96);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = -1;
	uint8_t x98 = UINT8_MAX;
	uint32_t x100 = 193U;
	static volatile uint32_t t21 = 98400U;

	t21 = (((x97<=x98)%x99)%x100);

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = INT8_MAX;
	int8_t x102 = -1;
	int32_t x103 = INT32_MAX;
	uint16_t x104 = 3U;

	t22 = (((x101<=x102)%x103)%x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = -3174LL;
	int16_t x106 = 0;
	uint16_t x107 = 2399U;
	int8_t x108 = -1;

	t23 = (((x105<=x106)%x107)%x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	volatile uint8_t x111 = 9U;
	int8_t x112 = INT8_MIN;

	t24 = (((x109<=x110)%x111)%x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MAX;
	uint8_t x114 = UINT8_MAX;
	uint64_t x115 = 236LLU;
	uint64_t t25 = 8637051173205042869LLU;

	t25 = (((x113<=x114)%x115)%x116);

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = 2010575199278701LL;
	int64_t x118 = INT64_MAX;
	int16_t x119 = INT16_MIN;
	static int16_t x120 = INT16_MAX;
	int32_t t26 = -2;

	t26 = (((x117<=x118)%x119)%x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = UINT8_MAX;
	uint32_t x126 = UINT32_MAX;
	int16_t x128 = -1;
	volatile int32_t t27 = 9349;

	t27 = (((x125<=x126)%x127)%x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x130 = -1LL;
	uint16_t x131 = 2U;
	int32_t t28 = -6811;

	t28 = (((x129<=x130)%x131)%x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x133 = INT8_MAX;
	int32_t x135 = -84;
	static int32_t x136 = 113176148;
	volatile int32_t t29 = 768;

	t29 = (((x133<=x134)%x135)%x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = 496094753617653022LL;
	static int16_t x138 = -4842;
	static uint8_t x139 = 1U;
	int64_t x140 = INT64_MAX;
	static volatile int64_t t30 = 3045192492062LL;

	t30 = (((x137<=x138)%x139)%x140);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = 0;
	static int64_t x144 = -77562072LL;
	volatile int64_t t31 = 2882295222LL;

	t31 = (((x141<=x142)%x143)%x144);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x145 = 25026339LLU;
	int32_t x146 = -2479707;
	int32_t x147 = -1;
	volatile uint16_t x148 = 13U;

	t32 = (((x145<=x146)%x147)%x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x149 = 1532U;
	int8_t x150 = -9;
	static int8_t x151 = INT8_MIN;
	uint64_t x152 = 110461095583733LLU;

	t33 = (((x149<=x150)%x151)%x152);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x153 = 10U;
	uint32_t x155 = 1U;
	int32_t x156 = INT32_MAX;
	volatile uint32_t t34 = 18451U;

	t34 = (((x153<=x154)%x155)%x156);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = INT64_MAX;
	static volatile int32_t x158 = 0;
	int64_t x159 = INT64_MAX;
	uint8_t x160 = 54U;
	volatile int64_t t35 = -36595774LL;

	t35 = (((x157<=x158)%x159)%x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x161 = -1;
	static int8_t x162 = INT8_MAX;
	int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MIN;
	int32_t t36 = -5;

	t36 = (((x161<=x162)%x163)%x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x165 = 299649159291611LLU;
	int32_t x167 = INT32_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t37 = -390;

	t37 = (((x165<=x166)%x167)%x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 20U;
	int64_t x171 = 4060565LL;
	volatile uint16_t x172 = 5441U;
	int64_t t38 = -28LL;

	t38 = (((x169<=x170)%x171)%x172);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x173 = INT32_MAX;
	uint16_t x174 = UINT16_MAX;
	volatile int8_t x175 = INT8_MIN;
	static int16_t x176 = INT16_MIN;

	t39 = (((x173<=x174)%x175)%x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x178 = INT32_MIN;
	int16_t x179 = -1;
	static volatile int32_t t40 = -14101;

	t40 = (((x177<=x178)%x179)%x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x182 = -3;
	static uint16_t x183 = 28459U;
	static uint8_t x184 = 45U;
	static int32_t t41 = -905218;

	t41 = (((x181<=x182)%x183)%x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = 231;
	int32_t x186 = INT32_MAX;
	int8_t x187 = INT8_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t42 = -35060338;

	t42 = (((x185<=x186)%x187)%x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x189 = INT16_MIN;
	int16_t x190 = INT16_MIN;
	static volatile int16_t x191 = INT16_MIN;
	int64_t x192 = -1LL;
	int64_t t43 = -1628384LL;

	t43 = (((x189<=x190)%x191)%x192);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x193 = 0;
	int64_t x194 = INT64_MIN;
	int32_t x196 = 741;
	int32_t t44 = -12064;

	t44 = (((x193<=x194)%x195)%x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MIN;
	int8_t x198 = -2;
	static volatile int8_t x199 = 52;
	static uint32_t x200 = 596U;
	volatile uint32_t t45 = 35U;

	t45 = (((x197<=x198)%x199)%x200);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x201 = 175U;
	uint8_t x202 = 102U;
	int16_t x204 = -1;
	int32_t t46 = 361;

	t46 = (((x201<=x202)%x203)%x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = 18U;
	volatile uint8_t x208 = UINT8_MAX;
	int32_t t47 = -276707;

	t47 = (((x205<=x206)%x207)%x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = 1729U;
	static uint64_t x210 = 1541LLU;
	volatile int16_t x212 = INT16_MIN;

	t48 = (((x209<=x210)%x211)%x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MIN;
	int8_t x214 = -8;
	uint32_t x215 = 1467U;
	int8_t x216 = INT8_MIN;
	uint32_t t49 = 3U;

	t49 = (((x213<=x214)%x215)%x216);

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = UINT16_MAX;
	int64_t x218 = 390114LL;
	uint8_t x219 = UINT8_MAX;
	volatile int32_t t50 = -8;

	t50 = (((x217<=x218)%x219)%x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = -22;
	uint16_t x223 = 1721U;
	int16_t x224 = -12638;
	volatile int32_t t51 = 198708613;

	t51 = (((x221<=x222)%x223)%x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x225 = -1;
	int8_t x227 = -1;
	uint8_t x228 = 7U;

	t52 = (((x225<=x226)%x227)%x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = 5240254044LL;
	int16_t x230 = -4546;
	uint64_t t53 = 925LLU;

	t53 = (((x229<=x230)%x231)%x232);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x233 = 17U;
	int32_t x234 = INT32_MAX;
	int8_t x235 = INT8_MIN;
	int16_t x236 = 9;
	int32_t t54 = 1;

	t54 = (((x233<=x234)%x235)%x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = -1;
	uint64_t x238 = 3LLU;
	uint8_t x240 = UINT8_MAX;
	static volatile int32_t t55 = -15;

	t55 = (((x237<=x238)%x239)%x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x243 = -1;
	int16_t x244 = -1;
	volatile int32_t t56 = -52;

	t56 = (((x241<=x242)%x243)%x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x246 = UINT8_MAX;
	int32_t x248 = -14948;
	volatile uint64_t t57 = 2015LLU;

	t57 = (((x245<=x246)%x247)%x248);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x249 = 1U;
	int16_t x250 = -3;
	uint8_t x251 = 101U;
	int8_t x252 = INT8_MIN;
	volatile int32_t t58 = 3071563;

	t58 = (((x249<=x250)%x251)%x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = INT16_MAX;
	uint16_t x254 = UINT16_MAX;
	int64_t x255 = INT64_MAX;
	int32_t x256 = INT32_MIN;
	static int64_t t59 = -142LL;

	t59 = (((x253<=x254)%x255)%x256);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = 65597234;
	int64_t x258 = 20688869292240LL;
	uint8_t x259 = 12U;
	int16_t x260 = INT16_MIN;
	volatile int32_t t60 = 59636;

	t60 = (((x257<=x258)%x259)%x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x261 = 2017U;
	int64_t x262 = INT64_MAX;
	int64_t x264 = INT64_MAX;

	t61 = (((x261<=x262)%x263)%x264);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x265 = INT32_MIN;
	int32_t x266 = -1039205;
	static uint16_t x267 = 795U;
	int16_t x268 = INT16_MIN;
	volatile int32_t t62 = 455672;

	t62 = (((x265<=x266)%x267)%x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x269 = INT32_MIN;
	int32_t x270 = INT32_MIN;
	volatile int64_t x271 = 984LL;
	int32_t x272 = INT32_MAX;

	t63 = (((x269<=x270)%x271)%x272);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x273 = 50U;
	int8_t x274 = -1;
	volatile int16_t x275 = INT16_MIN;
	static int32_t x276 = INT32_MAX;
	int32_t t64 = 58585;

	t64 = (((x273<=x274)%x275)%x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x286 = 2;
	uint32_t x287 = 436U;

	t65 = (((x285<=x286)%x287)%x288);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x289 = INT8_MIN;
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MAX;
	int32_t t66 = -233539;

	t66 = (((x289<=x290)%x291)%x292);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x293 = INT8_MIN;
	uint16_t x294 = UINT16_MAX;
	static volatile int32_t x295 = -14028;
	static int16_t x296 = INT16_MIN;

	t67 = (((x293<=x294)%x295)%x296);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = 4905;
	int8_t x302 = -1;
	int32_t x304 = -6;
	int32_t t68 = -1119;

	t68 = (((x301<=x302)%x303)%x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x306 = INT8_MIN;
	int16_t x307 = INT16_MIN;
	static uint64_t x308 = UINT64_MAX;
	volatile uint64_t t69 = 1317487LLU;

	t69 = (((x305<=x306)%x307)%x308);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x310 = INT64_MAX;
	int32_t x311 = INT32_MAX;
	int32_t x312 = INT32_MAX;
	int32_t t70 = -32;

	t70 = (((x309<=x310)%x311)%x312);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x313 = INT16_MIN;
	int64_t x314 = -1LL;
	volatile int64_t x315 = INT64_MIN;
	uint8_t x316 = 66U;
	int64_t t71 = -23276436677954LL;

	t71 = (((x313<=x314)%x315)%x316);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x317 = UINT32_MAX;
	static volatile int8_t x318 = INT8_MIN;
	static uint16_t x319 = 2139U;
	volatile uint8_t x320 = 110U;

	t72 = (((x317<=x318)%x319)%x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = -1;
	volatile int8_t x322 = INT8_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile uint32_t x324 = UINT32_MAX;
	static volatile uint32_t t73 = 4576643U;

	t73 = (((x321<=x322)%x323)%x324);

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 386185545547LLU;
	static int8_t x326 = -1;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	volatile int32_t t74 = 464443;

	t74 = (((x325<=x326)%x327)%x328);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = -1;
	int64_t x331 = 3315085236024LL;
	volatile int8_t x332 = -1;
	volatile int64_t t75 = -82LL;

	t75 = (((x329<=x330)%x331)%x332);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MIN;
	volatile int8_t x335 = -4;
	volatile int64_t t76 = -46638129LL;

	t76 = (((x333<=x334)%x335)%x336);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = 0;
	uint8_t x339 = UINT8_MAX;
	volatile uint16_t x340 = UINT16_MAX;
	volatile int32_t t77 = -1;

	t77 = (((x337<=x338)%x339)%x340);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x341 = 5U;
	int8_t x343 = 5;
	int16_t x344 = INT16_MAX;
	volatile int32_t t78 = -65;

	t78 = (((x341<=x342)%x343)%x344);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x345 = 1207158808LLU;
	volatile int32_t x346 = 68142639;
	int8_t x347 = -27;
	int8_t x348 = INT8_MAX;
	int32_t t79 = -9281;

	t79 = (((x345<=x346)%x347)%x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x349 = INT32_MIN;
	int64_t x350 = -1LL;
	int8_t x352 = INT8_MIN;
	volatile int32_t t80 = 29;

	t80 = (((x349<=x350)%x351)%x352);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x353 = -1LL;
	static int64_t x354 = INT64_MIN;
	static volatile uint64_t t81 = 874031668591750LLU;

	t81 = (((x353<=x354)%x355)%x356);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x357 = INT8_MIN;
	int64_t x358 = INT64_MIN;
	int64_t x359 = -133708LL;
	int64_t t82 = 877684699128806952LL;

	t82 = (((x357<=x358)%x359)%x360);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x362 = INT32_MIN;
	int16_t x363 = INT16_MIN;
	static int32_t t83 = 28068;

	t83 = (((x361<=x362)%x363)%x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = -1;
	static int8_t x366 = INT8_MAX;
	int8_t x367 = -1;
	static int64_t x368 = 1013848774124341LL;
	int64_t t84 = -363916766686615520LL;

	t84 = (((x365<=x366)%x367)%x368);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x370 = 14;
	static int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MAX;
	static volatile int32_t t85 = 111096;

	t85 = (((x369<=x370)%x371)%x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = -2;
	uint32_t x375 = 1U;
	uint16_t x376 = 2U;
	static uint32_t t86 = 90626U;

	t86 = (((x373<=x374)%x375)%x376);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x379 = 1;
	uint16_t x380 = 4U;
	int32_t t87 = 14231937;

	t87 = (((x377<=x378)%x379)%x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x381 = INT16_MAX;
	int8_t x382 = INT8_MIN;
	static uint16_t x383 = 31627U;
	volatile int32_t t88 = -2627;

	t88 = (((x381<=x382)%x383)%x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x385 = UINT16_MAX;
	static volatile uint8_t x386 = 35U;
	int32_t x387 = INT32_MAX;
	volatile uint64_t x388 = UINT64_MAX;

	t89 = (((x385<=x386)%x387)%x388);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = INT64_MIN;
	int64_t x390 = 12444989LL;
	int32_t x392 = -1;
	static uint64_t t90 = 51477866561LLU;

	t90 = (((x389<=x390)%x391)%x392);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x393 = UINT16_MAX;
	volatile int32_t x394 = INT32_MIN;
	static int64_t x395 = -212626LL;
	volatile int8_t x396 = INT8_MIN;

	t91 = (((x393<=x394)%x395)%x396);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x397 = 144U;
	uint32_t x398 = UINT32_MAX;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = -1;

	t92 = (((x397<=x398)%x399)%x400);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x401 = INT16_MAX;
	int16_t x402 = -341;
	static volatile int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MAX;
	int32_t t93 = -3973;

	t93 = (((x401<=x402)%x403)%x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = 1;
	uint32_t x406 = 1U;
	int32_t x407 = INT32_MIN;
	static int64_t t94 = 1LL;

	t94 = (((x405<=x406)%x407)%x408);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = -1;
	int64_t x410 = INT64_MIN;
	uint64_t x412 = 1394538923LLU;
	uint64_t t95 = 254454148192832551LLU;

	t95 = (((x409<=x410)%x411)%x412);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x413 = INT16_MIN;
	volatile int64_t x414 = 604518350LL;
	int64_t t96 = -3542987764LL;

	t96 = (((x413<=x414)%x415)%x416);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x417 = 597U;
	static int16_t x418 = INT16_MAX;
	int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MIN;
	int32_t t97 = -420;

	t97 = (((x417<=x418)%x419)%x420);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = INT8_MIN;
	int16_t x426 = INT16_MIN;
	int32_t x427 = INT32_MIN;
	uint64_t x428 = 7683005203395LLU;
	volatile uint64_t t98 = 100LLU;

	t98 = (((x425<=x426)%x427)%x428);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = INT32_MAX;
	volatile int16_t x430 = 138;
	static int8_t x431 = -1;
	static volatile int32_t t99 = 368639;

	t99 = (((x429<=x430)%x431)%x432);

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

