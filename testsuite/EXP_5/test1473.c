#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = INT32_MAX;
volatile int32_t x15 = -4053580;
uint16_t x22 = UINT16_MAX;
uint16_t x24 = 3475U;
volatile int32_t x29 = 46441;
static volatile int32_t t5 = 69;
volatile int16_t x39 = INT16_MAX;
uint32_t x40 = 51U;
uint32_t x41 = 31067U;
static volatile uint32_t t7 = 170088131U;
int8_t x51 = 27;
int32_t x59 = INT32_MIN;
int32_t t11 = INT32_MIN;
static int32_t x63 = 1722540;
static int32_t t12 = 67;
uint16_t x65 = 0U;
int32_t x68 = INT32_MAX;
static int16_t x73 = INT16_MIN;
static int8_t x97 = 1;
uint64_t x102 = 78204866LLU;
uint64_t x104 = 436LLU;
volatile int32_t t18 = -3;
volatile int32_t t19 = INT32_MIN;
int32_t x145 = INT32_MIN;
static uint32_t x149 = 44823U;
uint32_t x156 = UINT32_MAX;
int64_t t22 = -236916157119LL;
int32_t x161 = -1;
int64_t x163 = INT64_MAX;
static uint64_t x166 = UINT64_MAX;
static int32_t t25 = 13749080;
static uint32_t x174 = 2U;
volatile int16_t x189 = -1;
volatile int32_t x194 = INT32_MIN;
static uint64_t x206 = UINT64_MAX;
int32_t x219 = INT32_MIN;
int32_t x222 = INT32_MIN;
static int32_t t33 = 15;
volatile uint8_t x240 = UINT8_MAX;
volatile int64_t x254 = INT64_MAX;
int64_t t35 = -2397127982LL;
uint64_t x268 = 282811927944789LLU;
uint32_t x271 = UINT32_MAX;
uint32_t x272 = 16054164U;
volatile int16_t x278 = -5;
uint16_t x282 = 33U;
int32_t x283 = -186309;
int32_t x288 = INT32_MAX;
volatile int32_t x297 = 15791;
uint16_t x302 = 9U;
volatile int8_t x309 = -1;
volatile int32_t t45 = -468215;
int16_t x325 = INT16_MIN;
volatile int8_t x328 = INT8_MAX;
volatile int32_t t47 = 3720018;
int32_t x351 = INT32_MAX;
static int64_t x357 = 20LL;
uint64_t x364 = 18436705LLU;
uint64_t x367 = UINT64_MAX;
volatile uint64_t t53 = UINT64_MAX;
int16_t x391 = INT16_MIN;
uint8_t x392 = 13U;
int64_t x396 = 6544265608LL;
int16_t x405 = INT16_MAX;
int32_t x418 = INT32_MIN;
uint8_t x440 = UINT8_MAX;
int32_t t69 = 13583;
static int64_t x454 = INT64_MIN;
int16_t x467 = INT16_MAX;
static uint64_t x469 = 1770492189636LLU;
int64_t x471 = INT64_MIN;
int32_t x472 = INT32_MAX;
int32_t x483 = INT32_MAX;
int32_t x490 = 426;
uint32_t x492 = 69057178U;
int8_t x495 = 0;
static int64_t x502 = INT64_MIN;
int64_t x507 = INT64_MIN;
uint32_t x510 = 6322140U;
static uint8_t x512 = UINT8_MAX;
int8_t x514 = 10;
volatile int32_t x521 = INT32_MAX;
int32_t x527 = INT32_MIN;
int64_t x531 = INT64_MIN;
volatile uint64_t x532 = 67189297134744LLU;
uint16_t x541 = 0U;
static volatile int64_t x545 = INT64_MAX;
uint16_t x548 = 48U;
uint32_t x558 = 3U;
int8_t x563 = -1;
static int64_t t89 = INT64_MAX;
static int8_t x578 = INT8_MAX;
int32_t x579 = -2312;
volatile int32_t t91 = -91207;
volatile int8_t x586 = INT8_MIN;
int8_t x607 = INT8_MIN;
uint8_t x608 = 1U;
volatile int8_t x617 = -1;
uint64_t x618 = 1197595681869589466LLU;
volatile int32_t x638 = -1;
int32_t t97 = INT32_MIN;
static int64_t x646 = -1LL;
volatile int16_t x650 = -1;


void f0(void) {
	uint32_t x1 = 201U;
	int64_t x2 = -17LL;
	uint16_t x3 = 3957U;
	int16_t x4 = 127;
	volatile uint32_t t0 = 374620259U;

	t0 = (x1/((x2<x3)<=x4));

	if (t0 != 201U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static int8_t x6 = 42;
	int32_t x7 = INT32_MAX;
	uint32_t x8 = 52U;
	int32_t t1 = INT32_MIN;

	t1 = (x5/((x6<x7)<=x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	static int8_t x10 = -1;
	int16_t x11 = 2;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (x9/((x10<x11)<=x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 5979U;
	int64_t x14 = INT64_MIN;
	int64_t x16 = 12LL;
	static volatile uint32_t t3 = 2343484U;

	t3 = (x13/((x14<x15)<=x16));

	if (t3 != 5979U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = -1LL;
	static int8_t x23 = INT8_MIN;
	volatile int64_t t4 = 632LL;

	t4 = (x21/((x22<x23)<=x24));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x30 = 2152;
	int64_t x31 = -271LL;
	static int64_t x32 = 28790014199777LL;

	t5 = (x29/((x30<x31)<=x32));

	if (t5 != 46441) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x37 = -1600;
	int32_t x38 = INT32_MIN;
	int32_t t6 = 244;

	t6 = (x37/((x38<x39)<=x40));

	if (t6 != -1600) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x42 = UINT64_MAX;
	volatile int64_t x43 = -1LL;
	int32_t x44 = 82690015;

	t7 = (x41/((x42<x43)<=x44));

	if (t7 != 31067U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x45 = UINT32_MAX;
	uint16_t x46 = UINT16_MAX;
	uint16_t x47 = 835U;
	static int16_t x48 = 120;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = (x45/((x46<x47)<=x48));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = -1;
	int8_t x50 = -2;
	uint8_t x52 = 24U;
	int32_t t9 = 95;

	t9 = (x49/((x50<x51)<=x52));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	volatile uint8_t x54 = UINT8_MAX;
	volatile int32_t x55 = INT32_MIN;
	static uint8_t x56 = 84U;
	int32_t t10 = 18875082;

	t10 = (x53/((x54<x55)<=x56));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MIN;
	uint8_t x60 = 2U;

	t11 = (x57/((x58<x59)<=x60));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = -1;
	int64_t x62 = INT64_MIN;
	uint64_t x64 = 453LLU;

	t12 = (x61/((x62<x63)<=x64));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x66 = -1LL;
	int32_t x67 = 361;
	volatile int32_t t13 = -384844;

	t13 = (x65/((x66<x67)<=x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MIN;
	volatile int16_t x70 = -1;
	uint32_t x71 = UINT32_MAX;
	int32_t x72 = INT32_MAX;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x69/((x70<x71)<=x72));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x74 = UINT16_MAX;
	int64_t x75 = INT64_MIN;
	uint8_t x76 = 1U;
	volatile int32_t t15 = -12;

	t15 = (x73/((x74<x75)<=x76));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x93 = UINT8_MAX;
	int16_t x94 = -123;
	static int32_t x95 = -44207;
	volatile int8_t x96 = 28;
	volatile int32_t t16 = 1;

	t16 = (x93/((x94<x95)<=x96));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x98 = 0U;
	int32_t x99 = -1;
	uint16_t x100 = 400U;
	int32_t t17 = 16669975;

	t17 = (x97/((x98<x99)<=x100));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = 14;
	static int16_t x103 = -1;

	t18 = (x101/((x102<x103)<=x104));

	if (t18 != 14) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x117 = INT32_MIN;
	int16_t x118 = -1;
	int16_t x119 = -758;
	static int16_t x120 = 911;

	t19 = (x117/((x118<x119)<=x120));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x146 = UINT32_MAX;
	int32_t x147 = INT32_MIN;
	uint8_t x148 = 37U;
	int32_t t20 = INT32_MIN;

	t20 = (x145/((x146<x147)<=x148));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x150 = INT8_MAX;
	uint8_t x151 = UINT8_MAX;
	static uint64_t x152 = UINT64_MAX;
	uint32_t t21 = 616222U;

	t21 = (x149/((x150<x151)<=x152));

	if (t21 != 44823U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x153 = -348LL;
	int32_t x154 = -1;
	int32_t x155 = -1;

	t22 = (x153/((x154<x155)<=x156));

	if (t22 != -348LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x157 = 3564U;
	static int16_t x158 = 0;
	int16_t x159 = INT16_MAX;
	int32_t x160 = INT32_MAX;
	int32_t t23 = 305;

	t23 = (x157/((x158<x159)<=x160));

	if (t23 != 3564) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x162 = 834U;
	uint64_t x164 = 26072LLU;
	volatile int32_t t24 = 31;

	t24 = (x161/((x162<x163)<=x164));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x165 = -1967;
	volatile uint64_t x167 = 44243193564473262LLU;
	volatile uint64_t x168 = UINT64_MAX;

	t25 = (x165/((x166<x167)<=x168));

	if (t25 != -1967) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x173 = INT16_MIN;
	uint16_t x175 = 6U;
	static int32_t x176 = 1921887;
	static int32_t t26 = 2;

	t26 = (x173/((x174<x175)<=x176));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x177 = INT8_MIN;
	volatile int32_t x178 = INT32_MAX;
	int8_t x179 = 12;
	static uint16_t x180 = UINT16_MAX;
	static int32_t t27 = -28304;

	t27 = (x177/((x178<x179)<=x180));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x185 = INT8_MAX;
	int32_t x186 = -1;
	static volatile int64_t x187 = -21045367595537265LL;
	volatile uint64_t x188 = UINT64_MAX;
	int32_t t28 = 2517451;

	t28 = (x185/((x186<x187)<=x188));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x190 = INT16_MAX;
	static int64_t x191 = -2474739666240LL;
	uint64_t x192 = UINT64_MAX;
	int32_t t29 = -1;

	t29 = (x189/((x190<x191)<=x192));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x193 = INT16_MIN;
	int16_t x195 = -1603;
	volatile int16_t x196 = 181;
	volatile int32_t t30 = 425701901;

	t30 = (x193/((x194<x195)<=x196));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x205 = INT16_MIN;
	static int32_t x207 = -1425;
	static volatile int32_t x208 = INT32_MAX;
	volatile int32_t t31 = -140530559;

	t31 = (x205/((x206<x207)<=x208));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x217 = INT16_MAX;
	uint8_t x218 = 0U;
	static volatile int16_t x220 = 2152;
	static int32_t t32 = 1;

	t32 = (x217/((x218<x219)<=x220));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x221 = 4U;
	volatile uint8_t x223 = 109U;
	uint32_t x224 = 1539U;

	t33 = (x221/((x222<x223)<=x224));

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x238 = INT64_MIN;
	int32_t x239 = -64106;
	uint64_t t34 = UINT64_MAX;

	t34 = (x237/((x238<x239)<=x240));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x253 = 7140LL;
	static int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MAX;

	t35 = (x253/((x254<x255)<=x256));

	if (t35 != 7140LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x265 = INT16_MIN;
	int16_t x266 = 151;
	int64_t x267 = -120540092LL;
	static int32_t t36 = 525;

	t36 = (x265/((x266<x267)<=x268));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x269 = INT64_MIN;
	volatile int16_t x270 = 0;
	volatile int64_t t37 = INT64_MIN;

	t37 = (x269/((x270<x271)<=x272));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x277 = -190587406542467LL;
	int32_t x279 = INT32_MIN;
	int8_t x280 = INT8_MAX;
	volatile int64_t t38 = 239799642LL;

	t38 = (x277/((x278<x279)<=x280));

	if (t38 != -190587406542467LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x281 = INT32_MIN;
	int32_t x284 = 1962458;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x281/((x282<x283)<=x284));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x285 = 219;
	int8_t x286 = -1;
	volatile int8_t x287 = INT8_MIN;
	int32_t t40 = 0;

	t40 = (x285/((x286<x287)<=x288));

	if (t40 != 219) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x289 = 1U;
	uint64_t x290 = 244171812LLU;
	int64_t x291 = 535797834LL;
	static volatile uint16_t x292 = 1U;
	int32_t t41 = -189715;

	t41 = (x289/((x290<x291)<=x292));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x298 = 380;
	int16_t x299 = INT16_MIN;
	uint16_t x300 = 9843U;
	int32_t t42 = -71420;

	t42 = (x297/((x298<x299)<=x300));

	if (t42 != 15791) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x301 = 258441485U;
	uint8_t x303 = 1U;
	uint32_t x304 = 135838025U;
	uint32_t t43 = 2U;

	t43 = (x301/((x302<x303)<=x304));

	if (t43 != 258441485U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x305 = INT16_MAX;
	static uint16_t x306 = 4U;
	int8_t x307 = INT8_MIN;
	uint16_t x308 = 7U;
	volatile int32_t t44 = -54527;

	t44 = (x305/((x306<x307)<=x308));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x310 = 1919044737771261LLU;
	uint16_t x311 = 1U;
	uint32_t x312 = UINT32_MAX;

	t45 = (x309/((x310<x311)<=x312));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x326 = -23;
	int32_t x327 = INT32_MAX;
	int32_t t46 = -286523801;

	t46 = (x325/((x326<x327)<=x328));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x345 = 3;
	uint32_t x346 = 2012572U;
	static volatile int8_t x347 = INT8_MIN;
	int16_t x348 = 4;

	t47 = (x345/((x346<x347)<=x348));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x349 = 25U;
	volatile uint16_t x350 = 3182U;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t48 = 0;

	t48 = (x349/((x350<x351)<=x352));

	if (t48 != 25) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x353 = 124U;
	uint8_t x354 = 2U;
	int32_t x355 = 73740;
	static int16_t x356 = 1;
	int32_t t49 = 0;

	t49 = (x353/((x354<x355)<=x356));

	if (t49 != 124) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x358 = 7U;
	int64_t x359 = INT64_MAX;
	int32_t x360 = 424;
	int64_t t50 = 211010510LL;

	t50 = (x357/((x358<x359)<=x360));

	if (t50 != 20LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x361 = 3300U;
	uint8_t x362 = 0U;
	int64_t x363 = INT64_MAX;
	uint32_t t51 = 3966486U;

	t51 = (x361/((x362<x363)<=x364));

	if (t51 != 3300U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x365 = INT32_MAX;
	static uint16_t x366 = UINT16_MAX;
	static volatile uint32_t x368 = 9U;
	static volatile int32_t t52 = INT32_MAX;

	t52 = (x365/((x366<x367)<=x368));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int8_t x370 = -1;
	int16_t x371 = -774;
	uint16_t x372 = 7U;

	t53 = (x369/((x370<x371)<=x372));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x377 = INT32_MIN;
	volatile int64_t x378 = INT64_MAX;
	static int32_t x379 = INT32_MIN;
	volatile uint16_t x380 = 69U;
	int32_t t54 = INT32_MIN;

	t54 = (x377/((x378<x379)<=x380));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x381 = -1;
	uint8_t x382 = 4U;
	static int8_t x383 = 1;
	static int16_t x384 = INT16_MAX;
	volatile int32_t t55 = 233738;

	t55 = (x381/((x382<x383)<=x384));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x385 = 15U;
	uint16_t x386 = 3226U;
	uint8_t x387 = 28U;
	int16_t x388 = 0;
	int32_t t56 = 193;

	t56 = (x385/((x386<x387)<=x388));

	if (t56 != 15) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x389 = INT16_MAX;
	uint32_t x390 = UINT32_MAX;
	static volatile int32_t t57 = 0;

	t57 = (x389/((x390<x391)<=x392));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x393 = 62;
	static int16_t x394 = 628;
	uint32_t x395 = 2679504U;
	static int32_t t58 = -43924691;

	t58 = (x393/((x394<x395)<=x396));

	if (t58 != 62) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x397 = -124;
	int8_t x398 = 0;
	int16_t x399 = -1;
	int8_t x400 = 0;
	volatile int32_t t59 = 0;

	t59 = (x397/((x398<x399)<=x400));

	if (t59 != -124) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x406 = UINT32_MAX;
	uint8_t x407 = UINT8_MAX;
	uint32_t x408 = UINT32_MAX;
	int32_t t60 = 828856668;

	t60 = (x405/((x406<x407)<=x408));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x413 = 25316473U;
	uint16_t x414 = UINT16_MAX;
	volatile int16_t x415 = INT16_MIN;
	uint32_t x416 = 8369635U;
	volatile uint32_t t61 = 304U;

	t61 = (x413/((x414<x415)<=x416));

	if (t61 != 25316473U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x417 = UINT32_MAX;
	uint8_t x419 = 48U;
	int16_t x420 = 43;
	uint32_t t62 = UINT32_MAX;

	t62 = (x417/((x418<x419)<=x420));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x421 = 5870912949719435LLU;
	volatile uint8_t x422 = UINT8_MAX;
	static int64_t x423 = INT64_MIN;
	static uint8_t x424 = UINT8_MAX;
	volatile uint64_t t63 = 286892136LLU;

	t63 = (x421/((x422<x423)<=x424));

	if (t63 != 5870912949719435LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x425 = INT8_MAX;
	int64_t x426 = INT64_MIN;
	static volatile int64_t x427 = 61771852281931LL;
	volatile uint64_t x428 = 409LLU;
	int32_t t64 = -108439;

	t64 = (x425/((x426<x427)<=x428));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x429 = 3U;
	int16_t x430 = INT16_MIN;
	static int16_t x431 = -136;
	int64_t x432 = INT64_MAX;
	uint32_t t65 = 4U;

	t65 = (x429/((x430<x431)<=x432));

	if (t65 != 3U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x437 = UINT64_MAX;
	int64_t x438 = 449745589LL;
	int16_t x439 = INT16_MAX;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x437/((x438<x439)<=x440));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x441 = INT8_MIN;
	static uint64_t x442 = 5429LLU;
	int32_t x443 = 157353037;
	int16_t x444 = 14;
	static int32_t t67 = -57043;

	t67 = (x441/((x442<x443)<=x444));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x445 = -1;
	int64_t x446 = 13402467798LL;
	int8_t x447 = INT8_MAX;
	int64_t x448 = INT64_MAX;
	int32_t t68 = -12;

	t68 = (x445/((x446<x447)<=x448));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x449 = INT16_MIN;
	volatile int16_t x450 = INT16_MIN;
	int32_t x451 = INT32_MIN;
	uint8_t x452 = 102U;

	t69 = (x449/((x450<x451)<=x452));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x453 = 47U;
	int32_t x455 = 740477;
	uint8_t x456 = UINT8_MAX;
	int32_t t70 = -6084;

	t70 = (x453/((x454<x455)<=x456));

	if (t70 != 47) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x457 = INT64_MIN;
	static int32_t x458 = INT32_MIN;
	static int32_t x459 = -11895;
	uint16_t x460 = 217U;
	static volatile int64_t t71 = INT64_MIN;

	t71 = (x457/((x458<x459)<=x460));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x461 = 6LLU;
	static int32_t x462 = INT32_MIN;
	volatile int32_t x463 = -1230;
	int64_t x464 = 106267LL;
	static volatile uint64_t t72 = 89266297294LLU;

	t72 = (x461/((x462<x463)<=x464));

	if (t72 != 6LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x465 = 3;
	static int8_t x466 = -1;
	uint16_t x468 = 263U;
	volatile int32_t t73 = -45937724;

	t73 = (x465/((x466<x467)<=x468));

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x470 = UINT32_MAX;
	volatile uint64_t t74 = 521160LLU;

	t74 = (x469/((x470<x471)<=x472));

	if (t74 != 1770492189636LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x481 = 15U;
	volatile int64_t x482 = INT64_MAX;
	uint32_t x484 = 1U;
	int32_t t75 = -3;

	t75 = (x481/((x482<x483)<=x484));

	if (t75 != 15) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x489 = INT32_MAX;
	static uint16_t x491 = UINT16_MAX;
	volatile int32_t t76 = INT32_MAX;

	t76 = (x489/((x490<x491)<=x492));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x493 = 3233601U;
	int64_t x494 = INT64_MIN;
	volatile uint32_t x496 = UINT32_MAX;
	uint32_t t77 = 7U;

	t77 = (x493/((x494<x495)<=x496));

	if (t77 != 3233601U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x501 = 7U;
	int32_t x503 = 21769;
	static uint16_t x504 = UINT16_MAX;
	volatile int32_t t78 = -97007192;

	t78 = (x501/((x502<x503)<=x504));

	if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x505 = -1;
	uint32_t x506 = 4674U;
	uint32_t x508 = 109491383U;
	volatile int32_t t79 = 406256;

	t79 = (x505/((x506<x507)<=x508));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x509 = INT16_MIN;
	uint64_t x511 = 5266366LLU;
	volatile int32_t t80 = 17;

	t80 = (x509/((x510<x511)<=x512));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x513 = INT32_MAX;
	uint64_t x515 = 164787534137069765LLU;
	uint32_t x516 = 3046U;
	static int32_t t81 = INT32_MAX;

	t81 = (x513/((x514<x515)<=x516));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x522 = INT32_MAX;
	int64_t x523 = INT64_MAX;
	volatile uint8_t x524 = UINT8_MAX;
	volatile int32_t t82 = INT32_MAX;

	t82 = (x521/((x522<x523)<=x524));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x525 = INT8_MAX;
	uint8_t x526 = UINT8_MAX;
	int8_t x528 = INT8_MAX;
	static volatile int32_t t83 = -6240;

	t83 = (x525/((x526<x527)<=x528));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x529 = 51U;
	volatile int8_t x530 = -1;
	volatile int32_t t84 = -13979676;

	t84 = (x529/((x530<x531)<=x532));

	if (t84 != 51) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x533 = 7U;
	int8_t x534 = INT8_MIN;
	volatile int8_t x535 = INT8_MAX;
	uint8_t x536 = 43U;
	volatile int32_t t85 = -27063765;

	t85 = (x533/((x534<x535)<=x536));

	if (t85 != 7) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x542 = 1743U;
	static int16_t x543 = INT16_MIN;
	uint64_t x544 = UINT64_MAX;
	static volatile int32_t t86 = 471894;

	t86 = (x541/((x542<x543)<=x544));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x546 = INT8_MIN;
	int16_t x547 = 598;
	static int64_t t87 = INT64_MAX;

	t87 = (x545/((x546<x547)<=x548));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x557 = INT16_MAX;
	volatile uint16_t x559 = 6U;
	int16_t x560 = 6392;
	static int32_t t88 = -3795854;

	t88 = (x557/((x558<x559)<=x560));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x561 = INT64_MAX;
	int32_t x562 = INT32_MIN;
	int64_t x564 = 21606842LL;

	t89 = (x561/((x562<x563)<=x564));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x569 = INT64_MIN;
	volatile uint16_t x570 = UINT16_MAX;
	int8_t x571 = -1;
	static int16_t x572 = 26;
	int64_t t90 = INT64_MIN;

	t90 = (x569/((x570<x571)<=x572));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x577 = UINT8_MAX;
	static uint32_t x580 = 44U;

	t91 = (x577/((x578<x579)<=x580));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x581 = -31;
	int64_t x582 = -1LL;
	int16_t x583 = -1;
	uint32_t x584 = UINT32_MAX;
	volatile int32_t t92 = -3;

	t92 = (x581/((x582<x583)<=x584));

	if (t92 != -31) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x585 = 13513LL;
	volatile int64_t x587 = INT64_MIN;
	uint16_t x588 = UINT16_MAX;
	volatile int64_t t93 = 1549237435LL;

	t93 = (x585/((x586<x587)<=x588));

	if (t93 != 13513LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x605 = INT16_MAX;
	int8_t x606 = INT8_MIN;
	volatile int32_t t94 = -228966565;

	t94 = (x605/((x606<x607)<=x608));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x619 = 68U;
	static volatile uint32_t x620 = 0U;
	volatile int32_t t95 = 65;

	t95 = (x617/((x618<x619)<=x620));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x625 = 8U;
	int16_t x626 = INT16_MIN;
	int16_t x627 = 15172;
	uint64_t x628 = 97617LLU;
	uint32_t t96 = 415112423U;

	t96 = (x625/((x626<x627)<=x628));

	if (t96 != 8U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x637 = INT32_MIN;
	volatile uint16_t x639 = 1743U;
	int8_t x640 = 10;

	t97 = (x637/((x638<x639)<=x640));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x645 = -1LL;
	static uint32_t x647 = UINT32_MAX;
	static uint16_t x648 = UINT16_MAX;
	volatile int64_t t98 = -275078764272415866LL;

	t98 = (x645/((x646<x647)<=x648));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x649 = INT64_MIN;
	uint8_t x651 = 0U;
	volatile int16_t x652 = INT16_MAX;
	volatile int64_t t99 = INT64_MIN;

	t99 = (x649/((x650<x651)<=x652));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

