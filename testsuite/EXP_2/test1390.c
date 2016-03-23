
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

static int8_t x4 = -1;
int16_t x5 = -667;
static uint32_t x7 = 343921490U;
int32_t x9 = -1;
int8_t x14 = INT8_MIN;
volatile int64_t t5 = -7849658LL;
static int32_t x27 = INT32_MIN;
uint64_t x30 = 24855711LLU;
int32_t x31 = INT32_MAX;
volatile int32_t x33 = 401;
static int8_t x39 = -1;
int64_t x42 = INT64_MIN;
volatile uint64_t t11 = 6994LLU;
volatile int32_t t12 = 3699596;
uint64_t x61 = UINT64_MAX;
static int64_t x65 = INT64_MIN;
static int32_t x67 = 9982;
int64_t x81 = INT64_MAX;
static volatile int64_t t19 = 13766429LL;
static int64_t x86 = -1LL;
int16_t x94 = INT16_MAX;
uint64_t t23 = 96116068LLU;
int32_t x102 = 51430;
uint8_t x103 = 0U;
int64_t x106 = 12843775427LL;
volatile uint16_t x109 = UINT16_MAX;
int16_t x120 = -1;
uint32_t x126 = UINT32_MAX;
static volatile int32_t t29 = -61;
static int32_t x132 = INT32_MIN;
static int8_t x143 = 2;
volatile int8_t x156 = INT8_MIN;
static uint16_t x160 = UINT16_MAX;
uint32_t t37 = 1U;
static uint8_t x165 = 2U;
int64_t x166 = -152503092LL;
volatile int32_t t39 = 122877;
static int64_t x171 = -1111385935090607LL;
int32_t t41 = 172;
int16_t x179 = -1;
int32_t x194 = INT32_MAX;
static volatile int64_t x196 = INT64_MIN;
static volatile int32_t x198 = -125;
int32_t t47 = 208403;
volatile int64_t x201 = INT64_MIN;
int8_t x202 = INT8_MIN;
static int64_t t48 = -260496423239LL;
static volatile int16_t x218 = -225;
int8_t x219 = -1;
volatile uint64_t t52 = 6LLU;
uint32_t x232 = 177841U;
volatile int16_t x234 = INT16_MIN;
uint8_t x235 = 2U;
volatile int8_t x236 = INT8_MIN;
static int64_t t55 = -3944611700025365LL;
uint16_t x240 = 2U;
static int64_t t56 = 1962879710LL;
static uint64_t x249 = UINT64_MAX;
uint32_t x250 = UINT32_MAX;
int16_t x257 = INT16_MAX;
static volatile int32_t t60 = 700672450;
static volatile int32_t x261 = INT32_MIN;
int32_t x265 = 286;
uint16_t x268 = UINT16_MAX;
static volatile int32_t t62 = 69;
int64_t x271 = -3943235LL;
static int16_t x278 = -1;
volatile int32_t t67 = -2;
int16_t x291 = 1943;
int8_t x300 = -1;
static int32_t x302 = 24057121;
volatile uint32_t t71 = 1929U;
volatile int32_t t72 = 2;
uint32_t x317 = UINT32_MAX;
int64_t t75 = -136032LL;
volatile int64_t x322 = INT64_MIN;
static uint64_t x330 = 66634140944077447LLU;
volatile uint16_t x333 = UINT16_MAX;
volatile uint64_t x336 = UINT64_MAX;
uint64_t x342 = UINT64_MAX;
int8_t x343 = -1;
int32_t x344 = INT32_MIN;
int32_t t80 = -19;
int8_t x349 = 0;
uint64_t x355 = UINT64_MAX;
int32_t t82 = 86;
volatile uint16_t x363 = 329U;
volatile uint64_t t85 = 3447747141130686239LLU;
uint32_t x374 = UINT32_MAX;
uint64_t x376 = 714340531230LLU;
int8_t x377 = 42;
volatile int32_t t88 = 8118;
volatile int32_t x381 = -85219;
static uint32_t x387 = 259982U;
uint64_t x391 = UINT64_MAX;
int16_t x398 = INT16_MIN;
int16_t x399 = INT16_MIN;
static int64_t x406 = INT64_MAX;
volatile uint64_t t95 = 659992837071LLU;
uint16_t x413 = 9942U;
int32_t x424 = 89;
int8_t x431 = INT8_MAX;
uint64_t t101 = 718032LLU;
volatile uint16_t x433 = UINT16_MAX;
volatile int64_t x441 = INT64_MIN;
static volatile uint64_t x447 = UINT64_MAX;
volatile int64_t t107 = 1714265357LL;
int16_t x459 = INT16_MIN;
int64_t t108 = 399810574275172455LL;
static int16_t x465 = INT16_MIN;
int16_t x466 = INT16_MIN;
int64_t x467 = INT64_MIN;
volatile uint64_t t110 = 15LLU;
int64_t x470 = INT64_MIN;
uint32_t t112 = 52320030U;
int32_t t113 = -1590;
int64_t x481 = -1LL;
int16_t x488 = INT16_MIN;
static uint64_t x490 = UINT64_MAX;
static uint8_t x491 = 0U;
int8_t x496 = -1;
int8_t x499 = INT8_MIN;
volatile int32_t t118 = -2027286;
static int32_t x501 = 6991258;
volatile int32_t t119 = -92029;
int8_t x505 = 44;
int32_t x509 = INT32_MIN;
int8_t x511 = 1;
int32_t x512 = 314818;
volatile int64_t t122 = 27380951LL;
uint32_t x519 = 4U;
static int64_t t123 = 69410990LL;
int32_t x541 = -1;
uint32_t x544 = 32646518U;
volatile uint8_t x546 = 5U;
volatile int64_t t130 = -11746228LL;
int32_t x561 = 167;
int32_t t133 = -374433;
static uint8_t x570 = 3U;
volatile int64_t t135 = -4407928574LL;
volatile int64_t t136 = 2LL;
uint64_t x577 = 29044497037887LLU;
uint64_t x578 = 11568729827LLU;
uint64_t t137 = 3LLU;
static uint64_t x585 = 2453395247LLU;
uint8_t x592 = UINT8_MAX;
volatile int64_t t140 = 1LL;
volatile int64_t t141 = -2044885222140LL;
static int32_t t143 = -2958084;
static uint32_t t144 = 611767591U;
int32_t x609 = INT32_MIN;
int32_t t145 = 1634;
int64_t x615 = -67811LL;
int64_t x616 = 7LL;
uint8_t x619 = 0U;
static volatile int32_t t147 = 4;
int64_t x623 = -1LL;
int64_t x627 = -14LL;
int8_t x633 = 19;
volatile int64_t t151 = 276363424171372243LL;
uint64_t x637 = 4917340LLU;
uint32_t x641 = 490540367U;
uint32_t x671 = UINT32_MAX;
int32_t x678 = INT32_MAX;
int32_t x691 = 217;
volatile uint16_t x699 = 41U;
int32_t t165 = -3595;
int16_t x708 = INT16_MIN;
volatile int32_t t168 = 1006;
int16_t x721 = 118;
int32_t x727 = INT32_MAX;
int8_t x731 = INT8_MIN;
volatile int32_t t173 = 3;
static int8_t x738 = INT8_MIN;
int8_t x741 = -1;
int16_t x744 = INT16_MIN;
int32_t t176 = 528;
uint64_t x745 = 401LLU;
int64_t x747 = INT64_MIN;
static int64_t x763 = INT64_MIN;
int8_t x769 = -1;
volatile int16_t x771 = INT16_MAX;
int32_t x773 = INT32_MIN;
volatile int16_t x775 = INT16_MAX;
int8_t x776 = 2;
static volatile int32_t x777 = -5107;
int32_t x784 = INT32_MAX;
uint32_t x786 = UINT32_MAX;
int32_t x794 = INT32_MIN;
int32_t x799 = -59;
int32_t x805 = INT32_MIN;
static int64_t x806 = 8831388334177706LL;
static volatile int64_t x817 = INT64_MIN;
int8_t x819 = -14;
int64_t x820 = INT64_MIN;
uint64_t x821 = UINT64_MAX;
int32_t x832 = INT32_MIN;
int64_t t199 = -41289111639LL;


void f0(void) {
    	int32_t x1 = 7632;
	uint64_t x2 = 1088771457389058904LLU;
	uint32_t x3 = 8958U;
	volatile int32_t t0 = -517297;

    t0 = ((x1-(x2==x3))/x4);

    if (t0 != -7632) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -785;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 0;

    t1 = ((x5-(x6==x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 1LLU;
	int32_t x11 = INT32_MAX;
	static int64_t x12 = -418072907160078352LL;
	static int64_t t2 = 12933298122228430LL;

    t2 = ((x9-(x10==x11))/x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -1LL;
	static volatile int8_t x15 = INT8_MAX;
	uint16_t x16 = UINT16_MAX;
	static volatile int64_t t3 = 3659092338473702LL;

    t3 = ((x13-(x14==x15))/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = 2U;
	int32_t x18 = -1;
	uint8_t x19 = 17U;
	volatile int64_t x20 = 258649733988829LL;
	int64_t t4 = 1373437060LL;

    t4 = ((x17-(x18==x19))/x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 16876031;
	volatile int8_t x22 = INT8_MAX;
	uint8_t x23 = 10U;
	int64_t x24 = -117LL;

    t5 = ((x21-(x22==x23))/x24);

    if (t5 != -144239LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = -1;
	volatile int64_t x26 = INT64_MIN;
	volatile uint16_t x28 = 8U;
	int32_t t6 = -1926021;

    t6 = ((x25-(x26==x27))/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	volatile int8_t x32 = INT8_MIN;
	int64_t t7 = -525182367799707462LL;

    t7 = ((x29-(x30==x31))/x32);

    if (t7 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = INT32_MIN;
	int64_t x35 = -3794197667721LL;
	int16_t x36 = INT16_MAX;
	volatile int32_t t8 = -14561449;

    t8 = ((x33-(x34==x35))/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	uint64_t x38 = 920498671277LLU;
	volatile uint64_t x40 = 2414402130467LLU;
	uint64_t t9 = 408006668768332LLU;

    t9 = ((x37-(x38==x39))/x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 764628008U;
	int32_t x43 = INT32_MIN;
	volatile int64_t x44 = -15LL;
	volatile int64_t t10 = 4082145635LL;

    t10 = ((x41-(x42==x43))/x44);

    if (t10 != -50975200LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint64_t x45 = 40LLU;
	int32_t x46 = INT32_MAX;
	int8_t x47 = -29;
	int16_t x48 = INT16_MAX;

    t11 = ((x45-(x46==x47))/x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	volatile int8_t x50 = -9;
	volatile int64_t x51 = 8568586LL;
	uint16_t x52 = 3U;

    t12 = ((x49-(x50==x51))/x52);

    if (t12 != 10922) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = INT64_MIN;
	uint32_t x54 = 41122U;
	uint32_t x55 = 1113063844U;
	int32_t x56 = 944;
	static volatile int64_t t13 = 120906354840LL;

    t13 = ((x53-(x54==x55))/x56);

    if (t13 != -9770521225481754LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 1;
	uint8_t x58 = 0U;
	int64_t x59 = INT64_MIN;
	int64_t x60 = 4788947LL;
	volatile int64_t t14 = -1LL;

    t14 = ((x57-(x58==x59))/x60);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	uint64_t x64 = 105235384633645LLU;
	uint64_t t15 = 23658522380710441LLU;

    t15 = ((x61-(x62==x63))/x64);

    if (t15 != 175290LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x66 = 7089734;
	int64_t x68 = INT64_MIN;
	int64_t t16 = 1005134302LL;

    t16 = ((x65-(x66==x67))/x68);

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	volatile int8_t x70 = INT8_MIN;
	static int64_t x71 = -185776LL;
	int8_t x72 = INT8_MAX;
	static int32_t t17 = 956187611;

    t17 = ((x69-(x70==x71))/x72);

    if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = -1;
	int64_t x78 = 80LL;
	int32_t x79 = 104;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t18 = -14945;

    t18 = ((x77-(x78==x79))/x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x82 = 3U;
	uint8_t x83 = UINT8_MAX;
	int32_t x84 = INT32_MAX;

    t19 = ((x81-(x82==x83))/x84);

    if (t19 != 4294967298LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = 237683U;
	static uint32_t x87 = 15432322U;
	volatile int32_t x88 = INT32_MAX;
	uint32_t t20 = 0U;

    t20 = ((x85-(x86==x87))/x88);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x89 = INT32_MIN;
	uint32_t x90 = 0U;
	int32_t x91 = 14927659;
	uint64_t x92 = UINT64_MAX;
	uint64_t t21 = 2LLU;

    t21 = ((x89-(x90==x91))/x92);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = INT64_MIN;
	volatile uint32_t x95 = 1890008U;
	uint16_t x96 = 844U;
	volatile int64_t t22 = 269149043089612060LL;

    t22 = ((x93-(x94==x95))/x96);

    if (t22 != -10928165920444047LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x97 = INT8_MAX;
	int8_t x98 = -1;
	int16_t x99 = 2764;
	uint64_t x100 = 1564043LLU;

    t23 = ((x97-(x98==x99))/x100);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint8_t x101 = UINT8_MAX;
	static int8_t x104 = -1;
	volatile int32_t t24 = 13560;

    t24 = ((x101-(x102==x103))/x104);

    if (t24 != -255) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = -128;
	uint32_t x107 = UINT32_MAX;
	int16_t x108 = -3;
	static int32_t t25 = 10;

    t25 = ((x105-(x106==x107))/x108);

    if (t25 != 42) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint8_t x110 = 12U;
	static int32_t x111 = INT32_MIN;
	static int64_t x112 = INT64_MIN;
	static volatile int64_t t26 = -223920749119365LL;

    t26 = ((x109-(x110==x111))/x112);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x114 = -1;
	int32_t x115 = INT32_MAX;
	int8_t x116 = 6;
	int32_t t27 = 2822;

    t27 = ((x113-(x114==x115))/x116);

    if (t27 != -21) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x117 = INT64_MAX;
	int8_t x118 = INT8_MAX;
	uint16_t x119 = 2U;
	static int64_t t28 = -350839394301LL;

    t28 = ((x117-(x118==x119))/x120);

    if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x125 = UINT8_MAX;
	uint16_t x127 = 9243U;
	static uint8_t x128 = UINT8_MAX;

    t29 = ((x125-(x126==x127))/x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MAX;
	int64_t x131 = -194217861381778874LL;
	static volatile int32_t t30 = 104467;

    t30 = ((x129-(x130==x131))/x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x133 = INT8_MIN;
	volatile int8_t x134 = 27;
	int32_t x135 = INT32_MIN;
	static uint32_t x136 = 6U;
	uint32_t t31 = 220547230U;

    t31 = ((x133-(x134==x135))/x136);

    if (t31 != 715827861U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x137 = -1LL;
	uint64_t x138 = 1338910350151064881LLU;
	int32_t x139 = INT32_MIN;
	volatile int8_t x140 = INT8_MIN;
	volatile int64_t t32 = 63619LL;

    t32 = ((x137-(x138==x139))/x140);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x141 = INT64_MAX;
	int32_t x142 = INT32_MIN;
	int32_t x144 = INT32_MIN;
	int64_t t33 = -26LL;

    t33 = ((x141-(x142==x143))/x144);

    if (t33 != -4294967295LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = 635882LL;
	uint8_t x146 = UINT8_MAX;
	volatile int16_t x147 = INT16_MAX;
	uint16_t x148 = 17U;
	int64_t t34 = -309LL;

    t34 = ((x145-(x146==x147))/x148);

    if (t34 != 37404LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = -1LL;
	volatile int64_t x150 = 0LL;
	static volatile int32_t x151 = INT32_MIN;
	int16_t x152 = -1;
	volatile int64_t t35 = -81558465154LL;

    t35 = ((x149-(x150==x151))/x152);

    if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = -1;
	uint16_t x154 = 115U;
	uint8_t x155 = UINT8_MAX;
	int32_t t36 = -3697321;

    t36 = ((x153-(x154==x155))/x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x157 = 15U;
	static volatile int16_t x158 = INT16_MIN;
	int32_t x159 = 6;

    t37 = ((x157-(x158==x159))/x160);

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x161 = INT16_MAX;
	static int32_t x162 = INT32_MIN;
	uint64_t x163 = 1844144293LLU;
	static uint32_t x164 = 320U;
	uint32_t t38 = 1U;

    t38 = ((x161-(x162==x163))/x164);

    if (t38 != 102U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MAX;

    t39 = ((x165-(x166==x167))/x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = INT8_MIN;
	uint64_t x170 = 800LLU;
	volatile int8_t x172 = INT8_MIN;
	int32_t t40 = 272;

    t40 = ((x169-(x170==x171))/x172);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x173 = -1;
	uint32_t x174 = 3971180U;
	int8_t x175 = INT8_MAX;
	volatile int16_t x176 = -1;

    t41 = ((x173-(x174==x175))/x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MAX;
	int64_t x180 = -1LL;
	volatile int64_t t42 = 72550732365LL;

    t42 = ((x177-(x178==x179))/x180);

    if (t42 != 2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x181 = UINT64_MAX;
	volatile uint16_t x182 = UINT16_MAX;
	uint8_t x183 = 50U;
	int32_t x184 = INT32_MIN;
	volatile uint64_t t43 = 26804807695LLU;

    t43 = ((x181-(x182==x183))/x184);

    if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x185 = -1;
	static int32_t x186 = 253047319;
	int32_t x187 = -12025;
	uint64_t x188 = 2813305023LLU;
	uint64_t t44 = 3926388412132626662LLU;

    t44 = ((x185-(x186==x187))/x188);

    if (t44 != 6556965534LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x189 = -440699;
	int16_t x190 = -1;
	int16_t x191 = INT16_MIN;
	static int16_t x192 = INT16_MIN;
	int32_t t45 = -10121;

    t45 = ((x189-(x190==x191))/x192);

    if (t45 != 13) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = INT8_MIN;
	static uint32_t x195 = 1055U;
	int64_t t46 = 10LL;

    t46 = ((x193-(x194==x195))/x196);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x197 = -1;
	int32_t x199 = INT32_MAX;
	int16_t x200 = -1;

    t47 = ((x197-(x198==x199))/x200);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x203 = INT64_MAX;
	volatile int64_t x204 = INT64_MAX;

    t48 = ((x201-(x202==x203))/x204);

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x205 = UINT32_MAX;
	static uint64_t x206 = 20637121042613545LLU;
	volatile int8_t x207 = INT8_MAX;
	static int8_t x208 = -1;
	uint32_t t49 = 1338U;

    t49 = ((x205-(x206==x207))/x208);

    if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = -1;
	static int64_t x210 = INT64_MIN;
	uint16_t x211 = UINT16_MAX;
	static uint16_t x212 = UINT16_MAX;
	volatile int32_t t50 = 15;

    t50 = ((x209-(x210==x211))/x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x217 = 104;
	int16_t x220 = INT16_MIN;
	volatile int32_t t51 = 264155358;

    t51 = ((x217-(x218==x219))/x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x221 = UINT64_MAX;
	uint16_t x222 = 343U;
	int64_t x223 = 986686414978260207LL;
	int16_t x224 = INT16_MIN;

    t52 = ((x221-(x222==x223))/x224);

    if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x225 = INT64_MAX;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = 7654U;
	uint16_t x228 = UINT16_MAX;
	int64_t t53 = -1026098248001179LL;

    t53 = ((x225-(x226==x227))/x228);

    if (t53 != 140739635871744LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x229 = 26304256091140LLU;
	int16_t x230 = INT16_MIN;
	volatile int64_t x231 = -1LL;
	volatile uint64_t t54 = 120LLU;

    t54 = ((x229-(x230==x231))/x232);

    if (t54 != 147908840LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = 38638425LL;

    t55 = ((x233-(x234==x235))/x236);

    if (t55 != -301862LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = INT64_MIN;
	uint8_t x238 = 103U;
	int32_t x239 = INT32_MIN;

    t56 = ((x237-(x238==x239))/x240);

    if (t56 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = 0;
	static int64_t x242 = INT64_MIN;
	int64_t x243 = -1106193820443844263LL;
	int32_t x244 = 6520;
	int32_t t57 = 15064611;

    t57 = ((x241-(x242==x243))/x244);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x251 = 9680;
	int32_t x252 = 9183;
	volatile uint64_t t58 = 89848141862LLU;

    t58 = ((x249-(x250==x251))/x252);

    if (t58 != 2008792777274262LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = -37898329131LL;
	static int64_t x254 = 346LL;
	int32_t x255 = INT32_MIN;
	int64_t x256 = 4692LL;
	int64_t t59 = 5006440421LL;

    t59 = ((x253-(x254==x255))/x256);

    if (t59 != -8077222LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x258 = 1U;
	int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;

    t60 = ((x257-(x258==x259))/x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x262 = INT8_MIN;
	uint8_t x263 = 105U;
	volatile int8_t x264 = 1;
	static int32_t t61 = INT32_MIN;

    t61 = ((x261-(x262==x263))/x264);

    if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x266 = INT64_MAX;
	int32_t x267 = 3357951;

    t62 = ((x265-(x266==x267))/x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x269 = UINT16_MAX;
	int64_t x270 = INT64_MIN;
	int8_t x272 = -17;
	int32_t t63 = 394;

    t63 = ((x269-(x270==x271))/x272);

    if (t63 != -3855) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MIN;
	int64_t x275 = INT64_MIN;
	static volatile int64_t x276 = 946719101LL;
	int64_t t64 = 4856277038450LL;

    t64 = ((x273-(x274==x275))/x276);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x277 = 8863095207777949191LLU;
	static volatile int32_t x279 = INT32_MAX;
	int64_t x280 = 39LL;
	volatile uint64_t t65 = 86961623233LLU;

    t65 = ((x277-(x278==x279))/x280);

    if (t65 != 227258851481485876LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x281 = UINT16_MAX;
	int16_t x282 = -11557;
	static volatile int64_t x283 = INT64_MAX;
	int32_t x284 = 5532;
	int32_t t66 = -62;

    t66 = ((x281-(x282==x283))/x284);

    if (t66 != 11) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = -1;
	volatile int64_t x286 = INT64_MAX;
	uint64_t x287 = 23711625021316LLU;
	int16_t x288 = INT16_MIN;

    t67 = ((x285-(x286==x287))/x288);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x289 = -1;
	volatile uint16_t x290 = 129U;
	int16_t x292 = INT16_MIN;
	static int32_t t68 = 11019202;

    t68 = ((x289-(x290==x291))/x292);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x293 = 1962U;
	uint32_t x294 = 1035331265U;
	uint16_t x295 = 5092U;
	uint32_t x296 = 668486U;
	uint32_t t69 = 510374217U;

    t69 = ((x293-(x294==x295))/x296);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x297 = 24230145U;
	int32_t x298 = INT32_MIN;
	static uint8_t x299 = 25U;
	volatile uint32_t t70 = 1074U;

    t70 = ((x297-(x298==x299))/x300);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x301 = INT16_MAX;
	static int16_t x303 = 1;
	uint32_t x304 = 285U;

    t71 = ((x301-(x302==x303))/x304);

    if (t71 != 114U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x305 = 1;
	int64_t x306 = -1LL;
	uint32_t x307 = 6460U;
	int32_t x308 = INT32_MAX;

    t72 = ((x305-(x306==x307))/x308);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x309 = -10096136;
	static uint8_t x310 = 3U;
	int64_t x311 = INT64_MIN;
	volatile int32_t x312 = INT32_MIN;
	int32_t t73 = 136;

    t73 = ((x309-(x310==x311))/x312);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x313 = INT32_MIN;
	uint64_t x314 = 377419669LLU;
	volatile int64_t x315 = -1LL;
	int64_t x316 = -1LL;
	int64_t t74 = -6881248LL;

    t74 = ((x313-(x314==x315))/x316);

    if (t74 != 2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x318 = 60;
	uint8_t x319 = 73U;
	int64_t x320 = -1LL;

    t75 = ((x317-(x318==x319))/x320);

    if (t75 != -4294967295LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x321 = INT8_MIN;
	static int32_t x323 = INT32_MIN;
	int32_t x324 = -2229009;
	volatile int32_t t76 = -3;

    t76 = ((x321-(x322==x323))/x324);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x329 = INT64_MIN;
	volatile int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	volatile int64_t t77 = 47787993LL;

    t77 = ((x329-(x330==x331))/x332);

    if (t77 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x334 = UINT16_MAX;
	uint64_t x335 = UINT64_MAX;
	volatile uint64_t t78 = 6574162LLU;

    t78 = ((x333-(x334==x335))/x336);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x337 = 1076LLU;
	volatile int64_t x338 = INT64_MIN;
	int64_t x339 = INT64_MAX;
	int8_t x340 = -29;
	volatile uint64_t t79 = 1429907737894452226LLU;

    t79 = ((x337-(x338==x339))/x340);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x341 = UINT16_MAX;

    t80 = ((x341-(x342==x343))/x344);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x350 = -1LL;
	uint64_t x351 = 11909518LLU;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t81 = -1047;

    t81 = ((x349-(x350==x351))/x352);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x353 = 1U;
	int16_t x354 = INT16_MIN;
	int16_t x356 = INT16_MAX;

    t82 = ((x353-(x354==x355))/x356);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x357 = INT64_MAX;
	volatile int32_t x358 = INT32_MIN;
	int16_t x359 = 10354;
	static uint32_t x360 = 103416028U;
	volatile int64_t t83 = -2083810221849956597LL;

    t83 = ((x357-(x358==x359))/x360);

    if (t83 != 89187065247LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x361 = UINT16_MAX;
	int16_t x362 = -1;
	int64_t x364 = INT64_MIN;
	volatile int64_t t84 = 17492666LL;

    t84 = ((x361-(x362==x363))/x364);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x365 = UINT32_MAX;
	int8_t x366 = -1;
	int8_t x367 = INT8_MAX;
	static uint64_t x368 = 119498LLU;

    t85 = ((x365-(x366==x367))/x368);

    if (t85 != 35941LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x369 = 790765LL;
	volatile int16_t x370 = -739;
	uint16_t x371 = UINT16_MAX;
	uint16_t x372 = UINT16_MAX;
	static int64_t t86 = 563465055507324482LL;

    t86 = ((x369-(x370==x371))/x372);

    if (t86 != 12LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x373 = INT8_MIN;
	int32_t x375 = 698;
	uint64_t t87 = 16562LLU;

    t87 = ((x373-(x374==x375))/x376);

    if (t87 != 25823459LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x378 = 6U;
	static int64_t x379 = INT64_MAX;
	volatile int8_t x380 = -1;

    t88 = ((x377-(x378==x379))/x380);

    if (t88 != -42) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x382 = -17109263928520871LL;
	volatile uint8_t x383 = 24U;
	int8_t x384 = -1;
	volatile int32_t t89 = 8;

    t89 = ((x381-(x382==x383))/x384);

    if (t89 != 85219) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x385 = INT32_MIN;
	volatile int16_t x386 = INT16_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t90 = 3179171;

    t90 = ((x385-(x386==x387))/x388);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x389 = 0U;
	int16_t x390 = 434;
	volatile uint64_t x392 = UINT64_MAX;
	static volatile uint64_t t91 = 12051108004LLU;

    t91 = ((x389-(x390==x391))/x392);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x393 = 124LLU;
	int64_t x394 = INT64_MIN;
	static int64_t x395 = 60LL;
	volatile uint64_t x396 = UINT64_MAX;
	static uint64_t t92 = 1300LLU;

    t92 = ((x393-(x394==x395))/x396);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x397 = 18U;
	volatile int8_t x400 = -60;
	int32_t t93 = 162677;

    t93 = ((x397-(x398==x399))/x400);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x401 = INT64_MIN;
	uint64_t x402 = UINT64_MAX;
	int16_t x403 = -198;
	static int16_t x404 = 232;
	static int64_t t94 = -1209697LL;

    t94 = ((x401-(x402==x403))/x404);

    if (t94 != -39755913951960240LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x405 = -1;
	int32_t x407 = INT32_MIN;
	static uint64_t x408 = UINT64_MAX;

    t95 = ((x405-(x406==x407))/x408);

    if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x409 = 37;
	volatile uint8_t x410 = 26U;
	int64_t x411 = INT64_MIN;
	uint16_t x412 = 410U;
	int32_t t96 = 485136;

    t96 = ((x409-(x410==x411))/x412);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x414 = 3U;
	uint16_t x415 = UINT16_MAX;
	int8_t x416 = -1;
	int32_t t97 = -34805616;

    t97 = ((x413-(x414==x415))/x416);

    if (t97 != -9942) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x417 = UINT64_MAX;
	volatile int64_t x418 = INT64_MIN;
	uint32_t x419 = UINT32_MAX;
	int16_t x420 = INT16_MIN;
	volatile uint64_t t98 = 63LLU;

    t98 = ((x417-(x418==x419))/x420);

    if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x421 = INT32_MAX;
	static volatile int32_t x422 = -2791130;
	volatile uint32_t x423 = UINT32_MAX;
	static int32_t t99 = -132017662;

    t99 = ((x421-(x422==x423))/x424);

    if (t99 != 24129029) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x425 = 0;
	int64_t x426 = INT64_MAX;
	int16_t x427 = INT16_MIN;
	int16_t x428 = INT16_MIN;
	int32_t t100 = 340483727;

    t100 = ((x425-(x426==x427))/x428);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x429 = 25LLU;
	int16_t x430 = 3329;
	uint32_t x432 = 12859105U;

    t101 = ((x429-(x430==x431))/x432);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x434 = -1;
	volatile int64_t x435 = -1LL;
	uint8_t x436 = 45U;
	volatile int32_t t102 = -42994271;

    t102 = ((x433-(x434==x435))/x436);

    if (t102 != 1456) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x437 = INT8_MAX;
	uint8_t x438 = 17U;
	int16_t x439 = INT16_MIN;
	int8_t x440 = 1;
	static volatile int32_t t103 = 14849629;

    t103 = ((x437-(x438==x439))/x440);

    if (t103 != 127) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x442 = -1;
	uint16_t x443 = 45U;
	static int64_t x444 = 32790563284LL;
	int64_t t104 = 3401215724837539850LL;

    t104 = ((x441-(x442==x443))/x444);

    if (t104 != -281281292LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x445 = INT16_MIN;
	uint8_t x446 = 11U;
	int32_t x448 = INT32_MIN;
	volatile int32_t t105 = -11;

    t105 = ((x445-(x446==x447))/x448);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x449 = INT16_MAX;
	int16_t x450 = INT16_MIN;
	volatile uint64_t x451 = 1219917433535LLU;
	int64_t x452 = -1LL;
	int64_t t106 = -3402393LL;

    t106 = ((x449-(x450==x451))/x452);

    if (t106 != -32767LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x453 = -1;
	volatile int16_t x454 = INT16_MIN;
	int32_t x455 = INT32_MAX;
	volatile int64_t x456 = INT64_MAX;

    t107 = ((x453-(x454==x455))/x456);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x457 = INT64_MAX;
	int8_t x458 = -1;
	int64_t x460 = INT64_MAX;

    t108 = ((x457-(x458==x459))/x460);

    if (t108 != 1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x461 = -1;
	int16_t x462 = INT16_MAX;
	uint8_t x463 = UINT8_MAX;
	uint16_t x464 = UINT16_MAX;
	volatile int32_t t109 = 48080415;

    t109 = ((x461-(x462==x463))/x464);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x468 = 287250875246956137LLU;

    t110 = ((x465-(x466==x467))/x468);

    if (t110 != 64LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x469 = UINT8_MAX;
	static uint16_t x471 = UINT16_MAX;
	int16_t x472 = INT16_MIN;
	int32_t t111 = -4;

    t111 = ((x469-(x470==x471))/x472);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x473 = 8672U;
	uint8_t x474 = UINT8_MAX;
	int8_t x475 = 52;
	int32_t x476 = INT32_MIN;

    t112 = ((x473-(x474==x475))/x476);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x477 = INT32_MIN;
	int64_t x478 = 1LL;
	static int8_t x479 = 0;
	static int8_t x480 = INT8_MIN;

    t113 = ((x477-(x478==x479))/x480);

    if (t113 != 16777216) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x482 = INT64_MAX;
	int64_t x483 = -16305330730092LL;
	static volatile int64_t x484 = -6018375758661706LL;
	volatile int64_t t114 = 103951036123600582LL;

    t114 = ((x481-(x482==x483))/x484);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x485 = 3U;
	uint16_t x486 = 254U;
	uint8_t x487 = 34U;
	volatile int32_t t115 = 373332358;

    t115 = ((x485-(x486==x487))/x488);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x489 = 5U;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t116 = -1866746;

    t116 = ((x489-(x490==x491))/x492);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x493 = INT8_MIN;
	static int8_t x494 = INT8_MAX;
	static int32_t x495 = INT32_MIN;
	volatile int32_t t117 = 41459;

    t117 = ((x493-(x494==x495))/x496);

    if (t117 != 128) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x497 = 9844;
	volatile uint16_t x498 = 2U;
	int16_t x500 = -11;

    t118 = ((x497-(x498==x499))/x500);

    if (t118 != -894) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x502 = INT16_MAX;
	int64_t x503 = INT64_MAX;
	volatile int32_t x504 = INT32_MAX;

    t119 = ((x501-(x502==x503))/x504);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x506 = INT16_MIN;
	int16_t x507 = INT16_MAX;
	int16_t x508 = INT16_MIN;
	static volatile int32_t t120 = 69618;

    t120 = ((x505-(x506==x507))/x508);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x510 = INT64_MAX;
	volatile int32_t t121 = 6;

    t121 = ((x509-(x510==x511))/x512);

    if (t121 != -6821) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x513 = -1LL;
	static int16_t x514 = INT16_MIN;
	int32_t x515 = 297596;
	int16_t x516 = -1;

    t122 = ((x513-(x514==x515))/x516);

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x517 = 1560127LL;
	int16_t x518 = INT16_MIN;
	volatile uint32_t x520 = UINT32_MAX;

    t123 = ((x517-(x518==x519))/x520);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x521 = 442U;
	int16_t x522 = INT16_MAX;
	int8_t x523 = 0;
	uint64_t x524 = 4044331641LLU;
	uint64_t t124 = 1293533LLU;

    t124 = ((x521-(x522==x523))/x524);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x525 = INT64_MAX;
	static int16_t x526 = INT16_MIN;
	int16_t x527 = 11;
	int8_t x528 = INT8_MIN;
	volatile int64_t t125 = -279539942256679LL;

    t125 = ((x525-(x526==x527))/x528);

    if (t125 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x529 = -7;
	uint32_t x530 = UINT32_MAX;
	uint8_t x531 = UINT8_MAX;
	int8_t x532 = INT8_MAX;
	static volatile int32_t t126 = 982;

    t126 = ((x529-(x530==x531))/x532);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x533 = INT32_MIN;
	uint32_t x534 = 5444761U;
	int8_t x535 = -1;
	int16_t x536 = INT16_MAX;
	static volatile int32_t t127 = -1896866;

    t127 = ((x533-(x534==x535))/x536);

    if (t127 != -65538) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x537 = 5646LLU;
	static int32_t x538 = INT32_MIN;
	int64_t x539 = INT64_MIN;
	uint8_t x540 = UINT8_MAX;
	volatile uint64_t t128 = 0LLU;

    t128 = ((x537-(x538==x539))/x540);

    if (t128 != 22LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x542 = 118143U;
	int32_t x543 = 18830;
	uint32_t t129 = 37151282U;

    t129 = ((x541-(x542==x543))/x544);

    if (t129 != 131U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x545 = INT8_MIN;
	uint32_t x547 = UINT32_MAX;
	static int64_t x548 = INT64_MIN;

    t130 = ((x545-(x546==x547))/x548);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x549 = -2259106665788983LL;
	static int64_t x550 = INT64_MAX;
	static uint32_t x551 = 14U;
	volatile int8_t x552 = INT8_MIN;
	int64_t t131 = 527LL;

    t131 = ((x549-(x550==x551))/x552);

    if (t131 != 17649270826476LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x553 = UINT64_MAX;
	uint64_t x554 = 498967696848LLU;
	uint32_t x555 = 1296792U;
	uint32_t x556 = UINT32_MAX;
	volatile uint64_t t132 = 221136979270552LLU;

    t132 = ((x553-(x554==x555))/x556);

    if (t132 != 4294967297LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x562 = UINT32_MAX;
	int8_t x563 = INT8_MIN;
	uint16_t x564 = UINT16_MAX;

    t133 = ((x561-(x562==x563))/x564);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x565 = 17;
	uint32_t x566 = UINT32_MAX;
	volatile int32_t x567 = INT32_MIN;
	int8_t x568 = INT8_MIN;
	static volatile int32_t t134 = -902;

    t134 = ((x565-(x566==x567))/x568);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x569 = INT64_MIN;
	static int32_t x571 = INT32_MIN;
	uint32_t x572 = 41364U;

    t135 = ((x569-(x570==x571))/x572);

    if (t135 != -222980660401672LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x573 = INT32_MAX;
	static uint16_t x574 = 0U;
	static volatile uint8_t x575 = 11U;
	volatile int64_t x576 = INT64_MIN;

    t136 = ((x573-(x574==x575))/x576);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x579 = INT8_MAX;
	volatile uint64_t x580 = UINT64_MAX;

    t137 = ((x577-(x578==x579))/x580);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x581 = INT8_MIN;
	uint8_t x582 = 27U;
	uint16_t x583 = 25U;
	static int16_t x584 = -1;
	int32_t t138 = -76;

    t138 = ((x581-(x582==x583))/x584);

    if (t138 != 128) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x586 = 2978613388LLU;
	volatile int8_t x587 = -1;
	uint16_t x588 = 660U;
	uint64_t t139 = 150601042518754277LLU;

    t139 = ((x585-(x586==x587))/x588);

    if (t139 != 3717265LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x589 = INT64_MAX;
	int32_t x590 = -8138;
	static uint16_t x591 = 55U;

    t140 = ((x589-(x590==x591))/x592);

    if (t140 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x593 = -100LL;
	int16_t x594 = -2;
	int32_t x595 = -3;
	static int16_t x596 = INT16_MAX;

    t141 = ((x593-(x594==x595))/x596);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x597 = INT8_MAX;
	static int64_t x598 = -1LL;
	int32_t x599 = -12;
	static volatile int64_t x600 = INT64_MAX;
	volatile int64_t t142 = 1227109314194LL;

    t142 = ((x597-(x598==x599))/x600);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x601 = -1919;
	int8_t x602 = -3;
	uint64_t x603 = UINT64_MAX;
	static int8_t x604 = -42;

    t143 = ((x601-(x602==x603))/x604);

    if (t143 != 45) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x605 = UINT16_MAX;
	int64_t x606 = -199428694864LL;
	int8_t x607 = -1;
	volatile uint32_t x608 = 2064823098U;

    t144 = ((x605-(x606==x607))/x608);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x610 = INT32_MIN;
	static int64_t x611 = -1LL;
	static int16_t x612 = -574;

    t145 = ((x609-(x610==x611))/x612);

    if (t145 != 3741260) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x613 = 884262015224856684LLU;
	volatile int64_t x614 = INT64_MAX;
	uint64_t t146 = 299LLU;

    t146 = ((x613-(x614==x615))/x616);

    if (t146 != 126323145032122383LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x617 = -1;
	volatile int16_t x618 = -4;
	int8_t x620 = INT8_MIN;

    t147 = ((x617-(x618==x619))/x620);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x621 = -168841726LL;
	volatile int32_t x622 = INT32_MAX;
	int16_t x624 = INT16_MAX;
	static int64_t t148 = -3LL;

    t148 = ((x621-(x622==x623))/x624);

    if (t148 != -5152LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x625 = -1;
	int32_t x626 = INT32_MIN;
	uint16_t x628 = 3374U;
	static int32_t t149 = -25583;

    t149 = ((x625-(x626==x627))/x628);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x629 = INT64_MIN;
	volatile int8_t x630 = INT8_MIN;
	int16_t x631 = INT16_MIN;
	uint16_t x632 = 11U;
	static volatile int64_t t150 = -108582482LL;

    t150 = ((x629-(x630==x631))/x632);

    if (t150 != -838488366986797800LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x634 = -1;
	int8_t x635 = 1;
	int64_t x636 = INT64_MIN;

    t151 = ((x633-(x634==x635))/x636);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x638 = -11443230LL;
	static int8_t x639 = -1;
	static int32_t x640 = -1;
	volatile uint64_t t152 = 6LLU;

    t152 = ((x637-(x638==x639))/x640);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x642 = 58;
	int32_t x643 = -1;
	static int32_t x644 = INT32_MIN;
	volatile uint32_t t153 = 29246U;

    t153 = ((x641-(x642==x643))/x644);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x645 = -1;
	uint8_t x646 = 4U;
	int64_t x647 = -1828967391544699968LL;
	uint32_t x648 = 34992U;
	volatile uint32_t t154 = 217950009U;

    t154 = ((x645-(x646==x647))/x648);

    if (t154 != 122741U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x653 = INT32_MIN;
	volatile uint64_t x654 = UINT64_MAX;
	static uint16_t x655 = 369U;
	int32_t x656 = INT32_MIN;
	volatile int32_t t155 = 5706;

    t155 = ((x653-(x654==x655))/x656);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x657 = 0U;
	uint64_t x658 = 32LLU;
	int16_t x659 = INT16_MAX;
	int8_t x660 = INT8_MIN;
	int32_t t156 = -93;

    t156 = ((x657-(x658==x659))/x660);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x665 = INT16_MIN;
	int64_t x666 = INT64_MAX;
	int64_t x667 = INT64_MIN;
	static uint16_t x668 = 3423U;
	int32_t t157 = 13744117;

    t157 = ((x665-(x666==x667))/x668);

    if (t157 != -9) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x669 = -271;
	int64_t x670 = -1759LL;
	int16_t x672 = -1;
	int32_t t158 = -3269459;

    t158 = ((x669-(x670==x671))/x672);

    if (t158 != 271) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x673 = UINT64_MAX;
	int16_t x674 = 3707;
	volatile int64_t x675 = 3102LL;
	static int8_t x676 = INT8_MAX;
	volatile uint64_t t159 = 8544LLU;

    t159 = ((x673-(x674==x675))/x676);

    if (t159 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x677 = 13165;
	volatile uint32_t x679 = 1684218U;
	int64_t x680 = INT64_MAX;
	volatile int64_t t160 = -25LL;

    t160 = ((x677-(x678==x679))/x680);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x681 = INT32_MAX;
	int16_t x682 = INT16_MAX;
	uint64_t x683 = 9245779296144048LLU;
	volatile int32_t x684 = 2377011;
	int32_t t161 = 39082139;

    t161 = ((x681-(x682==x683))/x684);

    if (t161 != 903) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x685 = UINT32_MAX;
	volatile int32_t x686 = INT32_MIN;
	int8_t x687 = -1;
	int64_t x688 = -1LL;
	int64_t t162 = 1LL;

    t162 = ((x685-(x686==x687))/x688);

    if (t162 != -4294967295LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x689 = 70;
	int8_t x690 = -39;
	int64_t x692 = -1LL;
	int64_t t163 = -101596741LL;

    t163 = ((x689-(x690==x691))/x692);

    if (t163 != -70LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x693 = 6549;
	uint8_t x694 = 127U;
	uint64_t x695 = 751883244832165LLU;
	int64_t x696 = 1250945LL;
	int64_t t164 = -1044803798230717953LL;

    t164 = ((x693-(x694==x695))/x696);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x697 = INT8_MIN;
	uint8_t x698 = 10U;
	int8_t x700 = INT8_MAX;

    t165 = ((x697-(x698==x699))/x700);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x701 = -1;
	uint16_t x702 = UINT16_MAX;
	int8_t x703 = -1;
	uint32_t x704 = 5093U;
	uint32_t t166 = 1181234496U;

    t166 = ((x701-(x702==x703))/x704);

    if (t166 != 843307U) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int32_t x705 = INT32_MIN;
	volatile int16_t x706 = 1259;
	static uint32_t x707 = UINT32_MAX;
	static volatile int32_t t167 = -2;

    t167 = ((x705-(x706==x707))/x708);

    if (t167 != 65536) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x709 = UINT16_MAX;
	static uint16_t x710 = UINT16_MAX;
	static int32_t x711 = INT32_MIN;
	uint16_t x712 = UINT16_MAX;

    t168 = ((x709-(x710==x711))/x712);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint8_t x713 = 0U;
	static int64_t x714 = 141369LL;
	volatile int8_t x715 = -1;
	static uint16_t x716 = 7645U;
	volatile int32_t t169 = -6;

    t169 = ((x713-(x714==x715))/x716);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x717 = INT16_MIN;
	int8_t x718 = -1;
	uint64_t x719 = 9LLU;
	int16_t x720 = INT16_MAX;
	volatile int32_t t170 = 46;

    t170 = ((x717-(x718==x719))/x720);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x722 = -1LL;
	int32_t x723 = -1266675;
	uint32_t x724 = 12558U;
	volatile uint32_t t171 = 866378U;

    t171 = ((x721-(x722==x723))/x724);

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x725 = 29687793530LLU;
	static int32_t x726 = INT32_MIN;
	int64_t x728 = 79076312LL;
	volatile uint64_t t172 = 131694423792LLU;

    t172 = ((x725-(x726==x727))/x728);

    if (t172 != 375LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x729 = 6U;
	static uint64_t x730 = 15418668583125LLU;
	int16_t x732 = INT16_MIN;

    t173 = ((x729-(x730==x731))/x732);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x733 = INT32_MAX;
	static volatile uint8_t x734 = UINT8_MAX;
	static uint16_t x735 = UINT16_MAX;
	volatile int8_t x736 = -1;
	static volatile int32_t t174 = 119;

    t174 = ((x733-(x734==x735))/x736);

    if (t174 != -2147483647) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x737 = INT32_MIN;
	int16_t x739 = -1;
	int8_t x740 = -3;
	static int32_t t175 = -58576284;

    t175 = ((x737-(x738==x739))/x740);

    if (t175 != 715827882) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x742 = 311U;
	int32_t x743 = INT32_MIN;

    t176 = ((x741-(x742==x743))/x744);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x746 = -8;
	volatile uint16_t x748 = 813U;
	static volatile uint64_t t177 = 232959449LLU;

    t177 = ((x745-(x746==x747))/x748);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x749 = INT32_MIN;
	int32_t x750 = INT32_MIN;
	int8_t x751 = 0;
	uint64_t x752 = UINT64_MAX;
	static uint64_t t178 = 31991820896308LLU;

    t178 = ((x749-(x750==x751))/x752);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x753 = 263840LLU;
	uint32_t x754 = UINT32_MAX;
	volatile int64_t x755 = INT64_MAX;
	static int64_t x756 = 24460111608011LL;
	volatile uint64_t t179 = 0LLU;

    t179 = ((x753-(x754==x755))/x756);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x757 = UINT16_MAX;
	uint16_t x758 = 10U;
	int16_t x759 = 7895;
	int16_t x760 = INT16_MAX;
	int32_t t180 = -9680;

    t180 = ((x757-(x758==x759))/x760);

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x761 = INT64_MAX;
	int64_t x762 = INT64_MAX;
	volatile int8_t x764 = INT8_MIN;
	int64_t t181 = -242893853949553LL;

    t181 = ((x761-(x762==x763))/x764);

    if (t181 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x765 = INT32_MIN;
	uint8_t x766 = 5U;
	volatile int64_t x767 = INT64_MAX;
	int64_t x768 = INT64_MAX;
	int64_t t182 = -7701904690LL;

    t182 = ((x765-(x766==x767))/x768);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x770 = -2;
	static int32_t x772 = INT32_MIN;
	int32_t t183 = -2685;

    t183 = ((x769-(x770==x771))/x772);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x774 = UINT32_MAX;
	int32_t t184 = 117734048;

    t184 = ((x773-(x774==x775))/x776);

    if (t184 != -1073741824) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x778 = INT32_MIN;
	int32_t x779 = INT32_MIN;
	static volatile uint64_t x780 = 1455852379165385939LLU;
	uint64_t t185 = 438835970516891390LLU;

    t185 = ((x777-(x778==x779))/x780);

    if (t185 != 12LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x781 = -49000LL;
	static volatile uint16_t x782 = UINT16_MAX;
	static int64_t x783 = INT64_MAX;
	int64_t t186 = -37183718365306LL;

    t186 = ((x781-(x782==x783))/x784);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x785 = 402877LL;
	int32_t x787 = -164655;
	volatile int64_t x788 = -1LL;
	volatile int64_t t187 = -3778512102907LL;

    t187 = ((x785-(x786==x787))/x788);

    if (t187 != -402877LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x789 = 1709U;
	int16_t x790 = -1;
	int64_t x791 = -1LL;
	volatile int32_t x792 = -1;
	static int32_t t188 = -671455196;

    t188 = ((x789-(x790==x791))/x792);

    if (t188 != -1708) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x793 = 220U;
	static int64_t x795 = INT64_MAX;
	int8_t x796 = 1;
	volatile int32_t t189 = 7;

    t189 = ((x793-(x794==x795))/x796);

    if (t189 != 220) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x797 = UINT16_MAX;
	int16_t x798 = -1;
	static volatile int32_t x800 = 1344;
	volatile int32_t t190 = 0;

    t190 = ((x797-(x798==x799))/x800);

    if (t190 != 48) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x801 = 244LLU;
	uint16_t x802 = 13056U;
	volatile uint64_t x803 = 350246761123LLU;
	int8_t x804 = INT8_MIN;
	uint64_t t191 = 14854458414463932LLU;

    t191 = ((x801-(x802==x803))/x804);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x807 = 15500;
	int32_t x808 = INT32_MIN;
	volatile int32_t t192 = -2600;

    t192 = ((x805-(x806==x807))/x808);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x809 = INT32_MAX;
	uint16_t x810 = 6376U;
	int64_t x811 = INT64_MIN;
	volatile uint8_t x812 = 4U;
	int32_t t193 = 30;

    t193 = ((x809-(x810==x811))/x812);

    if (t193 != 536870911) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x813 = 143524LL;
	volatile int32_t x814 = 1;
	uint32_t x815 = 28139196U;
	uint64_t x816 = 67657LLU;
	uint64_t t194 = 39172105880925939LLU;

    t194 = ((x813-(x814==x815))/x816);

    if (t194 != 2LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x818 = 8385434419LL;
	static int64_t t195 = 139LL;

    t195 = ((x817-(x818==x819))/x820);

    if (t195 != 1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x822 = -3;
	int32_t x823 = INT32_MAX;
	volatile int32_t x824 = INT32_MIN;
	uint64_t t196 = 3618266998751845LLU;

    t196 = ((x821-(x822==x823))/x824);

    if (t196 != 1LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x825 = UINT64_MAX;
	int64_t x826 = INT64_MIN;
	uint64_t x827 = UINT64_MAX;
	uint32_t x828 = 7U;
	uint64_t t197 = 32491840342LLU;

    t197 = ((x825-(x826==x827))/x828);

    if (t197 != 2635249153387078802LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x829 = -1;
	static uint8_t x830 = 8U;
	int16_t x831 = INT16_MIN;
	volatile int32_t t198 = -592;

    t198 = ((x829-(x830==x831))/x832);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x833 = INT16_MIN;
	int64_t x834 = INT64_MAX;
	uint64_t x835 = 3LLU;
	int64_t x836 = -147213411157LL;

    t199 = ((x833-(x834==x835))/x836);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

