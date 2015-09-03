#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x13 = 5020505493377667207LLU;
uint8_t x19 = 79U;
uint8_t x35 = UINT8_MAX;
volatile int8_t x42 = -1;
volatile uint16_t x46 = 587U;
int64_t x48 = 38575111LL;
int32_t x49 = 300533425;
int8_t x51 = INT8_MAX;
volatile int32_t t9 = -31363364;
volatile int32_t t11 = 81233764;
static int8_t x102 = INT8_MIN;
int32_t x104 = INT32_MIN;
int8_t x127 = INT8_MAX;
volatile int32_t t19 = -7070;
int8_t x143 = -1;
uint8_t x145 = 6U;
volatile int16_t x150 = INT16_MAX;
static int16_t x168 = INT16_MIN;
int8_t x174 = 8;
uint64_t x176 = UINT64_MAX;
volatile int32_t t27 = 205701;
uint32_t x205 = 1610939052U;
volatile int16_t x206 = INT16_MAX;
uint8_t x240 = 3U;
int32_t t36 = -13368;
volatile int8_t x259 = INT8_MIN;
volatile int32_t t38 = -1076257;
int16_t x265 = INT16_MAX;
int64_t x274 = -2713713256LL;
int8_t x287 = 1;
int32_t t44 = 0;
int8_t x303 = INT8_MIN;
uint64_t x307 = 89600120729LLU;
static uint32_t x309 = 14U;
uint8_t x313 = UINT8_MAX;
int8_t x315 = INT8_MIN;
int16_t x334 = 2267;
uint32_t x354 = UINT32_MAX;
static int32_t x383 = INT32_MIN;
static int16_t x388 = -9060;
int32_t t56 = -133067187;
uint32_t x402 = 511992U;
static int16_t x404 = -7;
volatile int64_t x416 = -1LL;
volatile int32_t t58 = -5604676;
static int16_t x435 = INT16_MAX;
volatile uint16_t x445 = 3836U;
int64_t x475 = INT64_MIN;
static uint8_t x477 = UINT8_MAX;
int8_t x522 = 1;
static int8_t x523 = -8;
volatile int32_t t69 = 30296;
uint64_t x545 = 2812110318461638LLU;
int32_t t72 = 1013554459;
int16_t x550 = INT16_MIN;
uint64_t x552 = 281785LLU;
volatile uint64_t x553 = UINT64_MAX;
static int32_t x555 = -382130801;
int64_t x559 = -1LL;
static volatile int32_t t75 = 18787;
int16_t x582 = -12222;
volatile int32_t t77 = 507737694;
volatile int32_t t80 = -172143462;
static int64_t x602 = INT64_MIN;
int64_t x604 = INT64_MAX;
volatile uint16_t x613 = 24253U;
int32_t x614 = -933;
int8_t x619 = 60;
int64_t x620 = -1748756365149989952LL;
int32_t t83 = -4977366;
int32_t t84 = 0;
volatile int32_t x639 = INT32_MIN;
int16_t x640 = INT16_MIN;
volatile uint8_t x653 = 6U;
volatile uint64_t x654 = 334422817LLU;
volatile uint32_t x677 = UINT32_MAX;
int16_t x693 = INT16_MAX;
volatile int32_t t93 = -1632;
uint16_t x701 = UINT16_MAX;
int32_t x711 = 11;
volatile int32_t t96 = -120452;
static volatile uint64_t x727 = 106LLU;
volatile uint16_t x731 = 30U;


void f0(void) {
	int32_t x1 = 26644416;
	uint64_t x2 = 47379305LLU;
	int32_t x3 = -1;
	int16_t x4 = -1;
	int32_t t0 = 8940584;

	t0 = ((x1>>(x2<=x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x14 = -1;
	int16_t x15 = 9746;
	int8_t x16 = -1;
	int32_t t1 = -31195;

	t1 = ((x13>>(x14<=x15))==x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 803U;
	volatile int32_t x18 = INT32_MIN;
	static int8_t x20 = 1;
	static int32_t t2 = 5074071;

	t2 = ((x17>>(x18<=x19))==x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = 1;
	static int32_t x22 = 399231;
	volatile int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MIN;
	volatile int32_t t3 = 489418;

	t3 = ((x21>>(x22<=x23))==x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = 13U;
	int64_t x30 = -1LL;
	volatile uint32_t x31 = 19206U;
	int32_t x32 = -13;
	static volatile int32_t t4 = -455093369;

	t4 = ((x29>>(x30<=x31))==x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x33 = 2872;
	int16_t x34 = INT16_MIN;
	int64_t x36 = INT64_MAX;
	volatile int32_t t5 = 3282722;

	t5 = ((x33>>(x34<=x35))==x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = 265128772;
	static int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;
	int32_t t6 = 2370;

	t6 = ((x41>>(x42<=x43))==x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x45 = 0U;
	int8_t x47 = INT8_MIN;
	static volatile int32_t t7 = -252;

	t7 = ((x45>>(x46<=x47))==x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x50 = 6233U;
	volatile int8_t x52 = INT8_MIN;
	volatile int32_t t8 = -744690405;

	t8 = ((x49>>(x50<=x51))==x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x57 = 8U;
	int16_t x58 = 53;
	static int16_t x59 = -1;
	int32_t x60 = -95208156;

	t9 = ((x57>>(x58<=x59))==x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x69 = 13089LLU;
	uint64_t x70 = 31LLU;
	int8_t x71 = -1;
	volatile int16_t x72 = INT16_MAX;
	volatile int32_t t10 = -102;

	t10 = ((x69>>(x70<=x71))==x72);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x77 = UINT16_MAX;
	int8_t x78 = INT8_MIN;
	int64_t x79 = -1LL;
	uint64_t x80 = 53174176136715535LLU;

	t11 = ((x77>>(x78<=x79))==x80);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x85 = INT64_MAX;
	int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t12 = -1621038;

	t12 = ((x85>>(x86<=x87))==x88);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x89 = 292LLU;
	uint32_t x90 = 2979866U;
	int32_t x91 = INT32_MAX;
	int64_t x92 = -1LL;
	volatile int32_t t13 = -518400279;

	t13 = ((x89>>(x90<=x91))==x92);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x101 = 498904LL;
	int32_t x103 = -1;
	int32_t t14 = -902;

	t14 = ((x101>>(x102<=x103))==x104);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x109 = 9U;
	int64_t x110 = -1LL;
	int32_t x111 = INT32_MIN;
	volatile int32_t x112 = 0;
	volatile int32_t t15 = -104508;

	t15 = ((x109>>(x110<=x111))==x112);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x113 = 1985434U;
	int64_t x114 = INT64_MAX;
	uint64_t x115 = 1157825023LLU;
	uint64_t x116 = 492864LLU;
	volatile int32_t t16 = -1;

	t16 = ((x113>>(x114<=x115))==x116);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x121 = UINT64_MAX;
	volatile uint64_t x122 = UINT64_MAX;
	int8_t x123 = INT8_MAX;
	uint64_t x124 = UINT64_MAX;
	static int32_t t17 = -73;

	t17 = ((x121>>(x122<=x123))==x124);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x125 = 2513U;
	int8_t x126 = -1;
	uint32_t x128 = 1455330321U;
	int32_t t18 = -267892433;

	t18 = ((x125>>(x126<=x127))==x128);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x129 = 2541240U;
	uint32_t x130 = 373159U;
	int8_t x131 = INT8_MIN;
	static volatile int32_t x132 = INT32_MAX;

	t19 = ((x129>>(x130<=x131))==x132);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x141 = UINT32_MAX;
	int16_t x142 = -1;
	volatile int16_t x144 = -1;
	static volatile int32_t t20 = 42888406;

	t20 = ((x141>>(x142<=x143))==x144);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x146 = 0;
	int16_t x147 = -20;
	int64_t x148 = -1LL;
	volatile int32_t t21 = -6;

	t21 = ((x145>>(x146<=x147))==x148);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x149 = UINT64_MAX;
	volatile uint32_t x151 = UINT32_MAX;
	int64_t x152 = -1LL;
	int32_t t22 = -195083949;

	t22 = ((x149>>(x150<=x151))==x152);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x161 = 815341LLU;
	static int64_t x162 = 42587877778LL;
	volatile int32_t x163 = -1;
	static int32_t x164 = -1;
	static int32_t t23 = 238;

	t23 = ((x161>>(x162<=x163))==x164);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x165 = 12991U;
	volatile uint8_t x166 = 72U;
	volatile int16_t x167 = INT16_MAX;
	volatile int32_t t24 = 88921944;

	t24 = ((x165>>(x166<=x167))==x168);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x173 = UINT32_MAX;
	static uint16_t x175 = 1U;
	int32_t t25 = -6015398;

	t25 = ((x173>>(x174<=x175))==x176);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x185 = 25U;
	int32_t x186 = INT32_MIN;
	int32_t x187 = -1;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t26 = 282365;

	t26 = ((x185>>(x186<=x187))==x188);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x193 = UINT8_MAX;
	uint32_t x194 = 5996U;
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = -9733;

	t27 = ((x193>>(x194<=x195))==x196);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x197 = 8U;
	int32_t x198 = -536271676;
	int32_t x199 = 226002282;
	int8_t x200 = INT8_MAX;
	volatile int32_t t28 = 68148;

	t28 = ((x197>>(x198<=x199))==x200);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x201 = 63U;
	int32_t x202 = -1;
	uint64_t x203 = UINT64_MAX;
	uint8_t x204 = UINT8_MAX;
	int32_t t29 = -32;

	t29 = ((x201>>(x202<=x203))==x204);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x207 = 2U;
	int32_t x208 = INT32_MIN;
	volatile int32_t t30 = -16974922;

	t30 = ((x205>>(x206<=x207))==x208);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x209 = 1509U;
	int32_t x210 = -4230917;
	uint32_t x211 = 1015131U;
	static uint32_t x212 = 41955U;
	static int32_t t31 = -107335508;

	t31 = ((x209>>(x210<=x211))==x212);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x217 = 7U;
	int8_t x218 = -12;
	int16_t x219 = 87;
	uint64_t x220 = 996640970LLU;
	volatile int32_t t32 = -284583;

	t32 = ((x217>>(x218<=x219))==x220);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x221 = 0;
	int32_t x222 = 397683606;
	int16_t x223 = -1;
	uint32_t x224 = UINT32_MAX;
	int32_t t33 = -4;

	t33 = ((x221>>(x222<=x223))==x224);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x229 = 4044U;
	int32_t x230 = INT32_MIN;
	int16_t x231 = INT16_MIN;
	static int32_t x232 = INT32_MIN;
	volatile int32_t t34 = 19620;

	t34 = ((x229>>(x230<=x231))==x232);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x237 = 515183898699LL;
	uint64_t x238 = 13084025LLU;
	int64_t x239 = 148488156663LL;
	volatile int32_t t35 = 8;

	t35 = ((x237>>(x238<=x239))==x240);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x245 = INT8_MAX;
	uint16_t x246 = 236U;
	int16_t x247 = -169;
	volatile int32_t x248 = INT32_MIN;

	t36 = ((x245>>(x246<=x247))==x248);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x253 = 137U;
	int8_t x254 = 16;
	int32_t x255 = -24;
	int32_t x256 = -15;
	int32_t t37 = -216341;

	t37 = ((x253>>(x254<=x255))==x256);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x257 = 95U;
	uint64_t x258 = 533214635841443LLU;
	static int16_t x260 = -1482;

	t38 = ((x257>>(x258<=x259))==x260);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x266 = -1;
	int16_t x267 = -1;
	int16_t x268 = -1;
	int32_t t39 = -87598;

	t39 = ((x265>>(x266<=x267))==x268);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x269 = 11LLU;
	uint32_t x270 = UINT32_MAX;
	static int64_t x271 = INT64_MIN;
	uint16_t x272 = 30942U;
	static int32_t t40 = 231418437;

	t40 = ((x269>>(x270<=x271))==x272);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x273 = INT8_MAX;
	int16_t x275 = INT16_MIN;
	uint32_t x276 = 56805361U;
	int32_t t41 = 0;

	t41 = ((x273>>(x274<=x275))==x276);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x277 = INT32_MAX;
	volatile int64_t x278 = INT64_MIN;
	uint8_t x279 = UINT8_MAX;
	static uint8_t x280 = 0U;
	volatile int32_t t42 = 1;

	t42 = ((x277>>(x278<=x279))==x280);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x285 = INT32_MAX;
	static int16_t x286 = INT16_MAX;
	static int16_t x288 = INT16_MIN;
	int32_t t43 = -195;

	t43 = ((x285>>(x286<=x287))==x288);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x293 = 139446U;
	uint16_t x294 = 30U;
	static volatile uint8_t x295 = UINT8_MAX;
	int32_t x296 = -1;

	t44 = ((x293>>(x294<=x295))==x296);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x301 = INT64_MAX;
	static int16_t x302 = -846;
	volatile uint32_t x304 = 179U;
	volatile int32_t t45 = -3656915;

	t45 = ((x301>>(x302<=x303))==x304);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x305 = 38201;
	volatile int16_t x306 = INT16_MIN;
	static int32_t x308 = 0;
	volatile int32_t t46 = -106403;

	t46 = ((x305>>(x306<=x307))==x308);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x310 = 24U;
	volatile int32_t x311 = INT32_MIN;
	int16_t x312 = -2436;
	volatile int32_t t47 = -742;

	t47 = ((x309>>(x310<=x311))==x312);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x314 = -341;
	int16_t x316 = 71;
	volatile int32_t t48 = 229087;

	t48 = ((x313>>(x314<=x315))==x316);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x325 = 5;
	static volatile uint16_t x326 = 3877U;
	int16_t x327 = INT16_MIN;
	uint64_t x328 = 531677149208226LLU;
	volatile int32_t t49 = -1156;

	t49 = ((x325>>(x326<=x327))==x328);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x333 = 15U;
	static int16_t x335 = -1;
	int8_t x336 = -1;
	volatile int32_t t50 = -163717410;

	t50 = ((x333>>(x334<=x335))==x336);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x345 = 1U;
	uint64_t x346 = UINT64_MAX;
	int16_t x347 = 41;
	int64_t x348 = INT64_MIN;
	volatile int32_t t51 = 42636103;

	t51 = ((x345>>(x346<=x347))==x348);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x353 = 260222U;
	uint32_t x355 = 978627U;
	int16_t x356 = INT16_MAX;
	int32_t t52 = 5;

	t52 = ((x353>>(x354<=x355))==x356);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x373 = 22;
	static int16_t x374 = INT16_MAX;
	int8_t x375 = -1;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t53 = 56;

	t53 = ((x373>>(x374<=x375))==x376);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x381 = 109;
	int16_t x382 = INT16_MIN;
	uint32_t x384 = UINT32_MAX;
	int32_t t54 = 0;

	t54 = ((x381>>(x382<=x383))==x384);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x385 = UINT64_MAX;
	uint64_t x386 = UINT64_MAX;
	volatile uint8_t x387 = 0U;
	volatile int32_t t55 = 6849;

	t55 = ((x385>>(x386<=x387))==x388);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x397 = 832931229LLU;
	uint16_t x398 = 5U;
	uint32_t x399 = 1414U;
	int64_t x400 = 11212275534LL;

	t56 = ((x397>>(x398<=x399))==x400);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x401 = 7273443439591LLU;
	volatile int32_t x403 = INT32_MAX;
	int32_t t57 = -5402436;

	t57 = ((x401>>(x402<=x403))==x404);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x413 = INT8_MAX;
	static uint16_t x414 = 53U;
	int32_t x415 = INT32_MIN;

	t58 = ((x413>>(x414<=x415))==x416);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x425 = UINT32_MAX;
	int64_t x426 = INT64_MIN;
	uint64_t x427 = 443337095666120LLU;
	uint64_t x428 = 26944773LLU;
	volatile int32_t t59 = 5599805;

	t59 = ((x425>>(x426<=x427))==x428);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x433 = 80U;
	static int16_t x434 = 44;
	int8_t x436 = 18;
	int32_t t60 = -125;

	t60 = ((x433>>(x434<=x435))==x436);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x446 = INT16_MIN;
	uint8_t x447 = 5U;
	volatile uint8_t x448 = 1U;
	int32_t t61 = 21070734;

	t61 = ((x445>>(x446<=x447))==x448);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x457 = 209580U;
	uint32_t x458 = 2038823U;
	static volatile uint64_t x459 = 3LLU;
	volatile int64_t x460 = INT64_MAX;
	volatile int32_t t62 = 738176;

	t62 = ((x457>>(x458<=x459))==x460);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x461 = 11668U;
	volatile int64_t x462 = INT64_MIN;
	uint32_t x463 = UINT32_MAX;
	uint64_t x464 = 15165078144235LLU;
	static volatile int32_t t63 = -247;

	t63 = ((x461>>(x462<=x463))==x464);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x465 = UINT64_MAX;
	uint16_t x466 = UINT16_MAX;
	uint32_t x467 = UINT32_MAX;
	uint8_t x468 = UINT8_MAX;
	static volatile int32_t t64 = -224964335;

	t64 = ((x465>>(x466<=x467))==x468);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x473 = UINT16_MAX;
	uint8_t x474 = UINT8_MAX;
	int32_t x476 = 7369;
	int32_t t65 = -6991;

	t65 = ((x473>>(x474<=x475))==x476);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x478 = 121U;
	int8_t x479 = INT8_MIN;
	volatile uint32_t x480 = 243744568U;
	volatile int32_t t66 = -4;

	t66 = ((x477>>(x478<=x479))==x480);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x497 = 0U;
	int16_t x498 = -674;
	int8_t x499 = 0;
	int32_t x500 = INT32_MAX;
	static volatile int32_t t67 = 235;

	t67 = ((x497>>(x498<=x499))==x500);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x517 = 1;
	uint8_t x518 = UINT8_MAX;
	int8_t x519 = INT8_MAX;
	int64_t x520 = INT64_MIN;
	int32_t t68 = 5210607;

	t68 = ((x517>>(x518<=x519))==x520);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x521 = UINT32_MAX;
	volatile int32_t x524 = INT32_MIN;

	t69 = ((x521>>(x522<=x523))==x524);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x525 = UINT16_MAX;
	int32_t x526 = INT32_MAX;
	volatile uint8_t x527 = 6U;
	uint8_t x528 = UINT8_MAX;
	static volatile int32_t t70 = -318381;

	t70 = ((x525>>(x526<=x527))==x528);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x529 = 6U;
	volatile int8_t x530 = 0;
	static uint8_t x531 = UINT8_MAX;
	int16_t x532 = INT16_MIN;
	int32_t t71 = 2135864;

	t71 = ((x529>>(x530<=x531))==x532);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x546 = INT64_MIN;
	uint8_t x547 = 49U;
	static int8_t x548 = 0;

	t72 = ((x545>>(x546<=x547))==x548);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x549 = 85LLU;
	volatile int16_t x551 = INT16_MIN;
	int32_t t73 = 58;

	t73 = ((x549>>(x550<=x551))==x552);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x554 = INT64_MAX;
	uint16_t x556 = 2U;
	int32_t t74 = -1036165578;

	t74 = ((x553>>(x554<=x555))==x556);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x557 = UINT64_MAX;
	uint32_t x558 = 264U;
	int32_t x560 = INT32_MAX;

	t75 = ((x557>>(x558<=x559))==x560);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x561 = INT8_MAX;
	uint32_t x562 = UINT32_MAX;
	volatile int8_t x563 = -1;
	static int8_t x564 = INT8_MIN;
	volatile int32_t t76 = -876949735;

	t76 = ((x561>>(x562<=x563))==x564);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x581 = 1;
	static uint64_t x583 = UINT64_MAX;
	int16_t x584 = INT16_MAX;

	t77 = ((x581>>(x582<=x583))==x584);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x589 = INT64_MAX;
	static int8_t x590 = -1;
	static int64_t x591 = -1LL;
	int64_t x592 = INT64_MAX;
	int32_t t78 = -236192;

	t78 = ((x589>>(x590<=x591))==x592);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x593 = 1948LLU;
	uint32_t x594 = 2739820U;
	int64_t x595 = -121385338550530232LL;
	int8_t x596 = -1;
	volatile int32_t t79 = -42;

	t79 = ((x593>>(x594<=x595))==x596);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x597 = INT32_MAX;
	int8_t x598 = INT8_MIN;
	volatile int64_t x599 = -3440564857782059LL;
	int16_t x600 = 67;

	t80 = ((x597>>(x598<=x599))==x600);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x601 = 8U;
	int8_t x603 = 2;
	int32_t t81 = 194081;

	t81 = ((x601>>(x602<=x603))==x604);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x615 = UINT64_MAX;
	volatile int16_t x616 = -149;
	volatile int32_t t82 = 40419067;

	t82 = ((x613>>(x614<=x615))==x616);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x617 = UINT16_MAX;
	uint8_t x618 = 1U;

	t83 = ((x617>>(x618<=x619))==x620);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x629 = 44127608859436LLU;
	int32_t x630 = INT32_MIN;
	int32_t x631 = 1626038;
	int32_t x632 = 117;

	t84 = ((x629>>(x630<=x631))==x632);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x637 = INT16_MAX;
	int8_t x638 = INT8_MIN;
	int32_t t85 = -29249271;

	t85 = ((x637>>(x638<=x639))==x640);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x655 = 14314110U;
	uint64_t x656 = 4911292461193961LLU;
	int32_t t86 = 147;

	t86 = ((x653>>(x654<=x655))==x656);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x661 = UINT16_MAX;
	int32_t x662 = -1;
	int64_t x663 = INT64_MAX;
	volatile uint32_t x664 = UINT32_MAX;
	static volatile int32_t t87 = 2;

	t87 = ((x661>>(x662<=x663))==x664);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x665 = 6971LLU;
	uint64_t x666 = 969939486013LLU;
	volatile uint8_t x667 = 0U;
	int16_t x668 = INT16_MAX;
	int32_t t88 = -145856652;

	t88 = ((x665>>(x666<=x667))==x668);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x673 = 3;
	uint16_t x674 = UINT16_MAX;
	int64_t x675 = -28202430LL;
	uint8_t x676 = UINT8_MAX;
	static volatile int32_t t89 = -22404097;

	t89 = ((x673>>(x674<=x675))==x676);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x678 = INT32_MAX;
	volatile int16_t x679 = INT16_MIN;
	int8_t x680 = -36;
	static volatile int32_t t90 = -1056083670;

	t90 = ((x677>>(x678<=x679))==x680);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x681 = 490;
	uint8_t x682 = UINT8_MAX;
	int32_t x683 = INT32_MIN;
	int8_t x684 = -9;
	int32_t t91 = 4597;

	t91 = ((x681>>(x682<=x683))==x684);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x685 = INT16_MAX;
	static int64_t x686 = INT64_MIN;
	int64_t x687 = 389LL;
	int16_t x688 = -1;
	int32_t t92 = 257614;

	t92 = ((x685>>(x686<=x687))==x688);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x694 = UINT32_MAX;
	static int8_t x695 = INT8_MIN;
	int64_t x696 = INT64_MIN;

	t93 = ((x693>>(x694<=x695))==x696);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x697 = 8U;
	uint32_t x698 = 1468356U;
	int8_t x699 = INT8_MIN;
	volatile int8_t x700 = -1;
	volatile int32_t t94 = 213;

	t94 = ((x697>>(x698<=x699))==x700);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x702 = UINT32_MAX;
	int8_t x703 = INT8_MIN;
	int8_t x704 = INT8_MIN;
	int32_t t95 = -251179;

	t95 = ((x701>>(x702<=x703))==x704);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x709 = INT8_MAX;
	uint32_t x710 = 670754499U;
	int32_t x712 = INT32_MIN;

	t96 = ((x709>>(x710<=x711))==x712);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x713 = 28109U;
	int16_t x714 = -16;
	volatile int16_t x715 = INT16_MIN;
	int64_t x716 = INT64_MIN;
	int32_t t97 = 3062583;

	t97 = ((x713>>(x714<=x715))==x716);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x725 = INT16_MAX;
	static int64_t x726 = -11482501209905244LL;
	int64_t x728 = 215804LL;
	int32_t t98 = -173723;

	t98 = ((x725>>(x726<=x727))==x728);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x729 = INT16_MAX;
	volatile int16_t x730 = INT16_MIN;
	static int8_t x732 = 0;
	volatile int32_t t99 = -29530492;

	t99 = ((x729>>(x730<=x731))==x732);

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

