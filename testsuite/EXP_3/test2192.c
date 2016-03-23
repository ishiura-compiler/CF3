
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

uint16_t x3 = 96U;
static int16_t x15 = INT16_MIN;
static int8_t x17 = -1;
volatile int16_t x23 = 2449;
int32_t x24 = INT32_MAX;
int16_t x25 = INT16_MIN;
int8_t x39 = INT8_MIN;
int32_t t8 = -754873968;
volatile int8_t x45 = -1;
int64_t x52 = -1LL;
int32_t t12 = 2;
uint8_t x85 = 10U;
int64_t x87 = -698474529336LL;
static int8_t x88 = -10;
uint64_t x94 = UINT64_MAX;
volatile int32_t t20 = -63480081;
volatile int32_t t22 = 64;
static volatile uint8_t x126 = UINT8_MAX;
static uint64_t x140 = UINT64_MAX;
volatile int16_t x142 = INT16_MIN;
uint32_t x144 = 68777U;
int32_t t27 = 2466;
static int32_t x149 = 2;
volatile int16_t x150 = INT16_MAX;
int64_t x151 = -1LL;
int32_t t29 = 248260;
int32_t x164 = INT32_MIN;
uint8_t x171 = UINT8_MAX;
volatile int32_t t33 = 22869756;
uint32_t x176 = UINT32_MAX;
volatile int8_t x182 = 0;
uint8_t x185 = UINT8_MAX;
static int16_t x188 = INT16_MIN;
int8_t x201 = -1;
int32_t t38 = 1;
uint32_t x210 = 362121557U;
int32_t x211 = -257986917;
volatile int32_t t40 = -15;
volatile int16_t x229 = INT16_MIN;
uint32_t x238 = 888U;
static volatile int32_t t46 = 67357;
volatile uint16_t x257 = 0U;
int64_t x259 = -1LL;
static uint8_t x260 = UINT8_MAX;
volatile int64_t x271 = 8282690LL;
int16_t x277 = INT16_MAX;
volatile int32_t t52 = -240513434;
int8_t x293 = INT8_MIN;
int64_t x295 = INT64_MIN;
int32_t t55 = 23;
uint32_t x298 = UINT32_MAX;
int64_t x305 = -1LL;
volatile int16_t x322 = 1;
volatile int32_t x323 = INT32_MIN;
uint64_t x329 = 6000125742928289985LLU;
int64_t x330 = 6557746814675587LL;
uint64_t x331 = UINT64_MAX;
uint64_t x337 = 223514406563275012LLU;
int16_t x339 = INT16_MIN;
static volatile int64_t x342 = -1LL;
uint64_t x344 = 3684057811903449LLU;
static int32_t t65 = -6599234;
uint32_t x349 = UINT32_MAX;
uint8_t x353 = 9U;
int16_t x357 = INT16_MIN;
int16_t x362 = -1;
static uint32_t x363 = 1488535U;
volatile int16_t x372 = -1;
int8_t x377 = -1;
static volatile int32_t x378 = INT32_MAX;
uint64_t x384 = 4922901643684563050LLU;
int32_t t73 = -7252751;
int32_t x401 = -1;
static volatile uint32_t x411 = 59632U;
volatile int32_t t78 = 7805142;
int16_t x414 = 1;
int64_t x416 = INT64_MIN;
static uint64_t x423 = 3LLU;
int32_t t80 = -14067610;
uint16_t x426 = 1710U;
volatile int32_t t81 = -1668130;
uint16_t x429 = 518U;
int16_t x433 = INT16_MIN;
int16_t x438 = INT16_MIN;
static int16_t x439 = INT16_MAX;
volatile int32_t t85 = -846;
uint32_t x452 = UINT32_MAX;
int32_t t87 = 154;
volatile int32_t t88 = 133496014;
static int32_t x462 = 68;
static int64_t x463 = -533359377871654LL;
static volatile int32_t t89 = 1250;
static volatile uint32_t x465 = UINT32_MAX;
int64_t x466 = -24560LL;
volatile uint32_t x488 = 161U;
uint8_t x495 = UINT8_MAX;
int32_t t98 = -3;
volatile uint32_t x531 = UINT32_MAX;
volatile int32_t t101 = 5051694;
int8_t x542 = INT8_MIN;
volatile int8_t x543 = 13;
int32_t t103 = 583164769;
int16_t x550 = INT16_MIN;
int64_t x560 = INT64_MAX;
static int32_t t105 = 336;
volatile int16_t x561 = INT16_MAX;
int8_t x562 = -3;
int64_t x563 = INT64_MAX;
volatile int64_t x568 = INT64_MAX;
int16_t x569 = -27;
int64_t x572 = -41076185LL;
uint8_t x582 = 13U;
uint64_t x595 = 576824607338LLU;
volatile uint16_t x600 = 609U;
uint32_t x601 = 11U;
static int16_t x603 = 12027;
int32_t x604 = -1;
int32_t x608 = 190;
volatile uint64_t x609 = 123552847LLU;
static int32_t x614 = INT32_MIN;
volatile int8_t x618 = INT8_MIN;
int8_t x624 = -6;
volatile int8_t x625 = INT8_MIN;
volatile int8_t x629 = -1;
int16_t x638 = INT16_MIN;
int64_t x639 = 4418583288672069963LL;
static int32_t t122 = -854;
volatile int32_t x641 = INT32_MIN;
volatile uint64_t x643 = UINT64_MAX;
int8_t x664 = -1;
int8_t x666 = INT8_MIN;
uint64_t x667 = 27LLU;
int64_t x668 = INT64_MIN;
int8_t x685 = -1;
int8_t x687 = INT8_MIN;
int8_t x689 = INT8_MIN;
int32_t x710 = 914487;
static uint8_t x713 = 6U;
int8_t x719 = INT8_MIN;
volatile int64_t x723 = -1LL;
volatile int32_t t135 = -236080281;
static int64_t x727 = 458198550158672367LL;
static uint8_t x728 = 37U;
static uint32_t x731 = 3U;
int32_t x746 = 0;
static int32_t t139 = -7620;
volatile uint8_t x762 = UINT8_MAX;
int8_t x766 = -1;
uint64_t x769 = 6249LLU;
uint8_t x776 = UINT8_MAX;
static int64_t x777 = -1LL;
int64_t x782 = 623266170748LL;
static volatile int64_t x783 = INT64_MIN;
static volatile int8_t x787 = -1;
int16_t x789 = -1;
volatile int64_t x791 = -1LL;
static int32_t t149 = 5493;
uint64_t x794 = 157942524333678LLU;
volatile int32_t t151 = -1;
static volatile int8_t x810 = INT8_MIN;
static int32_t t153 = -436372;
uint8_t x825 = 39U;
int32_t x828 = INT32_MAX;
volatile int32_t t157 = 910919;
static volatile int32_t x839 = INT32_MAX;
uint32_t x853 = UINT32_MAX;
int32_t t160 = 0;
static int8_t x863 = INT8_MIN;
int64_t x870 = -5372224317LL;
static int32_t x891 = INT32_MIN;
int64_t x892 = INT64_MAX;
volatile int32_t t167 = 56114;
int8_t x903 = 5;
uint16_t x916 = 946U;
int16_t x917 = INT16_MIN;
volatile int64_t x919 = -1LL;
static int32_t x920 = 267336605;
int32_t t171 = -69733805;
int16_t x937 = -502;
int16_t x940 = INT16_MIN;
static int16_t x943 = -1;
int8_t x944 = 1;
int16_t x967 = 51;
int8_t x978 = 57;
uint64_t x985 = 4547410LLU;
uint8_t x990 = 29U;
static volatile uint64_t x1002 = 454974645LLU;
volatile int8_t x1007 = INT8_MAX;
volatile int64_t x1008 = INT64_MIN;
static uint64_t x1013 = 1LLU;
int64_t x1016 = INT64_MAX;
volatile uint64_t x1017 = 90726326490045089LLU;
int64_t x1019 = 1LL;
int8_t x1020 = -6;
int16_t x1028 = INT16_MIN;
static int16_t x1029 = -1;
static volatile uint16_t x1033 = UINT16_MAX;
static volatile uint64_t x1037 = UINT64_MAX;
volatile int16_t x1050 = 60;
static volatile int32_t t195 = 6;
static volatile int16_t x1054 = -1;
static int8_t x1059 = -7;
static uint32_t x1076 = UINT32_MAX;
volatile int32_t t198 = 852;
int32_t t199 = 734623;


void f0(void) {
    	static int8_t x1 = 8;
	volatile int8_t x2 = INT8_MIN;
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 484815;

    t0 = ((x1*x2)==(x3&x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 80;
	int32_t x6 = -1;
	uint16_t x7 = UINT16_MAX;
	uint64_t x8 = 21113342421LLU;
	int32_t t1 = -2516557;

    t1 = ((x5*x6)==(x7&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -235;
	static uint64_t x14 = 646370608223563311LLU;
	int8_t x16 = 1;
	int32_t t2 = 1;

    t2 = ((x13*x14)==(x15&x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x18 = -79;
	uint8_t x19 = 1U;
	static int8_t x20 = -1;
	int32_t t3 = -12479;

    t3 = ((x17*x18)==(x19&x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = -1;
	static int32_t x22 = INT32_MAX;
	int32_t t4 = -1;

    t4 = ((x21*x22)==(x23&x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x26 = 1U;
	int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t5 = -6043503;

    t5 = ((x25*x26)==(x27&x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = 9702990LLU;
	static uint8_t x30 = 8U;
	static int16_t x31 = 961;
	static int64_t x32 = INT64_MIN;
	int32_t t6 = 18472895;

    t6 = ((x29*x30)==(x31&x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MAX;
	volatile int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MAX;
	volatile int64_t x36 = INT64_MIN;
	volatile int32_t t7 = 3;

    t7 = ((x33*x34)==(x35&x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = INT16_MAX;
	int64_t x38 = -1LL;
	volatile uint32_t x40 = UINT32_MAX;

    t8 = ((x37*x38)==(x39&x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x46 = 293780557431138789LLU;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t9 = -5467253;

    t9 = ((x45*x46)==(x47&x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = -1;
	static int32_t x50 = 1;
	int64_t x51 = INT64_MIN;
	volatile int32_t t10 = -5167873;

    t10 = ((x49*x50)==(x51&x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x61 = -1;
	static volatile uint16_t x62 = 1039U;
	volatile uint16_t x63 = 17U;
	int64_t x64 = 3295176811786LL;
	int32_t t11 = 142;

    t11 = ((x61*x62)==(x63&x64));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x65 = INT16_MAX;
	int8_t x66 = -1;
	int16_t x67 = INT16_MIN;
	int8_t x68 = 54;

    t12 = ((x65*x66)==(x67&x68));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x69 = 355213778LLU;
	static volatile int64_t x70 = -1LL;
	int16_t x71 = -1;
	static uint8_t x72 = UINT8_MAX;
	int32_t t13 = -3005560;

    t13 = ((x69*x70)==(x71&x72));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x73 = -24LL;
	uint64_t x74 = 200350826833782330LLU;
	static uint64_t x75 = 9206952054LLU;
	volatile int32_t x76 = INT32_MIN;
	int32_t t14 = -6;

    t14 = ((x73*x74)==(x75&x76));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x77 = INT32_MIN;
	volatile uint32_t x78 = UINT32_MAX;
	int8_t x79 = INT8_MIN;
	int64_t x80 = 59411214306LL;
	int32_t t15 = 3;

    t15 = ((x77*x78)==(x79&x80));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x81 = -1227;
	int16_t x82 = INT16_MAX;
	int32_t x83 = 43606444;
	int8_t x84 = 5;
	int32_t t16 = -84786;

    t16 = ((x81*x82)==(x83&x84));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x86 = INT16_MIN;
	volatile int32_t t17 = 316425;

    t17 = ((x85*x86)==(x87&x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x93 = -2805;
	static volatile int8_t x95 = INT8_MAX;
	int16_t x96 = -6;
	int32_t t18 = 10;

    t18 = ((x93*x94)==(x95&x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x97 = 97544667369LLU;
	static uint64_t x98 = UINT64_MAX;
	int64_t x99 = INT64_MIN;
	int16_t x100 = -1;
	volatile int32_t t19 = 40;

    t19 = ((x97*x98)==(x99&x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x105 = -1;
	int64_t x106 = -1LL;
	int16_t x107 = -2;
	static uint16_t x108 = 6403U;

    t20 = ((x105*x106)==(x107&x108));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = INT16_MIN;
	static volatile int16_t x110 = 6;
	int8_t x111 = INT8_MAX;
	static uint16_t x112 = 17U;
	volatile int32_t t21 = 78480;

    t21 = ((x109*x110)==(x111&x112));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x113 = -2462;
	uint32_t x114 = 1704U;
	static uint32_t x115 = 2184064U;
	int8_t x116 = INT8_MIN;

    t22 = ((x113*x114)==(x115&x116));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x121 = 34;
	int8_t x122 = 0;
	uint16_t x123 = UINT16_MAX;
	uint8_t x124 = 5U;
	int32_t t23 = 873537;

    t23 = ((x121*x122)==(x123&x124));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x125 = INT16_MAX;
	static int16_t x127 = -1;
	int32_t x128 = -230;
	int32_t t24 = -110181;

    t24 = ((x125*x126)==(x127&x128));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x133 = UINT64_MAX;
	uint16_t x134 = UINT16_MAX;
	volatile int32_t x135 = INT32_MIN;
	uint64_t x136 = UINT64_MAX;
	int32_t t25 = -7384;

    t25 = ((x133*x134)==(x135&x136));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x137 = UINT16_MAX;
	static volatile uint8_t x138 = 0U;
	volatile int64_t x139 = INT64_MIN;
	int32_t t26 = 310735868;

    t26 = ((x137*x138)==(x139&x140));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x141 = 1;
	int64_t x143 = -3847688LL;

    t27 = ((x141*x142)==(x143&x144));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x145 = 76U;
	static int64_t x146 = 108LL;
	int32_t x147 = -1;
	int64_t x148 = INT64_MIN;
	int32_t t28 = -2791;

    t28 = ((x145*x146)==(x147&x148));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x152 = 190717LL;

    t29 = ((x149*x150)==(x151&x152));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x153 = 60;
	int16_t x154 = 36;
	volatile int64_t x155 = -1LL;
	static uint64_t x156 = 88111564744LLU;
	static volatile int32_t t30 = -17252205;

    t30 = ((x153*x154)==(x155&x156));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x161 = INT8_MIN;
	static uint32_t x162 = 390716459U;
	int16_t x163 = INT16_MIN;
	static int32_t t31 = -126;

    t31 = ((x161*x162)==(x163&x164));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x165 = -24;
	int64_t x166 = 41816LL;
	uint16_t x167 = UINT16_MAX;
	int32_t x168 = INT32_MIN;
	int32_t t32 = -1367;

    t32 = ((x165*x166)==(x167&x168));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x169 = -1;
	int8_t x170 = 1;
	uint16_t x172 = UINT16_MAX;

    t33 = ((x169*x170)==(x171&x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x173 = UINT16_MAX;
	static int8_t x174 = INT8_MIN;
	uint64_t x175 = UINT64_MAX;
	volatile int32_t t34 = 8101;

    t34 = ((x173*x174)==(x175&x176));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x181 = INT16_MAX;
	int32_t x183 = INT32_MIN;
	uint8_t x184 = 7U;
	static volatile int32_t t35 = -673691797;

    t35 = ((x181*x182)==(x183&x184));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x186 = 102208463LLU;
	uint16_t x187 = 325U;
	static volatile int32_t t36 = 2720498;

    t36 = ((x185*x186)==(x187&x188));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x202 = -1LL;
	int16_t x203 = INT16_MAX;
	uint32_t x204 = UINT32_MAX;
	int32_t t37 = 1743358;

    t37 = ((x201*x202)==(x203&x204));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x205 = INT8_MIN;
	uint16_t x206 = UINT16_MAX;
	volatile int64_t x207 = -1LL;
	static int8_t x208 = -1;

    t38 = ((x205*x206)==(x207&x208));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x209 = -1;
	int64_t x212 = INT64_MIN;
	volatile int32_t t39 = -25;

    t39 = ((x209*x210)==(x211&x212));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x213 = INT8_MIN;
	uint64_t x214 = UINT64_MAX;
	static int32_t x215 = INT32_MAX;
	static int32_t x216 = INT32_MIN;

    t40 = ((x213*x214)==(x215&x216));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x217 = 107U;
	volatile int8_t x218 = INT8_MIN;
	uint64_t x219 = UINT64_MAX;
	uint32_t x220 = 9U;
	volatile int32_t t41 = -11085148;

    t41 = ((x217*x218)==(x219&x220));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x225 = INT16_MIN;
	int8_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MAX;
	volatile int32_t t42 = 286422;

    t42 = ((x225*x226)==(x227&x228));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x230 = -247;
	int64_t x231 = INT64_MAX;
	volatile int16_t x232 = 0;
	int32_t t43 = -14;

    t43 = ((x229*x230)==(x231&x232));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x233 = UINT16_MAX;
	static int16_t x234 = -1;
	volatile int8_t x235 = INT8_MAX;
	int32_t x236 = INT32_MAX;
	volatile int32_t t44 = 1059448229;

    t44 = ((x233*x234)==(x235&x236));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x237 = INT16_MAX;
	int64_t x239 = 180879977LL;
	int64_t x240 = 53113LL;
	volatile int32_t t45 = 126896158;

    t45 = ((x237*x238)==(x239&x240));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x249 = -1;
	static uint8_t x250 = UINT8_MAX;
	static int16_t x251 = 1358;
	int32_t x252 = -1;

    t46 = ((x249*x250)==(x251&x252));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x253 = INT16_MAX;
	int8_t x254 = INT8_MIN;
	uint16_t x255 = UINT16_MAX;
	uint32_t x256 = 114167416U;
	static int32_t t47 = -1635750;

    t47 = ((x253*x254)==(x255&x256));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x258 = 0U;
	int32_t t48 = 40598;

    t48 = ((x257*x258)==(x259&x260));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x261 = -1;
	volatile int16_t x262 = -29;
	int64_t x263 = -1LL;
	volatile uint32_t x264 = UINT32_MAX;
	volatile int32_t t49 = 51170;

    t49 = ((x261*x262)==(x263&x264));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x269 = 4408807634782006LLU;
	int32_t x270 = INT32_MAX;
	volatile int32_t x272 = INT32_MAX;
	volatile int32_t t50 = 440846;

    t50 = ((x269*x270)==(x271&x272));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x273 = INT8_MIN;
	volatile int16_t x274 = -1;
	volatile int64_t x275 = INT64_MIN;
	volatile int64_t x276 = -1LL;
	int32_t t51 = -174024;

    t51 = ((x273*x274)==(x275&x276));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x278 = -1;
	uint8_t x279 = 5U;
	int16_t x280 = 20;

    t52 = ((x277*x278)==(x279&x280));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x281 = -2;
	int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = 27580584U;
	volatile int32_t t53 = -149856;

    t53 = ((x281*x282)==(x283&x284));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x285 = -10949868106532820LL;
	int8_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	static int32_t x288 = -55989;
	volatile int32_t t54 = -17647546;

    t54 = ((x285*x286)==(x287&x288));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x294 = 35377925291627LLU;
	int64_t x296 = 5423217629LL;

    t55 = ((x293*x294)==(x295&x296));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x297 = -61;
	int8_t x299 = INT8_MAX;
	uint32_t x300 = 85260929U;
	volatile int32_t t56 = 131;

    t56 = ((x297*x298)==(x299&x300));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x306 = 0;
	uint64_t x307 = 4117650906153697928LLU;
	int32_t x308 = 5931901;
	int32_t t57 = 1;

    t57 = ((x305*x306)==(x307&x308));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x309 = 0U;
	int32_t x310 = INT32_MIN;
	volatile uint32_t x311 = 338U;
	uint8_t x312 = UINT8_MAX;
	int32_t t58 = -507480241;

    t58 = ((x309*x310)==(x311&x312));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	uint32_t x315 = 1605351159U;
	static int64_t x316 = 4955007838LL;
	int32_t t59 = 3351;

    t59 = ((x313*x314)==(x315&x316));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x317 = 0U;
	int64_t x318 = INT64_MAX;
	int64_t x319 = -1LL;
	int8_t x320 = 8;
	volatile int32_t t60 = 12;

    t60 = ((x317*x318)==(x319&x320));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x321 = 0LLU;
	volatile uint8_t x324 = 0U;
	static volatile int32_t t61 = 100;

    t61 = ((x321*x322)==(x323&x324));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x325 = INT8_MIN;
	volatile uint64_t x326 = 9508LLU;
	static int32_t x327 = 1;
	int16_t x328 = INT16_MAX;
	static int32_t t62 = 164925;

    t62 = ((x325*x326)==(x327&x328));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x332 = -16;
	volatile int32_t t63 = 3;

    t63 = ((x329*x330)==(x331&x332));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x338 = -7748;
	int16_t x340 = INT16_MIN;
	int32_t t64 = -10729;

    t64 = ((x337*x338)==(x339&x340));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x341 = 2846U;
	static int64_t x343 = 5055LL;

    t65 = ((x341*x342)==(x343&x344));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x350 = 17119LLU;
	int8_t x351 = INT8_MAX;
	int32_t x352 = 19;
	int32_t t66 = 325105;

    t66 = ((x349*x350)==(x351&x352));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x354 = 1U;
	static int16_t x355 = INT16_MIN;
	static volatile uint16_t x356 = 5535U;
	volatile int32_t t67 = 20;

    t67 = ((x353*x354)==(x355&x356));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x358 = 0U;
	int16_t x359 = -1;
	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t68 = 31264932;

    t68 = ((x357*x358)==(x359&x360));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x361 = -12732;
	int32_t x364 = INT32_MAX;
	volatile int32_t t69 = 549204;

    t69 = ((x361*x362)==(x363&x364));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x369 = 0;
	static uint32_t x370 = UINT32_MAX;
	int32_t x371 = -1;
	volatile int32_t t70 = 121;

    t70 = ((x369*x370)==(x371&x372));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x373 = INT16_MAX;
	static volatile uint8_t x374 = UINT8_MAX;
	volatile int8_t x375 = -1;
	volatile uint8_t x376 = UINT8_MAX;
	int32_t t71 = 231672954;

    t71 = ((x373*x374)==(x375&x376));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x379 = INT8_MAX;
	int64_t x380 = 494LL;
	volatile int32_t t72 = 52;

    t72 = ((x377*x378)==(x379&x380));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x381 = -3;
	int8_t x382 = INT8_MIN;
	static int32_t x383 = INT32_MAX;

    t73 = ((x381*x382)==(x383&x384));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x385 = -77820347106807119LL;
	static int16_t x386 = 1;
	uint16_t x387 = 1430U;
	int8_t x388 = -9;
	int32_t t74 = 1005876061;

    t74 = ((x385*x386)==(x387&x388));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x393 = INT8_MIN;
	volatile uint8_t x394 = 94U;
	int64_t x395 = INT64_MIN;
	int16_t x396 = -728;
	int32_t t75 = -440;

    t75 = ((x393*x394)==(x395&x396));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x397 = -1LL;
	int8_t x398 = 0;
	int64_t x399 = -1LL;
	uint32_t x400 = UINT32_MAX;
	int32_t t76 = 94;

    t76 = ((x397*x398)==(x399&x400));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x402 = 6;
	uint16_t x403 = 166U;
	int64_t x404 = INT64_MIN;
	volatile int32_t t77 = 31;

    t77 = ((x401*x402)==(x403&x404));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x409 = INT16_MAX;
	int16_t x410 = INT16_MIN;
	volatile int32_t x412 = INT32_MIN;

    t78 = ((x409*x410)==(x411&x412));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x413 = -4;
	uint64_t x415 = 0LLU;
	int32_t t79 = -7;

    t79 = ((x413*x414)==(x415&x416));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint32_t x421 = UINT32_MAX;
	volatile int64_t x422 = -1LL;
	int16_t x424 = -1;

    t80 = ((x421*x422)==(x423&x424));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x425 = -7;
	int32_t x427 = -1;
	int32_t x428 = INT32_MIN;

    t81 = ((x425*x426)==(x427&x428));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x430 = 25538928LL;
	int8_t x431 = INT8_MAX;
	int16_t x432 = INT16_MIN;
	volatile int32_t t82 = 2114;

    t82 = ((x429*x430)==(x431&x432));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x434 = -1LL;
	uint64_t x435 = 658916LLU;
	int32_t x436 = INT32_MIN;
	volatile int32_t t83 = -261691152;

    t83 = ((x433*x434)==(x435&x436));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x437 = UINT16_MAX;
	uint64_t x440 = 3LLU;
	volatile int32_t t84 = 3;

    t84 = ((x437*x438)==(x439&x440));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x441 = INT16_MIN;
	int16_t x442 = 2;
	int64_t x443 = -11757288LL;
	volatile int8_t x444 = INT8_MIN;

    t85 = ((x441*x442)==(x443&x444));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x445 = UINT8_MAX;
	int32_t x446 = -1;
	int16_t x447 = 14838;
	int8_t x448 = -1;
	volatile int32_t t86 = 125;

    t86 = ((x445*x446)==(x447&x448));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x449 = UINT16_MAX;
	int16_t x450 = -1;
	static int16_t x451 = 318;

    t87 = ((x449*x450)==(x451&x452));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x457 = INT8_MIN;
	int16_t x458 = -1;
	int8_t x459 = -1;
	int8_t x460 = INT8_MAX;

    t88 = ((x457*x458)==(x459&x460));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x461 = 723176307383994LLU;
	volatile int16_t x464 = -1;

    t89 = ((x461*x462)==(x463&x464));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x467 = 19;
	uint64_t x468 = UINT64_MAX;
	volatile int32_t t90 = -506808;

    t90 = ((x465*x466)==(x467&x468));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x469 = -24;
	int32_t x470 = -1997;
	int64_t x471 = INT64_MIN;
	static uint16_t x472 = 7419U;
	volatile int32_t t91 = 28;

    t91 = ((x469*x470)==(x471&x472));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x481 = 1590;
	uint8_t x482 = UINT8_MAX;
	volatile uint8_t x483 = 1U;
	static int16_t x484 = INT16_MIN;
	static volatile int32_t t92 = -742647666;

    t92 = ((x481*x482)==(x483&x484));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x485 = INT8_MAX;
	static volatile int16_t x486 = INT16_MAX;
	volatile uint32_t x487 = UINT32_MAX;
	volatile int32_t t93 = 408288101;

    t93 = ((x485*x486)==(x487&x488));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x493 = 7U;
	volatile uint32_t x494 = 2952689U;
	int32_t x496 = INT32_MIN;
	int32_t t94 = -1000971;

    t94 = ((x493*x494)==(x495&x496));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x497 = INT8_MIN;
	int8_t x498 = INT8_MAX;
	int8_t x499 = -1;
	volatile int8_t x500 = 30;
	static volatile int32_t t95 = -236;

    t95 = ((x497*x498)==(x499&x500));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x505 = 0U;
	uint16_t x506 = 143U;
	int16_t x507 = -13221;
	int8_t x508 = INT8_MAX;
	volatile int32_t t96 = 1;

    t96 = ((x505*x506)==(x507&x508));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x509 = UINT8_MAX;
	volatile int16_t x510 = -31;
	int8_t x511 = -58;
	volatile uint8_t x512 = 0U;
	volatile int32_t t97 = 956619;

    t97 = ((x509*x510)==(x511&x512));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x517 = INT64_MIN;
	uint16_t x518 = 1U;
	int16_t x519 = 1;
	int32_t x520 = 363;

    t98 = ((x517*x518)==(x519&x520));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x521 = 820;
	volatile int8_t x522 = INT8_MIN;
	static uint32_t x523 = UINT32_MAX;
	int64_t x524 = INT64_MAX;
	int32_t t99 = 2180452;

    t99 = ((x521*x522)==(x523&x524));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x529 = 37720747LL;
	static uint16_t x530 = 33U;
	uint8_t x532 = UINT8_MAX;
	int32_t t100 = 0;

    t100 = ((x529*x530)==(x531&x532));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x537 = UINT16_MAX;
	int16_t x538 = 3;
	uint16_t x539 = 351U;
	static int16_t x540 = INT16_MIN;

    t101 = ((x537*x538)==(x539&x540));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x541 = INT16_MAX;
	volatile uint64_t x544 = 3500436259829975LLU;
	int32_t t102 = 14;

    t102 = ((x541*x542)==(x543&x544));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x545 = 5448LL;
	volatile int32_t x546 = -841229;
	static volatile int32_t x547 = INT32_MAX;
	int16_t x548 = INT16_MIN;

    t103 = ((x545*x546)==(x547&x548));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x549 = INT8_MAX;
	static volatile uint16_t x551 = UINT16_MAX;
	volatile int8_t x552 = INT8_MAX;
	volatile int32_t t104 = 17430;

    t104 = ((x549*x550)==(x551&x552));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x557 = INT64_MIN;
	uint64_t x558 = 737687139456844LLU;
	int64_t x559 = INT64_MIN;

    t105 = ((x557*x558)==(x559&x560));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x564 = -596449;
	volatile int32_t t106 = -2;

    t106 = ((x561*x562)==(x563&x564));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x565 = INT16_MIN;
	static volatile int64_t x566 = 38LL;
	volatile int16_t x567 = INT16_MIN;
	static int32_t t107 = 2912;

    t107 = ((x565*x566)==(x567&x568));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x570 = UINT64_MAX;
	static int16_t x571 = -168;
	int32_t t108 = 214449;

    t108 = ((x569*x570)==(x571&x572));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x573 = UINT64_MAX;
	static int64_t x574 = INT64_MIN;
	int16_t x575 = INT16_MAX;
	uint16_t x576 = 11871U;
	volatile int32_t t109 = -23280;

    t109 = ((x573*x574)==(x575&x576));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x581 = INT16_MAX;
	int16_t x583 = 689;
	int64_t x584 = -58LL;
	int32_t t110 = 558;

    t110 = ((x581*x582)==(x583&x584));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x593 = INT16_MIN;
	static uint8_t x594 = 97U;
	static volatile uint16_t x596 = UINT16_MAX;
	int32_t t111 = 13479031;

    t111 = ((x593*x594)==(x595&x596));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x597 = 238178639356LLU;
	uint64_t x598 = 951LLU;
	static uint64_t x599 = 6651LLU;
	static int32_t t112 = 36114134;

    t112 = ((x597*x598)==(x599&x600));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x602 = 0;
	int32_t t113 = 623330;

    t113 = ((x601*x602)==(x603&x604));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x605 = INT8_MIN;
	int8_t x606 = INT8_MIN;
	int16_t x607 = INT16_MIN;
	volatile int32_t t114 = 10;

    t114 = ((x605*x606)==(x607&x608));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x610 = 1;
	int16_t x611 = 1278;
	int64_t x612 = -1LL;
	int32_t t115 = -37;

    t115 = ((x609*x610)==(x611&x612));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x613 = 0U;
	int64_t x615 = INT64_MIN;
	uint8_t x616 = 0U;
	int32_t t116 = 1;

    t116 = ((x613*x614)==(x615&x616));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x617 = UINT32_MAX;
	volatile int64_t x619 = INT64_MIN;
	static int64_t x620 = INT64_MAX;
	int32_t t117 = -1243;

    t117 = ((x617*x618)==(x619&x620));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x621 = 4154137842LLU;
	int32_t x622 = INT32_MIN;
	volatile int64_t x623 = INT64_MIN;
	volatile int32_t t118 = 0;

    t118 = ((x621*x622)==(x623&x624));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x626 = 1U;
	uint16_t x627 = 252U;
	volatile int64_t x628 = -1LL;
	int32_t t119 = 1;

    t119 = ((x625*x626)==(x627&x628));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x630 = UINT8_MAX;
	int64_t x631 = -74194LL;
	uint8_t x632 = 11U;
	int32_t t120 = 466908542;

    t120 = ((x629*x630)==(x631&x632));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x633 = -2;
	static uint16_t x634 = 27873U;
	int16_t x635 = -1;
	uint8_t x636 = UINT8_MAX;
	int32_t t121 = -293185;

    t121 = ((x633*x634)==(x635&x636));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x637 = INT16_MIN;
	static int64_t x640 = -1LL;

    t122 = ((x637*x638)==(x639&x640));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x642 = 22U;
	int8_t x644 = -1;
	int32_t t123 = -1381389;

    t123 = ((x641*x642)==(x643&x644));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x645 = UINT64_MAX;
	uint8_t x646 = 93U;
	int8_t x647 = INT8_MIN;
	static int64_t x648 = INT64_MIN;
	int32_t t124 = -188318;

    t124 = ((x645*x646)==(x647&x648));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x657 = 227296U;
	static uint16_t x658 = 11U;
	volatile int8_t x659 = INT8_MIN;
	int32_t x660 = -1;
	int32_t t125 = -34;

    t125 = ((x657*x658)==(x659&x660));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x661 = 0U;
	int64_t x662 = -1LL;
	uint64_t x663 = 54193271928LLU;
	int32_t t126 = -1;

    t126 = ((x661*x662)==(x663&x664));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x665 = 3LLU;
	static volatile int32_t t127 = 1;

    t127 = ((x665*x666)==(x667&x668));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x686 = -1;
	uint64_t x688 = 3258411559385790LLU;
	int32_t t128 = 6220189;

    t128 = ((x685*x686)==(x687&x688));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x690 = UINT16_MAX;
	int64_t x691 = 6871702609833209LL;
	int16_t x692 = INT16_MIN;
	volatile int32_t t129 = 749929;

    t129 = ((x689*x690)==(x691&x692));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x697 = -13;
	uint8_t x698 = UINT8_MAX;
	int16_t x699 = INT16_MIN;
	static uint16_t x700 = 218U;
	volatile int32_t t130 = -80441;

    t130 = ((x697*x698)==(x699&x700));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x705 = -1;
	uint64_t x706 = 131213LLU;
	int8_t x707 = -1;
	static int16_t x708 = INT16_MAX;
	static volatile int32_t t131 = -12682;

    t131 = ((x705*x706)==(x707&x708));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x709 = 134032332780LL;
	uint8_t x711 = UINT8_MAX;
	volatile int16_t x712 = -1;
	int32_t t132 = -344582;

    t132 = ((x709*x710)==(x711&x712));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x714 = INT8_MIN;
	int64_t x715 = -2814353393LL;
	int8_t x716 = INT8_MIN;
	volatile int32_t t133 = 51;

    t133 = ((x713*x714)==(x715&x716));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x717 = 0;
	int8_t x718 = INT8_MAX;
	int16_t x720 = INT16_MIN;
	int32_t t134 = -207;

    t134 = ((x717*x718)==(x719&x720));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x721 = -1;
	int64_t x722 = -910005011121684LL;
	int16_t x724 = INT16_MIN;

    t135 = ((x721*x722)==(x723&x724));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x725 = UINT32_MAX;
	int32_t x726 = INT32_MAX;
	volatile int32_t t136 = 28;

    t136 = ((x725*x726)==(x727&x728));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x729 = 16859U;
	int16_t x730 = INT16_MAX;
	int64_t x732 = 0LL;
	volatile int32_t t137 = 22984381;

    t137 = ((x729*x730)==(x731&x732));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x737 = -2;
	uint64_t x738 = UINT64_MAX;
	static uint16_t x739 = 10U;
	static int8_t x740 = INT8_MIN;
	static volatile int32_t t138 = -245154464;

    t138 = ((x737*x738)==(x739&x740));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x745 = 1;
	uint8_t x747 = 0U;
	int32_t x748 = -1;

    t139 = ((x745*x746)==(x747&x748));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x753 = UINT16_MAX;
	uint32_t x754 = 6U;
	volatile uint32_t x755 = 8959U;
	static int16_t x756 = -1;
	volatile int32_t t140 = -1;

    t140 = ((x753*x754)==(x755&x756));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x757 = INT64_MAX;
	int16_t x758 = -1;
	int16_t x759 = INT16_MIN;
	uint8_t x760 = 59U;
	static int32_t t141 = 801;

    t141 = ((x757*x758)==(x759&x760));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x761 = UINT16_MAX;
	volatile int8_t x763 = -7;
	uint32_t x764 = 22322327U;
	volatile int32_t t142 = -2;

    t142 = ((x761*x762)==(x763&x764));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x765 = 3548587LL;
	int32_t x767 = INT32_MIN;
	static uint8_t x768 = 1U;
	int32_t t143 = 120061494;

    t143 = ((x765*x766)==(x767&x768));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x770 = -1;
	volatile uint16_t x771 = UINT16_MAX;
	int32_t x772 = INT32_MIN;
	int32_t t144 = 1179;

    t144 = ((x769*x770)==(x771&x772));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x773 = 1493U;
	uint32_t x774 = 3958U;
	int8_t x775 = 3;
	int32_t t145 = 199542442;

    t145 = ((x773*x774)==(x775&x776));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x778 = 0U;
	uint32_t x779 = 1192003782U;
	int64_t x780 = 345400782802LL;
	volatile int32_t t146 = -2;

    t146 = ((x777*x778)==(x779&x780));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x781 = 402891LL;
	volatile int32_t x784 = -16076060;
	volatile int32_t t147 = -3;

    t147 = ((x781*x782)==(x783&x784));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x785 = -73870LL;
	uint8_t x786 = 3U;
	int32_t x788 = INT32_MAX;
	volatile int32_t t148 = 36719;

    t148 = ((x785*x786)==(x787&x788));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x790 = UINT16_MAX;
	int16_t x792 = -1;

    t149 = ((x789*x790)==(x791&x792));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x793 = 9U;
	volatile int64_t x795 = INT64_MIN;
	static int32_t x796 = -1031;
	volatile int32_t t150 = -3106396;

    t150 = ((x793*x794)==(x795&x796));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x801 = 1189054LL;
	int16_t x802 = -78;
	static int16_t x803 = INT16_MAX;
	uint16_t x804 = 9826U;

    t151 = ((x801*x802)==(x803&x804));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x805 = INT64_MIN;
	uint64_t x806 = 1LLU;
	static uint16_t x807 = 4747U;
	static uint32_t x808 = 28U;
	volatile int32_t t152 = -15940468;

    t152 = ((x805*x806)==(x807&x808));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x809 = -29;
	uint32_t x811 = UINT32_MAX;
	static int16_t x812 = -1;

    t153 = ((x809*x810)==(x811&x812));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x817 = -1LL;
	uint8_t x818 = 0U;
	static uint16_t x819 = 97U;
	uint32_t x820 = 483863U;
	volatile int32_t t154 = 12831;

    t154 = ((x817*x818)==(x819&x820));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x826 = 31;
	int64_t x827 = INT64_MAX;
	int32_t t155 = 100059;

    t155 = ((x825*x826)==(x827&x828));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x829 = 48U;
	int16_t x830 = -120;
	int8_t x831 = -1;
	int8_t x832 = INT8_MIN;
	int32_t t156 = -9;

    t156 = ((x829*x830)==(x831&x832));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x833 = 43;
	uint16_t x834 = UINT16_MAX;
	int32_t x835 = -1;
	volatile int8_t x836 = INT8_MIN;

    t157 = ((x833*x834)==(x835&x836));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x837 = INT8_MAX;
	uint64_t x838 = 32LLU;
	static int64_t x840 = -906127749LL;
	static volatile int32_t t158 = -1;

    t158 = ((x837*x838)==(x839&x840));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x841 = INT32_MIN;
	static volatile uint32_t x842 = 1U;
	uint8_t x843 = UINT8_MAX;
	volatile uint8_t x844 = UINT8_MAX;
	int32_t t159 = 119256377;

    t159 = ((x841*x842)==(x843&x844));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x854 = 23982882LLU;
	int16_t x855 = INT16_MIN;
	int64_t x856 = 259198688LL;

    t160 = ((x853*x854)==(x855&x856));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x861 = -1;
	int16_t x862 = 977;
	static int8_t x864 = 1;
	int32_t t161 = 3897537;

    t161 = ((x861*x862)==(x863&x864));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x869 = 1;
	uint32_t x871 = 2231024U;
	static uint8_t x872 = 127U;
	static volatile int32_t t162 = 1816;

    t162 = ((x869*x870)==(x871&x872));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x873 = 100U;
	int16_t x874 = INT16_MIN;
	static uint32_t x875 = 7650194U;
	static int16_t x876 = -1;
	int32_t t163 = 1;

    t163 = ((x873*x874)==(x875&x876));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x877 = -120;
	int32_t x878 = 4;
	uint16_t x879 = UINT16_MAX;
	int32_t x880 = 3610242;
	static int32_t t164 = 13464;

    t164 = ((x877*x878)==(x879&x880));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x885 = 23237LLU;
	int32_t x886 = 5405048;
	static uint64_t x887 = 131464LLU;
	int64_t x888 = -70167LL;
	int32_t t165 = 3482748;

    t165 = ((x885*x886)==(x887&x888));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x889 = -1;
	uint32_t x890 = UINT32_MAX;
	int32_t t166 = -6441;

    t166 = ((x889*x890)==(x891&x892));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x897 = INT64_MIN;
	volatile uint64_t x898 = UINT64_MAX;
	uint32_t x899 = 1064U;
	int8_t x900 = -1;

    t167 = ((x897*x898)==(x899&x900));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x901 = UINT64_MAX;
	uint16_t x902 = 250U;
	volatile int16_t x904 = INT16_MIN;
	volatile int32_t t168 = 126499770;

    t168 = ((x901*x902)==(x903&x904));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x905 = 5LLU;
	volatile uint32_t x906 = 63645860U;
	uint8_t x907 = 56U;
	int32_t x908 = 561;
	int32_t t169 = -370912;

    t169 = ((x905*x906)==(x907&x908));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x913 = 1U;
	volatile int64_t x914 = -1LL;
	int8_t x915 = -1;
	int32_t t170 = 18037;

    t170 = ((x913*x914)==(x915&x916));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x918 = UINT32_MAX;

    t171 = ((x917*x918)==(x919&x920));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x921 = -108;
	volatile int8_t x922 = INT8_MIN;
	volatile int8_t x923 = INT8_MAX;
	static uint8_t x924 = UINT8_MAX;
	int32_t t172 = -20;

    t172 = ((x921*x922)==(x923&x924));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x938 = -1;
	volatile uint64_t x939 = 265793060840LLU;
	static volatile int32_t t173 = 46093;

    t173 = ((x937*x938)==(x939&x940));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x941 = 284238920137049457LLU;
	volatile uint64_t x942 = UINT64_MAX;
	int32_t t174 = 3;

    t174 = ((x941*x942)==(x943&x944));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x949 = UINT64_MAX;
	static int16_t x950 = INT16_MAX;
	int64_t x951 = INT64_MIN;
	int64_t x952 = INT64_MIN;
	static int32_t t175 = -1904;

    t175 = ((x949*x950)==(x951&x952));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x961 = 641169025803948516LL;
	int32_t x962 = -1;
	static volatile int16_t x963 = INT16_MIN;
	static int64_t x964 = -1LL;
	static int32_t t176 = 256690900;

    t176 = ((x961*x962)==(x963&x964));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x965 = 0U;
	int32_t x966 = INT32_MIN;
	volatile uint64_t x968 = UINT64_MAX;
	int32_t t177 = 3448;

    t177 = ((x965*x966)==(x967&x968));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x973 = INT32_MIN;
	uint32_t x974 = UINT32_MAX;
	uint32_t x975 = 7U;
	static uint8_t x976 = 1U;
	static int32_t t178 = -183;

    t178 = ((x973*x974)==(x975&x976));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x977 = -7;
	static int8_t x979 = INT8_MIN;
	int64_t x980 = 0LL;
	static int32_t t179 = -2425;

    t179 = ((x977*x978)==(x979&x980));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x981 = UINT16_MAX;
	uint8_t x982 = 1U;
	uint32_t x983 = 928U;
	static volatile int32_t x984 = -1281373;
	int32_t t180 = -22;

    t180 = ((x981*x982)==(x983&x984));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x986 = 1U;
	uint64_t x987 = UINT64_MAX;
	int64_t x988 = INT64_MAX;
	int32_t t181 = 5;

    t181 = ((x985*x986)==(x987&x988));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x989 = INT16_MIN;
	volatile uint16_t x991 = 7U;
	static volatile int64_t x992 = -284LL;
	volatile int32_t t182 = -99031591;

    t182 = ((x989*x990)==(x991&x992));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x993 = 1U;
	uint64_t x994 = 2189LLU;
	int16_t x995 = -3;
	int16_t x996 = -522;
	volatile int32_t t183 = -744488283;

    t183 = ((x993*x994)==(x995&x996));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x997 = 27751U;
	uint16_t x998 = UINT16_MAX;
	uint16_t x999 = 0U;
	int8_t x1000 = INT8_MIN;
	static volatile int32_t t184 = -1;

    t184 = ((x997*x998)==(x999&x1000));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1001 = INT8_MIN;
	int16_t x1003 = INT16_MIN;
	static volatile int16_t x1004 = INT16_MIN;
	volatile int32_t t185 = 7308666;

    t185 = ((x1001*x1002)==(x1003&x1004));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1005 = 24U;
	static uint16_t x1006 = 47U;
	int32_t t186 = -1235467;

    t186 = ((x1005*x1006)==(x1007&x1008));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1009 = 46U;
	int16_t x1010 = INT16_MAX;
	static volatile int16_t x1011 = 3;
	int64_t x1012 = 12138710984LL;
	int32_t t187 = 1608596;

    t187 = ((x1009*x1010)==(x1011&x1012));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x1014 = INT64_MIN;
	volatile int16_t x1015 = INT16_MIN;
	static volatile int32_t t188 = 195295329;

    t188 = ((x1013*x1014)==(x1015&x1016));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1018 = UINT8_MAX;
	volatile int32_t t189 = -2617;

    t189 = ((x1017*x1018)==(x1019&x1020));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1021 = 55U;
	static volatile int8_t x1022 = -45;
	static uint64_t x1023 = 0LLU;
	int16_t x1024 = INT16_MAX;
	volatile int32_t t190 = -71360;

    t190 = ((x1021*x1022)==(x1023&x1024));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1025 = INT16_MAX;
	int64_t x1026 = -1LL;
	volatile int32_t x1027 = INT32_MAX;
	int32_t t191 = -1539310;

    t191 = ((x1025*x1026)==(x1027&x1028));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1030 = -183800862352430LL;
	static int8_t x1031 = -1;
	int8_t x1032 = INT8_MIN;
	int32_t t192 = -250463402;

    t192 = ((x1029*x1030)==(x1031&x1032));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1034 = 2;
	uint8_t x1035 = 26U;
	uint8_t x1036 = 12U;
	volatile int32_t t193 = -2698;

    t193 = ((x1033*x1034)==(x1035&x1036));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1038 = INT8_MIN;
	volatile int64_t x1039 = -1LL;
	int64_t x1040 = 69504158LL;
	int32_t t194 = 60205377;

    t194 = ((x1037*x1038)==(x1039&x1040));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x1049 = INT16_MAX;
	uint64_t x1051 = 5850521195LLU;
	int8_t x1052 = -51;

    t195 = ((x1049*x1050)==(x1051&x1052));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1053 = INT8_MAX;
	static volatile int64_t x1055 = 69412613855834LL;
	uint64_t x1056 = UINT64_MAX;
	volatile int32_t t196 = -614;

    t196 = ((x1053*x1054)==(x1055&x1056));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1057 = INT64_MIN;
	int32_t x1058 = 1;
	int64_t x1060 = INT64_MIN;
	static volatile int32_t t197 = 13;

    t197 = ((x1057*x1058)==(x1059&x1060));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1073 = 8280822LL;
	volatile int8_t x1074 = -1;
	int8_t x1075 = INT8_MIN;

    t198 = ((x1073*x1074)==(x1075&x1076));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1077 = INT16_MAX;
	uint64_t x1078 = 1587823103LLU;
	uint32_t x1079 = 448U;
	volatile uint32_t x1080 = UINT32_MAX;

    t199 = ((x1077*x1078)==(x1079&x1080));

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

