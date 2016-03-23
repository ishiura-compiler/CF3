
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

int64_t x8 = 840722148646LL;
static int32_t x10 = INT32_MIN;
int32_t x11 = 20671;
int8_t x13 = -1;
int16_t x19 = 4;
volatile int32_t t4 = -16;
static uint8_t x28 = UINT8_MAX;
volatile uint8_t x30 = 56U;
uint32_t t7 = 4195U;
volatile int64_t x35 = INT64_MIN;
int64_t t8 = -189489716576456931LL;
int8_t x37 = INT8_MAX;
static volatile int32_t t9 = 60901212;
int16_t x55 = INT16_MIN;
uint32_t x58 = 761U;
static volatile int8_t x60 = INT8_MAX;
static int8_t x67 = -1;
int8_t x74 = INT8_MAX;
int16_t x76 = INT16_MIN;
static uint64_t x79 = 2820431113488187LLU;
int8_t x80 = 8;
volatile uint64_t t19 = 1318798255543972904LLU;
volatile uint16_t x81 = 3U;
static int16_t x85 = 551;
static int64_t x86 = INT64_MAX;
static uint32_t x88 = UINT32_MAX;
int32_t t22 = -1235;
uint8_t x94 = UINT8_MAX;
uint16_t x105 = 1U;
int64_t x106 = INT64_MIN;
uint16_t x118 = UINT16_MAX;
volatile int64_t x119 = INT64_MAX;
static volatile int16_t x127 = 29;
int16_t x129 = INT16_MIN;
volatile int8_t x137 = -5;
static uint64_t x142 = 9739203889LLU;
static volatile int64_t x145 = 240722LL;
int32_t t36 = 25960;
uint32_t x150 = 0U;
int32_t x151 = -1;
int32_t x152 = -52;
volatile int64_t x162 = -1LL;
uint32_t x163 = 27U;
int16_t x167 = 9216;
uint16_t x168 = UINT16_MAX;
int32_t t41 = -973827725;
static uint16_t x171 = 1U;
static volatile int8_t x172 = -1;
volatile int16_t x177 = INT16_MIN;
static int16_t x185 = 910;
int32_t x187 = INT32_MIN;
int32_t t46 = -31;
uint64_t x189 = UINT64_MAX;
int64_t x193 = 1914LL;
static volatile int32_t t50 = 15308748;
volatile uint64_t x206 = UINT64_MAX;
int16_t x208 = 16077;
volatile int8_t x212 = 57;
static uint64_t x214 = 1LLU;
int8_t x215 = 14;
volatile uint32_t x216 = 149310U;
volatile int8_t x223 = -30;
volatile int8_t x224 = -2;
volatile int64_t t56 = 1LL;
static uint64_t t57 = 55721151926676877LLU;
int64_t t58 = -3760LL;
int32_t x243 = -14578;
int32_t x245 = -240962;
int64_t x256 = INT64_MIN;
static int64_t t63 = -57849554LL;
volatile int32_t x260 = INT32_MIN;
int64_t t64 = -11363LL;
volatile int32_t x262 = INT32_MIN;
static int32_t x264 = INT32_MIN;
static volatile int32_t t65 = 0;
static int64_t x270 = INT64_MIN;
uint64_t x272 = 65869238249696LLU;
uint32_t t68 = 8656905U;
static int16_t x282 = -1;
uint64_t x290 = 145LLU;
uint8_t x293 = UINT8_MAX;
uint64_t x294 = 175142595991288LLU;
int8_t x295 = INT8_MIN;
static uint8_t x298 = 29U;
volatile int32_t x299 = -1851;
static uint64_t x305 = 11962952173857LLU;
int64_t x307 = -1216470455728LL;
int32_t x308 = INT32_MAX;
volatile int8_t x309 = -9;
int32_t x315 = INT32_MIN;
volatile int32_t x320 = INT32_MIN;
int16_t x325 = INT16_MAX;
uint32_t x329 = 727U;
uint32_t t82 = 1834U;
uint32_t x334 = 16677U;
int16_t x337 = -4;
uint16_t x339 = UINT16_MAX;
static uint64_t x348 = 26LLU;
int8_t x352 = INT8_MIN;
int8_t x353 = INT8_MIN;
volatile uint16_t x356 = UINT16_MAX;
static int32_t t88 = -32;
int32_t x357 = 1;
uint32_t x362 = UINT32_MAX;
static int32_t x366 = -1;
int32_t x367 = INT32_MIN;
static int32_t x368 = -1;
uint8_t x373 = UINT8_MAX;
int64_t x374 = INT64_MIN;
int32_t x386 = INT32_MIN;
int16_t x387 = -1;
static volatile int32_t t96 = -1;
int32_t x389 = INT32_MIN;
int8_t x391 = 6;
volatile uint8_t x397 = 57U;
volatile int64_t x403 = 2930977301797LL;
int64_t x405 = 2896072318078741LL;
volatile int64_t x411 = INT64_MIN;
int16_t x415 = INT16_MAX;
volatile int64_t x419 = -1LL;
volatile int8_t x427 = 22;
int8_t x442 = INT8_MIN;
int32_t x443 = -1;
int8_t x446 = INT8_MAX;
int16_t x448 = -1;
int16_t x450 = INT16_MAX;
int8_t x457 = INT8_MIN;
uint64_t t115 = 500829LLU;
volatile uint32_t x475 = 102920U;
uint8_t x477 = 13U;
uint8_t x479 = UINT8_MAX;
volatile int8_t x487 = INT8_MIN;
uint32_t x489 = 198U;
uint64_t x492 = 467LLU;
uint32_t x494 = UINT32_MAX;
volatile int32_t t123 = 345;
static int64_t x501 = INT64_MIN;
int32_t x511 = INT32_MIN;
int64_t x517 = INT64_MIN;
static uint8_t x518 = 70U;
int16_t x520 = -1;
uint32_t t130 = 982841353U;
int64_t x525 = INT64_MIN;
int8_t x526 = INT8_MIN;
static uint64_t x527 = UINT64_MAX;
int32_t x532 = INT32_MIN;
uint8_t x537 = UINT8_MAX;
static int16_t x544 = INT16_MIN;
volatile int64_t x548 = -1546599944LL;
static int8_t x551 = -4;
int8_t x553 = -1;
static int64_t x555 = INT64_MAX;
uint64_t x559 = UINT64_MAX;
int64_t x563 = INT64_MIN;
int64_t t140 = -502347148872LL;
volatile uint16_t x566 = UINT16_MAX;
static int32_t t141 = 28026205;
volatile uint16_t x570 = 1U;
static int8_t x571 = INT8_MIN;
volatile uint16_t x572 = 289U;
static volatile int32_t t142 = 73092059;
int32_t x582 = INT32_MIN;
int16_t x591 = -1;
uint8_t x603 = UINT8_MAX;
volatile int32_t x604 = -288446936;
int8_t x606 = -1;
int8_t x611 = -59;
int64_t x615 = INT64_MAX;
int16_t x618 = INT16_MIN;
int64_t x621 = -1LL;
int16_t x622 = -5896;
static volatile int64_t x623 = -1LL;
volatile int64_t t155 = -170615153880647LL;
uint32_t x629 = 3412U;
uint64_t x630 = 114332999LLU;
uint32_t x631 = 3079277U;
static int64_t x634 = -1LL;
int32_t x639 = INT32_MIN;
int32_t x646 = INT32_MIN;
int32_t x647 = -38838239;
static int8_t x653 = 2;
int16_t x656 = INT16_MAX;
static volatile uint64_t t163 = 269218642404700LLU;
static uint64_t x658 = 11336688LLU;
volatile int8_t x662 = 3;
volatile int8_t x663 = -1;
volatile int64_t x669 = INT64_MAX;
volatile uint32_t x676 = 10974U;
volatile int64_t t168 = 6914LL;
int32_t x677 = -1;
static int32_t x686 = INT32_MAX;
volatile uint64_t t173 = 3366LLU;
volatile int16_t x702 = 29;
static volatile int64_t x704 = 97022895736609751LL;
int16_t x708 = -1;
volatile uint32_t x711 = 22458U;
uint32_t x714 = 158U;
volatile int16_t x716 = INT16_MIN;
volatile uint8_t x717 = 0U;
static int64_t x719 = -1LL;
static int64_t t179 = 445LL;
static int64_t x722 = INT64_MAX;
uint64_t x724 = 5878900220347971LLU;
volatile uint64_t t180 = 936046LLU;
uint16_t x725 = 9U;
int8_t x733 = INT8_MAX;
static int32_t x735 = -1;
static int32_t x738 = INT32_MAX;
volatile int32_t t185 = -334864347;
int64_t x745 = INT64_MIN;
int32_t x748 = 4890834;
volatile int32_t x754 = INT32_MIN;
int16_t x761 = -1152;
int64_t x765 = -1LL;
static int64_t x766 = INT64_MIN;
volatile uint32_t x768 = 36977U;
volatile uint8_t x778 = 0U;
uint64_t t194 = 49966690LLU;
static int32_t x781 = -1;
volatile int64_t t197 = -1488005995LL;
uint32_t x797 = 1011778603U;
volatile int8_t x798 = -3;
int8_t x800 = INT8_MAX;


void f0(void) {
    	volatile uint64_t x1 = UINT64_MAX;
	volatile int8_t x2 = INT8_MAX;
	uint16_t x3 = UINT16_MAX;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 94737;

    t0 = (((x1<=x2)&x3)*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int64_t x6 = INT64_MAX;
	uint64_t x7 = 913842655946383555LLU;
	volatile uint64_t t1 = 288LLU;

    t1 = (((x5<=x6)&x7)*x8);

    if (t1 != 840722148646LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = INT64_MAX;
	volatile int32_t x12 = -23796;
	volatile int32_t t2 = 48;

    t2 = (((x9<=x10)&x11)*x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x14 = 2117654636U;
	int16_t x15 = 74;
	static volatile uint8_t x16 = 9U;
	int32_t t3 = -54496;

    t3 = (((x13<=x14)&x15)*x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int16_t x18 = -1;
	int8_t x20 = INT8_MIN;

    t4 = (((x17<=x18)&x19)*x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 6U;
	int16_t x22 = INT16_MIN;
	volatile uint8_t x23 = UINT8_MAX;
	static int32_t x24 = -1;
	int32_t t5 = 214781400;

    t5 = (((x21<=x22)&x23)*x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = -2;
	uint64_t x26 = 159858520375998667LLU;
	uint16_t x27 = UINT16_MAX;
	int32_t t6 = -234112;

    t6 = (((x25<=x26)&x27)*x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint64_t x29 = 109294LLU;
	uint16_t x31 = UINT16_MAX;
	static uint32_t x32 = 2U;

    t7 = (((x29<=x30)&x31)*x32);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = INT32_MIN;
	uint8_t x34 = 33U;
	volatile int16_t x36 = -1;

    t8 = (((x33<=x34)&x35)*x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = -434432LL;
	static volatile int8_t x39 = INT8_MIN;
	int16_t x40 = -1;

    t9 = (((x37<=x38)&x39)*x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MAX;
	volatile int32_t x42 = -1;
	int64_t x43 = INT64_MIN;
	volatile int32_t x44 = -6461;
	static volatile int64_t t10 = -37507011150335LL;

    t10 = (((x41<=x42)&x43)*x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = -1;
	int16_t x46 = INT16_MIN;
	static volatile int8_t x47 = INT8_MAX;
	int16_t x48 = -1;
	volatile int32_t t11 = -245593538;

    t11 = (((x45<=x46)&x47)*x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = 3327LLU;
	static int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	int8_t x52 = -1;
	int64_t t12 = -956178037095549029LL;

    t12 = (((x49<=x50)&x51)*x52);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = -10;
	uint32_t x54 = UINT32_MAX;
	int64_t x56 = -9727LL;
	static volatile int64_t t13 = -7LL;

    t13 = (((x53<=x54)&x55)*x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	int16_t x59 = -3669;
	static int32_t t14 = -1470833;

    t14 = (((x57<=x58)&x59)*x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	static int64_t x62 = INT64_MIN;
	volatile int16_t x63 = INT16_MAX;
	int8_t x64 = -30;
	int32_t t15 = 7060790;

    t15 = (((x61<=x62)&x63)*x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = UINT8_MAX;
	uint64_t x66 = 450LLU;
	volatile uint16_t x68 = 24U;
	volatile int32_t t16 = -442877;

    t16 = (((x65<=x66)&x67)*x68);

    if (t16 != 24) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 941U;
	uint32_t x70 = 121918U;
	volatile int32_t x71 = -39789601;
	int64_t x72 = -1LL;
	volatile int64_t t17 = -11804833307546848LL;

    t17 = (((x69<=x70)&x71)*x72);

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	uint32_t x75 = 501595U;
	static volatile uint32_t t18 = 796343821U;

    t18 = (((x73<=x74)&x75)*x76);

    if (t18 != 4294934528U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	int64_t x78 = INT64_MAX;

    t19 = (((x77<=x78)&x79)*x80);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = INT32_MIN;
	int32_t x83 = INT32_MIN;
	int32_t x84 = 1;
	volatile int32_t t20 = 158014167;

    t20 = (((x81<=x82)&x83)*x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x87 = INT8_MIN;
	volatile uint32_t t21 = 184987U;

    t21 = (((x85<=x86)&x87)*x88);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -90605748LL;
	uint8_t x90 = 18U;
	int16_t x91 = INT16_MIN;
	uint8_t x92 = 0U;

    t22 = (((x89<=x90)&x91)*x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	volatile int32_t x95 = -7848999;
	static int32_t x96 = INT32_MIN;
	volatile int32_t t23 = INT32_MIN;

    t23 = (((x93<=x94)&x95)*x96);

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 3791U;
	uint16_t x98 = 2U;
	int64_t x99 = -1LL;
	int8_t x100 = INT8_MAX;
	static int64_t t24 = -213127119231LL;

    t24 = (((x97<=x98)&x99)*x100);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x101 = INT8_MAX;
	static int32_t x102 = INT32_MIN;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = INT32_MAX;
	static volatile uint32_t t25 = 250U;

    t25 = (((x101<=x102)&x103)*x104);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x107 = -1;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t26 = 17529U;

    t26 = (((x105<=x106)&x107)*x108);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 0;
	static int8_t x110 = -58;
	static int32_t x111 = INT32_MAX;
	volatile uint8_t x112 = 107U;
	static int32_t t27 = 54232361;

    t27 = (((x109<=x110)&x111)*x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 565688;
	int64_t x114 = INT64_MAX;
	static uint16_t x115 = 7U;
	uint16_t x116 = 492U;
	int32_t t28 = -193137948;

    t28 = (((x113<=x114)&x115)*x116);

    if (t28 != 492) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	volatile int32_t x120 = 1001;
	static volatile int64_t t29 = 634742074130987LL;

    t29 = (((x117<=x118)&x119)*x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = INT64_MAX;
	int64_t x122 = INT64_MIN;
	uint32_t x123 = 66150781U;
	volatile int32_t x124 = INT32_MIN;
	static volatile uint32_t t30 = 7575849U;

    t30 = (((x121<=x122)&x123)*x124);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint8_t x125 = 40U;
	int8_t x126 = -9;
	int8_t x128 = -2;
	int32_t t31 = 37;

    t31 = (((x125<=x126)&x127)*x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x130 = 2U;
	int64_t x131 = -1LL;
	int64_t x132 = -1LL;
	static int64_t t32 = -1485616656684845062LL;

    t32 = (((x129<=x130)&x131)*x132);

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 1U;
	int64_t x134 = INT64_MIN;
	int64_t x135 = INT64_MIN;
	static uint32_t x136 = 1U;
	int64_t t33 = -3537700LL;

    t33 = (((x133<=x134)&x135)*x136);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint32_t x138 = UINT32_MAX;
	int32_t x139 = -324931;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = -936358453;

    t34 = (((x137<=x138)&x139)*x140);

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = INT16_MIN;
	volatile uint16_t x143 = UINT16_MAX;
	int64_t x144 = 209950748055944271LL;
	volatile int64_t t35 = -4223LL;

    t35 = (((x141<=x142)&x143)*x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x146 = -2;
	uint16_t x147 = UINT16_MAX;
	int8_t x148 = -12;

    t36 = (((x145<=x146)&x147)*x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	int32_t t37 = 21861;

    t37 = (((x149<=x150)&x151)*x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	static volatile uint32_t x154 = 0U;
	uint16_t x155 = UINT16_MAX;
	uint8_t x156 = 1U;
	int32_t t38 = -1092;

    t38 = (((x153<=x154)&x155)*x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	int8_t x158 = -1;
	int64_t x159 = 69428259094LL;
	volatile int64_t x160 = 33560487817658326LL;
	int64_t t39 = -6336129798792996LL;

    t39 = (((x157<=x158)&x159)*x160);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 2U;
	static int64_t x164 = -3298545049877LL;
	int64_t t40 = 3841LL;

    t40 = (((x161<=x162)&x163)*x164);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = INT16_MIN;
	uint16_t x166 = UINT16_MAX;

    t41 = (((x165<=x166)&x167)*x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 147U;
	int8_t x170 = INT8_MIN;
	int32_t t42 = 239092;

    t42 = (((x169<=x170)&x171)*x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 18U;
	static int16_t x174 = INT16_MIN;
	volatile int64_t x175 = INT64_MAX;
	uint32_t x176 = UINT32_MAX;
	int64_t t43 = -3669537623856849LL;

    t43 = (((x173<=x174)&x175)*x176);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x178 = UINT8_MAX;
	volatile int64_t x179 = -1LL;
	volatile uint8_t x180 = 16U;
	int64_t t44 = -126744882LL;

    t44 = (((x177<=x178)&x179)*x180);

    if (t44 != 16LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 55030;
	uint8_t x182 = 63U;
	static uint8_t x183 = 1U;
	uint32_t x184 = 20348305U;
	static uint32_t t45 = 195048966U;

    t45 = (((x181<=x182)&x183)*x184);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x186 = UINT32_MAX;
	int32_t x188 = INT32_MIN;

    t46 = (((x185<=x186)&x187)*x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x190 = 18U;
	int16_t x191 = INT16_MIN;
	uint16_t x192 = 2919U;
	int32_t t47 = -830;

    t47 = (((x189<=x190)&x191)*x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x194 = -1;
	static volatile uint64_t x195 = UINT64_MAX;
	int32_t x196 = 15878;
	volatile uint64_t t48 = 238606533620LLU;

    t48 = (((x193<=x194)&x195)*x196);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	int16_t x198 = INT16_MIN;
	static uint64_t x199 = 10282999560533LLU;
	int16_t x200 = -54;
	uint64_t t49 = 33369985625906LLU;

    t49 = (((x197<=x198)&x199)*x200);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = INT64_MAX;
	uint32_t x202 = 21341415U;
	volatile uint16_t x203 = 25U;
	int32_t x204 = -1;

    t50 = (((x201<=x202)&x203)*x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x205 = 13LL;
	int32_t x207 = 127;
	volatile int32_t t51 = 34517;

    t51 = (((x205<=x206)&x207)*x208);

    if (t51 != 16077) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = 321;
	volatile uint16_t x210 = 21731U;
	int32_t x211 = -136;
	int32_t t52 = -1747697;

    t52 = (((x209<=x210)&x211)*x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x213 = UINT32_MAX;
	uint32_t t53 = 98970U;

    t53 = (((x213<=x214)&x215)*x216);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MAX;
	int64_t x218 = -42432LL;
	static volatile int16_t x219 = INT16_MAX;
	volatile int8_t x220 = 11;
	volatile int32_t t54 = -279631;

    t54 = (((x217<=x218)&x219)*x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x221 = 41284441U;
	uint32_t x222 = UINT32_MAX;
	volatile int32_t t55 = -14215028;

    t55 = (((x221<=x222)&x223)*x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	uint64_t x226 = 18788212359865502LLU;
	int64_t x227 = -27771598944728LL;
	static volatile uint8_t x228 = UINT8_MAX;

    t56 = (((x225<=x226)&x227)*x228);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int64_t x230 = -13138LL;
	int64_t x231 = 1166357867350505040LL;
	uint64_t x232 = UINT64_MAX;

    t57 = (((x229<=x230)&x231)*x232);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x233 = INT64_MIN;
	uint8_t x234 = 78U;
	int64_t x235 = INT64_MAX;
	uint16_t x236 = 34U;

    t58 = (((x233<=x234)&x235)*x236);

    if (t58 != 34LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	static volatile uint32_t x238 = 1806080306U;
	volatile uint16_t x239 = 234U;
	static int8_t x240 = 0;
	int32_t t59 = 8;

    t59 = (((x237<=x238)&x239)*x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x241 = UINT32_MAX;
	uint16_t x242 = UINT16_MAX;
	volatile uint64_t x244 = 25313LLU;
	volatile uint64_t t60 = 8279466902966637LLU;

    t60 = (((x241<=x242)&x243)*x244);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x246 = INT8_MIN;
	int32_t x247 = -488;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t61 = 884921919703LLU;

    t61 = (((x245<=x246)&x247)*x248);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x249 = 8806719932093529728LLU;
	uint32_t x250 = 21612875U;
	static volatile int8_t x251 = INT8_MAX;
	volatile int16_t x252 = -1;
	static volatile int32_t t62 = -63662;

    t62 = (((x249<=x250)&x251)*x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = 44;
	volatile int8_t x254 = 40;
	uint16_t x255 = 899U;

    t63 = (((x253<=x254)&x255)*x256);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = UINT32_MAX;
	int8_t x258 = 25;
	volatile int64_t x259 = INT64_MIN;

    t64 = (((x257<=x258)&x259)*x260);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 15U;
	static int16_t x263 = -5646;

    t65 = (((x261<=x262)&x263)*x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x265 = 15177554U;
	int32_t x266 = INT32_MAX;
	int64_t x267 = INT64_MAX;
	static uint16_t x268 = 1U;
	int64_t t66 = -495194770673086815LL;

    t66 = (((x265<=x266)&x267)*x268);

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	int8_t x271 = 44;
	volatile uint64_t t67 = 7347619420266976635LLU;

    t67 = (((x269<=x270)&x271)*x272);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x273 = 10363710;
	int8_t x274 = INT8_MIN;
	uint32_t x275 = 2U;
	int8_t x276 = INT8_MAX;

    t68 = (((x273<=x274)&x275)*x276);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 4U;
	volatile int64_t x278 = -1LL;
	int64_t x279 = -3705169LL;
	static int16_t x280 = INT16_MAX;
	volatile int64_t t69 = -129627373287729LL;

    t69 = (((x277<=x278)&x279)*x280);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 0U;
	int8_t x283 = 1;
	int16_t x284 = INT16_MIN;
	int32_t t70 = 12239303;

    t70 = (((x281<=x282)&x283)*x284);

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = -1;
	volatile int16_t x286 = INT16_MAX;
	int8_t x287 = INT8_MAX;
	int32_t x288 = -1;
	volatile int32_t t71 = -643513;

    t71 = (((x285<=x286)&x287)*x288);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -1LL;
	volatile uint64_t x291 = 0LLU;
	static int64_t x292 = 583746458924128LL;
	static uint64_t t72 = 103717486844563LLU;

    t72 = (((x289<=x290)&x291)*x292);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x296 = 13;
	int32_t t73 = 5356418;

    t73 = (((x293<=x294)&x295)*x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -538;
	static volatile int32_t x300 = -1;
	static volatile int32_t t74 = 250417;

    t74 = (((x297<=x298)&x299)*x300);

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	int32_t x302 = INT32_MAX;
	int8_t x303 = INT8_MAX;
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = INT32_MIN;

    t75 = (((x301<=x302)&x303)*x304);

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = INT16_MAX;
	volatile int64_t t76 = -67187LL;

    t76 = (((x305<=x306)&x307)*x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x310 = 13U;
	static uint16_t x311 = UINT16_MAX;
	uint64_t x312 = 4514601LLU;
	volatile uint64_t t77 = 97396606173009LLU;

    t77 = (((x309<=x310)&x311)*x312);

    if (t77 != 4514601LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x313 = INT64_MIN;
	int16_t x314 = 4853;
	uint32_t x316 = 141U;
	static uint32_t t78 = 883724695U;

    t78 = (((x313<=x314)&x315)*x316);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x317 = UINT64_MAX;
	int8_t x318 = 1;
	int16_t x319 = INT16_MAX;
	int32_t t79 = -240210;

    t79 = (((x317<=x318)&x319)*x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 159733LLU;
	int16_t x322 = INT16_MIN;
	uint16_t x323 = 83U;
	volatile int8_t x324 = -1;
	volatile int32_t t80 = -18;

    t80 = (((x321<=x322)&x323)*x324);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x326 = -48;
	int32_t x327 = INT32_MAX;
	uint32_t x328 = 197U;
	uint32_t t81 = 3U;

    t81 = (((x325<=x326)&x327)*x328);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = UINT32_MAX;

    t82 = (((x329<=x330)&x331)*x332);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 0U;
	int8_t x335 = INT8_MIN;
	int16_t x336 = -1;
	static volatile int32_t t83 = 78248;

    t83 = (((x333<=x334)&x335)*x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x338 = 7U;
	volatile int8_t x340 = 58;
	volatile int32_t t84 = 32251265;

    t84 = (((x337<=x338)&x339)*x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	uint64_t x342 = UINT64_MAX;
	static uint8_t x343 = UINT8_MAX;
	volatile uint8_t x344 = UINT8_MAX;
	int32_t t85 = 934;

    t85 = (((x341<=x342)&x343)*x344);

    if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	int16_t x346 = -1;
	static volatile uint8_t x347 = UINT8_MAX;
	static volatile uint64_t t86 = 14LLU;

    t86 = (((x345<=x346)&x347)*x348);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	int8_t x350 = 1;
	int8_t x351 = INT8_MIN;
	int32_t t87 = 48620514;

    t87 = (((x349<=x350)&x351)*x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = INT64_MAX;
	static volatile int8_t x355 = INT8_MIN;

    t88 = (((x353<=x354)&x355)*x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x358 = INT8_MAX;
	int16_t x359 = INT16_MIN;
	int8_t x360 = INT8_MIN;
	int32_t t89 = 856414820;

    t89 = (((x357<=x358)&x359)*x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MIN;
	uint8_t x363 = UINT8_MAX;
	volatile uint64_t x364 = 1603350086322LLU;
	volatile uint64_t t90 = 15LLU;

    t90 = (((x361<=x362)&x363)*x364);

    if (t90 != 1603350086322LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = INT16_MAX;
	int32_t t91 = -3;

    t91 = (((x365<=x366)&x367)*x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = 39U;
	uint8_t x370 = UINT8_MAX;
	int8_t x371 = 0;
	volatile int64_t x372 = 16825789214221315LL;
	volatile int64_t t92 = 230469LL;

    t92 = (((x369<=x370)&x371)*x372);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x375 = -1974743461773412LL;
	static volatile int8_t x376 = INT8_MAX;
	static volatile int64_t t93 = -239368294LL;

    t93 = (((x373<=x374)&x375)*x376);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = 5;
	int8_t x378 = -13;
	volatile uint64_t x379 = UINT64_MAX;
	uint16_t x380 = 216U;
	static volatile uint64_t t94 = 258618LLU;

    t94 = (((x377<=x378)&x379)*x380);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x381 = UINT16_MAX;
	static int16_t x382 = INT16_MAX;
	static int32_t x383 = 23;
	int64_t x384 = INT64_MIN;
	static int64_t t95 = 2613661296245684LL;

    t95 = (((x381<=x382)&x383)*x384);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x385 = -1;
	static volatile int16_t x388 = INT16_MAX;

    t96 = (((x385<=x386)&x387)*x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x390 = -1;
	int64_t x392 = INT64_MIN;
	int64_t t97 = 1LL;

    t97 = (((x389<=x390)&x391)*x392);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x393 = 25U;
	int16_t x394 = -105;
	int32_t x395 = 1565;
	volatile uint32_t x396 = 38U;
	uint32_t t98 = 941U;

    t98 = (((x393<=x394)&x395)*x396);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x398 = INT32_MAX;
	uint64_t x399 = 87731154LLU;
	int8_t x400 = -1;
	volatile uint64_t t99 = 553540LLU;

    t99 = (((x397<=x398)&x399)*x400);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = INT32_MIN;
	uint8_t x402 = 1U;
	uint8_t x404 = 0U;
	static int64_t t100 = 458144738LL;

    t100 = (((x401<=x402)&x403)*x404);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x406 = 371312LLU;
	uint16_t x407 = 459U;
	int16_t x408 = -1;
	volatile int32_t t101 = 25;

    t101 = (((x405<=x406)&x407)*x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = -1;
	volatile uint16_t x410 = UINT16_MAX;
	volatile int8_t x412 = -1;
	static volatile int64_t t102 = -64161690211838723LL;

    t102 = (((x409<=x410)&x411)*x412);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 4290U;
	static uint8_t x414 = UINT8_MAX;
	uint64_t x416 = UINT64_MAX;
	uint64_t t103 = 124389LLU;

    t103 = (((x413<=x414)&x415)*x416);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 21;
	volatile int8_t x418 = INT8_MIN;
	static volatile uint16_t x420 = UINT16_MAX;
	static volatile int64_t t104 = 123214162LL;

    t104 = (((x417<=x418)&x419)*x420);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	int8_t x422 = -7;
	int8_t x423 = -47;
	static int8_t x424 = -7;
	volatile int32_t t105 = 1453;

    t105 = (((x421<=x422)&x423)*x424);

    if (t105 != -7) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	int64_t x426 = INT64_MIN;
	int16_t x428 = 9;
	int32_t t106 = -37;

    t106 = (((x425<=x426)&x427)*x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x429 = INT16_MIN;
	uint16_t x430 = UINT16_MAX;
	int8_t x431 = INT8_MAX;
	volatile int8_t x432 = -1;
	volatile int32_t t107 = 7;

    t107 = (((x429<=x430)&x431)*x432);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -483623328462363349LL;
	uint16_t x434 = UINT16_MAX;
	int8_t x435 = INT8_MIN;
	int8_t x436 = 32;
	int32_t t108 = -83338605;

    t108 = (((x433<=x434)&x435)*x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = INT32_MIN;
	uint8_t x438 = 28U;
	int8_t x439 = -1;
	static uint32_t x440 = 179U;
	uint32_t t109 = 9844U;

    t109 = (((x437<=x438)&x439)*x440);

    if (t109 != 179U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	int8_t x444 = -6;
	int32_t t110 = -1;

    t110 = (((x441<=x442)&x443)*x444);

    if (t110 != -6) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	volatile uint8_t x447 = 77U;
	static volatile int32_t t111 = 1974587;

    t111 = (((x445<=x446)&x447)*x448);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	uint64_t x451 = 6041029LLU;
	int32_t x452 = INT32_MAX;
	uint64_t t112 = 87566110LLU;

    t112 = (((x449<=x450)&x451)*x452);

    if (t112 != 2147483647LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x453 = INT64_MAX;
	int8_t x454 = -14;
	uint8_t x455 = UINT8_MAX;
	volatile int16_t x456 = -1;
	int32_t t113 = 182;

    t113 = (((x453<=x454)&x455)*x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x458 = 607U;
	int32_t x459 = INT32_MIN;
	int16_t x460 = INT16_MIN;
	volatile int32_t t114 = -2;

    t114 = (((x457<=x458)&x459)*x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	int16_t x462 = INT16_MIN;
	uint64_t x463 = 1230881LLU;
	int16_t x464 = -6272;

    t115 = (((x461<=x462)&x463)*x464);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x465 = 6724882927838240LL;
	int16_t x466 = -1;
	int16_t x467 = 7;
	int32_t x468 = INT32_MIN;
	volatile int32_t t116 = 14;

    t116 = (((x465<=x466)&x467)*x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	int8_t x470 = INT8_MIN;
	volatile int16_t x471 = INT16_MAX;
	int64_t x472 = INT64_MIN;
	static int64_t t117 = INT64_MIN;

    t117 = (((x469<=x470)&x471)*x472);

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x473 = INT16_MAX;
	uint16_t x474 = UINT16_MAX;
	int32_t x476 = 40148;
	static volatile uint32_t t118 = 859293055U;

    t118 = (((x473<=x474)&x475)*x476);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x478 = INT16_MAX;
	volatile int64_t x480 = -137737366417919LL;
	int64_t t119 = -838LL;

    t119 = (((x477<=x478)&x479)*x480);

    if (t119 != -137737366417919LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	volatile uint32_t x482 = 3436U;
	int32_t x483 = -509357530;
	volatile uint32_t x484 = 0U;
	static uint32_t t120 = 207309U;

    t120 = (((x481<=x482)&x483)*x484);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -7;
	static int32_t x486 = INT32_MAX;
	uint16_t x488 = 24058U;
	volatile int32_t t121 = 110858;

    t121 = (((x485<=x486)&x487)*x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x490 = -38582LL;
	int8_t x491 = -1;
	static volatile uint64_t t122 = 612279774498218319LLU;

    t122 = (((x489<=x490)&x491)*x492);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = UINT64_MAX;
	volatile uint16_t x495 = 3U;
	int8_t x496 = -1;

    t123 = (((x493<=x494)&x495)*x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x497 = 23128510691LLU;
	static int16_t x498 = INT16_MAX;
	int16_t x499 = INT16_MIN;
	int32_t x500 = 0;
	volatile int32_t t124 = 6529;

    t124 = (((x497<=x498)&x499)*x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = 14U;
	int32_t x503 = -189409378;
	int32_t x504 = -31016984;
	static volatile int32_t t125 = 14712;

    t125 = (((x501<=x502)&x503)*x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = -1;
	static uint64_t x506 = 49392876LLU;
	volatile uint32_t x507 = 101642U;
	uint64_t x508 = 129349625287134960LLU;
	uint64_t t126 = 219086LLU;

    t126 = (((x505<=x506)&x507)*x508);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x509 = INT32_MIN;
	static volatile uint32_t x510 = 487315U;
	uint32_t x512 = 55937U;
	volatile uint32_t t127 = 0U;

    t127 = (((x509<=x510)&x511)*x512);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x514 = -831341306;
	int16_t x515 = 23;
	int32_t x516 = INT32_MIN;
	int32_t t128 = INT32_MIN;

    t128 = (((x513<=x514)&x515)*x516);

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x519 = 22;
	int32_t t129 = 707676;

    t129 = (((x517<=x518)&x519)*x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = 130820U;
	int32_t x522 = -1;
	int32_t x523 = -1;
	static uint32_t x524 = 2126U;

    t130 = (((x521<=x522)&x523)*x524);

    if (t130 != 2126U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x528 = INT16_MAX;
	volatile uint64_t t131 = 142360622391022364LLU;

    t131 = (((x525<=x526)&x527)*x528);

    if (t131 != 32767LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MAX;
	int8_t x530 = INT8_MIN;
	int32_t x531 = -7355;
	int32_t t132 = 71;

    t132 = (((x529<=x530)&x531)*x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = 0;
	static volatile int8_t x534 = -22;
	uint8_t x535 = UINT8_MAX;
	int64_t x536 = 76389554683340LL;
	volatile int64_t t133 = 48635958LL;

    t133 = (((x533<=x534)&x535)*x536);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x538 = 1;
	int64_t x539 = -143525751304LL;
	static int32_t x540 = INT32_MAX;
	int64_t t134 = 1104647472429153992LL;

    t134 = (((x537<=x538)&x539)*x540);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 4148464357LL;
	static uint64_t x542 = 1LLU;
	uint8_t x543 = 1U;
	volatile int32_t t135 = 17;

    t135 = (((x541<=x542)&x543)*x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x545 = INT32_MIN;
	int8_t x546 = 1;
	static uint32_t x547 = 18775829U;
	int64_t t136 = -700LL;

    t136 = (((x545<=x546)&x547)*x548);

    if (t136 != -1546599944LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile int16_t x550 = INT16_MIN;
	int32_t x552 = INT32_MIN;
	volatile int32_t t137 = 12733771;

    t137 = (((x549<=x550)&x551)*x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x554 = INT32_MAX;
	uint32_t x556 = 1075223U;
	int64_t t138 = 3515486053639LL;

    t138 = (((x553<=x554)&x555)*x556);

    if (t138 != 1075223LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = INT8_MAX;
	int8_t x558 = INT8_MAX;
	volatile int32_t x560 = 3;
	static uint64_t t139 = 35LLU;

    t139 = (((x557<=x558)&x559)*x560);

    if (t139 != 3LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 0U;
	volatile uint16_t x562 = 226U;
	static int32_t x564 = INT32_MIN;

    t140 = (((x561<=x562)&x563)*x564);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MAX;
	volatile uint8_t x567 = 6U;
	int32_t x568 = INT32_MIN;

    t141 = (((x565<=x566)&x567)*x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x569 = -1;

    t142 = (((x569<=x570)&x571)*x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	int64_t x574 = -1LL;
	uint64_t x575 = UINT64_MAX;
	static int32_t x576 = INT32_MAX;
	volatile uint64_t t143 = 90053656300678412LLU;

    t143 = (((x573<=x574)&x575)*x576);

    if (t143 != 2147483647LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -14816605;
	static volatile uint32_t x578 = 56537165U;
	volatile uint64_t x579 = 25558LLU;
	uint8_t x580 = UINT8_MAX;
	uint64_t t144 = 12796175585906LLU;

    t144 = (((x577<=x578)&x579)*x580);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x581 = 24286U;
	int16_t x583 = -1;
	volatile uint64_t x584 = 166135880007LLU;
	uint64_t t145 = 3197613486705318LLU;

    t145 = (((x581<=x582)&x583)*x584);

    if (t145 != 166135880007LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x585 = 1363718U;
	uint16_t x586 = 0U;
	int64_t x587 = INT64_MIN;
	static uint32_t x588 = UINT32_MAX;
	int64_t t146 = 984310038LL;

    t146 = (((x585<=x586)&x587)*x588);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = -10432388382755426LL;
	static int8_t x590 = INT8_MIN;
	int64_t x592 = -1LL;
	int64_t t147 = -32235LL;

    t147 = (((x589<=x590)&x591)*x592);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	uint16_t x594 = 19U;
	volatile int32_t x595 = -62058156;
	volatile uint8_t x596 = 59U;
	int32_t t148 = 2681771;

    t148 = (((x593<=x594)&x595)*x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint8_t x597 = 0U;
	int32_t x598 = 139317;
	uint32_t x599 = UINT32_MAX;
	volatile int8_t x600 = 0;
	uint32_t t149 = 14616509U;

    t149 = (((x597<=x598)&x599)*x600);

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	uint16_t x602 = 0U;
	int32_t t150 = -467809598;

    t150 = (((x601<=x602)&x603)*x604);

    if (t150 != -288446936) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint16_t x605 = UINT16_MAX;
	int8_t x607 = -1;
	uint64_t x608 = UINT64_MAX;
	uint64_t t151 = 710208546549LLU;

    t151 = (((x605<=x606)&x607)*x608);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = 2914LLU;
	uint64_t x610 = UINT64_MAX;
	uint16_t x612 = UINT16_MAX;
	int32_t t152 = 26654;

    t152 = (((x609<=x610)&x611)*x612);

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	uint8_t x614 = UINT8_MAX;
	volatile uint64_t x616 = UINT64_MAX;
	static uint64_t t153 = UINT64_MAX;

    t153 = (((x613<=x614)&x615)*x616);

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = 1;
	int16_t x619 = INT16_MAX;
	int32_t x620 = -152204;
	int32_t t154 = -323;

    t154 = (((x617<=x618)&x619)*x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x624 = 21U;

    t155 = (((x621<=x622)&x623)*x624);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 744U;
	volatile int8_t x626 = -1;
	int16_t x627 = INT16_MIN;
	uint64_t x628 = UINT64_MAX;
	volatile uint64_t t156 = 151709LLU;

    t156 = (((x625<=x626)&x627)*x628);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x632 = 65U;
	uint32_t t157 = 90U;

    t157 = (((x629<=x630)&x631)*x632);

    if (t157 != 65U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MAX;
	volatile uint8_t x635 = 9U;
	int64_t x636 = INT64_MIN;
	static int64_t t158 = -126582233LL;

    t158 = (((x633<=x634)&x635)*x636);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x637 = 1340739630109LL;
	int8_t x638 = INT8_MIN;
	int8_t x640 = 2;
	static int32_t t159 = 24222;

    t159 = (((x637<=x638)&x639)*x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = 881U;
	int64_t x642 = 3395686608054448LL;
	int32_t x643 = -7;
	uint32_t x644 = 44463U;
	volatile uint32_t t160 = 1448990676U;

    t160 = (((x641<=x642)&x643)*x644);

    if (t160 != 44463U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = UINT32_MAX;
	int64_t x648 = -1LL;
	int64_t t161 = 576LL;

    t161 = (((x645<=x646)&x647)*x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = UINT8_MAX;
	uint64_t x650 = UINT64_MAX;
	static volatile int64_t x651 = INT64_MIN;
	int32_t x652 = -1820300;
	volatile int64_t t162 = 4274539LL;

    t162 = (((x649<=x650)&x651)*x652);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x654 = INT8_MIN;
	uint64_t x655 = 278830084LLU;

    t163 = (((x653<=x654)&x655)*x656);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	int32_t x659 = INT32_MAX;
	static volatile uint32_t x660 = UINT32_MAX;
	volatile uint32_t t164 = 3881U;

    t164 = (((x657<=x658)&x659)*x660);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 16943U;
	int16_t x664 = -998;
	static volatile int32_t t165 = 5410;

    t165 = (((x661<=x662)&x663)*x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x665 = 658218LLU;
	volatile uint16_t x666 = 3985U;
	uint64_t x667 = 225443148576LLU;
	volatile int64_t x668 = INT64_MAX;
	static uint64_t t166 = 73LLU;

    t166 = (((x665<=x666)&x667)*x668);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x670 = INT16_MAX;
	int64_t x671 = -1LL;
	static int32_t x672 = INT32_MIN;
	int64_t t167 = -2108343312652325LL;

    t167 = (((x669<=x670)&x671)*x672);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x673 = UINT8_MAX;
	int64_t x674 = 1799552668LL;
	int64_t x675 = INT64_MIN;

    t168 = (((x673<=x674)&x675)*x676);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x678 = 10LLU;
	volatile int64_t x679 = 220125196153LL;
	int64_t x680 = 900643066886LL;
	volatile int64_t t169 = -25954662095216LL;

    t169 = (((x677<=x678)&x679)*x680);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	int32_t x682 = INT32_MIN;
	int32_t x683 = INT32_MIN;
	int64_t x684 = 95254815422146LL;
	volatile int64_t t170 = 3324291640LL;

    t170 = (((x681<=x682)&x683)*x684);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x685 = INT32_MIN;
	int64_t x687 = -8521879752LL;
	uint64_t x688 = 4336137615613LLU;
	volatile uint64_t t171 = 10016888688LLU;

    t171 = (((x685<=x686)&x687)*x688);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	volatile int16_t x690 = INT16_MIN;
	int64_t x691 = INT64_MAX;
	static uint64_t x692 = 15968164141559LLU;
	volatile uint64_t t172 = 3187301481868LLU;

    t172 = (((x689<=x690)&x691)*x692);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = 0;
	int16_t x694 = INT16_MIN;
	int16_t x695 = INT16_MIN;
	uint64_t x696 = 51368223030100875LLU;

    t173 = (((x693<=x694)&x695)*x696);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = INT32_MAX;
	static volatile int16_t x698 = -1;
	static int64_t x699 = -1LL;
	uint64_t x700 = 65726896LLU;
	volatile uint64_t t174 = 30903077938LLU;

    t174 = (((x697<=x698)&x699)*x700);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = 11795;
	static uint16_t x703 = 16U;
	volatile int64_t t175 = -1269779508257958077LL;

    t175 = (((x701<=x702)&x703)*x704);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 1U;
	static volatile uint64_t x706 = 571198LLU;
	uint64_t x707 = 4934202938426LLU;
	static volatile uint64_t t176 = 185085479314587022LLU;

    t176 = (((x705<=x706)&x707)*x708);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = -1;
	int32_t x710 = INT32_MIN;
	static uint16_t x712 = 1U;
	volatile uint32_t t177 = 497U;

    t177 = (((x709<=x710)&x711)*x712);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -1;
	volatile uint64_t x715 = 5479444783853356584LLU;
	static volatile uint64_t t178 = 1499687984943937636LLU;

    t178 = (((x713<=x714)&x715)*x716);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = INT16_MIN;
	int16_t x720 = INT16_MAX;

    t179 = (((x717<=x718)&x719)*x720);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 97192444U;
	uint32_t x723 = 47U;

    t180 = (((x721<=x722)&x723)*x724);

    if (t180 != 5878900220347971LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x726 = 56251590935191LLU;
	static volatile uint8_t x727 = 3U;
	static int64_t x728 = INT64_MIN;
	volatile int64_t t181 = INT64_MIN;

    t181 = (((x725<=x726)&x727)*x728);

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	static volatile uint16_t x730 = UINT16_MAX;
	int32_t x731 = INT32_MIN;
	int16_t x732 = -1;
	volatile int32_t t182 = -215701451;

    t182 = (((x729<=x730)&x731)*x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = -1;
	int8_t x736 = -7;
	int32_t t183 = -2793;

    t183 = (((x733<=x734)&x735)*x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	int8_t x739 = INT8_MIN;
	int16_t x740 = 147;
	volatile int32_t t184 = 106771140;

    t184 = (((x737<=x738)&x739)*x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x741 = INT32_MIN;
	uint8_t x742 = 1U;
	static int8_t x743 = -11;
	int8_t x744 = INT8_MIN;

    t185 = (((x741<=x742)&x743)*x744);

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x746 = INT32_MIN;
	int64_t x747 = -1556375229060491LL;
	volatile int64_t t186 = 562564525286LL;

    t186 = (((x745<=x746)&x747)*x748);

    if (t186 != 4890834LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x749 = UINT16_MAX;
	volatile int16_t x750 = -1;
	int64_t x751 = INT64_MAX;
	volatile int32_t x752 = -1;
	volatile int64_t t187 = -1802759170428366080LL;

    t187 = (((x749<=x750)&x751)*x752);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = UINT8_MAX;
	int32_t x755 = 0;
	int64_t x756 = -24467338LL;
	int64_t t188 = 1460946912014070899LL;

    t188 = (((x753<=x754)&x755)*x756);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -41;
	uint32_t x758 = 57603115U;
	static int8_t x759 = INT8_MIN;
	volatile int16_t x760 = -8188;
	int32_t t189 = 818882;

    t189 = (((x757<=x758)&x759)*x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = INT16_MIN;
	uint16_t x763 = 5U;
	static int64_t x764 = -3LL;
	static volatile int64_t t190 = 17335526218502LL;

    t190 = (((x761<=x762)&x763)*x764);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x767 = 686464934;
	uint32_t t191 = 13142U;

    t191 = (((x765<=x766)&x767)*x768);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x769 = UINT64_MAX;
	int16_t x770 = INT16_MIN;
	static volatile uint32_t x771 = 34U;
	static int8_t x772 = 7;
	volatile uint32_t t192 = 0U;

    t192 = (((x769<=x770)&x771)*x772);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = -1580;
	static uint32_t x774 = 0U;
	uint16_t x775 = 165U;
	volatile int64_t x776 = 499505398LL;
	volatile int64_t t193 = 414541215921LL;

    t193 = (((x773<=x774)&x775)*x776);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x777 = INT32_MAX;
	volatile uint64_t x779 = 12424LLU;
	volatile int16_t x780 = INT16_MIN;

    t194 = (((x777<=x778)&x779)*x780);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x782 = UINT8_MAX;
	uint64_t x783 = 3094063074LLU;
	int16_t x784 = 85;
	uint64_t t195 = 35550LLU;

    t195 = (((x781<=x782)&x783)*x784);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x785 = 21U;
	int8_t x786 = INT8_MAX;
	int8_t x787 = 1;
	uint8_t x788 = 18U;
	int32_t t196 = -82346;

    t196 = (((x785<=x786)&x787)*x788);

    if (t196 != 18) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = UINT64_MAX;
	uint32_t x790 = 18101U;
	int8_t x791 = INT8_MAX;
	int64_t x792 = -1LL;

    t197 = (((x789<=x790)&x791)*x792);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 1U;
	int64_t x794 = 1541289LL;
	int32_t x795 = INT32_MIN;
	uint16_t x796 = UINT16_MAX;
	static volatile int32_t t198 = -288525;

    t198 = (((x793<=x794)&x795)*x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x799 = -1;
	int32_t t199 = 447855;

    t199 = (((x797<=x798)&x799)*x800);

    if (t199 != 127) { NG(); } else { ; }
	
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

