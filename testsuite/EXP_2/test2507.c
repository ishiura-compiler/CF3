
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

int32_t x4 = -1;
int16_t x6 = INT16_MIN;
int8_t x10 = -1;
int16_t x13 = INT16_MAX;
int32_t x14 = INT32_MAX;
int16_t x18 = INT16_MIN;
static int16_t x20 = INT16_MIN;
int8_t x22 = 0;
int16_t x24 = -1;
int8_t x38 = -1;
int64_t x39 = INT64_MAX;
int64_t t9 = -276316121183386011LL;
volatile uint16_t x44 = 4U;
static volatile int8_t x49 = INT8_MAX;
static int32_t x68 = -2066444;
volatile int64_t t17 = 0LL;
volatile int64_t x82 = INT64_MIN;
int32_t x89 = INT32_MIN;
int8_t x96 = 28;
volatile int32_t t22 = -328;
int16_t x99 = INT16_MIN;
int64_t t23 = -33838160LL;
int64_t x102 = 876806670454603LL;
volatile int64_t t24 = 29LL;
static volatile int16_t x105 = INT16_MIN;
int32_t x107 = -28;
int64_t x110 = INT64_MIN;
volatile uint16_t x112 = 53U;
uint64_t x114 = 221LLU;
int32_t x116 = 350529980;
volatile int16_t x120 = -1;
int64_t x121 = INT64_MAX;
int8_t x122 = INT8_MAX;
static volatile int64_t x126 = -150LL;
volatile int64_t x127 = INT64_MIN;
int16_t x132 = INT16_MIN;
uint8_t x135 = UINT8_MAX;
volatile int32_t t32 = -3931;
static int64_t x142 = INT64_MIN;
static uint64_t x150 = 3271180650LLU;
volatile int32_t t36 = 11;
int8_t x159 = -1;
uint16_t x161 = 0U;
static uint32_t x162 = 7347077U;
int8_t x168 = 0;
uint64_t t40 = 0LLU;
static int8_t x174 = 3;
static int32_t x178 = -504950502;
uint64_t x192 = 3LLU;
uint64_t x203 = 383472663251LLU;
volatile int32_t x204 = INT32_MIN;
int32_t x208 = 2986;
int64_t t49 = 2073527513377LL;
int32_t x220 = INT32_MIN;
uint8_t x221 = UINT8_MAX;
volatile uint32_t t51 = 10164479U;
int32_t x232 = -1007040;
static int8_t x238 = INT8_MAX;
volatile int32_t x239 = INT32_MIN;
int64_t x252 = INT64_MIN;
volatile int64_t x254 = -2LL;
volatile uint8_t x256 = UINT8_MAX;
int32_t x259 = 2368;
uint8_t x262 = 1U;
static int8_t x270 = INT8_MAX;
uint32_t x273 = 480U;
int8_t x274 = INT8_MIN;
int16_t x278 = -1;
uint32_t t64 = 57697659U;
static volatile int8_t x281 = INT8_MIN;
int16_t x291 = -12224;
static volatile int64_t x299 = INT64_MAX;
int16_t x302 = INT16_MIN;
volatile int16_t x303 = -1163;
int16_t x310 = -1;
int32_t x312 = INT32_MIN;
static int32_t x317 = INT32_MIN;
uint16_t x323 = 3385U;
uint32_t x336 = 5U;
uint8_t x337 = UINT8_MAX;
uint16_t x340 = 3U;
int64_t x341 = 129LL;
int16_t x353 = 312;
int64_t x356 = INT64_MIN;
static uint8_t x357 = UINT8_MAX;
static int8_t x366 = 3;
uint8_t x367 = 1U;
uint8_t x371 = 27U;
uint8_t x374 = 7U;
uint64_t x378 = 3873180790019124LLU;
int8_t x390 = INT8_MIN;
int64_t t87 = 0LL;
int8_t x393 = INT8_MIN;
uint32_t x394 = 4U;
static volatile int8_t x401 = INT8_MIN;
int16_t x409 = 7;
static int8_t x414 = INT8_MIN;
static volatile int32_t t93 = -20;
uint16_t x421 = 971U;
int64_t x433 = 4LL;
static int8_t x437 = INT8_MIN;
volatile int16_t x442 = INT16_MIN;
uint16_t x443 = 60U;
uint32_t x450 = 474U;
static volatile int32_t x453 = INT32_MAX;
static int16_t x454 = -1;
int64_t x457 = -1LL;
volatile int32_t x462 = INT32_MIN;
static volatile uint8_t x477 = 1U;
int16_t x478 = INT16_MIN;
int64_t x479 = INT64_MIN;
int32_t x486 = -1;
int16_t x488 = -1;
volatile int16_t x491 = INT16_MAX;
int32_t x496 = 480881;
volatile uint32_t t114 = 108U;
uint32_t x510 = 943U;
int16_t x512 = INT16_MIN;
volatile uint32_t t115 = 3U;
int32_t x518 = INT32_MAX;
volatile uint8_t x534 = 20U;
int64_t t122 = -6LL;
static int32_t x545 = INT32_MIN;
static int32_t x547 = INT32_MIN;
uint64_t t125 = 6486167LLU;
volatile uint64_t t128 = 3835663837084212536LLU;
int32_t x570 = INT32_MAX;
static volatile int32_t x574 = -239833;
int16_t x577 = INT16_MIN;
int32_t x578 = INT32_MIN;
int32_t x595 = 753;
int64_t x604 = 43369359457019516LL;
int16_t x615 = INT16_MAX;
int16_t x617 = INT16_MIN;
volatile uint16_t x618 = UINT16_MAX;
volatile int32_t x625 = -1;
uint64_t x628 = 1277956516468302245LLU;
static uint32_t x629 = 1194191U;
int64_t t144 = -236309963713LL;
int8_t x638 = 1;
uint32_t x639 = 10891U;
int16_t x640 = INT16_MAX;
static int8_t x646 = INT8_MAX;
volatile int64_t t150 = 68068963859047LL;
int64_t x664 = INT64_MIN;
static volatile int64_t t152 = -2471454545LL;
volatile uint16_t x665 = UINT16_MAX;
uint64_t x675 = UINT64_MAX;
int64_t x686 = INT64_MIN;
int32_t x688 = INT32_MAX;
int64_t t157 = -190177235299568385LL;
static int32_t x690 = INT32_MAX;
int16_t x691 = -264;
int32_t t158 = -132461774;
uint8_t x694 = 57U;
static uint8_t x695 = 7U;
uint8_t x700 = 17U;
int64_t x712 = -1LL;
int16_t x722 = INT16_MAX;
static uint32_t x723 = 96668386U;
uint16_t x724 = 13775U;
volatile uint64_t x728 = 25449835LLU;
static volatile int8_t x729 = INT8_MAX;
int32_t x740 = 237;
volatile int64_t t169 = -1LL;
int8_t x745 = INT8_MIN;
int16_t x746 = INT16_MIN;
int32_t x747 = INT32_MIN;
volatile int32_t t171 = INT32_MIN;
int8_t x753 = INT8_MAX;
int64_t x757 = INT64_MIN;
static int64_t x758 = INT64_MAX;
uint16_t x763 = 6596U;
uint16_t x764 = 6676U;
static uint32_t x767 = UINT32_MAX;
static int16_t x768 = INT16_MIN;
volatile uint64_t x770 = 68278319365LLU;
uint64_t t184 = 36107342595804LLU;
int64_t x810 = INT64_MIN;
static int64_t x813 = 209425410312341LL;
int16_t x821 = INT16_MIN;
int16_t x824 = -4;
int32_t x825 = INT32_MIN;
uint32_t x831 = 49886U;
int32_t x832 = -4774143;
int8_t x835 = INT8_MIN;
volatile int16_t x844 = INT16_MAX;
volatile uint64_t t193 = UINT64_MAX;
uint32_t x848 = 1U;
uint32_t x867 = 3937U;
uint32_t t199 = 13640130U;


void f0(void) {
    	uint64_t x1 = 540467LLU;
	uint32_t x2 = 871U;
	uint64_t x3 = UINT64_MAX;
	volatile uint64_t t0 = 3LLU;

    t0 = ((x1&(x2|x3))+x4);

    if (t0 != 540466LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 96U;
	static uint64_t x7 = 7643449229LLU;
	int64_t x8 = -1LL;
	volatile uint64_t t1 = UINT64_MAX;

    t1 = ((x5&(x6|x7))+x8);

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int16_t x11 = 1861;
	uint32_t x12 = 146688173U;
	uint32_t t2 = 24363U;

    t2 = ((x9&(x10|x11))+x12);

    if (t2 != 146688045U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x15 = INT32_MAX;
	uint32_t x16 = 7U;
	volatile uint32_t t3 = 150648350U;

    t3 = ((x13&(x14|x15))+x16);

    if (t3 != 32774U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	int64_t x19 = INT64_MAX;
	volatile int64_t t4 = -3519LL;

    t4 = ((x17&(x18|x19))+x20);

    if (t4 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	int64_t x23 = INT64_MAX;
	int64_t t5 = -989978759LL;

    t5 = ((x21&(x22|x23))+x24);

    if (t5 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 1927374338U;
	uint16_t x26 = UINT16_MAX;
	volatile int64_t x27 = -28341137046LL;
	int32_t x28 = INT32_MIN;
	volatile int64_t t6 = 17852992954228302LL;

    t6 = ((x25&(x26|x27))+x28);

    if (t6 != -492804606LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1755324889289588093LL;
	int16_t x30 = INT16_MAX;
	uint16_t x31 = UINT16_MAX;
	int8_t x32 = 0;
	volatile int64_t t7 = -508127LL;

    t7 = ((x29&(x30|x31))+x32);

    if (t7 != 643LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = -19;
	int32_t x34 = INT32_MIN;
	static uint64_t x35 = UINT64_MAX;
	static volatile int8_t x36 = -49;
	volatile uint64_t t8 = 3379LLU;

    t8 = ((x33&(x34|x35))+x36);

    if (t8 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	int64_t x40 = INT64_MAX;

    t9 = ((x37&(x38|x39))+x40);

    if (t9 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x41 = 2534068726450LLU;
	uint64_t x42 = 4905999145923073LLU;
	int64_t x43 = -1LL;
	static uint64_t t10 = 430669359617350325LLU;

    t10 = ((x41&(x42|x43))+x44);

    if (t10 != 2534068726454LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int32_t x46 = INT32_MAX;
	uint16_t x47 = 17031U;
	int16_t x48 = -1759;
	static volatile int32_t t11 = 48799;

    t11 = ((x45&(x46|x47))+x48);

    if (t11 != 2147449121) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = INT64_MIN;
	volatile uint8_t x51 = 16U;
	volatile int8_t x52 = INT8_MIN;
	static int64_t t12 = 112135743740835LL;

    t12 = ((x49&(x50|x51))+x52);

    if (t12 != -112LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = 23;
	uint8_t x54 = UINT8_MAX;
	int16_t x55 = INT16_MIN;
	uint16_t x56 = 12606U;
	volatile int32_t t13 = -281395247;

    t13 = ((x53&(x54|x55))+x56);

    if (t13 != 12629) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 0U;
	int32_t x58 = INT32_MIN;
	int8_t x59 = -1;
	volatile uint32_t x60 = 572U;
	volatile uint32_t t14 = 1553U;

    t14 = ((x57&(x58|x59))+x60);

    if (t14 != 572U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	static int8_t x62 = 63;
	static int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MAX;
	volatile int64_t t15 = -39879258554804144LL;

    t15 = ((x61&(x62|x63))+x64);

    if (t15 != -9223372036854775618LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	volatile int8_t x66 = INT8_MAX;
	volatile int64_t x67 = -1LL;
	static volatile int64_t t16 = -11044810099LL;

    t16 = ((x65&(x66|x67))+x68);

    if (t16 != -2066572LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 3937;
	int64_t x70 = INT64_MIN;
	static int32_t x71 = 3435309;
	static int32_t x72 = -1;

    t17 = ((x69&(x70|x71))+x72);

    if (t17 != 2848LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MIN;
	volatile int32_t x78 = 65;
	uint32_t x79 = UINT32_MAX;
	uint16_t x80 = 2079U;
	volatile uint32_t t18 = 2782U;

    t18 = ((x77&(x78|x79))+x80);

    if (t18 != 1951U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = 0;
	uint8_t x83 = UINT8_MAX;
	static int16_t x84 = -395;
	int64_t t19 = -3080LL;

    t19 = ((x81&(x82|x83))+x84);

    if (t19 != -395LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x85 = -1;
	int32_t x86 = INT32_MAX;
	int16_t x87 = INT16_MIN;
	volatile int64_t x88 = -1LL;
	int64_t t20 = 5317919LL;

    t20 = ((x85&(x86|x87))+x88);

    if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x90 = INT64_MIN;
	uint16_t x91 = 7U;
	volatile uint8_t x92 = 3U;
	static int64_t t21 = -184421348LL;

    t21 = ((x89&(x90|x91))+x92);

    if (t21 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x93 = UINT16_MAX;
	volatile uint8_t x94 = 1U;
	static volatile int8_t x95 = INT8_MAX;

    t22 = ((x93&(x94|x95))+x96);

    if (t22 != 155) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	int16_t x100 = -6;

    t23 = ((x97&(x98|x99))+x100);

    if (t23 != -2147483654LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x101 = 65976U;
	static int16_t x103 = INT16_MIN;
	static uint16_t x104 = UINT16_MAX;

    t24 = ((x101&(x102|x103))+x104);

    if (t24 != 131335LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x106 = INT8_MAX;
	int32_t x108 = -213;
	volatile int32_t t25 = 18651;

    t25 = ((x105&(x106|x107))+x108);

    if (t25 != -32981) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x109 = UINT32_MAX;
	static volatile int64_t x111 = -1LL;
	volatile int64_t t26 = -55884094LL;

    t26 = ((x109&(x110|x111))+x112);

    if (t26 != 4294967348LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = -1;
	int64_t x115 = INT64_MIN;
	volatile uint64_t t27 = 91864591677472015LLU;

    t27 = ((x113&(x114|x115))+x116);

    if (t27 != 9223372037205306009LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = INT8_MIN;
	int8_t x118 = -1;
	volatile uint64_t x119 = 164330470LLU;
	uint64_t t28 = 698768570LLU;

    t28 = ((x117&(x118|x119))+x120);

    if (t28 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x123 = 0;
	int64_t x124 = 243667417377266LL;
	volatile int64_t t29 = -1883134539006LL;

    t29 = ((x121&(x122|x123))+x124);

    if (t29 != 243667417377393LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MIN;
	uint8_t x128 = 5U;
	volatile int64_t t30 = 1102033128650775LL;

    t30 = ((x125&(x126|x127))+x128);

    if (t30 != -2147483643LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MAX;
	int8_t x130 = INT8_MAX;
	uint64_t x131 = 107LLU;
	static uint64_t t31 = 549726423157625634LLU;

    t31 = ((x129&(x130|x131))+x132);

    if (t31 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x133 = UINT8_MAX;
	int8_t x134 = -1;
	int8_t x136 = INT8_MAX;

    t32 = ((x133&(x134|x135))+x136);

    if (t32 != 382) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x141 = UINT64_MAX;
	uint16_t x143 = 13832U;
	int16_t x144 = -1;
	static uint64_t t33 = 790861874645372LLU;

    t33 = ((x141&(x142|x143))+x144);

    if (t33 != 9223372036854789639LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x145 = UINT8_MAX;
	int32_t x146 = 7150;
	uint64_t x147 = UINT64_MAX;
	uint16_t x148 = UINT16_MAX;
	volatile uint64_t t34 = 905LLU;

    t34 = ((x145&(x146|x147))+x148);

    if (t34 != 65790LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x149 = 457;
	static int32_t x151 = 497942500;
	uint8_t x152 = UINT8_MAX;
	static uint64_t t35 = 37639720LLU;

    t35 = ((x149&(x150|x151))+x152);

    if (t35 != 711LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x153 = -1;
	static int32_t x154 = 489388891;
	int32_t x155 = -1564;
	int32_t x156 = -1;

    t36 = ((x153&(x154|x155))+x156);

    if (t36 != -1026) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x157 = 6U;
	uint64_t x158 = UINT64_MAX;
	static int8_t x160 = INT8_MAX;
	uint64_t t37 = 0LLU;

    t37 = ((x157&(x158|x159))+x160);

    if (t37 != 133LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x163 = UINT64_MAX;
	int32_t x164 = 304932;
	uint64_t t38 = 2400LLU;

    t38 = ((x161&(x162|x163))+x164);

    if (t38 != 304932LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x165 = -1;
	uint16_t x166 = 29277U;
	static int8_t x167 = 3;
	volatile int32_t t39 = -8163;

    t39 = ((x165&(x166|x167))+x168);

    if (t39 != 29279) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = INT32_MAX;
	static uint64_t x170 = UINT64_MAX;
	uint64_t x171 = 58751274LLU;
	static int32_t x172 = -3;

    t40 = ((x169&(x170|x171))+x172);

    if (t40 != 2147483644LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = -1;
	uint32_t x175 = 14U;
	uint16_t x176 = 28190U;
	uint32_t t41 = 3041197U;

    t41 = ((x173&(x174|x175))+x176);

    if (t41 != 28205U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x177 = INT32_MAX;
	uint32_t x179 = 146890516U;
	int8_t x180 = -1;
	uint32_t t42 = 6U;

    t42 = ((x177&(x178|x179))+x180);

    if (t42 != 1776770845U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = -5;
	static volatile int8_t x186 = -1;
	uint16_t x187 = 29U;
	static volatile uint16_t x188 = UINT16_MAX;
	int32_t t43 = 1775;

    t43 = ((x185&(x186|x187))+x188);

    if (t43 != 65530) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = INT8_MIN;
	int32_t x190 = INT32_MIN;
	volatile int64_t x191 = INT64_MIN;
	volatile uint64_t t44 = 53239543883719LLU;

    t44 = ((x189&(x190|x191))+x192);

    if (t44 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = INT8_MIN;
	int64_t x198 = 880LL;
	int64_t x199 = 4695LL;
	volatile int64_t x200 = 11057801442538872LL;
	volatile int64_t t45 = 26565727LL;

    t45 = ((x197&(x198|x199))+x200);

    if (t45 != 11057801442543736LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x201 = 452300250;
	int32_t x202 = -1996528;
	uint64_t t46 = 142897314143834369LLU;

    t46 = ((x201&(x202|x203))+x204);

    if (t46 != 18446744072013056466LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x205 = INT64_MAX;
	int16_t x206 = 868;
	static int64_t x207 = INT64_MIN;
	int64_t t47 = -988LL;

    t47 = ((x205&(x206|x207))+x208);

    if (t47 != 3854LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x209 = 24605U;
	uint32_t x210 = 13372862U;
	static int8_t x211 = -1;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t48 = -755221125709LL;

    t48 = ((x209&(x210|x211))+x212);

    if (t48 != -9223372036854751203LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x213 = INT64_MIN;
	uint8_t x214 = 117U;
	volatile int64_t x215 = 27619700358813493LL;
	static int32_t x216 = INT32_MIN;

    t49 = ((x213&(x214|x215))+x216);

    if (t49 != -2147483648LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x217 = 2U;
	static uint64_t x218 = 162LLU;
	uint16_t x219 = 111U;
	static uint64_t t50 = 4577860LLU;

    t50 = ((x217&(x218|x219))+x220);

    if (t50 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x222 = INT8_MIN;
	uint32_t x223 = 99U;
	static int16_t x224 = 7;

    t51 = ((x221&(x222|x223))+x224);

    if (t51 != 234U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x225 = -1;
	volatile int32_t x226 = -58055;
	int64_t x227 = INT64_MIN;
	uint64_t x228 = UINT64_MAX;
	uint64_t t52 = 2872LLU;

    t52 = ((x225&(x226|x227))+x228);

    if (t52 != 18446744073709493560LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x229 = 102U;
	int8_t x230 = INT8_MIN;
	static int32_t x231 = 2922;
	volatile uint32_t t53 = 3U;

    t53 = ((x229&(x230|x231))+x232);

    if (t53 != 4293960354U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x233 = -9;
	uint16_t x234 = 0U;
	static int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MIN;
	volatile int32_t t54 = -77730;

    t54 = ((x233&(x234|x235))+x236);

    if (t54 != -65536) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x237 = -1;
	int8_t x240 = 20;
	static volatile int32_t t55 = -92623292;

    t55 = ((x237&(x238|x239))+x240);

    if (t55 != -2147483501) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x241 = -10;
	uint16_t x242 = 6853U;
	static uint16_t x243 = 1U;
	int8_t x244 = 11;
	static int32_t t56 = -121997660;

    t56 = ((x241&(x242|x243))+x244);

    if (t56 != 6863) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x249 = 2434545739495LL;
	int16_t x250 = -1;
	volatile int32_t x251 = INT32_MIN;
	int64_t t57 = 7476499323864LL;

    t57 = ((x249&(x250|x251))+x252);

    if (t57 != -9223369602309036313LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x253 = 25U;
	int32_t x255 = -2862;
	int64_t t58 = -51575375390580LL;

    t58 = ((x253&(x254|x255))+x256);

    if (t58 != 279LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x257 = -19;
	volatile int32_t x258 = INT32_MIN;
	static uint16_t x260 = 2U;
	int32_t t59 = 38313;

    t59 = ((x257&(x258|x259))+x260);

    if (t59 != -2147481278) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x261 = -7874;
	int16_t x263 = INT16_MIN;
	volatile int64_t x264 = 71312867577075680LL;
	volatile int64_t t60 = -1351762966LL;

    t60 = ((x261&(x262|x263))+x264);

    if (t60 != 71312867577042912LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x265 = INT16_MAX;
	uint16_t x266 = 50U;
	static volatile int64_t x267 = -1LL;
	int16_t x268 = INT16_MIN;
	int64_t t61 = 4023209307976646LL;

    t61 = ((x265&(x266|x267))+x268);

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x269 = 1;
	int16_t x271 = INT16_MAX;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t62 = -6443;

    t62 = ((x269&(x270|x271))+x272);

    if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x275 = INT8_MIN;
	volatile uint32_t x276 = 1505592U;
	volatile uint32_t t63 = 26887U;

    t63 = ((x273&(x274|x275))+x276);

    if (t63 != 1505976U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x277 = 8009;
	int16_t x279 = -42;
	static volatile uint32_t x280 = 355077U;

    t64 = ((x277&(x278|x279))+x280);

    if (t64 != 363086U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MIN;
	volatile int16_t x284 = -1;
	int64_t t65 = -233968992368006LL;

    t65 = ((x281&(x282|x283))+x284);

    if (t65 != -9223372032559808641LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x289 = 1;
	static uint64_t x290 = UINT64_MAX;
	volatile int64_t x292 = INT64_MAX;
	static volatile uint64_t t66 = 954883245178394LLU;

    t66 = ((x289&(x290|x291))+x292);

    if (t66 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x297 = 89U;
	int32_t x298 = INT32_MIN;
	int8_t x300 = INT8_MAX;
	int64_t t67 = -20178400323761LL;

    t67 = ((x297&(x298|x299))+x300);

    if (t67 != 216LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x301 = -1;
	int16_t x304 = 3179;
	int32_t t68 = -71563;

    t68 = ((x301&(x302|x303))+x304);

    if (t68 != 2016) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x305 = UINT64_MAX;
	int32_t x306 = INT32_MAX;
	uint8_t x307 = 85U;
	static uint32_t x308 = 29U;
	volatile uint64_t t69 = 125029LLU;

    t69 = ((x305&(x306|x307))+x308);

    if (t69 != 2147483676LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x309 = 1740450200069LLU;
	int64_t x311 = -3152649391566275LL;
	volatile uint64_t t70 = 6588076507LLU;

    t70 = ((x309&(x310|x311))+x312);

    if (t70 != 1738302716421LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x318 = UINT16_MAX;
	uint32_t x319 = 10U;
	uint16_t x320 = UINT16_MAX;
	volatile uint32_t t71 = 7489232U;

    t71 = ((x317&(x318|x319))+x320);

    if (t71 != 65535U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x321 = 47470458713076LL;
	uint16_t x322 = UINT16_MAX;
	int8_t x324 = INT8_MIN;
	int64_t t72 = 102528156LL;

    t72 = ((x321&(x322|x323))+x324);

    if (t72 != 13172LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x325 = 3778797;
	volatile int8_t x326 = INT8_MAX;
	uint16_t x327 = 25606U;
	static int16_t x328 = INT16_MAX;
	int32_t t73 = -17295;

    t73 = ((x325&(x326|x327))+x328);

    if (t73 != 41068) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x329 = -54;
	int8_t x330 = INT8_MIN;
	int64_t x331 = 1LL;
	uint32_t x332 = 365363U;
	volatile int64_t t74 = -1685LL;

    t74 = ((x329&(x330|x331))+x332);

    if (t74 != 365235LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x333 = 1698271039LL;
	int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	static int64_t t75 = 169LL;

    t75 = ((x333&(x334|x335))+x336);

    if (t75 != 5LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x338 = 21U;
	static volatile int32_t x339 = INT32_MIN;
	volatile int32_t t76 = 0;

    t76 = ((x337&(x338|x339))+x340);

    if (t76 != 24) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x342 = -586879096;
	static int64_t x343 = 99564275629756432LL;
	volatile uint32_t x344 = UINT32_MAX;
	static int64_t t77 = -1521LL;

    t77 = ((x341&(x342|x343))+x344);

    if (t77 != 4294967423LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x349 = INT32_MIN;
	static uint8_t x350 = 115U;
	int8_t x351 = INT8_MAX;
	uint8_t x352 = UINT8_MAX;
	static volatile int32_t t78 = 188715054;

    t78 = ((x349&(x350|x351))+x352);

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x354 = INT8_MAX;
	uint16_t x355 = 1425U;
	int64_t t79 = -66301637048641093LL;

    t79 = ((x353&(x354|x355))+x356);

    if (t79 != -9223372036854775496LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x358 = 1;
	int32_t x359 = 79112;
	volatile uint64_t x360 = 2359088774043LLU;
	uint64_t t80 = 8433898344LLU;

    t80 = ((x357&(x358|x359))+x360);

    if (t80 != 2359088774052LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x365 = 0;
	int32_t x368 = INT32_MAX;
	volatile int32_t t81 = INT32_MAX;

    t81 = ((x365&(x366|x367))+x368);

    if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x369 = 15U;
	uint16_t x370 = 10398U;
	int16_t x372 = -1;
	int32_t t82 = 8515;

    t82 = ((x369&(x370|x371))+x372);

    if (t82 != 14) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x373 = 138942LLU;
	volatile int64_t x375 = -42953735109200751LL;
	int8_t x376 = -1;
	uint64_t t83 = 558149651LLU;

    t83 = ((x373&(x374|x375))+x376);

    if (t83 != 136341LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x377 = UINT8_MAX;
	int16_t x379 = -3531;
	int8_t x380 = -1;
	volatile uint64_t t84 = 24701294576LLU;

    t84 = ((x377&(x378|x379))+x380);

    if (t84 != 52LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x381 = INT32_MAX;
	volatile int32_t x382 = -1;
	uint32_t x383 = 64953U;
	int8_t x384 = 3;
	uint32_t t85 = 87U;

    t85 = ((x381&(x382|x383))+x384);

    if (t85 != 2147483650U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x385 = 4815LL;
	static uint8_t x386 = 121U;
	volatile int16_t x387 = INT16_MIN;
	int32_t x388 = 133655340;
	volatile int64_t t86 = -146611963760522902LL;

    t86 = ((x385&(x386|x387))+x388);

    if (t86 != 133655413LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x389 = -435125787;
	int64_t x391 = INT64_MIN;
	int16_t x392 = -2884;

    t87 = ((x389&(x390|x391))+x392);

    if (t87 != -435128772LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x395 = 11U;
	int32_t x396 = INT32_MIN;
	volatile uint32_t t88 = 2U;

    t88 = ((x393&(x394|x395))+x396);

    if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x397 = INT64_MIN;
	static int64_t x398 = -1LL;
	volatile uint32_t x399 = UINT32_MAX;
	int32_t x400 = INT32_MAX;
	int64_t t89 = 4278040459178323LL;

    t89 = ((x397&(x398|x399))+x400);

    if (t89 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x402 = INT16_MAX;
	int8_t x403 = INT8_MAX;
	int8_t x404 = -1;
	volatile int32_t t90 = -82040;

    t90 = ((x401&(x402|x403))+x404);

    if (t90 != 32639) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x405 = UINT8_MAX;
	volatile int64_t x406 = -1LL;
	uint8_t x407 = 1U;
	static uint16_t x408 = UINT16_MAX;
	volatile int64_t t91 = 8284295860701387LL;

    t91 = ((x405&(x406|x407))+x408);

    if (t91 != 65790LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x410 = UINT16_MAX;
	int8_t x411 = INT8_MIN;
	int16_t x412 = 3;
	static int32_t t92 = 5615;

    t92 = ((x409&(x410|x411))+x412);

    if (t92 != 10) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x413 = 84181;
	uint8_t x415 = 2U;
	static int8_t x416 = 25;

    t93 = ((x413&(x414|x415))+x416);

    if (t93 != 84121) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x417 = INT64_MIN;
	int8_t x418 = INT8_MIN;
	static uint16_t x419 = 30U;
	uint16_t x420 = 12591U;
	static volatile int64_t t94 = -1334LL;

    t94 = ((x417&(x418|x419))+x420);

    if (t94 != -9223372036854763217LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x422 = 126U;
	uint8_t x423 = UINT8_MAX;
	int16_t x424 = -1;
	volatile uint32_t t95 = 534938162U;

    t95 = ((x421&(x422|x423))+x424);

    if (t95 != 202U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x429 = 5U;
	uint16_t x430 = UINT16_MAX;
	uint32_t x431 = UINT32_MAX;
	int32_t x432 = 2938718;
	uint32_t t96 = 48U;

    t96 = ((x429&(x430|x431))+x432);

    if (t96 != 2938723U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x434 = INT64_MAX;
	int8_t x435 = INT8_MIN;
	uint32_t x436 = 2704U;
	int64_t t97 = 3793094LL;

    t97 = ((x433&(x434|x435))+x436);

    if (t97 != 2708LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x438 = -1;
	int64_t x439 = INT64_MIN;
	int8_t x440 = -1;
	static int64_t t98 = 8636303463804567LL;

    t98 = ((x437&(x438|x439))+x440);

    if (t98 != -129LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x441 = INT8_MIN;
	int32_t x444 = 101661625;
	int32_t t99 = 2;

    t99 = ((x441&(x442|x443))+x444);

    if (t99 != 101628857) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x445 = UINT64_MAX;
	static int16_t x446 = INT16_MIN;
	int32_t x447 = -1;
	static uint64_t x448 = UINT64_MAX;
	uint64_t t100 = 215LLU;

    t100 = ((x445&(x446|x447))+x448);

    if (t100 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x449 = INT64_MIN;
	int8_t x451 = INT8_MIN;
	static int32_t x452 = 26143341;
	static volatile int64_t t101 = -1LL;

    t101 = ((x449&(x450|x451))+x452);

    if (t101 != 26143341LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x455 = 2U;
	volatile int8_t x456 = -1;
	volatile int32_t t102 = -48;

    t102 = ((x453&(x454|x455))+x456);

    if (t102 != 2147483646) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x458 = 446438693U;
	int64_t x459 = -1LL;
	static int16_t x460 = INT16_MAX;
	volatile int64_t t103 = -141419769LL;

    t103 = ((x457&(x458|x459))+x460);

    if (t103 != 32766LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x461 = UINT8_MAX;
	static int8_t x463 = INT8_MIN;
	int64_t x464 = INT64_MIN;
	volatile int64_t t104 = -1126LL;

    t104 = ((x461&(x462|x463))+x464);

    if (t104 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x465 = 447535566525515399LL;
	volatile int8_t x466 = INT8_MIN;
	static int16_t x467 = INT16_MIN;
	static int8_t x468 = -43;
	volatile int64_t t105 = -5180932LL;

    t105 = ((x465&(x466|x467))+x468);

    if (t105 != 447535566525515349LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x469 = INT16_MIN;
	int8_t x470 = INT8_MIN;
	static uint64_t x471 = 98262906335342258LLU;
	uint32_t x472 = 316U;
	static uint64_t t106 = 708003477897794827LLU;

    t106 = ((x469&(x470|x471))+x472);

    if (t106 != 18446744073709519164LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x473 = 3576600;
	uint32_t x474 = 0U;
	int8_t x475 = INT8_MAX;
	int32_t x476 = INT32_MAX;
	static volatile uint32_t t107 = 5462U;

    t107 = ((x473&(x474|x475))+x476);

    if (t107 != 2147483671U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x480 = -1;
	volatile int64_t t108 = -200983217671894LL;

    t108 = ((x477&(x478|x479))+x480);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x481 = 1U;
	int64_t x482 = INT64_MIN;
	static int64_t x483 = INT64_MIN;
	volatile int64_t x484 = -1LL;
	int64_t t109 = -28271769193LL;

    t109 = ((x481&(x482|x483))+x484);

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x485 = 15005LL;
	uint8_t x487 = UINT8_MAX;
	int64_t t110 = 2775419062782754183LL;

    t110 = ((x485&(x486|x487))+x488);

    if (t110 != 15004LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x489 = -1LL;
	static volatile int64_t x490 = INT64_MIN;
	static int16_t x492 = -3;
	int64_t t111 = 60634LL;

    t111 = ((x489&(x490|x491))+x492);

    if (t111 != -9223372036854743044LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x493 = -477054111;
	uint64_t x494 = 3106920042LLU;
	uint32_t x495 = 2042U;
	uint64_t t112 = 8127412570LLU;

    t112 = ((x493&(x494|x495))+x496);

    if (t112 != 2701650385LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x501 = 78U;
	int8_t x502 = INT8_MAX;
	uint32_t x503 = 69652U;
	static int32_t x504 = INT32_MAX;
	uint32_t t113 = 2551U;

    t113 = ((x501&(x502|x503))+x504);

    if (t113 != 2147483725U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x505 = INT32_MAX;
	int16_t x506 = INT16_MAX;
	static uint32_t x507 = 2638931U;
	int16_t x508 = -1;

    t114 = ((x505&(x506|x507))+x508);

    if (t114 != 2654206U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x509 = -2925126;
	int8_t x511 = 3;

    t115 = ((x509&(x510|x511))+x512);

    if (t115 != 4294934954U) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x513 = 137U;
	int32_t x514 = INT32_MIN;
	static int64_t x515 = 2902475496LL;
	int16_t x516 = 73;
	volatile int64_t t116 = -89800025706966LL;

    t116 = ((x513&(x514|x515))+x516);

    if (t116 != 209LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x517 = INT8_MIN;
	int16_t x519 = -17;
	int32_t x520 = -696103;
	volatile int32_t t117 = -7070131;

    t117 = ((x517&(x518|x519))+x520);

    if (t117 != -696231) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x521 = 1051791700583446598LLU;
	static int32_t x522 = INT32_MIN;
	volatile uint32_t x523 = 1018U;
	volatile uint8_t x524 = UINT8_MAX;
	uint64_t t118 = 45998885LLU;

    t118 = ((x521&(x522|x523))+x524);

    if (t118 != 2147483969LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x525 = 1U;
	int8_t x526 = -1;
	static volatile int16_t x527 = 2;
	int16_t x528 = -1;
	volatile int32_t t119 = -66;

    t119 = ((x525&(x526|x527))+x528);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x529 = 504846;
	uint64_t x530 = 99299927183766330LLU;
	int16_t x531 = 7;
	int8_t x532 = -30;
	volatile uint64_t t120 = 5782925571295861548LLU;

    t120 = ((x529&(x530|x531))+x532);

    if (t120 != 176112LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x533 = UINT16_MAX;
	int8_t x535 = INT8_MIN;
	uint64_t x536 = 967265247926LLU;
	uint64_t t121 = 8975212LLU;

    t121 = ((x533&(x534|x535))+x536);

    if (t121 != 967265313354LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x537 = INT64_MIN;
	uint16_t x538 = 224U;
	volatile uint8_t x539 = 6U;
	int32_t x540 = INT32_MAX;

    t122 = ((x537&(x538|x539))+x540);

    if (t122 != 2147483647LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x541 = INT32_MAX;
	volatile int64_t x542 = -1LL;
	uint8_t x543 = 1U;
	static int32_t x544 = -109862;
	int64_t t123 = 3752219072214375LL;

    t123 = ((x541&(x542|x543))+x544);

    if (t123 != 2147373785LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x546 = -569;
	uint64_t x548 = 3354523LLU;
	volatile uint64_t t124 = 16121501585LLU;

    t124 = ((x545&(x546|x547))+x548);

    if (t124 != 18446744071565422491LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x549 = INT64_MAX;
	uint8_t x550 = UINT8_MAX;
	uint16_t x551 = 143U;
	uint64_t x552 = UINT64_MAX;

    t125 = ((x549&(x550|x551))+x552);

    if (t125 != 254LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x553 = 3944984820535940LL;
	static int8_t x554 = -1;
	int64_t x555 = INT64_MIN;
	int16_t x556 = INT16_MIN;
	static int64_t t126 = 193448711598397LL;

    t126 = ((x553&(x554|x555))+x556);

    if (t126 != 3944984820503172LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x557 = INT32_MIN;
	uint16_t x558 = 0U;
	uint16_t x559 = 143U;
	static uint64_t x560 = 563LLU;
	volatile uint64_t t127 = 18413924LLU;

    t127 = ((x557&(x558|x559))+x560);

    if (t127 != 563LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x561 = -1;
	static uint64_t x562 = 4066046654148510LLU;
	uint64_t x563 = 672089424789366LLU;
	uint16_t x564 = 68U;

    t128 = ((x561&(x562|x563))+x564);

    if (t128 != 4067433946021954LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x565 = 2U;
	static int8_t x566 = -1;
	static int8_t x567 = INT8_MAX;
	uint64_t x568 = 44769LLU;
	volatile uint64_t t129 = 19013775023772354LLU;

    t129 = ((x565&(x566|x567))+x568);

    if (t129 != 44771LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x569 = INT8_MAX;
	static int8_t x571 = INT8_MAX;
	int8_t x572 = INT8_MAX;
	int32_t t130 = 68;

    t130 = ((x569&(x570|x571))+x572);

    if (t130 != 254) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x573 = 98U;
	volatile uint64_t x575 = 1020LLU;
	int32_t x576 = -6739;
	static uint64_t t131 = 4024106151341558476LLU;

    t131 = ((x573&(x574|x575))+x576);

    if (t131 != 18446744073709544975LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x579 = -1;
	int8_t x580 = 32;
	static volatile int32_t t132 = -23;

    t132 = ((x577&(x578|x579))+x580);

    if (t132 != -32736) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x581 = -1LL;
	static volatile uint8_t x582 = 3U;
	static int64_t x583 = INT64_MAX;
	static int16_t x584 = INT16_MIN;
	volatile int64_t t133 = 40824LL;

    t133 = ((x581&(x582|x583))+x584);

    if (t133 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x589 = -1040;
	static int64_t x590 = INT64_MIN;
	int16_t x591 = -27;
	static uint16_t x592 = 211U;
	int64_t t134 = 574130706102818859LL;

    t134 = ((x589&(x590|x591))+x592);

    if (t134 != -845LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x593 = 32420U;
	volatile int32_t x594 = 1945651;
	int32_t x596 = INT32_MIN;
	static volatile int32_t t135 = -31451;

    t135 = ((x593&(x594|x595))+x596);

    if (t135 != -2147470688) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x597 = 1482LL;
	int8_t x598 = -1;
	int32_t x599 = INT32_MIN;
	uint16_t x600 = 96U;
	volatile int64_t t136 = 2049965829LL;

    t136 = ((x597&(x598|x599))+x600);

    if (t136 != 1578LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x601 = INT8_MIN;
	uint8_t x602 = UINT8_MAX;
	static int16_t x603 = INT16_MIN;
	volatile int64_t t137 = 291587LL;

    t137 = ((x601&(x602|x603))+x604);

    if (t137 != 43369359456986876LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x605 = -1;
	int16_t x606 = INT16_MAX;
	uint32_t x607 = 118U;
	int16_t x608 = INT16_MIN;
	static uint32_t t138 = UINT32_MAX;

    t138 = ((x605&(x606|x607))+x608);

    if (t138 != UINT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x609 = INT16_MIN;
	int16_t x610 = INT16_MAX;
	int8_t x611 = -1;
	uint16_t x612 = 31401U;
	static volatile int32_t t139 = 44130;

    t139 = ((x609&(x610|x611))+x612);

    if (t139 != -1367) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x613 = 180623;
	uint8_t x614 = 6U;
	int16_t x616 = INT16_MAX;
	int32_t t140 = -3985002;

    t140 = ((x613&(x614|x615))+x616);

    if (t140 != 49550) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x619 = 8389884201801815LLU;
	int32_t x620 = -64538909;
	static volatile uint64_t t141 = 12LLU;

    t141 = ((x617&(x618|x619))+x620);

    if (t141 != 8389884137289443LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x621 = UINT8_MAX;
	volatile int64_t x622 = -1LL;
	int64_t x623 = INT64_MIN;
	int8_t x624 = 0;
	int64_t t142 = -242841LL;

    t142 = ((x621&(x622|x623))+x624);

    if (t142 != 255LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x626 = INT16_MAX;
	uint16_t x627 = 4156U;
	volatile uint64_t t143 = 173811LLU;

    t143 = ((x625&(x626|x627))+x628);

    if (t143 != 1277956516468335012LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x630 = INT64_MIN;
	static int64_t x631 = INT64_MIN;
	int16_t x632 = 54;

    t144 = ((x629&(x630|x631))+x632);

    if (t144 != 54LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x633 = -1;
	static int32_t x634 = INT32_MIN;
	uint8_t x635 = 62U;
	uint64_t x636 = UINT64_MAX;
	volatile uint64_t t145 = 121640747600797957LLU;

    t145 = ((x633&(x634|x635))+x636);

    if (t145 != 18446744071562068029LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x637 = -8314771663LL;
	volatile int64_t t146 = 606423481122061LL;

    t146 = ((x637&(x638|x639))+x640);

    if (t146 != 41472LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x641 = UINT32_MAX;
	int16_t x642 = -440;
	int64_t x643 = INT64_MIN;
	static int32_t x644 = INT32_MAX;
	volatile int64_t t147 = -873001679577203249LL;

    t147 = ((x641&(x642|x643))+x644);

    if (t147 != 6442450503LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x645 = 165;
	static uint8_t x647 = 99U;
	int16_t x648 = INT16_MIN;
	volatile int32_t t148 = -2;

    t148 = ((x645&(x646|x647))+x648);

    if (t148 != -32731) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x649 = 7LLU;
	int16_t x650 = INT16_MIN;
	int64_t x651 = INT64_MIN;
	static uint8_t x652 = 0U;
	volatile uint64_t t149 = 30575LLU;

    t149 = ((x649&(x650|x651))+x652);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x653 = -433LL;
	static int8_t x654 = -1;
	int8_t x655 = 20;
	volatile int64_t x656 = 10760742504058LL;

    t150 = ((x653&(x654|x655))+x656);

    if (t150 != 10760742503625LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x657 = UINT16_MAX;
	uint64_t x658 = 25114886555065148LLU;
	int64_t x659 = -1LL;
	int8_t x660 = INT8_MAX;
	static volatile uint64_t t151 = 26281134701405LLU;

    t151 = ((x657&(x658|x659))+x660);

    if (t151 != 65662LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x661 = 77984U;
	uint32_t x662 = 72180161U;
	int8_t x663 = -1;

    t152 = ((x661&(x662|x663))+x664);

    if (t152 != -9223372036854697824LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x666 = INT64_MAX;
	int16_t x667 = -55;
	static volatile int16_t x668 = INT16_MAX;
	int64_t t153 = -7372356LL;

    t153 = ((x665&(x666|x667))+x668);

    if (t153 != 98302LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x673 = 1;
	int8_t x674 = INT8_MIN;
	volatile uint16_t x676 = 14U;
	uint64_t t154 = 19690LLU;

    t154 = ((x673&(x674|x675))+x676);

    if (t154 != 15LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x677 = 160779553LLU;
	int8_t x678 = -23;
	static uint16_t x679 = 11786U;
	int8_t x680 = 0;
	volatile uint64_t t155 = 14180463167LLU;

    t155 = ((x677&(x678|x679))+x680);

    if (t155 != 160779553LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x681 = 624850U;
	static volatile uint32_t x682 = 160U;
	int64_t x683 = -1LL;
	int64_t x684 = -1LL;
	static volatile int64_t t156 = -499752666LL;

    t156 = ((x681&(x682|x683))+x684);

    if (t156 != 624849LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x685 = INT8_MIN;
	int16_t x687 = INT16_MIN;

    t157 = ((x685&(x686|x687))+x688);

    if (t157 != 2147450879LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x689 = INT16_MAX;
	uint16_t x692 = UINT16_MAX;

    t158 = ((x689&(x690|x691))+x692);

    if (t158 != 98302) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x693 = UINT64_MAX;
	uint32_t x696 = 5002U;
	uint64_t t159 = 51439046690219LLU;

    t159 = ((x693&(x694|x695))+x696);

    if (t159 != 5065LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x697 = -1;
	static int32_t x698 = -1;
	uint8_t x699 = 15U;
	static int32_t t160 = 28831;

    t160 = ((x697&(x698|x699))+x700);

    if (t160 != 16) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x705 = INT16_MAX;
	static volatile int64_t x706 = INT64_MAX;
	int16_t x707 = -1;
	static volatile uint32_t x708 = 82084691U;
	volatile int64_t t161 = 364558LL;

    t161 = ((x705&(x706|x707))+x708);

    if (t161 != 82117458LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x709 = 251838U;
	static uint16_t x710 = 90U;
	int64_t x711 = INT64_MAX;
	int64_t t162 = -32957613LL;

    t162 = ((x709&(x710|x711))+x712);

    if (t162 != 251837LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x713 = INT16_MIN;
	int16_t x714 = INT16_MIN;
	static uint32_t x715 = 22U;
	static volatile int16_t x716 = -1;
	uint32_t t163 = 0U;

    t163 = ((x713&(x714|x715))+x716);

    if (t163 != 4294934527U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x717 = INT32_MIN;
	int64_t x718 = -1LL;
	uint16_t x719 = 1418U;
	int64_t x720 = -838999547LL;
	static int64_t t164 = -31193757985LL;

    t164 = ((x717&(x718|x719))+x720);

    if (t164 != -2986483195LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x721 = INT64_MIN;
	static volatile int64_t t165 = 18986143626951751LL;

    t165 = ((x721&(x722|x723))+x724);

    if (t165 != 13775LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x725 = 20U;
	volatile int8_t x726 = INT8_MIN;
	int64_t x727 = INT64_MIN;
	volatile uint64_t t166 = 3LLU;

    t166 = ((x725&(x726|x727))+x728);

    if (t166 != 25449835LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x730 = INT8_MAX;
	uint32_t x731 = UINT32_MAX;
	int32_t x732 = -1;
	volatile uint32_t t167 = 1U;

    t167 = ((x729&(x730|x731))+x732);

    if (t167 != 126U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x733 = INT64_MIN;
	int8_t x734 = 3;
	int64_t x735 = 18740282048LL;
	uint8_t x736 = 35U;
	volatile int64_t t168 = -7703LL;

    t168 = ((x733&(x734|x735))+x736);

    if (t168 != 35LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x737 = -1;
	int8_t x738 = INT8_MIN;
	int64_t x739 = INT64_MIN;

    t169 = ((x737&(x738|x739))+x740);

    if (t169 != 109LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x748 = UINT8_MAX;
	volatile int32_t t170 = -18715;

    t170 = ((x745&(x746|x747))+x748);

    if (t170 != -32513) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x749 = 7U;
	volatile uint16_t x750 = 320U;
	int8_t x751 = INT8_MIN;
	volatile int32_t x752 = INT32_MIN;

    t171 = ((x749&(x750|x751))+x752);

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x754 = 0;
	uint64_t x755 = 253615594408747LLU;
	int16_t x756 = INT16_MIN;
	uint64_t t172 = 41LLU;

    t172 = ((x753&(x754|x755))+x756);

    if (t172 != 18446744073709518891LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x759 = 61U;
	volatile int8_t x760 = INT8_MIN;
	int64_t t173 = 5867898792710614LL;

    t173 = ((x757&(x758|x759))+x760);

    if (t173 != -128LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x761 = 1;
	int8_t x762 = 9;
	int32_t t174 = -64;

    t174 = ((x761&(x762|x763))+x764);

    if (t174 != 6677) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x765 = UINT32_MAX;
	uint32_t x766 = UINT32_MAX;
	static volatile uint32_t t175 = 1603U;

    t175 = ((x765&(x766|x767))+x768);

    if (t175 != 4294934527U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x769 = 14679;
	volatile uint64_t x771 = 213735389148466LLU;
	int32_t x772 = INT32_MIN;
	uint64_t t176 = 2044482501505LLU;

    t176 = ((x769&(x770|x771))+x772);

    if (t176 != 18446744071562082583LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x773 = INT16_MIN;
	uint16_t x774 = UINT16_MAX;
	volatile int16_t x775 = INT16_MIN;
	uint64_t x776 = UINT64_MAX;
	static volatile uint64_t t177 = 77027LLU;

    t177 = ((x773&(x774|x775))+x776);

    if (t177 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x777 = -1LL;
	int8_t x778 = INT8_MIN;
	int16_t x779 = -1;
	int8_t x780 = INT8_MIN;
	int64_t t178 = 923779970640669LL;

    t178 = ((x777&(x778|x779))+x780);

    if (t178 != -129LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x781 = 5;
	volatile int8_t x782 = INT8_MIN;
	int64_t x783 = -2804973859LL;
	static uint64_t x784 = UINT64_MAX;
	uint64_t t179 = 250770866165LLU;

    t179 = ((x781&(x782|x783))+x784);

    if (t179 != 4LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x785 = INT32_MIN;
	volatile int32_t x786 = -1;
	uint32_t x787 = UINT32_MAX;
	volatile uint32_t x788 = 2U;
	volatile uint32_t t180 = 112350529U;

    t180 = ((x785&(x786|x787))+x788);

    if (t180 != 2147483650U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x789 = 1;
	int8_t x790 = 4;
	int16_t x791 = INT16_MIN;
	volatile int16_t x792 = INT16_MAX;
	static int32_t t181 = 18;

    t181 = ((x789&(x790|x791))+x792);

    if (t181 != 32767) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x793 = INT16_MAX;
	int64_t x794 = INT64_MIN;
	int32_t x795 = INT32_MIN;
	static uint64_t x796 = UINT64_MAX;
	volatile uint64_t t182 = UINT64_MAX;

    t182 = ((x793&(x794|x795))+x796);

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x797 = UINT32_MAX;
	int8_t x798 = INT8_MAX;
	static volatile int64_t x799 = INT64_MAX;
	uint32_t x800 = 83U;
	volatile int64_t t183 = 496448978LL;

    t183 = ((x797&(x798|x799))+x800);

    if (t183 != 4294967378LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x801 = -25;
	volatile int64_t x802 = INT64_MIN;
	uint32_t x803 = 71057652U;
	uint64_t x804 = 94377869070320LLU;

    t184 = ((x801&(x802|x803))+x804);

    if (t184 != 9223466414794903764LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x809 = 141LLU;
	static uint64_t x811 = 3883148LLU;
	volatile int16_t x812 = INT16_MIN;
	uint64_t t185 = 1775570888LLU;

    t185 = ((x809&(x810|x811))+x812);

    if (t185 != 18446744073709518988LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x814 = -1LL;
	int32_t x815 = -11566;
	uint32_t x816 = UINT32_MAX;
	int64_t t186 = -3579854925278LL;

    t186 = ((x813&(x814|x815))+x816);

    if (t186 != 209429705279636LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x817 = 25;
	volatile int16_t x818 = 613;
	volatile int16_t x819 = INT16_MAX;
	int8_t x820 = -1;
	int32_t t187 = -254;

    t187 = ((x817&(x818|x819))+x820);

    if (t187 != 24) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x822 = 31231775886192264LLU;
	int32_t x823 = -60;
	uint64_t t188 = 61767744415914067LLU;

    t188 = ((x821&(x822|x823))+x824);

    if (t188 != 18446744073709518844LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x826 = -45;
	volatile uint64_t x827 = 4LLU;
	static int32_t x828 = -218645;
	uint64_t t189 = 1641099964875387LLU;

    t189 = ((x825&(x826|x827))+x828);

    if (t189 != 18446744071561849323LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x829 = 63037LLU;
	uint8_t x830 = 1U;
	volatile uint64_t t190 = 7819361802LLU;

    t190 = ((x829&(x830|x831))+x832);

    if (t190 != 18446744073704827166LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x833 = -1LL;
	int32_t x834 = INT32_MIN;
	static int32_t x836 = INT32_MAX;
	static int64_t t191 = 5310147357916LL;

    t191 = ((x833&(x834|x835))+x836);

    if (t191 != 2147483519LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x837 = -4653763LL;
	int16_t x838 = -1;
	uint32_t x839 = 2956U;
	static volatile int16_t x840 = -1;
	static int64_t t192 = -312982LL;

    t192 = ((x837&(x838|x839))+x840);

    if (t192 != 4290313532LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x841 = INT16_MIN;
	uint64_t x842 = UINT64_MAX;
	int32_t x843 = 81;

    t193 = ((x841&(x842|x843))+x844);

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x845 = -240LL;
	int8_t x846 = -1;
	uint32_t x847 = 17976128U;
	volatile int64_t t194 = 0LL;

    t194 = ((x845&(x846|x847))+x848);

    if (t194 != 4294967057LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x849 = INT32_MAX;
	int8_t x850 = -1;
	static volatile int16_t x851 = INT16_MAX;
	int8_t x852 = -1;
	int32_t t195 = -518;

    t195 = ((x849&(x850|x851))+x852);

    if (t195 != 2147483646) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x853 = 133786643U;
	int64_t x854 = INT64_MAX;
	int64_t x855 = -24101517261444243LL;
	volatile int8_t x856 = 24;
	int64_t t196 = 8091LL;

    t196 = ((x853&(x854|x855))+x856);

    if (t196 != 133786667LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x857 = -30;
	int8_t x858 = -1;
	volatile int32_t x859 = 0;
	uint32_t x860 = 3U;
	uint32_t t197 = 422486309U;

    t197 = ((x857&(x858|x859))+x860);

    if (t197 != 4294967269U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x861 = 608530;
	int8_t x862 = INT8_MIN;
	uint16_t x863 = 3U;
	uint64_t x864 = 55001262147685784LLU;
	static volatile uint64_t t198 = 11942735354224006LLU;

    t198 = ((x861&(x862|x863))+x864);

    if (t198 != 55001262148294298LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x865 = INT16_MIN;
	int8_t x866 = INT8_MIN;
	int16_t x868 = 26;

    t199 = ((x865&(x866|x867))+x868);

    if (t199 != 4294934554U) { NG(); } else { ; }
	
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

