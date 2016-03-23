
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

static int8_t x1 = INT8_MAX;
int8_t x21 = INT8_MIN;
int32_t x28 = 1363;
uint32_t x41 = 47U;
volatile int8_t x47 = 1;
uint32_t x48 = UINT32_MAX;
int32_t t7 = 6;
int32_t x61 = -4093;
static int8_t x67 = INT8_MIN;
volatile uint64_t t14 = 139178LLU;
int32_t x94 = INT32_MAX;
uint32_t x100 = 177307330U;
int8_t x102 = -7;
volatile int8_t x113 = 22;
uint16_t x114 = 4U;
volatile int8_t x115 = INT8_MAX;
uint32_t x117 = 39U;
uint16_t x118 = 11067U;
int32_t x134 = INT32_MIN;
int8_t x152 = INT8_MIN;
uint64_t x157 = 31589508978LLU;
int64_t x159 = INT64_MAX;
int64_t x160 = -1LL;
volatile int64_t x183 = 0LL;
static uint32_t x201 = UINT32_MAX;
uint32_t x204 = 431U;
volatile int8_t x218 = INT8_MAX;
uint64_t x231 = 6613LLU;
static volatile int16_t x235 = -23;
int32_t t42 = 3;
uint16_t x241 = UINT16_MAX;
volatile int8_t x246 = -21;
static volatile uint16_t x249 = 21247U;
uint8_t x250 = 1U;
uint8_t x253 = 2U;
uint32_t t47 = 73410692U;
int8_t x269 = 46;
int64_t x270 = -1665149242870886185LL;
volatile uint8_t x272 = UINT8_MAX;
uint8_t x279 = 57U;
int64_t x281 = -340842647LL;
static uint32_t x284 = UINT32_MAX;
int32_t x295 = -1160;
int8_t x298 = INT8_MIN;
static int8_t x304 = INT8_MAX;
int16_t x309 = -89;
int32_t t57 = 1476;
static volatile int32_t x318 = INT32_MAX;
volatile int8_t x319 = INT8_MAX;
int8_t x320 = INT8_MAX;
int8_t x325 = 17;
uint8_t x327 = 43U;
uint16_t x338 = 7615U;
int8_t x342 = INT8_MAX;
int64_t x343 = INT64_MAX;
volatile int64_t x344 = 0LL;
volatile int64_t x349 = -1LL;
int64_t t63 = 1729258892LL;
volatile int32_t t64 = 9243373;
int16_t x358 = INT16_MAX;
uint32_t x366 = UINT32_MAX;
static int32_t t67 = -7;
volatile int64_t x370 = 424817670763LL;
int64_t x378 = INT64_MAX;
uint16_t x379 = 15U;
static uint8_t x380 = 44U;
volatile int64_t t69 = 42263827357908412LL;
int32_t x382 = 0;
volatile int32_t t70 = 1;
int16_t x389 = 823;
int16_t x395 = INT16_MAX;
static int16_t x396 = INT16_MIN;
int16_t x397 = INT16_MIN;
volatile uint64_t x398 = 16033447305606293LLU;
static volatile int32_t t73 = 0;
static uint16_t x405 = 46U;
int32_t t74 = -497;
uint64_t x412 = UINT64_MAX;
volatile int32_t x415 = 7;
uint64_t x419 = 255733561482LLU;
int64_t x421 = 3LL;
volatile int64_t t78 = 33316369LL;
int64_t x425 = INT64_MAX;
volatile uint64_t x432 = 856351974LLU;
volatile int32_t t80 = 45;
uint8_t x433 = 1U;
int8_t x437 = INT8_MIN;
int64_t x438 = INT64_MAX;
uint16_t x440 = 1U;
volatile int32_t t82 = 213;
int64_t x447 = -7124396349017362LL;
int8_t x448 = 27;
volatile int64_t t85 = -1799007024268062168LL;
uint32_t x459 = 2140459U;
uint16_t x463 = 11U;
int32_t t87 = -9239;
volatile uint32_t x467 = UINT32_MAX;
volatile uint32_t x470 = UINT32_MAX;
static int32_t t89 = 199643;
int8_t x473 = INT8_MAX;
int64_t x485 = -1862963628009LL;
static volatile int32_t t92 = -1;
uint64_t x495 = 22786766890419807LLU;
int32_t x503 = 20771;
uint16_t x507 = 1661U;
int32_t x514 = -1;
int16_t x521 = -650;
int32_t x522 = -1;
int16_t x523 = INT16_MIN;
uint32_t x542 = UINT32_MAX;
uint64_t t101 = 1102381440003670LLU;
static uint16_t x546 = 2459U;
volatile int8_t x548 = INT8_MAX;
static volatile int32_t t102 = -3568;
int8_t x561 = -6;
volatile int32_t t103 = 4106053;
uint64_t x568 = UINT64_MAX;
static uint64_t t105 = 531LLU;
uint64_t x580 = 0LLU;
int32_t x581 = INT32_MAX;
volatile int16_t x584 = INT16_MIN;
int8_t x589 = -1;
int64_t x590 = 85LL;
volatile int16_t x591 = INT16_MAX;
volatile int32_t t109 = 16348;
uint8_t x598 = 1U;
volatile int32_t t112 = -6449;
static uint8_t x626 = 58U;
uint64_t x638 = 47256LLU;
int64_t x642 = INT64_MAX;
volatile uint8_t x645 = UINT8_MAX;
volatile int8_t x655 = INT8_MIN;
static uint8_t x659 = 85U;
int64_t x660 = -62LL;
uint32_t x666 = 1097576U;
volatile int8_t x667 = INT8_MIN;
static uint16_t x668 = 19753U;
volatile uint64_t x675 = UINT64_MAX;
volatile uint8_t x687 = 101U;
int32_t x694 = INT32_MIN;
volatile uint32_t x697 = UINT32_MAX;
volatile uint32_t t127 = 0U;
int32_t x702 = -96843;
volatile int64_t t128 = 44775LL;
int8_t x715 = -1;
static int32_t x717 = 695079672;
static int16_t x725 = INT16_MAX;
uint32_t x733 = 6296U;
int64_t x738 = INT64_MIN;
int32_t x742 = INT32_MAX;
volatile int8_t x743 = -1;
int16_t x744 = -1;
int8_t x753 = INT8_MIN;
int32_t x754 = 206123;
int16_t x764 = INT16_MIN;
static volatile int16_t x768 = -1315;
static volatile int32_t t142 = -253150270;
static int8_t x779 = INT8_MIN;
volatile int32_t t143 = -28877345;
int64_t x790 = INT64_MIN;
uint64_t x797 = 133387LLU;
volatile uint64_t t148 = 1755502020830534LLU;
uint16_t x813 = 23852U;
int64_t x817 = -1LL;
static int8_t x818 = INT8_MIN;
volatile int64_t t151 = -564817LL;
int16_t x823 = INT16_MIN;
int64_t x824 = INT64_MAX;
int8_t x828 = INT8_MAX;
static uint64_t x837 = 0LLU;
int64_t x840 = INT64_MIN;
volatile int64_t x850 = INT64_MAX;
volatile uint64_t t157 = 871242845648274LLU;
static volatile int16_t x855 = INT16_MIN;
int64_t x858 = INT64_MAX;
static uint8_t x859 = UINT8_MAX;
int16_t x866 = 1476;
static int32_t t160 = -14025;
volatile uint32_t x870 = 19U;
int32_t t161 = 53835;
int8_t x890 = 0;
uint64_t t167 = 24798LLU;
int16_t x914 = INT16_MIN;
volatile uint8_t x916 = UINT8_MAX;
int16_t x918 = INT16_MIN;
int32_t x925 = INT32_MAX;
uint8_t x930 = 7U;
int16_t x947 = INT16_MIN;
int8_t x953 = 21;
int8_t x966 = -1;
uint8_t x968 = 56U;
volatile int32_t t178 = 52;
volatile int32_t t179 = -890348072;
int32_t x978 = INT32_MIN;
int32_t x979 = 406;
int8_t x985 = 4;
volatile int64_t x991 = -1LL;
uint8_t x993 = 0U;
int16_t x995 = -3;
volatile int8_t x997 = 22;
int32_t t185 = 6837311;
uint8_t x1001 = UINT8_MAX;
int32_t x1005 = INT32_MAX;
volatile int32_t t187 = 0;
volatile int64_t x1010 = -359893458958314617LL;
volatile int32_t t189 = -9157654;
static int32_t t190 = -1;
static int32_t x1025 = INT32_MAX;
static uint64_t x1027 = UINT64_MAX;
int16_t x1028 = -1;
volatile int32_t t192 = 69414450;
int16_t x1040 = INT16_MAX;
uint64_t x1043 = 2379259832991LLU;
uint8_t x1050 = 4U;
int32_t t197 = -232305;
volatile int8_t x1053 = INT8_MAX;
uint8_t x1055 = 12U;
int32_t x1060 = INT32_MIN;
int32_t t199 = 1;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	int8_t x3 = -1;
	int64_t x4 = 3063LL;
	volatile int32_t t0 = 28755727;

    t0 = (x1-(x2!=(x3+x4)));

    if (t0 != 126) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MAX;
	static int64_t x24 = INT64_MIN;
	volatile int32_t t1 = 1502;

    t1 = (x21-(x22!=(x23+x24)));

    if (t1 != -129) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x25 = -1;
	volatile uint16_t x26 = 5157U;
	uint16_t x27 = 43U;
	static int32_t t2 = 0;

    t2 = (x25-(x26!=(x27+x28)));

    if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x33 = 2046481U;
	volatile uint64_t x34 = 550216934602582LLU;
	int32_t x35 = INT32_MAX;
	int64_t x36 = 20771LL;
	uint32_t t3 = 331678U;

    t3 = (x33-(x34!=(x35+x36)));

    if (t3 != 2046480U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x37 = -4;
	uint32_t x38 = 6996U;
	int16_t x39 = INT16_MIN;
	int16_t x40 = 0;
	volatile int32_t t4 = -3114929;

    t4 = (x37-(x38!=(x39+x40)));

    if (t4 != -5) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x42 = 120U;
	int32_t x43 = INT32_MIN;
	uint64_t x44 = 27LLU;
	uint32_t t5 = 1515U;

    t5 = (x41-(x42!=(x43+x44)));

    if (t5 != 46U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x45 = 6;
	int64_t x46 = INT64_MIN;
	volatile int32_t t6 = 36095;

    t6 = (x45-(x46!=(x47+x48)));

    if (t6 != 5) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x49 = INT16_MIN;
	int16_t x50 = 12;
	int64_t x51 = INT64_MIN;
	static uint8_t x52 = 9U;

    t7 = (x49-(x50!=(x51+x52)));

    if (t7 != -32769) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x57 = -30379;
	volatile uint32_t x58 = 490433U;
	int64_t x59 = -1LL;
	int8_t x60 = INT8_MAX;
	volatile int32_t t8 = 1433950;

    t8 = (x57-(x58!=(x59+x60)));

    if (t8 != -30380) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x62 = UINT64_MAX;
	uint8_t x63 = 1U;
	volatile uint64_t x64 = 246027488777357LLU;
	volatile int32_t t9 = -73739;

    t9 = (x61-(x62!=(x63+x64)));

    if (t9 != -4094) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x65 = 15;
	uint64_t x66 = 476653LLU;
	static uint32_t x68 = UINT32_MAX;
	volatile int32_t t10 = 5351042;

    t10 = (x65-(x66!=(x67+x68)));

    if (t10 != 14) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x73 = 1982008U;
	int8_t x74 = INT8_MIN;
	uint16_t x75 = UINT16_MAX;
	static uint64_t x76 = 944732LLU;
	uint32_t t11 = 47011U;

    t11 = (x73-(x74!=(x75+x76)));

    if (t11 != 1982007U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x77 = UINT64_MAX;
	volatile int64_t x78 = INT64_MIN;
	int32_t x79 = 373;
	static volatile int16_t x80 = 534;
	uint64_t t12 = 3463908329229613771LLU;

    t12 = (x77-(x78!=(x79+x80)));

    if (t12 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x85 = INT64_MAX;
	volatile uint32_t x86 = 46U;
	uint8_t x87 = UINT8_MAX;
	uint8_t x88 = UINT8_MAX;
	volatile int64_t t13 = -31754814609LL;

    t13 = (x85-(x86!=(x87+x88)));

    if (t13 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x89 = UINT64_MAX;
	int8_t x90 = -51;
	volatile uint8_t x91 = UINT8_MAX;
	int8_t x92 = INT8_MIN;

    t14 = (x89-(x90!=(x91+x92)));

    if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x93 = 524123677774978LL;
	int32_t x95 = INT32_MIN;
	uint16_t x96 = UINT16_MAX;
	static volatile int64_t t15 = -27650607064457LL;

    t15 = (x93-(x94!=(x95+x96)));

    if (t15 != 524123677774977LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x97 = UINT8_MAX;
	static int64_t x98 = INT64_MAX;
	int32_t x99 = -1;
	static int32_t t16 = -684965081;

    t16 = (x97-(x98!=(x99+x100)));

    if (t16 != 254) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x101 = INT32_MAX;
	volatile uint8_t x103 = UINT8_MAX;
	int32_t x104 = INT32_MIN;
	static int32_t t17 = -26264911;

    t17 = (x101-(x102!=(x103+x104)));

    if (t17 != 2147483646) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x109 = -2;
	uint16_t x110 = 959U;
	uint8_t x111 = UINT8_MAX;
	int64_t x112 = INT64_MIN;
	volatile int32_t t18 = -1;

    t18 = (x109-(x110!=(x111+x112)));

    if (t18 != -3) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x116 = INT8_MIN;
	int32_t t19 = -49;

    t19 = (x113-(x114!=(x115+x116)));

    if (t19 != 21) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x119 = UINT8_MAX;
	int8_t x120 = INT8_MIN;
	uint32_t t20 = 10U;

    t20 = (x117-(x118!=(x119+x120)));

    if (t20 != 38U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x125 = -1;
	int64_t x126 = INT64_MAX;
	uint64_t x127 = 5679626265926LLU;
	static int32_t x128 = INT32_MAX;
	int32_t t21 = 0;

    t21 = (x125-(x126!=(x127+x128)));

    if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x133 = INT16_MAX;
	uint8_t x135 = 2U;
	uint32_t x136 = 1900774599U;
	int32_t t22 = -688148934;

    t22 = (x133-(x134!=(x135+x136)));

    if (t22 != 32766) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x137 = 5U;
	int8_t x138 = INT8_MAX;
	int32_t x139 = 2281;
	int16_t x140 = 1;
	volatile int32_t t23 = -14;

    t23 = (x137-(x138!=(x139+x140)));

    if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x149 = UINT64_MAX;
	static int32_t x150 = 5789273;
	uint16_t x151 = 31032U;
	volatile uint64_t t24 = 985110587907645LLU;

    t24 = (x149-(x150!=(x151+x152)));

    if (t24 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x158 = INT16_MAX;
	static volatile uint64_t t25 = 43LLU;

    t25 = (x157-(x158!=(x159+x160)));

    if (t25 != 31589508977LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x169 = -56631;
	int8_t x170 = INT8_MIN;
	volatile int8_t x171 = INT8_MIN;
	int8_t x172 = -1;
	volatile int32_t t26 = 42984;

    t26 = (x169-(x170!=(x171+x172)));

    if (t26 != -56632) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x173 = -1;
	int64_t x174 = INT64_MIN;
	volatile int8_t x175 = -1;
	uint8_t x176 = UINT8_MAX;
	static int32_t t27 = 0;

    t27 = (x173-(x174!=(x175+x176)));

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x177 = -1;
	volatile uint32_t x178 = 424101U;
	uint8_t x179 = 104U;
	int32_t x180 = INT32_MIN;
	volatile int32_t t28 = 1;

    t28 = (x177-(x178!=(x179+x180)));

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x181 = UINT16_MAX;
	uint32_t x182 = UINT32_MAX;
	uint32_t x184 = 3U;
	static volatile int32_t t29 = 102810;

    t29 = (x181-(x182!=(x183+x184)));

    if (t29 != 65534) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x185 = 5199589974144586LL;
	int8_t x186 = INT8_MIN;
	static int16_t x187 = 3826;
	int64_t x188 = INT64_MIN;
	volatile int64_t t30 = 3759299121245LL;

    t30 = (x185-(x186!=(x187+x188)));

    if (t30 != 5199589974144585LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x189 = INT8_MIN;
	int8_t x190 = 1;
	int32_t x191 = -1;
	static uint8_t x192 = UINT8_MAX;
	int32_t t31 = -12;

    t31 = (x189-(x190!=(x191+x192)));

    if (t31 != -129) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x197 = -1293;
	int32_t x198 = -86379;
	int32_t x199 = -1;
	int16_t x200 = -16030;
	static volatile int32_t t32 = 488102618;

    t32 = (x197-(x198!=(x199+x200)));

    if (t32 != -1294) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x202 = 3U;
	static uint16_t x203 = UINT16_MAX;
	uint32_t t33 = 6U;

    t33 = (x201-(x202!=(x203+x204)));

    if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x205 = 126U;
	int16_t x206 = INT16_MIN;
	uint16_t x207 = UINT16_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t34 = -2;

    t34 = (x205-(x206!=(x207+x208)));

    if (t34 != 125) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x209 = -742;
	int16_t x210 = INT16_MAX;
	uint32_t x211 = 9495U;
	int8_t x212 = INT8_MIN;
	int32_t t35 = 3961541;

    t35 = (x209-(x210!=(x211+x212)));

    if (t35 != -743) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x213 = UINT32_MAX;
	static int16_t x214 = 1479;
	static int32_t x215 = -1;
	uint16_t x216 = 69U;
	volatile uint32_t t36 = 3886260U;

    t36 = (x213-(x214!=(x215+x216)));

    if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x217 = INT16_MAX;
	uint16_t x219 = 5772U;
	int16_t x220 = INT16_MIN;
	volatile int32_t t37 = -47;

    t37 = (x217-(x218!=(x219+x220)));

    if (t37 != 32766) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x221 = 0LLU;
	uint64_t x222 = 111834238069289060LLU;
	uint32_t x223 = 29U;
	volatile int8_t x224 = INT8_MIN;
	volatile uint64_t t38 = UINT64_MAX;

    t38 = (x221-(x222!=(x223+x224)));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x225 = INT16_MIN;
	uint16_t x226 = 6U;
	int16_t x227 = INT16_MIN;
	volatile uint8_t x228 = 0U;
	static int32_t t39 = -510;

    t39 = (x225-(x226!=(x227+x228)));

    if (t39 != -32769) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x229 = 10582635LL;
	uint16_t x230 = 15U;
	static uint8_t x232 = 4U;
	int64_t t40 = 420640263887997864LL;

    t40 = (x229-(x230!=(x231+x232)));

    if (t40 != 10582634LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x233 = -1;
	uint16_t x234 = 0U;
	int16_t x236 = -1;
	int32_t t41 = -10462;

    t41 = (x233-(x234!=(x235+x236)));

    if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x237 = 7346U;
	volatile uint64_t x238 = 104429098LLU;
	volatile int64_t x239 = -1LL;
	int16_t x240 = INT16_MAX;

    t42 = (x237-(x238!=(x239+x240)));

    if (t42 != 7345) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x242 = UINT8_MAX;
	int16_t x243 = INT16_MAX;
	int16_t x244 = 9;
	int32_t t43 = 29392;

    t43 = (x241-(x242!=(x243+x244)));

    if (t43 != 65534) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x245 = INT8_MIN;
	static uint32_t x247 = UINT32_MAX;
	static int16_t x248 = 333;
	volatile int32_t t44 = 224711828;

    t44 = (x245-(x246!=(x247+x248)));

    if (t44 != -129) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x251 = -1;
	int16_t x252 = INT16_MIN;
	int32_t t45 = -2383806;

    t45 = (x249-(x250!=(x251+x252)));

    if (t45 != 21246) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x254 = INT8_MIN;
	static volatile uint16_t x255 = 86U;
	uint64_t x256 = UINT64_MAX;
	static int32_t t46 = -704629493;

    t46 = (x253-(x254!=(x255+x256)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x261 = 78U;
	volatile uint8_t x262 = 0U;
	int64_t x263 = INT64_MIN;
	volatile uint64_t x264 = 46LLU;

    t47 = (x261-(x262!=(x263+x264)));

    if (t47 != 77U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x265 = INT16_MAX;
	int32_t x266 = INT32_MAX;
	int8_t x267 = INT8_MIN;
	int32_t x268 = 1342830;
	static int32_t t48 = 2245;

    t48 = (x265-(x266!=(x267+x268)));

    if (t48 != 32766) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x271 = UINT64_MAX;
	int32_t t49 = -1486;

    t49 = (x269-(x270!=(x271+x272)));

    if (t49 != 45) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x273 = -24LL;
	int32_t x274 = INT32_MIN;
	int64_t x275 = 4827LL;
	uint64_t x276 = UINT64_MAX;
	static volatile int64_t t50 = 3463395702815166LL;

    t50 = (x273-(x274!=(x275+x276)));

    if (t50 != -25LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x277 = 43;
	int16_t x278 = INT16_MIN;
	int64_t x280 = INT64_MIN;
	int32_t t51 = 2;

    t51 = (x277-(x278!=(x279+x280)));

    if (t51 != 42) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x282 = 4607;
	volatile uint16_t x283 = 28U;
	static int64_t t52 = 24LL;

    t52 = (x281-(x282!=(x283+x284)));

    if (t52 != -340842648LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x293 = -11;
	int32_t x294 = 1435;
	int32_t x296 = -37228176;
	volatile int32_t t53 = 73806016;

    t53 = (x293-(x294!=(x295+x296)));

    if (t53 != -12) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x297 = -1;
	static volatile int8_t x299 = INT8_MAX;
	uint64_t x300 = UINT64_MAX;
	int32_t t54 = 26199;

    t54 = (x297-(x298!=(x299+x300)));

    if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x301 = UINT16_MAX;
	int16_t x302 = -1;
	static uint64_t x303 = UINT64_MAX;
	volatile int32_t t55 = 622;

    t55 = (x301-(x302!=(x303+x304)));

    if (t55 != 65534) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x305 = UINT16_MAX;
	uint32_t x306 = UINT32_MAX;
	static int64_t x307 = INT64_MAX;
	volatile int32_t x308 = INT32_MIN;
	volatile int32_t t56 = -225;

    t56 = (x305-(x306!=(x307+x308)));

    if (t56 != 65534) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x310 = INT64_MAX;
	uint32_t x311 = 94127165U;
	static volatile int16_t x312 = -1;

    t57 = (x309-(x310!=(x311+x312)));

    if (t57 != -90) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x313 = 5580536U;
	int16_t x314 = INT16_MAX;
	int16_t x315 = INT16_MAX;
	int8_t x316 = -1;
	uint32_t t58 = 1U;

    t58 = (x313-(x314!=(x315+x316)));

    if (t58 != 5580535U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x317 = -1;
	int32_t t59 = 22988;

    t59 = (x317-(x318!=(x319+x320)));

    if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x326 = 146;
	int8_t x328 = 3;
	int32_t t60 = -781;

    t60 = (x325-(x326!=(x327+x328)));

    if (t60 != 16) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x337 = INT64_MAX;
	int64_t x339 = INT64_MIN;
	volatile int64_t x340 = 222455341854439522LL;
	volatile int64_t t61 = 4324066058216574826LL;

    t61 = (x337-(x338!=(x339+x340)));

    if (t61 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x341 = -842;
	volatile int32_t t62 = 0;

    t62 = (x341-(x342!=(x343+x344)));

    if (t62 != -843) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x350 = UINT32_MAX;
	int32_t x351 = 96825905;
	int8_t x352 = INT8_MAX;

    t63 = (x349-(x350!=(x351+x352)));

    if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x353 = UINT16_MAX;
	int32_t x354 = INT32_MIN;
	uint32_t x355 = 664U;
	static int64_t x356 = -1LL;

    t64 = (x353-(x354!=(x355+x356)));

    if (t64 != 65534) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x357 = 127234171U;
	uint8_t x359 = UINT8_MAX;
	int16_t x360 = INT16_MIN;
	uint32_t t65 = 0U;

    t65 = (x357-(x358!=(x359+x360)));

    if (t65 != 127234170U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x361 = UINT16_MAX;
	int64_t x362 = 17084569907878LL;
	volatile uint32_t x363 = 388650U;
	volatile int8_t x364 = -31;
	volatile int32_t t66 = 8200527;

    t66 = (x361-(x362!=(x363+x364)));

    if (t66 != 65534) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x365 = -1;
	int64_t x367 = 836LL;
	int8_t x368 = INT8_MIN;

    t67 = (x365-(x366!=(x367+x368)));

    if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x369 = INT8_MIN;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = 355;
	int32_t t68 = 13;

    t68 = (x369-(x370!=(x371+x372)));

    if (t68 != -129) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x377 = -433989931047154LL;

    t69 = (x377-(x378!=(x379+x380)));

    if (t69 != -433989931047155LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x381 = INT8_MIN;
	volatile int16_t x383 = -133;
	uint32_t x384 = UINT32_MAX;

    t70 = (x381-(x382!=(x383+x384)));

    if (t70 != -129) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x390 = 177;
	volatile uint32_t x391 = UINT32_MAX;
	int32_t x392 = -1;
	volatile int32_t t71 = -46;

    t71 = (x389-(x390!=(x391+x392)));

    if (t71 != 822) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x393 = -168388;
	volatile int16_t x394 = INT16_MIN;
	int32_t t72 = 3777590;

    t72 = (x393-(x394!=(x395+x396)));

    if (t72 != -168389) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x399 = 4019908476130583542LLU;
	static uint16_t x400 = UINT16_MAX;

    t73 = (x397-(x398!=(x399+x400)));

    if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x406 = 1021497U;
	uint16_t x407 = 5U;
	int32_t x408 = 563;

    t74 = (x405-(x406!=(x407+x408)));

    if (t74 != 45) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x409 = UINT8_MAX;
	volatile int8_t x410 = INT8_MAX;
	int16_t x411 = INT16_MIN;
	volatile int32_t t75 = -406379423;

    t75 = (x409-(x410!=(x411+x412)));

    if (t75 != 254) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x413 = INT8_MIN;
	uint64_t x414 = 26141274508756573LLU;
	int64_t x416 = INT64_MIN;
	int32_t t76 = 499612;

    t76 = (x413-(x414!=(x415+x416)));

    if (t76 != -129) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x417 = INT64_MAX;
	uint16_t x418 = 125U;
	volatile uint16_t x420 = 15U;
	int64_t t77 = -158561092512173LL;

    t77 = (x417-(x418!=(x419+x420)));

    if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x422 = UINT64_MAX;
	static volatile uint16_t x423 = 434U;
	uint64_t x424 = UINT64_MAX;

    t78 = (x421-(x422!=(x423+x424)));

    if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x426 = -1LL;
	volatile int32_t x427 = -223598;
	int8_t x428 = INT8_MIN;
	volatile int64_t t79 = 3760437146168LL;

    t79 = (x425-(x426!=(x427+x428)));

    if (t79 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x429 = UINT16_MAX;
	uint32_t x430 = 453207U;
	static volatile int32_t x431 = -782082068;

    t80 = (x429-(x430!=(x431+x432)));

    if (t80 != 65534) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x434 = 832566474258499LLU;
	int32_t x435 = INT32_MIN;
	static int32_t x436 = INT32_MAX;
	volatile int32_t t81 = -202417;

    t81 = (x433-(x434!=(x435+x436)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x439 = 64319082585645374LL;

    t82 = (x437-(x438!=(x439+x440)));

    if (t82 != -129) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x441 = 66482709U;
	volatile uint16_t x442 = UINT16_MAX;
	uint16_t x443 = 25U;
	volatile uint16_t x444 = 8U;
	uint32_t t83 = 34604U;

    t83 = (x441-(x442!=(x443+x444)));

    if (t83 != 66482708U) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x445 = 70184840U;
	int8_t x446 = INT8_MIN;
	volatile uint32_t t84 = 122U;

    t84 = (x445-(x446!=(x447+x448)));

    if (t84 != 70184839U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x453 = INT64_MAX;
	static int64_t x454 = 3925458578673LL;
	uint8_t x455 = 112U;
	static int64_t x456 = -13796998LL;

    t85 = (x453-(x454!=(x455+x456)));

    if (t85 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x457 = 35LLU;
	int32_t x458 = INT32_MAX;
	int16_t x460 = INT16_MIN;
	uint64_t t86 = 12420890499108025LLU;

    t86 = (x457-(x458!=(x459+x460)));

    if (t86 != 34LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x461 = INT16_MIN;
	static int16_t x462 = -1;
	uint64_t x464 = UINT64_MAX;

    t87 = (x461-(x462!=(x463+x464)));

    if (t87 != -32769) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x465 = 1;
	int8_t x466 = INT8_MIN;
	int16_t x468 = -1347;
	static int32_t t88 = -23;

    t88 = (x465-(x466!=(x467+x468)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x469 = 0U;
	uint64_t x471 = 48849505420LLU;
	uint32_t x472 = 20U;

    t89 = (x469-(x470!=(x471+x472)));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x474 = INT16_MIN;
	int8_t x475 = INT8_MAX;
	static int16_t x476 = INT16_MIN;
	static volatile int32_t t90 = 12923736;

    t90 = (x473-(x474!=(x475+x476)));

    if (t90 != 126) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x486 = 1419;
	static int16_t x487 = -2;
	uint32_t x488 = 501U;
	volatile int64_t t91 = 1326018LL;

    t91 = (x485-(x486!=(x487+x488)));

    if (t91 != -1862963628010LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x489 = UINT16_MAX;
	uint8_t x490 = 0U;
	int64_t x491 = -1627035463874725LL;
	static uint8_t x492 = 2U;

    t92 = (x489-(x490!=(x491+x492)));

    if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x493 = 1U;
	volatile int16_t x494 = -33;
	int8_t x496 = INT8_MIN;
	volatile int32_t t93 = -894648523;

    t93 = (x493-(x494!=(x495+x496)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x501 = 257016132LLU;
	uint8_t x502 = 1U;
	int8_t x504 = 29;
	static uint64_t t94 = 25LLU;

    t94 = (x501-(x502!=(x503+x504)));

    if (t94 != 257016131LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x505 = INT32_MAX;
	uint8_t x506 = 64U;
	int16_t x508 = 3154;
	volatile int32_t t95 = -9038;

    t95 = (x505-(x506!=(x507+x508)));

    if (t95 != 2147483646) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x509 = INT32_MAX;
	static volatile int64_t x510 = INT64_MIN;
	volatile uint16_t x511 = UINT16_MAX;
	uint64_t x512 = UINT64_MAX;
	volatile int32_t t96 = -1635427;

    t96 = (x509-(x510!=(x511+x512)));

    if (t96 != 2147483646) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x513 = INT8_MAX;
	int16_t x515 = INT16_MAX;
	uint8_t x516 = 1U;
	int32_t t97 = 9;

    t97 = (x513-(x514!=(x515+x516)));

    if (t97 != 126) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x517 = INT64_MAX;
	volatile uint16_t x518 = 16860U;
	static volatile uint32_t x519 = 159527U;
	int64_t x520 = -94145546974715668LL;
	volatile int64_t t98 = 185403051187LL;

    t98 = (x517-(x518!=(x519+x520)));

    if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x524 = 595U;
	int32_t t99 = 278800;

    t99 = (x521-(x522!=(x523+x524)));

    if (t99 != -651) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x537 = -1;
	volatile uint8_t x538 = 111U;
	int64_t x539 = -30752035327084486LL;
	uint32_t x540 = 156U;
	int32_t t100 = 23992149;

    t100 = (x537-(x538!=(x539+x540)));

    if (t100 != -2) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x541 = 9LLU;
	int64_t x543 = -403501066182092343LL;
	uint8_t x544 = 17U;

    t101 = (x541-(x542!=(x543+x544)));

    if (t101 != 8LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x545 = 7U;
	static uint32_t x547 = UINT32_MAX;

    t102 = (x545-(x546!=(x547+x548)));

    if (t102 != 6) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x562 = -10;
	static volatile uint32_t x563 = UINT32_MAX;
	int8_t x564 = 2;

    t103 = (x561-(x562!=(x563+x564)));

    if (t103 != -7) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x565 = -1;
	uint8_t x566 = UINT8_MAX;
	int32_t x567 = -7;
	int32_t t104 = -205296;

    t104 = (x565-(x566!=(x567+x568)));

    if (t104 != -2) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x569 = UINT64_MAX;
	int64_t x570 = -1LL;
	static int16_t x571 = 90;
	int64_t x572 = INT64_MIN;

    t105 = (x569-(x570!=(x571+x572)));

    if (t105 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x577 = INT16_MAX;
	int64_t x578 = 0LL;
	uint16_t x579 = 90U;
	int32_t t106 = 4619324;

    t106 = (x577-(x578!=(x579+x580)));

    if (t106 != 32766) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x582 = UINT8_MAX;
	uint16_t x583 = 729U;
	volatile int32_t t107 = 30593;

    t107 = (x581-(x582!=(x583+x584)));

    if (t107 != 2147483646) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x585 = 235;
	int64_t x586 = -11619958837941312LL;
	int32_t x587 = INT32_MAX;
	int64_t x588 = 21317LL;
	volatile int32_t t108 = 4152872;

    t108 = (x585-(x586!=(x587+x588)));

    if (t108 != 234) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x592 = 25630384579503LLU;

    t109 = (x589-(x590!=(x591+x592)));

    if (t109 != -2) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x597 = UINT64_MAX;
	volatile uint64_t x599 = UINT64_MAX;
	int8_t x600 = 49;
	static uint64_t t110 = 26351346LLU;

    t110 = (x597-(x598!=(x599+x600)));

    if (t110 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x601 = -1408;
	int64_t x602 = -1LL;
	volatile int8_t x603 = INT8_MIN;
	uint16_t x604 = UINT16_MAX;
	volatile int32_t t111 = 2072;

    t111 = (x601-(x602!=(x603+x604)));

    if (t111 != -1409) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x605 = 11U;
	int64_t x606 = -544LL;
	static int64_t x607 = -1LL;
	volatile uint32_t x608 = 2U;

    t112 = (x605-(x606!=(x607+x608)));

    if (t112 != 10) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x621 = -3437983335756828LL;
	uint32_t x622 = 3434644U;
	uint8_t x623 = UINT8_MAX;
	int16_t x624 = INT16_MIN;
	int64_t t113 = 728467034190528283LL;

    t113 = (x621-(x622!=(x623+x624)));

    if (t113 != -3437983335756829LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x625 = INT16_MAX;
	uint8_t x627 = 11U;
	volatile int8_t x628 = 1;
	volatile int32_t t114 = 6641423;

    t114 = (x625-(x626!=(x627+x628)));

    if (t114 != 32766) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x637 = 14;
	int32_t x639 = 1050845814;
	int8_t x640 = -1;
	volatile int32_t t115 = 212;

    t115 = (x637-(x638!=(x639+x640)));

    if (t115 != 13) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x641 = 4U;
	int64_t x643 = INT64_MAX;
	uint64_t x644 = UINT64_MAX;
	volatile int32_t t116 = -1740;

    t116 = (x641-(x642!=(x643+x644)));

    if (t116 != 3) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x646 = 6243;
	volatile uint64_t x647 = 121785070001865041LLU;
	volatile int8_t x648 = -1;
	int32_t t117 = 11;

    t117 = (x645-(x646!=(x647+x648)));

    if (t117 != 254) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x649 = -213664411;
	int8_t x650 = INT8_MIN;
	int32_t x651 = INT32_MAX;
	uint32_t x652 = 1U;
	int32_t t118 = -9112;

    t118 = (x649-(x650!=(x651+x652)));

    if (t118 != -213664412) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x653 = INT16_MIN;
	uint64_t x654 = 128182LLU;
	int64_t x656 = INT64_MAX;
	int32_t t119 = 1;

    t119 = (x653-(x654!=(x655+x656)));

    if (t119 != -32769) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x657 = INT16_MAX;
	int8_t x658 = -2;
	int32_t t120 = -822723919;

    t120 = (x657-(x658!=(x659+x660)));

    if (t120 != 32766) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x665 = 29U;
	static int32_t t121 = 930;

    t121 = (x665-(x666!=(x667+x668)));

    if (t121 != 28) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x673 = INT64_MAX;
	int8_t x674 = INT8_MIN;
	static int64_t x676 = -3249419356848LL;
	int64_t t122 = 191276342152561921LL;

    t122 = (x673-(x674!=(x675+x676)));

    if (t122 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x681 = -1;
	volatile int32_t x682 = 111;
	int64_t x683 = INT64_MIN;
	int16_t x684 = 8396;
	static int32_t t123 = -3797555;

    t123 = (x681-(x682!=(x683+x684)));

    if (t123 != -2) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x685 = 1;
	volatile uint32_t x686 = UINT32_MAX;
	int32_t x688 = -1;
	int32_t t124 = 691431;

    t124 = (x685-(x686!=(x687+x688)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x689 = -7174LL;
	int64_t x690 = -2851802LL;
	static int32_t x691 = 960691;
	int64_t x692 = 130600LL;
	volatile int64_t t125 = -358738586774555393LL;

    t125 = (x689-(x690!=(x691+x692)));

    if (t125 != -7175LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x693 = INT16_MIN;
	volatile uint8_t x695 = 26U;
	int64_t x696 = -2LL;
	volatile int32_t t126 = -6661434;

    t126 = (x693-(x694!=(x695+x696)));

    if (t126 != -32769) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x698 = 466173180720708711LLU;
	static int32_t x699 = -1;
	uint64_t x700 = 75453189777608833LLU;

    t127 = (x697-(x698!=(x699+x700)));

    if (t127 != 4294967294U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x701 = -1LL;
	static int32_t x703 = -1;
	uint64_t x704 = UINT64_MAX;

    t128 = (x701-(x702!=(x703+x704)));

    if (t128 != -2LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x713 = -4;
	uint16_t x714 = 49U;
	int32_t x716 = -1;
	int32_t t129 = 6699;

    t129 = (x713-(x714!=(x715+x716)));

    if (t129 != -5) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x718 = INT8_MIN;
	volatile int32_t x719 = INT32_MIN;
	int32_t x720 = INT32_MAX;
	static volatile int32_t t130 = -8980;

    t130 = (x717-(x718!=(x719+x720)));

    if (t130 != 695079671) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x721 = 830U;
	volatile uint32_t x722 = 14731028U;
	uint32_t x723 = UINT32_MAX;
	volatile int8_t x724 = INT8_MAX;
	volatile uint32_t t131 = 1442U;

    t131 = (x721-(x722!=(x723+x724)));

    if (t131 != 829U) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x726 = UINT32_MAX;
	static uint16_t x727 = 1248U;
	int16_t x728 = 16371;
	volatile int32_t t132 = -239598;

    t132 = (x725-(x726!=(x727+x728)));

    if (t132 != 32766) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x729 = -3;
	volatile uint64_t x730 = 153396913036867533LLU;
	uint32_t x731 = 1U;
	int8_t x732 = INT8_MAX;
	int32_t t133 = -10977802;

    t133 = (x729-(x730!=(x731+x732)));

    if (t133 != -4) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x734 = 456933136U;
	int32_t x735 = -1;
	int32_t x736 = -1;
	uint32_t t134 = 642U;

    t134 = (x733-(x734!=(x735+x736)));

    if (t134 != 6295U) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint64_t x737 = UINT64_MAX;
	int8_t x739 = INT8_MAX;
	static int32_t x740 = -1;
	static uint64_t t135 = 1117689495838278LLU;

    t135 = (x737-(x738!=(x739+x740)));

    if (t135 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x741 = 379;
	volatile int32_t t136 = 353;

    t136 = (x741-(x742!=(x743+x744)));

    if (t136 != 378) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x745 = -444031LL;
	int32_t x746 = 0;
	int32_t x747 = INT32_MIN;
	int64_t x748 = -6112839LL;
	volatile int64_t t137 = 103394396LL;

    t137 = (x745-(x746!=(x747+x748)));

    if (t137 != -444032LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x749 = INT16_MIN;
	int32_t x750 = INT32_MIN;
	int16_t x751 = INT16_MIN;
	int16_t x752 = INT16_MAX;
	int32_t t138 = -28;

    t138 = (x749-(x750!=(x751+x752)));

    if (t138 != -32769) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x755 = 1U;
	int8_t x756 = INT8_MAX;
	volatile int32_t t139 = 0;

    t139 = (x753-(x754!=(x755+x756)));

    if (t139 != -129) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x761 = 391U;
	int8_t x762 = -1;
	int32_t x763 = -45;
	int32_t t140 = 761504525;

    t140 = (x761-(x762!=(x763+x764)));

    if (t140 != 390) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x765 = 256569089576LLU;
	int8_t x766 = 0;
	static int16_t x767 = INT16_MIN;
	static uint64_t t141 = 9826567161692LLU;

    t141 = (x765-(x766!=(x767+x768)));

    if (t141 != 256569089575LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x773 = INT8_MIN;
	volatile int8_t x774 = INT8_MIN;
	uint8_t x775 = 3U;
	uint16_t x776 = 40U;

    t142 = (x773-(x774!=(x775+x776)));

    if (t142 != -129) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x777 = 20;
	static int64_t x778 = -747579LL;
	int16_t x780 = 21;

    t143 = (x777-(x778!=(x779+x780)));

    if (t143 != 19) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x781 = 1U;
	volatile int64_t x782 = -7LL;
	uint32_t x783 = 20U;
	int32_t x784 = INT32_MIN;
	uint32_t t144 = 738448U;

    t144 = (x781-(x782!=(x783+x784)));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x785 = INT64_MAX;
	int16_t x786 = -1352;
	int64_t x787 = 885505453851LL;
	int16_t x788 = 1;
	volatile int64_t t145 = -1LL;

    t145 = (x785-(x786!=(x787+x788)));

    if (t145 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x789 = INT16_MIN;
	volatile uint16_t x791 = 0U;
	int32_t x792 = -7;
	static volatile int32_t t146 = 90333;

    t146 = (x789-(x790!=(x791+x792)));

    if (t146 != -32769) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x793 = 103U;
	int32_t x794 = INT32_MAX;
	int16_t x795 = INT16_MIN;
	volatile int32_t x796 = -1;
	int32_t t147 = 10130471;

    t147 = (x793-(x794!=(x795+x796)));

    if (t147 != 102) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x798 = INT32_MAX;
	uint16_t x799 = 370U;
	static uint8_t x800 = 4U;

    t148 = (x797-(x798!=(x799+x800)));

    if (t148 != 133386LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x805 = INT8_MAX;
	int64_t x806 = -1LL;
	static int8_t x807 = INT8_MIN;
	static int8_t x808 = INT8_MAX;
	volatile int32_t t149 = 16;

    t149 = (x805-(x806!=(x807+x808)));

    if (t149 != 127) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x814 = -1;
	int64_t x815 = -373395508530LL;
	static volatile int8_t x816 = 12;
	static int32_t t150 = -52;

    t150 = (x813-(x814!=(x815+x816)));

    if (t150 != 23851) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x819 = -1;
	int16_t x820 = -1;

    t151 = (x817-(x818!=(x819+x820)));

    if (t151 != -2LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x821 = UINT32_MAX;
	static int8_t x822 = -1;
	uint32_t t152 = 140872U;

    t152 = (x821-(x822!=(x823+x824)));

    if (t152 != 4294967294U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x825 = UINT64_MAX;
	int32_t x826 = INT32_MIN;
	uint16_t x827 = 73U;
	static volatile uint64_t t153 = 7763139LLU;

    t153 = (x825-(x826!=(x827+x828)));

    if (t153 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x829 = 3236;
	int32_t x830 = INT32_MAX;
	int16_t x831 = INT16_MIN;
	int8_t x832 = INT8_MIN;
	int32_t t154 = 197;

    t154 = (x829-(x830!=(x831+x832)));

    if (t154 != 3235) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x833 = UINT32_MAX;
	int16_t x834 = INT16_MIN;
	volatile uint16_t x835 = 7348U;
	volatile int16_t x836 = -1;
	uint32_t t155 = 2377591U;

    t155 = (x833-(x834!=(x835+x836)));

    if (t155 != 4294967294U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x838 = -24;
	uint64_t x839 = UINT64_MAX;
	volatile uint64_t t156 = UINT64_MAX;

    t156 = (x837-(x838!=(x839+x840)));

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x849 = UINT64_MAX;
	int16_t x851 = INT16_MAX;
	volatile int8_t x852 = INT8_MIN;

    t157 = (x849-(x850!=(x851+x852)));

    if (t157 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x853 = 5085U;
	volatile int8_t x854 = INT8_MAX;
	volatile uint64_t x856 = UINT64_MAX;
	int32_t t158 = -1512;

    t158 = (x853-(x854!=(x855+x856)));

    if (t158 != 5084) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x857 = -15011;
	static int32_t x860 = -1;
	int32_t t159 = 310;

    t159 = (x857-(x858!=(x859+x860)));

    if (t159 != -15012) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x865 = 7U;
	uint16_t x867 = 1U;
	int8_t x868 = INT8_MAX;

    t160 = (x865-(x866!=(x867+x868)));

    if (t160 != 6) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x869 = INT8_MIN;
	static int8_t x871 = 4;
	volatile uint8_t x872 = 91U;

    t161 = (x869-(x870!=(x871+x872)));

    if (t161 != -129) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x873 = 1356807937U;
	static int16_t x874 = 878;
	int32_t x875 = INT32_MAX;
	static volatile int32_t x876 = -1;
	uint32_t t162 = 4151778U;

    t162 = (x873-(x874!=(x875+x876)));

    if (t162 != 1356807936U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x877 = 1;
	volatile int8_t x878 = 1;
	uint8_t x879 = 8U;
	int16_t x880 = 12408;
	static int32_t t163 = -379108232;

    t163 = (x877-(x878!=(x879+x880)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x889 = UINT64_MAX;
	volatile int16_t x891 = -1;
	uint8_t x892 = 1U;
	volatile uint64_t t164 = UINT64_MAX;

    t164 = (x889-(x890!=(x891+x892)));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x897 = 27041814163597454LLU;
	int32_t x898 = INT32_MAX;
	static int16_t x899 = INT16_MAX;
	static uint8_t x900 = UINT8_MAX;
	volatile uint64_t t165 = 207133LLU;

    t165 = (x897-(x898!=(x899+x900)));

    if (t165 != 27041814163597453LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x901 = -9520;
	volatile int32_t x902 = -115366;
	volatile int8_t x903 = INT8_MIN;
	volatile int8_t x904 = -1;
	int32_t t166 = 2989575;

    t166 = (x901-(x902!=(x903+x904)));

    if (t166 != -9521) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x905 = 32812798972LLU;
	static int64_t x906 = -8726687543669LL;
	int8_t x907 = INT8_MAX;
	static int8_t x908 = -1;

    t167 = (x905-(x906!=(x907+x908)));

    if (t167 != 32812798971LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x909 = INT8_MAX;
	static int8_t x910 = -3;
	int8_t x911 = 0;
	uint32_t x912 = 768843826U;
	static volatile int32_t t168 = -145;

    t168 = (x909-(x910!=(x911+x912)));

    if (t168 != 126) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x913 = -348761051;
	int8_t x915 = 41;
	volatile int32_t t169 = -205062;

    t169 = (x913-(x914!=(x915+x916)));

    if (t169 != -348761052) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x917 = 408173865U;
	int64_t x919 = INT64_MIN;
	static uint8_t x920 = 3U;
	uint32_t t170 = 24U;

    t170 = (x917-(x918!=(x919+x920)));

    if (t170 != 408173864U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x921 = -1;
	int8_t x922 = 12;
	volatile uint64_t x923 = 104371LLU;
	volatile int8_t x924 = INT8_MIN;
	volatile int32_t t171 = 71032462;

    t171 = (x921-(x922!=(x923+x924)));

    if (t171 != -2) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x926 = UINT16_MAX;
	volatile uint32_t x927 = 262904906U;
	volatile uint16_t x928 = 30U;
	static volatile int32_t t172 = 5;

    t172 = (x925-(x926!=(x927+x928)));

    if (t172 != 2147483646) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x929 = -1LL;
	int16_t x931 = 23;
	int8_t x932 = INT8_MIN;
	volatile int64_t t173 = 55429751425877127LL;

    t173 = (x929-(x930!=(x931+x932)));

    if (t173 != -2LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x937 = INT8_MIN;
	volatile int8_t x938 = -1;
	uint16_t x939 = UINT16_MAX;
	static uint32_t x940 = 308511404U;
	volatile int32_t t174 = 3;

    t174 = (x937-(x938!=(x939+x940)));

    if (t174 != -129) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x945 = INT64_MAX;
	uint32_t x946 = 832665260U;
	uint16_t x948 = 1300U;
	volatile int64_t t175 = 726934118812083LL;

    t175 = (x945-(x946!=(x947+x948)));

    if (t175 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x954 = 949U;
	static int32_t x955 = -1;
	int32_t x956 = -132839211;
	static int32_t t176 = -51;

    t176 = (x953-(x954!=(x955+x956)));

    if (t176 != 20) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x961 = INT8_MAX;
	volatile uint16_t x962 = 9U;
	int8_t x963 = INT8_MIN;
	int16_t x964 = INT16_MIN;
	int32_t t177 = 0;

    t177 = (x961-(x962!=(x963+x964)));

    if (t177 != 126) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x965 = -23;
	int16_t x967 = INT16_MIN;

    t178 = (x965-(x966!=(x967+x968)));

    if (t178 != -24) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x969 = INT16_MAX;
	int16_t x970 = -1;
	int32_t x971 = INT32_MIN;
	uint8_t x972 = 0U;

    t179 = (x969-(x970!=(x971+x972)));

    if (t179 != 32766) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x977 = -265;
	static volatile uint64_t x980 = 112LLU;
	static int32_t t180 = -30547989;

    t180 = (x977-(x978!=(x979+x980)));

    if (t180 != -266) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x981 = INT16_MIN;
	static int8_t x982 = INT8_MAX;
	uint64_t x983 = 2LLU;
	int64_t x984 = INT64_MIN;
	int32_t t181 = -15;

    t181 = (x981-(x982!=(x983+x984)));

    if (t181 != -32769) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x986 = UINT8_MAX;
	static uint8_t x987 = 107U;
	int16_t x988 = -7076;
	static volatile int32_t t182 = 387481238;

    t182 = (x985-(x986!=(x987+x988)));

    if (t182 != 3) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x989 = -10797;
	static uint8_t x990 = UINT8_MAX;
	static uint8_t x992 = 54U;
	int32_t t183 = -20;

    t183 = (x989-(x990!=(x991+x992)));

    if (t183 != -10798) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x994 = 1;
	uint32_t x996 = 126U;
	static volatile int32_t t184 = -21809186;

    t184 = (x993-(x994!=(x995+x996)));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x998 = UINT64_MAX;
	int8_t x999 = INT8_MAX;
	static int8_t x1000 = INT8_MAX;

    t185 = (x997-(x998!=(x999+x1000)));

    if (t185 != 21) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1002 = -1766928435459LL;
	int64_t x1003 = 1333004426530LL;
	uint16_t x1004 = 3U;
	volatile int32_t t186 = -81;

    t186 = (x1001-(x1002!=(x1003+x1004)));

    if (t186 != 254) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x1006 = UINT8_MAX;
	static uint32_t x1007 = UINT32_MAX;
	volatile int8_t x1008 = INT8_MIN;

    t187 = (x1005-(x1006!=(x1007+x1008)));

    if (t187 != 2147483646) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1009 = -1;
	uint64_t x1011 = UINT64_MAX;
	volatile int16_t x1012 = -1;
	volatile int32_t t188 = 10;

    t188 = (x1009-(x1010!=(x1011+x1012)));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1013 = -15474;
	int32_t x1014 = -369214;
	int64_t x1015 = INT64_MAX;
	int32_t x1016 = -1;

    t189 = (x1013-(x1014!=(x1015+x1016)));

    if (t189 != -15475) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1017 = UINT16_MAX;
	int64_t x1018 = -1LL;
	volatile int64_t x1019 = -1LL;
	volatile int64_t x1020 = INT64_MAX;

    t190 = (x1017-(x1018!=(x1019+x1020)));

    if (t190 != 65534) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1021 = 57020584708115LLU;
	static int64_t x1022 = 0LL;
	static uint16_t x1023 = 3U;
	volatile uint64_t x1024 = 245766276709LLU;
	uint64_t t191 = 161LLU;

    t191 = (x1021-(x1022!=(x1023+x1024)));

    if (t191 != 57020584708114LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1026 = -16087325;

    t192 = (x1025-(x1026!=(x1027+x1028)));

    if (t192 != 2147483646) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1033 = 3014743U;
	int16_t x1034 = -2;
	int8_t x1035 = INT8_MAX;
	int32_t x1036 = -148801;
	volatile uint32_t t193 = 352947535U;

    t193 = (x1033-(x1034!=(x1035+x1036)));

    if (t193 != 3014742U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1037 = -1LL;
	int8_t x1038 = 9;
	int16_t x1039 = INT16_MAX;
	volatile int64_t t194 = -1188134064619122LL;

    t194 = (x1037-(x1038!=(x1039+x1040)));

    if (t194 != -2LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1041 = UINT32_MAX;
	int32_t x1042 = -1;
	int64_t x1044 = INT64_MIN;
	uint32_t t195 = 672U;

    t195 = (x1041-(x1042!=(x1043+x1044)));

    if (t195 != 4294967294U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x1045 = INT16_MIN;
	int8_t x1046 = 12;
	volatile int8_t x1047 = -1;
	volatile uint32_t x1048 = 1983847246U;
	static volatile int32_t t196 = -1;

    t196 = (x1045-(x1046!=(x1047+x1048)));

    if (t196 != -32769) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1049 = -1;
	static int8_t x1051 = INT8_MIN;
	uint32_t x1052 = 1830U;

    t197 = (x1049-(x1050!=(x1051+x1052)));

    if (t197 != -2) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x1054 = INT64_MIN;
	uint16_t x1056 = 24U;
	volatile int32_t t198 = -23418519;

    t198 = (x1053-(x1054!=(x1055+x1056)));

    if (t198 != 126) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1057 = -1;
	int32_t x1058 = INT32_MIN;
	int64_t x1059 = -282086011681174586LL;

    t199 = (x1057-(x1058!=(x1059+x1060)));

    if (t199 != -2) { NG(); } else { ; }
	
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

