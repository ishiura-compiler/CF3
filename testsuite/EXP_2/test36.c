
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

static int16_t x1 = -216;
int16_t x2 = INT16_MAX;
volatile uint64_t x4 = 1640704683LLU;
static int32_t t2 = -3362;
uint64_t x14 = UINT64_MAX;
int32_t x19 = 2970;
volatile int32_t x20 = INT32_MAX;
uint8_t x25 = UINT8_MAX;
static int32_t x42 = -1;
uint32_t x44 = 1311233788U;
int32_t t7 = -437693736;
volatile uint16_t x53 = UINT16_MAX;
int16_t x65 = -1;
int32_t x67 = INT32_MIN;
uint8_t x68 = 104U;
static uint16_t x76 = 799U;
int32_t t15 = -37080;
volatile int8_t x93 = -1;
uint64_t x99 = UINT64_MAX;
uint32_t x102 = UINT32_MAX;
uint64_t x106 = 522857608617LLU;
int32_t x107 = -1;
static int16_t x120 = 4;
volatile int8_t x127 = 3;
int16_t x134 = -1;
int32_t t24 = -645106;
int8_t x140 = INT8_MIN;
int64_t x148 = INT64_MIN;
volatile uint16_t x150 = UINT16_MAX;
static int64_t x158 = 4727716LL;
int8_t x162 = -1;
volatile int32_t t29 = 1;
int64_t x166 = 255104LL;
static uint64_t x171 = 6LLU;
int16_t x177 = INT16_MAX;
int32_t x179 = -1;
int32_t t32 = -5404;
int8_t x184 = INT8_MIN;
int64_t x190 = -1LL;
int32_t t36 = 3;
int32_t t37 = 557116;
int8_t x208 = INT8_MIN;
uint64_t x215 = 2236963576435821666LLU;
uint32_t x218 = UINT32_MAX;
volatile int32_t x220 = 15943;
static volatile uint32_t x226 = UINT32_MAX;
static uint64_t x228 = 38562LLU;
volatile int16_t x241 = INT16_MAX;
int32_t x246 = INT32_MIN;
uint64_t x247 = 136354968836LLU;
int8_t x249 = INT8_MIN;
static uint16_t x257 = 20U;
static volatile int32_t t47 = 1;
int64_t x281 = -1LL;
uint64_t x284 = 208846LLU;
int16_t x289 = -1;
int64_t x296 = INT64_MAX;
uint16_t x301 = 57U;
volatile int8_t x302 = -1;
int64_t x305 = -15535071LL;
volatile int16_t x307 = -4117;
int32_t t58 = 6;
int16_t x309 = INT16_MAX;
static volatile uint32_t x310 = 1307U;
volatile int8_t x311 = INT8_MAX;
int32_t t61 = -74628;
int64_t x329 = -15758LL;
volatile int32_t t62 = -2633103;
int16_t x339 = INT16_MIN;
static int32_t t63 = -128;
int64_t x349 = 151LL;
static int16_t x351 = INT16_MAX;
static int16_t x374 = INT16_MAX;
volatile int32_t t69 = -3349322;
int16_t x378 = 126;
int8_t x380 = 5;
volatile int32_t t70 = -310219;
int32_t x383 = -7;
int32_t t72 = 6352115;
static uint16_t x397 = 5U;
int64_t x403 = 25831LL;
volatile int32_t t75 = -1;
volatile int64_t x410 = -3633820784070183LL;
volatile int32_t t77 = -510;
static int8_t x426 = INT8_MIN;
uint16_t x434 = 5551U;
int32_t x438 = -63567;
volatile int32_t t81 = -7;
int64_t x453 = -92812077LL;
static int32_t x456 = 999;
volatile int16_t x462 = INT16_MIN;
int32_t t85 = 890571452;
int16_t x485 = INT16_MIN;
int32_t x487 = -1;
int8_t x488 = 4;
volatile int32_t t89 = 2461271;
uint8_t x497 = 14U;
int16_t x498 = 232;
uint16_t x500 = UINT16_MAX;
volatile int32_t t91 = -326;
uint64_t x506 = 1020233672123654023LLU;
volatile int32_t t92 = 63;
int16_t x515 = 1076;
int32_t t93 = -23;
static int16_t x533 = 1451;
uint32_t x538 = 1737U;
volatile int32_t t97 = -33;
int32_t t98 = -95355570;
static uint8_t x553 = UINT8_MAX;
int32_t x557 = INT32_MIN;
int32_t x559 = 23296;
volatile uint16_t x560 = 19U;
int32_t t100 = 107632909;
int16_t x570 = -7890;
static int32_t t102 = -89716462;
static int32_t x591 = -104138;
uint16_t x603 = 0U;
uint32_t x613 = 5U;
int16_t x621 = INT16_MAX;
int8_t x622 = 15;
int16_t x623 = INT16_MIN;
int16_t x624 = INT16_MIN;
uint64_t x632 = 688348LLU;
volatile uint32_t x658 = 1628619U;
int32_t t117 = -16;
volatile int64_t x668 = INT64_MIN;
static int16_t x670 = INT16_MIN;
uint32_t x673 = 3U;
int64_t x692 = 188976291306194LL;
int32_t t124 = -72;
static uint16_t x697 = UINT16_MAX;
static int16_t x700 = INT16_MIN;
int32_t t126 = 38189356;
uint32_t x705 = UINT32_MAX;
int32_t t127 = -24;
static uint32_t x712 = UINT32_MAX;
static int32_t x718 = -1;
int16_t x730 = INT16_MIN;
static uint64_t x738 = 37800LLU;
int16_t x748 = 51;
int16_t x750 = INT16_MIN;
uint8_t x774 = 25U;
static volatile uint32_t x780 = 31234U;
int64_t x801 = -3LL;
volatile int16_t x803 = 41;
int64_t x816 = INT64_MIN;
int16_t x825 = INT16_MIN;
int32_t t144 = -11078738;
int8_t x833 = 12;
volatile int32_t t146 = -5465395;
volatile int64_t x847 = INT64_MIN;
int8_t x855 = INT8_MAX;
static int64_t x857 = INT64_MIN;
volatile int8_t x861 = -1;
uint16_t x862 = UINT16_MAX;
volatile int8_t x870 = INT8_MAX;
int32_t x888 = INT32_MAX;
int64_t x893 = INT64_MAX;
volatile uint8_t x900 = UINT8_MAX;
static uint64_t x903 = UINT64_MAX;
uint32_t x904 = UINT32_MAX;
volatile uint32_t x911 = 432230U;
uint16_t x912 = 0U;
uint64_t x918 = UINT64_MAX;
int32_t t160 = 11470988;
static int16_t x927 = -1;
uint8_t x928 = UINT8_MAX;
static int8_t x948 = 0;
static int64_t x958 = 2520LL;
uint64_t x959 = 6032172715385LLU;
int32_t x961 = INT32_MIN;
int32_t t166 = -33013;
int8_t x969 = -1;
static int64_t x982 = -13027579434LL;
int8_t x990 = INT8_MIN;
volatile int8_t x995 = INT8_MIN;
int64_t x1015 = INT64_MIN;
static int32_t t174 = 940;
int32_t x1018 = INT32_MAX;
int64_t x1021 = -1LL;
int16_t x1022 = 10862;
int32_t x1029 = INT32_MIN;
volatile int8_t x1038 = -1;
volatile int32_t x1045 = -1;
uint32_t x1066 = 250126U;
uint32_t x1067 = UINT32_MAX;
volatile int8_t x1077 = INT8_MIN;
uint32_t x1079 = 3U;
volatile uint16_t x1092 = 8U;
uint32_t x1097 = 224323U;
uint64_t x1105 = 242823692985944500LLU;
int32_t t185 = 52;
volatile uint8_t x1111 = 0U;
int64_t x1118 = INT64_MAX;
static int32_t x1121 = INT32_MAX;
static uint64_t x1122 = UINT64_MAX;
volatile int32_t t189 = 293703;
volatile int64_t x1135 = 9016837692341783LL;
volatile int8_t x1147 = -1;
static volatile int32_t t196 = 64037222;
int64_t x1179 = INT64_MAX;
uint64_t x1180 = 564666749212LLU;
static volatile uint32_t x1185 = 7969798U;
int32_t x1189 = INT32_MIN;
volatile uint64_t x1192 = 1860LLU;


void f0(void) {
    	static volatile uint8_t x3 = UINT8_MAX;
	int32_t t0 = 30010939;

    t0 = ((x1*(x2+x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -132;
	int8_t x6 = INT8_MIN;
	uint32_t x7 = UINT32_MAX;
	volatile int64_t x8 = INT64_MAX;
	int32_t t1 = -89819841;

    t1 = ((x5*(x6+x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	volatile int8_t x10 = -3;
	static volatile uint8_t x11 = 1U;
	int32_t x12 = INT32_MIN;

    t2 = ((x9*(x10+x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MIN;
	int16_t x15 = -1;
	volatile int64_t x16 = 12722734LL;
	int32_t t3 = -906870;

    t3 = ((x13*(x14+x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	uint64_t x18 = 218854786LLU;
	int32_t t4 = -460758993;

    t4 = ((x17*(x18+x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = 22;
	uint8_t x22 = 0U;
	int16_t x23 = INT16_MAX;
	uint16_t x24 = 1U;
	static int32_t t5 = 55380243;

    t5 = ((x21*(x22+x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = 41858LL;
	int16_t x27 = INT16_MIN;
	uint16_t x28 = 27937U;
	volatile int32_t t6 = 30545549;

    t6 = ((x25*(x26+x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x41 = UINT64_MAX;
	int16_t x43 = -1;

    t7 = ((x41*(x42+x43))==x44);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x54 = 110113282760003LLU;
	volatile int32_t x55 = 646824541;
	int64_t x56 = INT64_MIN;
	volatile int32_t t8 = -81;

    t8 = ((x53*(x54+x55))==x56);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x57 = 1596LLU;
	volatile int64_t x58 = 2745LL;
	int64_t x59 = INT64_MIN;
	int16_t x60 = -1;
	volatile int32_t t9 = -1601286;

    t9 = ((x57*(x58+x59))==x60);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x61 = 4;
	int8_t x62 = -1;
	static int16_t x63 = 6;
	int32_t x64 = -1;
	volatile int32_t t10 = 10385;

    t10 = ((x61*(x62+x63))==x64);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x66 = 709U;
	int32_t t11 = 47268;

    t11 = ((x65*(x66+x67))==x68);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x69 = INT16_MAX;
	int8_t x70 = -3;
	int16_t x71 = -1;
	int16_t x72 = -1;
	int32_t t12 = 1;

    t12 = ((x69*(x70+x71))==x72);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x73 = INT16_MIN;
	static int16_t x74 = INT16_MIN;
	volatile int64_t x75 = 92514301LL;
	volatile int32_t t13 = 26;

    t13 = ((x73*(x74+x75))==x76);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x77 = -181;
	static volatile uint64_t x78 = 220297404547LLU;
	uint16_t x79 = 6598U;
	int16_t x80 = INT16_MIN;
	volatile int32_t t14 = -5790422;

    t14 = ((x77*(x78+x79))==x80);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x81 = -1;
	static int16_t x82 = 152;
	static volatile uint8_t x83 = 67U;
	int16_t x84 = INT16_MIN;

    t15 = ((x81*(x82+x83))==x84);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x94 = -935367482686LL;
	uint8_t x95 = UINT8_MAX;
	int32_t x96 = INT32_MIN;
	int32_t t16 = -43024;

    t16 = ((x93*(x94+x95))==x96);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x97 = INT8_MIN;
	int32_t x98 = INT32_MAX;
	static int32_t x100 = INT32_MIN;
	volatile int32_t t17 = -1459;

    t17 = ((x97*(x98+x99))==x100);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x101 = 0;
	uint8_t x103 = 6U;
	volatile int8_t x104 = 27;
	int32_t t18 = 10;

    t18 = ((x101*(x102+x103))==x104);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x105 = 9192049U;
	int8_t x108 = 14;
	volatile int32_t t19 = 262134871;

    t19 = ((x105*(x106+x107))==x108);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x109 = UINT64_MAX;
	static int64_t x110 = -1LL;
	uint32_t x111 = 127178U;
	static int32_t x112 = 0;
	volatile int32_t t20 = -41;

    t20 = ((x109*(x110+x111))==x112);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x117 = INT16_MAX;
	int16_t x118 = INT16_MIN;
	static volatile int32_t x119 = -1;
	static volatile int32_t t21 = -721911;

    t21 = ((x117*(x118+x119))==x120);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x121 = 33U;
	static volatile uint32_t x122 = UINT32_MAX;
	uint64_t x123 = 271017567481367LLU;
	static volatile uint32_t x124 = UINT32_MAX;
	int32_t t22 = 434;

    t22 = ((x121*(x122+x123))==x124);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x125 = UINT32_MAX;
	int16_t x126 = -1;
	int16_t x128 = 27;
	static int32_t t23 = 45;

    t23 = ((x125*(x126+x127))==x128);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x133 = -1LL;
	int32_t x135 = INT32_MAX;
	uint32_t x136 = UINT32_MAX;

    t24 = ((x133*(x134+x135))==x136);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x137 = 1U;
	volatile int16_t x138 = -13603;
	static volatile int32_t x139 = 1846114;
	volatile int32_t t25 = -3;

    t25 = ((x137*(x138+x139))==x140);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x145 = 25190U;
	int8_t x146 = -1;
	volatile int8_t x147 = INT8_MIN;
	volatile int32_t t26 = 3;

    t26 = ((x145*(x146+x147))==x148);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x149 = 534268873138733921LLU;
	volatile uint8_t x151 = 0U;
	static int16_t x152 = INT16_MIN;
	int32_t t27 = -896712400;

    t27 = ((x149*(x150+x151))==x152);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x157 = INT32_MIN;
	static uint16_t x159 = 0U;
	uint16_t x160 = UINT16_MAX;
	static volatile int32_t t28 = -25309887;

    t28 = ((x157*(x158+x159))==x160);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x161 = -1;
	int8_t x163 = INT8_MIN;
	int32_t x164 = -1;

    t29 = ((x161*(x162+x163))==x164);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x165 = 7524U;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = 30;
	static volatile int32_t t30 = -43425945;

    t30 = ((x165*(x166+x167))==x168);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x169 = INT16_MIN;
	static volatile int64_t x170 = INT64_MIN;
	int64_t x172 = -536786707983233604LL;
	int32_t t31 = -12489608;

    t31 = ((x169*(x170+x171))==x172);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x178 = 50U;
	volatile int8_t x180 = INT8_MAX;

    t32 = ((x177*(x178+x179))==x180);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x181 = -1;
	uint64_t x182 = 5684519105LLU;
	uint8_t x183 = 22U;
	static int32_t t33 = -126;

    t33 = ((x181*(x182+x183))==x184);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MAX;
	uint8_t x187 = 42U;
	int16_t x188 = 0;
	volatile int32_t t34 = 6365930;

    t34 = ((x185*(x186+x187))==x188);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x189 = INT32_MIN;
	static int8_t x191 = -1;
	int8_t x192 = INT8_MAX;
	static int32_t t35 = 131;

    t35 = ((x189*(x190+x191))==x192);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x193 = -1;
	static uint32_t x194 = 16820074U;
	uint8_t x195 = 14U;
	uint32_t x196 = UINT32_MAX;

    t36 = ((x193*(x194+x195))==x196);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x197 = -3;
	uint8_t x198 = UINT8_MAX;
	static int8_t x199 = -1;
	static int32_t x200 = -1;

    t37 = ((x197*(x198+x199))==x200);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x205 = 1LLU;
	uint8_t x206 = 0U;
	uint64_t x207 = UINT64_MAX;
	volatile int32_t t38 = 671729482;

    t38 = ((x205*(x206+x207))==x208);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	volatile int64_t x216 = -13618616310713634LL;
	int32_t t39 = 246;

    t39 = ((x213*(x214+x215))==x216);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x217 = 3;
	uint64_t x219 = 1542818554LLU;
	static volatile int32_t t40 = 1520;

    t40 = ((x217*(x218+x219))==x220);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x221 = -1;
	volatile int8_t x222 = -1;
	int64_t x223 = 32601LL;
	static volatile uint8_t x224 = 9U;
	static int32_t t41 = 28002690;

    t41 = ((x221*(x222+x223))==x224);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x225 = UINT16_MAX;
	static int64_t x227 = -1LL;
	int32_t t42 = 522597;

    t42 = ((x225*(x226+x227))==x228);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x229 = 84;
	static int32_t x230 = INT32_MIN;
	int64_t x231 = 7954LL;
	static uint8_t x232 = 18U;
	volatile int32_t t43 = 1;

    t43 = ((x229*(x230+x231))==x232);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x242 = 1;
	int16_t x243 = -1;
	int64_t x244 = -1LL;
	int32_t t44 = 772;

    t44 = ((x241*(x242+x243))==x244);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x245 = UINT8_MAX;
	int8_t x248 = -1;
	volatile int32_t t45 = 9586;

    t45 = ((x245*(x246+x247))==x248);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x250 = INT16_MIN;
	int16_t x251 = INT16_MAX;
	static uint16_t x252 = 0U;
	int32_t t46 = -1741623;

    t46 = ((x249*(x250+x251))==x252);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x258 = 1LL;
	volatile int16_t x259 = INT16_MIN;
	uint64_t x260 = 40056LLU;

    t47 = ((x257*(x258+x259))==x260);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x261 = INT8_MIN;
	static int64_t x262 = 14766919875217LL;
	uint64_t x263 = 1496057622042LLU;
	volatile int16_t x264 = INT16_MAX;
	int32_t t48 = 346035;

    t48 = ((x261*(x262+x263))==x264);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x265 = 3;
	int8_t x266 = -1;
	int8_t x267 = -1;
	volatile int8_t x268 = INT8_MAX;
	int32_t t49 = -88552099;

    t49 = ((x265*(x266+x267))==x268);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x273 = INT8_MIN;
	int8_t x274 = -1;
	int64_t x275 = -1LL;
	int16_t x276 = -1;
	int32_t t50 = -98;

    t50 = ((x273*(x274+x275))==x276);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x277 = -189;
	uint32_t x278 = 13U;
	volatile int32_t x279 = -25647;
	volatile uint8_t x280 = UINT8_MAX;
	volatile int32_t t51 = 30;

    t51 = ((x277*(x278+x279))==x280);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x282 = INT64_MIN;
	static int8_t x283 = INT8_MAX;
	volatile int32_t t52 = -542844776;

    t52 = ((x281*(x282+x283))==x284);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x285 = -1LL;
	static uint8_t x286 = UINT8_MAX;
	int32_t x287 = -394;
	uint16_t x288 = 17U;
	volatile int32_t t53 = 782;

    t53 = ((x285*(x286+x287))==x288);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x290 = INT8_MAX;
	static int32_t x291 = -17739193;
	volatile uint16_t x292 = UINT16_MAX;
	static int32_t t54 = -424;

    t54 = ((x289*(x290+x291))==x292);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x293 = -1;
	int8_t x294 = INT8_MAX;
	int32_t x295 = INT32_MIN;
	static int32_t t55 = -2941271;

    t55 = ((x293*(x294+x295))==x296);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MIN;
	int16_t x299 = 0;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t56 = -28119903;

    t56 = ((x297*(x298+x299))==x300);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x303 = INT8_MIN;
	static uint16_t x304 = 1U;
	volatile int32_t t57 = 54385;

    t57 = ((x301*(x302+x303))==x304);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x306 = INT32_MAX;
	volatile uint64_t x308 = 20968107802012556LLU;

    t58 = ((x305*(x306+x307))==x308);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x312 = INT64_MAX;
	volatile int32_t t59 = 4028764;

    t59 = ((x309*(x310+x311))==x312);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x313 = -1;
	int64_t x314 = -1LL;
	static volatile int8_t x315 = INT8_MIN;
	volatile int64_t x316 = INT64_MAX;
	int32_t t60 = 465510;

    t60 = ((x313*(x314+x315))==x316);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x317 = 385265;
	uint64_t x318 = 1197006981691889LLU;
	int64_t x319 = INT64_MAX;
	int8_t x320 = INT8_MIN;

    t61 = ((x317*(x318+x319))==x320);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x330 = -5;
	volatile int16_t x331 = -791;
	static volatile uint16_t x332 = 186U;

    t62 = ((x329*(x330+x331))==x332);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x337 = 4341785445780652LLU;
	volatile uint8_t x338 = 3U;
	volatile int8_t x340 = -1;

    t63 = ((x337*(x338+x339))==x340);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x341 = -17049007545946LL;
	uint16_t x342 = UINT16_MAX;
	volatile uint64_t x343 = 89997990LLU;
	int8_t x344 = INT8_MAX;
	int32_t t64 = 15870;

    t64 = ((x341*(x342+x343))==x344);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x350 = INT32_MIN;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t65 = -944298;

    t65 = ((x349*(x350+x351))==x352);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x353 = 54610325U;
	volatile uint16_t x354 = 648U;
	uint8_t x355 = UINT8_MAX;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t66 = -430598279;

    t66 = ((x353*(x354+x355))==x356);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x361 = 2865U;
	volatile int32_t x362 = 377566;
	uint16_t x363 = 446U;
	uint32_t x364 = 101883U;
	static int32_t t67 = -9939104;

    t67 = ((x361*(x362+x363))==x364);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x369 = INT8_MIN;
	static uint16_t x370 = 125U;
	static int8_t x371 = INT8_MIN;
	static uint64_t x372 = 27317384817750901LLU;
	volatile int32_t t68 = -2027466;

    t68 = ((x369*(x370+x371))==x372);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x373 = -4;
	volatile uint8_t x375 = UINT8_MAX;
	int16_t x376 = -39;

    t69 = ((x373*(x374+x375))==x376);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x377 = UINT64_MAX;
	static int32_t x379 = INT32_MIN;

    t70 = ((x377*(x378+x379))==x380);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x381 = 1529U;
	int8_t x382 = INT8_MIN;
	volatile uint8_t x384 = 15U;
	volatile int32_t t71 = -463885031;

    t71 = ((x381*(x382+x383))==x384);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x385 = -704379LL;
	static volatile int32_t x386 = -3502;
	static volatile uint16_t x387 = 6U;
	volatile int16_t x388 = INT16_MIN;

    t72 = ((x385*(x386+x387))==x388);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x393 = -1LL;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = 5U;
	static uint16_t x396 = UINT16_MAX;
	volatile int32_t t73 = -258559188;

    t73 = ((x393*(x394+x395))==x396);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x398 = INT8_MIN;
	volatile int16_t x399 = INT16_MAX;
	uint16_t x400 = 25U;
	volatile int32_t t74 = -525772911;

    t74 = ((x397*(x398+x399))==x400);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x401 = 82U;
	volatile int64_t x402 = -86943LL;
	int64_t x404 = 253531609038253950LL;

    t75 = ((x401*(x402+x403))==x404);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x409 = -1;
	int16_t x411 = 62;
	int64_t x412 = INT64_MIN;
	int32_t t76 = -1;

    t76 = ((x409*(x410+x411))==x412);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x413 = 1;
	int64_t x414 = INT64_MIN;
	uint8_t x415 = 6U;
	int8_t x416 = INT8_MIN;

    t77 = ((x413*(x414+x415))==x416);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x421 = INT16_MIN;
	volatile int32_t x422 = 28;
	static uint8_t x423 = 31U;
	int8_t x424 = INT8_MIN;
	int32_t t78 = -32175;

    t78 = ((x421*(x422+x423))==x424);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x425 = UINT8_MAX;
	int16_t x427 = -242;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t79 = -5508920;

    t79 = ((x425*(x426+x427))==x428);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x433 = 0U;
	int8_t x435 = -1;
	int8_t x436 = -1;
	volatile int32_t t80 = 110;

    t80 = ((x433*(x434+x435))==x436);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x437 = -1;
	volatile int16_t x439 = 7366;
	int8_t x440 = -3;

    t81 = ((x437*(x438+x439))==x440);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x441 = 52U;
	volatile uint16_t x442 = UINT16_MAX;
	static uint16_t x443 = UINT16_MAX;
	volatile int64_t x444 = INT64_MIN;
	int32_t t82 = -121626;

    t82 = ((x441*(x442+x443))==x444);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x445 = INT32_MAX;
	uint32_t x446 = 106387969U;
	uint8_t x447 = 31U;
	static uint16_t x448 = 2996U;
	int32_t t83 = 918564855;

    t83 = ((x445*(x446+x447))==x448);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x454 = -1;
	volatile int64_t x455 = -74LL;
	static volatile int32_t t84 = -16975;

    t84 = ((x453*(x454+x455))==x456);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x461 = -1;
	int32_t x463 = INT32_MAX;
	static int32_t x464 = -6316725;

    t85 = ((x461*(x462+x463))==x464);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x465 = -3;
	static int16_t x466 = -2;
	int16_t x467 = -37;
	uint64_t x468 = 3877884113531786LLU;
	volatile int32_t t86 = 331353967;

    t86 = ((x465*(x466+x467))==x468);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x473 = -15;
	static int64_t x474 = -921426756533510LL;
	static volatile int8_t x475 = 6;
	int16_t x476 = INT16_MIN;
	volatile int32_t t87 = -588740558;

    t87 = ((x473*(x474+x475))==x476);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x477 = -1;
	int16_t x478 = INT16_MAX;
	int16_t x479 = -1;
	uint16_t x480 = UINT16_MAX;
	volatile int32_t t88 = 22;

    t88 = ((x477*(x478+x479))==x480);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x486 = 51U;

    t89 = ((x485*(x486+x487))==x488);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x493 = INT16_MIN;
	uint32_t x494 = 6137U;
	int32_t x495 = -1;
	volatile int8_t x496 = -1;
	volatile int32_t t90 = 5509;

    t90 = ((x493*(x494+x495))==x496);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x499 = INT16_MIN;

    t91 = ((x497*(x498+x499))==x500);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x505 = INT8_MIN;
	static uint16_t x507 = UINT16_MAX;
	static int64_t x508 = 708209865699LL;

    t92 = ((x505*(x506+x507))==x508);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x513 = -1;
	uint64_t x514 = 104539790LLU;
	int64_t x516 = 5LL;

    t93 = ((x513*(x514+x515))==x516);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x525 = 1;
	static int16_t x526 = 1;
	int32_t x527 = INT32_MIN;
	static int16_t x528 = INT16_MIN;
	static int32_t t94 = -149897;

    t94 = ((x525*(x526+x527))==x528);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x534 = UINT64_MAX;
	static int16_t x535 = INT16_MIN;
	uint64_t x536 = 52795450932844936LLU;
	volatile int32_t t95 = 4;

    t95 = ((x533*(x534+x535))==x536);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x537 = UINT16_MAX;
	uint64_t x539 = 21782963448382617LLU;
	volatile int32_t x540 = INT32_MIN;
	static int32_t t96 = 2770;

    t96 = ((x537*(x538+x539))==x540);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x545 = 11630218966248765LL;
	volatile int64_t x546 = -1LL;
	int8_t x547 = INT8_MAX;
	int64_t x548 = INT64_MIN;

    t97 = ((x545*(x546+x547))==x548);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x549 = -2381;
	static uint16_t x550 = UINT16_MAX;
	uint8_t x551 = 5U;
	uint32_t x552 = UINT32_MAX;

    t98 = ((x549*(x550+x551))==x552);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x554 = INT8_MIN;
	int16_t x555 = -1;
	int8_t x556 = 5;
	int32_t t99 = 129560;

    t99 = ((x553*(x554+x555))==x556);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x558 = UINT32_MAX;

    t100 = ((x557*(x558+x559))==x560);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x565 = 1;
	int32_t x566 = INT32_MIN;
	static uint8_t x567 = UINT8_MAX;
	uint8_t x568 = 47U;
	int32_t t101 = 468662;

    t101 = ((x565*(x566+x567))==x568);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x569 = -1;
	int16_t x571 = INT16_MAX;
	int8_t x572 = INT8_MAX;

    t102 = ((x569*(x570+x571))==x572);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x577 = 52094877U;
	static int8_t x578 = INT8_MIN;
	int64_t x579 = -1LL;
	int32_t x580 = INT32_MIN;
	volatile int32_t t103 = -948792;

    t103 = ((x577*(x578+x579))==x580);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x589 = INT8_MAX;
	int8_t x590 = INT8_MIN;
	volatile uint16_t x592 = UINT16_MAX;
	static int32_t t104 = 8;

    t104 = ((x589*(x590+x591))==x592);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x601 = INT8_MAX;
	int8_t x602 = INT8_MIN;
	uint64_t x604 = 664746024748LLU;
	volatile int32_t t105 = -107111463;

    t105 = ((x601*(x602+x603))==x604);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x609 = INT32_MIN;
	static volatile uint8_t x610 = 1U;
	volatile uint32_t x611 = 7U;
	int8_t x612 = -1;
	int32_t t106 = 0;

    t106 = ((x609*(x610+x611))==x612);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x614 = INT32_MIN;
	uint32_t x615 = 5U;
	uint8_t x616 = UINT8_MAX;
	volatile int32_t t107 = 1234847;

    t107 = ((x613*(x614+x615))==x616);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x617 = 8212433745LL;
	volatile uint64_t x618 = UINT64_MAX;
	uint64_t x619 = 3711LLU;
	int8_t x620 = INT8_MIN;
	volatile int32_t t108 = 1;

    t108 = ((x617*(x618+x619))==x620);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t t109 = -4;

    t109 = ((x621*(x622+x623))==x624);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x629 = INT8_MAX;
	int32_t x630 = -1;
	uint8_t x631 = UINT8_MAX;
	int32_t t110 = -204294;

    t110 = ((x629*(x630+x631))==x632);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x633 = 1U;
	static volatile uint16_t x634 = 2454U;
	int32_t x635 = INT32_MIN;
	static int16_t x636 = INT16_MIN;
	int32_t t111 = -400648238;

    t111 = ((x633*(x634+x635))==x636);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x637 = 1U;
	static volatile int64_t x638 = -214LL;
	uint64_t x639 = 3328640LLU;
	uint32_t x640 = 105028U;
	int32_t t112 = 4150633;

    t112 = ((x637*(x638+x639))==x640);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x641 = -1LL;
	uint32_t x642 = 834747U;
	static volatile int64_t x643 = -137LL;
	int64_t x644 = -6775560188LL;
	volatile int32_t t113 = -47;

    t113 = ((x641*(x642+x643))==x644);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x645 = INT16_MAX;
	uint32_t x646 = UINT32_MAX;
	volatile int16_t x647 = 369;
	volatile uint8_t x648 = UINT8_MAX;
	volatile int32_t t114 = -1;

    t114 = ((x645*(x646+x647))==x648);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x649 = INT8_MAX;
	volatile int32_t x650 = 246816;
	static uint32_t x651 = 2U;
	uint32_t x652 = 580120024U;
	volatile int32_t t115 = -30821;

    t115 = ((x649*(x650+x651))==x652);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x657 = INT16_MIN;
	int16_t x659 = INT16_MIN;
	int16_t x660 = -210;
	static volatile int32_t t116 = -1009526;

    t116 = ((x657*(x658+x659))==x660);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x661 = INT16_MIN;
	volatile uint16_t x662 = 5763U;
	int16_t x663 = -1;
	static int64_t x664 = INT64_MAX;

    t117 = ((x661*(x662+x663))==x664);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x665 = UINT8_MAX;
	static uint32_t x666 = 13U;
	uint64_t x667 = 26088938LLU;
	int32_t t118 = 83;

    t118 = ((x665*(x666+x667))==x668);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x669 = UINT8_MAX;
	volatile int16_t x671 = -27;
	int16_t x672 = INT16_MIN;
	volatile int32_t t119 = -70954;

    t119 = ((x669*(x670+x671))==x672);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x674 = INT16_MIN;
	volatile uint32_t x675 = 15599200U;
	int8_t x676 = -19;
	volatile int32_t t120 = -2037323;

    t120 = ((x673*(x674+x675))==x676);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x677 = INT8_MIN;
	uint16_t x678 = 37U;
	uint64_t x679 = 218LLU;
	int8_t x680 = -1;
	int32_t t121 = 1;

    t121 = ((x677*(x678+x679))==x680);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x681 = INT32_MIN;
	volatile int64_t x682 = -1LL;
	volatile uint32_t x683 = 29481885U;
	volatile uint32_t x684 = UINT32_MAX;
	volatile int32_t t122 = 501659;

    t122 = ((x681*(x682+x683))==x684);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x685 = 85664776U;
	int16_t x686 = 3793;
	int32_t x687 = 87990;
	static uint32_t x688 = 151891U;
	volatile int32_t t123 = 13730;

    t123 = ((x685*(x686+x687))==x688);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x689 = -1;
	uint8_t x690 = 0U;
	int8_t x691 = 37;

    t124 = ((x689*(x690+x691))==x692);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x693 = 11491446;
	uint32_t x694 = 5109170U;
	volatile uint16_t x695 = 27U;
	int8_t x696 = INT8_MAX;
	static volatile int32_t t125 = -7105;

    t125 = ((x693*(x694+x695))==x696);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x698 = 8597097U;
	volatile int8_t x699 = -13;

    t126 = ((x697*(x698+x699))==x700);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x706 = -22;
	uint32_t x707 = 183681U;
	volatile uint16_t x708 = 64U;

    t127 = ((x705*(x706+x707))==x708);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x709 = INT8_MIN;
	volatile int64_t x710 = 2452260668377440LL;
	volatile int8_t x711 = 16;
	static volatile int32_t t128 = -191;

    t128 = ((x709*(x710+x711))==x712);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x713 = 0LL;
	int16_t x714 = INT16_MIN;
	int32_t x715 = 4;
	volatile int64_t x716 = INT64_MIN;
	int32_t t129 = -2;

    t129 = ((x713*(x714+x715))==x716);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x717 = 2;
	static uint64_t x719 = UINT64_MAX;
	int64_t x720 = INT64_MIN;
	static int32_t t130 = 84756746;

    t130 = ((x717*(x718+x719))==x720);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x721 = UINT16_MAX;
	uint8_t x722 = UINT8_MAX;
	int16_t x723 = -1;
	int16_t x724 = -1;
	volatile int32_t t131 = 5;

    t131 = ((x721*(x722+x723))==x724);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x729 = 1019411649U;
	static volatile int64_t x731 = 9517269LL;
	int64_t x732 = -1LL;
	static int32_t t132 = 64144;

    t132 = ((x729*(x730+x731))==x732);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x737 = INT16_MIN;
	uint32_t x739 = 217U;
	int64_t x740 = INT64_MIN;
	int32_t t133 = 908523;

    t133 = ((x737*(x738+x739))==x740);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x741 = -15;
	volatile int8_t x742 = -36;
	uint32_t x743 = UINT32_MAX;
	uint16_t x744 = 1U;
	int32_t t134 = 106532544;

    t134 = ((x741*(x742+x743))==x744);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x745 = 1902LL;
	volatile int16_t x746 = INT16_MIN;
	static int32_t x747 = 1741439;
	int32_t t135 = -552;

    t135 = ((x745*(x746+x747))==x748);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint16_t x749 = 20710U;
	int64_t x751 = -1LL;
	static uint64_t x752 = 6234954201858044861LLU;
	int32_t t136 = 15499;

    t136 = ((x749*(x750+x751))==x752);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x757 = -1;
	int32_t x758 = INT32_MAX;
	int64_t x759 = INT64_MIN;
	int8_t x760 = INT8_MIN;
	int32_t t137 = -243190;

    t137 = ((x757*(x758+x759))==x760);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x773 = 612U;
	volatile uint64_t x775 = UINT64_MAX;
	static int8_t x776 = -1;
	volatile int32_t t138 = -36626;

    t138 = ((x773*(x774+x775))==x776);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x777 = 697464337U;
	static int16_t x778 = -1;
	int8_t x779 = INT8_MAX;
	volatile int32_t t139 = -415;

    t139 = ((x777*(x778+x779))==x780);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x793 = UINT64_MAX;
	uint8_t x794 = UINT8_MAX;
	static int16_t x795 = INT16_MAX;
	volatile uint32_t x796 = 10998948U;
	volatile int32_t t140 = 6028;

    t140 = ((x793*(x794+x795))==x796);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x802 = -8727803570257467LL;
	volatile int32_t x804 = INT32_MAX;
	volatile int32_t t141 = -1;

    t141 = ((x801*(x802+x803))==x804);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x813 = 13U;
	uint32_t x814 = UINT32_MAX;
	volatile int8_t x815 = INT8_MAX;
	volatile int32_t t142 = -14;

    t142 = ((x813*(x814+x815))==x816);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x817 = INT32_MAX;
	static uint64_t x818 = 340879386642847LLU;
	volatile int64_t x819 = 2224LL;
	static volatile uint64_t x820 = 172915318423LLU;
	int32_t t143 = -318525;

    t143 = ((x817*(x818+x819))==x820);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x826 = 119173U;
	uint16_t x827 = 1504U;
	static volatile int8_t x828 = 25;

    t144 = ((x825*(x826+x827))==x828);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x834 = INT16_MIN;
	int64_t x835 = -1LL;
	int64_t x836 = INT64_MIN;
	volatile int32_t t145 = -40499;

    t145 = ((x833*(x834+x835))==x836);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x841 = -1;
	uint8_t x842 = 17U;
	volatile uint8_t x843 = UINT8_MAX;
	int32_t x844 = INT32_MIN;

    t146 = ((x841*(x842+x843))==x844);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x845 = -398;
	int64_t x846 = INT64_MAX;
	uint32_t x848 = UINT32_MAX;
	volatile int32_t t147 = 35344293;

    t147 = ((x845*(x846+x847))==x848);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x853 = -23024;
	uint64_t x854 = 226787LLU;
	int16_t x856 = 394;
	int32_t t148 = 1436413;

    t148 = ((x853*(x854+x855))==x856);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x858 = 182771530075289LLU;
	static int16_t x859 = INT16_MAX;
	int8_t x860 = -1;
	static int32_t t149 = -5;

    t149 = ((x857*(x858+x859))==x860);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x863 = INT32_MIN;
	int32_t x864 = INT32_MIN;
	int32_t t150 = -170;

    t150 = ((x861*(x862+x863))==x864);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x869 = -936045;
	int8_t x871 = -27;
	static int16_t x872 = INT16_MIN;
	int32_t t151 = -380012659;

    t151 = ((x869*(x870+x871))==x872);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x881 = 5381;
	int16_t x882 = INT16_MIN;
	volatile uint8_t x883 = 5U;
	int16_t x884 = INT16_MIN;
	volatile int32_t t152 = -55497;

    t152 = ((x881*(x882+x883))==x884);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x885 = 5U;
	uint16_t x886 = 28529U;
	volatile int16_t x887 = 10525;
	volatile int32_t t153 = -30;

    t153 = ((x885*(x886+x887))==x888);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x894 = 0;
	uint64_t x895 = 319703691036LLU;
	volatile uint8_t x896 = UINT8_MAX;
	int32_t t154 = -109501042;

    t154 = ((x893*(x894+x895))==x896);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x897 = UINT32_MAX;
	static int8_t x898 = INT8_MIN;
	volatile uint64_t x899 = UINT64_MAX;
	static int32_t t155 = 78100029;

    t155 = ((x897*(x898+x899))==x900);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x901 = INT16_MAX;
	volatile int8_t x902 = -1;
	static volatile int32_t t156 = -131856257;

    t156 = ((x901*(x902+x903))==x904);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x909 = -1;
	uint8_t x910 = 1U;
	int32_t t157 = 115351;

    t157 = ((x909*(x910+x911))==x912);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x913 = UINT32_MAX;
	static uint8_t x914 = 22U;
	static int8_t x915 = 0;
	int64_t x916 = 8503184635863698LL;
	static int32_t t158 = -3685;

    t158 = ((x913*(x914+x915))==x916);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x917 = INT16_MAX;
	uint16_t x919 = 771U;
	volatile int32_t x920 = 5282;
	int32_t t159 = -89700714;

    t159 = ((x917*(x918+x919))==x920);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x921 = -168;
	int16_t x922 = -1;
	static int64_t x923 = -1LL;
	int16_t x924 = -1;

    t160 = ((x921*(x922+x923))==x924);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x925 = 1U;
	volatile uint8_t x926 = 8U;
	int32_t t161 = -113307;

    t161 = ((x925*(x926+x927))==x928);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x933 = UINT64_MAX;
	int8_t x934 = INT8_MIN;
	int16_t x935 = -1;
	volatile int16_t x936 = INT16_MIN;
	static volatile int32_t t162 = -727;

    t162 = ((x933*(x934+x935))==x936);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x941 = 5U;
	int8_t x942 = 0;
	static int16_t x943 = INT16_MIN;
	int64_t x944 = -387812944823518652LL;
	volatile int32_t t163 = 2256;

    t163 = ((x941*(x942+x943))==x944);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x945 = 29U;
	static int64_t x946 = 2675281LL;
	volatile int8_t x947 = INT8_MAX;
	volatile int32_t t164 = 57;

    t164 = ((x945*(x946+x947))==x948);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x957 = INT16_MIN;
	static volatile uint8_t x960 = 106U;
	volatile int32_t t165 = -87464408;

    t165 = ((x957*(x958+x959))==x960);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x962 = UINT32_MAX;
	static int16_t x963 = 1756;
	int64_t x964 = INT64_MIN;

    t166 = ((x961*(x962+x963))==x964);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x965 = INT8_MIN;
	static int16_t x966 = -15;
	static uint64_t x967 = 510458778778272LLU;
	int16_t x968 = INT16_MAX;
	volatile int32_t t167 = 35912162;

    t167 = ((x965*(x966+x967))==x968);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x970 = INT16_MIN;
	volatile int8_t x971 = INT8_MIN;
	volatile uint64_t x972 = 31941792860339432LLU;
	volatile int32_t t168 = 37746;

    t168 = ((x969*(x970+x971))==x972);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x981 = 110U;
	int64_t x983 = 3987034567767330LL;
	int8_t x984 = INT8_MIN;
	static int32_t t169 = 4050;

    t169 = ((x981*(x982+x983))==x984);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x989 = -1;
	int64_t x991 = INT64_MAX;
	int16_t x992 = INT16_MAX;
	int32_t t170 = 524842;

    t170 = ((x989*(x990+x991))==x992);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x993 = INT8_MIN;
	uint16_t x994 = 740U;
	uint32_t x996 = 70939701U;
	static int32_t t171 = 19042834;

    t171 = ((x993*(x994+x995))==x996);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1005 = 240075LLU;
	uint8_t x1006 = 0U;
	int32_t x1007 = 354976;
	int64_t x1008 = -2LL;
	int32_t t172 = -1;

    t172 = ((x1005*(x1006+x1007))==x1008);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1009 = INT16_MIN;
	int8_t x1010 = INT8_MIN;
	static int8_t x1011 = INT8_MIN;
	int8_t x1012 = 3;
	int32_t t173 = 1;

    t173 = ((x1009*(x1010+x1011))==x1012);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1013 = 0;
	uint32_t x1014 = UINT32_MAX;
	int64_t x1016 = INT64_MIN;

    t174 = ((x1013*(x1014+x1015))==x1016);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x1017 = 1LL;
	int64_t x1019 = -8052LL;
	uint8_t x1020 = 8U;
	volatile int32_t t175 = -4338;

    t175 = ((x1017*(x1018+x1019))==x1020);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1023 = 6U;
	static uint64_t x1024 = 0LLU;
	int32_t t176 = -937;

    t176 = ((x1021*(x1022+x1023))==x1024);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1030 = 6U;
	uint32_t x1031 = 166149U;
	static int64_t x1032 = -1LL;
	static volatile int32_t t177 = -7;

    t177 = ((x1029*(x1030+x1031))==x1032);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1037 = 2U;
	volatile uint64_t x1039 = 7757227183LLU;
	int64_t x1040 = INT64_MIN;
	volatile int32_t t178 = 1;

    t178 = ((x1037*(x1038+x1039))==x1040);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1046 = 18567U;
	static int32_t x1047 = INT32_MIN;
	int16_t x1048 = -1;
	volatile int32_t t179 = 2589912;

    t179 = ((x1045*(x1046+x1047))==x1048);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1065 = INT32_MIN;
	uint16_t x1068 = 1268U;
	volatile int32_t t180 = -349871376;

    t180 = ((x1065*(x1066+x1067))==x1068);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x1078 = INT16_MIN;
	volatile int64_t x1080 = INT64_MIN;
	static int32_t t181 = -520607;

    t181 = ((x1077*(x1078+x1079))==x1080);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1081 = -1LL;
	int8_t x1082 = INT8_MAX;
	int16_t x1083 = 6;
	int8_t x1084 = -11;
	static volatile int32_t t182 = 208;

    t182 = ((x1081*(x1082+x1083))==x1084);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x1089 = 3LLU;
	int64_t x1090 = INT64_MIN;
	static int8_t x1091 = 25;
	volatile int32_t t183 = -8127;

    t183 = ((x1089*(x1090+x1091))==x1092);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1098 = 47;
	int16_t x1099 = -1;
	static volatile int64_t x1100 = -1LL;
	int32_t t184 = 9253;

    t184 = ((x1097*(x1098+x1099))==x1100);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1106 = INT64_MIN;
	int64_t x1107 = INT64_MAX;
	volatile uint32_t x1108 = 18310909U;

    t185 = ((x1105*(x1106+x1107))==x1108);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1109 = INT8_MIN;
	uint32_t x1110 = UINT32_MAX;
	int64_t x1112 = -743344LL;
	static volatile int32_t t186 = 420;

    t186 = ((x1109*(x1110+x1111))==x1112);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1117 = 1;
	int32_t x1119 = -58202;
	volatile int16_t x1120 = INT16_MIN;
	volatile int32_t t187 = 11137110;

    t187 = ((x1117*(x1118+x1119))==x1120);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1123 = INT8_MIN;
	uint8_t x1124 = 4U;
	static volatile int32_t t188 = 349048;

    t188 = ((x1121*(x1122+x1123))==x1124);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1125 = 12U;
	static int64_t x1126 = -148299726489LL;
	uint16_t x1127 = 942U;
	int8_t x1128 = INT8_MIN;

    t189 = ((x1125*(x1126+x1127))==x1128);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1133 = -1;
	static int32_t x1134 = -1;
	int16_t x1136 = -3;
	volatile int32_t t190 = 16191;

    t190 = ((x1133*(x1134+x1135))==x1136);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1141 = 311336U;
	int32_t x1142 = -16524063;
	int16_t x1143 = 1;
	static volatile int8_t x1144 = -3;
	static volatile int32_t t191 = -17;

    t191 = ((x1141*(x1142+x1143))==x1144);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1145 = 6U;
	volatile uint32_t x1146 = 2932U;
	uint32_t x1148 = UINT32_MAX;
	volatile int32_t t192 = 345;

    t192 = ((x1145*(x1146+x1147))==x1148);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1149 = 23U;
	int64_t x1150 = -1LL;
	volatile int16_t x1151 = INT16_MIN;
	uint8_t x1152 = 44U;
	int32_t t193 = -182549051;

    t193 = ((x1149*(x1150+x1151))==x1152);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1161 = UINT16_MAX;
	static uint64_t x1162 = UINT64_MAX;
	volatile int64_t x1163 = INT64_MIN;
	int8_t x1164 = -1;
	int32_t t194 = 507664;

    t194 = ((x1161*(x1162+x1163))==x1164);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1165 = -1;
	static volatile int16_t x1166 = INT16_MIN;
	static uint16_t x1167 = 141U;
	volatile int16_t x1168 = -7;
	static volatile int32_t t195 = -30;

    t195 = ((x1165*(x1166+x1167))==x1168);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1169 = UINT8_MAX;
	static int32_t x1170 = INT32_MIN;
	int64_t x1171 = -1LL;
	int64_t x1172 = -1LL;

    t196 = ((x1169*(x1170+x1171))==x1172);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1177 = INT32_MIN;
	int64_t x1178 = INT64_MIN;
	int32_t t197 = 1;

    t197 = ((x1177*(x1178+x1179))==x1180);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1186 = INT16_MIN;
	volatile int16_t x1187 = INT16_MIN;
	int64_t x1188 = 1552559183791LL;
	int32_t t198 = -572;

    t198 = ((x1185*(x1186+x1187))==x1188);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1190 = 111656U;
	uint16_t x1191 = 957U;
	static volatile int32_t t199 = -634313;

    t199 = ((x1189*(x1190+x1191))==x1192);

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

