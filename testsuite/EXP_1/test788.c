#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -353544;
uint8_t x11 = UINT8_MAX;
volatile uint16_t x12 = UINT16_MAX;
volatile int32_t t2 = 1;
uint16_t x14 = 61U;
volatile uint16_t x15 = 0U;
uint8_t x20 = 3U;
int32_t t4 = 1860;
static uint64_t x22 = UINT64_MAX;
int32_t x44 = INT32_MIN;
static uint8_t x50 = 13U;
static volatile int32_t t11 = 85217561;
int16_t x53 = INT16_MAX;
static int8_t x55 = 1;
int64_t x57 = INT64_MAX;
volatile int64_t x58 = INT64_MAX;
static uint8_t x60 = 0U;
static int32_t t13 = 35021521;
volatile int32_t x71 = INT32_MAX;
static int8_t x74 = -1;
int32_t x76 = 5638587;
volatile int32_t t17 = 14361;
int16_t x84 = -69;
int32_t x92 = 0;
volatile int32_t t21 = 440248;
int64_t x97 = -1LL;
volatile uint8_t x99 = 10U;
int64_t x102 = -1LL;
static int32_t x103 = INT32_MIN;
int32_t t24 = 110;
int16_t x110 = INT16_MAX;
uint32_t x111 = 5938U;
volatile int8_t x120 = INT8_MIN;
volatile int64_t x121 = INT64_MIN;
int16_t x123 = INT16_MAX;
static volatile uint8_t x127 = 7U;
uint16_t x128 = 1883U;
volatile int32_t t30 = 357887;
int32_t x137 = INT32_MIN;
int64_t x142 = -731675405640301195LL;
int32_t t35 = 95;
static volatile int64_t x155 = INT64_MIN;
static int16_t x156 = 3821;
static int16_t x157 = INT16_MIN;
int32_t t38 = 18292418;
static int16_t x166 = -1;
volatile int32_t t39 = -4094;
int32_t t40 = -5310707;
static uint32_t x184 = 425U;
int16_t x185 = -874;
static uint8_t x187 = UINT8_MAX;
int64_t x194 = INT64_MIN;
int32_t x199 = INT32_MIN;
uint64_t x200 = 54LLU;
static volatile int32_t t46 = -1;
uint32_t x201 = 41U;
int32_t t47 = -235;
int8_t x211 = INT8_MAX;
static uint64_t x214 = UINT64_MAX;
int32_t x217 = 130120977;
static int32_t t51 = 174701;
int64_t x222 = -1LL;
static int32_t t52 = 3;
volatile int32_t t53 = 5;
volatile int64_t x231 = -1LL;
int8_t x232 = INT8_MIN;
static int8_t x233 = INT8_MIN;
static uint32_t x236 = 0U;
uint64_t x241 = 0LLU;
uint16_t x248 = UINT16_MAX;
static volatile int64_t x252 = -8523905571611LL;
int32_t t59 = -12693098;
uint16_t x258 = 54U;
int8_t x268 = INT8_MIN;
static int16_t x277 = 1;
volatile int8_t x281 = INT8_MIN;
uint32_t x282 = UINT32_MAX;
static int32_t x289 = INT32_MAX;
int8_t x290 = INT8_MIN;
int32_t t69 = -31834366;
volatile int32_t x299 = -1;
int32_t t71 = -6665940;
uint64_t x305 = UINT64_MAX;
volatile uint8_t x307 = 28U;
volatile uint64_t x308 = UINT64_MAX;
volatile int32_t t74 = 0;
uint32_t x315 = 30U;
static uint8_t x317 = 51U;
int8_t x322 = INT8_MAX;
int32_t x325 = INT32_MIN;
int32_t t80 = 0;
volatile int32_t t81 = 9638139;
static uint32_t x347 = 7122335U;
volatile int32_t t84 = -20355395;
int32_t x364 = -1857864;
uint32_t x365 = 29536U;
static int64_t x366 = 3LL;
volatile uint8_t x369 = UINT8_MAX;
int8_t x370 = INT8_MAX;
static volatile int16_t x371 = INT16_MAX;
int16_t x372 = 15;
int8_t x375 = 8;
volatile int32_t t90 = 465120;
static volatile uint64_t x381 = 6355152927809LLU;
int64_t x382 = 55085570866LL;
int32_t t92 = -15209;
uint8_t x389 = UINT8_MAX;
static int32_t t95 = -639661229;
static int8_t x403 = INT8_MAX;
int32_t x404 = INT32_MIN;
int32_t t96 = -2;
static uint64_t x407 = 481900964254089608LLU;
int64_t x411 = -1LL;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	uint16_t x2 = 9019U;
	int16_t x3 = INT16_MIN;
	uint8_t x4 = 49U;

	t0 = (((x1%x2)<x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint32_t x6 = 6809533U;
	volatile int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 32243132;

	t1 = (((x5%x6)<x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MIN;
	volatile int64_t x10 = -1LL;

	t2 = (((x9%x10)<x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -25;
	int8_t x16 = -16;
	volatile int32_t t3 = -2019;

	t3 = (((x13%x14)<x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	uint8_t x18 = 6U;
	volatile int16_t x19 = INT16_MAX;

	t4 = (((x17%x18)<x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 28U;
	int16_t x23 = -140;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 8732981;

	t5 = (((x21%x22)<x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MAX;
	int8_t x30 = 2;
	static volatile uint8_t x31 = UINT8_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = 431158496;

	t6 = (((x29%x30)<x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 89287861;
	int8_t x34 = -1;
	volatile int8_t x35 = -1;
	static int32_t x36 = INT32_MAX;
	static int32_t t7 = -171400;

	t7 = (((x33%x34)<x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	uint16_t x38 = 1U;
	int16_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	static volatile int32_t t8 = 2411;

	t8 = (((x37%x38)<x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	static uint16_t x42 = 75U;
	uint32_t x43 = 489U;
	volatile int32_t t9 = -45;

	t9 = (((x41%x42)<x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	volatile int8_t x46 = INT8_MAX;
	volatile int64_t x47 = 6679683LL;
	int32_t x48 = INT32_MIN;
	int32_t t10 = -502066;

	t10 = (((x45%x46)<x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = INT64_MIN;
	uint16_t x51 = 1101U;
	uint64_t x52 = 1469758333186LLU;

	t11 = (((x49%x50)<x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = INT16_MIN;
	int8_t x56 = 0;
	static volatile int32_t t12 = 1;

	t12 = (((x53%x54)<x55)==x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x59 = INT16_MAX;

	t13 = (((x57%x58)<x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x65 = 12U;
	uint64_t x66 = 2888223314LLU;
	uint64_t x67 = 112826868LLU;
	uint16_t x68 = 43U;
	int32_t t14 = -786;

	t14 = (((x65%x66)<x67)==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 504U;
	static volatile int32_t x70 = 562074;
	uint8_t x72 = 31U;
	int32_t t15 = -402;

	t15 = (((x69%x70)<x71)==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	int32_t x75 = 265520794;
	volatile int32_t t16 = -11;

	t16 = (((x73%x74)<x75)==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = UINT8_MAX;
	uint8_t x78 = UINT8_MAX;
	uint16_t x79 = UINT16_MAX;
	int64_t x80 = INT64_MIN;

	t17 = (((x77%x78)<x79)==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = -979;
	int32_t x83 = INT32_MIN;
	volatile int32_t t18 = 39;

	t18 = (((x81%x82)<x83)==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x85 = UINT32_MAX;
	static int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MAX;
	int64_t x88 = -93LL;
	volatile int32_t t19 = 52797082;

	t19 = (((x85%x86)<x87)==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = INT64_MIN;
	volatile int64_t x90 = -1LL;
	int16_t x91 = 0;
	int32_t t20 = 471;

	t20 = (((x89%x90)<x91)==x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	uint16_t x94 = UINT16_MAX;
	uint64_t x95 = UINT64_MAX;
	static int64_t x96 = -1LL;

	t21 = (((x93%x94)<x95)==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = INT16_MIN;
	static uint64_t x100 = UINT64_MAX;
	volatile int32_t t22 = 4817815;

	t22 = (((x97%x98)<x99)==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 14332;
	int32_t x104 = INT32_MIN;
	volatile int32_t t23 = 141;

	t23 = (((x101%x102)<x103)==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = INT32_MAX;
	int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MIN;
	int64_t x108 = INT64_MIN;

	t24 = (((x105%x106)<x107)==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = UINT32_MAX;
	static int16_t x112 = INT16_MAX;
	volatile int32_t t25 = 4079213;

	t25 = (((x109%x110)<x111)==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x113 = UINT32_MAX;
	int16_t x114 = INT16_MIN;
	int8_t x115 = -1;
	int32_t x116 = INT32_MIN;
	int32_t t26 = 350;

	t26 = (((x113%x114)<x115)==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x117 = -135430598LL;
	static int64_t x118 = INT64_MAX;
	int64_t x119 = 15848LL;
	static int32_t t27 = -2;

	t27 = (((x117%x118)<x119)==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x122 = UINT32_MAX;
	int16_t x124 = -8;
	volatile int32_t t28 = 498020811;

	t28 = (((x121%x122)<x123)==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x125 = 266940459585927500LL;
	uint16_t x126 = UINT16_MAX;
	volatile int32_t t29 = 92;

	t29 = (((x125%x126)<x127)==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	int8_t x130 = INT8_MIN;
	static int8_t x131 = INT8_MAX;
	int16_t x132 = -1;

	t30 = (((x129%x130)<x131)==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MIN;
	volatile int16_t x134 = INT16_MIN;
	volatile uint16_t x135 = 4269U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t31 = 2965;

	t31 = (((x133%x134)<x135)==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x138 = 327U;
	uint8_t x139 = UINT8_MAX;
	uint8_t x140 = 3U;
	int32_t t32 = -474923;

	t32 = (((x137%x138)<x139)==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MIN;
	uint16_t x143 = UINT16_MAX;
	static int32_t x144 = -340;
	volatile int32_t t33 = -119488006;

	t33 = (((x141%x142)<x143)==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	static uint16_t x147 = UINT16_MAX;
	int16_t x148 = 350;
	int32_t t34 = -91207;

	t34 = (((x145%x146)<x147)==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x149 = 472158U;
	int64_t x150 = -105LL;
	int32_t x151 = INT32_MAX;
	uint16_t x152 = 18U;

	t35 = (((x149%x150)<x151)==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x153 = 129U;
	uint64_t x154 = 1LLU;
	volatile int32_t t36 = -58;

	t36 = (((x153%x154)<x155)==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x158 = 3665327473623039LLU;
	int32_t x159 = INT32_MAX;
	uint32_t x160 = UINT32_MAX;
	int32_t t37 = 67;

	t37 = (((x157%x158)<x159)==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = 78987LL;
	uint32_t x162 = UINT32_MAX;
	int16_t x163 = -1;
	int64_t x164 = INT64_MIN;

	t38 = (((x161%x162)<x163)==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = INT64_MIN;
	int8_t x167 = -1;
	int64_t x168 = INT64_MIN;

	t39 = (((x165%x166)<x167)==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x173 = 456123645;
	int64_t x174 = INT64_MIN;
	uint32_t x175 = UINT32_MAX;
	uint64_t x176 = 8LLU;

	t40 = (((x173%x174)<x175)==x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = UINT8_MAX;
	int32_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int16_t x180 = -12;
	int32_t t41 = -253216;

	t41 = (((x177%x178)<x179)==x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x181 = 16U;
	uint32_t x182 = 5735U;
	uint64_t x183 = UINT64_MAX;
	int32_t t42 = -120211007;

	t42 = (((x181%x182)<x183)==x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x186 = 1;
	int32_t x188 = INT32_MIN;
	int32_t t43 = -493757;

	t43 = (((x185%x186)<x187)==x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = UINT16_MAX;
	static uint32_t x190 = 10308U;
	static uint64_t x191 = 124357515091259LLU;
	int32_t x192 = INT32_MAX;
	volatile int32_t t44 = -733483;

	t44 = (((x189%x190)<x191)==x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	int64_t x195 = -1LL;
	static uint64_t x196 = 113110670580987LLU;
	int32_t t45 = 0;

	t45 = (((x193%x194)<x195)==x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = 2;
	static int16_t x198 = 77;

	t46 = (((x197%x198)<x199)==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x202 = -77890450006LL;
	int16_t x203 = -1;
	static uint64_t x204 = 765177806244623248LLU;

	t47 = (((x201%x202)<x203)==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 0U;
	int32_t x206 = 277502;
	int8_t x207 = -39;
	int32_t x208 = -1911;
	volatile int32_t t48 = 1021117;

	t48 = (((x205%x206)<x207)==x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x209 = 1;
	int64_t x210 = -1LL;
	int8_t x212 = INT8_MIN;
	int32_t t49 = -565606382;

	t49 = (((x209%x210)<x211)==x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x213 = INT8_MIN;
	volatile uint16_t x215 = 0U;
	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t50 = -503531599;

	t50 = (((x213%x214)<x215)==x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x218 = -1;
	int8_t x219 = 29;
	int32_t x220 = -56;

	t51 = (((x217%x218)<x219)==x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MIN;
	uint32_t x223 = UINT32_MAX;
	int64_t x224 = INT64_MIN;

	t52 = (((x221%x222)<x223)==x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x225 = 19111U;
	uint16_t x226 = 1U;
	int8_t x227 = INT8_MIN;
	uint8_t x228 = 2U;

	t53 = (((x225%x226)<x227)==x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x229 = 129;
	int32_t x230 = -1;
	volatile int32_t t54 = -804;

	t54 = (((x229%x230)<x231)==x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x234 = 27216LL;
	volatile uint16_t x235 = UINT16_MAX;
	int32_t t55 = -7;

	t55 = (((x233%x234)<x235)==x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = 27;
	int16_t x238 = INT16_MAX;
	volatile uint8_t x239 = 3U;
	int32_t x240 = INT32_MAX;
	static int32_t t56 = 846;

	t56 = (((x237%x238)<x239)==x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x242 = INT32_MIN;
	uint8_t x243 = 58U;
	uint16_t x244 = 18U;
	int32_t t57 = -66638;

	t57 = (((x241%x242)<x243)==x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x245 = INT16_MIN;
	uint16_t x246 = 52U;
	int8_t x247 = -3;
	int32_t t58 = 3512896;

	t58 = (((x245%x246)<x247)==x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x249 = INT16_MIN;
	volatile uint8_t x250 = 60U;
	uint16_t x251 = 6U;

	t59 = (((x249%x250)<x251)==x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = 22215U;
	volatile int32_t x254 = INT32_MAX;
	uint16_t x255 = 22278U;
	int8_t x256 = -1;
	volatile int32_t t60 = 6148;

	t60 = (((x253%x254)<x255)==x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x257 = UINT8_MAX;
	static int16_t x259 = INT16_MIN;
	volatile int8_t x260 = -3;
	int32_t t61 = -44286379;

	t61 = (((x257%x258)<x259)==x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x261 = INT64_MIN;
	int64_t x262 = INT64_MIN;
	volatile int64_t x263 = INT64_MIN;
	int32_t x264 = INT32_MAX;
	volatile int32_t t62 = 1;

	t62 = (((x261%x262)<x263)==x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x265 = 0U;
	uint16_t x266 = 6920U;
	volatile uint64_t x267 = 8426221226622LLU;
	static int32_t t63 = -7244315;

	t63 = (((x265%x266)<x267)==x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = -213395LL;
	static volatile uint16_t x270 = 1788U;
	int16_t x271 = INT16_MAX;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t64 = -8549;

	t64 = (((x269%x270)<x271)==x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x273 = 875U;
	int16_t x274 = 3;
	uint32_t x275 = UINT32_MAX;
	int8_t x276 = -12;
	volatile int32_t t65 = 2;

	t65 = (((x273%x274)<x275)==x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x278 = UINT32_MAX;
	static uint16_t x279 = 1U;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t66 = -6662048;

	t66 = (((x277%x278)<x279)==x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x283 = -1;
	uint8_t x284 = 3U;
	int32_t t67 = 162;

	t67 = (((x281%x282)<x283)==x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x285 = 72U;
	uint64_t x286 = 1383261273931451LLU;
	int32_t x287 = INT32_MIN;
	static uint32_t x288 = 2735U;
	static volatile int32_t t68 = -14008098;

	t68 = (((x285%x286)<x287)==x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x291 = 41U;
	int8_t x292 = 1;

	t69 = (((x289%x290)<x291)==x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x293 = 5098U;
	int64_t x294 = INT64_MAX;
	volatile int8_t x295 = -15;
	static uint16_t x296 = 336U;
	int32_t t70 = -7084;

	t70 = (((x293%x294)<x295)==x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = 114;
	uint32_t x298 = UINT32_MAX;
	int64_t x300 = -16279178614LL;

	t71 = (((x297%x298)<x299)==x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x301 = -1;
	volatile int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MIN;
	volatile int8_t x304 = INT8_MAX;
	int32_t t72 = -1;

	t72 = (((x301%x302)<x303)==x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x306 = 469026919LLU;
	static volatile int32_t t73 = -11;

	t73 = (((x305%x306)<x307)==x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = -1;
	int64_t x310 = -71802338123LL;
	int16_t x311 = -5804;
	static int32_t x312 = 947;

	t74 = (((x309%x310)<x311)==x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MIN;
	uint16_t x314 = 26U;
	int16_t x316 = INT16_MIN;
	volatile int32_t t75 = -7;

	t75 = (((x313%x314)<x315)==x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x318 = INT32_MIN;
	static uint8_t x319 = 2U;
	int8_t x320 = -1;
	volatile int32_t t76 = -254740;

	t76 = (((x317%x318)<x319)==x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = 358U;
	uint64_t x323 = 7318298299914073600LLU;
	static int16_t x324 = 361;
	int32_t t77 = 90031660;

	t77 = (((x321%x322)<x323)==x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x326 = INT8_MAX;
	int32_t x327 = -1;
	static uint16_t x328 = 11U;
	volatile int32_t t78 = -1189988;

	t78 = (((x325%x326)<x327)==x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x329 = UINT8_MAX;
	volatile uint8_t x330 = 52U;
	static volatile uint32_t x331 = 10U;
	uint64_t x332 = 1466432265LLU;
	int32_t t79 = 43331;

	t79 = (((x329%x330)<x331)==x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MAX;
	int8_t x334 = INT8_MIN;
	int8_t x335 = 16;
	static uint8_t x336 = UINT8_MAX;

	t80 = (((x333%x334)<x335)==x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = 16095U;
	int64_t x338 = INT64_MIN;
	int32_t x339 = -1;
	volatile uint32_t x340 = 205944U;

	t81 = (((x337%x338)<x339)==x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x341 = INT32_MIN;
	static uint64_t x342 = UINT64_MAX;
	int32_t x343 = INT32_MIN;
	uint8_t x344 = 0U;
	volatile int32_t t82 = -2151;

	t82 = (((x341%x342)<x343)==x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x345 = UINT32_MAX;
	uint16_t x346 = 10480U;
	int32_t x348 = -12691;
	int32_t t83 = -210480;

	t83 = (((x345%x346)<x347)==x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = -1;
	static int32_t x354 = -1;
	uint32_t x355 = UINT32_MAX;
	int64_t x356 = INT64_MAX;

	t84 = (((x353%x354)<x355)==x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x357 = 684U;
	int8_t x358 = 4;
	int8_t x359 = -1;
	volatile int64_t x360 = INT64_MAX;
	int32_t t85 = -48244031;

	t85 = (((x357%x358)<x359)==x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x361 = 10U;
	int32_t x362 = INT32_MIN;
	static int16_t x363 = INT16_MIN;
	static int32_t t86 = -44;

	t86 = (((x361%x362)<x363)==x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x367 = -1LL;
	int8_t x368 = INT8_MIN;
	int32_t t87 = 1;

	t87 = (((x365%x366)<x367)==x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t t88 = -2862;

	t88 = (((x369%x370)<x371)==x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x373 = INT32_MIN;
	uint8_t x374 = 24U;
	int32_t x376 = 4;
	int32_t t89 = -1;

	t89 = (((x373%x374)<x375)==x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MAX;
	uint64_t x378 = 663LLU;
	volatile uint16_t x379 = 63U;
	volatile int16_t x380 = INT16_MAX;

	t90 = (((x377%x378)<x379)==x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x383 = -1;
	int8_t x384 = 7;
	volatile int32_t t91 = -3;

	t91 = (((x381%x382)<x383)==x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = UINT64_MAX;
	static int16_t x386 = -2;
	int64_t x387 = INT64_MAX;
	int8_t x388 = -1;

	t92 = (((x385%x386)<x387)==x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x390 = -1;
	int8_t x391 = INT8_MIN;
	volatile int16_t x392 = INT16_MAX;
	int32_t t93 = -1581;

	t93 = (((x389%x390)<x391)==x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = 0;
	static int64_t x394 = 99156LL;
	uint64_t x395 = 4575628401198366283LLU;
	static int8_t x396 = INT8_MAX;
	volatile int32_t t94 = 29;

	t94 = (((x393%x394)<x395)==x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x397 = INT32_MAX;
	static int32_t x398 = -3;
	volatile int8_t x399 = INT8_MAX;
	volatile uint8_t x400 = 42U;

	t95 = (((x397%x398)<x399)==x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x401 = 0;
	int64_t x402 = INT64_MAX;

	t96 = (((x401%x402)<x403)==x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x405 = 7;
	int8_t x406 = -1;
	uint32_t x408 = 1011U;
	static volatile int32_t t97 = -265190232;

	t97 = (((x405%x406)<x407)==x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = 1;
	int8_t x410 = INT8_MIN;
	int8_t x412 = INT8_MAX;
	volatile int32_t t98 = -14;

	t98 = (((x409%x410)<x411)==x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = INT16_MIN;
	int32_t x414 = INT32_MAX;
	uint16_t x415 = 1434U;
	volatile uint32_t x416 = 223U;
	static volatile int32_t t99 = 2964;

	t99 = (((x413%x414)<x415)==x416);

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

