#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = 18573463LL;
uint16_t x7 = 812U;
int8_t x14 = -1;
int32_t x34 = INT32_MAX;
uint64_t x36 = 991986345LLU;
int16_t x48 = INT16_MIN;
int32_t t7 = -153;
volatile int32_t t8 = 2;
volatile int32_t t9 = 1762640;
volatile int32_t t10 = 109224341;
uint32_t x74 = 206U;
static uint16_t x82 = 92U;
uint32_t x83 = 51477U;
int32_t t13 = 75;
static int64_t x87 = 63LL;
volatile uint8_t x88 = UINT8_MAX;
static uint8_t x102 = 2U;
int16_t x121 = -1;
int32_t t18 = 4933;
static int8_t x131 = INT8_MIN;
volatile int64_t x133 = -1LL;
int16_t x139 = -1;
int64_t x143 = -8LL;
uint64_t x153 = 1796784890771765LLU;
int64_t x160 = -1LL;
volatile int32_t t26 = -1;
int64_t x174 = INT64_MIN;
uint8_t x176 = 21U;
int16_t x186 = INT16_MIN;
volatile int32_t x187 = -1;
uint32_t x190 = 861U;
volatile int32_t t30 = -15770528;
uint64_t x195 = 43637107641LLU;
volatile int64_t x210 = INT64_MAX;
volatile int64_t x212 = -970831829025LL;
static volatile int8_t x235 = 6;
int8_t x251 = INT8_MIN;
int8_t x267 = INT8_MIN;
static volatile int32_t t39 = 73613;
int8_t x277 = 7;
int64_t x280 = -261605751463699LL;
static uint8_t x282 = 0U;
volatile int32_t t44 = -11;
volatile int32_t t45 = -6769661;
int64_t x303 = -258108546206831363LL;
int8_t x319 = 15;
volatile uint16_t x322 = 243U;
int8_t x331 = INT8_MIN;
int16_t x334 = -1;
static int8_t x335 = -1;
int64_t x346 = -1LL;
uint32_t x347 = 205985U;
int32_t t51 = -253871;
static volatile uint8_t x364 = 23U;
int16_t x372 = 1;
int32_t t56 = -1002508;
volatile int32_t t57 = -422631512;
static int16_t x389 = -1;
volatile uint32_t x391 = 97U;
volatile int8_t x393 = 8;
int16_t x397 = -3;
int8_t x404 = INT8_MIN;
volatile int32_t t62 = -6299469;
static int16_t x409 = INT16_MIN;
static int16_t x415 = -1;
uint32_t x433 = UINT32_MAX;
uint64_t x435 = 352035462388LLU;
static volatile int32_t x436 = -935713090;
static int8_t x437 = INT8_MAX;
static int16_t x438 = INT16_MAX;
volatile int32_t t68 = -29566230;
volatile int32_t t70 = -1719061;
static int16_t x454 = INT16_MIN;
int32_t x456 = INT32_MIN;
int32_t x459 = -179;
int32_t t72 = -823753240;
volatile uint8_t x463 = 21U;
int32_t t73 = -2706;
volatile int64_t x483 = -1LL;
uint8_t x484 = UINT8_MAX;
uint8_t x486 = 1U;
static int32_t x488 = INT32_MAX;
int64_t x490 = INT64_MIN;
int32_t x492 = INT32_MAX;
volatile int32_t t78 = 35;
static uint64_t x508 = UINT64_MAX;
static volatile int16_t x515 = 10;
static int64_t x517 = INT64_MIN;
uint8_t x519 = 14U;
volatile int32_t t82 = 395921065;
volatile int16_t x521 = INT16_MAX;
uint32_t x523 = 321097852U;
uint32_t x527 = UINT32_MAX;
int32_t x530 = 327685012;
int16_t x547 = INT16_MIN;
int32_t t87 = 809688469;
int64_t x554 = -281365643081556930LL;
volatile int32_t t88 = 49;
static int32_t x560 = INT32_MIN;
static volatile int8_t x567 = -1;
volatile int32_t t90 = 0;
static volatile int64_t x582 = INT64_MIN;
int32_t t91 = -268157191;
volatile int32_t t93 = 85840;
int64_t x595 = -1LL;
volatile int32_t t94 = 149066636;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int8_t x2 = -1;
	volatile uint16_t x3 = 7U;
	static int32_t t0 = -127084369;

	t0 = ((x1<x2)>>(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int64_t x6 = 128688LL;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -2;

	t1 = ((x5<x6)>>(x7/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x13 = 11705U;
	int32_t x15 = INT32_MIN;
	uint32_t x16 = 146166193U;
	volatile int32_t t2 = 1;

	t2 = ((x13<x14)>>(x15/x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = 503451;
	static int16_t x18 = 10;
	uint16_t x19 = UINT16_MAX;
	int64_t x20 = INT64_MAX;
	volatile int32_t t3 = -3314678;

	t3 = ((x17<x18)>>(x19/x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	volatile int64_t x26 = INT64_MAX;
	volatile int64_t x27 = -1LL;
	int64_t x28 = 89884733621LL;
	volatile int32_t t4 = -1;

	t4 = ((x25<x26)>>(x27/x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = 58U;
	uint16_t x35 = 4U;
	int32_t t5 = -440;

	t5 = ((x33<x34)>>(x35/x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x37 = 2779950LL;
	volatile uint8_t x38 = UINT8_MAX;
	uint64_t x39 = 4083021065624822056LLU;
	int32_t x40 = -1;
	static volatile int32_t t6 = 56;

	t6 = ((x37<x38)>>(x39/x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = 3851;
	int16_t x46 = 940;
	volatile int16_t x47 = -1;

	t7 = ((x45<x46)>>(x47/x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = -1;
	int64_t x50 = 4142077177327876LL;
	int64_t x51 = INT64_MIN;
	static int64_t x52 = INT64_MIN;

	t8 = ((x49<x50)>>(x51/x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x54 = 807LLU;
	int8_t x55 = 1;
	int8_t x56 = INT8_MIN;

	t9 = ((x53<x54)>>(x55/x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x65 = INT16_MAX;
	volatile int16_t x66 = -1;
	volatile uint64_t x67 = 9380267866LLU;
	static int64_t x68 = -1LL;

	t10 = ((x65<x66)>>(x67/x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x73 = UINT32_MAX;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MIN;
	int32_t t11 = -250;

	t11 = ((x73<x74)>>(x75/x76));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = -1;
	volatile int64_t x78 = INT64_MIN;
	static uint64_t x79 = 407674LLU;
	int16_t x80 = INT16_MIN;
	int32_t t12 = -1420;

	t12 = ((x77<x78)>>(x79/x80));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int8_t x84 = INT8_MIN;

	t13 = ((x81<x82)>>(x83/x84));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x85 = UINT32_MAX;
	uint32_t x86 = UINT32_MAX;
	volatile int32_t t14 = -4;

	t14 = ((x85<x86)>>(x87/x88));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x97 = -198832LL;
	int8_t x98 = -1;
	static uint64_t x99 = 3418690411LLU;
	static uint64_t x100 = UINT64_MAX;
	volatile int32_t t15 = -1;

	t15 = ((x97<x98)>>(x99/x100));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x101 = INT64_MIN;
	uint32_t x103 = 1U;
	int16_t x104 = INT16_MIN;
	volatile int32_t t16 = -528612;

	t16 = ((x101<x102)>>(x103/x104));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x109 = -5663;
	uint64_t x110 = 8400906259395057LLU;
	uint8_t x111 = 2U;
	volatile int64_t x112 = -28LL;
	int32_t t17 = -129376457;

	t17 = ((x109<x110)>>(x111/x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x122 = 2U;
	uint32_t x123 = UINT32_MAX;
	uint64_t x124 = UINT64_MAX;

	t18 = ((x121<x122)>>(x123/x124));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MAX;
	int32_t x132 = INT32_MAX;
	static int32_t t19 = -891;

	t19 = ((x129<x130)>>(x131/x132));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x134 = INT32_MIN;
	static volatile uint64_t x135 = 4023184593LLU;
	int64_t x136 = INT64_MAX;
	volatile int32_t t20 = 18;

	t20 = ((x133<x134)>>(x135/x136));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x137 = -1;
	int8_t x138 = -4;
	int8_t x140 = INT8_MAX;
	int32_t t21 = -6;

	t21 = ((x137<x138)>>(x139/x140));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x141 = INT64_MAX;
	int64_t x142 = INT64_MIN;
	static int64_t x144 = INT64_MIN;
	static int32_t t22 = 2415;

	t22 = ((x141<x142)>>(x143/x144));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x145 = 1938U;
	int32_t x146 = -1;
	volatile int16_t x147 = -1;
	volatile int8_t x148 = 5;
	volatile int32_t t23 = 0;

	t23 = ((x145<x146)>>(x147/x148));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x149 = UINT32_MAX;
	volatile int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MAX;
	static int64_t x152 = INT64_MIN;
	static volatile int32_t t24 = -45749328;

	t24 = ((x149<x150)>>(x151/x152));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x154 = 1;
	volatile int8_t x155 = -1;
	int64_t x156 = 3742655406379073391LL;
	int32_t t25 = -5;

	t25 = ((x153<x154)>>(x155/x156));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x157 = INT32_MAX;
	int16_t x158 = -220;
	static int16_t x159 = 0;

	t26 = ((x157<x158)>>(x159/x160));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x165 = INT64_MIN;
	int16_t x166 = INT16_MAX;
	int32_t x167 = -1;
	static uint8_t x168 = 62U;
	volatile int32_t t27 = 1;

	t27 = ((x165<x166)>>(x167/x168));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x173 = 10099U;
	int8_t x175 = 0;
	int32_t t28 = -3686;

	t28 = ((x173<x174)>>(x175/x176));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x185 = -2979;
	int8_t x188 = INT8_MIN;
	static volatile int32_t t29 = 252152334;

	t29 = ((x185<x186)>>(x187/x188));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x189 = -5835880910LL;
	static uint8_t x191 = 17U;
	int64_t x192 = INT64_MIN;

	t30 = ((x189<x190)>>(x191/x192));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x193 = INT16_MIN;
	int8_t x194 = 7;
	int32_t x196 = INT32_MIN;
	int32_t t31 = -3;

	t31 = ((x193<x194)>>(x195/x196));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x201 = 113U;
	uint64_t x202 = 89697822645210LLU;
	int32_t x203 = INT32_MAX;
	uint64_t x204 = 273139233355409679LLU;
	volatile int32_t t32 = 3;

	t32 = ((x201<x202)>>(x203/x204));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x209 = UINT64_MAX;
	volatile int16_t x211 = -54;
	int32_t t33 = 37;

	t33 = ((x209<x210)>>(x211/x212));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x221 = UINT8_MAX;
	int16_t x222 = -1;
	volatile int16_t x223 = -5;
	volatile int64_t x224 = INT64_MIN;
	int32_t t34 = 1;

	t34 = ((x221<x222)>>(x223/x224));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x233 = 1U;
	static uint16_t x234 = 791U;
	volatile int8_t x236 = INT8_MAX;
	int32_t t35 = 1;

	t35 = ((x233<x234)>>(x235/x236));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x245 = -812;
	uint32_t x246 = 0U;
	volatile int32_t x247 = -1;
	static int8_t x248 = 3;
	int32_t t36 = -152;

	t36 = ((x245<x246)>>(x247/x248));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x249 = -1;
	int16_t x250 = INT16_MIN;
	uint16_t x252 = 6550U;
	int32_t t37 = 323901945;

	t37 = ((x249<x250)>>(x251/x252));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x261 = UINT8_MAX;
	uint16_t x262 = UINT16_MAX;
	int16_t x263 = -8;
	int16_t x264 = INT16_MIN;
	int32_t t38 = -238;

	t38 = ((x261<x262)>>(x263/x264));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x265 = -16;
	static int32_t x266 = INT32_MIN;
	volatile int32_t x268 = INT32_MIN;

	t39 = ((x265<x266)>>(x267/x268));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x269 = 12U;
	uint16_t x270 = 2851U;
	volatile uint8_t x271 = 26U;
	uint32_t x272 = 8952706U;
	static int32_t t40 = 5951105;

	t40 = ((x269<x270)>>(x271/x272));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x278 = 0;
	int16_t x279 = 2;
	volatile int32_t t41 = -4;

	t41 = ((x277<x278)>>(x279/x280));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x281 = INT64_MIN;
	uint32_t x283 = 3960581U;
	static int64_t x284 = 12648113383223776LL;
	static int32_t t42 = 1;

	t42 = ((x281<x282)>>(x283/x284));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x290 = 69;
	int32_t x291 = -6128150;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t43 = 69246892;

	t43 = ((x289<x290)>>(x291/x292));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x293 = -1;
	static uint8_t x294 = 18U;
	volatile int16_t x295 = -1;
	int8_t x296 = INT8_MIN;

	t44 = ((x293<x294)>>(x295/x296));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x297 = INT8_MIN;
	uint64_t x298 = 1755LLU;
	int32_t x299 = INT32_MAX;
	int32_t x300 = INT32_MIN;

	t45 = ((x297<x298)>>(x299/x300));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x301 = 471;
	int8_t x302 = INT8_MAX;
	int64_t x304 = INT64_MIN;
	static volatile int32_t t46 = -77;

	t46 = ((x301<x302)>>(x303/x304));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x317 = -1;
	uint64_t x318 = 17932121774536142LLU;
	volatile int32_t x320 = INT32_MIN;
	volatile int32_t t47 = -14214247;

	t47 = ((x317<x318)>>(x319/x320));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x321 = INT8_MIN;
	uint16_t x323 = UINT16_MAX;
	volatile int64_t x324 = INT64_MIN;
	volatile int32_t t48 = 7926;

	t48 = ((x321<x322)>>(x323/x324));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x329 = 125U;
	int64_t x330 = INT64_MIN;
	int16_t x332 = INT16_MAX;
	volatile int32_t t49 = 21037;

	t49 = ((x329<x330)>>(x331/x332));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x333 = 17827699526233396LLU;
	static int8_t x336 = -1;
	volatile int32_t t50 = 1;

	t50 = ((x333<x334)>>(x335/x336));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x345 = 627018;
	int64_t x348 = INT64_MAX;

	t51 = ((x345<x346)>>(x347/x348));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MIN;
	int32_t x351 = 0;
	volatile uint64_t x352 = UINT64_MAX;
	volatile int32_t t52 = 18;

	t52 = ((x349<x350)>>(x351/x352));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x357 = -11;
	int32_t x358 = INT32_MIN;
	int32_t x359 = INT32_MAX;
	int64_t x360 = INT64_MIN;
	int32_t t53 = -202334;

	t53 = ((x357<x358)>>(x359/x360));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x361 = INT64_MIN;
	int64_t x362 = -2242429895LL;
	uint8_t x363 = UINT8_MAX;
	int32_t t54 = -30904687;

	t54 = ((x361<x362)>>(x363/x364));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x365 = UINT32_MAX;
	volatile int64_t x366 = -1LL;
	int16_t x367 = INT16_MIN;
	static uint16_t x368 = UINT16_MAX;
	volatile int32_t t55 = -37;

	t55 = ((x365<x366)>>(x367/x368));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x369 = 6373U;
	uint64_t x370 = 6407970LLU;
	int8_t x371 = 0;

	t56 = ((x369<x370)>>(x371/x372));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x385 = 82U;
	uint64_t x386 = 355020449LLU;
	int8_t x387 = -1;
	int8_t x388 = INT8_MIN;

	t57 = ((x385<x386)>>(x387/x388));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x390 = 107212447909760505LL;
	int64_t x392 = 43145000LL;
	int32_t t58 = 0;

	t58 = ((x389<x390)>>(x391/x392));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x394 = 329388583U;
	volatile int8_t x395 = INT8_MAX;
	uint8_t x396 = 50U;
	int32_t t59 = 1428;

	t59 = ((x393<x394)>>(x395/x396));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x398 = -1LL;
	uint16_t x399 = 1U;
	int64_t x400 = INT64_MIN;
	static int32_t t60 = -142598;

	t60 = ((x397<x398)>>(x399/x400));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x401 = INT32_MIN;
	static int16_t x402 = INT16_MAX;
	uint32_t x403 = 8345U;
	volatile int32_t t61 = 20457338;

	t61 = ((x401<x402)>>(x403/x404));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x405 = 90U;
	static int32_t x406 = -11120;
	uint16_t x407 = 1U;
	uint32_t x408 = 214605U;

	t62 = ((x405<x406)>>(x407/x408));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x410 = 58;
	uint32_t x411 = UINT32_MAX;
	volatile int32_t x412 = INT32_MIN;
	int32_t t63 = 7;

	t63 = ((x409<x410)>>(x411/x412));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x413 = 35U;
	static volatile int32_t x414 = 151954;
	int8_t x416 = INT8_MIN;
	volatile int32_t t64 = 1;

	t64 = ((x413<x414)>>(x415/x416));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x417 = 1;
	int64_t x418 = INT64_MIN;
	int16_t x419 = 0;
	volatile int32_t x420 = INT32_MAX;
	int32_t t65 = -520459992;

	t65 = ((x417<x418)>>(x419/x420));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x429 = 8155U;
	int64_t x430 = -306023500715LL;
	static uint8_t x431 = UINT8_MAX;
	static volatile uint64_t x432 = 467752830934326LLU;
	static volatile int32_t t66 = -1;

	t66 = ((x429<x430)>>(x431/x432));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x434 = INT16_MIN;
	volatile int32_t t67 = -1;

	t67 = ((x433<x434)>>(x435/x436));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x439 = -1;
	int8_t x440 = -1;

	t68 = ((x437<x438)>>(x439/x440));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x441 = 6U;
	int16_t x442 = 1647;
	int16_t x443 = 1;
	uint8_t x444 = 58U;
	int32_t t69 = -1702;

	t69 = ((x441<x442)>>(x443/x444));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x445 = 469183;
	static uint16_t x446 = 6U;
	uint16_t x447 = 1985U;
	uint32_t x448 = 175036041U;

	t70 = ((x445<x446)>>(x447/x448));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x453 = 410498U;
	uint8_t x455 = 122U;
	int32_t t71 = 0;

	t71 = ((x453<x454)>>(x455/x456));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x457 = UINT16_MAX;
	int32_t x458 = -1;
	int32_t x460 = INT32_MIN;

	t72 = ((x457<x458)>>(x459/x460));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x461 = UINT16_MAX;
	volatile int64_t x462 = INT64_MAX;
	static volatile int32_t x464 = INT32_MIN;

	t73 = ((x461<x462)>>(x463/x464));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x465 = 111LL;
	int8_t x466 = -1;
	static uint16_t x467 = UINT16_MAX;
	uint32_t x468 = UINT32_MAX;
	int32_t t74 = 7161460;

	t74 = ((x465<x466)>>(x467/x468));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x481 = 422758794116LL;
	uint32_t x482 = UINT32_MAX;
	volatile int32_t t75 = -1;

	t75 = ((x481<x482)>>(x483/x484));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x485 = INT32_MIN;
	uint32_t x487 = 289523U;
	static int32_t t76 = -2061504;

	t76 = ((x485<x486)>>(x487/x488));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x489 = 65778455286649910LLU;
	uint8_t x491 = 11U;
	int32_t t77 = 5591;

	t77 = ((x489<x490)>>(x491/x492));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x501 = 3U;
	static uint32_t x502 = UINT32_MAX;
	static volatile int16_t x503 = 396;
	int16_t x504 = INT16_MIN;

	t78 = ((x501<x502)>>(x503/x504));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x505 = INT16_MIN;
	int32_t x506 = 2052519;
	int32_t x507 = -4;
	volatile int32_t t79 = 2594;

	t79 = ((x505<x506)>>(x507/x508));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x509 = 7;
	int64_t x510 = INT64_MIN;
	int32_t x511 = INT32_MAX;
	volatile int64_t x512 = INT64_MAX;
	int32_t t80 = -108291867;

	t80 = ((x509<x510)>>(x511/x512));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x513 = 426U;
	int32_t x514 = -20;
	uint64_t x516 = 6957750831LLU;
	static int32_t t81 = 13;

	t81 = ((x513<x514)>>(x515/x516));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x518 = 1;
	static volatile int64_t x520 = INT64_MAX;

	t82 = ((x517<x518)>>(x519/x520));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x522 = 4U;
	uint32_t x524 = 436085975U;
	volatile int32_t t83 = -3;

	t83 = ((x521<x522)>>(x523/x524));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x525 = UINT32_MAX;
	int16_t x526 = 3;
	volatile int8_t x528 = -1;
	int32_t t84 = -2046747;

	t84 = ((x525<x526)>>(x527/x528));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x529 = 46379132LL;
	uint8_t x531 = 116U;
	volatile int16_t x532 = INT16_MIN;
	volatile int32_t t85 = 296;

	t85 = ((x529<x530)>>(x531/x532));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x541 = -1;
	volatile int16_t x542 = INT16_MAX;
	int64_t x543 = -1LL;
	volatile int8_t x544 = INT8_MIN;
	int32_t t86 = 4940687;

	t86 = ((x541<x542)>>(x543/x544));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x545 = 1U;
	int64_t x546 = INT64_MAX;
	static int32_t x548 = INT32_MAX;

	t87 = ((x545<x546)>>(x547/x548));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x553 = -1LL;
	int32_t x555 = -983;
	int64_t x556 = INT64_MIN;

	t88 = ((x553<x554)>>(x555/x556));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x557 = -1;
	volatile int16_t x558 = -252;
	int16_t x559 = -1;
	int32_t t89 = -1808027;

	t89 = ((x557<x558)>>(x559/x560));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x565 = INT8_MAX;
	static int64_t x566 = INT64_MIN;
	int64_t x568 = INT64_MAX;

	t90 = ((x565<x566)>>(x567/x568));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x581 = 8U;
	uint16_t x583 = 1U;
	uint8_t x584 = 4U;

	t91 = ((x581<x582)>>(x583/x584));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x585 = INT8_MIN;
	int32_t x586 = 5;
	int8_t x587 = INT8_MAX;
	int8_t x588 = INT8_MAX;
	volatile int32_t t92 = -488643;

	t92 = ((x585<x586)>>(x587/x588));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x589 = INT8_MIN;
	static int64_t x590 = 9497276933LL;
	int64_t x591 = 1122806820067442LL;
	static int64_t x592 = INT64_MIN;

	t93 = ((x589<x590)>>(x591/x592));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x593 = INT32_MAX;
	uint32_t x594 = 6834121U;
	volatile int64_t x596 = INT64_MAX;

	t94 = ((x593<x594)>>(x595/x596));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x597 = 33U;
	static uint64_t x598 = 7045735496953LLU;
	int16_t x599 = INT16_MIN;
	static int64_t x600 = INT64_MAX;
	int32_t t95 = -711;

	t95 = ((x597<x598)>>(x599/x600));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x601 = -1LL;
	static uint32_t x602 = 1U;
	static uint8_t x603 = 15U;
	int16_t x604 = INT16_MAX;
	volatile int32_t t96 = -1126;

	t96 = ((x601<x602)>>(x603/x604));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x609 = UINT64_MAX;
	int16_t x610 = 3;
	int8_t x611 = -9;
	static uint16_t x612 = UINT16_MAX;
	volatile int32_t t97 = -34552039;

	t97 = ((x609<x610)>>(x611/x612));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x617 = UINT16_MAX;
	volatile int64_t x618 = -995321107870418465LL;
	volatile uint8_t x619 = UINT8_MAX;
	volatile int32_t x620 = INT32_MAX;
	volatile int32_t t98 = 1362;

	t98 = ((x617<x618)>>(x619/x620));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x625 = 0U;
	volatile int16_t x626 = INT16_MAX;
	int32_t x627 = -1;
	int8_t x628 = 7;
	static volatile int32_t t99 = -31146411;

	t99 = ((x625<x626)>>(x627/x628));

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

