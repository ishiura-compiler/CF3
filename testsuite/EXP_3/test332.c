
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

int32_t x8 = -1;
static uint8_t x22 = 34U;
static volatile int8_t x33 = INT8_MIN;
int32_t x41 = INT32_MIN;
int32_t x50 = 1;
uint64_t x51 = 1490695LLU;
volatile int32_t t11 = -25;
int32_t t12 = -425664935;
volatile int32_t t13 = 133812334;
int64_t x66 = 7136LL;
int64_t x67 = 7718269841LL;
volatile int8_t x69 = 0;
uint8_t x70 = UINT8_MAX;
int8_t x81 = INT8_MAX;
uint64_t x83 = UINT64_MAX;
int32_t x85 = 30;
int32_t t20 = -146561;
int64_t x99 = 773540133LL;
uint64_t x102 = 671LLU;
volatile int32_t t23 = 1138494;
int32_t x107 = 15134;
int8_t x111 = -54;
int8_t x118 = 0;
static int32_t t27 = -1473;
static uint32_t x122 = 16546739U;
int64_t x126 = INT64_MIN;
int16_t x128 = INT16_MIN;
static int64_t x144 = INT64_MIN;
int32_t t35 = -7;
int32_t x157 = -1;
static int8_t x168 = INT8_MIN;
int32_t x170 = -54;
static int32_t x178 = -1;
volatile uint32_t x183 = 1700798U;
int32_t t42 = 504008;
int32_t x186 = 355157118;
static int32_t t45 = -31;
int8_t x198 = -1;
int16_t x207 = INT16_MIN;
uint16_t x217 = 24U;
uint64_t x236 = 7LLU;
static int32_t t56 = -14;
int32_t t57 = -299738;
uint16_t x245 = 46U;
uint64_t x247 = 1313900LLU;
static uint32_t x248 = 776U;
volatile int32_t t58 = 228;
volatile int32_t t59 = -29;
volatile uint8_t x260 = 1U;
int16_t x262 = INT16_MIN;
int32_t x265 = INT32_MAX;
int64_t x274 = -99290188505LL;
uint32_t x277 = 0U;
static int32_t t66 = -39937246;
int32_t x289 = INT32_MAX;
uint64_t x295 = UINT64_MAX;
int32_t x304 = INT32_MIN;
static volatile int16_t x308 = INT16_MIN;
int32_t x310 = 3541;
int32_t x311 = INT32_MAX;
static volatile int32_t t72 = -4619;
static uint64_t x317 = 385325672149256034LLU;
int8_t x319 = INT8_MIN;
volatile uint16_t x325 = 246U;
int32_t x338 = INT32_MAX;
uint32_t x340 = 9114818U;
volatile int32_t t78 = 585;
int32_t x341 = INT32_MIN;
uint64_t x346 = 7LLU;
uint64_t x347 = UINT64_MAX;
int32_t t81 = 81340254;
int16_t x353 = INT16_MAX;
int8_t x356 = INT8_MAX;
static int32_t x373 = INT32_MIN;
int64_t x379 = -84LL;
int64_t x383 = -89876590415960646LL;
volatile int32_t t90 = -88315;
uint64_t x393 = UINT64_MAX;
int32_t t92 = 28;
static uint32_t x401 = UINT32_MAX;
int8_t x405 = 58;
int8_t x407 = INT8_MAX;
int16_t x414 = INT16_MIN;
static volatile int32_t t97 = 10;
int64_t x426 = 200058736016LL;
uint8_t x427 = UINT8_MAX;
int8_t x430 = 3;
int8_t x431 = 1;
int64_t x432 = 139602311237698231LL;
int8_t x436 = 53;
int8_t x437 = 7;
uint16_t x448 = UINT16_MAX;
uint32_t x450 = 1815081645U;
int64_t x455 = 51054741295LL;
int8_t x462 = 1;
volatile uint32_t x465 = 2U;
static volatile uint32_t x471 = 119U;
int32_t x472 = 1;
static int16_t x475 = -129;
volatile uint32_t x480 = 2323026U;
uint64_t x487 = 931863272175895687LLU;
uint64_t x489 = 1433027LLU;
int16_t x491 = -47;
static int16_t x502 = -1;
int16_t x507 = 853;
static int16_t x508 = INT16_MIN;
int32_t x511 = -1;
int16_t x513 = INT16_MIN;
uint16_t x520 = 77U;
uint32_t x528 = 33U;
volatile int16_t x532 = INT16_MAX;
int32_t x534 = 4;
volatile int32_t t124 = 3;
uint32_t x540 = 1937U;
uint8_t x545 = 3U;
uint16_t x557 = 0U;
int32_t x558 = INT32_MIN;
volatile int32_t t130 = 0;
static int64_t x574 = -1LL;
int32_t t132 = 318984073;
int8_t x584 = 1;
uint16_t x586 = 5666U;
int16_t x587 = INT16_MIN;
int8_t x589 = 0;
int64_t x595 = -1LL;
int64_t x596 = INT64_MAX;
int32_t x600 = INT32_MAX;
int32_t t140 = -1;
volatile int32_t t141 = 55;
int64_t x618 = INT64_MAX;
int8_t x619 = INT8_MAX;
uint32_t x627 = 7337645U;
int16_t x628 = INT16_MIN;
volatile int32_t t145 = -17206297;
static int16_t x629 = 117;
int32_t x631 = INT32_MAX;
static volatile int8_t x635 = INT8_MIN;
int64_t x637 = 2033698LL;
static int32_t x638 = INT32_MAX;
int32_t x640 = INT32_MIN;
volatile int64_t x644 = 63307LL;
volatile int32_t t149 = -103;
int8_t x645 = 3;
volatile int32_t t150 = -237207;
int16_t x649 = -1;
static int16_t x650 = -116;
int64_t x652 = 218513156350LL;
int32_t x656 = 2;
int32_t x664 = INT32_MIN;
static volatile int32_t t154 = -62964875;
uint8_t x674 = 31U;
static uint32_t x677 = 21764U;
static uint16_t x682 = 4U;
int32_t t158 = -13837;
volatile uint64_t x688 = 531279867LLU;
static int16_t x696 = -1;
uint64_t x698 = 6499674669315912471LLU;
int16_t x700 = INT16_MIN;
int8_t x707 = -1;
volatile int32_t t165 = 2071;
int32_t t166 = -36;
volatile int32_t t167 = -57;
int8_t x729 = -1;
volatile int32_t t168 = -29974;
uint32_t x742 = 2793U;
volatile uint8_t x751 = 1U;
uint16_t x758 = UINT16_MAX;
volatile int64_t x767 = -1LL;
int8_t x769 = INT8_MIN;
int16_t x782 = 2390;
int8_t x787 = 0;
volatile int32_t t181 = -2;
uint8_t x793 = UINT8_MAX;
uint8_t x795 = UINT8_MAX;
volatile uint8_t x802 = UINT8_MAX;
int32_t x805 = INT32_MIN;
int64_t x806 = -1LL;
int64_t x815 = -1LL;
int64_t x824 = INT64_MAX;
uint8_t x826 = 0U;
int8_t x828 = INT8_MIN;
volatile int64_t x830 = INT64_MAX;
int64_t x836 = -1LL;
volatile int32_t t193 = 794;
int8_t x849 = INT8_MIN;
uint32_t x853 = UINT32_MAX;
int16_t x858 = INT16_MAX;
static int64_t x862 = -1LL;
uint16_t x866 = 461U;
uint16_t x867 = UINT16_MAX;


void f0(void) {
    	volatile int16_t x1 = 1;
	volatile uint64_t x2 = 4434543316682842187LLU;
	volatile uint64_t x3 = UINT64_MAX;
	volatile uint16_t x4 = 887U;
	int32_t t0 = -9321;

    t0 = ((x1<=x2)<=(x3-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 0;
	int8_t x6 = -1;
	int16_t x7 = -5;
	volatile int32_t t1 = 567853;

    t1 = ((x5<=x6)<=(x7-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x13 = UINT32_MAX;
	uint8_t x14 = 5U;
	int32_t x15 = -1;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t2 = 0;

    t2 = ((x13<=x14)<=(x15-x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = INT64_MAX;
	uint16_t x23 = 11U;
	uint16_t x24 = 29U;
	int32_t t3 = 127818090;

    t3 = ((x21<=x22)<=(x23-x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = -1;
	int16_t x26 = INT16_MIN;
	static int64_t x27 = 6480863609LL;
	static uint64_t x28 = 144731095028192LLU;
	int32_t t4 = -1;

    t4 = ((x25<=x26)<=(x27-x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x29 = -1LL;
	int8_t x30 = INT8_MAX;
	int8_t x31 = -1;
	uint16_t x32 = UINT16_MAX;
	static int32_t t5 = -1069748144;

    t5 = ((x29<=x30)<=(x31-x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x34 = INT64_MAX;
	static int32_t x35 = -1;
	uint16_t x36 = 14577U;
	int32_t t6 = 459;

    t6 = ((x33<=x34)<=(x35-x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x37 = UINT16_MAX;
	volatile int64_t x38 = INT64_MIN;
	int8_t x39 = INT8_MAX;
	static int64_t x40 = INT64_MAX;
	volatile int32_t t7 = -3;

    t7 = ((x37<=x38)<=(x39-x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x42 = INT32_MAX;
	static int16_t x43 = 47;
	uint32_t x44 = 278591366U;
	volatile int32_t t8 = -50;

    t8 = ((x41<=x42)<=(x43-x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x45 = 7;
	static volatile uint32_t x46 = 1U;
	uint64_t x47 = 12428432634456544LLU;
	uint16_t x48 = 1U;
	volatile int32_t t9 = -94;

    t9 = ((x45<=x46)<=(x47-x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x49 = 7182U;
	static volatile uint32_t x52 = 5163210U;
	int32_t t10 = 15917899;

    t10 = ((x49<=x50)<=(x51-x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = INT16_MIN;
	volatile uint64_t x54 = UINT64_MAX;
	static int64_t x55 = 1131LL;
	int8_t x56 = -21;

    t11 = ((x53<=x54)<=(x55-x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = INT32_MIN;
	int16_t x58 = INT16_MIN;
	volatile uint64_t x59 = 3030621769949LLU;
	volatile int64_t x60 = -1LL;

    t12 = ((x57<=x58)<=(x59-x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x61 = -1488;
	static uint64_t x62 = UINT64_MAX;
	uint32_t x63 = UINT32_MAX;
	static int32_t x64 = -748014;

    t13 = ((x61<=x62)<=(x63-x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = -1;
	int8_t x68 = -1;
	int32_t t14 = 540568032;

    t14 = ((x65<=x66)<=(x67-x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x71 = -1;
	int32_t x72 = INT32_MAX;
	volatile int32_t t15 = 466416;

    t15 = ((x69<=x70)<=(x71-x72));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x73 = INT32_MIN;
	int64_t x74 = -31467884LL;
	uint8_t x75 = UINT8_MAX;
	int8_t x76 = -1;
	volatile int32_t t16 = 942;

    t16 = ((x73<=x74)<=(x75-x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x77 = 265090133295417956LLU;
	uint16_t x78 = UINT16_MAX;
	int8_t x79 = 7;
	volatile uint32_t x80 = 1U;
	static int32_t t17 = 21;

    t17 = ((x77<=x78)<=(x79-x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x82 = INT64_MAX;
	uint32_t x84 = 124277U;
	volatile int32_t t18 = 1718;

    t18 = ((x81<=x82)<=(x83-x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x86 = INT8_MIN;
	volatile uint64_t x87 = UINT64_MAX;
	int8_t x88 = INT8_MAX;
	volatile int32_t t19 = 898;

    t19 = ((x85<=x86)<=(x87-x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x89 = 116733820325527698LLU;
	int8_t x90 = INT8_MAX;
	volatile uint16_t x91 = UINT16_MAX;
	int8_t x92 = -1;

    t20 = ((x89<=x90)<=(x91-x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x93 = UINT32_MAX;
	int16_t x94 = 1;
	uint64_t x95 = 216LLU;
	static int16_t x96 = -6447;
	static int32_t t21 = -342768;

    t21 = ((x93<=x94)<=(x95-x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x97 = 94063U;
	static volatile int16_t x98 = 47;
	static uint16_t x100 = UINT16_MAX;
	int32_t t22 = 4384;

    t22 = ((x97<=x98)<=(x99-x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = 394765U;
	uint32_t x103 = 5821U;
	int8_t x104 = INT8_MIN;

    t23 = ((x101<=x102)<=(x103-x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x105 = INT64_MIN;
	volatile int64_t x106 = INT64_MAX;
	int32_t x108 = -23;
	int32_t t24 = 1608652;

    t24 = ((x105<=x106)<=(x107-x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = -210509485979981LL;
	volatile int8_t x110 = -1;
	int64_t x112 = INT64_MIN;
	static volatile int32_t t25 = 5;

    t25 = ((x109<=x110)<=(x111-x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x113 = 1U;
	volatile int8_t x114 = 33;
	int8_t x115 = -1;
	volatile uint64_t x116 = UINT64_MAX;
	volatile int32_t t26 = -1670810;

    t26 = ((x113<=x114)<=(x115-x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x117 = 3469LLU;
	static int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MAX;

    t27 = ((x117<=x118)<=(x119-x120));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x121 = 0U;
	uint16_t x123 = UINT16_MAX;
	int64_t x124 = 29786887566018501LL;
	int32_t t28 = 187;

    t28 = ((x121<=x122)<=(x123-x124));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x125 = 113U;
	int16_t x127 = 206;
	volatile int32_t t29 = -552994;

    t29 = ((x125<=x126)<=(x127-x128));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x129 = 3155945029911LLU;
	int64_t x130 = -1299594235304993725LL;
	uint32_t x131 = 63U;
	static volatile uint32_t x132 = UINT32_MAX;
	int32_t t30 = -36840;

    t30 = ((x129<=x130)<=(x131-x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = UINT16_MAX;
	static volatile int16_t x136 = INT16_MAX;
	volatile int32_t t31 = 28219540;

    t31 = ((x133<=x134)<=(x135-x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x137 = INT64_MAX;
	uint16_t x138 = UINT16_MAX;
	uint16_t x139 = 0U;
	volatile uint64_t x140 = 45113LLU;
	int32_t t32 = 26414369;

    t32 = ((x137<=x138)<=(x139-x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x141 = INT16_MIN;
	volatile int32_t x142 = INT32_MAX;
	int32_t x143 = INT32_MIN;
	static int32_t t33 = 6263448;

    t33 = ((x141<=x142)<=(x143-x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x149 = -1;
	volatile int16_t x150 = -1;
	int64_t x151 = 150842742099411LL;
	uint8_t x152 = 2U;
	static int32_t t34 = -1;

    t34 = ((x149<=x150)<=(x151-x152));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x153 = 29U;
	static volatile int8_t x154 = -1;
	int16_t x155 = 849;
	uint8_t x156 = 12U;

    t35 = ((x153<=x154)<=(x155-x156));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x158 = UINT16_MAX;
	static uint8_t x159 = 1U;
	int8_t x160 = -1;
	volatile int32_t t36 = 7;

    t36 = ((x157<=x158)<=(x159-x160));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MIN;
	uint8_t x163 = UINT8_MAX;
	int16_t x164 = INT16_MAX;
	int32_t t37 = -1672;

    t37 = ((x161<=x162)<=(x163-x164));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = 15;
	int16_t x166 = -11;
	int32_t x167 = INT32_MIN;
	volatile int32_t t38 = -588396;

    t38 = ((x165<=x166)<=(x167-x168));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x169 = 1U;
	uint16_t x171 = 0U;
	volatile int64_t x172 = -1LL;
	static volatile int32_t t39 = 459638;

    t39 = ((x169<=x170)<=(x171-x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x173 = -1LL;
	static uint64_t x174 = UINT64_MAX;
	volatile uint64_t x175 = 132847436013374LLU;
	uint64_t x176 = UINT64_MAX;
	volatile int32_t t40 = -2390219;

    t40 = ((x173<=x174)<=(x175-x176));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x177 = 7239U;
	int8_t x179 = 2;
	int8_t x180 = INT8_MAX;
	static volatile int32_t t41 = 9;

    t41 = ((x177<=x178)<=(x179-x180));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = INT16_MAX;
	uint8_t x182 = UINT8_MAX;
	uint8_t x184 = 0U;

    t42 = ((x181<=x182)<=(x183-x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = 24;
	int8_t x187 = INT8_MIN;
	uint32_t x188 = UINT32_MAX;
	static int32_t t43 = -100;

    t43 = ((x185<=x186)<=(x187-x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x189 = 74235LLU;
	int16_t x190 = INT16_MIN;
	volatile int16_t x191 = -1;
	uint8_t x192 = UINT8_MAX;
	int32_t t44 = 3893;

    t44 = ((x189<=x190)<=(x191-x192));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x193 = -1;
	uint16_t x194 = UINT16_MAX;
	volatile int64_t x195 = 2483099548LL;
	static int32_t x196 = 1662071;

    t45 = ((x193<=x194)<=(x195-x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x197 = 9U;
	uint16_t x199 = 1U;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t46 = 1664537;

    t46 = ((x197<=x198)<=(x199-x200));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = 0;
	int8_t x202 = INT8_MAX;
	volatile int32_t x203 = 0;
	static uint16_t x204 = UINT16_MAX;
	int32_t t47 = -105953685;

    t47 = ((x201<=x202)<=(x203-x204));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x205 = UINT32_MAX;
	volatile uint16_t x206 = 0U;
	static int32_t x208 = 2;
	static volatile int32_t t48 = 0;

    t48 = ((x205<=x206)<=(x207-x208));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x209 = 42642LLU;
	uint32_t x210 = UINT32_MAX;
	volatile uint16_t x211 = 1424U;
	uint64_t x212 = 130800017464332340LLU;
	volatile int32_t t49 = -473641062;

    t49 = ((x209<=x210)<=(x211-x212));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x213 = 3674289U;
	int8_t x214 = INT8_MAX;
	int8_t x215 = -5;
	volatile uint64_t x216 = 1796008644624076LLU;
	int32_t t50 = 122;

    t50 = ((x213<=x214)<=(x215-x216));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x218 = 16LLU;
	static int16_t x219 = 6280;
	static int8_t x220 = -1;
	static volatile int32_t t51 = 0;

    t51 = ((x217<=x218)<=(x219-x220));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x221 = 0U;
	int8_t x222 = INT8_MIN;
	int16_t x223 = -1;
	static int32_t x224 = INT32_MAX;
	volatile int32_t t52 = 6087;

    t52 = ((x221<=x222)<=(x223-x224));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x225 = 1930656437LL;
	uint16_t x226 = 81U;
	static int32_t x227 = -29077;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t53 = 725287288;

    t53 = ((x225<=x226)<=(x227-x228));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x229 = -24263451;
	int64_t x230 = INT64_MAX;
	volatile int16_t x231 = 760;
	int64_t x232 = -538803901097LL;
	static int32_t t54 = 471;

    t54 = ((x229<=x230)<=(x231-x232));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x233 = 506852U;
	volatile uint64_t x234 = 46LLU;
	int64_t x235 = -1677972579132660142LL;
	volatile int32_t t55 = 1;

    t55 = ((x233<=x234)<=(x235-x236));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x237 = 93U;
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MAX;
	volatile int8_t x240 = 14;

    t56 = ((x237<=x238)<=(x239-x240));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x241 = INT32_MAX;
	int64_t x242 = INT64_MAX;
	volatile int32_t x243 = INT32_MIN;
	static uint32_t x244 = UINT32_MAX;

    t57 = ((x241<=x242)<=(x243-x244));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x246 = -2;

    t58 = ((x245<=x246)<=(x247-x248));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x249 = INT16_MIN;
	static uint32_t x250 = 61U;
	static uint16_t x251 = 4U;
	int16_t x252 = INT16_MAX;

    t59 = ((x249<=x250)<=(x251-x252));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x253 = 336054;
	volatile uint32_t x254 = 36513888U;
	int8_t x255 = -1;
	int8_t x256 = -1;
	static volatile int32_t t60 = 4;

    t60 = ((x253<=x254)<=(x255-x256));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x257 = 2U;
	static int32_t x258 = INT32_MIN;
	uint64_t x259 = 519532LLU;
	volatile int32_t t61 = 73164;

    t61 = ((x257<=x258)<=(x259-x260));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x261 = INT64_MIN;
	uint8_t x263 = 48U;
	int64_t x264 = INT64_MAX;
	int32_t t62 = -244229229;

    t62 = ((x261<=x262)<=(x263-x264));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x266 = -1LL;
	volatile uint8_t x267 = UINT8_MAX;
	uint32_t x268 = 3638U;
	static int32_t t63 = 12854;

    t63 = ((x265<=x266)<=(x267-x268));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x273 = 1744484U;
	int8_t x275 = INT8_MIN;
	uint16_t x276 = 152U;
	static int32_t t64 = 57;

    t64 = ((x273<=x274)<=(x275-x276));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x278 = INT32_MIN;
	volatile int16_t x279 = INT16_MIN;
	int64_t x280 = INT64_MIN;
	volatile int32_t t65 = 22516;

    t65 = ((x277<=x278)<=(x279-x280));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x285 = INT64_MIN;
	uint64_t x286 = 4196038828235990823LLU;
	int8_t x287 = -1;
	uint64_t x288 = 173LLU;

    t66 = ((x285<=x286)<=(x287-x288));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x290 = INT64_MIN;
	uint32_t x291 = UINT32_MAX;
	uint64_t x292 = UINT64_MAX;
	int32_t t67 = 489328011;

    t67 = ((x289<=x290)<=(x291-x292));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x293 = 30673239;
	uint8_t x294 = 2U;
	int32_t x296 = -1;
	volatile int32_t t68 = -1634349;

    t68 = ((x293<=x294)<=(x295-x296));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x297 = -1LL;
	volatile int16_t x298 = 1;
	int64_t x299 = 22393282430LL;
	uint32_t x300 = 15008121U;
	volatile int32_t t69 = 231436;

    t69 = ((x297<=x298)<=(x299-x300));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x301 = 0;
	uint64_t x302 = 32507495726999LLU;
	int8_t x303 = -1;
	volatile int32_t t70 = 15845;

    t70 = ((x301<=x302)<=(x303-x304));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x305 = INT16_MIN;
	uint32_t x306 = UINT32_MAX;
	uint16_t x307 = 25U;
	volatile int32_t t71 = 0;

    t71 = ((x305<=x306)<=(x307-x308));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x309 = INT16_MIN;
	volatile uint32_t x312 = UINT32_MAX;

    t72 = ((x309<=x310)<=(x311-x312));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x318 = INT8_MIN;
	volatile int16_t x320 = -2;
	int32_t t73 = -218867798;

    t73 = ((x317<=x318)<=(x319-x320));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x321 = 2U;
	volatile int64_t x322 = INT64_MIN;
	int16_t x323 = -1;
	static volatile uint8_t x324 = UINT8_MAX;
	int32_t t74 = 60;

    t74 = ((x321<=x322)<=(x323-x324));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x326 = INT64_MAX;
	volatile int64_t x327 = 1LL;
	uint16_t x328 = 3U;
	volatile int32_t t75 = -1736;

    t75 = ((x325<=x326)<=(x327-x328));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x329 = 481443;
	volatile int32_t x330 = -1;
	uint8_t x331 = 38U;
	volatile int32_t x332 = INT32_MAX;
	static int32_t t76 = -23760;

    t76 = ((x329<=x330)<=(x331-x332));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x333 = INT64_MIN;
	static uint8_t x334 = 25U;
	volatile int32_t x335 = 2026328;
	uint32_t x336 = 497U;
	volatile int32_t t77 = 16064431;

    t77 = ((x333<=x334)<=(x335-x336));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x337 = INT16_MIN;
	uint16_t x339 = 4U;

    t78 = ((x337<=x338)<=(x339-x340));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x342 = -540187462102LL;
	int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	static int32_t t79 = 70573;

    t79 = ((x341<=x342)<=(x343-x344));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x345 = INT32_MAX;
	volatile uint16_t x348 = UINT16_MAX;
	int32_t t80 = -35;

    t80 = ((x345<=x346)<=(x347-x348));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x349 = INT32_MIN;
	int8_t x350 = 0;
	volatile int16_t x351 = -1;
	volatile int64_t x352 = -1LL;

    t81 = ((x349<=x350)<=(x351-x352));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x354 = 7400U;
	uint8_t x355 = UINT8_MAX;
	int32_t t82 = 59418857;

    t82 = ((x353<=x354)<=(x355-x356));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint64_t x357 = 106162687293302LLU;
	int16_t x358 = 0;
	volatile int32_t x359 = 268597;
	uint64_t x360 = UINT64_MAX;
	static volatile int32_t t83 = 2;

    t83 = ((x357<=x358)<=(x359-x360));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x361 = 297LLU;
	volatile int8_t x362 = INT8_MIN;
	int8_t x363 = 0;
	int16_t x364 = -1;
	int32_t t84 = 99306;

    t84 = ((x361<=x362)<=(x363-x364));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MIN;
	uint64_t x367 = 15LLU;
	static volatile uint32_t x368 = 9960U;
	static volatile int32_t t85 = -901;

    t85 = ((x365<=x366)<=(x367-x368));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x369 = 6353625662125780LL;
	volatile int32_t x370 = -1;
	static int64_t x371 = -1LL;
	static int16_t x372 = 1111;
	int32_t t86 = -253013;

    t86 = ((x369<=x370)<=(x371-x372));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x374 = 122984956U;
	static uint16_t x375 = 7U;
	uint16_t x376 = 3U;
	int32_t t87 = -169333;

    t87 = ((x373<=x374)<=(x375-x376));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x377 = -1;
	volatile uint32_t x378 = 0U;
	int64_t x380 = -19461969LL;
	int32_t t88 = -65082;

    t88 = ((x377<=x378)<=(x379-x380));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x381 = 4U;
	volatile uint64_t x382 = 1728382072LLU;
	uint8_t x384 = 21U;
	volatile int32_t t89 = 405756;

    t89 = ((x381<=x382)<=(x383-x384));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x385 = 818706174U;
	static int8_t x386 = INT8_MAX;
	uint8_t x387 = 43U;
	volatile int8_t x388 = INT8_MAX;

    t90 = ((x385<=x386)<=(x387-x388));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x389 = INT16_MAX;
	int8_t x390 = 8;
	int64_t x391 = INT64_MIN;
	static int64_t x392 = INT64_MIN;
	volatile int32_t t91 = 57;

    t91 = ((x389<=x390)<=(x391-x392));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x394 = -6;
	static int16_t x395 = INT16_MIN;
	int32_t x396 = INT32_MIN;

    t92 = ((x393<=x394)<=(x395-x396));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x397 = -1;
	static volatile uint16_t x398 = 0U;
	int8_t x399 = -16;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t93 = -629609824;

    t93 = ((x397<=x398)<=(x399-x400));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x402 = 8696LLU;
	int8_t x403 = 4;
	int8_t x404 = INT8_MAX;
	volatile int32_t t94 = -5084;

    t94 = ((x401<=x402)<=(x403-x404));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x406 = INT64_MIN;
	static uint16_t x408 = 804U;
	volatile int32_t t95 = -265508189;

    t95 = ((x405<=x406)<=(x407-x408));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x413 = UINT16_MAX;
	int8_t x415 = INT8_MAX;
	volatile int64_t x416 = 1598LL;
	int32_t t96 = -327508043;

    t96 = ((x413<=x414)<=(x415-x416));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x417 = 41734LLU;
	int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MIN;
	int64_t x420 = 2360315LL;

    t97 = ((x417<=x418)<=(x419-x420));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x421 = -88;
	int64_t x422 = INT64_MIN;
	int8_t x423 = -1;
	int16_t x424 = INT16_MAX;
	int32_t t98 = -18;

    t98 = ((x421<=x422)<=(x423-x424));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x425 = INT16_MIN;
	volatile int64_t x428 = -1LL;
	static volatile int32_t t99 = -25696126;

    t99 = ((x425<=x426)<=(x427-x428));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x429 = INT16_MAX;
	int32_t t100 = 1;

    t100 = ((x429<=x430)<=(x431-x432));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x433 = INT8_MIN;
	uint32_t x434 = 120583307U;
	uint64_t x435 = 10477LLU;
	volatile int32_t t101 = 40260;

    t101 = ((x433<=x434)<=(x435-x436));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x438 = 85U;
	int64_t x439 = -66919878580745033LL;
	static int32_t x440 = INT32_MIN;
	static volatile int32_t t102 = -27;

    t102 = ((x437<=x438)<=(x439-x440));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x441 = 7397;
	int16_t x442 = INT16_MAX;
	uint32_t x443 = 28468U;
	volatile uint64_t x444 = 16671456695721485LLU;
	int32_t t103 = 104;

    t103 = ((x441<=x442)<=(x443-x444));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x445 = INT8_MIN;
	static int32_t x446 = 121080;
	int8_t x447 = 0;
	volatile int32_t t104 = 6542877;

    t104 = ((x445<=x446)<=(x447-x448));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x449 = INT16_MIN;
	uint8_t x451 = UINT8_MAX;
	static volatile int8_t x452 = -13;
	int32_t t105 = 4647933;

    t105 = ((x449<=x450)<=(x451-x452));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x453 = UINT8_MAX;
	int16_t x454 = INT16_MAX;
	volatile uint64_t x456 = UINT64_MAX;
	volatile int32_t t106 = -59830;

    t106 = ((x453<=x454)<=(x455-x456));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x461 = UINT16_MAX;
	static int32_t x463 = INT32_MIN;
	volatile int64_t x464 = INT64_MIN;
	static int32_t t107 = 25735390;

    t107 = ((x461<=x462)<=(x463-x464));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x466 = INT32_MIN;
	volatile int16_t x467 = -6326;
	int8_t x468 = -1;
	int32_t t108 = 32400041;

    t108 = ((x465<=x466)<=(x467-x468));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x469 = -1LL;
	volatile int16_t x470 = -1;
	static int32_t t109 = 513161;

    t109 = ((x469<=x470)<=(x471-x472));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x473 = 0U;
	int16_t x474 = -354;
	volatile int16_t x476 = INT16_MIN;
	static int32_t t110 = 19;

    t110 = ((x473<=x474)<=(x475-x476));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x477 = -4;
	int16_t x478 = -1;
	int8_t x479 = INT8_MIN;
	int32_t t111 = -273;

    t111 = ((x477<=x478)<=(x479-x480));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x481 = -1;
	int16_t x482 = -1;
	uint32_t x483 = 217520U;
	int64_t x484 = 20808890LL;
	static int32_t t112 = -1;

    t112 = ((x481<=x482)<=(x483-x484));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x485 = INT32_MAX;
	int32_t x486 = -1;
	static int8_t x488 = 30;
	volatile int32_t t113 = -256122035;

    t113 = ((x485<=x486)<=(x487-x488));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x490 = INT8_MIN;
	int8_t x492 = INT8_MIN;
	volatile int32_t t114 = 32128072;

    t114 = ((x489<=x490)<=(x491-x492));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x497 = INT8_MIN;
	int16_t x498 = 0;
	int32_t x499 = -265200045;
	uint16_t x500 = 1U;
	static int32_t t115 = -64;

    t115 = ((x497<=x498)<=(x499-x500));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x501 = 210346393643397248LLU;
	int8_t x503 = INT8_MIN;
	uint8_t x504 = UINT8_MAX;
	int32_t t116 = -586;

    t116 = ((x501<=x502)<=(x503-x504));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x505 = 192U;
	volatile uint32_t x506 = 400647U;
	int32_t t117 = 36;

    t117 = ((x505<=x506)<=(x507-x508));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x509 = -1LL;
	int64_t x510 = INT64_MIN;
	uint64_t x512 = UINT64_MAX;
	static volatile int32_t t118 = 121783;

    t118 = ((x509<=x510)<=(x511-x512));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x514 = -37;
	uint64_t x515 = 52129225LLU;
	int16_t x516 = 458;
	volatile int32_t t119 = -2355;

    t119 = ((x513<=x514)<=(x515-x516));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x517 = -1;
	int32_t x518 = -1;
	uint16_t x519 = 2293U;
	int32_t t120 = -101371;

    t120 = ((x517<=x518)<=(x519-x520));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x521 = 221045LLU;
	static int8_t x522 = -1;
	volatile int32_t x523 = INT32_MIN;
	int16_t x524 = -1;
	int32_t t121 = 131164;

    t121 = ((x521<=x522)<=(x523-x524));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x525 = INT32_MIN;
	uint8_t x526 = 2U;
	int16_t x527 = INT16_MIN;
	int32_t t122 = 411981;

    t122 = ((x525<=x526)<=(x527-x528));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x529 = 20;
	int64_t x530 = INT64_MIN;
	uint64_t x531 = UINT64_MAX;
	int32_t t123 = -156;

    t123 = ((x529<=x530)<=(x531-x532));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x533 = 1883397;
	static volatile int8_t x535 = -1;
	uint8_t x536 = UINT8_MAX;

    t124 = ((x533<=x534)<=(x535-x536));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x537 = 481183867U;
	int8_t x538 = -1;
	int64_t x539 = 1469649077785LL;
	int32_t t125 = -6905;

    t125 = ((x537<=x538)<=(x539-x540));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x541 = 956060547137251LL;
	int64_t x542 = 39979544576067LL;
	uint32_t x543 = UINT32_MAX;
	static int8_t x544 = -1;
	int32_t t126 = 1024454;

    t126 = ((x541<=x542)<=(x543-x544));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x546 = INT32_MAX;
	int64_t x547 = -63LL;
	int16_t x548 = INT16_MIN;
	int32_t t127 = 4642785;

    t127 = ((x545<=x546)<=(x547-x548));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x553 = -10810;
	static int32_t x554 = 40;
	uint8_t x555 = UINT8_MAX;
	int32_t x556 = -1;
	volatile int32_t t128 = 46;

    t128 = ((x553<=x554)<=(x555-x556));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x559 = 181874173LLU;
	volatile int64_t x560 = 1956999507322660012LL;
	int32_t t129 = 8380;

    t129 = ((x557<=x558)<=(x559-x560));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x565 = UINT16_MAX;
	int64_t x566 = INT64_MAX;
	int16_t x567 = INT16_MIN;
	volatile int64_t x568 = INT64_MIN;

    t130 = ((x565<=x566)<=(x567-x568));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x569 = 489767253789797119LL;
	int16_t x570 = 105;
	uint16_t x571 = 104U;
	int8_t x572 = -1;
	int32_t t131 = -1;

    t131 = ((x569<=x570)<=(x571-x572));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x573 = 19442U;
	int32_t x575 = INT32_MIN;
	int8_t x576 = INT8_MIN;

    t132 = ((x573<=x574)<=(x575-x576));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x577 = -1;
	static int16_t x578 = -3;
	uint64_t x579 = UINT64_MAX;
	int8_t x580 = INT8_MIN;
	static volatile int32_t t133 = -6300;

    t133 = ((x577<=x578)<=(x579-x580));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x581 = INT8_MIN;
	uint32_t x582 = 1988U;
	volatile int16_t x583 = INT16_MIN;
	volatile int32_t t134 = -1732;

    t134 = ((x581<=x582)<=(x583-x584));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x585 = 19LLU;
	int64_t x588 = -159LL;
	volatile int32_t t135 = -3272;

    t135 = ((x585<=x586)<=(x587-x588));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x590 = 4444554017664800724LL;
	int16_t x591 = -1;
	int16_t x592 = INT16_MIN;
	int32_t t136 = -3282;

    t136 = ((x589<=x590)<=(x591-x592));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x593 = -11;
	static int64_t x594 = INT64_MIN;
	volatile int32_t t137 = 3036;

    t137 = ((x593<=x594)<=(x595-x596));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x597 = INT64_MAX;
	int64_t x598 = INT64_MIN;
	volatile uint64_t x599 = 104930LLU;
	int32_t t138 = -6902;

    t138 = ((x597<=x598)<=(x599-x600));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x601 = -1;
	uint16_t x602 = 51U;
	static int64_t x603 = INT64_MIN;
	int32_t x604 = INT32_MIN;
	static int32_t t139 = -121;

    t139 = ((x601<=x602)<=(x603-x604));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x605 = -5;
	static volatile int16_t x606 = INT16_MAX;
	uint16_t x607 = 15219U;
	uint64_t x608 = 243860531036550LLU;

    t140 = ((x605<=x606)<=(x607-x608));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x609 = -1;
	volatile uint16_t x610 = 3534U;
	int8_t x611 = INT8_MIN;
	static int8_t x612 = INT8_MIN;

    t141 = ((x609<=x610)<=(x611-x612));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x613 = 13U;
	uint8_t x614 = UINT8_MAX;
	uint16_t x615 = 1U;
	int8_t x616 = INT8_MIN;
	volatile int32_t t142 = -64355;

    t142 = ((x613<=x614)<=(x615-x616));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x617 = 114U;
	volatile int8_t x620 = -1;
	volatile int32_t t143 = 3860622;

    t143 = ((x617<=x618)<=(x619-x620));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x621 = INT64_MIN;
	static int32_t x622 = INT32_MIN;
	volatile uint16_t x623 = UINT16_MAX;
	uint16_t x624 = UINT16_MAX;
	int32_t t144 = 971;

    t144 = ((x621<=x622)<=(x623-x624));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x625 = INT8_MAX;
	volatile int8_t x626 = -1;

    t145 = ((x625<=x626)<=(x627-x628));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x630 = INT64_MIN;
	static uint64_t x632 = UINT64_MAX;
	int32_t t146 = -15235425;

    t146 = ((x629<=x630)<=(x631-x632));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x633 = 1U;
	uint8_t x634 = 77U;
	static volatile int16_t x636 = -2475;
	volatile int32_t t147 = -35075;

    t147 = ((x633<=x634)<=(x635-x636));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x639 = -2;
	static int32_t t148 = -1600766;

    t148 = ((x637<=x638)<=(x639-x640));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x641 = -1;
	int32_t x642 = INT32_MIN;
	int8_t x643 = -1;

    t149 = ((x641<=x642)<=(x643-x644));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x646 = INT64_MIN;
	int16_t x647 = -54;
	int16_t x648 = INT16_MIN;

    t150 = ((x645<=x646)<=(x647-x648));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x651 = INT8_MAX;
	int32_t t151 = 50251;

    t151 = ((x649<=x650)<=(x651-x652));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x653 = INT16_MAX;
	int16_t x654 = INT16_MIN;
	uint8_t x655 = 61U;
	int32_t t152 = 61247412;

    t152 = ((x653<=x654)<=(x655-x656));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x661 = INT16_MIN;
	volatile int32_t x662 = INT32_MAX;
	volatile int16_t x663 = -1;
	static int32_t t153 = 363384616;

    t153 = ((x661<=x662)<=(x663-x664));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x665 = 20U;
	int64_t x666 = 67756885713523503LL;
	int16_t x667 = -1;
	volatile int16_t x668 = -1;

    t154 = ((x665<=x666)<=(x667-x668));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x669 = INT64_MIN;
	int64_t x670 = 17330812542194050LL;
	int8_t x671 = -6;
	int32_t x672 = 11;
	volatile int32_t t155 = 4813;

    t155 = ((x669<=x670)<=(x671-x672));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x673 = 0;
	static int64_t x675 = INT64_MIN;
	int8_t x676 = INT8_MIN;
	volatile int32_t t156 = -246620;

    t156 = ((x673<=x674)<=(x675-x676));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x678 = INT16_MIN;
	static int32_t x679 = -1876;
	volatile uint32_t x680 = 3U;
	int32_t t157 = -31113774;

    t157 = ((x677<=x678)<=(x679-x680));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x681 = -1LL;
	static int64_t x683 = -1LL;
	static int16_t x684 = INT16_MIN;

    t158 = ((x681<=x682)<=(x683-x684));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x685 = 1;
	uint64_t x686 = 944607280294LLU;
	static volatile int16_t x687 = INT16_MIN;
	volatile int32_t t159 = 2;

    t159 = ((x685<=x686)<=(x687-x688));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x693 = INT8_MAX;
	int8_t x694 = -1;
	uint8_t x695 = UINT8_MAX;
	volatile int32_t t160 = -86;

    t160 = ((x693<=x694)<=(x695-x696));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x697 = INT16_MAX;
	int32_t x699 = 0;
	volatile int32_t t161 = 5961;

    t161 = ((x697<=x698)<=(x699-x700));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x701 = INT32_MIN;
	int8_t x702 = 1;
	uint32_t x703 = UINT32_MAX;
	int8_t x704 = -46;
	int32_t t162 = -1;

    t162 = ((x701<=x702)<=(x703-x704));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x705 = INT16_MAX;
	static volatile int64_t x706 = INT64_MIN;
	int32_t x708 = INT32_MIN;
	static volatile int32_t t163 = 2888;

    t163 = ((x705<=x706)<=(x707-x708));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x709 = 1;
	static uint8_t x710 = 3U;
	static int32_t x711 = INT32_MIN;
	static int16_t x712 = -5396;
	volatile int32_t t164 = -1;

    t164 = ((x709<=x710)<=(x711-x712));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x713 = -121920;
	static int8_t x714 = 1;
	uint16_t x715 = 1U;
	uint32_t x716 = UINT32_MAX;

    t165 = ((x713<=x714)<=(x715-x716));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x717 = INT32_MIN;
	uint64_t x718 = 53467LLU;
	volatile uint16_t x719 = UINT16_MAX;
	uint16_t x720 = 3U;

    t166 = ((x717<=x718)<=(x719-x720));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x721 = INT8_MIN;
	static volatile uint64_t x722 = 24501LLU;
	volatile uint16_t x723 = UINT16_MAX;
	static int8_t x724 = -1;

    t167 = ((x721<=x722)<=(x723-x724));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x730 = UINT16_MAX;
	int16_t x731 = 0;
	static volatile int32_t x732 = 3302258;

    t168 = ((x729<=x730)<=(x731-x732));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x737 = -1LL;
	int8_t x738 = INT8_MIN;
	static int32_t x739 = INT32_MAX;
	uint8_t x740 = UINT8_MAX;
	int32_t t169 = -100541;

    t169 = ((x737<=x738)<=(x739-x740));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x741 = 3U;
	int64_t x743 = INT64_MAX;
	int32_t x744 = INT32_MAX;
	volatile int32_t t170 = -8;

    t170 = ((x741<=x742)<=(x743-x744));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x745 = 25U;
	volatile int8_t x746 = -4;
	int16_t x747 = -1;
	volatile int16_t x748 = INT16_MAX;
	int32_t t171 = 368973;

    t171 = ((x745<=x746)<=(x747-x748));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x749 = 462347686747128373LLU;
	int64_t x750 = -1LL;
	int16_t x752 = INT16_MIN;
	int32_t t172 = -1071;

    t172 = ((x749<=x750)<=(x751-x752));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x753 = 0U;
	uint16_t x754 = UINT16_MAX;
	volatile int16_t x755 = 11620;
	int8_t x756 = -1;
	volatile int32_t t173 = -349396;

    t173 = ((x753<=x754)<=(x755-x756));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x757 = 22874LLU;
	volatile int32_t x759 = INT32_MIN;
	int64_t x760 = INT64_MIN;
	int32_t t174 = -28181130;

    t174 = ((x757<=x758)<=(x759-x760));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x761 = 0;
	int8_t x762 = -1;
	volatile uint16_t x763 = 1214U;
	int64_t x764 = -1LL;
	volatile int32_t t175 = -17;

    t175 = ((x761<=x762)<=(x763-x764));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x765 = -1;
	volatile uint64_t x766 = 49150463646799LLU;
	static int32_t x768 = INT32_MAX;
	static int32_t t176 = 1;

    t176 = ((x765<=x766)<=(x767-x768));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x770 = 35;
	static volatile int32_t x771 = -41844;
	int8_t x772 = -58;
	volatile int32_t t177 = -1;

    t177 = ((x769<=x770)<=(x771-x772));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x773 = UINT64_MAX;
	uint16_t x774 = 18506U;
	static uint8_t x775 = UINT8_MAX;
	volatile uint8_t x776 = 2U;
	int32_t t178 = 517954092;

    t178 = ((x773<=x774)<=(x775-x776));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x777 = INT8_MIN;
	int32_t x778 = -16234;
	volatile int64_t x779 = -42500LL;
	volatile uint16_t x780 = UINT16_MAX;
	int32_t t179 = -34244;

    t179 = ((x777<=x778)<=(x779-x780));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x781 = -1LL;
	int8_t x783 = INT8_MIN;
	static uint16_t x784 = 0U;
	static volatile int32_t t180 = 0;

    t180 = ((x781<=x782)<=(x783-x784));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x785 = -1LL;
	uint32_t x786 = 1U;
	uint8_t x788 = UINT8_MAX;

    t181 = ((x785<=x786)<=(x787-x788));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x789 = INT32_MIN;
	int32_t x790 = INT32_MIN;
	int64_t x791 = -1LL;
	static int64_t x792 = INT64_MIN;
	volatile int32_t t182 = 33333;

    t182 = ((x789<=x790)<=(x791-x792));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x794 = INT64_MIN;
	static int16_t x796 = -1;
	static int32_t t183 = -3;

    t183 = ((x793<=x794)<=(x795-x796));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x801 = -1;
	uint16_t x803 = UINT16_MAX;
	int64_t x804 = INT64_MAX;
	int32_t t184 = 228;

    t184 = ((x801<=x802)<=(x803-x804));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x807 = INT16_MIN;
	int8_t x808 = INT8_MIN;
	static volatile int32_t t185 = 25093;

    t185 = ((x805<=x806)<=(x807-x808));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x813 = INT8_MIN;
	volatile int64_t x814 = -1LL;
	uint64_t x816 = UINT64_MAX;
	int32_t t186 = -301;

    t186 = ((x813<=x814)<=(x815-x816));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x817 = INT32_MIN;
	uint32_t x818 = UINT32_MAX;
	uint8_t x819 = UINT8_MAX;
	volatile int16_t x820 = -1;
	int32_t t187 = 858698;

    t187 = ((x817<=x818)<=(x819-x820));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x821 = 3U;
	int16_t x822 = INT16_MAX;
	uint8_t x823 = 0U;
	volatile int32_t t188 = -131289;

    t188 = ((x821<=x822)<=(x823-x824));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x825 = -1;
	int16_t x827 = 1;
	volatile int32_t t189 = -3299;

    t189 = ((x825<=x826)<=(x827-x828));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x829 = 28;
	static int32_t x831 = INT32_MAX;
	uint8_t x832 = 12U;
	static int32_t t190 = -7026;

    t190 = ((x829<=x830)<=(x831-x832));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x833 = 429U;
	int8_t x834 = 1;
	uint32_t x835 = UINT32_MAX;
	int32_t t191 = -1155803;

    t191 = ((x833<=x834)<=(x835-x836));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x837 = INT16_MIN;
	int64_t x838 = -1LL;
	int16_t x839 = INT16_MIN;
	int16_t x840 = -1;
	int32_t t192 = 100798446;

    t192 = ((x837<=x838)<=(x839-x840));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x841 = 121;
	int32_t x842 = -540;
	uint32_t x843 = 7204U;
	int8_t x844 = 62;

    t193 = ((x841<=x842)<=(x843-x844));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x845 = 3674126550199825279LLU;
	volatile uint8_t x846 = UINT8_MAX;
	uint16_t x847 = 5168U;
	uint8_t x848 = UINT8_MAX;
	volatile int32_t t194 = 3;

    t194 = ((x845<=x846)<=(x847-x848));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x850 = 107976676LLU;
	int32_t x851 = -1;
	volatile int8_t x852 = INT8_MIN;
	static volatile int32_t t195 = -3288924;

    t195 = ((x849<=x850)<=(x851-x852));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x854 = 3170306637537LLU;
	uint32_t x855 = 11464384U;
	volatile int64_t x856 = -7155714061LL;
	static int32_t t196 = 173874437;

    t196 = ((x853<=x854)<=(x855-x856));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x857 = INT32_MIN;
	int64_t x859 = 540080899542LL;
	int16_t x860 = INT16_MAX;
	volatile int32_t t197 = 0;

    t197 = ((x857<=x858)<=(x859-x860));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x861 = INT16_MAX;
	int64_t x863 = INT64_MAX;
	uint64_t x864 = UINT64_MAX;
	int32_t t198 = 112;

    t198 = ((x861<=x862)<=(x863-x864));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x865 = UINT32_MAX;
	uint32_t x868 = 0U;
	int32_t t199 = 59147676;

    t199 = ((x865<=x866)<=(x867-x868));

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

