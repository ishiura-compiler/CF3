
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

static int64_t x16 = INT64_MAX;
static volatile int32_t t2 = 601;
static uint8_t x33 = UINT8_MAX;
int64_t x45 = INT64_MIN;
int64_t x48 = INT64_MAX;
static volatile int16_t x54 = INT16_MAX;
static int32_t t9 = -748522;
uint16_t x58 = 620U;
int16_t x65 = 9;
volatile int16_t x68 = 128;
volatile int16_t x72 = -1;
volatile int8_t x73 = INT8_MIN;
int64_t x74 = INT64_MAX;
static volatile uint64_t x75 = 7LLU;
int32_t x76 = -2288;
static int64_t x81 = INT64_MIN;
int64_t x82 = -1959016392754238LL;
int64_t t15 = 28732396522167LL;
static volatile uint8_t x92 = 5U;
int32_t t17 = -197314;
static volatile int64_t x94 = INT64_MAX;
int64_t x103 = -5726586712506060LL;
static volatile int8_t x108 = -1;
volatile int32_t x112 = 1212;
volatile uint64_t t22 = 3LLU;
int8_t x129 = -1;
uint32_t x133 = UINT32_MAX;
volatile int32_t x134 = INT32_MIN;
int64_t x136 = -1LL;
int8_t x139 = 25;
int32_t x142 = -2085127;
int8_t x149 = INT8_MAX;
volatile int8_t x152 = 7;
int64_t t31 = 25544834134LL;
static int8_t x154 = 44;
uint8_t x155 = UINT8_MAX;
static int8_t x168 = INT8_MIN;
volatile uint8_t x179 = 19U;
volatile uint8_t x188 = 16U;
int8_t x199 = INT8_MIN;
int32_t x202 = -1;
int8_t x209 = INT8_MIN;
static int64_t x237 = -1LL;
int64_t x240 = INT64_MIN;
int64_t x246 = INT64_MAX;
static uint64_t t49 = 4725LLU;
uint32_t x254 = 35U;
int8_t x255 = INT8_MIN;
volatile int16_t x259 = INT16_MAX;
int16_t x266 = 3378;
uint32_t x269 = 109534U;
static uint32_t x272 = 77575U;
uint64_t t54 = 1669551615LLU;
volatile int64_t x277 = INT64_MAX;
uint32_t x284 = 1U;
uint64_t t57 = 6184228406921153LLU;
int16_t x292 = 116;
int16_t x297 = INT16_MIN;
int64_t x307 = 32539285308402LL;
volatile uint16_t x308 = UINT16_MAX;
uint32_t x322 = UINT32_MAX;
int8_t x323 = 45;
uint64_t t65 = 138072824899537842LLU;
volatile int32_t x327 = INT32_MIN;
static volatile int64_t t66 = -1LL;
volatile int32_t x334 = INT32_MIN;
static volatile int64_t t68 = 12948LL;
uint64_t t69 = 122791567LLU;
int16_t x341 = -1;
static int64_t t70 = 5098LL;
int64_t x345 = INT64_MAX;
volatile int32_t x348 = -1;
int8_t x352 = -15;
static uint32_t t72 = 7387U;
uint8_t x354 = UINT8_MAX;
uint16_t x357 = 1U;
static uint64_t t74 = 389982034761LLU;
int32_t x365 = INT32_MAX;
int32_t x366 = INT32_MAX;
int16_t x374 = INT16_MIN;
int64_t t76 = 92595LL;
int32_t x381 = INT32_MIN;
int8_t x382 = INT8_MIN;
int32_t x383 = INT32_MAX;
uint64_t x386 = 0LLU;
int64_t x392 = -38LL;
volatile int64_t t79 = -3676304201833LL;
int8_t x395 = -3;
uint32_t x401 = UINT32_MAX;
static volatile uint16_t x403 = 2U;
int32_t x409 = INT32_MAX;
uint8_t x417 = 29U;
volatile int32_t x422 = INT32_MIN;
int64_t t85 = 192377858225076999LL;
volatile int8_t x427 = INT8_MAX;
int32_t x433 = INT32_MAX;
int16_t x436 = INT16_MIN;
static int16_t x437 = INT16_MIN;
int64_t x440 = INT64_MIN;
int64_t t90 = -25759683068LL;
volatile int16_t x447 = INT16_MIN;
int32_t x449 = INT32_MIN;
int16_t x450 = 8093;
volatile int64_t x453 = 498207743972LL;
static int32_t x467 = INT32_MAX;
static int16_t x473 = INT16_MIN;
static int32_t x474 = INT32_MAX;
int16_t x476 = INT16_MIN;
static int32_t x478 = INT32_MIN;
volatile uint64_t t100 = 387330750887LLU;
volatile int64_t t101 = 275151157148LL;
uint16_t x489 = 40U;
uint64_t x495 = 23005541LLU;
static uint64_t x496 = UINT64_MAX;
static int16_t x498 = INT16_MAX;
int8_t x502 = -1;
int32_t x503 = INT32_MIN;
int16_t x504 = -1173;
int8_t x514 = 0;
int8_t x531 = -1;
volatile int32_t t110 = 5547;
volatile int32_t x535 = INT32_MIN;
int8_t x537 = INT8_MIN;
int64_t x573 = INT64_MAX;
uint16_t x575 = 0U;
uint64_t x577 = 87332778804LLU;
static int16_t x579 = INT16_MIN;
int8_t x589 = -1;
static int64_t x591 = INT64_MIN;
volatile int32_t t123 = 462;
int64_t t124 = -50365LL;
volatile uint64_t t126 = 873111761LLU;
int64_t x617 = INT64_MIN;
uint64_t x619 = UINT64_MAX;
uint64_t x621 = 899453896591928LLU;
uint32_t x624 = 1U;
uint16_t x629 = 6U;
int8_t x634 = INT8_MIN;
int64_t t131 = -3LL;
int16_t x640 = INT16_MIN;
int64_t x645 = INT64_MAX;
int16_t x654 = 77;
volatile uint8_t x659 = 0U;
int64_t x661 = -2260565LL;
static int32_t x662 = 2753;
int16_t x663 = -1;
int16_t x677 = INT16_MAX;
static int16_t x680 = INT16_MIN;
volatile uint64_t x682 = UINT64_MAX;
int16_t x684 = INT16_MIN;
static uint32_t x685 = UINT32_MAX;
int8_t x688 = -1;
int64_t x699 = INT64_MIN;
int16_t x701 = INT16_MIN;
static volatile uint64_t x708 = 445096295099506574LLU;
int64_t x709 = INT64_MIN;
volatile int16_t x712 = INT16_MIN;
static int16_t x713 = -25;
uint32_t x715 = 1750U;
volatile uint32_t t150 = 205743U;
uint8_t x722 = 8U;
int64_t t151 = 18149LL;
static int8_t x726 = INT8_MAX;
volatile uint32_t t152 = 555330U;
uint64_t x739 = 6263701926174702LLU;
static uint64_t x741 = UINT64_MAX;
volatile uint64_t x743 = UINT64_MAX;
volatile uint64_t t156 = 17986332675153468LLU;
static int16_t x746 = 64;
static int32_t t157 = 15410183;
static int16_t x749 = 9;
int32_t t158 = -36639;
static int16_t x754 = INT16_MAX;
uint64_t x755 = 142536700681154107LLU;
int32_t x757 = INT32_MAX;
static volatile int32_t t160 = 898644537;
uint8_t x763 = 3U;
volatile uint64_t x765 = 69453974497LLU;
volatile uint64_t t162 = 858LLU;
int16_t x769 = INT16_MIN;
uint8_t x775 = UINT8_MAX;
uint16_t x776 = 6768U;
int32_t t164 = 0;
uint16_t x779 = 3U;
uint32_t x787 = 46U;
uint8_t x793 = UINT8_MAX;
uint64_t x801 = 26060LLU;
uint16_t x805 = UINT16_MAX;
static uint32_t t172 = 1444160305U;
uint8_t x824 = 3U;
static volatile uint64_t t173 = 2629571055342LLU;
volatile uint32_t t174 = 213617U;
int64_t t175 = 0LL;
static int16_t x848 = INT16_MIN;
uint64_t t177 = 3LLU;
static uint32_t x857 = UINT32_MAX;
static int64_t x859 = -1LL;
static volatile int64_t t180 = 44068687626379356LL;
int16_t x873 = -14;
int16_t x880 = INT16_MAX;
volatile int32_t x882 = -1;
static volatile int8_t x883 = -51;
int16_t x884 = INT16_MIN;
int8_t x886 = INT8_MIN;
int8_t x897 = INT8_MAX;
uint8_t x902 = UINT8_MAX;
int32_t x903 = -1;
static int16_t x906 = INT16_MIN;
static volatile int64_t x910 = 3151789LL;
int64_t t192 = -1LL;
uint8_t x914 = 27U;
volatile uint8_t x918 = 3U;
uint16_t x922 = UINT16_MAX;
static uint32_t x924 = 7047U;
volatile uint16_t x930 = 77U;
uint64_t x940 = UINT64_MAX;
uint32_t x942 = UINT32_MAX;


void f0(void) {
    	int32_t x9 = 7376853;
	static int32_t x10 = -1;
	static uint64_t x11 = 152759977874880LLU;
	volatile int16_t x12 = INT16_MIN;
	volatile uint64_t t0 = 1725830962606626LLU;

    t0 = ((x9^x10)/(x11-x12));

    if (t0 != 120756LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x13 = 4U;
	static int16_t x14 = 1;
	int8_t x15 = INT8_MAX;
	int64_t t1 = -864921797LL;

    t1 = ((x13^x14)/(x15-x16));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = INT16_MIN;
	uint16_t x18 = UINT16_MAX;
	static int8_t x19 = INT8_MAX;
	int8_t x20 = INT8_MIN;

    t2 = ((x17^x18)/(x19-x20));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = -1;
	static volatile uint16_t x22 = UINT16_MAX;
	uint64_t x23 = UINT64_MAX;
	uint64_t x24 = 2421906598874970LLU;
	volatile uint64_t t3 = 1062LLU;

    t3 = ((x21^x22)/(x23-x24));

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x25 = 1029311LLU;
	int64_t x26 = -18380098029399LL;
	int64_t x27 = INT64_MIN;
	static volatile int64_t x28 = -86875884453LL;
	volatile uint64_t t4 = 3773971LLU;

    t4 = ((x25^x26)/(x27-x28));

    if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x34 = INT64_MAX;
	static volatile uint64_t x35 = 505087650563493376LLU;
	volatile int32_t x36 = 2;
	volatile uint64_t t5 = 28146107LLU;

    t5 = ((x33^x34)/(x35-x36));

    if (t5 != 18LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x41 = 0;
	int8_t x42 = -2;
	int32_t x43 = -1556655;
	volatile uint64_t x44 = 61352092332479845LLU;
	static volatile uint64_t t6 = 14393082178984997LLU;

    t6 = ((x41^x42)/(x43-x44));

    if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x46 = 4U;
	static int8_t x47 = 27;
	static volatile int64_t t7 = -56LL;

    t7 = ((x45^x46)/(x47-x48));

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x49 = UINT64_MAX;
	int32_t x50 = INT32_MIN;
	static volatile uint64_t x51 = 43LLU;
	uint32_t x52 = 1U;
	uint64_t t8 = 423410335486LLU;

    t8 = ((x49^x50)/(x51-x52));

    if (t8 != 51130563LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x53 = -58;
	volatile int8_t x55 = -1;
	volatile int8_t x56 = INT8_MIN;

    t9 = ((x53^x54)/(x55-x56));

    if (t9 != -257) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x57 = INT8_MIN;
	uint8_t x59 = 35U;
	int64_t x60 = INT64_MAX;
	int64_t t10 = 226923613970LL;

    t10 = ((x57^x58)/(x59-x60));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x61 = 2559U;
	int8_t x62 = INT8_MAX;
	volatile int8_t x63 = INT8_MIN;
	uint64_t x64 = 825316147LLU;
	static uint64_t t11 = 4251628128192LLU;

    t11 = ((x61^x62)/(x63-x64));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x66 = -1LL;
	int32_t x67 = -1;
	volatile int64_t t12 = -21007613036057LL;

    t12 = ((x65^x66)/(x67-x68));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x69 = INT64_MIN;
	volatile int16_t x70 = INT16_MAX;
	volatile int8_t x71 = INT8_MIN;
	int64_t t13 = 3998944741693LL;

    t13 = ((x69^x70)/(x71-x72));

    if (t13 != 72624976668147583LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t t14 = 89345510LLU;

    t14 = ((x73^x74)/(x75-x76));

    if (t14 != 4018898491004259LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MIN;

    t15 = ((x81^x82)/(x83-x84));

    if (t15 != 282518781264155LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x85 = -1LL;
	volatile int16_t x86 = 1;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MIN;
	uint64_t t16 = 124323990546818269LLU;

    t16 = ((x85^x86)/(x87-x88));

    if (t16 != 2LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x89 = INT8_MIN;
	int32_t x90 = 279712388;
	int16_t x91 = INT16_MIN;

    t17 = ((x89^x90)/(x91-x92));

    if (t17 != 8534) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x93 = INT16_MIN;
	volatile int64_t x95 = 887263476930663014LL;
	volatile int8_t x96 = INT8_MIN;
	volatile int64_t t18 = -1140204LL;

    t18 = ((x93^x94)/(x95-x96));

    if (t18 != -10LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x97 = UINT8_MAX;
	int8_t x98 = 3;
	int8_t x99 = 18;
	int8_t x100 = -1;
	int32_t t19 = 16169;

    t19 = ((x97^x98)/(x99-x100));

    if (t19 != 13) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x101 = INT16_MIN;
	static volatile uint32_t x102 = 22766U;
	uint16_t x104 = 272U;
	int64_t t20 = 16LL;

    t20 = ((x101^x102)/(x103-x104));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x105 = INT32_MAX;
	uint32_t x106 = UINT32_MAX;
	static volatile int32_t x107 = -60431386;
	volatile uint32_t t21 = 3709710U;

    t21 = ((x105^x106)/(x107-x108));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x109 = -13;
	int32_t x110 = -1;
	uint64_t x111 = 177067LLU;

    t22 = ((x109^x110)/(x111-x112));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x113 = -12151180LL;
	volatile int64_t x114 = -1LL;
	volatile int64_t x115 = INT64_MAX;
	uint64_t x116 = 1059060896674767711LLU;
	static volatile uint64_t t23 = 62374131734263341LLU;

    t23 = ((x113^x114)/(x115-x116));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x117 = -1;
	static int16_t x118 = -1;
	int32_t x119 = 235921388;
	uint32_t x120 = UINT32_MAX;
	uint32_t t24 = 30231699U;

    t24 = ((x117^x118)/(x119-x120));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x121 = 61155;
	uint16_t x122 = 10071U;
	uint16_t x123 = UINT16_MAX;
	uint64_t x124 = 26807474851809789LLU;
	uint64_t t25 = 7561721981329339LLU;

    t25 = ((x121^x122)/(x123-x124));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x125 = 17U;
	uint64_t x126 = 583750LLU;
	static uint32_t x127 = UINT32_MAX;
	uint64_t x128 = 2LLU;
	volatile uint64_t t26 = 59003493228LLU;

    t26 = ((x125^x126)/(x127-x128));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x130 = 11067;
	int8_t x131 = INT8_MIN;
	int32_t x132 = -1;
	int32_t t27 = -2031;

    t27 = ((x129^x130)/(x131-x132));

    if (t27 != 87) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x135 = UINT32_MAX;
	int64_t t28 = -249LL;

    t28 = ((x133^x134)/(x135-x136));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x137 = -1;
	int64_t x138 = 270707LL;
	volatile int64_t x140 = -16898145154461LL;
	int64_t t29 = 8LL;

    t29 = ((x137^x138)/(x139-x140));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x141 = 5944820U;
	volatile uint64_t x143 = UINT64_MAX;
	int32_t x144 = 1662830;
	volatile uint64_t t30 = 440122LLU;

    t30 = ((x141^x142)/(x143-x144));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x150 = INT64_MAX;
	static int8_t x151 = INT8_MIN;

    t31 = ((x149^x150)/(x151-x152));

    if (t31 != -68321274347072412LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x153 = 16U;
	uint32_t x156 = 8086U;
	static uint32_t t32 = 25053261U;

    t32 = ((x153^x154)/(x155-x156));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x165 = INT16_MIN;
	static uint64_t x166 = UINT64_MAX;
	uint8_t x167 = UINT8_MAX;
	static volatile uint64_t t33 = 350420998368289LLU;

    t33 = ((x165^x166)/(x167-x168));

    if (t33 != 85LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x169 = 3507386705LLU;
	static uint16_t x170 = 3637U;
	uint32_t x171 = 6U;
	int16_t x172 = INT16_MIN;
	uint64_t t34 = 48772510877958LLU;

    t34 = ((x169^x170)/(x171-x172));

    if (t34 != 107017LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x173 = INT16_MAX;
	uint64_t x174 = 11133929737LLU;
	static int64_t x175 = 26522245582708130LL;
	int64_t x176 = 1686LL;
	static volatile uint64_t t35 = 3908791621016LLU;

    t35 = ((x173^x174)/(x175-x176));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x177 = -65;
	uint8_t x178 = 8U;
	int16_t x180 = INT16_MIN;
	int32_t t36 = -40147;

    t36 = ((x177^x178)/(x179-x180));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x181 = 76269660684971LLU;
	volatile int64_t x182 = 18234204829782667LL;
	uint64_t x183 = UINT64_MAX;
	uint32_t x184 = 85893336U;
	volatile uint64_t t37 = 33602619851542881LLU;

    t37 = ((x181^x182)/(x183-x184));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x185 = -67;
	static int32_t x186 = 0;
	volatile int8_t x187 = INT8_MIN;
	volatile int32_t t38 = -4858;

    t38 = ((x185^x186)/(x187-x188));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x189 = INT16_MIN;
	volatile uint8_t x190 = 3U;
	static int16_t x191 = -1;
	int16_t x192 = 1;
	static int32_t t39 = -15848;

    t39 = ((x189^x190)/(x191-x192));

    if (t39 != 16382) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x197 = -1;
	static uint8_t x198 = 1U;
	static uint32_t x200 = 2227731U;
	uint32_t t40 = 7U;

    t40 = ((x197^x198)/(x199-x200));

    if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x201 = -20;
	uint32_t x203 = 409U;
	int32_t x204 = -1;
	static uint32_t t41 = 1315244U;

    t41 = ((x201^x202)/(x203-x204));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x210 = INT8_MAX;
	int16_t x211 = INT16_MIN;
	static int8_t x212 = INT8_MIN;
	int32_t t42 = 4936506;

    t42 = ((x209^x210)/(x211-x212));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x213 = INT64_MAX;
	uint64_t x214 = UINT64_MAX;
	static int64_t x215 = INT64_MIN;
	int64_t x216 = -107859115932310LL;
	uint64_t t43 = 144998285LLU;

    t43 = ((x213^x214)/(x215-x216));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x217 = -23421276LL;
	int8_t x218 = INT8_MIN;
	volatile uint16_t x219 = 374U;
	uint8_t x220 = 40U;
	volatile int64_t t44 = -132796242104654LL;

    t44 = ((x217^x218)/(x219-x220));

    if (t44 != 70123LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x229 = 37387;
	int8_t x230 = INT8_MAX;
	uint64_t x231 = 3347LLU;
	int16_t x232 = INT16_MIN;
	uint64_t t45 = 194LLU;

    t45 = ((x229^x230)/(x231-x232));

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x233 = 47U;
	int8_t x234 = INT8_MAX;
	int16_t x235 = 1;
	uint64_t x236 = 11LLU;
	volatile uint64_t t46 = 2520566436028884247LLU;

    t46 = ((x233^x234)/(x235-x236));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x238 = -9;
	static int64_t x239 = -202384LL;
	int64_t t47 = 18LL;

    t47 = ((x237^x238)/(x239-x240));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x241 = 0U;
	int32_t x242 = -1;
	uint64_t x243 = 298LLU;
	uint16_t x244 = 196U;
	volatile uint64_t t48 = 10650512LLU;

    t48 = ((x241^x242)/(x243-x244));

    if (t48 != 180850432095191682LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x245 = UINT64_MAX;
	static volatile uint8_t x247 = 0U;
	int32_t x248 = INT32_MAX;

    t49 = ((x245^x246)/(x247-x248));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x249 = 6;
	uint8_t x250 = UINT8_MAX;
	int32_t x251 = INT32_MIN;
	uint32_t x252 = 5498573U;
	volatile uint32_t t50 = 236905849U;

    t50 = ((x249^x250)/(x251-x252));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x253 = INT64_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t51 = 851131844061688LL;

    t51 = ((x253^x254)/(x255-x256));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x257 = INT32_MIN;
	int16_t x258 = -113;
	int8_t x260 = -15;
	int32_t t52 = -2556;

    t52 = ((x257^x258)/(x259-x260));

    if (t52 != 65508) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x265 = 2U;
	int32_t x267 = -165598;
	volatile int32_t x268 = -33491442;
	int32_t t53 = -2315659;

    t53 = ((x265^x266)/(x267-x268));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x270 = INT8_MIN;
	uint64_t x271 = UINT64_MAX;

    t54 = ((x269^x270)/(x271-x272));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x273 = INT8_MAX;
	uint8_t x274 = 52U;
	int8_t x275 = -6;
	static int64_t x276 = -1LL;
	int64_t t55 = -270617201872LL;

    t55 = ((x273^x274)/(x275-x276));

    if (t55 != -15LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x278 = INT16_MAX;
	int8_t x279 = INT8_MIN;
	uint8_t x280 = 2U;
	volatile int64_t t56 = -193607439687592LL;

    t56 = ((x277^x278)/(x279-x280));

    if (t56 != -70949015668113408LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x281 = -1;
	uint64_t x282 = UINT64_MAX;
	volatile uint8_t x283 = UINT8_MAX;

    t57 = ((x281^x282)/(x283-x284));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x285 = -1;
	int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MIN;
	static volatile uint32_t x288 = 182556U;
	int64_t t58 = 66938531154691506LL;

    t58 = ((x285^x286)/(x287-x288));

    if (t58 != 4295332439LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x289 = -1;
	uint64_t x290 = 3599340470LLU;
	static int16_t x291 = -430;
	uint64_t t59 = 8201234750065507234LLU;

    t59 = ((x289^x290)/(x291-x292));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x298 = -1;
	static uint8_t x299 = UINT8_MAX;
	int32_t x300 = INT32_MAX;
	volatile int32_t t60 = 71;

    t60 = ((x297^x298)/(x299-x300));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x301 = INT8_MIN;
	int16_t x302 = -111;
	uint8_t x303 = 12U;
	int8_t x304 = 15;
	volatile int32_t t61 = 25397;

    t61 = ((x301^x302)/(x303-x304));

    if (t61 != -5) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x305 = 110635LLU;
	int8_t x306 = 0;
	volatile uint64_t t62 = 4LLU;

    t62 = ((x305^x306)/(x307-x308));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x309 = 44U;
	int64_t x310 = 1979423508LL;
	int64_t x311 = -13178883364559659LL;
	volatile int8_t x312 = -1;
	volatile int64_t t63 = 10868327182LL;

    t63 = ((x309^x310)/(x311-x312));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x313 = 136569745LLU;
	int32_t x314 = -1;
	int8_t x315 = INT8_MIN;
	int32_t x316 = -161836062;
	volatile uint64_t t64 = 14615488401314335LLU;

    t64 = ((x313^x314)/(x315-x316));

    if (t64 != 113984228456LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x321 = UINT64_MAX;
	int16_t x324 = INT16_MIN;

    t65 = ((x321^x322)/(x323-x324));

    if (t65 != 562177919404339LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x325 = INT64_MAX;
	volatile int8_t x326 = -1;
	static volatile uint32_t x328 = 62U;

    t66 = ((x325^x326)/(x327-x328));

    if (t66 != -4294967420LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x329 = 32645624913641LLU;
	int16_t x330 = INT16_MAX;
	int8_t x331 = INT8_MIN;
	uint64_t x332 = 15051930908LLU;
	volatile uint64_t t67 = 2689LLU;

    t67 = ((x329^x330)/(x331-x332));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x333 = INT64_MIN;
	static int32_t x335 = -6640;
	static int8_t x336 = INT8_MIN;

    t68 = ((x333^x334)/(x335-x336));

    if (t68 != -1416365484445222LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x337 = INT8_MIN;
	volatile uint16_t x338 = 0U;
	volatile uint64_t x339 = UINT64_MAX;
	static volatile int32_t x340 = INT32_MAX;

    t69 = ((x337^x338)/(x339-x340));

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x342 = -25;
	int64_t x343 = -1LL;
	int32_t x344 = INT32_MIN;

    t70 = ((x341^x342)/(x343-x344));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x346 = INT8_MIN;
	int8_t x347 = 0;
	static int64_t t71 = -2897714442231LL;

    t71 = ((x345^x346)/(x347-x348));

    if (t71 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x349 = UINT8_MAX;
	int8_t x350 = INT8_MAX;
	uint32_t x351 = 0U;

    t72 = ((x349^x350)/(x351-x352));

    if (t72 != 8U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x353 = -1;
	uint8_t x355 = 0U;
	volatile int32_t x356 = 4;
	volatile int32_t t73 = 20114677;

    t73 = ((x353^x354)/(x355-x356));

    if (t73 != 64) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x358 = -3;
	uint64_t x359 = 49145932747994099LLU;
	volatile int64_t x360 = -1893068055LL;

    t74 = ((x357^x358)/(x359-x360));

    if (t74 != 375LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x367 = INT8_MIN;
	static int32_t x368 = 350420914;
	volatile int32_t t75 = 392223442;

    t75 = ((x365^x366)/(x367-x368));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x373 = -1;
	int16_t x375 = INT16_MIN;
	int64_t x376 = 1541LL;

    t76 = ((x373^x374)/(x375-x376));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x384 = 1;
	int32_t t77 = 277740673;

    t77 = ((x381^x382)/(x383-x384));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x385 = -715826486;
	uint32_t x387 = 147774U;
	uint8_t x388 = 0U;
	uint64_t t78 = 15675513LLU;

    t78 = ((x385^x386)/(x387-x388));

    if (t78 != 124830782634250LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x389 = 1U;
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MIN;

    t79 = ((x389^x390)/(x391-x392));

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x393 = -3;
	uint16_t x394 = 37U;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t80 = 14093913;

    t80 = ((x393^x394)/(x395-x396));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x402 = INT16_MIN;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t81 = 9168318172352144240LLU;

    t81 = ((x401^x402)/(x403-x404));

    if (t81 != 10922LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x405 = 416U;
	uint16_t x406 = 29U;
	volatile int16_t x407 = -1;
	static int32_t x408 = INT32_MIN;
	static uint32_t t82 = 921U;

    t82 = ((x405^x406)/(x407-x408));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x410 = -1666882;
	static int32_t x411 = -82939515;
	int8_t x412 = -1;
	int32_t t83 = -27454;

    t83 = ((x409^x410)/(x411-x412));

    if (t83 != 25) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x418 = 6U;
	int32_t x419 = INT32_MIN;
	uint32_t x420 = UINT32_MAX;
	uint32_t t84 = 72108770U;

    t84 = ((x417^x418)/(x419-x420));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x421 = INT8_MAX;
	uint32_t x423 = UINT32_MAX;
	static int64_t x424 = INT64_MAX;

    t85 = ((x421^x422)/(x423-x424));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x425 = 4193956;
	int64_t x426 = -1LL;
	uint32_t x428 = 249U;
	static volatile int64_t t86 = 45761888LL;

    t86 = ((x425^x426)/(x427-x428));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x429 = 28638U;
	int64_t x430 = -10434511234LL;
	static uint64_t x431 = 57821LLU;
	uint64_t x432 = 799724192LLU;
	uint64_t t87 = 0LLU;

    t87 = ((x429^x430)/(x431-x432));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x434 = INT64_MIN;
	int64_t x435 = 6735249LL;
	int64_t t88 = 848968463377LL;

    t88 = ((x433^x434)/(x435-x436));

    if (t88 != -1362787953208LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x438 = INT8_MAX;
	int8_t x439 = -1;
	int64_t t89 = -101379LL;

    t89 = ((x437^x438)/(x439-x440));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x441 = -1;
	int64_t x442 = INT64_MAX;
	volatile uint8_t x443 = UINT8_MAX;
	int16_t x444 = 917;

    t90 = ((x441^x442)/(x443-x444));

    if (t90 != 13932586158390900LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x445 = UINT8_MAX;
	static volatile uint32_t x446 = 6953U;
	volatile int64_t x448 = -1LL;
	volatile int64_t t91 = -66LL;

    t91 = ((x445^x446)/(x447-x448));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x451 = INT16_MIN;
	static volatile uint32_t x452 = 12414U;
	volatile uint32_t t92 = 104U;

    t92 = ((x449^x450)/(x451-x452));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x454 = 542887LLU;
	int32_t x455 = -6548;
	int8_t x456 = INT8_MAX;
	volatile uint64_t t93 = 4373843803962851LLU;

    t93 = ((x453^x454)/(x455-x456));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x457 = INT64_MAX;
	int8_t x458 = -1;
	volatile int8_t x459 = INT8_MIN;
	static int8_t x460 = 35;
	int64_t t94 = -58146985855460593LL;

    t94 = ((x457^x458)/(x459-x460));

    if (t94 != 56585104520581446LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x461 = UINT16_MAX;
	uint16_t x462 = UINT16_MAX;
	int8_t x463 = INT8_MIN;
	volatile uint8_t x464 = 5U;
	volatile int32_t t95 = -15725479;

    t95 = ((x461^x462)/(x463-x464));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x465 = 3817U;
	int8_t x466 = 0;
	uint32_t x468 = 9U;
	uint32_t t96 = 9U;

    t96 = ((x465^x466)/(x467-x468));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x469 = INT16_MIN;
	static int8_t x470 = -1;
	static uint32_t x471 = UINT32_MAX;
	volatile uint8_t x472 = UINT8_MAX;
	volatile uint32_t t97 = 76U;

    t97 = ((x469^x470)/(x471-x472));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x475 = INT32_MIN;
	int32_t t98 = -182162128;

    t98 = ((x473^x474)/(x475-x476));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x477 = -3;
	uint8_t x479 = UINT8_MAX;
	volatile uint32_t x480 = 113U;
	uint32_t t99 = 321U;

    t99 = ((x477^x478)/(x479-x480));

    if (t99 != 15123124U) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x481 = 5U;
	volatile int16_t x482 = -1;
	uint64_t x483 = UINT64_MAX;
	int16_t x484 = -65;

    t100 = ((x481^x482)/(x483-x484));

    if (t100 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x485 = INT32_MIN;
	static uint8_t x486 = UINT8_MAX;
	int64_t x487 = INT64_MAX;
	int16_t x488 = INT16_MAX;

    t101 = ((x485^x486)/(x487-x488));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x490 = INT64_MIN;
	int32_t x491 = -1;
	uint64_t x492 = 147796LLU;
	uint64_t t102 = 3LLU;

    t102 = ((x489^x490)/(x491-x492));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x493 = -27;
	uint32_t x494 = 983U;
	static uint64_t t103 = 1599647946499200LLU;

    t103 = ((x493^x494)/(x495-x496));

    if (t103 != 186LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x497 = 7;
	static volatile uint8_t x499 = 3U;
	static int16_t x500 = 619;
	static int32_t t104 = -23;

    t104 = ((x497^x498)/(x499-x500));

    if (t104 != -53) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x501 = INT16_MAX;
	int32_t t105 = 4486;

    t105 = ((x501^x502)/(x503-x504));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x505 = 1011;
	int16_t x506 = 8126;
	int8_t x507 = INT8_MIN;
	int32_t x508 = INT32_MIN;
	volatile int32_t t106 = -50;

    t106 = ((x505^x506)/(x507-x508));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x513 = 3679U;
	static uint8_t x515 = 3U;
	uint64_t x516 = UINT64_MAX;
	volatile uint64_t t107 = 120872859LLU;

    t107 = ((x513^x514)/(x515-x516));

    if (t107 != 919LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x521 = 142060308U;
	static uint32_t x522 = 791160U;
	volatile int64_t x523 = INT64_MIN;
	uint64_t x524 = 10LLU;
	uint64_t t108 = 12733096596446LLU;

    t108 = ((x521^x522)/(x523-x524));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x525 = -6;
	static volatile int16_t x526 = 15;
	static int16_t x527 = -1;
	static int32_t x528 = INT32_MIN;
	int32_t t109 = 2488;

    t109 = ((x525^x526)/(x527-x528));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x529 = -3;
	volatile uint8_t x530 = UINT8_MAX;
	volatile int32_t x532 = INT32_MIN;

    t110 = ((x529^x530)/(x531-x532));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x533 = -1LL;
	int32_t x534 = 766;
	uint64_t x536 = 3259LLU;
	uint64_t t111 = 2289LLU;

    t111 = ((x533^x534)/(x535-x536));

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x538 = INT8_MAX;
	int32_t x539 = 699;
	volatile int16_t x540 = INT16_MAX;
	volatile int32_t t112 = -7234671;

    t112 = ((x537^x538)/(x539-x540));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x541 = UINT64_MAX;
	int8_t x542 = INT8_MAX;
	volatile int32_t x543 = -20064;
	static uint32_t x544 = 7624216U;
	volatile uint64_t t113 = 42003444064269054LLU;

    t113 = ((x541^x542)/(x543-x544));

    if (t113 != 4302625205LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x545 = -1;
	static int64_t x546 = 34173004807057224LL;
	int64_t x547 = INT64_MAX;
	volatile uint64_t x548 = 873761174295923LLU;
	volatile uint64_t t114 = 91284LLU;

    t114 = ((x545^x546)/(x547-x548));

    if (t114 != 1LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x549 = 0U;
	uint64_t x550 = UINT64_MAX;
	int16_t x551 = -5;
	volatile uint64_t x552 = 1767726169877362LLU;
	volatile uint64_t t115 = 0LLU;

    t115 = ((x549^x550)/(x551-x552));

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x553 = 31786U;
	volatile int16_t x554 = INT16_MAX;
	static int64_t x555 = 467574LL;
	int8_t x556 = INT8_MIN;
	static volatile int64_t t116 = -1LL;

    t116 = ((x553^x554)/(x555-x556));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x557 = INT64_MIN;
	volatile int8_t x558 = INT8_MAX;
	static volatile int16_t x559 = -1;
	volatile int64_t x560 = INT64_MIN;
	int64_t t117 = -26295235LL;

    t117 = ((x557^x558)/(x559-x560));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x561 = 59034330310394899LLU;
	uint8_t x562 = UINT8_MAX;
	volatile int32_t x563 = INT32_MIN;
	uint32_t x564 = 3656392U;
	volatile uint64_t t118 = 2022117317418LLU;

    t118 = ((x561^x562)/(x563-x564));

    if (t118 != 27536887LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x574 = -1;
	static int64_t x576 = -1LL;
	int64_t t119 = INT64_MIN;

    t119 = ((x573^x574)/(x575-x576));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x578 = INT64_MIN;
	int32_t x580 = 7580814;
	static uint64_t t120 = 8966883706850967282LLU;

    t120 = ((x577^x578)/(x579-x580));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x581 = -701;
	volatile int32_t x582 = INT32_MIN;
	uint16_t x583 = 1U;
	static uint16_t x584 = UINT16_MAX;
	volatile int32_t t121 = 93887016;

    t121 = ((x581^x582)/(x583-x584));

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x590 = 108U;
	uint64_t x592 = UINT64_MAX;
	volatile uint64_t t122 = 4614320075LLU;

    t122 = ((x589^x590)/(x591-x592));

    if (t122 != 1LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x597 = INT16_MIN;
	static int16_t x598 = -2014;
	volatile int8_t x599 = INT8_MIN;
	static int16_t x600 = 1;

    t123 = ((x597^x598)/(x599-x600));

    if (t123 != -238) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x601 = -1LL;
	int8_t x602 = INT8_MIN;
	uint16_t x603 = 27578U;
	int16_t x604 = 0;

    t124 = ((x601^x602)/(x603-x604));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x605 = INT8_MIN;
	int16_t x606 = INT16_MIN;
	uint32_t x607 = 12531826U;
	static uint32_t x608 = UINT32_MAX;
	uint32_t t125 = 14U;

    t125 = ((x605^x606)/(x607-x608));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x609 = -98111;
	int8_t x610 = INT8_MAX;
	uint64_t x611 = UINT64_MAX;
	int8_t x612 = INT8_MIN;

    t126 = ((x609^x610)/(x611-x612));

    if (t126 != 145249953336294909LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x618 = -29;
	int16_t x620 = INT16_MIN;
	uint64_t t127 = 636621708938LLU;

    t127 = ((x617^x618)/(x619-x620));

    if (t127 != 281483566907399LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x622 = INT16_MIN;
	int8_t x623 = 2;
	uint64_t t128 = 17332832796440LLU;

    t128 = ((x621^x622)/(x623-x624));

    if (t128 != 18445844619812932152LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x625 = INT64_MIN;
	static int16_t x626 = -481;
	static uint64_t x627 = UINT64_MAX;
	int64_t x628 = -16194371464664434LL;
	uint64_t t129 = 848996LLU;

    t129 = ((x625^x626)/(x627-x628));

    if (t129 != 569LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x630 = -1;
	int16_t x631 = INT16_MIN;
	int64_t x632 = INT64_MIN;
	volatile int64_t t130 = -231972719355990LL;

    t130 = ((x629^x630)/(x631-x632));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x633 = -24;
	int8_t x635 = 3;
	int64_t x636 = -102049093012LL;

    t131 = ((x633^x634)/(x635-x636));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x637 = INT16_MAX;
	int16_t x638 = 15;
	volatile uint8_t x639 = 5U;
	int32_t t132 = 5;

    t132 = ((x637^x638)/(x639-x640));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x641 = -1;
	int16_t x642 = INT16_MAX;
	static uint32_t x643 = 3730213U;
	uint16_t x644 = UINT16_MAX;
	static volatile uint32_t t133 = 524664096U;

    t133 = ((x641^x642)/(x643-x644));

    if (t133 != 1171U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x646 = INT32_MAX;
	uint32_t x647 = UINT32_MAX;
	uint64_t x648 = 23049861LLU;
	volatile uint64_t t134 = 138445023LLU;

    t134 = ((x645^x646)/(x647-x648));

    if (t134 != 2159070763LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x649 = -1;
	int8_t x650 = 0;
	int8_t x651 = 0;
	int8_t x652 = -39;
	volatile int32_t t135 = 606018324;

    t135 = ((x649^x650)/(x651-x652));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x653 = -128684LL;
	volatile int16_t x655 = 1198;
	int64_t x656 = -392803780176447281LL;
	int64_t t136 = 121LL;

    t136 = ((x653^x654)/(x655-x656));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x657 = UINT8_MAX;
	volatile int64_t x658 = 815036366153624LL;
	uint32_t x660 = 1725U;
	volatile int64_t t137 = -6822264522533510LL;

    t137 = ((x657^x658)/(x659-x660));

    if (t137 != 189765LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x664 = 15493502U;
	static int64_t t138 = -8166LL;

    t138 = ((x661^x662)/(x663-x664));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x669 = UINT64_MAX;
	int16_t x670 = -1;
	int16_t x671 = INT16_MIN;
	int32_t x672 = -1;
	static uint64_t t139 = 111LLU;

    t139 = ((x669^x670)/(x671-x672));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x673 = INT64_MIN;
	int16_t x674 = -1;
	static int16_t x675 = INT16_MAX;
	volatile uint64_t x676 = 1335575LLU;
	static volatile uint64_t t140 = 4582870037587893LLU;

    t140 = ((x673^x674)/(x675-x676));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x678 = -1;
	int8_t x679 = 0;
	int32_t t141 = -16063895;

    t141 = ((x677^x678)/(x679-x680));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x681 = 8LLU;
	int8_t x683 = -28;
	volatile uint64_t t142 = 26230814386142LLU;

    t142 = ((x681^x682)/(x683-x684));

    if (t142 != 563431401151788LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x686 = -1;
	int8_t x687 = -17;
	static uint32_t t143 = 36797566U;

    t143 = ((x685^x686)/(x687-x688));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x689 = 0U;
	volatile int32_t x690 = -12037;
	static volatile int32_t x691 = -507;
	int64_t x692 = -1LL;
	int64_t t144 = 6458973147975730LL;

    t144 = ((x689^x690)/(x691-x692));

    if (t144 != 23LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x697 = 6691402LLU;
	static uint16_t x698 = 368U;
	int32_t x700 = INT32_MIN;
	static volatile uint64_t t145 = 1LLU;

    t145 = ((x697^x698)/(x699-x700));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x702 = UINT16_MAX;
	static int8_t x703 = -1;
	int16_t x704 = INT16_MAX;
	static volatile int32_t t146 = -31213652;

    t146 = ((x701^x702)/(x703-x704));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x705 = UINT16_MAX;
	static uint8_t x706 = UINT8_MAX;
	static int8_t x707 = INT8_MIN;
	volatile uint64_t t147 = 153517LLU;

    t147 = ((x705^x706)/(x707-x708));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x710 = 7461U;
	static volatile int64_t x711 = INT64_MIN;
	static int64_t t148 = -2109LL;

    t148 = ((x709^x710)/(x711-x712));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x714 = -1;
	static int16_t x716 = -11;
	static uint32_t t149 = 8U;

    t149 = ((x713^x714)/(x715-x716));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x717 = 0U;
	volatile uint32_t x718 = UINT32_MAX;
	int8_t x719 = INT8_MIN;
	uint16_t x720 = UINT16_MAX;

    t150 = ((x717^x718)/(x719-x720));

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x721 = INT16_MIN;
	volatile uint16_t x723 = UINT16_MAX;
	int64_t x724 = -579354LL;

    t151 = ((x721^x722)/(x723-x724));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x725 = -18332276;
	int8_t x727 = INT8_MAX;
	uint32_t x728 = 13640U;

    t152 = ((x725^x726)/(x727-x728));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x729 = -1;
	int16_t x730 = INT16_MAX;
	static int8_t x731 = -1;
	volatile int8_t x732 = INT8_MAX;
	volatile int32_t t153 = -1;

    t153 = ((x729^x730)/(x731-x732));

    if (t153 != 256) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x733 = 900;
	volatile uint32_t x734 = 217976U;
	int16_t x735 = INT16_MIN;
	int32_t x736 = -1;
	uint32_t t154 = 111U;

    t154 = ((x733^x734)/(x735-x736));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x737 = 245453766U;
	int32_t x738 = -547642;
	uint64_t x740 = 4127997821LLU;
	volatile uint64_t t155 = 4LLU;

    t155 = ((x737^x738)/(x739-x740));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x742 = INT32_MAX;
	int16_t x744 = -14705;

    t156 = ((x741^x742)/(x743-x744));

    if (t156 != 1254539177880989LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x745 = 19;
	int32_t x747 = INT32_MAX;
	int8_t x748 = INT8_MAX;

    t157 = ((x745^x746)/(x747-x748));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x750 = 4503;
	volatile uint8_t x751 = UINT8_MAX;
	int16_t x752 = INT16_MIN;

    t158 = ((x749^x750)/(x751-x752));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x753 = INT64_MAX;
	uint64_t x756 = 1LLU;
	static uint64_t t159 = 2905379653LLU;

    t159 = ((x753^x754)/(x755-x756));

    if (t159 != 64LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x758 = -1;
	volatile int32_t x759 = 3182;
	int32_t x760 = -246909558;

    t160 = ((x757^x758)/(x759-x760));

    if (t160 != -8) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x761 = -1;
	int32_t x762 = -1;
	int16_t x764 = -1;
	volatile int32_t t161 = 224322392;

    t161 = ((x761^x762)/(x763-x764));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x766 = INT16_MAX;
	uint16_t x767 = UINT16_MAX;
	volatile uint32_t x768 = UINT32_MAX;

    t162 = ((x765^x766)/(x767-x768));

    if (t162 != 1059783LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x770 = INT8_MIN;
	int64_t x771 = INT64_MIN;
	uint64_t x772 = 3924475645LLU;
	volatile uint64_t t163 = 2327458948840LLU;

    t163 = ((x769^x770)/(x771-x772));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x773 = 1618;
	uint16_t x774 = UINT16_MAX;

    t164 = ((x773^x774)/(x775-x776));

    if (t164 != -9) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x777 = -8;
	int32_t x778 = -891607225;
	int32_t x780 = -28;
	volatile int32_t t165 = 8;

    t165 = ((x777^x778)/(x779-x780));

    if (t165 != 28761523) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x785 = 3995920;
	static volatile int8_t x786 = 28;
	uint32_t x788 = 234633382U;
	volatile uint32_t t166 = 17U;

    t166 = ((x785^x786)/(x787-x788));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x789 = UINT8_MAX;
	volatile int16_t x790 = -1;
	int16_t x791 = INT16_MIN;
	uint32_t x792 = 101458050U;
	volatile uint32_t t167 = 258724U;

    t167 = ((x789^x790)/(x791-x792));

    if (t167 != 1U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x794 = 1U;
	static int32_t x795 = 149;
	volatile int32_t x796 = -1;
	int32_t t168 = -202890;

    t168 = ((x793^x794)/(x795-x796));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x802 = 30U;
	static int16_t x803 = INT16_MAX;
	int8_t x804 = -1;
	static uint64_t t169 = 52256LLU;

    t169 = ((x801^x802)/(x803-x804));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x806 = 2U;
	uint8_t x807 = 2U;
	uint64_t x808 = UINT64_MAX;
	static volatile uint64_t t170 = 143760327716942386LLU;

    t170 = ((x805^x806)/(x807-x808));

    if (t170 != 21844LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x809 = 636U;
	int8_t x810 = -4;
	uint16_t x811 = 32011U;
	volatile int8_t x812 = INT8_MAX;
	volatile uint32_t t171 = 6U;

    t171 = ((x809^x810)/(x811-x812));

    if (t171 != 134706U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x817 = -2;
	volatile int32_t x818 = INT32_MIN;
	uint16_t x819 = 0U;
	volatile uint32_t x820 = 3093U;

    t172 = ((x817^x818)/(x819-x820));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x821 = -4;
	static int32_t x822 = INT32_MAX;
	volatile uint64_t x823 = UINT64_MAX;

    t173 = ((x821^x822)/(x823-x824));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x825 = UINT32_MAX;
	static uint8_t x826 = UINT8_MAX;
	static int16_t x827 = -1;
	volatile int16_t x828 = INT16_MAX;

    t174 = ((x825^x826)/(x827-x828));

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x833 = INT16_MIN;
	int64_t x834 = INT64_MIN;
	uint8_t x835 = 0U;
	static uint8_t x836 = 4U;

    t175 = ((x833^x834)/(x835-x836));

    if (t175 != -2305843009213685760LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x845 = 2058;
	static int64_t x846 = -1LL;
	int8_t x847 = -1;
	static volatile int64_t t176 = 993077356LL;

    t176 = ((x845^x846)/(x847-x848));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x849 = 1770782766920280023LLU;
	int32_t x850 = -872;
	int32_t x851 = INT32_MIN;
	volatile int32_t x852 = -959935906;

    t177 = ((x849^x850)/(x851-x852));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x853 = UINT32_MAX;
	uint8_t x854 = UINT8_MAX;
	volatile int8_t x855 = INT8_MIN;
	int32_t x856 = -489837;
	volatile uint32_t t178 = 0U;

    t178 = ((x853^x854)/(x855-x856));

    if (t178 != 8770U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x858 = 1;
	int8_t x860 = -12;
	static volatile int64_t t179 = 2295113LL;

    t179 = ((x857^x858)/(x859-x860));

    if (t179 != 390451572LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x861 = 40034030057LL;
	static volatile uint16_t x862 = 2U;
	static uint8_t x863 = 29U;
	volatile uint8_t x864 = 0U;

    t180 = ((x861^x862)/(x863-x864));

    if (t180 != 1380483795LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint8_t x865 = 2U;
	int64_t x866 = INT64_MAX;
	int8_t x867 = -8;
	volatile int16_t x868 = -1;
	volatile int64_t t181 = 6LL;

    t181 = ((x865^x866)/(x867-x868));

    if (t181 != -1317624576693539400LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x869 = INT16_MAX;
	int64_t x870 = INT64_MAX;
	int8_t x871 = INT8_MAX;
	int16_t x872 = -1;
	static int64_t t182 = -1365096319495900840LL;

    t182 = ((x869^x870)/(x871-x872));

    if (t182 != 72057594037927680LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x874 = 30;
	uint8_t x875 = UINT8_MAX;
	int16_t x876 = -359;
	int32_t t183 = -462094;

    t183 = ((x873^x874)/(x875-x876));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x877 = INT64_MIN;
	int8_t x878 = INT8_MIN;
	int16_t x879 = INT16_MIN;
	int64_t t184 = 5595LL;

    t184 = ((x877^x878)/(x879-x880));

    if (t184 != -140739635871744LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x881 = INT32_MIN;
	int32_t t185 = 255812;

    t185 = ((x881^x882)/(x883-x884));

    if (t185 != 65638) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x885 = 186303870LLU;
	volatile uint8_t x887 = 3U;
	uint16_t x888 = UINT16_MAX;
	uint64_t t186 = 24259129LLU;

    t186 = ((x885^x886)/(x887-x888));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint32_t x889 = 493318U;
	int16_t x890 = INT16_MIN;
	int32_t x891 = -1;
	uint8_t x892 = UINT8_MAX;
	static volatile uint32_t t187 = 47853001U;

    t187 = ((x889^x890)/(x891-x892));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x893 = INT8_MAX;
	static int16_t x894 = 7;
	int32_t x895 = INT32_MAX;
	volatile uint16_t x896 = 56U;
	volatile int32_t t188 = -228548315;

    t188 = ((x893^x894)/(x895-x896));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x898 = INT32_MIN;
	uint32_t x899 = 117552U;
	static int16_t x900 = -236;
	volatile uint32_t t189 = 186495U;

    t189 = ((x897^x898)/(x899-x900));

    if (t189 != 18231U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x901 = -1;
	static volatile uint8_t x904 = 2U;
	volatile int32_t t190 = -1358781;

    t190 = ((x901^x902)/(x903-x904));

    if (t190 != 85) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x905 = -49875293;
	int32_t x907 = 1;
	uint8_t x908 = 11U;
	volatile int32_t t191 = -104479877;

    t191 = ((x905^x906)/(x907-x908));

    if (t191 != -4990326) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x909 = -1LL;
	int64_t x911 = -4798LL;
	int16_t x912 = 2;

    t192 = ((x909^x910)/(x911-x912));

    if (t192 != 656LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x913 = INT16_MIN;
	volatile int32_t x915 = 0;
	uint8_t x916 = 2U;
	int32_t t193 = 1;

    t193 = ((x913^x914)/(x915-x916));

    if (t193 != 16370) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x917 = 12651;
	int32_t x919 = -1;
	int8_t x920 = 1;
	int32_t t194 = 272236196;

    t194 = ((x917^x918)/(x919-x920));

    if (t194 != -6324) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x921 = 12550403319LL;
	volatile int16_t x923 = -1;
	static int64_t t195 = -157538LL;

    t195 = ((x921^x922)/(x923-x924));

    if (t195 != 2LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x929 = 44793765U;
	int16_t x931 = INT16_MAX;
	int32_t x932 = -39296;
	volatile uint32_t t196 = 11U;

    t196 = ((x929^x930)/(x931-x932));

    if (t196 != 621U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x933 = INT8_MAX;
	static int8_t x934 = INT8_MIN;
	uint8_t x935 = 34U;
	uint32_t x936 = 48U;
	volatile uint32_t t197 = 1254741U;

    t197 = ((x933^x934)/(x935-x936));

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x937 = UINT64_MAX;
	int8_t x938 = -1;
	uint32_t x939 = UINT32_MAX;
	uint64_t t198 = 43LLU;

    t198 = ((x937^x938)/(x939-x940));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x941 = 1;
	uint8_t x943 = 1U;
	volatile int32_t x944 = -1603583;
	volatile uint32_t t199 = 388663U;

    t199 = ((x941^x942)/(x943-x944));

    if (t199 != 2678U) { NG(); } else { ; }
	
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

