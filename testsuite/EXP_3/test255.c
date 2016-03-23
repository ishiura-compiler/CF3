
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

volatile int64_t x4 = INT64_MIN;
static volatile int64_t t0 = INT64_MAX;
volatile int32_t x7 = INT32_MIN;
static uint32_t x8 = 227574U;
uint8_t x9 = UINT8_MAX;
static uint32_t t2 = 2U;
uint16_t x16 = UINT16_MAX;
static int16_t x24 = INT16_MIN;
volatile int16_t x25 = 1;
int64_t x27 = INT64_MIN;
static int16_t x29 = 4;
uint8_t x31 = 3U;
volatile int8_t x35 = INT8_MIN;
static int8_t x52 = 1;
uint64_t x54 = 106859971441070041LLU;
uint64_t t12 = 19428703LLU;
uint32_t x58 = 754U;
static uint64_t x61 = 6901310LLU;
uint64_t x65 = 62995855503162460LLU;
uint64_t x66 = UINT64_MAX;
uint32_t x84 = 126U;
static volatile int64_t x89 = 20223LL;
int8_t x106 = 1;
int64_t x108 = 1LL;
static int64_t x118 = 548LL;
int64_t x120 = INT64_MIN;
static volatile uint32_t x124 = UINT32_MAX;
volatile uint64_t t25 = 463LLU;
int32_t x126 = INT32_MAX;
uint32_t x130 = 240610276U;
volatile int16_t x146 = -1;
int16_t x147 = INT16_MIN;
volatile int16_t x154 = -247;
volatile uint64_t t31 = 545465109105577LLU;
int8_t x163 = INT8_MAX;
volatile int8_t x179 = INT8_MAX;
volatile uint32_t x187 = UINT32_MAX;
uint32_t x188 = 2137852513U;
int64_t x189 = INT64_MIN;
int8_t x193 = 18;
volatile int32_t t40 = 29;
int8_t x207 = -23;
int16_t x212 = INT16_MAX;
static volatile int32_t x221 = INT32_MIN;
int16_t x226 = -1;
volatile int8_t x229 = INT8_MIN;
int16_t x239 = 15430;
uint64_t t50 = 4050LLU;
int16_t x265 = 49;
int32_t x267 = INT32_MIN;
static int64_t x268 = INT64_MIN;
int16_t x271 = -872;
int16_t x273 = INT16_MIN;
uint32_t t55 = 2U;
uint64_t x277 = 14048201LLU;
uint8_t x291 = 4U;
uint64_t x292 = 248571LLU;
volatile uint16_t x295 = 0U;
volatile int32_t x296 = 255954;
static volatile int32_t x298 = -1;
uint16_t x301 = 4U;
uint16_t x309 = 1U;
int64_t x313 = -1870038751493187LL;
int32_t x315 = INT32_MAX;
int64_t x317 = INT64_MAX;
int32_t x318 = INT32_MIN;
int32_t x326 = -1;
uint64_t t67 = 346810844923LLU;
uint8_t x338 = UINT8_MAX;
uint8_t x339 = 19U;
static volatile int16_t x350 = -1;
int8_t x351 = -1;
int8_t x353 = INT8_MAX;
volatile int8_t x363 = INT8_MIN;
volatile uint64_t t72 = 37640886950LLU;
int32_t x365 = -1;
uint64_t t73 = 13LLU;
volatile uint64_t t75 = 46LLU;
uint16_t x381 = 1470U;
static int16_t x386 = INT16_MIN;
int8_t x394 = INT8_MIN;
volatile uint16_t x398 = 1U;
static int8_t x402 = INT8_MAX;
int16_t x406 = -1;
int64_t x417 = INT64_MAX;
int64_t x423 = 63589LL;
static uint8_t x425 = UINT8_MAX;
uint8_t x435 = 2U;
uint64_t t88 = 1630228503591LLU;
static uint64_t x442 = 12464406741504LLU;
volatile int32_t x445 = -1;
uint32_t x447 = 124U;
uint16_t x450 = 2U;
int8_t x452 = INT8_MIN;
uint16_t x453 = UINT16_MAX;
uint16_t x460 = 13U;
volatile uint16_t x466 = 41U;
static volatile uint64_t t97 = 1495LLU;
uint32_t x476 = UINT32_MAX;
uint32_t t98 = 340U;
uint64_t t99 = 15778052027187LLU;
static int64_t x488 = -1LL;
uint64_t t101 = 1057554255LLU;
static volatile int32_t x490 = 127647;
static volatile int32_t x492 = -1;
int32_t t102 = 144050165;
int8_t x493 = INT8_MIN;
uint64_t x496 = 3987346652722812LLU;
static int64_t t104 = 627LL;
static int32_t x503 = INT32_MAX;
int16_t x508 = INT16_MIN;
static int64_t t106 = -63030300085LL;
uint64_t t107 = 280877967934LLU;
int32_t x518 = -11222310;
static int8_t x520 = 2;
int8_t x521 = INT8_MIN;
static int32_t x523 = -1999235;
static volatile uint32_t t109 = 64712708U;
static uint32_t x526 = UINT32_MAX;
uint32_t x528 = 41U;
int32_t x540 = -1;
uint64_t x541 = 17247813234177327LLU;
uint16_t x542 = 6U;
int16_t x543 = 0;
uint8_t x549 = 58U;
int8_t x560 = INT8_MIN;
volatile uint64_t x563 = 19327979LLU;
int16_t x568 = -1;
uint64_t t119 = 53LLU;
int16_t x575 = INT16_MIN;
int32_t x578 = -1;
uint64_t x586 = UINT64_MAX;
uint64_t x591 = 5131225272724LLU;
volatile int8_t x593 = 9;
uint8_t x598 = UINT8_MAX;
uint8_t x606 = 2U;
int16_t x607 = -1;
int32_t x608 = INT32_MIN;
uint32_t t127 = 21943558U;
volatile uint8_t x612 = UINT8_MAX;
uint32_t x618 = UINT32_MAX;
uint32_t x619 = UINT32_MAX;
volatile int8_t x621 = 0;
uint64_t x631 = UINT64_MAX;
int32_t x633 = 13;
uint8_t x640 = 86U;
uint32_t t134 = 1U;
uint32_t x648 = 2387U;
static uint32_t t135 = 22U;
volatile int16_t x653 = -149;
uint64_t t136 = 28LLU;
int64_t x664 = INT64_MIN;
uint64_t x665 = 45399135LLU;
int16_t x667 = 9088;
volatile uint64_t t139 = 708804986243653LLU;
int32_t x670 = -1;
static uint64_t x676 = 206LLU;
int16_t x678 = -1;
volatile int8_t x683 = INT8_MAX;
volatile uint64_t t143 = 62542LLU;
int32_t x689 = -1;
int8_t x692 = 1;
volatile int16_t x693 = -182;
uint32_t t145 = 42U;
volatile uint64_t t146 = 18948LLU;
uint8_t x729 = 0U;
int8_t x731 = INT8_MAX;
int8_t x739 = INT8_MIN;
static int32_t t154 = -5914;
int16_t x747 = 7408;
int64_t x755 = INT64_MIN;
int64_t x756 = -661611LL;
int64_t x760 = -29115764290038LL;
volatile int64_t t158 = -74215186112LL;
int16_t x778 = INT16_MIN;
volatile int8_t x793 = 5;
static int8_t x797 = -1;
uint64_t x799 = 9790378761LLU;
volatile uint64_t t163 = 55736382620155624LLU;
int64_t x809 = INT64_MAX;
static int64_t t165 = 249162671242LL;
volatile uint64_t t166 = 461645987460LLU;
int64_t x827 = INT64_MAX;
int16_t x831 = INT16_MIN;
uint16_t x837 = 0U;
int32_t x838 = -5;
int64_t x867 = INT64_MIN;
static int64_t t175 = 119318355387761452LL;
int32_t x880 = -190962;
volatile int64_t t177 = 0LL;
volatile uint8_t x885 = 52U;
int8_t x895 = INT8_MAX;
uint16_t x897 = UINT16_MAX;
volatile int32_t t181 = -5873;
uint8_t x908 = 22U;
static int8_t x909 = -1;
int8_t x913 = INT8_MIN;
int32_t x916 = INT32_MIN;
int32_t x919 = 1;
uint8_t x923 = 1U;
static uint32_t x928 = 16210U;
volatile int64_t x930 = -1LL;
int32_t x934 = INT32_MAX;
int8_t x936 = -1;
int64_t x951 = -1LL;
static volatile uint64_t t195 = 30352797560386024LLU;
uint16_t x970 = 1U;
uint64_t t198 = 78498579334LLU;
uint64_t t199 = 77589264246LLU;


void f0(void) {
    	int8_t x1 = 1;
	uint16_t x2 = UINT16_MAX;
	static volatile int32_t x3 = -1;

    t0 = ((x1%x2)*(x3-x4));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	int64_t x6 = -1LL;
	volatile int64_t t1 = -1087400968565396318LL;

    t1 = ((x5%x6)*(x7-x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x10 = UINT32_MAX;
	int8_t x11 = INT8_MAX;
	uint16_t x12 = UINT16_MAX;

    t2 = ((x9%x10)*(x11-x12));

    if (t2 != 4278288256U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	uint64_t x14 = 3552LLU;
	uint64_t x15 = 1097343714691812LLU;
	uint64_t t3 = 351156LLU;

    t3 = ((x13%x14)*(x15-x16));

    if (t3 != 174477650625578043LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	static volatile int16_t x18 = 521;
	static int32_t x19 = -1;
	volatile int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 1773759;

    t4 = ((x17%x18)*(x19-x20));

    if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	volatile int64_t x22 = -375488649LL;
	int8_t x23 = 1;
	volatile int64_t t5 = -4358753761150312LL;

    t5 = ((x21%x22)*(x23-x24));

    if (t5 != -1073774592LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = 30;
	volatile uint64_t x28 = 5LLU;
	uint64_t t6 = 1LLU;

    t6 = ((x25%x26)*(x27-x28));

    if (t6 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x30 = 553;
	uint32_t x32 = 306U;
	uint32_t t7 = 73U;

    t7 = ((x29%x30)*(x31-x32));

    if (t7 != 4294966084U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	int16_t x34 = -318;
	static int64_t x36 = -76641599982654LL;
	volatile int64_t t8 = 777165LL;

    t8 = ((x33%x34)*(x35-x36));

    if (t8 != 5594836798724398LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = 98612;
	static uint32_t x38 = 4290U;
	uint64_t x39 = 29634431809712LLU;
	volatile int64_t x40 = INT64_MIN;
	volatile uint64_t t9 = 348569LLU;

    t9 = ((x37%x38)*(x39-x40));

    if (t9 != 125412915418701184LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MIN;
	volatile int32_t x46 = INT32_MIN;
	int16_t x47 = 58;
	uint16_t x48 = UINT16_MAX;
	static volatile int64_t t10 = 723268408450865LL;

    t10 = ((x45%x46)*(x47-x48));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -264042175;
	uint64_t x50 = 13558627LLU;
	static int64_t x51 = -46612050831038718LL;
	uint64_t t11 = 687LLU;

    t11 = ((x49%x50)*(x51-x52));

    if (t11 != 16148063755573263620LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x53 = INT8_MIN;
	int16_t x55 = 84;
	uint16_t x56 = UINT16_MAX;

    t12 = ((x53%x54)*(x55-x56));

    if (t12 != 16301136968762443972LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 1;
	volatile int64_t x59 = INT64_MIN;
	int64_t x60 = INT64_MIN;
	int64_t t13 = -192652LL;

    t13 = ((x57%x58)*(x59-x60));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x62 = INT64_MAX;
	uint64_t x63 = 3386LLU;
	int64_t x64 = INT64_MAX;
	uint64_t t14 = 8784LLU;

    t14 = ((x61%x62)*(x63-x64));

    if (t14 != 23374736970LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x67 = 61;
	uint64_t x68 = 43060LLU;
	uint64_t t15 = 136433692400LLU;

    t15 = ((x65%x66)*(x67-x68));

    if (t15 != 2912588054821470012LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MAX;
	int8_t x70 = INT8_MAX;
	uint32_t x71 = 3204409U;
	uint16_t x72 = UINT16_MAX;
	volatile uint32_t t16 = 30464902U;

    t16 = ((x69%x70)*(x71-x72));

    if (t16 != 21972118U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = 63452487;
	int8_t x78 = 1;
	int8_t x79 = -27;
	volatile int32_t x80 = INT32_MIN;
	static volatile int32_t t17 = 4059;

    t17 = ((x77%x78)*(x79-x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = 221852LL;
	int32_t x82 = 96326916;
	int16_t x83 = -481;
	volatile int64_t t18 = -1LL;

    t18 = ((x81%x82)*(x83-x84));

    if (t18 != 952846949888028LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x85 = 22U;
	static volatile int16_t x86 = INT16_MIN;
	int64_t x87 = -1LL;
	uint16_t x88 = 951U;
	volatile int64_t t19 = -39LL;

    t19 = ((x85%x86)*(x87-x88));

    if (t19 != -20944LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x90 = 54U;
	int16_t x91 = -1;
	uint64_t x92 = 85998535449683870LLU;
	static volatile uint64_t t20 = 14189454448020LLU;

    t20 = ((x89%x90)*(x91-x92));

    if (t20 != 16124783616568087099LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = INT16_MIN;
	int16_t x94 = -1;
	volatile int16_t x95 = INT16_MIN;
	uint64_t x96 = 7896LLU;
	static volatile uint64_t t21 = 3LLU;

    t21 = ((x93%x94)*(x95-x96));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x105 = INT64_MAX;
	int16_t x107 = INT16_MIN;
	int64_t t22 = 18488LL;

    t22 = ((x105%x106)*(x107-x108));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = INT16_MIN;
	int64_t x110 = -1LL;
	int8_t x111 = INT8_MIN;
	int64_t x112 = -1LL;
	int64_t t23 = 28116719LL;

    t23 = ((x109%x110)*(x111-x112));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x117 = -1;
	uint64_t x119 = UINT64_MAX;
	volatile uint64_t t24 = 2352425LLU;

    t24 = ((x117%x118)*(x119-x120));

    if (t24 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x121 = -1;
	static volatile int8_t x122 = -1;
	uint64_t x123 = UINT64_MAX;

    t25 = ((x121%x122)*(x123-x124));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x125 = 393U;
	int32_t x127 = -38985;
	static int32_t x128 = -1035693655;
	static uint32_t t26 = 1153U;

    t26 = ((x125%x126)*(x127-x128));

    if (t26 != 3285359486U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x129 = UINT64_MAX;
	int8_t x131 = -8;
	uint8_t x132 = 2U;
	uint64_t t27 = 1568828506403852LLU;

    t27 = ((x129%x130)*(x131-x132));

    if (t27 != 18446744073544652466LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x137 = INT8_MIN;
	volatile int64_t x138 = 11577LL;
	int8_t x139 = INT8_MIN;
	volatile int32_t x140 = INT32_MIN;
	int64_t t28 = -3LL;

    t28 = ((x137%x138)*(x139-x140));

    if (t28 != -274877890560LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x141 = INT8_MAX;
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	uint64_t t29 = 27LLU;

    t29 = ((x141%x142)*(x143-x144));

    if (t29 != 18446743800983289856LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x145 = 61U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t30 = 82;

    t30 = ((x145%x146)*(x147-x148));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x153 = 1LLU;
	static uint16_t x155 = 24U;
	int16_t x156 = INT16_MIN;

    t31 = ((x153%x154)*(x155-x156));

    if (t31 != 32792LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x157 = 11228LLU;
	static volatile uint64_t x158 = UINT64_MAX;
	volatile int32_t x159 = INT32_MIN;
	int8_t x160 = 0;
	volatile uint64_t t32 = 11LLU;

    t32 = ((x157%x158)*(x159-x160));

    if (t32 != 18446719961763151872LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x161 = INT32_MIN;
	volatile int16_t x162 = 174;
	static uint8_t x164 = 15U;
	volatile int32_t t33 = 11291;

    t33 = ((x161%x162)*(x163-x164));

    if (t33 != -896) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x169 = INT8_MAX;
	int8_t x170 = INT8_MIN;
	uint16_t x171 = UINT16_MAX;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t34 = 368655040;

    t34 = ((x169%x170)*(x171-x172));

    if (t34 != 8339201) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x173 = 7955U;
	static uint8_t x174 = 19U;
	uint64_t x175 = UINT64_MAX;
	int16_t x176 = INT16_MIN;
	volatile uint64_t t35 = 2388425147LLU;

    t35 = ((x173%x174)*(x175-x176));

    if (t35 != 425971LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x177 = -1;
	int32_t x178 = 32509594;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t36 = 3071570068LLU;

    t36 = ((x177%x178)*(x179-x180));

    if (t36 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x181 = -1LL;
	uint32_t x182 = 9706835U;
	int16_t x183 = INT16_MIN;
	static volatile uint64_t x184 = 5650192210242214LLU;
	uint64_t t37 = 4635745844292132609LLU;

    t37 = ((x181%x182)*(x183-x184));

    if (t37 != 5650192210274982LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 892U;
	static volatile uint32_t t38 = 38U;

    t38 = ((x185%x186)*(x187-x188));

    if (t38 != 58564506U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x190 = 6486533U;
	static int16_t x191 = -12;
	volatile uint16_t x192 = UINT16_MAX;
	volatile int64_t t39 = -2028675525LL;

    t39 = ((x189%x190)*(x191-x192));

    if (t39 != 318422409975LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x194 = UINT8_MAX;
	uint16_t x195 = 19U;
	int16_t x196 = INT16_MIN;

    t40 = ((x193%x194)*(x195-x196));

    if (t40 != 590166) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x205 = 1;
	int8_t x206 = INT8_MIN;
	static int64_t x208 = -2543157LL;
	int64_t t41 = -2064LL;

    t41 = ((x205%x206)*(x207-x208));

    if (t41 != 2543134LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x209 = 112950LL;
	int32_t x210 = INT32_MIN;
	uint32_t x211 = 26U;
	int64_t t42 = 199347369493879LL;

    t42 = ((x209%x210)*(x211-x212));

    if (t42 != 485112857987250LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x213 = UINT32_MAX;
	int16_t x214 = -2511;
	int32_t x215 = INT32_MIN;
	uint8_t x216 = 0U;
	static uint32_t t43 = 1022U;

    t43 = ((x213%x214)*(x215-x216));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x217 = 572742493128121LLU;
	volatile int32_t x218 = 587189;
	static int16_t x219 = INT16_MIN;
	static volatile uint32_t x220 = 3U;
	uint64_t t44 = 3508288LLU;

    t44 = ((x217%x218)*(x219-x220));

    if (t44 != 698648409312700LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x222 = INT16_MIN;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	volatile int64_t t45 = 3762LL;

    t45 = ((x221%x222)*(x223-x224));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x225 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	static int16_t x228 = 717;
	volatile int64_t t46 = 179225498104234LL;

    t46 = ((x225%x226)*(x227-x228));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x230 = 15;
	volatile uint32_t x231 = UINT32_MAX;
	int16_t x232 = 1;
	volatile uint32_t t47 = 1U;

    t47 = ((x229%x230)*(x231-x232));

    if (t47 != 16U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x237 = -1;
	uint8_t x238 = UINT8_MAX;
	int16_t x240 = -849;
	volatile int32_t t48 = 308335055;

    t48 = ((x237%x238)*(x239-x240));

    if (t48 != -16279) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x249 = 72U;
	uint8_t x250 = 22U;
	uint32_t x251 = 3418U;
	int16_t x252 = -91;
	volatile uint32_t t49 = 192U;

    t49 = ((x249%x250)*(x251-x252));

    if (t49 != 21054U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x253 = UINT16_MAX;
	uint64_t x254 = 170204218907905706LLU;
	int64_t x255 = -16219006671598LL;
	uint16_t x256 = UINT16_MAX;

    t50 = ((x253%x254)*(x255-x256));

    if (t50 != 17383831467191540461LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x257 = INT16_MIN;
	uint64_t x258 = 1764275253660LLU;
	static int16_t x259 = INT16_MIN;
	static int16_t x260 = INT16_MAX;
	volatile uint64_t t51 = 61189498LLU;

    t51 = ((x257%x258)*(x259-x260));

    if (t51 != 18399666014594666536LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x261 = 38U;
	uint16_t x262 = 1U;
	uint32_t x263 = 434U;
	int64_t x264 = -2LL;
	int64_t t52 = -22LL;

    t52 = ((x261%x262)*(x263-x264));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x266 = 143LLU;
	volatile uint64_t t53 = 1309124LLU;

    t53 = ((x265%x266)*(x267-x268));

    if (t53 != 9223371931628077056LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x269 = 1;
	int32_t x270 = -1;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t54 = -2436;

    t54 = ((x269%x270)*(x271-x272));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x274 = -1;
	uint32_t x275 = 8372409U;
	uint8_t x276 = 2U;

    t55 = ((x273%x274)*(x275-x276));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x278 = INT32_MIN;
	uint32_t x279 = 64927U;
	int64_t x280 = -1LL;
	volatile uint64_t t56 = 132LLU;

    t56 = ((x277%x278)*(x279-x280));

    if (t56 != 912121594528LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x281 = 1211613U;
	static int64_t x282 = -1LL;
	static int8_t x283 = INT8_MAX;
	int8_t x284 = INT8_MIN;
	volatile int64_t t57 = -16390472LL;

    t57 = ((x281%x282)*(x283-x284));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x289 = 1668091U;
	int16_t x290 = -5016;
	uint64_t t58 = 57438LLU;

    t58 = ((x289%x290)*(x291-x292));

    if (t58 != 18446743659077176019LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x293 = UINT8_MAX;
	volatile int64_t x294 = -1LL;
	volatile int64_t t59 = -488969775LL;

    t59 = ((x293%x294)*(x295-x296));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x297 = INT32_MAX;
	uint32_t x299 = 1U;
	uint16_t x300 = UINT16_MAX;
	volatile uint32_t t60 = 102240U;

    t60 = ((x297%x298)*(x299-x300));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x302 = -1;
	int32_t x303 = 460741182;
	int16_t x304 = INT16_MAX;
	int32_t t61 = 8081;

    t61 = ((x301%x302)*(x303-x304));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x310 = 1444924301579062530LL;
	uint8_t x311 = 2U;
	static volatile uint32_t x312 = 315224423U;
	volatile int64_t t62 = 1288698782LL;

    t62 = ((x309%x310)*(x311-x312));

    if (t62 != 3979742875LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x314 = -1;
	static int16_t x316 = INT16_MAX;
	static int64_t t63 = -949299LL;

    t63 = ((x313%x314)*(x315-x316));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x319 = -1;
	int32_t x320 = 54071;
	static int64_t t64 = -32055526285039LL;

    t64 = ((x317%x318)*(x319-x320));

    if (t64 != -116118735760584LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x321 = INT8_MIN;
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = 25;
	uint16_t x324 = 190U;
	volatile uint64_t t65 = 38081012101720LLU;

    t65 = ((x321%x322)*(x323-x324));

    if (t65 != 21120LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint64_t x325 = UINT64_MAX;
	int8_t x327 = INT8_MIN;
	int16_t x328 = -1;
	volatile uint64_t t66 = 160966316952260471LLU;

    t66 = ((x325%x326)*(x327-x328));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x329 = 12908024569376530LLU;
	uint32_t x330 = 2002671385U;
	int32_t x331 = -58978218;
	uint16_t x332 = UINT16_MAX;

    t67 = ((x329%x330)*(x331-x332));

    if (t67 != 18422153332187445241LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x337 = 3337276311606582103LLU;
	uint32_t x340 = 949U;
	uint64_t t68 = 3047LLU;

    t68 = ((x337%x338)*(x339-x340));

    if (t68 != 571230526678LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x341 = 43;
	int32_t x342 = 6671557;
	int32_t x343 = INT32_MIN;
	volatile int32_t x344 = INT32_MIN;
	int32_t t69 = -557479003;

    t69 = ((x341%x342)*(x343-x344));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x349 = INT64_MIN;
	uint8_t x352 = 1U;
	int64_t t70 = 5042882175815LL;

    t70 = ((x349%x350)*(x351-x352));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x354 = 6710044813LLU;
	int32_t x355 = INT32_MIN;
	uint32_t x356 = UINT32_MAX;
	volatile uint64_t t71 = 78600771362024LLU;

    t71 = ((x353%x354)*(x355-x356));

    if (t71 != 272730423423LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x361 = 8U;
	uint64_t x362 = 441LLU;
	uint64_t x364 = UINT64_MAX;

    t72 = ((x361%x362)*(x363-x364));

    if (t72 != 18446744073709550600LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x366 = -1;
	uint64_t x367 = 806910811710LLU;
	volatile int32_t x368 = INT32_MAX;

    t73 = ((x365%x366)*(x367-x368));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x373 = INT64_MIN;
	uint16_t x374 = 431U;
	uint8_t x375 = UINT8_MAX;
	uint32_t x376 = 266U;
	int64_t t74 = 2248293993564179481LL;

    t74 = ((x373%x374)*(x375-x376));

    if (t74 != -1649267437440LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x377 = 93U;
	uint64_t x378 = 4932631622350176LLU;
	uint32_t x379 = 309734257U;
	volatile int16_t x380 = INT16_MAX;

    t75 = ((x377%x378)*(x379-x380));

    if (t75 != 28802238570LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x382 = INT8_MAX;
	int8_t x383 = -1;
	volatile int8_t x384 = -1;
	static int32_t t76 = 1306;

    t76 = ((x381%x382)*(x383-x384));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x385 = 2821581;
	static uint16_t x387 = 430U;
	volatile uint32_t x388 = 9U;
	static uint32_t t77 = 9003U;

    t77 = ((x385%x386)*(x387-x388));

    if (t77 != 1487393U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x393 = -1LL;
	uint64_t x395 = UINT64_MAX;
	volatile int32_t x396 = INT32_MIN;
	volatile uint64_t t78 = 18080255LLU;

    t78 = ((x393%x394)*(x395-x396));

    if (t78 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x397 = INT8_MIN;
	volatile int8_t x399 = INT8_MAX;
	int64_t x400 = -1LL;
	static volatile int64_t t79 = -270458033660210LL;

    t79 = ((x397%x398)*(x399-x400));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x401 = INT8_MAX;
	uint16_t x403 = 506U;
	uint32_t x404 = UINT32_MAX;
	uint32_t t80 = 32U;

    t80 = ((x401%x402)*(x403-x404));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x405 = 16893975;
	int8_t x407 = 0;
	int8_t x408 = INT8_MIN;
	int32_t t81 = -1;

    t81 = ((x405%x406)*(x407-x408));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x409 = 30U;
	static volatile uint8_t x410 = 28U;
	volatile uint8_t x411 = 35U;
	int16_t x412 = INT16_MIN;
	volatile int32_t t82 = 18922;

    t82 = ((x409%x410)*(x411-x412));

    if (t82 != 65606) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x413 = 0U;
	static int32_t x414 = -1;
	uint32_t x415 = 3U;
	int8_t x416 = -1;
	volatile uint32_t t83 = 22037U;

    t83 = ((x413%x414)*(x415-x416));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x418 = INT32_MIN;
	static int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MIN;
	int64_t t84 = -247569149445648608LL;

    t84 = ((x417%x418)*(x419-x420));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x421 = INT8_MIN;
	int32_t x422 = -1;
	static uint64_t x424 = UINT64_MAX;
	static volatile uint64_t t85 = 227107LLU;

    t85 = ((x421%x422)*(x423-x424));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x426 = 2U;
	int32_t x427 = -1;
	int32_t x428 = -1;
	static volatile int32_t t86 = 5767;

    t86 = ((x425%x426)*(x427-x428));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x429 = 38U;
	volatile int32_t x430 = -1048339;
	int8_t x431 = INT8_MIN;
	int64_t x432 = 5LL;
	int64_t t87 = 6480861499727LL;

    t87 = ((x429%x430)*(x431-x432));

    if (t87 != -5054LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x433 = INT64_MIN;
	uint64_t x434 = 25784856508152378LLU;
	int64_t x436 = 98298LL;

    t88 = ((x433%x434)*(x435-x436));

    if (t88 != 2483591621358479600LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x437 = INT64_MAX;
	int32_t x438 = INT32_MAX;
	int32_t x439 = INT32_MAX;
	volatile int32_t x440 = INT32_MAX;
	volatile int64_t t89 = 1LL;

    t89 = ((x437%x438)*(x439-x440));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x441 = 28405928981604LLU;
	uint16_t x443 = 2611U;
	uint32_t x444 = 1572388999U;
	uint64_t t90 = 2042902346479645LLU;

    t90 = ((x441%x442)*(x443-x444));

    if (t90 != 3548561575370426160LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x446 = INT64_MIN;
	static int64_t x448 = INT64_MAX;
	int64_t t91 = -34LL;

    t91 = ((x445%x446)*(x447-x448));

    if (t91 != 9223372036854775683LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x449 = -1LL;
	uint64_t x451 = 758340694920714504LLU;
	uint64_t t92 = 14305481092709LLU;

    t92 = ((x449%x450)*(x451-x452));

    if (t92 != 17688403378788836984LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x454 = 4341416485LLU;
	static int32_t x455 = -243;
	volatile int32_t x456 = 11134746;
	static uint64_t t93 = 2290942074149702345LLU;

    t93 = ((x453%x454)*(x455-x456));

    if (t93 != 18446743343978047501LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x457 = 83U;
	static int16_t x458 = 12;
	int8_t x459 = 0;
	int32_t t94 = 2040;

    t94 = ((x457%x458)*(x459-x460));

    if (t94 != -143) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x461 = -1;
	volatile uint8_t x462 = UINT8_MAX;
	uint16_t x463 = UINT16_MAX;
	int64_t x464 = 746068LL;
	int64_t t95 = -266137653432LL;

    t95 = ((x461%x462)*(x463-x464));

    if (t95 != 680533LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x465 = 174842797539958312LLU;
	int8_t x467 = -1;
	uint8_t x468 = 0U;
	uint64_t t96 = 26765191078653LLU;

    t96 = ((x465%x466)*(x467-x468));

    if (t96 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x469 = -9028;
	static int32_t x470 = INT32_MIN;
	static uint32_t x471 = UINT32_MAX;
	uint64_t x472 = UINT64_MAX;

    t97 = ((x469%x470)*(x471-x472));

    if (t97 != 18446705298744803328LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x473 = -1;
	uint16_t x474 = 150U;
	int8_t x475 = -1;

    t98 = ((x473%x474)*(x475-x476));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x477 = -1;
	int32_t x478 = INT32_MIN;
	int16_t x479 = -1;
	uint64_t x480 = 145532420178LLU;

    t99 = ((x477%x478)*(x479-x480));

    if (t99 != 145532420179LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x481 = -42198193767LL;
	int16_t x482 = INT16_MIN;
	int64_t x483 = INT64_MIN;
	volatile int64_t x484 = INT64_MIN;
	int64_t t100 = 414722091910LL;

    t100 = ((x481%x482)*(x483-x484));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x485 = 8396;
	int64_t x486 = -104088092227LL;
	static uint64_t x487 = UINT64_MAX;

    t101 = ((x485%x486)*(x487-x488));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x489 = 267U;
	static int16_t x491 = -3;

    t102 = ((x489%x490)*(x491-x492));

    if (t102 != -534) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x494 = UINT16_MAX;
	int32_t x495 = -1;
	volatile uint64_t t103 = 48525699419863LLU;

    t103 = ((x493%x494)*(x495-x496));

    if (t103 != 510380371548520064LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x497 = 120U;
	int64_t x498 = INT64_MIN;
	static uint8_t x499 = 3U;
	static volatile uint8_t x500 = 80U;

    t104 = ((x497%x498)*(x499-x500));

    if (t104 != -9240LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x501 = INT64_MAX;
	uint32_t x502 = 11U;
	int64_t x504 = -878125584066LL;
	volatile int64_t t105 = 15250LL;

    t105 = ((x501%x502)*(x503-x504));

    if (t105 != 6161911473991LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x505 = -5494LL;
	volatile int8_t x506 = INT8_MIN;
	uint8_t x507 = 6U;

    t106 = ((x505%x506)*(x507-x508));

    if (t106 != -3867332LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x513 = 715;
	uint16_t x514 = 29U;
	uint64_t x515 = 1LLU;
	int32_t x516 = INT32_MIN;

    t107 = ((x513%x514)*(x515-x516));

    if (t107 != 40802189331LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x517 = INT16_MAX;
	int16_t x519 = -1;
	volatile int32_t t108 = -3950;

    t108 = ((x517%x518)*(x519-x520));

    if (t108 != -98301) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x522 = 19U;
	uint8_t x524 = 0U;

    t109 = ((x521%x522)*(x523-x524));

    if (t109 != 4272975711U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x525 = -1;
	volatile uint8_t x527 = 2U;
	volatile uint32_t t110 = 39022611U;

    t110 = ((x525%x526)*(x527-x528));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x533 = INT32_MAX;
	uint16_t x534 = 31U;
	volatile uint32_t x535 = 2317U;
	int64_t x536 = -2LL;
	volatile int64_t t111 = -388280344363309149LL;

    t111 = ((x533%x534)*(x535-x536));

    if (t111 != 2319LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x537 = 2997658LLU;
	static int64_t x538 = INT64_MIN;
	int8_t x539 = -1;
	uint64_t t112 = 64246710182LLU;

    t112 = ((x537%x538)*(x539-x540));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x544 = INT8_MIN;
	static volatile uint64_t t113 = 29LLU;

    t113 = ((x541%x542)*(x543-x544));

    if (t113 != 384LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x545 = INT16_MIN;
	static int64_t x546 = INT64_MIN;
	uint8_t x547 = 9U;
	int16_t x548 = INT16_MIN;
	volatile int64_t t114 = 36277917848LL;

    t114 = ((x545%x546)*(x547-x548));

    if (t114 != -1074036736LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x550 = INT16_MAX;
	volatile uint16_t x551 = 3U;
	static int64_t x552 = -1LL;
	int64_t t115 = -16144761698767LL;

    t115 = ((x549%x550)*(x551-x552));

    if (t115 != 232LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x553 = INT64_MAX;
	volatile int16_t x554 = INT16_MIN;
	int32_t x555 = INT32_MIN;
	uint64_t x556 = UINT64_MAX;
	static volatile uint64_t t116 = 1LLU;

    t116 = ((x553%x554)*(x555-x556));

    if (t116 != 18446673707112890367LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x557 = -1;
	int64_t x558 = 5614LL;
	int8_t x559 = -9;
	int64_t t117 = -1055274894806197LL;

    t117 = ((x557%x558)*(x559-x560));

    if (t117 != -119LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x561 = INT8_MIN;
	int8_t x562 = 6;
	int32_t x564 = INT32_MIN;
	volatile uint64_t t118 = 469757435310LLU;

    t118 = ((x561%x562)*(x563-x564));

    if (t118 != 18446744069375928362LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x565 = 2947834354077597858LLU;
	volatile uint64_t x566 = 3193063305407667668LLU;
	volatile int8_t x567 = INT8_MIN;

    t119 = ((x565%x566)*(x567-x568));

    if (t119 != 13006662580045655970LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x569 = 14;
	int64_t x570 = INT64_MAX;
	static volatile uint64_t x571 = 16LLU;
	int8_t x572 = 4;
	volatile uint64_t t120 = 70304005773541817LLU;

    t120 = ((x569%x570)*(x571-x572));

    if (t120 != 168LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x573 = -622;
	int64_t x574 = INT64_MIN;
	volatile int8_t x576 = INT8_MAX;
	int64_t t121 = -1LL;

    t121 = ((x573%x574)*(x575-x576));

    if (t121 != 20460690LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x577 = INT32_MIN;
	int64_t x579 = INT64_MIN;
	int8_t x580 = 0;
	volatile int64_t t122 = -947215401LL;

    t122 = ((x577%x578)*(x579-x580));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x585 = -1LL;
	static uint16_t x587 = 11831U;
	static uint64_t x588 = UINT64_MAX;
	uint64_t t123 = 1138237265654849728LLU;

    t123 = ((x585%x586)*(x587-x588));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x589 = -1374862109530993LL;
	int64_t x590 = INT64_MIN;
	static volatile int64_t x592 = INT64_MAX;
	static uint64_t t124 = 25636LLU;

    t124 = ((x589%x590)*(x591-x592));

    if (t124 != 9484064368601155131LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x594 = 511U;
	volatile uint32_t x595 = UINT32_MAX;
	int16_t x596 = -1;
	uint32_t t125 = 8135U;

    t125 = ((x593%x594)*(x595-x596));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x597 = -1;
	uint64_t x599 = 64939LLU;
	int64_t x600 = INT64_MIN;
	volatile uint64_t t126 = 35932783939227755LLU;

    t126 = ((x597%x598)*(x599-x600));

    if (t126 != 9223372036854710869LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x605 = UINT32_MAX;

    t127 = ((x605%x606)*(x607-x608));

    if (t127 != 2147483647U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x609 = INT16_MIN;
	volatile uint16_t x610 = UINT16_MAX;
	uint8_t x611 = 2U;
	static int32_t t128 = 8894;

    t128 = ((x609%x610)*(x611-x612));

    if (t128 != 8290304) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x613 = UINT8_MAX;
	int32_t x614 = 2558229;
	uint8_t x615 = 0U;
	uint16_t x616 = 61U;
	volatile int32_t t129 = -1745225;

    t129 = ((x613%x614)*(x615-x616));

    if (t129 != -15555) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x617 = -1LL;
	volatile int32_t x620 = 532483247;
	static volatile int64_t t130 = -757470LL;

    t130 = ((x617%x618)*(x619-x620));

    if (t130 != -3762484048LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x622 = UINT32_MAX;
	static uint8_t x623 = 1U;
	volatile int16_t x624 = INT16_MIN;
	volatile uint32_t t131 = 2531U;

    t131 = ((x621%x622)*(x623-x624));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x629 = INT64_MIN;
	int32_t x630 = INT32_MIN;
	uint8_t x632 = UINT8_MAX;
	volatile uint64_t t132 = 753483956LLU;

    t132 = ((x629%x630)*(x631-x632));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x634 = 22;
	volatile int16_t x635 = INT16_MIN;
	int64_t x636 = 1LL;
	int64_t t133 = 5176899566671LL;

    t133 = ((x633%x634)*(x635-x636));

    if (t133 != -425997LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x637 = 448U;
	static uint8_t x638 = 95U;
	uint8_t x639 = UINT8_MAX;

    t134 = ((x637%x638)*(x639-x640));

    if (t134 != 11492U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x645 = 222888669;
	uint16_t x646 = 18146U;
	int8_t x647 = 5;

    t135 = ((x645%x646)*(x647-x648));

    if (t135 != 4291749214U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x654 = 3U;
	uint64_t x655 = 108262LLU;
	int8_t x656 = -58;

    t136 = ((x653%x654)*(x655-x656));

    if (t136 != 18446744073709334976LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x657 = UINT64_MAX;
	int8_t x658 = INT8_MIN;
	uint16_t x659 = 807U;
	uint64_t x660 = UINT64_MAX;
	uint64_t t137 = 1720320267078624419LLU;

    t137 = ((x657%x658)*(x659-x660));

    if (t137 != 102616LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x661 = -1LL;
	static uint8_t x662 = UINT8_MAX;
	static int32_t x663 = INT32_MIN;
	static int64_t t138 = -15471LL;

    t138 = ((x661%x662)*(x663-x664));

    if (t138 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x666 = 2755U;
	uint16_t x668 = 9U;

    t139 = ((x665%x666)*(x667-x668));

    if (t139 != 20382355LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x669 = 12LLU;
	static int16_t x671 = -918;
	uint8_t x672 = 40U;
	static volatile uint64_t t140 = 7038207990LLU;

    t140 = ((x669%x670)*(x671-x672));

    if (t140 != 18446744073709540120LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x673 = INT64_MAX;
	int16_t x674 = -1;
	static int8_t x675 = -1;
	volatile uint64_t t141 = 119231LLU;

    t141 = ((x673%x674)*(x675-x676));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x677 = -10932552942LL;
	int32_t x679 = -678;
	static uint8_t x680 = 5U;
	static volatile int64_t t142 = 27331LL;

    t142 = ((x677%x678)*(x679-x680));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x681 = 202LLU;
	static uint32_t x682 = 451208U;
	uint16_t x684 = 10U;

    t143 = ((x681%x682)*(x683-x684));

    if (t143 != 23634LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x690 = INT16_MIN;
	static uint64_t x691 = 685870LLU;
	uint64_t t144 = 30LLU;

    t144 = ((x689%x690)*(x691-x692));

    if (t144 != 18446744073708865747LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x694 = 138;
	uint32_t x695 = UINT32_MAX;
	uint8_t x696 = 10U;

    t145 = ((x693%x694)*(x695-x696));

    if (t145 != 484U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x697 = INT8_MIN;
	uint64_t x698 = 107061692740641LLU;
	uint64_t x699 = 41909916LLU;
	volatile uint32_t x700 = 116451U;

    t146 = ((x697%x698)*(x699-x700));

    if (t146 != 12135969983157274708LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x701 = UINT16_MAX;
	int8_t x702 = -1;
	volatile int32_t x703 = 14;
	int32_t x704 = INT32_MAX;
	volatile int32_t t147 = 77633;

    t147 = ((x701%x702)*(x703-x704));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x709 = 13U;
	int8_t x710 = INT8_MAX;
	uint32_t x711 = 1505U;
	int16_t x712 = INT16_MAX;
	uint32_t t148 = 83U;

    t148 = ((x709%x710)*(x711-x712));

    if (t148 != 4294560890U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x713 = INT64_MIN;
	int32_t x714 = -10353;
	static int16_t x715 = -1;
	uint16_t x716 = UINT16_MAX;
	volatile int64_t t149 = -8604705760717LL;

    t149 = ((x713%x714)*(x715-x716));

    if (t149 != 299171840LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x717 = INT8_MIN;
	int64_t x718 = INT64_MAX;
	uint64_t x719 = 1151LLU;
	int32_t x720 = INT32_MIN;
	uint64_t t150 = 13908197336771498LLU;

    t150 = ((x717%x718)*(x719-x720));

    if (t150 != 18446743798831497344LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x721 = 146;
	uint64_t x722 = UINT64_MAX;
	int64_t x723 = -3927800LL;
	int8_t x724 = INT8_MAX;
	static uint64_t t151 = 329985361283237157LLU;

    t151 = ((x721%x722)*(x723-x724));

    if (t151 != 18446744073136074274LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x725 = INT16_MIN;
	int64_t x726 = INT64_MIN;
	int64_t x727 = 451LL;
	uint64_t x728 = 893529263LLU;
	uint64_t t152 = 5LLU;

    t152 = ((x725%x726)*(x727-x728));

    if (t152 != 29279152111616LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x730 = 724695869697166542LLU;
	static int8_t x732 = INT8_MIN;
	volatile uint64_t t153 = 6738874738850LLU;

    t153 = ((x729%x730)*(x731-x732));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x737 = INT8_MIN;
	int32_t x738 = INT32_MIN;
	static int16_t x740 = 7;

    t154 = ((x737%x738)*(x739-x740));

    if (t154 != 17280) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x745 = INT16_MIN;
	int64_t x746 = INT64_MIN;
	int16_t x748 = INT16_MAX;
	int64_t t155 = -61864887166307160LL;

    t155 = ((x745%x746)*(x747-x748));

    if (t155 != 830963712LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x749 = 2511U;
	int32_t x750 = INT32_MIN;
	int16_t x751 = INT16_MIN;
	volatile uint64_t x752 = 65295502629LLU;
	volatile uint64_t t156 = 205543778LLU;

    t156 = ((x749%x750)*(x751-x752));

    if (t156 != 18446580116620169749LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x753 = 201LL;
	int64_t x754 = -1LL;
	volatile int64_t t157 = -1080457415817LL;

    t157 = ((x753%x754)*(x755-x756));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x757 = 1;
	volatile uint32_t x758 = 2178U;
	volatile int64_t x759 = -1LL;

    t158 = ((x757%x758)*(x759-x760));

    if (t158 != 29115764290037LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x761 = 664316286771038979LLU;
	static uint8_t x762 = 6U;
	static volatile int16_t x763 = INT16_MIN;
	uint32_t x764 = 1418U;
	static volatile uint64_t t159 = 9919869621LLU;

    t159 = ((x761%x762)*(x763-x764));

    if (t159 != 12884799330LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x777 = -6194;
	int64_t x779 = -813257604299264LL;
	int8_t x780 = -1;
	int64_t t160 = -360058LL;

    t160 = ((x777%x778)*(x779-x780));

    if (t160 != 5037317601029635022LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x789 = 61134677;
	uint16_t x790 = 586U;
	uint64_t x791 = UINT64_MAX;
	static int16_t x792 = -1;
	static uint64_t t161 = 4523450977029592214LLU;

    t161 = ((x789%x790)*(x791-x792));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x794 = INT8_MIN;
	uint64_t x795 = 404109375525659LLU;
	int16_t x796 = INT16_MIN;
	uint64_t t162 = 114561429127038472LLU;

    t162 = ((x793%x794)*(x795-x796));

    if (t162 != 2020546877792135LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x798 = -1;
	uint64_t x800 = 566LLU;

    t163 = ((x797%x798)*(x799-x800));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x805 = INT16_MAX;
	int8_t x806 = -12;
	uint32_t x807 = 209U;
	uint32_t x808 = 168780522U;
	uint32_t t164 = 8U;

    t164 = ((x805%x806)*(x807-x808));

    if (t164 != 3113505105U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x810 = 1134;
	volatile uint32_t x811 = UINT32_MAX;
	int32_t x812 = 878;

    t165 = ((x809%x810)*(x811-x812));

    if (t165 != 2194727839087LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x821 = UINT64_MAX;
	uint16_t x822 = UINT16_MAX;
	static uint8_t x823 = 6U;
	int8_t x824 = INT8_MIN;

    t166 = ((x821%x822)*(x823-x824));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x825 = 18053233LL;
	int16_t x826 = -7;
	volatile int64_t x828 = INT64_MAX;
	int64_t t167 = 12160726LL;

    t167 = ((x825%x826)*(x827-x828));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x829 = INT8_MAX;
	static int32_t x830 = -1;
	int8_t x832 = INT8_MIN;
	static volatile int32_t t168 = 510760;

    t168 = ((x829%x830)*(x831-x832));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x833 = UINT64_MAX;
	static int16_t x834 = 449;
	static volatile int16_t x835 = INT16_MIN;
	int16_t x836 = -1;
	volatile uint64_t t169 = 1076809067484LLU;

    t169 = ((x833%x834)*(x835-x836));

    if (t169 != 18446744073697821030LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x839 = INT64_MIN;
	static int64_t x840 = -1LL;
	volatile int64_t t170 = -3568157LL;

    t170 = ((x837%x838)*(x839-x840));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x841 = 77U;
	int32_t x842 = -18898;
	int64_t x843 = -1LL;
	int32_t x844 = INT32_MIN;
	volatile int64_t t171 = -3351LL;

    t171 = ((x841%x842)*(x843-x844));

    if (t171 != 165356240819LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x853 = INT32_MIN;
	volatile int32_t x854 = INT32_MAX;
	int8_t x855 = 7;
	int16_t x856 = INT16_MIN;
	int32_t t172 = -3834;

    t172 = ((x853%x854)*(x855-x856));

    if (t172 != -32775) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x861 = 28U;
	volatile int16_t x862 = INT16_MIN;
	volatile uint8_t x863 = 12U;
	uint64_t x864 = 1589920884LLU;
	static uint64_t t173 = 70254838080108LLU;

    t173 = ((x861%x862)*(x863-x864));

    if (t173 != 18446744029191767200LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x865 = 68U;
	static int8_t x866 = -1;
	int16_t x868 = INT16_MIN;
	volatile int64_t t174 = -268225LL;

    t174 = ((x865%x866)*(x867-x868));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x869 = INT64_MAX;
	int16_t x870 = INT16_MIN;
	int32_t x871 = INT32_MIN;
	int16_t x872 = INT16_MIN;

    t175 = ((x869%x870)*(x871-x872));

    if (t175 != -70365522984960LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x873 = -1;
	uint32_t x874 = 1679738U;
	uint32_t x875 = 1353017U;
	int8_t x876 = INT8_MIN;
	static uint32_t t176 = 9U;

    t176 = ((x873%x874)*(x875-x876));

    if (t176 != 2268136175U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x877 = -1LL;
	int32_t x878 = -11;
	uint32_t x879 = 34U;

    t177 = ((x877%x878)*(x879-x880));

    if (t177 != -190996LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x886 = INT8_MIN;
	uint64_t x887 = UINT64_MAX;
	int32_t x888 = 794;
	volatile uint64_t t178 = 1701034500487LLU;

    t178 = ((x885%x886)*(x887-x888));

    if (t178 != 18446744073709510276LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x889 = -6;
	volatile int8_t x890 = INT8_MIN;
	uint16_t x891 = UINT16_MAX;
	uint32_t x892 = UINT32_MAX;
	volatile uint32_t t179 = 6U;

    t179 = ((x889%x890)*(x891-x892));

    if (t179 != 4294574080U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x893 = -12435LL;
	uint16_t x894 = 21435U;
	int64_t x896 = -1LL;
	static volatile int64_t t180 = -15321692LL;

    t180 = ((x893%x894)*(x895-x896));

    if (t180 != -1591680LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x898 = -1;
	volatile uint16_t x899 = 7753U;
	uint8_t x900 = 2U;

    t181 = ((x897%x898)*(x899-x900));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x901 = INT64_MAX;
	static volatile uint64_t x902 = UINT64_MAX;
	uint64_t x903 = 2046755142947450LLU;
	uint64_t x904 = UINT64_MAX;
	uint64_t t182 = 193192141626LLU;

    t182 = ((x901%x902)*(x903-x904));

    if (t182 != 9221325281711828357LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x905 = -1114032219090LL;
	static uint16_t x906 = 21432U;
	volatile int32_t x907 = -1;
	int64_t t183 = -44332522078LL;

    t183 = ((x905%x906)*(x907-x908));

    if (t183 != 220662LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x910 = 886956527U;
	static int32_t x911 = INT32_MIN;
	int32_t x912 = -1801423;
	uint32_t t184 = 124725438U;

    t184 = ((x909%x910)*(x911-x912));

    if (t184 != 1269477933U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x914 = UINT8_MAX;
	uint64_t x915 = 1302134964020130217LLU;
	static volatile uint64_t t185 = 1242LLU;

    t185 = ((x913%x914)*(x915-x916));

    if (t185 != 17794165067640941440LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x917 = INT64_MIN;
	int8_t x918 = INT8_MIN;
	volatile int16_t x920 = INT16_MIN;
	volatile int64_t t186 = -8433LL;

    t186 = ((x917%x918)*(x919-x920));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x921 = -254105473829LL;
	int16_t x922 = -1;
	uint16_t x924 = 3103U;
	int64_t t187 = 81LL;

    t187 = ((x921%x922)*(x923-x924));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint64_t x925 = 528707795LLU;
	int16_t x926 = -7;
	uint16_t x927 = UINT16_MAX;
	uint64_t t188 = 2333093LLU;

    t188 = ((x925%x926)*(x927-x928));

    if (t188 != 26078511988375LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x929 = INT16_MIN;
	static int32_t x931 = -1;
	static int16_t x932 = INT16_MAX;
	volatile int64_t t189 = -3LL;

    t189 = ((x929%x930)*(x931-x932));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x933 = INT8_MIN;
	static volatile uint8_t x935 = 32U;
	volatile int32_t t190 = 64;

    t190 = ((x933%x934)*(x935-x936));

    if (t190 != -4224) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x937 = 36U;
	static int64_t x938 = 133686438LL;
	int16_t x939 = INT16_MIN;
	int16_t x940 = INT16_MAX;
	volatile int64_t t191 = -190244565LL;

    t191 = ((x937%x938)*(x939-x940));

    if (t191 != -2359260LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x945 = 0;
	uint32_t x946 = 305344U;
	uint8_t x947 = 7U;
	uint8_t x948 = UINT8_MAX;
	volatile uint32_t t192 = 2U;

    t192 = ((x945%x946)*(x947-x948));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x949 = INT64_MIN;
	int16_t x950 = INT16_MIN;
	uint16_t x952 = UINT16_MAX;
	volatile int64_t t193 = 25473233409LL;

    t193 = ((x949%x950)*(x951-x952));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x957 = 814931621457120642LLU;
	int16_t x958 = INT16_MIN;
	uint64_t x959 = UINT64_MAX;
	uint64_t x960 = UINT64_MAX;
	uint64_t t194 = 333916LLU;

    t194 = ((x957%x958)*(x959-x960));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x965 = 1512546036174937LLU;
	static int64_t x966 = INT64_MIN;
	int32_t x967 = INT32_MIN;
	uint8_t x968 = 0U;

    t195 = ((x965%x966)*(x967-x968));

    if (t195 != 8603942179011821568LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x969 = INT16_MAX;
	static int16_t x971 = INT16_MAX;
	static uint32_t x972 = UINT32_MAX;
	static uint32_t t196 = 12U;

    t196 = ((x969%x970)*(x971-x972));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x973 = -1;
	volatile int64_t x974 = 14LL;
	static volatile uint32_t x975 = 0U;
	volatile int8_t x976 = INT8_MIN;
	volatile int64_t t197 = 247515LL;

    t197 = ((x973%x974)*(x975-x976));

    if (t197 != -128LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x977 = -273;
	uint64_t x978 = UINT64_MAX;
	int8_t x979 = -1;
	static int16_t x980 = 7613;

    t198 = ((x977%x978)*(x979-x980));

    if (t198 != 2078622LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x981 = 441790807LLU;
	static int32_t x982 = INT32_MIN;
	int32_t x983 = 26888116;
	static uint32_t x984 = UINT32_MAX;

    t199 = ((x981%x982)*(x983-x984));

    if (t199 != 11878922908140419LLU) { NG(); } else { ; }
	
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

