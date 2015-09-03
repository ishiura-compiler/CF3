#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MAX;
static int32_t t3 = 920;
int8_t x18 = INT8_MAX;
volatile int16_t x20 = INT16_MIN;
int16_t x28 = INT16_MIN;
static uint64_t x31 = UINT64_MAX;
uint32_t x38 = 1711U;
static int32_t t8 = 6602;
int16_t x51 = 16;
volatile int8_t x54 = -1;
volatile uint64_t x62 = 1312546394LLU;
volatile int8_t x63 = -1;
int16_t x64 = INT16_MIN;
int16_t x73 = INT16_MIN;
uint64_t x75 = 27780203LLU;
uint16_t x78 = 2796U;
static uint16_t x79 = 2U;
int32_t x82 = 0;
static int8_t x90 = INT8_MIN;
volatile uint8_t x102 = 6U;
volatile int16_t x110 = INT16_MIN;
int64_t x112 = INT64_MIN;
int32_t x122 = 5611;
int8_t x123 = 1;
int8_t x133 = INT8_MIN;
volatile int8_t x135 = -1;
volatile int32_t t30 = -35;
volatile uint32_t x146 = 87U;
static uint16_t x147 = 541U;
volatile int32_t t33 = -24380301;
static uint32_t x149 = 3648U;
uint64_t x150 = 14737LLU;
static volatile int32_t x153 = INT32_MAX;
uint8_t x154 = 11U;
uint64_t x155 = UINT64_MAX;
int8_t x158 = INT8_MAX;
int8_t x161 = INT8_MAX;
int16_t x163 = -1;
static int32_t t38 = -63590543;
static uint8_t x182 = UINT8_MAX;
volatile int32_t t42 = 162;
int64_t x194 = INT64_MAX;
int8_t x204 = INT8_MIN;
static volatile int64_t x205 = INT64_MIN;
int8_t x214 = INT8_MIN;
int32_t x215 = INT32_MIN;
int32_t x230 = -5;
static int64_t x233 = -1LL;
int64_t x234 = -1LL;
volatile int32_t t53 = -19;
volatile int32_t t54 = -118494349;
int16_t x242 = -1;
volatile int32_t t56 = 300699;
int8_t x252 = -1;
uint32_t x261 = 186377U;
int16_t x264 = 68;
volatile int32_t t60 = 224723729;
static int64_t x268 = 19421781022126LL;
int16_t x272 = INT16_MIN;
volatile int32_t t62 = 806281567;
uint8_t x277 = 50U;
static volatile uint8_t x278 = 1U;
int16_t x280 = INT16_MAX;
int8_t x282 = 7;
int16_t x286 = -1;
int64_t x288 = -354367796734600803LL;
static volatile int32_t t66 = -18;
int32_t t67 = -135;
int16_t x293 = INT16_MIN;
int32_t x301 = -1;
volatile int8_t x306 = 22;
volatile int32_t t72 = -75948;
static int8_t x316 = -1;
uint32_t x322 = UINT32_MAX;
int64_t x323 = 29801705008357LL;
volatile uint64_t x324 = UINT64_MAX;
int32_t t74 = -69;
volatile int32_t x327 = -1;
int8_t x337 = INT8_MAX;
int8_t x338 = INT8_MIN;
volatile int32_t t78 = -3;
uint16_t x348 = 9624U;
static volatile int32_t t79 = 22669;
int8_t x356 = 2;
static uint16_t x357 = 57U;
int16_t x360 = INT16_MAX;
static int8_t x363 = -1;
volatile int16_t x370 = INT16_MIN;
int16_t x381 = INT16_MAX;
volatile int32_t t87 = -2621;
volatile int32_t t88 = -11;
int16_t x389 = -3314;
int64_t x392 = INT64_MIN;
int64_t x399 = INT64_MIN;
int16_t x400 = INT16_MIN;
int64_t x409 = -42807LL;
static volatile uint8_t x413 = 3U;
int32_t x429 = -1070610;
static int8_t x436 = -1;


void f0(void) {
	int16_t x1 = -10;
	int8_t x2 = INT8_MAX;
	int32_t x4 = INT32_MAX;
	int32_t t0 = 6159644;

	t0 = ((x1*(x2/x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1378;
	static int64_t x6 = INT64_MIN;
	int16_t x7 = INT16_MIN;
	static uint8_t x8 = UINT8_MAX;
	int32_t t1 = -15;

	t1 = ((x5*(x6/x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int64_t x10 = INT64_MAX;
	int16_t x11 = 7;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 106;

	t2 = ((x9*(x10/x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 9774U;
	static int32_t x14 = 0;
	static int64_t x15 = INT64_MAX;
	volatile int8_t x16 = INT8_MAX;

	t3 = ((x13*(x14/x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 15U;
	int32_t x19 = -146782420;
	static int32_t t4 = -6;

	t4 = ((x17*(x18/x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int32_t x22 = INT32_MIN;
	uint8_t x23 = 20U;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 1898;

	t5 = ((x21*(x22/x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x25 = 16291670U;
	uint8_t x26 = 8U;
	uint8_t x27 = 10U;
	static int32_t t6 = -931;

	t6 = ((x25*(x26/x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1394U;
	uint16_t x30 = 224U;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 63220488;

	t7 = ((x29*(x30/x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = 7U;
	volatile uint8_t x39 = 9U;
	static volatile int16_t x40 = 3;

	t8 = ((x37*(x38/x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 6340359278541753LLU;
	static int64_t x42 = INT64_MAX;
	uint64_t x43 = UINT64_MAX;
	uint8_t x44 = UINT8_MAX;
	int32_t t9 = 1;

	t9 = ((x41*(x42/x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	uint8_t x46 = 0U;
	static int16_t x47 = INT16_MAX;
	int8_t x48 = INT8_MAX;
	static volatile int32_t t10 = 9081981;

	t10 = ((x45*(x46/x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	uint8_t x50 = 20U;
	int64_t x52 = INT64_MAX;
	volatile int32_t t11 = 12;

	t11 = ((x49*(x50/x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = -1;
	static int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	volatile int32_t t12 = 171495661;

	t12 = ((x53*(x54/x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MIN;
	int32_t t13 = -1857;

	t13 = ((x57*(x58/x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MAX;
	volatile int32_t t14 = 1126397;

	t14 = ((x61*(x62/x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = 23;
	int8_t x66 = -1;
	static int32_t x67 = 616678668;
	uint16_t x68 = UINT16_MAX;
	int32_t t15 = -4561;

	t15 = ((x65*(x66/x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = 7734;
	volatile int16_t x70 = -21;
	static int16_t x71 = INT16_MAX;
	uint16_t x72 = UINT16_MAX;
	int32_t t16 = 923812;

	t16 = ((x69*(x70/x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x74 = INT64_MAX;
	int64_t x76 = INT64_MIN;
	volatile int32_t t17 = -214277;

	t17 = ((x73*(x74/x75))==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 739U;
	int32_t x80 = INT32_MAX;
	volatile int32_t t18 = 1;

	t18 = ((x77*(x78/x79))==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = 5;
	static uint64_t x83 = 6578533274677680974LLU;
	static volatile uint64_t x84 = 43LLU;
	static volatile int32_t t19 = 176;

	t19 = ((x81*(x82/x83))==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	static int8_t x86 = -1;
	int16_t x87 = -1;
	uint64_t x88 = UINT64_MAX;
	int32_t t20 = 302521815;

	t20 = ((x85*(x86/x87))==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int16_t x91 = INT16_MIN;
	static uint64_t x92 = UINT64_MAX;
	static int32_t t21 = 201;

	t21 = ((x89*(x90/x91))==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MAX;
	int64_t x95 = 6928869LL;
	static uint64_t x96 = 378354LLU;
	volatile int32_t t22 = 12124;

	t22 = ((x93*(x94/x95))==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t23 = -185;

	t23 = ((x101*(x102/x103))==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	int64_t x106 = -5LL;
	uint32_t x107 = 9721250U;
	int32_t x108 = 510751;
	int32_t t24 = -24643648;

	t24 = ((x105*(x106/x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = UINT64_MAX;
	int16_t x111 = INT16_MIN;
	int32_t t25 = -320635;

	t25 = ((x109*(x110/x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x117 = -1LL;
	int16_t x118 = 251;
	int16_t x119 = -14150;
	static int64_t x120 = 0LL;
	int32_t t26 = 32853787;

	t26 = ((x117*(x118/x119))==x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = INT8_MIN;
	volatile int32_t x124 = INT32_MAX;
	volatile int32_t t27 = 5070;

	t27 = ((x121*(x122/x123))==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = 49;
	static int8_t x126 = -1;
	uint8_t x127 = 11U;
	uint16_t x128 = 172U;
	volatile int32_t t28 = -4;

	t28 = ((x125*(x126/x127))==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x129 = UINT16_MAX;
	int16_t x130 = INT16_MIN;
	int32_t x131 = 63482533;
	static uint32_t x132 = 1699911U;
	static int32_t t29 = 2002;

	t29 = ((x129*(x130/x131))==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x134 = 192361;
	int32_t x136 = INT32_MIN;

	t30 = ((x133*(x134/x135))==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = UINT16_MAX;
	static volatile uint32_t x138 = UINT32_MAX;
	int32_t x139 = -1;
	int16_t x140 = INT16_MIN;
	int32_t t31 = -6;

	t31 = ((x137*(x138/x139))==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 37U;
	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MAX;
	volatile int32_t t32 = 15146;

	t32 = ((x141*(x142/x143))==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x145 = INT64_MIN;
	uint8_t x148 = 8U;

	t33 = ((x145*(x146/x147))==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x151 = INT8_MIN;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t34 = -194363;

	t34 = ((x149*(x150/x151))==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x156 = INT32_MAX;
	volatile int32_t t35 = 9544;

	t35 = ((x153*(x154/x155))==x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x157 = -582748963263659979LL;
	uint64_t x159 = 589LLU;
	int64_t x160 = INT64_MAX;
	int32_t t36 = -1473058;

	t36 = ((x157*(x158/x159))==x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x162 = 402135LL;
	int32_t x164 = INT32_MIN;
	int32_t t37 = 5829;

	t37 = ((x161*(x162/x163))==x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x165 = INT32_MAX;
	int8_t x166 = 60;
	volatile uint32_t x167 = 132U;
	int8_t x168 = INT8_MIN;

	t38 = ((x165*(x166/x167))==x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x169 = -1;
	uint64_t x170 = 2785748734328LLU;
	int16_t x171 = INT16_MIN;
	uint32_t x172 = 36421U;
	int32_t t39 = -387;

	t39 = ((x169*(x170/x171))==x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x177 = 201U;
	uint64_t x178 = UINT64_MAX;
	uint64_t x179 = 1948069997582625LLU;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t40 = -418020401;

	t40 = ((x177*(x178/x179))==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 346U;
	int32_t x183 = INT32_MIN;
	int64_t x184 = INT64_MIN;
	static int32_t t41 = 64818;

	t41 = ((x181*(x182/x183))==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MIN;
	uint64_t x186 = 194LLU;
	int64_t x187 = INT64_MIN;
	int32_t x188 = INT32_MIN;

	t42 = ((x185*(x186/x187))==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = 1;
	static int8_t x195 = 1;
	int64_t x196 = -19390031814463749LL;
	int32_t t43 = -109635;

	t43 = ((x193*(x194/x195))==x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x197 = 0;
	uint64_t x198 = 13542396228LLU;
	uint64_t x199 = UINT64_MAX;
	uint64_t x200 = UINT64_MAX;
	static volatile int32_t t44 = -6723;

	t44 = ((x197*(x198/x199))==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = 0;
	int32_t x202 = INT32_MIN;
	static int32_t x203 = -7071780;
	static int32_t t45 = -118934278;

	t45 = ((x201*(x202/x203))==x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x206 = -1;
	int8_t x207 = 30;
	int16_t x208 = -1;
	int32_t t46 = -444530;

	t46 = ((x205*(x206/x207))==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x209 = 3U;
	static volatile int32_t x210 = 601;
	static uint64_t x211 = 114053986207431853LLU;
	volatile int32_t x212 = -1;
	int32_t t47 = -7900560;

	t47 = ((x209*(x210/x211))==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x213 = UINT64_MAX;
	static uint64_t x216 = UINT64_MAX;
	static int32_t t48 = -27;

	t48 = ((x213*(x214/x215))==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = 579U;
	int8_t x218 = -1;
	volatile uint8_t x219 = 1U;
	int64_t x220 = INT64_MIN;
	volatile int32_t t49 = -250320;

	t49 = ((x217*(x218/x219))==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x221 = 65238539LL;
	volatile uint32_t x222 = UINT32_MAX;
	int8_t x223 = INT8_MAX;
	int32_t x224 = 1379898;
	volatile int32_t t50 = 27557;

	t50 = ((x221*(x222/x223))==x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = -1;
	uint32_t x226 = UINT32_MAX;
	int16_t x227 = 974;
	uint8_t x228 = 3U;
	int32_t t51 = -176025578;

	t51 = ((x225*(x226/x227))==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x229 = 90U;
	volatile uint32_t x231 = 3995U;
	uint16_t x232 = UINT16_MAX;
	static int32_t t52 = -7359387;

	t52 = ((x229*(x230/x231))==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x235 = 2;
	uint16_t x236 = 30U;

	t53 = ((x233*(x234/x235))==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MAX;
	int64_t x238 = 45220808176LL;
	int8_t x239 = INT8_MIN;
	static uint16_t x240 = UINT16_MAX;

	t54 = ((x237*(x238/x239))==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x241 = 4486007LLU;
	uint64_t x243 = 3LLU;
	static uint64_t x244 = UINT64_MAX;
	static int32_t t55 = 122;

	t55 = ((x241*(x242/x243))==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = -993;
	int64_t x246 = INT64_MIN;
	volatile uint32_t x247 = 6906788U;
	uint8_t x248 = UINT8_MAX;

	t56 = ((x245*(x246/x247))==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x249 = -3;
	uint8_t x250 = 69U;
	int8_t x251 = -54;
	volatile int32_t t57 = -15213790;

	t57 = ((x249*(x250/x251))==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = 1272016403918LLU;
	int32_t x254 = 2953;
	int32_t x255 = -340708449;
	static int64_t x256 = INT64_MIN;
	static volatile int32_t t58 = -1239;

	t58 = ((x253*(x254/x255))==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x257 = 8U;
	uint32_t x258 = UINT32_MAX;
	uint16_t x259 = 246U;
	int16_t x260 = INT16_MIN;
	volatile int32_t t59 = -21;

	t59 = ((x257*(x258/x259))==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x262 = INT16_MIN;
	volatile int64_t x263 = INT64_MIN;

	t60 = ((x261*(x262/x263))==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x265 = -34;
	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	int32_t t61 = -3378;

	t61 = ((x265*(x266/x267))==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = 112U;
	static uint32_t x270 = 2U;
	uint16_t x271 = 2223U;

	t62 = ((x269*(x270/x271))==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x273 = INT64_MIN;
	int8_t x274 = -1;
	static uint16_t x275 = 5376U;
	int16_t x276 = -40;
	static volatile int32_t t63 = -343893;

	t63 = ((x273*(x274/x275))==x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x279 = -1LL;
	volatile int32_t t64 = 6033473;

	t64 = ((x277*(x278/x279))==x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = INT8_MIN;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	volatile int32_t t65 = -6349;

	t65 = ((x281*(x282/x283))==x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MIN;
	static int64_t x287 = 3831817114LL;

	t66 = ((x285*(x286/x287))==x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x289 = INT64_MIN;
	uint16_t x290 = 4U;
	int64_t x291 = INT64_MIN;
	uint32_t x292 = 861U;

	t67 = ((x289*(x290/x291))==x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x294 = INT8_MIN;
	static int64_t x295 = INT64_MAX;
	int8_t x296 = INT8_MAX;
	volatile int32_t t68 = -190;

	t68 = ((x293*(x294/x295))==x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x297 = INT8_MIN;
	int32_t x298 = 488;
	volatile int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MAX;
	volatile int32_t t69 = -6;

	t69 = ((x297*(x298/x299))==x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x302 = UINT32_MAX;
	volatile uint32_t x303 = UINT32_MAX;
	int64_t x304 = INT64_MIN;
	volatile int32_t t70 = -8;

	t70 = ((x301*(x302/x303))==x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x305 = INT8_MIN;
	int64_t x307 = INT64_MIN;
	int8_t x308 = 1;
	int32_t t71 = 27471;

	t71 = ((x305*(x306/x307))==x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x309 = -10409LL;
	volatile int16_t x310 = INT16_MIN;
	int8_t x311 = INT8_MIN;
	volatile int64_t x312 = INT64_MAX;

	t72 = ((x309*(x310/x311))==x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = -4;
	static volatile int32_t x314 = -2;
	volatile int16_t x315 = 2004;
	int32_t t73 = -121404;

	t73 = ((x313*(x314/x315))==x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x321 = 4085621;

	t74 = ((x321*(x322/x323))==x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = 928;
	uint8_t x326 = 9U;
	static int32_t x328 = INT32_MIN;
	int32_t t75 = 0;

	t75 = ((x325*(x326/x327))==x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MIN;
	static uint16_t x330 = 807U;
	static uint32_t x331 = UINT32_MAX;
	static uint32_t x332 = 1U;
	int32_t t76 = -2968347;

	t76 = ((x329*(x330/x331))==x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MIN;
	volatile int16_t x334 = 1;
	static int8_t x335 = 26;
	static int32_t x336 = -207117248;
	static volatile int32_t t77 = -1;

	t77 = ((x333*(x334/x335))==x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x339 = 83U;
	int32_t x340 = -1;

	t78 = ((x337*(x338/x339))==x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x345 = 595U;
	static int64_t x346 = 109863LL;
	uint16_t x347 = 3U;

	t79 = ((x345*(x346/x347))==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = -1LL;
	static volatile int16_t x350 = INT16_MIN;
	uint8_t x351 = 14U;
	static int32_t x352 = INT32_MAX;
	int32_t t80 = 6705506;

	t80 = ((x349*(x350/x351))==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = INT8_MIN;
	volatile int16_t x354 = 1;
	int16_t x355 = -1;
	volatile int32_t t81 = -1020;

	t81 = ((x353*(x354/x355))==x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x358 = -1;
	uint8_t x359 = 6U;
	volatile int32_t t82 = -4453;

	t82 = ((x357*(x358/x359))==x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x361 = -1;
	volatile int8_t x362 = INT8_MIN;
	int8_t x364 = INT8_MIN;
	int32_t t83 = 124809038;

	t83 = ((x361*(x362/x363))==x364);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = -1;
	uint64_t x366 = 1513858024313LLU;
	static uint8_t x367 = 25U;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t84 = -26;

	t84 = ((x365*(x366/x367))==x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x369 = UINT32_MAX;
	int16_t x371 = -10;
	int64_t x372 = -1LL;
	int32_t t85 = -644471;

	t85 = ((x369*(x370/x371))==x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x377 = 7355734157981164LL;
	int16_t x378 = INT16_MIN;
	volatile uint16_t x379 = UINT16_MAX;
	int32_t x380 = INT32_MIN;
	int32_t t86 = 1;

	t86 = ((x377*(x378/x379))==x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x382 = INT32_MIN;
	static int16_t x383 = INT16_MIN;
	volatile uint16_t x384 = 0U;

	t87 = ((x381*(x382/x383))==x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = INT16_MIN;
	static uint32_t x386 = 563325300U;
	int8_t x387 = -1;
	static int16_t x388 = INT16_MIN;

	t88 = ((x385*(x386/x387))==x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MAX;
	static int32_t t89 = 6067762;

	t89 = ((x389*(x390/x391))==x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = -365212782LL;
	int16_t x394 = INT16_MIN;
	static int16_t x395 = -3846;
	int16_t x396 = -1;
	int32_t t90 = 894;

	t90 = ((x393*(x394/x395))==x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MAX;
	volatile int32_t t91 = -67772;

	t91 = ((x397*(x398/x399))==x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = -1;
	int16_t x402 = -13782;
	volatile uint8_t x403 = UINT8_MAX;
	uint8_t x404 = UINT8_MAX;
	int32_t t92 = 1621;

	t92 = ((x401*(x402/x403))==x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x405 = -1;
	int32_t x406 = 61676;
	int64_t x407 = -1LL;
	int8_t x408 = -1;
	volatile int32_t t93 = -19294561;

	t93 = ((x405*(x406/x407))==x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x410 = 3645703315918LLU;
	static int64_t x411 = INT64_MAX;
	uint8_t x412 = UINT8_MAX;
	int32_t t94 = 0;

	t94 = ((x409*(x410/x411))==x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x414 = -1LL;
	uint32_t x415 = 319U;
	int64_t x416 = INT64_MIN;
	volatile int32_t t95 = -74;

	t95 = ((x413*(x414/x415))==x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x417 = 0;
	int64_t x418 = 531924892257211366LL;
	uint8_t x419 = 29U;
	static int64_t x420 = INT64_MAX;
	volatile int32_t t96 = 123;

	t96 = ((x417*(x418/x419))==x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x425 = -1LL;
	volatile int32_t x426 = INT32_MAX;
	volatile int64_t x427 = -1LL;
	uint8_t x428 = UINT8_MAX;
	int32_t t97 = -10;

	t97 = ((x425*(x426/x427))==x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x430 = 125LL;
	uint8_t x431 = 3U;
	uint16_t x432 = UINT16_MAX;
	int32_t t98 = -5204;

	t98 = ((x429*(x430/x431))==x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x433 = -1;
	int8_t x434 = 8;
	static volatile int64_t x435 = INT64_MIN;
	volatile int32_t t99 = -29;

	t99 = ((x433*(x434/x435))==x436);

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

