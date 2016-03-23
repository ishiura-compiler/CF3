
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

uint32_t x8 = 313375552U;
int16_t x9 = INT16_MIN;
int8_t x12 = -1;
int32_t x19 = 40380;
uint32_t x31 = 145429U;
int8_t x32 = -1;
int8_t x77 = -1;
int32_t t13 = 204487;
int16_t x83 = INT16_MAX;
uint8_t x98 = 0U;
int8_t x104 = -5;
uint16_t x110 = UINT16_MAX;
uint8_t x111 = UINT8_MAX;
int8_t x121 = 11;
int32_t x129 = 7509800;
int64_t x130 = INT64_MAX;
static int32_t t26 = 475514;
int32_t x137 = INT32_MAX;
volatile int8_t x138 = INT8_MAX;
static int32_t x144 = INT32_MIN;
uint8_t x150 = 4U;
static int16_t x155 = INT16_MIN;
volatile int32_t t32 = -1;
int8_t x160 = 10;
int8_t x164 = INT8_MIN;
int64_t x165 = INT64_MAX;
int64_t x168 = INT64_MIN;
volatile int32_t t35 = 4534986;
static uint16_t x173 = 23409U;
int64_t x182 = -1LL;
uint16_t x189 = 1416U;
static int8_t x190 = INT8_MIN;
uint16_t x198 = 14U;
volatile int64_t x201 = INT64_MIN;
volatile uint8_t x203 = 1U;
volatile int32_t t42 = 9;
int32_t t43 = -1;
int16_t x210 = INT16_MIN;
volatile int32_t x212 = -943826868;
uint8_t x214 = 1U;
static int16_t x220 = INT16_MIN;
int32_t t46 = -62166;
int16_t x224 = INT16_MAX;
int32_t t47 = -313;
volatile int32_t t48 = -66;
static int64_t x245 = INT64_MIN;
int8_t x246 = INT8_MIN;
int32_t t52 = -47111096;
static volatile int32_t x251 = INT32_MAX;
int16_t x258 = INT16_MIN;
static int8_t x260 = -1;
static volatile int8_t x266 = -1;
uint16_t x267 = UINT16_MAX;
static volatile int32_t t59 = -8998;
int64_t x281 = -404LL;
int32_t t60 = 1884;
int8_t x298 = INT8_MIN;
int8_t x300 = INT8_MIN;
static uint8_t x309 = 2U;
int8_t x320 = 4;
volatile uint32_t x327 = UINT32_MAX;
int32_t t68 = 3920456;
int64_t x329 = INT64_MIN;
int64_t x344 = -155942088LL;
int16_t x347 = INT16_MAX;
static int16_t x350 = INT16_MIN;
static volatile int32_t x351 = INT32_MIN;
int32_t x373 = INT32_MIN;
uint8_t x376 = 0U;
static volatile int32_t t78 = 18096529;
int8_t x378 = -1;
int16_t x381 = INT16_MIN;
int16_t x385 = INT16_MIN;
uint16_t x391 = UINT16_MAX;
static uint64_t x397 = UINT64_MAX;
static int8_t x400 = INT8_MIN;
int32_t t86 = 88704955;
static int8_t x417 = INT8_MIN;
int16_t x418 = INT16_MAX;
uint64_t x419 = UINT64_MAX;
int32_t x420 = 13;
static uint32_t x423 = UINT32_MAX;
uint16_t x435 = UINT16_MAX;
int32_t t91 = -790834;
uint64_t x443 = 73391LLU;
static volatile uint8_t x444 = 60U;
static uint32_t x452 = 1578U;
static int32_t x461 = INT32_MIN;
int8_t x463 = 1;
int16_t x467 = -7;
uint16_t x483 = 29283U;
int32_t t100 = 0;
uint8_t x489 = 5U;
int8_t x495 = -1;
uint8_t x503 = 3U;
int32_t t105 = 0;
static uint64_t x513 = UINT64_MAX;
uint16_t x527 = 1U;
volatile int32_t t109 = 6205916;
volatile uint32_t x529 = 411523U;
uint64_t x535 = UINT64_MAX;
int32_t x537 = INT32_MIN;
int8_t x539 = -1;
uint16_t x542 = 56U;
volatile int32_t t113 = 72419;
uint64_t x547 = 4357718LLU;
int16_t x548 = 4;
uint64_t x549 = 7LLU;
uint32_t x550 = 101008U;
int16_t x555 = INT16_MIN;
int32_t t116 = -145759875;
volatile int32_t t117 = 12;
static volatile uint16_t x563 = 933U;
volatile int8_t x565 = INT8_MIN;
int16_t x581 = 8364;
volatile int32_t t124 = -15840999;
uint64_t x591 = 3817765677589LLU;
uint64_t x592 = 430878669LLU;
static uint8_t x593 = 6U;
int32_t t127 = 30;
volatile int16_t x611 = INT16_MIN;
static int32_t t129 = 19;
volatile int32_t t132 = 10;
static int32_t t137 = -64171;
volatile uint64_t x650 = 503845267LLU;
uint16_t x652 = UINT16_MAX;
int32_t x658 = -27304;
uint32_t x677 = 1400293821U;
int32_t x682 = INT32_MAX;
volatile int32_t t149 = -237568806;
int8_t x713 = -1;
int8_t x714 = 1;
static int64_t x724 = INT64_MIN;
volatile int32_t t155 = -147;
uint16_t x727 = 13U;
static int32_t t159 = -177302;
int64_t x744 = -1LL;
static volatile int16_t x746 = -1;
static volatile int32_t t162 = 243451814;
int32_t x765 = INT32_MIN;
int16_t x768 = 2;
static int32_t t165 = 729339;
volatile int64_t x770 = -3238183053723108LL;
int8_t x772 = -1;
static volatile int64_t x777 = -1LL;
int64_t x778 = 1LL;
volatile int32_t t169 = -11;
volatile uint32_t x785 = 280U;
static volatile uint8_t x786 = UINT8_MAX;
volatile int32_t t170 = -108206334;
int64_t x795 = -4342344110023LL;
uint8_t x800 = 3U;
volatile uint8_t x807 = 1U;
volatile int32_t t175 = -45879238;
volatile int32_t t178 = -465568152;
static int32_t x842 = INT32_MIN;
uint64_t x843 = 8283712LLU;
static int64_t x847 = -94697895LL;
int16_t x849 = INT16_MIN;
volatile int8_t x853 = 1;
uint8_t x855 = 2U;
static int32_t t186 = -10619;
static uint16_t x863 = 68U;
int32_t t187 = -138331;
int32_t x866 = INT32_MAX;
int16_t x867 = -1;
uint32_t x870 = UINT32_MAX;
volatile int32_t t190 = -3731838;
int32_t t191 = -789;
uint64_t x881 = 4018324901201138316LLU;
uint32_t x883 = UINT32_MAX;
int8_t x886 = INT8_MIN;
int32_t x887 = 28;
uint8_t x898 = UINT8_MAX;
volatile int32_t x900 = 2935;
int64_t x902 = -5407747147LL;
int32_t t197 = -20185547;
int32_t x907 = -1;


void f0(void) {
    	static int64_t x5 = INT64_MIN;
	int8_t x6 = -20;
	int64_t x7 = 2136826898LL;
	volatile int32_t t0 = 0;

    t0 = ((x5==x6)<=(x7+x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x10 = INT16_MIN;
	volatile int16_t x11 = INT16_MIN;
	int32_t t1 = -22;

    t1 = ((x9==x10)<=(x11+x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = 21U;
	uint32_t x14 = 53053038U;
	static int8_t x15 = -1;
	volatile int32_t x16 = INT32_MAX;
	int32_t t2 = -80;

    t2 = ((x13==x14)<=(x15+x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x17 = INT64_MAX;
	int8_t x18 = 0;
	uint16_t x20 = 910U;
	static volatile int32_t t3 = 607155995;

    t3 = ((x17==x18)<=(x19+x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MAX;
	int16_t x22 = INT16_MIN;
	int64_t x23 = -1LL;
	int8_t x24 = INT8_MIN;
	int32_t t4 = -66;

    t4 = ((x21==x22)<=(x23+x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint16_t x25 = 1U;
	uint32_t x26 = 1U;
	int32_t x27 = -1;
	uint8_t x28 = 4U;
	static int32_t t5 = -20120876;

    t5 = ((x25==x26)<=(x27+x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = INT16_MIN;
	uint16_t x30 = 22322U;
	int32_t t6 = -18086652;

    t6 = ((x29==x30)<=(x31+x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = -65378235881812LL;
	volatile int32_t x34 = INT32_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	int64_t x36 = -44082351070LL;
	static int32_t t7 = -3176912;

    t7 = ((x33==x34)<=(x35+x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x41 = UINT8_MAX;
	static volatile uint32_t x42 = 78344U;
	uint64_t x43 = 234LLU;
	volatile uint64_t x44 = 7440456872LLU;
	volatile int32_t t8 = 3409;

    t8 = ((x41==x42)<=(x43+x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x45 = INT32_MIN;
	int64_t x46 = 235301792096549199LL;
	static int8_t x47 = INT8_MAX;
	int8_t x48 = INT8_MAX;
	volatile int32_t t9 = 53940798;

    t9 = ((x45==x46)<=(x47+x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x53 = -2;
	volatile int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MIN;
	uint32_t x56 = 757U;
	volatile int32_t t10 = 16102814;

    t10 = ((x53==x54)<=(x55+x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x69 = INT32_MAX;
	static uint16_t x70 = 979U;
	static uint16_t x71 = UINT16_MAX;
	volatile int32_t x72 = INT32_MIN;
	volatile int32_t t11 = 879251343;

    t11 = ((x69==x70)<=(x71+x72));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x73 = -1;
	int64_t x74 = -21436514470LL;
	volatile uint8_t x75 = 10U;
	int8_t x76 = INT8_MIN;
	volatile int32_t t12 = 2;

    t12 = ((x73==x74)<=(x75+x76));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x78 = UINT32_MAX;
	uint8_t x79 = UINT8_MAX;
	int64_t x80 = INT64_MIN;

    t13 = ((x77==x78)<=(x79+x80));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x81 = INT32_MIN;
	uint64_t x82 = UINT64_MAX;
	uint8_t x84 = 0U;
	int32_t t14 = 61437;

    t14 = ((x81==x82)<=(x83+x84));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x85 = -221090719LL;
	int8_t x86 = -1;
	volatile int16_t x87 = -1;
	static int32_t x88 = -1;
	int32_t t15 = -9272951;

    t15 = ((x85==x86)<=(x87+x88));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x89 = -33160207;
	uint32_t x90 = 304169281U;
	volatile uint8_t x91 = 26U;
	uint8_t x92 = UINT8_MAX;
	int32_t t16 = -57573;

    t16 = ((x89==x90)<=(x91+x92));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x93 = INT16_MIN;
	static uint16_t x94 = 44U;
	static int16_t x95 = 15425;
	uint64_t x96 = 149040155LLU;
	int32_t t17 = -59248040;

    t17 = ((x93==x94)<=(x95+x96));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x97 = 276U;
	int64_t x99 = -10LL;
	int8_t x100 = 0;
	static volatile int32_t t18 = -1;

    t18 = ((x97==x98)<=(x99+x100));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x101 = INT8_MIN;
	volatile uint64_t x102 = UINT64_MAX;
	int16_t x103 = INT16_MIN;
	int32_t t19 = -105868;

    t19 = ((x101==x102)<=(x103+x104));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x105 = INT8_MAX;
	int16_t x106 = -6106;
	int8_t x107 = INT8_MIN;
	int32_t x108 = -4;
	static int32_t t20 = 29;

    t20 = ((x105==x106)<=(x107+x108));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x109 = -4LL;
	int16_t x112 = 12386;
	int32_t t21 = -4007;

    t21 = ((x109==x110)<=(x111+x112));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x113 = 1966503LL;
	static volatile uint32_t x114 = 221699626U;
	uint16_t x115 = 0U;
	uint8_t x116 = UINT8_MAX;
	static int32_t t22 = -9;

    t22 = ((x113==x114)<=(x115+x116));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x117 = 2137634006U;
	int8_t x118 = -3;
	int64_t x119 = INT64_MIN;
	static int64_t x120 = INT64_MAX;
	int32_t t23 = -221768061;

    t23 = ((x117==x118)<=(x119+x120));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x122 = INT64_MAX;
	uint32_t x123 = 64349975U;
	int16_t x124 = 12;
	volatile int32_t t24 = -1;

    t24 = ((x121==x122)<=(x123+x124));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x125 = 12U;
	volatile uint32_t x126 = 31060U;
	int64_t x127 = -1LL;
	uint8_t x128 = 1U;
	static volatile int32_t t25 = 25;

    t25 = ((x125==x126)<=(x127+x128));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x131 = UINT16_MAX;
	uint16_t x132 = 48U;

    t26 = ((x129==x130)<=(x131+x132));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x133 = -51;
	uint16_t x134 = 4053U;
	uint32_t x135 = 1U;
	int32_t x136 = -1;
	volatile int32_t t27 = -3;

    t27 = ((x133==x134)<=(x135+x136));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x139 = INT16_MIN;
	static uint16_t x140 = 456U;
	int32_t t28 = 127;

    t28 = ((x137==x138)<=(x139+x140));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x141 = INT16_MAX;
	uint8_t x142 = UINT8_MAX;
	uint16_t x143 = UINT16_MAX;
	int32_t t29 = 19;

    t29 = ((x141==x142)<=(x143+x144));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x145 = -229;
	int16_t x146 = INT16_MIN;
	int64_t x147 = -1LL;
	volatile uint8_t x148 = 1U;
	int32_t t30 = -43396;

    t30 = ((x145==x146)<=(x147+x148));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x149 = -1;
	volatile uint32_t x151 = 388709U;
	int32_t x152 = INT32_MAX;
	volatile int32_t t31 = 131162524;

    t31 = ((x149==x150)<=(x151+x152));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x153 = 56U;
	volatile int16_t x154 = INT16_MAX;
	int32_t x156 = INT32_MAX;

    t32 = ((x153==x154)<=(x155+x156));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x157 = -349118;
	static uint8_t x158 = 125U;
	uint16_t x159 = 6340U;
	int32_t t33 = 16076;

    t33 = ((x157==x158)<=(x159+x160));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x161 = -118LL;
	static uint8_t x162 = UINT8_MAX;
	uint32_t x163 = 1843188294U;
	volatile int32_t t34 = -783721;

    t34 = ((x161==x162)<=(x163+x164));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x166 = 115911993;
	static int32_t x167 = INT32_MAX;

    t35 = ((x165==x166)<=(x167+x168));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x174 = -1;
	int16_t x175 = -1;
	static int16_t x176 = INT16_MIN;
	static volatile int32_t t36 = 10;

    t36 = ((x173==x174)<=(x175+x176));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x181 = UINT32_MAX;
	int16_t x183 = INT16_MAX;
	uint32_t x184 = 2002U;
	static volatile int32_t t37 = -7;

    t37 = ((x181==x182)<=(x183+x184));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x185 = 62581876643712LLU;
	uint16_t x186 = UINT16_MAX;
	int32_t x187 = INT32_MAX;
	int8_t x188 = INT8_MIN;
	static int32_t t38 = 14;

    t38 = ((x185==x186)<=(x187+x188));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x191 = INT64_MAX;
	int32_t x192 = INT32_MIN;
	volatile int32_t t39 = -1691072;

    t39 = ((x189==x190)<=(x191+x192));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x193 = INT64_MIN;
	static int32_t x194 = INT32_MIN;
	int64_t x195 = -878072116625204533LL;
	int16_t x196 = -108;
	int32_t t40 = -807;

    t40 = ((x193==x194)<=(x195+x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x197 = -18;
	volatile int32_t x199 = INT32_MIN;
	volatile int8_t x200 = 5;
	int32_t t41 = -10;

    t41 = ((x197==x198)<=(x199+x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x202 = -3906;
	int16_t x204 = INT16_MIN;

    t42 = ((x201==x202)<=(x203+x204));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x205 = INT16_MIN;
	uint8_t x206 = 8U;
	int8_t x207 = -1;
	volatile uint32_t x208 = 5841U;

    t43 = ((x205==x206)<=(x207+x208));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x209 = 5809726652332350LLU;
	static int32_t x211 = -1;
	static int32_t t44 = -186199;

    t44 = ((x209==x210)<=(x211+x212));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x213 = 728;
	static uint8_t x215 = UINT8_MAX;
	int8_t x216 = INT8_MIN;
	static int32_t t45 = -432725;

    t45 = ((x213==x214)<=(x215+x216));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x217 = INT64_MIN;
	int8_t x218 = 20;
	int8_t x219 = -1;

    t46 = ((x217==x218)<=(x219+x220));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x221 = 15105U;
	int32_t x222 = INT32_MAX;
	int32_t x223 = 395;

    t47 = ((x221==x222)<=(x223+x224));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x229 = UINT8_MAX;
	volatile int16_t x230 = INT16_MIN;
	int64_t x231 = -12LL;
	int16_t x232 = -1;

    t48 = ((x229==x230)<=(x231+x232));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x233 = 532U;
	uint32_t x234 = 416654616U;
	volatile int32_t x235 = -1;
	int8_t x236 = INT8_MIN;
	volatile int32_t t49 = -25;

    t49 = ((x233==x234)<=(x235+x236));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x237 = 307;
	volatile int8_t x238 = -20;
	volatile int8_t x239 = INT8_MIN;
	int16_t x240 = 7;
	volatile int32_t t50 = -6510044;

    t50 = ((x237==x238)<=(x239+x240));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x241 = INT8_MAX;
	volatile int64_t x242 = -1LL;
	uint16_t x243 = 1058U;
	static uint16_t x244 = 14447U;
	int32_t t51 = -5;

    t51 = ((x241==x242)<=(x243+x244));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x247 = 1U;
	static int64_t x248 = -1038516439485467077LL;

    t52 = ((x245==x246)<=(x247+x248));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x249 = INT64_MAX;
	static int32_t x250 = INT32_MIN;
	static int16_t x252 = -1;
	int32_t t53 = 116972;

    t53 = ((x249==x250)<=(x251+x252));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x257 = UINT64_MAX;
	int8_t x259 = INT8_MAX;
	static volatile int32_t t54 = 224243062;

    t54 = ((x257==x258)<=(x259+x260));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x261 = 0;
	int64_t x262 = -1LL;
	int8_t x263 = INT8_MIN;
	uint64_t x264 = 108558641895LLU;
	int32_t t55 = 25;

    t55 = ((x261==x262)<=(x263+x264));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x265 = UINT32_MAX;
	static int64_t x268 = INT64_MIN;
	int32_t t56 = -948248;

    t56 = ((x265==x266)<=(x267+x268));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x269 = INT32_MAX;
	int64_t x270 = INT64_MIN;
	volatile int16_t x271 = INT16_MIN;
	uint32_t x272 = 5569593U;
	volatile int32_t t57 = 1247;

    t57 = ((x269==x270)<=(x271+x272));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x273 = 1U;
	static uint16_t x274 = 2U;
	uint8_t x275 = UINT8_MAX;
	int16_t x276 = -1;
	volatile int32_t t58 = -1838187;

    t58 = ((x273==x274)<=(x275+x276));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x277 = 20U;
	int64_t x278 = -1LL;
	int32_t x279 = INT32_MAX;
	int32_t x280 = -1;

    t59 = ((x277==x278)<=(x279+x280));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MAX;
	uint8_t x284 = 0U;

    t60 = ((x281==x282)<=(x283+x284));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x285 = INT64_MIN;
	uint64_t x286 = 898541701326634638LLU;
	uint64_t x287 = 14623594373LLU;
	volatile uint8_t x288 = 1U;
	int32_t t61 = -874;

    t61 = ((x285==x286)<=(x287+x288));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x293 = INT8_MIN;
	uint32_t x294 = 1150U;
	volatile uint8_t x295 = 1U;
	volatile int8_t x296 = -1;
	int32_t t62 = 998;

    t62 = ((x293==x294)<=(x295+x296));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x297 = 8450U;
	int64_t x299 = 1310362552589162LL;
	volatile int32_t t63 = 353;

    t63 = ((x297==x298)<=(x299+x300));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x301 = INT16_MIN;
	static volatile uint32_t x302 = UINT32_MAX;
	volatile uint32_t x303 = UINT32_MAX;
	static int8_t x304 = INT8_MIN;
	volatile int32_t t64 = 2072655;

    t64 = ((x301==x302)<=(x303+x304));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x310 = INT16_MIN;
	uint64_t x311 = 22389336LLU;
	uint8_t x312 = 95U;
	int32_t t65 = -9;

    t65 = ((x309==x310)<=(x311+x312));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x317 = INT64_MAX;
	int16_t x318 = INT16_MAX;
	static int16_t x319 = INT16_MIN;
	int32_t t66 = -3362653;

    t66 = ((x317==x318)<=(x319+x320));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x321 = 1183469LLU;
	static int8_t x322 = INT8_MAX;
	int64_t x323 = -1715974080LL;
	uint16_t x324 = 12U;
	static volatile int32_t t67 = -13;

    t67 = ((x321==x322)<=(x323+x324));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x325 = -1LL;
	int16_t x326 = 0;
	volatile uint32_t x328 = 2535729U;

    t68 = ((x325==x326)<=(x327+x328));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x330 = 27964U;
	uint64_t x331 = 66424895837LLU;
	uint16_t x332 = 15749U;
	volatile int32_t t69 = 29399719;

    t69 = ((x329==x330)<=(x331+x332));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MIN;
	static int8_t x335 = INT8_MAX;
	int8_t x336 = INT8_MIN;
	volatile int32_t t70 = -512;

    t70 = ((x333==x334)<=(x335+x336));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x341 = 3285735920740239LLU;
	uint8_t x342 = 6U;
	uint32_t x343 = 399087442U;
	int32_t t71 = 45951278;

    t71 = ((x341==x342)<=(x343+x344));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x345 = 941549LLU;
	int8_t x346 = INT8_MIN;
	volatile int8_t x348 = 2;
	int32_t t72 = -115732;

    t72 = ((x345==x346)<=(x347+x348));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x349 = 226U;
	int64_t x352 = INT64_MAX;
	int32_t t73 = -87902375;

    t73 = ((x349==x350)<=(x351+x352));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x353 = 14258U;
	int64_t x354 = 4839223798LL;
	volatile uint64_t x355 = 39038584221806484LLU;
	static int32_t x356 = -1296;
	static volatile int32_t t74 = -23388062;

    t74 = ((x353==x354)<=(x355+x356));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x357 = -1;
	uint8_t x358 = UINT8_MAX;
	volatile int8_t x359 = -1;
	volatile int32_t x360 = -1;
	int32_t t75 = 0;

    t75 = ((x357==x358)<=(x359+x360));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x365 = -867729414250LL;
	int16_t x366 = -1;
	volatile uint8_t x367 = 121U;
	uint64_t x368 = 112318LLU;
	volatile int32_t t76 = -412555008;

    t76 = ((x365==x366)<=(x367+x368));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x369 = 12U;
	uint16_t x370 = 571U;
	uint8_t x371 = 6U;
	volatile int16_t x372 = INT16_MIN;
	static volatile int32_t t77 = 94454;

    t77 = ((x369==x370)<=(x371+x372));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MAX;

    t78 = ((x373==x374)<=(x375+x376));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x377 = 85979024199LLU;
	volatile int16_t x379 = 6;
	int64_t x380 = INT64_MIN;
	volatile int32_t t79 = -4;

    t79 = ((x377==x378)<=(x379+x380));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MIN;
	uint8_t x384 = 81U;
	int32_t t80 = 115;

    t80 = ((x381==x382)<=(x383+x384));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x386 = -1;
	volatile int32_t x387 = 4862617;
	static uint16_t x388 = 7U;
	int32_t t81 = 365;

    t81 = ((x385==x386)<=(x387+x388));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x389 = 3U;
	static uint32_t x390 = UINT32_MAX;
	int64_t x392 = 43080LL;
	volatile int32_t t82 = 112;

    t82 = ((x389==x390)<=(x391+x392));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x393 = 117U;
	int32_t x394 = 51497;
	int16_t x395 = -3792;
	int8_t x396 = 3;
	volatile int32_t t83 = -4;

    t83 = ((x393==x394)<=(x395+x396));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x398 = -1;
	volatile int32_t x399 = 1;
	int32_t t84 = 15623068;

    t84 = ((x397==x398)<=(x399+x400));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x405 = 770U;
	int16_t x406 = INT16_MAX;
	volatile int32_t x407 = -1;
	int64_t x408 = -494487508LL;
	static int32_t t85 = -63007671;

    t85 = ((x405==x406)<=(x407+x408));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x413 = UINT8_MAX;
	int32_t x414 = 132172393;
	volatile uint64_t x415 = 9381375149LLU;
	uint8_t x416 = 55U;

    t86 = ((x413==x414)<=(x415+x416));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t t87 = -3;

    t87 = ((x417==x418)<=(x419+x420));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x421 = 7424839LLU;
	uint64_t x422 = 1341702982825LLU;
	uint8_t x424 = 7U;
	int32_t t88 = 165076;

    t88 = ((x421==x422)<=(x423+x424));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x425 = 146U;
	int32_t x426 = INT32_MIN;
	int32_t x427 = 203053;
	int8_t x428 = INT8_MIN;
	int32_t t89 = -231;

    t89 = ((x425==x426)<=(x427+x428));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x429 = INT64_MIN;
	volatile int64_t x430 = INT64_MIN;
	volatile int16_t x431 = -1;
	int32_t x432 = 776362336;
	int32_t t90 = -207191767;

    t90 = ((x429==x430)<=(x431+x432));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x433 = 97789740;
	uint8_t x434 = 1U;
	int8_t x436 = INT8_MIN;

    t91 = ((x433==x434)<=(x435+x436));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x441 = INT32_MAX;
	volatile int8_t x442 = 0;
	int32_t t92 = -49;

    t92 = ((x441==x442)<=(x443+x444));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x449 = UINT16_MAX;
	int32_t x450 = INT32_MIN;
	uint8_t x451 = UINT8_MAX;
	volatile int32_t t93 = -1181;

    t93 = ((x449==x450)<=(x451+x452));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x453 = UINT16_MAX;
	static uint16_t x454 = 407U;
	int16_t x455 = INT16_MAX;
	uint64_t x456 = 11197780293LLU;
	static int32_t t94 = -1331548;

    t94 = ((x453==x454)<=(x455+x456));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x457 = 57070359LLU;
	volatile uint8_t x458 = 1U;
	uint16_t x459 = 2U;
	volatile int16_t x460 = -3445;
	int32_t t95 = 138;

    t95 = ((x457==x458)<=(x459+x460));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x462 = -1LL;
	uint64_t x464 = 5486107995443762653LLU;
	volatile int32_t t96 = -226078981;

    t96 = ((x461==x462)<=(x463+x464));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x465 = 222616727U;
	volatile uint32_t x466 = 29870951U;
	int8_t x468 = 1;
	static int32_t t97 = -31426;

    t97 = ((x465==x466)<=(x467+x468));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x477 = UINT64_MAX;
	int16_t x478 = -1;
	int32_t x479 = 60115;
	uint8_t x480 = 2U;
	volatile int32_t t98 = -1604015;

    t98 = ((x477==x478)<=(x479+x480));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x481 = UINT32_MAX;
	volatile int32_t x482 = INT32_MAX;
	int32_t x484 = INT32_MIN;
	int32_t t99 = 23;

    t99 = ((x481==x482)<=(x483+x484));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x485 = -1;
	uint64_t x486 = 2203327312656281205LLU;
	uint32_t x487 = 245U;
	volatile int16_t x488 = INT16_MAX;

    t100 = ((x485==x486)<=(x487+x488));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x490 = INT64_MIN;
	static int64_t x491 = INT64_MIN;
	volatile uint16_t x492 = UINT16_MAX;
	int32_t t101 = 324689742;

    t101 = ((x489==x490)<=(x491+x492));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x493 = -1LL;
	int64_t x494 = INT64_MAX;
	volatile int16_t x496 = -1;
	static volatile int32_t t102 = -47049584;

    t102 = ((x493==x494)<=(x495+x496));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x497 = INT64_MIN;
	int64_t x498 = INT64_MIN;
	int64_t x499 = INT64_MIN;
	volatile uint64_t x500 = UINT64_MAX;
	static volatile int32_t t103 = 68537;

    t103 = ((x497==x498)<=(x499+x500));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x501 = -46;
	static int64_t x502 = INT64_MAX;
	volatile uint64_t x504 = UINT64_MAX;
	volatile int32_t t104 = -23;

    t104 = ((x501==x502)<=(x503+x504));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x509 = UINT32_MAX;
	int8_t x510 = INT8_MIN;
	int8_t x511 = INT8_MAX;
	static volatile int8_t x512 = INT8_MAX;

    t105 = ((x509==x510)<=(x511+x512));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x514 = 262;
	int8_t x515 = INT8_MAX;
	int16_t x516 = INT16_MIN;
	volatile int32_t t106 = 334391;

    t106 = ((x513==x514)<=(x515+x516));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x517 = 226U;
	int32_t x518 = 609057;
	volatile int32_t x519 = -1;
	int16_t x520 = 0;
	int32_t t107 = -675507;

    t107 = ((x517==x518)<=(x519+x520));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x521 = -1LL;
	static int64_t x522 = INT64_MAX;
	int64_t x523 = INT64_MIN;
	volatile int16_t x524 = INT16_MAX;
	volatile int32_t t108 = 0;

    t108 = ((x521==x522)<=(x523+x524));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x525 = INT8_MAX;
	uint32_t x526 = 1645629553U;
	uint16_t x528 = 50U;

    t109 = ((x525==x526)<=(x527+x528));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x530 = INT64_MIN;
	int64_t x531 = 37690109501LL;
	uint32_t x532 = 1976192U;
	static volatile int32_t t110 = 1019585;

    t110 = ((x529==x530)<=(x531+x532));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x533 = 161582181LL;
	uint8_t x534 = UINT8_MAX;
	int16_t x536 = 1361;
	volatile int32_t t111 = -787547420;

    t111 = ((x533==x534)<=(x535+x536));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x538 = 4U;
	int64_t x540 = 175235440425704292LL;
	static int32_t t112 = -1;

    t112 = ((x537==x538)<=(x539+x540));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x541 = UINT8_MAX;
	uint16_t x543 = UINT16_MAX;
	uint16_t x544 = 11970U;

    t113 = ((x541==x542)<=(x543+x544));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x545 = 9;
	static volatile uint16_t x546 = 28439U;
	volatile int32_t t114 = 2;

    t114 = ((x545==x546)<=(x547+x548));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x551 = INT32_MIN;
	uint32_t x552 = 1U;
	int32_t t115 = 1;

    t115 = ((x549==x550)<=(x551+x552));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x553 = -1;
	int32_t x554 = INT32_MIN;
	volatile int8_t x556 = 10;

    t116 = ((x553==x554)<=(x555+x556));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x557 = UINT32_MAX;
	uint32_t x558 = UINT32_MAX;
	int16_t x559 = INT16_MIN;
	static uint16_t x560 = 1656U;

    t117 = ((x557==x558)<=(x559+x560));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x561 = -1489444;
	static int8_t x562 = INT8_MAX;
	uint64_t x564 = 881225LLU;
	volatile int32_t t118 = 0;

    t118 = ((x561==x562)<=(x563+x564));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x566 = INT8_MAX;
	uint32_t x567 = 3008U;
	int16_t x568 = INT16_MAX;
	volatile int32_t t119 = -2104;

    t119 = ((x565==x566)<=(x567+x568));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x569 = -27330363;
	int8_t x570 = INT8_MAX;
	static int64_t x571 = 17437897251LL;
	uint64_t x572 = 1049833LLU;
	volatile int32_t t120 = -17802715;

    t120 = ((x569==x570)<=(x571+x572));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x573 = 218177LLU;
	int8_t x574 = INT8_MAX;
	int16_t x575 = INT16_MIN;
	int8_t x576 = INT8_MIN;
	volatile int32_t t121 = 15560;

    t121 = ((x573==x574)<=(x575+x576));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x577 = INT16_MIN;
	static int32_t x578 = 16718055;
	int32_t x579 = INT32_MAX;
	int8_t x580 = INT8_MIN;
	volatile int32_t t122 = -33610;

    t122 = ((x577==x578)<=(x579+x580));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x582 = UINT8_MAX;
	volatile int64_t x583 = -1LL;
	int8_t x584 = -1;
	static int32_t t123 = -23844437;

    t123 = ((x581==x582)<=(x583+x584));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x585 = INT16_MAX;
	uint8_t x586 = 1U;
	int8_t x587 = INT8_MAX;
	static int16_t x588 = -4629;

    t124 = ((x585==x586)<=(x587+x588));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x589 = 12725U;
	static int32_t x590 = -1;
	int32_t t125 = 3613;

    t125 = ((x589==x590)<=(x591+x592));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x594 = -1;
	volatile int16_t x595 = INT16_MAX;
	uint8_t x596 = 33U;
	int32_t t126 = 11755;

    t126 = ((x593==x594)<=(x595+x596));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x601 = 436169;
	uint8_t x602 = 1U;
	int8_t x603 = INT8_MIN;
	int16_t x604 = -1066;

    t127 = ((x601==x602)<=(x603+x604));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x605 = -1;
	static uint8_t x606 = 66U;
	uint8_t x607 = 20U;
	volatile uint64_t x608 = 16414172LLU;
	int32_t t128 = 0;

    t128 = ((x605==x606)<=(x607+x608));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x609 = 204U;
	uint16_t x610 = 1U;
	static int32_t x612 = -1;

    t129 = ((x609==x610)<=(x611+x612));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x613 = -1LL;
	int64_t x614 = -198LL;
	int64_t x615 = INT64_MAX;
	static int8_t x616 = -1;
	int32_t t130 = 1637119;

    t130 = ((x613==x614)<=(x615+x616));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x617 = UINT16_MAX;
	static uint8_t x618 = UINT8_MAX;
	uint16_t x619 = UINT16_MAX;
	uint16_t x620 = UINT16_MAX;
	int32_t t131 = 0;

    t131 = ((x617==x618)<=(x619+x620));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x621 = UINT32_MAX;
	uint8_t x622 = 4U;
	uint8_t x623 = 5U;
	static uint16_t x624 = UINT16_MAX;

    t132 = ((x621==x622)<=(x623+x624));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x625 = INT64_MIN;
	static uint8_t x626 = 2U;
	uint64_t x627 = UINT64_MAX;
	int32_t x628 = -1;
	volatile int32_t t133 = 0;

    t133 = ((x625==x626)<=(x627+x628));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x629 = INT8_MIN;
	int8_t x630 = INT8_MAX;
	static int64_t x631 = 1LL;
	volatile int32_t x632 = INT32_MIN;
	int32_t t134 = -55722;

    t134 = ((x629==x630)<=(x631+x632));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x633 = INT32_MIN;
	volatile int64_t x634 = -374817691LL;
	static int32_t x635 = 43483;
	static int32_t x636 = INT32_MIN;
	int32_t t135 = -6341;

    t135 = ((x633==x634)<=(x635+x636));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x637 = 43U;
	static int8_t x638 = 62;
	volatile uint16_t x639 = 29U;
	int8_t x640 = INT8_MIN;
	volatile int32_t t136 = 25;

    t136 = ((x637==x638)<=(x639+x640));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x641 = 19851U;
	static int64_t x642 = INT64_MIN;
	int16_t x643 = 1450;
	uint16_t x644 = UINT16_MAX;

    t137 = ((x641==x642)<=(x643+x644));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x649 = -1LL;
	int32_t x651 = INT32_MIN;
	volatile int32_t t138 = 72421264;

    t138 = ((x649==x650)<=(x651+x652));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x653 = INT64_MAX;
	uint64_t x654 = 764829034761294LLU;
	int16_t x655 = INT16_MIN;
	static int64_t x656 = -1LL;
	volatile int32_t t139 = -127469062;

    t139 = ((x653==x654)<=(x655+x656));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x657 = 15685093;
	volatile int16_t x659 = INT16_MIN;
	volatile int16_t x660 = INT16_MIN;
	int32_t t140 = -13817188;

    t140 = ((x657==x658)<=(x659+x660));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x661 = -1;
	int64_t x662 = INT64_MAX;
	uint16_t x663 = 1U;
	int64_t x664 = -1LL;
	volatile int32_t t141 = 363422538;

    t141 = ((x661==x662)<=(x663+x664));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x665 = 181;
	int64_t x666 = 1LL;
	static volatile int8_t x667 = INT8_MIN;
	static int32_t x668 = -1;
	int32_t t142 = 6;

    t142 = ((x665==x666)<=(x667+x668));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x669 = 2889LL;
	static uint16_t x670 = UINT16_MAX;
	int32_t x671 = INT32_MIN;
	uint32_t x672 = 22501267U;
	static volatile int32_t t143 = 14093078;

    t143 = ((x669==x670)<=(x671+x672));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x673 = INT64_MIN;
	static volatile uint8_t x674 = 14U;
	volatile int8_t x675 = -62;
	static int16_t x676 = 1;
	volatile int32_t t144 = -118951;

    t144 = ((x673==x674)<=(x675+x676));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x678 = INT8_MIN;
	int8_t x679 = INT8_MIN;
	int32_t x680 = -2111978;
	int32_t t145 = 51905000;

    t145 = ((x677==x678)<=(x679+x680));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x681 = UINT64_MAX;
	uint16_t x683 = 1141U;
	static int16_t x684 = INT16_MIN;
	volatile int32_t t146 = 0;

    t146 = ((x681==x682)<=(x683+x684));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x685 = 2875U;
	int8_t x686 = INT8_MAX;
	uint32_t x687 = 395800U;
	int64_t x688 = -1522033703000LL;
	int32_t t147 = 17;

    t147 = ((x685==x686)<=(x687+x688));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x689 = INT64_MIN;
	static volatile uint16_t x690 = UINT16_MAX;
	int64_t x691 = INT64_MIN;
	uint64_t x692 = UINT64_MAX;
	volatile int32_t t148 = -6599;

    t148 = ((x689==x690)<=(x691+x692));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x693 = INT32_MIN;
	volatile uint16_t x694 = 29U;
	volatile uint32_t x695 = UINT32_MAX;
	static volatile uint64_t x696 = UINT64_MAX;

    t149 = ((x693==x694)<=(x695+x696));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x701 = 6989;
	volatile uint8_t x702 = UINT8_MAX;
	int16_t x703 = -561;
	static uint64_t x704 = 441314LLU;
	volatile int32_t t150 = 1;

    t150 = ((x701==x702)<=(x703+x704));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x705 = 39134664U;
	int32_t x706 = INT32_MIN;
	static uint16_t x707 = UINT16_MAX;
	int32_t x708 = 105745903;
	static volatile int32_t t151 = -483;

    t151 = ((x705==x706)<=(x707+x708));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x709 = INT8_MAX;
	volatile uint32_t x710 = 1U;
	int8_t x711 = -1;
	uint32_t x712 = UINT32_MAX;
	volatile int32_t t152 = 24474;

    t152 = ((x709==x710)<=(x711+x712));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x715 = INT16_MIN;
	int64_t x716 = 177406LL;
	volatile int32_t t153 = 3;

    t153 = ((x713==x714)<=(x715+x716));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x717 = 575005666862LLU;
	static uint8_t x718 = 9U;
	int32_t x719 = -1;
	volatile uint16_t x720 = UINT16_MAX;
	volatile int32_t t154 = 7861;

    t154 = ((x717==x718)<=(x719+x720));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x721 = UINT16_MAX;
	static int16_t x722 = INT16_MIN;
	int32_t x723 = 642836;

    t155 = ((x721==x722)<=(x723+x724));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x725 = -1LL;
	int16_t x726 = INT16_MIN;
	int64_t x728 = 583110679612242LL;
	int32_t t156 = -25;

    t156 = ((x725==x726)<=(x727+x728));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x729 = INT8_MIN;
	int16_t x730 = -1;
	uint8_t x731 = 61U;
	static uint64_t x732 = 327793173971799LLU;
	volatile int32_t t157 = 12756;

    t157 = ((x729==x730)<=(x731+x732));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x733 = INT16_MIN;
	int8_t x734 = 10;
	uint64_t x735 = 1LLU;
	int16_t x736 = -1;
	volatile int32_t t158 = 64658;

    t158 = ((x733==x734)<=(x735+x736));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint64_t x737 = 152357625204303LLU;
	int32_t x738 = -1;
	uint8_t x739 = 4U;
	static volatile uint8_t x740 = 15U;

    t159 = ((x737==x738)<=(x739+x740));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	int16_t x742 = INT16_MAX;
	int32_t x743 = 75272076;
	int32_t t160 = 43;

    t160 = ((x741==x742)<=(x743+x744));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x745 = INT64_MAX;
	int8_t x747 = INT8_MAX;
	volatile int32_t x748 = INT32_MIN;
	static volatile int32_t t161 = 4;

    t161 = ((x745==x746)<=(x747+x748));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x753 = INT32_MIN;
	int16_t x754 = 13;
	uint32_t x755 = 13147U;
	uint16_t x756 = 1U;

    t162 = ((x753==x754)<=(x755+x756));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x757 = 1;
	static int8_t x758 = -1;
	static uint32_t x759 = 0U;
	static volatile uint16_t x760 = 12033U;
	int32_t t163 = 41820;

    t163 = ((x757==x758)<=(x759+x760));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x761 = INT16_MIN;
	int64_t x762 = INT64_MIN;
	uint8_t x763 = 2U;
	int64_t x764 = INT64_MIN;
	int32_t t164 = -46156186;

    t164 = ((x761==x762)<=(x763+x764));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x766 = 2931550U;
	int32_t x767 = -1;

    t165 = ((x765==x766)<=(x767+x768));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x769 = 587U;
	static int64_t x771 = INT64_MAX;
	volatile int32_t t166 = 324209;

    t166 = ((x769==x770)<=(x771+x772));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x773 = -1;
	uint32_t x774 = UINT32_MAX;
	uint32_t x775 = 165365U;
	int64_t x776 = INT64_MIN;
	volatile int32_t t167 = -173920;

    t167 = ((x773==x774)<=(x775+x776));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x779 = UINT32_MAX;
	int32_t x780 = -1;
	volatile int32_t t168 = 12;

    t168 = ((x777==x778)<=(x779+x780));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x781 = 2078967624U;
	int16_t x782 = 464;
	int8_t x783 = INT8_MAX;
	int16_t x784 = INT16_MIN;

    t169 = ((x781==x782)<=(x783+x784));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x787 = 8144880LLU;
	static uint32_t x788 = 26674710U;

    t170 = ((x785==x786)<=(x787+x788));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x789 = 51U;
	int16_t x790 = 9881;
	int8_t x791 = 3;
	static uint16_t x792 = 228U;
	int32_t t171 = -8158625;

    t171 = ((x789==x790)<=(x791+x792));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x793 = INT8_MIN;
	int8_t x794 = INT8_MAX;
	static uint32_t x796 = UINT32_MAX;
	volatile int32_t t172 = 60;

    t172 = ((x793==x794)<=(x795+x796));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x797 = -1LL;
	volatile int16_t x798 = INT16_MIN;
	int32_t x799 = -376883411;
	int32_t t173 = -183802842;

    t173 = ((x797==x798)<=(x799+x800));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x801 = -1LL;
	int16_t x802 = 698;
	volatile int8_t x803 = INT8_MIN;
	uint64_t x804 = 100296LLU;
	volatile int32_t t174 = -602;

    t174 = ((x801==x802)<=(x803+x804));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x805 = INT64_MIN;
	int32_t x806 = INT32_MAX;
	uint32_t x808 = UINT32_MAX;

    t175 = ((x805==x806)<=(x807+x808));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x813 = 1007;
	static int32_t x814 = 1725037;
	volatile int32_t x815 = -1;
	int64_t x816 = -1LL;
	int32_t t176 = -120190;

    t176 = ((x813==x814)<=(x815+x816));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x821 = UINT16_MAX;
	int8_t x822 = -1;
	static int64_t x823 = INT64_MIN;
	uint8_t x824 = UINT8_MAX;
	int32_t t177 = 741562;

    t177 = ((x821==x822)<=(x823+x824));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint64_t x825 = UINT64_MAX;
	int32_t x826 = INT32_MIN;
	int16_t x827 = 0;
	volatile uint64_t x828 = UINT64_MAX;

    t178 = ((x825==x826)<=(x827+x828));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x829 = INT64_MIN;
	int32_t x830 = -1;
	int16_t x831 = INT16_MIN;
	int16_t x832 = INT16_MAX;
	int32_t t179 = 30;

    t179 = ((x829==x830)<=(x831+x832));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x833 = -1;
	int64_t x834 = INT64_MAX;
	static int32_t x835 = 2;
	static int64_t x836 = INT64_MIN;
	int32_t t180 = 34;

    t180 = ((x833==x834)<=(x835+x836));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x837 = UINT32_MAX;
	int8_t x838 = -1;
	int64_t x839 = -1LL;
	int8_t x840 = -1;
	static int32_t t181 = 0;

    t181 = ((x837==x838)<=(x839+x840));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x841 = UINT32_MAX;
	static uint16_t x844 = 0U;
	static int32_t t182 = -48;

    t182 = ((x841==x842)<=(x843+x844));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x845 = UINT64_MAX;
	uint16_t x846 = 22561U;
	volatile uint64_t x848 = UINT64_MAX;
	static volatile int32_t t183 = -10;

    t183 = ((x845==x846)<=(x847+x848));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x850 = UINT64_MAX;
	int8_t x851 = INT8_MIN;
	int16_t x852 = -1;
	static int32_t t184 = 32800599;

    t184 = ((x849==x850)<=(x851+x852));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x854 = 0U;
	uint64_t x856 = 10609779LLU;
	volatile int32_t t185 = -1068;

    t185 = ((x853==x854)<=(x855+x856));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x857 = -4;
	volatile int16_t x858 = INT16_MAX;
	int16_t x859 = -3068;
	volatile int64_t x860 = INT64_MAX;

    t186 = ((x857==x858)<=(x859+x860));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x861 = UINT64_MAX;
	int8_t x862 = -1;
	int32_t x864 = INT32_MIN;

    t187 = ((x861==x862)<=(x863+x864));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x865 = INT16_MIN;
	int32_t x868 = -1;
	volatile int32_t t188 = -47;

    t188 = ((x865==x866)<=(x867+x868));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x869 = 1U;
	static int32_t x871 = -907;
	uint8_t x872 = 0U;
	int32_t t189 = -6778157;

    t189 = ((x869==x870)<=(x871+x872));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x873 = 21LL;
	int64_t x874 = 169255931014LL;
	volatile int64_t x875 = INT64_MAX;
	uint64_t x876 = 2LLU;

    t190 = ((x873==x874)<=(x875+x876));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x877 = INT8_MIN;
	int64_t x878 = 38LL;
	static int32_t x879 = -1;
	uint8_t x880 = 2U;

    t191 = ((x877==x878)<=(x879+x880));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x882 = -31;
	volatile uint32_t x884 = 356415307U;
	int32_t t192 = -2;

    t192 = ((x881==x882)<=(x883+x884));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x885 = 545445763890470LLU;
	volatile uint8_t x888 = 0U;
	int32_t t193 = 1090;

    t193 = ((x885==x886)<=(x887+x888));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x889 = -1;
	static volatile uint8_t x890 = 1U;
	uint32_t x891 = 52U;
	int8_t x892 = 15;
	volatile int32_t t194 = 6;

    t194 = ((x889==x890)<=(x891+x892));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x893 = INT8_MIN;
	static volatile int16_t x894 = -36;
	int32_t x895 = -127;
	int16_t x896 = INT16_MIN;
	int32_t t195 = 54564193;

    t195 = ((x893==x894)<=(x895+x896));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x897 = UINT64_MAX;
	static uint8_t x899 = 23U;
	volatile int32_t t196 = -1;

    t196 = ((x897==x898)<=(x899+x900));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x901 = -1;
	int32_t x903 = 11877;
	static uint16_t x904 = UINT16_MAX;

    t197 = ((x901==x902)<=(x903+x904));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x905 = 1;
	volatile uint16_t x906 = 14U;
	volatile int32_t x908 = -569143;
	int32_t t198 = -7814;

    t198 = ((x905==x906)<=(x907+x908));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x909 = 0U;
	int16_t x910 = -1;
	int64_t x911 = 1068662687020LL;
	uint64_t x912 = UINT64_MAX;
	volatile int32_t t199 = -102294;

    t199 = ((x909==x910)<=(x911+x912));

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

