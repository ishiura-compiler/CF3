
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

uint8_t x2 = UINT8_MAX;
int16_t x3 = -2226;
int16_t x10 = 57;
static int64_t x11 = INT64_MIN;
uint8_t x12 = 116U;
static uint8_t x18 = 37U;
int64_t x19 = INT64_MAX;
uint16_t x25 = 15U;
int32_t t5 = 1647;
volatile int16_t x32 = INT16_MIN;
int8_t x33 = INT8_MIN;
uint8_t x49 = UINT8_MAX;
int16_t x50 = -9003;
volatile int8_t x51 = 0;
int32_t t10 = 189128476;
uint16_t x58 = UINT16_MAX;
uint32_t x67 = UINT32_MAX;
uint64_t x74 = 420184LLU;
int8_t x77 = INT8_MAX;
uint64_t x94 = 32417286257664LLU;
uint16_t x95 = 164U;
int64_t x99 = -2LL;
int32_t t19 = -89;
int16_t x111 = 2;
static int64_t t20 = 5980759LL;
int64_t x114 = 346LL;
int16_t x126 = -1;
int8_t x133 = -1;
volatile int16_t x134 = INT16_MIN;
static uint8_t x135 = 65U;
int32_t x156 = INT32_MAX;
int32_t x167 = INT32_MAX;
uint32_t t26 = 52U;
static int8_t x173 = -1;
volatile uint16_t x174 = UINT16_MAX;
volatile uint64_t t28 = 112196965689035LLU;
volatile uint32_t x187 = 2238U;
int32_t x189 = 9;
uint64_t x194 = 278073LLU;
int32_t x196 = 181484;
volatile int8_t x200 = 25;
volatile int64_t x208 = -1LL;
volatile int64_t t35 = 3404LL;
int16_t x209 = INT16_MIN;
int16_t x210 = -1;
uint64_t t37 = 300LLU;
static uint64_t x218 = 123LLU;
static volatile int64_t x224 = INT64_MIN;
int16_t x228 = INT16_MIN;
int16_t x244 = INT16_MIN;
uint64_t t42 = 17410LLU;
volatile int16_t x250 = INT16_MIN;
int16_t x256 = INT16_MIN;
volatile int8_t x258 = -1;
uint32_t x260 = UINT32_MAX;
static volatile uint32_t t45 = 2918951U;
uint64_t x261 = UINT64_MAX;
int32_t x262 = INT32_MAX;
static int64_t x263 = -3LL;
int8_t x264 = -1;
uint64_t x275 = 32079999853549LLU;
int64_t x276 = INT64_MIN;
int32_t x279 = 0;
int32_t x282 = 0;
volatile int64_t t52 = 27259173202210942LL;
int16_t x294 = -1;
static uint16_t x296 = 13U;
volatile uint32_t t53 = 712107U;
uint16_t x309 = 25543U;
int16_t x310 = INT16_MIN;
int64_t x326 = 16LL;
int64_t x327 = -1LL;
static volatile int64_t t58 = 7LL;
int64_t x332 = 2569201414084488LL;
static int16_t x336 = 463;
volatile int64_t x344 = 2443228640LL;
int32_t x346 = -88913069;
volatile uint64_t t63 = 443707865973963880LLU;
uint32_t x352 = 1U;
volatile uint32_t t64 = 11298U;
int16_t x356 = INT16_MIN;
int8_t x366 = 31;
volatile int64_t t68 = 1LL;
volatile uint64_t t69 = 217LLU;
static int16_t x375 = -1;
int16_t x378 = -1;
static volatile int32_t t72 = -7774;
int16_t x389 = INT16_MIN;
volatile uint8_t x395 = 7U;
int16_t x396 = INT16_MIN;
static volatile int64_t t75 = 470LL;
int16_t x401 = INT16_MIN;
volatile uint64_t t76 = 25849359922892LLU;
static int32_t x415 = INT32_MIN;
uint64_t x416 = UINT64_MAX;
uint64_t t77 = 1LLU;
int8_t x419 = 14;
static volatile int8_t x423 = INT8_MIN;
int64_t x426 = INT64_MAX;
int8_t x439 = 48;
volatile int32_t t82 = 388415;
int32_t x452 = INT32_MIN;
static int32_t x471 = INT32_MAX;
uint32_t t88 = 1831731U;
uint32_t t89 = 199634U;
int16_t x489 = -1;
volatile int64_t t91 = 74281609091789LL;
uint32_t x506 = 14635511U;
uint16_t x508 = 117U;
int64_t x524 = INT64_MAX;
uint64_t x526 = 196121732973563LLU;
volatile int16_t x527 = -22;
static volatile int16_t x531 = 0;
uint64_t t97 = 139295LLU;
uint32_t x536 = 1047139347U;
static int64_t x543 = INT64_MIN;
volatile int64_t t99 = -1056498024LL;
static uint32_t x547 = 8208156U;
int16_t x555 = -1;
static volatile int32_t x556 = INT32_MIN;
volatile uint64_t t102 = 7129915939976LLU;
int16_t x573 = 0;
volatile uint32_t x578 = UINT32_MAX;
uint32_t t105 = 4U;
static int16_t x582 = -1;
volatile int64_t x583 = -1LL;
uint16_t x588 = UINT16_MAX;
volatile int32_t x592 = -1;
static uint16_t x596 = UINT16_MAX;
int8_t x599 = INT8_MIN;
volatile uint32_t x600 = UINT32_MAX;
int32_t x610 = 866961;
static volatile uint64_t t112 = 2559437LLU;
static int8_t x616 = -1;
int16_t x621 = -1;
uint16_t x628 = 1984U;
static uint16_t x635 = UINT16_MAX;
int8_t x636 = INT8_MIN;
volatile uint8_t x640 = 18U;
int16_t x655 = -238;
int32_t x659 = -3;
int32_t x663 = INT32_MIN;
volatile uint64_t t123 = 0LLU;
int32_t x667 = INT32_MIN;
static uint32_t x668 = UINT32_MAX;
volatile uint64_t x671 = 220247035327392514LLU;
int16_t x677 = -2715;
uint8_t x679 = UINT8_MAX;
volatile uint64_t t127 = 1379398LLU;
static volatile uint64_t t129 = 95632968632LLU;
static int8_t x697 = INT8_MAX;
volatile int8_t x701 = INT8_MIN;
uint16_t x703 = 951U;
static int64_t t131 = 880325LL;
static int64_t x706 = -1LL;
volatile uint8_t x713 = UINT8_MAX;
int8_t x715 = INT8_MAX;
uint64_t x723 = 162862120LLU;
static int8_t x756 = -1;
int32_t t139 = 1953846;
int16_t x774 = INT16_MAX;
int64_t x783 = -1562290134118819464LL;
uint32_t x789 = 51836395U;
static int64_t x793 = -644LL;
volatile int64_t t145 = 2392001127964199948LL;
volatile uint64_t t146 = 115222291808448884LLU;
static uint64_t x807 = UINT64_MAX;
volatile uint64_t t147 = 39363LLU;
uint8_t x828 = 41U;
static int8_t x831 = -21;
int8_t x849 = INT8_MIN;
static int8_t x850 = INT8_MIN;
int8_t x861 = INT8_MAX;
uint64_t x862 = 24388135289600LLU;
int32_t x867 = INT32_MIN;
static volatile int64_t x881 = 30092569144LL;
volatile int16_t x888 = INT16_MAX;
int8_t x909 = -1;
int8_t x917 = -23;
uint32_t x919 = 144U;
static volatile uint32_t t167 = 10U;
uint64_t x921 = UINT64_MAX;
uint8_t x937 = UINT8_MAX;
uint8_t x940 = UINT8_MAX;
int64_t x945 = -1LL;
int32_t x991 = INT32_MIN;
volatile uint8_t x1010 = 0U;
volatile uint64_t x1011 = 61477552106LLU;
static volatile int64_t t181 = 11169LL;
int16_t x1027 = 0;
int16_t x1029 = -1;
uint16_t x1035 = UINT16_MAX;
volatile int64_t t185 = -127031304217LL;
volatile uint64_t t186 = 143LLU;
int32_t x1045 = 2;
int8_t x1047 = INT8_MIN;
int64_t t188 = -25752245LL;
uint8_t x1061 = UINT8_MAX;
volatile uint64_t t191 = 7029067774025285387LLU;
volatile uint16_t x1068 = 20U;
int32_t x1072 = INT32_MIN;
uint8_t x1085 = UINT8_MAX;
int64_t x1091 = 1840832004718LL;
uint64_t x1094 = 147843086LLU;


void f0(void) {
    	static int64_t x1 = -1LL;
	volatile int64_t x4 = -145689LL;
	static int64_t t0 = -2479778648143LL;

    t0 = ((x1*x2)-(x3%x4));

    if (t0 != 1971LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int8_t x6 = 2;
	int32_t x7 = 414;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 6430U;

    t1 = ((x5*x6)-(x7%x8));

    if (t1 != 4294966626U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 2U;
	int64_t t2 = 30549800227446LL;

    t2 = ((x9*x10)-(x11%x12));

    if (t2 != 126LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = 7164;
	int16_t x14 = 1573;
	int32_t x15 = INT32_MAX;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -110041559;

    t3 = ((x13*x14)-(x15%x16));

    if (t3 != 11236205) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MIN;
	int8_t x20 = INT8_MIN;
	static volatile int64_t t4 = -8020228006LL;

    t4 = ((x17*x18)-(x19%x20));

    if (t4 != -1212543LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x26 = INT8_MIN;
	volatile int16_t x27 = INT16_MIN;
	static int16_t x28 = INT16_MIN;

    t5 = ((x25*x26)-(x27%x28));

    if (t5 != -1920) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = -1;
	static uint32_t x30 = 268366U;
	uint8_t x31 = 15U;
	uint32_t t6 = 2040197U;

    t6 = ((x29*x30)-(x31%x32));

    if (t6 != 4294698915U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x34 = UINT64_MAX;
	volatile int64_t x35 = 5912202804LL;
	volatile uint32_t x36 = 808960794U;
	volatile uint64_t t7 = 185404002232026LLU;

    t7 = ((x33*x34)-(x35%x36));

    if (t7 != 18446744073460074498LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x37 = INT32_MIN;
	static uint16_t x38 = 0U;
	uint16_t x39 = 1U;
	uint8_t x40 = 39U;
	static int32_t t8 = 31;

    t8 = ((x37*x38)-(x39%x40));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x52 = -5689;
	int32_t t9 = 0;

    t9 = ((x49*x50)-(x51%x52));

    if (t9 != -2295765) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x53 = 237U;
	int16_t x54 = -1;
	uint8_t x55 = UINT8_MAX;
	uint16_t x56 = UINT16_MAX;

    t10 = ((x53*x54)-(x55%x56));

    if (t10 != -492) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x57 = -20;
	int32_t x59 = INT32_MIN;
	int64_t x60 = 122234260085424LL;
	volatile int64_t t11 = -126074632449369LL;

    t11 = ((x57*x58)-(x59%x60));

    if (t11 != 2146172948LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x65 = 3141757LLU;
	int16_t x66 = -251;
	int64_t x68 = INT64_MIN;
	volatile uint64_t t12 = 34847692359696LLU;

    t12 = ((x65*x66)-(x67%x68));

    if (t12 != 18446744068626003314LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x73 = INT64_MIN;
	volatile uint8_t x75 = UINT8_MAX;
	static int64_t x76 = INT64_MAX;
	static uint64_t t13 = 135LLU;

    t13 = ((x73*x74)-(x75%x76));

    if (t13 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x78 = INT16_MIN;
	uint8_t x79 = 124U;
	int8_t x80 = INT8_MIN;
	volatile int32_t t14 = -343489134;

    t14 = ((x77*x78)-(x79%x80));

    if (t14 != -4161660) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x81 = -2;
	uint8_t x82 = UINT8_MAX;
	int8_t x83 = INT8_MIN;
	uint8_t x84 = 97U;
	int32_t t15 = -30929178;

    t15 = ((x81*x82)-(x83%x84));

    if (t15 != -479) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x89 = -9407;
	uint8_t x90 = 4U;
	static volatile int64_t x91 = 514630734LL;
	uint16_t x92 = 7038U;
	static volatile int64_t t16 = -295454575331233LL;

    t16 = ((x89*x90)-(x91%x92));

    if (t16 != -42764LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x93 = -5;
	int16_t x96 = INT16_MIN;
	static uint64_t t17 = 296869278858925473LLU;

    t17 = ((x93*x94)-(x95%x96));

    if (t17 != 18446581987278263132LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x97 = -1;
	uint32_t x98 = 31579U;
	static volatile uint16_t x100 = 1U;
	static int64_t t18 = 29549408256571LL;

    t18 = ((x97*x98)-(x99%x100));

    if (t18 != 4294935717LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x101 = 3156;
	int16_t x102 = -1;
	int32_t x103 = INT32_MIN;
	static int16_t x104 = INT16_MIN;

    t19 = ((x101*x102)-(x103%x104));

    if (t19 != -3156) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x109 = 1U;
	int8_t x110 = INT8_MAX;
	static int64_t x112 = -1LL;

    t20 = ((x109*x110)-(x111%x112));

    if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x113 = 509303215;
	uint64_t x115 = 3LLU;
	int8_t x116 = -1;
	uint64_t t21 = 5LLU;

    t21 = ((x113*x114)-(x115%x116));

    if (t21 != 176218912387LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x117 = INT16_MIN;
	static uint16_t x118 = 123U;
	int64_t x119 = INT64_MIN;
	volatile int64_t x120 = INT64_MIN;
	volatile int64_t t22 = -30515LL;

    t22 = ((x117*x118)-(x119%x120));

    if (t22 != -4030464LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x125 = 2U;
	static int16_t x127 = INT16_MAX;
	int64_t x128 = INT64_MIN;
	int64_t t23 = 535554299LL;

    t23 = ((x125*x126)-(x127%x128));

    if (t23 != -32769LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x136 = INT32_MIN;
	volatile int32_t t24 = 1869;

    t24 = ((x133*x134)-(x135%x136));

    if (t24 != 32703) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x153 = INT16_MAX;
	static volatile int16_t x154 = INT16_MAX;
	volatile int64_t x155 = INT64_MAX;
	static int64_t t25 = 39221LL;

    t25 = ((x153*x154)-(x155%x156));

    if (t25 != 1073676288LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x165 = UINT32_MAX;
	uint16_t x166 = 7126U;
	static uint32_t x168 = UINT32_MAX;

    t26 = ((x165*x166)-(x167%x168));

    if (t26 != 2147476523U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x175 = 30680U;
	int16_t x176 = INT16_MIN;
	volatile int32_t t27 = -39675192;

    t27 = ((x173*x174)-(x175%x176));

    if (t27 != -96215) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x177 = 0;
	uint64_t x178 = 6245LLU;
	uint8_t x179 = 8U;
	int16_t x180 = INT16_MIN;

    t28 = ((x177*x178)-(x179%x180));

    if (t28 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x181 = 237U;
	static int16_t x182 = -1;
	int32_t x183 = INT32_MAX;
	static volatile int32_t x184 = INT32_MAX;
	static volatile int32_t t29 = -1;

    t29 = ((x181*x182)-(x183%x184));

    if (t29 != -237) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x185 = -1;
	uint32_t x186 = 12U;
	int8_t x188 = INT8_MAX;
	volatile uint32_t t30 = 498728831U;

    t30 = ((x185*x186)-(x187%x188));

    if (t30 != 4294967205U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x190 = 6793U;
	uint32_t x191 = 110481138U;
	static int64_t x192 = INT64_MIN;
	volatile int64_t t31 = 74305891LL;

    t31 = ((x189*x190)-(x191%x192));

    if (t31 != -110420001LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x193 = UINT64_MAX;
	uint16_t x195 = UINT16_MAX;
	volatile uint64_t t32 = 11LLU;

    t32 = ((x193*x194)-(x195%x196));

    if (t32 != 18446744073709208008LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x197 = -1;
	int8_t x198 = INT8_MIN;
	uint32_t x199 = 3191560U;
	uint32_t t33 = 1238245U;

    t33 = ((x197*x198)-(x199%x200));

    if (t33 != 118U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x201 = 4U;
	int8_t x202 = -1;
	uint32_t x203 = 81U;
	int32_t x204 = -1;
	volatile uint32_t t34 = 1521881460U;

    t34 = ((x201*x202)-(x203%x204));

    if (t34 != 4294967211U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	int8_t x207 = -1;

    t35 = ((x205*x206)-(x207%x208));

    if (t35 != -65535LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x211 = INT64_MIN;
	uint16_t x212 = 752U;
	volatile int64_t t36 = -36411465146691LL;

    t36 = ((x209*x210)-(x211%x212));

    if (t36 != 32992LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x213 = 345U;
	uint64_t x214 = 27333192LLU;
	uint16_t x215 = UINT16_MAX;
	uint32_t x216 = 1468U;

    t37 = ((x213*x214)-(x215%x216));

    if (t37 != 9429950297LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x217 = -1;
	volatile uint64_t x219 = 32518731970167LLU;
	int32_t x220 = INT32_MAX;
	static volatile uint64_t t38 = 68320891306795LLU;

    t38 = ((x217*x218)-(x219%x220));

    if (t38 != 18446744072174964200LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x221 = -1;
	int8_t x222 = INT8_MAX;
	uint32_t x223 = 37717717U;
	int64_t t39 = 19434982137863510LL;

    t39 = ((x221*x222)-(x223%x224));

    if (t39 != -37717844LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x225 = INT32_MIN;
	uint32_t x226 = 11421U;
	int32_t x227 = -1;
	volatile uint32_t t40 = 1884U;

    t40 = ((x225*x226)-(x227%x228));

    if (t40 != 2147483649U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MIN;
	static volatile uint16_t x235 = 375U;
	static int16_t x236 = -39;
	volatile int32_t t41 = 5741;

    t41 = ((x233*x234)-(x235%x236));

    if (t41 != 4194280) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x241 = 7576473518LLU;
	int16_t x242 = 0;
	int32_t x243 = -3;

    t42 = ((x241*x242)-(x243%x244));

    if (t42 != 3LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x249 = -1LL;
	int64_t x251 = -1LL;
	int64_t x252 = 89547249043555LL;
	volatile int64_t t43 = -242550513716LL;

    t43 = ((x249*x250)-(x251%x252));

    if (t43 != 32769LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x253 = 13267U;
	uint64_t x254 = UINT64_MAX;
	int16_t x255 = -11;
	uint64_t t44 = 20354LLU;

    t44 = ((x253*x254)-(x255%x256));

    if (t44 != 18446744073709538360LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x257 = UINT32_MAX;
	int16_t x259 = -1;

    t45 = ((x257*x258)-(x259%x260));

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t t46 = 5191306836357546LLU;

    t46 = ((x261*x262)-(x263%x264));

    if (t46 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	uint16_t x267 = 0U;
	volatile int32_t x268 = 3689725;
	uint32_t t47 = 212U;

    t47 = ((x265*x266)-(x267%x268));

    if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x269 = -1LL;
	int8_t x270 = 27;
	volatile int64_t x271 = -736482206182399733LL;
	int32_t x272 = -182;
	volatile int64_t t48 = -225LL;

    t48 = ((x269*x270)-(x271%x272));

    if (t48 != 120LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x273 = 0U;
	int16_t x274 = -54;
	uint64_t t49 = 791905305080LLU;

    t49 = ((x273*x274)-(x275%x276));

    if (t49 != 18446711993709698067LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x277 = 122U;
	int8_t x278 = -4;
	int8_t x280 = -1;
	volatile int32_t t50 = 6664449;

    t50 = ((x277*x278)-(x279%x280));

    if (t50 != -488) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x281 = UINT32_MAX;
	int32_t x283 = INT32_MIN;
	uint16_t x284 = 84U;
	volatile uint32_t t51 = 118903474U;

    t51 = ((x281*x282)-(x283%x284));

    if (t51 != 44U) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x289 = -1;
	static volatile int16_t x290 = -1;
	int64_t x291 = -1LL;
	int16_t x292 = 8;

    t52 = ((x289*x290)-(x291%x292));

    if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x293 = UINT32_MAX;
	uint32_t x295 = UINT32_MAX;

    t53 = ((x293*x294)-(x295%x296));

    if (t53 != 4294967289U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x297 = -1;
	static volatile uint8_t x298 = UINT8_MAX;
	int64_t x299 = INT64_MIN;
	static uint32_t x300 = 89246U;
	volatile int64_t t54 = 14978207389LL;

    t54 = ((x297*x298)-(x299%x300));

    if (t54 != 39583LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x301 = INT8_MAX;
	int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MAX;
	volatile int16_t x304 = -1;
	volatile int32_t t55 = -13;

    t55 = ((x301*x302)-(x303%x304));

    if (t55 != -4161536) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x305 = -1;
	static volatile int32_t x306 = -22562610;
	uint16_t x307 = UINT16_MAX;
	int64_t x308 = INT64_MIN;
	static volatile int64_t t56 = -34735662091160358LL;

    t56 = ((x305*x306)-(x307%x308));

    if (t56 != 22497075LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x311 = INT64_MAX;
	volatile uint16_t x312 = 438U;
	volatile int64_t t57 = 915743557717LL;

    t57 = ((x309*x310)-(x311%x312));

    if (t57 != -836993097LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x325 = INT32_MIN;
	int8_t x328 = INT8_MIN;

    t58 = ((x325*x326)-(x327%x328));

    if (t58 != -34359738367LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x329 = 16105330835380LLU;
	int8_t x330 = INT8_MIN;
	uint8_t x331 = UINT8_MAX;
	volatile uint64_t t59 = 172LLU;

    t59 = ((x329*x330)-(x331%x332));

    if (t59 != 18444682591362622721LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x333 = INT8_MIN;
	static int8_t x334 = 1;
	static int8_t x335 = -1;
	volatile int32_t t60 = -4;

    t60 = ((x333*x334)-(x335%x336));

    if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x337 = 35;
	uint8_t x338 = 11U;
	int8_t x339 = 53;
	uint8_t x340 = 32U;
	static volatile int32_t t61 = 3;

    t61 = ((x337*x338)-(x339%x340));

    if (t61 != 364) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x341 = -7;
	uint8_t x342 = 6U;
	uint16_t x343 = UINT16_MAX;
	int64_t t62 = 1483040053LL;

    t62 = ((x341*x342)-(x343%x344));

    if (t62 != -65577LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x345 = UINT64_MAX;
	int32_t x347 = 98335372;
	uint8_t x348 = UINT8_MAX;

    t63 = ((x345*x346)-(x347%x348));

    if (t63 != 88912837LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x349 = -1;
	int8_t x350 = INT8_MIN;
	int8_t x351 = 21;

    t64 = ((x349*x350)-(x351%x352));

    if (t64 != 128U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x353 = 173754U;
	int8_t x354 = -2;
	uint64_t x355 = 7126264086LLU;
	volatile uint64_t t65 = 28987235519LLU;

    t65 = ((x353*x354)-(x355%x356));

    if (t65 != 18446744070877907318LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x357 = INT8_MAX;
	int8_t x358 = -1;
	int32_t x359 = INT32_MAX;
	int64_t x360 = INT64_MIN;
	volatile int64_t t66 = -306401901318LL;

    t66 = ((x357*x358)-(x359%x360));

    if (t66 != -2147483774LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x361 = INT8_MIN;
	volatile uint64_t x362 = 778077491LLU;
	int64_t x363 = INT64_MIN;
	static int16_t x364 = INT16_MIN;
	uint64_t t67 = 11457420191LLU;

    t67 = ((x361*x362)-(x363%x364));

    if (t67 != 18446743974115632768LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x365 = UINT16_MAX;
	static int64_t x367 = INT64_MAX;
	int8_t x368 = INT8_MIN;

    t68 = ((x365*x366)-(x367%x368));

    if (t68 != 2031458LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x369 = 1398U;
	volatile int32_t x370 = 10;
	int16_t x371 = -47;
	static uint64_t x372 = 27091957678293939LLU;

    t69 = ((x369*x370)-(x371%x372));

    if (t69 != 18422531221239892547LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x373 = -13;
	uint64_t x374 = UINT64_MAX;
	int16_t x376 = 5;
	volatile uint64_t t70 = 95759213158661LLU;

    t70 = ((x373*x374)-(x375%x376));

    if (t70 != 14LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x377 = 320U;
	static int32_t x379 = INT32_MIN;
	static volatile uint32_t x380 = UINT32_MAX;
	static uint32_t t71 = 0U;

    t71 = ((x377*x378)-(x379%x380));

    if (t71 != 2147483328U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x385 = INT8_MIN;
	int8_t x386 = 50;
	static int32_t x387 = 138;
	static uint16_t x388 = 3U;

    t72 = ((x385*x386)-(x387%x388));

    if (t72 != -6400) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x390 = 30U;
	static int8_t x391 = 6;
	int8_t x392 = INT8_MIN;
	volatile int32_t t73 = -174219;

    t73 = ((x389*x390)-(x391%x392));

    if (t73 != -983046) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x393 = INT8_MIN;
	static uint16_t x394 = 16087U;
	int32_t t74 = -210834;

    t74 = ((x393*x394)-(x395%x396));

    if (t74 != -2059143) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x397 = 7574LL;
	volatile int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MIN;
	volatile int16_t x400 = INT16_MIN;

    t75 = ((x397*x398)-(x399%x400));

    if (t75 != -248184704LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x402 = UINT64_MAX;
	int16_t x403 = 4585;
	int8_t x404 = INT8_MIN;

    t76 = ((x401*x402)-(x403%x404));

    if (t76 != 32663LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x413 = 0U;
	uint8_t x414 = UINT8_MAX;

    t77 = ((x413*x414)-(x415%x416));

    if (t77 != 2147483648LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x417 = 5U;
	uint32_t x418 = 16956U;
	uint8_t x420 = 12U;
	uint32_t t78 = 1513477U;

    t78 = ((x417*x418)-(x419%x420));

    if (t78 != 84778U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x421 = -126;
	volatile int32_t x422 = -61;
	static volatile int32_t x424 = INT32_MIN;
	int32_t t79 = 12835;

    t79 = ((x421*x422)-(x423%x424));

    if (t79 != 7814) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x425 = -1;
	volatile uint64_t x427 = 4766750965779067654LLU;
	int16_t x428 = INT16_MIN;
	static uint64_t t80 = 56198268LLU;

    t80 = ((x425*x426)-(x427%x428));

    if (t80 != 4456621071075708155LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x437 = 356095610LLU;
	int8_t x438 = INT8_MIN;
	static uint32_t x440 = 7856450U;
	uint64_t t81 = 66395908LLU;

    t81 = ((x437*x438)-(x439%x440));

    if (t81 != 18446744028129313488LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x441 = INT16_MAX;
	int8_t x442 = INT8_MAX;
	uint8_t x443 = 100U;
	uint8_t x444 = 21U;

    t82 = ((x441*x442)-(x443%x444));

    if (t82 != 4161393) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x449 = INT32_MIN;
	int16_t x450 = 0;
	static uint32_t x451 = 2U;
	volatile uint32_t t83 = 18413985U;

    t83 = ((x449*x450)-(x451%x452));

    if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x457 = -1;
	uint16_t x458 = UINT16_MAX;
	int64_t x459 = INT64_MIN;
	uint8_t x460 = UINT8_MAX;
	static int64_t t84 = -9318287LL;

    t84 = ((x457*x458)-(x459%x460));

    if (t84 != -65407LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x461 = INT8_MIN;
	static int8_t x462 = INT8_MAX;
	int32_t x463 = -1;
	uint64_t x464 = 12LLU;
	uint64_t t85 = 48111924308158274LLU;

    t85 = ((x461*x462)-(x463%x464));

    if (t85 != 18446744073709535357LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x465 = 360947645624331LLU;
	int32_t x466 = -2;
	static int64_t x467 = INT64_MIN;
	uint16_t x468 = UINT16_MAX;
	volatile uint64_t t86 = 215163500831102099LLU;

    t86 = ((x465*x466)-(x467%x468));

    if (t86 != 18446022178418335722LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x469 = UINT16_MAX;
	int8_t x470 = 9;
	int8_t x472 = -2;
	volatile int32_t t87 = 917947224;

    t87 = ((x469*x470)-(x471%x472));

    if (t87 != 589814) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x473 = INT32_MAX;
	int8_t x474 = -1;
	uint32_t x475 = 654U;
	volatile int8_t x476 = -1;

    t88 = ((x473*x474)-(x475%x476));

    if (t88 != 2147482995U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x477 = INT8_MAX;
	static uint32_t x478 = 130373U;
	int8_t x479 = -1;
	int32_t x480 = 1;

    t89 = ((x477*x478)-(x479%x480));

    if (t89 != 16557371U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x490 = 378;
	uint8_t x491 = UINT8_MAX;
	static int32_t x492 = INT32_MIN;
	volatile int32_t t90 = 228;

    t90 = ((x489*x490)-(x491%x492));

    if (t90 != -633) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x493 = 7LL;
	uint8_t x494 = 5U;
	int32_t x495 = 0;
	int32_t x496 = INT32_MIN;

    t91 = ((x493*x494)-(x495%x496));

    if (t91 != 35LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x497 = -3;
	uint8_t x498 = 91U;
	uint8_t x499 = UINT8_MAX;
	int16_t x500 = INT16_MAX;
	int32_t t92 = 13964;

    t92 = ((x497*x498)-(x499%x500));

    if (t92 != -528) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x505 = INT8_MIN;
	static int32_t x507 = -27590064;
	volatile uint32_t t93 = 210677U;

    t93 = ((x505*x506)-(x507%x508));

    if (t93 != 2421621948U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x509 = -1;
	uint16_t x510 = 31228U;
	static int64_t x511 = -1LL;
	int32_t x512 = 4939;
	int64_t t94 = -17493731550514LL;

    t94 = ((x509*x510)-(x511%x512));

    if (t94 != -31227LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x521 = -1277;
	uint64_t x522 = 9071099005912LLU;
	int8_t x523 = INT8_MIN;
	uint64_t t95 = 161290425088737LLU;

    t95 = ((x521*x522)-(x523%x524));

    if (t95 != 18435160280279002120LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x525 = UINT64_MAX;
	int64_t x528 = -19LL;
	volatile uint64_t t96 = 1478005LLU;

    t96 = ((x525*x526)-(x527%x528));

    if (t96 != 18446547951976578056LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x529 = INT16_MIN;
	uint32_t x530 = 1581U;
	uint64_t x532 = 2444847355547LLU;

    t97 = ((x529*x530)-(x531%x532));

    if (t97 != 4243161088LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x533 = INT8_MIN;
	uint32_t x534 = 32717066U;
	static int8_t x535 = INT8_MAX;
	volatile uint32_t t98 = 67534U;

    t98 = ((x533*x534)-(x535%x536));

    if (t98 != 107182721U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x541 = 10;
	uint16_t x542 = 504U;
	int32_t x544 = INT32_MIN;

    t99 = ((x541*x542)-(x543%x544));

    if (t99 != 5040LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x545 = UINT64_MAX;
	volatile int16_t x546 = -241;
	volatile int64_t x548 = INT64_MIN;
	volatile uint64_t t100 = 2729812LLU;

    t100 = ((x545*x546)-(x547%x548));

    if (t100 != 18446744073701343701LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x553 = -1;
	static uint16_t x554 = 2165U;
	int32_t t101 = -61369;

    t101 = ((x553*x554)-(x555%x556));

    if (t101 != -2164) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x561 = INT32_MIN;
	uint64_t x562 = UINT64_MAX;
	int32_t x563 = INT32_MIN;
	uint32_t x564 = 1U;

    t102 = ((x561*x562)-(x563%x564));

    if (t102 != 2147483648LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x565 = 104694161144309LLU;
	uint8_t x566 = UINT8_MAX;
	int8_t x567 = -1;
	int8_t x568 = INT8_MAX;
	volatile uint64_t t103 = 3640360064LLU;

    t103 = ((x565*x566)-(x567%x568));

    if (t103 != 26697011091798796LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x574 = 0U;
	static int64_t x575 = INT64_MIN;
	uint8_t x576 = 7U;
	static volatile int64_t t104 = -106026961744LL;

    t104 = ((x573*x574)-(x575%x576));

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x577 = INT32_MAX;
	int8_t x579 = INT8_MIN;
	static int8_t x580 = -2;

    t105 = ((x577*x578)-(x579%x580));

    if (t105 != 2147483649U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x581 = UINT32_MAX;
	volatile int16_t x584 = 23;
	int64_t t106 = -448117098LL;

    t106 = ((x581*x582)-(x583%x584));

    if (t106 != 2LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x585 = -305;
	static uint16_t x586 = UINT16_MAX;
	int32_t x587 = 28109785;
	volatile int32_t t107 = -204;

    t107 = ((x585*x586)-(x587%x588));

    if (t107 != -20048980) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x589 = -6;
	uint32_t x590 = 81076U;
	int32_t x591 = -12776359;
	static uint32_t t108 = 102U;

    t108 = ((x589*x590)-(x591%x592));

    if (t108 != 4294480840U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x593 = INT32_MIN;
	volatile uint64_t x594 = UINT64_MAX;
	int8_t x595 = -1;
	volatile uint64_t t109 = 23970965631354513LLU;

    t109 = ((x593*x594)-(x595%x596));

    if (t109 != 2147483649LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x597 = 6823LLU;
	int16_t x598 = -73;
	volatile uint64_t t110 = 586LLU;

    t110 = ((x597*x598)-(x599%x600));

    if (t110 != 18446744069414086369LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x605 = 1204;
	uint32_t x606 = 61U;
	int64_t x607 = 37908352858038LL;
	static int32_t x608 = INT32_MAX;
	int64_t t111 = 573LL;

    t111 = ((x605*x606)-(x607%x608));

    if (t111 != -971447750LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x609 = 124564LLU;
	int8_t x611 = INT8_MIN;
	int8_t x612 = INT8_MIN;

    t112 = ((x609*x610)-(x611%x612));

    if (t112 != 107992130004LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x613 = -2601841;
	int8_t x614 = INT8_MIN;
	int32_t x615 = -6788167;
	volatile int32_t t113 = -952;

    t113 = ((x613*x614)-(x615%x616));

    if (t113 != 333035648) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x622 = -28;
	volatile int32_t x623 = 3;
	int32_t x624 = -1;
	volatile int32_t t114 = 7252;

    t114 = ((x621*x622)-(x623%x624));

    if (t114 != 28) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x625 = 1U;
	uint16_t x626 = 9U;
	int32_t x627 = INT32_MIN;
	volatile int32_t t115 = 1;

    t115 = ((x625*x626)-(x627%x628));

    if (t115 != 73) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x629 = INT8_MAX;
	static int64_t x630 = -1LL;
	uint32_t x631 = 232U;
	uint64_t x632 = 35615627444473670LLU;
	uint64_t t116 = 62337041LLU;

    t116 = ((x629*x630)-(x631%x632));

    if (t116 != 18446744073709551257LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x633 = -1;
	int16_t x634 = -4555;
	int32_t t117 = -9872812;

    t117 = ((x633*x634)-(x635%x636));

    if (t117 != 4428) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x637 = INT16_MAX;
	int8_t x638 = INT8_MIN;
	uint64_t x639 = 874418509732292586LLU;
	uint64_t t118 = 9079254722211308LLU;

    t118 = ((x637*x638)-(x639%x640));

    if (t118 != 18446744073705357440LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x641 = -1;
	volatile int64_t x642 = INT64_MAX;
	int16_t x643 = INT16_MAX;
	static uint64_t x644 = 250047571056803LLU;
	volatile uint64_t t119 = 1451LLU;

    t119 = ((x641*x642)-(x643%x644));

    if (t119 != 9223372036854743042LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x649 = -2;
	static uint16_t x650 = 2747U;
	volatile uint32_t x651 = 10370U;
	static int16_t x652 = INT16_MAX;
	uint32_t t120 = 355673U;

    t120 = ((x649*x650)-(x651%x652));

    if (t120 != 4294951432U) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x653 = 99032256645606068LLU;
	static int16_t x654 = -1;
	int32_t x656 = 62859751;
	uint64_t t121 = 549517159LLU;

    t121 = ((x653*x654)-(x655%x656));

    if (t121 != 18347711817063945786LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x657 = INT16_MIN;
	int64_t x658 = 55373LL;
	volatile int16_t x660 = INT16_MIN;
	int64_t t122 = 19852705272369LL;

    t122 = ((x657*x658)-(x659%x660));

    if (t122 != -1814462461LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x661 = UINT32_MAX;
	int8_t x662 = -7;
	volatile uint64_t x664 = 61LLU;

    t123 = ((x661*x662)-(x663%x664));

    if (t123 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x665 = UINT32_MAX;
	static uint64_t x666 = 144LLU;
	volatile uint64_t t124 = 7373240190118267LLU;

    t124 = ((x665*x666)-(x667%x668));

    if (t124 != 616327806832LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x669 = 3426U;
	static int8_t x670 = INT8_MIN;
	volatile uint16_t x672 = UINT16_MAX;
	volatile uint64_t t125 = 587LLU;

    t125 = ((x669*x670)-(x671%x672));

    if (t125 != 18446744073709103079LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x673 = UINT64_MAX;
	static uint32_t x674 = 193U;
	int16_t x675 = INT16_MAX;
	volatile uint8_t x676 = UINT8_MAX;
	uint64_t t126 = 9LLU;

    t126 = ((x673*x674)-(x675%x676));

    if (t126 != 18446744073709551296LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x678 = 57390LLU;
	static int8_t x680 = -1;

    t127 = ((x677*x678)-(x679%x680));

    if (t127 != 18446744073553737766LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x689 = -1LL;
	volatile int8_t x690 = INT8_MIN;
	int64_t x691 = INT64_MIN;
	int32_t x692 = 17;
	static volatile int64_t t128 = -94024740350LL;

    t128 = ((x689*x690)-(x691%x692));

    if (t128 != 137LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x693 = INT8_MIN;
	uint64_t x694 = 2LLU;
	int64_t x695 = -1LL;
	uint32_t x696 = 26865U;

    t129 = ((x693*x694)-(x695%x696));

    if (t129 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x698 = 3282507872322664379LLU;
	int32_t x699 = INT32_MIN;
	int32_t x700 = -3;
	static volatile uint64_t t130 = 412173955412780940LLU;

    t130 = ((x697*x698)-(x699%x700));

    if (t130 != 11050130163368240583LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x702 = INT16_MAX;
	int64_t x704 = INT64_MIN;

    t131 = ((x701*x702)-(x703%x704));

    if (t131 != -4195127LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x705 = -3503615557LL;
	static uint16_t x707 = UINT16_MAX;
	volatile int16_t x708 = INT16_MIN;
	volatile int64_t t132 = -790LL;

    t132 = ((x705*x706)-(x707%x708));

    if (t132 != 3503582790LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x709 = 0;
	int16_t x710 = -1;
	static volatile int16_t x711 = INT16_MAX;
	uint64_t x712 = UINT64_MAX;
	static volatile uint64_t t133 = 4875800369625523LLU;

    t133 = ((x709*x710)-(x711%x712));

    if (t133 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x714 = 8147U;
	volatile int32_t x716 = 64401223;
	volatile int32_t t134 = -59;

    t134 = ((x713*x714)-(x715%x716));

    if (t134 != 2077358) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x721 = INT8_MIN;
	static uint32_t x722 = 33424889U;
	volatile uint8_t x724 = 49U;
	uint64_t t135 = 951LLU;

    t135 = ((x721*x722)-(x723%x724));

    if (t135 != 16581468LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x737 = INT32_MIN;
	static volatile uint32_t x738 = 96U;
	int8_t x739 = 5;
	volatile uint8_t x740 = UINT8_MAX;
	static uint32_t t136 = 73694442U;

    t136 = ((x737*x738)-(x739%x740));

    if (t136 != 4294967291U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x745 = INT64_MIN;
	uint32_t x746 = 0U;
	int64_t x747 = -26678784438786LL;
	int32_t x748 = -151556054;
	int64_t t137 = -1996222272LL;

    t137 = ((x745*x746)-(x747%x748));

    if (t137 != 69141058LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x749 = 1410LLU;
	int8_t x750 = 6;
	int64_t x751 = -1LL;
	int16_t x752 = INT16_MIN;
	uint64_t t138 = 268897170LLU;

    t138 = ((x749*x750)-(x751%x752));

    if (t138 != 8461LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x753 = 6U;
	volatile int8_t x754 = INT8_MIN;
	int32_t x755 = 9864;

    t139 = ((x753*x754)-(x755%x756));

    if (t139 != -768) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x757 = 1801878477LLU;
	static uint64_t x758 = UINT64_MAX;
	int16_t x759 = -1;
	uint32_t x760 = 3766430U;
	static uint64_t t140 = 964897LLU;

    t140 = ((x757*x758)-(x759%x760));

    if (t140 != 18446744071906436044LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x769 = UINT8_MAX;
	static uint64_t x770 = 5792LLU;
	volatile int64_t x771 = INT64_MAX;
	volatile uint16_t x772 = 5U;
	volatile uint64_t t141 = 13623LLU;

    t141 = ((x769*x770)-(x771%x772));

    if (t141 != 1476958LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x773 = UINT8_MAX;
	int32_t x775 = INT32_MIN;
	static volatile int8_t x776 = INT8_MIN;
	int32_t t142 = -245801315;

    t142 = ((x773*x774)-(x775%x776));

    if (t142 != 8355585) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x781 = -1LL;
	volatile int8_t x782 = -1;
	volatile int32_t x784 = -1;
	int64_t t143 = 275LL;

    t143 = ((x781*x782)-(x783%x784));

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x790 = -1LL;
	volatile uint8_t x791 = UINT8_MAX;
	int16_t x792 = -1;
	volatile int64_t t144 = 51808594274131LL;

    t144 = ((x789*x790)-(x791%x792));

    if (t144 != -51836395LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x794 = 186U;
	static volatile int16_t x795 = INT16_MIN;
	int16_t x796 = -1;

    t145 = ((x793*x794)-(x795%x796));

    if (t145 != -119784LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x797 = 2995801LLU;
	int32_t x798 = INT32_MAX;
	volatile int8_t x799 = 2;
	int64_t x800 = -120868LL;

    t146 = ((x797*x798)-(x799%x800));

    if (t146 != 6433433657166245LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x805 = UINT8_MAX;
	static uint64_t x806 = 32095466LLU;
	volatile uint32_t x808 = 1288233828U;

    t147 = ((x805*x806)-(x807%x808));

    if (t147 != 7522326459LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x809 = 210U;
	int32_t x810 = 23088;
	uint16_t x811 = 5U;
	uint16_t x812 = 25U;
	volatile int32_t t148 = -3;

    t148 = ((x809*x810)-(x811%x812));

    if (t148 != 4848475) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x813 = INT16_MIN;
	int8_t x814 = INT8_MIN;
	int32_t x815 = 3954;
	volatile int32_t x816 = -23807207;
	static volatile int32_t t149 = -77501909;

    t149 = ((x813*x814)-(x815%x816));

    if (t149 != 4190350) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x821 = -1;
	volatile int16_t x822 = 11651;
	volatile int64_t x823 = INT64_MIN;
	volatile uint32_t x824 = 1962U;
	int64_t t150 = -8LL;

    t150 = ((x821*x822)-(x823%x824));

    if (t150 != -10419LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x825 = UINT32_MAX;
	static int32_t x826 = 32;
	static int64_t x827 = 1068411888310LL;
	static volatile int64_t t151 = 19341LL;

    t151 = ((x825*x826)-(x827%x828));

    if (t151 != 4294967258LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x829 = 3LL;
	volatile int32_t x830 = -1;
	int32_t x832 = INT32_MAX;
	volatile int64_t t152 = 1951230792555926LL;

    t152 = ((x829*x830)-(x831%x832));

    if (t152 != 18LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x833 = -1LL;
	int8_t x834 = -1;
	int32_t x835 = -1;
	int8_t x836 = INT8_MAX;
	static volatile int64_t t153 = 2569933410431LL;

    t153 = ((x833*x834)-(x835%x836));

    if (t153 != 2LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x841 = UINT8_MAX;
	uint8_t x842 = 6U;
	static volatile int64_t x843 = -26736248939043LL;
	int32_t x844 = INT32_MAX;
	int64_t t154 = 0LL;

    t154 = ((x841*x842)-(x843%x844));

    if (t154 != 77535423LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x845 = INT16_MIN;
	uint32_t x846 = 6U;
	int32_t x847 = INT32_MIN;
	int16_t x848 = INT16_MIN;
	uint32_t t155 = 14U;

    t155 = ((x845*x846)-(x847%x848));

    if (t155 != 4294770688U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x851 = UINT32_MAX;
	volatile int32_t x852 = -15;
	static volatile uint32_t t156 = 2889335U;

    t156 = ((x849*x850)-(x851%x852));

    if (t156 != 16370U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x853 = INT8_MIN;
	int32_t x854 = 14338;
	volatile int32_t x855 = INT32_MIN;
	volatile uint16_t x856 = 2U;
	volatile int32_t t157 = 1;

    t157 = ((x853*x854)-(x855%x856));

    if (t157 != -1835264) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x857 = 2221LLU;
	volatile int32_t x858 = INT32_MIN;
	int32_t x859 = INT32_MIN;
	uint32_t x860 = 15479443U;
	uint64_t t158 = 262930LLU;

    t158 = ((x857*x858)-(x859%x860));

    if (t158 != 18446739304137048894LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x863 = 5256U;
	static volatile uint16_t x864 = UINT16_MAX;
	uint64_t t159 = 229LLU;

    t159 = ((x861*x862)-(x863%x864));

    if (t159 != 3097293181773944LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x865 = -1;
	uint8_t x866 = 13U;
	uint64_t x868 = 1LLU;
	volatile uint64_t t160 = 305751LLU;

    t160 = ((x865*x866)-(x867%x868));

    if (t160 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x877 = INT16_MIN;
	uint8_t x878 = UINT8_MAX;
	int64_t x879 = 373LL;
	int32_t x880 = INT32_MIN;
	volatile int64_t t161 = -1305LL;

    t161 = ((x877*x878)-(x879%x880));

    if (t161 != -8356213LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x882 = 1243U;
	volatile uint64_t x883 = 1928012583336784LLU;
	static uint32_t x884 = UINT32_MAX;
	static volatile uint64_t t162 = 1LLU;

    t162 = ((x881*x882)-(x883%x884));

    if (t162 != 37403298834708LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x885 = -1;
	static int16_t x886 = -1;
	static volatile uint8_t x887 = 6U;
	static int32_t t163 = -1070533810;

    t163 = ((x885*x886)-(x887%x888));

    if (t163 != -5) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x901 = -6;
	uint8_t x902 = 0U;
	int64_t x903 = -20365156485880074LL;
	uint8_t x904 = 39U;
	int64_t t164 = 6LL;

    t164 = ((x901*x902)-(x903%x904));

    if (t164 != 24LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x905 = 12;
	uint32_t x906 = 14782U;
	volatile int16_t x907 = -1;
	uint16_t x908 = 2204U;
	volatile uint32_t t165 = 266U;

    t165 = ((x905*x906)-(x907%x908));

    if (t165 != 177385U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x910 = INT8_MIN;
	static int32_t x911 = -1;
	int64_t x912 = INT64_MAX;
	static int64_t t166 = 1008829LL;

    t166 = ((x909*x910)-(x911%x912));

    if (t166 != 129LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x918 = 2U;
	static int32_t x920 = -1;

    t167 = ((x917*x918)-(x919%x920));

    if (t167 != 4294967106U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x922 = 8161901754772900LLU;
	int32_t x923 = 904;
	uint8_t x924 = 1U;
	uint64_t t168 = 1667LLU;

    t168 = ((x921*x922)-(x923%x924));

    if (t168 != 18438582171954778716LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x938 = -79LL;
	volatile int64_t x939 = INT64_MIN;
	static volatile int64_t t169 = -4440118719922748763LL;

    t169 = ((x937*x938)-(x939%x940));

    if (t169 != -20017LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x946 = -1LL;
	static int32_t x947 = INT32_MIN;
	volatile int64_t x948 = INT64_MAX;
	static int64_t t170 = 28076420361943757LL;

    t170 = ((x945*x946)-(x947%x948));

    if (t170 != 2147483649LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x961 = -122;
	volatile uint16_t x962 = 1U;
	int32_t x963 = INT32_MIN;
	int16_t x964 = 23;
	volatile int32_t t171 = 112293612;

    t171 = ((x961*x962)-(x963%x964));

    if (t171 != -116) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x965 = INT16_MAX;
	int32_t x966 = -1;
	static int32_t x967 = -1;
	int64_t x968 = -2344LL;
	volatile int64_t t172 = 1071813007346180701LL;

    t172 = ((x965*x966)-(x967%x968));

    if (t172 != -32766LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x969 = -1LL;
	int16_t x970 = 8;
	volatile uint16_t x971 = 111U;
	volatile uint8_t x972 = 28U;
	int64_t t173 = 748424LL;

    t173 = ((x969*x970)-(x971%x972));

    if (t173 != -35LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x973 = INT8_MAX;
	int32_t x974 = 1;
	int32_t x975 = -1677842;
	int32_t x976 = INT32_MAX;
	volatile int32_t t174 = -160193;

    t174 = ((x973*x974)-(x975%x976));

    if (t174 != 1677969) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x977 = -1;
	int64_t x978 = -1LL;
	uint32_t x979 = UINT32_MAX;
	int64_t x980 = -1LL;
	volatile int64_t t175 = -246216236593LL;

    t175 = ((x977*x978)-(x979%x980));

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x989 = -1LL;
	uint8_t x990 = 12U;
	int64_t x992 = -1LL;
	volatile int64_t t176 = 14210317711LL;

    t176 = ((x989*x990)-(x991%x992));

    if (t176 != -12LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x993 = 6U;
	uint32_t x994 = 84U;
	uint32_t x995 = 6U;
	int32_t x996 = -15163;
	uint32_t t177 = 27035010U;

    t177 = ((x993*x994)-(x995%x996));

    if (t177 != 498U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1001 = 8U;
	int8_t x1002 = -7;
	int16_t x1003 = INT16_MIN;
	volatile uint64_t x1004 = UINT64_MAX;
	uint64_t t178 = 3052857858929LLU;

    t178 = ((x1001*x1002)-(x1003%x1004));

    if (t178 != 32712LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint16_t x1005 = 2950U;
	uint16_t x1006 = UINT16_MAX;
	uint8_t x1007 = 7U;
	int64_t x1008 = -720LL;
	int64_t t179 = -55633LL;

    t179 = ((x1005*x1006)-(x1007%x1008));

    if (t179 != 193328243LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1009 = INT32_MIN;
	int32_t x1012 = INT32_MAX;
	uint64_t t180 = 1044979249962351LLU;

    t180 = ((x1009*x1010)-(x1011%x1012));

    if (t180 != 18446744072361541626LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1017 = 3185860LL;
	int16_t x1018 = INT16_MAX;
	static int32_t x1019 = INT32_MIN;
	uint16_t x1020 = 30609U;

    t181 = ((x1017*x1018)-(x1019%x1020));

    if (t181 != 104391092046LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1025 = 31229729648840997LLU;
	static int32_t x1026 = 70756050;
	int16_t x1028 = 456;
	volatile uint64_t t182 = 4869126106732365839LLU;

    t182 = ((x1025*x1026)-(x1027%x1028));

    if (t182 != 12180162429966356058LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1030 = -1;
	volatile uint16_t x1031 = 0U;
	uint8_t x1032 = 23U;
	volatile int32_t t183 = -7;

    t183 = ((x1029*x1030)-(x1031%x1032));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1033 = INT16_MIN;
	static int8_t x1034 = INT8_MIN;
	uint8_t x1036 = 18U;
	volatile int32_t t184 = 25489;

    t184 = ((x1033*x1034)-(x1035%x1036));

    if (t184 != 4194289) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1037 = -156812288;
	uint32_t x1038 = UINT32_MAX;
	int64_t x1039 = 1527251883977LL;
	static int16_t x1040 = -1;

    t185 = ((x1037*x1038)-(x1039%x1040));

    if (t185 != 156812288LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1041 = UINT64_MAX;
	int32_t x1042 = INT32_MIN;
	static int64_t x1043 = INT64_MIN;
	volatile int64_t x1044 = -1LL;

    t186 = ((x1041*x1042)-(x1043%x1044));

    if (t186 != 2147483648LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1046 = -1;
	volatile uint32_t x1048 = UINT32_MAX;
	static volatile uint32_t t187 = 116768756U;

    t187 = ((x1045*x1046)-(x1047%x1048));

    if (t187 != 126U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1049 = 63;
	volatile int16_t x1050 = 6233;
	int64_t x1051 = -1LL;
	uint32_t x1052 = 9U;

    t188 = ((x1049*x1050)-(x1051%x1052));

    if (t188 != 392680LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1053 = 274U;
	int8_t x1054 = INT8_MIN;
	uint16_t x1055 = 19U;
	volatile uint64_t x1056 = 152510LLU;
	static volatile uint64_t t189 = 487LLU;

    t189 = ((x1053*x1054)-(x1055%x1056));

    if (t189 != 4294932205LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1057 = INT16_MIN;
	uint32_t x1058 = 102689U;
	uint64_t x1059 = 2802692LLU;
	static uint32_t x1060 = 82949U;
	uint64_t t190 = 3444749348996762269LLU;

    t190 = ((x1057*x1058)-(x1059%x1060));

    if (t190 != 929988769LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1062 = -1LL;
	volatile uint32_t x1063 = 50099335U;
	uint64_t x1064 = UINT64_MAX;

    t191 = ((x1061*x1062)-(x1063%x1064));

    if (t191 != 18446744073659452026LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1065 = UINT64_MAX;
	static uint16_t x1066 = UINT16_MAX;
	uint64_t x1067 = 6810685371801141LLU;
	volatile uint64_t t192 = 434152LLU;

    t192 = ((x1065*x1066)-(x1067%x1068));

    if (t192 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x1069 = -1LL;
	uint8_t x1070 = 105U;
	int8_t x1071 = INT8_MAX;
	static int64_t t193 = -353LL;

    t193 = ((x1069*x1070)-(x1071%x1072));

    if (t193 != -232LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1073 = INT8_MIN;
	static uint64_t x1074 = 494838203866867354LLU;
	int8_t x1075 = 9;
	int8_t x1076 = INT8_MAX;
	volatile uint64_t t194 = 260230321305826366LLU;

    t194 = ((x1073*x1074)-(x1075%x1076));

    if (t194 != 10447686199879185143LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1086 = UINT32_MAX;
	int8_t x1087 = INT8_MAX;
	int8_t x1088 = -1;
	static volatile uint32_t t195 = 5324874U;

    t195 = ((x1085*x1086)-(x1087%x1088));

    if (t195 != 4294967041U) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x1089 = -1;
	volatile int64_t x1090 = -1LL;
	int16_t x1092 = -13;
	volatile int64_t t196 = 59765070270126LL;

    t196 = ((x1089*x1090)-(x1091%x1092));

    if (t196 != -4LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1093 = -1;
	volatile int8_t x1095 = -14;
	int64_t x1096 = 8743641964095352LL;
	uint64_t t197 = 238144539558878911LLU;

    t197 = ((x1093*x1094)-(x1095%x1096));

    if (t197 != 18446744073561708544LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1097 = INT16_MAX;
	uint8_t x1098 = 9U;
	static volatile int16_t x1099 = -481;
	int64_t x1100 = -1LL;
	static volatile int64_t t198 = -10450795932281763LL;

    t198 = ((x1097*x1098)-(x1099%x1100));

    if (t198 != 294903LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1101 = 11748;
	uint16_t x1102 = UINT16_MAX;
	static uint8_t x1103 = 62U;
	volatile int64_t x1104 = INT64_MIN;
	static volatile int64_t t199 = -6934183849687307LL;

    t199 = ((x1101*x1102)-(x1103%x1104));

    if (t199 != 769905118LL) { NG(); } else { ; }
	
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

