
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

static int64_t x5 = INT64_MAX;
volatile int32_t x6 = 12;
static volatile int8_t x15 = -1;
uint8_t x16 = UINT8_MAX;
uint64_t x19 = 37844694251476LLU;
volatile int32_t t4 = -89;
int64_t x21 = 63215LL;
uint8_t x25 = UINT8_MAX;
int64_t x26 = 99746933LL;
int16_t x28 = -1;
static uint16_t x37 = 3777U;
int32_t t9 = -1990249;
static uint64_t x41 = UINT64_MAX;
volatile int32_t t10 = 200;
volatile int32_t t11 = 42935160;
volatile int32_t x51 = INT32_MIN;
int16_t x54 = INT16_MIN;
int32_t x55 = -1;
volatile int32_t t14 = -237026095;
int16_t x64 = -1;
volatile int32_t x65 = -1016975;
static int64_t x66 = 12978443423573LL;
static volatile int32_t t16 = -10016;
int64_t x73 = -88742453063321820LL;
int16_t x75 = INT16_MIN;
int32_t x77 = 35139395;
int32_t x78 = 420472;
uint16_t x79 = 7U;
uint16_t x81 = UINT16_MAX;
static int32_t t20 = 1;
int8_t x93 = INT8_MIN;
int32_t x95 = -532689914;
static int8_t x98 = INT8_MAX;
uint8_t x110 = 116U;
int32_t t28 = 274;
int32_t t29 = -288187537;
int64_t x126 = 2632403028708885863LL;
int32_t x129 = -1;
uint32_t x130 = 1669571U;
static volatile int16_t x132 = INT16_MAX;
int16_t x138 = -1;
int32_t x147 = INT32_MIN;
int32_t t36 = 1028807602;
static volatile int32_t x152 = -1;
int64_t x153 = -1LL;
volatile int32_t t39 = -74046194;
volatile int16_t x161 = INT16_MIN;
static int16_t x164 = INT16_MIN;
volatile int64_t x165 = -1LL;
int16_t x171 = -1;
volatile int64_t x173 = INT64_MIN;
volatile int32_t x174 = INT32_MAX;
static int32_t x178 = -1;
static volatile int32_t t44 = 0;
int16_t x182 = 23;
volatile int32_t t48 = -10;
uint16_t x199 = 28674U;
int64_t x211 = 39364226559901171LL;
int64_t x216 = 233920603489LL;
volatile int32_t t55 = -1;
int8_t x230 = -1;
static int64_t x235 = INT64_MIN;
int16_t x238 = -138;
int8_t x239 = 3;
int32_t t60 = 100496;
volatile int64_t x246 = INT64_MIN;
int64_t x249 = -60591629483901LL;
int32_t x252 = INT32_MIN;
int32_t x259 = -4572;
int64_t x269 = 62896349994056LL;
int64_t x277 = INT64_MIN;
volatile uint16_t x279 = 13U;
int64_t x281 = 6519LL;
static int64_t x286 = INT64_MIN;
int32_t t71 = 41800;
static int16_t x307 = INT16_MIN;
volatile uint32_t x308 = 2U;
int32_t t77 = 1005570561;
static int8_t x313 = -1;
static volatile int32_t t78 = 1372;
int16_t x317 = -5;
static int32_t t79 = 33;
static int32_t t80 = 1;
int32_t x325 = INT32_MAX;
int64_t x326 = INT64_MAX;
int16_t x328 = INT16_MIN;
int8_t x330 = INT8_MIN;
int32_t x333 = -1;
int64_t x336 = -1LL;
static volatile int32_t x341 = INT32_MIN;
uint16_t x344 = 27U;
int32_t t85 = -168;
volatile int16_t x346 = INT16_MIN;
volatile uint64_t x351 = 1462961LLU;
volatile int32_t t87 = -53260029;
volatile int64_t x355 = INT64_MAX;
uint8_t x363 = 3U;
uint64_t x366 = UINT64_MAX;
int32_t t91 = -471942330;
int8_t x371 = 0;
int32_t x379 = 6508906;
volatile int32_t t94 = -633322859;
volatile uint64_t x384 = 120193879670LLU;
volatile int16_t x386 = -1;
int64_t x387 = INT64_MIN;
static uint64_t x397 = 217364LLU;
int32_t t99 = 1886437;
uint32_t x403 = 36U;
static int32_t x404 = INT32_MIN;
int32_t t103 = 27741388;
int32_t t104 = -1;
uint16_t x430 = UINT16_MAX;
int8_t x436 = -1;
int32_t x439 = 394806;
static volatile int32_t t110 = -20876608;
int64_t x448 = INT64_MIN;
volatile int64_t x449 = 0LL;
int16_t x451 = 11788;
static volatile int32_t t112 = 111846;
uint8_t x457 = 1U;
static uint8_t x459 = UINT8_MAX;
int32_t x463 = -1;
int32_t t117 = -367;
static int32_t x474 = INT32_MIN;
volatile uint16_t x478 = 166U;
int64_t x479 = INT64_MIN;
volatile int16_t x484 = INT16_MIN;
volatile int32_t t120 = 89055;
int32_t t121 = 21828578;
uint64_t x491 = 253LLU;
uint16_t x494 = UINT16_MAX;
int8_t x496 = -29;
volatile int64_t x500 = INT64_MAX;
int32_t x502 = -1;
int32_t x504 = 87574338;
volatile uint64_t x515 = 138LLU;
int16_t x520 = 0;
volatile int32_t t129 = -2316193;
static int64_t x523 = -1LL;
int32_t t130 = 89;
uint16_t x526 = 40U;
int16_t x527 = INT16_MAX;
static int8_t x531 = INT8_MIN;
static int32_t t132 = 0;
uint64_t x537 = UINT64_MAX;
int8_t x542 = INT8_MAX;
int16_t x544 = 61;
volatile int32_t t136 = 147644;
int64_t x552 = INT64_MAX;
uint64_t x553 = 530LLU;
int32_t x561 = 2;
volatile uint64_t x563 = 978962865554LLU;
uint64_t x565 = UINT64_MAX;
int64_t x566 = INT64_MAX;
int32_t x571 = -89;
static uint8_t x577 = UINT8_MAX;
static uint16_t x580 = 4354U;
int64_t x597 = INT64_MIN;
uint64_t x600 = UINT64_MAX;
static uint64_t x603 = 429828604LLU;
static volatile int32_t t150 = -663;
int16_t x607 = INT16_MIN;
volatile int32_t t151 = 49569005;
int32_t x617 = INT32_MAX;
static int32_t t155 = -41515496;
volatile int16_t x625 = INT16_MIN;
volatile uint16_t x626 = 32U;
uint64_t x628 = UINT64_MAX;
static uint8_t x632 = 10U;
int64_t x633 = 720358LL;
static uint16_t x647 = UINT16_MAX;
static volatile int8_t x651 = 1;
int64_t x654 = INT64_MIN;
int8_t x659 = INT8_MIN;
static int16_t x667 = -1;
int8_t x680 = -6;
uint32_t x687 = UINT32_MAX;
static int16_t x689 = INT16_MAX;
uint64_t x698 = 564160675552630449LLU;
static volatile int32_t t175 = 18514652;
uint16_t x706 = 5U;
uint64_t x709 = UINT64_MAX;
int16_t x711 = INT16_MIN;
int32_t x717 = -1;
volatile int8_t x723 = INT8_MIN;
int32_t t180 = 281675;
volatile uint32_t x736 = UINT32_MAX;
static volatile int16_t x742 = INT16_MIN;
int16_t x744 = -1;
int8_t x752 = -11;
static uint16_t x755 = UINT16_MAX;
int64_t x763 = INT64_MIN;
uint64_t x771 = 66485337592615506LLU;
int16_t x778 = INT16_MAX;
int64_t x781 = INT64_MIN;
uint16_t x793 = 3506U;
int32_t t198 = -67148;
static uint64_t x799 = UINT64_MAX;


void f0(void) {
    	int16_t x1 = -45;
	static int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MAX;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 1268;

    t0 = (x1!=(x2^(x3!=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x7 = -1;
	volatile int16_t x8 = 0;
	static volatile int32_t t1 = 2233;

    t1 = (x5!=(x6^(x7!=x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	volatile int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MAX;
	int32_t t2 = 1;

    t2 = (x9!=(x10^(x11!=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -227784;
	uint64_t x14 = 49LLU;
	int32_t t3 = -64111887;

    t3 = (x13!=(x14^(x15!=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int32_t x18 = 503351;
	int64_t x20 = INT64_MIN;

    t4 = (x17!=(x18^(x19!=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = -1;
	uint32_t x23 = UINT32_MAX;
	int64_t x24 = -3459914723339765333LL;
	volatile int32_t t5 = -34597;

    t5 = (x21!=(x22^(x23!=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x27 = INT8_MAX;
	volatile int32_t t6 = -209212702;

    t6 = (x25!=(x26^(x27!=x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	uint64_t x30 = 36LLU;
	static uint64_t x31 = 925038172329626LLU;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = 2035;

    t7 = (x29!=(x30^(x31!=x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 19261U;
	int16_t x34 = 2455;
	int8_t x35 = INT8_MIN;
	uint8_t x36 = 39U;
	volatile int32_t t8 = 30;

    t8 = (x33!=(x34^(x35!=x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 4U;
	static volatile uint8_t x39 = 92U;
	static int8_t x40 = 1;

    t9 = (x37!=(x38^(x39!=x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MIN;

    t10 = (x41!=(x42^(x43!=x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	uint64_t x46 = UINT64_MAX;
	int16_t x47 = INT16_MIN;
	uint16_t x48 = 9U;

    t11 = (x45!=(x46^(x47!=x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -95LL;
	int64_t x50 = INT64_MAX;
	int8_t x52 = -47;
	int32_t t12 = -75823;

    t12 = (x49!=(x50^(x51!=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x53 = UINT8_MAX;
	volatile int8_t x56 = -1;
	int32_t t13 = -76;

    t13 = (x53!=(x54^(x55!=x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = INT8_MIN;
	volatile uint8_t x58 = UINT8_MAX;
	int16_t x59 = -32;
	int16_t x60 = -9;

    t14 = (x57!=(x58^(x59!=x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	uint8_t x62 = UINT8_MAX;
	uint8_t x63 = 0U;
	int32_t t15 = 5;

    t15 = (x61!=(x62^(x63!=x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x67 = INT8_MIN;
	static int8_t x68 = 1;

    t16 = (x65!=(x66^(x67!=x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	int64_t x71 = 21LL;
	int64_t x72 = INT64_MAX;
	int32_t t17 = -7078;

    t17 = (x69!=(x70^(x71!=x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = -1;
	static int16_t x76 = INT16_MIN;
	int32_t t18 = 497470103;

    t18 = (x73!=(x74^(x75!=x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x80 = -16572179007LL;
	volatile int32_t t19 = -121835;

    t19 = (x77!=(x78^(x79!=x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x82 = UINT16_MAX;
	uint32_t x83 = UINT32_MAX;
	volatile int16_t x84 = INT16_MIN;

    t20 = (x81!=(x82^(x83!=x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 0LLU;
	uint32_t x86 = UINT32_MAX;
	volatile int8_t x87 = INT8_MIN;
	uint16_t x88 = 1814U;
	int32_t t21 = 1994670;

    t21 = (x85!=(x86^(x87!=x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = INT32_MAX;
	int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MAX;
	static int64_t x92 = -1LL;
	int32_t t22 = -188;

    t22 = (x89!=(x90^(x91!=x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = INT32_MAX;
	static int8_t x96 = -1;
	static int32_t t23 = 39;

    t23 = (x93!=(x94^(x95!=x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	static int8_t x99 = 0;
	int8_t x100 = 0;
	volatile int32_t t24 = -106985;

    t24 = (x97!=(x98^(x99!=x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = INT16_MIN;
	uint32_t x102 = 1598756083U;
	int8_t x103 = -1;
	volatile int32_t x104 = 195;
	volatile int32_t t25 = -6185;

    t25 = (x101!=(x102^(x103!=x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 1;
	volatile uint16_t x106 = 21237U;
	uint32_t x107 = 15877096U;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = -15889;

    t26 = (x105!=(x106^(x107!=x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 1948041U;
	int16_t x111 = INT16_MIN;
	volatile uint64_t x112 = 41708LLU;
	int32_t t27 = 13562;

    t27 = (x109!=(x110^(x111!=x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	static int32_t x114 = INT32_MAX;
	int8_t x115 = INT8_MIN;
	int32_t x116 = 235;

    t28 = (x113!=(x114^(x115!=x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = INT64_MIN;
	volatile uint32_t x118 = 513209U;
	int64_t x119 = -1LL;
	int64_t x120 = -18699787637LL;

    t29 = (x117!=(x118^(x119!=x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -197017814414089LL;
	uint8_t x122 = UINT8_MAX;
	int32_t x123 = -1;
	int16_t x124 = INT16_MAX;
	int32_t t30 = 62170;

    t30 = (x121!=(x122^(x123!=x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int8_t x127 = -1;
	int64_t x128 = INT64_MAX;
	volatile int32_t t31 = 59;

    t31 = (x125!=(x126^(x127!=x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x131 = INT64_MAX;
	volatile int32_t t32 = -80330;

    t32 = (x129!=(x130^(x131!=x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = INT16_MAX;
	volatile int16_t x134 = 1853;
	volatile int8_t x135 = INT8_MIN;
	static int32_t x136 = INT32_MIN;
	volatile int32_t t33 = -16333118;

    t33 = (x133!=(x134^(x135!=x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 72895635575LLU;
	uint32_t x139 = 7U;
	volatile int8_t x140 = INT8_MIN;
	int32_t t34 = 474321;

    t34 = (x137!=(x138^(x139!=x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x141 = UINT16_MAX;
	volatile int8_t x142 = INT8_MIN;
	volatile int8_t x143 = INT8_MIN;
	volatile uint32_t x144 = UINT32_MAX;
	volatile int32_t t35 = 0;

    t35 = (x141!=(x142^(x143!=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	static uint64_t x146 = UINT64_MAX;
	volatile int8_t x148 = INT8_MAX;

    t36 = (x145!=(x146^(x147!=x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 683492U;
	volatile uint8_t x150 = UINT8_MAX;
	int8_t x151 = INT8_MAX;
	int32_t t37 = -43;

    t37 = (x149!=(x150^(x151!=x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x154 = -3993259568LL;
	int64_t x155 = -1LL;
	volatile uint16_t x156 = 4443U;
	volatile int32_t t38 = 494397788;

    t38 = (x153!=(x154^(x155!=x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	uint64_t x158 = 75215480LLU;
	int8_t x159 = INT8_MAX;
	uint32_t x160 = UINT32_MAX;

    t39 = (x157!=(x158^(x159!=x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x162 = 6LLU;
	static volatile int8_t x163 = 23;
	static int32_t t40 = -1;

    t40 = (x161!=(x162^(x163!=x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x166 = -1;
	int16_t x167 = 2556;
	static volatile int64_t x168 = 14947LL;
	int32_t t41 = -42527;

    t41 = (x165!=(x166^(x167!=x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x169 = 13U;
	int8_t x170 = -1;
	int64_t x172 = -481566LL;
	volatile int32_t t42 = 7953;

    t42 = (x169!=(x170^(x171!=x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x175 = INT64_MIN;
	uint32_t x176 = UINT32_MAX;
	volatile int32_t t43 = 939;

    t43 = (x173!=(x174^(x175!=x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	uint32_t x179 = 6U;
	int32_t x180 = INT32_MIN;

    t44 = (x177!=(x178^(x179!=x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = UINT32_MAX;
	int64_t x183 = -266729815454724LL;
	static uint8_t x184 = 82U;
	volatile int32_t t45 = 50078;

    t45 = (x181!=(x182^(x183!=x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x185 = 497722LLU;
	uint8_t x186 = 1U;
	static uint8_t x187 = UINT8_MAX;
	volatile int16_t x188 = -1;
	volatile int32_t t46 = -2328;

    t46 = (x185!=(x186^(x187!=x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = UINT8_MAX;
	uint64_t x190 = UINT64_MAX;
	uint64_t x191 = UINT64_MAX;
	static int32_t x192 = INT32_MIN;
	volatile int32_t t47 = -923098758;

    t47 = (x189!=(x190^(x191!=x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = -1;
	int64_t x194 = INT64_MAX;
	int8_t x195 = INT8_MIN;
	int64_t x196 = -1LL;

    t48 = (x193!=(x194^(x195!=x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = 2780604237812169LL;
	volatile int64_t x198 = 17LL;
	static int32_t x200 = -10426823;
	int32_t t49 = -1;

    t49 = (x197!=(x198^(x199!=x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MIN;
	uint64_t x204 = 208737LLU;
	int32_t t50 = 16767449;

    t50 = (x201!=(x202^(x203!=x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x205 = -1;
	volatile int64_t x206 = INT64_MIN;
	int16_t x207 = 44;
	uint8_t x208 = UINT8_MAX;
	static volatile int32_t t51 = -1;

    t51 = (x205!=(x206^(x207!=x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x209 = -43880534231028LL;
	static int64_t x210 = INT64_MAX;
	int8_t x212 = -1;
	int32_t t52 = 7433917;

    t52 = (x209!=(x210^(x211!=x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 15801010U;
	uint16_t x214 = 0U;
	uint32_t x215 = 195241771U;
	volatile int32_t t53 = -1788;

    t53 = (x213!=(x214^(x215!=x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x217 = UINT16_MAX;
	int64_t x218 = INT64_MIN;
	static int16_t x219 = 976;
	static int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 364;

    t54 = (x217!=(x218^(x219!=x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MAX;
	int64_t x222 = -75581LL;
	uint8_t x223 = UINT8_MAX;
	int8_t x224 = -13;

    t55 = (x221!=(x222^(x223!=x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MIN;
	static int64_t x227 = INT64_MIN;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = 1;

    t56 = (x225!=(x226^(x227!=x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 20321846575LLU;
	volatile uint32_t x231 = UINT32_MAX;
	volatile int32_t x232 = INT32_MIN;
	int32_t t57 = 518019;

    t57 = (x229!=(x230^(x231!=x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	static uint8_t x234 = 10U;
	int8_t x236 = INT8_MIN;
	int32_t t58 = 1184;

    t58 = (x233!=(x234^(x235!=x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 215509672U;
	volatile int8_t x240 = INT8_MIN;
	volatile int32_t t59 = -335;

    t59 = (x237!=(x238^(x239!=x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 1U;
	static volatile int8_t x242 = INT8_MIN;
	volatile int64_t x243 = INT64_MIN;
	uint32_t x244 = 6298742U;

    t60 = (x241!=(x242^(x243!=x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x245 = -828054385219LL;
	int32_t x247 = -13916900;
	int32_t x248 = 11;
	volatile int32_t t61 = -1;

    t61 = (x245!=(x246^(x247!=x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x250 = 7U;
	volatile uint16_t x251 = UINT16_MAX;
	int32_t t62 = 1192;

    t62 = (x249!=(x250^(x251!=x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 20U;
	int64_t x254 = INT64_MIN;
	static uint32_t x255 = 7964U;
	int64_t x256 = INT64_MAX;
	int32_t t63 = 1353014;

    t63 = (x253!=(x254^(x255!=x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	uint8_t x260 = 0U;
	int32_t t64 = -1;

    t64 = (x257!=(x258^(x259!=x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = UINT32_MAX;
	volatile uint16_t x262 = 68U;
	static uint64_t x263 = 3LLU;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t65 = 1573993;

    t65 = (x261!=(x262^(x263!=x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x265 = 134203286025495LLU;
	static int8_t x266 = -1;
	uint32_t x267 = UINT32_MAX;
	uint64_t x268 = 12LLU;
	volatile int32_t t66 = -2375699;

    t66 = (x265!=(x266^(x267!=x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x270 = 5LLU;
	int32_t x271 = -706694058;
	static uint64_t x272 = UINT64_MAX;
	volatile int32_t t67 = -242114766;

    t67 = (x269!=(x270^(x271!=x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 206U;
	int16_t x274 = -1;
	int8_t x275 = 0;
	volatile int8_t x276 = INT8_MIN;
	static int32_t t68 = 315;

    t68 = (x273!=(x274^(x275!=x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x278 = UINT32_MAX;
	uint8_t x280 = UINT8_MAX;
	int32_t t69 = -1;

    t69 = (x277!=(x278^(x279!=x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x282 = -21;
	int8_t x283 = -1;
	int8_t x284 = -5;
	int32_t t70 = 28480;

    t70 = (x281!=(x282^(x283!=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x285 = 8237091LLU;
	static int16_t x287 = INT16_MIN;
	int8_t x288 = -5;

    t71 = (x285!=(x286^(x287!=x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = 902618331U;
	static uint32_t x290 = 36635011U;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MIN;
	int32_t t72 = 756201;

    t72 = (x289!=(x290^(x291!=x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = INT16_MIN;
	uint32_t x294 = 888U;
	uint64_t x295 = 17010772248LLU;
	uint64_t x296 = 17LLU;
	int32_t t73 = 369186396;

    t73 = (x293!=(x294^(x295!=x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = 1353137240882040768LL;
	uint32_t x298 = 3357651U;
	volatile int16_t x299 = 6689;
	int32_t x300 = -1;
	volatile int32_t t74 = 400434704;

    t74 = (x297!=(x298^(x299!=x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 314495LLU;
	uint32_t x302 = 1042116977U;
	int8_t x303 = 58;
	uint32_t x304 = 620012U;
	int32_t t75 = -149611849;

    t75 = (x301!=(x302^(x303!=x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 22245U;
	static uint16_t x306 = 181U;
	int32_t t76 = -22705;

    t76 = (x305!=(x306^(x307!=x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1;
	volatile int8_t x310 = INT8_MAX;
	int32_t x311 = INT32_MIN;
	int8_t x312 = 3;

    t77 = (x309!=(x310^(x311!=x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x314 = UINT32_MAX;
	uint64_t x315 = 3868844940LLU;
	uint64_t x316 = 109155398959797595LLU;

    t78 = (x313!=(x314^(x315!=x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x318 = -1;
	int32_t x319 = INT32_MIN;
	int64_t x320 = -15229380876LL;

    t79 = (x317!=(x318^(x319!=x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	static int32_t x322 = INT32_MIN;
	uint8_t x323 = 24U;
	int32_t x324 = INT32_MAX;

    t80 = (x321!=(x322^(x323!=x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x327 = INT32_MIN;
	volatile int32_t t81 = -320295;

    t81 = (x325!=(x326^(x327!=x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	uint8_t x331 = 30U;
	int64_t x332 = -257757362649998LL;
	volatile int32_t t82 = 176232;

    t82 = (x329!=(x330^(x331!=x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x334 = INT8_MAX;
	int16_t x335 = -5;
	volatile int32_t t83 = 9167034;

    t83 = (x333!=(x334^(x335!=x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 0U;
	uint32_t x338 = UINT32_MAX;
	static int64_t x339 = -1LL;
	volatile int8_t x340 = 1;
	volatile int32_t t84 = -27434;

    t84 = (x337!=(x338^(x339!=x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x342 = 644LLU;
	volatile int32_t x343 = -1;

    t85 = (x341!=(x342^(x343!=x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -3661;
	static int32_t x347 = 4;
	static int64_t x348 = -226139LL;
	static volatile int32_t t86 = 1004577;

    t86 = (x345!=(x346^(x347!=x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x349 = 41;
	int8_t x350 = -1;
	static int64_t x352 = 2444588821984434257LL;

    t87 = (x349!=(x350^(x351!=x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	uint64_t x354 = 3354743806188205LLU;
	int8_t x356 = INT8_MAX;
	int32_t t88 = 53;

    t88 = (x353!=(x354^(x355!=x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -1LL;
	int64_t x358 = 11532LL;
	int32_t x359 = INT32_MAX;
	int8_t x360 = INT8_MAX;
	static int32_t t89 = -30182742;

    t89 = (x357!=(x358^(x359!=x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MAX;
	static int32_t x362 = 8914;
	volatile int64_t x364 = -7396414LL;
	int32_t t90 = 995354152;

    t90 = (x361!=(x362^(x363!=x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = 38;

    t91 = (x365!=(x366^(x367!=x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MAX;
	uint32_t x370 = 6580U;
	int8_t x372 = INT8_MAX;
	volatile int32_t t92 = 60;

    t92 = (x369!=(x370^(x371!=x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 579867677U;
	uint8_t x374 = 0U;
	int8_t x375 = INT8_MIN;
	int64_t x376 = -1LL;
	int32_t t93 = -133678881;

    t93 = (x373!=(x374^(x375!=x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	int16_t x378 = 68;
	uint16_t x380 = UINT16_MAX;

    t94 = (x377!=(x378^(x379!=x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -1;
	static int16_t x382 = -1;
	uint8_t x383 = 52U;
	int32_t t95 = 1;

    t95 = (x381!=(x382^(x383!=x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = 1854;
	volatile int8_t x388 = -1;
	int32_t t96 = 89;

    t96 = (x385!=(x386^(x387!=x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	volatile int64_t x390 = INT64_MAX;
	static int8_t x391 = INT8_MAX;
	static int16_t x392 = INT16_MIN;
	int32_t t97 = -734;

    t97 = (x389!=(x390^(x391!=x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	int8_t x394 = INT8_MAX;
	static int8_t x395 = INT8_MIN;
	int32_t x396 = INT32_MAX;
	volatile int32_t t98 = 21;

    t98 = (x393!=(x394^(x395!=x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x398 = -1;
	int8_t x399 = INT8_MAX;
	static int32_t x400 = -1;

    t99 = (x397!=(x398^(x399!=x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x401 = 49U;
	static int16_t x402 = INT16_MAX;
	int32_t t100 = 65138373;

    t100 = (x401!=(x402^(x403!=x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 705U;
	volatile int16_t x406 = INT16_MIN;
	volatile uint16_t x407 = UINT16_MAX;
	static int64_t x408 = 71458735409842LL;
	int32_t t101 = -7;

    t101 = (x405!=(x406^(x407!=x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x409 = INT8_MIN;
	static volatile uint16_t x410 = 5U;
	uint8_t x411 = 0U;
	uint16_t x412 = 1U;
	int32_t t102 = -156;

    t102 = (x409!=(x410^(x411!=x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 25544146U;
	int32_t x414 = 50336;
	int16_t x415 = INT16_MIN;
	int64_t x416 = INT64_MIN;

    t103 = (x413!=(x414^(x415!=x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = UINT64_MAX;
	int64_t x418 = 51114LL;
	static volatile int16_t x419 = INT16_MIN;
	uint8_t x420 = UINT8_MAX;

    t104 = (x417!=(x418^(x419!=x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 19091435U;
	int64_t x422 = 9210546LL;
	int8_t x423 = -27;
	int32_t x424 = -11;
	static int32_t t105 = 9;

    t105 = (x421!=(x422^(x423!=x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	int8_t x426 = INT8_MIN;
	static int64_t x427 = -153LL;
	int16_t x428 = INT16_MIN;
	int32_t t106 = -100;

    t106 = (x425!=(x426^(x427!=x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = 1;
	uint32_t x431 = 341U;
	uint32_t x432 = 218093175U;
	volatile int32_t t107 = 2;

    t107 = (x429!=(x430^(x431!=x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -10786;
	int8_t x434 = INT8_MIN;
	uint64_t x435 = UINT64_MAX;
	int32_t t108 = 460;

    t108 = (x433!=(x434^(x435!=x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -735778928;
	int64_t x438 = INT64_MIN;
	volatile int64_t x440 = INT64_MAX;
	volatile int32_t t109 = 23787513;

    t109 = (x437!=(x438^(x439!=x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	int32_t x442 = INT32_MIN;
	int16_t x443 = 322;
	uint16_t x444 = UINT16_MAX;

    t110 = (x441!=(x442^(x443!=x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = 2973804;
	static volatile uint64_t x446 = UINT64_MAX;
	uint32_t x447 = 45U;
	volatile int32_t t111 = -204;

    t111 = (x445!=(x446^(x447!=x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x450 = INT8_MIN;
	uint8_t x452 = UINT8_MAX;

    t112 = (x449!=(x450^(x451!=x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1LL;
	int64_t x454 = -7LL;
	uint64_t x455 = UINT64_MAX;
	int64_t x456 = INT64_MAX;
	static int32_t t113 = -25;

    t113 = (x453!=(x454^(x455!=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x458 = -4;
	int16_t x460 = INT16_MIN;
	volatile int32_t t114 = -192256555;

    t114 = (x457!=(x458^(x459!=x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x461 = UINT8_MAX;
	volatile int16_t x462 = -5374;
	uint16_t x464 = 3696U;
	volatile int32_t t115 = 208522;

    t115 = (x461!=(x462^(x463!=x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = -2272;
	int32_t x466 = INT32_MAX;
	int64_t x467 = INT64_MIN;
	int8_t x468 = -9;
	volatile int32_t t116 = -110;

    t116 = (x465!=(x466^(x467!=x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	uint64_t x470 = UINT64_MAX;
	static int32_t x471 = -4673;
	static uint8_t x472 = UINT8_MAX;

    t117 = (x469!=(x470^(x471!=x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	volatile int16_t x475 = INT16_MIN;
	volatile uint16_t x476 = UINT16_MAX;
	int32_t t118 = 613084882;

    t118 = (x473!=(x474^(x475!=x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 238LLU;
	int32_t x480 = INT32_MIN;
	volatile int32_t t119 = -85;

    t119 = (x477!=(x478^(x479!=x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x481 = INT8_MIN;
	uint16_t x482 = 31930U;
	int8_t x483 = -10;

    t120 = (x481!=(x482^(x483!=x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x485 = -1;
	int32_t x486 = 2532;
	int8_t x487 = INT8_MIN;
	volatile uint32_t x488 = UINT32_MAX;

    t121 = (x485!=(x486^(x487!=x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	uint8_t x490 = UINT8_MAX;
	int64_t x492 = INT64_MAX;
	int32_t t122 = 248;

    t122 = (x489!=(x490^(x491!=x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = INT16_MAX;
	int8_t x495 = INT8_MIN;
	int32_t t123 = -1702312;

    t123 = (x493!=(x494^(x495!=x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	uint8_t x498 = UINT8_MAX;
	static uint16_t x499 = UINT16_MAX;
	int32_t t124 = 0;

    t124 = (x497!=(x498^(x499!=x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	int32_t x503 = -1;
	static volatile int32_t t125 = -2;

    t125 = (x501!=(x502^(x503!=x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x505 = INT8_MIN;
	uint64_t x506 = 27122LLU;
	int64_t x507 = INT64_MIN;
	uint16_t x508 = 505U;
	volatile int32_t t126 = -1;

    t126 = (x505!=(x506^(x507!=x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -1;
	static int32_t x510 = -1;
	uint16_t x511 = 0U;
	uint16_t x512 = 6626U;
	volatile int32_t t127 = 1;

    t127 = (x509!=(x510^(x511!=x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x513 = INT16_MAX;
	static uint16_t x514 = 0U;
	static uint16_t x516 = 7U;
	int32_t t128 = 25549;

    t128 = (x513!=(x514^(x515!=x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	volatile int16_t x518 = -224;
	int16_t x519 = INT16_MAX;

    t129 = (x517!=(x518^(x519!=x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -3;
	int32_t x522 = -1;
	int32_t x524 = INT32_MIN;

    t130 = (x521!=(x522^(x523!=x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MIN;
	int8_t x528 = 13;
	int32_t t131 = 32610;

    t131 = (x525!=(x526^(x527!=x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint8_t x529 = 1U;
	int64_t x530 = -30LL;
	volatile uint64_t x532 = 31LLU;

    t132 = (x529!=(x530^(x531!=x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -1;
	uint16_t x534 = 17853U;
	int16_t x535 = INT16_MIN;
	int64_t x536 = -4143LL;
	static int32_t t133 = 1;

    t133 = (x533!=(x534^(x535!=x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x538 = INT8_MIN;
	volatile int32_t x539 = INT32_MIN;
	int32_t x540 = INT32_MIN;
	int32_t t134 = 31673685;

    t134 = (x537!=(x538^(x539!=x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = UINT64_MAX;
	static int64_t x543 = 1686055306LL;
	volatile int32_t t135 = -4946428;

    t135 = (x541!=(x542^(x543!=x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -286;
	int64_t x546 = -297771LL;
	uint32_t x547 = 34U;
	static uint8_t x548 = 15U;

    t136 = (x545!=(x546^(x547!=x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = 936LL;
	uint16_t x550 = 758U;
	uint16_t x551 = UINT16_MAX;
	int32_t t137 = -144250;

    t137 = (x549!=(x550^(x551!=x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = -1;
	volatile uint64_t x555 = 967844547209670LLU;
	volatile int16_t x556 = INT16_MAX;
	volatile int32_t t138 = 3;

    t138 = (x553!=(x554^(x555!=x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 154733494U;
	uint8_t x558 = 88U;
	static int16_t x559 = INT16_MIN;
	uint16_t x560 = 1U;
	volatile int32_t t139 = -79635111;

    t139 = (x557!=(x558^(x559!=x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x562 = 2480U;
	int64_t x564 = -1LL;
	volatile int32_t t140 = -212913567;

    t140 = (x561!=(x562^(x563!=x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x567 = -28913980696862281LL;
	static int8_t x568 = 24;
	int32_t t141 = 975;

    t141 = (x565!=(x566^(x567!=x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = INT16_MAX;
	int32_t x570 = INT32_MIN;
	volatile int32_t x572 = INT32_MIN;
	static volatile int32_t t142 = -3939;

    t142 = (x569!=(x570^(x571!=x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	int64_t x574 = INT64_MAX;
	int64_t x575 = INT64_MAX;
	static int8_t x576 = -5;
	static volatile int32_t t143 = 42;

    t143 = (x573!=(x574^(x575!=x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x578 = UINT64_MAX;
	static volatile uint64_t x579 = UINT64_MAX;
	static int32_t t144 = -192;

    t144 = (x577!=(x578^(x579!=x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	uint8_t x582 = 5U;
	int32_t x583 = INT32_MIN;
	uint64_t x584 = 737871873387746LLU;
	int32_t t145 = -2405;

    t145 = (x581!=(x582^(x583!=x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = 1;
	static uint8_t x586 = 23U;
	volatile int32_t x587 = -1020331;
	int8_t x588 = INT8_MIN;
	int32_t t146 = -821;

    t146 = (x585!=(x586^(x587!=x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -9;
	static uint64_t x590 = 4977LLU;
	uint64_t x591 = 4991341976516259LLU;
	int32_t x592 = INT32_MIN;
	volatile int32_t t147 = -60849;

    t147 = (x589!=(x590^(x591!=x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint32_t x593 = 4U;
	static int32_t x594 = INT32_MAX;
	int8_t x595 = 1;
	int64_t x596 = -203092LL;
	volatile int32_t t148 = 640;

    t148 = (x593!=(x594^(x595!=x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x598 = INT32_MAX;
	static uint64_t x599 = 60LLU;
	int32_t t149 = -5;

    t149 = (x597!=(x598^(x599!=x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x601 = INT8_MIN;
	int64_t x602 = -21989LL;
	static int16_t x604 = INT16_MIN;

    t150 = (x601!=(x602^(x603!=x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	int8_t x606 = INT8_MIN;
	int32_t x608 = INT32_MIN;

    t151 = (x605!=(x606^(x607!=x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = -1;
	int16_t x610 = -1;
	uint64_t x611 = UINT64_MAX;
	uint8_t x612 = UINT8_MAX;
	int32_t t152 = -29143963;

    t152 = (x609!=(x610^(x611!=x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 18621LLU;
	int16_t x614 = INT16_MAX;
	int16_t x615 = -908;
	volatile uint16_t x616 = UINT16_MAX;
	volatile int32_t t153 = -161970637;

    t153 = (x613!=(x614^(x615!=x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x618 = -1;
	int8_t x619 = INT8_MIN;
	volatile uint64_t x620 = 78865508LLU;
	volatile int32_t t154 = -426312;

    t154 = (x617!=(x618^(x619!=x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -20;
	volatile int16_t x622 = INT16_MIN;
	int32_t x623 = 27;
	uint64_t x624 = 5064243893325LLU;

    t155 = (x621!=(x622^(x623!=x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x627 = -12867;
	volatile int32_t t156 = -734808;

    t156 = (x625!=(x626^(x627!=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x629 = INT8_MIN;
	uint16_t x630 = UINT16_MAX;
	static volatile uint16_t x631 = UINT16_MAX;
	int32_t t157 = 4;

    t157 = (x629!=(x630^(x631!=x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x634 = -13;
	uint32_t x635 = UINT32_MAX;
	static int8_t x636 = INT8_MIN;
	volatile int32_t t158 = 2;

    t158 = (x633!=(x634^(x635!=x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = UINT64_MAX;
	volatile int16_t x638 = -6659;
	int32_t x639 = 40;
	static int32_t x640 = INT32_MAX;
	volatile int32_t t159 = 257069;

    t159 = (x637!=(x638^(x639!=x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MAX;
	int16_t x642 = INT16_MIN;
	int8_t x643 = 11;
	static int8_t x644 = INT8_MAX;
	volatile int32_t t160 = 147866222;

    t160 = (x641!=(x642^(x643!=x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 0U;
	uint16_t x646 = 5U;
	int16_t x648 = INT16_MAX;
	volatile int32_t t161 = 1935566;

    t161 = (x645!=(x646^(x647!=x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x649 = 2U;
	int8_t x650 = -1;
	int8_t x652 = -30;
	int32_t t162 = 9005216;

    t162 = (x649!=(x650^(x651!=x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = INT16_MIN;
	int16_t x655 = INT16_MIN;
	int64_t x656 = INT64_MIN;
	volatile int32_t t163 = 0;

    t163 = (x653!=(x654^(x655!=x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	int32_t x658 = 189470;
	int32_t x660 = INT32_MIN;
	int32_t t164 = 2965963;

    t164 = (x657!=(x658^(x659!=x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x661 = 3573149006LLU;
	static volatile int64_t x662 = -1LL;
	uint8_t x663 = UINT8_MAX;
	int32_t x664 = INT32_MAX;
	static volatile int32_t t165 = -22094;

    t165 = (x661!=(x662^(x663!=x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = UINT32_MAX;
	int8_t x666 = INT8_MAX;
	uint64_t x668 = 119220775989519438LLU;
	volatile int32_t t166 = 26535970;

    t166 = (x665!=(x666^(x667!=x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = INT8_MIN;
	uint8_t x670 = 22U;
	int8_t x671 = INT8_MIN;
	int32_t x672 = INT32_MIN;
	volatile int32_t t167 = -9861;

    t167 = (x669!=(x670^(x671!=x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 32U;
	int16_t x674 = INT16_MAX;
	volatile uint64_t x675 = UINT64_MAX;
	int64_t x676 = 137418812747509LL;
	int32_t t168 = -628943600;

    t168 = (x673!=(x674^(x675!=x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = UINT16_MAX;
	uint32_t x678 = 211250324U;
	volatile int32_t x679 = 143529352;
	int32_t t169 = 1876;

    t169 = (x677!=(x678^(x679!=x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = INT32_MIN;
	int64_t x682 = INT64_MIN;
	uint16_t x683 = 3980U;
	int64_t x684 = INT64_MAX;
	int32_t t170 = -39700706;

    t170 = (x681!=(x682^(x683!=x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x685 = 0U;
	int8_t x686 = 12;
	int16_t x688 = INT16_MIN;
	static int32_t t171 = -913;

    t171 = (x685!=(x686^(x687!=x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = -25;
	int32_t x691 = INT32_MAX;
	volatile int8_t x692 = -1;
	int32_t t172 = -5;

    t172 = (x689!=(x690^(x691!=x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	volatile uint16_t x694 = 21070U;
	uint16_t x695 = UINT16_MAX;
	volatile uint16_t x696 = 296U;
	static int32_t t173 = -263317065;

    t173 = (x693!=(x694^(x695!=x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -3379;
	static uint16_t x699 = 96U;
	uint16_t x700 = 12349U;
	static int32_t t174 = -1812;

    t174 = (x697!=(x698^(x699!=x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 130U;
	volatile int32_t x702 = -12155;
	volatile int16_t x703 = INT16_MIN;
	int64_t x704 = -2LL;

    t175 = (x701!=(x702^(x703!=x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = INT16_MIN;
	int16_t x707 = INT16_MAX;
	static int16_t x708 = INT16_MAX;
	int32_t t176 = 603;

    t176 = (x705!=(x706^(x707!=x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x710 = INT64_MAX;
	int64_t x712 = -1LL;
	volatile int32_t t177 = -41043520;

    t177 = (x709!=(x710^(x711!=x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 151257LLU;
	uint8_t x714 = 3U;
	int8_t x715 = INT8_MIN;
	static int8_t x716 = 1;
	volatile int32_t t178 = 5;

    t178 = (x713!=(x714^(x715!=x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x718 = -1LL;
	volatile uint32_t x719 = 280601U;
	volatile int16_t x720 = INT16_MIN;
	static volatile int32_t t179 = -59955;

    t179 = (x717!=(x718^(x719!=x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 22361U;
	int64_t x722 = 546478350045LL;
	int32_t x724 = INT32_MIN;

    t180 = (x721!=(x722^(x723!=x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	int8_t x726 = INT8_MIN;
	int32_t x727 = -1;
	int32_t x728 = INT32_MAX;
	static int32_t t181 = -2366;

    t181 = (x725!=(x726^(x727!=x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -1LL;
	static int64_t x730 = -1LL;
	static uint16_t x731 = UINT16_MAX;
	int16_t x732 = -1;
	static volatile int32_t t182 = 1;

    t182 = (x729!=(x730^(x731!=x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x733 = INT32_MAX;
	int16_t x734 = -1;
	uint32_t x735 = 2U;
	volatile int32_t t183 = -105144;

    t183 = (x733!=(x734^(x735!=x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 910U;
	static uint16_t x738 = 58U;
	static uint64_t x739 = 105290316LLU;
	uint64_t x740 = 22101285LLU;
	volatile int32_t t184 = -1462087;

    t184 = (x737!=(x738^(x739!=x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = UINT8_MAX;
	uint8_t x743 = UINT8_MAX;
	static int32_t t185 = 376;

    t185 = (x741!=(x742^(x743!=x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = INT32_MIN;
	static uint16_t x746 = 124U;
	static int32_t x747 = -1;
	volatile int8_t x748 = 1;
	int32_t t186 = 85916;

    t186 = (x745!=(x746^(x747!=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MAX;
	int16_t x750 = INT16_MAX;
	int32_t x751 = INT32_MAX;
	static int32_t t187 = 364765;

    t187 = (x749!=(x750^(x751!=x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x753 = UINT64_MAX;
	uint16_t x754 = 117U;
	static int16_t x756 = INT16_MAX;
	volatile int32_t t188 = 133225;

    t188 = (x753!=(x754^(x755!=x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = INT8_MIN;
	int64_t x758 = 0LL;
	int16_t x759 = -1;
	static uint16_t x760 = UINT16_MAX;
	static int32_t t189 = -883;

    t189 = (x757!=(x758^(x759!=x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = -3079859;
	static volatile int64_t x762 = INT64_MIN;
	uint32_t x764 = UINT32_MAX;
	static int32_t t190 = 210167;

    t190 = (x761!=(x762^(x763!=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = UINT16_MAX;
	int64_t x766 = -50352667LL;
	static uint32_t x767 = UINT32_MAX;
	uint64_t x768 = 349735862475401LLU;
	volatile int32_t t191 = 799144;

    t191 = (x765!=(x766^(x767!=x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	int64_t x770 = 22660LL;
	volatile int16_t x772 = -4;
	int32_t t192 = 74236565;

    t192 = (x769!=(x770^(x771!=x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	volatile int8_t x774 = -1;
	volatile int32_t x775 = INT32_MIN;
	int64_t x776 = -1LL;
	volatile int32_t t193 = -3;

    t193 = (x773!=(x774^(x775!=x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x777 = 62368921957900LLU;
	int16_t x779 = -1768;
	int64_t x780 = INT64_MIN;
	static volatile int32_t t194 = 354;

    t194 = (x777!=(x778^(x779!=x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x782 = -1LL;
	volatile int16_t x783 = INT16_MAX;
	int8_t x784 = -3;
	volatile int32_t t195 = 182920;

    t195 = (x781!=(x782^(x783!=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = 195007959LL;
	static uint64_t x786 = 129354331379585256LLU;
	uint32_t x787 = UINT32_MAX;
	volatile int8_t x788 = 0;
	volatile int32_t t196 = -2;

    t196 = (x785!=(x786^(x787!=x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -8;
	volatile int16_t x790 = INT16_MAX;
	uint64_t x791 = 485437LLU;
	uint8_t x792 = 53U;
	volatile int32_t t197 = 156155416;

    t197 = (x789!=(x790^(x791!=x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = -1;
	int16_t x795 = INT16_MIN;
	int8_t x796 = -1;

    t198 = (x793!=(x794^(x795!=x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = 26;
	int16_t x798 = INT16_MIN;
	static uint64_t x800 = 226995LLU;
	int32_t t199 = -263615554;

    t199 = (x797!=(x798^(x799!=x800)));

    if (t199 != 1) { NG(); } else { ; }
	
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

