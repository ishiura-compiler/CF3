#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
static int32_t t0 = 247;
uint8_t x6 = 5U;
static int8_t x22 = 61;
int16_t x24 = -1;
int32_t t3 = 52;
volatile int32_t t4 = 996;
static int8_t x35 = -1;
int32_t x38 = -1;
static int16_t x41 = INT16_MAX;
static int8_t x42 = INT8_MAX;
int32_t x44 = -1;
static volatile int32_t t8 = 466192372;
static int16_t x49 = INT16_MIN;
static uint64_t x54 = UINT64_MAX;
volatile int32_t x56 = -30450689;
int32_t t10 = 30201;
int8_t x60 = INT8_MIN;
int64_t x63 = -1LL;
volatile uint16_t x64 = 26U;
uint64_t x77 = 60LLU;
volatile int8_t x78 = INT8_MIN;
static int32_t t19 = -221528087;
int16_t x99 = INT16_MAX;
uint16_t x102 = 19U;
uint8_t x104 = 11U;
int8_t x110 = INT8_MIN;
int64_t x122 = INT64_MIN;
static int64_t x123 = 8708215588032LL;
int32_t x126 = -1;
int16_t x134 = INT16_MIN;
uint16_t x136 = 62U;
int16_t x142 = INT16_MIN;
int32_t t26 = -476;
volatile int16_t x149 = INT16_MAX;
int64_t x157 = 11476161LL;
uint32_t x166 = UINT32_MAX;
int32_t t32 = 460;
volatile int8_t x186 = -1;
int32_t t35 = 14;
static int16_t x194 = INT16_MIN;
int32_t t38 = -339527346;
uint32_t x206 = 23541U;
int8_t x211 = 1;
int64_t x217 = INT64_MAX;
int8_t x231 = -6;
static uint8_t x232 = UINT8_MAX;
static uint64_t x239 = UINT64_MAX;
int16_t x244 = -1;
int32_t t46 = -1;
static int32_t t48 = 18;
uint16_t x254 = 270U;
static int16_t x255 = INT16_MIN;
int32_t t50 = -620;
int8_t x261 = -1;
uint8_t x268 = 1U;
static uint16_t x269 = UINT16_MAX;
int16_t x273 = INT16_MIN;
uint16_t x275 = 2820U;
volatile int32_t t54 = 188562;
int32_t t55 = -6978739;
int16_t x286 = -1647;
uint16_t x287 = 1U;
volatile int16_t x291 = INT16_MIN;
static int8_t x303 = INT8_MIN;
int8_t x304 = -1;
static uint16_t x315 = UINT16_MAX;
static uint16_t x323 = 469U;
volatile uint64_t x328 = 9225680299900400LLU;
int32_t t66 = 1481377;
static volatile uint8_t x337 = UINT8_MAX;
int8_t x338 = -1;
volatile uint64_t x340 = 419649140700160710LLU;
uint16_t x348 = 20U;
int32_t t68 = -60;
static int16_t x358 = -1;
int32_t x360 = 2121;
volatile int8_t x382 = -1;
volatile int32_t x398 = INT32_MIN;
static int8_t x399 = 13;
uint8_t x403 = 4U;
static int64_t x408 = -1LL;
int64_t x415 = -6686290796LL;
int8_t x420 = -1;
static uint32_t x432 = UINT32_MAX;
uint32_t x436 = 2138U;
volatile int64_t x438 = -1LL;
static int8_t x441 = INT8_MIN;
static volatile int32_t t83 = 759;
uint16_t x454 = 22U;
uint64_t x458 = 20130LLU;
int32_t t86 = 53;
int8_t x461 = INT8_MAX;
int64_t x467 = -1LL;
static int8_t x473 = -1;
int8_t x475 = -1;
int16_t x476 = INT16_MIN;
volatile int32_t x478 = -1;
volatile int32_t t92 = -802028156;
static int32_t x501 = -1206879;
volatile uint16_t x511 = UINT16_MAX;
int32_t t97 = 7741;
int32_t t98 = 3809822;


void f0(void) {
	static uint64_t x1 = 173258092528395LLU;
	int8_t x3 = 30;
	int64_t x4 = -84692613LL;

	t0 = ((x1==x2)<(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	uint32_t x7 = UINT32_MAX;
	volatile int64_t x8 = -342660LL;
	volatile int32_t t1 = 7968942;

	t1 = ((x5==x6)<(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x17 = UINT32_MAX;
	uint32_t x18 = 7421U;
	int8_t x19 = INT8_MIN;
	volatile uint64_t x20 = 1006167690650709133LLU;
	volatile int32_t t2 = -219255234;

	t2 = ((x17==x18)<(x19*x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MIN;
	int32_t x23 = 1;

	t3 = ((x21==x22)<(x23*x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = UINT8_MAX;
	int16_t x30 = INT16_MIN;
	uint16_t x31 = UINT16_MAX;
	volatile int16_t x32 = -16;

	t4 = ((x29==x30)<(x31*x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = -1;
	volatile uint32_t x34 = 13408322U;
	int16_t x36 = -1;
	int32_t t5 = 12;

	t5 = ((x33==x34)<(x35*x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = INT64_MIN;
	int16_t x39 = -1;
	int16_t x40 = INT16_MIN;
	static volatile int32_t t6 = -5351;

	t6 = ((x37==x38)<(x39*x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x43 = -217;
	int32_t t7 = 16;

	t7 = ((x41==x42)<(x43*x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x45 = INT64_MAX;
	int8_t x46 = -1;
	uint8_t x47 = UINT8_MAX;
	static volatile uint32_t x48 = 39U;

	t8 = ((x45==x46)<(x47*x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x50 = -1;
	int16_t x51 = -1;
	volatile uint32_t x52 = 867803U;
	static int32_t t9 = 301;

	t9 = ((x49==x50)<(x51*x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 133075634U;
	volatile uint8_t x55 = 17U;

	t10 = ((x53==x54)<(x55*x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x57 = 42U;
	int32_t x58 = INT32_MIN;
	int16_t x59 = -3197;
	volatile int32_t t11 = 45544;

	t11 = ((x57==x58)<(x59*x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	static int32_t x62 = INT32_MAX;
	volatile int32_t t12 = -40;

	t12 = ((x61==x62)<(x63*x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = -1;
	uint16_t x67 = UINT16_MAX;
	int64_t x68 = 0LL;
	int32_t t13 = -11989157;

	t13 = ((x65==x66)<(x67*x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MIN;
	uint64_t x70 = 215431157159602385LLU;
	int16_t x71 = INT16_MIN;
	uint8_t x72 = 0U;
	int32_t t14 = 0;

	t14 = ((x69==x70)<(x71*x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x73 = UINT32_MAX;
	static int16_t x74 = 198;
	int8_t x75 = INT8_MIN;
	static int8_t x76 = 1;
	int32_t t15 = -39;

	t15 = ((x73==x74)<(x75*x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x79 = 3;
	volatile int8_t x80 = -1;
	static volatile int32_t t16 = 43667;

	t16 = ((x77==x78)<(x79*x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = UINT64_MAX;
	uint16_t x86 = 7U;
	int16_t x87 = -1;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t17 = 14;

	t17 = ((x85==x86)<(x87*x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x89 = 52U;
	static int8_t x90 = -1;
	static volatile int8_t x91 = -1;
	static uint8_t x92 = 1U;
	int32_t t18 = -48549;

	t18 = ((x89==x90)<(x91*x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = -1;
	static volatile int16_t x94 = -8;
	uint32_t x95 = 207742U;
	int16_t x96 = INT16_MIN;

	t19 = ((x93==x94)<(x95*x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MAX;
	int16_t x98 = INT16_MAX;
	int8_t x100 = INT8_MAX;
	static int32_t t20 = -7054175;

	t20 = ((x97==x98)<(x99*x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x101 = INT64_MIN;
	static int32_t x103 = 82;
	volatile int32_t t21 = 2657847;

	t21 = ((x101==x102)<(x103*x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -1;
	int8_t x111 = INT8_MIN;
	int32_t x112 = 99;
	static volatile int32_t t22 = -2;

	t22 = ((x109==x110)<(x111*x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 37LLU;
	uint8_t x124 = 40U;
	volatile int32_t t23 = -17;

	t23 = ((x121==x122)<(x123*x124));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x125 = 60U;
	int8_t x127 = -4;
	uint64_t x128 = 180168794067840817LLU;
	volatile int32_t t24 = -76379524;

	t24 = ((x125==x126)<(x127*x128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x133 = 42547;
	int64_t x135 = -1LL;
	int32_t t25 = 107;

	t25 = ((x133==x134)<(x135*x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x141 = -15887609;
	static uint8_t x143 = 20U;
	int16_t x144 = INT16_MIN;

	t26 = ((x141==x142)<(x143*x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = INT16_MIN;
	uint32_t x146 = 7596U;
	uint8_t x147 = 14U;
	int64_t x148 = 64115919153440223LL;
	volatile int32_t t27 = 7300;

	t27 = ((x145==x146)<(x147*x148));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x150 = -2;
	static int8_t x151 = 13;
	int64_t x152 = -1LL;
	volatile int32_t t28 = 9690915;

	t28 = ((x149==x150)<(x151*x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = -16084;
	int8_t x155 = INT8_MIN;
	static uint8_t x156 = UINT8_MAX;
	volatile int32_t t29 = 47932152;

	t29 = ((x153==x154)<(x155*x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x158 = 458LLU;
	int8_t x159 = INT8_MAX;
	volatile int16_t x160 = INT16_MIN;
	volatile int32_t t30 = 47322339;

	t30 = ((x157==x158)<(x159*x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = -9;
	int64_t x162 = INT64_MAX;
	uint32_t x163 = 7430U;
	int16_t x164 = INT16_MIN;
	volatile int32_t t31 = 618859;

	t31 = ((x161==x162)<(x163*x164));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x165 = 1102437429121633LL;
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 2305U;

	t32 = ((x165==x166)<(x167*x168));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x173 = -1867LL;
	static uint16_t x174 = UINT16_MAX;
	int16_t x175 = INT16_MIN;
	int64_t x176 = -1LL;
	static int32_t t33 = 662;

	t33 = ((x173==x174)<(x175*x176));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = INT32_MAX;
	uint8_t x178 = 2U;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = INT32_MAX;
	volatile int32_t t34 = -39;

	t34 = ((x177==x178)<(x179*x180));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x185 = 0U;
	int32_t x187 = INT32_MIN;
	int64_t x188 = -1LL;

	t35 = ((x185==x186)<(x187*x188));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x193 = INT64_MIN;
	int32_t x195 = -1;
	static uint8_t x196 = 2U;
	static volatile int32_t t36 = 2994;

	t36 = ((x193==x194)<(x195*x196));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x197 = 1844112LLU;
	volatile int32_t x198 = INT32_MAX;
	int32_t x199 = -1;
	static uint64_t x200 = 13390640928115LLU;
	volatile int32_t t37 = 25;

	t37 = ((x197==x198)<(x199*x200));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	int32_t x202 = INT32_MIN;
	int16_t x203 = INT16_MIN;
	volatile int16_t x204 = INT16_MIN;

	t38 = ((x201==x202)<(x203*x204));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x205 = 77969;
	static int64_t x207 = INT64_MIN;
	uint8_t x208 = 0U;
	int32_t t39 = 521173;

	t39 = ((x205==x206)<(x207*x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x209 = 7;
	static int64_t x210 = INT64_MIN;
	volatile int32_t x212 = 1;
	int32_t t40 = -183;

	t40 = ((x209==x210)<(x211*x212));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x213 = -1;
	volatile int64_t x214 = INT64_MAX;
	static volatile int8_t x215 = -9;
	int64_t x216 = -110767LL;
	int32_t t41 = -31864924;

	t41 = ((x213==x214)<(x215*x216));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x218 = UINT32_MAX;
	uint16_t x219 = 1U;
	int32_t x220 = -1;
	static volatile int32_t t42 = 110866;

	t42 = ((x217==x218)<(x219*x220));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = INT16_MAX;
	uint8_t x226 = 28U;
	uint8_t x227 = UINT8_MAX;
	uint64_t x228 = 602542931LLU;
	int32_t t43 = -53;

	t43 = ((x225==x226)<(x227*x228));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x229 = INT16_MIN;
	static volatile uint16_t x230 = 0U;
	volatile int32_t t44 = 4;

	t44 = ((x229==x230)<(x231*x232));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x237 = 5U;
	int16_t x238 = INT16_MIN;
	volatile uint16_t x240 = 3U;
	int32_t t45 = -6208129;

	t45 = ((x237==x238)<(x239*x240));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x241 = INT64_MIN;
	int8_t x242 = -1;
	int16_t x243 = INT16_MIN;

	t46 = ((x241==x242)<(x243*x244));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x245 = 2400U;
	volatile int8_t x246 = -25;
	volatile int8_t x247 = -1;
	static int16_t x248 = INT16_MIN;
	static volatile int32_t t47 = -195293045;

	t47 = ((x245==x246)<(x247*x248));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x249 = INT64_MAX;
	int8_t x250 = INT8_MAX;
	volatile int64_t x251 = -4358561791349150LL;
	static int64_t x252 = -1LL;

	t48 = ((x249==x250)<(x251*x252));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x253 = 7U;
	static volatile int8_t x256 = -1;
	volatile int32_t t49 = -23667113;

	t49 = ((x253==x254)<(x255*x256));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x257 = -1;
	int16_t x258 = -1;
	static int16_t x259 = INT16_MAX;
	uint64_t x260 = UINT64_MAX;

	t50 = ((x257==x258)<(x259*x260));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x262 = UINT32_MAX;
	int8_t x263 = INT8_MAX;
	int8_t x264 = -1;
	volatile int32_t t51 = 494216;

	t51 = ((x261==x262)<(x263*x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x265 = 10327U;
	uint8_t x266 = UINT8_MAX;
	uint64_t x267 = UINT64_MAX;
	static volatile int32_t t52 = -3;

	t52 = ((x265==x266)<(x267*x268));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x270 = INT16_MIN;
	static uint32_t x271 = 1221U;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t53 = -525344714;

	t53 = ((x269==x270)<(x271*x272));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x274 = INT32_MIN;
	uint32_t x276 = UINT32_MAX;

	t54 = ((x273==x274)<(x275*x276));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x277 = -2434811LL;
	int16_t x278 = -1;
	static uint16_t x279 = 42U;
	volatile uint8_t x280 = 68U;

	t55 = ((x277==x278)<(x279*x280));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x285 = -1;
	volatile int32_t x288 = -1;
	int32_t t56 = 1;

	t56 = ((x285==x286)<(x287*x288));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x289 = INT8_MIN;
	volatile uint16_t x290 = 3770U;
	int8_t x292 = -1;
	volatile int32_t t57 = -3048;

	t57 = ((x289==x290)<(x291*x292));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x293 = 1LL;
	static int64_t x294 = INT64_MIN;
	int16_t x295 = INT16_MIN;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t58 = -55;

	t58 = ((x293==x294)<(x295*x296));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x301 = UINT8_MAX;
	uint16_t x302 = 4235U;
	volatile int32_t t59 = -18253140;

	t59 = ((x301==x302)<(x303*x304));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x305 = -2;
	uint8_t x306 = UINT8_MAX;
	static uint8_t x307 = 11U;
	static uint16_t x308 = UINT16_MAX;
	int32_t t60 = -440;

	t60 = ((x305==x306)<(x307*x308));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x309 = INT64_MAX;
	uint8_t x310 = 21U;
	int8_t x311 = 1;
	int64_t x312 = INT64_MIN;
	int32_t t61 = 21801466;

	t61 = ((x309==x310)<(x311*x312));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x313 = INT64_MAX;
	static volatile int8_t x314 = INT8_MIN;
	int8_t x316 = 10;
	static volatile int32_t t62 = 684615545;

	t62 = ((x313==x314)<(x315*x316));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x321 = 54U;
	volatile uint8_t x322 = 13U;
	int16_t x324 = INT16_MIN;
	volatile int32_t t63 = 525124722;

	t63 = ((x321==x322)<(x323*x324));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x325 = 180LLU;
	uint32_t x326 = 0U;
	int32_t x327 = INT32_MIN;
	int32_t t64 = -21130712;

	t64 = ((x325==x326)<(x327*x328));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x329 = 3557187270670591418LLU;
	uint8_t x330 = 124U;
	static uint16_t x331 = UINT16_MAX;
	int32_t x332 = -1;
	int32_t t65 = -96288296;

	t65 = ((x329==x330)<(x331*x332));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x333 = -1;
	volatile int16_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = -1LL;

	t66 = ((x333==x334)<(x335*x336));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x339 = -1;
	int32_t t67 = 15;

	t67 = ((x337==x338)<(x339*x340));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x345 = 20406214931LLU;
	int32_t x346 = INT32_MIN;
	int8_t x347 = 1;

	t68 = ((x345==x346)<(x347*x348));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x353 = 9;
	volatile int64_t x354 = INT64_MIN;
	volatile int8_t x355 = INT8_MIN;
	volatile int32_t x356 = -1;
	volatile int32_t t69 = 4;

	t69 = ((x353==x354)<(x355*x356));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x357 = INT16_MIN;
	int16_t x359 = -3244;
	int32_t t70 = 7;

	t70 = ((x357==x358)<(x359*x360));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x361 = -646;
	int32_t x362 = INT32_MAX;
	static uint8_t x363 = 23U;
	static uint8_t x364 = 8U;
	volatile int32_t t71 = -9795390;

	t71 = ((x361==x362)<(x363*x364));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x381 = 9U;
	uint64_t x383 = 203358LLU;
	static int8_t x384 = INT8_MAX;
	static volatile int32_t t72 = -96700516;

	t72 = ((x381==x382)<(x383*x384));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x389 = -1386;
	static int64_t x390 = 13LL;
	volatile uint64_t x391 = 2229571503093673LLU;
	static int64_t x392 = -388592440062681567LL;
	volatile int32_t t73 = 50911;

	t73 = ((x389==x390)<(x391*x392));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x397 = UINT16_MAX;
	volatile int16_t x400 = 9;
	volatile int32_t t74 = 881;

	t74 = ((x397==x398)<(x399*x400));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x401 = 75837368161040818LL;
	static int8_t x402 = INT8_MAX;
	int8_t x404 = 11;
	volatile int32_t t75 = 4;

	t75 = ((x401==x402)<(x403*x404));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x405 = INT64_MIN;
	static int64_t x406 = -1LL;
	volatile int8_t x407 = -1;
	volatile int32_t t76 = 1696;

	t76 = ((x405==x406)<(x407*x408));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x413 = -1;
	static int8_t x414 = INT8_MAX;
	int8_t x416 = INT8_MAX;
	int32_t t77 = 1818;

	t77 = ((x413==x414)<(x415*x416));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x417 = INT8_MAX;
	int16_t x418 = INT16_MAX;
	uint32_t x419 = 4U;
	static volatile int32_t t78 = -1853405;

	t78 = ((x417==x418)<(x419*x420));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x429 = 15LLU;
	static int64_t x430 = 45LL;
	int32_t x431 = INT32_MIN;
	volatile int32_t t79 = 80825;

	t79 = ((x429==x430)<(x431*x432));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x433 = 215U;
	static int32_t x434 = -35;
	int16_t x435 = INT16_MIN;
	int32_t t80 = -25464852;

	t80 = ((x433==x434)<(x435*x436));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x437 = UINT8_MAX;
	int16_t x439 = INT16_MIN;
	volatile int16_t x440 = INT16_MIN;
	volatile int32_t t81 = -1;

	t81 = ((x437==x438)<(x439*x440));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x442 = -5;
	volatile uint64_t x443 = 8165630114LLU;
	static volatile uint16_t x444 = 3239U;
	static volatile int32_t t82 = -208;

	t82 = ((x441==x442)<(x443*x444));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x445 = INT16_MIN;
	volatile int16_t x446 = -2596;
	uint8_t x447 = 12U;
	int64_t x448 = -13LL;

	t83 = ((x445==x446)<(x447*x448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x449 = 212102363587724407LLU;
	volatile uint32_t x450 = 117772U;
	static uint16_t x451 = 1968U;
	volatile int16_t x452 = 14150;
	volatile int32_t t84 = 3;

	t84 = ((x449==x450)<(x451*x452));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x453 = -1979113975721992LL;
	int32_t x455 = -1;
	int64_t x456 = -1LL;
	volatile int32_t t85 = -217;

	t85 = ((x453==x454)<(x455*x456));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x457 = 6193LLU;
	uint16_t x459 = UINT16_MAX;
	int64_t x460 = -281100LL;

	t86 = ((x457==x458)<(x459*x460));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x462 = INT16_MAX;
	int32_t x463 = 8515;
	uint16_t x464 = 370U;
	volatile int32_t t87 = 13631807;

	t87 = ((x461==x462)<(x463*x464));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x465 = -1;
	int32_t x466 = -1103999;
	int8_t x468 = INT8_MIN;
	volatile int32_t t88 = 73640438;

	t88 = ((x465==x466)<(x467*x468));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x474 = -1LL;
	volatile int32_t t89 = 4062;

	t89 = ((x473==x474)<(x475*x476));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x477 = UINT16_MAX;
	uint32_t x479 = 98U;
	uint64_t x480 = 95207708537546921LLU;
	int32_t t90 = -104;

	t90 = ((x477==x478)<(x479*x480));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x481 = INT8_MIN;
	int16_t x482 = INT16_MAX;
	uint16_t x483 = 262U;
	static int8_t x484 = INT8_MIN;
	int32_t t91 = 15155;

	t91 = ((x481==x482)<(x483*x484));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x493 = -214;
	volatile int8_t x494 = INT8_MIN;
	static volatile uint16_t x495 = 67U;
	static volatile uint64_t x496 = UINT64_MAX;

	t92 = ((x493==x494)<(x495*x496));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x497 = INT64_MAX;
	int32_t x498 = INT32_MIN;
	int16_t x499 = -1;
	static uint8_t x500 = 38U;
	volatile int32_t t93 = -1;

	t93 = ((x497==x498)<(x499*x500));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x502 = 8089U;
	static uint32_t x503 = UINT32_MAX;
	uint64_t x504 = 10858110LLU;
	int32_t t94 = 15610550;

	t94 = ((x501==x502)<(x503*x504));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x505 = 0U;
	uint32_t x506 = 1325U;
	int64_t x507 = -1LL;
	volatile int8_t x508 = -1;
	volatile int32_t t95 = -10862;

	t95 = ((x505==x506)<(x507*x508));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x509 = INT16_MAX;
	uint8_t x510 = UINT8_MAX;
	volatile uint8_t x512 = UINT8_MAX;
	volatile int32_t t96 = 1;

	t96 = ((x509==x510)<(x511*x512));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x513 = 88197LL;
	int8_t x514 = -1;
	static uint32_t x515 = UINT32_MAX;
	int32_t x516 = INT32_MIN;

	t97 = ((x513==x514)<(x515*x516));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x517 = INT64_MAX;
	volatile int16_t x518 = INT16_MIN;
	static uint64_t x519 = 20021LLU;
	int64_t x520 = INT64_MIN;

	t98 = ((x517==x518)<(x519*x520));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x521 = -1;
	int8_t x522 = -1;
	int16_t x523 = 4031;
	static int8_t x524 = -51;
	int32_t t99 = -2504483;

	t99 = ((x521==x522)<(x523*x524));

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

