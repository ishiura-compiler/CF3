
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

static int64_t x1 = INT64_MIN;
int16_t x5 = INT16_MAX;
volatile int32_t t1 = 2576;
static int16_t x11 = 4;
volatile uint16_t x22 = UINT16_MAX;
int16_t x29 = INT16_MIN;
static volatile uint16_t x35 = UINT16_MAX;
static volatile int64_t x36 = -239730141595LL;
int8_t x37 = -29;
volatile uint8_t x40 = 0U;
int8_t x48 = 16;
uint8_t x49 = UINT8_MAX;
uint8_t x51 = 0U;
static volatile int32_t t13 = -10;
volatile uint64_t t14 = 138LLU;
uint16_t x76 = 1U;
volatile int64_t x84 = 116LL;
uint64_t x85 = 222739921303352LLU;
static volatile int32_t x92 = -1349;
int64_t t22 = -18614LL;
uint64_t x100 = UINT64_MAX;
int32_t x101 = -233434954;
uint8_t x107 = 1U;
uint64_t x116 = UINT64_MAX;
int16_t x119 = -263;
static uint64_t t28 = 8777917650844750LLU;
int64_t x122 = INT64_MIN;
int64_t x129 = 1392104131508107LL;
uint64_t x130 = 431363500094513718LLU;
uint32_t t32 = 5114577U;
static int16_t x138 = -6325;
int8_t x141 = INT8_MAX;
volatile int64_t t35 = -1367377LL;
static int64_t x149 = INT64_MAX;
static uint64_t x156 = 349133244220977LLU;
static int16_t x162 = INT16_MAX;
int16_t x165 = 111;
uint16_t x166 = 425U;
static int64_t x168 = INT64_MIN;
uint32_t x175 = UINT32_MAX;
uint16_t x179 = UINT16_MAX;
uint16_t x185 = 11664U;
volatile int32_t x196 = INT32_MIN;
volatile uint64_t x197 = UINT64_MAX;
int8_t x200 = 13;
volatile uint64_t t46 = 496895425946LLU;
volatile int16_t x203 = INT16_MAX;
volatile int64_t x206 = 71769852396900152LL;
int8_t x207 = 0;
uint8_t x213 = UINT8_MAX;
int8_t x216 = INT8_MIN;
int64_t x217 = -72273652479623770LL;
uint32_t x227 = 1094972U;
volatile uint16_t x233 = 15U;
static int8_t x235 = INT8_MAX;
static uint32_t x238 = UINT32_MAX;
static volatile int16_t x239 = INT16_MAX;
static int8_t x240 = -39;
static uint32_t t55 = 1U;
volatile int32_t x262 = -1;
int32_t x263 = INT32_MAX;
uint32_t x286 = 6468193U;
volatile int32_t x287 = INT32_MIN;
int32_t x304 = -504991;
int8_t x306 = 1;
uint8_t x308 = UINT8_MAX;
volatile int32_t t66 = 30;
uint16_t x309 = UINT16_MAX;
int64_t x317 = 402393968LL;
uint8_t x319 = UINT8_MAX;
volatile int64_t t68 = -15716836037LL;
uint8_t x340 = 1U;
uint16_t x342 = 2559U;
static uint64_t t72 = 816416954LLU;
volatile int64_t x348 = INT64_MAX;
volatile int64_t t73 = -2027788776771LL;
int16_t x352 = INT16_MIN;
static int16_t x359 = -1;
int32_t x370 = 3881;
int8_t x372 = 1;
int64_t x395 = -1LL;
int32_t x403 = INT32_MIN;
int64_t t85 = 47536792LL;
int16_t x416 = 0;
static int16_t x421 = INT16_MIN;
int16_t x426 = INT16_MAX;
int16_t x428 = 114;
volatile int64_t t90 = 738LL;
static int64_t t92 = 24774LL;
int16_t x450 = INT16_MAX;
volatile int64_t t95 = 66448596001207315LL;
int32_t x456 = 2639;
int8_t x457 = INT8_MAX;
int8_t x479 = INT8_MIN;
int64_t x480 = -1LL;
int64_t x499 = INT64_MAX;
uint16_t x500 = UINT16_MAX;
int64_t t104 = 349937765002LL;
uint32_t t105 = 3538751U;
int32_t x506 = INT32_MAX;
volatile int32_t t106 = -8;
static int64_t x515 = -25433293336445205LL;
int8_t x520 = INT8_MAX;
volatile uint64_t x521 = 7096181398744336LLU;
uint64_t x523 = UINT64_MAX;
volatile int32_t x525 = INT32_MIN;
uint32_t x536 = 1562U;
int8_t x538 = INT8_MAX;
int32_t x539 = 41847;
int8_t x540 = -12;
uint64_t t115 = UINT64_MAX;
int64_t t116 = -610664207485LL;
uint32_t x552 = UINT32_MAX;
int64_t x560 = -1LL;
int64_t t119 = -7188911733LL;
int16_t x561 = 7494;
int64_t x562 = -375499122444LL;
int16_t x563 = INT16_MIN;
int8_t x572 = INT8_MIN;
static int8_t x580 = INT8_MIN;
volatile int8_t x582 = 0;
uint32_t x585 = 192476487U;
int64_t x593 = INT64_MIN;
uint32_t t128 = 239U;
int8_t x610 = -4;
static int16_t x611 = -1;
uint32_t x616 = 469U;
volatile uint64_t x623 = 734702LLU;
static uint64_t t132 = 190469834973955LLU;
int16_t x631 = INT16_MIN;
uint32_t x651 = UINT32_MAX;
uint32_t x652 = 95289293U;
static int32_t x663 = INT32_MAX;
static volatile uint32_t t139 = 402340U;
volatile uint16_t x670 = 5U;
uint8_t x679 = 5U;
int32_t t143 = -9;
uint32_t x688 = 17U;
static uint32_t x691 = 387914978U;
volatile uint64_t t146 = 3853230539722LLU;
uint64_t x705 = 8LLU;
uint32_t x719 = UINT32_MAX;
int16_t x720 = -1;
uint16_t x729 = UINT16_MAX;
int16_t x731 = INT16_MAX;
int8_t x734 = -5;
static int64_t t152 = -60LL;
uint64_t t155 = UINT64_MAX;
int16_t x759 = INT16_MIN;
int32_t x760 = INT32_MIN;
uint64_t t157 = 488498667618LLU;
int64_t x764 = 39233LL;
int64_t x768 = INT64_MIN;
static int64_t t159 = 263340641809LL;
uint64_t x782 = UINT64_MAX;
int16_t x785 = -1;
int8_t x801 = -7;
int8_t x806 = -1;
volatile uint32_t x812 = UINT32_MAX;
volatile int32_t x816 = INT32_MAX;
int64_t t169 = -42336584372LL;
static int8_t x825 = 0;
int16_t x826 = -20;
int32_t x828 = INT32_MAX;
int64_t t172 = -890375002749LL;
uint64_t x835 = 5251073936282312923LLU;
uint64_t t174 = 12LLU;
int16_t x860 = INT16_MIN;
static uint32_t x861 = 14U;
uint64_t x863 = UINT64_MAX;
uint8_t x865 = 27U;
int8_t x874 = INT8_MAX;
static uint8_t x875 = UINT8_MAX;
int16_t x882 = INT16_MAX;
uint64_t t184 = 322909863105242449LLU;
int8_t x887 = -1;
volatile int64_t t185 = 4046LL;
volatile int8_t x903 = INT8_MAX;
uint32_t x911 = UINT32_MAX;
static uint16_t x912 = 2U;
uint16_t x919 = 1598U;
int32_t x928 = -1;
int8_t x940 = -1;
uint16_t x943 = UINT16_MAX;
static volatile int8_t x945 = -1;
static uint8_t x946 = 14U;
uint32_t x947 = 489137U;
uint32_t t198 = UINT32_MAX;
uint32_t x954 = 114U;


void f0(void) {
    	uint64_t x2 = UINT64_MAX;
	uint32_t x3 = 1971062411U;
	static int64_t x4 = 990105217384LL;
	static volatile uint64_t t0 = 51243994093LLU;

    t0 = (((x1|x2)*x3)|x4);

    if (t0 != 18446744071811627389LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 2U;
	static int32_t x7 = -1;
	int16_t x8 = INT16_MAX;

    t1 = (((x5|x6)*x7)|x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int16_t x10 = INT16_MIN;
	static uint32_t x12 = 0U;
	uint32_t t2 = 16444554U;

    t2 = (((x9|x10)*x11)|x12);

    if (t2 != 4294967292U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int64_t x14 = INT64_MIN;
	uint16_t x15 = 1522U;
	uint16_t x16 = 12134U;
	static volatile int64_t t3 = 271264644571157LL;

    t3 = (((x13|x14)*x15)|x16);

    if (t3 != -146LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -2;
	static int8_t x18 = -18;
	static int32_t x19 = -10299422;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = (((x17|x18)*x19)|x20);

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = 76156679076LL;
	int8_t x23 = INT8_MIN;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = -446LL;

    t5 = (((x21|x22)*x23)|x24);

    if (t5 != -9748057423744LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int8_t x26 = -1;
	volatile int64_t x27 = INT64_MAX;
	int32_t x28 = -1;
	static int64_t t6 = -1639572272797582109LL;

    t6 = (((x25|x26)*x27)|x28);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MAX;
	static int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 41790295374480LL;

    t7 = (((x29|x30)*x31)|x32);

    if (t7 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MIN;
	int8_t x34 = 1;
	int64_t t8 = -327977LL;

    t8 = (((x33|x34)*x35)|x36);

    if (t8 != -1359380481LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x38 = 109252590LL;
	int8_t x39 = INT8_MAX;
	int64_t t9 = 1470561LL;

    t9 = (((x37|x38)*x39)|x40);

    if (t9 != -2159LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -25;
	static int8_t x42 = 17;
	int16_t x43 = 54;
	static int32_t x44 = INT32_MAX;
	int32_t t10 = -746375;

    t10 = (((x41|x42)*x43)|x44);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = 0U;
	int8_t x46 = -1;
	static int16_t x47 = INT16_MAX;
	static uint32_t t11 = 539513305U;

    t11 = (((x45|x46)*x47)|x48);

    if (t11 != 4294934545U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x50 = -1LL;
	static int16_t x52 = -1;
	int64_t t12 = -19289LL;

    t12 = (((x49|x50)*x51)|x52);

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	int16_t x54 = INT16_MIN;
	int32_t x55 = INT32_MAX;
	int16_t x56 = INT16_MIN;

    t13 = (((x53|x54)*x55)|x56);

    if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = -1;
	volatile uint16_t x62 = 3290U;
	int8_t x63 = 0;
	uint64_t x64 = 3LLU;

    t14 = (((x61|x62)*x63)|x64);

    if (t14 != 3LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = -1;
	volatile int64_t x66 = 247884153LL;
	static int16_t x67 = -1;
	volatile int8_t x68 = INT8_MIN;
	int64_t t15 = -17582151941LL;

    t15 = (((x65|x66)*x67)|x68);

    if (t15 != -127LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x69 = INT64_MIN;
	static int16_t x70 = INT16_MIN;
	int32_t x71 = INT32_MIN;
	uint8_t x72 = 31U;
	volatile int64_t t16 = -669379594400LL;

    t16 = (((x69|x70)*x71)|x72);

    if (t16 != 70368744177695LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x73 = 10LLU;
	int64_t x74 = 2LL;
	uint16_t x75 = UINT16_MAX;
	uint64_t t17 = 16216LLU;

    t17 = (((x73|x74)*x75)|x76);

    if (t17 != 655351LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = 424;
	volatile int16_t x78 = -1;
	int8_t x79 = 1;
	int16_t x80 = -150;
	int32_t t18 = -78;

    t18 = (((x77|x78)*x79)|x80);

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 243659559732474LLU;
	int8_t x82 = INT8_MIN;
	int32_t x83 = -9;
	static uint64_t t19 = 5984LLU;

    t19 = (((x81|x82)*x83)|x84);

    if (t19 != 118LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x86 = 0;
	static volatile int8_t x87 = -3;
	static int16_t x88 = INT16_MAX;
	uint64_t t20 = 94630428LLU;

    t20 = (((x85|x86)*x87)|x88);

    if (t20 != 18446075853945667583LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -233463;
	int16_t x90 = -10806;
	uint32_t x91 = UINT32_MAX;
	volatile uint32_t t21 = 6656348U;

    t21 = (((x89|x90)*x91)|x92);

    if (t21 != 4294965951U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = 10656U;
	int64_t x94 = -1186002928107074336LL;
	int8_t x95 = -1;
	int8_t x96 = -1;

    t22 = (((x93|x94)*x95)|x96);

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x97 = 876437844LLU;
	int8_t x98 = INT8_MAX;
	volatile uint16_t x99 = UINT16_MAX;
	volatile uint64_t t23 = UINT64_MAX;

    t23 = (((x97|x98)*x99)|x100);

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x102 = INT32_MAX;
	uint64_t x103 = UINT64_MAX;
	volatile int64_t x104 = 3867989648945568875LL;
	volatile uint64_t t24 = 1511630458819LLU;

    t24 = (((x101|x102)*x103)|x104);

    if (t24 != 3867989648945568875LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -54;
	volatile int8_t x106 = -1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t25 = -2191;

    t25 = (((x105|x106)*x107)|x108);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 99LLU;
	static uint32_t x110 = UINT32_MAX;
	int32_t x111 = -4132;
	volatile uint32_t x112 = UINT32_MAX;
	static volatile uint64_t t26 = 3663331753036LLU;

    t26 = (((x109|x110)*x111)|x112);

    if (t26 != 18446726331199651839LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = 0;
	int16_t x114 = -4;
	uint32_t x115 = 4U;
	static uint64_t t27 = UINT64_MAX;

    t27 = (((x113|x114)*x115)|x116);

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x117 = 89682LL;
	int16_t x118 = INT16_MAX;
	uint64_t x120 = 2279968603LLU;

    t28 = (((x117|x118)*x119)|x120);

    if (t28 != 18446744073708867423LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x121 = INT16_MAX;
	int8_t x123 = -1;
	static volatile int64_t x124 = INT64_MIN;
	int64_t t29 = -52620424388LL;

    t29 = (((x121|x122)*x123)|x124);

    if (t29 != -32767LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x125 = -1;
	uint64_t x126 = UINT64_MAX;
	uint32_t x127 = UINT32_MAX;
	int64_t x128 = -1LL;
	static uint64_t t30 = UINT64_MAX;

    t30 = (((x125|x126)*x127)|x128);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x131 = UINT8_MAX;
	uint16_t x132 = 6U;
	uint64_t t31 = 7606377875241351637LLU;

    t31 = (((x129|x130)*x131)|x132);

    if (t31 != 17795387898052724551LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MIN;
	static volatile int16_t x134 = INT16_MIN;
	uint32_t x135 = 26754U;
	static int8_t x136 = 51;

    t32 = (((x133|x134)*x135)|x136);

    if (t32 != 3418292275U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = INT64_MIN;
	static uint64_t x139 = 326603LLU;
	volatile int32_t x140 = INT32_MAX;
	static volatile uint64_t t33 = UINT64_MAX;

    t33 = (((x137|x138)*x139)|x140);

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x142 = 41;
	static uint64_t x143 = 99LLU;
	int64_t x144 = INT64_MAX;
	uint64_t t34 = 2567413830812161LLU;

    t34 = (((x141|x142)*x143)|x144);

    if (t34 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = INT32_MIN;
	int64_t x146 = INT64_MIN;
	static volatile int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MIN;

    t35 = (((x145|x146)*x147)|x148);

    if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x150 = INT64_MIN;
	volatile int32_t x151 = INT32_MIN;
	int16_t x152 = INT16_MIN;
	volatile int64_t t36 = 32273586LL;

    t36 = (((x149|x150)*x151)|x152);

    if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = 39392127136310561LL;
	int32_t x154 = -1;
	int8_t x155 = 0;
	static uint64_t t37 = 13642014LLU;

    t37 = (((x153|x154)*x155)|x156);

    if (t37 != 349133244220977LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x157 = -3569;
	int16_t x158 = INT16_MIN;
	int32_t x159 = -1;
	int8_t x160 = INT8_MIN;
	static int32_t t38 = -553184;

    t38 = (((x157|x158)*x159)|x160);

    if (t38 != -15) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -1;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t39 = 118;

    t39 = (((x161|x162)*x163)|x164);

    if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x167 = 14U;
	int64_t t40 = 373483LL;

    t40 = (((x165|x166)*x167)|x168);

    if (t40 != -9223372036854768878LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = -1LL;
	volatile int16_t x170 = -901;
	int16_t x171 = INT16_MIN;
	volatile int8_t x172 = INT8_MIN;
	static int64_t t41 = 30839LL;

    t41 = (((x169|x170)*x171)|x172);

    if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = INT32_MIN;
	int64_t x174 = INT64_MIN;
	int16_t x176 = -1;
	volatile int64_t t42 = 254530329LL;

    t42 = (((x173|x174)*x175)|x176);

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -319111;
	int8_t x178 = INT8_MIN;
	uint8_t x180 = 0U;
	int32_t t43 = 565587;

    t43 = (((x177|x178)*x179)|x180);

    if (t43 != -458745) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x186 = 202;
	int8_t x187 = INT8_MAX;
	static uint64_t x188 = 5595LLU;
	volatile uint64_t t44 = 647761615071LLU;

    t44 = (((x185|x186)*x187)|x188);

    if (t44 != 1490943LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x193 = 96587136721LLU;
	uint64_t x194 = 5297LLU;
	int16_t x195 = INT16_MIN;
	uint64_t t45 = 469117618LLU;

    t45 = (((x193|x194)*x195)|x196);

    if (t45 != 18446744072107819008LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x198 = -1;
	int32_t x199 = INT32_MAX;

    t46 = (((x197|x198)*x199)|x200);

    if (t46 != 18446744071562067981LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = -1;
	int64_t x202 = -93210LL;
	int8_t x204 = INT8_MIN;
	int64_t t47 = -325409LL;

    t47 = (((x201|x202)*x203)|x204);

    if (t47 != -127LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x205 = 16528285108934567LL;
	volatile int64_t x208 = -4659096LL;
	int64_t t48 = -1227352873932625178LL;

    t48 = (((x205|x206)*x207)|x208);

    if (t48 != -4659096LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x214 = INT16_MIN;
	static int32_t x215 = 1556;
	volatile int32_t t49 = 0;

    t49 = (((x213|x214)*x215)|x216);

    if (t49 != -20) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x218 = 131248967U;
	int16_t x219 = 1;
	int64_t x220 = INT64_MIN;
	volatile int64_t t50 = 10664LL;

    t50 = (((x217|x218)*x219)|x220);

    if (t50 != -72273652370440217LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x221 = 4U;
	volatile uint64_t x222 = UINT64_MAX;
	volatile int8_t x223 = INT8_MAX;
	uint32_t x224 = 5989551U;
	uint64_t t51 = 84447493747LLU;

    t51 = (((x221|x222)*x223)|x224);

    if (t51 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x225 = 0;
	static uint8_t x226 = UINT8_MAX;
	static int32_t x228 = -1;
	uint32_t t52 = UINT32_MAX;

    t52 = (((x225|x226)*x227)|x228);

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	volatile uint64_t x230 = 2986958LLU;
	uint32_t x231 = 797472U;
	int64_t x232 = INT64_MIN;
	uint64_t t53 = 134024448295898778LLU;

    t53 = (((x229|x230)*x231)|x232);

    if (t53 != 18446744073708754144LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x234 = 2U;
	static uint32_t x236 = UINT32_MAX;
	uint32_t t54 = UINT32_MAX;

    t54 = (((x233|x234)*x235)|x236);

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = INT32_MAX;

    t55 = (((x237|x238)*x239)|x240);

    if (t55 != 4294967257U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x245 = 413102LLU;
	int32_t x246 = -1;
	static uint8_t x247 = 76U;
	static volatile int64_t x248 = INT64_MAX;
	volatile uint64_t t56 = UINT64_MAX;

    t56 = (((x245|x246)*x247)|x248);

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x249 = -1;
	int8_t x250 = 21;
	volatile uint64_t x251 = UINT64_MAX;
	int64_t x252 = -1LL;
	volatile uint64_t t57 = UINT64_MAX;

    t57 = (((x249|x250)*x251)|x252);

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x253 = 3LLU;
	static int32_t x254 = 88247129;
	uint8_t x255 = UINT8_MAX;
	int16_t x256 = INT16_MAX;
	uint64_t t58 = 497518651419LLU;

    t58 = (((x253|x254)*x255)|x256);

    if (t58 != 22503030783LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x261 = INT64_MAX;
	volatile int64_t x264 = INT64_MAX;
	volatile int64_t t59 = 502423743703114398LL;

    t59 = (((x261|x262)*x263)|x264);

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = -118226610LL;
	int8_t x270 = -1;
	static int8_t x271 = 0;
	static uint8_t x272 = 12U;
	int64_t t60 = -4772701919LL;

    t60 = (((x269|x270)*x271)|x272);

    if (t60 != 12LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x281 = -1;
	static uint32_t x282 = UINT32_MAX;
	static int8_t x283 = INT8_MIN;
	int64_t x284 = 1149LL;
	volatile int64_t t61 = 21019553919069428LL;

    t61 = (((x281|x282)*x283)|x284);

    if (t61 != 1277LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x285 = -5;
	int32_t x288 = INT32_MAX;
	volatile uint32_t t62 = UINT32_MAX;

    t62 = (((x285|x286)*x287)|x288);

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x289 = 60U;
	volatile uint64_t x290 = 10286177LLU;
	int16_t x291 = -1;
	uint32_t x292 = UINT32_MAX;
	volatile uint64_t t63 = UINT64_MAX;

    t63 = (((x289|x290)*x291)|x292);

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x297 = UINT8_MAX;
	int64_t x298 = -1LL;
	int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MIN;
	volatile int64_t t64 = 9259351101720926LL;

    t64 = (((x297|x298)*x299)|x300);

    if (t64 != -2147483520LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x301 = UINT16_MAX;
	static int64_t x302 = INT64_MIN;
	int8_t x303 = -1;
	volatile int64_t t65 = -186589932442253LL;

    t65 = (((x301|x302)*x303)|x304);

    if (t65 != -46239LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x305 = INT16_MIN;
	int8_t x307 = INT8_MIN;

    t66 = (((x305|x306)*x307)|x308);

    if (t66 != 4194303) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x310 = INT32_MIN;
	int32_t x311 = -1;
	static int8_t x312 = -1;
	volatile int32_t t67 = -367334;

    t67 = (((x309|x310)*x311)|x312);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x318 = UINT8_MAX;
	int16_t x320 = INT16_MAX;

    t68 = (((x317|x318)*x319)|x320);

    if (t68 != 102610501631LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x321 = -1;
	static int32_t x322 = -1;
	uint32_t x323 = 5U;
	int8_t x324 = INT8_MIN;
	volatile uint32_t t69 = 72U;

    t69 = (((x321|x322)*x323)|x324);

    if (t69 != 4294967291U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x325 = -1;
	uint16_t x326 = 1U;
	uint8_t x327 = 1U;
	uint8_t x328 = 1U;
	volatile int32_t t70 = 155;

    t70 = (((x325|x326)*x327)|x328);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x337 = -1;
	static int64_t x338 = INT64_MIN;
	int32_t x339 = 21;
	int64_t t71 = 1378777338LL;

    t71 = (((x337|x338)*x339)|x340);

    if (t71 != -21LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x341 = UINT64_MAX;
	int64_t x343 = INT64_MIN;
	int8_t x344 = -10;

    t72 = (((x341|x342)*x343)|x344);

    if (t72 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x345 = INT8_MAX;
	volatile uint8_t x346 = 4U;
	int16_t x347 = INT16_MIN;

    t73 = (((x345|x346)*x347)|x348);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x349 = 12839;
	int8_t x350 = INT8_MAX;
	uint8_t x351 = UINT8_MAX;
	static volatile int32_t t74 = 1264;

    t74 = (((x349|x350)*x351)|x352);

    if (t74 != -13183) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x353 = INT8_MIN;
	volatile uint16_t x354 = UINT16_MAX;
	int16_t x355 = -1;
	uint64_t x356 = 16673047006LLU;
	uint64_t t75 = 484803773594466LLU;

    t75 = (((x353|x354)*x355)|x356);

    if (t75 != 16673047007LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x357 = UINT8_MAX;
	int32_t x358 = -1;
	uint8_t x360 = 63U;
	static int32_t t76 = -954;

    t76 = (((x357|x358)*x359)|x360);

    if (t76 != 63) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x361 = -1;
	int64_t x362 = -1LL;
	static volatile int16_t x363 = INT16_MAX;
	static uint8_t x364 = UINT8_MAX;
	static int64_t t77 = -20814LL;

    t77 = (((x361|x362)*x363)|x364);

    if (t77 != -32513LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x365 = -112736388979834672LL;
	uint64_t x366 = 8343LLU;
	int32_t x367 = INT32_MAX;
	static int16_t x368 = -9;
	static volatile uint64_t t78 = UINT64_MAX;

    t78 = (((x365|x366)*x367)|x368);

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x369 = UINT32_MAX;
	int8_t x371 = -1;
	uint32_t t79 = 1U;

    t79 = (((x369|x370)*x371)|x372);

    if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x377 = INT8_MIN;
	volatile int32_t x378 = INT32_MIN;
	volatile int32_t x379 = 138;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t80 = UINT64_MAX;

    t80 = (((x377|x378)*x379)|x380);

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint64_t x385 = UINT64_MAX;
	static int8_t x386 = INT8_MIN;
	static int16_t x387 = INT16_MIN;
	int8_t x388 = -1;
	uint64_t t81 = UINT64_MAX;

    t81 = (((x385|x386)*x387)|x388);

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x389 = 0;
	int8_t x390 = -1;
	volatile int32_t x391 = 764460764;
	int32_t x392 = INT32_MAX;
	int32_t t82 = -7405405;

    t82 = (((x389|x390)*x391)|x392);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x393 = UINT64_MAX;
	static int16_t x394 = 3213;
	int16_t x396 = -1;
	uint64_t t83 = UINT64_MAX;

    t83 = (((x393|x394)*x395)|x396);

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x401 = -1521101403583LL;
	int64_t x402 = 6919688457466009LL;
	int8_t x404 = INT8_MIN;
	int64_t t84 = 48921553LL;

    t84 = (((x401|x402)*x403)|x404);

    if (t84 != -128LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x409 = 136836406175986336LL;
	int32_t x410 = INT32_MAX;
	uint8_t x411 = 12U;
	static int16_t x412 = INT16_MIN;

    t85 = (((x409|x410)*x411)|x412);

    if (t85 != -12LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x413 = -1;
	uint16_t x414 = 194U;
	uint16_t x415 = 140U;
	volatile int32_t t86 = 15269;

    t86 = (((x413|x414)*x415)|x416);

    if (t86 != -140) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x417 = 2834541956LL;
	int32_t x418 = 12;
	volatile int16_t x419 = INT16_MAX;
	volatile uint64_t x420 = 1582LLU;
	uint64_t t87 = 519019127694259LLU;

    t87 = (((x417|x418)*x419)|x420);

    if (t87 != 92879436535422LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x422 = INT16_MIN;
	int8_t x423 = INT8_MIN;
	int32_t x424 = INT32_MIN;
	static volatile int32_t t88 = -90;

    t88 = (((x421|x422)*x423)|x424);

    if (t88 != -2143289344) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x425 = INT16_MAX;
	int8_t x427 = -1;
	int32_t t89 = -186975;

    t89 = (((x425|x426)*x427)|x428);

    if (t89 != -32653) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x429 = INT16_MAX;
	uint16_t x430 = 2U;
	volatile int64_t x431 = -1LL;
	int64_t x432 = -3LL;

    t90 = (((x429|x430)*x431)|x432);

    if (t90 != -3LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x433 = UINT8_MAX;
	uint64_t x434 = UINT64_MAX;
	volatile int64_t x435 = INT64_MIN;
	static int16_t x436 = 1559;
	static volatile uint64_t t91 = 44LLU;

    t91 = (((x433|x434)*x435)|x436);

    if (t91 != 9223372036854777367LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x437 = INT16_MAX;
	volatile int8_t x438 = 57;
	int64_t x439 = -76896LL;
	uint16_t x440 = 693U;

    t92 = (((x437|x438)*x439)|x440);

    if (t92 != -2519650571LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x441 = UINT64_MAX;
	int16_t x442 = 12078;
	volatile int32_t x443 = 8;
	volatile uint64_t x444 = 368214155LLU;
	volatile uint64_t t93 = 23093LLU;

    t93 = (((x441|x442)*x443)|x444);

    if (t93 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x445 = 0;
	int64_t x446 = 92949LL;
	uint64_t x447 = 32LLU;
	volatile int8_t x448 = -1;
	uint64_t t94 = UINT64_MAX;

    t94 = (((x445|x446)*x447)|x448);

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x449 = 3U;
	int64_t x451 = -1LL;
	int32_t x452 = INT32_MIN;

    t95 = (((x449|x450)*x451)|x452);

    if (t95 != -32767LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x453 = -1;
	int32_t x454 = INT32_MIN;
	static int64_t x455 = -1760331LL;
	static volatile int64_t t96 = 49618LL;

    t96 = (((x453|x454)*x455)|x456);

    if (t96 != 1760847LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x458 = INT16_MAX;
	volatile int64_t x459 = -7208616865351LL;
	static int64_t x460 = INT64_MAX;
	volatile int64_t t97 = -9979519115215LL;

    t97 = (((x457|x458)*x459)|x460);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x461 = INT64_MIN;
	int64_t x462 = -1LL;
	uint16_t x463 = 3U;
	static uint64_t x464 = UINT64_MAX;
	volatile uint64_t t98 = UINT64_MAX;

    t98 = (((x461|x462)*x463)|x464);

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x465 = INT8_MIN;
	uint16_t x466 = UINT16_MAX;
	uint32_t x467 = 1458763113U;
	static uint16_t x468 = 275U;
	volatile uint32_t t99 = 3186029U;

    t99 = (((x465|x466)*x467)|x468);

    if (t99 != 2836204439U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x473 = INT64_MIN;
	uint8_t x474 = 10U;
	int64_t x475 = -1LL;
	volatile int64_t x476 = -1LL;
	int64_t t100 = 5750588562086648LL;

    t100 = (((x473|x474)*x475)|x476);

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x477 = INT8_MIN;
	int64_t x478 = INT64_MIN;
	int64_t t101 = 788230074LL;

    t101 = (((x477|x478)*x479)|x480);

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x485 = INT8_MIN;
	int64_t x486 = INT64_MAX;
	int8_t x487 = -1;
	int8_t x488 = INT8_MIN;
	static int64_t t102 = -3428096907104013LL;

    t102 = (((x485|x486)*x487)|x488);

    if (t102 != -127LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x489 = -1;
	int64_t x490 = -1LL;
	uint8_t x491 = 11U;
	int64_t x492 = INT64_MAX;
	volatile int64_t t103 = 8341924890LL;

    t103 = (((x489|x490)*x491)|x492);

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x497 = -86396638934469LL;
	int64_t x498 = INT64_MAX;

    t104 = (((x497|x498)*x499)|x500);

    if (t104 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x501 = 2;
	volatile uint32_t x502 = 6247276U;
	uint32_t x503 = 4102741U;
	int8_t x504 = INT8_MIN;

    t105 = (((x501|x502)*x503)|x504);

    if (t105 != 4294967174U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x505 = -15901;
	volatile int8_t x507 = INT8_MAX;
	int16_t x508 = -1;

    t106 = (((x505|x506)*x507)|x508);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x509 = -1LL;
	int16_t x510 = INT16_MIN;
	static int8_t x511 = INT8_MAX;
	volatile uint64_t x512 = 356092LLU;
	volatile uint64_t t107 = 94884422LLU;

    t107 = (((x509|x510)*x511)|x512);

    if (t107 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x513 = INT8_MAX;
	static uint8_t x514 = 6U;
	int32_t x516 = 277;
	volatile int64_t t108 = 393LL;

    t108 = (((x513|x514)*x515)|x516);

    if (t108 != -3230028253728540779LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x517 = -55;
	static int8_t x518 = INT8_MIN;
	int32_t x519 = 12;
	static volatile int32_t t109 = -9;

    t109 = (((x517|x518)*x519)|x520);

    if (t109 != -641) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x522 = -1;
	int32_t x524 = INT32_MIN;
	static volatile uint64_t t110 = 211102782LLU;

    t110 = (((x521|x522)*x523)|x524);

    if (t110 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x526 = -1;
	int16_t x527 = INT16_MIN;
	int32_t x528 = -1;
	int32_t t111 = 3763;

    t111 = (((x525|x526)*x527)|x528);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x529 = 17129U;
	static uint8_t x530 = 12U;
	uint64_t x531 = UINT64_MAX;
	uint8_t x532 = UINT8_MAX;
	static volatile uint64_t t112 = 232169226250LLU;

    t112 = (((x529|x530)*x531)|x532);

    if (t112 != 18446744073709534719LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x533 = INT16_MIN;
	uint32_t x534 = 1713U;
	volatile uint16_t x535 = 5U;
	uint32_t t113 = 1077U;

    t113 = (((x533|x534)*x535)|x536);

    if (t113 != 4294813567U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x537 = 47U;
	static int32_t t114 = -13776523;

    t114 = (((x537|x538)*x539)|x540);

    if (t114 != -3) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x541 = UINT8_MAX;
	int64_t x542 = -246069LL;
	uint64_t x543 = 6467LLU;
	static int64_t x544 = -1LL;

    t115 = (((x541|x542)*x543)|x544);

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x545 = -5;
	static int32_t x546 = INT32_MAX;
	volatile int32_t x547 = INT32_MAX;
	int64_t x548 = -1LL;

    t116 = (((x545|x546)*x547)|x548);

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x549 = 102U;
	uint64_t x550 = UINT64_MAX;
	int16_t x551 = 22;
	uint64_t t117 = UINT64_MAX;

    t117 = (((x549|x550)*x551)|x552);

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x553 = 17880820309547076LLU;
	int32_t x554 = -174202;
	uint16_t x555 = UINT16_MAX;
	int16_t x556 = -6532;
	uint64_t t118 = 227512375417LLU;

    t118 = (((x553|x554)*x555)|x556);

    if (t118 != 18446744073709545086LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x557 = 121649U;
	int8_t x558 = INT8_MAX;
	static int32_t x559 = INT32_MIN;

    t119 = (((x557|x558)*x559)|x560);

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x564 = INT32_MIN;
	static volatile int64_t t120 = 246115642591662906LL;

    t120 = (((x561|x562)*x563)|x564);

    if (t120 != -251330560LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x569 = -1;
	volatile uint8_t x570 = 2U;
	int32_t x571 = INT32_MAX;
	int32_t t121 = -60;

    t121 = (((x569|x570)*x571)|x572);

    if (t121 != -127) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x573 = 5748;
	uint32_t x574 = UINT32_MAX;
	volatile int32_t x575 = INT32_MIN;
	int64_t x576 = INT64_MIN;
	int64_t t122 = -7LL;

    t122 = (((x573|x574)*x575)|x576);

    if (t122 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x577 = 31LLU;
	static uint64_t x578 = 1522342221822828187LLU;
	int8_t x579 = INT8_MIN;
	static uint64_t t123 = 8146LLU;

    t123 = (((x577|x578)*x579)|x580);

    if (t123 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x581 = 8U;
	int16_t x583 = -128;
	int32_t x584 = INT32_MIN;
	int32_t t124 = -26;

    t124 = (((x581|x582)*x583)|x584);

    if (t124 != -1024) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x586 = 0U;
	static volatile int32_t x587 = INT32_MIN;
	uint32_t x588 = 297264672U;
	volatile uint32_t t125 = 5067U;

    t125 = (((x585|x586)*x587)|x588);

    if (t125 != 2444748320U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x594 = -2468773272468131LL;
	static uint64_t x595 = UINT64_MAX;
	uint8_t x596 = 1U;
	uint64_t t126 = 59508LLU;

    t126 = (((x593|x594)*x595)|x596);

    if (t126 != 2468773272468131LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x597 = 7262;
	int8_t x598 = 3;
	uint64_t x599 = 51808852135875389LLU;
	int32_t x600 = -1;
	uint64_t t127 = UINT64_MAX;

    t127 = (((x597|x598)*x599)|x600);

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x601 = 0;
	uint32_t x602 = 207U;
	static int32_t x603 = INT32_MIN;
	int16_t x604 = 8688;

    t128 = (((x601|x602)*x603)|x604);

    if (t128 != 2147492336U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x609 = INT16_MAX;
	int8_t x612 = 3;
	int32_t t129 = 699958314;

    t129 = (((x609|x610)*x611)|x612);

    if (t129 != 3) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x613 = INT8_MIN;
	static int16_t x614 = INT16_MIN;
	int16_t x615 = -44;
	volatile uint32_t t130 = 470U;

    t130 = (((x613|x614)*x615)|x616);

    if (t130 != 6101U) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x617 = UINT16_MAX;
	volatile int8_t x618 = -38;
	uint64_t x619 = 6087923977837LLU;
	volatile uint8_t x620 = UINT8_MAX;
	uint64_t t131 = 77LLU;

    t131 = (((x617|x618)*x619)|x620);

    if (t131 != 18446737985785573887LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x621 = INT64_MIN;
	static int8_t x622 = INT8_MIN;
	int8_t x624 = INT8_MIN;

    t132 = (((x621|x622)*x623)|x624);

    if (t132 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x625 = -1;
	static int8_t x626 = -1;
	static uint8_t x627 = 7U;
	uint64_t x628 = 22LLU;
	uint64_t t133 = UINT64_MAX;

    t133 = (((x625|x626)*x627)|x628);

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x629 = 9U;
	int8_t x630 = 5;
	uint16_t x632 = UINT16_MAX;
	int32_t t134 = -219;

    t134 = (((x629|x630)*x631)|x632);

    if (t134 != -393217) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x633 = 2U;
	int8_t x634 = -1;
	int64_t x635 = INT64_MAX;
	uint8_t x636 = 16U;
	static int64_t t135 = -1663698LL;

    t135 = (((x633|x634)*x635)|x636);

    if (t135 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x645 = INT8_MIN;
	int64_t x646 = -1LL;
	int8_t x647 = -1;
	int8_t x648 = INT8_MIN;
	int64_t t136 = -2398634626343529502LL;

    t136 = (((x645|x646)*x647)|x648);

    if (t136 != -127LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x649 = 6U;
	static uint64_t x650 = 148750905470926LLU;
	volatile uint64_t t137 = 17472886215LLU;

    t137 = (((x649|x650)*x651)|x652);

    if (t137 != 14186594480919937023LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x657 = 4201U;
	uint8_t x658 = 12U;
	volatile uint32_t x659 = UINT32_MAX;
	volatile uint64_t x660 = UINT64_MAX;
	uint64_t t138 = UINT64_MAX;

    t138 = (((x657|x658)*x659)|x660);

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x661 = INT32_MAX;
	uint32_t x662 = 53200U;
	volatile int8_t x664 = INT8_MIN;

    t139 = (((x661|x662)*x663)|x664);

    if (t139 != 4294967169U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x665 = -1;
	uint8_t x666 = 4U;
	int8_t x667 = -1;
	uint8_t x668 = UINT8_MAX;
	int32_t t140 = 1883745;

    t140 = (((x665|x666)*x667)|x668);

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x669 = 3995732U;
	static int16_t x671 = INT16_MIN;
	int32_t x672 = -316;
	static uint32_t t141 = 10U;

    t141 = (((x669|x670)*x671)|x672);

    if (t141 != 4294966980U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x673 = 12LLU;
	int64_t x674 = INT64_MAX;
	uint16_t x675 = 7611U;
	volatile int8_t x676 = INT8_MIN;
	static volatile uint64_t t142 = 152LLU;

    t142 = (((x673|x674)*x675)|x676);

    if (t142 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x677 = INT8_MAX;
	int8_t x678 = -1;
	static int16_t x680 = INT16_MAX;

    t143 = (((x677|x678)*x679)|x680);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x681 = INT8_MAX;
	static int32_t x682 = INT32_MIN;
	int64_t x683 = -1LL;
	static int64_t x684 = INT64_MIN;
	static volatile int64_t t144 = -89958673LL;

    t144 = (((x681|x682)*x683)|x684);

    if (t144 != -9223372034707292287LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x685 = -19;
	int64_t x686 = INT64_MAX;
	uint32_t x687 = 27U;
	volatile int64_t t145 = 1258265761LL;

    t145 = (((x685|x686)*x687)|x688);

    if (t145 != -11LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x689 = UINT32_MAX;
	int64_t x690 = -7600042660LL;
	static uint64_t x692 = 70710698193026839LLU;

    t146 = (((x689|x690)*x691)|x692);

    if (t146 != 16788283744174604063LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x706 = 2;
	static int8_t x707 = -1;
	volatile int32_t x708 = 493;
	volatile uint64_t t147 = UINT64_MAX;

    t147 = (((x705|x706)*x707)|x708);

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x717 = -1;
	static int16_t x718 = INT16_MIN;
	volatile uint32_t t148 = UINT32_MAX;

    t148 = (((x717|x718)*x719)|x720);

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x721 = 15;
	static volatile uint16_t x722 = UINT16_MAX;
	static int32_t x723 = 811;
	uint32_t x724 = 651521259U;
	volatile uint32_t t149 = 6902632U;

    t149 = (((x721|x722)*x723)|x724);

    if (t149 != 671087871U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x725 = UINT64_MAX;
	int16_t x726 = INT16_MAX;
	int32_t x727 = INT32_MAX;
	volatile int8_t x728 = INT8_MIN;
	uint64_t t150 = 1349896079280434LLU;

    t150 = (((x725|x726)*x727)|x728);

    if (t150 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x730 = UINT32_MAX;
	uint16_t x732 = UINT16_MAX;
	volatile uint32_t t151 = UINT32_MAX;

    t151 = (((x729|x730)*x731)|x732);

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x733 = -1;
	volatile int8_t x735 = -25;
	static int64_t x736 = INT64_MIN;

    t152 = (((x733|x734)*x735)|x736);

    if (t152 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x741 = -1;
	uint16_t x742 = 1129U;
	int64_t x743 = 22938373LL;
	uint8_t x744 = UINT8_MAX;
	static volatile int64_t t153 = 123803479LL;

    t153 = (((x741|x742)*x743)|x744);

    if (t153 != -22938369LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x745 = 12;
	int8_t x746 = 1;
	uint16_t x747 = 54U;
	uint64_t x748 = 42700130536645453LLU;
	volatile uint64_t t154 = 289LLU;

    t154 = (((x745|x746)*x747)|x748);

    if (t154 != 42700130536645631LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x749 = -42;
	uint64_t x750 = UINT64_MAX;
	int8_t x751 = INT8_MIN;
	uint64_t x752 = UINT64_MAX;

    t155 = (((x749|x750)*x751)|x752);

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x753 = INT8_MIN;
	int32_t x754 = -909929;
	int8_t x755 = -7;
	int64_t x756 = 1260LL;
	int64_t t156 = -266433907LL;

    t156 = (((x753|x754)*x755)|x756);

    if (t156 != 1791LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x757 = UINT64_MAX;
	int8_t x758 = -1;

    t157 = (((x757|x758)*x759)|x760);

    if (t157 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x761 = INT8_MIN;
	static int8_t x762 = INT8_MIN;
	int16_t x763 = -12;
	static int64_t t158 = -801273594943433LL;

    t158 = (((x761|x762)*x763)|x764);

    if (t158 != 40769LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x765 = 2831701U;
	static int8_t x766 = INT8_MIN;
	volatile int8_t x767 = INT8_MIN;

    t159 = (((x765|x766)*x767)|x768);

    if (t159 != -9223372036854770304LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x773 = INT16_MIN;
	uint64_t x774 = 176868609049LLU;
	static int32_t x775 = INT32_MIN;
	int64_t x776 = -522234200675005LL;
	static uint64_t t160 = 346728691006LLU;

    t160 = (((x773|x774)*x775)|x776);

    if (t160 != 18446249258580094275LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x777 = 31;
	uint32_t x778 = 231574U;
	int64_t x779 = -1LL;
	int64_t x780 = -1LL;
	int64_t t161 = -202808LL;

    t161 = (((x777|x778)*x779)|x780);

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x781 = 2LL;
	int16_t x783 = -1;
	static int64_t x784 = INT64_MIN;
	volatile uint64_t t162 = 3758939986LLU;

    t162 = (((x781|x782)*x783)|x784);

    if (t162 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x786 = INT8_MAX;
	static volatile int32_t x787 = INT32_MAX;
	int32_t x788 = INT32_MIN;
	int32_t t163 = -1;

    t163 = (((x785|x786)*x787)|x788);

    if (t163 != -2147483647) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x789 = 295LLU;
	uint8_t x790 = UINT8_MAX;
	static int64_t x791 = -9522231LL;
	int64_t x792 = 75697753LL;
	uint64_t t164 = 11481521338567152LLU;

    t164 = (((x789|x790)*x791)|x792);

    if (t164 != 18446744068843888255LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x797 = 0U;
	int16_t x798 = INT16_MIN;
	volatile int64_t x799 = -1LL;
	volatile uint8_t x800 = 0U;
	static int64_t t165 = 7283LL;

    t165 = (((x797|x798)*x799)|x800);

    if (t165 != 32768LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x802 = -24499064;
	uint8_t x803 = UINT8_MAX;
	int16_t x804 = -1;
	volatile int32_t t166 = -439168;

    t166 = (((x801|x802)*x803)|x804);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x805 = INT8_MIN;
	uint32_t x807 = UINT32_MAX;
	static uint8_t x808 = UINT8_MAX;
	uint32_t t167 = 1552083782U;

    t167 = (((x805|x806)*x807)|x808);

    if (t167 != 255U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x809 = INT8_MAX;
	uint8_t x810 = 3U;
	uint8_t x811 = 79U;
	uint32_t t168 = UINT32_MAX;

    t168 = (((x809|x810)*x811)|x812);

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x813 = -13614262LL;
	int64_t x814 = INT64_MAX;
	int32_t x815 = -623;

    t169 = (((x813|x814)*x815)|x816);

    if (t169 != 2147483647LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x817 = 13140300189LLU;
	uint16_t x818 = UINT16_MAX;
	uint32_t x819 = 431516058U;
	volatile int32_t x820 = INT32_MIN;
	volatile uint64_t t170 = 1808LLU;

    t170 = (((x817|x818)*x819)|x820);

    if (t170 != 18446744073058096742LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x821 = -1;
	volatile int32_t x822 = -1;
	int8_t x823 = -3;
	uint32_t x824 = UINT32_MAX;
	volatile uint32_t t171 = UINT32_MAX;

    t171 = (((x821|x822)*x823)|x824);

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x827 = -3682211187027LL;

    t172 = (((x825|x826)*x827)|x828);

    if (t172 != 73645804224511LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x829 = -1;
	int16_t x830 = 14;
	int32_t x831 = -571790;
	int16_t x832 = INT16_MIN;
	volatile int32_t t173 = -62271668;

    t173 = (((x829|x830)*x831)|x832);

    if (t173 != -18034) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x833 = INT32_MIN;
	int16_t x834 = INT16_MIN;
	static volatile int16_t x836 = 53;

    t174 = (((x833|x834)*x835)|x836);

    if (t174 != 4037975463867613237LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x841 = INT16_MAX;
	uint32_t x842 = UINT32_MAX;
	volatile int8_t x843 = 1;
	static int16_t x844 = -1;
	volatile uint32_t t175 = UINT32_MAX;

    t175 = (((x841|x842)*x843)|x844);

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x845 = INT16_MIN;
	static int8_t x846 = INT8_MAX;
	uint8_t x847 = 1U;
	int16_t x848 = INT16_MIN;
	static volatile int32_t t176 = -28590720;

    t176 = (((x845|x846)*x847)|x848);

    if (t176 != -32641) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x853 = 369903070U;
	int64_t x854 = INT64_MAX;
	static uint64_t x855 = UINT64_MAX;
	int64_t x856 = INT64_MAX;
	static uint64_t t177 = UINT64_MAX;

    t177 = (((x853|x854)*x855)|x856);

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x857 = 13U;
	int64_t x858 = 247371967442111581LL;
	int8_t x859 = -28;
	volatile int64_t t178 = 697713LL;

    t178 = (((x857|x858)*x859)|x860);

    if (t178 != -23084LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x862 = 5U;
	int32_t x864 = -1;
	volatile uint64_t t179 = UINT64_MAX;

    t179 = (((x861|x862)*x863)|x864);

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x866 = 63;
	int32_t x867 = -1;
	int16_t x868 = -1;
	static volatile int32_t t180 = -8018369;

    t180 = (((x865|x866)*x867)|x868);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x869 = -1LL;
	volatile int16_t x870 = INT16_MAX;
	uint32_t x871 = UINT32_MAX;
	static int64_t x872 = INT64_MAX;
	volatile int64_t t181 = 3521LL;

    t181 = (((x869|x870)*x871)|x872);

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x873 = INT8_MIN;
	static volatile int8_t x876 = INT8_MIN;
	int32_t t182 = -39412154;

    t182 = (((x873|x874)*x875)|x876);

    if (t182 != -127) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x877 = INT8_MIN;
	static volatile uint8_t x878 = UINT8_MAX;
	int64_t x879 = -1LL;
	int8_t x880 = 18;
	int64_t t183 = -33LL;

    t183 = (((x877|x878)*x879)|x880);

    if (t183 != 19LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x881 = -1LL;
	static uint16_t x883 = UINT16_MAX;
	static uint64_t x884 = 149694101802259392LLU;

    t184 = (((x881|x882)*x883)|x884);

    if (t184 != 18446744073709491137LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x885 = INT16_MIN;
	static int64_t x886 = -1LL;
	uint32_t x888 = 277838481U;

    t185 = (((x885|x886)*x887)|x888);

    if (t185 != 277838481LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x889 = 12U;
	volatile uint8_t x890 = UINT8_MAX;
	int16_t x891 = INT16_MAX;
	uint32_t x892 = 21930305U;
	volatile uint32_t t186 = 451U;

    t186 = (((x889|x890)*x891)|x892);

    if (t186 != 25165633U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x893 = UINT32_MAX;
	int8_t x894 = -3;
	static uint32_t x895 = 215U;
	int16_t x896 = INT16_MAX;
	uint32_t t187 = UINT32_MAX;

    t187 = (((x893|x894)*x895)|x896);

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x897 = 1;
	int8_t x898 = INT8_MIN;
	int8_t x899 = INT8_MAX;
	volatile uint32_t x900 = UINT32_MAX;
	volatile uint32_t t188 = UINT32_MAX;

    t188 = (((x897|x898)*x899)|x900);

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x901 = 229573LL;
	volatile int32_t x902 = INT32_MIN;
	int8_t x904 = -1;
	int64_t t189 = -515241518373890LL;

    t189 = (((x901|x902)*x903)|x904);

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x909 = -196;
	int8_t x910 = 15;
	uint32_t t190 = 9749U;

    t190 = (((x909|x910)*x911)|x912);

    if (t190 != 195U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x913 = 0LL;
	int8_t x914 = -6;
	int32_t x915 = -1;
	static int32_t x916 = -1;
	static int64_t t191 = 837055388604LL;

    t191 = (((x913|x914)*x915)|x916);

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x917 = 3U;
	static int16_t x918 = 858;
	uint8_t x920 = 0U;
	volatile int32_t t192 = -2912;

    t192 = (((x917|x918)*x919)|x920);

    if (t192 != 1372682) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x921 = -3;
	int64_t x922 = INT64_MIN;
	int32_t x923 = -1;
	int8_t x924 = -1;
	int64_t t193 = 29212LL;

    t193 = (((x921|x922)*x923)|x924);

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x925 = INT8_MIN;
	static volatile int16_t x926 = -1;
	uint8_t x927 = 3U;
	static int32_t t194 = 362;

    t194 = (((x925|x926)*x927)|x928);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x929 = 28160LLU;
	static int8_t x930 = -1;
	int8_t x931 = INT8_MAX;
	int64_t x932 = INT64_MIN;
	volatile uint64_t t195 = 91446LLU;

    t195 = (((x929|x930)*x931)|x932);

    if (t195 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x937 = 3019U;
	int64_t x938 = 299264486LL;
	uint16_t x939 = 73U;
	int64_t t196 = 283LL;

    t196 = (((x937|x938)*x939)|x940);

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x941 = -1LL;
	int64_t x942 = -1LL;
	volatile int32_t x944 = INT32_MIN;
	int64_t t197 = 5634469183486405LL;

    t197 = (((x941|x942)*x943)|x944);

    if (t197 != -65535LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x948 = -12;

    t198 = (((x945|x946)*x947)|x948);

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x953 = 312654554751712LLU;
	int64_t x955 = -1LL;
	int32_t x956 = 7001;
	uint64_t t199 = 154429526LLU;

    t199 = (((x953|x954)*x955)|x956);

    if (t199 != 18446431419154800479LLU) { NG(); } else { ; }
	
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

