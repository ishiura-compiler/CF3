
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

int8_t x2 = INT8_MAX;
uint16_t x4 = 0U;
static uint8_t x8 = 96U;
volatile int32_t t1 = -138917;
int32_t x9 = INT32_MIN;
int8_t x10 = INT8_MIN;
int32_t x13 = INT32_MAX;
static int64_t x15 = INT64_MIN;
int8_t x24 = INT8_MIN;
int16_t x27 = INT16_MAX;
static uint16_t x29 = 83U;
volatile int64_t x43 = -1LL;
volatile int32_t t10 = -243077893;
static uint16_t x47 = UINT16_MAX;
int8_t x50 = 26;
int32_t x51 = -888758;
volatile int8_t x57 = INT8_MIN;
uint32_t x67 = 164907576U;
static uint8_t x70 = 29U;
volatile int8_t x79 = INT8_MAX;
int32_t x82 = -465582352;
static int8_t x85 = -2;
static uint16_t x87 = 5U;
static uint16_t x94 = 4571U;
int64_t x107 = INT64_MAX;
volatile int32_t t27 = -154;
uint16_t x115 = 32U;
int32_t t28 = 63478449;
int64_t x117 = -1LL;
int64_t x119 = INT64_MAX;
static volatile int8_t x121 = INT8_MAX;
volatile int32_t x122 = INT32_MAX;
uint16_t x123 = 636U;
uint32_t x126 = 768340U;
static volatile int32_t t32 = -63;
static int8_t x149 = -1;
static int16_t x162 = -10;
int32_t t40 = 28443;
int64_t x170 = -1LL;
int32_t t42 = 20378;
volatile int64_t x176 = 4188978393LL;
int16_t x198 = INT16_MAX;
int32_t t49 = 12153;
int32_t t50 = -136770;
static int8_t x213 = INT8_MIN;
static int64_t x219 = -39169861819888LL;
int32_t x220 = INT32_MIN;
volatile int16_t x224 = INT16_MIN;
static int32_t x226 = -1;
uint16_t x228 = 10U;
uint32_t x229 = 4314817U;
uint8_t x231 = 13U;
int16_t x233 = INT16_MAX;
static uint8_t x237 = UINT8_MAX;
volatile int32_t x239 = -1;
int64_t x240 = -3458LL;
volatile int16_t x243 = INT16_MIN;
volatile int32_t t61 = 55709283;
static int32_t t63 = -16851785;
uint64_t x258 = 607702LLU;
uint8_t x260 = 4U;
static int32_t t64 = -1;
static volatile int32_t t66 = -128540051;
int32_t t67 = 17426329;
uint64_t x273 = 54796376713LLU;
volatile int16_t x281 = -1;
static uint16_t x290 = 2U;
int8_t x307 = 6;
int8_t x308 = -50;
uint16_t x309 = UINT16_MAX;
volatile int16_t x316 = -1;
int16_t x320 = INT16_MAX;
volatile int32_t t80 = -46;
static int32_t x327 = INT32_MIN;
volatile int32_t t81 = 1;
int32_t t82 = -20457;
int16_t x336 = INT16_MAX;
volatile int8_t x339 = 26;
volatile int32_t t84 = 9421441;
int32_t x342 = 184167;
volatile int16_t x352 = INT16_MIN;
uint32_t x359 = 268301137U;
volatile int32_t t89 = 73467583;
uint16_t x361 = UINT16_MAX;
volatile uint32_t x362 = 22U;
volatile int32_t t90 = 885057;
int64_t x369 = -11519980581LL;
static int8_t x376 = INT8_MIN;
int16_t x377 = -1;
static volatile uint32_t x378 = 276726594U;
int16_t x379 = -1;
int16_t x380 = -1;
uint8_t x384 = 59U;
int64_t x388 = INT64_MIN;
uint32_t x394 = UINT32_MAX;
uint8_t x395 = 10U;
int32_t x397 = -652768;
uint16_t x398 = 253U;
static volatile uint32_t x400 = 109864U;
int64_t x406 = INT64_MIN;
int16_t x416 = INT16_MAX;
int32_t t103 = 31115509;
int64_t x423 = INT64_MIN;
uint8_t x424 = 117U;
uint32_t x426 = 7145U;
volatile int32_t t106 = -25490;
uint32_t x436 = 1U;
int32_t t110 = 299264419;
int32_t x447 = -289;
int8_t x448 = INT8_MIN;
static volatile int8_t x449 = 0;
int64_t x451 = INT64_MAX;
volatile int32_t t112 = 982173651;
volatile uint32_t x454 = 528215U;
int32_t t113 = -728845865;
volatile int32_t t114 = -362580;
static volatile int8_t x462 = 0;
static volatile int32_t t115 = -2090933;
int8_t x468 = -1;
int32_t t117 = 35400317;
static int8_t x475 = INT8_MIN;
int8_t x481 = 7;
static int32_t t120 = 457375;
int32_t x486 = INT32_MAX;
static int64_t x489 = -1LL;
int64_t x491 = -1LL;
int16_t x499 = INT16_MAX;
uint16_t x504 = UINT16_MAX;
uint64_t x508 = 919173LLU;
static int32_t x515 = -1;
int32_t x527 = INT32_MIN;
int32_t x528 = INT32_MIN;
volatile int32_t t132 = -684404;
int8_t x537 = INT8_MAX;
int16_t x542 = INT16_MIN;
int8_t x545 = INT8_MAX;
uint64_t x551 = 603706267LLU;
int64_t x552 = INT64_MIN;
int32_t x555 = 887052587;
int16_t x560 = -1;
volatile uint8_t x564 = 27U;
volatile int32_t t140 = -518201;
int16_t x566 = -1;
int32_t x568 = INT32_MIN;
uint16_t x580 = 0U;
volatile int32_t x582 = INT32_MAX;
int16_t x584 = 1;
volatile int32_t t147 = -61;
volatile int8_t x596 = 44;
static uint16_t x606 = 810U;
static int64_t x608 = INT64_MIN;
static int32_t t151 = 99005846;
int32_t x613 = INT32_MIN;
int64_t x616 = INT64_MAX;
static int8_t x619 = 1;
static int32_t x626 = INT32_MIN;
int16_t x628 = INT16_MAX;
static uint8_t x629 = 78U;
static volatile int32_t t157 = -24410;
uint16_t x636 = 15U;
int64_t x637 = 1398034785LL;
uint16_t x638 = 0U;
int8_t x643 = INT8_MAX;
volatile int32_t t160 = -109572;
volatile int32_t t161 = -117059103;
static int32_t x652 = -1;
int64_t x656 = -1LL;
int16_t x658 = -1;
volatile uint64_t x663 = UINT64_MAX;
uint32_t x666 = 46U;
int32_t t166 = -1066;
static uint64_t x672 = UINT64_MAX;
uint16_t x679 = 2U;
static uint8_t x692 = UINT8_MAX;
volatile int64_t x695 = INT64_MAX;
uint64_t x697 = UINT64_MAX;
volatile int32_t t174 = -59901;
volatile int8_t x701 = 1;
volatile uint32_t x702 = UINT32_MAX;
static int8_t x703 = -1;
int16_t x708 = INT16_MIN;
uint32_t x709 = 4356U;
int64_t x711 = INT64_MIN;
static int32_t t177 = 53398;
uint16_t x713 = UINT16_MAX;
uint16_t x717 = 5U;
int32_t x720 = INT32_MAX;
int32_t t179 = 115974;
int32_t x723 = INT32_MIN;
uint8_t x724 = 3U;
uint16_t x725 = 66U;
uint8_t x727 = 1U;
volatile int32_t t181 = -4078786;
volatile int64_t x729 = -45LL;
volatile int32_t x733 = INT32_MIN;
static uint16_t x734 = 1U;
static volatile int32_t t183 = -479868;
int8_t x740 = 4;
int32_t t184 = 12580;
int64_t x742 = 8615624027844616LL;
int16_t x747 = 1;
uint64_t x748 = UINT64_MAX;
uint32_t x752 = 10774U;
volatile int32_t x757 = -28719;
uint16_t x765 = 5U;
volatile int8_t x768 = -1;
static int64_t x769 = INT64_MIN;
uint8_t x771 = 33U;
int32_t x774 = 206800832;
int64_t x782 = INT64_MIN;
uint64_t x785 = UINT64_MAX;
int8_t x787 = 1;
volatile int32_t t196 = -125942064;
static volatile uint16_t x792 = 457U;
static int32_t t197 = 21413816;
int16_t x798 = -1;
int32_t t199 = 23300929;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int32_t x3 = INT32_MAX;
	volatile int32_t t0 = 9;

    t0 = ((x1==x2)<=(x3|x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -14324;
	volatile int64_t x6 = 306LL;
	static uint8_t x7 = 0U;

    t1 = ((x5==x6)<=(x7|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x11 = -13968;
	int16_t x12 = 0;
	int32_t t2 = -701;

    t2 = ((x9==x10)<=(x11|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 0U;
	volatile uint64_t x16 = 7781173LLU;
	volatile int32_t t3 = -3;

    t3 = ((x13==x14)<=(x15|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x17 = 287LLU;
	uint8_t x18 = UINT8_MAX;
	int64_t x19 = -1LL;
	int32_t x20 = -1;
	volatile int32_t t4 = 229;

    t4 = ((x17==x18)<=(x19|x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 37610941305LL;
	volatile int64_t x22 = -46108039LL;
	int16_t x23 = 213;
	volatile int32_t t5 = 76395;

    t5 = ((x21==x22)<=(x23|x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 1U;
	int16_t x26 = INT16_MIN;
	volatile int32_t x28 = INT32_MIN;
	int32_t t6 = -31630;

    t6 = ((x25==x26)<=(x27|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x30 = -1LL;
	uint16_t x31 = 17U;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -932;

    t7 = ((x29==x30)<=(x31|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 4402U;
	uint16_t x34 = 2U;
	int8_t x35 = 7;
	int32_t x36 = -1;
	int32_t t8 = 19757427;

    t8 = ((x33==x34)<=(x35|x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = 0;
	int8_t x38 = INT8_MAX;
	int8_t x39 = INT8_MIN;
	uint64_t x40 = 5263663016170LLU;
	volatile int32_t t9 = 132295;

    t9 = ((x37==x38)<=(x39|x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	volatile int16_t x42 = INT16_MIN;
	int8_t x44 = 41;

    t10 = ((x41==x42)<=(x43|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x45 = -1120;
	int64_t x46 = 162305898LL;
	int8_t x48 = -1;
	volatile int32_t t11 = 1;

    t11 = ((x45==x46)<=(x47|x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	uint32_t x52 = 4U;
	volatile int32_t t12 = 7669781;

    t12 = ((x49==x50)<=(x51|x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = -130;
	volatile int16_t x54 = INT16_MIN;
	uint8_t x55 = 2U;
	int8_t x56 = -2;
	int32_t t13 = -7;

    t13 = ((x53==x54)<=(x55|x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x58 = INT64_MIN;
	int64_t x59 = -30922096LL;
	volatile uint32_t x60 = 37836291U;
	static volatile int32_t t14 = 3;

    t14 = ((x57==x58)<=(x59|x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 24173881U;
	volatile uint8_t x62 = UINT8_MAX;
	int16_t x63 = -60;
	int16_t x64 = -1;
	int32_t t15 = -3;

    t15 = ((x61==x62)<=(x63|x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	volatile uint16_t x66 = 758U;
	volatile int16_t x68 = -5911;
	volatile int32_t t16 = 48277;

    t16 = ((x65==x66)<=(x67|x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MAX;
	int32_t x71 = -1;
	uint64_t x72 = 356739762LLU;
	int32_t t17 = -10;

    t17 = ((x69==x70)<=(x71|x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x73 = INT64_MIN;
	int16_t x74 = INT16_MIN;
	int64_t x75 = INT64_MAX;
	volatile uint8_t x76 = 1U;
	int32_t t18 = 8509;

    t18 = ((x73==x74)<=(x75|x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	int16_t x78 = 2;
	uint32_t x80 = 670195623U;
	volatile int32_t t19 = 726849606;

    t19 = ((x77==x78)<=(x79|x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x81 = UINT64_MAX;
	uint16_t x83 = 16060U;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 7;

    t20 = ((x81==x82)<=(x83|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x86 = INT64_MIN;
	volatile uint32_t x88 = UINT32_MAX;
	volatile int32_t t21 = 496459;

    t21 = ((x85==x86)<=(x87|x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = 63U;
	int16_t x90 = 699;
	uint32_t x91 = UINT32_MAX;
	int64_t x92 = 65681067LL;
	volatile int32_t t22 = 356777655;

    t22 = ((x89==x90)<=(x91|x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -1;

    t23 = ((x93==x94)<=(x95|x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = INT64_MIN;
	uint64_t x98 = UINT64_MAX;
	static int16_t x99 = -1;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = -343;

    t24 = ((x97==x98)<=(x99|x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -3;
	int8_t x102 = INT8_MIN;
	volatile int64_t x103 = INT64_MIN;
	int16_t x104 = -111;
	volatile int32_t t25 = -469;

    t25 = ((x101==x102)<=(x103|x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 7744310717604095878LLU;
	static int64_t x106 = -1LL;
	int64_t x108 = INT64_MAX;
	int32_t t26 = -263115040;

    t26 = ((x105==x106)<=(x107|x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	static int16_t x110 = 4;
	int8_t x111 = INT8_MAX;
	uint64_t x112 = 951015LLU;

    t27 = ((x109==x110)<=(x111|x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 40U;
	int32_t x114 = INT32_MIN;
	int64_t x116 = 1LL;

    t28 = ((x113==x114)<=(x115|x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = -1LL;
	int64_t x120 = -1LL;
	int32_t t29 = 10;

    t29 = ((x117==x118)<=(x119|x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x124 = INT32_MAX;
	volatile int32_t t30 = -23598338;

    t30 = ((x121==x122)<=(x123|x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	int64_t x128 = -23217398LL;
	volatile int32_t t31 = 1;

    t31 = ((x125==x126)<=(x127|x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = UINT16_MAX;
	static int32_t x130 = INT32_MAX;
	uint16_t x131 = UINT16_MAX;
	uint8_t x132 = 38U;

    t32 = ((x129==x130)<=(x131|x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x133 = UINT32_MAX;
	int32_t x134 = 6;
	uint64_t x135 = UINT64_MAX;
	uint64_t x136 = 106506LLU;
	static int32_t t33 = 18536;

    t33 = ((x133==x134)<=(x135|x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	int32_t x138 = INT32_MIN;
	volatile int16_t x139 = -1;
	int8_t x140 = 29;
	static int32_t t34 = 34;

    t34 = ((x137==x138)<=(x139|x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = -1;
	static uint32_t x142 = 3U;
	static int32_t x143 = INT32_MIN;
	int8_t x144 = -1;
	int32_t t35 = -4219034;

    t35 = ((x141==x142)<=(x143|x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	int16_t x146 = -13;
	int32_t x147 = -20;
	int8_t x148 = 6;
	int32_t t36 = -27;

    t36 = ((x145==x146)<=(x147|x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x150 = UINT32_MAX;
	volatile int64_t x151 = -1LL;
	int16_t x152 = 3;
	volatile int32_t t37 = -28;

    t37 = ((x149==x150)<=(x151|x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = -1;
	int8_t x154 = INT8_MIN;
	int16_t x155 = INT16_MIN;
	uint8_t x156 = 11U;
	static volatile int32_t t38 = -33;

    t38 = ((x153==x154)<=(x155|x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = -1;
	int32_t x158 = INT32_MAX;
	int16_t x159 = 917;
	uint32_t x160 = 1292814494U;
	int32_t t39 = -10;

    t39 = ((x157==x158)<=(x159|x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	int64_t x163 = -22893871LL;
	int32_t x164 = 449813;

    t40 = ((x161==x162)<=(x163|x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x165 = -1;
	int32_t x166 = INT32_MAX;
	static int16_t x167 = INT16_MAX;
	volatile int16_t x168 = -1;
	volatile int32_t t41 = 2451;

    t41 = ((x165==x166)<=(x167|x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = INT64_MIN;
	int64_t x171 = -1LL;
	int64_t x172 = 80840LL;

    t42 = ((x169==x170)<=(x171|x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -3039434;
	uint32_t x174 = 4U;
	volatile uint64_t x175 = UINT64_MAX;
	static int32_t t43 = -1186838;

    t43 = ((x173==x174)<=(x175|x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = -1;
	static uint64_t x178 = UINT64_MAX;
	int32_t x179 = 1278;
	int8_t x180 = 2;
	volatile int32_t t44 = 15657;

    t44 = ((x177==x178)<=(x179|x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 2418;
	uint16_t x182 = 3U;
	volatile int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MAX;
	volatile int32_t t45 = 156138;

    t45 = ((x181==x182)<=(x183|x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x185 = -1LL;
	uint16_t x186 = 57U;
	volatile int16_t x187 = INT16_MIN;
	static int64_t x188 = INT64_MIN;
	volatile int32_t t46 = -2663;

    t46 = ((x185==x186)<=(x187|x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	static int16_t x190 = -2;
	int64_t x191 = -1LL;
	int64_t x192 = -851631033145LL;
	volatile int32_t t47 = 18;

    t47 = ((x189==x190)<=(x191|x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	uint8_t x194 = 7U;
	int16_t x195 = 1;
	volatile int64_t x196 = -1LL;
	int32_t t48 = 1776;

    t48 = ((x193==x194)<=(x195|x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = 941622U;
	int16_t x199 = INT16_MAX;
	uint16_t x200 = 1U;

    t49 = ((x197==x198)<=(x199|x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MIN;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = INT32_MIN;

    t50 = ((x201==x202)<=(x203|x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	uint64_t x206 = 66LLU;
	static uint64_t x207 = 2652043161LLU;
	uint8_t x208 = 9U;
	volatile int32_t t51 = -31;

    t51 = ((x205==x206)<=(x207|x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	static int16_t x210 = INT16_MAX;
	volatile int16_t x211 = INT16_MIN;
	int16_t x212 = -105;
	static int32_t t52 = 14;

    t52 = ((x209==x210)<=(x211|x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x214 = -1LL;
	int8_t x215 = 3;
	uint32_t x216 = UINT32_MAX;
	int32_t t53 = 69;

    t53 = ((x213==x214)<=(x215|x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	static uint8_t x218 = 33U;
	static int32_t t54 = -24;

    t54 = ((x217==x218)<=(x219|x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 3U;
	uint8_t x222 = 12U;
	volatile int32_t x223 = INT32_MIN;
	volatile int32_t t55 = -31181281;

    t55 = ((x221==x222)<=(x223|x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	uint8_t x227 = 45U;
	int32_t t56 = 101019770;

    t56 = ((x225==x226)<=(x227|x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = INT8_MIN;
	uint16_t x232 = UINT16_MAX;
	static volatile int32_t t57 = -289;

    t57 = ((x229==x230)<=(x231|x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x234 = -47;
	int16_t x235 = -62;
	int16_t x236 = -1;
	volatile int32_t t58 = -2867541;

    t58 = ((x233==x234)<=(x235|x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = INT64_MIN;
	volatile int32_t t59 = -26972;

    t59 = ((x237==x238)<=(x239|x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = INT8_MAX;
	int64_t x242 = 1445LL;
	static int8_t x244 = -51;
	volatile int32_t t60 = 67;

    t60 = ((x241==x242)<=(x243|x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	static int32_t x246 = 178239;
	int64_t x247 = 23LL;
	static int64_t x248 = -1LL;

    t61 = ((x245==x246)<=(x247|x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 176768U;
	int16_t x250 = 5873;
	int32_t x251 = -70;
	int64_t x252 = 471842LL;
	static int32_t t62 = -241604057;

    t62 = ((x249==x250)<=(x251|x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 208078LLU;
	int8_t x254 = INT8_MIN;
	int8_t x255 = -1;
	static uint16_t x256 = 0U;

    t63 = ((x253==x254)<=(x255|x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = 3736404712LL;
	int8_t x259 = INT8_MIN;

    t64 = ((x257==x258)<=(x259|x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	uint16_t x262 = 10491U;
	int8_t x263 = -1;
	int32_t x264 = -2;
	int32_t t65 = -259554;

    t65 = ((x261==x262)<=(x263|x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x265 = INT16_MIN;
	uint64_t x266 = 138594369039734LLU;
	static int64_t x267 = -1LL;
	uint16_t x268 = UINT16_MAX;

    t66 = ((x265==x266)<=(x267|x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -1;
	volatile int64_t x270 = INT64_MAX;
	static int8_t x271 = INT8_MAX;
	uint16_t x272 = 169U;

    t67 = ((x269==x270)<=(x271|x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x274 = -1;
	static uint64_t x275 = 355789092054176918LLU;
	int16_t x276 = INT16_MAX;
	volatile int32_t t68 = -13;

    t68 = ((x273==x274)<=(x275|x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int32_t x278 = 23;
	int16_t x279 = INT16_MIN;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t69 = 7;

    t69 = ((x277==x278)<=(x279|x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = INT64_MIN;
	volatile int32_t x283 = INT32_MAX;
	uint16_t x284 = 279U;
	static int32_t t70 = -501178717;

    t70 = ((x281==x282)<=(x283|x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MAX;
	static volatile int8_t x288 = INT8_MIN;
	int32_t t71 = 16;

    t71 = ((x285==x286)<=(x287|x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	int64_t x291 = -1LL;
	uint32_t x292 = 362447U;
	volatile int32_t t72 = -2171277;

    t72 = ((x289==x290)<=(x291|x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = 8LL;
	volatile uint32_t x294 = UINT32_MAX;
	uint32_t x295 = 26676302U;
	int64_t x296 = 3902773836LL;
	static volatile int32_t t73 = 3306151;

    t73 = ((x293==x294)<=(x295|x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x297 = 419631025929732969LLU;
	volatile uint64_t x298 = 101LLU;
	static int16_t x299 = -1;
	int64_t x300 = INT64_MIN;
	static int32_t t74 = 124;

    t74 = ((x297==x298)<=(x299|x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = UINT8_MAX;
	int64_t x302 = INT64_MAX;
	uint8_t x303 = UINT8_MAX;
	static int16_t x304 = -1;
	int32_t t75 = -527600;

    t75 = ((x301==x302)<=(x303|x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 1596717U;
	int32_t x306 = -1;
	static volatile int32_t t76 = 333084;

    t76 = ((x305==x306)<=(x307|x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x310 = 195380485518LLU;
	static uint64_t x311 = 7334652697LLU;
	static uint32_t x312 = UINT32_MAX;
	volatile int32_t t77 = -9702;

    t77 = ((x309==x310)<=(x311|x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MAX;
	volatile int32_t t78 = -63865869;

    t78 = ((x313==x314)<=(x315|x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	uint16_t x318 = 0U;
	volatile int64_t x319 = -1LL;
	static volatile int32_t t79 = -117128;

    t79 = ((x317==x318)<=(x319|x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x321 = UINT16_MAX;
	uint16_t x322 = 1U;
	int8_t x323 = INT8_MIN;
	uint32_t x324 = 0U;

    t80 = ((x321==x322)<=(x323|x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = 7;
	uint16_t x326 = 3U;
	static volatile uint8_t x328 = 115U;

    t81 = ((x325==x326)<=(x327|x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	int32_t x330 = INT32_MIN;
	int64_t x331 = 1937LL;
	uint64_t x332 = UINT64_MAX;

    t82 = ((x329==x330)<=(x331|x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MAX;
	volatile uint16_t x334 = UINT16_MAX;
	uint8_t x335 = 31U;
	int32_t t83 = -11;

    t83 = ((x333==x334)<=(x335|x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -1;
	int8_t x338 = -34;
	static uint8_t x340 = UINT8_MAX;

    t84 = ((x337==x338)<=(x339|x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 32296285U;
	volatile int64_t x343 = 127706LL;
	int8_t x344 = INT8_MIN;
	int32_t t85 = -19035296;

    t85 = ((x341==x342)<=(x343|x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = 1;
	static uint32_t x346 = 132113434U;
	int16_t x347 = INT16_MAX;
	int8_t x348 = -6;
	volatile int32_t t86 = 658;

    t86 = ((x345==x346)<=(x347|x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x349 = 252686354U;
	int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MIN;
	volatile int32_t t87 = -61;

    t87 = ((x349==x350)<=(x351|x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = INT8_MIN;
	static int64_t x354 = INT64_MIN;
	static int8_t x355 = INT8_MIN;
	int8_t x356 = -6;
	int32_t t88 = -578;

    t88 = ((x353==x354)<=(x355|x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -76388543;
	int32_t x358 = INT32_MAX;
	int64_t x360 = INT64_MAX;

    t89 = ((x357==x358)<=(x359|x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x363 = 232U;
	int16_t x364 = -7;

    t90 = ((x361==x362)<=(x363|x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 14294U;
	uint32_t x366 = UINT32_MAX;
	uint8_t x367 = 0U;
	int8_t x368 = 8;
	volatile int32_t t91 = 2;

    t91 = ((x365==x366)<=(x367|x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x370 = -1LL;
	volatile int8_t x371 = 11;
	static int8_t x372 = -1;
	int32_t t92 = -36457;

    t92 = ((x369==x370)<=(x371|x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = INT32_MIN;
	volatile int16_t x374 = INT16_MIN;
	static int8_t x375 = 0;
	volatile int32_t t93 = -110;

    t93 = ((x373==x374)<=(x375|x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t t94 = -1;

    t94 = ((x377==x378)<=(x379|x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x381 = 47382280LLU;
	int8_t x382 = INT8_MAX;
	int8_t x383 = INT8_MIN;
	volatile int32_t t95 = -708659;

    t95 = ((x381==x382)<=(x383|x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 63403U;
	volatile int16_t x386 = INT16_MIN;
	uint16_t x387 = 47U;
	volatile int32_t t96 = -113172474;

    t96 = ((x385==x386)<=(x387|x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = INT32_MIN;
	uint32_t x390 = UINT32_MAX;
	int8_t x391 = -1;
	static uint8_t x392 = UINT8_MAX;
	static volatile int32_t t97 = -217804;

    t97 = ((x389==x390)<=(x391|x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MAX;
	int64_t x396 = 9178291669068376LL;
	volatile int32_t t98 = 0;

    t98 = ((x393==x394)<=(x395|x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x399 = 1U;
	volatile int32_t t99 = 4537;

    t99 = ((x397==x398)<=(x399|x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	int64_t x402 = -1LL;
	volatile int64_t x403 = -1LL;
	int16_t x404 = INT16_MIN;
	int32_t t100 = 103;

    t100 = ((x401==x402)<=(x403|x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x405 = 50610506U;
	static int8_t x407 = -6;
	int8_t x408 = -1;
	static int32_t t101 = -357736;

    t101 = ((x405==x406)<=(x407|x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -9LL;
	volatile int32_t x410 = INT32_MIN;
	uint32_t x411 = UINT32_MAX;
	int8_t x412 = INT8_MIN;
	volatile int32_t t102 = -577;

    t102 = ((x409==x410)<=(x411|x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -1;
	uint8_t x414 = 0U;
	volatile int32_t x415 = INT32_MIN;

    t103 = ((x413==x414)<=(x415|x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -1;
	uint32_t x418 = 12U;
	uint16_t x419 = UINT16_MAX;
	volatile int8_t x420 = INT8_MIN;
	int32_t t104 = 270;

    t104 = ((x417==x418)<=(x419|x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	int8_t x422 = 1;
	int32_t t105 = 864446828;

    t105 = ((x421==x422)<=(x423|x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = INT64_MIN;
	volatile int16_t x427 = INT16_MIN;
	uint32_t x428 = 101U;

    t106 = ((x425==x426)<=(x427|x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = INT8_MIN;
	int16_t x430 = -1;
	int8_t x431 = INT8_MIN;
	volatile uint32_t x432 = 12821983U;
	int32_t t107 = 44;

    t107 = ((x429==x430)<=(x431|x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = UINT16_MAX;
	int64_t x434 = INT64_MIN;
	volatile int32_t x435 = 54239571;
	int32_t t108 = -504039093;

    t108 = ((x433==x434)<=(x435|x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MAX;
	int16_t x438 = INT16_MIN;
	static volatile uint64_t x439 = UINT64_MAX;
	int8_t x440 = INT8_MIN;
	static volatile int32_t t109 = -85211;

    t109 = ((x437==x438)<=(x439|x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	int32_t x442 = INT32_MIN;
	int8_t x443 = 1;
	volatile int64_t x444 = -124277451445891LL;

    t110 = ((x441==x442)<=(x443|x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = 1;
	int16_t x446 = -1;
	int32_t t111 = 394;

    t111 = ((x445==x446)<=(x447|x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x450 = -1;
	int64_t x452 = 2305151986771262LL;

    t112 = ((x449==x450)<=(x451|x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x453 = INT8_MIN;
	int16_t x455 = 11151;
	static int32_t x456 = INT32_MAX;

    t113 = ((x453==x454)<=(x455|x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint16_t x457 = 0U;
	uint32_t x458 = 11U;
	uint8_t x459 = UINT8_MAX;
	static uint8_t x460 = 1U;

    t114 = ((x457==x458)<=(x459|x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = 4976215;
	static uint8_t x463 = UINT8_MAX;
	static uint64_t x464 = 158445732093920LLU;

    t115 = ((x461==x462)<=(x463|x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	static int8_t x466 = INT8_MAX;
	int64_t x467 = INT64_MIN;
	int32_t t116 = -56686117;

    t116 = ((x465==x466)<=(x467|x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int16_t x470 = INT16_MAX;
	volatile int16_t x471 = INT16_MIN;
	int32_t x472 = INT32_MIN;

    t117 = ((x469==x470)<=(x471|x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = INT64_MAX;
	static int8_t x474 = -5;
	static int32_t x476 = -20;
	static int32_t t118 = 451786250;

    t118 = ((x473==x474)<=(x475|x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MAX;
	uint16_t x478 = 28891U;
	static uint32_t x479 = UINT32_MAX;
	int64_t x480 = -1LL;
	static int32_t t119 = 1477;

    t119 = ((x477==x478)<=(x479|x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = INT8_MAX;
	static int64_t x483 = INT64_MIN;
	uint32_t x484 = 245892604U;

    t120 = ((x481==x482)<=(x483|x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x485 = UINT8_MAX;
	int8_t x487 = INT8_MIN;
	uint16_t x488 = 3960U;
	static int32_t t121 = -58607011;

    t121 = ((x485==x486)<=(x487|x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x490 = INT16_MIN;
	int32_t x492 = INT32_MIN;
	volatile int32_t t122 = -37807;

    t122 = ((x489==x490)<=(x491|x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = 5238;
	uint32_t x494 = 120693896U;
	int8_t x495 = -1;
	volatile int16_t x496 = -1;
	volatile int32_t t123 = -6875;

    t123 = ((x493==x494)<=(x495|x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 21004891U;
	int64_t x498 = 44981809LL;
	static int64_t x500 = INT64_MAX;
	int32_t t124 = 3408511;

    t124 = ((x497==x498)<=(x499|x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = 49;
	uint64_t x502 = 4481094LLU;
	int16_t x503 = INT16_MIN;
	volatile int32_t t125 = -9401;

    t125 = ((x501==x502)<=(x503|x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = -1LL;
	volatile int16_t x506 = 2082;
	static uint8_t x507 = 99U;
	static int32_t t126 = -84109;

    t126 = ((x505==x506)<=(x507|x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = -1;
	int64_t x510 = INT64_MIN;
	uint8_t x511 = 19U;
	int8_t x512 = INT8_MAX;
	int32_t t127 = 40403429;

    t127 = ((x509==x510)<=(x511|x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = INT16_MIN;
	int64_t x514 = INT64_MAX;
	int64_t x516 = -1LL;
	int32_t t128 = -34707750;

    t128 = ((x513==x514)<=(x515|x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = INT64_MAX;
	static volatile uint64_t x518 = 23962239663966261LLU;
	int8_t x519 = -1;
	int64_t x520 = -1LL;
	int32_t t129 = 13;

    t129 = ((x517==x518)<=(x519|x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = -1LL;
	static uint64_t x522 = 954262201LLU;
	uint16_t x523 = 993U;
	int64_t x524 = -27LL;
	static volatile int32_t t130 = -1522;

    t130 = ((x521==x522)<=(x523|x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = 58;
	uint64_t x526 = 0LLU;
	volatile int32_t t131 = 128;

    t131 = ((x525==x526)<=(x527|x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -1;
	int16_t x530 = INT16_MAX;
	uint8_t x531 = 13U;
	uint16_t x532 = 89U;

    t132 = ((x529==x530)<=(x531|x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 357834104971354LLU;
	int64_t x534 = INT64_MIN;
	int64_t x535 = 12672586482306418LL;
	uint8_t x536 = 1U;
	int32_t t133 = 0;

    t133 = ((x533==x534)<=(x535|x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x538 = -1;
	volatile uint64_t x539 = 112971768LLU;
	int16_t x540 = -1951;
	static volatile int32_t t134 = -1;

    t134 = ((x537==x538)<=(x539|x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 8U;
	static int32_t x543 = INT32_MAX;
	static uint32_t x544 = 1U;
	volatile int32_t t135 = -206794;

    t135 = ((x541==x542)<=(x543|x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x546 = -1;
	int64_t x547 = INT64_MIN;
	int64_t x548 = INT64_MIN;
	volatile int32_t t136 = -10;

    t136 = ((x545==x546)<=(x547|x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint16_t x549 = 412U;
	uint8_t x550 = 92U;
	static volatile int32_t t137 = -221597;

    t137 = ((x549==x550)<=(x551|x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = INT8_MIN;
	int64_t x554 = -336593892593547LL;
	int8_t x556 = INT8_MIN;
	static volatile int32_t t138 = 1802522;

    t138 = ((x553==x554)<=(x555|x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = 0;
	uint32_t x558 = 18U;
	uint32_t x559 = 124U;
	static volatile int32_t t139 = -6;

    t139 = ((x557==x558)<=(x559|x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = INT16_MAX;
	volatile int64_t x562 = -1480327732442080LL;
	uint8_t x563 = 9U;

    t140 = ((x561==x562)<=(x563|x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = 127252;
	uint32_t x567 = 1842U;
	volatile int32_t t141 = 61;

    t141 = ((x565==x566)<=(x567|x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	volatile int16_t x570 = INT16_MAX;
	static int16_t x571 = -6330;
	uint64_t x572 = 382950584858LLU;
	static volatile int32_t t142 = 4061165;

    t142 = ((x569==x570)<=(x571|x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = 47;
	uint8_t x574 = UINT8_MAX;
	volatile uint64_t x575 = UINT64_MAX;
	int64_t x576 = -1LL;
	volatile int32_t t143 = -1;

    t143 = ((x573==x574)<=(x575|x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x577 = 13395700LLU;
	int64_t x578 = INT64_MIN;
	int16_t x579 = INT16_MAX;
	volatile int32_t t144 = 15901;

    t144 = ((x577==x578)<=(x579|x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	uint16_t x583 = UINT16_MAX;
	int32_t t145 = 644077;

    t145 = ((x581==x582)<=(x583|x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	uint16_t x586 = 26U;
	static uint8_t x587 = 1U;
	volatile uint64_t x588 = UINT64_MAX;
	volatile int32_t t146 = 283972;

    t146 = ((x585==x586)<=(x587|x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = 113;
	volatile int8_t x590 = 1;
	int16_t x591 = 1;
	int32_t x592 = -213;

    t147 = ((x589==x590)<=(x591|x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = UINT64_MAX;
	volatile int32_t x594 = 1;
	int16_t x595 = INT16_MIN;
	int32_t t148 = -4;

    t148 = ((x593==x594)<=(x595|x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 2001U;
	uint64_t x598 = UINT64_MAX;
	int16_t x599 = 609;
	volatile uint64_t x600 = 2345273336LLU;
	volatile int32_t t149 = 1;

    t149 = ((x597==x598)<=(x599|x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MAX;
	uint64_t x602 = UINT64_MAX;
	int32_t x603 = INT32_MIN;
	uint8_t x604 = UINT8_MAX;
	int32_t t150 = 15482021;

    t150 = ((x601==x602)<=(x603|x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = 6;
	int16_t x607 = INT16_MIN;

    t151 = ((x605==x606)<=(x607|x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int16_t x610 = INT16_MIN;
	int32_t x611 = INT32_MIN;
	int16_t x612 = -1;
	volatile int32_t t152 = -27243;

    t152 = ((x609==x610)<=(x611|x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x614 = INT8_MIN;
	static uint16_t x615 = 0U;
	volatile int32_t t153 = -1168402;

    t153 = ((x613==x614)<=(x615|x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	static int64_t x618 = INT64_MIN;
	static int8_t x620 = INT8_MIN;
	volatile int32_t t154 = 2775630;

    t154 = ((x617==x618)<=(x619|x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint16_t x621 = 6U;
	int32_t x622 = -1;
	int64_t x623 = INT64_MIN;
	volatile int8_t x624 = INT8_MAX;
	volatile int32_t t155 = -596692;

    t155 = ((x621==x622)<=(x623|x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 1705;
	volatile int32_t x627 = INT32_MAX;
	int32_t t156 = -152841;

    t156 = ((x625==x626)<=(x627|x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x630 = 7U;
	uint32_t x631 = 99111045U;
	int8_t x632 = INT8_MIN;

    t157 = ((x629==x630)<=(x631|x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	volatile int8_t x634 = INT8_MIN;
	int8_t x635 = -1;
	int32_t t158 = -26848316;

    t158 = ((x633==x634)<=(x635|x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x639 = INT32_MIN;
	static volatile uint64_t x640 = 642LLU;
	static int32_t t159 = -2602;

    t159 = ((x637==x638)<=(x639|x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	int8_t x642 = INT8_MIN;
	int8_t x644 = INT8_MIN;

    t160 = ((x641==x642)<=(x643|x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x645 = 1341U;
	volatile uint32_t x646 = 2885U;
	int64_t x647 = -1LL;
	static int64_t x648 = 1983LL;

    t161 = ((x645==x646)<=(x647|x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	int32_t x650 = INT32_MIN;
	static uint16_t x651 = UINT16_MAX;
	static int32_t t162 = -1;

    t162 = ((x649==x650)<=(x651|x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = -1;
	volatile uint16_t x654 = 1U;
	uint64_t x655 = UINT64_MAX;
	volatile int32_t t163 = 7584;

    t163 = ((x653==x654)<=(x655|x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MAX;
	int8_t x659 = 29;
	uint32_t x660 = 588744U;
	int32_t t164 = 1;

    t164 = ((x657==x658)<=(x659|x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x661 = INT16_MIN;
	static uint16_t x662 = 1596U;
	uint64_t x664 = 59175798350318909LLU;
	volatile int32_t t165 = -188;

    t165 = ((x661==x662)<=(x663|x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	int32_t x667 = 9;
	static volatile uint8_t x668 = UINT8_MAX;

    t166 = ((x665==x666)<=(x667|x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = INT32_MIN;
	int32_t x670 = 697;
	int8_t x671 = INT8_MIN;
	int32_t t167 = 111892705;

    t167 = ((x669==x670)<=(x671|x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = 9455119180334803LLU;
	int16_t x674 = 105;
	static uint32_t x675 = 3771334U;
	static int32_t x676 = 689487588;
	int32_t t168 = 42;

    t168 = ((x673==x674)<=(x675|x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x677 = 3747938404945LL;
	uint16_t x678 = 1U;
	int16_t x680 = -1;
	int32_t t169 = -1;

    t169 = ((x677==x678)<=(x679|x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	int8_t x682 = INT8_MIN;
	int32_t x683 = INT32_MAX;
	static int64_t x684 = INT64_MIN;
	int32_t t170 = -8487;

    t170 = ((x681==x682)<=(x683|x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 1573668110082664LLU;
	volatile int8_t x686 = -1;
	int8_t x687 = INT8_MIN;
	int32_t x688 = INT32_MIN;
	static int32_t t171 = -62;

    t171 = ((x685==x686)<=(x687|x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 28676U;
	int32_t x690 = -1;
	static int64_t x691 = INT64_MIN;
	static volatile int32_t t172 = -106683;

    t172 = ((x689==x690)<=(x691|x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = 226359065LL;
	int8_t x694 = 0;
	uint8_t x696 = 120U;
	volatile int32_t t173 = -618;

    t173 = ((x693==x694)<=(x695|x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x698 = UINT32_MAX;
	int8_t x699 = INT8_MIN;
	int8_t x700 = 41;

    t174 = ((x697==x698)<=(x699|x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x704 = INT32_MIN;
	int32_t t175 = -5;

    t175 = ((x701==x702)<=(x703|x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -61;
	int16_t x706 = INT16_MAX;
	int32_t x707 = INT32_MIN;
	int32_t t176 = 74;

    t176 = ((x705==x706)<=(x707|x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x710 = 21633;
	int16_t x712 = -59;

    t177 = ((x709==x710)<=(x711|x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x714 = INT16_MAX;
	uint8_t x715 = 24U;
	uint16_t x716 = UINT16_MAX;
	volatile int32_t t178 = -18;

    t178 = ((x713==x714)<=(x715|x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x718 = 42U;
	volatile uint16_t x719 = 56U;

    t179 = ((x717==x718)<=(x719|x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x721 = UINT16_MAX;
	static int64_t x722 = INT64_MAX;
	int32_t t180 = 6;

    t180 = ((x721==x722)<=(x723|x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x726 = 16;
	int64_t x728 = INT64_MIN;

    t181 = ((x725==x726)<=(x727|x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x730 = -1442;
	static int16_t x731 = 1824;
	static uint32_t x732 = 17547U;
	volatile int32_t t182 = -93;

    t182 = ((x729==x730)<=(x731|x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x735 = 885U;
	uint8_t x736 = 31U;

    t183 = ((x733==x734)<=(x735|x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -1LL;
	int16_t x738 = INT16_MAX;
	volatile uint32_t x739 = 6U;

    t184 = ((x737==x738)<=(x739|x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = UINT32_MAX;
	volatile uint16_t x743 = 62U;
	volatile int32_t x744 = INT32_MIN;
	volatile int32_t t185 = -47060059;

    t185 = ((x741==x742)<=(x743|x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 0U;
	int16_t x746 = INT16_MAX;
	int32_t t186 = -159664;

    t186 = ((x745==x746)<=(x747|x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 29010U;
	uint8_t x750 = UINT8_MAX;
	static int32_t x751 = -85438941;
	static int32_t t187 = -1497;

    t187 = ((x749==x750)<=(x751|x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 10U;
	volatile int64_t x754 = INT64_MIN;
	int32_t x755 = 116322454;
	int32_t x756 = INT32_MAX;
	volatile int32_t t188 = 0;

    t188 = ((x753==x754)<=(x755|x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x758 = 0U;
	uint64_t x759 = UINT64_MAX;
	static int64_t x760 = INT64_MAX;
	volatile int32_t t189 = 554394;

    t189 = ((x757==x758)<=(x759|x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 2U;
	static volatile uint64_t x762 = UINT64_MAX;
	uint64_t x763 = 1710704662040LLU;
	static uint8_t x764 = UINT8_MAX;
	volatile int32_t t190 = -8033;

    t190 = ((x761==x762)<=(x763|x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x766 = -3821;
	int16_t x767 = INT16_MAX;
	int32_t t191 = 115717150;

    t191 = ((x765==x766)<=(x767|x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x770 = 1023899089195849576LLU;
	static volatile int16_t x772 = INT16_MIN;
	volatile int32_t t192 = 46567;

    t192 = ((x769==x770)<=(x771|x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 2U;
	uint16_t x775 = 0U;
	int64_t x776 = -1LL;
	int32_t t193 = 100;

    t193 = ((x773==x774)<=(x775|x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 41;
	uint32_t x778 = 23U;
	volatile int32_t x779 = INT32_MIN;
	int32_t x780 = -4;
	int32_t t194 = 636329590;

    t194 = ((x777==x778)<=(x779|x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x781 = 2U;
	int32_t x783 = INT32_MAX;
	int64_t x784 = -15588199LL;
	int32_t t195 = 1059798;

    t195 = ((x781==x782)<=(x783|x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = INT16_MIN;
	uint32_t x788 = 58379330U;

    t196 = ((x785==x786)<=(x787|x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	int16_t x790 = -7316;
	static int8_t x791 = INT8_MIN;

    t197 = ((x789==x790)<=(x791|x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = INT64_MIN;
	int64_t x794 = -1LL;
	static int8_t x795 = -8;
	volatile int16_t x796 = INT16_MIN;
	volatile int32_t t198 = -14;

    t198 = ((x793==x794)<=(x795|x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = UINT32_MAX;
	int16_t x799 = INT16_MAX;
	uint32_t x800 = UINT32_MAX;

    t199 = ((x797==x798)<=(x799|x800));

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

