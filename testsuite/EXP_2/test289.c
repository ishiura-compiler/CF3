#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 1;
int16_t x8 = 119;
int64_t x10 = -28589897750LL;
int8_t x14 = INT8_MAX;
volatile int32_t t2 = -9263;
volatile int64_t x28 = INT64_MAX;
int16_t x31 = 24;
uint8_t x49 = UINT8_MAX;
static uint16_t x51 = 1U;
int32_t t9 = 19908;
uint32_t x56 = 428U;
uint32_t x59 = 56186U;
static int64_t x62 = -22498898732882115LL;
volatile uint16_t x64 = 1830U;
static uint8_t x66 = 33U;
int64_t x79 = -103931LL;
int8_t x80 = INT8_MIN;
volatile int64_t t17 = -937641200LL;
int32_t x87 = -1;
static volatile uint16_t x95 = 5U;
static volatile int8_t x100 = INT8_MIN;
volatile int32_t t21 = 1422920;
uint32_t x102 = 295480U;
static int64_t x107 = -1262237484030LL;
uint8_t x139 = 15U;
volatile int32_t t30 = -13383;
volatile int32_t x141 = -185;
int16_t x142 = -9;
volatile uint64_t t31 = 741LLU;
volatile int8_t x145 = INT8_MAX;
static int16_t x146 = -1;
volatile int32_t t32 = 8;
static int32_t x155 = 5791185;
static volatile int32_t t34 = 459;
static uint64_t x158 = 7373344417994649782LLU;
int8_t x159 = -1;
uint64_t x163 = 6210LLU;
static int16_t x164 = INT16_MAX;
static int16_t x166 = INT16_MIN;
static volatile int32_t t37 = -892329;
uint8_t x169 = 0U;
int16_t x178 = -192;
int32_t x179 = -1;
volatile int8_t x180 = -1;
int16_t x181 = INT16_MIN;
uint8_t x183 = UINT8_MAX;
volatile uint8_t x185 = UINT8_MAX;
int32_t t42 = 27;
static int8_t x195 = INT8_MAX;
uint8_t x202 = 3U;
static uint16_t x208 = 11U;
volatile int64_t x209 = 41LL;
volatile int16_t x211 = 0;
volatile int32_t x213 = 50;
uint32_t x217 = UINT32_MAX;
uint64_t x227 = 822891127LLU;
uint16_t x229 = 2842U;
uint32_t x231 = 55327U;
int64_t x237 = INT64_MAX;
uint64_t x242 = UINT64_MAX;
int32_t x243 = INT32_MIN;
int64_t x247 = 89881LL;
static volatile uint16_t x253 = UINT16_MAX;
int16_t x258 = -1;
int64_t x264 = -1LL;
uint8_t x265 = UINT8_MAX;
uint32_t x276 = 0U;
int64_t x278 = INT64_MIN;
volatile int32_t t61 = -7091;
int16_t x289 = -199;
static int16_t x294 = INT16_MAX;
int32_t x300 = -1;
static uint64_t x309 = 65866320LLU;
int32_t t68 = -189;
int64_t x318 = INT64_MIN;
volatile int64_t t72 = 361564802742LL;
static volatile uint64_t x329 = UINT64_MAX;
static int8_t x333 = INT8_MIN;
volatile uint8_t x342 = UINT8_MAX;
uint32_t x348 = UINT32_MAX;
static int64_t x354 = INT64_MIN;
uint8_t x358 = 81U;
uint64_t x365 = UINT64_MAX;
int16_t x367 = 58;
static uint64_t x368 = UINT64_MAX;
int64_t x369 = INT64_MIN;
int64_t x378 = INT64_MAX;
volatile uint64_t x388 = 1935267550246040LLU;
int16_t x395 = INT16_MIN;
static int8_t x396 = -1;
uint32_t x397 = 94245U;
int32_t x398 = -1;
volatile int16_t x405 = INT16_MIN;
uint16_t x408 = 46U;
uint8_t x417 = UINT8_MAX;
int64_t t92 = -60570691525471LL;
volatile int32_t t93 = 97102;
static int64_t t94 = INT64_MIN;
static volatile int32_t t95 = 41;
int8_t x434 = INT8_MIN;
uint64_t x441 = 985963577355763LLU;
int16_t x444 = 477;
int8_t x450 = -6;


void f0(void) {
	static int16_t x6 = -1;
	uint8_t x7 = 13U;
	static int32_t t0 = 27054;

	t0 = ((x5<=(x6-x7))*x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = -1;
	int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MAX;
	volatile int32_t t1 = -25599;

	t1 = ((x9<=(x10-x11))*x12);

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = 9314LL;
	uint16_t x15 = UINT16_MAX;
	int32_t x16 = -968;

	t2 = ((x13<=(x14-x15))*x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 120U;
	int64_t x22 = -35655LL;
	volatile int16_t x23 = -505;
	int8_t x24 = INT8_MIN;
	volatile int32_t t3 = -61823;

	t3 = ((x21<=(x22-x23))*x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x25 = UINT64_MAX;
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MAX;
	volatile int64_t t4 = -4042829LL;

	t4 = ((x25<=(x26-x27))*x28);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = UINT8_MAX;
	uint16_t x30 = 3U;
	int64_t x32 = 0LL;
	volatile int64_t t5 = 206010779117LL;

	t5 = ((x29<=(x30-x31))*x32);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 691961111181LLU;
	uint32_t x34 = UINT32_MAX;
	volatile int16_t x35 = -1;
	uint16_t x36 = 12U;
	volatile int32_t t6 = 16379;

	t6 = ((x33<=(x34-x35))*x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 126U;
	int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	volatile int16_t x44 = INT16_MIN;
	static int32_t t7 = 1;

	t7 = ((x41<=(x42-x43))*x44);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 2U;
	int64_t x46 = 11936996873841LL;
	static int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	volatile int32_t t8 = -2427;

	t8 = ((x45<=(x46-x47))*x48);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x50 = INT16_MIN;
	int16_t x52 = INT16_MIN;

	t9 = ((x49<=(x50-x51))*x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -4051344;
	volatile uint8_t x54 = 1U;
	int32_t x55 = 2903470;
	volatile uint32_t t10 = 916452300U;

	t10 = ((x53<=(x54-x55))*x56);

	if (t10 != 428U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x57 = INT32_MAX;
	int32_t x58 = INT32_MIN;
	uint32_t x60 = 3472561U;
	volatile uint32_t t11 = 20074U;

	t11 = ((x57<=(x58-x59))*x60);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 46775671737957LLU;
	volatile uint32_t x63 = 453727U;
	volatile int32_t t12 = 4704;

	t12 = ((x61<=(x62-x63))*x64);

	if (t12 != 1830) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x65 = INT64_MIN;
	uint16_t x67 = 12381U;
	int32_t x68 = -1;
	int32_t t13 = 85581;

	t13 = ((x65<=(x66-x67))*x68);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -1LL;
	uint8_t x70 = 22U;
	volatile uint32_t x71 = UINT32_MAX;
	int64_t x72 = INT64_MAX;
	volatile int64_t t14 = INT64_MAX;

	t14 = ((x69<=(x70-x71))*x72);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = UINT64_MAX;
	uint32_t x74 = 185U;
	static uint32_t x75 = UINT32_MAX;
	uint32_t x76 = 11897U;
	volatile uint32_t t15 = 1U;

	t15 = ((x73<=(x74-x75))*x76);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = -1;
	int32_t t16 = -2608697;

	t16 = ((x77<=(x78-x79))*x80);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x81 = 3699U;
	static int8_t x82 = INT8_MIN;
	int16_t x83 = 1;
	int64_t x84 = -13731326752932011LL;

	t17 = ((x81<=(x82-x83))*x84);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 287703U;
	int16_t x86 = -1;
	volatile int64_t x88 = INT64_MAX;
	int64_t t18 = 8LL;

	t18 = ((x85<=(x86-x87))*x88);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 37074606122633469LLU;
	static int32_t x90 = INT32_MAX;
	uint8_t x91 = 49U;
	uint64_t x92 = 7682334286251811150LLU;
	uint64_t t19 = 13264128141614673LLU;

	t19 = ((x89<=(x90-x91))*x92);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	int32_t x94 = -1;
	static int8_t x96 = 1;
	int32_t t20 = 2;

	t20 = ((x93<=(x94-x95))*x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = UINT32_MAX;
	volatile int16_t x98 = INT16_MIN;
	uint8_t x99 = UINT8_MAX;

	t21 = ((x97<=(x98-x99))*x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = 2;
	int16_t x103 = INT16_MIN;
	volatile int64_t x104 = -15044397133826488LL;
	int64_t t22 = 45025949780927721LL;

	t22 = ((x101<=(x102-x103))*x104);

	if (t22 != -15044397133826488LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = 0LLU;
	int32_t x106 = INT32_MAX;
	volatile int16_t x108 = INT16_MIN;
	int32_t t23 = 94691179;

	t23 = ((x105<=(x106-x107))*x108);

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x109 = 950458560LLU;
	int64_t x110 = -32782069946LL;
	int32_t x111 = 474938;
	volatile int8_t x112 = 1;
	volatile int32_t t24 = -24193;

	t24 = ((x109<=(x110-x111))*x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x117 = -23;
	int8_t x118 = INT8_MIN;
	static int64_t x119 = 11449510945313388LL;
	volatile int16_t x120 = INT16_MIN;
	volatile int32_t t25 = -33686391;

	t25 = ((x117<=(x118-x119))*x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x121 = UINT16_MAX;
	int8_t x122 = -1;
	static int8_t x123 = INT8_MAX;
	int8_t x124 = 30;
	int32_t t26 = -22;

	t26 = ((x121<=(x122-x123))*x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 81U;
	volatile int8_t x126 = 1;
	volatile int64_t x127 = 11059039857LL;
	int32_t x128 = INT32_MIN;
	int32_t t27 = -1380;

	t27 = ((x125<=(x126-x127))*x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = UINT8_MAX;
	uint16_t x130 = UINT16_MAX;
	uint16_t x131 = UINT16_MAX;
	uint64_t x132 = UINT64_MAX;
	uint64_t t28 = 263690960LLU;

	t28 = ((x129<=(x130-x131))*x132);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MIN;
	int16_t x135 = -12254;
	volatile int32_t x136 = INT32_MIN;
	static volatile int32_t t29 = INT32_MIN;

	t29 = ((x133<=(x134-x135))*x136);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 28138U;
	volatile uint16_t x138 = UINT16_MAX;
	static int16_t x140 = INT16_MIN;

	t30 = ((x137<=(x138-x139))*x140);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x143 = INT16_MAX;
	static uint64_t x144 = 85052072LLU;

	t31 = ((x141<=(x142-x143))*x144);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x147 = INT8_MIN;
	volatile int32_t x148 = 133;

	t32 = ((x145<=(x146-x147))*x148);

	if (t32 != 133) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x149 = -937;
	uint8_t x150 = UINT8_MAX;
	static uint16_t x151 = 25U;
	int16_t x152 = -11664;
	static volatile int32_t t33 = -60315595;

	t33 = ((x149<=(x150-x151))*x152);

	if (t33 != -11664) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MIN;
	uint8_t x154 = UINT8_MAX;
	int16_t x156 = INT16_MAX;

	t34 = ((x153<=(x154-x155))*x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x157 = 13528U;
	int8_t x160 = -7;
	volatile int32_t t35 = 25;

	t35 = ((x157<=(x158-x159))*x160);

	if (t35 != -7) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 63U;
	int32_t x162 = -1;
	int32_t t36 = -1;

	t36 = ((x161<=(x162-x163))*x164);

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = -1;
	uint16_t x167 = 1U;
	static uint16_t x168 = 68U;

	t37 = ((x165<=(x166-x167))*x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x170 = 77;
	int8_t x171 = INT8_MIN;
	volatile int64_t x172 = 7174813070LL;
	volatile int64_t t38 = -612086963874889905LL;

	t38 = ((x169<=(x170-x171))*x172);

	if (t38 != 7174813070LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = 4;
	int32_t x174 = INT32_MAX;
	uint16_t x175 = 27U;
	static volatile int64_t x176 = -665412609LL;
	volatile int64_t t39 = 14124856810628940LL;

	t39 = ((x173<=(x174-x175))*x176);

	if (t39 != -665412609LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = 125U;
	static int32_t t40 = 9405233;

	t40 = ((x177<=(x178-x179))*x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x182 = INT32_MAX;
	volatile int32_t x184 = -3801892;
	int32_t t41 = -24518595;

	t41 = ((x181<=(x182-x183))*x184);

	if (t41 != -3801892) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x186 = 12870933U;
	int64_t x187 = -1LL;
	uint8_t x188 = 3U;

	t42 = ((x185<=(x186-x187))*x188);

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -159051;
	int32_t x190 = -1;
	uint8_t x191 = UINT8_MAX;
	int64_t x192 = INT64_MIN;
	volatile int64_t t43 = INT64_MIN;

	t43 = ((x189<=(x190-x191))*x192);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = -1;
	int64_t x194 = 26624054225625297LL;
	volatile uint64_t x196 = 3124LLU;
	volatile uint64_t t44 = 322208LLU;

	t44 = ((x193<=(x194-x195))*x196);

	if (t44 != 3124LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x201 = INT64_MIN;
	int64_t x203 = INT64_MAX;
	volatile int64_t x204 = INT64_MIN;
	static volatile int64_t t45 = INT64_MIN;

	t45 = ((x201<=(x202-x203))*x204);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = 2097593U;
	int64_t x206 = -1LL;
	int16_t x207 = -1;
	volatile int32_t t46 = -48748374;

	t46 = ((x205<=(x206-x207))*x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x210 = INT32_MIN;
	static uint64_t x212 = 560LLU;
	volatile uint64_t t47 = 7LLU;

	t47 = ((x209<=(x210-x211))*x212);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x214 = -4;
	int64_t x215 = -1LL;
	uint64_t x216 = 64961668LLU;
	volatile uint64_t t48 = 9417569LLU;

	t48 = ((x213<=(x214-x215))*x216);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x218 = -1;
	int16_t x219 = -1;
	int8_t x220 = 9;
	volatile int32_t t49 = -1564763;

	t49 = ((x217<=(x218-x219))*x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x225 = 586U;
	int8_t x226 = INT8_MIN;
	volatile int64_t x228 = INT64_MIN;
	int64_t t50 = INT64_MIN;

	t50 = ((x225<=(x226-x227))*x228);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x230 = UINT16_MAX;
	static volatile int16_t x232 = 3336;
	static volatile int32_t t51 = 0;

	t51 = ((x229<=(x230-x231))*x232);

	if (t51 != 3336) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x238 = 72;
	int8_t x239 = -1;
	uint64_t x240 = 237741LLU;
	uint64_t t52 = 967078918LLU;

	t52 = ((x237<=(x238-x239))*x240);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = INT64_MIN;
	int32_t x244 = INT32_MIN;
	static volatile int32_t t53 = 248;

	t53 = ((x241<=(x242-x243))*x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x245 = -50LL;
	uint8_t x246 = 1U;
	int8_t x248 = INT8_MIN;
	volatile int32_t t54 = -1;

	t54 = ((x245<=(x246-x247))*x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x254 = 103;
	static int64_t x255 = 238943660440007LL;
	int16_t x256 = -1;
	volatile int32_t t55 = -1283306;

	t55 = ((x253<=(x254-x255))*x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MIN;
	int64_t x259 = 84289704705LL;
	static uint16_t x260 = 5U;
	int32_t t56 = -228;

	t56 = ((x257<=(x258-x259))*x260);

	if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x261 = -7;
	uint16_t x262 = UINT16_MAX;
	volatile int8_t x263 = -1;
	int64_t t57 = 2033113060136685073LL;

	t57 = ((x261<=(x262-x263))*x264);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x266 = UINT32_MAX;
	static uint32_t x267 = UINT32_MAX;
	uint16_t x268 = 24321U;
	volatile int32_t t58 = 6468844;

	t58 = ((x265<=(x266-x267))*x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = INT8_MIN;
	int64_t x274 = INT64_MAX;
	int16_t x275 = INT16_MAX;
	volatile uint32_t t59 = 284367880U;

	t59 = ((x273<=(x274-x275))*x276);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = INT64_MAX;
	uint64_t x279 = 571954LLU;
	volatile int8_t x280 = INT8_MIN;
	int32_t t60 = -801;

	t60 = ((x277<=(x278-x279))*x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int8_t x282 = 0;
	int8_t x283 = INT8_MAX;
	static int8_t x284 = -1;

	t61 = ((x281<=(x282-x283))*x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = INT32_MIN;
	static int16_t x286 = INT16_MIN;
	int64_t x287 = 79624414819471408LL;
	int32_t x288 = INT32_MAX;
	static volatile int32_t t62 = 0;

	t62 = ((x285<=(x286-x287))*x288);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x290 = 48;
	volatile int16_t x291 = INT16_MAX;
	volatile uint16_t x292 = 385U;
	volatile int32_t t63 = -5;

	t63 = ((x289<=(x290-x291))*x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x293 = UINT16_MAX;
	uint16_t x295 = UINT16_MAX;
	static int16_t x296 = 13268;
	volatile int32_t t64 = -191034905;

	t64 = ((x293<=(x294-x295))*x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x297 = INT16_MIN;
	static int64_t x298 = 243306162LL;
	static int32_t x299 = -1;
	volatile int32_t t65 = -87;

	t65 = ((x297<=(x298-x299))*x300);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = INT64_MAX;
	uint8_t x302 = 87U;
	int32_t x303 = INT32_MAX;
	int32_t x304 = INT32_MIN;
	int32_t t66 = 456568;

	t66 = ((x301<=(x302-x303))*x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = -1;
	volatile uint32_t x307 = 173567217U;
	volatile int64_t x308 = 5LL;
	int64_t t67 = -5434515579456580LL;

	t67 = ((x305<=(x306-x307))*x308);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x310 = 22U;
	int64_t x311 = -495929644864040448LL;
	int8_t x312 = 36;

	t68 = ((x309<=(x310-x311))*x312);

	if (t68 != 36) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x313 = INT32_MAX;
	static int32_t x314 = INT32_MIN;
	uint32_t x315 = UINT32_MAX;
	int64_t x316 = 5216391297LL;
	volatile int64_t t69 = 32318LL;

	t69 = ((x313<=(x314-x315))*x316);

	if (t69 != 5216391297LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x317 = 1;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	volatile int32_t t70 = -38919;

	t70 = ((x317<=(x318-x319))*x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = -2;
	uint16_t x322 = 3540U;
	uint64_t x323 = UINT64_MAX;
	uint8_t x324 = UINT8_MAX;
	int32_t t71 = 101918;

	t71 = ((x321<=(x322-x323))*x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = INT32_MIN;
	uint64_t x326 = 1LLU;
	volatile int16_t x327 = -36;
	int64_t x328 = 358632676LL;

	t72 = ((x325<=(x326-x327))*x328);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x330 = 915587LL;
	int32_t x331 = INT32_MAX;
	int64_t x332 = 1955328266456778676LL;
	volatile int64_t t73 = -239235749LL;

	t73 = ((x329<=(x330-x331))*x332);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x334 = 1099454238282LLU;
	volatile uint64_t x335 = 5300154838714LLU;
	static int32_t x336 = -7588670;
	volatile int32_t t74 = 32954;

	t74 = ((x333<=(x334-x335))*x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x337 = 2U;
	volatile uint32_t x338 = 0U;
	static int32_t x339 = -1;
	int16_t x340 = 1;
	int32_t t75 = 20;

	t75 = ((x337<=(x338-x339))*x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x341 = 1;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = 13U;
	static int32_t t76 = 6;

	t76 = ((x341<=(x342-x343))*x344);

	if (t76 != 13) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x345 = 369344894966628LLU;
	int32_t x346 = INT32_MIN;
	static int8_t x347 = -10;
	static volatile uint32_t t77 = UINT32_MAX;

	t77 = ((x345<=(x346-x347))*x348);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = -23;
	static int64_t x355 = -1468995199384670966LL;
	static int64_t x356 = 8009130099707LL;
	volatile int64_t t78 = 389150277971601LL;

	t78 = ((x353<=(x354-x355))*x356);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = -1;
	static uint16_t x359 = 6U;
	uint8_t x360 = 2U;
	int32_t t79 = -2750;

	t79 = ((x357<=(x358-x359))*x360);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x361 = INT16_MIN;
	static int8_t x362 = 15;
	volatile int16_t x363 = -1;
	volatile uint64_t x364 = 11LLU;
	static volatile uint64_t t80 = 196LLU;

	t80 = ((x361<=(x362-x363))*x364);

	if (t80 != 11LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x366 = INT64_MAX;
	uint64_t t81 = 1763750399LLU;

	t81 = ((x365<=(x366-x367))*x368);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x370 = 6847530542LLU;
	uint32_t x371 = UINT32_MAX;
	int32_t x372 = -1;
	volatile int32_t t82 = -158198294;

	t82 = ((x369<=(x370-x371))*x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x373 = UINT8_MAX;
	uint64_t x374 = 5156932334LLU;
	uint32_t x375 = 15399419U;
	static volatile int64_t x376 = INT64_MAX;
	int64_t t83 = INT64_MAX;

	t83 = ((x373<=(x374-x375))*x376);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = INT16_MAX;
	uint32_t x379 = 1930U;
	int8_t x380 = -1;
	int32_t t84 = -262024;

	t84 = ((x377<=(x378-x379))*x380);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = INT16_MIN;
	uint16_t x386 = 2199U;
	int16_t x387 = -1;
	static volatile uint64_t t85 = 901836659LLU;

	t85 = ((x385<=(x386-x387))*x388);

	if (t85 != 1935267550246040LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	int8_t x391 = -1;
	volatile int8_t x392 = 6;
	int32_t t86 = -202104587;

	t86 = ((x389<=(x390-x391))*x392);

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x393 = 70U;
	static int8_t x394 = 46;
	volatile int32_t t87 = -4961373;

	t87 = ((x393<=(x394-x395))*x396);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x399 = INT32_MAX;
	volatile uint64_t x400 = 1588LLU;
	uint64_t t88 = 2LLU;

	t88 = ((x397<=(x398-x399))*x400);

	if (t88 != 1588LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x401 = INT64_MIN;
	static int64_t x402 = -1LL;
	int8_t x403 = -1;
	uint8_t x404 = 10U;
	int32_t t89 = 61000;

	t89 = ((x401<=(x402-x403))*x404);

	if (t89 != 10) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x406 = 11U;
	volatile int8_t x407 = INT8_MIN;
	static volatile int32_t t90 = -640526;

	t90 = ((x405<=(x406-x407))*x408);

	if (t90 != 46) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x413 = 9167U;
	static volatile uint8_t x414 = UINT8_MAX;
	static int8_t x415 = 0;
	uint8_t x416 = UINT8_MAX;
	int32_t t91 = -213;

	t91 = ((x413<=(x414-x415))*x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x418 = -179;
	static volatile uint8_t x419 = UINT8_MAX;
	int64_t x420 = INT64_MIN;

	t92 = ((x417<=(x418-x419))*x420);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x421 = -1;
	int64_t x422 = -1567632384646LL;
	int64_t x423 = -2762754LL;
	static uint16_t x424 = 1820U;

	t93 = ((x421<=(x422-x423))*x424);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = INT64_MIN;
	static int16_t x426 = -1;
	uint64_t x427 = 15640760590795725LLU;
	int64_t x428 = INT64_MIN;

	t94 = ((x425<=(x426-x427))*x428);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = 1LL;
	volatile uint16_t x430 = 1U;
	uint32_t x431 = 1U;
	uint16_t x432 = 16171U;

	t95 = ((x429<=(x430-x431))*x432);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x433 = INT16_MIN;
	uint16_t x435 = UINT16_MAX;
	int64_t x436 = INT64_MAX;
	volatile int64_t t96 = -566255LL;

	t96 = ((x433<=(x434-x435))*x436);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x442 = -194912;
	int32_t x443 = INT32_MIN;
	volatile int32_t t97 = 76851332;

	t97 = ((x441<=(x442-x443))*x444);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x445 = -1;
	volatile int64_t x446 = 8LL;
	int16_t x447 = INT16_MIN;
	volatile int32_t x448 = 0;
	volatile int32_t t98 = -3860156;

	t98 = ((x445<=(x446-x447))*x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x449 = INT8_MIN;
	static uint8_t x451 = UINT8_MAX;
	int64_t x452 = INT64_MAX;
	volatile int64_t t99 = -382730458868289584LL;

	t99 = ((x449<=(x450-x451))*x452);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

