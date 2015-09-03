#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -247;
uint16_t x7 = 33U;
int32_t t1 = -324882;
int16_t x12 = INT16_MIN;
int16_t x17 = INT16_MIN;
uint16_t x18 = 604U;
int8_t x28 = INT8_MAX;
int32_t t7 = -7;
int16_t x35 = -1;
static volatile int64_t x38 = INT64_MAX;
static int16_t x46 = 1;
int64_t x47 = -1LL;
int32_t x50 = INT32_MIN;
int8_t x54 = -2;
volatile uint16_t x58 = 31U;
uint64_t x59 = UINT64_MAX;
int16_t x61 = 1;
uint32_t x64 = 55619141U;
uint16_t x65 = 40U;
int16_t x68 = -14;
int8_t x69 = INT8_MIN;
int32_t x72 = INT32_MIN;
volatile int32_t x78 = -97232;
static volatile uint32_t x82 = UINT32_MAX;
int64_t x87 = INT64_MIN;
uint32_t x88 = UINT32_MAX;
static uint32_t x89 = UINT32_MAX;
int64_t x100 = INT64_MIN;
static int32_t t24 = 5552234;
int16_t x104 = INT16_MIN;
static int8_t x106 = INT8_MAX;
int32_t t26 = 2531;
volatile int8_t x109 = INT8_MIN;
int32_t t28 = 1729;
uint32_t x123 = 77U;
uint32_t x126 = UINT32_MAX;
int8_t x127 = -1;
int32_t x146 = -1;
int8_t x158 = 8;
uint16_t x164 = 22U;
int32_t x167 = INT32_MAX;
int16_t x170 = INT16_MIN;
uint32_t x171 = 2U;
static uint32_t x172 = 11243662U;
uint32_t x174 = 91U;
volatile int32_t t44 = -4;
volatile int32_t t45 = 5;
volatile int32_t t46 = -43451;
volatile int32_t t47 = 1;
int16_t x203 = INT16_MAX;
volatile int32_t x205 = INT32_MIN;
uint16_t x207 = 324U;
static int8_t x209 = -1;
int16_t x212 = -1;
int32_t x214 = INT32_MIN;
int64_t x221 = INT64_MIN;
int64_t x225 = 25574757234933LL;
int16_t x229 = INT16_MIN;
int32_t x231 = 8430;
int8_t x235 = INT8_MAX;
static int32_t x237 = -1;
volatile int32_t t57 = -113080;
static volatile int32_t x247 = -1;
static volatile int32_t t59 = 8;
int16_t x253 = INT16_MIN;
int32_t t63 = -7;
static int64_t x266 = -1LL;
volatile int32_t t64 = 1521;
int8_t x269 = -1;
uint8_t x270 = UINT8_MAX;
int8_t x274 = 4;
uint8_t x275 = 5U;
int16_t x276 = INT16_MAX;
volatile uint16_t x280 = UINT16_MAX;
static volatile int32_t t67 = 19007;
int64_t x291 = INT64_MIN;
int8_t x295 = -1;
volatile int32_t t71 = 9;
int8_t x302 = INT8_MIN;
static volatile int32_t t73 = -53595;
uint64_t x309 = UINT64_MAX;
int32_t x310 = INT32_MAX;
int32_t x329 = INT32_MIN;
uint64_t x330 = 240318425945021925LLU;
uint8_t x331 = UINT8_MAX;
int64_t x339 = INT64_MIN;
int32_t t81 = -700;
static int8_t x344 = -4;
uint32_t x345 = 5419U;
static volatile int32_t t83 = -1;
volatile uint16_t x355 = UINT16_MAX;
int64_t x356 = 2LL;
uint64_t x357 = 66072LLU;
int16_t x360 = -1;
uint32_t x361 = 32330041U;
int16_t x362 = 1;
uint64_t x369 = UINT64_MAX;
int32_t x372 = INT32_MAX;
volatile int32_t x378 = -1;
volatile uint64_t x383 = 2834526085705LLU;
static int16_t x384 = 7701;
volatile int32_t t94 = 45943622;
volatile uint32_t x395 = 18274U;
uint32_t x398 = UINT32_MAX;
int32_t x399 = INT32_MAX;
int32_t t97 = 382;
uint8_t x412 = UINT8_MAX;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	uint32_t x2 = 3558672U;
	static volatile int32_t x3 = INT32_MIN;
	uint16_t x4 = UINT16_MAX;
	static volatile int32_t t0 = -2481194;

	t0 = ((x1%x2)<=(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 15460;
	int64_t x8 = INT64_MIN;

	t1 = ((x5%x6)<=(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -20524566983LL;
	int16_t x10 = INT16_MIN;
	int8_t x11 = -37;
	volatile int32_t t2 = 277120;

	t2 = ((x9%x10)<=(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 297614;
	volatile int16_t x14 = INT16_MIN;
	volatile int64_t x15 = -882965025810936284LL;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -562219;

	t3 = ((x13%x14)<=(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x19 = 2231;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -50137;

	t4 = ((x17%x18)<=(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 3U;
	static int8_t x22 = 1;
	volatile uint32_t x23 = 123U;
	uint32_t x24 = 219722308U;
	static int32_t t5 = 0;

	t5 = ((x21%x22)<=(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 156158160U;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = UINT64_MAX;
	static volatile int32_t t6 = -255886165;

	t6 = ((x25%x26)<=(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = INT16_MAX;
	int64_t x31 = INT64_MAX;
	int64_t x32 = -1LL;

	t7 = ((x29%x30)<=(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	static uint16_t x34 = UINT16_MAX;
	volatile uint8_t x36 = UINT8_MAX;
	int32_t t8 = 0;

	t8 = ((x33%x34)<=(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	static volatile uint8_t x39 = 7U;
	static int32_t x40 = INT32_MIN;
	int32_t t9 = 44;

	t9 = ((x37%x38)<=(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 265385022597808399LLU;
	int8_t x43 = -1;
	int16_t x44 = 30;
	static volatile int32_t t10 = 2171;

	t10 = ((x41%x42)<=(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint16_t x48 = UINT16_MAX;
	int32_t t11 = -27847;

	t11 = ((x45%x46)<=(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x49 = -1267;
	int8_t x51 = -1;
	uint32_t x52 = UINT32_MAX;
	int32_t t12 = -2497;

	t12 = ((x49%x50)<=(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 7059U;
	int32_t x55 = -1;
	static uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = -14535071;

	t13 = ((x53%x54)<=(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile int16_t x60 = INT16_MIN;
	static int32_t t14 = 15;

	t14 = ((x57%x58)<=(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x62 = 7;
	int8_t x63 = 32;
	volatile int32_t t15 = 3;

	t15 = ((x61%x62)<=(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x66 = UINT32_MAX;
	uint64_t x67 = UINT64_MAX;
	volatile int32_t t16 = -901346628;

	t16 = ((x65%x66)<=(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MAX;
	volatile int8_t x71 = INT8_MAX;
	volatile int32_t t17 = -96;

	t17 = ((x69%x70)<=(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x73 = -1;
	volatile int8_t x74 = -1;
	volatile int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MAX;
	static int32_t t18 = 65;

	t18 = ((x73%x74)<=(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 15;
	int16_t x79 = INT16_MIN;
	uint16_t x80 = 48U;
	int32_t t19 = 89688;

	t19 = ((x77%x78)<=(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = UINT8_MAX;
	int32_t x83 = -1;
	static volatile int8_t x84 = -1;
	volatile int32_t t20 = -808;

	t20 = ((x81%x82)<=(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 7347189U;
	int32_t x86 = -1;
	volatile int32_t t21 = 45;

	t21 = ((x85%x86)<=(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x90 = UINT8_MAX;
	volatile int64_t x91 = INT64_MIN;
	uint16_t x92 = 2886U;
	int32_t t22 = -4035;

	t22 = ((x89%x90)<=(x91<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = 55;
	volatile uint16_t x94 = 845U;
	volatile int64_t x95 = INT64_MAX;
	uint16_t x96 = 427U;
	static int32_t t23 = -225696;

	t23 = ((x93%x94)<=(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = -5;
	int16_t x98 = INT16_MAX;
	int8_t x99 = -6;

	t24 = ((x97%x98)<=(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x101 = 3895167295876528970LLU;
	static int16_t x102 = 11;
	static volatile uint64_t x103 = 63523903LLU;
	static volatile int32_t t25 = -5581895;

	t25 = ((x101%x102)<=(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -2522;
	int64_t x107 = -1LL;
	uint64_t x108 = UINT64_MAX;

	t26 = ((x105%x106)<=(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = UINT64_MAX;
	static uint32_t x111 = 5386727U;
	int16_t x112 = -1;
	int32_t t27 = -31274198;

	t27 = ((x109%x110)<=(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	static int16_t x114 = INT16_MAX;
	int8_t x115 = -1;
	int16_t x116 = 27;

	t28 = ((x113%x114)<=(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = INT8_MIN;
	static uint64_t x118 = UINT64_MAX;
	int16_t x119 = INT16_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	int32_t t29 = 217;

	t29 = ((x117%x118)<=(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 3216LLU;
	int32_t x122 = INT32_MIN;
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t30 = -944789;

	t30 = ((x121%x122)<=(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 61;

	t31 = ((x125%x126)<=(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x133 = UINT8_MAX;
	int8_t x134 = 1;
	uint64_t x135 = 91325006352663644LLU;
	static int64_t x136 = INT64_MAX;
	volatile int32_t t32 = 71364698;

	t32 = ((x133%x134)<=(x135<=x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 483043LLU;
	int16_t x138 = INT16_MIN;
	static int64_t x139 = INT64_MAX;
	int8_t x140 = 13;
	volatile int32_t t33 = -16592554;

	t33 = ((x137%x138)<=(x139<=x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = UINT32_MAX;
	static int32_t x142 = -1;
	int16_t x143 = -1;
	uint64_t x144 = UINT64_MAX;
	int32_t t34 = -12673;

	t34 = ((x141%x142)<=(x143<=x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MIN;
	int16_t x147 = INT16_MAX;
	int8_t x148 = -25;
	int32_t t35 = -78808514;

	t35 = ((x145%x146)<=(x147<=x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = 199911462LL;
	int32_t x150 = -9351400;
	volatile int8_t x151 = INT8_MAX;
	int8_t x152 = -46;
	int32_t t36 = -4696105;

	t36 = ((x149%x150)<=(x151<=x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = UINT16_MAX;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = UINT8_MAX;
	static int16_t x156 = -1;
	int32_t t37 = -63;

	t37 = ((x153%x154)<=(x155<=x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x157 = -1LL;
	static int32_t x159 = -3366672;
	static int8_t x160 = 7;
	static int32_t t38 = 128215;

	t38 = ((x157%x158)<=(x159<=x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = 4313914904LL;
	int64_t x162 = -1LL;
	uint16_t x163 = UINT16_MAX;
	volatile int32_t t39 = -8039;

	t39 = ((x161%x162)<=(x163<=x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = 1;
	volatile int32_t x166 = -1;
	uint8_t x168 = 1U;
	volatile int32_t t40 = 0;

	t40 = ((x165%x166)<=(x167<=x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MIN;
	volatile int32_t t41 = -1;

	t41 = ((x169%x170)<=(x171<=x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	uint8_t x175 = 8U;
	static volatile int8_t x176 = INT8_MAX;
	volatile int32_t t42 = -103;

	t42 = ((x173%x174)<=(x175<=x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x181 = 1U;
	uint64_t x182 = 543342147771307LLU;
	static volatile int32_t x183 = -1;
	volatile int8_t x184 = -1;
	volatile int32_t t43 = -220019;

	t43 = ((x181%x182)<=(x183<=x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x185 = -1345LL;
	int32_t x186 = -1;
	int16_t x187 = -1;
	int32_t x188 = INT32_MIN;

	t44 = ((x185%x186)<=(x187<=x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MAX;
	static int64_t x190 = INT64_MIN;
	volatile int16_t x191 = -1;
	int32_t x192 = INT32_MAX;

	t45 = ((x189%x190)<=(x191<=x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x194 = INT16_MAX;
	uint64_t x195 = 49LLU;
	int16_t x196 = 0;

	t46 = ((x193%x194)<=(x195<=x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	uint16_t x199 = 6U;
	int32_t x200 = 397864;

	t47 = ((x197%x198)<=(x199<=x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x201 = INT16_MAX;
	int8_t x202 = -1;
	uint8_t x204 = 4U;
	static volatile int32_t t48 = 22781;

	t48 = ((x201%x202)<=(x203<=x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x206 = -62;
	static uint8_t x208 = 53U;
	volatile int32_t t49 = 57688;

	t49 = ((x205%x206)<=(x207<=x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x210 = -4;
	int64_t x211 = 95LL;
	int32_t t50 = -23;

	t50 = ((x209%x210)<=(x211<=x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -1LL;
	int32_t x215 = INT32_MIN;
	int8_t x216 = 1;
	volatile int32_t t51 = -1683184;

	t51 = ((x213%x214)<=(x215<=x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x217 = 23788587U;
	volatile uint64_t x218 = UINT64_MAX;
	static uint64_t x219 = UINT64_MAX;
	static int32_t x220 = -1;
	volatile int32_t t52 = 6;

	t52 = ((x217%x218)<=(x219<=x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x222 = INT64_MIN;
	uint32_t x223 = 73227U;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t53 = -1;

	t53 = ((x221%x222)<=(x223<=x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x226 = UINT32_MAX;
	int64_t x227 = INT64_MAX;
	uint16_t x228 = 2666U;
	volatile int32_t t54 = 48;

	t54 = ((x225%x226)<=(x227<=x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x230 = 163298LL;
	uint16_t x232 = 3U;
	int32_t t55 = -35324309;

	t55 = ((x229%x230)<=(x231<=x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = 26U;
	uint32_t x234 = 26582U;
	int32_t x236 = 3957;
	int32_t t56 = 14147;

	t56 = ((x233%x234)<=(x235<=x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x238 = -1;
	int16_t x239 = -101;
	static uint16_t x240 = UINT16_MAX;

	t57 = ((x237%x238)<=(x239<=x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = UINT16_MAX;
	int8_t x242 = INT8_MIN;
	int8_t x243 = -1;
	volatile int32_t x244 = -1;
	volatile int32_t t58 = 7;

	t58 = ((x241%x242)<=(x243<=x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x245 = INT8_MIN;
	uint64_t x246 = 6742870369944LLU;
	static int64_t x248 = -1LL;

	t59 = ((x245%x246)<=(x247<=x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MIN;
	uint64_t x250 = 29693LLU;
	uint32_t x251 = 12343U;
	int32_t x252 = INT32_MIN;
	int32_t t60 = 29;

	t60 = ((x249%x250)<=(x251<=x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x254 = 1475;
	int8_t x255 = -1;
	static int32_t x256 = -1;
	int32_t t61 = 15;

	t61 = ((x253%x254)<=(x255<=x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = UINT64_MAX;
	int64_t x258 = INT64_MIN;
	int64_t x259 = 2123505105382735472LL;
	int16_t x260 = -21;
	volatile int32_t t62 = -124432526;

	t62 = ((x257%x258)<=(x259<=x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x261 = INT64_MAX;
	volatile int32_t x262 = -1;
	int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MIN;

	t63 = ((x261%x262)<=(x263<=x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = -40587;
	int32_t x267 = INT32_MAX;
	int16_t x268 = INT16_MIN;

	t64 = ((x265%x266)<=(x267<=x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x271 = 125LLU;
	int8_t x272 = 0;
	volatile int32_t t65 = 1;

	t65 = ((x269%x270)<=(x271<=x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -32;
	int32_t t66 = -31997282;

	t66 = ((x273%x274)<=(x275<=x276));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x277 = -1;
	int8_t x278 = -1;
	static uint16_t x279 = 11U;

	t67 = ((x277%x278)<=(x279<=x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = 742158014;
	int32_t x282 = -28591624;
	int8_t x283 = INT8_MIN;
	int16_t x284 = -1;
	volatile int32_t t68 = 17;

	t68 = ((x281%x282)<=(x283<=x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = INT16_MIN;
	volatile int16_t x286 = 10891;
	int32_t x287 = INT32_MIN;
	static volatile int8_t x288 = INT8_MIN;
	volatile int32_t t69 = -31401991;

	t69 = ((x285%x286)<=(x287<=x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	static volatile uint16_t x290 = UINT16_MAX;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t70 = -1;

	t70 = ((x289%x290)<=(x291<=x292));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -2;
	uint32_t x294 = 127U;
	int8_t x296 = -5;

	t71 = ((x293%x294)<=(x295<=x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = 0;
	uint8_t x298 = 20U;
	volatile int32_t x299 = INT32_MIN;
	int64_t x300 = 1625138483448LL;
	int32_t t72 = -630931705;

	t72 = ((x297%x298)<=(x299<=x300));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = 79608LLU;
	int64_t x303 = 221314588LL;
	volatile uint16_t x304 = 1526U;

	t73 = ((x301%x302)<=(x303<=x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x311 = INT16_MIN;
	uint32_t x312 = 12056U;
	volatile int32_t t74 = 115902789;

	t74 = ((x309%x310)<=(x311<=x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x313 = INT64_MIN;
	int16_t x314 = 9380;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = 607U;
	volatile int32_t t75 = -8111;

	t75 = ((x313%x314)<=(x315<=x316));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x317 = INT32_MAX;
	uint64_t x318 = 449838288976LLU;
	uint32_t x319 = 39844997U;
	volatile uint16_t x320 = UINT16_MAX;
	int32_t t76 = -365351840;

	t76 = ((x317%x318)<=(x319<=x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x321 = UINT64_MAX;
	int64_t x322 = -1LL;
	static volatile int64_t x323 = -2569985LL;
	int8_t x324 = INT8_MAX;
	volatile int32_t t77 = -54;

	t77 = ((x321%x322)<=(x323<=x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x325 = 15;
	int32_t x326 = -1;
	static int8_t x327 = INT8_MIN;
	uint32_t x328 = UINT32_MAX;
	int32_t t78 = 2168;

	t78 = ((x325%x326)<=(x327<=x328));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x332 = -1;
	static int32_t t79 = 11021;

	t79 = ((x329%x330)<=(x331<=x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = INT64_MAX;
	volatile int8_t x334 = -1;
	int8_t x335 = INT8_MIN;
	static uint32_t x336 = 21239U;
	volatile int32_t t80 = -40;

	t80 = ((x333%x334)<=(x335<=x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x337 = 1U;
	int8_t x338 = INT8_MAX;
	int64_t x340 = INT64_MIN;

	t81 = ((x337%x338)<=(x339<=x340));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x341 = UINT16_MAX;
	int64_t x342 = 2129317874LL;
	int32_t x343 = -1;
	static volatile int32_t t82 = 26;

	t82 = ((x341%x342)<=(x343<=x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x346 = INT64_MAX;
	uint64_t x347 = UINT64_MAX;
	uint16_t x348 = 468U;

	t83 = ((x345%x346)<=(x347<=x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = 731U;
	int64_t x350 = -1LL;
	static int32_t x351 = INT32_MAX;
	volatile int64_t x352 = INT64_MIN;
	int32_t t84 = -53;

	t84 = ((x349%x350)<=(x351<=x352));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x353 = 2U;
	int32_t x354 = 47097;
	int32_t t85 = -41;

	t85 = ((x353%x354)<=(x355<=x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x358 = -1;
	static int32_t x359 = INT32_MAX;
	int32_t t86 = 254;

	t86 = ((x357%x358)<=(x359<=x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x363 = -2;
	static int32_t x364 = INT32_MIN;
	volatile int32_t t87 = 4;

	t87 = ((x361%x362)<=(x363<=x364));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x365 = UINT16_MAX;
	int64_t x366 = 1452228LL;
	uint16_t x367 = UINT16_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t88 = -7;

	t88 = ((x365%x366)<=(x367<=x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x370 = -1;
	volatile uint16_t x371 = 8069U;
	int32_t t89 = 109228;

	t89 = ((x369%x370)<=(x371<=x372));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x373 = 78U;
	volatile int32_t x374 = 3795;
	uint8_t x375 = 2U;
	volatile int64_t x376 = INT64_MAX;
	volatile int32_t t90 = -1482;

	t90 = ((x373%x374)<=(x375<=x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = INT16_MAX;
	volatile int32_t x379 = -1;
	volatile int32_t x380 = -949273;
	static int32_t t91 = -43310501;

	t91 = ((x377%x378)<=(x379<=x380));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = 12502422U;
	int16_t x382 = -1;
	volatile int32_t t92 = -119;

	t92 = ((x381%x382)<=(x383<=x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MIN;
	uint16_t x386 = 154U;
	uint16_t x387 = 17U;
	static int64_t x388 = INT64_MIN;
	volatile int32_t t93 = -1;

	t93 = ((x385%x386)<=(x387<=x388));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x389 = -3460757838737LL;
	int16_t x390 = 865;
	volatile int8_t x391 = 1;
	int8_t x392 = 0;

	t94 = ((x389%x390)<=(x391<=x392));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x393 = INT32_MIN;
	volatile int64_t x394 = 62041LL;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t95 = -3;

	t95 = ((x393%x394)<=(x395<=x396));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x397 = 179LLU;
	int8_t x400 = INT8_MAX;
	static volatile int32_t t96 = -163;

	t96 = ((x397%x398)<=(x399<=x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = UINT64_MAX;
	int64_t x402 = -1LL;
	int32_t x403 = -4;
	static uint8_t x404 = 1U;

	t97 = ((x401%x402)<=(x403<=x404));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x405 = 855945U;
	int32_t x406 = 2458388;
	int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	volatile int32_t t98 = -32;

	t98 = ((x405%x406)<=(x407<=x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x409 = INT16_MAX;
	int8_t x410 = INT8_MIN;
	volatile int64_t x411 = 10931682127LL;
	volatile int32_t t99 = -4;

	t99 = ((x409%x410)<=(x411<=x412));

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

