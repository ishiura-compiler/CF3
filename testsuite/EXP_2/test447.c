#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x5 = INT32_MIN;
int64_t t0 = 2679876804912LL;
uint16_t x9 = UINT16_MAX;
uint32_t x11 = 15613U;
uint64_t t1 = 1267253840108LLU;
static uint32_t x14 = 2038582U;
uint16_t x15 = UINT16_MAX;
volatile int32_t t2 = -192870;
uint16_t x18 = 10199U;
int64_t x20 = -67584769815LL;
volatile int32_t t4 = 61;
int8_t x26 = INT8_MIN;
static int16_t x40 = INT16_MAX;
static uint64_t t8 = 1639LLU;
int32_t t9 = 1723931;
int32_t x53 = INT32_MIN;
uint32_t x55 = 1107731U;
static int32_t t10 = 7200;
int64_t x81 = INT64_MAX;
int64_t x84 = -53809997300253611LL;
int32_t x89 = -20643;
uint32_t x90 = 2147218U;
uint16_t x91 = UINT16_MAX;
volatile int32_t t16 = 0;
int8_t x93 = -1;
volatile int32_t t17 = -1;
uint32_t x97 = 547269952U;
int16_t x98 = INT16_MAX;
int8_t x107 = 1;
static volatile int32_t t20 = -421996627;
int64_t x113 = INT64_MIN;
uint8_t x116 = 2U;
volatile int32_t t22 = 152846711;
int32_t x126 = -29954;
volatile uint64_t x133 = 2167LLU;
volatile int16_t x137 = INT16_MAX;
int16_t x138 = -1;
static int64_t t25 = -1LL;
int64_t x143 = INT64_MAX;
volatile int64_t t27 = 1722LL;
uint64_t x161 = 276337498078LLU;
int8_t x166 = INT8_MAX;
int32_t x178 = -1;
int32_t x204 = -93693;
volatile int32_t t36 = 123822329;
static int64_t t38 = -4LL;
int32_t x231 = 280159;
static int16_t x234 = INT16_MIN;
static int16_t x265 = INT16_MAX;
uint64_t x271 = 255386554836879084LLU;
volatile int32_t x274 = 3;
static uint32_t x275 = UINT32_MAX;
int16_t x277 = -1;
static uint64_t x278 = 13095422997LLU;
static int32_t x281 = INT32_MAX;
volatile uint64_t t50 = 85976828LLU;
static int8_t x320 = INT8_MIN;
uint16_t x326 = UINT16_MAX;
static uint32_t t53 = 200875U;
int16_t x332 = INT16_MIN;
int32_t t54 = 69631833;
int32_t t55 = -25416;
int8_t x346 = INT8_MIN;
int32_t t58 = -108596945;
static int8_t x364 = -1;
int32_t x365 = INT32_MIN;
uint16_t x371 = UINT16_MAX;
static int16_t x377 = -96;
int32_t t63 = -19682932;
static volatile int8_t x394 = INT8_MIN;
static int32_t t65 = -5053;
static uint64_t x409 = 9860053322LLU;
static uint8_t x410 = 0U;
int32_t t67 = 157229603;
uint32_t x417 = 14983U;
uint32_t x425 = 473U;
int16_t x434 = INT16_MAX;
int16_t x440 = INT16_MAX;
static volatile uint8_t x442 = 26U;
volatile int32_t t77 = -256256502;
int64_t x469 = INT64_MIN;
static uint64_t x477 = UINT64_MAX;
int64_t x480 = 1LL;
uint64_t x486 = UINT64_MAX;
int32_t t81 = 541107;
uint8_t x500 = UINT8_MAX;
uint8_t x502 = UINT8_MAX;
uint16_t x507 = UINT16_MAX;
int32_t x526 = 50;
uint32_t x539 = UINT32_MAX;
int32_t x541 = INT32_MIN;
uint32_t x550 = 29841855U;
int8_t x551 = INT8_MIN;
int8_t x553 = INT8_MIN;
int16_t x556 = INT16_MIN;
int16_t x572 = INT16_MIN;
volatile int32_t t96 = -691;
int8_t x575 = 1;
volatile int32_t t98 = -218008;
int32_t x582 = -1;


void f0(void) {
	volatile uint8_t x6 = 18U;
	int8_t x7 = 9;
	int64_t x8 = INT64_MIN;

	t0 = ((x5<(x6*x7))%x8);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x10 = 22U;
	uint64_t x12 = 2274LLU;

	t1 = ((x9<(x10*x11))%x12);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	int16_t x16 = INT16_MIN;

	t2 = ((x13<(x14*x15))%x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	int8_t x19 = INT8_MAX;
	int64_t t3 = 3500LL;

	t3 = ((x17<(x18*x19))%x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MIN;
	int16_t x22 = -1;
	int64_t x23 = -12215442622188518LL;
	uint16_t x24 = 19614U;

	t4 = ((x21<(x22*x23))%x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -56772572730510LL;
	static volatile int8_t x27 = -1;
	int32_t x28 = -19550;
	volatile int32_t t5 = 329880;

	t5 = ((x25<(x26*x27))%x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	static int64_t x30 = -369LL;
	uint8_t x31 = 14U;
	uint8_t x32 = 5U;
	int32_t t6 = 646412;

	t6 = ((x29<(x30*x31))%x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x37 = INT64_MAX;
	int8_t x38 = -24;
	static volatile int64_t x39 = -4114586568843LL;
	volatile int32_t t7 = 48418;

	t7 = ((x37<(x38*x39))%x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x45 = 1U;
	volatile uint8_t x46 = 0U;
	volatile int16_t x47 = 1;
	uint64_t x48 = 3150915067LLU;

	t8 = ((x45<(x46*x47))%x48);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x49 = -238;
	int32_t x50 = INT32_MIN;
	uint32_t x51 = 86400044U;
	uint16_t x52 = UINT16_MAX;

	t9 = ((x49<(x50*x51))%x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x54 = INT8_MIN;
	int16_t x56 = -1;

	t10 = ((x53<(x54*x55))%x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x57 = 47283831;
	static uint8_t x58 = UINT8_MAX;
	static volatile int8_t x59 = -1;
	int16_t x60 = INT16_MAX;
	volatile int32_t t11 = 752797;

	t11 = ((x57<(x58*x59))%x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = INT64_MIN;
	volatile int16_t x66 = INT16_MAX;
	int16_t x67 = -1;
	int64_t x68 = INT64_MIN;
	volatile int64_t t12 = 16857828LL;

	t12 = ((x65<(x66*x67))%x68);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x69 = INT32_MIN;
	static uint16_t x70 = UINT16_MAX;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = 678U;
	static int32_t t13 = -106883351;

	t13 = ((x69<(x70*x71))%x72);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MAX;
	static uint64_t x75 = 19880720LLU;
	static uint16_t x76 = UINT16_MAX;
	volatile int32_t t14 = 5283;

	t14 = ((x73<(x74*x75))%x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x82 = 0;
	uint32_t x83 = 2861U;
	volatile int64_t t15 = -63443414314LL;

	t15 = ((x81<(x82*x83))%x84);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x92 = -37;

	t16 = ((x89<(x90*x91))%x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x94 = UINT8_MAX;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = INT16_MIN;

	t17 = ((x93<(x94*x95))%x96);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x99 = 15;
	int32_t x100 = 105647328;
	int32_t t18 = -18;

	t18 = ((x97<(x98*x99))%x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x105 = 17731498358283LL;
	uint64_t x106 = UINT64_MAX;
	uint32_t x108 = UINT32_MAX;
	uint32_t t19 = 21012064U;

	t19 = ((x105<(x106*x107))%x108);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x109 = UINT32_MAX;
	uint64_t x110 = 36294625LLU;
	static int16_t x111 = INT16_MIN;
	static int32_t x112 = 25034505;

	t20 = ((x109<(x110*x111))%x112);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x114 = UINT8_MAX;
	int16_t x115 = -116;
	static int32_t t21 = 166919;

	t21 = ((x113<(x114*x115))%x116);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = INT64_MIN;
	uint32_t x122 = 1433U;
	uint64_t x123 = 4013692099240732LLU;
	int8_t x124 = INT8_MIN;

	t22 = ((x121<(x122*x123))%x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x125 = INT64_MIN;
	static uint32_t x127 = UINT32_MAX;
	uint64_t x128 = 78090076067LLU;
	volatile uint64_t t23 = 43072431140530LLU;

	t23 = ((x125<(x126*x127))%x128);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x134 = 82186669;
	uint8_t x135 = 11U;
	uint8_t x136 = 1U;
	volatile int32_t t24 = 14672429;

	t24 = ((x133<(x134*x135))%x136);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x139 = 26;
	static int64_t x140 = INT64_MIN;

	t25 = ((x137<(x138*x139))%x140);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x141 = 62LLU;
	int8_t x142 = -1;
	uint64_t x144 = UINT64_MAX;
	uint64_t t26 = 123648517750773377LLU;

	t26 = ((x141<(x142*x143))%x144);

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x145 = 76795LLU;
	int16_t x146 = 249;
	static int16_t x147 = INT16_MAX;
	volatile int64_t x148 = -1LL;

	t27 = ((x145<(x146*x147))%x148);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x162 = 1314897787699LLU;
	volatile uint16_t x163 = 32578U;
	static int16_t x164 = 505;
	volatile int32_t t28 = -5493356;

	t28 = ((x161<(x162*x163))%x164);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x165 = 37459270U;
	static uint64_t x167 = 445737184015LLU;
	uint8_t x168 = 24U;
	volatile int32_t t29 = 0;

	t29 = ((x165<(x166*x167))%x168);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x173 = -132260;
	volatile int8_t x174 = INT8_MIN;
	uint16_t x175 = UINT16_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t30 = 493292854;

	t30 = ((x173<(x174*x175))%x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x177 = UINT64_MAX;
	static uint32_t x179 = UINT32_MAX;
	int8_t x180 = INT8_MAX;
	int32_t t31 = -1;

	t31 = ((x177<(x178*x179))%x180);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x185 = -46;
	int16_t x186 = -1;
	int8_t x187 = INT8_MIN;
	volatile int64_t x188 = -124518LL;
	int64_t t32 = 272529310254LL;

	t32 = ((x185<(x186*x187))%x188);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x193 = 7U;
	volatile uint16_t x194 = 647U;
	static uint64_t x195 = 22176915607904LLU;
	static uint16_t x196 = 28621U;
	volatile int32_t t33 = -90;

	t33 = ((x193<(x194*x195))%x196);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x201 = INT8_MAX;
	uint64_t x202 = 152982LLU;
	int64_t x203 = 117LL;
	static int32_t t34 = 354;

	t34 = ((x201<(x202*x203))%x204);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x205 = UINT64_MAX;
	static int16_t x206 = 2;
	int8_t x207 = -43;
	int32_t x208 = INT32_MAX;
	int32_t t35 = 6488301;

	t35 = ((x205<(x206*x207))%x208);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x209 = INT16_MAX;
	static int8_t x210 = INT8_MIN;
	uint32_t x211 = 11U;
	int32_t x212 = 30046;

	t36 = ((x209<(x210*x211))%x212);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x217 = 8324U;
	uint16_t x218 = 9654U;
	uint64_t x219 = UINT64_MAX;
	uint32_t x220 = 223336U;
	volatile uint32_t t37 = 135U;

	t37 = ((x217<(x218*x219))%x220);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = -1LL;
	int8_t x227 = -1;
	volatile int64_t x228 = INT64_MAX;

	t38 = ((x225<(x226*x227))%x228);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = INT8_MIN;
	uint64_t x230 = UINT64_MAX;
	int64_t x232 = INT64_MAX;
	int64_t t39 = 1274558962LL;

	t39 = ((x229<(x230*x231))%x232);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x233 = 32647810;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MIN;
	int32_t t40 = -3;

	t40 = ((x233<(x234*x235))%x236);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x257 = INT32_MAX;
	int32_t x258 = -1;
	int8_t x259 = -1;
	static int8_t x260 = -1;
	volatile int32_t t41 = -2365;

	t41 = ((x257<(x258*x259))%x260);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x266 = UINT32_MAX;
	int32_t x267 = INT32_MIN;
	static int8_t x268 = INT8_MIN;
	int32_t t42 = -101644;

	t42 = ((x265<(x266*x267))%x268);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x269 = 0U;
	int64_t x270 = -31640LL;
	int64_t x272 = -488477LL;
	int64_t t43 = -30466331126LL;

	t43 = ((x269<(x270*x271))%x272);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x273 = INT8_MAX;
	int16_t x276 = INT16_MIN;
	volatile int32_t t44 = 1447820;

	t44 = ((x273<(x274*x275))%x276);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x279 = 7U;
	uint32_t x280 = UINT32_MAX;
	uint32_t t45 = 1412356U;

	t45 = ((x277<(x278*x279))%x280);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x282 = UINT8_MAX;
	int64_t x283 = -1LL;
	int64_t x284 = -1LL;
	int64_t t46 = 6717LL;

	t46 = ((x281<(x282*x283))%x284);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x285 = INT16_MAX;
	volatile uint32_t x286 = 24012475U;
	uint16_t x287 = 7513U;
	static int32_t x288 = INT32_MIN;
	volatile int32_t t47 = -119042636;

	t47 = ((x285<(x286*x287))%x288);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x293 = 45U;
	int32_t x294 = INT32_MAX;
	static int64_t x295 = -1LL;
	volatile uint32_t x296 = 198U;
	volatile uint32_t t48 = 57342U;

	t48 = ((x293<(x294*x295))%x296);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x297 = 277431302642782086LL;
	uint64_t x298 = 10958304899LLU;
	int8_t x299 = INT8_MAX;
	volatile uint16_t x300 = UINT16_MAX;
	volatile int32_t t49 = 1;

	t49 = ((x297<(x298*x299))%x300);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x309 = UINT8_MAX;
	int8_t x310 = INT8_MIN;
	uint16_t x311 = 109U;
	volatile uint64_t x312 = 32024629168197LLU;

	t50 = ((x309<(x310*x311))%x312);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x313 = 111991920U;
	volatile int8_t x314 = 0;
	int32_t x315 = INT32_MIN;
	int16_t x316 = -5;
	volatile int32_t t51 = -435053;

	t51 = ((x313<(x314*x315))%x316);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x317 = -1;
	int16_t x318 = -1;
	int64_t x319 = 1LL;
	static int32_t t52 = -2001347;

	t52 = ((x317<(x318*x319))%x320);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x327 = -1LL;
	static volatile uint32_t x328 = 3U;

	t53 = ((x325<(x326*x327))%x328);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x329 = 1949U;
	static int16_t x330 = 2963;
	uint8_t x331 = 12U;

	t54 = ((x329<(x330*x331))%x332);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x337 = INT16_MAX;
	int16_t x338 = INT16_MAX;
	int16_t x339 = INT16_MAX;
	int32_t x340 = INT32_MIN;

	t55 = ((x337<(x338*x339))%x340);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x345 = 678382030U;
	int16_t x347 = -1;
	int32_t x348 = -3;
	int32_t t56 = -105;

	t56 = ((x345<(x346*x347))%x348);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x349 = 0;
	static uint32_t x350 = 1313341U;
	volatile int16_t x351 = 1;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t57 = 64009U;

	t57 = ((x349<(x350*x351))%x352);

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x353 = INT16_MAX;
	uint64_t x354 = 3828725586LLU;
	int32_t x355 = INT32_MAX;
	int32_t x356 = -105;

	t58 = ((x353<(x354*x355))%x356);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x361 = 820LLU;
	uint64_t x362 = UINT64_MAX;
	int8_t x363 = 21;
	static volatile int32_t t59 = 7;

	t59 = ((x361<(x362*x363))%x364);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x366 = 1;
	uint8_t x367 = UINT8_MAX;
	int8_t x368 = INT8_MIN;
	static int32_t t60 = 2004;

	t60 = ((x365<(x366*x367))%x368);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x369 = 6060LL;
	int16_t x370 = INT16_MIN;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t61 = -262907;

	t61 = ((x369<(x370*x371))%x372);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x373 = INT8_MIN;
	static int8_t x374 = INT8_MAX;
	int64_t x375 = -1LL;
	int16_t x376 = -1;
	volatile int32_t t62 = 2;

	t62 = ((x373<(x374*x375))%x376);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x378 = INT16_MAX;
	int16_t x379 = INT16_MAX;
	int8_t x380 = -1;

	t63 = ((x377<(x378*x379))%x380);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x381 = -481;
	int64_t x382 = -550LL;
	volatile uint16_t x383 = 5U;
	int8_t x384 = INT8_MAX;
	int32_t t64 = 63499;

	t64 = ((x381<(x382*x383))%x384);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x393 = INT8_MIN;
	int8_t x395 = -1;
	int8_t x396 = -7;

	t65 = ((x393<(x394*x395))%x396);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x405 = INT16_MIN;
	uint8_t x406 = 2U;
	uint16_t x407 = UINT16_MAX;
	volatile int64_t x408 = INT64_MIN;
	int64_t t66 = 37LL;

	t66 = ((x405<(x406*x407))%x408);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x411 = 12U;
	int16_t x412 = INT16_MIN;

	t67 = ((x409<(x410*x411))%x412);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x413 = INT8_MAX;
	int8_t x414 = INT8_MAX;
	uint32_t x415 = 1009505U;
	int8_t x416 = -1;
	static volatile int32_t t68 = -1;

	t68 = ((x413<(x414*x415))%x416);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x418 = UINT64_MAX;
	int64_t x419 = 1632920LL;
	volatile int32_t x420 = -1;
	int32_t t69 = -7;

	t69 = ((x417<(x418*x419))%x420);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x426 = 152738735U;
	volatile int64_t x427 = -1LL;
	int16_t x428 = 68;
	int32_t t70 = 52462718;

	t70 = ((x425<(x426*x427))%x428);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x429 = 6392399728294684LLU;
	static uint8_t x430 = 19U;
	int16_t x431 = INT16_MAX;
	int64_t x432 = INT64_MIN;
	int64_t t71 = -1687744190020609192LL;

	t71 = ((x429<(x430*x431))%x432);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x433 = INT32_MIN;
	static int8_t x435 = INT8_MIN;
	static volatile int16_t x436 = 1;
	volatile int32_t t72 = 3;

	t72 = ((x433<(x434*x435))%x436);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x437 = 295U;
	uint8_t x438 = UINT8_MAX;
	static uint32_t x439 = UINT32_MAX;
	int32_t t73 = -23328879;

	t73 = ((x437<(x438*x439))%x440);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x441 = INT8_MAX;
	uint64_t x443 = 6898694513LLU;
	uint8_t x444 = 19U;
	static volatile int32_t t74 = 29;

	t74 = ((x441<(x442*x443))%x444);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x449 = UINT8_MAX;
	static volatile int16_t x450 = -27;
	static uint16_t x451 = 42U;
	volatile int8_t x452 = INT8_MIN;
	int32_t t75 = -7;

	t75 = ((x449<(x450*x451))%x452);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x453 = INT64_MIN;
	static volatile uint8_t x454 = 20U;
	int8_t x455 = -3;
	volatile uint32_t x456 = UINT32_MAX;
	uint32_t t76 = 5566647U;

	t76 = ((x453<(x454*x455))%x456);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x461 = INT16_MIN;
	static volatile int8_t x462 = INT8_MIN;
	int8_t x463 = -43;
	int32_t x464 = 65298449;

	t77 = ((x461<(x462*x463))%x464);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x470 = INT8_MIN;
	volatile uint16_t x471 = 2452U;
	uint32_t x472 = 23157U;
	uint32_t t78 = 87969U;

	t78 = ((x469<(x470*x471))%x472);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x473 = 17U;
	uint32_t x474 = 3225U;
	int32_t x475 = INT32_MAX;
	uint32_t x476 = 10388949U;
	uint32_t t79 = 116884U;

	t79 = ((x473<(x474*x475))%x476);

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x478 = 1U;
	int16_t x479 = INT16_MAX;
	volatile int64_t t80 = 11991LL;

	t80 = ((x477<(x478*x479))%x480);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x485 = -1LL;
	int16_t x487 = -1;
	uint16_t x488 = UINT16_MAX;

	t81 = ((x485<(x486*x487))%x488);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x489 = INT8_MIN;
	int32_t x490 = INT32_MAX;
	static uint64_t x491 = UINT64_MAX;
	int32_t x492 = 130303;
	volatile int32_t t82 = 3765572;

	t82 = ((x489<(x490*x491))%x492);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x497 = 0U;
	static uint64_t x498 = 102300365LLU;
	uint16_t x499 = UINT16_MAX;
	int32_t t83 = -1;

	t83 = ((x497<(x498*x499))%x500);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x501 = -108;
	static volatile uint16_t x503 = 1481U;
	int64_t x504 = -732003657LL;
	int64_t t84 = -1543427775LL;

	t84 = ((x501<(x502*x503))%x504);

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x505 = INT64_MAX;
	volatile uint8_t x506 = 1U;
	static int16_t x508 = -1;
	volatile int32_t t85 = 45610629;

	t85 = ((x505<(x506*x507))%x508);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x513 = INT64_MIN;
	int8_t x514 = -1;
	int32_t x515 = -1;
	uint32_t x516 = UINT32_MAX;
	uint32_t t86 = 2U;

	t86 = ((x513<(x514*x515))%x516);

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x521 = 39;
	static int16_t x522 = 4;
	static uint64_t x523 = UINT64_MAX;
	int32_t x524 = -1;
	volatile int32_t t87 = -11366;

	t87 = ((x521<(x522*x523))%x524);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x525 = INT16_MIN;
	uint32_t x527 = 451820927U;
	static int16_t x528 = INT16_MIN;
	int32_t t88 = 1454;

	t88 = ((x525<(x526*x527))%x528);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x529 = 1;
	int32_t x530 = 6718355;
	volatile uint64_t x531 = UINT64_MAX;
	int32_t x532 = -1;
	volatile int32_t t89 = 203;

	t89 = ((x529<(x530*x531))%x532);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x537 = 0;
	int32_t x538 = INT32_MIN;
	int8_t x540 = INT8_MIN;
	int32_t t90 = 313;

	t90 = ((x537<(x538*x539))%x540);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x542 = UINT32_MAX;
	uint16_t x543 = 5278U;
	int64_t x544 = INT64_MIN;
	volatile int64_t t91 = -70275LL;

	t91 = ((x541<(x542*x543))%x544);

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x549 = -5;
	volatile int16_t x552 = -1159;
	volatile int32_t t92 = 1;

	t92 = ((x549<(x550*x551))%x552);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x554 = 6U;
	static volatile int16_t x555 = -1;
	volatile int32_t t93 = 25359020;

	t93 = ((x553<(x554*x555))%x556);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x561 = 21230017U;
	uint8_t x562 = 0U;
	int32_t x563 = 8;
	static int32_t x564 = -1;
	int32_t t94 = 6;

	t94 = ((x561<(x562*x563))%x564);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x565 = -1;
	int8_t x566 = INT8_MIN;
	volatile int16_t x567 = -1;
	volatile int32_t x568 = INT32_MAX;
	static volatile int32_t t95 = 704;

	t95 = ((x565<(x566*x567))%x568);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x569 = INT64_MAX;
	int64_t x570 = 180LL;
	int64_t x571 = -1LL;

	t96 = ((x569<(x570*x571))%x572);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x573 = UINT8_MAX;
	int8_t x574 = 29;
	static volatile uint16_t x576 = 13920U;
	int32_t t97 = 160028505;

	t97 = ((x573<(x574*x575))%x576);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x577 = 74911102U;
	uint64_t x578 = 1510337639LLU;
	volatile uint16_t x579 = UINT16_MAX;
	int16_t x580 = -1;

	t98 = ((x577<(x578*x579))%x580);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x581 = 975192465;
	int32_t x583 = INT32_MAX;
	uint32_t x584 = 425U;
	static uint32_t t99 = 139U;

	t99 = ((x581<(x582*x583))%x584);

	if (t99 != 0U) { NG(); } else { ; }
	
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

