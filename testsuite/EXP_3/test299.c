
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

uint32_t x3 = 1U;
uint8_t x5 = UINT8_MAX;
uint64_t x7 = 18876642LLU;
static int8_t x11 = INT8_MIN;
uint16_t x24 = UINT16_MAX;
int64_t x29 = INT64_MIN;
static volatile int64_t x33 = INT64_MIN;
static uint16_t x35 = 1620U;
uint16_t x43 = UINT16_MAX;
int16_t x44 = 14224;
static int8_t x49 = INT8_MAX;
uint32_t t10 = 2846229U;
static volatile int32_t t11 = 5255900;
int8_t x78 = INT8_MIN;
int32_t x79 = -1;
uint64_t x82 = 362590354992LLU;
int32_t x83 = INT32_MIN;
int16_t x84 = INT16_MIN;
int64_t x88 = 36068706373407LL;
int8_t x91 = 1;
int32_t x92 = -1;
int8_t x100 = 0;
int32_t x107 = -8898636;
int32_t x108 = -1;
uint32_t x111 = 67335U;
int64_t x113 = INT64_MIN;
static int32_t x114 = INT32_MAX;
volatile int8_t x117 = 3;
int64_t x127 = -11223606LL;
uint16_t x129 = 20U;
uint8_t x130 = 2U;
static uint8_t x132 = 37U;
volatile int32_t t26 = 220663;
static int64_t x133 = -2483281353LL;
static uint8_t x134 = UINT8_MAX;
volatile int32_t x149 = INT32_MAX;
uint64_t x156 = 4501409129866LLU;
uint64_t x158 = 181052586623LLU;
int8_t x183 = 5;
int32_t x185 = INT32_MIN;
uint64_t t37 = 24664LLU;
int32_t x196 = -1;
static int16_t x208 = INT16_MAX;
volatile int64_t x213 = -1LL;
int8_t x214 = INT8_MAX;
int16_t x219 = -1;
int32_t x222 = INT32_MIN;
uint16_t x224 = UINT16_MAX;
int16_t x225 = INT16_MIN;
int32_t x233 = INT32_MAX;
static volatile int32_t x237 = INT32_MIN;
uint64_t x240 = 8116937743919LLU;
uint64_t t48 = 68864459713LLU;
uint32_t x245 = 640U;
uint64_t x248 = 273930542119282LLU;
volatile int16_t x251 = INT16_MAX;
int32_t x255 = INT32_MIN;
int16_t x276 = -7690;
int8_t x279 = INT8_MIN;
volatile int32_t x280 = 58630;
static uint64_t x281 = 11645834LLU;
volatile uint64_t t58 = 6445645502LLU;
int32_t t59 = 517919;
static volatile int16_t x303 = INT16_MIN;
volatile int32_t t60 = 2081369;
int32_t x305 = INT32_MAX;
volatile uint32_t x308 = UINT32_MAX;
int64_t x309 = INT64_MIN;
int16_t x310 = INT16_MAX;
uint16_t x311 = 192U;
uint16_t x325 = UINT16_MAX;
static volatile int32_t t66 = -602;
int64_t x334 = -1LL;
int32_t x341 = INT32_MIN;
volatile uint32_t x363 = 2U;
int16_t x374 = -3;
uint64_t x377 = 16805718852LLU;
static int32_t x389 = -228036030;
int8_t x390 = INT8_MIN;
uint64_t x392 = UINT64_MAX;
int32_t x400 = -53;
static volatile int8_t x402 = -44;
int32_t x406 = 30575;
int8_t x407 = INT8_MIN;
volatile int32_t t82 = 125;
uint16_t x410 = 177U;
int8_t x414 = 1;
int32_t x418 = -1;
int32_t t86 = 23;
int32_t x432 = -1;
volatile uint8_t x436 = 21U;
uint64_t x437 = UINT64_MAX;
int32_t x441 = INT32_MAX;
uint64_t x447 = 53699235LLU;
volatile uint64_t t91 = 3952463108LLU;
static int16_t x450 = INT16_MIN;
uint32_t x451 = UINT32_MAX;
static uint64_t x454 = 858443265LLU;
uint64_t t93 = 6540244288790LLU;
int16_t x464 = INT16_MAX;
volatile int64_t t96 = 214991911LL;
int16_t x470 = INT16_MIN;
uint64_t x471 = UINT64_MAX;
static int16_t x474 = -1;
int8_t x476 = 1;
static volatile int64_t x478 = -1LL;
int64_t x479 = 1LL;
int8_t x481 = INT8_MIN;
int16_t x488 = 0;
int32_t x494 = INT32_MAX;
static int32_t x495 = INT32_MAX;
static uint64_t t103 = 233LLU;
static uint16_t x516 = 3636U;
static int16_t x527 = -91;
int32_t x531 = INT32_MIN;
uint64_t x544 = 5414311219223LLU;
int64_t x554 = -1LL;
uint8_t x557 = UINT8_MAX;
int64_t t115 = 10LL;
static int16_t x561 = -1;
int32_t x562 = INT32_MIN;
int8_t x563 = 0;
volatile int32_t t116 = -1024;
static int32_t t117 = -27;
static volatile uint64_t x569 = UINT64_MAX;
static int16_t x572 = INT16_MIN;
static int32_t t118 = 3;
int8_t x578 = INT8_MIN;
volatile int16_t x579 = -1;
int32_t x583 = INT32_MIN;
uint32_t x591 = 785422U;
uint32_t t121 = 3922U;
int16_t x595 = -9;
volatile uint64_t x617 = UINT64_MAX;
uint8_t x622 = 36U;
int32_t x624 = INT32_MAX;
volatile int16_t x625 = INT16_MIN;
int8_t x629 = -1;
int64_t t130 = -1292920169480483LL;
static int32_t x638 = INT32_MIN;
int8_t x649 = -1;
uint8_t x663 = 5U;
int32_t t136 = 104264;
int64_t x671 = 26868752876LL;
uint8_t x672 = 4U;
static int16_t x692 = -18;
int64_t x698 = INT64_MAX;
int64_t t142 = 2298797040LL;
int16_t x701 = -15;
int16_t x708 = 5219;
int32_t x711 = -1;
int16_t x714 = -1;
static volatile uint8_t x716 = 5U;
uint64_t t146 = 9913860199896176LLU;
uint32_t t148 = 1U;
int8_t x734 = -3;
volatile uint32_t x742 = UINT32_MAX;
int64_t x747 = -1251475514559LL;
int32_t x763 = -10085675;
uint8_t x764 = 0U;
volatile int16_t x766 = 985;
static volatile uint8_t x768 = 1U;
int8_t x771 = 0;
int8_t x775 = -1;
volatile int8_t x778 = INT8_MAX;
volatile uint8_t x784 = 31U;
int64_t x800 = -1972566962823LL;
static uint32_t x801 = UINT32_MAX;
volatile uint8_t x815 = 59U;
uint32_t t164 = 248398516U;
uint8_t x818 = 106U;
volatile uint32_t x823 = UINT32_MAX;
volatile int64_t t166 = -497LL;
int8_t x825 = -9;
int64_t t167 = -544841600191779626LL;
volatile int32_t t168 = -143628472;
static int32_t t169 = 32;
volatile uint8_t x842 = UINT8_MAX;
uint16_t x844 = 706U;
volatile int32_t x851 = INT32_MIN;
volatile uint32_t x852 = 3915U;
int8_t x859 = 0;
volatile int8_t x860 = -2;
static int32_t x862 = INT32_MIN;
int16_t x871 = INT16_MAX;
static int64_t x873 = INT64_MIN;
static int8_t x874 = INT8_MIN;
volatile int32_t x879 = INT32_MIN;
int32_t t179 = 1657370;
volatile int8_t x882 = INT8_MIN;
volatile int8_t x883 = -62;
int64_t t181 = -956449LL;
volatile uint64_t x891 = UINT64_MAX;
static uint64_t t182 = 13311355LLU;
int64_t x894 = 57163LL;
volatile int16_t x895 = 4136;
int8_t x901 = INT8_MAX;
int16_t x904 = INT16_MIN;
static int32_t x915 = -228;
volatile int64_t x917 = INT64_MIN;
uint64_t x923 = 1514611288LLU;
uint8_t x939 = UINT8_MAX;
static volatile int32_t t193 = 7795;
uint32_t x943 = 2013630U;
static uint16_t x944 = 7733U;
int64_t x958 = INT64_MAX;
int8_t x964 = INT8_MIN;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int32_t x2 = -13;
	static int32_t x4 = INT32_MIN;
	uint32_t t0 = 280413724U;

    t0 = ((x1==x2)%(x3-x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x6 = UINT16_MAX;
	int8_t x8 = INT8_MAX;
	volatile uint64_t t1 = 89255LLU;

    t1 = ((x5==x6)%(x7-x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -409329;
	uint32_t x10 = 2U;
	int8_t x12 = -2;
	volatile int32_t t2 = 92625490;

    t2 = ((x9==x10)%(x11-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	int32_t x14 = INT32_MIN;
	volatile int32_t x15 = -3;
	static uint16_t x16 = 347U;
	volatile int32_t t3 = -760;

    t3 = ((x13==x14)%(x15-x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x21 = -1LL;
	static int32_t x22 = INT32_MIN;
	static int16_t x23 = INT16_MAX;
	int32_t t4 = 2517195;

    t4 = ((x21==x22)%(x23-x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x30 = 31308399LL;
	int64_t x31 = -7707218920LL;
	volatile int64_t x32 = -1LL;
	static int64_t t5 = -81957607691137LL;

    t5 = ((x29==x30)%(x31-x32));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x34 = INT64_MAX;
	int16_t x36 = -52;
	volatile int32_t t6 = 1;

    t6 = ((x33==x34)%(x35-x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x41 = -1;
	volatile int32_t x42 = -27442203;
	volatile int32_t t7 = -12948;

    t7 = ((x41==x42)%(x43-x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x45 = 1531LLU;
	int8_t x46 = INT8_MIN;
	uint64_t x47 = 26421981032638988LLU;
	int64_t x48 = 28300546431458334LL;
	volatile uint64_t t8 = 1009476LLU;

    t8 = ((x45==x46)%(x47-x48));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x50 = INT32_MIN;
	int16_t x51 = 1387;
	int64_t x52 = -2612582LL;
	int64_t t9 = -100750018145146515LL;

    t9 = ((x49==x50)%(x51-x52));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x53 = INT8_MIN;
	volatile uint8_t x54 = 42U;
	uint32_t x55 = 61U;
	int16_t x56 = INT16_MAX;

    t10 = ((x53==x54)%(x55-x56));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x57 = -144861125;
	int8_t x58 = -1;
	int8_t x59 = -1;
	static int16_t x60 = INT16_MAX;

    t11 = ((x57==x58)%(x59-x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x65 = INT16_MIN;
	int64_t x66 = -1LL;
	static int16_t x67 = -38;
	int32_t x68 = 37672;
	volatile int32_t t12 = 7688123;

    t12 = ((x65==x66)%(x67-x68));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x69 = INT32_MAX;
	uint64_t x70 = 1680845519066LLU;
	int64_t x71 = -497LL;
	int8_t x72 = INT8_MAX;
	static int64_t t13 = -127437611817LL;

    t13 = ((x69==x70)%(x71-x72));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x77 = UINT8_MAX;
	volatile int64_t x80 = 5437545576373LL;
	volatile int64_t t14 = -14818806LL;

    t14 = ((x77==x78)%(x79-x80));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x81 = -1;
	int32_t t15 = 2;

    t15 = ((x81==x82)%(x83-x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x85 = -12;
	uint8_t x86 = UINT8_MAX;
	int8_t x87 = INT8_MIN;
	volatile int64_t t16 = -4844LL;

    t16 = ((x85==x86)%(x87-x88));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x89 = 51194;
	int32_t x90 = INT32_MIN;
	volatile int32_t t17 = -2634;

    t17 = ((x89==x90)%(x91-x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x97 = -25640175;
	int32_t x98 = INT32_MAX;
	static volatile int32_t x99 = 55962849;
	volatile int32_t t18 = 5935726;

    t18 = ((x97==x98)%(x99-x100));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x101 = INT64_MIN;
	int8_t x102 = -1;
	uint32_t x103 = 49815U;
	int16_t x104 = INT16_MAX;
	uint32_t t19 = 4008U;

    t19 = ((x101==x102)%(x103-x104));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x105 = INT64_MIN;
	int64_t x106 = INT64_MIN;
	int32_t t20 = -4455524;

    t20 = ((x105==x106)%(x107-x108));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x109 = 242624934391LL;
	uint32_t x110 = UINT32_MAX;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t21 = 1U;

    t21 = ((x109==x110)%(x111-x112));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x115 = -1LL;
	uint32_t x116 = 472U;
	int64_t t22 = 788944739140325934LL;

    t22 = ((x113==x114)%(x115-x116));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x118 = UINT32_MAX;
	static int16_t x119 = INT16_MIN;
	int16_t x120 = -1;
	volatile int32_t t23 = -48;

    t23 = ((x117==x118)%(x119-x120));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x121 = INT32_MAX;
	uint16_t x122 = 0U;
	volatile int32_t x123 = INT32_MIN;
	int32_t x124 = -826927;
	int32_t t24 = 228;

    t24 = ((x121==x122)%(x123-x124));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x125 = 94U;
	volatile int64_t x126 = INT64_MIN;
	uint8_t x128 = 53U;
	volatile int64_t t25 = -262LL;

    t25 = ((x125==x126)%(x127-x128));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x131 = -1;

    t26 = ((x129==x130)%(x131-x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x135 = INT32_MAX;
	uint16_t x136 = 12295U;
	int32_t t27 = 994146833;

    t27 = ((x133==x134)%(x135-x136));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x137 = -20;
	volatile int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MIN;
	int64_t t28 = 3748596722221LL;

    t28 = ((x137==x138)%(x139-x140));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x141 = INT32_MAX;
	volatile uint16_t x142 = UINT16_MAX;
	uint16_t x143 = UINT16_MAX;
	int16_t x144 = INT16_MAX;
	int32_t t29 = -4150;

    t29 = ((x141==x142)%(x143-x144));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x145 = 226;
	uint8_t x146 = UINT8_MAX;
	volatile uint8_t x147 = 3U;
	static uint64_t x148 = 35453705643151352LLU;
	volatile uint64_t t30 = 107418LLU;

    t30 = ((x145==x146)%(x147-x148));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x150 = 6547939U;
	uint32_t x151 = 971254164U;
	uint16_t x152 = 5U;
	volatile uint32_t t31 = 5991030U;

    t31 = ((x149==x150)%(x151-x152));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x153 = INT64_MAX;
	static volatile uint16_t x154 = 3788U;
	static uint32_t x155 = UINT32_MAX;
	volatile uint64_t t32 = 447417848504125768LLU;

    t32 = ((x153==x154)%(x155-x156));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x157 = 4U;
	volatile int32_t x159 = INT32_MIN;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t33 = 48U;

    t33 = ((x157==x158)%(x159-x160));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x161 = 484954686311014LL;
	uint16_t x162 = UINT16_MAX;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = 3U;
	volatile int32_t t34 = -29333118;

    t34 = ((x161==x162)%(x163-x164));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x177 = 23163092717491LL;
	volatile uint32_t x178 = 11489124U;
	uint8_t x179 = 18U;
	uint8_t x180 = 114U;
	volatile int32_t t35 = -35;

    t35 = ((x177==x178)%(x179-x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x181 = -1LL;
	int16_t x182 = INT16_MAX;
	static uint16_t x184 = UINT16_MAX;
	volatile int32_t t36 = 1203481;

    t36 = ((x181==x182)%(x183-x184));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MAX;
	uint64_t x188 = 44LLU;

    t37 = ((x185==x186)%(x187-x188));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x193 = -12;
	int8_t x194 = INT8_MIN;
	int16_t x195 = -4930;
	volatile int32_t t38 = 9;

    t38 = ((x193==x194)%(x195-x196));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x197 = -1;
	uint64_t x198 = 2201263835LLU;
	int32_t x199 = -32809561;
	volatile uint64_t x200 = 125270817048779LLU;
	volatile uint64_t t39 = 130391593647LLU;

    t39 = ((x197==x198)%(x199-x200));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint64_t x201 = UINT64_MAX;
	static int64_t x202 = 14966LL;
	int64_t x203 = -1LL;
	int32_t x204 = INT32_MIN;
	int64_t t40 = -17229029749358956LL;

    t40 = ((x201==x202)%(x203-x204));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x205 = 5806914LLU;
	int8_t x206 = 1;
	static volatile uint32_t x207 = 843U;
	uint32_t t41 = 4340569U;

    t41 = ((x205==x206)%(x207-x208));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x215 = -1LL;
	static int16_t x216 = INT16_MIN;
	int64_t t42 = -4964062019303843LL;

    t42 = ((x213==x214)%(x215-x216));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x217 = -1;
	int16_t x218 = 216;
	volatile int16_t x220 = -162;
	int32_t t43 = 1;

    t43 = ((x217==x218)%(x219-x220));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x221 = -3837;
	static int16_t x223 = INT16_MAX;
	volatile int32_t t44 = -3;

    t44 = ((x221==x222)%(x223-x224));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x226 = INT8_MAX;
	int8_t x227 = -1;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t45 = -162;

    t45 = ((x225==x226)%(x227-x228));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x229 = -1;
	int16_t x230 = -1;
	int64_t x231 = 11039LL;
	int64_t x232 = 132311014LL;
	int64_t t46 = 6061LL;

    t46 = ((x229==x230)%(x231-x232));

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x234 = INT8_MAX;
	int8_t x235 = INT8_MIN;
	uint32_t x236 = 1U;
	uint32_t t47 = 5U;

    t47 = ((x233==x234)%(x235-x236));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x238 = 1U;
	int32_t x239 = -1;

    t48 = ((x237==x238)%(x239-x240));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x246 = -1;
	int32_t x247 = INT32_MIN;
	volatile uint64_t t49 = 79884453847LLU;

    t49 = ((x245==x246)%(x247-x248));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x249 = -1;
	int16_t x250 = INT16_MIN;
	uint8_t x252 = 1U;
	volatile int32_t t50 = 516863;

    t50 = ((x249==x250)%(x251-x252));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x253 = INT64_MAX;
	volatile int8_t x254 = INT8_MAX;
	static int8_t x256 = INT8_MIN;
	int32_t t51 = -109793675;

    t51 = ((x253==x254)%(x255-x256));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x257 = INT32_MIN;
	uint32_t x258 = 2701400U;
	uint8_t x259 = 12U;
	uint64_t x260 = 183LLU;
	uint64_t t52 = 668972763074LLU;

    t52 = ((x257==x258)%(x259-x260));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x261 = 4;
	uint32_t x262 = UINT32_MAX;
	int64_t x263 = -1LL;
	volatile int16_t x264 = 774;
	volatile int64_t t53 = 1276941803LL;

    t53 = ((x261==x262)%(x263-x264));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x265 = -7366;
	int8_t x266 = INT8_MIN;
	int16_t x267 = 442;
	int32_t x268 = -108540;
	volatile int32_t t54 = 2910427;

    t54 = ((x265==x266)%(x267-x268));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x273 = 62110U;
	static int64_t x274 = -1LL;
	volatile int32_t x275 = -17;
	int32_t t55 = 22303;

    t55 = ((x273==x274)%(x275-x276));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x277 = INT32_MIN;
	int32_t x278 = -1;
	volatile int32_t t56 = 0;

    t56 = ((x277==x278)%(x279-x280));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x282 = 89;
	uint32_t x283 = 98U;
	int64_t x284 = -280279320LL;
	volatile int64_t t57 = -10848919138480LL;

    t57 = ((x281==x282)%(x283-x284));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x293 = -1LL;
	uint16_t x294 = UINT16_MAX;
	uint64_t x295 = 6974566713474901LLU;
	volatile int8_t x296 = INT8_MIN;

    t58 = ((x293==x294)%(x295-x296));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x297 = 201766U;
	uint16_t x298 = 7568U;
	volatile int32_t x299 = INT32_MIN;
	int32_t x300 = -1;

    t59 = ((x297==x298)%(x299-x300));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x301 = INT64_MAX;
	static int8_t x302 = -7;
	volatile uint16_t x304 = UINT16_MAX;

    t60 = ((x301==x302)%(x303-x304));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x306 = UINT16_MAX;
	int8_t x307 = -25;
	volatile uint32_t t61 = 0U;

    t61 = ((x305==x306)%(x307-x308));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x312 = UINT32_MAX;
	static volatile uint32_t t62 = 3520383U;

    t62 = ((x309==x310)%(x311-x312));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint64_t x313 = 2LLU;
	int16_t x314 = 1;
	volatile int32_t x315 = -2212;
	int16_t x316 = INT16_MAX;
	volatile int32_t t63 = 5896;

    t63 = ((x313==x314)%(x315-x316));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x317 = 2U;
	uint32_t x318 = UINT32_MAX;
	static int16_t x319 = -1;
	volatile int16_t x320 = 1547;
	volatile int32_t t64 = -2938167;

    t64 = ((x317==x318)%(x319-x320));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x321 = 30U;
	uint16_t x322 = 22U;
	static uint64_t x323 = 31784LLU;
	uint64_t x324 = 141LLU;
	uint64_t t65 = 1962714LLU;

    t65 = ((x321==x322)%(x323-x324));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x326 = INT64_MIN;
	int16_t x327 = -1;
	volatile int8_t x328 = INT8_MIN;

    t66 = ((x325==x326)%(x327-x328));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x333 = INT8_MAX;
	static int64_t x335 = INT64_MIN;
	int32_t x336 = -1;
	volatile int64_t t67 = 818710157106706018LL;

    t67 = ((x333==x334)%(x335-x336));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x337 = 13U;
	int64_t x338 = INT64_MAX;
	uint16_t x339 = 191U;
	int16_t x340 = 2015;
	int32_t t68 = 2638;

    t68 = ((x337==x338)%(x339-x340));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x342 = 16275875LLU;
	uint8_t x343 = UINT8_MAX;
	static volatile uint8_t x344 = 2U;
	int32_t t69 = -58193342;

    t69 = ((x341==x342)%(x343-x344));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x345 = -4422775748LL;
	int16_t x346 = -1;
	int32_t x347 = 62767831;
	volatile int32_t x348 = -1;
	int32_t t70 = -674;

    t70 = ((x345==x346)%(x347-x348));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x349 = INT16_MIN;
	int32_t x350 = -1;
	uint32_t x351 = 13334U;
	static volatile int8_t x352 = INT8_MAX;
	uint32_t t71 = 3906083U;

    t71 = ((x349==x350)%(x351-x352));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x361 = 36U;
	static int16_t x362 = -125;
	int8_t x364 = INT8_MAX;
	volatile uint32_t t72 = 143021U;

    t72 = ((x361==x362)%(x363-x364));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x365 = 291999965LLU;
	uint32_t x366 = UINT32_MAX;
	static uint16_t x367 = 2040U;
	int8_t x368 = INT8_MIN;
	static int32_t t73 = -1;

    t73 = ((x365==x366)%(x367-x368));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x369 = 1318U;
	int64_t x370 = 3325521533860LL;
	uint64_t x371 = 2501352LLU;
	uint64_t x372 = 10198LLU;
	uint64_t t74 = 2108146296598861LLU;

    t74 = ((x369==x370)%(x371-x372));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x373 = 856U;
	volatile uint64_t x375 = 360443038681894346LLU;
	int64_t x376 = INT64_MIN;
	static uint64_t t75 = 84880452528203LLU;

    t75 = ((x373==x374)%(x375-x376));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x378 = INT8_MIN;
	uint8_t x379 = UINT8_MAX;
	int8_t x380 = INT8_MIN;
	volatile int32_t t76 = 25579;

    t76 = ((x377==x378)%(x379-x380));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x385 = 120113922LLU;
	int8_t x386 = INT8_MIN;
	volatile uint8_t x387 = 2U;
	int32_t x388 = 733889980;
	int32_t t77 = 24079405;

    t77 = ((x385==x386)%(x387-x388));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x391 = INT32_MAX;
	uint64_t t78 = 0LLU;

    t78 = ((x389==x390)%(x391-x392));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x393 = -6390547263LL;
	uint64_t x394 = UINT64_MAX;
	uint32_t x395 = UINT32_MAX;
	int16_t x396 = INT16_MIN;
	volatile uint32_t t79 = 2593U;

    t79 = ((x393==x394)%(x395-x396));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x397 = 2;
	volatile uint16_t x398 = 67U;
	static volatile int16_t x399 = 1979;
	int32_t t80 = 1;

    t80 = ((x397==x398)%(x399-x400));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x401 = 61760U;
	int32_t x403 = 71;
	int64_t x404 = INT64_MAX;
	int64_t t81 = 1037898620821013LL;

    t81 = ((x401==x402)%(x403-x404));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x405 = 2987U;
	uint8_t x408 = 67U;

    t82 = ((x405==x406)%(x407-x408));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x409 = -55373302LL;
	int16_t x411 = -1;
	int8_t x412 = INT8_MIN;
	volatile int32_t t83 = 17;

    t83 = ((x409==x410)%(x411-x412));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x413 = -1;
	int64_t x415 = -1LL;
	int32_t x416 = INT32_MIN;
	int64_t t84 = -120970070403371LL;

    t84 = ((x413==x414)%(x415-x416));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x417 = -3223898;
	uint8_t x419 = UINT8_MAX;
	static int8_t x420 = -1;
	int32_t t85 = -306807;

    t85 = ((x417==x418)%(x419-x420));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x425 = UINT32_MAX;
	int64_t x426 = INT64_MIN;
	volatile uint16_t x427 = 33U;
	int16_t x428 = -12697;

    t86 = ((x425==x426)%(x427-x428));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x429 = 1;
	int16_t x430 = INT16_MIN;
	static int8_t x431 = INT8_MIN;
	volatile int32_t t87 = 525899438;

    t87 = ((x429==x430)%(x431-x432));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x433 = -1LL;
	uint16_t x434 = UINT16_MAX;
	volatile int16_t x435 = INT16_MIN;
	int32_t t88 = 324568;

    t88 = ((x433==x434)%(x435-x436));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x438 = UINT32_MAX;
	static int32_t x439 = INT32_MAX;
	int64_t x440 = INT64_MAX;
	int64_t t89 = 7398336LL;

    t89 = ((x437==x438)%(x439-x440));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x442 = INT16_MIN;
	int16_t x443 = 1;
	int16_t x444 = INT16_MIN;
	volatile int32_t t90 = 275696587;

    t90 = ((x441==x442)%(x443-x444));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x445 = INT8_MAX;
	volatile int8_t x446 = -1;
	int32_t x448 = 289011;

    t91 = ((x445==x446)%(x447-x448));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x449 = INT16_MIN;
	volatile int32_t x452 = 6084681;
	volatile uint32_t t92 = 82U;

    t92 = ((x449==x450)%(x451-x452));

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x453 = 122181132975026354LL;
	int64_t x455 = 308895808LL;
	uint64_t x456 = UINT64_MAX;

    t93 = ((x453==x454)%(x455-x456));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x457 = -123179;
	volatile uint64_t x458 = 9038233LLU;
	static volatile int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MAX;
	static volatile int32_t t94 = 13289345;

    t94 = ((x457==x458)%(x459-x460));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x461 = INT16_MIN;
	int32_t x462 = -1312681;
	uint8_t x463 = 7U;
	int32_t t95 = 2;

    t95 = ((x461==x462)%(x463-x464));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x465 = 11U;
	int16_t x466 = -1;
	static int64_t x467 = 544432182LL;
	static int8_t x468 = INT8_MAX;

    t96 = ((x465==x466)%(x467-x468));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x469 = -1;
	static int8_t x472 = INT8_MAX;
	volatile uint64_t t97 = 32974LLU;

    t97 = ((x469==x470)%(x471-x472));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x473 = -1;
	static int8_t x475 = INT8_MIN;
	static int32_t t98 = -57;

    t98 = ((x473==x474)%(x475-x476));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x477 = -1;
	int8_t x480 = INT8_MIN;
	static volatile int64_t t99 = 190833778345258LL;

    t99 = ((x477==x478)%(x479-x480));

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x482 = INT16_MIN;
	int16_t x483 = 1;
	static int8_t x484 = INT8_MIN;
	int32_t t100 = -419049;

    t100 = ((x481==x482)%(x483-x484));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x485 = -8983683989166086LL;
	int16_t x486 = INT16_MAX;
	int32_t x487 = -1;
	volatile int32_t t101 = -1139248;

    t101 = ((x485==x486)%(x487-x488));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x493 = 403;
	static int16_t x496 = 3;
	static int32_t t102 = 179;

    t102 = ((x493==x494)%(x495-x496));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x505 = -1;
	static int8_t x506 = INT8_MIN;
	uint64_t x507 = 4008600486LLU;
	static volatile int16_t x508 = 361;

    t103 = ((x505==x506)%(x507-x508));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x513 = -1;
	uint8_t x514 = UINT8_MAX;
	uint8_t x515 = UINT8_MAX;
	int32_t t104 = 6514;

    t104 = ((x513==x514)%(x515-x516));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x517 = INT64_MAX;
	static volatile uint64_t x518 = 2189754LLU;
	int64_t x519 = -1LL;
	int64_t x520 = 816LL;
	static volatile int64_t t105 = -103264879LL;

    t105 = ((x517==x518)%(x519-x520));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x521 = 2164U;
	uint8_t x522 = UINT8_MAX;
	int8_t x523 = 19;
	static int16_t x524 = INT16_MAX;
	volatile int32_t t106 = 12127;

    t106 = ((x521==x522)%(x523-x524));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x525 = 7411U;
	int32_t x526 = -51868;
	int64_t x528 = INT64_MIN;
	int64_t t107 = -829LL;

    t107 = ((x525==x526)%(x527-x528));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x529 = INT16_MIN;
	uint64_t x530 = 6659LLU;
	uint64_t x532 = 6801144612LLU;
	volatile uint64_t t108 = 6360927437LLU;

    t108 = ((x529==x530)%(x531-x532));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x533 = -64874;
	volatile int8_t x534 = -1;
	uint8_t x535 = 82U;
	static uint64_t x536 = UINT64_MAX;
	uint64_t t109 = 12040136456512LLU;

    t109 = ((x533==x534)%(x535-x536));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x537 = INT16_MAX;
	uint16_t x538 = 4668U;
	static uint64_t x539 = 235783958LLU;
	volatile int16_t x540 = -1;
	volatile uint64_t t110 = 21456714342461311LLU;

    t110 = ((x537==x538)%(x539-x540));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x541 = INT8_MAX;
	volatile int16_t x542 = -31;
	static int16_t x543 = INT16_MIN;
	uint64_t t111 = 881313240LLU;

    t111 = ((x541==x542)%(x543-x544));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x545 = -1;
	uint64_t x546 = UINT64_MAX;
	int8_t x547 = -1;
	volatile int16_t x548 = INT16_MIN;
	int32_t t112 = 102173248;

    t112 = ((x545==x546)%(x547-x548));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x549 = -1;
	static int16_t x550 = INT16_MAX;
	int8_t x551 = INT8_MIN;
	int64_t x552 = INT64_MIN;
	int64_t t113 = -2LL;

    t113 = ((x549==x550)%(x551-x552));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x553 = -1;
	int8_t x555 = -1;
	int64_t x556 = INT64_MIN;
	int64_t t114 = -1049LL;

    t114 = ((x553==x554)%(x555-x556));

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x558 = 0U;
	int64_t x559 = -1LL;
	volatile uint16_t x560 = UINT16_MAX;

    t115 = ((x557==x558)%(x559-x560));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x564 = 15;

    t116 = ((x561==x562)%(x563-x564));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x565 = 2U;
	int32_t x566 = -1;
	static volatile int32_t x567 = -1;
	int16_t x568 = 411;

    t117 = ((x565==x566)%(x567-x568));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x570 = 7;
	volatile int8_t x571 = 10;

    t118 = ((x569==x570)%(x571-x572));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x577 = INT8_MAX;
	uint32_t x580 = 4417U;
	volatile uint32_t t119 = 33139U;

    t119 = ((x577==x578)%(x579-x580));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x581 = -64067;
	int64_t x582 = INT64_MAX;
	int8_t x584 = INT8_MIN;
	volatile int32_t t120 = 24383155;

    t120 = ((x581==x582)%(x583-x584));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x589 = 886;
	int64_t x590 = -249989894LL;
	int8_t x592 = INT8_MIN;

    t121 = ((x589==x590)%(x591-x592));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x593 = 0U;
	uint16_t x594 = UINT16_MAX;
	static volatile int64_t x596 = 1543LL;
	volatile int64_t t122 = 4364LL;

    t122 = ((x593==x594)%(x595-x596));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x601 = -1LL;
	static uint64_t x602 = 600479848428067LLU;
	int16_t x603 = INT16_MAX;
	volatile uint32_t x604 = UINT32_MAX;
	uint32_t t123 = 1206U;

    t123 = ((x601==x602)%(x603-x604));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x605 = -205128333082338403LL;
	volatile int32_t x606 = INT32_MIN;
	volatile int64_t x607 = -1LL;
	volatile int16_t x608 = INT16_MIN;
	volatile int64_t t124 = -23604369933057LL;

    t124 = ((x605==x606)%(x607-x608));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x609 = -464418958001796LL;
	volatile int64_t x610 = -1LL;
	int16_t x611 = INT16_MAX;
	static int32_t x612 = INT32_MAX;
	int32_t t125 = -5640990;

    t125 = ((x609==x610)%(x611-x612));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x618 = INT8_MIN;
	uint16_t x619 = 31U;
	uint16_t x620 = 814U;
	static int32_t t126 = -58124;

    t126 = ((x617==x618)%(x619-x620));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x621 = UINT64_MAX;
	uint64_t x623 = UINT64_MAX;
	volatile uint64_t t127 = 889071931050443244LLU;

    t127 = ((x621==x622)%(x623-x624));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x626 = 24722LLU;
	int32_t x627 = -47930548;
	int16_t x628 = INT16_MIN;
	volatile int32_t t128 = 2058;

    t128 = ((x625==x626)%(x627-x628));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x630 = INT64_MIN;
	volatile uint32_t x631 = UINT32_MAX;
	static uint16_t x632 = 2233U;
	volatile uint32_t t129 = 1001147U;

    t129 = ((x629==x630)%(x631-x632));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x633 = UINT64_MAX;
	uint8_t x634 = 90U;
	int32_t x635 = -5117;
	volatile int64_t x636 = -3789LL;

    t130 = ((x633==x634)%(x635-x636));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x637 = -1;
	uint32_t x639 = 3U;
	int16_t x640 = -1;
	uint32_t t131 = 5U;

    t131 = ((x637==x638)%(x639-x640));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x645 = -27425025223169247LL;
	int64_t x646 = -8049335LL;
	uint8_t x647 = 90U;
	int8_t x648 = -1;
	int32_t t132 = -21590769;

    t132 = ((x645==x646)%(x647-x648));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x650 = 22811230237LLU;
	uint32_t x651 = 23157527U;
	int32_t x652 = -234;
	uint32_t t133 = 1219455082U;

    t133 = ((x649==x650)%(x651-x652));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x653 = UINT64_MAX;
	static int32_t x654 = -1480;
	static int64_t x655 = 7LL;
	static uint16_t x656 = UINT16_MAX;
	int64_t t134 = -5197935LL;

    t134 = ((x653==x654)%(x655-x656));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x657 = 7U;
	uint16_t x658 = 12U;
	uint16_t x659 = UINT16_MAX;
	uint32_t x660 = 193U;
	static uint32_t t135 = 1682696U;

    t135 = ((x657==x658)%(x659-x660));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x661 = 6502672600LL;
	int32_t x662 = -1;
	volatile int16_t x664 = INT16_MIN;

    t136 = ((x661==x662)%(x663-x664));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x665 = -1;
	int64_t x666 = INT64_MIN;
	uint8_t x667 = 56U;
	int32_t x668 = 2;
	int32_t t137 = -13;

    t137 = ((x665==x666)%(x667-x668));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x669 = 847936001LL;
	static volatile int64_t x670 = -70185542667475676LL;
	volatile int64_t t138 = 5300450342LL;

    t138 = ((x669==x670)%(x671-x672));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x673 = 0U;
	uint8_t x674 = 0U;
	volatile int16_t x675 = INT16_MIN;
	int64_t x676 = INT64_MIN;
	int64_t t139 = -2130288989422660329LL;

    t139 = ((x673==x674)%(x675-x676));

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x677 = INT8_MAX;
	int16_t x678 = -3;
	uint8_t x679 = UINT8_MAX;
	uint16_t x680 = 1U;
	volatile int32_t t140 = -19176;

    t140 = ((x677==x678)%(x679-x680));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x689 = INT64_MAX;
	static uint32_t x690 = UINT32_MAX;
	static volatile uint32_t x691 = 1U;
	volatile uint32_t t141 = 6U;

    t141 = ((x689==x690)%(x691-x692));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x697 = INT64_MIN;
	int8_t x699 = -1;
	int64_t x700 = INT64_MAX;

    t142 = ((x697==x698)%(x699-x700));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x702 = INT8_MIN;
	int32_t x703 = 219;
	uint32_t x704 = 4434U;
	uint32_t t143 = 4017942U;

    t143 = ((x701==x702)%(x703-x704));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x705 = INT16_MIN;
	uint64_t x706 = 16424657365LLU;
	uint16_t x707 = UINT16_MAX;
	int32_t t144 = -14302;

    t144 = ((x705==x706)%(x707-x708));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x709 = 27U;
	uint64_t x710 = UINT64_MAX;
	int64_t x712 = INT64_MIN;
	volatile int64_t t145 = 1LL;

    t145 = ((x709==x710)%(x711-x712));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x713 = 2362U;
	static uint64_t x715 = UINT64_MAX;

    t146 = ((x713==x714)%(x715-x716));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x725 = 0LLU;
	uint32_t x726 = UINT32_MAX;
	volatile int8_t x727 = 45;
	uint8_t x728 = UINT8_MAX;
	int32_t t147 = -372109;

    t147 = ((x725==x726)%(x727-x728));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x729 = INT8_MIN;
	int8_t x730 = INT8_MAX;
	uint32_t x731 = UINT32_MAX;
	int16_t x732 = INT16_MIN;

    t148 = ((x729==x730)%(x731-x732));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x733 = -1;
	int64_t x735 = 21915495241LL;
	int16_t x736 = INT16_MAX;
	int64_t t149 = 0LL;

    t149 = ((x733==x734)%(x735-x736));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x737 = 81U;
	static int32_t x738 = INT32_MIN;
	volatile uint16_t x739 = UINT16_MAX;
	static volatile int16_t x740 = INT16_MAX;
	volatile int32_t t150 = 40162;

    t150 = ((x737==x738)%(x739-x740));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x741 = 366U;
	int64_t x743 = -1LL;
	int32_t x744 = INT32_MIN;
	static int64_t t151 = -15600684863457348LL;

    t151 = ((x741==x742)%(x743-x744));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x745 = 0U;
	volatile int8_t x746 = 6;
	int64_t x748 = 7LL;
	volatile int64_t t152 = -6562020LL;

    t152 = ((x745==x746)%(x747-x748));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x753 = 24LLU;
	volatile uint64_t x754 = 15191341LLU;
	uint32_t x755 = 6591452U;
	uint16_t x756 = 5U;
	volatile uint32_t t153 = 75U;

    t153 = ((x753==x754)%(x755-x756));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x761 = -1;
	volatile uint32_t x762 = 140U;
	volatile int32_t t154 = -1;

    t154 = ((x761==x762)%(x763-x764));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x765 = -1;
	uint64_t x767 = 521144693982013760LLU;
	volatile uint64_t t155 = 28734695LLU;

    t155 = ((x765==x766)%(x767-x768));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x769 = 1724177678555LLU;
	volatile uint64_t x770 = 834LLU;
	volatile uint32_t x772 = 256790U;
	uint32_t t156 = 54863U;

    t156 = ((x769==x770)%(x771-x772));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x773 = INT16_MAX;
	int8_t x774 = 39;
	int64_t x776 = INT64_MIN;
	static volatile int64_t t157 = -28294321117134LL;

    t157 = ((x773==x774)%(x775-x776));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x777 = INT16_MIN;
	static uint8_t x779 = 40U;
	int32_t x780 = 345449;
	int32_t t158 = -15;

    t158 = ((x777==x778)%(x779-x780));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x781 = INT32_MIN;
	int32_t x782 = 0;
	uint32_t x783 = UINT32_MAX;
	uint32_t t159 = 8885U;

    t159 = ((x781==x782)%(x783-x784));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x785 = 858LLU;
	int64_t x786 = INT64_MIN;
	int16_t x787 = INT16_MIN;
	volatile int8_t x788 = -1;
	static int32_t t160 = -24;

    t160 = ((x785==x786)%(x787-x788));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x789 = INT64_MAX;
	int64_t x790 = INT64_MIN;
	int64_t x791 = -51443594394LL;
	int64_t x792 = -1LL;
	static volatile int64_t t161 = -1998LL;

    t161 = ((x789==x790)%(x791-x792));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x797 = -1;
	uint8_t x798 = UINT8_MAX;
	uint64_t x799 = UINT64_MAX;
	static volatile uint64_t t162 = 429LLU;

    t162 = ((x797==x798)%(x799-x800));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x802 = -1;
	static int8_t x803 = INT8_MIN;
	uint8_t x804 = UINT8_MAX;
	int32_t t163 = -6195;

    t163 = ((x801==x802)%(x803-x804));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x813 = UINT8_MAX;
	static uint32_t x814 = UINT32_MAX;
	uint32_t x816 = 27U;

    t164 = ((x813==x814)%(x815-x816));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x817 = UINT32_MAX;
	static int64_t x819 = -1LL;
	static int64_t x820 = -8170246412527467LL;
	int64_t t165 = 17728LL;

    t165 = ((x817==x818)%(x819-x820));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x821 = -1;
	int64_t x822 = INT64_MIN;
	int64_t x824 = -55535288LL;

    t166 = ((x821==x822)%(x823-x824));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x826 = INT8_MAX;
	int64_t x827 = 1402637LL;
	uint16_t x828 = 0U;

    t167 = ((x825==x826)%(x827-x828));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x833 = INT32_MIN;
	int32_t x834 = 1;
	uint8_t x835 = UINT8_MAX;
	int8_t x836 = -11;

    t168 = ((x833==x834)%(x835-x836));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x837 = 4254722382256555LL;
	volatile int64_t x838 = INT64_MAX;
	int32_t x839 = INT32_MIN;
	int8_t x840 = -41;

    t169 = ((x837==x838)%(x839-x840));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x841 = INT8_MIN;
	int8_t x843 = INT8_MIN;
	int32_t t170 = -4430;

    t170 = ((x841==x842)%(x843-x844));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x845 = INT32_MAX;
	int8_t x846 = INT8_MIN;
	static uint64_t x847 = UINT64_MAX;
	static volatile int32_t x848 = INT32_MIN;
	volatile uint64_t t171 = 3028853LLU;

    t171 = ((x845==x846)%(x847-x848));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x849 = INT8_MIN;
	int64_t x850 = -1491864871425LL;
	volatile uint32_t t172 = 12U;

    t172 = ((x849==x850)%(x851-x852));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x853 = INT32_MIN;
	uint32_t x854 = 64621135U;
	int64_t x855 = INT64_MAX;
	volatile uint8_t x856 = 4U;
	int64_t t173 = -266746632760LL;

    t173 = ((x853==x854)%(x855-x856));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x857 = UINT8_MAX;
	int16_t x858 = INT16_MIN;
	int32_t t174 = 577732191;

    t174 = ((x857==x858)%(x859-x860));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x861 = UINT32_MAX;
	volatile uint16_t x863 = 1U;
	static uint64_t x864 = 3853832170585546LLU;
	uint64_t t175 = 22708607013911LLU;

    t175 = ((x861==x862)%(x863-x864));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x865 = 25LLU;
	uint16_t x866 = UINT16_MAX;
	uint32_t x867 = UINT32_MAX;
	volatile uint16_t x868 = 357U;
	uint32_t t176 = 719963522U;

    t176 = ((x865==x866)%(x867-x868));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x869 = INT32_MAX;
	static int64_t x870 = 1LL;
	volatile int32_t x872 = 991486;
	int32_t t177 = 81;

    t177 = ((x869==x870)%(x871-x872));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x875 = INT16_MIN;
	static uint64_t x876 = 1LLU;
	volatile uint64_t t178 = 347LLU;

    t178 = ((x873==x874)%(x875-x876));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x877 = 3590U;
	int8_t x878 = INT8_MIN;
	int8_t x880 = INT8_MIN;

    t179 = ((x877==x878)%(x879-x880));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x881 = INT8_MIN;
	int64_t x884 = INT64_MIN;
	static volatile int64_t t180 = 1534068117LL;

    t180 = ((x881==x882)%(x883-x884));

    if (t180 != 1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x885 = -1;
	static uint8_t x886 = UINT8_MAX;
	int64_t x887 = INT64_MIN;
	static volatile int32_t x888 = -1450062;

    t181 = ((x885==x886)%(x887-x888));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x889 = INT8_MIN;
	int32_t x890 = -6;
	volatile int32_t x892 = 9;

    t182 = ((x889==x890)%(x891-x892));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x893 = INT16_MAX;
	int8_t x896 = 0;
	volatile int32_t t183 = 35896;

    t183 = ((x893==x894)%(x895-x896));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x897 = INT32_MAX;
	int16_t x898 = INT16_MAX;
	static uint64_t x899 = UINT64_MAX;
	uint32_t x900 = 434327U;
	static volatile uint64_t t184 = 22834024865992744LLU;

    t184 = ((x897==x898)%(x899-x900));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x902 = UINT32_MAX;
	uint8_t x903 = 6U;
	volatile int32_t t185 = -19007728;

    t185 = ((x901==x902)%(x903-x904));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x905 = INT16_MIN;
	volatile uint32_t x906 = UINT32_MAX;
	int64_t x907 = 1626769486000481087LL;
	static uint64_t x908 = 1446019943LLU;
	uint64_t t186 = 1LLU;

    t186 = ((x905==x906)%(x907-x908));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x913 = 23959LL;
	static int32_t x914 = INT32_MIN;
	int64_t x916 = 14935142LL;
	static int64_t t187 = 213703735839941LL;

    t187 = ((x913==x914)%(x915-x916));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x918 = -273332444LL;
	uint8_t x919 = UINT8_MAX;
	int32_t x920 = INT32_MAX;
	static volatile int32_t t188 = 6674288;

    t188 = ((x917==x918)%(x919-x920));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x921 = 1407542814U;
	static volatile int8_t x922 = -1;
	uint16_t x924 = 5U;
	uint64_t t189 = 1556687LLU;

    t189 = ((x921==x922)%(x923-x924));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x925 = 57014;
	int32_t x926 = -996474;
	int8_t x927 = -1;
	int64_t x928 = 137826952133842LL;
	static volatile int64_t t190 = 8344749342864233LL;

    t190 = ((x925==x926)%(x927-x928));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x929 = -1;
	static uint32_t x930 = 2099488U;
	int16_t x931 = -1559;
	volatile int8_t x932 = INT8_MIN;
	static int32_t t191 = -971269;

    t191 = ((x929==x930)%(x931-x932));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x933 = 0LL;
	static uint64_t x934 = UINT64_MAX;
	uint32_t x935 = 650437U;
	uint16_t x936 = UINT16_MAX;
	uint32_t t192 = 5681935U;

    t192 = ((x933==x934)%(x935-x936));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x937 = UINT16_MAX;
	uint16_t x938 = 0U;
	int16_t x940 = INT16_MAX;

    t193 = ((x937==x938)%(x939-x940));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x941 = 63818U;
	volatile int64_t x942 = 23950337975LL;
	uint32_t t194 = 81171810U;

    t194 = ((x941==x942)%(x943-x944));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x945 = INT16_MAX;
	int64_t x946 = 469LL;
	int8_t x947 = 1;
	uint16_t x948 = UINT16_MAX;
	static int32_t t195 = -88;

    t195 = ((x945==x946)%(x947-x948));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x949 = UINT16_MAX;
	int16_t x950 = INT16_MIN;
	uint64_t x951 = 4305533LLU;
	static int64_t x952 = INT64_MIN;
	uint64_t t196 = 124373253342478LLU;

    t196 = ((x949==x950)%(x951-x952));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x953 = -1LL;
	int64_t x954 = INT64_MAX;
	int16_t x955 = -1;
	int16_t x956 = INT16_MIN;
	volatile int32_t t197 = 105371222;

    t197 = ((x953==x954)%(x955-x956));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x957 = INT32_MIN;
	static uint32_t x959 = 332U;
	uint64_t x960 = 1242900868214LLU;
	uint64_t t198 = 19388306129137696LLU;

    t198 = ((x957==x958)%(x959-x960));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x961 = 9U;
	int8_t x962 = 0;
	uint8_t x963 = UINT8_MAX;
	int32_t t199 = -19;

    t199 = ((x961==x962)%(x963-x964));

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

