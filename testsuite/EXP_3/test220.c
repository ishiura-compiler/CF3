
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

uint32_t x9 = UINT32_MAX;
static int8_t x15 = INT8_MAX;
int16_t x16 = 2;
volatile uint32_t x17 = UINT32_MAX;
int8_t x27 = 61;
static int32_t x34 = INT32_MAX;
int8_t x35 = -3;
int32_t x37 = INT32_MAX;
static uint16_t x38 = UINT16_MAX;
static int8_t x43 = -15;
int32_t x46 = INT32_MAX;
int8_t x48 = INT8_MAX;
int64_t x52 = INT64_MAX;
int64_t x54 = -839028LL;
uint64_t x58 = 1070290044368092773LLU;
int16_t x68 = -5432;
int32_t t13 = 501;
static uint16_t x70 = 110U;
static int32_t t17 = 94;
int16_t x94 = INT16_MAX;
uint64_t x97 = 328659026219LLU;
uint16_t x101 = 3173U;
volatile int8_t x103 = INT8_MIN;
int32_t t22 = -2094384;
volatile int32_t t23 = -62493095;
volatile int16_t x130 = 4055;
static int32_t t26 = -157735344;
int16_t x139 = -1;
static int64_t x141 = 8LL;
volatile int32_t t28 = -916061;
int32_t x151 = INT32_MIN;
volatile int32_t t31 = 946006;
volatile uint16_t x157 = UINT16_MAX;
int16_t x163 = INT16_MAX;
int8_t x169 = -1;
int16_t x170 = INT16_MIN;
int8_t x173 = 5;
uint32_t x174 = UINT32_MAX;
uint64_t x175 = 42844440172LLU;
uint64_t x181 = 3LLU;
int32_t t37 = 59647;
static uint32_t x186 = UINT32_MAX;
volatile uint8_t x191 = UINT8_MAX;
int32_t x198 = -1;
int32_t x204 = -1;
int16_t x205 = -1;
int64_t x206 = -3981154LL;
static int16_t x217 = -1;
volatile int32_t t47 = 1018671;
static uint16_t x225 = 1U;
static volatile uint16_t x228 = 20642U;
volatile int32_t t48 = 409;
volatile uint16_t x229 = 480U;
static int64_t x230 = INT64_MAX;
volatile int8_t x234 = INT8_MIN;
static int8_t x236 = INT8_MAX;
static uint64_t x246 = 14LLU;
int16_t x254 = INT16_MIN;
static int64_t x255 = -1LL;
static uint8_t x256 = 38U;
volatile int16_t x258 = INT16_MAX;
uint64_t x265 = 88453014549029LLU;
static int64_t x266 = INT64_MIN;
static uint8_t x278 = UINT8_MAX;
uint16_t x285 = 9U;
static uint8_t x291 = UINT8_MAX;
int32_t x306 = -454725411;
static int32_t x308 = 0;
volatile int32_t t59 = 14192947;
int8_t x325 = INT8_MIN;
int64_t x328 = 209LL;
static volatile int32_t t62 = -1844;
int8_t x333 = INT8_MIN;
volatile int64_t x334 = -3LL;
int8_t x335 = 3;
int64_t x359 = -4777744LL;
int16_t x369 = -1;
static int32_t x371 = INT32_MIN;
static int32_t t71 = -7214;
volatile int32_t x381 = 133837373;
int32_t t73 = -50;
int16_t x410 = INT16_MAX;
int32_t x422 = INT32_MIN;
uint32_t x427 = UINT32_MAX;
int32_t t82 = -115705234;
int8_t x440 = -53;
volatile int32_t t83 = 2945;
static uint64_t x441 = UINT64_MAX;
int32_t x443 = -54400;
static volatile int64_t x446 = -186484052901106571LL;
static int32_t t85 = 4;
uint32_t x454 = 666046838U;
static int64_t x468 = INT64_MIN;
static volatile int32_t t88 = -71;
int8_t x472 = -1;
int32_t x482 = INT32_MIN;
int32_t t91 = 0;
int64_t x499 = -95642LL;
volatile int32_t x500 = INT32_MAX;
uint32_t x506 = UINT32_MAX;
int8_t x511 = -1;
uint32_t x533 = 166U;
uint64_t x534 = UINT64_MAX;
int8_t x547 = 1;
int64_t x550 = INT64_MAX;
volatile int32_t t102 = 662;
int32_t t104 = -8689;
int16_t x569 = INT16_MAX;
int16_t x570 = INT16_MAX;
static int32_t x581 = INT32_MAX;
uint64_t x603 = 29900603LLU;
int64_t x614 = INT64_MIN;
int32_t x615 = INT32_MIN;
volatile int64_t x619 = -1LL;
int32_t x624 = 128152;
volatile int32_t t114 = 895692857;
uint32_t x636 = 58U;
uint8_t x637 = UINT8_MAX;
uint16_t x638 = UINT16_MAX;
uint16_t x643 = 88U;
volatile int32_t t118 = -2622;
static int64_t x652 = -2273LL;
static int32_t t121 = -14117348;
uint32_t x660 = UINT32_MAX;
static uint32_t x661 = 250728U;
static int32_t x664 = 0;
uint16_t x665 = 34U;
volatile int16_t x673 = INT16_MIN;
static uint8_t x675 = UINT8_MAX;
int8_t x676 = INT8_MIN;
volatile int64_t x680 = -204940419202606662LL;
static volatile int8_t x681 = INT8_MIN;
uint64_t x682 = 563728518670LLU;
uint32_t x684 = 1U;
uint8_t x695 = 9U;
uint8_t x698 = UINT8_MAX;
int32_t x701 = INT32_MAX;
int32_t x706 = INT32_MIN;
uint8_t x710 = UINT8_MAX;
volatile uint64_t x712 = UINT64_MAX;
static volatile uint64_t x714 = UINT64_MAX;
int16_t x715 = -1;
uint16_t x716 = 7U;
static int32_t x719 = INT32_MAX;
static uint8_t x727 = UINT8_MAX;
uint32_t x728 = 1584U;
static int8_t x729 = -1;
volatile uint32_t x731 = 43U;
static int8_t x733 = 3;
int32_t t139 = -1;
uint16_t x746 = 1U;
int32_t t142 = 1;
volatile int64_t x756 = -1LL;
volatile uint32_t x757 = 101U;
volatile uint16_t x758 = UINT16_MAX;
static int8_t x782 = 10;
int8_t x785 = -3;
int32_t x787 = 1;
int32_t x792 = -26342;
volatile uint8_t x799 = UINT8_MAX;
int64_t x804 = -1LL;
int32_t t154 = -1;
int8_t x822 = -1;
static int16_t x825 = INT16_MIN;
volatile int32_t t158 = -46176;
int8_t x833 = INT8_MAX;
volatile uint8_t x854 = 5U;
volatile int32_t t162 = 8842;
static int32_t x858 = -970137692;
int32_t x860 = INT32_MIN;
uint64_t x862 = 1499LLU;
volatile int32_t t164 = 23375;
volatile uint32_t x866 = UINT32_MAX;
int32_t x876 = -1;
uint64_t x894 = 10704093025LLU;
int8_t x897 = 9;
int32_t t170 = 117722;
int8_t x917 = 0;
int16_t x934 = INT16_MIN;
static int8_t x940 = INT8_MIN;
int32_t t178 = -27;
int8_t x948 = INT8_MIN;
static volatile int32_t t179 = -1967;
static volatile int64_t x949 = -1LL;
volatile uint64_t x968 = 342530774LLU;
int32_t t182 = 15368;
volatile uint64_t x973 = 0LLU;
int32_t x981 = -1;
int32_t t184 = 458129184;
volatile int64_t x986 = -2646760539486933LL;
volatile int32_t t185 = 96615666;
uint64_t x990 = UINT64_MAX;
int8_t x992 = -1;
int32_t x997 = INT32_MIN;
uint32_t x1010 = 8042786U;
uint64_t x1018 = 2239223930LLU;
int32_t t192 = -35493;
uint64_t x1034 = 33677LLU;
uint32_t x1036 = 10423338U;
volatile int32_t t193 = 418960;
int16_t x1038 = 6;
int8_t x1041 = -1;
static int16_t x1046 = 144;
int16_t x1047 = 429;
static int64_t x1054 = INT64_MIN;
uint64_t x1056 = 1183572LLU;


void f0(void) {
    	volatile int8_t x5 = INT8_MIN;
	int16_t x6 = 6219;
	static volatile int64_t x7 = -1LL;
	int32_t x8 = INT32_MAX;
	volatile int32_t t0 = -1766555;

    t0 = ((x5-x6)<=(x7-x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x10 = 5938618465LL;
	int64_t x11 = INT64_MIN;
	int8_t x12 = -58;
	int32_t t1 = 597;

    t1 = ((x9-x10)<=(x11-x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x13 = -1;
	volatile uint16_t x14 = 19765U;
	int32_t t2 = -849520;

    t2 = ((x13-x14)<=(x15-x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x18 = 1398468LLU;
	uint16_t x19 = 16161U;
	uint64_t x20 = 1LLU;
	volatile int32_t t3 = -160270;

    t3 = ((x17-x18)<=(x19-x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x25 = UINT32_MAX;
	int32_t x26 = -589603;
	static volatile int64_t x28 = -1LL;
	static int32_t t4 = 51623;

    t4 = ((x25-x26)<=(x27-x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x33 = 381;
	int8_t x36 = -1;
	int32_t t5 = -98;

    t5 = ((x33-x34)<=(x35-x36));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x39 = INT16_MIN;
	volatile int64_t x40 = INT64_MIN;
	volatile int32_t t6 = 1236;

    t6 = ((x37-x38)<=(x39-x40));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x41 = 37029742LLU;
	int32_t x42 = INT32_MIN;
	int32_t x44 = -1;
	static volatile int32_t t7 = 101838;

    t7 = ((x41-x42)<=(x43-x44));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x45 = UINT8_MAX;
	uint32_t x47 = UINT32_MAX;
	int32_t t8 = 11457;

    t8 = ((x45-x46)<=(x47-x48));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x49 = 22U;
	int32_t x50 = INT32_MIN;
	static volatile uint8_t x51 = 1U;
	volatile int32_t t9 = -1;

    t9 = ((x49-x50)<=(x51-x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x53 = INT64_MIN;
	int16_t x55 = INT16_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t10 = -194166821;

    t10 = ((x53-x54)<=(x55-x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x57 = INT64_MAX;
	int8_t x59 = 0;
	volatile int8_t x60 = -11;
	int32_t t11 = -465958;

    t11 = ((x57-x58)<=(x59-x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = -19LL;
	static int8_t x62 = -1;
	int32_t x63 = -1;
	int64_t x64 = 2948142368879LL;
	volatile int32_t t12 = 2615991;

    t12 = ((x61-x62)<=(x63-x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x65 = UINT8_MAX;
	int8_t x66 = INT8_MIN;
	static int64_t x67 = -56646489961976670LL;

    t13 = ((x65-x66)<=(x67-x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x69 = 0U;
	uint64_t x71 = 54603LLU;
	int8_t x72 = INT8_MIN;
	int32_t t14 = -249;

    t14 = ((x69-x70)<=(x71-x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x73 = INT16_MAX;
	int64_t x74 = INT64_MAX;
	int8_t x75 = -1;
	int8_t x76 = INT8_MIN;
	volatile int32_t t15 = -2224671;

    t15 = ((x73-x74)<=(x75-x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x81 = INT64_MAX;
	static volatile uint16_t x82 = 30U;
	static volatile int16_t x83 = INT16_MIN;
	uint32_t x84 = 508U;
	static int32_t t16 = -2238603;

    t16 = ((x81-x82)<=(x83-x84));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x85 = 5;
	uint8_t x86 = 5U;
	int8_t x87 = 0;
	int64_t x88 = -1LL;

    t17 = ((x85-x86)<=(x87-x88));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x93 = 7LLU;
	int16_t x95 = INT16_MIN;
	int8_t x96 = -3;
	volatile int32_t t18 = 0;

    t18 = ((x93-x94)<=(x95-x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x98 = 11U;
	int8_t x99 = INT8_MIN;
	uint16_t x100 = 1U;
	volatile int32_t t19 = -650114;

    t19 = ((x97-x98)<=(x99-x100));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x102 = UINT32_MAX;
	uint64_t x104 = 688135894LLU;
	static volatile int32_t t20 = 2;

    t20 = ((x101-x102)<=(x103-x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x105 = -13127;
	int16_t x106 = INT16_MAX;
	volatile int16_t x107 = 247;
	uint8_t x108 = 0U;
	int32_t t21 = 99;

    t21 = ((x105-x106)<=(x107-x108));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = INT16_MIN;
	volatile uint8_t x110 = 109U;
	uint8_t x111 = 0U;
	int8_t x112 = 26;

    t22 = ((x109-x110)<=(x111-x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = 22;
	volatile int16_t x114 = INT16_MIN;
	int8_t x115 = INT8_MIN;
	static int8_t x116 = INT8_MAX;

    t23 = ((x113-x114)<=(x115-x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = -1;
	volatile int16_t x118 = INT16_MIN;
	static uint16_t x119 = 17632U;
	volatile uint8_t x120 = 0U;
	volatile int32_t t24 = -1950;

    t24 = ((x117-x118)<=(x119-x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x121 = -146;
	int8_t x122 = 0;
	int16_t x123 = INT16_MAX;
	volatile uint32_t x124 = 3U;
	volatile int32_t t25 = -3787125;

    t25 = ((x121-x122)<=(x123-x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x129 = 1U;
	int8_t x131 = -11;
	volatile uint64_t x132 = 246427LLU;

    t26 = ((x129-x130)<=(x131-x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x137 = 1;
	static volatile uint32_t x138 = 667141542U;
	int32_t x140 = INT32_MIN;
	int32_t t27 = 4;

    t27 = ((x137-x138)<=(x139-x140));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x142 = INT8_MIN;
	volatile int64_t x143 = INT64_MAX;
	uint32_t x144 = UINT32_MAX;

    t28 = ((x141-x142)<=(x143-x144));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x145 = INT8_MIN;
	int8_t x146 = -1;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MIN;
	volatile int32_t t29 = -1294073;

    t29 = ((x145-x146)<=(x147-x148));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x149 = -30;
	uint32_t x150 = 0U;
	int64_t x152 = INT64_MIN;
	static int32_t t30 = 1886375;

    t30 = ((x149-x150)<=(x151-x152));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x153 = 253;
	uint16_t x154 = 32U;
	int8_t x155 = INT8_MIN;
	static int64_t x156 = -5746349402LL;

    t31 = ((x153-x154)<=(x155-x156));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x158 = 0U;
	volatile uint8_t x159 = 1U;
	static volatile int16_t x160 = INT16_MIN;
	int32_t t32 = 1;

    t32 = ((x157-x158)<=(x159-x160));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x161 = INT8_MIN;
	volatile uint32_t x162 = 1U;
	uint16_t x164 = 54U;
	volatile int32_t t33 = -1992681;

    t33 = ((x161-x162)<=(x163-x164));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x171 = INT64_MAX;
	static int32_t x172 = 178443;
	int32_t t34 = -14734815;

    t34 = ((x169-x170)<=(x171-x172));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x176 = -59;
	volatile int32_t t35 = 374;

    t35 = ((x173-x174)<=(x175-x176));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x177 = UINT32_MAX;
	static int32_t x178 = INT32_MAX;
	uint64_t x179 = 16433228150620896LLU;
	uint32_t x180 = 133161655U;
	volatile int32_t t36 = 967;

    t36 = ((x177-x178)<=(x179-x180));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x182 = INT64_MAX;
	int32_t x183 = -54695340;
	int32_t x184 = INT32_MIN;

    t37 = ((x181-x182)<=(x183-x184));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x185 = -4;
	volatile uint32_t x187 = 39U;
	uint64_t x188 = UINT64_MAX;
	int32_t t38 = -36388;

    t38 = ((x185-x186)<=(x187-x188));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x189 = INT8_MAX;
	static int8_t x190 = INT8_MIN;
	int8_t x192 = INT8_MIN;
	int32_t t39 = -13050;

    t39 = ((x189-x190)<=(x191-x192));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x193 = -1;
	static int8_t x194 = INT8_MAX;
	int64_t x195 = -339754268762154LL;
	int32_t x196 = INT32_MAX;
	volatile int32_t t40 = 203493264;

    t40 = ((x193-x194)<=(x195-x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x197 = INT32_MIN;
	int64_t x199 = INT64_MAX;
	int8_t x200 = INT8_MAX;
	volatile int32_t t41 = -1985454;

    t41 = ((x197-x198)<=(x199-x200));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x201 = 6550U;
	uint16_t x202 = 940U;
	uint64_t x203 = 120959265489LLU;
	static int32_t t42 = -66762757;

    t42 = ((x201-x202)<=(x203-x204));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x207 = 0;
	uint16_t x208 = 118U;
	int32_t t43 = -169841664;

    t43 = ((x205-x206)<=(x207-x208));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x209 = INT16_MIN;
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MAX;
	int64_t x212 = 386LL;
	int32_t t44 = 209;

    t44 = ((x209-x210)<=(x211-x212));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x213 = 743U;
	int64_t x214 = 465746032430LL;
	int64_t x215 = -148683LL;
	int16_t x216 = INT16_MIN;
	volatile int32_t t45 = -158;

    t45 = ((x213-x214)<=(x215-x216));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x218 = UINT64_MAX;
	uint16_t x219 = UINT16_MAX;
	int8_t x220 = -1;
	volatile int32_t t46 = 1692613;

    t46 = ((x217-x218)<=(x219-x220));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x221 = 2699482899543991LLU;
	volatile int32_t x222 = -1;
	int64_t x223 = INT64_MIN;
	int16_t x224 = -8;

    t47 = ((x221-x222)<=(x223-x224));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x226 = INT16_MAX;
	volatile int8_t x227 = -1;

    t48 = ((x225-x226)<=(x227-x228));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x231 = -1LL;
	int16_t x232 = INT16_MAX;
	int32_t t49 = 0;

    t49 = ((x229-x230)<=(x231-x232));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x233 = UINT32_MAX;
	static uint32_t x235 = 25703318U;
	static volatile int32_t t50 = 1;

    t50 = ((x233-x234)<=(x235-x236));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x245 = 1790252947LLU;
	uint32_t x247 = 65931196U;
	uint64_t x248 = 1581139711320477LLU;
	int32_t t51 = -1758;

    t51 = ((x245-x246)<=(x247-x248));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x253 = 1U;
	volatile int32_t t52 = -111003;

    t52 = ((x253-x254)<=(x255-x256));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x257 = 9U;
	static int16_t x259 = -1;
	int32_t x260 = -1;
	int32_t t53 = -1;

    t53 = ((x257-x258)<=(x259-x260));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x267 = -7;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t54 = 9657617;

    t54 = ((x265-x266)<=(x267-x268));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x277 = 1;
	static int8_t x279 = -5;
	int8_t x280 = INT8_MIN;
	volatile int32_t t55 = -2919;

    t55 = ((x277-x278)<=(x279-x280));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x286 = -6567696027392LL;
	static int8_t x287 = INT8_MIN;
	volatile int8_t x288 = 28;
	static int32_t t56 = 400;

    t56 = ((x285-x286)<=(x287-x288));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x289 = 30;
	int32_t x290 = 100;
	static int8_t x292 = INT8_MAX;
	static int32_t t57 = -20972216;

    t57 = ((x289-x290)<=(x291-x292));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x301 = UINT32_MAX;
	int32_t x302 = INT32_MAX;
	static int16_t x303 = -281;
	volatile int8_t x304 = -1;
	int32_t t58 = -8042724;

    t58 = ((x301-x302)<=(x303-x304));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x305 = 22;
	int64_t x307 = 1LL;

    t59 = ((x305-x306)<=(x307-x308));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x309 = UINT64_MAX;
	static int32_t x310 = 3987;
	static uint32_t x311 = 2U;
	volatile uint8_t x312 = 28U;
	volatile int32_t t60 = 11054098;

    t60 = ((x309-x310)<=(x311-x312));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x317 = 564U;
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = -3;
	static uint8_t x320 = 15U;
	int32_t t61 = -7590823;

    t61 = ((x317-x318)<=(x319-x320));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x326 = 195102212687370LLU;
	uint64_t x327 = 114700755109756LLU;

    t62 = ((x325-x326)<=(x327-x328));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x336 = 9U;
	int32_t t63 = 3185;

    t63 = ((x333-x334)<=(x335-x336));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x337 = 4728U;
	volatile uint8_t x338 = 38U;
	uint8_t x339 = 33U;
	int16_t x340 = 25;
	int32_t t64 = 100;

    t64 = ((x337-x338)<=(x339-x340));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x341 = -1LL;
	int8_t x342 = INT8_MIN;
	volatile uint64_t x343 = 13017100LLU;
	static int64_t x344 = INT64_MIN;
	static volatile int32_t t65 = 237;

    t65 = ((x341-x342)<=(x343-x344));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x357 = UINT32_MAX;
	int32_t x358 = INT32_MIN;
	static uint64_t x360 = UINT64_MAX;
	int32_t t66 = 103473;

    t66 = ((x357-x358)<=(x359-x360));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x361 = -5;
	int64_t x362 = INT64_MIN;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = 5LLU;
	int32_t t67 = -775127;

    t67 = ((x361-x362)<=(x363-x364));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x365 = INT16_MIN;
	int64_t x366 = -1LL;
	int32_t x367 = INT32_MIN;
	static int32_t x368 = -548;
	static volatile int32_t t68 = 2;

    t68 = ((x365-x366)<=(x367-x368));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x370 = INT8_MIN;
	int64_t x372 = -1LL;
	volatile int32_t t69 = 8981;

    t69 = ((x369-x370)<=(x371-x372));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x373 = -1LL;
	int32_t x374 = INT32_MIN;
	uint32_t x375 = 1254626593U;
	int16_t x376 = 5043;
	int32_t t70 = 249091;

    t70 = ((x373-x374)<=(x375-x376));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x377 = INT16_MIN;
	static volatile int16_t x378 = INT16_MIN;
	uint16_t x379 = 3U;
	int16_t x380 = INT16_MAX;

    t71 = ((x377-x378)<=(x379-x380));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x382 = INT16_MIN;
	static int64_t x383 = 705032965960LL;
	int32_t x384 = -45968688;
	int32_t t72 = 82;

    t72 = ((x381-x382)<=(x383-x384));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x385 = 9LLU;
	int8_t x386 = -21;
	int64_t x387 = INT64_MAX;
	volatile int8_t x388 = 0;

    t73 = ((x385-x386)<=(x387-x388));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x389 = 914U;
	int64_t x390 = INT64_MAX;
	uint8_t x391 = 8U;
	int32_t x392 = INT32_MAX;
	volatile int32_t t74 = 378;

    t74 = ((x389-x390)<=(x391-x392));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x393 = 1;
	uint64_t x394 = 131225LLU;
	volatile uint32_t x395 = UINT32_MAX;
	uint32_t x396 = UINT32_MAX;
	int32_t t75 = 3411;

    t75 = ((x393-x394)<=(x395-x396));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x397 = -1LL;
	int32_t x398 = -1;
	uint16_t x399 = 12U;
	static int32_t x400 = INT32_MAX;
	volatile int32_t t76 = 183367484;

    t76 = ((x397-x398)<=(x399-x400));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x405 = -1361;
	static volatile int16_t x406 = INT16_MAX;
	uint64_t x407 = 914LLU;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t77 = 1561;

    t77 = ((x405-x406)<=(x407-x408));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x409 = 1023LLU;
	int16_t x411 = -1;
	static uint64_t x412 = 503440LLU;
	volatile int32_t t78 = -181684;

    t78 = ((x409-x410)<=(x411-x412));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x413 = 0U;
	int32_t x414 = INT32_MIN;
	static uint16_t x415 = 13154U;
	int32_t x416 = 73168;
	volatile int32_t t79 = -774322;

    t79 = ((x413-x414)<=(x415-x416));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x421 = INT64_MIN;
	static uint16_t x423 = UINT16_MAX;
	uint8_t x424 = 27U;
	volatile int32_t t80 = 619945;

    t80 = ((x421-x422)<=(x423-x424));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x425 = 7899479133264LLU;
	static int64_t x426 = 21LL;
	uint64_t x428 = 1837LLU;
	static int32_t t81 = 31245266;

    t81 = ((x425-x426)<=(x427-x428));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x433 = UINT64_MAX;
	uint16_t x434 = 17U;
	int64_t x435 = -38306912LL;
	uint64_t x436 = UINT64_MAX;

    t82 = ((x433-x434)<=(x435-x436));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x437 = 7U;
	volatile uint8_t x438 = UINT8_MAX;
	int16_t x439 = -1;

    t83 = ((x437-x438)<=(x439-x440));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x442 = INT16_MIN;
	static volatile uint32_t x444 = UINT32_MAX;
	int32_t t84 = -931;

    t84 = ((x441-x442)<=(x443-x444));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x445 = UINT64_MAX;
	int64_t x447 = -1LL;
	static int32_t x448 = INT32_MAX;

    t85 = ((x445-x446)<=(x447-x448));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x453 = INT32_MAX;
	uint32_t x455 = 114U;
	int64_t x456 = -1LL;
	volatile int32_t t86 = -9;

    t86 = ((x453-x454)<=(x455-x456));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x457 = 2067;
	uint16_t x458 = 3U;
	volatile int16_t x459 = INT16_MIN;
	volatile int64_t x460 = INT64_MIN;
	volatile int32_t t87 = 5708028;

    t87 = ((x457-x458)<=(x459-x460));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x465 = UINT64_MAX;
	volatile int64_t x466 = 2654463018376684LL;
	int16_t x467 = INT16_MIN;

    t88 = ((x465-x466)<=(x467-x468));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x469 = -201LL;
	uint8_t x470 = UINT8_MAX;
	static int64_t x471 = INT64_MIN;
	int32_t t89 = -53;

    t89 = ((x469-x470)<=(x471-x472));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x473 = INT16_MAX;
	uint64_t x474 = UINT64_MAX;
	static int16_t x475 = INT16_MAX;
	static volatile int8_t x476 = 0;
	volatile int32_t t90 = 97546;

    t90 = ((x473-x474)<=(x475-x476));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x481 = 6U;
	int64_t x483 = INT64_MIN;
	static int64_t x484 = -1LL;

    t91 = ((x481-x482)<=(x483-x484));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x489 = INT16_MIN;
	uint16_t x490 = 0U;
	int8_t x491 = -1;
	int32_t x492 = INT32_MIN;
	static volatile int32_t t92 = -307;

    t92 = ((x489-x490)<=(x491-x492));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x497 = INT16_MIN;
	uint8_t x498 = UINT8_MAX;
	int32_t t93 = -1590124;

    t93 = ((x497-x498)<=(x499-x500));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x501 = -451;
	int8_t x502 = 16;
	int8_t x503 = INT8_MAX;
	int16_t x504 = -10992;
	int32_t t94 = 600833976;

    t94 = ((x501-x502)<=(x503-x504));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x505 = INT16_MIN;
	volatile int8_t x507 = -1;
	int64_t x508 = -442508LL;
	int32_t t95 = -29;

    t95 = ((x505-x506)<=(x507-x508));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x509 = -85036;
	uint16_t x510 = 3U;
	uint32_t x512 = UINT32_MAX;
	volatile int32_t t96 = -13846;

    t96 = ((x509-x510)<=(x511-x512));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x529 = 1U;
	volatile uint32_t x530 = 316U;
	static uint16_t x531 = UINT16_MAX;
	uint16_t x532 = 0U;
	int32_t t97 = 0;

    t97 = ((x529-x530)<=(x531-x532));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x535 = 541703661519900LLU;
	static uint64_t x536 = 1212LLU;
	volatile int32_t t98 = -31905;

    t98 = ((x533-x534)<=(x535-x536));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x537 = 12U;
	static int8_t x538 = -1;
	volatile uint32_t x539 = 1615U;
	int64_t x540 = INT64_MAX;
	volatile int32_t t99 = 7614856;

    t99 = ((x537-x538)<=(x539-x540));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x545 = UINT8_MAX;
	uint16_t x546 = 3U;
	uint8_t x548 = UINT8_MAX;
	int32_t t100 = -13251270;

    t100 = ((x545-x546)<=(x547-x548));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x549 = 58U;
	volatile uint16_t x551 = 806U;
	volatile int8_t x552 = INT8_MIN;
	int32_t t101 = -9811174;

    t101 = ((x549-x550)<=(x551-x552));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x553 = 28U;
	int8_t x554 = 6;
	volatile uint64_t x555 = 13358725054LLU;
	int16_t x556 = INT16_MIN;

    t102 = ((x553-x554)<=(x555-x556));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x557 = 4;
	uint16_t x558 = UINT16_MAX;
	volatile uint16_t x559 = 81U;
	volatile int32_t x560 = -1;
	static volatile int32_t t103 = 126;

    t103 = ((x557-x558)<=(x559-x560));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x561 = -1;
	static int32_t x562 = -1;
	static int16_t x563 = -1;
	uint16_t x564 = 0U;

    t104 = ((x561-x562)<=(x563-x564));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x565 = UINT64_MAX;
	int8_t x566 = INT8_MAX;
	static int8_t x567 = -1;
	volatile int16_t x568 = 4033;
	volatile int32_t t105 = 52178673;

    t105 = ((x565-x566)<=(x567-x568));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x571 = INT64_MIN;
	int32_t x572 = INT32_MIN;
	int32_t t106 = 173600195;

    t106 = ((x569-x570)<=(x571-x572));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x582 = 3625142U;
	int8_t x583 = -1;
	uint32_t x584 = 2330U;
	int32_t t107 = -60941360;

    t107 = ((x581-x582)<=(x583-x584));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x589 = 10;
	int64_t x590 = INT64_MAX;
	volatile int8_t x591 = INT8_MIN;
	int64_t x592 = -8714197424686218LL;
	static volatile int32_t t108 = 2755442;

    t108 = ((x589-x590)<=(x591-x592));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x593 = -12028935123LL;
	int8_t x594 = -1;
	static int64_t x595 = -1LL;
	static int16_t x596 = -1;
	static volatile int32_t t109 = 162;

    t109 = ((x593-x594)<=(x595-x596));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x601 = 2U;
	int32_t x602 = -1;
	int32_t x604 = INT32_MIN;
	volatile int32_t t110 = 39;

    t110 = ((x601-x602)<=(x603-x604));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x605 = INT8_MIN;
	uint64_t x606 = 1747850LLU;
	static uint32_t x607 = 0U;
	int16_t x608 = -1;
	volatile int32_t t111 = 12;

    t111 = ((x605-x606)<=(x607-x608));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x613 = INT64_MIN;
	volatile uint32_t x616 = 90952U;
	int32_t t112 = -6926;

    t112 = ((x613-x614)<=(x615-x616));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x617 = 77309411338LL;
	static volatile uint16_t x618 = UINT16_MAX;
	static int64_t x620 = -170949193445118LL;
	volatile int32_t t113 = -2537;

    t113 = ((x617-x618)<=(x619-x620));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x621 = 8465813077LLU;
	int64_t x622 = INT64_MAX;
	uint16_t x623 = 2U;

    t114 = ((x621-x622)<=(x623-x624));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x629 = 916090603911127721LL;
	uint32_t x630 = 2U;
	int16_t x631 = INT16_MIN;
	uint8_t x632 = 1U;
	volatile int32_t t115 = 9660525;

    t115 = ((x629-x630)<=(x631-x632));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x633 = -1;
	int64_t x634 = -1LL;
	int8_t x635 = -1;
	int32_t t116 = -21532429;

    t116 = ((x633-x634)<=(x635-x636));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x639 = INT64_MIN;
	uint64_t x640 = 225397010LLU;
	int32_t t117 = 87128;

    t117 = ((x637-x638)<=(x639-x640));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x641 = -1;
	uint32_t x642 = 1U;
	static int32_t x644 = INT32_MAX;

    t118 = ((x641-x642)<=(x643-x644));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x645 = -131LL;
	static int16_t x646 = INT16_MIN;
	int16_t x647 = -1;
	int8_t x648 = INT8_MIN;
	int32_t t119 = 25;

    t119 = ((x645-x646)<=(x647-x648));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x649 = -298395504;
	uint32_t x650 = UINT32_MAX;
	static int64_t x651 = -1LL;
	volatile int32_t t120 = -2;

    t120 = ((x649-x650)<=(x651-x652));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x653 = INT8_MAX;
	uint8_t x654 = UINT8_MAX;
	int32_t x655 = INT32_MIN;
	static uint64_t x656 = UINT64_MAX;

    t121 = ((x653-x654)<=(x655-x656));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x657 = INT8_MIN;
	int8_t x658 = -1;
	uint8_t x659 = 23U;
	static int32_t t122 = -897;

    t122 = ((x657-x658)<=(x659-x660));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x662 = UINT64_MAX;
	uint16_t x663 = 4U;
	volatile int32_t t123 = -112623;

    t123 = ((x661-x662)<=(x663-x664));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x666 = 27056U;
	int16_t x667 = INT16_MAX;
	int32_t x668 = INT32_MAX;
	int32_t t124 = 0;

    t124 = ((x665-x666)<=(x667-x668));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x674 = INT64_MIN;
	int32_t t125 = 46486;

    t125 = ((x673-x674)<=(x675-x676));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x677 = -1;
	uint64_t x678 = 213271516405372614LLU;
	int64_t x679 = INT64_MIN;
	int32_t t126 = 122763;

    t126 = ((x677-x678)<=(x679-x680));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x683 = UINT16_MAX;
	int32_t t127 = -510;

    t127 = ((x681-x682)<=(x683-x684));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x689 = INT64_MAX;
	uint32_t x690 = 4U;
	int32_t x691 = -139720838;
	static int8_t x692 = INT8_MIN;
	int32_t t128 = -4095;

    t128 = ((x689-x690)<=(x691-x692));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x693 = UINT64_MAX;
	static int16_t x694 = -2;
	uint16_t x696 = 0U;
	volatile int32_t t129 = -18;

    t129 = ((x693-x694)<=(x695-x696));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x697 = -29;
	int32_t x699 = -524129;
	static volatile uint32_t x700 = UINT32_MAX;
	static int32_t t130 = 28;

    t130 = ((x697-x698)<=(x699-x700));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x702 = UINT16_MAX;
	int8_t x703 = -28;
	uint64_t x704 = 23027LLU;
	int32_t t131 = 0;

    t131 = ((x701-x702)<=(x703-x704));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int16_t x705 = INT16_MIN;
	uint64_t x707 = 1561750813LLU;
	uint64_t x708 = 2944179570840LLU;
	int32_t t132 = -1849670;

    t132 = ((x705-x706)<=(x707-x708));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x709 = -7;
	uint64_t x711 = 9195836LLU;
	volatile int32_t t133 = -504;

    t133 = ((x709-x710)<=(x711-x712));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x713 = INT64_MAX;
	volatile int32_t t134 = 26608401;

    t134 = ((x713-x714)<=(x715-x716));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x717 = -2872120834912153826LL;
	int32_t x718 = -1;
	uint64_t x720 = 2929101678682902991LLU;
	volatile int32_t t135 = 0;

    t135 = ((x717-x718)<=(x719-x720));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x721 = INT64_MIN;
	int32_t x722 = -31;
	volatile int16_t x723 = 4;
	int32_t x724 = 50660683;
	volatile int32_t t136 = -3;

    t136 = ((x721-x722)<=(x723-x724));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x725 = INT64_MIN;
	uint64_t x726 = 0LLU;
	static int32_t t137 = 0;

    t137 = ((x725-x726)<=(x727-x728));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x730 = INT64_MIN;
	int8_t x732 = INT8_MAX;
	static volatile int32_t t138 = -1171352;

    t138 = ((x729-x730)<=(x731-x732));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x734 = -1LL;
	static uint64_t x735 = 15624941194LLU;
	uint64_t x736 = UINT64_MAX;

    t139 = ((x733-x734)<=(x735-x736));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x737 = INT8_MIN;
	int32_t x738 = -1;
	int32_t x739 = 440;
	int64_t x740 = -813359543LL;
	int32_t t140 = 143873;

    t140 = ((x737-x738)<=(x739-x740));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x741 = 3U;
	uint16_t x742 = 16U;
	volatile uint8_t x743 = 18U;
	volatile int32_t x744 = 458216781;
	volatile int32_t t141 = -261344;

    t141 = ((x741-x742)<=(x743-x744));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x745 = 1023;
	int8_t x747 = -1;
	int64_t x748 = -14230609723842LL;

    t142 = ((x745-x746)<=(x747-x748));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x753 = 239541890LLU;
	static int64_t x754 = -36703385540993LL;
	int8_t x755 = INT8_MIN;
	volatile int32_t t143 = 3;

    t143 = ((x753-x754)<=(x755-x756));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x759 = 21U;
	uint32_t x760 = 357U;
	volatile int32_t t144 = 48172;

    t144 = ((x757-x758)<=(x759-x760));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x765 = 23U;
	int8_t x766 = -1;
	static int16_t x767 = 77;
	uint8_t x768 = UINT8_MAX;
	int32_t t145 = 253994608;

    t145 = ((x765-x766)<=(x767-x768));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x769 = -1LL;
	static int16_t x770 = -1957;
	int32_t x771 = 2062296;
	int8_t x772 = INT8_MAX;
	volatile int32_t t146 = 45062;

    t146 = ((x769-x770)<=(x771-x772));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x773 = 8U;
	int64_t x774 = -545LL;
	uint64_t x775 = 127813738981LLU;
	int32_t x776 = INT32_MIN;
	int32_t t147 = 7785;

    t147 = ((x773-x774)<=(x775-x776));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x777 = 994369613562LL;
	uint32_t x778 = 900996U;
	int16_t x779 = INT16_MIN;
	int64_t x780 = -660940174977037381LL;
	volatile int32_t t148 = -604009389;

    t148 = ((x777-x778)<=(x779-x780));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x781 = 30U;
	int64_t x783 = INT64_MIN;
	int32_t x784 = -3974;
	volatile int32_t t149 = 138496;

    t149 = ((x781-x782)<=(x783-x784));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x786 = 3U;
	int8_t x788 = -1;
	int32_t t150 = 52480384;

    t150 = ((x785-x786)<=(x787-x788));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x789 = INT8_MIN;
	volatile uint32_t x790 = UINT32_MAX;
	volatile uint8_t x791 = 20U;
	volatile int32_t t151 = -11272736;

    t151 = ((x789-x790)<=(x791-x792));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x797 = -1;
	int64_t x798 = INT64_MAX;
	uint32_t x800 = 6230U;
	int32_t t152 = 327;

    t152 = ((x797-x798)<=(x799-x800));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x801 = UINT32_MAX;
	int32_t x802 = -1;
	uint32_t x803 = UINT32_MAX;
	static int32_t t153 = -40932450;

    t153 = ((x801-x802)<=(x803-x804));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x805 = 697611U;
	static int8_t x806 = 51;
	uint8_t x807 = UINT8_MAX;
	int64_t x808 = -1LL;

    t154 = ((x805-x806)<=(x807-x808));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x809 = 1;
	uint8_t x810 = 5U;
	int32_t x811 = INT32_MIN;
	int32_t x812 = INT32_MIN;
	int32_t t155 = 15;

    t155 = ((x809-x810)<=(x811-x812));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x821 = INT8_MAX;
	uint32_t x823 = UINT32_MAX;
	uint16_t x824 = 89U;
	int32_t t156 = -44659;

    t156 = ((x821-x822)<=(x823-x824));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x826 = -1;
	uint16_t x827 = 26U;
	volatile int32_t x828 = -6561140;
	int32_t t157 = 14358;

    t157 = ((x825-x826)<=(x827-x828));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x829 = UINT32_MAX;
	volatile uint16_t x830 = UINT16_MAX;
	volatile uint64_t x831 = 1774775518292629LLU;
	static int16_t x832 = INT16_MIN;

    t158 = ((x829-x830)<=(x831-x832));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x834 = INT16_MAX;
	volatile uint8_t x835 = UINT8_MAX;
	static uint64_t x836 = 7389219013866239856LLU;
	volatile int32_t t159 = -8427963;

    t159 = ((x833-x834)<=(x835-x836));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x837 = 266233106264538LL;
	int16_t x838 = INT16_MAX;
	volatile uint32_t x839 = UINT32_MAX;
	volatile int16_t x840 = INT16_MIN;
	static int32_t t160 = 7096;

    t160 = ((x837-x838)<=(x839-x840));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x845 = -1LL;
	static uint8_t x846 = UINT8_MAX;
	static volatile int16_t x847 = -1;
	int16_t x848 = INT16_MIN;
	int32_t t161 = -683113;

    t161 = ((x845-x846)<=(x847-x848));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x853 = 23U;
	volatile uint64_t x855 = UINT64_MAX;
	uint64_t x856 = 6LLU;

    t162 = ((x853-x854)<=(x855-x856));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x857 = -23;
	int16_t x859 = INT16_MIN;
	int32_t t163 = -1062;

    t163 = ((x857-x858)<=(x859-x860));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x861 = UINT32_MAX;
	int32_t x863 = -209692249;
	int32_t x864 = 1384600;

    t164 = ((x861-x862)<=(x863-x864));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x865 = UINT16_MAX;
	uint32_t x867 = UINT32_MAX;
	int16_t x868 = INT16_MAX;
	volatile int32_t t165 = -3;

    t165 = ((x865-x866)<=(x867-x868));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x873 = INT64_MIN;
	uint64_t x874 = 286233LLU;
	int64_t x875 = INT64_MIN;
	volatile int32_t t166 = 7376295;

    t166 = ((x873-x874)<=(x875-x876));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x877 = UINT64_MAX;
	int16_t x878 = INT16_MIN;
	volatile int64_t x879 = INT64_MAX;
	uint64_t x880 = 1447LLU;
	volatile int32_t t167 = -605694;

    t167 = ((x877-x878)<=(x879-x880));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x885 = 14U;
	static uint64_t x886 = 9811200LLU;
	volatile int32_t x887 = -1;
	int32_t x888 = -367;
	volatile int32_t t168 = -222;

    t168 = ((x885-x886)<=(x887-x888));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x893 = INT16_MAX;
	int64_t x895 = -16007290LL;
	static volatile int8_t x896 = INT8_MIN;
	int32_t t169 = 101411;

    t169 = ((x893-x894)<=(x895-x896));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x898 = INT8_MAX;
	uint32_t x899 = UINT32_MAX;
	int32_t x900 = INT32_MIN;

    t170 = ((x897-x898)<=(x899-x900));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x905 = 475596251431844077LLU;
	int64_t x906 = -64074178127LL;
	static int64_t x907 = INT64_MIN;
	static int8_t x908 = 0;
	volatile int32_t t171 = 8695750;

    t171 = ((x905-x906)<=(x907-x908));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x909 = INT8_MIN;
	int16_t x910 = INT16_MIN;
	volatile int64_t x911 = -66241653LL;
	static uint16_t x912 = UINT16_MAX;
	volatile int32_t t172 = 8;

    t172 = ((x909-x910)<=(x911-x912));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x918 = -1;
	volatile int8_t x919 = INT8_MAX;
	volatile int8_t x920 = -1;
	int32_t t173 = 2;

    t173 = ((x917-x918)<=(x919-x920));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x925 = UINT32_MAX;
	int8_t x926 = 1;
	int8_t x927 = 3;
	int8_t x928 = -1;
	volatile int32_t t174 = -230;

    t174 = ((x925-x926)<=(x927-x928));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x929 = UINT64_MAX;
	int32_t x930 = -1;
	volatile int8_t x931 = INT8_MIN;
	int8_t x932 = -11;
	int32_t t175 = -30980;

    t175 = ((x929-x930)<=(x931-x932));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x933 = INT16_MAX;
	int16_t x935 = INT16_MIN;
	int8_t x936 = INT8_MAX;
	int32_t t176 = 1406;

    t176 = ((x933-x934)<=(x935-x936));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x937 = INT16_MIN;
	uint32_t x938 = 12095416U;
	int64_t x939 = -1LL;
	int32_t t177 = 31536;

    t177 = ((x937-x938)<=(x939-x940));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x941 = 0U;
	volatile int8_t x942 = 3;
	volatile uint32_t x943 = 155555U;
	static volatile int16_t x944 = INT16_MAX;

    t178 = ((x941-x942)<=(x943-x944));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x945 = 1;
	int8_t x946 = INT8_MIN;
	volatile int64_t x947 = 225353651LL;

    t179 = ((x945-x946)<=(x947-x948));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x950 = INT8_MIN;
	uint16_t x951 = 6625U;
	volatile int32_t x952 = -3880;
	int32_t t180 = -23166;

    t180 = ((x949-x950)<=(x951-x952));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x953 = 1LL;
	uint32_t x954 = 179897278U;
	int32_t x955 = -950050;
	uint32_t x956 = 0U;
	int32_t t181 = 706671504;

    t181 = ((x953-x954)<=(x955-x956));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x965 = 2986103609308955LLU;
	int16_t x966 = -1;
	int16_t x967 = -1;

    t182 = ((x965-x966)<=(x967-x968));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x974 = 22338487849LL;
	int64_t x975 = INT64_MIN;
	volatile int16_t x976 = -1;
	int32_t t183 = -53851027;

    t183 = ((x973-x974)<=(x975-x976));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x982 = 0LLU;
	int16_t x983 = 6;
	uint32_t x984 = UINT32_MAX;

    t184 = ((x981-x982)<=(x983-x984));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x985 = INT16_MIN;
	int16_t x987 = -1;
	int64_t x988 = 300860088608LL;

    t185 = ((x985-x986)<=(x987-x988));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x989 = INT32_MIN;
	int64_t x991 = INT64_MIN;
	int32_t t186 = -850;

    t186 = ((x989-x990)<=(x991-x992));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x998 = -1LL;
	uint32_t x999 = 5U;
	static int32_t x1000 = -457690199;
	int32_t t187 = -12;

    t187 = ((x997-x998)<=(x999-x1000));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1001 = 13792585;
	volatile int64_t x1002 = -3897728864739LL;
	int32_t x1003 = INT32_MIN;
	int64_t x1004 = 1676030802837182294LL;
	int32_t t188 = 28174;

    t188 = ((x1001-x1002)<=(x1003-x1004));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1005 = INT32_MIN;
	int8_t x1006 = INT8_MIN;
	volatile int32_t x1007 = INT32_MAX;
	uint8_t x1008 = UINT8_MAX;
	int32_t t189 = -166018;

    t189 = ((x1005-x1006)<=(x1007-x1008));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1009 = 2;
	int8_t x1011 = 21;
	uint16_t x1012 = 1U;
	int32_t t190 = -6;

    t190 = ((x1009-x1010)<=(x1011-x1012));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x1017 = INT16_MIN;
	volatile uint32_t x1019 = UINT32_MAX;
	static int32_t x1020 = INT32_MIN;
	int32_t t191 = -20291;

    t191 = ((x1017-x1018)<=(x1019-x1020));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1025 = INT16_MIN;
	static int8_t x1026 = INT8_MAX;
	static int64_t x1027 = -63LL;
	int16_t x1028 = 6;

    t192 = ((x1025-x1026)<=(x1027-x1028));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1033 = 95;
	uint64_t x1035 = 1428577449738941265LLU;

    t193 = ((x1033-x1034)<=(x1035-x1036));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1037 = 12;
	int8_t x1039 = 21;
	uint16_t x1040 = UINT16_MAX;
	volatile int32_t t194 = -18496424;

    t194 = ((x1037-x1038)<=(x1039-x1040));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x1042 = INT32_MIN;
	static uint32_t x1043 = 44U;
	int16_t x1044 = -2597;
	volatile int32_t t195 = 18973;

    t195 = ((x1041-x1042)<=(x1043-x1044));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1045 = INT32_MAX;
	uint64_t x1048 = UINT64_MAX;
	static int32_t t196 = 739607828;

    t196 = ((x1045-x1046)<=(x1047-x1048));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1049 = INT64_MIN;
	int32_t x1050 = INT32_MIN;
	static uint16_t x1051 = 6272U;
	int8_t x1052 = -27;
	volatile int32_t t197 = -157;

    t197 = ((x1049-x1050)<=(x1051-x1052));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1053 = INT64_MIN;
	uint32_t x1055 = 708U;
	volatile int32_t t198 = 0;

    t198 = ((x1053-x1054)<=(x1055-x1056));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x1061 = UINT32_MAX;
	int16_t x1062 = INT16_MAX;
	volatile int8_t x1063 = -5;
	int16_t x1064 = INT16_MIN;
	int32_t t199 = 186;

    t199 = ((x1061-x1062)<=(x1063-x1064));

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

