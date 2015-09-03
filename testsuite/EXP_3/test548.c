#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
static int64_t x13 = INT64_MIN;
int8_t x16 = -1;
int64_t t3 = 5814438007743892LL;
static int32_t x20 = 17;
int8_t x27 = -9;
static int32_t t7 = 15;
static int16_t x38 = INT16_MIN;
int32_t x45 = INT32_MIN;
uint16_t x47 = 1898U;
static uint64_t x51 = 2191830714LLU;
int16_t x60 = INT16_MAX;
volatile int64_t t13 = 998460609659861794LL;
int8_t x72 = INT8_MAX;
static int8_t x77 = 0;
uint16_t x79 = 33U;
static volatile uint32_t x83 = 13U;
static int64_t x87 = 2308LL;
static uint64_t x94 = UINT64_MAX;
int32_t x95 = -8;
volatile int16_t x97 = INT16_MAX;
int16_t x100 = INT16_MAX;
volatile int8_t x103 = 2;
static int16_t x108 = 6716;
int16_t x115 = INT16_MIN;
static int32_t x117 = INT32_MIN;
volatile int8_t x124 = 3;
int64_t x128 = INT64_MIN;
int32_t t30 = -8;
int64_t x140 = INT64_MIN;
uint16_t x150 = UINT16_MAX;
volatile int32_t x151 = -15926909;
uint64_t t34 = 3836605344002625LLU;
volatile uint64_t t37 = 1LLU;
volatile int32_t x168 = -1;
uint8_t x172 = UINT8_MAX;
uint32_t x176 = 1U;
int32_t x186 = INT32_MIN;
static volatile uint16_t x192 = UINT16_MAX;
int8_t x193 = INT8_MAX;
uint64_t x197 = 2258522756LLU;
int16_t x198 = 159;
static uint32_t x199 = UINT32_MAX;
uint64_t t46 = 752714560LLU;
volatile int16_t x204 = INT16_MIN;
static int32_t x208 = -1;
uint64_t x222 = 59LLU;
uint64_t x225 = 10824178713742LLU;
uint16_t x228 = UINT16_MAX;
volatile uint32_t x231 = UINT32_MAX;
int32_t x245 = INT32_MIN;
static int8_t x262 = INT8_MIN;
static volatile int32_t t61 = -918252;
static volatile int8_t x267 = INT8_MIN;
static int16_t x273 = -1;
int16_t x276 = INT16_MAX;
uint64_t t66 = 34859977679LLU;
int32_t x287 = INT32_MAX;
int8_t x290 = INT8_MIN;
volatile uint8_t x302 = 6U;
uint64_t x318 = 18515LLU;
volatile uint64_t t75 = 281265LLU;
int32_t x325 = -1229577;
volatile uint16_t x328 = UINT16_MAX;
int64_t x336 = -1LL;
volatile uint64_t t77 = 2300237114101746527LLU;
volatile int64_t x337 = -827254394LL;
uint64_t x338 = UINT64_MAX;
static int32_t x339 = INT32_MIN;
int8_t x340 = -2;
volatile uint64_t t78 = 187161126LLU;
static int64_t x344 = INT64_MAX;
int32_t x345 = INT32_MIN;
int8_t x346 = INT8_MAX;
uint64_t t80 = 1LLU;
int8_t x351 = INT8_MIN;
int32_t x356 = 1;
int8_t x358 = INT8_MAX;
uint8_t x360 = 118U;
static int64_t x361 = INT64_MIN;
volatile int64_t t84 = -106491177393360LL;
static int8_t x365 = INT8_MIN;
int32_t x368 = -949742316;
static int32_t x371 = INT32_MIN;
volatile int64_t x384 = -1LL;
volatile int64_t t89 = 24105136443675423LL;
volatile int16_t x388 = INT16_MAX;
int64_t x390 = -1LL;
uint32_t t92 = 55U;
static uint32_t x401 = UINT32_MAX;
static int32_t x403 = -37;
int8_t x408 = -1;
int32_t t95 = -534;
uint32_t x412 = UINT32_MAX;
volatile uint32_t t96 = 107219190U;
static volatile int32_t t97 = -3;
volatile uint16_t x422 = 17U;


void f0(void) {
	uint16_t x1 = 14U;
	int64_t x2 = INT64_MIN;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 32516LL;

	t0 = ((x1/x2)-(x3/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 14;
	static volatile int16_t x6 = 265;
	uint16_t x7 = 862U;
	int16_t x8 = -6;
	int32_t t1 = 9979;

	t1 = ((x5/x6)-(x7/x8));

	if (t1 != 143) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MIN;
	volatile uint64_t x12 = 30050378667LLU;
	static uint64_t t2 = 7442974985703349LLU;

	t2 = ((x9/x10)-(x11/x12));

	if (t2 != 281474362850037LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x14 = 10276;
	uint16_t x15 = UINT16_MAX;

	t3 = ((x13/x14)-(x15/x16));

	if (t3 != -897564425475023LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 7U;
	uint64_t x18 = 76281LLU;
	volatile uint64_t x19 = 325868253LLU;
	static volatile uint64_t t4 = 1004113950052LLU;

	t4 = ((x17/x18)-(x19/x20));

	if (t4 != 18446744073690382896LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = 1682;
	int16_t x22 = INT16_MAX;
	static volatile int32_t x23 = INT32_MIN;
	uint8_t x24 = UINT8_MAX;
	int32_t t5 = -509;

	t5 = ((x21/x22)-(x23/x24));

	if (t5 != 8421504) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 7U;
	int8_t x26 = INT8_MAX;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -737;

	t6 = ((x25/x26)-(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -35;
	int8_t x30 = INT8_MIN;
	uint16_t x31 = UINT16_MAX;
	static uint16_t x32 = 1U;

	t7 = ((x29/x30)-(x31/x32));

	if (t7 != -65535) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static uint64_t x34 = 28437047140LLU;
	uint32_t x35 = UINT32_MAX;
	int32_t x36 = 760;
	uint64_t t8 = 7485829784949067LLU;

	t8 = ((x33/x34)-(x35/x36));

	if (t8 != 643035772LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint64_t x39 = 170LLU;
	volatile int16_t x40 = -1;
	uint64_t t9 = 6510LLU;

	t9 = ((x37/x38)-(x39/x40));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x46 = UINT8_MAX;
	uint64_t x48 = 5991429751LLU;
	volatile uint64_t t10 = 2889947370LLU;

	t10 = ((x45/x46)-(x47/x48));

	if (t10 != 18446744073701130112LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = -1;
	volatile int32_t x52 = -2892;
	static uint64_t t11 = 1179138072079276450LLU;

	t11 = ((x49/x50)-(x51/x52));

	if (t11 != 32768LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 236U;
	uint8_t x54 = 22U;
	int64_t x55 = -1LL;
	uint32_t x56 = UINT32_MAX;
	volatile int64_t t12 = -23091099962796536LL;

	t12 = ((x53/x54)-(x55/x56));

	if (t12 != 10LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = 5370017408654342LL;
	int8_t x58 = -4;
	volatile int64_t x59 = -1367808694045491LL;

	t13 = ((x57/x58)-(x59/x60));

	if (t13 != -1342462608680995LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 72076416407417291LLU;
	uint8_t x62 = 2U;
	int16_t x63 = -1;
	int64_t x64 = -1LL;
	uint64_t t14 = 482127107114LLU;

	t14 = ((x61/x62)-(x63/x64));

	if (t14 != 36038208203708644LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	int16_t x70 = 3536;
	static int64_t x71 = -1LL;
	volatile int64_t t15 = -53974564164LL;

	t15 = ((x69/x70)-(x71/x72));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x78 = INT16_MAX;
	int8_t x80 = -1;
	static int32_t t16 = -1;

	t16 = ((x77/x78)-(x79/x80));

	if (t16 != 33) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;
	int32_t x82 = INT32_MIN;
	int64_t x84 = -1LL;
	int64_t t17 = -1398076LL;

	t17 = ((x81/x82)-(x83/x84));

	if (t17 != 13LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -6339913LL;
	int64_t x86 = INT64_MAX;
	volatile int32_t x88 = INT32_MAX;
	volatile int64_t t18 = 964424324500393633LL;

	t18 = ((x85/x86)-(x87/x88));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 11065U;
	int16_t x90 = INT16_MIN;
	volatile int64_t x91 = INT64_MIN;
	static int64_t x92 = INT64_MIN;
	static volatile int64_t t19 = -5463LL;

	t19 = ((x89/x90)-(x91/x92));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = -51856493LL;
	volatile int8_t x96 = INT8_MAX;
	volatile uint64_t t20 = 174LLU;

	t20 = ((x93/x94)-(x95/x96));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x98 = UINT64_MAX;
	volatile int8_t x99 = INT8_MIN;
	uint64_t t21 = 176092449LLU;

	t21 = ((x97/x98)-(x99/x100));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MAX;
	uint32_t x102 = 3099843U;
	static volatile uint64_t x104 = UINT64_MAX;
	volatile uint64_t t22 = 3031531652858624LLU;

	t22 = ((x101/x102)-(x103/x104));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 13U;
	uint16_t x106 = 199U;
	int8_t x107 = INT8_MIN;
	int32_t t23 = -162749;

	t23 = ((x105/x106)-(x107/x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = -9578;
	uint16_t x110 = 3058U;
	uint32_t x111 = 14130U;
	uint16_t x112 = 105U;
	volatile uint32_t t24 = 85U;

	t24 = ((x109/x110)-(x111/x112));

	if (t24 != 4294967159U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = 3;
	int8_t x114 = INT8_MIN;
	volatile int16_t x116 = 1;
	int32_t t25 = 53;

	t25 = ((x113/x114)-(x115/x116));

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x118 = -13974;
	int64_t x119 = -5LL;
	static uint8_t x120 = 17U;
	int64_t t26 = 23480816LL;

	t26 = ((x117/x118)-(x119/x120));

	if (t26 != 153677LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x121 = INT8_MIN;
	uint64_t x122 = 526LLU;
	int8_t x123 = -2;
	volatile uint64_t t27 = 1730116LLU;

	t27 = ((x121/x122)-(x123/x124));

	if (t27 != 35069855653440211LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x125 = 840U;
	int8_t x126 = -42;
	int8_t x127 = -1;
	volatile int64_t t28 = 18327130107195349LL;

	t28 = ((x125/x126)-(x127/x128));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MAX;
	uint32_t x130 = 43U;
	int8_t x131 = INT8_MAX;
	uint8_t x132 = 12U;
	uint32_t t29 = 1227461U;

	t29 = ((x129/x130)-(x131/x132));

	if (t29 != 49941470U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = -1;
	volatile int32_t x134 = -31;
	volatile uint8_t x135 = 0U;
	int16_t x136 = -1;

	t30 = ((x133/x134)-(x135/x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -4;
	int32_t x138 = INT32_MIN;
	int16_t x139 = INT16_MAX;
	volatile int64_t t31 = 16992532891274LL;

	t31 = ((x137/x138)-(x139/x140));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 4004U;
	static int16_t x142 = -27;
	int16_t x143 = 81;
	int16_t x144 = -1046;
	volatile int32_t t32 = -411443;

	t32 = ((x141/x142)-(x143/x144));

	if (t32 != -148) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -1;
	static uint16_t x146 = 21U;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	int32_t t33 = 13862152;

	t33 = ((x145/x146)-(x147/x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x149 = INT16_MIN;
	volatile uint64_t x152 = UINT64_MAX;

	t34 = ((x149/x150)-(x151/x152));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x153 = UINT8_MAX;
	static int32_t x154 = INT32_MAX;
	static uint32_t x155 = 4709U;
	int8_t x156 = INT8_MIN;
	uint32_t t35 = 135599U;

	t35 = ((x153/x154)-(x155/x156));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x157 = INT32_MAX;
	volatile int16_t x158 = 426;
	int8_t x159 = INT8_MAX;
	int32_t x160 = 120768164;
	static int32_t t36 = -37832;

	t36 = ((x157/x158)-(x159/x160));

	if (t36 != 5041041) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x161 = 1207677241597LLU;
	static int16_t x162 = INT16_MAX;
	int32_t x163 = INT32_MAX;
	static int64_t x164 = INT64_MIN;

	t37 = ((x161/x162)-(x163/x164));

	if (t37 != 36856509LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	int16_t x166 = INT16_MAX;
	static int8_t x167 = -28;
	int64_t t38 = 2LL;

	t38 = ((x165/x166)-(x167/x168));

	if (t38 != -281483566907428LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x169 = 30U;
	static uint16_t x170 = 7U;
	static volatile int8_t x171 = -1;
	static volatile int32_t t39 = -22114;

	t39 = ((x169/x170)-(x171/x172));

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = INT16_MAX;
	int64_t x174 = INT64_MIN;
	int32_t x175 = -1;
	static volatile int64_t t40 = -56119039524032LL;

	t40 = ((x173/x174)-(x175/x176));

	if (t40 != -4294967295LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x177 = INT16_MIN;
	static int16_t x178 = INT16_MIN;
	static volatile uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MIN;
	volatile uint64_t t41 = 133378LLU;

	t41 = ((x177/x178)-(x179/x180));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = INT32_MIN;
	static int32_t x182 = INT32_MAX;
	int64_t x183 = -1LL;
	int32_t x184 = INT32_MAX;
	static int64_t t42 = 77612286666632661LL;

	t42 = ((x181/x182)-(x183/x184));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = 562889306925625LL;
	int64_t x187 = -852441203910LL;
	static int16_t x188 = INT16_MIN;
	int64_t t43 = -26581LL;

	t43 = ((x185/x186)-(x187/x188));

	if (t43 != -26276556LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = -1;
	static int16_t x190 = INT16_MAX;
	uint64_t x191 = 483378773580743LLU;
	volatile uint64_t t44 = 697465637753LLU;

	t44 = ((x189/x190)-(x191/x192));

	if (t44 != 18446744066333664326LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x194 = INT64_MIN;
	uint8_t x195 = 106U;
	int16_t x196 = INT16_MIN;
	volatile int64_t t45 = 1702770790640556LL;

	t45 = ((x193/x194)-(x195/x196));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x200 = INT8_MIN;

	t46 = ((x197/x198)-(x199/x200));

	if (t46 != 14204544LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	static int32_t x202 = INT32_MIN;
	static uint8_t x203 = 4U;
	int64_t t47 = -22463LL;

	t47 = ((x201/x202)-(x203/x204));

	if (t47 != 4294967296LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	volatile uint64_t x207 = 27653303969434978LLU;
	volatile uint64_t t48 = 407922087110LLU;

	t48 = ((x205/x206)-(x207/x208));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	uint32_t x210 = UINT32_MAX;
	static int32_t x211 = INT32_MIN;
	volatile int8_t x212 = INT8_MIN;
	volatile uint32_t t49 = 82U;

	t49 = ((x209/x210)-(x211/x212));

	if (t49 != 4278190080U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x213 = 0;
	uint64_t x214 = UINT64_MAX;
	static volatile uint64_t x215 = 510LLU;
	int8_t x216 = INT8_MIN;
	uint64_t t50 = 1956047LLU;

	t50 = ((x213/x214)-(x215/x216));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = 0U;
	volatile int16_t x218 = -1;
	static uint32_t x219 = UINT32_MAX;
	int8_t x220 = -1;
	static volatile uint32_t t51 = UINT32_MAX;

	t51 = ((x217/x218)-(x219/x220));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MIN;
	static int64_t x223 = 7038272592286101LL;
	uint8_t x224 = 25U;
	uint64_t t52 = 17225086687529LLU;

	t52 = ((x221/x222)-(x223/x224));

	if (t52 != 312375148275326657LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x226 = INT8_MAX;
	int8_t x227 = INT8_MIN;
	volatile uint64_t t53 = 9545LLU;

	t53 = ((x225/x226)-(x227/x228));

	if (t53 != 85229753651LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x229 = 13U;
	static int64_t x230 = INT64_MIN;
	int16_t x232 = INT16_MAX;
	static volatile int64_t t54 = -3321LL;

	t54 = ((x229/x230)-(x231/x232));

	if (t54 != -131076LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MAX;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = -159254LL;
	int8_t x236 = INT8_MIN;
	volatile int64_t t55 = -79804LL;

	t55 = ((x233/x234)-(x235/x236));

	if (t55 != -1244LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = -1;
	int64_t x238 = INT64_MAX;
	static int32_t x239 = INT32_MAX;
	volatile int64_t x240 = -1LL;
	int64_t t56 = 253792804113029612LL;

	t56 = ((x237/x238)-(x239/x240));

	if (t56 != 2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = UINT16_MAX;
	uint32_t x242 = UINT32_MAX;
	int64_t x243 = -1LL;
	static volatile int16_t x244 = INT16_MAX;
	int64_t t57 = 1029614LL;

	t57 = ((x241/x242)-(x243/x244));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x246 = -3;
	int8_t x247 = -21;
	static int8_t x248 = INT8_MIN;
	int32_t t58 = 436019;

	t58 = ((x245/x246)-(x247/x248));

	if (t58 != 715827882) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MAX;
	int32_t x250 = 103631;
	static int32_t x251 = INT32_MIN;
	static int8_t x252 = -20;
	static volatile int32_t t59 = -53675017;

	t59 = ((x249/x250)-(x251/x252));

	if (t59 != -107353460) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = INT8_MAX;
	int64_t x258 = INT64_MIN;
	uint64_t x259 = 509385400471172LLU;
	uint64_t x260 = 2467220530579180229LLU;
	volatile uint64_t t60 = 1514047801077LLU;

	t60 = ((x257/x258)-(x259/x260));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = INT8_MIN;
	uint16_t x263 = 1294U;
	uint8_t x264 = UINT8_MAX;

	t61 = ((x261/x262)-(x263/x264));

	if (t61 != -4) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x265 = 76849573U;
	uint32_t x266 = 181465U;
	int16_t x268 = -1;
	uint32_t t62 = 401U;

	t62 = ((x265/x266)-(x267/x268));

	if (t62 != 295U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MIN;
	static int64_t x270 = INT64_MAX;
	int16_t x271 = -1;
	volatile int32_t x272 = -1;
	int64_t t63 = -10LL;

	t63 = ((x269/x270)-(x271/x272));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x274 = 27LL;
	int64_t x275 = INT64_MIN;
	static int64_t t64 = -367309555LL;

	t64 = ((x273/x274)-(x275/x276));

	if (t64 != 281483566907400LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MIN;
	static int32_t x278 = -120549165;
	volatile int32_t x279 = -222467895;
	static int32_t x280 = -1;
	int32_t t65 = -1;

	t65 = ((x277/x278)-(x279/x280));

	if (t65 != -222467878) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = -1;
	volatile int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;

	t66 = ((x281/x282)-(x283/x284));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = -1;
	static int32_t x286 = -15152;
	int8_t x288 = 1;
	int32_t t67 = 3;

	t67 = ((x285/x286)-(x287/x288));

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = -1;
	int8_t x291 = INT8_MIN;
	static uint16_t x292 = UINT16_MAX;
	int32_t t68 = 180283;

	t68 = ((x289/x290)-(x291/x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MIN;
	volatile int64_t x294 = -1LL;
	uint64_t x295 = UINT64_MAX;
	static int32_t x296 = INT32_MAX;
	volatile uint64_t t69 = 13899229229634LLU;

	t69 = ((x293/x294)-(x295/x296));

	if (t69 != 18446744065119617148LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = UINT16_MAX;
	uint64_t x298 = UINT64_MAX;
	int64_t x299 = -1LL;
	int32_t x300 = -1;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = ((x297/x298)-(x299/x300));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = INT64_MIN;
	uint16_t x303 = UINT16_MAX;
	volatile uint8_t x304 = UINT8_MAX;
	volatile int64_t t71 = 109653963350944LL;

	t71 = ((x301/x302)-(x303/x304));

	if (t71 != -1537228672809129558LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = 4082930U;
	int16_t x306 = -1;
	int32_t x307 = INT32_MIN;
	static volatile int64_t x308 = -1LL;
	volatile int64_t t72 = -197055072013892LL;

	t72 = ((x305/x306)-(x307/x308));

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = 4;
	uint64_t x310 = UINT64_MAX;
	int32_t x311 = -451;
	int64_t x312 = INT64_MIN;
	uint64_t t73 = 2LLU;

	t73 = ((x309/x310)-(x311/x312));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x313 = 552U;
	uint64_t x314 = 1095107560909067063LLU;
	static int32_t x315 = -1;
	volatile int16_t x316 = -1;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x313/x314)-(x315/x316));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MAX;
	int64_t x319 = INT64_MIN;
	int32_t x320 = 55224635;

	t75 = ((x317/x318)-(x319/x320));

	if (t75 != 498323755307111LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x326 = 5LLU;
	int64_t x327 = -1328362LL;
	static uint64_t t76 = 1622382797001297LLU;

	t76 = ((x325/x326)-(x327/x328));

	if (t76 != 3689348814741664427LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x333 = 85640430753LLU;
	int64_t x334 = -1LL;
	static int8_t x335 = 57;

	t77 = ((x333/x334)-(x335/x336));

	if (t77 != 57LLU) { NG(); } else { ; }
	
}

void f78(void) {


	t78 = ((x337/x338)-(x339/x340));

	if (t78 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	int32_t x343 = -1;
	volatile int64_t t79 = 510LL;

	t79 = ((x341/x342)-(x343/x344));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x347 = 3U;
	volatile uint64_t x348 = 42899LLU;

	t80 = ((x345/x346)-(x347/x348));

	if (t80 != 18446744073692642296LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x349 = INT8_MAX;
	int16_t x350 = -260;
	static int64_t x352 = INT64_MIN;
	static int64_t t81 = -765147706LL;

	t81 = ((x349/x350)-(x351/x352));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x353 = 546747153561895653LLU;
	static int32_t x354 = INT32_MAX;
	int64_t x355 = INT64_MIN;
	volatile uint64_t t82 = 435327425334910168LLU;

	t82 = ((x353/x354)-(x355/x356));

	if (t82 != 9223372037109374791LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x357 = INT32_MIN;
	uint8_t x359 = 24U;
	static int32_t t83 = -497;

	t83 = ((x357/x358)-(x359/x360));

	if (t83 != -16909320) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x362 = 2U;
	static int64_t x363 = INT64_MAX;
	static int64_t x364 = -663281748647832952LL;

	t84 = ((x361/x362)-(x363/x364));

	if (t84 != -4611686018427387891LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x366 = INT64_MIN;
	volatile uint16_t x367 = UINT16_MAX;
	int64_t t85 = -1119094294231LL;

	t85 = ((x365/x366)-(x367/x368));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x369 = -2669;
	int16_t x370 = -21;
	int32_t x372 = -42742;
	volatile int32_t t86 = -1296;

	t86 = ((x369/x370)-(x371/x372));

	if (t86 != -50115) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x373 = 0LLU;
	int32_t x374 = -1;
	uint8_t x375 = 2U;
	volatile int8_t x376 = INT8_MIN;
	volatile uint64_t t87 = 4141439225LLU;

	t87 = ((x373/x374)-(x375/x376));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x377 = 3672U;
	int16_t x378 = -1;
	uint8_t x379 = 17U;
	int8_t x380 = 7;
	int32_t t88 = 0;

	t88 = ((x377/x378)-(x379/x380));

	if (t88 != -3674) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x381 = 24U;
	int64_t x382 = INT64_MIN;
	int32_t x383 = INT32_MAX;

	t89 = ((x381/x382)-(x383/x384));

	if (t89 != 2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x385 = -1;
	int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MIN;
	volatile int64_t t90 = 113749394LL;

	t90 = ((x385/x386)-(x387/x388));

	if (t90 != 65538LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x389 = 21362U;
	volatile int8_t x391 = INT8_MIN;
	int32_t x392 = 4660300;
	int64_t t91 = -56LL;

	t91 = ((x389/x390)-(x391/x392));

	if (t91 != -21362LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = INT8_MAX;
	uint32_t x394 = UINT32_MAX;
	static int32_t x395 = INT32_MIN;
	static uint32_t x396 = 16481659U;

	t92 = ((x393/x394)-(x395/x396));

	if (t92 != 4294967166U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = -918215618;
	volatile int64_t x398 = -3935582LL;
	int8_t x399 = -29;
	static uint16_t x400 = 42U;
	int64_t t93 = 4028730092823LL;

	t93 = ((x397/x398)-(x399/x400));

	if (t93 != 233LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x402 = INT8_MIN;
	int32_t x404 = INT32_MAX;
	static volatile uint32_t t94 = 407U;

	t94 = ((x401/x402)-(x403/x404));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = INT32_MAX;
	uint16_t x406 = 1442U;
	int32_t x407 = -1;

	t95 = ((x405/x406)-(x407/x408));

	if (t95 != 1489238) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x409 = INT8_MAX;
	int32_t x410 = 24389;
	volatile int8_t x411 = INT8_MIN;

	t96 = ((x409/x410)-(x411/x412));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x413 = -1;
	int8_t x414 = 1;
	int32_t x415 = INT32_MIN;
	uint16_t x416 = 18U;

	t97 = ((x413/x414)-(x415/x416));

	if (t97 != 119304646) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = -1;
	int8_t x418 = INT8_MIN;
	int64_t x419 = INT64_MAX;
	int64_t x420 = 1122009098LL;
	volatile int64_t t98 = -30LL;

	t98 = ((x417/x418)-(x419/x420));

	if (t98 != -8220407529LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x421 = UINT64_MAX;
	uint64_t x423 = 1LLU;
	static int32_t x424 = -107293;
	volatile uint64_t t99 = 10133142LLU;

	t99 = ((x421/x422)-(x423/x424));

	if (t99 != 1085102592571150095LLU) { NG(); } else { ; }
	
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

