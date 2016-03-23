
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

uint32_t x2 = 20098U;
int64_t x13 = INT64_MAX;
int32_t x14 = INT32_MAX;
int16_t x15 = INT16_MAX;
int8_t x28 = -30;
uint8_t x32 = 110U;
volatile int32_t t5 = -3182545;
static int8_t x33 = INT8_MIN;
int8_t x35 = -1;
int16_t x38 = INT16_MIN;
int64_t x39 = INT64_MIN;
volatile uint8_t x50 = 9U;
int64_t x59 = -1LL;
volatile int32_t t11 = 6728164;
int32_t x61 = -1;
volatile int16_t x68 = INT16_MIN;
static uint64_t t13 = 2904076893158LLU;
uint64_t x86 = 35LLU;
int64_t x87 = -1LL;
static uint64_t x91 = UINT64_MAX;
static uint64_t t19 = 2215861531LLU;
int32_t x93 = INT32_MIN;
int16_t x95 = -1;
volatile int64_t x97 = -2500381976LL;
int32_t x98 = -168;
volatile int64_t t21 = 25170065LL;
static int8_t x104 = INT8_MIN;
volatile uint32_t x107 = 622029341U;
int64_t x108 = INT64_MIN;
volatile int64_t t23 = -5126105754421882LL;
volatile int64_t x117 = INT64_MAX;
uint32_t x118 = 1426136665U;
static int8_t x128 = 19;
uint16_t x142 = 1268U;
uint64_t x145 = 1866LLU;
int32_t t32 = -213292;
int8_t x160 = -1;
int8_t x164 = INT8_MAX;
int16_t x166 = INT16_MIN;
int8_t x167 = 1;
int16_t x174 = 1;
static volatile uint8_t x175 = 6U;
int64_t t36 = -17569362371LL;
int32_t x178 = INT32_MIN;
volatile int64_t t37 = -1202530561132LL;
volatile int16_t x186 = INT16_MIN;
int16_t x196 = INT16_MIN;
int16_t x202 = INT16_MIN;
int8_t x204 = -1;
int32_t x205 = -88;
volatile int32_t t43 = -6777;
int32_t t44 = -5;
volatile int32_t t45 = 864;
static int8_t x225 = -14;
volatile int8_t x231 = -1;
uint8_t x232 = 48U;
static uint64_t x234 = UINT64_MAX;
int16_t x237 = INT16_MIN;
uint32_t x240 = 11451U;
int32_t x241 = INT32_MAX;
uint16_t x246 = UINT16_MAX;
int32_t x251 = 3769;
static volatile int64_t x261 = -5167834063143LL;
int64_t x264 = INT64_MIN;
static int8_t x270 = -1;
volatile uint64_t x271 = UINT64_MAX;
uint64_t x275 = UINT64_MAX;
uint32_t x281 = 0U;
static uint32_t x283 = 60035085U;
int32_t x287 = INT32_MIN;
int8_t x289 = 0;
static int16_t x293 = 2032;
static int32_t x297 = -1;
int32_t x298 = -1;
volatile int8_t x304 = 22;
volatile int32_t x310 = INT32_MAX;
static volatile uint8_t x318 = 52U;
volatile uint32_t t71 = 838U;
volatile int64_t x324 = INT64_MAX;
int8_t x335 = -1;
static uint16_t x347 = 2U;
volatile int64_t t77 = 6993667461553LL;
int64_t x350 = INT64_MAX;
int8_t x351 = INT8_MAX;
int32_t x364 = -27424;
volatile int16_t x369 = INT16_MAX;
int64_t x374 = INT64_MAX;
int32_t x380 = INT32_MIN;
uint16_t x382 = 42U;
int64_t x385 = -1LL;
static int64_t x387 = INT64_MAX;
volatile int64_t t85 = 386139304193LL;
uint8_t x394 = 116U;
int64_t x395 = INT64_MAX;
int16_t x397 = -1;
uint64_t x399 = 295282443686LLU;
int64_t t89 = INT64_MAX;
volatile int64_t x414 = 373LL;
int8_t x415 = 0;
volatile uint8_t x418 = 3U;
int16_t x420 = INT16_MAX;
uint16_t x422 = UINT16_MAX;
int32_t x430 = 2;
volatile int8_t x432 = INT8_MAX;
int16_t x447 = -3;
int32_t x449 = -1217;
static int16_t x452 = INT16_MIN;
int16_t x455 = -5780;
static volatile int8_t x468 = -1;
volatile int64_t t102 = -1522928623LL;
volatile uint64_t x476 = 1290578LLU;
volatile uint8_t x478 = 25U;
int64_t t104 = -4671400LL;
uint64_t x481 = 718582426674LLU;
uint16_t x482 = UINT16_MAX;
static uint64_t x483 = UINT64_MAX;
volatile uint16_t x490 = 6U;
static volatile int64_t t107 = -192950620842069121LL;
int32_t x493 = -53;
int16_t x497 = 6807;
int16_t x498 = -1;
uint16_t x499 = 1665U;
uint8_t x506 = 2U;
static volatile int32_t x508 = INT32_MIN;
int16_t x518 = -997;
volatile int32_t t113 = 14490869;
volatile uint64_t x531 = 1775511674896842572LLU;
uint8_t x546 = UINT8_MAX;
int16_t x551 = -939;
static volatile uint64_t x554 = UINT64_MAX;
uint64_t t120 = 22LLU;
uint64_t t122 = 552569376602LLU;
int16_t x566 = -388;
uint32_t x570 = 459U;
int64_t x578 = -1LL;
static int16_t x580 = INT16_MIN;
int32_t t125 = -2515;
uint64_t t126 = UINT64_MAX;
uint8_t x585 = UINT8_MAX;
int8_t x592 = INT8_MAX;
int32_t t128 = -20351268;
static int32_t x594 = -1008095;
uint32_t x596 = 782147U;
int64_t x602 = -1662754274996323840LL;
uint32_t x610 = UINT32_MAX;
static int8_t x616 = 3;
int64_t t135 = -848526689344LL;
volatile int8_t x629 = INT8_MIN;
uint64_t x632 = UINT64_MAX;
volatile int32_t x642 = INT32_MIN;
volatile int16_t x644 = INT16_MIN;
volatile uint64_t x650 = UINT64_MAX;
volatile int32_t t139 = -79486;
int16_t x658 = -667;
int16_t x659 = -1;
int8_t x671 = INT8_MIN;
volatile uint32_t x673 = 2U;
int32_t x676 = 4;
int32_t x678 = INT32_MIN;
volatile int32_t t146 = -1;
int8_t x681 = INT8_MIN;
uint64_t x688 = 2080934071562LLU;
static volatile uint64_t t148 = 8254605LLU;
volatile uint64_t x690 = 575422793LLU;
int64_t x697 = -31766893LL;
static uint16_t x704 = 374U;
int16_t x706 = INT16_MIN;
int32_t x709 = -2;
uint8_t x711 = UINT8_MAX;
int16_t x719 = 3;
int8_t x724 = 13;
volatile uint64_t x735 = UINT64_MAX;
static volatile int32_t x746 = 195888;
uint32_t x752 = UINT32_MAX;
uint8_t x753 = UINT8_MAX;
static int64_t x762 = 36651660319168LL;
int32_t x773 = -4;
uint64_t t168 = 12117094LLU;
volatile int8_t x784 = -1;
volatile int32_t t169 = -1;
volatile uint32_t t170 = UINT32_MAX;
int32_t x798 = 1;
int16_t x800 = INT16_MAX;
uint32_t x801 = 8718U;
uint16_t x802 = 1U;
int32_t x806 = 27;
int32_t x807 = INT32_MAX;
static int32_t x825 = 165308493;
uint64_t x826 = 13120664693LLU;
volatile uint32_t t178 = 52U;
volatile int32_t t181 = -1029162;
static int8_t x854 = 1;
static volatile int64_t x858 = -557989729531413LL;
uint16_t x871 = 1U;
uint64_t t186 = 134049103854054LLU;
int16_t x876 = -1;
int8_t x878 = INT8_MIN;
uint64_t x880 = UINT64_MAX;
uint64_t x887 = 1342957986777682104LLU;
volatile int32_t t189 = 0;
volatile int16_t x891 = INT16_MIN;
uint16_t x898 = UINT16_MAX;
static volatile int8_t x904 = 0;
static int64_t x907 = INT64_MIN;
uint16_t x909 = 136U;
int16_t x912 = INT16_MIN;
static int32_t t195 = 13;
int8_t x913 = 13;
int32_t x931 = INT32_MIN;
int64_t x935 = INT64_MIN;


void f0(void) {
    	volatile int32_t x1 = INT32_MAX;
	int32_t x3 = INT32_MIN;
	int32_t x4 = 100094;
	volatile int32_t t0 = -332270;

    t0 = ((x1-(x2>x3))-x4);

    if (t0 != 2147383553) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = 1U;
	static int32_t x10 = 26;
	static int16_t x11 = INT16_MIN;
	int64_t x12 = 3015485LL;
	int64_t t1 = -1306443564010LL;

    t1 = ((x9-(x10>x11))-x12);

    if (t1 != -3015485LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x16 = 1;
	volatile int64_t t2 = -25542724738202260LL;

    t2 = ((x13-(x14>x15))-x16);

    if (t2 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	static uint32_t x18 = 177146U;
	int8_t x19 = -9;
	uint64_t x20 = UINT64_MAX;
	uint64_t t3 = 861866363007661248LLU;

    t3 = ((x17-(x18>x19))-x20);

    if (t3 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = INT16_MAX;
	volatile uint16_t x26 = UINT16_MAX;
	int64_t x27 = INT64_MAX;
	static volatile int32_t t4 = -4388;

    t4 = ((x25-(x26>x27))-x28);

    if (t4 != 32797) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = INT8_MAX;
	int32_t x30 = INT32_MIN;
	volatile uint64_t x31 = UINT64_MAX;

    t5 = ((x29-(x30>x31))-x32);

    if (t5 != 17) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x34 = INT16_MIN;
	volatile int8_t x36 = INT8_MAX;
	volatile int32_t t6 = 1853241;

    t6 = ((x33-(x34>x35))-x36);

    if (t6 != -255) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x37 = 0U;
	int32_t x40 = -2;
	int32_t t7 = 15877665;

    t7 = ((x37-(x38>x39))-x40);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = -10;
	int32_t x42 = INT32_MIN;
	volatile uint8_t x43 = UINT8_MAX;
	static uint64_t x44 = UINT64_MAX;
	uint64_t t8 = 1506882789770268242LLU;

    t8 = ((x41-(x42>x43))-x44);

    if (t8 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = 13097673LL;
	volatile int64_t x46 = INT64_MIN;
	volatile int16_t x47 = 72;
	static uint16_t x48 = 1474U;
	int64_t t9 = -2785960LL;

    t9 = ((x45-(x46>x47))-x48);

    if (t9 != 13096199LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x49 = -2;
	int32_t x51 = -4003374;
	uint64_t x52 = 402261810636LLU;
	uint64_t t10 = 175849430355678706LLU;

    t10 = ((x49-(x50>x51))-x52);

    if (t10 != 18446743671447740977LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x57 = INT8_MIN;
	int8_t x58 = -3;
	uint16_t x60 = 0U;

    t11 = ((x57-(x58>x59))-x60);

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	volatile uint8_t x64 = 66U;
	int32_t t12 = -5;

    t12 = ((x61-(x62>x63))-x64);

    if (t12 != -67) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x65 = UINT64_MAX;
	int32_t x66 = INT32_MIN;
	static volatile int64_t x67 = INT64_MIN;

    t13 = ((x65-(x66>x67))-x68);

    if (t13 != 32766LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = 4;
	int8_t x70 = 7;
	uint32_t x71 = 6U;
	int64_t x72 = -1LL;
	volatile int64_t t14 = -29026116LL;

    t14 = ((x69-(x70>x71))-x72);

    if (t14 != 4LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x73 = 561U;
	static uint16_t x74 = 357U;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = INT8_MAX;
	static volatile int32_t t15 = 1;

    t15 = ((x73-(x74>x75))-x76);

    if (t15 != 434) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x77 = 228972566182212LLU;
	static volatile uint8_t x78 = 7U;
	volatile int8_t x79 = INT8_MAX;
	int8_t x80 = INT8_MIN;
	static uint64_t t16 = 1581650322123135489LLU;

    t16 = ((x77-(x78>x79))-x80);

    if (t16 != 228972566182340LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x81 = 4067443;
	static uint16_t x82 = UINT16_MAX;
	uint8_t x83 = 62U;
	static uint16_t x84 = 85U;
	volatile int32_t t17 = -485789;

    t17 = ((x81-(x82>x83))-x84);

    if (t17 != 4067357) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x85 = INT16_MIN;
	uint32_t x88 = 371656U;
	uint32_t t18 = 930991U;

    t18 = ((x85-(x86>x87))-x88);

    if (t18 != 4294562872U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x89 = 1341LL;
	static volatile int64_t x90 = INT64_MAX;
	uint64_t x92 = 400028LLU;

    t19 = ((x89-(x90>x91))-x92);

    if (t19 != 18446744073709152929LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x94 = -1;
	uint32_t x96 = 1U;
	uint32_t t20 = 451U;

    t20 = ((x93-(x94>x95))-x96);

    if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x99 = -1;
	int64_t x100 = INT64_MIN;

    t21 = ((x97-(x98>x99))-x100);

    if (t21 != 9223372034354393832LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = -122;
	static int16_t x102 = INT16_MAX;
	static int64_t x103 = INT64_MIN;
	volatile int32_t t22 = 92;

    t22 = ((x101-(x102>x103))-x104);

    if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x105 = -3096174;
	int64_t x106 = INT64_MIN;

    t23 = ((x105-(x106>x107))-x108);

    if (t23 != 9223372036851679634LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x109 = 252383;
	static volatile int32_t x110 = 5885006;
	uint8_t x111 = 12U;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t24 = 1469013;

    t24 = ((x109-(x110>x111))-x112);

    if (t24 != 252127) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x119 = INT8_MAX;
	uint16_t x120 = 1U;
	int64_t t25 = -444LL;

    t25 = ((x117-(x118>x119))-x120);

    if (t25 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x125 = 15U;
	int64_t x126 = 1071068171385LL;
	volatile int16_t x127 = INT16_MIN;
	static int32_t t26 = 779;

    t26 = ((x125-(x126>x127))-x128);

    if (t26 != -5) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x133 = 0;
	volatile uint8_t x134 = 5U;
	uint16_t x135 = 1035U;
	static int8_t x136 = INT8_MIN;
	static int32_t t27 = -3898422;

    t27 = ((x133-(x134>x135))-x136);

    if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x137 = 1U;
	volatile int8_t x138 = INT8_MIN;
	int16_t x139 = -1;
	uint32_t x140 = 109U;
	uint32_t t28 = 91388245U;

    t28 = ((x137-(x138>x139))-x140);

    if (t28 != 4294967188U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = INT16_MIN;
	int32_t x143 = -5;
	int16_t x144 = 0;
	int32_t t29 = -55;

    t29 = ((x141-(x142>x143))-x144);

    if (t29 != -32769) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x146 = UINT8_MAX;
	int16_t x147 = INT16_MIN;
	static uint16_t x148 = UINT16_MAX;
	static volatile uint64_t t30 = 117605LLU;

    t30 = ((x145-(x146>x147))-x148);

    if (t30 != 18446744073709487946LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x149 = UINT32_MAX;
	static int32_t x150 = INT32_MAX;
	uint16_t x151 = 0U;
	static int32_t x152 = INT32_MIN;
	uint32_t t31 = 57796743U;

    t31 = ((x149-(x150>x151))-x152);

    if (t31 != 2147483646U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x153 = 3U;
	int32_t x154 = INT32_MAX;
	volatile uint8_t x155 = 125U;
	int16_t x156 = 82;

    t32 = ((x153-(x154>x155))-x156);

    if (t32 != -80) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x157 = 1000;
	uint8_t x158 = 5U;
	int32_t x159 = -197346045;
	int32_t t33 = -915;

    t33 = ((x157-(x158>x159))-x160);

    if (t33 != 1000) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x161 = 76;
	uint16_t x162 = 8U;
	volatile int32_t x163 = INT32_MIN;
	int32_t t34 = 0;

    t34 = ((x161-(x162>x163))-x164);

    if (t34 != -52) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x165 = -1;
	volatile int8_t x168 = 5;
	volatile int32_t t35 = 12;

    t35 = ((x165-(x166>x167))-x168);

    if (t35 != -6) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x173 = -3563343436099840LL;
	int32_t x176 = INT32_MIN;

    t36 = ((x173-(x174>x175))-x176);

    if (t36 != -3563341288616192LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x177 = INT64_MIN;
	static int16_t x179 = INT16_MAX;
	static volatile int8_t x180 = -1;

    t37 = ((x177-(x178>x179))-x180);

    if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x185 = INT16_MIN;
	uint16_t x187 = UINT16_MAX;
	uint32_t x188 = UINT32_MAX;
	static uint32_t t38 = 800U;

    t38 = ((x185-(x186>x187))-x188);

    if (t38 != 4294934529U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x189 = -1;
	static volatile int32_t x190 = 215330610;
	uint8_t x191 = UINT8_MAX;
	volatile int8_t x192 = INT8_MIN;
	int32_t t39 = -21;

    t39 = ((x189-(x190>x191))-x192);

    if (t39 != 126) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x193 = UINT16_MAX;
	int32_t x194 = INT32_MIN;
	int8_t x195 = 0;
	int32_t t40 = -9507561;

    t40 = ((x193-(x194>x195))-x196);

    if (t40 != 98303) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x197 = -8;
	int32_t x198 = 47602866;
	int64_t x199 = INT64_MAX;
	int32_t x200 = 648856239;
	volatile int32_t t41 = -13891393;

    t41 = ((x197-(x198>x199))-x200);

    if (t41 != -648856247) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x201 = INT8_MAX;
	int64_t x203 = 1LL;
	volatile int32_t t42 = -1;

    t42 = ((x201-(x202>x203))-x204);

    if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x206 = 14841666U;
	int64_t x207 = INT64_MIN;
	int8_t x208 = -2;

    t43 = ((x205-(x206>x207))-x208);

    if (t43 != -87) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x209 = -1;
	uint16_t x210 = UINT16_MAX;
	volatile int64_t x211 = 45LL;
	int8_t x212 = 1;

    t44 = ((x209-(x210>x211))-x212);

    if (t44 != -3) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x213 = 21607757;
	static uint16_t x214 = UINT16_MAX;
	uint8_t x215 = 8U;
	int8_t x216 = INT8_MAX;

    t45 = ((x213-(x214>x215))-x216);

    if (t45 != 21607629) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x217 = 5U;
	static uint32_t x218 = 0U;
	int64_t x219 = INT64_MIN;
	int32_t x220 = -108;
	int32_t t46 = -141;

    t46 = ((x217-(x218>x219))-x220);

    if (t46 != 112) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x221 = 2654;
	int64_t x222 = -1020724925172203LL;
	int16_t x223 = -1;
	int64_t x224 = INT64_MAX;
	volatile int64_t t47 = -682910641978800613LL;

    t47 = ((x221-(x222>x223))-x224);

    if (t47 != -9223372036854773153LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x226 = 14U;
	int64_t x227 = INT64_MIN;
	volatile int32_t x228 = -11793201;
	static int32_t t48 = -1772540;

    t48 = ((x225-(x226>x227))-x228);

    if (t48 != 11793186) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x229 = 47LL;
	int32_t x230 = -1;
	volatile int64_t t49 = 6852964134LL;

    t49 = ((x229-(x230>x231))-x232);

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x233 = UINT16_MAX;
	uint32_t x235 = 3938U;
	int16_t x236 = -1;
	volatile int32_t t50 = 4649;

    t50 = ((x233-(x234>x235))-x236);

    if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x238 = INT16_MIN;
	static int32_t x239 = INT32_MIN;
	uint32_t t51 = 30781U;

    t51 = ((x237-(x238>x239))-x240);

    if (t51 != 4294923076U) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x242 = 205LLU;
	int32_t x243 = 21972068;
	int32_t x244 = 10165075;
	int32_t t52 = 62;

    t52 = ((x241-(x242>x243))-x244);

    if (t52 != 2137318572) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x245 = INT16_MAX;
	static uint64_t x247 = 866LLU;
	uint8_t x248 = 52U;
	int32_t t53 = 7878;

    t53 = ((x245-(x246>x247))-x248);

    if (t53 != 32714) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MIN;
	int32_t x252 = -1;
	volatile int64_t t54 = 5919132LL;

    t54 = ((x249-(x250>x251))-x252);

    if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x253 = -1;
	int64_t x254 = INT64_MIN;
	static volatile int64_t x255 = -1LL;
	int64_t x256 = INT64_MIN;
	volatile int64_t t55 = INT64_MAX;

    t55 = ((x253-(x254>x255))-x256);

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MIN;
	static volatile uint16_t x259 = UINT16_MAX;
	int64_t x260 = -203990LL;
	volatile int64_t t56 = 67580279953215806LL;

    t56 = ((x257-(x258>x259))-x260);

    if (t56 != -9223372036854571818LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x262 = INT32_MIN;
	uint64_t x263 = UINT64_MAX;
	volatile int64_t t57 = -1517800836983LL;

    t57 = ((x261-(x262>x263))-x264);

    if (t57 != 9223366869020712665LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x265 = 7909U;
	int64_t x266 = INT64_MAX;
	static int16_t x267 = INT16_MIN;
	uint64_t x268 = 87190725LLU;
	volatile uint64_t t58 = 24805318421601468LLU;

    t58 = ((x265-(x266>x267))-x268);

    if (t58 != 18446744073622368799LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x269 = INT32_MAX;
	uint64_t x272 = 183058059897954LLU;
	volatile uint64_t t59 = 285031170725488872LLU;

    t59 = ((x269-(x270>x271))-x272);

    if (t59 != 18446561017797137309LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x273 = INT32_MAX;
	volatile int32_t x274 = -778;
	uint64_t x276 = UINT64_MAX;
	static volatile uint64_t t60 = 18245902LLU;

    t60 = ((x273-(x274>x275))-x276);

    if (t60 != 2147483648LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x277 = UINT8_MAX;
	static int32_t x278 = -29928;
	int8_t x279 = INT8_MIN;
	volatile uint8_t x280 = 0U;
	int32_t t61 = 0;

    t61 = ((x277-(x278>x279))-x280);

    if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x282 = INT8_MIN;
	int16_t x284 = INT16_MIN;
	uint32_t t62 = 677866891U;

    t62 = ((x281-(x282>x283))-x284);

    if (t62 != 32767U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x285 = 16U;
	volatile uint32_t x286 = 0U;
	static int8_t x288 = INT8_MIN;
	int32_t t63 = 39886;

    t63 = ((x285-(x286>x287))-x288);

    if (t63 != 144) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x290 = UINT32_MAX;
	static int32_t x291 = -1;
	uint8_t x292 = 66U;
	volatile int32_t t64 = 11;

    t64 = ((x289-(x290>x291))-x292);

    if (t64 != -66) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x294 = -2882;
	static int16_t x295 = INT16_MIN;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t65 = 9888120;

    t65 = ((x293-(x294>x295))-x296);

    if (t65 != 34799) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x299 = 10;
	int64_t x300 = INT64_MIN;
	volatile int64_t t66 = INT64_MAX;

    t66 = ((x297-(x298>x299))-x300);

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x301 = INT8_MAX;
	volatile int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MAX;
	static volatile int32_t t67 = -63361280;

    t67 = ((x301-(x302>x303))-x304);

    if (t67 != 105) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x305 = 6439U;
	int16_t x306 = -1;
	volatile int16_t x307 = INT16_MIN;
	uint64_t x308 = 1291157453263LLU;
	uint64_t t68 = 2614580006266308LLU;

    t68 = ((x305-(x306>x307))-x308);

    if (t68 != 18446742782552104791LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x309 = UINT8_MAX;
	static int16_t x311 = 371;
	int8_t x312 = INT8_MIN;
	int32_t t69 = 94;

    t69 = ((x309-(x310>x311))-x312);

    if (t69 != 382) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x313 = INT8_MIN;
	int16_t x314 = 1;
	int64_t x315 = INT64_MAX;
	volatile uint32_t x316 = UINT32_MAX;
	volatile uint32_t t70 = 796787U;

    t70 = ((x313-(x314>x315))-x316);

    if (t70 != 4294967169U) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x317 = 107629728U;
	uint32_t x319 = 10449587U;
	uint16_t x320 = UINT16_MAX;

    t71 = ((x317-(x318>x319))-x320);

    if (t71 != 107564193U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x321 = UINT64_MAX;
	static volatile uint32_t x322 = UINT32_MAX;
	uint32_t x323 = 765641832U;
	uint64_t t72 = 88434LLU;

    t72 = ((x321-(x322>x323))-x324);

    if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x325 = INT16_MIN;
	int16_t x326 = -12;
	int8_t x327 = INT8_MIN;
	static uint64_t x328 = 79137LLU;
	volatile uint64_t t73 = 57540203LLU;

    t73 = ((x325-(x326>x327))-x328);

    if (t73 != 18446744073709439710LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x333 = -7481610228316116LL;
	uint32_t x334 = UINT32_MAX;
	uint32_t x336 = UINT32_MAX;
	volatile int64_t t74 = 28172346124629997LL;

    t74 = ((x333-(x334>x335))-x336);

    if (t74 != -7481614523283411LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x337 = -6604;
	uint16_t x338 = 839U;
	uint32_t x339 = 1657U;
	int8_t x340 = INT8_MAX;
	static int32_t t75 = -1;

    t75 = ((x337-(x338>x339))-x340);

    if (t75 != -6731) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x341 = -1;
	uint16_t x342 = UINT16_MAX;
	int16_t x343 = INT16_MIN;
	static uint16_t x344 = UINT16_MAX;
	volatile int32_t t76 = 5;

    t76 = ((x341-(x342>x343))-x344);

    if (t76 != -65537) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x345 = UINT8_MAX;
	volatile uint64_t x346 = 206LLU;
	int64_t x348 = 407406LL;

    t77 = ((x345-(x346>x347))-x348);

    if (t77 != -407152LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x349 = 140363884516LL;
	uint8_t x352 = UINT8_MAX;
	int64_t t78 = 24773996363490669LL;

    t78 = ((x349-(x350>x351))-x352);

    if (t78 != 140363884260LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x357 = 1;
	int8_t x358 = INT8_MAX;
	int8_t x359 = INT8_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t79 = -24;

    t79 = ((x357-(x358>x359))-x360);

    if (t79 != 32769) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x361 = INT8_MIN;
	static int8_t x362 = -1;
	int64_t x363 = -3453LL;
	volatile int32_t t80 = -124;

    t80 = ((x361-(x362>x363))-x364);

    if (t80 != 27295) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x370 = 0U;
	int64_t x371 = -9249628LL;
	int16_t x372 = INT16_MIN;
	volatile int32_t t81 = -379;

    t81 = ((x369-(x370>x371))-x372);

    if (t81 != 65534) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x373 = -1;
	volatile uint16_t x375 = 1U;
	uint32_t x376 = 1U;
	uint32_t t82 = 1150U;

    t82 = ((x373-(x374>x375))-x376);

    if (t82 != 4294967293U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x377 = -8;
	int32_t x378 = INT32_MAX;
	int64_t x379 = INT64_MAX;
	volatile int32_t t83 = 865513473;

    t83 = ((x377-(x378>x379))-x380);

    if (t83 != 2147483640) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x383 = INT64_MAX;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t84 = -1704958;

    t84 = ((x381-(x382>x383))-x384);

    if (t84 != -98303) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x386 = INT64_MAX;
	volatile uint8_t x388 = UINT8_MAX;

    t85 = ((x385-(x386>x387))-x388);

    if (t85 != -256LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x393 = 25056402351138580LL;
	static uint32_t x396 = 41U;
	volatile int64_t t86 = 708LL;

    t86 = ((x393-(x394>x395))-x396);

    if (t86 != 25056402351138539LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x398 = 6424655409LLU;
	int32_t x400 = 16;
	int32_t t87 = -9958272;

    t87 = ((x397-(x398>x399))-x400);

    if (t87 != -17) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x401 = INT8_MIN;
	int32_t x402 = -1;
	static uint16_t x403 = 12U;
	volatile int16_t x404 = -1;
	volatile int32_t t88 = 3;

    t88 = ((x401-(x402>x403))-x404);

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x405 = -1;
	static volatile uint32_t x406 = 305U;
	int32_t x407 = INT32_MAX;
	volatile int64_t x408 = INT64_MIN;

    t89 = ((x405-(x406>x407))-x408);

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x413 = INT8_MAX;
	int64_t x416 = -1LL;
	volatile int64_t t90 = 6136525042692818LL;

    t90 = ((x413-(x414>x415))-x416);

    if (t90 != 127LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x417 = 15;
	volatile int64_t x419 = INT64_MIN;
	volatile int32_t t91 = 86371;

    t91 = ((x417-(x418>x419))-x420);

    if (t91 != -32753) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x421 = 172569;
	static volatile uint64_t x423 = UINT64_MAX;
	static volatile uint8_t x424 = 22U;
	int32_t t92 = 2412;

    t92 = ((x421-(x422>x423))-x424);

    if (t92 != 172547) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x425 = 18884333LLU;
	int8_t x426 = INT8_MIN;
	static int64_t x427 = -6598831223LL;
	uint32_t x428 = UINT32_MAX;
	volatile uint64_t t93 = 1043312709690287LLU;

    t93 = ((x425-(x426>x427))-x428);

    if (t93 != 18446744069433468653LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x429 = 49498469558812LLU;
	int8_t x431 = 56;
	uint64_t t94 = 26823436617294LLU;

    t94 = ((x429-(x430>x431))-x432);

    if (t94 != 49498469558685LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x433 = INT8_MAX;
	volatile uint8_t x434 = 0U;
	static int64_t x435 = -1LL;
	uint32_t x436 = 7928U;
	volatile uint32_t t95 = 629821702U;

    t95 = ((x433-(x434>x435))-x436);

    if (t95 != 4294959494U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x437 = INT32_MIN;
	int16_t x438 = INT16_MAX;
	uint16_t x439 = UINT16_MAX;
	volatile int8_t x440 = -1;
	int32_t t96 = -3;

    t96 = ((x437-(x438>x439))-x440);

    if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x445 = INT16_MIN;
	int16_t x446 = INT16_MAX;
	volatile int32_t x448 = -1;
	static volatile int32_t t97 = 2;

    t97 = ((x445-(x446>x447))-x448);

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x450 = INT64_MIN;
	static int32_t x451 = INT32_MAX;
	volatile int32_t t98 = 4988249;

    t98 = ((x449-(x450>x451))-x452);

    if (t98 != 31551) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x453 = 55487LL;
	uint16_t x454 = UINT16_MAX;
	uint16_t x456 = 6850U;
	volatile int64_t t99 = -29LL;

    t99 = ((x453-(x454>x455))-x456);

    if (t99 != 48636LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x457 = 154871544LLU;
	static int64_t x458 = 713LL;
	int8_t x459 = -1;
	volatile uint64_t x460 = UINT64_MAX;
	static uint64_t t100 = 5824LLU;

    t100 = ((x457-(x458>x459))-x460);

    if (t100 != 154871544LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x465 = -55441845485994LL;
	int16_t x466 = INT16_MIN;
	static volatile int8_t x467 = INT8_MAX;
	int64_t t101 = 3006690803LL;

    t101 = ((x465-(x466>x467))-x468);

    if (t101 != -55441845485993LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x469 = -237635435443LL;
	uint16_t x470 = UINT16_MAX;
	uint16_t x471 = UINT16_MAX;
	volatile int64_t x472 = -940822581017037631LL;

    t102 = ((x469-(x470>x471))-x472);

    if (t102 != 940822343381602188LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x473 = 976;
	int64_t x474 = -1LL;
	volatile int8_t x475 = -29;
	volatile uint64_t t103 = 21189LLU;

    t103 = ((x473-(x474>x475))-x476);

    if (t103 != 18446744073708262013LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int64_t x477 = -1LL;
	int32_t x479 = INT32_MAX;
	int16_t x480 = INT16_MAX;

    t104 = ((x477-(x478>x479))-x480);

    if (t104 != -32768LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x484 = 4610322672803335432LLU;
	uint64_t t105 = 35124723425LLU;

    t105 = ((x481-(x482>x483))-x484);

    if (t105 != 13836422119488642858LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x485 = UINT8_MAX;
	volatile uint16_t x486 = UINT16_MAX;
	uint8_t x487 = 18U;
	uint16_t x488 = UINT16_MAX;
	volatile int32_t t106 = 24675089;

    t106 = ((x485-(x486>x487))-x488);

    if (t106 != -65281) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x489 = -1645566105091LL;
	static int64_t x491 = -425637608254LL;
	int64_t x492 = 232LL;

    t107 = ((x489-(x490>x491))-x492);

    if (t107 != -1645566105324LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x494 = INT64_MIN;
	int8_t x495 = -1;
	uint32_t x496 = 22809U;
	volatile uint32_t t108 = 5U;

    t108 = ((x493-(x494>x495))-x496);

    if (t108 != 4294944434U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x500 = 324083;
	int32_t t109 = -1;

    t109 = ((x497-(x498>x499))-x500);

    if (t109 != -317276) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x505 = 10913087567135LL;
	uint64_t x507 = 689391267810LLU;
	int64_t t110 = -2099LL;

    t110 = ((x505-(x506>x507))-x508);

    if (t110 != 10915235050783LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x509 = 219LL;
	int8_t x510 = 4;
	int64_t x511 = INT64_MIN;
	int8_t x512 = INT8_MIN;
	int64_t t111 = -22049042517289LL;

    t111 = ((x509-(x510>x511))-x512);

    if (t111 != 346LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x517 = UINT8_MAX;
	uint32_t x519 = UINT32_MAX;
	static volatile int32_t x520 = -1;
	int32_t t112 = 25995;

    t112 = ((x517-(x518>x519))-x520);

    if (t112 != 256) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x521 = -1;
	uint64_t x522 = 24836153699LLU;
	static int64_t x523 = -1LL;
	int8_t x524 = INT8_MIN;

    t113 = ((x521-(x522>x523))-x524);

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x525 = 0U;
	int64_t x526 = -6651171315LL;
	int64_t x527 = -77044571154984882LL;
	int16_t x528 = -1;
	int32_t t114 = -1;

    t114 = ((x525-(x526>x527))-x528);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x529 = 33805569071054LL;
	uint64_t x530 = 995914LLU;
	int64_t x532 = -1LL;
	int64_t t115 = -409090734LL;

    t115 = ((x529-(x530>x531))-x532);

    if (t115 != 33805569071055LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x533 = INT8_MIN;
	int8_t x534 = INT8_MIN;
	volatile int8_t x535 = -1;
	uint32_t x536 = 21U;
	uint32_t t116 = 378624U;

    t116 = ((x533-(x534>x535))-x536);

    if (t116 != 4294967147U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x541 = 11201;
	int8_t x542 = INT8_MAX;
	int32_t x543 = INT32_MIN;
	int64_t x544 = 1038215127LL;
	volatile int64_t t117 = -212916119LL;

    t117 = ((x541-(x542>x543))-x544);

    if (t117 != -1038203927LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x545 = -1;
	int8_t x547 = INT8_MIN;
	static int8_t x548 = INT8_MAX;
	int32_t t118 = 19722;

    t118 = ((x545-(x546>x547))-x548);

    if (t118 != -129) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x549 = -1;
	volatile int16_t x550 = 2701;
	volatile uint32_t x552 = 493351704U;
	uint32_t t119 = 503085U;

    t119 = ((x549-(x550>x551))-x552);

    if (t119 != 3801615590U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x553 = 7044512508548LLU;
	int32_t x555 = INT32_MIN;
	int8_t x556 = INT8_MIN;

    t120 = ((x553-(x554>x555))-x556);

    if (t120 != 7044512508675LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x557 = -222;
	static int8_t x558 = 0;
	static uint8_t x559 = UINT8_MAX;
	uint8_t x560 = 92U;
	int32_t t121 = -356280;

    t121 = ((x557-(x558>x559))-x560);

    if (t121 != -314) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x561 = UINT64_MAX;
	static uint8_t x562 = UINT8_MAX;
	int8_t x563 = -21;
	static uint8_t x564 = UINT8_MAX;

    t122 = ((x561-(x562>x563))-x564);

    if (t122 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x565 = -1;
	int16_t x567 = 1;
	uint64_t x568 = 686647611955LLU;
	static volatile uint64_t t123 = 140410584513272LLU;

    t123 = ((x565-(x566>x567))-x568);

    if (t123 != 18446743387061939660LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x569 = -1;
	int32_t x571 = -242170273;
	static volatile uint64_t x572 = 266308645321728150LLU;
	static volatile uint64_t t124 = 50LLU;

    t124 = ((x569-(x570>x571))-x572);

    if (t124 != 18180435428387823465LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x577 = -857;
	volatile uint8_t x579 = 22U;

    t125 = ((x577-(x578>x579))-x580);

    if (t125 != 31911) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x581 = UINT64_MAX;
	int32_t x582 = INT32_MAX;
	int64_t x583 = -1LL;
	static uint64_t x584 = UINT64_MAX;

    t126 = ((x581-(x582>x583))-x584);

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x586 = INT16_MAX;
	int8_t x587 = INT8_MIN;
	uint32_t x588 = 4526U;
	uint32_t t127 = 931532U;

    t127 = ((x585-(x586>x587))-x588);

    if (t127 != 4294963024U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x589 = INT32_MAX;
	static volatile uint8_t x590 = 7U;
	int16_t x591 = INT16_MAX;

    t128 = ((x589-(x590>x591))-x592);

    if (t128 != 2147483520) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x593 = INT8_MAX;
	static int16_t x595 = -515;
	volatile uint32_t t129 = 27097U;

    t129 = ((x593-(x594>x595))-x596);

    if (t129 != 4294185276U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x597 = 18U;
	uint16_t x598 = 366U;
	int8_t x599 = INT8_MIN;
	uint32_t x600 = 687688U;
	volatile uint32_t t130 = 3375U;

    t130 = ((x597-(x598>x599))-x600);

    if (t130 != 4294279625U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x601 = -1;
	static uint64_t x603 = UINT64_MAX;
	int64_t x604 = -1LL;
	volatile int64_t t131 = 741202069491311LL;

    t131 = ((x601-(x602>x603))-x604);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x609 = -1LL;
	static int8_t x611 = -37;
	int8_t x612 = INT8_MIN;
	volatile int64_t t132 = 815306403LL;

    t132 = ((x609-(x610>x611))-x612);

    if (t132 != 126LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x613 = INT8_MIN;
	static int16_t x614 = INT16_MAX;
	uint64_t x615 = 16LLU;
	static volatile int32_t t133 = 639648;

    t133 = ((x613-(x614>x615))-x616);

    if (t133 != -132) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x621 = 45U;
	int32_t x622 = -1777519;
	static int32_t x623 = INT32_MIN;
	int64_t x624 = INT64_MAX;
	static int64_t t134 = -1LL;

    t134 = ((x621-(x622>x623))-x624);

    if (t134 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x625 = 28U;
	int64_t x626 = -1LL;
	volatile int16_t x627 = -3;
	int64_t x628 = -1LL;

    t135 = ((x625-(x626>x627))-x628);

    if (t135 != 28LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x630 = UINT64_MAX;
	int16_t x631 = -6;
	volatile uint64_t t136 = 56607LLU;

    t136 = ((x629-(x630>x631))-x632);

    if (t136 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x633 = 146269992810LLU;
	int8_t x634 = INT8_MIN;
	int16_t x635 = INT16_MAX;
	int8_t x636 = 5;
	uint64_t t137 = 5814752361LLU;

    t137 = ((x633-(x634>x635))-x636);

    if (t137 != 146269992805LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x641 = UINT16_MAX;
	static uint16_t x643 = UINT16_MAX;
	int32_t t138 = 123152989;

    t138 = ((x641-(x642>x643))-x644);

    if (t138 != 98303) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x649 = 1964024;
	uint8_t x651 = UINT8_MAX;
	int8_t x652 = -1;

    t139 = ((x649-(x650>x651))-x652);

    if (t139 != 1964024) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x653 = UINT16_MAX;
	uint64_t x654 = 372868904268320990LLU;
	uint8_t x655 = 1U;
	volatile int16_t x656 = -5117;
	int32_t t140 = -212928;

    t140 = ((x653-(x654>x655))-x656);

    if (t140 != 70651) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x657 = 163363LL;
	int16_t x660 = 2017;
	int64_t t141 = -127572LL;

    t141 = ((x657-(x658>x659))-x660);

    if (t141 != 161346LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x661 = 5LL;
	uint32_t x662 = 84782258U;
	int16_t x663 = INT16_MIN;
	volatile int16_t x664 = 2000;
	int64_t t142 = 190841626333LL;

    t142 = ((x661-(x662>x663))-x664);

    if (t142 != -1995LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x665 = INT16_MIN;
	volatile uint16_t x666 = 3461U;
	static int64_t x667 = -1LL;
	static uint16_t x668 = 235U;
	volatile int32_t t143 = -1443109;

    t143 = ((x665-(x666>x667))-x668);

    if (t143 != -33004) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x669 = -11358LL;
	int16_t x670 = -8605;
	int64_t x672 = INT64_MIN;
	int64_t t144 = -1116LL;

    t144 = ((x669-(x670>x671))-x672);

    if (t144 != 9223372036854764450LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x674 = -31;
	uint32_t x675 = UINT32_MAX;
	static uint32_t t145 = 713805220U;

    t145 = ((x673-(x674>x675))-x676);

    if (t145 != 4294967294U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x677 = 1U;
	int8_t x679 = INT8_MIN;
	static int8_t x680 = INT8_MAX;

    t146 = ((x677-(x678>x679))-x680);

    if (t146 != -126) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x682 = INT32_MIN;
	volatile int64_t x683 = 14535299581718092LL;
	int16_t x684 = 203;
	volatile int32_t t147 = -732;

    t147 = ((x681-(x682>x683))-x684);

    if (t147 != -331) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x685 = UINT8_MAX;
	uint8_t x686 = 6U;
	uint8_t x687 = 63U;

    t148 = ((x685-(x686>x687))-x688);

    if (t148 != 18446741992775480309LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x689 = INT8_MIN;
	volatile int8_t x691 = INT8_MAX;
	static uint32_t x692 = 708U;
	uint32_t t149 = 17U;

    t149 = ((x689-(x690>x691))-x692);

    if (t149 != 4294966459U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x693 = -300876295008558659LL;
	int8_t x694 = -1;
	int8_t x695 = INT8_MIN;
	uint16_t x696 = UINT16_MAX;
	static int64_t t150 = 794321786LL;

    t150 = ((x693-(x694>x695))-x696);

    if (t150 != -300876295008624195LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x698 = 1;
	volatile int32_t x699 = INT32_MIN;
	volatile uint64_t x700 = UINT64_MAX;
	volatile uint64_t t151 = 8741LLU;

    t151 = ((x697-(x698>x699))-x700);

    if (t151 != 18446744073677784723LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x701 = UINT16_MAX;
	uint32_t x702 = 126250507U;
	uint32_t x703 = 1458421U;
	int32_t t152 = -21777;

    t152 = ((x701-(x702>x703))-x704);

    if (t152 != 65160) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x705 = 10;
	int16_t x707 = INT16_MAX;
	int8_t x708 = 13;
	volatile int32_t t153 = 32;

    t153 = ((x705-(x706>x707))-x708);

    if (t153 != -3) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint32_t x710 = UINT32_MAX;
	int16_t x712 = INT16_MAX;
	static int32_t t154 = -15;

    t154 = ((x709-(x710>x711))-x712);

    if (t154 != -32770) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x713 = UINT16_MAX;
	volatile int32_t x714 = 163697;
	volatile uint32_t x715 = 725U;
	volatile int64_t x716 = INT64_MAX;
	volatile int64_t t155 = 1600539508872338LL;

    t155 = ((x713-(x714>x715))-x716);

    if (t155 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x717 = -1;
	uint32_t x718 = 465888410U;
	int32_t x720 = -240485001;
	volatile int32_t t156 = -424;

    t156 = ((x717-(x718>x719))-x720);

    if (t156 != 240484999) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x721 = 19;
	volatile uint32_t x722 = 510U;
	uint8_t x723 = 0U;
	volatile int32_t t157 = 38628082;

    t157 = ((x721-(x722>x723))-x724);

    if (t157 != 5) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x725 = -1;
	int64_t x726 = 457894849017302LL;
	volatile int8_t x727 = 17;
	uint16_t x728 = 485U;
	int32_t t158 = 187;

    t158 = ((x725-(x726>x727))-x728);

    if (t158 != -487) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x729 = INT32_MAX;
	uint8_t x730 = UINT8_MAX;
	uint64_t x731 = UINT64_MAX;
	int32_t x732 = 393;
	int32_t t159 = 5547;

    t159 = ((x729-(x730>x731))-x732);

    if (t159 != 2147483254) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x733 = 4517136LL;
	uint64_t x734 = UINT64_MAX;
	volatile int64_t x736 = INT64_MAX;
	volatile int64_t t160 = 6091052616435942LL;

    t160 = ((x733-(x734>x735))-x736);

    if (t160 != -9223372036850258671LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x737 = 37;
	static int16_t x738 = INT16_MAX;
	int8_t x739 = INT8_MIN;
	volatile int16_t x740 = 2753;
	int32_t t161 = 1463;

    t161 = ((x737-(x738>x739))-x740);

    if (t161 != -2717) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x741 = -3726;
	static int8_t x742 = 24;
	int32_t x743 = INT32_MAX;
	static int64_t x744 = 9551033LL;
	volatile int64_t t162 = 440258502046LL;

    t162 = ((x741-(x742>x743))-x744);

    if (t162 != -9554759LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x745 = 4144763121185495737LLU;
	int16_t x747 = INT16_MIN;
	volatile int16_t x748 = -57;
	uint64_t t163 = 15026444444641256LLU;

    t163 = ((x745-(x746>x747))-x748);

    if (t163 != 4144763121185495793LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x749 = 641548508U;
	int8_t x750 = -1;
	uint64_t x751 = UINT64_MAX;
	static volatile uint32_t t164 = 12078370U;

    t164 = ((x749-(x750>x751))-x752);

    if (t164 != 641548509U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x754 = INT8_MIN;
	static volatile int64_t x755 = INT64_MIN;
	int8_t x756 = INT8_MIN;
	int32_t t165 = 6;

    t165 = ((x753-(x754>x755))-x756);

    if (t165 != 382) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x761 = 7U;
	int8_t x763 = INT8_MIN;
	static uint32_t x764 = 3U;
	volatile uint32_t t166 = 1638907U;

    t166 = ((x761-(x762>x763))-x764);

    if (t166 != 3U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x769 = -3138;
	uint8_t x770 = 68U;
	int64_t x771 = INT64_MIN;
	uint8_t x772 = 51U;
	int32_t t167 = -1073238;

    t167 = ((x769-(x770>x771))-x772);

    if (t167 != -3190) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x774 = UINT32_MAX;
	uint32_t x775 = UINT32_MAX;
	uint64_t x776 = 91849LLU;

    t168 = ((x773-(x774>x775))-x776);

    if (t168 != 18446744073709459763LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x781 = INT16_MIN;
	static int64_t x782 = -5LL;
	int64_t x783 = 142071217706329192LL;

    t169 = ((x781-(x782>x783))-x784);

    if (t169 != -32767) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x785 = UINT32_MAX;
	uint32_t x786 = 252971179U;
	int8_t x787 = INT8_MAX;
	uint32_t x788 = UINT32_MAX;

    t170 = ((x785-(x786>x787))-x788);

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x793 = 297791298227985LL;
	uint16_t x794 = 1U;
	static int32_t x795 = 978973;
	int8_t x796 = 0;
	static int64_t t171 = -119LL;

    t171 = ((x793-(x794>x795))-x796);

    if (t171 != 297791298227985LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x797 = 1703754758LLU;
	volatile int8_t x799 = INT8_MAX;
	uint64_t t172 = 9LLU;

    t172 = ((x797-(x798>x799))-x800);

    if (t172 != 1703721991LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x803 = 7037LLU;
	volatile uint8_t x804 = 22U;
	static uint32_t t173 = 228041U;

    t173 = ((x801-(x802>x803))-x804);

    if (t173 != 8696U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x805 = UINT16_MAX;
	uint8_t x808 = 17U;
	volatile int32_t t174 = -3;

    t174 = ((x805-(x806>x807))-x808);

    if (t174 != 65518) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x809 = 2U;
	uint16_t x810 = 8U;
	uint32_t x811 = 27327U;
	uint32_t x812 = 69223734U;
	static uint32_t t175 = 207509U;

    t175 = ((x809-(x810>x811))-x812);

    if (t175 != 4225743564U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x817 = INT16_MIN;
	static uint8_t x818 = UINT8_MAX;
	int32_t x819 = -2;
	static uint8_t x820 = UINT8_MAX;
	volatile int32_t t176 = 246837730;

    t176 = ((x817-(x818>x819))-x820);

    if (t176 != -33024) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x821 = 8395;
	volatile int64_t x822 = INT64_MIN;
	static int64_t x823 = 2686710LL;
	int8_t x824 = INT8_MAX;
	volatile int32_t t177 = 2;

    t177 = ((x821-(x822>x823))-x824);

    if (t177 != 8268) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x827 = UINT32_MAX;
	volatile uint32_t x828 = UINT32_MAX;

    t178 = ((x825-(x826>x827))-x828);

    if (t178 != 165308493U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x833 = 6047828;
	int8_t x834 = INT8_MIN;
	int16_t x835 = INT16_MIN;
	uint8_t x836 = 30U;
	static volatile int32_t t179 = -806628303;

    t179 = ((x833-(x834>x835))-x836);

    if (t179 != 6047797) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x845 = 6;
	static int64_t x846 = INT64_MIN;
	volatile uint16_t x847 = 43U;
	int16_t x848 = 6229;
	int32_t t180 = 1;

    t180 = ((x845-(x846>x847))-x848);

    if (t180 != -6223) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x849 = -2868;
	int64_t x850 = -1LL;
	int32_t x851 = 29352;
	static int16_t x852 = INT16_MAX;

    t181 = ((x849-(x850>x851))-x852);

    if (t181 != -35635) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x853 = 336604U;
	volatile uint16_t x855 = 14581U;
	volatile int32_t x856 = 46349;
	static uint32_t t182 = 9688709U;

    t182 = ((x853-(x854>x855))-x856);

    if (t182 != 290255U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x857 = INT8_MAX;
	uint8_t x859 = 5U;
	int8_t x860 = INT8_MIN;
	int32_t t183 = 7;

    t183 = ((x857-(x858>x859))-x860);

    if (t183 != 255) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x861 = -3;
	int32_t x862 = -3;
	int64_t x863 = -230LL;
	int32_t x864 = INT32_MIN;
	int32_t t184 = 849;

    t184 = ((x861-(x862>x863))-x864);

    if (t184 != 2147483644) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x865 = INT64_MIN;
	static uint64_t x866 = 14LLU;
	int8_t x867 = 53;
	volatile int64_t x868 = -1698LL;
	volatile int64_t t185 = 82641043LL;

    t185 = ((x865-(x866>x867))-x868);

    if (t185 != -9223372036854774110LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x869 = 8333092LLU;
	int16_t x870 = -492;
	static int8_t x872 = -1;

    t186 = ((x869-(x870>x871))-x872);

    if (t186 != 8333093LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x873 = UINT64_MAX;
	int32_t x874 = INT32_MIN;
	static int8_t x875 = INT8_MIN;
	uint64_t t187 = 6853497110170790LLU;

    t187 = ((x873-(x874>x875))-x876);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x877 = 1733819U;
	static int8_t x879 = 1;
	volatile uint64_t t188 = 1927112LLU;

    t188 = ((x877-(x878>x879))-x880);

    if (t188 != 1733820LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x885 = UINT16_MAX;
	int16_t x886 = INT16_MIN;
	uint8_t x888 = UINT8_MAX;

    t189 = ((x885-(x886>x887))-x888);

    if (t189 != 65279) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x889 = 2162;
	int8_t x890 = -1;
	static uint16_t x892 = 45U;
	volatile int32_t t190 = 0;

    t190 = ((x889-(x890>x891))-x892);

    if (t190 != 2116) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x893 = 49U;
	static uint64_t x894 = 376565LLU;
	volatile uint8_t x895 = UINT8_MAX;
	static uint16_t x896 = UINT16_MAX;
	static volatile int32_t t191 = -39;

    t191 = ((x893-(x894>x895))-x896);

    if (t191 != -65487) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x897 = 0;
	int8_t x899 = INT8_MIN;
	static int8_t x900 = -28;
	int32_t t192 = 51;

    t192 = ((x897-(x898>x899))-x900);

    if (t192 != 27) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x901 = 7800712250631243LLU;
	static volatile int16_t x902 = -4560;
	uint32_t x903 = UINT32_MAX;
	volatile uint64_t t193 = 18805LLU;

    t193 = ((x901-(x902>x903))-x904);

    if (t193 != 7800712250631243LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x905 = 476U;
	int32_t x906 = INT32_MIN;
	static uint64_t x908 = 1LLU;
	volatile uint64_t t194 = 179230561165439648LLU;

    t194 = ((x905-(x906>x907))-x908);

    if (t194 != 474LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x910 = INT32_MAX;
	static int64_t x911 = 24597730LL;

    t195 = ((x909-(x910>x911))-x912);

    if (t195 != 32903) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x914 = -1LL;
	int64_t x915 = 16145313510428971LL;
	uint64_t x916 = 155564617741233802LLU;
	volatile uint64_t t196 = 3LLU;

    t196 = ((x913-(x914>x915))-x916);

    if (t196 != 18291179455968317827LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x921 = INT16_MAX;
	static volatile uint32_t x922 = UINT32_MAX;
	static int16_t x923 = 3737;
	static int16_t x924 = INT16_MIN;
	volatile int32_t t197 = -9312;

    t197 = ((x921-(x922>x923))-x924);

    if (t197 != 65534) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x929 = 7U;
	int64_t x930 = INT64_MAX;
	static int64_t x932 = 1915781LL;
	volatile int64_t t198 = -5475669LL;

    t198 = ((x929-(x930>x931))-x932);

    if (t198 != -1915775LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x933 = -1LL;
	int16_t x934 = INT16_MIN;
	uint16_t x936 = 9282U;
	static int64_t t199 = -1451382083LL;

    t199 = ((x933-(x934>x935))-x936);

    if (t199 != -9284LL) { NG(); } else { ; }
	
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

