
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

static int32_t x3 = 88;
static int32_t x7 = -14;
uint8_t x8 = UINT8_MAX;
int16_t x11 = INT16_MIN;
int64_t x13 = INT64_MIN;
uint64_t x14 = 8397751265885LLU;
int16_t x15 = 2832;
uint64_t x29 = UINT64_MAX;
static int16_t x32 = -1;
int8_t x35 = 1;
uint16_t x37 = 22372U;
int8_t x40 = INT8_MAX;
int16_t x45 = INT16_MIN;
static int8_t x46 = INT8_MIN;
int32_t t10 = -7169;
int32_t x53 = INT32_MIN;
int32_t x58 = INT32_MAX;
static int32_t x59 = 980;
uint32_t x60 = UINT32_MAX;
static uint8_t x64 = 58U;
volatile int32_t t13 = -56;
volatile uint32_t t14 = 1232271U;
static uint64_t x72 = 3459145958LLU;
int16_t x81 = INT16_MAX;
int64_t x82 = INT64_MIN;
int16_t x83 = INT16_MIN;
volatile int16_t x85 = -1;
int32_t x86 = -53003937;
int32_t x89 = INT32_MAX;
uint32_t x92 = 49432515U;
uint64_t x93 = 386840875183282464LLU;
int32_t x97 = -1;
int64_t x104 = INT64_MIN;
static int8_t x105 = INT8_MIN;
volatile uint16_t x108 = 2125U;
uint64_t x109 = 291800044825810LLU;
int16_t x125 = INT16_MIN;
int64_t x130 = INT64_MIN;
volatile int32_t t31 = -7724;
uint64_t x139 = 701254336877673414LLU;
int32_t x140 = -1;
uint8_t x143 = 15U;
volatile int32_t t34 = -123;
static uint8_t x158 = 116U;
uint32_t x167 = 41370U;
volatile int32_t t41 = -964744093;
uint32_t x190 = UINT32_MAX;
static uint16_t x191 = UINT16_MAX;
static uint8_t x193 = UINT8_MAX;
uint64_t x195 = UINT64_MAX;
volatile int16_t x198 = INT16_MIN;
uint16_t x202 = 3028U;
int32_t x204 = -857973;
static int8_t x205 = -1;
int8_t x210 = INT8_MAX;
volatile int8_t x214 = INT8_MIN;
static int32_t t50 = 10;
volatile uint64_t t51 = 266423417709762LLU;
static uint64_t x227 = 31LLU;
int32_t x230 = INT32_MIN;
int16_t x231 = -24;
int64_t t56 = 26008853224666241LL;
int32_t t62 = 606876;
int16_t x270 = -1672;
int64_t x277 = INT64_MIN;
volatile uint8_t x285 = UINT8_MAX;
static volatile int32_t x293 = INT32_MAX;
uint8_t x296 = UINT8_MAX;
int32_t x299 = -3;
int8_t x304 = 29;
volatile int32_t x306 = -6678;
int8_t x310 = INT8_MAX;
uint8_t x311 = UINT8_MAX;
static volatile int64_t x315 = INT64_MAX;
int8_t x322 = INT8_MIN;
int16_t x325 = INT16_MIN;
int16_t x328 = INT16_MIN;
static int32_t x343 = INT32_MIN;
static int32_t x350 = INT32_MIN;
int16_t x352 = INT16_MIN;
static int64_t x362 = -26576676584402872LL;
static int16_t x365 = -1;
static int32_t x366 = INT32_MIN;
volatile int8_t x375 = -4;
volatile uint64_t t93 = 8474229LLU;
static uint32_t x401 = UINT32_MAX;
int16_t x404 = -1;
uint32_t t96 = 24U;
int32_t x406 = INT32_MIN;
int32_t t100 = -327226;
uint8_t x421 = 73U;
static int8_t x422 = INT8_MIN;
int64_t x423 = INT64_MAX;
static int8_t x426 = -12;
int32_t x431 = INT32_MIN;
uint16_t x433 = UINT16_MAX;
int64_t x435 = INT64_MAX;
volatile int32_t t104 = 577;
volatile int64_t t105 = 22165228LL;
int64_t x441 = 72522941798392637LL;
int16_t x442 = INT16_MIN;
int64_t x444 = INT64_MIN;
static int64_t x445 = -1LL;
static int16_t x451 = 2;
int64_t x453 = -1LL;
static volatile int32_t t111 = 44877748;
int32_t x465 = INT32_MIN;
volatile uint32_t x466 = UINT32_MAX;
uint16_t x467 = 3U;
uint64_t x469 = UINT64_MAX;
uint16_t x475 = UINT16_MAX;
volatile int32_t t114 = -31706;
volatile int32_t x478 = INT32_MIN;
static volatile int64_t x480 = 70044086LL;
int16_t x486 = INT16_MIN;
uint16_t x489 = 1362U;
int16_t x494 = INT16_MIN;
int64_t x496 = -6LL;
int32_t t119 = 12;
int64_t x500 = INT64_MIN;
static volatile uint64_t x502 = 813795935LLU;
int16_t x504 = INT16_MIN;
uint32_t t122 = 0U;
volatile int32_t t125 = -149124043;
static int32_t x526 = -1;
volatile int32_t t128 = 2;
volatile int8_t x533 = INT8_MAX;
uint32_t x536 = 19586U;
int8_t x544 = -1;
int8_t x549 = -1;
int16_t x550 = INT16_MAX;
int32_t x551 = -1;
int16_t x559 = INT16_MIN;
volatile int8_t x560 = -1;
volatile uint64_t t135 = 7271409892174LLU;
uint32_t x574 = UINT32_MAX;
int8_t x581 = 24;
static int64_t x586 = 1061689605147349LL;
int32_t t143 = -2661;
int32_t x594 = 836505583;
int64_t x597 = INT64_MIN;
uint8_t x602 = 14U;
int64_t x603 = INT64_MIN;
static int8_t x606 = INT8_MAX;
static int16_t x607 = INT16_MIN;
int64_t x608 = INT64_MIN;
volatile uint64_t t147 = 4052944LLU;
int64_t x624 = -1373968275LL;
volatile int32_t x628 = INT32_MAX;
static uint32_t x629 = UINT32_MAX;
volatile int8_t x632 = 2;
uint32_t t153 = 97U;
volatile uint64_t x635 = 11077LLU;
int16_t x640 = INT16_MAX;
uint64_t t155 = 3LLU;
volatile uint64_t x641 = UINT64_MAX;
volatile int64_t x643 = INT64_MAX;
static int64_t x644 = INT64_MIN;
uint64_t x648 = 1LLU;
volatile int32_t t159 = -226;
volatile uint64_t x657 = 143206484LLU;
volatile int32_t x661 = INT32_MIN;
volatile int32_t t161 = 28712;
static uint32_t x668 = 41146435U;
int32_t x669 = INT32_MAX;
int32_t x675 = -1;
int8_t x685 = INT8_MIN;
volatile int16_t x688 = -13;
uint64_t x695 = 3853901LLU;
int64_t x696 = -1LL;
int64_t x700 = -1LL;
int32_t x701 = INT32_MIN;
int32_t t171 = -539;
int64_t x705 = INT64_MIN;
int64_t t172 = 1732LL;
int64_t x716 = INT64_MIN;
static volatile uint64_t x720 = 74LLU;
volatile int64_t t177 = 211985811LL;
uint16_t x729 = 125U;
volatile int64_t x731 = 7LL;
int32_t x732 = INT32_MIN;
int64_t x736 = -580970452LL;
int8_t x751 = INT8_MIN;
uint16_t x752 = 490U;
uint16_t x753 = UINT16_MAX;
int32_t t185 = -7591;
int8_t x764 = -1;
volatile int32_t t188 = -40778133;
static int64_t x775 = INT64_MAX;
int16_t x777 = INT16_MAX;
int32_t t190 = -107;
static volatile int16_t x786 = INT16_MIN;
int8_t x787 = -1;
static uint16_t x788 = 6023U;
static int64_t x793 = -6029651702476LL;
int8_t x794 = INT8_MIN;
volatile int16_t x796 = INT16_MIN;
volatile int64_t t193 = 2437053417LL;
static uint64_t x797 = UINT64_MAX;
uint16_t x805 = 0U;
volatile uint8_t x806 = 0U;
int16_t x807 = INT16_MIN;
int8_t x819 = INT8_MIN;


void f0(void) {
    	uint32_t x1 = 3616U;
	uint32_t x2 = 1990270U;
	int8_t x4 = 0;
	volatile uint32_t t0 = 37U;

    t0 = (x1%(x2!=(x3<=x4)));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = UINT32_MAX;
	volatile int8_t x6 = -1;
	volatile uint32_t t1 = 13667305U;

    t1 = (x5%(x6!=(x7<=x8)));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 45489708;
	int16_t x10 = INT16_MIN;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -4316553;

    t2 = (x9%(x10!=(x11<=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x16 = INT8_MAX;
	int64_t t3 = 119LL;

    t3 = (x13%(x14!=(x15<=x16)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	uint32_t x22 = UINT32_MAX;
	int32_t x23 = INT32_MAX;
	int16_t x24 = -94;
	int32_t t4 = 466190105;

    t4 = (x21%(x22!=(x23<=x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x30 = 22LLU;
	int16_t x31 = INT16_MIN;
	static uint64_t t5 = 10729542880LLU;

    t5 = (x29%(x30!=(x31<=x32)));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x33 = 33U;
	int16_t x34 = -5;
	volatile int64_t x36 = 17756108361465721LL;
	static uint32_t t6 = 15469U;

    t6 = (x33%(x34!=(x35<=x36)));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MIN;
	static volatile int32_t t7 = -866772614;

    t7 = (x37%(x38!=(x39<=x40)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = 507540557517967LLU;
	uint16_t x42 = 8U;
	int8_t x43 = -2;
	int16_t x44 = -1;
	static volatile uint64_t t8 = 1488850204460312811LLU;

    t8 = (x41%(x42!=(x43<=x44)));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x47 = 6U;
	int8_t x48 = INT8_MIN;
	volatile int32_t t9 = -179325565;

    t9 = (x45%(x46!=(x47<=x48)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x49 = INT8_MIN;
	int32_t x50 = -1;
	volatile int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;

    t10 = (x49%(x50!=(x51<=x52)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x54 = INT8_MAX;
	int64_t x55 = -1LL;
	volatile int64_t x56 = -130764077505870351LL;
	int32_t t11 = -1;

    t11 = (x53%(x54!=(x55<=x56)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x57 = INT32_MIN;
	static int32_t t12 = -107;

    t12 = (x57%(x58!=(x59<=x60)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = INT32_MAX;
	int8_t x62 = 0;
	int32_t x63 = -264435719;

    t13 = (x61%(x62!=(x63<=x64)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x65 = 204796U;
	static uint64_t x66 = UINT64_MAX;
	static int64_t x67 = INT64_MIN;
	uint8_t x68 = 1U;

    t14 = (x65%(x66!=(x67<=x68)));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x69 = 1U;
	static uint8_t x70 = 6U;
	int32_t x71 = 490;
	uint32_t t15 = 4U;

    t15 = (x69%(x70!=(x71<=x72)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x73 = 24685689608109LLU;
	static uint32_t x74 = UINT32_MAX;
	int64_t x75 = 11LL;
	int64_t x76 = INT64_MIN;
	static uint64_t t16 = 1797512570449LLU;

    t16 = (x73%(x74!=(x75<=x76)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = INT8_MIN;
	static int16_t x78 = INT16_MIN;
	uint16_t x79 = UINT16_MAX;
	int8_t x80 = -13;
	volatile int32_t t17 = -10984200;

    t17 = (x77%(x78!=(x79<=x80)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x84 = -1;
	int32_t t18 = 16;

    t18 = (x81%(x82!=(x83<=x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x87 = 4;
	uint64_t x88 = 82898402LLU;
	int32_t t19 = -63;

    t19 = (x85%(x86!=(x87<=x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x90 = 24;
	static int16_t x91 = INT16_MIN;
	static int32_t t20 = 78;

    t20 = (x89%(x90!=(x91<=x92)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x94 = INT32_MIN;
	volatile uint32_t x95 = 2516U;
	volatile uint8_t x96 = UINT8_MAX;
	static volatile uint64_t t21 = 29003854438LLU;

    t21 = (x93%(x94!=(x95<=x96)));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x98 = -150499985;
	static uint8_t x99 = UINT8_MAX;
	static int64_t x100 = INT64_MAX;
	volatile int32_t t22 = -1735582;

    t22 = (x97%(x98!=(x99<=x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x101 = 30LLU;
	int64_t x102 = INT64_MIN;
	uint16_t x103 = 31318U;
	uint64_t t23 = 831440LLU;

    t23 = (x101%(x102!=(x103<=x104)));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x106 = INT8_MIN;
	int32_t x107 = -1;
	volatile int32_t t24 = 1;

    t24 = (x105%(x106!=(x107<=x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x110 = INT32_MIN;
	int16_t x111 = 2;
	int8_t x112 = -1;
	static volatile uint64_t t25 = 124938LLU;

    t25 = (x109%(x110!=(x111<=x112)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x113 = 171551LLU;
	int64_t x114 = INT64_MAX;
	uint16_t x115 = 895U;
	int16_t x116 = -1;
	uint64_t t26 = 244057276LLU;

    t26 = (x113%(x114!=(x115<=x116)));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = -3603979270940574LL;
	int32_t x118 = -13612;
	uint32_t x119 = UINT32_MAX;
	static int8_t x120 = INT8_MIN;
	volatile int64_t t27 = 31011LL;

    t27 = (x117%(x118!=(x119<=x120)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x121 = INT32_MAX;
	volatile int8_t x122 = INT8_MIN;
	int16_t x123 = INT16_MIN;
	int8_t x124 = -1;
	int32_t t28 = -1331487;

    t28 = (x121%(x122!=(x123<=x124)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x126 = 7U;
	int64_t x127 = -1LL;
	int8_t x128 = INT8_MAX;
	volatile int32_t t29 = -20925921;

    t29 = (x125%(x126!=(x127<=x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 0U;
	int64_t x131 = INT64_MIN;
	int32_t x132 = INT32_MAX;
	static volatile int32_t t30 = -279;

    t30 = (x129%(x130!=(x131<=x132)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MIN;
	int64_t x134 = -15739302228LL;
	int16_t x135 = -1;
	int32_t x136 = -1;

    t31 = (x133%(x134!=(x135<=x136)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x137 = 3908899957249694LLU;
	static uint64_t x138 = 4LLU;
	volatile uint64_t t32 = 24802LLU;

    t32 = (x137%(x138!=(x139<=x140)));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x141 = INT64_MIN;
	static int64_t x142 = -1LL;
	uint16_t x144 = 43U;
	volatile int64_t t33 = 4445170279137LL;

    t33 = (x141%(x142!=(x143<=x144)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = -2;
	static int32_t x146 = INT32_MIN;
	uint32_t x147 = 4U;
	int8_t x148 = INT8_MIN;

    t34 = (x145%(x146!=(x147<=x148)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x149 = 36327462U;
	volatile int8_t x150 = INT8_MAX;
	int32_t x151 = -125605;
	static int64_t x152 = INT64_MIN;
	volatile uint32_t t35 = 24U;

    t35 = (x149%(x150!=(x151<=x152)));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x157 = -1;
	int32_t x159 = INT32_MAX;
	volatile int16_t x160 = -1;
	int32_t t36 = -85512;

    t36 = (x157%(x158!=(x159<=x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = -1;
	int16_t x162 = INT16_MIN;
	uint8_t x163 = UINT8_MAX;
	uint32_t x164 = 10U;
	int32_t t37 = -1;

    t37 = (x161%(x162!=(x163<=x164)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = -1;
	int64_t x166 = -1LL;
	int16_t x168 = INT16_MIN;
	volatile int32_t t38 = 717374;

    t38 = (x165%(x166!=(x167<=x168)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = INT8_MIN;
	int32_t x170 = -1;
	int32_t x171 = 13309;
	static int8_t x172 = -1;
	volatile int32_t t39 = -165890254;

    t39 = (x169%(x170!=(x171<=x172)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = 5;
	static int16_t x174 = INT16_MIN;
	volatile int32_t x175 = INT32_MAX;
	int16_t x176 = -1;
	volatile int32_t t40 = 0;

    t40 = (x173%(x174!=(x175<=x176)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = INT16_MIN;
	volatile uint64_t x178 = 111129934LLU;
	int64_t x179 = -4951238295830LL;
	static int64_t x180 = INT64_MIN;

    t41 = (x177%(x178!=(x179<=x180)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MAX;
	int32_t x182 = -31231;
	int8_t x183 = 3;
	uint32_t x184 = UINT32_MAX;
	int32_t t42 = 291;

    t42 = (x181%(x182!=(x183<=x184)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x185 = 1944108830LL;
	int64_t x186 = -129421311855LL;
	volatile uint64_t x187 = 185LLU;
	int32_t x188 = INT32_MIN;
	volatile int64_t t43 = 398LL;

    t43 = (x185%(x186!=(x187<=x188)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = 32;
	int32_t x192 = 1;
	volatile int32_t t44 = -49;

    t44 = (x189%(x190!=(x191<=x192)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x194 = -4095;
	int8_t x196 = INT8_MIN;
	int32_t t45 = -17;

    t45 = (x193%(x194!=(x195<=x196)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x197 = -11LL;
	uint32_t x199 = 2068633071U;
	volatile uint64_t x200 = 96941008909LLU;
	volatile int64_t t46 = 39621LL;

    t46 = (x197%(x198!=(x199<=x200)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x201 = INT32_MIN;
	static int8_t x203 = INT8_MIN;
	static int32_t t47 = -20;

    t47 = (x201%(x202!=(x203<=x204)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x206 = 391U;
	volatile uint64_t x207 = 70584801747532734LLU;
	static int64_t x208 = -1LL;
	int32_t t48 = -13;

    t48 = (x205%(x206!=(x207<=x208)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = INT8_MAX;
	int8_t x211 = 23;
	static uint32_t x212 = 1U;
	volatile int32_t t49 = -54;

    t49 = (x209%(x210!=(x211<=x212)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x213 = INT16_MAX;
	int32_t x215 = INT32_MIN;
	int64_t x216 = 125016820553314LL;

    t50 = (x213%(x214!=(x215<=x216)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x217 = UINT64_MAX;
	uint64_t x218 = 28326842696585LLU;
	static int8_t x219 = INT8_MAX;
	static int8_t x220 = -25;

    t51 = (x217%(x218!=(x219<=x220)));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x221 = 1147090159197122236LLU;
	uint64_t x222 = 5187135702918117014LLU;
	static int32_t x223 = INT32_MIN;
	uint32_t x224 = 15759620U;
	uint64_t t52 = 247662700923907914LLU;

    t52 = (x221%(x222!=(x223<=x224)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x225 = -1519544455520662LL;
	uint64_t x226 = UINT64_MAX;
	static uint16_t x228 = 2U;
	int64_t t53 = 4016569770453795142LL;

    t53 = (x225%(x226!=(x227<=x228)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x229 = INT64_MIN;
	uint16_t x232 = 2U;
	int64_t t54 = 2228838286LL;

    t54 = (x229%(x230!=(x231<=x232)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MAX;
	static int8_t x235 = -1;
	int64_t x236 = INT64_MIN;
	int32_t t55 = -908683486;

    t55 = (x233%(x234!=(x235<=x236)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = -3LL;
	int16_t x238 = INT16_MIN;
	volatile int32_t x239 = INT32_MAX;
	uint64_t x240 = UINT64_MAX;

    t56 = (x237%(x238!=(x239<=x240)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x241 = 3884777LL;
	int16_t x242 = INT16_MIN;
	volatile uint8_t x243 = 23U;
	uint32_t x244 = 1152962560U;
	static int64_t t57 = 128503455535LL;

    t57 = (x241%(x242!=(x243<=x244)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x245 = 9488U;
	static int32_t x246 = -1;
	int16_t x247 = INT16_MIN;
	volatile int16_t x248 = INT16_MIN;
	volatile int32_t t58 = 657;

    t58 = (x245%(x246!=(x247<=x248)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x249 = INT16_MIN;
	static uint16_t x250 = 470U;
	int32_t x251 = INT32_MIN;
	int32_t x252 = -1;
	static int32_t t59 = -152284;

    t59 = (x249%(x250!=(x251<=x252)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = -1;
	int16_t x254 = INT16_MIN;
	int8_t x255 = -13;
	uint16_t x256 = 36U;
	static volatile int32_t t60 = 22;

    t60 = (x253%(x254!=(x255<=x256)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x257 = -30;
	volatile uint8_t x258 = UINT8_MAX;
	int32_t x259 = -3;
	static uint64_t x260 = 483150256694LLU;
	volatile int32_t t61 = 15;

    t61 = (x257%(x258!=(x259<=x260)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x261 = -10947;
	static int8_t x262 = INT8_MIN;
	int64_t x263 = 0LL;
	int16_t x264 = 2;

    t62 = (x261%(x262!=(x263<=x264)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = 1;
	static int64_t x266 = 16341942233229LL;
	int8_t x267 = INT8_MIN;
	volatile int8_t x268 = -1;
	volatile int32_t t63 = -3558;

    t63 = (x265%(x266!=(x267<=x268)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = -1;
	static int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MAX;
	volatile int32_t t64 = 3;

    t64 = (x269%(x270!=(x271<=x272)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x273 = 36LLU;
	uint16_t x274 = 21U;
	int32_t x275 = INT32_MIN;
	int32_t x276 = -1;
	volatile uint64_t t65 = 133195150440LLU;

    t65 = (x273%(x274!=(x275<=x276)));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x278 = INT8_MIN;
	volatile int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MIN;
	static volatile int64_t t66 = 13306690539LL;

    t66 = (x277%(x278!=(x279<=x280)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x281 = INT32_MAX;
	int64_t x282 = 1LL;
	uint8_t x283 = 51U;
	volatile int8_t x284 = INT8_MIN;
	int32_t t67 = -213968353;

    t67 = (x281%(x282!=(x283<=x284)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x286 = -19993LL;
	volatile int8_t x287 = -61;
	static uint32_t x288 = 2U;
	volatile int32_t t68 = -219451589;

    t68 = (x285%(x286!=(x287<=x288)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x289 = INT8_MIN;
	static volatile int8_t x290 = -2;
	int64_t x291 = INT64_MIN;
	int16_t x292 = 59;
	int32_t t69 = 2751951;

    t69 = (x289%(x290!=(x291<=x292)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x294 = INT64_MIN;
	int32_t x295 = 118;
	volatile int32_t t70 = 92542672;

    t70 = (x293%(x294!=(x295<=x296)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x297 = -1;
	int16_t x298 = INT16_MAX;
	uint8_t x300 = UINT8_MAX;
	static volatile int32_t t71 = 22866543;

    t71 = (x297%(x298!=(x299<=x300)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x301 = INT64_MAX;
	volatile uint64_t x302 = 18LLU;
	volatile int32_t x303 = INT32_MIN;
	volatile int64_t t72 = -27870301150118LL;

    t72 = (x301%(x302!=(x303<=x304)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x305 = INT32_MAX;
	uint32_t x307 = 5U;
	uint8_t x308 = 9U;
	int32_t t73 = -7615938;

    t73 = (x305%(x306!=(x307<=x308)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x309 = INT32_MAX;
	int8_t x312 = INT8_MIN;
	int32_t t74 = 857249;

    t74 = (x309%(x310!=(x311<=x312)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x313 = INT8_MIN;
	int8_t x314 = 35;
	static int8_t x316 = 13;
	volatile int32_t t75 = 67;

    t75 = (x313%(x314!=(x315<=x316)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = -1;
	int64_t x318 = INT64_MIN;
	static int16_t x319 = 72;
	int32_t x320 = INT32_MAX;
	int32_t t76 = 107;

    t76 = (x317%(x318!=(x319<=x320)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x321 = INT16_MIN;
	uint16_t x323 = 3U;
	uint64_t x324 = 16147LLU;
	static int32_t t77 = -3528458;

    t77 = (x321%(x322!=(x323<=x324)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x326 = INT8_MAX;
	volatile uint8_t x327 = UINT8_MAX;
	int32_t t78 = 81503;

    t78 = (x325%(x326!=(x327<=x328)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x329 = INT8_MIN;
	int64_t x330 = 267703064LL;
	int8_t x331 = INT8_MIN;
	volatile int16_t x332 = INT16_MIN;
	volatile int32_t t79 = 0;

    t79 = (x329%(x330!=(x331<=x332)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = INT8_MIN;
	volatile int64_t x334 = INT64_MIN;
	int64_t x335 = INT64_MAX;
	int16_t x336 = INT16_MAX;
	volatile int32_t t80 = 15;

    t80 = (x333%(x334!=(x335<=x336)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = INT32_MAX;
	int8_t x338 = 5;
	int64_t x339 = -22339782861934141LL;
	int64_t x340 = INT64_MIN;
	volatile int32_t t81 = 0;

    t81 = (x337%(x338!=(x339<=x340)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = -7;
	int16_t x342 = INT16_MIN;
	static int16_t x344 = INT16_MAX;
	volatile int32_t t82 = -76;

    t82 = (x341%(x342!=(x343<=x344)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x349 = 24;
	static int16_t x351 = INT16_MAX;
	volatile int32_t t83 = -1447;

    t83 = (x349%(x350!=(x351<=x352)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x353 = -120;
	volatile int8_t x354 = 0;
	static uint32_t x355 = 4941918U;
	volatile int16_t x356 = INT16_MIN;
	static volatile int32_t t84 = 370;

    t84 = (x353%(x354!=(x355<=x356)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x357 = UINT64_MAX;
	int32_t x358 = 24252;
	int32_t x359 = -1;
	static int64_t x360 = INT64_MAX;
	uint64_t t85 = 3923279151LLU;

    t85 = (x357%(x358!=(x359<=x360)));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x361 = 40LLU;
	static int8_t x363 = -1;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t86 = 30LLU;

    t86 = (x361%(x362!=(x363<=x364)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x367 = INT32_MIN;
	static int8_t x368 = 0;
	volatile int32_t t87 = -176;

    t87 = (x365%(x366!=(x367<=x368)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x369 = 808U;
	int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	static volatile uint64_t x372 = 5407302997644LLU;
	uint32_t t88 = 91086511U;

    t88 = (x369%(x370!=(x371<=x372)));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x373 = 205754U;
	volatile int8_t x374 = -1;
	static int16_t x376 = -223;
	static uint32_t t89 = 3U;

    t89 = (x373%(x374!=(x375<=x376)));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x377 = INT16_MAX;
	int8_t x378 = -1;
	int64_t x379 = -1219499407893168162LL;
	uint16_t x380 = 151U;
	volatile int32_t t90 = 287326673;

    t90 = (x377%(x378!=(x379<=x380)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x381 = 1LL;
	static int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MIN;
	volatile uint8_t x384 = 26U;
	int64_t t91 = -6184494258LL;

    t91 = (x381%(x382!=(x383<=x384)));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x385 = 8;
	uint16_t x386 = UINT16_MAX;
	int16_t x387 = -1;
	static volatile int64_t x388 = INT64_MIN;
	int32_t t92 = -11630;

    t92 = (x385%(x386!=(x387<=x388)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x389 = 33325958LLU;
	static uint16_t x390 = 167U;
	volatile uint32_t x391 = UINT32_MAX;
	volatile uint8_t x392 = 28U;

    t93 = (x389%(x390!=(x391<=x392)));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x393 = INT32_MIN;
	uint16_t x394 = 8281U;
	uint8_t x395 = 111U;
	uint16_t x396 = UINT16_MAX;
	int32_t t94 = 7;

    t94 = (x393%(x394!=(x395<=x396)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x397 = -1;
	volatile int16_t x398 = INT16_MIN;
	int64_t x399 = -3316331840324525LL;
	int16_t x400 = INT16_MIN;
	int32_t t95 = -812;

    t95 = (x397%(x398!=(x399<=x400)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x402 = -597LL;
	int32_t x403 = INT32_MIN;

    t96 = (x401%(x402!=(x403<=x404)));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x405 = INT64_MIN;
	int16_t x407 = INT16_MAX;
	int16_t x408 = INT16_MAX;
	int64_t t97 = 1818668221LL;

    t97 = (x405%(x406!=(x407<=x408)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x409 = INT8_MAX;
	volatile uint32_t x410 = 2428U;
	int16_t x411 = -3;
	static uint8_t x412 = UINT8_MAX;
	volatile int32_t t98 = -14542;

    t98 = (x409%(x410!=(x411<=x412)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x413 = INT32_MAX;
	int64_t x414 = -1LL;
	volatile uint64_t x415 = 15322572361016643LLU;
	volatile int8_t x416 = INT8_MIN;
	int32_t t99 = -106990302;

    t99 = (x413%(x414!=(x415<=x416)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x417 = INT8_MIN;
	volatile int64_t x418 = INT64_MIN;
	int32_t x419 = 6618687;
	int8_t x420 = INT8_MAX;

    t100 = (x417%(x418!=(x419<=x420)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x424 = INT32_MIN;
	int32_t t101 = 14;

    t101 = (x421%(x422!=(x423<=x424)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x425 = INT32_MIN;
	static volatile int8_t x427 = -3;
	int64_t x428 = INT64_MIN;
	volatile int32_t t102 = -63361;

    t102 = (x425%(x426!=(x427<=x428)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x429 = 0;
	static volatile int64_t x430 = -1LL;
	int32_t x432 = INT32_MAX;
	int32_t t103 = 780217273;

    t103 = (x429%(x430!=(x431<=x432)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x434 = -1;
	int64_t x436 = -1LL;

    t104 = (x433%(x434!=(x435<=x436)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x437 = -3896560LL;
	int64_t x438 = INT64_MIN;
	int8_t x439 = -11;
	volatile int16_t x440 = INT16_MAX;

    t105 = (x437%(x438!=(x439<=x440)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x443 = UINT8_MAX;
	volatile int64_t t106 = 103148087LL;

    t106 = (x441%(x442!=(x443<=x444)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x446 = 2438U;
	static volatile int16_t x447 = 8648;
	int64_t x448 = INT64_MIN;
	volatile int64_t t107 = 8784115395899238LL;

    t107 = (x445%(x446!=(x447<=x448)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = INT16_MAX;
	int64_t x450 = INT64_MIN;
	int16_t x452 = INT16_MIN;
	static int32_t t108 = 185;

    t108 = (x449%(x450!=(x451<=x452)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x454 = -11206;
	int32_t x455 = -1;
	static uint32_t x456 = 16566U;
	int64_t t109 = 667254413717859357LL;

    t109 = (x453%(x454!=(x455<=x456)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x457 = -1;
	static volatile int64_t x458 = -118038LL;
	static uint8_t x459 = 32U;
	int8_t x460 = INT8_MIN;
	int32_t t110 = 20713718;

    t110 = (x457%(x458!=(x459<=x460)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x461 = 0U;
	int64_t x462 = INT64_MIN;
	int16_t x463 = INT16_MIN;
	int32_t x464 = INT32_MAX;

    t111 = (x461%(x462!=(x463<=x464)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x468 = 2U;
	static volatile int32_t t112 = 0;

    t112 = (x465%(x466!=(x467<=x468)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x470 = INT16_MIN;
	static int16_t x471 = -1972;
	int32_t x472 = -1;
	static uint64_t t113 = 617823594471634LLU;

    t113 = (x469%(x470!=(x471<=x472)));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x473 = 0U;
	static int8_t x474 = -29;
	volatile uint32_t x476 = 4012U;

    t114 = (x473%(x474!=(x475<=x476)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x477 = INT16_MIN;
	volatile int8_t x479 = 14;
	volatile int32_t t115 = -510370;

    t115 = (x477%(x478!=(x479<=x480)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = INT32_MAX;
	int64_t x482 = INT64_MAX;
	static volatile uint32_t x483 = UINT32_MAX;
	uint32_t x484 = 6424U;
	int32_t t116 = -262868608;

    t116 = (x481%(x482!=(x483<=x484)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x485 = -1;
	static int32_t x487 = INT32_MIN;
	uint64_t x488 = 51986165LLU;
	volatile int32_t t117 = -405369;

    t117 = (x485%(x486!=(x487<=x488)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x490 = -243;
	int8_t x491 = INT8_MAX;
	static volatile uint8_t x492 = 27U;
	int32_t t118 = 1004074188;

    t118 = (x489%(x490!=(x491<=x492)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x493 = 39U;
	int16_t x495 = -1;

    t119 = (x493%(x494!=(x495<=x496)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x497 = INT32_MIN;
	int64_t x498 = INT64_MAX;
	static uint8_t x499 = 1U;
	int32_t t120 = 235181;

    t120 = (x497%(x498!=(x499<=x500)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x501 = 0;
	volatile int16_t x503 = INT16_MIN;
	int32_t t121 = -8334;

    t121 = (x501%(x502!=(x503<=x504)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x505 = 4954U;
	int64_t x506 = INT64_MIN;
	static int64_t x507 = INT64_MIN;
	uint8_t x508 = UINT8_MAX;

    t122 = (x505%(x506!=(x507<=x508)));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x509 = -1LL;
	int32_t x510 = 67;
	volatile uint16_t x511 = 833U;
	static uint8_t x512 = 0U;
	volatile int64_t t123 = -1240668LL;

    t123 = (x509%(x510!=(x511<=x512)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x513 = INT8_MIN;
	uint8_t x514 = 0U;
	int8_t x515 = INT8_MIN;
	uint16_t x516 = 15U;
	static volatile int32_t t124 = 1629;

    t124 = (x513%(x514!=(x515<=x516)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x517 = 101805;
	int64_t x518 = INT64_MAX;
	static uint32_t x519 = 60099026U;
	static volatile uint8_t x520 = 39U;

    t125 = (x517%(x518!=(x519<=x520)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x521 = INT16_MIN;
	static int64_t x522 = -1LL;
	static int16_t x523 = INT16_MIN;
	static int16_t x524 = INT16_MIN;
	volatile int32_t t126 = 7461552;

    t126 = (x521%(x522!=(x523<=x524)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x525 = INT64_MIN;
	static int64_t x527 = INT64_MIN;
	uint64_t x528 = UINT64_MAX;
	volatile int64_t t127 = 768902101286LL;

    t127 = (x525%(x526!=(x527<=x528)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x529 = INT16_MIN;
	int32_t x530 = INT32_MIN;
	uint64_t x531 = 2006655437LLU;
	int32_t x532 = INT32_MIN;

    t128 = (x529%(x530!=(x531<=x532)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x534 = INT32_MIN;
	int32_t x535 = INT32_MIN;
	static volatile int32_t t129 = -14;

    t129 = (x533%(x534!=(x535<=x536)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x537 = -1;
	volatile int16_t x538 = -1;
	uint8_t x539 = UINT8_MAX;
	static int8_t x540 = -5;
	volatile int32_t t130 = -7370821;

    t130 = (x537%(x538!=(x539<=x540)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x541 = -14;
	static int32_t x542 = INT32_MAX;
	volatile int32_t x543 = INT32_MAX;
	volatile int32_t t131 = 210;

    t131 = (x541%(x542!=(x543<=x544)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x545 = -1;
	volatile uint32_t x546 = 1782855U;
	int8_t x547 = -42;
	int64_t x548 = -925547790369141LL;
	static int32_t t132 = 4411826;

    t132 = (x545%(x546!=(x547<=x548)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x552 = INT64_MAX;
	int32_t t133 = 61;

    t133 = (x549%(x550!=(x551<=x552)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x553 = 3;
	int32_t x554 = INT32_MAX;
	int32_t x555 = INT32_MIN;
	static int32_t x556 = -1001;
	int32_t t134 = -14;

    t134 = (x553%(x554!=(x555<=x556)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x557 = UINT64_MAX;
	static int64_t x558 = -1LL;

    t135 = (x557%(x558!=(x559<=x560)));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x561 = -1;
	uint8_t x562 = UINT8_MAX;
	int32_t x563 = -48;
	static int16_t x564 = -3;
	int32_t t136 = 380113776;

    t136 = (x561%(x562!=(x563<=x564)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x565 = INT32_MIN;
	int8_t x566 = INT8_MAX;
	int64_t x567 = INT64_MAX;
	uint32_t x568 = 1U;
	volatile int32_t t137 = -5;

    t137 = (x565%(x566!=(x567<=x568)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x569 = -1;
	int16_t x570 = -1;
	int8_t x571 = -1;
	int32_t x572 = INT32_MIN;
	int32_t t138 = -4;

    t138 = (x569%(x570!=(x571<=x572)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x573 = 1U;
	static volatile uint8_t x575 = 1U;
	int32_t x576 = 216;
	volatile int32_t t139 = 1;

    t139 = (x573%(x574!=(x575<=x576)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x577 = UINT16_MAX;
	volatile uint8_t x578 = 7U;
	uint16_t x579 = 31U;
	int16_t x580 = 1900;
	static volatile int32_t t140 = 0;

    t140 = (x577%(x578!=(x579<=x580)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x582 = -6481337494805LL;
	static int64_t x583 = INT64_MAX;
	int64_t x584 = INT64_MAX;
	volatile int32_t t141 = 23638;

    t141 = (x581%(x582!=(x583<=x584)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x585 = -2018541LL;
	int8_t x587 = -1;
	int64_t x588 = INT64_MAX;
	static int64_t t142 = 112839729548LL;

    t142 = (x585%(x586!=(x587<=x588)));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x589 = UINT16_MAX;
	int32_t x590 = 342849432;
	int16_t x591 = 0;
	static int16_t x592 = INT16_MIN;

    t143 = (x589%(x590!=(x591<=x592)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x593 = 3U;
	static int32_t x595 = INT32_MAX;
	int8_t x596 = INT8_MAX;
	int32_t t144 = 13;

    t144 = (x593%(x594!=(x595<=x596)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x598 = UINT8_MAX;
	int8_t x599 = 0;
	uint16_t x600 = UINT16_MAX;
	static volatile int64_t t145 = 523010171748648147LL;

    t145 = (x597%(x598!=(x599<=x600)));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x601 = UINT16_MAX;
	uint16_t x604 = UINT16_MAX;
	volatile int32_t t146 = -58;

    t146 = (x601%(x602!=(x603<=x604)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x605 = UINT64_MAX;

    t147 = (x605%(x606!=(x607<=x608)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x609 = INT8_MIN;
	volatile int64_t x610 = -4161707322528899056LL;
	volatile uint32_t x611 = 3700U;
	volatile uint8_t x612 = 7U;
	int32_t t148 = 29;

    t148 = (x609%(x610!=(x611<=x612)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x613 = INT32_MIN;
	int16_t x614 = INT16_MIN;
	static int64_t x615 = INT64_MIN;
	int8_t x616 = 0;
	volatile int32_t t149 = 739391;

    t149 = (x613%(x614!=(x615<=x616)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x617 = -1;
	uint16_t x618 = 1297U;
	static uint32_t x619 = 10574U;
	int64_t x620 = -1LL;
	static int32_t t150 = -846;

    t150 = (x617%(x618!=(x619<=x620)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = -1LL;
	int16_t x622 = INT16_MIN;
	int16_t x623 = INT16_MIN;
	volatile int64_t t151 = 27278LL;

    t151 = (x621%(x622!=(x623<=x624)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x625 = INT32_MAX;
	int16_t x626 = 28;
	volatile int32_t x627 = -2220768;
	volatile int32_t t152 = -22754127;

    t152 = (x625%(x626!=(x627<=x628)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x630 = 31946041LLU;
	static volatile int16_t x631 = -1;

    t153 = (x629%(x630!=(x631<=x632)));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x633 = UINT32_MAX;
	static int64_t x634 = INT64_MIN;
	uint16_t x636 = 325U;
	volatile uint32_t t154 = 25064U;

    t154 = (x633%(x634!=(x635<=x636)));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x637 = UINT64_MAX;
	int32_t x638 = -1;
	int32_t x639 = -105;

    t155 = (x637%(x638!=(x639<=x640)));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x642 = INT8_MIN;
	uint64_t t156 = 1318LLU;

    t156 = (x641%(x642!=(x643<=x644)));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x645 = INT32_MIN;
	static uint8_t x646 = UINT8_MAX;
	uint64_t x647 = 366509570664209LLU;
	int32_t t157 = -28833322;

    t157 = (x645%(x646!=(x647<=x648)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x649 = 14U;
	uint8_t x650 = 2U;
	static uint8_t x651 = 1U;
	int64_t x652 = -833186LL;
	int32_t t158 = -609420;

    t158 = (x649%(x650!=(x651<=x652)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x653 = INT16_MIN;
	int64_t x654 = -37965863295781LL;
	int64_t x655 = INT64_MIN;
	static uint64_t x656 = 0LLU;

    t159 = (x653%(x654!=(x655<=x656)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x658 = INT32_MIN;
	uint8_t x659 = 0U;
	static volatile int8_t x660 = INT8_MIN;
	uint64_t t160 = 810LLU;

    t160 = (x657%(x658!=(x659<=x660)));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x662 = INT32_MIN;
	int32_t x663 = 99739320;
	int64_t x664 = -3692957695044050LL;

    t161 = (x661%(x662!=(x663<=x664)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x665 = UINT32_MAX;
	uint64_t x666 = UINT64_MAX;
	uint16_t x667 = UINT16_MAX;
	volatile uint32_t t162 = 11074U;

    t162 = (x665%(x666!=(x667<=x668)));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x670 = INT8_MIN;
	uint32_t x671 = 21U;
	int64_t x672 = -134078068241828LL;
	volatile int32_t t163 = 8;

    t163 = (x669%(x670!=(x671<=x672)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x673 = 1127287816U;
	static int32_t x674 = -1;
	uint16_t x676 = 237U;
	static volatile uint32_t t164 = 87622209U;

    t164 = (x673%(x674!=(x675<=x676)));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x677 = -3;
	uint64_t x678 = 287418858254058LLU;
	int16_t x679 = -1;
	int8_t x680 = 0;
	int32_t t165 = -13481;

    t165 = (x677%(x678!=(x679<=x680)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x681 = 0;
	volatile int16_t x682 = INT16_MIN;
	static int32_t x683 = -379176;
	int64_t x684 = INT64_MIN;
	int32_t t166 = -10;

    t166 = (x681%(x682!=(x683<=x684)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x686 = -1;
	int16_t x687 = -2;
	int32_t t167 = -166;

    t167 = (x685%(x686!=(x687<=x688)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x689 = 1;
	int64_t x690 = -196659055936730354LL;
	static uint16_t x691 = 3U;
	static volatile int16_t x692 = -3014;
	volatile int32_t t168 = -3;

    t168 = (x689%(x690!=(x691<=x692)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x693 = 114;
	int32_t x694 = INT32_MAX;
	volatile int32_t t169 = -1;

    t169 = (x693%(x694!=(x695<=x696)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x697 = -1;
	volatile int64_t x698 = INT64_MIN;
	volatile uint32_t x699 = UINT32_MAX;
	int32_t t170 = -487950374;

    t170 = (x697%(x698!=(x699<=x700)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x702 = INT32_MIN;
	int8_t x703 = INT8_MIN;
	int64_t x704 = INT64_MIN;

    t171 = (x701%(x702!=(x703<=x704)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x706 = UINT32_MAX;
	uint64_t x707 = 58024137418182918LLU;
	uint32_t x708 = UINT32_MAX;

    t172 = (x705%(x706!=(x707<=x708)));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x709 = 3740290603888263LLU;
	int16_t x710 = INT16_MAX;
	uint64_t x711 = UINT64_MAX;
	volatile int8_t x712 = INT8_MIN;
	volatile uint64_t t173 = 40565616565760LLU;

    t173 = (x709%(x710!=(x711<=x712)));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x713 = INT32_MAX;
	volatile int64_t x714 = -47609974967LL;
	static int32_t x715 = INT32_MIN;
	volatile int32_t t174 = 0;

    t174 = (x713%(x714!=(x715<=x716)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x717 = -1;
	int32_t x718 = INT32_MAX;
	uint32_t x719 = UINT32_MAX;
	static int32_t t175 = -3379991;

    t175 = (x717%(x718!=(x719<=x720)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x721 = 72U;
	volatile int64_t x722 = INT64_MIN;
	uint64_t x723 = UINT64_MAX;
	volatile uint64_t x724 = 1LLU;
	int32_t t176 = -30;

    t176 = (x721%(x722!=(x723<=x724)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x725 = -1LL;
	uint8_t x726 = 101U;
	int32_t x727 = 6787399;
	volatile int64_t x728 = -60LL;

    t177 = (x725%(x726!=(x727<=x728)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x730 = 4U;
	int32_t t178 = 4025;

    t178 = (x729%(x730!=(x731<=x732)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x733 = INT64_MAX;
	int64_t x734 = -16314406LL;
	int8_t x735 = INT8_MIN;
	int64_t t179 = -1367779481LL;

    t179 = (x733%(x734!=(x735<=x736)));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x737 = INT64_MAX;
	uint32_t x738 = UINT32_MAX;
	int64_t x739 = -1LL;
	uint8_t x740 = UINT8_MAX;
	int64_t t180 = 9870153951428LL;

    t180 = (x737%(x738!=(x739<=x740)));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x741 = 850704U;
	volatile uint16_t x742 = UINT16_MAX;
	int64_t x743 = -1LL;
	static int8_t x744 = 2;
	volatile uint32_t t181 = 3U;

    t181 = (x741%(x742!=(x743<=x744)));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x745 = 20802657U;
	int16_t x746 = INT16_MIN;
	volatile uint16_t x747 = 472U;
	static volatile int8_t x748 = -1;
	volatile uint32_t t182 = 210U;

    t182 = (x745%(x746!=(x747<=x748)));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x749 = INT64_MIN;
	static int16_t x750 = 1443;
	volatile int64_t t183 = 17902540LL;

    t183 = (x749%(x750!=(x751<=x752)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x754 = -872;
	int32_t x755 = -4;
	uint64_t x756 = UINT64_MAX;
	int32_t t184 = -156164042;

    t184 = (x753%(x754!=(x755<=x756)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x757 = 8262U;
	static uint16_t x758 = 8U;
	volatile int16_t x759 = INT16_MIN;
	static volatile int8_t x760 = INT8_MIN;

    t185 = (x757%(x758!=(x759<=x760)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x761 = INT32_MAX;
	static volatile int64_t x762 = -208420620848LL;
	int32_t x763 = -1;
	int32_t t186 = -890684376;

    t186 = (x761%(x762!=(x763<=x764)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x765 = -1;
	int8_t x766 = -1;
	uint64_t x767 = 772LLU;
	int32_t x768 = -1;
	static volatile int32_t t187 = -106461724;

    t187 = (x765%(x766!=(x767<=x768)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x769 = 3U;
	static int32_t x770 = INT32_MIN;
	uint8_t x771 = 0U;
	static int8_t x772 = -1;

    t188 = (x769%(x770!=(x771<=x772)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x773 = 55;
	volatile int64_t x774 = INT64_MIN;
	int16_t x776 = 1;
	int32_t t189 = -5680001;

    t189 = (x773%(x774!=(x775<=x776)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x778 = UINT32_MAX;
	uint32_t x779 = 17U;
	int8_t x780 = INT8_MIN;

    t190 = (x777%(x778!=(x779<=x780)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x781 = 24U;
	uint64_t x782 = 123LLU;
	static uint16_t x783 = 154U;
	static volatile uint16_t x784 = 169U;
	static int32_t t191 = -1739624;

    t191 = (x781%(x782!=(x783<=x784)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x785 = -1;
	int32_t t192 = -31664863;

    t192 = (x785%(x786!=(x787<=x788)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x795 = -1;

    t193 = (x793%(x794!=(x795<=x796)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x798 = 7315912442057424LL;
	static int16_t x799 = 25;
	int16_t x800 = 0;
	static volatile uint64_t t194 = 112LLU;

    t194 = (x797%(x798!=(x799<=x800)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x801 = -1;
	uint64_t x802 = UINT64_MAX;
	static uint32_t x803 = 968U;
	uint32_t x804 = 14417973U;
	volatile int32_t t195 = 851414105;

    t195 = (x801%(x802!=(x803<=x804)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x808 = INT16_MAX;
	int32_t t196 = 723798;

    t196 = (x805%(x806!=(x807<=x808)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x809 = UINT8_MAX;
	uint16_t x810 = 3040U;
	int64_t x811 = 1030299738338359LL;
	static int32_t x812 = -3496;
	int32_t t197 = 161097981;

    t197 = (x809%(x810!=(x811<=x812)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x813 = -1545227LL;
	int8_t x814 = INT8_MIN;
	static uint16_t x815 = UINT16_MAX;
	static int64_t x816 = -4250603434275508402LL;
	int64_t t198 = 676LL;

    t198 = (x813%(x814!=(x815<=x816)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x817 = 4;
	uint32_t x818 = 62924U;
	int8_t x820 = INT8_MIN;
	volatile int32_t t199 = -26202;

    t199 = (x817%(x818!=(x819<=x820)));

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

