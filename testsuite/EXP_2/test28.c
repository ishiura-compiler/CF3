#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = UINT32_MAX;
int32_t x24 = INT32_MAX;
static volatile uint32_t t5 = 1090U;
static volatile uint16_t x53 = 29U;
uint64_t x57 = UINT64_MAX;
volatile uint64_t t7 = 401LLU;
uint32_t x63 = 2080067926U;
static uint64_t x66 = 763LLU;
volatile uint16_t x68 = 769U;
uint16_t x73 = 5860U;
int32_t t10 = 193927;
uint16_t x77 = UINT16_MAX;
int16_t x79 = INT16_MIN;
static volatile uint64_t t11 = 143375173699833786LLU;
uint8_t x88 = 4U;
uint8_t x89 = 7U;
int8_t x90 = INT8_MIN;
static int8_t x107 = INT8_MIN;
int16_t x113 = INT16_MAX;
static int32_t x114 = INT32_MIN;
int32_t x115 = INT32_MAX;
uint64_t x124 = 112991LLU;
volatile int16_t x128 = 12467;
static volatile uint64_t t19 = 8362338588LLU;
static int16_t x140 = -1;
static volatile uint32_t t20 = 862455U;
volatile uint32_t t21 = 1370U;
int8_t x161 = INT8_MIN;
volatile uint16_t x174 = 56U;
volatile int64_t x175 = 235964571500584180LL;
static uint64_t t24 = 6019387907679239LLU;
static volatile uint16_t x179 = 461U;
volatile int16_t x205 = INT16_MIN;
volatile uint64_t x207 = 526308071LLU;
volatile uint64_t t28 = 1528LLU;
int8_t x231 = -1;
int32_t x250 = 6;
uint32_t t32 = 2U;
int64_t x253 = 4261912854LL;
static volatile int32_t x254 = INT32_MAX;
static uint8_t x256 = 21U;
int64_t t33 = -318825LL;
uint64_t x266 = 28LLU;
static int8_t x275 = INT8_MIN;
volatile int64_t x276 = 1380380LL;
int64_t x283 = -797063955251494LL;
static uint64_t t37 = 11202707LLU;
int32_t x289 = -1;
static volatile int32_t x291 = 5360766;
volatile uint64_t x305 = UINT64_MAX;
int16_t x306 = INT16_MIN;
uint32_t x318 = UINT32_MAX;
uint8_t x319 = 3U;
volatile int64_t x325 = -199294381999LL;
int16_t x328 = INT16_MIN;
int8_t x331 = 4;
volatile int32_t t45 = -364;
static uint64_t x337 = 264618996258058230LLU;
int64_t t47 = 1759562569230433LL;
static uint64_t x352 = 3021488412676LLU;
volatile uint64_t t48 = 8229912542069663760LLU;
uint16_t x353 = UINT16_MAX;
volatile int32_t x361 = INT32_MIN;
int64_t x375 = INT64_MAX;
int16_t x383 = -1;
static volatile uint64_t x386 = 6427671123280LLU;
uint16_t x387 = 8451U;
uint64_t t54 = 93LLU;
volatile uint32_t x389 = 12U;
uint8_t x392 = 12U;
volatile int32_t x424 = INT32_MIN;
int16_t x427 = -80;
volatile uint32_t t58 = 2717U;
uint64_t x433 = UINT64_MAX;
static volatile uint64_t t60 = 1812826178LLU;
volatile uint32_t t62 = 36104528U;
volatile uint16_t x464 = 86U;
volatile int8_t x468 = INT8_MIN;
static volatile int64_t x473 = -105LL;
int32_t x475 = -6717;
int8_t x477 = INT8_MAX;
int32_t x478 = INT32_MAX;
static int32_t x480 = INT32_MAX;
volatile int64_t t67 = -10190901873181432LL;
uint64_t x495 = UINT64_MAX;
uint32_t x506 = 717U;
int64_t x511 = 1012426860183178LL;
static uint8_t x515 = 27U;
int64_t t72 = -235LL;
static int8_t x521 = -1;
static uint64_t x523 = 209111175LLU;
int8_t x528 = 1;
static int32_t t74 = -555790;
static int16_t x530 = -1;
volatile int32_t t76 = -411;
int16_t x548 = 1;
uint32_t t78 = 35362U;
uint8_t x557 = UINT8_MAX;
uint64_t x572 = UINT64_MAX;
static int16_t x577 = 1781;
uint64_t x578 = UINT64_MAX;
int64_t x585 = -1LL;
volatile int64_t t84 = -247235575602759428LL;
static volatile int16_t x597 = INT16_MIN;
int8_t x603 = 29;
int64_t x606 = 211007009LL;
uint16_t x607 = 3903U;
static int16_t x614 = INT16_MIN;
static int8_t x615 = -1;
uint16_t x638 = 2713U;
int16_t x641 = 1114;
int64_t x646 = -120583LL;
volatile int32_t x654 = INT32_MAX;
int64_t x655 = 14527866LL;
int8_t x657 = 0;
int32_t t97 = 612367;
static int32_t x665 = 37795;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint16_t x2 = 24U;
	static volatile int32_t x4 = 2306;
	volatile uint32_t t0 = 24451290U;

	t0 = ((x1*(x2+x3))-x4);

	if (t0 != 2147481342U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = 5;
	int32_t x18 = 25044;
	static int64_t x19 = 688575LL;
	int8_t x20 = INT8_MAX;
	volatile int64_t t1 = -24941LL;

	t1 = ((x17*(x18+x19))-x20);

	if (t1 != 3567968LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = 19141998LLU;
	static uint16_t x22 = 32630U;
	uint8_t x23 = 18U;
	volatile uint64_t t2 = 66998437659430LLU;

	t2 = ((x21*(x22+x23))-x24);

	if (t2 != 622800467057LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x29 = 25U;
	uint32_t x30 = 50U;
	int32_t x31 = 38245232;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t3 = 7882707U;

	t3 = ((x29*(x30+x31))-x32);

	if (t3 != 956132051U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x41 = 2;
	uint8_t x42 = UINT8_MAX;
	int16_t x43 = -4651;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t4 = 884869366LLU;

	t4 = ((x41*(x42+x43))-x44);

	if (t4 != 18446744073709542825LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x45 = 1;
	static uint32_t x46 = 1U;
	int16_t x47 = -1;
	int16_t x48 = -1;

	t5 = ((x45*(x46+x47))-x48);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x54 = UINT8_MAX;
	int8_t x55 = 0;
	int64_t x56 = INT64_MAX;
	int64_t t6 = -538655478134432LL;

	t6 = ((x53*(x54+x55))-x56);

	if (t6 != -9223372036854768412LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x58 = INT64_MIN;
	uint16_t x59 = UINT16_MAX;
	static int16_t x60 = -242;

	t7 = ((x57*(x58+x59))-x60);

	if (t7 != 9223372036854710515LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x61 = 0U;
	uint16_t x62 = 0U;
	int32_t x64 = INT32_MIN;
	volatile uint32_t t8 = 92470U;

	t8 = ((x61*(x62+x63))-x64);

	if (t8 != 2147483648U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = INT16_MAX;
	uint8_t x67 = UINT8_MAX;
	uint64_t t9 = 97657LLU;

	t9 = ((x65*(x66+x67))-x68);

	if (t9 != 33356037LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x74 = 2469U;
	int8_t x75 = INT8_MAX;
	int16_t x76 = INT16_MAX;

	t10 = ((x73*(x74+x75))-x76);

	if (t10 != 15179793) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x78 = UINT64_MAX;
	int8_t x80 = INT8_MIN;

	t11 = ((x77*(x78+x79))-x80);

	if (t11 != 18446744071562035329LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x85 = INT16_MIN;
	static volatile int64_t x86 = 52725979LL;
	volatile int32_t x87 = -1;
	static int64_t t12 = 42377400045911905LL;

	t12 = ((x85*(x86+x87))-x88);

	if (t12 != -1727724847108LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x91 = INT16_MIN;
	int32_t x92 = -1;
	volatile int32_t t13 = 12;

	t13 = ((x89*(x90+x91))-x92);

	if (t13 != -230271) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x105 = 352U;
	int64_t x106 = 3555814507361LL;
	static uint16_t x108 = 6205U;
	int64_t t14 = -125153891LL;

	t14 = ((x105*(x106+x107))-x108);

	if (t14 != 1251646706539811LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x109 = INT32_MIN;
	static uint32_t x110 = UINT32_MAX;
	static uint16_t x111 = 16350U;
	int64_t x112 = -1LL;
	static volatile int64_t t15 = 4189975LL;

	t15 = ((x109*(x110+x111))-x112);

	if (t15 != 2147483649LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x116 = -1;
	int32_t t16 = -7003434;

	t16 = ((x113*(x114+x115))-x116);

	if (t16 != -32766) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x117 = INT16_MIN;
	uint32_t x118 = 59U;
	int8_t x119 = INT8_MIN;
	uint64_t x120 = UINT64_MAX;
	uint64_t t17 = 10931221523LLU;

	t17 = ((x117*(x118+x119))-x120);

	if (t17 != 2260993LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x121 = UINT64_MAX;
	volatile int8_t x122 = -1;
	int32_t x123 = 332558;
	volatile uint64_t t18 = 48965043077207LLU;

	t18 = ((x121*(x122+x123))-x124);

	if (t18 != 18446744073709106068LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x125 = UINT16_MAX;
	volatile uint64_t x126 = UINT64_MAX;
	static int16_t x127 = -1;

	t19 = ((x125*(x126+x127))-x128);

	if (t19 != 18446744073709408079LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x137 = 55;
	uint32_t x138 = 1U;
	int16_t x139 = 1;

	t20 = ((x137*(x138+x139))-x140);

	if (t20 != 111U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x141 = UINT8_MAX;
	volatile int8_t x142 = 1;
	uint32_t x143 = UINT32_MAX;
	uint32_t x144 = 42684402U;

	t21 = ((x141*(x142+x143))-x144);

	if (t21 != 4252282894U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x145 = 543466157U;
	int32_t x146 = -1;
	static int64_t x147 = -1LL;
	uint8_t x148 = 62U;
	int64_t t22 = 389060LL;

	t22 = ((x145*(x146+x147))-x148);

	if (t22 != -1086932376LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x162 = 9114172186294580772LLU;
	volatile int8_t x163 = INT8_MAX;
	int8_t x164 = INT8_MIN;
	volatile uint64_t t23 = 227063164369177LLU;

	t23 = ((x161*(x162+x163))-x164);

	if (t23 != 13977580871704948480LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x173 = 6U;
	static uint64_t x176 = UINT64_MAX;

	t24 = ((x173*(x174+x175))-x176);

	if (t24 != 1415787429003505417LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x177 = -1LL;
	uint32_t x178 = UINT32_MAX;
	int8_t x180 = INT8_MIN;
	int64_t t25 = -82730945057014LL;

	t25 = ((x177*(x178+x179))-x180);

	if (t25 != -332LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x193 = -1;
	int64_t x194 = 442696310175977LL;
	uint64_t x195 = 19291524959751LLU;
	static volatile int16_t x196 = -1;
	volatile uint64_t t26 = 128195435LLU;

	t26 = ((x193*(x194+x195))-x196);

	if (t26 != 18446282085874415889LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x206 = INT8_MAX;
	int64_t x208 = -1LL;
	volatile uint64_t t27 = 209798239LLU;

	t27 = ((x205*(x206+x207))-x208);

	if (t27 != 18446726827642519553LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x221 = 589700776LLU;
	int64_t x222 = INT64_MIN;
	volatile uint32_t x223 = 257850423U;
	int16_t x224 = -1;

	t28 = ((x221*(x222+x223))-x224);

	if (t28 != 152054594535028249LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x229 = 1U;
	uint8_t x230 = UINT8_MAX;
	static volatile uint8_t x232 = UINT8_MAX;
	uint32_t t29 = UINT32_MAX;

	t29 = ((x229*(x230+x231))-x232);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x237 = 13576505240LLU;
	static int16_t x238 = 1154;
	uint64_t x239 = UINT64_MAX;
	volatile int8_t x240 = INT8_MAX;
	volatile uint64_t t30 = 55228LLU;

	t30 = ((x237*(x238+x239))-x240);

	if (t30 != 15653710541593LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x245 = INT16_MAX;
	uint16_t x246 = 780U;
	volatile int16_t x247 = 1915;
	uint16_t x248 = 6194U;
	int32_t t31 = -6813;

	t31 = ((x245*(x246+x247))-x248);

	if (t31 != 88300871) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x249 = UINT8_MAX;
	volatile int8_t x251 = INT8_MIN;
	uint32_t x252 = 1655551U;

	t32 = ((x249*(x250+x251))-x252);

	if (t32 != 4293280635U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x255 = INT16_MIN;

	t33 = ((x253*(x254+x255))-x256);

	if (t33 != 9152248504543698645LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x265 = -543867636LL;
	int32_t x267 = 3;
	int32_t x268 = INT32_MAX;
	volatile uint64_t t34 = 7628623832LLU;

	t34 = ((x265*(x266+x267))-x268);

	if (t34 != 18446744054702171253LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x269 = UINT8_MAX;
	int8_t x270 = -1;
	int64_t x271 = -1LL;
	int64_t x272 = 1399480748218012827LL;
	static volatile int64_t t35 = 2026008319920576LL;

	t35 = ((x269*(x270+x271))-x272);

	if (t35 != -1399480748218013337LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x273 = 29683597748880943LLU;
	volatile uint8_t x274 = 0U;
	uint64_t t36 = 721933703586LLU;

	t36 = ((x273*(x274+x275))-x276);

	if (t36 != 14647243561851410532LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x281 = INT8_MAX;
	uint64_t x282 = 957749583335032103LLU;
	int64_t x284 = 25LL;

	t37 = ((x281*(x282+x283))-x284);

	if (t37 != 10852505518974827622LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x285 = 180U;
	int16_t x286 = -13;
	uint8_t x287 = 57U;
	static int64_t x288 = -1LL;
	volatile int64_t t38 = 65801418LL;

	t38 = ((x285*(x286+x287))-x288);

	if (t38 != 7921LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x290 = UINT32_MAX;
	uint8_t x292 = 9U;
	uint32_t t39 = 1U;

	t39 = ((x289*(x290+x291))-x292);

	if (t39 != 4289606522U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x293 = INT32_MAX;
	volatile uint64_t x294 = 29604LLU;
	uint64_t x295 = 51659157780LLU;
	int16_t x296 = INT16_MIN;
	static uint64_t t40 = 238759922145254LLU;

	t40 = ((x293*(x294+x295))-x296);

	if (t40 != 256795682191432520LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;
	uint8_t x303 = 5U;
	int16_t x304 = INT16_MIN;
	volatile int32_t t41 = -6108;

	t41 = ((x301*(x302+x303))-x304);

	if (t41 != 48512) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x307 = 8178302009293481LLU;
	volatile uint8_t x308 = 6U;
	uint64_t t42 = 49899238950807614LLU;

	t42 = ((x305*(x306+x307))-x308);

	if (t42 != 18438565771700290897LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x317 = -1;
	static uint8_t x320 = UINT8_MAX;
	static uint32_t t43 = 1U;

	t43 = ((x317*(x318+x319))-x320);

	if (t43 != 4294967039U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x326 = INT8_MAX;
	uint64_t x327 = UINT64_MAX;
	uint64_t t44 = 3388446402LLU;

	t44 = ((x325*(x326+x327))-x328);

	if (t44 != 18446718962617452510LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x329 = 12;
	int8_t x330 = -1;
	int16_t x332 = -16;

	t45 = ((x329*(x330+x331))-x332);

	if (t45 != 52) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x338 = 1;
	int32_t x339 = -1;
	int8_t x340 = -1;
	volatile uint64_t t46 = 2555625168243LLU;

	t46 = ((x337*(x338+x339))-x340);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x345 = 1U;
	int32_t x346 = -16073291;
	volatile int8_t x347 = INT8_MAX;
	int64_t x348 = 17115LL;

	t47 = ((x345*(x346+x347))-x348);

	if (t47 != -16090279LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	int32_t x351 = -2768121;

	t48 = ((x349*(x350+x351))-x352);

	if (t48 != 18446741052575474812LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x354 = -1;
	int8_t x355 = 0;
	uint8_t x356 = UINT8_MAX;
	int32_t t49 = -301447470;

	t49 = ((x353*(x354+x355))-x356);

	if (t49 != -65790) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x362 = 1;
	static uint32_t x363 = 11813U;
	int8_t x364 = -8;
	uint32_t t50 = 13237U;

	t50 = ((x361*(x362+x363))-x364);

	if (t50 != 8U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x373 = INT32_MAX;
	int64_t x374 = INT64_MIN;
	int64_t x376 = -1LL;
	int64_t t51 = 168684706254361LL;

	t51 = ((x373*(x374+x375))-x376);

	if (t51 != -2147483646LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x377 = 308U;
	uint16_t x378 = 15579U;
	int8_t x379 = -1;
	int16_t x380 = INT16_MAX;
	static int32_t t52 = 27972;

	t52 = ((x377*(x378+x379))-x380);

	if (t52 != 4765257) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x381 = -1;
	int8_t x382 = 19;
	volatile int16_t x384 = -9;
	int32_t t53 = -11325;

	t53 = ((x381*(x382+x383))-x384);

	if (t53 != -9) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x385 = -1;
	volatile uint16_t x388 = 65U;

	t54 = ((x385*(x386+x387))-x388);

	if (t54 != 18446737646038419820LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x390 = UINT16_MAX;
	static uint8_t x391 = 2U;
	uint32_t t55 = 95U;

	t55 = ((x389*(x390+x391))-x392);

	if (t55 != 786432U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x413 = INT16_MIN;
	uint16_t x414 = 115U;
	int64_t x415 = 8070841LL;
	int16_t x416 = 5;
	static int64_t t56 = -22726277723134LL;

	t56 = ((x413*(x414+x415))-x416);

	if (t56 != -264469086213LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x421 = INT16_MIN;
	uint64_t x422 = UINT64_MAX;
	volatile int32_t x423 = -1;
	volatile uint64_t t57 = 1LLU;

	t57 = ((x421*(x422+x423))-x424);

	if (t57 != 2147549184LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x425 = 8694U;
	static uint32_t x426 = UINT32_MAX;
	uint8_t x428 = UINT8_MAX;

	t58 = ((x425*(x426+x427))-x428);

	if (t58 != 4294262827U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x429 = UINT64_MAX;
	int32_t x430 = 13;
	volatile uint16_t x431 = 15U;
	int16_t x432 = -1;
	volatile uint64_t t59 = 8LLU;

	t59 = ((x429*(x430+x431))-x432);

	if (t59 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x434 = -1;
	uint64_t x435 = 19408921669LLU;
	uint32_t x436 = UINT32_MAX;

	t60 = ((x433*(x434+x435))-x436);

	if (t60 != 18446744050005662653LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x437 = -1;
	static int8_t x438 = INT8_MIN;
	uint8_t x439 = 0U;
	static uint16_t x440 = UINT16_MAX;
	volatile int32_t t61 = -131296;

	t61 = ((x437*(x438+x439))-x440);

	if (t61 != -65407) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x441 = 15U;
	uint8_t x442 = 62U;
	int32_t x443 = 2086192;
	int8_t x444 = -1;

	t62 = ((x441*(x442+x443))-x444);

	if (t62 != 31293811U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x457 = INT16_MIN;
	uint8_t x458 = 87U;
	volatile int8_t x459 = -1;
	static volatile uint64_t x460 = 270LLU;
	static uint64_t t63 = 1979350726LLU;

	t63 = ((x457*(x458+x459))-x460);

	if (t63 != 18446744073706733298LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x461 = 38027144U;
	uint16_t x462 = 20U;
	volatile int16_t x463 = -1;
	uint32_t t64 = 64950875U;

	t64 = ((x461*(x462+x463))-x464);

	if (t64 != 722515650U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x465 = 49540LLU;
	volatile int8_t x466 = INT8_MAX;
	int8_t x467 = INT8_MIN;
	uint64_t t65 = 416487LLU;

	t65 = ((x465*(x466+x467))-x468);

	if (t65 != 18446744073709502204LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x474 = 784U;
	int8_t x476 = -1;
	volatile int64_t t66 = -3853513228LL;

	t66 = ((x473*(x474+x475))-x476);

	if (t66 != 622966LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x479 = -133870078LL;

	t67 = ((x477*(x478+x479))-x480);

	if (t67 != 253581439616LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x485 = 153914416LLU;
	volatile int64_t x486 = 26242052450502LL;
	uint64_t x487 = 1571LLU;
	int8_t x488 = INT8_MIN;
	uint64_t t68 = 10277742360LLU;

	t68 = ((x485*(x486+x487))-x488);

	if (t68 != 17639969733501532208LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x493 = 0U;
	uint8_t x494 = 0U;
	uint16_t x496 = UINT16_MAX;
	uint64_t t69 = 4493LLU;

	t69 = ((x493*(x494+x495))-x496);

	if (t69 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x505 = 0U;
	int16_t x507 = INT16_MIN;
	int8_t x508 = INT8_MIN;
	static volatile uint32_t t70 = 2003289U;

	t70 = ((x505*(x506+x507))-x508);

	if (t70 != 128U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x509 = UINT8_MAX;
	uint32_t x510 = 40U;
	volatile int32_t x512 = INT32_MIN;
	int64_t t71 = -16856558320LL;

	t71 = ((x509*(x510+x511))-x512);

	if (t71 != 258168851494204238LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x513 = UINT8_MAX;
	int16_t x514 = INT16_MIN;
	int64_t x516 = INT64_MIN;

	t72 = ((x513*(x514+x515))-x516);

	if (t72 != 9223372036846426853LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x522 = INT8_MAX;
	volatile int8_t x524 = 1;
	volatile uint64_t t73 = 2142162625171745596LLU;

	t73 = ((x521*(x522+x523))-x524);

	if (t73 != 18446744073500440313LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x525 = -1;
	int8_t x526 = -1;
	int16_t x527 = INT16_MIN;

	t74 = ((x525*(x526+x527))-x528);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x529 = 978U;
	static uint8_t x531 = UINT8_MAX;
	static uint16_t x532 = 246U;
	static int32_t t75 = 150;

	t75 = ((x529*(x530+x531))-x532);

	if (t75 != 248166) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x533 = -1;
	volatile int32_t x534 = 1;
	int8_t x535 = 3;
	int32_t x536 = -1467;

	t76 = ((x533*(x534+x535))-x536);

	if (t76 != 1463) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x541 = UINT8_MAX;
	uint8_t x542 = UINT8_MAX;
	int64_t x543 = -1LL;
	int32_t x544 = INT32_MAX;
	int64_t t77 = -843LL;

	t77 = ((x541*(x542+x543))-x544);

	if (t77 != -2147418877LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x545 = -1304;
	int32_t x546 = INT32_MAX;
	uint32_t x547 = 570684U;

	t78 = ((x545*(x546+x547))-x548);

	if (t78 != 3550796663U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x558 = INT8_MAX;
	volatile uint32_t x559 = UINT32_MAX;
	static int32_t x560 = 134;
	volatile uint32_t t79 = 18U;

	t79 = ((x557*(x558+x559))-x560);

	if (t79 != 31996U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x561 = INT32_MIN;
	uint16_t x562 = 74U;
	static uint32_t x563 = UINT32_MAX;
	volatile int32_t x564 = INT32_MAX;
	volatile uint32_t t80 = 3479U;

	t80 = ((x561*(x562+x563))-x564);

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x569 = 7;
	uint8_t x570 = 1U;
	uint32_t x571 = 154982U;
	volatile uint64_t t81 = 101116671918403LLU;

	t81 = ((x569*(x570+x571))-x572);

	if (t81 != 1084882LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x573 = 1096LLU;
	static volatile int8_t x574 = -1;
	static uint64_t x575 = UINT64_MAX;
	int16_t x576 = 500;
	volatile uint64_t t82 = 673785752LLU;

	t82 = ((x573*(x574+x575))-x576);

	if (t82 != 18446744073709548924LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x579 = -874;
	int64_t x580 = -3324136940890772019LL;
	volatile uint64_t t83 = 539948116279LLU;

	t83 = ((x577*(x578+x579))-x580);

	if (t83 != 3324136940889213644LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x586 = -1;
	volatile uint8_t x587 = 14U;
	int32_t x588 = INT32_MIN;

	t84 = ((x585*(x586+x587))-x588);

	if (t84 != 2147483635LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x593 = INT32_MIN;
	static int8_t x594 = 0;
	int16_t x595 = 0;
	int16_t x596 = INT16_MAX;
	volatile int32_t t85 = -31660;

	t85 = ((x593*(x594+x595))-x596);

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x598 = 45380962U;
	static uint16_t x599 = 1586U;
	volatile int64_t x600 = INT64_MAX;
	static volatile int64_t t86 = 167297763392567413LL;

	t86 = ((x597*(x598+x599))-x600);

	if (t86 != -9223372033596456959LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x601 = 211655190220257LLU;
	static volatile uint64_t x602 = 52LLU;
	int16_t x604 = INT16_MIN;
	static volatile uint64_t t87 = 317368LLU;

	t87 = ((x601*(x602+x603))-x604);

	if (t87 != 17144070407873585LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x605 = 62446331034736LLU;
	static int16_t x608 = INT16_MIN;
	static uint64_t t88 = 12602439LLU;

	t88 = ((x605*(x606+x607))-x608);

	if (t88 != 5881994064927218176LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x609 = 0LL;
	uint32_t x610 = UINT32_MAX;
	volatile uint32_t x611 = UINT32_MAX;
	int64_t x612 = 47705538206609668LL;
	int64_t t89 = -12236409778948283LL;

	t89 = ((x609*(x610+x611))-x612);

	if (t89 != -47705538206609668LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x613 = INT16_MIN;
	int8_t x616 = INT8_MAX;
	int32_t t90 = -713;

	t90 = ((x613*(x614+x615))-x616);

	if (t90 != 1073774465) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x621 = 1;
	int16_t x622 = 288;
	volatile int32_t x623 = -1;
	static int16_t x624 = -453;
	static int32_t t91 = -70159;

	t91 = ((x621*(x622+x623))-x624);

	if (t91 != 740) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x629 = 352U;
	uint8_t x630 = UINT8_MAX;
	int8_t x631 = INT8_MAX;
	volatile int64_t x632 = INT64_MAX;
	volatile int64_t t92 = -16426LL;

	t92 = ((x629*(x630+x631))-x632);

	if (t92 != -9223372036854641343LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x637 = INT8_MAX;
	int8_t x639 = INT8_MAX;
	volatile int8_t x640 = INT8_MAX;
	volatile int32_t t93 = 2867;

	t93 = ((x637*(x638+x639))-x640);

	if (t93 != 360553) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x642 = INT8_MIN;
	static int64_t x643 = -1LL;
	static int32_t x644 = -1;
	volatile int64_t t94 = 48LL;

	t94 = ((x641*(x642+x643))-x644);

	if (t94 != -143705LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x645 = UINT8_MAX;
	uint32_t x647 = 1198215359U;
	volatile uint64_t x648 = 4456222785183184147LLU;
	static volatile uint64_t t95 = 788689652578032801LLU;

	t95 = ((x645*(x646+x647))-x648);

	if (t95 != 13990521594040535349LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x653 = 37U;
	int64_t x656 = -1LL;
	volatile int64_t t96 = -2300LL;

	t96 = ((x653*(x654+x655))-x656);

	if (t96 != 79994425982LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x658 = -26368845;
	static uint8_t x659 = UINT8_MAX;
	uint8_t x660 = UINT8_MAX;

	t97 = ((x657*(x658+x659))-x660);

	if (t97 != -255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x661 = 695;
	int8_t x662 = INT8_MAX;
	int16_t x663 = INT16_MIN;
	static uint32_t x664 = 778841808U;
	uint32_t t98 = 0U;

	t98 = ((x661*(x662+x663))-x664);

	if (t98 != 3493439993U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x666 = 1U;
	static uint16_t x667 = 7U;
	uint32_t x668 = 593163550U;
	volatile uint32_t t99 = 1241U;

	t99 = ((x665*(x666+x667))-x668);

	if (t99 != 3702106106U) { NG(); } else { ; }
	
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

