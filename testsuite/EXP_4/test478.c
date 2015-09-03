#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = -28;
int64_t x15 = -1926009LL;
volatile int32_t x16 = -1;
int32_t t3 = 1496;
uint16_t x17 = UINT16_MAX;
static int32_t x21 = -1;
volatile int32_t t5 = 150;
uint16_t x25 = UINT16_MAX;
static uint16_t x37 = 38U;
volatile int32_t x41 = -1;
static volatile int16_t x43 = INT16_MIN;
volatile int32_t t9 = -377522265;
int8_t x47 = -2;
static int16_t x55 = 1902;
int32_t x62 = INT32_MIN;
uint64_t x68 = 816678105LLU;
uint8_t x79 = 20U;
int32_t x83 = -1;
static volatile int32_t t18 = 582;
uint32_t x104 = 5U;
int8_t x113 = -1;
volatile uint16_t x121 = 1903U;
static volatile int32_t t26 = 129157889;
volatile int32_t x133 = INT32_MAX;
uint16_t x146 = 347U;
int8_t x155 = INT8_MAX;
int32_t t31 = 237;
uint16_t x162 = 2057U;
int32_t t33 = 0;
int64_t x167 = -1LL;
volatile int8_t x185 = INT8_MIN;
static int8_t x187 = INT8_MIN;
static uint8_t x190 = UINT8_MAX;
uint64_t x192 = UINT64_MAX;
uint64_t x195 = UINT64_MAX;
uint32_t x199 = 0U;
volatile uint64_t x202 = 7LLU;
uint64_t x204 = UINT64_MAX;
volatile int32_t t41 = 600574;
volatile int16_t x215 = INT16_MIN;
uint32_t x223 = UINT32_MAX;
static volatile int32_t x229 = -67163;
int8_t x230 = INT8_MAX;
int8_t x237 = -1;
int8_t x243 = -1;
int64_t x250 = INT64_MIN;
int64_t x254 = -1LL;
volatile int32_t t49 = -20697662;
int64_t x261 = 392394088656875788LL;
uint64_t x266 = 478042912281LLU;
int8_t x267 = 1;
static volatile int32_t t52 = -24860;
volatile int32_t t53 = 442;
int64_t x278 = 72213671891LL;
volatile uint8_t x279 = 75U;
int8_t x285 = 0;
static volatile int32_t x288 = -1;
static volatile int32_t t56 = -1;
uint32_t x293 = UINT32_MAX;
volatile int8_t x307 = -1;
int16_t x313 = 0;
int32_t x315 = 127;
volatile uint16_t x319 = 495U;
int64_t x332 = INT64_MIN;
uint8_t x333 = 2U;
int32_t t64 = -38;
volatile uint32_t x342 = 294939091U;
static uint32_t x358 = 3792940U;
volatile int32_t x360 = -1;
int8_t x361 = -1;
int64_t x378 = -1LL;
uint8_t x380 = UINT8_MAX;
int32_t x382 = INT32_MIN;
int16_t x383 = INT16_MIN;
volatile int32_t t71 = -2581187;
static uint16_t x386 = 0U;
uint32_t x391 = 158805U;
int32_t t73 = -6;
int64_t x398 = INT64_MIN;
int32_t t75 = -283;
static volatile uint64_t x403 = UINT64_MAX;
static int32_t x407 = -1;
static uint32_t x410 = 138615U;
uint64_t x414 = 1035074LLU;
volatile uint32_t x417 = UINT32_MAX;
uint16_t x420 = 1819U;
volatile int64_t x421 = 2008888548313LL;
int32_t x425 = 848330082;
static volatile uint32_t x434 = 25936U;
static volatile int8_t x436 = INT8_MAX;
volatile uint8_t x438 = 4U;
volatile int16_t x439 = -1;
int16_t x446 = INT16_MAX;
int16_t x449 = -5;
int16_t x452 = 27;
static volatile int64_t x459 = 0LL;
volatile uint16_t x463 = UINT16_MAX;
uint8_t x464 = UINT8_MAX;
volatile int8_t x483 = 0;
static int32_t t94 = -5315531;
uint64_t x492 = 13586865694886LLU;
static uint32_t x503 = 0U;
uint8_t x509 = 4U;
int64_t x510 = -116047841130LL;


void f0(void) {
	static uint16_t x1 = 5U;
	int8_t x2 = INT8_MIN;
	static volatile int16_t x3 = -2;
	volatile uint8_t x4 = 5U;
	int32_t t0 = 483101064;

	t0 = (x1<=(x2&(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 331114U;
	volatile uint32_t x6 = UINT32_MAX;
	static uint8_t x7 = 0U;
	volatile uint16_t x8 = UINT16_MAX;
	int32_t t1 = 10;

	t1 = (x5<=(x6&(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int8_t x11 = INT8_MIN;
	uint16_t x12 = 891U;
	volatile int32_t t2 = -3;

	t2 = (x9<=(x10&(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static volatile uint64_t x14 = 4648377190308757LLU;

	t3 = (x13<=(x14&(x15*x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = -22878LL;
	int16_t x19 = -1;
	volatile int32_t x20 = -3592;
	volatile int32_t t4 = 4145;

	t4 = (x17<=(x18&(x19*x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -7621;
	uint16_t x23 = 484U;
	int32_t x24 = -476;

	t5 = (x21<=(x22&(x23*x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x26 = 15;
	volatile uint64_t x27 = 269899173582415LLU;
	uint64_t x28 = 14820228LLU;
	static volatile int32_t t6 = 2691623;

	t6 = (x25<=(x26&(x27*x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MIN;
	volatile int8_t x32 = INT8_MAX;
	int32_t t7 = 336;

	t7 = (x29<=(x30&(x31*x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x38 = INT16_MAX;
	int64_t x39 = 2592LL;
	int8_t x40 = INT8_MIN;
	volatile int32_t t8 = 119703296;

	t8 = (x37<=(x38&(x39*x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = -1;
	static uint32_t x44 = 77283U;

	t9 = (x41<=(x42&(x43*x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = 4U;
	static int32_t x46 = INT32_MIN;
	int8_t x48 = 50;
	int32_t t10 = 3;

	t10 = (x45<=(x46&(x47*x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 2247197104614LLU;
	uint64_t x54 = 894787998986LLU;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t11 = 101148;

	t11 = (x53<=(x54&(x55*x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = -1;
	uint8_t x63 = 2U;
	static int16_t x64 = 0;
	int32_t t12 = 20625083;

	t12 = (x61<=(x62&(x63*x64)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 247888LLU;
	int32_t x66 = INT32_MIN;
	uint16_t x67 = 350U;
	int32_t t13 = 5253;

	t13 = (x65<=(x66&(x67*x68)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = 1035;
	int16_t x70 = 7604;
	static int16_t x71 = INT16_MIN;
	static volatile uint16_t x72 = 3066U;
	static volatile int32_t t14 = -173369;

	t14 = (x69<=(x70&(x71*x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 3926U;
	int8_t x74 = INT8_MIN;
	uint32_t x75 = UINT32_MAX;
	static uint32_t x76 = UINT32_MAX;
	volatile int32_t t15 = -73124933;

	t15 = (x73<=(x74&(x75*x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 29433850U;
	uint64_t x78 = 1742LLU;
	static int64_t x80 = -352LL;
	int32_t t16 = 94376;

	t16 = (x77<=(x78&(x79*x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 629333106478876LLU;
	int64_t x82 = -459963LL;
	int16_t x84 = -26;
	int32_t t17 = 63328;

	t17 = (x81<=(x82&(x83*x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x85 = 87U;
	volatile int64_t x86 = INT64_MIN;
	volatile int8_t x87 = INT8_MIN;
	int64_t x88 = -98730LL;

	t18 = (x85<=(x86&(x87*x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x93 = 7823517150068LLU;
	uint32_t x94 = 17359U;
	int16_t x95 = -1;
	uint8_t x96 = UINT8_MAX;
	int32_t t19 = -29181;

	t19 = (x93<=(x94&(x95*x96)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MIN;
	volatile int64_t x98 = INT64_MIN;
	int32_t x99 = -1895;
	int8_t x100 = -1;
	int32_t t20 = 6;

	t20 = (x97<=(x98&(x99*x100)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -1;
	uint8_t x102 = 9U;
	uint64_t x103 = 15691193076LLU;
	int32_t t21 = -109792613;

	t21 = (x101<=(x102&(x103*x104)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = UINT32_MAX;
	volatile uint64_t x106 = UINT64_MAX;
	static volatile int8_t x107 = -1;
	static uint16_t x108 = 24634U;
	int32_t t22 = 113928;

	t22 = (x105<=(x106&(x107*x108)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MAX;
	int64_t x116 = -62114106388758LL;
	int32_t t23 = -17594;

	t23 = (x113<=(x114&(x115*x116)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = -3;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = -1;
	uint16_t x120 = 488U;
	int32_t t24 = 198880456;

	t24 = (x117<=(x118&(x119*x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x122 = UINT16_MAX;
	static uint16_t x123 = 2495U;
	int16_t x124 = -1;
	int32_t t25 = 58224483;

	t25 = (x121<=(x122&(x123*x124)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x125 = 124U;
	int16_t x126 = INT16_MIN;
	uint8_t x127 = UINT8_MAX;
	volatile int16_t x128 = INT16_MIN;

	t26 = (x125<=(x126&(x127*x128)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = INT16_MAX;
	static int32_t x130 = INT32_MAX;
	int16_t x131 = INT16_MIN;
	int16_t x132 = 366;
	int32_t t27 = 53257567;

	t27 = (x129<=(x130&(x131*x132)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x134 = 434505440982651982LLU;
	static int16_t x135 = 111;
	int8_t x136 = 5;
	volatile int32_t t28 = 199;

	t28 = (x133<=(x134&(x135*x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x145 = 496U;
	int64_t x147 = 20646843186676LL;
	int16_t x148 = INT16_MIN;
	static volatile int32_t t29 = -7878;

	t29 = (x145<=(x146&(x147*x148)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = 42U;
	int8_t x150 = -1;
	static uint8_t x151 = 1U;
	static int16_t x152 = INT16_MAX;
	volatile int32_t t30 = 327;

	t30 = (x149<=(x150&(x151*x152)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x153 = INT8_MIN;
	static int8_t x154 = 10;
	uint32_t x156 = 820665367U;

	t31 = (x153<=(x154&(x155*x156)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = -28;
	int8_t x158 = 4;
	int16_t x159 = INT16_MAX;
	uint16_t x160 = 77U;
	int32_t t32 = 293424732;

	t32 = (x157<=(x158&(x159*x160)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x161 = UINT32_MAX;
	volatile int8_t x163 = -7;
	uint64_t x164 = UINT64_MAX;

	t33 = (x161<=(x162&(x163*x164)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x165 = 15;
	uint8_t x166 = UINT8_MAX;
	uint32_t x168 = 184561730U;
	static volatile int32_t t34 = -259878;

	t34 = (x165<=(x166&(x167*x168)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x177 = 32173U;
	int32_t x178 = -26462;
	static uint8_t x179 = UINT8_MAX;
	volatile uint16_t x180 = 11904U;
	volatile int32_t t35 = -12717;

	t35 = (x177<=(x178&(x179*x180)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x186 = -1;
	int64_t x188 = -1LL;
	static int32_t t36 = 97;

	t36 = (x185<=(x186&(x187*x188)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x189 = 85936U;
	int16_t x191 = 1;
	static int32_t t37 = 0;

	t37 = (x189<=(x190&(x191*x192)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x193 = -12;
	uint64_t x194 = UINT64_MAX;
	uint32_t x196 = 292273U;
	volatile int32_t t38 = 881001;

	t38 = (x193<=(x194&(x195*x196)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x197 = -5589;
	int64_t x198 = INT64_MIN;
	volatile int32_t x200 = 26;
	int32_t t39 = -1;

	t39 = (x197<=(x198&(x199*x200)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x201 = 5U;
	uint16_t x203 = UINT16_MAX;
	int32_t t40 = 606;

	t40 = (x201<=(x202&(x203*x204)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x205 = INT64_MIN;
	volatile int64_t x206 = INT64_MIN;
	uint32_t x207 = UINT32_MAX;
	uint8_t x208 = 0U;

	t41 = (x205<=(x206&(x207*x208)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = -16;
	volatile uint8_t x214 = 50U;
	static int16_t x216 = 136;
	volatile int32_t t42 = -606352902;

	t42 = (x213<=(x214&(x215*x216)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x221 = INT8_MIN;
	uint64_t x222 = 1584LLU;
	int32_t x224 = INT32_MAX;
	volatile int32_t t43 = 0;

	t43 = (x221<=(x222&(x223*x224)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x231 = -228174;
	uint64_t x232 = 26013LLU;
	int32_t t44 = 7227596;

	t44 = (x229<=(x230&(x231*x232)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x238 = INT64_MIN;
	uint16_t x239 = UINT16_MAX;
	uint16_t x240 = 347U;
	volatile int32_t t45 = 192;

	t45 = (x237<=(x238&(x239*x240)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x241 = 6U;
	uint8_t x242 = 2U;
	volatile uint32_t x244 = 63061999U;
	volatile int32_t t46 = -34174;

	t46 = (x241<=(x242&(x243*x244)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = 4066504;
	uint16_t x246 = UINT16_MAX;
	volatile uint16_t x247 = 0U;
	volatile uint8_t x248 = UINT8_MAX;
	int32_t t47 = -4;

	t47 = (x245<=(x246&(x247*x248)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x249 = 28;
	uint32_t x251 = 1U;
	uint8_t x252 = UINT8_MAX;
	int32_t t48 = -148494769;

	t48 = (x249<=(x250&(x251*x252)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x253 = 26694091;
	uint8_t x255 = 12U;
	int32_t x256 = 95301;

	t49 = (x253<=(x254&(x255*x256)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x262 = 250358;
	int32_t x263 = -3;
	volatile uint32_t x264 = 250392U;
	static volatile int32_t t50 = -4897029;

	t50 = (x261<=(x262&(x263*x264)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x265 = INT16_MIN;
	int32_t x268 = -6;
	static volatile int32_t t51 = 41876;

	t51 = (x265<=(x266&(x267*x268)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x269 = 1U;
	volatile int8_t x270 = -1;
	int16_t x271 = -15180;
	uint16_t x272 = 24U;

	t52 = (x269<=(x270&(x271*x272)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x274 = INT64_MAX;
	volatile uint32_t x275 = 1U;
	volatile uint64_t x276 = 29665817339403766LLU;

	t53 = (x273<=(x274&(x275*x276)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x277 = UINT16_MAX;
	volatile uint32_t x280 = 102358U;
	int32_t t54 = -76626573;

	t54 = (x277<=(x278&(x279*x280)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x281 = INT32_MAX;
	int16_t x282 = 2300;
	int8_t x283 = INT8_MIN;
	volatile int32_t x284 = 20;
	int32_t t55 = 156;

	t55 = (x281<=(x282&(x283*x284)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x286 = 22U;
	int8_t x287 = INT8_MIN;

	t56 = (x285<=(x286&(x287*x288)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x289 = -4775;
	static int16_t x290 = 9435;
	int8_t x291 = INT8_MAX;
	volatile int16_t x292 = INT16_MIN;
	volatile int32_t t57 = 12746;

	t57 = (x289<=(x290&(x291*x292)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x294 = -11177903757829LL;
	volatile uint8_t x295 = UINT8_MAX;
	uint64_t x296 = 31640LLU;
	int32_t t58 = 397;

	t58 = (x293<=(x294&(x295*x296)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x305 = INT16_MAX;
	static volatile uint64_t x306 = UINT64_MAX;
	int32_t x308 = -41469;
	int32_t t59 = 1;

	t59 = (x305<=(x306&(x307*x308)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x309 = 1450040LL;
	static int8_t x310 = INT8_MAX;
	int16_t x311 = INT16_MIN;
	uint16_t x312 = 5672U;
	volatile int32_t t60 = 11198310;

	t60 = (x309<=(x310&(x311*x312)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x314 = UINT16_MAX;
	int64_t x316 = 13884477LL;
	int32_t t61 = -18033759;

	t61 = (x313<=(x314&(x315*x316)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x317 = INT32_MIN;
	volatile uint8_t x318 = 76U;
	static int8_t x320 = INT8_MIN;
	static int32_t t62 = 876774;

	t62 = (x317<=(x318&(x319*x320)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x329 = -1;
	int16_t x330 = INT16_MIN;
	volatile int32_t x331 = 0;
	static volatile int32_t t63 = -1188;

	t63 = (x329<=(x330&(x331*x332)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x334 = INT16_MIN;
	volatile int8_t x335 = 5;
	static int16_t x336 = -82;

	t64 = (x333<=(x334&(x335*x336)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x337 = -1;
	int64_t x338 = 224447542614LL;
	int64_t x339 = -1LL;
	int64_t x340 = 7505LL;
	int32_t t65 = 121530251;

	t65 = (x337<=(x338&(x339*x340)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = INT64_MAX;
	static volatile uint8_t x343 = UINT8_MAX;
	static volatile int8_t x344 = INT8_MIN;
	static volatile int32_t t66 = 12727;

	t66 = (x341<=(x342&(x343*x344)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x357 = 458681663135714LLU;
	int64_t x359 = INT64_MAX;
	volatile int32_t t67 = -30642;

	t67 = (x357<=(x358&(x359*x360)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x362 = INT8_MIN;
	int8_t x363 = 0;
	volatile int64_t x364 = -492LL;
	int32_t t68 = -204034;

	t68 = (x361<=(x362&(x363*x364)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x365 = 4987U;
	int32_t x366 = 1021;
	int16_t x367 = INT16_MIN;
	int64_t x368 = -846217LL;
	volatile int32_t t69 = -53601577;

	t69 = (x365<=(x366&(x367*x368)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x377 = 319577791LL;
	uint32_t x379 = 6U;
	int32_t t70 = -3315;

	t70 = (x377<=(x378&(x379*x380)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x381 = INT16_MIN;
	uint8_t x384 = 15U;

	t71 = (x381<=(x382&(x383*x384)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x385 = INT16_MAX;
	static uint16_t x387 = UINT16_MAX;
	uint64_t x388 = 6581996607035325525LLU;
	int32_t t72 = 20133760;

	t72 = (x385<=(x386&(x387*x388)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x389 = INT64_MAX;
	static uint16_t x390 = 246U;
	int8_t x392 = -5;

	t73 = (x389<=(x390&(x391*x392)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x393 = 0U;
	int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	uint32_t x396 = 3137893U;
	volatile int32_t t74 = -6;

	t74 = (x393<=(x394&(x395*x396)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x397 = INT16_MIN;
	static uint64_t x399 = 1166LLU;
	int16_t x400 = INT16_MAX;

	t75 = (x397<=(x398&(x399*x400)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x401 = INT16_MIN;
	static volatile uint64_t x402 = UINT64_MAX;
	int32_t x404 = INT32_MIN;
	int32_t t76 = -45906;

	t76 = (x401<=(x402&(x403*x404)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x405 = -1;
	static int32_t x406 = INT32_MIN;
	int16_t x408 = 7;
	int32_t t77 = 42;

	t77 = (x405<=(x406&(x407*x408)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x409 = INT32_MAX;
	uint8_t x411 = 0U;
	static int16_t x412 = 0;
	volatile int32_t t78 = 0;

	t78 = (x409<=(x410&(x411*x412)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x413 = INT16_MIN;
	static int16_t x415 = INT16_MIN;
	static uint64_t x416 = UINT64_MAX;
	volatile int32_t t79 = 7575296;

	t79 = (x413<=(x414&(x415*x416)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x418 = -1;
	static uint16_t x419 = 0U;
	volatile int32_t t80 = 50207963;

	t80 = (x417<=(x418&(x419*x420)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x422 = -851810718105LL;
	uint8_t x423 = 101U;
	uint32_t x424 = 4735751U;
	volatile int32_t t81 = 3;

	t81 = (x421<=(x422&(x423*x424)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x426 = -1127;
	static int64_t x427 = -92LL;
	int32_t x428 = INT32_MIN;
	int32_t t82 = -128561;

	t82 = (x425<=(x426&(x427*x428)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x433 = 2340287135983LLU;
	uint32_t x435 = 164U;
	volatile int32_t t83 = -61;

	t83 = (x433<=(x434&(x435*x436)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x437 = 2LLU;
	int64_t x440 = 13465525824398628LL;
	volatile int32_t t84 = -485673;

	t84 = (x437<=(x438&(x439*x440)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x445 = -2;
	int64_t x447 = INT64_MIN;
	volatile uint64_t x448 = 7284668LLU;
	volatile int32_t t85 = 195;

	t85 = (x445<=(x446&(x447*x448)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x450 = 5U;
	volatile uint8_t x451 = 48U;
	volatile int32_t t86 = 13247;

	t86 = (x449<=(x450&(x451*x452)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x453 = 2093595494636926959LL;
	uint8_t x454 = 4U;
	int16_t x455 = INT16_MIN;
	int16_t x456 = 0;
	volatile int32_t t87 = -235224;

	t87 = (x453<=(x454&(x455*x456)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x457 = -66;
	static uint32_t x458 = 0U;
	volatile uint64_t x460 = UINT64_MAX;
	volatile int32_t t88 = 1772484;

	t88 = (x457<=(x458&(x459*x460)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x461 = 1;
	uint64_t x462 = UINT64_MAX;
	volatile int32_t t89 = -1;

	t89 = (x461<=(x462&(x463*x464)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x465 = 0U;
	volatile uint16_t x466 = 1U;
	uint16_t x467 = 252U;
	uint16_t x468 = 48U;
	int32_t t90 = 454960832;

	t90 = (x465<=(x466&(x467*x468)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x469 = 2U;
	static uint64_t x470 = 3LLU;
	int8_t x471 = INT8_MAX;
	uint64_t x472 = 22463LLU;
	static int32_t t91 = -189;

	t91 = (x469<=(x470&(x471*x472)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x473 = UINT32_MAX;
	static int32_t x474 = INT32_MAX;
	volatile int16_t x475 = -1;
	static int64_t x476 = -1LL;
	int32_t t92 = -12;

	t92 = (x473<=(x474&(x475*x476)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x477 = -15;
	int16_t x478 = 11;
	volatile int32_t x479 = INT32_MAX;
	int8_t x480 = -1;
	int32_t t93 = 14;

	t93 = (x477<=(x478&(x479*x480)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x481 = 9208U;
	uint64_t x482 = 6279717354983914609LLU;
	int64_t x484 = -1LL;

	t94 = (x481<=(x482&(x483*x484)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x485 = UINT8_MAX;
	uint16_t x486 = 10U;
	uint32_t x487 = UINT32_MAX;
	int16_t x488 = -123;
	int32_t t95 = -2513868;

	t95 = (x485<=(x486&(x487*x488)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x489 = 1U;
	int16_t x490 = -1;
	uint32_t x491 = 1U;
	volatile int32_t t96 = -9;

	t96 = (x489<=(x490&(x491*x492)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x493 = 0;
	uint16_t x494 = UINT16_MAX;
	static uint64_t x495 = 94LLU;
	int8_t x496 = INT8_MIN;
	volatile int32_t t97 = 0;

	t97 = (x493<=(x494&(x495*x496)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x501 = INT16_MIN;
	int8_t x502 = INT8_MAX;
	int16_t x504 = 5;
	volatile int32_t t98 = 174985817;

	t98 = (x501<=(x502&(x503*x504)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x511 = INT8_MIN;
	uint64_t x512 = 108387191420501731LLU;
	int32_t t99 = 1098;

	t99 = (x509<=(x510&(x511*x512)));

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

