#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
uint8_t x4 = 46U;
static int32_t t0 = -14109;
int32_t x5 = 0;
int8_t x7 = INT8_MIN;
volatile int64_t x8 = 1931601488469304323LL;
uint8_t x14 = UINT8_MAX;
uint16_t x15 = 17U;
volatile int32_t t3 = 27839;
int8_t x17 = 5;
int64_t x19 = 478911307763LL;
int32_t x21 = INT32_MIN;
volatile int64_t x31 = -6801641LL;
uint64_t x48 = 1220732707LLU;
int32_t t11 = -3;
static volatile int16_t x60 = -1;
int16_t x62 = INT16_MAX;
static volatile int32_t t13 = 10;
int8_t x65 = -1;
uint8_t x66 = UINT8_MAX;
int8_t x72 = -54;
volatile int32_t t16 = -1;
volatile int32_t t17 = -55100;
static int8_t x85 = -1;
static volatile int16_t x88 = INT16_MIN;
volatile uint16_t x94 = 2U;
int64_t x96 = INT64_MIN;
int32_t t21 = -31629683;
int32_t t22 = 260735134;
int16_t x107 = -109;
volatile int16_t x114 = 195;
uint64_t x115 = 2062793902292772983LLU;
static int32_t x124 = INT32_MAX;
int32_t t27 = -446;
static int16_t x134 = INT16_MAX;
uint64_t x141 = 17642524458261673LLU;
volatile int32_t t32 = 7432;
int32_t x150 = INT32_MAX;
int8_t x153 = INT8_MAX;
int64_t x156 = -10580LL;
volatile int16_t x157 = 326;
uint16_t x160 = UINT16_MAX;
int16_t x163 = INT16_MAX;
uint64_t x165 = UINT64_MAX;
uint64_t x168 = 5477947209771338LLU;
static uint8_t x182 = 0U;
int8_t x183 = -23;
static int16_t x186 = INT16_MAX;
volatile int32_t t41 = 15;
int64_t x196 = -1LL;
volatile int32_t t43 = -584542;
static int32_t x197 = INT32_MIN;
int8_t x198 = INT8_MIN;
int16_t x199 = -1;
int32_t x204 = 13346;
int16_t x215 = INT16_MIN;
uint64_t x218 = 54839532770964335LLU;
static int32_t t48 = 68154410;
uint8_t x221 = 7U;
uint16_t x224 = 8U;
static int16_t x225 = 13169;
int16_t x234 = 7;
int32_t t52 = -15;
int16_t x261 = INT16_MAX;
static uint16_t x270 = 2U;
int32_t t61 = 25;
static volatile uint64_t x273 = 8895299519897852985LLU;
static volatile int8_t x279 = -38;
uint16_t x286 = UINT16_MAX;
int16_t x309 = INT16_MAX;
int32_t t69 = 11003;
volatile uint64_t x314 = 5082978194568722121LLU;
uint16_t x319 = UINT16_MAX;
uint16_t x320 = 19655U;
uint16_t x325 = 1U;
int64_t x326 = -1LL;
int32_t t76 = 5863;
int16_t x347 = -1;
int16_t x349 = INT16_MIN;
int16_t x350 = -1;
uint8_t x351 = 22U;
uint16_t x352 = 1U;
volatile int16_t x364 = INT16_MIN;
volatile int8_t x369 = 1;
int16_t x370 = INT16_MAX;
volatile uint8_t x376 = 0U;
uint16_t x378 = UINT16_MAX;
static uint32_t x389 = 50U;
volatile uint64_t x391 = 2448481LLU;
static int16_t x394 = INT16_MIN;
static uint16_t x401 = 10U;
static int8_t x408 = -1;
uint64_t x413 = UINT64_MAX;
uint8_t x414 = 9U;
uint32_t x418 = UINT32_MAX;
int32_t x420 = -1;
int32_t t90 = 1;
volatile uint16_t x421 = 13U;
uint16_t x427 = UINT16_MAX;
volatile int32_t t92 = 1682;
int32_t x434 = INT32_MIN;
int32_t x438 = 255277;
int8_t x440 = INT8_MIN;
volatile int32_t t95 = -15;
static uint16_t x446 = 40U;
volatile int8_t x447 = 43;
int64_t x450 = -96657038LL;
volatile int64_t x451 = INT64_MIN;
uint64_t x454 = 1438772822573LLU;


void f0(void) {
	int16_t x2 = -1;
	int64_t x3 = 1659988172209953LL;

	t0 = ((x1|(x2-x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 171532760782LLU;
	int32_t t1 = -13;

	t1 = ((x5|(x6-x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint8_t x10 = UINT8_MAX;
	volatile int8_t x11 = -3;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -794;

	t2 = ((x9|(x10-x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 536529192620179821LL;
	int64_t x16 = -1LL;

	t3 = ((x13|(x14-x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = -1;
	volatile int32_t x20 = INT32_MIN;
	int32_t t4 = 112;

	t4 = ((x17|(x18-x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 7U;
	int64_t x23 = -1LL;
	static int16_t x24 = 3;
	volatile int32_t t5 = -1;

	t5 = ((x21|(x22-x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = -1;
	int32_t x30 = INT32_MIN;
	int16_t x32 = 13;
	int32_t t6 = -37406414;

	t6 = ((x29|(x30-x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = 1U;
	int32_t x34 = 3543;
	int16_t x35 = -1;
	int16_t x36 = INT16_MIN;
	volatile int32_t t7 = 356124;

	t7 = ((x33|(x34-x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -7502346;
	int8_t x38 = 6;
	static volatile int32_t x39 = -42;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t8 = -346958594;

	t8 = ((x37|(x38-x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = UINT8_MAX;
	volatile uint64_t x46 = 38193407434762444LLU;
	int32_t x47 = -88;
	static int32_t t9 = 0;

	t9 = ((x45|(x46-x47))==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	int32_t x50 = -1;
	volatile uint32_t x51 = UINT32_MAX;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t10 = 63689983;

	t10 = ((x49|(x50-x51))==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x53 = INT16_MIN;
	volatile int8_t x54 = -1;
	uint16_t x55 = 372U;
	volatile int32_t x56 = INT32_MIN;

	t11 = ((x53|(x54-x55))==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x57 = 670637232U;
	volatile int16_t x58 = -1;
	uint64_t x59 = UINT64_MAX;
	int32_t t12 = -12999;

	t12 = ((x57|(x58-x59))==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	static int32_t x63 = INT32_MAX;
	uint16_t x64 = UINT16_MAX;

	t13 = ((x61|(x62-x63))==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x67 = 105U;
	int8_t x68 = -1;
	static volatile int32_t t14 = -224;

	t14 = ((x65|(x66-x67))==x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	int16_t x70 = INT16_MAX;
	uint16_t x71 = 0U;
	int32_t t15 = -14740;

	t15 = ((x69|(x70-x71))==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x73 = UINT8_MAX;
	static int32_t x74 = -96170625;
	int64_t x75 = INT64_MIN;
	int32_t x76 = 13;

	t16 = ((x73|(x74-x75))==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = INT64_MAX;
	int32_t x78 = INT32_MIN;
	uint32_t x79 = UINT32_MAX;
	volatile int32_t x80 = INT32_MIN;

	t17 = ((x77|(x78-x79))==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x86 = INT32_MAX;
	uint64_t x87 = 60027983LLU;
	volatile int32_t t18 = 620045;

	t18 = ((x85|(x86-x87))==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x89 = -89830;
	int32_t x90 = INT32_MIN;
	static int64_t x91 = -1LL;
	int64_t x92 = INT64_MIN;
	int32_t t19 = 221267;

	t19 = ((x89|(x90-x91))==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 14000U;
	int8_t x95 = 1;
	int32_t t20 = -1920;

	t20 = ((x93|(x94-x95))==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = 37;
	static int64_t x98 = INT64_MAX;
	volatile uint8_t x99 = UINT8_MAX;
	volatile int64_t x100 = -1LL;

	t21 = ((x97|(x98-x99))==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -1;
	int16_t x102 = INT16_MAX;
	int16_t x103 = INT16_MIN;
	volatile int8_t x104 = -2;

	t22 = ((x101|(x102-x103))==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 22U;
	int64_t x106 = 683LL;
	int16_t x108 = INT16_MIN;
	static volatile int32_t t23 = -909;

	t23 = ((x105|(x106-x107))==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 26121LLU;
	int16_t x110 = INT16_MIN;
	int8_t x111 = 9;
	int16_t x112 = -1;
	int32_t t24 = -159;

	t24 = ((x109|(x110-x111))==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = UINT8_MAX;
	int8_t x116 = INT8_MIN;
	int32_t t25 = 171922810;

	t25 = ((x113|(x114-x115))==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = 2486;
	volatile uint32_t x118 = 464336252U;
	int16_t x119 = -1;
	int16_t x120 = 1683;
	static volatile int32_t t26 = -1759181;

	t26 = ((x117|(x118-x119))==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = INT32_MAX;
	uint32_t x122 = UINT32_MAX;
	int8_t x123 = INT8_MIN;

	t27 = ((x121|(x122-x123))==x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 202860LLU;
	uint16_t x126 = 1492U;
	int8_t x127 = -1;
	static uint8_t x128 = UINT8_MAX;
	static volatile int32_t t28 = -62845;

	t28 = ((x125|(x126-x127))==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 13U;
	uint32_t x130 = 600U;
	static int32_t x131 = INT32_MIN;
	static uint64_t x132 = 851171066325LLU;
	int32_t t29 = -6712;

	t29 = ((x129|(x130-x131))==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x133 = 315692648LLU;
	int64_t x135 = INT64_MAX;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t30 = 630265435;

	t30 = ((x133|(x134-x135))==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x142 = INT16_MIN;
	int8_t x143 = -1;
	volatile int64_t x144 = INT64_MAX;
	volatile int32_t t31 = -55309746;

	t31 = ((x141|(x142-x143))==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 1326409133074762758LLU;
	uint32_t x146 = 41616758U;
	static int64_t x147 = 406248491976046LL;
	int16_t x148 = INT16_MIN;

	t32 = ((x145|(x146-x147))==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x149 = -1;
	int16_t x151 = 153;
	static int8_t x152 = INT8_MIN;
	int32_t t33 = -12527034;

	t33 = ((x149|(x150-x151))==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x154 = INT64_MIN;
	static uint64_t x155 = 496052306718389LLU;
	volatile int32_t t34 = -8064259;

	t34 = ((x153|(x154-x155))==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x158 = -21;
	int16_t x159 = -3849;
	static volatile int32_t t35 = -356739901;

	t35 = ((x157|(x158-x159))==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MIN;
	uint8_t x162 = UINT8_MAX;
	volatile uint8_t x164 = 1U;
	int32_t t36 = -1;

	t36 = ((x161|(x162-x163))==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x166 = 1481U;
	static int32_t x167 = -7;
	static volatile int32_t t37 = -29802207;

	t37 = ((x165|(x166-x167))==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MIN;
	volatile int8_t x170 = 27;
	int32_t x171 = -1;
	static volatile int64_t x172 = INT64_MIN;
	volatile int32_t t38 = -720545;

	t38 = ((x169|(x170-x171))==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MIN;
	static int32_t x178 = -1;
	int64_t x179 = INT64_MAX;
	volatile int16_t x180 = INT16_MAX;
	int32_t t39 = 1156;

	t39 = ((x177|(x178-x179))==x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x181 = INT8_MIN;
	int64_t x184 = 97129799098LL;
	volatile int32_t t40 = 113;

	t40 = ((x181|(x182-x183))==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MAX;
	int8_t x187 = INT8_MIN;
	uint32_t x188 = UINT32_MAX;

	t41 = ((x185|(x186-x187))==x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x189 = UINT64_MAX;
	int64_t x190 = 10817731689268381LL;
	uint32_t x191 = 3359U;
	int64_t x192 = INT64_MAX;
	static volatile int32_t t42 = 143233385;

	t42 = ((x189|(x190-x191))==x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x193 = UINT64_MAX;
	volatile int16_t x194 = INT16_MAX;
	uint64_t x195 = 6814019236844770053LLU;

	t43 = ((x193|(x194-x195))==x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x200 = 159958932838184LLU;
	static volatile int32_t t44 = -154678317;

	t44 = ((x197|(x198-x199))==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MIN;
	int64_t x203 = 4338130867LL;
	static int32_t t45 = -2013;

	t45 = ((x201|(x202-x203))==x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MIN;
	static uint32_t x206 = UINT32_MAX;
	static volatile int32_t x207 = INT32_MIN;
	int64_t x208 = -1LL;
	volatile int32_t t46 = 673;

	t46 = ((x205|(x206-x207))==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x213 = 1700040048301LLU;
	int32_t x214 = INT32_MIN;
	volatile int64_t x216 = INT64_MAX;
	static volatile int32_t t47 = -153;

	t47 = ((x213|(x214-x215))==x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x217 = UINT16_MAX;
	static int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;

	t48 = ((x217|(x218-x219))==x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x222 = -1060268936;
	uint16_t x223 = 317U;
	int32_t t49 = 3610009;

	t49 = ((x221|(x222-x223))==x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x226 = -1;
	int16_t x227 = -4;
	int8_t x228 = INT8_MIN;
	int32_t t50 = 285338;

	t50 = ((x225|(x226-x227))==x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x229 = 120U;
	int64_t x230 = INT64_MAX;
	uint64_t x231 = 1433016430450LLU;
	int64_t x232 = -1LL;
	int32_t t51 = 1857;

	t51 = ((x229|(x230-x231))==x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = 7;
	int16_t x235 = INT16_MIN;
	volatile uint8_t x236 = UINT8_MAX;

	t52 = ((x233|(x234-x235))==x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -8;
	uint64_t x238 = 1LLU;
	int16_t x239 = -1;
	int16_t x240 = INT16_MIN;
	static volatile int32_t t53 = -207178300;

	t53 = ((x237|(x238-x239))==x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = 0;
	volatile int16_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	volatile uint64_t x244 = UINT64_MAX;
	volatile int32_t t54 = 113;

	t54 = ((x241|(x242-x243))==x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = INT16_MAX;
	int16_t x246 = INT16_MIN;
	int64_t x247 = INT64_MIN;
	int32_t x248 = -11295;
	static volatile int32_t t55 = -577;

	t55 = ((x245|(x246-x247))==x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 32405016U;
	volatile int64_t x250 = 62LL;
	static uint64_t x251 = UINT64_MAX;
	static int64_t x252 = INT64_MIN;
	volatile int32_t t56 = -6240;

	t56 = ((x249|(x250-x251))==x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x253 = -6215;
	uint64_t x254 = 8968152022LLU;
	static volatile uint16_t x255 = 2U;
	int64_t x256 = INT64_MIN;
	int32_t t57 = -27816;

	t57 = ((x253|(x254-x255))==x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x257 = -7402393726938LL;
	uint8_t x258 = 24U;
	int16_t x259 = INT16_MIN;
	volatile int64_t x260 = 0LL;
	static volatile int32_t t58 = 290136441;

	t58 = ((x257|(x258-x259))==x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x262 = 613U;
	uint32_t x263 = UINT32_MAX;
	int16_t x264 = -3;
	static volatile int32_t t59 = -252;

	t59 = ((x261|(x262-x263))==x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x265 = 105U;
	int32_t x266 = INT32_MAX;
	int8_t x267 = 48;
	volatile uint64_t x268 = UINT64_MAX;
	volatile int32_t t60 = 587705327;

	t60 = ((x265|(x266-x267))==x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = INT64_MIN;
	int8_t x271 = INT8_MIN;
	int16_t x272 = -970;

	t61 = ((x269|(x270-x271))==x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x274 = INT8_MIN;
	uint32_t x275 = UINT32_MAX;
	int64_t x276 = INT64_MAX;
	static int32_t t62 = -2839;

	t62 = ((x273|(x274-x275))==x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = -1;
	int8_t x278 = -1;
	volatile uint16_t x280 = 2356U;
	volatile int32_t t63 = -1;

	t63 = ((x277|(x278-x279))==x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x285 = -1;
	uint64_t x287 = 32140LLU;
	int64_t x288 = INT64_MAX;
	static int32_t t64 = -18819;

	t64 = ((x285|(x286-x287))==x288);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x289 = 929065825878LLU;
	volatile uint64_t x290 = 2872178217618436407LLU;
	volatile int16_t x291 = INT16_MAX;
	int64_t x292 = -2450476579513549LL;
	volatile int32_t t65 = 1225789;

	t65 = ((x289|(x290-x291))==x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x293 = INT32_MAX;
	int8_t x294 = INT8_MAX;
	int64_t x295 = -1LL;
	uint32_t x296 = 46825842U;
	volatile int32_t t66 = 57473230;

	t66 = ((x293|(x294-x295))==x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x297 = UINT8_MAX;
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = -88;
	volatile int64_t x300 = 277644475051731LL;
	volatile int32_t t67 = -30108;

	t67 = ((x297|(x298-x299))==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = INT64_MAX;
	volatile int64_t x302 = 341LL;
	uint16_t x303 = 0U;
	uint16_t x304 = 42U;
	int32_t t68 = 260216;

	t68 = ((x301|(x302-x303))==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x310 = INT64_MIN;
	static uint64_t x311 = 43LLU;
	int8_t x312 = -1;

	t69 = ((x309|(x310-x311))==x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x313 = UINT8_MAX;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = 9U;
	volatile int32_t t70 = 1;

	t70 = ((x313|(x314-x315))==x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = 124;
	volatile uint16_t x318 = 1U;
	int32_t t71 = -213;

	t71 = ((x317|(x318-x319))==x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x327 = 97U;
	uint16_t x328 = 114U;
	static int32_t t72 = -58;

	t72 = ((x325|(x326-x327))==x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x329 = UINT32_MAX;
	int32_t x330 = -3778775;
	uint8_t x331 = UINT8_MAX;
	uint8_t x332 = 1U;
	int32_t t73 = -593;

	t73 = ((x329|(x330-x331))==x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = -18195LL;
	int64_t x334 = -1LL;
	static volatile uint8_t x335 = 5U;
	static int64_t x336 = -58827616218LL;
	int32_t t74 = 861190173;

	t74 = ((x333|(x334-x335))==x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = INT16_MIN;
	volatile int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	uint16_t x340 = UINT16_MAX;
	int32_t t75 = 2;

	t75 = ((x337|(x338-x339))==x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x341 = 1;
	int8_t x342 = -1;
	volatile uint8_t x343 = 0U;
	int8_t x344 = 29;

	t76 = ((x341|(x342-x343))==x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x345 = 109844235U;
	volatile int32_t x346 = 6206;
	int16_t x348 = 12;
	volatile int32_t t77 = -2324;

	t77 = ((x345|(x346-x347))==x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t t78 = -1;

	t78 = ((x349|(x350-x351))==x352);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x362 = -1;
	int8_t x363 = INT8_MAX;
	int32_t t79 = 112215;

	t79 = ((x361|(x362-x363))==x364);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x371 = INT64_MAX;
	uint16_t x372 = 379U;
	volatile int32_t t80 = -433392;

	t80 = ((x369|(x370-x371))==x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x373 = 6737637LLU;
	uint64_t x374 = 257660730186LLU;
	static volatile uint8_t x375 = 60U;
	static int32_t t81 = 61;

	t81 = ((x373|(x374-x375))==x376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x379 = INT16_MAX;
	volatile uint16_t x380 = UINT16_MAX;
	int32_t t82 = -224262;

	t82 = ((x377|(x378-x379))==x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x381 = 127138695LL;
	int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	static int32_t x384 = 5734456;
	volatile int32_t t83 = 7;

	t83 = ((x381|(x382-x383))==x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x390 = -1LL;
	static int32_t x392 = INT32_MIN;
	int32_t t84 = 745343576;

	t84 = ((x389|(x390-x391))==x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = INT8_MIN;
	uint32_t x395 = 56215878U;
	int8_t x396 = -1;
	int32_t t85 = 4;

	t85 = ((x393|(x394-x395))==x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x397 = INT32_MIN;
	int8_t x398 = INT8_MIN;
	int64_t x399 = -3432879858360321206LL;
	volatile int16_t x400 = -1;
	volatile int32_t t86 = -13672;

	t86 = ((x397|(x398-x399))==x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x402 = INT16_MIN;
	volatile int64_t x403 = 21947185LL;
	int8_t x404 = INT8_MAX;
	int32_t t87 = 1638483;

	t87 = ((x401|(x402-x403))==x404);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x405 = 1;
	static uint8_t x406 = UINT8_MAX;
	int64_t x407 = -1LL;
	int32_t t88 = -6843727;

	t88 = ((x405|(x406-x407))==x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x415 = -1;
	uint64_t x416 = 16673859255029334LLU;
	volatile int32_t t89 = 0;

	t89 = ((x413|(x414-x415))==x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x417 = UINT16_MAX;
	int64_t x419 = 1LL;

	t90 = ((x417|(x418-x419))==x420);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x422 = INT8_MIN;
	volatile int64_t x423 = -1LL;
	static uint64_t x424 = UINT64_MAX;
	volatile int32_t t91 = -972;

	t91 = ((x421|(x422-x423))==x424);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = -268;
	uint8_t x426 = 1U;
	volatile int16_t x428 = -52;

	t92 = ((x425|(x426-x427))==x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x433 = UINT8_MAX;
	uint16_t x435 = 0U;
	int16_t x436 = INT16_MIN;
	volatile int32_t t93 = -50100;

	t93 = ((x433|(x434-x435))==x436);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = -1620;
	uint32_t x439 = 5034199U;
	int32_t t94 = 18789;

	t94 = ((x437|(x438-x439))==x440);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = INT16_MIN;
	uint32_t x442 = 388783U;
	static int16_t x443 = INT16_MAX;
	int16_t x444 = -12960;

	t95 = ((x441|(x442-x443))==x444);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x445 = 1906;
	int64_t x448 = INT64_MAX;
	volatile int32_t t96 = -15457;

	t96 = ((x445|(x446-x447))==x448);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x449 = 6085LL;
	int8_t x452 = -1;
	int32_t t97 = 5633741;

	t97 = ((x449|(x450-x451))==x452);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x453 = UINT64_MAX;
	int64_t x455 = INT64_MIN;
	int64_t x456 = INT64_MAX;
	volatile int32_t t98 = 3575920;

	t98 = ((x453|(x454-x455))==x456);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x457 = INT8_MIN;
	int16_t x458 = INT16_MIN;
	static int64_t x459 = 31860LL;
	static int8_t x460 = INT8_MIN;
	volatile int32_t t99 = -1690;

	t99 = ((x457|(x458-x459))==x460);

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

