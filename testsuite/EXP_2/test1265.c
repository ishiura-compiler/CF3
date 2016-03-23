
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

static int64_t x1 = -1LL;
static volatile int64_t x20 = INT64_MIN;
volatile int64_t t3 = 1041898882LL;
int16_t x26 = 1;
static int64_t x35 = INT64_MIN;
int32_t x36 = INT32_MIN;
int32_t t7 = -141552263;
int8_t x42 = INT8_MIN;
int32_t t9 = 24832900;
static uint64_t t11 = 10756455LLU;
uint16_t x56 = 96U;
volatile int32_t t12 = -52825941;
static uint8_t x58 = UINT8_MAX;
volatile int32_t x60 = -3;
static int32_t t16 = -6165974;
int16_t x76 = INT16_MAX;
int32_t t17 = 343813473;
static int8_t x93 = 23;
static int64_t x101 = -1LL;
int8_t x106 = 0;
static int32_t x114 = -10045067;
static int32_t x116 = 263;
uint16_t x118 = 22873U;
int64_t x119 = 2546LL;
static volatile int64_t t28 = 204153295LL;
volatile uint32_t x121 = UINT32_MAX;
uint64_t x127 = UINT64_MAX;
int8_t x134 = INT8_MIN;
volatile int8_t x138 = INT8_MIN;
static uint8_t x144 = UINT8_MAX;
volatile int32_t t34 = -50288358;
int16_t x147 = INT16_MAX;
int64_t x163 = INT64_MAX;
uint16_t x164 = 3U;
volatile uint8_t x168 = UINT8_MAX;
int32_t x170 = INT32_MAX;
uint16_t x177 = 454U;
int32_t x191 = INT32_MAX;
int32_t x197 = INT32_MIN;
static uint32_t t47 = 25400837U;
volatile int16_t x209 = INT16_MAX;
volatile int8_t x211 = INT8_MIN;
volatile int32_t t50 = 2081052;
volatile int8_t x213 = INT8_MIN;
int8_t x220 = 3;
volatile int32_t t52 = -83712928;
uint16_t x227 = UINT16_MAX;
volatile uint64_t t54 = 26LLU;
static volatile int64_t t55 = 42LL;
uint8_t x235 = UINT8_MAX;
int16_t x241 = INT16_MIN;
int8_t x243 = -1;
uint32_t x251 = UINT32_MAX;
volatile uint64_t t60 = 235063953773858LLU;
int8_t x253 = -1;
int16_t x256 = 3855;
int64_t x258 = INT64_MIN;
int16_t x260 = INT16_MAX;
int32_t x270 = INT32_MIN;
int16_t x278 = -10;
int32_t t68 = -38579133;
int64_t x285 = -1172471LL;
int8_t x292 = -55;
int16_t x295 = 34;
uint32_t t71 = 48490682U;
int32_t x300 = -1;
int32_t t74 = 2289;
int16_t x311 = INT16_MAX;
int32_t x316 = -2228;
int16_t x322 = INT16_MAX;
volatile int16_t x327 = INT16_MIN;
static uint32_t x328 = 74717014U;
volatile int32_t t80 = -30416502;
uint64_t x336 = 1039858788653710LLU;
static volatile int32_t x352 = -1;
uint64_t x353 = 8LLU;
static uint16_t x364 = 196U;
int8_t x366 = INT8_MIN;
int16_t x369 = 1;
static volatile int32_t t91 = -4065;
uint64_t x378 = UINT64_MAX;
int16_t x379 = -3;
volatile int64_t x380 = INT64_MIN;
static volatile uint16_t x381 = 254U;
volatile uint16_t x386 = 1554U;
int16_t x388 = INT16_MIN;
uint32_t x389 = UINT32_MAX;
uint8_t x394 = UINT8_MAX;
int8_t x399 = -1;
static uint64_t x402 = UINT64_MAX;
volatile int8_t x408 = INT8_MAX;
int16_t x409 = INT16_MIN;
uint64_t x412 = 29793567235254LLU;
uint16_t x422 = 515U;
volatile uint16_t x423 = UINT16_MAX;
volatile int64_t x424 = INT64_MIN;
static uint16_t x430 = 1U;
static int8_t x435 = INT8_MIN;
volatile int8_t x437 = -59;
int32_t x439 = 632;
uint64_t x442 = 98LLU;
volatile uint64_t x444 = 1352150752060690LLU;
uint16_t x445 = 14417U;
static int64_t t110 = 1725183506311212715LL;
volatile int8_t x453 = -26;
int32_t t111 = -4;
int32_t x457 = INT32_MIN;
uint16_t x463 = 2293U;
volatile int32_t t113 = -198;
uint8_t x471 = 3U;
volatile int32_t t117 = -223890;
static uint8_t x482 = 1U;
volatile int32_t x486 = INT32_MIN;
volatile uint16_t x491 = 127U;
volatile int8_t x495 = INT8_MIN;
int64_t x511 = INT64_MIN;
uint32_t x516 = 205U;
uint64_t x517 = UINT64_MAX;
int64_t x521 = INT64_MIN;
volatile uint32_t x524 = UINT32_MAX;
int8_t x529 = INT8_MIN;
static int8_t x531 = INT8_MIN;
int32_t t129 = 337;
volatile int32_t t130 = -7;
int16_t x538 = -1;
static int16_t x543 = 0;
int8_t x548 = 11;
int64_t x553 = 254290539312LL;
int8_t x555 = INT8_MIN;
volatile uint64_t x559 = 8964767054LLU;
uint8_t x561 = UINT8_MAX;
int8_t x564 = INT8_MIN;
int8_t x565 = -1;
int32_t t138 = 1;
static uint16_t x569 = 1224U;
static int32_t x571 = INT32_MIN;
int32_t x573 = INT32_MAX;
uint8_t x574 = 52U;
int16_t x581 = 993;
int8_t x583 = -1;
volatile int64_t t142 = -6150512397LL;
volatile int32_t t143 = 125429017;
uint64_t x590 = 48171195155841216LLU;
volatile int64_t x592 = INT64_MAX;
volatile int32_t t145 = -24511;
uint32_t x598 = 17U;
int32_t x602 = INT32_MIN;
uint64_t t148 = 72999LLU;
static int32_t x609 = -1;
uint16_t x613 = 0U;
uint16_t x616 = UINT16_MAX;
uint64_t x617 = UINT64_MAX;
volatile int32_t t151 = 3637911;
static volatile int64_t x621 = INT64_MAX;
uint8_t x622 = UINT8_MAX;
static volatile int32_t x623 = -1196584;
int16_t x624 = INT16_MIN;
static int64_t x627 = -1LL;
int32_t x631 = -1;
uint32_t x634 = 1766189734U;
volatile int16_t x638 = INT16_MAX;
uint64_t x653 = 1LLU;
static volatile int64_t x659 = INT64_MAX;
int64_t x663 = -4281016557623LL;
uint32_t x667 = UINT32_MAX;
int16_t x671 = 24;
int64_t x679 = INT64_MIN;
int32_t x694 = -1;
uint8_t x698 = 1U;
int32_t x701 = 66975780;
int32_t t173 = -1222333;
volatile int8_t x709 = -22;
int32_t t174 = -17;
uint8_t x714 = 83U;
uint8_t x719 = 3U;
static uint64_t x720 = 50214517449787LLU;
volatile int32_t t179 = 5;
int32_t x733 = 442;
uint32_t t180 = 9833130U;
int16_t x737 = INT16_MIN;
volatile int32_t t181 = 188;
int32_t x746 = INT32_MIN;
volatile int16_t x747 = 21;
static uint32_t x761 = 347U;
static volatile uint32_t t187 = 1U;
static int64_t x772 = 803694967LL;
static int16_t x774 = INT16_MIN;
uint32_t x780 = UINT32_MAX;
uint32_t t191 = 10413679U;
int16_t x786 = INT16_MIN;
uint16_t x790 = UINT16_MAX;
volatile int64_t t194 = 19310876974082062LL;
int64_t x809 = INT64_MAX;
uint64_t x811 = UINT64_MAX;


void f0(void) {
    	volatile int64_t x2 = INT64_MIN;
	int16_t x3 = -1;
	int32_t x4 = -1;
	static int32_t t0 = -13426;

    t0 = ((x1!=(x2!=x3))%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = -101;
	uint32_t x10 = 1U;
	static uint32_t x11 = 656U;
	int8_t x12 = INT8_MIN;
	int32_t t1 = -24076;

    t1 = ((x9!=(x10!=x11))%x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	volatile int8_t x14 = -7;
	int32_t x15 = -1;
	static int32_t x16 = -110100;
	int32_t t2 = 168407;

    t2 = ((x13!=(x14!=x15))%x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = INT32_MIN;
	volatile int32_t x18 = INT32_MIN;
	uint64_t x19 = 128071LLU;

    t3 = ((x17!=(x18!=x19))%x20);

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x21 = INT8_MIN;
	int64_t x22 = INT64_MAX;
	static int64_t x23 = -1LL;
	int8_t x24 = INT8_MIN;
	volatile int32_t t4 = 463;

    t4 = ((x21!=(x22!=x23))%x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	static int64_t x27 = -1LL;
	static int64_t x28 = INT64_MIN;
	int64_t t5 = -499098242LL;

    t5 = ((x25!=(x26!=x27))%x28);

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x29 = 0LL;
	volatile int32_t x30 = -64941198;
	int8_t x31 = INT8_MIN;
	uint16_t x32 = 6U;
	volatile int32_t t6 = 2870;

    t6 = ((x29!=(x30!=x31))%x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x33 = 8331050LL;
	static uint8_t x34 = UINT8_MAX;

    t7 = ((x33!=(x34!=x35))%x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x37 = 58758037LLU;
	static int64_t x38 = INT64_MIN;
	uint64_t x39 = 41073415439258240LLU;
	int16_t x40 = INT16_MIN;
	int32_t t8 = 166;

    t8 = ((x37!=(x38!=x39))%x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x41 = 88U;
	int8_t x43 = INT8_MIN;
	uint8_t x44 = UINT8_MAX;

    t9 = ((x41!=(x42!=x43))%x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MAX;
	int64_t x46 = INT64_MIN;
	volatile int32_t x47 = 11162650;
	int16_t x48 = INT16_MIN;
	int32_t t10 = 5522;

    t10 = ((x45!=(x46!=x47))%x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 52429U;
	uint16_t x50 = UINT16_MAX;
	uint8_t x51 = UINT8_MAX;
	uint64_t x52 = 255LLU;

    t11 = ((x49!=(x50!=x51))%x52);

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MAX;
	static int32_t x54 = -1;
	static int64_t x55 = INT64_MIN;

    t12 = ((x53!=(x54!=x55))%x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	volatile int32_t t13 = 14765;

    t13 = ((x57!=(x58!=x59))%x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x61 = 20U;
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = INT64_MIN;
	int64_t x64 = -1LL;
	volatile int64_t t14 = -4715430LL;

    t14 = ((x61!=(x62!=x63))%x64);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	static int8_t x66 = INT8_MAX;
	volatile uint8_t x67 = 2U;
	uint64_t x68 = 428716LLU;
	volatile uint64_t t15 = 304199548623675435LLU;

    t15 = ((x65!=(x66!=x67))%x68);

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = INT32_MIN;
	volatile uint8_t x70 = 1U;
	int8_t x71 = 1;
	int8_t x72 = INT8_MAX;

    t16 = ((x69!=(x70!=x71))%x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x73 = -1;
	volatile int8_t x74 = INT8_MAX;
	int32_t x75 = INT32_MIN;

    t17 = ((x73!=(x74!=x75))%x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MAX;
	static uint16_t x78 = 4938U;
	static int8_t x79 = 0;
	int64_t x80 = 5210913384800344LL;
	volatile int64_t t18 = 25640841810036642LL;

    t18 = ((x77!=(x78!=x79))%x80);

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MAX;
	uint64_t x82 = 1912LLU;
	static int32_t x83 = -1;
	int32_t x84 = -150521;
	volatile int32_t t19 = -5070773;

    t19 = ((x81!=(x82!=x83))%x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = INT16_MAX;
	int32_t x86 = -612902031;
	int8_t x87 = INT8_MAX;
	static int64_t x88 = -107606025179845LL;
	static volatile int64_t t20 = 4874429927900247LL;

    t20 = ((x85!=(x86!=x87))%x88);

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	volatile int64_t x90 = INT64_MIN;
	int64_t x91 = -342247803473LL;
	static int32_t x92 = 5629;
	volatile int32_t t21 = 1314;

    t21 = ((x89!=(x90!=x91))%x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x94 = 0U;
	volatile int16_t x95 = INT16_MIN;
	static int64_t x96 = INT64_MAX;
	volatile int64_t t22 = -825207808LL;

    t22 = ((x93!=(x94!=x95))%x96);

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MIN;
	static int8_t x98 = -56;
	int64_t x99 = -2008396457651LL;
	uint32_t x100 = UINT32_MAX;
	uint32_t t23 = 11231U;

    t23 = ((x97!=(x98!=x99))%x100);

    if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x102 = 843U;
	uint32_t x103 = 3U;
	uint16_t x104 = UINT16_MAX;
	int32_t t24 = 1488;

    t24 = ((x101!=(x102!=x103))%x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = -62170830002673253LL;
	volatile int32_t x107 = INT32_MIN;
	int64_t x108 = 8933297348510LL;
	int64_t t25 = -24982LL;

    t25 = ((x105!=(x106!=x107))%x108);

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 48369790366907317LLU;
	uint8_t x110 = UINT8_MAX;
	uint64_t x111 = UINT64_MAX;
	uint64_t x112 = 517744593900LLU;
	volatile uint64_t t26 = 27156LLU;

    t26 = ((x109!=(x110!=x111))%x112);

    if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x113 = 1U;
	volatile int32_t x115 = INT32_MIN;
	volatile int32_t t27 = -565256;

    t27 = ((x113!=(x114!=x115))%x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x117 = 11592024U;
	int64_t x120 = -1LL;

    t28 = ((x117!=(x118!=x119))%x120);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x122 = 0U;
	uint16_t x123 = 65U;
	static int64_t x124 = INT64_MIN;
	int64_t t29 = -15970685844LL;

    t29 = ((x121!=(x122!=x123))%x124);

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x125 = -1555349;
	static volatile uint32_t x126 = 5488987U;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t30 = 1316LLU;

    t30 = ((x125!=(x126!=x127))%x128);

    if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x129 = UINT8_MAX;
	static uint16_t x130 = 27U;
	int32_t x131 = INT32_MIN;
	static volatile int16_t x132 = -1;
	int32_t t31 = 0;

    t31 = ((x129!=(x130!=x131))%x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x133 = INT8_MIN;
	static int8_t x135 = -1;
	static int16_t x136 = INT16_MIN;
	static int32_t t32 = 9;

    t32 = ((x133!=(x134!=x135))%x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = UINT64_MAX;
	int16_t x139 = INT16_MIN;
	int64_t x140 = -16260845LL;
	volatile int64_t t33 = -3256LL;

    t33 = ((x137!=(x138!=x139))%x140);

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x141 = 25792410351070977LLU;
	volatile int8_t x142 = INT8_MIN;
	uint16_t x143 = UINT16_MAX;

    t34 = ((x141!=(x142!=x143))%x144);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x145 = INT32_MIN;
	int16_t x146 = 6;
	int32_t x148 = INT32_MIN;
	volatile int32_t t35 = -3;

    t35 = ((x145!=(x146!=x147))%x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MIN;
	int32_t x154 = 118401061;
	uint16_t x155 = 42U;
	uint64_t x156 = 354806557070394534LLU;
	uint64_t t36 = 23797513LLU;

    t36 = ((x153!=(x154!=x155))%x156);

    if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x157 = UINT32_MAX;
	static int16_t x158 = -3;
	int32_t x159 = -760;
	static int8_t x160 = INT8_MIN;
	volatile int32_t t37 = 485;

    t37 = ((x157!=(x158!=x159))%x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x161 = 4U;
	volatile uint16_t x162 = UINT16_MAX;
	int32_t t38 = -1000764324;

    t38 = ((x161!=(x162!=x163))%x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x165 = 508U;
	volatile int64_t x166 = 106220LL;
	int32_t x167 = INT32_MIN;
	int32_t t39 = -2102053;

    t39 = ((x165!=(x166!=x167))%x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x169 = INT16_MIN;
	int64_t x171 = -1LL;
	uint64_t x172 = UINT64_MAX;
	static volatile uint64_t t40 = 1899LLU;

    t40 = ((x169!=(x170!=x171))%x172);

    if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x173 = 41039629669139896LLU;
	int16_t x174 = INT16_MIN;
	int32_t x175 = 0;
	static uint32_t x176 = UINT32_MAX;
	volatile uint32_t t41 = 6U;

    t41 = ((x173!=(x174!=x175))%x176);

    if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x178 = INT16_MAX;
	static int8_t x179 = INT8_MAX;
	static int8_t x180 = INT8_MIN;
	int32_t t42 = 492954130;

    t42 = ((x177!=(x178!=x179))%x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x181 = INT32_MAX;
	int8_t x182 = INT8_MIN;
	uint32_t x183 = 59480638U;
	int32_t x184 = -453958;
	volatile int32_t t43 = -166;

    t43 = ((x181!=(x182!=x183))%x184);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x185 = UINT8_MAX;
	int64_t x186 = -95LL;
	volatile int16_t x187 = -1;
	int8_t x188 = INT8_MIN;
	volatile int32_t t44 = -234287;

    t44 = ((x185!=(x186!=x187))%x188);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = INT64_MIN;
	uint16_t x190 = UINT16_MAX;
	uint8_t x192 = 120U;
	volatile int32_t t45 = -2;

    t45 = ((x189!=(x190!=x191))%x192);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x193 = 15U;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	uint16_t x196 = UINT16_MAX;
	int32_t t46 = 22;

    t46 = ((x193!=(x194!=x195))%x196);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x198 = 1;
	static uint64_t x199 = 7074319284LLU;
	uint32_t x200 = 31356153U;

    t47 = ((x197!=(x198!=x199))%x200);

    if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = -26926420LL;
	uint16_t x202 = 123U;
	volatile int8_t x203 = -1;
	static uint8_t x204 = 1U;
	static int32_t t48 = 16153826;

    t48 = ((x201!=(x202!=x203))%x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = INT32_MAX;
	int32_t x206 = -1;
	int8_t x207 = -1;
	uint8_t x208 = 71U;
	int32_t t49 = -9;

    t49 = ((x205!=(x206!=x207))%x208);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x210 = INT16_MIN;
	int8_t x212 = -9;

    t50 = ((x209!=(x210!=x211))%x212);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x214 = -1LL;
	uint16_t x215 = 0U;
	uint64_t x216 = 121740LLU;
	uint64_t t51 = 279566LLU;

    t51 = ((x213!=(x214!=x215))%x216);

    if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x217 = 217424248U;
	static uint8_t x218 = 18U;
	static int8_t x219 = INT8_MAX;

    t52 = ((x217!=(x218!=x219))%x220);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x221 = 1536074635240LL;
	volatile int64_t x222 = -1LL;
	uint64_t x223 = 505432635255LLU;
	int32_t x224 = INT32_MAX;
	volatile int32_t t53 = 116;

    t53 = ((x221!=(x222!=x223))%x224);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = INT64_MIN;
	static int32_t x226 = INT32_MIN;
	uint64_t x228 = 113LLU;

    t54 = ((x225!=(x226!=x227))%x228);

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x229 = UINT32_MAX;
	static int8_t x230 = -1;
	uint16_t x231 = 14U;
	volatile int64_t x232 = 15293579LL;

    t55 = ((x229!=(x230!=x231))%x232);

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = -1;
	int64_t x234 = INT64_MIN;
	static volatile int16_t x236 = -2041;
	volatile int32_t t56 = 1848;

    t56 = ((x233!=(x234!=x235))%x236);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x237 = INT16_MAX;
	int16_t x238 = -181;
	static int32_t x239 = -1;
	int32_t x240 = 1334;
	int32_t t57 = -11128;

    t57 = ((x237!=(x238!=x239))%x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x242 = INT64_MAX;
	int16_t x244 = INT16_MIN;
	int32_t t58 = 0;

    t58 = ((x241!=(x242!=x243))%x244);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = 29925332441LL;
	uint8_t x246 = 101U;
	int16_t x247 = -14;
	volatile uint64_t x248 = UINT64_MAX;
	uint64_t t59 = 523647624476LLU;

    t59 = ((x245!=(x246!=x247))%x248);

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = INT64_MIN;
	int32_t x250 = 4326;
	static uint64_t x252 = 187LLU;

    t60 = ((x249!=(x250!=x251))%x252);

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x254 = -1;
	int8_t x255 = INT8_MAX;
	volatile int32_t t61 = -50374280;

    t61 = ((x253!=(x254!=x255))%x256);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = INT32_MAX;
	int8_t x259 = -29;
	int32_t t62 = -188429070;

    t62 = ((x257!=(x258!=x259))%x260);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x261 = -1LL;
	uint64_t x262 = 51332869LLU;
	static volatile int32_t x263 = -1;
	static int32_t x264 = -405462020;
	volatile int32_t t63 = 733;

    t63 = ((x261!=(x262!=x263))%x264);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = INT32_MIN;
	volatile uint32_t x266 = 68U;
	int64_t x267 = -386LL;
	int32_t x268 = INT32_MAX;
	volatile int32_t t64 = -12697094;

    t64 = ((x265!=(x266!=x267))%x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x269 = 24054U;
	uint16_t x271 = 6961U;
	int8_t x272 = 1;
	volatile int32_t t65 = -25;

    t65 = ((x269!=(x270!=x271))%x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x273 = 0;
	volatile uint16_t x274 = 2532U;
	volatile uint32_t x275 = 2U;
	int8_t x276 = INT8_MAX;
	int32_t t66 = -10498;

    t66 = ((x273!=(x274!=x275))%x276);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = -1;
	int16_t x279 = -1;
	volatile int16_t x280 = 4469;
	static volatile int32_t t67 = 5655853;

    t67 = ((x277!=(x278!=x279))%x280);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x281 = INT32_MAX;
	static int32_t x282 = INT32_MIN;
	static int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MIN;

    t68 = ((x281!=(x282!=x283))%x284);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x286 = 26U;
	uint8_t x287 = UINT8_MAX;
	int32_t x288 = -8188;
	volatile int32_t t69 = 0;

    t69 = ((x285!=(x286!=x287))%x288);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = INT16_MAX;
	volatile int16_t x290 = 0;
	int8_t x291 = INT8_MIN;
	int32_t t70 = -1;

    t70 = ((x289!=(x290!=x291))%x292);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x293 = -1;
	static int64_t x294 = -1LL;
	uint32_t x296 = 1899U;

    t71 = ((x293!=(x294!=x295))%x296);

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = 1;
	int16_t x298 = INT16_MAX;
	int16_t x299 = -802;
	int32_t t72 = 2698468;

    t72 = ((x297!=(x298!=x299))%x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x301 = INT16_MIN;
	volatile uint32_t x302 = UINT32_MAX;
	static int16_t x303 = INT16_MIN;
	volatile uint32_t x304 = 10328657U;
	volatile uint32_t t73 = 281U;

    t73 = ((x301!=(x302!=x303))%x304);

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x305 = UINT32_MAX;
	volatile int32_t x306 = -585642;
	volatile int64_t x307 = INT64_MIN;
	int32_t x308 = 55;

    t74 = ((x305!=(x306!=x307))%x308);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x309 = 3U;
	int16_t x310 = INT16_MAX;
	int16_t x312 = INT16_MIN;
	volatile int32_t t75 = -37271505;

    t75 = ((x309!=(x310!=x311))%x312);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x313 = -47;
	uint64_t x314 = 43233439597246LLU;
	volatile int8_t x315 = INT8_MAX;
	volatile int32_t t76 = 7532;

    t76 = ((x313!=(x314!=x315))%x316);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x317 = UINT16_MAX;
	uint64_t x318 = 2449662544630513LLU;
	volatile int64_t x319 = -1LL;
	volatile uint32_t x320 = 134188U;
	uint32_t t77 = 1U;

    t77 = ((x317!=(x318!=x319))%x320);

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x321 = -1;
	volatile int32_t x323 = -1;
	static uint8_t x324 = 3U;
	int32_t t78 = 49355;

    t78 = ((x321!=(x322!=x323))%x324);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x325 = 3U;
	static int64_t x326 = INT64_MAX;
	uint32_t t79 = 1605154939U;

    t79 = ((x325!=(x326!=x327))%x328);

    if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x329 = 8U;
	static int16_t x330 = 0;
	volatile uint16_t x331 = 452U;
	int8_t x332 = INT8_MAX;

    t80 = ((x329!=(x330!=x331))%x332);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x333 = UINT16_MAX;
	uint16_t x334 = 55U;
	int8_t x335 = INT8_MIN;
	static volatile uint64_t t81 = 31LLU;

    t81 = ((x333!=(x334!=x335))%x336);

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = INT32_MIN;
	static int16_t x338 = INT16_MIN;
	static uint16_t x339 = 144U;
	int64_t x340 = -1LL;
	static volatile int64_t t82 = 34LL;

    t82 = ((x337!=(x338!=x339))%x340);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x341 = INT64_MIN;
	int32_t x342 = -1;
	static int8_t x343 = INT8_MIN;
	static uint16_t x344 = 6U;
	volatile int32_t t83 = -9265074;

    t83 = ((x341!=(x342!=x343))%x344);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MAX;
	int16_t x348 = -1915;
	static int32_t t84 = -236084871;

    t84 = ((x345!=(x346!=x347))%x348);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x349 = 8734233757493290LLU;
	volatile int16_t x350 = INT16_MAX;
	static int32_t x351 = INT32_MAX;
	static volatile int32_t t85 = -9935584;

    t85 = ((x349!=(x350!=x351))%x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x354 = 49;
	int32_t x355 = -1;
	int32_t x356 = -1;
	volatile int32_t t86 = 42601593;

    t86 = ((x353!=(x354!=x355))%x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x357 = INT64_MAX;
	uint32_t x358 = 25U;
	uint8_t x359 = 50U;
	volatile uint32_t x360 = UINT32_MAX;
	uint32_t t87 = 274274143U;

    t87 = ((x357!=(x358!=x359))%x360);

    if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x361 = 17U;
	volatile int16_t x362 = INT16_MIN;
	volatile int16_t x363 = -7920;
	volatile int32_t t88 = 23335;

    t88 = ((x361!=(x362!=x363))%x364);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x365 = 10;
	int16_t x367 = INT16_MIN;
	static int8_t x368 = INT8_MAX;
	volatile int32_t t89 = 656973295;

    t89 = ((x365!=(x366!=x367))%x368);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x370 = -1;
	int64_t x371 = 0LL;
	volatile uint64_t x372 = UINT64_MAX;
	static volatile uint64_t t90 = 59931LLU;

    t90 = ((x369!=(x370!=x371))%x372);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x373 = UINT32_MAX;
	static int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MAX;
	int8_t x376 = INT8_MIN;

    t91 = ((x373!=(x374!=x375))%x376);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x377 = -1LL;
	int64_t t92 = 427468130LL;

    t92 = ((x377!=(x378!=x379))%x380);

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x382 = INT8_MIN;
	int16_t x383 = -657;
	uint16_t x384 = 7U;
	volatile int32_t t93 = -130138;

    t93 = ((x381!=(x382!=x383))%x384);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	uint32_t x387 = 337472U;
	volatile int32_t t94 = -6;

    t94 = ((x385!=(x386!=x387))%x388);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x390 = 386327361LLU;
	int16_t x391 = -89;
	int32_t x392 = INT32_MIN;
	volatile int32_t t95 = -1;

    t95 = ((x389!=(x390!=x391))%x392);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x393 = 2725461U;
	uint64_t x395 = 4056933846223LLU;
	uint64_t x396 = 66683111044686580LLU;
	volatile uint64_t t96 = 7996482359318LLU;

    t96 = ((x393!=(x394!=x395))%x396);

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x397 = UINT8_MAX;
	volatile uint64_t x398 = 3LLU;
	volatile int8_t x400 = 1;
	volatile int32_t t97 = 9353;

    t97 = ((x397!=(x398!=x399))%x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x401 = -1LL;
	static volatile uint8_t x403 = 18U;
	static volatile uint16_t x404 = UINT16_MAX;
	int32_t t98 = 64634806;

    t98 = ((x401!=(x402!=x403))%x404);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x405 = 61;
	static int32_t x406 = INT32_MIN;
	int64_t x407 = -2396719496788LL;
	volatile int32_t t99 = 1;

    t99 = ((x405!=(x406!=x407))%x408);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x410 = 125U;
	static int64_t x411 = -1LL;
	volatile uint64_t t100 = 5535526LLU;

    t100 = ((x409!=(x410!=x411))%x412);

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x413 = -1;
	volatile uint16_t x414 = 958U;
	int64_t x415 = INT64_MIN;
	volatile int32_t x416 = -1;
	int32_t t101 = -23333;

    t101 = ((x413!=(x414!=x415))%x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x417 = 2U;
	int8_t x418 = -3;
	uint64_t x419 = UINT64_MAX;
	int32_t x420 = INT32_MIN;
	int32_t t102 = 3042871;

    t102 = ((x417!=(x418!=x419))%x420);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x421 = -1LL;
	volatile int64_t t103 = 7LL;

    t103 = ((x421!=(x422!=x423))%x424);

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x425 = -1;
	int8_t x426 = 1;
	volatile uint8_t x427 = 57U;
	int8_t x428 = -1;
	volatile int32_t t104 = -14;

    t104 = ((x425!=(x426!=x427))%x428);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x429 = 0U;
	uint32_t x431 = 1065870953U;
	int32_t x432 = 139835441;
	int32_t t105 = 2;

    t105 = ((x429!=(x430!=x431))%x432);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x433 = UINT16_MAX;
	static int64_t x434 = INT64_MIN;
	int8_t x436 = -19;
	int32_t t106 = 8832785;

    t106 = ((x433!=(x434!=x435))%x436);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x438 = INT64_MIN;
	int32_t x440 = -1;
	static volatile int32_t t107 = -14941;

    t107 = ((x437!=(x438!=x439))%x440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x441 = -1;
	volatile uint8_t x443 = 14U;
	uint64_t t108 = 5830844456801LLU;

    t108 = ((x441!=(x442!=x443))%x444);

    if (t108 != 1LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x446 = 1822234685840818967LL;
	int64_t x447 = INT64_MIN;
	uint64_t x448 = UINT64_MAX;
	static uint64_t t109 = 15983483202LLU;

    t109 = ((x445!=(x446!=x447))%x448);

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x449 = 1501789LLU;
	static uint64_t x450 = UINT64_MAX;
	int16_t x451 = INT16_MIN;
	static int64_t x452 = -8715471755LL;

    t110 = ((x449!=(x450!=x451))%x452);

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x454 = -1;
	int16_t x455 = -1559;
	static uint8_t x456 = 4U;

    t111 = ((x453!=(x454!=x455))%x456);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x458 = 219LLU;
	volatile uint64_t x459 = UINT64_MAX;
	int16_t x460 = -1;
	volatile int32_t t112 = 556401555;

    t112 = ((x457!=(x458!=x459))%x460);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x461 = 644U;
	int32_t x462 = -1;
	int16_t x464 = INT16_MAX;

    t113 = ((x461!=(x462!=x463))%x464);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x465 = 3223318U;
	int8_t x466 = -1;
	volatile uint8_t x467 = UINT8_MAX;
	uint32_t x468 = UINT32_MAX;
	uint32_t t114 = 44U;

    t114 = ((x465!=(x466!=x467))%x468);

    if (t114 != 1U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x469 = INT64_MIN;
	int32_t x470 = INT32_MIN;
	int16_t x472 = INT16_MAX;
	volatile int32_t t115 = -503;

    t115 = ((x469!=(x470!=x471))%x472);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x473 = 4009U;
	int8_t x474 = INT8_MIN;
	volatile int32_t x475 = 1006;
	uint8_t x476 = UINT8_MAX;
	volatile int32_t t116 = -918930690;

    t116 = ((x473!=(x474!=x475))%x476);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x477 = 41U;
	uint32_t x478 = 8114U;
	int8_t x479 = INT8_MIN;
	int16_t x480 = -1;

    t117 = ((x477!=(x478!=x479))%x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x481 = INT64_MAX;
	volatile uint32_t x483 = UINT32_MAX;
	int64_t x484 = INT64_MIN;
	volatile int64_t t118 = 3637LL;

    t118 = ((x481!=(x482!=x483))%x484);

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x485 = 127U;
	uint32_t x487 = 4203737U;
	volatile uint64_t x488 = 36LLU;
	volatile uint64_t t119 = 10067665LLU;

    t119 = ((x485!=(x486!=x487))%x488);

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x489 = 5U;
	int32_t x490 = -1008117;
	uint32_t x492 = 4584033U;
	uint32_t t120 = 39887U;

    t120 = ((x489!=(x490!=x491))%x492);

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x493 = 1LLU;
	int8_t x494 = INT8_MIN;
	int64_t x496 = -11LL;
	int64_t t121 = -263726009122LL;

    t121 = ((x493!=(x494!=x495))%x496);

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x497 = -5714262819196LL;
	volatile int64_t x498 = 699376187443225LL;
	int8_t x499 = INT8_MIN;
	static uint16_t x500 = 1888U;
	volatile int32_t t122 = -282998720;

    t122 = ((x497!=(x498!=x499))%x500);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x505 = 17;
	int32_t x506 = -4026;
	int16_t x507 = INT16_MAX;
	uint8_t x508 = 50U;
	volatile int32_t t123 = -12731742;

    t123 = ((x505!=(x506!=x507))%x508);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x509 = 206;
	int16_t x510 = 1;
	uint8_t x512 = UINT8_MAX;
	volatile int32_t t124 = -26977;

    t124 = ((x509!=(x510!=x511))%x512);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x513 = INT8_MAX;
	int32_t x514 = 196;
	int16_t x515 = INT16_MIN;
	volatile uint32_t t125 = 519225U;

    t125 = ((x513!=(x514!=x515))%x516);

    if (t125 != 1U) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x518 = INT32_MIN;
	volatile int64_t x519 = 29461149LL;
	int64_t x520 = INT64_MIN;
	int64_t t126 = -158229LL;

    t126 = ((x517!=(x518!=x519))%x520);

    if (t126 != 1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x522 = 2519U;
	uint16_t x523 = 25U;
	volatile uint32_t t127 = 71221U;

    t127 = ((x521!=(x522!=x523))%x524);

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x525 = UINT32_MAX;
	static int32_t x526 = INT32_MAX;
	static uint16_t x527 = 170U;
	static uint16_t x528 = 1765U;
	volatile int32_t t128 = 7;

    t128 = ((x525!=(x526!=x527))%x528);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x530 = 86U;
	int16_t x532 = INT16_MIN;

    t129 = ((x529!=(x530!=x531))%x532);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x533 = 0;
	int32_t x534 = -218599;
	volatile int64_t x535 = 7020606723LL;
	volatile int16_t x536 = -66;

    t130 = ((x533!=(x534!=x535))%x536);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x537 = 14U;
	int32_t x539 = INT32_MIN;
	static int16_t x540 = -1;
	static int32_t t131 = 520645;

    t131 = ((x537!=(x538!=x539))%x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x541 = INT8_MIN;
	static uint64_t x542 = 529384794179855LLU;
	int8_t x544 = 20;
	volatile int32_t t132 = 387;

    t132 = ((x541!=(x542!=x543))%x544);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x545 = INT16_MIN;
	int32_t x546 = INT32_MIN;
	int16_t x547 = -1;
	int32_t t133 = -1355;

    t133 = ((x545!=(x546!=x547))%x548);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x549 = INT64_MIN;
	uint64_t x550 = 131347984923155994LLU;
	static int16_t x551 = INT16_MIN;
	volatile uint64_t x552 = 18LLU;
	volatile uint64_t t134 = 110986LLU;

    t134 = ((x549!=(x550!=x551))%x552);

    if (t134 != 1LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x554 = -23;
	int16_t x556 = -8977;
	volatile int32_t t135 = -408;

    t135 = ((x553!=(x554!=x555))%x556);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x557 = INT64_MAX;
	static int32_t x558 = -17612;
	int32_t x560 = 1;
	volatile int32_t t136 = -1003;

    t136 = ((x557!=(x558!=x559))%x560);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x562 = INT8_MIN;
	static int8_t x563 = -1;
	int32_t t137 = 3163965;

    t137 = ((x561!=(x562!=x563))%x564);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x566 = INT32_MIN;
	uint32_t x567 = 30U;
	volatile int16_t x568 = INT16_MIN;

    t138 = ((x565!=(x566!=x567))%x568);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x570 = 0;
	int64_t x572 = INT64_MIN;
	static volatile int64_t t139 = -62218117LL;

    t139 = ((x569!=(x570!=x571))%x572);

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x575 = UINT8_MAX;
	int16_t x576 = INT16_MAX;
	volatile int32_t t140 = -43187139;

    t140 = ((x573!=(x574!=x575))%x576);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x577 = -212298105905459885LL;
	static int8_t x578 = -1;
	static volatile int64_t x579 = INT64_MAX;
	int64_t x580 = INT64_MAX;
	volatile int64_t t141 = 16633708LL;

    t141 = ((x577!=(x578!=x579))%x580);

    if (t141 != 1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x582 = 20LLU;
	int64_t x584 = 887174757989886LL;

    t142 = ((x581!=(x582!=x583))%x584);

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x585 = 5840U;
	int8_t x586 = INT8_MAX;
	volatile uint16_t x587 = UINT16_MAX;
	int16_t x588 = INT16_MIN;

    t143 = ((x585!=(x586!=x587))%x588);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x589 = INT8_MIN;
	volatile int16_t x591 = -25;
	int64_t t144 = -32103401786LL;

    t144 = ((x589!=(x590!=x591))%x592);

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x593 = INT32_MIN;
	volatile int64_t x594 = -1LL;
	int32_t x595 = -1;
	static uint8_t x596 = 2U;

    t145 = ((x593!=(x594!=x595))%x596);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x597 = INT32_MIN;
	static int32_t x599 = INT32_MAX;
	static int16_t x600 = INT16_MIN;
	int32_t t146 = -161342;

    t146 = ((x597!=(x598!=x599))%x600);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x601 = 151903;
	int16_t x603 = INT16_MIN;
	volatile uint64_t x604 = 1LLU;
	uint64_t t147 = 17467LLU;

    t147 = ((x601!=(x602!=x603))%x604);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x605 = INT16_MAX;
	static int8_t x606 = -1;
	volatile int16_t x607 = INT16_MIN;
	uint64_t x608 = UINT64_MAX;

    t148 = ((x605!=(x606!=x607))%x608);

    if (t148 != 1LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x610 = UINT32_MAX;
	static int16_t x611 = INT16_MIN;
	int32_t x612 = -1;
	volatile int32_t t149 = 20;

    t149 = ((x609!=(x610!=x611))%x612);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x614 = 1;
	int32_t x615 = INT32_MAX;
	volatile int32_t t150 = 133;

    t150 = ((x613!=(x614!=x615))%x616);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x618 = INT32_MIN;
	int8_t x619 = INT8_MIN;
	static int8_t x620 = INT8_MIN;

    t151 = ((x617!=(x618!=x619))%x620);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t t152 = -3166093;

    t152 = ((x621!=(x622!=x623))%x624);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x625 = 7;
	static uint64_t x626 = 224884501LLU;
	static int64_t x628 = -1LL;
	int64_t t153 = -153577LL;

    t153 = ((x625!=(x626!=x627))%x628);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x629 = UINT8_MAX;
	int64_t x630 = INT64_MIN;
	int32_t x632 = -1;
	volatile int32_t t154 = -29;

    t154 = ((x629!=(x630!=x631))%x632);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x633 = INT64_MIN;
	int16_t x635 = 1667;
	uint8_t x636 = 39U;
	volatile int32_t t155 = 8105246;

    t155 = ((x633!=(x634!=x635))%x636);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x637 = -1;
	volatile uint16_t x639 = UINT16_MAX;
	static volatile int8_t x640 = 1;
	int32_t t156 = -1;

    t156 = ((x637!=(x638!=x639))%x640);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x641 = 5U;
	int32_t x642 = -62797638;
	volatile uint64_t x643 = 315303986285603LLU;
	static int8_t x644 = INT8_MIN;
	int32_t t157 = 981;

    t157 = ((x641!=(x642!=x643))%x644);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x645 = INT32_MIN;
	volatile uint32_t x646 = 2951U;
	volatile int64_t x647 = -1LL;
	volatile int16_t x648 = 12;
	volatile int32_t t158 = -266119;

    t158 = ((x645!=(x646!=x647))%x648);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x649 = UINT32_MAX;
	uint64_t x650 = 8012865997579LLU;
	int16_t x651 = -1;
	int32_t x652 = INT32_MAX;
	static int32_t t159 = 367708;

    t159 = ((x649!=(x650!=x651))%x652);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x654 = UINT64_MAX;
	uint64_t x655 = 8942471968276LLU;
	int64_t x656 = -1LL;
	volatile int64_t t160 = -65087179408096LL;

    t160 = ((x653!=(x654!=x655))%x656);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x657 = 97U;
	static uint32_t x658 = 359U;
	int16_t x660 = -1;
	static volatile int32_t t161 = 184504;

    t161 = ((x657!=(x658!=x659))%x660);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x661 = 1083U;
	int32_t x662 = INT32_MIN;
	uint32_t x664 = 10189556U;
	uint32_t t162 = 6U;

    t162 = ((x661!=(x662!=x663))%x664);

    if (t162 != 1U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x665 = 217868000004453LL;
	volatile int64_t x666 = INT64_MIN;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t163 = -551058574;

    t163 = ((x665!=(x666!=x667))%x668);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x669 = -4;
	uint16_t x670 = 30859U;
	int64_t x672 = INT64_MAX;
	int64_t t164 = -24606175LL;

    t164 = ((x669!=(x670!=x671))%x672);

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x673 = 27060964510052LLU;
	uint64_t x674 = 5885278862LLU;
	int64_t x675 = INT64_MIN;
	uint32_t x676 = UINT32_MAX;
	uint32_t t165 = 13107U;

    t165 = ((x673!=(x674!=x675))%x676);

    if (t165 != 1U) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x677 = 0U;
	static uint8_t x678 = 7U;
	volatile int16_t x680 = INT16_MIN;
	static int32_t t166 = -947;

    t166 = ((x677!=(x678!=x679))%x680);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x681 = INT8_MIN;
	static int16_t x682 = 52;
	int64_t x683 = INT64_MAX;
	uint16_t x684 = UINT16_MAX;
	int32_t t167 = 44;

    t167 = ((x681!=(x682!=x683))%x684);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x685 = 0;
	int32_t x686 = -127764403;
	int8_t x687 = INT8_MAX;
	volatile uint8_t x688 = UINT8_MAX;
	int32_t t168 = -48;

    t168 = ((x685!=(x686!=x687))%x688);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x689 = -8351;
	volatile int8_t x690 = -1;
	static int8_t x691 = -1;
	int8_t x692 = INT8_MAX;
	volatile int32_t t169 = -4386;

    t169 = ((x689!=(x690!=x691))%x692);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x693 = INT32_MIN;
	uint64_t x695 = 22862822618LLU;
	int16_t x696 = -1;
	static int32_t t170 = -124743;

    t170 = ((x693!=(x694!=x695))%x696);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x697 = INT32_MAX;
	uint32_t x699 = UINT32_MAX;
	int16_t x700 = -1;
	int32_t t171 = -106761;

    t171 = ((x697!=(x698!=x699))%x700);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x702 = 3578U;
	int8_t x703 = -1;
	int16_t x704 = -1;
	volatile int32_t t172 = -24202;

    t172 = ((x701!=(x702!=x703))%x704);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x705 = -1;
	int64_t x706 = -263439982518LL;
	volatile uint64_t x707 = 115LLU;
	int8_t x708 = -1;

    t173 = ((x705!=(x706!=x707))%x708);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x710 = -1;
	uint8_t x711 = UINT8_MAX;
	int16_t x712 = INT16_MIN;

    t174 = ((x709!=(x710!=x711))%x712);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x713 = -1;
	static volatile int64_t x715 = INT64_MAX;
	volatile int16_t x716 = INT16_MIN;
	volatile int32_t t175 = 3231;

    t175 = ((x713!=(x714!=x715))%x716);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x717 = -1;
	uint32_t x718 = 6708144U;
	static uint64_t t176 = 4248177773LLU;

    t176 = ((x717!=(x718!=x719))%x720);

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x721 = INT16_MIN;
	static int16_t x722 = -24;
	uint8_t x723 = 0U;
	int64_t x724 = -1LL;
	int64_t t177 = 211106375LL;

    t177 = ((x721!=(x722!=x723))%x724);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x725 = UINT32_MAX;
	int32_t x726 = -1;
	uint16_t x727 = 30U;
	int8_t x728 = INT8_MIN;
	volatile int32_t t178 = -213179741;

    t178 = ((x725!=(x726!=x727))%x728);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x729 = 13U;
	static int16_t x730 = -1;
	uint8_t x731 = 0U;
	int16_t x732 = -1;

    t179 = ((x729!=(x730!=x731))%x732);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x734 = 4529LLU;
	int16_t x735 = INT16_MIN;
	uint32_t x736 = 7302U;

    t180 = ((x733!=(x734!=x735))%x736);

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x738 = UINT16_MAX;
	static int64_t x739 = INT64_MIN;
	int32_t x740 = 1;

    t181 = ((x737!=(x738!=x739))%x740);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x741 = INT32_MAX;
	volatile int8_t x742 = INT8_MAX;
	uint16_t x743 = UINT16_MAX;
	static int32_t x744 = 22;
	int32_t t182 = 286114;

    t182 = ((x741!=(x742!=x743))%x744);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x745 = INT32_MIN;
	uint16_t x748 = 32U;
	volatile int32_t t183 = -106747932;

    t183 = ((x745!=(x746!=x747))%x748);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x749 = INT8_MIN;
	volatile int16_t x750 = INT16_MIN;
	int8_t x751 = -2;
	int8_t x752 = INT8_MAX;
	volatile int32_t t184 = 0;

    t184 = ((x749!=(x750!=x751))%x752);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x757 = 32396620548440468LL;
	uint8_t x758 = UINT8_MAX;
	int64_t x759 = 384606555484311LL;
	int8_t x760 = -14;
	static volatile int32_t t185 = -1;

    t185 = ((x757!=(x758!=x759))%x760);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x762 = 11459289LL;
	static uint8_t x763 = UINT8_MAX;
	uint8_t x764 = 3U;
	static volatile int32_t t186 = -12;

    t186 = ((x761!=(x762!=x763))%x764);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x765 = 4145;
	volatile int8_t x766 = INT8_MAX;
	volatile uint16_t x767 = 6U;
	uint32_t x768 = 10U;

    t187 = ((x765!=(x766!=x767))%x768);

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x769 = 19U;
	int64_t x770 = INT64_MIN;
	static int8_t x771 = INT8_MAX;
	int64_t t188 = 35071107282178LL;

    t188 = ((x769!=(x770!=x771))%x772);

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x773 = INT32_MIN;
	static int8_t x775 = -3;
	static int16_t x776 = INT16_MIN;
	int32_t t189 = 1;

    t189 = ((x773!=(x774!=x775))%x776);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x777 = 0LLU;
	int8_t x778 = 1;
	volatile int8_t x779 = INT8_MIN;
	volatile uint32_t t190 = 349226U;

    t190 = ((x777!=(x778!=x779))%x780);

    if (t190 != 1U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x781 = -703746847;
	uint8_t x782 = UINT8_MAX;
	int64_t x783 = INT64_MIN;
	uint32_t x784 = UINT32_MAX;

    t191 = ((x781!=(x782!=x783))%x784);

    if (t191 != 1U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x785 = 10;
	static int8_t x787 = INT8_MIN;
	uint8_t x788 = 41U;
	int32_t t192 = -1;

    t192 = ((x785!=(x786!=x787))%x788);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x789 = INT32_MAX;
	uint16_t x791 = UINT16_MAX;
	volatile uint64_t x792 = 1991145165LLU;
	uint64_t t193 = 11LLU;

    t193 = ((x789!=(x790!=x791))%x792);

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x793 = UINT64_MAX;
	static int8_t x794 = INT8_MAX;
	uint64_t x795 = 32824708687336202LLU;
	static int64_t x796 = INT64_MIN;

    t194 = ((x793!=(x794!=x795))%x796);

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x797 = 63U;
	volatile int64_t x798 = INT64_MIN;
	uint8_t x799 = 0U;
	int32_t x800 = INT32_MIN;
	volatile int32_t t195 = 3;

    t195 = ((x797!=(x798!=x799))%x800);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x801 = 61847;
	int64_t x802 = INT64_MIN;
	int64_t x803 = INT64_MIN;
	int32_t x804 = 891;
	int32_t t196 = 528;

    t196 = ((x801!=(x802!=x803))%x804);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x805 = INT64_MIN;
	int64_t x806 = -1LL;
	int64_t x807 = 6500LL;
	uint32_t x808 = UINT32_MAX;
	volatile uint32_t t197 = 1897558U;

    t197 = ((x805!=(x806!=x807))%x808);

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x810 = INT64_MIN;
	int16_t x812 = INT16_MIN;
	int32_t t198 = 1;

    t198 = ((x809!=(x810!=x811))%x812);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x813 = INT16_MIN;
	int8_t x814 = INT8_MIN;
	static int16_t x815 = -1;
	int32_t x816 = -3044;
	volatile int32_t t199 = -4;

    t199 = ((x813!=(x814!=x815))%x816);

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

