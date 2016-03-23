
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

volatile int64_t x1 = -1LL;
volatile uint16_t x6 = 20U;
uint16_t x11 = 352U;
uint32_t x12 = 2733931U;
uint8_t x14 = 8U;
volatile int64_t x23 = 339817955173347LL;
int16_t x29 = -3;
int8_t x36 = INT8_MIN;
static volatile int32_t t8 = -25780;
uint8_t x42 = 67U;
int64_t x50 = INT64_MAX;
uint8_t x52 = 1U;
static int32_t t16 = -120591;
static int16_t x70 = -8;
static volatile int32_t t21 = 75220;
uint32_t x91 = UINT32_MAX;
volatile uint8_t x95 = 5U;
uint8_t x97 = 8U;
int64_t x105 = INT64_MAX;
uint8_t x112 = UINT8_MAX;
volatile int32_t t27 = 14984;
int64_t x114 = 27006521547LL;
int64_t x118 = INT64_MIN;
int16_t x119 = INT16_MIN;
uint32_t x121 = 6U;
static uint64_t x122 = 357333429969381382LLU;
static volatile int8_t x131 = 52;
static int16_t x136 = INT16_MIN;
int32_t x139 = -46496275;
int64_t x142 = INT64_MIN;
int32_t x148 = INT32_MIN;
static int32_t t36 = -1073029604;
static int64_t x151 = 217423871823142LL;
static volatile int32_t t37 = -56;
int32_t x154 = -31;
static int8_t x159 = INT8_MIN;
int8_t x161 = -1;
volatile int8_t x168 = INT8_MAX;
volatile uint64_t x170 = 1LLU;
uint32_t x188 = 10294964U;
uint32_t x190 = 21747602U;
int64_t x193 = -1LL;
int32_t x198 = 241;
volatile int32_t t50 = 0;
int32_t t52 = -20472228;
int64_t x215 = -12795141LL;
uint16_t x217 = 30766U;
static int16_t x223 = INT16_MIN;
int32_t t55 = -7264570;
static int64_t x225 = INT64_MAX;
static int32_t x231 = -1;
int16_t x233 = 4316;
volatile int16_t x238 = 2956;
volatile uint32_t x242 = 2978956U;
int16_t x244 = -1;
int16_t x248 = INT16_MIN;
int16_t x271 = INT16_MAX;
int64_t x273 = INT64_MIN;
volatile int32_t t69 = -92828874;
int32_t x284 = -31;
static uint32_t x292 = 4059U;
int32_t t73 = -31288650;
int8_t x298 = -1;
uint32_t x300 = 2U;
static volatile int32_t t74 = -1528790;
volatile int32_t t75 = -70;
static int16_t x308 = INT16_MIN;
static int32_t t76 = -3;
volatile uint16_t x311 = UINT16_MAX;
int8_t x317 = -1;
int64_t x319 = -1LL;
volatile int32_t x330 = -1;
int32_t x333 = INT32_MIN;
static int32_t t83 = -315;
static uint32_t x337 = 0U;
int32_t x352 = -1;
int32_t t89 = -1;
int32_t x364 = 0;
int32_t t91 = 2365926;
int32_t x369 = -20174851;
int8_t x375 = INT8_MIN;
static volatile uint8_t x376 = 1U;
static int32_t t93 = -250847594;
int8_t x379 = -1;
int16_t x393 = 439;
static int32_t x395 = -325194364;
int64_t x396 = INT64_MIN;
uint32_t x400 = 1000202462U;
int8_t x402 = INT8_MIN;
volatile int64_t x408 = INT64_MIN;
int64_t x410 = INT64_MIN;
static volatile int32_t t102 = 0;
int64_t x415 = INT64_MIN;
int32_t t103 = 3;
static uint16_t x423 = 5424U;
int64_t x433 = -61879562LL;
volatile int32_t t108 = 172940;
static int8_t x440 = 1;
volatile int32_t t109 = -34;
static volatile int16_t x441 = -113;
int16_t x447 = INT16_MIN;
volatile int32_t t111 = -4879;
uint32_t x449 = 158187921U;
static int64_t x462 = INT64_MIN;
volatile int16_t x463 = 3661;
uint64_t x464 = 2537LLU;
int32_t t115 = -5;
int32_t x465 = -5;
static int32_t x471 = 86427;
int16_t x476 = INT16_MIN;
int64_t x478 = INT64_MIN;
int8_t x480 = -10;
static int64_t x486 = INT64_MIN;
static uint32_t x489 = 1935U;
int16_t x492 = INT16_MIN;
uint64_t x496 = UINT64_MAX;
volatile int8_t x513 = INT8_MIN;
int8_t x516 = -1;
int32_t x523 = 25118764;
static volatile int32_t x526 = INT32_MIN;
static volatile uint64_t x531 = 3649333010218828LLU;
static int64_t x533 = -1LL;
int8_t x535 = -1;
int64_t x536 = INT64_MIN;
int32_t x537 = INT32_MIN;
int32_t x542 = INT32_MAX;
volatile int16_t x543 = INT16_MIN;
uint16_t x544 = UINT16_MAX;
int64_t x548 = 554LL;
static int32_t x549 = -1;
uint16_t x566 = UINT16_MAX;
static uint64_t x567 = UINT64_MAX;
int16_t x570 = INT16_MIN;
uint64_t x571 = UINT64_MAX;
int64_t x574 = INT64_MIN;
int64_t x576 = 80286234234964358LL;
volatile int32_t t143 = 65273;
int32_t t144 = -72531638;
int8_t x594 = INT8_MAX;
int32_t x595 = INT32_MIN;
int32_t x605 = INT32_MIN;
int8_t x607 = 5;
uint64_t x610 = 8LLU;
static int16_t x614 = 1;
uint16_t x615 = 416U;
volatile int32_t t153 = -12;
volatile int32_t x619 = INT32_MIN;
static int32_t t154 = 446208593;
static int64_t x628 = INT64_MAX;
int64_t x629 = 1LL;
volatile int32_t t157 = 61489;
uint8_t x636 = UINT8_MAX;
static int64_t x648 = 1671007LL;
int16_t x652 = INT16_MIN;
uint8_t x658 = UINT8_MAX;
volatile int64_t x664 = INT64_MAX;
int8_t x673 = -17;
volatile int32_t t168 = 958344;
uint64_t x682 = 51423375368LLU;
int16_t x684 = 192;
uint8_t x688 = 0U;
uint8_t x693 = 1U;
int64_t x697 = -1LL;
int8_t x703 = 1;
int16_t x714 = 1;
int32_t x715 = INT32_MAX;
int32_t t181 = 164979;
static uint16_t x731 = 43U;
volatile int32_t t183 = -623415720;
int64_t x737 = INT64_MAX;
int16_t x738 = INT16_MIN;
static int32_t x740 = INT32_MAX;
static int64_t x741 = INT64_MIN;
int8_t x743 = -1;
volatile uint8_t x752 = 39U;
static int32_t x754 = INT32_MIN;
uint16_t x755 = 764U;
static int8_t x764 = 1;
volatile uint16_t x765 = UINT16_MAX;
static int16_t x771 = INT16_MAX;
uint8_t x772 = 52U;
int16_t x774 = INT16_MIN;
volatile int8_t x778 = -1;
int16_t x780 = INT16_MIN;
int16_t x792 = 1;
int32_t t198 = 62032216;
int64_t x799 = -168LL;


void f0(void) {
    	int8_t x2 = 8;
	uint16_t x3 = 6878U;
	int8_t x4 = 31;
	volatile int32_t t0 = -298476;

    t0 = ((x1%(x2|x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = 200U;
	static uint16_t x7 = 2U;
	int16_t x8 = 2381;
	static int32_t t1 = 6558;

    t1 = ((x5%(x6|x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	uint8_t x10 = 47U;
	volatile int32_t t2 = -1;

    t2 = ((x9%(x10|x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 93710566U;
	static int32_t x15 = -1;
	volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 1;

    t3 = ((x13%(x14|x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -6838;
	int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MIN;
	static volatile int8_t x20 = INT8_MIN;
	static int32_t t4 = 65067244;

    t4 = ((x17%(x18|x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = 19141;
	int16_t x22 = INT16_MIN;
	uint32_t x24 = 4232136U;
	int32_t t5 = 3903;

    t5 = ((x21%(x22|x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MAX;
	static volatile int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MAX;
	static volatile int64_t x28 = -70847939071LL;
	volatile int32_t t6 = 10683;

    t6 = ((x25%(x26|x27))>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x30 = INT64_MIN;
	int32_t x31 = INT32_MIN;
	static int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -8117437;

    t7 = ((x29%(x30|x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	static uint64_t x34 = 658738392184395LLU;
	static uint16_t x35 = UINT16_MAX;

    t8 = ((x33%(x34|x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 0;
	int32_t x38 = INT32_MIN;
	volatile int64_t x39 = INT64_MIN;
	volatile uint16_t x40 = 1U;
	int32_t t9 = 207;

    t9 = ((x37%(x38|x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x41 = INT16_MIN;
	int32_t x43 = -108889685;
	uint16_t x44 = UINT16_MAX;
	static int32_t t10 = 790140;

    t10 = ((x41%(x42|x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	static int8_t x46 = -6;
	static int8_t x47 = INT8_MIN;
	uint16_t x48 = UINT16_MAX;
	static int32_t t11 = -36038753;

    t11 = ((x45%(x46|x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = 1540U;
	uint64_t x51 = UINT64_MAX;
	static int32_t t12 = -756666771;

    t12 = ((x49%(x50|x51))>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int32_t x54 = INT32_MAX;
	volatile int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	volatile int32_t t13 = -11;

    t13 = ((x53%(x54|x55))>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	volatile int16_t x58 = -2;
	int8_t x59 = -32;
	static volatile int16_t x60 = 126;
	volatile int32_t t14 = 3513;

    t14 = ((x57%(x58|x59))>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	int8_t x62 = INT8_MIN;
	uint32_t x63 = 199291U;
	static int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 413;

    t15 = ((x61%(x62|x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	uint16_t x66 = UINT16_MAX;
	static int8_t x67 = -7;
	int32_t x68 = INT32_MIN;

    t16 = ((x65%(x66|x67))>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = -1;
	int8_t x71 = -60;
	uint32_t x72 = 7U;
	volatile int32_t t17 = 823716558;

    t17 = ((x69%(x70|x71))>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -199;
	uint32_t x74 = 1766461U;
	static int8_t x75 = -22;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t18 = 203485;

    t18 = ((x73%(x74|x75))>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	volatile int16_t x78 = -1;
	uint32_t x79 = UINT32_MAX;
	int32_t x80 = -1;
	int32_t t19 = 7;

    t19 = ((x77%(x78|x79))>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 1U;
	volatile int16_t x82 = INT16_MIN;
	static uint64_t x83 = UINT64_MAX;
	int8_t x84 = -1;
	volatile int32_t t20 = 120627743;

    t20 = ((x81%(x82|x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int64_t x85 = 6288LL;
	static int32_t x86 = INT32_MIN;
	uint64_t x87 = UINT64_MAX;
	uint64_t x88 = 79165124LLU;

    t21 = ((x85%(x86|x87))>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 12U;
	volatile uint8_t x90 = 7U;
	uint64_t x92 = UINT64_MAX;
	int32_t t22 = 4053912;

    t22 = ((x89%(x90|x91))>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint64_t x93 = 162LLU;
	int64_t x94 = INT64_MIN;
	volatile int64_t x96 = -1LL;
	volatile int32_t t23 = -531318956;

    t23 = ((x93%(x94|x95))>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = -58929;
	static uint32_t x99 = 2209987U;
	static uint32_t x100 = 4344U;
	static int32_t t24 = 13158;

    t24 = ((x97%(x98|x99))>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	int8_t x102 = 15;
	static int64_t x103 = -1LL;
	volatile int16_t x104 = -1;
	int32_t t25 = -125;

    t25 = ((x101%(x102|x103))>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MIN;
	static uint32_t x107 = 3158579U;
	int64_t x108 = 131804013701LL;
	int32_t t26 = 1;

    t26 = ((x105%(x106|x107))>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -1LL;
	volatile int16_t x110 = -45;
	volatile int8_t x111 = 18;

    t27 = ((x109%(x110|x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x113 = INT64_MIN;
	int16_t x115 = -1;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 568;

    t28 = ((x113%(x114|x115))>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = -1;
	int8_t x120 = 1;
	volatile int32_t t29 = -9955;

    t29 = ((x117%(x118|x119))>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x123 = -1;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = 517324;

    t30 = ((x121%(x122|x123))>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 3U;
	int32_t x126 = INT32_MAX;
	int32_t x127 = -103751897;
	int32_t x128 = INT32_MIN;
	int32_t t31 = 0;

    t31 = ((x125%(x126|x127))>x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = 0U;
	static uint32_t x130 = UINT32_MAX;
	int8_t x132 = 0;
	int32_t t32 = -725887;

    t32 = ((x129%(x130|x131))>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MIN;
	int64_t x135 = INT64_MIN;
	int32_t t33 = 1497;

    t33 = ((x133%(x134|x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 88U;
	int32_t x138 = -1;
	volatile uint64_t x140 = 12516451LLU;
	volatile int32_t t34 = 224;

    t34 = ((x137%(x138|x139))>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	int32_t x143 = INT32_MIN;
	static int32_t x144 = 879;
	static volatile int32_t t35 = 10700;

    t35 = ((x141%(x142|x143))>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x145 = UINT32_MAX;
	static uint8_t x146 = 26U;
	int64_t x147 = 50379621946LL;

    t36 = ((x145%(x146|x147))>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MAX;
	int32_t x152 = -12;

    t37 = ((x149%(x150|x151))>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = INT8_MAX;
	uint8_t x155 = UINT8_MAX;
	int8_t x156 = INT8_MIN;
	static volatile int32_t t38 = -286;

    t38 = ((x153%(x154|x155))>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -6805;
	static uint8_t x158 = 2U;
	int8_t x160 = -61;
	volatile int32_t t39 = 0;

    t39 = ((x157%(x158|x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x162 = INT64_MIN;
	uint16_t x163 = 3970U;
	int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 2684850;

    t40 = ((x161%(x162|x163))>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 87U;
	volatile uint16_t x166 = UINT16_MAX;
	int32_t x167 = INT32_MAX;
	int32_t t41 = 8020278;

    t41 = ((x165%(x166|x167))>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	uint16_t x171 = UINT16_MAX;
	static int32_t x172 = -1;
	int32_t t42 = 1688386;

    t42 = ((x169%(x170|x171))>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x173 = INT32_MIN;
	volatile int32_t x174 = -1;
	uint8_t x175 = 40U;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t43 = 16;

    t43 = ((x173%(x174|x175))>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	uint32_t x178 = 351449944U;
	uint16_t x179 = UINT16_MAX;
	static volatile int64_t x180 = INT64_MIN;
	int32_t t44 = -108640;

    t44 = ((x177%(x178|x179))>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MAX;
	static int64_t x182 = INT64_MIN;
	int64_t x183 = -1LL;
	int64_t x184 = -1LL;
	volatile int32_t t45 = -476374269;

    t45 = ((x181%(x182|x183))>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x185 = 7U;
	int16_t x186 = INT16_MIN;
	volatile int16_t x187 = INT16_MIN;
	volatile int32_t t46 = 122869;

    t46 = ((x185%(x186|x187))>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = -1;
	uint8_t x191 = 13U;
	static uint8_t x192 = 43U;
	int32_t t47 = 1126;

    t47 = ((x189%(x190|x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = INT32_MIN;
	int64_t x195 = -1LL;
	int64_t x196 = 146794LL;
	volatile int32_t t48 = 274174;

    t48 = ((x193%(x194|x195))>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 8693897575723707158LLU;
	int32_t x199 = INT32_MIN;
	static int16_t x200 = INT16_MIN;
	static volatile int32_t t49 = 9764882;

    t49 = ((x197%(x198|x199))>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -1LL;
	int64_t x202 = INT64_MIN;
	int32_t x203 = INT32_MIN;
	volatile int8_t x204 = -4;

    t50 = ((x201%(x202|x203))>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = 125042646;
	int64_t x206 = -1LL;
	int32_t x207 = INT32_MIN;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = 41116;

    t51 = ((x205%(x206|x207))>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MAX;
	volatile int64_t x211 = INT64_MIN;
	uint8_t x212 = 5U;

    t52 = ((x209%(x210|x211))>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 524103LLU;
	volatile int32_t x214 = -1;
	uint64_t x216 = 4120759377783100LLU;
	int32_t t53 = 20;

    t53 = ((x213%(x214|x215))>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x218 = INT64_MIN;
	static volatile uint32_t x219 = 256514538U;
	volatile int16_t x220 = -2;
	int32_t t54 = 27;

    t54 = ((x217%(x218|x219))>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = UINT32_MAX;
	volatile int16_t x222 = -1;
	int8_t x224 = INT8_MIN;

    t55 = ((x221%(x222|x223))>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x226 = INT16_MIN;
	int32_t x227 = INT32_MIN;
	static int64_t x228 = INT64_MIN;
	int32_t t56 = -30615882;

    t56 = ((x225%(x226|x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = 1598088174187LL;
	int32_t x230 = -2;
	int8_t x232 = 12;
	volatile int32_t t57 = -32662;

    t57 = ((x229%(x230|x231))>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x234 = UINT16_MAX;
	int8_t x235 = INT8_MAX;
	int32_t x236 = 10;
	volatile int32_t t58 = -3;

    t58 = ((x233%(x234|x235))>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = 640148252186569689LL;
	static uint64_t x239 = 6523466231156LLU;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -25390266;

    t59 = ((x237%(x238|x239))>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint32_t x241 = UINT32_MAX;
	volatile uint8_t x243 = 3U;
	int32_t t60 = 763;

    t60 = ((x241%(x242|x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint16_t x245 = 83U;
	uint16_t x246 = 122U;
	int32_t x247 = -676464;
	volatile int32_t t61 = 221;

    t61 = ((x245%(x246|x247))>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x249 = -1LL;
	int16_t x250 = 300;
	static uint64_t x251 = 158786LLU;
	int32_t x252 = -949;
	static volatile int32_t t62 = -125887507;

    t62 = ((x249%(x250|x251))>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	uint8_t x254 = UINT8_MAX;
	int64_t x255 = -1LL;
	int64_t x256 = -26LL;
	int32_t t63 = 17851081;

    t63 = ((x253%(x254|x255))>x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 1U;
	static int64_t x258 = INT64_MIN;
	uint32_t x259 = 8801321U;
	volatile int32_t x260 = INT32_MAX;
	volatile int32_t t64 = 1107;

    t64 = ((x257%(x258|x259))>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	int64_t x262 = INT64_MIN;
	int32_t x263 = 1436151;
	int64_t x264 = -1LL;
	static int32_t t65 = 1311;

    t65 = ((x261%(x262|x263))>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	uint16_t x266 = 31508U;
	static int64_t x267 = -2261211237310935010LL;
	uint64_t x268 = 5106258768498LLU;
	volatile int32_t t66 = 226957115;

    t66 = ((x265%(x266|x267))>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MIN;
	static int64_t x270 = -4168542361LL;
	int64_t x272 = INT64_MIN;
	int32_t t67 = 207;

    t67 = ((x269%(x270|x271))>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = INT8_MIN;
	int8_t x275 = -1;
	static uint32_t x276 = 223184U;
	volatile int32_t t68 = 0;

    t68 = ((x273%(x274|x275))>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = -29;
	int32_t x278 = -415779;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MAX;

    t69 = ((x277%(x278|x279))>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = INT32_MAX;
	int64_t x282 = -1LL;
	int16_t x283 = INT16_MIN;
	int32_t t70 = -434;

    t70 = ((x281%(x282|x283))>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 60;
	int32_t x286 = INT32_MIN;
	volatile uint32_t x287 = 43U;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t71 = 5405;

    t71 = ((x285%(x286|x287))>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x289 = INT64_MIN;
	uint8_t x290 = 2U;
	int32_t x291 = INT32_MIN;
	volatile int32_t t72 = -414046;

    t72 = ((x289%(x290|x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 149U;
	volatile uint16_t x294 = UINT16_MAX;
	int16_t x295 = INT16_MAX;
	int64_t x296 = INT64_MAX;

    t73 = ((x293%(x294|x295))>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	int8_t x299 = -1;

    t74 = ((x297%(x298|x299))>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = INT32_MAX;
	int32_t x302 = INT32_MAX;
	int64_t x303 = INT64_MIN;
	volatile int8_t x304 = INT8_MIN;

    t75 = ((x301%(x302|x303))>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 3451U;
	uint16_t x306 = 29U;
	uint8_t x307 = 43U;

    t76 = ((x305%(x306|x307))>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x309 = 900U;
	int8_t x310 = -1;
	int8_t x312 = -60;
	int32_t t77 = 1354;

    t77 = ((x309%(x310|x311))>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = UINT32_MAX;
	uint64_t x314 = UINT64_MAX;
	static uint8_t x315 = UINT8_MAX;
	static volatile int32_t x316 = INT32_MIN;
	static volatile int32_t t78 = -3;

    t78 = ((x313%(x314|x315))>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x318 = INT32_MAX;
	uint64_t x320 = 8399896512281453955LLU;
	volatile int32_t t79 = -410762;

    t79 = ((x317%(x318|x319))>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = INT32_MIN;
	static uint64_t x322 = 4298121560296LLU;
	int32_t x323 = 6172;
	uint8_t x324 = 10U;
	int32_t t80 = 443288;

    t80 = ((x321%(x322|x323))>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = 43;
	int8_t x326 = -2;
	uint8_t x327 = UINT8_MAX;
	uint8_t x328 = 7U;
	int32_t t81 = -64;

    t81 = ((x325%(x326|x327))>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x329 = INT8_MIN;
	static uint8_t x331 = 1U;
	uint64_t x332 = 19411176529613095LLU;
	volatile int32_t t82 = 259;

    t82 = ((x329%(x330|x331))>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = INT64_MIN;
	int64_t x335 = -2616519LL;
	static int32_t x336 = INT32_MAX;

    t83 = ((x333%(x334|x335))>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x338 = 7;
	static volatile uint8_t x339 = 78U;
	int32_t x340 = INT32_MIN;
	int32_t t84 = -11323;

    t84 = ((x337%(x338|x339))>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	int32_t x342 = INT32_MIN;
	uint8_t x343 = 31U;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 181239983;

    t85 = ((x341%(x342|x343))>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	uint32_t x346 = UINT32_MAX;
	volatile uint16_t x347 = UINT16_MAX;
	int16_t x348 = 83;
	int32_t t86 = -221;

    t86 = ((x345%(x346|x347))>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = INT8_MAX;
	volatile uint64_t x350 = 5828318195520652LLU;
	static int16_t x351 = -5987;
	volatile int32_t t87 = -154;

    t87 = ((x349%(x350|x351))>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x353 = UINT16_MAX;
	int8_t x354 = -1;
	int16_t x355 = -1;
	uint32_t x356 = UINT32_MAX;
	int32_t t88 = -3424113;

    t88 = ((x353%(x354|x355))>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MAX;
	volatile uint16_t x358 = 1874U;
	volatile int32_t x359 = -1377712;
	static int32_t x360 = INT32_MIN;

    t89 = ((x357%(x358|x359))>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = -1LL;
	static int8_t x362 = INT8_MIN;
	int64_t x363 = INT64_MAX;
	int32_t t90 = -29901;

    t90 = ((x361%(x362|x363))>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MAX;
	static int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MIN;
	int32_t x368 = 3548108;

    t91 = ((x365%(x366|x367))>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x370 = INT64_MIN;
	int32_t x371 = -1;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = -1845485;

    t92 = ((x369%(x370|x371))>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint8_t x373 = 29U;
	uint32_t x374 = UINT32_MAX;

    t93 = ((x373%(x374|x375))>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = UINT8_MAX;
	volatile uint64_t x378 = UINT64_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t94 = -32;

    t94 = ((x377%(x378|x379))>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = -4;
	static int64_t x382 = INT64_MAX;
	static volatile uint16_t x383 = UINT16_MAX;
	uint32_t x384 = 5U;
	volatile int32_t t95 = 179949;

    t95 = ((x381%(x382|x383))>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = -3900LL;
	static volatile int64_t x386 = -1LL;
	static volatile int16_t x387 = -87;
	uint32_t x388 = UINT32_MAX;
	volatile int32_t t96 = 5842953;

    t96 = ((x385%(x386|x387))>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = INT16_MAX;
	uint64_t x390 = 107739236801565830LLU;
	volatile int16_t x391 = -1;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = 1;

    t97 = ((x389%(x390|x391))>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x394 = UINT32_MAX;
	volatile int32_t t98 = -74677;

    t98 = ((x393%(x394|x395))>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = 0;
	int8_t x398 = 14;
	volatile uint16_t x399 = UINT16_MAX;
	volatile int32_t t99 = 1779095;

    t99 = ((x397%(x398|x399))>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 598597113165LLU;
	volatile uint8_t x403 = 3U;
	int16_t x404 = -47;
	int32_t t100 = 2887742;

    t100 = ((x401%(x402|x403))>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	static int32_t x406 = INT32_MAX;
	int64_t x407 = INT64_MAX;
	static int32_t t101 = 3197176;

    t101 = ((x405%(x406|x407))>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x409 = INT8_MAX;
	volatile int16_t x411 = INT16_MAX;
	int64_t x412 = -1LL;

    t102 = ((x409%(x410|x411))>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	uint64_t x414 = UINT64_MAX;
	volatile int8_t x416 = INT8_MIN;

    t103 = ((x413%(x414|x415))>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -178;
	uint64_t x418 = 669928861LLU;
	uint8_t x419 = 2U;
	static int64_t x420 = 135655873204465686LL;
	int32_t t104 = -3846168;

    t104 = ((x417%(x418|x419))>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 26U;
	volatile uint64_t x422 = 5717009889LLU;
	uint8_t x424 = UINT8_MAX;
	static volatile int32_t t105 = -133;

    t105 = ((x421%(x422|x423))>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 2U;
	int32_t x426 = -1;
	int8_t x427 = -1;
	volatile int64_t x428 = -1LL;
	volatile int32_t t106 = 1023;

    t106 = ((x425%(x426|x427))>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -1;
	int64_t x430 = -8455898212LL;
	int16_t x431 = 1;
	int16_t x432 = 1;
	volatile int32_t t107 = -578427732;

    t107 = ((x429%(x430|x431))>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = INT64_MIN;
	int16_t x435 = -1;
	static volatile uint64_t x436 = UINT64_MAX;

    t108 = ((x433%(x434|x435))>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 59U;
	uint32_t x438 = 85788085U;
	static uint64_t x439 = UINT64_MAX;

    t109 = ((x437%(x438|x439))>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x442 = INT8_MIN;
	int8_t x443 = -1;
	volatile uint32_t x444 = UINT32_MAX;
	int32_t t110 = -113;

    t110 = ((x441%(x442|x443))>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 111U;
	int8_t x446 = INT8_MIN;
	volatile int16_t x448 = INT16_MAX;

    t111 = ((x445%(x446|x447))>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x450 = INT32_MIN;
	int64_t x451 = 909705620433598LL;
	int32_t x452 = 1;
	int32_t t112 = -11;

    t112 = ((x449%(x450|x451))>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MAX;
	int64_t x454 = INT64_MIN;
	int32_t x455 = INT32_MAX;
	int64_t x456 = -213839833LL;
	int32_t t113 = 14216;

    t113 = ((x453%(x454|x455))>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x457 = 34376177;
	volatile int16_t x458 = INT16_MAX;
	volatile int8_t x459 = 1;
	volatile uint16_t x460 = 14U;
	int32_t t114 = -231824229;

    t114 = ((x457%(x458|x459))>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x461 = 6U;

    t115 = ((x461%(x462|x463))>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x466 = INT64_MIN;
	static int32_t x467 = INT32_MIN;
	uint64_t x468 = 6302069LLU;
	volatile int32_t t116 = -167450810;

    t116 = ((x465%(x466|x467))>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = UINT32_MAX;
	int32_t x470 = 1;
	int64_t x472 = -342LL;
	int32_t t117 = -2;

    t117 = ((x469%(x470|x471))>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = 0LL;
	int64_t x474 = INT64_MAX;
	static uint16_t x475 = UINT16_MAX;
	int32_t t118 = -29165504;

    t118 = ((x473%(x474|x475))>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 0U;
	volatile int8_t x479 = -1;
	volatile int32_t t119 = 0;

    t119 = ((x477%(x478|x479))>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	int16_t x482 = -13;
	int8_t x483 = -17;
	int32_t x484 = -1;
	int32_t t120 = -131174060;

    t120 = ((x481%(x482|x483))>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	uint16_t x487 = UINT16_MAX;
	uint16_t x488 = 318U;
	int32_t t121 = -445739;

    t121 = ((x485%(x486|x487))>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x490 = -68;
	static volatile uint16_t x491 = UINT16_MAX;
	volatile int32_t t122 = -834513;

    t122 = ((x489%(x490|x491))>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 58431U;
	int32_t x494 = INT32_MIN;
	int16_t x495 = 6;
	static int32_t t123 = -34975;

    t123 = ((x493%(x494|x495))>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = INT64_MIN;
	uint64_t x498 = 62LLU;
	uint16_t x499 = 591U;
	int16_t x500 = INT16_MAX;
	volatile int32_t t124 = 1054235199;

    t124 = ((x497%(x498|x499))>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x501 = -1LL;
	static int8_t x502 = INT8_MIN;
	static volatile int16_t x503 = INT16_MAX;
	static int32_t x504 = INT32_MAX;
	int32_t t125 = -3;

    t125 = ((x501%(x502|x503))>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 793489104LLU;
	uint32_t x506 = 8U;
	static int8_t x507 = INT8_MAX;
	int16_t x508 = -1;
	static int32_t t126 = 554;

    t126 = ((x505%(x506|x507))>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -2749095083LL;
	int8_t x510 = INT8_MAX;
	volatile int64_t x511 = -1443841LL;
	uint16_t x512 = UINT16_MAX;
	volatile int32_t t127 = 1041291899;

    t127 = ((x509%(x510|x511))>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x514 = INT16_MIN;
	int16_t x515 = INT16_MIN;
	volatile int32_t t128 = -475990871;

    t128 = ((x513%(x514|x515))>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	uint64_t x518 = 1703670335LLU;
	uint16_t x519 = UINT16_MAX;
	int16_t x520 = INT16_MIN;
	int32_t t129 = -48098;

    t129 = ((x517%(x518|x519))>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x521 = INT8_MIN;
	static uint64_t x522 = 52367598LLU;
	int32_t x524 = 425882408;
	int32_t t130 = -13;

    t130 = ((x521%(x522|x523))>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x525 = UINT16_MAX;
	volatile int64_t x527 = 1589893760755816LL;
	uint8_t x528 = UINT8_MAX;
	int32_t t131 = 13;

    t131 = ((x525%(x526|x527))>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -1;
	int8_t x530 = -1;
	int32_t x532 = INT32_MAX;
	volatile int32_t t132 = -182598;

    t132 = ((x529%(x530|x531))>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x534 = 8981528262301003LL;
	volatile int32_t t133 = -3516101;

    t133 = ((x533%(x534|x535))>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x538 = INT16_MAX;
	volatile int64_t x539 = 1386921175393248LL;
	int16_t x540 = INT16_MIN;
	int32_t t134 = -1588802;

    t134 = ((x537%(x538|x539))>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	static int32_t t135 = 3646;

    t135 = ((x541%(x542|x543))>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = -1;
	uint64_t x546 = 6235033024LLU;
	static uint64_t x547 = UINT64_MAX;
	volatile int32_t t136 = -34;

    t136 = ((x545%(x546|x547))>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x550 = -3029015;
	int16_t x551 = 3;
	int64_t x552 = INT64_MIN;
	volatile int32_t t137 = -5;

    t137 = ((x549%(x550|x551))>x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = INT16_MIN;
	volatile int8_t x554 = -1;
	static volatile int64_t x555 = -1LL;
	int8_t x556 = -16;
	int32_t t138 = 654029;

    t138 = ((x553%(x554|x555))>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 12U;
	static int16_t x558 = 12831;
	uint64_t x559 = UINT64_MAX;
	uint8_t x560 = 1U;
	int32_t t139 = 27844;

    t139 = ((x557%(x558|x559))>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 3U;
	static int32_t x562 = 3842;
	static uint64_t x563 = 5136711266LLU;
	int8_t x564 = 10;
	static int32_t t140 = 777807943;

    t140 = ((x561%(x562|x563))>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	int8_t x568 = 2;
	volatile int32_t t141 = -408186;

    t141 = ((x565%(x566|x567))>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint8_t x569 = 0U;
	int8_t x572 = INT8_MIN;
	int32_t t142 = 5471684;

    t142 = ((x569%(x570|x571))>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	uint8_t x575 = 0U;

    t143 = ((x573%(x574|x575))>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MAX;
	int64_t x578 = -48066705483543961LL;
	static int64_t x579 = INT64_MAX;
	int16_t x580 = INT16_MIN;

    t144 = ((x577%(x578|x579))>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = UINT8_MAX;
	int8_t x582 = INT8_MIN;
	int16_t x583 = INT16_MIN;
	int64_t x584 = -344LL;
	volatile int32_t t145 = 22793948;

    t145 = ((x581%(x582|x583))>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x585 = UINT16_MAX;
	uint16_t x586 = UINT16_MAX;
	int8_t x587 = -1;
	int32_t x588 = -8164;
	volatile int32_t t146 = -1013;

    t146 = ((x585%(x586|x587))>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MAX;
	int8_t x590 = INT8_MAX;
	uint16_t x591 = 11500U;
	uint8_t x592 = 1U;
	int32_t t147 = 1610;

    t147 = ((x589%(x590|x591))>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -1;
	volatile int64_t x596 = INT64_MAX;
	static int32_t t148 = 9617;

    t148 = ((x593%(x594|x595))>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x597 = 0U;
	int8_t x598 = INT8_MAX;
	int64_t x599 = -1LL;
	uint16_t x600 = 28273U;
	int32_t t149 = 20957;

    t149 = ((x597%(x598|x599))>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = -1;
	int8_t x602 = -12;
	int16_t x603 = INT16_MIN;
	static volatile int8_t x604 = 10;
	int32_t t150 = 2;

    t150 = ((x601%(x602|x603))>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x606 = 1;
	int16_t x608 = INT16_MIN;
	volatile int32_t t151 = 853988;

    t151 = ((x605%(x606|x607))>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	uint32_t x611 = 5U;
	static volatile int64_t x612 = -1170065LL;
	int32_t t152 = -4662961;

    t152 = ((x609%(x610|x611))>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -1;
	uint64_t x616 = 3631871868150LLU;

    t153 = ((x613%(x614|x615))>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = INT8_MIN;
	int16_t x618 = -1;
	volatile int8_t x620 = -1;

    t154 = ((x617%(x618|x619))>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MAX;
	int8_t x622 = INT8_MAX;
	int32_t x623 = 3;
	static uint64_t x624 = 14LLU;
	int32_t t155 = -1;

    t155 = ((x621%(x622|x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -13301;
	int32_t x626 = INT32_MAX;
	uint16_t x627 = 5866U;
	volatile int32_t t156 = -1475;

    t156 = ((x625%(x626|x627))>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x630 = 0LL;
	static int32_t x631 = INT32_MAX;
	static uint64_t x632 = 4518145584873122025LLU;

    t157 = ((x629%(x630|x631))>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MAX;
	int64_t x634 = -334371691LL;
	static volatile int32_t x635 = INT32_MIN;
	int32_t t158 = -12739;

    t158 = ((x633%(x634|x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -37;
	uint8_t x638 = UINT8_MAX;
	int16_t x639 = -33;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t159 = -7;

    t159 = ((x637%(x638|x639))>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	static uint64_t x642 = 69094980732517LLU;
	static int64_t x643 = INT64_MIN;
	int16_t x644 = INT16_MAX;
	int32_t t160 = 992;

    t160 = ((x641%(x642|x643))>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = INT32_MIN;
	int64_t x646 = -39912189180LL;
	static int16_t x647 = 1537;
	static int32_t t161 = 222;

    t161 = ((x645%(x646|x647))>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = 155U;
	uint64_t x650 = 415260LLU;
	volatile uint16_t x651 = UINT16_MAX;
	int32_t t162 = -23732621;

    t162 = ((x649%(x650|x651))>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	int32_t x654 = INT32_MIN;
	int32_t x655 = 39502;
	int8_t x656 = -1;
	volatile int32_t t163 = -13;

    t163 = ((x653%(x654|x655))>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x657 = 436U;
	static int32_t x659 = INT32_MIN;
	int8_t x660 = 5;
	volatile int32_t t164 = 534777180;

    t164 = ((x657%(x658|x659))>x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 30595490149674LLU;
	uint8_t x662 = UINT8_MAX;
	int16_t x663 = INT16_MIN;
	int32_t t165 = 9;

    t165 = ((x661%(x662|x663))>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 4U;
	static volatile int16_t x666 = -1;
	static int32_t x667 = -22617299;
	volatile int32_t x668 = 25;
	volatile int32_t t166 = -128870266;

    t166 = ((x665%(x666|x667))>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	int16_t x670 = -167;
	volatile int64_t x671 = INT64_MIN;
	int64_t x672 = INT64_MAX;
	volatile int32_t t167 = -3087;

    t167 = ((x669%(x670|x671))>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x674 = INT16_MAX;
	volatile int32_t x675 = 295917;
	int16_t x676 = -1;

    t168 = ((x673%(x674|x675))>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = -1LL;
	int8_t x678 = 0;
	volatile int64_t x679 = INT64_MAX;
	volatile int8_t x680 = -5;
	static volatile int32_t t169 = 1415589;

    t169 = ((x677%(x678|x679))>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x681 = INT32_MIN;
	static int8_t x683 = -6;
	int32_t t170 = -1013;

    t170 = ((x681%(x682|x683))>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x685 = -1;
	int16_t x686 = INT16_MIN;
	int64_t x687 = -9291454LL;
	int32_t t171 = 7770816;

    t171 = ((x685%(x686|x687))>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = INT64_MAX;
	uint32_t x690 = 68179156U;
	volatile uint8_t x691 = 30U;
	int32_t x692 = INT32_MIN;
	static volatile int32_t t172 = -329;

    t172 = ((x689%(x690|x691))>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x694 = INT8_MIN;
	uint64_t x695 = 1568679256070351291LLU;
	static volatile uint64_t x696 = UINT64_MAX;
	volatile int32_t t173 = -55;

    t173 = ((x693%(x694|x695))>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x698 = -40728486;
	int16_t x699 = 54;
	int16_t x700 = INT16_MAX;
	volatile int32_t t174 = 46761;

    t174 = ((x697%(x698|x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 216115283LLU;
	int32_t x702 = INT32_MIN;
	int32_t x704 = INT32_MAX;
	volatile int32_t t175 = 30;

    t175 = ((x701%(x702|x703))>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -9615575263698LL;
	static int32_t x706 = -30473541;
	uint32_t x707 = 10968361U;
	int16_t x708 = INT16_MIN;
	static int32_t t176 = 48;

    t176 = ((x705%(x706|x707))>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 1U;
	static int8_t x710 = INT8_MIN;
	int32_t x711 = -6467;
	int16_t x712 = -5;
	static volatile int32_t t177 = 36407016;

    t177 = ((x709%(x710|x711))>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	volatile int32_t x716 = INT32_MIN;
	int32_t t178 = -79;

    t178 = ((x713%(x714|x715))>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x717 = INT64_MIN;
	int64_t x718 = 28266493900696LL;
	int8_t x719 = 44;
	static int64_t x720 = INT64_MAX;
	volatile int32_t t179 = -4323;

    t179 = ((x717%(x718|x719))>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = 10109930709LL;
	int64_t x722 = -1LL;
	uint32_t x723 = 51214U;
	int64_t x724 = INT64_MAX;
	static int32_t t180 = 164;

    t180 = ((x721%(x722|x723))>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	static volatile uint64_t x726 = UINT64_MAX;
	int32_t x727 = -1;
	uint16_t x728 = 196U;

    t181 = ((x725%(x726|x727))>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x729 = INT16_MAX;
	volatile int32_t x730 = -1;
	static int8_t x732 = 0;
	static volatile int32_t t182 = 14;

    t182 = ((x729%(x730|x731))>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	int16_t x734 = INT16_MIN;
	uint32_t x735 = 113U;
	int16_t x736 = 98;

    t183 = ((x733%(x734|x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x739 = INT8_MAX;
	static volatile int32_t t184 = 0;

    t184 = ((x737%(x738|x739))>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x742 = INT64_MIN;
	volatile int16_t x744 = INT16_MAX;
	volatile int32_t t185 = -4739;

    t185 = ((x741%(x742|x743))>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	volatile uint64_t x746 = 547027393937679LLU;
	static int32_t x747 = INT32_MAX;
	static int16_t x748 = INT16_MIN;
	static int32_t t186 = -53;

    t186 = ((x745%(x746|x747))>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x749 = -18;
	int32_t x750 = INT32_MAX;
	volatile int8_t x751 = INT8_MIN;
	static volatile int32_t t187 = 50982;

    t187 = ((x749%(x750|x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = INT32_MAX;
	int8_t x756 = 14;
	static int32_t t188 = -45;

    t188 = ((x753%(x754|x755))>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x757 = INT16_MIN;
	int64_t x758 = 126429323048377LL;
	int8_t x759 = -1;
	volatile uint16_t x760 = 8800U;
	int32_t t189 = -105119025;

    t189 = ((x757%(x758|x759))>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = 14074736967736LL;
	int64_t x762 = -16LL;
	uint8_t x763 = 15U;
	volatile int32_t t190 = 5179;

    t190 = ((x761%(x762|x763))>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x766 = -1;
	volatile int16_t x767 = -86;
	int8_t x768 = -1;
	volatile int32_t t191 = 0;

    t191 = ((x765%(x766|x767))>x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 6U;
	static int32_t x770 = INT32_MAX;
	int32_t t192 = 1;

    t192 = ((x769%(x770|x771))>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = INT8_MAX;
	volatile int8_t x775 = 13;
	volatile int64_t x776 = 141671569LL;
	static int32_t t193 = -1698312;

    t193 = ((x773%(x774|x775))>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -16375;
	uint64_t x779 = 473LLU;
	int32_t t194 = 18;

    t194 = ((x777%(x778|x779))>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = 15;
	volatile int64_t x782 = 868961237626369LL;
	uint8_t x783 = 6U;
	int8_t x784 = INT8_MIN;
	volatile int32_t t195 = 52519417;

    t195 = ((x781%(x782|x783))>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = 12;
	uint16_t x786 = 12334U;
	int16_t x787 = 291;
	volatile int64_t x788 = -542960312LL;
	volatile int32_t t196 = -1;

    t196 = ((x785%(x786|x787))>x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	int16_t x790 = -5;
	static uint64_t x791 = UINT64_MAX;
	int32_t t197 = -1;

    t197 = ((x789%(x790|x791))>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	int8_t x794 = -1;
	static int32_t x795 = -1;
	static volatile int32_t x796 = -786002;

    t198 = ((x793%(x794|x795))>x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = 0;
	volatile int8_t x798 = -1;
	uint64_t x800 = 474LLU;
	static int32_t t199 = -36;

    t199 = ((x797%(x798|x799))>x800);

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

