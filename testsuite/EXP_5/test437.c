#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
volatile int32_t t3 = 137227;
int8_t x36 = -1;
volatile int16_t x37 = -4786;
volatile int32_t t7 = -2;
volatile int32_t t8 = -158655;
uint8_t x54 = 42U;
volatile int32_t t10 = -4094;
int64_t x65 = 64194026862LL;
volatile int32_t t11 = 206;
int16_t x70 = -1;
int32_t x85 = -512577;
int8_t x102 = 36;
static int8_t x104 = -1;
volatile uint32_t x115 = 125159U;
uint8_t x118 = UINT8_MAX;
int32_t t21 = -123366266;
volatile int8_t x125 = INT8_MAX;
uint64_t x127 = 3977766633144368920LLU;
volatile int32_t x128 = -2319396;
int32_t t22 = -11131;
int8_t x132 = -10;
int8_t x138 = INT8_MAX;
static int64_t x144 = INT64_MAX;
int64_t x159 = -1LL;
int8_t x162 = INT8_MAX;
int32_t t31 = -150;
uint32_t x176 = UINT32_MAX;
uint8_t x180 = 5U;
int64_t x181 = INT64_MAX;
static uint32_t x185 = UINT32_MAX;
int16_t x195 = 7;
int64_t x196 = 150167LL;
int16_t x203 = INT16_MIN;
uint32_t x204 = UINT32_MAX;
int32_t t43 = -2308203;
volatile int8_t x225 = 31;
volatile int32_t t45 = 28101;
int16_t x232 = -2699;
int32_t t47 = 64;
uint64_t x243 = UINT64_MAX;
int32_t x244 = 259429;
static volatile uint64_t x255 = 51399381LLU;
int16_t x257 = -3044;
volatile int64_t x260 = 0LL;
int32_t t52 = -5;
int8_t x269 = 20;
volatile int32_t t57 = -90496;
int64_t x294 = -515508056300LL;
int16_t x295 = INT16_MAX;
volatile uint16_t x308 = UINT16_MAX;
volatile int8_t x311 = -5;
volatile int32_t t62 = 213894587;
int8_t x314 = INT8_MAX;
uint32_t x316 = 22303078U;
int64_t x323 = -109731104526308LL;
volatile int16_t x338 = -1;
int8_t x339 = -1;
int64_t x346 = -598LL;
uint64_t x347 = 157084289713128944LLU;
int16_t x348 = 1;
int64_t x358 = INT64_MAX;
volatile int32_t t72 = -11566;
uint16_t x373 = 29654U;
static int32_t x375 = 1818;
static int16_t x379 = -1;
volatile int16_t x391 = INT16_MIN;
uint16_t x392 = UINT16_MAX;
int16_t x402 = 1;
static int8_t x404 = 0;
static int16_t x407 = INT16_MIN;
int8_t x409 = INT8_MAX;
static int32_t x418 = INT32_MIN;
volatile int32_t t82 = 1296;
int16_t x432 = INT16_MIN;
volatile int32_t t84 = -44;
int32_t x433 = -1;
static uint32_t x434 = 28U;
int16_t x436 = 17;
int16_t x449 = -3880;
uint32_t x451 = UINT32_MAX;
volatile int32_t t88 = 826465;
int32_t t91 = 15;
uint64_t x473 = 330827675430713373LLU;
volatile int32_t t93 = -12409647;
volatile int8_t x500 = -24;
int8_t x505 = INT8_MIN;
int32_t x508 = INT32_MAX;
static int32_t t96 = 824646;
volatile int32_t t98 = -62878;
volatile int64_t x519 = INT64_MAX;


void f0(void) {
	int16_t x1 = 14;
	static int64_t x2 = -1LL;
	int8_t x3 = INT8_MAX;
	static int32_t t0 = 1846120;

	t0 = (x1==((x2*x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 8;
	static uint8_t x6 = 1U;
	int16_t x7 = INT16_MAX;
	static uint8_t x8 = 1U;
	volatile int32_t t1 = 61567458;

	t1 = (x5==((x6*x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -2;
	static volatile uint8_t x10 = UINT8_MAX;
	int16_t x11 = INT16_MAX;
	static volatile int16_t x12 = -31;
	volatile int32_t t2 = 1;

	t2 = (x9==((x10*x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	uint64_t x18 = 3571631914815789LLU;
	uint32_t x19 = UINT32_MAX;
	uint64_t x20 = 6950959756073LLU;

	t3 = (x17==((x18*x19)==x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	volatile uint16_t x22 = 5U;
	volatile int8_t x23 = INT8_MIN;
	static int8_t x24 = INT8_MIN;
	static int32_t t4 = -606;

	t4 = (x21==((x22*x23)==x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1LL;
	int8_t x30 = INT8_MIN;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = INT16_MIN;
	int32_t t5 = 4;

	t5 = (x29==((x30*x31)==x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = 122651U;
	uint8_t x34 = 4U;
	uint64_t x35 = UINT64_MAX;
	int32_t t6 = 0;

	t6 = (x33==((x34*x35)==x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x38 = 20218U;
	int64_t x39 = 1000LL;
	static uint8_t x40 = 57U;

	t7 = (x37==((x38*x39)==x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MIN;
	int8_t x42 = -1;
	int16_t x43 = INT16_MIN;
	static volatile uint16_t x44 = 31300U;

	t8 = (x41==((x42*x43)==x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 3734U;
	static int8_t x55 = INT8_MAX;
	int64_t x56 = -1LL;
	volatile int32_t t9 = -91328222;

	t9 = (x53==((x54*x55)==x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -1;
	uint32_t x58 = 403U;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 2829U;

	t10 = (x57==((x58*x59)==x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x66 = INT8_MIN;
	uint32_t x67 = UINT32_MAX;
	static volatile int64_t x68 = INT64_MIN;

	t11 = (x65==((x66*x67)==x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = -29434582854653LL;
	volatile int8_t x71 = INT8_MAX;
	int8_t x72 = INT8_MIN;
	static int32_t t12 = -25440;

	t12 = (x69==((x70*x71)==x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x77 = INT64_MIN;
	uint32_t x78 = 13U;
	static int32_t x79 = 328;
	int64_t x80 = -1LL;
	int32_t t13 = 1;

	t13 = (x77==((x78*x79)==x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MIN;
	uint64_t x83 = UINT64_MAX;
	volatile uint32_t x84 = UINT32_MAX;
	int32_t t14 = -28943;

	t14 = (x81==((x82*x83)==x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x86 = -1;
	uint16_t x87 = 4U;
	static int8_t x88 = INT8_MAX;
	static int32_t t15 = -55671;

	t15 = (x85==((x86*x87)==x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	int8_t x95 = -1;
	int8_t x96 = -1;
	int32_t t16 = 113;

	t16 = (x93==((x94*x95)==x96));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x97 = UINT8_MAX;
	int8_t x98 = 1;
	static uint64_t x99 = UINT64_MAX;
	uint32_t x100 = 2U;
	volatile int32_t t17 = -25;

	t17 = (x97==((x98*x99)==x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x101 = 158546U;
	static volatile int32_t x103 = -1022;
	int32_t t18 = 0;

	t18 = (x101==((x102*x103)==x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x109 = UINT64_MAX;
	static int16_t x110 = -93;
	int8_t x111 = 56;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t19 = 5232;

	t19 = (x109==((x110*x111)==x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = 5;
	uint8_t x114 = UINT8_MAX;
	static int8_t x116 = INT8_MAX;
	int32_t t20 = 1849;

	t20 = (x113==((x114*x115)==x116));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x117 = 777;
	volatile int8_t x119 = INT8_MIN;
	volatile uint16_t x120 = 87U;

	t21 = (x117==((x118*x119)==x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x126 = INT64_MIN;

	t22 = (x125==((x126*x127)==x128));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x129 = -1803;
	static volatile uint64_t x130 = UINT64_MAX;
	int8_t x131 = INT8_MIN;
	static volatile int32_t t23 = -1081;

	t23 = (x129==((x130*x131)==x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x133 = 24435859;
	uint64_t x134 = UINT64_MAX;
	static int64_t x135 = -34498948578923641LL;
	int16_t x136 = INT16_MAX;
	static int32_t t24 = 0;

	t24 = (x133==((x134*x135)==x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = -4427324361LL;
	int16_t x139 = 3811;
	static uint8_t x140 = UINT8_MAX;
	volatile int32_t t25 = -1641094;

	t25 = (x137==((x138*x139)==x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x141 = 90U;
	volatile int16_t x142 = INT16_MIN;
	int16_t x143 = -1;
	int32_t t26 = 0;

	t26 = (x141==((x142*x143)==x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x149 = INT8_MIN;
	static int8_t x150 = INT8_MIN;
	uint8_t x151 = 4U;
	int8_t x152 = -1;
	int32_t t27 = -36203;

	t27 = (x149==((x150*x151)==x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x153 = UINT32_MAX;
	static int32_t x154 = -17913;
	static int32_t x155 = 1385;
	int32_t x156 = -1;
	int32_t t28 = 612942215;

	t28 = (x153==((x154*x155)==x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x157 = INT32_MAX;
	int8_t x158 = 0;
	volatile uint16_t x160 = 1U;
	int32_t t29 = 40237819;

	t29 = (x157==((x158*x159)==x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = -1;
	uint32_t x163 = 240180U;
	uint32_t x164 = UINT32_MAX;
	int32_t t30 = 1411826;

	t30 = (x161==((x162*x163)==x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x165 = UINT32_MAX;
	int64_t x166 = INT64_MAX;
	uint64_t x167 = 3333LLU;
	int32_t x168 = INT32_MIN;

	t31 = (x165==((x166*x167)==x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = 2LL;
	int8_t x170 = 3;
	static uint32_t x171 = UINT32_MAX;
	int16_t x172 = -1;
	static volatile int32_t t32 = 3;

	t32 = (x169==((x170*x171)==x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = INT64_MAX;
	volatile int16_t x174 = -14332;
	uint32_t x175 = UINT32_MAX;
	int32_t t33 = -4337207;

	t33 = (x173==((x174*x175)==x176));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x177 = 883199596LLU;
	static int16_t x178 = 2;
	uint16_t x179 = 0U;
	static int32_t t34 = 3597;

	t34 = (x177==((x178*x179)==x180));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x182 = -5990390953361LL;
	int8_t x183 = -2;
	uint64_t x184 = 211214752337547LLU;
	int32_t t35 = 84616543;

	t35 = (x181==((x182*x183)==x184));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x186 = -1;
	uint64_t x187 = 32847204715701LLU;
	uint16_t x188 = 5584U;
	int32_t t36 = 1833;

	t36 = (x185==((x186*x187)==x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x189 = -244807998154651LL;
	static int32_t x190 = -1;
	volatile int8_t x191 = -1;
	int8_t x192 = -7;
	volatile int32_t t37 = 117463;

	t37 = (x189==((x190*x191)==x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x193 = 2213U;
	volatile int64_t x194 = 1051745555806546986LL;
	static volatile int32_t t38 = 225646;

	t38 = (x193==((x194*x195)==x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x197 = -1LL;
	volatile uint16_t x198 = 206U;
	uint64_t x199 = 6552LLU;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t39 = -330073366;

	t39 = (x197==((x198*x199)==x200));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x201 = 1067U;
	volatile int8_t x202 = INT8_MIN;
	static volatile int32_t t40 = -85;

	t40 = (x201==((x202*x203)==x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	static int8_t x211 = INT8_MAX;
	volatile int32_t x212 = INT32_MIN;
	int32_t t41 = 13;

	t41 = (x209==((x210*x211)==x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = INT8_MAX;
	static volatile int8_t x214 = INT8_MIN;
	uint8_t x215 = 1U;
	static int64_t x216 = INT64_MAX;
	int32_t t42 = 121;

	t42 = (x213==((x214*x215)==x216));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x217 = 1U;
	static int32_t x218 = INT32_MIN;
	static uint32_t x219 = 1537U;
	uint32_t x220 = UINT32_MAX;

	t43 = (x217==((x218*x219)==x220));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x221 = -1;
	int64_t x222 = -1LL;
	volatile int32_t x223 = -1;
	int64_t x224 = -1LL;
	volatile int32_t t44 = -19;

	t44 = (x221==((x222*x223)==x224));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x226 = -385512;
	static int8_t x227 = 1;
	int16_t x228 = INT16_MAX;

	t45 = (x225==((x226*x227)==x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x229 = UINT32_MAX;
	volatile uint64_t x230 = 60072466900239LLU;
	int8_t x231 = 1;
	volatile int32_t t46 = -198048;

	t46 = (x229==((x230*x231)==x232));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = INT32_MAX;
	int32_t x234 = 1;
	volatile int32_t x235 = -4153;
	static uint8_t x236 = UINT8_MAX;

	t47 = (x233==((x234*x235)==x236));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x237 = 5363531951223055770LLU;
	uint64_t x238 = 3076613758LLU;
	int16_t x239 = INT16_MAX;
	uint16_t x240 = UINT16_MAX;
	int32_t t48 = -147167259;

	t48 = (x237==((x238*x239)==x240));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x241 = 3821U;
	int64_t x242 = INT64_MIN;
	static int32_t t49 = 2022;

	t49 = (x241==((x242*x243)==x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x245 = INT16_MIN;
	volatile int64_t x246 = INT64_MAX;
	uint64_t x247 = 31171735672466265LLU;
	int64_t x248 = -11791157LL;
	static int32_t t50 = -24;

	t50 = (x245==((x246*x247)==x248));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MIN;
	volatile int32_t x256 = -3;
	volatile int32_t t51 = 35442638;

	t51 = (x253==((x254*x255)==x256));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x258 = 18409761LLU;
	volatile int64_t x259 = -35633LL;

	t52 = (x257==((x258*x259)==x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MIN;
	static int32_t x267 = 0;
	static uint32_t x268 = 630287305U;
	volatile int32_t t53 = 59865;

	t53 = (x265==((x266*x267)==x268));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x270 = -14;
	uint16_t x271 = 2U;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t54 = -4586;

	t54 = (x269==((x270*x271)==x272));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x277 = 102U;
	uint8_t x278 = 13U;
	int16_t x279 = 6826;
	volatile uint16_t x280 = 0U;
	static volatile int32_t t55 = -189504;

	t55 = (x277==((x278*x279)==x280));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x281 = 0U;
	static int16_t x282 = INT16_MIN;
	int8_t x283 = -1;
	volatile uint8_t x284 = UINT8_MAX;
	volatile int32_t t56 = -96282;

	t56 = (x281==((x282*x283)==x284));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x285 = INT64_MIN;
	static int16_t x286 = 0;
	uint16_t x287 = UINT16_MAX;
	uint64_t x288 = 14810017954497828LLU;

	t57 = (x285==((x286*x287)==x288));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x289 = -1;
	int16_t x290 = -1;
	uint32_t x291 = 156412642U;
	uint32_t x292 = 15U;
	static volatile int32_t t58 = 13582713;

	t58 = (x289==((x290*x291)==x292));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x293 = UINT16_MAX;
	volatile int32_t x296 = 799;
	volatile int32_t t59 = -393685;

	t59 = (x293==((x294*x295)==x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x301 = 73LLU;
	int8_t x302 = -1;
	static uint64_t x303 = UINT64_MAX;
	static uint32_t x304 = 701U;
	volatile int32_t t60 = -6;

	t60 = (x301==((x302*x303)==x304));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x305 = 12122529732136607LL;
	static uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 12U;
	int32_t t61 = 102;

	t61 = (x305==((x306*x307)==x308));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x309 = -1;
	int8_t x310 = -1;
	int16_t x312 = INT16_MIN;

	t62 = (x309==((x310*x311)==x312));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x313 = -1;
	int16_t x315 = INT16_MAX;
	int32_t t63 = -2394558;

	t63 = (x313==((x314*x315)==x316));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x321 = 2711775LLU;
	volatile int16_t x322 = 1302;
	volatile int64_t x324 = INT64_MAX;
	volatile int32_t t64 = 1;

	t64 = (x321==((x322*x323)==x324));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x325 = -7555290633525LL;
	volatile int64_t x326 = INT64_MAX;
	volatile int8_t x327 = -1;
	uint32_t x328 = 1820877U;
	volatile int32_t t65 = -1754018;

	t65 = (x325==((x326*x327)==x328));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x333 = -19;
	volatile int8_t x334 = 4;
	int8_t x335 = INT8_MIN;
	volatile int64_t x336 = -435690LL;
	int32_t t66 = 6358899;

	t66 = (x333==((x334*x335)==x336));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x337 = INT32_MAX;
	volatile int16_t x340 = -1;
	static volatile int32_t t67 = 0;

	t67 = (x337==((x338*x339)==x340));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = -1;
	int8_t x342 = INT8_MIN;
	int8_t x343 = 4;
	uint64_t x344 = UINT64_MAX;
	static int32_t t68 = 8;

	t68 = (x341==((x342*x343)==x344));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = INT16_MAX;
	int32_t t69 = 46432347;

	t69 = (x345==((x346*x347)==x348));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x353 = INT16_MAX;
	uint32_t x354 = 115183505U;
	uint8_t x355 = 53U;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t70 = -78857;

	t70 = (x353==((x354*x355)==x356));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x357 = INT64_MIN;
	static int32_t x359 = -1;
	uint16_t x360 = 52U;
	volatile int32_t t71 = -87593;

	t71 = (x357==((x358*x359)==x360));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x365 = 305;
	static uint64_t x366 = 100193073565LLU;
	uint8_t x367 = 3U;
	int16_t x368 = INT16_MIN;

	t72 = (x365==((x366*x367)==x368));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x374 = -648195;
	uint8_t x376 = 3U;
	volatile int32_t t73 = -22192;

	t73 = (x373==((x374*x375)==x376));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x377 = UINT16_MAX;
	volatile int32_t x378 = -1;
	volatile int8_t x380 = -15;
	volatile int32_t t74 = 258339014;

	t74 = (x377==((x378*x379)==x380));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x381 = 98411236091224012LLU;
	int16_t x382 = -758;
	int16_t x383 = 0;
	static int64_t x384 = INT64_MIN;
	int32_t t75 = 6934;

	t75 = (x381==((x382*x383)==x384));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x389 = 4U;
	volatile int8_t x390 = 0;
	volatile int32_t t76 = -10160940;

	t76 = (x389==((x390*x391)==x392));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x393 = 1901;
	int8_t x394 = INT8_MIN;
	volatile uint16_t x395 = 715U;
	int64_t x396 = 30632LL;
	int32_t t77 = -2;

	t77 = (x393==((x394*x395)==x396));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x401 = UINT32_MAX;
	uint32_t x403 = 12U;
	static volatile int32_t t78 = -32;

	t78 = (x401==((x402*x403)==x404));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x405 = 0U;
	int8_t x406 = -1;
	volatile int8_t x408 = -43;
	volatile int32_t t79 = -645857982;

	t79 = (x405==((x406*x407)==x408));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x410 = INT32_MAX;
	uint32_t x411 = 378446326U;
	int64_t x412 = INT64_MIN;
	static int32_t t80 = 5435;

	t80 = (x409==((x410*x411)==x412));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x417 = -1;
	uint64_t x419 = 1449801467LLU;
	int32_t x420 = 20588;
	volatile int32_t t81 = -14444;

	t81 = (x417==((x418*x419)==x420));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x421 = -1;
	static uint8_t x422 = UINT8_MAX;
	int64_t x423 = 662LL;
	int8_t x424 = 18;

	t82 = (x421==((x422*x423)==x424));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x425 = INT16_MIN;
	int32_t x426 = -1;
	int32_t x427 = -1;
	volatile uint16_t x428 = 27U;
	int32_t t83 = -2717896;

	t83 = (x425==((x426*x427)==x428));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x429 = INT8_MIN;
	uint32_t x430 = UINT32_MAX;
	uint64_t x431 = 517LLU;

	t84 = (x429==((x430*x431)==x432));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x435 = 27U;
	volatile int32_t t85 = 830827;

	t85 = (x433==((x434*x435)==x436));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = INT16_MIN;
	uint8_t x439 = 4U;
	int16_t x440 = 161;
	static int32_t t86 = -6999492;

	t86 = (x437==((x438*x439)==x440));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x445 = 532;
	uint32_t x446 = 1U;
	int32_t x447 = -43724;
	int8_t x448 = 29;
	volatile int32_t t87 = 96;

	t87 = (x445==((x446*x447)==x448));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x450 = INT32_MIN;
	volatile int64_t x452 = -1LL;

	t88 = (x449==((x450*x451)==x452));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x457 = INT8_MIN;
	volatile uint8_t x458 = 7U;
	static int8_t x459 = INT8_MIN;
	uint16_t x460 = 3925U;
	volatile int32_t t89 = -340285;

	t89 = (x457==((x458*x459)==x460));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x461 = 66U;
	uint32_t x462 = 1U;
	static int64_t x463 = INT64_MIN;
	volatile int32_t x464 = -1;
	static int32_t t90 = -3031;

	t90 = (x461==((x462*x463)==x464));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x469 = -1;
	int64_t x470 = 3128665315LL;
	uint16_t x471 = 591U;
	uint32_t x472 = UINT32_MAX;

	t91 = (x469==((x470*x471)==x472));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x474 = 1364;
	static int16_t x475 = -1;
	volatile uint32_t x476 = 18U;
	int32_t t92 = -123;

	t92 = (x473==((x474*x475)==x476));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x485 = INT8_MIN;
	int16_t x486 = INT16_MIN;
	int16_t x487 = -62;
	int16_t x488 = INT16_MIN;

	t93 = (x485==((x486*x487)==x488));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x497 = 31968U;
	int64_t x498 = -1LL;
	static int16_t x499 = -1;
	static volatile int32_t t94 = -40;

	t94 = (x497==((x498*x499)==x500));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x501 = 72001;
	int8_t x502 = INT8_MIN;
	uint8_t x503 = UINT8_MAX;
	int16_t x504 = INT16_MIN;
	volatile int32_t t95 = -2;

	t95 = (x501==((x502*x503)==x504));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x506 = UINT64_MAX;
	int16_t x507 = INT16_MIN;

	t96 = (x505==((x506*x507)==x508));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x509 = -28;
	static volatile int8_t x510 = INT8_MIN;
	static int16_t x511 = INT16_MIN;
	int32_t x512 = INT32_MIN;
	int32_t t97 = -81700979;

	t97 = (x509==((x510*x511)==x512));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x513 = 2U;
	int8_t x514 = -1;
	static int32_t x515 = INT32_MAX;
	static int64_t x516 = INT64_MAX;

	t98 = (x513==((x514*x515)==x516));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x517 = 11U;
	static int16_t x518 = -1;
	int8_t x520 = -1;
	int32_t t99 = -30279;

	t99 = (x517==((x518*x519)==x520));

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

