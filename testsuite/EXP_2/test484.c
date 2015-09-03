#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t1 = 4U;
static int64_t x27 = -1LL;
volatile uint64_t t3 = 42594LLU;
uint64_t x51 = 132LLU;
int64_t x52 = INT64_MIN;
static int64_t x62 = 5658684LL;
int64_t x66 = 201356492950LL;
uint8_t x69 = UINT8_MAX;
int8_t x70 = -1;
int32_t x72 = -1;
uint16_t x84 = 222U;
static volatile uint32_t t12 = 2676U;
int8_t x89 = -3;
int16_t x116 = 3;
volatile uint64_t t18 = 7012134LLU;
int8_t x131 = INT8_MIN;
uint64_t t20 = 1LLU;
int16_t x142 = 5;
int64_t x153 = INT64_MIN;
volatile int8_t x156 = -58;
volatile uint32_t x176 = 150433933U;
volatile int8_t x193 = -1;
int64_t x206 = -384484887178959881LL;
volatile int16_t x234 = 0;
static int32_t x235 = -1;
uint16_t x236 = 269U;
int16_t x237 = -1;
int64_t x238 = INT64_MIN;
uint64_t x239 = 495299345LLU;
int32_t x240 = 5;
int32_t x242 = -1;
volatile int32_t t38 = -433;
volatile uint64_t t39 = 20LLU;
uint64_t x269 = 553947846323351324LLU;
int64_t x286 = -1LL;
int32_t x287 = -5363;
uint32_t x288 = 1U;
volatile int8_t x300 = INT8_MIN;
uint64_t t43 = 23299252733077LLU;
volatile uint16_t x322 = UINT16_MAX;
uint32_t t45 = 17315178U;
uint16_t x333 = 297U;
int64_t t47 = 2309002148467284LL;
volatile uint8_t x353 = 0U;
static int32_t x357 = INT32_MAX;
int8_t x362 = -63;
int8_t x363 = INT8_MAX;
int32_t t52 = 772;
uint8_t x371 = 0U;
uint64_t t57 = 487089LLU;
static int64_t x390 = 30102LL;
int32_t x391 = -1;
uint8_t x401 = UINT8_MAX;
static uint16_t x420 = 26U;
int32_t x434 = INT32_MIN;
volatile uint32_t t64 = 223518U;
volatile int32_t x449 = -1;
volatile uint16_t x455 = UINT16_MAX;
volatile int8_t x460 = -1;
int32_t x469 = INT32_MAX;
static uint32_t x470 = 334140U;
static uint64_t x471 = 17127989LLU;
static uint16_t x473 = UINT16_MAX;
uint64_t x486 = 265867086LLU;
uint32_t x491 = UINT32_MAX;
uint64_t x492 = UINT64_MAX;
static uint16_t x499 = 32U;
static int16_t x500 = INT16_MAX;
int16_t x502 = INT16_MIN;
int32_t x514 = 1;
volatile int16_t x516 = 993;
int16_t x521 = INT16_MIN;
int8_t x529 = INT8_MAX;
volatile uint8_t x531 = UINT8_MAX;
static uint64_t t82 = 514LLU;
int16_t x557 = -1;
int8_t x560 = 4;
int8_t x569 = INT8_MIN;
int16_t x577 = 555;
int8_t x580 = -27;
int64_t x593 = INT64_MAX;
int8_t x596 = INT8_MAX;
int8_t x606 = -34;
volatile int64_t x607 = -1LL;
int16_t x614 = INT16_MAX;
uint64_t x615 = 6476693351775LLU;
volatile int16_t x628 = 527;
uint64_t t94 = 3962LLU;
uint8_t x638 = 3U;
uint16_t x640 = UINT16_MAX;
int64_t t96 = -3166355935LL;
uint64_t t98 = 107936LLU;
volatile uint32_t x657 = UINT32_MAX;
static int32_t x659 = INT32_MIN;
static int32_t x660 = INT32_MAX;
static volatile uint64_t t99 = 63LLU;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	volatile uint64_t x2 = UINT64_MAX;
	uint64_t x3 = 880LLU;
	int16_t x4 = -621;
	static volatile uint64_t t0 = 1LLU;

	t0 = ((x1|(x2*x3))*x4);

	if (t0 != 621LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x17 = UINT32_MAX;
	static int16_t x18 = INT16_MIN;
	int32_t x19 = -3;
	int32_t x20 = INT32_MAX;

	t1 = ((x17|(x18*x19))*x20);

	if (t1 != 2147483649U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t x26 = 183693729;
	int16_t x28 = -1;
	volatile uint64_t t2 = 1269074686377LLU;

	t2 = ((x25|(x26*x27))*x28);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x37 = 3;
	int64_t x38 = INT64_MAX;
	static int16_t x39 = -1;
	uint64_t x40 = UINT64_MAX;

	t3 = ((x37|(x38*x39))*x40);

	if (t3 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x45 = INT64_MIN;
	int16_t x46 = -954;
	volatile int32_t x47 = -215518;
	volatile uint64_t x48 = 550015672LLU;
	volatile uint64_t t4 = 11727LLU;

	t4 = ((x45|(x46*x47))*x48);

	if (t4 != 113085516828583584LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x49 = INT16_MAX;
	volatile uint16_t x50 = 0U;
	static uint64_t t5 = 11276773633206LLU;

	t5 = ((x49|(x50*x51))*x52);

	if (t5 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MIN;
	uint8_t x59 = 1U;
	static uint32_t x60 = UINT32_MAX;
	static volatile int64_t t6 = -13314381705502LL;

	t6 = ((x57|(x58*x59))*x60);

	if (t6 != -549755813760LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x61 = INT8_MIN;
	uint64_t x63 = 65570243466LLU;
	int32_t x64 = 6;
	uint64_t t7 = 14468294084706LLU;

	t7 = ((x61|(x62*x63))*x64);

	if (t7 != 18446744073709551376LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x65 = 3U;
	static int32_t x67 = 173695;
	volatile int64_t x68 = 5LL;
	int64_t t8 = -10349536LL;

	t8 = ((x65|(x66*x67))*x68);

	if (t8 != 174873080214751255LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x71 = 0U;
	volatile int32_t t9 = 69315034;

	t9 = ((x69|(x70*x71))*x72);

	if (t9 != -255) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x77 = UINT64_MAX;
	int8_t x78 = INT8_MIN;
	uint32_t x79 = 2042537U;
	int64_t x80 = -1LL;
	uint64_t t10 = 1LLU;

	t10 = ((x77|(x78*x79))*x80);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MAX;
	int8_t x83 = INT8_MIN;
	volatile int32_t t11 = 0;

	t11 = ((x81|(x82*x83))*x84);

	if (t11 != -28416) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x85 = 3U;
	int8_t x86 = -54;
	int8_t x87 = 1;
	static int16_t x88 = INT16_MIN;

	t12 = ((x85|(x86*x87))*x88);

	if (t12 != 1736704U) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x90 = -1LL;
	int32_t x91 = INT32_MIN;
	static int32_t x92 = -1;
	int64_t t13 = 2111LL;

	t13 = ((x89|(x90*x91))*x92);

	if (t13 != 3LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x93 = 0U;
	int16_t x94 = -1;
	int64_t x95 = -1LL;
	static uint64_t x96 = UINT64_MAX;
	static uint64_t t14 = UINT64_MAX;

	t14 = ((x93|(x94*x95))*x96);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x97 = INT64_MIN;
	int8_t x98 = -1;
	int16_t x99 = -1;
	int8_t x100 = -1;
	static int64_t t15 = INT64_MAX;

	t15 = ((x97|(x98*x99))*x100);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x101 = INT16_MIN;
	uint64_t x102 = UINT64_MAX;
	uint8_t x103 = 0U;
	uint64_t x104 = 3138743325LLU;
	volatile uint64_t t16 = 1970453169179359666LLU;

	t16 = ((x101|(x102*x103))*x104);

	if (t16 != 18446641223368278016LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x109 = INT8_MIN;
	int64_t x110 = -2386136584LL;
	uint32_t x111 = 11142U;
	int8_t x112 = -1;
	int64_t t17 = 2932LL;

	t17 = ((x109|(x110*x111))*x112);

	if (t17 != 48LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x113 = -1;
	int64_t x114 = -916147LL;
	volatile uint64_t x115 = 29LLU;

	t18 = ((x113|(x114*x115))*x116);

	if (t18 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x129 = INT32_MIN;
	static uint16_t x130 = 11383U;
	static volatile int8_t x132 = INT8_MAX;
	int32_t t19 = -1784;

	t19 = ((x129|(x130*x131))*x132);

	if (t19 != -185042048) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x133 = UINT64_MAX;
	uint8_t x134 = 111U;
	int32_t x135 = -1;
	volatile int8_t x136 = -1;

	t20 = ((x133|(x134*x135))*x136);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x137 = 0LL;
	int16_t x138 = -52;
	static int8_t x139 = 2;
	uint64_t x140 = 172877LLU;
	static volatile uint64_t t21 = 18688701147LLU;

	t21 = ((x137|(x138*x139))*x140);

	if (t21 != 18446744073691572408LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x141 = 0;
	uint64_t x143 = 1153304877690932LLU;
	int32_t x144 = INT32_MIN;
	uint64_t t22 = 11394587446600177LLU;

	t22 = ((x141|(x142*x143))*x144);

	if (t22 != 3827610524175040512LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x149 = -30;
	uint16_t x150 = 7795U;
	uint8_t x151 = 13U;
	volatile int64_t x152 = -122593847567471LL;
	int64_t t23 = 11LL;

	t23 = ((x149|(x150*x151))*x152);

	if (t23 != 1103344628107239LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x154 = 1824626;
	volatile int32_t x155 = -1;
	static int64_t t24 = -22254381LL;

	t24 = ((x153|(x154*x155))*x156);

	if (t24 != 105828308LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x157 = -1LL;
	int8_t x158 = -1;
	uint16_t x159 = UINT16_MAX;
	volatile uint8_t x160 = 40U;
	static volatile int64_t t25 = 5583665LL;

	t25 = ((x157|(x158*x159))*x160);

	if (t25 != -40LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x161 = INT16_MIN;
	uint8_t x162 = 13U;
	int16_t x163 = 11;
	uint64_t x164 = 19246509300016803LLU;
	uint64_t t26 = 5900830960973LLU;

	t26 = ((x161|(x162*x163))*x164);

	if (t26 != 17718676666786108685LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x169 = -1;
	volatile int8_t x170 = INT8_MIN;
	uint16_t x171 = UINT16_MAX;
	static volatile int16_t x172 = INT16_MIN;
	volatile int32_t t27 = 1;

	t27 = ((x169|(x170*x171))*x172);

	if (t27 != 32768) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x173 = -1748;
	static uint32_t x174 = 23116440U;
	uint8_t x175 = 0U;
	uint32_t t28 = 962U;

	t28 = ((x173|(x174*x175))*x176);

	if (t28 != 3329457468U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x194 = -1;
	uint16_t x195 = UINT16_MAX;
	volatile uint64_t x196 = UINT64_MAX;
	uint64_t t29 = 21206829876205180LLU;

	t29 = ((x193|(x194*x195))*x196);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x201 = INT8_MIN;
	static int16_t x202 = INT16_MAX;
	int32_t x203 = -1;
	volatile uint32_t x204 = UINT32_MAX;
	volatile uint32_t t30 = 23U;

	t30 = ((x201|(x202*x203))*x204);

	if (t30 != 127U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x205 = -1;
	volatile uint8_t x207 = 3U;
	int8_t x208 = -1;
	int64_t t31 = 1141LL;

	t31 = ((x205|(x206*x207))*x208);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x217 = -1;
	static int64_t x218 = INT64_MIN;
	uint8_t x219 = 1U;
	int64_t x220 = -215408817964LL;
	volatile int64_t t32 = 9290790192360824LL;

	t32 = ((x217|(x218*x219))*x220);

	if (t32 != 215408817964LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x221 = 0;
	volatile int32_t x222 = -1;
	int8_t x223 = -1;
	static int16_t x224 = INT16_MAX;
	int32_t t33 = 254433;

	t33 = ((x221|(x222*x223))*x224);

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x225 = 633034845729745437LLU;
	static int8_t x226 = -1;
	static int16_t x227 = -1;
	static int16_t x228 = INT16_MIN;
	volatile uint64_t t34 = 130540965LLU;

	t34 = ((x225|(x226*x227))*x228);

	if (t34 != 9301258050947088384LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x229 = INT8_MAX;
	volatile uint64_t x230 = 2022584429LLU;
	int32_t x231 = 311;
	uint64_t x232 = UINT64_MAX;
	uint64_t t35 = 143442LLU;

	t35 = ((x229|(x230*x231))*x232);

	if (t35 != 18446743444685794177LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x233 = INT16_MAX;
	int32_t t36 = 15;

	t36 = ((x233|(x234*x235))*x236);

	if (t36 != 8814323) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t t37 = 691530LLU;

	t37 = ((x237|(x238*x239))*x240);

	if (t37 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x241 = INT16_MAX;
	int32_t x243 = -8;
	int16_t x244 = 1684;

	t38 = ((x241|(x242*x243))*x244);

	if (t38 != 55179628) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x261 = INT32_MIN;
	uint64_t x262 = UINT64_MAX;
	static int8_t x263 = 51;
	uint32_t x264 = 7405946U;

	t39 = ((x261|(x262*x263))*x264);

	if (t39 != 18446744073331848370LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x270 = 53;
	uint64_t x271 = 251600LLU;
	int64_t x272 = 621090168171502744LL;
	static volatile uint64_t t40 = 16509LLU;

	t40 = ((x269|(x270*x271))*x272);

	if (t40 != 6761831601451337888LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x281 = -1;
	int32_t x282 = 202617004;
	int8_t x283 = 3;
	int8_t x284 = INT8_MIN;
	int32_t t41 = -42787019;

	t41 = ((x281|(x282*x283))*x284);

	if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x285 = 87993515140059LL;
	volatile int64_t t42 = -4142548113LL;

	t42 = ((x285|(x286*x287))*x288);

	if (t42 != 87993515145211LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x297 = 14;
	volatile uint64_t x298 = 155444682020LLU;
	static int8_t x299 = INT8_MIN;

	t43 = ((x297|(x298*x299))*x300);

	if (t43 != 2546805670213888LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x309 = -42;
	uint64_t x310 = 50866835LLU;
	static volatile int64_t x311 = -1LL;
	static int32_t x312 = INT32_MIN;
	volatile uint64_t t44 = 183971LLU;

	t44 = ((x309|(x310*x311))*x312);

	if (t44 != 2147483648LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x321 = UINT32_MAX;
	static int32_t x323 = -194;
	uint8_t x324 = UINT8_MAX;

	t45 = ((x321|(x322*x323))*x324);

	if (t45 != 4294967041U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x329 = 0U;
	uint8_t x330 = 0U;
	uint32_t x331 = 218085U;
	uint32_t x332 = 419345U;
	uint32_t t46 = 48856U;

	t46 = ((x329|(x330*x331))*x332);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x334 = -1;
	static int64_t x335 = -152767870319024874LL;
	static volatile int16_t x336 = -1;

	t47 = ((x333|(x334*x335))*x336);

	if (t47 != -152767870319025131LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x345 = 73;
	volatile int16_t x346 = INT16_MAX;
	int8_t x347 = -1;
	volatile int32_t x348 = -63;
	int32_t t48 = 532;

	t48 = ((x345|(x346*x347))*x348);

	if (t48 != 2059785) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x349 = 73457064LL;
	int16_t x350 = 11;
	uint64_t x351 = 78LLU;
	int64_t x352 = -1LL;
	volatile uint64_t t49 = 1807911LLU;

	t49 = ((x349|(x350*x351))*x352);

	if (t49 != 18446744073636093958LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x354 = -1;
	int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MIN;
	volatile int32_t t50 = -21864404;

	t50 = ((x353|(x354*x355))*x356);

	if (t50 != -4194304) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x358 = INT8_MAX;
	uint8_t x359 = UINT8_MAX;
	int64_t x360 = 0LL;
	int64_t t51 = 132LL;

	t51 = ((x357|(x358*x359))*x360);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x361 = -1;
	int16_t x364 = INT16_MIN;

	t52 = ((x361|(x362*x363))*x364);

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x365 = -1;
	uint16_t x366 = 3U;
	int16_t x367 = 31;
	uint32_t x368 = 24534982U;
	volatile uint32_t t53 = 624639040U;

	t53 = ((x365|(x366*x367))*x368);

	if (t53 != 4270432314U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x369 = -1;
	uint8_t x370 = UINT8_MAX;
	uint64_t x372 = 5901990272370607LLU;
	volatile uint64_t t54 = 113411315147LLU;

	t54 = ((x369|(x370*x371))*x372);

	if (t54 != 18440842083437181009LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x377 = INT32_MAX;
	uint32_t x378 = UINT32_MAX;
	uint64_t x379 = 260975845LLU;
	int64_t x380 = 311317571703996982LL;
	uint64_t t55 = 979494197995349485LLU;

	t55 = ((x377|(x378*x379))*x380);

	if (t55 != 1561126876150169034LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x381 = 117197932LLU;
	uint16_t x382 = 6987U;
	int64_t x383 = 696160727LL;
	int16_t x384 = 0;
	volatile uint64_t t56 = 1635875317LLU;

	t56 = ((x381|(x382*x383))*x384);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x385 = INT64_MAX;
	uint64_t x386 = 1LLU;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = UINT64_MAX;

	t57 = ((x385|(x386*x387))*x388);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x389 = INT64_MIN;
	int64_t x392 = 7LL;
	int64_t t58 = 73311411170886LL;

	t58 = ((x389|(x390*x391))*x392);

	if (t58 != -210714LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x402 = -1;
	int16_t x403 = INT16_MAX;
	uint16_t x404 = UINT16_MAX;
	int32_t t59 = -717;

	t59 = ((x401|(x402*x403))*x404);

	if (t59 != -2130739455) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x409 = INT64_MIN;
	uint64_t x410 = UINT64_MAX;
	int32_t x411 = -1;
	static uint32_t x412 = UINT32_MAX;
	uint64_t t60 = 361885LLU;

	t60 = ((x409|(x410*x411))*x412);

	if (t60 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x413 = UINT64_MAX;
	int8_t x414 = -1;
	int16_t x415 = -36;
	static int32_t x416 = INT32_MIN;
	volatile uint64_t t61 = 103LLU;

	t61 = ((x413|(x414*x415))*x416);

	if (t61 != 2147483648LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x417 = 6703;
	int16_t x418 = -1;
	uint8_t x419 = UINT8_MAX;
	volatile int32_t t62 = 8463;

	t62 = ((x417|(x418*x419))*x420);

	if (t62 != -5434) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x433 = 0U;
	uint64_t x435 = 13929803273LLU;
	volatile int16_t x436 = INT16_MIN;
	uint64_t t63 = 223912696873398LLU;

	t63 = ((x433|(x434*x435))*x436);

	if (t63 != 18123118219236474880LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x441 = -1;
	volatile int32_t x442 = INT32_MIN;
	static int16_t x443 = 0;
	uint32_t x444 = 36396581U;

	t64 = ((x441|(x442*x443))*x444);

	if (t64 != 4258570715U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x450 = -1LL;
	uint16_t x451 = 24238U;
	int16_t x452 = 1;
	volatile int64_t t65 = 33916068373855422LL;

	t65 = ((x449|(x450*x451))*x452);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x453 = 391530LLU;
	int16_t x454 = INT16_MIN;
	static volatile int8_t x456 = INT8_MAX;
	uint64_t t66 = 2631252LLU;

	t66 = ((x453|(x454*x455))*x456);

	if (t66 != 18446743801028852630LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x457 = INT64_MIN;
	int16_t x458 = -1513;
	static uint16_t x459 = 1699U;
	volatile int64_t t67 = 7064800607LL;

	t67 = ((x457|(x458*x459))*x460);

	if (t67 != 2570587LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x461 = 54524163402329LL;
	static int32_t x462 = -1;
	int8_t x463 = INT8_MIN;
	volatile int32_t x464 = -2697;
	int64_t t68 = -308LL;

	t68 = ((x461|(x462*x463))*x464);

	if (t68 != -147051668696426529LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x465 = 6U;
	uint16_t x466 = UINT16_MAX;
	static int16_t x467 = -12;
	uint64_t x468 = UINT64_MAX;
	uint64_t t69 = 1997047275872410096LLU;

	t69 = ((x465|(x466*x467))*x468);

	if (t69 != 786418LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x472 = INT64_MIN;
	uint64_t t70 = 278351LLU;

	t70 = ((x469|(x470*x471))*x472);

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x474 = 0;
	static uint64_t x475 = 969053100LLU;
	uint64_t x476 = UINT64_MAX;
	uint64_t t71 = 3162354288455976351LLU;

	t71 = ((x473|(x474*x475))*x476);

	if (t71 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x481 = -1LL;
	uint64_t x482 = 286657154604397LLU;
	uint32_t x483 = 924387869U;
	int8_t x484 = 0;
	static volatile uint64_t t72 = 154LLU;

	t72 = ((x481|(x482*x483))*x484);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x485 = INT16_MIN;
	int8_t x487 = -17;
	int32_t x488 = -183210;
	uint64_t t73 = 80745LLU;

	t73 = ((x485|(x486*x487))*x488);

	if (t73 != 3197747340LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x489 = -43496667;
	int64_t x490 = -490045LL;
	static volatile uint64_t t74 = 6674699413LLU;

	t74 = ((x489|(x490*x491))*x492);

	if (t74 != 43025603LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x493 = -1;
	int8_t x494 = -1;
	int32_t x495 = INT32_MAX;
	int8_t x496 = -1;
	volatile int32_t t75 = 355898717;

	t75 = ((x493|(x494*x495))*x496);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x497 = 1;
	uint32_t x498 = 19058742U;
	static volatile uint32_t t76 = 692630U;

	t76 = ((x497|(x498*x499))*x500);

	if (t76 != 3741743423U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x501 = -1;
	int8_t x503 = 9;
	int32_t x504 = 67;
	volatile int32_t t77 = 215;

	t77 = ((x501|(x502*x503))*x504);

	if (t77 != -67) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x505 = INT32_MAX;
	int32_t x506 = -13443425;
	volatile uint64_t x507 = UINT64_MAX;
	static int16_t x508 = INT16_MIN;
	uint64_t t78 = 18765673987823036LLU;

	t78 = ((x505|(x506*x507))*x508);

	if (t78 != 18446673704965406720LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x513 = 76U;
	int16_t x515 = INT16_MAX;
	int32_t t79 = -166579;

	t79 = ((x513|(x514*x515))*x516);

	if (t79 != 32537631) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x522 = 0U;
	static volatile int64_t x523 = -6959323521LL;
	volatile uint32_t x524 = 796U;
	int64_t t80 = -142458LL;

	t80 = ((x521|(x522*x523))*x524);

	if (t80 != -26083328LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x530 = 0U;
	uint64_t x532 = UINT64_MAX;
	volatile uint64_t t81 = 3941571029LLU;

	t81 = ((x529|(x530*x531))*x532);

	if (t81 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x533 = UINT64_MAX;
	int32_t x534 = -1;
	uint8_t x535 = 3U;
	uint8_t x536 = 3U;

	t82 = ((x533|(x534*x535))*x536);

	if (t82 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x558 = 134;
	int8_t x559 = 19;
	int32_t t83 = 7;

	t83 = ((x557|(x558*x559))*x560);

	if (t83 != -4) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x570 = 1U;
	static int32_t x571 = INT32_MAX;
	int16_t x572 = INT16_MIN;
	volatile int32_t t84 = -31658317;

	t84 = ((x569|(x570*x571))*x572);

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x578 = INT8_MIN;
	uint8_t x579 = 1U;
	volatile int32_t t85 = -1537;

	t85 = ((x577|(x578*x579))*x580);

	if (t85 != 2295) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x581 = INT16_MAX;
	int16_t x582 = INT16_MIN;
	uint32_t x583 = 1845U;
	int32_t x584 = 699717;
	volatile uint32_t t86 = 577U;

	t86 = ((x581|(x582*x583))*x584);

	if (t86 != 4117975739U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x594 = -1;
	int8_t x595 = 52;
	volatile int64_t t87 = 0LL;

	t87 = ((x593|(x594*x595))*x596);

	if (t87 != -127LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x605 = INT32_MIN;
	int16_t x608 = 12;
	static volatile int64_t t88 = 2487660930427LL;

	t88 = ((x605|(x606*x607))*x608);

	if (t88 != -25769803368LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x613 = INT16_MIN;
	int64_t x616 = -260408LL;
	uint64_t t89 = 115633686430191LLU;

	t89 = ((x613|(x614*x615))*x616);

	if (t89 != 3024638920LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x617 = 300854LLU;
	int32_t x618 = -58554;
	volatile int16_t x619 = INT16_MAX;
	int8_t x620 = INT8_MAX;
	volatile uint64_t t90 = 98807LLU;

	t90 = ((x617|(x618*x619))*x620);

	if (t90 != 18446743830076319554LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x621 = -1;
	volatile int16_t x622 = INT16_MAX;
	int32_t x623 = 2340;
	static int64_t x624 = -40338494LL;
	int64_t t91 = -234490138496768LL;

	t91 = ((x621|(x622*x623))*x624);

	if (t91 != 40338494LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x625 = INT64_MIN;
	uint8_t x626 = UINT8_MAX;
	int8_t x627 = -1;
	volatile int64_t t92 = -1512730001LL;

	t92 = ((x625|(x626*x627))*x628);

	if (t92 != -134385LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x629 = 4783U;
	static volatile int16_t x630 = -1;
	int8_t x631 = -1;
	static int8_t x632 = -1;
	volatile int32_t t93 = 399215641;

	t93 = ((x629|(x630*x631))*x632);

	if (t93 != -4783) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x633 = -1;
	static uint64_t x634 = 2049649LLU;
	volatile uint32_t x635 = 18721U;
	uint8_t x636 = 2U;

	t94 = ((x633|(x634*x635))*x636);

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x637 = -1;
	volatile int32_t x639 = -23093963;
	static volatile int32_t t95 = 142646;

	t95 = ((x637|(x638*x639))*x640);

	if (t95 != -65535) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x641 = -1;
	int8_t x642 = 8;
	int64_t x643 = -1LL;
	int32_t x644 = INT32_MAX;

	t96 = ((x641|(x642*x643))*x644);

	if (t96 != -2147483647LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x649 = 199946;
	static uint64_t x650 = 4039554890410129LLU;
	uint8_t x651 = 50U;
	static int16_t x652 = -1;
	static uint64_t t97 = 18LLU;

	t97 = ((x649|(x650*x651))*x652);

	if (t97 != 18244766329188913830LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x653 = UINT16_MAX;
	int8_t x654 = -25;
	int16_t x655 = -1;
	uint64_t x656 = UINT64_MAX;

	t98 = ((x653|(x654*x655))*x656);

	if (t98 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x658 = 1234795922979363LLU;

	t99 = ((x657|(x658*x659))*x660);

	if (t99 != 12262735607708516353LLU) { NG(); } else { ; }
	
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

