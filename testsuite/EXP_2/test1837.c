#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
int8_t x5 = 7;
uint32_t t1 = 21869421U;
volatile int8_t x10 = INT8_MIN;
int64_t x11 = INT64_MAX;
static int32_t x13 = -1;
volatile int8_t x15 = -1;
uint32_t x19 = 236U;
int32_t x20 = INT32_MIN;
uint16_t x24 = 29U;
static uint64_t x27 = UINT64_MAX;
volatile uint64_t t6 = 4763678258LLU;
uint16_t x36 = UINT16_MAX;
uint64_t x44 = 159587909328524LLU;
int16_t x49 = INT16_MIN;
volatile int32_t t11 = -793450015;
static uint64_t x54 = UINT64_MAX;
static int32_t x61 = -1;
uint64_t x62 = UINT64_MAX;
static volatile int32_t t15 = 3;
uint8_t x69 = UINT8_MAX;
volatile int32_t x71 = 4762910;
int64_t x74 = -1LL;
uint8_t x76 = UINT8_MAX;
uint16_t x79 = UINT16_MAX;
static int64_t x81 = INT64_MIN;
volatile int32_t x83 = INT32_MIN;
volatile int32_t x84 = INT32_MIN;
volatile int16_t x89 = INT16_MIN;
static int8_t x94 = INT8_MIN;
uint8_t x95 = UINT8_MAX;
uint16_t x99 = 243U;
int64_t x100 = -1LL;
volatile int64_t x103 = INT64_MAX;
int16_t x104 = INT16_MIN;
int64_t t24 = -25735246LL;
uint8_t x105 = 1U;
uint64_t x109 = 59372LLU;
int32_t x110 = INT32_MAX;
volatile int32_t x113 = INT32_MIN;
int32_t x114 = INT32_MIN;
int16_t x115 = -14;
uint32_t x119 = 1711873999U;
static volatile int64_t t29 = 1480629357613LL;
static int8_t x131 = INT8_MAX;
uint64_t t31 = 10370778LLU;
int32_t x140 = -1;
static int16_t x142 = 654;
int16_t x143 = INT16_MIN;
int8_t x145 = 28;
int64_t x149 = INT64_MIN;
volatile int8_t x151 = 1;
int64_t t36 = 1905852694LL;
static int32_t x154 = 10389637;
uint8_t x155 = UINT8_MAX;
int16_t x156 = -66;
static uint32_t x157 = UINT32_MAX;
static int16_t x177 = INT16_MIN;
uint64_t x180 = 55012160665531LLU;
static int8_t x190 = -1;
uint64_t t45 = 549499253LLU;
uint32_t x193 = 4U;
uint32_t t46 = 252082451U;
int8_t x200 = -1;
static int64_t x204 = -16536735721773421LL;
static volatile int64_t t48 = -3LL;
int8_t x210 = 12;
int64_t x212 = -14775858LL;
volatile int16_t x215 = INT16_MIN;
static volatile uint32_t x216 = UINT32_MAX;
static int64_t x217 = INT64_MIN;
volatile int64_t x218 = INT64_MIN;
volatile uint32_t t54 = 4U;
int8_t x239 = -18;
uint64_t x240 = UINT64_MAX;
volatile uint64_t t57 = 16736918975783713LLU;
int64_t x254 = 17187005054LL;
int16_t x256 = 2853;
volatile int64_t t65 = -42169974455546256LL;
volatile int32_t x282 = -143615;
volatile int64_t t66 = -165536LL;
int64_t x285 = -1LL;
volatile int64_t x290 = -1LL;
int8_t x296 = INT8_MAX;
uint32_t x306 = 5U;
int32_t x307 = INT32_MIN;
static int16_t x313 = INT16_MIN;
int32_t x315 = -376410690;
volatile int64_t x317 = -44144546LL;
int32_t x320 = INT32_MIN;
static int64_t x323 = INT64_MIN;
volatile int32_t t76 = 43431;
int32_t x332 = 710;
uint64_t x333 = 392544139419LLU;
static int16_t x345 = INT16_MIN;
int32_t x349 = -1;
static uint16_t x350 = UINT16_MAX;
uint64_t x359 = UINT64_MAX;
int64_t x362 = 6675761734557984LL;
static volatile uint8_t x364 = 7U;
static volatile int64_t t85 = 18LL;
volatile int64_t x374 = -1LL;
uint8_t x389 = 62U;
volatile int32_t x391 = 7;
static uint32_t x394 = 827U;
uint8_t x399 = UINT8_MAX;
static uint16_t x400 = 78U;
int8_t x402 = 50;
int64_t x406 = -26116LL;
static int32_t x410 = -840519223;
int32_t x413 = 945276;
uint64_t x420 = 25001842LLU;


void f0(void) {
	int16_t x2 = INT16_MIN;
	static uint16_t x3 = 209U;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = 3428;

	t0 = ((x1|(x2&x3))/x4);

	if (t0 != 256) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x6 = 5940U;
	uint16_t x7 = UINT16_MAX;
	int8_t x8 = -1;

	t1 = ((x5|(x6&x7))/x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	int8_t x12 = -4;
	volatile int64_t t2 = 237667LL;

	t2 = ((x9|(x10&x11))/x12);

	if (t2 != -2305843009213693951LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x14 = UINT8_MAX;
	volatile int16_t x16 = INT16_MIN;
	int32_t t3 = 52808;

	t3 = ((x13|(x14&x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 5;
	uint8_t x18 = 27U;
	volatile uint32_t t4 = 3934U;

	t4 = ((x17|(x18&x19))/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	int32_t x22 = INT32_MIN;
	volatile int16_t x23 = INT16_MIN;
	static int32_t t5 = 7620664;

	t5 = ((x21|(x22&x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static uint8_t x26 = 0U;
	static volatile uint32_t x28 = UINT32_MAX;

	t6 = ((x25|(x26&x27))/x28);

	if (t6 != 4294967296LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 678059LL;
	volatile uint8_t x30 = 1U;
	uint16_t x31 = 22U;
	int16_t x32 = -1;
	volatile int64_t t7 = -10392659855LL;

	t7 = ((x29|(x30&x31))/x32);

	if (t7 != -678059LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 46U;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = -14;
	volatile uint32_t t8 = 0U;

	t8 = ((x33|(x34&x35))/x36);

	if (t8 != 65536U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x41 = UINT16_MAX;
	int16_t x42 = 36;
	int32_t x43 = INT32_MAX;
	volatile uint64_t t9 = 205561802025488647LLU;

	t9 = ((x41|(x42&x43))/x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	static int16_t x46 = INT16_MIN;
	uint64_t x47 = 2025412532110LLU;
	int16_t x48 = INT16_MAX;
	volatile uint64_t t10 = 47078LLU;

	t10 = ((x45|(x46&x47))/x48);

	if (t10 != 61812572LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = INT32_MIN;
	int16_t x51 = INT16_MAX;
	int32_t x52 = INT32_MAX;

	t11 = ((x49|(x50&x51))/x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 510171;
	volatile int8_t x55 = INT8_MAX;
	int16_t x56 = INT16_MIN;
	uint64_t t12 = 100849LLU;

	t12 = ((x53|(x54&x55))/x56);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 13U;
	int32_t x58 = -1;
	volatile int8_t x59 = -1;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t13 = -16020728;

	t13 = ((x57|(x58&x59))/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = INT64_MIN;
	static volatile uint64_t t14 = 8245439028612LLU;

	t14 = ((x61|(x62&x63))/x64);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 28U;
	int16_t x66 = -1;
	int16_t x67 = INT16_MIN;
	uint8_t x68 = UINT8_MAX;

	t15 = ((x65|(x66&x67))/x68);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = 12881007587LL;
	int16_t x72 = INT16_MIN;
	int64_t t16 = 17966769756LL;

	t16 = ((x69|(x70&x71))/x72);

	if (t16 != -129LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MIN;
	int16_t x75 = -334;
	int64_t t17 = 13281LL;

	t17 = ((x73|(x74&x75))/x76);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 12U;
	static int64_t x78 = -1LL;
	uint32_t x80 = 154U;
	static volatile int64_t t18 = 2747LL;

	t18 = ((x77|(x78&x79))/x80);

	if (t18 != 425LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x82 = UINT32_MAX;
	static int64_t t19 = -2062451085761LL;

	t19 = ((x81|(x82&x83))/x84);

	if (t19 != 4294967295LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = 5;
	uint8_t x86 = UINT8_MAX;
	int32_t x87 = 995630077;
	int16_t x88 = INT16_MIN;
	static int32_t t20 = 7076444;

	t20 = ((x85|(x86&x87))/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x90 = UINT64_MAX;
	uint16_t x91 = UINT16_MAX;
	int16_t x92 = INT16_MIN;
	uint64_t t21 = 552850731LLU;

	t21 = ((x89|(x90&x91))/x92);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x93 = 13U;
	static int16_t x96 = INT16_MIN;
	int32_t t22 = 23045919;

	t22 = ((x93|(x94&x95))/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -1;
	int16_t x98 = -1;
	static volatile int64_t t23 = -63952349LL;

	t23 = ((x97|(x98&x99))/x100);

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x101 = -14660331682727161LL;
	uint16_t x102 = UINT16_MAX;

	t24 = ((x101|(x102&x103))/x104);

	if (t24 != 447397817466LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = INT16_MIN;
	int16_t x107 = INT16_MIN;
	volatile int32_t x108 = 1044842;
	int32_t t25 = -3;

	t25 = ((x105|(x106&x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x111 = 169U;
	static int64_t x112 = -1LL;
	uint64_t t26 = 2517629287974LLU;

	t26 = ((x109|(x110&x111))/x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x116 = UINT64_MAX;
	uint64_t t27 = 10059394732925LLU;

	t27 = ((x113|(x114&x115))/x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	static uint64_t x118 = 51469882LLU;
	int64_t x120 = INT64_MAX;
	volatile uint64_t t28 = 4LLU;

	t28 = ((x117|(x118&x119))/x120);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	uint16_t x122 = UINT16_MAX;
	uint16_t x123 = UINT16_MAX;
	static int16_t x124 = -7;

	t29 = ((x121|(x122&x123))/x124);

	if (t29 != 1317624576693530039LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -1;
	static int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MIN;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t30 = -1;

	t30 = ((x125|(x126&x127))/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = UINT64_MAX;
	uint64_t x130 = 8276398383286147LLU;
	int8_t x132 = 6;

	t31 = ((x129|(x130&x131))/x132);

	if (t31 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = -1499;
	static uint8_t x134 = UINT8_MAX;
	int32_t x135 = INT32_MAX;
	int16_t x136 = INT16_MIN;
	int32_t t32 = -8230;

	t32 = ((x133|(x134&x135))/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	static volatile int32_t x138 = INT32_MIN;
	static int64_t x139 = 127172791340LL;
	int64_t t33 = -33771LL;

	t33 = ((x137|(x138&x139))/x140);

	if (t33 != 32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x141 = INT32_MIN;
	uint32_t x144 = UINT32_MAX;
	static volatile uint32_t t34 = 176U;

	t34 = ((x141|(x142&x143))/x144);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x146 = 156828793LL;
	int16_t x147 = -1;
	volatile int16_t x148 = INT16_MAX;
	static int64_t t35 = -188175798070926977LL;

	t35 = ((x145|(x146&x147))/x148);

	if (t35 != 4786LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = -54;
	int8_t x152 = INT8_MIN;

	t36 = ((x149|(x150&x151))/x152);

	if (t36 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x153 = INT64_MAX;
	volatile int64_t t37 = 4437981392LL;

	t37 = ((x153|(x154&x155))/x156);

	if (t37 != -139748061164466300LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x158 = 30996067199027710LLU;
	static int16_t x159 = INT16_MAX;
	volatile int16_t x160 = INT16_MAX;
	uint64_t t38 = 1031960LLU;

	t38 = ((x157|(x158&x159))/x160);

	if (t38 != 131076LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x161 = 8U;
	static int16_t x162 = INT16_MAX;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = INT8_MIN;
	uint64_t t39 = 6077809LLU;

	t39 = ((x161|(x162&x163))/x164);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -687LL;
	int64_t x166 = -2085676657LL;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = 1;
	uint64_t t40 = 864042160559368570LLU;

	t40 = ((x165|(x166&x167))/x168);

	if (t40 != 18446744073709551071LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MIN;
	static int8_t x175 = INT8_MIN;
	int64_t x176 = INT64_MIN;
	volatile int64_t t41 = 2128958234LL;

	t41 = ((x173|(x174&x175))/x176);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x178 = UINT8_MAX;
	uint64_t x179 = 136654123446LLU;
	volatile uint64_t t42 = 2188LLU;

	t42 = ((x177|(x178&x179))/x180);

	if (t42 != 335321LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = INT64_MIN;
	int32_t x182 = -1;
	int64_t x183 = -1LL;
	int32_t x184 = -1;
	static volatile int64_t t43 = -57LL;

	t43 = ((x181|(x182&x183))/x184);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x185 = INT16_MIN;
	volatile int16_t x186 = INT16_MIN;
	int16_t x187 = -1;
	int8_t x188 = INT8_MAX;
	volatile int32_t t44 = 15781;

	t44 = ((x185|(x186&x187))/x188);

	if (t44 != -258) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = UINT64_MAX;
	static uint32_t x191 = 17209881U;
	volatile int8_t x192 = INT8_MAX;

	t45 = ((x189|(x190&x191))/x192);

	if (t45 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x194 = 4005;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;

	t46 = ((x193|(x194&x195))/x196);

	if (t46 != 15U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	volatile int8_t x198 = INT8_MIN;
	int32_t x199 = -102670;
	volatile int32_t t47 = 1440;

	t47 = ((x197|(x198&x199))/x200);

	if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x201 = INT32_MIN;
	volatile uint16_t x202 = 176U;
	static volatile int8_t x203 = -1;

	t48 = ((x201|(x202&x203))/x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = INT32_MIN;
	static int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	volatile int16_t x208 = -1804;
	int32_t t49 = -859142;

	t49 = ((x205|(x206&x207))/x208);

	if (t49 != 1190401) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x209 = 35LL;
	volatile int32_t x211 = INT32_MIN;
	static volatile int64_t t50 = 123736LL;

	t50 = ((x209|(x210&x211))/x212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MIN;
	volatile uint32_t t51 = 1733138875U;

	t51 = ((x213|(x214&x215))/x216);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x219 = UINT8_MAX;
	static volatile uint32_t x220 = 1724U;
	volatile int64_t t52 = 6289714LL;

	t52 = ((x217|(x218&x219))/x220);

	if (t52 != -5349983780078176LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = 15334062LLU;
	int8_t x230 = -1;
	static int64_t x231 = 25LL;
	static int16_t x232 = INT16_MAX;
	volatile uint64_t t53 = 5571920LLU;

	t53 = ((x229|(x230&x231))/x232);

	if (t53 != 467LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x233 = INT8_MIN;
	int32_t x234 = 4893;
	uint32_t x235 = UINT32_MAX;
	static int16_t x236 = INT16_MIN;

	t54 = ((x233|(x234&x235))/x236);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x237 = INT64_MIN;
	volatile int64_t x238 = INT64_MIN;
	uint64_t t55 = 2478143424014040009LLU;

	t55 = ((x237|(x238&x239))/x240);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MIN;
	uint16_t x242 = 412U;
	int8_t x243 = INT8_MAX;
	int32_t x244 = 37169828;
	int64_t t56 = 805LL;

	t56 = ((x241|(x242&x243))/x244);

	if (t56 != -248141369845LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 1620623519U;
	uint64_t x246 = 2355723729LLU;
	int64_t x247 = INT64_MAX;
	int8_t x248 = INT8_MAX;

	t57 = ((x245|(x246&x247))/x248);

	if (t57 != 31305562LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x249 = INT16_MIN;
	volatile uint64_t x250 = 1990705275399LLU;
	uint32_t x251 = 500535356U;
	int64_t x252 = 272976021467798454LL;
	volatile uint64_t t58 = 800148248LLU;

	t58 = ((x249|(x250&x251))/x252);

	if (t58 != 67LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 5U;
	int32_t x255 = INT32_MIN;
	volatile int64_t t59 = -13LL;

	t59 = ((x253|(x254&x255))/x256);

	if (t59 != 6021685LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = -1;
	volatile int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	volatile int16_t x260 = -1;
	int32_t t60 = -93513;

	t60 = ((x257|(x258&x259))/x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x261 = 4;
	uint64_t x262 = UINT64_MAX;
	uint32_t x263 = UINT32_MAX;
	static int64_t x264 = 1978838272588LL;
	volatile uint64_t t61 = 164221LLU;

	t61 = ((x261|(x262&x263))/x264);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x265 = -1LL;
	static volatile uint8_t x266 = 13U;
	static int32_t x267 = INT32_MAX;
	static uint64_t x268 = 259983768086511LLU;
	volatile uint64_t t62 = 6865428892LLU;

	t62 = ((x265|(x266&x267))/x268);

	if (t62 != 70953LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = INT8_MIN;
	static uint8_t x270 = UINT8_MAX;
	static int32_t x271 = 202062;
	volatile uint16_t x272 = 12585U;
	volatile int32_t t63 = -122;

	t63 = ((x269|(x270&x271))/x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MIN;
	uint32_t x274 = 4073797U;
	int8_t x275 = -1;
	volatile uint64_t x276 = 182LLU;
	uint64_t t64 = 3158148313077685LLU;

	t64 = ((x273|(x274&x275))/x276);

	if (t64 != 50677868334389283LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = INT64_MAX;
	static int64_t x278 = INT64_MAX;
	int16_t x279 = INT16_MAX;
	static uint16_t x280 = UINT16_MAX;

	t65 = ((x277|(x278&x279))/x280);

	if (t65 != 140739635871744LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x281 = 238U;
	int64_t x283 = 348LL;
	uint32_t x284 = 6166U;

	t66 = ((x281|(x282&x283))/x284);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x286 = INT32_MIN;
	int64_t x287 = INT64_MIN;
	uint8_t x288 = 17U;
	static volatile int64_t t67 = 1LL;

	t67 = ((x285|(x286&x287))/x288);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x289 = 25U;
	int16_t x291 = INT16_MIN;
	int32_t x292 = -1;
	volatile int64_t t68 = -965468LL;

	t68 = ((x289|(x290&x291))/x292);

	if (t68 != 32743LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = 12412;
	volatile int32_t x294 = INT32_MIN;
	volatile int16_t x295 = -1;
	volatile int32_t t69 = -199;

	t69 = ((x293|(x294&x295))/x296);

	if (t69 != -16909222) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x297 = 50535219371LL;
	volatile uint8_t x298 = 60U;
	int64_t x299 = 24768331168099909LL;
	uint16_t x300 = 273U;
	int64_t t70 = -290874LL;

	t70 = ((x297|(x298&x299))/x300);

	if (t70 != 185110693LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x305 = 13093U;
	int16_t x308 = INT16_MIN;
	uint32_t t71 = 975U;

	t71 = ((x305|(x306&x307))/x308);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x309 = 5U;
	int8_t x310 = 6;
	int64_t x311 = INT64_MAX;
	uint32_t x312 = 1977354U;
	static int64_t t72 = 7641056429992712LL;

	t72 = ((x309|(x310&x311))/x312);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x314 = INT32_MAX;
	uint64_t x316 = 287LLU;
	uint64_t t73 = 270022663920870LLU;

	t73 = ((x313|(x314&x315))/x316);

	if (t73 != 64274369594806783LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x318 = -1;
	volatile uint32_t x319 = 123U;
	static int64_t t74 = 371253678263491412LL;

	t74 = ((x317|(x318&x319))/x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	uint16_t x324 = UINT16_MAX;
	static volatile int64_t t75 = 960809674125607888LL;

	t75 = ((x321|(x322&x323))/x324);

	if (t75 != -140739635871744LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = 457;
	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;
	int32_t x328 = -3242;

	t76 = ((x325|(x326&x327))/x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile int8_t x330 = INT8_MIN;
	int64_t x331 = -1LL;
	volatile int64_t t77 = 448495786LL;

	t77 = ((x329|(x330&x331))/x332);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x334 = INT64_MIN;
	int8_t x335 = INT8_MIN;
	volatile uint32_t x336 = 36U;
	uint64_t t78 = 152839876203265369LLU;

	t78 = ((x333|(x334&x335))/x336);

	if (t78 != 256204789705525422LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MAX;
	int16_t x339 = 15;
	uint16_t x340 = 1386U;
	volatile int32_t t79 = 410159436;

	t79 = ((x337|(x338&x339))/x340);

	if (t79 != -23) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = -1;
	int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MAX;
	uint32_t x344 = UINT32_MAX;
	volatile int64_t t80 = -717907556662738LL;

	t80 = ((x341|(x342&x343))/x344);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x346 = -1;
	volatile uint32_t x347 = UINT32_MAX;
	uint32_t x348 = 3U;
	volatile uint32_t t81 = 1U;

	t81 = ((x345|(x346&x347))/x348);

	if (t81 != 1431655765U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x351 = 25U;
	static int32_t x352 = INT32_MAX;
	static int32_t t82 = -7353;

	t82 = ((x349|(x350&x351))/x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MAX;
	static int32_t x355 = -1;
	int32_t x356 = INT32_MIN;
	static volatile int64_t t83 = -116050125498LL;

	t83 = ((x353|(x354&x355))/x356);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = 3LL;
	int16_t x358 = INT16_MIN;
	uint64_t x360 = 390159687LLU;
	volatile uint64_t t84 = 7289605LLU;

	t84 = ((x357|(x358&x359))/x360);

	if (t84 != 47279984807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = INT16_MIN;
	static int32_t x363 = -644;

	t85 = ((x361|(x362&x363))/x364);

	if (t85 != -3469LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x365 = 3864U;
	int8_t x366 = 5;
	volatile uint16_t x367 = 3177U;
	uint64_t x368 = 532084LLU;
	volatile uint64_t t86 = 9555877023LLU;

	t86 = ((x365|(x366&x367))/x368);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x369 = -1;
	volatile uint8_t x370 = 5U;
	int8_t x371 = 7;
	int64_t x372 = -1LL;
	int64_t t87 = 13408357504783LL;

	t87 = ((x369|(x370&x371))/x372);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x373 = -1;
	volatile int64_t x375 = 29LL;
	int32_t x376 = INT32_MIN;
	int64_t t88 = 757693767487LL;

	t88 = ((x373|(x374&x375))/x376);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x377 = UINT32_MAX;
	int8_t x378 = INT8_MIN;
	static uint32_t x379 = UINT32_MAX;
	uint16_t x380 = UINT16_MAX;
	uint32_t t89 = 479414966U;

	t89 = ((x377|(x378&x379))/x380);

	if (t89 != 65537U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = INT64_MAX;
	uint16_t x382 = UINT16_MAX;
	static int8_t x383 = INT8_MIN;
	int64_t x384 = -1LL;
	int64_t t90 = 34LL;

	t90 = ((x381|(x382&x383))/x384);

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x390 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	int64_t t91 = -20641LL;

	t91 = ((x389|(x390&x391))/x392);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x393 = INT16_MIN;
	uint8_t x395 = 23U;
	int32_t x396 = -1;
	volatile uint32_t t92 = 5178U;

	t92 = ((x393|(x394&x395))/x396);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x397 = 0U;
	volatile int64_t x398 = -570LL;
	volatile int64_t t93 = -31923552150217706LL;

	t93 = ((x397|(x398&x399))/x400);

	if (t93 != 2LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = INT16_MAX;
	uint64_t x403 = UINT64_MAX;
	int16_t x404 = -1;
	static volatile uint64_t t94 = 75915441799764890LLU;

	t94 = ((x401|(x402&x403))/x404);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x405 = -1;
	volatile uint32_t x407 = 7722102U;
	int32_t x408 = INT32_MIN;
	volatile int64_t t95 = -1056735302LL;

	t95 = ((x405|(x406&x407))/x408);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = INT16_MIN;
	int32_t x411 = INT32_MAX;
	int64_t x412 = 61751LL;
	int64_t t96 = -1LL;

	t96 = ((x409|(x410&x411))/x412);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x414 = 11U;
	uint32_t x415 = 1U;
	static int32_t x416 = -131867589;
	uint32_t t97 = 488025U;

	t97 = ((x413|(x414&x415))/x416);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = INT32_MIN;
	int32_t x418 = 30288;
	static int16_t x419 = INT16_MIN;
	uint64_t t98 = 2609474389652818413LLU;

	t98 = ((x417|(x418&x419))/x420);

	if (t98 != 737815400623LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x421 = -6;
	int8_t x422 = INT8_MIN;
	int32_t x423 = 1;
	volatile uint32_t x424 = UINT32_MAX;
	volatile uint32_t t99 = 218U;

	t99 = ((x421|(x422&x423))/x424);

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

