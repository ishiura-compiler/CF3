#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MIN;
volatile int16_t x46 = -178;
int16_t x48 = INT16_MIN;
uint32_t t3 = 91105U;
volatile uint64_t t5 = UINT64_MAX;
uint64_t x73 = 6416606047029187036LLU;
int16_t x92 = INT16_MIN;
volatile int16_t x99 = -1;
int64_t t9 = 6LL;
static volatile uint16_t x109 = 151U;
int16_t x110 = INT16_MIN;
static uint16_t x117 = UINT16_MAX;
static int16_t x149 = -1;
int8_t x190 = INT8_MIN;
uint64_t x206 = 1583546155LLU;
static volatile uint64_t t20 = 363184923479639LLU;
uint8_t x214 = UINT8_MAX;
int64_t t21 = -278931880606LL;
static int32_t x232 = 11;
volatile int32_t x254 = INT32_MIN;
uint64_t t25 = 50224434990983005LLU;
int64_t x268 = -1LL;
int32_t x270 = INT32_MIN;
static int16_t x273 = INT16_MIN;
static int16_t x274 = INT16_MIN;
static int8_t x276 = INT8_MAX;
volatile int8_t x302 = INT8_MIN;
static uint32_t x327 = 3U;
volatile int32_t x349 = INT32_MIN;
volatile int64_t x355 = -1LL;
volatile int64_t x382 = INT64_MIN;
int8_t x383 = -3;
int8_t x388 = INT8_MIN;
volatile int64_t x390 = -193652473647LL;
uint32_t x391 = 3U;
int64_t t41 = 3766573079481358207LL;
uint64_t x408 = 4456565244365229LLU;
volatile uint64_t t43 = 42542863087LLU;
static int8_t x421 = INT8_MIN;
volatile int8_t x425 = INT8_MIN;
int8_t x426 = INT8_MIN;
uint32_t x430 = UINT32_MAX;
uint32_t t49 = 592597U;
int8_t x450 = -1;
int64_t x481 = INT64_MIN;
static uint32_t x485 = 7543U;
uint8_t x489 = 23U;
static int32_t x492 = 11354216;
static int32_t x495 = -1;
volatile int32_t t55 = 61;
int32_t x498 = INT32_MAX;
int8_t x499 = INT8_MIN;
volatile int16_t x500 = INT16_MIN;
volatile int32_t t56 = -2;
uint32_t x508 = 660U;
volatile uint64_t t57 = 278034797560LLU;
static volatile int64_t x517 = 98441464662793625LL;
uint64_t x525 = UINT64_MAX;
static volatile uint64_t t60 = 2695948110LLU;
uint8_t x531 = 11U;
int16_t x537 = INT16_MAX;
volatile int64_t t62 = -3LL;
int64_t x541 = INT64_MAX;
int64_t x570 = INT64_MAX;
static int32_t x574 = INT32_MAX;
uint32_t x578 = UINT32_MAX;
int64_t x580 = -1LL;
volatile int16_t x602 = -2;
uint64_t x603 = 34933LLU;
static volatile uint64_t t74 = 111921405394LLU;
int64_t x606 = INT64_MIN;
static uint32_t x631 = 110938021U;
int64_t x634 = INT64_MIN;
volatile int32_t x641 = INT32_MAX;
int16_t x643 = INT16_MAX;
uint8_t x660 = 1U;
static int32_t t80 = -2;
volatile uint16_t x662 = UINT16_MAX;
static int16_t x675 = INT16_MIN;
volatile uint64_t t83 = 74736332348882871LLU;
static int64_t t84 = -16843545148489553LL;
uint16_t x697 = 1893U;
uint32_t x703 = 369U;
static uint32_t x707 = 450U;
int32_t x723 = -17487797;
int8_t x735 = -1;
volatile int32_t x753 = INT32_MIN;
volatile int8_t x763 = -1;
int8_t x777 = INT8_MIN;
static uint32_t x779 = 122970U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int64_t x2 = INT64_MIN;
	volatile uint32_t x3 = UINT32_MAX;
	static int32_t x4 = INT32_MAX;
	volatile int64_t t0 = 121960387700667LL;

	t0 = ((x1%(x2/x3))+x4);

	if (t0 != 2147483519LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	int8_t x11 = 15;
	volatile int32_t x12 = -968028853;
	static int64_t t1 = 2741540LL;

	t1 = ((x9%(x10/x11))+x12);

	if (t1 != -968028854LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = INT8_MIN;
	uint32_t x26 = UINT32_MAX;
	int64_t x27 = -467147157LL;
	int8_t x28 = INT8_MAX;
	volatile int64_t t2 = -44458LL;

	t2 = ((x25%(x26/x27))+x28);

	if (t2 != 125LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x45 = UINT32_MAX;
	int8_t x47 = INT8_MIN;

	t3 = ((x45%(x46/x47))+x48);

	if (t3 != 4294934528U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MIN;
	uint64_t x63 = 3471LLU;
	int64_t x64 = INT64_MIN;
	static volatile uint64_t t4 = 0LLU;

	t4 = ((x61%(x62/x63))+x64);

	if (t4 != 9223372039002259684LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x69 = INT64_MIN;
	uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	static uint64_t x72 = UINT64_MAX;

	t5 = ((x69%(x70/x71))+x72);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x74 = 2588673U;
	static int16_t x75 = INT16_MAX;
	static int32_t x76 = -1;
	volatile uint64_t t6 = 6225314215761161LLU;

	t6 = ((x73%(x74/x75))+x76);

	if (t6 != 70LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x89 = 10077740263LLU;
	int32_t x90 = -1;
	uint32_t x91 = UINT32_MAX;
	uint64_t t7 = 7329LLU;

	t7 = ((x89%(x90/x91))+x92);

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x97 = 48;
	uint16_t x98 = UINT16_MAX;
	int16_t x100 = 12929;
	static volatile int32_t t8 = -505030209;

	t8 = ((x97%(x98/x99))+x100);

	if (t8 != 12977) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x101 = 12574;
	int32_t x102 = INT32_MAX;
	int64_t x103 = -147405LL;
	int64_t x104 = -700883355LL;

	t9 = ((x101%(x102/x103))+x104);

	if (t9 != -700870781LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x105 = 314;
	volatile uint32_t x106 = UINT32_MAX;
	int16_t x107 = INT16_MIN;
	static int32_t x108 = 33;
	uint32_t t10 = 59396581U;

	t10 = ((x105%(x106/x107))+x108);

	if (t10 != 33U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x111 = UINT8_MAX;
	volatile int16_t x112 = -60;
	volatile int32_t t11 = -921;

	t11 = ((x109%(x110/x111))+x112);

	if (t11 != -37) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x118 = INT64_MIN;
	int32_t x119 = INT32_MIN;
	int64_t x120 = -431668743821827LL;
	volatile int64_t t12 = -25730866519274172LL;

	t12 = ((x117%(x118/x119))+x120);

	if (t12 != -431668743756292LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x125 = INT32_MAX;
	volatile uint8_t x126 = UINT8_MAX;
	uint8_t x127 = UINT8_MAX;
	int64_t x128 = INT64_MAX;
	volatile int64_t t13 = INT64_MAX;

	t13 = ((x125%(x126/x127))+x128);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x129 = -1;
	int64_t x130 = INT64_MIN;
	volatile int16_t x131 = 294;
	volatile uint16_t x132 = 220U;
	static int64_t t14 = -1682470133531LL;

	t14 = ((x129%(x130/x131))+x132);

	if (t14 != 219LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x137 = -55990541;
	static int32_t x138 = INT32_MAX;
	int8_t x139 = INT8_MIN;
	int32_t x140 = -289819;
	int32_t t15 = 281975;

	t15 = ((x137%(x138/x139))+x140);

	if (t15 != -5948715) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x150 = INT16_MAX;
	static volatile int16_t x151 = -853;
	int32_t x152 = 247;
	static int32_t t16 = 3;

	t16 = ((x149%(x150/x151))+x152);

	if (t16 != 246) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x177 = 6737955328937LL;
	static int32_t x178 = -1456;
	uint16_t x179 = 449U;
	static uint32_t x180 = 1389U;
	int64_t t17 = 255194022317206LL;

	t17 = ((x177%(x178/x179))+x180);

	if (t17 != 1391LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x181 = 5U;
	int64_t x182 = 258238LL;
	uint16_t x183 = 63U;
	uint8_t x184 = UINT8_MAX;
	volatile int64_t t18 = 14222LL;

	t18 = ((x181%(x182/x183))+x184);

	if (t18 != 260LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x189 = 5390U;
	volatile uint64_t x191 = 1985773855LLU;
	int16_t x192 = -1;
	uint64_t t19 = 46LLU;

	t19 = ((x189%(x190/x191))+x192);

	if (t19 != 5389LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x205 = INT16_MIN;
	static int8_t x207 = INT8_MAX;
	int32_t x208 = INT32_MAX;

	t20 = ((x205%(x206/x207))+x208);

	if (t20 != 2154873534LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x213 = INT64_MIN;
	int64_t x215 = -1LL;
	static int16_t x216 = INT16_MIN;

	t21 = ((x213%(x214/x215))+x216);

	if (t21 != -32896LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MIN;
	uint8_t x231 = 55U;
	int32_t t22 = 1;

	t22 = ((x229%(x230/x231))+x232);

	if (t22 != -117) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x245 = -1;
	uint16_t x246 = 9048U;
	uint32_t x247 = 728U;
	uint32_t x248 = UINT32_MAX;
	volatile uint32_t t23 = 543U;

	t23 = ((x245%(x246/x247))+x248);

	if (t23 != 2U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x253 = -1;
	int8_t x255 = INT8_MIN;
	int8_t x256 = 3;
	int32_t t24 = 84764;

	t24 = ((x253%(x254/x255))+x256);

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x261 = -1LL;
	static uint32_t x262 = UINT32_MAX;
	volatile int8_t x263 = -1;
	uint64_t x264 = 17627262119LLU;

	t25 = ((x261%(x262/x263))+x264);

	if (t25 != 17627262119LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x265 = INT8_MIN;
	int8_t x266 = -20;
	int8_t x267 = 1;
	volatile int64_t t26 = 105589763290LL;

	t26 = ((x265%(x266/x267))+x268);

	if (t26 != -9LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x269 = 62;
	uint64_t x271 = 1749LLU;
	static uint64_t x272 = 3941862223880LLU;
	volatile uint64_t t27 = 13169482244579LLU;

	t27 = ((x269%(x270/x271))+x272);

	if (t27 != 3941862223942LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x275 = 7873;
	int32_t t28 = 104;

	t28 = ((x273%(x274/x275))+x276);

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x289 = 163466942459LLU;
	static int16_t x290 = -1;
	static uint32_t x291 = 5477U;
	static int32_t x292 = INT32_MAX;
	volatile uint64_t t29 = 4LLU;

	t29 = ((x289%(x290/x291))+x292);

	if (t29 != 2147767296LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MAX;
	int16_t x300 = INT16_MAX;
	int32_t t30 = -13124;

	t30 = ((x297%(x298/x299))+x300);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x301 = UINT32_MAX;
	static int16_t x303 = -1;
	static int32_t x304 = -2;
	uint32_t t31 = 5729U;

	t31 = ((x301%(x302/x303))+x304);

	if (t31 != 125U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x321 = 4157513902731638LL;
	static volatile int16_t x322 = -417;
	static int64_t x323 = -1LL;
	int8_t x324 = -1;
	volatile int64_t t32 = 0LL;

	t32 = ((x321%(x322/x323))+x324);

	if (t32 != 154LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x325 = INT8_MIN;
	volatile int64_t x326 = INT64_MIN;
	static int32_t x328 = 142643;
	int64_t t33 = 6LL;

	t33 = ((x325%(x326/x327))+x328);

	if (t33 != 142515LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x333 = 7946U;
	int16_t x334 = INT16_MIN;
	static int8_t x335 = -1;
	uint64_t x336 = 8327785599373236422LLU;
	static volatile uint64_t t34 = 324659155557321142LLU;

	t34 = ((x333%(x334/x335))+x336);

	if (t34 != 8327785599373244368LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x350 = INT8_MIN;
	volatile uint8_t x351 = 127U;
	volatile int8_t x352 = 7;
	int32_t t35 = -408;

	t35 = ((x349%(x350/x351))+x352);

	if (t35 != 7) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x353 = INT16_MIN;
	int32_t x354 = -1;
	int16_t x356 = 2017;
	volatile int64_t t36 = -2563287750261858414LL;

	t36 = ((x353%(x354/x355))+x356);

	if (t36 != 2017LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x365 = INT32_MIN;
	static int64_t x366 = INT64_MAX;
	int64_t x367 = INT64_MAX;
	static uint32_t x368 = UINT32_MAX;
	int64_t t37 = 0LL;

	t37 = ((x365%(x366/x367))+x368);

	if (t37 != 4294967295LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x369 = UINT64_MAX;
	int16_t x370 = INT16_MIN;
	uint16_t x371 = 1409U;
	static int8_t x372 = 2;
	static volatile uint64_t t38 = 969852926074931LLU;

	t38 = ((x369%(x370/x371))+x372);

	if (t38 != 24LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x381 = INT16_MAX;
	static int8_t x384 = INT8_MIN;
	int64_t t39 = 7LL;

	t39 = ((x381%(x382/x383))+x384);

	if (t39 != 32639LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x385 = UINT32_MAX;
	uint32_t x386 = UINT32_MAX;
	static int16_t x387 = INT16_MAX;
	static volatile uint32_t t40 = 40309859U;

	t40 = ((x385%(x386/x387))+x388);

	if (t40 != 4294967171U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x389 = 273044428380LL;
	static int64_t x392 = 214613072767970682LL;

	t41 = ((x389%(x390/x391))+x392);

	if (t41 != 214613087609100866LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x401 = 14911U;
	static int64_t x402 = 710897152LL;
	int8_t x403 = -6;
	uint32_t x404 = 15537484U;
	int64_t t42 = 4063595342329LL;

	t42 = ((x401%(x402/x403))+x404);

	if (t42 != 15552395LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x405 = 19084163427288574LLU;
	volatile int16_t x406 = 9301;
	static int8_t x407 = INT8_MIN;

	t43 = ((x405%(x406/x407))+x408);

	if (t43 != 23540728671653803LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x409 = INT64_MIN;
	int16_t x410 = INT16_MIN;
	volatile int8_t x411 = 39;
	static int8_t x412 = INT8_MAX;
	volatile int64_t t44 = 25159LL;

	t44 = ((x409%(x410/x411))+x412);

	if (t44 != 119LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x413 = -9445;
	uint8_t x414 = 58U;
	volatile uint8_t x415 = 36U;
	uint8_t x416 = 75U;
	static volatile int32_t t45 = -48014;

	t45 = ((x413%(x414/x415))+x416);

	if (t45 != 75) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x417 = UINT32_MAX;
	int8_t x418 = INT8_MIN;
	uint32_t x419 = 2760605U;
	volatile uint64_t x420 = 9LLU;
	static uint64_t t46 = 103LLU;

	t46 = ((x417%(x418/x419))+x420);

	if (t46 != 1324LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x422 = INT64_MIN;
	int64_t x423 = INT64_MIN;
	int64_t x424 = -14775964140335LL;
	volatile int64_t t47 = 1963879166003678544LL;

	t47 = ((x421%(x422/x423))+x424);

	if (t47 != -14775964140335LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x427 = 1U;
	int64_t x428 = INT64_MIN;
	int64_t t48 = INT64_MIN;

	t48 = ((x425%(x426/x427))+x428);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x429 = -1;
	int8_t x431 = INT8_MIN;
	volatile uint8_t x432 = 3U;

	t49 = ((x429%(x430/x431))+x432);

	if (t49 != 3U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x449 = -6;
	volatile int8_t x451 = -1;
	int32_t x452 = INT32_MIN;
	volatile int32_t t50 = INT32_MIN;

	t50 = ((x449%(x450/x451))+x452);

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x461 = 8258466731588905LLU;
	volatile uint8_t x462 = UINT8_MAX;
	int16_t x463 = 1;
	int32_t x464 = INT32_MIN;
	volatile uint64_t t51 = 335746471407LLU;

	t51 = ((x461%(x462/x463))+x464);

	if (t51 != 18446744071562068143LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x482 = INT32_MIN;
	static volatile int16_t x483 = -2782;
	static int64_t x484 = -146923LL;
	volatile int64_t t52 = -56436177640406499LL;

	t52 = ((x481%(x482/x483))+x484);

	if (t52 != -634411LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x486 = 33;
	int8_t x487 = -1;
	int64_t x488 = INT64_MIN;
	int64_t t53 = -50017200318109866LL;

	t53 = ((x485%(x486/x487))+x488);

	if (t53 != -9223372036854768265LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x490 = UINT8_MAX;
	int32_t x491 = -1;
	int32_t t54 = -12024377;

	t54 = ((x489%(x490/x491))+x492);

	if (t54 != 11354239) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x493 = 47U;
	static int8_t x494 = INT8_MIN;
	static uint8_t x496 = 5U;

	t55 = ((x493%(x494/x495))+x496);

	if (t55 != 52) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x497 = 42U;

	t56 = ((x497%(x498/x499))+x500);

	if (t56 != -32726) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x505 = 16964416583LLU;
	int64_t x506 = INT64_MIN;
	uint8_t x507 = UINT8_MAX;

	t57 = ((x505%(x506/x507))+x508);

	if (t57 != 16964417243LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x518 = -1;
	int8_t x519 = 1;
	static int16_t x520 = -1;
	volatile int64_t t58 = 18648411779LL;

	t58 = ((x517%(x518/x519))+x520);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x521 = INT8_MIN;
	int32_t x522 = INT32_MIN;
	volatile int16_t x523 = INT16_MAX;
	uint16_t x524 = 716U;
	static int32_t t59 = 4172;

	t59 = ((x521%(x522/x523))+x524);

	if (t59 != 588) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x526 = INT64_MIN;
	volatile uint64_t x527 = 76225673647579LLU;
	int64_t x528 = INT64_MAX;

	t60 = ((x525%(x526/x527))+x528);

	if (t60 != 9223372036854892422LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x529 = -1;
	static int64_t x530 = INT64_MIN;
	static int64_t x532 = INT64_MAX;
	int64_t t61 = -34754177013754204LL;

	t61 = ((x529%(x530/x531))+x532);

	if (t61 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x538 = INT64_MIN;
	volatile int32_t x539 = 15152;
	static int64_t x540 = -1LL;

	t62 = ((x537%(x538/x539))+x540);

	if (t62 != 32766LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x542 = UINT64_MAX;
	static int64_t x543 = 592636729LL;
	volatile uint64_t x544 = UINT64_MAX;
	volatile uint64_t t63 = 1078734112009462569LLU;

	t63 = ((x541%(x542/x543))+x544);

	if (t63 != 15618878238LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x553 = INT64_MIN;
	static volatile int32_t x554 = INT32_MIN;
	int32_t x555 = 65126;
	uint64_t x556 = 31812678912862LLU;
	static volatile uint64_t t64 = 142452193297432LLU;

	t64 = ((x553%(x554/x555))+x556);

	if (t64 != 31812678905564LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x557 = 146593848LLU;
	static int64_t x558 = INT64_MIN;
	volatile int8_t x559 = INT8_MIN;
	static uint8_t x560 = 10U;
	volatile uint64_t t65 = 38510147421449LLU;

	t65 = ((x557%(x558/x559))+x560);

	if (t65 != 146593858LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x565 = INT64_MIN;
	int32_t x566 = INT32_MIN;
	int16_t x567 = 2;
	int8_t x568 = INT8_MAX;
	int64_t t66 = 164792LL;

	t66 = ((x565%(x566/x567))+x568);

	if (t66 != 127LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x569 = INT16_MIN;
	uint32_t x571 = UINT32_MAX;
	int64_t x572 = INT64_MAX;
	static int64_t t67 = 9LL;

	t67 = ((x569%(x570/x571))+x572);

	if (t67 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x573 = INT8_MAX;
	int16_t x575 = INT16_MIN;
	static uint32_t x576 = 16021054U;
	volatile uint32_t t68 = 160U;

	t68 = ((x573%(x574/x575))+x576);

	if (t68 != 16021181U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x577 = INT8_MIN;
	uint16_t x579 = UINT16_MAX;
	int64_t t69 = -36059LL;

	t69 = ((x577%(x578/x579))+x580);

	if (t69 != 65409LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x581 = 0;
	static volatile int64_t x582 = INT64_MIN;
	static int16_t x583 = INT16_MAX;
	int16_t x584 = INT16_MAX;
	int64_t t70 = 6389712LL;

	t70 = ((x581%(x582/x583))+x584);

	if (t70 != 32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x585 = INT32_MIN;
	int16_t x586 = INT16_MIN;
	int32_t x587 = -1;
	uint32_t x588 = UINT32_MAX;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = ((x585%(x586/x587))+x588);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x589 = -1LL;
	uint8_t x590 = UINT8_MAX;
	static int8_t x591 = 61;
	int64_t x592 = -3924219990LL;
	int64_t t72 = 66892737518713101LL;

	t72 = ((x589%(x590/x591))+x592);

	if (t72 != -3924219991LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x597 = 289LLU;
	static int32_t x598 = INT32_MIN;
	uint16_t x599 = UINT16_MAX;
	int64_t x600 = -495898375266140LL;
	volatile uint64_t t73 = 1055436615127065278LLU;

	t73 = ((x597%(x598/x599))+x600);

	if (t73 != 18446248175334285765LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x601 = INT8_MAX;
	static int16_t x604 = INT16_MIN;

	t74 = ((x601%(x602/x603))+x604);

	if (t74 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x605 = -1LL;
	int16_t x607 = INT16_MIN;
	int8_t x608 = INT8_MIN;
	static volatile int64_t t75 = -78671146031115657LL;

	t75 = ((x605%(x606/x607))+x608);

	if (t75 != -129LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x629 = 6U;
	uint64_t x630 = 278960448788366538LLU;
	uint64_t x632 = 1000353354831979LLU;
	uint64_t t76 = 10063328175LLU;

	t76 = ((x629%(x630/x631))+x632);

	if (t76 != 1000353354831985LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x633 = 125U;
	static uint32_t x635 = 39U;
	uint16_t x636 = UINT16_MAX;
	volatile int64_t t77 = 48556LL;

	t77 = ((x633%(x634/x635))+x636);

	if (t77 != 65660LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x642 = INT32_MAX;
	volatile int16_t x644 = INT16_MIN;
	static int32_t t78 = 1;

	t78 = ((x641%(x642/x643))+x644);

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x645 = INT16_MIN;
	static int8_t x646 = INT8_MAX;
	int8_t x647 = -1;
	uint64_t x648 = 64932024114488LLU;
	volatile uint64_t t79 = 31219LLU;

	t79 = ((x645%(x646/x647))+x648);

	if (t79 != 64932024114486LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x657 = INT16_MIN;
	int16_t x658 = INT16_MIN;
	uint16_t x659 = 26625U;

	t80 = ((x657%(x658/x659))+x660);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x661 = -3;
	volatile int8_t x663 = INT8_MIN;
	int16_t x664 = -77;
	int32_t t81 = -1;

	t81 = ((x661%(x662/x663))+x664);

	if (t81 != -80) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x665 = 1;
	volatile int64_t x666 = INT64_MIN;
	static int8_t x667 = -21;
	int64_t x668 = INT64_MIN;
	volatile int64_t t82 = -2158937961LL;

	t82 = ((x665%(x666/x667))+x668);

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x673 = 713916410355932718LLU;
	volatile int64_t x674 = INT64_MAX;
	int8_t x676 = -1;

	t83 = ((x673%(x674/x675))+x676);

	if (t83 != 713916410355932717LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x681 = INT64_MAX;
	uint16_t x682 = UINT16_MAX;
	uint16_t x683 = 15437U;
	static int8_t x684 = INT8_MIN;

	t84 = ((x681%(x682/x683))+x684);

	if (t84 != -125LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x698 = 1376U;
	static int32_t x699 = 276;
	int32_t x700 = INT32_MIN;
	volatile uint32_t t85 = 501U;

	t85 = ((x697%(x698/x699))+x700);

	if (t85 != 2147483649U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x701 = INT64_MIN;
	int16_t x702 = -20;
	int32_t x704 = INT32_MIN;
	volatile int64_t t86 = -91963LL;

	t86 = ((x701%(x702/x703))+x704);

	if (t86 != -2153343431LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x705 = -1;
	uint32_t x706 = UINT32_MAX;
	int64_t x708 = INT64_MIN;
	static volatile int64_t t87 = 1733148410532082827LL;

	t87 = ((x705%(x706/x707))+x708);

	if (t87 != -9223372036854775463LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x713 = -1LL;
	int32_t x714 = INT32_MIN;
	uint8_t x715 = 2U;
	int32_t x716 = -13006552;
	int64_t t88 = 211157312741LL;

	t88 = ((x713%(x714/x715))+x716);

	if (t88 != -13006553LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x721 = UINT8_MAX;
	int32_t x722 = INT32_MIN;
	int64_t x724 = INT64_MIN;
	int64_t t89 = -2556451790744792LL;

	t89 = ((x721%(x722/x723))+x724);

	if (t89 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x733 = 31LL;
	static uint16_t x734 = 4902U;
	volatile uint16_t x736 = 408U;
	static int64_t t90 = -443484924248LL;

	t90 = ((x733%(x734/x735))+x736);

	if (t90 != 439LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x741 = INT16_MIN;
	uint32_t x742 = UINT32_MAX;
	int16_t x743 = INT16_MIN;
	int8_t x744 = INT8_MIN;
	uint32_t t91 = 344U;

	t91 = ((x741%(x742/x743))+x744);

	if (t91 != 4294967168U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x745 = -4913108884552129LL;
	static volatile uint8_t x746 = 24U;
	int8_t x747 = -1;
	volatile uint32_t x748 = 786561602U;
	int64_t t92 = 677453LL;

	t92 = ((x745%(x746/x747))+x748);

	if (t92 != 786561601LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x754 = -1;
	volatile uint64_t x755 = UINT64_MAX;
	int8_t x756 = -1;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = ((x753%(x754/x755))+x756);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x757 = INT32_MAX;
	static uint16_t x758 = 9903U;
	static int32_t x759 = -3099;
	static int8_t x760 = INT8_MAX;
	int32_t t94 = -1;

	t94 = ((x757%(x758/x759))+x760);

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x761 = INT64_MAX;
	int64_t x762 = -1LL;
	int32_t x764 = -1361;
	int64_t t95 = -409274484154441984LL;

	t95 = ((x761%(x762/x763))+x764);

	if (t95 != -1361LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x765 = 0;
	int32_t x766 = INT32_MIN;
	int8_t x767 = INT8_MAX;
	int16_t x768 = -1;
	volatile int32_t t96 = 3796;

	t96 = ((x765%(x766/x767))+x768);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x769 = INT32_MAX;
	static int32_t x770 = -41;
	uint32_t x771 = 13640025U;
	static int8_t x772 = -14;
	volatile uint32_t t97 = 159U;

	t97 = ((x769%(x770/x771))+x772);

	if (t97 != 267U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x778 = 531527699LLU;
	int64_t x780 = INT64_MAX;
	uint64_t t98 = 6786380LLU;

	t98 = ((x777%(x778/x779))+x780);

	if (t98 != 9223372036854777361LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x789 = INT32_MAX;
	int32_t x790 = INT32_MAX;
	volatile int16_t x791 = -1;
	volatile int8_t x792 = INT8_MIN;
	int32_t t99 = 1;

	t99 = ((x789%(x790/x791))+x792);

	if (t99 != -128) { NG(); } else { ; }
	
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

