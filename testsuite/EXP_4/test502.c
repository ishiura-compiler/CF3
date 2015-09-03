#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 4214497581554LLU;
int32_t x3 = -6001;
int32_t x5 = INT32_MIN;
volatile int32_t t1 = -173719;
static volatile int32_t x9 = -1;
int16_t x11 = -731;
uint64_t x12 = 32210722569285LLU;
int32_t x17 = INT32_MIN;
int8_t x19 = INT8_MAX;
volatile int32_t t4 = -298;
int8_t x23 = INT8_MAX;
volatile int32_t t6 = -112592;
static int16_t x32 = INT16_MIN;
volatile int8_t x38 = -1;
int32_t t9 = -103;
uint16_t x55 = 1U;
uint16_t x59 = 3979U;
int32_t t13 = -59982758;
int32_t t15 = -55;
static int16_t x78 = INT16_MIN;
int16_t x99 = -1;
uint64_t x107 = 59588168760LLU;
int32_t x121 = -6779259;
volatile int16_t x130 = 2095;
uint32_t x132 = UINT32_MAX;
int8_t x135 = INT8_MAX;
int64_t x146 = 236486610706661LL;
int32_t t33 = -45882720;
static int8_t x158 = -1;
int16_t x159 = -1;
static volatile int16_t x174 = INT16_MIN;
static int8_t x175 = 2;
static int32_t t36 = 1183464;
uint32_t x186 = 11U;
int64_t x194 = INT64_MAX;
static uint8_t x208 = 3U;
uint8_t x211 = 21U;
volatile int32_t t42 = 1070599;
volatile uint32_t x220 = 28U;
int32_t x222 = 937036;
volatile int32_t t45 = -7;
volatile int32_t t46 = -174;
int32_t t47 = -22418730;
volatile int32_t t49 = -1042639491;
uint8_t x243 = 0U;
int16_t x252 = -1;
static int32_t t52 = 2;
volatile uint8_t x269 = UINT8_MAX;
uint32_t x272 = 5U;
int8_t x273 = INT8_MAX;
int32_t x281 = INT32_MIN;
volatile uint8_t x283 = UINT8_MAX;
int16_t x291 = INT16_MIN;
int32_t t59 = -69690063;
uint16_t x313 = 5U;
static int64_t x315 = -1LL;
volatile int8_t x322 = INT8_MIN;
volatile int32_t t62 = 1722;
int8_t x325 = INT8_MIN;
static int16_t x326 = -707;
int64_t x327 = 260320141LL;
uint16_t x329 = 2146U;
int32_t x330 = -1;
static volatile int32_t t64 = 0;
int64_t x346 = INT64_MIN;
uint64_t x350 = 0LLU;
int32_t x353 = -4;
static int64_t x354 = INT64_MIN;
int16_t x355 = INT16_MIN;
static int32_t x356 = -1;
volatile int8_t x359 = 0;
int32_t t71 = 32571571;
volatile int32_t t75 = -101;
volatile uint64_t x395 = 2083374309725134LLU;
static volatile uint8_t x403 = 2U;
int32_t x407 = -1;
volatile int32_t t80 = 236615038;
int16_t x416 = 5;
int32_t t81 = -972536;
volatile int8_t x421 = INT8_MIN;
static int32_t x425 = INT32_MIN;
int32_t t83 = 395057464;
int16_t x433 = 1;
static uint8_t x435 = 1U;
static int32_t t85 = -9402;
static uint64_t x437 = UINT64_MAX;
static uint32_t x442 = 4667408U;
uint8_t x449 = UINT8_MAX;
uint64_t x457 = UINT64_MAX;
int32_t x458 = INT32_MAX;
static uint8_t x465 = 93U;
uint64_t x470 = UINT64_MAX;
int8_t x476 = -1;
volatile int32_t t94 = 5;
static uint16_t x484 = 0U;
static int16_t x485 = INT16_MIN;
volatile int8_t x491 = INT8_MAX;
volatile int16_t x493 = INT16_MAX;
static volatile uint64_t x498 = 144LLU;


void f0(void) {
	uint16_t x1 = 505U;
	uint32_t x4 = 121775979U;
	volatile int32_t t0 = 3321;

	t0 = (x1==(x2^(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	static uint64_t x7 = UINT64_MAX;
	uint8_t x8 = 0U;

	t1 = (x5==(x6^(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 3514U;
	volatile int32_t t2 = 18;

	t2 = (x9==(x10^(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = INT16_MAX;
	int64_t x14 = INT64_MIN;
	static volatile int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -1;

	t3 = (x13==(x14^(x15*x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = -49;
	volatile int8_t x20 = INT8_MAX;

	t4 = (x17==(x18^(x19*x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	static int32_t x22 = INT32_MAX;
	int16_t x24 = -1;
	int32_t t5 = 12610087;

	t5 = (x21==(x22^(x23*x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 319U;
	uint64_t x26 = 1337LLU;
	uint8_t x27 = UINT8_MAX;
	int64_t x28 = -14945376220LL;

	t6 = (x25==(x26^(x27*x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	volatile int64_t x30 = -3877925727078LL;
	int8_t x31 = -1;
	static int32_t t7 = -1;

	t7 = (x29==(x30^(x31*x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	volatile uint32_t x34 = 105U;
	int16_t x35 = INT16_MIN;
	int16_t x36 = -1;
	volatile int32_t t8 = -7279087;

	t8 = (x33==(x34^(x35*x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -4794;
	volatile int32_t x39 = -1;
	volatile int64_t x40 = INT64_MAX;

	t9 = (x37==(x38^(x39*x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile uint64_t x42 = UINT64_MAX;
	uint64_t x43 = 153707570LLU;
	volatile int32_t x44 = -1;
	static volatile int32_t t10 = 448189288;

	t10 = (x41==(x42^(x43*x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = INT32_MIN;
	int8_t x50 = -2;
	uint32_t x51 = 202089100U;
	int64_t x52 = -1LL;
	int32_t t11 = -3;

	t11 = (x49==(x50^(x51*x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	static uint16_t x54 = 0U;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t12 = 1;

	t12 = (x53==(x54^(x55*x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 181984496629LLU;
	int8_t x58 = INT8_MAX;
	uint64_t x60 = 2026LLU;

	t13 = (x57==(x58^(x59*x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MAX;
	volatile int32_t x70 = -22795;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t14 = 16121;

	t14 = (x69==(x70^(x71*x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 17U;
	int8_t x74 = 2;
	int8_t x75 = 1;
	int64_t x76 = -1LL;

	t15 = (x73==(x74^(x75*x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x77 = INT32_MIN;
	int8_t x79 = INT8_MAX;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t16 = 0;

	t16 = (x77==(x78^(x79*x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 2002565827U;
	int32_t x82 = INT32_MIN;
	uint64_t x83 = UINT64_MAX;
	uint16_t x84 = 23U;
	static volatile int32_t t17 = 2265;

	t17 = (x81==(x82^(x83*x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x85 = INT16_MIN;
	uint16_t x86 = 289U;
	int8_t x87 = INT8_MAX;
	volatile uint32_t x88 = UINT32_MAX;
	int32_t t18 = -193093509;

	t18 = (x85==(x86^(x87*x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = UINT16_MAX;
	uint16_t x90 = UINT16_MAX;
	static volatile uint8_t x91 = 1U;
	static int16_t x92 = -1;
	static int32_t t19 = -13294;

	t19 = (x89==(x90^(x91*x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = -1;
	int16_t x94 = INT16_MIN;
	uint32_t x95 = 425073U;
	volatile int32_t x96 = INT32_MIN;
	static int32_t t20 = -47;

	t20 = (x93==(x94^(x95*x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = -1LL;
	int16_t x98 = INT16_MIN;
	static volatile int16_t x100 = INT16_MAX;
	int32_t t21 = 6282;

	t21 = (x97==(x98^(x99*x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = -488225110371LL;
	uint8_t x102 = 0U;
	volatile int16_t x103 = INT16_MIN;
	int8_t x104 = 1;
	static int32_t t22 = -1910348;

	t22 = (x101==(x102^(x103*x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = INT8_MIN;
	int8_t x106 = -1;
	int32_t x108 = -226245;
	int32_t t23 = -948;

	t23 = (x105==(x106^(x107*x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = UINT16_MAX;
	int64_t x110 = 11LL;
	volatile int32_t x111 = 1220741;
	volatile uint16_t x112 = 95U;
	volatile int32_t t24 = 98463;

	t24 = (x109==(x110^(x111*x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MAX;
	uint64_t x118 = 30759696102264877LLU;
	uint64_t x119 = 14785933467947764LLU;
	uint32_t x120 = 0U;
	int32_t t25 = 1591308;

	t25 = (x117==(x118^(x119*x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x122 = INT8_MAX;
	volatile uint64_t x123 = UINT64_MAX;
	int64_t x124 = INT64_MAX;
	int32_t t26 = 1350775;

	t26 = (x121==(x122^(x123*x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x129 = INT64_MAX;
	uint64_t x131 = UINT64_MAX;
	static volatile int32_t t27 = 54103562;

	t27 = (x129==(x130^(x131*x132)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x133 = -335734693LL;
	volatile int8_t x134 = -1;
	static volatile uint8_t x136 = 1U;
	static int32_t t28 = 0;

	t28 = (x133==(x134^(x135*x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x137 = 2U;
	int64_t x138 = 408480529798905LL;
	uint32_t x139 = 7543U;
	volatile int8_t x140 = -1;
	volatile int32_t t29 = -437010;

	t29 = (x137==(x138^(x139*x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = UINT8_MAX;
	static int64_t x142 = -1LL;
	int8_t x143 = -7;
	int8_t x144 = INT8_MIN;
	int32_t t30 = -7207050;

	t30 = (x141==(x142^(x143*x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x145 = 2962U;
	int16_t x147 = 13933;
	volatile int64_t x148 = 27LL;
	int32_t t31 = -5;

	t31 = (x145==(x146^(x147*x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x149 = 833U;
	int64_t x150 = INT64_MAX;
	uint64_t x151 = 8LLU;
	uint16_t x152 = 78U;
	volatile int32_t t32 = 956979210;

	t32 = (x149==(x150^(x151*x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = UINT8_MAX;
	int16_t x154 = INT16_MIN;
	uint16_t x155 = 16383U;
	int8_t x156 = INT8_MIN;

	t33 = (x153==(x154^(x155*x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = 1LL;
	int16_t x160 = INT16_MIN;
	int32_t t34 = 65475;

	t34 = (x157==(x158^(x159*x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x165 = 21;
	static int8_t x166 = INT8_MAX;
	int32_t x167 = 32745;
	int32_t x168 = 0;
	int32_t t35 = -2599;

	t35 = (x165==(x166^(x167*x168)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x173 = INT64_MAX;
	int16_t x176 = 3366;

	t36 = (x173==(x174^(x175*x176)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x177 = INT32_MAX;
	uint8_t x178 = UINT8_MAX;
	int64_t x179 = -1LL;
	static uint8_t x180 = UINT8_MAX;
	int32_t t37 = -137000;

	t37 = (x177==(x178^(x179*x180)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = INT16_MIN;
	static uint8_t x187 = 52U;
	uint64_t x188 = 156LLU;
	static int32_t t38 = -64;

	t38 = (x185==(x186^(x187*x188)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t39 = 322078;

	t39 = (x193==(x194^(x195*x196)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = INT16_MAX;
	int8_t x198 = -1;
	volatile int8_t x199 = INT8_MIN;
	uint16_t x200 = UINT16_MAX;
	int32_t t40 = -94;

	t40 = (x197==(x198^(x199*x200)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x205 = 58;
	static volatile int32_t x206 = -253688769;
	static int32_t x207 = -110341;
	volatile int32_t t41 = 120505;

	t41 = (x205==(x206^(x207*x208)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x209 = INT16_MAX;
	uint16_t x210 = UINT16_MAX;
	int64_t x212 = -769144LL;

	t42 = (x209==(x210^(x211*x212)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x213 = 33U;
	volatile int16_t x214 = INT16_MIN;
	static uint8_t x215 = 17U;
	int64_t x216 = -720550529118LL;
	int32_t t43 = 7;

	t43 = (x213==(x214^(x215*x216)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x217 = -1;
	static volatile int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MIN;
	volatile int32_t t44 = -1999;

	t44 = (x217==(x218^(x219*x220)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x221 = INT16_MIN;
	static uint8_t x223 = UINT8_MAX;
	uint32_t x224 = 220U;

	t45 = (x221==(x222^(x223*x224)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x225 = -53394559;
	static int16_t x226 = -4;
	uint64_t x227 = UINT64_MAX;
	uint64_t x228 = 88532748779491LLU;

	t46 = (x225==(x226^(x227*x228)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x229 = INT64_MIN;
	uint8_t x230 = UINT8_MAX;
	uint32_t x231 = 617568315U;
	int32_t x232 = INT32_MAX;

	t47 = (x229==(x230^(x231*x232)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x233 = UINT64_MAX;
	uint32_t x234 = 836377149U;
	uint32_t x235 = 4U;
	int64_t x236 = 64112251898LL;
	volatile int32_t t48 = 3;

	t48 = (x233==(x234^(x235*x236)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = -1;
	uint32_t x238 = UINT32_MAX;
	static int32_t x239 = 21804391;
	int8_t x240 = -4;

	t49 = (x237==(x238^(x239*x240)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x241 = 0U;
	int64_t x242 = INT64_MAX;
	int32_t x244 = -2013;
	int32_t t50 = -2;

	t50 = (x241==(x242^(x243*x244)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = -2554;
	int8_t x250 = INT8_MAX;
	int8_t x251 = INT8_MIN;
	int32_t t51 = -204651;

	t51 = (x249==(x250^(x251*x252)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x257 = 412;
	volatile int8_t x258 = INT8_MAX;
	int8_t x259 = INT8_MIN;
	volatile int16_t x260 = -3;

	t52 = (x257==(x258^(x259*x260)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = -119186474818513LL;
	volatile uint16_t x263 = 617U;
	int8_t x264 = INT8_MAX;
	int32_t t53 = -123190;

	t53 = (x261==(x262^(x263*x264)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x270 = 10;
	int8_t x271 = 4;
	volatile int32_t t54 = -9338;

	t54 = (x269==(x270^(x271*x272)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x274 = 7327845LLU;
	volatile int32_t x275 = -1;
	volatile int16_t x276 = 0;
	int32_t t55 = -129619602;

	t55 = (x273==(x274^(x275*x276)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x282 = 13U;
	volatile uint8_t x284 = UINT8_MAX;
	int32_t t56 = 5929146;

	t56 = (x281==(x282^(x283*x284)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = -9;
	volatile uint16_t x290 = 134U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t57 = -28362238;

	t57 = (x289==(x290^(x291*x292)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x305 = 3243LLU;
	uint32_t x306 = 721033U;
	volatile int64_t x307 = INT64_MAX;
	int8_t x308 = 1;
	volatile int32_t t58 = 52730713;

	t58 = (x305==(x306^(x307*x308)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x309 = UINT8_MAX;
	uint8_t x310 = UINT8_MAX;
	volatile int8_t x311 = INT8_MIN;
	volatile uint32_t x312 = 51U;

	t59 = (x309==(x310^(x311*x312)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x314 = UINT16_MAX;
	int16_t x316 = INT16_MIN;
	volatile int32_t t60 = -15126;

	t60 = (x313==(x314^(x315*x316)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x317 = 10U;
	int64_t x318 = INT64_MAX;
	volatile int16_t x319 = INT16_MIN;
	static uint32_t x320 = 21753464U;
	static int32_t t61 = -1633;

	t61 = (x317==(x318^(x319*x320)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x321 = 13204;
	static int32_t x323 = INT32_MAX;
	static int16_t x324 = -1;

	t62 = (x321==(x322^(x323*x324)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x328 = 351LL;
	static int32_t t63 = 6332378;

	t63 = (x325==(x326^(x327*x328)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x331 = 1;
	int8_t x332 = INT8_MAX;

	t64 = (x329==(x330^(x331*x332)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x333 = -1;
	volatile int16_t x334 = -6088;
	int64_t x335 = -6041LL;
	int32_t x336 = INT32_MIN;
	volatile int32_t t65 = 143;

	t65 = (x333==(x334^(x335*x336)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x337 = UINT32_MAX;
	int8_t x338 = 49;
	uint8_t x339 = 1U;
	uint64_t x340 = 234657850542LLU;
	volatile int32_t t66 = -1;

	t66 = (x337==(x338^(x339*x340)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x341 = -1;
	int8_t x342 = -4;
	uint8_t x343 = 4U;
	uint64_t x344 = 53795LLU;
	int32_t t67 = 341;

	t67 = (x341==(x342^(x343*x344)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x345 = 17795280192LLU;
	uint8_t x347 = 36U;
	int8_t x348 = INT8_MAX;
	volatile int32_t t68 = 22178;

	t68 = (x345==(x346^(x347*x348)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x349 = 2140U;
	uint8_t x351 = UINT8_MAX;
	volatile int16_t x352 = -6010;
	static int32_t t69 = -2;

	t69 = (x349==(x350^(x351*x352)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t t70 = 794;

	t70 = (x353==(x354^(x355*x356)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x357 = 547959533443LL;
	int16_t x358 = -9;
	static int64_t x360 = 520139755246833945LL;

	t71 = (x357==(x358^(x359*x360)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x361 = INT64_MIN;
	static uint8_t x362 = UINT8_MAX;
	uint8_t x363 = 87U;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t72 = -5;

	t72 = (x361==(x362^(x363*x364)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x369 = 13U;
	static uint8_t x370 = UINT8_MAX;
	int16_t x371 = INT16_MAX;
	uint32_t x372 = UINT32_MAX;
	static volatile int32_t t73 = -124073;

	t73 = (x369==(x370^(x371*x372)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x381 = 58U;
	uint32_t x382 = 6591393U;
	uint32_t x383 = 261720U;
	int64_t x384 = 16660739374972LL;
	int32_t t74 = 12;

	t74 = (x381==(x382^(x383*x384)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x385 = 1587LL;
	int8_t x386 = -1;
	int16_t x387 = -66;
	uint16_t x388 = 2273U;

	t75 = (x385==(x386^(x387*x388)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x393 = -1;
	int64_t x394 = INT64_MIN;
	int8_t x396 = -1;
	int32_t t76 = 15482995;

	t76 = (x393==(x394^(x395*x396)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x397 = 16705U;
	int16_t x398 = 5752;
	int64_t x399 = -1LL;
	int64_t x400 = -1LL;
	volatile int32_t t77 = 1021583244;

	t77 = (x397==(x398^(x399*x400)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MAX;
	volatile uint8_t x404 = UINT8_MAX;
	volatile int32_t t78 = -1717;

	t78 = (x401==(x402^(x403*x404)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x405 = UINT16_MAX;
	uint32_t x406 = UINT32_MAX;
	static volatile uint16_t x408 = 3U;
	int32_t t79 = 264;

	t79 = (x405==(x406^(x407*x408)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x409 = 4030LL;
	uint64_t x410 = UINT64_MAX;
	volatile int16_t x411 = INT16_MIN;
	uint16_t x412 = 3U;

	t80 = (x409==(x410^(x411*x412)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x413 = 3284U;
	int8_t x414 = INT8_MAX;
	int16_t x415 = INT16_MIN;

	t81 = (x413==(x414^(x415*x416)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x422 = 4170174313LLU;
	static int8_t x423 = -5;
	uint8_t x424 = 26U;
	int32_t t82 = 2569049;

	t82 = (x421==(x422^(x423*x424)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x426 = -1;
	int64_t x427 = 974278331978LL;
	uint16_t x428 = 15044U;

	t83 = (x425==(x426^(x427*x428)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x429 = INT32_MIN;
	static int8_t x430 = -1;
	int64_t x431 = 451LL;
	int8_t x432 = INT8_MAX;
	int32_t t84 = 1;

	t84 = (x429==(x430^(x431*x432)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x434 = 7582186LL;
	static int8_t x436 = 1;

	t85 = (x433==(x434^(x435*x436)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x438 = 405U;
	int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MAX;
	static volatile int32_t t86 = -157208;

	t86 = (x437==(x438^(x439*x440)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x441 = INT32_MIN;
	uint64_t x443 = 375099668943063LLU;
	int64_t x444 = INT64_MIN;
	volatile int32_t t87 = 1;

	t87 = (x441==(x442^(x443*x444)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x450 = UINT32_MAX;
	int16_t x451 = -1;
	uint32_t x452 = UINT32_MAX;
	volatile int32_t t88 = -181;

	t88 = (x449==(x450^(x451*x452)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x453 = 126U;
	int64_t x454 = INT64_MIN;
	static int16_t x455 = -1;
	int16_t x456 = INT16_MAX;
	volatile int32_t t89 = -67061574;

	t89 = (x453==(x454^(x455*x456)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x459 = INT8_MIN;
	uint32_t x460 = UINT32_MAX;
	int32_t t90 = 613;

	t90 = (x457==(x458^(x459*x460)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x461 = INT64_MAX;
	uint64_t x462 = UINT64_MAX;
	uint16_t x463 = 11U;
	static volatile int8_t x464 = -1;
	int32_t t91 = -3091935;

	t91 = (x461==(x462^(x463*x464)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x466 = -1;
	volatile int16_t x467 = -44;
	uint16_t x468 = 729U;
	static volatile int32_t t92 = 1187;

	t92 = (x465==(x466^(x467*x468)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x469 = INT16_MIN;
	int64_t x471 = -1LL;
	int8_t x472 = 5;
	static volatile int32_t t93 = -11446328;

	t93 = (x469==(x470^(x471*x472)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x473 = UINT16_MAX;
	uint8_t x474 = 7U;
	int8_t x475 = -1;

	t94 = (x473==(x474^(x475*x476)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x481 = 1U;
	uint8_t x482 = 8U;
	int8_t x483 = -1;
	static volatile int32_t t95 = 6;

	t95 = (x481==(x482^(x483*x484)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x486 = INT32_MIN;
	int8_t x487 = 2;
	int16_t x488 = INT16_MAX;
	static volatile int32_t t96 = 0;

	t96 = (x485==(x486^(x487*x488)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x489 = 49;
	uint8_t x490 = UINT8_MAX;
	uint32_t x492 = 18822811U;
	volatile int32_t t97 = 100;

	t97 = (x489==(x490^(x491*x492)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x494 = 208602860815402LLU;
	int8_t x495 = INT8_MIN;
	int8_t x496 = INT8_MIN;
	int32_t t98 = 0;

	t98 = (x493==(x494^(x495*x496)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x497 = INT16_MIN;
	volatile uint16_t x499 = UINT16_MAX;
	uint64_t x500 = 898LLU;
	int32_t t99 = -97;

	t99 = (x497==(x498^(x499*x500)));

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

