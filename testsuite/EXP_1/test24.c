#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = -1;
volatile int32_t x4 = -826634;
int32_t t2 = 5702;
static uint8_t x17 = 46U;
uint8_t x23 = UINT8_MAX;
uint16_t x27 = 6U;
static volatile int8_t x35 = INT8_MIN;
uint32_t t6 = 20693365U;
static volatile int32_t x50 = INT32_MIN;
uint64_t x59 = UINT64_MAX;
uint64_t t11 = 8185215182733LLU;
int64_t x64 = -1LL;
static int64_t x87 = -1LL;
int64_t t17 = -1146784422662651949LL;
uint64_t x101 = 0LLU;
uint32_t x112 = UINT32_MAX;
int64_t t22 = -551LL;
static uint8_t x125 = UINT8_MAX;
int16_t x126 = INT16_MIN;
int8_t x127 = INT8_MIN;
volatile int32_t x133 = INT32_MAX;
int8_t x134 = INT8_MIN;
volatile int32_t t27 = -170851871;
int32_t x141 = 2439;
static int16_t x143 = 28;
volatile int64_t t29 = -78721LL;
static int8_t x150 = -1;
int32_t x151 = INT32_MAX;
static volatile uint8_t x176 = 8U;
int16_t x179 = -1;
int32_t x180 = -1;
volatile uint8_t x182 = UINT8_MAX;
static volatile int64_t t36 = -27LL;
uint64_t x188 = UINT64_MAX;
static uint32_t x191 = 213U;
int32_t x195 = -1;
uint64_t x199 = UINT64_MAX;
volatile int64_t x200 = INT64_MIN;
int16_t x208 = -1;
int8_t x213 = INT8_MIN;
uint64_t t44 = 120413587161LLU;
static int8_t x225 = -10;
int64_t x226 = INT64_MAX;
static int64_t t46 = -5LL;
int64_t t47 = -44977301296280670LL;
int32_t t49 = -1;
int64_t x257 = INT64_MAX;
uint16_t x259 = UINT16_MAX;
int8_t x262 = INT8_MIN;
static uint16_t x266 = 1467U;
int16_t x273 = -1;
volatile uint16_t x282 = UINT16_MAX;
int64_t t57 = -33752816LL;
static int16_t x292 = INT16_MIN;
int64_t t59 = -665289837716416745LL;
int8_t x316 = INT8_MIN;
static int64_t x320 = 6581LL;
static int64_t t63 = -11128119577919419LL;
uint32_t x321 = 8U;
int16_t x322 = INT16_MIN;
int32_t x325 = INT32_MIN;
static int64_t x339 = INT64_MAX;
int8_t x340 = -9;
int64_t x342 = INT64_MAX;
int8_t x343 = 0;
volatile int64_t x353 = -1LL;
int64_t x356 = INT64_MIN;
int8_t x361 = INT8_MIN;
uint32_t x362 = UINT32_MAX;
volatile uint16_t x370 = 9764U;
static int16_t x371 = INT16_MIN;
volatile uint16_t x379 = 126U;
int16_t x385 = -2510;
int64_t t77 = 221941LL;
volatile int32_t x390 = 82014438;
static int8_t x396 = -1;
int8_t x406 = -1;
int16_t x423 = -1;
static int64_t t84 = -22865279172899985LL;
uint16_t x433 = 7U;
int16_t x437 = INT16_MIN;
volatile uint8_t x439 = 14U;
static volatile int64_t x443 = -1LL;
static volatile uint8_t x444 = 12U;
int64_t x453 = INT64_MIN;
int32_t x462 = INT32_MAX;
int16_t x468 = -1;
static volatile int32_t x469 = 20;
uint16_t x470 = 4022U;
volatile uint32_t t94 = 0U;
static int64_t x474 = -1LL;
volatile int32_t x489 = INT32_MIN;
static uint32_t x499 = 1U;


void f0(void) {
	int32_t x1 = -1;
	int32_t x2 = -29;
	static volatile int32_t t0 = -211613;

	t0 = (((x1+x2)-x3)&x4);

	if (t0 != -826654) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	static int32_t x10 = INT32_MIN;
	uint16_t x11 = UINT16_MAX;
	volatile int16_t x12 = 2555;
	int32_t t1 = -684;

	t1 = (((x9+x10)-x11)&x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 4;
	int16_t x14 = -13;
	uint8_t x15 = 5U;
	static int16_t x16 = 158;

	t2 = (((x13+x14)-x15)&x16);

	if (t2 != 146) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = 1;
	volatile uint64_t x19 = 40647LLU;
	int16_t x20 = -1;
	static uint64_t t3 = 1138624048121908115LLU;

	t3 = (((x17+x18)-x19)&x20);

	if (t3 != 18446744073709511016LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 3U;
	static volatile uint8_t x22 = 18U;
	int32_t x24 = INT32_MIN;
	int32_t t4 = INT32_MIN;

	t4 = (((x21+x22)-x23)&x24);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -12034329352064LL;
	volatile int16_t x26 = -14;
	int64_t x28 = INT64_MAX;
	volatile int64_t t5 = 32194055LL;

	t5 = (((x25+x26)-x27)&x28);

	if (t5 != 9223360002525423724LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x33 = INT8_MIN;
	uint32_t x34 = 17367364U;
	int8_t x36 = 1;

	t6 = (((x33+x34)-x35)&x36);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 24U;
	int16_t x42 = INT16_MIN;
	volatile int8_t x43 = -38;
	volatile uint64_t x44 = UINT64_MAX;
	uint64_t t7 = 4LLU;

	t7 = (((x41+x42)-x43)&x44);

	if (t7 != 18446744073709518910LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 179U;
	static int32_t x46 = -1;
	uint32_t x47 = 3383U;
	uint32_t x48 = 123U;
	uint32_t t8 = 0U;

	t8 = (((x45+x46)-x47)&x48);

	if (t8 != 123U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = 3720;
	int64_t x51 = INT64_MIN;
	volatile uint64_t x52 = 25403721146313138LLU;
	static uint64_t t9 = 50565LLU;

	t9 = (((x49+x50)-x51)&x52);

	if (t9 != 25403720091043968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	int16_t x54 = -1;
	int64_t x55 = -184651901876496LL;
	volatile int8_t x56 = -1;
	int64_t t10 = 256249219674035LL;

	t10 = (((x53+x54)-x55)&x56);

	if (t10 != 184651901843727LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = -1;
	int8_t x58 = -3;
	uint32_t x60 = 1634824U;

	t11 = (((x57+x58)-x59)&x60);

	if (t11 != 1634824LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = -15;
	static uint64_t x62 = 13098LLU;
	int64_t x63 = -25LL;
	static uint64_t t12 = 19735116406810016LLU;

	t12 = (((x61+x62)-x63)&x64);

	if (t12 != 13108LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = -1;
	int16_t x70 = INT16_MAX;
	int32_t x71 = 0;
	static int32_t x72 = 413007031;
	int32_t t13 = -17764003;

	t13 = (((x69+x70)-x71)&x72);

	if (t13 != 31926) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MAX;
	volatile int32_t x75 = -1;
	int8_t x76 = 0;
	int64_t t14 = -1058187LL;

	t14 = (((x73+x74)-x75)&x76);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -2;
	int16_t x78 = -1;
	int32_t x79 = -1;
	int64_t x80 = INT64_MIN;
	int64_t t15 = INT64_MIN;

	t15 = (((x77+x78)-x79)&x80);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x85 = 7U;
	volatile int32_t x86 = INT32_MAX;
	uint16_t x88 = 2U;
	volatile int64_t t16 = 130875185674LL;

	t16 = (((x85+x86)-x87)&x88);

	if (t16 != 2LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = UINT8_MAX;
	volatile int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MIN;
	static int32_t x92 = -1;

	t17 = (((x89+x90)-x91)&x92);

	if (t17 != -9223372034707291905LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x93 = 110LL;
	volatile int8_t x94 = INT8_MAX;
	uint64_t x95 = UINT64_MAX;
	volatile uint8_t x96 = 46U;
	uint64_t t18 = 3821606854593LLU;

	t18 = (((x93+x94)-x95)&x96);

	if (t18 != 46LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x102 = INT32_MIN;
	static uint8_t x103 = UINT8_MAX;
	static volatile int32_t x104 = INT32_MAX;
	volatile uint64_t t19 = 31936696847LLU;

	t19 = (((x101+x102)-x103)&x104);

	if (t19 != 2147483393LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x105 = INT8_MIN;
	volatile uint8_t x106 = 97U;
	uint8_t x107 = UINT8_MAX;
	volatile int8_t x108 = -1;
	int32_t t20 = -510052889;

	t20 = (((x105+x106)-x107)&x108);

	if (t20 != -286) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MAX;
	int32_t x110 = INT32_MIN;
	static volatile int16_t x111 = INT16_MIN;
	volatile uint32_t t21 = 7556U;

	t21 = (((x109+x110)-x111)&x112);

	if (t21 != 2147549183U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = 0U;
	int16_t x114 = INT16_MIN;
	volatile int64_t x115 = -1LL;
	int8_t x116 = -1;

	t22 = (((x113+x114)-x115)&x116);

	if (t22 != -32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x121 = -1;
	static int8_t x122 = INT8_MIN;
	static uint16_t x123 = 4872U;
	static int32_t x124 = -1;
	int32_t t23 = 184;

	t23 = (((x121+x122)-x123)&x124);

	if (t23 != -5001) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x128 = UINT16_MAX;
	volatile int32_t t24 = -544827;

	t24 = (((x125+x126)-x127)&x128);

	if (t24 != 33151) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x129 = INT64_MAX;
	int8_t x130 = INT8_MIN;
	volatile int8_t x131 = -1;
	static volatile uint32_t x132 = 1U;
	int64_t t25 = 0LL;

	t25 = (((x129+x130)-x131)&x132);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x135 = 12298;
	int32_t x136 = 8689;
	int32_t t26 = 9413;

	t26 = (((x133+x134)-x135)&x136);

	if (t26 != 369) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x137 = 11110532;
	int32_t x138 = INT32_MIN;
	uint8_t x139 = 0U;
	int16_t x140 = 1;

	t27 = (((x137+x138)-x139)&x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x142 = UINT64_MAX;
	static int32_t x144 = 119;
	volatile uint64_t t28 = 120094677508146971LLU;

	t28 = (((x141+x142)-x143)&x144);

	if (t28 != 98LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = -1;
	volatile int8_t x146 = INT8_MIN;
	int16_t x147 = 1;
	volatile int64_t x148 = -1911789572530LL;

	t29 = (((x145+x146)-x147)&x148);

	if (t29 != -1911789572530LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x149 = 3U;
	uint8_t x152 = 3U;
	int32_t t30 = -5834;

	t30 = (((x149+x150)-x151)&x152);

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = INT8_MAX;
	volatile int64_t x158 = 1633577798LL;
	uint16_t x159 = 57U;
	static volatile int64_t x160 = -1LL;
	static int64_t t31 = 1LL;

	t31 = (((x157+x158)-x159)&x160);

	if (t31 != 1633577868LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x161 = -1LL;
	volatile int8_t x162 = -1;
	uint8_t x163 = UINT8_MAX;
	static uint64_t x164 = 136302969451395916LLU;
	static volatile uint64_t t32 = 210116418LLU;

	t32 = (((x161+x162)-x163)&x164);

	if (t32 != 136302969451395660LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x169 = -176615;
	int64_t x170 = -1LL;
	static uint32_t x171 = 788485U;
	int64_t x172 = -1LL;
	volatile int64_t t33 = 15801LL;

	t33 = (((x169+x170)-x171)&x172);

	if (t33 != -965101LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x173 = 4U;
	uint16_t x174 = 0U;
	int64_t x175 = INT64_MAX;
	static int64_t t34 = -421427963020LL;

	t34 = (((x173+x174)-x175)&x176);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = -1;
	int16_t x178 = INT16_MAX;
	int32_t t35 = -58;

	t35 = (((x177+x178)-x179)&x180);

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x181 = 45LL;
	volatile int16_t x183 = INT16_MAX;
	uint32_t x184 = UINT32_MAX;

	t36 = (((x181+x182)-x183)&x184);

	if (t36 != 4294934829LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x185 = 328;
	uint16_t x186 = 252U;
	static uint32_t x187 = 13226512U;
	uint64_t t37 = 256838243614981243LLU;

	t37 = (((x185+x186)-x187)&x188);

	if (t37 != 4281741364LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x189 = 34;
	int16_t x190 = -1;
	int64_t x192 = -1LL;
	int64_t t38 = 32372524LL;

	t38 = (((x189+x190)-x191)&x192);

	if (t38 != 4294967116LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x193 = 6U;
	int8_t x194 = INT8_MIN;
	int64_t x196 = -1LL;
	volatile int64_t t39 = -182936280561934827LL;

	t39 = (((x193+x194)-x195)&x196);

	if (t39 != 4294967175LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x197 = 0;
	uint16_t x198 = UINT16_MAX;
	volatile uint64_t t40 = 20251LLU;

	t40 = (((x197+x198)-x199)&x200);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MIN;
	int64_t t41 = INT64_MIN;

	t41 = (((x201+x202)-x203)&x204);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x205 = 1U;
	volatile uint64_t x206 = 22LLU;
	int32_t x207 = INT32_MIN;
	uint64_t t42 = 910LLU;

	t42 = (((x205+x206)-x207)&x208);

	if (t42 != 2147483671LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x209 = INT16_MAX;
	volatile int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	static int8_t x212 = INT8_MAX;
	volatile int64_t t43 = -47709562666LL;

	t43 = (((x209+x210)-x211)&x212);

	if (t43 != 127LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x214 = 101688636680853LLU;
	static int32_t x215 = 90701;
	static uint16_t x216 = 6669U;

	t44 = (((x213+x214)-x215)&x216);

	if (t44 != 520LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = INT16_MAX;
	uint8_t x223 = 4U;
	int16_t x224 = 2688;
	static int32_t t45 = -13912;

	t45 = (((x221+x222)-x223)&x224);

	if (t45 != 2688) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x227 = -1LL;
	int32_t x228 = INT32_MAX;

	t46 = (((x225+x226)-x227)&x228);

	if (t46 != 2147483638LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x229 = UINT16_MAX;
	static int64_t x230 = -48710LL;
	int16_t x231 = -1;
	volatile int16_t x232 = INT16_MIN;

	t47 = (((x229+x230)-x231)&x232);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x233 = INT8_MIN;
	static uint16_t x234 = 123U;
	int32_t x235 = INT32_MIN;
	int8_t x236 = 2;
	int32_t t48 = 731290778;

	t48 = (((x233+x234)-x235)&x236);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = -1;
	volatile int8_t x238 = INT8_MAX;
	uint8_t x239 = 0U;
	int8_t x240 = 11;

	t49 = (((x237+x238)-x239)&x240);

	if (t49 != 10) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = 983244LL;
	static uint16_t x242 = 250U;
	static int64_t x243 = -1LL;
	volatile uint64_t x244 = UINT64_MAX;
	static uint64_t t50 = 2680LLU;

	t50 = (((x241+x242)-x243)&x244);

	if (t50 != 983495LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = INT8_MAX;
	int16_t x246 = INT16_MIN;
	int64_t x247 = INT64_MIN;
	volatile int16_t x248 = INT16_MAX;
	static volatile int64_t t51 = -441513LL;

	t51 = (((x245+x246)-x247)&x248);

	if (t51 != 127LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x249 = -1LL;
	static volatile int16_t x250 = 6965;
	static uint16_t x251 = 74U;
	int32_t x252 = INT32_MAX;
	volatile int64_t t52 = 17329LL;

	t52 = (((x249+x250)-x251)&x252);

	if (t52 != 6890LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x258 = INT64_MIN;
	int32_t x260 = INT32_MIN;
	static int64_t t53 = -11613LL;

	t53 = (((x257+x258)-x259)&x260);

	if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = -1LL;
	int16_t x263 = 2;
	static uint32_t x264 = 7233U;
	static volatile int64_t t54 = 427974LL;

	t54 = (((x261+x262)-x263)&x264);

	if (t54 != 7233LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x265 = 112126U;
	static uint8_t x267 = 4U;
	static uint16_t x268 = 3U;
	uint32_t t55 = 17278306U;

	t55 = (((x265+x266)-x267)&x268);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x274 = 62936714973LLU;
	int16_t x275 = -2315;
	volatile uint64_t x276 = UINT64_MAX;
	volatile uint64_t t56 = 26770403475LLU;

	t56 = (((x273+x274)-x275)&x276);

	if (t56 != 62936717287LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x281 = INT64_MIN;
	static int32_t x283 = INT32_MIN;
	int32_t x284 = 1191;

	t57 = (((x281+x282)-x283)&x284);

	if (t57 != 1191LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x289 = 2935530U;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	volatile uint32_t t58 = 2647082U;

	t58 = (((x289+x290)-x291)&x292);

	if (t58 != 2883584U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x293 = 0U;
	int32_t x294 = -51685818;
	volatile int64_t x295 = INT64_MIN;
	int32_t x296 = 130;

	t59 = (((x293+x294)-x295)&x296);

	if (t59 != 2LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x301 = -1936;
	int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MAX;
	volatile int16_t x304 = -1;
	static volatile int32_t t60 = 136625595;

	t60 = (((x301+x302)-x303)&x304);

	if (t60 != -2191) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = 165;
	int8_t x311 = -1;
	volatile int8_t x312 = -21;
	volatile int32_t t61 = -10;

	t61 = (((x309+x310)-x311)&x312);

	if (t61 != -32606) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x313 = UINT64_MAX;
	int64_t x314 = INT64_MIN;
	int8_t x315 = -1;
	volatile uint64_t t62 = 2448050784664031585LLU;

	t62 = (((x313+x314)-x315)&x316);

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x317 = UINT32_MAX;
	int8_t x318 = 41;
	uint32_t x319 = 5053470U;

	t63 = (((x317+x318)-x319)&x320);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x323 = 5544U;
	static uint64_t x324 = 0LLU;
	static uint64_t t64 = 18509LLU;

	t64 = (((x321+x322)-x323)&x324);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x326 = 2922U;
	int64_t x327 = -13156661291LL;
	int32_t x328 = INT32_MAX;
	static volatile int64_t t65 = -10461719LL;

	t65 = (((x325+x326)-x327)&x328);

	if (t65 != 271762325LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x329 = INT8_MIN;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = -1;
	int16_t x332 = INT16_MIN;
	volatile uint32_t t66 = 782993894U;

	t66 = (((x329+x330)-x331)&x332);

	if (t66 != 4294934528U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x337 = 398884696U;
	static int8_t x338 = -1;
	int64_t t67 = -5504LL;

	t67 = (((x337+x338)-x339)&x340);

	if (t67 != -9223372036455891120LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x341 = INT16_MIN;
	uint64_t x344 = 160LLU;
	volatile uint64_t t68 = 8469064037175357LLU;

	t68 = (((x341+x342)-x343)&x344);

	if (t68 != 160LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x345 = 1357104500748LLU;
	int16_t x346 = -1;
	volatile int8_t x347 = -1;
	static uint16_t x348 = 345U;
	volatile uint64_t t69 = 3LLU;

	t69 = (((x345+x346)-x347)&x348);

	if (t69 != 8LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = 805;
	int32_t x350 = 16071171;
	static uint32_t x351 = UINT32_MAX;
	uint32_t x352 = 10159917U;
	uint32_t t70 = 8U;

	t70 = (((x349+x350)-x351)&x352);

	if (t70 != 9504041U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x354 = 7297U;
	uint16_t x355 = 384U;
	volatile int64_t t71 = 7766019814480694LL;

	t71 = (((x353+x354)-x355)&x356);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x363 = 18U;
	int16_t x364 = -352;
	volatile uint32_t t72 = 29U;

	t72 = (((x361+x362)-x363)&x364);

	if (t72 != 4294966816U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x365 = 58U;
	int64_t x366 = INT64_MIN;
	int64_t x367 = INT64_MIN;
	volatile int64_t x368 = INT64_MIN;
	volatile int64_t t73 = -13LL;

	t73 = (((x365+x366)-x367)&x368);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x369 = INT8_MIN;
	int8_t x372 = INT8_MAX;
	int32_t t74 = -505040;

	t74 = (((x369+x370)-x371)&x372);

	if (t74 != 36) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x373 = 115U;
	static int32_t x374 = INT32_MIN;
	int64_t x375 = INT64_MIN;
	volatile uint64_t x376 = 1954281737087LLU;
	volatile uint64_t t75 = 1041430472475653LLU;

	t75 = (((x373+x374)-x375)&x376);

	if (t75 != 1954210119795LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x377 = UINT64_MAX;
	uint32_t x378 = UINT32_MAX;
	volatile int16_t x380 = -2771;
	uint64_t t76 = 2LLU;

	t76 = (((x377+x378)-x379)&x380);

	if (t76 != 4294964480LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x386 = INT8_MAX;
	int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MIN;

	t77 = (((x385+x386)-x387)&x388);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x389 = INT8_MAX;
	int64_t x391 = INT64_MAX;
	int32_t x392 = INT32_MIN;
	volatile int64_t t78 = INT64_MIN;

	t78 = (((x389+x390)-x391)&x392);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x393 = 0LLU;
	int8_t x394 = INT8_MAX;
	int16_t x395 = INT16_MIN;
	volatile uint64_t t79 = 423321411LLU;

	t79 = (((x393+x394)-x395)&x396);

	if (t79 != 32895LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x401 = UINT64_MAX;
	int32_t x402 = -1;
	int8_t x403 = -2;
	int32_t x404 = INT32_MAX;
	static volatile uint64_t t80 = 2680547LLU;

	t80 = (((x401+x402)-x403)&x404);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x405 = -108723LL;
	int16_t x407 = -7;
	uint16_t x408 = 33U;
	volatile int64_t t81 = -1LL;

	t81 = (((x405+x406)-x407)&x408);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x409 = 3862808496631433299LL;
	uint64_t x410 = 487474688206LLU;
	static int8_t x411 = -1;
	volatile int64_t x412 = INT64_MIN;
	uint64_t t82 = 11067LLU;

	t82 = (((x409+x410)-x411)&x412);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x413 = -1;
	int64_t x414 = 573LL;
	int8_t x415 = -1;
	int8_t x416 = -1;
	volatile int64_t t83 = -16102506268824LL;

	t83 = (((x413+x414)-x415)&x416);

	if (t83 != 573LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x421 = INT64_MIN;
	int32_t x422 = 389;
	volatile int16_t x424 = -1847;

	t84 = (((x421+x422)-x423)&x424);

	if (t84 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x425 = INT32_MAX;
	int32_t x426 = INT32_MIN;
	uint16_t x427 = UINT16_MAX;
	uint8_t x428 = 0U;
	static volatile int32_t t85 = -178564;

	t85 = (((x425+x426)-x427)&x428);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x429 = UINT64_MAX;
	static volatile uint8_t x430 = UINT8_MAX;
	volatile int16_t x431 = -1;
	int8_t x432 = INT8_MIN;
	volatile uint64_t t86 = 20LLU;

	t86 = (((x429+x430)-x431)&x432);

	if (t86 != 128LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x434 = INT8_MIN;
	uint16_t x435 = 20U;
	uint32_t x436 = 8U;
	uint32_t t87 = 2462425U;

	t87 = (((x433+x434)-x435)&x436);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x438 = UINT8_MAX;
	int8_t x440 = -1;
	static int32_t t88 = -34959;

	t88 = (((x437+x438)-x439)&x440);

	if (t88 != -32527) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x441 = UINT16_MAX;
	static volatile uint64_t x442 = 421913391284433286LLU;
	uint64_t t89 = 343063LLU;

	t89 = (((x441+x442)-x443)&x444);

	if (t89 != 4LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x454 = 57U;
	int16_t x455 = -1;
	int64_t x456 = -1LL;
	volatile int64_t t90 = -894LL;

	t90 = (((x453+x454)-x455)&x456);

	if (t90 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x457 = 221U;
	uint32_t x458 = 68257385U;
	int64_t x459 = INT64_MAX;
	volatile uint64_t x460 = UINT64_MAX;
	volatile uint64_t t91 = 131802LLU;

	t91 = (((x457+x458)-x459)&x460);

	if (t91 != 9223372036923033415LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x461 = -1;
	static uint32_t x463 = UINT32_MAX;
	uint64_t x464 = UINT64_MAX;
	volatile uint64_t t92 = 19632533075361LLU;

	t92 = (((x461+x462)-x463)&x464);

	if (t92 != 2147483647LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x465 = 52986872999LLU;
	uint8_t x466 = UINT8_MAX;
	int8_t x467 = INT8_MAX;
	static uint64_t t93 = 108085408607799438LLU;

	t93 = (((x465+x466)-x467)&x468);

	if (t93 != 52986873127LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x471 = 5U;
	int16_t x472 = INT16_MIN;

	t94 = (((x469+x470)-x471)&x472);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x473 = INT8_MAX;
	int64_t x475 = -90186338LL;
	int16_t x476 = INT16_MIN;
	volatile int64_t t95 = 217512LL;

	t95 = (((x473+x474)-x475)&x476);

	if (t95 != 90177536LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x477 = 2U;
	int8_t x478 = -1;
	uint16_t x479 = 1541U;
	volatile int16_t x480 = INT16_MAX;
	volatile int32_t t96 = -121;

	t96 = (((x477+x478)-x479)&x480);

	if (t96 != 31228) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x490 = INT16_MAX;
	int8_t x491 = INT8_MAX;
	int8_t x492 = -3;
	int32_t t97 = -918744;

	t97 = (((x489+x490)-x491)&x492);

	if (t97 != -2147451008) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x493 = UINT64_MAX;
	uint8_t x494 = UINT8_MAX;
	int8_t x495 = -1;
	int64_t x496 = 22722660LL;
	static volatile uint64_t t98 = 17LLU;

	t98 = (((x493+x494)-x495)&x496);

	if (t98 != 100LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x497 = UINT16_MAX;
	uint32_t x498 = 449163185U;
	volatile uint64_t x500 = UINT64_MAX;
	static volatile uint64_t t99 = 1243412831583430LLU;

	t99 = (((x497+x498)-x499)&x500);

	if (t99 != 449228719LLU) { NG(); } else { ; }
	
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

