
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

int16_t x4 = -1;
static int32_t x13 = INT32_MIN;
volatile int8_t x16 = -1;
int64_t x22 = INT64_MAX;
int8_t x32 = INT8_MIN;
volatile int32_t t6 = 224;
int32_t t7 = -1002961;
static volatile int32_t x38 = -32133;
static int32_t x43 = 42630994;
static int32_t t9 = -17313;
volatile int16_t x49 = 12;
uint64_t x52 = 611LLU;
volatile int16_t x56 = 0;
int64_t x59 = INT64_MAX;
int32_t x68 = INT32_MIN;
int32_t t14 = -77673209;
int8_t x69 = INT8_MIN;
int16_t x73 = -1;
volatile int32_t x74 = INT32_MAX;
static volatile int64_t x77 = INT64_MAX;
uint16_t x84 = 13605U;
int16_t x87 = -1;
int8_t x98 = 6;
volatile int64_t t23 = 251607018LL;
int32_t x113 = 1;
volatile int32_t t24 = 1508270;
static int16_t x119 = -1;
int32_t t25 = -119067;
int64_t x137 = -38320030412LL;
uint8_t x138 = 0U;
int32_t x140 = INT32_MAX;
volatile int64_t t30 = 12899966388724521LL;
volatile int32_t t31 = 5;
int16_t x146 = 1;
int8_t x152 = INT8_MIN;
int8_t x156 = 1;
int64_t x162 = -160520383290885LL;
int32_t x172 = -2;
uint16_t x173 = UINT16_MAX;
static int32_t x179 = INT32_MIN;
int64_t t41 = -4157148191937823LL;
uint64_t x185 = 501026223900393LLU;
int32_t x197 = INT32_MAX;
uint32_t x199 = UINT32_MAX;
static volatile int64_t x205 = 3367878LL;
int16_t x209 = -1;
static volatile int32_t t49 = -455164;
int64_t x218 = 8221261476494LL;
static int16_t x220 = -1;
uint16_t x226 = 1U;
int8_t x228 = INT8_MIN;
volatile uint8_t x231 = 1U;
static uint32_t x239 = 401711U;
volatile int16_t x240 = 230;
static volatile int32_t t54 = 80;
int32_t x242 = 0;
int8_t x244 = INT8_MIN;
int64_t t57 = 1894008301149743015LL;
int32_t x264 = INT32_MAX;
uint8_t x265 = 26U;
static int8_t x270 = INT8_MAX;
static volatile int8_t x278 = INT8_MIN;
static volatile int8_t x286 = -30;
volatile int32_t t64 = 319227;
static volatile int64_t t66 = -335174LL;
int32_t t67 = 581009;
uint64_t x310 = 15884811450560LLU;
static volatile int16_t x314 = INT16_MAX;
int16_t x319 = INT16_MAX;
int32_t x320 = INT32_MIN;
uint64_t x333 = 10292840699130614LLU;
int32_t x345 = INT32_MIN;
int8_t x348 = 7;
int16_t x349 = INT16_MIN;
static int64_t x350 = 2920640LL;
int32_t x351 = 396;
volatile int64_t x352 = INT64_MIN;
uint16_t x355 = 2U;
volatile int32_t t78 = -66839507;
volatile int8_t x363 = 15;
int32_t t79 = -16219111;
volatile int32_t x374 = 0;
int8_t x375 = 43;
int8_t x383 = 0;
volatile uint32_t x384 = 246565064U;
int32_t t83 = 4645383;
volatile int32_t t86 = 8;
static uint32_t x410 = 815900759U;
uint16_t x411 = UINT16_MAX;
uint16_t x440 = UINT16_MAX;
volatile int64_t t95 = 2831LL;
volatile int64_t x441 = 22142772888LL;
volatile int16_t x444 = -1;
static volatile int64_t x452 = INT64_MIN;
volatile uint64_t t98 = 208401LLU;
int64_t x462 = INT64_MAX;
int8_t x463 = INT8_MIN;
static int32_t x465 = INT32_MIN;
static int32_t x471 = -1;
uint8_t x485 = UINT8_MAX;
static int8_t x486 = 0;
uint64_t x488 = 86LLU;
int32_t t107 = 821369;
int32_t x493 = INT32_MAX;
int32_t t109 = 7328;
volatile int16_t x501 = INT16_MIN;
uint64_t x503 = UINT64_MAX;
int64_t x504 = INT64_MAX;
int32_t x507 = INT32_MAX;
int16_t x513 = INT16_MIN;
static int64_t x514 = 88743139561LL;
int8_t x529 = 0;
uint32_t x531 = 186U;
volatile int32_t t117 = -86600791;
int64_t x534 = -173528899661LL;
static int32_t t118 = -10;
static volatile int16_t x539 = -1;
int32_t t119 = 9295;
int16_t x545 = INT16_MAX;
int8_t x548 = -8;
static volatile int32_t t122 = -5119046;
int16_t x557 = INT16_MIN;
volatile int32_t t125 = 45150;
static uint16_t x567 = 85U;
volatile uint64_t t126 = 3LLU;
int32_t x571 = INT32_MIN;
static int16_t x573 = INT16_MIN;
int16_t x574 = INT16_MIN;
int8_t x576 = INT8_MIN;
static int8_t x579 = 3;
int32_t t129 = -1;
int16_t x589 = -10739;
uint8_t x591 = UINT8_MAX;
uint8_t x592 = UINT8_MAX;
volatile int8_t x595 = -7;
volatile int32_t t131 = -49331429;
int32_t t133 = 1441331;
uint64_t x621 = 11921749105968571LLU;
int16_t x623 = 0;
volatile uint64_t t137 = 3065052189582440LLU;
int8_t x626 = 4;
int8_t x627 = INT8_MIN;
int64_t x628 = -485555LL;
uint64_t x631 = 12400736631987047LLU;
int32_t x642 = INT32_MIN;
int16_t x644 = INT16_MIN;
volatile int8_t x646 = INT8_MIN;
int16_t x648 = INT16_MAX;
int8_t x651 = INT8_MAX;
int16_t x664 = INT16_MIN;
uint32_t x666 = UINT32_MAX;
volatile uint8_t x667 = 47U;
static volatile int32_t t147 = -14849;
volatile int64_t x672 = -27540787LL;
int32_t x676 = INT32_MAX;
int32_t t149 = 7;
int32_t x677 = INT32_MAX;
uint16_t x691 = 11736U;
uint8_t x694 = 8U;
int8_t x695 = INT8_MIN;
int8_t x707 = -1;
volatile int16_t x710 = INT16_MAX;
int8_t x716 = -1;
static volatile int64_t t161 = 8616LL;
volatile int32_t t162 = -4;
int16_t x741 = INT16_MIN;
volatile int32_t t163 = -12804;
static uint8_t x745 = 123U;
int16_t x749 = -1;
volatile int32_t x761 = -184594;
static uint16_t x765 = UINT16_MAX;
int16_t x766 = -6662;
volatile uint64_t x768 = 4LLU;
static uint64_t x770 = 2LLU;
uint64_t t171 = 47052905LLU;
int16_t x782 = INT16_MIN;
int16_t x786 = INT16_MIN;
uint64_t x788 = 42681445751588LLU;
int16_t x795 = -1;
int64_t x802 = INT64_MIN;
int16_t x803 = -16;
volatile int8_t x804 = -1;
static uint32_t x809 = 69458U;
volatile uint64_t t178 = 16171LLU;
volatile int32_t t180 = 49497;
static int16_t x832 = 39;
static int32_t t182 = -22;
uint64_t x855 = 14670LLU;
volatile int32_t t186 = -43;
volatile int32_t x861 = -2903818;
int32_t x863 = 105;
int32_t t187 = -4571289;
static volatile int32_t t188 = 1260946;
static int8_t x869 = INT8_MAX;
uint64_t x872 = UINT64_MAX;
volatile uint16_t x879 = UINT16_MAX;
static uint64_t t190 = 310LLU;
int64_t x888 = INT64_MIN;
static uint8_t x890 = UINT8_MAX;
uint64_t x891 = 49795573206LLU;
volatile uint32_t t194 = 407683U;
int32_t t195 = 492022467;
volatile int32_t x907 = -67;
uint32_t x914 = 871382U;


void f0(void) {
    	static uint16_t x1 = 33U;
	uint32_t x2 = 9U;
	uint32_t x3 = UINT32_MAX;
	int32_t t0 = -2;

    t0 = (x1^(x2!=(x3+x4)));

    if (t0 != 32) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MIN;
	volatile int32_t x6 = INT32_MIN;
	static volatile int16_t x7 = 0;
	int32_t x8 = 42;
	volatile int64_t t1 = 9872014605061LL;

    t1 = (x5^(x6!=(x7+x8)));

    if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	uint32_t x11 = 1820023439U;
	int64_t x12 = -142649LL;
	volatile int32_t t2 = 100;

    t2 = (x9^(x10!=(x11+x12)));

    if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x14 = UINT32_MAX;
	volatile uint8_t x15 = 60U;
	volatile int32_t t3 = -339;

    t3 = (x13^(x14!=(x15+x16)));

    if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = -1;
	uint64_t x23 = 42812516LLU;
	static int64_t x24 = INT64_MIN;
	int32_t t4 = -1;

    t4 = (x21^(x22!=(x23+x24)));

    if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = UINT32_MAX;
	volatile int16_t x26 = 0;
	int64_t x27 = 1287137454970LL;
	volatile uint8_t x28 = UINT8_MAX;
	uint32_t t5 = 0U;

    t5 = (x25^(x26!=(x27+x28)));

    if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = -1;
	static int64_t x30 = -10397397303LL;
	int32_t x31 = -982371794;

    t6 = (x29^(x30!=(x31+x32)));

    if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = INT32_MIN;
	uint16_t x34 = 6U;
	int8_t x35 = 12;
	uint32_t x36 = 0U;

    t7 = (x33^(x34!=(x35+x36)));

    if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = -1;
	int16_t x39 = INT16_MIN;
	int16_t x40 = -21;
	static volatile int32_t t8 = -279;

    t8 = (x37^(x38!=(x39+x40)));

    if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x41 = -6610677;
	int16_t x42 = INT16_MIN;
	int32_t x44 = -137;

    t9 = (x41^(x42!=(x43+x44)));

    if (t9 != -6610678) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x45 = 9U;
	uint32_t x46 = UINT32_MAX;
	static uint32_t x47 = UINT32_MAX;
	int64_t x48 = 76585LL;
	volatile uint32_t t10 = 20277222U;

    t10 = (x45^(x46!=(x47+x48)));

    if (t10 != 8U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x50 = INT32_MAX;
	int16_t x51 = INT16_MIN;
	int32_t t11 = 6823;

    t11 = (x49^(x50!=(x51+x52)));

    if (t11 != 13) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 0U;
	int32_t x54 = INT32_MAX;
	int8_t x55 = INT8_MIN;
	volatile uint32_t t12 = 1901U;

    t12 = (x53^(x54!=(x55+x56)));

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x57 = -1LL;
	uint8_t x58 = 12U;
	volatile int32_t x60 = INT32_MIN;
	volatile int64_t t13 = -8435265LL;

    t13 = (x57^(x58!=(x59+x60)));

    if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x65 = INT32_MIN;
	uint16_t x66 = 11240U;
	volatile int8_t x67 = INT8_MAX;

    t14 = (x65^(x66!=(x67+x68)));

    if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x70 = INT64_MAX;
	uint32_t x71 = 123781858U;
	uint32_t x72 = 203659599U;
	volatile int32_t t15 = -4607;

    t15 = (x69^(x70!=(x71+x72)));

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x75 = 5491U;
	volatile int64_t x76 = -21LL;
	int32_t t16 = -91631;

    t16 = (x73^(x74!=(x75+x76)));

    if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x78 = 1U;
	int64_t x79 = 24449743719163080LL;
	static uint16_t x80 = UINT16_MAX;
	static volatile int64_t t17 = -24LL;

    t17 = (x77^(x78!=(x79+x80)));

    if (t17 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = -5;
	static int16_t x82 = INT16_MAX;
	static int16_t x83 = -1;
	int32_t t18 = -7709676;

    t18 = (x81^(x82!=(x83+x84)));

    if (t18 != -6) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x85 = UINT16_MAX;
	volatile uint16_t x86 = 289U;
	volatile int16_t x88 = -5;
	volatile int32_t t19 = 798564;

    t19 = (x85^(x86!=(x87+x88)));

    if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x89 = -3;
	int32_t x90 = INT32_MIN;
	volatile int32_t x91 = 3241887;
	int32_t x92 = INT32_MIN;
	int32_t t20 = -1;

    t20 = (x89^(x90!=(x91+x92)));

    if (t20 != -4) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = 804618830772076LL;
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = 13;
	static uint16_t x96 = UINT16_MAX;
	int64_t t21 = 88LL;

    t21 = (x93^(x94!=(x95+x96)));

    if (t21 != 804618830772077LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = 16LLU;
	int16_t x99 = INT16_MIN;
	int8_t x100 = 0;
	uint64_t t22 = 2419569665104360LLU;

    t22 = (x97^(x98!=(x99+x100)));

    if (t22 != 17LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x105 = -725457LL;
	static uint64_t x106 = 386221084LLU;
	int8_t x107 = INT8_MIN;
	int64_t x108 = -1LL;

    t23 = (x105^(x106!=(x107+x108)));

    if (t23 != -725458LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x114 = 1017213317U;
	static uint8_t x115 = UINT8_MAX;
	volatile int8_t x116 = INT8_MIN;

    t24 = (x113^(x114!=(x115+x116)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x117 = -1;
	int32_t x118 = INT32_MAX;
	static int32_t x120 = 594698;

    t25 = (x117^(x118!=(x119+x120)));

    if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x121 = -1LL;
	int32_t x122 = 18009;
	uint64_t x123 = 153160350656543875LLU;
	uint32_t x124 = UINT32_MAX;
	static int64_t t26 = 0LL;

    t26 = (x121^(x122!=(x123+x124)));

    if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x125 = UINT32_MAX;
	uint16_t x126 = UINT16_MAX;
	volatile uint16_t x127 = 7U;
	int16_t x128 = INT16_MIN;
	volatile uint32_t t27 = 2809U;

    t27 = (x125^(x126!=(x127+x128)));

    if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MIN;
	static uint16_t x131 = 3156U;
	static int32_t x132 = INT32_MIN;
	static volatile int32_t t28 = -185659;

    t28 = (x129^(x130!=(x131+x132)));

    if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x133 = 341U;
	volatile int8_t x134 = INT8_MAX;
	int8_t x135 = -1;
	volatile uint16_t x136 = 13248U;
	volatile int32_t t29 = 1748;

    t29 = (x133^(x134!=(x135+x136)));

    if (t29 != 340) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x139 = INT64_MIN;

    t30 = (x137^(x138!=(x139+x140)));

    if (t30 != -38320030411LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x141 = -1002;
	int8_t x142 = 3;
	static int64_t x143 = -825469LL;
	static int64_t x144 = 503LL;

    t31 = (x141^(x142!=(x143+x144)));

    if (t31 != -1001) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = 32194736328270155LL;
	uint64_t x147 = 813691LLU;
	static int64_t x148 = INT64_MIN;
	int64_t t32 = 161583209748357LL;

    t32 = (x145^(x146!=(x147+x148)));

    if (t32 != 32194736328270154LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x149 = -30;
	int32_t x150 = INT32_MAX;
	volatile int8_t x151 = INT8_MIN;
	volatile int32_t t33 = 12938;

    t33 = (x149^(x150!=(x151+x152)));

    if (t33 != -29) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x153 = 11189582045377015LLU;
	volatile int64_t x154 = INT64_MAX;
	volatile uint8_t x155 = 6U;
	uint64_t t34 = 503255LLU;

    t34 = (x153^(x154!=(x155+x156)));

    if (t34 != 11189582045377014LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x157 = 222U;
	uint16_t x158 = 212U;
	int32_t x159 = INT32_MAX;
	static int32_t x160 = -718;
	static volatile uint32_t t35 = 58U;

    t35 = (x157^(x158!=(x159+x160)));

    if (t35 != 223U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x161 = -580933482LL;
	int8_t x163 = INT8_MAX;
	uint8_t x164 = UINT8_MAX;
	int64_t t36 = -1200LL;

    t36 = (x161^(x162!=(x163+x164)));

    if (t36 != -580933481LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x165 = INT32_MIN;
	static uint16_t x166 = UINT16_MAX;
	uint8_t x167 = UINT8_MAX;
	volatile int32_t x168 = INT32_MIN;
	static int32_t t37 = -1111893;

    t37 = (x165^(x166!=(x167+x168)));

    if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x169 = 6896625872734LLU;
	int64_t x170 = -11675627385LL;
	uint32_t x171 = UINT32_MAX;
	uint64_t t38 = 1324443844LLU;

    t38 = (x169^(x170!=(x171+x172)));

    if (t38 != 6896625872735LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x174 = UINT16_MAX;
	static int64_t x175 = -459342934LL;
	uint8_t x176 = 0U;
	int32_t t39 = -353519;

    t39 = (x173^(x174!=(x175+x176)));

    if (t39 != 65534) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x177 = INT8_MIN;
	int64_t x178 = INT64_MIN;
	uint64_t x180 = 7888104347LLU;
	volatile int32_t t40 = 1;

    t40 = (x177^(x178!=(x179+x180)));

    if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x181 = INT64_MIN;
	volatile int64_t x182 = 61298278LL;
	volatile int32_t x183 = -2572437;
	uint8_t x184 = 1U;

    t41 = (x181^(x182!=(x183+x184)));

    if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x186 = UINT16_MAX;
	uint64_t x187 = UINT64_MAX;
	int8_t x188 = INT8_MAX;
	volatile uint64_t t42 = 3122LLU;

    t42 = (x185^(x186!=(x187+x188)));

    if (t42 != 501026223900392LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = INT8_MIN;
	int32_t x190 = 1778883;
	static int16_t x191 = -1;
	int64_t x192 = -1LL;
	volatile int32_t t43 = -3204;

    t43 = (x189^(x190!=(x191+x192)));

    if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x193 = 7924709LL;
	static volatile int8_t x194 = INT8_MIN;
	uint32_t x195 = UINT32_MAX;
	int8_t x196 = INT8_MIN;
	int64_t t44 = 525LL;

    t44 = (x193^(x194!=(x195+x196)));

    if (t44 != 7924708LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x198 = -643;
	int16_t x200 = -2002;
	static volatile int32_t t45 = -245892;

    t45 = (x197^(x198!=(x199+x200)));

    if (t45 != 2147483646) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x201 = INT16_MIN;
	int16_t x202 = 1148;
	uint64_t x203 = UINT64_MAX;
	volatile int64_t x204 = 2444968655209691LL;
	int32_t t46 = -475;

    t46 = (x201^(x202!=(x203+x204)));

    if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x206 = UINT64_MAX;
	volatile int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MAX;
	volatile int64_t t47 = -956LL;

    t47 = (x205^(x206!=(x207+x208)));

    if (t47 != 3367879LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x210 = INT16_MAX;
	volatile uint16_t x211 = 50U;
	int8_t x212 = 11;
	volatile int32_t t48 = -3143185;

    t48 = (x209^(x210!=(x211+x212)));

    if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x213 = 47U;
	int16_t x214 = INT16_MAX;
	static int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MIN;

    t49 = (x213^(x214!=(x215+x216)));

    if (t49 != 46) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x217 = INT32_MIN;
	uint8_t x219 = UINT8_MAX;
	volatile int32_t t50 = 2314;

    t50 = (x217^(x218!=(x219+x220)));

    if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x221 = UINT64_MAX;
	static volatile uint8_t x222 = 18U;
	int32_t x223 = -1;
	uint64_t x224 = 58488448921LLU;
	volatile uint64_t t51 = 5396444320695LLU;

    t51 = (x221^(x222!=(x223+x224)));

    if (t51 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x225 = INT32_MAX;
	uint16_t x227 = 21U;
	int32_t t52 = -668343949;

    t52 = (x225^(x226!=(x227+x228)));

    if (t52 != 2147483646) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = INT16_MAX;
	uint16_t x230 = 26785U;
	uint64_t x232 = 65407215367700688LLU;
	volatile int32_t t53 = 12085269;

    t53 = (x229^(x230!=(x231+x232)));

    if (t53 != 32766) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x237 = -275839271;
	int32_t x238 = INT32_MIN;

    t54 = (x237^(x238!=(x239+x240)));

    if (t54 != -275839272) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x241 = -1;
	volatile int16_t x243 = INT16_MAX;
	volatile int32_t t55 = 0;

    t55 = (x241^(x242!=(x243+x244)));

    if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x249 = -1;
	int8_t x250 = INT8_MIN;
	int64_t x251 = INT64_MAX;
	int16_t x252 = -797;
	volatile int32_t t56 = -748;

    t56 = (x249^(x250!=(x251+x252)));

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x253 = INT64_MAX;
	int64_t x254 = -28320373950784LL;
	uint8_t x255 = 3U;
	volatile int64_t x256 = INT64_MIN;

    t57 = (x253^(x254!=(x255+x256)));

    if (t57 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x257 = 0U;
	int8_t x258 = -1;
	int32_t x259 = INT32_MIN;
	static int32_t x260 = INT32_MAX;
	uint32_t t58 = 107U;

    t58 = (x257^(x258!=(x259+x260)));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = -5;
	int16_t x262 = -145;
	volatile int32_t x263 = -1;
	int32_t t59 = 250793397;

    t59 = (x261^(x262!=(x263+x264)));

    if (t59 != -6) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x266 = 4U;
	int64_t x267 = -110927535LL;
	int8_t x268 = INT8_MIN;
	int32_t t60 = -362;

    t60 = (x265^(x266!=(x267+x268)));

    if (t60 != 27) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x269 = 26U;
	volatile int64_t x271 = 29LL;
	volatile int16_t x272 = -71;
	volatile uint32_t t61 = 5289005U;

    t61 = (x269^(x270!=(x271+x272)));

    if (t61 != 27U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x273 = -45;
	static int32_t x274 = INT32_MAX;
	int16_t x275 = -1;
	uint32_t x276 = 1368U;
	volatile int32_t t62 = -6100585;

    t62 = (x273^(x274!=(x275+x276)));

    if (t62 != -46) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x277 = -1;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MIN;
	static int32_t t63 = 27016328;

    t63 = (x277^(x278!=(x279+x280)));

    if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x285 = 30346961;
	static int8_t x287 = -1;
	static uint32_t x288 = 11152631U;

    t64 = (x285^(x286!=(x287+x288)));

    if (t64 != 30346960) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x289 = UINT64_MAX;
	int32_t x290 = -1;
	int8_t x291 = INT8_MAX;
	volatile int32_t x292 = INT32_MIN;
	uint64_t t65 = 21461443969LLU;

    t65 = (x289^(x290!=(x291+x292)));

    if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x293 = -1LL;
	int16_t x294 = 1977;
	static int64_t x295 = 1125094440282545LL;
	volatile int32_t x296 = -1;

    t66 = (x293^(x294!=(x295+x296)));

    if (t66 != -2LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x305 = 1515;
	int8_t x306 = INT8_MIN;
	static volatile int32_t x307 = -1;
	static int16_t x308 = INT16_MAX;

    t67 = (x305^(x306!=(x307+x308)));

    if (t67 != 1514) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint8_t x309 = 6U;
	uint16_t x311 = UINT16_MAX;
	uint16_t x312 = 22599U;
	int32_t t68 = 16022881;

    t68 = (x309^(x310!=(x311+x312)));

    if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x313 = -1;
	volatile int8_t x315 = INT8_MIN;
	uint64_t x316 = 5286049LLU;
	volatile int32_t t69 = 9;

    t69 = (x313^(x314!=(x315+x316)));

    if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x317 = INT32_MAX;
	int8_t x318 = -1;
	int32_t t70 = 1;

    t70 = (x317^(x318!=(x319+x320)));

    if (t70 != 2147483646) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x325 = 197U;
	uint16_t x326 = 3467U;
	static volatile int16_t x327 = 1;
	uint8_t x328 = UINT8_MAX;
	static uint32_t t71 = 500504451U;

    t71 = (x325^(x326!=(x327+x328)));

    if (t71 != 196U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = INT64_MAX;
	int64_t x332 = -1LL;
	int32_t t72 = 144;

    t72 = (x329^(x330!=(x331+x332)));

    if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x334 = INT16_MAX;
	volatile uint8_t x335 = 101U;
	uint8_t x336 = 18U;
	uint64_t t73 = 2388933811569LLU;

    t73 = (x333^(x334!=(x335+x336)));

    if (t73 != 10292840699130615LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x337 = 114304511U;
	int32_t x338 = 152553;
	uint32_t x339 = 22934367U;
	uint8_t x340 = 4U;
	volatile uint32_t t74 = 1383403337U;

    t74 = (x337^(x338!=(x339+x340)));

    if (t74 != 114304510U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x341 = UINT32_MAX;
	volatile int16_t x342 = -67;
	static int8_t x343 = INT8_MAX;
	int8_t x344 = 1;
	volatile uint32_t t75 = 0U;

    t75 = (x341^(x342!=(x343+x344)));

    if (t75 != 4294967294U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x346 = INT64_MAX;
	uint64_t x347 = UINT64_MAX;
	int32_t t76 = 1666;

    t76 = (x345^(x346!=(x347+x348)));

    if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t t77 = 44127674;

    t77 = (x349^(x350!=(x351+x352)));

    if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x353 = -1;
	int16_t x354 = INT16_MAX;
	static uint64_t x356 = UINT64_MAX;

    t78 = (x353^(x354!=(x355+x356)));

    if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x361 = 44;
	static uint64_t x362 = 1373846734LLU;
	uint32_t x364 = 233041703U;

    t79 = (x361^(x362!=(x363+x364)));

    if (t79 != 45) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x365 = -1;
	int64_t x366 = INT64_MAX;
	uint8_t x367 = 39U;
	static uint8_t x368 = 9U;
	volatile int32_t t80 = -5980812;

    t80 = (x365^(x366!=(x367+x368)));

    if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x373 = -1;
	int8_t x376 = -1;
	int32_t t81 = 511320311;

    t81 = (x373^(x374!=(x375+x376)));

    if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x377 = 24764LLU;
	static int16_t x378 = 8;
	uint64_t x379 = 40LLU;
	volatile int64_t x380 = -14992528LL;
	uint64_t t82 = 402827772918537LLU;

    t82 = (x377^(x378!=(x379+x380)));

    if (t82 != 24765LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x381 = 49474;
	static int16_t x382 = -1;

    t83 = (x381^(x382!=(x383+x384)));

    if (t83 != 49475) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x385 = -1079LL;
	uint16_t x386 = UINT16_MAX;
	static volatile uint64_t x387 = UINT64_MAX;
	volatile int64_t x388 = -1LL;
	volatile int64_t t84 = -435370597LL;

    t84 = (x385^(x386!=(x387+x388)));

    if (t84 != -1080LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	static int64_t x391 = -1LL;
	volatile int32_t x392 = INT32_MIN;
	static volatile int32_t t85 = -95103;

    t85 = (x389^(x390!=(x391+x392)));

    if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x393 = INT16_MIN;
	int8_t x394 = -1;
	static int64_t x395 = -2LL;
	int8_t x396 = INT8_MIN;

    t86 = (x393^(x394!=(x395+x396)));

    if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x397 = -1;
	uint32_t x398 = 54U;
	int16_t x399 = -1;
	int64_t x400 = INT64_MAX;
	volatile int32_t t87 = -492340;

    t87 = (x397^(x398!=(x399+x400)));

    if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x405 = INT32_MAX;
	uint16_t x406 = UINT16_MAX;
	volatile int16_t x407 = INT16_MIN;
	volatile int64_t x408 = -1LL;
	volatile int32_t t88 = -420207593;

    t88 = (x405^(x406!=(x407+x408)));

    if (t88 != 2147483646) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x409 = -1LL;
	int32_t x412 = -104240;
	int64_t t89 = -566439346797043239LL;

    t89 = (x409^(x410!=(x411+x412)));

    if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x413 = -1;
	uint64_t x414 = UINT64_MAX;
	uint64_t x415 = 3084745LLU;
	volatile uint64_t x416 = 24067223085076LLU;
	volatile int32_t t90 = 108893359;

    t90 = (x413^(x414!=(x415+x416)));

    if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x417 = INT8_MIN;
	volatile uint8_t x418 = 98U;
	uint16_t x419 = 412U;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t91 = 0;

    t91 = (x417^(x418!=(x419+x420)));

    if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x421 = -257042935;
	static uint64_t x422 = 1109396318174365LLU;
	int32_t x423 = INT32_MIN;
	uint16_t x424 = UINT16_MAX;
	int32_t t92 = -107051;

    t92 = (x421^(x422!=(x423+x424)));

    if (t92 != -257042936) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = -834554;
	uint16_t x426 = UINT16_MAX;
	int32_t x427 = INT32_MAX;
	int8_t x428 = -3;
	static int32_t t93 = -7;

    t93 = (x425^(x426!=(x427+x428)));

    if (t93 != -834553) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x429 = -1;
	uint32_t x430 = 297319U;
	int64_t x431 = -3467643LL;
	int16_t x432 = INT16_MIN;
	volatile int32_t t94 = 115577;

    t94 = (x429^(x430!=(x431+x432)));

    if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x437 = INT64_MAX;
	volatile int32_t x438 = -117820;
	static volatile int16_t x439 = -1;

    t95 = (x437^(x438!=(x439+x440)));

    if (t95 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x442 = INT64_MAX;
	static volatile int16_t x443 = -717;
	volatile int64_t t96 = 260362463324878LL;

    t96 = (x441^(x442!=(x443+x444)));

    if (t96 != 22142772889LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x445 = -336814081LL;
	volatile int8_t x446 = -1;
	uint32_t x447 = 21U;
	static int8_t x448 = INT8_MAX;
	int64_t t97 = -7894576980LL;

    t97 = (x445^(x446!=(x447+x448)));

    if (t97 != -336814082LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x449 = 25334LLU;
	volatile int32_t x450 = INT32_MIN;
	volatile uint64_t x451 = UINT64_MAX;

    t98 = (x449^(x450!=(x451+x452)));

    if (t98 != 25335LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x453 = 53U;
	int16_t x454 = INT16_MIN;
	uint8_t x455 = UINT8_MAX;
	uint16_t x456 = 1U;
	volatile uint32_t t99 = 214U;

    t99 = (x453^(x454!=(x455+x456)));

    if (t99 != 52U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x457 = 1974613968146LL;
	uint32_t x458 = UINT32_MAX;
	int32_t x459 = INT32_MIN;
	static int64_t x460 = 1621165286574LL;
	static volatile int64_t t100 = -406004LL;

    t100 = (x457^(x458!=(x459+x460)));

    if (t100 != 1974613968147LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x461 = 73U;
	int64_t x464 = -1LL;
	int32_t t101 = 163435;

    t101 = (x461^(x462!=(x463+x464)));

    if (t101 != 72) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint8_t x466 = 42U;
	int8_t x467 = INT8_MIN;
	volatile uint64_t x468 = 795047554206LLU;
	volatile int32_t t102 = -52;

    t102 = (x465^(x466!=(x467+x468)));

    if (t102 != -2147483647) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x469 = INT32_MIN;
	int8_t x470 = 49;
	uint8_t x472 = 0U;
	static int32_t t103 = -6;

    t103 = (x469^(x470!=(x471+x472)));

    if (t103 != -2147483647) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x473 = 2920330U;
	volatile int8_t x474 = 1;
	volatile int16_t x475 = 967;
	uint8_t x476 = 0U;
	volatile uint32_t t104 = 13562706U;

    t104 = (x473^(x474!=(x475+x476)));

    if (t104 != 2920331U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x477 = INT8_MIN;
	int8_t x478 = 5;
	int32_t x479 = INT32_MAX;
	volatile int16_t x480 = INT16_MIN;
	int32_t t105 = -210550259;

    t105 = (x477^(x478!=(x479+x480)));

    if (t105 != -127) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x481 = -1;
	volatile int32_t x482 = 2729;
	volatile int64_t x483 = INT64_MIN;
	uint8_t x484 = 2U;
	static int32_t t106 = -5819444;

    t106 = (x481^(x482!=(x483+x484)));

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x487 = -31;

    t107 = (x485^(x486!=(x487+x488)));

    if (t107 != 254) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x489 = UINT64_MAX;
	static uint16_t x490 = 916U;
	int16_t x491 = INT16_MIN;
	volatile int32_t x492 = -1336;
	volatile uint64_t t108 = 2049578488957LLU;

    t108 = (x489^(x490!=(x491+x492)));

    if (t108 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x494 = 18042868;
	static int64_t x495 = INT64_MIN;
	int16_t x496 = INT16_MAX;

    t109 = (x493^(x494!=(x495+x496)));

    if (t109 != 2147483646) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x497 = -56924LL;
	int64_t x498 = 242802620919LL;
	volatile uint64_t x499 = UINT64_MAX;
	int32_t x500 = INT32_MIN;
	volatile int64_t t110 = 235182881LL;

    t110 = (x497^(x498!=(x499+x500)));

    if (t110 != -56923LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x502 = INT32_MIN;
	static volatile int32_t t111 = -1152541;

    t111 = (x501^(x502!=(x503+x504)));

    if (t111 != -32767) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x505 = -1;
	volatile uint16_t x506 = UINT16_MAX;
	volatile int16_t x508 = INT16_MIN;
	static volatile int32_t t112 = -16592;

    t112 = (x505^(x506!=(x507+x508)));

    if (t112 != -2) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x515 = INT32_MIN;
	volatile int64_t x516 = -949006LL;
	int32_t t113 = -1336063;

    t113 = (x513^(x514!=(x515+x516)));

    if (t113 != -32767) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x517 = INT64_MIN;
	static uint8_t x518 = UINT8_MAX;
	int16_t x519 = INT16_MAX;
	int32_t x520 = INT32_MIN;
	volatile int64_t t114 = -2956649117LL;

    t114 = (x517^(x518!=(x519+x520)));

    if (t114 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x521 = 1LL;
	static int8_t x522 = 22;
	int8_t x523 = INT8_MAX;
	int64_t x524 = INT64_MIN;
	volatile int64_t t115 = -11880357939676544LL;

    t115 = (x521^(x522!=(x523+x524)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x525 = 106LL;
	static uint16_t x526 = UINT16_MAX;
	uint8_t x527 = 1U;
	uint16_t x528 = 17498U;
	volatile int64_t t116 = -7434LL;

    t116 = (x525^(x526!=(x527+x528)));

    if (t116 != 107LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x530 = -1;
	int8_t x532 = 12;

    t117 = (x529^(x530!=(x531+x532)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x533 = -21;
	int8_t x535 = INT8_MIN;
	int8_t x536 = -1;

    t118 = (x533^(x534!=(x535+x536)));

    if (t118 != -22) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x537 = -616;
	volatile uint8_t x538 = UINT8_MAX;
	uint32_t x540 = UINT32_MAX;

    t119 = (x537^(x538!=(x539+x540)));

    if (t119 != -615) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x541 = -1;
	uint8_t x542 = 89U;
	static int16_t x543 = INT16_MIN;
	static volatile int16_t x544 = INT16_MIN;
	volatile int32_t t120 = -57242;

    t120 = (x541^(x542!=(x543+x544)));

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x546 = INT32_MIN;
	static uint32_t x547 = UINT32_MAX;
	int32_t t121 = -204;

    t121 = (x545^(x546!=(x547+x548)));

    if (t121 != 32766) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x549 = INT8_MIN;
	int64_t x550 = -285650312594LL;
	volatile int8_t x551 = -4;
	static volatile int16_t x552 = 1;

    t122 = (x549^(x550!=(x551+x552)));

    if (t122 != -127) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x553 = 184185152722634LLU;
	int8_t x554 = 0;
	volatile uint8_t x555 = 10U;
	int8_t x556 = -30;
	uint64_t t123 = 149831336LLU;

    t123 = (x553^(x554!=(x555+x556)));

    if (t123 != 184185152722635LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x558 = INT32_MIN;
	volatile uint8_t x559 = 1U;
	static uint8_t x560 = 31U;
	volatile int32_t t124 = 130226;

    t124 = (x557^(x558!=(x559+x560)));

    if (t124 != -32767) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x561 = 814U;
	int32_t x562 = -1;
	int32_t x563 = INT32_MIN;
	int64_t x564 = -1LL;

    t125 = (x561^(x562!=(x563+x564)));

    if (t125 != 815) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x565 = 3LLU;
	int16_t x566 = INT16_MIN;
	uint64_t x568 = UINT64_MAX;

    t126 = (x565^(x566!=(x567+x568)));

    if (t126 != 2LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x569 = UINT8_MAX;
	static int16_t x570 = -2;
	static volatile uint32_t x572 = 40260U;
	int32_t t127 = -104;

    t127 = (x569^(x570!=(x571+x572)));

    if (t127 != 254) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x575 = -1;
	volatile int32_t t128 = 33;

    t128 = (x573^(x574!=(x575+x576)));

    if (t128 != -32767) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x577 = 957;
	int64_t x578 = INT64_MIN;
	int64_t x580 = -1LL;

    t129 = (x577^(x578!=(x579+x580)));

    if (t129 != 956) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x590 = -1;
	volatile int32_t t130 = 7692236;

    t130 = (x589^(x590!=(x591+x592)));

    if (t130 != -10740) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x593 = INT16_MAX;
	int64_t x594 = -1LL;
	static int16_t x596 = 103;

    t131 = (x593^(x594!=(x595+x596)));

    if (t131 != 32766) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x597 = INT16_MAX;
	int64_t x598 = INT64_MIN;
	static int8_t x599 = 0;
	int16_t x600 = INT16_MIN;
	volatile int32_t t132 = -12;

    t132 = (x597^(x598!=(x599+x600)));

    if (t132 != 32766) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x601 = 184U;
	int16_t x602 = -1;
	volatile uint64_t x603 = 406019021254614LLU;
	volatile uint32_t x604 = 145750047U;

    t133 = (x601^(x602!=(x603+x604)));

    if (t133 != 185) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x609 = -1;
	volatile int8_t x610 = 3;
	int8_t x611 = 0;
	int32_t x612 = INT32_MAX;
	int32_t t134 = -231305336;

    t134 = (x609^(x610!=(x611+x612)));

    if (t134 != -2) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x613 = 1U;
	static int8_t x614 = INT8_MAX;
	static int16_t x615 = -1;
	int64_t x616 = -53786160301LL;
	static volatile int32_t t135 = 16;

    t135 = (x613^(x614!=(x615+x616)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x617 = INT8_MIN;
	static int32_t x618 = INT32_MIN;
	static uint32_t x619 = 10416846U;
	uint16_t x620 = 1U;
	volatile int32_t t136 = -413456138;

    t136 = (x617^(x618!=(x619+x620)));

    if (t136 != -127) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x622 = -1;
	volatile int32_t x624 = INT32_MIN;

    t137 = (x621^(x622!=(x623+x624)));

    if (t137 != 11921749105968570LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x625 = 6U;
	volatile int32_t t138 = 354611;

    t138 = (x625^(x626!=(x627+x628)));

    if (t138 != 7) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x629 = INT32_MAX;
	int32_t x630 = INT32_MAX;
	int64_t x632 = 515075810LL;
	volatile int32_t t139 = 592300;

    t139 = (x629^(x630!=(x631+x632)));

    if (t139 != 2147483646) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x633 = 5LL;
	static int64_t x634 = -1LL;
	int32_t x635 = -1;
	int8_t x636 = INT8_MIN;
	static volatile int64_t t140 = -66049487344724LL;

    t140 = (x633^(x634!=(x635+x636)));

    if (t140 != 4LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x641 = 6LL;
	volatile int32_t x643 = 99109622;
	volatile int64_t t141 = -274725442582031LL;

    t141 = (x641^(x642!=(x643+x644)));

    if (t141 != 7LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x645 = 51;
	int32_t x647 = 5;
	volatile int32_t t142 = 82;

    t142 = (x645^(x646!=(x647+x648)));

    if (t142 != 50) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x649 = INT32_MIN;
	uint16_t x650 = 6U;
	int16_t x652 = -1;
	int32_t t143 = 11016467;

    t143 = (x649^(x650!=(x651+x652)));

    if (t143 != -2147483647) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x653 = INT32_MIN;
	volatile int16_t x654 = INT16_MIN;
	int64_t x655 = INT64_MIN;
	uint64_t x656 = 687024603463695LLU;
	volatile int32_t t144 = 0;

    t144 = (x653^(x654!=(x655+x656)));

    if (t144 != -2147483647) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x657 = -30;
	int16_t x658 = INT16_MAX;
	static int8_t x659 = -60;
	static int8_t x660 = -1;
	static int32_t t145 = 2119949;

    t145 = (x657^(x658!=(x659+x660)));

    if (t145 != -29) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x661 = INT64_MIN;
	uint32_t x662 = 762126U;
	int32_t x663 = 299063896;
	static int64_t t146 = -8248945447909LL;

    t146 = (x661^(x662!=(x663+x664)));

    if (t146 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x665 = -1;
	uint8_t x668 = 3U;

    t147 = (x665^(x666!=(x667+x668)));

    if (t147 != -2) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x669 = UINT8_MAX;
	static int16_t x670 = INT16_MAX;
	uint32_t x671 = 744U;
	int32_t t148 = -2344;

    t148 = (x669^(x670!=(x671+x672)));

    if (t148 != 254) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x673 = INT32_MAX;
	static volatile int16_t x674 = 3;
	static uint64_t x675 = 129354373LLU;

    t149 = (x673^(x674!=(x675+x676)));

    if (t149 != 2147483646) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x678 = UINT8_MAX;
	uint64_t x679 = UINT64_MAX;
	int8_t x680 = 0;
	volatile int32_t t150 = -2597377;

    t150 = (x677^(x678!=(x679+x680)));

    if (t150 != 2147483646) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x681 = 16553U;
	volatile int64_t x682 = -1LL;
	volatile int32_t x683 = INT32_MIN;
	int64_t x684 = -1LL;
	uint32_t t151 = 1454U;

    t151 = (x681^(x682!=(x683+x684)));

    if (t151 != 16552U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x689 = 13;
	uint32_t x690 = 155336888U;
	int8_t x692 = INT8_MIN;
	int32_t t152 = 29653;

    t152 = (x689^(x690!=(x691+x692)));

    if (t152 != 12) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x693 = -3085386LL;
	static int16_t x696 = INT16_MAX;
	int64_t t153 = 5963235748LL;

    t153 = (x693^(x694!=(x695+x696)));

    if (t153 != -3085385LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x697 = UINT8_MAX;
	static uint32_t x698 = 80U;
	int8_t x699 = INT8_MIN;
	uint8_t x700 = UINT8_MAX;
	int32_t t154 = -394;

    t154 = (x697^(x698!=(x699+x700)));

    if (t154 != 254) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x705 = -1;
	uint16_t x706 = 9391U;
	static volatile uint16_t x708 = 763U;
	static volatile int32_t t155 = -5633080;

    t155 = (x705^(x706!=(x707+x708)));

    if (t155 != -2) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x709 = 1320437;
	uint64_t x711 = 3353422288163809LLU;
	int64_t x712 = -1LL;
	volatile int32_t t156 = 11014;

    t156 = (x709^(x710!=(x711+x712)));

    if (t156 != 1320436) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x713 = -21719;
	uint16_t x714 = UINT16_MAX;
	uint32_t x715 = UINT32_MAX;
	static volatile int32_t t157 = -7618;

    t157 = (x713^(x714!=(x715+x716)));

    if (t157 != -21720) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x717 = 97480582LLU;
	volatile uint32_t x718 = 957U;
	uint16_t x719 = UINT16_MAX;
	int8_t x720 = INT8_MAX;
	uint64_t t158 = 18875LLU;

    t158 = (x717^(x718!=(x719+x720)));

    if (t158 != 97480583LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x721 = INT32_MIN;
	volatile uint32_t x722 = 29U;
	int32_t x723 = -64876055;
	volatile int64_t x724 = 32129775823LL;
	volatile int32_t t159 = -54073;

    t159 = (x721^(x722!=(x723+x724)));

    if (t159 != -2147483647) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x725 = UINT16_MAX;
	int16_t x726 = INT16_MAX;
	volatile int32_t x727 = INT32_MIN;
	volatile uint8_t x728 = UINT8_MAX;
	int32_t t160 = -117;

    t160 = (x725^(x726!=(x727+x728)));

    if (t160 != 65534) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x729 = -1LL;
	static volatile uint16_t x730 = 3U;
	volatile uint8_t x731 = 4U;
	uint8_t x732 = 17U;

    t161 = (x729^(x730!=(x731+x732)));

    if (t161 != -2LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x733 = 3U;
	uint32_t x734 = 7324256U;
	static volatile int32_t x735 = INT32_MAX;
	static int32_t x736 = INT32_MIN;

    t162 = (x733^(x734!=(x735+x736)));

    if (t162 != 2) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x742 = INT8_MIN;
	int16_t x743 = INT16_MIN;
	int16_t x744 = -1;

    t163 = (x741^(x742!=(x743+x744)));

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x746 = UINT16_MAX;
	uint32_t x747 = UINT32_MAX;
	uint64_t x748 = UINT64_MAX;
	volatile int32_t t164 = 34293852;

    t164 = (x745^(x746!=(x747+x748)));

    if (t164 != 122) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x750 = INT64_MIN;
	static uint8_t x751 = 40U;
	int32_t x752 = INT32_MIN;
	int32_t t165 = 6;

    t165 = (x749^(x750!=(x751+x752)));

    if (t165 != -2) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x753 = INT64_MIN;
	uint16_t x754 = UINT16_MAX;
	volatile uint64_t x755 = 30231993442LLU;
	volatile int8_t x756 = INT8_MAX;
	static volatile int64_t t166 = 2LL;

    t166 = (x753^(x754!=(x755+x756)));

    if (t166 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x757 = -1LL;
	volatile int64_t x758 = -1LL;
	static uint32_t x759 = 98080U;
	int64_t x760 = -1LL;
	volatile int64_t t167 = 50LL;

    t167 = (x757^(x758!=(x759+x760)));

    if (t167 != -2LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x762 = -15;
	uint8_t x763 = 30U;
	volatile int64_t x764 = INT64_MIN;
	static int32_t t168 = 375525;

    t168 = (x761^(x762!=(x763+x764)));

    if (t168 != -184593) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x767 = 2759790U;
	int32_t t169 = 60876;

    t169 = (x765^(x766!=(x767+x768)));

    if (t169 != 65534) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x769 = INT8_MIN;
	int32_t x771 = 3165458;
	int64_t x772 = -22136072463LL;
	volatile int32_t t170 = -6;

    t170 = (x769^(x770!=(x771+x772)));

    if (t170 != -127) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x777 = 2LLU;
	uint8_t x778 = UINT8_MAX;
	volatile int16_t x779 = 37;
	int64_t x780 = INT64_MIN;

    t171 = (x777^(x778!=(x779+x780)));

    if (t171 != 3LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x781 = INT64_MIN;
	int64_t x783 = -1LL;
	volatile uint16_t x784 = 7443U;
	int64_t t172 = -15826329LL;

    t172 = (x781^(x782!=(x783+x784)));

    if (t172 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x785 = 3U;
	uint32_t x787 = 0U;
	int32_t t173 = -3429359;

    t173 = (x785^(x786!=(x787+x788)));

    if (t173 != 2) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x789 = 17U;
	int8_t x790 = INT8_MIN;
	static uint8_t x791 = UINT8_MAX;
	int16_t x792 = INT16_MIN;
	static int32_t t174 = -26872;

    t174 = (x789^(x790!=(x791+x792)));

    if (t174 != 16) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x793 = INT32_MIN;
	uint8_t x794 = 30U;
	int8_t x796 = -1;
	int32_t t175 = 103;

    t175 = (x793^(x794!=(x795+x796)));

    if (t175 != -2147483647) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x801 = 14;
	int32_t t176 = -46;

    t176 = (x801^(x802!=(x803+x804)));

    if (t176 != 15) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x810 = 1415U;
	static int16_t x811 = -51;
	uint64_t x812 = UINT64_MAX;
	volatile uint32_t t177 = 9U;

    t177 = (x809^(x810!=(x811+x812)));

    if (t177 != 69459U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x817 = 119686593952LLU;
	uint32_t x818 = 11U;
	int16_t x819 = -125;
	int32_t x820 = INT32_MAX;

    t178 = (x817^(x818!=(x819+x820)));

    if (t178 != 119686593953LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x821 = INT16_MIN;
	int16_t x822 = INT16_MIN;
	volatile uint64_t x823 = 90380LLU;
	uint32_t x824 = UINT32_MAX;
	int32_t t179 = -4813385;

    t179 = (x821^(x822!=(x823+x824)));

    if (t179 != -32767) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x825 = INT32_MIN;
	uint32_t x826 = 27910520U;
	int64_t x827 = 705548759863771709LL;
	volatile int16_t x828 = -1;

    t180 = (x825^(x826!=(x827+x828)));

    if (t180 != -2147483647) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x829 = INT32_MIN;
	uint64_t x830 = 7827638765511000482LLU;
	uint32_t x831 = 93U;
	static int32_t t181 = 15560;

    t181 = (x829^(x830!=(x831+x832)));

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x833 = 3259;
	uint8_t x834 = 1U;
	volatile uint16_t x835 = 3U;
	int64_t x836 = INT64_MIN;

    t182 = (x833^(x834!=(x835+x836)));

    if (t182 != 3258) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x837 = -1LL;
	int32_t x838 = -89725429;
	uint64_t x839 = UINT64_MAX;
	int64_t x840 = -655LL;
	int64_t t183 = 656622936240051029LL;

    t183 = (x837^(x838!=(x839+x840)));

    if (t183 != -2LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x841 = -8;
	uint32_t x842 = 32104U;
	uint64_t x843 = 386966835944796517LLU;
	int8_t x844 = INT8_MIN;
	static volatile int32_t t184 = -22635;

    t184 = (x841^(x842!=(x843+x844)));

    if (t184 != -7) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x845 = UINT64_MAX;
	static int32_t x846 = -598798;
	int64_t x847 = INT64_MAX;
	static volatile uint64_t x848 = 23442LLU;
	volatile uint64_t t185 = 334831994840LLU;

    t185 = (x845^(x846!=(x847+x848)));

    if (t185 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x853 = -1;
	uint64_t x854 = 9528122054LLU;
	int32_t x856 = -13031969;

    t186 = (x853^(x854!=(x855+x856)));

    if (t186 != -2) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x862 = 2U;
	static int16_t x864 = INT16_MAX;

    t187 = (x861^(x862!=(x863+x864)));

    if (t187 != -2903817) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x865 = INT8_MIN;
	volatile int32_t x866 = INT32_MIN;
	uint8_t x867 = UINT8_MAX;
	static volatile uint16_t x868 = 70U;

    t188 = (x865^(x866!=(x867+x868)));

    if (t188 != -127) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x870 = -2031913446990005LL;
	int64_t x871 = INT64_MIN;
	volatile int32_t t189 = -1209196;

    t189 = (x869^(x870!=(x871+x872)));

    if (t189 != 126) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x877 = 2153583178042LLU;
	static uint8_t x878 = UINT8_MAX;
	volatile int16_t x880 = INT16_MIN;

    t190 = (x877^(x878!=(x879+x880)));

    if (t190 != 2153583178043LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x881 = INT64_MAX;
	static int16_t x882 = INT16_MIN;
	uint16_t x883 = UINT16_MAX;
	int8_t x884 = -47;
	int64_t t191 = -2LL;

    t191 = (x881^(x882!=(x883+x884)));

    if (t191 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x885 = 33;
	static uint32_t x886 = UINT32_MAX;
	uint64_t x887 = UINT64_MAX;
	static int32_t t192 = 0;

    t192 = (x885^(x886!=(x887+x888)));

    if (t192 != 32) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x889 = UINT32_MAX;
	uint32_t x892 = UINT32_MAX;
	static uint32_t t193 = 19785938U;

    t193 = (x889^(x890!=(x891+x892)));

    if (t193 != 4294967294U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x893 = 120U;
	static int32_t x894 = 51;
	uint64_t x895 = 597599225LLU;
	int16_t x896 = INT16_MIN;

    t194 = (x893^(x894!=(x895+x896)));

    if (t194 != 121U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x897 = -6188;
	int16_t x898 = INT16_MIN;
	int64_t x899 = -660341784241539585LL;
	int64_t x900 = INT64_MAX;

    t195 = (x897^(x898!=(x899+x900)));

    if (t195 != -6187) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x905 = 6U;
	int64_t x906 = INT64_MAX;
	int8_t x908 = 1;
	volatile int32_t t196 = 2127156;

    t196 = (x905^(x906!=(x907+x908)));

    if (t196 != 7) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x909 = -10483101399LL;
	int16_t x910 = INT16_MAX;
	uint8_t x911 = UINT8_MAX;
	int8_t x912 = INT8_MIN;
	int64_t t197 = -4024674LL;

    t197 = (x909^(x910!=(x911+x912)));

    if (t197 != -10483101400LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x913 = INT32_MIN;
	uint64_t x915 = UINT64_MAX;
	uint32_t x916 = 339750U;
	volatile int32_t t198 = 6991735;

    t198 = (x913^(x914!=(x915+x916)));

    if (t198 != -2147483647) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x917 = 4580445U;
	static int8_t x918 = INT8_MAX;
	uint16_t x919 = UINT16_MAX;
	uint64_t x920 = 65595504693LLU;
	volatile uint32_t t199 = 2184496U;

    t199 = (x917^(x918!=(x919+x920)));

    if (t199 != 4580444U) { NG(); } else { ; }
	
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

