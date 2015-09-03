#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MIN;
volatile int32_t t2 = 108;
int32_t t3 = 17221;
static int64_t x24 = -11405605LL;
static volatile int32_t x26 = INT32_MIN;
int64_t x27 = -66986379103181LL;
volatile int16_t x29 = -1;
int8_t x32 = INT8_MAX;
static int64_t x38 = 764197043352LL;
int8_t x39 = INT8_MIN;
uint16_t x43 = UINT16_MAX;
static uint16_t x44 = 7764U;
volatile int32_t t9 = -53602222;
int32_t x47 = -1;
int32_t t11 = 1;
int32_t x55 = INT32_MIN;
uint16_t x60 = UINT16_MAX;
int32_t t14 = 508;
int32_t t15 = -24528268;
volatile int32_t t16 = 87555;
int64_t x87 = INT64_MIN;
int16_t x88 = -1;
int8_t x90 = INT8_MIN;
volatile int32_t t20 = -1;
volatile int32_t t21 = -16025627;
int64_t x109 = -1LL;
int8_t x123 = INT8_MIN;
uint16_t x125 = 339U;
int16_t x129 = INT16_MAX;
int32_t x131 = INT32_MAX;
volatile int32_t t30 = 106;
int32_t x140 = -1;
static uint32_t x142 = 377U;
int32_t x145 = INT32_MAX;
uint32_t x146 = 1927436101U;
volatile int32_t t33 = -1250476;
static int8_t x151 = INT8_MIN;
int64_t x153 = INT64_MAX;
int8_t x160 = 56;
int32_t t36 = -4295;
int32_t t39 = 851853;
uint16_t x174 = 5098U;
static uint16_t x176 = 7U;
volatile int32_t t41 = 3049594;
int32_t t43 = -531447278;
volatile uint8_t x193 = 36U;
volatile int64_t x195 = -1LL;
uint8_t x201 = UINT8_MAX;
int8_t x204 = -1;
int64_t x207 = 14LL;
volatile int32_t t47 = -24898808;
int64_t x215 = INT64_MAX;
uint16_t x222 = 102U;
int32_t t51 = 968;
uint32_t x228 = 28U;
int32_t t52 = 59740;
volatile int64_t x230 = -55847048759963008LL;
uint64_t x234 = UINT64_MAX;
static int16_t x236 = -1;
volatile uint64_t x244 = UINT64_MAX;
uint16_t x246 = UINT16_MAX;
static volatile int32_t t62 = -173469;
uint16_t x273 = 0U;
volatile uint8_t x274 = 2U;
volatile uint64_t x275 = UINT64_MAX;
static volatile int16_t x282 = -3;
volatile int8_t x283 = -1;
int32_t t65 = 14822;
volatile int64_t x285 = INT64_MIN;
volatile uint16_t x290 = UINT16_MAX;
volatile int32_t t69 = 32275;
volatile int32_t t71 = -25032;
int32_t t74 = 5001383;
int8_t x321 = -1;
volatile int32_t t75 = 50739;
volatile uint64_t x327 = UINT64_MAX;
int8_t x328 = INT8_MIN;
uint16_t x329 = 3398U;
static int32_t x342 = 909187399;
int16_t x344 = -442;
static volatile int64_t x347 = -8LL;
volatile int32_t t82 = 106693556;
int8_t x354 = -1;
static int32_t t84 = -105663;
int8_t x362 = 2;
static int32_t t85 = 1;
volatile int32_t t86 = -157;
int32_t t88 = -28195079;
volatile int64_t x378 = 16133155LL;
int16_t x380 = INT16_MIN;
int32_t x384 = -1;
volatile uint8_t x389 = 22U;
uint64_t x392 = 213315996545LLU;
uint16_t x398 = UINT16_MAX;
int16_t x399 = INT16_MIN;
uint16_t x400 = 452U;
volatile int32_t x402 = INT32_MIN;
int16_t x403 = -20;
static int8_t x406 = INT8_MAX;
int32_t t96 = 113337285;
int8_t x413 = INT8_MIN;
static int32_t t99 = 272726564;


void f0(void) {
	int16_t x1 = 18;
	volatile int64_t x2 = -1LL;
	static int32_t x4 = INT32_MIN;
	int32_t t0 = -2053160;

	t0 = ((x1|(x2/x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint16_t x6 = UINT16_MAX;
	static uint64_t x7 = 29799LLU;
	int8_t x8 = INT8_MAX;
	static int32_t t1 = -1254;

	t1 = ((x5|(x6/x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	int64_t x10 = -249140LL;
	static int64_t x11 = -126694888133131240LL;
	static uint32_t x12 = 39349U;

	t2 = ((x9|(x10/x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 72U;
	int64_t x14 = -456653761LL;
	int64_t x15 = INT64_MIN;
	int32_t x16 = -1;

	t3 = ((x13|(x14/x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -108;
	static int8_t x18 = 1;
	static uint64_t x19 = UINT64_MAX;
	int16_t x20 = INT16_MAX;
	static int32_t t4 = -1523956;

	t4 = ((x17|(x18/x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int32_t x22 = -1;
	int32_t x23 = INT32_MIN;
	static volatile int32_t t5 = 108516402;

	t5 = ((x21|(x22/x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = -40;

	t6 = ((x25|(x26/x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x30 = 3868U;
	volatile int16_t x31 = 575;
	volatile int32_t t7 = 9763;

	t7 = ((x29|(x30/x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	static volatile uint64_t x40 = UINT64_MAX;
	volatile int32_t t8 = -446999992;

	t8 = ((x37|(x38/x39))<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x41 = 4498U;
	volatile uint64_t x42 = UINT64_MAX;

	t9 = ((x41|(x42/x43))<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x45 = UINT32_MAX;
	static int16_t x46 = -4527;
	static volatile int64_t x48 = INT64_MAX;
	int32_t t10 = -15533;

	t10 = ((x45|(x46/x47))<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = -1;
	uint8_t x51 = 107U;
	int64_t x52 = INT64_MIN;

	t11 = ((x49|(x50/x51))<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -9;
	uint16_t x54 = UINT16_MAX;
	static volatile int16_t x56 = INT16_MIN;
	static int32_t t12 = 78;

	t12 = ((x53|(x54/x55))<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MAX;
	static int32_t x58 = -1;
	int64_t x59 = 451902050LL;
	volatile int32_t t13 = -413;

	t13 = ((x57|(x58/x59))<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x61 = UINT8_MAX;
	static int8_t x62 = INT8_MAX;
	uint16_t x63 = 4U;
	int8_t x64 = -1;

	t14 = ((x61|(x62/x63))<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x65 = 50U;
	int8_t x66 = INT8_MAX;
	uint8_t x67 = 27U;
	uint16_t x68 = 14U;

	t15 = ((x65|(x66/x67))<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	static int16_t x70 = INT16_MAX;
	static int32_t x71 = INT32_MAX;
	int32_t x72 = -29;

	t16 = ((x69|(x70/x71))<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 32517131U;
	volatile int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MAX;
	static int32_t x76 = INT32_MIN;
	int32_t t17 = -19665750;

	t17 = ((x73|(x74/x75))<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MAX;
	static int32_t x78 = INT32_MAX;
	uint32_t x79 = 13U;
	static int32_t x80 = 31539962;
	int32_t t18 = -863;

	t18 = ((x77|(x78/x79))<x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = 41;
	int16_t x86 = -2178;
	int32_t t19 = 4377;

	t19 = ((x85|(x86/x87))<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 12U;
	int32_t x91 = INT32_MAX;
	volatile int8_t x92 = -36;

	t20 = ((x89|(x90/x91))<x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MAX;
	int8_t x94 = INT8_MAX;
	volatile int32_t x95 = -498916;
	uint32_t x96 = UINT32_MAX;

	t21 = ((x93|(x94/x95))<x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MAX;
	volatile uint32_t x98 = UINT32_MAX;
	static int8_t x99 = 15;
	static int64_t x100 = -1LL;
	volatile int32_t t22 = 9;

	t22 = ((x97|(x98/x99))<x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = 3U;
	uint16_t x102 = 2U;
	uint8_t x103 = 1U;
	int64_t x104 = INT64_MIN;
	volatile int32_t t23 = -202;

	t23 = ((x101|(x102/x103))<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x110 = -4345;
	int64_t x111 = INT64_MAX;
	static int64_t x112 = -1LL;
	int32_t t24 = 30742;

	t24 = ((x109|(x110/x111))<x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MAX;
	int16_t x114 = INT16_MIN;
	static uint32_t x115 = 607994U;
	static uint64_t x116 = UINT64_MAX;
	volatile int32_t t25 = -110083;

	t25 = ((x113|(x114/x115))<x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -1;
	static uint16_t x118 = 126U;
	int32_t x119 = INT32_MAX;
	volatile int32_t x120 = 5095;
	int32_t t26 = 1;

	t26 = ((x117|(x118/x119))<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	uint32_t x122 = 11312834U;
	int32_t x124 = INT32_MIN;
	int32_t t27 = -91;

	t27 = ((x121|(x122/x123))<x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MAX;
	int32_t x128 = -6;
	int32_t t28 = -42340779;

	t28 = ((x125|(x126/x127))<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x130 = -13;
	int64_t x132 = -13076LL;
	int32_t t29 = -511459;

	t29 = ((x129|(x130/x131))<x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MAX;
	volatile int64_t x134 = INT64_MAX;
	uint8_t x135 = UINT8_MAX;
	volatile int64_t x136 = -1LL;

	t30 = ((x133|(x134/x135))<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = UINT64_MAX;
	int32_t x138 = INT32_MAX;
	volatile int16_t x139 = -27;
	volatile int32_t t31 = -83637;

	t31 = ((x137|(x138/x139))<x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x141 = INT64_MIN;
	int8_t x143 = INT8_MIN;
	volatile uint64_t x144 = 8900017446374444391LLU;
	static int32_t t32 = -715405485;

	t32 = ((x141|(x142/x143))<x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x147 = -1229;
	uint16_t x148 = 15850U;

	t33 = ((x145|(x146/x147))<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = UINT32_MAX;
	static uint64_t x150 = UINT64_MAX;
	int64_t x152 = INT64_MAX;
	int32_t t34 = 5312;

	t34 = ((x149|(x150/x151))<x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x154 = INT16_MIN;
	int64_t x155 = INT64_MIN;
	static int64_t x156 = INT64_MIN;
	volatile int32_t t35 = 156662;

	t35 = ((x153|(x154/x155))<x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = INT32_MIN;

	t36 = ((x157|(x158/x159))<x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = 19688062U;
	static uint16_t x162 = 5U;
	uint64_t x163 = 177LLU;
	int32_t x164 = -1;
	volatile int32_t t37 = -9888;

	t37 = ((x161|(x162/x163))<x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MIN;
	static int64_t x166 = -1LL;
	int32_t x167 = INT32_MIN;
	int64_t x168 = INT64_MIN;
	int32_t t38 = 52;

	t38 = ((x165|(x166/x167))<x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = UINT16_MAX;
	static volatile uint16_t x170 = 21U;
	int64_t x171 = INT64_MIN;
	static volatile int64_t x172 = INT64_MIN;

	t39 = ((x169|(x170/x171))<x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = 14369;
	int64_t x175 = INT64_MIN;
	int32_t t40 = 957768;

	t40 = ((x173|(x174/x175))<x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = -1;
	volatile uint8_t x178 = 14U;
	int64_t x179 = -1LL;
	uint32_t x180 = UINT32_MAX;

	t41 = ((x177|(x178/x179))<x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = 12U;
	static int8_t x182 = INT8_MIN;
	int8_t x183 = -37;
	static uint8_t x184 = UINT8_MAX;
	volatile int32_t t42 = -95739177;

	t42 = ((x181|(x182/x183))<x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	volatile int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MAX;
	int64_t x188 = -3LL;

	t43 = ((x185|(x186/x187))<x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	volatile uint16_t x190 = UINT16_MAX;
	static volatile int64_t x191 = INT64_MAX;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t44 = -626;

	t44 = ((x189|(x190/x191))<x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x194 = UINT8_MAX;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t45 = 6;

	t45 = ((x193|(x194/x195))<x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x202 = INT8_MIN;
	static int64_t x203 = -2835624528LL;
	volatile int32_t t46 = 0;

	t46 = ((x201|(x202/x203))<x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = -1LL;
	int64_t x206 = INT64_MIN;
	int8_t x208 = INT8_MAX;

	t47 = ((x205|(x206/x207))<x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x209 = 892U;
	static uint64_t x210 = UINT64_MAX;
	int8_t x211 = -1;
	int8_t x212 = 13;
	volatile int32_t t48 = -449150333;

	t48 = ((x209|(x210/x211))<x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x213 = 29U;
	static int64_t x214 = INT64_MAX;
	static volatile uint8_t x216 = 2U;
	static int32_t t49 = -168801;

	t49 = ((x213|(x214/x215))<x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = -1;
	static int32_t x218 = INT32_MAX;
	static volatile uint32_t x219 = 1700334U;
	int32_t x220 = INT32_MIN;
	int32_t t50 = 7;

	t50 = ((x217|(x218/x219))<x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x221 = INT8_MAX;
	volatile uint32_t x223 = 5945575U;
	int8_t x224 = -29;

	t51 = ((x221|(x222/x223))<x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = INT16_MAX;
	static int8_t x226 = 0;
	static int32_t x227 = INT32_MIN;

	t52 = ((x225|(x226/x227))<x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x229 = 1U;
	uint32_t x231 = 1384U;
	uint16_t x232 = 404U;
	volatile int32_t t53 = 281061089;

	t53 = ((x229|(x230/x231))<x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = -1;
	static uint64_t x235 = 1LLU;
	volatile int32_t t54 = 5;

	t54 = ((x233|(x234/x235))<x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = -1;
	int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	int32_t t55 = 9876;

	t55 = ((x241|(x242/x243))<x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x245 = UINT32_MAX;
	static int8_t x247 = INT8_MIN;
	static uint16_t x248 = UINT16_MAX;
	int32_t t56 = -65022;

	t56 = ((x245|(x246/x247))<x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = 2;
	volatile int64_t x250 = -8548984014938704LL;
	volatile int8_t x251 = INT8_MIN;
	uint16_t x252 = UINT16_MAX;
	int32_t t57 = -1;

	t57 = ((x249|(x250/x251))<x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = -1;
	int64_t x255 = INT64_MIN;
	uint16_t x256 = 147U;
	static volatile int32_t t58 = -109;

	t58 = ((x253|(x254/x255))<x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = INT64_MAX;
	volatile uint8_t x258 = UINT8_MAX;
	uint8_t x259 = 53U;
	int8_t x260 = INT8_MAX;
	volatile int32_t t59 = 0;

	t59 = ((x257|(x258/x259))<x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = INT8_MIN;
	int8_t x262 = 43;
	static uint32_t x263 = 289827569U;
	static int8_t x264 = 3;
	volatile int32_t t60 = 30;

	t60 = ((x261|(x262/x263))<x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = 7;
	int32_t x266 = INT32_MAX;
	static int8_t x267 = -23;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t61 = -4;

	t61 = ((x265|(x266/x267))<x268);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = 15U;
	static volatile uint64_t x270 = 370LLU;
	volatile uint8_t x271 = UINT8_MAX;
	static int8_t x272 = 6;

	t62 = ((x269|(x270/x271))<x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x276 = INT32_MAX;
	volatile int32_t t63 = 28039;

	t63 = ((x273|(x274/x275))<x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x277 = UINT64_MAX;
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = -1;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t64 = -883526464;

	t64 = ((x277|(x278/x279))<x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = INT64_MIN;
	int32_t x284 = 6462459;

	t65 = ((x281|(x282/x283))<x284);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x286 = UINT8_MAX;
	volatile uint64_t x287 = UINT64_MAX;
	int16_t x288 = INT16_MAX;
	volatile int32_t t66 = 5;

	t66 = ((x285|(x286/x287))<x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x289 = -1;
	int64_t x291 = INT64_MAX;
	uint64_t x292 = 52818682527279LLU;
	int32_t t67 = 1;

	t67 = ((x289|(x290/x291))<x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x293 = -1;
	static uint32_t x294 = UINT32_MAX;
	int32_t x295 = -1;
	int32_t x296 = INT32_MAX;
	static int32_t t68 = 1;

	t68 = ((x293|(x294/x295))<x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x297 = 26443U;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = INT32_MIN;
	int8_t x300 = 0;

	t69 = ((x297|(x298/x299))<x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = 376;
	volatile int8_t x302 = INT8_MAX;
	volatile uint8_t x303 = 1U;
	static uint16_t x304 = 1U;
	int32_t t70 = 228;

	t70 = ((x301|(x302/x303))<x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MAX;
	int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MAX;

	t71 = ((x305|(x306/x307))<x308);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x309 = -1;
	uint8_t x310 = UINT8_MAX;
	uint64_t x311 = 32933LLU;
	int32_t x312 = INT32_MIN;
	int32_t t72 = 10475846;

	t72 = ((x309|(x310/x311))<x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = 115;
	uint16_t x314 = 3238U;
	volatile int64_t x315 = INT64_MIN;
	int32_t x316 = 706;
	volatile int32_t t73 = -305041;

	t73 = ((x313|(x314/x315))<x316);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = INT8_MIN;
	uint8_t x318 = UINT8_MAX;
	uint64_t x319 = UINT64_MAX;
	volatile uint32_t x320 = 79U;

	t74 = ((x317|(x318/x319))<x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x322 = INT64_MIN;
	static int32_t x323 = INT32_MIN;
	volatile int16_t x324 = 1;

	t75 = ((x321|(x322/x323))<x324);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = 0;
	int32_t t76 = 0;

	t76 = ((x325|(x326/x327))<x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x330 = INT32_MIN;
	volatile uint32_t x331 = 1U;
	int64_t x332 = -1LL;
	volatile int32_t t77 = -10;

	t77 = ((x329|(x330/x331))<x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = 131950958LL;
	uint32_t x334 = 3949980U;
	volatile int64_t x335 = -1LL;
	static int8_t x336 = 1;
	static int32_t t78 = -61432203;

	t78 = ((x333|(x334/x335))<x336);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x337 = 59881LLU;
	uint64_t x338 = 133527056LLU;
	int16_t x339 = INT16_MIN;
	int32_t x340 = 776;
	int32_t t79 = -1216784;

	t79 = ((x337|(x338/x339))<x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = -109868;
	uint8_t x343 = UINT8_MAX;
	int32_t t80 = -13357;

	t80 = ((x341|(x342/x343))<x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = -1;
	int8_t x346 = -1;
	static uint64_t x348 = UINT64_MAX;
	volatile int32_t t81 = -95711;

	t81 = ((x345|(x346/x347))<x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x349 = 10U;
	int8_t x350 = INT8_MAX;
	int16_t x351 = INT16_MIN;
	static volatile int32_t x352 = INT32_MIN;

	t82 = ((x349|(x350/x351))<x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x353 = 1007386241LLU;
	uint64_t x355 = 6LLU;
	int32_t x356 = -1;
	volatile int32_t t83 = -63850648;

	t83 = ((x353|(x354/x355))<x356);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x357 = 2U;
	static int32_t x358 = -240;
	volatile uint16_t x359 = UINT16_MAX;
	uint16_t x360 = UINT16_MAX;

	t84 = ((x357|(x358/x359))<x360);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = 12264;
	uint32_t x363 = 249758344U;
	int32_t x364 = INT32_MIN;

	t85 = ((x361|(x362/x363))<x364);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = INT8_MIN;
	int64_t x366 = INT64_MIN;
	uint64_t x367 = 2444282430025063LLU;
	int64_t x368 = 3200291039295LL;

	t86 = ((x365|(x366/x367))<x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x369 = 307U;
	int16_t x370 = INT16_MIN;
	static volatile int8_t x371 = INT8_MAX;
	volatile int32_t x372 = 6043621;
	int32_t t87 = 493;

	t87 = ((x369|(x370/x371))<x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x373 = UINT32_MAX;
	volatile int8_t x374 = 8;
	uint8_t x375 = 1U;
	static int8_t x376 = INT8_MIN;

	t88 = ((x373|(x374/x375))<x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = INT8_MIN;
	int16_t x379 = -1;
	int32_t t89 = 7;

	t89 = ((x377|(x378/x379))<x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x381 = 85U;
	volatile uint8_t x382 = UINT8_MAX;
	uint8_t x383 = 25U;
	int32_t t90 = -721;

	t90 = ((x381|(x382/x383))<x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = -5846;
	int8_t x386 = -1;
	int64_t x387 = INT64_MIN;
	static uint32_t x388 = 2136371U;
	static int32_t t91 = -3;

	t91 = ((x385|(x386/x387))<x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x390 = 71096U;
	int64_t x391 = -40322660244LL;
	volatile int32_t t92 = -1;

	t92 = ((x389|(x390/x391))<x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x393 = 89U;
	int32_t x394 = INT32_MIN;
	int64_t x395 = INT64_MIN;
	static int32_t x396 = -1;
	int32_t t93 = 40326;

	t93 = ((x393|(x394/x395))<x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x397 = 0U;
	int32_t t94 = -37;

	t94 = ((x397|(x398/x399))<x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = 161U;
	int16_t x404 = INT16_MAX;
	int32_t t95 = 173253322;

	t95 = ((x401|(x402/x403))<x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x405 = 0;
	volatile uint32_t x407 = 218U;
	int64_t x408 = 241107835665527LL;

	t96 = ((x405|(x406/x407))<x408);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = INT8_MAX;
	uint16_t x410 = 16310U;
	uint32_t x411 = UINT32_MAX;
	int8_t x412 = -24;
	int32_t t97 = 20681;

	t97 = ((x409|(x410/x411))<x412);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x414 = UINT64_MAX;
	int8_t x415 = INT8_MIN;
	uint64_t x416 = UINT64_MAX;
	static int32_t t98 = 12;

	t98 = ((x413|(x414/x415))<x416);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = INT8_MAX;
	int16_t x418 = INT16_MIN;
	volatile int32_t x419 = INT32_MIN;
	uint32_t x420 = 108686U;

	t99 = ((x417|(x418/x419))<x420);

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

