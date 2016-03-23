
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

int32_t x4 = INT32_MIN;
int64_t t0 = -358053LL;
static int16_t x5 = INT16_MIN;
int16_t x12 = INT16_MAX;
int32_t x33 = 4;
static int32_t t6 = -16;
int16_t x40 = INT16_MIN;
static int16_t x45 = INT16_MAX;
uint32_t x46 = UINT32_MAX;
static volatile int8_t x47 = -1;
uint32_t t8 = 1683U;
volatile int16_t x60 = INT16_MIN;
static int8_t x66 = INT8_MIN;
static volatile uint64_t t13 = 1LLU;
int64_t x79 = INT64_MIN;
uint8_t x81 = 26U;
static uint64_t x82 = 1LLU;
int8_t x87 = INT8_MAX;
uint32_t x88 = 129581U;
volatile uint64_t t20 = 375042488692732731LLU;
static uint32_t x102 = UINT32_MAX;
int32_t x104 = -172;
static uint32_t t21 = 922939821U;
volatile int64_t x106 = -1LL;
int8_t x110 = -8;
static int8_t x111 = INT8_MIN;
static volatile int64_t t23 = -189703976LL;
static int64_t x123 = INT64_MAX;
uint64_t t24 = 2286873073998057475LLU;
uint32_t t25 = 101521U;
static volatile uint64_t t27 = 3636LLU;
static int64_t x137 = 1LL;
int16_t x158 = INT16_MIN;
int8_t x165 = -1;
volatile uint16_t x167 = UINT16_MAX;
int32_t x191 = INT32_MIN;
static volatile int32_t t39 = -1923792;
int64_t x199 = -156901239149LL;
uint64_t x201 = UINT64_MAX;
static int8_t x204 = 2;
uint64_t x209 = UINT64_MAX;
int8_t x215 = -1;
int64_t x216 = -1LL;
int8_t x222 = 11;
static volatile uint8_t x224 = 77U;
static uint64_t x226 = 6763992819LLU;
volatile uint64_t t47 = 421498665LLU;
static volatile int64_t t48 = 5496572361471LL;
int64_t t50 = -2847988394LL;
static volatile int8_t x245 = INT8_MAX;
int16_t x246 = INT16_MAX;
int32_t x248 = -1;
uint16_t x265 = UINT16_MAX;
uint8_t x271 = UINT8_MAX;
volatile int64_t t56 = 2053639120673LL;
volatile uint16_t x298 = 378U;
static volatile uint16_t x306 = UINT16_MAX;
int8_t x307 = -1;
volatile uint64_t t59 = 2840827403863230371LLU;
int8_t x314 = -1;
int32_t t60 = -3715;
static int16_t x325 = -1;
volatile uint64_t t64 = 193236511462379023LLU;
int16_t x334 = INT16_MIN;
int64_t t65 = -18940LL;
int8_t x341 = INT8_MIN;
volatile int64_t x355 = -1LL;
volatile uint64_t t69 = 7LLU;
int32_t t72 = 642;
int32_t t74 = -3878;
int8_t x397 = INT8_MAX;
int32_t x399 = -1;
volatile int8_t x419 = INT8_MIN;
int16_t x437 = -5766;
static int32_t x439 = -38;
uint8_t x440 = 6U;
uint64_t x444 = UINT64_MAX;
volatile uint64_t t84 = 2214568819887573LLU;
int16_t x458 = INT16_MIN;
int64_t t87 = 1LL;
int16_t x473 = INT16_MIN;
static int32_t x475 = INT32_MIN;
volatile uint32_t t90 = 2U;
int16_t x490 = INT16_MAX;
int32_t x497 = INT32_MIN;
volatile int64_t x501 = -1LL;
static volatile int64_t t96 = 1454937539467728461LL;
int64_t x514 = 178351818765735LL;
int16_t x518 = -286;
static uint64_t x527 = 4772605LLU;
static int8_t x529 = INT8_MAX;
int16_t x533 = -17;
int16_t x539 = -920;
volatile int32_t x543 = INT32_MIN;
int32_t x547 = INT32_MIN;
uint16_t x553 = UINT16_MAX;
uint64_t x555 = 0LLU;
volatile uint64_t x568 = UINT64_MAX;
static volatile uint64_t t109 = 26331LLU;
static int64_t x572 = INT64_MIN;
static uint16_t x578 = UINT16_MAX;
volatile uint32_t x584 = 977994U;
uint32_t t112 = 15461U;
static int32_t t113 = -87148;
volatile uint32_t t114 = 572497254U;
uint16_t x598 = 490U;
volatile int64_t t116 = -106192570LL;
static uint8_t x603 = UINT8_MAX;
volatile uint64_t t117 = 138LLU;
int64_t x608 = INT64_MIN;
uint32_t t119 = 1855015U;
uint64_t t120 = 113404LLU;
static volatile int32_t x617 = -3710;
static volatile int32_t x631 = 1;
int64_t x634 = -5597813327LL;
int64_t x635 = 261942233188171LL;
volatile uint64_t x636 = UINT64_MAX;
int8_t x637 = 1;
static int8_t x643 = INT8_MAX;
int8_t x661 = -1;
uint64_t t129 = 33791308273834LLU;
int64_t x666 = INT64_MAX;
static int64_t x668 = -32034515LL;
volatile uint64_t t130 = 465989423LLU;
int32_t x685 = INT32_MIN;
volatile int64_t x686 = -1LL;
int16_t x687 = -1;
int32_t x688 = -1;
uint64_t x689 = 21990LLU;
uint64_t t133 = 7702LLU;
volatile int64_t x697 = -1LL;
volatile int16_t x701 = 1;
uint64_t t136 = 2987LLU;
uint8_t x713 = UINT8_MAX;
volatile int32_t t141 = -4087772;
int64_t x725 = 0LL;
volatile uint64_t t142 = 14248LLU;
static int32_t x732 = -840233486;
int32_t x734 = INT32_MIN;
int8_t x735 = INT8_MAX;
static int32_t x740 = INT32_MIN;
int16_t x743 = INT16_MIN;
int8_t x745 = INT8_MIN;
int64_t x748 = INT64_MIN;
volatile int64_t t147 = -535287343065993LL;
uint32_t x756 = UINT32_MAX;
volatile int64_t t149 = -190125632973LL;
int32_t x760 = 111055671;
int8_t x766 = INT8_MAX;
int64_t x772 = INT64_MIN;
volatile uint64_t t153 = 24859798654233LLU;
volatile int8_t x781 = -1;
int32_t x788 = INT32_MIN;
int16_t x789 = INT16_MIN;
static uint16_t x793 = 0U;
volatile uint16_t x794 = 3U;
int32_t x797 = INT32_MAX;
uint8_t x799 = 11U;
int32_t x800 = INT32_MAX;
uint32_t x811 = 3743U;
int32_t x815 = INT32_MIN;
int64_t x817 = -1LL;
int32_t x818 = INT32_MIN;
static volatile int16_t x821 = INT16_MAX;
volatile uint8_t x823 = UINT8_MAX;
volatile uint16_t x826 = 101U;
volatile uint8_t x834 = 19U;
int32_t x842 = -1;
static uint16_t x850 = 40U;
int16_t x856 = INT16_MIN;
int32_t x869 = INT32_MIN;
static volatile int8_t x870 = INT8_MIN;
static int8_t x880 = INT8_MIN;
uint16_t x887 = UINT16_MAX;
int64_t x888 = INT64_MIN;
int32_t x893 = 214334;
int32_t x895 = 14;
volatile int16_t x908 = INT16_MAX;
volatile int32_t x913 = -1;
int64_t x917 = -1493143121437LL;
uint8_t x918 = 45U;
volatile uint64_t t186 = 7287006334279804920LLU;
int16_t x932 = 2308;
volatile uint32_t x959 = UINT32_MAX;
static uint16_t x971 = 13U;
static int32_t x980 = INT32_MIN;
int64_t t196 = 6904729598087662LL;
int16_t x984 = INT16_MAX;
int64_t x985 = 32027496887620LL;
static int32_t x986 = INT32_MIN;
int8_t x987 = -1;
volatile int16_t x1000 = 4;


void f0(void) {
    	static int32_t x1 = 82032;
	int8_t x2 = -1;
	int64_t x3 = 3593LL;

    t0 = ((x1-x2)&(x3/x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MIN;
	volatile uint32_t x7 = 86162U;
	int32_t x8 = -3638360;
	static volatile uint32_t t1 = 124169U;

    t1 = ((x5-x6)&(x7/x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	volatile int64_t x10 = INT64_MIN;
	int8_t x11 = -1;
	volatile int64_t t2 = -901537641803741LL;

    t2 = ((x9-x10)&(x11/x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	static uint64_t x14 = 939633267466LLU;
	int32_t x15 = INT32_MAX;
	uint64_t x16 = 531843847560894149LLU;
	static uint64_t t3 = 4291356558LLU;

    t3 = ((x13-x14)&(x15/x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = -33;
	volatile uint32_t x22 = 14U;
	int16_t x23 = 3;
	int16_t x24 = 624;
	volatile uint32_t t4 = 0U;

    t4 = ((x21-x22)&(x23/x24));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = UINT8_MAX;
	uint8_t x26 = 0U;
	int16_t x27 = INT16_MIN;
	static int8_t x28 = INT8_MIN;
	volatile int32_t t5 = -261745;

    t5 = ((x25-x26)&(x27/x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x34 = 19U;
	uint16_t x35 = 186U;
	static int8_t x36 = -3;

    t6 = ((x33-x34)&(x35/x36));

    if (t6 != -64) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = 4057595445239057LL;
	int32_t x38 = 883940;
	int64_t x39 = -1LL;
	int64_t t7 = 7811046976449LL;

    t7 = ((x37-x38)&(x39/x40));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x48 = UINT32_MAX;

    t8 = ((x45-x46)&(x47/x48));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x49 = UINT16_MAX;
	volatile uint64_t x50 = UINT64_MAX;
	static int8_t x51 = 1;
	uint32_t x52 = 57536U;
	volatile uint64_t t9 = 2988145LLU;

    t9 = ((x49-x50)&(x51/x52));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x53 = 2U;
	static int8_t x54 = INT8_MIN;
	volatile int32_t x55 = INT32_MIN;
	int8_t x56 = 5;
	volatile int32_t t10 = 0;

    t10 = ((x53-x54)&(x55/x56));

    if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x57 = INT8_MAX;
	int32_t x58 = 74;
	volatile int16_t x59 = -1;
	int32_t t11 = 23105218;

    t11 = ((x57-x58)&(x59/x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = INT64_MAX;
	uint16_t x62 = 21675U;
	uint16_t x63 = UINT16_MAX;
	static int64_t x64 = 502587286280LL;
	int64_t t12 = -15LL;

    t12 = ((x61-x62)&(x63/x64));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MIN;
	static volatile int64_t x67 = INT64_MIN;
	uint64_t x68 = UINT64_MAX;

    t13 = ((x65-x66)&(x67/x68));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x69 = 7U;
	volatile int16_t x70 = INT16_MAX;
	int16_t x71 = -102;
	volatile int8_t x72 = INT8_MIN;
	volatile uint32_t t14 = 0U;

    t14 = ((x69-x70)&(x71/x72));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x73 = INT8_MAX;
	uint32_t x74 = UINT32_MAX;
	uint16_t x75 = 0U;
	int32_t x76 = INT32_MAX;
	volatile uint32_t t15 = 11389557U;

    t15 = ((x73-x74)&(x75/x76));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x77 = 1U;
	static uint16_t x78 = 12414U;
	uint16_t x80 = UINT16_MAX;
	int64_t t16 = 61513LL;

    t16 = ((x77-x78)&(x79/x80));

    if (t16 != -140739635871744LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x83 = 119U;
	uint32_t x84 = 1240958U;
	volatile uint64_t t17 = 1536LLU;

    t17 = ((x81-x82)&(x83/x84));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x85 = 3304;
	int64_t x86 = -5561196LL;
	int64_t t18 = 595617238LL;

    t18 = ((x85-x86)&(x87/x88));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x89 = 1020U;
	volatile int16_t x90 = INT16_MIN;
	uint64_t x91 = 699005461805192LLU;
	volatile uint32_t x92 = 1572926U;
	static uint64_t t19 = 202463953LLU;

    t19 = ((x89-x90)&(x91/x92));

    if (t19 != 33384LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = UINT64_MAX;
	uint8_t x94 = UINT8_MAX;
	uint8_t x95 = UINT8_MAX;
	volatile int8_t x96 = INT8_MIN;

    t20 = ((x93-x94)&(x95/x96));

    if (t20 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = INT32_MAX;
	static volatile uint32_t x103 = UINT32_MAX;

    t21 = ((x101-x102)&(x103/x104));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x105 = 32247685474710499LLU;
	int32_t x107 = 34;
	volatile uint16_t x108 = UINT16_MAX;
	volatile uint64_t t22 = 4898439732LLU;

    t22 = ((x105-x106)&(x107/x108));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x109 = INT64_MIN;
	int32_t x112 = INT32_MIN;

    t23 = ((x109-x110)&(x111/x112));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x121 = -1LL;
	int16_t x122 = -1;
	static volatile uint64_t x124 = 3551181LLU;

    t24 = ((x121-x122)&(x123/x124));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x125 = 0U;
	uint16_t x126 = 6617U;
	uint16_t x127 = UINT16_MAX;
	uint32_t x128 = UINT32_MAX;

    t25 = ((x125-x126)&(x127/x128));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x129 = INT32_MAX;
	uint32_t x130 = 338686926U;
	int16_t x131 = -1;
	static int16_t x132 = INT16_MIN;
	volatile uint32_t t26 = 178228751U;

    t26 = ((x129-x130)&(x131/x132));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x133 = INT8_MIN;
	uint64_t x134 = 1065581230868587LLU;
	int64_t x135 = -386137300LL;
	uint8_t x136 = 29U;

    t27 = ((x133-x134)&(x135/x136));

    if (t27 != 18445678492474413841LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x138 = UINT16_MAX;
	static uint16_t x139 = 26953U;
	int16_t x140 = INT16_MIN;
	int64_t t28 = 4359285758687540596LL;

    t28 = ((x137-x138)&(x139/x140));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x145 = INT8_MIN;
	int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MAX;
	int64_t t29 = -48778583788534967LL;

    t29 = ((x145-x146)&(x147/x148));

    if (t29 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x149 = -1;
	volatile int32_t x150 = 16450304;
	volatile int32_t x151 = INT32_MIN;
	volatile int64_t x152 = -26557LL;
	volatile int64_t t30 = 15097300798510LL;

    t30 = ((x149-x150)&(x151/x152));

    if (t30 != 14559LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x153 = 11548100856125152LLU;
	int64_t x154 = -1LL;
	static volatile int64_t x155 = 272667236652192763LL;
	volatile int8_t x156 = 4;
	uint64_t t31 = 222407120150LLU;

    t31 = ((x153-x154)&(x155/x156));

    if (t31 != 9011915145610464LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x157 = UINT8_MAX;
	volatile uint32_t x159 = 96299982U;
	static int8_t x160 = -47;
	uint32_t t32 = 19U;

    t32 = ((x157-x158)&(x159/x160));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x161 = -1;
	int32_t x162 = 831111833;
	volatile int64_t x163 = -1LL;
	static volatile int32_t x164 = -69923602;
	int64_t t33 = -225747588090LL;

    t33 = ((x161-x162)&(x163/x164));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x166 = 31U;
	volatile uint32_t x168 = UINT32_MAX;
	static volatile uint32_t t34 = 7U;

    t34 = ((x165-x166)&(x167/x168));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x173 = -22;
	static int16_t x174 = INT16_MAX;
	int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t35 = 3048408;

    t35 = ((x173-x174)&(x175/x176));

    if (t35 != 65536) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x177 = 6U;
	uint64_t x178 = 28101203756LLU;
	static volatile uint16_t x179 = 368U;
	static volatile int8_t x180 = INT8_MIN;
	uint64_t t36 = 12820389LLU;

    t36 = ((x177-x178)&(x179/x180));

    if (t36 != 18446744045608347866LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x181 = INT8_MAX;
	int16_t x182 = 193;
	int32_t x183 = -29201843;
	int16_t x184 = INT16_MIN;
	static int32_t t37 = 156714;

    t37 = ((x181-x182)&(x183/x184));

    if (t37 != 826) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x189 = INT16_MIN;
	int16_t x190 = INT16_MIN;
	int16_t x192 = INT16_MAX;
	volatile int32_t t38 = 2479;

    t38 = ((x189-x190)&(x191/x192));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x193 = -3847;
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MAX;
	static uint16_t x196 = 4969U;

    t39 = ((x193-x194)&(x195/x196));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x197 = -710;
	int8_t x198 = INT8_MAX;
	int32_t x200 = -828350295;
	volatile int64_t t40 = -2938504526LL;

    t40 = ((x197-x198)&(x199/x200));

    if (t40 != 185LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x202 = INT16_MIN;
	int64_t x203 = 83419LL;
	volatile uint64_t t41 = 62919193905LLU;

    t41 = ((x201-x202)&(x203/x204));

    if (t41 != 8941LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x205 = INT64_MIN;
	uint64_t x206 = 8142947LLU;
	static int64_t x207 = -647672923528LL;
	volatile int32_t x208 = -1785;
	volatile uint64_t t42 = 4997636117875736493LLU;

    t42 = ((x205-x206)&(x207/x208));

    if (t42 != 360744725LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x210 = INT16_MAX;
	static int16_t x211 = -4;
	int64_t x212 = INT64_MIN;
	static uint64_t t43 = 1722312LLU;

    t43 = ((x209-x210)&(x211/x212));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x213 = -61541;
	int64_t x214 = 1LL;
	int64_t t44 = -8653247LL;

    t44 = ((x213-x214)&(x215/x216));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x217 = INT16_MAX;
	volatile uint32_t x218 = 32020U;
	static int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;
	static volatile uint32_t t45 = 451870278U;

    t45 = ((x217-x218)&(x219/x220));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x221 = UINT64_MAX;
	volatile uint64_t x223 = 2333201122301756391LLU;
	uint64_t t46 = 191719291706203359LLU;

    t46 = ((x221-x222)&(x223/x224));

    if (t46 != 30301313276646176LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x225 = 410LLU;
	int8_t x227 = -22;
	volatile uint64_t x228 = UINT64_MAX;

    t47 = ((x225-x226)&(x227/x228));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x229 = -1;
	int32_t x230 = 4728171;
	int8_t x231 = INT8_MAX;
	int64_t x232 = INT64_MIN;

    t48 = ((x229-x230)&(x231/x232));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x233 = -2;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = -1LL;
	static uint8_t x236 = 89U;
	volatile int64_t t49 = -3844319391310881252LL;

    t49 = ((x233-x234)&(x235/x236));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x237 = INT64_MAX;
	int32_t x238 = INT32_MAX;
	volatile int16_t x239 = INT16_MAX;
	uint8_t x240 = 73U;

    t50 = ((x237-x238)&(x239/x240));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x241 = 23LLU;
	static int32_t x242 = -1;
	int16_t x243 = 87;
	int8_t x244 = -8;
	static uint64_t t51 = 60158651LLU;

    t51 = ((x241-x242)&(x243/x244));

    if (t51 != 16LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x247 = 5783977;
	volatile int32_t t52 = -54;

    t52 = ((x245-x246)&(x247/x248));

    if (t52 != -5799936) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x253 = 137U;
	uint8_t x254 = UINT8_MAX;
	static uint8_t x255 = UINT8_MAX;
	uint32_t x256 = 55118597U;
	uint32_t t53 = 2739U;

    t53 = ((x253-x254)&(x255/x256));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x266 = 1944509537U;
	static int32_t x267 = INT32_MIN;
	uint16_t x268 = UINT16_MAX;
	volatile uint32_t t54 = 7938U;

    t54 = ((x265-x266)&(x267/x268));

    if (t54 != 2350514176U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x269 = 1;
	static int16_t x270 = INT16_MIN;
	volatile int32_t x272 = INT32_MIN;
	int32_t t55 = -14;

    t55 = ((x269-x270)&(x271/x272));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x273 = UINT32_MAX;
	static int32_t x274 = -11;
	static uint32_t x275 = UINT32_MAX;
	int64_t x276 = 185470788LL;

    t56 = ((x273-x274)&(x275/x276));

    if (t56 != 2LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x297 = 5679U;
	uint32_t x299 = 395426523U;
	uint32_t x300 = 23U;
	volatile uint32_t t57 = 64052754U;

    t57 = ((x297-x298)&(x299/x300));

    if (t57 != 5121U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x301 = 285639464109373LLU;
	int16_t x302 = -1;
	static int16_t x303 = INT16_MIN;
	volatile int16_t x304 = -4;
	volatile uint64_t t58 = 948710LLU;

    t58 = ((x301-x302)&(x303/x304));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x305 = UINT64_MAX;
	uint32_t x308 = 38195897U;

    t59 = ((x305-x306)&(x307/x308));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x313 = INT8_MIN;
	int16_t x315 = INT16_MAX;
	uint16_t x316 = UINT16_MAX;

    t60 = ((x313-x314)&(x315/x316));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x317 = INT64_MAX;
	uint64_t x318 = 22LLU;
	int32_t x319 = INT32_MAX;
	volatile uint8_t x320 = 23U;
	volatile uint64_t t61 = 1372LLU;

    t61 = ((x317-x318)&(x319/x320));

    if (t61 != 93368832LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x321 = -1;
	uint16_t x322 = 1017U;
	int8_t x323 = INT8_MAX;
	int64_t x324 = INT64_MAX;
	int64_t t62 = 15529737LL;

    t62 = ((x321-x322)&(x323/x324));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x326 = INT16_MIN;
	int8_t x327 = -1;
	static int64_t x328 = -1LL;
	int64_t t63 = 6550080918LL;

    t63 = ((x325-x326)&(x327/x328));

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x329 = INT64_MIN;
	volatile uint64_t x330 = UINT64_MAX;
	int8_t x331 = -10;
	static uint64_t x332 = 508425490829758LLU;

    t64 = ((x329-x330)&(x331/x332));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x333 = INT8_MAX;
	int64_t x335 = -52582LL;
	static int8_t x336 = -1;

    t65 = ((x333-x334)&(x335/x336));

    if (t65 != 32870LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x342 = INT8_MAX;
	int32_t x343 = INT32_MAX;
	volatile int16_t x344 = INT16_MAX;
	int32_t t66 = -31;

    t66 = ((x341-x342)&(x343/x344));

    if (t66 != 65536) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x345 = UINT32_MAX;
	int64_t x346 = INT64_MAX;
	int8_t x347 = -1;
	int16_t x348 = -15;
	static volatile int64_t t67 = -46765379431635325LL;

    t67 = ((x345-x346)&(x347/x348));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x349 = INT8_MIN;
	uint32_t x350 = 1286U;
	uint8_t x351 = UINT8_MAX;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t68 = 3LLU;

    t68 = ((x349-x350)&(x351/x352));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x353 = 396588490975725544LLU;
	uint64_t x354 = 9664LLU;
	volatile uint16_t x356 = 3524U;

    t69 = ((x353-x354)&(x355/x356));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x357 = 2197904089430314LLU;
	volatile int8_t x358 = 0;
	uint8_t x359 = UINT8_MAX;
	uint8_t x360 = 62U;
	volatile uint64_t t70 = 8350506271373810LLU;

    t70 = ((x357-x358)&(x359/x360));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x369 = -1;
	volatile uint8_t x370 = UINT8_MAX;
	static int16_t x371 = INT16_MIN;
	uint32_t x372 = 4U;
	volatile uint32_t t71 = 1397U;

    t71 = ((x369-x370)&(x371/x372));

    if (t71 != 1073733632U) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint8_t x373 = 1U;
	uint8_t x374 = 85U;
	int32_t x375 = INT32_MAX;
	int8_t x376 = 4;

    t72 = ((x373-x374)&(x375/x376));

    if (t72 != 536870828) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x377 = UINT8_MAX;
	int8_t x378 = -1;
	int64_t x379 = INT64_MIN;
	volatile int32_t x380 = INT32_MIN;
	int64_t t73 = 106LL;

    t73 = ((x377-x378)&(x379/x380));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x385 = -1;
	int8_t x386 = INT8_MIN;
	volatile int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MIN;

    t74 = ((x385-x386)&(x387/x388));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x398 = -31;
	int32_t x400 = INT32_MAX;
	volatile int32_t t75 = -26990;

    t75 = ((x397-x398)&(x399/x400));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x401 = UINT16_MAX;
	static uint16_t x402 = UINT16_MAX;
	volatile int8_t x403 = -1;
	int16_t x404 = -325;
	volatile int32_t t76 = 5;

    t76 = ((x401-x402)&(x403/x404));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x409 = INT16_MIN;
	uint64_t x410 = 452459597876LLU;
	uint32_t x411 = UINT32_MAX;
	int64_t x412 = -1LL;
	static uint64_t t77 = 6024519LLU;

    t77 = ((x409-x410)&(x411/x412));

    if (t77 != 18446743618443018240LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x413 = INT32_MIN;
	static int8_t x414 = -1;
	int64_t x415 = 6396555635000LL;
	int32_t x416 = 12334344;
	int64_t t78 = 63333147572LL;

    t78 = ((x413-x414)&(x415/x416));

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x417 = INT64_MAX;
	static volatile int8_t x418 = 13;
	static uint64_t x420 = UINT64_MAX;
	static volatile uint64_t t79 = 236729LLU;

    t79 = ((x417-x418)&(x419/x420));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x421 = UINT32_MAX;
	int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MAX;
	uint16_t x424 = UINT16_MAX;
	volatile uint32_t t80 = 117594U;

    t80 = ((x421-x422)&(x423/x424));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x425 = 0U;
	volatile uint16_t x426 = 212U;
	static int8_t x427 = INT8_MIN;
	int32_t x428 = INT32_MAX;
	static volatile int32_t t81 = -71;

    t81 = ((x425-x426)&(x427/x428));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x429 = -25;
	int16_t x430 = INT16_MIN;
	int16_t x431 = INT16_MAX;
	int8_t x432 = INT8_MIN;
	static int32_t t82 = 0;

    t82 = ((x429-x430)&(x431/x432));

    if (t82 != 32513) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x438 = -5;
	int32_t t83 = 12;

    t83 = ((x437-x438)&(x439/x440));

    if (t83 != -5766) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x441 = INT32_MAX;
	int32_t x442 = INT32_MAX;
	static int8_t x443 = INT8_MAX;

    t84 = ((x441-x442)&(x443/x444));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x445 = 428;
	int32_t x446 = -1;
	static int8_t x447 = INT8_MIN;
	uint64_t x448 = 28LLU;
	uint64_t t85 = 61615724LLU;

    t85 = ((x445-x446)&(x447/x448));

    if (t85 != 288LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x457 = -1LL;
	int32_t x459 = INT32_MIN;
	uint64_t x460 = 336709635447655LLU;
	static uint64_t t86 = 4224424501977264209LLU;

    t86 = ((x457-x458)&(x459/x460));

    if (t86 != 22017LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x461 = INT64_MAX;
	int64_t x462 = 234822061LL;
	int32_t x463 = INT32_MIN;
	volatile int32_t x464 = INT32_MAX;

    t87 = ((x461-x462)&(x463/x464));

    if (t87 != 9223372036619953746LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x465 = 1107U;
	volatile int16_t x466 = -1;
	int64_t x467 = 19281445LL;
	volatile int64_t x468 = INT64_MIN;
	volatile int64_t t88 = -88942464384634031LL;

    t88 = ((x465-x466)&(x467/x468));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x469 = 51593;
	int64_t x470 = INT64_MAX;
	int32_t x471 = INT32_MIN;
	int32_t x472 = INT32_MAX;
	static volatile int64_t t89 = 299LL;

    t89 = ((x469-x470)&(x471/x472));

    if (t89 != -9223372036854724214LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x474 = 1;
	uint32_t x476 = 2856U;

    t90 = ((x473-x474)&(x475/x476));

    if (t90 != 751920U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x477 = 25U;
	uint64_t x478 = 123125651553LLU;
	uint8_t x479 = UINT8_MAX;
	uint64_t x480 = 2020270LLU;
	volatile uint64_t t91 = 4030007LLU;

    t91 = ((x477-x478)&(x479/x480));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x489 = -1LL;
	volatile int64_t x491 = INT64_MIN;
	uint8_t x492 = 112U;
	static volatile int64_t t92 = -552829271135968LL;

    t92 = ((x489-x490)&(x491/x492));

    if (t92 != -82351536043360256LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x493 = INT8_MIN;
	static volatile uint8_t x494 = 1U;
	int64_t x495 = -1LL;
	int32_t x496 = -1;
	int64_t t93 = 45900333LL;

    t93 = ((x493-x494)&(x495/x496));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x498 = UINT64_MAX;
	int8_t x499 = 56;
	uint16_t x500 = 5U;
	uint64_t t94 = 197144769LLU;

    t94 = ((x497-x498)&(x499/x500));

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x502 = -213854;
	volatile int64_t x503 = -1LL;
	int32_t x504 = INT32_MAX;
	int64_t t95 = -12LL;

    t95 = ((x501-x502)&(x503/x504));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x505 = UINT16_MAX;
	static int16_t x506 = -1;
	int16_t x507 = -1;
	volatile int64_t x508 = INT64_MAX;

    t96 = ((x505-x506)&(x507/x508));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x509 = INT8_MIN;
	int64_t x510 = -1LL;
	static uint32_t x511 = UINT32_MAX;
	static uint64_t x512 = 12946787LLU;
	uint64_t t97 = 60376134401145080LLU;

    t97 = ((x509-x510)&(x511/x512));

    if (t97 != 257LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x513 = UINT8_MAX;
	int64_t x515 = 122LL;
	int16_t x516 = -6;
	static int64_t t98 = -1708280956LL;

    t98 = ((x513-x514)&(x515/x516));

    if (t98 != -178351818765496LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x517 = INT8_MAX;
	int64_t x519 = 20043962675LL;
	uint64_t x520 = 6548LLU;
	volatile uint64_t t99 = 3953999583803LLU;

    t99 = ((x517-x518)&(x519/x520));

    if (t99 != 281LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x521 = 16934948;
	volatile int8_t x522 = INT8_MIN;
	int32_t x523 = INT32_MAX;
	uint8_t x524 = 122U;
	volatile int32_t t100 = 53;

    t100 = ((x521-x522)&(x523/x524));

    if (t100 != 16777220) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x525 = INT16_MIN;
	volatile int8_t x526 = INT8_MIN;
	int64_t x528 = -1LL;
	volatile uint64_t t101 = 573931289817093258LLU;

    t101 = ((x525-x526)&(x527/x528));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x530 = INT16_MAX;
	static uint16_t x531 = 1U;
	uint32_t x532 = UINT32_MAX;
	uint32_t t102 = 127093U;

    t102 = ((x529-x530)&(x531/x532));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x534 = 17050U;
	uint8_t x535 = 0U;
	static int16_t x536 = INT16_MIN;
	volatile uint32_t t103 = 194516U;

    t103 = ((x533-x534)&(x535/x536));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x537 = 20;
	uint8_t x538 = UINT8_MAX;
	uint64_t x540 = 79919103503870895LLU;
	uint64_t t104 = 14436LLU;

    t104 = ((x537-x538)&(x539/x540));

    if (t104 != 4LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x541 = INT16_MIN;
	int64_t x542 = INT64_MIN;
	volatile int16_t x544 = 250;
	volatile int64_t t105 = 125LL;

    t105 = ((x541-x542)&(x543/x544));

    if (t105 != 9223372036846157824LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x545 = INT32_MIN;
	volatile int64_t x546 = INT64_MIN;
	int8_t x548 = INT8_MAX;
	int64_t t106 = -93155LL;

    t106 = ((x545-x546)&(x547/x548));

    if (t106 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x554 = INT8_MAX;
	uint8_t x556 = 1U;
	uint64_t t107 = 29578011007LLU;

    t107 = ((x553-x554)&(x555/x556));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x561 = 3904221170551177682LLU;
	volatile uint16_t x562 = 12674U;
	static volatile int16_t x563 = 27;
	uint64_t x564 = 39953631473LLU;
	static volatile uint64_t t108 = 143775729714LLU;

    t108 = ((x561-x562)&(x563/x564));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x565 = -161LL;
	int16_t x566 = -94;
	int8_t x567 = -1;

    t109 = ((x565-x566)&(x567/x568));

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x569 = 5603U;
	int8_t x570 = -1;
	uint32_t x571 = 16800158U;
	int64_t t110 = -2403414314649836576LL;

    t110 = ((x569-x570)&(x571/x572));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x577 = INT8_MIN;
	int16_t x579 = INT16_MIN;
	uint16_t x580 = 531U;
	int32_t t111 = 239838101;

    t111 = ((x577-x578)&(x579/x580));

    if (t111 != -65663) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x581 = INT8_MIN;
	int16_t x582 = -1;
	volatile uint32_t x583 = 97718U;

    t112 = ((x581-x582)&(x583/x584));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x585 = INT8_MAX;
	int32_t x586 = 516610;
	int8_t x587 = INT8_MIN;
	int8_t x588 = INT8_MAX;

    t113 = ((x585-x586)&(x587/x588));

    if (t113 != -516483) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x589 = 3U;
	int8_t x590 = INT8_MIN;
	int32_t x591 = 405669;
	uint8_t x592 = 3U;

    t114 = ((x589-x590)&(x591/x592));

    if (t114 != 3U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x593 = UINT64_MAX;
	uint8_t x594 = UINT8_MAX;
	volatile int8_t x595 = INT8_MIN;
	int16_t x596 = -1;
	uint64_t t115 = 15898393LLU;

    t115 = ((x593-x594)&(x595/x596));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x597 = -100488456862LL;
	volatile int32_t x599 = 4457;
	static int32_t x600 = INT32_MIN;

    t116 = ((x597-x598)&(x599/x600));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x601 = INT8_MAX;
	volatile int16_t x602 = INT16_MIN;
	volatile uint64_t x604 = UINT64_MAX;

    t117 = ((x601-x602)&(x603/x604));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x605 = 0;
	int16_t x606 = INT16_MIN;
	int32_t x607 = INT32_MIN;
	int64_t t118 = -2349026891892200954LL;

    t118 = ((x605-x606)&(x607/x608));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x609 = 4399U;
	int8_t x610 = -1;
	volatile int16_t x611 = -1;
	uint16_t x612 = 3U;

    t119 = ((x609-x610)&(x611/x612));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x613 = INT64_MIN;
	int16_t x614 = -323;
	uint8_t x615 = 0U;
	uint64_t x616 = UINT64_MAX;

    t120 = ((x613-x614)&(x615/x616));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x618 = 1U;
	int32_t x619 = 72903817;
	int32_t x620 = -1;
	int32_t t121 = -6;

    t121 = ((x617-x618)&(x619/x620));

    if (t121 != -72904447) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x625 = 18LLU;
	int8_t x626 = -60;
	int64_t x627 = -1LL;
	uint8_t x628 = UINT8_MAX;
	volatile uint64_t t122 = 176800355LLU;

    t122 = ((x625-x626)&(x627/x628));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x629 = -1;
	int16_t x630 = INT16_MIN;
	static int64_t x632 = INT64_MIN;
	int64_t t123 = 65969LL;

    t123 = ((x629-x630)&(x631/x632));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x633 = INT64_MIN;
	static uint64_t t124 = 3509413866LLU;

    t124 = ((x633-x634)&(x635/x636));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x638 = 113U;
	static volatile int32_t x639 = -1;
	static volatile int32_t x640 = INT32_MIN;
	int32_t t125 = 885723838;

    t125 = ((x637-x638)&(x639/x640));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x641 = 47846U;
	volatile int8_t x642 = -25;
	static int32_t x644 = -139;
	uint32_t t126 = 22134U;

    t126 = ((x641-x642)&(x643/x644));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x645 = UINT32_MAX;
	uint64_t x646 = UINT64_MAX;
	int16_t x647 = INT16_MIN;
	volatile uint8_t x648 = UINT8_MAX;
	volatile uint64_t t127 = 10867262439027LLU;

    t127 = ((x645-x646)&(x647/x648));

    if (t127 != 4294967296LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x653 = INT32_MIN;
	static int64_t x654 = -1LL;
	volatile uint16_t x655 = 25U;
	uint8_t x656 = 14U;
	volatile int64_t t128 = -5815LL;

    t128 = ((x653-x654)&(x655/x656));

    if (t128 != 1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x662 = -622415564LL;
	uint64_t x663 = 1096436584586LLU;
	int16_t x664 = -7756;

    t129 = ((x661-x662)&(x663/x664));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x665 = 6713041656330453859LLU;
	int8_t x667 = 26;

    t130 = ((x665-x666)&(x667/x668));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x669 = INT16_MAX;
	int16_t x670 = INT16_MIN;
	int64_t x671 = INT64_MAX;
	static volatile int64_t x672 = -1032049LL;
	static int64_t t131 = 125588299671LL;

    t131 = ((x669-x670)&(x671/x672));

    if (t131 != 37000LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t t132 = -6LL;

    t132 = ((x685-x686)&(x687/x688));

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x690 = -15;
	static volatile int64_t x691 = INT64_MAX;
	int64_t x692 = INT64_MIN;

    t133 = ((x689-x690)&(x691/x692));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x693 = INT32_MIN;
	static int64_t x694 = -1LL;
	int8_t x695 = -1;
	static int8_t x696 = INT8_MIN;
	volatile int64_t t134 = 1722069166LL;

    t134 = ((x693-x694)&(x695/x696));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x698 = INT8_MIN;
	static volatile uint16_t x699 = 46U;
	int32_t x700 = INT32_MAX;
	int64_t t135 = 62LL;

    t135 = ((x697-x698)&(x699/x700));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x702 = -1;
	uint64_t x703 = 10777414246202LLU;
	int32_t x704 = INT32_MIN;

    t136 = ((x701-x702)&(x703/x704));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x705 = 43709;
	volatile int32_t x706 = INT32_MAX;
	int16_t x707 = INT16_MAX;
	uint8_t x708 = UINT8_MAX;
	volatile int32_t t137 = 1;

    t137 = ((x705-x706)&(x707/x708));

    if (t137 != 128) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x709 = INT16_MAX;
	static volatile uint16_t x710 = 3287U;
	volatile uint8_t x711 = 1U;
	int64_t x712 = INT64_MIN;
	int64_t t138 = 1392978686489961LL;

    t138 = ((x709-x710)&(x711/x712));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x714 = INT16_MAX;
	uint64_t x715 = UINT64_MAX;
	volatile int16_t x716 = INT16_MIN;
	volatile uint64_t t139 = 559973244LLU;

    t139 = ((x713-x714)&(x715/x716));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x717 = 1U;
	int16_t x718 = 1637;
	uint64_t x719 = 33588353867995476LLU;
	int32_t x720 = INT32_MIN;
	static uint64_t t140 = 3497088103LLU;

    t140 = ((x717-x718)&(x719/x720));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x721 = INT32_MAX;
	uint8_t x722 = 1U;
	int32_t x723 = INT32_MIN;
	static int8_t x724 = INT8_MAX;

    t141 = ((x721-x722)&(x723/x724));

    if (t141 != 2130574328) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x726 = UINT32_MAX;
	static uint64_t x727 = 2340LLU;
	int64_t x728 = INT64_MIN;

    t142 = ((x725-x726)&(x727/x728));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x729 = UINT16_MAX;
	uint8_t x730 = 0U;
	int8_t x731 = -1;
	volatile int32_t t143 = 16632990;

    t143 = ((x729-x730)&(x731/x732));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x733 = -1;
	int8_t x736 = INT8_MIN;
	volatile int32_t t144 = 19;

    t144 = ((x733-x734)&(x735/x736));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x737 = -1;
	volatile int64_t x738 = -1LL;
	int32_t x739 = 749;
	int64_t t145 = 60606923497LL;

    t145 = ((x737-x738)&(x739/x740));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x741 = 4U;
	static int32_t x742 = 2;
	volatile uint8_t x744 = 17U;
	int32_t t146 = 0;

    t146 = ((x741-x742)&(x743/x744));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x746 = INT64_MIN;
	uint16_t x747 = UINT16_MAX;

    t147 = ((x745-x746)&(x747/x748));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x749 = INT64_MAX;
	volatile int8_t x750 = 3;
	volatile uint32_t x751 = 3059U;
	int8_t x752 = -11;
	int64_t t148 = 281482LL;

    t148 = ((x749-x750)&(x751/x752));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x753 = 255;
	int64_t x754 = 23183786181752LL;
	static volatile int64_t x755 = 378708244812331LL;

    t149 = ((x753-x754)&(x755/x756));

    if (t149 != 22534LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x757 = -2000;
	int32_t x758 = -1;
	int64_t x759 = -118279747LL;
	volatile int64_t t150 = -8818359310LL;

    t150 = ((x757-x758)&(x759/x760));

    if (t150 != -1999LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x761 = 136582039112199LLU;
	static volatile uint8_t x762 = 1U;
	static int32_t x763 = 17029;
	static volatile int32_t x764 = -1;
	uint64_t t151 = 3988282LLU;

    t151 = ((x761-x762)&(x763/x764));

    if (t151 != 136582039111682LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x765 = UINT16_MAX;
	uint16_t x767 = UINT16_MAX;
	int32_t x768 = -4079337;
	int32_t t152 = 14;

    t152 = ((x765-x766)&(x767/x768));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x769 = 28480472505649294LLU;
	int64_t x770 = 4LL;
	int32_t x771 = 95;

    t153 = ((x769-x770)&(x771/x772));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x773 = UINT16_MAX;
	uint32_t x774 = 48989U;
	static uint16_t x775 = UINT16_MAX;
	uint8_t x776 = UINT8_MAX;
	volatile uint32_t t154 = 40139U;

    t154 = ((x773-x774)&(x775/x776));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x777 = -1;
	int32_t x778 = INT32_MAX;
	int64_t x779 = INT64_MIN;
	uint64_t x780 = UINT64_MAX;
	uint64_t t155 = 8934106013025548LLU;

    t155 = ((x777-x778)&(x779/x780));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x782 = -478;
	static volatile int32_t x783 = INT32_MAX;
	int32_t x784 = 1420;
	volatile int32_t t156 = -94035513;

    t156 = ((x781-x782)&(x783/x784));

    if (t156 != 344) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x785 = UINT8_MAX;
	int32_t x786 = INT32_MAX;
	int32_t x787 = -95593268;
	int32_t t157 = -4;

    t157 = ((x785-x786)&(x787/x788));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x790 = 5124824U;
	uint64_t x791 = 309074884732LLU;
	int64_t x792 = -15052217127502355LL;
	static volatile uint64_t t158 = 6718089479LLU;

    t158 = ((x789-x790)&(x791/x792));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x795 = -5886;
	static volatile int64_t x796 = -330539015656LL;
	volatile int64_t t159 = 57592780681395799LL;

    t159 = ((x793-x794)&(x795/x796));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x798 = UINT32_MAX;
	uint32_t t160 = 195088U;

    t160 = ((x797-x798)&(x799/x800));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x809 = UINT8_MAX;
	int16_t x810 = 2;
	int8_t x812 = -1;
	uint32_t t161 = 3424U;

    t161 = ((x809-x810)&(x811/x812));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x813 = -381199LL;
	uint16_t x814 = UINT16_MAX;
	int32_t x816 = INT32_MIN;
	int64_t t162 = -1860LL;

    t162 = ((x813-x814)&(x815/x816));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x819 = 25U;
	volatile int16_t x820 = INT16_MIN;
	static volatile int64_t t163 = -182847770483161229LL;

    t163 = ((x817-x818)&(x819/x820));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x822 = 1858263085LLU;
	int8_t x824 = INT8_MIN;
	uint64_t t164 = 215485104228LLU;

    t164 = ((x821-x822)&(x823/x824));

    if (t164 != 18446744071851321298LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x825 = 0LLU;
	int64_t x827 = -1LL;
	static uint8_t x828 = 6U;
	volatile uint64_t t165 = 3056959280289948LLU;

    t165 = ((x825-x826)&(x827/x828));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x829 = 15808U;
	int64_t x830 = -546347443LL;
	int8_t x831 = INT8_MIN;
	static int64_t x832 = INT64_MIN;
	volatile int64_t t166 = 5LL;

    t166 = ((x829-x830)&(x831/x832));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x833 = 52U;
	int64_t x835 = INT64_MIN;
	static uint16_t x836 = UINT16_MAX;
	int64_t t167 = 159201102LL;

    t167 = ((x833-x834)&(x835/x836));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x837 = INT32_MIN;
	static int8_t x838 = INT8_MIN;
	int16_t x839 = INT16_MAX;
	volatile int8_t x840 = 1;
	volatile int32_t t168 = -63414;

    t168 = ((x837-x838)&(x839/x840));

    if (t168 != 128) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x841 = -6008496190LL;
	static uint64_t x843 = UINT64_MAX;
	uint64_t x844 = UINT64_MAX;
	volatile uint64_t t169 = 13LLU;

    t169 = ((x841-x842)&(x843/x844));

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x849 = INT16_MIN;
	uint64_t x851 = UINT64_MAX;
	uint16_t x852 = 90U;
	uint64_t t170 = 394LLU;

    t170 = ((x849-x850)&(x851/x852));

    if (t170 != 204963823041184472LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x853 = 1037293324330482283LL;
	static int64_t x854 = -1LL;
	static int16_t x855 = INT16_MAX;
	int64_t t171 = 2119032461LL;

    t171 = ((x853-x854)&(x855/x856));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x861 = -1;
	volatile int32_t x862 = -3937;
	uint32_t x863 = 81001U;
	uint32_t x864 = 1898077587U;
	static volatile uint32_t t172 = 7751619U;

    t172 = ((x861-x862)&(x863/x864));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x871 = 51U;
	int64_t x872 = INT64_MAX;
	volatile int64_t t173 = 5LL;

    t173 = ((x869-x870)&(x871/x872));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x877 = 3;
	uint8_t x878 = 1U;
	volatile uint64_t x879 = 197657512781LLU;
	volatile uint64_t t174 = 1733LLU;

    t174 = ((x877-x878)&(x879/x880));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x881 = 8U;
	volatile uint32_t x882 = UINT32_MAX;
	volatile int64_t x883 = -1LL;
	uint64_t x884 = 3728707LLU;
	volatile uint64_t t175 = 47052452126545927LLU;

    t175 = ((x881-x882)&(x883/x884));

    if (t175 != 9LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x885 = INT64_MIN;
	int16_t x886 = INT16_MIN;
	int64_t t176 = 1605045054LL;

    t176 = ((x885-x886)&(x887/x888));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x889 = 0;
	int64_t x890 = INT64_MAX;
	static int64_t x891 = INT64_MIN;
	int32_t x892 = INT32_MAX;
	int64_t t177 = INT64_MIN;

    t177 = ((x889-x890)&(x891/x892));

    if (t177 != INT64_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x894 = -1786360;
	volatile int8_t x896 = -5;
	int32_t t178 = -271;

    t178 = ((x893-x894)&(x895/x896));

    if (t178 != 2000694) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x897 = 15U;
	int8_t x898 = INT8_MAX;
	volatile int16_t x899 = 7;
	volatile int64_t x900 = 6LL;
	volatile int64_t t179 = 148LL;

    t179 = ((x897-x898)&(x899/x900));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x901 = UINT8_MAX;
	int8_t x902 = INT8_MIN;
	uint32_t x903 = 487U;
	static uint64_t x904 = 11013831712844LLU;
	uint64_t t180 = 2629431731668889LLU;

    t180 = ((x901-x902)&(x903/x904));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x905 = UINT16_MAX;
	int8_t x906 = INT8_MIN;
	int64_t x907 = INT64_MIN;
	volatile int64_t t181 = -577298643996567LL;

    t181 = ((x905-x906)&(x907/x908));

    if (t181 != 65656LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x909 = INT8_MIN;
	uint64_t x910 = 267671981LLU;
	uint64_t x911 = UINT64_MAX;
	int8_t x912 = -1;
	uint64_t t182 = 99154267248LLU;

    t182 = ((x909-x910)&(x911/x912));

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x914 = -1;
	static int8_t x915 = INT8_MIN;
	uint64_t x916 = UINT64_MAX;
	uint64_t t183 = 111945571993734474LLU;

    t183 = ((x913-x914)&(x915/x916));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x919 = -1;
	static uint16_t x920 = 13U;
	volatile int64_t t184 = 2011762820LL;

    t184 = ((x917-x918)&(x919/x920));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x921 = 356LLU;
	int64_t x922 = INT64_MIN;
	volatile int32_t x923 = INT32_MIN;
	static int64_t x924 = -1LL;
	volatile uint64_t t185 = 32932928046375LLU;

    t185 = ((x921-x922)&(x923/x924));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x925 = -1LL;
	uint64_t x926 = 2224711617563667LLU;
	int8_t x927 = INT8_MIN;
	int8_t x928 = INT8_MIN;

    t186 = ((x925-x926)&(x927/x928));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x929 = -1LL;
	static int16_t x930 = INT16_MIN;
	uint8_t x931 = UINT8_MAX;
	volatile int64_t t187 = -671010140348391LL;

    t187 = ((x929-x930)&(x931/x932));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x933 = INT32_MIN;
	int64_t x934 = -1LL;
	static uint32_t x935 = 38441U;
	int32_t x936 = 330638263;
	int64_t t188 = 259113553230LL;

    t188 = ((x933-x934)&(x935/x936));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x937 = -1;
	static int16_t x938 = INT16_MAX;
	static uint32_t x939 = 440040U;
	int64_t x940 = INT64_MIN;
	volatile int64_t t189 = 518850LL;

    t189 = ((x937-x938)&(x939/x940));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x949 = 397;
	volatile int16_t x950 = 1;
	int16_t x951 = -1;
	volatile int8_t x952 = 18;
	int32_t t190 = -2146;

    t190 = ((x949-x950)&(x951/x952));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x953 = INT32_MIN;
	volatile int16_t x954 = -1142;
	int64_t x955 = -258986610864LL;
	static int8_t x956 = -1;
	int64_t t191 = 39LL;

    t191 = ((x953-x954)&(x955/x956));

    if (t191 != 257698037808LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x957 = 121U;
	uint16_t x958 = UINT16_MAX;
	int64_t x960 = 607LL;
	volatile int64_t t192 = 0LL;

    t192 = ((x957-x958)&(x959/x960));

    if (t192 != 7012368LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x965 = 561817868449122LL;
	uint8_t x966 = UINT8_MAX;
	int64_t x967 = INT64_MIN;
	int16_t x968 = INT16_MAX;
	static int64_t t193 = -2021483238144448773LL;

    t193 = ((x965-x966)&(x967/x968));

    if (t193 != 280342891738208LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x969 = INT16_MAX;
	int64_t x970 = -1LL;
	int8_t x972 = INT8_MIN;
	int64_t t194 = -54031LL;

    t194 = ((x969-x970)&(x971/x972));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x973 = INT16_MIN;
	volatile int32_t x974 = 250565188;
	volatile int16_t x975 = INT16_MIN;
	int32_t x976 = -1;
	volatile int32_t t195 = 50943;

    t195 = ((x973-x974)&(x975/x976));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x977 = INT8_MAX;
	int64_t x978 = 1185LL;
	volatile int64_t x979 = -49339935622893LL;

    t196 = ((x977-x978)&(x979/x980));

    if (t196 != 22942LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x981 = INT8_MIN;
	static int32_t x982 = INT32_MIN;
	static int64_t x983 = -12524818LL;
	volatile int64_t t197 = 1019342LL;

    t197 = ((x981-x982)&(x983/x984));

    if (t197 != 2147483264LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x988 = UINT16_MAX;
	int64_t t198 = -1741127284863853LL;

    t198 = ((x985-x986)&(x987/x988));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x997 = 105023117513603LLU;
	int32_t x998 = -5128111;
	int64_t x999 = INT64_MAX;
	uint64_t t199 = 3LLU;

    t199 = ((x997-x998)&(x999/x1000));

    if (t199 != 105023122641714LLU) { NG(); } else { ; }
	
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

