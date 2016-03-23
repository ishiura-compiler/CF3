
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

int64_t x8 = -1LL;
static int8_t x14 = -1;
uint64_t x16 = UINT64_MAX;
volatile uint8_t x20 = 21U;
uint8_t x21 = 31U;
volatile int8_t x23 = INT8_MIN;
volatile int32_t t5 = -15703;
int64_t x37 = INT64_MAX;
int32_t x40 = -1;
int64_t x41 = INT64_MIN;
volatile int8_t x43 = -1;
int64_t x48 = -1LL;
uint16_t x68 = 1U;
int32_t t11 = -9;
static uint8_t x71 = 122U;
int32_t t12 = -17686779;
static int16_t x77 = -1873;
int32_t t13 = -225;
volatile int16_t x85 = INT16_MIN;
volatile int64_t x92 = -1LL;
int32_t t15 = -3001714;
static volatile uint64_t x101 = 47985976LLU;
static volatile int16_t x102 = INT16_MIN;
uint64_t x104 = 954LLU;
int32_t t20 = -81458;
int64_t x118 = -1LL;
int64_t x119 = -1LL;
int32_t x130 = -936614673;
volatile int32_t t23 = 609171;
volatile uint8_t x133 = 125U;
int8_t x134 = INT8_MAX;
uint64_t x141 = UINT64_MAX;
static volatile uint8_t x142 = UINT8_MAX;
uint16_t x149 = UINT16_MAX;
static int32_t t28 = 1739;
int16_t x157 = 5;
int16_t x162 = INT16_MAX;
int8_t x184 = -1;
volatile int8_t x186 = -7;
static int32_t t37 = -78622;
volatile int32_t x194 = INT32_MAX;
volatile uint8_t x195 = UINT8_MAX;
volatile uint64_t x196 = 51582011192975LLU;
volatile uint32_t x197 = 13U;
volatile int64_t x200 = -1LL;
uint16_t x209 = 3483U;
volatile int32_t x212 = INT32_MIN;
int32_t x224 = -1;
int32_t t42 = 271;
uint32_t x228 = UINT32_MAX;
int16_t x233 = -1;
int32_t x242 = -268987746;
uint16_t x256 = 1963U;
int8_t x262 = INT8_MIN;
static uint64_t x263 = 316023200LLU;
uint64_t x265 = 2436401457822236661LLU;
volatile int32_t t51 = -3;
uint16_t x285 = UINT16_MAX;
int16_t x294 = INT16_MAX;
uint8_t x306 = 0U;
uint8_t x308 = 1U;
uint8_t x336 = 59U;
int8_t x339 = INT8_MAX;
uint64_t x340 = 138525398LLU;
uint32_t x342 = 289U;
uint64_t x364 = 2033714850312200LLU;
int32_t t66 = 1;
static uint64_t x367 = 944741395630088LLU;
static uint16_t x378 = 3U;
volatile uint64_t x380 = UINT64_MAX;
uint64_t x383 = UINT64_MAX;
int32_t x391 = 213;
int16_t x401 = INT16_MIN;
static volatile int32_t t73 = 227881021;
uint64_t x426 = UINT64_MAX;
volatile int32_t x430 = -1;
int64_t x432 = -1LL;
int16_t x433 = INT16_MAX;
static volatile int32_t x434 = INT32_MAX;
static int8_t x442 = -1;
volatile int32_t t79 = -15732;
int8_t x458 = -1;
volatile uint8_t x462 = 10U;
int16_t x463 = -1;
int16_t x464 = -1;
static volatile int32_t t83 = 200950;
volatile uint64_t x475 = 8529576554LLU;
volatile int64_t x485 = -6065168646LL;
static uint64_t x491 = 1333LLU;
int64_t x492 = INT64_MIN;
uint8_t x497 = 1U;
int64_t x502 = -1LL;
int64_t x505 = INT64_MIN;
volatile int16_t x507 = INT16_MIN;
static int32_t x509 = -221758;
int8_t x511 = 1;
volatile uint64_t x513 = 602480119981715043LLU;
int64_t x515 = INT64_MAX;
int32_t t92 = 0;
static uint8_t x528 = 3U;
static uint32_t x533 = UINT32_MAX;
static int16_t x541 = 31;
static volatile int64_t x546 = -18663810934818984LL;
int32_t x550 = INT32_MIN;
uint8_t x552 = 57U;
volatile int32_t x566 = 0;
volatile int32_t t100 = 122831;
int32_t t102 = -462;
static int32_t x577 = INT32_MIN;
static int16_t x586 = -49;
static int16_t x608 = -7;
int64_t x621 = INT64_MIN;
volatile int32_t t110 = 167776;
int32_t x637 = -1;
int64_t x638 = 8046489323845791LL;
static uint64_t x640 = UINT64_MAX;
int64_t x662 = -15LL;
uint64_t x667 = 600019097314889LLU;
int32_t x669 = INT32_MAX;
int32_t x674 = INT32_MIN;
int64_t x685 = -61304LL;
int32_t t118 = -2092071;
volatile uint8_t x689 = UINT8_MAX;
int32_t x695 = -1;
uint8_t x698 = 66U;
int32_t x703 = 206;
uint64_t x704 = 6660037518062LLU;
uint8_t x715 = UINT8_MAX;
int64_t x721 = INT64_MIN;
uint16_t x722 = 0U;
uint8_t x723 = UINT8_MAX;
static volatile uint64_t x729 = 28124715374845353LLU;
static int32_t t126 = -216871866;
static volatile uint8_t x733 = 0U;
int8_t x734 = INT8_MIN;
int64_t x738 = INT64_MIN;
uint64_t x750 = 70676676026567LLU;
uint16_t x751 = 191U;
int32_t t131 = 52;
uint16_t x770 = UINT16_MAX;
int8_t x771 = INT8_MIN;
static int8_t x772 = INT8_MIN;
int64_t x773 = 2101170550LL;
int8_t x783 = -1;
volatile int32_t t134 = -3096654;
uint64_t x788 = UINT64_MAX;
uint16_t x791 = UINT16_MAX;
volatile int32_t t136 = 248405;
int8_t x805 = INT8_MAX;
uint64_t x810 = UINT64_MAX;
int8_t x814 = INT8_MIN;
int32_t x817 = 1;
static int16_t x821 = -1;
int64_t x822 = -25LL;
int64_t x832 = -1LL;
int8_t x836 = -1;
uint16_t x837 = UINT16_MAX;
static uint8_t x840 = UINT8_MAX;
int32_t t145 = -35;
uint32_t x841 = 275066U;
volatile int32_t x842 = INT32_MIN;
volatile int8_t x844 = INT8_MIN;
volatile int32_t t146 = -888421462;
uint8_t x845 = UINT8_MAX;
int8_t x855 = -1;
int64_t x862 = INT64_MAX;
volatile int32_t t149 = 2567439;
static int16_t x891 = INT16_MIN;
volatile int32_t t154 = -4;
volatile int32_t x893 = -133;
int32_t x900 = -1;
volatile uint64_t x902 = 7171533LLU;
static int8_t x904 = -8;
volatile int8_t x909 = -34;
int8_t x916 = -1;
int64_t x920 = INT64_MAX;
int32_t t161 = 29035595;
uint16_t x926 = UINT16_MAX;
int64_t x929 = INT64_MIN;
uint8_t x931 = UINT8_MAX;
static uint16_t x940 = 501U;
int8_t x947 = INT8_MIN;
volatile int32_t t167 = 5232772;
static int8_t x952 = -1;
volatile int32_t t168 = 125176;
volatile int32_t t169 = -327544;
static int32_t t170 = 8945;
int16_t x963 = -1;
volatile int32_t t171 = 38;
int8_t x980 = INT8_MAX;
static int8_t x993 = -1;
uint16_t x1003 = 17625U;
static int16_t x1007 = -74;
uint16_t x1008 = 782U;
static volatile int16_t x1011 = 4;
uint8_t x1016 = UINT8_MAX;
int16_t x1023 = 1;
static int16_t x1032 = INT16_MAX;
int32_t t183 = -67177126;
int64_t x1041 = -1334978180850302744LL;
uint16_t x1042 = UINT16_MAX;
volatile int32_t t184 = 25;
static int64_t x1053 = INT64_MAX;
int8_t x1055 = -1;
int16_t x1058 = INT16_MAX;
static int32_t x1059 = -5;
volatile int16_t x1071 = INT16_MAX;
volatile int32_t t189 = 34107510;
volatile int32_t t192 = 5298;
int32_t x1116 = INT32_MAX;
volatile int32_t t194 = -628008;
static volatile int8_t x1124 = -1;
int8_t x1136 = 5;
static uint16_t x1149 = 1U;
volatile int32_t t198 = -329301529;
int64_t x1153 = -2453623429634780785LL;


void f0(void) {
    	int32_t x1 = 2;
	uint16_t x2 = 19U;
	static int8_t x3 = INT8_MIN;
	static volatile uint16_t x4 = 39U;
	static int32_t t0 = -1;

    t0 = (x1!=(x2/(x3*x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -124;
	static uint64_t x6 = UINT64_MAX;
	int8_t x7 = -1;
	volatile int32_t t1 = -6251420;

    t1 = (x5!=(x6/(x7*x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = 59U;
	int16_t x15 = 1776;
	static volatile int32_t t2 = -484;

    t2 = (x13!=(x14/(x15*x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x17 = UINT64_MAX;
	int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MIN;
	int32_t t3 = 70793748;

    t3 = (x17!=(x18/(x19*x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x22 = 1964U;
	static volatile int8_t x24 = INT8_MIN;
	int32_t t4 = 98;

    t4 = (x21!=(x22/(x23*x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = UINT64_MAX;
	uint64_t x30 = 15211761190036156LLU;
	uint32_t x31 = 475U;
	static int8_t x32 = INT8_MIN;

    t5 = (x29!=(x30/(x31*x32)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x38 = 2225;
	int64_t x39 = INT64_MAX;
	static int32_t t6 = 3863873;

    t6 = (x37!=(x38/(x39*x40)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x42 = 8757;
	int64_t x44 = -5LL;
	volatile int32_t t7 = 59488;

    t7 = (x41!=(x42/(x43*x44)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x45 = INT16_MIN;
	static volatile int64_t x46 = -1LL;
	static int8_t x47 = INT8_MIN;
	volatile int32_t t8 = -190044314;

    t8 = (x45!=(x46/(x47*x48)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x53 = INT16_MIN;
	int32_t x54 = -1;
	int16_t x55 = INT16_MAX;
	static int16_t x56 = INT16_MIN;
	int32_t t9 = 85158;

    t9 = (x53!=(x54/(x55*x56)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x61 = 311920041LLU;
	int32_t x62 = -1;
	int16_t x63 = INT16_MIN;
	static int16_t x64 = -55;
	volatile int32_t t10 = -2;

    t10 = (x61!=(x62/(x63*x64)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x65 = INT8_MIN;
	volatile int32_t x66 = INT32_MAX;
	uint16_t x67 = UINT16_MAX;

    t11 = (x65!=(x66/(x67*x68)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x69 = -2027861608191LL;
	int32_t x70 = INT32_MIN;
	volatile int16_t x72 = INT16_MAX;

    t12 = (x69!=(x70/(x71*x72)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x78 = 1;
	uint64_t x79 = 3579178667552LLU;
	volatile int32_t x80 = -1;

    t13 = (x77!=(x78/(x79*x80)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x86 = 803643592U;
	volatile int64_t x87 = -1LL;
	volatile int32_t x88 = -1;
	static volatile int32_t t14 = 5;

    t14 = (x85!=(x86/(x87*x88)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x89 = 17;
	int64_t x90 = -2787412672433073LL;
	static int64_t x91 = 15155097906LL;

    t15 = (x89!=(x90/(x91*x92)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x93 = 23287U;
	int8_t x94 = INT8_MAX;
	int64_t x95 = -1LL;
	int8_t x96 = 20;
	int32_t t16 = -38404861;

    t16 = (x93!=(x94/(x95*x96)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x97 = -3;
	int32_t x98 = INT32_MAX;
	uint32_t x99 = UINT32_MAX;
	int8_t x100 = 3;
	int32_t t17 = -9479;

    t17 = (x97!=(x98/(x99*x100)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x103 = -30779;
	volatile int32_t t18 = -31754452;

    t18 = (x101!=(x102/(x103*x104)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x109 = INT32_MIN;
	int32_t x110 = -14448;
	int16_t x111 = 785;
	volatile int8_t x112 = -1;
	int32_t t19 = -14;

    t19 = (x109!=(x110/(x111*x112)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x113 = 6442377273891792LLU;
	int32_t x114 = INT32_MIN;
	int64_t x115 = 667753611LL;
	int8_t x116 = INT8_MAX;

    t20 = (x113!=(x114/(x115*x116)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x117 = INT8_MIN;
	volatile uint16_t x120 = 105U;
	static int32_t t21 = -65587319;

    t21 = (x117!=(x118/(x119*x120)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x125 = INT64_MIN;
	uint64_t x126 = 0LLU;
	volatile uint32_t x127 = UINT32_MAX;
	int32_t x128 = INT32_MAX;
	int32_t t22 = -123045266;

    t22 = (x125!=(x126/(x127*x128)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x129 = INT64_MIN;
	volatile uint64_t x131 = 462850042944LLU;
	int8_t x132 = -14;

    t23 = (x129!=(x130/(x131*x132)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x135 = UINT64_MAX;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t24 = 513326442;

    t24 = (x133!=(x134/(x135*x136)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x137 = INT64_MAX;
	static int32_t x138 = -1;
	int16_t x139 = -150;
	static int32_t x140 = -3;
	volatile int32_t t25 = 3592354;

    t25 = (x137!=(x138/(x139*x140)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x143 = 85U;
	int8_t x144 = -1;
	int32_t t26 = 3043;

    t26 = (x141!=(x142/(x143*x144)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x145 = INT16_MIN;
	uint16_t x146 = 307U;
	int32_t x147 = -3;
	volatile uint16_t x148 = 656U;
	int32_t t27 = 1625;

    t27 = (x145!=(x146/(x147*x148)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x150 = 824233369LLU;
	uint64_t x151 = UINT64_MAX;
	int64_t x152 = INT64_MAX;

    t28 = (x149!=(x150/(x151*x152)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x153 = -1;
	int64_t x154 = 1280389774123802LL;
	uint8_t x155 = UINT8_MAX;
	static int16_t x156 = 357;
	int32_t t29 = -1;

    t29 = (x153!=(x154/(x155*x156)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x158 = INT64_MIN;
	uint32_t x159 = UINT32_MAX;
	int16_t x160 = -213;
	static int32_t t30 = -2655;

    t30 = (x157!=(x158/(x159*x160)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x161 = 315U;
	uint64_t x163 = 6930747166361975LLU;
	uint32_t x164 = UINT32_MAX;
	int32_t t31 = 10;

    t31 = (x161!=(x162/(x163*x164)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x165 = -1;
	static volatile int16_t x166 = INT16_MIN;
	volatile int64_t x167 = -1LL;
	static uint8_t x168 = UINT8_MAX;
	volatile int32_t t32 = -6;

    t32 = (x165!=(x166/(x167*x168)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x173 = INT8_MIN;
	int64_t x174 = -1LL;
	volatile uint32_t x175 = UINT32_MAX;
	int32_t x176 = INT32_MIN;
	volatile int32_t t33 = -793881;

    t33 = (x173!=(x174/(x175*x176)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x177 = INT32_MAX;
	int64_t x178 = INT64_MIN;
	uint16_t x179 = 4724U;
	int16_t x180 = INT16_MAX;
	int32_t t34 = -1;

    t34 = (x177!=(x178/(x179*x180)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x181 = INT16_MIN;
	static uint16_t x182 = 117U;
	volatile int16_t x183 = INT16_MAX;
	static int32_t t35 = -102;

    t35 = (x181!=(x182/(x183*x184)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x185 = -414615804616568LL;
	uint16_t x187 = 3687U;
	static int64_t x188 = -1LL;
	volatile int32_t t36 = 43;

    t36 = (x185!=(x186/(x187*x188)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x189 = UINT64_MAX;
	int32_t x190 = INT32_MAX;
	volatile int8_t x191 = -1;
	int16_t x192 = INT16_MIN;

    t37 = (x189!=(x190/(x191*x192)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x193 = -224;
	static volatile int32_t t38 = -468;

    t38 = (x193!=(x194/(x195*x196)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x198 = -896739665;
	int16_t x199 = INT16_MIN;
	volatile int32_t t39 = 0;

    t39 = (x197!=(x198/(x199*x200)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x210 = INT64_MIN;
	int64_t x211 = -1LL;
	int32_t t40 = -13964841;

    t40 = (x209!=(x210/(x211*x212)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x217 = 3U;
	static int64_t x218 = INT64_MIN;
	static volatile int16_t x219 = INT16_MAX;
	int16_t x220 = -2038;
	volatile int32_t t41 = -195;

    t41 = (x217!=(x218/(x219*x220)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x221 = 0U;
	volatile uint32_t x222 = UINT32_MAX;
	int8_t x223 = INT8_MAX;

    t42 = (x221!=(x222/(x223*x224)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x225 = UINT64_MAX;
	uint16_t x226 = UINT16_MAX;
	int64_t x227 = -1LL;
	volatile int32_t t43 = -59813695;

    t43 = (x225!=(x226/(x227*x228)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x229 = 58U;
	uint32_t x230 = UINT32_MAX;
	int8_t x231 = INT8_MIN;
	uint8_t x232 = 7U;
	volatile int32_t t44 = 30389;

    t44 = (x229!=(x230/(x231*x232)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x234 = INT32_MIN;
	uint64_t x235 = 31789LLU;
	static uint64_t x236 = UINT64_MAX;
	static int32_t t45 = 2513727;

    t45 = (x233!=(x234/(x235*x236)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x237 = 28U;
	int64_t x238 = INT64_MAX;
	int32_t x239 = -1;
	int32_t x240 = INT32_MAX;
	volatile int32_t t46 = -1128418;

    t46 = (x237!=(x238/(x239*x240)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x241 = UINT32_MAX;
	int16_t x243 = -1;
	int8_t x244 = -1;
	int32_t t47 = -330;

    t47 = (x241!=(x242/(x243*x244)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x245 = -1;
	uint64_t x246 = 121502863335104532LLU;
	static int16_t x247 = INT16_MIN;
	static volatile uint8_t x248 = 29U;
	int32_t t48 = 38972;

    t48 = (x245!=(x246/(x247*x248)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x253 = 728499U;
	volatile int8_t x254 = 60;
	int8_t x255 = -1;
	volatile int32_t t49 = 7092;

    t49 = (x253!=(x254/(x255*x256)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x261 = 184740565LLU;
	int64_t x264 = 15975487198LL;
	volatile int32_t t50 = 4782073;

    t50 = (x261!=(x262/(x263*x264)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x266 = INT64_MIN;
	volatile int64_t x267 = -1LL;
	uint8_t x268 = 6U;

    t51 = (x265!=(x266/(x267*x268)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x286 = 23U;
	static volatile int64_t x287 = -27033LL;
	volatile uint8_t x288 = 3U;
	int32_t t52 = 13;

    t52 = (x285!=(x286/(x287*x288)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x289 = 205239379125809LLU;
	uint16_t x290 = 32428U;
	volatile uint32_t x291 = 11197U;
	int32_t x292 = INT32_MIN;
	static int32_t t53 = -471545;

    t53 = (x289!=(x290/(x291*x292)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x293 = 206403319204LL;
	static volatile uint64_t x295 = 2LLU;
	int32_t x296 = INT32_MIN;
	volatile int32_t t54 = -1;

    t54 = (x293!=(x294/(x295*x296)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x297 = INT64_MAX;
	int32_t x298 = -1;
	int32_t x299 = -465;
	int8_t x300 = 27;
	volatile int32_t t55 = 218210;

    t55 = (x297!=(x298/(x299*x300)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x301 = UINT32_MAX;
	int64_t x302 = -331LL;
	int16_t x303 = INT16_MIN;
	int32_t x304 = -2322;
	volatile int32_t t56 = 1252;

    t56 = (x301!=(x302/(x303*x304)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x305 = -1;
	volatile int64_t x307 = INT64_MIN;
	static int32_t t57 = 42991;

    t57 = (x305!=(x306/(x307*x308)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x321 = -30;
	int32_t x322 = 2;
	static volatile int64_t x323 = INT64_MIN;
	uint8_t x324 = 1U;
	int32_t t58 = -1;

    t58 = (x321!=(x322/(x323*x324)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x325 = UINT8_MAX;
	int32_t x326 = 1;
	static volatile int8_t x327 = 16;
	volatile int8_t x328 = -1;
	volatile int32_t t59 = -130;

    t59 = (x325!=(x326/(x327*x328)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x329 = 196814761U;
	static uint32_t x330 = UINT32_MAX;
	static uint32_t x331 = 1U;
	uint32_t x332 = UINT32_MAX;
	static int32_t t60 = 5415;

    t60 = (x329!=(x330/(x331*x332)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x333 = -6;
	static int32_t x334 = -6478;
	int8_t x335 = -7;
	int32_t t61 = -4127364;

    t61 = (x333!=(x334/(x335*x336)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x337 = 1442U;
	volatile int32_t x338 = INT32_MIN;
	volatile int32_t t62 = 50414216;

    t62 = (x337!=(x338/(x339*x340)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x341 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	uint64_t x344 = UINT64_MAX;
	int32_t t63 = -22039;

    t63 = (x341!=(x342/(x343*x344)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x345 = 1002877U;
	int16_t x346 = INT16_MIN;
	uint32_t x347 = 57731U;
	int32_t x348 = INT32_MIN;
	volatile int32_t t64 = -4901443;

    t64 = (x345!=(x346/(x347*x348)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x349 = UINT8_MAX;
	int32_t x350 = -1;
	int16_t x351 = 3576;
	uint32_t x352 = 188910U;
	int32_t t65 = 922;

    t65 = (x349!=(x350/(x351*x352)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x361 = INT16_MIN;
	uint8_t x362 = 27U;
	int32_t x363 = 410;

    t66 = (x361!=(x362/(x363*x364)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x365 = 1483667941662044LLU;
	int32_t x366 = INT32_MAX;
	volatile uint32_t x368 = UINT32_MAX;
	int32_t t67 = 28549;

    t67 = (x365!=(x366/(x367*x368)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x369 = 62833074940LLU;
	int32_t x370 = -1;
	int32_t x371 = INT32_MAX;
	uint32_t x372 = UINT32_MAX;
	volatile int32_t t68 = -202681;

    t68 = (x369!=(x370/(x371*x372)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x377 = -11;
	uint16_t x379 = 5U;
	static volatile int32_t t69 = -30;

    t69 = (x377!=(x378/(x379*x380)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x381 = -24;
	int8_t x382 = -11;
	static int8_t x384 = 3;
	volatile int32_t t70 = 208761;

    t70 = (x381!=(x382/(x383*x384)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x389 = -113527271643LL;
	static int64_t x390 = 632890784606LL;
	uint16_t x392 = 6U;
	int32_t t71 = -108653;

    t71 = (x389!=(x390/(x391*x392)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x393 = 601920490LLU;
	int8_t x394 = INT8_MIN;
	volatile uint32_t x395 = 733179106U;
	int16_t x396 = -1;
	int32_t t72 = 1403;

    t72 = (x393!=(x394/(x395*x396)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x402 = 18016U;
	int32_t x403 = 1517;
	int8_t x404 = INT8_MAX;

    t73 = (x401!=(x402/(x403*x404)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x413 = INT16_MIN;
	int8_t x414 = -3;
	static int16_t x415 = INT16_MIN;
	uint32_t x416 = UINT32_MAX;
	int32_t t74 = -15321673;

    t74 = (x413!=(x414/(x415*x416)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x425 = 236368000301700LLU;
	uint32_t x427 = 140U;
	int16_t x428 = 429;
	int32_t t75 = 30798;

    t75 = (x425!=(x426/(x427*x428)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x429 = -402954LL;
	static volatile uint32_t x431 = 85625684U;
	volatile int32_t t76 = 13;

    t76 = (x429!=(x430/(x431*x432)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x435 = -1;
	volatile int64_t x436 = INT64_MAX;
	volatile int32_t t77 = 69;

    t77 = (x433!=(x434/(x435*x436)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x441 = 31532U;
	static uint16_t x443 = UINT16_MAX;
	static int16_t x444 = INT16_MIN;
	volatile int32_t t78 = 19492;

    t78 = (x441!=(x442/(x443*x444)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x445 = -6792;
	static int8_t x446 = INT8_MAX;
	volatile int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MIN;

    t79 = (x445!=(x446/(x447*x448)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x449 = 28750822U;
	int8_t x450 = 0;
	uint64_t x451 = 2889886000LLU;
	int32_t x452 = INT32_MAX;
	int32_t t80 = 716;

    t80 = (x449!=(x450/(x451*x452)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x457 = 16141;
	uint8_t x459 = 1U;
	int32_t x460 = INT32_MAX;
	volatile int32_t t81 = 8;

    t81 = (x457!=(x458/(x459*x460)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x461 = UINT16_MAX;
	static int32_t t82 = -4069;

    t82 = (x461!=(x462/(x463*x464)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x469 = 59U;
	int32_t x470 = -94;
	int16_t x471 = -1;
	uint32_t x472 = 152U;

    t83 = (x469!=(x470/(x471*x472)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x473 = -1LL;
	int16_t x474 = 24;
	uint64_t x476 = UINT64_MAX;
	int32_t t84 = 2;

    t84 = (x473!=(x474/(x475*x476)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x481 = INT8_MAX;
	uint8_t x482 = 11U;
	int8_t x483 = INT8_MIN;
	uint32_t x484 = 15U;
	volatile int32_t t85 = 28192;

    t85 = (x481!=(x482/(x483*x484)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x486 = 6U;
	int16_t x487 = -6958;
	volatile uint64_t x488 = 1396659520351598252LLU;
	volatile int32_t t86 = -20621020;

    t86 = (x485!=(x486/(x487*x488)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x489 = INT32_MIN;
	volatile int64_t x490 = -1LL;
	int32_t t87 = 2287;

    t87 = (x489!=(x490/(x491*x492)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x498 = INT16_MIN;
	int16_t x499 = INT16_MIN;
	int32_t x500 = -80;
	int32_t t88 = 33322;

    t88 = (x497!=(x498/(x499*x500)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x501 = 2853;
	int8_t x503 = 26;
	static int64_t x504 = -1LL;
	int32_t t89 = 0;

    t89 = (x501!=(x502/(x503*x504)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x506 = -1;
	uint8_t x508 = 67U;
	volatile int32_t t90 = -124637;

    t90 = (x505!=(x506/(x507*x508)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x510 = 0;
	static int16_t x512 = -1;
	int32_t t91 = 760041190;

    t91 = (x509!=(x510/(x511*x512)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x514 = INT32_MAX;
	uint64_t x516 = 32859610LLU;

    t92 = (x513!=(x514/(x515*x516)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x517 = -1;
	int16_t x518 = INT16_MIN;
	uint8_t x519 = 1U;
	int8_t x520 = INT8_MIN;
	int32_t t93 = -4512;

    t93 = (x517!=(x518/(x519*x520)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x521 = -46292;
	static int64_t x522 = -671763113140383857LL;
	volatile int8_t x523 = INT8_MAX;
	uint16_t x524 = 544U;
	int32_t t94 = -221;

    t94 = (x521!=(x522/(x523*x524)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x525 = UINT64_MAX;
	uint8_t x526 = UINT8_MAX;
	volatile int32_t x527 = -3186682;
	volatile int32_t t95 = 26;

    t95 = (x525!=(x526/(x527*x528)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x534 = -1;
	int8_t x535 = -1;
	static uint64_t x536 = 3820295LLU;
	int32_t t96 = 996803196;

    t96 = (x533!=(x534/(x535*x536)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x542 = 209U;
	uint16_t x543 = UINT16_MAX;
	static int16_t x544 = INT16_MIN;
	int32_t t97 = 11293140;

    t97 = (x541!=(x542/(x543*x544)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x545 = INT64_MIN;
	static uint64_t x547 = UINT64_MAX;
	int32_t x548 = INT32_MIN;
	static volatile int32_t t98 = -6;

    t98 = (x545!=(x546/(x547*x548)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x549 = INT8_MAX;
	uint32_t x551 = 3061U;
	static int32_t t99 = -488236;

    t99 = (x549!=(x550/(x551*x552)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x565 = UINT8_MAX;
	int32_t x567 = -1;
	static uint8_t x568 = 2U;

    t100 = (x565!=(x566/(x567*x568)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x569 = 202U;
	int64_t x570 = INT64_MIN;
	static uint8_t x571 = 3U;
	int16_t x572 = 487;
	int32_t t101 = -5462;

    t101 = (x569!=(x570/(x571*x572)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x573 = UINT8_MAX;
	int32_t x574 = INT32_MIN;
	static int16_t x575 = -1;
	int16_t x576 = -1;

    t102 = (x573!=(x574/(x575*x576)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x578 = -1;
	int64_t x579 = INT64_MIN;
	volatile uint32_t x580 = 1U;
	static volatile int32_t t103 = -70824;

    t103 = (x577!=(x578/(x579*x580)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x585 = 2U;
	volatile int64_t x587 = -22958286510323775LL;
	int64_t x588 = -4LL;
	int32_t t104 = 0;

    t104 = (x585!=(x586/(x587*x588)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x589 = INT64_MAX;
	uint64_t x590 = 15445317LLU;
	volatile uint32_t x591 = 200U;
	volatile uint16_t x592 = 27465U;
	volatile int32_t t105 = 16608110;

    t105 = (x589!=(x590/(x591*x592)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x593 = INT8_MAX;
	int8_t x594 = INT8_MIN;
	int16_t x595 = 2762;
	int16_t x596 = INT16_MAX;
	volatile int32_t t106 = -150;

    t106 = (x593!=(x594/(x595*x596)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x605 = -361650142369LL;
	volatile int32_t x606 = -1;
	int32_t x607 = -1;
	static volatile int32_t t107 = 0;

    t107 = (x605!=(x606/(x607*x608)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x617 = INT8_MAX;
	int64_t x618 = INT64_MIN;
	volatile int32_t x619 = INT32_MIN;
	uint32_t x620 = 188031U;
	int32_t t108 = -46;

    t108 = (x617!=(x618/(x619*x620)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x622 = 96520348LLU;
	volatile uint8_t x623 = 1U;
	static volatile int32_t x624 = INT32_MIN;
	volatile int32_t t109 = 2146501;

    t109 = (x621!=(x622/(x623*x624)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x633 = -1;
	static int16_t x634 = 2063;
	uint32_t x635 = UINT32_MAX;
	volatile int32_t x636 = INT32_MIN;

    t110 = (x633!=(x634/(x635*x636)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x639 = 148041121177656940LL;
	volatile int32_t t111 = 1;

    t111 = (x637!=(x638/(x639*x640)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x649 = 1;
	int64_t x650 = 84519045LL;
	uint8_t x651 = UINT8_MAX;
	uint64_t x652 = 6909LLU;
	int32_t t112 = -65220114;

    t112 = (x649!=(x650/(x651*x652)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x661 = -80853582539044315LL;
	uint16_t x663 = 504U;
	uint64_t x664 = UINT64_MAX;
	volatile int32_t t113 = 14;

    t113 = (x661!=(x662/(x663*x664)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x665 = INT8_MIN;
	int8_t x666 = INT8_MIN;
	uint16_t x668 = UINT16_MAX;
	int32_t t114 = 2723896;

    t114 = (x665!=(x666/(x667*x668)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x670 = INT32_MIN;
	uint8_t x671 = 8U;
	volatile uint16_t x672 = UINT16_MAX;
	volatile int32_t t115 = 2755101;

    t115 = (x669!=(x670/(x671*x672)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x673 = -570;
	int16_t x675 = -1;
	uint8_t x676 = 11U;
	volatile int32_t t116 = -31;

    t116 = (x673!=(x674/(x675*x676)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x681 = -131753033043LL;
	uint8_t x682 = UINT8_MAX;
	volatile int8_t x683 = -41;
	int16_t x684 = -1;
	int32_t t117 = 2662;

    t117 = (x681!=(x682/(x683*x684)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x686 = INT32_MIN;
	int32_t x687 = 1983284;
	static volatile uint64_t x688 = UINT64_MAX;

    t118 = (x685!=(x686/(x687*x688)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x690 = 5247753LLU;
	int64_t x691 = -1LL;
	static uint32_t x692 = UINT32_MAX;
	static volatile int32_t t119 = 652329;

    t119 = (x689!=(x690/(x691*x692)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x693 = -4870;
	int16_t x694 = -13;
	uint32_t x696 = 70U;
	volatile int32_t t120 = 29258968;

    t120 = (x693!=(x694/(x695*x696)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x697 = -1;
	int64_t x699 = INT64_MAX;
	static int32_t x700 = -1;
	int32_t t121 = 1024387526;

    t121 = (x697!=(x698/(x699*x700)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x701 = 13U;
	static int8_t x702 = 3;
	static int32_t t122 = -179012;

    t122 = (x701!=(x702/(x703*x704)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x713 = -27LL;
	int64_t x714 = -1LL;
	int32_t x716 = -28;
	int32_t t123 = 284741;

    t123 = (x713!=(x714/(x715*x716)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x717 = UINT32_MAX;
	uint8_t x718 = 3U;
	int64_t x719 = -1LL;
	static volatile int16_t x720 = INT16_MIN;
	volatile int32_t t124 = -41611165;

    t124 = (x717!=(x718/(x719*x720)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x724 = 3LLU;
	int32_t t125 = -101275787;

    t125 = (x721!=(x722/(x723*x724)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x730 = 54;
	volatile int8_t x731 = INT8_MAX;
	static volatile int16_t x732 = -1;

    t126 = (x729!=(x730/(x731*x732)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x735 = 6U;
	int16_t x736 = 26;
	volatile int32_t t127 = 105919;

    t127 = (x733!=(x734/(x735*x736)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x737 = INT64_MAX;
	int8_t x739 = -15;
	static uint16_t x740 = 1U;
	int32_t t128 = -502;

    t128 = (x737!=(x738/(x739*x740)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x741 = INT32_MIN;
	uint16_t x742 = 296U;
	static int8_t x743 = -1;
	uint32_t x744 = 5U;
	int32_t t129 = -1206;

    t129 = (x741!=(x742/(x743*x744)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x749 = 1509040LL;
	int32_t x752 = -1;
	static volatile int32_t t130 = -104836;

    t130 = (x749!=(x750/(x751*x752)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x761 = INT8_MAX;
	int16_t x762 = -12;
	int8_t x763 = -1;
	int8_t x764 = INT8_MIN;

    t131 = (x761!=(x762/(x763*x764)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x769 = INT32_MIN;
	volatile int32_t t132 = 371974;

    t132 = (x769!=(x770/(x771*x772)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x774 = INT32_MIN;
	volatile int64_t x775 = -1LL;
	volatile int64_t x776 = -22958952814LL;
	volatile int32_t t133 = -25;

    t133 = (x773!=(x774/(x775*x776)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x781 = 18586U;
	volatile int64_t x782 = INT64_MIN;
	uint8_t x784 = UINT8_MAX;

    t134 = (x781!=(x782/(x783*x784)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x785 = INT32_MIN;
	static int64_t x786 = INT64_MIN;
	int32_t x787 = INT32_MIN;
	volatile int32_t t135 = -193;

    t135 = (x785!=(x786/(x787*x788)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x789 = 189U;
	int64_t x790 = INT64_MAX;
	int8_t x792 = INT8_MIN;

    t136 = (x789!=(x790/(x791*x792)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x806 = 14779U;
	uint16_t x807 = 15741U;
	uint16_t x808 = 3U;
	volatile int32_t t137 = 6832;

    t137 = (x805!=(x806/(x807*x808)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x809 = UINT64_MAX;
	uint8_t x811 = UINT8_MAX;
	static int64_t x812 = 14435956887750LL;
	int32_t t138 = -5687568;

    t138 = (x809!=(x810/(x811*x812)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x813 = INT8_MIN;
	static uint8_t x815 = 1U;
	static int64_t x816 = INT64_MAX;
	int32_t t139 = 122930315;

    t139 = (x813!=(x814/(x815*x816)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x818 = INT8_MIN;
	volatile int8_t x819 = -1;
	uint32_t x820 = 3640576U;
	static volatile int32_t t140 = -179339250;

    t140 = (x817!=(x818/(x819*x820)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x823 = -1;
	volatile int16_t x824 = INT16_MAX;
	static volatile int32_t t141 = -34108;

    t141 = (x821!=(x822/(x823*x824)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x825 = 2;
	int8_t x826 = 19;
	volatile int8_t x827 = -3;
	int64_t x828 = -1LL;
	volatile int32_t t142 = 10051;

    t142 = (x825!=(x826/(x827*x828)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x829 = INT16_MAX;
	volatile int8_t x830 = INT8_MIN;
	volatile int8_t x831 = INT8_MAX;
	volatile int32_t t143 = -74941;

    t143 = (x829!=(x830/(x831*x832)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x833 = 379761412164LLU;
	uint8_t x834 = UINT8_MAX;
	uint16_t x835 = 14U;
	volatile int32_t t144 = 2;

    t144 = (x833!=(x834/(x835*x836)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x838 = INT32_MIN;
	static int16_t x839 = 14129;

    t145 = (x837!=(x838/(x839*x840)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x843 = 56LLU;

    t146 = (x841!=(x842/(x843*x844)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x846 = INT64_MIN;
	uint16_t x847 = 8U;
	int64_t x848 = 908LL;
	int32_t t147 = 0;

    t147 = (x845!=(x846/(x847*x848)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x853 = INT8_MAX;
	int8_t x854 = -1;
	int32_t x856 = -1;
	static volatile int32_t t148 = 1;

    t148 = (x853!=(x854/(x855*x856)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x861 = -1;
	static volatile uint16_t x863 = 13632U;
	static volatile int8_t x864 = -1;

    t149 = (x861!=(x862/(x863*x864)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x865 = UINT32_MAX;
	uint32_t x866 = 7228846U;
	int8_t x867 = INT8_MIN;
	uint8_t x868 = 46U;
	int32_t t150 = 2;

    t150 = (x865!=(x866/(x867*x868)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x869 = INT64_MIN;
	volatile int64_t x870 = 309524706LL;
	int64_t x871 = 23201609344LL;
	uint8_t x872 = UINT8_MAX;
	int32_t t151 = 1;

    t151 = (x869!=(x870/(x871*x872)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x873 = -728;
	static volatile int16_t x874 = INT16_MIN;
	volatile uint8_t x875 = UINT8_MAX;
	int16_t x876 = -1;
	volatile int32_t t152 = 207;

    t152 = (x873!=(x874/(x875*x876)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x881 = 2661354LLU;
	uint16_t x882 = UINT16_MAX;
	static uint16_t x883 = UINT16_MAX;
	uint64_t x884 = 17586LLU;
	volatile int32_t t153 = -3;

    t153 = (x881!=(x882/(x883*x884)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x889 = 1LL;
	int64_t x890 = 34661383623977316LL;
	static int16_t x892 = 1;

    t154 = (x889!=(x890/(x891*x892)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x894 = -717729320LL;
	int32_t x895 = INT32_MIN;
	int64_t x896 = -451LL;
	volatile int32_t t155 = 471489;

    t155 = (x893!=(x894/(x895*x896)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x897 = INT16_MIN;
	volatile uint64_t x898 = UINT64_MAX;
	int32_t x899 = INT32_MAX;
	volatile int32_t t156 = -27;

    t156 = (x897!=(x898/(x899*x900)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x901 = INT64_MIN;
	int8_t x903 = -1;
	volatile int32_t t157 = -1588939;

    t157 = (x901!=(x902/(x903*x904)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x905 = 46U;
	uint8_t x906 = 77U;
	static uint16_t x907 = 629U;
	uint32_t x908 = 2U;
	int32_t t158 = 158;

    t158 = (x905!=(x906/(x907*x908)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x910 = 316U;
	uint64_t x911 = 1124973497768440408LLU;
	volatile int32_t x912 = -1;
	int32_t t159 = 1035394716;

    t159 = (x909!=(x910/(x911*x912)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x913 = INT32_MAX;
	static uint8_t x914 = UINT8_MAX;
	int8_t x915 = -1;
	int32_t t160 = 0;

    t160 = (x913!=(x914/(x915*x916)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x917 = 10U;
	int64_t x918 = INT64_MAX;
	uint64_t x919 = 11400242742408431LLU;

    t161 = (x917!=(x918/(x919*x920)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x921 = INT16_MIN;
	int16_t x922 = -1;
	uint32_t x923 = UINT32_MAX;
	uint64_t x924 = UINT64_MAX;
	volatile int32_t t162 = 340086941;

    t162 = (x921!=(x922/(x923*x924)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x925 = 19146LL;
	int8_t x927 = 1;
	static volatile uint16_t x928 = UINT16_MAX;
	int32_t t163 = 257;

    t163 = (x925!=(x926/(x927*x928)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x930 = -5415;
	volatile int16_t x932 = 212;
	volatile int32_t t164 = 4119;

    t164 = (x929!=(x930/(x931*x932)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x937 = 9U;
	static uint32_t x938 = 222919948U;
	static int64_t x939 = -500301600245LL;
	int32_t t165 = -37563;

    t165 = (x937!=(x938/(x939*x940)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x941 = INT32_MIN;
	int32_t x942 = INT32_MIN;
	uint64_t x943 = 71275108727LLU;
	int64_t x944 = 4224726632LL;
	volatile int32_t t166 = 2083535;

    t166 = (x941!=(x942/(x943*x944)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x945 = 1605U;
	int64_t x946 = INT64_MIN;
	static uint16_t x948 = 2U;

    t167 = (x945!=(x946/(x947*x948)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x949 = INT32_MAX;
	static int32_t x950 = -1;
	int64_t x951 = -1LL;

    t168 = (x949!=(x950/(x951*x952)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x953 = -1;
	int8_t x954 = -1;
	static volatile int8_t x955 = -1;
	int32_t x956 = -24734999;

    t169 = (x953!=(x954/(x955*x956)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x957 = -167;
	uint8_t x958 = 63U;
	uint16_t x959 = UINT16_MAX;
	static int16_t x960 = INT16_MIN;

    t170 = (x957!=(x958/(x959*x960)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x961 = 530U;
	volatile int16_t x962 = 305;
	int8_t x964 = 1;

    t171 = (x961!=(x962/(x963*x964)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x973 = INT32_MIN;
	static uint64_t x974 = 118800LLU;
	static int32_t x975 = -132;
	int8_t x976 = INT8_MAX;
	int32_t t172 = -169699;

    t172 = (x973!=(x974/(x975*x976)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x977 = -1;
	int16_t x978 = 2;
	uint16_t x979 = 3U;
	volatile int32_t t173 = -18510;

    t173 = (x977!=(x978/(x979*x980)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x985 = UINT8_MAX;
	int64_t x986 = INT64_MIN;
	volatile int32_t x987 = -1;
	int16_t x988 = -28;
	static int32_t t174 = -2;

    t174 = (x985!=(x986/(x987*x988)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x994 = INT8_MAX;
	static uint16_t x995 = UINT16_MAX;
	static uint32_t x996 = 462110139U;
	static int32_t t175 = 208209619;

    t175 = (x993!=(x994/(x995*x996)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1001 = INT64_MIN;
	uint8_t x1002 = UINT8_MAX;
	static uint16_t x1004 = UINT16_MAX;
	volatile int32_t t176 = 87826;

    t176 = (x1001!=(x1002/(x1003*x1004)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1005 = UINT16_MAX;
	int8_t x1006 = INT8_MIN;
	int32_t t177 = 14546;

    t177 = (x1005!=(x1006/(x1007*x1008)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1009 = 1466589LLU;
	volatile int8_t x1010 = -1;
	static volatile uint8_t x1012 = 23U;
	volatile int32_t t178 = -2;

    t178 = (x1009!=(x1010/(x1011*x1012)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1013 = -1LL;
	int16_t x1014 = INT16_MAX;
	int8_t x1015 = INT8_MAX;
	int32_t t179 = 3316;

    t179 = (x1013!=(x1014/(x1015*x1016)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1017 = -37;
	static int64_t x1018 = INT64_MIN;
	int16_t x1019 = -1;
	volatile uint64_t x1020 = UINT64_MAX;
	int32_t t180 = -18;

    t180 = (x1017!=(x1018/(x1019*x1020)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x1021 = 120796648912931567LLU;
	uint64_t x1022 = 16LLU;
	int16_t x1024 = INT16_MIN;
	static volatile int32_t t181 = 8378;

    t181 = (x1021!=(x1022/(x1023*x1024)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1025 = 1802709U;
	int64_t x1026 = 50311575LL;
	volatile int64_t x1027 = INT64_MIN;
	static uint8_t x1028 = 1U;
	volatile int32_t t182 = 1564;

    t182 = (x1025!=(x1026/(x1027*x1028)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x1029 = UINT32_MAX;
	int64_t x1030 = 157255769048947LL;
	uint32_t x1031 = 3867652U;

    t183 = (x1029!=(x1030/(x1031*x1032)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1043 = INT8_MAX;
	int64_t x1044 = -3321317879859LL;

    t184 = (x1041!=(x1042/(x1043*x1044)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1054 = 16U;
	int64_t x1056 = -1LL;
	volatile int32_t t185 = -4;

    t185 = (x1053!=(x1054/(x1055*x1056)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x1057 = 13417U;
	int16_t x1060 = INT16_MAX;
	int32_t t186 = 13976609;

    t186 = (x1057!=(x1058/(x1059*x1060)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1061 = INT32_MIN;
	volatile int8_t x1062 = -9;
	int64_t x1063 = 102631776776LL;
	int8_t x1064 = -1;
	int32_t t187 = -4440046;

    t187 = (x1061!=(x1062/(x1063*x1064)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1069 = -1;
	static uint64_t x1070 = 526346532LLU;
	uint8_t x1072 = 36U;
	volatile int32_t t188 = 0;

    t188 = (x1069!=(x1070/(x1071*x1072)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x1077 = 10264119LL;
	int32_t x1078 = -1;
	static int32_t x1079 = INT32_MAX;
	int16_t x1080 = -1;

    t189 = (x1077!=(x1078/(x1079*x1080)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1085 = INT8_MAX;
	int16_t x1086 = -1;
	volatile int8_t x1087 = INT8_MAX;
	int16_t x1088 = INT16_MIN;
	volatile int32_t t190 = -17898413;

    t190 = (x1085!=(x1086/(x1087*x1088)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1089 = INT32_MAX;
	uint64_t x1090 = 198LLU;
	volatile uint32_t x1091 = 61U;
	int8_t x1092 = INT8_MAX;
	int32_t t191 = -1053;

    t191 = (x1089!=(x1090/(x1091*x1092)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x1093 = 149;
	uint64_t x1094 = 237158509LLU;
	static int64_t x1095 = 5773LL;
	static uint32_t x1096 = 135U;

    t192 = (x1093!=(x1094/(x1095*x1096)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1113 = INT16_MIN;
	int32_t x1114 = INT32_MIN;
	static uint32_t x1115 = UINT32_MAX;
	static volatile int32_t t193 = 746;

    t193 = (x1113!=(x1114/(x1115*x1116)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1117 = -27;
	int64_t x1118 = -945774LL;
	uint32_t x1119 = UINT32_MAX;
	static int64_t x1120 = -1LL;

    t194 = (x1117!=(x1118/(x1119*x1120)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint32_t x1121 = UINT32_MAX;
	static uint64_t x1122 = 0LLU;
	int64_t x1123 = INT64_MAX;
	int32_t t195 = 403639028;

    t195 = (x1121!=(x1122/(x1123*x1124)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x1133 = 12517087569775601LL;
	uint16_t x1134 = 69U;
	int8_t x1135 = INT8_MAX;
	int32_t t196 = 558788;

    t196 = (x1133!=(x1134/(x1135*x1136)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1145 = -1;
	int8_t x1146 = INT8_MIN;
	uint8_t x1147 = UINT8_MAX;
	int16_t x1148 = -1;
	int32_t t197 = 3424939;

    t197 = (x1145!=(x1146/(x1147*x1148)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x1150 = UINT8_MAX;
	uint16_t x1151 = 11U;
	int32_t x1152 = -5479188;

    t198 = (x1149!=(x1150/(x1151*x1152)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x1154 = 753621LL;
	static uint32_t x1155 = 42968U;
	int8_t x1156 = INT8_MAX;
	volatile int32_t t199 = -89;

    t199 = (x1153!=(x1154/(x1155*x1156)));

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

