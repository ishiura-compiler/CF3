
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

uint32_t x8 = UINT32_MAX;
uint32_t t2 = 106U;
int16_t x20 = -1;
uint64_t x21 = UINT64_MAX;
static uint64_t x25 = UINT64_MAX;
static int64_t x30 = -1LL;
uint32_t x31 = UINT32_MAX;
volatile uint32_t x36 = UINT32_MAX;
uint16_t x39 = 1690U;
int8_t x43 = -1;
volatile int8_t x49 = -1;
uint8_t x55 = 7U;
static uint16_t x70 = UINT16_MAX;
static int32_t t14 = 53026;
static volatile uint64_t t15 = 2LLU;
static uint8_t x92 = 4U;
uint16_t x99 = 4477U;
static volatile int8_t x100 = INT8_MIN;
uint16_t x103 = 0U;
int32_t t20 = -15780;
volatile int16_t x105 = 18;
int32_t x107 = -1;
static int16_t x109 = -9;
int32_t x119 = 1830703;
static int16_t x122 = -1;
int64_t x124 = INT64_MIN;
static volatile int32_t t26 = 44;
int16_t x135 = 1;
static volatile int32_t x141 = INT32_MIN;
int32_t x143 = -1;
static int32_t x148 = -1;
volatile uint32_t x149 = 70176029U;
int64_t x150 = -202015LL;
int64_t x152 = INT64_MAX;
uint16_t x153 = UINT16_MAX;
int8_t x154 = INT8_MIN;
static volatile uint64_t t33 = 103037519933636LLU;
uint8_t x167 = UINT8_MAX;
volatile int8_t x173 = 1;
int64_t t37 = -2459LL;
int16_t x190 = 2;
uint16_t x191 = 236U;
static volatile int8_t x201 = INT8_MIN;
int32_t t41 = 180;
volatile int8_t x218 = 1;
uint16_t x219 = UINT16_MAX;
uint64_t x220 = 1100071LLU;
int32_t t44 = -13323;
uint16_t x222 = 36U;
int16_t x223 = INT16_MIN;
int64_t x224 = INT64_MIN;
volatile int8_t x249 = INT8_MIN;
int32_t t52 = 120;
uint16_t x255 = 61U;
uint16_t x260 = 14U;
static uint16_t x261 = UINT16_MAX;
static uint32_t x262 = 90910822U;
static volatile int16_t x263 = 6436;
volatile int32_t t56 = 319173761;
static int16_t x272 = -109;
static uint64_t x281 = 60887LLU;
int32_t x282 = INT32_MIN;
int64_t x286 = 3399LL;
static int16_t x289 = -1;
volatile uint16_t x290 = 2503U;
uint64_t x292 = UINT64_MAX;
volatile int32_t t60 = -90528951;
int8_t x295 = -1;
int64_t t61 = -263297575143218LL;
uint32_t t62 = 1110U;
static volatile int16_t x303 = INT16_MAX;
int64_t x304 = INT64_MIN;
int32_t t63 = -35253716;
int64_t x307 = 2563847228246391LL;
int16_t x310 = -5032;
int64_t x311 = INT64_MIN;
int64_t x326 = -1LL;
uint8_t x328 = 1U;
int64_t x332 = -908007605LL;
static uint32_t x349 = 27797U;
int16_t x355 = INT16_MIN;
uint8_t x357 = 6U;
volatile int8_t x358 = INT8_MIN;
int16_t x361 = -1;
volatile int32_t t75 = -1776;
uint64_t x367 = 6316203375083269LLU;
static uint16_t x370 = UINT16_MAX;
int8_t x375 = INT8_MAX;
volatile int8_t x378 = 2;
int32_t x379 = INT32_MAX;
int64_t t80 = -101935809304494LL;
uint8_t x388 = UINT8_MAX;
int64_t x391 = -4156398LL;
uint8_t x394 = 47U;
uint64_t x396 = UINT64_MAX;
int16_t x399 = INT16_MIN;
static volatile int64_t t85 = 86780177LL;
uint64_t x405 = 139289955760806135LLU;
static int8_t x414 = INT8_MIN;
static int16_t x416 = -1;
static uint16_t x417 = 184U;
static int8_t x420 = -33;
volatile int64_t x427 = -231378321955906170LL;
int16_t x430 = 6781;
static uint8_t x431 = 6U;
static int32_t t91 = -226330821;
int32_t x434 = -1;
static int64_t x438 = 1730LL;
int32_t x448 = INT32_MIN;
static uint8_t x458 = 1U;
int32_t x468 = -1;
volatile int32_t t100 = -2095065;
int8_t x470 = -1;
uint32_t x472 = 756413756U;
uint32_t x476 = 1068617U;
uint16_t x477 = UINT16_MAX;
uint16_t x478 = 63U;
uint8_t x491 = UINT8_MAX;
int32_t x500 = INT32_MIN;
volatile int32_t t107 = -13;
volatile int64_t x501 = -400108517643LL;
int64_t x507 = INT64_MAX;
static uint8_t x510 = 2U;
int32_t t110 = -7553201;
static int16_t x520 = -1;
int64_t x540 = INT64_MAX;
int32_t t116 = 1;
int32_t x548 = INT32_MIN;
volatile int64_t t118 = 43LL;
uint16_t x558 = 7U;
int64_t x562 = 250622LL;
uint16_t x578 = UINT16_MAX;
static int8_t x593 = 0;
static int64_t x598 = INT64_MIN;
volatile int16_t x607 = -279;
int32_t x614 = 760;
uint32_t x615 = UINT32_MAX;
uint8_t x617 = 1U;
uint32_t x620 = 3U;
volatile uint64_t t132 = 43LLU;
int16_t x623 = INT16_MAX;
static int8_t x631 = INT8_MIN;
int16_t x638 = INT16_MIN;
static volatile uint32_t t138 = 5008840U;
static volatile int16_t x669 = INT16_MIN;
static int32_t x675 = INT32_MAX;
int16_t x676 = -1;
volatile uint64_t x687 = UINT64_MAX;
int32_t x688 = 60664;
static volatile int64_t t146 = 361763LL;
int16_t x691 = INT16_MIN;
static volatile uint32_t x692 = 382773775U;
int16_t x696 = -7;
int32_t t150 = 215584168;
int32_t t151 = -15;
volatile uint32_t x710 = 1041U;
int32_t t153 = -104825;
volatile int16_t x718 = INT16_MIN;
int16_t x719 = INT16_MIN;
int64_t x724 = 500969003572349LL;
int32_t t155 = 232906;
volatile uint64_t x726 = 102LLU;
int32_t x728 = INT32_MIN;
uint16_t x729 = UINT16_MAX;
int32_t x734 = 0;
int32_t x735 = -81512;
static int32_t t158 = 1989761;
int32_t x738 = INT32_MIN;
static uint8_t x746 = 25U;
int16_t x751 = -7495;
volatile int32_t t161 = 0;
int32_t x757 = INT32_MAX;
int8_t x759 = -1;
int64_t t164 = -171935235506LL;
int8_t x771 = INT8_MAX;
volatile int64_t t165 = 500786128192202957LL;
uint16_t x809 = UINT16_MAX;
static int16_t x816 = INT16_MIN;
int16_t x820 = -7;
static uint64_t x825 = 2499992LLU;
static uint64_t x827 = 294655841468LLU;
int16_t x838 = INT16_MIN;
static volatile uint64_t x841 = 935LLU;
int32_t x849 = INT32_MIN;
int16_t x850 = INT16_MIN;
volatile int16_t x852 = -1;
volatile int32_t t180 = 53787;
int16_t x860 = 3;
int16_t x863 = 10;
volatile int64_t t182 = 4594762781263942483LL;
int64_t x865 = -19381600723809LL;
uint16_t x869 = 1473U;
volatile uint8_t x877 = 67U;
uint32_t t186 = 1U;
int8_t x894 = INT8_MIN;
int16_t x897 = -799;
volatile uint8_t x899 = 110U;
int64_t x900 = INT64_MIN;
static volatile int32_t t190 = 7963;
volatile int16_t x916 = -9;
int64_t t193 = 12153151LL;
int8_t x924 = INT8_MAX;
int32_t t195 = 111778065;
int16_t x927 = 5768;
volatile int64_t x928 = -5550LL;
static uint8_t x930 = 2U;
int32_t x933 = INT32_MAX;
static int32_t x937 = -1;


void f0(void) {
    	int64_t x5 = -1LL;
	uint16_t x6 = 38U;
	static uint32_t x7 = UINT32_MAX;
	volatile int64_t t0 = -1088042352898LL;

    t0 = ((x5-x6)&(x7<=x8));

    if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x9 = UINT8_MAX;
	volatile int16_t x10 = INT16_MIN;
	volatile int8_t x11 = INT8_MIN;
	volatile int8_t x12 = INT8_MIN;
	int32_t t1 = 182;

    t1 = ((x9-x10)&(x11<=x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x13 = UINT16_MAX;
	uint32_t x14 = UINT32_MAX;
	static uint64_t x15 = UINT64_MAX;
	uint16_t x16 = 1676U;

    t2 = ((x13-x14)&(x15<=x16));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint64_t x17 = 136173348LLU;
	int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MAX;
	uint64_t t3 = 2774150214353024504LLU;

    t3 = ((x17-x18)&(x19<=x20));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x22 = UINT16_MAX;
	static int16_t x23 = INT16_MAX;
	int16_t x24 = INT16_MIN;
	volatile uint64_t t4 = 12572425988647378LLU;

    t4 = ((x21-x22)&(x23<=x24));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x26 = 14;
	int16_t x27 = 0;
	int16_t x28 = INT16_MAX;
	uint64_t t5 = 7LLU;

    t5 = ((x25-x26)&(x27<=x28));

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x29 = -1;
	int32_t x32 = INT32_MIN;
	volatile int64_t t6 = 15312004LL;

    t6 = ((x29-x30)&(x31<=x32));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MAX;
	static int8_t x34 = -1;
	int32_t x35 = 3716581;
	int32_t t7 = 0;

    t7 = ((x33-x34)&(x35<=x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -1;
	static int64_t x38 = INT64_MAX;
	volatile int16_t x40 = -1;
	int64_t t8 = -1132LL;

    t8 = ((x37-x38)&(x39<=x40));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x41 = 4U;
	int16_t x42 = -1;
	uint8_t x44 = 92U;
	int32_t t9 = 46095;

    t9 = ((x41-x42)&(x43<=x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x50 = UINT8_MAX;
	static uint16_t x51 = 31875U;
	int16_t x52 = 841;
	static volatile int32_t t10 = -21268268;

    t10 = ((x49-x50)&(x51<=x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = INT8_MIN;
	uint32_t x54 = UINT32_MAX;
	uint64_t x56 = UINT64_MAX;
	volatile uint32_t t11 = 10859U;

    t11 = ((x53-x54)&(x55<=x56));

    if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x61 = INT8_MIN;
	volatile int8_t x62 = INT8_MIN;
	volatile uint8_t x63 = 33U;
	static uint32_t x64 = UINT32_MAX;
	volatile int32_t t12 = -1;

    t12 = ((x61-x62)&(x63<=x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x65 = 7U;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = UINT64_MAX;
	static int16_t x68 = -416;
	int32_t t13 = 758;

    t13 = ((x65-x66)&(x67<=x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x69 = INT8_MAX;
	int32_t x71 = -27897;
	static uint64_t x72 = UINT64_MAX;

    t14 = ((x69-x70)&(x71<=x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x73 = UINT16_MAX;
	static uint64_t x74 = 55516637579LLU;
	int32_t x75 = -1;
	static volatile uint32_t x76 = UINT32_MAX;

    t15 = ((x73-x74)&(x75<=x76));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = INT32_MIN;
	static int8_t x78 = INT8_MIN;
	volatile int64_t x79 = INT64_MIN;
	int64_t x80 = INT64_MIN;
	volatile int32_t t16 = 0;

    t16 = ((x77-x78)&(x79<=x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x89 = 214;
	int8_t x90 = -11;
	int16_t x91 = 0;
	static volatile int32_t t17 = 1;

    t17 = ((x89-x90)&(x91<=x92));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x93 = INT16_MAX;
	static uint16_t x94 = 2717U;
	volatile uint16_t x95 = 374U;
	int32_t x96 = 1;
	volatile int32_t t18 = 5268;

    t18 = ((x93-x94)&(x95<=x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x97 = INT8_MAX;
	int16_t x98 = INT16_MIN;
	int32_t t19 = 33089;

    t19 = ((x97-x98)&(x99<=x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = -43962;
	uint16_t x102 = 461U;
	uint16_t x104 = UINT16_MAX;

    t20 = ((x101-x102)&(x103<=x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x106 = -1LL;
	static int16_t x108 = INT16_MIN;
	volatile int64_t t21 = -20LL;

    t21 = ((x105-x106)&(x107<=x108));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x110 = INT8_MIN;
	static uint32_t x111 = UINT32_MAX;
	volatile uint32_t x112 = 31071U;
	static volatile int32_t t22 = -38723;

    t22 = ((x109-x110)&(x111<=x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x117 = UINT8_MAX;
	static uint32_t x118 = 0U;
	int64_t x120 = -1LL;
	volatile uint32_t t23 = 1U;

    t23 = ((x117-x118)&(x119<=x120));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x121 = INT64_MIN;
	static int64_t x123 = INT64_MIN;
	volatile int64_t t24 = -7761889476223LL;

    t24 = ((x121-x122)&(x123<=x124));

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x125 = 4U;
	int32_t x126 = 44;
	uint16_t x127 = 2U;
	int16_t x128 = INT16_MAX;
	int32_t t25 = 3612142;

    t25 = ((x125-x126)&(x127<=x128));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x129 = UINT8_MAX;
	int32_t x130 = -1;
	uint8_t x131 = 123U;
	uint64_t x132 = 3581204160239713354LLU;

    t26 = ((x129-x130)&(x131<=x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x133 = INT16_MAX;
	uint32_t x134 = 143618U;
	int8_t x136 = -1;
	volatile uint32_t t27 = 1U;

    t27 = ((x133-x134)&(x135<=x136));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x137 = INT32_MAX;
	uint64_t x138 = 392801874LLU;
	int8_t x139 = INT8_MAX;
	uint16_t x140 = 424U;
	uint64_t t28 = 169656083556446LLU;

    t28 = ((x137-x138)&(x139<=x140));

    if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x142 = 396767819U;
	static int32_t x144 = INT32_MIN;
	uint32_t t29 = 485361803U;

    t29 = ((x141-x142)&(x143<=x144));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x145 = 23;
	int64_t x146 = INT64_MAX;
	uint64_t x147 = 6290LLU;
	volatile int64_t t30 = 803236649461LL;

    t30 = ((x145-x146)&(x147<=x148));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x151 = UINT8_MAX;
	volatile int64_t t31 = -387984213504997992LL;

    t31 = ((x149-x150)&(x151<=x152));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x155 = 2177LL;
	int32_t x156 = INT32_MAX;
	volatile int32_t t32 = -2294279;

    t32 = ((x153-x154)&(x155<=x156));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x157 = 141LLU;
	int16_t x158 = -1;
	volatile int32_t x159 = INT32_MAX;
	static volatile int16_t x160 = INT16_MAX;

    t33 = ((x157-x158)&(x159<=x160));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x165 = INT64_MIN;
	int16_t x166 = INT16_MIN;
	uint32_t x168 = 9367U;
	int64_t t34 = -20525227032LL;

    t34 = ((x165-x166)&(x167<=x168));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x174 = 29U;
	static int8_t x175 = 18;
	int16_t x176 = INT16_MIN;
	volatile int32_t t35 = -71249009;

    t35 = ((x173-x174)&(x175<=x176));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x181 = 6718U;
	int64_t x182 = 7795LL;
	int8_t x183 = INT8_MAX;
	static int64_t x184 = INT64_MAX;
	int64_t t36 = -10782900LL;

    t36 = ((x181-x182)&(x183<=x184));

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MIN;
	uint32_t x187 = 6U;
	int8_t x188 = 2;

    t37 = ((x185-x186)&(x187<=x188));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x189 = UINT16_MAX;
	static int16_t x192 = -1;
	volatile int32_t t38 = -589810;

    t38 = ((x189-x190)&(x191<=x192));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x193 = INT8_MAX;
	int16_t x194 = -1;
	static int64_t x195 = -1LL;
	uint8_t x196 = UINT8_MAX;
	static int32_t t39 = -1025800;

    t39 = ((x193-x194)&(x195<=x196));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x197 = INT8_MAX;
	int16_t x198 = INT16_MIN;
	volatile uint32_t x199 = UINT32_MAX;
	uint8_t x200 = 1U;
	int32_t t40 = 37361913;

    t40 = ((x197-x198)&(x199<=x200));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x202 = INT8_MAX;
	int32_t x203 = INT32_MIN;
	int16_t x204 = INT16_MAX;

    t41 = ((x201-x202)&(x203<=x204));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x205 = 0U;
	int16_t x206 = -1;
	int32_t x207 = 45144;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t42 = 68331;

    t42 = ((x205-x206)&(x207<=x208));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x213 = 0;
	volatile int32_t x214 = 344;
	uint32_t x215 = UINT32_MAX;
	int32_t x216 = -1;
	volatile int32_t t43 = 472336;

    t43 = ((x213-x214)&(x215<=x216));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x217 = 161U;

    t44 = ((x217-x218)&(x219<=x220));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x221 = 7U;
	int32_t t45 = 8487718;

    t45 = ((x221-x222)&(x223<=x224));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x225 = -371053002042LL;
	int8_t x226 = INT8_MIN;
	volatile int64_t x227 = -36820512128591LL;
	volatile int8_t x228 = -1;
	int64_t t46 = -8719744335LL;

    t46 = ((x225-x226)&(x227<=x228));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x229 = 16;
	uint32_t x230 = 4U;
	static int64_t x231 = -1922301LL;
	int32_t x232 = INT32_MAX;
	volatile uint32_t t47 = 1204568U;

    t47 = ((x229-x230)&(x231<=x232));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x233 = 12U;
	int16_t x234 = INT16_MIN;
	int64_t x235 = -21LL;
	static uint8_t x236 = 42U;
	static volatile int32_t t48 = -5;

    t48 = ((x233-x234)&(x235<=x236));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x237 = -1;
	volatile uint32_t x238 = 345U;
	volatile int32_t x239 = INT32_MAX;
	static uint32_t x240 = UINT32_MAX;
	volatile uint32_t t49 = 556779U;

    t49 = ((x237-x238)&(x239<=x240));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x241 = 948U;
	int8_t x242 = INT8_MIN;
	int32_t x243 = INT32_MIN;
	int16_t x244 = -1;
	volatile int32_t t50 = -10;

    t50 = ((x241-x242)&(x243<=x244));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x245 = INT64_MIN;
	static int8_t x246 = -1;
	volatile uint8_t x247 = 8U;
	volatile int16_t x248 = INT16_MAX;
	int64_t t51 = 140545887LL;

    t51 = ((x245-x246)&(x247<=x248));

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x250 = INT16_MAX;
	static volatile uint16_t x251 = 3U;
	volatile uint64_t x252 = 350445542546LLU;

    t52 = ((x249-x250)&(x251<=x252));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x253 = UINT32_MAX;
	uint64_t x254 = UINT64_MAX;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t53 = 155057032LLU;

    t53 = ((x253-x254)&(x255<=x256));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x257 = 42;
	int64_t x258 = -889719360729374048LL;
	uint8_t x259 = 55U;
	volatile int64_t t54 = -23114735LL;

    t54 = ((x257-x258)&(x259<=x260));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x264 = UINT32_MAX;
	volatile uint32_t t55 = 33100910U;

    t55 = ((x261-x262)&(x263<=x264));

    if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x265 = 14U;
	uint16_t x266 = UINT16_MAX;
	volatile uint64_t x267 = UINT64_MAX;
	volatile int32_t x268 = INT32_MIN;

    t56 = ((x265-x266)&(x267<=x268));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x269 = 3873U;
	int16_t x270 = 201;
	int32_t x271 = INT32_MIN;
	int32_t t57 = 3458;

    t57 = ((x269-x270)&(x271<=x272));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x283 = INT64_MAX;
	volatile int64_t x284 = -1LL;
	volatile uint64_t t58 = 11555LLU;

    t58 = ((x281-x282)&(x283<=x284));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x285 = 6338;
	uint32_t x287 = 110646038U;
	uint32_t x288 = 82663959U;
	int64_t t59 = 2384375LL;

    t59 = ((x285-x286)&(x287<=x288));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x291 = INT32_MIN;

    t60 = ((x289-x290)&(x291<=x292));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x293 = -1LL;
	int64_t x294 = 12887LL;
	uint8_t x296 = 25U;

    t61 = ((x293-x294)&(x295<=x296));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x297 = UINT32_MAX;
	static volatile uint16_t x298 = 1147U;
	int32_t x299 = INT32_MIN;
	int64_t x300 = -144LL;

    t62 = ((x297-x298)&(x299<=x300));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x301 = INT8_MIN;
	static int32_t x302 = -1;

    t63 = ((x301-x302)&(x303<=x304));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x305 = UINT32_MAX;
	uint64_t x306 = 10718711087361510LLU;
	static int64_t x308 = -1LL;
	uint64_t t64 = 325967526LLU;

    t64 = ((x305-x306)&(x307<=x308));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x309 = -602248052;
	int8_t x312 = INT8_MAX;
	int32_t t65 = 30207443;

    t65 = ((x309-x310)&(x311<=x312));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x313 = INT32_MIN;
	static volatile int32_t x314 = INT32_MIN;
	int32_t x315 = -1;
	int16_t x316 = INT16_MIN;
	volatile int32_t t66 = -238;

    t66 = ((x313-x314)&(x315<=x316));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x317 = -7;
	int64_t x318 = INT64_MIN;
	static uint16_t x319 = 26U;
	uint8_t x320 = 55U;
	static volatile int64_t t67 = 32620310903125232LL;

    t67 = ((x317-x318)&(x319<=x320));

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x325 = INT16_MIN;
	volatile int32_t x327 = -1;
	static int64_t t68 = -1385002LL;

    t68 = ((x325-x326)&(x327<=x328));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x329 = -59;
	uint8_t x330 = UINT8_MAX;
	static int8_t x331 = INT8_MIN;
	volatile int32_t t69 = 244459190;

    t69 = ((x329-x330)&(x331<=x332));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x333 = 42LLU;
	volatile int64_t x334 = -1LL;
	volatile uint16_t x335 = UINT16_MAX;
	int64_t x336 = INT64_MIN;
	uint64_t t70 = 193734088LLU;

    t70 = ((x333-x334)&(x335<=x336));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint32_t x341 = UINT32_MAX;
	int16_t x342 = -1;
	uint16_t x343 = 37U;
	volatile uint8_t x344 = 0U;
	volatile uint32_t t71 = 29U;

    t71 = ((x341-x342)&(x343<=x344));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x350 = UINT64_MAX;
	static uint32_t x351 = 14881U;
	static int16_t x352 = -10833;
	volatile uint64_t t72 = 56813131LLU;

    t72 = ((x349-x350)&(x351<=x352));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x353 = INT64_MIN;
	int32_t x354 = -1;
	int8_t x356 = -58;
	int64_t t73 = 5872LL;

    t73 = ((x353-x354)&(x355<=x356));

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x359 = 0LL;
	int64_t x360 = -1LL;
	static int32_t t74 = -25371;

    t74 = ((x357-x358)&(x359<=x360));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x362 = -1;
	int16_t x363 = -1;
	int32_t x364 = INT32_MIN;

    t75 = ((x361-x362)&(x363<=x364));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x365 = UINT16_MAX;
	int16_t x366 = INT16_MIN;
	static uint8_t x368 = 0U;
	int32_t t76 = 2797194;

    t76 = ((x365-x366)&(x367<=x368));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x369 = 208666LL;
	volatile uint32_t x371 = 3422U;
	uint64_t x372 = 8775257030685LLU;
	volatile int64_t t77 = -4574110461820LL;

    t77 = ((x369-x370)&(x371<=x372));

    if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x373 = 1U;
	int32_t x374 = INT32_MAX;
	static uint32_t x376 = 947862U;
	static volatile int32_t t78 = 3293569;

    t78 = ((x373-x374)&(x375<=x376));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x377 = -45;
	int8_t x380 = INT8_MIN;
	int32_t t79 = -7985;

    t79 = ((x377-x378)&(x379<=x380));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x381 = -7LL;
	int16_t x382 = -9768;
	volatile int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;

    t80 = ((x381-x382)&(x383<=x384));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x385 = -1;
	volatile int32_t x386 = INT32_MIN;
	static int8_t x387 = -14;
	volatile int32_t t81 = -318;

    t81 = ((x385-x386)&(x387<=x388));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x389 = 11919515LLU;
	uint64_t x390 = 4LLU;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t82 = 817306304932209781LLU;

    t82 = ((x389-x390)&(x391<=x392));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x393 = -1;
	uint64_t x395 = 0LLU;
	static int32_t t83 = -946;

    t83 = ((x393-x394)&(x395<=x396));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x397 = -1;
	int16_t x398 = INT16_MIN;
	int64_t x400 = -1LL;
	volatile int32_t t84 = 136892;

    t84 = ((x397-x398)&(x399<=x400));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x401 = -1LL;
	volatile uint16_t x402 = 2340U;
	static int16_t x403 = INT16_MIN;
	uint16_t x404 = 12U;

    t85 = ((x401-x402)&(x403<=x404));

    if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x406 = INT8_MIN;
	uint8_t x407 = UINT8_MAX;
	static int64_t x408 = 829LL;
	volatile uint64_t t86 = 13755682885LLU;

    t86 = ((x405-x406)&(x407<=x408));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x409 = INT64_MIN;
	uint64_t x410 = 0LLU;
	static uint8_t x411 = 19U;
	int16_t x412 = INT16_MIN;
	volatile uint64_t t87 = 10290365116142991LLU;

    t87 = ((x409-x410)&(x411<=x412));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x413 = INT64_MIN;
	uint64_t x415 = 906865173LLU;
	int64_t t88 = -63018LL;

    t88 = ((x413-x414)&(x415<=x416));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x418 = -1;
	int64_t x419 = 3LL;
	volatile int32_t t89 = -92917439;

    t89 = ((x417-x418)&(x419<=x420));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x425 = UINT32_MAX;
	int8_t x426 = INT8_MAX;
	int32_t x428 = INT32_MAX;
	volatile uint32_t t90 = 14U;

    t90 = ((x425-x426)&(x427<=x428));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x429 = 2U;
	volatile uint8_t x432 = 0U;

    t91 = ((x429-x430)&(x431<=x432));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x433 = UINT16_MAX;
	int32_t x435 = -65899385;
	volatile uint16_t x436 = UINT16_MAX;
	volatile int32_t t92 = 107281286;

    t92 = ((x433-x434)&(x435<=x436));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x437 = UINT64_MAX;
	int16_t x439 = -1;
	int16_t x440 = INT16_MIN;
	volatile uint64_t t93 = 267398933LLU;

    t93 = ((x437-x438)&(x439<=x440));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x441 = 13190923;
	static int32_t x442 = -1;
	int8_t x443 = INT8_MIN;
	int8_t x444 = INT8_MIN;
	int32_t t94 = 59142370;

    t94 = ((x441-x442)&(x443<=x444));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x445 = INT16_MAX;
	volatile uint64_t x446 = 3957544717LLU;
	uint64_t x447 = UINT64_MAX;
	volatile uint64_t t95 = 49301LLU;

    t95 = ((x445-x446)&(x447<=x448));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x449 = 10LLU;
	uint32_t x450 = 32945860U;
	int16_t x451 = INT16_MIN;
	int8_t x452 = -13;
	uint64_t t96 = 4376LLU;

    t96 = ((x449-x450)&(x451<=x452));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x453 = -1;
	uint64_t x454 = 134159LLU;
	int16_t x455 = INT16_MIN;
	int16_t x456 = 0;
	uint64_t t97 = 29998LLU;

    t97 = ((x453-x454)&(x455<=x456));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x457 = -30705223LL;
	int8_t x459 = 0;
	int16_t x460 = 8117;
	static int64_t t98 = -244356583447LL;

    t98 = ((x457-x458)&(x459<=x460));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x461 = 59U;
	int64_t x462 = INT64_MAX;
	int32_t x463 = 857573;
	static int32_t x464 = -1;
	int64_t t99 = 5119LL;

    t99 = ((x461-x462)&(x463<=x464));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x465 = 69454072;
	static int8_t x466 = INT8_MIN;
	static volatile int32_t x467 = 8;

    t100 = ((x465-x466)&(x467<=x468));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x469 = UINT8_MAX;
	int16_t x471 = -1;
	static volatile int32_t t101 = -1451;

    t101 = ((x469-x470)&(x471<=x472));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x473 = 1U;
	int16_t x474 = INT16_MAX;
	int32_t x475 = INT32_MAX;
	int32_t t102 = 9;

    t102 = ((x473-x474)&(x475<=x476));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x479 = -7321;
	uint64_t x480 = UINT64_MAX;
	volatile int32_t t103 = 3298232;

    t103 = ((x477-x478)&(x479<=x480));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x481 = -1;
	int8_t x482 = INT8_MIN;
	int32_t x483 = 21;
	uint8_t x484 = UINT8_MAX;
	volatile int32_t t104 = 662;

    t104 = ((x481-x482)&(x483<=x484));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x485 = UINT8_MAX;
	int16_t x486 = -3800;
	uint64_t x487 = 17402LLU;
	static int32_t x488 = -3;
	int32_t t105 = -472813276;

    t105 = ((x485-x486)&(x487<=x488));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x489 = -1;
	uint8_t x490 = 6U;
	int64_t x492 = 560371LL;
	int32_t t106 = -759407109;

    t106 = ((x489-x490)&(x491<=x492));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x497 = INT8_MIN;
	uint8_t x498 = 2U;
	int32_t x499 = INT32_MAX;

    t107 = ((x497-x498)&(x499<=x500));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x502 = INT8_MAX;
	int32_t x503 = INT32_MIN;
	volatile int16_t x504 = INT16_MAX;
	volatile int64_t t108 = 57755311LL;

    t108 = ((x501-x502)&(x503<=x504));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x505 = -2391764;
	int32_t x506 = INT32_MIN;
	uint32_t x508 = 9269U;
	static int32_t t109 = 61;

    t109 = ((x505-x506)&(x507<=x508));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x509 = UINT8_MAX;
	int8_t x511 = 12;
	static uint32_t x512 = UINT32_MAX;

    t110 = ((x509-x510)&(x511<=x512));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x513 = -1;
	volatile int32_t x514 = -1;
	int16_t x515 = INT16_MAX;
	int32_t x516 = INT32_MAX;
	static volatile int32_t t111 = -3553;

    t111 = ((x513-x514)&(x515<=x516));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x517 = -1LL;
	volatile int8_t x518 = 1;
	int8_t x519 = INT8_MAX;
	int64_t t112 = -8915LL;

    t112 = ((x517-x518)&(x519<=x520));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x521 = 1064087561049410373LL;
	uint64_t x522 = 7203979084LLU;
	int16_t x523 = 0;
	int16_t x524 = -5433;
	volatile uint64_t t113 = 53598038LLU;

    t113 = ((x521-x522)&(x523<=x524));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x525 = INT8_MAX;
	uint8_t x526 = UINT8_MAX;
	static int16_t x527 = INT16_MAX;
	uint16_t x528 = 18U;
	volatile int32_t t114 = 11868;

    t114 = ((x525-x526)&(x527<=x528));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x529 = UINT32_MAX;
	static int32_t x530 = -1;
	int64_t x531 = INT64_MIN;
	static uint64_t x532 = UINT64_MAX;
	static volatile uint32_t t115 = 13U;

    t115 = ((x529-x530)&(x531<=x532));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x537 = -35020;
	static int16_t x538 = INT16_MIN;
	int8_t x539 = INT8_MIN;

    t116 = ((x537-x538)&(x539<=x540));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x541 = 250U;
	int32_t x542 = INT32_MAX;
	int8_t x543 = -4;
	int8_t x544 = 7;
	int32_t t117 = 42;

    t117 = ((x541-x542)&(x543<=x544));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x545 = 1U;
	volatile int64_t x546 = -3104393598204LL;
	int64_t x547 = -1LL;

    t118 = ((x545-x546)&(x547<=x548));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x553 = UINT8_MAX;
	uint16_t x554 = UINT16_MAX;
	uint64_t x555 = 79069LLU;
	static int8_t x556 = -1;
	volatile int32_t t119 = 10;

    t119 = ((x553-x554)&(x555<=x556));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x557 = INT16_MIN;
	static uint32_t x559 = 4292604U;
	static int16_t x560 = 46;
	volatile int32_t t120 = 4;

    t120 = ((x557-x558)&(x559<=x560));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x561 = 39;
	int8_t x563 = -1;
	int8_t x564 = 1;
	static volatile int64_t t121 = -8309420509921LL;

    t121 = ((x561-x562)&(x563<=x564));

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x565 = 126U;
	uint32_t x566 = 220420734U;
	static int32_t x567 = INT32_MAX;
	int32_t x568 = -1;
	volatile uint32_t t122 = 101836229U;

    t122 = ((x565-x566)&(x567<=x568));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x577 = 434344153;
	int8_t x579 = INT8_MIN;
	uint64_t x580 = 3105642980LLU;
	int32_t t123 = -52871;

    t123 = ((x577-x578)&(x579<=x580));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x585 = -1;
	volatile uint8_t x586 = 15U;
	int16_t x587 = -12776;
	volatile int16_t x588 = -24;
	volatile int32_t t124 = -4;

    t124 = ((x585-x586)&(x587<=x588));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x589 = 88U;
	volatile int32_t x590 = -644212;
	int64_t x591 = INT64_MIN;
	volatile int16_t x592 = INT16_MIN;
	volatile int32_t t125 = 908980052;

    t125 = ((x589-x590)&(x591<=x592));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x594 = INT8_MIN;
	uint8_t x595 = UINT8_MAX;
	int8_t x596 = 1;
	volatile int32_t t126 = -13739;

    t126 = ((x593-x594)&(x595<=x596));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x597 = -3;
	int8_t x599 = -1;
	uint32_t x600 = 272U;
	int64_t t127 = 6277865043LL;

    t127 = ((x597-x598)&(x599<=x600));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x601 = 4;
	uint16_t x602 = 20U;
	static int8_t x603 = INT8_MAX;
	uint32_t x604 = UINT32_MAX;
	int32_t t128 = -14;

    t128 = ((x601-x602)&(x603<=x604));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x605 = 107U;
	static volatile int8_t x606 = INT8_MAX;
	static uint8_t x608 = 62U;
	volatile int32_t t129 = -527739;

    t129 = ((x605-x606)&(x607<=x608));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x609 = INT8_MIN;
	uint64_t x610 = 13377137LLU;
	uint8_t x611 = UINT8_MAX;
	static uint64_t x612 = 491713097089296LLU;
	uint64_t t130 = 5LLU;

    t130 = ((x609-x610)&(x611<=x612));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x613 = -1LL;
	uint64_t x616 = 0LLU;
	int64_t t131 = -1402514828180LL;

    t131 = ((x613-x614)&(x615<=x616));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x618 = 19492013LLU;
	int8_t x619 = -1;

    t132 = ((x617-x618)&(x619<=x620));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x621 = INT32_MIN;
	static int64_t x622 = -1LL;
	volatile int8_t x624 = -1;
	int64_t t133 = -1409LL;

    t133 = ((x621-x622)&(x623<=x624));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x625 = INT8_MIN;
	int64_t x626 = INT64_MIN;
	int64_t x627 = INT64_MIN;
	static int8_t x628 = 2;
	static volatile int64_t t134 = -405275721198155916LL;

    t134 = ((x625-x626)&(x627<=x628));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x629 = INT16_MAX;
	uint32_t x630 = 6164U;
	static int16_t x632 = INT16_MAX;
	uint32_t t135 = 58162802U;

    t135 = ((x629-x630)&(x631<=x632));

    if (t135 != 1U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x633 = INT16_MIN;
	uint32_t x634 = 1701365U;
	volatile int16_t x635 = INT16_MIN;
	static int64_t x636 = -1LL;
	volatile uint32_t t136 = 28019829U;

    t136 = ((x633-x634)&(x635<=x636));

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x637 = -1;
	int32_t x639 = -1;
	static uint8_t x640 = UINT8_MAX;
	volatile int32_t t137 = 35141;

    t137 = ((x637-x638)&(x639<=x640));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x645 = -1;
	static uint32_t x646 = UINT32_MAX;
	int64_t x647 = 8184545532820076LL;
	int16_t x648 = -11787;

    t138 = ((x645-x646)&(x647<=x648));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x649 = -1;
	static uint8_t x650 = 0U;
	static uint16_t x651 = 988U;
	uint64_t x652 = 32791132468816LLU;
	volatile int32_t t139 = -217555;

    t139 = ((x649-x650)&(x651<=x652));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x653 = 7U;
	int8_t x654 = INT8_MAX;
	int32_t x655 = 205;
	static volatile uint16_t x656 = 1U;
	volatile int32_t t140 = 25013;

    t140 = ((x653-x654)&(x655<=x656));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x661 = -1;
	static volatile int64_t x662 = INT64_MAX;
	volatile int16_t x663 = 12106;
	static uint64_t x664 = UINT64_MAX;
	int64_t t141 = -39281090839784278LL;

    t141 = ((x661-x662)&(x663<=x664));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x665 = UINT32_MAX;
	static int16_t x666 = -226;
	static int8_t x667 = INT8_MIN;
	uint32_t x668 = 1641U;
	volatile uint32_t t142 = 395U;

    t142 = ((x665-x666)&(x667<=x668));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x670 = UINT8_MAX;
	int16_t x671 = INT16_MAX;
	uint16_t x672 = UINT16_MAX;
	volatile int32_t t143 = -348162836;

    t143 = ((x669-x670)&(x671<=x672));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x673 = -1LL;
	int16_t x674 = -1;
	static int64_t t144 = -135446764707LL;

    t144 = ((x673-x674)&(x675<=x676));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x677 = UINT64_MAX;
	int8_t x678 = INT8_MAX;
	static volatile int8_t x679 = INT8_MAX;
	int32_t x680 = INT32_MAX;
	uint64_t t145 = 5398674LLU;

    t145 = ((x677-x678)&(x679<=x680));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x685 = -3083637091644631LL;
	int16_t x686 = INT16_MAX;

    t146 = ((x685-x686)&(x687<=x688));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x689 = 2044LLU;
	uint64_t x690 = UINT64_MAX;
	volatile uint64_t t147 = 14750LLU;

    t147 = ((x689-x690)&(x691<=x692));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x693 = 1;
	static uint8_t x694 = 1U;
	static uint32_t x695 = 15017U;
	static int32_t t148 = 7;

    t148 = ((x693-x694)&(x695<=x696));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x697 = 3372U;
	uint8_t x698 = 12U;
	int16_t x699 = INT16_MIN;
	static uint64_t x700 = 4228343949501LLU;
	volatile int32_t t149 = -1213;

    t149 = ((x697-x698)&(x699<=x700));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x701 = 15533U;
	volatile int32_t x702 = 49;
	int8_t x703 = INT8_MAX;
	int32_t x704 = -1;

    t150 = ((x701-x702)&(x703<=x704));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x705 = 0;
	uint16_t x706 = 1710U;
	int32_t x707 = -489392;
	uint8_t x708 = UINT8_MAX;

    t151 = ((x705-x706)&(x707<=x708));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x709 = INT32_MIN;
	int32_t x711 = INT32_MIN;
	int64_t x712 = INT64_MAX;
	volatile uint32_t t152 = 40U;

    t152 = ((x709-x710)&(x711<=x712));

    if (t152 != 1U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x713 = -1;
	int16_t x714 = -3785;
	int8_t x715 = INT8_MAX;
	int32_t x716 = 110;

    t153 = ((x713-x714)&(x715<=x716));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x717 = -1LL;
	volatile uint64_t x720 = UINT64_MAX;
	int64_t t154 = -219763363LL;

    t154 = ((x717-x718)&(x719<=x720));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x721 = INT8_MIN;
	int16_t x722 = -1;
	volatile int8_t x723 = INT8_MAX;

    t155 = ((x721-x722)&(x723<=x724));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x725 = 1844420;
	int16_t x727 = INT16_MIN;
	volatile uint64_t t156 = 1623074745LLU;

    t156 = ((x725-x726)&(x727<=x728));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x730 = INT32_MAX;
	int8_t x731 = INT8_MAX;
	volatile int64_t x732 = 45LL;
	int32_t t157 = 485267;

    t157 = ((x729-x730)&(x731<=x732));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x733 = 3U;
	static int32_t x736 = 166174851;

    t158 = ((x733-x734)&(x735<=x736));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x737 = INT8_MIN;
	static int64_t x739 = 1LL;
	int32_t x740 = 3179;
	volatile int32_t t159 = 228029413;

    t159 = ((x737-x738)&(x739<=x740));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x745 = -1;
	uint64_t x747 = 610959LLU;
	static int8_t x748 = 1;
	static int32_t t160 = -1757;

    t160 = ((x745-x746)&(x747<=x748));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x749 = UINT16_MAX;
	int32_t x750 = -294714;
	int16_t x752 = INT16_MIN;

    t161 = ((x749-x750)&(x751<=x752));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x753 = -3242;
	int32_t x754 = INT32_MIN;
	static int32_t x755 = 356983;
	static uint64_t x756 = UINT64_MAX;
	int32_t t162 = 1;

    t162 = ((x753-x754)&(x755<=x756));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x758 = 1;
	int16_t x760 = INT16_MAX;
	int32_t t163 = 119951116;

    t163 = ((x757-x758)&(x759<=x760));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x765 = 7;
	int64_t x766 = INT64_MAX;
	int16_t x767 = INT16_MIN;
	uint64_t x768 = UINT64_MAX;

    t164 = ((x765-x766)&(x767<=x768));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x769 = -15767516;
	int64_t x770 = INT64_MIN;
	int64_t x772 = -1LL;

    t165 = ((x769-x770)&(x771<=x772));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x773 = INT8_MAX;
	static int32_t x774 = -1;
	static volatile int8_t x775 = INT8_MAX;
	int16_t x776 = 3;
	static volatile int32_t t166 = -16;

    t166 = ((x773-x774)&(x775<=x776));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x777 = -8;
	int32_t x778 = INT32_MIN;
	static uint64_t x779 = 6938881LLU;
	uint32_t x780 = 126594U;
	int32_t t167 = -1019436;

    t167 = ((x777-x778)&(x779<=x780));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x785 = 1;
	int64_t x786 = -1LL;
	int16_t x787 = INT16_MAX;
	int8_t x788 = INT8_MAX;
	volatile int64_t t168 = 2946881050234428LL;

    t168 = ((x785-x786)&(x787<=x788));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x793 = INT32_MIN;
	int8_t x794 = INT8_MIN;
	int32_t x795 = -205879442;
	static uint8_t x796 = UINT8_MAX;
	volatile int32_t t169 = -4;

    t169 = ((x793-x794)&(x795<=x796));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x805 = 13401305942763LLU;
	int8_t x806 = -1;
	int8_t x807 = INT8_MIN;
	static uint8_t x808 = UINT8_MAX;
	volatile uint64_t t170 = 561LLU;

    t170 = ((x805-x806)&(x807<=x808));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x810 = 137LLU;
	int32_t x811 = INT32_MIN;
	volatile int32_t x812 = INT32_MAX;
	uint64_t t171 = 138LLU;

    t171 = ((x809-x810)&(x811<=x812));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x813 = INT8_MIN;
	int8_t x814 = -1;
	static int64_t x815 = 2974929LL;
	int32_t t172 = 5302597;

    t172 = ((x813-x814)&(x815<=x816));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x817 = 49U;
	uint16_t x818 = UINT16_MAX;
	uint32_t x819 = 56473U;
	int32_t t173 = 1;

    t173 = ((x817-x818)&(x819<=x820));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x821 = 0;
	int8_t x822 = 54;
	static int8_t x823 = INT8_MIN;
	static int64_t x824 = INT64_MIN;
	static volatile int32_t t174 = -10202779;

    t174 = ((x821-x822)&(x823<=x824));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x826 = INT16_MAX;
	uint8_t x828 = 4U;
	static uint64_t t175 = 16903173801LLU;

    t175 = ((x825-x826)&(x827<=x828));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x837 = UINT8_MAX;
	int16_t x839 = -1;
	uint64_t x840 = UINT64_MAX;
	int32_t t176 = 31037;

    t176 = ((x837-x838)&(x839<=x840));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x842 = -45869;
	int32_t x843 = INT32_MIN;
	volatile uint64_t x844 = UINT64_MAX;
	volatile uint64_t t177 = 828860414LLU;

    t177 = ((x841-x842)&(x843<=x844));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x845 = 4678;
	uint16_t x846 = 12274U;
	int16_t x847 = INT16_MIN;
	static volatile int8_t x848 = -1;
	volatile int32_t t178 = 1365396;

    t178 = ((x845-x846)&(x847<=x848));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x851 = INT8_MIN;
	volatile int32_t t179 = -319604447;

    t179 = ((x849-x850)&(x851<=x852));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x853 = INT16_MIN;
	int8_t x854 = -1;
	int8_t x855 = -3;
	volatile int32_t x856 = INT32_MIN;

    t180 = ((x853-x854)&(x855<=x856));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint16_t x857 = UINT16_MAX;
	static volatile int64_t x858 = -17760135758568854LL;
	int16_t x859 = INT16_MIN;
	int64_t t181 = 50925411947154871LL;

    t181 = ((x857-x858)&(x859<=x860));

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x861 = INT64_MIN;
	int64_t x862 = -1LL;
	int64_t x864 = INT64_MIN;

    t182 = ((x861-x862)&(x863<=x864));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x866 = 13113LLU;
	int16_t x867 = -1;
	int64_t x868 = INT64_MAX;
	volatile uint64_t t183 = 14651413876432LLU;

    t183 = ((x865-x866)&(x867<=x868));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x870 = INT8_MIN;
	uint8_t x871 = UINT8_MAX;
	int32_t x872 = INT32_MIN;
	int32_t t184 = 30;

    t184 = ((x869-x870)&(x871<=x872));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x873 = -1;
	static uint32_t x874 = 775615U;
	int8_t x875 = INT8_MIN;
	volatile int64_t x876 = -2400037558939248598LL;
	volatile uint32_t t185 = 97608U;

    t185 = ((x873-x874)&(x875<=x876));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x878 = 51399U;
	volatile uint32_t x879 = 59U;
	int8_t x880 = 1;

    t186 = ((x877-x878)&(x879<=x880));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x881 = INT16_MIN;
	volatile int8_t x882 = INT8_MIN;
	static int32_t x883 = INT32_MIN;
	int8_t x884 = INT8_MAX;
	int32_t t187 = 522;

    t187 = ((x881-x882)&(x883<=x884));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x889 = 2634004LLU;
	int32_t x890 = INT32_MIN;
	int32_t x891 = INT32_MIN;
	uint16_t x892 = 40U;
	uint64_t t188 = 1029949943LLU;

    t188 = ((x889-x890)&(x891<=x892));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x893 = INT8_MIN;
	int8_t x895 = INT8_MIN;
	static uint8_t x896 = 1U;
	int32_t t189 = 1;

    t189 = ((x893-x894)&(x895<=x896));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x898 = -53;

    t190 = ((x897-x898)&(x899<=x900));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x901 = 26U;
	int16_t x902 = INT16_MIN;
	static int64_t x903 = -1LL;
	static int32_t x904 = -9;
	int32_t t191 = -1;

    t191 = ((x901-x902)&(x903<=x904));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x909 = INT64_MIN;
	int8_t x910 = INT8_MIN;
	volatile uint32_t x911 = UINT32_MAX;
	static volatile uint16_t x912 = 7675U;
	int64_t t192 = -5763292610LL;

    t192 = ((x909-x910)&(x911<=x912));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x913 = 56174U;
	int64_t x914 = -1LL;
	volatile int16_t x915 = 115;

    t193 = ((x913-x914)&(x915<=x916));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x917 = 14U;
	volatile int16_t x918 = INT16_MIN;
	uint64_t x919 = UINT64_MAX;
	int16_t x920 = -6668;
	int32_t t194 = 5;

    t194 = ((x917-x918)&(x919<=x920));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x921 = 1U;
	int8_t x922 = -1;
	int16_t x923 = INT16_MIN;

    t195 = ((x921-x922)&(x923<=x924));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x925 = -11890980100810LL;
	int64_t x926 = INT64_MIN;
	int64_t t196 = 62LL;

    t196 = ((x925-x926)&(x927<=x928));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x929 = 2;
	int8_t x931 = 0;
	volatile int16_t x932 = -1;
	int32_t t197 = 3295;

    t197 = ((x929-x930)&(x931<=x932));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x934 = 185LLU;
	static uint16_t x935 = UINT16_MAX;
	int32_t x936 = INT32_MIN;
	uint64_t t198 = 1182768937376314LLU;

    t198 = ((x933-x934)&(x935<=x936));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x938 = -1;
	int8_t x939 = INT8_MAX;
	int64_t x940 = -2LL;
	volatile int32_t t199 = 66443281;

    t199 = ((x937-x938)&(x939<=x940));

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

