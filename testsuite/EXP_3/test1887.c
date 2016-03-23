
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

int32_t x2 = -2;
int64_t x7 = INT64_MIN;
static int32_t x9 = INT32_MIN;
volatile uint8_t x20 = 35U;
static volatile uint64_t x21 = 400990591497777LLU;
volatile int32_t t5 = 20;
uint64_t x25 = 111LLU;
static volatile uint16_t x26 = UINT16_MAX;
int16_t x33 = INT16_MIN;
volatile uint64_t x43 = 1301570684LLU;
volatile int32_t t10 = -472;
int16_t x63 = -1;
static int16_t x66 = -749;
uint16_t x68 = UINT16_MAX;
int32_t x74 = 76;
int32_t x78 = INT32_MAX;
volatile int64_t x82 = -1LL;
int8_t x83 = INT8_MAX;
int8_t x86 = -1;
uint32_t x87 = 99975U;
int16_t x92 = INT16_MAX;
int64_t x94 = -5475362434LL;
static int16_t x95 = INT16_MIN;
volatile int32_t t23 = 820460963;
volatile int16_t x113 = INT16_MIN;
static volatile int32_t t28 = 0;
int8_t x118 = INT8_MAX;
volatile int8_t x121 = INT8_MIN;
static volatile int64_t x123 = 3428236600820026012LL;
static int8_t x131 = -7;
int16_t x138 = INT16_MAX;
int32_t x144 = -631;
int32_t x152 = -227751;
static volatile int32_t t37 = -6673;
int32_t x156 = INT32_MIN;
int64_t x164 = 1LL;
static int32_t t40 = 85;
int8_t x176 = 1;
static int32_t t43 = -7815707;
uint64_t x180 = 1600398507864LLU;
uint64_t x182 = 80341166923LLU;
int8_t x190 = INT8_MIN;
uint16_t x194 = 2U;
volatile uint16_t x195 = 3U;
static uint64_t x198 = 32304429729LLU;
volatile int32_t t51 = 103;
uint32_t x217 = 1720947063U;
int32_t x218 = -3;
volatile int64_t x231 = -527002468797267744LL;
int64_t x233 = INT64_MIN;
volatile uint32_t x247 = 1007721U;
int32_t t62 = 1;
uint64_t x257 = 553631040130718184LLU;
int32_t x259 = 3887106;
volatile uint8_t x261 = UINT8_MAX;
static int16_t x262 = INT16_MAX;
volatile int32_t t68 = 3;
static int32_t t69 = 878644228;
static volatile int32_t t70 = 27824535;
volatile uint16_t x288 = UINT16_MAX;
uint32_t x293 = UINT32_MAX;
int32_t x295 = INT32_MIN;
volatile int32_t t73 = 17;
static int16_t x301 = -10;
int64_t x309 = INT64_MIN;
volatile int32_t t77 = -43317572;
static int64_t x320 = INT64_MIN;
int16_t x328 = -1;
volatile int32_t t81 = 1;
int32_t t82 = -6043;
volatile int32_t t83 = 393;
static int32_t t84 = -104469393;
volatile int32_t x343 = 0;
volatile int64_t x348 = -1LL;
volatile int32_t t88 = 3707233;
int64_t x358 = INT64_MAX;
volatile int32_t t89 = -10937544;
static volatile int64_t x362 = INT64_MIN;
volatile uint32_t x363 = UINT32_MAX;
volatile int32_t t91 = -15281007;
static int32_t x377 = 14689;
volatile int32_t t94 = 0;
int8_t x396 = 0;
volatile int8_t x401 = -4;
int32_t x403 = 511401954;
int32_t t100 = 17235;
uint64_t x409 = 416LLU;
uint64_t x413 = 104726415LLU;
uint32_t x419 = UINT32_MAX;
uint16_t x423 = 221U;
int32_t x425 = INT32_MIN;
uint8_t x432 = 28U;
int32_t x435 = 490;
static int32_t x439 = INT32_MIN;
static uint16_t x453 = 1278U;
int64_t x462 = INT64_MIN;
int32_t t117 = -716;
int64_t x480 = INT64_MAX;
int32_t x481 = INT32_MAX;
int64_t x488 = 69507844344252LL;
int32_t t121 = -27670;
int16_t x493 = -1;
int16_t x495 = INT16_MIN;
int32_t t123 = -11845311;
int16_t x497 = INT16_MIN;
uint16_t x505 = 3226U;
static int16_t x510 = INT16_MIN;
volatile int64_t x511 = INT64_MAX;
volatile int16_t x513 = -34;
volatile uint64_t x517 = 2555115488611LLU;
int32_t x519 = -1;
int16_t x520 = INT16_MIN;
volatile int32_t t131 = 6032;
volatile int32_t t133 = 2568;
uint32_t x538 = 55U;
int64_t x541 = INT64_MIN;
uint16_t x542 = 4U;
uint8_t x546 = UINT8_MAX;
static uint8_t x548 = 2U;
int32_t t136 = 3371;
int16_t x549 = INT16_MAX;
int64_t x552 = -26099LL;
volatile int16_t x553 = -1;
uint8_t x556 = UINT8_MAX;
static int8_t x563 = INT8_MAX;
static int64_t x569 = -9455146142357870LL;
uint8_t x572 = 0U;
int16_t x574 = -1;
uint64_t x575 = 644373718594545473LLU;
volatile int64_t x582 = -54213LL;
int16_t x584 = 868;
static int16_t x586 = -1;
int32_t x590 = 4164791;
volatile int8_t x592 = 34;
int32_t t147 = -1;
int32_t x596 = 1;
volatile int32_t t148 = -10167487;
int32_t x597 = INT32_MIN;
static volatile int8_t x608 = 0;
static int32_t t151 = -495893121;
volatile uint64_t x613 = UINT64_MAX;
int32_t x615 = -4910;
static uint8_t x627 = UINT8_MAX;
int64_t x632 = INT64_MAX;
int64_t x633 = INT64_MAX;
static volatile int32_t x638 = INT32_MAX;
int32_t x647 = INT32_MIN;
int64_t x648 = 12821197371LL;
int32_t t161 = 0;
volatile uint32_t x651 = 12984U;
int64_t x652 = INT64_MIN;
uint8_t x660 = 0U;
int16_t x663 = 5900;
int64_t x665 = INT64_MIN;
int16_t x668 = -1073;
int64_t x669 = INT64_MIN;
int16_t x673 = -1;
int16_t x676 = INT16_MAX;
int16_t x677 = INT16_MIN;
static volatile int32_t t169 = 29;
int64_t x684 = INT64_MIN;
int8_t x686 = INT8_MAX;
int32_t x689 = INT32_MIN;
uint32_t x690 = 24824670U;
int64_t x693 = -64240227725LL;
int16_t x696 = INT16_MIN;
int64_t x698 = -451670LL;
int32_t x704 = INT32_MIN;
static int32_t t175 = 111270109;
volatile int32_t x705 = -5286;
static uint64_t x711 = UINT64_MAX;
int64_t x712 = 49747158LL;
uint8_t x724 = 0U;
static volatile int32_t t182 = -6211336;
volatile int8_t x734 = INT8_MAX;
static int32_t t185 = 399996;
static int8_t x748 = INT8_MIN;
int8_t x756 = 13;
static int32_t t189 = 115667;
static int16_t x772 = INT16_MAX;
int32_t t193 = 34223;
int32_t t195 = -4;
uint8_t x786 = UINT8_MAX;
static int64_t x790 = -12978LL;
volatile int64_t x794 = INT64_MIN;
int32_t t198 = 974;
int16_t x798 = -1;
int32_t t199 = 0;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	uint64_t x3 = UINT64_MAX;
	static int16_t x4 = INT16_MAX;
	int32_t t0 = -58;

    t0 = ((x1>x2)>>(x3<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 99552;

    t1 = ((x5>x6)>>(x7<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x10 = INT32_MIN;
	static volatile int8_t x11 = INT8_MIN;
	static int16_t x12 = -1;
	int32_t t2 = 995823;

    t2 = ((x9>x10)>>(x11<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	uint32_t x14 = 1245515111U;
	uint32_t x15 = 21056386U;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 785;

    t3 = ((x13>x14)>>(x15<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 432977385963LLU;
	int32_t x18 = -756;
	int32_t x19 = -453602779;
	static int32_t t4 = -76379;

    t4 = ((x17>x18)>>(x19<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x22 = 29303LLU;
	int64_t x23 = 108LL;
	int64_t x24 = INT64_MIN;

    t5 = ((x21>x22)>>(x23<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x27 = -1;
	int8_t x28 = -1;
	int32_t t6 = 28051;

    t6 = ((x25>x26)>>(x27<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = INT32_MIN;
	uint16_t x30 = UINT16_MAX;
	int64_t x31 = INT64_MIN;
	int32_t x32 = 2;
	volatile int32_t t7 = 37303;

    t7 = ((x29>x30)>>(x31<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = INT8_MIN;
	uint32_t x35 = UINT32_MAX;
	static int32_t x36 = -1;
	static volatile int32_t t8 = 0;

    t8 = ((x33>x34)>>(x35<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	int8_t x38 = -1;
	volatile uint8_t x39 = 38U;
	static volatile int8_t x40 = INT8_MAX;
	int32_t t9 = 1;

    t9 = ((x37>x38)>>(x39<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 10532U;
	int16_t x42 = -11354;
	int32_t x44 = INT32_MAX;

    t10 = ((x41>x42)>>(x43<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = INT8_MAX;
	uint64_t x46 = UINT64_MAX;
	int8_t x47 = INT8_MIN;
	uint8_t x48 = 68U;
	int32_t t11 = -206;

    t11 = ((x45>x46)>>(x47<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	volatile int16_t x50 = INT16_MAX;
	static int8_t x51 = 1;
	volatile int16_t x52 = -214;
	volatile int32_t t12 = -4552888;

    t12 = ((x49>x50)>>(x51<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x53 = -4242094683694031LL;
	int8_t x54 = INT8_MAX;
	int16_t x55 = -1;
	int64_t x56 = -4352908322805728LL;
	static volatile int32_t t13 = -15;

    t13 = ((x53>x54)>>(x55<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	static volatile int64_t x58 = 262373060715757798LL;
	volatile int32_t x59 = 2;
	volatile uint16_t x60 = 111U;
	int32_t t14 = -1772706;

    t14 = ((x57>x58)>>(x59<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	static int32_t x62 = INT32_MIN;
	static int8_t x64 = 0;
	volatile int32_t t15 = -5;

    t15 = ((x61>x62)>>(x63<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MIN;
	int16_t x67 = -1;
	static volatile int32_t t16 = 3134921;

    t16 = ((x65>x66)>>(x67<=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = 12LL;
	static int32_t x70 = INT32_MIN;
	int32_t x71 = INT32_MIN;
	uint16_t x72 = 8U;
	static int32_t t17 = 30402;

    t17 = ((x69>x70)>>(x71<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x73 = INT16_MIN;
	int32_t x75 = INT32_MAX;
	static int8_t x76 = INT8_MIN;
	static volatile int32_t t18 = 13;

    t18 = ((x73>x74)>>(x75<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 190U;
	static volatile int8_t x79 = 6;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = 10907;

    t19 = ((x77>x78)>>(x79<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	uint32_t x84 = 477U;
	int32_t t20 = 217;

    t20 = ((x81>x82)>>(x83<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x85 = 5U;
	int32_t x88 = INT32_MIN;
	int32_t t21 = 911776;

    t21 = ((x85>x86)>>(x87<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = UINT16_MAX;
	static volatile uint32_t x90 = UINT32_MAX;
	uint16_t x91 = 13271U;
	static int32_t t22 = 6764;

    t22 = ((x89>x90)>>(x91<=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MAX;
	int8_t x96 = 56;

    t23 = ((x93>x94)>>(x95<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = INT64_MAX;
	volatile int32_t x98 = -1;
	int16_t x99 = INT16_MIN;
	int16_t x100 = 10384;
	int32_t t24 = 13;

    t24 = ((x97>x98)>>(x99<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = 693037;
	int8_t x102 = -1;
	static int32_t x103 = INT32_MAX;
	int16_t x104 = INT16_MAX;
	volatile int32_t t25 = 1;

    t25 = ((x101>x102)>>(x103<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x105 = 22U;
	int64_t x106 = INT64_MAX;
	volatile int64_t x107 = INT64_MIN;
	static int64_t x108 = 118539342LL;
	volatile int32_t t26 = -98339552;

    t26 = ((x105>x106)>>(x107<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 2662U;
	int16_t x110 = INT16_MIN;
	uint16_t x111 = 2700U;
	uint8_t x112 = 7U;
	volatile int32_t t27 = -215544082;

    t27 = ((x109>x110)>>(x111<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x114 = INT32_MIN;
	volatile uint8_t x115 = UINT8_MAX;
	int8_t x116 = INT8_MAX;

    t28 = ((x113>x114)>>(x115<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = -1LL;
	int8_t x119 = INT8_MAX;
	int8_t x120 = INT8_MAX;
	volatile int32_t t29 = 27654;

    t29 = ((x117>x118)>>(x119<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = -1;
	uint8_t x124 = 127U;
	volatile int32_t t30 = -89627;

    t30 = ((x121>x122)>>(x123<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	volatile uint64_t x126 = 2622LLU;
	static volatile int16_t x127 = -22;
	uint16_t x128 = 13U;
	volatile int32_t t31 = -372;

    t31 = ((x125>x126)>>(x127<=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x129 = 13422239U;
	volatile int32_t x130 = INT32_MIN;
	int32_t x132 = INT32_MAX;
	int32_t t32 = 655;

    t32 = ((x129>x130)>>(x131<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int16_t x134 = -63;
	volatile uint16_t x135 = UINT16_MAX;
	uint8_t x136 = 48U;
	volatile int32_t t33 = -33891659;

    t33 = ((x133>x134)>>(x135<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -9058;
	uint32_t x139 = 4U;
	volatile uint8_t x140 = 6U;
	int32_t t34 = 6605572;

    t34 = ((x137>x138)>>(x139<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = -1LL;
	uint8_t x142 = 14U;
	int16_t x143 = 81;
	int32_t t35 = 89;

    t35 = ((x141>x142)>>(x143<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x145 = UINT16_MAX;
	static volatile int8_t x146 = INT8_MAX;
	int8_t x147 = INT8_MAX;
	static volatile uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = -102543003;

    t36 = ((x145>x146)>>(x147<=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 627353U;
	int8_t x150 = -1;
	static int16_t x151 = INT16_MIN;

    t37 = ((x149>x150)>>(x151<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = 1U;
	int16_t x154 = -56;
	static uint64_t x155 = UINT64_MAX;
	volatile int32_t t38 = -5275809;

    t38 = ((x153>x154)>>(x155<=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = UINT64_MAX;
	int16_t x158 = INT16_MIN;
	int8_t x159 = INT8_MIN;
	uint64_t x160 = 1LLU;
	int32_t t39 = -3964;

    t39 = ((x157>x158)>>(x159<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -1;
	int32_t x162 = 135221071;
	uint32_t x163 = 12977U;

    t40 = ((x161>x162)>>(x163<=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = 3;
	static int64_t x166 = 373LL;
	volatile int64_t x167 = -18231807616LL;
	uint16_t x168 = UINT16_MAX;
	int32_t t41 = -13;

    t41 = ((x165>x166)>>(x167<=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MAX;
	volatile uint8_t x170 = 21U;
	uint32_t x171 = UINT32_MAX;
	int8_t x172 = 1;
	int32_t t42 = 1;

    t42 = ((x169>x170)>>(x171<=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	static uint8_t x174 = 4U;
	volatile int16_t x175 = -13;

    t43 = ((x173>x174)>>(x175<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x177 = 5087U;
	int8_t x178 = -1;
	int8_t x179 = INT8_MAX;
	int32_t t44 = 6;

    t44 = ((x177>x178)>>(x179<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	uint64_t x183 = 117509853500954LLU;
	uint16_t x184 = 316U;
	volatile int32_t t45 = -7070;

    t45 = ((x181>x182)>>(x183<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = INT16_MIN;
	uint64_t x186 = UINT64_MAX;
	int64_t x187 = INT64_MIN;
	static int32_t x188 = -1;
	int32_t t46 = 361;

    t46 = ((x185>x186)>>(x187<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int8_t x191 = -14;
	static int64_t x192 = INT64_MAX;
	int32_t t47 = 9;

    t47 = ((x189>x190)>>(x191<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	uint32_t x196 = UINT32_MAX;
	int32_t t48 = -3819080;

    t48 = ((x193>x194)>>(x195<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = UINT8_MAX;
	int32_t x199 = INT32_MAX;
	int32_t x200 = 2;
	int32_t t49 = -2123;

    t49 = ((x197>x198)>>(x199<=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 192494731;
	static uint32_t x202 = 28953992U;
	int8_t x203 = INT8_MAX;
	uint16_t x204 = 922U;
	static int32_t t50 = -836;

    t50 = ((x201>x202)>>(x203<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MIN;
	uint8_t x207 = UINT8_MAX;
	int8_t x208 = INT8_MIN;

    t51 = ((x205>x206)>>(x207<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = INT8_MIN;
	static volatile uint64_t x210 = 111LLU;
	volatile uint32_t x211 = 8212549U;
	volatile int32_t x212 = INT32_MIN;
	int32_t t52 = 130890;

    t52 = ((x209>x210)>>(x211<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x213 = UINT8_MAX;
	int64_t x214 = 2LL;
	static int32_t x215 = -69745750;
	int16_t x216 = INT16_MAX;
	static volatile int32_t t53 = 20;

    t53 = ((x213>x214)>>(x215<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 17;

    t54 = ((x217>x218)>>(x219<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	uint64_t x222 = UINT64_MAX;
	static volatile int16_t x223 = INT16_MAX;
	volatile int32_t x224 = -1;
	int32_t t55 = -52;

    t55 = ((x221>x222)>>(x223<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = 1;
	int16_t x226 = 24;
	static int16_t x227 = -1;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 29125;

    t56 = ((x225>x226)>>(x227<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = INT64_MAX;
	volatile int32_t x230 = -1;
	static uint32_t x232 = 56698U;
	volatile int32_t t57 = 1;

    t57 = ((x229>x230)>>(x231<=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x234 = -1LL;
	volatile uint64_t x235 = 19001088323652LLU;
	int32_t x236 = INT32_MIN;
	int32_t t58 = 6412;

    t58 = ((x233>x234)>>(x235<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x237 = INT16_MIN;
	uint32_t x238 = 430171U;
	static volatile int8_t x239 = INT8_MIN;
	int8_t x240 = -6;
	volatile int32_t t59 = 15894;

    t59 = ((x237>x238)>>(x239<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = 0;
	volatile int64_t x242 = -1LL;
	int32_t x243 = INT32_MAX;
	int16_t x244 = -1;
	volatile int32_t t60 = 6;

    t60 = ((x241>x242)>>(x243<=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 962U;
	volatile int32_t x246 = INT32_MIN;
	int32_t x248 = -1;
	int32_t t61 = -2220;

    t61 = ((x245>x246)>>(x247<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = UINT64_MAX;
	static uint32_t x250 = 142125U;
	volatile uint32_t x251 = 780U;
	uint32_t x252 = UINT32_MAX;

    t62 = ((x249>x250)>>(x251<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 8837U;
	int64_t x256 = -1LL;
	static volatile int32_t t63 = -34;

    t63 = ((x253>x254)>>(x255<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x258 = INT64_MIN;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t64 = -433;

    t64 = ((x257>x258)>>(x259<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x263 = 0U;
	static int8_t x264 = -1;
	int32_t t65 = -10860;

    t65 = ((x261>x262)>>(x263<=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x265 = -7;
	int16_t x266 = INT16_MAX;
	int64_t x267 = 6203688391498949LL;
	static int32_t x268 = INT32_MIN;
	int32_t t66 = 212440;

    t66 = ((x265>x266)>>(x267<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x269 = 433U;
	int16_t x270 = INT16_MAX;
	int16_t x271 = -1;
	int8_t x272 = INT8_MAX;
	int32_t t67 = -11210;

    t67 = ((x269>x270)>>(x271<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = -1;
	uint64_t x274 = 8928371681092714LLU;
	static volatile uint16_t x275 = 104U;
	volatile uint16_t x276 = UINT16_MAX;

    t68 = ((x273>x274)>>(x275<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	uint64_t x278 = 95379453951035695LLU;
	uint32_t x279 = UINT32_MAX;
	uint16_t x280 = UINT16_MAX;

    t69 = ((x277>x278)>>(x279<=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -73442;
	volatile uint16_t x282 = UINT16_MAX;
	uint64_t x283 = UINT64_MAX;
	static uint32_t x284 = 430205U;

    t70 = ((x281>x282)>>(x283<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x285 = -8421856854LL;
	volatile uint8_t x286 = 1U;
	int8_t x287 = INT8_MIN;
	static int32_t t71 = 49229;

    t71 = ((x285>x286)>>(x287<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	int32_t x290 = INT32_MIN;
	int16_t x291 = 8;
	uint16_t x292 = UINT16_MAX;
	int32_t t72 = -110;

    t72 = ((x289>x290)>>(x291<=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x294 = INT8_MIN;
	int16_t x296 = 374;

    t73 = ((x293>x294)>>(x295<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = -52;
	uint64_t x298 = 691671918299266921LLU;
	volatile uint64_t x299 = UINT64_MAX;
	int8_t x300 = 0;
	int32_t t74 = -373;

    t74 = ((x297>x298)>>(x299<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = -1;
	uint32_t x303 = UINT32_MAX;
	uint16_t x304 = UINT16_MAX;
	int32_t t75 = -1;

    t75 = ((x301>x302)>>(x303<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = -3103;
	volatile uint64_t x306 = 145960909183LLU;
	int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MIN;
	int32_t t76 = 16193181;

    t76 = ((x305>x306)>>(x307<=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x310 = 34915229909329917LL;
	uint32_t x311 = 7976055U;
	volatile int64_t x312 = 11314282942363439LL;

    t77 = ((x309>x310)>>(x311<=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 388LLU;
	uint16_t x314 = UINT16_MAX;
	int8_t x315 = INT8_MAX;
	int8_t x316 = INT8_MAX;
	int32_t t78 = 10371439;

    t78 = ((x313>x314)>>(x315<=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	uint8_t x318 = UINT8_MAX;
	int32_t x319 = INT32_MAX;
	volatile int32_t t79 = -609060;

    t79 = ((x317>x318)>>(x319<=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MAX;
	static int32_t x322 = -1;
	uint16_t x323 = UINT16_MAX;
	static int8_t x324 = -39;
	int32_t t80 = 1;

    t80 = ((x321>x322)>>(x323<=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	int8_t x326 = 3;
	static uint32_t x327 = 54U;

    t81 = ((x325>x326)>>(x327<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = -1;
	volatile uint8_t x330 = UINT8_MAX;
	static int8_t x331 = INT8_MAX;
	static uint32_t x332 = 3U;

    t82 = ((x329>x330)>>(x331<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = -425;
	int32_t x334 = -1;
	volatile int64_t x335 = -22007113883445077LL;
	int16_t x336 = -1;

    t83 = ((x333>x334)>>(x335<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MAX;
	int32_t x340 = -1;

    t84 = ((x337>x338)>>(x339<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x341 = INT32_MAX;
	static int16_t x342 = INT16_MIN;
	int64_t x344 = INT64_MAX;
	volatile int32_t t85 = -28656;

    t85 = ((x341>x342)>>(x343<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = 251254700;
	uint64_t x346 = 487130LLU;
	static int32_t x347 = INT32_MAX;
	int32_t t86 = -40028739;

    t86 = ((x345>x346)>>(x347<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	uint8_t x350 = UINT8_MAX;
	int16_t x351 = -1;
	uint64_t x352 = UINT64_MAX;
	int32_t t87 = -23183198;

    t87 = ((x349>x350)>>(x351<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x353 = 0U;
	volatile int64_t x354 = -1LL;
	int64_t x355 = INT64_MIN;
	static int8_t x356 = 6;

    t88 = ((x353>x354)>>(x355<=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x357 = 0U;
	int32_t x359 = -2;
	uint32_t x360 = 5939U;

    t89 = ((x357>x358)>>(x359<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	int8_t x364 = -1;
	volatile int32_t t90 = 7451489;

    t90 = ((x361>x362)>>(x363<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x365 = -28;
	uint64_t x366 = 646186224110800LLU;
	int8_t x367 = -1;
	volatile uint32_t x368 = UINT32_MAX;

    t91 = ((x365>x366)>>(x367<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = 45LL;
	int32_t x370 = INT32_MIN;
	static uint16_t x371 = UINT16_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t92 = -55169879;

    t92 = ((x369>x370)>>(x371<=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x373 = 33U;
	volatile int64_t x374 = -1997854LL;
	int32_t x375 = INT32_MIN;
	int64_t x376 = -242049015359026LL;
	int32_t t93 = 671523780;

    t93 = ((x373>x374)>>(x375<=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x378 = 0;
	volatile int32_t x379 = INT32_MIN;
	int64_t x380 = -12159264481LL;

    t94 = ((x377>x378)>>(x379<=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	int64_t x382 = -933038LL;
	static volatile int16_t x383 = 96;
	int8_t x384 = 19;
	int32_t t95 = -87458;

    t95 = ((x381>x382)>>(x383<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = INT64_MIN;
	int8_t x386 = INT8_MIN;
	uint16_t x387 = 22498U;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t96 = 25348786;

    t96 = ((x385>x386)>>(x387<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -1;
	int16_t x390 = INT16_MAX;
	static int16_t x391 = -1;
	uint16_t x392 = 3U;
	volatile int32_t t97 = -2734083;

    t97 = ((x389>x390)>>(x391<=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MAX;
	int64_t x395 = INT64_MIN;
	volatile int32_t t98 = 535054;

    t98 = ((x393>x394)>>(x395<=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = UINT64_MAX;
	int32_t x398 = INT32_MIN;
	uint32_t x399 = UINT32_MAX;
	uint64_t x400 = 1499602LLU;
	volatile int32_t t99 = -2600;

    t99 = ((x397>x398)>>(x399<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x402 = INT8_MIN;
	int16_t x404 = INT16_MIN;

    t100 = ((x401>x402)>>(x403<=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = UINT32_MAX;
	uint8_t x406 = 0U;
	uint8_t x407 = 12U;
	int64_t x408 = INT64_MIN;
	int32_t t101 = -2890;

    t101 = ((x405>x406)>>(x407<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x410 = -1LL;
	int16_t x411 = 2;
	volatile uint32_t x412 = 19U;
	int32_t t102 = 14788521;

    t102 = ((x409>x410)>>(x411<=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = INT64_MAX;
	int32_t x415 = 40;
	uint8_t x416 = 0U;
	static int32_t t103 = 0;

    t103 = ((x413>x414)>>(x415<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 50U;
	uint32_t x418 = UINT32_MAX;
	int32_t x420 = INT32_MIN;
	volatile int32_t t104 = -6617;

    t104 = ((x417>x418)>>(x419<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x421 = INT64_MIN;
	static volatile uint8_t x422 = 1U;
	uint16_t x424 = 1U;
	volatile int32_t t105 = 83;

    t105 = ((x421>x422)>>(x423<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x426 = 512584664751LLU;
	int8_t x427 = 1;
	int64_t x428 = INT64_MIN;
	volatile int32_t t106 = -10953839;

    t106 = ((x425>x426)>>(x427<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x429 = UINT32_MAX;
	int32_t x430 = -1;
	uint32_t x431 = 2034U;
	volatile int32_t t107 = -25;

    t107 = ((x429>x430)>>(x431<=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = INT16_MAX;
	static int16_t x434 = -1;
	int8_t x436 = -1;
	volatile int32_t t108 = -6151;

    t108 = ((x433>x434)>>(x435<=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MAX;
	static int64_t x438 = -1LL;
	int64_t x440 = -7145LL;
	volatile int32_t t109 = -2485040;

    t109 = ((x437>x438)>>(x439<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = -3;
	uint8_t x442 = 1U;
	static int64_t x443 = INT64_MIN;
	uint16_t x444 = 5U;
	int32_t t110 = 235203;

    t110 = ((x441>x442)>>(x443<=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = 746;
	int16_t x446 = INT16_MIN;
	uint8_t x447 = 12U;
	int32_t x448 = 8290394;
	volatile int32_t t111 = 234983;

    t111 = ((x445>x446)>>(x447<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint64_t x449 = 3459LLU;
	uint32_t x450 = 9U;
	static int8_t x451 = -1;
	int64_t x452 = -1LL;
	volatile int32_t t112 = -80;

    t112 = ((x449>x450)>>(x451<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x454 = INT8_MIN;
	int32_t x455 = -4535291;
	static uint8_t x456 = 1U;
	volatile int32_t t113 = 64;

    t113 = ((x453>x454)>>(x455<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 178LLU;
	int64_t x458 = -412609LL;
	uint8_t x459 = 2U;
	int64_t x460 = INT64_MAX;
	int32_t t114 = -3;

    t114 = ((x457>x458)>>(x459<=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint16_t x461 = 9U;
	int16_t x463 = -1;
	static int32_t x464 = 104619479;
	int32_t t115 = -31;

    t115 = ((x461>x462)>>(x463<=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = 20;
	uint32_t x466 = 5U;
	int64_t x467 = INT64_MAX;
	int8_t x468 = 62;
	int32_t t116 = 29;

    t116 = ((x465>x466)>>(x467<=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 5U;
	static int32_t x470 = -1;
	uint32_t x471 = 23223U;
	uint8_t x472 = 2U;

    t117 = ((x469>x470)>>(x471<=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = UINT8_MAX;
	static int32_t x474 = -103364;
	static int8_t x475 = INT8_MIN;
	volatile int64_t x476 = 3395496LL;
	volatile int32_t t118 = -8;

    t118 = ((x473>x474)>>(x475<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = INT64_MIN;
	static int64_t x478 = INT64_MIN;
	int32_t x479 = -2733;
	int32_t t119 = 39;

    t119 = ((x477>x478)>>(x479<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x482 = INT64_MAX;
	int64_t x483 = INT64_MAX;
	volatile uint8_t x484 = UINT8_MAX;
	volatile int32_t t120 = 13863;

    t120 = ((x481>x482)>>(x483<=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	int64_t x486 = INT64_MIN;
	static int32_t x487 = -664;

    t121 = ((x485>x486)>>(x487<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x489 = UINT8_MAX;
	static int8_t x490 = -1;
	static int16_t x491 = 3742;
	int16_t x492 = 3056;
	static volatile int32_t t122 = 9834;

    t122 = ((x489>x490)>>(x491<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x494 = -1LL;
	int32_t x496 = INT32_MIN;

    t123 = ((x493>x494)>>(x495<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x498 = 20895947LLU;
	int8_t x499 = INT8_MIN;
	static uint16_t x500 = 10U;
	volatile int32_t t124 = 438153391;

    t124 = ((x497>x498)>>(x499<=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	uint32_t x502 = 43589147U;
	static uint16_t x503 = 485U;
	int64_t x504 = -5640885908923LL;
	int32_t t125 = -475788595;

    t125 = ((x501>x502)>>(x503<=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x506 = INT64_MIN;
	uint64_t x507 = 185319475LLU;
	int16_t x508 = INT16_MIN;
	int32_t t126 = 193;

    t126 = ((x505>x506)>>(x507<=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	uint16_t x512 = 49U;
	volatile int32_t t127 = -697;

    t127 = ((x509>x510)>>(x511<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x514 = UINT8_MAX;
	int16_t x515 = -64;
	int32_t x516 = 28008;
	int32_t t128 = -74964625;

    t128 = ((x513>x514)>>(x515<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x518 = 39248684585781590LL;
	volatile int32_t t129 = 73358087;

    t129 = ((x517>x518)>>(x519<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -1;
	int32_t x522 = INT32_MIN;
	uint8_t x523 = 1U;
	volatile uint8_t x524 = 1U;
	int32_t t130 = 1;

    t130 = ((x521>x522)>>(x523<=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = -1;
	int64_t x526 = INT64_MIN;
	uint16_t x527 = UINT16_MAX;
	static volatile int16_t x528 = INT16_MAX;

    t131 = ((x525>x526)>>(x527<=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = 3;
	uint16_t x530 = 1917U;
	int8_t x531 = -1;
	static volatile int64_t x532 = INT64_MAX;
	int32_t t132 = 106349901;

    t132 = ((x529>x530)>>(x531<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = 11;
	int64_t x534 = -99198516725LL;
	int8_t x535 = 1;
	volatile int8_t x536 = INT8_MIN;

    t133 = ((x533>x534)>>(x535<=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x537 = -1;
	int64_t x539 = INT64_MIN;
	static uint16_t x540 = 3423U;
	int32_t t134 = 3;

    t134 = ((x537>x538)>>(x539<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x543 = -1;
	int64_t x544 = INT64_MIN;
	volatile int32_t t135 = -1;

    t135 = ((x541>x542)>>(x543<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -60777;
	volatile uint16_t x547 = 2U;

    t136 = ((x545>x546)>>(x547<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x550 = 15;
	static int16_t x551 = INT16_MIN;
	static volatile int32_t t137 = -501624;

    t137 = ((x549>x550)>>(x551<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x554 = INT16_MIN;
	volatile uint32_t x555 = 113641397U;
	volatile int32_t t138 = -2275541;

    t138 = ((x553>x554)>>(x555<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 9853U;
	int16_t x558 = -1;
	uint16_t x559 = 1510U;
	static int8_t x560 = -1;
	static int32_t t139 = -3;

    t139 = ((x557>x558)>>(x559<=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	volatile int64_t x562 = INT64_MIN;
	int64_t x564 = INT64_MIN;
	volatile int32_t t140 = 336;

    t140 = ((x561>x562)>>(x563<=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x566 = INT16_MIN;
	int8_t x567 = INT8_MAX;
	static uint32_t x568 = 35U;
	volatile int32_t t141 = -2317;

    t141 = ((x565>x566)>>(x567<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = 1;
	uint64_t x571 = 114883238141209876LLU;
	volatile int32_t t142 = -210224951;

    t142 = ((x569>x570)>>(x571<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = UINT32_MAX;
	uint32_t x576 = 86064685U;
	volatile int32_t t143 = -367574;

    t143 = ((x573>x574)>>(x575<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 21U;
	static int32_t x578 = INT32_MIN;
	int8_t x579 = INT8_MAX;
	int64_t x580 = INT64_MIN;
	int32_t t144 = 2;

    t144 = ((x577>x578)>>(x579<=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = INT16_MIN;
	int8_t x583 = INT8_MAX;
	static int32_t t145 = 184711291;

    t145 = ((x581>x582)>>(x583<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = -1LL;
	static int16_t x587 = INT16_MAX;
	int8_t x588 = 53;
	volatile int32_t t146 = 89943;

    t146 = ((x585>x586)>>(x587<=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MAX;
	int16_t x591 = 396;

    t147 = ((x589>x590)>>(x591<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	uint32_t x594 = 8014U;
	static volatile int8_t x595 = INT8_MIN;

    t148 = ((x593>x594)>>(x595<=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x598 = INT64_MAX;
	uint8_t x599 = 6U;
	int64_t x600 = INT64_MIN;
	volatile int32_t t149 = 48780672;

    t149 = ((x597>x598)>>(x599<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = 25;
	int32_t x602 = INT32_MAX;
	static int8_t x603 = -1;
	int64_t x604 = INT64_MIN;
	int32_t t150 = -729005;

    t150 = ((x601>x602)>>(x603<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = UINT8_MAX;
	volatile int32_t x606 = INT32_MAX;
	int16_t x607 = -2322;

    t151 = ((x605>x606)>>(x607<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x609 = 109;
	static int32_t x610 = INT32_MAX;
	volatile int32_t x611 = 25051;
	int32_t x612 = -21722;
	volatile int32_t t152 = -133139183;

    t152 = ((x609>x610)>>(x611<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x614 = INT8_MIN;
	volatile int8_t x616 = -1;
	int32_t t153 = 705;

    t153 = ((x613>x614)>>(x615<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 122992438893479606LLU;
	uint16_t x618 = UINT16_MAX;
	static volatile int8_t x619 = -1;
	volatile int16_t x620 = -52;
	int32_t t154 = -14127;

    t154 = ((x617>x618)>>(x619<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = 1LL;
	uint8_t x622 = 3U;
	uint32_t x623 = 3612343U;
	volatile int8_t x624 = -2;
	int32_t t155 = 3045418;

    t155 = ((x621>x622)>>(x623<=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x625 = INT16_MIN;
	static volatile int16_t x626 = INT16_MAX;
	uint32_t x628 = 42104U;
	volatile int32_t t156 = -15924;

    t156 = ((x625>x626)>>(x627<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MIN;
	int16_t x630 = INT16_MAX;
	static uint32_t x631 = 111U;
	volatile int32_t t157 = -300;

    t157 = ((x629>x630)>>(x631<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x634 = INT64_MIN;
	static int64_t x635 = INT64_MIN;
	int16_t x636 = INT16_MIN;
	volatile int32_t t158 = 149339;

    t158 = ((x633>x634)>>(x635<=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = INT32_MAX;
	volatile uint8_t x639 = UINT8_MAX;
	volatile int32_t x640 = -29238;
	static int32_t t159 = -6374;

    t159 = ((x637>x638)>>(x639<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x641 = 3LLU;
	int8_t x642 = INT8_MIN;
	volatile uint16_t x643 = 18481U;
	volatile int8_t x644 = -11;
	int32_t t160 = 4129309;

    t160 = ((x641>x642)>>(x643<=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x645 = -1;
	uint16_t x646 = UINT16_MAX;

    t161 = ((x645>x646)>>(x647<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = UINT64_MAX;
	int8_t x650 = 2;
	volatile int32_t t162 = 425422;

    t162 = ((x649>x650)>>(x651<=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x653 = -7;
	uint64_t x654 = UINT64_MAX;
	int64_t x655 = INT64_MIN;
	static int64_t x656 = INT64_MIN;
	static volatile int32_t t163 = 355839;

    t163 = ((x653>x654)>>(x655<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MAX;
	static int8_t x658 = -1;
	static volatile int64_t x659 = INT64_MIN;
	static volatile int32_t t164 = -487;

    t164 = ((x657>x658)>>(x659<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = INT8_MIN;
	uint64_t x662 = 219322196LLU;
	static int8_t x664 = INT8_MIN;
	volatile int32_t t165 = 62471;

    t165 = ((x661>x662)>>(x663<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x666 = UINT32_MAX;
	volatile int64_t x667 = INT64_MIN;
	volatile int32_t t166 = -17857742;

    t166 = ((x665>x666)>>(x667<=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x670 = INT8_MIN;
	static int8_t x671 = INT8_MAX;
	static uint16_t x672 = 30U;
	volatile int32_t t167 = -243233800;

    t167 = ((x669>x670)>>(x671<=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x674 = INT32_MIN;
	int16_t x675 = 6095;
	volatile int32_t t168 = 2;

    t168 = ((x673>x674)>>(x675<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x678 = 3U;
	int8_t x679 = INT8_MAX;
	volatile uint64_t x680 = UINT64_MAX;

    t169 = ((x677>x678)>>(x679<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	static int32_t x682 = -1;
	int32_t x683 = -104970;
	volatile int32_t t170 = 90385;

    t170 = ((x681>x682)>>(x683<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MIN;
	int8_t x687 = -1;
	volatile int64_t x688 = INT64_MIN;
	int32_t t171 = 14;

    t171 = ((x685>x686)>>(x687<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x691 = 1U;
	volatile uint32_t x692 = UINT32_MAX;
	int32_t t172 = 868841;

    t172 = ((x689>x690)>>(x691<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = 3211226830236LL;
	uint8_t x695 = 1U;
	static volatile int32_t t173 = 117929646;

    t173 = ((x693>x694)>>(x695<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = UINT8_MAX;
	uint16_t x699 = 43U;
	uint32_t x700 = UINT32_MAX;
	volatile int32_t t174 = -4406394;

    t174 = ((x697>x698)>>(x699<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x701 = 2131681843U;
	volatile int64_t x702 = -1LL;
	int32_t x703 = INT32_MIN;

    t175 = ((x701>x702)>>(x703<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x706 = 9U;
	uint64_t x707 = UINT64_MAX;
	int64_t x708 = INT64_MAX;
	volatile int32_t t176 = 1559;

    t176 = ((x705>x706)>>(x707<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = 0;
	static int32_t x710 = -12983217;
	volatile int32_t t177 = 407690368;

    t177 = ((x709>x710)>>(x711<=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	volatile int8_t x714 = 0;
	int32_t x715 = INT32_MAX;
	uint64_t x716 = 11LLU;
	volatile int32_t t178 = 23;

    t178 = ((x713>x714)>>(x715<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MAX;
	static volatile uint32_t x718 = 223344U;
	volatile int32_t x719 = INT32_MIN;
	int32_t x720 = 148;
	volatile int32_t t179 = -228;

    t179 = ((x717>x718)>>(x719<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	uint8_t x722 = UINT8_MAX;
	volatile int64_t x723 = INT64_MIN;
	volatile int32_t t180 = -3624;

    t180 = ((x721>x722)>>(x723<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	int64_t x726 = -1LL;
	uint16_t x727 = 15U;
	int8_t x728 = -1;
	int32_t t181 = 2;

    t181 = ((x725>x726)>>(x727<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	int16_t x730 = INT16_MIN;
	int16_t x731 = INT16_MAX;
	static int64_t x732 = INT64_MAX;

    t182 = ((x729>x730)>>(x731<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = 22;
	uint8_t x735 = 78U;
	static volatile uint16_t x736 = UINT16_MAX;
	volatile int32_t t183 = 8718;

    t183 = ((x733>x734)>>(x735<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -4399526;
	volatile int32_t x738 = -88;
	int64_t x739 = 763879835465523LL;
	int64_t x740 = INT64_MIN;
	int32_t t184 = 24101;

    t184 = ((x737>x738)>>(x739<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x741 = 1;
	uint8_t x742 = 42U;
	int16_t x743 = INT16_MIN;
	uint8_t x744 = 14U;

    t185 = ((x741>x742)>>(x743<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -1;
	static int32_t x746 = INT32_MAX;
	uint16_t x747 = UINT16_MAX;
	static int32_t t186 = -686;

    t186 = ((x745>x746)>>(x747<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 0U;
	int64_t x750 = -1LL;
	int32_t x751 = -1;
	int16_t x752 = -1;
	int32_t t187 = -4143;

    t187 = ((x749>x750)>>(x751<=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	int8_t x754 = 1;
	int32_t x755 = 10;
	static volatile int32_t t188 = 21691989;

    t188 = ((x753>x754)>>(x755<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = 43;
	static uint8_t x758 = 50U;
	int16_t x759 = -2312;
	int32_t x760 = INT32_MIN;

    t189 = ((x757>x758)>>(x759<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	volatile int32_t x762 = INT32_MAX;
	volatile int8_t x763 = 0;
	int32_t x764 = INT32_MIN;
	static int32_t t190 = 2480;

    t190 = ((x761>x762)>>(x763<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -1;
	volatile int16_t x766 = INT16_MAX;
	static int8_t x767 = INT8_MAX;
	uint8_t x768 = 1U;
	int32_t t191 = -671;

    t191 = ((x765>x766)>>(x767<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	int16_t x770 = INT16_MIN;
	int8_t x771 = INT8_MIN;
	static volatile int32_t t192 = -30;

    t192 = ((x769>x770)>>(x771<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = 190U;
	int32_t x774 = INT32_MIN;
	int32_t x775 = INT32_MIN;
	int64_t x776 = INT64_MAX;

    t193 = ((x773>x774)>>(x775<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x777 = INT64_MAX;
	static uint8_t x778 = 10U;
	int16_t x779 = INT16_MIN;
	uint8_t x780 = UINT8_MAX;
	int32_t t194 = -7650;

    t194 = ((x777>x778)>>(x779<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = INT8_MIN;
	static int16_t x782 = INT16_MIN;
	int8_t x783 = -1;
	int8_t x784 = -4;

    t195 = ((x781>x782)>>(x783<=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = -365;
	static volatile uint16_t x787 = 184U;
	int8_t x788 = INT8_MIN;
	static volatile int32_t t196 = -103553;

    t196 = ((x785>x786)>>(x787<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = 29;
	int64_t x791 = 22LL;
	static int32_t x792 = INT32_MIN;
	static volatile int32_t t197 = 2;

    t197 = ((x789>x790)>>(x791<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = 193;
	static uint32_t x795 = 106551234U;
	uint16_t x796 = UINT16_MAX;

    t198 = ((x793>x794)>>(x795<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = INT32_MIN;
	uint8_t x799 = 0U;
	uint64_t x800 = UINT64_MAX;

    t199 = ((x797>x798)>>(x799<=x800));

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

