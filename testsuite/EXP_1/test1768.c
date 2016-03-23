
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

int8_t x2 = INT8_MIN;
int64_t x6 = INT64_MIN;
int16_t x9 = 0;
static int16_t x12 = 46;
int32_t t2 = 237978080;
static volatile int16_t x13 = INT16_MAX;
uint64_t x19 = 4345685899585682899LLU;
static volatile uint64_t t4 = 219126092150LLU;
int32_t x25 = -1;
volatile uint64_t t6 = 1159244629LLU;
int64_t x30 = 485LL;
static uint16_t x36 = UINT16_MAX;
int64_t x37 = -1LL;
uint8_t x41 = 0U;
static int32_t x42 = -17;
uint8_t x46 = 4U;
uint64_t t13 = 4218837546555212LLU;
int32_t x67 = INT32_MIN;
int32_t t15 = 1045441459;
volatile int32_t t17 = 1;
volatile uint8_t x83 = UINT8_MAX;
int32_t t18 = -2387;
uint32_t x88 = UINT32_MAX;
int8_t x93 = 34;
int16_t x95 = INT16_MAX;
uint8_t x98 = 0U;
uint64_t t22 = 12416793305LLU;
static volatile uint8_t x102 = UINT8_MAX;
uint64_t x105 = UINT64_MAX;
static uint64_t x110 = UINT64_MAX;
static int64_t x112 = INT64_MIN;
int32_t t27 = -772222029;
uint64_t x121 = 71483559026663LLU;
static int8_t x122 = INT8_MAX;
static uint16_t x128 = 16760U;
volatile int64_t x133 = -1LL;
volatile int32_t t32 = -987605765;
int32_t t33 = 340;
volatile int16_t x151 = -1;
volatile int32_t t36 = 346008;
int16_t x157 = INT16_MAX;
int32_t x163 = 3796;
static volatile int64_t x164 = INT64_MIN;
static int16_t x166 = INT16_MIN;
volatile uint64_t t39 = 80785436913LLU;
volatile int64_t x170 = -1LL;
int32_t x172 = INT32_MIN;
int8_t x173 = 3;
static int32_t x179 = 1;
uint8_t x180 = UINT8_MAX;
uint16_t x187 = 0U;
volatile int32_t t45 = -1650809;
int16_t x195 = INT16_MIN;
volatile int32_t t46 = -155094919;
volatile int32_t x202 = -1;
volatile int32_t t48 = 5900;
static uint16_t x206 = 28345U;
uint8_t x209 = 1U;
int16_t x210 = -8128;
volatile uint64_t x212 = UINT64_MAX;
uint32_t x220 = UINT32_MAX;
int16_t x224 = INT16_MIN;
static int64_t x232 = -1LL;
static uint16_t x233 = 29U;
int32_t x236 = INT32_MAX;
uint64_t x241 = UINT64_MAX;
int8_t x243 = INT8_MIN;
int32_t t58 = -19318;
int32_t x246 = -320;
int16_t x260 = INT16_MIN;
int8_t x268 = INT8_MIN;
int32_t t63 = 235928;
uint64_t x274 = 340LLU;
int16_t x277 = -1;
volatile int16_t x279 = INT16_MIN;
volatile uint32_t x283 = 2U;
uint32_t t68 = 21U;
int32_t t69 = -395;
int8_t x295 = -1;
int16_t x316 = -1;
static volatile int32_t t75 = 1;
static uint16_t x320 = 209U;
static int64_t x325 = INT64_MIN;
static uint16_t x330 = 1215U;
volatile int64_t x332 = INT64_MAX;
volatile uint32_t x336 = 14927U;
volatile uint32_t t80 = 299760U;
uint8_t x338 = 84U;
volatile int32_t x349 = INT32_MIN;
volatile uint8_t x355 = 1U;
uint16_t x357 = 0U;
int16_t x358 = -48;
int32_t t85 = -161128456;
uint8_t x361 = UINT8_MAX;
static volatile int32_t x369 = INT32_MAX;
volatile int8_t x375 = INT8_MIN;
int8_t x380 = INT8_MIN;
volatile int64_t t90 = -2094961961261LL;
static int32_t t93 = -28699665;
int64_t x400 = 30859358714399LL;
static uint32_t x406 = 2603U;
int16_t x417 = INT16_MIN;
int16_t x419 = INT16_MAX;
volatile uint16_t x420 = UINT16_MAX;
static int32_t t99 = 363;
int64_t x434 = -1LL;
static volatile uint8_t x444 = 91U;
int64_t t104 = 42LL;
int32_t x451 = 454;
uint64_t x458 = 60LLU;
int64_t x460 = -1LL;
int64_t t107 = 1093277425152LL;
volatile int64_t x465 = INT64_MIN;
int8_t x480 = INT8_MIN;
int32_t x481 = INT32_MIN;
int16_t x482 = INT16_MAX;
uint8_t x491 = UINT8_MAX;
int64_t x497 = -1LL;
static int64_t t117 = 10147676374996466LL;
volatile int8_t x504 = -37;
uint8_t x515 = 12U;
int8_t x524 = INT8_MIN;
int16_t x529 = -52;
int8_t x531 = INT8_MIN;
int64_t x535 = INT64_MIN;
static volatile int8_t x540 = -1;
int64_t x542 = -11554LL;
static int8_t x545 = -1;
uint16_t x546 = 20U;
static volatile uint16_t x548 = 98U;
static volatile int64_t x551 = INT64_MIN;
uint32_t x555 = 805612U;
static int32_t t130 = 8172;
uint16_t x563 = 1627U;
static uint8_t x565 = 63U;
static int32_t t133 = -6817;
int16_t x573 = INT16_MIN;
volatile int8_t x577 = -1;
int16_t x583 = -1;
static volatile uint32_t x588 = 940560U;
static int32_t t138 = -4055;
uint32_t t139 = 22U;
static int32_t x601 = INT32_MIN;
int8_t x606 = INT8_MIN;
static volatile uint64_t t143 = 2009933347347LLU;
uint16_t x619 = 32626U;
int32_t t145 = -92908;
int8_t x622 = 0;
int8_t x625 = INT8_MIN;
uint64_t x631 = 23482958958825809LLU;
int16_t x632 = INT16_MIN;
static volatile int16_t x636 = 1;
int64_t x638 = INT64_MIN;
volatile uint32_t t151 = 6757100U;
int16_t x647 = INT16_MIN;
uint32_t t153 = 2791787U;
int8_t x659 = INT8_MIN;
uint64_t x661 = 11600811147LLU;
volatile int8_t x663 = INT8_MIN;
int8_t x665 = INT8_MIN;
static int32_t x666 = INT32_MAX;
static int16_t x672 = INT16_MIN;
int16_t x678 = 39;
static volatile int8_t x683 = INT8_MIN;
int64_t x690 = INT64_MAX;
static int32_t x694 = INT32_MIN;
volatile int64_t x696 = 770904556LL;
int32_t x704 = -1;
int32_t t167 = 4101170;
volatile uint16_t x710 = 17756U;
volatile int32_t x713 = INT32_MIN;
volatile uint8_t x715 = UINT8_MAX;
static volatile int32_t x716 = INT32_MIN;
int8_t x720 = INT8_MAX;
uint32_t t171 = 1U;
volatile uint32_t t173 = 476038U;
static int16_t x736 = INT16_MIN;
volatile uint16_t x738 = UINT16_MAX;
uint8_t x746 = 2U;
int32_t t178 = 498949773;
uint32_t x754 = 110U;
int32_t x757 = INT32_MIN;
volatile uint64_t x758 = UINT64_MAX;
volatile uint16_t x765 = 153U;
int8_t x775 = INT8_MAX;
int32_t x779 = INT32_MIN;
int32_t t185 = -71678471;
int16_t x784 = 1;
volatile int32_t t186 = -40307502;
uint32_t x787 = 161358162U;
volatile uint32_t x791 = UINT32_MAX;
uint16_t x792 = UINT16_MAX;
static volatile int32_t t190 = 221;
volatile int16_t x804 = INT16_MAX;
static uint64_t x805 = 1793465691167LLU;
static volatile uint16_t x808 = 30U;
uint16_t x817 = 272U;
volatile uint64_t t194 = 6LLU;
volatile uint32_t x835 = 753133254U;
volatile uint32_t t197 = 1056043100U;
int16_t x841 = -1;
int32_t x842 = INT32_MAX;
int8_t x844 = INT8_MIN;
volatile uint32_t t198 = 1170743U;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int64_t x3 = INT64_MAX;
	volatile int8_t x4 = -1;
	int64_t t0 = 437863106896315LL;

    t0 = (((x1<=x2)+x3)/x4);

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MAX;
	volatile int16_t x7 = -212;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 0;

    t1 = (((x5<=x6)+x7)/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x10 = -173390023632343570LL;
	uint8_t x11 = UINT8_MAX;

    t2 = (((x9<=x10)+x11)/x12);

    if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x14 = INT64_MAX;
	volatile int8_t x15 = INT8_MIN;
	uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t3 = 11LLU;

    t3 = (((x13<=x14)+x15)/x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	static int64_t x18 = INT64_MAX;
	uint64_t x20 = 515221902110875LLU;

    t4 = (((x17<=x18)+x19)/x20);

    if (t4 != 8434LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 4724;
	static int32_t x22 = 102;
	int8_t x23 = INT8_MAX;
	int8_t x24 = 2;
	static int32_t t5 = -16;

    t5 = (((x21<=x22)+x23)/x24);

    if (t5 != 63) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;

    t6 = (((x25<=x26)+x27)/x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = -1;
	uint64_t x31 = UINT64_MAX;
	int64_t x32 = INT64_MAX;
	volatile uint64_t t7 = 755792810619341129LLU;

    t7 = (((x29<=x30)+x31)/x32);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	static uint16_t x35 = 2064U;
	int32_t t8 = -95;

    t8 = (((x33<=x34)+x35)/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x38 = INT32_MIN;
	int16_t x39 = INT16_MAX;
	uint32_t x40 = 4U;
	volatile uint32_t t9 = 4U;

    t9 = (((x37<=x38)+x39)/x40);

    if (t9 != 8191U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x43 = -2;
	int32_t x44 = 1;
	int32_t t10 = 1;

    t10 = (((x41<=x42)+x43)/x44);

    if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = 11628139LL;
	volatile int64_t x47 = -1LL;
	uint32_t x48 = 14862956U;
	volatile int64_t t11 = -199663819944725249LL;

    t11 = (((x45<=x46)+x47)/x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = UINT8_MAX;
	int8_t x50 = INT8_MIN;
	volatile uint32_t x51 = UINT32_MAX;
	int64_t x52 = INT64_MIN;
	int64_t t12 = -252152LL;

    t12 = (((x49<=x50)+x51)/x52);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = 1396267U;
	int32_t x58 = -1;
	static uint64_t x59 = 245893991414255LLU;
	int64_t x60 = -1LL;

    t13 = (((x57<=x58)+x59)/x60);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = -52;
	int32_t x62 = INT32_MAX;
	uint32_t x63 = 184993961U;
	volatile uint8_t x64 = UINT8_MAX;
	volatile uint32_t t14 = 1480247U;

    t14 = (((x61<=x62)+x63)/x64);

    if (t14 != 725466U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x65 = -1;
	volatile uint64_t x66 = 82689971843LLU;
	int8_t x68 = INT8_MIN;

    t15 = (((x65<=x66)+x67)/x68);

    if (t15 != 16777216) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x73 = 7512537U;
	static volatile int8_t x74 = INT8_MIN;
	int16_t x75 = -1;
	int16_t x76 = -1;
	static int32_t t16 = 57683573;

    t16 = (((x73<=x74)+x75)/x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x77 = INT32_MIN;
	uint16_t x78 = UINT16_MAX;
	uint16_t x79 = 270U;
	volatile uint8_t x80 = UINT8_MAX;

    t17 = (((x77<=x78)+x79)/x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = -1;
	volatile int64_t x82 = INT64_MIN;
	int32_t x84 = 1914574;

    t18 = (((x81<=x82)+x83)/x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x85 = INT32_MIN;
	volatile uint8_t x86 = UINT8_MAX;
	volatile int8_t x87 = 1;
	volatile uint32_t t19 = 413U;

    t19 = (((x85<=x86)+x87)/x88);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x89 = INT32_MIN;
	static uint16_t x90 = UINT16_MAX;
	int16_t x91 = INT16_MIN;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t20 = 701665;

    t20 = (((x89<=x90)+x91)/x92);

    if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x94 = 3U;
	static int32_t x96 = -1;
	volatile int32_t t21 = 55132246;

    t21 = (((x93<=x94)+x95)/x96);

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = 46U;
	volatile uint64_t x99 = 25531978681045LLU;
	int16_t x100 = INT16_MAX;

    t22 = (((x97<=x98)+x99)/x100);

    if (t22 != 779197933LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x101 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	uint16_t x104 = 346U;
	int32_t t23 = 1;

    t23 = (((x101<=x102)+x103)/x104);

    if (t23 != -6206600) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x106 = INT16_MIN;
	volatile int64_t x107 = 1LL;
	static int8_t x108 = INT8_MIN;
	int64_t t24 = 13602628047876LL;

    t24 = (((x105<=x106)+x107)/x108);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = 12902254049LL;
	static uint8_t x111 = 0U;
	static volatile int64_t t25 = 3257967876980112LL;

    t25 = (((x109<=x110)+x111)/x112);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x113 = 19U;
	uint64_t x114 = 928087851076206LLU;
	int8_t x115 = 10;
	static volatile int32_t x116 = INT32_MIN;
	volatile int32_t t26 = -138;

    t26 = (((x113<=x114)+x115)/x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x117 = INT64_MAX;
	static uint16_t x118 = UINT16_MAX;
	volatile int16_t x119 = INT16_MAX;
	int8_t x120 = -5;

    t27 = (((x117<=x118)+x119)/x120);

    if (t27 != -6553) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x123 = -1LL;
	static int32_t x124 = INT32_MIN;
	volatile int64_t t28 = -1LL;

    t28 = (((x121<=x122)+x123)/x124);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = INT8_MAX;
	int32_t x126 = INT32_MIN;
	volatile uint32_t x127 = 562780313U;
	uint32_t t29 = 8926U;

    t29 = (((x125<=x126)+x127)/x128);

    if (t29 != 33578U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = -1;
	static int8_t x130 = -1;
	int16_t x131 = INT16_MIN;
	uint8_t x132 = 34U;
	volatile int32_t t30 = 15;

    t30 = (((x129<=x130)+x131)/x132);

    if (t30 != -963) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x134 = 1U;
	int32_t x135 = INT32_MIN;
	int32_t x136 = -1;
	int32_t t31 = INT32_MAX;

    t31 = (((x133<=x134)+x135)/x136);

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = 1727025003U;
	static volatile uint16_t x138 = UINT16_MAX;
	int8_t x139 = -51;
	uint16_t x140 = 93U;

    t32 = (((x137<=x138)+x139)/x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x141 = 108719U;
	int64_t x142 = -1LL;
	int8_t x143 = -1;
	int32_t x144 = INT32_MIN;

    t33 = (((x141<=x142)+x143)/x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = -17;
	int16_t x146 = 22;
	volatile int8_t x147 = INT8_MIN;
	volatile int32_t x148 = -30518585;
	int32_t t34 = -1403;

    t34 = (((x145<=x146)+x147)/x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x149 = 1511970345LLU;
	uint64_t x150 = UINT64_MAX;
	int32_t x152 = -1;
	volatile int32_t t35 = -8189;

    t35 = (((x149<=x150)+x151)/x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x153 = 1U;
	int16_t x154 = INT16_MIN;
	int32_t x155 = 253;
	volatile uint8_t x156 = UINT8_MAX;

    t36 = (((x153<=x154)+x155)/x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x158 = -1;
	volatile uint32_t x159 = UINT32_MAX;
	int32_t x160 = INT32_MIN;
	uint32_t t37 = 1073U;

    t37 = (((x157<=x158)+x159)/x160);

    if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x161 = 109U;
	uint16_t x162 = 13244U;
	int64_t t38 = -7354702528446110LL;

    t38 = (((x161<=x162)+x163)/x164);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = INT32_MAX;
	uint64_t x167 = 1LLU;
	static int32_t x168 = INT32_MAX;

    t39 = (((x165<=x166)+x167)/x168);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x169 = 38U;
	int8_t x171 = INT8_MIN;
	static volatile int32_t t40 = -66548;

    t40 = (((x169<=x170)+x171)/x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x174 = -64562545;
	uint16_t x175 = UINT16_MAX;
	static int64_t x176 = 7824676125LL;
	volatile int64_t t41 = 103691LL;

    t41 = (((x173<=x174)+x175)/x176);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x177 = 2U;
	int64_t x178 = 6384409345705167LL;
	int32_t t42 = 57088;

    t42 = (((x177<=x178)+x179)/x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x181 = INT8_MAX;
	int8_t x182 = -1;
	uint64_t x183 = UINT64_MAX;
	uint64_t x184 = 5LLU;
	volatile uint64_t t43 = 93LLU;

    t43 = (((x181<=x182)+x183)/x184);

    if (t43 != 3689348814741910323LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x185 = UINT64_MAX;
	int8_t x186 = INT8_MIN;
	int64_t x188 = 966570473195LL;
	static volatile int64_t t44 = 229950503044LL;

    t44 = (((x185<=x186)+x187)/x188);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MAX;
	uint16_t x191 = 27U;
	static volatile int16_t x192 = -10287;

    t45 = (((x189<=x190)+x191)/x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x193 = INT8_MIN;
	static int32_t x194 = INT32_MIN;
	uint8_t x196 = UINT8_MAX;

    t46 = (((x193<=x194)+x195)/x196);

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x197 = 1U;
	int32_t x198 = INT32_MAX;
	uint32_t x199 = UINT32_MAX;
	static int8_t x200 = INT8_MIN;
	uint32_t t47 = 39U;

    t47 = (((x197<=x198)+x199)/x200);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x201 = 3U;
	int8_t x203 = INT8_MIN;
	int32_t x204 = -1;

    t48 = (((x201<=x202)+x203)/x204);

    if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = INT16_MIN;
	uint32_t x207 = 977822040U;
	static int8_t x208 = INT8_MIN;
	uint32_t t49 = 427U;

    t49 = (((x205<=x206)+x207)/x208);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x211 = INT64_MAX;
	uint64_t t50 = 4973295050732687560LLU;

    t50 = (((x209<=x210)+x211)/x212);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x213 = INT8_MAX;
	int64_t x214 = -1LL;
	uint8_t x215 = 1U;
	uint8_t x216 = 35U;
	volatile int32_t t51 = -4093;

    t51 = (((x213<=x214)+x215)/x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x217 = INT16_MIN;
	int64_t x218 = 4750937LL;
	volatile int64_t x219 = 212646134LL;
	int64_t t52 = 30120874351155LL;

    t52 = (((x217<=x218)+x219)/x220);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x221 = 7196883LL;
	int64_t x222 = INT64_MAX;
	int8_t x223 = -2;
	volatile int32_t t53 = -25373755;

    t53 = (((x221<=x222)+x223)/x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x225 = INT16_MIN;
	int64_t x226 = -86973719LL;
	int16_t x227 = 0;
	volatile int8_t x228 = INT8_MIN;
	int32_t t54 = 2561023;

    t54 = (((x225<=x226)+x227)/x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x229 = 114805796685703LL;
	uint16_t x230 = 1846U;
	uint16_t x231 = UINT16_MAX;
	volatile int64_t t55 = -52282902504896LL;

    t55 = (((x229<=x230)+x231)/x232);

    if (t55 != -65535LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x234 = 11020;
	uint32_t x235 = 86135U;
	static volatile uint32_t t56 = 3U;

    t56 = (((x233<=x234)+x235)/x236);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x237 = -1;
	int64_t x238 = -1LL;
	int32_t x239 = 3293;
	int16_t x240 = INT16_MIN;
	int32_t t57 = 469;

    t57 = (((x237<=x238)+x239)/x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x242 = 1U;
	int8_t x244 = 28;

    t58 = (((x241<=x242)+x243)/x244);

    if (t58 != -4) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x245 = INT16_MIN;
	volatile int8_t x247 = INT8_MAX;
	int16_t x248 = INT16_MIN;
	int32_t t59 = -32008;

    t59 = (((x245<=x246)+x247)/x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = -1;
	int32_t x250 = 26948128;
	volatile int8_t x251 = INT8_MAX;
	static int16_t x252 = -1;
	int32_t t60 = 19;

    t60 = (((x249<=x250)+x251)/x252);

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x253 = INT8_MAX;
	int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MAX;
	uint16_t x256 = 1789U;
	volatile int32_t t61 = 7;

    t61 = (((x253<=x254)+x255)/x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = INT16_MIN;
	int64_t x258 = INT64_MAX;
	static int8_t x259 = 14;
	volatile int32_t t62 = -641490;

    t62 = (((x257<=x258)+x259)/x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x265 = INT8_MIN;
	volatile int8_t x266 = 1;
	int32_t x267 = 758272021;

    t63 = (((x265<=x266)+x267)/x268);

    if (t63 != -5924000) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x269 = 1U;
	volatile uint16_t x270 = UINT16_MAX;
	int64_t x271 = INT64_MIN;
	int8_t x272 = -3;
	static int64_t t64 = -1LL;

    t64 = (((x269<=x270)+x271)/x272);

    if (t64 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = INT8_MIN;
	volatile int8_t x275 = INT8_MIN;
	static uint8_t x276 = UINT8_MAX;
	static volatile int32_t t65 = -862;

    t65 = (((x273<=x274)+x275)/x276);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x278 = 1;
	static uint64_t x280 = 48466550013236294LLU;
	uint64_t t66 = 471698296316884LLU;

    t66 = (((x277<=x278)+x279)/x280);

    if (t66 != 380LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = INT64_MAX;
	uint64_t x282 = 48955LLU;
	int32_t x284 = -1464842;
	volatile uint32_t t67 = 5234788U;

    t67 = (((x281<=x282)+x283)/x284);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x285 = -1LL;
	uint32_t x286 = 13332U;
	static uint32_t x287 = 213856450U;
	int8_t x288 = 19;

    t68 = (((x285<=x286)+x287)/x288);

    if (t68 != 11255602U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x289 = UINT16_MAX;
	static uint64_t x290 = UINT64_MAX;
	volatile int8_t x291 = INT8_MIN;
	volatile uint16_t x292 = 1U;

    t69 = (((x289<=x290)+x291)/x292);

    if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x293 = INT32_MAX;
	int16_t x294 = INT16_MIN;
	int64_t x296 = INT64_MIN;
	int64_t t70 = -15174775884LL;

    t70 = (((x293<=x294)+x295)/x296);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x297 = 143U;
	static uint64_t x298 = 890169398057905574LLU;
	uint32_t x299 = 403640299U;
	static int16_t x300 = INT16_MIN;
	uint32_t t71 = 1835351328U;

    t71 = (((x297<=x298)+x299)/x300);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = -1;
	int32_t x302 = 161657485;
	uint16_t x303 = UINT16_MAX;
	volatile uint64_t x304 = 72965LLU;
	volatile uint64_t t72 = 497028LLU;

    t72 = (((x301<=x302)+x303)/x304);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x305 = UINT8_MAX;
	volatile int8_t x306 = INT8_MIN;
	int8_t x307 = 6;
	uint64_t x308 = UINT64_MAX;
	static uint64_t t73 = 22682464LLU;

    t73 = (((x305<=x306)+x307)/x308);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x309 = 8325192785221068LLU;
	int8_t x310 = INT8_MIN;
	uint8_t x311 = UINT8_MAX;
	int16_t x312 = -8;
	volatile int32_t t74 = -4878;

    t74 = (((x309<=x310)+x311)/x312);

    if (t74 != -32) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x313 = 62;
	int32_t x314 = 7995;
	int16_t x315 = -100;

    t75 = (((x313<=x314)+x315)/x316);

    if (t75 != 99) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x317 = INT32_MAX;
	int16_t x318 = 82;
	static int32_t x319 = 448586051;
	volatile int32_t t76 = 19225731;

    t76 = (((x317<=x318)+x319)/x320);

    if (t76 != 2146344) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x321 = INT16_MAX;
	static int64_t x322 = 1LL;
	int64_t x323 = -1LL;
	uint32_t x324 = 10883U;
	static int64_t t77 = 0LL;

    t77 = (((x321<=x322)+x323)/x324);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x326 = 93U;
	int32_t x327 = INT32_MIN;
	uint32_t x328 = 102U;
	uint32_t t78 = 3U;

    t78 = (((x325<=x326)+x327)/x328);

    if (t78 != 21053761U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x329 = 1;
	static int16_t x331 = INT16_MIN;
	volatile int64_t t79 = -1LL;

    t79 = (((x329<=x330)+x331)/x332);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x333 = -1LL;
	static int16_t x334 = 59;
	int8_t x335 = -1;

    t80 = (((x333<=x334)+x335)/x336);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x337 = INT64_MAX;
	uint8_t x339 = 33U;
	int16_t x340 = INT16_MIN;
	static int32_t t81 = 3663;

    t81 = (((x337<=x338)+x339)/x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = INT32_MIN;
	static uint8_t x342 = 58U;
	int32_t x343 = -1;
	uint64_t x344 = 627678LLU;
	static volatile uint64_t t82 = 1149020022965550567LLU;

    t82 = (((x341<=x342)+x343)/x344);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x350 = -83016204LL;
	int8_t x351 = INT8_MIN;
	volatile int8_t x352 = 30;
	int32_t t83 = 1;

    t83 = (((x349<=x350)+x351)/x352);

    if (t83 != -4) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x353 = INT64_MIN;
	int16_t x354 = -5096;
	int64_t x356 = -25981LL;
	volatile int64_t t84 = 32LL;

    t84 = (((x353<=x354)+x355)/x356);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x359 = -1;
	volatile int8_t x360 = 1;

    t85 = (((x357<=x358)+x359)/x360);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x362 = INT32_MAX;
	static volatile int16_t x363 = -9558;
	uint64_t x364 = 38753469687362679LLU;
	volatile uint64_t t86 = 170419LLU;

    t86 = (((x361<=x362)+x363)/x364);

    if (t86 != 476LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x365 = -1LL;
	volatile int32_t x366 = INT32_MIN;
	static int32_t x367 = -1;
	int32_t x368 = INT32_MIN;
	volatile int32_t t87 = 1;

    t87 = (((x365<=x366)+x367)/x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x370 = 194U;
	static int32_t x371 = 60317;
	int8_t x372 = -1;
	volatile int32_t t88 = -114824;

    t88 = (((x369<=x370)+x371)/x372);

    if (t88 != -60317) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x373 = 1224330262180LLU;
	volatile int32_t x374 = 263;
	int32_t x376 = INT32_MIN;
	volatile int32_t t89 = 213;

    t89 = (((x373<=x374)+x375)/x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x377 = INT32_MIN;
	uint32_t x378 = 7033U;
	int64_t x379 = -152817644450893673LL;

    t90 = (((x377<=x378)+x379)/x380);

    if (t90 != 1193887847272606LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x381 = INT64_MIN;
	volatile int32_t x382 = INT32_MAX;
	uint16_t x383 = UINT16_MAX;
	volatile int32_t x384 = -15605;
	int32_t t91 = -31168;

    t91 = (((x381<=x382)+x383)/x384);

    if (t91 != -4) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = INT16_MAX;
	int32_t x386 = 108753;
	static int32_t x387 = INT32_MIN;
	int8_t x388 = -1;
	static volatile int32_t t92 = INT32_MAX;

    t92 = (((x385<=x386)+x387)/x388);

    if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x393 = UINT64_MAX;
	int64_t x394 = -1LL;
	static int32_t x395 = -1;
	int16_t x396 = -124;

    t93 = (((x393<=x394)+x395)/x396);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MAX;
	static uint32_t x399 = 0U;
	volatile int64_t t94 = -13LL;

    t94 = (((x397<=x398)+x399)/x400);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x401 = INT8_MAX;
	int16_t x402 = INT16_MIN;
	uint16_t x403 = UINT16_MAX;
	int8_t x404 = INT8_MIN;
	int32_t t95 = 374330;

    t95 = (((x401<=x402)+x403)/x404);

    if (t95 != -511) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x405 = INT16_MIN;
	static int8_t x407 = -1;
	uint8_t x408 = 10U;
	int32_t t96 = -3762481;

    t96 = (((x405<=x406)+x407)/x408);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x409 = INT64_MIN;
	static uint64_t x410 = 214963086018031LLU;
	static int16_t x411 = INT16_MIN;
	int32_t x412 = 14201103;
	volatile int32_t t97 = 100;

    t97 = (((x409<=x410)+x411)/x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x413 = 1892;
	static volatile int16_t x414 = INT16_MIN;
	int16_t x415 = INT16_MAX;
	int16_t x416 = 7119;
	static int32_t t98 = -850637;

    t98 = (((x413<=x414)+x415)/x416);

    if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x418 = INT8_MIN;

    t99 = (((x417<=x418)+x419)/x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x425 = 52U;
	int16_t x426 = INT16_MAX;
	uint32_t x427 = 261638778U;
	static uint16_t x428 = UINT16_MAX;
	volatile uint32_t t100 = 381493405U;

    t100 = (((x425<=x426)+x427)/x428);

    if (t100 != 3992U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x429 = 2U;
	static int16_t x430 = -1;
	int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MAX;
	static volatile int64_t t101 = -3LL;

    t101 = (((x429<=x430)+x431)/x432);

    if (t101 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x433 = UINT16_MAX;
	uint8_t x435 = 0U;
	uint32_t x436 = UINT32_MAX;
	volatile uint32_t t102 = 13U;

    t102 = (((x433<=x434)+x435)/x436);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x441 = -1;
	static int16_t x442 = 1;
	static uint64_t x443 = 1256248134613614LLU;
	volatile uint64_t t103 = 687990971416960LLU;

    t103 = (((x441<=x442)+x443)/x444);

    if (t103 != 13804924556193LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x445 = INT16_MIN;
	static int8_t x446 = -1;
	int64_t x447 = 7506208660716LL;
	uint8_t x448 = 11U;

    t104 = (((x445<=x446)+x447)/x448);

    if (t104 != 682382605519LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x449 = 18;
	int64_t x450 = INT64_MAX;
	int32_t x452 = INT32_MAX;
	volatile int32_t t105 = 33;

    t105 = (((x449<=x450)+x451)/x452);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x453 = -15303;
	uint8_t x454 = 0U;
	int8_t x455 = -1;
	static int64_t x456 = INT64_MAX;
	int64_t t106 = -2323165LL;

    t106 = (((x453<=x454)+x455)/x456);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x457 = INT8_MIN;
	int16_t x459 = INT16_MIN;

    t107 = (((x457<=x458)+x459)/x460);

    if (t107 != 32768LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x461 = 110U;
	int16_t x462 = -1;
	int16_t x463 = INT16_MIN;
	uint16_t x464 = 4004U;
	volatile int32_t t108 = -532;

    t108 = (((x461<=x462)+x463)/x464);

    if (t108 != -8) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x466 = 13687U;
	uint16_t x467 = UINT16_MAX;
	int64_t x468 = INT64_MIN;
	volatile int64_t t109 = 28044361514552956LL;

    t109 = (((x465<=x466)+x467)/x468);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x469 = -55LL;
	int16_t x470 = -652;
	uint8_t x471 = 1U;
	static int32_t x472 = -58044814;
	int32_t t110 = 110;

    t110 = (((x469<=x470)+x471)/x472);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x473 = INT8_MIN;
	static int64_t x474 = 485716840985017346LL;
	uint64_t x475 = 316201LLU;
	int16_t x476 = INT16_MIN;
	static uint64_t t111 = 7LLU;

    t111 = (((x473<=x474)+x475)/x476);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x477 = 85527669093973LLU;
	volatile int8_t x478 = -1;
	int64_t x479 = INT64_MIN;
	int64_t t112 = -604463LL;

    t112 = (((x477<=x478)+x479)/x480);

    if (t112 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x483 = 1714809770334538330LL;
	int16_t x484 = INT16_MAX;
	static volatile int64_t t113 = 1LL;

    t113 = (((x481<=x482)+x483)/x484);

    if (t113 != 52333438225487LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x485 = 108U;
	int64_t x486 = -1LL;
	int64_t x487 = 9190126LL;
	uint64_t x488 = 83403773863705LLU;
	volatile uint64_t t114 = 1177225LLU;

    t114 = (((x485<=x486)+x487)/x488);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x489 = 4028;
	uint64_t x490 = UINT64_MAX;
	uint8_t x492 = UINT8_MAX;
	int32_t t115 = -57929507;

    t115 = (((x489<=x490)+x491)/x492);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x493 = -1826;
	uint8_t x494 = 74U;
	static uint64_t x495 = UINT64_MAX;
	volatile int16_t x496 = INT16_MIN;
	volatile uint64_t t116 = 828689258975282LLU;

    t116 = (((x493<=x494)+x495)/x496);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x498 = -6LL;
	static int64_t x499 = 28265042370LL;
	int32_t x500 = INT32_MAX;

    t117 = (((x497<=x498)+x499)/x500);

    if (t117 != 13LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x501 = 13954U;
	volatile int32_t x502 = INT32_MIN;
	static int64_t x503 = -29550LL;
	volatile int64_t t118 = 9804LL;

    t118 = (((x501<=x502)+x503)/x504);

    if (t118 != 798LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x505 = 27560495;
	int16_t x506 = 10261;
	uint64_t x507 = 77041808592039521LLU;
	int16_t x508 = INT16_MIN;
	uint64_t t119 = 919LLU;

    t119 = (((x505<=x506)+x507)/x508);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x509 = 1U;
	volatile int8_t x510 = -1;
	int16_t x511 = -1;
	uint16_t x512 = 111U;
	int32_t t120 = -45317;

    t120 = (((x509<=x510)+x511)/x512);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x513 = -1LL;
	int32_t x514 = INT32_MAX;
	int32_t x516 = -768;
	volatile int32_t t121 = 22321291;

    t121 = (((x513<=x514)+x515)/x516);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x521 = INT64_MIN;
	int32_t x522 = 210406689;
	int16_t x523 = INT16_MAX;
	int32_t t122 = -224697991;

    t122 = (((x521<=x522)+x523)/x524);

    if (t122 != -256) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x530 = 0U;
	volatile int64_t x532 = 4020426701163766LL;
	volatile int64_t t123 = -984LL;

    t123 = (((x529<=x530)+x531)/x532);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x533 = INT16_MIN;
	uint16_t x534 = 1056U;
	int32_t x536 = -38836449;
	static volatile int64_t t124 = -16863401318LL;

    t124 = (((x533<=x534)+x535)/x536);

    if (t124 != 237492671815LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x537 = 7;
	volatile int8_t x538 = -1;
	int8_t x539 = -4;
	volatile int32_t t125 = 1464579;

    t125 = (((x537<=x538)+x539)/x540);

    if (t125 != 4) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x541 = 8U;
	int64_t x543 = 29274018687790LL;
	volatile int16_t x544 = INT16_MIN;
	int64_t t126 = -3749484857409262045LL;

    t126 = (((x541<=x542)+x543)/x544);

    if (t126 != -893372152LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x547 = -58;
	int32_t t127 = -9;

    t127 = (((x545<=x546)+x547)/x548);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x549 = UINT8_MAX;
	static volatile int64_t x550 = 68410108494619LL;
	int64_t x552 = INT64_MAX;
	static volatile int64_t t128 = -10916091LL;

    t128 = (((x549<=x550)+x551)/x552);

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x553 = 2375090696240465162LLU;
	volatile uint16_t x554 = 22650U;
	static uint8_t x556 = UINT8_MAX;
	uint32_t t129 = 71790514U;

    t129 = (((x553<=x554)+x555)/x556);

    if (t129 != 3159U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x557 = INT16_MAX;
	int32_t x558 = INT32_MAX;
	int32_t x559 = INT32_MIN;
	uint8_t x560 = 2U;

    t130 = (((x557<=x558)+x559)/x560);

    if (t130 != -1073741823) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x561 = 0;
	int8_t x562 = INT8_MAX;
	static int16_t x564 = -3;
	volatile int32_t t131 = 56;

    t131 = (((x561<=x562)+x563)/x564);

    if (t131 != -542) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x566 = INT32_MAX;
	int16_t x567 = INT16_MIN;
	static int8_t x568 = 12;
	int32_t t132 = -5045966;

    t132 = (((x565<=x566)+x567)/x568);

    if (t132 != -2730) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x569 = UINT64_MAX;
	int32_t x570 = -1;
	static uint8_t x571 = 3U;
	int8_t x572 = INT8_MIN;

    t133 = (((x569<=x570)+x571)/x572);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x574 = -1;
	static int64_t x575 = -1LL;
	uint32_t x576 = 113887U;
	int64_t t134 = -768148LL;

    t134 = (((x573<=x574)+x575)/x576);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x578 = UINT64_MAX;
	static uint8_t x579 = 7U;
	static uint64_t x580 = 63854844557841LLU;
	volatile uint64_t t135 = 32332933810LLU;

    t135 = (((x577<=x578)+x579)/x580);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint8_t x581 = 63U;
	static int8_t x582 = INT8_MAX;
	uint64_t x584 = 355LLU;
	volatile uint64_t t136 = 102370448825660784LLU;

    t136 = (((x581<=x582)+x583)/x584);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x585 = -30;
	uint32_t x586 = 189U;
	int16_t x587 = -13;
	volatile uint32_t t137 = 278572U;

    t137 = (((x585<=x586)+x587)/x588);

    if (t137 != 4566U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x589 = 281694LL;
	int8_t x590 = INT8_MIN;
	static int16_t x591 = INT16_MAX;
	int16_t x592 = INT16_MAX;

    t138 = (((x589<=x590)+x591)/x592);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x593 = UINT32_MAX;
	int16_t x594 = INT16_MIN;
	uint32_t x595 = UINT32_MAX;
	static uint32_t x596 = 19U;

    t139 = (((x593<=x594)+x595)/x596);

    if (t139 != 226050910U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x597 = -14068817LL;
	static volatile int8_t x598 = INT8_MIN;
	int32_t x599 = -1;
	uint16_t x600 = UINT16_MAX;
	int32_t t140 = 218;

    t140 = (((x597<=x598)+x599)/x600);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x602 = -8;
	static volatile uint32_t x603 = 29U;
	static volatile uint8_t x604 = 26U;
	static volatile uint32_t t141 = 201U;

    t141 = (((x601<=x602)+x603)/x604);

    if (t141 != 1U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x605 = 384;
	int8_t x607 = INT8_MIN;
	volatile int64_t x608 = -1949958505768122LL;
	int64_t t142 = 94LL;

    t142 = (((x605<=x606)+x607)/x608);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x609 = INT64_MAX;
	uint64_t x610 = 182LLU;
	int16_t x611 = 0;
	uint64_t x612 = UINT64_MAX;

    t143 = (((x609<=x610)+x611)/x612);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x613 = UINT32_MAX;
	uint16_t x614 = UINT16_MAX;
	int64_t x615 = INT64_MIN;
	int32_t x616 = INT32_MIN;
	volatile int64_t t144 = 2245348106702886LL;

    t144 = (((x613<=x614)+x615)/x616);

    if (t144 != 4294967296LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x617 = INT64_MIN;
	volatile int16_t x618 = INT16_MIN;
	volatile int8_t x620 = 35;

    t145 = (((x617<=x618)+x619)/x620);

    if (t145 != 932) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x621 = -1;
	uint8_t x623 = 2U;
	int32_t x624 = INT32_MAX;
	int32_t t146 = -184198;

    t146 = (((x621<=x622)+x623)/x624);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x626 = 4LLU;
	int64_t x627 = INT64_MIN;
	volatile int16_t x628 = INT16_MIN;
	volatile int64_t t147 = -1367632419LL;

    t147 = (((x625<=x626)+x627)/x628);

    if (t147 != 281474976710656LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x629 = 853246967306343LL;
	int32_t x630 = -1;
	uint64_t t148 = 164735514690594362LLU;

    t148 = (((x629<=x630)+x631)/x632);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x633 = UINT32_MAX;
	static volatile uint16_t x634 = 0U;
	int8_t x635 = -49;
	int32_t t149 = 0;

    t149 = (((x633<=x634)+x635)/x636);

    if (t149 != -49) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x637 = INT64_MAX;
	int64_t x639 = 252200LL;
	static int64_t x640 = INT64_MIN;
	static int64_t t150 = -813LL;

    t150 = (((x637<=x638)+x639)/x640);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x641 = 10;
	int64_t x642 = INT64_MIN;
	uint32_t x643 = UINT32_MAX;
	int32_t x644 = INT32_MAX;

    t151 = (((x641<=x642)+x643)/x644);

    if (t151 != 2U) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x645 = UINT16_MAX;
	static volatile int16_t x646 = INT16_MIN;
	int32_t x648 = 87468571;
	volatile int32_t t152 = 94;

    t152 = (((x645<=x646)+x647)/x648);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x649 = 1;
	int16_t x650 = INT16_MIN;
	uint32_t x651 = UINT32_MAX;
	volatile int32_t x652 = -1;

    t153 = (((x649<=x650)+x651)/x652);

    if (t153 != 1U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x653 = 11;
	volatile int16_t x654 = 0;
	int32_t x655 = -972463;
	int16_t x656 = INT16_MAX;
	volatile int32_t t154 = 1;

    t154 = (((x653<=x654)+x655)/x656);

    if (t154 != -29) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x657 = 623083U;
	uint16_t x658 = 16U;
	int8_t x660 = 1;
	volatile int32_t t155 = -13461675;

    t155 = (((x657<=x658)+x659)/x660);

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x662 = 22199;
	uint16_t x664 = 123U;
	static volatile int32_t t156 = 16049531;

    t156 = (((x661<=x662)+x663)/x664);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x667 = -10108;
	int32_t x668 = -354742;
	int32_t t157 = 127335347;

    t157 = (((x665<=x666)+x667)/x668);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x669 = INT8_MIN;
	int8_t x670 = 1;
	uint64_t x671 = 2719744401040905368LLU;
	uint64_t t158 = 48837620299LLU;

    t158 = (((x669<=x670)+x671)/x672);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x673 = -1;
	volatile int64_t x674 = INT64_MIN;
	static int8_t x675 = -1;
	int16_t x676 = INT16_MIN;
	volatile int32_t t159 = 6070;

    t159 = (((x673<=x674)+x675)/x676);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x677 = INT8_MIN;
	int16_t x679 = INT16_MIN;
	int16_t x680 = INT16_MAX;
	volatile int32_t t160 = 22912909;

    t160 = (((x677<=x678)+x679)/x680);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x681 = INT32_MIN;
	int16_t x682 = INT16_MIN;
	uint32_t x684 = 1033714U;
	static volatile uint32_t t161 = 429068275U;

    t161 = (((x681<=x682)+x683)/x684);

    if (t161 != 4154U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x685 = 795LL;
	static int8_t x686 = 2;
	int64_t x687 = INT64_MAX;
	volatile int16_t x688 = -2;
	int64_t t162 = 1972118185LL;

    t162 = (((x685<=x686)+x687)/x688);

    if (t162 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x689 = -3319482;
	int32_t x691 = INT32_MIN;
	uint8_t x692 = 104U;
	volatile int32_t t163 = -445077381;

    t163 = (((x689<=x690)+x691)/x692);

    if (t163 != -20648881) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x693 = 122U;
	int8_t x695 = INT8_MAX;
	volatile int64_t t164 = -530885LL;

    t164 = (((x693<=x694)+x695)/x696);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x697 = INT8_MIN;
	static uint64_t x698 = 2539589252116664LLU;
	int32_t x699 = INT32_MIN;
	int16_t x700 = 1;
	int32_t t165 = INT32_MIN;

    t165 = (((x697<=x698)+x699)/x700);

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x701 = INT32_MIN;
	int64_t x702 = INT64_MIN;
	uint32_t x703 = 47378131U;
	volatile uint32_t t166 = 255462U;

    t166 = (((x701<=x702)+x703)/x704);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x705 = 4U;
	int32_t x706 = INT32_MIN;
	static uint8_t x707 = 73U;
	volatile int16_t x708 = -1748;

    t167 = (((x705<=x706)+x707)/x708);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x709 = UINT8_MAX;
	int32_t x711 = INT32_MIN;
	int8_t x712 = INT8_MIN;
	volatile int32_t t168 = -43;

    t168 = (((x709<=x710)+x711)/x712);

    if (t168 != 16777215) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x714 = -5;
	int32_t t169 = 3130592;

    t169 = (((x713<=x714)+x715)/x716);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x717 = 12;
	int32_t x718 = INT32_MIN;
	uint32_t x719 = 56055U;
	volatile uint32_t t170 = 31468619U;

    t170 = (((x717<=x718)+x719)/x720);

    if (t170 != 441U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x721 = INT64_MIN;
	int8_t x722 = -1;
	uint32_t x723 = 2091226228U;
	int8_t x724 = 15;

    t171 = (((x721<=x722)+x723)/x724);

    if (t171 != 139415081U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x725 = UINT32_MAX;
	uint32_t x726 = 1070847944U;
	uint16_t x727 = 2368U;
	int64_t x728 = -10904368179LL;
	int64_t t172 = 486930627LL;

    t172 = (((x725<=x726)+x727)/x728);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x729 = 0LLU;
	static uint64_t x730 = UINT64_MAX;
	uint8_t x731 = 53U;
	uint32_t x732 = 4772U;

    t173 = (((x729<=x730)+x731)/x732);

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x733 = 1U;
	volatile int64_t x734 = -3772796602189LL;
	static volatile uint16_t x735 = UINT16_MAX;
	static int32_t t174 = 41324;

    t174 = (((x733<=x734)+x735)/x736);

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x737 = 1954405969LL;
	int32_t x739 = 83036;
	int32_t x740 = -1;
	int32_t t175 = -19390;

    t175 = (((x737<=x738)+x739)/x740);

    if (t175 != -83036) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x741 = 13999;
	static int16_t x742 = -20;
	int64_t x743 = 15509820044429085LL;
	uint16_t x744 = UINT16_MAX;
	volatile int64_t t176 = 3275522534380LL;

    t176 = (((x741<=x742)+x743)/x744);

    if (t176 != 236664683671LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x745 = -6340;
	static int64_t x747 = INT64_MIN;
	uint16_t x748 = 17278U;
	volatile int64_t t177 = -2331735760420LL;

    t177 = (((x745<=x746)+x747)/x748);

    if (t177 != -533821740760202LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x749 = 1U;
	int32_t x750 = -1;
	int8_t x751 = INT8_MIN;
	volatile int32_t x752 = -27212;

    t178 = (((x749<=x750)+x751)/x752);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x753 = -18;
	int16_t x755 = INT16_MIN;
	int32_t x756 = 25750;
	int32_t t179 = 105331;

    t179 = (((x753<=x754)+x755)/x756);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x759 = 31U;
	volatile uint8_t x760 = 23U;
	int32_t t180 = 6394027;

    t180 = (((x757<=x758)+x759)/x760);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x761 = 60U;
	volatile int8_t x762 = INT8_MIN;
	int64_t x763 = 335407LL;
	int64_t x764 = INT64_MAX;
	volatile int64_t t181 = -116895925411LL;

    t181 = (((x761<=x762)+x763)/x764);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x766 = 1065950U;
	volatile int32_t x767 = 245807607;
	uint8_t x768 = 23U;
	int32_t t182 = 531214756;

    t182 = (((x765<=x766)+x767)/x768);

    if (t182 != 10687287) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x769 = 4692U;
	int8_t x770 = -1;
	int16_t x771 = INT16_MAX;
	static int32_t x772 = -42266;
	int32_t t183 = -92726;

    t183 = (((x769<=x770)+x771)/x772);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x773 = -1;
	int16_t x774 = INT16_MAX;
	uint16_t x776 = UINT16_MAX;
	int32_t t184 = 12;

    t184 = (((x773<=x774)+x775)/x776);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x777 = 8;
	int16_t x778 = INT16_MIN;
	uint8_t x780 = 2U;

    t185 = (((x777<=x778)+x779)/x780);

    if (t185 != -1073741824) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x781 = -1;
	volatile int16_t x782 = INT16_MAX;
	int32_t x783 = 58495;

    t186 = (((x781<=x782)+x783)/x784);

    if (t186 != 58496) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x785 = -1;
	int16_t x786 = INT16_MAX;
	static uint16_t x788 = 1U;
	volatile uint32_t t187 = 196526629U;

    t187 = (((x785<=x786)+x787)/x788);

    if (t187 != 161358163U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x789 = INT32_MAX;
	static int16_t x790 = INT16_MIN;
	volatile uint32_t t188 = 101352810U;

    t188 = (((x789<=x790)+x791)/x792);

    if (t188 != 65537U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x793 = -1;
	static uint32_t x794 = 1955472U;
	static int32_t x795 = INT32_MIN;
	int32_t x796 = INT32_MAX;
	static int32_t t189 = 3471;

    t189 = (((x793<=x794)+x795)/x796);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x797 = -1205;
	static uint64_t x798 = 3832052555119223LLU;
	uint16_t x799 = 31279U;
	uint16_t x800 = UINT16_MAX;

    t190 = (((x797<=x798)+x799)/x800);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x801 = INT16_MIN;
	int32_t x802 = 65516708;
	static int16_t x803 = INT16_MIN;
	volatile int32_t t191 = 1394;

    t191 = (((x801<=x802)+x803)/x804);

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x806 = -1;
	static int32_t x807 = -1;
	int32_t t192 = -45;

    t192 = (((x805<=x806)+x807)/x808);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x813 = 993851;
	int8_t x814 = INT8_MIN;
	uint8_t x815 = 6U;
	uint32_t x816 = 16853U;
	volatile uint32_t t193 = 39321U;

    t193 = (((x813<=x814)+x815)/x816);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x818 = UINT16_MAX;
	static uint64_t x819 = 5482987452041119LLU;
	static uint16_t x820 = UINT16_MAX;

    t194 = (((x817<=x818)+x819)/x820);

    if (t194 != 83665025590LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x821 = -1;
	int64_t x822 = INT64_MAX;
	static int16_t x823 = INT16_MIN;
	int32_t x824 = 273;
	volatile int32_t t195 = 210962089;

    t195 = (((x821<=x822)+x823)/x824);

    if (t195 != -120) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x825 = 4415U;
	uint16_t x826 = 23U;
	uint64_t x827 = 17670806120637955LLU;
	uint64_t x828 = UINT64_MAX;
	static uint64_t t196 = 12423LLU;

    t196 = (((x825<=x826)+x827)/x828);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x833 = UINT8_MAX;
	uint8_t x834 = 0U;
	volatile uint16_t x836 = 128U;

    t197 = (((x833<=x834)+x835)/x836);

    if (t197 != 5883853U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x843 = UINT32_MAX;

    t198 = (((x841<=x842)+x843)/x844);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x845 = INT32_MAX;
	uint16_t x846 = 7232U;
	int8_t x847 = INT8_MAX;
	static int64_t x848 = INT64_MIN;
	volatile int64_t t199 = -90LL;

    t199 = (((x845<=x846)+x847)/x848);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

