#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
volatile int32_t x2 = INT32_MAX;
volatile uint64_t x5 = UINT64_MAX;
uint64_t t1 = 6LLU;
uint8_t x10 = 0U;
int64_t x13 = -382271231268941554LL;
volatile uint8_t x16 = 0U;
uint32_t x30 = UINT32_MAX;
int16_t x61 = -13;
int32_t x63 = 2;
int8_t x70 = -1;
int32_t x79 = INT32_MIN;
volatile int64_t t13 = -344509345332109339LL;
static uint64_t x92 = 19142905612LLU;
int16_t x93 = -18;
int16_t x96 = -3681;
int16_t x102 = 0;
static int16_t x107 = -1;
volatile int16_t x112 = -1;
int64_t t18 = 63LL;
volatile uint16_t x113 = 1517U;
int32_t t19 = 52;
volatile int32_t x123 = INT32_MIN;
uint16_t x126 = UINT16_MAX;
uint8_t x130 = UINT8_MAX;
uint32_t x140 = 6U;
static int8_t x143 = INT8_MAX;
static int32_t x151 = -1951;
volatile uint32_t t27 = 207987U;
uint64_t x171 = 2839650805728152673LLU;
uint8_t x172 = 53U;
uint32_t t29 = 547U;
uint64_t x184 = 488826140LLU;
static volatile int32_t t33 = 427;
int16_t x222 = -112;
static volatile int32_t t38 = -492107845;
static int32_t x240 = INT32_MIN;
uint32_t x242 = 18100U;
int32_t x244 = INT32_MIN;
int16_t x253 = INT16_MIN;
int32_t x259 = 459;
uint32_t x260 = 7007U;
static int32_t t45 = -709;
uint8_t x307 = UINT8_MAX;
int16_t x308 = 54;
int32_t t48 = -55086556;
static int16_t x319 = INT16_MIN;
int32_t x341 = -3509967;
uint8_t x347 = 30U;
volatile uint8_t x348 = UINT8_MAX;
volatile uint64_t x357 = UINT64_MAX;
int8_t x360 = INT8_MIN;
volatile uint64_t t54 = 372938411671372837LLU;
volatile int64_t t57 = -119100500LL;
static volatile uint8_t x374 = 2U;
int8_t x378 = INT8_MIN;
int16_t x380 = INT16_MAX;
int32_t t59 = 5087;
int16_t x405 = -1;
int8_t x407 = INT8_MIN;
static int32_t x413 = INT32_MIN;
int32_t x421 = -1;
int16_t x447 = INT16_MIN;
uint8_t x450 = 33U;
int16_t x454 = -1;
volatile int64_t x458 = INT64_MIN;
volatile int32_t t71 = 120801;
int64_t x461 = -1LL;
volatile int32_t x464 = INT32_MAX;
int64_t x469 = 4621579722LL;
volatile int64_t x470 = -1LL;
static uint64_t x481 = UINT64_MAX;
int16_t x492 = -910;
int64_t t78 = 6197567030067LL;
int64_t x524 = -1LL;
static volatile uint16_t x529 = 442U;
int32_t x559 = -1;
int32_t x562 = -224277085;
uint8_t x573 = 1U;
volatile int32_t x579 = INT32_MIN;
int32_t x580 = -1;
uint64_t x583 = UINT64_MAX;
static volatile int64_t x586 = -1LL;
int64_t x605 = -1LL;
int16_t x607 = INT16_MAX;
int64_t t96 = -58877729770139LL;
static int32_t x621 = 4375;


void f0(void) {
	static int8_t x3 = 0;
	int16_t x4 = INT16_MIN;
	volatile uint64_t t0 = 1LLU;

	t0 = ((x1+(x2<x3))*x4);

	if (t0 != 32768LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	static uint32_t x7 = 58012351U;
	uint32_t x8 = UINT32_MAX;

	t1 = ((x5+(x6<x7))*x8);

	if (t1 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 988LLU;
	int8_t x11 = INT8_MAX;
	volatile int16_t x12 = INT16_MIN;
	static uint64_t t2 = 63LLU;

	t2 = ((x9+(x10<x11))*x12);

	if (t2 != 18446744073677144064LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 245360239134586716LLU;
	uint16_t x15 = 501U;
	volatile int64_t t3 = 302412887132469LL;

	t3 = ((x13+(x14<x15))*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	static int64_t x18 = 74LL;
	uint8_t x19 = 1U;
	int8_t x20 = -2;
	int32_t t4 = 12;

	t4 = ((x17+(x18<x19))*x20);

	if (t4 != -254) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 681U;
	int64_t x22 = -34LL;
	uint32_t x23 = 67480647U;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = 5579245;

	t5 = ((x21+(x22<x23))*x24);

	if (t5 != -87296) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static uint32_t x26 = UINT32_MAX;
	uint32_t x27 = 2U;
	volatile int64_t x28 = -1LL;
	volatile int64_t t6 = 1060407888LL;

	t6 = ((x25+(x26<x27))*x28);

	if (t6 != -4294967295LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	uint32_t x31 = 31328U;
	volatile int16_t x32 = -1;
	int32_t t7 = 4053;

	t7 = ((x29+(x30<x31))*x32);

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 269531942LLU;
	uint16_t x34 = 203U;
	uint8_t x35 = 35U;
	uint16_t x36 = UINT16_MAX;
	uint64_t t8 = 4610LLU;

	t8 = ((x33+(x34<x35))*x36);

	if (t8 != 17663775818970LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x49 = UINT8_MAX;
	int8_t x50 = 8;
	int16_t x51 = INT16_MAX;
	volatile int16_t x52 = -1;
	int32_t t9 = 179;

	t9 = ((x49+(x50<x51))*x52);

	if (t9 != -256) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x62 = 56U;
	uint8_t x64 = 6U;
	int32_t t10 = 453;

	t10 = ((x61+(x62<x63))*x64);

	if (t10 != -78) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 5581U;
	uint32_t x66 = UINT32_MAX;
	int32_t x67 = -1;
	static int16_t x68 = -50;
	volatile int32_t t11 = -634645909;

	t11 = ((x65+(x66<x67))*x68);

	if (t11 != -279050) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x69 = 1U;
	static uint8_t x71 = UINT8_MAX;
	static volatile uint64_t x72 = UINT64_MAX;
	static volatile uint64_t t12 = 26184023289313399LLU;

	t12 = ((x69+(x70<x71))*x72);

	if (t12 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x77 = -157;
	int32_t x78 = -1;
	int64_t x80 = 2LL;

	t13 = ((x77+(x78<x79))*x80);

	if (t13 != -314LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x89 = 45050856U;
	int16_t x90 = INT16_MIN;
	volatile int32_t x91 = INT32_MAX;
	static volatile uint64_t t14 = 4LLU;

	t14 = ((x89+(x90<x91))*x92);

	if (t14 != 862404303290709484LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x94 = INT16_MIN;
	uint8_t x95 = 0U;
	int32_t t15 = -173;

	t15 = ((x93+(x94<x95))*x96);

	if (t15 != 62577) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x101 = 19991553203645LL;
	static volatile int64_t x103 = -1LL;
	uint8_t x104 = UINT8_MAX;
	volatile int64_t t16 = -1006005064023LL;

	t16 = ((x101+(x102<x103))*x104);

	if (t16 != 5097846066929475LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x105 = -1;
	volatile uint32_t x106 = UINT32_MAX;
	int8_t x108 = 0;
	volatile int32_t t17 = -1;

	t17 = ((x105+(x106<x107))*x108);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x109 = 1798281254777260LL;
	int64_t x110 = -1LL;
	int32_t x111 = INT32_MIN;

	t18 = ((x109+(x110<x111))*x112);

	if (t18 != -1798281254777260LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x114 = INT8_MIN;
	int64_t x115 = -1LL;
	int16_t x116 = INT16_MAX;

	t19 = ((x113+(x114<x115))*x116);

	if (t19 != 49740306) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x121 = UINT32_MAX;
	volatile int16_t x122 = 2293;
	static uint16_t x124 = UINT16_MAX;
	volatile uint32_t t20 = 64334U;

	t20 = ((x121+(x122<x123))*x124);

	if (t20 != 4294901761U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	uint64_t x128 = 1064623700409345772LLU;
	uint64_t t21 = 6120164319529707961LLU;

	t21 = ((x125+(x126<x127))*x128);

	if (t21 != 11302118937280154112LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x129 = 6629;
	uint32_t x131 = 24U;
	static volatile uint32_t x132 = 25726U;
	volatile uint32_t t22 = 53171693U;

	t22 = ((x129+(x130<x131))*x132);

	if (t22 != 170537654U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x137 = 54U;
	int32_t x138 = -1;
	volatile int64_t x139 = INT64_MAX;
	uint32_t t23 = 9449223U;

	t23 = ((x137+(x138<x139))*x140);

	if (t23 != 330U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x141 = 1U;
	int8_t x142 = 1;
	static volatile int32_t x144 = -1;
	int32_t t24 = 1;

	t24 = ((x141+(x142<x143))*x144);

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x149 = -1;
	static volatile uint32_t x150 = 75U;
	uint32_t x152 = 79944U;
	volatile uint32_t t25 = 84U;

	t25 = ((x149+(x150<x151))*x152);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x153 = -1LL;
	int32_t x154 = 82;
	volatile int32_t x155 = 8612626;
	static volatile uint16_t x156 = 751U;
	static int64_t t26 = 1323970906533LL;

	t26 = ((x153+(x154<x155))*x156);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x161 = 509169U;
	int16_t x162 = 55;
	volatile int64_t x163 = -1LL;
	int32_t x164 = -816038;

	t27 = ((x161+(x162<x163))*x164);

	if (t27 != 1110575290U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x169 = -1;
	static int32_t x170 = INT32_MIN;
	int32_t t28 = -9114801;

	t28 = ((x169+(x170<x171))*x172);

	if (t28 != -53) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x173 = UINT32_MAX;
	uint64_t x174 = 31073846616713413LLU;
	uint64_t x175 = 743367LLU;
	volatile int32_t x176 = INT32_MAX;

	t29 = ((x173+(x174<x175))*x176);

	if (t29 != 2147483649U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x177 = INT16_MIN;
	static volatile int8_t x178 = INT8_MIN;
	int64_t x179 = -1LL;
	int64_t x180 = 9041LL;
	int64_t t30 = 116867325LL;

	t30 = ((x177+(x178<x179))*x180);

	if (t30 != -296246447LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x181 = INT64_MIN;
	static uint32_t x182 = UINT32_MAX;
	volatile int32_t x183 = -1;
	volatile uint64_t t31 = 27686242LLU;

	t31 = ((x181+(x182<x183))*x184);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x197 = 19;
	static uint16_t x198 = 649U;
	volatile int64_t x199 = -1LL;
	static int8_t x200 = -1;
	volatile int32_t t32 = -3727;

	t32 = ((x197+(x198<x199))*x200);

	if (t32 != -19) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x205 = INT8_MAX;
	static int64_t x206 = 5LL;
	uint64_t x207 = 29LLU;
	volatile int16_t x208 = -1;

	t33 = ((x205+(x206<x207))*x208);

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x209 = 946U;
	volatile int32_t x210 = -44844;
	uint32_t x211 = UINT32_MAX;
	static int32_t x212 = INT32_MIN;
	uint32_t t34 = 421037U;

	t34 = ((x209+(x210<x211))*x212);

	if (t34 != 2147483648U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x213 = INT8_MIN;
	static int8_t x214 = -49;
	uint8_t x215 = 114U;
	int64_t x216 = -1LL;
	int64_t t35 = -41602314LL;

	t35 = ((x213+(x214<x215))*x216);

	if (t35 != 127LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x221 = -3854074;
	int8_t x223 = INT8_MAX;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t36 = 138628587170970LLU;

	t36 = ((x221+(x222<x223))*x224);

	if (t36 != 3854073LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x229 = 463964075LLU;
	int32_t x230 = INT32_MAX;
	int16_t x231 = INT16_MIN;
	static int64_t x232 = INT64_MIN;
	volatile uint64_t t37 = 5LLU;

	t37 = ((x229+(x230<x231))*x232);

	if (t37 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x233 = INT8_MIN;
	uint8_t x234 = 1U;
	uint16_t x235 = UINT16_MAX;
	static uint16_t x236 = UINT16_MAX;

	t38 = ((x233+(x234<x235))*x236);

	if (t38 != -8322945) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x237 = 9U;
	int16_t x238 = INT16_MIN;
	volatile int16_t x239 = 9;
	uint32_t t39 = 29U;

	t39 = ((x237+(x238<x239))*x240);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x241 = 4716797LL;
	int64_t x243 = 5194970558102580LL;
	volatile int64_t t40 = -9722LL;

	t40 = ((x241+(x242<x243))*x244);

	if (t40 != -10129246575919104LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x249 = 15U;
	uint16_t x250 = 1U;
	int32_t x251 = INT32_MAX;
	static int16_t x252 = -1;
	int32_t t41 = -32428239;

	t41 = ((x249+(x250<x251))*x252);

	if (t41 != -16) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x254 = 1710;
	uint32_t x255 = 119910447U;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t42 = 476657;

	t42 = ((x253+(x254<x255))*x256);

	if (t42 != -2147385345) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x257 = 16;
	int32_t x258 = -1;
	volatile uint32_t t43 = 196479U;

	t43 = ((x257+(x258<x259))*x260);

	if (t43 != 119119U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x273 = -13;
	int64_t x274 = INT64_MIN;
	uint64_t x275 = 0LLU;
	volatile uint64_t x276 = 3497363832710LLU;
	volatile uint64_t t44 = 69481837848948LLU;

	t44 = ((x273+(x274<x275))*x276);

	if (t44 != 18446698607979726386LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x281 = 16U;
	uint8_t x282 = 7U;
	volatile int64_t x283 = INT64_MIN;
	volatile uint16_t x284 = UINT16_MAX;

	t45 = ((x281+(x282<x283))*x284);

	if (t45 != 1048560) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x285 = 13;
	uint16_t x286 = UINT16_MAX;
	uint32_t x287 = UINT32_MAX;
	uint64_t x288 = 625799LLU;
	uint64_t t46 = 1303598504819313264LLU;

	t46 = ((x285+(x286<x287))*x288);

	if (t46 != 8761186LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x297 = INT16_MIN;
	uint16_t x298 = 2U;
	int64_t x299 = -351LL;
	uint8_t x300 = 112U;
	volatile int32_t t47 = 1247010;

	t47 = ((x297+(x298<x299))*x300);

	if (t47 != -3670016) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x305 = INT16_MIN;
	volatile int64_t x306 = -14954961LL;

	t48 = ((x305+(x306<x307))*x308);

	if (t48 != -1769418) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile int16_t x318 = -208;
	int64_t x320 = -322172LL;
	volatile int64_t t49 = 2503812682787LL;

	t49 = ((x317+(x318<x319))*x320);

	if (t49 != 41238016LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x321 = -1;
	int8_t x322 = -1;
	int32_t x323 = 237;
	volatile int16_t x324 = -1;
	int32_t t50 = 0;

	t50 = ((x321+(x322<x323))*x324);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x337 = 4220;
	int8_t x338 = INT8_MIN;
	static volatile int64_t x339 = INT64_MIN;
	volatile int16_t x340 = INT16_MIN;
	static volatile int32_t t51 = -31223;

	t51 = ((x337+(x338<x339))*x340);

	if (t51 != -138280960) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x342 = 4525671LLU;
	int64_t x343 = 91722616041192924LL;
	static uint8_t x344 = 124U;
	int32_t t52 = 572176862;

	t52 = ((x341+(x342<x343))*x344);

	if (t52 != -435235784) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x345 = -1;
	static int8_t x346 = -1;
	static int32_t t53 = 15;

	t53 = ((x345+(x346<x347))*x348);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x358 = -1LL;
	uint16_t x359 = 2U;

	t54 = ((x357+(x358<x359))*x360);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = INT64_MIN;
	int64_t x363 = 1LL;
	int64_t x364 = 17LL;
	int64_t t55 = 154LL;

	t55 = ((x361+(x362<x363))*x364);

	if (t55 != -36507221999LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x365 = INT8_MIN;
	static int8_t x366 = 0;
	static uint64_t x367 = UINT64_MAX;
	uint64_t x368 = 30763737380268LLU;
	volatile uint64_t t56 = 58314435611267609LLU;

	t56 = ((x365+(x366<x367))*x368);

	if (t56 != 18442837079062257580LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x369 = 317U;
	int64_t x370 = 7318074136989566LL;
	uint64_t x371 = 116225790LLU;
	volatile int64_t x372 = -1LL;

	t57 = ((x369+(x370<x371))*x372);

	if (t57 != -317LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x373 = INT8_MAX;
	int16_t x375 = 8694;
	int16_t x376 = -1;
	volatile int32_t t58 = 2042;

	t58 = ((x373+(x374<x375))*x376);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x377 = UINT8_MAX;
	volatile int32_t x379 = INT32_MIN;

	t59 = ((x377+(x378<x379))*x380);

	if (t59 != 8355585) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x385 = 0;
	volatile int8_t x386 = -1;
	int64_t x387 = 26LL;
	int64_t x388 = -1LL;
	int64_t t60 = 12485LL;

	t60 = ((x385+(x386<x387))*x388);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x389 = -1;
	uint32_t x390 = 42U;
	static int32_t x391 = INT32_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t61 = 2479465;

	t61 = ((x389+(x390<x391))*x392);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x406 = 44U;
	int16_t x408 = 8627;
	volatile int32_t t62 = 5;

	t62 = ((x405+(x406<x407))*x408);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x414 = UINT16_MAX;
	int32_t x415 = -1;
	int8_t x416 = 0;
	int32_t t63 = 244;

	t63 = ((x413+(x414<x415))*x416);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x417 = 5448U;
	uint32_t x418 = UINT32_MAX;
	uint32_t x419 = 196U;
	volatile uint32_t x420 = 29864U;
	volatile uint32_t t64 = 133990313U;

	t64 = ((x417+(x418<x419))*x420);

	if (t64 != 162699072U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x422 = INT64_MAX;
	static int64_t x423 = -1LL;
	volatile int16_t x424 = INT16_MIN;
	int32_t t65 = -62739209;

	t65 = ((x421+(x422<x423))*x424);

	if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x429 = -9650;
	static int64_t x430 = INT64_MIN;
	int64_t x431 = 3809698276486542LL;
	static uint64_t x432 = 243LLU;
	uint64_t t66 = 444657LLU;

	t66 = ((x429+(x430<x431))*x432);

	if (t66 != 18446744073707206909LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x433 = 4267974109643472906LLU;
	uint32_t x434 = UINT32_MAX;
	int64_t x435 = -40396525LL;
	volatile uint16_t x436 = 0U;
	uint64_t t67 = 357115593751LLU;

	t67 = ((x433+(x434<x435))*x436);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x445 = 290588U;
	volatile uint16_t x446 = 250U;
	volatile uint64_t x448 = UINT64_MAX;
	uint64_t t68 = 15549LLU;

	t68 = ((x445+(x446<x447))*x448);

	if (t68 != 18446744073709261028LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x449 = -1LL;
	uint32_t x451 = UINT32_MAX;
	uint16_t x452 = UINT16_MAX;
	static int64_t t69 = 1833006923906732LL;

	t69 = ((x449+(x450<x451))*x452);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x453 = 665307568U;
	static volatile int32_t x455 = 54650;
	uint64_t x456 = UINT64_MAX;
	uint64_t t70 = 45952277637040236LLU;

	t70 = ((x453+(x454<x455))*x456);

	if (t70 != 18446744073044244047LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x457 = -1;
	int32_t x459 = 380;
	static volatile int32_t x460 = INT32_MIN;

	t71 = ((x457+(x458<x459))*x460);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x462 = 189U;
	uint16_t x463 = 10U;
	int64_t t72 = -117344434275597330LL;

	t72 = ((x461+(x462<x463))*x464);

	if (t72 != -2147483647LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x471 = UINT64_MAX;
	static int8_t x472 = INT8_MIN;
	int64_t t73 = 53248929091322LL;

	t73 = ((x469+(x470<x471))*x472);

	if (t73 != -591562204416LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x477 = 50551LLU;
	int8_t x478 = INT8_MIN;
	int32_t x479 = INT32_MIN;
	int32_t x480 = -1;
	static volatile uint64_t t74 = 4LLU;

	t74 = ((x477+(x478<x479))*x480);

	if (t74 != 18446744073709501065LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x482 = INT32_MIN;
	int16_t x483 = INT16_MIN;
	static int32_t x484 = INT32_MIN;
	volatile uint64_t t75 = 2LLU;

	t75 = ((x481+(x482<x483))*x484);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x489 = 9;
	int32_t x490 = -478351;
	uint64_t x491 = 12LLU;
	volatile int32_t t76 = 1906;

	t76 = ((x489+(x490<x491))*x492);

	if (t76 != -8190) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x497 = INT8_MAX;
	int8_t x498 = INT8_MAX;
	int32_t x499 = -5;
	int16_t x500 = -1;
	int32_t t77 = 35994;

	t77 = ((x497+(x498<x499))*x500);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x501 = -1;
	int16_t x502 = INT16_MAX;
	volatile uint32_t x503 = 39960377U;
	int64_t x504 = INT64_MAX;

	t78 = ((x501+(x502<x503))*x504);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x505 = UINT8_MAX;
	uint16_t x506 = 23051U;
	volatile int64_t x507 = INT64_MIN;
	volatile uint64_t x508 = UINT64_MAX;
	static volatile uint64_t t79 = 1112579649352455986LLU;

	t79 = ((x505+(x506<x507))*x508);

	if (t79 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x509 = -1;
	static volatile uint64_t x510 = UINT64_MAX;
	volatile uint32_t x511 = 254U;
	static int32_t x512 = -231;
	int32_t t80 = 2294;

	t80 = ((x509+(x510<x511))*x512);

	if (t80 != 231) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x513 = 30417;
	int32_t x514 = -1;
	uint64_t x515 = 2101LLU;
	uint16_t x516 = 24U;
	volatile int32_t t81 = -772461188;

	t81 = ((x513+(x514<x515))*x516);

	if (t81 != 730008) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x521 = INT64_MIN;
	int32_t x522 = -2102218;
	static int32_t x523 = INT32_MAX;
	volatile int64_t t82 = INT64_MAX;

	t82 = ((x521+(x522<x523))*x524);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x525 = 135357U;
	int8_t x526 = -1;
	int16_t x527 = INT16_MAX;
	int32_t x528 = -9935;
	static volatile uint32_t t83 = 4749U;

	t83 = ((x525+(x526<x527))*x528);

	if (t83 != 2950185566U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x530 = -1;
	volatile int16_t x531 = -1;
	int16_t x532 = INT16_MAX;
	int32_t t84 = 16;

	t84 = ((x529+(x530<x531))*x532);

	if (t84 != 14483014) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x533 = 4U;
	uint16_t x534 = 28U;
	int8_t x535 = -2;
	uint32_t x536 = 254U;
	volatile uint32_t t85 = 79U;

	t85 = ((x533+(x534<x535))*x536);

	if (t85 != 1016U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x537 = UINT16_MAX;
	int16_t x538 = INT16_MAX;
	int32_t x539 = -1;
	int16_t x540 = -1;
	volatile int32_t t86 = 2335497;

	t86 = ((x537+(x538<x539))*x540);

	if (t86 != -65535) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x553 = 0;
	int32_t x554 = -1;
	int32_t x555 = -1;
	int64_t x556 = INT64_MAX;
	int64_t t87 = -1316400005LL;

	t87 = ((x553+(x554<x555))*x556);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x557 = 11209543227285LL;
	uint8_t x558 = 0U;
	int64_t x560 = -1LL;
	static int64_t t88 = -232319635478634LL;

	t88 = ((x557+(x558<x559))*x560);

	if (t88 != -11209543227285LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x561 = INT64_MIN;
	int64_t x563 = INT64_MAX;
	volatile int8_t x564 = -1;
	volatile int64_t t89 = INT64_MAX;

	t89 = ((x561+(x562<x563))*x564);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x574 = INT16_MIN;
	volatile int64_t x575 = INT64_MAX;
	int16_t x576 = INT16_MIN;
	static volatile int32_t t90 = -8839;

	t90 = ((x573+(x574<x575))*x576);

	if (t90 != -65536) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x577 = 0LL;
	int8_t x578 = INT8_MIN;
	static int64_t t91 = 15556352720656LL;

	t91 = ((x577+(x578<x579))*x580);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x581 = UINT8_MAX;
	int64_t x582 = -1LL;
	int64_t x584 = -2658073125045LL;
	volatile int64_t t92 = -678528LL;

	t92 = ((x581+(x582<x583))*x584);

	if (t92 != -677808646886475LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x585 = INT16_MAX;
	int16_t x587 = INT16_MAX;
	volatile uint64_t x588 = 1LLU;
	static uint64_t t93 = 3464210880249LLU;

	t93 = ((x585+(x586<x587))*x588);

	if (t93 != 32768LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x589 = 1;
	volatile uint16_t x590 = 12295U;
	int32_t x591 = INT32_MIN;
	int32_t x592 = INT32_MIN;
	int32_t t94 = INT32_MIN;

	t94 = ((x589+(x590<x591))*x592);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x597 = 1;
	volatile uint32_t x598 = UINT32_MAX;
	int64_t x599 = -81493265958575265LL;
	volatile int32_t x600 = -494206;
	int32_t t95 = 115968;

	t95 = ((x597+(x598<x599))*x600);

	if (t95 != -494206) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x606 = -11589;
	volatile int64_t x608 = 52LL;

	t96 = ((x605+(x606<x607))*x608);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x613 = 3;
	uint16_t x614 = 3938U;
	int32_t x615 = INT32_MIN;
	uint32_t x616 = UINT32_MAX;
	uint32_t t97 = 2U;

	t97 = ((x613+(x614<x615))*x616);

	if (t97 != 4294967293U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x617 = UINT8_MAX;
	int32_t x618 = INT32_MIN;
	int16_t x619 = 1251;
	volatile int64_t x620 = -1LL;
	int64_t t98 = -468344462732593591LL;

	t98 = ((x617+(x618<x619))*x620);

	if (t98 != -256LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x622 = 1U;
	static uint32_t x623 = 1U;
	volatile int32_t x624 = -1;
	static volatile int32_t t99 = -2;

	t99 = ((x621+(x622<x623))*x624);

	if (t99 != -4375) { NG(); } else { ; }
	
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

