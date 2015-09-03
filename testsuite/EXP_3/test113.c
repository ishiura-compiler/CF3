#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 14592;
volatile uint32_t x6 = 0U;
int16_t x10 = -13276;
static int16_t x13 = INT16_MAX;
static int8_t x20 = INT8_MAX;
static int8_t x24 = -1;
int32_t x25 = INT32_MAX;
uint32_t x32 = 288684U;
int32_t t7 = 316773;
volatile int32_t t8 = -249778730;
uint8_t x39 = 7U;
static int32_t t12 = -57;
int8_t x54 = -1;
int16_t x63 = INT16_MIN;
uint64_t x64 = 237684542LLU;
int32_t t15 = -41;
int16_t x67 = -12;
uint16_t x68 = 2U;
int64_t x70 = -1LL;
int16_t x73 = INT16_MIN;
volatile uint32_t x75 = 23217U;
int32_t t19 = -10;
int8_t x81 = INT8_MIN;
volatile uint16_t x82 = 208U;
uint32_t x85 = 1472940U;
int32_t t23 = -94311;
uint16_t x97 = 94U;
volatile int8_t x99 = INT8_MAX;
int8_t x100 = INT8_MAX;
static int32_t t24 = -61624858;
uint64_t x102 = UINT64_MAX;
volatile int32_t t27 = -287917;
int32_t x120 = -992183;
static int64_t x125 = INT64_MAX;
static uint8_t x128 = 55U;
uint8_t x132 = UINT8_MAX;
static int32_t t31 = -71037;
int16_t x135 = INT16_MIN;
volatile uint16_t x136 = 1U;
int8_t x138 = INT8_MIN;
static volatile int32_t t33 = -58274193;
int32_t x147 = -938;
volatile int32_t t36 = 27936;
static uint32_t x161 = UINT32_MAX;
volatile int32_t t39 = 25638;
static uint8_t x171 = 1U;
uint32_t x177 = 30358303U;
uint32_t x180 = 99225164U;
volatile int32_t t44 = 24170588;
uint32_t x189 = 8185U;
uint16_t x192 = 1U;
static volatile int32_t t46 = -236;
int32_t x194 = -261490002;
uint8_t x196 = 1U;
int32_t x199 = 4163;
volatile uint64_t x208 = UINT64_MAX;
int8_t x213 = -1;
int8_t x215 = INT8_MIN;
volatile int32_t x219 = INT32_MIN;
int64_t x225 = INT64_MAX;
uint8_t x227 = 1U;
int32_t t54 = -955027;
volatile int32_t t55 = 778239;
int32_t x237 = 429;
uint16_t x242 = 25271U;
int64_t x248 = -54330442LL;
int32_t t59 = -3;
volatile int64_t x252 = -1LL;
volatile int16_t x254 = 27;
int8_t x263 = 0;
uint64_t x264 = 31169140231121LLU;
static int64_t x265 = INT64_MAX;
int16_t x267 = INT16_MAX;
static uint32_t x273 = UINT32_MAX;
int8_t x274 = INT8_MIN;
int16_t x275 = -6204;
int8_t x280 = 25;
int16_t x293 = 15919;
int16_t x294 = 0;
int32_t t69 = -224;
uint8_t x301 = 14U;
int8_t x302 = -1;
int8_t x305 = -1;
volatile uint32_t x309 = 116613U;
static volatile int32_t t72 = 142157583;
int32_t x313 = INT32_MIN;
int32_t x316 = -16630993;
volatile uint64_t x319 = 3995LLU;
uint32_t x320 = 97671U;
volatile int64_t x322 = INT64_MIN;
int8_t x325 = -1;
volatile int32_t t76 = -577215;
int16_t x329 = -4;
uint64_t x335 = 369374427398984LLU;
volatile int32_t t78 = -198052;
uint16_t x337 = 18837U;
static uint64_t x343 = 3096399305LLU;
uint16_t x346 = 1U;
volatile int32_t t81 = -50;
volatile uint16_t x350 = UINT16_MAX;
uint64_t x352 = 1492227140331509603LLU;
static volatile int32_t t82 = 6836;
static int16_t x355 = -1;
int64_t x360 = -1LL;
static int8_t x363 = INT8_MIN;
uint32_t x371 = 232U;
uint8_t x380 = 125U;
volatile int32_t x381 = -16196;
int16_t x383 = -1;
uint16_t x385 = 3358U;
volatile uint16_t x386 = 188U;
static volatile uint8_t x387 = UINT8_MAX;
volatile int32_t t90 = -707327495;
uint32_t x395 = 63U;
uint32_t x396 = 1799793298U;
int64_t x397 = INT64_MIN;
volatile int8_t x400 = INT8_MIN;
volatile uint8_t x401 = UINT8_MAX;
volatile uint8_t x402 = 12U;
int64_t x408 = -1383164726537908LL;
volatile int8_t x412 = INT8_MIN;
int32_t t97 = 10;
static uint8_t x426 = 90U;


void f0(void) {
	static uint8_t x1 = 3U;
	uint64_t x2 = 2200LLU;
	static uint32_t x3 = 3960U;
	static volatile uint8_t x4 = 42U;

	t0 = ((x1<x2)<(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	uint8_t x7 = 5U;
	uint16_t x8 = UINT16_MAX;
	static int32_t t1 = 304;

	t1 = ((x5<x6)<(x7+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int8_t x11 = INT8_MIN;
	int8_t x12 = 0;
	volatile int32_t t2 = 116;

	t2 = ((x9<x10)<(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x14 = UINT16_MAX;
	uint16_t x15 = UINT16_MAX;
	int16_t x16 = INT16_MAX;
	int32_t t3 = 17315811;

	t3 = ((x13<x14)<(x15+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	volatile int64_t x18 = 29335LL;
	int8_t x19 = INT8_MAX;
	int32_t t4 = -76;

	t4 = ((x17<x18)<(x19+x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	static int16_t x22 = INT16_MAX;
	volatile int16_t x23 = INT16_MAX;
	volatile int32_t t5 = 1947;

	t5 = ((x21<x22)<(x23+x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = UINT8_MAX;
	int16_t x27 = INT16_MAX;
	int32_t x28 = 39015;
	static volatile int32_t t6 = 428946;

	t6 = ((x25<x26)<(x27+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	volatile int16_t x30 = INT16_MIN;
	volatile int8_t x31 = INT8_MAX;

	t7 = ((x29<x30)<(x31+x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 3223;
	int16_t x34 = INT16_MIN;
	volatile int16_t x35 = INT16_MAX;
	int16_t x36 = 1;

	t8 = ((x33<x34)<(x35+x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile uint16_t x38 = 1330U;
	uint64_t x40 = UINT64_MAX;
	int32_t t9 = -1;

	t9 = ((x37<x38)<(x39+x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	volatile int32_t x42 = -1;
	static volatile uint8_t x43 = UINT8_MAX;
	int8_t x44 = -3;
	int32_t t10 = -2;

	t10 = ((x41<x42)<(x43+x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	uint32_t x46 = 4424U;
	uint8_t x47 = UINT8_MAX;
	int16_t x48 = 13088;
	volatile int32_t t11 = 6;

	t11 = ((x45<x46)<(x47+x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 55545U;
	static int16_t x50 = -1;
	uint32_t x51 = 1001196448U;
	static uint64_t x52 = UINT64_MAX;

	t12 = ((x49<x50)<(x51+x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int64_t x55 = INT64_MIN;
	static int16_t x56 = INT16_MAX;
	static volatile int32_t t13 = 3491;

	t13 = ((x53<x54)<(x55+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	int16_t x58 = 310;
	int64_t x59 = -3404LL;
	int32_t x60 = -1;
	static volatile int32_t t14 = 167094831;

	t14 = ((x57<x58)<(x59+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int8_t x62 = 4;

	t15 = ((x61<x62)<(x63+x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 9;
	int64_t x66 = -32712359771LL;
	static volatile int32_t t16 = -1484715;

	t16 = ((x65<x66)<(x67+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 1U;
	int8_t x71 = INT8_MIN;
	volatile uint64_t x72 = UINT64_MAX;
	int32_t t17 = 1;

	t17 = ((x69<x70)<(x71+x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = INT16_MAX;
	int32_t x76 = -1;
	int32_t t18 = -293;

	t18 = ((x73<x74)<(x75+x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -127;
	uint32_t x78 = 255554118U;
	int8_t x79 = 0;
	int16_t x80 = INT16_MAX;

	t19 = ((x77<x78)<(x79+x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x83 = 1U;
	int8_t x84 = 1;
	int32_t t20 = 29079;

	t20 = ((x81<x82)<(x83+x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = INT8_MAX;
	int32_t x87 = -15093;
	volatile int8_t x88 = -31;
	static int32_t t21 = -25345376;

	t21 = ((x85<x86)<(x87+x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	volatile uint32_t x90 = 6273U;
	uint8_t x91 = 35U;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = -4923;

	t22 = ((x89<x90)<(x91+x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	uint16_t x94 = 71U;
	uint8_t x95 = 45U;
	int16_t x96 = -1;

	t23 = ((x93<x94)<(x95+x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = UINT8_MAX;

	t24 = ((x97<x98)<(x99+x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static int16_t x103 = INT16_MAX;
	static int64_t x104 = -287780587340601767LL;
	volatile int32_t t25 = -3350;

	t25 = ((x101<x102)<(x103+x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MAX;
	static uint32_t x111 = 298U;
	int16_t x112 = -3192;
	int32_t t26 = -47805;

	t26 = ((x109<x110)<(x111+x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MAX;
	static uint16_t x114 = UINT16_MAX;
	static volatile uint32_t x115 = 99470343U;
	volatile int64_t x116 = 29LL;

	t27 = ((x113<x114)<(x115+x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	static int32_t x118 = 1;
	uint32_t x119 = UINT32_MAX;
	volatile int32_t t28 = 16;

	t28 = ((x117<x118)<(x119+x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	static int8_t x122 = INT8_MIN;
	uint8_t x123 = 15U;
	int16_t x124 = INT16_MIN;
	int32_t t29 = -1;

	t29 = ((x121<x122)<(x123+x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x126 = 212872326065547LL;
	uint32_t x127 = 13101U;
	volatile int32_t t30 = -6992;

	t30 = ((x125<x126)<(x127+x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 2662550LLU;
	int16_t x130 = INT16_MIN;
	static int16_t x131 = INT16_MIN;

	t31 = ((x129<x130)<(x131+x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -1;
	int32_t x134 = INT32_MAX;
	static int32_t t32 = 1099;

	t32 = ((x133<x134)<(x135+x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	uint64_t x140 = UINT64_MAX;

	t33 = ((x137<x138)<(x139+x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MAX;
	int32_t x143 = -1;
	int32_t x144 = -1;
	int32_t t34 = 1;

	t34 = ((x141<x142)<(x143+x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	static int32_t x146 = -114;
	volatile int64_t x148 = 69168LL;
	int32_t t35 = -60;

	t35 = ((x145<x146)<(x147+x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MIN;
	uint64_t x151 = 1195LLU;
	static int64_t x152 = INT64_MAX;

	t36 = ((x149<x150)<(x151+x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x153 = INT64_MAX;
	int32_t x154 = INT32_MAX;
	static uint8_t x155 = 62U;
	uint32_t x156 = 1103186U;
	int32_t t37 = -170928475;

	t37 = ((x153<x154)<(x155+x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -1LL;
	int8_t x158 = -1;
	uint8_t x159 = 98U;
	uint32_t x160 = 2659147U;
	static volatile int32_t t38 = -912;

	t38 = ((x157<x158)<(x159+x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x162 = INT8_MIN;
	uint32_t x163 = UINT32_MAX;
	volatile int64_t x164 = -50989341721LL;

	t39 = ((x161<x162)<(x163+x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -1LL;
	static int32_t x166 = INT32_MAX;
	uint64_t x167 = UINT64_MAX;
	volatile int8_t x168 = INT8_MAX;
	volatile int32_t t40 = -758904;

	t40 = ((x165<x166)<(x167+x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 103U;
	static int16_t x170 = INT16_MAX;
	int64_t x172 = -3933805LL;
	volatile int32_t t41 = 214329;

	t41 = ((x169<x170)<(x171+x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x173 = 642U;
	int32_t x174 = 33035;
	int32_t x175 = 3317398;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t42 = -2002;

	t42 = ((x173<x174)<(x175+x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x178 = INT8_MIN;
	uint8_t x179 = 10U;
	static int32_t t43 = 75455764;

	t43 = ((x177<x178)<(x179+x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = UINT16_MAX;
	volatile uint32_t x182 = 112363U;
	int32_t x183 = -1;
	int32_t x184 = -1;

	t44 = ((x181<x182)<(x183+x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -1729LL;
	static uint16_t x186 = UINT16_MAX;
	static uint16_t x187 = UINT16_MAX;
	uint64_t x188 = 5890998498419842649LLU;
	volatile int32_t t45 = 387;

	t45 = ((x185<x186)<(x187+x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x190 = INT64_MAX;
	int8_t x191 = INT8_MIN;

	t46 = ((x189<x190)<(x191+x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x193 = UINT8_MAX;
	uint32_t x195 = UINT32_MAX;
	int32_t t47 = 31;

	t47 = ((x193<x194)<(x195+x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MAX;
	int32_t x198 = INT32_MIN;
	volatile uint16_t x200 = 4089U;
	volatile int32_t t48 = -1777;

	t48 = ((x197<x198)<(x199+x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -333909097556LL;
	uint32_t x202 = UINT32_MAX;
	int8_t x203 = INT8_MIN;
	int8_t x204 = 37;
	volatile int32_t t49 = 164359;

	t49 = ((x201<x202)<(x203+x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x205 = -294448092008LL;
	int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MAX;
	int32_t t50 = -102665;

	t50 = ((x205<x206)<(x207+x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = -1;
	int16_t x210 = 2352;
	int16_t x211 = INT16_MAX;
	uint16_t x212 = 543U;
	static int32_t t51 = 21448;

	t51 = ((x209<x210)<(x211+x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x214 = UINT8_MAX;
	volatile int16_t x216 = 754;
	static int32_t t52 = -1;

	t52 = ((x213<x214)<(x215+x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = -42478189LL;
	int64_t x220 = -137540570386979LL;
	volatile int32_t t53 = 1046942;

	t53 = ((x217<x218)<(x219+x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x226 = 0;
	uint8_t x228 = 2U;

	t54 = ((x225<x226)<(x227+x228));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = UINT32_MAX;
	static volatile uint8_t x230 = UINT8_MAX;
	uint64_t x231 = UINT64_MAX;
	uint16_t x232 = 27U;

	t55 = ((x229<x230)<(x231+x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MIN;
	volatile uint64_t x234 = UINT64_MAX;
	int32_t x235 = INT32_MIN;
	static int64_t x236 = INT64_MAX;
	static volatile int32_t t56 = 2314;

	t56 = ((x233<x234)<(x235+x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x238 = UINT32_MAX;
	int16_t x239 = INT16_MAX;
	uint64_t x240 = UINT64_MAX;
	static int32_t t57 = -78174671;

	t57 = ((x237<x238)<(x239+x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = 2LLU;
	int8_t x243 = INT8_MAX;
	volatile int64_t x244 = INT64_MIN;
	volatile int32_t t58 = -1;

	t58 = ((x241<x242)<(x243+x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = 10710;
	uint16_t x246 = 153U;
	int32_t x247 = -235942;

	t59 = ((x245<x246)<(x247+x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x249 = INT16_MAX;
	static int16_t x250 = INT16_MIN;
	int8_t x251 = -14;
	volatile int32_t t60 = -142;

	t60 = ((x249<x250)<(x251+x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x253 = INT64_MIN;
	static int64_t x255 = -1LL;
	int64_t x256 = -1LL;
	int32_t t61 = -523601301;

	t61 = ((x253<x254)<(x255+x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x257 = 117LLU;
	int16_t x258 = INT16_MIN;
	volatile int16_t x259 = INT16_MAX;
	int32_t x260 = -182311;
	int32_t t62 = -87278;

	t62 = ((x257<x258)<(x259+x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x261 = INT64_MIN;
	uint32_t x262 = 7517U;
	static volatile int32_t t63 = 15;

	t63 = ((x261<x262)<(x263+x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x266 = INT16_MIN;
	int16_t x268 = -1;
	static int32_t t64 = 8;

	t64 = ((x265<x266)<(x267+x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x276 = 0U;
	int32_t t65 = 10214;

	t65 = ((x273<x274)<(x275+x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x277 = INT64_MIN;
	int8_t x278 = -15;
	static int64_t x279 = -8533610LL;
	int32_t t66 = -181769104;

	t66 = ((x277<x278)<(x279+x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	int16_t x286 = INT16_MAX;
	uint8_t x287 = UINT8_MAX;
	int16_t x288 = INT16_MIN;
	volatile int32_t t67 = -111980222;

	t67 = ((x285<x286)<(x287+x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x295 = INT16_MIN;
	static uint32_t x296 = UINT32_MAX;
	volatile int32_t t68 = 31;

	t68 = ((x293<x294)<(x295+x296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x297 = 2011426945U;
	static int16_t x298 = -40;
	static uint16_t x299 = UINT16_MAX;
	uint8_t x300 = 0U;

	t69 = ((x297<x298)<(x299+x300));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x303 = 28U;
	volatile uint8_t x304 = UINT8_MAX;
	int32_t t70 = -11;

	t70 = ((x301<x302)<(x303+x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x306 = INT16_MIN;
	int16_t x307 = 8178;
	uint16_t x308 = 14917U;
	static int32_t t71 = -10373;

	t71 = ((x305<x306)<(x307+x308));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x310 = INT32_MIN;
	int64_t x311 = 4245601976LL;
	static volatile uint64_t x312 = UINT64_MAX;

	t72 = ((x309<x310)<(x311+x312));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x314 = 1241327152U;
	volatile uint32_t x315 = 468857U;
	static volatile int32_t t73 = 17315;

	t73 = ((x313<x314)<(x315+x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x317 = 4U;
	static volatile int16_t x318 = 42;
	int32_t t74 = -1170819;

	t74 = ((x317<x318)<(x319+x320));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = -1;
	int16_t x323 = -11065;
	uint16_t x324 = UINT16_MAX;
	int32_t t75 = -27952;

	t75 = ((x321<x322)<(x323+x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x326 = UINT32_MAX;
	volatile uint64_t x327 = 2107797861931LLU;
	int8_t x328 = INT8_MIN;

	t76 = ((x325<x326)<(x327+x328));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x330 = 23;
	int16_t x331 = -1;
	int16_t x332 = 6;
	int32_t t77 = 57933;

	t77 = ((x329<x330)<(x331+x332));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x333 = 116U;
	uint64_t x334 = 419740LLU;
	uint32_t x336 = UINT32_MAX;

	t78 = ((x333<x334)<(x335+x336));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x338 = 2U;
	int16_t x339 = 23;
	uint16_t x340 = 6277U;
	int32_t t79 = 789498821;

	t79 = ((x337<x338)<(x339+x340));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = -180;
	int16_t x342 = 3;
	int8_t x344 = INT8_MIN;
	int32_t t80 = 5523;

	t80 = ((x341<x342)<(x343+x344));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x345 = 19U;
	int64_t x347 = -1LL;
	int16_t x348 = INT16_MIN;

	t81 = ((x345<x346)<(x347+x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x349 = 560624U;
	static uint16_t x351 = 25U;

	t82 = ((x349<x350)<(x351+x352));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x353 = -73842LL;
	volatile int64_t x354 = INT64_MIN;
	int32_t x356 = INT32_MAX;
	volatile int32_t t83 = -4069800;

	t83 = ((x353<x354)<(x355+x356));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x357 = -1LL;
	uint32_t x358 = 10U;
	static int64_t x359 = 226818549LL;
	static volatile int32_t t84 = -86213866;

	t84 = ((x357<x358)<(x359+x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = 16U;
	static int64_t x362 = -1LL;
	static int16_t x364 = -1;
	static int32_t t85 = 48422;

	t85 = ((x361<x362)<(x363+x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x369 = INT16_MAX;
	int16_t x370 = INT16_MIN;
	int8_t x372 = INT8_MAX;
	int32_t t86 = 665593;

	t86 = ((x369<x370)<(x371+x372));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x377 = -648587773294LL;
	static int64_t x378 = -1LL;
	static int8_t x379 = INT8_MAX;
	static int32_t t87 = -179;

	t87 = ((x377<x378)<(x379+x380));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x382 = 522598985U;
	volatile uint32_t x384 = UINT32_MAX;
	int32_t t88 = -133;

	t88 = ((x381<x382)<(x383+x384));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x388 = INT8_MIN;
	volatile int32_t t89 = -986105644;

	t89 = ((x385<x386)<(x387+x388));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = INT32_MAX;
	volatile int32_t x390 = INT32_MAX;
	volatile uint8_t x391 = 7U;
	int32_t x392 = -1;

	t90 = ((x389<x390)<(x391+x392));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x393 = INT64_MAX;
	volatile uint16_t x394 = UINT16_MAX;
	int32_t t91 = -32890939;

	t91 = ((x393<x394)<(x395+x396));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x398 = INT16_MAX;
	static uint32_t x399 = 127486U;
	static int32_t t92 = 257103;

	t92 = ((x397<x398)<(x399+x400));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x403 = INT64_MIN;
	uint64_t x404 = 4152208LLU;
	int32_t t93 = -1;

	t93 = ((x401<x402)<(x403+x404));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x405 = INT64_MIN;
	static int32_t x406 = -1240683;
	volatile int32_t x407 = 894;
	static volatile int32_t t94 = -43265;

	t94 = ((x405<x406)<(x407+x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x409 = UINT16_MAX;
	int64_t x410 = INT64_MAX;
	static volatile int64_t x411 = INT64_MAX;
	volatile int32_t t95 = 25;

	t95 = ((x409<x410)<(x411+x412));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x413 = UINT8_MAX;
	volatile int8_t x414 = -1;
	int32_t x415 = -4;
	int32_t x416 = INT32_MAX;
	int32_t t96 = -1;

	t96 = ((x413<x414)<(x415+x416));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x417 = INT32_MIN;
	int16_t x418 = INT16_MAX;
	volatile uint16_t x419 = UINT16_MAX;
	int8_t x420 = INT8_MIN;

	t97 = ((x417<x418)<(x419+x420));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = -1;
	int8_t x422 = INT8_MIN;
	static volatile int8_t x423 = INT8_MIN;
	volatile int64_t x424 = -1LL;
	int32_t t98 = -228188;

	t98 = ((x421<x422)<(x423+x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = INT64_MIN;
	int64_t x427 = INT64_MIN;
	uint16_t x428 = 0U;
	int32_t t99 = 486713;

	t99 = ((x425<x426)<(x427+x428));

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

