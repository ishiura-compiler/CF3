
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

int64_t x8 = 123095647322LL;
int8_t x16 = INT8_MIN;
int16_t x17 = -391;
int16_t x18 = INT16_MIN;
uint32_t x20 = UINT32_MAX;
static int64_t t4 = 11LL;
static int8_t x23 = -1;
volatile uint8_t x26 = UINT8_MAX;
static uint8_t x28 = UINT8_MAX;
int16_t x29 = -1;
int32_t x31 = -1;
int8_t x32 = INT8_MIN;
int32_t t7 = 143630;
static int32_t x44 = -1;
uint64_t t11 = 3224528102983594LLU;
volatile int16_t x59 = INT16_MAX;
static int64_t x62 = -493373227064LL;
int16_t x64 = 0;
int8_t x66 = INT8_MIN;
volatile uint64_t t16 = UINT64_MAX;
int8_t x71 = INT8_MIN;
int64_t x73 = INT64_MAX;
int16_t x86 = INT16_MIN;
int8_t x88 = INT8_MAX;
int32_t x104 = 93379;
int16_t x105 = INT16_MAX;
int8_t x107 = -1;
static int32_t t27 = 68598379;
uint64_t x115 = UINT64_MAX;
volatile uint64_t x116 = 3380212595LLU;
static uint8_t x133 = 59U;
uint32_t x137 = 83876729U;
int16_t x138 = 40;
int64_t t34 = 10082090741589LL;
uint16_t x153 = 2U;
uint8_t x157 = UINT8_MAX;
volatile int64_t x175 = INT64_MAX;
static uint32_t x179 = 8312U;
int64_t x180 = INT64_MAX;
int16_t x184 = -1;
uint16_t x185 = UINT16_MAX;
uint8_t x186 = UINT8_MAX;
volatile int64_t t45 = -8023047207LL;
uint8_t x189 = 0U;
int64_t x210 = -1683966673320339417LL;
uint8_t x218 = 1U;
static int8_t x219 = INT8_MAX;
volatile int16_t x226 = INT16_MIN;
uint8_t x229 = 10U;
uint64_t x231 = 3394760604292711059LLU;
uint64_t x241 = UINT64_MAX;
int64_t x243 = INT64_MIN;
int32_t x252 = INT32_MIN;
volatile int16_t x257 = INT16_MIN;
static volatile int16_t x260 = 123;
int64_t x262 = INT64_MAX;
int32_t t65 = 473673;
int32_t t66 = 497;
int16_t x279 = 7433;
static volatile uint32_t x282 = 181414192U;
int32_t x283 = INT32_MIN;
uint64_t x295 = 6120092935771311257LLU;
static uint64_t t72 = 82162076487529458LLU;
volatile uint32_t x302 = 15U;
volatile uint32_t t74 = 874745U;
volatile int32_t x305 = INT32_MIN;
uint8_t x311 = 2U;
uint32_t x318 = 3U;
static volatile int64_t t77 = -3LL;
int64_t x325 = INT64_MIN;
uint16_t x326 = UINT16_MAX;
volatile int32_t x328 = INT32_MAX;
static int64_t t79 = 56830898713364348LL;
int8_t x334 = -1;
int64_t x336 = -1LL;
volatile int64_t t81 = 493LL;
static volatile uint16_t x340 = 2609U;
volatile int64_t t84 = -349042107599297461LL;
static volatile int16_t x356 = INT16_MIN;
int64_t x358 = -1LL;
static volatile int8_t x364 = INT8_MAX;
int16_t x370 = INT16_MIN;
int32_t x374 = INT32_MAX;
int16_t x387 = INT16_MIN;
volatile int32_t t94 = 8;
int32_t x395 = INT32_MAX;
int8_t x399 = INT8_MIN;
int8_t x404 = -1;
static volatile int32_t t98 = -14957;
int64_t t99 = INT64_MAX;
int64_t x414 = INT64_MIN;
int16_t x420 = -1;
static uint64_t x430 = UINT64_MAX;
int32_t x432 = INT32_MIN;
volatile uint64_t t105 = 22LLU;
volatile uint64_t x438 = 2176865083433906230LLU;
uint32_t x444 = 244699565U;
volatile int32_t x454 = INT32_MIN;
int64_t x458 = INT64_MIN;
uint32_t x463 = UINT32_MAX;
int64_t t112 = 768829812763204976LL;
static int32_t x477 = -649939;
static volatile uint64_t x479 = UINT64_MAX;
volatile uint64_t t116 = 3862298LLU;
uint16_t x486 = 7549U;
uint8_t x492 = UINT8_MAX;
uint64_t t119 = 7197997LLU;
static int16_t x496 = -1;
static volatile uint32_t t120 = UINT32_MAX;
static uint8_t x498 = 46U;
int8_t x501 = -1;
int8_t x505 = 1;
volatile int64_t t125 = -4222386584533669065LL;
uint8_t x517 = UINT8_MAX;
volatile int16_t x522 = -232;
volatile uint32_t t127 = 3273U;
static int16_t x529 = -126;
int64_t t129 = 599552264588435104LL;
uint8_t x537 = 26U;
uint64_t x540 = 1537LLU;
volatile int32_t x546 = -1;
int32_t x548 = INT32_MIN;
int32_t x552 = INT32_MAX;
int8_t x555 = -1;
volatile int32_t t136 = -124369;
volatile uint8_t x568 = UINT8_MAX;
static volatile int32_t x570 = -769;
static volatile int8_t x572 = INT8_MIN;
static uint8_t x578 = UINT8_MAX;
uint32_t x580 = UINT32_MAX;
int64_t x581 = -24837811908233924LL;
int64_t x582 = -1LL;
static int64_t x585 = INT64_MIN;
int64_t x588 = -1LL;
static int64_t x593 = -1LL;
int16_t x600 = -1;
volatile int32_t x605 = -1;
volatile int16_t x609 = INT16_MIN;
static int32_t x619 = -1;
uint64_t t149 = 1072109LLU;
static int8_t x621 = 0;
static int32_t x622 = -1;
static int16_t x623 = INT16_MIN;
volatile int64_t t150 = 62LL;
int64_t x627 = -1LL;
uint64_t x628 = 692795771126LLU;
int64_t x631 = INT64_MIN;
volatile int64_t t152 = 61163013187939393LL;
static int16_t x638 = INT16_MIN;
int32_t x654 = INT32_MIN;
int32_t t159 = -4078;
int8_t x664 = INT8_MIN;
int8_t x666 = -1;
volatile int8_t x668 = 1;
int32_t x670 = INT32_MIN;
volatile int64_t x677 = -1LL;
volatile int64_t x684 = -74274321969874LL;
int8_t x691 = INT8_MIN;
static int32_t t166 = 1012831;
static volatile int64_t x693 = INT64_MIN;
int64_t t167 = -14556894920514LL;
int16_t x698 = -1;
int32_t x701 = INT32_MIN;
uint64_t x705 = 999203597382860LLU;
int8_t x708 = INT8_MAX;
uint64_t x710 = 838LLU;
int32_t x715 = INT32_MAX;
int32_t x716 = INT32_MIN;
uint16_t x727 = 30U;
int64_t x734 = INT64_MIN;
int8_t x735 = -33;
int64_t x740 = INT64_MIN;
static volatile uint32_t x741 = 150372U;
int32_t t180 = 10665;
static int8_t x753 = -13;
int64_t x754 = 102LL;
int64_t x759 = INT64_MAX;
int8_t x761 = -3;
uint16_t x766 = 82U;
static int32_t x774 = INT32_MIN;
static volatile int64_t x779 = 800208903LL;
volatile int64_t x783 = -82518737666227LL;
int16_t x784 = 0;
volatile int64_t t188 = -11903015LL;
int16_t x789 = INT16_MAX;
volatile uint32_t x796 = UINT32_MAX;
static int32_t x797 = INT32_MAX;
volatile int32_t t193 = -1;
int8_t x807 = INT8_MAX;
int16_t x809 = 63;
int32_t t195 = 3;
int32_t t198 = 724947910;
int64_t t199 = -72LL;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	static int32_t x2 = -4292205;
	volatile int16_t x3 = 54;
	int8_t x4 = INT8_MIN;
	int64_t t0 = -67128790575LL;

    t0 = (((x1%x2)%x3)|x4);

    if (t0 != -124LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	int64_t x6 = -1LL;
	int64_t x7 = -74734321284418LL;
	static int64_t t1 = -1721LL;

    t1 = (((x5%x6)%x7)|x8);

    if (t1 != 123095647322LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MIN;
	uint16_t x12 = 3564U;
	volatile int64_t t2 = -223027856552120953LL;

    t2 = (((x9%x10)%x11)|x12);

    if (t2 != 3564LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -4385;
	uint32_t x14 = 20384985U;
	uint32_t x15 = 1U;
	volatile uint32_t t3 = 6023U;

    t3 = (((x13%x14)%x15)|x16);

    if (t3 != 4294967168U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x19 = 210850LL;

    t4 = (((x17%x18)%x19)|x20);

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	uint32_t x22 = 104U;
	int64_t x24 = -1LL;
	volatile int64_t t5 = 14417014LL;

    t5 = (((x21%x22)%x23)|x24);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = INT64_MAX;
	uint64_t x27 = UINT64_MAX;
	volatile uint64_t t6 = 2382584LLU;

    t6 = (((x25%x26)%x27)|x28);

    if (t6 != 255LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x30 = 123U;

    t7 = (((x29%x30)%x31)|x32);

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1655LL;
	int8_t x34 = INT8_MIN;
	int8_t x35 = INT8_MIN;
	int16_t x36 = -1;
	int64_t t8 = -79LL;

    t8 = (((x33%x34)%x35)|x36);

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 2543U;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = -942420;
	volatile int8_t x40 = 19;
	uint64_t t9 = 2LLU;

    t9 = (((x37%x38)%x39)|x40);

    if (t9 != 2559LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile int64_t x42 = INT64_MIN;
	static uint64_t x43 = 530058LLU;
	volatile uint64_t t10 = UINT64_MAX;

    t10 = (((x41%x42)%x43)|x44);

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	int16_t x46 = 1;
	int64_t x47 = 33826494203LL;
	uint64_t x48 = 5088771642LLU;

    t11 = (((x45%x46)%x47)|x48);

    if (t11 != 5088771642LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MIN;
	uint64_t x51 = UINT64_MAX;
	uint8_t x52 = UINT8_MAX;
	volatile uint64_t t12 = 23202034150100168LLU;

    t12 = (((x49%x50)%x51)|x52);

    if (t12 != 255LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x53 = UINT8_MAX;
	int32_t x54 = -1;
	volatile int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	volatile int64_t t13 = 39758588586456563LL;

    t13 = (((x53%x54)%x55)|x56);

    if (t13 != -2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -3;
	static int64_t x58 = -112730344179177LL;
	static int32_t x60 = 1956785;
	volatile int64_t t14 = 29013453911831LL;

    t14 = (((x57%x58)%x59)|x60);

    if (t14 != -3LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	volatile int16_t x63 = INT16_MAX;
	int64_t t15 = 2108332431LL;

    t15 = (((x61%x62)%x63)|x64);

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 53548077LLU;
	volatile uint32_t x67 = 4U;
	int64_t x68 = -1LL;

    t16 = (((x65%x66)%x67)|x68);

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 518861039862LL;
	int16_t x70 = INT16_MIN;
	int32_t x72 = INT32_MIN;
	volatile int64_t t17 = 5623387398487LL;

    t17 = (((x69%x70)%x71)|x72);

    if (t17 != -2147483530LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x74 = INT8_MIN;
	static uint8_t x75 = UINT8_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile int64_t t18 = -1LL;

    t18 = (((x73%x74)%x75)|x76);

    if (t18 != 4294967295LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 0U;
	int16_t x78 = -1;
	static uint16_t x79 = UINT16_MAX;
	uint32_t x80 = 633421649U;
	volatile uint32_t t19 = 806053U;

    t19 = (((x77%x78)%x79)|x80);

    if (t19 != 633421649U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = INT64_MIN;
	int8_t x82 = INT8_MAX;
	int64_t x83 = -2867378556LL;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = -51558LL;

    t20 = (((x81%x82)%x83)|x84);

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = INT8_MIN;
	static uint8_t x87 = 1U;
	int32_t t21 = -562;

    t21 = (((x85%x86)%x87)|x88);

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x89 = UINT32_MAX;
	uint32_t x90 = 17546266U;
	int64_t x91 = 647794LL;
	static uint8_t x92 = 20U;
	int64_t t22 = 11LL;

    t22 = (((x89%x90)%x91)|x92);

    if (t22 != 74717LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = -1LL;
	int8_t x94 = -1;
	static volatile int64_t x95 = INT64_MAX;
	int16_t x96 = INT16_MIN;
	int64_t t23 = -607907193488437626LL;

    t23 = (((x93%x94)%x95)|x96);

    if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = INT16_MIN;
	static int64_t x98 = INT64_MIN;
	volatile uint8_t x99 = 15U;
	int64_t x100 = INT64_MIN;
	int64_t t24 = -2646651812547965LL;

    t24 = (((x97%x98)%x99)|x100);

    if (t24 != -8LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x101 = INT64_MIN;
	volatile uint32_t x102 = UINT32_MAX;
	int8_t x103 = -1;
	static int64_t t25 = 68341724283LL;

    t25 = (((x101%x102)%x103)|x104);

    if (t25 != 93379LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x106 = UINT64_MAX;
	volatile uint64_t x108 = 1LLU;
	volatile uint64_t t26 = 1612545761646LLU;

    t26 = (((x105%x106)%x107)|x108);

    if (t26 != 32767LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -12850;
	int8_t x110 = -1;
	int32_t x111 = INT32_MAX;
	int8_t x112 = -1;

    t27 = (((x109%x110)%x111)|x112);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	int16_t x114 = INT16_MIN;
	static volatile uint64_t t28 = 1LLU;

    t28 = (((x113%x114)%x115)|x116);

    if (t28 != 3380215807LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 1U;
	int32_t x118 = -524;
	int32_t x119 = 11219939;
	int32_t x120 = INT32_MAX;
	static int32_t t29 = INT32_MAX;

    t29 = (((x117%x118)%x119)|x120);

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 8;
	int64_t x122 = INT64_MIN;
	int32_t x123 = -174984;
	uint64_t x124 = 46470343680183LLU;
	volatile uint64_t t30 = 10617599147LLU;

    t30 = (((x121%x122)%x123)|x124);

    if (t30 != 46470343680191LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x125 = 1719806LLU;
	int16_t x126 = INT16_MAX;
	int16_t x127 = 23;
	uint8_t x128 = 2U;
	static uint64_t t31 = 2LLU;

    t31 = (((x125%x126)%x127)|x128);

    if (t31 != 6LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = UINT16_MAX;
	int16_t x130 = INT16_MIN;
	int64_t x131 = 8351361532489LL;
	int32_t x132 = 390;
	volatile int64_t t32 = 40786721LL;

    t32 = (((x129%x130)%x131)|x132);

    if (t32 != 32767LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = INT8_MIN;
	int32_t x135 = -1;
	volatile int32_t x136 = INT32_MIN;
	static int32_t t33 = INT32_MIN;

    t33 = (((x133%x134)%x135)|x136);

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x139 = 2281868;
	int64_t x140 = INT64_MIN;

    t34 = (((x137%x138)%x139)|x140);

    if (t34 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = 670493642921372LLU;
	int8_t x142 = INT8_MIN;
	uint64_t x143 = 54293245764LLU;
	uint8_t x144 = 54U;
	static volatile uint64_t t35 = 5612702662835220LLU;

    t35 = (((x141%x142)%x143)|x144);

    if (t35 != 26350981758LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int32_t x146 = 2722;
	static volatile int8_t x147 = INT8_MIN;
	static uint8_t x148 = 1U;
	volatile int32_t t36 = 0;

    t36 = (((x145%x146)%x147)|x148);

    if (t36 != -17) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x154 = INT64_MIN;
	int32_t x155 = 384925;
	int8_t x156 = -1;
	int64_t t37 = -102232743075LL;

    t37 = (((x153%x154)%x155)|x156);

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x158 = 14U;
	int64_t x159 = 1495LL;
	volatile uint16_t x160 = 2184U;
	static volatile int64_t t38 = -123LL;

    t38 = (((x157%x158)%x159)|x160);

    if (t38 != 2187LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = 3;
	volatile int16_t x162 = INT16_MAX;
	volatile uint8_t x163 = 12U;
	int8_t x164 = -1;
	volatile int32_t t39 = 206689;

    t39 = (((x161%x162)%x163)|x164);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x165 = -1LL;
	int8_t x166 = INT8_MIN;
	uint16_t x167 = UINT16_MAX;
	volatile uint32_t x168 = 2095727U;
	int64_t t40 = 787895528199328027LL;

    t40 = (((x165%x166)%x167)|x168);

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = -1;
	static volatile uint64_t x170 = 27053876134388768LLU;
	volatile uint32_t x171 = 205U;
	volatile uint64_t x172 = UINT64_MAX;
	volatile uint64_t t41 = UINT64_MAX;

    t41 = (((x169%x170)%x171)|x172);

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = INT64_MIN;
	volatile int32_t x174 = -3282535;
	uint64_t x176 = 1168258804659972468LLU;
	uint64_t t42 = 9469911201555LLU;

    t42 = (((x173%x174)%x175)|x176);

    if (t42 != 18446744073709551095LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x177 = INT32_MAX;
	uint16_t x178 = 319U;
	int64_t t43 = INT64_MAX;

    t43 = (((x177%x178)%x179)|x180);

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x181 = 821572LL;
	volatile uint16_t x182 = UINT16_MAX;
	volatile int64_t x183 = -117577LL;
	int64_t t44 = -251LL;

    t44 = (((x181%x182)%x183)|x184);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x187 = INT64_MAX;
	uint8_t x188 = UINT8_MAX;

    t45 = (((x185%x186)%x187)|x188);

    if (t45 != 255LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x190 = 10U;
	uint32_t x191 = UINT32_MAX;
	uint64_t x192 = 6508LLU;
	volatile uint64_t t46 = 441709LLU;

    t46 = (((x189%x190)%x191)|x192);

    if (t46 != 6508LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x193 = 62901LL;
	int32_t x194 = -125294095;
	int16_t x195 = INT16_MIN;
	uint32_t x196 = 3527664U;
	int64_t t47 = -32LL;

    t47 = (((x193%x194)%x195)|x196);

    if (t47 != 3536885LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x197 = INT32_MIN;
	int8_t x198 = 1;
	volatile int32_t x199 = -1;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t48 = INT32_MIN;

    t48 = (((x197%x198)%x199)|x200);

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x201 = -126736679077640570LL;
	int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MAX;
	int16_t x204 = -5706;
	volatile int64_t t49 = 3043223LL;

    t49 = (((x201%x202)%x203)|x204);

    if (t49 != -74LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint32_t x205 = 10U;
	uint8_t x206 = 3U;
	int16_t x207 = -15674;
	static int16_t x208 = INT16_MIN;
	static uint32_t t50 = 145946129U;

    t50 = (((x205%x206)%x207)|x208);

    if (t50 != 4294934529U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = -23;
	volatile int32_t x211 = -932;
	uint32_t x212 = 42858U;
	static int64_t t51 = -1LL;

    t51 = (((x209%x210)%x211)|x212);

    if (t51 != -21LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x213 = 1918U;
	volatile int64_t x214 = -1LL;
	int8_t x215 = INT8_MIN;
	int16_t x216 = -171;
	static volatile int64_t t52 = -2094499677031310LL;

    t52 = (((x213%x214)%x215)|x216);

    if (t52 != -171LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = 688082084572747LL;
	static int64_t x220 = -1LL;
	volatile int64_t t53 = 314322101176833587LL;

    t53 = (((x217%x218)%x219)|x220);

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = INT16_MIN;
	uint32_t x222 = 881389U;
	static int16_t x223 = INT16_MIN;
	int8_t x224 = -1;
	uint32_t t54 = UINT32_MAX;

    t54 = (((x221%x222)%x223)|x224);

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x225 = -19229599LL;
	uint64_t x227 = 641494LLU;
	int8_t x228 = INT8_MAX;
	volatile uint64_t t55 = 930670846512LLU;

    t55 = (((x225%x226)%x227)|x228);

    if (t55 != 295167LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x230 = UINT16_MAX;
	volatile uint64_t x232 = UINT64_MAX;
	static volatile uint64_t t56 = UINT64_MAX;

    t56 = (((x229%x230)%x231)|x232);

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x233 = 2U;
	static int64_t x234 = -1LL;
	volatile uint16_t x235 = UINT16_MAX;
	int32_t x236 = INT32_MIN;
	volatile int64_t t57 = 15LL;

    t57 = (((x233%x234)%x235)|x236);

    if (t57 != -2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x237 = 437586789881474LLU;
	static uint16_t x238 = UINT16_MAX;
	static int32_t x239 = -1;
	uint8_t x240 = 1U;
	volatile uint64_t t58 = 2LLU;

    t58 = (((x237%x238)%x239)|x240);

    if (t58 != 33195LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x242 = UINT8_MAX;
	static volatile int16_t x244 = -1;
	uint64_t t59 = UINT64_MAX;

    t59 = (((x241%x242)%x243)|x244);

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x245 = 121U;
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = 58;
	volatile int64_t x248 = -347916LL;
	volatile int64_t t60 = 379675849973LL;

    t60 = (((x245%x246)%x247)|x248);

    if (t60 != -347915LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x249 = UINT64_MAX;
	int64_t x250 = INT64_MIN;
	int16_t x251 = INT16_MAX;
	volatile uint64_t t61 = 250533LLU;

    t61 = (((x249%x250)%x251)|x252);

    if (t61 != 18446744071562067975LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = 27;
	int64_t x254 = INT64_MIN;
	uint8_t x255 = 61U;
	volatile uint8_t x256 = UINT8_MAX;
	int64_t t62 = 76659084123726263LL;

    t62 = (((x253%x254)%x255)|x256);

    if (t62 != 255LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x258 = INT32_MIN;
	int32_t x259 = 130;
	volatile int32_t t63 = 459012;

    t63 = (((x257%x258)%x259)|x260);

    if (t63 != -5) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x261 = UINT8_MAX;
	uint8_t x263 = 43U;
	int64_t x264 = INT64_MIN;
	static int64_t t64 = -722549928683788888LL;

    t64 = (((x261%x262)%x263)|x264);

    if (t64 != -9223372036854775768LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	static int32_t x267 = INT32_MAX;
	int16_t x268 = INT16_MIN;

    t65 = (((x265%x266)%x267)|x268);

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = INT8_MIN;
	static int32_t x270 = INT32_MAX;
	int32_t x271 = -4441459;
	static uint16_t x272 = 17U;

    t66 = (((x269%x270)%x271)|x272);

    if (t66 != -111) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x273 = -1;
	volatile int8_t x274 = -10;
	int64_t x275 = -1LL;
	uint16_t x276 = 20543U;
	volatile int64_t t67 = -281241398010336078LL;

    t67 = (((x273%x274)%x275)|x276);

    if (t67 != 20543LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x277 = INT64_MIN;
	int16_t x278 = INT16_MIN;
	uint32_t x280 = UINT32_MAX;
	static int64_t t68 = 1959LL;

    t68 = (((x277%x278)%x279)|x280);

    if (t68 != 4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x281 = INT64_MIN;
	int16_t x284 = INT16_MIN;
	static volatile int64_t t69 = 27LL;

    t69 = (((x281%x282)%x283)|x284);

    if (t69 != -7824LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x285 = -1LL;
	uint16_t x286 = UINT16_MAX;
	volatile int64_t x287 = INT64_MIN;
	int64_t x288 = -1LL;
	volatile int64_t t70 = 176304914586702LL;

    t70 = (((x285%x286)%x287)|x288);

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x289 = INT32_MIN;
	static int32_t x290 = INT32_MAX;
	static int8_t x291 = INT8_MAX;
	static int32_t x292 = -669;
	volatile int32_t t71 = 245724;

    t71 = (((x289%x290)%x291)|x292);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x293 = INT16_MIN;
	volatile uint64_t x294 = 891610LLU;
	int8_t x296 = -21;

    t72 = (((x293%x294)%x295)|x296);

    if (t72 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x297 = -1LL;
	int16_t x298 = 16257;
	uint64_t x299 = UINT64_MAX;
	uint8_t x300 = 9U;
	uint64_t t73 = 16373844044633LLU;

    t73 = (((x297%x298)%x299)|x300);

    if (t73 != 9LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = -1;
	static int16_t x303 = -1;
	static int8_t x304 = INT8_MAX;

    t74 = (((x301%x302)%x303)|x304);

    if (t74 != 127U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x306 = INT64_MIN;
	static int8_t x307 = -1;
	uint8_t x308 = 1U;
	int64_t t75 = -19009766458490759LL;

    t75 = (((x305%x306)%x307)|x308);

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = -11;
	uint16_t x310 = 1U;
	int32_t x312 = -1;
	volatile int32_t t76 = -2467835;

    t76 = (((x309%x310)%x311)|x312);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x317 = -3030;
	uint32_t x319 = UINT32_MAX;
	volatile int64_t x320 = INT64_MIN;

    t77 = (((x317%x318)%x319)|x320);

    if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x321 = 1128LLU;
	volatile int16_t x322 = INT16_MIN;
	int8_t x323 = -1;
	static int16_t x324 = -452;
	uint64_t t78 = 1198071468246491954LLU;

    t78 = (((x321%x322)%x323)|x324);

    if (t78 != 18446744073709551228LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x327 = INT16_MIN;

    t79 = (((x325%x326)%x327)|x328);

    if (t79 != 2147483647LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x329 = 22516U;
	uint16_t x330 = 1U;
	uint8_t x331 = UINT8_MAX;
	volatile int8_t x332 = INT8_MIN;
	int32_t t80 = -338289;

    t80 = (((x329%x330)%x331)|x332);

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = INT64_MIN;
	int32_t x335 = INT32_MIN;

    t81 = (((x333%x334)%x335)|x336);

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = INT16_MAX;
	static int16_t x338 = -38;
	static int64_t x339 = INT64_MAX;
	int64_t t82 = -25750LL;

    t82 = (((x337%x338)%x339)|x340);

    if (t82 != 2619LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x341 = 1;
	volatile int8_t x342 = INT8_MAX;
	static int32_t x343 = 129803160;
	int32_t x344 = INT32_MAX;
	volatile int32_t t83 = INT32_MAX;

    t83 = (((x341%x342)%x343)|x344);

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x345 = -1LL;
	int16_t x346 = INT16_MAX;
	int8_t x347 = -3;
	int32_t x348 = -2769;

    t84 = (((x345%x346)%x347)|x348);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x349 = INT16_MAX;
	static uint64_t x350 = 45LLU;
	int16_t x351 = INT16_MIN;
	static volatile uint16_t x352 = 1U;
	volatile uint64_t t85 = 149531619649LLU;

    t85 = (((x349%x350)%x351)|x352);

    if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x353 = 21908LLU;
	static int32_t x354 = INT32_MAX;
	int64_t x355 = -1LL;
	uint64_t t86 = 2376026951621LLU;

    t86 = (((x353%x354)%x355)|x356);

    if (t86 != 18446744073709540756LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x357 = 0U;
	static int16_t x359 = 43;
	static volatile int64_t x360 = INT64_MIN;
	volatile int64_t t87 = INT64_MIN;

    t87 = (((x357%x358)%x359)|x360);

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x361 = -1;
	int64_t x362 = -1LL;
	static int32_t x363 = 71497;
	int64_t t88 = -128867363667367LL;

    t88 = (((x361%x362)%x363)|x364);

    if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x365 = -1008809927396490LL;
	uint32_t x366 = 3744U;
	int16_t x367 = -15774;
	static uint16_t x368 = 15292U;
	static volatile int64_t t89 = -2LL;

    t89 = (((x365%x366)%x367)|x368);

    if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x369 = 5U;
	volatile int64_t x371 = INT64_MIN;
	volatile int8_t x372 = INT8_MAX;
	int64_t t90 = 1390002310LL;

    t90 = (((x369%x370)%x371)|x372);

    if (t90 != 127LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x373 = -1LL;
	static volatile uint8_t x375 = 61U;
	uint16_t x376 = 5U;
	int64_t t91 = -42LL;

    t91 = (((x373%x374)%x375)|x376);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x377 = 4013767162761LL;
	int8_t x378 = INT8_MIN;
	int32_t x379 = -1;
	uint16_t x380 = 6U;
	int64_t t92 = 33892652220165074LL;

    t92 = (((x377%x378)%x379)|x380);

    if (t92 != 6LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x381 = -1;
	uint8_t x382 = UINT8_MAX;
	int8_t x383 = INT8_MIN;
	int16_t x384 = -1;
	volatile int32_t t93 = 38214326;

    t93 = (((x381%x382)%x383)|x384);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x385 = 1;
	int8_t x386 = -1;
	static volatile int8_t x388 = INT8_MIN;

    t94 = (((x385%x386)%x387)|x388);

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x389 = 2617670185333776318LLU;
	int64_t x390 = INT64_MIN;
	volatile int8_t x391 = INT8_MIN;
	static volatile uint64_t x392 = UINT64_MAX;
	uint64_t t95 = UINT64_MAX;

    t95 = (((x389%x390)%x391)|x392);

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x393 = 23LLU;
	int8_t x394 = INT8_MIN;
	int32_t x396 = INT32_MIN;
	uint64_t t96 = 31277LLU;

    t96 = (((x393%x394)%x395)|x396);

    if (t96 != 18446744071562067991LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x397 = 33545189792LLU;
	uint8_t x398 = UINT8_MAX;
	int64_t x400 = INT64_MAX;
	uint64_t t97 = 11410032809360LLU;

    t97 = (((x397%x398)%x399)|x400);

    if (t97 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MAX;
	volatile int32_t x403 = 418929;

    t98 = (((x401%x402)%x403)|x404);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x405 = UINT8_MAX;
	volatile uint32_t x406 = 229084999U;
	static uint32_t x407 = UINT32_MAX;
	volatile int64_t x408 = INT64_MAX;

    t99 = (((x405%x406)%x407)|x408);

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x413 = 256775404208LLU;
	static int8_t x415 = -1;
	static int16_t x416 = 1;
	static volatile uint64_t t100 = 477920464464652223LLU;

    t100 = (((x413%x414)%x415)|x416);

    if (t100 != 256775404209LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x417 = INT64_MAX;
	uint16_t x418 = 2U;
	int16_t x419 = 3216;
	static int64_t t101 = -6870LL;

    t101 = (((x417%x418)%x419)|x420);

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = INT16_MAX;
	int32_t x422 = 7;
	int8_t x423 = INT8_MAX;
	static int16_t x424 = 60;
	volatile int32_t t102 = 1;

    t102 = (((x421%x422)%x423)|x424);

    if (t102 != 60) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = INT16_MIN;
	uint8_t x426 = UINT8_MAX;
	uint16_t x427 = 6U;
	volatile int16_t x428 = INT16_MIN;
	int32_t t103 = -141;

    t103 = (((x425%x426)%x427)|x428);

    if (t103 != -2) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x429 = UINT64_MAX;
	static volatile int8_t x431 = INT8_MIN;
	volatile uint64_t t104 = 138526472169631827LLU;

    t104 = (((x429%x430)%x431)|x432);

    if (t104 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x433 = UINT16_MAX;
	uint16_t x434 = UINT16_MAX;
	uint64_t x435 = 1234214375422LLU;
	static volatile int16_t x436 = -6981;

    t105 = (((x433%x434)%x435)|x436);

    if (t105 != 18446744073709544635LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x437 = -158491041576LL;
	int64_t x439 = -27LL;
	uint8_t x440 = 3U;
	volatile uint64_t t106 = 5191726LLU;

    t106 = (((x437%x438)%x439)|x440);

    if (t106 != 1031823247747260203LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x441 = UINT32_MAX;
	volatile int16_t x442 = INT16_MAX;
	int64_t x443 = INT64_MIN;
	static volatile int64_t t107 = 273047472558467918LL;

    t107 = (((x441%x442)%x443)|x444);

    if (t107 != 244699567LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = 1545190107LL;
	int32_t x446 = -25145960;
	int16_t x447 = INT16_MIN;
	uint16_t x448 = 948U;
	static int64_t t108 = 134644381282139187LL;

    t108 = (((x445%x446)%x447)|x448);

    if (t108 != 15287LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x449 = -1;
	volatile int32_t x450 = INT32_MIN;
	uint8_t x451 = 4U;
	int8_t x452 = -1;
	int32_t t109 = 77486;

    t109 = (((x449%x450)%x451)|x452);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x453 = UINT16_MAX;
	uint8_t x455 = UINT8_MAX;
	static int64_t x456 = INT64_MIN;
	static volatile int64_t t110 = INT64_MIN;

    t110 = (((x453%x454)%x455)|x456);

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x457 = INT64_MIN;
	static int64_t x459 = 3232487265LL;
	static int64_t x460 = 1418472122018001LL;
	volatile int64_t t111 = -359610914473882LL;

    t111 = (((x457%x458)%x459)|x460);

    if (t111 != 1418472122018001LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x461 = UINT16_MAX;
	static volatile int16_t x462 = INT16_MAX;
	int64_t x464 = -127211LL;

    t112 = (((x461%x462)%x463)|x464);

    if (t112 != -127211LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x465 = -2298LL;
	int64_t x466 = INT64_MIN;
	int8_t x467 = INT8_MAX;
	int8_t x468 = INT8_MIN;
	int64_t t113 = -2813945881969126347LL;

    t113 = (((x465%x466)%x467)|x468);

    if (t113 != -12LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x469 = INT32_MIN;
	int16_t x470 = -405;
	int64_t x471 = 16573589LL;
	static int64_t x472 = 152238LL;
	volatile int64_t t114 = -9050809495697LL;

    t114 = (((x469%x470)%x471)|x472);

    if (t114 != -274LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x473 = INT32_MIN;
	int8_t x474 = -1;
	static int64_t x475 = -2425538145315193953LL;
	static int16_t x476 = -1;
	static volatile int64_t t115 = -257521LL;

    t115 = (((x473%x474)%x475)|x476);

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x478 = INT32_MIN;
	static int16_t x480 = 168;

    t116 = (((x477%x478)%x479)|x480);

    if (t116 != 18446744073708901805LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x481 = INT8_MIN;
	uint8_t x482 = 52U;
	volatile uint64_t x483 = 132353262365932230LLU;
	volatile int64_t x484 = INT64_MAX;
	uint64_t t117 = 116423860102969LLU;

    t117 = (((x481%x482)%x483)|x484);

    if (t117 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x485 = 200890LLU;
	int64_t x487 = INT64_MAX;
	int32_t x488 = INT32_MIN;
	static volatile uint64_t t118 = 133372224985LLU;

    t118 = (((x485%x486)%x487)|x488);

    if (t118 != 18446744071562072584LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x489 = INT32_MIN;
	uint64_t x490 = 50560LLU;
	int16_t x491 = -1;

    t119 = (((x489%x490)%x491)|x492);

    if (t119 != 4863LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = INT8_MIN;
	uint32_t x494 = 2759437U;
	uint16_t x495 = UINT16_MAX;

    t120 = (((x493%x494)%x495)|x496);

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x497 = -7LL;
	int16_t x499 = -1948;
	int64_t x500 = INT64_MIN;
	static int64_t t121 = 271166002145LL;

    t121 = (((x497%x498)%x499)|x500);

    if (t121 != -7LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x502 = INT64_MIN;
	volatile int32_t x503 = -1;
	volatile int16_t x504 = 413;
	static volatile int64_t t122 = -10410435959423LL;

    t122 = (((x501%x502)%x503)|x504);

    if (t122 != 413LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x506 = -687231LL;
	uint32_t x507 = 54772U;
	int8_t x508 = INT8_MAX;
	volatile int64_t t123 = -4190185915844LL;

    t123 = (((x505%x506)%x507)|x508);

    if (t123 != 127LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x509 = UINT8_MAX;
	volatile int64_t x510 = 3370171627193LL;
	int16_t x511 = -16;
	int16_t x512 = INT16_MIN;
	int64_t t124 = -43772LL;

    t124 = (((x509%x510)%x511)|x512);

    if (t124 != -32753LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x513 = 1;
	int32_t x514 = INT32_MIN;
	int64_t x515 = INT64_MAX;
	uint32_t x516 = 644762397U;

    t125 = (((x513%x514)%x515)|x516);

    if (t125 != 644762397LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x518 = 95LLU;
	uint64_t x519 = 1800796761996163991LLU;
	uint32_t x520 = UINT32_MAX;
	uint64_t t126 = 65749880204026LLU;

    t126 = (((x517%x518)%x519)|x520);

    if (t126 != 4294967295LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x521 = INT32_MAX;
	int8_t x523 = INT8_MAX;
	uint32_t x524 = 3U;

    t127 = (((x521%x522)%x523)|x524);

    if (t127 != 7U) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x525 = UINT64_MAX;
	int8_t x526 = 1;
	static int8_t x527 = INT8_MIN;
	int8_t x528 = INT8_MIN;
	uint64_t t128 = 20932250334LLU;

    t128 = (((x525%x526)%x527)|x528);

    if (t128 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x530 = INT8_MIN;
	static uint32_t x531 = UINT32_MAX;
	int64_t x532 = 8438675464LL;

    t129 = (((x529%x530)%x531)|x532);

    if (t129 != 8589934474LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x533 = INT32_MAX;
	uint64_t x534 = UINT64_MAX;
	volatile int16_t x535 = 7334;
	int16_t x536 = 477;
	uint64_t t130 = 172394LLU;

    t130 = (((x533%x534)%x535)|x536);

    if (t130 != 511LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x538 = INT8_MIN;
	uint64_t x539 = 396540262138832702LLU;
	uint64_t t131 = 33213051LLU;

    t131 = (((x537%x538)%x539)|x540);

    if (t131 != 1563LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x541 = -1;
	uint32_t x542 = UINT32_MAX;
	uint32_t x543 = 3971U;
	static uint8_t x544 = 0U;
	uint32_t t132 = 293081U;

    t132 = (((x541%x542)%x543)|x544);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x545 = 3U;
	int8_t x547 = INT8_MIN;
	static int32_t t133 = INT32_MIN;

    t133 = (((x545%x546)%x547)|x548);

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x549 = UINT32_MAX;
	static uint32_t x550 = UINT32_MAX;
	int8_t x551 = -1;
	volatile uint32_t t134 = 8U;

    t134 = (((x549%x550)%x551)|x552);

    if (t134 != 2147483647U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x553 = 96807075236LLU;
	static int64_t x554 = INT64_MIN;
	volatile int16_t x556 = -38;
	uint64_t t135 = 15495476183LLU;

    t135 = (((x553%x554)%x555)|x556);

    if (t135 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x561 = -6709;
	int8_t x562 = -1;
	uint8_t x563 = 2U;
	static volatile int16_t x564 = -1;

    t136 = (((x561%x562)%x563)|x564);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x565 = -62549800LL;
	int32_t x566 = -1;
	int8_t x567 = INT8_MAX;
	volatile int64_t t137 = 1754932187902736LL;

    t137 = (((x565%x566)%x567)|x568);

    if (t137 != 255LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x569 = -1;
	uint64_t x571 = UINT64_MAX;
	volatile uint64_t t138 = 3123709LLU;

    t138 = (((x569%x570)%x571)|x572);

    if (t138 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x573 = 282488608402LLU;
	volatile int8_t x574 = INT8_MIN;
	int32_t x575 = INT32_MIN;
	int64_t x576 = INT64_MIN;
	static volatile uint64_t t139 = 88387LLU;

    t139 = (((x573%x574)%x575)|x576);

    if (t139 != 9223372319343384210LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x577 = INT32_MIN;
	int32_t x579 = -2919;
	uint32_t t140 = UINT32_MAX;

    t140 = (((x577%x578)%x579)|x580);

    if (t140 != UINT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x583 = 311U;
	int32_t x584 = 72738;
	int64_t t141 = -244332921570659LL;

    t141 = (((x581%x582)%x583)|x584);

    if (t141 != 72738LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x586 = -1;
	int8_t x587 = INT8_MIN;
	volatile int64_t t142 = 46LL;

    t142 = (((x585%x586)%x587)|x588);

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x589 = -1;
	uint32_t x590 = 3610U;
	int32_t x591 = INT32_MIN;
	static int16_t x592 = -3;
	static uint32_t t143 = 20323U;

    t143 = (((x589%x590)%x591)|x592);

    if (t143 != 4294967293U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x594 = -1;
	static int8_t x595 = INT8_MIN;
	uint64_t x596 = 100LLU;
	uint64_t t144 = 1722671081030LLU;

    t144 = (((x593%x594)%x595)|x596);

    if (t144 != 100LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x597 = INT8_MIN;
	volatile uint8_t x598 = 126U;
	static int8_t x599 = -1;
	int32_t t145 = 2;

    t145 = (((x597%x598)%x599)|x600);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x601 = UINT16_MAX;
	int8_t x602 = 1;
	int32_t x603 = 2677857;
	uint64_t x604 = 7621092982385555LLU;
	uint64_t t146 = 538781580LLU;

    t146 = (((x601%x602)%x603)|x604);

    if (t146 != 7621092982385555LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x606 = 2207LL;
	volatile int32_t x607 = INT32_MAX;
	static uint8_t x608 = 22U;
	volatile int64_t t147 = 3292093LL;

    t147 = (((x605%x606)%x607)|x608);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x610 = 22U;
	volatile uint32_t x611 = UINT32_MAX;
	int32_t x612 = -1824;
	volatile uint32_t t148 = 313008U;

    t148 = (((x609%x610)%x611)|x612);

    if (t148 != 4294967286U) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x617 = UINT64_MAX;
	static int8_t x618 = -1;
	uint8_t x620 = UINT8_MAX;

    t149 = (((x617%x618)%x619)|x620);

    if (t149 != 255LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x624 = -432182829LL;

    t150 = (((x621%x622)%x623)|x624);

    if (t150 != -432182829LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x625 = INT16_MIN;
	uint32_t x626 = UINT32_MAX;
	uint64_t t151 = 990LLU;

    t151 = (((x625%x626)%x627)|x628);

    if (t151 != 692795771126LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x629 = INT16_MIN;
	static uint16_t x630 = 19752U;
	uint8_t x632 = 82U;

    t152 = (((x629%x630)%x631)|x632);

    if (t152 != -12934LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x633 = 1;
	int32_t x634 = 3053;
	static uint64_t x635 = 424884LLU;
	int64_t x636 = INT64_MIN;
	static uint64_t t153 = 15116806732212LLU;

    t153 = (((x633%x634)%x635)|x636);

    if (t153 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x637 = UINT64_MAX;
	volatile int64_t x639 = 295916081493870114LL;
	uint16_t x640 = 0U;
	uint64_t t154 = 164LLU;

    t154 = (((x637%x638)%x639)|x640);

    if (t154 != 32767LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x641 = -2;
	uint32_t x642 = UINT32_MAX;
	int32_t x643 = 46904173;
	volatile int8_t x644 = INT8_MIN;
	uint32_t t155 = 28U;

    t155 = (((x641%x642)%x643)|x644);

    if (t155 != 4294967231U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x645 = 64904401LLU;
	static int16_t x646 = 1;
	int8_t x647 = INT8_MIN;
	int16_t x648 = INT16_MIN;
	volatile uint64_t t156 = 95360LLU;

    t156 = (((x645%x646)%x647)|x648);

    if (t156 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint64_t x649 = UINT64_MAX;
	volatile int32_t x650 = -76219083;
	volatile int8_t x651 = 58;
	int16_t x652 = -1;
	volatile uint64_t t157 = UINT64_MAX;

    t157 = (((x649%x650)%x651)|x652);

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x653 = -122722;
	int16_t x655 = INT16_MIN;
	static uint8_t x656 = UINT8_MAX;
	volatile int32_t t158 = -1650714;

    t158 = (((x653%x654)%x655)|x656);

    if (t158 != -24321) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x657 = 93U;
	volatile uint16_t x658 = UINT16_MAX;
	int8_t x659 = INT8_MIN;
	volatile int8_t x660 = INT8_MAX;

    t159 = (((x657%x658)%x659)|x660);

    if (t159 != 127) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x661 = INT64_MAX;
	int8_t x662 = -1;
	volatile int32_t x663 = -1;
	volatile int64_t t160 = -150LL;

    t160 = (((x661%x662)%x663)|x664);

    if (t160 != -128LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x665 = -212;
	volatile int16_t x667 = 15852;
	volatile int32_t t161 = -299;

    t161 = (((x665%x666)%x667)|x668);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x669 = INT32_MIN;
	static uint64_t x671 = UINT64_MAX;
	int32_t x672 = -85125;
	volatile uint64_t t162 = 15LLU;

    t162 = (((x669%x670)%x671)|x672);

    if (t162 != 18446744073709466491LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x673 = 667046U;
	int8_t x674 = -40;
	int32_t x675 = INT32_MIN;
	uint32_t x676 = UINT32_MAX;
	volatile uint32_t t163 = UINT32_MAX;

    t163 = (((x673%x674)%x675)|x676);

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x678 = UINT16_MAX;
	uint64_t x679 = 28982323828LLU;
	int32_t x680 = -6268705;
	volatile uint64_t t164 = 7294584343438LLU;

    t164 = (((x677%x678)%x679)|x680);

    if (t164 != 18446744073703349759LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x681 = -792;
	int64_t x682 = -739LL;
	int64_t x683 = INT64_MIN;
	volatile int64_t t165 = 4723665293766031LL;

    t165 = (((x681%x682)%x683)|x684);

    if (t165 != -17LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x689 = 0;
	int8_t x690 = INT8_MAX;
	int8_t x692 = 28;

    t166 = (((x689%x690)%x691)|x692);

    if (t166 != 28) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x694 = INT64_MAX;
	static int16_t x695 = -5;
	uint8_t x696 = UINT8_MAX;

    t167 = (((x693%x694)%x695)|x696);

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x697 = 2U;
	int8_t x699 = INT8_MIN;
	volatile uint64_t x700 = UINT64_MAX;
	uint64_t t168 = UINT64_MAX;

    t168 = (((x697%x698)%x699)|x700);

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x702 = -169311058LL;
	static int16_t x703 = INT16_MIN;
	int8_t x704 = 1;
	int64_t t169 = 6406449378882LL;

    t169 = (((x701%x702)%x703)|x704);

    if (t169 != -14375LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x706 = 4U;
	int16_t x707 = INT16_MIN;
	volatile uint64_t t170 = 4086029727273962LLU;

    t170 = (((x705%x706)%x707)|x708);

    if (t170 != 127LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x709 = UINT32_MAX;
	volatile uint32_t x711 = 10U;
	volatile uint16_t x712 = 42U;
	uint64_t t171 = 2123877148823916053LLU;

    t171 = (((x709%x710)%x711)|x712);

    if (t171 != 43LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x713 = INT16_MAX;
	volatile int16_t x714 = INT16_MIN;
	static volatile int32_t t172 = 3;

    t172 = (((x713%x714)%x715)|x716);

    if (t172 != -2147450881) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x721 = UINT8_MAX;
	volatile uint32_t x722 = UINT32_MAX;
	int32_t x723 = -1;
	uint64_t x724 = 125846428LLU;
	uint64_t t173 = 18449662217390LLU;

    t173 = (((x721%x722)%x723)|x724);

    if (t173 != 125846527LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x725 = UINT64_MAX;
	volatile int16_t x726 = INT16_MIN;
	uint8_t x728 = 5U;
	static volatile uint64_t t174 = 240131800LLU;

    t174 = (((x725%x726)%x727)|x728);

    if (t174 != 7LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x729 = INT8_MAX;
	volatile uint32_t x730 = 86145U;
	uint8_t x731 = 3U;
	static volatile uint64_t x732 = 60094LLU;
	volatile uint64_t t175 = 12714097681LLU;

    t175 = (((x729%x730)%x731)|x732);

    if (t175 != 60095LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x733 = 115U;
	int32_t x736 = INT32_MAX;
	volatile int64_t t176 = 18922828LL;

    t176 = (((x733%x734)%x735)|x736);

    if (t176 != 2147483647LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x737 = INT64_MAX;
	static int64_t x738 = INT64_MIN;
	static volatile int16_t x739 = INT16_MAX;
	static int64_t t177 = 536095990221963LL;

    t177 = (((x737%x738)%x739)|x740);

    if (t177 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x742 = 36U;
	uint8_t x743 = 39U;
	int8_t x744 = -2;
	volatile uint32_t t178 = 21352644U;

    t178 = (((x741%x742)%x743)|x744);

    if (t178 != 4294967294U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x745 = INT64_MAX;
	int32_t x746 = INT32_MIN;
	int16_t x747 = INT16_MAX;
	uint8_t x748 = UINT8_MAX;
	int64_t t179 = -72633253095668049LL;

    t179 = (((x745%x746)%x747)|x748);

    if (t179 != 255LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x749 = UINT16_MAX;
	int32_t x750 = INT32_MIN;
	static int16_t x751 = 651;
	volatile int32_t x752 = -5300;

    t180 = (((x749%x750)%x751)|x752);

    if (t180 != -5121) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x755 = UINT16_MAX;
	static uint32_t x756 = 6669908U;
	static int64_t t181 = 195LL;

    t181 = (((x753%x754)%x755)|x756);

    if (t181 != -9LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x757 = 1;
	int32_t x758 = 2;
	int16_t x760 = INT16_MIN;
	static int64_t t182 = 87573666LL;

    t182 = (((x757%x758)%x759)|x760);

    if (t182 != -32767LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x762 = INT8_MAX;
	uint16_t x763 = UINT16_MAX;
	int64_t x764 = INT64_MIN;
	volatile int64_t t183 = -230290815451314LL;

    t183 = (((x761%x762)%x763)|x764);

    if (t183 != -3LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x765 = INT8_MAX;
	volatile int64_t x767 = -44052477262LL;
	int32_t x768 = 84;
	volatile int64_t t184 = -17398778LL;

    t184 = (((x765%x766)%x767)|x768);

    if (t184 != 125LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x769 = 5753U;
	static int16_t x770 = INT16_MAX;
	volatile int8_t x771 = INT8_MIN;
	volatile uint8_t x772 = UINT8_MAX;
	uint32_t t185 = 6U;

    t185 = (((x769%x770)%x771)|x772);

    if (t185 != 5887U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x773 = UINT32_MAX;
	int64_t x775 = 1215512116098LL;
	int8_t x776 = -26;
	static volatile int64_t t186 = -306788615052LL;

    t186 = (((x773%x774)%x775)|x776);

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x777 = 741472;
	int64_t x778 = -106720035456859LL;
	static volatile int32_t x780 = 91411205;
	static volatile int64_t t187 = 19216962369941LL;

    t187 = (((x777%x778)%x779)|x780);

    if (t187 != 92001125LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x781 = -1;
	int64_t x782 = INT64_MIN;

    t188 = (((x781%x782)%x783)|x784);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x785 = 1;
	static uint8_t x786 = 3U;
	volatile int64_t x787 = -1LL;
	static volatile uint8_t x788 = 3U;
	volatile int64_t t189 = -84072LL;

    t189 = (((x785%x786)%x787)|x788);

    if (t189 != 3LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x790 = INT16_MAX;
	static int64_t x791 = INT64_MAX;
	uint8_t x792 = 14U;
	volatile int64_t t190 = 18879656694004476LL;

    t190 = (((x789%x790)%x791)|x792);

    if (t190 != 14LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x793 = INT8_MIN;
	volatile uint8_t x794 = 2U;
	int64_t x795 = INT64_MIN;
	volatile int64_t t191 = -62678113211670LL;

    t191 = (((x793%x794)%x795)|x796);

    if (t191 != 4294967295LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x798 = INT32_MAX;
	volatile int32_t x799 = -1;
	int32_t x800 = -104435766;
	int32_t t192 = 23899303;

    t192 = (((x797%x798)%x799)|x800);

    if (t192 != -104435766) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x801 = INT16_MIN;
	int16_t x802 = 2;
	static int32_t x803 = -120356;
	int16_t x804 = INT16_MIN;

    t193 = (((x801%x802)%x803)|x804);

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x805 = INT16_MAX;
	uint16_t x806 = 10U;
	uint64_t x808 = 8226603860LLU;
	volatile uint64_t t194 = 2473099LLU;

    t194 = (((x805%x806)%x807)|x808);

    if (t194 != 8226603863LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x810 = 1U;
	uint8_t x811 = UINT8_MAX;
	int8_t x812 = INT8_MIN;

    t195 = (((x809%x810)%x811)|x812);

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x813 = 2U;
	static volatile int8_t x814 = 2;
	int16_t x815 = INT16_MIN;
	uint8_t x816 = UINT8_MAX;
	volatile int32_t t196 = -249;

    t196 = (((x813%x814)%x815)|x816);

    if (t196 != 255) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x817 = UINT64_MAX;
	int64_t x818 = -28278LL;
	static int16_t x819 = -1;
	uint8_t x820 = 2U;
	uint64_t t197 = 17LLU;

    t197 = (((x817%x818)%x819)|x820);

    if (t197 != 28279LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x821 = INT16_MIN;
	uint16_t x822 = 16433U;
	uint8_t x823 = 9U;
	volatile uint8_t x824 = 1U;

    t198 = (((x821%x822)%x823)|x824);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x825 = -851887450;
	volatile int8_t x826 = INT8_MAX;
	int64_t x827 = -434070901514577176LL;
	int64_t x828 = -248079605120455713LL;

    t199 = (((x825%x826)%x827)|x828);

    if (t199 != -1LL) { NG(); } else { ; }
	
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

