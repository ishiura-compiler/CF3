
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

int16_t x2 = -5128;
uint16_t x3 = UINT16_MAX;
volatile int64_t x4 = INT64_MAX;
uint32_t x9 = 51U;
int32_t x12 = -125;
int64_t x13 = INT64_MIN;
uint32_t x14 = 2U;
volatile uint8_t x17 = 23U;
uint16_t x20 = UINT16_MAX;
volatile int32_t x25 = INT32_MAX;
volatile int32_t t7 = -1;
static int8_t x40 = 2;
int32_t x42 = -70;
volatile int32_t t10 = 22703372;
volatile uint8_t x46 = 53U;
static int8_t x48 = INT8_MIN;
static volatile int32_t t13 = -147702;
int16_t x58 = 81;
uint64_t x61 = 15LLU;
uint16_t x64 = 17767U;
uint16_t x68 = UINT16_MAX;
int16_t x73 = INT16_MIN;
volatile int32_t t18 = 19685184;
static uint32_t x86 = 570253U;
int32_t x88 = INT32_MAX;
volatile int8_t x91 = INT8_MAX;
int64_t x93 = INT64_MIN;
int8_t x103 = INT8_MAX;
int64_t x108 = -4LL;
uint32_t x109 = 83U;
volatile int32_t x111 = INT32_MAX;
uint8_t x113 = 0U;
static int8_t x122 = -1;
int32_t x129 = INT32_MIN;
volatile int32_t t33 = -9;
int64_t x144 = INT64_MAX;
int8_t x157 = -1;
int32_t x161 = 635193;
volatile uint8_t x162 = 16U;
volatile int16_t x164 = 45;
volatile int32_t t46 = 5;
static int32_t x189 = -9;
static volatile int32_t t48 = -105466362;
int32_t x202 = -1;
uint16_t x204 = 95U;
static int16_t x207 = INT16_MAX;
int64_t x208 = INT64_MIN;
int64_t x210 = -1LL;
volatile uint64_t x211 = UINT64_MAX;
volatile uint32_t x214 = 9958U;
int16_t x218 = INT16_MIN;
volatile int16_t x219 = INT16_MAX;
int32_t x220 = INT32_MAX;
int32_t t54 = -3943980;
int64_t x223 = -1LL;
int16_t x230 = 0;
uint32_t x233 = 2138920652U;
volatile int16_t x239 = 40;
int16_t x240 = -1;
int8_t x241 = 50;
static int32_t x248 = INT32_MIN;
uint16_t x256 = 31511U;
static uint8_t x257 = UINT8_MAX;
uint64_t x266 = UINT64_MAX;
static uint32_t x277 = 106U;
int8_t x287 = INT8_MAX;
int8_t x298 = -1;
int16_t x301 = -1;
volatile uint8_t x308 = 9U;
int32_t t75 = 1;
static volatile int64_t x313 = INT64_MIN;
static int32_t t77 = -446;
volatile int32_t x317 = 3;
static volatile int32_t t81 = -23194;
int64_t x343 = -1LL;
int32_t x345 = -1;
int32_t t85 = -959;
int8_t x349 = INT8_MAX;
volatile int8_t x352 = 2;
int8_t x353 = 2;
volatile int32_t t90 = -29;
volatile int32_t t91 = 0;
uint16_t x378 = 1U;
static int32_t t94 = -39;
int8_t x390 = INT8_MAX;
int64_t x395 = INT64_MAX;
int8_t x397 = INT8_MIN;
int8_t x405 = -1;
volatile int32_t x415 = -2;
int16_t x417 = INT16_MIN;
volatile int32_t x418 = -287;
int32_t t102 = -44758;
static int32_t x428 = INT32_MIN;
volatile uint16_t x429 = 23801U;
static volatile int8_t x432 = -1;
static volatile int8_t x435 = -2;
static uint8_t x436 = UINT8_MAX;
static uint8_t x442 = 30U;
int64_t x447 = -1LL;
int32_t t109 = -34775340;
uint64_t x451 = 353959981068097803LLU;
int64_t x459 = INT64_MIN;
int32_t x460 = INT32_MIN;
int16_t x463 = -1;
volatile int32_t t114 = 1948;
static uint64_t x470 = UINT64_MAX;
static volatile int8_t x485 = INT8_MIN;
int64_t x486 = 3LL;
static volatile int32_t t119 = -15434582;
static volatile uint32_t x493 = 727752152U;
uint8_t x497 = 2U;
volatile int32_t t122 = -473;
uint32_t x501 = 131U;
volatile int32_t t123 = -25558344;
uint8_t x513 = UINT8_MAX;
uint64_t x514 = UINT64_MAX;
uint16_t x522 = 1029U;
static int32_t x523 = -1700;
static int8_t x524 = INT8_MIN;
uint32_t x528 = 8276943U;
int8_t x529 = INT8_MAX;
int32_t t131 = -20110;
volatile int8_t x537 = INT8_MAX;
uint16_t x541 = UINT16_MAX;
int32_t t134 = -305985;
int32_t x556 = INT32_MAX;
static volatile int32_t x558 = -1655;
uint16_t x563 = UINT16_MAX;
static int16_t x565 = -1;
int32_t t139 = 7149;
static int8_t x585 = -1;
uint16_t x586 = 28U;
static int16_t x593 = -7679;
static uint16_t x596 = 5406U;
static int8_t x600 = 3;
int32_t x602 = INT32_MAX;
int64_t x604 = INT64_MIN;
int64_t x606 = -1LL;
int64_t x610 = INT64_MAX;
int64_t x613 = INT64_MAX;
int8_t x615 = 3;
int64_t x622 = -1LL;
int32_t x628 = INT32_MAX;
int32_t t154 = -188;
uint32_t x642 = 28U;
int16_t x649 = -1072;
int8_t x651 = -4;
int16_t x652 = -3644;
static uint32_t x653 = UINT32_MAX;
volatile int8_t x661 = -1;
static volatile int64_t x662 = INT64_MAX;
static int8_t x664 = INT8_MAX;
static int32_t x668 = INT32_MAX;
volatile int32_t t164 = -991;
volatile uint16_t x673 = UINT16_MAX;
volatile uint32_t x675 = 0U;
static volatile int32_t x683 = -1;
volatile int32_t t167 = 3020246;
int16_t x701 = INT16_MIN;
int8_t x702 = INT8_MAX;
volatile int16_t x706 = INT16_MAX;
int8_t x707 = INT8_MAX;
int16_t x709 = INT16_MAX;
static uint8_t x711 = 16U;
volatile int32_t t174 = -3;
int8_t x717 = 0;
int8_t x720 = INT8_MIN;
int64_t x722 = 2LL;
int8_t x728 = INT8_MAX;
static volatile int32_t t178 = 6637940;
int32_t x738 = INT32_MAX;
int32_t t180 = -537394;
static int64_t x742 = -1LL;
static int64_t x743 = INT64_MIN;
volatile int32_t t181 = 16550602;
static int8_t x745 = 1;
volatile int32_t t182 = 4982;
uint16_t x751 = 72U;
volatile uint32_t x754 = 5U;
volatile uint32_t x755 = 125U;
uint16_t x759 = 1686U;
int32_t t185 = -11418;
static int32_t x767 = 1;
int32_t x768 = 267691992;
int32_t x770 = 105818020;
uint32_t x772 = UINT32_MAX;
int16_t x777 = -31;
int64_t x786 = INT64_MAX;
volatile int16_t x787 = -377;
int32_t t197 = -13267;
uint64_t x813 = 155229140782778LLU;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile int32_t t0 = 4;

    t0 = ((x1|x2)==(x3%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = 0;
	uint32_t x6 = 1U;
	int16_t x7 = -1;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -96;

    t1 = ((x5|x6)==(x7%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x10 = -1;
	int16_t x11 = INT16_MAX;
	int32_t t2 = -1053778224;

    t2 = ((x9|x10)==(x11%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x15 = 1;
	uint64_t x16 = 6181258695LLU;
	int32_t t3 = 149;

    t3 = ((x13|x14)==(x15%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x18 = -1;
	static int64_t x19 = 5530916127829118LL;
	static int32_t t4 = 26993640;

    t4 = ((x17|x18)==(x19%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = INT32_MIN;
	uint8_t x22 = 37U;
	int16_t x23 = 1;
	uint32_t x24 = 184386713U;
	int32_t t5 = -2247;

    t5 = ((x21|x22)==(x23%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = -1;
	static uint64_t x27 = 9453568LLU;
	volatile int64_t x28 = -1427125375121823LL;
	int32_t t6 = -38945;

    t6 = ((x25|x26)==(x27%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 37267358;
	volatile int64_t x30 = -84LL;
	static volatile uint32_t x31 = 1293U;
	uint64_t x32 = UINT64_MAX;

    t7 = ((x29|x30)==(x31%x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 29U;
	static volatile int16_t x34 = INT16_MIN;
	volatile int32_t x35 = INT32_MIN;
	volatile int32_t x36 = -1;
	int32_t t8 = 1;

    t8 = ((x33|x34)==(x35%x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	uint32_t x38 = 245074821U;
	volatile int64_t x39 = INT64_MIN;
	volatile int32_t t9 = -32120599;

    t9 = ((x37|x38)==(x39%x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = INT32_MAX;
	uint8_t x43 = 10U;
	int32_t x44 = 462541398;

    t10 = ((x41|x42)==(x43%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = -1762225685602LL;
	int16_t x47 = INT16_MIN;
	int32_t t11 = 482483;

    t11 = ((x45|x46)==(x47%x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x49 = -1;
	volatile uint32_t x50 = 168U;
	static uint64_t x51 = 60239946021LLU;
	static int32_t x52 = INT32_MIN;
	int32_t t12 = 13693795;

    t12 = ((x49|x50)==(x51%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x53 = UINT8_MAX;
	int64_t x54 = -1LL;
	static int8_t x55 = 17;
	int32_t x56 = INT32_MIN;

    t13 = ((x53|x54)==(x55%x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = 61U;
	static uint32_t x59 = 23U;
	int16_t x60 = 2;
	int32_t t14 = -401;

    t14 = ((x57|x58)==(x59%x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x62 = 22U;
	int32_t x63 = INT32_MIN;
	volatile int32_t t15 = -171266607;

    t15 = ((x61|x62)==(x63%x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 19U;
	static int32_t x66 = -2265;
	static int64_t x67 = -154741532133LL;
	static int32_t t16 = 720804572;

    t16 = ((x65|x66)==(x67%x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	uint16_t x70 = 2267U;
	int64_t x71 = 468580LL;
	int8_t x72 = -3;
	volatile int32_t t17 = -2405;

    t17 = ((x69|x70)==(x71%x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = 3223;
	int32_t x75 = -1;
	static int8_t x76 = -1;

    t18 = ((x73|x74)==(x75%x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = 53553820LLU;
	uint32_t x78 = 1104233567U;
	int16_t x79 = -1;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t19 = 570;

    t19 = ((x77|x78)==(x79%x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 43U;
	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	int16_t x84 = 284;
	static int32_t t20 = -399;

    t20 = ((x81|x82)==(x83%x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = 1;
	static int32_t x87 = INT32_MIN;
	int32_t t21 = -29;

    t21 = ((x85|x86)==(x87%x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -4591242868671678166LL;
	uint64_t x90 = 1157643447503308356LLU;
	int32_t x92 = INT32_MAX;
	int32_t t22 = 899754;

    t22 = ((x89|x90)==(x91%x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x94 = INT16_MAX;
	int32_t x95 = -15;
	static int64_t x96 = INT64_MAX;
	static int32_t t23 = 69472830;

    t23 = ((x93|x94)==(x95%x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	volatile uint64_t x98 = 1541455LLU;
	static uint16_t x99 = 404U;
	volatile uint64_t x100 = UINT64_MAX;
	static int32_t t24 = 58;

    t24 = ((x97|x98)==(x99%x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x101 = 52958966LL;
	uint16_t x102 = UINT16_MAX;
	static int64_t x104 = INT64_MAX;
	int32_t t25 = -4430;

    t25 = ((x101|x102)==(x103%x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -8;
	uint64_t x106 = 30LLU;
	uint16_t x107 = UINT16_MAX;
	volatile int32_t t26 = 244;

    t26 = ((x105|x106)==(x107%x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = 20316636471LLU;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 1;

    t27 = ((x109|x110)==(x111%x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = INT32_MAX;
	static volatile uint8_t x115 = 6U;
	uint32_t x116 = UINT32_MAX;
	volatile int32_t t28 = 0;

    t28 = ((x113|x114)==(x115%x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = -15035;
	uint32_t x118 = 233U;
	int64_t x119 = -1LL;
	static int8_t x120 = 1;
	volatile int32_t t29 = -382979495;

    t29 = ((x117|x118)==(x119%x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	uint32_t x123 = UINT32_MAX;
	uint8_t x124 = 6U;
	volatile int32_t t30 = 382315;

    t30 = ((x121|x122)==(x123%x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = -1;
	static int64_t x126 = INT64_MIN;
	volatile int16_t x127 = INT16_MAX;
	uint16_t x128 = 30075U;
	int32_t t31 = 31181808;

    t31 = ((x125|x126)==(x127%x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x130 = 11797U;
	uint32_t x131 = 509222183U;
	volatile uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = -133751217;

    t32 = ((x129|x130)==(x131%x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x133 = 41U;
	int16_t x134 = INT16_MAX;
	uint16_t x135 = UINT16_MAX;
	volatile int16_t x136 = INT16_MAX;

    t33 = ((x133|x134)==(x135%x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -10;
	uint32_t x138 = 2U;
	static volatile int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 1;

    t34 = ((x137|x138)==(x139%x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -2113LL;
	int8_t x142 = INT8_MIN;
	int32_t x143 = 38156454;
	volatile int32_t t35 = 83297;

    t35 = ((x141|x142)==(x143%x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = 21;
	volatile uint8_t x146 = 48U;
	uint64_t x147 = 136830695398658976LLU;
	volatile int32_t x148 = INT32_MIN;
	static volatile int32_t t36 = -700737;

    t36 = ((x145|x146)==(x147%x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	volatile int8_t x150 = INT8_MIN;
	int64_t x151 = 23884393452581LL;
	static int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 2011;

    t37 = ((x149|x150)==(x151%x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -53;
	static volatile uint8_t x154 = UINT8_MAX;
	int32_t x155 = 3469;
	int8_t x156 = INT8_MIN;
	int32_t t38 = -3594;

    t38 = ((x153|x154)==(x155%x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x158 = 5984U;
	uint16_t x159 = UINT16_MAX;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 46863913;

    t39 = ((x157|x158)==(x159%x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x163 = 3LLU;
	static int32_t t40 = -3;

    t40 = ((x161|x162)==(x163%x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 157717736U;
	uint64_t x166 = 3059495384550LLU;
	static uint16_t x167 = UINT16_MAX;
	uint32_t x168 = 935531U;
	volatile int32_t t41 = -59073;

    t41 = ((x165|x166)==(x167%x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 3601LLU;
	static int32_t x170 = INT32_MIN;
	static uint32_t x171 = UINT32_MAX;
	static int64_t x172 = INT64_MIN;
	volatile int32_t t42 = 4364432;

    t42 = ((x169|x170)==(x171%x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -156LL;
	volatile int16_t x174 = -3;
	static uint64_t x175 = UINT64_MAX;
	volatile int64_t x176 = INT64_MIN;
	int32_t t43 = -4534;

    t43 = ((x173|x174)==(x175%x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	int32_t x178 = -1;
	uint8_t x179 = 27U;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 1446999;

    t44 = ((x177|x178)==(x179%x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x181 = INT64_MAX;
	static uint8_t x182 = 2U;
	uint16_t x183 = 2U;
	static volatile int16_t x184 = 12413;
	int32_t t45 = 14307;

    t45 = ((x181|x182)==(x183%x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	volatile int8_t x186 = -22;
	static uint16_t x187 = 18U;
	volatile int32_t x188 = 2291272;

    t46 = ((x185|x186)==(x187%x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x190 = UINT64_MAX;
	int64_t x191 = INT64_MIN;
	static int64_t x192 = INT64_MAX;
	volatile int32_t t47 = -31;

    t47 = ((x189|x190)==(x191%x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = 10;
	int32_t x194 = -1;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MAX;

    t48 = ((x193|x194)==(x195%x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MAX;
	volatile int64_t x198 = INT64_MAX;
	volatile int8_t x199 = INT8_MIN;
	uint16_t x200 = 342U;
	int32_t t49 = 20;

    t49 = ((x197|x198)==(x199%x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = INT64_MIN;
	uint32_t x203 = UINT32_MAX;
	static int32_t t50 = -530838434;

    t50 = ((x201|x202)==(x203%x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = -1;
	int64_t x206 = 4168691281616593125LL;
	static volatile int32_t t51 = -112;

    t51 = ((x205|x206)==(x207%x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 798576555418126LLU;
	int8_t x212 = 10;
	volatile int32_t t52 = -18047;

    t52 = ((x209|x210)==(x211%x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	volatile int16_t x215 = -1;
	int64_t x216 = -2022519715145166LL;
	volatile int32_t t53 = 68892;

    t53 = ((x213|x214)==(x215%x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -15LL;

    t54 = ((x217|x218)==(x219%x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = -861;
	volatile int16_t x222 = 95;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t55 = 38;

    t55 = ((x221|x222)==(x223%x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -54;
	int16_t x226 = -2;
	int64_t x227 = INT64_MIN;
	volatile int64_t x228 = INT64_MIN;
	volatile int32_t t56 = 1811950;

    t56 = ((x225|x226)==(x227%x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x229 = -6954;
	uint16_t x231 = 0U;
	int64_t x232 = -138844128851763012LL;
	int32_t t57 = -5199014;

    t57 = ((x229|x230)==(x231%x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x234 = 3767299273588004486LL;
	static uint16_t x235 = 5U;
	int8_t x236 = 2;
	int32_t t58 = 28291;

    t58 = ((x233|x234)==(x235%x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = -1LL;
	int16_t x238 = 868;
	static int32_t t59 = 16375;

    t59 = ((x237|x238)==(x239%x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x242 = 0LL;
	int32_t x243 = -2533688;
	static volatile int8_t x244 = INT8_MIN;
	int32_t t60 = 120725018;

    t60 = ((x241|x242)==(x243%x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = 20986LL;
	volatile uint64_t x246 = 24379944475LLU;
	int64_t x247 = 1LL;
	int32_t t61 = -503;

    t61 = ((x245|x246)==(x247%x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MAX;
	int16_t x250 = INT16_MIN;
	volatile uint16_t x251 = 380U;
	volatile int16_t x252 = INT16_MIN;
	static volatile int32_t t62 = -1;

    t62 = ((x249|x250)==(x251%x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = 15291150572809680LL;
	int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	int32_t t63 = -5579;

    t63 = ((x253|x254)==(x255%x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x258 = 25U;
	int8_t x259 = INT8_MIN;
	volatile int64_t x260 = INT64_MIN;
	volatile int32_t t64 = 893286;

    t64 = ((x257|x258)==(x259%x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -7807002;
	int32_t x262 = INT32_MIN;
	volatile int32_t x263 = INT32_MIN;
	uint16_t x264 = 9U;
	int32_t t65 = -236943;

    t65 = ((x261|x262)==(x263%x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MAX;
	static int32_t x267 = -1;
	volatile int64_t x268 = INT64_MIN;
	volatile int32_t t66 = -12781024;

    t66 = ((x265|x266)==(x267%x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x269 = 6588U;
	static int64_t x270 = INT64_MIN;
	int64_t x271 = -1LL;
	static volatile int8_t x272 = INT8_MIN;
	volatile int32_t t67 = 3208;

    t67 = ((x269|x270)==(x271%x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 15U;
	uint16_t x274 = UINT16_MAX;
	int16_t x275 = INT16_MIN;
	int16_t x276 = -90;
	int32_t t68 = -503;

    t68 = ((x273|x274)==(x275%x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x278 = 685U;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = -2451;
	volatile int32_t t69 = 8177447;

    t69 = ((x277|x278)==(x279%x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x285 = 3;
	static uint8_t x286 = 11U;
	volatile int32_t x288 = -1;
	volatile int32_t t70 = 12003942;

    t70 = ((x285|x286)==(x287%x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x289 = INT32_MIN;
	int8_t x290 = INT8_MAX;
	volatile uint32_t x291 = 294738U;
	uint64_t x292 = 4LLU;
	int32_t t71 = 576;

    t71 = ((x289|x290)==(x291%x292));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x293 = -47;
	int8_t x294 = INT8_MAX;
	volatile int8_t x295 = -26;
	int16_t x296 = INT16_MIN;
	int32_t t72 = -332958398;

    t72 = ((x293|x294)==(x295%x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x297 = 67691373580LL;
	uint8_t x299 = 13U;
	static int64_t x300 = -271383481922870590LL;
	int32_t t73 = 51;

    t73 = ((x297|x298)==(x299%x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x302 = INT32_MIN;
	int32_t x303 = INT32_MIN;
	int32_t x304 = 3936;
	volatile int32_t t74 = 2011034;

    t74 = ((x301|x302)==(x303%x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = 156139807LL;
	int8_t x306 = -1;
	int32_t x307 = INT32_MIN;

    t75 = ((x305|x306)==(x307%x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x309 = 22936618346951LL;
	volatile int64_t x310 = INT64_MIN;
	static uint64_t x311 = 24992007LLU;
	uint16_t x312 = UINT16_MAX;
	int32_t t76 = 21493;

    t76 = ((x309|x310)==(x311%x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x314 = -11;
	uint32_t x315 = UINT32_MAX;
	uint64_t x316 = 215811745LLU;

    t77 = ((x313|x314)==(x315%x316));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x318 = INT64_MAX;
	uint32_t x319 = 38908U;
	uint64_t x320 = 2346448208110310LLU;
	int32_t t78 = -110;

    t78 = ((x317|x318)==(x319%x320));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MAX;
	static int32_t x323 = -2;
	volatile int16_t x324 = INT16_MAX;
	volatile int32_t t79 = 429063;

    t79 = ((x321|x322)==(x323%x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x325 = UINT8_MAX;
	uint16_t x326 = 0U;
	int64_t x327 = -1LL;
	uint8_t x328 = 40U;
	volatile int32_t t80 = -296993;

    t80 = ((x325|x326)==(x327%x328));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	static int8_t x331 = INT8_MAX;
	int16_t x332 = INT16_MIN;

    t81 = ((x329|x330)==(x331%x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x333 = 4497051;
	uint32_t x334 = 2978U;
	volatile int64_t x335 = INT64_MAX;
	static uint16_t x336 = 197U;
	int32_t t82 = -862770;

    t82 = ((x333|x334)==(x335%x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x337 = INT8_MAX;
	uint8_t x338 = 103U;
	volatile int8_t x339 = INT8_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t83 = -435439060;

    t83 = ((x337|x338)==(x339%x340));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x341 = -1;
	static volatile int32_t x342 = 5596;
	int64_t x344 = INT64_MIN;
	volatile int32_t t84 = -18118;

    t84 = ((x341|x342)==(x343%x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x346 = INT64_MAX;
	volatile int32_t x347 = INT32_MAX;
	int64_t x348 = INT64_MAX;

    t85 = ((x345|x346)==(x347%x348));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x350 = UINT64_MAX;
	uint32_t x351 = UINT32_MAX;
	int32_t t86 = 361;

    t86 = ((x349|x350)==(x351%x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x354 = UINT64_MAX;
	int16_t x355 = -1;
	volatile int64_t x356 = INT64_MAX;
	int32_t t87 = 134971;

    t87 = ((x353|x354)==(x355%x356));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x357 = INT8_MIN;
	int64_t x358 = 6613796432LL;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = -1;
	int32_t t88 = 162;

    t88 = ((x357|x358)==(x359%x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = 16117601LL;
	int16_t x362 = 114;
	int32_t x363 = 12503598;
	uint8_t x364 = UINT8_MAX;
	int32_t t89 = 326591;

    t89 = ((x361|x362)==(x363%x364));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x365 = -2;
	int64_t x366 = INT64_MIN;
	volatile int8_t x367 = -1;
	int64_t x368 = -1443405LL;

    t90 = ((x365|x366)==(x367%x368));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x373 = -1;
	int64_t x374 = -54267027183LL;
	uint8_t x375 = UINT8_MAX;
	int64_t x376 = INT64_MIN;

    t91 = ((x373|x374)==(x375%x376));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x377 = 1;
	uint64_t x379 = 46555539350731LLU;
	static uint32_t x380 = UINT32_MAX;
	static int32_t t92 = 103028;

    t92 = ((x377|x378)==(x379%x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x381 = INT64_MIN;
	int8_t x382 = INT8_MAX;
	volatile uint64_t x383 = 2097399141443LLU;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t93 = -1;

    t93 = ((x381|x382)==(x383%x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x385 = UINT32_MAX;
	static uint8_t x386 = 39U;
	int64_t x387 = -1003LL;
	volatile int32_t x388 = INT32_MAX;

    t94 = ((x385|x386)==(x387%x388));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = -1791857570498LL;
	int32_t x391 = INT32_MIN;
	int32_t x392 = 162653053;
	static int32_t t95 = -2;

    t95 = ((x389|x390)==(x391%x392));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x393 = 5U;
	int32_t x394 = INT32_MIN;
	uint64_t x396 = 14760361124LLU;
	int32_t t96 = 13297;

    t96 = ((x393|x394)==(x395%x396));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x398 = INT64_MIN;
	int8_t x399 = 3;
	static uint32_t x400 = 64676532U;
	int32_t t97 = -77407358;

    t97 = ((x397|x398)==(x399%x400));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x401 = INT32_MAX;
	int64_t x402 = INT64_MIN;
	int32_t x403 = -150623;
	volatile int16_t x404 = INT16_MAX;
	volatile int32_t t98 = -6889;

    t98 = ((x401|x402)==(x403%x404));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x406 = INT64_MAX;
	int16_t x407 = INT16_MIN;
	uint64_t x408 = 102538699991163LLU;
	int32_t t99 = -123260;

    t99 = ((x405|x406)==(x407%x408));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x409 = INT32_MAX;
	static uint64_t x410 = 3829914388939539486LLU;
	volatile uint8_t x411 = UINT8_MAX;
	int8_t x412 = INT8_MIN;
	volatile int32_t t100 = -475841;

    t100 = ((x409|x410)==(x411%x412));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x413 = INT64_MIN;
	int64_t x414 = -1LL;
	volatile int64_t x416 = INT64_MIN;
	int32_t t101 = -41110;

    t101 = ((x413|x414)==(x415%x416));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x419 = -1;
	uint64_t x420 = UINT64_MAX;

    t102 = ((x417|x418)==(x419%x420));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x421 = -244LL;
	volatile uint64_t x422 = 613LLU;
	uint64_t x423 = UINT64_MAX;
	uint64_t x424 = 1976277830340635LLU;
	volatile int32_t t103 = -243359;

    t103 = ((x421|x422)==(x423%x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x425 = INT8_MIN;
	int16_t x426 = -1;
	static int32_t x427 = INT32_MAX;
	int32_t t104 = 204744726;

    t104 = ((x425|x426)==(x427%x428));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x430 = 13U;
	int8_t x431 = -1;
	int32_t t105 = -7510;

    t105 = ((x429|x430)==(x431%x432));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x433 = 1LL;
	int64_t x434 = 5287422105LL;
	int32_t t106 = -28;

    t106 = ((x433|x434)==(x435%x436));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x437 = 0U;
	int32_t x438 = -1;
	uint8_t x439 = 0U;
	int32_t x440 = -12534478;
	int32_t t107 = 45620;

    t107 = ((x437|x438)==(x439%x440));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x441 = INT32_MIN;
	int64_t x443 = INT64_MAX;
	int64_t x444 = -1332261820728LL;
	volatile int32_t t108 = 1;

    t108 = ((x441|x442)==(x443%x444));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x445 = UINT32_MAX;
	volatile uint8_t x446 = 1U;
	int16_t x448 = -1;

    t109 = ((x445|x446)==(x447%x448));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x449 = 7U;
	static uint16_t x450 = UINT16_MAX;
	static int32_t x452 = INT32_MIN;
	volatile int32_t t110 = 1;

    t110 = ((x449|x450)==(x451%x452));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x453 = INT32_MIN;
	int64_t x454 = INT64_MIN;
	volatile uint64_t x455 = 172355512347LLU;
	uint32_t x456 = 272U;
	int32_t t111 = 1;

    t111 = ((x453|x454)==(x455%x456));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x457 = UINT32_MAX;
	int32_t x458 = INT32_MIN;
	volatile int32_t t112 = -14;

    t112 = ((x457|x458)==(x459%x460));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x461 = 0U;
	static uint16_t x462 = 7229U;
	uint16_t x464 = 11U;
	volatile int32_t t113 = -4824223;

    t113 = ((x461|x462)==(x463%x464));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x465 = INT8_MIN;
	int16_t x466 = INT16_MAX;
	int64_t x467 = INT64_MAX;
	uint32_t x468 = 255666292U;

    t114 = ((x465|x466)==(x467%x468));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x469 = INT16_MIN;
	int8_t x471 = -1;
	int16_t x472 = -1;
	int32_t t115 = -7;

    t115 = ((x469|x470)==(x471%x472));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x473 = -86;
	int64_t x474 = 33411084746277892LL;
	static uint8_t x475 = 1U;
	uint64_t x476 = 21516LLU;
	static int32_t t116 = -2710;

    t116 = ((x473|x474)==(x475%x476));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x477 = -1;
	static volatile int32_t x478 = INT32_MIN;
	static uint8_t x479 = 0U;
	uint32_t x480 = UINT32_MAX;
	int32_t t117 = -6;

    t117 = ((x477|x478)==(x479%x480));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x481 = 1181;
	uint16_t x482 = 923U;
	int64_t x483 = -1LL;
	int16_t x484 = INT16_MIN;
	volatile int32_t t118 = -2;

    t118 = ((x481|x482)==(x483%x484));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x487 = INT16_MAX;
	int16_t x488 = INT16_MIN;

    t119 = ((x485|x486)==(x487%x488));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x489 = 1;
	volatile int16_t x490 = INT16_MIN;
	volatile int64_t x491 = -2136143LL;
	static uint16_t x492 = UINT16_MAX;
	int32_t t120 = -192564;

    t120 = ((x489|x490)==(x491%x492));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x494 = 208284390LLU;
	static int8_t x495 = -3;
	static uint8_t x496 = 58U;
	int32_t t121 = -5;

    t121 = ((x493|x494)==(x495%x496));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x498 = INT32_MAX;
	int32_t x499 = -1199;
	int32_t x500 = -1;

    t122 = ((x497|x498)==(x499%x500));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x502 = UINT32_MAX;
	int64_t x503 = INT64_MAX;
	int16_t x504 = 493;

    t123 = ((x501|x502)==(x503%x504));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x505 = 1944203869187441LLU;
	volatile uint8_t x506 = 1U;
	int8_t x507 = INT8_MIN;
	volatile int32_t x508 = INT32_MIN;
	int32_t t124 = -65889641;

    t124 = ((x505|x506)==(x507%x508));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x509 = 1;
	static int8_t x510 = 7;
	int16_t x511 = 40;
	int8_t x512 = INT8_MIN;
	int32_t t125 = 372;

    t125 = ((x509|x510)==(x511%x512));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x515 = INT64_MAX;
	static int32_t x516 = INT32_MIN;
	volatile int32_t t126 = -2390629;

    t126 = ((x513|x514)==(x515%x516));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x517 = -33920350249904822LL;
	uint16_t x518 = 3U;
	int16_t x519 = -1;
	uint32_t x520 = 9481042U;
	volatile int32_t t127 = -1;

    t127 = ((x517|x518)==(x519%x520));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x521 = 0U;
	volatile int32_t t128 = 2052473;

    t128 = ((x521|x522)==(x523%x524));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x525 = UINT8_MAX;
	static volatile int16_t x526 = INT16_MIN;
	static volatile int8_t x527 = INT8_MAX;
	volatile int32_t t129 = -983288377;

    t129 = ((x525|x526)==(x527%x528));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x530 = -1;
	volatile uint64_t x531 = 7215854210LLU;
	uint8_t x532 = 27U;
	static int32_t t130 = -40;

    t130 = ((x529|x530)==(x531%x532));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x533 = INT32_MIN;
	uint8_t x534 = 24U;
	volatile uint8_t x535 = UINT8_MAX;
	static uint8_t x536 = 19U;

    t131 = ((x533|x534)==(x535%x536));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x538 = UINT8_MAX;
	int8_t x539 = -5;
	int8_t x540 = -1;
	int32_t t132 = -1507;

    t132 = ((x537|x538)==(x539%x540));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x542 = 2U;
	uint32_t x543 = UINT32_MAX;
	int64_t x544 = INT64_MAX;
	int32_t t133 = 179897;

    t133 = ((x541|x542)==(x543%x544));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x545 = UINT16_MAX;
	int8_t x546 = INT8_MAX;
	static uint64_t x547 = 106LLU;
	int16_t x548 = INT16_MIN;

    t134 = ((x545|x546)==(x547%x548));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x549 = 26669266U;
	int32_t x550 = INT32_MIN;
	int16_t x551 = INT16_MAX;
	static uint32_t x552 = UINT32_MAX;
	int32_t t135 = -12700;

    t135 = ((x549|x550)==(x551%x552));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x553 = 982386474471336219LLU;
	static int16_t x554 = INT16_MIN;
	int16_t x555 = INT16_MIN;
	volatile int32_t t136 = 18455;

    t136 = ((x553|x554)==(x555%x556));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x557 = UINT16_MAX;
	int8_t x559 = INT8_MAX;
	int32_t x560 = -1;
	int32_t t137 = -1;

    t137 = ((x557|x558)==(x559%x560));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x561 = UINT64_MAX;
	static int8_t x562 = -1;
	static int64_t x564 = INT64_MAX;
	volatile int32_t t138 = -170;

    t138 = ((x561|x562)==(x563%x564));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x566 = INT8_MAX;
	int8_t x567 = INT8_MIN;
	uint16_t x568 = 560U;

    t139 = ((x565|x566)==(x567%x568));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x569 = INT64_MIN;
	uint64_t x570 = 79527474413708LLU;
	volatile uint64_t x571 = 4873009287955LLU;
	volatile uint16_t x572 = 63U;
	int32_t t140 = -214089036;

    t140 = ((x569|x570)==(x571%x572));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x573 = 928598973;
	uint32_t x574 = 2U;
	static volatile int8_t x575 = 0;
	uint32_t x576 = 767687448U;
	int32_t t141 = -106;

    t141 = ((x573|x574)==(x575%x576));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x577 = -41869274;
	int16_t x578 = INT16_MIN;
	int16_t x579 = INT16_MIN;
	int8_t x580 = -1;
	static volatile int32_t t142 = -572;

    t142 = ((x577|x578)==(x579%x580));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x581 = 0U;
	volatile int8_t x582 = INT8_MIN;
	volatile int32_t x583 = INT32_MIN;
	static uint32_t x584 = UINT32_MAX;
	volatile int32_t t143 = 64444726;

    t143 = ((x581|x582)==(x583%x584));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x587 = 1161U;
	static uint8_t x588 = 3U;
	int32_t t144 = -6723236;

    t144 = ((x585|x586)==(x587%x588));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x589 = 10U;
	uint8_t x590 = 10U;
	int64_t x591 = INT64_MIN;
	uint64_t x592 = 28780LLU;
	volatile int32_t t145 = 0;

    t145 = ((x589|x590)==(x591%x592));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x594 = -1LL;
	int8_t x595 = INT8_MIN;
	volatile int32_t t146 = 98;

    t146 = ((x593|x594)==(x595%x596));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x597 = UINT8_MAX;
	int16_t x598 = INT16_MIN;
	int8_t x599 = -6;
	static int32_t t147 = 49169102;

    t147 = ((x597|x598)==(x599%x600));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x601 = INT64_MIN;
	int8_t x603 = INT8_MIN;
	int32_t t148 = -1;

    t148 = ((x601|x602)==(x603%x604));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x605 = INT64_MAX;
	volatile int16_t x607 = INT16_MAX;
	uint8_t x608 = 4U;
	volatile int32_t t149 = -94293631;

    t149 = ((x605|x606)==(x607%x608));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x609 = INT16_MIN;
	int64_t x611 = INT64_MAX;
	int64_t x612 = INT64_MAX;
	volatile int32_t t150 = -35635;

    t150 = ((x609|x610)==(x611%x612));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x614 = INT8_MIN;
	volatile uint64_t x616 = UINT64_MAX;
	int32_t t151 = 13562451;

    t151 = ((x613|x614)==(x615%x616));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x617 = 199745928439884LL;
	int16_t x618 = -248;
	uint8_t x619 = 29U;
	static int16_t x620 = -1;
	static int32_t t152 = -2;

    t152 = ((x617|x618)==(x619%x620));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x621 = 890081786LLU;
	volatile int64_t x623 = INT64_MIN;
	uint8_t x624 = 14U;
	volatile int32_t t153 = -391685027;

    t153 = ((x621|x622)==(x623%x624));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x625 = INT8_MAX;
	volatile int16_t x626 = INT16_MIN;
	static int64_t x627 = 41499014578496856LL;

    t154 = ((x625|x626)==(x627%x628));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x629 = INT64_MAX;
	int64_t x630 = INT64_MIN;
	int64_t x631 = 40183LL;
	int8_t x632 = -1;
	static volatile int32_t t155 = 44;

    t155 = ((x629|x630)==(x631%x632));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x633 = -875;
	uint64_t x634 = 7LLU;
	int64_t x635 = 11398LL;
	static uint32_t x636 = UINT32_MAX;
	volatile int32_t t156 = -525;

    t156 = ((x633|x634)==(x635%x636));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x637 = INT32_MAX;
	static int16_t x638 = -1;
	uint16_t x639 = 5U;
	static int32_t x640 = 3291136;
	volatile int32_t t157 = 6388;

    t157 = ((x637|x638)==(x639%x640));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x641 = INT8_MIN;
	int8_t x643 = -14;
	static uint64_t x644 = 233841377654077LLU;
	int32_t t158 = 47533468;

    t158 = ((x641|x642)==(x643%x644));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x645 = UINT16_MAX;
	static int32_t x646 = INT32_MIN;
	static int32_t x647 = -272793224;
	volatile uint32_t x648 = 23U;
	int32_t t159 = -371;

    t159 = ((x645|x646)==(x647%x648));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x650 = 1617LL;
	int32_t t160 = 28985044;

    t160 = ((x649|x650)==(x651%x652));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x654 = INT16_MIN;
	static uint8_t x655 = UINT8_MAX;
	static int16_t x656 = INT16_MIN;
	volatile int32_t t161 = 2;

    t161 = ((x653|x654)==(x655%x656));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x657 = INT16_MIN;
	static uint32_t x658 = UINT32_MAX;
	static volatile int16_t x659 = INT16_MIN;
	int8_t x660 = INT8_MIN;
	volatile int32_t t162 = 237;

    t162 = ((x657|x658)==(x659%x660));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x663 = INT16_MIN;
	static volatile int32_t t163 = 482843456;

    t163 = ((x661|x662)==(x663%x664));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x665 = 1;
	uint32_t x666 = 1381224581U;
	int8_t x667 = INT8_MIN;

    t164 = ((x665|x666)==(x667%x668));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x669 = 398;
	static int8_t x670 = INT8_MIN;
	int8_t x671 = INT8_MIN;
	int8_t x672 = INT8_MAX;
	static volatile int32_t t165 = -1;

    t165 = ((x669|x670)==(x671%x672));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x674 = INT64_MIN;
	int8_t x676 = INT8_MIN;
	static volatile int32_t t166 = -2;

    t166 = ((x673|x674)==(x675%x676));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x681 = UINT8_MAX;
	static int64_t x682 = INT64_MAX;
	static int64_t x684 = -1LL;

    t167 = ((x681|x682)==(x683%x684));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x685 = INT32_MIN;
	static uint64_t x686 = UINT64_MAX;
	uint32_t x687 = 1U;
	volatile int8_t x688 = INT8_MIN;
	volatile int32_t t168 = 284509;

    t168 = ((x685|x686)==(x687%x688));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x693 = UINT32_MAX;
	volatile uint32_t x694 = 206U;
	int32_t x695 = 57107;
	int64_t x696 = -63686LL;
	int32_t t169 = -97339899;

    t169 = ((x693|x694)==(x695%x696));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x697 = UINT8_MAX;
	volatile uint8_t x698 = 25U;
	static volatile int8_t x699 = INT8_MIN;
	volatile uint8_t x700 = UINT8_MAX;
	volatile int32_t t170 = -522713;

    t170 = ((x697|x698)==(x699%x700));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x703 = 3;
	int64_t x704 = -1LL;
	int32_t t171 = -255910;

    t171 = ((x701|x702)==(x703%x704));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x705 = INT64_MAX;
	int32_t x708 = -128684;
	volatile int32_t t172 = -725;

    t172 = ((x705|x706)==(x707%x708));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x710 = 275372990123171LLU;
	uint8_t x712 = UINT8_MAX;
	volatile int32_t t173 = 189;

    t173 = ((x709|x710)==(x711%x712));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x713 = 26075U;
	uint8_t x714 = UINT8_MAX;
	uint8_t x715 = 41U;
	volatile int8_t x716 = 15;

    t174 = ((x713|x714)==(x715%x716));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x718 = UINT8_MAX;
	int64_t x719 = -45101729798332LL;
	volatile int32_t t175 = -10647560;

    t175 = ((x717|x718)==(x719%x720));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x721 = 11027930LL;
	volatile uint16_t x723 = 12U;
	int32_t x724 = -1;
	int32_t t176 = -148;

    t176 = ((x721|x722)==(x723%x724));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x725 = UINT16_MAX;
	uint8_t x726 = UINT8_MAX;
	int16_t x727 = INT16_MIN;
	int32_t t177 = 27736;

    t177 = ((x725|x726)==(x727%x728));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x729 = INT16_MAX;
	volatile int8_t x730 = 1;
	int64_t x731 = INT64_MIN;
	volatile int16_t x732 = -1;

    t178 = ((x729|x730)==(x731%x732));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x733 = INT16_MIN;
	int32_t x734 = INT32_MIN;
	uint32_t x735 = 856324376U;
	volatile int64_t x736 = -64244978397LL;
	int32_t t179 = -58;

    t179 = ((x733|x734)==(x735%x736));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x737 = UINT64_MAX;
	uint8_t x739 = 27U;
	uint8_t x740 = UINT8_MAX;

    t180 = ((x737|x738)==(x739%x740));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x741 = -27;
	uint16_t x744 = 5269U;

    t181 = ((x741|x742)==(x743%x744));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x746 = 4050U;
	volatile int16_t x747 = 1;
	int16_t x748 = -1;

    t182 = ((x745|x746)==(x747%x748));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x749 = INT8_MIN;
	int64_t x750 = -440566204LL;
	volatile int8_t x752 = -1;
	volatile int32_t t183 = -1;

    t183 = ((x749|x750)==(x751%x752));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x753 = INT16_MAX;
	int16_t x756 = INT16_MIN;
	volatile int32_t t184 = 964;

    t184 = ((x753|x754)==(x755%x756));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x757 = INT32_MIN;
	volatile int32_t x758 = INT32_MIN;
	int64_t x760 = INT64_MIN;

    t185 = ((x757|x758)==(x759%x760));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x761 = 21894LL;
	uint64_t x762 = UINT64_MAX;
	int32_t x763 = INT32_MIN;
	volatile uint8_t x764 = 1U;
	volatile int32_t t186 = -28;

    t186 = ((x761|x762)==(x763%x764));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x765 = -109;
	uint32_t x766 = 42723975U;
	int32_t t187 = 98057;

    t187 = ((x765|x766)==(x767%x768));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x769 = -1;
	volatile uint16_t x771 = 3U;
	int32_t t188 = 886736929;

    t188 = ((x769|x770)==(x771%x772));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x773 = UINT16_MAX;
	int32_t x774 = INT32_MIN;
	static volatile uint16_t x775 = 13899U;
	int8_t x776 = -1;
	volatile int32_t t189 = -28767747;

    t189 = ((x773|x774)==(x775%x776));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x778 = UINT8_MAX;
	int32_t x779 = -40578;
	static uint8_t x780 = 103U;
	int32_t t190 = 2741548;

    t190 = ((x777|x778)==(x779%x780));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x781 = UINT16_MAX;
	int8_t x782 = -1;
	volatile int64_t x783 = INT64_MIN;
	int16_t x784 = INT16_MIN;
	volatile int32_t t191 = -393444;

    t191 = ((x781|x782)==(x783%x784));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x785 = UINT32_MAX;
	volatile int8_t x788 = 37;
	int32_t t192 = -48131;

    t192 = ((x785|x786)==(x787%x788));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x789 = UINT8_MAX;
	int16_t x790 = 3260;
	static int64_t x791 = INT64_MAX;
	static volatile int16_t x792 = -160;
	int32_t t193 = 104322;

    t193 = ((x789|x790)==(x791%x792));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x793 = INT32_MIN;
	int8_t x794 = -10;
	int8_t x795 = -1;
	static volatile int8_t x796 = INT8_MIN;
	volatile int32_t t194 = -5786814;

    t194 = ((x793|x794)==(x795%x796));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x797 = INT32_MAX;
	int64_t x798 = -3740601788147054290LL;
	int8_t x799 = 10;
	int64_t x800 = INT64_MIN;
	volatile int32_t t195 = 99590628;

    t195 = ((x797|x798)==(x799%x800));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x801 = -10228;
	volatile uint16_t x802 = UINT16_MAX;
	static int64_t x803 = 9843533787LL;
	int32_t x804 = -1;
	volatile int32_t t196 = -13;

    t196 = ((x801|x802)==(x803%x804));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x805 = UINT8_MAX;
	volatile uint64_t x806 = UINT64_MAX;
	volatile int16_t x807 = -84;
	volatile int64_t x808 = -1045948LL;

    t197 = ((x805|x806)==(x807%x808));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x809 = 840962284959869LL;
	int32_t x810 = INT32_MIN;
	int32_t x811 = 43947;
	uint32_t x812 = 3036576U;
	int32_t t198 = -21;

    t198 = ((x809|x810)==(x811%x812));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x814 = INT16_MIN;
	int8_t x815 = INT8_MIN;
	int16_t x816 = -1;
	int32_t t199 = -1143;

    t199 = ((x813|x814)==(x815%x816));

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

