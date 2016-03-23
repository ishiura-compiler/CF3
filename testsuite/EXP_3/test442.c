
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

int32_t x1 = INT32_MIN;
int8_t x10 = INT8_MIN;
uint64_t x27 = 47569134792LLU;
static uint16_t x30 = 3684U;
int32_t x31 = INT32_MAX;
int8_t x36 = INT8_MIN;
int16_t x40 = -1;
static volatile int32_t t9 = -593218385;
volatile int32_t x41 = -1;
volatile int32_t t10 = -116940;
int32_t x62 = -1;
int8_t x63 = INT8_MAX;
int16_t x64 = -1;
static uint16_t x80 = 2002U;
volatile int32_t t12 = 776450;
int64_t x96 = -4749886LL;
uint64_t x98 = 589LLU;
int32_t t14 = 1802637;
int64_t x109 = INT64_MIN;
uint64_t x110 = UINT64_MAX;
static int64_t x112 = -1LL;
int32_t x114 = 943465110;
uint16_t x122 = 7U;
uint64_t x123 = 21LLU;
static uint8_t x129 = 68U;
volatile uint16_t x130 = 24U;
int16_t x137 = INT16_MIN;
volatile int64_t x138 = INT64_MIN;
volatile int64_t x141 = INT64_MIN;
static int64_t x142 = INT64_MAX;
uint32_t x144 = UINT32_MAX;
static int64_t x146 = INT64_MIN;
volatile int8_t x152 = INT8_MIN;
int32_t t27 = -403290071;
volatile int64_t x170 = -45009237LL;
int8_t x180 = 11;
int16_t x206 = INT16_MAX;
int8_t x208 = -11;
uint16_t x211 = 3165U;
int8_t x219 = 1;
int32_t x220 = -669877;
int32_t t38 = 129665896;
volatile uint16_t x238 = 687U;
static uint16_t x239 = 56U;
static volatile int32_t t40 = -3709;
uint64_t x251 = UINT64_MAX;
int64_t x266 = -2793148752654921660LL;
volatile int32_t t44 = -2;
int32_t x274 = 1833;
static uint8_t x276 = UINT8_MAX;
uint8_t x290 = 43U;
int32_t x292 = -1;
volatile uint64_t x304 = 6533977LLU;
uint32_t x310 = 74904040U;
static int32_t t55 = -1;
volatile int32_t x321 = -8456733;
uint64_t x323 = 4001015LLU;
volatile uint8_t x327 = UINT8_MAX;
static int8_t x332 = INT8_MAX;
volatile uint16_t x334 = UINT16_MAX;
static int16_t x335 = 960;
int16_t x336 = 0;
int8_t x349 = -14;
static int32_t x354 = INT32_MAX;
static uint8_t x356 = UINT8_MAX;
volatile int32_t x357 = INT32_MIN;
int64_t x375 = 643894741LL;
int8_t x376 = INT8_MAX;
static int32_t x377 = INT32_MIN;
volatile int64_t x378 = INT64_MAX;
static volatile int32_t t66 = 1;
static uint64_t x382 = UINT64_MAX;
int32_t t67 = -2981;
int8_t x388 = -1;
int16_t x391 = -1;
volatile uint32_t x397 = 140U;
int8_t x409 = INT8_MIN;
volatile int32_t t72 = 15752511;
volatile int16_t x414 = 7231;
static int8_t x419 = 29;
int8_t x427 = INT8_MIN;
int32_t x433 = INT32_MIN;
volatile int16_t x437 = -1;
int16_t x439 = -1;
volatile int8_t x440 = 1;
static volatile uint8_t x456 = 6U;
static volatile int32_t t82 = -268787971;
uint16_t x458 = 7U;
int16_t x459 = INT16_MIN;
volatile int32_t x460 = -1;
volatile uint32_t x461 = 1137U;
int64_t x469 = -1LL;
int8_t x471 = -1;
uint8_t x474 = 26U;
uint32_t x476 = 76512266U;
int32_t x478 = INT32_MIN;
int32_t t88 = -590;
int32_t x485 = -1;
uint32_t x486 = 266085909U;
int32_t t90 = 7165;
int32_t x493 = -606732;
static volatile int32_t x494 = INT32_MIN;
int32_t t91 = -32401931;
int32_t t92 = -1;
uint16_t x505 = 346U;
static int16_t x506 = -1;
int8_t x507 = INT8_MAX;
uint64_t x511 = 0LLU;
int8_t x520 = INT8_MAX;
static uint32_t x535 = 507919U;
uint64_t x551 = 1LLU;
int16_t x552 = INT16_MIN;
static volatile int32_t t99 = 51;
int8_t x554 = INT8_MIN;
uint64_t x556 = 6LLU;
uint64_t x567 = 348369562360LLU;
int32_t t103 = 211;
uint8_t x580 = UINT8_MAX;
int32_t t105 = 18;
int32_t x586 = 12606230;
int32_t t106 = 222;
static uint32_t x597 = 15928497U;
volatile int8_t x599 = INT8_MIN;
static int16_t x600 = -1;
uint64_t x608 = 662564425LLU;
uint64_t x609 = 2535LLU;
int8_t x612 = 0;
static int8_t x616 = INT8_MIN;
static int64_t x623 = -1LL;
static volatile int8_t x625 = INT8_MIN;
volatile uint64_t x638 = 4LLU;
int16_t x640 = -1;
int32_t t120 = -26;
int16_t x659 = INT16_MIN;
uint32_t x674 = UINT32_MAX;
int32_t x678 = INT32_MAX;
uint64_t x680 = UINT64_MAX;
volatile uint8_t x682 = 71U;
int64_t x684 = -643591000759321LL;
int32_t x690 = INT32_MAX;
int8_t x691 = INT8_MIN;
int64_t x696 = -1LL;
volatile int32_t t129 = -341467;
int16_t x707 = INT16_MAX;
uint32_t x708 = UINT32_MAX;
static int32_t t133 = 35344;
int8_t x722 = INT8_MIN;
static int8_t x724 = -1;
int32_t t135 = 5233;
uint64_t x730 = 1168054068747262568LLU;
int32_t x732 = -6878928;
int32_t t137 = -1211;
static int16_t x738 = -1;
volatile uint8_t x743 = 8U;
int8_t x747 = 0;
uint16_t x749 = 2U;
volatile int16_t x752 = 0;
int8_t x754 = -1;
uint8_t x755 = 0U;
volatile int64_t x759 = -48891782LL;
uint64_t x763 = UINT64_MAX;
static volatile int8_t x767 = INT8_MAX;
int64_t x768 = -1LL;
int16_t x776 = -37;
static int32_t x778 = INT32_MIN;
int16_t x784 = INT16_MIN;
uint32_t x787 = 26U;
int32_t x788 = INT32_MAX;
int32_t x792 = -1;
volatile int32_t t151 = -397370772;
volatile int64_t x798 = INT64_MAX;
int8_t x803 = INT8_MIN;
uint16_t x805 = 1U;
int32_t x823 = 1;
static int16_t x824 = INT16_MIN;
volatile int32_t t159 = -28;
int8_t x835 = -1;
static volatile int32_t t160 = 49;
volatile int32_t t162 = 2;
uint16_t x851 = 18358U;
int16_t x852 = 3271;
int64_t x854 = INT64_MIN;
static int32_t t164 = 80775;
volatile int32_t t168 = 4055;
uint64_t x876 = UINT64_MAX;
volatile int16_t x888 = 6038;
static int16_t x898 = INT16_MIN;
int64_t x912 = -1LL;
int16_t x923 = INT16_MIN;
int32_t t177 = 5;
static int32_t x925 = INT32_MAX;
static volatile int32_t t178 = -31;
int8_t x937 = INT8_MIN;
static uint64_t x939 = 2583LLU;
uint64_t x946 = 57988950LLU;
int64_t x949 = INT64_MIN;
int32_t x951 = INT32_MAX;
int32_t t182 = 330789806;
static int32_t x960 = 23;
uint8_t x972 = 3U;
int16_t x975 = INT16_MAX;
static int8_t x980 = INT8_MIN;
int32_t t188 = -145;
static int8_t x982 = -1;
volatile uint16_t x998 = 2090U;
volatile int32_t t192 = 663;
volatile int32_t t194 = 1406519;
static volatile int64_t x1022 = INT64_MIN;
static int16_t x1031 = -1;
uint32_t x1035 = 386U;
static int8_t x1041 = INT8_MIN;
int8_t x1042 = INT8_MIN;
uint16_t x1043 = 71U;
static int8_t x1045 = 0;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	int64_t x3 = -1LL;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -142081;

    t0 = ((x1/x2)==(x3*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = 1U;
	uint16_t x6 = UINT16_MAX;
	int16_t x7 = INT16_MIN;
	static uint8_t x8 = UINT8_MAX;
	int32_t t1 = 224217648;

    t1 = ((x5/x6)==(x7*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	volatile int8_t x11 = 1;
	volatile int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -1364;

    t2 = ((x9/x10)==(x11*x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = 7U;
	static int8_t x16 = 1;
	int32_t t3 = 943109067;

    t3 = ((x13/x14)==(x15*x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -2;
	uint64_t x18 = UINT64_MAX;
	volatile int8_t x19 = -1;
	int64_t x20 = -11127621114824LL;
	int32_t t4 = -94740533;

    t4 = ((x17/x18)==(x19*x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = -1LL;
	int8_t x22 = -1;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = -25;
	volatile int32_t t5 = 0;

    t5 = ((x21/x22)==(x23*x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	volatile int64_t x26 = -1LL;
	volatile int64_t x28 = -80998LL;
	int32_t t6 = 7;

    t6 = ((x25/x26)==(x27*x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = 94U;
	uint64_t x32 = 2LLU;
	static int32_t t7 = -2331;

    t7 = ((x29/x30)==(x31*x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 334971917415LL;
	int32_t x34 = -115;
	int16_t x35 = INT16_MAX;
	int32_t t8 = 13915;

    t8 = ((x33/x34)==(x35*x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	volatile int64_t x38 = INT64_MIN;
	uint64_t x39 = 3720255518LLU;

    t9 = ((x37/x38)==(x39*x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = -1;
	int8_t x43 = INT8_MAX;
	int8_t x44 = INT8_MAX;

    t10 = ((x41/x42)==(x43*x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x61 = UINT64_MAX;
	int32_t t11 = 75;

    t11 = ((x61/x62)==(x63*x64));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x77 = 2217;
	static int64_t x78 = INT64_MAX;
	int16_t x79 = 1;

    t12 = ((x77/x78)==(x79*x80));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x93 = INT8_MIN;
	int64_t x94 = -1LL;
	int32_t x95 = -44263017;
	int32_t t13 = 566;

    t13 = ((x93/x94)==(x95*x96));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x97 = INT32_MIN;
	int16_t x99 = -94;
	int32_t x100 = -1;

    t14 = ((x97/x98)==(x99*x100));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x101 = 55906497;
	volatile int32_t x102 = -904;
	int64_t x103 = -1LL;
	int64_t x104 = -1LL;
	int32_t t15 = -391265995;

    t15 = ((x101/x102)==(x103*x104));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x105 = 6219U;
	int16_t x106 = INT16_MAX;
	volatile int32_t x107 = 1;
	uint64_t x108 = 28LLU;
	static volatile int32_t t16 = -93;

    t16 = ((x105/x106)==(x107*x108));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x111 = INT32_MIN;
	volatile int32_t t17 = 67952668;

    t17 = ((x109/x110)==(x111*x112));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x113 = 2;
	int64_t x115 = -371615LL;
	int16_t x116 = -1;
	int32_t t18 = 39920720;

    t18 = ((x113/x114)==(x115*x116));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x121 = 1;
	volatile int16_t x124 = INT16_MAX;
	int32_t t19 = 475;

    t19 = ((x121/x122)==(x123*x124));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x125 = 5058U;
	uint16_t x126 = UINT16_MAX;
	int64_t x127 = -1LL;
	uint32_t x128 = UINT32_MAX;
	int32_t t20 = -1;

    t20 = ((x125/x126)==(x127*x128));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x131 = 615336;
	volatile int64_t x132 = 3LL;
	int32_t t21 = 446680761;

    t21 = ((x129/x130)==(x131*x132));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x139 = 3;
	static uint8_t x140 = UINT8_MAX;
	static int32_t t22 = 2;

    t22 = ((x137/x138)==(x139*x140));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x143 = 28U;
	volatile int32_t t23 = 8420418;

    t23 = ((x141/x142)==(x143*x144));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x145 = 1107LL;
	int8_t x147 = -20;
	int64_t x148 = 111883478474LL;
	volatile int32_t t24 = -449;

    t24 = ((x145/x146)==(x147*x148));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x149 = -1;
	int16_t x150 = INT16_MIN;
	static int64_t x151 = -24429384LL;
	static volatile int32_t t25 = -595839;

    t25 = ((x149/x150)==(x151*x152));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x153 = UINT64_MAX;
	volatile uint32_t x154 = 20430U;
	int8_t x155 = INT8_MIN;
	uint16_t x156 = 374U;
	int32_t t26 = -778752;

    t26 = ((x153/x154)==(x155*x156));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x161 = -2883359736586687LL;
	uint64_t x162 = 428071252634234LLU;
	uint32_t x163 = 3696U;
	static int16_t x164 = INT16_MIN;

    t27 = ((x161/x162)==(x163*x164));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x169 = INT64_MIN;
	int32_t x171 = -2634;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t28 = -1941302;

    t28 = ((x169/x170)==(x171*x172));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x173 = 12167280567LLU;
	volatile int32_t x174 = INT32_MIN;
	int32_t x175 = 3;
	volatile uint32_t x176 = 137365U;
	volatile int32_t t29 = -1;

    t29 = ((x173/x174)==(x175*x176));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MAX;
	static int32_t x179 = -1;
	volatile int32_t t30 = 7293124;

    t30 = ((x177/x178)==(x179*x180));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x181 = -1748862;
	int32_t x182 = -1;
	uint32_t x183 = 18350U;
	int32_t x184 = INT32_MIN;
	int32_t t31 = 840393599;

    t31 = ((x181/x182)==(x183*x184));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x197 = INT16_MIN;
	static int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MIN;
	int32_t x200 = -474;
	volatile int32_t t32 = 3;

    t32 = ((x197/x198)==(x199*x200));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x201 = UINT16_MAX;
	int64_t x202 = INT64_MIN;
	uint32_t x203 = 59252232U;
	uint64_t x204 = 24093723LLU;
	static int32_t t33 = 47320969;

    t33 = ((x201/x202)==(x203*x204));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x205 = UINT64_MAX;
	static volatile uint16_t x207 = UINT16_MAX;
	volatile int32_t t34 = -1040872;

    t34 = ((x205/x206)==(x207*x208));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x209 = INT16_MIN;
	uint8_t x210 = 7U;
	int32_t x212 = -1;
	volatile int32_t t35 = 177992965;

    t35 = ((x209/x210)==(x211*x212));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x217 = 51544926;
	int32_t x218 = INT32_MIN;
	int32_t t36 = 66467266;

    t36 = ((x217/x218)==(x219*x220));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x225 = UINT16_MAX;
	uint16_t x226 = 28641U;
	int16_t x227 = INT16_MAX;
	int64_t x228 = -16LL;
	int32_t t37 = 12829;

    t37 = ((x225/x226)==(x227*x228));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x229 = INT64_MIN;
	int32_t x230 = 324876072;
	uint8_t x231 = 3U;
	int8_t x232 = -1;

    t38 = ((x229/x230)==(x231*x232));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x233 = 352407479U;
	volatile int8_t x234 = INT8_MAX;
	static volatile int8_t x235 = -1;
	int16_t x236 = INT16_MAX;
	static int32_t t39 = 0;

    t39 = ((x233/x234)==(x235*x236));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x237 = 7;
	uint16_t x240 = UINT16_MAX;

    t40 = ((x237/x238)==(x239*x240));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x249 = -1;
	int8_t x250 = INT8_MIN;
	static uint32_t x252 = 416557838U;
	volatile int32_t t41 = -2687793;

    t41 = ((x249/x250)==(x251*x252));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x257 = -3284;
	volatile int64_t x258 = INT64_MIN;
	int16_t x259 = -1;
	static int16_t x260 = -1;
	volatile int32_t t42 = 385858;

    t42 = ((x257/x258)==(x259*x260));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x261 = INT16_MIN;
	static uint8_t x262 = 90U;
	uint8_t x263 = 1U;
	int16_t x264 = INT16_MIN;
	int32_t t43 = -256;

    t43 = ((x261/x262)==(x263*x264));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x265 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MAX;

    t44 = ((x265/x266)==(x267*x268));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x269 = 53U;
	int32_t x270 = -1;
	static uint16_t x271 = 3U;
	uint16_t x272 = 7128U;
	int32_t t45 = 7;

    t45 = ((x269/x270)==(x271*x272));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x273 = 2U;
	int16_t x275 = -5;
	volatile int32_t t46 = 96;

    t46 = ((x273/x274)==(x275*x276));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x277 = INT32_MIN;
	uint64_t x278 = UINT64_MAX;
	static uint32_t x279 = 1021U;
	int32_t x280 = -1;
	static int32_t t47 = 424823699;

    t47 = ((x277/x278)==(x279*x280));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x281 = INT16_MAX;
	int64_t x282 = -1LL;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = -1;
	static volatile int32_t t48 = 1;

    t48 = ((x281/x282)==(x283*x284));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x289 = INT32_MIN;
	static uint32_t x291 = 20282331U;
	volatile int32_t t49 = -50888;

    t49 = ((x289/x290)==(x291*x292));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x297 = UINT32_MAX;
	int16_t x298 = -1;
	int64_t x299 = -20167525604LL;
	int8_t x300 = 7;
	int32_t t50 = 168425674;

    t50 = ((x297/x298)==(x299*x300));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x301 = 4343U;
	int16_t x302 = -1159;
	uint16_t x303 = 982U;
	static int32_t t51 = 924254838;

    t51 = ((x301/x302)==(x303*x304));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x305 = -26;
	static int16_t x306 = INT16_MAX;
	volatile int8_t x307 = INT8_MIN;
	volatile int16_t x308 = INT16_MIN;
	int32_t t52 = -78;

    t52 = ((x305/x306)==(x307*x308));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x309 = UINT32_MAX;
	int8_t x311 = INT8_MIN;
	volatile uint8_t x312 = 0U;
	volatile int32_t t53 = 60917409;

    t53 = ((x309/x310)==(x311*x312));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x313 = 6;
	uint8_t x314 = 22U;
	int8_t x315 = -1;
	int16_t x316 = INT16_MIN;
	volatile int32_t t54 = -2927;

    t54 = ((x313/x314)==(x315*x316));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x317 = INT16_MAX;
	static int8_t x318 = INT8_MIN;
	static int8_t x319 = INT8_MIN;
	static uint16_t x320 = UINT16_MAX;

    t55 = ((x317/x318)==(x319*x320));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x322 = INT64_MAX;
	volatile uint32_t x324 = UINT32_MAX;
	static int32_t t56 = 19496228;

    t56 = ((x321/x322)==(x323*x324));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x325 = -2040561672LL;
	uint32_t x326 = 54535764U;
	int8_t x328 = INT8_MIN;
	volatile int32_t t57 = -44653825;

    t57 = ((x325/x326)==(x327*x328));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x329 = INT64_MIN;
	uint8_t x330 = 5U;
	uint32_t x331 = 357733558U;
	volatile int32_t t58 = 19667185;

    t58 = ((x329/x330)==(x331*x332));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x333 = 51943701U;
	int32_t t59 = 441;

    t59 = ((x333/x334)==(x335*x336));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x337 = INT32_MAX;
	static int32_t x338 = INT32_MAX;
	static int16_t x339 = INT16_MAX;
	int8_t x340 = INT8_MIN;
	volatile int32_t t60 = -440588;

    t60 = ((x337/x338)==(x339*x340));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x350 = INT32_MAX;
	uint8_t x351 = 1U;
	volatile uint32_t x352 = 39U;
	int32_t t61 = 6329;

    t61 = ((x349/x350)==(x351*x352));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x353 = -1;
	static int8_t x355 = -1;
	static volatile int32_t t62 = 819;

    t62 = ((x353/x354)==(x355*x356));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x358 = UINT64_MAX;
	volatile int8_t x359 = -59;
	volatile int16_t x360 = INT16_MAX;
	volatile int32_t t63 = 5709395;

    t63 = ((x357/x358)==(x359*x360));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x369 = 21U;
	int16_t x370 = -1;
	int8_t x371 = INT8_MIN;
	int8_t x372 = -11;
	int32_t t64 = 451;

    t64 = ((x369/x370)==(x371*x372));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x373 = INT64_MIN;
	uint32_t x374 = UINT32_MAX;
	int32_t t65 = -6;

    t65 = ((x373/x374)==(x375*x376));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x379 = -1;
	int16_t x380 = -1;

    t66 = ((x377/x378)==(x379*x380));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x381 = 363575LL;
	volatile uint8_t x383 = UINT8_MAX;
	uint8_t x384 = 1U;

    t67 = ((x381/x382)==(x383*x384));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x385 = UINT64_MAX;
	int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MAX;
	int32_t t68 = 322728030;

    t68 = ((x385/x386)==(x387*x388));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MAX;
	int64_t x392 = -1LL;
	int32_t t69 = 2178;

    t69 = ((x389/x390)==(x391*x392));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x393 = -150245177;
	volatile uint64_t x394 = 17008297155LLU;
	volatile uint32_t x395 = 3U;
	uint64_t x396 = 13LLU;
	static int32_t t70 = -41491600;

    t70 = ((x393/x394)==(x395*x396));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x398 = 96569U;
	static uint64_t x399 = 22736LLU;
	int16_t x400 = INT16_MIN;
	static int32_t t71 = -592477914;

    t71 = ((x397/x398)==(x399*x400));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x410 = INT8_MIN;
	static uint64_t x411 = UINT64_MAX;
	int32_t x412 = -1;

    t72 = ((x409/x410)==(x411*x412));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x413 = INT8_MIN;
	uint32_t x415 = UINT32_MAX;
	uint64_t x416 = UINT64_MAX;
	volatile int32_t t73 = -1;

    t73 = ((x413/x414)==(x415*x416));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x417 = INT8_MAX;
	uint64_t x418 = UINT64_MAX;
	static int16_t x420 = INT16_MIN;
	volatile int32_t t74 = -35131;

    t74 = ((x417/x418)==(x419*x420));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x425 = 1U;
	uint16_t x426 = 710U;
	int16_t x428 = 59;
	static int32_t t75 = -26;

    t75 = ((x425/x426)==(x427*x428));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x429 = 7815439U;
	static volatile int8_t x430 = INT8_MIN;
	uint32_t x431 = UINT32_MAX;
	int8_t x432 = INT8_MIN;
	int32_t t76 = 13567;

    t76 = ((x429/x430)==(x431*x432));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x434 = INT8_MIN;
	int8_t x435 = -48;
	uint32_t x436 = UINT32_MAX;
	volatile int32_t t77 = -2100023;

    t77 = ((x433/x434)==(x435*x436));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x438 = INT64_MIN;
	static int32_t t78 = 8038906;

    t78 = ((x437/x438)==(x439*x440));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x441 = 70278LLU;
	static int32_t x442 = INT32_MAX;
	static uint8_t x443 = 0U;
	int32_t x444 = INT32_MIN;
	volatile int32_t t79 = 456901184;

    t79 = ((x441/x442)==(x443*x444));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x445 = UINT16_MAX;
	static int8_t x446 = -1;
	int32_t x447 = -106;
	volatile uint16_t x448 = 9167U;
	int32_t t80 = -1;

    t80 = ((x445/x446)==(x447*x448));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x449 = INT16_MIN;
	int16_t x450 = -227;
	int64_t x451 = -1LL;
	static uint64_t x452 = 286674531762889314LLU;
	volatile int32_t t81 = -51;

    t81 = ((x449/x450)==(x451*x452));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x453 = UINT32_MAX;
	int32_t x454 = INT32_MIN;
	int16_t x455 = INT16_MIN;

    t82 = ((x453/x454)==(x455*x456));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x457 = INT32_MAX;
	int32_t t83 = 139;

    t83 = ((x457/x458)==(x459*x460));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x462 = -1;
	uint8_t x463 = 76U;
	static uint64_t x464 = UINT64_MAX;
	int32_t t84 = 467;

    t84 = ((x461/x462)==(x463*x464));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x465 = 60;
	int8_t x466 = INT8_MAX;
	static int8_t x467 = INT8_MIN;
	uint32_t x468 = UINT32_MAX;
	int32_t t85 = -13;

    t85 = ((x465/x466)==(x467*x468));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x470 = -18;
	static int16_t x472 = INT16_MAX;
	volatile int32_t t86 = -1787186;

    t86 = ((x469/x470)==(x471*x472));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x473 = INT8_MIN;
	volatile int32_t x475 = -1;
	volatile int32_t t87 = 71681;

    t87 = ((x473/x474)==(x475*x476));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x477 = 25;
	uint32_t x479 = UINT32_MAX;
	uint8_t x480 = 3U;

    t88 = ((x477/x478)==(x479*x480));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x481 = 230U;
	volatile int16_t x482 = -111;
	uint8_t x483 = 120U;
	static volatile uint64_t x484 = 632287153561116LLU;
	int32_t t89 = -427;

    t89 = ((x481/x482)==(x483*x484));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x487 = -1;
	static int16_t x488 = INT16_MAX;

    t90 = ((x485/x486)==(x487*x488));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x495 = 0;
	int32_t x496 = 27080604;

    t91 = ((x493/x494)==(x495*x496));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x501 = INT16_MIN;
	int8_t x502 = INT8_MIN;
	volatile int8_t x503 = -1;
	static int16_t x504 = INT16_MIN;

    t92 = ((x501/x502)==(x503*x504));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x508 = INT8_MIN;
	int32_t t93 = -30663;

    t93 = ((x505/x506)==(x507*x508));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x509 = INT32_MIN;
	uint8_t x510 = UINT8_MAX;
	int32_t x512 = INT32_MIN;
	volatile int32_t t94 = -10654;

    t94 = ((x509/x510)==(x511*x512));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x513 = 187;
	uint8_t x514 = 39U;
	int64_t x515 = -1LL;
	int8_t x516 = -1;
	int32_t t95 = -8752484;

    t95 = ((x513/x514)==(x515*x516));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x517 = -1;
	int32_t x518 = INT32_MAX;
	uint64_t x519 = 1719202634LLU;
	int32_t t96 = 28;

    t96 = ((x517/x518)==(x519*x520));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x533 = 4U;
	int16_t x534 = -1;
	int32_t x536 = INT32_MIN;
	int32_t t97 = -149;

    t97 = ((x533/x534)==(x535*x536));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x545 = 5297U;
	uint64_t x546 = 178428822316301950LLU;
	int16_t x547 = -11;
	int8_t x548 = 3;
	volatile int32_t t98 = -61381;

    t98 = ((x545/x546)==(x547*x548));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x549 = INT8_MIN;
	uint64_t x550 = UINT64_MAX;

    t99 = ((x549/x550)==(x551*x552));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x553 = 0;
	int8_t x555 = INT8_MIN;
	int32_t t100 = -1;

    t100 = ((x553/x554)==(x555*x556));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x557 = UINT32_MAX;
	uint64_t x558 = UINT64_MAX;
	static volatile uint64_t x559 = 1446977797861218LLU;
	volatile uint16_t x560 = UINT16_MAX;
	volatile int32_t t101 = 2103;

    t101 = ((x557/x558)==(x559*x560));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x565 = -1LL;
	static int64_t x566 = -4258268280LL;
	int16_t x568 = -1;
	volatile int32_t t102 = -1626;

    t102 = ((x565/x566)==(x567*x568));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x569 = 491U;
	uint64_t x570 = UINT64_MAX;
	static int16_t x571 = INT16_MAX;
	volatile uint64_t x572 = UINT64_MAX;

    t103 = ((x569/x570)==(x571*x572));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x573 = 926943840U;
	uint64_t x574 = 6668696LLU;
	static int8_t x575 = INT8_MIN;
	uint32_t x576 = 414U;
	volatile int32_t t104 = -30000;

    t104 = ((x573/x574)==(x575*x576));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x577 = -1;
	int8_t x578 = -7;
	int64_t x579 = 600962370LL;

    t105 = ((x577/x578)==(x579*x580));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x585 = -1;
	int8_t x587 = 30;
	volatile int32_t x588 = 124;

    t106 = ((x585/x586)==(x587*x588));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x589 = INT64_MAX;
	volatile uint16_t x590 = 90U;
	int16_t x591 = INT16_MIN;
	uint8_t x592 = 6U;
	volatile int32_t t107 = -633973081;

    t107 = ((x589/x590)==(x591*x592));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x598 = -3692;
	int32_t t108 = 7997238;

    t108 = ((x597/x598)==(x599*x600));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x601 = 22U;
	uint8_t x602 = UINT8_MAX;
	int32_t x603 = -1;
	volatile uint16_t x604 = 178U;
	int32_t t109 = -607026980;

    t109 = ((x601/x602)==(x603*x604));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x605 = 1U;
	int32_t x606 = -28886083;
	static uint8_t x607 = 93U;
	int32_t t110 = -7;

    t110 = ((x605/x606)==(x607*x608));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x610 = INT32_MAX;
	volatile uint64_t x611 = 19759761013011651LLU;
	int32_t t111 = -169643447;

    t111 = ((x609/x610)==(x611*x612));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x613 = 959987137075LL;
	volatile uint32_t x614 = 26288U;
	static volatile int8_t x615 = INT8_MAX;
	volatile int32_t t112 = -1012639065;

    t112 = ((x613/x614)==(x615*x616));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x617 = 2900185LLU;
	int8_t x618 = INT8_MAX;
	static uint8_t x619 = 6U;
	static int32_t x620 = -25;
	int32_t t113 = -1519804;

    t113 = ((x617/x618)==(x619*x620));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x621 = UINT64_MAX;
	int8_t x622 = INT8_MIN;
	volatile int16_t x624 = -1;
	volatile int32_t t114 = 42;

    t114 = ((x621/x622)==(x623*x624));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x626 = UINT32_MAX;
	int64_t x627 = -1LL;
	uint8_t x628 = UINT8_MAX;
	int32_t t115 = 716030023;

    t115 = ((x625/x626)==(x627*x628));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x629 = 2;
	static uint16_t x630 = 20U;
	int8_t x631 = 45;
	uint64_t x632 = UINT64_MAX;
	int32_t t116 = -18613717;

    t116 = ((x629/x630)==(x631*x632));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x637 = UINT64_MAX;
	int16_t x639 = 1;
	int32_t t117 = -10;

    t117 = ((x637/x638)==(x639*x640));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x641 = 1;
	uint32_t x642 = 1389U;
	volatile int64_t x643 = -1LL;
	int32_t x644 = 96709124;
	int32_t t118 = -1;

    t118 = ((x641/x642)==(x643*x644));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x645 = INT64_MIN;
	uint16_t x646 = 36U;
	volatile uint32_t x647 = 5U;
	volatile int16_t x648 = INT16_MIN;
	int32_t t119 = -101;

    t119 = ((x645/x646)==(x647*x648));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x649 = 28U;
	int32_t x650 = 1012;
	int16_t x651 = INT16_MIN;
	int8_t x652 = -1;

    t120 = ((x649/x650)==(x651*x652));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x657 = 93;
	static int64_t x658 = -1LL;
	static uint64_t x660 = 47491542033LLU;
	int32_t t121 = 27;

    t121 = ((x657/x658)==(x659*x660));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x661 = -32897LL;
	int8_t x662 = -1;
	volatile int8_t x663 = INT8_MAX;
	static uint16_t x664 = 0U;
	int32_t t122 = -66695840;

    t122 = ((x661/x662)==(x663*x664));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x665 = -1LL;
	uint32_t x666 = 11U;
	volatile int64_t x667 = -6963LL;
	int16_t x668 = INT16_MIN;
	static volatile int32_t t123 = 122575821;

    t123 = ((x665/x666)==(x667*x668));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x673 = INT16_MAX;
	int8_t x675 = INT8_MAX;
	static uint16_t x676 = UINT16_MAX;
	volatile int32_t t124 = -751;

    t124 = ((x673/x674)==(x675*x676));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x677 = 1U;
	int64_t x679 = 2821037844LL;
	int32_t t125 = 0;

    t125 = ((x677/x678)==(x679*x680));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x681 = 0;
	volatile int8_t x683 = -1;
	static volatile int32_t t126 = -22;

    t126 = ((x681/x682)==(x683*x684));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x685 = 1U;
	int32_t x686 = INT32_MAX;
	uint64_t x687 = UINT64_MAX;
	int8_t x688 = INT8_MIN;
	int32_t t127 = -2606;

    t127 = ((x685/x686)==(x687*x688));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x689 = 21643769;
	volatile uint16_t x692 = 985U;
	volatile int32_t t128 = -2;

    t128 = ((x689/x690)==(x691*x692));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x693 = INT64_MIN;
	uint16_t x694 = 2601U;
	static uint8_t x695 = 48U;

    t129 = ((x693/x694)==(x695*x696));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x697 = 10657400;
	uint64_t x698 = 1529835709LLU;
	volatile uint16_t x699 = UINT16_MAX;
	static int8_t x700 = 0;
	volatile int32_t t130 = -1113074;

    t130 = ((x697/x698)==(x699*x700));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x701 = UINT16_MAX;
	volatile int32_t x702 = INT32_MAX;
	uint32_t x703 = 447638039U;
	int16_t x704 = INT16_MIN;
	int32_t t131 = 1;

    t131 = ((x701/x702)==(x703*x704));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x705 = INT32_MAX;
	uint8_t x706 = 14U;
	volatile int32_t t132 = -295874765;

    t132 = ((x705/x706)==(x707*x708));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x709 = INT8_MIN;
	volatile int16_t x710 = -1;
	static uint16_t x711 = UINT16_MAX;
	uint64_t x712 = 2673015LLU;

    t133 = ((x709/x710)==(x711*x712));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x717 = 7U;
	static int64_t x718 = INT64_MIN;
	int32_t x719 = -1;
	volatile int64_t x720 = INT64_MAX;
	volatile int32_t t134 = -30;

    t134 = ((x717/x718)==(x719*x720));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x721 = 3U;
	int16_t x723 = -1;

    t135 = ((x721/x722)==(x723*x724));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x725 = -1;
	int32_t x726 = -864221433;
	int8_t x727 = 1;
	int16_t x728 = INT16_MIN;
	volatile int32_t t136 = -12874;

    t136 = ((x725/x726)==(x727*x728));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x729 = 3U;
	int64_t x731 = -1LL;

    t137 = ((x729/x730)==(x731*x732));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x733 = -312;
	static int8_t x734 = -26;
	uint8_t x735 = UINT8_MAX;
	int32_t x736 = -1;
	static int32_t t138 = -1305983;

    t138 = ((x733/x734)==(x735*x736));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x737 = -2;
	int8_t x739 = INT8_MIN;
	static uint64_t x740 = 17LLU;
	int32_t t139 = -1;

    t139 = ((x737/x738)==(x739*x740));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x741 = UINT64_MAX;
	int16_t x742 = INT16_MAX;
	int16_t x744 = INT16_MAX;
	volatile int32_t t140 = 1;

    t140 = ((x741/x742)==(x743*x744));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x745 = INT8_MIN;
	static uint8_t x746 = UINT8_MAX;
	static int64_t x748 = -1LL;
	int32_t t141 = 223631;

    t141 = ((x745/x746)==(x747*x748));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x750 = 1138LLU;
	volatile int32_t x751 = -1239870;
	int32_t t142 = -4;

    t142 = ((x749/x750)==(x751*x752));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x753 = UINT32_MAX;
	static int32_t x756 = -61742;
	volatile int32_t t143 = -633321893;

    t143 = ((x753/x754)==(x755*x756));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x757 = INT64_MIN;
	uint16_t x758 = 12U;
	static int16_t x760 = -1;
	static volatile int32_t t144 = 31221;

    t144 = ((x757/x758)==(x759*x760));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x761 = 25;
	uint8_t x762 = UINT8_MAX;
	uint32_t x764 = UINT32_MAX;
	static int32_t t145 = 232691;

    t145 = ((x761/x762)==(x763*x764));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x765 = 123U;
	static volatile int16_t x766 = -1;
	static volatile int32_t t146 = -72392612;

    t146 = ((x765/x766)==(x767*x768));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x773 = UINT16_MAX;
	int64_t x774 = -4169445LL;
	int8_t x775 = INT8_MIN;
	static int32_t t147 = -63037;

    t147 = ((x773/x774)==(x775*x776));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x777 = -1;
	static int16_t x779 = -1;
	static int32_t x780 = 451007;
	int32_t t148 = 8521;

    t148 = ((x777/x778)==(x779*x780));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x781 = 1U;
	int64_t x782 = 38369964LL;
	volatile int8_t x783 = -1;
	int32_t t149 = 7;

    t149 = ((x781/x782)==(x783*x784));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x785 = INT32_MIN;
	int8_t x786 = INT8_MIN;
	int32_t t150 = -763767;

    t150 = ((x785/x786)==(x787*x788));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x789 = INT8_MIN;
	int64_t x790 = INT64_MIN;
	uint64_t x791 = 462374963919LLU;

    t151 = ((x789/x790)==(x791*x792));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x797 = INT64_MIN;
	volatile int16_t x799 = -1;
	int8_t x800 = 4;
	volatile int32_t t152 = 70590532;

    t152 = ((x797/x798)==(x799*x800));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x801 = INT16_MAX;
	int32_t x802 = 249;
	volatile int8_t x804 = -27;
	int32_t t153 = -282983464;

    t153 = ((x801/x802)==(x803*x804));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x806 = 4U;
	static uint32_t x807 = 12396U;
	volatile int32_t x808 = -1;
	int32_t t154 = -117650;

    t154 = ((x805/x806)==(x807*x808));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x809 = INT32_MIN;
	int64_t x810 = INT64_MIN;
	volatile int64_t x811 = INT64_MAX;
	static int16_t x812 = -1;
	int32_t t155 = -1806;

    t155 = ((x809/x810)==(x811*x812));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x813 = 0;
	static int64_t x814 = INT64_MAX;
	int16_t x815 = INT16_MIN;
	int8_t x816 = INT8_MAX;
	volatile int32_t t156 = -385840;

    t156 = ((x813/x814)==(x815*x816));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x817 = -1LL;
	int16_t x818 = -1;
	int8_t x819 = -27;
	int8_t x820 = INT8_MIN;
	volatile int32_t t157 = -59902501;

    t157 = ((x817/x818)==(x819*x820));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x821 = INT32_MIN;
	volatile uint32_t x822 = UINT32_MAX;
	int32_t t158 = 8330278;

    t158 = ((x821/x822)==(x823*x824));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x825 = INT64_MIN;
	static int8_t x826 = INT8_MAX;
	int8_t x827 = INT8_MIN;
	int8_t x828 = -15;

    t159 = ((x825/x826)==(x827*x828));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x833 = UINT32_MAX;
	int64_t x834 = -1LL;
	int16_t x836 = -1;

    t160 = ((x833/x834)==(x835*x836));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x837 = UINT16_MAX;
	volatile int8_t x838 = -1;
	uint8_t x839 = 0U;
	int64_t x840 = INT64_MIN;
	volatile int32_t t161 = -26;

    t161 = ((x837/x838)==(x839*x840));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x845 = -196270031542567700LL;
	uint64_t x846 = 62914LLU;
	volatile int64_t x847 = 33087LL;
	int8_t x848 = INT8_MIN;

    t162 = ((x845/x846)==(x847*x848));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x849 = -1LL;
	static int8_t x850 = -1;
	volatile int32_t t163 = -64321770;

    t163 = ((x849/x850)==(x851*x852));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x853 = INT32_MIN;
	int8_t x855 = INT8_MIN;
	int8_t x856 = INT8_MIN;

    t164 = ((x853/x854)==(x855*x856));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x857 = 396889U;
	int32_t x858 = -19;
	int8_t x859 = -1;
	uint64_t x860 = 661055658374LLU;
	int32_t t165 = 36;

    t165 = ((x857/x858)==(x859*x860));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x861 = INT8_MIN;
	volatile int32_t x862 = -1;
	int64_t x863 = INT64_MAX;
	int32_t x864 = 1;
	volatile int32_t t166 = -15401;

    t166 = ((x861/x862)==(x863*x864));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x865 = -1;
	static uint16_t x866 = 7U;
	int8_t x867 = INT8_MAX;
	static uint32_t x868 = 735140833U;
	int32_t t167 = 29015;

    t167 = ((x865/x866)==(x867*x868));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x869 = 0U;
	int64_t x870 = INT64_MIN;
	static uint8_t x871 = 0U;
	uint32_t x872 = 29U;

    t168 = ((x869/x870)==(x871*x872));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x873 = 734957173261LLU;
	int8_t x874 = -31;
	static uint16_t x875 = 189U;
	volatile int32_t t169 = -2524;

    t169 = ((x873/x874)==(x875*x876));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x877 = -1LL;
	static uint16_t x878 = UINT16_MAX;
	int8_t x879 = INT8_MIN;
	volatile uint32_t x880 = 3452U;
	volatile int32_t t170 = -178;

    t170 = ((x877/x878)==(x879*x880));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x885 = UINT32_MAX;
	static int64_t x886 = 1361LL;
	uint32_t x887 = UINT32_MAX;
	int32_t t171 = 0;

    t171 = ((x885/x886)==(x887*x888));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x893 = 9;
	int32_t x894 = -1;
	int16_t x895 = 248;
	int8_t x896 = INT8_MAX;
	int32_t t172 = -204;

    t172 = ((x893/x894)==(x895*x896));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x897 = UINT16_MAX;
	int8_t x899 = INT8_MIN;
	uint32_t x900 = UINT32_MAX;
	volatile int32_t t173 = 12142243;

    t173 = ((x897/x898)==(x899*x900));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x901 = INT16_MIN;
	int16_t x902 = -17;
	uint32_t x903 = UINT32_MAX;
	volatile int16_t x904 = INT16_MIN;
	volatile int32_t t174 = 7798;

    t174 = ((x901/x902)==(x903*x904));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x905 = INT8_MIN;
	int32_t x906 = INT32_MIN;
	uint8_t x907 = 2U;
	int8_t x908 = 21;
	volatile int32_t t175 = -76105;

    t175 = ((x905/x906)==(x907*x908));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x909 = -1LL;
	int32_t x910 = -1;
	uint16_t x911 = 123U;
	volatile int32_t t176 = -74;

    t176 = ((x909/x910)==(x911*x912));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x921 = -1LL;
	int64_t x922 = -1LL;
	uint16_t x924 = UINT16_MAX;

    t177 = ((x921/x922)==(x923*x924));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x926 = 81U;
	static uint16_t x927 = UINT16_MAX;
	static int16_t x928 = INT16_MAX;

    t178 = ((x925/x926)==(x927*x928));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x938 = INT16_MAX;
	int64_t x940 = INT64_MIN;
	int32_t t179 = 737;

    t179 = ((x937/x938)==(x939*x940));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x941 = 8424615633208875491LLU;
	int16_t x942 = -1;
	int16_t x943 = INT16_MIN;
	int32_t x944 = -6;
	static int32_t t180 = -481862624;

    t180 = ((x941/x942)==(x943*x944));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x945 = 89172574U;
	uint32_t x947 = 11U;
	uint32_t x948 = UINT32_MAX;
	int32_t t181 = -272;

    t181 = ((x945/x946)==(x947*x948));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x950 = UINT8_MAX;
	static int32_t x952 = -1;

    t182 = ((x949/x950)==(x951*x952));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x953 = UINT32_MAX;
	volatile uint64_t x954 = 407341329850449LLU;
	volatile int16_t x955 = INT16_MAX;
	volatile int8_t x956 = INT8_MIN;
	volatile int32_t t183 = -122620915;

    t183 = ((x953/x954)==(x955*x956));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x957 = 0U;
	int32_t x958 = -1;
	uint8_t x959 = UINT8_MAX;
	int32_t t184 = -24;

    t184 = ((x957/x958)==(x959*x960));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x965 = INT16_MIN;
	int64_t x966 = INT64_MIN;
	static volatile int16_t x967 = -1;
	uint64_t x968 = 7416107519551907LLU;
	static volatile int32_t t185 = 3367;

    t185 = ((x965/x966)==(x967*x968));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x969 = 1U;
	uint32_t x970 = 580677536U;
	int8_t x971 = -1;
	static int32_t t186 = 1;

    t186 = ((x969/x970)==(x971*x972));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x973 = -1021905400865178LL;
	int32_t x974 = INT32_MIN;
	uint32_t x976 = 15646U;
	static volatile int32_t t187 = 7;

    t187 = ((x973/x974)==(x975*x976));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x977 = UINT8_MAX;
	volatile int32_t x978 = -1;
	int16_t x979 = INT16_MAX;

    t188 = ((x977/x978)==(x979*x980));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x981 = 7196U;
	uint32_t x983 = 841381593U;
	int32_t x984 = -1;
	int32_t t189 = 31404363;

    t189 = ((x981/x982)==(x983*x984));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x985 = INT64_MIN;
	int8_t x986 = INT8_MIN;
	static volatile uint32_t x987 = 29U;
	uint16_t x988 = UINT16_MAX;
	volatile int32_t t190 = 179499;

    t190 = ((x985/x986)==(x987*x988));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x997 = INT32_MIN;
	uint64_t x999 = UINT64_MAX;
	static int16_t x1000 = -1;
	volatile int32_t t191 = 224;

    t191 = ((x997/x998)==(x999*x1000));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1005 = 13557004869017LLU;
	int32_t x1006 = INT32_MAX;
	static int8_t x1007 = -1;
	static uint16_t x1008 = 3806U;

    t192 = ((x1005/x1006)==(x1007*x1008));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1009 = UINT32_MAX;
	int64_t x1010 = INT64_MIN;
	volatile int8_t x1011 = INT8_MIN;
	int32_t x1012 = -1;
	static volatile int32_t t193 = 128;

    t193 = ((x1009/x1010)==(x1011*x1012));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1013 = INT8_MIN;
	static int64_t x1014 = -11347100LL;
	int8_t x1015 = -1;
	int16_t x1016 = 23;

    t194 = ((x1013/x1014)==(x1015*x1016));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x1021 = INT32_MAX;
	uint32_t x1023 = UINT32_MAX;
	int16_t x1024 = INT16_MIN;
	int32_t t195 = -16789838;

    t195 = ((x1021/x1022)==(x1023*x1024));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1029 = 110U;
	int16_t x1030 = INT16_MAX;
	volatile uint8_t x1032 = 9U;
	static volatile int32_t t196 = -25016;

    t196 = ((x1029/x1030)==(x1031*x1032));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x1033 = INT64_MAX;
	int32_t x1034 = INT32_MAX;
	int8_t x1036 = INT8_MIN;
	volatile int32_t t197 = 1469;

    t197 = ((x1033/x1034)==(x1035*x1036));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1044 = 29U;
	int32_t t198 = -17135150;

    t198 = ((x1041/x1042)==(x1043*x1044));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1046 = INT64_MIN;
	uint64_t x1047 = 351LLU;
	static uint64_t x1048 = 249859728291738495LLU;
	volatile int32_t t199 = 3;

    t199 = ((x1045/x1046)==(x1047*x1048));

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

