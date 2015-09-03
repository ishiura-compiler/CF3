#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MIN;
int64_t x2 = -12LL;
uint8_t x3 = UINT8_MAX;
static uint32_t x5 = 172125U;
volatile uint8_t x8 = 0U;
int8_t x37 = INT8_MIN;
uint64_t x39 = UINT64_MAX;
int64_t x48 = INT64_MAX;
static int32_t x63 = INT32_MIN;
static volatile int8_t x65 = -1;
int16_t x71 = -1;
uint16_t x74 = UINT16_MAX;
int16_t x104 = INT16_MAX;
int16_t x106 = 1;
volatile int32_t x108 = 124991;
uint32_t x109 = 1170365662U;
int64_t x117 = INT64_MIN;
volatile int32_t t23 = 243;
static int64_t x125 = -255823390105703LL;
volatile uint32_t x126 = 974U;
volatile uint16_t x133 = 196U;
static int32_t x141 = 486751364;
int32_t t29 = -16367804;
uint32_t x187 = UINT32_MAX;
static uint16_t x192 = 0U;
uint64_t x195 = 1600630081172656LLU;
static volatile int32_t t36 = 10560581;
int32_t x201 = INT32_MIN;
uint16_t x202 = 12824U;
int64_t x203 = 18092540549161LL;
uint64_t x211 = 106LLU;
int8_t x212 = 0;
int64_t x213 = INT64_MIN;
int32_t t39 = -20658286;
int8_t x219 = INT8_MAX;
int32_t x220 = -1;
int32_t t42 = -1758;
volatile uint16_t x233 = UINT16_MAX;
static int8_t x234 = 0;
volatile int64_t x244 = -1LL;
int32_t t44 = 5;
volatile int32_t x251 = -1;
volatile int32_t t45 = 2618138;
volatile int64_t x261 = INT64_MAX;
static volatile int32_t t49 = -62;
volatile int32_t t51 = -75762;
int64_t x284 = INT64_MIN;
volatile uint16_t x285 = UINT16_MAX;
uint8_t x287 = UINT8_MAX;
static int16_t x289 = -47;
static int8_t x292 = -1;
int32_t x294 = -1;
uint8_t x303 = 0U;
uint32_t x314 = 107977630U;
int64_t x315 = -1LL;
int16_t x320 = -1;
int32_t t62 = -6;
uint32_t x329 = 437621U;
int8_t x332 = INT8_MAX;
static int32_t t64 = -12;
static uint32_t x348 = UINT32_MAX;
int8_t x354 = INT8_MIN;
volatile uint64_t x361 = UINT64_MAX;
static int16_t x381 = INT16_MAX;
int32_t t76 = 17;
volatile int64_t x385 = INT64_MIN;
uint16_t x389 = 1314U;
volatile int16_t x406 = -1;
uint8_t x410 = 5U;
volatile uint32_t x419 = UINT32_MAX;
int8_t x431 = 1;
int32_t x434 = -1;
int32_t t89 = -16099;
volatile int8_t x455 = INT8_MIN;
int8_t x456 = INT8_MIN;
static int16_t x459 = INT16_MIN;
volatile int32_t t91 = -180;
int32_t x479 = INT32_MAX;
volatile int32_t t93 = -155;
static volatile uint64_t x481 = UINT64_MAX;
static int8_t x488 = -1;
int64_t x494 = -1LL;
uint64_t x495 = 208498343LLU;
int16_t x499 = -30;
volatile int32_t t98 = 1719827;


void f0(void) {
	int16_t x4 = -1;
	static volatile int32_t t0 = 7022539;

	t0 = ((x1<(x2*x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = 0;
	int32_t x7 = INT32_MAX;
	volatile int32_t t1 = -14552;

	t1 = ((x5<(x6*x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int64_t x14 = -1LL;
	uint8_t x15 = 50U;
	int16_t x16 = -5;
	static int32_t t2 = -245;

	t2 = ((x13<(x14*x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 17559U;
	uint16_t x18 = UINT16_MAX;
	volatile uint8_t x19 = 16U;
	int32_t x20 = INT32_MAX;
	static volatile int32_t t3 = -1;

	t3 = ((x17<(x18*x19))<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MIN;
	uint64_t x23 = UINT64_MAX;
	int64_t x24 = 9778005879LL;
	int32_t t4 = 23202854;

	t4 = ((x21<(x22*x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = UINT32_MAX;
	static int16_t x26 = -1;
	int32_t x27 = -952605;
	static volatile int8_t x28 = INT8_MIN;
	volatile int32_t t5 = 5477456;

	t5 = ((x25<(x26*x27))<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = 11512U;
	int16_t x30 = INT16_MIN;
	int16_t x31 = 45;
	volatile int16_t x32 = -1619;
	volatile int32_t t6 = 32;

	t6 = ((x29<(x30*x31))<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x33 = 64U;
	volatile int8_t x34 = -29;
	uint64_t x35 = 582368872881LLU;
	uint8_t x36 = 2U;
	static int32_t t7 = -5996122;

	t7 = ((x33<(x34*x35))<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x38 = 136550454449LLU;
	int64_t x40 = -1LL;
	int32_t t8 = 9;

	t8 = ((x37<(x38*x39))<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = UINT64_MAX;
	int16_t x42 = INT16_MAX;
	uint8_t x43 = 0U;
	static volatile uint64_t x44 = 5379766341LLU;
	static volatile int32_t t9 = 352174;

	t9 = ((x41<(x42*x43))<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = 50;
	volatile int8_t x46 = INT8_MIN;
	int8_t x47 = -1;
	int32_t t10 = -193510054;

	t10 = ((x45<(x46*x47))<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	uint16_t x50 = UINT16_MAX;
	int8_t x51 = 21;
	static uint16_t x52 = UINT16_MAX;
	int32_t t11 = -31;

	t11 = ((x49<(x50*x51))<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = -1;
	uint32_t x58 = 28663U;
	uint32_t x59 = 1493U;
	volatile uint32_t x60 = 454624U;
	static int32_t t12 = -3;

	t12 = ((x57<(x58*x59))<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x61 = UINT32_MAX;
	uint64_t x62 = 1615864714LLU;
	int8_t x64 = -1;
	volatile int32_t t13 = -9075;

	t13 = ((x61<(x62*x63))<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x66 = 45402604U;
	volatile uint8_t x67 = 18U;
	int32_t x68 = 156582;
	volatile int32_t t14 = -1574;

	t14 = ((x65<(x66*x67))<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	uint16_t x70 = UINT16_MAX;
	int16_t x72 = INT16_MIN;
	int32_t t15 = -9;

	t15 = ((x69<(x70*x71))<x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MAX;
	uint32_t x75 = 679334U;
	int8_t x76 = -3;
	volatile int32_t t16 = -51489;

	t16 = ((x73<(x74*x75))<x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 461330U;
	int16_t x82 = INT16_MAX;
	uint8_t x83 = UINT8_MAX;
	int8_t x84 = INT8_MAX;
	volatile int32_t t17 = -1207745;

	t17 = ((x81<(x82*x83))<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = -1;
	uint32_t x90 = UINT32_MAX;
	uint32_t x91 = 27587829U;
	volatile int64_t x92 = 1LL;
	volatile int32_t t18 = -2594;

	t18 = ((x89<(x90*x91))<x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x102 = 244541766109LL;
	uint16_t x103 = 316U;
	int32_t t19 = 108617646;

	t19 = ((x101<(x102*x103))<x104);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x105 = UINT8_MAX;
	int16_t x107 = INT16_MIN;
	volatile int32_t t20 = 444;

	t20 = ((x105<(x106*x107))<x108);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x110 = 1739075195U;
	static uint8_t x111 = UINT8_MAX;
	int32_t x112 = INT32_MAX;
	volatile int32_t t21 = -225272;

	t21 = ((x109<(x110*x111))<x112);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x113 = 53U;
	uint8_t x114 = UINT8_MAX;
	int64_t x115 = -66771487LL;
	uint8_t x116 = UINT8_MAX;
	int32_t t22 = 1895897;

	t22 = ((x113<(x114*x115))<x116);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x118 = 1U;
	uint32_t x119 = 12U;
	int8_t x120 = 4;

	t23 = ((x117<(x118*x119))<x120);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x127 = UINT8_MAX;
	volatile int8_t x128 = -1;
	volatile int32_t t24 = 14461;

	t24 = ((x125<(x126*x127))<x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x134 = -7;
	uint64_t x135 = 1LLU;
	static volatile uint8_t x136 = UINT8_MAX;
	int32_t t25 = 10662724;

	t25 = ((x133<(x134*x135))<x136);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x142 = UINT8_MAX;
	int8_t x143 = INT8_MAX;
	int32_t x144 = INT32_MIN;
	int32_t t26 = 13504374;

	t26 = ((x141<(x142*x143))<x144);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x145 = INT32_MIN;
	volatile uint8_t x146 = 72U;
	uint32_t x147 = UINT32_MAX;
	int64_t x148 = -51298443394760LL;
	int32_t t27 = -92057;

	t27 = ((x145<(x146*x147))<x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x149 = INT64_MIN;
	uint32_t x150 = 12433642U;
	static volatile int32_t x151 = -7;
	uint16_t x152 = 4U;
	int32_t t28 = 183;

	t28 = ((x149<(x150*x151))<x152);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = INT64_MAX;
	volatile int8_t x154 = 0;
	int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MAX;

	t29 = ((x153<(x154*x155))<x156);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x157 = UINT8_MAX;
	uint64_t x158 = 2124493482LLU;
	int8_t x159 = 1;
	uint64_t x160 = 1428573322578195002LLU;
	int32_t t30 = 65659199;

	t30 = ((x157<(x158*x159))<x160);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = INT64_MIN;
	uint32_t x162 = 3624802U;
	int16_t x163 = INT16_MAX;
	int64_t x164 = 3277289LL;
	int32_t t31 = 204;

	t31 = ((x161<(x162*x163))<x164);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x165 = UINT16_MAX;
	uint8_t x166 = 8U;
	static uint32_t x167 = 64U;
	static int16_t x168 = -8;
	int32_t t32 = -6;

	t32 = ((x165<(x166*x167))<x168);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MAX;
	int8_t x188 = -12;
	volatile int32_t t33 = -118562581;

	t33 = ((x185<(x186*x187))<x188);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x189 = 35589U;
	int16_t x190 = INT16_MAX;
	int16_t x191 = 66;
	volatile int32_t t34 = 43944736;

	t34 = ((x189<(x190*x191))<x192);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x193 = -230899169LL;
	uint8_t x194 = 107U;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t35 = 13754672;

	t35 = ((x193<(x194*x195))<x196);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MIN;
	int64_t x199 = -1LL;
	int64_t x200 = INT64_MAX;

	t36 = ((x197<(x198*x199))<x200);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x204 = -181756563524267LL;
	int32_t t37 = 2;

	t37 = ((x201<(x202*x203))<x204);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x209 = INT32_MIN;
	volatile uint64_t x210 = UINT64_MAX;
	int32_t t38 = -309678;

	t38 = ((x209<(x210*x211))<x212);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x214 = 0U;
	int64_t x215 = INT64_MIN;
	int32_t x216 = -1;

	t39 = ((x213<(x214*x215))<x216);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x217 = UINT16_MAX;
	int8_t x218 = INT8_MAX;
	volatile int32_t t40 = -32077020;

	t40 = ((x217<(x218*x219))<x220);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = -399039445320986317LL;
	volatile int8_t x222 = INT8_MIN;
	uint16_t x223 = 16032U;
	static int64_t x224 = -1LL;
	static int32_t t41 = 41;

	t41 = ((x221<(x222*x223))<x224);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x225 = -5489LL;
	uint8_t x226 = 16U;
	static uint32_t x227 = 12499433U;
	volatile uint8_t x228 = 1U;

	t42 = ((x225<(x226*x227))<x228);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x235 = 130U;
	int32_t x236 = INT32_MIN;
	int32_t t43 = 5689918;

	t43 = ((x233<(x234*x235))<x236);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x241 = 10U;
	int16_t x242 = 42;
	volatile int32_t x243 = 7716509;

	t44 = ((x241<(x242*x243))<x244);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x249 = -1;
	int8_t x250 = -15;
	static volatile uint8_t x252 = 10U;

	t45 = ((x249<(x250*x251))<x252);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x253 = -1;
	int16_t x254 = -30;
	int16_t x255 = INT16_MIN;
	static uint32_t x256 = 115358764U;
	volatile int32_t t46 = 34316;

	t46 = ((x253<(x254*x255))<x256);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x257 = 13U;
	int16_t x258 = INT16_MIN;
	static int64_t x259 = -1LL;
	int32_t x260 = -1;
	int32_t t47 = 13;

	t47 = ((x257<(x258*x259))<x260);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x262 = -1LL;
	uint64_t x263 = UINT64_MAX;
	uint64_t x264 = UINT64_MAX;
	static volatile int32_t t48 = -21;

	t48 = ((x261<(x262*x263))<x264);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x269 = -1;
	static int8_t x270 = INT8_MIN;
	int8_t x271 = -1;
	int8_t x272 = 0;

	t49 = ((x269<(x270*x271))<x272);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x273 = INT64_MIN;
	static int16_t x274 = INT16_MIN;
	int8_t x275 = 20;
	int64_t x276 = INT64_MIN;
	volatile int32_t t50 = 9533614;

	t50 = ((x273<(x274*x275))<x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x277 = INT8_MAX;
	volatile int64_t x278 = -1LL;
	uint16_t x279 = 0U;
	int32_t x280 = INT32_MIN;

	t51 = ((x277<(x278*x279))<x280);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x281 = UINT32_MAX;
	static int8_t x282 = -51;
	int8_t x283 = INT8_MIN;
	int32_t t52 = 40063566;

	t52 = ((x281<(x282*x283))<x284);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x286 = -1;
	uint16_t x288 = 2738U;
	volatile int32_t t53 = 30;

	t53 = ((x285<(x286*x287))<x288);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x290 = INT8_MIN;
	volatile uint16_t x291 = 266U;
	int32_t t54 = -1;

	t54 = ((x289<(x290*x291))<x292);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x293 = 434480003515986LLU;
	static int64_t x295 = -8997LL;
	int64_t x296 = -1LL;
	static int32_t t55 = -663;

	t55 = ((x293<(x294*x295))<x296);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = -1LL;
	int8_t x298 = -1;
	int16_t x299 = -1;
	static uint8_t x300 = 29U;
	int32_t t56 = -2664;

	t56 = ((x297<(x298*x299))<x300);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x301 = -11;
	uint64_t x302 = UINT64_MAX;
	volatile int32_t x304 = -1;
	int32_t t57 = 41;

	t57 = ((x301<(x302*x303))<x304);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x305 = 12;
	volatile int32_t x306 = INT32_MIN;
	uint8_t x307 = 0U;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t58 = -12249;

	t58 = ((x305<(x306*x307))<x308);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x309 = 251U;
	static int8_t x310 = -40;
	static uint32_t x311 = 7688U;
	int64_t x312 = 8LL;
	int32_t t59 = -11;

	t59 = ((x309<(x310*x311))<x312);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x313 = 55U;
	uint8_t x316 = UINT8_MAX;
	static volatile int32_t t60 = 326385;

	t60 = ((x313<(x314*x315))<x316);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x317 = UINT16_MAX;
	int64_t x318 = -1LL;
	volatile int64_t x319 = INT64_MAX;
	static int32_t t61 = 7821;

	t61 = ((x317<(x318*x319))<x320);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x325 = INT64_MIN;
	int8_t x326 = -1;
	static int8_t x327 = 1;
	uint64_t x328 = 3246491LLU;

	t62 = ((x325<(x326*x327))<x328);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x330 = INT16_MIN;
	volatile uint16_t x331 = UINT16_MAX;
	volatile int32_t t63 = -830429350;

	t63 = ((x329<(x330*x331))<x332);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x333 = -1;
	int16_t x334 = 3;
	int8_t x335 = 0;
	uint8_t x336 = 12U;

	t64 = ((x333<(x334*x335))<x336);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 41430U;
	volatile int32_t x339 = INT32_MIN;
	int8_t x340 = INT8_MIN;
	volatile int32_t t65 = -482;

	t65 = ((x337<(x338*x339))<x340);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x341 = INT32_MIN;
	static uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MIN;
	volatile uint32_t x344 = UINT32_MAX;
	static volatile int32_t t66 = 20756;

	t66 = ((x341<(x342*x343))<x344);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x345 = INT64_MIN;
	uint64_t x346 = 325432558LLU;
	int64_t x347 = INT64_MIN;
	int32_t t67 = 10900575;

	t67 = ((x345<(x346*x347))<x348);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x349 = INT16_MAX;
	int32_t x350 = -10;
	uint64_t x351 = 185336LLU;
	int16_t x352 = INT16_MIN;
	volatile int32_t t68 = 719910;

	t68 = ((x349<(x350*x351))<x352);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x353 = INT32_MIN;
	uint8_t x355 = 112U;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t69 = -39128;

	t69 = ((x353<(x354*x355))<x356);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x357 = UINT8_MAX;
	uint8_t x358 = UINT8_MAX;
	int8_t x359 = -1;
	int8_t x360 = -1;
	int32_t t70 = 4449687;

	t70 = ((x357<(x358*x359))<x360);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x362 = 8650705797726438LLU;
	int64_t x363 = INT64_MAX;
	static volatile uint16_t x364 = 724U;
	int32_t t71 = -751607;

	t71 = ((x361<(x362*x363))<x364);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x365 = UINT64_MAX;
	int32_t x366 = INT32_MAX;
	static uint64_t x367 = 64294656224138LLU;
	static volatile uint16_t x368 = 3U;
	int32_t t72 = 693739;

	t72 = ((x365<(x366*x367))<x368);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x369 = 0;
	volatile int8_t x370 = -1;
	volatile int8_t x371 = -2;
	static uint16_t x372 = UINT16_MAX;
	int32_t t73 = -20;

	t73 = ((x369<(x370*x371))<x372);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x373 = UINT32_MAX;
	uint8_t x374 = 30U;
	volatile uint64_t x375 = 2661225LLU;
	int32_t x376 = INT32_MIN;
	volatile int32_t t74 = 7915;

	t74 = ((x373<(x374*x375))<x376);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x377 = INT32_MIN;
	static int32_t x378 = -1;
	int8_t x379 = INT8_MAX;
	int32_t x380 = INT32_MIN;
	int32_t t75 = -368196849;

	t75 = ((x377<(x378*x379))<x380);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x382 = 0;
	int64_t x383 = -5435LL;
	volatile int32_t x384 = INT32_MIN;

	t76 = ((x381<(x382*x383))<x384);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MIN;
	int16_t x388 = -1;
	static volatile int32_t t77 = 1;

	t77 = ((x385<(x386*x387))<x388);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x390 = INT8_MAX;
	int16_t x391 = -1784;
	static int64_t x392 = -1LL;
	int32_t t78 = 0;

	t78 = ((x389<(x390*x391))<x392);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x393 = INT32_MIN;
	static int32_t x394 = INT32_MIN;
	uint64_t x395 = UINT64_MAX;
	int64_t x396 = INT64_MIN;
	int32_t t79 = 78;

	t79 = ((x393<(x394*x395))<x396);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x397 = INT64_MIN;
	int16_t x398 = 5481;
	uint64_t x399 = 1LLU;
	uint64_t x400 = 50290502168LLU;
	volatile int32_t t80 = -1;

	t80 = ((x397<(x398*x399))<x400);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x405 = 0U;
	volatile int8_t x407 = 3;
	int64_t x408 = -15225257841LL;
	int32_t t81 = 4;

	t81 = ((x405<(x406*x407))<x408);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x409 = 83U;
	uint64_t x411 = 7LLU;
	int8_t x412 = INT8_MAX;
	int32_t t82 = 433320;

	t82 = ((x409<(x410*x411))<x412);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x413 = 31;
	uint32_t x414 = UINT32_MAX;
	int64_t x415 = -1LL;
	int64_t x416 = -1LL;
	int32_t t83 = 270;

	t83 = ((x413<(x414*x415))<x416);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x417 = -1;
	uint16_t x418 = 9159U;
	int64_t x420 = INT64_MIN;
	int32_t t84 = 0;

	t84 = ((x417<(x418*x419))<x420);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x429 = INT8_MAX;
	uint64_t x430 = UINT64_MAX;
	int32_t x432 = -1;
	volatile int32_t t85 = -6397;

	t85 = ((x429<(x430*x431))<x432);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x433 = -1989;
	uint32_t x435 = 345U;
	static int64_t x436 = INT64_MAX;
	int32_t t86 = -83529486;

	t86 = ((x433<(x434*x435))<x436);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x437 = 11U;
	int64_t x438 = -1LL;
	volatile int8_t x439 = INT8_MAX;
	uint64_t x440 = 571566729923LLU;
	static volatile int32_t t87 = -334;

	t87 = ((x437<(x438*x439))<x440);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x445 = -1LL;
	static volatile uint64_t x446 = 247958974LLU;
	static volatile uint16_t x447 = 1U;
	int64_t x448 = 60127LL;
	volatile int32_t t88 = -820930214;

	t88 = ((x445<(x446*x447))<x448);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x449 = INT32_MIN;
	volatile int16_t x450 = INT16_MIN;
	static uint16_t x451 = UINT16_MAX;
	volatile uint32_t x452 = UINT32_MAX;

	t89 = ((x449<(x450*x451))<x452);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x453 = 8136U;
	int16_t x454 = 3421;
	static volatile int32_t t90 = -149;

	t90 = ((x453<(x454*x455))<x456);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x457 = 28205U;
	volatile uint32_t x458 = UINT32_MAX;
	int32_t x460 = INT32_MAX;

	t91 = ((x457<(x458*x459))<x460);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x461 = -1LL;
	int64_t x462 = -1LL;
	int8_t x463 = -9;
	int64_t x464 = -1LL;
	int32_t t92 = -316601225;

	t92 = ((x461<(x462*x463))<x464);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x477 = 774400896818916532LLU;
	uint32_t x478 = UINT32_MAX;
	static volatile uint16_t x480 = 7U;

	t93 = ((x477<(x478*x479))<x480);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x482 = 63U;
	int8_t x483 = INT8_MIN;
	int32_t x484 = INT32_MIN;
	static volatile int32_t t94 = 124407;

	t94 = ((x481<(x482*x483))<x484);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x485 = INT8_MAX;
	int8_t x486 = 3;
	volatile int16_t x487 = INT16_MAX;
	int32_t t95 = -7;

	t95 = ((x485<(x486*x487))<x488);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x489 = -1LL;
	uint32_t x490 = 30U;
	volatile uint32_t x491 = 2678U;
	static int64_t x492 = INT64_MIN;
	int32_t t96 = 65;

	t96 = ((x489<(x490*x491))<x492);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x493 = 62U;
	int16_t x496 = INT16_MIN;
	static int32_t t97 = -492;

	t97 = ((x493<(x494*x495))<x496);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x497 = INT64_MIN;
	volatile int8_t x498 = -17;
	int8_t x500 = INT8_MAX;

	t98 = ((x497<(x498*x499))<x500);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x509 = 792;
	static int64_t x510 = -1LL;
	int8_t x511 = -1;
	uint32_t x512 = 98U;
	int32_t t99 = 199;

	t99 = ((x509<(x510*x511))<x512);

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

