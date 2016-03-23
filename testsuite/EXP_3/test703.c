
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

volatile int8_t x3 = INT8_MIN;
uint8_t x5 = UINT8_MAX;
uint32_t x7 = 6432440U;
static int32_t x11 = -1;
volatile int32_t t2 = 5606311;
static int64_t x20 = INT64_MAX;
static volatile int64_t t4 = 0LL;
volatile int16_t x23 = INT16_MAX;
static int32_t t5 = 12;
int32_t x40 = -2290799;
int16_t x41 = INT16_MIN;
int64_t t9 = -18LL;
static volatile int64_t x56 = 10341901370870LL;
uint32_t x58 = 9303303U;
static int16_t x60 = INT16_MIN;
int16_t x82 = INT16_MIN;
volatile int16_t x85 = INT16_MAX;
int64_t t19 = 3353399512944295LL;
uint32_t x93 = 28609U;
int64_t x109 = INT64_MAX;
static volatile int32_t x112 = INT32_MIN;
int64_t x114 = INT64_MIN;
volatile int32_t x116 = -1;
int64_t x120 = INT64_MIN;
int64_t t27 = 296LL;
int16_t x121 = INT16_MIN;
int64_t x125 = INT64_MIN;
uint8_t x127 = 26U;
int16_t x128 = INT16_MAX;
int64_t x129 = INT64_MAX;
static volatile uint32_t x131 = 513405U;
static volatile int16_t x135 = INT16_MIN;
static uint32_t x137 = 284U;
volatile uint32_t t32 = 2714U;
volatile uint32_t x144 = UINT32_MAX;
uint32_t t33 = 5398U;
int16_t x151 = -1;
int8_t x152 = -1;
int16_t x154 = 506;
volatile int64_t x156 = 90813817852LL;
static int16_t x162 = INT16_MIN;
int64_t x165 = 2LL;
static uint64_t x172 = UINT64_MAX;
static uint16_t x173 = 20860U;
int8_t x180 = INT8_MAX;
uint32_t x182 = 156U;
volatile int16_t x185 = INT16_MAX;
volatile int32_t t44 = -131048072;
int64_t x192 = INT64_MAX;
static int64_t t45 = -2848LL;
volatile int32_t t47 = -25;
int16_t x202 = -1887;
volatile int32_t x206 = -697;
volatile int32_t x208 = -1687;
uint8_t x211 = UINT8_MAX;
static volatile uint32_t x221 = UINT32_MAX;
int8_t x230 = INT8_MIN;
volatile int32_t t57 = -16583098;
volatile int8_t x248 = INT8_MIN;
int32_t t58 = -555;
int8_t x249 = INT8_MIN;
volatile int64_t x255 = -695005556128317603LL;
static int8_t x260 = 4;
volatile int32_t t61 = 7330541;
int64_t x274 = -1LL;
volatile uint32_t t65 = 223U;
int64_t x282 = -1LL;
static int32_t x284 = INT32_MAX;
int16_t x288 = -1;
uint32_t x289 = UINT32_MAX;
int8_t x291 = INT8_MIN;
volatile int8_t x297 = INT8_MAX;
uint8_t x298 = UINT8_MAX;
int32_t t71 = -118720431;
uint16_t x305 = 0U;
volatile uint32_t x311 = 14436U;
uint16_t x314 = 9U;
int8_t x321 = 44;
static int16_t x323 = INT16_MAX;
int32_t t79 = -3;
volatile int32_t x333 = 6421;
int16_t x334 = INT16_MIN;
static volatile int16_t x345 = INT16_MAX;
uint16_t x347 = 475U;
int64_t x349 = INT64_MIN;
int64_t t84 = 64040LL;
uint32_t x355 = 394983234U;
uint32_t x360 = UINT32_MAX;
int32_t x377 = -36339;
static volatile uint8_t x378 = 0U;
int16_t x379 = -1;
int32_t t90 = 1;
static int32_t x382 = INT32_MAX;
static volatile uint32_t t91 = 3898U;
volatile int32_t x385 = 0;
volatile int32_t t92 = -874121;
static uint8_t x391 = 0U;
static int8_t x402 = INT8_MAX;
static int64_t x411 = -1LL;
int32_t x412 = -1;
static volatile int32_t x420 = -1;
uint32_t x423 = 8812U;
static uint16_t x424 = 18U;
uint8_t x432 = 103U;
static uint32_t x434 = UINT32_MAX;
int32_t x437 = -1;
static volatile int64_t t105 = -6224601913093629LL;
int16_t x445 = INT16_MIN;
volatile int64_t t107 = 692189LL;
volatile uint64_t t108 = 10819039539886703LLU;
int8_t x469 = 1;
int32_t x473 = -163516268;
static int16_t x474 = -1;
int64_t x476 = INT64_MAX;
int64_t x489 = INT64_MAX;
volatile int16_t x490 = INT16_MIN;
int16_t x500 = INT16_MAX;
int64_t x508 = 2605727LL;
volatile uint32_t x510 = 128195884U;
int16_t x511 = INT16_MAX;
volatile int32_t t123 = 14996292;
int32_t x523 = -2176550;
uint64_t t125 = 12LLU;
int32_t x526 = INT32_MIN;
uint64_t x537 = UINT64_MAX;
volatile int64_t t129 = -861523404284973519LL;
volatile int64_t x542 = INT64_MIN;
volatile int8_t x543 = INT8_MAX;
int16_t x549 = -1;
volatile uint16_t x554 = 1062U;
volatile uint64_t t133 = 12065162610812LLU;
int32_t x557 = 97;
volatile int16_t x564 = -1;
int32_t x570 = -6;
uint32_t x573 = 270797861U;
static volatile uint64_t x580 = 277608267978235638LLU;
int16_t x581 = -1598;
uint32_t x584 = UINT32_MAX;
volatile uint32_t t140 = 114781U;
static int16_t x590 = -30;
static int64_t x594 = INT64_MAX;
static uint8_t x595 = UINT8_MAX;
int64_t x597 = INT64_MIN;
volatile uint16_t x598 = 189U;
volatile int8_t x601 = INT8_MIN;
int16_t x612 = INT16_MIN;
int32_t t148 = 4;
uint16_t x620 = UINT16_MAX;
static uint32_t x621 = UINT32_MAX;
int8_t x633 = INT8_MAX;
uint32_t x647 = 31873U;
int16_t x648 = -1;
uint32_t t156 = 43131U;
volatile uint8_t x656 = 1U;
int8_t x661 = INT8_MAX;
int8_t x665 = INT8_MIN;
volatile uint16_t x672 = UINT16_MAX;
int16_t x673 = -1;
static int64_t x682 = -1LL;
int64_t x685 = -1LL;
uint64_t x687 = 264782724LLU;
int8_t x688 = -1;
static int16_t x689 = 2779;
int16_t x694 = -1;
int64_t x695 = -1LL;
static int8_t x697 = 9;
static volatile int16_t x702 = 5;
static volatile int64_t t170 = 70704294799374LL;
volatile uint64_t x706 = UINT64_MAX;
static int64_t x709 = INT64_MIN;
static uint64_t x714 = 51LLU;
static int32_t x728 = -1;
int64_t x730 = INT64_MAX;
static int32_t t177 = 1;
volatile int16_t x736 = -1;
int8_t x741 = -24;
static uint32_t x742 = 1482U;
static int16_t x750 = -1;
uint64_t t182 = 6458932550283LLU;
static int32_t x754 = INT32_MIN;
uint64_t x769 = UINT64_MAX;
uint64_t x773 = UINT64_MAX;
int8_t x774 = INT8_MIN;
int32_t x776 = INT32_MIN;
static volatile int16_t x779 = INT16_MIN;
int16_t x791 = -1;
int16_t x798 = INT16_MIN;
int64_t t192 = 52499060LL;
int32_t x802 = -52779;
int64_t t193 = -46745134LL;
uint16_t x805 = UINT16_MAX;
uint8_t x807 = 0U;
volatile int16_t x818 = INT16_MIN;
static int32_t x826 = INT32_MIN;


void f0(void) {
    	volatile int8_t x1 = 14;
	volatile uint8_t x2 = UINT8_MAX;
	int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = -50718441;

    t0 = ((x1>x2)*(x3/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x6 = INT8_MAX;
	volatile uint16_t x8 = 6U;
	uint32_t t1 = 121761U;

    t1 = ((x5>x6)*(x7/x8));

    if (t1 != 1072073U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 983U;
	uint32_t x10 = UINT32_MAX;
	static int8_t x12 = 1;

    t2 = ((x9>x10)*(x11/x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 209026452U;
	uint32_t x14 = 112771395U;
	volatile int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MIN;
	volatile int64_t t3 = 65510558701008921LL;

    t3 = ((x13>x14)*(x15/x16));

    if (t3 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x17 = INT8_MAX;
	static int8_t x18 = 2;
	volatile int64_t x19 = 0LL;

    t4 = ((x17>x18)*(x19/x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	static int64_t x22 = 99917515791865LL;
	int16_t x24 = -1;

    t5 = ((x21>x22)*(x23/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	static int32_t x26 = 12452;
	static int32_t x27 = INT32_MIN;
	int64_t x28 = 36LL;
	volatile int64_t t6 = 181212891LL;

    t6 = ((x25>x26)*(x27/x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = UINT16_MAX;
	int64_t x34 = -5LL;
	int32_t x35 = INT32_MAX;
	volatile uint64_t x36 = 3475378044077101030LLU;
	uint64_t t7 = 326582851618982LLU;

    t7 = ((x33>x34)*(x35/x36));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MIN;
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = INT16_MAX;
	int32_t t8 = -29;

    t8 = ((x37>x38)*(x39/x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x42 = UINT16_MAX;
	int32_t x43 = -105;
	int64_t x44 = -1LL;

    t9 = ((x41>x42)*(x43/x44));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = 59U;
	int64_t x50 = INT64_MIN;
	int8_t x51 = INT8_MIN;
	int64_t x52 = INT64_MIN;
	static int64_t t10 = 41171104293031486LL;

    t10 = ((x49>x50)*(x51/x52));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 7216U;
	int64_t x54 = INT64_MIN;
	uint32_t x55 = 6133U;
	volatile int64_t t11 = 175024315380715LL;

    t11 = ((x53>x54)*(x55/x56));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x57 = 31U;
	uint32_t x59 = 643U;
	uint32_t t12 = 91317271U;

    t12 = ((x57>x58)*(x59/x60));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = INT64_MIN;
	static uint16_t x62 = 2132U;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = 14;
	volatile int32_t t13 = 25346999;

    t13 = ((x61>x62)*(x63/x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = UINT64_MAX;
	static int32_t x66 = INT32_MAX;
	int64_t x67 = 558496226LL;
	uint16_t x68 = UINT16_MAX;
	volatile int64_t t14 = 33619748189465LL;

    t14 = ((x65>x66)*(x67/x68));

    if (t14 != 8522LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x69 = 3366U;
	uint16_t x70 = 0U;
	int8_t x71 = INT8_MIN;
	static uint64_t x72 = 3073LLU;
	uint64_t t15 = 1055063778290387LLU;

    t15 = ((x69>x70)*(x71/x72));

    if (t15 != 6002845451906785LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x73 = INT16_MIN;
	int64_t x74 = 1566473581661LL;
	int16_t x75 = -1;
	uint16_t x76 = 7U;
	int32_t t16 = -15299;

    t16 = ((x73>x74)*(x75/x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x77 = 934LLU;
	int16_t x78 = INT16_MIN;
	uint16_t x79 = 3U;
	static int8_t x80 = -1;
	volatile int32_t t17 = 116;

    t17 = ((x77>x78)*(x79/x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x81 = -1;
	volatile int32_t x83 = -1;
	volatile int64_t x84 = -1LL;
	int64_t t18 = -935406724870021047LL;

    t18 = ((x81>x82)*(x83/x84));

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x86 = 777U;
	int8_t x87 = -1;
	static int64_t x88 = -1LL;

    t19 = ((x85>x86)*(x87/x88));

    if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = -461;
	volatile int32_t x90 = INT32_MAX;
	uint32_t x91 = 397453753U;
	volatile uint32_t x92 = 135U;
	uint32_t t20 = 5843377U;

    t20 = ((x89>x90)*(x91/x92));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x94 = 0U;
	int32_t x95 = INT32_MIN;
	uint16_t x96 = UINT16_MAX;
	static int32_t t21 = -1599939;

    t21 = ((x93>x94)*(x95/x96));

    if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x97 = UINT8_MAX;
	uint16_t x98 = 3U;
	uint8_t x99 = 1U;
	static uint16_t x100 = 9023U;
	int32_t t22 = 0;

    t22 = ((x97>x98)*(x99/x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x101 = -1;
	uint32_t x102 = 223338982U;
	uint32_t x103 = UINT32_MAX;
	int16_t x104 = -2762;
	uint32_t t23 = 0U;

    t23 = ((x101>x102)*(x103/x104));

    if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = -1;
	uint64_t x106 = 1237457694LLU;
	int8_t x107 = INT8_MIN;
	static int64_t x108 = -1LL;
	int64_t t24 = 316355667259892LL;

    t24 = ((x105>x106)*(x107/x108));

    if (t24 != 128LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x110 = -1LL;
	static uint8_t x111 = 0U;
	volatile int32_t t25 = -113;

    t25 = ((x109>x110)*(x111/x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x113 = 84976433U;
	int16_t x115 = 2;
	static volatile int32_t t26 = -106472869;

    t26 = ((x113>x114)*(x115/x116));

    if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = UINT16_MAX;
	int32_t x118 = -1;
	uint16_t x119 = 7042U;

    t27 = ((x117>x118)*(x119/x120));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x122 = -679346LL;
	uint16_t x123 = 814U;
	int16_t x124 = -1;
	volatile int32_t t28 = 199751002;

    t28 = ((x121>x122)*(x123/x124));

    if (t28 != -814) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x126 = INT64_MIN;
	volatile int32_t t29 = -7484;

    t29 = ((x125>x126)*(x127/x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x130 = 532140U;
	int32_t x132 = -3885;
	uint32_t t30 = 6658U;

    t30 = ((x129>x130)*(x131/x132));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x133 = INT32_MAX;
	static int32_t x134 = INT32_MAX;
	int64_t x136 = 4765LL;
	static int64_t t31 = 28466802LL;

    t31 = ((x133>x134)*(x135/x136));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x138 = 0;
	volatile uint32_t x139 = 781206064U;
	int16_t x140 = INT16_MIN;

    t32 = ((x137>x138)*(x139/x140));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint16_t x141 = 3642U;
	uint16_t x142 = UINT16_MAX;
	uint32_t x143 = 5U;

    t33 = ((x141>x142)*(x143/x144));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x145 = 3965;
	int16_t x146 = -1;
	static int32_t x147 = 337575136;
	static volatile uint64_t x148 = 1714262012990148925LLU;
	volatile uint64_t t34 = 657974205887333762LLU;

    t34 = ((x145>x146)*(x147/x148));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x149 = INT32_MIN;
	int16_t x150 = -62;
	volatile int32_t t35 = -490850;

    t35 = ((x149>x150)*(x151/x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = INT32_MIN;
	int64_t x155 = INT64_MIN;
	int64_t t36 = 24816349079912901LL;

    t36 = ((x153>x154)*(x155/x156));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x157 = UINT8_MAX;
	int64_t x158 = INT64_MIN;
	int8_t x159 = INT8_MAX;
	static uint32_t x160 = UINT32_MAX;
	uint32_t t37 = 10U;

    t37 = ((x157>x158)*(x159/x160));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = -1;
	volatile uint16_t x163 = UINT16_MAX;
	int8_t x164 = -1;
	int32_t t38 = 2934865;

    t38 = ((x161>x162)*(x163/x164));

    if (t38 != -65535) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x166 = 2U;
	int32_t x167 = INT32_MAX;
	int16_t x168 = INT16_MIN;
	static volatile int32_t t39 = -4475860;

    t39 = ((x165>x166)*(x167/x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = INT8_MIN;
	uint16_t x170 = UINT16_MAX;
	int64_t x171 = INT64_MIN;
	static volatile uint64_t t40 = 11967627081345914LLU;

    t40 = ((x169>x170)*(x171/x172));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x174 = -10255;
	int8_t x175 = INT8_MIN;
	static int8_t x176 = -3;
	static volatile int32_t t41 = 3252;

    t41 = ((x173>x174)*(x175/x176));

    if (t41 != 42) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x177 = 5U;
	static uint64_t x178 = UINT64_MAX;
	int16_t x179 = 1;
	static volatile int32_t t42 = -6363036;

    t42 = ((x177>x178)*(x179/x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x181 = 2U;
	static int32_t x183 = INT32_MAX;
	uint16_t x184 = UINT16_MAX;
	int32_t t43 = 673;

    t43 = ((x181>x182)*(x183/x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x186 = INT8_MIN;
	int16_t x187 = -1;
	uint16_t x188 = UINT16_MAX;

    t44 = ((x185>x186)*(x187/x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = 2036U;
	static int8_t x190 = INT8_MAX;
	int8_t x191 = 25;

    t45 = ((x189>x190)*(x191/x192));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x193 = 15U;
	uint16_t x194 = 12U;
	uint8_t x195 = UINT8_MAX;
	uint8_t x196 = 7U;
	int32_t t46 = -3479;

    t46 = ((x193>x194)*(x195/x196));

    if (t46 != 36) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = -1;
	int16_t x198 = INT16_MIN;
	uint16_t x199 = UINT16_MAX;
	volatile uint16_t x200 = 21U;

    t47 = ((x197>x198)*(x199/x200));

    if (t47 != 3120) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x201 = 8;
	static int32_t x203 = -21441;
	uint32_t x204 = UINT32_MAX;
	uint32_t t48 = 2907163U;

    t48 = ((x201>x202)*(x203/x204));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = INT32_MAX;
	int8_t x207 = INT8_MIN;
	static int32_t t49 = 423229;

    t49 = ((x205>x206)*(x207/x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = -1LL;
	uint16_t x210 = 182U;
	volatile uint16_t x212 = UINT16_MAX;
	volatile int32_t t50 = -1;

    t50 = ((x209>x210)*(x211/x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x213 = 27;
	int8_t x214 = -1;
	volatile int32_t x215 = -22381553;
	static int64_t x216 = INT64_MIN;
	static int64_t t51 = -2238832106015LL;

    t51 = ((x213>x214)*(x215/x216));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x222 = UINT8_MAX;
	int64_t x223 = 4101415LL;
	uint64_t x224 = 1934LLU;
	volatile uint64_t t52 = 754775LLU;

    t52 = ((x221>x222)*(x223/x224));

    if (t52 != 2120LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = -1;
	static volatile int8_t x226 = -1;
	static volatile int16_t x227 = 80;
	volatile uint16_t x228 = 103U;
	int32_t t53 = -2747;

    t53 = ((x225>x226)*(x227/x228));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = INT8_MAX;
	int64_t x231 = -441743LL;
	uint32_t x232 = 214625U;
	volatile int64_t t54 = -37LL;

    t54 = ((x229>x230)*(x231/x232));

    if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x233 = 0;
	int32_t x234 = INT32_MIN;
	int8_t x235 = -1;
	static int8_t x236 = INT8_MAX;
	int32_t t55 = 12825;

    t55 = ((x233>x234)*(x235/x236));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x237 = 39U;
	int8_t x238 = 0;
	int64_t x239 = -1LL;
	volatile int64_t x240 = -1LL;
	volatile int64_t t56 = -22513154620561LL;

    t56 = ((x237>x238)*(x239/x240));

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x241 = 10U;
	int16_t x242 = -16127;
	int16_t x243 = INT16_MIN;
	int16_t x244 = INT16_MIN;

    t57 = ((x241>x242)*(x243/x244));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x245 = 3682988968LL;
	uint64_t x246 = 3835LLU;
	volatile uint8_t x247 = UINT8_MAX;

    t58 = ((x245>x246)*(x247/x248));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x250 = -1;
	uint8_t x251 = UINT8_MAX;
	uint8_t x252 = 1U;
	volatile int32_t t59 = -277670761;

    t59 = ((x249>x250)*(x251/x252));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x253 = 1005914230U;
	static int64_t x254 = 49136974667518LL;
	volatile int16_t x256 = -487;
	static int64_t t60 = 0LL;

    t60 = ((x253>x254)*(x255/x256));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x257 = INT32_MIN;
	uint32_t x258 = 205787U;
	uint16_t x259 = 0U;

    t61 = ((x257>x258)*(x259/x260));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = -1LL;
	static int16_t x262 = INT16_MAX;
	static uint64_t x263 = 9LLU;
	volatile int32_t x264 = INT32_MIN;
	uint64_t t62 = 624LLU;

    t62 = ((x261>x262)*(x263/x264));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x265 = 10;
	uint8_t x266 = UINT8_MAX;
	uint64_t x267 = 19617866985285LLU;
	static uint32_t x268 = 16041701U;
	volatile uint64_t t63 = 1841889LLU;

    t63 = ((x265>x266)*(x267/x268));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x269 = 378U;
	uint32_t x270 = 756U;
	int16_t x271 = -2;
	uint32_t x272 = 15U;
	volatile uint32_t t64 = 13214U;

    t64 = ((x269>x270)*(x271/x272));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x273 = -2021;
	uint32_t x275 = 5U;
	int8_t x276 = INT8_MIN;

    t65 = ((x273>x274)*(x275/x276));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MAX;
	int16_t x279 = -1;
	int64_t x280 = -1LL;
	int64_t t66 = 105082564015869767LL;

    t66 = ((x277>x278)*(x279/x280));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x281 = -17027331;
	uint64_t x283 = UINT64_MAX;
	uint64_t t67 = 6850636699LLU;

    t67 = ((x281>x282)*(x283/x284));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x285 = 9U;
	int16_t x286 = -1;
	volatile int16_t x287 = -4;
	volatile int32_t t68 = 1059;

    t68 = ((x285>x286)*(x287/x288));

    if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x290 = UINT32_MAX;
	int32_t x292 = INT32_MIN;
	int32_t t69 = 1942;

    t69 = ((x289>x290)*(x291/x292));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x293 = 935U;
	int8_t x294 = -1;
	volatile int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MIN;
	static int64_t t70 = -10LL;

    t70 = ((x293>x294)*(x295/x296));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x299 = 1;
	int8_t x300 = INT8_MAX;

    t71 = ((x297>x298)*(x299/x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x301 = INT64_MIN;
	uint32_t x302 = 51U;
	uint32_t x303 = UINT32_MAX;
	int64_t x304 = -4651866LL;
	int64_t t72 = 3994318LL;

    t72 = ((x301>x302)*(x303/x304));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x306 = 17156867376LLU;
	uint8_t x307 = 18U;
	volatile int64_t x308 = -5LL;
	int64_t t73 = -13492721LL;

    t73 = ((x305>x306)*(x307/x308));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x309 = -1013;
	int32_t x310 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	volatile uint32_t t74 = 164485854U;

    t74 = ((x309>x310)*(x311/x312));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x313 = 74U;
	int8_t x315 = INT8_MAX;
	uint8_t x316 = 3U;
	volatile int32_t t75 = -34726;

    t75 = ((x313>x314)*(x315/x316));

    if (t75 != 42) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x317 = UINT8_MAX;
	int64_t x318 = INT64_MIN;
	int16_t x319 = INT16_MAX;
	int32_t x320 = INT32_MIN;
	int32_t t76 = 25;

    t76 = ((x317>x318)*(x319/x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x322 = 13772U;
	int64_t x324 = INT64_MIN;
	volatile int64_t t77 = -10879295850LL;

    t77 = ((x321>x322)*(x323/x324));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x325 = -1;
	volatile int8_t x326 = INT8_MAX;
	static int32_t x327 = -1;
	static int8_t x328 = INT8_MIN;
	int32_t t78 = -256;

    t78 = ((x325>x326)*(x327/x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x329 = INT64_MAX;
	static uint32_t x330 = UINT32_MAX;
	volatile int16_t x331 = -1;
	static int16_t x332 = INT16_MAX;

    t79 = ((x329>x330)*(x331/x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x335 = INT32_MIN;
	volatile int16_t x336 = 34;
	int32_t t80 = -11;

    t80 = ((x333>x334)*(x335/x336));

    if (t80 != -63161283) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x337 = INT8_MAX;
	uint32_t x338 = 14619939U;
	static uint16_t x339 = 2681U;
	static volatile uint16_t x340 = 5U;
	volatile int32_t t81 = 6728;

    t81 = ((x337>x338)*(x339/x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = 47503LL;
	int64_t x342 = INT64_MIN;
	int8_t x343 = 52;
	static int32_t x344 = -1;
	int32_t t82 = 116823;

    t82 = ((x341>x342)*(x343/x344));

    if (t82 != -52) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x346 = INT16_MIN;
	uint32_t x348 = 446336606U;
	uint32_t t83 = 29278U;

    t83 = ((x345>x346)*(x347/x348));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x350 = UINT32_MAX;
	int64_t x351 = INT64_MAX;
	int32_t x352 = 42228;

    t84 = ((x349>x350)*(x351/x352));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x353 = -2150;
	static uint32_t x354 = UINT32_MAX;
	uint64_t x356 = 3220718LLU;
	uint64_t t85 = 45505489030505071LLU;

    t85 = ((x353>x354)*(x355/x356));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = 15142872435LL;
	int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MIN;
	uint32_t t86 = 4648340U;

    t86 = ((x357>x358)*(x359/x360));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x365 = -1;
	int16_t x366 = INT16_MAX;
	uint16_t x367 = 174U;
	volatile uint64_t x368 = 415666021LLU;
	uint64_t t87 = 3021LLU;

    t87 = ((x365>x366)*(x367/x368));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x369 = INT16_MAX;
	int16_t x370 = INT16_MIN;
	uint16_t x371 = 47U;
	static uint64_t x372 = 393LLU;
	volatile uint64_t t88 = 17062605946770LLU;

    t88 = ((x369>x370)*(x371/x372));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x373 = -684;
	int16_t x374 = -1;
	int16_t x375 = -13;
	volatile uint32_t x376 = UINT32_MAX;
	static uint32_t t89 = 1888U;

    t89 = ((x373>x374)*(x375/x376));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x380 = 24U;

    t90 = ((x377>x378)*(x379/x380));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x381 = UINT16_MAX;
	int32_t x383 = 40;
	uint32_t x384 = UINT32_MAX;

    t91 = ((x381>x382)*(x383/x384));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x386 = 6;
	static uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MAX;

    t92 = ((x385>x386)*(x387/x388));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x389 = 240LLU;
	static int16_t x390 = -4;
	int16_t x392 = INT16_MIN;
	int32_t t93 = -1353;

    t93 = ((x389>x390)*(x391/x392));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x397 = UINT64_MAX;
	static volatile int8_t x398 = -1;
	int16_t x399 = 2958;
	int32_t x400 = INT32_MIN;
	int32_t t94 = 111915;

    t94 = ((x397>x398)*(x399/x400));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x401 = INT32_MAX;
	volatile uint64_t x403 = 579LLU;
	int8_t x404 = 1;
	uint64_t t95 = 410466224358991LLU;

    t95 = ((x401>x402)*(x403/x404));

    if (t95 != 579LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x405 = INT16_MAX;
	static int16_t x406 = 0;
	int64_t x407 = INT64_MIN;
	int64_t x408 = -444843028041293LL;
	volatile int64_t t96 = 2850743604069LL;

    t96 = ((x405>x406)*(x407/x408));

    if (t96 != 20733LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x409 = UINT64_MAX;
	int64_t x410 = 671789717587LL;
	volatile int64_t t97 = -210332016LL;

    t97 = ((x409>x410)*(x411/x412));

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x413 = 4;
	uint64_t x414 = 2755916477LLU;
	int16_t x415 = -1;
	int16_t x416 = -3776;
	int32_t t98 = -252;

    t98 = ((x413>x414)*(x415/x416));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x417 = -2913448;
	int64_t x418 = INT64_MAX;
	static int64_t x419 = INT64_MAX;
	volatile int64_t t99 = 641473LL;

    t99 = ((x417>x418)*(x419/x420));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x421 = UINT8_MAX;
	int16_t x422 = INT16_MIN;
	volatile uint32_t t100 = 1U;

    t100 = ((x421>x422)*(x423/x424));

    if (t100 != 489U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x425 = INT16_MAX;
	static uint32_t x426 = UINT32_MAX;
	uint16_t x427 = 1U;
	static volatile int8_t x428 = -19;
	static int32_t t101 = -3879;

    t101 = ((x425>x426)*(x427/x428));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x429 = -1LL;
	int16_t x430 = INT16_MAX;
	int64_t x431 = INT64_MAX;
	int64_t t102 = 69170334770324674LL;

    t102 = ((x429>x430)*(x431/x432));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x433 = -1;
	static uint8_t x435 = UINT8_MAX;
	uint8_t x436 = 7U;
	int32_t t103 = -59686870;

    t103 = ((x433>x434)*(x435/x436));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x438 = INT64_MIN;
	int16_t x439 = 57;
	uint16_t x440 = 3745U;
	static volatile int32_t t104 = 899;

    t104 = ((x437>x438)*(x439/x440));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x441 = 1U;
	volatile int32_t x442 = INT32_MIN;
	int32_t x443 = INT32_MAX;
	volatile int64_t x444 = INT64_MIN;

    t105 = ((x441>x442)*(x443/x444));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x446 = UINT8_MAX;
	int8_t x447 = INT8_MAX;
	int16_t x448 = INT16_MIN;
	static volatile int32_t t106 = 4;

    t106 = ((x445>x446)*(x447/x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x449 = 3924079LL;
	int16_t x450 = INT16_MIN;
	volatile int64_t x451 = INT64_MIN;
	uint32_t x452 = 4282U;

    t107 = ((x449>x450)*(x451/x452));

    if (t107 != -2153986930605972LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x453 = INT64_MIN;
	int32_t x454 = -3;
	int16_t x455 = INT16_MAX;
	uint64_t x456 = 2291060729LLU;

    t108 = ((x453>x454)*(x455/x456));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x457 = 1755548670LLU;
	static volatile int64_t x458 = -141117856045558304LL;
	uint8_t x459 = 0U;
	int8_t x460 = -1;
	volatile int32_t t109 = 1729;

    t109 = ((x457>x458)*(x459/x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x461 = INT32_MIN;
	int16_t x462 = INT16_MIN;
	int8_t x463 = 1;
	static int8_t x464 = INT8_MIN;
	volatile int32_t t110 = 207324;

    t110 = ((x461>x462)*(x463/x464));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x465 = INT8_MIN;
	int64_t x466 = INT64_MIN;
	static int8_t x467 = INT8_MIN;
	static int16_t x468 = 921;
	volatile int32_t t111 = -25762;

    t111 = ((x465>x466)*(x467/x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x470 = UINT32_MAX;
	int64_t x471 = INT64_MAX;
	int32_t x472 = -141336;
	static int64_t t112 = 372786284239974LL;

    t112 = ((x469>x470)*(x471/x472));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x475 = 3741U;
	static volatile int64_t t113 = -1915358LL;

    t113 = ((x473>x474)*(x475/x476));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x477 = -1;
	volatile int64_t x478 = -1LL;
	int16_t x479 = INT16_MAX;
	int8_t x480 = -1;
	static int32_t t114 = 11557;

    t114 = ((x477>x478)*(x479/x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x481 = INT32_MAX;
	uint32_t x482 = 1175U;
	static volatile uint16_t x483 = 6555U;
	int16_t x484 = -31;
	volatile int32_t t115 = -780831;

    t115 = ((x481>x482)*(x483/x484));

    if (t115 != -211) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x485 = 5814;
	volatile int32_t x486 = -1;
	static int32_t x487 = INT32_MIN;
	volatile int8_t x488 = -6;
	static int32_t t116 = -12818;

    t116 = ((x485>x486)*(x487/x488));

    if (t116 != 357913941) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x491 = INT16_MIN;
	int64_t x492 = INT64_MAX;
	volatile int64_t t117 = 2043280419506177LL;

    t117 = ((x489>x490)*(x491/x492));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x493 = -55;
	int32_t x494 = -8939;
	int16_t x495 = INT16_MAX;
	uint8_t x496 = UINT8_MAX;
	int32_t t118 = -20;

    t118 = ((x493>x494)*(x495/x496));

    if (t118 != 128) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x497 = -100LL;
	int16_t x498 = 0;
	uint8_t x499 = UINT8_MAX;
	volatile int32_t t119 = -187677886;

    t119 = ((x497>x498)*(x499/x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x501 = INT32_MIN;
	int16_t x502 = -106;
	uint32_t x503 = 242944U;
	int16_t x504 = INT16_MIN;
	volatile uint32_t t120 = 2281U;

    t120 = ((x501>x502)*(x503/x504));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x505 = 323928U;
	int8_t x506 = 24;
	int16_t x507 = -1;
	static int64_t t121 = -783LL;

    t121 = ((x505>x506)*(x507/x508));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x509 = 37U;
	int8_t x512 = -1;
	int32_t t122 = 134;

    t122 = ((x509>x510)*(x511/x512));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x513 = -1203067;
	uint64_t x514 = 15073774184LLU;
	int16_t x515 = -1;
	int16_t x516 = 55;

    t123 = ((x513>x514)*(x515/x516));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x517 = -2LL;
	static int64_t x518 = 186554LL;
	uint32_t x519 = UINT32_MAX;
	uint8_t x520 = 36U;
	volatile uint32_t t124 = 28452U;

    t124 = ((x517>x518)*(x519/x520));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x521 = 50486U;
	int16_t x522 = -1;
	uint64_t x524 = 58LLU;

    t125 = ((x521>x522)*(x523/x524));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x525 = -1LL;
	int64_t x527 = -1810384LL;
	uint32_t x528 = UINT32_MAX;
	static volatile int64_t t126 = -853167LL;

    t126 = ((x525>x526)*(x527/x528));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x529 = 650;
	uint16_t x530 = 1441U;
	int64_t x531 = INT64_MIN;
	static volatile uint16_t x532 = UINT16_MAX;
	volatile int64_t t127 = -1LL;

    t127 = ((x529>x530)*(x531/x532));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x533 = INT64_MIN;
	uint64_t x534 = 724448525706LLU;
	uint64_t x535 = UINT64_MAX;
	int32_t x536 = 14;
	volatile uint64_t t128 = 105261727982734852LLU;

    t128 = ((x533>x534)*(x535/x536));

    if (t128 != 1317624576693539401LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x538 = -1;
	int32_t x539 = INT32_MIN;
	int64_t x540 = INT64_MIN;

    t129 = ((x537>x538)*(x539/x540));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x541 = -1;
	int8_t x544 = INT8_MIN;
	volatile int32_t t130 = -1;

    t130 = ((x541>x542)*(x543/x544));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x545 = UINT64_MAX;
	static uint64_t x546 = UINT64_MAX;
	static uint64_t x547 = 13003003LLU;
	volatile int8_t x548 = INT8_MAX;
	uint64_t t131 = 24487627978LLU;

    t131 = ((x545>x546)*(x547/x548));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x550 = 125U;
	static volatile int8_t x551 = 61;
	uint64_t x552 = 5919114016833LLU;
	volatile uint64_t t132 = 43972908520854LLU;

    t132 = ((x549>x550)*(x551/x552));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x553 = INT8_MIN;
	static uint8_t x555 = 0U;
	uint64_t x556 = 77LLU;

    t133 = ((x553>x554)*(x555/x556));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x558 = -71330LL;
	uint8_t x559 = 22U;
	int16_t x560 = INT16_MAX;
	volatile int32_t t134 = 9;

    t134 = ((x557>x558)*(x559/x560));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x561 = INT16_MAX;
	uint8_t x562 = 2U;
	int64_t x563 = -479687973416545696LL;
	volatile int64_t t135 = 26LL;

    t135 = ((x561>x562)*(x563/x564));

    if (t135 != 479687973416545696LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x565 = INT32_MAX;
	uint8_t x566 = 31U;
	int8_t x567 = -1;
	volatile uint16_t x568 = UINT16_MAX;
	volatile int32_t t136 = -2963;

    t136 = ((x565>x566)*(x567/x568));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x569 = INT32_MIN;
	int32_t x571 = -152165;
	uint16_t x572 = UINT16_MAX;
	volatile int32_t t137 = -25;

    t137 = ((x569>x570)*(x571/x572));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x574 = UINT32_MAX;
	int16_t x575 = -1;
	int16_t x576 = INT16_MAX;
	int32_t t138 = -1440;

    t138 = ((x573>x574)*(x575/x576));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x577 = -1;
	int8_t x578 = INT8_MIN;
	static uint16_t x579 = UINT16_MAX;
	uint64_t t139 = 667LLU;

    t139 = ((x577>x578)*(x579/x580));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x582 = 6989U;
	uint32_t x583 = 824U;

    t140 = ((x581>x582)*(x583/x584));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x585 = -1;
	volatile int32_t x586 = 100574899;
	int16_t x587 = -1;
	uint32_t x588 = UINT32_MAX;
	static volatile uint32_t t141 = 6492406U;

    t141 = ((x585>x586)*(x587/x588));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x589 = 294238U;
	int8_t x591 = 2;
	uint8_t x592 = 3U;
	volatile int32_t t142 = -26315381;

    t142 = ((x589>x590)*(x591/x592));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x593 = 3915U;
	int8_t x596 = -1;
	static volatile int32_t t143 = -12412;

    t143 = ((x593>x594)*(x595/x596));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x599 = UINT32_MAX;
	uint64_t x600 = 467011896537LLU;
	uint64_t t144 = 41309906375637138LLU;

    t144 = ((x597>x598)*(x599/x600));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x602 = UINT64_MAX;
	static volatile int64_t x603 = INT64_MIN;
	volatile int8_t x604 = 12;
	volatile int64_t t145 = -14371823390119LL;

    t145 = ((x601>x602)*(x603/x604));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x605 = 3905;
	static int8_t x606 = INT8_MAX;
	static volatile uint64_t x607 = UINT64_MAX;
	int8_t x608 = -58;
	volatile uint64_t t146 = 25081716693654LLU;

    t146 = ((x605>x606)*(x607/x608));

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x609 = 221U;
	volatile int64_t x610 = 24085LL;
	int64_t x611 = INT64_MIN;
	int64_t t147 = -297203044LL;

    t147 = ((x609>x610)*(x611/x612));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x613 = INT32_MAX;
	static int32_t x614 = -28038;
	static uint8_t x615 = 1U;
	int8_t x616 = INT8_MIN;

    t148 = ((x613>x614)*(x615/x616));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x617 = 31122U;
	int32_t x618 = INT32_MAX;
	uint8_t x619 = 5U;
	int32_t t149 = 764797;

    t149 = ((x617>x618)*(x619/x620));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x622 = -52;
	int8_t x623 = -3;
	int8_t x624 = -1;
	int32_t t150 = -4;

    t150 = ((x621>x622)*(x623/x624));

    if (t150 != 3) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x625 = INT16_MAX;
	uint16_t x626 = 3734U;
	static int8_t x627 = INT8_MAX;
	int32_t x628 = -1;
	int32_t t151 = 450126621;

    t151 = ((x625>x626)*(x627/x628));

    if (t151 != -127) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x629 = INT16_MIN;
	volatile uint8_t x630 = UINT8_MAX;
	static volatile int64_t x631 = INT64_MAX;
	int16_t x632 = INT16_MAX;
	int64_t t152 = 1062367LL;

    t152 = ((x629>x630)*(x631/x632));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x634 = 0U;
	int8_t x635 = -1;
	static int16_t x636 = INT16_MAX;
	volatile int32_t t153 = -1;

    t153 = ((x633>x634)*(x635/x636));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x637 = 7867U;
	uint32_t x638 = UINT32_MAX;
	int8_t x639 = -1;
	static volatile uint32_t x640 = UINT32_MAX;
	volatile uint32_t t154 = 0U;

    t154 = ((x637>x638)*(x639/x640));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x641 = INT64_MIN;
	uint8_t x642 = UINT8_MAX;
	uint32_t x643 = 5094514U;
	static int32_t x644 = INT32_MIN;
	volatile uint32_t t155 = 143U;

    t155 = ((x641>x642)*(x643/x644));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x645 = 0;
	int16_t x646 = 463;

    t156 = ((x645>x646)*(x647/x648));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x649 = INT32_MIN;
	volatile int32_t x650 = INT32_MAX;
	int8_t x651 = -1;
	int32_t x652 = -1;
	static volatile int32_t t157 = -37027930;

    t157 = ((x649>x650)*(x651/x652));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x653 = 75;
	int8_t x654 = -1;
	volatile uint64_t x655 = 6387LLU;
	uint64_t t158 = 38756915468LLU;

    t158 = ((x653>x654)*(x655/x656));

    if (t158 != 6387LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x657 = 95683029U;
	int8_t x658 = -1;
	volatile int8_t x659 = -7;
	int32_t x660 = INT32_MIN;
	int32_t t159 = 0;

    t159 = ((x657>x658)*(x659/x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x662 = 7U;
	static int64_t x663 = -7035LL;
	uint64_t x664 = 7216206162042717LLU;
	uint64_t t160 = 735799717154LLU;

    t160 = ((x661>x662)*(x663/x664));

    if (t160 != 2556LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x666 = -1;
	volatile uint64_t x667 = UINT64_MAX;
	int16_t x668 = INT16_MAX;
	volatile uint64_t t161 = 101LLU;

    t161 = ((x665>x666)*(x667/x668));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x669 = -1;
	int64_t x670 = -1LL;
	int16_t x671 = -498;
	int32_t t162 = 2310277;

    t162 = ((x669>x670)*(x671/x672));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x674 = 39U;
	int8_t x675 = -1;
	int64_t x676 = -1LL;
	static volatile int64_t t163 = 1LL;

    t163 = ((x673>x674)*(x675/x676));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x677 = INT16_MAX;
	volatile int64_t x678 = -159386209354LL;
	int8_t x679 = 38;
	uint8_t x680 = UINT8_MAX;
	volatile int32_t t164 = 571;

    t164 = ((x677>x678)*(x679/x680));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x681 = UINT64_MAX;
	uint16_t x683 = 14788U;
	volatile int64_t x684 = INT64_MIN;
	volatile int64_t t165 = -32583635617862705LL;

    t165 = ((x681>x682)*(x683/x684));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x686 = INT32_MIN;
	volatile uint64_t t166 = 3750432896LLU;

    t166 = ((x685>x686)*(x687/x688));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x690 = -1;
	uint64_t x691 = 4455941115019LLU;
	volatile uint16_t x692 = 11U;
	static uint64_t t167 = 1522114LLU;

    t167 = ((x689>x690)*(x691/x692));

    if (t167 != 405085555910LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x693 = 7U;
	static int8_t x696 = INT8_MIN;
	static volatile int64_t t168 = -1LL;

    t168 = ((x693>x694)*(x695/x696));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x698 = -1;
	uint16_t x699 = 70U;
	int32_t x700 = INT32_MAX;
	volatile int32_t t169 = 63;

    t169 = ((x697>x698)*(x699/x700));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x701 = -112381349870LL;
	int64_t x703 = -6469366532932LL;
	static int64_t x704 = 321425158964LL;

    t170 = ((x701>x702)*(x703/x704));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = -1;
	static uint64_t x707 = 77649LLU;
	int16_t x708 = -3;
	uint64_t t171 = 110733533LLU;

    t171 = ((x705>x706)*(x707/x708));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x710 = -841570;
	uint32_t x711 = 233U;
	static int32_t x712 = INT32_MIN;
	volatile uint32_t t172 = 799778309U;

    t172 = ((x709>x710)*(x711/x712));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x713 = 4;
	uint8_t x715 = 23U;
	int32_t x716 = INT32_MAX;
	int32_t t173 = 756332;

    t173 = ((x713>x714)*(x715/x716));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x717 = UINT8_MAX;
	volatile uint32_t x718 = UINT32_MAX;
	static int16_t x719 = 1;
	int8_t x720 = INT8_MIN;
	volatile int32_t t174 = -1;

    t174 = ((x717>x718)*(x719/x720));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = INT32_MIN;
	int16_t x722 = 3;
	volatile int64_t x723 = -32556LL;
	int16_t x724 = -114;
	int64_t t175 = 10861152345233102LL;

    t175 = ((x721>x722)*(x723/x724));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x725 = 862;
	volatile int32_t x726 = 16165199;
	int32_t x727 = INT32_MAX;
	int32_t t176 = 2286470;

    t176 = ((x725>x726)*(x727/x728));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x729 = 24;
	uint8_t x731 = UINT8_MAX;
	int8_t x732 = 3;

    t177 = ((x729>x730)*(x731/x732));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x733 = UINT32_MAX;
	int32_t x734 = INT32_MIN;
	uint8_t x735 = 22U;
	int32_t t178 = 22214;

    t178 = ((x733>x734)*(x735/x736));

    if (t178 != -22) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x737 = INT32_MIN;
	int16_t x738 = INT16_MIN;
	static uint32_t x739 = UINT32_MAX;
	static uint64_t x740 = 945007LLU;
	volatile uint64_t t179 = 2307106178LLU;

    t179 = ((x737>x738)*(x739/x740));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x743 = 7145U;
	int8_t x744 = -4;
	int32_t t180 = -12;

    t180 = ((x741>x742)*(x743/x744));

    if (t180 != -1786) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x745 = 502;
	int8_t x746 = -1;
	static int16_t x747 = INT16_MIN;
	static int8_t x748 = -38;
	int32_t t181 = -2982;

    t181 = ((x745>x746)*(x747/x748));

    if (t181 != 862) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x749 = 0U;
	volatile int32_t x751 = INT32_MIN;
	uint64_t x752 = UINT64_MAX;

    t182 = ((x749>x750)*(x751/x752));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x753 = 13895U;
	uint64_t x755 = 20636LLU;
	uint16_t x756 = 3U;
	static uint64_t t183 = 690LLU;

    t183 = ((x753>x754)*(x755/x756));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x757 = -8;
	int16_t x758 = -1;
	volatile uint16_t x759 = 46U;
	uint8_t x760 = 21U;
	volatile int32_t t184 = -1968698;

    t184 = ((x757>x758)*(x759/x760));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x761 = INT32_MIN;
	int32_t x762 = -1;
	int64_t x763 = INT64_MAX;
	int16_t x764 = INT16_MAX;
	int64_t t185 = -59374256LL;

    t185 = ((x761>x762)*(x763/x764));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x770 = -115100301LL;
	int8_t x771 = -1;
	uint32_t x772 = 21289U;
	volatile uint32_t t186 = 16365219U;

    t186 = ((x769>x770)*(x771/x772));

    if (t186 != 201745U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x775 = -1;
	static int32_t t187 = 727231659;

    t187 = ((x773>x774)*(x775/x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x777 = INT16_MAX;
	static volatile int8_t x778 = -3;
	int8_t x780 = INT8_MAX;
	int32_t t188 = -37840939;

    t188 = ((x777>x778)*(x779/x780));

    if (t188 != -258) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x781 = -1;
	int32_t x782 = INT32_MIN;
	static volatile uint64_t x783 = UINT64_MAX;
	uint16_t x784 = 19U;
	volatile uint64_t t189 = 5981LLU;

    t189 = ((x781>x782)*(x783/x784));

    if (t189 != 970881267037344821LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x789 = 17773572;
	int8_t x790 = -1;
	int64_t x792 = -1LL;
	int64_t t190 = -122870LL;

    t190 = ((x789>x790)*(x791/x792));

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x793 = -1;
	int32_t x794 = 413569;
	uint8_t x795 = 0U;
	uint32_t x796 = 2U;
	volatile uint32_t t191 = 33065672U;

    t191 = ((x793>x794)*(x795/x796));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x797 = UINT16_MAX;
	int64_t x799 = INT64_MIN;
	volatile int8_t x800 = INT8_MIN;

    t192 = ((x797>x798)*(x799/x800));

    if (t192 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x801 = UINT64_MAX;
	uint32_t x803 = 4578U;
	volatile int64_t x804 = -103780341626483LL;

    t193 = ((x801>x802)*(x803/x804));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x806 = INT16_MIN;
	static volatile int64_t x808 = INT64_MIN;
	volatile int64_t t194 = 1943337375LL;

    t194 = ((x805>x806)*(x807/x808));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x809 = 37839U;
	int64_t x810 = INT64_MAX;
	int16_t x811 = 894;
	int16_t x812 = INT16_MIN;
	volatile int32_t t195 = -838;

    t195 = ((x809>x810)*(x811/x812));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x813 = 215057U;
	int32_t x814 = -1;
	static uint32_t x815 = UINT32_MAX;
	static volatile int8_t x816 = INT8_MIN;
	volatile uint32_t t196 = 12829005U;

    t196 = ((x813>x814)*(x815/x816));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x817 = -1;
	int32_t x819 = -302880;
	int16_t x820 = INT16_MIN;
	int32_t t197 = 19786360;

    t197 = ((x817>x818)*(x819/x820));

    if (t197 != 9) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x825 = -1;
	int8_t x827 = 13;
	static int64_t x828 = 2LL;
	int64_t t198 = 64571948844LL;

    t198 = ((x825>x826)*(x827/x828));

    if (t198 != 6LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x829 = INT32_MAX;
	int32_t x830 = INT32_MIN;
	int64_t x831 = INT64_MAX;
	int32_t x832 = -4699728;
	volatile int64_t t199 = 31883LL;

    t199 = ((x829>x830)*(x831/x832));

    if (t199 != -1962533158696LL) { NG(); } else { ; }
	
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

