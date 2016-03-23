
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

volatile int32_t t1 = 987750;
volatile int32_t x26 = -1;
int8_t x41 = INT8_MIN;
volatile int8_t x44 = 54;
int16_t x52 = INT16_MAX;
volatile int8_t x65 = 7;
volatile int8_t x68 = -1;
uint16_t x71 = 18U;
volatile int8_t x73 = INT8_MAX;
uint32_t x74 = 870U;
static int32_t x75 = INT32_MIN;
int64_t x76 = -447390010LL;
volatile int32_t t12 = 70482965;
volatile int16_t x90 = INT16_MIN;
uint32_t x94 = UINT32_MAX;
uint8_t x99 = UINT8_MAX;
volatile int32_t t18 = -7675;
volatile int8_t x103 = INT8_MAX;
volatile uint8_t x106 = UINT8_MAX;
static uint32_t x124 = UINT32_MAX;
uint32_t x128 = 2U;
uint16_t x134 = UINT16_MAX;
static int8_t x135 = -1;
int64_t x149 = INT64_MIN;
static int32_t x150 = 4145142;
volatile int32_t x153 = 429389742;
int16_t x156 = INT16_MIN;
static uint16_t x160 = UINT16_MAX;
volatile int16_t x168 = INT16_MIN;
int8_t x175 = -1;
int8_t x179 = 40;
static uint64_t x185 = 14163227158142552LLU;
uint64_t x190 = UINT64_MAX;
int16_t x194 = -1;
volatile int32_t t38 = 268;
volatile int64_t x201 = -1LL;
volatile uint16_t x206 = 1U;
static volatile uint16_t x210 = 154U;
uint64_t x211 = 90LLU;
volatile int16_t x220 = -1;
int32_t t43 = -1878;
uint32_t x221 = 0U;
int16_t x224 = -1;
int32_t t44 = 79226;
volatile int8_t x228 = -1;
uint8_t x230 = 28U;
volatile int16_t x240 = -1655;
volatile int32_t t48 = -94407;
int16_t x246 = INT16_MIN;
volatile int32_t t51 = -41431095;
int16_t x262 = INT16_MAX;
volatile int8_t x263 = -1;
int32_t x269 = -24915;
int64_t x271 = -1LL;
int32_t t55 = -842301819;
static int64_t x281 = INT64_MIN;
volatile int32_t t57 = -49867;
int8_t x285 = INT8_MIN;
uint64_t x302 = 3270410LLU;
int16_t x303 = INT16_MAX;
volatile uint16_t x312 = UINT16_MAX;
uint16_t x317 = 7U;
static volatile int64_t x320 = INT64_MAX;
volatile int32_t t63 = -222785;
int64_t x325 = INT64_MIN;
int32_t x328 = -1;
int32_t t64 = -96357;
uint32_t x332 = UINT32_MAX;
uint8_t x335 = 7U;
uint64_t x339 = UINT64_MAX;
static int32_t t68 = -6;
int16_t x349 = INT16_MIN;
volatile int64_t x354 = -869563547LL;
int16_t x369 = -529;
static int16_t x370 = INT16_MIN;
int32_t x371 = -1;
uint16_t x372 = UINT16_MAX;
volatile int8_t x374 = INT8_MIN;
int8_t x375 = INT8_MIN;
int32_t x378 = INT32_MAX;
static int32_t t76 = -72;
volatile int32_t t77 = 254;
int32_t x385 = INT32_MIN;
static uint64_t x387 = 1141400897385329773LLU;
volatile int32_t t78 = 1972088;
static int64_t x396 = 25943952245LL;
volatile int16_t x400 = INT16_MIN;
static uint16_t x407 = UINT16_MAX;
static uint32_t x417 = UINT32_MAX;
int8_t x422 = INT8_MAX;
int8_t x427 = -7;
volatile int32_t t88 = -917899;
int8_t x434 = -1;
uint32_t x443 = UINT32_MAX;
int32_t t91 = -243343;
uint16_t x446 = UINT16_MAX;
uint8_t x458 = 2U;
int8_t x460 = -22;
int8_t x462 = 0;
int64_t x464 = -1LL;
int16_t x467 = -1;
uint8_t x469 = UINT8_MAX;
static volatile int8_t x478 = INT8_MAX;
uint64_t x481 = UINT64_MAX;
volatile uint32_t x485 = 14U;
uint16_t x487 = UINT16_MAX;
int32_t x488 = -50773;
volatile int32_t t101 = 1385313;
int8_t x492 = -37;
uint32_t x499 = UINT32_MAX;
int32_t x501 = INT32_MIN;
int8_t x506 = 1;
volatile int32_t t105 = -967462089;
static int16_t x514 = INT16_MIN;
uint8_t x518 = 24U;
volatile int32_t x525 = INT32_MAX;
static int8_t x529 = 1;
int8_t x546 = INT8_MIN;
static int32_t t112 = -947;
int64_t x549 = -63575832751689025LL;
uint32_t x556 = 375900135U;
uint16_t x558 = UINT16_MAX;
static int16_t x579 = 3509;
volatile int32_t x580 = INT32_MIN;
int32_t t118 = -46135;
static volatile uint64_t x609 = UINT64_MAX;
volatile int64_t x612 = -1LL;
static volatile int8_t x615 = INT8_MIN;
int16_t x619 = INT16_MAX;
static volatile uint16_t x638 = 180U;
int32_t t126 = 0;
int16_t x646 = -1;
static uint8_t x650 = 84U;
static int32_t t128 = -143425675;
int32_t x653 = INT32_MIN;
static uint64_t x654 = 2566518547LLU;
static uint8_t x655 = 62U;
static int16_t x659 = INT16_MIN;
static volatile uint32_t x683 = 13U;
int32_t t134 = 1820897;
static int32_t x685 = -1;
int32_t t135 = -1777063;
volatile uint64_t x690 = 1LLU;
int8_t x698 = INT8_MIN;
static int16_t x710 = 1;
int16_t x712 = 1;
static uint32_t x715 = 755612U;
int16_t x726 = INT16_MAX;
uint64_t x730 = 139198202637420LLU;
uint16_t x735 = 2U;
volatile int32_t t143 = 616;
volatile int16_t x750 = INT16_MIN;
uint16_t x755 = UINT16_MAX;
int32_t x760 = 23;
int16_t x773 = INT16_MAX;
int32_t t148 = -4455427;
int32_t x777 = -43;
volatile uint16_t x779 = 19527U;
uint16_t x781 = 8231U;
volatile int32_t x787 = INT32_MIN;
static int32_t x789 = -1;
volatile uint16_t x800 = 15U;
int64_t x802 = INT64_MAX;
int64_t x808 = INT64_MIN;
int32_t x810 = -1;
uint16_t x812 = UINT16_MAX;
int32_t x816 = -1;
static int8_t x817 = INT8_MIN;
volatile int32_t x831 = 62217;
int8_t x843 = INT8_MAX;
int64_t x844 = INT64_MIN;
int32_t x852 = -177;
uint32_t x855 = 2U;
static volatile int8_t x859 = -7;
int16_t x860 = -1;
int32_t t166 = 109119068;
static volatile uint8_t x872 = UINT8_MAX;
volatile int32_t t168 = -19;
uint8_t x885 = UINT8_MAX;
volatile int32_t t174 = 98970614;
uint64_t x909 = 1112LLU;
uint32_t x931 = 212U;
volatile int32_t t180 = 1;
uint8_t x938 = 48U;
int32_t x941 = -1127;
int32_t t182 = -881602052;
int64_t x950 = -1LL;
int16_t x966 = 59;
uint8_t x974 = UINT8_MAX;
uint16_t x978 = 9U;
static uint16_t x1000 = 233U;
volatile uint64_t x1005 = UINT64_MAX;
uint32_t x1007 = UINT32_MAX;
static volatile int32_t t192 = -515525256;
int8_t x1020 = -34;
int32_t t196 = -5046;
uint64_t x1035 = 638LLU;
volatile int16_t x1040 = 22;
volatile int32_t t199 = -20;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	int8_t x2 = -1;
	volatile uint32_t x3 = UINT32_MAX;
	uint16_t x4 = 83U;
	int32_t t0 = 79389674;

    t0 = ((x1!=(x2*x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -764870482;
	int16_t x6 = -68;
	int16_t x7 = -1;
	uint16_t x8 = UINT16_MAX;

    t1 = ((x5!=(x6*x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x17 = -20;
	volatile int16_t x18 = INT16_MIN;
	uint16_t x19 = 178U;
	uint64_t x20 = UINT64_MAX;
	int32_t t2 = -2840049;

    t2 = ((x17!=(x18*x19))<=x20);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x25 = -3931961;
	static volatile int16_t x27 = INT16_MIN;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t3 = 29;

    t3 = ((x25!=(x26*x27))<=x28);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x33 = 1U;
	int64_t x34 = -928460435LL;
	static int8_t x35 = INT8_MIN;
	int32_t x36 = 365580551;
	volatile int32_t t4 = -611206;

    t4 = ((x33!=(x34*x35))<=x36);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x37 = -1;
	uint32_t x38 = 641U;
	static int64_t x39 = -2118489828774LL;
	volatile int32_t x40 = -8745183;
	volatile int32_t t5 = 950952;

    t5 = ((x37!=(x38*x39))<=x40);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x42 = -1;
	int8_t x43 = INT8_MIN;
	volatile int32_t t6 = 64361642;

    t6 = ((x41!=(x42*x43))<=x44);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x49 = 228U;
	int64_t x50 = INT64_MIN;
	volatile uint64_t x51 = UINT64_MAX;
	int32_t t7 = -21410656;

    t7 = ((x49!=(x50*x51))<=x52);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x53 = 28LL;
	volatile int8_t x54 = 39;
	int16_t x55 = 860;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t8 = -8;

    t8 = ((x53!=(x54*x55))<=x56);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x57 = 3758600765714296074LLU;
	uint64_t x58 = UINT64_MAX;
	int8_t x59 = -5;
	volatile int32_t x60 = INT32_MIN;
	int32_t t9 = 53;

    t9 = ((x57!=(x58*x59))<=x60);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x66 = 0;
	int32_t x67 = INT32_MIN;
	static volatile int32_t t10 = 397;

    t10 = ((x65!=(x66*x67))<=x68);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x69 = INT64_MIN;
	static int8_t x70 = INT8_MAX;
	volatile int16_t x72 = INT16_MIN;
	int32_t t11 = -186937462;

    t11 = ((x69!=(x70*x71))<=x72);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    

    t12 = ((x73!=(x74*x75))<=x76);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	int16_t x78 = INT16_MIN;
	uint16_t x79 = UINT16_MAX;
	volatile int32_t x80 = 2;
	volatile int32_t t13 = 61;

    t13 = ((x77!=(x78*x79))<=x80);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x81 = UINT64_MAX;
	int16_t x82 = INT16_MIN;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = 10733;
	volatile int32_t t14 = -207;

    t14 = ((x81!=(x82*x83))<=x84);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x85 = 0;
	uint64_t x86 = UINT64_MAX;
	uint8_t x87 = UINT8_MAX;
	int32_t x88 = INT32_MIN;
	int32_t t15 = 1;

    t15 = ((x85!=(x86*x87))<=x88);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x89 = INT64_MIN;
	int8_t x91 = 34;
	int8_t x92 = 59;
	static int32_t t16 = -77724;

    t16 = ((x89!=(x90*x91))<=x92);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x93 = -1;
	static uint8_t x95 = UINT8_MAX;
	int16_t x96 = INT16_MIN;
	int32_t t17 = 44619298;

    t17 = ((x93!=(x94*x95))<=x96);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x97 = 5729793773LL;
	int64_t x98 = 15284LL;
	uint32_t x100 = UINT32_MAX;

    t18 = ((x97!=(x98*x99))<=x100);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x101 = 1;
	static uint64_t x102 = 4568LLU;
	int16_t x104 = -1;
	static volatile int32_t t19 = -164560570;

    t19 = ((x101!=(x102*x103))<=x104);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x105 = 15;
	uint16_t x107 = 11598U;
	uint16_t x108 = 0U;
	int32_t t20 = 1;

    t20 = ((x105!=(x106*x107))<=x108);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x109 = 982U;
	int64_t x110 = 3LL;
	volatile int8_t x111 = -1;
	int32_t x112 = INT32_MAX;
	int32_t t21 = -45215164;

    t21 = ((x109!=(x110*x111))<=x112);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x121 = UINT16_MAX;
	int8_t x122 = -1;
	int32_t x123 = INT32_MAX;
	int32_t t22 = 11;

    t22 = ((x121!=(x122*x123))<=x124);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x125 = 104U;
	int64_t x126 = -21LL;
	uint8_t x127 = 1U;
	int32_t t23 = -2037840;

    t23 = ((x125!=(x126*x127))<=x128);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x133 = 67525416U;
	uint64_t x136 = 444924171776891597LLU;
	int32_t t24 = 22700;

    t24 = ((x133!=(x134*x135))<=x136);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x137 = 973948767U;
	int64_t x138 = -71677942214LL;
	uint16_t x139 = UINT16_MAX;
	uint8_t x140 = UINT8_MAX;
	int32_t t25 = 740;

    t25 = ((x137!=(x138*x139))<=x140);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x141 = 6567862386562LL;
	uint16_t x142 = 770U;
	uint8_t x143 = 13U;
	uint16_t x144 = UINT16_MAX;
	int32_t t26 = 769147;

    t26 = ((x141!=(x142*x143))<=x144);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x145 = UINT16_MAX;
	volatile uint64_t x146 = UINT64_MAX;
	uint16_t x147 = 1027U;
	static uint32_t x148 = UINT32_MAX;
	int32_t t27 = 1;

    t27 = ((x145!=(x146*x147))<=x148);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x151 = 3U;
	volatile uint32_t x152 = 119062U;
	static volatile int32_t t28 = 14131352;

    t28 = ((x149!=(x150*x151))<=x152);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x154 = INT8_MIN;
	static int8_t x155 = INT8_MIN;
	volatile int32_t t29 = -218;

    t29 = ((x153!=(x154*x155))<=x156);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x157 = INT8_MAX;
	uint64_t x158 = UINT64_MAX;
	static int16_t x159 = INT16_MAX;
	int32_t t30 = 17976;

    t30 = ((x157!=(x158*x159))<=x160);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x165 = INT16_MIN;
	int16_t x166 = 1238;
	int64_t x167 = -1LL;
	volatile int32_t t31 = 326462;

    t31 = ((x165!=(x166*x167))<=x168);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x169 = UINT8_MAX;
	volatile uint64_t x170 = 26936271141407LLU;
	volatile int32_t x171 = INT32_MIN;
	uint8_t x172 = 6U;
	int32_t t32 = 15;

    t32 = ((x169!=(x170*x171))<=x172);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x173 = 5149U;
	int8_t x174 = INT8_MIN;
	static int16_t x176 = INT16_MIN;
	int32_t t33 = -127;

    t33 = ((x173!=(x174*x175))<=x176);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x177 = 270513U;
	int8_t x178 = -25;
	uint64_t x180 = 2599LLU;
	static int32_t t34 = 26998567;

    t34 = ((x177!=(x178*x179))<=x180);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x181 = UINT32_MAX;
	static int8_t x182 = INT8_MAX;
	static int16_t x183 = INT16_MAX;
	int8_t x184 = -7;
	int32_t t35 = -1;

    t35 = ((x181!=(x182*x183))<=x184);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x186 = INT32_MAX;
	static volatile int64_t x187 = 9LL;
	static int16_t x188 = INT16_MIN;
	static volatile int32_t t36 = -278127;

    t36 = ((x185!=(x186*x187))<=x188);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x189 = -1;
	uint64_t x191 = UINT64_MAX;
	int32_t x192 = -1;
	int32_t t37 = -54794248;

    t37 = ((x189!=(x190*x191))<=x192);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x193 = -1;
	uint32_t x195 = 1984140U;
	int16_t x196 = INT16_MAX;

    t38 = ((x193!=(x194*x195))<=x196);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x197 = -1LL;
	uint64_t x198 = 534020327886585862LLU;
	int32_t x199 = 684155;
	int16_t x200 = INT16_MIN;
	static int32_t t39 = -8087;

    t39 = ((x197!=(x198*x199))<=x200);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x202 = INT8_MIN;
	static int32_t x203 = -117138;
	int64_t x204 = -1LL;
	static int32_t t40 = -361;

    t40 = ((x201!=(x202*x203))<=x204);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x205 = INT16_MIN;
	int32_t x207 = INT32_MIN;
	uint8_t x208 = 1U;
	int32_t t41 = 12637793;

    t41 = ((x205!=(x206*x207))<=x208);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x209 = INT64_MAX;
	static int64_t x212 = INT64_MIN;
	static volatile int32_t t42 = -1168520;

    t42 = ((x209!=(x210*x211))<=x212);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x217 = 10U;
	int64_t x218 = INT64_MIN;
	uint64_t x219 = 76514538917470LLU;

    t43 = ((x217!=(x218*x219))<=x220);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x222 = -1;
	uint8_t x223 = 45U;

    t44 = ((x221!=(x222*x223))<=x224);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x225 = INT8_MAX;
	uint64_t x226 = 4389634099581887283LLU;
	int8_t x227 = INT8_MIN;
	int32_t t45 = 350;

    t45 = ((x225!=(x226*x227))<=x228);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x229 = UINT8_MAX;
	static int64_t x231 = -1LL;
	uint8_t x232 = 1U;
	static int32_t t46 = -1;

    t46 = ((x229!=(x230*x231))<=x232);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x233 = 78954LL;
	volatile uint32_t x234 = 73397418U;
	int16_t x235 = INT16_MIN;
	static int64_t x236 = -1LL;
	int32_t t47 = 0;

    t47 = ((x233!=(x234*x235))<=x236);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x237 = -16LL;
	uint8_t x238 = 1U;
	uint8_t x239 = 102U;

    t48 = ((x237!=(x238*x239))<=x240);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x241 = INT64_MAX;
	int32_t x242 = INT32_MIN;
	uint32_t x243 = 80U;
	int64_t x244 = -1LL;
	static volatile int32_t t49 = -622;

    t49 = ((x241!=(x242*x243))<=x244);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x245 = INT8_MIN;
	static int8_t x247 = INT8_MIN;
	static volatile int64_t x248 = INT64_MIN;
	int32_t t50 = 5702311;

    t50 = ((x245!=(x246*x247))<=x248);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x249 = 12985U;
	int32_t x250 = 616765;
	int8_t x251 = 21;
	volatile int16_t x252 = INT16_MIN;

    t51 = ((x249!=(x250*x251))<=x252);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x253 = -1;
	int32_t x254 = 217257;
	uint8_t x255 = 18U;
	int16_t x256 = INT16_MAX;
	volatile int32_t t52 = 50717058;

    t52 = ((x253!=(x254*x255))<=x256);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x257 = 1552874974728LL;
	int16_t x258 = -28;
	uint8_t x259 = 22U;
	static uint64_t x260 = 513459920LLU;
	static int32_t t53 = -524535705;

    t53 = ((x257!=(x258*x259))<=x260);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x261 = -613380683;
	static int8_t x264 = -1;
	volatile int32_t t54 = 208467937;

    t54 = ((x261!=(x262*x263))<=x264);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x270 = 5237238882LLU;
	static int8_t x272 = INT8_MIN;

    t55 = ((x269!=(x270*x271))<=x272);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x273 = 2237;
	int32_t x274 = 3471;
	static int8_t x275 = -1;
	int16_t x276 = INT16_MIN;
	static volatile int32_t t56 = 2560918;

    t56 = ((x273!=(x274*x275))<=x276);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x282 = -1;
	volatile int16_t x283 = -1;
	int32_t x284 = 280;

    t57 = ((x281!=(x282*x283))<=x284);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x286 = 2U;
	volatile uint16_t x287 = 8050U;
	uint8_t x288 = UINT8_MAX;
	int32_t t58 = -595;

    t58 = ((x285!=(x286*x287))<=x288);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x293 = 3362476LLU;
	int16_t x294 = -1;
	uint32_t x295 = UINT32_MAX;
	uint8_t x296 = UINT8_MAX;
	static volatile int32_t t59 = -881297696;

    t59 = ((x293!=(x294*x295))<=x296);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x301 = INT64_MAX;
	int64_t x304 = INT64_MIN;
	volatile int32_t t60 = 13;

    t60 = ((x301!=(x302*x303))<=x304);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x309 = UINT16_MAX;
	uint32_t x310 = 4921U;
	uint32_t x311 = 42711466U;
	volatile int32_t t61 = -44599;

    t61 = ((x309!=(x310*x311))<=x312);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x318 = UINT32_MAX;
	uint32_t x319 = 721829U;
	volatile int32_t t62 = 138;

    t62 = ((x317!=(x318*x319))<=x320);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x321 = INT16_MIN;
	int16_t x322 = 363;
	int8_t x323 = -1;
	int64_t x324 = INT64_MIN;

    t63 = ((x321!=(x322*x323))<=x324);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x326 = 5348U;
	uint8_t x327 = UINT8_MAX;

    t64 = ((x325!=(x326*x327))<=x328);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x329 = -705;
	int8_t x330 = INT8_MAX;
	uint8_t x331 = 32U;
	static volatile int32_t t65 = 3558738;

    t65 = ((x329!=(x330*x331))<=x332);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x333 = 55913LLU;
	static volatile int8_t x334 = INT8_MAX;
	volatile uint32_t x336 = 106758U;
	int32_t t66 = -6;

    t66 = ((x333!=(x334*x335))<=x336);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x337 = -1;
	int64_t x338 = 20110167LL;
	static int64_t x340 = INT64_MIN;
	volatile int32_t t67 = 7;

    t67 = ((x337!=(x338*x339))<=x340);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x341 = INT8_MIN;
	int8_t x342 = INT8_MIN;
	static int32_t x343 = 1;
	int8_t x344 = -1;

    t68 = ((x341!=(x342*x343))<=x344);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x345 = -1;
	uint16_t x346 = 138U;
	static int32_t x347 = -7115439;
	static int32_t x348 = -25;
	int32_t t69 = 115184672;

    t69 = ((x345!=(x346*x347))<=x348);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x350 = INT16_MIN;
	int16_t x351 = -6;
	int16_t x352 = -431;
	volatile int32_t t70 = -56840;

    t70 = ((x349!=(x350*x351))<=x352);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x353 = INT16_MIN;
	static int8_t x355 = INT8_MIN;
	uint64_t x356 = 78727093384790947LLU;
	int32_t t71 = -2386;

    t71 = ((x353!=(x354*x355))<=x356);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x357 = UINT8_MAX;
	int8_t x358 = INT8_MAX;
	static int16_t x359 = 31;
	int8_t x360 = INT8_MAX;
	volatile int32_t t72 = -175827473;

    t72 = ((x357!=(x358*x359))<=x360);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x361 = INT8_MIN;
	volatile int8_t x362 = -54;
	int32_t x363 = 66726;
	int8_t x364 = 15;
	volatile int32_t t73 = -1;

    t73 = ((x361!=(x362*x363))<=x364);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t t74 = -125;

    t74 = ((x369!=(x370*x371))<=x372);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x373 = 8136LLU;
	int16_t x376 = 3;
	static int32_t t75 = 13696;

    t75 = ((x373!=(x374*x375))<=x376);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x377 = 3692U;
	static uint64_t x379 = 3507969LLU;
	uint32_t x380 = UINT32_MAX;

    t76 = ((x377!=(x378*x379))<=x380);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x381 = 15;
	static int64_t x382 = -259806565LL;
	uint32_t x383 = 1536304394U;
	uint8_t x384 = 4U;

    t77 = ((x381!=(x382*x383))<=x384);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x386 = -1LL;
	uint16_t x388 = 25426U;

    t78 = ((x385!=(x386*x387))<=x388);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x389 = INT64_MAX;
	static int16_t x390 = -1;
	uint16_t x391 = 468U;
	uint64_t x392 = UINT64_MAX;
	int32_t t79 = -359692;

    t79 = ((x389!=(x390*x391))<=x392);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x393 = -1;
	uint16_t x394 = 31500U;
	int64_t x395 = -9998996105LL;
	int32_t t80 = -4614;

    t80 = ((x393!=(x394*x395))<=x396);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x397 = 24220499235352732LLU;
	int16_t x398 = INT16_MIN;
	int16_t x399 = -1;
	volatile int32_t t81 = 65;

    t81 = ((x397!=(x398*x399))<=x400);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x401 = 103U;
	static uint64_t x402 = 54848LLU;
	uint64_t x403 = UINT64_MAX;
	uint16_t x404 = 726U;
	static int32_t t82 = -61906;

    t82 = ((x401!=(x402*x403))<=x404);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x405 = INT64_MIN;
	static uint64_t x406 = UINT64_MAX;
	uint16_t x408 = 25U;
	volatile int32_t t83 = -1826571;

    t83 = ((x405!=(x406*x407))<=x408);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x409 = 851;
	static int32_t x410 = -1;
	int32_t x411 = 55860174;
	uint8_t x412 = 99U;
	volatile int32_t t84 = 72861;

    t84 = ((x409!=(x410*x411))<=x412);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x418 = 155297922LLU;
	int8_t x419 = INT8_MAX;
	uint64_t x420 = 415378725466LLU;
	static int32_t t85 = 5420821;

    t85 = ((x417!=(x418*x419))<=x420);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x421 = INT16_MIN;
	volatile int32_t x423 = -1;
	uint32_t x424 = 12172U;
	volatile int32_t t86 = 1;

    t86 = ((x421!=(x422*x423))<=x424);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x425 = -11LL;
	int8_t x426 = -4;
	int8_t x428 = -15;
	volatile int32_t t87 = 211408473;

    t87 = ((x425!=(x426*x427))<=x428);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x429 = -9066;
	int16_t x430 = -1;
	uint64_t x431 = 796LLU;
	static uint32_t x432 = 2783U;

    t88 = ((x429!=(x430*x431))<=x432);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x433 = 70074805U;
	int32_t x435 = 406;
	int64_t x436 = INT64_MIN;
	volatile int32_t t89 = -11452;

    t89 = ((x433!=(x434*x435))<=x436);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x437 = -10974209434123LL;
	int16_t x438 = INT16_MIN;
	uint8_t x439 = UINT8_MAX;
	static int64_t x440 = -1LL;
	int32_t t90 = -42;

    t90 = ((x437!=(x438*x439))<=x440);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x441 = INT8_MIN;
	volatile int8_t x442 = INT8_MAX;
	uint64_t x444 = 359844049405463010LLU;

    t91 = ((x441!=(x442*x443))<=x444);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x445 = UINT8_MAX;
	int64_t x447 = -1LL;
	static uint8_t x448 = 2U;
	int32_t t92 = -109;

    t92 = ((x445!=(x446*x447))<=x448);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x453 = UINT32_MAX;
	int16_t x454 = 2;
	int32_t x455 = 395;
	uint8_t x456 = UINT8_MAX;
	int32_t t93 = -107292164;

    t93 = ((x453!=(x454*x455))<=x456);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x457 = -5134808;
	int8_t x459 = -1;
	static volatile int32_t t94 = -23;

    t94 = ((x457!=(x458*x459))<=x460);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x461 = INT32_MIN;
	volatile int16_t x463 = INT16_MAX;
	volatile int32_t t95 = -12;

    t95 = ((x461!=(x462*x463))<=x464);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x465 = INT8_MIN;
	int16_t x466 = -4;
	uint8_t x468 = UINT8_MAX;
	static int32_t t96 = -478555214;

    t96 = ((x465!=(x466*x467))<=x468);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x470 = -27;
	static volatile int8_t x471 = -1;
	volatile uint16_t x472 = 5U;
	int32_t t97 = 2;

    t97 = ((x469!=(x470*x471))<=x472);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x473 = 237U;
	uint16_t x474 = 0U;
	int64_t x475 = -468457829LL;
	int8_t x476 = INT8_MIN;
	int32_t t98 = 1;

    t98 = ((x473!=(x474*x475))<=x476);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x477 = UINT64_MAX;
	volatile uint8_t x479 = 13U;
	uint16_t x480 = 1U;
	int32_t t99 = 1;

    t99 = ((x477!=(x478*x479))<=x480);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x482 = INT16_MAX;
	uint32_t x483 = 63465304U;
	static int8_t x484 = INT8_MIN;
	volatile int32_t t100 = 24990;

    t100 = ((x481!=(x482*x483))<=x484);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x486 = 14082U;

    t101 = ((x485!=(x486*x487))<=x488);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x489 = INT16_MIN;
	int32_t x490 = INT32_MAX;
	static volatile uint32_t x491 = 658371U;
	int32_t t102 = 285;

    t102 = ((x489!=(x490*x491))<=x492);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x497 = INT8_MAX;
	int16_t x498 = INT16_MIN;
	volatile uint16_t x500 = 10981U;
	int32_t t103 = -1;

    t103 = ((x497!=(x498*x499))<=x500);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x502 = -142669LL;
	int16_t x503 = -1;
	uint64_t x504 = UINT64_MAX;
	volatile int32_t t104 = -22831;

    t104 = ((x501!=(x502*x503))<=x504);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x505 = INT32_MAX;
	int16_t x507 = -11826;
	volatile int8_t x508 = 0;

    t105 = ((x505!=(x506*x507))<=x508);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x513 = INT16_MIN;
	volatile int32_t x515 = -1;
	uint64_t x516 = 5484714774541984298LLU;
	volatile int32_t t106 = 291;

    t106 = ((x513!=(x514*x515))<=x516);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x517 = -1LL;
	int32_t x519 = 0;
	volatile int16_t x520 = INT16_MIN;
	int32_t t107 = -21281;

    t107 = ((x517!=(x518*x519))<=x520);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x526 = 6U;
	static uint32_t x527 = 970557495U;
	int32_t x528 = INT32_MIN;
	volatile int32_t t108 = 9;

    t108 = ((x525!=(x526*x527))<=x528);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x530 = UINT64_MAX;
	int16_t x531 = -1;
	int16_t x532 = -1;
	int32_t t109 = -4;

    t109 = ((x529!=(x530*x531))<=x532);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x533 = INT8_MIN;
	volatile int64_t x534 = -688081649LL;
	volatile int32_t x535 = INT32_MIN;
	uint32_t x536 = 1290861U;
	volatile int32_t t110 = 3445;

    t110 = ((x533!=(x534*x535))<=x536);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x537 = INT64_MAX;
	int8_t x538 = INT8_MAX;
	int16_t x539 = INT16_MIN;
	int64_t x540 = INT64_MIN;
	volatile int32_t t111 = 6029390;

    t111 = ((x537!=(x538*x539))<=x540);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x545 = 14;
	int8_t x547 = INT8_MIN;
	static volatile uint16_t x548 = 7U;

    t112 = ((x545!=(x546*x547))<=x548);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x550 = UINT8_MAX;
	int16_t x551 = -746;
	static int64_t x552 = 645LL;
	volatile int32_t t113 = 8816760;

    t113 = ((x549!=(x550*x551))<=x552);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x553 = 4U;
	volatile uint8_t x554 = 11U;
	uint16_t x555 = 179U;
	static int32_t t114 = 399;

    t114 = ((x553!=(x554*x555))<=x556);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x557 = 2U;
	volatile int16_t x559 = INT16_MIN;
	int64_t x560 = INT64_MIN;
	int32_t t115 = 747572;

    t115 = ((x557!=(x558*x559))<=x560);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x569 = INT16_MIN;
	int8_t x570 = 0;
	static volatile int32_t x571 = 9;
	int32_t x572 = INT32_MIN;
	static int32_t t116 = 20303;

    t116 = ((x569!=(x570*x571))<=x572);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x577 = INT32_MAX;
	uint32_t x578 = 460U;
	int32_t t117 = 129495810;

    t117 = ((x577!=(x578*x579))<=x580);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x581 = -1;
	int32_t x582 = INT32_MAX;
	int16_t x583 = -1;
	volatile uint32_t x584 = 57U;

    t118 = ((x581!=(x582*x583))<=x584);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x585 = -1;
	int8_t x586 = 0;
	volatile int32_t x587 = -38217759;
	static volatile int8_t x588 = INT8_MIN;
	volatile int32_t t119 = -6719;

    t119 = ((x585!=(x586*x587))<=x588);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x593 = 118U;
	volatile int16_t x594 = -1;
	static int16_t x595 = -4;
	volatile int16_t x596 = INT16_MIN;
	static int32_t t120 = -181167832;

    t120 = ((x593!=(x594*x595))<=x596);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x597 = 62U;
	volatile int8_t x598 = INT8_MIN;
	int8_t x599 = INT8_MAX;
	int32_t x600 = -8;
	static volatile int32_t t121 = -350391337;

    t121 = ((x597!=(x598*x599))<=x600);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x610 = INT8_MIN;
	uint64_t x611 = 633387LLU;
	int32_t t122 = -659199375;

    t122 = ((x609!=(x610*x611))<=x612);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x613 = INT64_MIN;
	static int8_t x614 = INT8_MIN;
	uint16_t x616 = 1165U;
	volatile int32_t t123 = 0;

    t123 = ((x613!=(x614*x615))<=x616);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint64_t x617 = 1LLU;
	volatile uint16_t x618 = 1312U;
	static int64_t x620 = -57040895909140LL;
	int32_t t124 = -9010;

    t124 = ((x617!=(x618*x619))<=x620);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x625 = 51784LLU;
	int32_t x626 = -1;
	int8_t x627 = -39;
	volatile int16_t x628 = -1;
	static volatile int32_t t125 = -33;

    t125 = ((x625!=(x626*x627))<=x628);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x637 = -1;
	int32_t x639 = -1;
	volatile int32_t x640 = INT32_MIN;

    t126 = ((x637!=(x638*x639))<=x640);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x645 = 12;
	static uint32_t x647 = 32679248U;
	uint8_t x648 = 46U;
	int32_t t127 = -498;

    t127 = ((x645!=(x646*x647))<=x648);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x649 = INT16_MIN;
	volatile int8_t x651 = -1;
	static int8_t x652 = INT8_MAX;

    t128 = ((x649!=(x650*x651))<=x652);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x656 = -19205;
	volatile int32_t t129 = 4483352;

    t129 = ((x653!=(x654*x655))<=x656);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x657 = -15;
	uint8_t x658 = 24U;
	int16_t x660 = -1;
	volatile int32_t t130 = -285;

    t130 = ((x657!=(x658*x659))<=x660);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x661 = 1104U;
	uint64_t x662 = 0LLU;
	int64_t x663 = -1LL;
	uint64_t x664 = 23429150330838LLU;
	static volatile int32_t t131 = 3;

    t131 = ((x661!=(x662*x663))<=x664);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x665 = INT64_MIN;
	int16_t x666 = -562;
	uint64_t x667 = 3235LLU;
	volatile int8_t x668 = INT8_MAX;
	volatile int32_t t132 = 13725159;

    t132 = ((x665!=(x666*x667))<=x668);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x673 = INT16_MIN;
	int16_t x674 = INT16_MIN;
	int32_t x675 = -1;
	int16_t x676 = INT16_MIN;
	int32_t t133 = -1278296;

    t133 = ((x673!=(x674*x675))<=x676);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x681 = INT8_MAX;
	static uint8_t x682 = UINT8_MAX;
	int8_t x684 = -2;

    t134 = ((x681!=(x682*x683))<=x684);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x686 = 1687U;
	static int8_t x687 = 16;
	int32_t x688 = -8937;

    t135 = ((x685!=(x686*x687))<=x688);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x689 = 508113729064LL;
	static int32_t x691 = 366563;
	volatile int8_t x692 = -1;
	volatile int32_t t136 = -192996150;

    t136 = ((x689!=(x690*x691))<=x692);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x697 = -1;
	static uint64_t x699 = 358260LLU;
	static int16_t x700 = INT16_MIN;
	static int32_t t137 = -245;

    t137 = ((x697!=(x698*x699))<=x700);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x709 = -1;
	int8_t x711 = INT8_MAX;
	volatile int32_t t138 = 54948656;

    t138 = ((x709!=(x710*x711))<=x712);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x713 = INT32_MAX;
	volatile int64_t x714 = 594LL;
	volatile int32_t x716 = -30375114;
	int32_t t139 = 26324;

    t139 = ((x713!=(x714*x715))<=x716);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x725 = 606U;
	uint64_t x727 = 2114036876794185LLU;
	int64_t x728 = -30023432530575LL;
	volatile int32_t t140 = -6694;

    t140 = ((x725!=(x726*x727))<=x728);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x729 = UINT8_MAX;
	uint8_t x731 = 2U;
	static uint16_t x732 = 1446U;
	int32_t t141 = 2;

    t141 = ((x729!=(x730*x731))<=x732);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x733 = UINT64_MAX;
	int64_t x734 = -456746LL;
	int32_t x736 = -1;
	int32_t t142 = -20;

    t142 = ((x733!=(x734*x735))<=x736);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x741 = 46;
	int64_t x742 = INT64_MAX;
	uint64_t x743 = 7632961892851232391LLU;
	int32_t x744 = 11442512;

    t143 = ((x741!=(x742*x743))<=x744);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x749 = 83263331U;
	static uint64_t x751 = 5726973055398LLU;
	volatile int8_t x752 = INT8_MAX;
	int32_t t144 = 1;

    t144 = ((x749!=(x750*x751))<=x752);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x753 = 146856008772192LLU;
	int64_t x754 = -1LL;
	int32_t x756 = 16;
	static volatile int32_t t145 = -31;

    t145 = ((x753!=(x754*x755))<=x756);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x757 = 52U;
	static volatile int8_t x758 = INT8_MIN;
	int64_t x759 = 1206621952462097LL;
	volatile int32_t t146 = 922147400;

    t146 = ((x757!=(x758*x759))<=x760);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x769 = -2;
	volatile uint32_t x770 = UINT32_MAX;
	int16_t x771 = INT16_MAX;
	volatile int32_t x772 = -65572;
	static int32_t t147 = -712848;

    t147 = ((x769!=(x770*x771))<=x772);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x774 = 769U;
	uint64_t x775 = 12953LLU;
	int32_t x776 = 108884;

    t148 = ((x773!=(x774*x775))<=x776);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x778 = INT8_MIN;
	volatile uint16_t x780 = 8876U;
	volatile int32_t t149 = -646494;

    t149 = ((x777!=(x778*x779))<=x780);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x782 = -1LL;
	int8_t x783 = -1;
	int32_t x784 = -1;
	volatile int32_t t150 = 59322;

    t150 = ((x781!=(x782*x783))<=x784);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x785 = -25;
	int64_t x786 = -1LL;
	volatile uint8_t x788 = UINT8_MAX;
	int32_t t151 = 8439766;

    t151 = ((x785!=(x786*x787))<=x788);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x790 = 800992038U;
	int32_t x791 = INT32_MAX;
	int16_t x792 = 5466;
	static int32_t t152 = -401;

    t152 = ((x789!=(x790*x791))<=x792);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x793 = -2318765996LL;
	int32_t x794 = INT32_MIN;
	uint64_t x795 = 52092739073928LLU;
	static volatile uint8_t x796 = UINT8_MAX;
	int32_t t153 = 41;

    t153 = ((x793!=(x794*x795))<=x796);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x797 = -1LL;
	uint64_t x798 = UINT64_MAX;
	uint32_t x799 = 987801971U;
	int32_t t154 = -251569;

    t154 = ((x797!=(x798*x799))<=x800);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x801 = INT16_MIN;
	static int32_t x803 = -1;
	volatile int8_t x804 = -1;
	int32_t t155 = -873;

    t155 = ((x801!=(x802*x803))<=x804);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x805 = INT32_MIN;
	uint32_t x806 = 2U;
	static volatile int64_t x807 = -1LL;
	int32_t t156 = 3;

    t156 = ((x805!=(x806*x807))<=x808);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x809 = INT16_MIN;
	int16_t x811 = -1;
	volatile int32_t t157 = 173268;

    t157 = ((x809!=(x810*x811))<=x812);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x813 = INT8_MAX;
	int8_t x814 = INT8_MIN;
	volatile uint32_t x815 = UINT32_MAX;
	int32_t t158 = 1;

    t158 = ((x813!=(x814*x815))<=x816);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x818 = INT16_MIN;
	static int16_t x819 = -1;
	static int64_t x820 = INT64_MIN;
	int32_t t159 = -3;

    t159 = ((x817!=(x818*x819))<=x820);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x821 = INT64_MAX;
	int8_t x822 = 1;
	int32_t x823 = INT32_MAX;
	uint64_t x824 = UINT64_MAX;
	int32_t t160 = 2;

    t160 = ((x821!=(x822*x823))<=x824);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x829 = INT32_MIN;
	uint32_t x830 = 23U;
	volatile int16_t x832 = INT16_MIN;
	int32_t t161 = 58;

    t161 = ((x829!=(x830*x831))<=x832);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x841 = UINT64_MAX;
	uint16_t x842 = 3950U;
	int32_t t162 = -906554423;

    t162 = ((x841!=(x842*x843))<=x844);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x849 = UINT64_MAX;
	uint32_t x850 = UINT32_MAX;
	uint32_t x851 = 61935U;
	volatile int32_t t163 = -4183910;

    t163 = ((x849!=(x850*x851))<=x852);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x853 = UINT16_MAX;
	volatile int16_t x854 = -3;
	int32_t x856 = INT32_MAX;
	static int32_t t164 = 15074;

    t164 = ((x853!=(x854*x855))<=x856);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x857 = INT8_MIN;
	volatile int16_t x858 = 4;
	volatile int32_t t165 = 22627134;

    t165 = ((x857!=(x858*x859))<=x860);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x861 = -1;
	int8_t x862 = INT8_MAX;
	int64_t x863 = -1LL;
	static uint32_t x864 = 1723U;

    t166 = ((x861!=(x862*x863))<=x864);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x865 = 1U;
	int32_t x866 = 7;
	static uint64_t x867 = 6053233030336LLU;
	int8_t x868 = -1;
	volatile int32_t t167 = -104;

    t167 = ((x865!=(x866*x867))<=x868);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x869 = 2048U;
	volatile int32_t x870 = 221;
	int8_t x871 = -3;

    t168 = ((x869!=(x870*x871))<=x872);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x877 = -63922680159LL;
	uint32_t x878 = 344559365U;
	uint16_t x879 = 3U;
	int32_t x880 = 21;
	volatile int32_t t169 = -26024;

    t169 = ((x877!=(x878*x879))<=x880);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x881 = INT64_MIN;
	static uint32_t x882 = 355453U;
	volatile int8_t x883 = 1;
	int32_t x884 = INT32_MIN;
	volatile int32_t t170 = -1;

    t170 = ((x881!=(x882*x883))<=x884);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x886 = UINT16_MAX;
	int64_t x887 = 3957LL;
	volatile int32_t x888 = 0;
	static int32_t t171 = -2078433;

    t171 = ((x885!=(x886*x887))<=x888);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x889 = 1491U;
	uint16_t x890 = 7586U;
	volatile int16_t x891 = 1928;
	volatile uint64_t x892 = 39LLU;
	static volatile int32_t t172 = -12;

    t172 = ((x889!=(x890*x891))<=x892);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x893 = -2533;
	int8_t x894 = 13;
	volatile int16_t x895 = -477;
	int16_t x896 = -1;
	int32_t t173 = 301;

    t173 = ((x893!=(x894*x895))<=x896);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x897 = 57142001;
	volatile uint8_t x898 = 1U;
	static volatile uint64_t x899 = 435636599LLU;
	int64_t x900 = INT64_MAX;

    t174 = ((x897!=(x898*x899))<=x900);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x910 = 15921692U;
	uint8_t x911 = UINT8_MAX;
	uint8_t x912 = UINT8_MAX;
	volatile int32_t t175 = 882771988;

    t175 = ((x909!=(x910*x911))<=x912);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x913 = 311U;
	uint64_t x914 = 329445LLU;
	static int16_t x915 = 0;
	volatile int16_t x916 = 2;
	volatile int32_t t176 = -4;

    t176 = ((x913!=(x914*x915))<=x916);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x917 = INT32_MIN;
	static uint32_t x918 = UINT32_MAX;
	volatile int8_t x919 = 0;
	int16_t x920 = INT16_MAX;
	volatile int32_t t177 = 556481198;

    t177 = ((x917!=(x918*x919))<=x920);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x921 = -33;
	int32_t x922 = -1;
	int64_t x923 = -1LL;
	uint16_t x924 = 14U;
	volatile int32_t t178 = 38;

    t178 = ((x921!=(x922*x923))<=x924);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x929 = -1LL;
	uint16_t x930 = 1487U;
	int16_t x932 = 59;
	int32_t t179 = -1;

    t179 = ((x929!=(x930*x931))<=x932);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x933 = INT16_MIN;
	volatile int16_t x934 = INT16_MIN;
	int8_t x935 = -1;
	uint32_t x936 = UINT32_MAX;

    t180 = ((x933!=(x934*x935))<=x936);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x937 = 7;
	int32_t x939 = -881494;
	static int8_t x940 = -1;
	int32_t t181 = 820;

    t181 = ((x937!=(x938*x939))<=x940);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x942 = INT16_MAX;
	static uint8_t x943 = 62U;
	int8_t x944 = -1;

    t182 = ((x941!=(x942*x943))<=x944);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x945 = UINT8_MAX;
	uint8_t x946 = UINT8_MAX;
	int32_t x947 = 692;
	int8_t x948 = INT8_MIN;
	volatile int32_t t183 = 5776731;

    t183 = ((x945!=(x946*x947))<=x948);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x949 = INT32_MIN;
	static uint64_t x951 = UINT64_MAX;
	uint16_t x952 = UINT16_MAX;
	int32_t t184 = 1;

    t184 = ((x949!=(x950*x951))<=x952);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x957 = INT64_MIN;
	int16_t x958 = -1;
	int8_t x959 = INT8_MIN;
	int64_t x960 = 1653406309375LL;
	static volatile int32_t t185 = 485371405;

    t185 = ((x957!=(x958*x959))<=x960);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x961 = INT8_MAX;
	volatile int16_t x962 = 14;
	int16_t x963 = -1;
	int8_t x964 = INT8_MIN;
	int32_t t186 = 1005;

    t186 = ((x961!=(x962*x963))<=x964);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x965 = INT32_MIN;
	uint64_t x967 = 2921LLU;
	int8_t x968 = INT8_MIN;
	static volatile int32_t t187 = 90075;

    t187 = ((x965!=(x966*x967))<=x968);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x973 = UINT16_MAX;
	int64_t x975 = 830226070LL;
	volatile uint32_t x976 = 11U;
	volatile int32_t t188 = -1;

    t188 = ((x973!=(x974*x975))<=x976);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x977 = -1;
	uint16_t x979 = 193U;
	uint64_t x980 = 83847042442163LLU;
	volatile int32_t t189 = -144734;

    t189 = ((x977!=(x978*x979))<=x980);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x981 = 1195245185LLU;
	int64_t x982 = INT64_MAX;
	int32_t x983 = -1;
	int8_t x984 = INT8_MIN;
	volatile int32_t t190 = 221397829;

    t190 = ((x981!=(x982*x983))<=x984);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x997 = INT16_MAX;
	int8_t x998 = INT8_MIN;
	int16_t x999 = INT16_MAX;
	static int32_t t191 = -64179076;

    t191 = ((x997!=(x998*x999))<=x1000);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x1006 = UINT16_MAX;
	int16_t x1008 = INT16_MIN;

    t192 = ((x1005!=(x1006*x1007))<=x1008);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1009 = INT32_MIN;
	uint16_t x1010 = 2U;
	static uint16_t x1011 = 23504U;
	int16_t x1012 = 0;
	static volatile int32_t t193 = 1728972;

    t193 = ((x1009!=(x1010*x1011))<=x1012);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1013 = INT64_MAX;
	int16_t x1014 = -1;
	uint32_t x1015 = UINT32_MAX;
	uint64_t x1016 = UINT64_MAX;
	int32_t t194 = 1844;

    t194 = ((x1013!=(x1014*x1015))<=x1016);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1017 = INT8_MIN;
	volatile uint8_t x1018 = 14U;
	int64_t x1019 = -1LL;
	int32_t t195 = 109;

    t195 = ((x1017!=(x1018*x1019))<=x1020);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1021 = INT16_MIN;
	static uint64_t x1022 = UINT64_MAX;
	static int8_t x1023 = -1;
	static int32_t x1024 = INT32_MAX;

    t196 = ((x1021!=(x1022*x1023))<=x1024);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1025 = -1LL;
	uint8_t x1026 = UINT8_MAX;
	int8_t x1027 = INT8_MIN;
	volatile uint8_t x1028 = UINT8_MAX;
	volatile int32_t t197 = -4427772;

    t197 = ((x1025!=(x1026*x1027))<=x1028);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1033 = 292U;
	static volatile uint8_t x1034 = 5U;
	volatile int64_t x1036 = INT64_MIN;
	int32_t t198 = 1697;

    t198 = ((x1033!=(x1034*x1035))<=x1036);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1037 = -1;
	uint32_t x1038 = UINT32_MAX;
	int8_t x1039 = -1;

    t199 = ((x1037!=(x1038*x1039))<=x1040);

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

