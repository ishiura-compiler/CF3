#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x19 = UINT32_MAX;
int8_t x20 = -1;
volatile int32_t t3 = 55667149;
int16_t x21 = INT16_MIN;
static volatile uint16_t x24 = 6U;
volatile int32_t t6 = 0;
uint32_t x51 = UINT32_MAX;
uint64_t x53 = 28260LLU;
volatile uint32_t x60 = 2667U;
int32_t x62 = INT32_MIN;
int16_t x74 = 3472;
int64_t x78 = -1LL;
int32_t x81 = -1;
static int64_t x82 = INT64_MAX;
uint8_t x87 = UINT8_MAX;
static volatile int32_t t14 = 462;
volatile int32_t t15 = 1;
int32_t t16 = 51;
int64_t x101 = 4331074186266329LL;
uint32_t x106 = UINT32_MAX;
static int8_t x124 = INT8_MIN;
int32_t t22 = -115;
uint32_t x130 = 1176870U;
static int8_t x132 = INT8_MIN;
static uint16_t x134 = UINT16_MAX;
static uint32_t x142 = 401860398U;
int16_t x143 = 13;
volatile int32_t t27 = 90;
static uint8_t x147 = 0U;
int32_t t29 = 935;
int8_t x156 = -1;
uint32_t x163 = UINT32_MAX;
volatile uint32_t x164 = UINT32_MAX;
static int32_t t31 = 808;
int16_t x167 = -3025;
volatile int8_t x168 = 0;
int32_t t33 = 235990;
int32_t t35 = -116;
int64_t x191 = INT64_MIN;
volatile int32_t t36 = -126;
uint16_t x194 = UINT16_MAX;
uint32_t x196 = 10U;
volatile int32_t t37 = 24;
volatile uint64_t x201 = UINT64_MAX;
static volatile int16_t x219 = INT16_MIN;
static int32_t x223 = INT32_MIN;
int16_t x228 = 85;
int32_t t43 = 5347;
static volatile int16_t x239 = INT16_MIN;
int32_t t45 = 145175;
int32_t x241 = INT32_MIN;
int32_t t46 = 48603536;
int16_t x245 = -1;
int32_t t48 = 118;
int64_t x253 = INT64_MAX;
int8_t x255 = 1;
uint64_t x259 = UINT64_MAX;
volatile uint8_t x268 = 5U;
int32_t t51 = -3016;
int64_t x271 = 997LL;
volatile int32_t t53 = -9412;
int64_t x284 = 1LL;
int8_t x286 = INT8_MIN;
volatile uint32_t x295 = 0U;
uint8_t x297 = 0U;
static uint32_t x299 = 0U;
int8_t x329 = INT8_MIN;
int64_t x331 = 0LL;
uint32_t x332 = UINT32_MAX;
static volatile int32_t t62 = 2201;
volatile int8_t x334 = -1;
int64_t x342 = INT64_MAX;
int32_t x351 = INT32_MAX;
static volatile int64_t x358 = -248967LL;
int32_t x361 = -1942;
int16_t x364 = INT16_MAX;
static int16_t x368 = -1;
int16_t x369 = INT16_MIN;
uint32_t x370 = 1348706259U;
static uint16_t x376 = UINT16_MAX;
uint16_t x408 = UINT16_MAX;
uint16_t x414 = UINT16_MAX;
volatile int32_t t77 = 3263;
static volatile uint64_t x427 = 30LLU;
int32_t t78 = 39;
uint16_t x436 = 3U;
int16_t x451 = INT16_MIN;
static int8_t x452 = -1;
int32_t t81 = -45;
uint64_t x462 = 568999354418LLU;
int16_t x468 = -8;
uint32_t x473 = 139U;
static volatile int32_t t85 = 399620276;
static int32_t x490 = 1943420;
int8_t x495 = -1;
int64_t x497 = INT64_MIN;
static uint32_t x499 = 57746U;
static uint8_t x501 = 1U;
volatile int64_t x502 = -1LL;
uint8_t x520 = 10U;
int16_t x524 = -70;
uint16_t x526 = 11U;
int32_t x529 = -1;
volatile int64_t x555 = -431091896LL;
volatile uint16_t x571 = 21751U;
static uint64_t x581 = UINT64_MAX;
static int8_t x582 = INT8_MAX;
int32_t x585 = INT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MIN;
	static uint32_t x4 = 2844847U;
	static int32_t t0 = -27;

	t0 = ((x1%x2)<=(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	int32_t x6 = -720828612;
	static int8_t x7 = INT8_MIN;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -180211038;

	t1 = ((x5%x6)<=(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	int8_t x14 = -1;
	volatile uint16_t x15 = UINT16_MAX;
	int16_t x16 = 74;
	volatile int32_t t2 = 495;

	t2 = ((x13%x14)<=(x15*x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	volatile int32_t x18 = -1;

	t3 = ((x17%x18)<=(x19*x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MIN;
	volatile uint64_t x23 = 135227LLU;
	static int32_t t4 = 32927;

	t4 = ((x21%x22)<=(x23*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = 29616U;
	int16_t x34 = -1;
	uint64_t x35 = 16901909LLU;
	static int64_t x36 = -26652689LL;
	int32_t t5 = 292750574;

	t5 = ((x33%x34)<=(x35*x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = -1LL;
	int64_t x42 = -1LL;
	static uint32_t x43 = 44U;
	uint64_t x44 = 10470823282LLU;

	t6 = ((x41%x42)<=(x43*x44));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MIN;
	static int64_t x50 = 120465855673LL;
	volatile uint32_t x52 = 800U;
	volatile int32_t t7 = -53;

	t7 = ((x49%x50)<=(x51*x52));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x54 = INT8_MAX;
	volatile uint8_t x55 = UINT8_MAX;
	int16_t x56 = INT16_MIN;
	static int32_t t8 = 0;

	t8 = ((x53%x54)<=(x55*x56));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x57 = INT16_MIN;
	int32_t x58 = -14460817;
	static volatile int32_t x59 = INT32_MIN;
	static volatile int32_t t9 = 350253625;

	t9 = ((x57%x58)<=(x59*x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 176606LLU;
	int8_t x63 = 0;
	volatile uint64_t x64 = 6LLU;
	int32_t t10 = -266944;

	t10 = ((x61%x62)<=(x63*x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = -1;
	uint8_t x75 = 23U;
	uint32_t x76 = UINT32_MAX;
	static int32_t t11 = 28;

	t11 = ((x73%x74)<=(x75*x76));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x77 = 12;
	static int16_t x79 = INT16_MAX;
	int16_t x80 = INT16_MAX;
	volatile int32_t t12 = 144;

	t12 = ((x77%x78)<=(x79*x80));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x83 = 0U;
	static int16_t x84 = 0;
	int32_t t13 = 139;

	t13 = ((x81%x82)<=(x83*x84));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x85 = -1;
	int16_t x86 = -1;
	volatile uint32_t x88 = UINT32_MAX;

	t14 = ((x85%x86)<=(x87*x88));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x89 = 20U;
	static int8_t x90 = INT8_MAX;
	static volatile uint64_t x91 = UINT64_MAX;
	int16_t x92 = 13;

	t15 = ((x89%x90)<=(x91*x92));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x97 = 143485LL;
	static int16_t x98 = -709;
	uint16_t x99 = 12U;
	static int16_t x100 = 144;

	t16 = ((x97%x98)<=(x99*x100));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x102 = UINT16_MAX;
	int16_t x103 = INT16_MIN;
	int8_t x104 = -6;
	int32_t t17 = 160575;

	t17 = ((x101%x102)<=(x103*x104));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x105 = 62565871812LLU;
	int16_t x107 = -1;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t18 = -317460;

	t18 = ((x105%x106)<=(x107*x108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x109 = INT8_MAX;
	uint32_t x110 = 1U;
	int64_t x111 = -281832LL;
	static volatile int16_t x112 = INT16_MIN;
	int32_t t19 = -5;

	t19 = ((x109%x110)<=(x111*x112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x113 = 13U;
	uint64_t x114 = UINT64_MAX;
	uint16_t x115 = 0U;
	int8_t x116 = 1;
	volatile int32_t t20 = 4640196;

	t20 = ((x113%x114)<=(x115*x116));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x117 = INT8_MAX;
	static int32_t x118 = INT32_MIN;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = -1;
	int32_t t21 = 10;

	t21 = ((x117%x118)<=(x119*x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x121 = -1LL;
	int8_t x122 = 3;
	volatile int8_t x123 = -1;

	t22 = ((x121%x122)<=(x123*x124));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = 57;
	static int8_t x126 = INT8_MAX;
	uint64_t x127 = 574LLU;
	int8_t x128 = INT8_MIN;
	volatile int32_t t23 = -307;

	t23 = ((x125%x126)<=(x127*x128));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x129 = -14;
	static uint32_t x131 = 31U;
	volatile int32_t t24 = 15209326;

	t24 = ((x129%x130)<=(x131*x132));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x133 = 16035405U;
	static int8_t x135 = -1;
	uint16_t x136 = 2337U;
	volatile int32_t t25 = -14513;

	t25 = ((x133%x134)<=(x135*x136));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = 2366;
	static int8_t x138 = INT8_MIN;
	volatile int16_t x139 = -1;
	static uint16_t x140 = 14U;
	static volatile int32_t t26 = 1;

	t26 = ((x137%x138)<=(x139*x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = 2U;
	int64_t x144 = -1LL;

	t27 = ((x141%x142)<=(x143*x144));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = INT8_MIN;
	int16_t x146 = -1;
	int16_t x148 = INT16_MIN;
	int32_t t28 = 22;

	t28 = ((x145%x146)<=(x147*x148));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x149 = 141687258U;
	volatile uint16_t x150 = UINT16_MAX;
	static int8_t x151 = INT8_MIN;
	static int32_t x152 = 32;

	t29 = ((x149%x150)<=(x151*x152));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x153 = 0U;
	int8_t x154 = INT8_MIN;
	uint16_t x155 = 39U;
	int32_t t30 = -44352;

	t30 = ((x153%x154)<=(x155*x156));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x161 = 14U;
	volatile int8_t x162 = -20;

	t31 = ((x161%x162)<=(x163*x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x165 = 484931;
	int32_t x166 = INT32_MIN;
	int32_t t32 = 12407465;

	t32 = ((x165%x166)<=(x167*x168));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x173 = 141646659765LLU;
	int64_t x174 = INT64_MIN;
	uint16_t x175 = 821U;
	uint8_t x176 = 78U;

	t33 = ((x173%x174)<=(x175*x176));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x177 = INT16_MIN;
	int16_t x178 = -1;
	volatile uint8_t x179 = 42U;
	static int16_t x180 = 1623;
	volatile int32_t t34 = 0;

	t34 = ((x177%x178)<=(x179*x180));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = -1;
	static uint64_t x186 = UINT64_MAX;
	int32_t x187 = -1;
	volatile uint16_t x188 = 12856U;

	t35 = ((x185%x186)<=(x187*x188));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = -11;
	uint64_t x192 = 3978444264913084LLU;

	t36 = ((x189%x190)<=(x191*x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = INT16_MIN;
	static volatile int8_t x195 = INT8_MAX;

	t37 = ((x193%x194)<=(x195*x196));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x197 = INT8_MIN;
	int16_t x198 = INT16_MAX;
	int8_t x199 = 1;
	volatile int32_t x200 = -16068;
	int32_t t38 = 5;

	t38 = ((x197%x198)<=(x199*x200));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x202 = INT32_MAX;
	static uint64_t x203 = 0LLU;
	uint16_t x204 = UINT16_MAX;
	int32_t t39 = -186;

	t39 = ((x201%x202)<=(x203*x204));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x205 = INT16_MAX;
	uint64_t x206 = 1393LLU;
	static int8_t x207 = 1;
	int32_t x208 = 1;
	volatile int32_t t40 = -7797;

	t40 = ((x205%x206)<=(x207*x208));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x217 = UINT8_MAX;
	volatile uint16_t x218 = 133U;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t41 = -21;

	t41 = ((x217%x218)<=(x219*x220));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x221 = INT64_MAX;
	int32_t x222 = 44301;
	uint8_t x224 = 1U;
	volatile int32_t t42 = 392113342;

	t42 = ((x221%x222)<=(x223*x224));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = INT16_MAX;
	int8_t x226 = -1;
	int8_t x227 = INT8_MAX;

	t43 = ((x225%x226)<=(x227*x228));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x233 = UINT8_MAX;
	int64_t x234 = -1LL;
	int8_t x235 = 0;
	int64_t x236 = INT64_MIN;
	volatile int32_t t44 = 0;

	t44 = ((x233%x234)<=(x235*x236));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MAX;
	int8_t x240 = INT8_MIN;

	t45 = ((x237%x238)<=(x239*x240));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x242 = 14617U;
	volatile int32_t x243 = INT32_MAX;
	uint32_t x244 = UINT32_MAX;

	t46 = ((x241%x242)<=(x243*x244));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x246 = INT16_MAX;
	static uint32_t x247 = UINT32_MAX;
	volatile int8_t x248 = 0;
	int32_t t47 = -3987315;

	t47 = ((x245%x246)<=(x247*x248));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x249 = 461389922794LL;
	volatile int16_t x250 = INT16_MIN;
	uint32_t x251 = UINT32_MAX;
	uint64_t x252 = 1508776446010403053LLU;

	t48 = ((x249%x250)<=(x251*x252));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x254 = -38;
	int64_t x256 = -1LL;
	int32_t t49 = -387807493;

	t49 = ((x253%x254)<=(x255*x256));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x257 = UINT8_MAX;
	uint8_t x258 = 38U;
	int64_t x260 = INT64_MIN;
	int32_t t50 = 9;

	t50 = ((x257%x258)<=(x259*x260));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x265 = INT64_MIN;
	int64_t x266 = 326LL;
	int8_t x267 = INT8_MIN;

	t51 = ((x265%x266)<=(x267*x268));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x269 = INT64_MIN;
	uint64_t x270 = 508372643186384237LLU;
	uint64_t x272 = 273552729883LLU;
	volatile int32_t t52 = 16335160;

	t52 = ((x269%x270)<=(x271*x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x277 = -23;
	uint8_t x278 = 7U;
	volatile uint8_t x279 = 0U;
	int32_t x280 = INT32_MIN;

	t53 = ((x277%x278)<=(x279*x280));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MIN;
	volatile int16_t x283 = INT16_MIN;
	volatile int32_t t54 = 8158;

	t54 = ((x281%x282)<=(x283*x284));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x285 = 11U;
	volatile int16_t x287 = INT16_MIN;
	volatile int32_t x288 = -1;
	volatile int32_t t55 = -2;

	t55 = ((x285%x286)<=(x287*x288));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x293 = -1;
	uint64_t x294 = 32LLU;
	volatile int32_t x296 = -1;
	volatile int32_t t56 = -18407;

	t56 = ((x293%x294)<=(x295*x296));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x298 = INT16_MIN;
	int32_t x300 = -1;
	volatile int32_t t57 = -823702;

	t57 = ((x297%x298)<=(x299*x300));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x313 = 11508681LLU;
	static uint8_t x314 = 6U;
	static uint16_t x315 = UINT16_MAX;
	int32_t x316 = -1;
	static volatile int32_t t58 = 316604658;

	t58 = ((x313%x314)<=(x315*x316));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x317 = UINT16_MAX;
	volatile uint32_t x318 = UINT32_MAX;
	int8_t x319 = INT8_MIN;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t59 = 217194520;

	t59 = ((x317%x318)<=(x319*x320));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x321 = INT16_MIN;
	volatile int16_t x322 = INT16_MIN;
	int16_t x323 = 1;
	int64_t x324 = INT64_MIN;
	int32_t t60 = 3118;

	t60 = ((x321%x322)<=(x323*x324));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x325 = 0U;
	static int16_t x326 = 114;
	uint32_t x327 = UINT32_MAX;
	static int8_t x328 = 3;
	volatile int32_t t61 = -793449618;

	t61 = ((x325%x326)<=(x327*x328));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x330 = 18300095U;

	t62 = ((x329%x330)<=(x331*x332));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x333 = 5;
	int64_t x335 = -129229258311563LL;
	uint8_t x336 = 86U;
	int32_t t63 = 867438037;

	t63 = ((x333%x334)<=(x335*x336));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x337 = 188U;
	volatile int16_t x338 = -1;
	uint32_t x339 = 2523U;
	volatile uint64_t x340 = UINT64_MAX;
	volatile int32_t t64 = 1908;

	t64 = ((x337%x338)<=(x339*x340));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x341 = -1;
	volatile uint32_t x343 = UINT32_MAX;
	int8_t x344 = -28;
	volatile int32_t t65 = 510343759;

	t65 = ((x341%x342)<=(x343*x344));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x349 = -3;
	static volatile uint32_t x350 = 28688303U;
	uint32_t x352 = UINT32_MAX;
	static volatile int32_t t66 = 61194356;

	t66 = ((x349%x350)<=(x351*x352));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x357 = 8;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t67 = -25140;

	t67 = ((x357%x358)<=(x359*x360));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x362 = 3U;
	int8_t x363 = INT8_MAX;
	int32_t t68 = 3;

	t68 = ((x361%x362)<=(x363*x364));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x365 = INT8_MAX;
	int16_t x366 = INT16_MIN;
	static int64_t x367 = INT64_MAX;
	volatile int32_t t69 = -36;

	t69 = ((x365%x366)<=(x367*x368));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x371 = UINT64_MAX;
	volatile int16_t x372 = INT16_MIN;
	int32_t t70 = 0;

	t70 = ((x369%x370)<=(x371*x372));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MAX;
	int8_t x375 = 0;
	volatile int32_t t71 = -4742569;

	t71 = ((x373%x374)<=(x375*x376));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x385 = -21LL;
	static int16_t x386 = -1;
	volatile uint8_t x387 = 0U;
	int16_t x388 = INT16_MAX;
	volatile int32_t t72 = -52607032;

	t72 = ((x385%x386)<=(x387*x388));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = 4;
	uint32_t x395 = UINT32_MAX;
	int16_t x396 = 15134;
	volatile int32_t t73 = -15251901;

	t73 = ((x393%x394)<=(x395*x396));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x397 = INT8_MAX;
	uint16_t x398 = UINT16_MAX;
	volatile int16_t x399 = INT16_MIN;
	uint32_t x400 = UINT32_MAX;
	int32_t t74 = -3910898;

	t74 = ((x397%x398)<=(x399*x400));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x405 = INT32_MAX;
	int16_t x406 = -1;
	static uint64_t x407 = UINT64_MAX;
	volatile int32_t t75 = 3831;

	t75 = ((x405%x406)<=(x407*x408));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x413 = 7277LL;
	int8_t x415 = INT8_MIN;
	int8_t x416 = INT8_MAX;
	volatile int32_t t76 = 1;

	t76 = ((x413%x414)<=(x415*x416));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x417 = UINT32_MAX;
	int8_t x418 = -1;
	static uint8_t x419 = 31U;
	static int32_t x420 = -1;

	t77 = ((x417%x418)<=(x419*x420));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x425 = 177;
	uint64_t x426 = UINT64_MAX;
	static int16_t x428 = -9465;

	t78 = ((x425%x426)<=(x427*x428));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x433 = INT16_MAX;
	int16_t x434 = INT16_MIN;
	int16_t x435 = 2;
	static volatile int32_t t79 = 116643;

	t79 = ((x433%x434)<=(x435*x436));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x445 = -1;
	static uint64_t x446 = 32526142336396587LLU;
	int16_t x447 = INT16_MIN;
	static int16_t x448 = INT16_MAX;
	int32_t t80 = 610430;

	t80 = ((x445%x446)<=(x447*x448));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x449 = INT16_MIN;
	volatile int8_t x450 = INT8_MIN;

	t81 = ((x449%x450)<=(x451*x452));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x461 = INT64_MAX;
	uint32_t x463 = UINT32_MAX;
	static uint32_t x464 = 67U;
	int32_t t82 = -446;

	t82 = ((x461%x462)<=(x463*x464));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x465 = UINT64_MAX;
	uint64_t x466 = 7LLU;
	static int16_t x467 = -1;
	int32_t t83 = 211292;

	t83 = ((x465%x466)<=(x467*x468));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x469 = -885398;
	int16_t x470 = 9;
	static int16_t x471 = -1;
	int16_t x472 = INT16_MIN;
	static volatile int32_t t84 = 33435836;

	t84 = ((x469%x470)<=(x471*x472));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x474 = 19;
	static uint32_t x475 = 49273U;
	uint64_t x476 = UINT64_MAX;

	t85 = ((x473%x474)<=(x475*x476));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x485 = -3539;
	int16_t x486 = INT16_MIN;
	int64_t x487 = -33592LL;
	uint16_t x488 = 4U;
	volatile int32_t t86 = -84;

	t86 = ((x485%x486)<=(x487*x488));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x489 = INT64_MIN;
	uint64_t x491 = UINT64_MAX;
	static volatile int8_t x492 = 1;
	int32_t t87 = -2974012;

	t87 = ((x489%x490)<=(x491*x492));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x493 = -1LL;
	uint8_t x494 = UINT8_MAX;
	static volatile int8_t x496 = 8;
	static int32_t t88 = -1101241;

	t88 = ((x493%x494)<=(x495*x496));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x498 = 512LL;
	uint8_t x500 = UINT8_MAX;
	static volatile int32_t t89 = 1;

	t89 = ((x497%x498)<=(x499*x500));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x503 = -1;
	volatile int16_t x504 = -18;
	int32_t t90 = 538389;

	t90 = ((x501%x502)<=(x503*x504));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x517 = 10;
	int8_t x518 = -1;
	int16_t x519 = 175;
	int32_t t91 = 1690;

	t91 = ((x517%x518)<=(x519*x520));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x521 = UINT8_MAX;
	static int8_t x522 = INT8_MAX;
	static int8_t x523 = INT8_MIN;
	int32_t t92 = 3;

	t92 = ((x521%x522)<=(x523*x524));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x525 = 13;
	int64_t x527 = -153888930LL;
	static volatile uint8_t x528 = 107U;
	volatile int32_t t93 = 881032078;

	t93 = ((x525%x526)<=(x527*x528));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x530 = INT8_MIN;
	uint64_t x531 = 90605520967353LLU;
	int16_t x532 = -1;
	volatile int32_t t94 = 393;

	t94 = ((x529%x530)<=(x531*x532));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x553 = 956U;
	int64_t x554 = INT64_MAX;
	int8_t x556 = -3;
	int32_t t95 = 1758;

	t95 = ((x553%x554)<=(x555*x556));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x569 = UINT8_MAX;
	int16_t x570 = INT16_MAX;
	static int64_t x572 = -911067LL;
	volatile int32_t t96 = -127950882;

	t96 = ((x569%x570)<=(x571*x572));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x573 = -1829836890984356LL;
	uint8_t x574 = UINT8_MAX;
	volatile int16_t x575 = INT16_MIN;
	uint16_t x576 = 7307U;
	volatile int32_t t97 = -84;

	t97 = ((x573%x574)<=(x575*x576));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x583 = 5639;
	static uint32_t x584 = UINT32_MAX;
	static volatile int32_t t98 = -787;

	t98 = ((x581%x582)<=(x583*x584));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x586 = -1;
	volatile uint32_t x587 = 27053761U;
	uint32_t x588 = 71208U;
	volatile int32_t t99 = -4710935;

	t99 = ((x585%x586)<=(x587*x588));

	if (t99 != 1) { NG(); } else { ; }
	
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

