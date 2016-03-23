
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

volatile int16_t x2 = 5;
int64_t x3 = INT64_MIN;
int16_t x5 = INT16_MAX;
volatile int16_t x11 = INT16_MAX;
uint32_t x14 = UINT32_MAX;
static uint64_t x16 = 1974733378LLU;
uint16_t x23 = 76U;
int8_t x24 = -14;
static volatile uint16_t x27 = 15221U;
static int64_t x32 = INT64_MAX;
int16_t x33 = 3;
uint32_t x36 = 29062573U;
static volatile int32_t t8 = 250;
uint8_t x39 = UINT8_MAX;
int16_t x48 = INT16_MIN;
uint64_t x49 = UINT64_MAX;
uint64_t x52 = 17546LLU;
uint16_t x53 = 635U;
int16_t x62 = -118;
int8_t x63 = INT8_MIN;
int8_t x69 = INT8_MAX;
int8_t x70 = -42;
uint8_t x73 = 16U;
uint8_t x76 = 25U;
uint64_t x79 = UINT64_MAX;
uint8_t x95 = UINT8_MAX;
int32_t t23 = 18;
int32_t x99 = INT32_MIN;
int16_t x100 = INT16_MIN;
uint64_t x121 = 442029435166LLU;
static int16_t x123 = -1;
int8_t x126 = INT8_MIN;
static volatile int32_t t31 = -27805693;
int32_t x131 = INT32_MAX;
int8_t x134 = INT8_MAX;
int8_t x135 = INT8_MAX;
int64_t x138 = 0LL;
static int8_t x141 = INT8_MIN;
static uint16_t x149 = UINT16_MAX;
int16_t x152 = 3501;
int32_t t37 = -88755;
static int16_t x153 = -1;
int64_t x164 = INT64_MIN;
int32_t t40 = -108123097;
static int16_t x167 = INT16_MIN;
static volatile int32_t t41 = 14079462;
int32_t x172 = -1;
int32_t x176 = -4227;
static int16_t x179 = -314;
static volatile uint32_t x182 = 0U;
int8_t x183 = INT8_MAX;
int16_t x185 = 454;
int64_t x190 = -1LL;
static volatile int32_t t47 = -917766645;
static volatile uint8_t x194 = 86U;
uint16_t x198 = UINT16_MAX;
uint64_t x199 = 9826271303054LLU;
int16_t x205 = -35;
volatile uint64_t x217 = 26622884478158LLU;
int64_t x220 = INT64_MIN;
volatile int32_t x225 = 40;
int8_t x226 = 1;
volatile int32_t t56 = -390788;
int32_t t57 = 18;
uint32_t x241 = 29292U;
int32_t t60 = 1031719;
int32_t t62 = -5332611;
uint32_t x253 = 1307810U;
int32_t t63 = 699493361;
static int16_t x260 = INT16_MIN;
uint64_t x264 = 7LLU;
int8_t x269 = INT8_MIN;
int32_t x275 = INT32_MIN;
uint32_t x278 = 506U;
static int32_t x287 = INT32_MIN;
uint16_t x290 = 22U;
uint32_t x297 = UINT32_MAX;
int8_t x298 = INT8_MAX;
uint32_t x301 = UINT32_MAX;
int8_t x304 = 58;
uint16_t x306 = 74U;
uint64_t x307 = 16912901612564270LLU;
volatile int32_t t80 = -5887;
volatile int32_t t81 = -166;
static int64_t x333 = INT64_MIN;
static int64_t x349 = INT64_MIN;
uint64_t x351 = UINT64_MAX;
static int8_t x355 = -1;
int32_t t91 = -462;
int64_t x371 = INT64_MIN;
int8_t x376 = INT8_MIN;
uint64_t x379 = UINT64_MAX;
int64_t x381 = 475LL;
volatile int32_t x383 = -362469;
uint32_t x385 = 68996U;
static int8_t x387 = -2;
volatile int64_t x391 = 1080582822137LL;
int16_t x400 = INT16_MIN;
int16_t x406 = INT16_MIN;
int32_t t104 = 285598;
volatile uint8_t x421 = 1U;
static uint16_t x424 = UINT16_MAX;
int16_t x425 = INT16_MAX;
int32_t x431 = -175;
int32_t x432 = 42;
volatile int32_t t107 = 124862159;
volatile int16_t x433 = -11;
int64_t x438 = -1LL;
volatile int32_t x440 = -1;
volatile int8_t x441 = 3;
uint32_t x443 = 0U;
int64_t x450 = -1LL;
volatile int16_t x452 = -1;
volatile int32_t t112 = -9104789;
volatile uint8_t x453 = 0U;
static int16_t x457 = -32;
static volatile uint8_t x458 = UINT8_MAX;
static uint16_t x461 = 28293U;
volatile uint32_t x469 = UINT32_MAX;
static uint8_t x470 = 1U;
int32_t t117 = 1;
int64_t x475 = 395307242734774654LL;
int64_t x489 = 952307LL;
static int64_t x492 = INT64_MIN;
int8_t x497 = 1;
int8_t x503 = 12;
static volatile uint64_t x508 = 5736553850320LLU;
static int32_t t126 = -529048;
int8_t x511 = INT8_MIN;
static uint8_t x518 = 28U;
int32_t x522 = 14;
int8_t x537 = -2;
int16_t x544 = 1;
uint64_t x545 = 12916144LLU;
static int8_t x546 = INT8_MIN;
static int64_t x547 = -1LL;
uint32_t x551 = UINT32_MAX;
static int64_t x553 = -29403LL;
int8_t x557 = INT8_MAX;
static int8_t x559 = 5;
volatile uint16_t x561 = UINT16_MAX;
int8_t x564 = 44;
volatile int8_t x565 = 28;
uint32_t x568 = 266U;
int8_t x579 = -1;
volatile int8_t x580 = INT8_MAX;
volatile int64_t x583 = INT64_MAX;
int32_t x584 = INT32_MAX;
int32_t t145 = -150739;
int16_t x586 = INT16_MIN;
static int64_t x593 = INT64_MIN;
int32_t x594 = INT32_MIN;
int16_t x596 = INT16_MAX;
uint32_t x597 = 77U;
int8_t x598 = -1;
int64_t x602 = INT64_MIN;
int8_t x604 = -1;
static int32_t t150 = 15;
int8_t x607 = 1;
volatile int32_t t151 = 22;
volatile int8_t x614 = INT8_MIN;
int32_t x622 = -3628479;
int32_t x636 = INT32_MAX;
static int64_t x638 = -954492LL;
volatile int32_t x646 = INT32_MAX;
int8_t x648 = 2;
static volatile int32_t t161 = -1615375;
uint32_t x651 = 24988631U;
volatile uint64_t x655 = 19744739LLU;
static int16_t x661 = INT16_MAX;
static int64_t x669 = INT64_MIN;
int8_t x671 = -1;
volatile uint64_t x673 = UINT64_MAX;
volatile int16_t x685 = INT16_MIN;
static int16_t x691 = 35;
uint8_t x693 = 117U;
uint8_t x696 = 0U;
int64_t x700 = INT64_MIN;
static uint16_t x703 = 20U;
volatile int64_t x705 = INT64_MIN;
uint8_t x706 = UINT8_MAX;
int16_t x710 = INT16_MAX;
volatile int32_t t178 = -3938;
int64_t x720 = -11819616LL;
int8_t x724 = -1;
static uint16_t x727 = UINT16_MAX;
static volatile int32_t t181 = 22632;
volatile uint16_t x730 = 1U;
uint8_t x735 = 10U;
volatile int64_t x742 = INT64_MIN;
static int32_t x744 = INT32_MIN;
static int32_t t185 = -2776651;
int64_t x745 = INT64_MIN;
int64_t x749 = -1LL;
int32_t t187 = -2875780;
uint8_t x760 = UINT8_MAX;
volatile int32_t t189 = 11824181;
static int16_t x769 = INT16_MIN;
uint64_t x780 = 19948515LLU;
int32_t x788 = -1;
int32_t x789 = -241;
int64_t x792 = -175154982LL;
volatile int32_t x798 = -1;


void f0(void) {
    	uint32_t x1 = 1U;
	int64_t x4 = INT64_MAX;
	int32_t t0 = 351;

    t0 = (x1<=(x2^(x3==x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 269U;
	int64_t x7 = -447505565661901531LL;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = 26499718;

    t1 = (x5<=(x6^(x7==x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	static uint16_t x10 = UINT16_MAX;
	uint8_t x12 = 5U;
	static int32_t t2 = 336023;

    t2 = (x9<=(x10^(x11==x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 3840LLU;
	volatile int8_t x15 = INT8_MAX;
	int32_t t3 = 0;

    t3 = (x13<=(x14^(x15==x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	int16_t x18 = 337;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = 6253;

    t4 = (x17<=(x18^(x19==x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -38;
	volatile uint16_t x22 = 12U;
	volatile int32_t t5 = -117675;

    t5 = (x21<=(x22^(x23==x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 162U;
	uint64_t x26 = UINT64_MAX;
	int64_t x28 = INT64_MIN;
	int32_t t6 = 989376;

    t6 = (x25<=(x26^(x27==x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	volatile int32_t x30 = INT32_MIN;
	static volatile int8_t x31 = 39;
	static volatile int32_t t7 = -601;

    t7 = (x29<=(x30^(x31==x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x34 = 1999704;
	static int16_t x35 = -1;

    t8 = (x33<=(x34^(x35==x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	int16_t x40 = 4643;
	int32_t t9 = -15570;

    t9 = (x37<=(x38^(x39==x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MAX;
	uint64_t x43 = UINT64_MAX;
	static int8_t x44 = -1;
	static int32_t t10 = -541;

    t10 = (x41<=(x42^(x43==x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MAX;
	static int64_t x47 = 2178993955915429602LL;
	int32_t t11 = -230;

    t11 = (x45<=(x46^(x47==x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = -1;
	int64_t x51 = INT64_MAX;
	volatile int32_t t12 = 79233857;

    t12 = (x49<=(x50^(x51==x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MAX;
	static volatile int32_t x55 = 0;
	static uint64_t x56 = 13654613756270390LLU;
	static int32_t t13 = 32236023;

    t13 = (x53<=(x54^(x55==x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int8_t x58 = INT8_MAX;
	int32_t x59 = INT32_MIN;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -1;

    t14 = (x57<=(x58^(x59==x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	uint32_t x64 = 0U;
	static volatile int32_t t15 = 56003;

    t15 = (x61<=(x62^(x63==x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	volatile uint8_t x66 = 4U;
	volatile uint16_t x67 = 36U;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = 1005025;

    t16 = (x65<=(x66^(x67==x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x71 = -1;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = -4;

    t17 = (x69<=(x70^(x71==x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x74 = 25U;
	volatile int64_t x75 = INT64_MIN;
	volatile int32_t t18 = 3116418;

    t18 = (x73<=(x74^(x75==x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 0U;
	int32_t x78 = INT32_MIN;
	volatile uint64_t x80 = 511736LLU;
	volatile int32_t t19 = -432232742;

    t19 = (x77<=(x78^(x79==x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	static volatile int32_t x82 = -1;
	volatile uint16_t x83 = UINT16_MAX;
	uint16_t x84 = 85U;
	int32_t t20 = -3;

    t20 = (x81<=(x82^(x83==x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x85 = 1133322U;
	int16_t x86 = -1;
	static uint32_t x87 = UINT32_MAX;
	static uint8_t x88 = 45U;
	static int32_t t21 = -548405429;

    t21 = (x85<=(x86^(x87==x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = 110546U;
	static volatile uint32_t x90 = 24866583U;
	int8_t x91 = -1;
	uint32_t x92 = 345963U;
	int32_t t22 = -2333857;

    t22 = (x89<=(x90^(x91==x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	volatile uint64_t x94 = 728763LLU;
	int16_t x96 = INT16_MIN;

    t23 = (x93<=(x94^(x95==x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x97 = 127U;
	int64_t x98 = INT64_MIN;
	int32_t t24 = -737887594;

    t24 = (x97<=(x98^(x99==x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	int64_t x102 = INT64_MIN;
	uint8_t x103 = UINT8_MAX;
	int32_t x104 = 1249;
	volatile int32_t t25 = -123385;

    t25 = (x101<=(x102^(x103==x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	int64_t x106 = -1LL;
	uint32_t x107 = 14914U;
	int8_t x108 = -1;
	static int32_t t26 = -1;

    t26 = (x105<=(x106^(x107==x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1;
	volatile int16_t x110 = -1;
	volatile uint32_t x111 = 788725143U;
	static uint8_t x112 = 3U;
	volatile int32_t t27 = -2;

    t27 = (x109<=(x110^(x111==x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	uint8_t x114 = UINT8_MAX;
	int16_t x115 = INT16_MIN;
	static int16_t x116 = INT16_MIN;
	int32_t t28 = -598;

    t28 = (x113<=(x114^(x115==x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = UINT16_MAX;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = -1;
	uint8_t x120 = 0U;
	int32_t t29 = -6859;

    t29 = (x117<=(x118^(x119==x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = -1;
	static volatile int16_t x124 = 1;
	int32_t t30 = 219484322;

    t30 = (x121<=(x122^(x123==x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	uint32_t x127 = 432326582U;
	int8_t x128 = 10;

    t31 = (x125<=(x126^(x127==x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 98U;
	int16_t x130 = 1448;
	static volatile uint8_t x132 = UINT8_MAX;
	int32_t t32 = -123887552;

    t32 = (x129<=(x130^(x131==x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = 210;
	int64_t x136 = 8343677785LL;
	volatile int32_t t33 = 192;

    t33 = (x133<=(x134^(x135==x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1945;
	static uint16_t x139 = UINT16_MAX;
	static int16_t x140 = -2336;
	int32_t t34 = 14124;

    t34 = (x137<=(x138^(x139==x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = -27;
	static volatile int32_t x143 = 3;
	uint8_t x144 = 3U;
	static volatile int32_t t35 = -914344449;

    t35 = (x141<=(x142^(x143==x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 17543402656318LL;
	uint32_t x146 = 1376769U;
	volatile int8_t x147 = -1;
	uint64_t x148 = 0LLU;
	volatile int32_t t36 = -3;

    t36 = (x145<=(x146^(x147==x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = 258913789LL;
	int32_t x151 = INT32_MIN;

    t37 = (x149<=(x150^(x151==x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = UINT64_MAX;
	int64_t x155 = -1LL;
	int16_t x156 = INT16_MIN;
	int32_t t38 = 51918;

    t38 = (x153<=(x154^(x155==x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 13368U;
	static uint64_t x158 = UINT64_MAX;
	int32_t x159 = -1;
	int32_t x160 = INT32_MIN;
	static int32_t t39 = -867860;

    t39 = (x157<=(x158^(x159==x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -1;
	volatile int64_t x162 = -293890218158022LL;
	int8_t x163 = -33;

    t40 = (x161<=(x162^(x163==x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = -2823;
	int8_t x166 = -1;
	int16_t x168 = -321;

    t41 = (x165<=(x166^(x167==x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 606U;
	volatile uint32_t x170 = 137U;
	int64_t x171 = -468LL;
	int32_t t42 = 0;

    t42 = (x169<=(x170^(x171==x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x173 = 29407U;
	volatile uint16_t x174 = 0U;
	static volatile int16_t x175 = -1;
	static volatile int32_t t43 = 146937;

    t43 = (x173<=(x174^(x175==x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = 1;
	int8_t x178 = 42;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = -814400;

    t44 = (x177<=(x178^(x179==x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1119155190246194672LL;
	uint8_t x184 = 23U;
	volatile int32_t t45 = -1253312;

    t45 = (x181<=(x182^(x183==x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x186 = 3046U;
	uint64_t x187 = 24821LLU;
	int16_t x188 = INT16_MIN;
	int32_t t46 = 832;

    t46 = (x185<=(x186^(x187==x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	uint8_t x192 = 31U;

    t47 = (x189<=(x190^(x191==x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x193 = INT64_MAX;
	int64_t x195 = -1LL;
	uint8_t x196 = 97U;
	volatile int32_t t48 = -1;

    t48 = (x193<=(x194^(x195==x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -1LL;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -70578073;

    t49 = (x197<=(x198^(x199==x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -1;
	int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MIN;
	int32_t x204 = INT32_MAX;
	static int32_t t50 = 65425;

    t50 = (x201<=(x202^(x203==x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x206 = -1;
	int16_t x207 = -222;
	static int16_t x208 = INT16_MIN;
	static int32_t t51 = -138;

    t51 = (x205<=(x206^(x207==x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	volatile uint8_t x210 = 5U;
	int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MAX;
	static int32_t t52 = 3661674;

    t52 = (x209<=(x210^(x211==x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MAX;
	volatile int8_t x215 = INT8_MIN;
	uint8_t x216 = 89U;
	int32_t t53 = -37;

    t53 = (x213<=(x214^(x215==x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x218 = 79U;
	static uint32_t x219 = 5U;
	int32_t t54 = 30667548;

    t54 = (x217<=(x218^(x219==x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -3;
	volatile int32_t x222 = 1058864;
	int32_t x223 = -1;
	int64_t x224 = INT64_MIN;
	static int32_t t55 = 20025;

    t55 = (x221<=(x222^(x223==x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x227 = INT32_MAX;
	int64_t x228 = INT64_MIN;

    t56 = (x225<=(x226^(x227==x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 84U;
	int16_t x230 = INT16_MAX;
	int32_t x231 = INT32_MIN;
	static volatile int64_t x232 = -1LL;

    t57 = (x229<=(x230^(x231==x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = INT16_MAX;
	static int16_t x234 = -1;
	static int64_t x235 = -3322069992407LL;
	uint64_t x236 = 8721387718602LLU;
	volatile int32_t t58 = -2;

    t58 = (x233<=(x234^(x235==x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MAX;
	volatile int32_t x238 = 254;
	int16_t x239 = INT16_MIN;
	uint16_t x240 = 5057U;
	int32_t t59 = 146763;

    t59 = (x237<=(x238^(x239==x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x242 = INT16_MIN;
	uint64_t x243 = 12995917210LLU;
	static uint8_t x244 = 16U;

    t60 = (x241<=(x242^(x243==x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	uint64_t x246 = 501LLU;
	static int64_t x247 = -1LL;
	int32_t x248 = INT32_MAX;
	volatile int32_t t61 = 15708780;

    t61 = (x245<=(x246^(x247==x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = INT32_MIN;
	volatile uint8_t x250 = 6U;
	uint16_t x251 = 18352U;
	static int32_t x252 = -2;

    t62 = (x249<=(x250^(x251==x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x254 = -1;
	uint32_t x255 = 2126U;
	static int8_t x256 = 1;

    t63 = (x253<=(x254^(x255==x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = UINT32_MAX;
	volatile int32_t x258 = INT32_MIN;
	uint8_t x259 = 2U;
	volatile int32_t t64 = 60500;

    t64 = (x257<=(x258^(x259==x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 109U;
	volatile uint32_t x262 = UINT32_MAX;
	uint16_t x263 = 1327U;
	int32_t t65 = 0;

    t65 = (x261<=(x262^(x263==x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	uint16_t x266 = 38U;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = 2647052748673999100LL;
	int32_t t66 = -50;

    t66 = (x265<=(x266^(x267==x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = -60266571;
	uint16_t x271 = UINT16_MAX;
	int64_t x272 = -1LL;
	volatile int32_t t67 = 339;

    t67 = (x269<=(x270^(x271==x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x273 = 57768133U;
	static uint64_t x274 = 1579260359846273LLU;
	uint8_t x276 = 30U;
	volatile int32_t t68 = -128;

    t68 = (x273<=(x274^(x275==x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = INT32_MIN;
	int16_t x279 = -1;
	static int64_t x280 = -13LL;
	int32_t t69 = -3;

    t69 = (x277<=(x278^(x279==x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = UINT8_MAX;
	static int64_t x282 = -378394555964275LL;
	int64_t x283 = 19263403349379LL;
	int16_t x284 = INT16_MAX;
	static int32_t t70 = -101;

    t70 = (x281<=(x282^(x283==x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = INT64_MAX;
	uint64_t x286 = 330567123LLU;
	uint16_t x288 = 9U;
	int32_t t71 = 229;

    t71 = (x285<=(x286^(x287==x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	static volatile uint8_t x291 = 1U;
	int16_t x292 = INT16_MAX;
	volatile int32_t t72 = -3854;

    t72 = (x289<=(x290^(x291==x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MIN;
	uint16_t x295 = 1812U;
	volatile uint16_t x296 = 12U;
	int32_t t73 = -6364;

    t73 = (x293<=(x294^(x295==x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x299 = 0;
	volatile uint64_t x300 = 27483LLU;
	int32_t t74 = -53468859;

    t74 = (x297<=(x298^(x299==x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = INT64_MIN;
	static uint8_t x303 = 4U;
	int32_t t75 = -97672;

    t75 = (x301<=(x302^(x303==x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	static int32_t x308 = -1;
	int32_t t76 = 187;

    t76 = (x305<=(x306^(x307==x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	int8_t x310 = INT8_MIN;
	int32_t x311 = 7322;
	int64_t x312 = INT64_MIN;
	static int32_t t77 = 2905896;

    t77 = (x309<=(x310^(x311==x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MAX;
	uint8_t x314 = 1U;
	int64_t x315 = INT64_MIN;
	int16_t x316 = -1;
	volatile int32_t t78 = -15474;

    t78 = (x313<=(x314^(x315==x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 496936U;
	int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = 9U;
	volatile int32_t t79 = -18393;

    t79 = (x317<=(x318^(x319==x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = UINT32_MAX;
	int16_t x322 = 81;
	static int32_t x323 = -24;
	int16_t x324 = INT16_MAX;

    t80 = (x321<=(x322^(x323==x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	volatile int16_t x326 = 88;
	uint8_t x327 = 83U;
	int16_t x328 = -10494;

    t81 = (x325<=(x326^(x327==x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 503593U;
	int32_t x330 = -1;
	int64_t x331 = INT64_MIN;
	int64_t x332 = -1LL;
	volatile int32_t t82 = 16505841;

    t82 = (x329<=(x330^(x331==x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x334 = INT16_MIN;
	static int64_t x335 = -1LL;
	uint8_t x336 = UINT8_MAX;
	int32_t t83 = -5749;

    t83 = (x333<=(x334^(x335==x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x337 = INT32_MIN;
	uint8_t x338 = 6U;
	volatile uint32_t x339 = 52U;
	int32_t x340 = INT32_MAX;
	int32_t t84 = -1;

    t84 = (x337<=(x338^(x339==x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = 1;
	int64_t x342 = -4LL;
	int8_t x343 = 3;
	int16_t x344 = INT16_MIN;
	int32_t t85 = -203005;

    t85 = (x341<=(x342^(x343==x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	uint8_t x346 = 15U;
	volatile uint8_t x347 = 56U;
	int8_t x348 = -1;
	int32_t t86 = -10;

    t86 = (x345<=(x346^(x347==x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x350 = INT8_MAX;
	int8_t x352 = 1;
	static int32_t t87 = 77244;

    t87 = (x349<=(x350^(x351==x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -120747775;
	int8_t x354 = -1;
	volatile uint16_t x356 = 6U;
	static volatile int32_t t88 = 86;

    t88 = (x353<=(x354^(x355==x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x357 = 174560683LLU;
	uint8_t x358 = 15U;
	int64_t x359 = 122011387LL;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t89 = 1803527;

    t89 = (x357<=(x358^(x359==x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 51;
	static uint32_t x362 = 1567319664U;
	int16_t x363 = -1;
	uint8_t x364 = 6U;
	volatile int32_t t90 = -1;

    t90 = (x361<=(x362^(x363==x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 44LLU;
	static int64_t x366 = 194345570LL;
	int64_t x367 = -1076712414338LL;
	int16_t x368 = 1;

    t91 = (x365<=(x366^(x367==x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x369 = 1LLU;
	volatile int16_t x370 = 499;
	int8_t x372 = INT8_MIN;
	volatile int32_t t92 = 2938382;

    t92 = (x369<=(x370^(x371==x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = -3;
	int64_t x374 = -1LL;
	static uint8_t x375 = UINT8_MAX;
	volatile int32_t t93 = -514906579;

    t93 = (x373<=(x374^(x375==x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x377 = 493899LL;
	int32_t x378 = 3;
	uint16_t x380 = 449U;
	volatile int32_t t94 = -13;

    t94 = (x377<=(x378^(x379==x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = INT16_MIN;
	int8_t x384 = 5;
	volatile int32_t t95 = -1046;

    t95 = (x381<=(x382^(x383==x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x386 = -1LL;
	static int32_t x388 = INT32_MIN;
	int32_t t96 = 4755;

    t96 = (x385<=(x386^(x387==x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	int64_t x390 = -1LL;
	static uint16_t x392 = UINT16_MAX;
	int32_t t97 = -6919;

    t97 = (x389<=(x390^(x391==x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -1LL;
	int16_t x394 = -6;
	int16_t x395 = 20;
	uint64_t x396 = 179692427LLU;
	int32_t t98 = 5;

    t98 = (x393<=(x394^(x395==x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	static int8_t x398 = -8;
	volatile int8_t x399 = INT8_MIN;
	int32_t t99 = -229112758;

    t99 = (x397<=(x398^(x399==x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x401 = INT8_MIN;
	int64_t x402 = -1LL;
	uint8_t x403 = 10U;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t100 = 60759088;

    t100 = (x401<=(x402^(x403==x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 78LLU;
	uint8_t x407 = UINT8_MAX;
	int64_t x408 = INT64_MIN;
	volatile int32_t t101 = 3624774;

    t101 = (x405<=(x406^(x407==x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 7536;
	int16_t x410 = INT16_MIN;
	volatile int32_t x411 = -1;
	volatile int32_t x412 = INT32_MIN;
	volatile int32_t t102 = 1;

    t102 = (x409<=(x410^(x411==x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = 0;
	int32_t x414 = -1;
	uint64_t x415 = UINT64_MAX;
	int32_t x416 = INT32_MAX;
	volatile int32_t t103 = -11897393;

    t103 = (x413<=(x414^(x415==x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = INT16_MIN;
	int8_t x418 = 57;
	static int8_t x419 = -61;
	static int8_t x420 = INT8_MAX;

    t104 = (x417<=(x418^(x419==x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x422 = INT16_MIN;
	uint16_t x423 = UINT16_MAX;
	volatile int32_t t105 = 17404;

    t105 = (x421<=(x422^(x423==x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x426 = -1;
	int32_t x427 = -324;
	volatile uint32_t x428 = 210U;
	volatile int32_t t106 = 6016365;

    t106 = (x425<=(x426^(x427==x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 3;
	static uint32_t x430 = 102747U;

    t107 = (x429<=(x430^(x431==x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x434 = -1;
	volatile int64_t x435 = INT64_MIN;
	int8_t x436 = 2;
	int32_t t108 = -1;

    t108 = (x433<=(x434^(x435==x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 25232U;
	volatile int64_t x439 = INT64_MAX;
	int32_t t109 = 451961948;

    t109 = (x437<=(x438^(x439==x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint16_t x442 = UINT16_MAX;
	static int8_t x444 = INT8_MIN;
	volatile int32_t t110 = -7;

    t110 = (x441<=(x442^(x443==x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x445 = 26313287U;
	uint32_t x446 = UINT32_MAX;
	volatile int32_t x447 = INT32_MIN;
	int64_t x448 = -1LL;
	static volatile int32_t t111 = 2465380;

    t111 = (x445<=(x446^(x447==x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	int64_t x451 = -29LL;

    t112 = (x449<=(x450^(x451==x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = -494LL;
	int32_t x455 = 13642635;
	int16_t x456 = INT16_MIN;
	static volatile int32_t t113 = -2034;

    t113 = (x453<=(x454^(x455==x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x459 = 6;
	int16_t x460 = 14059;
	int32_t t114 = 7;

    t114 = (x457<=(x458^(x459==x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x462 = INT16_MIN;
	uint64_t x463 = 58062778754834138LLU;
	volatile int64_t x464 = -1LL;
	int32_t t115 = 775;

    t115 = (x461<=(x462^(x463==x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 0;
	int8_t x466 = -44;
	uint64_t x467 = 19477080055027LLU;
	int8_t x468 = -1;
	static int32_t t116 = 94;

    t116 = (x465<=(x466^(x467==x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x471 = INT16_MIN;
	int32_t x472 = -1;

    t117 = (x469<=(x470^(x471==x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	uint32_t x474 = 24493367U;
	int16_t x476 = -1;
	volatile int32_t t118 = 1022651;

    t118 = (x473<=(x474^(x475==x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x477 = 2U;
	volatile int64_t x478 = INT64_MIN;
	int32_t x479 = INT32_MIN;
	int8_t x480 = 1;
	volatile int32_t t119 = -663;

    t119 = (x477<=(x478^(x479==x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 990149LLU;
	int8_t x482 = 1;
	int16_t x483 = 4;
	volatile int32_t x484 = INT32_MIN;
	volatile int32_t t120 = 500952;

    t120 = (x481<=(x482^(x483==x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MAX;
	static uint8_t x486 = 2U;
	int8_t x487 = -7;
	int16_t x488 = -1;
	volatile int32_t t121 = 127;

    t121 = (x485<=(x486^(x487==x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x490 = INT32_MIN;
	uint32_t x491 = 3669709U;
	volatile int32_t t122 = -871950;

    t122 = (x489<=(x490^(x491==x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	static uint64_t x494 = 433973LLU;
	int64_t x495 = -1596734509575265LL;
	int16_t x496 = -1;
	static int32_t t123 = 120;

    t123 = (x493<=(x494^(x495==x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x498 = -1;
	static volatile int16_t x499 = 1;
	volatile int8_t x500 = INT8_MAX;
	int32_t t124 = 9;

    t124 = (x497<=(x498^(x499==x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -3;
	static uint16_t x502 = 22U;
	volatile uint8_t x504 = 29U;
	volatile int32_t t125 = -33747533;

    t125 = (x501<=(x502^(x503==x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = 85U;
	static volatile uint8_t x506 = UINT8_MAX;
	int16_t x507 = INT16_MIN;

    t126 = (x505<=(x506^(x507==x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	static int32_t x510 = INT32_MIN;
	uint64_t x512 = UINT64_MAX;
	int32_t t127 = 1;

    t127 = (x509<=(x510^(x511==x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -1LL;
	int32_t x514 = -1;
	int64_t x515 = -1LL;
	uint32_t x516 = 138U;
	int32_t t128 = 0;

    t128 = (x513<=(x514^(x515==x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -37283;
	volatile int32_t x519 = -49726471;
	volatile int64_t x520 = INT64_MIN;
	volatile int32_t t129 = 7;

    t129 = (x517<=(x518^(x519==x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x521 = 4548865796127860LL;
	int8_t x523 = -6;
	int8_t x524 = INT8_MIN;
	volatile int32_t t130 = -14;

    t130 = (x521<=(x522^(x523==x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = UINT64_MAX;
	volatile uint32_t x526 = UINT32_MAX;
	int64_t x527 = -232528LL;
	int32_t x528 = 2824;
	volatile int32_t t131 = -5994;

    t131 = (x525<=(x526^(x527==x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MAX;
	int32_t x530 = -1;
	volatile int8_t x531 = -1;
	static uint32_t x532 = 27484457U;
	int32_t t132 = -1707;

    t132 = (x529<=(x530^(x531==x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	uint32_t x534 = 3815251U;
	volatile int16_t x535 = INT16_MIN;
	int32_t x536 = INT32_MAX;
	int32_t t133 = -508135;

    t133 = (x533<=(x534^(x535==x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x538 = 4176658434891LL;
	int16_t x539 = -2;
	volatile int32_t x540 = INT32_MIN;
	volatile int32_t t134 = -1;

    t134 = (x537<=(x538^(x539==x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MIN;
	int32_t x542 = -29;
	static int8_t x543 = INT8_MIN;
	int32_t t135 = -31;

    t135 = (x541<=(x542^(x543==x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x548 = INT64_MIN;
	volatile int32_t t136 = -68655;

    t136 = (x545<=(x546^(x547==x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	uint32_t x550 = 19029U;
	static int64_t x552 = INT64_MIN;
	volatile int32_t t137 = 457862;

    t137 = (x549<=(x550^(x551==x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = -211;
	int8_t x555 = -26;
	uint64_t x556 = 4500481108229150LLU;
	int32_t t138 = 10943154;

    t138 = (x553<=(x554^(x555==x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x558 = -6545;
	int64_t x560 = -354409276774831373LL;
	int32_t t139 = -155652420;

    t139 = (x557<=(x558^(x559==x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x562 = -90;
	uint16_t x563 = UINT16_MAX;
	int32_t t140 = -207424689;

    t140 = (x561<=(x562^(x563==x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x566 = -128376345108450653LL;
	int32_t x567 = INT32_MIN;
	volatile int32_t t141 = -14393117;

    t141 = (x565<=(x566^(x567==x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = 4983;
	uint64_t x570 = UINT64_MAX;
	int8_t x571 = INT8_MIN;
	int8_t x572 = INT8_MAX;
	volatile int32_t t142 = -12;

    t142 = (x569<=(x570^(x571==x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x573 = 801U;
	volatile int64_t x574 = INT64_MAX;
	volatile uint16_t x575 = 6U;
	int8_t x576 = INT8_MAX;
	volatile int32_t t143 = 289;

    t143 = (x573<=(x574^(x575==x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = -1;
	static int8_t x578 = INT8_MIN;
	volatile int32_t t144 = 6;

    t144 = (x577<=(x578^(x579==x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x581 = INT64_MAX;
	static int64_t x582 = -16114834484660LL;

    t145 = (x581<=(x582^(x583==x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -449;
	volatile int32_t x587 = -1;
	uint64_t x588 = UINT64_MAX;
	volatile int32_t t146 = 0;

    t146 = (x585<=(x586^(x587==x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	int64_t x590 = INT64_MAX;
	int16_t x591 = -1;
	static volatile int64_t x592 = -2124568323524234LL;
	volatile int32_t t147 = 40512750;

    t147 = (x589<=(x590^(x591==x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x595 = UINT64_MAX;
	int32_t t148 = -37658468;

    t148 = (x593<=(x594^(x595==x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x599 = 1006U;
	static volatile int64_t x600 = INT64_MIN;
	int32_t t149 = -10775;

    t149 = (x597<=(x598^(x599==x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = 10;
	int8_t x603 = INT8_MIN;

    t150 = (x601<=(x602^(x603==x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = 10702912767667725LL;
	int8_t x606 = 27;
	uint8_t x608 = 1U;

    t151 = (x605<=(x606^(x607==x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 3U;
	uint32_t x610 = 115U;
	int8_t x611 = INT8_MIN;
	uint32_t x612 = 68446575U;
	int32_t t152 = 42322;

    t152 = (x609<=(x610^(x611==x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 173205786U;
	static uint16_t x615 = UINT16_MAX;
	uint32_t x616 = 67994U;
	volatile int32_t t153 = 7286532;

    t153 = (x613<=(x614^(x615==x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 1071411828112300118LLU;
	static int16_t x618 = INT16_MIN;
	uint64_t x619 = 7380734403822675566LLU;
	static int8_t x620 = -1;
	int32_t t154 = -31;

    t154 = (x617<=(x618^(x619==x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = INT8_MIN;
	uint16_t x623 = 3U;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t155 = 5;

    t155 = (x621<=(x622^(x623==x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = UINT64_MAX;
	volatile int32_t x626 = INT32_MIN;
	static int16_t x627 = INT16_MIN;
	static uint16_t x628 = 10U;
	volatile int32_t t156 = 3;

    t156 = (x625<=(x626^(x627==x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MAX;
	int64_t x630 = INT64_MAX;
	volatile uint8_t x631 = 6U;
	int32_t x632 = INT32_MIN;
	static int32_t t157 = 21614836;

    t157 = (x629<=(x630^(x631==x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = 0;
	int8_t x634 = INT8_MIN;
	volatile int64_t x635 = 4786519441294LL;
	int32_t t158 = -141876;

    t158 = (x633<=(x634^(x635==x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 12U;
	uint32_t x639 = 937814964U;
	volatile int8_t x640 = -1;
	volatile int32_t t159 = -4728495;

    t159 = (x637<=(x638^(x639==x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = INT8_MIN;
	volatile uint16_t x642 = 896U;
	int64_t x643 = INT64_MIN;
	uint32_t x644 = 4336588U;
	int32_t t160 = 126261;

    t160 = (x641<=(x642^(x643==x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MAX;
	int32_t x647 = -1;

    t161 = (x645<=(x646^(x647==x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 4U;
	int16_t x650 = 3529;
	int32_t x652 = INT32_MIN;
	volatile int32_t t162 = -2857;

    t162 = (x649<=(x650^(x651==x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x653 = 20;
	static int16_t x654 = -1;
	int64_t x656 = -1LL;
	int32_t t163 = 49072291;

    t163 = (x653<=(x654^(x655==x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -1;
	static int16_t x658 = INT16_MIN;
	int8_t x659 = INT8_MAX;
	volatile int64_t x660 = INT64_MIN;
	static volatile int32_t t164 = 1;

    t164 = (x657<=(x658^(x659==x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x662 = -1LL;
	int16_t x663 = INT16_MIN;
	static uint64_t x664 = 534021LLU;
	volatile int32_t t165 = 1;

    t165 = (x661<=(x662^(x663==x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x665 = INT32_MIN;
	volatile uint16_t x666 = 263U;
	int32_t x667 = INT32_MAX;
	int8_t x668 = -1;
	static volatile int32_t t166 = -8;

    t166 = (x665<=(x666^(x667==x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x670 = -19;
	int32_t x672 = 1624;
	volatile int32_t t167 = -70071874;

    t167 = (x669<=(x670^(x671==x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x674 = -6188LL;
	int32_t x675 = INT32_MIN;
	volatile int64_t x676 = 1236162034533225385LL;
	int32_t t168 = 0;

    t168 = (x673<=(x674^(x675==x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -1LL;
	volatile uint16_t x678 = 6U;
	int16_t x679 = -44;
	int8_t x680 = -1;
	int32_t t169 = -935;

    t169 = (x677<=(x678^(x679==x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	volatile uint32_t x682 = 801U;
	static uint8_t x683 = 1U;
	int64_t x684 = -31941LL;
	int32_t t170 = -30;

    t170 = (x681<=(x682^(x683==x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x686 = -1;
	int8_t x687 = -12;
	int64_t x688 = INT64_MIN;
	static volatile int32_t t171 = 229;

    t171 = (x685<=(x686^(x687==x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 13709248U;
	uint8_t x690 = 1U;
	static int16_t x692 = -1;
	int32_t t172 = 1023;

    t172 = (x689<=(x690^(x691==x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x694 = INT8_MIN;
	int16_t x695 = INT16_MIN;
	int32_t t173 = -9587678;

    t173 = (x693<=(x694^(x695==x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x697 = UINT16_MAX;
	volatile int16_t x698 = INT16_MIN;
	static int32_t x699 = INT32_MAX;
	volatile int32_t t174 = -8037;

    t174 = (x697<=(x698^(x699==x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x701 = UINT64_MAX;
	int64_t x702 = 125190LL;
	int8_t x704 = -1;
	volatile int32_t t175 = 4540;

    t175 = (x701<=(x702^(x703==x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x707 = INT16_MAX;
	static volatile int16_t x708 = INT16_MIN;
	volatile int32_t t176 = 24415672;

    t176 = (x705<=(x706^(x707==x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -1;
	static int32_t x711 = -1;
	static volatile int8_t x712 = -1;
	int32_t t177 = -1;

    t177 = (x709<=(x710^(x711==x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x713 = INT16_MIN;
	int64_t x714 = INT64_MIN;
	volatile uint64_t x715 = 1056115763363LLU;
	volatile int16_t x716 = INT16_MIN;

    t178 = (x713<=(x714^(x715==x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x717 = INT32_MIN;
	volatile int32_t x718 = -1;
	int8_t x719 = -1;
	int32_t t179 = 3460690;

    t179 = (x717<=(x718^(x719==x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	int8_t x722 = INT8_MAX;
	static volatile int32_t x723 = INT32_MIN;
	static int32_t t180 = -26262;

    t180 = (x721<=(x722^(x723==x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = 26548826518106LL;
	volatile int16_t x726 = INT16_MIN;
	int32_t x728 = 345;

    t181 = (x725<=(x726^(x727==x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x729 = 2463U;
	static int32_t x731 = 26395;
	static uint64_t x732 = UINT64_MAX;
	volatile int32_t t182 = -40648;

    t182 = (x729<=(x730^(x731==x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = INT8_MIN;
	volatile int16_t x734 = -1;
	volatile uint32_t x736 = 90751U;
	int32_t t183 = 497468;

    t183 = (x733<=(x734^(x735==x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = INT64_MAX;
	uint16_t x738 = 1857U;
	int16_t x739 = -15053;
	static uint32_t x740 = 244091123U;
	volatile int32_t t184 = 166;

    t184 = (x737<=(x738^(x739==x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 15547U;
	uint32_t x743 = UINT32_MAX;

    t185 = (x741<=(x742^(x743==x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = -1LL;
	uint32_t x747 = 41U;
	static int32_t x748 = INT32_MIN;
	static int32_t t186 = -574;

    t186 = (x745<=(x746^(x747==x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = INT8_MIN;
	static uint16_t x751 = UINT16_MAX;
	int8_t x752 = INT8_MAX;

    t187 = (x749<=(x750^(x751==x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 93309U;
	int8_t x754 = INT8_MAX;
	int16_t x755 = 7789;
	static int64_t x756 = -60076LL;
	static int32_t t188 = 144;

    t188 = (x753<=(x754^(x755==x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	uint8_t x758 = 0U;
	int32_t x759 = 323;

    t189 = (x757<=(x758^(x759==x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = UINT16_MAX;
	uint64_t x762 = 3383LLU;
	uint8_t x763 = 1U;
	int32_t x764 = INT32_MAX;
	int32_t t190 = 78;

    t190 = (x761<=(x762^(x763==x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	int64_t x766 = -1LL;
	int64_t x767 = INT64_MIN;
	int64_t x768 = INT64_MIN;
	volatile int32_t t191 = 4;

    t191 = (x765<=(x766^(x767==x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x770 = 5781;
	int8_t x771 = -1;
	uint16_t x772 = 7U;
	volatile int32_t t192 = -10;

    t192 = (x769<=(x770^(x771==x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 12U;
	volatile uint8_t x774 = 1U;
	int64_t x775 = -1LL;
	volatile int16_t x776 = -6381;
	int32_t t193 = 246;

    t193 = (x773<=(x774^(x775==x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -8890;
	volatile uint16_t x778 = 27959U;
	int8_t x779 = INT8_MAX;
	volatile int32_t t194 = -388314456;

    t194 = (x777<=(x778^(x779==x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = 7528;
	int64_t x782 = -13630LL;
	volatile uint16_t x783 = UINT16_MAX;
	int64_t x784 = -1LL;
	int32_t t195 = -198;

    t195 = (x781<=(x782^(x783==x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x785 = -1;
	uint64_t x786 = 253099438LLU;
	int64_t x787 = 740266564933078250LL;
	int32_t t196 = -3;

    t196 = (x785<=(x786^(x787==x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x790 = 994U;
	int16_t x791 = INT16_MAX;
	int32_t t197 = 950903667;

    t197 = (x789<=(x790^(x791==x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 87U;
	int16_t x794 = INT16_MAX;
	int8_t x795 = INT8_MIN;
	volatile int8_t x796 = INT8_MIN;
	volatile int32_t t198 = 204689316;

    t198 = (x793<=(x794^(x795==x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = 1;
	int32_t x799 = INT32_MAX;
	uint64_t x800 = 394515612705LLU;
	static int32_t t199 = 11;

    t199 = (x797<=(x798^(x799==x800)));

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

