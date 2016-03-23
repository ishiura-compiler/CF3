
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

static volatile int32_t x5 = INT32_MIN;
int8_t x6 = -1;
int8_t x14 = -1;
volatile uint64_t t3 = 2904LLU;
static int32_t x23 = 43808;
static int8_t x30 = 37;
uint32_t x42 = 3U;
int64_t x47 = -1LL;
static int64_t t8 = 30432002817955182LL;
volatile int64_t x53 = -1LL;
static volatile int16_t x59 = 5708;
uint64_t t11 = 6953LLU;
int64_t x70 = INT64_MIN;
int8_t x71 = -1;
volatile uint64_t t14 = 140463382311027LLU;
static int64_t x82 = -7LL;
uint16_t x83 = 55U;
uint8_t x104 = 1U;
int8_t x109 = INT8_MIN;
uint32_t x113 = 23706U;
uint32_t x120 = 9607062U;
uint32_t x122 = 250U;
int32_t x127 = 33095245;
int32_t x128 = 20972;
int16_t x138 = 3;
int8_t x140 = INT8_MIN;
volatile int64_t t26 = -1LL;
static uint8_t x150 = UINT8_MAX;
int32_t x151 = INT32_MIN;
int64_t x152 = -1LL;
static volatile int64_t t28 = 2367425LL;
int32_t x161 = INT32_MIN;
static int32_t x171 = -5731;
uint64_t x172 = UINT64_MAX;
int8_t x185 = 5;
uint16_t x187 = UINT16_MAX;
volatile int64_t t35 = -449387759931629703LL;
int16_t x193 = INT16_MIN;
int8_t x195 = INT8_MIN;
int8_t x196 = INT8_MIN;
volatile int8_t x212 = INT8_MIN;
volatile int32_t x213 = INT32_MIN;
int32_t x215 = INT32_MIN;
static int16_t x219 = 1;
static int16_t x225 = INT16_MIN;
static uint8_t x231 = 76U;
static int16_t x233 = -1;
volatile uint32_t x234 = 86U;
uint32_t t46 = 148977U;
uint8_t x243 = 0U;
static int8_t x244 = 1;
uint64_t x258 = UINT64_MAX;
int32_t x260 = INT32_MIN;
int64_t x262 = -1LL;
uint32_t x263 = UINT32_MAX;
int32_t x267 = INT32_MIN;
int16_t x275 = INT16_MIN;
static uint32_t t54 = 2032779005U;
int8_t x282 = -32;
uint8_t x298 = 5U;
uint8_t x301 = 46U;
uint64_t t60 = 384346790LLU;
int64_t x312 = 254LL;
int8_t x326 = -1;
uint64_t x329 = UINT64_MAX;
volatile int16_t x335 = 1982;
int8_t x337 = -6;
int16_t x338 = INT16_MAX;
static int16_t x355 = 93;
int8_t x359 = -1;
static uint32_t t71 = 1029548449U;
int64_t x363 = INT64_MIN;
volatile uint64_t t72 = 7284544753LLU;
int8_t x365 = -5;
uint32_t x369 = 1100381U;
int16_t x374 = -1;
int8_t x380 = INT8_MIN;
int32_t x385 = -28;
volatile int32_t x386 = 14354;
int8_t x388 = 0;
volatile int8_t x391 = INT8_MAX;
int16_t x404 = INT16_MAX;
uint8_t x405 = UINT8_MAX;
int8_t x408 = -1;
int8_t x412 = -42;
int32_t x414 = INT32_MIN;
int16_t x441 = -1;
int8_t x442 = -3;
int8_t x446 = 11;
static uint32_t x448 = 862837U;
int8_t x455 = INT8_MAX;
volatile int64_t t90 = 109280LL;
static int32_t x458 = -1;
static uint32_t x459 = UINT32_MAX;
static int64_t x480 = -395532LL;
static int32_t x487 = -1;
static volatile uint64_t t98 = 1647071030056694LLU;
volatile uint16_t x492 = UINT16_MAX;
int32_t x494 = -1;
uint64_t x495 = 109LLU;
volatile int64_t x498 = INT64_MAX;
static int8_t x499 = -44;
int64_t t101 = 8809LL;
int32_t x505 = 9;
static int32_t x507 = -1288135;
int32_t x511 = INT32_MAX;
static int64_t x512 = INT64_MIN;
static uint16_t x514 = 4U;
volatile uint16_t x515 = UINT16_MAX;
int64_t x516 = INT64_MIN;
int8_t x525 = INT8_MAX;
volatile int64_t x526 = 1556544422LL;
int64_t x529 = INT64_MIN;
static int64_t x530 = -1LL;
static uint64_t t107 = 1LLU;
int64_t x542 = INT64_MIN;
int64_t t109 = -382LL;
volatile int32_t t110 = -29941587;
int8_t x566 = -1;
uint64_t t114 = 16959LLU;
int32_t x576 = -1;
volatile int64_t t116 = -615302462LL;
uint32_t x583 = UINT32_MAX;
int64_t x584 = -131489LL;
uint16_t x614 = 27U;
int8_t x615 = INT8_MAX;
uint8_t x618 = UINT8_MAX;
volatile uint64_t x622 = 374369LLU;
uint64_t x624 = 428541114LLU;
int64_t x634 = INT64_MIN;
int16_t x636 = INT16_MIN;
int64_t x640 = 119LL;
int64_t t130 = -3221453074LL;
uint32_t x645 = UINT32_MAX;
uint64_t t134 = 52LLU;
int8_t x671 = INT8_MIN;
int8_t x681 = INT8_MIN;
static int8_t x682 = INT8_MIN;
int32_t t137 = -251718139;
uint8_t x694 = UINT8_MAX;
int32_t t141 = -54025538;
uint64_t x712 = 180029479LLU;
int32_t x716 = INT32_MAX;
uint64_t t144 = 3890870230974587LLU;
static uint64_t t145 = 0LLU;
volatile int64_t t147 = 30808LL;
int32_t x736 = INT32_MAX;
volatile int64_t t148 = 5LL;
volatile uint32_t x738 = UINT32_MAX;
int16_t x740 = INT16_MIN;
int32_t x743 = -1;
volatile int64_t x747 = -548405074161648LL;
static int16_t x752 = -1;
static int32_t x753 = INT32_MIN;
volatile int16_t x776 = -3356;
int32_t x777 = INT32_MIN;
uint32_t x785 = 2093619U;
volatile uint32_t t158 = 33208269U;
volatile int64_t x791 = INT64_MIN;
uint64_t x795 = 2150505LLU;
volatile int32_t x796 = INT32_MIN;
int64_t t161 = -1011501659349LL;
uint32_t x804 = 1U;
int64_t x824 = -1LL;
volatile int64_t t165 = 7490616LL;
static volatile int32_t t166 = 10528674;
int32_t x829 = 22046426;
static uint64_t x832 = UINT64_MAX;
volatile int64_t x835 = -1LL;
volatile int64_t t168 = 1473336665LL;
static int16_t x846 = INT16_MAX;
int32_t x847 = -1;
int32_t x862 = INT32_MIN;
volatile int64_t t170 = 542LL;
volatile uint64_t t171 = 144099445609511711LLU;
int16_t x869 = INT16_MIN;
uint32_t x879 = 477022U;
uint32_t t174 = 8044U;
static int16_t x881 = -1;
uint64_t x884 = 4692881540LLU;
int32_t x885 = -33312;
int32_t x889 = 0;
uint32_t x890 = UINT32_MAX;
int64_t t177 = -23904868441LL;
int64_t x893 = 1815LL;
uint32_t x899 = 122976U;
uint64_t t180 = 22908865063869LLU;
static int32_t x905 = 445;
int32_t t182 = 483;
int64_t x920 = -1LL;
uint64_t x924 = 822075LLU;
volatile int16_t x936 = 2;
int8_t x938 = -1;
static int32_t x949 = 1;
uint64_t t190 = 105731274105368LLU;
int8_t x953 = 10;
int64_t x954 = INT64_MIN;
static int16_t x956 = INT16_MIN;
static volatile int64_t t191 = -78391761LL;
volatile int32_t x959 = -1;
int64_t x966 = INT64_MIN;
volatile int64_t t193 = -25103154561LL;
int8_t x993 = -3;
int32_t x998 = -1410;


void f0(void) {
    	int16_t x7 = INT16_MIN;
	int8_t x8 = 0;
	int32_t t0 = -947548;

    t0 = ((x5%x6)*(x7+x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = -32505;
	uint8_t x10 = 2U;
	volatile int16_t x11 = -1;
	int16_t x12 = -332;
	int32_t t1 = 716493;

    t1 = ((x9%x10)*(x11+x12));

    if (t1 != 333) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x13 = UINT32_MAX;
	static uint16_t x15 = UINT16_MAX;
	int32_t x16 = INT32_MIN;
	static uint32_t t2 = 2955U;

    t2 = ((x13%x14)*(x15+x16));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = UINT64_MAX;
	int16_t x18 = INT16_MAX;
	int8_t x19 = INT8_MIN;
	volatile int32_t x20 = INT32_MAX;

    t3 = ((x17%x18)*(x19+x20));

    if (t3 != 32212252785LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x21 = INT16_MAX;
	int64_t x22 = INT64_MIN;
	int16_t x24 = INT16_MAX;
	volatile int64_t t4 = -16364472282839845LL;

    t4 = ((x21%x22)*(x23+x24));

    if (t4 != 2509133025LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x25 = 172894054522LLU;
	int64_t x26 = -1069580977506458014LL;
	static int32_t x27 = -1;
	static int16_t x28 = INT16_MIN;
	uint64_t t5 = 20319244690954LLU;

    t5 = ((x25%x26)*(x27+x28));

    if (t5 != 18441078508436920198LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = 6061U;
	int8_t x31 = INT8_MAX;
	uint8_t x32 = 5U;
	volatile uint32_t t6 = 3284U;

    t6 = ((x29%x30)*(x31+x32));

    if (t6 != 3960U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x41 = INT8_MIN;
	volatile int16_t x43 = -1;
	static int8_t x44 = 1;
	uint32_t t7 = 170604234U;

    t7 = ((x41%x42)*(x43+x44));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = INT32_MIN;
	int16_t x46 = INT16_MIN;
	uint16_t x48 = 518U;

    t8 = ((x45%x46)*(x47+x48));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x54 = -1;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MIN;
	int64_t t9 = -57971LL;

    t9 = ((x53%x54)*(x55+x56));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x57 = 7522U;
	int8_t x58 = -1;
	uint8_t x60 = UINT8_MAX;
	static int32_t t10 = 104;

    t10 = ((x57%x58)*(x59+x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x61 = INT8_MAX;
	static int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MAX;
	uint64_t x64 = 244243108141332631LLU;

    t11 = ((x61%x62)*(x63+x64));

    if (t11 != 12572130932970115690LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x65 = 0U;
	int16_t x66 = -287;
	uint32_t x67 = 56U;
	uint32_t x68 = 38951505U;
	uint32_t t12 = 2691199U;

    t12 = ((x65%x66)*(x67+x68));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x69 = 1039281426U;
	static uint64_t x72 = UINT64_MAX;
	uint64_t t13 = 16445192746660LLU;

    t13 = ((x69%x70)*(x71+x72));

    if (t13 != 18446744071630988764LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x73 = INT32_MAX;
	static uint8_t x74 = UINT8_MAX;
	volatile int16_t x75 = -1;
	uint64_t x76 = 11340813687LLU;

    t14 = ((x73%x74)*(x75+x76));

    if (t14 != 1440283338122LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x77 = 159U;
	volatile int64_t x78 = INT64_MAX;
	volatile int16_t x79 = INT16_MIN;
	static volatile uint32_t x80 = 2429U;
	volatile int64_t t15 = 3437LL;

    t15 = ((x77%x78)*(x79+x80));

    if (t15 != 682894976163LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x81 = INT32_MIN;
	uint32_t x84 = 1732008748U;
	int64_t t16 = 3697571723042165LL;

    t16 = ((x81%x82)*(x83+x84));

    if (t16 != -3464017606LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x89 = 7856LL;
	int64_t x90 = -106010370111LL;
	int64_t x91 = -1LL;
	uint32_t x92 = 10044567U;
	int64_t t17 = 6769070LL;

    t17 = ((x89%x90)*(x91+x92));

    if (t17 != 78910110496LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	int64_t t18 = -3LL;

    t18 = ((x101%x102)*(x103+x104));

    if (t18 != 4161536LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x110 = 197;
	int8_t x111 = INT8_MIN;
	uint16_t x112 = 69U;
	volatile int32_t t19 = -139;

    t19 = ((x109%x110)*(x111+x112));

    if (t19 != 7552) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x114 = 2891U;
	static int16_t x115 = INT16_MIN;
	uint32_t x116 = UINT32_MAX;
	volatile uint32_t t20 = 5999257U;

    t20 = ((x113%x114)*(x115+x116));

    if (t20 != 4276026814U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x117 = 129923LL;
	static uint64_t x118 = 17008072405688LLU;
	uint32_t x119 = UINT32_MAX;
	uint64_t t21 = 1339149168936884LLU;

    t21 = ((x117%x118)*(x119+x120));

    if (t21 != 1248178186303LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x121 = 101U;
	int64_t x123 = -1LL;
	volatile int8_t x124 = INT8_MAX;
	static volatile int64_t t22 = -3813910814034183LL;

    t22 = ((x121%x122)*(x123+x124));

    if (t22 != 12726LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x125 = -1LL;
	static int8_t x126 = 29;
	int64_t t23 = -62599268215762LL;

    t23 = ((x125%x126)*(x127+x128));

    if (t23 != -33116217LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x129 = UINT8_MAX;
	volatile int8_t x130 = -31;
	volatile uint32_t x131 = UINT32_MAX;
	volatile uint8_t x132 = 0U;
	uint32_t t24 = 60860U;

    t24 = ((x129%x130)*(x131+x132));

    if (t24 != 4294967289U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x137 = -205;
	static int8_t x139 = -1;
	int32_t t25 = -3683;

    t25 = ((x137%x138)*(x139+x140));

    if (t25 != 129) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x141 = -1LL;
	int64_t x142 = INT64_MIN;
	volatile int64_t x143 = INT64_MIN;
	uint8_t x144 = 75U;

    t26 = ((x141%x142)*(x143+x144));

    if (t26 != 9223372036854775733LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x145 = 533U;
	volatile uint8_t x146 = 15U;
	int64_t x147 = 6003LL;
	int64_t x148 = 1044709LL;
	int64_t t27 = 85507627299118LL;

    t27 = ((x145%x146)*(x147+x148));

    if (t27 != 8405696LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x149 = INT8_MIN;

    t28 = ((x149%x150)*(x151+x152));

    if (t28 != 274877907072LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x153 = INT8_MIN;
	static int16_t x154 = -5;
	int8_t x155 = 5;
	static int32_t x156 = 25929816;
	volatile int32_t t29 = 0;

    t29 = ((x153%x154)*(x155+x156));

    if (t29 != -77789463) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x157 = UINT32_MAX;
	static uint16_t x158 = UINT16_MAX;
	int32_t x159 = 325291;
	uint32_t x160 = 10U;
	uint32_t t30 = 0U;

    t30 = ((x157%x158)*(x159+x160));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x162 = 56824881U;
	volatile int8_t x163 = INT8_MIN;
	int16_t x164 = -1;
	static uint32_t t31 = 103055035U;

    t31 = ((x161%x162)*(x163+x164));

    if (t31 != 2789701013U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x165 = -1;
	int8_t x166 = 13;
	int64_t x167 = 1572190261774260947LL;
	volatile int32_t x168 = INT32_MIN;
	volatile int64_t t32 = -180829032080946LL;

    t32 = ((x165%x166)*(x167+x168));

    if (t32 != -1572190259626777299LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x169 = INT8_MAX;
	static int16_t x170 = INT16_MIN;
	volatile uint64_t t33 = 3218LLU;

    t33 = ((x169%x170)*(x171+x172));

    if (t33 != 18446744073708823652LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x173 = INT64_MIN;
	int32_t x174 = -1;
	int16_t x175 = INT16_MIN;
	static int32_t x176 = INT32_MAX;
	int64_t t34 = -58LL;

    t34 = ((x173%x174)*(x175+x176));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x186 = -1LL;
	volatile int64_t x188 = INT64_MIN;

    t35 = ((x185%x186)*(x187+x188));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x189 = 2077409925U;
	int64_t x190 = 1LL;
	int32_t x191 = INT32_MIN;
	static uint8_t x192 = UINT8_MAX;
	volatile int64_t t36 = 2627578038508993692LL;

    t36 = ((x189%x190)*(x191+x192));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x194 = -584LL;
	volatile int64_t t37 = 604336453487LL;

    t37 = ((x193%x194)*(x195+x196));

    if (t37 != 16384LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x197 = 0;
	static uint16_t x198 = 51U;
	uint16_t x199 = 12U;
	uint64_t x200 = 21554728093042LLU;
	volatile uint64_t t38 = 205962LLU;

    t38 = ((x197%x198)*(x199+x200));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x201 = INT64_MIN;
	volatile int64_t x202 = INT64_MAX;
	int64_t x203 = INT64_MIN;
	volatile int16_t x204 = 1;
	volatile int64_t t39 = INT64_MAX;

    t39 = ((x201%x202)*(x203+x204));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x209 = 21587076;
	int8_t x210 = -1;
	int8_t x211 = 38;
	int32_t t40 = -302958713;

    t40 = ((x209%x210)*(x211+x212));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x214 = -15012471;
	static volatile int32_t x216 = INT32_MAX;
	static volatile int32_t t41 = -1;

    t41 = ((x213%x214)*(x215+x216));

    if (t41 != 700295) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x217 = 200364LLU;
	int16_t x218 = INT16_MIN;
	int8_t x220 = 1;
	uint64_t t42 = 9LLU;

    t42 = ((x217%x218)*(x219+x220));

    if (t42 != 400728LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x221 = INT64_MIN;
	static int64_t x222 = INT64_MIN;
	uint8_t x223 = 1U;
	static volatile int64_t x224 = -134801231271LL;
	volatile int64_t t43 = -944LL;

    t43 = ((x221%x222)*(x223+x224));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x226 = 2594;
	int8_t x227 = INT8_MIN;
	uint32_t x228 = 120995U;
	volatile uint32_t t44 = 3406U;

    t44 = ((x225%x226)*(x227+x228));

    if (t44 != 4096745416U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x229 = INT64_MAX;
	int32_t x230 = -1;
	int32_t x232 = INT32_MIN;
	volatile int64_t t45 = -7LL;

    t45 = ((x229%x230)*(x231+x232));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x235 = UINT8_MAX;
	int16_t x236 = -1;

    t46 = ((x233%x234)*(x235+x236));

    if (t46 != 3810U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x241 = INT64_MIN;
	uint8_t x242 = UINT8_MAX;
	volatile int64_t t47 = 10323LL;

    t47 = ((x241%x242)*(x243+x244));

    if (t47 != -128LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x245 = 1;
	volatile int32_t x246 = -1;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = INT8_MAX;
	static volatile int32_t t48 = -258083;

    t48 = ((x245%x246)*(x247+x248));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x249 = INT32_MIN;
	uint16_t x250 = 46U;
	int16_t x251 = INT16_MAX;
	int32_t x252 = -7;
	volatile int32_t t49 = 0;

    t49 = ((x249%x250)*(x251+x252));

    if (t49 != -196560) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x257 = -1;
	uint8_t x259 = 33U;
	uint64_t t50 = 11068855LLU;

    t50 = ((x257%x258)*(x259+x260));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x261 = INT16_MIN;
	volatile int32_t x264 = INT32_MIN;
	int64_t t51 = 0LL;

    t51 = ((x261%x262)*(x263+x264));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x265 = INT8_MAX;
	int64_t x266 = INT64_MAX;
	volatile int32_t x268 = INT32_MAX;
	volatile int64_t t52 = 62126LL;

    t52 = ((x265%x266)*(x267+x268));

    if (t52 != -127LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x269 = 844942LL;
	uint32_t x270 = 1834465982U;
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = -1;
	int64_t t53 = 2LL;

    t53 = ((x269%x270)*(x271+x272));

    if (t53 != 214615268LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x273 = UINT32_MAX;
	volatile int8_t x274 = INT8_MIN;
	int16_t x276 = INT16_MIN;

    t54 = ((x273%x274)*(x275+x276));

    if (t54 != 4286644224U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x277 = INT16_MAX;
	int64_t x278 = -13741401LL;
	int16_t x279 = INT16_MIN;
	int64_t x280 = -1LL;
	static int64_t t55 = -7LL;

    t55 = ((x277%x278)*(x279+x280));

    if (t55 != -1073741823LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x281 = 3926U;
	int32_t x283 = INT32_MAX;
	volatile int64_t x284 = -1LL;
	int64_t t56 = -69113821677773LL;

    t56 = ((x281%x282)*(x283+x284));

    if (t56 != 47244640212LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x285 = 0U;
	uint64_t x286 = 16454339783961775LLU;
	static uint8_t x287 = 35U;
	static volatile int8_t x288 = INT8_MIN;
	volatile uint64_t t57 = 26469169LLU;

    t57 = ((x285%x286)*(x287+x288));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x289 = UINT8_MAX;
	volatile int64_t x290 = -1LL;
	uint16_t x291 = 120U;
	int64_t x292 = INT64_MIN;
	volatile int64_t t58 = 349523093998007702LL;

    t58 = ((x289%x290)*(x291+x292));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x297 = INT16_MIN;
	static volatile uint32_t x299 = 0U;
	volatile uint64_t x300 = UINT64_MAX;
	uint64_t t59 = 28594624953832LLU;

    t59 = ((x297%x298)*(x299+x300));

    if (t59 != 3LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x302 = UINT32_MAX;
	int64_t x303 = INT64_MIN;
	uint64_t x304 = UINT64_MAX;

    t60 = ((x301%x302)*(x303+x304));

    if (t60 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x309 = INT32_MIN;
	int64_t x310 = 2882080955734173162LL;
	int16_t x311 = INT16_MAX;
	static volatile int64_t t61 = -71436LL;

    t61 = ((x309%x310)*(x311+x312));

    if (t61 != -70912057540608LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x313 = INT32_MIN;
	uint8_t x314 = UINT8_MAX;
	uint32_t x315 = 6U;
	int8_t x316 = INT8_MAX;
	volatile uint32_t t62 = 314387U;

    t62 = ((x313%x314)*(x315+x316));

    if (t62 != 4294950272U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x317 = INT64_MIN;
	int8_t x318 = -1;
	static uint64_t x319 = UINT64_MAX;
	uint64_t x320 = 2873049831LLU;
	uint64_t t63 = 5781590729649547446LLU;

    t63 = ((x317%x318)*(x319+x320));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x325 = UINT8_MAX;
	int32_t x327 = 3773192;
	uint8_t x328 = 4U;
	int32_t t64 = 24648291;

    t64 = ((x325%x326)*(x327+x328));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x330 = 456;
	int32_t x331 = -6274;
	static uint16_t x332 = UINT16_MAX;
	static volatile uint64_t t65 = 569077647594782132LLU;

    t65 = ((x329%x330)*(x331+x332));

    if (t65 != 6577971LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x333 = INT32_MAX;
	volatile uint8_t x334 = 3U;
	static volatile int8_t x336 = 4;
	volatile int32_t t66 = 5246;

    t66 = ((x333%x334)*(x335+x336));

    if (t66 != 1986) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x339 = -1;
	int8_t x340 = -31;
	volatile int32_t t67 = 110928;

    t67 = ((x337%x338)*(x339+x340));

    if (t67 != 192) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x341 = 6731U;
	uint16_t x342 = 1391U;
	int32_t x343 = INT32_MIN;
	int8_t x344 = 2;
	volatile uint32_t t68 = 1414803502U;

    t68 = ((x341%x342)*(x343+x344));

    if (t68 != 2147485982U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x345 = 12895;
	uint8_t x346 = 7U;
	static int64_t x347 = INT64_MIN;
	int16_t x348 = 182;
	static volatile int64_t t69 = 2604LL;

    t69 = ((x345%x346)*(x347+x348));

    if (t69 != -9223372036854775626LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x353 = UINT32_MAX;
	int32_t x354 = INT32_MIN;
	volatile int8_t x356 = 47;
	volatile uint32_t t70 = 2359U;

    t70 = ((x353%x354)*(x355+x356));

    if (t70 != 4294967156U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x357 = INT8_MIN;
	volatile uint32_t x358 = 245978644U;
	int16_t x360 = INT16_MAX;

    t71 = ((x357%x358)*(x359+x360));

    if (t71 != 2526244776U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x361 = -1;
	volatile uint64_t x362 = 439LLU;
	int64_t x364 = 10079619776610LL;

    t72 = ((x361%x362)*(x363+x364));

    if (t72 != 4354395743495520LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x366 = UINT8_MAX;
	uint16_t x367 = 101U;
	volatile int64_t x368 = -1LL;
	static int64_t t73 = -590LL;

    t73 = ((x365%x366)*(x367+x368));

    if (t73 != -500LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x370 = -1;
	uint32_t x371 = UINT32_MAX;
	volatile uint8_t x372 = 40U;
	uint32_t t74 = 48U;

    t74 = ((x369%x370)*(x371+x372));

    if (t74 != 42914859U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x373 = 0U;
	int8_t x375 = -3;
	uint16_t x376 = 729U;
	int32_t t75 = 15;

    t75 = ((x373%x374)*(x375+x376));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x377 = -1;
	int8_t x378 = INT8_MIN;
	uint16_t x379 = UINT16_MAX;
	volatile int32_t t76 = 57;

    t76 = ((x377%x378)*(x379+x380));

    if (t76 != -65407) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x381 = 81U;
	uint16_t x382 = UINT16_MAX;
	int32_t x383 = 4037306;
	uint8_t x384 = 109U;
	int32_t t77 = 2192;

    t77 = ((x381%x382)*(x383+x384));

    if (t77 != 327030615) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x387 = INT8_MAX;
	int32_t t78 = 264143154;

    t78 = ((x385%x386)*(x387+x388));

    if (t78 != -3556) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x389 = -1;
	int64_t x390 = INT64_MIN;
	static volatile int8_t x392 = INT8_MAX;
	volatile int64_t t79 = -5157LL;

    t79 = ((x389%x390)*(x391+x392));

    if (t79 != -254LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x397 = 3;
	uint16_t x398 = 37U;
	volatile uint64_t x399 = 1522160561LLU;
	static uint8_t x400 = 35U;
	uint64_t t80 = 230279252LLU;

    t80 = ((x397%x398)*(x399+x400));

    if (t80 != 4566481788LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x401 = UINT32_MAX;
	volatile int8_t x402 = INT8_MIN;
	volatile int8_t x403 = INT8_MIN;
	volatile uint32_t t81 = 10109U;

    t81 = ((x401%x402)*(x403+x404));

    if (t81 != 4145153U) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x406 = INT64_MAX;
	uint32_t x407 = 358U;
	int64_t t82 = 451657951749237022LL;

    t82 = ((x405%x406)*(x407+x408));

    if (t82 != 91035LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x409 = INT64_MIN;
	volatile int64_t x410 = -1LL;
	static uint8_t x411 = 55U;
	int64_t t83 = -210038959268817348LL;

    t83 = ((x409%x410)*(x411+x412));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x413 = INT32_MIN;
	volatile int32_t x415 = INT32_MAX;
	int16_t x416 = -1;
	int32_t t84 = -26952;

    t84 = ((x413%x414)*(x415+x416));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x425 = INT64_MIN;
	volatile uint64_t x426 = UINT64_MAX;
	int8_t x427 = INT8_MAX;
	static int8_t x428 = INT8_MAX;
	static volatile uint64_t t85 = 14LLU;

    t85 = ((x425%x426)*(x427+x428));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x429 = 15609LL;
	static int8_t x430 = INT8_MAX;
	static volatile int16_t x431 = INT16_MIN;
	static uint64_t x432 = 166LLU;
	volatile uint64_t t86 = 1029749864296LLU;

    t86 = ((x429%x430)*(x431+x432));

    if (t86 != 18446744073705802386LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x443 = INT32_MAX;
	int32_t x444 = -6943779;
	int32_t t87 = 1;

    t87 = ((x441%x442)*(x443+x444));

    if (t87 != -2140539868) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x445 = -1;
	int8_t x447 = INT8_MAX;
	static volatile uint32_t t88 = 13U;

    t88 = ((x445%x446)*(x447+x448));

    if (t88 != 4294104332U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x449 = INT16_MAX;
	volatile uint8_t x450 = UINT8_MAX;
	static int32_t x451 = 3809;
	uint64_t x452 = UINT64_MAX;
	static uint64_t t89 = 156832776LLU;

    t89 = ((x449%x450)*(x451+x452));

    if (t89 != 483616LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x453 = INT64_MIN;
	static int8_t x454 = -1;
	uint16_t x456 = 5409U;

    t90 = ((x453%x454)*(x455+x456));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x457 = 6U;
	static int8_t x460 = -1;
	volatile uint32_t t91 = 141U;

    t91 = ((x457%x458)*(x459+x460));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x461 = INT16_MAX;
	uint64_t x462 = 179150LLU;
	uint8_t x463 = 6U;
	int8_t x464 = -28;
	volatile uint64_t t92 = 407408817259LLU;

    t92 = ((x461%x462)*(x463+x464));

    if (t92 != 18446744073708830742LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x465 = 27;
	uint32_t x466 = UINT32_MAX;
	int8_t x467 = -1;
	uint32_t x468 = 0U;
	static uint32_t t93 = 940568759U;

    t93 = ((x465%x466)*(x467+x468));

    if (t93 != 4294967269U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x469 = UINT64_MAX;
	int64_t x470 = INT64_MIN;
	volatile uint16_t x471 = UINT16_MAX;
	uint8_t x472 = 118U;
	uint64_t t94 = 983260290364612683LLU;

    t94 = ((x469%x470)*(x471+x472));

    if (t94 != 9223372036854710155LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x473 = INT32_MIN;
	int16_t x474 = INT16_MIN;
	int32_t x475 = 97924;
	int8_t x476 = INT8_MAX;
	static int32_t t95 = -311388380;

    t95 = ((x473%x474)*(x475+x476));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x477 = -1086162;
	volatile uint64_t x478 = UINT64_MAX;
	int64_t x479 = -12169376868378LL;
	volatile uint64_t t96 = 15144462039LLU;

    t96 = ((x477%x478)*(x479+x480));

    if (t96 != 13217915147723013420LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x481 = INT64_MIN;
	int64_t x482 = INT64_MIN;
	uint64_t x483 = 4768963820879243LLU;
	static int32_t x484 = INT32_MAX;
	static uint64_t t97 = 83753594298393086LLU;

    t97 = ((x481%x482)*(x483+x484));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x485 = -40;
	uint64_t x486 = 14616896087457110LLU;
	uint16_t x488 = 14U;

    t98 = ((x485%x486)*(x487+x488));

    if (t98 != 2875747402823828LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x489 = -3;
	int8_t x490 = INT8_MIN;
	volatile int8_t x491 = 1;
	volatile int32_t t99 = -2365;

    t99 = ((x489%x490)*(x491+x492));

    if (t99 != -196608) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x493 = INT16_MIN;
	uint16_t x496 = 94U;
	volatile uint64_t t100 = 285893173441LLU;

    t100 = ((x493%x494)*(x495+x496));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x497 = -1LL;
	int16_t x500 = -1;

    t101 = ((x497%x498)*(x499+x500));

    if (t101 != 45LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x506 = INT64_MIN;
	int16_t x508 = 0;
	volatile int64_t t102 = -14484477217730LL;

    t102 = ((x505%x506)*(x507+x508));

    if (t102 != -11593215LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x509 = 1U;
	int8_t x510 = 8;
	int64_t t103 = -300748690172LL;

    t103 = ((x509%x510)*(x511+x512));

    if (t103 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x513 = 112829LLU;
	uint64_t t104 = 58LLU;

    t104 = ((x513%x514)*(x515+x516));

    if (t104 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x527 = INT16_MAX;
	int16_t x528 = -1;
	volatile int64_t t105 = -40874958031LL;

    t105 = ((x525%x526)*(x527+x528));

    if (t105 != 4161282LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x531 = INT8_MIN;
	volatile int8_t x532 = INT8_MIN;
	int64_t t106 = -781635LL;

    t106 = ((x529%x530)*(x531+x532));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x533 = -50;
	int16_t x534 = INT16_MIN;
	uint8_t x535 = 1U;
	static uint64_t x536 = 577718088202253LLU;

    t107 = ((x533%x534)*(x535+x536));

    if (t107 != 18417858169299438916LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x541 = -1;
	int32_t x543 = -1;
	uint32_t x544 = 717U;
	static int64_t t108 = 1LL;

    t108 = ((x541%x542)*(x543+x544));

    if (t108 != -716LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x545 = UINT16_MAX;
	uint16_t x546 = UINT16_MAX;
	int64_t x547 = -64993LL;
	int16_t x548 = -14;

    t109 = ((x545%x546)*(x547+x548));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x549 = INT8_MAX;
	volatile int16_t x550 = -12;
	int8_t x551 = INT8_MIN;
	int8_t x552 = 59;

    t110 = ((x549%x550)*(x551+x552));

    if (t110 != -483) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x553 = 1;
	static uint8_t x554 = UINT8_MAX;
	static int64_t x555 = -1LL;
	int64_t x556 = INT64_MAX;
	int64_t t111 = 252779170679946982LL;

    t111 = ((x553%x554)*(x555+x556));

    if (t111 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x561 = -1;
	uint8_t x562 = 2U;
	uint64_t x563 = 303738924699160590LLU;
	uint8_t x564 = 0U;
	static volatile uint64_t t112 = 8233715173LLU;

    t112 = ((x561%x562)*(x563+x564));

    if (t112 != 18143005149010391026LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x565 = UINT64_MAX;
	int32_t x567 = 3684;
	static int32_t x568 = -1;
	uint64_t t113 = 4064358LLU;

    t113 = ((x565%x566)*(x567+x568));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x569 = 214LLU;
	static int32_t x570 = INT32_MIN;
	static uint16_t x571 = 6512U;
	static int8_t x572 = INT8_MIN;

    t114 = ((x569%x570)*(x571+x572));

    if (t114 != 1366176LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x573 = -1;
	int8_t x574 = 1;
	static volatile int32_t x575 = -1;
	int32_t t115 = -2009691;

    t115 = ((x573%x574)*(x575+x576));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x577 = INT32_MIN;
	int64_t x578 = INT64_MIN;
	int64_t x579 = 11170LL;
	static int16_t x580 = INT16_MIN;

    t116 = ((x577%x578)*(x579+x580));

    if (t116 != 46381351829504LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x581 = INT64_MIN;
	int16_t x582 = INT16_MIN;
	static int64_t t117 = -30155101756LL;

    t117 = ((x581%x582)*(x583+x584));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x585 = UINT16_MAX;
	volatile int64_t x586 = -1LL;
	int16_t x587 = -1;
	volatile int16_t x588 = -115;
	volatile int64_t t118 = -54771363969LL;

    t118 = ((x585%x586)*(x587+x588));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x589 = -1;
	uint16_t x590 = 243U;
	uint64_t x591 = 56513788LLU;
	int32_t x592 = 32;
	volatile uint64_t t119 = 16448055992887LLU;

    t119 = ((x589%x590)*(x591+x592));

    if (t119 != 18446744073653037796LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x593 = -1;
	int8_t x594 = INT8_MAX;
	static int16_t x595 = 302;
	static int16_t x596 = INT16_MIN;
	int32_t t120 = 118;

    t120 = ((x593%x594)*(x595+x596));

    if (t120 != 32466) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x597 = 49U;
	int16_t x598 = -1;
	uint8_t x599 = 0U;
	uint16_t x600 = 525U;
	static volatile int32_t t121 = -3041170;

    t121 = ((x597%x598)*(x599+x600));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x601 = INT64_MIN;
	int8_t x602 = INT8_MIN;
	int64_t x603 = INT64_MIN;
	uint64_t x604 = 1626078963104LLU;
	volatile uint64_t t122 = 326LLU;

    t122 = ((x601%x602)*(x603+x604));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x609 = 0U;
	int16_t x610 = -52;
	static volatile int64_t x611 = -1LL;
	int8_t x612 = -1;
	int64_t t123 = 1LL;

    t123 = ((x609%x610)*(x611+x612));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x613 = UINT64_MAX;
	static uint64_t x616 = UINT64_MAX;
	volatile uint64_t t124 = 4014418477LLU;

    t124 = ((x613%x614)*(x615+x616));

    if (t124 != 3024LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x617 = -1;
	uint32_t x619 = 7993251U;
	int8_t x620 = INT8_MIN;
	uint32_t t125 = 263133225U;

    t125 = ((x617%x618)*(x619+x620));

    if (t125 != 4286974173U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x621 = -3;
	uint16_t x623 = 28U;
	uint64_t t126 = 29471327LLU;

    t126 = ((x621%x622)*(x623+x624));

    if (t126 != 50180025022490LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x625 = 1;
	int8_t x626 = INT8_MIN;
	uint64_t x627 = 4275886916558083LLU;
	int64_t x628 = INT64_MAX;
	volatile uint64_t t127 = 544868LLU;

    t127 = ((x625%x626)*(x627+x628));

    if (t127 != 9227647923771333890LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x629 = 119U;
	uint16_t x630 = 30455U;
	static volatile uint8_t x631 = 89U;
	int16_t x632 = -1;
	int32_t t128 = -16440685;

    t128 = ((x629%x630)*(x631+x632));

    if (t128 != 10472) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x633 = -1LL;
	int16_t x635 = INT16_MIN;
	int64_t t129 = 33003807167LL;

    t129 = ((x633%x634)*(x635+x636));

    if (t129 != 65536LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x637 = -1LL;
	uint16_t x638 = 20U;
	int8_t x639 = 10;

    t130 = ((x637%x638)*(x639+x640));

    if (t130 != -129LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x646 = -1;
	uint16_t x647 = 140U;
	int64_t x648 = INT64_MIN;
	int64_t t131 = 1LL;

    t131 = ((x645%x646)*(x647+x648));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x653 = INT8_MIN;
	static int8_t x654 = 1;
	static int8_t x655 = -1;
	int64_t x656 = -1LL;
	static int64_t t132 = -41LL;

    t132 = ((x653%x654)*(x655+x656));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x657 = INT16_MIN;
	static int16_t x658 = -3;
	int32_t x659 = -9628;
	int16_t x660 = INT16_MIN;
	static int32_t t133 = 370222169;

    t133 = ((x657%x658)*(x659+x660));

    if (t133 != 84792) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x661 = -40;
	uint64_t x662 = 12583168771927LLU;
	static uint8_t x663 = 5U;
	int16_t x664 = 1;

    t134 = ((x661%x662)*(x663+x664));

    if (t134 != 44409576890886LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x665 = 15U;
	int64_t x666 = INT64_MIN;
	volatile int16_t x667 = INT16_MIN;
	static volatile int16_t x668 = INT16_MIN;
	static int64_t t135 = 151235293797LL;

    t135 = ((x665%x666)*(x667+x668));

    if (t135 != -983040LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x669 = INT8_MIN;
	uint8_t x670 = 3U;
	uint8_t x672 = 1U;
	int32_t t136 = 3004;

    t136 = ((x669%x670)*(x671+x672));

    if (t136 != 254) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x683 = UINT16_MAX;
	int8_t x684 = 0;

    t137 = ((x681%x682)*(x683+x684));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x685 = INT32_MIN;
	int32_t x686 = INT32_MAX;
	int16_t x687 = INT16_MAX;
	int64_t x688 = INT64_MIN;
	int64_t t138 = 5874370LL;

    t138 = ((x685%x686)*(x687+x688));

    if (t138 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x693 = INT8_MIN;
	int64_t x695 = -1LL;
	uint16_t x696 = UINT16_MAX;
	int64_t t139 = -1044847LL;

    t139 = ((x693%x694)*(x695+x696));

    if (t139 != -8388352LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x697 = -1LL;
	uint16_t x698 = 2U;
	static volatile uint16_t x699 = 1U;
	static uint16_t x700 = 17U;
	volatile int64_t t140 = -8706607429315291LL;

    t140 = ((x697%x698)*(x699+x700));

    if (t140 != -18LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x701 = INT16_MAX;
	volatile int16_t x702 = INT16_MIN;
	volatile int16_t x703 = INT16_MIN;
	volatile int32_t x704 = -1;

    t141 = ((x701%x702)*(x703+x704));

    if (t141 != -1073741823) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x705 = INT64_MAX;
	uint16_t x706 = UINT16_MAX;
	volatile int16_t x707 = INT16_MAX;
	int32_t x708 = INT32_MIN;
	int64_t t142 = 60446379113LL;

    t142 = ((x705%x706)*(x707+x708));

    if (t142 != -70365523017727LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x709 = 904U;
	int32_t x710 = INT32_MIN;
	int16_t x711 = INT16_MAX;
	uint64_t t143 = 309815LLU;

    t143 = ((x709%x710)*(x711+x712));

    if (t143 != 162776270384LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x713 = 266LLU;
	int64_t x714 = 123103LL;
	int16_t x715 = INT16_MIN;

    t144 = ((x713%x714)*(x715+x716));

    if (t144 != 571221933814LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x717 = INT8_MAX;
	static uint64_t x718 = 1549282710654768745LLU;
	volatile uint32_t x719 = UINT32_MAX;
	static uint64_t x720 = 17025062185236LLU;

    t145 = ((x717%x718)*(x719+x720));

    if (t145 != 2162728358371437LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x725 = 1;
	uint16_t x726 = 2U;
	static int8_t x727 = INT8_MIN;
	static int8_t x728 = -10;
	int32_t t146 = -3;

    t146 = ((x725%x726)*(x727+x728));

    if (t146 != -138) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x729 = -1;
	static int64_t x730 = -1LL;
	uint32_t x731 = 400U;
	volatile uint16_t x732 = 149U;

    t147 = ((x729%x730)*(x731+x732));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x733 = INT8_MAX;
	int32_t x734 = INT32_MIN;
	int64_t x735 = -18622089LL;

    t148 = ((x733%x734)*(x735+x736));

    if (t148 != 270365417866LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x737 = UINT32_MAX;
	int8_t x739 = INT8_MIN;
	static volatile uint32_t t149 = 309929U;

    t149 = ((x737%x738)*(x739+x740));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x741 = 2279;
	uint32_t x742 = UINT32_MAX;
	uint16_t x744 = UINT16_MAX;
	volatile uint32_t t150 = 35884084U;

    t150 = ((x741%x742)*(x743+x744));

    if (t150 != 149351986U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x745 = INT16_MIN;
	uint32_t x746 = UINT32_MAX;
	volatile uint64_t x748 = 91884331LLU;
	uint64_t t151 = 6207987834318887LLU;

    t151 = ((x745%x746)*(x747+x748));

    if (t151 != 9023341527243587584LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x749 = INT64_MIN;
	int32_t x750 = -1;
	int16_t x751 = -347;
	volatile int64_t t152 = 803359LL;

    t152 = ((x749%x750)*(x751+x752));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x754 = UINT16_MAX;
	int32_t x755 = INT32_MAX;
	uint64_t x756 = 378808393414802LLU;
	static uint64_t t153 = 1006LLU;

    t153 = ((x753%x754)*(x755+x756));

    if (t153 != 6033880269549174784LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x757 = INT64_MAX;
	int8_t x758 = -1;
	static uint64_t x759 = 372593004848LLU;
	int8_t x760 = INT8_MAX;
	uint64_t t154 = 1LLU;

    t154 = ((x757%x758)*(x759+x760));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x773 = -72LL;
	int8_t x774 = -2;
	uint8_t x775 = 0U;
	int64_t t155 = -4682730107LL;

    t155 = ((x773%x774)*(x775+x776));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x778 = UINT64_MAX;
	int8_t x779 = -1;
	int8_t x780 = -1;
	volatile uint64_t t156 = 3453125LLU;

    t156 = ((x777%x778)*(x779+x780));

    if (t156 != 4294967296LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x781 = 3U;
	uint64_t x782 = 388290277985600LLU;
	uint16_t x783 = UINT16_MAX;
	static int32_t x784 = 1;
	uint64_t t157 = 1877191LLU;

    t157 = ((x781%x782)*(x783+x784));

    if (t157 != 196608LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x786 = INT16_MAX;
	int8_t x787 = 1;
	int8_t x788 = -1;

    t158 = ((x785%x786)*(x787+x788));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x789 = 1;
	int64_t x790 = INT64_MIN;
	int64_t x792 = INT64_MAX;
	static int64_t t159 = 291LL;

    t159 = ((x789%x790)*(x791+x792));

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x793 = 64095805908957LLU;
	static uint64_t x794 = 46245LLU;
	uint64_t t160 = 62822LLU;

    t160 = ((x793%x794)*(x795+x796));

    if (t160 != 18446715729568066300LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x797 = -1LL;
	int32_t x798 = 5;
	static int8_t x799 = 38;
	static int16_t x800 = INT16_MIN;

    t161 = ((x797%x798)*(x799+x800));

    if (t161 != 32730LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x801 = INT8_MIN;
	int8_t x802 = -1;
	int64_t x803 = -1LL;
	volatile int64_t t162 = -967477573088482LL;

    t162 = ((x801%x802)*(x803+x804));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x809 = 659;
	int64_t x810 = -1261098827974132373LL;
	int16_t x811 = INT16_MAX;
	volatile int16_t x812 = INT16_MIN;
	int64_t t163 = 3845056402863LL;

    t163 = ((x809%x810)*(x811+x812));

    if (t163 != -659LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x813 = -106;
	int64_t x814 = -11053749683817561LL;
	int8_t x815 = INT8_MIN;
	uint16_t x816 = UINT16_MAX;
	volatile int64_t t164 = 153558782432LL;

    t164 = ((x813%x814)*(x815+x816));

    if (t164 != -6933142LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x821 = INT64_MAX;
	volatile int32_t x822 = -1;
	static volatile int32_t x823 = INT32_MIN;

    t165 = ((x821%x822)*(x823+x824));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x825 = -1;
	static volatile int8_t x826 = INT8_MAX;
	int8_t x827 = -2;
	int8_t x828 = 23;

    t166 = ((x825%x826)*(x827+x828));

    if (t166 != -21) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x830 = INT16_MIN;
	int64_t x831 = INT64_MIN;
	volatile uint64_t t167 = 126LLU;

    t167 = ((x829%x830)*(x831+x832));

    if (t167 != 18446744073709525286LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x833 = INT16_MAX;
	volatile int32_t x834 = INT32_MIN;
	int16_t x836 = INT16_MAX;

    t168 = ((x833%x834)*(x835+x836));

    if (t168 != 1073643522LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x845 = 7U;
	int8_t x848 = INT8_MIN;
	volatile int32_t t169 = 3;

    t169 = ((x845%x846)*(x847+x848));

    if (t169 != -903) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x861 = INT8_MAX;
	int16_t x863 = INT16_MAX;
	int64_t x864 = 60LL;

    t170 = ((x861%x862)*(x863+x864));

    if (t170 != 4169029LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x865 = INT32_MIN;
	int32_t x866 = INT32_MIN;
	static volatile uint64_t x867 = 1327906798453LLU;
	uint64_t x868 = 2089599509949350605LLU;

    t171 = ((x865%x866)*(x867+x868));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x870 = INT64_MAX;
	volatile uint8_t x871 = UINT8_MAX;
	int8_t x872 = INT8_MAX;
	int64_t t172 = -38LL;

    t172 = ((x869%x870)*(x871+x872));

    if (t172 != -12517376LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x873 = -1;
	static uint8_t x874 = 2U;
	int8_t x875 = INT8_MIN;
	int16_t x876 = INT16_MIN;
	int32_t t173 = -2890809;

    t173 = ((x873%x874)*(x875+x876));

    if (t173 != 32896) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x877 = 4U;
	uint16_t x878 = UINT16_MAX;
	int8_t x880 = -1;

    t174 = ((x877%x878)*(x879+x880));

    if (t174 != 1908084U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x882 = 1LL;
	int64_t x883 = INT64_MIN;
	uint64_t t175 = 1550030548071613LLU;

    t175 = ((x881%x882)*(x883+x884));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x886 = INT16_MIN;
	uint32_t x887 = 116U;
	uint32_t x888 = UINT32_MAX;
	volatile uint32_t t176 = 24559093U;

    t176 = ((x885%x886)*(x887+x888));

    if (t176 != 4294904736U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x891 = INT64_MIN;
	uint16_t x892 = 301U;

    t177 = ((x889%x890)*(x891+x892));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x894 = 26152016930LLU;
	uint64_t x895 = UINT64_MAX;
	static uint32_t x896 = 25624116U;
	static uint64_t t178 = 2653LLU;

    t178 = ((x893%x894)*(x895+x896));

    if (t178 != 46507768725LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x897 = INT8_MIN;
	uint16_t x898 = 3U;
	volatile uint32_t x900 = 1514U;
	uint32_t t179 = 14521U;

    t179 = ((x897%x898)*(x899+x900));

    if (t179 != 4294718316U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x901 = -136329181293867229LL;
	volatile uint8_t x902 = 2U;
	volatile uint64_t x903 = UINT64_MAX;
	int32_t x904 = INT32_MAX;

    t180 = ((x901%x902)*(x903+x904));

    if (t180 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x906 = INT16_MAX;
	uint64_t x907 = 2121014516498LLU;
	int64_t x908 = -1LL;
	uint64_t t181 = 22680920520054LLU;

    t181 = ((x905%x906)*(x907+x908));

    if (t181 != 943851459841165LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x909 = 0;
	int16_t x910 = -161;
	int16_t x911 = -1;
	static int16_t x912 = INT16_MIN;

    t182 = ((x909%x910)*(x911+x912));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x913 = UINT8_MAX;
	uint16_t x914 = UINT16_MAX;
	static uint64_t x915 = 489614474139190908LLU;
	volatile int16_t x916 = 974;
	static volatile uint64_t t183 = 15420184577962LLU;

    t183 = ((x913%x914)*(x915+x916));

    if (t183 != 14171226463236620214LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x917 = 3490729435975968552LL;
	uint64_t x918 = 1LLU;
	uint8_t x919 = UINT8_MAX;
	uint64_t t184 = 96206478325LLU;

    t184 = ((x917%x918)*(x919+x920));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x921 = INT8_MIN;
	static uint16_t x922 = 3U;
	volatile uint32_t x923 = 11630U;
	volatile uint64_t t185 = 102885LLU;

    t185 = ((x921%x922)*(x923+x924));

    if (t185 != 18446744073707884206LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x925 = UINT16_MAX;
	int32_t x926 = -1;
	uint16_t x927 = 6638U;
	int64_t x928 = -1LL;
	int64_t t186 = -23501LL;

    t186 = ((x925%x926)*(x927+x928));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x929 = INT64_MIN;
	volatile int8_t x930 = 6;
	static int16_t x931 = -1;
	int64_t x932 = -1LL;
	static volatile int64_t t187 = -189393628LL;

    t187 = ((x929%x930)*(x931+x932));

    if (t187 != 4LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x933 = INT8_MAX;
	volatile int64_t x934 = INT64_MAX;
	uint8_t x935 = UINT8_MAX;
	volatile int64_t t188 = 25720258939750871LL;

    t188 = ((x933%x934)*(x935+x936));

    if (t188 != 32639LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x937 = -1LL;
	uint32_t x939 = UINT32_MAX;
	int32_t x940 = 74771;
	volatile int64_t t189 = 112985LL;

    t189 = ((x937%x938)*(x939+x940));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x950 = UINT64_MAX;
	int32_t x951 = 1381;
	int32_t x952 = INT32_MIN;

    t190 = ((x949%x950)*(x951+x952));

    if (t190 != 18446744071562069349LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x955 = INT8_MIN;

    t191 = ((x953%x954)*(x955+x956));

    if (t191 != -328960LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x957 = UINT16_MAX;
	int8_t x958 = INT8_MAX;
	int16_t x960 = -14649;
	int32_t t192 = 49545;

    t192 = ((x957%x958)*(x959+x960));

    if (t192 != -43950) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x965 = INT64_MIN;
	uint16_t x967 = UINT16_MAX;
	static uint16_t x968 = 103U;

    t193 = ((x965%x966)*(x967+x968));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x973 = UINT32_MAX;
	int16_t x974 = INT16_MIN;
	volatile int8_t x975 = INT8_MAX;
	int64_t x976 = -4079LL;
	volatile int64_t t194 = 18296LL;

    t194 = ((x973%x974)*(x975+x976));

    if (t194 != -129495184LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x977 = -15274705253135432LL;
	uint8_t x978 = UINT8_MAX;
	int64_t x979 = 9LL;
	volatile uint32_t x980 = UINT32_MAX;
	int64_t t195 = 519862438LL;

    t195 = ((x977%x978)*(x979+x980));

    if (t195 != -652835030208LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x981 = UINT64_MAX;
	int16_t x982 = -2885;
	volatile int32_t x983 = 2047;
	static volatile uint16_t x984 = UINT16_MAX;
	volatile uint64_t t196 = 1372LLU;

    t196 = ((x981%x982)*(x983+x984));

    if (t196 != 194906488LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x989 = INT16_MAX;
	static uint64_t x990 = UINT64_MAX;
	int8_t x991 = 1;
	static uint64_t x992 = 468840176LLU;
	uint64_t t197 = 136959547078LLU;

    t197 = ((x989%x990)*(x991+x992));

    if (t197 != 15362486079759LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x994 = INT64_MIN;
	int16_t x995 = -943;
	int8_t x996 = INT8_MAX;
	volatile int64_t t198 = -63LL;

    t198 = ((x993%x994)*(x995+x996));

    if (t198 != 2448LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x997 = UINT8_MAX;
	static uint32_t x999 = 507509U;
	int8_t x1000 = INT8_MAX;
	static volatile uint32_t t199 = 258481792U;

    t199 = ((x997%x998)*(x999+x1000));

    if (t199 != 129447180U) { NG(); } else { ; }
	
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

