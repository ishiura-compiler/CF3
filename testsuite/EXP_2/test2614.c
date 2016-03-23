
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

static int64_t x2 = INT64_MIN;
uint8_t x4 = 1U;
volatile int32_t t0 = 0;
int32_t t2 = 0;
volatile int32_t t3 = 6678311;
int32_t x21 = 0;
static int64_t x31 = INT64_MAX;
int32_t t7 = 447618;
int32_t t9 = 26851;
uint64_t x41 = 11148565601768912LLU;
int16_t x45 = INT16_MIN;
int32_t x50 = 1944;
volatile int32_t t12 = -7323;
volatile uint16_t x54 = 753U;
volatile int8_t x55 = 11;
static volatile int16_t x64 = -1;
volatile int32_t t15 = -33307365;
int64_t x73 = 989372LL;
int64_t x81 = INT64_MIN;
static int32_t t20 = 21;
volatile int32_t t21 = 26250064;
int32_t x89 = INT32_MIN;
volatile int32_t x93 = INT32_MAX;
volatile int64_t x96 = INT64_MAX;
int32_t x101 = -1;
uint8_t x108 = 3U;
static volatile uint16_t x112 = 3U;
static volatile int8_t x129 = INT8_MIN;
int64_t x152 = 21204073290292LL;
int32_t t35 = 88748975;
int64_t x154 = INT64_MIN;
int64_t x156 = -16171551187LL;
static volatile int32_t x159 = INT32_MIN;
volatile int32_t t37 = 1115;
int8_t x170 = -1;
int32_t t40 = 7;
int8_t x175 = INT8_MAX;
int64_t x181 = -1LL;
volatile uint8_t x186 = 28U;
volatile int32_t x193 = INT32_MIN;
volatile uint64_t x198 = UINT64_MAX;
int32_t x200 = INT32_MIN;
int64_t x202 = -1LL;
int32_t t47 = -92238819;
int32_t x220 = INT32_MIN;
volatile int32_t t51 = 2031;
static uint8_t x223 = 0U;
int64_t x227 = INT64_MIN;
int32_t x231 = 0;
volatile int32_t t54 = 2634;
int64_t x233 = 5286114626414541LL;
int32_t t55 = -130470510;
volatile int32_t x242 = -1273;
int64_t x245 = INT64_MAX;
uint32_t x246 = 89928605U;
int32_t t58 = 489;
volatile uint16_t x250 = UINT16_MAX;
uint16_t x252 = 3U;
static int32_t t59 = -1840;
uint32_t x256 = 403U;
volatile uint8_t x263 = UINT8_MAX;
volatile uint8_t x268 = 6U;
int64_t x279 = INT64_MIN;
int32_t t69 = 57931238;
int64_t x300 = INT64_MAX;
int32_t t71 = 8515077;
static int64_t x304 = -208LL;
int16_t x306 = -153;
int32_t x312 = INT32_MIN;
volatile int32_t t77 = -1;
int64_t x334 = -90949LL;
static int32_t x337 = -1;
int8_t x338 = INT8_MAX;
static int16_t x340 = INT16_MIN;
int64_t x346 = 540360707435LL;
volatile int32_t t84 = -456814;
volatile int32_t t86 = 73;
int64_t x364 = -1LL;
volatile int32_t t87 = 86310;
int8_t x371 = -10;
int16_t x373 = INT16_MIN;
volatile int32_t t91 = 2;
volatile int32_t t92 = -2004369;
int16_t x392 = 5519;
int8_t x394 = -10;
uint8_t x400 = 10U;
static int32_t t96 = 214228768;
int64_t x409 = INT64_MIN;
int16_t x415 = -1;
volatile uint8_t x416 = UINT8_MAX;
static int8_t x420 = INT8_MAX;
int64_t x423 = INT64_MIN;
volatile int32_t t101 = 601731016;
uint32_t x431 = 1179947U;
static uint8_t x433 = UINT8_MAX;
int32_t x436 = INT32_MAX;
int32_t t104 = -3;
volatile int32_t x444 = INT32_MAX;
volatile int8_t x452 = INT8_MIN;
volatile int8_t x454 = -1;
volatile int32_t t112 = 196108256;
int8_t x477 = 37;
int8_t x478 = INT8_MAX;
volatile int32_t t114 = -628279590;
volatile int16_t x486 = INT16_MIN;
static volatile int32_t t115 = 2174102;
int64_t x497 = INT64_MIN;
volatile int8_t x506 = -1;
int32_t t120 = -11963;
int8_t x514 = 28;
static uint8_t x516 = 1U;
volatile int32_t t121 = -413085025;
volatile uint64_t x519 = 56481355129LLU;
static int16_t x524 = -123;
static uint8_t x526 = UINT8_MAX;
static int32_t t124 = 4527;
int16_t x530 = INT16_MAX;
uint8_t x540 = 53U;
volatile int64_t x548 = INT64_MIN;
int64_t x551 = -829702592842LL;
static int16_t x552 = -1;
volatile int16_t x564 = INT16_MAX;
int32_t t132 = -443;
int8_t x565 = INT8_MIN;
int64_t x567 = INT64_MAX;
uint32_t x596 = 136400U;
static uint32_t x599 = 433656530U;
static int64_t x601 = -1LL;
static uint16_t x611 = 32U;
uint16_t x613 = UINT16_MAX;
int32_t t144 = 993;
int8_t x617 = INT8_MIN;
static int8_t x620 = -1;
static int32_t t145 = -52926;
uint64_t x637 = UINT64_MAX;
volatile uint64_t x647 = 7795LLU;
int16_t x648 = INT16_MIN;
int8_t x656 = -23;
volatile int32_t t156 = 31890187;
uint64_t x669 = 438992107249LLU;
uint8_t x671 = 3U;
int32_t x672 = INT32_MIN;
int32_t x674 = 49;
volatile int32_t t158 = -1689;
volatile int32_t t159 = -26286;
static uint8_t x683 = UINT8_MAX;
int32_t x684 = INT32_MIN;
int32_t t160 = 898788965;
int32_t x693 = INT32_MAX;
volatile int32_t t163 = -351108442;
int16_t x698 = 20;
int8_t x701 = -1;
volatile uint64_t x703 = 40260178553536LLU;
static volatile int32_t t165 = 115;
uint64_t x710 = UINT64_MAX;
int32_t x716 = INT32_MIN;
uint16_t x724 = UINT16_MAX;
volatile uint8_t x740 = UINT8_MAX;
uint64_t x745 = 5327632177734238717LLU;
volatile uint32_t x751 = UINT32_MAX;
uint64_t x752 = UINT64_MAX;
uint64_t x756 = 77LLU;
int32_t x757 = -540785069;
int32_t t179 = 15593632;
uint16_t x767 = UINT16_MAX;
static int32_t x769 = -1;
volatile int32_t t182 = 159447;
int16_t x773 = -1;
volatile int16_t x783 = -1;
volatile int32_t t185 = -129;
int16_t x792 = INT16_MIN;
static int64_t x793 = INT64_MIN;
uint16_t x794 = UINT16_MAX;
uint16_t x811 = 3U;
uint32_t x813 = 886497U;
int64_t x818 = 389099811938867LL;
int16_t x819 = -1;
int64_t x822 = INT64_MAX;
int32_t t194 = -807;
int8_t x833 = 22;
uint64_t x834 = UINT64_MAX;
uint64_t x835 = 150080573968764533LLU;
static int32_t x837 = -16;
int16_t x840 = 11685;
uint32_t x841 = 41059U;


void f0(void) {
    	int32_t x1 = -1;
	static uint8_t x3 = 2U;

    t0 = ((x1%(x2^x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = 31286;
	uint8_t x6 = UINT8_MAX;
	static volatile int16_t x7 = INT16_MIN;
	uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = 127053893;

    t1 = ((x5%(x6^x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 6U;
	int64_t x10 = -336666293412545LL;
	int64_t x11 = -1222077129872274335LL;
	static volatile int16_t x12 = INT16_MAX;

    t2 = ((x9%(x10^x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int8_t x14 = 0;
	static int8_t x15 = INT8_MIN;
	static int16_t x16 = INT16_MIN;

    t3 = ((x13%(x14^x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MIN;
	uint32_t x18 = UINT32_MAX;
	volatile int32_t x19 = INT32_MIN;
	static int8_t x20 = INT8_MIN;
	int32_t t4 = 435425;

    t4 = ((x17%(x18^x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x22 = 23213707635LLU;
	int8_t x23 = -1;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -1;

    t5 = ((x21%(x22^x23))<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = -1;
	static uint32_t x26 = 42153U;
	int16_t x27 = INT16_MIN;
	int64_t x28 = -69873778626418LL;
	int32_t t6 = 1;

    t6 = ((x25%(x26^x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 1481U;
	volatile int32_t x30 = INT32_MAX;
	static int64_t x32 = INT64_MIN;

    t7 = ((x29%(x30^x31))<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	volatile int8_t x34 = 0;
	static int64_t x35 = INT64_MIN;
	volatile int64_t x36 = INT64_MIN;
	int32_t t8 = 596939;

    t8 = ((x33%(x34^x35))<=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	int64_t x38 = -197536216454565LL;
	uint8_t x39 = 11U;
	uint16_t x40 = 9225U;

    t9 = ((x37%(x38^x39))<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = INT64_MIN;
	uint32_t x43 = 16231U;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 106938;

    t10 = ((x41%(x42^x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x46 = INT64_MIN;
	static volatile int32_t x47 = -1;
	uint32_t x48 = 948U;
	volatile int32_t t11 = -72127;

    t11 = ((x45%(x46^x47))<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 7;
	uint8_t x51 = 0U;
	int16_t x52 = INT16_MIN;

    t12 = ((x49%(x50^x51))<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 3U;
	volatile int64_t x56 = 91810815232278437LL;
	volatile int32_t t13 = 80434;

    t13 = ((x53%(x54^x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 102U;
	uint32_t x58 = 96727167U;
	static uint8_t x59 = 101U;
	int64_t x60 = INT64_MIN;
	int32_t t14 = -86264456;

    t14 = ((x57%(x58^x59))<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 3U;
	int16_t x62 = INT16_MIN;
	int32_t x63 = 5;

    t15 = ((x61%(x62^x63))<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	int8_t x66 = -1;
	int64_t x67 = -3932LL;
	volatile int64_t x68 = INT64_MIN;
	int32_t t16 = 19349433;

    t16 = ((x65%(x66^x67))<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 15LLU;
	int16_t x70 = INT16_MIN;
	volatile int8_t x71 = -1;
	uint32_t x72 = 223U;
	static int32_t t17 = 249;

    t17 = ((x69%(x70^x71))<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = INT8_MAX;
	int64_t x75 = INT64_MIN;
	int32_t x76 = INT32_MIN;
	static int32_t t18 = -9795627;

    t18 = ((x73%(x74^x75))<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	uint8_t x78 = 54U;
	volatile uint64_t x79 = 2818LLU;
	volatile uint16_t x80 = 0U;
	int32_t t19 = 1229599;

    t19 = ((x77%(x78^x79))<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = INT32_MAX;
	static volatile uint64_t x83 = 3LLU;
	static int64_t x84 = -66426735585LL;

    t20 = ((x81%(x82^x83))<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	static volatile int8_t x86 = -19;
	int16_t x87 = INT16_MIN;
	int16_t x88 = 38;

    t21 = ((x85%(x86^x87))<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = -1;
	static uint16_t x91 = 1043U;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 3;

    t22 = ((x89%(x90^x91))<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = -1LL;
	int16_t x95 = INT16_MIN;
	volatile int32_t t23 = -33450207;

    t23 = ((x93%(x94^x95))<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	uint16_t x98 = 868U;
	int8_t x99 = -1;
	int16_t x100 = INT16_MAX;
	volatile int32_t t24 = 380652;

    t24 = ((x97%(x98^x99))<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x102 = 1524470U;
	int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = 2853290;

    t25 = ((x101%(x102^x103))<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = UINT16_MAX;
	static volatile uint16_t x106 = 1U;
	int16_t x107 = INT16_MAX;
	volatile int32_t t26 = 18787;

    t26 = ((x105%(x106^x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MIN;
	volatile uint64_t x111 = 0LLU;
	volatile int32_t t27 = -194892276;

    t27 = ((x109%(x110^x111))<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -55;
	int16_t x114 = INT16_MIN;
	uint64_t x115 = 999848247685956374LLU;
	uint8_t x116 = 80U;
	volatile int32_t t28 = 353369;

    t28 = ((x113%(x114^x115))<=x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MIN;
	int16_t x119 = INT16_MAX;
	int16_t x120 = 0;
	volatile int32_t t29 = 1557418;

    t29 = ((x117%(x118^x119))<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x125 = INT16_MIN;
	uint8_t x126 = 0U;
	int8_t x127 = 6;
	static uint64_t x128 = UINT64_MAX;
	volatile int32_t t30 = -2603916;

    t30 = ((x125%(x126^x127))<=x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x130 = 26;
	int64_t x131 = 1498740140600LL;
	static volatile uint64_t x132 = 106LLU;
	volatile int32_t t31 = 2476;

    t31 = ((x129%(x130^x131))<=x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x137 = INT32_MIN;
	volatile int64_t x138 = INT64_MIN;
	uint64_t x139 = 4567LLU;
	int64_t x140 = -11071099LL;
	volatile int32_t t32 = 3095;

    t32 = ((x137%(x138^x139))<=x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	uint8_t x143 = 37U;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t33 = -2103;

    t33 = ((x141%(x142^x143))<=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x145 = 4U;
	static uint16_t x146 = 2153U;
	uint16_t x147 = 1U;
	int64_t x148 = INT64_MIN;
	volatile int32_t t34 = -413753;

    t34 = ((x145%(x146^x147))<=x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x149 = UINT32_MAX;
	uint8_t x150 = UINT8_MAX;
	static int64_t x151 = INT64_MIN;

    t35 = ((x149%(x150^x151))<=x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x153 = INT32_MIN;
	int16_t x155 = INT16_MAX;
	int32_t t36 = 419;

    t36 = ((x153%(x154^x155))<=x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x157 = UINT64_MAX;
	uint8_t x158 = UINT8_MAX;
	int16_t x160 = INT16_MIN;

    t37 = ((x157%(x158^x159))<=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x161 = UINT8_MAX;
	int16_t x162 = INT16_MAX;
	static int16_t x163 = INT16_MIN;
	uint16_t x164 = UINT16_MAX;
	int32_t t38 = -18613;

    t38 = ((x161%(x162^x163))<=x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = 2030;
	int8_t x166 = INT8_MIN;
	int32_t x167 = -334;
	int8_t x168 = 11;
	int32_t t39 = 1359;

    t39 = ((x165%(x166^x167))<=x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x169 = 688126U;
	static volatile int16_t x171 = -12;
	static int8_t x172 = INT8_MIN;

    t40 = ((x169%(x170^x171))<=x172);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x173 = 20052055570LLU;
	int16_t x174 = 1;
	int64_t x176 = -1LL;
	int32_t t41 = -103720;

    t41 = ((x173%(x174^x175))<=x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x182 = 0;
	int32_t x183 = INT32_MAX;
	int16_t x184 = -8498;
	volatile int32_t t42 = 12;

    t42 = ((x181%(x182^x183))<=x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x185 = 1488;
	static volatile int32_t x187 = -3160;
	static int32_t x188 = 15856363;
	volatile int32_t t43 = -1;

    t43 = ((x185%(x186^x187))<=x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = 1853800023892429931LL;
	uint16_t x190 = UINT16_MAX;
	static volatile int64_t x191 = INT64_MIN;
	static uint16_t x192 = 133U;
	static int32_t t44 = -1249450;

    t44 = ((x189%(x190^x191))<=x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x194 = INT8_MIN;
	int64_t x195 = 65063909487LL;
	volatile uint8_t x196 = 30U;
	static int32_t t45 = -1;

    t45 = ((x193%(x194^x195))<=x196);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = INT16_MIN;
	int64_t x199 = INT64_MIN;
	volatile int32_t t46 = 233;

    t46 = ((x197%(x198^x199))<=x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = INT64_MIN;
	uint8_t x203 = UINT8_MAX;
	int8_t x204 = INT8_MIN;

    t47 = ((x201%(x202^x203))<=x204);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x205 = -1;
	int8_t x206 = -1;
	static int32_t x207 = INT32_MAX;
	int16_t x208 = -1;
	int32_t t48 = -485884974;

    t48 = ((x205%(x206^x207))<=x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = INT64_MIN;
	volatile int64_t x210 = INT64_MIN;
	int8_t x211 = -1;
	static int16_t x212 = -1;
	static volatile int32_t t49 = -706811;

    t49 = ((x209%(x210^x211))<=x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x213 = -20;
	int64_t x214 = -1LL;
	volatile uint32_t x215 = 347852U;
	uint64_t x216 = UINT64_MAX;
	volatile int32_t t50 = -1;

    t50 = ((x213%(x214^x215))<=x216);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x217 = 11LLU;
	int64_t x218 = INT64_MIN;
	volatile int8_t x219 = INT8_MIN;

    t51 = ((x217%(x218^x219))<=x220);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x221 = INT16_MIN;
	volatile int64_t x222 = INT64_MIN;
	int16_t x224 = INT16_MAX;
	static volatile int32_t t52 = 2;

    t52 = ((x221%(x222^x223))<=x224);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x225 = -1;
	volatile uint8_t x226 = 3U;
	uint32_t x228 = 1668187903U;
	int32_t t53 = -5;

    t53 = ((x225%(x226^x227))<=x228);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x229 = INT16_MIN;
	int32_t x230 = 179429216;
	static int32_t x232 = 1;

    t54 = ((x229%(x230^x231))<=x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x234 = 289;
	volatile int8_t x235 = -18;
	static uint8_t x236 = 9U;

    t55 = ((x233%(x234^x235))<=x236);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x237 = 496346232;
	int32_t x238 = -1;
	volatile int64_t x239 = INT64_MIN;
	static int8_t x240 = INT8_MIN;
	static volatile int32_t t56 = -430988040;

    t56 = ((x237%(x238^x239))<=x240);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x241 = UINT8_MAX;
	int32_t x243 = -536038644;
	static uint8_t x244 = 60U;
	int32_t t57 = -3090760;

    t57 = ((x241%(x242^x243))<=x244);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MIN;

    t58 = ((x245%(x246^x247))<=x248);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x249 = -3;
	int64_t x251 = 60910833505649562LL;

    t59 = ((x249%(x250^x251))<=x252);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x253 = -1LL;
	int64_t x254 = 338569512789273496LL;
	int32_t x255 = INT32_MIN;
	static volatile int32_t t60 = -579150;

    t60 = ((x253%(x254^x255))<=x256);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x257 = 933;
	volatile uint64_t x258 = 14252072LLU;
	int32_t x259 = -1;
	static int64_t x260 = -1LL;
	volatile int32_t t61 = -118220212;

    t61 = ((x257%(x258^x259))<=x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x261 = -1;
	int64_t x262 = -1360525LL;
	uint32_t x264 = 428597U;
	volatile int32_t t62 = 15558597;

    t62 = ((x261%(x262^x263))<=x264);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = 503LL;
	volatile int64_t x266 = 3017LL;
	int32_t x267 = INT32_MAX;
	volatile int32_t t63 = 16430320;

    t63 = ((x265%(x266^x267))<=x268);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x269 = 268;
	uint16_t x270 = 5U;
	uint32_t x271 = 23682786U;
	volatile int8_t x272 = -1;
	static volatile int32_t t64 = 0;

    t64 = ((x269%(x270^x271))<=x272);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x273 = INT32_MIN;
	int8_t x274 = 1;
	volatile int64_t x275 = INT64_MIN;
	uint16_t x276 = 1U;
	volatile int32_t t65 = 3149;

    t65 = ((x273%(x274^x275))<=x276);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x277 = -1;
	volatile uint8_t x278 = UINT8_MAX;
	uint64_t x280 = 3459213173828443LLU;
	volatile int32_t t66 = -317646;

    t66 = ((x277%(x278^x279))<=x280);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x281 = INT16_MIN;
	static uint64_t x282 = 377659103LLU;
	uint16_t x283 = 69U;
	static int64_t x284 = -4212713022LL;
	int32_t t67 = -4383;

    t67 = ((x281%(x282^x283))<=x284);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x285 = UINT32_MAX;
	static int64_t x286 = -1LL;
	volatile uint8_t x287 = 26U;
	int8_t x288 = INT8_MIN;
	volatile int32_t t68 = 111570965;

    t68 = ((x285%(x286^x287))<=x288);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x289 = 2941039789935789LL;
	int8_t x290 = INT8_MAX;
	uint16_t x291 = 28102U;
	int8_t x292 = INT8_MIN;

    t69 = ((x289%(x290^x291))<=x292);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x293 = -1LL;
	int32_t x294 = -1;
	int64_t x295 = INT64_MIN;
	static int32_t x296 = 10306393;
	static volatile int32_t t70 = 154969510;

    t70 = ((x293%(x294^x295))<=x296);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x297 = -1LL;
	int64_t x298 = 1078077168783710001LL;
	int8_t x299 = INT8_MAX;

    t71 = ((x297%(x298^x299))<=x300);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x301 = -1LL;
	int64_t x302 = INT64_MAX;
	uint16_t x303 = 0U;
	int32_t t72 = 18;

    t72 = ((x301%(x302^x303))<=x304);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = -1LL;
	volatile int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	int32_t t73 = -5;

    t73 = ((x305%(x306^x307))<=x308);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x309 = UINT64_MAX;
	uint32_t x310 = 1U;
	uint8_t x311 = UINT8_MAX;
	volatile int32_t t74 = 122;

    t74 = ((x309%(x310^x311))<=x312);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x313 = INT16_MAX;
	volatile int8_t x314 = INT8_MIN;
	int64_t x315 = 141532LL;
	int16_t x316 = 2800;
	volatile int32_t t75 = -159605;

    t75 = ((x313%(x314^x315))<=x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = INT16_MIN;
	volatile int64_t x318 = 0LL;
	uint64_t x319 = UINT64_MAX;
	int16_t x320 = 805;
	volatile int32_t t76 = -9013;

    t76 = ((x317%(x318^x319))<=x320);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x321 = -1LL;
	int32_t x322 = -1;
	int8_t x323 = -9;
	uint8_t x324 = 1U;

    t77 = ((x321%(x322^x323))<=x324);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x325 = INT8_MIN;
	int32_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	static int16_t x328 = INT16_MIN;
	volatile int32_t t78 = 710469808;

    t78 = ((x325%(x326^x327))<=x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x329 = -1;
	static uint16_t x330 = UINT16_MAX;
	int32_t x331 = INT32_MIN;
	static int64_t x332 = 29LL;
	volatile int32_t t79 = -32088;

    t79 = ((x329%(x330^x331))<=x332);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = 4;
	int64_t x335 = 0LL;
	int32_t x336 = INT32_MAX;
	volatile int32_t t80 = 562;

    t80 = ((x333%(x334^x335))<=x336);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x339 = 1;
	int32_t t81 = -4246;

    t81 = ((x337%(x338^x339))<=x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x341 = 177040911812LL;
	int8_t x342 = INT8_MAX;
	int64_t x343 = -1658028021724504795LL;
	static uint16_t x344 = 805U;
	volatile int32_t t82 = -551612990;

    t82 = ((x341%(x342^x343))<=x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x345 = INT8_MAX;
	uint32_t x347 = 46U;
	int16_t x348 = 4;
	static volatile int32_t t83 = 35;

    t83 = ((x345%(x346^x347))<=x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x349 = 1675U;
	uint64_t x350 = 36619704771492LLU;
	uint8_t x351 = 14U;
	static int32_t x352 = -1149;

    t84 = ((x349%(x350^x351))<=x352);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x353 = 48U;
	int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t85 = 51950389;

    t85 = ((x353%(x354^x355))<=x356);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x357 = UINT8_MAX;
	int8_t x358 = INT8_MIN;
	static uint64_t x359 = 544LLU;
	uint16_t x360 = UINT16_MAX;

    t86 = ((x357%(x358^x359))<=x360);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x361 = -238369LL;
	uint16_t x362 = 369U;
	int8_t x363 = -1;

    t87 = ((x361%(x362^x363))<=x364);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x365 = UINT16_MAX;
	int8_t x366 = 7;
	uint32_t x367 = 0U;
	uint64_t x368 = 21385LLU;
	volatile int32_t t88 = -57923;

    t88 = ((x365%(x366^x367))<=x368);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x369 = 221406;
	static uint32_t x370 = UINT32_MAX;
	static int64_t x372 = -1LL;
	static volatile int32_t t89 = 8388883;

    t89 = ((x369%(x370^x371))<=x372);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x374 = -1LL;
	int32_t x375 = INT32_MIN;
	int8_t x376 = 12;
	volatile int32_t t90 = 5266547;

    t90 = ((x373%(x374^x375))<=x376);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x381 = INT32_MIN;
	int64_t x382 = 7347542574184700LL;
	int64_t x383 = -31252749LL;
	uint32_t x384 = 3050445U;

    t91 = ((x381%(x382^x383))<=x384);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x385 = INT32_MAX;
	volatile int32_t x386 = 104083;
	static int16_t x387 = 4;
	volatile int32_t x388 = -825;

    t92 = ((x385%(x386^x387))<=x388);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x389 = 201528992;
	static int32_t x390 = -255724794;
	int32_t x391 = -2496;
	int32_t t93 = 132832061;

    t93 = ((x389%(x390^x391))<=x392);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x393 = 0LLU;
	static uint64_t x395 = 556451421LLU;
	uint8_t x396 = 1U;
	int32_t t94 = 254137;

    t94 = ((x393%(x394^x395))<=x396);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x397 = INT32_MAX;
	int32_t x398 = -1;
	int8_t x399 = INT8_MIN;
	static volatile int32_t t95 = 990276354;

    t95 = ((x397%(x398^x399))<=x400);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x401 = -1LL;
	int16_t x402 = -110;
	static int16_t x403 = INT16_MAX;
	volatile int16_t x404 = -3390;

    t96 = ((x401%(x402^x403))<=x404);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x410 = 1419;
	int16_t x411 = INT16_MIN;
	int64_t x412 = 3352711LL;
	volatile int32_t t97 = 87828;

    t97 = ((x409%(x410^x411))<=x412);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x413 = 9U;
	uint8_t x414 = 15U;
	int32_t t98 = 6783411;

    t98 = ((x413%(x414^x415))<=x416);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x417 = -1LL;
	volatile int16_t x418 = -2272;
	volatile int64_t x419 = -1384550LL;
	static volatile int32_t t99 = -1216014;

    t99 = ((x417%(x418^x419))<=x420);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x421 = INT8_MAX;
	int32_t x422 = INT32_MAX;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t100 = 16;

    t100 = ((x421%(x422^x423))<=x424);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x425 = 9431099;
	int16_t x426 = INT16_MIN;
	static int64_t x427 = 10673471413LL;
	volatile uint32_t x428 = 112173U;

    t101 = ((x425%(x426^x427))<=x428);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x429 = 702116268067561LL;
	static int16_t x430 = INT16_MIN;
	int32_t x432 = -1;
	int32_t t102 = -1022331;

    t102 = ((x429%(x430^x431))<=x432);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x434 = -1;
	volatile int8_t x435 = INT8_MIN;
	int32_t t103 = -3012397;

    t103 = ((x433%(x434^x435))<=x436);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x437 = INT32_MIN;
	static int16_t x438 = INT16_MIN;
	int8_t x439 = INT8_MAX;
	int16_t x440 = -2628;

    t104 = ((x437%(x438^x439))<=x440);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x441 = -1;
	int8_t x442 = -1;
	uint64_t x443 = 715108651158390452LLU;
	volatile int32_t t105 = -2;

    t105 = ((x441%(x442^x443))<=x444);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x445 = -1;
	uint8_t x446 = 3U;
	volatile uint16_t x447 = 2U;
	int16_t x448 = -1;
	int32_t t106 = 0;

    t106 = ((x445%(x446^x447))<=x448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x449 = UINT8_MAX;
	uint32_t x450 = 5034U;
	uint64_t x451 = 227936304408LLU;
	int32_t t107 = 10834;

    t107 = ((x449%(x450^x451))<=x452);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x453 = INT8_MAX;
	volatile int64_t x455 = 2930076637LL;
	int64_t x456 = INT64_MAX;
	static int32_t t108 = 9759;

    t108 = ((x453%(x454^x455))<=x456);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x457 = -225;
	uint16_t x458 = 3287U;
	uint64_t x459 = 4308069LLU;
	uint8_t x460 = UINT8_MAX;
	volatile int32_t t109 = 46208191;

    t109 = ((x457%(x458^x459))<=x460);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x461 = -1;
	int32_t x462 = -1;
	int64_t x463 = INT64_MAX;
	uint8_t x464 = UINT8_MAX;
	volatile int32_t t110 = -1;

    t110 = ((x461%(x462^x463))<=x464);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x465 = UINT8_MAX;
	int16_t x466 = -2561;
	static int32_t x467 = 755870;
	static uint16_t x468 = UINT16_MAX;
	int32_t t111 = 4147;

    t111 = ((x465%(x466^x467))<=x468);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x469 = INT16_MIN;
	static int64_t x470 = INT64_MAX;
	static int8_t x471 = INT8_MIN;
	int32_t x472 = INT32_MIN;

    t112 = ((x469%(x470^x471))<=x472);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x479 = -1;
	int64_t x480 = INT64_MIN;
	static volatile int32_t t113 = -56;

    t113 = ((x477%(x478^x479))<=x480);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x481 = UINT64_MAX;
	int32_t x482 = INT32_MIN;
	int16_t x483 = -1;
	uint32_t x484 = 0U;

    t114 = ((x481%(x482^x483))<=x484);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x485 = -1;
	int64_t x487 = 18337396314492506LL;
	uint8_t x488 = 0U;

    t115 = ((x485%(x486^x487))<=x488);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x489 = 39U;
	static uint64_t x490 = 23352LLU;
	int32_t x491 = 49398;
	int32_t x492 = -88;
	volatile int32_t t116 = -187988634;

    t116 = ((x489%(x490^x491))<=x492);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x498 = 12;
	int64_t x499 = -1LL;
	static uint32_t x500 = UINT32_MAX;
	static volatile int32_t t117 = -77265050;

    t117 = ((x497%(x498^x499))<=x500);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x501 = INT64_MIN;
	uint64_t x502 = 3573LLU;
	int8_t x503 = INT8_MAX;
	uint64_t x504 = 2879519263851LLU;
	static volatile int32_t t118 = 7394;

    t118 = ((x501%(x502^x503))<=x504);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x505 = 0;
	int32_t x507 = 1799351;
	int64_t x508 = -4061690061LL;
	int32_t t119 = 234864957;

    t119 = ((x505%(x506^x507))<=x508);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x509 = 1;
	volatile int8_t x510 = 2;
	volatile uint32_t x511 = UINT32_MAX;
	int16_t x512 = -20;

    t120 = ((x509%(x510^x511))<=x512);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x513 = INT16_MIN;
	int8_t x515 = INT8_MAX;

    t121 = ((x513%(x514^x515))<=x516);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x517 = INT8_MIN;
	int32_t x518 = INT32_MIN;
	int16_t x520 = -1;
	int32_t t122 = -44946;

    t122 = ((x517%(x518^x519))<=x520);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x521 = 824LL;
	static int64_t x522 = -55229862169984LL;
	static uint8_t x523 = 4U;
	static volatile int32_t t123 = -118028550;

    t123 = ((x521%(x522^x523))<=x524);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x525 = 0U;
	uint64_t x527 = UINT64_MAX;
	uint8_t x528 = 39U;

    t124 = ((x525%(x526^x527))<=x528);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint8_t x529 = 1U;
	volatile uint16_t x531 = UINT16_MAX;
	int32_t x532 = -27900102;
	int32_t t125 = 7766;

    t125 = ((x529%(x530^x531))<=x532);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x533 = INT16_MIN;
	volatile int16_t x534 = 6235;
	static int16_t x535 = INT16_MIN;
	uint32_t x536 = 9U;
	static int32_t t126 = 32158;

    t126 = ((x533%(x534^x535))<=x536);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x537 = -1;
	static int64_t x538 = INT64_MIN;
	uint16_t x539 = 0U;
	int32_t t127 = 6580680;

    t127 = ((x537%(x538^x539))<=x540);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x545 = INT16_MIN;
	int32_t x546 = INT32_MAX;
	int32_t x547 = INT32_MIN;
	volatile int32_t t128 = 24;

    t128 = ((x545%(x546^x547))<=x548);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x549 = INT16_MIN;
	static uint64_t x550 = 72LLU;
	volatile int32_t t129 = -11776;

    t129 = ((x549%(x550^x551))<=x552);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x553 = INT64_MAX;
	int8_t x554 = INT8_MIN;
	int64_t x555 = INT64_MAX;
	volatile int16_t x556 = -1287;
	static volatile int32_t t130 = -34384334;

    t130 = ((x553%(x554^x555))<=x556);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x557 = 30U;
	int8_t x558 = INT8_MIN;
	int16_t x559 = INT16_MIN;
	volatile int8_t x560 = 10;
	volatile int32_t t131 = -107002;

    t131 = ((x557%(x558^x559))<=x560);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x561 = INT16_MAX;
	uint32_t x562 = 5376104U;
	int64_t x563 = INT64_MIN;

    t132 = ((x561%(x562^x563))<=x564);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x566 = INT64_MIN;
	volatile int16_t x568 = -1;
	int32_t t133 = -300436980;

    t133 = ((x565%(x566^x567))<=x568);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x569 = 5;
	int32_t x570 = INT32_MAX;
	volatile int16_t x571 = 1;
	int8_t x572 = INT8_MIN;
	int32_t t134 = -3260026;

    t134 = ((x569%(x570^x571))<=x572);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x573 = INT16_MAX;
	uint64_t x574 = 0LLU;
	int8_t x575 = INT8_MIN;
	uint64_t x576 = 40327520302153LLU;
	static int32_t t135 = 7773223;

    t135 = ((x573%(x574^x575))<=x576);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x577 = 50;
	static int32_t x578 = -1;
	int16_t x579 = INT16_MIN;
	uint64_t x580 = 7924292425078LLU;
	volatile int32_t t136 = 1245;

    t136 = ((x577%(x578^x579))<=x580);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x581 = INT8_MAX;
	volatile uint16_t x582 = UINT16_MAX;
	uint16_t x583 = 0U;
	int64_t x584 = INT64_MIN;
	static volatile int32_t t137 = 37123;

    t137 = ((x581%(x582^x583))<=x584);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x585 = 0;
	uint16_t x586 = UINT16_MAX;
	int64_t x587 = 126784542104660757LL;
	int32_t x588 = 318014;
	int32_t t138 = 1514;

    t138 = ((x585%(x586^x587))<=x588);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint64_t x593 = UINT64_MAX;
	int32_t x594 = INT32_MAX;
	int8_t x595 = INT8_MAX;
	volatile int32_t t139 = 5;

    t139 = ((x593%(x594^x595))<=x596);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x597 = 1819179262727254445LL;
	uint32_t x598 = 59U;
	int16_t x600 = INT16_MIN;
	int32_t t140 = -895;

    t140 = ((x597%(x598^x599))<=x600);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x602 = 7U;
	static int8_t x603 = INT8_MAX;
	static int32_t x604 = INT32_MAX;
	static int32_t t141 = 0;

    t141 = ((x601%(x602^x603))<=x604);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x605 = -1;
	uint8_t x606 = 3U;
	static uint64_t x607 = 155753234705628LLU;
	uint32_t x608 = UINT32_MAX;
	static volatile int32_t t142 = 13651;

    t142 = ((x605%(x606^x607))<=x608);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x609 = -1;
	uint8_t x610 = UINT8_MAX;
	int8_t x612 = 0;
	int32_t t143 = 1;

    t143 = ((x609%(x610^x611))<=x612);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x614 = INT64_MIN;
	uint16_t x615 = 3U;
	int16_t x616 = -1;

    t144 = ((x613%(x614^x615))<=x616);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x618 = INT8_MIN;
	uint16_t x619 = 4767U;

    t145 = ((x617%(x618^x619))<=x620);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x621 = 3241702928480LL;
	int16_t x622 = -147;
	int64_t x623 = INT64_MAX;
	int8_t x624 = INT8_MAX;
	int32_t t146 = 1;

    t146 = ((x621%(x622^x623))<=x624);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x625 = 18U;
	uint64_t x626 = 1221316248783654995LLU;
	int16_t x627 = INT16_MIN;
	int64_t x628 = INT64_MAX;
	volatile int32_t t147 = 474;

    t147 = ((x625%(x626^x627))<=x628);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x629 = INT16_MIN;
	volatile int8_t x630 = INT8_MAX;
	int64_t x631 = INT64_MIN;
	int32_t x632 = -1;
	int32_t t148 = -31308209;

    t148 = ((x629%(x630^x631))<=x632);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x633 = -1;
	uint64_t x634 = UINT64_MAX;
	volatile int64_t x635 = INT64_MIN;
	static volatile uint8_t x636 = UINT8_MAX;
	int32_t t149 = -6198;

    t149 = ((x633%(x634^x635))<=x636);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x638 = INT8_MIN;
	static uint64_t x639 = 524028264672191395LLU;
	volatile int16_t x640 = -5;
	int32_t t150 = 18330;

    t150 = ((x637%(x638^x639))<=x640);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x641 = 30027;
	int64_t x642 = -15676715882410LL;
	int64_t x643 = -4282201764737047502LL;
	int32_t x644 = -1;
	int32_t t151 = 517331873;

    t151 = ((x641%(x642^x643))<=x644);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x645 = INT32_MIN;
	int64_t x646 = -1LL;
	int32_t t152 = -215453;

    t152 = ((x645%(x646^x647))<=x648);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x653 = -410;
	int8_t x654 = INT8_MIN;
	uint32_t x655 = 83340U;
	static int32_t t153 = 50726084;

    t153 = ((x653%(x654^x655))<=x656);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x657 = -1;
	static volatile int32_t x658 = -1314;
	int64_t x659 = INT64_MIN;
	int16_t x660 = 7;
	static volatile int32_t t154 = -2201475;

    t154 = ((x657%(x658^x659))<=x660);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x661 = -9285210463LL;
	int16_t x662 = INT16_MIN;
	volatile int8_t x663 = 6;
	int64_t x664 = 249LL;
	int32_t t155 = 26264;

    t155 = ((x661%(x662^x663))<=x664);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x665 = 871517857U;
	volatile uint16_t x666 = UINT16_MAX;
	int16_t x667 = -1;
	uint16_t x668 = 6U;

    t156 = ((x665%(x666^x667))<=x668);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x670 = -1;
	volatile int32_t t157 = 1;

    t157 = ((x669%(x670^x671))<=x672);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x673 = UINT32_MAX;
	int64_t x675 = -1682647LL;
	uint8_t x676 = UINT8_MAX;

    t158 = ((x673%(x674^x675))<=x676);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x677 = INT64_MIN;
	int8_t x678 = INT8_MAX;
	volatile int32_t x679 = INT32_MIN;
	static uint32_t x680 = 28576972U;

    t159 = ((x677%(x678^x679))<=x680);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x681 = 5U;
	volatile int16_t x682 = -114;

    t160 = ((x681%(x682^x683))<=x684);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x685 = 10;
	int16_t x686 = INT16_MAX;
	int16_t x687 = 65;
	static int8_t x688 = -1;
	int32_t t161 = 397087850;

    t161 = ((x685%(x686^x687))<=x688);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x689 = UINT64_MAX;
	static int16_t x690 = -1;
	static volatile int32_t x691 = INT32_MAX;
	uint64_t x692 = 3901504574627716LLU;
	volatile int32_t t162 = 20530;

    t162 = ((x689%(x690^x691))<=x692);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x694 = 20U;
	uint8_t x695 = UINT8_MAX;
	int8_t x696 = 3;

    t163 = ((x693%(x694^x695))<=x696);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x697 = -1LL;
	volatile uint16_t x699 = UINT16_MAX;
	uint32_t x700 = 309251233U;
	volatile int32_t t164 = -17898;

    t164 = ((x697%(x698^x699))<=x700);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x702 = -1LL;
	uint16_t x704 = UINT16_MAX;

    t165 = ((x701%(x702^x703))<=x704);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x705 = -1788;
	volatile int32_t x706 = -1;
	uint8_t x707 = UINT8_MAX;
	int32_t x708 = INT32_MAX;
	int32_t t166 = 1;

    t166 = ((x705%(x706^x707))<=x708);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x709 = 1;
	uint32_t x711 = 316008U;
	int32_t x712 = -1;
	static volatile int32_t t167 = -173142962;

    t167 = ((x709%(x710^x711))<=x712);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x713 = 43LLU;
	static uint32_t x714 = 1U;
	uint32_t x715 = 1063U;
	volatile int32_t t168 = -2321322;

    t168 = ((x713%(x714^x715))<=x716);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x717 = INT32_MIN;
	int32_t x718 = INT32_MIN;
	static uint8_t x719 = 2U;
	int64_t x720 = -34161952542357LL;
	int32_t t169 = -2521;

    t169 = ((x717%(x718^x719))<=x720);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x721 = 98;
	int32_t x722 = -14527910;
	uint16_t x723 = 4U;
	int32_t t170 = -3;

    t170 = ((x721%(x722^x723))<=x724);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x725 = INT32_MIN;
	volatile int64_t x726 = -5893LL;
	int8_t x727 = INT8_MAX;
	static int8_t x728 = INT8_MAX;
	int32_t t171 = -470510;

    t171 = ((x725%(x726^x727))<=x728);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x729 = INT16_MAX;
	static uint16_t x730 = 166U;
	uint64_t x731 = UINT64_MAX;
	static int8_t x732 = INT8_MIN;
	int32_t t172 = 598148242;

    t172 = ((x729%(x730^x731))<=x732);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x733 = UINT16_MAX;
	int8_t x734 = INT8_MIN;
	static int16_t x735 = 1;
	volatile int64_t x736 = INT64_MAX;
	int32_t t173 = -103265344;

    t173 = ((x733%(x734^x735))<=x736);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	int64_t x738 = -1LL;
	int8_t x739 = INT8_MIN;
	volatile int32_t t174 = -11153299;

    t174 = ((x737%(x738^x739))<=x740);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x741 = INT16_MIN;
	volatile int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MIN;
	uint16_t x744 = UINT16_MAX;
	int32_t t175 = -12;

    t175 = ((x741%(x742^x743))<=x744);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x746 = INT16_MIN;
	volatile int8_t x747 = 30;
	int8_t x748 = 5;
	static int32_t t176 = 0;

    t176 = ((x745%(x746^x747))<=x748);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x749 = 7571574208262853LLU;
	volatile int8_t x750 = 10;
	static int32_t t177 = -1976042;

    t177 = ((x749%(x750^x751))<=x752);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x753 = -1;
	int8_t x754 = -1;
	int16_t x755 = 0;
	int32_t t178 = 1777;

    t178 = ((x753%(x754^x755))<=x756);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x758 = INT32_MIN;
	uint64_t x759 = UINT64_MAX;
	static int32_t x760 = -1;

    t179 = ((x757%(x758^x759))<=x760);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x761 = 1LL;
	uint64_t x762 = 2364LLU;
	int8_t x763 = -52;
	uint8_t x764 = 29U;
	volatile int32_t t180 = -5447;

    t180 = ((x761%(x762^x763))<=x764);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x765 = UINT32_MAX;
	int8_t x766 = -1;
	static uint16_t x768 = UINT16_MAX;
	volatile int32_t t181 = 0;

    t181 = ((x765%(x766^x767))<=x768);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x770 = -12380028765299LL;
	static int64_t x771 = INT64_MIN;
	volatile int8_t x772 = INT8_MAX;

    t182 = ((x769%(x770^x771))<=x772);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x774 = INT16_MIN;
	volatile uint8_t x775 = 1U;
	int64_t x776 = 33860002425419523LL;
	volatile int32_t t183 = 27098312;

    t183 = ((x773%(x774^x775))<=x776);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x777 = 2U;
	int32_t x778 = INT32_MAX;
	static int64_t x779 = -1LL;
	int64_t x780 = 17337951971LL;
	volatile int32_t t184 = 1929997;

    t184 = ((x777%(x778^x779))<=x780);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x781 = INT8_MIN;
	int16_t x782 = INT16_MIN;
	int16_t x784 = INT16_MIN;

    t185 = ((x781%(x782^x783))<=x784);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x789 = INT16_MIN;
	int32_t x790 = 71023592;
	int16_t x791 = -260;
	volatile int32_t t186 = 644192800;

    t186 = ((x789%(x790^x791))<=x792);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x795 = 208639688U;
	int8_t x796 = 1;
	volatile int32_t t187 = 925314;

    t187 = ((x793%(x794^x795))<=x796);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x797 = INT8_MAX;
	volatile uint8_t x798 = 2U;
	volatile int32_t x799 = INT32_MAX;
	static uint32_t x800 = 104951U;
	volatile int32_t t188 = 3010638;

    t188 = ((x797%(x798^x799))<=x800);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x801 = INT64_MIN;
	int32_t x802 = 4355051;
	static volatile uint32_t x803 = 1394566572U;
	int8_t x804 = INT8_MIN;
	int32_t t189 = -41449850;

    t189 = ((x801%(x802^x803))<=x804);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x805 = 16131143507694LL;
	uint64_t x806 = 211260964420421500LLU;
	int8_t x807 = INT8_MIN;
	int64_t x808 = INT64_MIN;
	static int32_t t190 = 94;

    t190 = ((x805%(x806^x807))<=x808);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x809 = 19430U;
	int8_t x810 = -1;
	uint64_t x812 = 1470576766LLU;
	static int32_t t191 = 27259;

    t191 = ((x809%(x810^x811))<=x812);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x814 = INT16_MAX;
	int8_t x815 = INT8_MIN;
	int16_t x816 = -1;
	volatile int32_t t192 = -53717855;

    t192 = ((x813%(x814^x815))<=x816);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x817 = UINT8_MAX;
	uint64_t x820 = 1919605648427LLU;
	int32_t t193 = 253592;

    t193 = ((x817%(x818^x819))<=x820);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x821 = 1;
	uint32_t x823 = UINT32_MAX;
	int64_t x824 = -122582285486416LL;

    t194 = ((x821%(x822^x823))<=x824);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x825 = -1;
	uint8_t x826 = UINT8_MAX;
	uint32_t x827 = UINT32_MAX;
	volatile int8_t x828 = INT8_MIN;
	static volatile int32_t t195 = 18;

    t195 = ((x825%(x826^x827))<=x828);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x829 = INT8_MIN;
	uint8_t x830 = UINT8_MAX;
	uint64_t x831 = 950513LLU;
	static int8_t x832 = 0;
	volatile int32_t t196 = 367;

    t196 = ((x829%(x830^x831))<=x832);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x836 = -756;
	int32_t t197 = 2134;

    t197 = ((x833%(x834^x835))<=x836);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x838 = 2926LLU;
	int64_t x839 = INT64_MIN;
	volatile int32_t t198 = -1754071;

    t198 = ((x837%(x838^x839))<=x840);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x842 = 66494268LL;
	uint16_t x843 = UINT16_MAX;
	static int16_t x844 = INT16_MIN;
	int32_t t199 = -157465;

    t199 = ((x841%(x842^x843))<=x844);

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

