
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

int16_t x4 = -1;
volatile int32_t t0 = 256;
uint16_t x6 = UINT16_MAX;
volatile int16_t x9 = INT16_MIN;
int64_t x13 = INT64_MAX;
int8_t x16 = 15;
static int32_t t4 = 18;
static int8_t x30 = INT8_MIN;
uint32_t x31 = UINT32_MAX;
volatile int32_t t6 = -11366612;
uint64_t x37 = 657588LLU;
int64_t x46 = 0LL;
uint32_t x47 = 1U;
int32_t t8 = 10394;
int16_t x51 = -1;
int32_t t9 = -405;
int32_t x54 = -1;
volatile int8_t x71 = INT8_MAX;
int8_t x72 = 14;
int16_t x74 = INT16_MAX;
volatile int32_t t14 = 1;
int16_t x80 = 12;
int16_t x81 = -2;
static uint32_t x85 = 2095684U;
int32_t x86 = INT32_MIN;
int32_t t18 = -60742;
int16_t x96 = -55;
int16_t x98 = -1;
int16_t x99 = INT16_MIN;
static int64_t x109 = -1LL;
volatile int8_t x111 = INT8_MIN;
int32_t t22 = 588;
int32_t t23 = -123763;
static int32_t x117 = -1;
static uint64_t x119 = UINT64_MAX;
uint8_t x122 = UINT8_MAX;
volatile int32_t t25 = 497215;
int8_t x131 = INT8_MIN;
int16_t x136 = INT16_MIN;
static uint16_t x137 = 11188U;
static int16_t x138 = INT16_MAX;
volatile int8_t x139 = 21;
static uint8_t x140 = 94U;
int64_t x159 = -1LL;
volatile int32_t x178 = INT32_MIN;
int8_t x179 = INT8_MIN;
int8_t x184 = INT8_MIN;
int32_t t39 = -14;
int16_t x200 = INT16_MIN;
int32_t t40 = -47;
int16_t x213 = 11;
uint64_t x220 = 64781412LLU;
uint32_t x229 = UINT32_MAX;
uint8_t x231 = 111U;
volatile uint32_t x250 = UINT32_MAX;
int8_t x278 = INT8_MIN;
int32_t t51 = -1553;
static int16_t x287 = -11;
int16_t x288 = INT16_MIN;
int64_t x298 = INT64_MIN;
static volatile int32_t t58 = 50308;
uint64_t x320 = UINT64_MAX;
volatile int64_t x324 = INT64_MAX;
uint16_t x341 = 1U;
uint64_t x342 = UINT64_MAX;
uint64_t x344 = 2893LLU;
int64_t x373 = -1LL;
static volatile int64_t x378 = -727724181814LL;
uint32_t x380 = 0U;
int32_t t69 = -14;
int8_t x396 = INT8_MIN;
static int32_t t72 = 1;
uint8_t x399 = 0U;
static int32_t t73 = 75948;
int32_t t74 = 52121;
int8_t x407 = 3;
uint8_t x410 = UINT8_MAX;
int64_t x416 = -702229597683761LL;
volatile int64_t x438 = INT64_MIN;
static volatile uint8_t x440 = 10U;
volatile int32_t t80 = 312955;
uint32_t x446 = UINT32_MAX;
volatile int32_t t82 = -286933861;
int8_t x450 = 10;
uint16_t x453 = 27U;
volatile int32_t t84 = -639;
static volatile uint16_t x461 = 2U;
volatile int32_t t85 = -7459;
int8_t x467 = INT8_MIN;
int8_t x474 = INT8_MAX;
volatile int32_t t88 = -119466;
int32_t x497 = INT32_MIN;
volatile int64_t x498 = INT64_MAX;
static uint64_t x499 = UINT64_MAX;
uint64_t x505 = UINT64_MAX;
int16_t x508 = INT16_MIN;
int32_t t92 = 438256;
int64_t x520 = -1LL;
static uint16_t x522 = 129U;
static uint8_t x524 = 3U;
int32_t t95 = -24364021;
uint8_t x531 = UINT8_MAX;
static uint16_t x532 = UINT16_MAX;
static int8_t x535 = -1;
volatile int32_t x541 = -1;
volatile int8_t x548 = -1;
static uint32_t x561 = 26837464U;
uint8_t x568 = 25U;
int32_t t104 = -47315936;
int8_t x588 = INT8_MIN;
static int32_t x591 = -1;
int32_t x612 = -1;
int16_t x613 = -1;
static volatile uint64_t x619 = 2718LLU;
int16_t x630 = 6;
int32_t x631 = -106064;
static int32_t x637 = 207;
volatile int32_t t120 = -36834076;
int8_t x653 = -33;
static volatile int32_t x655 = -1;
volatile uint16_t x657 = 8239U;
int32_t t123 = -984585;
int16_t x670 = -1;
int32_t x671 = 0;
int8_t x672 = INT8_MAX;
volatile int32_t t126 = 173;
volatile int32_t t127 = -21094;
static int8_t x684 = -62;
volatile int32_t t128 = 12149122;
int32_t t129 = -23934;
uint16_t x689 = 0U;
volatile int32_t t130 = 73425;
uint32_t x722 = 189551U;
volatile int32_t t135 = -136;
int64_t x728 = 841LL;
volatile int16_t x730 = 0;
int32_t x754 = INT32_MAX;
int8_t x762 = INT8_MIN;
int32_t t141 = -155663262;
volatile int32_t x765 = INT32_MAX;
int16_t x766 = -2755;
int8_t x767 = -1;
volatile int32_t x797 = INT32_MIN;
uint64_t x800 = 889059746LLU;
uint32_t x810 = UINT32_MAX;
int8_t x811 = INT8_MIN;
int32_t t150 = 549;
int16_t x822 = INT16_MIN;
volatile int32_t t151 = -310795;
static uint16_t x838 = UINT16_MAX;
int16_t x843 = INT16_MAX;
static int8_t x844 = -1;
static int32_t t156 = 375;
uint16_t x845 = 12230U;
volatile int8_t x856 = -1;
int32_t t158 = 7903;
uint32_t x859 = 419U;
int64_t x864 = -109999955546LL;
int64_t x865 = -1424260541914282LL;
int32_t x866 = INT32_MAX;
uint64_t x867 = 2LLU;
static int16_t x870 = INT16_MIN;
static volatile uint8_t x874 = UINT8_MAX;
static volatile uint64_t x876 = UINT64_MAX;
static int64_t x877 = -1LL;
uint8_t x893 = 108U;
volatile int64_t x894 = INT64_MIN;
int32_t t167 = 3786545;
static uint64_t x899 = 377437962976336LLU;
int8_t x904 = INT8_MIN;
uint32_t x912 = 127382782U;
static int32_t t171 = -73;
uint16_t x918 = 131U;
uint16_t x919 = 232U;
uint8_t x920 = 1U;
int8_t x923 = 1;
int32_t t174 = 78423037;
static uint32_t x929 = UINT32_MAX;
int32_t x932 = -214545;
int32_t x936 = -1;
int16_t x946 = -1;
uint32_t x948 = UINT32_MAX;
uint64_t x949 = UINT64_MAX;
int32_t x950 = INT32_MAX;
volatile int8_t x954 = -1;
int32_t x956 = INT32_MAX;
volatile uint16_t x957 = 1U;
volatile uint32_t x969 = 5678140U;
int32_t x971 = INT32_MIN;
uint8_t x976 = 22U;
volatile int16_t x977 = -3736;
int16_t x978 = INT16_MIN;
int32_t x982 = -46766593;
int32_t x987 = -1;
volatile int16_t x995 = -9737;
volatile int32_t t189 = 218978;
uint32_t x1001 = 12U;
uint16_t x1004 = 6599U;
volatile int32_t t191 = -4137;
static uint16_t x1005 = 18755U;
volatile uint16_t x1015 = UINT16_MAX;
volatile int16_t x1019 = INT16_MAX;
uint64_t x1020 = UINT64_MAX;
uint32_t x1039 = 15311U;
static uint64_t x1041 = UINT64_MAX;


void f0(void) {
    	int32_t x1 = -1;
	int64_t x2 = -1LL;
	static int8_t x3 = -1;

    t0 = ((x1==x2)<=(x3*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 28;
	int16_t x7 = -1;
	uint8_t x8 = 1U;
	int32_t t1 = 82;

    t1 = ((x5==x6)<=(x7*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = 29U;
	int8_t x11 = -1;
	int8_t x12 = -1;
	int32_t t2 = -59590;

    t2 = ((x9==x10)<=(x11*x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = -1LL;
	static int32_t x15 = -1;
	volatile int32_t t3 = 185235062;

    t3 = ((x13==x14)<=(x15*x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = 3;
	uint16_t x22 = 1U;
	int32_t x23 = INT32_MAX;
	volatile uint64_t x24 = 12201625484261LLU;

    t4 = ((x21==x22)<=(x23*x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x25 = 6970436707004LLU;
	uint64_t x26 = 638LLU;
	int32_t x27 = INT32_MAX;
	int8_t x28 = -1;
	int32_t t5 = 5579878;

    t5 = ((x25==x26)<=(x27*x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = 1;
	static int16_t x32 = INT16_MAX;

    t6 = ((x29==x30)<=(x31*x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x38 = 12073289LLU;
	uint8_t x39 = 4U;
	static int8_t x40 = INT8_MIN;
	static int32_t t7 = 22140;

    t7 = ((x37==x38)<=(x39*x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x45 = -12719895401LL;
	int8_t x48 = -31;

    t8 = ((x45==x46)<=(x47*x48));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x49 = INT16_MIN;
	int32_t x50 = 2012368;
	volatile int8_t x52 = 6;

    t9 = ((x49==x50)<=(x51*x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x53 = 156168164122254874LLU;
	int16_t x55 = -1;
	volatile int64_t x56 = -34438150050LL;
	volatile int32_t t10 = 2683386;

    t10 = ((x53==x54)<=(x55*x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = -1;
	int8_t x58 = INT8_MAX;
	uint64_t x59 = 1314311931853311LLU;
	int64_t x60 = 3LL;
	static int32_t t11 = 531920603;

    t11 = ((x57==x58)<=(x59*x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x61 = 1372272U;
	volatile uint16_t x62 = 16017U;
	static uint8_t x63 = UINT8_MAX;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t12 = -2699;

    t12 = ((x61==x62)<=(x63*x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x69 = INT32_MAX;
	static volatile int8_t x70 = INT8_MIN;
	volatile int32_t t13 = 1;

    t13 = ((x69==x70)<=(x71*x72));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x73 = -62;
	uint8_t x75 = 107U;
	uint16_t x76 = 35U;

    t14 = ((x73==x74)<=(x75*x76));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x77 = 1879443921U;
	int32_t x78 = -1;
	int8_t x79 = -1;
	int32_t t15 = -3299;

    t15 = ((x77==x78)<=(x79*x80));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x82 = INT16_MIN;
	int32_t x83 = -13718;
	uint64_t x84 = UINT64_MAX;
	int32_t t16 = 3;

    t16 = ((x81==x82)<=(x83*x84));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MIN;
	int32_t t17 = -1;

    t17 = ((x85==x86)<=(x87*x88));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = 72655432U;
	int16_t x90 = INT16_MIN;
	int32_t x91 = -1608610;
	uint8_t x92 = 3U;

    t18 = ((x89==x90)<=(x91*x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x93 = INT64_MAX;
	int16_t x94 = INT16_MIN;
	int32_t x95 = -7543692;
	volatile int32_t t19 = 1826;

    t19 = ((x93==x94)<=(x95*x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x97 = INT64_MIN;
	int16_t x100 = 12;
	volatile int32_t t20 = -242028;

    t20 = ((x97==x98)<=(x99*x100));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x101 = 7935LLU;
	static uint64_t x102 = 12452442LLU;
	uint16_t x103 = 452U;
	volatile int64_t x104 = -1003670863LL;
	static int32_t t21 = 0;

    t21 = ((x101==x102)<=(x103*x104));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x110 = UINT64_MAX;
	int16_t x112 = INT16_MIN;

    t22 = ((x109==x110)<=(x111*x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = INT8_MAX;
	uint64_t x114 = 33016377407LLU;
	int8_t x115 = INT8_MIN;
	static int64_t x116 = 30007514861LL;

    t23 = ((x113==x114)<=(x115*x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x118 = UINT8_MAX;
	static uint8_t x120 = 53U;
	static int32_t t24 = -2191634;

    t24 = ((x117==x118)<=(x119*x120));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = -8136328929456346LL;
	static uint8_t x123 = 40U;
	static int16_t x124 = -7;

    t25 = ((x121==x122)<=(x123*x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x129 = INT32_MIN;
	int8_t x130 = INT8_MIN;
	int8_t x132 = INT8_MAX;
	int32_t t26 = -28968001;

    t26 = ((x129==x130)<=(x131*x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x133 = 92;
	volatile uint16_t x134 = 501U;
	uint64_t x135 = UINT64_MAX;
	int32_t t27 = -95;

    t27 = ((x133==x134)<=(x135*x136));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t t28 = 418745;

    t28 = ((x137==x138)<=(x139*x140));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x141 = INT64_MIN;
	int8_t x142 = 1;
	int32_t x143 = 493194307;
	int16_t x144 = 3;
	static int32_t t29 = -265427669;

    t29 = ((x141==x142)<=(x143*x144));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x145 = 1913294568U;
	uint8_t x146 = 9U;
	uint16_t x147 = UINT16_MAX;
	int8_t x148 = -1;
	static volatile int32_t t30 = 3601451;

    t30 = ((x145==x146)<=(x147*x148));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x149 = 37;
	static uint64_t x150 = 1032348013733038LLU;
	int8_t x151 = INT8_MIN;
	int32_t x152 = 93;
	volatile int32_t t31 = 346316107;

    t31 = ((x149==x150)<=(x151*x152));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x153 = 26154710U;
	int8_t x154 = INT8_MIN;
	int32_t x155 = -1;
	uint8_t x156 = 6U;
	volatile int32_t t32 = -7726;

    t32 = ((x153==x154)<=(x155*x156));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x157 = INT32_MAX;
	uint16_t x158 = UINT16_MAX;
	uint64_t x160 = 1143702628538LLU;
	volatile int32_t t33 = 37185385;

    t33 = ((x157==x158)<=(x159*x160));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x161 = INT32_MAX;
	static volatile uint8_t x162 = UINT8_MAX;
	uint16_t x163 = 7327U;
	uint32_t x164 = 59U;
	int32_t t34 = 462589640;

    t34 = ((x161==x162)<=(x163*x164));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x169 = INT16_MAX;
	uint64_t x170 = 14953481LLU;
	volatile int64_t x171 = INT64_MIN;
	uint64_t x172 = 314228370553LLU;
	int32_t t35 = 1;

    t35 = ((x169==x170)<=(x171*x172));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x177 = -114879270;
	uint64_t x180 = 3856669862517381LLU;
	volatile int32_t t36 = 1;

    t36 = ((x177==x178)<=(x179*x180));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x181 = 111;
	uint16_t x182 = UINT16_MAX;
	static uint64_t x183 = UINT64_MAX;
	int32_t t37 = 10;

    t37 = ((x181==x182)<=(x183*x184));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x189 = INT8_MIN;
	volatile int8_t x190 = INT8_MIN;
	uint64_t x191 = 17256711609252LLU;
	int8_t x192 = INT8_MAX;
	int32_t t38 = 55047;

    t38 = ((x189==x190)<=(x191*x192));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x193 = 91LLU;
	uint16_t x194 = UINT16_MAX;
	int16_t x195 = -1;
	volatile uint64_t x196 = 1257LLU;

    t39 = ((x193==x194)<=(x195*x196));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x197 = 1043806351U;
	volatile int64_t x198 = INT64_MIN;
	volatile int8_t x199 = 0;

    t40 = ((x197==x198)<=(x199*x200));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x201 = 33045868116074LLU;
	uint64_t x202 = 5737913121884975LLU;
	uint32_t x203 = 21349U;
	int32_t x204 = 1;
	int32_t t41 = -241930;

    t41 = ((x201==x202)<=(x203*x204));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x209 = 72;
	uint32_t x210 = UINT32_MAX;
	uint64_t x211 = 56LLU;
	uint32_t x212 = UINT32_MAX;
	int32_t t42 = 0;

    t42 = ((x209==x210)<=(x211*x212));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x214 = 21369735060LLU;
	int16_t x215 = -3;
	uint64_t x216 = 5903LLU;
	static int32_t t43 = 104348587;

    t43 = ((x213==x214)<=(x215*x216));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x217 = 213U;
	static int8_t x218 = -1;
	int16_t x219 = INT16_MAX;
	int32_t t44 = 12423;

    t44 = ((x217==x218)<=(x219*x220));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x230 = INT64_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t45 = 25;

    t45 = ((x229==x230)<=(x231*x232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x233 = -1;
	uint32_t x234 = UINT32_MAX;
	uint16_t x235 = 32334U;
	static volatile int16_t x236 = INT16_MIN;
	volatile int32_t t46 = -1;

    t46 = ((x233==x234)<=(x235*x236));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x237 = 87;
	uint64_t x238 = 21963734369722176LLU;
	uint16_t x239 = 242U;
	uint64_t x240 = 10487450941631247LLU;
	int32_t t47 = 873470340;

    t47 = ((x237==x238)<=(x239*x240));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x249 = -1;
	static uint16_t x251 = 31U;
	int16_t x252 = -1;
	volatile int32_t t48 = -41137;

    t48 = ((x249==x250)<=(x251*x252));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x253 = -2;
	uint32_t x254 = 2308275U;
	volatile int32_t x255 = -1736;
	int8_t x256 = 11;
	int32_t t49 = 188153;

    t49 = ((x253==x254)<=(x255*x256));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x257 = UINT64_MAX;
	int32_t x258 = -1;
	uint8_t x259 = 1U;
	static int32_t x260 = INT32_MIN;
	int32_t t50 = -26;

    t50 = ((x257==x258)<=(x259*x260));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x277 = 1LL;
	static uint64_t x279 = 6814068LLU;
	uint8_t x280 = UINT8_MAX;

    t51 = ((x277==x278)<=(x279*x280));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x281 = INT8_MIN;
	static int64_t x282 = INT64_MIN;
	int16_t x283 = -1;
	int32_t x284 = 670307;
	int32_t t52 = 4890105;

    t52 = ((x281==x282)<=(x283*x284));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x285 = UINT8_MAX;
	int32_t x286 = 102427066;
	volatile int32_t t53 = 292166;

    t53 = ((x285==x286)<=(x287*x288));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x293 = -1;
	uint64_t x294 = 605187737LLU;
	int8_t x295 = 10;
	uint8_t x296 = 44U;
	volatile int32_t t54 = -38762693;

    t54 = ((x293==x294)<=(x295*x296));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x297 = -11;
	int8_t x299 = -1;
	volatile int16_t x300 = -457;
	static volatile int32_t t55 = -363531;

    t55 = ((x297==x298)<=(x299*x300));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x305 = -1LL;
	volatile uint64_t x306 = 134930170069LLU;
	static int16_t x307 = INT16_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t56 = 7;

    t56 = ((x305==x306)<=(x307*x308));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x309 = INT32_MIN;
	uint8_t x310 = UINT8_MAX;
	uint64_t x311 = 40LLU;
	int32_t x312 = 4;
	int32_t t57 = 0;

    t57 = ((x309==x310)<=(x311*x312));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MIN;
	volatile int64_t x315 = -1LL;
	int16_t x316 = INT16_MIN;

    t58 = ((x313==x314)<=(x315*x316));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x317 = 2U;
	int64_t x318 = -614LL;
	uint8_t x319 = 1U;
	int32_t t59 = -780583224;

    t59 = ((x317==x318)<=(x319*x320));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x321 = -8853833287595838LL;
	int8_t x322 = INT8_MAX;
	int64_t x323 = 1LL;
	volatile int32_t t60 = 5;

    t60 = ((x321==x322)<=(x323*x324));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x329 = INT32_MIN;
	volatile int16_t x330 = -572;
	int16_t x331 = 1768;
	uint8_t x332 = UINT8_MAX;
	int32_t t61 = 26;

    t61 = ((x329==x330)<=(x331*x332));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x337 = -1;
	static uint8_t x338 = 7U;
	uint16_t x339 = 10595U;
	volatile uint16_t x340 = UINT16_MAX;
	int32_t t62 = 192530;

    t62 = ((x337==x338)<=(x339*x340));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x343 = 8U;
	int32_t t63 = 490768759;

    t63 = ((x341==x342)<=(x343*x344));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x345 = INT64_MIN;
	volatile int32_t x346 = -1;
	int64_t x347 = -1LL;
	uint8_t x348 = 0U;
	int32_t t64 = -902715594;

    t64 = ((x345==x346)<=(x347*x348));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x353 = 6165U;
	volatile int8_t x354 = INT8_MIN;
	int64_t x355 = -13LL;
	static int8_t x356 = 0;
	static int32_t t65 = 3;

    t65 = ((x353==x354)<=(x355*x356));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x357 = 4053868686676734897LL;
	volatile int8_t x358 = INT8_MAX;
	static volatile int16_t x359 = -1;
	uint32_t x360 = 12U;
	volatile int32_t t66 = 3793;

    t66 = ((x357==x358)<=(x359*x360));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint8_t x369 = UINT8_MAX;
	int8_t x370 = INT8_MAX;
	static uint64_t x371 = UINT64_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t67 = 0;

    t67 = ((x369==x370)<=(x371*x372));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x374 = -1653;
	int8_t x375 = INT8_MAX;
	static int8_t x376 = INT8_MAX;
	int32_t t68 = -199230207;

    t68 = ((x373==x374)<=(x375*x376));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x377 = 1U;
	static int16_t x379 = INT16_MIN;

    t69 = ((x377==x378)<=(x379*x380));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x381 = 8255LL;
	uint8_t x382 = UINT8_MAX;
	static int32_t x383 = -4164288;
	static int32_t x384 = -1;
	volatile int32_t t70 = -103330117;

    t70 = ((x381==x382)<=(x383*x384));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x385 = 9;
	uint8_t x386 = 1U;
	uint16_t x387 = 5U;
	int8_t x388 = -19;
	int32_t t71 = -4;

    t71 = ((x385==x386)<=(x387*x388));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x393 = -1;
	uint8_t x394 = 8U;
	int16_t x395 = INT16_MIN;

    t72 = ((x393==x394)<=(x395*x396));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x397 = 7;
	uint32_t x398 = 62104U;
	int32_t x400 = 17;

    t73 = ((x397==x398)<=(x399*x400));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x401 = INT64_MIN;
	uint8_t x402 = 0U;
	int8_t x403 = INT8_MIN;
	int16_t x404 = -1;

    t74 = ((x401==x402)<=(x403*x404));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x405 = -1;
	int8_t x406 = INT8_MIN;
	static int8_t x408 = INT8_MAX;
	volatile int32_t t75 = -15;

    t75 = ((x405==x406)<=(x407*x408));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x409 = -246286551;
	int16_t x411 = INT16_MIN;
	volatile int16_t x412 = -1;
	int32_t t76 = 0;

    t76 = ((x409==x410)<=(x411*x412));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x413 = 6583754U;
	uint16_t x414 = 0U;
	int8_t x415 = 35;
	volatile int32_t t77 = -11922447;

    t77 = ((x413==x414)<=(x415*x416));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x417 = INT8_MAX;
	static int64_t x418 = -23447371199374150LL;
	int32_t x419 = -8;
	uint8_t x420 = 7U;
	int32_t t78 = -636460;

    t78 = ((x417==x418)<=(x419*x420));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x429 = INT16_MIN;
	volatile uint32_t x430 = UINT32_MAX;
	int64_t x431 = -313LL;
	static int16_t x432 = 0;
	static volatile int32_t t79 = -93;

    t79 = ((x429==x430)<=(x431*x432));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x437 = UINT64_MAX;
	static uint16_t x439 = 29U;

    t80 = ((x437==x438)<=(x439*x440));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x441 = INT16_MAX;
	uint64_t x442 = 5632895426223LLU;
	uint32_t x443 = 319U;
	int64_t x444 = -1LL;
	volatile int32_t t81 = 2023393;

    t81 = ((x441==x442)<=(x443*x444));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x445 = 1061LLU;
	static uint32_t x447 = 53U;
	volatile uint16_t x448 = UINT16_MAX;

    t82 = ((x445==x446)<=(x447*x448));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x449 = 6066U;
	int64_t x451 = -1LL;
	volatile int32_t x452 = INT32_MAX;
	volatile int32_t t83 = 11;

    t83 = ((x449==x450)<=(x451*x452));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x454 = 11242271LLU;
	static uint64_t x455 = UINT64_MAX;
	int16_t x456 = INT16_MIN;

    t84 = ((x453==x454)<=(x455*x456));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x462 = 154U;
	static int32_t x463 = INT32_MAX;
	uint64_t x464 = 56LLU;

    t85 = ((x461==x462)<=(x463*x464));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x465 = 3U;
	static volatile uint16_t x466 = UINT16_MAX;
	uint32_t x468 = 1471573460U;
	int32_t t86 = 54983694;

    t86 = ((x465==x466)<=(x467*x468));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x473 = INT8_MIN;
	static volatile int64_t x475 = -7993LL;
	int8_t x476 = -2;
	volatile int32_t t87 = 1444690;

    t87 = ((x473==x474)<=(x475*x476));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x477 = 177549237795849LLU;
	int8_t x478 = -1;
	uint64_t x479 = 147920931776688783LLU;
	volatile int32_t x480 = INT32_MAX;

    t88 = ((x477==x478)<=(x479*x480));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x500 = 7;
	volatile int32_t t89 = -668;

    t89 = ((x497==x498)<=(x499*x500));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x501 = UINT64_MAX;
	static int16_t x502 = INT16_MAX;
	uint32_t x503 = 184U;
	volatile uint64_t x504 = 1LLU;
	static volatile int32_t t90 = 474237;

    t90 = ((x501==x502)<=(x503*x504));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x506 = -2404716110LL;
	volatile int64_t x507 = 296LL;
	int32_t t91 = -11004;

    t91 = ((x505==x506)<=(x507*x508));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x509 = INT32_MIN;
	int32_t x510 = -407;
	uint64_t x511 = 365249101896LLU;
	int16_t x512 = 62;

    t92 = ((x509==x510)<=(x511*x512));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x517 = 8U;
	static uint32_t x518 = UINT32_MAX;
	int64_t x519 = -1LL;
	int32_t t93 = -4125;

    t93 = ((x517==x518)<=(x519*x520));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x521 = -1;
	static volatile int8_t x523 = -1;
	volatile int32_t t94 = 1019784625;

    t94 = ((x521==x522)<=(x523*x524));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x525 = INT64_MAX;
	uint32_t x526 = 110804U;
	int32_t x527 = INT32_MAX;
	static uint8_t x528 = 0U;

    t95 = ((x525==x526)<=(x527*x528));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x529 = INT16_MAX;
	static volatile uint8_t x530 = UINT8_MAX;
	volatile int32_t t96 = -20;

    t96 = ((x529==x530)<=(x531*x532));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x533 = 88U;
	int16_t x534 = -1;
	volatile int32_t x536 = 68209733;
	int32_t t97 = 0;

    t97 = ((x533==x534)<=(x535*x536));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x537 = 1U;
	volatile int8_t x538 = -1;
	static uint32_t x539 = 12U;
	volatile int32_t x540 = INT32_MAX;
	int32_t t98 = -505054;

    t98 = ((x537==x538)<=(x539*x540));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x542 = INT16_MIN;
	int16_t x543 = INT16_MIN;
	uint64_t x544 = 435LLU;
	volatile int32_t t99 = -12007697;

    t99 = ((x541==x542)<=(x543*x544));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x545 = -1;
	int8_t x546 = 5;
	static int64_t x547 = -106680989298LL;
	int32_t t100 = -166;

    t100 = ((x545==x546)<=(x547*x548));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x549 = -4;
	uint8_t x550 = UINT8_MAX;
	uint8_t x551 = UINT8_MAX;
	int16_t x552 = INT16_MAX;
	volatile int32_t t101 = -1352669;

    t101 = ((x549==x550)<=(x551*x552));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x557 = INT32_MIN;
	int8_t x558 = -1;
	static volatile uint16_t x559 = 778U;
	int64_t x560 = 809591LL;
	int32_t t102 = 253777;

    t102 = ((x557==x558)<=(x559*x560));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x562 = INT32_MIN;
	int32_t x563 = -1;
	static int32_t x564 = 34169;
	int32_t t103 = 381506642;

    t103 = ((x561==x562)<=(x563*x564));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x565 = INT16_MIN;
	volatile uint64_t x566 = UINT64_MAX;
	int64_t x567 = 828483LL;

    t104 = ((x565==x566)<=(x567*x568));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x569 = INT64_MAX;
	int8_t x570 = INT8_MIN;
	int16_t x571 = INT16_MIN;
	volatile int8_t x572 = INT8_MIN;
	static int32_t t105 = 100051469;

    t105 = ((x569==x570)<=(x571*x572));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x577 = 77080U;
	uint64_t x578 = UINT64_MAX;
	volatile int16_t x579 = -1;
	int64_t x580 = INT64_MAX;
	volatile int32_t t106 = 2049629;

    t106 = ((x577==x578)<=(x579*x580));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x581 = UINT8_MAX;
	int64_t x582 = 228975668LL;
	int64_t x583 = -1LL;
	volatile int8_t x584 = -1;
	int32_t t107 = -8069016;

    t107 = ((x581==x582)<=(x583*x584));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	uint32_t x586 = 21U;
	uint32_t x587 = UINT32_MAX;
	volatile int32_t t108 = -22935400;

    t108 = ((x585==x586)<=(x587*x588));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x589 = 1;
	int64_t x590 = INT64_MIN;
	int64_t x592 = -10491343807LL;
	volatile int32_t t109 = 202900097;

    t109 = ((x589==x590)<=(x591*x592));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x593 = INT8_MIN;
	volatile uint16_t x594 = 1U;
	static int32_t x595 = -1;
	int8_t x596 = -1;
	int32_t t110 = 2;

    t110 = ((x593==x594)<=(x595*x596));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	int64_t x598 = -1LL;
	int16_t x599 = 13283;
	int16_t x600 = -1;
	static volatile int32_t t111 = -1850;

    t111 = ((x597==x598)<=(x599*x600));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x605 = INT32_MAX;
	volatile int16_t x606 = -1;
	int32_t x607 = -1;
	uint64_t x608 = 37198946145LLU;
	int32_t t112 = 13;

    t112 = ((x605==x606)<=(x607*x608));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x609 = 3U;
	uint8_t x610 = UINT8_MAX;
	uint64_t x611 = 255415LLU;
	int32_t t113 = 10461425;

    t113 = ((x609==x610)<=(x611*x612));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x614 = 29008U;
	int16_t x615 = INT16_MIN;
	uint32_t x616 = 6254623U;
	volatile int32_t t114 = 113856497;

    t114 = ((x613==x614)<=(x615*x616));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x617 = INT32_MIN;
	volatile int16_t x618 = INT16_MIN;
	int64_t x620 = INT64_MAX;
	int32_t t115 = -1510;

    t115 = ((x617==x618)<=(x619*x620));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x621 = 14167;
	static int32_t x622 = INT32_MIN;
	static int64_t x623 = -28254442643LL;
	int8_t x624 = INT8_MIN;
	volatile int32_t t116 = -1;

    t116 = ((x621==x622)<=(x623*x624));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x625 = INT8_MIN;
	uint32_t x626 = 393301U;
	int32_t x627 = -1;
	volatile int64_t x628 = INT64_MAX;
	volatile int32_t t117 = 1473;

    t117 = ((x625==x626)<=(x627*x628));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x629 = UINT64_MAX;
	int64_t x632 = -1LL;
	int32_t t118 = -428;

    t118 = ((x629==x630)<=(x631*x632));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x633 = INT64_MIN;
	int8_t x634 = INT8_MIN;
	uint16_t x635 = 4U;
	uint64_t x636 = 178044LLU;
	static volatile int32_t t119 = -874113910;

    t119 = ((x633==x634)<=(x635*x636));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x638 = -16144848214497361LL;
	int8_t x639 = INT8_MIN;
	int32_t x640 = -57186;

    t120 = ((x637==x638)<=(x639*x640));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x641 = 2U;
	uint16_t x642 = 130U;
	int32_t x643 = 30553;
	static volatile uint8_t x644 = 11U;
	volatile int32_t t121 = -2836;

    t121 = ((x641==x642)<=(x643*x644));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x654 = 18U;
	int16_t x656 = -1;
	static int32_t t122 = -5;

    t122 = ((x653==x654)<=(x655*x656));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x658 = 26;
	int16_t x659 = INT16_MIN;
	int8_t x660 = INT8_MAX;

    t123 = ((x657==x658)<=(x659*x660));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x661 = INT16_MIN;
	int8_t x662 = INT8_MIN;
	int32_t x663 = INT32_MIN;
	volatile int64_t x664 = -2566LL;
	volatile int32_t t124 = -3;

    t124 = ((x661==x662)<=(x663*x664));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x665 = -1LL;
	static int16_t x666 = INT16_MIN;
	uint16_t x667 = 2045U;
	int8_t x668 = INT8_MIN;
	volatile int32_t t125 = 40365329;

    t125 = ((x665==x666)<=(x667*x668));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x669 = 0;

    t126 = ((x669==x670)<=(x671*x672));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x673 = 16U;
	volatile uint32_t x674 = 1272818U;
	int8_t x675 = -60;
	static int8_t x676 = INT8_MAX;

    t127 = ((x673==x674)<=(x675*x676));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x681 = 148731001U;
	volatile int16_t x682 = 11167;
	uint64_t x683 = 17784787LLU;

    t128 = ((x681==x682)<=(x683*x684));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x685 = UINT16_MAX;
	volatile int64_t x686 = INT64_MIN;
	uint32_t x687 = 771U;
	uint64_t x688 = UINT64_MAX;

    t129 = ((x685==x686)<=(x687*x688));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x690 = -1;
	uint16_t x691 = 295U;
	volatile uint8_t x692 = 22U;

    t130 = ((x689==x690)<=(x691*x692));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x697 = -1LL;
	volatile int32_t x698 = 418905164;
	static uint32_t x699 = 2U;
	static int8_t x700 = INT8_MIN;
	volatile int32_t t131 = -50500;

    t131 = ((x697==x698)<=(x699*x700));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x709 = INT64_MIN;
	int16_t x710 = -3;
	static int32_t x711 = 7;
	int32_t x712 = 214;
	int32_t t132 = -847;

    t132 = ((x709==x710)<=(x711*x712));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x713 = UINT16_MAX;
	static int64_t x714 = INT64_MIN;
	uint16_t x715 = 0U;
	static int8_t x716 = INT8_MIN;
	volatile int32_t t133 = -28749833;

    t133 = ((x713==x714)<=(x715*x716));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x717 = 11517U;
	static volatile int8_t x718 = INT8_MIN;
	int16_t x719 = -1;
	volatile int8_t x720 = -1;
	volatile int32_t t134 = 239119;

    t134 = ((x717==x718)<=(x719*x720));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x721 = 301767U;
	int16_t x723 = -1;
	static uint8_t x724 = 10U;

    t135 = ((x721==x722)<=(x723*x724));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x725 = 2U;
	int32_t x726 = 27;
	int64_t x727 = -642LL;
	int32_t t136 = 69051;

    t136 = ((x725==x726)<=(x727*x728));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x729 = 1027381104U;
	int8_t x731 = INT8_MIN;
	static uint64_t x732 = 28735882LLU;
	static int32_t t137 = -947;

    t137 = ((x729==x730)<=(x731*x732));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x737 = 19U;
	uint16_t x738 = UINT16_MAX;
	uint32_t x739 = 251738U;
	volatile int16_t x740 = INT16_MIN;
	volatile int32_t t138 = -1;

    t138 = ((x737==x738)<=(x739*x740));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x741 = 2U;
	static uint16_t x742 = UINT16_MAX;
	volatile int16_t x743 = INT16_MIN;
	volatile int64_t x744 = 244511988LL;
	int32_t t139 = 1109286;

    t139 = ((x741==x742)<=(x743*x744));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x753 = -5;
	int8_t x755 = -13;
	static int64_t x756 = -119635151483833838LL;
	static volatile int32_t t140 = -540;

    t140 = ((x753==x754)<=(x755*x756));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x761 = 440U;
	static uint16_t x763 = UINT16_MAX;
	static int32_t x764 = -3067;

    t141 = ((x761==x762)<=(x763*x764));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x768 = 276LLU;
	static volatile int32_t t142 = 99254;

    t142 = ((x765==x766)<=(x767*x768));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x769 = 6;
	int16_t x770 = INT16_MIN;
	static volatile uint64_t x771 = 44172274601683651LLU;
	int32_t x772 = -1;
	volatile int32_t t143 = 662;

    t143 = ((x769==x770)<=(x771*x772));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x777 = INT64_MAX;
	int32_t x778 = 1;
	static volatile uint32_t x779 = UINT32_MAX;
	static int8_t x780 = INT8_MIN;
	int32_t t144 = 448428620;

    t144 = ((x777==x778)<=(x779*x780));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x781 = UINT32_MAX;
	int64_t x782 = -1LL;
	uint64_t x783 = 192476141371LLU;
	uint8_t x784 = 1U;
	int32_t t145 = -458969689;

    t145 = ((x781==x782)<=(x783*x784));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x789 = INT8_MIN;
	int32_t x790 = -9439781;
	int64_t x791 = -405LL;
	static int16_t x792 = -1;
	volatile int32_t t146 = 255704;

    t146 = ((x789==x790)<=(x791*x792));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x793 = UINT64_MAX;
	int64_t x794 = 2095218312LL;
	volatile uint64_t x795 = 175697LLU;
	volatile uint16_t x796 = 2974U;
	int32_t t147 = 1005;

    t147 = ((x793==x794)<=(x795*x796));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x798 = 7U;
	int64_t x799 = INT64_MIN;
	static volatile int32_t t148 = 2005839;

    t148 = ((x797==x798)<=(x799*x800));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x801 = -1;
	volatile int64_t x802 = 2LL;
	uint16_t x803 = UINT16_MAX;
	static int16_t x804 = -1;
	volatile int32_t t149 = -214;

    t149 = ((x801==x802)<=(x803*x804));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x809 = INT64_MIN;
	static uint64_t x812 = 2869289921281336800LLU;

    t150 = ((x809==x810)<=(x811*x812));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x821 = 57;
	int16_t x823 = INT16_MIN;
	int16_t x824 = INT16_MIN;

    t151 = ((x821==x822)<=(x823*x824));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x825 = 63;
	int64_t x826 = INT64_MAX;
	int8_t x827 = -1;
	uint32_t x828 = UINT32_MAX;
	static volatile int32_t t152 = -303772;

    t152 = ((x825==x826)<=(x827*x828));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x829 = UINT16_MAX;
	uint64_t x830 = UINT64_MAX;
	int16_t x831 = 56;
	volatile int64_t x832 = -1LL;
	volatile int32_t t153 = -75;

    t153 = ((x829==x830)<=(x831*x832));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x833 = INT16_MIN;
	uint16_t x834 = UINT16_MAX;
	static volatile uint32_t x835 = 23680U;
	int16_t x836 = INT16_MAX;
	int32_t t154 = -255980;

    t154 = ((x833==x834)<=(x835*x836));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x837 = -68535619214105903LL;
	int64_t x839 = INT64_MIN;
	volatile uint64_t x840 = 7235140727LLU;
	static volatile int32_t t155 = -3790908;

    t155 = ((x837==x838)<=(x839*x840));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x841 = 3LLU;
	static uint16_t x842 = 2933U;

    t156 = ((x841==x842)<=(x843*x844));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x846 = INT64_MIN;
	static int32_t x847 = -1;
	int32_t x848 = -1;
	int32_t t157 = 127;

    t157 = ((x845==x846)<=(x847*x848));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x853 = INT16_MIN;
	int8_t x854 = -1;
	static int16_t x855 = INT16_MIN;

    t158 = ((x853==x854)<=(x855*x856));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x857 = -1;
	uint16_t x858 = UINT16_MAX;
	int64_t x860 = 17LL;
	static volatile int32_t t159 = 41;

    t159 = ((x857==x858)<=(x859*x860));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x861 = -1LL;
	int64_t x862 = -1LL;
	uint32_t x863 = 886314U;
	volatile int32_t t160 = -162;

    t160 = ((x861==x862)<=(x863*x864));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x868 = 1676;
	volatile int32_t t161 = -37828;

    t161 = ((x865==x866)<=(x867*x868));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x869 = INT8_MAX;
	int8_t x871 = 15;
	static uint16_t x872 = 39U;
	volatile int32_t t162 = -3;

    t162 = ((x869==x870)<=(x871*x872));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x873 = 1826LL;
	static uint16_t x875 = UINT16_MAX;
	int32_t t163 = 2;

    t163 = ((x873==x874)<=(x875*x876));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x878 = INT16_MIN;
	static volatile uint64_t x879 = UINT64_MAX;
	volatile int64_t x880 = -2161840122221259843LL;
	static volatile int32_t t164 = -1859451;

    t164 = ((x877==x878)<=(x879*x880));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x885 = -98719LL;
	static uint64_t x886 = UINT64_MAX;
	volatile int32_t x887 = 8;
	volatile uint16_t x888 = 16U;
	volatile int32_t t165 = -274618;

    t165 = ((x885==x886)<=(x887*x888));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x889 = INT16_MIN;
	uint64_t x890 = 573027210444867682LLU;
	int32_t x891 = -1;
	int16_t x892 = 79;
	volatile int32_t t166 = 12113880;

    t166 = ((x889==x890)<=(x891*x892));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x895 = INT16_MAX;
	int16_t x896 = -1;

    t167 = ((x893==x894)<=(x895*x896));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x897 = 21887;
	volatile uint64_t x898 = 53LLU;
	int64_t x900 = -117736774608480469LL;
	volatile int32_t t168 = -1;

    t168 = ((x897==x898)<=(x899*x900));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x901 = INT16_MIN;
	int8_t x902 = 2;
	uint64_t x903 = UINT64_MAX;
	volatile int32_t t169 = 46478063;

    t169 = ((x901==x902)<=(x903*x904));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x909 = -1LL;
	int16_t x910 = INT16_MIN;
	uint32_t x911 = 28727U;
	static int32_t t170 = 0;

    t170 = ((x909==x910)<=(x911*x912));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x913 = INT64_MAX;
	int16_t x914 = INT16_MIN;
	static int32_t x915 = -1;
	volatile int16_t x916 = 3;

    t171 = ((x913==x914)<=(x915*x916));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x917 = INT8_MIN;
	static int32_t t172 = -1;

    t172 = ((x917==x918)<=(x919*x920));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint64_t x921 = UINT64_MAX;
	uint64_t x922 = 4909453111253LLU;
	uint16_t x924 = UINT16_MAX;
	volatile int32_t t173 = 0;

    t173 = ((x921==x922)<=(x923*x924));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x925 = INT32_MIN;
	int8_t x926 = INT8_MIN;
	int8_t x927 = INT8_MIN;
	volatile uint16_t x928 = UINT16_MAX;

    t174 = ((x925==x926)<=(x927*x928));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x930 = 6;
	uint32_t x931 = UINT32_MAX;
	volatile int32_t t175 = -26970734;

    t175 = ((x929==x930)<=(x931*x932));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x933 = 0;
	static int8_t x934 = -1;
	int32_t x935 = -553;
	static int32_t t176 = 127;

    t176 = ((x933==x934)<=(x935*x936));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x941 = 10715074U;
	uint32_t x942 = 1441U;
	int32_t x943 = 6;
	uint64_t x944 = 9056962753565434085LLU;
	int32_t t177 = -7577;

    t177 = ((x941==x942)<=(x943*x944));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x945 = UINT32_MAX;
	uint16_t x947 = 7U;
	static int32_t t178 = -64703;

    t178 = ((x945==x946)<=(x947*x948));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x951 = INT16_MIN;
	int8_t x952 = INT8_MAX;
	int32_t t179 = 73;

    t179 = ((x949==x950)<=(x951*x952));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x953 = 0;
	static int32_t x955 = -1;
	static int32_t t180 = -1298;

    t180 = ((x953==x954)<=(x955*x956));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x958 = INT8_MIN;
	int8_t x959 = -1;
	int8_t x960 = -2;
	int32_t t181 = -438657698;

    t181 = ((x957==x958)<=(x959*x960));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x961 = -19;
	int64_t x962 = 5920567LL;
	int32_t x963 = -48;
	static int8_t x964 = -1;
	int32_t t182 = -30406;

    t182 = ((x961==x962)<=(x963*x964));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x970 = INT16_MIN;
	uint32_t x972 = 94U;
	volatile int32_t t183 = 250161;

    t183 = ((x969==x970)<=(x971*x972));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x973 = 0U;
	volatile int32_t x974 = -1;
	int8_t x975 = INT8_MIN;
	volatile int32_t t184 = -2646;

    t184 = ((x973==x974)<=(x975*x976));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x979 = -1;
	int8_t x980 = INT8_MIN;
	int32_t t185 = -20835311;

    t185 = ((x977==x978)<=(x979*x980));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x981 = UINT32_MAX;
	int64_t x983 = -521945LL;
	int8_t x984 = 1;
	int32_t t186 = -29862897;

    t186 = ((x981==x982)<=(x983*x984));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x985 = 101254;
	int32_t x986 = INT32_MIN;
	int32_t x988 = INT32_MAX;
	int32_t t187 = -143979;

    t187 = ((x985==x986)<=(x987*x988));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x989 = -7799;
	int64_t x990 = INT64_MIN;
	volatile uint64_t x991 = 6683028212LLU;
	int64_t x992 = -1LL;
	volatile int32_t t188 = -218584;

    t188 = ((x989==x990)<=(x991*x992));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x993 = INT16_MAX;
	volatile uint8_t x994 = 23U;
	uint64_t x996 = 3903717LLU;

    t189 = ((x993==x994)<=(x995*x996));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x997 = INT8_MIN;
	uint8_t x998 = 0U;
	volatile int64_t x999 = -1LL;
	static uint64_t x1000 = 16685LLU;
	volatile int32_t t190 = -12;

    t190 = ((x997==x998)<=(x999*x1000));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1002 = INT8_MIN;
	uint64_t x1003 = 432338LLU;

    t191 = ((x1001==x1002)<=(x1003*x1004));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x1006 = UINT64_MAX;
	int16_t x1007 = INT16_MIN;
	int16_t x1008 = INT16_MAX;
	static int32_t t192 = -86;

    t192 = ((x1005==x1006)<=(x1007*x1008));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x1013 = INT16_MAX;
	int16_t x1014 = INT16_MAX;
	int16_t x1016 = INT16_MAX;
	int32_t t193 = 7870;

    t193 = ((x1013==x1014)<=(x1015*x1016));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1017 = INT8_MIN;
	int64_t x1018 = INT64_MAX;
	static int32_t t194 = 122024;

    t194 = ((x1017==x1018)<=(x1019*x1020));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1021 = INT16_MIN;
	volatile int32_t x1022 = INT32_MIN;
	volatile uint8_t x1023 = UINT8_MAX;
	static int64_t x1024 = 0LL;
	static int32_t t195 = 134665071;

    t195 = ((x1021==x1022)<=(x1023*x1024));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1029 = 97274216LLU;
	static int8_t x1030 = INT8_MIN;
	uint64_t x1031 = 2187936214323867LLU;
	int16_t x1032 = -1;
	int32_t t196 = -2981370;

    t196 = ((x1029==x1030)<=(x1031*x1032));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1033 = INT8_MAX;
	static int8_t x1034 = INT8_MIN;
	uint16_t x1035 = UINT16_MAX;
	uint8_t x1036 = 73U;
	int32_t t197 = -2021784;

    t197 = ((x1033==x1034)<=(x1035*x1036));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1037 = INT16_MIN;
	static uint8_t x1038 = 68U;
	int32_t x1040 = INT32_MAX;
	volatile int32_t t198 = -23;

    t198 = ((x1037==x1038)<=(x1039*x1040));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1042 = -3446;
	int8_t x1043 = 0;
	int8_t x1044 = -1;
	volatile int32_t t199 = 1;

    t199 = ((x1041==x1042)<=(x1043*x1044));

    if (t199 != 1) { NG(); } else { ; }
	
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

