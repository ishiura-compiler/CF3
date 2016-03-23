
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = 25U;
int64_t x4 = -928315067LL;
static uint16_t x5 = 1U;
int64_t x6 = INT64_MIN;
int64_t x7 = 46887LL;
int32_t t1 = -816052033;
static int16_t x10 = 877;
int16_t x23 = -1;
static uint8_t x24 = 127U;
volatile int32_t t5 = -327;
volatile int8_t x27 = INT8_MAX;
int64_t x33 = -1LL;
int64_t x38 = INT64_MAX;
int16_t x39 = -3639;
volatile int16_t x41 = -1;
static volatile int32_t x42 = -203446813;
int32_t t10 = -329;
volatile int16_t x48 = -4;
int32_t t11 = 25975;
uint32_t x57 = 1335U;
volatile int8_t x61 = -1;
static int32_t x63 = INT32_MIN;
volatile uint8_t x67 = 101U;
int32_t x68 = -1;
int32_t t16 = 1;
static uint64_t x72 = UINT64_MAX;
volatile int32_t t17 = -1697;
uint32_t x84 = UINT32_MAX;
static int64_t x89 = INT64_MIN;
int16_t x92 = -3;
uint32_t x96 = UINT32_MAX;
volatile int32_t t23 = -282334553;
static int64_t x111 = INT64_MAX;
int32_t t30 = 1;
int64_t x127 = INT64_MIN;
int32_t x128 = INT32_MIN;
int16_t x135 = INT16_MIN;
uint16_t x136 = 9946U;
int64_t x142 = INT64_MAX;
int16_t x143 = INT16_MAX;
static int64_t x147 = INT64_MIN;
static int32_t x148 = INT32_MAX;
volatile int32_t t36 = -273317;
uint8_t x155 = UINT8_MAX;
static uint32_t x164 = 30502399U;
int64_t x173 = -1LL;
volatile int32_t x177 = INT32_MIN;
uint32_t x178 = UINT32_MAX;
volatile int32_t t44 = -3692114;
volatile int64_t x182 = INT64_MIN;
static int16_t x192 = INT16_MIN;
int32_t t47 = 20140;
int16_t x194 = INT16_MIN;
volatile int32_t x197 = INT32_MIN;
volatile int32_t t49 = 15317282;
uint8_t x201 = 0U;
uint32_t x206 = UINT32_MAX;
int8_t x207 = INT8_MIN;
static volatile int32_t t51 = -299076682;
int32_t t52 = 57894;
int16_t x223 = -421;
uint32_t x225 = UINT32_MAX;
int8_t x232 = -20;
volatile int32_t x234 = INT32_MIN;
int32_t x247 = INT32_MAX;
static volatile int16_t x248 = -1;
int32_t t61 = -129303073;
volatile int16_t x249 = INT16_MIN;
volatile uint32_t x254 = 237681U;
int64_t x255 = INT64_MIN;
int32_t x258 = INT32_MAX;
int16_t x263 = INT16_MIN;
uint64_t x268 = UINT64_MAX;
uint16_t x275 = UINT16_MAX;
int8_t x278 = INT8_MAX;
int32_t x280 = 5871;
static volatile int32_t t69 = -25395;
int32_t t71 = -14894;
int32_t x292 = 1;
int8_t x296 = INT8_MIN;
uint8_t x298 = 3U;
int64_t x302 = 2LL;
int32_t x305 = -1;
uint8_t x309 = 2U;
volatile uint64_t x311 = 6213LLU;
int32_t t77 = -26773491;
int16_t x314 = 10;
int16_t x319 = INT16_MIN;
static int64_t x321 = INT64_MAX;
volatile int16_t x322 = 1;
static volatile int32_t t80 = -23310;
volatile int32_t t83 = 5;
uint8_t x339 = 5U;
uint16_t x340 = 0U;
int8_t x344 = 17;
volatile int32_t t85 = -1;
static uint32_t x347 = 28021899U;
int8_t x348 = INT8_MIN;
int8_t x352 = -1;
int16_t x354 = -1;
int16_t x362 = 173;
volatile uint64_t x364 = 23559880362126LLU;
int8_t x366 = INT8_MIN;
uint32_t x369 = 14310U;
int32_t x373 = INT32_MIN;
int8_t x374 = -1;
volatile int32_t t93 = 3061;
volatile int64_t x380 = -1LL;
int8_t x382 = 0;
volatile int8_t x386 = 0;
volatile int32_t x391 = INT32_MAX;
volatile int8_t x392 = 1;
int32_t x395 = -28;
uint64_t x401 = 11500LLU;
static int8_t x404 = INT8_MIN;
volatile int32_t t102 = -3084;
uint32_t x413 = 713U;
int32_t t103 = 66055466;
volatile int64_t x419 = -1LL;
volatile uint32_t x427 = UINT32_MAX;
volatile int32_t t106 = 0;
int8_t x429 = INT8_MAX;
int32_t t107 = 7013;
uint16_t x433 = UINT16_MAX;
static uint64_t x438 = UINT64_MAX;
int8_t x440 = -45;
int32_t t109 = 2098955;
static uint64_t x448 = UINT64_MAX;
int32_t t111 = 112;
uint8_t x452 = 46U;
volatile uint32_t x453 = 6386714U;
volatile int32_t t113 = -1;
volatile int64_t x461 = INT64_MAX;
int16_t x462 = 7165;
uint8_t x466 = 9U;
int32_t t117 = 598;
int32_t x478 = -1;
static uint16_t x483 = UINT16_MAX;
uint64_t x490 = 2547LLU;
int16_t x492 = INT16_MAX;
volatile int32_t x499 = INT32_MIN;
volatile uint16_t x501 = 20763U;
int32_t t125 = 393228232;
uint8_t x506 = 126U;
int16_t x509 = INT16_MAX;
uint16_t x514 = UINT16_MAX;
int64_t x518 = INT64_MAX;
volatile int32_t t130 = 1039;
uint8_t x525 = UINT8_MAX;
uint16_t x527 = 2386U;
int16_t x533 = -1;
int16_t x547 = INT16_MIN;
int8_t x550 = INT8_MIN;
int8_t x557 = -1;
uint8_t x561 = 22U;
int64_t x564 = -1LL;
volatile int32_t x568 = INT32_MIN;
int16_t x569 = 230;
int32_t x571 = 272;
volatile int32_t x572 = -1;
int32_t t142 = 159980050;
static int64_t x573 = -2941465LL;
uint32_t x577 = UINT32_MAX;
static uint64_t x580 = 692312222664LLU;
int8_t x581 = -4;
uint64_t x583 = 2915708608537616075LLU;
int16_t x584 = 7238;
int32_t t145 = -39929443;
volatile int32_t t146 = -30892;
uint8_t x591 = 100U;
volatile uint16_t x593 = 2806U;
int64_t x610 = 697176LL;
int64_t x611 = -260374116LL;
uint16_t x616 = 8U;
static volatile int32_t t153 = 504;
uint16_t x618 = 5U;
int32_t x622 = 1;
static int8_t x623 = -1;
int32_t t156 = -2375;
volatile int8_t x629 = -17;
int32_t x635 = -3624618;
volatile int16_t x644 = INT16_MIN;
int16_t x648 = INT16_MIN;
static int8_t x652 = INT8_MIN;
int32_t t163 = 0;
int16_t x660 = -1;
static uint8_t x662 = 58U;
int64_t x663 = INT64_MIN;
int32_t t166 = 13548078;
volatile int32_t t169 = -655979425;
int16_t x683 = INT16_MIN;
volatile int32_t t170 = -32713518;
int16_t x689 = -3053;
volatile int32_t t172 = 19937;
int32_t t173 = 119836675;
int32_t x698 = INT32_MAX;
int64_t x702 = 98LL;
int8_t x703 = INT8_MIN;
int8_t x705 = 37;
int32_t x707 = INT32_MIN;
uint8_t x714 = 16U;
volatile int32_t t178 = 197376;
uint16_t x719 = 738U;
volatile int32_t t181 = -6542;
uint16_t x737 = 5U;
int64_t x740 = -69403818092LL;
static uint64_t x745 = 7797820672517746824LLU;
int16_t x746 = INT16_MAX;
uint16_t x751 = 7023U;
uint64_t x755 = UINT64_MAX;
int32_t x771 = INT32_MIN;
static uint16_t x778 = UINT16_MAX;
uint8_t x779 = 83U;
volatile int32_t t194 = -183;
volatile int16_t x788 = 762;
int32_t t196 = 1;
uint32_t x790 = 107649U;
volatile int64_t x795 = -1LL;
int16_t x800 = INT16_MAX;


void f0(void) {
    	int64_t x1 = 352629037LL;
	static int16_t x3 = 134;
	volatile int32_t t0 = -52552332;

    t0 = ((x1&(x2>x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x8 = -3;

    t1 = ((x5&(x6>x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 4;
	int8_t x11 = INT8_MIN;
	volatile int32_t x12 = 0;
	volatile int32_t t2 = -2;

    t2 = ((x9&(x10>x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 3U;
	int64_t x14 = -1LL;
	volatile uint32_t x15 = UINT32_MAX;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -76595;

    t3 = ((x13&(x14>x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	static int8_t x18 = INT8_MAX;
	int8_t x19 = -1;
	uint16_t x20 = 1491U;
	static int32_t t4 = -1489;

    t4 = ((x17&(x18>x19))>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 29U;
	static int16_t x22 = INT16_MIN;

    t5 = ((x21&(x22>x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	int16_t x26 = INT16_MIN;
	int16_t x28 = -54;
	volatile int32_t t6 = 2590;

    t6 = ((x25&(x26>x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = -3757;
	uint64_t x30 = 43740LLU;
	uint32_t x31 = 247U;
	int16_t x32 = -231;
	volatile int32_t t7 = -7557167;

    t7 = ((x29&(x30>x31))>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x34 = UINT32_MAX;
	int16_t x35 = INT16_MIN;
	uint16_t x36 = 14242U;
	static volatile int32_t t8 = -3346103;

    t8 = ((x33&(x34>x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	static uint8_t x40 = UINT8_MAX;
	int32_t t9 = -17392;

    t9 = ((x37&(x38>x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x43 = 8U;
	uint16_t x44 = UINT16_MAX;

    t10 = ((x41&(x42>x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 122006LLU;
	volatile uint32_t x46 = UINT32_MAX;
	uint16_t x47 = 51U;

    t11 = ((x45&(x46>x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -58316813LL;
	int32_t x50 = -1;
	int64_t x51 = -1LL;
	static volatile int64_t x52 = 10169399112LL;
	volatile int32_t t12 = -16667027;

    t12 = ((x49&(x50>x51))>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MIN;
	static int64_t x54 = -1LL;
	uint64_t x55 = UINT64_MAX;
	int64_t x56 = INT64_MIN;
	static volatile int32_t t13 = -107686;

    t13 = ((x53&(x54>x55))>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = 32;
	uint16_t x59 = UINT16_MAX;
	uint16_t x60 = 2U;
	int32_t t14 = -7658307;

    t14 = ((x57&(x58>x59))>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = 1;
	uint8_t x64 = 23U;
	volatile int32_t t15 = -75973558;

    t15 = ((x61&(x62>x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;

    t16 = ((x65&(x66>x67))>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MAX;
	int64_t x70 = 582148LL;
	int32_t x71 = INT32_MIN;

    t17 = ((x69&(x70>x71))>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 0;
	int16_t x74 = 52;
	uint8_t x75 = 39U;
	static volatile int16_t x76 = -45;
	int32_t t18 = -35;

    t18 = ((x73&(x74>x75))>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	uint32_t x78 = UINT32_MAX;
	int64_t x79 = -4522665639536901LL;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = -50567;

    t19 = ((x77&(x78>x79))>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x81 = INT64_MAX;
	uint32_t x82 = UINT32_MAX;
	uint8_t x83 = 4U;
	volatile int32_t t20 = -2148102;

    t20 = ((x81&(x82>x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = INT64_MIN;
	int64_t x86 = INT64_MAX;
	static volatile int8_t x87 = 22;
	uint8_t x88 = 1U;
	int32_t t21 = 1;

    t21 = ((x85&(x86>x87))>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = INT16_MAX;
	int64_t x91 = -6408677997884841LL;
	volatile int32_t t22 = -10361;

    t22 = ((x89&(x90>x91))>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	int32_t x94 = 28357860;
	uint64_t x95 = 504504743891113LLU;

    t23 = ((x93&(x94>x95))>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 2;
	int64_t x98 = INT64_MAX;
	static uint32_t x99 = 10U;
	static int32_t x100 = -1;
	static volatile int32_t t24 = -79596;

    t24 = ((x97&(x98>x99))>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x101 = 4818092U;
	int32_t x102 = INT32_MIN;
	int16_t x103 = -1;
	static uint8_t x104 = UINT8_MAX;
	int32_t t25 = 32791075;

    t25 = ((x101&(x102>x103))>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	static int8_t x106 = INT8_MIN;
	volatile uint32_t x107 = 1925169U;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 866;

    t26 = ((x105&(x106>x107))>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -1LL;
	int16_t x110 = INT16_MIN;
	int64_t x112 = INT64_MAX;
	volatile int32_t t27 = 111296;

    t27 = ((x109&(x110>x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x113 = 7792U;
	static uint64_t x114 = UINT64_MAX;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 1948756;

    t28 = ((x113&(x114>x115))>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 0U;
	uint64_t x118 = 95LLU;
	uint64_t x119 = 402468373878699LLU;
	int32_t x120 = 5095523;
	int32_t t29 = -90962;

    t29 = ((x117&(x118>x119))>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x121 = 126U;
	int64_t x122 = 443055097712050LL;
	int64_t x123 = INT64_MIN;
	volatile int16_t x124 = -10;

    t30 = ((x121&(x122>x123))>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = 7455430LL;
	int8_t x126 = INT8_MAX;
	volatile int32_t t31 = 0;

    t31 = ((x125&(x126>x127))>x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = UINT8_MAX;
	int64_t x130 = -1LL;
	int8_t x131 = INT8_MIN;
	static int64_t x132 = -1LL;
	volatile int32_t t32 = 0;

    t32 = ((x129&(x130>x131))>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = INT32_MIN;
	volatile int16_t x134 = -18;
	volatile int32_t t33 = 245107;

    t33 = ((x133&(x134>x135))>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x137 = UINT64_MAX;
	int64_t x138 = -915LL;
	volatile int64_t x139 = -1LL;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t34 = -13910577;

    t34 = ((x137&(x138>x139))>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	volatile int16_t x144 = 16;
	int32_t t35 = -30863151;

    t35 = ((x141&(x142>x143))>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 404U;
	volatile int32_t x146 = INT32_MIN;

    t36 = ((x145&(x146>x147))>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 10038;
	uint16_t x150 = UINT16_MAX;
	uint16_t x151 = 1482U;
	static int32_t x152 = INT32_MAX;
	int32_t t37 = 1;

    t37 = ((x149&(x150>x151))>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = -1LL;
	uint16_t x154 = 0U;
	volatile uint16_t x156 = 16367U;
	int32_t t38 = 133523123;

    t38 = ((x153&(x154>x155))>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	static volatile uint8_t x158 = 48U;
	uint16_t x159 = 1U;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t39 = -5927;

    t39 = ((x157&(x158>x159))>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = -262039;
	static int64_t x162 = -352793LL;
	static int16_t x163 = 42;
	volatile int32_t t40 = -9;

    t40 = ((x161&(x162>x163))>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x165 = -1;
	int32_t x166 = INT32_MIN;
	int8_t x167 = -1;
	int64_t x168 = INT64_MIN;
	int32_t t41 = 238155;

    t41 = ((x165&(x166>x167))>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	volatile uint8_t x170 = UINT8_MAX;
	int64_t x171 = -7932381424641LL;
	int8_t x172 = -1;
	int32_t t42 = 422606;

    t42 = ((x169&(x170>x171))>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint64_t x174 = 5724003574908LLU;
	static int64_t x175 = INT64_MIN;
	int16_t x176 = INT16_MAX;
	volatile int32_t t43 = 115735;

    t43 = ((x173&(x174>x175))>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x179 = UINT32_MAX;
	int8_t x180 = -1;

    t44 = ((x177&(x178>x179))>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -16308401LL;
	static int8_t x183 = -46;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = -7;

    t45 = ((x181&(x182>x183))>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = INT64_MIN;
	uint32_t x186 = 7581U;
	int8_t x187 = INT8_MIN;
	int16_t x188 = -1237;
	volatile int32_t t46 = 128965200;

    t46 = ((x185&(x186>x187))>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -1;
	volatile int64_t x190 = 331369204504562LL;
	int8_t x191 = INT8_MIN;

    t47 = ((x189&(x190>x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	volatile uint64_t x195 = 3536536019LLU;
	uint64_t x196 = 42987490LLU;
	int32_t t48 = 32107833;

    t48 = ((x193&(x194>x195))>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = INT8_MAX;
	uint8_t x199 = 21U;
	int32_t x200 = 316;

    t49 = ((x197&(x198>x199))>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x202 = 2024LLU;
	int8_t x203 = -1;
	int16_t x204 = -14769;
	int32_t t50 = 1;

    t50 = ((x201&(x202>x203))>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = 1;
	int16_t x208 = INT16_MIN;

    t51 = ((x205&(x206>x207))>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x209 = 134LLU;
	int32_t x210 = INT32_MIN;
	static int32_t x211 = 6729032;
	uint64_t x212 = 39LLU;

    t52 = ((x209&(x210>x211))>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -30638945630209LL;
	static uint32_t x214 = 483499500U;
	volatile int64_t x215 = -1163983956507427LL;
	int8_t x216 = INT8_MAX;
	volatile int32_t t53 = 55777;

    t53 = ((x213&(x214>x215))>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 2U;
	volatile int16_t x218 = 236;
	uint8_t x219 = 0U;
	int64_t x220 = -6497248172216763LL;
	volatile int32_t t54 = -1095;

    t54 = ((x217&(x218>x219))>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 0;
	uint16_t x222 = UINT16_MAX;
	volatile int8_t x224 = INT8_MAX;
	volatile int32_t t55 = -3897;

    t55 = ((x221&(x222>x223))>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x226 = UINT32_MAX;
	int16_t x227 = -1;
	uint16_t x228 = 11785U;
	volatile int32_t t56 = 0;

    t56 = ((x225&(x226>x227))>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 247777U;
	int16_t x230 = -1;
	volatile int64_t x231 = -1LL;
	volatile int32_t t57 = 76777070;

    t57 = ((x229&(x230>x231))>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MAX;
	volatile uint16_t x235 = 23U;
	uint16_t x236 = 5487U;
	static volatile int32_t t58 = 18037;

    t58 = ((x233&(x234>x235))>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MAX;
	static uint64_t x238 = 25477813952518LLU;
	uint64_t x239 = 113197437LLU;
	volatile int64_t x240 = INT64_MAX;
	volatile int32_t t59 = 0;

    t59 = ((x237&(x238>x239))>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = UINT16_MAX;
	volatile uint64_t x242 = 377780LLU;
	volatile int32_t x243 = INT32_MIN;
	static int8_t x244 = 13;
	int32_t t60 = -47;

    t60 = ((x241&(x242>x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	static volatile int16_t x246 = INT16_MAX;

    t61 = ((x245&(x246>x247))>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x250 = UINT64_MAX;
	int8_t x251 = 0;
	uint32_t x252 = 69476U;
	static volatile int32_t t62 = 18136561;

    t62 = ((x249&(x250>x251))>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 2U;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t63 = 5;

    t63 = ((x253&(x254>x255))>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	static int64_t x259 = -12234LL;
	static volatile int32_t x260 = -1;
	volatile int32_t t64 = 59;

    t64 = ((x257&(x258>x259))>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	volatile int64_t x262 = INT64_MIN;
	uint16_t x264 = UINT16_MAX;
	static int32_t t65 = 16578;

    t65 = ((x261&(x262>x263))>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = 10;
	volatile uint8_t x266 = 3U;
	uint32_t x267 = UINT32_MAX;
	static volatile int32_t t66 = 7230564;

    t66 = ((x265&(x266>x267))>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -1;
	int8_t x270 = INT8_MAX;
	uint16_t x271 = 87U;
	int64_t x272 = 6332185544311LL;
	static int32_t t67 = -15067005;

    t67 = ((x269&(x270>x271))>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = -1;
	static uint32_t x274 = UINT32_MAX;
	static uint8_t x276 = 31U;
	static volatile int32_t t68 = -145;

    t68 = ((x273&(x274>x275))>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	int64_t x279 = INT64_MIN;

    t69 = ((x277&(x278>x279))>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	uint32_t x282 = 29U;
	int32_t x283 = INT32_MAX;
	int32_t x284 = 43672;
	volatile int32_t t70 = 99;

    t70 = ((x281&(x282>x283))>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 734978565U;
	int64_t x286 = -51875732913324LL;
	volatile int8_t x287 = INT8_MIN;
	volatile int32_t x288 = INT32_MIN;

    t71 = ((x285&(x286>x287))>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 13U;
	volatile uint16_t x290 = UINT16_MAX;
	static int16_t x291 = INT16_MIN;
	volatile int32_t t72 = -449;

    t72 = ((x289&(x290>x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x293 = 119U;
	static volatile uint64_t x294 = 592111462LLU;
	int8_t x295 = -1;
	volatile int32_t t73 = -522001089;

    t73 = ((x293&(x294>x295))>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint8_t x297 = 0U;
	volatile int8_t x299 = -2;
	static int8_t x300 = INT8_MIN;
	int32_t t74 = 775;

    t74 = ((x297&(x298>x299))>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MAX;
	int64_t x303 = INT64_MAX;
	volatile int8_t x304 = INT8_MIN;
	int32_t t75 = 842;

    t75 = ((x301&(x302>x303))>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MIN;
	uint16_t x308 = 300U;
	static int32_t t76 = 112126;

    t76 = ((x305&(x306>x307))>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x310 = -1;
	uint16_t x312 = UINT16_MAX;

    t77 = ((x309&(x310>x311))>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x313 = 897U;
	static uint16_t x315 = UINT16_MAX;
	volatile int16_t x316 = 3966;
	int32_t t78 = 1;

    t78 = ((x313&(x314>x315))>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 62U;
	volatile uint8_t x318 = 13U;
	int16_t x320 = 0;
	volatile int32_t t79 = 8143498;

    t79 = ((x317&(x318>x319))>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x323 = 1932959605305180LLU;
	static int32_t x324 = INT32_MIN;

    t80 = ((x321&(x322>x323))>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MAX;
	uint32_t x326 = UINT32_MAX;
	uint16_t x327 = UINT16_MAX;
	int32_t x328 = -347536200;
	int32_t t81 = -25441;

    t81 = ((x325&(x326>x327))>x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x329 = UINT16_MAX;
	static uint8_t x330 = 3U;
	volatile uint32_t x331 = UINT32_MAX;
	int32_t x332 = 18684;
	int32_t t82 = 0;

    t82 = ((x329&(x330>x331))>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = -1;
	volatile int16_t x334 = -49;
	static uint32_t x335 = 16473816U;
	static uint16_t x336 = UINT16_MAX;

    t83 = ((x333&(x334>x335))>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = 17184400;
	int32_t x338 = -1;
	volatile int32_t t84 = -655428064;

    t84 = ((x337&(x338>x339))>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x341 = 241483489442039292LLU;
	volatile int16_t x342 = -79;
	int64_t x343 = INT64_MIN;

    t85 = ((x341&(x342>x343))>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	uint16_t x346 = UINT16_MAX;
	int32_t t86 = 182404274;

    t86 = ((x345&(x346>x347))>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = UINT64_MAX;
	static int32_t x350 = INT32_MIN;
	uint32_t x351 = 2017377961U;
	volatile int32_t t87 = 367;

    t87 = ((x349&(x350>x351))>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MAX;
	int16_t x355 = INT16_MAX;
	volatile int32_t x356 = 232637;
	volatile int32_t t88 = -11;

    t88 = ((x353&(x354>x355))>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MAX;
	static int8_t x358 = 1;
	int32_t x359 = -61;
	int32_t x360 = 24;
	int32_t t89 = 593;

    t89 = ((x357&(x358>x359))>x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MIN;
	uint8_t x363 = 2U;
	volatile int32_t t90 = 3;

    t90 = ((x361&(x362>x363))>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = 2490450572891513562LL;
	int16_t x367 = 11784;
	volatile uint16_t x368 = 22912U;
	volatile int32_t t91 = -680052;

    t91 = ((x365&(x366>x367))>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x370 = 446356576U;
	static int64_t x371 = INT64_MIN;
	uint32_t x372 = UINT32_MAX;
	static volatile int32_t t92 = -461863391;

    t92 = ((x369&(x370>x371))>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x375 = UINT16_MAX;
	uint64_t x376 = 90258LLU;

    t93 = ((x373&(x374>x375))>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	volatile uint32_t x378 = 1325U;
	static int32_t x379 = -7845246;
	int32_t t94 = 7042;

    t94 = ((x377&(x378>x379))>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	int8_t x383 = 0;
	static volatile int32_t x384 = -12000;
	int32_t t95 = 14847765;

    t95 = ((x381&(x382>x383))>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = UINT64_MAX;
	int16_t x387 = INT16_MIN;
	static int64_t x388 = INT64_MIN;
	static int32_t t96 = 259772479;

    t96 = ((x385&(x386>x387))>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 0U;
	volatile uint64_t x390 = 1300141LLU;
	static volatile int32_t t97 = 8168;

    t97 = ((x389&(x390>x391))>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = INT64_MIN;
	static uint32_t x394 = 2024759U;
	static volatile int16_t x396 = INT16_MAX;
	int32_t t98 = -1058;

    t98 = ((x393&(x394>x395))>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MIN;
	uint16_t x398 = 27U;
	static volatile int8_t x399 = -1;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = -1598962;

    t99 = ((x397&(x398>x399))>x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x402 = INT64_MIN;
	int16_t x403 = INT16_MIN;
	static int32_t t100 = 0;

    t100 = ((x401&(x402>x403))>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	volatile uint16_t x406 = 3817U;
	int16_t x407 = INT16_MAX;
	uint8_t x408 = 2U;
	int32_t t101 = 1;

    t101 = ((x405&(x406>x407))>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 0;
	int8_t x410 = -1;
	int64_t x411 = INT64_MAX;
	volatile int64_t x412 = INT64_MIN;

    t102 = ((x409&(x410>x411))>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x414 = 589548276U;
	static uint32_t x415 = UINT32_MAX;
	int64_t x416 = 0LL;

    t103 = ((x413&(x414>x415))>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 29645U;
	volatile int16_t x418 = INT16_MAX;
	int8_t x420 = INT8_MIN;
	volatile int32_t t104 = 2543722;

    t104 = ((x417&(x418>x419))>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = 889;
	static int8_t x422 = INT8_MIN;
	int8_t x423 = -5;
	volatile uint16_t x424 = 1987U;
	static int32_t t105 = 0;

    t105 = ((x421&(x422>x423))>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MAX;
	int32_t x426 = INT32_MIN;
	static int32_t x428 = -1;

    t106 = ((x425&(x426>x427))>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = -993537;
	int32_t x431 = INT32_MAX;
	static volatile int8_t x432 = -1;

    t107 = ((x429&(x430>x431))>x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x434 = INT8_MIN;
	uint64_t x435 = 1779LLU;
	int8_t x436 = 0;
	volatile int32_t t108 = 96112;

    t108 = ((x433&(x434>x435))>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MAX;
	uint32_t x439 = 42U;

    t109 = ((x437&(x438>x439))>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	int64_t x442 = 7608310LL;
	int64_t x443 = -1LL;
	int16_t x444 = INT16_MIN;
	int32_t t110 = -16286994;

    t110 = ((x441&(x442>x443))>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x445 = INT32_MIN;
	int8_t x446 = INT8_MIN;
	volatile int16_t x447 = 547;

    t111 = ((x445&(x446>x447))>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x449 = INT32_MIN;
	volatile int8_t x450 = -16;
	int32_t x451 = INT32_MIN;
	volatile int32_t t112 = 12576;

    t112 = ((x449&(x450>x451))>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x454 = INT32_MAX;
	int64_t x455 = 2434526431LL;
	uint32_t x456 = 1340U;

    t113 = ((x453&(x454>x455))>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -85083038788LL;
	volatile int32_t x458 = 183025;
	static uint32_t x459 = UINT32_MAX;
	int8_t x460 = INT8_MAX;
	volatile int32_t t114 = 48;

    t114 = ((x457&(x458>x459))>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x463 = UINT8_MAX;
	int32_t x464 = 841265391;
	volatile int32_t t115 = -265354267;

    t115 = ((x461&(x462>x463))>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = -1;
	volatile uint64_t x467 = 0LLU;
	int64_t x468 = -61616484660980595LL;
	volatile int32_t t116 = -89329;

    t116 = ((x465&(x466>x467))>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x469 = -1;
	int64_t x470 = INT64_MAX;
	volatile int64_t x471 = INT64_MIN;
	int16_t x472 = -249;

    t117 = ((x469&(x470>x471))>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -82472;
	static uint16_t x474 = 76U;
	int8_t x475 = INT8_MIN;
	int8_t x476 = 62;
	int32_t t118 = 15861173;

    t118 = ((x473&(x474>x475))>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MAX;
	volatile int64_t x479 = INT64_MIN;
	uint8_t x480 = 106U;
	volatile int32_t t119 = 119393815;

    t119 = ((x477&(x478>x479))>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = 161362;
	volatile int64_t x482 = -1LL;
	int64_t x484 = INT64_MAX;
	volatile int32_t t120 = 7356997;

    t120 = ((x481&(x482>x483))>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -1;
	int32_t x486 = -1;
	int64_t x487 = -1LL;
	int16_t x488 = INT16_MAX;
	int32_t t121 = -3737;

    t121 = ((x485&(x486>x487))>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -1;
	int32_t x491 = INT32_MIN;
	volatile int32_t t122 = 62917;

    t122 = ((x489&(x490>x491))>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -3049917745123LL;
	static int32_t x494 = INT32_MAX;
	volatile uint8_t x495 = 8U;
	int32_t x496 = -1;
	int32_t t123 = -113;

    t123 = ((x493&(x494>x495))>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	volatile int16_t x498 = -1;
	volatile uint32_t x500 = UINT32_MAX;
	int32_t t124 = 43;

    t124 = ((x497&(x498>x499))>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = 1U;
	volatile int64_t x503 = -1LL;
	int16_t x504 = INT16_MAX;

    t125 = ((x501&(x502>x503))>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x505 = -1;
	int16_t x507 = INT16_MAX;
	int16_t x508 = -1;
	static volatile int32_t t126 = -5119566;

    t126 = ((x505&(x506>x507))>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x510 = 0U;
	uint16_t x511 = 131U;
	uint64_t x512 = UINT64_MAX;
	static int32_t t127 = 1115424;

    t127 = ((x509&(x510>x511))>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = -35;
	volatile uint64_t x515 = UINT64_MAX;
	int8_t x516 = INT8_MAX;
	static int32_t t128 = 1036235;

    t128 = ((x513&(x514>x515))>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 17U;
	uint8_t x519 = UINT8_MAX;
	int16_t x520 = -1;
	int32_t t129 = 1;

    t129 = ((x517&(x518>x519))>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = UINT8_MAX;
	int16_t x522 = INT16_MAX;
	int32_t x523 = -1;
	int16_t x524 = INT16_MAX;

    t130 = ((x521&(x522>x523))>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x526 = 1743266U;
	static int32_t x528 = INT32_MAX;
	int32_t t131 = -494781;

    t131 = ((x525&(x526>x527))>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x529 = 0;
	int32_t x530 = INT32_MAX;
	int16_t x531 = 13;
	volatile int64_t x532 = INT64_MIN;
	volatile int32_t t132 = 177605;

    t132 = ((x529&(x530>x531))>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x534 = -1;
	int32_t x535 = INT32_MAX;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t133 = 1179062;

    t133 = ((x533&(x534>x535))>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 58229885016LLU;
	uint32_t x538 = 8097U;
	static uint64_t x539 = UINT64_MAX;
	int32_t x540 = INT32_MIN;
	static int32_t t134 = -15;

    t134 = ((x537&(x538>x539))>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x541 = -1;
	uint16_t x542 = 15982U;
	static volatile uint32_t x543 = 51U;
	int8_t x544 = -49;
	volatile int32_t t135 = 43476455;

    t135 = ((x541&(x542>x543))>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = -1LL;
	uint8_t x546 = UINT8_MAX;
	volatile int8_t x548 = INT8_MAX;
	int32_t t136 = -2;

    t136 = ((x545&(x546>x547))>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	uint32_t x551 = 30U;
	static int32_t x552 = 107731;
	int32_t t137 = -18183;

    t137 = ((x549&(x550>x551))>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 29940013384542LLU;
	uint8_t x554 = UINT8_MAX;
	uint16_t x555 = UINT16_MAX;
	uint16_t x556 = 9007U;
	static int32_t t138 = 357170715;

    t138 = ((x553&(x554>x555))>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = -2;
	int64_t x559 = -1639202019636842LL;
	static int64_t x560 = -1LL;
	volatile int32_t t139 = -371872976;

    t139 = ((x557&(x558>x559))>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x562 = 1714601036524473199LL;
	uint64_t x563 = 375LLU;
	int32_t t140 = 1634;

    t140 = ((x561&(x562>x563))>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 1;
	static int32_t x566 = -47;
	static int16_t x567 = -1;
	static int32_t t141 = 6;

    t141 = ((x565&(x566>x567))>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x570 = -293;

    t142 = ((x569&(x570>x571))>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x574 = 4488491974280477LLU;
	int32_t x575 = INT32_MIN;
	int64_t x576 = INT64_MIN;
	int32_t t143 = -7;

    t143 = ((x573&(x574>x575))>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x578 = 0;
	int64_t x579 = -1LL;
	int32_t t144 = 0;

    t144 = ((x577&(x578>x579))>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x582 = UINT32_MAX;

    t145 = ((x581&(x582>x583))>x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x585 = INT32_MIN;
	int64_t x586 = INT64_MAX;
	int64_t x587 = 141876842262LL;
	int8_t x588 = INT8_MIN;

    t146 = ((x585&(x586>x587))>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -1;
	uint8_t x590 = 2U;
	static int32_t x592 = INT32_MIN;
	static int32_t t147 = 311959534;

    t147 = ((x589&(x590>x591))>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x594 = UINT32_MAX;
	int64_t x595 = -1LL;
	int8_t x596 = -1;
	volatile int32_t t148 = -26;

    t148 = ((x593&(x594>x595))>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 99640;
	int16_t x598 = INT16_MAX;
	int32_t x599 = -1;
	uint64_t x600 = 12372554442158LLU;
	static int32_t t149 = -59937272;

    t149 = ((x597&(x598>x599))>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	uint8_t x602 = 2U;
	volatile int8_t x603 = INT8_MIN;
	int32_t x604 = 46107886;
	int32_t t150 = -3681797;

    t150 = ((x601&(x602>x603))>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = 2;
	int16_t x606 = 1464;
	int64_t x607 = -1LL;
	int16_t x608 = 2;
	volatile int32_t t151 = 14;

    t151 = ((x605&(x606>x607))>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x609 = 97U;
	static uint16_t x612 = 3899U;
	int32_t t152 = -63634763;

    t152 = ((x609&(x610>x611))>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = -14;
	static volatile int8_t x614 = INT8_MIN;
	int8_t x615 = 0;

    t153 = ((x613&(x614>x615))>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 35U;
	volatile int64_t x619 = 20816957339410693LL;
	static uint16_t x620 = 723U;
	static volatile int32_t t154 = -4705426;

    t154 = ((x617&(x618>x619))>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x621 = -29839640;
	uint8_t x624 = 41U;
	static int32_t t155 = -25384;

    t155 = ((x621&(x622>x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 1762720751U;
	volatile int32_t x626 = -1;
	int32_t x627 = -1;
	uint32_t x628 = UINT32_MAX;

    t156 = ((x625&(x626>x627))>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = INT8_MIN;
	int16_t x631 = INT16_MIN;
	static uint32_t x632 = 3U;
	static int32_t t157 = -3862123;

    t157 = ((x629&(x630>x631))>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MAX;
	uint16_t x634 = UINT16_MAX;
	int64_t x636 = INT64_MIN;
	static volatile int32_t t158 = -1;

    t158 = ((x633&(x634>x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x637 = UINT64_MAX;
	volatile uint8_t x638 = 3U;
	int64_t x639 = INT64_MIN;
	static uint64_t x640 = 7921923614376596LLU;
	volatile int32_t t159 = 464;

    t159 = ((x637&(x638>x639))>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = UINT16_MAX;
	static uint16_t x642 = 338U;
	uint64_t x643 = UINT64_MAX;
	volatile int32_t t160 = -55;

    t160 = ((x641&(x642>x643))>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 15U;
	int8_t x646 = 10;
	int32_t x647 = INT32_MAX;
	volatile int32_t t161 = -337;

    t161 = ((x645&(x646>x647))>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x649 = -1;
	int16_t x650 = 50;
	int8_t x651 = -3;
	static int32_t t162 = 5;

    t162 = ((x649&(x650>x651))>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x653 = 491;
	int16_t x654 = -1;
	volatile int32_t x655 = INT32_MAX;
	volatile uint16_t x656 = UINT16_MAX;

    t163 = ((x653&(x654>x655))>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	int8_t x658 = INT8_MIN;
	uint16_t x659 = UINT16_MAX;
	volatile int32_t t164 = 1781970;

    t164 = ((x657&(x658>x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	uint8_t x664 = 5U;
	int32_t t165 = 7740;

    t165 = ((x661&(x662>x663))>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int16_t x666 = INT16_MIN;
	uint32_t x667 = 30U;
	uint8_t x668 = UINT8_MAX;

    t166 = ((x665&(x666>x667))>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x669 = -534;
	static int16_t x670 = INT16_MAX;
	int8_t x671 = -8;
	int16_t x672 = INT16_MAX;
	static int32_t t167 = 1802727;

    t167 = ((x669&(x670>x671))>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x673 = UINT16_MAX;
	uint8_t x674 = 61U;
	int64_t x675 = -1LL;
	int16_t x676 = -7;
	int32_t t168 = -28;

    t168 = ((x673&(x674>x675))>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x677 = 1698668U;
	static volatile int64_t x678 = -1LL;
	uint8_t x679 = 13U;
	int16_t x680 = -1;

    t169 = ((x677&(x678>x679))>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	uint8_t x682 = 10U;
	uint8_t x684 = 2U;

    t170 = ((x681&(x682>x683))>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	uint8_t x686 = 8U;
	static uint8_t x687 = 15U;
	volatile uint32_t x688 = 1815103U;
	volatile int32_t t171 = -281417;

    t171 = ((x685&(x686>x687))>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = -533;
	int8_t x691 = 6;
	int16_t x692 = -1;

    t172 = ((x689&(x690>x691))>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	static int8_t x694 = -1;
	static int8_t x695 = -31;
	int32_t x696 = -1027;

    t173 = ((x693&(x694>x695))>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = UINT16_MAX;
	uint32_t x699 = 58632115U;
	uint32_t x700 = 9020887U;
	volatile int32_t t174 = 231617642;

    t174 = ((x697&(x698>x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	int32_t x704 = 14742;
	int32_t t175 = 1516;

    t175 = ((x701&(x702>x703))>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x706 = 460173265358120LLU;
	int16_t x708 = 31;
	int32_t t176 = 5;

    t176 = ((x705&(x706>x707))>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 1240516U;
	int64_t x710 = INT64_MIN;
	int64_t x711 = -172LL;
	volatile int64_t x712 = 176461413LL;
	int32_t t177 = 34614;

    t177 = ((x709&(x710>x711))>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = UINT64_MAX;
	int64_t x715 = 3183175LL;
	int8_t x716 = -1;

    t178 = ((x713&(x714>x715))>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 64U;
	uint64_t x718 = UINT64_MAX;
	int32_t x720 = INT32_MAX;
	volatile int32_t t179 = -1;

    t179 = ((x717&(x718>x719))>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -6588;
	int32_t x722 = 297845;
	int32_t x723 = 5118;
	static uint32_t x724 = 126314376U;
	volatile int32_t t180 = 1314;

    t180 = ((x721&(x722>x723))>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = INT32_MIN;
	uint8_t x726 = UINT8_MAX;
	int16_t x727 = -971;
	uint8_t x728 = 3U;

    t181 = ((x725&(x726>x727))>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x729 = UINT32_MAX;
	static uint64_t x730 = 423248LLU;
	uint8_t x731 = UINT8_MAX;
	uint32_t x732 = 15099U;
	volatile int32_t t182 = -14587;

    t182 = ((x729&(x730>x731))>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 1U;
	uint16_t x734 = 320U;
	int8_t x735 = -12;
	int16_t x736 = -568;
	int32_t t183 = 398;

    t183 = ((x733&(x734>x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x738 = 106U;
	volatile int8_t x739 = -1;
	static int32_t t184 = -6343;

    t184 = ((x737&(x738>x739))>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = -1;
	uint16_t x742 = UINT16_MAX;
	uint8_t x743 = 3U;
	static int8_t x744 = INT8_MAX;
	static volatile int32_t t185 = 911009;

    t185 = ((x741&(x742>x743))>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x747 = INT16_MIN;
	static volatile int32_t x748 = -128385;
	static volatile int32_t t186 = -1108;

    t186 = ((x745&(x746>x747))>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x749 = 5527437U;
	int64_t x750 = INT64_MAX;
	volatile int32_t x752 = -1;
	volatile int32_t t187 = 30;

    t187 = ((x749&(x750>x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 484940888175289902LLU;
	int32_t x754 = 2;
	int64_t x756 = INT64_MIN;
	int32_t t188 = -219;

    t188 = ((x753&(x754>x755))>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = UINT32_MAX;
	volatile int16_t x758 = INT16_MIN;
	static int16_t x759 = INT16_MIN;
	volatile uint32_t x760 = 135U;
	int32_t t189 = 235977469;

    t189 = ((x757&(x758>x759))>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	int32_t x762 = 2868354;
	int64_t x763 = INT64_MIN;
	int16_t x764 = -1;
	volatile int32_t t190 = 1;

    t190 = ((x761&(x762>x763))>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = 51LL;
	int16_t x766 = INT16_MIN;
	static int16_t x767 = INT16_MIN;
	static volatile uint8_t x768 = 17U;
	int32_t t191 = 16925;

    t191 = ((x765&(x766>x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -27704797739LL;
	int32_t x770 = INT32_MIN;
	static volatile int16_t x772 = INT16_MIN;
	int32_t t192 = -8;

    t192 = ((x769&(x770>x771))>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 28677728329LLU;
	static int8_t x774 = INT8_MIN;
	static int64_t x775 = INT64_MAX;
	static uint16_t x776 = 619U;
	int32_t t193 = 111955695;

    t193 = ((x773&(x774>x775))>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x777 = 39LL;
	volatile int16_t x780 = INT16_MIN;

    t194 = ((x777&(x778>x779))>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = -3;
	volatile int32_t x782 = -111999;
	int16_t x783 = 1;
	uint8_t x784 = UINT8_MAX;
	volatile int32_t t195 = 110199;

    t195 = ((x781&(x782>x783))>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 1146331917346561096LLU;
	volatile int32_t x786 = -521722;
	int32_t x787 = -57086;

    t196 = ((x785&(x786>x787))>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 3656761325274507516LLU;
	volatile int64_t x791 = -1LL;
	uint8_t x792 = 12U;
	volatile int32_t t197 = 228230024;

    t197 = ((x789&(x790>x791))>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x793 = 1U;
	int32_t x794 = -486118;
	int8_t x796 = -1;
	volatile int32_t t198 = -11;

    t198 = ((x793&(x794>x795))>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -5384;
	uint16_t x798 = 0U;
	int8_t x799 = 1;
	volatile int32_t t199 = -82;

    t199 = ((x797&(x798>x799))>x800);

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

