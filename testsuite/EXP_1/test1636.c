#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x7 = INT8_MAX;
int32_t x10 = INT32_MIN;
static int32_t x18 = INT32_MAX;
uint64_t x21 = 8186LLU;
static volatile uint8_t x27 = 15U;
uint64_t x33 = 28984764LLU;
int32_t x42 = INT32_MAX;
volatile int64_t t10 = 69661809897969LL;
uint64_t x49 = 46750206997374710LLU;
uint32_t x50 = UINT32_MAX;
uint16_t x51 = UINT16_MAX;
static volatile int32_t t12 = -65560463;
int8_t x54 = INT8_MIN;
volatile int32_t x63 = INT32_MIN;
int32_t t15 = 426;
int16_t x68 = INT16_MIN;
volatile int16_t x73 = -83;
static int32_t x75 = 99937;
volatile int64_t x90 = -2020295433665377LL;
static uint16_t x92 = 60U;
int64_t x97 = 674376988LL;
int8_t x98 = INT8_MIN;
volatile int32_t t26 = 2;
uint8_t x110 = 0U;
int16_t x127 = INT16_MAX;
static uint64_t x130 = 22077339459194LLU;
int32_t t32 = 873856216;
int64_t x137 = -6839400281LL;
int16_t x141 = INT16_MAX;
uint16_t x148 = 2882U;
uint16_t x151 = 5U;
int32_t x153 = INT32_MIN;
static int64_t x161 = INT64_MAX;
int64_t x173 = 180640628363842LL;
int32_t x174 = INT32_MAX;
int16_t x177 = INT16_MIN;
int64_t x181 = -1LL;
uint32_t x190 = 3U;
int16_t x200 = INT16_MAX;
int32_t t49 = -1030765171;
int32_t x207 = -1;
uint32_t x209 = 7082439U;
int64_t x212 = 4247222201760LL;
int32_t x214 = INT32_MAX;
int64_t x223 = 26836294241304807LL;
int64_t t55 = -3623LL;
static uint8_t x231 = 1U;
int64_t t57 = -210572565156LL;
static volatile int16_t x233 = INT16_MAX;
static int8_t x237 = INT8_MIN;
int32_t x245 = -155;
volatile int32_t x249 = INT32_MIN;
uint64_t t62 = 1641813LLU;
int32_t t64 = -3;
volatile uint8_t x267 = 5U;
uint16_t x268 = 6U;
static int32_t t66 = 126;
static volatile int32_t x276 = INT32_MIN;
volatile int32_t t68 = -97176;
int32_t x277 = INT32_MIN;
static int32_t x281 = -1007203;
volatile int32_t t70 = 135735;
int16_t x290 = INT16_MIN;
static uint64_t x292 = UINT64_MAX;
uint64_t t72 = 575664583LLU;
int64_t x293 = INT64_MAX;
static int32_t x295 = -226035667;
int64_t t74 = -7641231LL;
volatile uint64_t x301 = 11629357982LLU;
volatile int16_t x304 = INT16_MIN;
int64_t x314 = INT64_MAX;
volatile uint32_t t78 = 523U;
int8_t x317 = 11;
int16_t x320 = -1;
volatile uint8_t x325 = 6U;
uint8_t x326 = 10U;
int32_t t82 = 1002863;
int16_t x336 = 11;
static uint16_t x338 = 621U;
static volatile int16_t x344 = INT16_MIN;
uint64_t x349 = UINT64_MAX;
int8_t x359 = INT8_MIN;
uint32_t x366 = 23380U;
int64_t x370 = -321LL;
int16_t x382 = INT16_MIN;
volatile int8_t x383 = INT8_MIN;
static uint16_t x384 = 4U;
uint8_t x386 = 9U;
int32_t x387 = INT32_MAX;
volatile int32_t x391 = -1;
uint32_t x394 = UINT32_MAX;
static int64_t x399 = -71896LL;
uint8_t x400 = 7U;


void f0(void) {
	static int8_t x1 = 1;
	int16_t x2 = -1;
	int16_t x3 = 2;
	static int16_t x4 = -1786;
	int32_t t0 = 61368352;

	t0 = (((x1<=x2)<x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static int16_t x6 = INT16_MIN;
	uint64_t x8 = 7LLU;
	static uint64_t t1 = 1090333768259LLU;

	t1 = (((x5<=x6)<x7)&x8);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 456851250U;
	static int32_t x11 = INT32_MAX;
	uint64_t x12 = 74980984391933LLU;
	uint64_t t2 = 1226785547LLU;

	t2 = (((x9<=x10)<x11)&x12);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint8_t x14 = UINT8_MAX;
	uint16_t x15 = 99U;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -322615;

	t3 = (((x13<=x14)<x15)&x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 46400795016780608LLU;
	volatile int64_t x19 = -6LL;
	uint16_t x20 = 3548U;
	volatile int32_t t4 = -132230;

	t4 = (((x17<=x18)<x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -1LL;
	int64_t x23 = -3030823068811LL;
	uint16_t x24 = 13772U;
	static int32_t t5 = 0;

	t5 = (((x21<=x22)<x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 6501;
	volatile int64_t x26 = 76114667031LL;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -29;

	t6 = (((x25<=x26)<x27)&x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MIN;
	int16_t x31 = -210;
	int8_t x32 = 7;
	volatile int32_t t7 = 1;

	t7 = (((x29<=x30)<x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MAX;
	int8_t x35 = -1;
	static int8_t x36 = 2;
	volatile int32_t t8 = -2782;

	t8 = (((x33<=x34)<x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;
	int16_t x39 = 5;
	int16_t x40 = 0;
	volatile int32_t t9 = 11659608;

	t9 = (((x37<=x38)<x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	int8_t x43 = INT8_MIN;
	volatile int64_t x44 = 103175846LL;

	t10 = (((x41<=x42)<x43)&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = 910971293;
	int32_t x46 = INT32_MIN;
	static volatile uint32_t x47 = UINT32_MAX;
	int32_t x48 = -35610465;
	static int32_t t11 = -1608;

	t11 = (((x45<=x46)<x47)&x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x52 = -20;

	t12 = (((x49<=x50)<x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	static volatile uint16_t x55 = 2617U;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -4936094;

	t13 = (((x53<=x54)<x55)&x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 1LL;
	static int32_t x58 = INT32_MAX;
	uint16_t x59 = 13U;
	uint16_t x60 = UINT16_MAX;
	int32_t t14 = -1;

	t14 = (((x57<=x58)<x59)&x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint16_t x62 = 1732U;
	volatile uint8_t x64 = 2U;

	t15 = (((x61<=x62)<x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 32U;
	volatile int32_t x66 = 2670045;
	uint64_t x67 = 27LLU;
	volatile int32_t t16 = -6;

	t16 = (((x65<=x66)<x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	volatile uint32_t x70 = 84U;
	static int32_t x71 = 7;
	static int8_t x72 = -1;
	int32_t t17 = 7666899;

	t17 = (((x69<=x70)<x71)&x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = 604U;
	int8_t x76 = 0;
	int32_t t18 = -3;

	t18 = (((x73<=x74)<x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;
	int32_t x79 = INT32_MIN;
	static int64_t x80 = INT64_MIN;
	volatile int64_t t19 = 5520672LL;

	t19 = (((x77<=x78)<x79)&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	static int16_t x82 = INT16_MIN;
	int16_t x83 = 797;
	static volatile int8_t x84 = INT8_MIN;
	int32_t t20 = 9179;

	t20 = (((x81<=x82)<x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 4113422236731712164LL;
	int64_t x86 = -1LL;
	volatile int8_t x87 = INT8_MIN;
	uint64_t x88 = 403629125299LLU;
	uint64_t t21 = 5417905924030821LLU;

	t21 = (((x85<=x86)<x87)&x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	volatile uint32_t x91 = UINT32_MAX;
	static int32_t t22 = 5;

	t22 = (((x89<=x90)<x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int16_t x94 = INT16_MIN;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = 1;
	static int32_t t23 = 3305123;

	t23 = (((x93<=x94)<x95)&x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x99 = 6409;
	int32_t x100 = 13;
	static int32_t t24 = -922;

	t24 = (((x97<=x98)<x99)&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 2U;
	uint16_t x102 = 18U;
	int64_t x103 = INT64_MIN;
	volatile uint16_t x104 = UINT16_MAX;
	static volatile int32_t t25 = -1;

	t25 = (((x101<=x102)<x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	volatile int8_t x106 = INT8_MAX;
	static int32_t x107 = -1;
	volatile int16_t x108 = INT16_MAX;

	t26 = (((x105<=x106)<x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x109 = INT16_MIN;
	int8_t x111 = INT8_MIN;
	int64_t x112 = -1106854244324084227LL;
	int64_t t27 = -9672275767574681LL;

	t27 = (((x109<=x110)<x111)&x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	uint32_t x114 = UINT32_MAX;
	uint32_t x115 = 284295250U;
	int16_t x116 = -6;
	volatile int32_t t28 = 659505;

	t28 = (((x113<=x114)<x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = -1;
	static int64_t x119 = -12865LL;
	uint8_t x120 = 10U;
	volatile int32_t t29 = 489794;

	t29 = (((x117<=x118)<x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MAX;
	uint16_t x124 = 54U;
	volatile int32_t t30 = -56031;

	t30 = (((x121<=x122)<x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -238953524;
	int16_t x126 = INT16_MIN;
	static int8_t x128 = INT8_MIN;
	int32_t t31 = -46;

	t31 = (((x125<=x126)<x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 419U;
	uint8_t x131 = 1U;
	static volatile int16_t x132 = INT16_MAX;

	t32 = (((x129<=x130)<x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	uint16_t x134 = 27U;
	int16_t x135 = INT16_MIN;
	static volatile int8_t x136 = 10;
	int32_t t33 = 1;

	t33 = (((x133<=x134)<x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = 504124758574319LLU;
	uint64_t x139 = 4944433792LLU;
	static int8_t x140 = INT8_MIN;
	static int32_t t34 = -30;

	t34 = (((x137<=x138)<x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x142 = UINT64_MAX;
	static volatile int16_t x143 = -1341;
	int64_t x144 = INT64_MIN;
	static int64_t t35 = 784195135LL;

	t35 = (((x141<=x142)<x143)&x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = -1;
	int32_t x146 = INT32_MAX;
	int64_t x147 = INT64_MIN;
	static volatile int32_t t36 = -1947;

	t36 = (((x145<=x146)<x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	volatile int16_t x150 = INT16_MAX;
	int32_t x152 = -1;
	int32_t t37 = -299030505;

	t37 = (((x149<=x150)<x151)&x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MIN;
	volatile int8_t x155 = -1;
	uint16_t x156 = UINT16_MAX;
	static int32_t t38 = -1954319;

	t38 = (((x153<=x154)<x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -4;
	int64_t x158 = 3LL;
	volatile uint8_t x159 = UINT8_MAX;
	uint8_t x160 = 1U;
	int32_t t39 = -63;

	t39 = (((x157<=x158)<x159)&x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x162 = 6U;
	volatile int64_t x163 = INT64_MIN;
	int8_t x164 = -47;
	static int32_t t40 = 1948458;

	t40 = (((x161<=x162)<x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = INT16_MAX;
	volatile int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 3478;

	t41 = (((x165<=x166)<x167)&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	static int16_t x170 = INT16_MAX;
	uint64_t x171 = 51899457631LLU;
	int8_t x172 = INT8_MAX;
	volatile int32_t t42 = 10;

	t42 = (((x169<=x170)<x171)&x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x175 = -20;
	uint64_t x176 = 470015LLU;
	volatile uint64_t t43 = 1898259107LLU;

	t43 = (((x173<=x174)<x175)&x176);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x178 = 3304556U;
	static int64_t x179 = -1LL;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = -443;

	t44 = (((x177<=x178)<x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x182 = 77902413;
	int8_t x183 = INT8_MAX;
	int64_t x184 = 2723598675720086935LL;
	volatile int64_t t45 = 440706103LL;

	t45 = (((x181<=x182)<x183)&x184);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	static volatile uint64_t x186 = 91LLU;
	int64_t x187 = 320620295722LL;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t46 = 47174211261LLU;

	t46 = (((x185<=x186)<x187)&x188);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = -6;
	volatile uint32_t x191 = 3U;
	int32_t x192 = 9908;
	int32_t t47 = 93880;

	t47 = (((x189<=x190)<x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int16_t x194 = INT16_MAX;
	uint16_t x195 = UINT16_MAX;
	static int16_t x196 = INT16_MIN;
	static volatile int32_t t48 = -966;

	t48 = (((x193<=x194)<x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = UINT32_MAX;
	int16_t x198 = -323;
	int64_t x199 = INT64_MIN;

	t49 = (((x197<=x198)<x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = 215679LLU;
	int16_t x202 = INT16_MIN;
	uint32_t x203 = UINT32_MAX;
	volatile int64_t x204 = 25230827LL;
	volatile int64_t t50 = 3862329LL;

	t50 = (((x201<=x202)<x203)&x204);

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 319348269LLU;
	int8_t x206 = -1;
	uint8_t x208 = 1U;
	static int32_t t51 = 0;

	t51 = (((x205<=x206)<x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = 107U;
	uint16_t x211 = UINT16_MAX;
	static int64_t t52 = 3264091LL;

	t52 = (((x209<=x210)<x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x213 = -1;
	static uint16_t x215 = 224U;
	static int8_t x216 = 1;
	volatile int32_t t53 = -65;

	t53 = (((x213<=x214)<x215)&x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = 25U;
	uint32_t x218 = 2153U;
	static int32_t x219 = -49;
	uint32_t x220 = 257703U;
	volatile uint32_t t54 = 58781U;

	t54 = (((x217<=x218)<x219)&x220);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	volatile int64_t x224 = INT64_MIN;

	t55 = (((x221<=x222)<x223)&x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MIN;
	volatile uint8_t x227 = 18U;
	uint8_t x228 = 7U;
	int32_t t56 = 13;

	t56 = (((x225<=x226)<x227)&x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MAX;
	volatile int64_t x232 = -1LL;

	t57 = (((x229<=x230)<x231)&x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x234 = UINT16_MAX;
	static int32_t x235 = INT32_MIN;
	uint32_t x236 = 15U;
	volatile uint32_t t58 = 21278814U;

	t58 = (((x233<=x234)<x235)&x236);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -1;
	volatile uint32_t x239 = 1490400816U;
	int64_t x240 = INT64_MIN;
	volatile int64_t t59 = 239685868001594509LL;

	t59 = (((x237<=x238)<x239)&x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 1;
	static int16_t x242 = -1;
	int64_t x243 = -198562760827LL;
	int32_t x244 = -1;
	int32_t t60 = 642;

	t60 = (((x241<=x242)<x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x246 = 61U;
	int64_t x247 = 2261529LL;
	volatile int32_t x248 = -12629545;
	int32_t t61 = -3411742;

	t61 = (((x245<=x246)<x247)&x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = -192LL;
	int8_t x251 = -1;
	uint64_t x252 = 2246300260486791LLU;

	t62 = (((x249<=x250)<x251)&x252);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = 127391LL;
	uint32_t x254 = 149331U;
	static int32_t x255 = INT32_MAX;
	volatile uint64_t x256 = 125679588623LLU;
	uint64_t t63 = 86596664681529LLU;

	t63 = (((x253<=x254)<x255)&x256);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -14344539984194LL;
	static int16_t x258 = INT16_MIN;
	static int16_t x259 = -210;
	static volatile int16_t x260 = INT16_MAX;

	t64 = (((x257<=x258)<x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MIN;
	uint64_t x262 = UINT64_MAX;
	static int16_t x263 = -2;
	int32_t x264 = -27511840;
	int32_t t65 = 91351;

	t65 = (((x261<=x262)<x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int32_t x266 = INT32_MIN;

	t66 = (((x265<=x266)<x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	static uint8_t x270 = 20U;
	static volatile int64_t x271 = 767400147736803550LL;
	int64_t x272 = -3LL;
	int64_t t67 = -2LL;

	t67 = (((x269<=x270)<x271)&x272);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 15U;
	static int8_t x274 = INT8_MIN;
	int16_t x275 = -1;

	t68 = (((x273<=x274)<x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x278 = INT16_MAX;
	volatile int8_t x279 = INT8_MAX;
	uint16_t x280 = 25217U;
	static int32_t t69 = -79;

	t69 = (((x277<=x278)<x279)&x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x282 = 139U;
	static volatile uint32_t x283 = UINT32_MAX;
	volatile uint16_t x284 = 609U;

	t70 = (((x281<=x282)<x283)&x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	volatile uint16_t x286 = 48U;
	volatile int64_t x287 = 25331806LL;
	int32_t x288 = -3;
	static volatile int32_t t71 = -27562843;

	t71 = (((x285<=x286)<x287)&x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = 7784U;
	int32_t x291 = 2;

	t72 = (((x289<=x290)<x291)&x292);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x294 = 1080238044175713LLU;
	static int64_t x296 = -1LL;
	int64_t t73 = -26LL;

	t73 = (((x293<=x294)<x295)&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 122856LLU;
	int16_t x298 = INT16_MIN;
	uint8_t x299 = 1U;
	int64_t x300 = -1LL;

	t74 = (((x297<=x298)<x299)&x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = -38LL;
	uint32_t x303 = UINT32_MAX;
	volatile int32_t t75 = 5220;

	t75 = (((x301<=x302)<x303)&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x305 = UINT64_MAX;
	int64_t x306 = INT64_MAX;
	uint8_t x307 = UINT8_MAX;
	static int32_t x308 = INT32_MIN;
	volatile int32_t t76 = 83195;

	t76 = (((x305<=x306)<x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	uint8_t x310 = 31U;
	int32_t x311 = -1;
	uint8_t x312 = 1U;
	int32_t t77 = 51071706;

	t77 = (((x309<=x310)<x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int32_t x315 = INT32_MIN;
	uint32_t x316 = 10U;

	t78 = (((x313<=x314)<x315)&x316);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x318 = -1;
	volatile int64_t x319 = INT64_MIN;
	volatile int32_t t79 = -62914361;

	t79 = (((x317<=x318)<x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MIN;
	static uint16_t x322 = UINT16_MAX;
	int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = -74489;

	t80 = (((x321<=x322)<x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x327 = INT64_MIN;
	int16_t x328 = -6;
	int32_t t81 = -478745068;

	t81 = (((x325<=x326)<x327)&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -46;
	volatile int64_t x330 = INT64_MAX;
	int32_t x331 = -1;
	int8_t x332 = -1;

	t82 = (((x329<=x330)<x331)&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x333 = INT64_MAX;
	uint64_t x334 = 19LLU;
	int64_t x335 = -40LL;
	volatile int32_t t83 = 8695;

	t83 = (((x333<=x334)<x335)&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	uint64_t x339 = UINT64_MAX;
	static uint32_t x340 = 953U;
	volatile uint32_t t84 = 1026U;

	t84 = (((x337<=x338)<x339)&x340);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 5U;
	static volatile int16_t x342 = INT16_MAX;
	int16_t x343 = INT16_MIN;
	volatile int32_t t85 = -1;

	t85 = (((x341<=x342)<x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int32_t x346 = 261;
	int32_t x347 = 125110055;
	int64_t x348 = 131973997097455LL;
	int64_t t86 = -7532568783317233LL;

	t86 = (((x345<=x346)<x347)&x348);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = 61160LLU;
	uint32_t x351 = UINT32_MAX;
	int8_t x352 = 0;
	volatile int32_t t87 = -13997;

	t87 = (((x349<=x350)<x351)&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 8072674U;
	int32_t x354 = 3013309;
	int32_t x355 = 418;
	int8_t x356 = -1;
	int32_t t88 = 34668;

	t88 = (((x353<=x354)<x355)&x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	static uint32_t x358 = 1568833806U;
	uint8_t x360 = 25U;
	volatile int32_t t89 = -25;

	t89 = (((x357<=x358)<x359)&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MIN;
	static volatile int64_t t90 = -2023LL;

	t90 = (((x361<=x362)<x363)&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -146892996;
	int16_t x367 = 0;
	uint32_t x368 = UINT32_MAX;
	volatile uint32_t t91 = 747921U;

	t91 = (((x365<=x366)<x367)&x368);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int8_t x371 = INT8_MAX;
	volatile uint64_t x372 = 2189592LLU;
	volatile uint64_t t92 = 371465256218LLU;

	t92 = (((x369<=x370)<x371)&x372);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -3363455003037677LL;
	int16_t x374 = INT16_MAX;
	uint64_t x375 = 4641673LLU;
	int16_t x376 = -1;
	static int32_t t93 = 122;

	t93 = (((x373<=x374)<x375)&x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = -20866;
	uint16_t x378 = 3U;
	static int32_t x379 = INT32_MIN;
	int8_t x380 = -1;
	volatile int32_t t94 = -52503359;

	t94 = (((x377<=x378)<x379)&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MAX;
	int32_t t95 = 12;

	t95 = (((x381<=x382)<x383)&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int16_t x388 = -1;
	static int32_t t96 = -475;

	t96 = (((x385<=x386)<x387)&x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -4009866950321321479LL;
	volatile int32_t x390 = 1002843817;
	int32_t x392 = -179;
	int32_t t97 = -1314124;

	t97 = (((x389<=x390)<x391)&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 3U;
	int8_t x395 = INT8_MIN;
	int8_t x396 = -54;
	int32_t t98 = 1;

	t98 = (((x393<=x394)<x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = INT16_MIN;
	int32_t t99 = -388858317;

	t99 = (((x397<=x398)<x399)&x400);

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

