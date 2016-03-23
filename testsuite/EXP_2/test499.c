
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

int16_t x16 = INT16_MAX;
uint32_t x24 = 3202U;
int8_t x29 = -1;
int8_t x32 = -1;
int64_t x36 = 723301LL;
volatile int32_t t5 = 65499;
volatile int32_t x45 = -644248;
uint32_t x49 = 4U;
int32_t t9 = -12884485;
int8_t x63 = INT8_MAX;
volatile int32_t t10 = -558972;
uint8_t x80 = 2U;
uint16_t x83 = 17U;
int64_t x100 = INT64_MIN;
uint16_t x101 = UINT16_MAX;
int16_t x102 = -1;
int64_t x107 = INT64_MAX;
int32_t x110 = -1;
int8_t x122 = -1;
int8_t x130 = INT8_MAX;
uint8_t x136 = UINT8_MAX;
uint32_t x145 = UINT32_MAX;
static int16_t x155 = INT16_MAX;
static uint16_t x165 = UINT16_MAX;
static volatile int32_t t28 = -145035;
int64_t x186 = 21LL;
int16_t x199 = INT16_MIN;
int16_t x206 = INT16_MIN;
int16_t x213 = INT16_MAX;
volatile int16_t x214 = -1;
uint64_t x215 = UINT64_MAX;
volatile int32_t t34 = -1493;
volatile int32_t t35 = 4922;
int8_t x242 = 0;
int32_t x254 = -92908;
uint32_t x255 = 1387U;
volatile int64_t x259 = 611LL;
int8_t x261 = 8;
int32_t x263 = 544;
uint8_t x266 = 16U;
int8_t x269 = -7;
static uint64_t x283 = 41560086205518676LLU;
uint64_t x287 = UINT64_MAX;
static volatile int8_t x289 = INT8_MIN;
int64_t x290 = INT64_MIN;
int32_t t47 = -15601;
int64_t x295 = 32802474631LL;
volatile int64_t x302 = -1746096277LL;
int16_t x306 = INT16_MAX;
volatile int32_t x307 = -1;
volatile int8_t x312 = -1;
static volatile int32_t t53 = 6934;
int16_t x329 = 3262;
volatile int32_t t55 = 405421721;
static int32_t x341 = 36439586;
int32_t x342 = INT32_MAX;
int32_t t56 = -11720;
static int16_t x353 = 1638;
int32_t t59 = 405023402;
static volatile uint16_t x357 = 15U;
int64_t x362 = INT64_MAX;
int64_t x369 = -536491419757627808LL;
int8_t x384 = -1;
uint16_t x385 = UINT16_MAX;
volatile int32_t t65 = 11079454;
int8_t x415 = -1;
volatile int64_t x419 = -1LL;
int32_t t68 = 265299520;
int16_t x421 = -1;
int32_t t69 = 62423;
volatile int32_t t70 = -166792010;
uint64_t x429 = 133646920558218LLU;
static int64_t x433 = INT64_MAX;
static uint64_t x441 = 5380040LLU;
static volatile int32_t t74 = -15644268;
static int32_t t75 = -2;
static int8_t x455 = -7;
static int8_t x457 = INT8_MAX;
volatile uint32_t x458 = 23U;
int64_t x464 = INT64_MAX;
uint8_t x467 = 0U;
int32_t t80 = 1;
int32_t x478 = INT32_MIN;
uint64_t x493 = UINT64_MAX;
int64_t x496 = INT64_MIN;
static uint8_t x497 = UINT8_MAX;
volatile int32_t x499 = INT32_MIN;
int32_t x519 = -1;
static int16_t x520 = 6388;
int16_t x521 = 0;
uint16_t x525 = 0U;
uint8_t x526 = 37U;
int64_t x528 = INT64_MAX;
volatile uint32_t x530 = 10759U;
int64_t x533 = INT64_MIN;
volatile int32_t t92 = 132962404;
int8_t x542 = -3;
volatile int8_t x543 = INT8_MAX;
static volatile int32_t t93 = 398694;
uint16_t x550 = UINT16_MAX;
uint32_t x552 = 85U;
volatile uint64_t x558 = 1173149LLU;
static volatile int32_t t97 = -37;
volatile int32_t t100 = -763;
volatile uint32_t x581 = 26633U;
static uint64_t x583 = UINT64_MAX;
int16_t x598 = INT16_MIN;
int32_t x601 = -1;
uint8_t x608 = 1U;
volatile int64_t x609 = 484741673101942LL;
int32_t x612 = -1;
int8_t x624 = -24;
uint8_t x637 = 2U;
int32_t x641 = INT32_MIN;
uint64_t x645 = 9031119936015393LLU;
static int32_t t113 = -519;
uint8_t x677 = 9U;
uint64_t x679 = 27341571975559LLU;
int8_t x690 = -1;
int64_t x697 = INT64_MIN;
int32_t x703 = INT32_MAX;
volatile uint32_t x711 = 10361U;
volatile int8_t x712 = -28;
volatile int8_t x713 = 1;
volatile uint8_t x729 = 46U;
static volatile int32_t t125 = -70726745;
uint32_t x738 = UINT32_MAX;
volatile int32_t t127 = -333935;
uint8_t x747 = UINT8_MAX;
static int32_t x756 = -1;
volatile int32_t t130 = 1971536;
int32_t x761 = INT32_MIN;
int32_t x770 = INT32_MIN;
static volatile int32_t t134 = 829;
uint8_t x779 = UINT8_MAX;
int8_t x786 = -1;
int32_t x794 = 151032095;
static int32_t t138 = 7;
int8_t x802 = INT8_MIN;
static int32_t t139 = -205096;
uint8_t x805 = 0U;
uint64_t x808 = 3LLU;
int32_t t140 = 1839;
int16_t x828 = INT16_MAX;
int32_t t144 = 454;
volatile int32_t t145 = 12035;
int32_t x834 = -47516019;
int16_t x836 = 1;
static int32_t x838 = 145;
uint32_t x839 = 300U;
static volatile int32_t t147 = 106501394;
int8_t x848 = INT8_MIN;
int64_t x849 = INT64_MIN;
uint64_t x851 = 700487675LLU;
int8_t x855 = 0;
int32_t x857 = -1477;
uint16_t x858 = UINT16_MAX;
int16_t x877 = -1;
int8_t x878 = INT8_MIN;
int64_t x879 = -991936562742548LL;
volatile uint8_t x883 = 0U;
static int32_t t157 = -1;
int8_t x900 = -1;
volatile int32_t t158 = -120559546;
int8_t x906 = 0;
uint32_t x934 = 31974U;
int16_t x935 = 663;
volatile int64_t x940 = INT64_MIN;
volatile int16_t x943 = -1;
int16_t x944 = INT16_MIN;
static volatile int32_t x945 = 6466672;
static int32_t x948 = INT32_MIN;
int32_t t168 = 15;
static volatile int32_t t169 = 775;
static int8_t x963 = INT8_MIN;
int32_t x964 = INT32_MIN;
int8_t x973 = INT8_MIN;
volatile int8_t x974 = 1;
volatile int32_t t172 = 58;
uint32_t x999 = 113390351U;
int16_t x1002 = 7877;
static int32_t t175 = -3;
uint8_t x1009 = 0U;
int8_t x1012 = 2;
int32_t x1014 = INT32_MIN;
int32_t x1016 = -1;
int32_t x1018 = 247;
static int16_t x1030 = INT16_MIN;
uint16_t x1037 = UINT16_MAX;
int8_t x1039 = INT8_MIN;
volatile int64_t x1044 = INT64_MIN;
int32_t t184 = 1917675;
int8_t x1050 = INT8_MAX;
int32_t x1051 = 2;
int64_t x1057 = INT64_MIN;
static int8_t x1058 = -1;
int32_t t187 = -2946;
uint16_t x1071 = UINT16_MAX;
volatile int8_t x1074 = 11;
uint16_t x1075 = 635U;
static int16_t x1076 = INT16_MIN;
static int32_t t190 = 4722;
volatile int64_t x1077 = INT64_MIN;
volatile int32_t t191 = -48735;
int8_t x1090 = 1;
uint16_t x1099 = UINT16_MAX;
static int64_t x1100 = 8154013743360LL;
int64_t x1104 = INT64_MAX;
volatile int64_t x1113 = INT64_MAX;
int8_t x1118 = INT8_MIN;


void f0(void) {
    	uint64_t x5 = UINT64_MAX;
	int8_t x6 = INT8_MIN;
	static uint32_t x7 = 186518U;
	static uint8_t x8 = 57U;
	static int32_t t0 = -10015;

    t0 = ((x5==(x6*x7))>x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x13 = INT8_MIN;
	int16_t x14 = 5;
	uint32_t x15 = UINT32_MAX;
	int32_t t1 = 529574510;

    t1 = ((x13==(x14*x15))>x16);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x17 = 234U;
	static volatile int16_t x18 = 1;
	int16_t x19 = INT16_MIN;
	int8_t x20 = -4;
	static int32_t t2 = 12318468;

    t2 = ((x17==(x18*x19))>x20);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = -3;
	static int32_t x22 = -1;
	static uint16_t x23 = 487U;
	volatile int32_t t3 = -633453042;

    t3 = ((x21==(x22*x23))>x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x30 = UINT32_MAX;
	static int32_t x31 = INT32_MIN;
	static volatile int32_t t4 = -20;

    t4 = ((x29==(x30*x31))>x32);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x33 = INT64_MAX;
	volatile uint8_t x34 = UINT8_MAX;
	volatile uint8_t x35 = 7U;

    t5 = ((x33==(x34*x35))>x36);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = -5951;
	uint32_t x39 = UINT32_MAX;
	uint8_t x40 = 2U;
	static volatile int32_t t6 = 1;

    t6 = ((x37==(x38*x39))>x40);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x41 = -4;
	volatile uint16_t x42 = 26368U;
	uint8_t x43 = 0U;
	int8_t x44 = 5;
	volatile int32_t t7 = -4;

    t7 = ((x41==(x42*x43))>x44);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x46 = INT16_MIN;
	uint16_t x47 = UINT16_MAX;
	static int32_t x48 = -1;
	static volatile int32_t t8 = -262880407;

    t8 = ((x45==(x46*x47))>x48);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x50 = 3U;
	uint64_t x51 = 73666LLU;
	volatile int32_t x52 = -1;

    t9 = ((x49==(x50*x51))>x52);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x61 = -1;
	volatile int8_t x62 = 1;
	volatile int64_t x64 = 31649360338LL;

    t10 = ((x61==(x62*x63))>x64);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x69 = 9U;
	int64_t x70 = -1LL;
	static int8_t x71 = INT8_MIN;
	uint32_t x72 = 2671119U;
	volatile int32_t t11 = 26;

    t11 = ((x69==(x70*x71))>x72);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x77 = 0U;
	uint64_t x78 = 37131752LLU;
	int16_t x79 = -1;
	int32_t t12 = -809048;

    t12 = ((x77==(x78*x79))>x80);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x81 = INT64_MIN;
	uint16_t x82 = UINT16_MAX;
	static volatile uint64_t x84 = 110555838179LLU;
	int32_t t13 = 344721;

    t13 = ((x81==(x82*x83))>x84);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x89 = 1786U;
	static uint8_t x90 = 0U;
	static volatile int64_t x91 = INT64_MIN;
	int64_t x92 = -1LL;
	int32_t t14 = -446550267;

    t14 = ((x89==(x90*x91))>x92);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x93 = -65240;
	int16_t x94 = -241;
	volatile uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MIN;
	int32_t t15 = -18;

    t15 = ((x93==(x94*x95))>x96);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x97 = 27U;
	int8_t x98 = 1;
	uint16_t x99 = UINT16_MAX;
	static int32_t t16 = 2541;

    t16 = ((x97==(x98*x99))>x100);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x103 = 1263093184673LL;
	int16_t x104 = -1;
	volatile int32_t t17 = 5584605;

    t17 = ((x101==(x102*x103))>x104);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x105 = -1;
	static volatile uint64_t x106 = 1029134LLU;
	int8_t x108 = 7;
	static int32_t t18 = 9270163;

    t18 = ((x105==(x106*x107))>x108);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x109 = -1LL;
	int32_t x111 = -2560;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t19 = -8175978;

    t19 = ((x109==(x110*x111))>x112);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x121 = 251889LL;
	uint16_t x123 = UINT16_MAX;
	uint32_t x124 = 189458U;
	volatile int32_t t20 = -7229;

    t20 = ((x121==(x122*x123))>x124);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x129 = INT8_MIN;
	int16_t x131 = -43;
	static volatile uint32_t x132 = 5974494U;
	int32_t t21 = 13314193;

    t21 = ((x129==(x130*x131))>x132);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x133 = 53U;
	int8_t x134 = INT8_MIN;
	static int8_t x135 = -1;
	int32_t t22 = 5;

    t22 = ((x133==(x134*x135))>x136);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x137 = INT32_MIN;
	volatile uint8_t x138 = 127U;
	int64_t x139 = 44312LL;
	static int64_t x140 = -371LL;
	volatile int32_t t23 = -4076;

    t23 = ((x137==(x138*x139))>x140);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x146 = 18U;
	uint32_t x147 = UINT32_MAX;
	static int16_t x148 = INT16_MIN;
	static volatile int32_t t24 = 3247963;

    t24 = ((x145==(x146*x147))>x148);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x149 = 69605856LL;
	int64_t x150 = -53838263819LL;
	int8_t x151 = -1;
	int8_t x152 = INT8_MIN;
	static int32_t t25 = -8918110;

    t25 = ((x149==(x150*x151))>x152);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x153 = -1LL;
	volatile int16_t x154 = -1;
	uint8_t x156 = 0U;
	volatile int32_t t26 = -382965697;

    t26 = ((x153==(x154*x155))>x156);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x166 = 57404LLU;
	int64_t x167 = 104340887357135433LL;
	volatile int64_t x168 = -2750676504105755LL;
	volatile int32_t t27 = -112;

    t27 = ((x165==(x166*x167))>x168);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x169 = 26U;
	int16_t x170 = INT16_MIN;
	int32_t x171 = -14;
	int32_t x172 = 737683377;

    t28 = ((x169==(x170*x171))>x172);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x181 = INT32_MIN;
	static uint64_t x182 = 761LLU;
	volatile uint64_t x183 = 119148892418760956LLU;
	volatile int32_t x184 = INT32_MAX;
	static int32_t t29 = 19667;

    t29 = ((x181==(x182*x183))>x184);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x185 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	volatile int32_t x188 = -1;
	volatile int32_t t30 = -2177239;

    t30 = ((x185==(x186*x187))>x188);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x193 = 40U;
	volatile uint16_t x194 = UINT16_MAX;
	int8_t x195 = INT8_MAX;
	int64_t x196 = INT64_MIN;
	static int32_t t31 = 110;

    t31 = ((x193==(x194*x195))>x196);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x197 = 1083U;
	uint64_t x198 = UINT64_MAX;
	int16_t x200 = INT16_MIN;
	int32_t t32 = 2;

    t32 = ((x197==(x198*x199))>x200);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x205 = -1;
	int16_t x207 = -4;
	uint64_t x208 = 11976LLU;
	int32_t t33 = -29380965;

    t33 = ((x205==(x206*x207))>x208);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x216 = INT8_MIN;

    t34 = ((x213==(x214*x215))>x216);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x225 = INT16_MIN;
	uint16_t x226 = UINT16_MAX;
	int32_t x227 = 15452;
	static int8_t x228 = INT8_MIN;

    t35 = ((x225==(x226*x227))>x228);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x229 = INT8_MAX;
	volatile int16_t x230 = -1;
	uint32_t x231 = 0U;
	int8_t x232 = 6;
	volatile int32_t t36 = -129830684;

    t36 = ((x229==(x230*x231))>x232);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x241 = 370381LLU;
	uint16_t x243 = UINT16_MAX;
	uint8_t x244 = UINT8_MAX;
	int32_t t37 = 987;

    t37 = ((x241==(x242*x243))>x244);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x245 = UINT64_MAX;
	int8_t x246 = INT8_MAX;
	int8_t x247 = INT8_MAX;
	int8_t x248 = INT8_MAX;
	volatile int32_t t38 = -989349362;

    t38 = ((x245==(x246*x247))>x248);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x253 = INT16_MIN;
	uint32_t x256 = 12190881U;
	volatile int32_t t39 = -308196588;

    t39 = ((x253==(x254*x255))>x256);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x257 = INT64_MAX;
	int8_t x258 = INT8_MIN;
	uint32_t x260 = 41983762U;
	int32_t t40 = 17020670;

    t40 = ((x257==(x258*x259))>x260);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x262 = 6239496866706518LLU;
	int16_t x264 = INT16_MIN;
	int32_t t41 = -2;

    t41 = ((x261==(x262*x263))>x264);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x265 = INT16_MIN;
	static int16_t x267 = INT16_MIN;
	int32_t x268 = -12786;
	volatile int32_t t42 = 703778472;

    t42 = ((x265==(x266*x267))>x268);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x270 = 1946;
	int16_t x271 = -1;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t43 = -17;

    t43 = ((x269==(x270*x271))>x272);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x277 = 6U;
	volatile int8_t x278 = 5;
	static int64_t x279 = -1LL;
	int16_t x280 = INT16_MIN;
	static int32_t t44 = -1;

    t44 = ((x277==(x278*x279))>x280);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x281 = 14U;
	static uint8_t x282 = 41U;
	int8_t x284 = INT8_MAX;
	volatile int32_t t45 = 230340;

    t45 = ((x281==(x282*x283))>x284);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x285 = -1;
	int32_t x286 = INT32_MIN;
	int64_t x288 = -13817LL;
	volatile int32_t t46 = 3;

    t46 = ((x285==(x286*x287))>x288);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x291 = UINT64_MAX;
	static int16_t x292 = INT16_MAX;

    t47 = ((x289==(x290*x291))>x292);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x293 = 1337509U;
	uint8_t x294 = 4U;
	static int64_t x296 = -110LL;
	volatile int32_t t48 = -426649627;

    t48 = ((x293==(x294*x295))>x296);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x301 = INT8_MAX;
	uint16_t x303 = 7993U;
	uint8_t x304 = 50U;
	int32_t t49 = -693261728;

    t49 = ((x301==(x302*x303))>x304);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x305 = INT64_MAX;
	int16_t x308 = INT16_MAX;
	int32_t t50 = -34;

    t50 = ((x305==(x306*x307))>x308);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x309 = -7;
	uint8_t x310 = UINT8_MAX;
	uint32_t x311 = 35562957U;
	int32_t t51 = -132;

    t51 = ((x309==(x310*x311))>x312);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x313 = INT8_MAX;
	uint64_t x314 = 2872214LLU;
	volatile int32_t x315 = INT32_MAX;
	int16_t x316 = INT16_MIN;
	int32_t t52 = -17;

    t52 = ((x313==(x314*x315))>x316);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x321 = -3;
	volatile int32_t x322 = INT32_MIN;
	uint64_t x323 = UINT64_MAX;
	uint8_t x324 = 1U;

    t53 = ((x321==(x322*x323))>x324);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x330 = -547680651;
	volatile int16_t x331 = -1;
	volatile int16_t x332 = -1;
	volatile int32_t t54 = -185;

    t54 = ((x329==(x330*x331))>x332);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	int32_t x339 = INT32_MIN;
	int8_t x340 = INT8_MIN;

    t55 = ((x337==(x338*x339))>x340);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x343 = -1;
	uint8_t x344 = UINT8_MAX;

    t56 = ((x341==(x342*x343))>x344);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x345 = -1LL;
	uint64_t x346 = 15486896125605818LLU;
	static uint8_t x347 = 15U;
	int16_t x348 = INT16_MIN;
	static int32_t t57 = 10115019;

    t57 = ((x345==(x346*x347))>x348);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x349 = 11;
	int8_t x350 = -1;
	volatile int32_t x351 = 70;
	static int32_t x352 = INT32_MIN;
	static int32_t t58 = 21;

    t58 = ((x349==(x350*x351))>x352);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x354 = INT8_MAX;
	static int16_t x355 = -1;
	int8_t x356 = 1;

    t59 = ((x353==(x354*x355))>x356);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x358 = INT32_MIN;
	uint8_t x359 = 1U;
	int8_t x360 = 15;
	static volatile int32_t t60 = -3;

    t60 = ((x357==(x358*x359))>x360);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x361 = -1;
	int8_t x363 = -1;
	int16_t x364 = INT16_MAX;
	static volatile int32_t t61 = -855;

    t61 = ((x361==(x362*x363))>x364);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x370 = 322;
	uint32_t x371 = 358571493U;
	volatile int16_t x372 = -55;
	int32_t t62 = 32;

    t62 = ((x369==(x370*x371))>x372);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x377 = UINT16_MAX;
	uint64_t x378 = 2282691365150665510LLU;
	int16_t x379 = -1;
	int32_t x380 = INT32_MAX;
	static volatile int32_t t63 = -43;

    t63 = ((x377==(x378*x379))>x380);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x381 = 657U;
	uint32_t x382 = 12895U;
	static int8_t x383 = 0;
	int32_t t64 = -57;

    t64 = ((x381==(x382*x383))>x384);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x386 = INT16_MIN;
	uint8_t x387 = 14U;
	uint8_t x388 = UINT8_MAX;

    t65 = ((x385==(x386*x387))>x388);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x405 = -1;
	uint32_t x406 = 32U;
	int32_t x407 = -4919;
	int8_t x408 = INT8_MIN;
	volatile int32_t t66 = 59768;

    t66 = ((x405==(x406*x407))>x408);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x413 = INT8_MIN;
	static int32_t x414 = INT32_MAX;
	int64_t x416 = INT64_MIN;
	int32_t t67 = -1;

    t67 = ((x413==(x414*x415))>x416);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x417 = 36367LLU;
	int16_t x418 = 655;
	static int8_t x420 = INT8_MIN;

    t68 = ((x417==(x418*x419))>x420);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x422 = 229352439;
	volatile int32_t x423 = -1;
	int64_t x424 = -1LL;

    t69 = ((x421==(x422*x423))>x424);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x425 = 0;
	uint8_t x426 = 14U;
	int8_t x427 = INT8_MAX;
	int16_t x428 = INT16_MIN;

    t70 = ((x425==(x426*x427))>x428);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x430 = 0;
	static int16_t x431 = -1;
	static uint8_t x432 = 41U;
	int32_t t71 = 839583907;

    t71 = ((x429==(x430*x431))>x432);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x434 = 60U;
	volatile uint64_t x435 = 34329120262382210LLU;
	volatile int16_t x436 = 0;
	volatile int32_t t72 = -3979875;

    t72 = ((x433==(x434*x435))>x436);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x437 = -1;
	static uint32_t x438 = 5661082U;
	volatile int16_t x439 = 4655;
	volatile uint8_t x440 = UINT8_MAX;
	volatile int32_t t73 = 738613;

    t73 = ((x437==(x438*x439))>x440);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x442 = -1;
	static int16_t x443 = INT16_MIN;
	int64_t x444 = INT64_MIN;

    t74 = ((x441==(x442*x443))>x444);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x449 = 242;
	static int64_t x450 = -1LL;
	int64_t x451 = -437LL;
	uint32_t x452 = 3616U;

    t75 = ((x449==(x450*x451))>x452);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x453 = INT16_MIN;
	static uint32_t x454 = UINT32_MAX;
	uint8_t x456 = 62U;
	int32_t t76 = -148;

    t76 = ((x453==(x454*x455))>x456);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x459 = 121000829;
	uint64_t x460 = 4968LLU;
	int32_t t77 = -98654805;

    t77 = ((x457==(x458*x459))>x460);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x461 = INT32_MIN;
	uint8_t x462 = 96U;
	uint8_t x463 = UINT8_MAX;
	volatile int32_t t78 = 552;

    t78 = ((x461==(x462*x463))>x464);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x465 = -240;
	volatile uint64_t x466 = 23993242833LLU;
	int32_t x468 = INT32_MIN;
	volatile int32_t t79 = -141338;

    t79 = ((x465==(x466*x467))>x468);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x469 = 386943LLU;
	int8_t x470 = INT8_MAX;
	int64_t x471 = -1406642LL;
	volatile int16_t x472 = INT16_MIN;

    t80 = ((x469==(x470*x471))>x472);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x477 = INT64_MAX;
	volatile int8_t x479 = 1;
	int32_t x480 = INT32_MAX;
	int32_t t81 = -6;

    t81 = ((x477==(x478*x479))>x480);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x485 = 20;
	int16_t x486 = INT16_MAX;
	int64_t x487 = -1486480657LL;
	uint64_t x488 = 64249007LLU;
	volatile int32_t t82 = 460937;

    t82 = ((x485==(x486*x487))>x488);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x489 = 14U;
	int16_t x490 = 0;
	uint64_t x491 = 87343319466LLU;
	uint16_t x492 = 3393U;
	volatile int32_t t83 = 45;

    t83 = ((x489==(x490*x491))>x492);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x494 = 29U;
	volatile int32_t x495 = -1165;
	volatile int32_t t84 = -139032358;

    t84 = ((x493==(x494*x495))>x496);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x498 = 1312894U;
	uint16_t x500 = 1510U;
	volatile int32_t t85 = 135;

    t85 = ((x497==(x498*x499))>x500);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x505 = INT8_MIN;
	static int32_t x506 = INT32_MAX;
	static uint32_t x507 = UINT32_MAX;
	int32_t x508 = INT32_MAX;
	volatile int32_t t86 = 1;

    t86 = ((x505==(x506*x507))>x508);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x509 = INT32_MIN;
	static int64_t x510 = -1LL;
	int16_t x511 = -4420;
	uint8_t x512 = 6U;
	volatile int32_t t87 = 137496883;

    t87 = ((x509==(x510*x511))>x512);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x517 = UINT8_MAX;
	uint8_t x518 = 0U;
	volatile int32_t t88 = -1087;

    t88 = ((x517==(x518*x519))>x520);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x522 = -1;
	static uint16_t x523 = 93U;
	int16_t x524 = -8;
	volatile int32_t t89 = 630891;

    t89 = ((x521==(x522*x523))>x524);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x527 = 9726U;
	static volatile int32_t t90 = -15;

    t90 = ((x525==(x526*x527))>x528);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x529 = UINT8_MAX;
	int16_t x531 = 1919;
	volatile int8_t x532 = INT8_MIN;
	int32_t t91 = -17430;

    t91 = ((x529==(x530*x531))>x532);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x534 = 6214U;
	volatile int64_t x535 = -1LL;
	static volatile int64_t x536 = 123233389755095LL;

    t92 = ((x533==(x534*x535))>x536);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x541 = INT8_MIN;
	int8_t x544 = INT8_MIN;

    t93 = ((x541==(x542*x543))>x544);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x545 = 42;
	uint32_t x546 = 53116710U;
	volatile int64_t x547 = -1LL;
	int16_t x548 = -1;
	int32_t t94 = -1;

    t94 = ((x545==(x546*x547))>x548);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x549 = INT16_MIN;
	uint8_t x551 = 3U;
	int32_t t95 = -4919462;

    t95 = ((x549==(x550*x551))>x552);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x553 = INT64_MAX;
	volatile int32_t x554 = -702923;
	volatile int64_t x555 = 2172288LL;
	int32_t x556 = -1560426;
	int32_t t96 = 206;

    t96 = ((x553==(x554*x555))>x556);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x557 = -172;
	uint8_t x559 = 0U;
	volatile int32_t x560 = INT32_MIN;

    t97 = ((x557==(x558*x559))>x560);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x561 = -1;
	int8_t x562 = 0;
	volatile int16_t x563 = INT16_MAX;
	static volatile int8_t x564 = INT8_MAX;
	volatile int32_t t98 = -5965;

    t98 = ((x561==(x562*x563))>x564);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x569 = -1;
	static int8_t x570 = -1;
	uint64_t x571 = UINT64_MAX;
	uint64_t x572 = 89LLU;
	int32_t t99 = 584525343;

    t99 = ((x569==(x570*x571))>x572);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x577 = 6U;
	int64_t x578 = -2378034LL;
	volatile uint64_t x579 = 8448LLU;
	int64_t x580 = -1LL;

    t100 = ((x577==(x578*x579))>x580);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x582 = INT16_MIN;
	static int8_t x584 = INT8_MAX;
	static int32_t t101 = 37;

    t101 = ((x581==(x582*x583))>x584);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x585 = -1;
	static int8_t x586 = -1;
	int64_t x587 = 8374056146625LL;
	static int16_t x588 = 1;
	int32_t t102 = 5;

    t102 = ((x585==(x586*x587))>x588);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x593 = 23693U;
	uint8_t x594 = 3U;
	int64_t x595 = 95941LL;
	int32_t x596 = -11013858;
	int32_t t103 = -70;

    t103 = ((x593==(x594*x595))>x596);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x597 = INT8_MAX;
	static volatile uint32_t x599 = UINT32_MAX;
	uint32_t x600 = UINT32_MAX;
	int32_t t104 = 7;

    t104 = ((x597==(x598*x599))>x600);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x602 = -1;
	int32_t x603 = -1616635;
	static int64_t x604 = 63662LL;
	static int32_t t105 = 1392022;

    t105 = ((x601==(x602*x603))>x604);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x605 = 4U;
	volatile int64_t x606 = INT64_MAX;
	int32_t x607 = -1;
	int32_t t106 = -999717808;

    t106 = ((x605==(x606*x607))>x608);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x610 = 4U;
	int16_t x611 = INT16_MAX;
	int32_t t107 = 1;

    t107 = ((x609==(x610*x611))>x612);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x613 = 1;
	volatile uint8_t x614 = 6U;
	int8_t x615 = INT8_MIN;
	volatile int32_t x616 = -468;
	static int32_t t108 = 148414;

    t108 = ((x613==(x614*x615))>x616);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x621 = INT32_MIN;
	int8_t x622 = INT8_MIN;
	int8_t x623 = -1;
	int32_t t109 = -6400;

    t109 = ((x621==(x622*x623))>x624);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x633 = INT8_MIN;
	uint64_t x634 = 10004301332093LLU;
	uint32_t x635 = 612148U;
	static int32_t x636 = INT32_MAX;
	static int32_t t110 = 317;

    t110 = ((x633==(x634*x635))>x636);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x638 = -864;
	uint16_t x639 = UINT16_MAX;
	volatile int64_t x640 = INT64_MIN;
	int32_t t111 = -1031429148;

    t111 = ((x637==(x638*x639))>x640);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x642 = INT32_MAX;
	uint64_t x643 = 142043819LLU;
	uint32_t x644 = 41421481U;
	int32_t t112 = 94621;

    t112 = ((x641==(x642*x643))>x644);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x646 = -209;
	uint16_t x647 = 13U;
	int8_t x648 = INT8_MAX;

    t113 = ((x645==(x646*x647))>x648);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x661 = 28729432LL;
	volatile int64_t x662 = -1LL;
	uint32_t x663 = UINT32_MAX;
	static int16_t x664 = INT16_MIN;
	static volatile int32_t t114 = 3;

    t114 = ((x661==(x662*x663))>x664);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x665 = -1;
	int8_t x666 = INT8_MAX;
	volatile uint8_t x667 = 4U;
	volatile int32_t x668 = -1;
	int32_t t115 = 91983938;

    t115 = ((x665==(x666*x667))>x668);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x678 = -1;
	int32_t x680 = 16;
	volatile int32_t t116 = 16692557;

    t116 = ((x677==(x678*x679))>x680);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x689 = -1;
	int8_t x691 = INT8_MIN;
	static uint64_t x692 = UINT64_MAX;
	volatile int32_t t117 = -51816408;

    t117 = ((x689==(x690*x691))>x692);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x698 = INT16_MIN;
	int8_t x699 = -14;
	static volatile int64_t x700 = 308674440242944342LL;
	volatile int32_t t118 = -898;

    t118 = ((x697==(x698*x699))>x700);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x701 = INT64_MAX;
	uint32_t x702 = 15U;
	uint64_t x704 = 78504990312727322LLU;
	int32_t t119 = 10507;

    t119 = ((x701==(x702*x703))>x704);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x705 = 5;
	static uint64_t x706 = 258617584LLU;
	volatile int16_t x707 = -11;
	uint64_t x708 = UINT64_MAX;
	volatile int32_t t120 = -1109378;

    t120 = ((x705==(x706*x707))>x708);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x709 = INT64_MIN;
	int16_t x710 = -1;
	int32_t t121 = 15;

    t121 = ((x709==(x710*x711))>x712);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x714 = -7646863050LL;
	static int8_t x715 = -20;
	uint64_t x716 = UINT64_MAX;
	int32_t t122 = 2561;

    t122 = ((x713==(x714*x715))>x716);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x721 = INT8_MIN;
	uint16_t x722 = UINT16_MAX;
	static int32_t x723 = -1;
	int32_t x724 = -1;
	int32_t t123 = -4501925;

    t123 = ((x721==(x722*x723))>x724);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x730 = INT16_MIN;
	uint64_t x731 = 100666575342996LLU;
	int16_t x732 = -1;
	int32_t t124 = 563932960;

    t124 = ((x729==(x730*x731))>x732);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x733 = -1;
	volatile uint8_t x734 = 21U;
	int16_t x735 = 510;
	int64_t x736 = 52431LL;

    t125 = ((x733==(x734*x735))>x736);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x737 = 7540U;
	uint64_t x739 = UINT64_MAX;
	volatile int16_t x740 = INT16_MIN;
	int32_t t126 = -595;

    t126 = ((x737==(x738*x739))>x740);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x741 = 36U;
	uint8_t x742 = 108U;
	int32_t x743 = -81456;
	int64_t x744 = -1LL;

    t127 = ((x741==(x742*x743))>x744);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x745 = UINT8_MAX;
	int64_t x746 = -1LL;
	uint32_t x748 = UINT32_MAX;
	static int32_t t128 = 1969;

    t128 = ((x745==(x746*x747))>x748);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x749 = UINT32_MAX;
	uint32_t x750 = 488001U;
	volatile int32_t x751 = INT32_MIN;
	uint64_t x752 = UINT64_MAX;
	static volatile int32_t t129 = 72380;

    t129 = ((x749==(x750*x751))>x752);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x753 = INT64_MAX;
	static uint64_t x754 = UINT64_MAX;
	int8_t x755 = 0;

    t130 = ((x753==(x754*x755))>x756);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x762 = 0U;
	int32_t x763 = -1;
	static int32_t x764 = INT32_MIN;
	volatile int32_t t131 = 21243657;

    t131 = ((x761==(x762*x763))>x764);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x765 = INT32_MIN;
	int32_t x766 = -1;
	int64_t x767 = INT64_MAX;
	static uint32_t x768 = 26635U;
	int32_t t132 = -17824;

    t132 = ((x765==(x766*x767))>x768);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x769 = INT8_MIN;
	uint32_t x771 = UINT32_MAX;
	int64_t x772 = -1LL;
	static volatile int32_t t133 = 1335637;

    t133 = ((x769==(x770*x771))>x772);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x773 = 0;
	volatile uint32_t x774 = 185302U;
	int16_t x775 = INT16_MIN;
	uint16_t x776 = 302U;

    t134 = ((x773==(x774*x775))>x776);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x777 = INT16_MIN;
	volatile int8_t x778 = INT8_MIN;
	uint64_t x780 = 92008720473196LLU;
	int32_t t135 = 2923;

    t135 = ((x777==(x778*x779))>x780);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x785 = INT64_MAX;
	static int64_t x787 = 8427297754441LL;
	int32_t x788 = -400528094;
	int32_t t136 = 0;

    t136 = ((x785==(x786*x787))>x788);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x789 = 0U;
	int16_t x790 = INT16_MIN;
	int8_t x791 = INT8_MIN;
	volatile int16_t x792 = INT16_MIN;
	volatile int32_t t137 = 968;

    t137 = ((x789==(x790*x791))>x792);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x793 = 14;
	uint32_t x795 = 1018057U;
	volatile uint32_t x796 = 3U;

    t138 = ((x793==(x794*x795))>x796);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x801 = -1;
	volatile int8_t x803 = -1;
	static uint16_t x804 = 21U;

    t139 = ((x801==(x802*x803))>x804);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x806 = INT8_MAX;
	uint8_t x807 = UINT8_MAX;

    t140 = ((x805==(x806*x807))>x808);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x813 = -1LL;
	int64_t x814 = -6501LL;
	int16_t x815 = 5;
	static int16_t x816 = INT16_MIN;
	int32_t t141 = -35906404;

    t141 = ((x813==(x814*x815))>x816);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x817 = INT32_MIN;
	static volatile int32_t x818 = -1;
	int16_t x819 = -1;
	volatile int8_t x820 = INT8_MIN;
	volatile int32_t t142 = -544;

    t142 = ((x817==(x818*x819))>x820);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x821 = INT8_MIN;
	uint8_t x822 = 15U;
	volatile int64_t x823 = -1LL;
	int8_t x824 = -2;
	volatile int32_t t143 = -46057;

    t143 = ((x821==(x822*x823))>x824);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x825 = UINT64_MAX;
	int16_t x826 = 1;
	static uint8_t x827 = 9U;

    t144 = ((x825==(x826*x827))>x828);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x829 = 995321443;
	volatile uint64_t x830 = 490065LLU;
	static int64_t x831 = -1LL;
	int32_t x832 = INT32_MIN;

    t145 = ((x829==(x830*x831))>x832);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x833 = INT32_MAX;
	uint32_t x835 = UINT32_MAX;
	static volatile int32_t t146 = 7615338;

    t146 = ((x833==(x834*x835))>x836);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x837 = -1LL;
	volatile uint8_t x840 = 1U;

    t147 = ((x837==(x838*x839))>x840);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x845 = -4378430043667893692LL;
	volatile uint16_t x846 = 967U;
	volatile uint64_t x847 = 1788347LLU;
	int32_t t148 = 1251433;

    t148 = ((x845==(x846*x847))>x848);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x850 = 1U;
	volatile int8_t x852 = INT8_MIN;
	static int32_t t149 = 1240;

    t149 = ((x849==(x850*x851))>x852);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x853 = 58;
	int64_t x854 = INT64_MAX;
	volatile uint16_t x856 = 266U;
	static int32_t t150 = -2;

    t150 = ((x853==(x854*x855))>x856);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint8_t x859 = UINT8_MAX;
	static volatile uint32_t x860 = 3U;
	int32_t t151 = 4;

    t151 = ((x857==(x858*x859))>x860);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x861 = -1;
	static volatile uint8_t x862 = 37U;
	int16_t x863 = INT16_MIN;
	uint8_t x864 = 4U;
	volatile int32_t t152 = -127270;

    t152 = ((x861==(x862*x863))>x864);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x873 = -4;
	uint64_t x874 = UINT64_MAX;
	int32_t x875 = INT32_MIN;
	volatile uint8_t x876 = 0U;
	int32_t t153 = -3358485;

    t153 = ((x873==(x874*x875))>x876);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x880 = UINT32_MAX;
	static volatile int32_t t154 = 3442;

    t154 = ((x877==(x878*x879))>x880);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x881 = 2281804;
	int32_t x882 = -1;
	uint16_t x884 = 54U;
	volatile int32_t t155 = 3;

    t155 = ((x881==(x882*x883))>x884);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x889 = -10;
	uint8_t x890 = UINT8_MAX;
	int8_t x891 = -1;
	uint8_t x892 = 11U;
	volatile int32_t t156 = 24;

    t156 = ((x889==(x890*x891))>x892);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x893 = -1;
	int8_t x894 = INT8_MAX;
	static uint8_t x895 = 10U;
	int32_t x896 = 0;

    t157 = ((x893==(x894*x895))>x896);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x897 = -10334;
	int16_t x898 = INT16_MAX;
	uint8_t x899 = UINT8_MAX;

    t158 = ((x897==(x898*x899))>x900);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x901 = INT8_MIN;
	int32_t x902 = -1;
	volatile uint8_t x903 = UINT8_MAX;
	volatile int8_t x904 = 10;
	int32_t t159 = 113358;

    t159 = ((x901==(x902*x903))>x904);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x905 = 745274;
	static volatile int32_t x907 = -1;
	static uint16_t x908 = 208U;
	int32_t t160 = 136464;

    t160 = ((x905==(x906*x907))>x908);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x909 = -87;
	uint64_t x910 = UINT64_MAX;
	static uint8_t x911 = 0U;
	static int32_t x912 = INT32_MIN;
	int32_t t161 = 0;

    t161 = ((x909==(x910*x911))>x912);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x921 = 89928U;
	uint8_t x922 = UINT8_MAX;
	int8_t x923 = 0;
	static uint8_t x924 = 1U;
	volatile int32_t t162 = 6879;

    t162 = ((x921==(x922*x923))>x924);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x925 = -1LL;
	static volatile int8_t x926 = -1;
	uint16_t x927 = 312U;
	int8_t x928 = -1;
	volatile int32_t t163 = 15159;

    t163 = ((x925==(x926*x927))>x928);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x929 = INT64_MIN;
	volatile int32_t x930 = 1269579;
	int32_t x931 = 3;
	int64_t x932 = 81744373900LL;
	int32_t t164 = 13815;

    t164 = ((x929==(x930*x931))>x932);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x933 = -1;
	int8_t x936 = INT8_MIN;
	volatile int32_t t165 = 27613;

    t165 = ((x933==(x934*x935))>x936);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x937 = 0;
	static int16_t x938 = INT16_MIN;
	uint32_t x939 = 316U;
	int32_t t166 = -967;

    t166 = ((x937==(x938*x939))>x940);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x941 = INT32_MAX;
	int64_t x942 = -1370056679457169LL;
	volatile int32_t t167 = -15381919;

    t167 = ((x941==(x942*x943))>x944);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x946 = -6;
	uint32_t x947 = 0U;

    t168 = ((x945==(x946*x947))>x948);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x949 = UINT16_MAX;
	int32_t x950 = -4754308;
	uint16_t x951 = 101U;
	int16_t x952 = 0;

    t169 = ((x949==(x950*x951))>x952);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x957 = UINT32_MAX;
	int16_t x958 = INT16_MAX;
	uint16_t x959 = UINT16_MAX;
	volatile uint64_t x960 = 3053628159LLU;
	int32_t t170 = -37800126;

    t170 = ((x957==(x958*x959))>x960);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x961 = 26351942U;
	int8_t x962 = 3;
	int32_t t171 = 2613059;

    t171 = ((x961==(x962*x963))>x964);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x975 = INT32_MAX;
	volatile int16_t x976 = -1;

    t172 = ((x973==(x974*x975))>x976);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x993 = INT32_MIN;
	int8_t x994 = 1;
	volatile int32_t x995 = INT32_MIN;
	uint8_t x996 = 0U;
	static int32_t t173 = -1;

    t173 = ((x993==(x994*x995))>x996);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x997 = -1396946LL;
	uint8_t x998 = 1U;
	uint32_t x1000 = UINT32_MAX;
	volatile int32_t t174 = 809399053;

    t174 = ((x997==(x998*x999))>x1000);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1001 = 191;
	uint32_t x1003 = UINT32_MAX;
	int16_t x1004 = INT16_MIN;

    t175 = ((x1001==(x1002*x1003))>x1004);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x1005 = 533U;
	uint64_t x1006 = 15888701305064780LLU;
	static int16_t x1007 = INT16_MAX;
	static int16_t x1008 = 1;
	static volatile int32_t t176 = -11779;

    t176 = ((x1005==(x1006*x1007))>x1008);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1010 = INT32_MIN;
	uint32_t x1011 = 350985138U;
	volatile int32_t t177 = -1163339;

    t177 = ((x1009==(x1010*x1011))>x1012);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x1013 = INT64_MIN;
	uint32_t x1015 = 184464U;
	int32_t t178 = -44;

    t178 = ((x1013==(x1014*x1015))>x1016);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x1017 = UINT64_MAX;
	static uint32_t x1019 = UINT32_MAX;
	volatile uint64_t x1020 = UINT64_MAX;
	int32_t t179 = 75;

    t179 = ((x1017==(x1018*x1019))>x1020);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x1021 = -11LL;
	volatile int64_t x1022 = -1LL;
	int32_t x1023 = INT32_MIN;
	static int64_t x1024 = INT64_MIN;
	volatile int32_t t180 = 11608553;

    t180 = ((x1021==(x1022*x1023))>x1024);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x1029 = INT8_MIN;
	int8_t x1031 = -1;
	uint8_t x1032 = 7U;
	volatile int32_t t181 = -276316001;

    t181 = ((x1029==(x1030*x1031))>x1032);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x1038 = INT8_MAX;
	uint16_t x1040 = 15U;
	volatile int32_t t182 = 2907545;

    t182 = ((x1037==(x1038*x1039))>x1040);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x1041 = 29U;
	int64_t x1042 = -1LL;
	volatile uint32_t x1043 = 515U;
	volatile int32_t t183 = -60228;

    t183 = ((x1041==(x1042*x1043))>x1044);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x1045 = 2;
	static uint16_t x1046 = 3956U;
	uint16_t x1047 = UINT16_MAX;
	uint64_t x1048 = 1324016531059LLU;

    t184 = ((x1045==(x1046*x1047))>x1048);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x1049 = INT8_MIN;
	int16_t x1052 = INT16_MIN;
	volatile int32_t t185 = 1;

    t185 = ((x1049==(x1050*x1051))>x1052);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1059 = INT8_MAX;
	volatile uint8_t x1060 = 12U;
	volatile int32_t t186 = -3;

    t186 = ((x1057==(x1058*x1059))>x1060);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1061 = -436078LL;
	int16_t x1062 = 7;
	static int16_t x1063 = INT16_MIN;
	static int8_t x1064 = INT8_MIN;

    t187 = ((x1061==(x1062*x1063))>x1064);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1065 = UINT64_MAX;
	volatile uint16_t x1066 = 6020U;
	uint8_t x1067 = UINT8_MAX;
	int16_t x1068 = INT16_MIN;
	volatile int32_t t188 = -3411;

    t188 = ((x1065==(x1066*x1067))>x1068);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1069 = 20U;
	uint32_t x1070 = UINT32_MAX;
	int8_t x1072 = -21;
	int32_t t189 = -1965088;

    t189 = ((x1069==(x1070*x1071))>x1072);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x1073 = 538872;

    t190 = ((x1073==(x1074*x1075))>x1076);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1078 = 0;
	volatile uint16_t x1079 = UINT16_MAX;
	int32_t x1080 = INT32_MAX;

    t191 = ((x1077==(x1078*x1079))>x1080);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1081 = -1;
	static volatile int16_t x1082 = -45;
	uint64_t x1083 = UINT64_MAX;
	int32_t x1084 = 1629;
	int32_t t192 = -2652;

    t192 = ((x1081==(x1082*x1083))>x1084);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1085 = 1U;
	uint64_t x1086 = UINT64_MAX;
	int16_t x1087 = INT16_MAX;
	int32_t x1088 = -1;
	volatile int32_t t193 = 625;

    t193 = ((x1085==(x1086*x1087))>x1088);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x1089 = UINT64_MAX;
	uint64_t x1091 = 1072209LLU;
	volatile int8_t x1092 = -1;
	int32_t t194 = -7544;

    t194 = ((x1089==(x1090*x1091))>x1092);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1097 = UINT16_MAX;
	uint8_t x1098 = 10U;
	volatile int32_t t195 = 1;

    t195 = ((x1097==(x1098*x1099))>x1100);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1101 = INT32_MAX;
	static int8_t x1102 = 0;
	int16_t x1103 = -989;
	int32_t t196 = -7056;

    t196 = ((x1101==(x1102*x1103))>x1104);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1114 = UINT16_MAX;
	volatile uint16_t x1115 = 1138U;
	int64_t x1116 = INT64_MIN;
	int32_t t197 = -3;

    t197 = ((x1113==(x1114*x1115))>x1116);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1117 = -41621158;
	int16_t x1119 = -48;
	uint8_t x1120 = 8U;
	volatile int32_t t198 = 2637931;

    t198 = ((x1117==(x1118*x1119))>x1120);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1121 = UINT8_MAX;
	int16_t x1122 = 1;
	int8_t x1123 = -1;
	uint16_t x1124 = UINT16_MAX;
	int32_t t199 = 346448857;

    t199 = ((x1121==(x1122*x1123))>x1124);

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

