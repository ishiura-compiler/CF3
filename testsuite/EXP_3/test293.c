
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

uint8_t x10 = 13U;
static volatile int32_t x14 = 28;
int32_t x18 = -1;
int64_t x19 = -1LL;
static int32_t t6 = -32;
static int32_t x36 = -1;
int32_t x56 = -1;
volatile int32_t x61 = INT32_MIN;
int16_t x64 = INT16_MAX;
int32_t t11 = -63079;
uint64_t x87 = UINT64_MAX;
uint16_t x92 = 10U;
volatile int64_t t18 = -455709138LL;
static int64_t x103 = 8018940159LL;
volatile uint64_t t19 = 335537849LLU;
volatile uint32_t t20 = 15U;
static int32_t x115 = 166;
int8_t x123 = INT8_MAX;
volatile int32_t t24 = -229069136;
uint64_t t25 = 340924747LLU;
uint16_t x135 = 15U;
static int32_t t27 = 217126076;
uint32_t x142 = UINT32_MAX;
uint64_t t29 = 11LLU;
int8_t x146 = INT8_MAX;
int8_t x148 = INT8_MAX;
static uint32_t t30 = 451U;
volatile int32_t t31 = -7720;
int64_t x154 = INT64_MIN;
uint16_t x156 = UINT16_MAX;
uint64_t x171 = 816LLU;
uint16_t x183 = 5655U;
volatile int32_t t37 = 51170282;
volatile int64_t x188 = -17LL;
int8_t x193 = INT8_MIN;
uint8_t x212 = 31U;
volatile int16_t x216 = INT16_MIN;
uint32_t x218 = 234931960U;
volatile int16_t x238 = INT16_MAX;
static uint16_t x246 = 10U;
uint32_t x253 = 8639104U;
static int64_t x256 = -28807095262LL;
uint8_t x259 = 10U;
int16_t x260 = INT16_MAX;
int32_t t55 = 637097;
uint64_t x268 = 5613845719099110975LLU;
volatile int32_t t57 = -26;
int8_t x274 = INT8_MIN;
int32_t x281 = INT32_MIN;
volatile uint8_t x282 = 9U;
int64_t x284 = 640996022407841125LL;
uint16_t x292 = 3U;
uint64_t t61 = 296426LLU;
int8_t x301 = INT8_MAX;
int32_t x302 = INT32_MIN;
volatile int16_t x305 = -1;
uint32_t x306 = 92U;
static int64_t x307 = 103135404515116LL;
int64_t x309 = -881963501629686236LL;
int8_t x314 = INT8_MIN;
int16_t x318 = INT16_MIN;
volatile uint64_t t66 = 87LLU;
uint64_t x321 = UINT64_MAX;
int64_t x322 = INT64_MIN;
uint32_t t68 = 448U;
uint64_t t69 = 195LLU;
volatile uint64_t x334 = UINT64_MAX;
static int8_t x341 = INT8_MIN;
int64_t x343 = -564262115LL;
uint16_t x354 = 8U;
static volatile uint64_t t75 = 581104398LLU;
int64_t t76 = 11483901621224960LL;
uint32_t t77 = 25085060U;
uint64_t x367 = 17652166LLU;
int16_t x372 = INT16_MIN;
int64_t x376 = -1LL;
uint32_t x381 = UINT32_MAX;
int8_t x387 = INT8_MIN;
int64_t x398 = 1712986990032517502LL;
uint32_t x399 = 1898U;
static int8_t x402 = -1;
static int64_t x406 = 48497428869997311LL;
volatile uint32_t t90 = 22U;
int16_t x420 = -15;
volatile int32_t t91 = 216957;
static int32_t x425 = INT32_MAX;
static uint32_t x437 = 5620636U;
volatile uint64_t x438 = UINT64_MAX;
volatile int8_t x440 = 0;
int32_t t94 = -131676094;
int8_t x444 = INT8_MIN;
static int64_t x445 = INT64_MIN;
volatile int16_t x446 = 1;
int64_t x451 = INT64_MIN;
int32_t x453 = -1;
static volatile uint32_t x454 = 280910557U;
volatile int64_t t98 = -470770360946LL;
int16_t x472 = 5;
int32_t t101 = -374098;
volatile uint32_t x477 = 6U;
static uint8_t x490 = 83U;
volatile uint64_t x494 = 125209281LLU;
int32_t x501 = INT32_MIN;
uint16_t x506 = 4915U;
volatile int64_t x513 = INT64_MAX;
int32_t x514 = -1;
int16_t x517 = INT16_MIN;
int64_t x523 = -1LL;
static uint32_t x526 = UINT32_MAX;
static volatile uint8_t x527 = 120U;
uint64_t x529 = 70643682167801LLU;
int32_t t114 = -419297593;
int64_t x536 = -1LL;
volatile int64_t t115 = -95497282725LL;
static int8_t x540 = INT8_MIN;
int8_t x545 = -1;
int32_t x546 = INT32_MAX;
static volatile int8_t x549 = INT8_MAX;
int16_t x555 = INT16_MIN;
int32_t t122 = -231049268;
uint16_t x567 = 11475U;
static volatile int16_t x577 = 53;
int32_t x591 = INT32_MIN;
volatile int32_t t128 = -1727;
int16_t x593 = INT16_MAX;
uint64_t t130 = 557896366552494435LLU;
uint16_t x606 = 28969U;
static int32_t x614 = INT32_MIN;
int8_t x615 = 2;
volatile int16_t x618 = -1;
int32_t x635 = -325;
int8_t x642 = 1;
int8_t x643 = INT8_MAX;
static uint64_t x648 = UINT64_MAX;
uint32_t x657 = 82U;
int64_t x659 = -1LL;
static int64_t t144 = INT64_MAX;
int16_t x667 = INT16_MIN;
static volatile uint64_t t149 = 3765486262320680425LLU;
int8_t x696 = -1;
int64_t x698 = INT64_MAX;
uint16_t x702 = UINT16_MAX;
static int16_t x709 = 742;
int64_t x710 = INT64_MIN;
int32_t t155 = 265088;
int16_t x728 = INT16_MAX;
int32_t t157 = -1328907;
int32_t x729 = -1;
volatile int16_t x732 = INT16_MIN;
int32_t x736 = INT32_MIN;
int16_t x745 = -7937;
static int8_t x747 = INT8_MIN;
volatile int64_t x750 = INT64_MAX;
uint32_t t162 = 84U;
int16_t x754 = -1;
int64_t x760 = INT64_MAX;
static volatile int64_t t164 = 72LL;
static volatile int64_t x762 = -913LL;
uint8_t x764 = 40U;
volatile int32_t t165 = 80586049;
int32_t x770 = -1;
volatile uint64_t t167 = 117931170LLU;
int64_t t168 = -210579984862538160LL;
volatile int8_t x779 = -10;
int32_t x783 = -1;
volatile int32_t t170 = -5094179;
volatile uint64_t t171 = 1047062636643063973LLU;
uint64_t x790 = 92267298LLU;
int16_t x797 = INT16_MIN;
int64_t x798 = INT64_MIN;
static int8_t x800 = -2;
volatile int8_t x809 = INT8_MAX;
int8_t x812 = INT8_MIN;
int32_t x818 = -1;
uint16_t x820 = UINT16_MAX;
uint64_t x846 = 3013816LLU;
int8_t x850 = INT8_MAX;
static int64_t x866 = INT64_MAX;
uint32_t x867 = 618620U;
int32_t x872 = -2988695;
uint64_t x894 = 47812770LLU;
int8_t x904 = -2;
uint32_t x908 = 192U;
static volatile int32_t t195 = -37677;
volatile uint8_t x913 = 1U;
volatile int32_t x920 = -1;
static volatile uint16_t x923 = 30214U;
uint8_t x924 = 3U;
int64_t x927 = -1LL;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int32_t x2 = -1;
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 270;

    t0 = ((x1!=x2)|(x3-x4));

    if (t0 != -32640) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MAX;
	uint8_t x7 = 1U;
	uint16_t x8 = 1844U;
	int32_t t1 = -1604;

    t1 = ((x5!=x6)|(x7-x8));

    if (t1 != -1843) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	int16_t x11 = 1;
	int16_t x12 = -123;
	volatile int32_t t2 = -58001;

    t2 = ((x9!=x10)|(x11-x12));

    if (t2 != 125) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	int64_t x15 = -153982996LL;
	int8_t x16 = INT8_MIN;
	static int64_t t3 = 7915LL;

    t3 = ((x13!=x14)|(x15-x16));

    if (t3 != -153982867LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 258072U;
	uint64_t x20 = 1842LLU;
	uint64_t t4 = 12783085991LLU;

    t4 = ((x17!=x18)|(x19-x20));

    if (t4 != 18446744073709549773LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = -1;
	uint32_t x22 = 1237U;
	int8_t x23 = INT8_MIN;
	volatile int8_t x24 = 5;
	int32_t t5 = -348404;

    t5 = ((x21!=x22)|(x23-x24));

    if (t5 != -133) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t x25 = UINT64_MAX;
	static int16_t x26 = INT16_MAX;
	static int8_t x27 = -1;
	volatile int32_t x28 = -50683767;

    t6 = ((x25!=x26)|(x27-x28));

    if (t6 != 50683767) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	int64_t x30 = INT64_MIN;
	static int8_t x31 = 1;
	uint16_t x32 = 0U;
	volatile int32_t t7 = 8874;

    t7 = ((x29!=x30)|(x31-x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 1086U;
	static int64_t x34 = INT64_MAX;
	int16_t x35 = INT16_MIN;
	static volatile int32_t t8 = -1983272;

    t8 = ((x33!=x34)|(x35-x36));

    if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x49 = UINT16_MAX;
	int16_t x50 = INT16_MIN;
	volatile int64_t x51 = -1LL;
	volatile uint8_t x52 = 5U;
	int64_t t9 = 731248857732057LL;

    t9 = ((x49!=x50)|(x51-x52));

    if (t9 != -5LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = -33350436;
	static volatile int8_t x54 = INT8_MIN;
	static uint64_t x55 = 276LLU;
	volatile uint64_t t10 = 23559162094139LLU;

    t10 = ((x53!=x54)|(x55-x56));

    if (t10 != 277LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x62 = UINT8_MAX;
	static int32_t x63 = INT32_MAX;

    t11 = ((x61!=x62)|(x63-x64));

    if (t11 != 2147450881) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x65 = INT32_MIN;
	volatile uint32_t x66 = 207487U;
	uint8_t x67 = 17U;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t12 = -28;

    t12 = ((x65!=x66)|(x67-x68));

    if (t12 != -237) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x73 = 5406390561LL;
	int16_t x74 = INT16_MIN;
	volatile int8_t x75 = -1;
	uint16_t x76 = 35U;
	int32_t t13 = 137381;

    t13 = ((x73!=x74)|(x75-x76));

    if (t13 != -35) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x77 = 5;
	uint64_t x78 = 129307599647263810LLU;
	uint16_t x79 = 248U;
	volatile int16_t x80 = INT16_MIN;
	volatile int32_t t14 = 4055;

    t14 = ((x77!=x78)|(x79-x80));

    if (t14 != 33017) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x85 = 51U;
	uint32_t x86 = 18U;
	int16_t x88 = -91;
	volatile uint64_t t15 = 3994013287248568LLU;

    t15 = ((x85!=x86)|(x87-x88));

    if (t15 != 91LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x89 = 1U;
	volatile int8_t x90 = INT8_MIN;
	static int16_t x91 = INT16_MIN;
	volatile int32_t t16 = 71453617;

    t16 = ((x89!=x90)|(x91-x92));

    if (t16 != -32777) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x93 = 512214131LLU;
	static volatile int32_t x94 = INT32_MAX;
	int32_t x95 = 4;
	int16_t x96 = 21;
	static volatile int32_t t17 = -19;

    t17 = ((x93!=x94)|(x95-x96));

    if (t17 != -17) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x97 = INT64_MAX;
	volatile int32_t x98 = INT32_MIN;
	int8_t x99 = INT8_MAX;
	int64_t x100 = -1LL;

    t18 = ((x97!=x98)|(x99-x100));

    if (t18 != 129LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x101 = 2LL;
	int64_t x102 = INT64_MAX;
	static uint64_t x104 = 2927LLU;

    t19 = ((x101!=x102)|(x103-x104));

    if (t19 != 8018937233LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x105 = 840LL;
	int64_t x106 = INT64_MIN;
	static int16_t x107 = INT16_MIN;
	uint32_t x108 = 206U;

    t20 = ((x105!=x106)|(x107-x108));

    if (t20 != 4294934323U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x109 = INT64_MIN;
	int32_t x110 = INT32_MIN;
	uint64_t x111 = UINT64_MAX;
	static volatile uint64_t x112 = 6807465762108015874LLU;
	static volatile uint64_t t21 = 873LLU;

    t21 = ((x109!=x110)|(x111-x112));

    if (t21 != 11639278311601535741LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x113 = 25996593097782632LL;
	int32_t x114 = 1;
	static int16_t x116 = INT16_MIN;
	static volatile int32_t t22 = -31167675;

    t22 = ((x113!=x114)|(x115-x116));

    if (t22 != 32935) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x117 = -1LL;
	volatile int32_t x118 = INT32_MIN;
	int8_t x119 = -1;
	static uint8_t x120 = UINT8_MAX;
	static volatile int32_t t23 = -130616;

    t23 = ((x117!=x118)|(x119-x120));

    if (t23 != -255) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x121 = -19;
	volatile int8_t x122 = -28;
	int32_t x124 = INT32_MAX;

    t24 = ((x121!=x122)|(x123-x124));

    if (t24 != -2147483519) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x125 = 5U;
	static int32_t x126 = INT32_MAX;
	uint64_t x127 = 2678083LLU;
	int16_t x128 = -1;

    t25 = ((x125!=x126)|(x127-x128));

    if (t25 != 2678085LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x129 = INT32_MIN;
	int64_t x130 = -255914464946918895LL;
	static int64_t x131 = INT64_MIN;
	int8_t x132 = -2;
	int64_t t26 = -2850297238587LL;

    t26 = ((x129!=x130)|(x131-x132));

    if (t26 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x133 = INT32_MAX;
	volatile int16_t x134 = INT16_MAX;
	int16_t x136 = INT16_MIN;

    t27 = ((x133!=x134)|(x135-x136));

    if (t27 != 32783) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x137 = INT16_MIN;
	uint64_t x138 = 579239335080479LLU;
	uint64_t x139 = UINT64_MAX;
	static uint32_t x140 = 2U;
	uint64_t t28 = 31960LLU;

    t28 = ((x137!=x138)|(x139-x140));

    if (t28 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x141 = -1588;
	volatile int32_t x143 = INT32_MAX;
	uint64_t x144 = 3373209282138528LLU;

    t29 = ((x141!=x142)|(x143-x144));

    if (t29 != 18443370866574896735LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x145 = INT32_MIN;
	static uint32_t x147 = 156U;

    t30 = ((x145!=x146)|(x147-x148));

    if (t30 != 29U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x149 = INT16_MIN;
	int16_t x150 = 1;
	int16_t x151 = INT16_MIN;
	volatile int32_t x152 = -1;

    t31 = ((x149!=x150)|(x151-x152));

    if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x153 = 2920U;
	static volatile int16_t x155 = INT16_MIN;
	int32_t t32 = -54;

    t32 = ((x153!=x154)|(x155-x156));

    if (t32 != -98303) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x161 = -1LL;
	int16_t x162 = INT16_MAX;
	int8_t x163 = 2;
	static int8_t x164 = INT8_MIN;
	static volatile int32_t t33 = -84476293;

    t33 = ((x161!=x162)|(x163-x164));

    if (t33 != 131) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x165 = 1;
	volatile int8_t x166 = -1;
	uint8_t x167 = 0U;
	uint32_t x168 = 63U;
	volatile uint32_t t34 = 743445U;

    t34 = ((x165!=x166)|(x167-x168));

    if (t34 != 4294967233U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x169 = 686U;
	uint32_t x170 = 1835U;
	static volatile int32_t x172 = 1705;
	volatile uint64_t t35 = 83LLU;

    t35 = ((x169!=x170)|(x171-x172));

    if (t35 != 18446744073709550727LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x173 = INT64_MAX;
	uint16_t x174 = UINT16_MAX;
	static int32_t x175 = -1;
	int8_t x176 = INT8_MIN;
	static int32_t t36 = 1798;

    t36 = ((x173!=x174)|(x175-x176));

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x181 = INT8_MAX;
	int16_t x182 = -1;
	uint8_t x184 = UINT8_MAX;

    t37 = ((x181!=x182)|(x183-x184));

    if (t37 != 5401) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x185 = -1;
	static uint16_t x186 = UINT16_MAX;
	int16_t x187 = INT16_MIN;
	volatile int64_t t38 = 7333487283LL;

    t38 = ((x185!=x186)|(x187-x188));

    if (t38 != -32751LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x189 = 32U;
	volatile int32_t x190 = 866;
	int16_t x191 = INT16_MAX;
	static volatile uint16_t x192 = 1U;
	static int32_t t39 = -204;

    t39 = ((x189!=x190)|(x191-x192));

    if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x194 = 118511609;
	int8_t x195 = INT8_MIN;
	int64_t x196 = 1040557LL;
	volatile int64_t t40 = 1275472090317LL;

    t40 = ((x193!=x194)|(x195-x196));

    if (t40 != -1040685LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x197 = INT16_MAX;
	static volatile uint32_t x198 = UINT32_MAX;
	int32_t x199 = -1;
	static uint16_t x200 = 118U;
	int32_t t41 = 25270;

    t41 = ((x197!=x198)|(x199-x200));

    if (t41 != -119) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x201 = INT16_MIN;
	int64_t x202 = 128349504706597758LL;
	uint64_t x203 = 23531441909954438LLU;
	int16_t x204 = -10;
	static volatile uint64_t t42 = 1556384631338369648LLU;

    t42 = ((x201!=x202)|(x203-x204));

    if (t42 != 23531441909954449LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = -28696LL;
	int16_t x206 = INT16_MIN;
	volatile int32_t x207 = INT32_MAX;
	uint16_t x208 = 913U;
	volatile int32_t t43 = -51583668;

    t43 = ((x205!=x206)|(x207-x208));

    if (t43 != 2147482735) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x209 = INT64_MIN;
	uint32_t x210 = 65770415U;
	static volatile uint8_t x211 = 65U;
	static volatile int32_t t44 = -6;

    t44 = ((x209!=x210)|(x211-x212));

    if (t44 != 35) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MIN;
	int64_t x215 = -3315LL;
	volatile int64_t t45 = -241846207LL;

    t45 = ((x213!=x214)|(x215-x216));

    if (t45 != 29453LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x217 = 19587222456LLU;
	static int8_t x219 = INT8_MAX;
	int8_t x220 = INT8_MAX;
	int32_t t46 = 246;

    t46 = ((x217!=x218)|(x219-x220));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x229 = 4U;
	uint64_t x230 = 3854798LLU;
	volatile int8_t x231 = INT8_MIN;
	int8_t x232 = 1;
	volatile int32_t t47 = 245942;

    t47 = ((x229!=x230)|(x231-x232));

    if (t47 != -129) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x233 = INT32_MAX;
	uint8_t x234 = UINT8_MAX;
	int16_t x235 = INT16_MIN;
	uint64_t x236 = 1665623LLU;
	uint64_t t48 = 92229025670306LLU;

    t48 = ((x233!=x234)|(x235-x236));

    if (t48 != 18446744073707853225LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x237 = INT16_MAX;
	static int16_t x239 = -1;
	int32_t x240 = 80040;
	int32_t t49 = 210;

    t49 = ((x237!=x238)|(x239-x240));

    if (t49 != -80041) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x241 = INT16_MAX;
	volatile int8_t x242 = 1;
	int16_t x243 = -7426;
	int16_t x244 = 5;
	volatile int32_t t50 = 2;

    t50 = ((x241!=x242)|(x243-x244));

    if (t50 != -7431) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x245 = INT16_MIN;
	uint8_t x247 = 39U;
	static volatile int16_t x248 = 0;
	int32_t t51 = 25780;

    t51 = ((x245!=x246)|(x247-x248));

    if (t51 != 39) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x249 = UINT32_MAX;
	int64_t x250 = 375LL;
	volatile int64_t x251 = INT64_MIN;
	uint16_t x252 = 0U;
	int64_t t52 = 19353LL;

    t52 = ((x249!=x250)|(x251-x252));

    if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x254 = 0LL;
	int64_t x255 = -1LL;
	int64_t t53 = 905767339584LL;

    t53 = ((x253!=x254)|(x255-x256));

    if (t53 != 28807095261LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x257 = -1;
	uint16_t x258 = 241U;
	volatile int32_t t54 = -4033;

    t54 = ((x257!=x258)|(x259-x260));

    if (t54 != -32757) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x261 = INT8_MAX;
	int64_t x262 = INT64_MIN;
	static int16_t x263 = -1;
	int16_t x264 = -1;

    t55 = ((x261!=x262)|(x263-x264));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x265 = UINT32_MAX;
	int64_t x266 = INT64_MIN;
	volatile int32_t x267 = -3403;
	uint64_t t56 = 3LLU;

    t56 = ((x265!=x266)|(x267-x268));

    if (t56 != 12832898354610437239LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x269 = INT8_MAX;
	uint16_t x270 = UINT16_MAX;
	int16_t x271 = INT16_MIN;
	volatile int8_t x272 = INT8_MAX;

    t57 = ((x269!=x270)|(x271-x272));

    if (t57 != -32895) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x273 = INT8_MIN;
	int8_t x275 = -6;
	uint8_t x276 = 5U;
	volatile int32_t t58 = 5605383;

    t58 = ((x273!=x274)|(x275-x276));

    if (t58 != -11) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x283 = UINT64_MAX;
	uint64_t t59 = 395LLU;

    t59 = ((x281!=x282)|(x283-x284));

    if (t59 != 17805748051301710491LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x289 = -113661;
	volatile uint32_t x290 = 45U;
	int32_t x291 = 153;
	volatile int32_t t60 = 370;

    t60 = ((x289!=x290)|(x291-x292));

    if (t60 != 151) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x293 = -1LL;
	static int64_t x294 = -1LL;
	int32_t x295 = INT32_MIN;
	uint64_t x296 = 1LLU;

    t61 = ((x293!=x294)|(x295-x296));

    if (t61 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x303 = INT16_MIN;
	static volatile uint8_t x304 = 0U;
	int32_t t62 = -411455928;

    t62 = ((x301!=x302)|(x303-x304));

    if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x308 = -62746921373036289LL;
	int64_t t63 = 1LL;

    t63 = ((x305!=x306)|(x307-x308));

    if (t63 != 62850056777551405LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x310 = 34118994558194524LL;
	int32_t x311 = INT32_MIN;
	static volatile int32_t x312 = INT32_MIN;
	volatile int32_t t64 = -1;

    t64 = ((x309!=x310)|(x311-x312));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x313 = INT64_MIN;
	int16_t x315 = INT16_MAX;
	static int8_t x316 = -1;
	volatile int32_t t65 = 8;

    t65 = ((x313!=x314)|(x315-x316));

    if (t65 != 32769) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x317 = 2U;
	int64_t x319 = INT64_MAX;
	uint64_t x320 = UINT64_MAX;

    t66 = ((x317!=x318)|(x319-x320));

    if (t66 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x323 = 0;
	uint32_t x324 = 5U;
	uint32_t t67 = 1U;

    t67 = ((x321!=x322)|(x323-x324));

    if (t67 != 4294967291U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x325 = INT32_MIN;
	static int8_t x326 = INT8_MAX;
	uint32_t x327 = 11290526U;
	int32_t x328 = 1;

    t68 = ((x325!=x326)|(x327-x328));

    if (t68 != 11290525U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x329 = 51U;
	int16_t x330 = -1;
	uint64_t x331 = 1366890590911625LLU;
	int32_t x332 = INT32_MIN;

    t69 = ((x329!=x330)|(x331-x332));

    if (t69 != 1366892738395273LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x333 = UINT16_MAX;
	int32_t x335 = -1;
	int8_t x336 = 1;
	int32_t t70 = -57497493;

    t70 = ((x333!=x334)|(x335-x336));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x337 = 22425U;
	uint8_t x338 = 46U;
	uint16_t x339 = UINT16_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t71 = -3;

    t71 = ((x337!=x338)|(x339-x340));

    if (t71 != 98303) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x342 = INT32_MIN;
	uint8_t x344 = 48U;
	int64_t t72 = -246715097LL;

    t72 = ((x341!=x342)|(x343-x344));

    if (t72 != -564262163LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x345 = 6U;
	int64_t x346 = -1LL;
	int16_t x347 = -1;
	static int64_t x348 = 348067051LL;
	volatile int64_t t73 = -4394647303929188LL;

    t73 = ((x345!=x346)|(x347-x348));

    if (t73 != -348067051LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x349 = 2659U;
	static uint16_t x350 = UINT16_MAX;
	uint8_t x351 = 62U;
	int32_t x352 = INT32_MAX;
	int32_t t74 = -1;

    t74 = ((x349!=x350)|(x351-x352));

    if (t74 != -2147483585) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x353 = 412198253U;
	static uint64_t x355 = 1891281060412328LLU;
	uint64_t x356 = UINT64_MAX;

    t75 = ((x353!=x354)|(x355-x356));

    if (t75 != 1891281060412329LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x357 = -1715;
	int32_t x358 = INT32_MAX;
	int64_t x359 = -1LL;
	static int64_t x360 = 350803738495775733LL;

    t76 = ((x357!=x358)|(x359-x360));

    if (t76 != -350803738495775733LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x361 = INT8_MIN;
	uint32_t x362 = 156756U;
	uint32_t x363 = 1U;
	static uint16_t x364 = 13U;

    t77 = ((x361!=x362)|(x363-x364));

    if (t77 != 4294967285U) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x365 = 27550263908949LLU;
	uint64_t x366 = 1075015915580043198LLU;
	int32_t x368 = 87;
	uint64_t t78 = 118580951700927337LLU;

    t78 = ((x365!=x366)|(x367-x368));

    if (t78 != 17652079LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x369 = INT64_MIN;
	int8_t x370 = INT8_MIN;
	int64_t x371 = -1LL;
	volatile int64_t t79 = 14717726170346302LL;

    t79 = ((x369!=x370)|(x371-x372));

    if (t79 != 32767LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x373 = 20319776U;
	static uint64_t x374 = 473937906LLU;
	int16_t x375 = -38;
	volatile int64_t t80 = 3110LL;

    t80 = ((x373!=x374)|(x375-x376));

    if (t80 != -37LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x377 = INT8_MIN;
	static int8_t x378 = INT8_MIN;
	uint8_t x379 = 1U;
	volatile int16_t x380 = INT16_MIN;
	volatile int32_t t81 = -316;

    t81 = ((x377!=x378)|(x379-x380));

    if (t81 != 32769) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x382 = 45191229U;
	volatile uint16_t x383 = 85U;
	volatile int64_t x384 = 1336378042LL;
	static volatile int64_t t82 = 308366449253409LL;

    t82 = ((x381!=x382)|(x383-x384));

    if (t82 != -1336377957LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x385 = 503914;
	int8_t x386 = INT8_MAX;
	int32_t x388 = -3564256;
	volatile int32_t t83 = -111;

    t83 = ((x385!=x386)|(x387-x388));

    if (t83 != 3564129) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x389 = -25570LL;
	int64_t x390 = -1737661919748152485LL;
	int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	int64_t t84 = -354837LL;

    t84 = ((x389!=x390)|(x391-x392));

    if (t84 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x393 = 60281856U;
	static int16_t x394 = 0;
	int64_t x395 = -1LL;
	uint8_t x396 = 12U;
	int64_t t85 = 927079488716LL;

    t85 = ((x393!=x394)|(x395-x396));

    if (t85 != -13LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x397 = INT64_MIN;
	volatile int16_t x400 = 6258;
	static volatile uint32_t t86 = 3389105U;

    t86 = ((x397!=x398)|(x399-x400));

    if (t86 != 4294962937U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x401 = INT16_MIN;
	int64_t x403 = 3002248LL;
	int32_t x404 = INT32_MIN;
	static int64_t t87 = 2LL;

    t87 = ((x401!=x402)|(x403-x404));

    if (t87 != 2150485897LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x405 = INT16_MIN;
	int8_t x407 = INT8_MAX;
	uint64_t x408 = 302723306091446678LLU;
	uint64_t t88 = 204119983LLU;

    t88 = ((x405!=x406)|(x407-x408));

    if (t88 != 18144020767618105065LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x409 = UINT16_MAX;
	volatile int8_t x410 = 0;
	int16_t x411 = 695;
	static volatile int64_t x412 = -108102LL;
	int64_t t89 = 136231284579736LL;

    t89 = ((x409!=x410)|(x411-x412));

    if (t89 != 108797LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x413 = -107904;
	uint32_t x414 = 13U;
	volatile int8_t x415 = INT8_MIN;
	uint32_t x416 = UINT32_MAX;

    t90 = ((x413!=x414)|(x415-x416));

    if (t90 != 4294967169U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x417 = 0;
	uint32_t x418 = 1364273U;
	volatile int32_t x419 = -1;

    t91 = ((x417!=x418)|(x419-x420));

    if (t91 != 15) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x426 = 1167;
	uint8_t x427 = 6U;
	volatile uint8_t x428 = 0U;
	int32_t t92 = 73401;

    t92 = ((x425!=x426)|(x427-x428));

    if (t92 != 7) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x433 = -1;
	int16_t x434 = 2366;
	int8_t x435 = INT8_MIN;
	int64_t x436 = -1LL;
	volatile int64_t t93 = 2233165680581446LL;

    t93 = ((x433!=x434)|(x435-x436));

    if (t93 != -127LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x439 = -3;

    t94 = ((x437!=x438)|(x439-x440));

    if (t94 != -3) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x441 = INT8_MIN;
	volatile uint16_t x442 = 10606U;
	int8_t x443 = INT8_MIN;
	static int32_t t95 = 3424;

    t95 = ((x441!=x442)|(x443-x444));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x447 = -1LL;
	int64_t x448 = 149474570011232546LL;
	int64_t t96 = -1667242LL;

    t96 = ((x445!=x446)|(x447-x448));

    if (t96 != -149474570011232547LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x449 = -150;
	uint16_t x450 = 1U;
	volatile int64_t x452 = INT64_MIN;
	volatile int64_t t97 = 14432934LL;

    t97 = ((x449!=x450)|(x451-x452));

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x455 = INT64_MIN;
	int32_t x456 = -1;

    t98 = ((x453!=x454)|(x455-x456));

    if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x457 = UINT32_MAX;
	uint32_t x458 = 31996U;
	int8_t x459 = 1;
	uint32_t x460 = UINT32_MAX;
	volatile uint32_t t99 = 1U;

    t99 = ((x457!=x458)|(x459-x460));

    if (t99 != 3U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x465 = 13U;
	static int32_t x466 = INT32_MIN;
	uint64_t x467 = 88LLU;
	static volatile int32_t x468 = INT32_MIN;
	volatile uint64_t t100 = 1039706999LLU;

    t100 = ((x465!=x466)|(x467-x468));

    if (t100 != 2147483737LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x469 = -1450;
	static volatile uint16_t x470 = 9884U;
	uint16_t x471 = 56U;

    t101 = ((x469!=x470)|(x471-x472));

    if (t101 != 51) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x473 = 10;
	int32_t x474 = 446;
	static uint8_t x475 = 0U;
	static int32_t x476 = INT32_MAX;
	int32_t t102 = -7741873;

    t102 = ((x473!=x474)|(x475-x476));

    if (t102 != -2147483647) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x478 = INT32_MIN;
	int32_t x479 = INT32_MIN;
	int16_t x480 = -1;
	volatile int32_t t103 = -410490755;

    t103 = ((x477!=x478)|(x479-x480));

    if (t103 != -2147483647) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x485 = 3U;
	static int8_t x486 = -3;
	uint8_t x487 = 0U;
	int32_t x488 = 26073;
	int32_t t104 = 69028167;

    t104 = ((x485!=x486)|(x487-x488));

    if (t104 != -26073) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x489 = UINT32_MAX;
	uint64_t x491 = 31734605477898235LLU;
	int16_t x492 = -2;
	volatile uint64_t t105 = 3204807LLU;

    t105 = ((x489!=x490)|(x491-x492));

    if (t105 != 31734605477898237LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x493 = INT8_MAX;
	uint8_t x495 = 0U;
	int32_t x496 = -1;
	volatile int32_t t106 = 912856850;

    t106 = ((x493!=x494)|(x495-x496));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x497 = 322307099453121991LLU;
	static int64_t x498 = INT64_MIN;
	uint16_t x499 = UINT16_MAX;
	int32_t x500 = 39370387;
	volatile int32_t t107 = 1;

    t107 = ((x497!=x498)|(x499-x500));

    if (t107 != -39304851) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x502 = 0;
	volatile int64_t x503 = -1LL;
	uint16_t x504 = 8416U;
	volatile int64_t t108 = -19LL;

    t108 = ((x501!=x502)|(x503-x504));

    if (t108 != -8417LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x505 = 3797;
	int64_t x507 = INT64_MIN;
	static int64_t x508 = -1LL;
	static volatile int64_t t109 = -6294LL;

    t109 = ((x505!=x506)|(x507-x508));

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x515 = -1;
	int16_t x516 = 651;
	int32_t t110 = -207361080;

    t110 = ((x513!=x514)|(x515-x516));

    if (t110 != -651) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x518 = INT8_MIN;
	uint16_t x519 = UINT16_MAX;
	uint16_t x520 = 516U;
	static int32_t t111 = -57152540;

    t111 = ((x517!=x518)|(x519-x520));

    if (t111 != 65019) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x521 = INT32_MAX;
	int16_t x522 = INT16_MAX;
	uint32_t x524 = UINT32_MAX;
	int64_t t112 = 100965741877217650LL;

    t112 = ((x521!=x522)|(x523-x524));

    if (t112 != -4294967295LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x525 = -44;
	uint32_t x528 = UINT32_MAX;
	volatile uint32_t t113 = 1788U;

    t113 = ((x525!=x526)|(x527-x528));

    if (t113 != 121U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x530 = 0;
	volatile int32_t x531 = 349;
	volatile int16_t x532 = -1;

    t114 = ((x529!=x530)|(x531-x532));

    if (t114 != 351) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x533 = 9044237626LLU;
	static int8_t x534 = 9;
	uint16_t x535 = 58U;

    t115 = ((x533!=x534)|(x535-x536));

    if (t115 != 59LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x537 = 6;
	static int16_t x538 = INT16_MIN;
	int32_t x539 = -1;
	volatile int32_t t116 = -1685258;

    t116 = ((x537!=x538)|(x539-x540));

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x541 = INT64_MIN;
	int32_t x542 = INT32_MIN;
	int16_t x543 = 236;
	int8_t x544 = INT8_MIN;
	volatile int32_t t117 = -66;

    t117 = ((x541!=x542)|(x543-x544));

    if (t117 != 365) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x547 = INT32_MIN;
	uint64_t x548 = 10482162LLU;
	uint64_t t118 = 1730519553365710582LLU;

    t118 = ((x545!=x546)|(x547-x548));

    if (t118 != 18446744071551585807LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x550 = INT16_MIN;
	volatile uint16_t x551 = 3U;
	int16_t x552 = INT16_MIN;
	static volatile int32_t t119 = -12400;

    t119 = ((x549!=x550)|(x551-x552));

    if (t119 != 32771) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x553 = 153050673110939505LLU;
	int8_t x554 = INT8_MIN;
	uint32_t x556 = UINT32_MAX;
	volatile uint32_t t120 = 1674U;

    t120 = ((x553!=x554)|(x555-x556));

    if (t120 != 4294934529U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x557 = 32549392939667942LLU;
	static uint32_t x558 = 2366794U;
	uint32_t x559 = 16485523U;
	uint64_t x560 = UINT64_MAX;
	volatile uint64_t t121 = 701563203811LLU;

    t121 = ((x557!=x558)|(x559-x560));

    if (t121 != 16485525LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x561 = INT16_MIN;
	static int16_t x562 = INT16_MIN;
	int32_t x563 = INT32_MIN;
	int32_t x564 = -318931;

    t122 = ((x561!=x562)|(x563-x564));

    if (t122 != -2147164717) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x565 = 44627813016106LLU;
	static int8_t x566 = INT8_MIN;
	uint8_t x568 = 32U;
	volatile int32_t t123 = 1;

    t123 = ((x565!=x566)|(x567-x568));

    if (t123 != 11443) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x573 = 425U;
	int8_t x574 = INT8_MAX;
	uint8_t x575 = 102U;
	uint32_t x576 = 531783532U;
	uint32_t t124 = 1957U;

    t124 = ((x573!=x574)|(x575-x576));

    if (t124 != 3763183867U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x578 = UINT32_MAX;
	static int16_t x579 = INT16_MIN;
	int16_t x580 = -1;
	int32_t t125 = -107938;

    t125 = ((x577!=x578)|(x579-x580));

    if (t125 != -32767) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x581 = INT8_MIN;
	uint8_t x582 = 14U;
	volatile int32_t x583 = 3322;
	static uint64_t x584 = 353LLU;
	volatile uint64_t t126 = 77395673975599LLU;

    t126 = ((x581!=x582)|(x583-x584));

    if (t126 != 2969LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x585 = INT64_MIN;
	int8_t x586 = -1;
	uint16_t x587 = 717U;
	uint32_t x588 = 4420U;
	volatile uint32_t t127 = 110U;

    t127 = ((x585!=x586)|(x587-x588));

    if (t127 != 4294963593U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x589 = 7;
	int64_t x590 = INT64_MIN;
	volatile int16_t x592 = -69;

    t128 = ((x589!=x590)|(x591-x592));

    if (t128 != -2147483579) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x594 = INT8_MIN;
	int64_t x595 = 86184610210961LL;
	int16_t x596 = -8701;
	int64_t t129 = 48652403314018316LL;

    t129 = ((x593!=x594)|(x595-x596));

    if (t129 != 86184610219663LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x597 = 98U;
	uint16_t x598 = UINT16_MAX;
	volatile uint64_t x599 = 6952LLU;
	static uint64_t x600 = 506LLU;

    t130 = ((x597!=x598)|(x599-x600));

    if (t130 != 6447LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x605 = -198;
	int16_t x607 = -13;
	static uint32_t x608 = 9387068U;
	static uint32_t t131 = 138060199U;

    t131 = ((x605!=x606)|(x607-x608));

    if (t131 != 4285580215U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x609 = UINT8_MAX;
	int8_t x610 = 60;
	volatile int64_t x611 = -164968LL;
	volatile int32_t x612 = -6;
	int64_t t132 = 392366323LL;

    t132 = ((x609!=x610)|(x611-x612));

    if (t132 != -164961LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x613 = INT64_MIN;
	int8_t x616 = -1;
	int32_t t133 = -103619112;

    t133 = ((x613!=x614)|(x615-x616));

    if (t133 != 3) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x617 = INT64_MIN;
	int32_t x619 = -1;
	static int8_t x620 = INT8_MIN;
	int32_t t134 = -96610277;

    t134 = ((x617!=x618)|(x619-x620));

    if (t134 != 127) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x621 = 7359U;
	volatile int32_t x622 = INT32_MIN;
	int64_t x623 = 65967993LL;
	uint32_t x624 = 610043U;
	int64_t t135 = 110LL;

    t135 = ((x621!=x622)|(x623-x624));

    if (t135 != 65357951LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x625 = INT64_MIN;
	int64_t x626 = 244732992116LL;
	static uint16_t x627 = 338U;
	uint16_t x628 = 1U;
	static int32_t t136 = -221835;

    t136 = ((x625!=x626)|(x627-x628));

    if (t136 != 337) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x629 = 8020U;
	static int16_t x630 = 0;
	int16_t x631 = -1;
	volatile uint8_t x632 = UINT8_MAX;
	volatile int32_t t137 = 0;

    t137 = ((x629!=x630)|(x631-x632));

    if (t137 != -255) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x633 = INT32_MIN;
	int8_t x634 = INT8_MIN;
	static volatile uint64_t x636 = UINT64_MAX;
	uint64_t t138 = 7914216LLU;

    t138 = ((x633!=x634)|(x635-x636));

    if (t138 != 18446744073709551293LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x637 = INT8_MAX;
	int8_t x638 = INT8_MIN;
	uint64_t x639 = 3792964LLU;
	int32_t x640 = -1;
	static uint64_t t139 = 17733306LLU;

    t139 = ((x637!=x638)|(x639-x640));

    if (t139 != 3792965LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x641 = 272;
	volatile uint64_t x644 = UINT64_MAX;
	uint64_t t140 = 401316926974391LLU;

    t140 = ((x641!=x642)|(x643-x644));

    if (t140 != 129LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x645 = UINT64_MAX;
	int16_t x646 = -1;
	int8_t x647 = INT8_MIN;
	volatile uint64_t t141 = 492867156611LLU;

    t141 = ((x645!=x646)|(x647-x648));

    if (t141 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x649 = INT8_MAX;
	volatile int32_t x650 = -1;
	uint8_t x651 = 103U;
	int32_t x652 = -1;
	static volatile int32_t t142 = -11;

    t142 = ((x649!=x650)|(x651-x652));

    if (t142 != 105) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x653 = INT32_MAX;
	int16_t x654 = INT16_MAX;
	volatile int32_t x655 = INT32_MIN;
	static int32_t x656 = -3209;
	int32_t t143 = 0;

    t143 = ((x653!=x654)|(x655-x656));

    if (t143 != -2147480439) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x658 = 11U;
	volatile int64_t x660 = INT64_MIN;

    t144 = ((x657!=x658)|(x659-x660));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x661 = UINT32_MAX;
	uint32_t x662 = 8389292U;
	uint16_t x663 = 1406U;
	uint8_t x664 = 105U;
	int32_t t145 = 3;

    t145 = ((x661!=x662)|(x663-x664));

    if (t145 != 1301) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x665 = 965057;
	static int16_t x666 = 60;
	uint16_t x668 = UINT16_MAX;
	static volatile int32_t t146 = 0;

    t146 = ((x665!=x666)|(x667-x668));

    if (t146 != -98303) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x681 = INT8_MAX;
	uint64_t x682 = 12589LLU;
	uint16_t x683 = 5U;
	uint64_t x684 = 31637LLU;
	static volatile uint64_t t147 = 10671LLU;

    t147 = ((x681!=x682)|(x683-x684));

    if (t147 != 18446744073709519985LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x685 = INT32_MIN;
	static int16_t x686 = INT16_MIN;
	static int32_t x687 = INT32_MIN;
	int32_t x688 = INT32_MIN;
	static int32_t t148 = 269697;

    t148 = ((x685!=x686)|(x687-x688));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x689 = INT64_MIN;
	volatile int32_t x690 = 52098974;
	static uint64_t x691 = 6839812580467LLU;
	static int16_t x692 = INT16_MIN;

    t149 = ((x689!=x690)|(x691-x692));

    if (t149 != 6839812613235LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint16_t x693 = UINT16_MAX;
	uint32_t x694 = UINT32_MAX;
	int16_t x695 = INT16_MIN;
	int32_t t150 = 2097;

    t150 = ((x693!=x694)|(x695-x696));

    if (t150 != -32767) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x697 = 224857U;
	int16_t x699 = INT16_MIN;
	uint32_t x700 = 3466146U;
	uint32_t t151 = 820U;

    t151 = ((x697!=x698)|(x699-x700));

    if (t151 != 4291468383U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x701 = 13U;
	int64_t x703 = -1LL;
	int64_t x704 = -20LL;
	static volatile int64_t t152 = -13142193LL;

    t152 = ((x701!=x702)|(x703-x704));

    if (t152 != 19LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x705 = 14462U;
	int16_t x706 = -1;
	volatile uint64_t x707 = 1124LLU;
	static int16_t x708 = -1;
	static volatile uint64_t t153 = 1LLU;

    t153 = ((x705!=x706)|(x707-x708));

    if (t153 != 1125LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x711 = 393LLU;
	uint64_t x712 = 2020805232221083055LLU;
	uint64_t t154 = 225204069931LLU;

    t154 = ((x709!=x710)|(x711-x712));

    if (t154 != 16425938841488468955LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x713 = 6420101028LL;
	uint16_t x714 = 5742U;
	static int8_t x715 = -1;
	static int16_t x716 = -1;

    t155 = ((x713!=x714)|(x715-x716));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x717 = UINT64_MAX;
	static int16_t x718 = INT16_MAX;
	volatile int16_t x719 = -5;
	int8_t x720 = INT8_MIN;
	int32_t t156 = 20995;

    t156 = ((x717!=x718)|(x719-x720));

    if (t156 != 123) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x725 = -1;
	uint8_t x726 = UINT8_MAX;
	static int8_t x727 = INT8_MAX;

    t157 = ((x725!=x726)|(x727-x728));

    if (t157 != -32639) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x730 = 106976546LL;
	volatile int64_t x731 = INT64_MIN;
	int64_t t158 = -1LL;

    t158 = ((x729!=x730)|(x731-x732));

    if (t158 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x733 = INT32_MAX;
	static int64_t x734 = 127LL;
	uint32_t x735 = 23541732U;
	volatile uint32_t t159 = 89U;

    t159 = ((x733!=x734)|(x735-x736));

    if (t159 != 2171025381U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x737 = INT32_MIN;
	int8_t x738 = 0;
	volatile int8_t x739 = INT8_MIN;
	volatile int32_t x740 = -1;
	int32_t t160 = 105095973;

    t160 = ((x737!=x738)|(x739-x740));

    if (t160 != -127) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x746 = -1LL;
	int16_t x748 = -1;
	int32_t t161 = 125318381;

    t161 = ((x745!=x746)|(x747-x748));

    if (t161 != -127) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x749 = INT8_MAX;
	uint32_t x751 = 28U;
	int8_t x752 = INT8_MAX;

    t162 = ((x749!=x750)|(x751-x752));

    if (t162 != 4294967197U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x753 = -566;
	volatile int64_t x755 = 101674841LL;
	static int64_t x756 = -827882088LL;
	volatile int64_t t163 = 11457384082LL;

    t163 = ((x753!=x754)|(x755-x756));

    if (t163 != 929556929LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x757 = -6402;
	static uint8_t x758 = UINT8_MAX;
	volatile uint16_t x759 = 0U;

    t164 = ((x757!=x758)|(x759-x760));

    if (t164 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x761 = 52U;
	uint16_t x763 = 2U;

    t165 = ((x761!=x762)|(x763-x764));

    if (t165 != -37) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x765 = 0U;
	static int32_t x766 = INT32_MAX;
	int64_t x767 = -91674457219LL;
	static uint16_t x768 = 15U;
	int64_t t166 = -7963590183575259LL;

    t166 = ((x765!=x766)|(x767-x768));

    if (t166 != -91674457233LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x769 = 17U;
	uint64_t x771 = 1653LLU;
	static int32_t x772 = 7;

    t167 = ((x769!=x770)|(x771-x772));

    if (t167 != 1647LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x773 = UINT8_MAX;
	uint8_t x774 = UINT8_MAX;
	uint32_t x775 = 412612U;
	volatile int64_t x776 = -5199419178185LL;

    t168 = ((x773!=x774)|(x775-x776));

    if (t168 != 5199419590797LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x777 = 3U;
	volatile int16_t x778 = -1;
	uint16_t x780 = 3183U;
	volatile int32_t t169 = -3938468;

    t169 = ((x777!=x778)|(x779-x780));

    if (t169 != -3193) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x781 = INT64_MAX;
	volatile int16_t x782 = -1;
	uint8_t x784 = 1U;

    t170 = ((x781!=x782)|(x783-x784));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x785 = 32U;
	int64_t x786 = 16930791045577LL;
	uint64_t x787 = 716689LLU;
	volatile uint8_t x788 = 10U;

    t171 = ((x785!=x786)|(x787-x788));

    if (t171 != 716679LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x789 = INT8_MIN;
	static uint16_t x791 = 124U;
	uint32_t x792 = 6381U;
	volatile uint32_t t172 = 1710747881U;

    t172 = ((x789!=x790)|(x791-x792));

    if (t172 != 4294961039U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x793 = UINT64_MAX;
	int32_t x794 = INT32_MAX;
	static int8_t x795 = 9;
	uint16_t x796 = UINT16_MAX;
	static int32_t t173 = -12852;

    t173 = ((x793!=x794)|(x795-x796));

    if (t173 != -65525) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x799 = INT64_MIN;
	int64_t t174 = -5316462055886LL;

    t174 = ((x797!=x798)|(x799-x800));

    if (t174 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x805 = UINT32_MAX;
	volatile int8_t x806 = -1;
	volatile int8_t x807 = 27;
	uint64_t x808 = UINT64_MAX;
	volatile uint64_t t175 = 14295425LLU;

    t175 = ((x805!=x806)|(x807-x808));

    if (t175 != 28LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x810 = INT16_MIN;
	int16_t x811 = 0;
	int32_t t176 = 0;

    t176 = ((x809!=x810)|(x811-x812));

    if (t176 != 129) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x813 = 121U;
	int8_t x814 = -1;
	static int64_t x815 = INT64_MAX;
	uint32_t x816 = 125300U;
	volatile int64_t t177 = -386396605885LL;

    t177 = ((x813!=x814)|(x815-x816));

    if (t177 != 9223372036854650507LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x817 = INT8_MAX;
	uint64_t x819 = 113853779079LLU;
	uint64_t t178 = 1LLU;

    t178 = ((x817!=x818)|(x819-x820));

    if (t178 != 113853713545LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x821 = 1;
	volatile int32_t x822 = 11140475;
	int16_t x823 = 1066;
	uint32_t x824 = 31782U;
	volatile uint32_t t179 = 96664031U;

    t179 = ((x821!=x822)|(x823-x824));

    if (t179 != 4294936581U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x829 = 191U;
	static volatile uint8_t x830 = 69U;
	int8_t x831 = INT8_MAX;
	volatile int16_t x832 = INT16_MIN;
	int32_t t180 = -30162472;

    t180 = ((x829!=x830)|(x831-x832));

    if (t180 != 32895) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x845 = -1;
	volatile int8_t x847 = INT8_MIN;
	uint8_t x848 = 3U;
	int32_t t181 = 3;

    t181 = ((x845!=x846)|(x847-x848));

    if (t181 != -131) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x849 = UINT16_MAX;
	static int8_t x851 = -1;
	static int16_t x852 = INT16_MAX;
	int32_t t182 = 931;

    t182 = ((x849!=x850)|(x851-x852));

    if (t182 != -32767) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x853 = 53;
	int16_t x854 = INT16_MIN;
	int32_t x855 = -1;
	volatile int16_t x856 = INT16_MIN;
	int32_t t183 = 4492;

    t183 = ((x853!=x854)|(x855-x856));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x861 = -1;
	int8_t x862 = 19;
	static uint8_t x863 = 6U;
	static volatile int32_t x864 = -1;
	volatile int32_t t184 = -319;

    t184 = ((x861!=x862)|(x863-x864));

    if (t184 != 7) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x865 = INT8_MAX;
	uint8_t x868 = 46U;
	uint32_t t185 = 2119U;

    t185 = ((x865!=x866)|(x867-x868));

    if (t185 != 618575U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x869 = 1U;
	static int16_t x870 = -1;
	static volatile uint64_t x871 = UINT64_MAX;
	uint64_t t186 = 1068872787633524152LLU;

    t186 = ((x869!=x870)|(x871-x872));

    if (t186 != 2988695LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x877 = UINT64_MAX;
	int8_t x878 = 0;
	static int32_t x879 = -1;
	int32_t x880 = INT32_MIN;
	int32_t t187 = INT32_MAX;

    t187 = ((x877!=x878)|(x879-x880));

    if (t187 != INT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x881 = 3U;
	int32_t x882 = -334173674;
	static volatile uint8_t x883 = 127U;
	int8_t x884 = INT8_MAX;
	static int32_t t188 = 1;

    t188 = ((x881!=x882)|(x883-x884));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x885 = -1;
	volatile int16_t x886 = -99;
	uint64_t x887 = 11420554505LLU;
	int32_t x888 = INT32_MAX;
	volatile uint64_t t189 = 50LLU;

    t189 = ((x885!=x886)|(x887-x888));

    if (t189 != 9273070859LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x889 = INT64_MAX;
	volatile int32_t x890 = -1;
	int8_t x891 = 0;
	int64_t x892 = -1LL;
	int64_t t190 = 103090LL;

    t190 = ((x889!=x890)|(x891-x892));

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x893 = 0;
	int16_t x895 = -175;
	int8_t x896 = -1;
	volatile int32_t t191 = 8092163;

    t191 = ((x893!=x894)|(x895-x896));

    if (t191 != -173) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x897 = INT32_MAX;
	int16_t x898 = -11;
	static uint16_t x899 = 68U;
	static int32_t x900 = INT32_MAX;
	static volatile int32_t t192 = -1;

    t192 = ((x897!=x898)|(x899-x900));

    if (t192 != -2147483579) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x901 = -1LL;
	int8_t x902 = -1;
	int64_t x903 = -1LL;
	static int64_t t193 = -6050956LL;

    t193 = ((x901!=x902)|(x903-x904));

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x905 = -32893809759667LL;
	int16_t x906 = INT16_MAX;
	uint32_t x907 = 48525U;
	volatile uint32_t t194 = 486U;

    t194 = ((x905!=x906)|(x907-x908));

    if (t194 != 48333U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x909 = INT8_MIN;
	static int16_t x910 = INT16_MIN;
	int16_t x911 = -1;
	int32_t x912 = 31;

    t195 = ((x909!=x910)|(x911-x912));

    if (t195 != -31) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x914 = -2354300;
	uint32_t x915 = UINT32_MAX;
	int8_t x916 = -3;
	volatile uint32_t t196 = 879225U;

    t196 = ((x913!=x914)|(x915-x916));

    if (t196 != 3U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x917 = -1;
	volatile uint32_t x918 = UINT32_MAX;
	static uint8_t x919 = 92U;
	volatile int32_t t197 = -584079735;

    t197 = ((x917!=x918)|(x919-x920));

    if (t197 != 93) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x921 = -1LL;
	volatile int8_t x922 = 0;
	volatile int32_t t198 = 14046757;

    t198 = ((x921!=x922)|(x923-x924));

    if (t198 != 30211) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x925 = INT8_MIN;
	uint16_t x926 = 4754U;
	int32_t x928 = 7;
	volatile int64_t t199 = 74LL;

    t199 = ((x925!=x926)|(x927-x928));

    if (t199 != -7LL) { NG(); } else { ; }
	
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

