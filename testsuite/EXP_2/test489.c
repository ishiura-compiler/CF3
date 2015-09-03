#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int32_t t0 = -67;
int16_t x7 = INT16_MIN;
int16_t x9 = -2;
uint32_t x14 = 14U;
int16_t x18 = INT16_MIN;
int32_t x21 = INT32_MIN;
int32_t t6 = -46720;
int8_t x36 = -4;
int32_t t7 = -13739509;
static int32_t t9 = -6;
uint16_t x53 = 0U;
uint64_t x54 = 8167364358LLU;
static int32_t x71 = -679710742;
volatile int32_t x73 = INT32_MAX;
uint64_t x77 = UINT64_MAX;
static int64_t x84 = INT64_MAX;
volatile int32_t t18 = 18;
uint32_t x104 = 5U;
volatile uint8_t x117 = UINT8_MAX;
int64_t x127 = -1LL;
int32_t x134 = -23616;
static int16_t x136 = INT16_MAX;
int8_t x149 = -19;
int32_t x164 = -229102673;
static int16_t x167 = INT16_MIN;
volatile uint8_t x171 = 45U;
int32_t x186 = -1;
uint64_t x218 = 12LLU;
volatile uint32_t x222 = 694740U;
int32_t x224 = INT32_MIN;
volatile int32_t t39 = 21220079;
uint32_t x226 = 186102663U;
uint16_t x228 = 14215U;
uint32_t x230 = UINT32_MAX;
int16_t x231 = 252;
int64_t x233 = -5143880047LL;
int64_t x235 = -1LL;
static int32_t t43 = -518332736;
static volatile int8_t x252 = INT8_MIN;
int64_t x253 = INT64_MAX;
volatile int32_t t46 = 7624301;
static int8_t x272 = -1;
int32_t t50 = 33356993;
int32_t x279 = -1;
uint8_t x283 = UINT8_MAX;
uint32_t x285 = 25814405U;
static int32_t x289 = -2;
int32_t x312 = 172029;
int32_t t58 = -13996143;
static volatile int32_t t59 = 0;
int32_t t60 = 22827;
int8_t x326 = INT8_MIN;
volatile uint8_t x327 = 4U;
int64_t x328 = INT64_MIN;
int32_t x331 = INT32_MAX;
static int8_t x332 = INT8_MAX;
int8_t x336 = 1;
int16_t x342 = INT16_MIN;
int8_t x359 = 1;
int8_t x360 = -20;
volatile int32_t t68 = -6827;
volatile int32_t t69 = -567144096;
static int32_t x381 = INT32_MIN;
int8_t x382 = -1;
volatile uint32_t x387 = 25U;
int16_t x392 = -1048;
volatile int32_t t72 = -1024354;
int32_t x399 = -1;
static uint64_t x400 = 3608043805295662620LLU;
uint8_t x402 = UINT8_MAX;
static int8_t x406 = INT8_MIN;
uint16_t x410 = UINT16_MAX;
uint8_t x411 = UINT8_MAX;
uint64_t x412 = UINT64_MAX;
int16_t x413 = INT16_MIN;
int8_t x419 = -1;
int64_t x422 = -5453844LL;
int8_t x423 = 0;
volatile int32_t t80 = 6329;
uint16_t x425 = 1U;
int16_t x428 = -1;
volatile int32_t t82 = -3154007;
uint32_t x441 = 4U;
static volatile int32_t t84 = 1;
volatile uint8_t x456 = 0U;
static volatile int8_t x463 = INT8_MAX;
static uint8_t x466 = UINT8_MAX;
int16_t x467 = -1;
int16_t x472 = 9;
int8_t x473 = INT8_MAX;
uint64_t x474 = 28298845141LLU;
int16_t x479 = INT16_MIN;
volatile int32_t t90 = 57790;
uint8_t x482 = 24U;
int32_t x484 = INT32_MIN;
volatile int32_t t91 = -500606388;
int64_t x502 = 3041983LL;
volatile int32_t t94 = 338;
int8_t x508 = -1;
int16_t x513 = INT16_MIN;
volatile int16_t x515 = INT16_MAX;
int16_t x529 = INT16_MIN;
static int8_t x530 = 54;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int64_t x3 = -1LL;
	int16_t x4 = -1;

	t0 = ((x1|(x2*x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int8_t x6 = -1;
	int32_t x8 = -1;
	static int32_t t1 = 17730999;

	t1 = ((x5|(x6*x7))==x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	int16_t x11 = -727;
	volatile int16_t x12 = -21;
	int32_t t2 = -116087260;

	t2 = ((x9|(x10*x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int8_t x15 = INT8_MIN;
	uint64_t x16 = 2608943189145633154LLU;
	int32_t t3 = -12;

	t3 = ((x13|(x14*x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 13U;
	uint16_t x19 = UINT16_MAX;
	static int32_t x20 = -1;
	static int32_t t4 = -6;

	t4 = ((x17|(x18*x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -107;
	int32_t x23 = -1;
	static volatile int64_t x24 = INT64_MIN;
	volatile int32_t t5 = 23;

	t5 = ((x21|(x22*x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -34;
	volatile uint32_t x26 = UINT32_MAX;
	int8_t x27 = 6;
	volatile int16_t x28 = 11;

	t6 = ((x25|(x26*x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = INT8_MIN;
	volatile uint8_t x34 = 29U;
	uint32_t x35 = 10468138U;

	t7 = ((x33|(x34*x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 352U;
	int8_t x38 = 1;
	volatile uint32_t x39 = UINT32_MAX;
	static uint64_t x40 = 619277282LLU;
	int32_t t8 = -117127889;

	t8 = ((x37|(x38*x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	static uint16_t x42 = UINT16_MAX;
	int64_t x43 = -1LL;
	int8_t x44 = 31;

	t9 = ((x41|(x42*x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MIN;
	int64_t x46 = -42321LL;
	volatile int8_t x47 = INT8_MAX;
	static uint64_t x48 = 2004241523LLU;
	static int32_t t10 = 737231;

	t10 = ((x45|(x46*x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x55 = INT64_MIN;
	static uint8_t x56 = 65U;
	volatile int32_t t11 = -226;

	t11 = ((x53|(x54*x55))==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	uint64_t x58 = 688LLU;
	uint8_t x59 = 95U;
	static int8_t x60 = INT8_MAX;
	volatile int32_t t12 = -9;

	t12 = ((x57|(x58*x59))==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x61 = INT16_MIN;
	volatile uint32_t x62 = 12311824U;
	int8_t x63 = 2;
	int16_t x64 = -24;
	int32_t t13 = -2643875;

	t13 = ((x61|(x62*x63))==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = 83U;
	static int64_t x70 = -46LL;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t14 = -17682;

	t14 = ((x69|(x70*x71))==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x74 = 1U;
	int8_t x75 = -1;
	uint32_t x76 = UINT32_MAX;
	int32_t t15 = 30653657;

	t15 = ((x73|(x74*x75))==x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x78 = 370555942172355085LLU;
	uint8_t x79 = UINT8_MAX;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t16 = -2;

	t16 = ((x77|(x78*x79))==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = UINT16_MAX;
	volatile int8_t x82 = -51;
	uint32_t x83 = 51U;
	volatile int32_t t17 = 134;

	t17 = ((x81|(x82*x83))==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x89 = -1LL;
	int8_t x90 = INT8_MAX;
	int8_t x91 = -1;
	int8_t x92 = INT8_MIN;

	t18 = ((x89|(x90*x91))==x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x93 = -34;
	static volatile int64_t x94 = INT64_MIN;
	uint64_t x95 = 4516448LLU;
	static uint16_t x96 = UINT16_MAX;
	volatile int32_t t19 = 204;

	t19 = ((x93|(x94*x95))==x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x101 = 9009911069855LLU;
	int16_t x102 = INT16_MAX;
	volatile int32_t x103 = -520;
	int32_t t20 = 1170;

	t20 = ((x101|(x102*x103))==x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x118 = 31U;
	volatile uint32_t x119 = 3904U;
	int32_t x120 = 57465006;
	volatile int32_t t21 = -151307;

	t21 = ((x117|(x118*x119))==x120);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = UINT16_MAX;
	int8_t x122 = INT8_MAX;
	volatile uint64_t x123 = 28872LLU;
	static uint64_t x124 = 6390468235049LLU;
	int32_t t22 = 13296660;

	t22 = ((x121|(x122*x123))==x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = 363845685319169LLU;
	int32_t x126 = -1;
	volatile int64_t x128 = INT64_MIN;
	volatile int32_t t23 = 8349053;

	t23 = ((x125|(x126*x127))==x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x133 = INT64_MIN;
	volatile int8_t x135 = INT8_MIN;
	static int32_t t24 = -66435;

	t24 = ((x133|(x134*x135))==x136);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x137 = 461266385U;
	volatile uint8_t x138 = 0U;
	static uint16_t x139 = 5943U;
	static int64_t x140 = INT64_MAX;
	int32_t t25 = 6523;

	t25 = ((x137|(x138*x139))==x140);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 56447361932LLU;
	uint32_t x143 = 131U;
	int16_t x144 = INT16_MIN;
	volatile int32_t t26 = 682;

	t26 = ((x141|(x142*x143))==x144);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x145 = UINT64_MAX;
	int16_t x146 = -4;
	int16_t x147 = -1;
	static uint64_t x148 = 339154214LLU;
	int32_t t27 = -1869032;

	t27 = ((x145|(x146*x147))==x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x150 = 17050LLU;
	uint32_t x151 = UINT32_MAX;
	static int16_t x152 = INT16_MIN;
	int32_t t28 = 115752835;

	t28 = ((x149|(x150*x151))==x152);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = -1LL;
	static int32_t x154 = INT32_MIN;
	static uint64_t x155 = 131896248807319LLU;
	static int32_t x156 = INT32_MIN;
	int32_t t29 = 6;

	t29 = ((x153|(x154*x155))==x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = 27;
	uint16_t x162 = 7909U;
	int8_t x163 = INT8_MAX;
	static int32_t t30 = 1601677;

	t30 = ((x161|(x162*x163))==x164);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x165 = -1;
	int32_t x166 = 6;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t31 = 102;

	t31 = ((x165|(x166*x167))==x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = INT64_MAX;
	uint8_t x170 = 16U;
	static volatile int64_t x172 = -20521555LL;
	static int32_t t32 = -1023277;

	t32 = ((x169|(x170*x171))==x172);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x173 = 73U;
	static int32_t x174 = -1;
	int16_t x175 = -57;
	int32_t x176 = 2009818;
	int32_t t33 = -4086196;

	t33 = ((x173|(x174*x175))==x176);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x177 = INT64_MIN;
	uint8_t x178 = 16U;
	volatile int16_t x179 = INT16_MAX;
	int64_t x180 = INT64_MIN;
	volatile int32_t t34 = -8281;

	t34 = ((x177|(x178*x179))==x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x185 = -1;
	int8_t x187 = INT8_MIN;
	volatile int16_t x188 = INT16_MIN;
	static volatile int32_t t35 = -25;

	t35 = ((x185|(x186*x187))==x188);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x189 = UINT8_MAX;
	int64_t x190 = INT64_MIN;
	uint32_t x191 = 0U;
	uint16_t x192 = 9U;
	static int32_t t36 = 387;

	t36 = ((x189|(x190*x191))==x192);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = 38;
	uint16_t x210 = 8392U;
	static uint8_t x211 = 1U;
	volatile int32_t x212 = INT32_MIN;
	volatile int32_t t37 = -5995;

	t37 = ((x209|(x210*x211))==x212);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x217 = 630;
	static uint64_t x219 = 928264LLU;
	int8_t x220 = 0;
	static int32_t t38 = 2510638;

	t38 = ((x217|(x218*x219))==x220);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x221 = 0;
	volatile int8_t x223 = -3;

	t39 = ((x221|(x222*x223))==x224);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x225 = INT16_MIN;
	int16_t x227 = 17;
	static volatile int32_t t40 = -500976;

	t40 = ((x225|(x226*x227))==x228);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x229 = 1;
	uint32_t x232 = 152U;
	int32_t t41 = -871009;

	t41 = ((x229|(x230*x231))==x232);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x234 = UINT16_MAX;
	int16_t x236 = 6;
	static int32_t t42 = -50225;

	t42 = ((x233|(x234*x235))==x236);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x237 = 331009249784LLU;
	uint32_t x238 = UINT32_MAX;
	static int8_t x239 = INT8_MAX;
	static int16_t x240 = INT16_MAX;

	t43 = ((x237|(x238*x239))==x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x241 = -50198;
	int32_t x242 = -51113;
	uint32_t x243 = 41927198U;
	uint32_t x244 = 1U;
	volatile int32_t t44 = 106874;

	t44 = ((x241|(x242*x243))==x244);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x249 = -1LL;
	volatile int32_t x250 = 431;
	static volatile int16_t x251 = -1;
	volatile int32_t t45 = 8;

	t45 = ((x249|(x250*x251))==x252);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x254 = -47;
	uint8_t x255 = UINT8_MAX;
	int32_t x256 = 990175198;

	t46 = ((x253|(x254*x255))==x256);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = 0;
	uint8_t x258 = 11U;
	uint64_t x259 = 228156665LLU;
	uint16_t x260 = UINT16_MAX;
	int32_t t47 = -3969586;

	t47 = ((x257|(x258*x259))==x260);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x261 = UINT32_MAX;
	volatile int8_t x262 = INT8_MIN;
	uint64_t x263 = UINT64_MAX;
	int16_t x264 = INT16_MIN;
	int32_t t48 = -326243608;

	t48 = ((x261|(x262*x263))==x264);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x265 = 18757U;
	int32_t x266 = -18597;
	static int32_t x267 = 80697;
	uint64_t x268 = UINT64_MAX;
	int32_t t49 = -17665;

	t49 = ((x265|(x266*x267))==x268);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x269 = 56U;
	volatile uint16_t x270 = 222U;
	volatile int8_t x271 = -45;

	t50 = ((x269|(x270*x271))==x272);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x273 = 39257553043870LLU;
	int32_t x274 = 1;
	int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MIN;
	volatile int32_t t51 = -657;

	t51 = ((x273|(x274*x275))==x276);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x277 = 3967316171LL;
	static int8_t x278 = -1;
	static int32_t x280 = INT32_MIN;
	static int32_t t52 = 166247910;

	t52 = ((x277|(x278*x279))==x280);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x281 = INT8_MAX;
	static uint64_t x282 = UINT64_MAX;
	static int8_t x284 = INT8_MAX;
	int32_t t53 = 267183397;

	t53 = ((x281|(x282*x283))==x284);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x286 = INT16_MAX;
	int8_t x287 = -1;
	int16_t x288 = INT16_MIN;
	volatile int32_t t54 = -28;

	t54 = ((x285|(x286*x287))==x288);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x290 = 16U;
	int8_t x291 = 2;
	int32_t x292 = INT32_MAX;
	int32_t t55 = 0;

	t55 = ((x289|(x290*x291))==x292);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MAX;
	volatile uint64_t x303 = 276215307718595LLU;
	uint32_t x304 = 63624U;
	volatile int32_t t56 = -90093;

	t56 = ((x301|(x302*x303))==x304);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x305 = -24;
	int16_t x306 = -499;
	uint64_t x307 = 17015480861580LLU;
	static int64_t x308 = -47740LL;
	static volatile int32_t t57 = 8140;

	t57 = ((x305|(x306*x307))==x308);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = INT8_MAX;
	int8_t x310 = -1;
	int8_t x311 = -1;

	t58 = ((x309|(x310*x311))==x312);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x317 = INT64_MIN;
	uint8_t x318 = UINT8_MAX;
	static int8_t x319 = INT8_MIN;
	static int32_t x320 = -1;

	t59 = ((x317|(x318*x319))==x320);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x321 = INT64_MAX;
	uint16_t x322 = UINT16_MAX;
	volatile int64_t x323 = -1LL;
	volatile uint8_t x324 = 11U;

	t60 = ((x321|(x322*x323))==x324);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x325 = -165310;
	static volatile int32_t t61 = -665638981;

	t61 = ((x325|(x326*x327))==x328);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x329 = -6;
	int16_t x330 = 1;
	volatile int32_t t62 = 207825964;

	t62 = ((x329|(x330*x331))==x332);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x333 = -1;
	int16_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	volatile int32_t t63 = -672430641;

	t63 = ((x333|(x334*x335))==x336);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x341 = INT32_MAX;
	uint16_t x343 = 13479U;
	static int16_t x344 = 2489;
	volatile int32_t t64 = 28960;

	t64 = ((x341|(x342*x343))==x344);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x357 = -146176;
	volatile int64_t x358 = INT64_MAX;
	int32_t t65 = -80;

	t65 = ((x357|(x358*x359))==x360);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x361 = 14527032U;
	uint32_t x362 = UINT32_MAX;
	uint16_t x363 = 26U;
	int8_t x364 = -1;
	int32_t t66 = -4481421;

	t66 = ((x361|(x362*x363))==x364);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x365 = 15;
	int64_t x366 = 292437626559LL;
	int8_t x367 = -1;
	uint16_t x368 = 9542U;
	int32_t t67 = 293;

	t67 = ((x365|(x366*x367))==x368);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x369 = 46771955U;
	static int64_t x370 = -1LL;
	int8_t x371 = INT8_MIN;
	int16_t x372 = -183;

	t68 = ((x369|(x370*x371))==x372);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x373 = -7031;
	volatile int64_t x374 = 1584LL;
	uint64_t x375 = 2838919880LLU;
	int64_t x376 = INT64_MAX;

	t69 = ((x373|(x374*x375))==x376);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x383 = -2328767824LL;
	int16_t x384 = INT16_MIN;
	int32_t t70 = 13828724;

	t70 = ((x381|(x382*x383))==x384);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x385 = UINT16_MAX;
	volatile uint8_t x386 = 4U;
	int64_t x388 = -1LL;
	int32_t t71 = 7055542;

	t71 = ((x385|(x386*x387))==x388);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x389 = -1;
	int16_t x390 = -819;
	int8_t x391 = -1;

	t72 = ((x389|(x390*x391))==x392);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x393 = UINT8_MAX;
	int8_t x394 = -1;
	static int16_t x395 = 917;
	int64_t x396 = INT64_MIN;
	volatile int32_t t73 = 148185414;

	t73 = ((x393|(x394*x395))==x396);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x397 = -4173487195317464LL;
	uint32_t x398 = UINT32_MAX;
	static int32_t t74 = -114208;

	t74 = ((x397|(x398*x399))==x400);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x401 = -6;
	int16_t x403 = -1;
	int32_t x404 = INT32_MIN;
	int32_t t75 = 7;

	t75 = ((x401|(x402*x403))==x404);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x405 = INT64_MAX;
	int16_t x407 = -1524;
	int8_t x408 = INT8_MAX;
	volatile int32_t t76 = -1;

	t76 = ((x405|(x406*x407))==x408);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x409 = -2;
	volatile int32_t t77 = -36750824;

	t77 = ((x409|(x410*x411))==x412);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x414 = UINT64_MAX;
	volatile uint64_t x415 = 5668LLU;
	static int64_t x416 = -1LL;
	volatile int32_t t78 = 31955685;

	t78 = ((x413|(x414*x415))==x416);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x417 = INT8_MAX;
	volatile uint64_t x418 = 148093127703LLU;
	static volatile int64_t x420 = INT64_MIN;
	static volatile int32_t t79 = 11634180;

	t79 = ((x417|(x418*x419))==x420);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x421 = 3U;
	int64_t x424 = 7735264536191LL;

	t80 = ((x421|(x422*x423))==x424);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x426 = UINT16_MAX;
	static int8_t x427 = -5;
	volatile int32_t t81 = 7477;

	t81 = ((x425|(x426*x427))==x428);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x429 = UINT64_MAX;
	int16_t x430 = 0;
	int8_t x431 = -1;
	volatile uint64_t x432 = UINT64_MAX;

	t82 = ((x429|(x430*x431))==x432);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x442 = 0;
	static int16_t x443 = 12;
	int8_t x444 = -1;
	volatile int32_t t83 = -1124;

	t83 = ((x441|(x442*x443))==x444);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x449 = -1;
	uint32_t x450 = 6U;
	volatile uint16_t x451 = 2U;
	int64_t x452 = -3630746795LL;

	t84 = ((x449|(x450*x451))==x452);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x453 = INT8_MIN;
	int16_t x454 = -1319;
	uint32_t x455 = UINT32_MAX;
	volatile int32_t t85 = 1;

	t85 = ((x453|(x454*x455))==x456);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x461 = 20U;
	uint16_t x462 = 12U;
	volatile int8_t x464 = INT8_MIN;
	int32_t t86 = 260681;

	t86 = ((x461|(x462*x463))==x464);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x465 = INT32_MIN;
	int16_t x468 = 18;
	int32_t t87 = 49314;

	t87 = ((x465|(x466*x467))==x468);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x469 = UINT64_MAX;
	int8_t x470 = INT8_MIN;
	uint32_t x471 = 4U;
	volatile int32_t t88 = -288650887;

	t88 = ((x469|(x470*x471))==x472);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x475 = 46U;
	static int32_t x476 = -1;
	volatile int32_t t89 = -4;

	t89 = ((x473|(x474*x475))==x476);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x477 = 1751U;
	static int8_t x478 = INT8_MIN;
	int8_t x480 = 1;

	t90 = ((x477|(x478*x479))==x480);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x481 = -84760628;
	int8_t x483 = INT8_MIN;

	t91 = ((x481|(x482*x483))==x484);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x489 = UINT32_MAX;
	static volatile uint8_t x490 = 44U;
	int16_t x491 = -1;
	static volatile int8_t x492 = -3;
	static int32_t t92 = -9257;

	t92 = ((x489|(x490*x491))==x492);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x493 = INT8_MAX;
	int64_t x494 = -1LL;
	int16_t x495 = 6;
	uint32_t x496 = 815662U;
	int32_t t93 = 419247;

	t93 = ((x493|(x494*x495))==x496);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x501 = INT8_MIN;
	uint64_t x503 = 5LLU;
	uint16_t x504 = 30U;

	t94 = ((x501|(x502*x503))==x504);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x505 = -36286791;
	int16_t x506 = -1;
	int64_t x507 = -2LL;
	volatile int32_t t95 = 73523;

	t95 = ((x505|(x506*x507))==x508);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x509 = INT64_MAX;
	int32_t x510 = -1;
	uint64_t x511 = 294LLU;
	int16_t x512 = -9377;
	int32_t t96 = 2;

	t96 = ((x509|(x510*x511))==x512);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x514 = UINT32_MAX;
	volatile uint32_t x516 = 29991U;
	volatile int32_t t97 = 167;

	t97 = ((x513|(x514*x515))==x516);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x525 = UINT16_MAX;
	uint32_t x526 = UINT32_MAX;
	static int8_t x527 = 46;
	uint8_t x528 = 92U;
	int32_t t98 = 130358886;

	t98 = ((x525|(x526*x527))==x528);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x531 = 1;
	int8_t x532 = -26;
	int32_t t99 = 5;

	t99 = ((x529|(x530*x531))==x532);

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

