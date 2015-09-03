#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
static int16_t x8 = INT16_MAX;
volatile int64_t x12 = INT64_MIN;
static volatile int32_t x27 = INT32_MIN;
int64_t t7 = -5320068LL;
int16_t x33 = INT16_MIN;
uint8_t x35 = 23U;
static uint64_t x36 = 82819903491733006LLU;
uint64_t t8 = 629255LLU;
volatile uint64_t x44 = 3LLU;
static uint64_t t10 = 839565LLU;
int32_t x46 = -162;
uint32_t x52 = UINT32_MAX;
static uint32_t t12 = 27624U;
uint64_t x55 = 93LLU;
int32_t x57 = INT32_MIN;
static int8_t x60 = -1;
int32_t t14 = -82;
static uint64_t x61 = 61968LLU;
int16_t x64 = INT16_MIN;
uint8_t x65 = UINT8_MAX;
uint8_t x74 = UINT8_MAX;
volatile int32_t t21 = 1;
uint8_t x90 = 31U;
int32_t t22 = -159667;
volatile int64_t x94 = 7958831786898150LL;
int32_t x95 = -1;
uint32_t x97 = 2763U;
uint32_t x101 = 1736296854U;
uint8_t x105 = 4U;
volatile int32_t t29 = -21;
int32_t x122 = INT32_MIN;
volatile int32_t t31 = 8;
int64_t x134 = -7910LL;
static volatile int32_t t33 = -2674;
int32_t x141 = 0;
int16_t x143 = INT16_MIN;
static int64_t x146 = INT64_MAX;
uint64_t x165 = 15302131203LLU;
uint64_t x169 = UINT64_MAX;
int32_t x172 = INT32_MIN;
static volatile int64_t x177 = -1LL;
int8_t x179 = -1;
static int32_t t45 = 2073437;
int16_t x185 = INT16_MIN;
volatile uint8_t x186 = UINT8_MAX;
static int32_t x195 = INT32_MIN;
int64_t x198 = 63839758228792662LL;
int32_t t49 = 2992;
uint16_t x202 = UINT16_MAX;
int16_t x205 = -164;
static int8_t x206 = -38;
volatile int16_t x207 = -1;
volatile int16_t x217 = INT16_MIN;
static int64_t x222 = 5953251037752LL;
uint32_t x226 = UINT32_MAX;
int64_t x235 = 0LL;
volatile int16_t x237 = 3;
int32_t x240 = 1;
int64_t x243 = INT64_MIN;
volatile int32_t x256 = INT32_MIN;
static uint32_t x267 = 87510615U;
static int16_t x273 = INT16_MIN;
static uint64_t x276 = UINT64_MAX;
uint16_t x280 = 1U;
int32_t t69 = -246975;
uint32_t x283 = 0U;
volatile int32_t t70 = 14;
uint8_t x285 = 4U;
static int8_t x287 = -1;
static int32_t t72 = -336960;
static uint32_t x294 = 665U;
static volatile uint8_t x296 = 1U;
static int8_t x303 = 55;
int32_t t75 = 924;
int64_t x307 = -1LL;
int64_t x308 = -10497802035058314LL;
static int64_t x313 = INT64_MAX;
uint16_t x314 = UINT16_MAX;
volatile int32_t t78 = 1;
uint16_t x317 = 1455U;
int8_t x319 = 7;
volatile uint64_t x323 = UINT64_MAX;
uint32_t x329 = UINT32_MAX;
uint16_t x331 = 8933U;
volatile int32_t t83 = -108;
volatile int64_t x339 = INT64_MIN;
int8_t x340 = INT8_MIN;
static volatile uint8_t x342 = 14U;
int64_t x344 = INT64_MIN;
uint32_t x348 = 3174964U;
uint64_t t88 = 3LLU;
static int16_t x358 = INT16_MIN;
uint8_t x360 = 105U;
static volatile int64_t x370 = -2254638262271751LL;
int32_t t92 = -8955;
uint16_t x387 = UINT16_MAX;
int32_t t98 = -122837;
uint32_t x400 = 2547U;
volatile uint32_t t99 = 80878918U;


void f0(void) {
	int16_t x1 = -1;
	int64_t x2 = -560637304388LL;
	int32_t x4 = -192532;
	volatile int32_t t0 = -1796;

	t0 = ((x1==(x2^x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 12752U;
	volatile uint32_t x6 = 17242309U;
	volatile uint64_t x7 = 18127741078051LLU;
	int32_t t1 = -569;

	t1 = ((x5==(x6^x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 0;
	volatile int32_t x10 = INT32_MAX;
	int8_t x11 = INT8_MIN;
	int64_t t2 = 14951313LL;

	t2 = ((x9==(x10^x11))*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static int8_t x14 = INT8_MAX;
	uint16_t x15 = 3471U;
	volatile int32_t x16 = -955;
	volatile int32_t t3 = 12779;

	t3 = ((x13==(x14^x15))*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	int16_t x18 = 0;
	uint16_t x19 = UINT16_MAX;
	int64_t x20 = -1LL;
	volatile int64_t t4 = 19452693115536LL;

	t4 = ((x17==(x18^x19))*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int64_t x22 = -487145628LL;
	int8_t x23 = INT8_MIN;
	int64_t x24 = INT64_MIN;
	int64_t t5 = 790398287329935LL;

	t5 = ((x21==(x22^x23))*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int8_t x26 = 1;
	volatile int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 1175320;

	t6 = ((x25==(x26^x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 306U;
	int64_t x30 = 1453343689650419691LL;
	volatile int8_t x31 = INT8_MIN;
	static int64_t x32 = INT64_MIN;

	t7 = ((x29==(x30^x31))*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = 1373883445282657LL;

	t8 = ((x33==(x34^x35))*x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 5544LLU;
	uint8_t x38 = 12U;
	static uint8_t x39 = UINT8_MAX;
	uint64_t x40 = 0LLU;
	static volatile uint64_t t9 = 2779874LLU;

	t9 = ((x37==(x38^x39))*x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MAX;
	uint16_t x42 = UINT16_MAX;
	int64_t x43 = INT64_MIN;

	t10 = ((x41==(x42^x43))*x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = UINT64_MAX;
	volatile int64_t x47 = 5532100420LL;
	uint64_t x48 = 29145463416LLU;
	static volatile uint64_t t11 = 401198LLU;

	t11 = ((x45==(x46^x47))*x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 1;
	int8_t x50 = INT8_MIN;
	static volatile uint32_t x51 = 39U;

	t12 = ((x49==(x50^x51))*x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 10069U;
	int8_t x54 = -1;
	int32_t x56 = 606523639;
	static volatile int32_t t13 = -238902688;

	t13 = ((x53==(x54^x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = -1;
	static int64_t x59 = INT64_MAX;

	t14 = ((x57==(x58^x59))*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x62 = 1121145332LL;
	uint8_t x63 = UINT8_MAX;
	static int32_t t15 = 8;

	t15 = ((x61==(x62^x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 94825750U;
	int32_t x67 = INT32_MAX;
	uint32_t x68 = 4967827U;
	uint32_t t16 = 963203497U;

	t16 = ((x65==(x66^x67))*x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int32_t x70 = INT32_MIN;
	uint32_t x71 = UINT32_MAX;
	volatile uint64_t x72 = UINT64_MAX;
	volatile uint64_t t17 = 70510903798385675LLU;

	t17 = ((x69==(x70^x71))*x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = UINT32_MAX;
	int64_t x75 = 18964324436771LL;
	volatile uint16_t x76 = 109U;
	int32_t t18 = 10;

	t18 = ((x73==(x74^x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint8_t x78 = UINT8_MAX;
	volatile uint64_t x79 = 5LLU;
	volatile int64_t x80 = INT64_MAX;
	int64_t t19 = -478LL;

	t19 = ((x77==(x78^x79))*x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	uint8_t x82 = UINT8_MAX;
	static int64_t x83 = 1047LL;
	int64_t x84 = -1LL;
	int64_t t20 = -4224919844723LL;

	t20 = ((x81==(x82^x83))*x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	uint8_t x86 = 1U;
	uint64_t x87 = 8698467862728115LLU;
	int16_t x88 = -1;

	t21 = ((x85==(x86^x87))*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = 44U;
	uint64_t x91 = UINT64_MAX;
	uint8_t x92 = UINT8_MAX;

	t22 = ((x89==(x90^x91))*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	uint32_t x96 = UINT32_MAX;
	uint32_t t23 = 60943512U;

	t23 = ((x93==(x94^x95))*x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = 0;
	volatile int16_t x99 = INT16_MIN;
	static int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 496;

	t24 = ((x97==(x98^x99))*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = 151028232148411LL;
	uint16_t x103 = 27U;
	int8_t x104 = 0;
	int32_t t25 = 6;

	t25 = ((x101==(x102^x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x106 = 6;
	int16_t x107 = 3223;
	int64_t x108 = -1LL;
	int64_t t26 = -849217LL;

	t26 = ((x105==(x106^x107))*x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -1LL;
	static int64_t x110 = INT64_MIN;
	static volatile uint16_t x111 = UINT16_MAX;
	int8_t x112 = -1;
	volatile int32_t t27 = -7;

	t27 = ((x109==(x110^x111))*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 0;
	uint8_t x114 = UINT8_MAX;
	uint32_t x115 = 0U;
	static volatile int8_t x116 = INT8_MIN;
	int32_t t28 = -19281339;

	t28 = ((x113==(x114^x115))*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	uint32_t x118 = 7511U;
	uint8_t x119 = 0U;
	uint16_t x120 = 1995U;

	t29 = ((x117==(x118^x119))*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 22U;
	static uint8_t x123 = 6U;
	int64_t x124 = INT64_MAX;
	static int64_t t30 = -6LL;

	t30 = ((x121==(x122^x123))*x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	int8_t x126 = INT8_MAX;
	int32_t x127 = INT32_MIN;
	volatile int16_t x128 = INT16_MIN;

	t31 = ((x125==(x126^x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	volatile int64_t x130 = INT64_MIN;
	static int32_t x131 = INT32_MAX;
	uint8_t x132 = 1U;
	int32_t t32 = 613455;

	t32 = ((x129==(x130^x131))*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	volatile int32_t x135 = -5;
	int8_t x136 = INT8_MIN;

	t33 = ((x133==(x134^x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	volatile int64_t x138 = 379163201612210410LL;
	static int16_t x139 = INT16_MAX;
	static int16_t x140 = 4;
	volatile int32_t t34 = 184833611;

	t34 = ((x137==(x138^x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x142 = -13;
	int8_t x144 = 10;
	static volatile int32_t t35 = -1234;

	t35 = ((x141==(x142^x143))*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -75;
	int8_t x147 = -1;
	static uint8_t x148 = 5U;
	int32_t t36 = -634;

	t36 = ((x145==(x146^x147))*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	volatile int32_t x150 = -1;
	int32_t x151 = INT32_MIN;
	int32_t x152 = -1;
	int32_t t37 = -1;

	t37 = ((x149==(x150^x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 16U;
	static int8_t x154 = INT8_MAX;
	static volatile uint8_t x155 = 2U;
	int16_t x156 = 1;
	int32_t t38 = 6160484;

	t38 = ((x153==(x154^x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	volatile uint16_t x158 = 45U;
	int32_t x159 = -463049;
	volatile int64_t x160 = INT64_MAX;
	volatile int64_t t39 = 457077984LL;

	t39 = ((x157==(x158^x159))*x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	uint32_t x162 = UINT32_MAX;
	int8_t x163 = INT8_MAX;
	int64_t x164 = INT64_MIN;
	int64_t t40 = -42752034389LL;

	t40 = ((x161==(x162^x163))*x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 7U;
	uint32_t x167 = 931366574U;
	static int32_t x168 = INT32_MIN;
	int32_t t41 = -322848;

	t41 = ((x165==(x166^x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x170 = 750;
	volatile int16_t x171 = INT16_MIN;
	volatile int32_t t42 = -91;

	t42 = ((x169==(x170^x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = 1730U;
	int8_t x174 = -27;
	int16_t x175 = INT16_MIN;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t43 = 3066LLU;

	t43 = ((x173==(x174^x175))*x176);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = -1LL;
	volatile int8_t x180 = -1;
	volatile int32_t t44 = -12865;

	t44 = ((x177==(x178^x179))*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int16_t x182 = INT16_MAX;
	uint64_t x183 = 23312114LLU;
	int16_t x184 = INT16_MAX;

	t45 = ((x181==(x182^x183))*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x187 = -13528330760LL;
	int16_t x188 = -1;
	int32_t t46 = 14478028;

	t46 = ((x185==(x186^x187))*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -101468119323350226LL;
	int32_t x190 = 30173092;
	static int16_t x191 = INT16_MAX;
	uint32_t x192 = 1502318620U;
	uint32_t t47 = 2U;

	t47 = ((x189==(x190^x191))*x192);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MIN;
	int16_t x194 = INT16_MIN;
	uint8_t x196 = 1U;
	volatile int32_t t48 = 67378;

	t48 = ((x193==(x194^x195))*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = 0LL;
	uint32_t x199 = UINT32_MAX;
	uint8_t x200 = UINT8_MAX;

	t49 = ((x197==(x198^x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -2579;
	volatile int16_t x203 = INT16_MIN;
	volatile int32_t x204 = INT32_MAX;
	int32_t t50 = -13636;

	t50 = ((x201==(x202^x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x208 = 163919U;
	uint32_t t51 = 4U;

	t51 = ((x205==(x206^x207))*x208);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = 8;
	int64_t x210 = INT64_MIN;
	uint8_t x211 = UINT8_MAX;
	volatile int32_t x212 = INT32_MIN;
	int32_t t52 = -40566;

	t52 = ((x209==(x210^x211))*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	uint16_t x214 = 3U;
	int8_t x215 = 8;
	uint16_t x216 = 20U;
	volatile int32_t t53 = 192;

	t53 = ((x213==(x214^x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = UINT16_MAX;
	static uint64_t x219 = 11548914140LLU;
	int64_t x220 = INT64_MIN;
	int64_t t54 = 13012LL;

	t54 = ((x217==(x218^x219))*x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 1U;
	int64_t x223 = INT64_MIN;
	uint8_t x224 = 0U;
	volatile int32_t t55 = -63118345;

	t55 = ((x221==(x222^x223))*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x225 = 76409U;
	uint64_t x227 = UINT64_MAX;
	static int32_t x228 = -3324;
	static int32_t t56 = 3189;

	t56 = ((x225==(x226^x227))*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	volatile int8_t x230 = -1;
	int32_t x231 = -1;
	static int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 745747;

	t57 = ((x229==(x230^x231))*x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = -5;
	static uint8_t x234 = UINT8_MAX;
	static volatile int16_t x236 = INT16_MAX;
	volatile int32_t t58 = 254302;

	t58 = ((x233==(x234^x235))*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MIN;
	static int8_t x239 = -1;
	volatile int32_t t59 = 3546;

	t59 = ((x237==(x238^x239))*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 23U;
	int8_t x242 = -1;
	uint64_t x244 = 227990301093075710LLU;
	uint64_t t60 = 22LLU;

	t60 = ((x241==(x242^x243))*x244);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = 11U;
	uint16_t x246 = 9568U;
	volatile uint32_t x247 = 7U;
	static uint64_t x248 = 4862219944LLU;
	volatile uint64_t t61 = 106932214769350023LLU;

	t61 = ((x245==(x246^x247))*x248);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	volatile int8_t x250 = -36;
	uint32_t x251 = UINT32_MAX;
	volatile uint32_t x252 = UINT32_MAX;
	uint32_t t62 = 10856823U;

	t62 = ((x249==(x250^x251))*x252);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 14U;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -8;
	volatile int32_t t63 = 667;

	t63 = ((x253==(x254^x255))*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 4U;
	int16_t x258 = 126;
	uint64_t x259 = 17460748LLU;
	int64_t x260 = INT64_MIN;
	int64_t t64 = 23LL;

	t64 = ((x257==(x258^x259))*x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	uint64_t x262 = 6540528890LLU;
	volatile int64_t x263 = -1LL;
	uint8_t x264 = 1U;
	volatile int32_t t65 = 197995;

	t65 = ((x261==(x262^x263))*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 10U;
	int32_t x266 = INT32_MIN;
	volatile int64_t x268 = -1773421871116868463LL;
	static int64_t t66 = 4553LL;

	t66 = ((x265==(x266^x267))*x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 10754055734637382LLU;
	int64_t x270 = -248LL;
	volatile int32_t x271 = INT32_MIN;
	static int8_t x272 = -16;
	volatile int32_t t67 = 15434224;

	t67 = ((x269==(x270^x271))*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = 297309LL;
	volatile uint32_t x275 = UINT32_MAX;
	volatile uint64_t t68 = 139498873007863292LLU;

	t68 = ((x273==(x274^x275))*x276);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	int64_t x278 = -1LL;
	uint64_t x279 = UINT64_MAX;

	t69 = ((x277==(x278^x279))*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = INT32_MIN;
	static volatile int32_t x282 = -1;
	int8_t x284 = 0;

	t70 = ((x281==(x282^x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = INT16_MAX;
	uint32_t x288 = UINT32_MAX;
	static volatile uint32_t t71 = 44411918U;

	t71 = ((x285==(x286^x287))*x288);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	static int32_t x290 = INT32_MAX;
	uint32_t x291 = UINT32_MAX;
	int32_t x292 = 203;

	t72 = ((x289==(x290^x291))*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	uint32_t x295 = 15146717U;
	int32_t t73 = -32861252;

	t73 = ((x293==(x294^x295))*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	static int8_t x298 = 4;
	static volatile int32_t x299 = -1;
	int16_t x300 = INT16_MIN;
	volatile int32_t t74 = 46439;

	t74 = ((x297==(x298^x299))*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = 0;
	volatile int64_t x302 = -1LL;
	int16_t x304 = INT16_MAX;

	t75 = ((x301==(x302^x303))*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	uint32_t x306 = UINT32_MAX;
	int64_t t76 = 2LL;

	t76 = ((x305==(x306^x307))*x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = -1LL;
	int8_t x311 = -1;
	static volatile int32_t x312 = -1;
	int32_t t77 = 58901757;

	t77 = ((x309==(x310^x311))*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x315 = 846497235065449LLU;
	uint16_t x316 = UINT16_MAX;

	t78 = ((x313==(x314^x315))*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x318 = 700338U;
	uint32_t x320 = 115947U;
	static volatile uint32_t t79 = 113240171U;

	t79 = ((x317==(x318^x319))*x320);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -3;
	uint32_t x322 = UINT32_MAX;
	volatile int32_t x324 = INT32_MAX;
	int32_t t80 = -629;

	t80 = ((x321==(x322^x323))*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = INT8_MIN;
	static int64_t x326 = INT64_MIN;
	int16_t x327 = 0;
	int32_t x328 = INT32_MAX;
	int32_t t81 = -37233;

	t81 = ((x325==(x326^x327))*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MAX;
	int64_t x332 = -811463LL;
	int64_t t82 = -14232LL;

	t82 = ((x329==(x330^x331))*x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	uint16_t x336 = UINT16_MAX;

	t83 = ((x333==(x334^x335))*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int8_t x338 = INT8_MIN;
	int32_t t84 = 0;

	t84 = ((x337==(x338^x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 173;
	static volatile int32_t x343 = INT32_MIN;
	volatile int64_t t85 = 125931807579LL;

	t85 = ((x341==(x342^x343))*x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = -1;
	uint32_t x346 = UINT32_MAX;
	int64_t x347 = -1LL;
	volatile uint32_t t86 = 1U;

	t86 = ((x345==(x346^x347))*x348);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	uint32_t x350 = 0U;
	uint64_t x351 = 210LLU;
	int32_t x352 = -107868;
	volatile int32_t t87 = 0;

	t87 = ((x349==(x350^x351))*x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 18839748LL;
	int8_t x354 = INT8_MAX;
	int64_t x355 = INT64_MIN;
	static uint64_t x356 = UINT64_MAX;

	t88 = ((x353==(x354^x355))*x356);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 817588429LLU;
	int8_t x359 = INT8_MIN;
	int32_t t89 = 36887;

	t89 = ((x357==(x358^x359))*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 31302U;
	uint32_t x362 = UINT32_MAX;
	uint16_t x363 = UINT16_MAX;
	int16_t x364 = -1;
	int32_t t90 = 57;

	t90 = ((x361==(x362^x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 510328U;
	int32_t x366 = INT32_MAX;
	int16_t x367 = INT16_MAX;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 13911;

	t91 = ((x365==(x366^x367))*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	static uint64_t x371 = 374771749443489948LLU;
	uint8_t x372 = 8U;

	t92 = ((x369==(x370^x371))*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 2U;
	int8_t x374 = INT8_MAX;
	int16_t x375 = 1654;
	int64_t x376 = INT64_MIN;
	int64_t t93 = 1689395LL;

	t93 = ((x373==(x374^x375))*x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	static int32_t x378 = INT32_MAX;
	volatile int32_t x379 = 0;
	static volatile int16_t x380 = INT16_MAX;
	volatile int32_t t94 = 119888;

	t94 = ((x377==(x378^x379))*x380);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MIN;
	int64_t x383 = 24966956586944404LL;
	uint32_t x384 = 128U;
	uint32_t t95 = 95U;

	t95 = ((x381==(x382^x383))*x384);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x385 = 587LLU;
	int16_t x386 = INT16_MIN;
	uint32_t x388 = 360U;
	uint32_t t96 = 624665857U;

	t96 = ((x385==(x386^x387))*x388);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = -1LL;
	uint64_t x390 = 28804855352057LLU;
	volatile int16_t x391 = INT16_MAX;
	int64_t x392 = INT64_MIN;
	int64_t t97 = 6LL;

	t97 = ((x389==(x390^x391))*x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x393 = 633U;
	int32_t x394 = INT32_MAX;
	static int64_t x395 = -28009LL;
	int16_t x396 = INT16_MAX;

	t98 = ((x393==(x394^x395))*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	uint8_t x398 = 7U;
	static uint32_t x399 = 1057406U;

	t99 = ((x397==(x398^x399))*x400);

	if (t99 != 0U) { NG(); } else { ; }
	
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

