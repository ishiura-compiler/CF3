
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

int16_t x2 = INT16_MAX;
static uint8_t x6 = UINT8_MAX;
static volatile uint32_t t1 = 30016582U;
static int16_t x11 = 124;
static uint16_t x14 = 821U;
int32_t x15 = INT32_MIN;
static uint32_t x20 = 16U;
volatile int16_t x24 = 27;
int16_t x25 = -15;
int16_t x38 = INT16_MIN;
static volatile int64_t t10 = 48985211552LL;
int8_t x45 = 25;
int64_t t12 = -214723859LL;
uint8_t x53 = 0U;
int8_t x56 = INT8_MIN;
static int16_t x59 = -1;
volatile int8_t x63 = -1;
int32_t x81 = INT32_MAX;
static int32_t x82 = -1;
uint64_t x88 = 13570014881LLU;
volatile int8_t x89 = INT8_MIN;
int32_t t21 = -791821;
int32_t t23 = -18868886;
static int8_t x101 = INT8_MAX;
int16_t x103 = INT16_MIN;
volatile uint16_t x105 = 39U;
int16_t x107 = -1;
uint8_t x113 = 77U;
int16_t x119 = INT16_MIN;
int8_t x122 = INT8_MIN;
int32_t x124 = -82883;
static uint32_t x126 = 3U;
int32_t x130 = INT32_MIN;
int64_t x131 = INT64_MIN;
static int32_t x132 = 4299;
static int8_t x148 = -1;
int8_t x150 = 1;
static volatile int32_t x151 = INT32_MAX;
uint16_t x154 = 456U;
int64_t x156 = -13732036084LL;
volatile int32_t x157 = -1;
uint8_t x164 = UINT8_MAX;
int8_t x176 = -1;
volatile int32_t t41 = -22475162;
static volatile int32_t x191 = 933678788;
static volatile int16_t x193 = INT16_MIN;
int64_t t46 = 20017727LL;
int32_t x199 = INT32_MIN;
int32_t t51 = 960834394;
static int8_t x228 = -8;
int32_t t53 = -3;
static uint64_t x241 = 87033702690LLU;
int8_t x244 = -1;
int64_t t57 = -560739LL;
int32_t x256 = 879484731;
volatile int32_t t59 = -1;
volatile int32_t t61 = 11257;
static int64_t x272 = INT64_MAX;
int8_t x273 = INT8_MIN;
int32_t x280 = INT32_MAX;
int32_t x281 = -1;
int64_t x284 = INT64_MAX;
static int8_t x295 = 1;
uint64_t x312 = 28352LLU;
static int64_t x314 = -24248990LL;
uint64_t x328 = UINT64_MAX;
static uint32_t x335 = 196000U;
int8_t x339 = INT8_MIN;
volatile int32_t t78 = -1;
int16_t x347 = -1;
uint8_t x353 = 14U;
uint16_t x354 = UINT16_MAX;
volatile int32_t x356 = INT32_MAX;
int32_t t81 = 660;
int64_t x361 = -1247LL;
static int32_t t82 = -329461;
volatile int16_t x377 = 464;
int8_t x380 = INT8_MIN;
static volatile int64_t t86 = 125LL;
int64_t x394 = INT64_MIN;
volatile uint32_t x398 = UINT32_MAX;
uint16_t x400 = 9U;
int8_t x401 = -1;
int32_t x406 = INT32_MAX;
int16_t x407 = -43;
volatile int8_t x408 = 24;
volatile uint64_t x409 = UINT64_MAX;
uint8_t x410 = 0U;
int32_t t93 = 5328725;
int16_t x421 = INT16_MIN;
static volatile int32_t t96 = 3;
uint8_t x437 = 0U;
int8_t x442 = INT8_MIN;
static uint16_t x443 = 161U;
int64_t x460 = -1LL;
static volatile uint16_t x462 = 0U;
uint64_t x465 = UINT64_MAX;
volatile int64_t x469 = -572LL;
static int32_t t106 = -13;
int32_t x475 = -1;
int64_t x486 = -8LL;
volatile int32_t t110 = 223283923;
static uint32_t x489 = 4U;
volatile uint32_t t112 = 193788U;
int16_t x499 = -1;
int16_t x500 = INT16_MIN;
static int32_t x506 = -256621640;
int64_t x507 = -1352138828121LL;
volatile uint64_t t115 = 13065116374LLU;
static int64_t x510 = INT64_MAX;
int32_t t116 = -75415;
int32_t x515 = INT32_MIN;
uint16_t x516 = UINT16_MAX;
static int8_t x519 = INT8_MIN;
volatile int32_t t118 = 1758;
volatile uint32_t x529 = 206937U;
int64_t t121 = 4088067LL;
volatile int32_t t122 = -20079;
uint32_t t125 = 4349U;
volatile int16_t x553 = 239;
int64_t x569 = INT64_MIN;
volatile uint32_t x572 = 18U;
volatile int8_t x573 = 3;
int16_t x575 = -1;
static int16_t x579 = INT16_MIN;
int64_t x591 = -1LL;
uint32_t x604 = UINT32_MAX;
static uint32_t x608 = UINT32_MAX;
static uint32_t t137 = 31U;
uint16_t x618 = UINT16_MAX;
int32_t t140 = 29236;
int8_t x629 = 1;
volatile int32_t x631 = -1;
int32_t x633 = INT32_MAX;
volatile uint16_t x639 = UINT16_MAX;
volatile int32_t t145 = -268321883;
static int64_t x646 = INT64_MAX;
int8_t x655 = INT8_MIN;
static int64_t x661 = INT64_MAX;
int64_t x666 = 2872375084207191495LL;
static volatile int32_t t152 = 43473617;
volatile uint8_t x669 = 104U;
int32_t t153 = 1045337;
int16_t x675 = 6119;
uint8_t x677 = 107U;
int64_t x680 = 1402417LL;
volatile int64_t t155 = 24319523930LL;
uint16_t x681 = UINT16_MAX;
uint8_t x682 = 9U;
volatile int32_t t156 = -487215552;
int64_t x685 = INT64_MAX;
int8_t x692 = -1;
uint64_t x693 = UINT64_MAX;
static int32_t t159 = 4280;
int8_t x704 = -1;
volatile int32_t t162 = 1;
volatile uint16_t x718 = UINT16_MAX;
volatile int16_t x721 = INT16_MIN;
uint64_t x725 = 250013396LLU;
int32_t x730 = INT32_MIN;
uint64_t x738 = 10879598861766LLU;
static volatile int32_t t169 = -8;
volatile uint32_t t171 = 976149725U;
int32_t x759 = -1;
int16_t x762 = -1;
int32_t t173 = 7;
int32_t t175 = -13442170;
int8_t x775 = INT8_MAX;
uint16_t x776 = UINT16_MAX;
volatile int32_t t176 = 179830748;
volatile int16_t x777 = -1;
uint8_t x780 = 62U;
volatile int32_t t177 = 676926258;
static int64_t x783 = 7954117714639218LL;
volatile uint16_t x788 = 403U;
int64_t x790 = INT64_MIN;
int32_t t180 = -196;
int64_t x794 = INT64_MIN;
int32_t x796 = -1;
int64_t x797 = INT64_MAX;
static int64_t x805 = INT64_MIN;
static int32_t x811 = -227;
volatile int32_t t184 = 10614770;
uint32_t x827 = 24388485U;
volatile int8_t x831 = INT8_MIN;
static volatile int32_t x832 = -1;
int32_t t190 = 0;
int8_t x838 = -32;
static int16_t x839 = INT16_MAX;
uint16_t x849 = 43U;
volatile uint8_t x854 = UINT8_MAX;
int8_t x855 = INT8_MIN;
volatile uint32_t x861 = UINT32_MAX;
static int32_t t198 = 445415;


void f0(void) {
    	int32_t x1 = -35343;
	volatile int8_t x3 = INT8_MAX;
	volatile int32_t x4 = -1;
	static int32_t t0 = -7;

    t0 = ((x1==(x2==x3))-x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 109U;
	static volatile int64_t x7 = -1LL;
	uint32_t x8 = UINT32_MAX;

    t1 = ((x5==(x6==x7))-x8);

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	int64_t x10 = -1LL;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -64606515;

    t2 = ((x9==(x10==x11))-x12);

    if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 203218783243595907LLU;
	volatile int16_t x16 = INT16_MAX;
	volatile int32_t t3 = -34;

    t3 = ((x13==(x14==x15))-x16);

    if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = UINT8_MAX;
	volatile int32_t x18 = -1;
	static int32_t x19 = INT32_MIN;
	volatile uint32_t t4 = 924571981U;

    t4 = ((x17==(x18==x19))-x20);

    if (t4 != 4294967280U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	volatile uint32_t x22 = 18535U;
	static int16_t x23 = 0;
	volatile int32_t t5 = -381479;

    t5 = ((x21==(x22==x23))-x24);

    if (t5 != -27) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x26 = UINT32_MAX;
	uint32_t x27 = 272574316U;
	int64_t x28 = -4065537218869LL;
	volatile int64_t t6 = 73348LL;

    t6 = ((x25==(x26==x27))-x28);

    if (t6 != 4065537218869LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	uint16_t x30 = 333U;
	int64_t x31 = INT64_MIN;
	static volatile int64_t x32 = -2705998397LL;
	volatile int64_t t7 = -12LL;

    t7 = ((x29==(x30==x31))-x32);

    if (t7 != 2705998397LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -2;
	static uint32_t x34 = 441713U;
	uint64_t x35 = 28LLU;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 97;

    t8 = ((x33==(x34==x35))-x36);

    if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 59U;
	static volatile int32_t x39 = -1;
	uint16_t x40 = 0U;
	volatile int32_t t9 = 12608;

    t9 = ((x37==(x38==x39))-x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = 21667352U;
	int64_t x42 = INT64_MAX;
	uint32_t x43 = UINT32_MAX;
	static int64_t x44 = 267839LL;

    t10 = ((x41==(x42==x43))-x44);

    if (t10 != -267839LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x46 = 6;
	volatile int16_t x47 = -7540;
	int64_t x48 = -1LL;
	int64_t t11 = 50132LL;

    t11 = ((x45==(x46==x47))-x48);

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = INT8_MAX;
	int32_t x50 = INT32_MAX;
	static uint16_t x51 = 1U;
	volatile int64_t x52 = -1LL;

    t12 = ((x49==(x50==x51))-x52);

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = -1;
	uint64_t x55 = 52010005964LLU;
	volatile int32_t t13 = -190778504;

    t13 = ((x53==(x54==x55))-x56);

    if (t13 != 129) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = UINT32_MAX;
	uint32_t x58 = UINT32_MAX;
	volatile int32_t x60 = 25369351;
	volatile int32_t t14 = 16591;

    t14 = ((x57==(x58==x59))-x60);

    if (t14 != -25369351) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	int16_t x62 = INT16_MIN;
	static uint16_t x64 = UINT16_MAX;
	static volatile int32_t t15 = -27;

    t15 = ((x61==(x62==x63))-x64);

    if (t15 != -65535) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x69 = INT32_MIN;
	int64_t x70 = 62LL;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t16 = -44;

    t16 = ((x69==(x70==x71))-x72);

    if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x73 = UINT64_MAX;
	int32_t x74 = -1;
	int32_t x75 = INT32_MIN;
	uint8_t x76 = 4U;
	volatile int32_t t17 = 60932;

    t17 = ((x73==(x74==x75))-x76);

    if (t17 != -4) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = -1;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = INT16_MIN;
	static int64_t x80 = -170920221729LL;
	int64_t t18 = 14791357096480LL;

    t18 = ((x77==(x78==x79))-x80);

    if (t18 != 170920221729LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x83 = 24212U;
	volatile int16_t x84 = INT16_MIN;
	int32_t t19 = -605869834;

    t19 = ((x81==(x82==x83))-x84);

    if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = 16;
	uint64_t x86 = 3630379950330LLU;
	volatile int16_t x87 = 388;
	static volatile uint64_t t20 = 8026310233551LLU;

    t20 = ((x85==(x86==x87))-x88);

    if (t20 != 18446744060139536735LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x90 = 1960430925242072112LLU;
	int32_t x91 = INT32_MIN;
	int16_t x92 = INT16_MIN;

    t21 = ((x89==(x90==x91))-x92);

    if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = -1;
	static int8_t x94 = INT8_MIN;
	int16_t x95 = -1;
	int16_t x96 = INT16_MIN;
	volatile int32_t t22 = 120163055;

    t22 = ((x93==(x94==x95))-x96);

    if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = -1;
	uint16_t x98 = 6U;
	static int32_t x99 = 0;
	uint8_t x100 = 1U;

    t23 = ((x97==(x98==x99))-x100);

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x102 = INT64_MAX;
	volatile int16_t x104 = 1731;
	volatile int32_t t24 = 835499045;

    t24 = ((x101==(x102==x103))-x104);

    if (t24 != -1731) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x106 = -1;
	int8_t x108 = INT8_MIN;
	volatile int32_t t25 = 158361;

    t25 = ((x105==(x106==x107))-x108);

    if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MAX;
	static int8_t x110 = INT8_MIN;
	volatile int8_t x111 = 20;
	static uint8_t x112 = 28U;
	static int32_t t26 = 1;

    t26 = ((x109==(x110==x111))-x112);

    if (t26 != -28) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x114 = -1LL;
	int8_t x115 = -1;
	volatile int32_t x116 = -1;
	int32_t t27 = 0;

    t27 = ((x113==(x114==x115))-x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = 38;
	int8_t x118 = INT8_MIN;
	int64_t x120 = -1LL;
	int64_t t28 = -3LL;

    t28 = ((x117==(x118==x119))-x120);

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MAX;
	volatile uint16_t x123 = 893U;
	volatile int32_t t29 = 53;

    t29 = ((x121==(x122==x123))-x124);

    if (t29 != 82883) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x125 = INT32_MIN;
	uint64_t x127 = 438688LLU;
	static uint64_t x128 = 0LLU;
	uint64_t t30 = 0LLU;

    t30 = ((x125==(x126==x127))-x128);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x129 = INT8_MIN;
	int32_t t31 = -206738;

    t31 = ((x129==(x130==x131))-x132);

    if (t31 != -4299) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint16_t x133 = UINT16_MAX;
	static uint64_t x134 = UINT64_MAX;
	volatile int16_t x135 = INT16_MIN;
	int16_t x136 = -7;
	volatile int32_t t32 = -1;

    t32 = ((x133==(x134==x135))-x136);

    if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x137 = 1013957856;
	int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MIN;
	volatile int16_t x140 = -1;
	int32_t t33 = -358754;

    t33 = ((x137==(x138==x139))-x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x145 = 13;
	static int16_t x146 = INT16_MIN;
	volatile int64_t x147 = 497LL;
	int32_t t34 = 11067286;

    t34 = ((x145==(x146==x147))-x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x149 = UINT64_MAX;
	static volatile uint32_t x152 = 514549553U;
	uint32_t t35 = 652445U;

    t35 = ((x149==(x150==x151))-x152);

    if (t35 != 3780417743U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = INT64_MIN;
	int32_t x155 = INT32_MAX;
	static volatile int64_t t36 = -160LL;

    t36 = ((x153==(x154==x155))-x156);

    if (t36 != 13732036084LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x158 = UINT64_MAX;
	volatile uint16_t x159 = 14U;
	int8_t x160 = 16;
	volatile int32_t t37 = 917432126;

    t37 = ((x157==(x158==x159))-x160);

    if (t37 != -16) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x161 = 0U;
	uint32_t x162 = 987325U;
	static uint32_t x163 = 97373239U;
	volatile int32_t t38 = 396;

    t38 = ((x161==(x162==x163))-x164);

    if (t38 != -254) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x165 = 50;
	static uint16_t x166 = 178U;
	int8_t x167 = INT8_MIN;
	int32_t x168 = -1;
	static volatile int32_t t39 = -1;

    t39 = ((x165==(x166==x167))-x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = 2536823;
	uint64_t x170 = 132LLU;
	int64_t x171 = 40703100285LL;
	static uint16_t x172 = 11U;
	volatile int32_t t40 = 1463;

    t40 = ((x169==(x170==x171))-x172);

    if (t40 != -11) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x173 = INT32_MIN;
	int32_t x174 = 1;
	int32_t x175 = INT32_MIN;

    t41 = ((x173==(x174==x175))-x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = INT16_MIN;
	uint16_t x178 = 144U;
	volatile uint8_t x179 = UINT8_MAX;
	uint16_t x180 = UINT16_MAX;
	int32_t t42 = -23212;

    t42 = ((x177==(x178==x179))-x180);

    if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x181 = INT32_MIN;
	int64_t x182 = 954483LL;
	static uint32_t x183 = 468740920U;
	volatile int16_t x184 = -17;
	int32_t t43 = 240;

    t43 = ((x181==(x182==x183))-x184);

    if (t43 != 17) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = INT32_MIN;
	uint8_t x186 = 51U;
	int32_t x187 = 42242969;
	volatile uint16_t x188 = UINT16_MAX;
	int32_t t44 = 1884;

    t44 = ((x185==(x186==x187))-x188);

    if (t44 != -65535) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x189 = 0;
	int8_t x190 = INT8_MIN;
	uint32_t x192 = 1U;
	volatile uint32_t t45 = 696565794U;

    t45 = ((x189==(x190==x191))-x192);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x194 = INT16_MIN;
	static int8_t x195 = INT8_MIN;
	static int64_t x196 = INT64_MAX;

    t46 = ((x193==(x194==x195))-x196);

    if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x197 = 3514U;
	static int64_t x198 = INT64_MIN;
	int16_t x200 = INT16_MIN;
	volatile int32_t t47 = 3666;

    t47 = ((x197==(x198==x199))-x200);

    if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = -2164343272LL;
	static uint8_t x202 = 50U;
	uint32_t x203 = UINT32_MAX;
	uint32_t x204 = 3U;
	uint32_t t48 = 25384156U;

    t48 = ((x201==(x202==x203))-x204);

    if (t48 != 4294967293U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x205 = 49444471U;
	static int8_t x206 = -40;
	volatile int8_t x207 = INT8_MIN;
	uint8_t x208 = 53U;
	int32_t t49 = 3;

    t49 = ((x205==(x206==x207))-x208);

    if (t49 != -53) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x217 = INT32_MAX;
	uint32_t x218 = 62982679U;
	int8_t x219 = INT8_MAX;
	volatile uint32_t x220 = 18U;
	uint32_t t50 = 81132464U;

    t50 = ((x217==(x218==x219))-x220);

    if (t50 != 4294967278U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x221 = -1901LL;
	int16_t x222 = INT16_MIN;
	static int16_t x223 = INT16_MIN;
	int8_t x224 = -17;

    t51 = ((x221==(x222==x223))-x224);

    if (t51 != 17) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x225 = INT8_MIN;
	int16_t x226 = INT16_MAX;
	int64_t x227 = INT64_MIN;
	int32_t t52 = 31068384;

    t52 = ((x225==(x226==x227))-x228);

    if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x229 = 1U;
	uint64_t x230 = 14053382694040154LLU;
	int32_t x231 = -26155430;
	int32_t x232 = -1;

    t53 = ((x229==(x230==x231))-x232);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x233 = -1;
	int64_t x234 = INT64_MIN;
	int8_t x235 = 2;
	volatile int8_t x236 = INT8_MAX;
	static int32_t t54 = -28786;

    t54 = ((x233==(x234==x235))-x236);

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x237 = INT64_MAX;
	int16_t x238 = INT16_MIN;
	uint32_t x239 = UINT32_MAX;
	static int8_t x240 = -1;
	volatile int32_t t55 = 6;

    t55 = ((x237==(x238==x239))-x240);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x242 = INT32_MIN;
	uint64_t x243 = UINT64_MAX;
	volatile int32_t t56 = -14;

    t56 = ((x241==(x242==x243))-x244);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x245 = 296U;
	int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MIN;
	int64_t x248 = -1LL;

    t57 = ((x245==(x246==x247))-x248);

    if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x249 = 8687790U;
	int32_t x250 = 1699611;
	volatile int8_t x251 = 0;
	static volatile uint32_t x252 = 1044206609U;
	volatile uint32_t t58 = 28U;

    t58 = ((x249==(x250==x251))-x252);

    if (t58 != 3250760687U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x253 = INT16_MAX;
	volatile int64_t x254 = INT64_MIN;
	int32_t x255 = 578;

    t59 = ((x253==(x254==x255))-x256);

    if (t59 != -879484731) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x257 = 0U;
	uint8_t x258 = 0U;
	uint64_t x259 = UINT64_MAX;
	static int8_t x260 = INT8_MIN;
	int32_t t60 = 5;

    t60 = ((x257==(x258==x259))-x260);

    if (t60 != 129) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x261 = -433;
	uint64_t x262 = 0LLU;
	static int32_t x263 = INT32_MAX;
	int8_t x264 = INT8_MIN;

    t61 = ((x261==(x262==x263))-x264);

    if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x265 = 146076629;
	int64_t x266 = INT64_MIN;
	uint16_t x267 = 59U;
	int8_t x268 = -1;
	volatile int32_t t62 = -152;

    t62 = ((x265==(x266==x267))-x268);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x269 = 1U;
	int32_t x270 = 327331;
	int8_t x271 = 27;
	int64_t t63 = 205LL;

    t63 = ((x269==(x270==x271))-x272);

    if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x274 = INT64_MAX;
	uint64_t x275 = 31411105050LLU;
	static uint32_t x276 = 35234073U;
	volatile uint32_t t64 = 2U;

    t64 = ((x273==(x274==x275))-x276);

    if (t64 != 4259733223U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x277 = 16929186591LL;
	int16_t x278 = -1;
	uint8_t x279 = 5U;
	volatile int32_t t65 = 633737769;

    t65 = ((x277==(x278==x279))-x280);

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x282 = 37U;
	volatile uint64_t x283 = 810399822551295239LLU;
	volatile int64_t t66 = 122952205LL;

    t66 = ((x281==(x282==x283))-x284);

    if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = INT32_MIN;
	int64_t x286 = INT64_MIN;
	int16_t x287 = -1;
	int32_t x288 = 262444151;
	int32_t t67 = 0;

    t67 = ((x285==(x286==x287))-x288);

    if (t67 != -262444151) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x293 = -1;
	int32_t x294 = -1;
	uint8_t x296 = 55U;
	volatile int32_t t68 = 22;

    t68 = ((x293==(x294==x295))-x296);

    if (t68 != -55) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x301 = INT8_MAX;
	int8_t x302 = -1;
	int32_t x303 = INT32_MIN;
	static int16_t x304 = INT16_MAX;
	int32_t t69 = 3;

    t69 = ((x301==(x302==x303))-x304);

    if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x305 = INT64_MIN;
	int32_t x306 = INT32_MIN;
	uint16_t x307 = 40U;
	int16_t x308 = INT16_MIN;
	int32_t t70 = -2;

    t70 = ((x305==(x306==x307))-x308);

    if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x309 = INT8_MAX;
	int8_t x310 = -5;
	static volatile int16_t x311 = INT16_MIN;
	uint64_t t71 = 90767666927840LLU;

    t71 = ((x309==(x310==x311))-x312);

    if (t71 != 18446744073709523264LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x313 = INT8_MIN;
	uint16_t x315 = 69U;
	static int16_t x316 = -1;
	volatile int32_t t72 = -5;

    t72 = ((x313==(x314==x315))-x316);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x317 = 1U;
	static volatile uint32_t x318 = UINT32_MAX;
	int16_t x319 = INT16_MAX;
	static volatile int16_t x320 = INT16_MIN;
	int32_t t73 = -806812435;

    t73 = ((x317==(x318==x319))-x320);

    if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x321 = INT16_MIN;
	static uint64_t x322 = 84206884LLU;
	int16_t x323 = INT16_MIN;
	int16_t x324 = 622;
	int32_t t74 = -5;

    t74 = ((x321==(x322==x323))-x324);

    if (t74 != -622) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x325 = 563U;
	uint8_t x326 = 1U;
	int64_t x327 = -1LL;
	volatile uint64_t t75 = 29888724LLU;

    t75 = ((x325==(x326==x327))-x328);

    if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x333 = INT32_MAX;
	volatile uint8_t x334 = UINT8_MAX;
	int16_t x336 = 14;
	static int32_t t76 = -444607934;

    t76 = ((x333==(x334==x335))-x336);

    if (t76 != -14) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x337 = -1;
	static uint32_t x338 = UINT32_MAX;
	static uint8_t x340 = 58U;
	volatile int32_t t77 = 0;

    t77 = ((x337==(x338==x339))-x340);

    if (t77 != -58) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x341 = INT16_MAX;
	int32_t x342 = 1895941;
	int64_t x343 = 28317354331234LL;
	int16_t x344 = INT16_MAX;

    t78 = ((x341==(x342==x343))-x344);

    if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x345 = INT8_MIN;
	volatile uint8_t x346 = 92U;
	static uint8_t x348 = 119U;
	int32_t t79 = 87;

    t79 = ((x345==(x346==x347))-x348);

    if (t79 != -119) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x349 = INT32_MIN;
	int16_t x350 = 625;
	uint32_t x351 = 1065925800U;
	int8_t x352 = INT8_MIN;
	int32_t t80 = -7674;

    t80 = ((x349==(x350==x351))-x352);

    if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x355 = 3246LL;

    t81 = ((x353==(x354==x355))-x356);

    if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x362 = -854555124593LL;
	int64_t x363 = INT64_MAX;
	int8_t x364 = INT8_MIN;

    t82 = ((x361==(x362==x363))-x364);

    if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x365 = -1;
	static int64_t x366 = INT64_MAX;
	static int32_t x367 = -436;
	static uint64_t x368 = 190LLU;
	uint64_t t83 = 926208144950698LLU;

    t83 = ((x365==(x366==x367))-x368);

    if (t83 != 18446744073709551426LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x373 = -1LL;
	int32_t x374 = -101;
	volatile int32_t x375 = INT32_MIN;
	volatile uint32_t x376 = 0U;
	volatile uint32_t t84 = 8713088U;

    t84 = ((x373==(x374==x375))-x376);

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x378 = 15U;
	uint8_t x379 = 25U;
	int32_t t85 = 546709775;

    t85 = ((x377==(x378==x379))-x380);

    if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x381 = INT64_MIN;
	int64_t x382 = 1LL;
	volatile int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MAX;

    t86 = ((x381==(x382==x383))-x384);

    if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x385 = 5U;
	uint32_t x386 = 705U;
	int8_t x387 = INT8_MAX;
	static volatile uint8_t x388 = UINT8_MAX;
	int32_t t87 = 0;

    t87 = ((x385==(x386==x387))-x388);

    if (t87 != -255) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x389 = -1;
	volatile uint64_t x390 = 3LLU;
	int16_t x391 = 214;
	int32_t x392 = -1;
	static int32_t t88 = -1929;

    t88 = ((x389==(x390==x391))-x392);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x393 = -1;
	static int32_t x395 = 571541;
	uint16_t x396 = UINT16_MAX;
	int32_t t89 = 3;

    t89 = ((x393==(x394==x395))-x396);

    if (t89 != -65535) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x397 = INT8_MAX;
	int64_t x399 = INT64_MAX;
	int32_t t90 = 86172;

    t90 = ((x397==(x398==x399))-x400);

    if (t90 != -9) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x402 = INT16_MAX;
	int8_t x403 = 0;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t91 = -31;

    t91 = ((x401==(x402==x403))-x404);

    if (t91 != -65535) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x405 = UINT32_MAX;
	int32_t t92 = -810941;

    t92 = ((x405==(x406==x407))-x408);

    if (t92 != -24) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x411 = 7694LLU;
	volatile int16_t x412 = INT16_MIN;

    t93 = ((x409==(x410==x411))-x412);

    if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x413 = INT32_MIN;
	int64_t x414 = -1LL;
	int64_t x415 = -1LL;
	int16_t x416 = INT16_MIN;
	static volatile int32_t t94 = -288;

    t94 = ((x413==(x414==x415))-x416);

    if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x422 = 34700375272586LLU;
	int32_t x423 = INT32_MAX;
	uint64_t x424 = 4213LLU;
	volatile uint64_t t95 = 677884629456489LLU;

    t95 = ((x421==(x422==x423))-x424);

    if (t95 != 18446744073709547403LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x425 = -1LL;
	volatile int32_t x426 = INT32_MAX;
	uint32_t x427 = UINT32_MAX;
	int16_t x428 = INT16_MIN;

    t96 = ((x425==(x426==x427))-x428);

    if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x429 = 176U;
	int64_t x430 = 41918888LL;
	volatile int64_t x431 = INT64_MIN;
	int32_t x432 = -1;
	int32_t t97 = 76608907;

    t97 = ((x429==(x430==x431))-x432);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x433 = 19U;
	int16_t x434 = INT16_MAX;
	uint16_t x435 = 6U;
	int16_t x436 = -343;
	static volatile int32_t t98 = -810;

    t98 = ((x433==(x434==x435))-x436);

    if (t98 != 343) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x438 = -1LL;
	volatile int64_t x439 = -1LL;
	int32_t x440 = -1;
	volatile int32_t t99 = 204590;

    t99 = ((x437==(x438==x439))-x440);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x441 = INT32_MIN;
	uint16_t x444 = 20U;
	static volatile int32_t t100 = 235162720;

    t100 = ((x441==(x442==x443))-x444);

    if (t100 != -20) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x449 = -1LL;
	uint64_t x450 = UINT64_MAX;
	static int8_t x451 = -1;
	uint16_t x452 = 7273U;
	int32_t t101 = -53;

    t101 = ((x449==(x450==x451))-x452);

    if (t101 != -7273) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x453 = UINT32_MAX;
	volatile uint32_t x454 = UINT32_MAX;
	volatile uint16_t x455 = 7U;
	static volatile uint32_t x456 = UINT32_MAX;
	uint32_t t102 = 5146405U;

    t102 = ((x453==(x454==x455))-x456);

    if (t102 != 1U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x457 = -8318776831LL;
	int8_t x458 = INT8_MIN;
	int8_t x459 = INT8_MAX;
	int64_t t103 = -746557451LL;

    t103 = ((x457==(x458==x459))-x460);

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x461 = UINT16_MAX;
	uint64_t x463 = 12751LLU;
	uint16_t x464 = UINT16_MAX;
	int32_t t104 = 7;

    t104 = ((x461==(x462==x463))-x464);

    if (t104 != -65535) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x466 = INT8_MIN;
	static volatile int8_t x467 = 22;
	volatile int64_t x468 = 176875290LL;
	static volatile int64_t t105 = 16285704LL;

    t105 = ((x465==(x466==x467))-x468);

    if (t105 != -176875290LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x470 = 13U;
	static uint8_t x471 = UINT8_MAX;
	int32_t x472 = -121552908;

    t106 = ((x469==(x470==x471))-x472);

    if (t106 != 121552908) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x473 = 1209891U;
	static int32_t x474 = INT32_MAX;
	int32_t x476 = INT32_MAX;
	volatile int32_t t107 = 93867;

    t107 = ((x473==(x474==x475))-x476);

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x477 = INT32_MAX;
	int64_t x478 = INT64_MIN;
	int8_t x479 = -9;
	volatile uint16_t x480 = 697U;
	static volatile int32_t t108 = 3;

    t108 = ((x477==(x478==x479))-x480);

    if (t108 != -697) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x481 = -23132;
	int64_t x482 = 28404862721361LL;
	int8_t x483 = -1;
	uint8_t x484 = 0U;
	int32_t t109 = -43801877;

    t109 = ((x481==(x482==x483))-x484);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x485 = 10542424046LLU;
	static int64_t x487 = 1378LL;
	int16_t x488 = INT16_MIN;

    t110 = ((x485==(x486==x487))-x488);

    if (t110 != 32768) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x490 = 31;
	static uint16_t x491 = 3U;
	uint32_t x492 = 36409435U;
	static volatile uint32_t t111 = 242692U;

    t111 = ((x489==(x490==x491))-x492);

    if (t111 != 4258557861U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x493 = -3;
	int32_t x494 = -1;
	int32_t x495 = INT32_MIN;
	volatile uint32_t x496 = 2U;

    t112 = ((x493==(x494==x495))-x496);

    if (t112 != 4294967294U) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x497 = INT64_MIN;
	static uint16_t x498 = UINT16_MAX;
	int32_t t113 = 16;

    t113 = ((x497==(x498==x499))-x500);

    if (t113 != 32768) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x501 = INT16_MIN;
	int16_t x502 = INT16_MIN;
	static int8_t x503 = 2;
	int32_t x504 = 3;
	int32_t t114 = -12;

    t114 = ((x501==(x502==x503))-x504);

    if (t114 != -3) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x505 = INT64_MAX;
	uint64_t x508 = UINT64_MAX;

    t115 = ((x505==(x506==x507))-x508);

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x509 = -1;
	volatile int8_t x511 = INT8_MAX;
	static int32_t x512 = -21933;

    t116 = ((x509==(x510==x511))-x512);

    if (t116 != 21933) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x513 = -197;
	volatile int8_t x514 = -1;
	static volatile int32_t t117 = -70;

    t117 = ((x513==(x514==x515))-x516);

    if (t117 != -65535) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x517 = INT64_MIN;
	int16_t x518 = 1;
	volatile int32_t x520 = -1;

    t118 = ((x517==(x518==x519))-x520);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x521 = UINT16_MAX;
	uint64_t x522 = 26535LLU;
	volatile uint8_t x523 = UINT8_MAX;
	int8_t x524 = INT8_MIN;
	volatile int32_t t119 = 1762372;

    t119 = ((x521==(x522==x523))-x524);

    if (t119 != 128) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x525 = 29U;
	uint32_t x526 = UINT32_MAX;
	int64_t x527 = INT64_MAX;
	int16_t x528 = INT16_MAX;
	int32_t t120 = -2633595;

    t120 = ((x525==(x526==x527))-x528);

    if (t120 != -32767) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x530 = INT8_MIN;
	static int16_t x531 = -1;
	int64_t x532 = INT64_MAX;

    t121 = ((x529==(x530==x531))-x532);

    if (t121 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x533 = -1;
	int64_t x534 = INT64_MIN;
	uint16_t x535 = 0U;
	int8_t x536 = INT8_MIN;

    t122 = ((x533==(x534==x535))-x536);

    if (t122 != 128) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x538 = INT8_MIN;
	uint8_t x539 = 2U;
	int64_t x540 = 1368289361305747LL;
	int64_t t123 = 205540LL;

    t123 = ((x537==(x538==x539))-x540);

    if (t123 != -1368289361305747LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x541 = 1128064639422761955LLU;
	uint16_t x542 = 38U;
	static int8_t x543 = -1;
	uint8_t x544 = 7U;
	int32_t t124 = 56424;

    t124 = ((x541==(x542==x543))-x544);

    if (t124 != -7) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x549 = INT64_MIN;
	int32_t x550 = 33085858;
	int16_t x551 = -26;
	uint32_t x552 = 218240U;

    t125 = ((x549==(x550==x551))-x552);

    if (t125 != 4294749056U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x554 = INT64_MAX;
	uint16_t x555 = 5802U;
	static uint32_t x556 = 14U;
	uint32_t t126 = 188396U;

    t126 = ((x553==(x554==x555))-x556);

    if (t126 != 4294967282U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x561 = INT64_MIN;
	int32_t x562 = INT32_MIN;
	uint16_t x563 = 3U;
	static int16_t x564 = -939;
	volatile int32_t t127 = 23;

    t127 = ((x561==(x562==x563))-x564);

    if (t127 != 939) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x570 = UINT64_MAX;
	static int32_t x571 = INT32_MIN;
	uint32_t t128 = 1394U;

    t128 = ((x569==(x570==x571))-x572);

    if (t128 != 4294967278U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x574 = INT16_MIN;
	int8_t x576 = -1;
	volatile int32_t t129 = 207771985;

    t129 = ((x573==(x574==x575))-x576);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x577 = -1LL;
	int64_t x578 = -127772018818178LL;
	int8_t x580 = -1;
	int32_t t130 = 5564;

    t130 = ((x577==(x578==x579))-x580);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x581 = -1LL;
	int16_t x582 = INT16_MAX;
	int64_t x583 = INT64_MAX;
	volatile uint8_t x584 = 51U;
	int32_t t131 = -367499676;

    t131 = ((x581==(x582==x583))-x584);

    if (t131 != -51) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x585 = 915705993496355824LLU;
	uint8_t x586 = 1U;
	int8_t x587 = INT8_MIN;
	volatile int32_t x588 = -1;
	static int32_t t132 = 249;

    t132 = ((x585==(x586==x587))-x588);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x589 = -273228318;
	uint16_t x590 = 23U;
	static int8_t x592 = 0;
	static int32_t t133 = 9;

    t133 = ((x589==(x590==x591))-x592);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x593 = -1;
	static volatile int16_t x594 = -1;
	int8_t x595 = INT8_MIN;
	int16_t x596 = INT16_MIN;
	static int32_t t134 = 44882;

    t134 = ((x593==(x594==x595))-x596);

    if (t134 != 32768) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x597 = INT32_MIN;
	int8_t x598 = 11;
	uint8_t x599 = UINT8_MAX;
	uint8_t x600 = 7U;
	static int32_t t135 = 2569669;

    t135 = ((x597==(x598==x599))-x600);

    if (t135 != -7) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x601 = INT16_MIN;
	volatile int16_t x602 = 410;
	static volatile int8_t x603 = INT8_MIN;
	static uint32_t t136 = 6U;

    t136 = ((x601==(x602==x603))-x604);

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x605 = INT32_MAX;
	volatile uint64_t x606 = UINT64_MAX;
	uint8_t x607 = 29U;

    t137 = ((x605==(x606==x607))-x608);

    if (t137 != 1U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x609 = INT16_MAX;
	int8_t x610 = INT8_MIN;
	int16_t x611 = 3;
	uint32_t x612 = 1838113U;
	static volatile uint32_t t138 = 877178U;

    t138 = ((x609==(x610==x611))-x612);

    if (t138 != 4293129183U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x613 = INT64_MAX;
	uint32_t x614 = 2951190U;
	int16_t x615 = -1;
	volatile uint32_t x616 = 1U;
	uint32_t t139 = UINT32_MAX;

    t139 = ((x613==(x614==x615))-x616);

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x617 = UINT64_MAX;
	int16_t x619 = INT16_MAX;
	uint8_t x620 = 24U;

    t140 = ((x617==(x618==x619))-x620);

    if (t140 != -24) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x621 = 6679310U;
	static volatile uint8_t x622 = 16U;
	int8_t x623 = -1;
	uint64_t x624 = UINT64_MAX;
	static volatile uint64_t t141 = 140762678LLU;

    t141 = ((x621==(x622==x623))-x624);

    if (t141 != 1LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x625 = INT32_MIN;
	int8_t x626 = 0;
	uint16_t x627 = UINT16_MAX;
	int16_t x628 = INT16_MIN;
	int32_t t142 = -1;

    t142 = ((x625==(x626==x627))-x628);

    if (t142 != 32768) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x630 = -1;
	static uint32_t x632 = UINT32_MAX;
	volatile uint32_t t143 = 6U;

    t143 = ((x629==(x630==x631))-x632);

    if (t143 != 2U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x634 = 52;
	int64_t x635 = INT64_MAX;
	int32_t x636 = INT32_MAX;
	int32_t t144 = 801;

    t144 = ((x633==(x634==x635))-x636);

    if (t144 != -2147483647) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x637 = UINT16_MAX;
	uint64_t x638 = 15702561LLU;
	int16_t x640 = INT16_MAX;

    t145 = ((x637==(x638==x639))-x640);

    if (t145 != -32767) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x641 = UINT8_MAX;
	volatile int64_t x642 = 37494930398LL;
	uint8_t x643 = UINT8_MAX;
	int8_t x644 = -1;
	volatile int32_t t146 = 436706696;

    t146 = ((x641==(x642==x643))-x644);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x645 = 1682;
	uint32_t x647 = UINT32_MAX;
	int8_t x648 = INT8_MIN;
	volatile int32_t t147 = 1;

    t147 = ((x645==(x646==x647))-x648);

    if (t147 != 128) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x649 = INT16_MAX;
	uint16_t x650 = 141U;
	int64_t x651 = -1LL;
	uint64_t x652 = UINT64_MAX;
	static volatile uint64_t t148 = 10533612556LLU;

    t148 = ((x649==(x650==x651))-x652);

    if (t148 != 1LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x653 = 2;
	int64_t x654 = INT64_MIN;
	uint64_t x656 = 1346186080912LLU;
	volatile uint64_t t149 = 238294LLU;

    t149 = ((x653==(x654==x655))-x656);

    if (t149 != 18446742727523470704LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x657 = -1;
	volatile uint32_t x658 = 228565U;
	int64_t x659 = -109458054751LL;
	uint8_t x660 = UINT8_MAX;
	static volatile int32_t t150 = -2;

    t150 = ((x657==(x658==x659))-x660);

    if (t150 != -255) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x662 = 1554561443929LLU;
	uint64_t x663 = 4272880659796195515LLU;
	int16_t x664 = INT16_MIN;
	static volatile int32_t t151 = -24187956;

    t151 = ((x661==(x662==x663))-x664);

    if (t151 != 32768) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x665 = 15U;
	uint8_t x667 = 3U;
	int8_t x668 = INT8_MIN;

    t152 = ((x665==(x666==x667))-x668);

    if (t152 != 128) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x670 = 1U;
	static volatile uint64_t x671 = UINT64_MAX;
	int32_t x672 = 13643;

    t153 = ((x669==(x670==x671))-x672);

    if (t153 != -13643) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x673 = INT8_MIN;
	volatile int32_t x674 = -1;
	static uint8_t x676 = UINT8_MAX;
	volatile int32_t t154 = -58588;

    t154 = ((x673==(x674==x675))-x676);

    if (t154 != -255) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x678 = 1U;
	int16_t x679 = 203;

    t155 = ((x677==(x678==x679))-x680);

    if (t155 != -1402417LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x683 = -4LL;
	uint16_t x684 = 5671U;

    t156 = ((x681==(x682==x683))-x684);

    if (t156 != -5671) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x686 = INT32_MAX;
	static int32_t x687 = -13598;
	int32_t x688 = 70588195;
	int32_t t157 = 112587;

    t157 = ((x685==(x686==x687))-x688);

    if (t157 != -70588195) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x689 = INT16_MIN;
	uint32_t x690 = 32230855U;
	static uint8_t x691 = 0U;
	int32_t t158 = 1171142;

    t158 = ((x689==(x690==x691))-x692);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x694 = 89U;
	static volatile int32_t x695 = -1371212;
	static volatile uint16_t x696 = 1U;

    t159 = ((x693==(x694==x695))-x696);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x697 = INT8_MAX;
	uint8_t x698 = 0U;
	static uint8_t x699 = 14U;
	static int64_t x700 = INT64_MAX;
	int64_t t160 = 518560244918LL;

    t160 = ((x697==(x698==x699))-x700);

    if (t160 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x701 = INT16_MIN;
	uint32_t x702 = 374759907U;
	uint8_t x703 = 4U;
	int32_t t161 = -42061801;

    t161 = ((x701==(x702==x703))-x704);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x705 = INT16_MIN;
	static uint64_t x706 = 576204361251299934LLU;
	uint16_t x707 = 15603U;
	int32_t x708 = INT32_MAX;

    t162 = ((x705==(x706==x707))-x708);

    if (t162 != -2147483647) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x709 = INT32_MAX;
	uint64_t x710 = 5616LLU;
	uint8_t x711 = 5U;
	static uint16_t x712 = 7U;
	int32_t t163 = 876518471;

    t163 = ((x709==(x710==x711))-x712);

    if (t163 != -7) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x713 = -1;
	static uint16_t x714 = UINT16_MAX;
	int32_t x715 = -1;
	uint64_t x716 = 10173550616675LLU;
	uint64_t t164 = 49163428038042LLU;

    t164 = ((x713==(x714==x715))-x716);

    if (t164 != 18446733900158934941LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x717 = -1;
	volatile uint16_t x719 = UINT16_MAX;
	static int8_t x720 = -1;
	volatile int32_t t165 = -328685;

    t165 = ((x717==(x718==x719))-x720);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x722 = -1;
	int32_t x723 = INT32_MIN;
	static int64_t x724 = 1957573464211LL;
	static int64_t t166 = -110195079LL;

    t166 = ((x721==(x722==x723))-x724);

    if (t166 != -1957573464211LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x726 = UINT32_MAX;
	int64_t x727 = -1LL;
	static volatile int8_t x728 = INT8_MIN;
	volatile int32_t t167 = 1612986;

    t167 = ((x725==(x726==x727))-x728);

    if (t167 != 128) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x729 = INT32_MIN;
	uint32_t x731 = 30U;
	volatile uint64_t x732 = UINT64_MAX;
	volatile uint64_t t168 = 24703767513573LLU;

    t168 = ((x729==(x730==x731))-x732);

    if (t168 != 1LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x737 = 2U;
	int8_t x739 = INT8_MAX;
	int8_t x740 = INT8_MIN;

    t169 = ((x737==(x738==x739))-x740);

    if (t169 != 128) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x741 = -1;
	volatile uint8_t x742 = UINT8_MAX;
	int8_t x743 = INT8_MIN;
	uint32_t x744 = 1U;
	uint32_t t170 = UINT32_MAX;

    t170 = ((x741==(x742==x743))-x744);

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x745 = UINT64_MAX;
	volatile int16_t x746 = -1;
	int64_t x747 = -1LL;
	uint32_t x748 = 6324568U;

    t171 = ((x745==(x746==x747))-x748);

    if (t171 != 4288642728U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x757 = INT16_MAX;
	int16_t x758 = -1;
	uint32_t x760 = 864984507U;
	volatile uint32_t t172 = 1495U;

    t172 = ((x757==(x758==x759))-x760);

    if (t172 != 3429982789U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x761 = UINT8_MAX;
	volatile int64_t x763 = INT64_MAX;
	volatile int8_t x764 = INT8_MIN;

    t173 = ((x761==(x762==x763))-x764);

    if (t173 != 128) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x765 = 3054549U;
	int8_t x766 = INT8_MIN;
	int8_t x767 = INT8_MAX;
	int8_t x768 = 28;
	int32_t t174 = 10192;

    t174 = ((x765==(x766==x767))-x768);

    if (t174 != -28) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x769 = -1;
	int64_t x770 = INT64_MIN;
	int64_t x771 = INT64_MAX;
	volatile uint8_t x772 = 104U;

    t175 = ((x769==(x770==x771))-x772);

    if (t175 != -104) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x773 = INT8_MIN;
	uint64_t x774 = UINT64_MAX;

    t176 = ((x773==(x774==x775))-x776);

    if (t176 != -65535) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x778 = UINT8_MAX;
	static volatile int16_t x779 = -18;

    t177 = ((x777==(x778==x779))-x780);

    if (t177 != -62) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x781 = 14563932U;
	int64_t x782 = -1LL;
	int32_t x784 = 0;
	volatile int32_t t178 = 11;

    t178 = ((x781==(x782==x783))-x784);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x785 = UINT16_MAX;
	int32_t x786 = INT32_MAX;
	volatile uint32_t x787 = 207021U;
	volatile int32_t t179 = -940551531;

    t179 = ((x785==(x786==x787))-x788);

    if (t179 != -403) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x789 = INT32_MIN;
	static uint8_t x791 = UINT8_MAX;
	int32_t x792 = 214965;

    t180 = ((x789==(x790==x791))-x792);

    if (t180 != -214965) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x793 = INT16_MAX;
	static int32_t x795 = INT32_MAX;
	int32_t t181 = 12328343;

    t181 = ((x793==(x794==x795))-x796);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x798 = INT64_MAX;
	static uint8_t x799 = 68U;
	uint64_t x800 = 19498247LLU;
	static volatile uint64_t t182 = 58011372201858LLU;

    t182 = ((x797==(x798==x799))-x800);

    if (t182 != 18446744073690053369LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x806 = 7U;
	int8_t x807 = INT8_MIN;
	int32_t x808 = -7074;
	int32_t t183 = 846701;

    t183 = ((x805==(x806==x807))-x808);

    if (t183 != 7074) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x809 = 1U;
	volatile int8_t x810 = 29;
	volatile int16_t x812 = 4807;

    t184 = ((x809==(x810==x811))-x812);

    if (t184 != -4807) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x813 = INT64_MIN;
	static uint8_t x814 = 124U;
	int64_t x815 = INT64_MIN;
	int64_t x816 = -1LL;
	volatile int64_t t185 = 16508437480774LL;

    t185 = ((x813==(x814==x815))-x816);

    if (t185 != 1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x817 = 0U;
	volatile int32_t x818 = 292;
	uint64_t x819 = 352720LLU;
	uint32_t x820 = UINT32_MAX;
	volatile uint32_t t186 = 1687U;

    t186 = ((x817==(x818==x819))-x820);

    if (t186 != 2U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x821 = 6U;
	int8_t x822 = -1;
	int8_t x823 = -9;
	uint8_t x824 = UINT8_MAX;
	int32_t t187 = 39516;

    t187 = ((x821==(x822==x823))-x824);

    if (t187 != -255) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x825 = 1U;
	uint16_t x826 = 30U;
	int8_t x828 = 5;
	volatile int32_t t188 = 724799859;

    t188 = ((x825==(x826==x827))-x828);

    if (t188 != -5) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x829 = INT32_MAX;
	uint8_t x830 = 8U;
	volatile int32_t t189 = -3;

    t189 = ((x829==(x830==x831))-x832);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x833 = 374885821262LLU;
	int16_t x834 = -1;
	static uint64_t x835 = 27198LLU;
	volatile uint16_t x836 = 16559U;

    t190 = ((x833==(x834==x835))-x836);

    if (t190 != -16559) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x837 = UINT64_MAX;
	int16_t x840 = -1;
	static volatile int32_t t191 = -6;

    t191 = ((x837==(x838==x839))-x840);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x841 = UINT16_MAX;
	uint8_t x842 = 12U;
	int16_t x843 = -1;
	uint8_t x844 = UINT8_MAX;
	int32_t t192 = -117835752;

    t192 = ((x841==(x842==x843))-x844);

    if (t192 != -255) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x845 = 7U;
	int16_t x846 = -1;
	uint32_t x847 = 0U;
	static int8_t x848 = INT8_MIN;
	static volatile int32_t t193 = -1;

    t193 = ((x845==(x846==x847))-x848);

    if (t193 != 128) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x850 = 281196U;
	uint8_t x851 = 0U;
	volatile uint16_t x852 = 217U;
	volatile int32_t t194 = 16658100;

    t194 = ((x849==(x850==x851))-x852);

    if (t194 != -217) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x853 = 1;
	int16_t x856 = INT16_MIN;
	static int32_t t195 = -1;

    t195 = ((x853==(x854==x855))-x856);

    if (t195 != 32768) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x857 = 26717;
	int16_t x858 = INT16_MAX;
	int8_t x859 = 7;
	int32_t x860 = -1;
	static volatile int32_t t196 = -175;

    t196 = ((x857==(x858==x859))-x860);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x862 = 226849269;
	static int32_t x863 = -1080211;
	int64_t x864 = -4479373778168796992LL;
	volatile int64_t t197 = 6725942LL;

    t197 = ((x861==(x862==x863))-x864);

    if (t197 != 4479373778168796992LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x869 = 4U;
	int32_t x870 = 2;
	int8_t x871 = INT8_MAX;
	int32_t x872 = INT32_MAX;

    t198 = ((x869==(x870==x871))-x872);

    if (t198 != -2147483647) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x873 = -1;
	volatile uint32_t x874 = 4567208U;
	uint64_t x875 = UINT64_MAX;
	int8_t x876 = INT8_MIN;
	static volatile int32_t t199 = -890;

    t199 = ((x873==(x874==x875))-x876);

    if (t199 != 128) { NG(); } else { ; }
	
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

