#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x6 = INT16_MIN;
int32_t t1 = 85160616;
static volatile int16_t x10 = -62;
uint16_t x15 = 7379U;
volatile uint16_t x17 = 105U;
uint16_t x18 = 0U;
static int32_t x27 = INT32_MIN;
volatile int32_t t9 = -99655;
int16_t x42 = INT16_MIN;
volatile int32_t t11 = 16329996;
volatile int32_t t12 = -705773;
int16_t x58 = -2;
static int32_t t16 = -10521607;
volatile int8_t x70 = -1;
uint16_t x73 = 1777U;
static uint32_t x80 = 56U;
int16_t x81 = 163;
volatile int32_t x82 = INT32_MIN;
int32_t x93 = INT32_MIN;
volatile int32_t t22 = 9389;
int64_t x97 = -1LL;
int8_t x98 = 0;
volatile int32_t t23 = -296598;
uint8_t x104 = 2U;
static int32_t t24 = 15306897;
int32_t t26 = 123370;
static int8_t x113 = -1;
uint16_t x115 = 1875U;
int8_t x125 = INT8_MIN;
int32_t t30 = -3728;
int32_t x134 = -1;
static int32_t t32 = 1;
int64_t x143 = INT64_MAX;
int32_t t33 = -610438;
static volatile uint32_t x147 = 129342668U;
static int8_t x149 = -26;
int64_t x151 = INT64_MIN;
int16_t x157 = INT16_MIN;
int16_t x161 = -1;
volatile uint8_t x165 = 10U;
int32_t x166 = -1;
volatile int32_t x167 = INT32_MIN;
volatile int16_t x168 = 1549;
static volatile int32_t t40 = 5994794;
volatile int64_t x176 = -6475934425LL;
int8_t x187 = 46;
int16_t x188 = 2873;
int32_t t45 = 3261;
int32_t x193 = INT32_MAX;
int16_t x196 = INT16_MIN;
static uint32_t x200 = 58663940U;
int32_t x208 = 424586456;
int32_t t49 = 310;
int16_t x211 = INT16_MAX;
uint64_t x216 = 2934381520289330LLU;
int64_t x250 = INT64_MAX;
static volatile int16_t x253 = -15048;
int32_t x265 = INT32_MAX;
int32_t x276 = -30;
volatile int32_t t64 = -728252541;
volatile uint32_t x281 = UINT32_MAX;
volatile uint32_t x291 = UINT32_MAX;
volatile int16_t x293 = 0;
int32_t x299 = INT32_MAX;
int8_t x303 = INT8_MIN;
uint16_t x308 = 3055U;
volatile int32_t t72 = -419135;
volatile int32_t t74 = -480;
int64_t x325 = -1LL;
int64_t x326 = INT64_MIN;
static int32_t x334 = -1;
int8_t x338 = 10;
volatile int16_t x341 = INT16_MIN;
volatile int16_t x352 = INT16_MIN;
uint8_t x361 = UINT8_MAX;
uint8_t x367 = 40U;
int8_t x374 = -1;
int32_t t87 = 933031141;
volatile int16_t x377 = INT16_MAX;
volatile int32_t t88 = 1;
int16_t x383 = INT16_MAX;
uint32_t x384 = 247U;
volatile int16_t x385 = -10;
static volatile int64_t x388 = INT64_MIN;
volatile int32_t t91 = 82330;
int16_t x393 = 1;
uint16_t x399 = 2563U;
static uint64_t x404 = 994732952821LLU;
volatile int32_t x405 = -338;
int32_t t95 = 645316993;
uint16_t x411 = 4095U;
int16_t x413 = INT16_MAX;
int32_t x414 = INT32_MIN;
static int32_t x416 = -1;
int32_t x420 = INT32_MIN;
int32_t t98 = -1;
static int32_t x423 = INT32_MAX;
uint64_t x424 = 4447073814201LLU;
static int32_t t99 = 462144168;


void f0(void) {
	int8_t x1 = 1;
	int32_t x2 = -1;
	int16_t x3 = INT16_MIN;
	static uint64_t x4 = 25215886427346118LLU;
	volatile int32_t t0 = 72;

	t0 = ((x1-(x2/x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 0;
	int64_t x7 = -1LL;
	static volatile int32_t x8 = 64559771;

	t1 = ((x5-(x6/x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 2834500752599LL;
	uint32_t x11 = UINT32_MAX;
	static uint32_t x12 = UINT32_MAX;
	int32_t t2 = 791;

	t2 = ((x9-(x10/x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1U;
	static volatile int64_t x14 = INT64_MAX;
	uint64_t x16 = UINT64_MAX;
	static volatile int32_t t3 = 42;

	t3 = ((x13-(x14/x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x19 = 173U;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = -660385;

	t4 = ((x17-(x18/x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	volatile int16_t x22 = -1458;
	static int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 512733;

	t5 = ((x21-(x22/x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -401341868;
	int32_t x26 = -1;
	int64_t x28 = 52444LL;
	static volatile int32_t t6 = 3299067;

	t6 = ((x25-(x26/x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	int16_t x30 = INT16_MIN;
	volatile uint32_t x31 = 21U;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 30;

	t7 = ((x29-(x30/x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	int16_t x35 = INT16_MIN;
	uint8_t x36 = 1U;
	volatile int32_t t8 = -6;

	t8 = ((x33-(x34/x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 0U;
	int64_t x38 = -1LL;
	int64_t x39 = -1LL;
	int32_t x40 = INT32_MAX;

	t9 = ((x37-(x38/x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = -479724498987570385LL;
	uint64_t x43 = 2486LLU;
	static int64_t x44 = INT64_MIN;
	volatile int32_t t10 = 126600;

	t10 = ((x41-(x42/x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	int8_t x46 = 31;
	int8_t x47 = -1;
	int32_t x48 = INT32_MAX;

	t11 = ((x45-(x46/x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x49 = UINT64_MAX;
	int16_t x50 = -164;
	int8_t x51 = INT8_MAX;
	int32_t x52 = -1;

	t12 = ((x49-(x50/x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 0;
	uint8_t x54 = UINT8_MAX;
	volatile uint16_t x55 = UINT16_MAX;
	int32_t x56 = INT32_MAX;
	volatile int32_t t13 = 101319;

	t13 = ((x53-(x54/x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = UINT16_MAX;
	int64_t x59 = INT64_MIN;
	static int8_t x60 = -4;
	static volatile int32_t t14 = 805;

	t14 = ((x57-(x58/x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	static uint32_t x62 = 47U;
	uint32_t x63 = 157U;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 217;

	t15 = ((x61-(x62/x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 27U;
	uint32_t x66 = 327U;
	static int8_t x67 = -41;
	int16_t x68 = 483;

	t16 = ((x65-(x66/x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	volatile int64_t x71 = INT64_MIN;
	int64_t x72 = -1LL;
	int32_t t17 = -855573;

	t17 = ((x69-(x70/x71))==x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x74 = -1;
	volatile uint64_t x75 = UINT64_MAX;
	volatile int32_t x76 = INT32_MAX;
	static volatile int32_t t18 = 49589640;

	t18 = ((x73-(x74/x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	uint64_t x78 = UINT64_MAX;
	static int8_t x79 = -1;
	int32_t t19 = 329809383;

	t19 = ((x77-(x78/x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x83 = INT8_MAX;
	int64_t x84 = 15227LL;
	volatile int32_t t20 = -644087;

	t20 = ((x81-(x82/x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = 14034274U;
	static int32_t x86 = -1;
	volatile uint64_t x87 = UINT64_MAX;
	volatile int16_t x88 = -8870;
	int32_t t21 = 5410277;

	t21 = ((x85-(x86/x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = -1LL;
	int16_t x95 = INT16_MAX;
	volatile uint8_t x96 = 3U;

	t22 = ((x93-(x94/x95))==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x99 = 15589LLU;
	int8_t x100 = INT8_MIN;

	t23 = ((x97-(x98/x99))==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -1LL;
	uint64_t x102 = UINT64_MAX;
	volatile uint64_t x103 = UINT64_MAX;

	t24 = ((x101-(x102/x103))==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 78U;
	static int16_t x106 = INT16_MAX;
	int16_t x107 = INT16_MAX;
	static uint64_t x108 = 89LLU;
	static volatile int32_t t25 = -85;

	t25 = ((x105-(x106/x107))==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 14U;
	static uint32_t x110 = 470819637U;
	int16_t x111 = INT16_MIN;
	static volatile int32_t x112 = INT32_MIN;

	t26 = ((x109-(x110/x111))==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x114 = INT32_MIN;
	int16_t x116 = -1;
	static int32_t t27 = -199719911;

	t27 = ((x113-(x114/x115))==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x118 = 0U;
	int16_t x119 = 6226;
	volatile uint32_t x120 = 15497U;
	static volatile int32_t t28 = 27213;

	t28 = ((x117-(x118/x119))==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MAX;
	static int32_t x123 = INT32_MAX;
	int32_t x124 = -107960;
	volatile int32_t t29 = 377819;

	t29 = ((x121-(x122/x123))==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x126 = 1296U;
	static volatile uint16_t x127 = UINT16_MAX;
	uint8_t x128 = 9U;

	t30 = ((x125-(x126/x127))==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = -4;
	int64_t x135 = INT64_MIN;
	int32_t x136 = -1;
	static volatile int32_t t31 = -20;

	t31 = ((x133-(x134/x135))==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MAX;
	int8_t x138 = -1;
	static int64_t x139 = -1LL;
	volatile uint16_t x140 = 2U;

	t32 = ((x137-(x138/x139))==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MIN;
	uint64_t x142 = UINT64_MAX;
	uint8_t x144 = 49U;

	t33 = ((x141-(x142/x143))==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = 1;
	int32_t x146 = INT32_MAX;
	static uint16_t x148 = 17U;
	volatile int32_t t34 = 457224;

	t34 = ((x145-(x146/x147))==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = INT32_MAX;
	static int8_t x152 = INT8_MIN;
	volatile int32_t t35 = 1;

	t35 = ((x149-(x150/x151))==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 57066709U;
	volatile int32_t x154 = INT32_MIN;
	static uint32_t x155 = UINT32_MAX;
	uint64_t x156 = 0LLU;
	int32_t t36 = 1;

	t36 = ((x153-(x154/x155))==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x158 = UINT64_MAX;
	int64_t x159 = INT64_MIN;
	static int32_t x160 = 8200564;
	static volatile int32_t t37 = -231720054;

	t37 = ((x157-(x158/x159))==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x162 = INT64_MAX;
	int64_t x163 = -133938LL;
	int16_t x164 = INT16_MAX;
	static int32_t t38 = 266954243;

	t38 = ((x161-(x162/x163))==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t t39 = -730291916;

	t39 = ((x165-(x166/x167))==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = -14;
	int16_t x170 = INT16_MIN;
	int32_t x171 = -30435135;
	uint64_t x172 = 1013226LLU;

	t40 = ((x169-(x170/x171))==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MIN;
	int32_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	int32_t t41 = -50483;

	t41 = ((x173-(x174/x175))==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x177 = 5268;
	volatile uint64_t x178 = UINT64_MAX;
	static volatile int16_t x179 = -582;
	volatile int16_t x180 = INT16_MIN;
	int32_t t42 = 1;

	t42 = ((x177-(x178/x179))==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = -83141072667412100LL;
	volatile int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	volatile int32_t x184 = INT32_MIN;
	volatile int32_t t43 = 5;

	t43 = ((x181-(x182/x183))==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	static int8_t x186 = INT8_MIN;
	volatile int32_t t44 = 13919;

	t44 = ((x185-(x186/x187))==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = 28;
	volatile uint16_t x190 = 15U;
	volatile uint64_t x191 = UINT64_MAX;
	volatile int32_t x192 = 636732;

	t45 = ((x189-(x190/x191))==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x194 = -27;
	int64_t x195 = INT64_MIN;
	volatile int32_t t46 = 4914291;

	t46 = ((x193-(x194/x195))==x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = 1;
	int16_t x198 = 6938;
	int8_t x199 = INT8_MIN;
	volatile int32_t t47 = 2282;

	t47 = ((x197-(x198/x199))==x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x201 = -1;
	int32_t x202 = INT32_MIN;
	int64_t x203 = -1LL;
	static int64_t x204 = -440900LL;
	volatile int32_t t48 = 15014277;

	t48 = ((x201-(x202/x203))==x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MAX;
	uint16_t x207 = UINT16_MAX;

	t49 = ((x205-(x206/x207))==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x209 = INT8_MAX;
	int16_t x210 = 1;
	uint8_t x212 = 0U;
	static volatile int32_t t50 = 13;

	t50 = ((x209-(x210/x211))==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x213 = 6;
	int32_t x214 = -1;
	volatile int64_t x215 = INT64_MIN;
	int32_t t51 = 663;

	t51 = ((x213-(x214/x215))==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x217 = -1;
	uint32_t x218 = 2117860215U;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;
	volatile int32_t t52 = 126;

	t52 = ((x217-(x218/x219))==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = 3390679;
	static int32_t x222 = 1843;
	int64_t x223 = 6024743722113879LL;
	int32_t x224 = -370;
	volatile int32_t t53 = -1;

	t53 = ((x221-(x222/x223))==x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 113U;
	int16_t x226 = 773;
	int32_t x227 = INT32_MIN;
	int32_t x228 = -1;
	int32_t t54 = 415775;

	t54 = ((x225-(x226/x227))==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = -1LL;
	uint8_t x231 = UINT8_MAX;
	uint64_t x232 = 206277141LLU;
	static volatile int32_t t55 = 1;

	t55 = ((x229-(x230/x231))==x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = UINT8_MAX;
	uint16_t x234 = 75U;
	static volatile int32_t x235 = -1;
	int64_t x236 = INT64_MAX;
	static volatile int32_t t56 = 45947;

	t56 = ((x233-(x234/x235))==x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = UINT64_MAX;
	volatile int16_t x238 = 578;
	uint16_t x239 = UINT16_MAX;
	int8_t x240 = -1;
	int32_t t57 = -607;

	t57 = ((x237-(x238/x239))==x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x245 = -1;
	volatile uint16_t x246 = UINT16_MAX;
	static uint64_t x247 = 1229287181230LLU;
	volatile uint8_t x248 = UINT8_MAX;
	volatile int32_t t58 = -338162;

	t58 = ((x245-(x246/x247))==x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = INT64_MAX;
	int32_t t59 = 6564045;

	t59 = ((x249-(x250/x251))==x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x254 = INT64_MIN;
	uint64_t x255 = 1189321LLU;
	int32_t x256 = INT32_MIN;
	int32_t t60 = -1067223678;

	t60 = ((x253-(x254/x255))==x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x257 = -1;
	uint32_t x258 = 238U;
	int64_t x259 = INT64_MAX;
	uint8_t x260 = 1U;
	int32_t t61 = -24535;

	t61 = ((x257-(x258/x259))==x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x266 = 4910729496256LL;
	int16_t x267 = -1;
	int8_t x268 = INT8_MAX;
	static int32_t t62 = 5;

	t62 = ((x265-(x266/x267))==x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x269 = UINT16_MAX;
	int32_t x270 = -1;
	uint32_t x271 = UINT32_MAX;
	volatile int64_t x272 = 949392857081523LL;
	int32_t t63 = -163069;

	t63 = ((x269-(x270/x271))==x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x273 = UINT16_MAX;
	static int16_t x274 = 362;
	uint64_t x275 = UINT64_MAX;

	t64 = ((x273-(x274/x275))==x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x277 = 129021LLU;
	int16_t x278 = -1;
	volatile int16_t x279 = -1;
	uint32_t x280 = 82024572U;
	int32_t t65 = -117365306;

	t65 = ((x277-(x278/x279))==x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x282 = 0;
	static int8_t x283 = -32;
	volatile int16_t x284 = INT16_MIN;
	volatile int32_t t66 = 80583;

	t66 = ((x281-(x282/x283))==x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = UINT8_MAX;
	volatile int8_t x286 = 1;
	static int64_t x287 = -57287442608736389LL;
	uint64_t x288 = UINT64_MAX;
	int32_t t67 = -92;

	t67 = ((x285-(x286/x287))==x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x289 = 6065167000LLU;
	volatile int32_t x290 = 5370;
	volatile int16_t x292 = -47;
	volatile int32_t t68 = 793;

	t68 = ((x289-(x290/x291))==x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x294 = -56;
	int32_t x295 = INT32_MIN;
	volatile uint8_t x296 = UINT8_MAX;
	static int32_t t69 = 36;

	t69 = ((x293-(x294/x295))==x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	volatile int8_t x298 = -1;
	uint16_t x300 = 42U;
	volatile int32_t t70 = 1668083;

	t70 = ((x297-(x298/x299))==x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x301 = -1;
	int8_t x302 = INT8_MIN;
	int32_t x304 = INT32_MAX;
	static volatile int32_t t71 = 0;

	t71 = ((x301-(x302/x303))==x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = 22872LLU;
	static int64_t x306 = INT64_MAX;
	int64_t x307 = -107989403LL;

	t72 = ((x305-(x306/x307))==x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 5517U;
	static volatile uint64_t x314 = 0LLU;
	volatile int16_t x315 = INT16_MIN;
	int64_t x316 = -1LL;
	int32_t t73 = 116443;

	t73 = ((x313-(x314/x315))==x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = INT8_MIN;
	uint16_t x318 = 27163U;
	volatile int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MIN;

	t74 = ((x317-(x318/x319))==x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x321 = -1;
	int32_t x322 = 63696151;
	int64_t x323 = -1LL;
	uint64_t x324 = UINT64_MAX;
	static int32_t t75 = 1037099;

	t75 = ((x321-(x322/x323))==x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x327 = 1U;
	int32_t x328 = -377;
	int32_t t76 = 5288;

	t76 = ((x325-(x326/x327))==x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = UINT16_MAX;
	int16_t x335 = 3270;
	int16_t x336 = -6;
	volatile int32_t t77 = -90779677;

	t77 = ((x333-(x334/x335))==x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = INT8_MIN;
	static uint16_t x339 = 30970U;
	uint8_t x340 = 76U;
	static volatile int32_t t78 = 5799;

	t78 = ((x337-(x338/x339))==x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x342 = 14936U;
	volatile int64_t x343 = -269335LL;
	volatile int64_t x344 = INT64_MAX;
	int32_t t79 = -143;

	t79 = ((x341-(x342/x343))==x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x345 = 34260186167LLU;
	static int32_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = 40;
	int32_t t80 = -223;

	t80 = ((x345-(x346/x347))==x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x349 = INT32_MAX;
	int64_t x350 = -1LL;
	static uint16_t x351 = 185U;
	volatile int32_t t81 = 55694;

	t81 = ((x349-(x350/x351))==x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = UINT16_MAX;
	uint16_t x354 = UINT16_MAX;
	int16_t x355 = -1;
	uint64_t x356 = 14LLU;
	int32_t t82 = 60;

	t82 = ((x353-(x354/x355))==x356);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = 9850318;
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MAX;
	int64_t x360 = -9402402729LL;
	volatile int32_t t83 = -1;

	t83 = ((x357-(x358/x359))==x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x362 = 359;
	uint32_t x363 = 47524U;
	int64_t x364 = INT64_MAX;
	int32_t t84 = -882;

	t84 = ((x361-(x362/x363))==x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x365 = INT64_MIN;
	static int8_t x366 = INT8_MIN;
	int16_t x368 = INT16_MIN;
	static volatile int32_t t85 = -57256;

	t85 = ((x365-(x366/x367))==x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x369 = 5U;
	volatile int32_t x370 = INT32_MIN;
	int32_t x371 = -39932;
	int32_t x372 = -29;
	int32_t t86 = -448243371;

	t86 = ((x369-(x370/x371))==x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x373 = INT16_MAX;
	uint32_t x375 = UINT32_MAX;
	int8_t x376 = -1;

	t87 = ((x373-(x374/x375))==x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x378 = -1;
	volatile int16_t x379 = -1;
	volatile int8_t x380 = INT8_MIN;

	t88 = ((x377-(x378/x379))==x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = INT16_MAX;
	int32_t x382 = INT32_MAX;
	volatile int32_t t89 = 218442;

	t89 = ((x381-(x382/x383))==x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x386 = INT16_MAX;
	static int16_t x387 = 5614;
	volatile int32_t t90 = 120638;

	t90 = ((x385-(x386/x387))==x388);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x389 = 184U;
	static int8_t x390 = INT8_MAX;
	volatile uint64_t x391 = UINT64_MAX;
	uint32_t x392 = 101U;

	t91 = ((x389-(x390/x391))==x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x394 = 1261942;
	volatile uint32_t x395 = 20578U;
	static int8_t x396 = INT8_MIN;
	int32_t t92 = 6077212;

	t92 = ((x393-(x394/x395))==x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x397 = INT32_MIN;
	int64_t x398 = 235085756972330475LL;
	int16_t x400 = INT16_MIN;
	int32_t t93 = -965056;

	t93 = ((x397-(x398/x399))==x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x401 = 40U;
	uint8_t x402 = 34U;
	uint16_t x403 = 2547U;
	int32_t t94 = 406196;

	t94 = ((x401-(x402/x403))==x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x406 = 18463U;
	int32_t x407 = -1;
	uint32_t x408 = UINT32_MAX;

	t95 = ((x405-(x406/x407))==x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MIN;
	volatile int8_t x412 = INT8_MAX;
	int32_t t96 = -1;

	t96 = ((x409-(x410/x411))==x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x415 = 490851U;
	static int32_t t97 = -12;

	t97 = ((x413-(x414/x415))==x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = -1;
	uint16_t x418 = 759U;
	int64_t x419 = 190LL;

	t98 = ((x417-(x418/x419))==x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = -1;
	uint64_t x422 = 3630LLU;

	t99 = ((x421-(x422/x423))==x424);

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

