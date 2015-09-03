#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = 90267433LL;
int16_t x8 = -1;
uint64_t x11 = 351LLU;
uint32_t x14 = UINT32_MAX;
int8_t x19 = INT8_MIN;
uint16_t x27 = 0U;
uint16_t x28 = UINT16_MAX;
int32_t t10 = 3405;
int32_t t11 = 26826;
int64_t x60 = -1499LL;
int16_t x63 = INT16_MIN;
int64_t x65 = INT64_MIN;
volatile int32_t t15 = 4;
static volatile int64_t x97 = 28LL;
int32_t x98 = -1;
int32_t t21 = -1035100014;
volatile int64_t x113 = -1LL;
static int8_t x118 = -1;
volatile uint32_t x124 = UINT32_MAX;
volatile int32_t t24 = -47789;
int32_t t25 = 163237;
static uint32_t x133 = 336550069U;
static int32_t t27 = 64866;
int8_t x146 = INT8_MIN;
static volatile int32_t t28 = -219681004;
volatile uint32_t x159 = UINT32_MAX;
static int16_t x160 = INT16_MAX;
uint8_t x161 = UINT8_MAX;
static volatile uint16_t x167 = 124U;
static int64_t x169 = INT64_MIN;
int8_t x172 = -1;
uint8_t x192 = UINT8_MAX;
volatile int32_t t35 = 4;
int64_t x200 = 1316LL;
int32_t t37 = 89;
int16_t x203 = -69;
int64_t x211 = 793402686379412LL;
uint32_t x213 = UINT32_MAX;
volatile int64_t x216 = INT64_MIN;
volatile int32_t t40 = 952;
int8_t x217 = INT8_MAX;
uint8_t x219 = UINT8_MAX;
static uint8_t x220 = 53U;
int32_t x227 = -1;
static uint32_t x234 = 39026497U;
volatile int32_t t44 = 485213382;
static int64_t x242 = INT64_MIN;
int64_t x245 = -1LL;
int16_t x273 = 8165;
uint64_t x277 = UINT64_MAX;
volatile int32_t t51 = -44973;
int8_t x281 = INT8_MAX;
static int32_t x290 = INT32_MIN;
int16_t x295 = 84;
static int32_t t54 = 2558;
int16_t x298 = INT16_MAX;
int8_t x309 = -1;
int32_t x311 = -1;
int16_t x313 = INT16_MIN;
uint8_t x316 = 6U;
uint32_t x319 = 1502U;
int8_t x328 = INT8_MIN;
volatile int32_t t60 = -1;
int64_t x336 = 0LL;
static int16_t x345 = -1;
static uint8_t x348 = 92U;
int32_t x349 = -1;
static int64_t x351 = 68724003787412214LL;
uint32_t x365 = 6442874U;
int32_t x366 = INT32_MAX;
static int32_t t68 = 4;
uint16_t x375 = UINT16_MAX;
uint16_t x376 = 227U;
int32_t t72 = 498295;
int16_t x388 = 688;
int32_t t75 = -23928426;
int16_t x406 = -1;
volatile int32_t t76 = -9292847;
volatile uint64_t x409 = 5LLU;
int32_t x410 = INT32_MAX;
int64_t x411 = -1803614342514LL;
uint16_t x415 = 20U;
int16_t x418 = -1;
volatile uint64_t x419 = 19981643938679270LLU;
static int8_t x420 = -6;
static volatile int64_t x423 = -1LL;
uint16_t x424 = 0U;
int32_t t80 = -240536875;
static int16_t x428 = -1;
int16_t x430 = INT16_MAX;
volatile int64_t x431 = -3636600778LL;
int32_t x435 = -1;
uint64_t x436 = 20LLU;
int16_t x441 = INT16_MIN;
uint64_t x442 = UINT64_MAX;
volatile int16_t x447 = INT16_MAX;
int32_t t86 = 366737;
int32_t x453 = INT32_MIN;
int64_t x455 = -1LL;
volatile int64_t x458 = INT64_MAX;
uint8_t x459 = 2U;
int32_t x475 = -1;
volatile uint64_t x476 = UINT64_MAX;
int64_t x477 = -4281440693432144LL;
uint32_t x478 = UINT32_MAX;
volatile uint8_t x495 = UINT8_MAX;
volatile int32_t x498 = -18087;
static uint8_t x510 = 13U;
static uint8_t x512 = 2U;


void f0(void) {
	int32_t x1 = -1;
	volatile int32_t x2 = -106367;
	volatile uint64_t x3 = 5LLU;
	int32_t t0 = 638;

	t0 = ((x1&x2)<(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 30201137LLU;
	int32_t x6 = -1;
	static volatile int64_t x7 = 1LL;
	volatile int32_t t1 = -29640;

	t1 = ((x5&x6)<(x7*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	int64_t x10 = -1LL;
	int64_t x12 = 1036LL;
	static int32_t t2 = -177;

	t2 = ((x9&x10)<(x11*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 3U;
	int64_t x15 = INT64_MAX;
	int8_t x16 = 0;
	int32_t t3 = 723926958;

	t3 = ((x13&x14)<(x15*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static volatile uint64_t x18 = UINT64_MAX;
	static volatile int16_t x20 = -1;
	int32_t t4 = 175;

	t4 = ((x17&x18)<(x19*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	volatile int8_t x22 = -1;
	static int32_t x23 = INT32_MIN;
	static uint32_t x24 = UINT32_MAX;
	static int32_t t5 = -717;

	t5 = ((x21&x22)<(x23*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 2U;
	int8_t x26 = -1;
	volatile int32_t t6 = -217277313;

	t6 = ((x25&x26)<(x27*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = -1;
	uint32_t x39 = 498171769U;
	uint8_t x40 = 5U;
	volatile int32_t t7 = -6469;

	t7 = ((x37&x38)<(x39*x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 113470881434206590LLU;
	static int8_t x43 = INT8_MIN;
	uint32_t x44 = UINT32_MAX;
	static int32_t t8 = -1;

	t8 = ((x41&x42)<(x43*x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = 266907800132609LL;
	volatile int64_t x46 = -1LL;
	int32_t x47 = INT32_MAX;
	static uint8_t x48 = 0U;
	int32_t t9 = 32943;

	t9 = ((x45&x46)<(x47*x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	volatile int16_t x50 = INT16_MIN;
	uint64_t x51 = UINT64_MAX;
	int16_t x52 = INT16_MIN;

	t10 = ((x49&x50)<(x51*x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = INT32_MIN;
	static int8_t x55 = INT8_MIN;
	volatile int8_t x56 = INT8_MAX;

	t11 = ((x53&x54)<(x55*x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MAX;
	volatile int32_t x58 = 9184313;
	uint8_t x59 = UINT8_MAX;
	int32_t t12 = -12;

	t12 = ((x57&x58)<(x59*x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	static volatile uint16_t x62 = UINT16_MAX;
	volatile uint64_t x64 = 1102952LLU;
	volatile int32_t t13 = 11506;

	t13 = ((x61&x62)<(x63*x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = INT64_MIN;
	uint16_t x67 = UINT16_MAX;
	uint16_t x68 = 22U;
	int32_t t14 = -307794925;

	t14 = ((x65&x66)<(x67*x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x73 = 89U;
	volatile int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MAX;
	uint32_t x76 = 1U;

	t15 = ((x73&x74)<(x75*x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 993U;
	uint32_t x78 = 8U;
	uint16_t x79 = 15314U;
	static uint8_t x80 = 50U;
	static volatile int32_t t16 = 217996;

	t16 = ((x77&x78)<(x79*x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -30LL;
	static volatile uint8_t x82 = UINT8_MAX;
	volatile uint16_t x83 = UINT16_MAX;
	uint32_t x84 = 1U;
	volatile int32_t t17 = -6558600;

	t17 = ((x81&x82)<(x83*x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MIN;
	int16_t x86 = -1;
	static int32_t x87 = -1;
	int8_t x88 = -1;
	volatile int32_t t18 = 16999;

	t18 = ((x85&x86)<(x87*x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x93 = UINT16_MAX;
	static int64_t x94 = INT64_MIN;
	static volatile uint8_t x95 = UINT8_MAX;
	static int8_t x96 = INT8_MAX;
	volatile int32_t t19 = -1996511;

	t19 = ((x93&x94)<(x95*x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x99 = 5866U;
	static uint8_t x100 = UINT8_MAX;
	volatile int32_t t20 = -98181;

	t20 = ((x97&x98)<(x99*x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MAX;
	int64_t x102 = INT64_MAX;
	uint64_t x103 = 89993573247219LLU;
	static int16_t x104 = INT16_MIN;

	t21 = ((x101&x102)<(x103*x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x114 = 32U;
	volatile int16_t x115 = 1381;
	uint32_t x116 = 79724615U;
	volatile int32_t t22 = 144184123;

	t22 = ((x113&x114)<(x115*x116));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x117 = INT32_MAX;
	uint8_t x119 = 24U;
	static int8_t x120 = 3;
	volatile int32_t t23 = 0;

	t23 = ((x117&x118)<(x119*x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x121 = 0;
	int64_t x122 = INT64_MIN;
	uint32_t x123 = 13U;

	t24 = ((x121&x122)<(x123*x124));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = INT64_MAX;
	uint8_t x126 = UINT8_MAX;
	int8_t x127 = INT8_MAX;
	volatile uint64_t x128 = 778522328LLU;

	t25 = ((x125&x126)<(x127*x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x134 = 214824262LLU;
	int32_t x135 = 5863;
	static int8_t x136 = INT8_MAX;
	volatile int32_t t26 = 4;

	t26 = ((x133&x134)<(x135*x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = -224339023LL;
	static uint32_t x139 = 65271014U;
	uint16_t x140 = 624U;

	t27 = ((x137&x138)<(x139*x140));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x145 = -1;
	int16_t x147 = INT16_MAX;
	uint8_t x148 = 7U;

	t28 = ((x145&x146)<(x147*x148));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = INT8_MAX;
	int32_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	int8_t x152 = INT8_MIN;
	volatile int32_t t29 = 56;

	t29 = ((x149&x150)<(x151*x152));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = UINT64_MAX;
	uint64_t x158 = 3074892058700708309LLU;
	volatile int32_t t30 = 14448;

	t30 = ((x157&x158)<(x159*x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x162 = 7LLU;
	int16_t x163 = -1;
	static volatile int8_t x164 = INT8_MAX;
	volatile int32_t t31 = -22581;

	t31 = ((x161&x162)<(x163*x164));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x165 = INT64_MIN;
	int16_t x166 = 24;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t32 = 638;

	t32 = ((x165&x166)<(x167*x168));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x170 = 3;
	static uint32_t x171 = 58469416U;
	int32_t t33 = -129666474;

	t33 = ((x169&x170)<(x171*x172));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MIN;
	uint16_t x175 = 110U;
	int8_t x176 = INT8_MAX;
	volatile int32_t t34 = -381073164;

	t34 = ((x173&x174)<(x175*x176));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = 645515279LL;
	volatile int32_t x190 = INT32_MIN;
	int16_t x191 = INT16_MIN;

	t35 = ((x189&x190)<(x191*x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x193 = UINT8_MAX;
	volatile uint16_t x194 = 3072U;
	int16_t x195 = -1;
	uint16_t x196 = 10U;
	int32_t t36 = 283487790;

	t36 = ((x193&x194)<(x195*x196));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = 2;
	int32_t x198 = INT32_MIN;
	static int8_t x199 = INT8_MIN;

	t37 = ((x197&x198)<(x199*x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x201 = INT16_MIN;
	volatile uint8_t x202 = UINT8_MAX;
	int64_t x204 = -1LL;
	int32_t t38 = 383;

	t38 = ((x201&x202)<(x203*x204));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x209 = 1;
	static int64_t x210 = INT64_MIN;
	int16_t x212 = -361;
	int32_t t39 = -428;

	t39 = ((x209&x210)<(x211*x212));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x214 = INT32_MIN;
	volatile uint64_t x215 = 2553LLU;

	t40 = ((x213&x214)<(x215*x216));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x218 = INT8_MIN;
	volatile int32_t t41 = 10724;

	t41 = ((x217&x218)<(x219*x220));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = -1;
	volatile uint64_t x226 = UINT64_MAX;
	static int16_t x228 = 11395;
	int32_t t42 = 397888;

	t42 = ((x225&x226)<(x227*x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x233 = -12;
	int8_t x235 = INT8_MIN;
	static int32_t x236 = -1;
	static int32_t t43 = 3120;

	t43 = ((x233&x234)<(x235*x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x237 = INT8_MAX;
	int16_t x238 = INT16_MIN;
	static int8_t x239 = INT8_MAX;
	static uint64_t x240 = 128776601LLU;

	t44 = ((x237&x238)<(x239*x240));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x241 = -1;
	int16_t x243 = INT16_MAX;
	volatile uint8_t x244 = 0U;
	volatile int32_t t45 = -168113;

	t45 = ((x241&x242)<(x243*x244));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x246 = INT32_MAX;
	static int8_t x247 = INT8_MIN;
	volatile uint16_t x248 = UINT16_MAX;
	volatile int32_t t46 = -4079;

	t46 = ((x245&x246)<(x247*x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x253 = 1027480968508LLU;
	uint16_t x254 = 6462U;
	uint16_t x255 = 250U;
	uint64_t x256 = UINT64_MAX;
	volatile int32_t t47 = -206843880;

	t47 = ((x253&x254)<(x255*x256));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x257 = INT64_MAX;
	volatile int8_t x258 = -1;
	int32_t x259 = 682559127;
	volatile uint64_t x260 = 348LLU;
	volatile int32_t t48 = -2202;

	t48 = ((x257&x258)<(x259*x260));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x265 = -64;
	int8_t x266 = INT8_MIN;
	int16_t x267 = -76;
	uint64_t x268 = UINT64_MAX;
	int32_t t49 = 217915;

	t49 = ((x265&x266)<(x267*x268));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x274 = 41U;
	volatile uint16_t x275 = 16U;
	volatile uint16_t x276 = 1U;
	volatile int32_t t50 = -6414202;

	t50 = ((x273&x274)<(x275*x276));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MAX;
	uint32_t x280 = 120099U;

	t51 = ((x277&x278)<(x279*x280));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x282 = INT16_MIN;
	static uint64_t x283 = 31LLU;
	volatile int32_t x284 = INT32_MIN;
	volatile int32_t t52 = 14285265;

	t52 = ((x281&x282)<(x283*x284));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x289 = 0U;
	int8_t x291 = INT8_MAX;
	volatile uint16_t x292 = UINT16_MAX;
	int32_t t53 = -91;

	t53 = ((x289&x290)<(x291*x292));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x293 = 123LL;
	int16_t x294 = -1;
	static int8_t x296 = INT8_MAX;

	t54 = ((x293&x294)<(x295*x296));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x297 = -1;
	uint32_t x299 = 500221U;
	static int16_t x300 = -1;
	int32_t t55 = -27;

	t55 = ((x297&x298)<(x299*x300));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x301 = 5;
	uint32_t x302 = UINT32_MAX;
	uint64_t x303 = 1514LLU;
	volatile uint32_t x304 = 127U;
	int32_t t56 = -48;

	t56 = ((x301&x302)<(x303*x304));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x310 = -1;
	int64_t x312 = 122941270585870LL;
	static volatile int32_t t57 = 38691004;

	t57 = ((x309&x310)<(x311*x312));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x314 = 1179963900862331956LLU;
	int8_t x315 = -1;
	volatile int32_t t58 = -4770;

	t58 = ((x313&x314)<(x315*x316));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x317 = 7U;
	static int16_t x318 = INT16_MIN;
	int64_t x320 = -1LL;
	volatile int32_t t59 = -150;

	t59 = ((x317&x318)<(x319*x320));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x325 = INT32_MIN;
	static int64_t x326 = -516310821LL;
	uint64_t x327 = 6100LLU;

	t60 = ((x325&x326)<(x327*x328));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x329 = INT16_MAX;
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = INT16_MIN;
	volatile uint16_t x332 = UINT16_MAX;
	volatile int32_t t61 = 6;

	t61 = ((x329&x330)<(x331*x332));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x333 = INT16_MIN;
	int8_t x334 = -1;
	uint32_t x335 = UINT32_MAX;
	int32_t t62 = 3;

	t62 = ((x333&x334)<(x335*x336));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x341 = INT64_MIN;
	uint64_t x342 = 36796586LLU;
	int8_t x343 = -1;
	static int16_t x344 = INT16_MIN;
	int32_t t63 = 37977;

	t63 = ((x341&x342)<(x343*x344));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x346 = -1;
	static int16_t x347 = -1;
	volatile int32_t t64 = -123453617;

	t64 = ((x345&x346)<(x347*x348));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x350 = INT64_MAX;
	uint16_t x352 = 24U;
	static int32_t t65 = 176497547;

	t65 = ((x349&x350)<(x351*x352));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x357 = UINT16_MAX;
	int32_t x358 = INT32_MIN;
	uint64_t x359 = 1548404772930327LLU;
	int8_t x360 = INT8_MIN;
	int32_t t66 = -1685337;

	t66 = ((x357&x358)<(x359*x360));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x361 = 4U;
	volatile int32_t x362 = INT32_MIN;
	static int8_t x363 = INT8_MIN;
	volatile int16_t x364 = INT16_MIN;
	volatile int32_t t67 = -849;

	t67 = ((x361&x362)<(x363*x364));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x367 = -1;
	int8_t x368 = INT8_MIN;

	t68 = ((x365&x366)<(x367*x368));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x369 = 48;
	volatile uint8_t x370 = 55U;
	int16_t x371 = INT16_MIN;
	uint64_t x372 = 1797367854162761LLU;
	volatile int32_t t69 = -963;

	t69 = ((x369&x370)<(x371*x372));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x373 = 2860;
	static int64_t x374 = INT64_MIN;
	volatile int32_t t70 = 4;

	t70 = ((x373&x374)<(x375*x376));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x377 = INT32_MIN;
	int16_t x378 = -349;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = 3U;
	static int32_t t71 = 17418937;

	t71 = ((x377&x378)<(x379*x380));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x381 = 8149;
	int16_t x382 = INT16_MIN;
	int8_t x383 = 2;
	static int16_t x384 = -1264;

	t72 = ((x381&x382)<(x383*x384));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int8_t x386 = 0;
	int16_t x387 = INT16_MIN;
	volatile int32_t t73 = -153;

	t73 = ((x385&x386)<(x387*x388));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x389 = -1;
	static int8_t x390 = INT8_MIN;
	static uint64_t x391 = UINT64_MAX;
	int16_t x392 = INT16_MIN;
	volatile int32_t t74 = -752;

	t74 = ((x389&x390)<(x391*x392));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x393 = UINT32_MAX;
	volatile int64_t x394 = 4828LL;
	int8_t x395 = 0;
	static volatile uint32_t x396 = UINT32_MAX;

	t75 = ((x393&x394)<(x395*x396));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x405 = UINT64_MAX;
	uint32_t x407 = UINT32_MAX;
	int8_t x408 = INT8_MAX;

	t76 = ((x405&x406)<(x407*x408));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x412 = 43036302954323LLU;
	int32_t t77 = 41;

	t77 = ((x409&x410)<(x411*x412));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x413 = 20U;
	int8_t x414 = INT8_MIN;
	uint64_t x416 = 15128207LLU;
	int32_t t78 = -3;

	t78 = ((x413&x414)<(x415*x416));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x417 = INT8_MIN;
	int32_t t79 = -2;

	t79 = ((x417&x418)<(x419*x420));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x421 = -1;
	uint64_t x422 = 115319262974512LLU;

	t80 = ((x421&x422)<(x423*x424));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x425 = -1;
	int8_t x426 = INT8_MIN;
	uint64_t x427 = 277824752488399LLU;
	static int32_t t81 = -237602916;

	t81 = ((x425&x426)<(x427*x428));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x429 = INT32_MAX;
	volatile uint16_t x432 = 2U;
	volatile int32_t t82 = -8566407;

	t82 = ((x429&x430)<(x431*x432));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x433 = 0U;
	static int64_t x434 = INT64_MIN;
	volatile int32_t t83 = 1;

	t83 = ((x433&x434)<(x435*x436));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x437 = 61808608LL;
	uint16_t x438 = 15U;
	volatile uint64_t x439 = UINT64_MAX;
	int8_t x440 = -41;
	int32_t t84 = -12;

	t84 = ((x437&x438)<(x439*x440));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x443 = -7821;
	int16_t x444 = -1;
	int32_t t85 = -10965037;

	t85 = ((x441&x442)<(x443*x444));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x445 = INT16_MIN;
	uint64_t x446 = 13400735LLU;
	static int8_t x448 = INT8_MIN;

	t86 = ((x445&x446)<(x447*x448));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x454 = INT8_MIN;
	int32_t x456 = -1;
	int32_t t87 = -22;

	t87 = ((x453&x454)<(x455*x456));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x457 = 64U;
	int64_t x460 = -1LL;
	volatile int32_t t88 = -251601233;

	t88 = ((x457&x458)<(x459*x460));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x465 = 85423713676LL;
	uint8_t x466 = 0U;
	static uint8_t x467 = UINT8_MAX;
	static volatile int8_t x468 = INT8_MIN;
	volatile int32_t t89 = 0;

	t89 = ((x465&x466)<(x467*x468));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x473 = INT8_MIN;
	volatile int32_t x474 = INT32_MAX;
	volatile int32_t t90 = 0;

	t90 = ((x473&x474)<(x475*x476));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x479 = -10;
	int16_t x480 = INT16_MIN;
	static volatile int32_t t91 = -8288;

	t91 = ((x477&x478)<(x479*x480));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x485 = 263208;
	uint32_t x486 = UINT32_MAX;
	uint16_t x487 = 11749U;
	static volatile uint8_t x488 = 55U;
	static int32_t t92 = 7110;

	t92 = ((x485&x486)<(x487*x488));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x489 = INT16_MIN;
	static int32_t x490 = 419;
	uint8_t x491 = UINT8_MAX;
	int16_t x492 = -101;
	int32_t t93 = 3;

	t93 = ((x489&x490)<(x491*x492));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x493 = 1U;
	int8_t x494 = INT8_MAX;
	int8_t x496 = INT8_MIN;
	int32_t t94 = -48238;

	t94 = ((x493&x494)<(x495*x496));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x497 = 10534523LL;
	int8_t x499 = -1;
	int8_t x500 = INT8_MIN;
	static int32_t t95 = -2095;

	t95 = ((x497&x498)<(x499*x500));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x509 = 10;
	uint64_t x511 = 12951767980397209LLU;
	volatile int32_t t96 = 28984;

	t96 = ((x509&x510)<(x511*x512));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x513 = INT32_MIN;
	static uint8_t x514 = 3U;
	uint32_t x515 = 1318U;
	int16_t x516 = -1;
	int32_t t97 = -137694509;

	t97 = ((x513&x514)<(x515*x516));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x517 = 27;
	static int16_t x518 = INT16_MIN;
	uint32_t x519 = 506U;
	volatile uint64_t x520 = UINT64_MAX;
	volatile int32_t t98 = -77;

	t98 = ((x517&x518)<(x519*x520));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x521 = INT8_MIN;
	volatile uint64_t x522 = 5295030448643882050LLU;
	volatile int32_t x523 = INT32_MIN;
	volatile int8_t x524 = 1;
	volatile int32_t t99 = -112;

	t99 = ((x521&x522)<(x523*x524));

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

