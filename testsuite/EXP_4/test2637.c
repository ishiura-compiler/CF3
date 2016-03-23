
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

int32_t x6 = INT32_MAX;
uint8_t x8 = 10U;
int64_t x12 = INT64_MAX;
int32_t x15 = INT32_MIN;
uint16_t x18 = UINT16_MAX;
uint8_t x20 = UINT8_MAX;
int64_t x28 = INT64_MAX;
static int16_t x31 = INT16_MAX;
volatile int64_t t7 = -43LL;
static volatile int32_t t9 = -24;
uint64_t x42 = 10645969414088LLU;
int64_t x49 = -6462619851395LL;
uint8_t x63 = 2U;
int64_t t15 = 2125703959975LL;
static int16_t x65 = -1;
int8_t x78 = -33;
static int8_t x79 = INT8_MAX;
static volatile uint64_t x82 = UINT64_MAX;
uint32_t x83 = 759U;
int16_t x85 = INT16_MIN;
static volatile int64_t x86 = 2711610800208316652LL;
int32_t x89 = -1;
int8_t x99 = -1;
int64_t x114 = 53358544982LL;
volatile uint32_t x116 = 267U;
volatile int64_t t29 = 46790302884862LL;
volatile int64_t x123 = INT64_MAX;
int16_t x125 = INT16_MAX;
volatile uint32_t x127 = 16U;
int64_t x128 = INT64_MIN;
volatile int64_t t32 = 149568977844623913LL;
int8_t x147 = 1;
int64_t x148 = -947524LL;
volatile int16_t x154 = INT16_MAX;
volatile int64_t t38 = -119068LL;
int8_t x157 = -1;
static int64_t x161 = -1LL;
int16_t x168 = INT16_MAX;
uint64_t x180 = 337063949067LLU;
int8_t x181 = INT8_MAX;
int16_t x182 = -1;
static volatile uint32_t x187 = 2U;
volatile uint64_t x192 = 1717975680421451LLU;
static int64_t x194 = -1LL;
static int32_t x198 = -1068860213;
volatile int32_t t49 = -10;
static volatile int16_t x203 = INT16_MIN;
int32_t x204 = INT32_MIN;
int32_t x213 = 490610;
static uint8_t x215 = UINT8_MAX;
int8_t x216 = 0;
static int16_t x221 = INT16_MIN;
uint32_t x225 = 983U;
uint8_t x227 = UINT8_MAX;
int32_t x233 = INT32_MIN;
uint16_t x236 = UINT16_MAX;
volatile int32_t t57 = -11375;
volatile uint16_t x243 = UINT16_MAX;
volatile uint32_t x244 = UINT32_MAX;
int16_t x246 = -1;
int16_t x247 = INT16_MAX;
volatile int32_t t62 = 1;
int64_t x261 = INT64_MAX;
static int64_t x262 = -976674636598516223LL;
int16_t x264 = -3;
int64_t x271 = INT64_MIN;
volatile int32_t t65 = -2;
uint8_t x276 = UINT8_MAX;
volatile int16_t x279 = INT16_MIN;
static uint64_t x280 = 1012694LLU;
uint32_t x306 = 1498677538U;
uint32_t x312 = UINT32_MAX;
volatile int32_t t75 = -222050;
uint32_t x318 = 38767807U;
volatile int32_t x320 = -1;
int16_t x338 = INT16_MAX;
int16_t x342 = 1973;
volatile int64_t t83 = -10174325LL;
uint16_t x345 = UINT16_MAX;
volatile int32_t t84 = 689402;
int8_t x352 = 25;
static int16_t x358 = -1;
int32_t t87 = 17853619;
static uint8_t x364 = UINT8_MAX;
static volatile int8_t x372 = 0;
uint32_t x377 = UINT32_MAX;
uint8_t x383 = 99U;
int64_t t93 = 9995590042LL;
uint16_t x385 = 1650U;
int64_t x388 = 165617535726576728LL;
volatile int32_t t94 = -1386;
uint8_t x389 = 2U;
int64_t x390 = INT64_MAX;
int16_t x397 = INT16_MIN;
int16_t x403 = -8091;
static volatile int64_t t99 = -1959099927709LL;
static int64_t x414 = INT64_MAX;
int64_t x423 = INT64_MIN;
uint8_t x427 = 0U;
uint64_t t104 = 10027419306LLU;
static int64_t x435 = -372LL;
int64_t x436 = INT64_MAX;
int8_t x437 = INT8_MIN;
static int32_t x448 = 1937;
uint8_t x451 = 39U;
int32_t x456 = -1;
int16_t x467 = INT16_MIN;
uint32_t t114 = 10911414U;
uint8_t x470 = 2U;
uint8_t x473 = UINT8_MAX;
int16_t x476 = -1;
int64_t x477 = -928041699477337LL;
int32_t x481 = INT32_MIN;
static volatile int32_t t118 = 1341;
volatile int16_t x492 = 1713;
int64_t x493 = INT64_MIN;
volatile int64_t t121 = 6924669LL;
volatile int32_t t123 = 12;
volatile int32_t t124 = 6610;
int16_t x514 = -1;
static volatile uint16_t x516 = UINT16_MAX;
volatile int32_t x518 = -13654;
uint8_t x520 = UINT8_MAX;
static int16_t x522 = -1;
static uint64_t t128 = 147LLU;
uint8_t x525 = 67U;
static uint64_t x526 = UINT64_MAX;
int16_t x530 = INT16_MIN;
int16_t x541 = INT16_MIN;
int64_t x542 = INT64_MIN;
uint8_t x554 = 47U;
int32_t x555 = 3469;
int8_t x556 = INT8_MIN;
int32_t x564 = INT32_MIN;
int16_t x571 = INT16_MAX;
static int32_t x572 = INT32_MIN;
static int32_t t141 = 1998669;
static int64_t x578 = 201LL;
uint64_t t142 = 0LLU;
int64_t x587 = INT64_MIN;
int8_t x592 = INT8_MAX;
int16_t x601 = INT16_MIN;
static volatile uint16_t x602 = 15U;
int8_t x603 = -29;
static int16_t x606 = 4;
int64_t x607 = INT64_MIN;
static volatile int16_t x608 = -1;
volatile uint32_t x613 = 14677U;
int8_t x616 = -1;
int32_t x618 = INT32_MAX;
int32_t x623 = -23830554;
int16_t x624 = 122;
int64_t x629 = -12147127801LL;
uint64_t x630 = UINT64_MAX;
uint64_t x639 = 26338712952911LLU;
static int32_t t155 = 15600;
static uint64_t x643 = 56LLU;
int16_t x647 = -1;
volatile uint64_t x652 = 362LLU;
static int16_t x653 = INT16_MAX;
static int8_t x660 = INT8_MIN;
int32_t t160 = -187575;
int32_t x663 = INT32_MIN;
static volatile int32_t t162 = 1072761;
int64_t x673 = INT64_MIN;
int64_t x676 = 15LL;
volatile int8_t x679 = -1;
static uint32_t x681 = 86U;
int64_t x685 = 1852358645328473239LL;
int8_t x686 = -1;
int64_t x688 = -30730057848987LL;
volatile uint64_t x694 = 65993557772LLU;
uint8_t x703 = UINT8_MAX;
static int64_t x705 = INT64_MIN;
static int64_t x706 = 25349331165347LL;
int64_t x713 = INT64_MIN;
int8_t x718 = 38;
int32_t x738 = -4;
uint16_t x739 = 30U;
static volatile int32_t t178 = 599326504;
uint32_t x747 = UINT32_MAX;
int16_t x748 = -1;
static int8_t x753 = -52;
uint64_t x757 = UINT64_MAX;
uint64_t t186 = 193442169066498LLU;
volatile uint64_t t187 = 187124968052LLU;
int32_t t189 = 199;
int8_t x788 = INT8_MIN;
int64_t x792 = 14500LL;
int32_t x793 = INT32_MIN;
int64_t x795 = -1LL;
int16_t x800 = INT16_MIN;
int32_t x801 = -7431987;
uint32_t x817 = UINT32_MAX;
volatile int8_t x823 = INT8_MIN;
static int32_t t199 = 3187356;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	static int16_t x2 = INT16_MIN;
	uint16_t x3 = 0U;
	int64_t x4 = INT64_MAX;
	int64_t t0 = 792137LL;

    t0 = (x1%(x2!=(x3^x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 29601U;
	int32_t x7 = INT32_MAX;
	uint32_t t1 = 237U;

    t1 = (x5%(x6!=(x7^x8)));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -50578178212105LL;
	int64_t x10 = INT64_MIN;
	int16_t x11 = -15467;
	int64_t t2 = 4030844359340909LL;

    t2 = (x9%(x10!=(x11^x12)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = 15;
	int64_t x14 = -120859003835375126LL;
	static uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 1;

    t3 = (x13%(x14!=(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = 4U;
	int32_t x19 = -1;
	int32_t t4 = -1;

    t4 = (x17%(x18!=(x19^x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	static int8_t x22 = 1;
	int8_t x23 = -1;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 662377;

    t5 = (x21%(x22!=(x23^x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = -1;
	int64_t x26 = 21965LL;
	static uint32_t x27 = UINT32_MAX;
	int32_t t6 = 875692;

    t6 = (x25%(x26!=(x27^x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 315LL;
	int32_t x30 = INT32_MAX;
	int16_t x32 = INT16_MIN;

    t7 = (x29%(x30!=(x31^x32)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 30;
	int16_t x34 = INT16_MAX;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = -1;
	volatile int32_t t8 = -6;

    t8 = (x33%(x34!=(x35^x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = INT32_MAX;
	uint64_t x38 = UINT64_MAX;
	uint64_t x39 = UINT64_MAX;
	int8_t x40 = -3;

    t9 = (x37%(x38!=(x39^x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 12LLU;
	static uint16_t x43 = 3675U;
	int8_t x44 = INT8_MAX;
	uint64_t t10 = 107870LLU;

    t10 = (x41%(x42!=(x43^x44)));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	static int64_t x46 = -1LL;
	volatile int16_t x47 = -17;
	int64_t x48 = INT64_MAX;
	volatile int32_t t11 = 1;

    t11 = (x45%(x46!=(x47^x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = INT16_MIN;
	volatile int32_t x51 = -3462174;
	volatile int8_t x52 = 6;
	int64_t t12 = 254LL;

    t12 = (x49%(x50!=(x51^x52)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	int8_t x54 = 3;
	uint32_t x55 = 116987U;
	int64_t x56 = 13938LL;
	uint64_t t13 = 7205264167414LLU;

    t13 = (x53%(x54!=(x55^x56)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 15U;
	int16_t x58 = INT16_MIN;
	volatile uint8_t x59 = 1U;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 27444;

    t14 = (x57%(x58!=(x59^x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	int8_t x62 = INT8_MAX;
	int16_t x64 = 1894;

    t15 = (x61%(x62!=(x63^x64)));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x66 = 41339405LLU;
	int64_t x67 = -1LL;
	int32_t x68 = -1;
	int32_t t16 = -864933;

    t16 = (x65%(x66!=(x67^x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = -108LL;
	static int32_t x70 = INT32_MAX;
	volatile uint64_t x71 = 25LLU;
	int64_t x72 = INT64_MIN;
	static int64_t t17 = 194LL;

    t17 = (x69%(x70!=(x71^x72)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = -593;
	volatile int8_t x74 = INT8_MAX;
	int32_t x75 = 0;
	uint64_t x76 = 696002245159306LLU;
	int32_t t18 = 231350839;

    t18 = (x73%(x74!=(x75^x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	int16_t x80 = -13997;
	int32_t t19 = 654360;

    t19 = (x77%(x78!=(x79^x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -4349LL;
	int64_t x84 = INT64_MAX;
	volatile int64_t t20 = 272528180955449579LL;

    t20 = (x81%(x82!=(x83^x84)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x87 = 56U;
	int64_t x88 = 21482077LL;
	volatile int32_t t21 = -946541221;

    t21 = (x85%(x86!=(x87^x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x90 = UINT16_MAX;
	static int8_t x91 = -1;
	uint16_t x92 = UINT16_MAX;
	int32_t t22 = 13774;

    t22 = (x89%(x90!=(x91^x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = 6085112398LL;
	volatile uint64_t x94 = 6858634367349929236LLU;
	static int64_t x95 = -1LL;
	static volatile int16_t x96 = -1;
	int64_t t23 = -58031246LL;

    t23 = (x93%(x94!=(x95^x96)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = INT64_MIN;
	uint16_t x98 = 3248U;
	static int64_t x100 = INT64_MIN;
	volatile int64_t t24 = -9396415819LL;

    t24 = (x97%(x98!=(x99^x100)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x101 = UINT8_MAX;
	int64_t x102 = INT64_MAX;
	uint16_t x103 = 788U;
	uint16_t x104 = UINT16_MAX;
	static int32_t t25 = 0;

    t25 = (x101%(x102!=(x103^x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MIN;
	uint16_t x106 = 89U;
	uint32_t x107 = 26U;
	int8_t x108 = INT8_MIN;
	volatile int64_t t26 = -21012162430458LL;

    t26 = (x105%(x106!=(x107^x108)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = INT64_MAX;
	int64_t x110 = INT64_MIN;
	static uint8_t x111 = UINT8_MAX;
	static uint32_t x112 = 0U;
	static volatile int64_t t27 = -8709879160472672LL;

    t27 = (x109%(x110!=(x111^x112)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 73034001U;
	int16_t x115 = INT16_MIN;
	uint32_t t28 = 3U;

    t28 = (x113%(x114!=(x115^x116)));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MAX;
	uint8_t x119 = UINT8_MAX;
	volatile uint16_t x120 = UINT16_MAX;

    t29 = (x117%(x118!=(x119^x120)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 166U;
	uint16_t x122 = 488U;
	volatile int16_t x124 = -1;
	int32_t t30 = 1615855;

    t30 = (x121%(x122!=(x123^x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MIN;
	static int32_t t31 = -1;

    t31 = (x125%(x126!=(x127^x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = INT64_MIN;
	int32_t x130 = -411714053;
	volatile int16_t x131 = -965;
	uint16_t x132 = UINT16_MAX;

    t32 = (x129%(x130!=(x131^x132)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -11;
	int64_t x134 = 14079173LL;
	int64_t x135 = -1LL;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = -130;

    t33 = (x133%(x134!=(x135^x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	int32_t x138 = -1;
	static int16_t x139 = 0;
	volatile int16_t x140 = -54;
	volatile int32_t t34 = 4996052;

    t34 = (x137%(x138!=(x139^x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = 0;
	static int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MIN;
	static int16_t x144 = -836;
	volatile int32_t t35 = 906143;

    t35 = (x141%(x142!=(x143^x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = -1LL;
	volatile uint32_t x146 = 20920U;
	volatile int64_t t36 = 59259LL;

    t36 = (x145%(x146!=(x147^x148)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = -1;
	int8_t x150 = -2;
	int64_t x151 = INT64_MIN;
	static int8_t x152 = INT8_MIN;
	static int32_t t37 = 445535;

    t37 = (x149%(x150!=(x151^x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	uint8_t x155 = 5U;
	uint16_t x156 = 4028U;

    t38 = (x153%(x154!=(x155^x156)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = -1LL;
	static uint16_t x159 = 18527U;
	static volatile int64_t x160 = -1LL;
	volatile int32_t t39 = -1613150;

    t39 = (x157%(x158!=(x159^x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x162 = INT16_MIN;
	int64_t x163 = -1LL;
	int8_t x164 = 20;
	int64_t t40 = 3123671206177425LL;

    t40 = (x161%(x162!=(x163^x164)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 3;
	static volatile uint16_t x166 = 12U;
	volatile int8_t x167 = -1;
	int32_t t41 = -4611613;

    t41 = (x165%(x166!=(x167^x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x169 = -259;
	int8_t x170 = INT8_MAX;
	int8_t x171 = INT8_MAX;
	static int64_t x172 = INT64_MIN;
	static int32_t t42 = -4;

    t42 = (x169%(x170!=(x171^x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = -21388LL;
	int16_t x174 = INT16_MIN;
	uint32_t x175 = 0U;
	uint8_t x176 = UINT8_MAX;
	int64_t t43 = 377242771094618248LL;

    t43 = (x173%(x174!=(x175^x176)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	volatile int64_t x178 = -479LL;
	int32_t x179 = INT32_MIN;
	volatile int32_t t44 = 0;

    t44 = (x177%(x178!=(x179^x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x183 = INT32_MIN;
	uint64_t x184 = 1103904340432LLU;
	int32_t t45 = -63;

    t45 = (x181%(x182!=(x183^x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x185 = 0U;
	volatile int64_t x186 = 3344396434272398LL;
	volatile uint16_t x188 = 12U;
	int32_t t46 = -6429981;

    t46 = (x185%(x186!=(x187^x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -13851915057015824LL;
	static int8_t x190 = INT8_MAX;
	volatile int8_t x191 = INT8_MIN;
	int64_t t47 = 24735LL;

    t47 = (x189%(x190!=(x191^x192)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MAX;
	int64_t x195 = INT64_MIN;
	int8_t x196 = -1;
	int32_t t48 = -83539334;

    t48 = (x193%(x194!=(x195^x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -3;
	int8_t x199 = 0;
	int16_t x200 = 0;

    t49 = (x197%(x198!=(x199^x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x201 = 25U;
	uint16_t x202 = UINT16_MAX;
	uint32_t t50 = 5599U;

    t50 = (x201%(x202!=(x203^x204)));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = 63;
	int16_t x210 = -795;
	volatile int32_t x211 = INT32_MIN;
	int64_t x212 = -642184011964809LL;
	static int32_t t51 = -192934467;

    t51 = (x209%(x210!=(x211^x212)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x214 = 109U;
	static int32_t t52 = -5;

    t52 = (x213%(x214!=(x215^x216)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = INT8_MIN;
	int32_t x218 = 0;
	int16_t x219 = INT16_MAX;
	int16_t x220 = -17;
	volatile int32_t t53 = 1426475;

    t53 = (x217%(x218!=(x219^x220)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x222 = 39995LL;
	uint64_t x223 = 3LLU;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t54 = -185946336;

    t54 = (x221%(x222!=(x223^x224)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x226 = -4;
	int8_t x228 = INT8_MIN;
	uint32_t t55 = 2310707U;

    t55 = (x225%(x226!=(x227^x228)));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x234 = INT32_MIN;
	int8_t x235 = -6;
	static int32_t t56 = -1846;

    t56 = (x233%(x234!=(x235^x236)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x237 = -13;
	static int8_t x238 = INT8_MIN;
	volatile uint8_t x239 = 88U;
	int64_t x240 = INT64_MIN;

    t57 = (x237%(x238!=(x239^x240)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x241 = INT32_MIN;
	uint64_t x242 = 27689734960LLU;
	volatile int32_t t58 = 2424;

    t58 = (x241%(x242!=(x243^x244)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x245 = 5;
	int8_t x248 = -17;
	volatile int32_t t59 = -130484;

    t59 = (x245%(x246!=(x247^x248)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = -2187666919446LL;
	int8_t x250 = -1;
	static volatile int64_t x251 = INT64_MIN;
	uint64_t x252 = UINT64_MAX;
	volatile int64_t t60 = 3023081383115830508LL;

    t60 = (x249%(x250!=(x251^x252)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x253 = -1;
	uint64_t x254 = UINT64_MAX;
	uint16_t x255 = 19542U;
	int8_t x256 = -1;
	int32_t t61 = -20091924;

    t61 = (x253%(x254!=(x255^x256)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = -1;
	uint8_t x258 = 12U;
	int16_t x259 = -258;
	static uint8_t x260 = UINT8_MAX;

    t62 = (x257%(x258!=(x259^x260)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x263 = -1;
	int64_t t63 = 768205534LL;

    t63 = (x261%(x262!=(x263^x264)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x265 = -66585970LL;
	uint64_t x266 = 0LLU;
	int32_t x267 = -372759272;
	static volatile int8_t x268 = INT8_MIN;
	int64_t t64 = -3666023629LL;

    t64 = (x265%(x266!=(x267^x268)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x269 = 18U;
	volatile uint16_t x270 = UINT16_MAX;
	volatile int16_t x272 = -24;

    t65 = (x269%(x270!=(x271^x272)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x273 = 16U;
	uint8_t x274 = 39U;
	uint64_t x275 = 1623297607391171725LLU;
	static int32_t t66 = 1;

    t66 = (x273%(x274!=(x275^x276)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = INT8_MAX;
	uint64_t x278 = 6508397411734LLU;
	int32_t t67 = 171465167;

    t67 = (x277%(x278!=(x279^x280)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x281 = -1;
	uint64_t x282 = 5970868255843365LLU;
	uint16_t x283 = 1U;
	volatile int8_t x284 = INT8_MIN;
	int32_t t68 = -125;

    t68 = (x281%(x282!=(x283^x284)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x285 = 96066339U;
	volatile int16_t x286 = -2;
	int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MAX;
	static uint32_t t69 = 3U;

    t69 = (x285%(x286!=(x287^x288)));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = INT8_MAX;
	int16_t x290 = -1;
	volatile int8_t x291 = 10;
	int64_t x292 = INT64_MAX;
	int32_t t70 = 131;

    t70 = (x289%(x290!=(x291^x292)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x293 = -2;
	int64_t x294 = INT64_MIN;
	int16_t x295 = -7182;
	int16_t x296 = -1;
	int32_t t71 = -151;

    t71 = (x293%(x294!=(x295^x296)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x297 = 1909720856445LLU;
	uint16_t x298 = 25751U;
	uint8_t x299 = 2U;
	volatile int32_t x300 = INT32_MAX;
	uint64_t t72 = 1881975715246635LLU;

    t72 = (x297%(x298!=(x299^x300)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = INT64_MAX;
	int32_t x302 = -1;
	uint64_t x303 = 48245LLU;
	int8_t x304 = INT8_MIN;
	static int64_t t73 = -27787LL;

    t73 = (x301%(x302!=(x303^x304)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = INT16_MAX;
	volatile int16_t x307 = 2;
	uint64_t x308 = UINT64_MAX;
	static int32_t t74 = -9296;

    t74 = (x305%(x306!=(x307^x308)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x309 = 3885U;
	uint16_t x310 = 216U;
	int8_t x311 = INT8_MIN;

    t75 = (x309%(x310!=(x311^x312)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = 31;
	static volatile int64_t x314 = -1LL;
	static volatile uint8_t x315 = UINT8_MAX;
	int8_t x316 = -63;
	static int32_t t76 = 2077827;

    t76 = (x313%(x314!=(x315^x316)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x317 = -1;
	static int64_t x319 = INT64_MIN;
	int32_t t77 = -22538072;

    t77 = (x317%(x318!=(x319^x320)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x321 = 28077888U;
	uint8_t x322 = UINT8_MAX;
	int16_t x323 = -20;
	volatile uint8_t x324 = 38U;
	static uint32_t t78 = 182232573U;

    t78 = (x321%(x322!=(x323^x324)));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = INT32_MAX;
	int16_t x326 = -2319;
	uint16_t x327 = UINT16_MAX;
	uint32_t x328 = 9315U;
	volatile int32_t t79 = 3;

    t79 = (x325%(x326!=(x327^x328)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x329 = UINT8_MAX;
	int64_t x330 = -132729762805004864LL;
	int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	volatile int32_t t80 = 53088;

    t80 = (x329%(x330!=(x331^x332)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x333 = 26853U;
	static int8_t x334 = -1;
	int64_t x335 = INT64_MIN;
	int32_t x336 = INT32_MIN;
	uint32_t t81 = 5759725U;

    t81 = (x333%(x334!=(x335^x336)));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = -1;
	int64_t x339 = INT64_MIN;
	int64_t x340 = INT64_MIN;
	int32_t t82 = -485741;

    t82 = (x337%(x338!=(x339^x340)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x341 = -1LL;
	static uint64_t x343 = UINT64_MAX;
	static int32_t x344 = INT32_MAX;

    t83 = (x341%(x342!=(x343^x344)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x346 = 0;
	volatile uint32_t x347 = 173808269U;
	int64_t x348 = -4LL;

    t84 = (x345%(x346!=(x347^x348)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x349 = INT8_MIN;
	int8_t x350 = 1;
	uint64_t x351 = 302775610769115LLU;
	int32_t t85 = 18029;

    t85 = (x349%(x350!=(x351^x352)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x353 = -115000423796LL;
	uint64_t x354 = 375232036285LLU;
	int16_t x355 = INT16_MAX;
	int16_t x356 = 485;
	volatile int64_t t86 = 49087120122612LL;

    t86 = (x353%(x354!=(x355^x356)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x357 = UINT16_MAX;
	uint8_t x359 = 9U;
	static volatile int8_t x360 = INT8_MAX;

    t87 = (x357%(x358!=(x359^x360)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x361 = 198U;
	int64_t x362 = INT64_MIN;
	uint16_t x363 = UINT16_MAX;
	volatile int32_t t88 = 181;

    t88 = (x361%(x362!=(x363^x364)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x365 = 0;
	volatile int8_t x366 = -1;
	int64_t x367 = -1750130LL;
	int32_t x368 = INT32_MIN;
	volatile int32_t t89 = 3241;

    t89 = (x365%(x366!=(x367^x368)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x369 = 31U;
	volatile uint16_t x370 = 3U;
	int64_t x371 = INT64_MIN;
	static volatile uint32_t t90 = 213448U;

    t90 = (x369%(x370!=(x371^x372)));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x373 = INT16_MIN;
	uint8_t x374 = 3U;
	static int64_t x375 = INT64_MIN;
	uint64_t x376 = 53240644LLU;
	int32_t t91 = 399018830;

    t91 = (x373%(x374!=(x375^x376)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x378 = -1LL;
	int16_t x379 = -1;
	static int8_t x380 = INT8_MAX;
	uint32_t t92 = 35581U;

    t92 = (x377%(x378!=(x379^x380)));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x381 = -8923223499511190LL;
	int64_t x382 = -790LL;
	int32_t x384 = INT32_MIN;

    t93 = (x381%(x382!=(x383^x384)));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x386 = INT8_MAX;
	volatile int64_t x387 = -1LL;

    t94 = (x385%(x386!=(x387^x388)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x391 = 6695240841LL;
	int8_t x392 = INT8_MIN;
	int32_t t95 = 33171;

    t95 = (x389%(x390!=(x391^x392)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x393 = INT16_MAX;
	int8_t x394 = INT8_MIN;
	static int32_t x395 = INT32_MIN;
	int8_t x396 = 1;
	static volatile int32_t t96 = -121;

    t96 = (x393%(x394!=(x395^x396)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x398 = INT64_MAX;
	uint64_t x399 = 117LLU;
	uint8_t x400 = 0U;
	int32_t t97 = -4494;

    t97 = (x397%(x398!=(x399^x400)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x401 = -5911;
	uint8_t x402 = UINT8_MAX;
	static uint16_t x404 = 2806U;
	volatile int32_t t98 = -6;

    t98 = (x401%(x402!=(x403^x404)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x405 = INT64_MAX;
	uint16_t x406 = 11U;
	int64_t x407 = 1LL;
	int16_t x408 = INT16_MIN;

    t99 = (x405%(x406!=(x407^x408)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x409 = 3U;
	static volatile uint32_t x410 = 549U;
	static int8_t x411 = INT8_MIN;
	int8_t x412 = INT8_MIN;
	volatile uint32_t t100 = 3350835U;

    t100 = (x409%(x410!=(x411^x412)));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x413 = -1;
	volatile int8_t x415 = INT8_MAX;
	volatile int64_t x416 = INT64_MAX;
	static int32_t t101 = -340;

    t101 = (x413%(x414!=(x415^x416)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x417 = 341;
	static uint8_t x418 = 2U;
	int64_t x419 = INT64_MIN;
	static int64_t x420 = -2902LL;
	volatile int32_t t102 = 45162051;

    t102 = (x417%(x418!=(x419^x420)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x421 = INT8_MAX;
	int32_t x422 = INT32_MIN;
	volatile int16_t x424 = INT16_MAX;
	volatile int32_t t103 = 15882;

    t103 = (x421%(x422!=(x423^x424)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x425 = UINT64_MAX;
	static int16_t x426 = -1;
	uint64_t x428 = 4533521937LLU;

    t104 = (x425%(x426!=(x427^x428)));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x429 = 15U;
	int16_t x430 = INT16_MIN;
	volatile uint32_t x431 = 1802325142U;
	uint32_t x432 = 85U;
	static int32_t t105 = -39;

    t105 = (x429%(x430!=(x431^x432)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x433 = 37U;
	int64_t x434 = INT64_MIN;
	int32_t t106 = 1875366;

    t106 = (x433%(x434!=(x435^x436)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x438 = INT16_MIN;
	static uint32_t x439 = UINT32_MAX;
	int8_t x440 = INT8_MAX;
	volatile int32_t t107 = -1;

    t107 = (x437%(x438!=(x439^x440)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x441 = INT8_MIN;
	uint64_t x442 = 823143443740LLU;
	uint16_t x443 = UINT16_MAX;
	int8_t x444 = -1;
	int32_t t108 = -11196;

    t108 = (x441%(x442!=(x443^x444)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x445 = -1;
	int64_t x446 = INT64_MAX;
	static int8_t x447 = INT8_MIN;
	static volatile int32_t t109 = -369;

    t109 = (x445%(x446!=(x447^x448)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x449 = 2268699344630595LLU;
	int16_t x450 = INT16_MIN;
	int32_t x452 = 12977;
	uint64_t t110 = 31470062LLU;

    t110 = (x449%(x450!=(x451^x452)));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x453 = INT64_MIN;
	static int64_t x454 = -105309003990108LL;
	static uint8_t x455 = 95U;
	static int64_t t111 = 125363074451465LL;

    t111 = (x453%(x454!=(x455^x456)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x457 = 1075624243406508091LLU;
	int64_t x458 = INT64_MAX;
	int32_t x459 = -24449544;
	volatile int32_t x460 = INT32_MIN;
	static uint64_t t112 = 69268726261LLU;

    t112 = (x457%(x458!=(x459^x460)));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x461 = 151U;
	int8_t x462 = INT8_MAX;
	static int64_t x463 = -1LL;
	int32_t x464 = INT32_MAX;
	uint32_t t113 = 57683U;

    t113 = (x461%(x462!=(x463^x464)));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint32_t x465 = UINT32_MAX;
	volatile int8_t x466 = INT8_MIN;
	volatile int8_t x468 = INT8_MIN;

    t114 = (x465%(x466!=(x467^x468)));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x469 = 2;
	int8_t x471 = INT8_MIN;
	uint64_t x472 = UINT64_MAX;
	int32_t t115 = 16;

    t115 = (x469%(x470!=(x471^x472)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x474 = UINT8_MAX;
	static volatile int16_t x475 = INT16_MIN;
	int32_t t116 = -53;

    t116 = (x473%(x474!=(x475^x476)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x478 = INT32_MIN;
	int8_t x479 = INT8_MAX;
	int8_t x480 = -1;
	int64_t t117 = -2313171814LL;

    t117 = (x477%(x478!=(x479^x480)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x482 = 3LL;
	static uint8_t x483 = 1U;
	volatile int8_t x484 = INT8_MIN;

    t118 = (x481%(x482!=(x483^x484)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x485 = 10311U;
	int8_t x486 = 1;
	uint32_t x487 = 3985208U;
	int32_t x488 = -256066;
	int32_t t119 = 662053385;

    t119 = (x485%(x486!=(x487^x488)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x489 = INT64_MAX;
	int32_t x490 = INT32_MIN;
	static uint8_t x491 = 34U;
	static int64_t t120 = -44415279LL;

    t120 = (x489%(x490!=(x491^x492)));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x494 = 6U;
	int32_t x495 = INT32_MIN;
	uint64_t x496 = 47LLU;

    t121 = (x493%(x494!=(x495^x496)));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x497 = 49U;
	uint64_t x498 = UINT64_MAX;
	volatile uint32_t x499 = 41673859U;
	static volatile int64_t x500 = 4LL;
	int32_t t122 = 467979;

    t122 = (x497%(x498!=(x499^x500)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x501 = 2U;
	int16_t x502 = INT16_MAX;
	static int16_t x503 = INT16_MIN;
	int64_t x504 = INT64_MAX;

    t123 = (x501%(x502!=(x503^x504)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x505 = INT32_MAX;
	int16_t x506 = INT16_MIN;
	volatile int64_t x507 = INT64_MIN;
	int32_t x508 = INT32_MIN;

    t124 = (x505%(x506!=(x507^x508)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x509 = INT32_MIN;
	int64_t x510 = -1LL;
	uint32_t x511 = 460326U;
	volatile int8_t x512 = INT8_MIN;
	volatile int32_t t125 = -1;

    t125 = (x509%(x510!=(x511^x512)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x513 = -1;
	volatile uint8_t x515 = 1U;
	static int32_t t126 = 82857655;

    t126 = (x513%(x514!=(x515^x516)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x517 = -1;
	int16_t x519 = -11;
	volatile int32_t t127 = -14;

    t127 = (x517%(x518!=(x519^x520)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x521 = UINT64_MAX;
	uint32_t x523 = UINT32_MAX;
	uint16_t x524 = 24U;

    t128 = (x521%(x522!=(x523^x524)));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x527 = -1;
	volatile int64_t x528 = INT64_MIN;
	volatile int32_t t129 = -112388;

    t129 = (x525%(x526!=(x527^x528)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x529 = 2;
	uint64_t x531 = 1415LLU;
	int32_t x532 = INT32_MAX;
	int32_t t130 = -14043;

    t130 = (x529%(x530!=(x531^x532)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x533 = -3;
	int16_t x534 = -1853;
	uint64_t x535 = 13016380109606LLU;
	int32_t x536 = 5;
	volatile int32_t t131 = 214;

    t131 = (x533%(x534!=(x535^x536)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x537 = 1910U;
	static int8_t x538 = 0;
	static int64_t x539 = -1LL;
	static volatile uint64_t x540 = 14065LLU;
	volatile uint32_t t132 = 3135U;

    t132 = (x537%(x538!=(x539^x540)));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x543 = UINT8_MAX;
	int16_t x544 = INT16_MIN;
	int32_t t133 = 3;

    t133 = (x541%(x542!=(x543^x544)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x545 = INT32_MAX;
	int32_t x546 = -5970851;
	static uint16_t x547 = UINT16_MAX;
	static volatile uint32_t x548 = UINT32_MAX;
	volatile int32_t t134 = 3728208;

    t134 = (x545%(x546!=(x547^x548)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x549 = 5491;
	int16_t x550 = 20;
	int32_t x551 = INT32_MAX;
	uint16_t x552 = 42U;
	volatile int32_t t135 = -4;

    t135 = (x549%(x550!=(x551^x552)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x553 = INT16_MAX;
	volatile int32_t t136 = -950312130;

    t136 = (x553%(x554!=(x555^x556)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x557 = -58;
	int8_t x558 = INT8_MIN;
	int64_t x559 = INT64_MAX;
	static int16_t x560 = INT16_MIN;
	volatile int32_t t137 = 26748239;

    t137 = (x557%(x558!=(x559^x560)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x561 = -5LL;
	int32_t x562 = 76228580;
	volatile int16_t x563 = -1;
	int64_t t138 = -1LL;

    t138 = (x561%(x562!=(x563^x564)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x565 = -1;
	volatile int32_t x566 = INT32_MAX;
	int64_t x567 = INT64_MIN;
	int32_t x568 = INT32_MAX;
	int32_t t139 = -7006989;

    t139 = (x565%(x566!=(x567^x568)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x569 = UINT8_MAX;
	int8_t x570 = 0;
	int32_t t140 = 875400;

    t140 = (x569%(x570!=(x571^x572)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x573 = -712763;
	uint8_t x574 = 2U;
	uint8_t x575 = 120U;
	uint8_t x576 = 1U;

    t141 = (x573%(x574!=(x575^x576)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x577 = UINT64_MAX;
	int16_t x579 = -2358;
	int32_t x580 = -835918;

    t142 = (x577%(x578!=(x579^x580)));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x581 = INT16_MIN;
	static int8_t x582 = INT8_MIN;
	static int16_t x583 = INT16_MIN;
	int16_t x584 = INT16_MIN;
	int32_t t143 = 2421854;

    t143 = (x581%(x582!=(x583^x584)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x585 = INT16_MAX;
	static volatile uint16_t x586 = 31967U;
	uint64_t x588 = 1838944485659LLU;
	int32_t t144 = 11333;

    t144 = (x585%(x586!=(x587^x588)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x589 = UINT16_MAX;
	int64_t x590 = -1LL;
	int16_t x591 = 196;
	volatile int32_t t145 = 9876440;

    t145 = (x589%(x590!=(x591^x592)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x593 = INT64_MIN;
	int16_t x594 = INT16_MIN;
	int64_t x595 = INT64_MAX;
	volatile int16_t x596 = INT16_MIN;
	int64_t t146 = 6999364474LL;

    t146 = (x593%(x594!=(x595^x596)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x597 = 3048374LLU;
	int32_t x598 = -1;
	int8_t x599 = 61;
	volatile int32_t x600 = -1;
	uint64_t t147 = 58280LLU;

    t147 = (x597%(x598!=(x599^x600)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x604 = INT64_MIN;
	int32_t t148 = 3002;

    t148 = (x601%(x602!=(x603^x604)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x605 = -61469050288LL;
	int64_t t149 = -252045100902LL;

    t149 = (x605%(x606!=(x607^x608)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x614 = 2;
	int8_t x615 = -1;
	volatile uint32_t t150 = 1843818U;

    t150 = (x613%(x614!=(x615^x616)));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x617 = INT16_MIN;
	int16_t x619 = -1916;
	uint8_t x620 = 23U;
	int32_t t151 = -916852332;

    t151 = (x617%(x618!=(x619^x620)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x621 = 135861956810LLU;
	int16_t x622 = -1;
	volatile uint64_t t152 = 8908095063391978LLU;

    t152 = (x621%(x622!=(x623^x624)));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x631 = INT64_MAX;
	volatile int8_t x632 = INT8_MIN;
	static volatile int64_t t153 = -26LL;

    t153 = (x629%(x630!=(x631^x632)));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x633 = -14612491LL;
	int64_t x634 = 13188178LL;
	int16_t x635 = -16019;
	int8_t x636 = -1;
	volatile int64_t t154 = -10403448LL;

    t154 = (x633%(x634!=(x635^x636)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x637 = 13U;
	static uint64_t x638 = 3988LLU;
	uint16_t x640 = 94U;

    t155 = (x637%(x638!=(x639^x640)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x641 = 29;
	int16_t x642 = INT16_MIN;
	uint8_t x644 = 29U;
	volatile int32_t t156 = 1553607;

    t156 = (x641%(x642!=(x643^x644)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x645 = -55;
	int32_t x646 = INT32_MAX;
	int64_t x648 = -23802530290221811LL;
	static int32_t t157 = 1517;

    t157 = (x645%(x646!=(x647^x648)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x649 = INT16_MIN;
	int32_t x650 = -1;
	int8_t x651 = INT8_MIN;
	volatile int32_t t158 = -1;

    t158 = (x649%(x650!=(x651^x652)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x654 = 131738559U;
	int8_t x655 = 0;
	int8_t x656 = INT8_MAX;
	volatile int32_t t159 = -1547781;

    t159 = (x653%(x654!=(x655^x656)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x657 = 561U;
	int8_t x658 = 1;
	int64_t x659 = INT64_MIN;

    t160 = (x657%(x658!=(x659^x660)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x661 = 468U;
	int64_t x662 = 7LL;
	static uint64_t x664 = 104287589082LLU;
	volatile int32_t t161 = 1673654;

    t161 = (x661%(x662!=(x663^x664)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x665 = INT8_MIN;
	volatile uint16_t x666 = 3U;
	volatile uint16_t x667 = 349U;
	static int16_t x668 = -1;

    t162 = (x665%(x666!=(x667^x668)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x669 = 479725U;
	static volatile uint64_t x670 = 3981949939615LLU;
	uint16_t x671 = 119U;
	int64_t x672 = INT64_MIN;
	volatile uint32_t t163 = 94U;

    t163 = (x669%(x670!=(x671^x672)));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x674 = UINT32_MAX;
	uint8_t x675 = UINT8_MAX;
	volatile int64_t t164 = 0LL;

    t164 = (x673%(x674!=(x675^x676)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x677 = 910686951257LL;
	int32_t x678 = 492708;
	int8_t x680 = -26;
	volatile int64_t t165 = 7LL;

    t165 = (x677%(x678!=(x679^x680)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x682 = -1;
	static uint16_t x683 = 149U;
	static int16_t x684 = -4;
	volatile uint32_t t166 = 2513649U;

    t166 = (x681%(x682!=(x683^x684)));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x687 = 23369732076740LL;
	static int64_t t167 = 55481822315502LL;

    t167 = (x685%(x686!=(x687^x688)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x689 = INT16_MIN;
	uint8_t x690 = 2U;
	static volatile int8_t x691 = 21;
	volatile int16_t x692 = INT16_MIN;
	static volatile int32_t t168 = -248131496;

    t168 = (x689%(x690!=(x691^x692)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x693 = INT16_MIN;
	uint64_t x695 = 179949599157775549LLU;
	int64_t x696 = INT64_MIN;
	int32_t t169 = 1341;

    t169 = (x693%(x694!=(x695^x696)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x697 = 196;
	static int64_t x698 = INT64_MIN;
	static int64_t x699 = INT64_MAX;
	int32_t x700 = -11497850;
	volatile int32_t t170 = 9499;

    t170 = (x697%(x698!=(x699^x700)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x701 = 11;
	volatile int16_t x702 = -1;
	static uint64_t x704 = UINT64_MAX;
	volatile int32_t t171 = 1;

    t171 = (x701%(x702!=(x703^x704)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x707 = 93U;
	int8_t x708 = 23;
	static volatile int64_t t172 = 1490775995825186762LL;

    t172 = (x705%(x706!=(x707^x708)));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x714 = 21U;
	volatile uint8_t x715 = 0U;
	int32_t x716 = 35;
	static int64_t t173 = -83LL;

    t173 = (x713%(x714!=(x715^x716)));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x717 = INT32_MIN;
	int16_t x719 = INT16_MIN;
	uint16_t x720 = 21U;
	int32_t t174 = -7943313;

    t174 = (x717%(x718!=(x719^x720)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x721 = 29U;
	int16_t x722 = INT16_MAX;
	volatile int16_t x723 = -68;
	int32_t x724 = -1;
	volatile int32_t t175 = 58685;

    t175 = (x721%(x722!=(x723^x724)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x725 = UINT8_MAX;
	int16_t x726 = INT16_MIN;
	uint16_t x727 = 3U;
	int32_t x728 = 66982078;
	static int32_t t176 = 15;

    t176 = (x725%(x726!=(x727^x728)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint16_t x733 = 614U;
	uint32_t x734 = 14213389U;
	static volatile int8_t x735 = INT8_MAX;
	static volatile int16_t x736 = INT16_MAX;
	volatile int32_t t177 = -515843;

    t177 = (x733%(x734!=(x735^x736)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x737 = 166;
	static uint8_t x740 = UINT8_MAX;

    t178 = (x737%(x738!=(x739^x740)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x741 = 7;
	static volatile uint8_t x742 = 127U;
	int32_t x743 = INT32_MIN;
	volatile int8_t x744 = -1;
	int32_t t179 = 26;

    t179 = (x741%(x742!=(x743^x744)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x745 = UINT64_MAX;
	int16_t x746 = -1;
	volatile uint64_t t180 = 235934LLU;

    t180 = (x745%(x746!=(x747^x748)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x749 = 167016365LLU;
	int32_t x750 = -190;
	int8_t x751 = -2;
	int16_t x752 = INT16_MAX;
	uint64_t t181 = 3LLU;

    t181 = (x749%(x750!=(x751^x752)));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x754 = INT64_MIN;
	uint64_t x755 = UINT64_MAX;
	volatile int16_t x756 = -1;
	static int32_t t182 = -5460;

    t182 = (x753%(x754!=(x755^x756)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x758 = INT32_MIN;
	uint8_t x759 = UINT8_MAX;
	static volatile int8_t x760 = -1;
	uint64_t t183 = 126496780470102780LLU;

    t183 = (x757%(x758!=(x759^x760)));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x761 = UINT64_MAX;
	static uint64_t x762 = 14640763LLU;
	volatile uint8_t x763 = 67U;
	uint64_t x764 = UINT64_MAX;
	static uint64_t t184 = 1856679LLU;

    t184 = (x761%(x762!=(x763^x764)));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x765 = 57124U;
	uint8_t x766 = 1U;
	uint8_t x767 = UINT8_MAX;
	uint64_t x768 = 1776073LLU;
	uint32_t t185 = 26807U;

    t185 = (x765%(x766!=(x767^x768)));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x769 = UINT64_MAX;
	volatile int16_t x770 = INT16_MIN;
	uint64_t x771 = 17874LLU;
	uint64_t x772 = 5LLU;

    t186 = (x769%(x770!=(x771^x772)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x773 = UINT64_MAX;
	int64_t x774 = INT64_MIN;
	volatile int64_t x775 = -1LL;
	static int16_t x776 = 1793;

    t187 = (x773%(x774!=(x775^x776)));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint8_t x777 = 112U;
	volatile int32_t x778 = INT32_MIN;
	volatile int64_t x779 = -1LL;
	static int64_t x780 = 2642313319581351220LL;
	int32_t t188 = -1;

    t188 = (x777%(x778!=(x779^x780)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x781 = 51;
	static uint16_t x782 = UINT16_MAX;
	int16_t x783 = INT16_MIN;
	volatile uint64_t x784 = 241238090813LLU;

    t189 = (x781%(x782!=(x783^x784)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x785 = 11714LLU;
	int8_t x786 = INT8_MIN;
	uint16_t x787 = 154U;
	uint64_t t190 = 1344608108717460881LLU;

    t190 = (x785%(x786!=(x787^x788)));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x789 = INT16_MAX;
	volatile int8_t x790 = INT8_MIN;
	int16_t x791 = -1;
	int32_t t191 = -1421136;

    t191 = (x789%(x790!=(x791^x792)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x794 = UINT16_MAX;
	int64_t x796 = -1037376419LL;
	static int32_t t192 = -69;

    t192 = (x793%(x794!=(x795^x796)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x797 = 5U;
	int64_t x798 = -259870482896296LL;
	int64_t x799 = -1LL;
	uint32_t t193 = 5U;

    t193 = (x797%(x798!=(x799^x800)));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x802 = 67U;
	int8_t x803 = INT8_MIN;
	int32_t x804 = -417354;
	volatile int32_t t194 = -14031;

    t194 = (x801%(x802!=(x803^x804)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x805 = INT32_MIN;
	int16_t x806 = 3465;
	int8_t x807 = -16;
	int64_t x808 = -17469682928004LL;
	static int32_t t195 = 3429;

    t195 = (x805%(x806!=(x807^x808)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x809 = INT8_MAX;
	int64_t x810 = 78363844520790LL;
	int32_t x811 = 1;
	int16_t x812 = INT16_MIN;
	volatile int32_t t196 = -1205703;

    t196 = (x809%(x810!=(x811^x812)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x813 = 127U;
	int64_t x814 = -49242159904317516LL;
	int64_t x815 = -804609LL;
	int16_t x816 = 5;
	int32_t t197 = 28;

    t197 = (x813%(x814!=(x815^x816)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x818 = 9U;
	uint8_t x819 = 34U;
	uint32_t x820 = 173645U;
	volatile uint32_t t198 = 1144912141U;

    t198 = (x817%(x818!=(x819^x820)));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x821 = 145;
	static int64_t x822 = INT64_MAX;
	uint64_t x824 = 3353991540LLU;

    t199 = (x821%(x822!=(x823^x824)));

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

