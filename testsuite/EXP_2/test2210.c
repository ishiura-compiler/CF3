
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

static int8_t x5 = -1;
volatile int8_t x10 = -1;
static int32_t x26 = INT32_MAX;
volatile uint64_t t5 = 260257LLU;
int64_t x30 = INT64_MIN;
int8_t x31 = -3;
volatile int16_t x47 = INT16_MAX;
int64_t x51 = INT64_MIN;
uint8_t x60 = 3U;
static volatile int16_t x62 = -1;
uint64_t x63 = 278673516404083320LLU;
volatile uint8_t x65 = 3U;
uint16_t x79 = UINT16_MAX;
volatile int32_t x94 = -1;
uint16_t x95 = 3758U;
static int32_t x99 = -1;
static int32_t x103 = INT32_MIN;
int64_t x106 = -1LL;
static int8_t x108 = INT8_MAX;
static volatile int64_t t21 = 242726240036LL;
uint64_t x127 = UINT64_MAX;
volatile int64_t t23 = 326488245001LL;
int16_t x137 = INT16_MIN;
int8_t x140 = -1;
int32_t x144 = -1;
volatile int64_t t28 = 1741730369015LL;
uint8_t x157 = 2U;
uint8_t x159 = 56U;
uint64_t x167 = UINT64_MAX;
volatile int8_t x168 = -1;
int8_t x177 = INT8_MIN;
static int32_t x182 = 1;
uint16_t x191 = 1404U;
static volatile int64_t t36 = 129LL;
uint64_t t38 = 8030561835996968LLU;
uint16_t x212 = UINT16_MAX;
int32_t x220 = 491293191;
static volatile int32_t x230 = 12;
static volatile uint64_t x231 = UINT64_MAX;
uint64_t t42 = 139144984462510LLU;
static int32_t x239 = -1;
int64_t x240 = -231468205LL;
static volatile uint64_t t44 = 236382957LLU;
volatile uint64_t t45 = 592660919LLU;
int16_t x254 = INT16_MIN;
int64_t x266 = -1LL;
int32_t x277 = INT32_MAX;
int64_t x279 = -626860814LL;
int64_t x280 = -6864735775534LL;
volatile int32_t x283 = INT32_MIN;
int8_t x293 = INT8_MAX;
volatile uint64_t t54 = 31956634982876080LLU;
int64_t t55 = -3120LL;
volatile int32_t t56 = -2736;
uint32_t x321 = UINT32_MAX;
int64_t x324 = INT64_MIN;
volatile int64_t t60 = 698LL;
volatile int16_t x325 = -1;
volatile int32_t t61 = 502;
static uint32_t x337 = 134U;
static int8_t x346 = -1;
static uint16_t x365 = 25U;
volatile int64_t x374 = INT64_MIN;
volatile uint32_t x376 = UINT32_MAX;
int64_t x386 = INT64_MAX;
uint64_t t70 = 8LLU;
uint16_t x390 = UINT16_MAX;
int16_t x405 = 42;
int32_t x407 = -15;
int32_t t73 = -38864;
int32_t x418 = -62239089;
volatile int32_t t76 = 491;
static int16_t x421 = INT16_MAX;
static uint64_t x424 = 7942LLU;
uint32_t x427 = 487371U;
volatile uint16_t x428 = 1533U;
int32_t t79 = -430404365;
int16_t x437 = INT16_MIN;
int32_t t81 = -22273998;
static int8_t x476 = INT8_MIN;
int64_t x484 = INT64_MIN;
static int32_t x487 = -1785337;
volatile int32_t t89 = 192652;
int64_t x497 = 16LL;
int64_t x499 = -1LL;
static int64_t t94 = 85278809625LL;
volatile int64_t t95 = -28103781406237886LL;
static int8_t x521 = -1;
volatile int64_t t97 = 396792370497177484LL;
uint8_t x529 = UINT8_MAX;
volatile int32_t x531 = INT32_MIN;
uint16_t x538 = 1U;
int32_t x550 = -1;
int64_t t106 = -46027LL;
int16_t x579 = INT16_MAX;
int16_t x583 = INT16_MAX;
uint64_t x591 = 286856LLU;
static volatile int8_t x593 = INT8_MIN;
uint16_t x602 = UINT16_MAX;
volatile uint16_t x605 = 168U;
volatile uint32_t x607 = 46258461U;
volatile int16_t x616 = INT16_MAX;
int16_t x619 = -3887;
int64_t t117 = -176LL;
static int16_t x638 = INT16_MAX;
volatile int64_t t120 = -19027LL;
volatile int8_t x641 = -1;
int32_t x643 = INT32_MIN;
uint32_t x656 = 10U;
volatile uint32_t x663 = 5397640U;
volatile uint64_t t126 = 643975944926950174LLU;
int8_t x685 = INT8_MIN;
int16_t x686 = -2956;
int8_t x694 = -1;
uint32_t x706 = 563U;
static int64_t x708 = -1LL;
volatile uint32_t t131 = 855U;
int32_t x729 = INT32_MAX;
int16_t x735 = -1;
int32_t x738 = INT32_MAX;
static int32_t x741 = -467150572;
uint32_t x742 = UINT32_MAX;
uint8_t x753 = 2U;
static volatile int16_t x762 = INT16_MIN;
int16_t x778 = INT16_MIN;
uint8_t x801 = 2U;
uint8_t x802 = UINT8_MAX;
int16_t x805 = INT16_MIN;
volatile int16_t x808 = 61;
int16_t x812 = 623;
volatile uint32_t x815 = UINT32_MAX;
int32_t x818 = -1;
static uint32_t x821 = 11600U;
uint8_t x822 = 25U;
int16_t x828 = -1;
int16_t x837 = -1910;
static int8_t x838 = -27;
int32_t x839 = 14;
int16_t x841 = INT16_MIN;
volatile uint64_t t158 = 146892856955421LLU;
int8_t x863 = -1;
static int16_t x864 = INT16_MAX;
volatile uint64_t t161 = 4733294LLU;
int8_t x870 = INT8_MIN;
int32_t x872 = INT32_MAX;
volatile uint64_t x875 = 129267801280675LLU;
uint64_t t163 = 128655093758536912LLU;
int64_t x907 = 22059539864206LL;
int32_t x914 = -241614;
static int32_t x915 = -727709;
volatile uint16_t x926 = UINT16_MAX;
volatile uint32_t x927 = UINT32_MAX;
uint32_t t170 = 3965U;
int32_t x930 = INT32_MIN;
int64_t x945 = INT64_MAX;
int16_t x952 = -1;
static uint32_t x954 = 46U;
int16_t x959 = -1;
volatile int64_t t177 = -36124448934391LL;
uint16_t x963 = UINT16_MAX;
uint64_t x965 = UINT64_MAX;
int32_t x968 = 1495;
static int32_t x975 = -110399365;
static int32_t t183 = 39127;
uint16_t x996 = UINT16_MAX;
int32_t x1012 = INT32_MAX;
static volatile uint64_t t187 = 18435439682LLU;
int32_t x1019 = INT32_MIN;
int64_t x1023 = -1LL;
volatile int16_t x1024 = 31;
volatile int64_t t190 = 105155000071093918LL;
int32_t x1027 = -1;
int64_t x1033 = 2017644LL;
volatile int64_t x1045 = -100523089094268LL;
static uint8_t x1046 = UINT8_MAX;
int16_t x1048 = -3415;
volatile uint8_t x1054 = 43U;
int16_t x1061 = 7470;
static volatile int64_t t198 = 459215LL;
int16_t x1066 = 773;
static int16_t x1068 = -1;
volatile int64_t t199 = 2967095483LL;


void f0(void) {
    	int64_t x6 = INT64_MIN;
	uint64_t x7 = UINT64_MAX;
	int64_t x8 = 31738282965738533LL;
	volatile uint64_t t0 = 49818880621LLU;

    t0 = ((x5/(x6&x7))&x8);

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x9 = 3U;
	int8_t x11 = INT8_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t1 = 82;

    t1 = ((x9/(x10&x11))&x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x13 = 1U;
	uint8_t x14 = 36U;
	int64_t x15 = 1368489514LL;
	uint8_t x16 = UINT8_MAX;
	static volatile int64_t t2 = 47991LL;

    t2 = ((x13/(x14&x15))&x16);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x17 = INT8_MAX;
	static volatile uint8_t x18 = 4U;
	volatile int32_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	static volatile uint32_t t3 = 45U;

    t3 = ((x17/(x18&x19))&x20);

    if (t3 != 31U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = UINT64_MAX;
	uint32_t x22 = 315U;
	uint8_t x23 = UINT8_MAX;
	int16_t x24 = 26;
	uint64_t t4 = 233444515856404LLU;

    t4 = ((x21/(x22&x23))&x24);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x25 = 1;
	int32_t x27 = -3481611;
	volatile uint64_t x28 = 1647267092LLU;

    t5 = ((x25/(x26&x27))&x28);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = INT16_MIN;
	static uint16_t x32 = UINT16_MAX;
	int64_t t6 = -13311997161460LL;

    t6 = ((x29/(x30&x31))&x32);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x41 = 1054603637703LLU;
	uint8_t x42 = 116U;
	uint8_t x43 = UINT8_MAX;
	static uint8_t x44 = 0U;
	static volatile uint64_t t7 = 431462LLU;

    t7 = ((x41/(x42&x43))&x44);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x45 = INT64_MAX;
	int64_t x46 = -14855613651698118LL;
	volatile uint32_t x48 = 1520456400U;
	volatile int64_t t8 = -43115LL;

    t8 = ((x45/(x46&x47))&x48);

    if (t8 != 41947328LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = INT16_MAX;
	static int32_t x50 = INT32_MIN;
	int32_t x52 = INT32_MIN;
	volatile int64_t t9 = 3908811LL;

    t9 = ((x49/(x50&x51))&x52);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x57 = 1;
	static volatile int64_t x58 = INT64_MIN;
	int32_t x59 = -1;
	volatile int64_t t10 = -1LL;

    t10 = ((x57/(x58&x59))&x60);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = -1;
	uint16_t x64 = 19U;
	volatile uint64_t t11 = 4487435462783451707LLU;

    t11 = ((x61/(x62&x63))&x64);

    if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x66 = INT8_MAX;
	int8_t x67 = 10;
	uint8_t x68 = UINT8_MAX;
	int32_t t12 = 0;

    t12 = ((x65/(x66&x67))&x68);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x69 = INT32_MAX;
	int64_t x70 = -272LL;
	static int32_t x71 = INT32_MIN;
	uint64_t x72 = 114883456554102988LLU;
	uint64_t t13 = 628919260534950020LLU;

    t13 = ((x69/(x70&x71))&x72);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x73 = 1503195930129LLU;
	volatile uint32_t x74 = 133148U;
	volatile uint8_t x75 = UINT8_MAX;
	int16_t x76 = INT16_MIN;
	static uint64_t t14 = 61480045021507559LLU;

    t14 = ((x73/(x74&x75))&x76);

    if (t14 != 53685551104LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x77 = 0;
	volatile uint8_t x78 = UINT8_MAX;
	int32_t x80 = 53731137;
	volatile int32_t t15 = 1;

    t15 = ((x77/(x78&x79))&x80);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x93 = 124U;
	static int64_t x96 = INT64_MAX;
	int64_t t16 = 105423376327LL;

    t16 = ((x93/(x94&x95))&x96);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x97 = -56;
	int16_t x98 = INT16_MAX;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t17 = 34322;

    t17 = ((x97/(x98&x99))&x100);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x101 = 27U;
	uint64_t x102 = UINT64_MAX;
	int8_t x104 = -1;
	volatile uint64_t t18 = 58459423LLU;

    t18 = ((x101/(x102&x103))&x104);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x105 = -1;
	static volatile uint16_t x107 = 13U;
	int64_t t19 = 21LL;

    t19 = ((x105/(x106&x107))&x108);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x109 = 13U;
	uint32_t x110 = UINT32_MAX;
	uint8_t x111 = 3U;
	int8_t x112 = -1;
	uint32_t t20 = 11211290U;

    t20 = ((x109/(x110&x111))&x112);

    if (t20 != 4U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x121 = INT32_MAX;
	int64_t x122 = INT64_MIN;
	int32_t x123 = INT32_MIN;
	uint32_t x124 = 83308U;

    t21 = ((x121/(x122&x123))&x124);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x125 = INT32_MIN;
	uint64_t x126 = 848616LLU;
	uint32_t x128 = 360502669U;
	volatile uint64_t t22 = 4314275922398134LLU;

    t22 = ((x125/(x126&x127))&x128);

    if (t22 != 70780296LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x133 = INT8_MAX;
	static int64_t x134 = 27291213LL;
	static int16_t x135 = INT16_MIN;
	volatile uint16_t x136 = 23655U;

    t23 = ((x133/(x134&x135))&x136);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x138 = INT8_MAX;
	int16_t x139 = -2964;
	int32_t t24 = 87;

    t24 = ((x137/(x138&x139))&x140);

    if (t24 != -303) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x141 = 223989171153781LLU;
	static int16_t x142 = -1;
	static int32_t x143 = -16644;
	uint64_t t25 = 3614496375271058931LLU;

    t25 = ((x141/(x142&x143))&x144);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x145 = 48LLU;
	volatile uint32_t x146 = UINT32_MAX;
	uint16_t x147 = 2945U;
	int32_t x148 = -1;
	volatile uint64_t t26 = 31817LLU;

    t26 = ((x145/(x146&x147))&x148);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x149 = INT16_MAX;
	uint64_t x150 = UINT64_MAX;
	uint32_t x151 = UINT32_MAX;
	volatile int16_t x152 = -28;
	volatile uint64_t t27 = 0LLU;

    t27 = ((x149/(x150&x151))&x152);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x153 = 15;
	int64_t x154 = -1LL;
	int32_t x155 = -1;
	int16_t x156 = -1;

    t28 = ((x153/(x154&x155))&x156);

    if (t28 != -15LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x158 = 183;
	uint16_t x160 = 12U;
	int32_t t29 = 98402;

    t29 = ((x157/(x158&x159))&x160);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x161 = 6U;
	int64_t x162 = -1LL;
	volatile uint32_t x163 = 18900474U;
	volatile uint8_t x164 = 63U;
	volatile int64_t t30 = -91LL;

    t30 = ((x161/(x162&x163))&x164);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x165 = UINT16_MAX;
	uint32_t x166 = UINT32_MAX;
	volatile uint64_t t31 = 85226963003LLU;

    t31 = ((x165/(x166&x167))&x168);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MIN;
	uint8_t x175 = UINT8_MAX;
	uint64_t x176 = 3246156LLU;
	volatile uint64_t t32 = 1120374LLU;

    t32 = ((x173/(x174&x175))&x176);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x178 = 108427952;
	int64_t x179 = -220628883058LL;
	static int32_t x180 = INT32_MIN;
	int64_t t33 = -14385579LL;

    t33 = ((x177/(x178&x179))&x180);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x181 = 12U;
	uint32_t x183 = UINT32_MAX;
	static int16_t x184 = -1;
	volatile uint32_t t34 = 8U;

    t34 = ((x181/(x182&x183))&x184);

    if (t34 != 12U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x185 = 0;
	static uint8_t x186 = UINT8_MAX;
	uint8_t x187 = 1U;
	int16_t x188 = INT16_MIN;
	static int32_t t35 = -4213;

    t35 = ((x185/(x186&x187))&x188);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MAX;
	int32_t x192 = INT32_MAX;

    t36 = ((x189/(x190&x191))&x192);

    if (t36 != 1040091796LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x201 = 8743U;
	static int64_t x202 = INT64_MAX;
	static int16_t x203 = INT16_MIN;
	int32_t x204 = INT32_MAX;
	int64_t t37 = -129221736717530LL;

    t37 = ((x201/(x202&x203))&x204);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x205 = INT32_MIN;
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = INT8_MAX;
	uint64_t x208 = UINT64_MAX;

    t38 = ((x205/(x206&x207))&x208);

    if (t38 != 18446744073692642296LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	volatile int32_t t39 = -54;

    t39 = ((x209/(x210&x211))&x212);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x213 = 432U;
	int64_t x214 = -3645LL;
	uint8_t x215 = 2U;
	volatile int16_t x216 = INT16_MIN;
	volatile int64_t t40 = -17593791019525LL;

    t40 = ((x213/(x214&x215))&x216);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x217 = 1628U;
	int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MIN;
	static int32_t t41 = 3066;

    t41 = ((x217/(x218&x219))&x220);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x229 = 531U;
	int16_t x232 = INT16_MIN;

    t42 = ((x229/(x230&x231))&x232);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x233 = -1;
	volatile int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	static uint32_t x236 = 102U;
	uint32_t t43 = 86067U;

    t43 = ((x233/(x234&x235))&x236);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x237 = INT64_MIN;
	volatile uint64_t x238 = 30957795LLU;

    t44 = ((x237/(x238&x239))&x240);

    if (t44 != 297731883265LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x245 = UINT64_MAX;
	int32_t x246 = 477;
	int8_t x247 = INT8_MIN;
	int32_t x248 = -1;

    t45 = ((x245/(x246&x247))&x248);

    if (t45 != 48038396025285290LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x253 = 16090585406067LLU;
	int16_t x255 = -906;
	uint64_t x256 = UINT64_MAX;
	uint64_t t46 = 298354LLU;

    t46 = ((x253/(x254&x255))&x256);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x257 = INT64_MAX;
	int16_t x258 = INT16_MIN;
	static volatile int64_t x259 = -1LL;
	int16_t x260 = -6070;
	int64_t t47 = 10738836LL;

    t47 = ((x257/(x258&x259))&x260);

    if (t47 != -281474976710656LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x261 = -1;
	int32_t x262 = -1;
	volatile uint64_t x263 = 49214832291LLU;
	int8_t x264 = -1;
	uint64_t t48 = 57130LLU;

    t48 = ((x261/(x262&x263))&x264);

    if (t48 != 374820825LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x265 = -1;
	static int16_t x267 = INT16_MAX;
	volatile uint16_t x268 = 30197U;
	int64_t t49 = 153243LL;

    t49 = ((x265/(x266&x267))&x268);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x278 = 27755U;
	static int64_t t50 = 41980783239513LL;

    t50 = ((x277/(x278&x279))&x280);

    if (t50 != 34002LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x281 = 0U;
	static int64_t x282 = -1LL;
	int32_t x284 = 891;
	int64_t t51 = 1356971LL;

    t51 = ((x281/(x282&x283))&x284);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x285 = -1LL;
	uint32_t x286 = 88U;
	int16_t x287 = INT16_MAX;
	int32_t x288 = INT32_MAX;
	volatile int64_t t52 = -2LL;

    t52 = ((x285/(x286&x287))&x288);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x289 = UINT16_MAX;
	static int32_t x290 = INT32_MIN;
	static int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MIN;
	int64_t t53 = 1LL;

    t53 = ((x289/(x290&x291))&x292);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x294 = 20;
	uint64_t x295 = 58834111233124LLU;
	int64_t x296 = INT64_MAX;

    t54 = ((x293/(x294&x295))&x296);

    if (t54 != 31LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x297 = INT32_MAX;
	int64_t x298 = INT64_MAX;
	uint32_t x299 = 22988710U;
	volatile uint8_t x300 = 0U;

    t55 = ((x297/(x298&x299))&x300);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x305 = -3;
	volatile int8_t x306 = INT8_MIN;
	int16_t x307 = INT16_MAX;
	static volatile int32_t x308 = 2;

    t56 = ((x305/(x306&x307))&x308);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x309 = 0LL;
	uint64_t x310 = UINT64_MAX;
	int16_t x311 = INT16_MIN;
	int32_t x312 = -1;
	uint64_t t57 = 111544948969LLU;

    t57 = ((x309/(x310&x311))&x312);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x313 = 14533U;
	volatile int32_t x314 = -1;
	volatile int64_t x315 = -15729LL;
	int32_t x316 = INT32_MIN;
	static int64_t t58 = 70315LL;

    t58 = ((x313/(x314&x315))&x316);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x317 = 1LL;
	int32_t x318 = INT32_MIN;
	static volatile int8_t x319 = -6;
	int16_t x320 = INT16_MIN;
	int64_t t59 = -17LL;

    t59 = ((x317/(x318&x319))&x320);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x322 = 2040;
	uint32_t x323 = 465999U;

    t60 = ((x321/(x322&x323))&x324);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x326 = UINT16_MAX;
	int16_t x327 = -1;
	static int16_t x328 = -1;

    t61 = ((x325/(x326&x327))&x328);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x338 = INT16_MAX;
	uint64_t x339 = 11648672784890LLU;
	uint16_t x340 = 60U;
	uint64_t t62 = 116LLU;

    t62 = ((x337/(x338&x339))&x340);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x345 = -53;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = UINT16_MAX;
	int32_t t63 = -448364618;

    t63 = ((x345/(x346&x347))&x348);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x353 = INT32_MIN;
	uint32_t x354 = 276283827U;
	int32_t x355 = -161148618;
	int16_t x356 = -6;
	uint32_t t64 = 19571522U;

    t64 = ((x353/(x354&x355))&x356);

    if (t64 != 2U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x357 = 118U;
	int32_t x358 = -35244;
	int64_t x359 = INT64_MAX;
	int32_t x360 = -24720;
	volatile int64_t t65 = 1888747403885722633LL;

    t65 = ((x357/(x358&x359))&x360);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x361 = 370911LLU;
	static uint16_t x362 = UINT16_MAX;
	int8_t x363 = 1;
	uint16_t x364 = 326U;
	static volatile uint64_t t66 = 509LLU;

    t66 = ((x361/(x362&x363))&x364);

    if (t66 != 70LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x366 = INT16_MAX;
	uint64_t x367 = UINT64_MAX;
	volatile int32_t x368 = INT32_MIN;
	uint64_t t67 = 23587597861LLU;

    t67 = ((x365/(x366&x367))&x368);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x373 = INT16_MAX;
	int16_t x375 = INT16_MIN;
	int64_t t68 = 499365699703542LL;

    t68 = ((x373/(x374&x375))&x376);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x377 = 128869U;
	int64_t x378 = -4356943270076LL;
	uint64_t x379 = 932LLU;
	uint8_t x380 = UINT8_MAX;
	uint64_t t69 = 6091331246538LLU;

    t69 = ((x377/(x378&x379))&x380);

    if (t69 != 166LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x385 = UINT8_MAX;
	volatile uint64_t x387 = 179886491628LLU;
	volatile int64_t x388 = -1LL;

    t70 = ((x385/(x386&x387))&x388);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x389 = 1;
	static volatile uint8_t x391 = UINT8_MAX;
	uint8_t x392 = UINT8_MAX;
	int32_t t71 = 16943;

    t71 = ((x389/(x390&x391))&x392);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x397 = INT8_MIN;
	volatile int8_t x398 = -1;
	volatile int8_t x399 = INT8_MAX;
	static volatile int8_t x400 = 0;
	int32_t t72 = 24956;

    t72 = ((x397/(x398&x399))&x400);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x406 = INT8_MIN;
	int16_t x408 = -124;

    t73 = ((x405/(x406&x407))&x408);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x409 = 1011251056;
	static volatile int32_t x410 = 3;
	static uint8_t x411 = UINT8_MAX;
	int32_t x412 = INT32_MIN;
	volatile int32_t t74 = -73809;

    t74 = ((x409/(x410&x411))&x412);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x413 = -1;
	int8_t x414 = INT8_MAX;
	uint32_t x415 = 57U;
	int16_t x416 = -1;
	volatile uint32_t t75 = 24552U;

    t75 = ((x413/(x414&x415))&x416);

    if (t75 != 75350303U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x417 = INT8_MAX;
	static int8_t x419 = INT8_MAX;
	static volatile int8_t x420 = 2;

    t76 = ((x417/(x418&x419))&x420);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x422 = -1;
	volatile uint64_t x423 = UINT64_MAX;
	uint64_t t77 = 380214LLU;

    t77 = ((x421/(x422&x423))&x424);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x425 = -992;
	int64_t x426 = INT64_MAX;
	int64_t t78 = 2LL;

    t78 = ((x425/(x426&x427))&x428);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x429 = -1;
	volatile int32_t x430 = -406112130;
	int8_t x431 = 55;
	static int32_t x432 = INT32_MIN;

    t79 = ((x429/(x430&x431))&x432);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x438 = 15473;
	int32_t x439 = -1;
	static uint32_t x440 = 974006U;
	volatile uint32_t t80 = 103690U;

    t80 = ((x437/(x438&x439))&x440);

    if (t80 != 974006U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x441 = -1;
	int32_t x442 = -1;
	static uint16_t x443 = 3U;
	int32_t x444 = INT32_MIN;

    t81 = ((x441/(x442&x443))&x444);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x445 = 6LL;
	static int32_t x446 = -28090660;
	static int64_t x447 = INT64_MAX;
	int16_t x448 = INT16_MAX;
	volatile int64_t t82 = -2576742561805LL;

    t82 = ((x445/(x446&x447))&x448);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x449 = UINT16_MAX;
	int8_t x450 = 46;
	uint8_t x451 = 10U;
	static int32_t x452 = INT32_MIN;
	static volatile int32_t t83 = 206584;

    t83 = ((x449/(x450&x451))&x452);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x453 = 161;
	int64_t x454 = INT64_MIN;
	static int64_t x455 = INT64_MIN;
	int32_t x456 = INT32_MIN;
	int64_t t84 = -247709246402619988LL;

    t84 = ((x453/(x454&x455))&x456);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x461 = 0;
	uint32_t x462 = UINT32_MAX;
	int8_t x463 = -1;
	uint16_t x464 = 8U;
	static uint32_t t85 = 987U;

    t85 = ((x461/(x462&x463))&x464);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x465 = -1;
	int8_t x466 = INT8_MIN;
	int32_t x467 = INT32_MIN;
	int16_t x468 = -825;
	int32_t t86 = -14206;

    t86 = ((x465/(x466&x467))&x468);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x473 = INT64_MIN;
	int16_t x474 = -94;
	volatile int32_t x475 = INT32_MIN;
	int64_t t87 = -30051LL;

    t87 = ((x473/(x474&x475))&x476);

    if (t87 != 4294967296LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x481 = -3520287597LL;
	static volatile int16_t x482 = 52;
	uint8_t x483 = UINT8_MAX;
	volatile int64_t t88 = INT64_MIN;

    t88 = ((x481/(x482&x483))&x484);

    if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x485 = -1;
	static int16_t x486 = -1;
	static int8_t x488 = -2;

    t89 = ((x485/(x486&x487))&x488);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x489 = -1;
	uint32_t x490 = 319368161U;
	uint64_t x491 = 803126259387LLU;
	static uint8_t x492 = 102U;
	uint64_t t90 = 437023LLU;

    t90 = ((x489/(x490&x491))&x492);

    if (t90 != 96LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x493 = INT16_MIN;
	static int8_t x494 = INT8_MIN;
	int64_t x495 = INT64_MIN;
	int32_t x496 = -760971823;
	int64_t t91 = 2878628922996107LL;

    t91 = ((x493/(x494&x495))&x496);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x498 = 7252U;
	int32_t x500 = INT32_MAX;
	int64_t t92 = -134LL;

    t92 = ((x497/(x498&x499))&x500);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x501 = INT64_MIN;
	int32_t x502 = INT32_MAX;
	int8_t x503 = 27;
	int16_t x504 = INT16_MAX;
	static volatile int64_t t93 = 41690401715166LL;

    t93 = ((x501/(x502&x503))&x504);

    if (t93 != 9710LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x505 = -1;
	int64_t x506 = -1LL;
	int32_t x507 = INT32_MIN;
	int16_t x508 = 42;

    t94 = ((x505/(x506&x507))&x508);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x509 = 474;
	int64_t x510 = -19376LL;
	int8_t x511 = -3;
	uint32_t x512 = 0U;

    t95 = ((x509/(x510&x511))&x512);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x517 = INT16_MIN;
	int64_t x518 = -3774568811215427LL;
	uint32_t x519 = 8724164U;
	int8_t x520 = INT8_MIN;
	volatile int64_t t96 = 6510269LL;

    t96 = ((x517/(x518&x519))&x520);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x522 = INT8_MIN;
	int64_t x523 = INT64_MIN;
	uint16_t x524 = 6U;

    t97 = ((x521/(x522&x523))&x524);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x530 = -1LL;
	int8_t x532 = 15;
	static int64_t t98 = 16346727LL;

    t98 = ((x529/(x530&x531))&x532);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x533 = INT8_MIN;
	volatile uint8_t x534 = 52U;
	int32_t x535 = INT32_MAX;
	int64_t x536 = INT64_MIN;
	static volatile int64_t t99 = INT64_MIN;

    t99 = ((x533/(x534&x535))&x536);

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x537 = 14696U;
	int32_t x539 = -90437;
	int64_t x540 = -3586LL;
	static int64_t t100 = 158057LL;

    t100 = ((x537/(x538&x539))&x540);

    if (t100 != 12648LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x545 = INT16_MIN;
	uint32_t x546 = UINT32_MAX;
	static int8_t x547 = INT8_MIN;
	static int8_t x548 = -1;
	static volatile uint32_t t101 = 7U;

    t101 = ((x545/(x546&x547))&x548);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x549 = UINT16_MAX;
	static uint32_t x551 = UINT32_MAX;
	uint8_t x552 = UINT8_MAX;
	uint32_t t102 = 303971U;

    t102 = ((x549/(x550&x551))&x552);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x553 = 15U;
	uint8_t x554 = 11U;
	volatile int8_t x555 = -1;
	static uint8_t x556 = 5U;
	volatile int32_t t103 = -174521;

    t103 = ((x553/(x554&x555))&x556);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x561 = 77U;
	static uint64_t x562 = 5138892546303LLU;
	int8_t x563 = 13;
	uint8_t x564 = 0U;
	uint64_t t104 = 1469700122LLU;

    t104 = ((x561/(x562&x563))&x564);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x565 = 12387478046660498LLU;
	int16_t x566 = -480;
	int16_t x567 = 2278;
	int64_t x568 = INT64_MIN;
	static uint64_t t105 = 343LLU;

    t105 = ((x565/(x566&x567))&x568);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x569 = -2;
	int16_t x570 = 5362;
	static int64_t x571 = 3466770805053LL;
	uint8_t x572 = 0U;

    t106 = ((x569/(x570&x571))&x572);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x573 = 1;
	int16_t x574 = INT16_MIN;
	uint32_t x575 = 95350U;
	static uint8_t x576 = 5U;
	static uint32_t t107 = 34U;

    t107 = ((x573/(x574&x575))&x576);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x577 = 100;
	int8_t x578 = INT8_MIN;
	int16_t x580 = 6;
	volatile int32_t t108 = -576;

    t108 = ((x577/(x578&x579))&x580);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x581 = 52U;
	int16_t x582 = -18;
	static int32_t x584 = -1;
	static volatile int32_t t109 = -223614;

    t109 = ((x581/(x582&x583))&x584);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x585 = INT16_MIN;
	volatile int32_t x586 = 5835;
	int32_t x587 = 81;
	int32_t x588 = 0;
	int32_t t110 = -698913754;

    t110 = ((x585/(x586&x587))&x588);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x589 = 153225305584617LLU;
	static int16_t x590 = INT16_MIN;
	volatile int64_t x592 = 4199825247LL;
	volatile uint64_t t111 = 11326695641LLU;

    t111 = ((x589/(x590&x591))&x592);

    if (t111 != 575939162LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x594 = INT64_MAX;
	volatile int8_t x595 = INT8_MAX;
	int8_t x596 = INT8_MIN;
	static int64_t t112 = -11LL;

    t112 = ((x593/(x594&x595))&x596);

    if (t112 != -128LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x601 = -1;
	volatile uint16_t x603 = 15U;
	static int16_t x604 = INT16_MIN;
	volatile int32_t t113 = -3075;

    t113 = ((x601/(x602&x603))&x604);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x606 = -1;
	static volatile int8_t x608 = -53;
	volatile uint32_t t114 = 43452U;

    t114 = ((x605/(x606&x607))&x608);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x609 = -1;
	volatile int16_t x610 = INT16_MIN;
	static int32_t x611 = INT32_MIN;
	int16_t x612 = 4873;
	static int32_t t115 = -939613825;

    t115 = ((x609/(x610&x611))&x612);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x614 = 1;
	uint32_t x615 = UINT32_MAX;
	volatile int64_t t116 = 3173LL;

    t116 = ((x613/(x614&x615))&x616);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x617 = INT16_MAX;
	int64_t x618 = 441715LL;
	int64_t x620 = INT64_MIN;

    t117 = ((x617/(x618&x619))&x620);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x621 = 29485U;
	int32_t x622 = INT32_MAX;
	static int8_t x623 = INT8_MAX;
	static uint8_t x624 = 76U;
	static uint32_t t118 = 1104U;

    t118 = ((x621/(x622&x623))&x624);

    if (t118 != 72U) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x625 = -1;
	int8_t x626 = -1;
	uint64_t x627 = 1822521515459684LLU;
	static int64_t x628 = 351174865982LL;
	volatile uint64_t t119 = 8346514917LLU;

    t119 = ((x625/(x626&x627))&x628);

    if (t119 != 9224LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x637 = INT64_MIN;
	volatile int8_t x639 = INT8_MIN;
	static int16_t x640 = INT16_MIN;

    t120 = ((x637/(x638&x639))&x640);

    if (t120 != -282578800181248LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x642 = -14;
	int16_t x644 = 113;
	static int32_t t121 = 10;

    t121 = ((x641/(x642&x643))&x644);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x645 = INT8_MIN;
	static uint8_t x646 = 56U;
	static volatile int8_t x647 = -15;
	int16_t x648 = -1;
	volatile int32_t t122 = 5244;

    t122 = ((x645/(x646&x647))&x648);

    if (t122 != -2) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x653 = INT8_MIN;
	int64_t x654 = INT64_MIN;
	int16_t x655 = INT16_MIN;
	static volatile int64_t t123 = 1LL;

    t123 = ((x653/(x654&x655))&x656);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x657 = INT32_MIN;
	uint64_t x658 = UINT64_MAX;
	int16_t x659 = INT16_MIN;
	static uint16_t x660 = 1423U;
	uint64_t t124 = 126LLU;

    t124 = ((x657/(x658&x659))&x660);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x661 = 1170LLU;
	static uint8_t x662 = 8U;
	int64_t x664 = -38912548377996LL;
	volatile uint64_t t125 = 9266169274LLU;

    t125 = ((x661/(x662&x663))&x664);

    if (t125 != 16LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x677 = INT16_MIN;
	uint64_t x678 = 12615196446LLU;
	static uint64_t x679 = 375800052LLU;
	int8_t x680 = -58;

    t126 = ((x677/(x678&x679))&x680);

    if (t126 != 172050687110LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x687 = -3036;
	int64_t x688 = INT64_MAX;
	int64_t t127 = 0LL;

    t127 = ((x685/(x686&x687))&x688);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x689 = INT32_MIN;
	static int32_t x690 = 60753;
	int8_t x691 = INT8_MIN;
	static int8_t x692 = -1;
	int32_t t128 = 38;

    t128 = ((x689/(x690&x691))&x692);

    if (t128 != -35394) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x693 = -1;
	int16_t x695 = INT16_MIN;
	uint32_t x696 = UINT32_MAX;
	volatile uint32_t t129 = 28U;

    t129 = ((x693/(x694&x695))&x696);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x705 = -1;
	volatile uint8_t x707 = UINT8_MAX;
	volatile int64_t t130 = 16696614033LL;

    t130 = ((x705/(x706&x707))&x708);

    if (t130 != 84215045LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x713 = 13U;
	volatile int32_t x714 = -1;
	static volatile uint32_t x715 = 1134U;
	int8_t x716 = INT8_MIN;

    t131 = ((x713/(x714&x715))&x716);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x717 = 8;
	uint64_t x718 = 349025672LLU;
	static uint32_t x719 = 962812600U;
	uint16_t x720 = 765U;
	volatile uint64_t t132 = 1636LLU;

    t132 = ((x717/(x718&x719))&x720);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x721 = 13U;
	int8_t x722 = INT8_MIN;
	int64_t x723 = INT64_MAX;
	int16_t x724 = INT16_MIN;
	int64_t t133 = 3309490942624LL;

    t133 = ((x721/(x722&x723))&x724);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x725 = INT8_MIN;
	int16_t x726 = -1;
	volatile uint32_t x727 = 2494241U;
	int64_t x728 = INT64_MIN;
	int64_t t134 = 13534255LL;

    t134 = ((x725/(x726&x727))&x728);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x730 = UINT32_MAX;
	int8_t x731 = INT8_MIN;
	static int32_t x732 = INT32_MAX;
	static volatile uint32_t t135 = 805140U;

    t135 = ((x729/(x730&x731))&x732);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x733 = UINT32_MAX;
	int8_t x734 = INT8_MAX;
	int64_t x736 = 117202437340051935LL;
	volatile int64_t t136 = 450721977646LL;

    t136 = ((x733/(x734&x735))&x736);

    if (t136 != 264208LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x737 = UINT16_MAX;
	volatile uint16_t x739 = UINT16_MAX;
	int64_t x740 = -56396386LL;
	int64_t t137 = 466420623496450LL;

    t137 = ((x737/(x738&x739))&x740);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x743 = 65U;
	static int32_t x744 = -1;
	uint32_t t138 = 8844U;

    t138 = ((x741/(x742&x743))&x744);

    if (t138 != 58889488U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x749 = INT16_MAX;
	static int32_t x750 = INT32_MAX;
	static volatile int8_t x751 = 1;
	int32_t x752 = -1;
	int32_t t139 = -57729677;

    t139 = ((x749/(x750&x751))&x752);

    if (t139 != 32767) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x754 = INT8_MIN;
	uint64_t x755 = 2109LLU;
	uint16_t x756 = 484U;
	uint64_t t140 = 1394187127085025991LLU;

    t140 = ((x753/(x754&x755))&x756);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x757 = 437275341LLU;
	static int32_t x758 = 3;
	uint16_t x759 = 11U;
	int64_t x760 = INT64_MIN;
	volatile uint64_t t141 = 28643154LLU;

    t141 = ((x757/(x758&x759))&x760);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x761 = UINT64_MAX;
	int64_t x763 = INT64_MAX;
	uint32_t x764 = 210509U;
	uint64_t t142 = 51678776LLU;

    t142 = ((x761/(x762&x763))&x764);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x769 = UINT16_MAX;
	int16_t x770 = INT16_MIN;
	static int32_t x771 = INT32_MIN;
	int8_t x772 = INT8_MAX;
	volatile int32_t t143 = -1333;

    t143 = ((x769/(x770&x771))&x772);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x777 = -1;
	int16_t x779 = INT16_MIN;
	static volatile int8_t x780 = INT8_MAX;
	int32_t t144 = 6;

    t144 = ((x777/(x778&x779))&x780);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x781 = 13U;
	int8_t x782 = INT8_MAX;
	int32_t x783 = -3;
	uint32_t x784 = UINT32_MAX;
	volatile uint32_t t145 = 402U;

    t145 = ((x781/(x782&x783))&x784);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x785 = INT64_MIN;
	static int32_t x786 = INT32_MIN;
	uint32_t x787 = UINT32_MAX;
	volatile int32_t x788 = 224323;
	volatile int64_t t146 = 301246754LL;

    t146 = ((x785/(x786&x787))&x788);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x793 = 7504LLU;
	static uint8_t x794 = UINT8_MAX;
	uint8_t x795 = UINT8_MAX;
	volatile uint32_t x796 = UINT32_MAX;
	volatile uint64_t t147 = 33876545819LLU;

    t147 = ((x793/(x794&x795))&x796);

    if (t147 != 29LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x803 = 25;
	volatile int32_t x804 = -178512263;
	int32_t t148 = -4640;

    t148 = ((x801/(x802&x803))&x804);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x806 = 200239276909514026LL;
	uint64_t x807 = UINT64_MAX;
	volatile uint64_t t149 = 124LLU;

    t149 = ((x805/(x806&x807))&x808);

    if (t149 != 28LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x809 = 3;
	int64_t x810 = INT64_MIN;
	int16_t x811 = INT16_MIN;
	volatile int64_t t150 = -1LL;

    t150 = ((x809/(x810&x811))&x812);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x813 = INT8_MIN;
	static uint16_t x814 = 1U;
	static int32_t x816 = 2029;
	uint32_t t151 = 65613U;

    t151 = ((x813/(x814&x815))&x816);

    if (t151 != 1920U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x817 = 2288770786502377LLU;
	int8_t x819 = INT8_MIN;
	int64_t x820 = INT64_MIN;
	volatile uint64_t t152 = 5589013031LLU;

    t152 = ((x817/(x818&x819))&x820);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x823 = INT16_MAX;
	int8_t x824 = INT8_MIN;
	static uint32_t t153 = 443U;

    t153 = ((x821/(x822&x823))&x824);

    if (t153 != 384U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x825 = 2852611716LLU;
	int32_t x826 = 7;
	static int16_t x827 = 4;
	uint64_t t154 = 820LLU;

    t154 = ((x825/(x826&x827))&x828);

    if (t154 != 713152929LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x833 = INT8_MIN;
	static uint16_t x834 = UINT16_MAX;
	int16_t x835 = 37;
	int64_t x836 = 3938499968281LL;
	volatile int64_t t155 = -2218955051274511LL;

    t155 = ((x833/(x834&x835))&x836);

    if (t155 != 3938499968281LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x840 = 310U;
	uint32_t t156 = 28708405U;

    t156 = ((x837/(x838&x839))&x840);

    if (t156 != 34U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x842 = -15131;
	int16_t x843 = INT16_MIN;
	uint8_t x844 = UINT8_MAX;
	static int32_t t157 = 1;

    t157 = ((x841/(x842&x843))&x844);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x845 = 2463U;
	volatile int32_t x846 = INT32_MIN;
	static volatile uint64_t x847 = UINT64_MAX;
	volatile uint32_t x848 = UINT32_MAX;

    t158 = ((x845/(x846&x847))&x848);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x857 = INT16_MIN;
	uint64_t x858 = 48055001618120LLU;
	int8_t x859 = -1;
	uint64_t x860 = 113042616394337LLU;
	uint64_t t159 = 104212LLU;

    t159 = ((x857/(x858&x859))&x860);

    if (t159 != 295521LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x861 = UINT16_MAX;
	int16_t x862 = -1;
	static volatile int32_t t160 = 253;

    t160 = ((x861/(x862&x863))&x864);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x865 = UINT8_MAX;
	int64_t x866 = INT64_MAX;
	uint64_t x867 = UINT64_MAX;
	volatile int64_t x868 = INT64_MIN;

    t161 = ((x865/(x866&x867))&x868);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x869 = 352002;
	uint16_t x871 = 14669U;
	int32_t t162 = -136;

    t162 = ((x869/(x870&x871))&x872);

    if (t162 != 24) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x873 = INT64_MIN;
	static volatile int8_t x874 = INT8_MIN;
	int64_t x876 = 0LL;

    t163 = ((x873/(x874&x875))&x876);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x881 = 0U;
	uint64_t x882 = 21580761709LLU;
	volatile int64_t x883 = INT64_MAX;
	uint32_t x884 = UINT32_MAX;
	uint64_t t164 = 184225059LLU;

    t164 = ((x881/(x882&x883))&x884);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x885 = INT16_MIN;
	int8_t x886 = INT8_MIN;
	int64_t x887 = INT64_MAX;
	int16_t x888 = 29;
	int64_t t165 = 1486762304469342LL;

    t165 = ((x885/(x886&x887))&x888);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x901 = 25U;
	volatile uint16_t x902 = 1U;
	int32_t x903 = INT32_MAX;
	volatile int16_t x904 = INT16_MIN;
	int32_t t166 = -73;

    t166 = ((x901/(x902&x903))&x904);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x905 = INT8_MAX;
	uint32_t x906 = UINT32_MAX;
	static int32_t x908 = INT32_MAX;
	volatile int64_t t167 = 156139286862056595LL;

    t167 = ((x905/(x906&x907))&x908);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x913 = INT16_MAX;
	static uint16_t x916 = 30U;
	int32_t t168 = -2;

    t168 = ((x913/(x914&x915))&x916);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x921 = 6LLU;
	uint16_t x922 = UINT16_MAX;
	uint32_t x923 = UINT32_MAX;
	uint16_t x924 = UINT16_MAX;
	volatile uint64_t t169 = 2056100499LLU;

    t169 = ((x921/(x922&x923))&x924);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint16_t x925 = 489U;
	static int16_t x928 = INT16_MIN;

    t170 = ((x925/(x926&x927))&x928);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x929 = INT64_MIN;
	static uint64_t x931 = UINT64_MAX;
	int8_t x932 = INT8_MIN;
	uint64_t t171 = 15365LLU;

    t171 = ((x929/(x930&x931))&x932);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x933 = 82;
	int64_t x934 = -195232675997116388LL;
	volatile uint16_t x935 = 9U;
	int64_t x936 = INT64_MAX;
	volatile int64_t t172 = 13049859493LL;

    t172 = ((x933/(x934&x935))&x936);

    if (t172 != 10LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x937 = 6446U;
	int8_t x938 = -1;
	int64_t x939 = -1LL;
	static int16_t x940 = INT16_MIN;
	static volatile int64_t t173 = 115791983LL;

    t173 = ((x937/(x938&x939))&x940);

    if (t173 != -32768LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x946 = 1303;
	uint32_t x947 = 3U;
	uint8_t x948 = UINT8_MAX;
	int64_t t174 = 58323742078LL;

    t174 = ((x945/(x946&x947))&x948);

    if (t174 != 170LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x949 = 0;
	static int16_t x950 = -1129;
	int16_t x951 = INT16_MAX;
	volatile int32_t t175 = 547;

    t175 = ((x949/(x950&x951))&x952);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x953 = UINT16_MAX;
	static int8_t x955 = INT8_MAX;
	static int32_t x956 = INT32_MAX;
	volatile uint32_t t176 = 738U;

    t176 = ((x953/(x954&x955))&x956);

    if (t176 != 1424U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x957 = INT64_MIN;
	int16_t x958 = INT16_MIN;
	volatile uint32_t x960 = 4059257U;

    t177 = ((x957/(x958&x959))&x960);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x961 = 16058799857438693LLU;
	int64_t x962 = -1LL;
	int8_t x964 = -54;
	uint64_t t178 = 262980331212893LLU;

    t178 = ((x961/(x962&x963))&x964);

    if (t178 != 245041578626LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x966 = INT16_MIN;
	int64_t x967 = -1LL;
	uint64_t t179 = 686458944191LLU;

    t179 = ((x965/(x966&x967))&x968);

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x969 = INT16_MIN;
	int8_t x970 = -26;
	int64_t x971 = INT64_MAX;
	int8_t x972 = -1;
	volatile int64_t t180 = 52LL;

    t180 = ((x969/(x970&x971))&x972);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x973 = -1;
	uint16_t x974 = UINT16_MAX;
	int8_t x976 = INT8_MIN;
	volatile int32_t t181 = -4;

    t181 = ((x973/(x974&x975))&x976);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x977 = INT32_MAX;
	uint32_t x978 = UINT32_MAX;
	uint32_t x979 = UINT32_MAX;
	int8_t x980 = -1;
	uint32_t t182 = 11170U;

    t182 = ((x977/(x978&x979))&x980);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x981 = -1;
	int8_t x982 = -1;
	int32_t x983 = 59576122;
	uint8_t x984 = 18U;

    t183 = ((x981/(x982&x983))&x984);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x985 = -19583761242LL;
	static int16_t x986 = INT16_MIN;
	uint64_t x987 = UINT64_MAX;
	static int8_t x988 = INT8_MAX;
	uint64_t t184 = 6007935253435033LLU;

    t184 = ((x985/(x986&x987))&x988);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x993 = 6;
	int64_t x994 = 532LL;
	volatile uint64_t x995 = 15589282494336LLU;
	uint64_t t185 = 3049417123LLU;

    t185 = ((x993/(x994&x995))&x996);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x1001 = 9311U;
	int64_t x1002 = 503941467175029488LL;
	uint64_t x1003 = 130688122983LLU;
	static volatile int8_t x1004 = INT8_MIN;
	static volatile uint64_t t186 = 476504094LLU;

    t186 = ((x1001/(x1002&x1003))&x1004);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x1009 = UINT64_MAX;
	int16_t x1010 = INT16_MAX;
	int8_t x1011 = 4;

    t187 = ((x1009/(x1010&x1011))&x1012);

    if (t187 != 2147483647LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1013 = -20LL;
	int16_t x1014 = INT16_MIN;
	static int8_t x1015 = -1;
	static int16_t x1016 = INT16_MIN;
	static volatile int64_t t188 = 1LL;

    t188 = ((x1013/(x1014&x1015))&x1016);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1017 = UINT16_MAX;
	int64_t x1018 = -1LL;
	int16_t x1020 = -1;
	int64_t t189 = 13410044817LL;

    t189 = ((x1017/(x1018&x1019))&x1020);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1021 = INT16_MIN;
	static uint16_t x1022 = 136U;

    t190 = ((x1021/(x1022&x1023))&x1024);

    if (t190 != 16LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1025 = UINT8_MAX;
	int8_t x1026 = INT8_MAX;
	volatile int16_t x1028 = -243;
	static int32_t t191 = -4241;

    t191 = ((x1025/(x1026&x1027))&x1028);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1034 = 30U;
	uint8_t x1035 = 54U;
	int8_t x1036 = -9;
	volatile int64_t t192 = -18976LL;

    t192 = ((x1033/(x1034&x1035))&x1036);

    if (t192 != 91703LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1037 = -31;
	int16_t x1038 = INT16_MAX;
	uint8_t x1039 = 23U;
	volatile int16_t x1040 = INT16_MIN;
	int32_t t193 = 0;

    t193 = ((x1037/(x1038&x1039))&x1040);

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1047 = INT64_MAX;
	int64_t t194 = 209185273352LL;

    t194 = ((x1045/(x1046&x1047))&x1048);

    if (t194 != -394208193888LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1049 = 79U;
	int16_t x1050 = -1;
	uint8_t x1051 = UINT8_MAX;
	static volatile uint32_t x1052 = 76749687U;
	uint32_t t195 = 4U;

    t195 = ((x1049/(x1050&x1051))&x1052);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1053 = -1;
	int8_t x1055 = INT8_MAX;
	int8_t x1056 = -63;
	int32_t t196 = -22212;

    t196 = ((x1053/(x1054&x1055))&x1056);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1057 = INT32_MAX;
	int8_t x1058 = INT8_MAX;
	volatile int32_t x1059 = INT32_MAX;
	volatile uint32_t x1060 = 499471959U;
	uint32_t t197 = 29927U;

    t197 = ((x1057/(x1058&x1059))&x1060);

    if (t197 != 16778240U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1062 = INT8_MIN;
	int64_t x1063 = -17061094867LL;
	int64_t x1064 = 0LL;

    t198 = ((x1061/(x1062&x1063))&x1064);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1065 = 1U;
	int64_t x1067 = INT64_MAX;

    t199 = ((x1065/(x1066&x1067))&x1068);

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

