
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

int16_t x2 = INT16_MIN;
uint64_t x4 = UINT64_MAX;
int8_t x8 = INT8_MIN;
int32_t x9 = 701;
static uint8_t x12 = 2U;
volatile int32_t t2 = 1;
uint32_t x16 = UINT32_MAX;
uint8_t x20 = UINT8_MAX;
static volatile int32_t t4 = -1;
static uint8_t x37 = 4U;
static uint16_t x38 = 21U;
volatile int32_t t9 = -85907241;
volatile int32_t t10 = 8;
uint16_t x51 = 2711U;
static uint32_t x52 = UINT32_MAX;
int32_t x54 = -1;
uint8_t x56 = 10U;
int32_t t13 = -5;
uint16_t x68 = 12U;
int8_t x70 = INT8_MAX;
int32_t x72 = -1;
int32_t x73 = 512749;
static volatile uint16_t x74 = 726U;
int8_t x82 = -5;
int32_t x87 = -7805;
uint8_t x92 = 3U;
uint8_t x94 = UINT8_MAX;
static volatile uint8_t x111 = 1U;
static volatile int32_t x112 = INT32_MIN;
int32_t t23 = -106;
volatile int16_t x119 = 745;
int32_t t26 = -1019;
static int32_t t27 = 6587340;
volatile int64_t x132 = INT64_MIN;
int32_t t28 = 371;
uint32_t x137 = 17U;
int8_t x139 = INT8_MAX;
volatile int16_t x147 = INT16_MIN;
volatile int64_t x150 = INT64_MIN;
int64_t x155 = 42LL;
volatile uint16_t x156 = UINT16_MAX;
int8_t x158 = INT8_MIN;
int64_t x159 = INT64_MIN;
int32_t t35 = -1;
int64_t x168 = INT64_MIN;
volatile int64_t x169 = -51790863LL;
uint64_t x170 = 1443330LLU;
int32_t t37 = -87;
volatile uint64_t x175 = 168043939170752553LLU;
int8_t x176 = -1;
int8_t x179 = 7;
int32_t t39 = -153943;
uint32_t x183 = 2054105U;
volatile int64_t x190 = -7189275851767110LL;
int16_t x192 = INT16_MIN;
int8_t x193 = -1;
int32_t x197 = 0;
uint32_t x200 = 33241177U;
volatile int64_t x203 = -480433996934518061LL;
volatile uint16_t x212 = 23U;
int64_t x214 = INT64_MAX;
static volatile int32_t t48 = 31322;
static int16_t x229 = -6148;
int32_t x232 = INT32_MAX;
int32_t x243 = INT32_MAX;
static int8_t x244 = INT8_MIN;
volatile int8_t x245 = 0;
int64_t x250 = -1LL;
uint64_t x253 = 122318LLU;
volatile int32_t t57 = -1;
int32_t x259 = -1;
volatile uint64_t x261 = 10189656LLU;
static int16_t x264 = -12944;
int16_t x270 = INT16_MAX;
static int64_t x275 = -1LL;
uint64_t x277 = 11869045LLU;
volatile int32_t x280 = -1;
int8_t x281 = 7;
int64_t x287 = 1LL;
uint8_t x289 = 3U;
int8_t x292 = INT8_MAX;
uint16_t x301 = 59U;
static volatile int32_t t70 = 81355493;
int16_t x312 = INT16_MIN;
uint64_t x313 = 411842183978650LLU;
int64_t x315 = INT64_MIN;
static int8_t x323 = INT8_MAX;
uint16_t x324 = 3158U;
uint8_t x325 = 0U;
int32_t t75 = 220;
volatile int32_t t76 = -1;
int32_t x334 = -26;
volatile int32_t t78 = -19326374;
volatile int32_t t79 = 1;
int16_t x346 = 92;
int32_t t80 = 19;
uint16_t x353 = UINT16_MAX;
volatile int32_t t81 = -847;
static int8_t x361 = -1;
volatile int32_t x365 = 259046;
int32_t t84 = -11466432;
int32_t x376 = INT32_MIN;
int32_t t86 = -107;
int64_t x379 = -4905974697924327LL;
static volatile uint16_t x380 = 0U;
volatile int32_t t87 = 26195;
uint64_t x383 = 4246090678LLU;
static int16_t x384 = 13;
uint32_t x388 = 6721382U;
volatile uint64_t x390 = UINT64_MAX;
uint64_t x391 = 29196350382LLU;
static volatile int32_t t90 = 14594079;
int16_t x396 = INT16_MIN;
int64_t x399 = INT64_MIN;
int32_t x403 = INT32_MIN;
volatile int32_t x406 = INT32_MIN;
int16_t x407 = INT16_MAX;
static volatile int16_t x409 = INT16_MAX;
int32_t x415 = INT32_MIN;
static int32_t x420 = 202829358;
int32_t x429 = INT32_MAX;
int64_t x432 = -2733182479623LL;
volatile int32_t t100 = 0;
int8_t x436 = INT8_MIN;
volatile int32_t x437 = -1;
uint16_t x441 = UINT16_MAX;
int8_t x442 = -57;
static int8_t x443 = INT8_MAX;
int8_t x447 = INT8_MIN;
int32_t x451 = INT32_MIN;
uint64_t x452 = UINT64_MAX;
uint8_t x457 = UINT8_MAX;
volatile int32_t x459 = 1;
int8_t x461 = -5;
int16_t x465 = INT16_MIN;
int32_t x469 = INT32_MIN;
uint8_t x474 = 1U;
int8_t x475 = -1;
int32_t t114 = 7156315;
static uint8_t x491 = 2U;
uint16_t x499 = 84U;
int32_t t117 = 132553612;
int16_t x507 = INT16_MAX;
static volatile int64_t x509 = 15LL;
int32_t t119 = 43549;
int32_t x515 = INT32_MIN;
uint8_t x532 = UINT8_MAX;
static int8_t x533 = INT8_MAX;
int64_t x534 = INT64_MAX;
int32_t x544 = 160027;
volatile int32_t t128 = 130894497;
int32_t t131 = -160;
volatile int32_t x565 = INT32_MIN;
int64_t x567 = -1LL;
static volatile int32_t x574 = 29270;
int64_t x589 = 488809LL;
volatile uint32_t x601 = UINT32_MAX;
static int64_t x604 = INT64_MAX;
int32_t x610 = 1;
int32_t t143 = 2899585;
uint8_t x614 = UINT8_MAX;
uint8_t x615 = 6U;
int32_t t147 = 923;
volatile uint64_t x638 = 15109522885295697LLU;
uint32_t x640 = 1U;
static uint64_t x646 = 5489992852437LLU;
uint32_t x648 = UINT32_MAX;
int8_t x653 = -1;
int32_t x655 = 737;
uint32_t x656 = 1143995U;
int64_t x660 = INT64_MIN;
static int32_t x680 = 1765;
static int8_t x699 = 1;
int32_t t163 = -1;
int8_t x712 = INT8_MIN;
static uint64_t x715 = UINT64_MAX;
int32_t x723 = -1;
uint8_t x725 = UINT8_MAX;
uint16_t x726 = 2772U;
volatile int32_t t171 = 7318575;
int32_t x742 = INT32_MIN;
uint8_t x747 = 1U;
uint16_t x753 = 25889U;
int32_t t176 = -1212;
volatile uint8_t x762 = 96U;
int64_t x765 = -41850LL;
int32_t x777 = -947317;
volatile int32_t t181 = -23;
uint8_t x781 = 1U;
int32_t x794 = -3;
int32_t t185 = -29074571;
int32_t t186 = -206318;
volatile int8_t x809 = INT8_MIN;
volatile int32_t t190 = 745768597;
int64_t x817 = INT64_MIN;
int32_t t191 = 0;
int32_t x824 = INT32_MIN;
static int32_t t192 = -119571;
static int16_t x837 = INT16_MIN;
int32_t x838 = INT32_MIN;
static uint16_t x839 = 28U;
volatile int32_t t199 = 9;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	volatile uint8_t x3 = UINT8_MAX;
	static volatile int32_t t0 = 1554;

    t0 = (((x1^x2)-x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = 1;
	int16_t x6 = -2;
	static uint32_t x7 = 26643U;
	int32_t t1 = -11401060;

    t1 = (((x5^x6)-x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = 280LL;
	volatile int32_t x11 = 145232905;

    t2 = (((x9^x10)-x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 249280U;
	int32_t x14 = 16899116;
	int16_t x15 = INT16_MIN;
	volatile int32_t t3 = -363811;

    t3 = (((x13^x14)-x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	static int16_t x18 = 4;
	static int64_t x19 = -53216730LL;

    t4 = (((x17^x18)-x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = 14418846530LL;
	int16_t x22 = INT16_MIN;
	int16_t x23 = -1;
	int32_t x24 = 1437133;
	int32_t t5 = -547;

    t5 = (((x21^x22)-x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MIN;
	static int32_t x26 = -3;
	int16_t x27 = 132;
	volatile int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 1;

    t6 = (((x25^x26)-x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = -1;
	uint8_t x30 = 2U;
	int16_t x31 = INT16_MAX;
	int64_t x32 = INT64_MIN;
	int32_t t7 = 194837;

    t7 = (((x29^x30)-x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	volatile uint32_t x34 = 12U;
	uint16_t x35 = 2336U;
	int16_t x36 = -6;
	int32_t t8 = -6942;

    t8 = (((x33^x34)-x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x39 = INT16_MIN;
	uint32_t x40 = 813874467U;

    t9 = (((x37^x38)-x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	int64_t x42 = -1LL;
	int32_t x43 = -1;
	int16_t x44 = 19;

    t10 = (((x41^x42)-x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x49 = 53U;
	int64_t x50 = 78684084154LL;
	int32_t t11 = 2423299;

    t11 = (((x49^x50)-x51)!=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = 19U;
	static uint16_t x55 = UINT16_MAX;
	int32_t t12 = 912;

    t12 = (((x53^x54)-x55)!=x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x61 = UINT64_MAX;
	int16_t x62 = -1;
	static volatile uint64_t x63 = UINT64_MAX;
	static volatile uint32_t x64 = 26U;

    t13 = (((x61^x62)-x63)!=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x65 = 3U;
	int16_t x66 = 0;
	static uint32_t x67 = 621U;
	int32_t t14 = -85916;

    t14 = (((x65^x66)-x67)!=x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = -1106566878224413LL;
	uint8_t x71 = 0U;
	int32_t t15 = -248212139;

    t15 = (((x69^x70)-x71)!=x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x75 = INT8_MIN;
	int8_t x76 = -1;
	int32_t t16 = -3;

    t16 = (((x73^x74)-x75)!=x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x81 = 955772;
	static volatile uint32_t x83 = 3022U;
	volatile uint16_t x84 = UINT16_MAX;
	volatile int32_t t17 = 9973372;

    t17 = (((x81^x82)-x83)!=x84);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = INT32_MIN;
	uint16_t x86 = UINT16_MAX;
	uint8_t x88 = UINT8_MAX;
	static volatile int32_t t18 = -197;

    t18 = (((x85^x86)-x87)!=x88);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x89 = 40U;
	static int64_t x90 = 3800LL;
	static uint16_t x91 = 184U;
	int32_t t19 = 383;

    t19 = (((x89^x90)-x91)!=x92);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x93 = 6U;
	uint8_t x95 = 0U;
	uint16_t x96 = 3U;
	int32_t t20 = -66076532;

    t20 = (((x93^x94)-x95)!=x96);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x97 = -1;
	static uint64_t x98 = 1697328LLU;
	static int32_t x99 = 3;
	int16_t x100 = INT16_MAX;
	static int32_t t21 = 4924912;

    t21 = (((x97^x98)-x99)!=x100);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x105 = INT32_MIN;
	int32_t x106 = 75670115;
	int8_t x107 = -11;
	volatile uint8_t x108 = 25U;
	static int32_t t22 = -7;

    t22 = (((x105^x106)-x107)!=x108);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x109 = 8593;
	int64_t x110 = 519173943LL;

    t23 = (((x109^x110)-x111)!=x112);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x113 = 0U;
	int16_t x114 = -1;
	static int8_t x115 = INT8_MAX;
	static volatile int8_t x116 = -9;
	int32_t t24 = -34266;

    t24 = (((x113^x114)-x115)!=x116);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x117 = -11;
	uint32_t x118 = UINT32_MAX;
	uint8_t x120 = 1U;
	volatile int32_t t25 = -481330;

    t25 = (((x117^x118)-x119)!=x120);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x121 = UINT16_MAX;
	static uint8_t x122 = 1U;
	static volatile int16_t x123 = INT16_MIN;
	int8_t x124 = -5;

    t26 = (((x121^x122)-x123)!=x124);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x125 = INT64_MIN;
	int8_t x126 = -1;
	int16_t x127 = INT16_MAX;
	int64_t x128 = 497152904LL;

    t27 = (((x125^x126)-x127)!=x128);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x129 = INT32_MIN;
	uint32_t x130 = 9216U;
	static uint8_t x131 = UINT8_MAX;

    t28 = (((x129^x130)-x131)!=x132);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x133 = 125U;
	volatile int8_t x134 = INT8_MIN;
	volatile int64_t x135 = -1LL;
	int32_t x136 = INT32_MIN;
	int32_t t29 = -1126;

    t29 = (((x133^x134)-x135)!=x136);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x138 = INT8_MIN;
	uint8_t x140 = 1U;
	volatile int32_t t30 = -39;

    t30 = (((x137^x138)-x139)!=x140);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x145 = 71;
	int64_t x146 = -1LL;
	volatile int16_t x148 = INT16_MAX;
	static volatile int32_t t31 = -197174;

    t31 = (((x145^x146)-x147)!=x148);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x149 = -50;
	volatile uint16_t x151 = 840U;
	static int8_t x152 = INT8_MIN;
	int32_t t32 = -705;

    t32 = (((x149^x150)-x151)!=x152);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = 2;
	int32_t t33 = 886184831;

    t33 = (((x153^x154)-x155)!=x156);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x157 = 8U;
	int16_t x160 = INT16_MIN;
	int32_t t34 = -66298019;

    t34 = (((x157^x158)-x159)!=x160);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x161 = -1;
	static int16_t x162 = 0;
	uint16_t x163 = 19965U;
	volatile uint16_t x164 = 0U;

    t35 = (((x161^x162)-x163)!=x164);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x165 = INT64_MIN;
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = 2;
	int32_t t36 = 8814;

    t36 = (((x165^x166)-x167)!=x168);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x171 = INT16_MAX;
	int64_t x172 = -20LL;

    t37 = (((x169^x170)-x171)!=x172);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x173 = -1;
	static int64_t x174 = INT64_MIN;
	volatile int32_t t38 = -16756574;

    t38 = (((x173^x174)-x175)!=x176);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = INT8_MIN;
	uint8_t x178 = 33U;
	int8_t x180 = -1;

    t39 = (((x177^x178)-x179)!=x180);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = INT8_MAX;
	volatile uint16_t x182 = UINT16_MAX;
	int32_t x184 = -102021617;
	volatile int32_t t40 = 41;

    t40 = (((x181^x182)-x183)!=x184);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x185 = -1LL;
	int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MIN;
	volatile int32_t t41 = -9;

    t41 = (((x185^x186)-x187)!=x188);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x189 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	volatile int32_t t42 = 3808833;

    t42 = (((x189^x190)-x191)!=x192);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x194 = 1U;
	int8_t x195 = -1;
	uint16_t x196 = 138U;
	static int32_t t43 = -168888004;

    t43 = (((x193^x194)-x195)!=x196);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x198 = INT16_MIN;
	uint64_t x199 = UINT64_MAX;
	int32_t t44 = -7942;

    t44 = (((x197^x198)-x199)!=x200);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x201 = -1;
	uint32_t x202 = 994U;
	uint32_t x204 = 373286785U;
	static volatile int32_t t45 = 1050;

    t45 = (((x201^x202)-x203)!=x204);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x209 = INT32_MAX;
	int16_t x210 = INT16_MAX;
	volatile uint32_t x211 = 30777U;
	volatile int32_t t46 = 29903;

    t46 = (((x209^x210)-x211)!=x212);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x213 = UINT16_MAX;
	volatile uint64_t x215 = 4313LLU;
	static int64_t x216 = -1123236LL;
	volatile int32_t t47 = -5719168;

    t47 = (((x213^x214)-x215)!=x216);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = INT64_MIN;
	int8_t x218 = INT8_MIN;
	static volatile int8_t x219 = -1;
	static int8_t x220 = INT8_MAX;

    t48 = (((x217^x218)-x219)!=x220);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x221 = INT8_MIN;
	static uint32_t x222 = 12922U;
	int8_t x223 = -1;
	int32_t x224 = INT32_MAX;
	volatile int32_t t49 = 1525;

    t49 = (((x221^x222)-x223)!=x224);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x225 = 1U;
	int32_t x226 = INT32_MIN;
	int32_t x227 = -1;
	int64_t x228 = 1LL;
	int32_t t50 = 308507662;

    t50 = (((x225^x226)-x227)!=x228);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x230 = 51383U;
	volatile int32_t x231 = INT32_MIN;
	static volatile int32_t t51 = 33;

    t51 = (((x229^x230)-x231)!=x232);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x233 = INT64_MIN;
	volatile int16_t x234 = -1;
	uint8_t x235 = UINT8_MAX;
	static int64_t x236 = INT64_MAX;
	volatile int32_t t52 = 0;

    t52 = (((x233^x234)-x235)!=x236);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x237 = 32645629LLU;
	int32_t x238 = -4;
	int32_t x239 = 229;
	volatile int64_t x240 = INT64_MIN;
	int32_t t53 = 134;

    t53 = (((x237^x238)-x239)!=x240);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x241 = -90131LL;
	int16_t x242 = INT16_MAX;
	volatile int32_t t54 = 4;

    t54 = (((x241^x242)-x243)!=x244);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x246 = 1;
	static int16_t x247 = -2;
	static uint16_t x248 = 2U;
	static int32_t t55 = 859;

    t55 = (((x245^x246)-x247)!=x248);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x249 = 8315337498211917LLU;
	static int8_t x251 = 1;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t56 = 194997421;

    t56 = (((x249^x250)-x251)!=x252);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x254 = -56636467848LL;
	uint64_t x255 = 450313593622622463LLU;
	volatile int64_t x256 = INT64_MIN;

    t57 = (((x253^x254)-x255)!=x256);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x257 = -3;
	uint64_t x258 = 212066302LLU;
	static int8_t x260 = INT8_MIN;
	static volatile int32_t t58 = 493793321;

    t58 = (((x257^x258)-x259)!=x260);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x262 = INT16_MIN;
	int32_t x263 = INT32_MIN;
	volatile int32_t t59 = -3;

    t59 = (((x261^x262)-x263)!=x264);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x265 = UINT16_MAX;
	int32_t x266 = -121;
	static uint16_t x267 = UINT16_MAX;
	int64_t x268 = -381337856LL;
	volatile int32_t t60 = 178;

    t60 = (((x265^x266)-x267)!=x268);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x269 = 11U;
	int8_t x271 = INT8_MIN;
	int32_t x272 = INT32_MAX;
	volatile int32_t t61 = 1375;

    t61 = (((x269^x270)-x271)!=x272);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x273 = INT32_MAX;
	int8_t x274 = -12;
	static int64_t x276 = INT64_MIN;
	volatile int32_t t62 = -10384450;

    t62 = (((x273^x274)-x275)!=x276);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x278 = 75265307U;
	uint8_t x279 = 3U;
	int32_t t63 = 2;

    t63 = (((x277^x278)-x279)!=x280);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x282 = -1;
	uint16_t x283 = 3U;
	int16_t x284 = INT16_MIN;
	volatile int32_t t64 = 525486;

    t64 = (((x281^x282)-x283)!=x284);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x285 = INT16_MAX;
	int32_t x286 = -1;
	volatile int8_t x288 = -56;
	static int32_t t65 = -31526;

    t65 = (((x285^x286)-x287)!=x288);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x290 = -14508093;
	uint64_t x291 = 16161016786LLU;
	int32_t t66 = 79;

    t66 = (((x289^x290)-x291)!=x292);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x293 = -518073;
	static volatile int16_t x294 = -113;
	int32_t x295 = -1;
	uint8_t x296 = 6U;
	volatile int32_t t67 = -68559;

    t67 = (((x293^x294)-x295)!=x296);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x297 = -685;
	uint8_t x298 = UINT8_MAX;
	uint8_t x299 = 37U;
	int16_t x300 = INT16_MAX;
	int32_t t68 = 1;

    t68 = (((x297^x298)-x299)!=x300);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x302 = UINT16_MAX;
	uint8_t x303 = 16U;
	uint64_t x304 = 66315663789LLU;
	int32_t t69 = 1112163;

    t69 = (((x301^x302)-x303)!=x304);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x305 = -1LL;
	volatile int8_t x306 = INT8_MIN;
	static int64_t x307 = -1LL;
	int8_t x308 = -1;

    t70 = (((x305^x306)-x307)!=x308);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x309 = 1U;
	volatile uint64_t x310 = 0LLU;
	int8_t x311 = -1;
	int32_t t71 = 121;

    t71 = (((x309^x310)-x311)!=x312);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x314 = 5;
	static int8_t x316 = 2;
	volatile int32_t t72 = 1630;

    t72 = (((x313^x314)-x315)!=x316);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x317 = UINT32_MAX;
	uint64_t x318 = 7881986173795824LLU;
	uint8_t x319 = UINT8_MAX;
	volatile uint64_t x320 = 17801082012190479LLU;
	static int32_t t73 = 88773446;

    t73 = (((x317^x318)-x319)!=x320);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x321 = 108285U;
	int32_t x322 = -2;
	int32_t t74 = 6636;

    t74 = (((x321^x322)-x323)!=x324);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x326 = UINT64_MAX;
	int32_t x327 = INT32_MIN;
	uint32_t x328 = 105U;

    t75 = (((x325^x326)-x327)!=x328);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x329 = INT8_MIN;
	volatile int16_t x330 = INT16_MIN;
	int16_t x331 = -1;
	int16_t x332 = -3532;

    t76 = (((x329^x330)-x331)!=x332);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x333 = 0U;
	static int8_t x335 = 1;
	volatile int64_t x336 = 8489692734793LL;
	volatile int32_t t77 = -2;

    t77 = (((x333^x334)-x335)!=x336);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x337 = INT16_MIN;
	volatile uint8_t x338 = 1U;
	uint64_t x339 = 56861626204LLU;
	static int32_t x340 = 1;

    t78 = (((x337^x338)-x339)!=x340);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x341 = 1;
	static int8_t x342 = INT8_MIN;
	uint64_t x343 = UINT64_MAX;
	int16_t x344 = INT16_MIN;

    t79 = (((x341^x342)-x343)!=x344);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x345 = -11418627LL;
	uint64_t x347 = 1082323071LLU;
	int16_t x348 = 2045;

    t80 = (((x345^x346)-x347)!=x348);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x354 = 83LLU;
	int64_t x355 = INT64_MIN;
	int64_t x356 = -1LL;

    t81 = (((x353^x354)-x355)!=x356);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x357 = 4425;
	uint16_t x358 = 1149U;
	uint64_t x359 = 7182102001819423LLU;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t82 = 113047;

    t82 = (((x357^x358)-x359)!=x360);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x362 = INT32_MIN;
	int16_t x363 = INT16_MAX;
	uint64_t x364 = 955LLU;
	static int32_t t83 = 0;

    t83 = (((x361^x362)-x363)!=x364);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x366 = 32U;
	volatile int32_t x367 = -1;
	volatile uint64_t x368 = 566034758960110760LLU;

    t84 = (((x365^x366)-x367)!=x368);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x369 = INT16_MAX;
	uint16_t x370 = UINT16_MAX;
	volatile int8_t x371 = -1;
	int16_t x372 = INT16_MIN;
	volatile int32_t t85 = 44487;

    t85 = (((x369^x370)-x371)!=x372);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x373 = 1989U;
	uint8_t x374 = 4U;
	volatile int8_t x375 = 3;

    t86 = (((x373^x374)-x375)!=x376);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x377 = INT16_MIN;
	int32_t x378 = INT32_MIN;

    t87 = (((x377^x378)-x379)!=x380);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x381 = UINT8_MAX;
	static int8_t x382 = 2;
	int32_t t88 = -59;

    t88 = (((x381^x382)-x383)!=x384);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x385 = INT64_MAX;
	volatile int32_t x386 = INT32_MIN;
	int64_t x387 = -1LL;
	int32_t t89 = 410400;

    t89 = (((x385^x386)-x387)!=x388);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x389 = 43024U;
	static int64_t x392 = -65LL;

    t90 = (((x389^x390)-x391)!=x392);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x393 = INT32_MIN;
	uint64_t x394 = UINT64_MAX;
	uint8_t x395 = 7U;
	int32_t t91 = -3926;

    t91 = (((x393^x394)-x395)!=x396);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x397 = -1;
	static uint8_t x398 = UINT8_MAX;
	int64_t x400 = -1LL;
	volatile int32_t t92 = 34;

    t92 = (((x397^x398)-x399)!=x400);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x401 = 58879LLU;
	uint16_t x402 = 3304U;
	int32_t x404 = 6657916;
	int32_t t93 = 744;

    t93 = (((x401^x402)-x403)!=x404);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x405 = INT64_MIN;
	volatile uint32_t x408 = 60852387U;
	volatile int32_t t94 = -53357;

    t94 = (((x405^x406)-x407)!=x408);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x410 = UINT8_MAX;
	static uint32_t x411 = 222U;
	static int8_t x412 = INT8_MAX;
	volatile int32_t t95 = -48691986;

    t95 = (((x409^x410)-x411)!=x412);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x413 = 1;
	static volatile int64_t x414 = 6721481LL;
	int64_t x416 = 5243396791867734LL;
	volatile int32_t t96 = 1;

    t96 = (((x413^x414)-x415)!=x416);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x417 = 626737LLU;
	volatile int16_t x418 = 286;
	uint8_t x419 = UINT8_MAX;
	static int32_t t97 = 51765;

    t97 = (((x417^x418)-x419)!=x420);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x421 = 14U;
	uint8_t x422 = 23U;
	uint8_t x423 = 1U;
	int8_t x424 = -1;
	int32_t t98 = 447538331;

    t98 = (((x421^x422)-x423)!=x424);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x425 = INT8_MAX;
	int64_t x426 = -1LL;
	volatile int32_t x427 = INT32_MIN;
	uint8_t x428 = 50U;
	volatile int32_t t99 = 364821;

    t99 = (((x425^x426)-x427)!=x428);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x430 = INT64_MIN;
	static int64_t x431 = -1LL;

    t100 = (((x429^x430)-x431)!=x432);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x433 = -1LL;
	int8_t x434 = -1;
	volatile int8_t x435 = -12;
	int32_t t101 = -60645;

    t101 = (((x433^x434)-x435)!=x436);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x438 = -1;
	volatile int8_t x439 = -1;
	volatile uint32_t x440 = UINT32_MAX;
	int32_t t102 = -58;

    t102 = (((x437^x438)-x439)!=x440);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x444 = 5LLU;
	int32_t t103 = 6787;

    t103 = (((x441^x442)-x443)!=x444);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x445 = 948508550LLU;
	int8_t x446 = INT8_MAX;
	volatile uint64_t x448 = 0LLU;
	static volatile int32_t t104 = -14;

    t104 = (((x445^x446)-x447)!=x448);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x449 = INT16_MIN;
	int32_t x450 = INT32_MAX;
	static int32_t t105 = 209688833;

    t105 = (((x449^x450)-x451)!=x452);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x453 = INT8_MAX;
	static int32_t x454 = -1;
	int8_t x455 = 1;
	int64_t x456 = INT64_MIN;
	volatile int32_t t106 = 14438;

    t106 = (((x453^x454)-x455)!=x456);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x458 = INT16_MIN;
	uint8_t x460 = 30U;
	int32_t t107 = 6038283;

    t107 = (((x457^x458)-x459)!=x460);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x462 = -1;
	int32_t x463 = 0;
	int32_t x464 = 1013;
	volatile int32_t t108 = -6027068;

    t108 = (((x461^x462)-x463)!=x464);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x466 = INT32_MIN;
	int8_t x467 = -1;
	int8_t x468 = INT8_MIN;
	static volatile int32_t t109 = 4;

    t109 = (((x465^x466)-x467)!=x468);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x470 = 6655LLU;
	uint64_t x471 = UINT64_MAX;
	uint32_t x472 = 7U;
	int32_t t110 = 1;

    t110 = (((x469^x470)-x471)!=x472);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x473 = 25U;
	volatile uint64_t x476 = 2358397994938443LLU;
	int32_t t111 = -23151;

    t111 = (((x473^x474)-x475)!=x476);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x477 = INT64_MIN;
	int32_t x478 = INT32_MAX;
	uint64_t x479 = 3LLU;
	int16_t x480 = INT16_MAX;
	volatile int32_t t112 = -478;

    t112 = (((x477^x478)-x479)!=x480);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x481 = UINT32_MAX;
	int32_t x482 = -4089;
	int16_t x483 = -15270;
	int16_t x484 = -13;
	static int32_t t113 = 85;

    t113 = (((x481^x482)-x483)!=x484);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x485 = 10U;
	uint64_t x486 = 335LLU;
	static uint64_t x487 = 262056LLU;
	int64_t x488 = -1LL;

    t114 = (((x485^x486)-x487)!=x488);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x489 = UINT64_MAX;
	static int64_t x490 = 37LL;
	static uint16_t x492 = 0U;
	static volatile int32_t t115 = -44712;

    t115 = (((x489^x490)-x491)!=x492);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x493 = INT32_MAX;
	volatile int16_t x494 = 6;
	uint32_t x495 = 113752411U;
	volatile int16_t x496 = INT16_MIN;
	static volatile int32_t t116 = -2873511;

    t116 = (((x493^x494)-x495)!=x496);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x497 = UINT64_MAX;
	int32_t x498 = INT32_MIN;
	int64_t x500 = INT64_MIN;

    t117 = (((x497^x498)-x499)!=x500);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x505 = UINT32_MAX;
	uint64_t x506 = 125740375366138LLU;
	int8_t x508 = -1;
	volatile int32_t t118 = 205637;

    t118 = (((x505^x506)-x507)!=x508);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x510 = -37;
	uint64_t x511 = UINT64_MAX;
	volatile int64_t x512 = INT64_MAX;

    t119 = (((x509^x510)-x511)!=x512);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x513 = 116556642U;
	volatile uint16_t x514 = 1U;
	uint8_t x516 = 11U;
	int32_t t120 = 216;

    t120 = (((x513^x514)-x515)!=x516);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x521 = INT8_MAX;
	static int16_t x522 = INT16_MIN;
	uint8_t x523 = 2U;
	int32_t x524 = INT32_MAX;
	volatile int32_t t121 = 53148;

    t121 = (((x521^x522)-x523)!=x524);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x525 = INT8_MIN;
	int8_t x526 = INT8_MIN;
	int64_t x527 = -27918983LL;
	uint16_t x528 = 192U;
	int32_t t122 = 9613248;

    t122 = (((x525^x526)-x527)!=x528);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x529 = 481064547LLU;
	uint32_t x530 = 3444359U;
	uint32_t x531 = 32143U;
	int32_t t123 = -143191230;

    t123 = (((x529^x530)-x531)!=x532);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x535 = 2;
	int16_t x536 = INT16_MIN;
	volatile int32_t t124 = -107;

    t124 = (((x533^x534)-x535)!=x536);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x537 = 5;
	int64_t x538 = -1LL;
	static uint32_t x539 = 83U;
	int32_t x540 = 775908079;
	static int32_t t125 = 0;

    t125 = (((x537^x538)-x539)!=x540);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x541 = 35U;
	uint16_t x542 = 3658U;
	uint8_t x543 = 8U;
	static int32_t t126 = -2;

    t126 = (((x541^x542)-x543)!=x544);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x545 = INT64_MIN;
	int32_t x546 = INT32_MIN;
	int16_t x547 = 667;
	uint16_t x548 = 2U;
	static int32_t t127 = -460934056;

    t127 = (((x545^x546)-x547)!=x548);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x549 = 100500U;
	int64_t x550 = -333223581284059331LL;
	int64_t x551 = INT64_MIN;
	uint8_t x552 = 0U;

    t128 = (((x549^x550)-x551)!=x552);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x553 = INT8_MIN;
	uint32_t x554 = 1U;
	volatile int32_t x555 = 2264113;
	int8_t x556 = -1;
	static int32_t t129 = 758;

    t129 = (((x553^x554)-x555)!=x556);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x557 = UINT64_MAX;
	uint16_t x558 = UINT16_MAX;
	static int32_t x559 = INT32_MIN;
	static int64_t x560 = INT64_MIN;
	int32_t t130 = 11441750;

    t130 = (((x557^x558)-x559)!=x560);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x561 = 1099288U;
	int8_t x562 = INT8_MIN;
	static int8_t x563 = -1;
	int32_t x564 = INT32_MIN;

    t131 = (((x561^x562)-x563)!=x564);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x566 = INT64_MAX;
	uint8_t x568 = 9U;
	static int32_t t132 = 210;

    t132 = (((x565^x566)-x567)!=x568);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x569 = 9936558LLU;
	static int8_t x570 = INT8_MAX;
	static volatile uint8_t x571 = 0U;
	int8_t x572 = 1;
	static int32_t t133 = -282552521;

    t133 = (((x569^x570)-x571)!=x572);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x573 = UINT8_MAX;
	int16_t x575 = INT16_MIN;
	static int8_t x576 = -1;
	int32_t t134 = 0;

    t134 = (((x573^x574)-x575)!=x576);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x577 = 1;
	int32_t x578 = INT32_MIN;
	static int16_t x579 = INT16_MIN;
	int16_t x580 = -49;
	static int32_t t135 = -11238;

    t135 = (((x577^x578)-x579)!=x580);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x581 = 6882U;
	volatile int64_t x582 = 67426098817LL;
	int8_t x583 = 11;
	int8_t x584 = -1;
	int32_t t136 = -1;

    t136 = (((x581^x582)-x583)!=x584);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x585 = 519861038LLU;
	int32_t x586 = -937;
	int64_t x587 = 20663469469LL;
	int64_t x588 = 97LL;
	int32_t t137 = 383;

    t137 = (((x585^x586)-x587)!=x588);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x590 = 159677211062819274LLU;
	uint32_t x591 = 6463U;
	int8_t x592 = INT8_MIN;
	volatile int32_t t138 = 220;

    t138 = (((x589^x590)-x591)!=x592);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint16_t x593 = 1U;
	int64_t x594 = -1LL;
	int16_t x595 = -90;
	int16_t x596 = INT16_MIN;
	int32_t t139 = -52;

    t139 = (((x593^x594)-x595)!=x596);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x597 = -1LL;
	int8_t x598 = INT8_MAX;
	uint16_t x599 = 1962U;
	int64_t x600 = INT64_MAX;
	int32_t t140 = 6334147;

    t140 = (((x597^x598)-x599)!=x600);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x602 = -1;
	volatile int16_t x603 = 2203;
	static volatile int32_t t141 = -208351310;

    t141 = (((x601^x602)-x603)!=x604);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x605 = UINT8_MAX;
	int8_t x606 = 1;
	static int64_t x607 = -191LL;
	int8_t x608 = INT8_MIN;
	int32_t t142 = -102242;

    t142 = (((x605^x606)-x607)!=x608);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x609 = -93;
	volatile int16_t x611 = -1;
	uint16_t x612 = UINT16_MAX;

    t143 = (((x609^x610)-x611)!=x612);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x613 = UINT16_MAX;
	uint8_t x616 = UINT8_MAX;
	int32_t t144 = -8211;

    t144 = (((x613^x614)-x615)!=x616);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x617 = -1;
	uint8_t x618 = UINT8_MAX;
	uint64_t x619 = 201106357081LLU;
	static int32_t x620 = INT32_MIN;
	volatile int32_t t145 = 727460;

    t145 = (((x617^x618)-x619)!=x620);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x625 = INT32_MAX;
	uint64_t x626 = 483316744925LLU;
	int8_t x627 = INT8_MIN;
	uint16_t x628 = 1U;
	volatile int32_t t146 = -323;

    t146 = (((x625^x626)-x627)!=x628);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x629 = 59695845659848LL;
	int8_t x630 = 0;
	volatile int64_t x631 = INT64_MAX;
	int16_t x632 = INT16_MIN;

    t147 = (((x629^x630)-x631)!=x632);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x633 = UINT32_MAX;
	int64_t x634 = -2287LL;
	int16_t x635 = 1;
	uint8_t x636 = 62U;
	static int32_t t148 = -4456;

    t148 = (((x633^x634)-x635)!=x636);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x637 = 1LLU;
	static int16_t x639 = -16;
	volatile int32_t t149 = 1377980;

    t149 = (((x637^x638)-x639)!=x640);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x641 = -1;
	int64_t x642 = INT64_MAX;
	int64_t x643 = INT64_MIN;
	uint32_t x644 = UINT32_MAX;
	int32_t t150 = -187;

    t150 = (((x641^x642)-x643)!=x644);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x645 = -1LL;
	uint32_t x647 = 25U;
	volatile int32_t t151 = 9017139;

    t151 = (((x645^x646)-x647)!=x648);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x649 = -1LL;
	static int64_t x650 = 1LL;
	static volatile int16_t x651 = INT16_MAX;
	static uint64_t x652 = 4593178058465LLU;
	volatile int32_t t152 = -967027032;

    t152 = (((x649^x650)-x651)!=x652);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x654 = 100;
	int32_t t153 = -160900;

    t153 = (((x653^x654)-x655)!=x656);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x657 = -1;
	uint64_t x658 = 3798LLU;
	static int32_t x659 = -1;
	int32_t t154 = -55;

    t154 = (((x657^x658)-x659)!=x660);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x661 = INT8_MAX;
	uint64_t x662 = 66993268593482LLU;
	uint16_t x663 = 1214U;
	int8_t x664 = -1;
	int32_t t155 = 28;

    t155 = (((x661^x662)-x663)!=x664);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x665 = 1U;
	volatile int8_t x666 = INT8_MIN;
	int8_t x667 = -1;
	volatile uint64_t x668 = 8LLU;
	static int32_t t156 = -96;

    t156 = (((x665^x666)-x667)!=x668);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x669 = UINT64_MAX;
	int64_t x670 = -13515378274539LL;
	static uint16_t x671 = 211U;
	int64_t x672 = -129918LL;
	volatile int32_t t157 = 815187;

    t157 = (((x669^x670)-x671)!=x672);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x677 = 0;
	uint32_t x678 = UINT32_MAX;
	int32_t x679 = INT32_MIN;
	int32_t t158 = 2;

    t158 = (((x677^x678)-x679)!=x680);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x681 = 77LLU;
	int16_t x682 = -1045;
	int32_t x683 = INT32_MAX;
	int8_t x684 = INT8_MIN;
	volatile int32_t t159 = 624;

    t159 = (((x681^x682)-x683)!=x684);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x685 = -1LL;
	int8_t x686 = INT8_MAX;
	int64_t x687 = INT64_MIN;
	int32_t x688 = -1;
	volatile int32_t t160 = 14;

    t160 = (((x685^x686)-x687)!=x688);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x689 = INT32_MAX;
	static int16_t x690 = INT16_MIN;
	int32_t x691 = INT32_MIN;
	int8_t x692 = 1;
	static volatile int32_t t161 = -1;

    t161 = (((x689^x690)-x691)!=x692);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x693 = 177831U;
	int64_t x694 = -1LL;
	uint16_t x695 = 45U;
	uint8_t x696 = 11U;
	static int32_t t162 = 372;

    t162 = (((x693^x694)-x695)!=x696);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x697 = INT16_MIN;
	uint8_t x698 = UINT8_MAX;
	static uint64_t x700 = 6179866504566391996LLU;

    t163 = (((x697^x698)-x699)!=x700);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x705 = 21U;
	int32_t x706 = 189972;
	volatile uint64_t x707 = 1997891659243LLU;
	static int16_t x708 = -1;
	static int32_t t164 = -758161681;

    t164 = (((x705^x706)-x707)!=x708);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x709 = 152U;
	static int64_t x710 = INT64_MAX;
	uint64_t x711 = 184894681485718LLU;
	int32_t t165 = 77;

    t165 = (((x709^x710)-x711)!=x712);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x713 = -117020878LL;
	static int8_t x714 = -1;
	int32_t x716 = INT32_MIN;
	static int32_t t166 = 745;

    t166 = (((x713^x714)-x715)!=x716);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x717 = 5384802U;
	static volatile uint32_t x718 = UINT32_MAX;
	int8_t x719 = -7;
	int8_t x720 = INT8_MIN;
	volatile int32_t t167 = -1;

    t167 = (((x717^x718)-x719)!=x720);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x721 = INT8_MIN;
	volatile int16_t x722 = -1;
	volatile int64_t x724 = INT64_MIN;
	int32_t t168 = 3;

    t168 = (((x721^x722)-x723)!=x724);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x727 = 2934861;
	static uint32_t x728 = 155885U;
	volatile int32_t t169 = 352;

    t169 = (((x725^x726)-x727)!=x728);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x729 = 0;
	int32_t x730 = 16165;
	volatile uint32_t x731 = UINT32_MAX;
	static int8_t x732 = INT8_MIN;
	int32_t t170 = -844650607;

    t170 = (((x729^x730)-x731)!=x732);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x733 = INT32_MAX;
	int32_t x734 = -483354057;
	int8_t x735 = INT8_MIN;
	int16_t x736 = -1;

    t171 = (((x733^x734)-x735)!=x736);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x737 = INT8_MIN;
	int32_t x738 = -7840;
	int8_t x739 = INT8_MIN;
	uint16_t x740 = 4750U;
	volatile int32_t t172 = -226447;

    t172 = (((x737^x738)-x739)!=x740);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x741 = -1;
	int16_t x743 = 3;
	int32_t x744 = -735033445;
	volatile int32_t t173 = -82062708;

    t173 = (((x741^x742)-x743)!=x744);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x745 = UINT32_MAX;
	static volatile uint16_t x746 = UINT16_MAX;
	int8_t x748 = INT8_MAX;
	volatile int32_t t174 = 5;

    t174 = (((x745^x746)-x747)!=x748);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x754 = 49U;
	volatile uint32_t x755 = 217U;
	int64_t x756 = INT64_MIN;
	volatile int32_t t175 = -11;

    t175 = (((x753^x754)-x755)!=x756);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x757 = INT32_MIN;
	static uint32_t x758 = 157027602U;
	uint16_t x759 = 786U;
	uint16_t x760 = 4U;

    t176 = (((x757^x758)-x759)!=x760);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x761 = 3U;
	int64_t x763 = 133041406LL;
	int16_t x764 = -5;
	int32_t t177 = -7767886;

    t177 = (((x761^x762)-x763)!=x764);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x766 = 3478U;
	volatile int32_t x767 = 28;
	static int32_t x768 = -1;
	volatile int32_t t178 = 383962;

    t178 = (((x765^x766)-x767)!=x768);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x769 = -1;
	static int32_t x770 = INT32_MAX;
	int64_t x771 = -1LL;
	int64_t x772 = INT64_MIN;
	static volatile int32_t t179 = -933;

    t179 = (((x769^x770)-x771)!=x772);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x773 = -3;
	int32_t x774 = -1;
	int64_t x775 = INT64_MAX;
	uint8_t x776 = UINT8_MAX;
	volatile int32_t t180 = -1;

    t180 = (((x773^x774)-x775)!=x776);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x778 = INT16_MIN;
	int8_t x779 = 0;
	static int16_t x780 = -1;

    t181 = (((x777^x778)-x779)!=x780);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x782 = -1;
	uint32_t x783 = UINT32_MAX;
	int64_t x784 = -12459LL;
	int32_t t182 = 24139;

    t182 = (((x781^x782)-x783)!=x784);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x785 = INT16_MIN;
	uint16_t x786 = 7U;
	int32_t x787 = -1;
	static int8_t x788 = INT8_MIN;
	volatile int32_t t183 = -308738;

    t183 = (((x785^x786)-x787)!=x788);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x789 = INT8_MAX;
	uint8_t x790 = UINT8_MAX;
	volatile int32_t x791 = 242886692;
	uint32_t x792 = 456U;
	int32_t t184 = -2744;

    t184 = (((x789^x790)-x791)!=x792);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x793 = UINT32_MAX;
	int32_t x795 = -22;
	uint32_t x796 = 1767170229U;

    t185 = (((x793^x794)-x795)!=x796);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x797 = INT8_MIN;
	static int32_t x798 = -1;
	volatile int32_t x799 = INT32_MAX;
	volatile int32_t x800 = 44;

    t186 = (((x797^x798)-x799)!=x800);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x801 = -1;
	int16_t x802 = 0;
	int32_t x803 = INT32_MAX;
	volatile int8_t x804 = -1;
	int32_t t187 = -7034811;

    t187 = (((x801^x802)-x803)!=x804);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x805 = UINT8_MAX;
	static uint64_t x806 = 197LLU;
	int16_t x807 = 1;
	int16_t x808 = 966;
	volatile int32_t t188 = -738862745;

    t188 = (((x805^x806)-x807)!=x808);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x810 = 0;
	int16_t x811 = INT16_MIN;
	int64_t x812 = -1LL;
	int32_t t189 = -26551373;

    t189 = (((x809^x810)-x811)!=x812);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x813 = INT64_MIN;
	static int32_t x814 = INT32_MIN;
	int16_t x815 = -1;
	uint64_t x816 = UINT64_MAX;

    t190 = (((x813^x814)-x815)!=x816);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x818 = -1LL;
	volatile int16_t x819 = INT16_MAX;
	int32_t x820 = INT32_MIN;

    t191 = (((x817^x818)-x819)!=x820);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x821 = INT64_MAX;
	int16_t x822 = INT16_MIN;
	int64_t x823 = -1692591LL;

    t192 = (((x821^x822)-x823)!=x824);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x825 = 29;
	int8_t x826 = INT8_MAX;
	static int32_t x827 = 1960418;
	uint8_t x828 = UINT8_MAX;
	volatile int32_t t193 = 2026;

    t193 = (((x825^x826)-x827)!=x828);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x829 = INT64_MAX;
	int32_t x830 = -1;
	int16_t x831 = -1;
	uint16_t x832 = 27U;
	static volatile int32_t t194 = -653904;

    t194 = (((x829^x830)-x831)!=x832);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x833 = INT16_MAX;
	static uint8_t x834 = 1U;
	int16_t x835 = -439;
	volatile uint32_t x836 = 7860381U;
	int32_t t195 = -1;

    t195 = (((x833^x834)-x835)!=x836);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x840 = UINT16_MAX;
	int32_t t196 = 14730973;

    t196 = (((x837^x838)-x839)!=x840);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x841 = 9U;
	int16_t x842 = INT16_MIN;
	int32_t x843 = INT32_MIN;
	static volatile int32_t x844 = INT32_MAX;
	volatile int32_t t197 = 5;

    t197 = (((x841^x842)-x843)!=x844);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x849 = INT64_MAX;
	volatile int32_t x850 = -1;
	int8_t x851 = -1;
	static volatile int64_t x852 = 324298943031318LL;
	int32_t t198 = -297797;

    t198 = (((x849^x850)-x851)!=x852);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x853 = -2020;
	static uint32_t x854 = 24712606U;
	volatile int16_t x855 = INT16_MAX;
	static volatile int64_t x856 = INT64_MIN;

    t199 = (((x853^x854)-x855)!=x856);

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

