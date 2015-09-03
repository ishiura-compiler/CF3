#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x6 = -1;
static int8_t x12 = INT8_MIN;
int64_t x15 = 644263562047769992LL;
static volatile int8_t x28 = -1;
uint32_t x36 = 460229U;
uint32_t t7 = 1465U;
static volatile int32_t x40 = INT32_MIN;
int32_t x48 = 3;
volatile int32_t t10 = -3639;
int64_t x63 = -1LL;
static volatile uint16_t x66 = 6U;
int32_t x67 = -1;
int32_t x69 = -1855;
static int16_t x74 = INT16_MIN;
int16_t x82 = INT16_MIN;
int32_t t17 = 45720;
static uint16_t x99 = 785U;
int32_t t21 = 1302;
volatile uint64_t t24 = 510225932223LLU;
uint64_t x125 = 27587654251874LLU;
volatile uint64_t x131 = 476080265319LLU;
static uint32_t x135 = 7099792U;
uint64_t x138 = 252LLU;
int32_t x139 = 2;
uint16_t x142 = 6U;
uint16_t x159 = 15U;
int32_t x163 = INT32_MIN;
static int8_t x166 = -1;
volatile int32_t t36 = 5270;
int64_t x170 = -1LL;
uint32_t x171 = UINT32_MAX;
uint8_t x175 = 83U;
volatile int64_t t39 = 13511667LL;
uint16_t x182 = 122U;
int8_t x183 = -10;
int16_t x190 = 1010;
volatile uint16_t x195 = UINT16_MAX;
int64_t x198 = -4750113LL;
static int32_t t44 = -4901610;
uint16_t x211 = 128U;
uint16_t x212 = UINT16_MAX;
volatile int32_t t47 = 124345892;
static int8_t x213 = 0;
static volatile int8_t x215 = -1;
int64_t x220 = -1LL;
int16_t x225 = -1;
static int32_t x227 = 3951157;
int8_t x230 = INT8_MAX;
uint16_t x235 = 3008U;
volatile uint64_t t52 = 259369LLU;
int8_t x237 = INT8_MIN;
uint64_t x244 = 43839334743518LLU;
static uint64_t t54 = 44LLU;
volatile int64_t x246 = INT64_MIN;
static volatile int8_t x250 = 3;
int32_t x252 = 138294;
int16_t x257 = INT16_MIN;
int8_t x270 = INT8_MIN;
int32_t x271 = INT32_MIN;
volatile int64_t t60 = 1599165027978LL;
static int16_t x277 = INT16_MAX;
int16_t x280 = -1;
int32_t t62 = 5535;
static volatile uint32_t x281 = UINT32_MAX;
int32_t t63 = 90;
static uint8_t x289 = 18U;
volatile int32_t t65 = -91;
uint32_t x293 = UINT32_MAX;
int32_t x296 = INT32_MIN;
volatile uint32_t x297 = UINT32_MAX;
static volatile int32_t t67 = -64;
static uint16_t x308 = UINT16_MAX;
static volatile int32_t t69 = 113;
volatile int64_t t71 = -4135431682LL;
volatile int8_t x317 = INT8_MIN;
volatile int64_t x320 = -1LL;
int64_t x322 = -3292369641620LL;
static volatile int16_t x327 = INT16_MIN;
int64_t x328 = -1LL;
int64_t t74 = -2881463792875220LL;
static volatile int8_t x333 = INT8_MIN;
int8_t x334 = -1;
uint64_t x343 = 73589256031966LLU;
int64_t x352 = INT64_MAX;
static uint64_t t79 = 39287723006287LLU;
int8_t x357 = INT8_MAX;
int16_t x359 = INT16_MIN;
int32_t x365 = INT32_MIN;
int32_t x370 = INT32_MIN;
int8_t x373 = -1;
int32_t t84 = -1295410;
volatile int32_t x378 = 51302877;
int16_t x379 = -1;
volatile uint8_t x388 = 7U;
volatile uint8_t x393 = 55U;
static int16_t x396 = INT16_MIN;
volatile int32_t t89 = -11;
volatile int64_t x401 = 51383499363834LL;
static int32_t t92 = 33268190;
static volatile uint16_t x413 = UINT16_MAX;
int16_t x414 = 12;
int32_t x418 = -1;
uint8_t x422 = 5U;
int32_t x424 = 57082;
int32_t t96 = 1019293;
static int64_t x426 = INT64_MIN;
int32_t t98 = 27;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int8_t x2 = -1;
	volatile uint8_t x3 = 17U;
	uint32_t x4 = 3296U;
	volatile uint32_t t0 = 0U;

	t0 = ((x1<=(x2-x3))/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x7 = -3;
	static uint8_t x8 = 6U;
	volatile int32_t t1 = 0;

	t1 = ((x5<=(x6-x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	uint8_t x10 = 7U;
	static uint32_t x11 = 6U;
	static int32_t t2 = 1;

	t2 = ((x9<=(x10-x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint64_t x14 = UINT64_MAX;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = -45006;

	t3 = ((x13<=(x14-x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	static volatile uint16_t x18 = 45U;
	int32_t x19 = -776411981;
	volatile uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 465266137;

	t4 = ((x17<=(x18-x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -84LL;
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t5 = -5;

	t5 = ((x21<=(x22-x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 0;
	int8_t x26 = INT8_MIN;
	int32_t x27 = 11;
	int32_t t6 = -13;

	t6 = ((x25<=(x26-x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = 2995276;
	int16_t x34 = -1;
	uint8_t x35 = UINT8_MAX;

	t7 = ((x33<=(x34-x35))/x36);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	static int16_t x38 = -1;
	int8_t x39 = -10;
	int32_t t8 = -1;

	t8 = ((x37<=(x38-x39))/x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	uint64_t x42 = UINT64_MAX;
	int64_t x43 = -36751384LL;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = 661601305167373LL;

	t9 = ((x41<=(x42-x43))/x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = INT64_MIN;
	int64_t x46 = -3625525417385703973LL;
	int16_t x47 = 2830;

	t10 = ((x45<=(x46-x47))/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MAX;
	volatile int16_t x59 = -1;
	int8_t x60 = INT8_MIN;
	int32_t t11 = -3;

	t11 = ((x57<=(x58-x59))/x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x61 = INT32_MIN;
	int64_t x62 = -1LL;
	int32_t x64 = 2563661;
	int32_t t12 = -23816;

	t12 = ((x61<=(x62-x63))/x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MAX;
	volatile int16_t x68 = 8692;
	int32_t t13 = 57637716;

	t13 = ((x65<=(x66-x67))/x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x70 = 37U;
	volatile int8_t x71 = INT8_MIN;
	static int32_t x72 = -1;
	volatile int32_t t14 = -233;

	t14 = ((x69<=(x70-x71))/x72);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	static int32_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t15 = 123725;

	t15 = ((x73<=(x74-x75))/x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x77 = INT8_MIN;
	static int8_t x78 = INT8_MIN;
	int32_t x79 = -14;
	int32_t x80 = INT32_MAX;
	volatile int32_t t16 = 1603;

	t16 = ((x77<=(x78-x79))/x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 56U;
	int8_t x83 = INT8_MIN;
	static int8_t x84 = INT8_MIN;

	t17 = ((x81<=(x82-x83))/x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = 360236859;
	uint32_t x86 = UINT32_MAX;
	int8_t x87 = INT8_MAX;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t18 = 9461674LLU;

	t18 = ((x85<=(x86-x87))/x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MIN;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t19 = 463780798;

	t19 = ((x89<=(x90-x91))/x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	uint16_t x98 = UINT16_MAX;
	int16_t x100 = -7;
	int32_t t20 = -371757564;

	t20 = ((x97<=(x98-x99))/x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -1LL;
	volatile int16_t x102 = -922;
	uint32_t x103 = 328487401U;
	volatile int8_t x104 = -1;

	t21 = ((x101<=(x102-x103))/x104);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 39U;
	volatile uint32_t x106 = UINT32_MAX;
	static int8_t x107 = INT8_MIN;
	static uint8_t x108 = 5U;
	int32_t t22 = -981318;

	t22 = ((x105<=(x106-x107))/x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 300825U;
	uint8_t x110 = UINT8_MAX;
	int16_t x111 = -252;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t23 = 0;

	t23 = ((x109<=(x110-x111))/x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = INT32_MIN;
	uint8_t x114 = 119U;
	volatile int32_t x115 = -2305;
	static uint64_t x116 = 1069457543402916326LLU;

	t24 = ((x113<=(x114-x115))/x116);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = -1;
	uint16_t x122 = 8065U;
	uint16_t x123 = UINT16_MAX;
	static int8_t x124 = INT8_MAX;
	int32_t t25 = 48995;

	t25 = ((x121<=(x122-x123))/x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x126 = -1;
	static int32_t x127 = -944;
	uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t26 = 231419U;

	t26 = ((x125<=(x126-x127))/x128);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = 18697490;
	int32_t x130 = INT32_MIN;
	uint8_t x132 = UINT8_MAX;
	static volatile int32_t t27 = 6230;

	t27 = ((x129<=(x130-x131))/x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x133 = -1;
	volatile uint8_t x134 = 1U;
	uint16_t x136 = 1053U;
	int32_t t28 = -3145193;

	t28 = ((x133<=(x134-x135))/x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x137 = INT64_MAX;
	static int16_t x140 = -1;
	volatile int32_t t29 = 1;

	t29 = ((x137<=(x138-x139))/x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x141 = INT64_MIN;
	static int8_t x143 = INT8_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t30 = -27700052;

	t30 = ((x141<=(x142-x143))/x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = -280791LL;
	int32_t x146 = -48908592;
	int32_t x147 = INT32_MIN;
	int32_t x148 = INT32_MIN;
	volatile int32_t t31 = 605693014;

	t31 = ((x145<=(x146-x147))/x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = 14909452412774183LLU;
	static uint64_t x150 = 295084371898513LLU;
	uint8_t x151 = 52U;
	int8_t x152 = INT8_MAX;
	int32_t t32 = 39589;

	t32 = ((x149<=(x150-x151))/x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = INT64_MIN;
	static uint64_t x154 = 1097184684488991LLU;
	uint32_t x155 = 534U;
	volatile int16_t x156 = -105;
	int32_t t33 = -1149174;

	t33 = ((x153<=(x154-x155))/x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = -1LL;
	static int8_t x158 = -1;
	int8_t x160 = -55;
	int32_t t34 = 2864;

	t34 = ((x157<=(x158-x159))/x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x161 = 82U;
	int64_t x162 = -1LL;
	uint16_t x164 = 16257U;
	volatile int32_t t35 = -10203;

	t35 = ((x161<=(x162-x163))/x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x165 = 3LLU;
	int32_t x167 = 12;
	int32_t x168 = INT32_MIN;

	t36 = ((x165<=(x166-x167))/x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x169 = 856901308;
	int16_t x172 = INT16_MAX;
	volatile int32_t t37 = -20540293;

	t37 = ((x169<=(x170-x171))/x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x173 = INT16_MIN;
	int16_t x174 = 1060;
	int32_t x176 = -1;
	static int32_t t38 = -34;

	t38 = ((x173<=(x174-x175))/x176);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x177 = UINT64_MAX;
	uint64_t x178 = 124213212817LLU;
	static uint16_t x179 = 113U;
	static int64_t x180 = INT64_MIN;

	t39 = ((x177<=(x178-x179))/x180);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x181 = 5U;
	int64_t x184 = INT64_MIN;
	int64_t t40 = 11291528519LL;

	t40 = ((x181<=(x182-x183))/x184);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	volatile uint16_t x186 = 5U;
	int8_t x187 = -1;
	volatile int64_t x188 = -1LL;
	int64_t t41 = 56LL;

	t41 = ((x185<=(x186-x187))/x188);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = -1;
	int32_t x191 = INT32_MAX;
	static int32_t x192 = INT32_MIN;
	volatile int32_t t42 = 13971792;

	t42 = ((x189<=(x190-x191))/x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 457451140918080991LLU;
	static uint16_t x194 = 207U;
	int64_t x196 = -165423558476LL;
	int64_t t43 = -1507LL;

	t43 = ((x193<=(x194-x195))/x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x197 = INT16_MAX;
	int64_t x199 = INT64_MIN;
	int16_t x200 = -1;

	t44 = ((x197<=(x198-x199))/x200);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x201 = -16319LL;
	int32_t x202 = INT32_MAX;
	uint8_t x203 = 29U;
	int8_t x204 = -1;
	volatile int32_t t45 = 6906311;

	t45 = ((x201<=(x202-x203))/x204);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x205 = -1;
	int32_t x206 = 3;
	int8_t x207 = -40;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t46 = 0;

	t46 = ((x205<=(x206-x207))/x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x209 = -3148;
	uint8_t x210 = 3U;

	t47 = ((x209<=(x210-x211))/x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x214 = 28;
	uint16_t x216 = 219U;
	static volatile int32_t t48 = 0;

	t48 = ((x213<=(x214-x215))/x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x217 = INT32_MAX;
	int8_t x218 = -1;
	uint8_t x219 = UINT8_MAX;
	volatile int64_t t49 = 7181296110889LL;

	t49 = ((x217<=(x218-x219))/x220);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x226 = -24;
	uint16_t x228 = 1U;
	volatile int32_t t50 = 204;

	t50 = ((x225<=(x226-x227))/x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x229 = -1;
	int32_t x231 = -3;
	uint16_t x232 = UINT16_MAX;
	int32_t t51 = -630419;

	t51 = ((x229<=(x230-x231))/x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x233 = -3448941LL;
	uint32_t x234 = UINT32_MAX;
	uint64_t x236 = UINT64_MAX;

	t52 = ((x233<=(x234-x235))/x236);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x238 = 1LL;
	volatile uint64_t x239 = 1642707LLU;
	int32_t x240 = INT32_MAX;
	int32_t t53 = -172765;

	t53 = ((x237<=(x238-x239))/x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x241 = 2631901447288651LLU;
	int8_t x242 = -1;
	uint16_t x243 = UINT16_MAX;

	t54 = ((x241<=(x242-x243))/x244);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = 0U;
	int16_t x247 = -1;
	uint8_t x248 = UINT8_MAX;
	static int32_t t55 = -944282;

	t55 = ((x245<=(x246-x247))/x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = INT32_MIN;
	int64_t x251 = 2155459944898577432LL;
	int32_t t56 = -98327787;

	t56 = ((x249<=(x250-x251))/x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = -732283;
	volatile uint8_t x255 = UINT8_MAX;
	uint64_t x256 = 554221LLU;
	volatile uint64_t t57 = 60805757118179909LLU;

	t57 = ((x253<=(x254-x255))/x256);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x258 = 159000360U;
	int16_t x259 = -1;
	static volatile int16_t x260 = INT16_MIN;
	volatile int32_t t58 = -61110;

	t58 = ((x257<=(x258-x259))/x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = INT16_MIN;
	static volatile uint32_t x266 = 1820537U;
	static int32_t x267 = -26134388;
	uint16_t x268 = UINT16_MAX;
	int32_t t59 = -4621;

	t59 = ((x265<=(x266-x267))/x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = 560LLU;
	int64_t x272 = 16482780999224LL;

	t60 = ((x269<=(x270-x271))/x272);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x273 = 2774742919014427125LLU;
	int32_t x274 = -26970;
	static int8_t x275 = INT8_MIN;
	uint32_t x276 = UINT32_MAX;
	static volatile uint32_t t61 = 221755027U;

	t61 = ((x273<=(x274-x275))/x276);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x278 = -1;
	static int64_t x279 = 15283894073841LL;

	t62 = ((x277<=(x278-x279))/x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x282 = 1;
	uint32_t x283 = 246U;
	uint8_t x284 = 51U;

	t63 = ((x281<=(x282-x283))/x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = 53255208602464LL;
	int32_t x286 = INT32_MIN;
	static int8_t x287 = -43;
	int64_t x288 = INT64_MIN;
	static volatile int64_t t64 = -18LL;

	t64 = ((x285<=(x286-x287))/x288);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x290 = -1;
	static uint64_t x291 = 20800370925LLU;
	int8_t x292 = INT8_MIN;

	t65 = ((x289<=(x290-x291))/x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x294 = UINT16_MAX;
	static int16_t x295 = -1;
	volatile int32_t t66 = -27656;

	t66 = ((x293<=(x294-x295))/x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x298 = -1;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = UINT16_MAX;

	t67 = ((x297<=(x298-x299))/x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x301 = UINT64_MAX;
	static int64_t x302 = 1157436LL;
	uint32_t x303 = 1454370734U;
	int64_t x304 = INT64_MIN;
	volatile int64_t t68 = 8LL;

	t68 = ((x301<=(x302-x303))/x304);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x305 = 86U;
	uint16_t x306 = UINT16_MAX;
	volatile int32_t x307 = INT32_MAX;

	t69 = ((x305<=(x306-x307))/x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = -1;
	uint8_t x310 = 61U;
	uint8_t x311 = 9U;
	int64_t x312 = -22354876LL;
	int64_t t70 = 137117557893448730LL;

	t70 = ((x309<=(x310-x311))/x312);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x313 = -1;
	int8_t x314 = INT8_MIN;
	uint64_t x315 = UINT64_MAX;
	volatile int64_t x316 = -1749763212523LL;

	t71 = ((x313<=(x314-x315))/x316);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x318 = INT16_MIN;
	int32_t x319 = INT32_MIN;
	volatile int64_t t72 = -507208263019LL;

	t72 = ((x317<=(x318-x319))/x320);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MIN;
	uint32_t x323 = 98947U;
	int64_t x324 = INT64_MIN;
	volatile int64_t t73 = 303485856714LL;

	t73 = ((x321<=(x322-x323))/x324);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = 2056935421250LL;
	int8_t x326 = -1;

	t74 = ((x325<=(x326-x327))/x328);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x335 = INT16_MIN;
	uint8_t x336 = UINT8_MAX;
	int32_t t75 = -92;

	t75 = ((x333<=(x334-x335))/x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x341 = 3U;
	static int16_t x342 = -15;
	int32_t x344 = INT32_MAX;
	volatile int32_t t76 = -365;

	t76 = ((x341<=(x342-x343))/x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x345 = -3534942649LL;
	int32_t x346 = -62800;
	volatile int16_t x347 = INT16_MIN;
	uint8_t x348 = 1U;
	volatile int32_t t77 = 3626048;

	t77 = ((x345<=(x346-x347))/x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = -24;
	int32_t x350 = -1;
	uint64_t x351 = 6472279061263223823LLU;
	static int64_t t78 = 192227395LL;

	t78 = ((x349<=(x350-x351))/x352);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = INT8_MIN;
	int32_t x354 = 23;
	int16_t x355 = -41;
	uint64_t x356 = 126021400575573LLU;

	t79 = ((x353<=(x354-x355))/x356);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x358 = UINT64_MAX;
	uint64_t x360 = UINT64_MAX;
	uint64_t t80 = 15101656133080630LLU;

	t80 = ((x357<=(x358-x359))/x360);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x361 = INT64_MAX;
	static int64_t x362 = -4585110LL;
	volatile int32_t x363 = INT32_MIN;
	uint64_t x364 = 18792LLU;
	volatile uint64_t t81 = 1345953999337712LLU;

	t81 = ((x361<=(x362-x363))/x364);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x366 = INT64_MIN;
	int32_t x367 = -1019675287;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t82 = 1518284LLU;

	t82 = ((x365<=(x366-x367))/x368);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x369 = UINT16_MAX;
	static int64_t x371 = -805666LL;
	volatile int64_t x372 = -1LL;
	volatile int64_t t83 = -511128LL;

	t83 = ((x369<=(x370-x371))/x372);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x374 = 1;
	int64_t x375 = -1LL;
	uint16_t x376 = UINT16_MAX;

	t84 = ((x373<=(x374-x375))/x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x377 = INT32_MIN;
	static int8_t x380 = -1;
	static volatile int32_t t85 = 54;

	t85 = ((x377<=(x378-x379))/x380);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x381 = UINT8_MAX;
	uint64_t x382 = 566057467966430866LLU;
	int32_t x383 = INT32_MIN;
	volatile uint16_t x384 = 125U;
	int32_t t86 = 1;

	t86 = ((x381<=(x382-x383))/x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = -1;
	int64_t x386 = INT64_MIN;
	uint64_t x387 = UINT64_MAX;
	int32_t t87 = -165223914;

	t87 = ((x385<=(x386-x387))/x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x389 = UINT8_MAX;
	uint16_t x390 = UINT16_MAX;
	uint32_t x391 = 788865U;
	uint64_t x392 = 25829128378LLU;
	volatile uint64_t t88 = 10027233611LLU;

	t88 = ((x389<=(x390-x391))/x392);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x394 = INT64_MAX;
	int64_t x395 = 32040LL;

	t89 = ((x393<=(x394-x395))/x396);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x397 = INT8_MIN;
	static uint32_t x398 = 1211581477U;
	int32_t x399 = -1;
	static int64_t x400 = INT64_MAX;
	int64_t t90 = 138675090738243682LL;

	t90 = ((x397<=(x398-x399))/x400);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x402 = 1;
	uint8_t x403 = 1U;
	int32_t x404 = INT32_MAX;
	volatile int32_t t91 = 18961633;

	t91 = ((x401<=(x402-x403))/x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x405 = INT64_MIN;
	int64_t x406 = -1LL;
	int64_t x407 = INT64_MIN;
	int16_t x408 = INT16_MIN;

	t92 = ((x405<=(x406-x407))/x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = 27LL;
	volatile uint8_t x410 = 21U;
	uint32_t x411 = 81U;
	int64_t x412 = INT64_MIN;
	volatile int64_t t93 = 677840LL;

	t93 = ((x409<=(x410-x411))/x412);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x415 = 171U;
	static int16_t x416 = INT16_MAX;
	int32_t t94 = 1280013;

	t94 = ((x413<=(x414-x415))/x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x417 = 66956072U;
	int16_t x419 = INT16_MAX;
	int64_t x420 = -470LL;
	volatile int64_t t95 = 743LL;

	t95 = ((x417<=(x418-x419))/x420);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x421 = 9095U;
	int16_t x423 = 90;

	t96 = ((x421<=(x422-x423))/x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x425 = 223U;
	volatile int64_t x427 = INT64_MIN;
	static int64_t x428 = INT64_MIN;
	volatile int64_t t97 = 109294873532580LL;

	t97 = ((x425<=(x426-x427))/x428);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x429 = INT16_MIN;
	static int32_t x430 = -15918858;
	static int8_t x431 = INT8_MAX;
	int8_t x432 = INT8_MAX;

	t98 = ((x429<=(x430-x431))/x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x433 = INT8_MIN;
	volatile int64_t x434 = -5LL;
	volatile uint64_t x435 = 112866278779487908LLU;
	uint32_t x436 = 7U;
	uint32_t t99 = 113U;

	t99 = ((x433<=(x434-x435))/x436);

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

