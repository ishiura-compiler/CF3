
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

static uint32_t x1 = 3857U;
int32_t x2 = INT32_MAX;
volatile int32_t x10 = INT32_MIN;
int8_t x11 = INT8_MIN;
static volatile int32_t t2 = -3;
volatile int32_t x15 = -322324573;
int8_t x16 = INT8_MIN;
static int64_t x17 = 340607905LL;
int32_t t6 = -7105285;
int64_t x33 = INT64_MIN;
volatile uint32_t x36 = UINT32_MAX;
static int64_t x38 = 81049800804LL;
uint64_t x40 = 513914373068747LLU;
volatile uint32_t x48 = 408U;
int16_t x51 = -1;
volatile uint8_t x75 = UINT8_MAX;
int32_t x77 = -613;
volatile int8_t x80 = -12;
int64_t x82 = INT64_MIN;
uint64_t x96 = 1308706833946199235LLU;
volatile uint64_t t21 = 1204881448176421022LLU;
int64_t x119 = 61078048057LL;
static int64_t x122 = INT64_MIN;
static uint64_t x123 = 19386657632LLU;
int32_t x124 = -1;
int32_t x127 = INT32_MAX;
static uint64_t t27 = 7138033LLU;
static int8_t x132 = INT8_MAX;
static uint8_t x139 = 0U;
uint64_t x142 = UINT64_MAX;
uint32_t x145 = UINT32_MAX;
volatile int8_t x146 = -1;
static uint64_t x148 = 85LLU;
uint16_t x164 = UINT16_MAX;
volatile int32_t t36 = 160217006;
int16_t x176 = INT16_MAX;
static int32_t x180 = INT32_MIN;
uint32_t x184 = UINT32_MAX;
volatile uint64_t t40 = 387630720LLU;
uint64_t x187 = 566003LLU;
static uint64_t t41 = 23160040332400LLU;
static uint32_t x201 = 30514U;
int64_t x206 = INT64_MIN;
static uint8_t x208 = UINT8_MAX;
int32_t t45 = -78;
int32_t x211 = -6471030;
static int16_t x212 = INT16_MAX;
static int64_t x220 = 1071786LL;
uint64_t x233 = 229288024434185LLU;
static int16_t x251 = -2828;
volatile int16_t x254 = INT16_MAX;
int64_t t55 = -2LL;
int32_t x272 = -1;
int8_t x273 = -24;
int64_t x276 = INT64_MIN;
int64_t x281 = INT64_MIN;
volatile int8_t x283 = INT8_MIN;
int16_t x284 = -1;
volatile uint32_t t62 = 562180908U;
int64_t x297 = INT64_MIN;
int8_t x300 = -19;
int16_t x303 = INT16_MIN;
uint8_t x308 = 101U;
int8_t x311 = INT8_MAX;
volatile int64_t t68 = 75332LL;
volatile uint32_t t73 = 35832496U;
uint8_t x347 = 1U;
volatile int32_t t76 = -1663100;
int8_t x353 = INT8_MIN;
int64_t x355 = 811668077364245LL;
volatile int64_t t80 = 367LL;
int8_t x366 = -23;
static int16_t x373 = 3;
static int32_t x374 = -1;
static int16_t x393 = INT16_MIN;
int16_t x395 = 1;
int8_t x403 = -12;
int64_t x404 = INT64_MIN;
int8_t x407 = INT8_MIN;
volatile uint8_t x408 = UINT8_MAX;
volatile uint32_t x412 = 36U;
uint32_t x422 = 250010927U;
int32_t x429 = INT32_MIN;
static volatile uint64_t t95 = 356437498932710731LLU;
static uint32_t x442 = 66385805U;
int8_t x443 = 61;
volatile int32_t x449 = -1190;
uint64_t x451 = UINT64_MAX;
int32_t x478 = INT32_MIN;
int16_t x488 = -1;
volatile int64_t t104 = -30569817977179LL;
static volatile int16_t x501 = 10;
static uint64_t x502 = 1383415678862548528LLU;
int8_t x507 = -1;
int64_t x511 = INT64_MAX;
static int8_t x513 = INT8_MAX;
uint64_t x516 = 3LLU;
int8_t x517 = -1;
uint8_t x518 = UINT8_MAX;
static uint16_t x521 = 1U;
uint16_t x523 = 13U;
volatile int32_t x539 = -1;
int32_t t113 = 70676255;
volatile int16_t x553 = -1;
int16_t x555 = INT16_MAX;
volatile int16_t x561 = INT16_MIN;
int16_t x584 = -2;
volatile int32_t t121 = -2788;
int16_t x587 = 7774;
int32_t t122 = 30549874;
volatile int16_t x590 = 0;
int32_t x594 = -1;
int16_t x598 = INT16_MIN;
int16_t x607 = INT16_MAX;
static volatile uint16_t x611 = 89U;
volatile int32_t t127 = -106;
int8_t x614 = INT8_MIN;
int32_t x623 = 92672524;
static int32_t x628 = INT32_MAX;
int64_t x629 = INT64_MAX;
static int16_t x632 = INT16_MIN;
volatile int32_t t132 = -940955372;
static int8_t x638 = -1;
int8_t x647 = -21;
int16_t x648 = -47;
volatile int32_t t134 = 643;
int32_t x649 = INT32_MAX;
uint32_t x650 = 7U;
volatile int32_t x654 = 1696035;
int16_t x655 = INT16_MIN;
int64_t x656 = -4500685LL;
volatile int32_t x657 = INT32_MIN;
volatile uint32_t t137 = 66U;
int64_t x665 = INT64_MAX;
int32_t t139 = -44;
volatile uint16_t x674 = 28U;
static int8_t x676 = -1;
static volatile uint64_t t141 = 32555LLU;
int32_t t142 = 3;
int32_t x686 = INT32_MAX;
int8_t x687 = 14;
int8_t x690 = INT8_MAX;
volatile int8_t x700 = INT8_MAX;
int32_t x702 = -10529;
int8_t x707 = 3;
int8_t x712 = 3;
static volatile int64_t t149 = 31913LL;
static int64_t x728 = 767LL;
int32_t x730 = -1;
int32_t x738 = INT32_MAX;
int16_t x740 = INT16_MIN;
volatile int16_t x741 = INT16_MIN;
static uint8_t x744 = 85U;
volatile int16_t x749 = INT16_MIN;
uint16_t x750 = UINT16_MAX;
int64_t t157 = -126308LL;
volatile int32_t x754 = INT32_MAX;
int32_t x757 = 123310945;
uint16_t x758 = 1U;
volatile int8_t x762 = INT8_MIN;
int32_t x763 = -17;
int16_t x765 = -1;
int8_t x771 = -1;
static volatile int64_t x781 = -88976776LL;
uint16_t x784 = 25857U;
volatile int32_t x804 = -77486;
int16_t x805 = -1;
uint32_t x806 = UINT32_MAX;
int32_t x810 = INT32_MIN;
static volatile int64_t x813 = -1LL;
uint32_t x814 = UINT32_MAX;
int32_t t172 = -1;
uint64_t x832 = UINT64_MAX;
uint64_t x841 = 0LLU;
int16_t x844 = INT16_MAX;
static int32_t t176 = 32435059;
int8_t x846 = 0;
int32_t x847 = 535;
int16_t x850 = -1;
uint32_t x858 = UINT32_MAX;
volatile int32_t x861 = 915471;
uint64_t x863 = UINT64_MAX;
volatile int16_t x870 = -1;
volatile int64_t x876 = INT64_MIN;
volatile int32_t x886 = INT32_MAX;
volatile int32_t x893 = INT32_MAX;
int8_t x903 = INT8_MIN;
uint8_t x905 = 67U;
int16_t x913 = INT16_MIN;
volatile int16_t x920 = INT16_MAX;
int64_t x925 = INT64_MIN;
volatile int64_t x933 = INT64_MIN;
static int8_t x936 = -10;
int64_t x938 = INT64_MAX;
volatile int32_t x940 = INT32_MAX;
static volatile uint64_t t196 = 212142LLU;
uint64_t x942 = 70LLU;
int32_t x945 = INT32_MIN;
int64_t t198 = -102LL;
int32_t x958 = INT32_MIN;
volatile uint16_t x959 = UINT16_MAX;


void f0(void) {
    	static volatile int32_t x3 = -1;
	volatile uint16_t x4 = 7U;
	volatile int32_t t0 = 0;

    t0 = (((x1==x2)-x3)/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	volatile int64_t x6 = 5527333LL;
	int64_t x7 = 42586LL;
	int16_t x8 = 54;
	volatile int64_t t1 = 63603146LL;

    t1 = (((x5==x6)-x7)/x8);

    if (t1 != -788LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	uint16_t x12 = 32573U;

    t2 = (((x9==x10)-x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	static int8_t x14 = INT8_MIN;
	static volatile int32_t t3 = 1618;

    t3 = (((x13==x14)-x15)/x16);

    if (t3 != -2518160) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = 1099705563LL;
	int32_t x19 = -2078200;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = -6652481LL;

    t4 = (((x17==x18)-x19)/x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MAX;
	volatile int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MAX;
	static volatile int32_t t5 = -1;

    t5 = (((x21==x22)-x23)/x24);

    if (t5 != 258) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = UINT64_MAX;
	int8_t x30 = 1;
	static int16_t x31 = 3;
	int16_t x32 = -1;

    t6 = (((x29==x30)-x31)/x32);

    if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x34 = 0;
	static int16_t x35 = -11;
	uint32_t t7 = 5874806U;

    t7 = (((x33==x34)-x35)/x36);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x37 = INT16_MIN;
	int16_t x39 = INT16_MAX;
	volatile uint64_t t8 = 2785LLU;

    t8 = (((x37==x38)-x39)/x40);

    if (t8 != 35894LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = INT64_MAX;
	int64_t x42 = INT64_MIN;
	static int32_t x43 = INT32_MAX;
	static volatile uint64_t x44 = 144754114LLU;
	volatile uint64_t t9 = 54834961874LLU;

    t9 = (((x41==x42)-x43)/x44);

    if (t9 != 127435024551LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MIN;
	static int8_t x46 = INT8_MAX;
	uint64_t x47 = UINT64_MAX;
	static volatile uint64_t t10 = 1410LLU;

    t10 = (((x45==x46)-x47)/x48);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x49 = 117LLU;
	volatile uint8_t x50 = UINT8_MAX;
	int64_t x52 = INT64_MIN;
	int64_t t11 = -537780410LL;

    t11 = (((x49==x50)-x51)/x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 780447597763LLU;
	int8_t x54 = -1;
	static uint32_t x55 = 1759781U;
	int8_t x56 = -26;
	volatile uint32_t t12 = 46897U;

    t12 = (((x53==x54)-x55)/x56);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = -1LL;
	uint8_t x58 = 15U;
	uint8_t x59 = UINT8_MAX;
	volatile int64_t x60 = -21963779LL;
	int64_t t13 = -67697096679LL;

    t13 = (((x57==x58)-x59)/x60);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = 94U;
	static int8_t x66 = INT8_MAX;
	int32_t x67 = -12;
	uint16_t x68 = 86U;
	volatile int32_t t14 = 327589712;

    t14 = (((x65==x66)-x67)/x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MAX;
	int64_t x70 = INT64_MAX;
	volatile int64_t x71 = -30436LL;
	uint32_t x72 = 30898148U;
	volatile int64_t t15 = -490041519583447053LL;

    t15 = (((x69==x70)-x71)/x72);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = INT16_MAX;
	volatile uint8_t x74 = UINT8_MAX;
	uint8_t x76 = 1U;
	volatile int32_t t16 = 991994417;

    t16 = (((x73==x74)-x75)/x76);

    if (t16 != -255) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x78 = 9772248U;
	static int64_t x79 = 7441LL;
	int64_t t17 = -19LL;

    t17 = (((x77==x78)-x79)/x80);

    if (t17 != 620LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x81 = 60588854688LLU;
	int32_t x83 = -13;
	int8_t x84 = INT8_MIN;
	volatile int32_t t18 = -1;

    t18 = (((x81==x82)-x83)/x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = UINT16_MAX;
	int32_t x86 = -315;
	int8_t x87 = INT8_MAX;
	volatile int8_t x88 = 46;
	volatile int32_t t19 = 0;

    t19 = (((x85==x86)-x87)/x88);

    if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MIN;
	static int16_t x91 = 10;
	int32_t x92 = INT32_MAX;
	int32_t t20 = 113636;

    t20 = (((x89==x90)-x91)/x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = INT32_MAX;
	uint64_t x94 = 4333150505956808LLU;
	volatile uint32_t x95 = UINT32_MAX;

    t21 = (((x93==x94)-x95)/x96);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = 429340661867LLU;
	int16_t x98 = INT16_MAX;
	int32_t x99 = -2124;
	uint64_t x100 = 327595LLU;
	volatile uint64_t t22 = 102977947600706LLU;

    t22 = (((x97==x98)-x99)/x100);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	uint16_t x106 = 122U;
	volatile int64_t x107 = 177449LL;
	int64_t x108 = INT64_MIN;
	static volatile int64_t t23 = 504695666784667849LL;

    t23 = (((x105==x106)-x107)/x108);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x113 = INT32_MIN;
	int32_t x114 = 138193;
	static volatile int32_t x115 = 2664;
	uint64_t x116 = 178632706254226LLU;
	uint64_t t24 = 9068LLU;

    t24 = (((x113==x114)-x115)/x116);

    if (t24 != 103266LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x117 = UINT64_MAX;
	int64_t x118 = -2LL;
	int32_t x120 = INT32_MAX;
	static volatile int64_t t25 = -3969408805689469101LL;

    t25 = (((x117==x118)-x119)/x120);

    if (t25 != -28LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x121 = INT8_MAX;
	volatile uint64_t t26 = 1115833593477971LLU;

    t26 = (((x121==x122)-x123)/x124);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x125 = 18U;
	uint16_t x126 = UINT16_MAX;
	uint64_t x128 = 1827688053LLU;

    t27 = (((x125==x126)-x127)/x128);

    if (t27 != 10092939022LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x129 = INT32_MIN;
	volatile uint64_t x130 = 1159572583LLU;
	uint64_t x131 = UINT64_MAX;
	uint64_t t28 = 463162LLU;

    t28 = (((x129==x130)-x131)/x132);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = INT8_MAX;
	static uint16_t x134 = UINT16_MAX;
	static int64_t x135 = -1LL;
	volatile int32_t x136 = INT32_MAX;
	static int64_t t29 = -162LL;

    t29 = (((x133==x134)-x135)/x136);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x137 = UINT64_MAX;
	uint8_t x138 = 2U;
	static uint16_t x140 = 3607U;
	volatile int32_t t30 = -3343073;

    t30 = (((x137==x138)-x139)/x140);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x141 = 812115300789LLU;
	int16_t x143 = -2856;
	static volatile int8_t x144 = INT8_MAX;
	volatile int32_t t31 = 396695;

    t31 = (((x141==x142)-x143)/x144);

    if (t31 != 22) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x147 = -1LL;
	volatile uint64_t t32 = 8022523865133488950LLU;

    t32 = (((x145==x146)-x147)/x148);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x149 = 75591U;
	static int8_t x150 = INT8_MIN;
	static uint32_t x151 = 74737380U;
	volatile int64_t x152 = 724810140270341LL;
	static int64_t t33 = -320091669576110LL;

    t33 = (((x149==x150)-x151)/x152);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x153 = -1;
	int16_t x154 = 1;
	int8_t x155 = INT8_MAX;
	int16_t x156 = 1;
	static int32_t t34 = 1;

    t34 = (((x153==x154)-x155)/x156);

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x157 = 30U;
	uint32_t x158 = UINT32_MAX;
	static uint64_t x159 = UINT64_MAX;
	volatile int16_t x160 = INT16_MAX;
	uint64_t t35 = 266861219717LLU;

    t35 = (((x157==x158)-x159)/x160);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x161 = 918350799;
	int64_t x162 = INT64_MIN;
	static int8_t x163 = INT8_MIN;

    t36 = (((x161==x162)-x163)/x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x165 = INT16_MIN;
	static int16_t x166 = INT16_MAX;
	int8_t x167 = INT8_MIN;
	static uint64_t x168 = 193657047085283LLU;
	static volatile uint64_t t37 = 6288531907LLU;

    t37 = (((x165==x166)-x167)/x168);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x173 = INT64_MAX;
	volatile uint8_t x174 = UINT8_MAX;
	int8_t x175 = INT8_MAX;
	int32_t t38 = 4557468;

    t38 = (((x173==x174)-x175)/x176);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x177 = INT32_MAX;
	int64_t x178 = INT64_MAX;
	volatile uint64_t x179 = 686016LLU;
	uint64_t t39 = 161LLU;

    t39 = (((x177==x178)-x179)/x180);

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x181 = INT8_MAX;
	uint8_t x182 = 1U;
	uint64_t x183 = 51326106418012446LLU;

    t40 = (((x181==x182)-x183)/x184);

    if (t40 != 4283017006LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x185 = -1;
	int64_t x186 = -26530LL;
	int32_t x188 = INT32_MIN;

    t41 = (((x185==x186)-x187)/x188);

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x193 = 0;
	int16_t x194 = -1;
	int16_t x195 = -2044;
	uint16_t x196 = UINT16_MAX;
	int32_t t42 = -13;

    t42 = (((x193==x194)-x195)/x196);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x197 = INT64_MAX;
	volatile int8_t x198 = -1;
	int16_t x199 = -1;
	volatile int64_t x200 = -1LL;
	volatile int64_t t43 = -66725465346803700LL;

    t43 = (((x197==x198)-x199)/x200);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x202 = -1;
	volatile int8_t x203 = INT8_MIN;
	volatile uint32_t x204 = UINT32_MAX;
	volatile uint32_t t44 = 130603U;

    t44 = (((x201==x202)-x203)/x204);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x205 = INT32_MIN;
	int32_t x207 = 943171488;

    t45 = (((x205==x206)-x207)/x208);

    if (t45 != -3698711) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x209 = INT32_MIN;
	int8_t x210 = 3;
	static volatile int32_t t46 = -16605575;

    t46 = (((x209==x210)-x211)/x212);

    if (t46 != 197) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x217 = INT8_MIN;
	static volatile uint8_t x218 = UINT8_MAX;
	uint64_t x219 = 108799121248703LLU;
	volatile uint64_t t47 = 351001682527574LLU;

    t47 = (((x217==x218)-x219)/x220);

    if (t47 != 17211117960664LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x225 = UINT8_MAX;
	int8_t x226 = -3;
	int8_t x227 = -44;
	uint64_t x228 = 2724643LLU;
	uint64_t t48 = 103633187122893LLU;

    t48 = (((x225==x226)-x227)/x228);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x229 = -1;
	int16_t x230 = 477;
	int8_t x231 = INT8_MIN;
	int64_t x232 = -1LL;
	volatile int64_t t49 = -4LL;

    t49 = (((x229==x230)-x231)/x232);

    if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x234 = 1U;
	int16_t x235 = -1148;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t50 = -111;

    t50 = (((x233==x234)-x235)/x236);

    if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x237 = -45165236LL;
	int16_t x238 = INT16_MIN;
	uint8_t x239 = 0U;
	uint64_t x240 = 16539693LLU;
	volatile uint64_t t51 = 202207366017151863LLU;

    t51 = (((x237==x238)-x239)/x240);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x245 = 15682205LLU;
	static int8_t x246 = INT8_MAX;
	int16_t x247 = INT16_MIN;
	static int8_t x248 = 3;
	static int32_t t52 = 346;

    t52 = (((x245==x246)-x247)/x248);

    if (t52 != 10922) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x249 = 1;
	uint16_t x250 = 2U;
	uint64_t x252 = 103887062986LLU;
	volatile uint64_t t53 = 3LLU;

    t53 = (((x249==x250)-x251)/x252);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x253 = 943;
	int8_t x255 = INT8_MIN;
	int8_t x256 = -1;
	volatile int32_t t54 = 0;

    t54 = (((x253==x254)-x255)/x256);

    if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x257 = -2867LL;
	int16_t x258 = INT16_MIN;
	int8_t x259 = INT8_MIN;
	int64_t x260 = -8195259753271LL;

    t55 = (((x257==x258)-x259)/x260);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x261 = 254;
	static int8_t x262 = 42;
	uint16_t x263 = 3U;
	int64_t x264 = 1684583385431LL;
	static int64_t t56 = -20116831LL;

    t56 = (((x261==x262)-x263)/x264);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x265 = INT8_MAX;
	volatile int64_t x266 = -214149290266078824LL;
	static int32_t x267 = -1;
	static uint32_t x268 = 400438U;
	volatile uint32_t t57 = 81U;

    t57 = (((x265==x266)-x267)/x268);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x269 = UINT32_MAX;
	int16_t x270 = INT16_MAX;
	static int16_t x271 = -1;
	int32_t t58 = -3;

    t58 = (((x269==x270)-x271)/x272);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x274 = UINT32_MAX;
	static volatile uint32_t x275 = 14676U;
	volatile int64_t t59 = -80989LL;

    t59 = (((x273==x274)-x275)/x276);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x282 = 210679484525263077LLU;
	static int32_t t60 = -337784;

    t60 = (((x281==x282)-x283)/x284);

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x285 = UINT16_MAX;
	uint16_t x286 = UINT16_MAX;
	static int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MAX;
	int32_t t61 = -981311355;

    t61 = (((x285==x286)-x287)/x288);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x289 = INT8_MIN;
	int64_t x290 = 81200601683268LL;
	uint32_t x291 = 1520036556U;
	uint16_t x292 = 301U;

    t62 = (((x289==x290)-x291)/x292);

    if (t62 != 9219039U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x293 = INT32_MIN;
	uint8_t x294 = 125U;
	int8_t x295 = INT8_MAX;
	int8_t x296 = INT8_MAX;
	int32_t t63 = 5341522;

    t63 = (((x293==x294)-x295)/x296);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x298 = 530234493LLU;
	int16_t x299 = INT16_MAX;
	static volatile int32_t t64 = -873599555;

    t64 = (((x297==x298)-x299)/x300);

    if (t64 != 1724) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x301 = 12U;
	volatile int32_t x302 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t65 = -143;

    t65 = (((x301==x302)-x303)/x304);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x305 = 174U;
	volatile int16_t x306 = INT16_MAX;
	int8_t x307 = -1;
	int32_t t66 = 2032699;

    t66 = (((x305==x306)-x307)/x308);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x309 = INT16_MIN;
	int64_t x310 = INT64_MAX;
	int8_t x312 = INT8_MIN;
	int32_t t67 = 3367826;

    t67 = (((x309==x310)-x311)/x312);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x313 = 13LLU;
	static int32_t x314 = -1;
	static volatile uint32_t x315 = 2594550U;
	int64_t x316 = -1LL;

    t68 = (((x313==x314)-x315)/x316);

    if (t68 != -4292372746LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x317 = 93U;
	int8_t x318 = INT8_MIN;
	uint8_t x319 = UINT8_MAX;
	int32_t x320 = INT32_MAX;
	static int32_t t69 = -2132;

    t69 = (((x317==x318)-x319)/x320);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x321 = INT16_MIN;
	int8_t x322 = 0;
	uint16_t x323 = UINT16_MAX;
	static int8_t x324 = INT8_MIN;
	int32_t t70 = 572155;

    t70 = (((x321==x322)-x323)/x324);

    if (t70 != 511) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x325 = INT32_MIN;
	int32_t x326 = -1;
	uint32_t x327 = 874U;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t71 = 219463021868LLU;

    t71 = (((x325==x326)-x327)/x328);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x329 = -327722LL;
	int64_t x330 = -1LL;
	int64_t x331 = -1LL;
	int16_t x332 = -693;
	int64_t t72 = -1LL;

    t72 = (((x329==x330)-x331)/x332);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x333 = UINT32_MAX;
	volatile int8_t x334 = INT8_MAX;
	static uint32_t x335 = 260401U;
	static volatile int8_t x336 = 2;

    t73 = (((x333==x334)-x335)/x336);

    if (t73 != 2147353447U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x337 = 8U;
	static int8_t x338 = -1;
	static int32_t x339 = INT32_MAX;
	static int64_t x340 = -1LL;
	static volatile int64_t t74 = 1LL;

    t74 = (((x337==x338)-x339)/x340);

    if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x341 = -1;
	int32_t x342 = INT32_MIN;
	int16_t x343 = -2;
	uint16_t x344 = 8U;
	volatile int32_t t75 = 26693;

    t75 = (((x341==x342)-x343)/x344);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x345 = -1;
	uint8_t x346 = 2U;
	uint8_t x348 = UINT8_MAX;

    t76 = (((x345==x346)-x347)/x348);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x349 = 2U;
	volatile int16_t x350 = INT16_MIN;
	int8_t x351 = -1;
	uint32_t x352 = 39U;
	static uint32_t t77 = 0U;

    t77 = (((x349==x350)-x351)/x352);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x354 = 63;
	volatile int8_t x356 = -1;
	int64_t t78 = 834312583363LL;

    t78 = (((x353==x354)-x355)/x356);

    if (t78 != 811668077364245LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x357 = -1;
	static int8_t x358 = INT8_MIN;
	static int32_t x359 = -1522281;
	uint16_t x360 = 60U;
	static int32_t t79 = -59321;

    t79 = (((x357==x358)-x359)/x360);

    if (t79 != 25371) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x361 = -6;
	int8_t x362 = -1;
	int64_t x363 = 37LL;
	static int16_t x364 = -5;

    t80 = (((x361==x362)-x363)/x364);

    if (t80 != 7LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x365 = 0;
	volatile int8_t x367 = INT8_MIN;
	int16_t x368 = 475;
	int32_t t81 = -1;

    t81 = (((x365==x366)-x367)/x368);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x369 = -38;
	int32_t x370 = INT32_MIN;
	int8_t x371 = 31;
	static int64_t x372 = 2482994455LL;
	volatile int64_t t82 = 117LL;

    t82 = (((x369==x370)-x371)/x372);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x375 = 276040695355LLU;
	int16_t x376 = -1;
	uint64_t t83 = 29LLU;

    t83 = (((x373==x374)-x375)/x376);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x377 = 648U;
	uint16_t x378 = 1U;
	int32_t x379 = -1;
	int64_t x380 = INT64_MAX;
	int64_t t84 = -54681419300LL;

    t84 = (((x377==x378)-x379)/x380);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x381 = 252467LLU;
	int8_t x382 = -1;
	int16_t x383 = -1;
	static volatile int8_t x384 = -1;
	volatile int32_t t85 = -7;

    t85 = (((x381==x382)-x383)/x384);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x389 = INT32_MIN;
	int8_t x390 = INT8_MAX;
	int16_t x391 = INT16_MIN;
	int16_t x392 = 3039;
	volatile int32_t t86 = 212;

    t86 = (((x389==x390)-x391)/x392);

    if (t86 != 10) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x394 = INT8_MAX;
	static uint64_t x396 = 65224731665477LLU;
	static uint64_t t87 = 5LLU;

    t87 = (((x393==x394)-x395)/x396);

    if (t87 != 282818LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x397 = 3380458U;
	uint16_t x398 = UINT16_MAX;
	static int64_t x399 = -1LL;
	uint8_t x400 = 13U;
	volatile int64_t t88 = -4168408115LL;

    t88 = (((x397==x398)-x399)/x400);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x401 = INT8_MIN;
	uint8_t x402 = UINT8_MAX;
	static volatile int64_t t89 = -10924201LL;

    t89 = (((x401==x402)-x403)/x404);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x405 = -1;
	uint8_t x406 = 111U;
	int32_t t90 = 2019722;

    t90 = (((x405==x406)-x407)/x408);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x409 = 11171U;
	int16_t x410 = 5561;
	int8_t x411 = INT8_MAX;
	volatile uint32_t t91 = 17345464U;

    t91 = (((x409==x410)-x411)/x412);

    if (t91 != 119304643U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x417 = INT32_MAX;
	int16_t x418 = INT16_MAX;
	volatile uint8_t x419 = 4U;
	volatile uint16_t x420 = 1497U;
	static volatile int32_t t92 = -22102;

    t92 = (((x417==x418)-x419)/x420);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x421 = INT16_MIN;
	uint8_t x423 = 7U;
	int64_t x424 = -4760593LL;
	volatile int64_t t93 = -844877959240LL;

    t93 = (((x421==x422)-x423)/x424);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x425 = 31;
	static int64_t x426 = INT64_MAX;
	uint16_t x427 = 0U;
	int32_t x428 = INT32_MIN;
	volatile int32_t t94 = -2885759;

    t94 = (((x425==x426)-x427)/x428);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x430 = -1;
	static uint64_t x431 = 248971884667LLU;
	volatile int32_t x432 = -30;

    t95 = (((x429==x430)-x431)/x432);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x433 = 918U;
	uint64_t x434 = 10LLU;
	volatile int8_t x435 = -1;
	volatile int64_t x436 = -28097714LL;
	volatile int64_t t96 = -5LL;

    t96 = (((x433==x434)-x435)/x436);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x441 = -5;
	int64_t x444 = INT64_MIN;
	int64_t t97 = 131930191273277LL;

    t97 = (((x441==x442)-x443)/x444);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x445 = UINT32_MAX;
	static volatile int32_t x446 = INT32_MIN;
	volatile uint16_t x447 = 748U;
	uint64_t x448 = 175916LLU;
	uint64_t t98 = 198800716LLU;

    t98 = (((x445==x446)-x447)/x448);

    if (t98 != 104861093213292LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x450 = INT32_MAX;
	uint8_t x452 = 2U;
	uint64_t t99 = 3LLU;

    t99 = (((x449==x450)-x451)/x452);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x477 = INT32_MIN;
	uint32_t x479 = 51877534U;
	int8_t x480 = INT8_MIN;
	uint32_t t100 = 303943769U;

    t100 = (((x477==x478)-x479)/x480);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x485 = -1;
	uint32_t x486 = 124U;
	uint64_t x487 = UINT64_MAX;
	static volatile uint64_t t101 = 1LLU;

    t101 = (((x485==x486)-x487)/x488);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x489 = UINT32_MAX;
	volatile uint64_t x490 = 502629356791LLU;
	volatile uint32_t x491 = UINT32_MAX;
	uint16_t x492 = 15U;
	volatile uint32_t t102 = 909685598U;

    t102 = (((x489==x490)-x491)/x492);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x493 = -1;
	int8_t x494 = 2;
	static int8_t x495 = INT8_MAX;
	int8_t x496 = -25;
	static int32_t t103 = -960;

    t103 = (((x493==x494)-x495)/x496);

    if (t103 != 5) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x497 = 1;
	static volatile uint64_t x498 = 8756297662156LLU;
	int16_t x499 = INT16_MAX;
	int64_t x500 = INT64_MIN;

    t104 = (((x497==x498)-x499)/x500);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x503 = -1;
	volatile int64_t x504 = INT64_MIN;
	int64_t t105 = -1997750LL;

    t105 = (((x501==x502)-x503)/x504);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x505 = -55031411LL;
	volatile int32_t x506 = -1;
	static uint8_t x508 = UINT8_MAX;
	int32_t t106 = -1;

    t106 = (((x505==x506)-x507)/x508);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x509 = INT8_MAX;
	int32_t x510 = 22238813;
	int64_t x512 = INT64_MIN;
	volatile int64_t t107 = -803650877123896346LL;

    t107 = (((x509==x510)-x511)/x512);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x514 = INT32_MAX;
	int32_t x515 = INT32_MAX;
	volatile uint64_t t108 = 237961LLU;

    t108 = (((x513==x514)-x515)/x516);

    if (t108 != 6148914690520689323LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x519 = INT8_MIN;
	uint8_t x520 = 36U;
	static volatile int32_t t109 = 1006092;

    t109 = (((x517==x518)-x519)/x520);

    if (t109 != 3) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x522 = -1;
	static int16_t x524 = INT16_MIN;
	int32_t t110 = -18832;

    t110 = (((x521==x522)-x523)/x524);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x529 = -1;
	static int8_t x530 = INT8_MIN;
	int32_t x531 = INT32_MAX;
	volatile int32_t x532 = -1;
	int32_t t111 = INT32_MAX;

    t111 = (((x529==x530)-x531)/x532);

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x533 = INT8_MAX;
	int64_t x534 = INT64_MAX;
	uint8_t x535 = 0U;
	int8_t x536 = INT8_MAX;
	int32_t t112 = 1;

    t112 = (((x533==x534)-x535)/x536);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x537 = UINT8_MAX;
	volatile uint16_t x538 = 451U;
	static int8_t x540 = INT8_MAX;

    t113 = (((x537==x538)-x539)/x540);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x541 = INT8_MAX;
	volatile int64_t x542 = 356LL;
	volatile uint16_t x543 = 1982U;
	int64_t x544 = INT64_MIN;
	int64_t t114 = -5936965LL;

    t114 = (((x541==x542)-x543)/x544);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x545 = -244LL;
	static int8_t x546 = INT8_MIN;
	static int8_t x547 = -35;
	static int8_t x548 = -14;
	static int32_t t115 = -373226775;

    t115 = (((x545==x546)-x547)/x548);

    if (t115 != -2) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x549 = -1;
	volatile int8_t x550 = INT8_MIN;
	uint16_t x551 = UINT16_MAX;
	uint32_t x552 = 68U;
	volatile uint32_t t116 = 71905427U;

    t116 = (((x549==x550)-x551)/x552);

    if (t116 != 63160320U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x554 = -1LL;
	static uint64_t x556 = UINT64_MAX;
	volatile uint64_t t117 = 120008767027LLU;

    t117 = (((x553==x554)-x555)/x556);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x557 = -23;
	int64_t x558 = INT64_MAX;
	int64_t x559 = -6740008278LL;
	volatile uint32_t x560 = UINT32_MAX;
	volatile int64_t t118 = 58885590LL;

    t118 = (((x557==x558)-x559)/x560);

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x562 = -3143;
	static uint32_t x563 = UINT32_MAX;
	volatile uint8_t x564 = 19U;
	uint32_t t119 = 13144925U;

    t119 = (((x561==x562)-x563)/x564);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x573 = -10481;
	static int64_t x574 = INT64_MIN;
	int16_t x575 = -34;
	static volatile int64_t x576 = -1LL;
	volatile int64_t t120 = -13875056868705437LL;

    t120 = (((x573==x574)-x575)/x576);

    if (t120 != -34LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x581 = INT16_MIN;
	uint16_t x582 = 0U;
	int16_t x583 = INT16_MAX;

    t121 = (((x581==x582)-x583)/x584);

    if (t121 != 16383) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x585 = 8;
	int16_t x586 = -1;
	int8_t x588 = -1;

    t122 = (((x585==x586)-x587)/x588);

    if (t122 != 7774) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x589 = INT8_MIN;
	int16_t x591 = 1895;
	int16_t x592 = -1;
	volatile int32_t t123 = 0;

    t123 = (((x589==x590)-x591)/x592);

    if (t123 != 1895) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x593 = 2478;
	int8_t x595 = INT8_MIN;
	static volatile uint8_t x596 = 25U;
	volatile int32_t t124 = -5;

    t124 = (((x593==x594)-x595)/x596);

    if (t124 != 5) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x597 = UINT64_MAX;
	uint16_t x599 = UINT16_MAX;
	static volatile int64_t x600 = INT64_MIN;
	static int64_t t125 = 523LL;

    t125 = (((x597==x598)-x599)/x600);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x605 = UINT32_MAX;
	volatile int8_t x606 = INT8_MIN;
	volatile int32_t x608 = INT32_MIN;
	volatile int32_t t126 = 341;

    t126 = (((x605==x606)-x607)/x608);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x609 = INT32_MIN;
	int8_t x610 = -1;
	int8_t x612 = -1;

    t127 = (((x609==x610)-x611)/x612);

    if (t127 != 89) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x613 = INT8_MIN;
	uint64_t x615 = UINT64_MAX;
	volatile int8_t x616 = -1;
	volatile uint64_t t128 = 12LLU;

    t128 = (((x613==x614)-x615)/x616);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x617 = INT32_MAX;
	int64_t x618 = 119104261LL;
	int32_t x619 = -17677409;
	uint32_t x620 = 380607808U;
	static volatile uint32_t t129 = 167096333U;

    t129 = (((x617==x618)-x619)/x620);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x621 = -152333827497LL;
	static uint64_t x622 = 1244272LLU;
	static int64_t x624 = -1LL;
	volatile int64_t t130 = 1982195877227LL;

    t130 = (((x621==x622)-x623)/x624);

    if (t130 != 92672524LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x625 = -5;
	int16_t x626 = INT16_MIN;
	int16_t x627 = INT16_MIN;
	int32_t t131 = -26914;

    t131 = (((x625==x626)-x627)/x628);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x630 = UINT16_MAX;
	int16_t x631 = INT16_MAX;

    t132 = (((x629==x630)-x631)/x632);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x637 = INT32_MAX;
	static int8_t x639 = INT8_MIN;
	uint64_t x640 = 84199610LLU;
	volatile uint64_t t133 = 514660919669LLU;

    t133 = (((x637==x638)-x639)/x640);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x645 = 3U;
	volatile int32_t x646 = -692;

    t134 = (((x645==x646)-x647)/x648);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x651 = 66242441304001128LL;
	volatile int32_t x652 = INT32_MIN;
	volatile int64_t t135 = -18LL;

    t135 = (((x649==x650)-x651)/x652);

    if (t135 != 30846540LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x653 = -1;
	volatile int64_t t136 = 50170197769949LL;

    t136 = (((x653==x654)-x655)/x656);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x658 = UINT16_MAX;
	uint32_t x659 = 3U;
	int16_t x660 = INT16_MAX;

    t137 = (((x657==x658)-x659)/x660);

    if (t137 != 131076U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x666 = INT16_MAX;
	uint16_t x667 = UINT16_MAX;
	volatile uint64_t x668 = UINT64_MAX;
	uint64_t t138 = 78LLU;

    t138 = (((x665==x666)-x667)/x668);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x669 = INT64_MAX;
	uint32_t x670 = 0U;
	int32_t x671 = 6;
	volatile int32_t x672 = INT32_MIN;

    t139 = (((x669==x670)-x671)/x672);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x673 = INT16_MIN;
	static int32_t x675 = 166441921;
	volatile int32_t t140 = -822475;

    t140 = (((x673==x674)-x675)/x676);

    if (t140 != 166441921) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x677 = INT16_MIN;
	uint8_t x678 = 119U;
	uint64_t x679 = 15553749LLU;
	int64_t x680 = -471111LL;

    t141 = (((x677==x678)-x679)/x680);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x681 = 27;
	volatile uint32_t x682 = 10913647U;
	int16_t x683 = 1463;
	static int16_t x684 = INT16_MIN;

    t142 = (((x681==x682)-x683)/x684);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x685 = 257U;
	int64_t x688 = INT64_MIN;
	static int64_t t143 = -1483616504LL;

    t143 = (((x685==x686)-x687)/x688);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x689 = 2LL;
	int32_t x691 = INT32_MAX;
	static int8_t x692 = INT8_MIN;
	volatile int32_t t144 = 10617915;

    t144 = (((x689==x690)-x691)/x692);

    if (t144 != 16777215) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x697 = INT64_MIN;
	volatile int32_t x698 = -1;
	int64_t x699 = -3941859273LL;
	static volatile int64_t t145 = 11683873607LL;

    t145 = (((x697==x698)-x699)/x700);

    if (t145 != 31038261LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x701 = INT8_MAX;
	int16_t x703 = 226;
	uint32_t x704 = UINT32_MAX;
	volatile uint32_t t146 = 2U;

    t146 = (((x701==x702)-x703)/x704);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x705 = 182489055686012504LLU;
	static int32_t x706 = 422;
	int64_t x708 = 697915463239265258LL;
	int64_t t147 = 7660919664414164LL;

    t147 = (((x705==x706)-x707)/x708);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x709 = 0LLU;
	volatile int16_t x710 = -1;
	volatile int32_t x711 = INT32_MAX;
	volatile int32_t t148 = 169906;

    t148 = (((x709==x710)-x711)/x712);

    if (t148 != -715827882) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x713 = INT32_MIN;
	int32_t x714 = -1;
	volatile int64_t x715 = -280629307333LL;
	uint8_t x716 = 6U;

    t149 = (((x713==x714)-x715)/x716);

    if (t149 != 46771551222LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x717 = 6U;
	volatile int64_t x718 = INT64_MIN;
	static int8_t x719 = INT8_MAX;
	volatile int64_t x720 = 628055LL;
	int64_t t150 = 51LL;

    t150 = (((x717==x718)-x719)/x720);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x721 = UINT16_MAX;
	int32_t x722 = INT32_MIN;
	int16_t x723 = INT16_MIN;
	int32_t x724 = -1;
	volatile int32_t t151 = 138946;

    t151 = (((x721==x722)-x723)/x724);

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x725 = 2196;
	int8_t x726 = 8;
	int32_t x727 = INT32_MAX;
	volatile int64_t t152 = 11776019LL;

    t152 = (((x725==x726)-x727)/x728);

    if (t152 != -2799848LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x729 = 13538U;
	volatile uint32_t x731 = UINT32_MAX;
	static int64_t x732 = INT64_MIN;
	int64_t t153 = -23705513LL;

    t153 = (((x729==x730)-x731)/x732);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x733 = UINT16_MAX;
	uint16_t x734 = 17U;
	int16_t x735 = -783;
	uint8_t x736 = 11U;
	volatile int32_t t154 = 2;

    t154 = (((x733==x734)-x735)/x736);

    if (t154 != 71) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x737 = -1;
	static int8_t x739 = 0;
	volatile int32_t t155 = -6870572;

    t155 = (((x737==x738)-x739)/x740);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x742 = 1;
	uint64_t x743 = 5556803538617429391LLU;
	volatile uint64_t t156 = 3823282714LLU;

    t156 = (((x741==x742)-x743)/x744);

    if (t156 != 151646359236377908LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x751 = -1LL;
	int16_t x752 = -1;

    t157 = (((x749==x750)-x751)/x752);

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x753 = INT32_MIN;
	uint8_t x755 = 7U;
	static uint16_t x756 = 6517U;
	static int32_t t158 = 31674;

    t158 = (((x753==x754)-x755)/x756);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x759 = -1;
	int16_t x760 = 13829;
	int32_t t159 = -1531191;

    t159 = (((x757==x758)-x759)/x760);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x761 = 4;
	uint8_t x764 = 7U;
	int32_t t160 = -209;

    t160 = (((x761==x762)-x763)/x764);

    if (t160 != 2) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x766 = -32272031945790077LL;
	int8_t x767 = -1;
	int64_t x768 = -493808862LL;
	volatile int64_t t161 = 80046523647339117LL;

    t161 = (((x765==x766)-x767)/x768);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x769 = INT32_MIN;
	volatile int8_t x770 = INT8_MAX;
	int8_t x772 = INT8_MAX;
	int32_t t162 = -144938;

    t162 = (((x769==x770)-x771)/x772);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x777 = INT8_MIN;
	uint32_t x778 = 57905U;
	volatile uint8_t x779 = 0U;
	int16_t x780 = -58;
	volatile int32_t t163 = 1458;

    t163 = (((x777==x778)-x779)/x780);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x782 = -1;
	uint8_t x783 = 1U;
	static int32_t t164 = 0;

    t164 = (((x781==x782)-x783)/x784);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x789 = INT16_MAX;
	int16_t x790 = INT16_MIN;
	static uint64_t x791 = UINT64_MAX;
	int16_t x792 = 7;
	static volatile uint64_t t165 = 33978LLU;

    t165 = (((x789==x790)-x791)/x792);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x793 = INT32_MIN;
	volatile int8_t x794 = -1;
	volatile int32_t x795 = INT32_MAX;
	volatile int16_t x796 = INT16_MAX;
	int32_t t166 = -232;

    t166 = (((x793==x794)-x795)/x796);

    if (t166 != -65538) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x801 = UINT8_MAX;
	uint16_t x802 = 1298U;
	volatile int64_t x803 = INT64_MAX;
	int64_t t167 = 213LL;

    t167 = (((x801==x802)-x803)/x804);

    if (t167 != 119032754779634LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x807 = UINT32_MAX;
	volatile int32_t x808 = INT32_MIN;
	volatile uint32_t t168 = 2249806U;

    t168 = (((x805==x806)-x807)/x808);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x809 = INT8_MIN;
	int32_t x811 = -1;
	uint8_t x812 = 5U;
	int32_t t169 = -490919783;

    t169 = (((x809==x810)-x811)/x812);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x815 = -123;
	uint32_t x816 = UINT32_MAX;
	uint32_t t170 = 52521568U;

    t170 = (((x813==x814)-x815)/x816);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x817 = INT8_MIN;
	static uint8_t x818 = 3U;
	static volatile int64_t x819 = -8765768124LL;
	int64_t x820 = -1LL;
	int64_t t171 = -230188481437677LL;

    t171 = (((x817==x818)-x819)/x820);

    if (t171 != -8765768124LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x825 = -62;
	uint32_t x826 = 0U;
	uint8_t x827 = 1U;
	int16_t x828 = 380;

    t172 = (((x825==x826)-x827)/x828);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x829 = 2U;
	int8_t x830 = 1;
	static uint64_t x831 = 3128819346449LLU;
	uint64_t t173 = 1LLU;

    t173 = (((x829==x830)-x831)/x832);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x833 = 384;
	uint64_t x834 = 123104LLU;
	static uint8_t x835 = 1U;
	volatile uint8_t x836 = 25U;
	volatile int32_t t174 = -389;

    t174 = (((x833==x834)-x835)/x836);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x837 = INT16_MIN;
	uint8_t x838 = 1U;
	int16_t x839 = INT16_MIN;
	int8_t x840 = INT8_MAX;
	volatile int32_t t175 = -65564;

    t175 = (((x837==x838)-x839)/x840);

    if (t175 != 258) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x842 = 20;
	static uint16_t x843 = UINT16_MAX;

    t176 = (((x841==x842)-x843)/x844);

    if (t176 != -2) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x845 = -258438;
	static uint32_t x848 = 30604U;
	volatile uint32_t t177 = 375732U;

    t177 = (((x845==x846)-x847)/x848);

    if (t177 != 140340U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x849 = -1;
	uint32_t x851 = 3U;
	static uint32_t x852 = 25U;
	uint32_t t178 = 11398U;

    t178 = (((x849==x850)-x851)/x852);

    if (t178 != 171798691U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x857 = -4;
	int8_t x859 = 3;
	static int8_t x860 = INT8_MAX;
	int32_t t179 = -51557445;

    t179 = (((x857==x858)-x859)/x860);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x862 = UINT32_MAX;
	static uint32_t x864 = 197162U;
	uint64_t t180 = 818818549848LLU;

    t180 = (((x861==x862)-x863)/x864);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x869 = INT8_MIN;
	volatile int16_t x871 = -2174;
	uint32_t x872 = 105368U;
	volatile uint32_t t181 = 3528U;

    t181 = (((x869==x870)-x871)/x872);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x873 = INT16_MIN;
	volatile uint32_t x874 = 97449U;
	uint32_t x875 = UINT32_MAX;
	volatile int64_t t182 = -381LL;

    t182 = (((x873==x874)-x875)/x876);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint16_t x877 = 26U;
	uint16_t x878 = 213U;
	int16_t x879 = -1;
	uint32_t x880 = 16222U;
	volatile uint32_t t183 = 461487685U;

    t183 = (((x877==x878)-x879)/x880);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x881 = 5016U;
	static int16_t x882 = INT16_MIN;
	uint32_t x883 = 54503416U;
	static uint16_t x884 = 65U;
	volatile uint32_t t184 = 0U;

    t184 = (((x881==x882)-x883)/x884);

    if (t184 != 65237905U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x885 = UINT16_MAX;
	volatile int8_t x887 = 0;
	static int32_t x888 = -174948161;
	volatile int32_t t185 = -14;

    t185 = (((x885==x886)-x887)/x888);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x894 = INT64_MIN;
	uint8_t x895 = 20U;
	int64_t x896 = INT64_MIN;
	volatile int64_t t186 = 2637939536021LL;

    t186 = (((x893==x894)-x895)/x896);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x901 = -1;
	int64_t x902 = -1LL;
	static volatile uint64_t x904 = 1020862041401LLU;
	volatile uint64_t t187 = 443701350613577873LLU;

    t187 = (((x901==x902)-x903)/x904);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x906 = INT32_MIN;
	int8_t x907 = 3;
	int32_t x908 = INT32_MIN;
	volatile int32_t t188 = -12454241;

    t188 = (((x905==x906)-x907)/x908);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x909 = 46340;
	static uint32_t x910 = UINT32_MAX;
	static volatile uint16_t x911 = 3U;
	int32_t x912 = -1;
	static volatile int32_t t189 = 733;

    t189 = (((x909==x910)-x911)/x912);

    if (t189 != 3) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x914 = 38U;
	uint64_t x915 = 31834152370665LLU;
	static int16_t x916 = INT16_MAX;
	volatile uint64_t t190 = 14267612LLU;

    t190 = (((x913==x914)-x915)/x916);

    if (t190 != 562966162283919LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x917 = -490;
	uint64_t x918 = 931LLU;
	int8_t x919 = -1;
	int32_t t191 = -8;

    t191 = (((x917==x918)-x919)/x920);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x921 = -1531;
	uint64_t x922 = 603961455LLU;
	static uint8_t x923 = 5U;
	volatile int16_t x924 = -20;
	int32_t t192 = 1527144;

    t192 = (((x921==x922)-x923)/x924);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x926 = INT16_MAX;
	int16_t x927 = 1684;
	static uint8_t x928 = UINT8_MAX;
	volatile int32_t t193 = -1213858;

    t193 = (((x925==x926)-x927)/x928);

    if (t193 != -6) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x929 = -1;
	int32_t x930 = -1783;
	int16_t x931 = INT16_MIN;
	int64_t x932 = -1LL;
	int64_t t194 = 100400017287591659LL;

    t194 = (((x929==x930)-x931)/x932);

    if (t194 != -32768LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x934 = 100U;
	int8_t x935 = INT8_MAX;
	int32_t t195 = -395142617;

    t195 = (((x933==x934)-x935)/x936);

    if (t195 != 12) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x937 = 1U;
	uint64_t x939 = UINT64_MAX;

    t196 = (((x937==x938)-x939)/x940);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x941 = 1707911104627LLU;
	int8_t x943 = INT8_MIN;
	int16_t x944 = 39;
	int32_t t197 = -883034;

    t197 = (((x941==x942)-x943)/x944);

    if (t197 != 3) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x946 = 190U;
	int64_t x947 = -1LL;
	int8_t x948 = INT8_MAX;

    t198 = (((x945==x946)-x947)/x948);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x957 = -6680LL;
	uint32_t x960 = UINT32_MAX;
	static uint32_t t199 = 160772045U;

    t199 = (((x957==x958)-x959)/x960);

    if (t199 != 0U) { NG(); } else { ; }
	
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

