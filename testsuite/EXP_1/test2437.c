
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

int32_t x2 = INT32_MIN;
static volatile uint8_t x3 = 4U;
int16_t x7 = INT16_MAX;
int32_t t1 = 495;
volatile uint32_t x11 = 19005450U;
uint32_t t2 = 932182950U;
volatile int32_t t4 = -1768;
volatile int64_t x21 = -2558624318LL;
int64_t x28 = INT64_MIN;
static uint16_t x33 = 29798U;
int16_t x37 = 27;
int8_t x39 = INT8_MIN;
int32_t t9 = -370;
int32_t t10 = 1607;
int32_t t11 = -1426337;
int32_t x50 = 62114;
int32_t x51 = 420799;
int32_t x56 = -330;
uint16_t x58 = 4U;
uint32_t x70 = 3U;
static uint32_t t17 = 155U;
int32_t x77 = -23996170;
uint16_t x83 = UINT16_MAX;
int64_t t21 = 3018095318972LL;
volatile int8_t x89 = -1;
int32_t x92 = 0;
int16_t x97 = -3562;
static uint32_t x114 = 31114U;
uint64_t x118 = UINT64_MAX;
uint64_t x119 = 75598LLU;
volatile int32_t x120 = 1;
int32_t x126 = -1;
static int32_t x128 = INT32_MIN;
static volatile uint64_t x131 = 463280005LLU;
int64_t x135 = -3738490029LL;
static uint8_t x136 = 0U;
uint64_t x137 = 152221404550939LLU;
int32_t t36 = 3178;
static int32_t t37 = 505;
uint8_t x157 = 2U;
int64_t x159 = -1LL;
volatile uint16_t x160 = 5U;
uint32_t x161 = UINT32_MAX;
int16_t x162 = 5;
static int64_t x167 = INT64_MAX;
int8_t x179 = INT8_MAX;
static int64_t x184 = INT64_MIN;
int32_t x187 = -27252703;
static int64_t x188 = 3LL;
static int64_t x196 = 75845843898929LL;
uint8_t x198 = 1U;
uint64_t t49 = 8955736922757467LLU;
int32_t t50 = 1;
volatile int8_t x206 = 1;
static int64_t x208 = -1LL;
int32_t x218 = INT32_MIN;
int32_t x225 = 67895;
int32_t x230 = -1;
uint32_t x232 = 3170759U;
volatile uint32_t t56 = 758739995U;
static volatile uint64_t x237 = 16309459236319229LLU;
uint8_t x243 = UINT8_MAX;
int16_t x245 = INT16_MIN;
int32_t x247 = 1137;
volatile int32_t x250 = INT32_MIN;
volatile int32_t x252 = -35158;
volatile int32_t x253 = -1;
int64_t x254 = INT64_MAX;
volatile int16_t x259 = -1;
int64_t x264 = INT64_MIN;
int32_t t66 = 1789;
int64_t x277 = INT64_MAX;
int16_t x279 = -1;
static int32_t x284 = -1;
static volatile int32_t t69 = -150;
static uint8_t x286 = 2U;
int32_t x292 = -1;
volatile int32_t t71 = -3941858;
int64_t x294 = INT64_MIN;
int16_t x296 = 0;
int16_t x297 = INT16_MAX;
int64_t x301 = -1LL;
uint8_t x302 = 2U;
volatile uint8_t x305 = 3U;
int64_t x311 = -79557580792LL;
int64_t x314 = INT64_MAX;
int64_t x320 = 205676LL;
volatile int64_t t79 = 1413714992742007LL;
static int32_t x327 = INT32_MIN;
volatile int32_t x329 = 1;
uint8_t x334 = UINT8_MAX;
int16_t x336 = -1;
volatile int32_t t82 = -2801569;
volatile uint32_t x344 = 56421418U;
int8_t x350 = -12;
static int32_t t86 = 887026;
int32_t t87 = -61749;
uint8_t x362 = UINT8_MAX;
int16_t x364 = INT16_MIN;
static int32_t x365 = INT32_MIN;
static int32_t x367 = 0;
uint32_t x370 = UINT32_MAX;
uint32_t t91 = 1872421U;
int64_t x385 = INT64_MIN;
uint8_t x387 = UINT8_MAX;
int64_t x391 = INT64_MIN;
int32_t x396 = INT32_MAX;
int32_t t98 = 3299;
volatile uint64_t x404 = 652LLU;
volatile int16_t x405 = INT16_MAX;
int64_t x412 = INT64_MIN;
uint64_t x419 = 26LLU;
volatile int32_t t103 = 993717;
uint8_t x421 = 17U;
int32_t t104 = 2;
volatile uint8_t x426 = 2U;
uint8_t x427 = 5U;
int32_t t105 = -1200;
int32_t t106 = 3;
static volatile uint16_t x436 = UINT16_MAX;
volatile int32_t t107 = 539042;
int32_t x445 = INT32_MIN;
volatile uint16_t x449 = 11922U;
volatile uint64_t t114 = 2586509766LLU;
int16_t x472 = INT16_MIN;
static volatile int32_t t116 = 656935150;
uint64_t x487 = 40479474LLU;
int32_t t120 = 13946612;
volatile int32_t t122 = -15;
int64_t x498 = -1LL;
static int32_t t123 = -12;
int8_t x502 = 25;
volatile int32_t x507 = 965282116;
int64_t t126 = -4466447540974695LL;
static uint16_t x526 = UINT16_MAX;
uint32_t t131 = 1285521U;
volatile uint64_t x538 = UINT64_MAX;
int32_t x539 = 22819;
volatile int16_t x543 = -411;
int64_t x547 = -1LL;
int32_t t134 = 2;
static volatile int64_t x557 = INT64_MIN;
int32_t x558 = 1;
volatile int32_t x565 = INT32_MAX;
static volatile int64_t x566 = INT64_MIN;
int16_t x567 = INT16_MIN;
int16_t x573 = -774;
int8_t x576 = INT8_MIN;
int16_t x580 = 1;
volatile uint32_t x585 = 23U;
volatile int16_t x586 = INT16_MIN;
int16_t x590 = 0;
static int8_t x591 = INT8_MIN;
uint32_t x595 = 7338U;
int8_t x598 = INT8_MIN;
volatile int16_t x600 = INT16_MAX;
uint32_t x603 = 5U;
int8_t x604 = INT8_MIN;
static uint8_t x609 = UINT8_MAX;
int16_t x614 = INT16_MIN;
int8_t x616 = INT8_MIN;
static int8_t x619 = INT8_MIN;
int16_t x620 = -1;
int32_t t153 = -7078;
uint16_t x630 = 6U;
int64_t x644 = INT64_MIN;
static volatile int64_t t157 = -267543844988436LL;
int32_t x647 = -12011057;
uint64_t x650 = UINT64_MAX;
uint32_t x653 = 190023841U;
volatile int64_t x654 = INT64_MAX;
volatile uint32_t t160 = 717121U;
volatile int32_t x663 = -1;
int32_t t162 = 2844639;
static volatile int32_t x671 = 78;
uint32_t x672 = 937U;
int8_t x674 = 7;
volatile int16_t x678 = -1;
static uint16_t x679 = UINT16_MAX;
static volatile uint64_t x682 = UINT64_MAX;
int8_t x684 = INT8_MIN;
static uint8_t x687 = UINT8_MAX;
int32_t x689 = INT32_MIN;
uint32_t t169 = 1078186U;
volatile uint64_t x693 = 4672882710256LLU;
static int32_t t170 = 489831949;
int8_t x710 = -1;
static int16_t x712 = 0;
int16_t x724 = -1169;
volatile int64_t x733 = INT64_MIN;
int64_t x734 = INT64_MIN;
uint64_t x738 = UINT64_MAX;
uint32_t x741 = 569978734U;
uint16_t x743 = UINT16_MAX;
volatile uint32_t t183 = 747561U;
uint64_t x760 = 913110692127249LLU;
static int32_t x763 = 97257;
int8_t x770 = INT8_MAX;
volatile uint16_t x772 = 15921U;
int8_t x774 = INT8_MIN;
int32_t x777 = -1;
static int8_t x778 = INT8_MAX;
uint8_t x781 = UINT8_MAX;
int16_t x783 = -7148;
int32_t t194 = 10894806;
static volatile uint64_t t196 = 31821881LLU;
static int64_t x811 = INT64_MIN;
volatile int32_t t197 = 192;
int32_t x813 = -1;
int32_t x814 = INT32_MIN;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 21933715U;

    t0 = (((x1|x2)!=x3)+x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int8_t x6 = -22;
	int32_t x8 = -1;

    t1 = (((x5|x6)!=x7)+x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = UINT64_MAX;
	uint8_t x10 = UINT8_MAX;
	volatile uint32_t x12 = 52681U;

    t2 = (((x9|x10)!=x11)+x12);

    if (t2 != 52682U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	uint8_t x14 = 2U;
	volatile int32_t x15 = INT32_MAX;
	uint8_t x16 = 1U;
	int32_t t3 = 19;

    t3 = (((x13|x14)!=x15)+x16);

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = -1;
	uint8_t x18 = 12U;
	static volatile uint32_t x19 = 11574343U;
	volatile int16_t x20 = INT16_MIN;

    t4 = (((x17|x18)!=x19)+x20);

    if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = 7;
	volatile int32_t x23 = 254273320;
	static uint8_t x24 = 110U;
	int32_t t5 = 10189197;

    t5 = (((x21|x22)!=x23)+x24);

    if (t5 != 111) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	uint8_t x26 = 62U;
	volatile int16_t x27 = 206;
	volatile int64_t t6 = 1987421866LL;

    t6 = (((x25|x26)!=x27)+x28);

    if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	uint32_t x30 = 11138U;
	int8_t x31 = -8;
	static volatile uint64_t x32 = 470188771103LLU;
	static uint64_t t7 = 675390121923877LLU;

    t7 = (((x29|x30)!=x31)+x32);

    if (t7 != 470188771104LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = 7;
	int8_t x35 = -1;
	uint32_t x36 = 19555241U;
	static volatile uint32_t t8 = 2724625U;

    t8 = (((x33|x34)!=x35)+x36);

    if (t8 != 19555242U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = -1;
	int16_t x40 = 14;

    t9 = (((x37|x38)!=x39)+x40);

    if (t9 != 15) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = 7;
	int16_t x42 = 12;
	int16_t x43 = INT16_MAX;
	uint8_t x44 = 34U;

    t10 = (((x41|x42)!=x43)+x44);

    if (t10 != 35) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = -5;
	volatile int64_t x46 = -3343983224297495LL;
	uint8_t x47 = 13U;
	int32_t x48 = INT32_MIN;

    t11 = (((x45|x46)!=x47)+x48);

    if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	int16_t x52 = -15451;
	static volatile int32_t t12 = 1;

    t12 = (((x49|x50)!=x51)+x52);

    if (t12 != -15450) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	uint64_t x54 = UINT64_MAX;
	uint16_t x55 = 7U;
	static volatile int32_t t13 = 26311;

    t13 = (((x53|x54)!=x55)+x56);

    if (t13 != -329) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint32_t x59 = 30713U;
	int8_t x60 = 0;
	static int32_t t14 = 236;

    t14 = (((x57|x58)!=x59)+x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x61 = INT32_MIN;
	int64_t x62 = -7383716099995LL;
	int32_t x63 = INT32_MIN;
	volatile uint64_t x64 = 1LLU;
	uint64_t t15 = 9897LLU;

    t15 = (((x61|x62)!=x63)+x64);

    if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = -1LL;
	int8_t x66 = INT8_MIN;
	int16_t x67 = -1;
	uint32_t x68 = 2122383572U;
	volatile uint32_t t16 = 14U;

    t16 = (((x65|x66)!=x67)+x68);

    if (t16 != 2122383572U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	static int32_t x71 = INT32_MIN;
	uint32_t x72 = 639U;

    t17 = (((x69|x70)!=x71)+x72);

    if (t17 != 640U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	volatile uint8_t x74 = 90U;
	uint16_t x75 = 0U;
	int16_t x76 = 126;
	volatile int32_t t18 = -78;

    t18 = (((x73|x74)!=x75)+x76);

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x78 = 448634194LLU;
	static int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MAX;
	static volatile int32_t t19 = -2;

    t19 = (((x77|x78)!=x79)+x80);

    if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	volatile int16_t x82 = INT16_MIN;
	volatile int32_t x84 = INT32_MIN;
	static int32_t t20 = 23556;

    t20 = (((x81|x82)!=x83)+x84);

    if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x85 = -11156473457770LL;
	int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MIN;
	static int64_t x88 = INT64_MIN;

    t21 = (((x85|x86)!=x87)+x88);

    if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = INT16_MIN;
	int8_t x91 = 1;
	int32_t t22 = -10;

    t22 = (((x89|x90)!=x91)+x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = 93;
	int64_t x94 = INT64_MAX;
	int8_t x95 = INT8_MIN;
	volatile int32_t x96 = INT32_MIN;
	volatile int32_t t23 = 1149;

    t23 = (((x93|x94)!=x95)+x96);

    if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = INT64_MAX;
	static volatile int64_t x99 = 16LL;
	int16_t x100 = INT16_MIN;
	int32_t t24 = -2511776;

    t24 = (((x97|x98)!=x99)+x100);

    if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 13U;
	int32_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	volatile uint64_t x104 = 118417071376084108LLU;
	volatile uint64_t t25 = 1246LLU;

    t25 = (((x101|x102)!=x103)+x104);

    if (t25 != 118417071376084109LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 7940LL;
	int32_t x106 = INT32_MIN;
	uint16_t x107 = 9U;
	int64_t x108 = -1LL;
	static int64_t t26 = 1588LL;

    t26 = (((x105|x106)!=x107)+x108);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = INT32_MIN;
	uint64_t x110 = 449474642294495440LLU;
	int64_t x111 = INT64_MIN;
	int32_t x112 = INT32_MIN;
	int32_t t27 = 6;

    t27 = (((x109|x110)!=x111)+x112);

    if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	static int8_t x115 = 45;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = 3;

    t28 = (((x113|x114)!=x115)+x116);

    if (t28 != 65536) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	volatile int32_t t29 = -80;

    t29 = (((x117|x118)!=x119)+x120);

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x121 = 0U;
	int64_t x122 = 74462711LL;
	static uint32_t x123 = 1579962762U;
	uint64_t x124 = 77LLU;
	uint64_t t30 = 41224590714208LLU;

    t30 = (((x121|x122)!=x123)+x124);

    if (t30 != 78LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 6U;
	int8_t x127 = INT8_MIN;
	int32_t t31 = -111258052;

    t31 = (((x125|x126)!=x127)+x128);

    if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	int8_t x132 = 30;
	int32_t t32 = -3681079;

    t32 = (((x129|x130)!=x131)+x132);

    if (t32 != 31) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	int8_t x134 = INT8_MIN;
	static int32_t t33 = -52;

    t33 = (((x133|x134)!=x135)+x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x138 = -1;
	uint16_t x139 = UINT16_MAX;
	static int32_t x140 = 6375343;
	int32_t t34 = -2717153;

    t34 = (((x137|x138)!=x139)+x140);

    if (t34 != 6375344) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 75U;
	int8_t x142 = INT8_MAX;
	uint16_t x143 = UINT16_MAX;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t35 = -929624;

    t35 = (((x141|x142)!=x143)+x144);

    if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x145 = 0;
	int64_t x146 = -1LL;
	uint8_t x147 = 1U;
	int16_t x148 = INT16_MIN;

    t36 = (((x145|x146)!=x147)+x148);

    if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	int64_t x150 = INT64_MIN;
	volatile int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MIN;

    t37 = (((x149|x150)!=x151)+x152);

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = 1;
	volatile int32_t x154 = -7150;
	static volatile int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = -14191240;

    t38 = (((x153|x154)!=x155)+x156);

    if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x158 = -1;
	volatile int32_t t39 = 122264;

    t39 = (((x157|x158)!=x159)+x160);

    if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x163 = -1;
	uint16_t x164 = 5U;
	int32_t t40 = 10498606;

    t40 = (((x161|x162)!=x163)+x164);

    if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	uint64_t x166 = UINT64_MAX;
	uint8_t x168 = 1U;
	int32_t t41 = -540286;

    t41 = (((x165|x166)!=x167)+x168);

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = 125674674;
	uint64_t x170 = 293818671545847845LLU;
	volatile uint8_t x171 = 7U;
	uint16_t x172 = 3U;
	volatile int32_t t42 = -13170;

    t42 = (((x169|x170)!=x171)+x172);

    if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	int8_t x174 = -1;
	int32_t x175 = INT32_MAX;
	uint8_t x176 = 34U;
	static volatile int32_t t43 = 1;

    t43 = (((x173|x174)!=x175)+x176);

    if (t43 != 35) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	uint32_t x178 = 568U;
	uint64_t x180 = 72510240145LLU;
	uint64_t t44 = 51011212405734LLU;

    t44 = (((x177|x178)!=x179)+x180);

    if (t44 != 72510240146LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = INT8_MIN;
	uint64_t x182 = 753440547870702LLU;
	int8_t x183 = 0;
	int64_t t45 = 478LL;

    t45 = (((x181|x182)!=x183)+x184);

    if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = UINT64_MAX;
	static int8_t x186 = INT8_MAX;
	volatile int64_t t46 = -2127229865LL;

    t46 = (((x185|x186)!=x187)+x188);

    if (t46 != 4LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -114866882;
	int32_t x190 = -1;
	int8_t x191 = INT8_MAX;
	int8_t x192 = -1;
	static int32_t t47 = -934;

    t47 = (((x189|x190)!=x191)+x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MAX;
	int8_t x195 = INT8_MIN;
	volatile int64_t t48 = 1456LL;

    t48 = (((x193|x194)!=x195)+x196);

    if (t48 != 75845843898930LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = 8;
	volatile int32_t x199 = 467652;
	uint64_t x200 = UINT64_MAX;

    t49 = (((x197|x198)!=x199)+x200);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MAX;
	static uint32_t x202 = 111196U;
	int8_t x203 = 6;
	volatile int32_t x204 = 0;

    t50 = (((x201|x202)!=x203)+x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x205 = -5937099;
	static volatile uint64_t x207 = UINT64_MAX;
	volatile int64_t t51 = 15LL;

    t51 = (((x205|x206)!=x207)+x208);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1901LL;
	static uint16_t x210 = UINT16_MAX;
	int32_t x211 = INT32_MAX;
	int16_t x212 = 6;
	int32_t t52 = 6469;

    t52 = (((x209|x210)!=x211)+x212);

    if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -1;
	int16_t x214 = INT16_MIN;
	uint8_t x215 = 1U;
	int64_t x216 = -45878457766515951LL;
	int64_t t53 = -113071323LL;

    t53 = (((x213|x214)!=x215)+x216);

    if (t53 != -45878457766515950LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = 0;
	int32_t x219 = INT32_MIN;
	volatile uint32_t x220 = 14574U;
	uint32_t t54 = 1073U;

    t54 = (((x217|x218)!=x219)+x220);

    if (t54 != 14574U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x226 = INT8_MIN;
	int8_t x227 = -1;
	static int8_t x228 = -21;
	int32_t t55 = -159248256;

    t55 = (((x225|x226)!=x227)+x228);

    if (t55 != -20) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = INT16_MAX;
	volatile int8_t x231 = 1;

    t56 = (((x229|x230)!=x231)+x232);

    if (t56 != 3170760U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x233 = 1U;
	int32_t x234 = -9753;
	uint64_t x235 = UINT64_MAX;
	int8_t x236 = -1;
	volatile int32_t t57 = -14935784;

    t57 = (((x233|x234)!=x235)+x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x238 = UINT16_MAX;
	int64_t x239 = INT64_MIN;
	uint64_t x240 = 321362891749700LLU;
	uint64_t t58 = 3983188922LLU;

    t58 = (((x237|x238)!=x239)+x240);

    if (t58 != 321362891749701LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x241 = INT64_MAX;
	int64_t x242 = -5123572890LL;
	static int8_t x244 = -1;
	int32_t t59 = 4908;

    t59 = (((x241|x242)!=x243)+x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x246 = 124U;
	static uint32_t x248 = UINT32_MAX;
	uint32_t t60 = 25587U;

    t60 = (((x245|x246)!=x247)+x248);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x249 = INT32_MAX;
	static int8_t x251 = INT8_MAX;
	int32_t t61 = 0;

    t61 = (((x249|x250)!=x251)+x252);

    if (t61 != -35157) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x255 = 47U;
	volatile int8_t x256 = INT8_MIN;
	static volatile int32_t t62 = -980356005;

    t62 = (((x253|x254)!=x255)+x256);

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x257 = -1;
	int64_t x258 = INT64_MAX;
	int8_t x260 = INT8_MIN;
	int32_t t63 = -3;

    t63 = (((x257|x258)!=x259)+x260);

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x261 = 0U;
	static int8_t x262 = -1;
	int32_t x263 = -9;
	int64_t t64 = 0LL;

    t64 = (((x261|x262)!=x263)+x264);

    if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = -1LL;
	uint32_t x267 = 2U;
	int64_t x268 = -1LL;
	static int64_t t65 = 4084224063LL;

    t65 = (((x265|x266)!=x267)+x268);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = -1;
	int64_t x270 = -1LL;
	int64_t x271 = 697011438LL;
	static int32_t x272 = INT32_MIN;

    t66 = (((x269|x270)!=x271)+x272);

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x273 = UINT64_MAX;
	int32_t x274 = INT32_MAX;
	int64_t x275 = INT64_MAX;
	volatile int8_t x276 = 4;
	static int32_t t67 = -259022999;

    t67 = (((x273|x274)!=x275)+x276);

    if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x278 = -1LL;
	static int32_t x280 = INT32_MIN;
	int32_t t68 = INT32_MIN;

    t68 = (((x277|x278)!=x279)+x280);

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = 14;
	int8_t x282 = -30;
	volatile int64_t x283 = -140043203419315951LL;

    t69 = (((x281|x282)!=x283)+x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x285 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	int32_t x288 = -340;
	static int32_t t70 = 554871;

    t70 = (((x285|x286)!=x287)+x288);

    if (t70 != -339) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x289 = -1;
	int16_t x290 = INT16_MAX;
	static int32_t x291 = 636;

    t71 = (((x289|x290)!=x291)+x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x293 = 20U;
	uint64_t x295 = UINT64_MAX;
	static volatile int32_t t72 = 1706;

    t72 = (((x293|x294)!=x295)+x296);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x298 = -249767263;
	int8_t x299 = INT8_MIN;
	uint32_t x300 = 4941581U;
	volatile uint32_t t73 = 32793878U;

    t73 = (((x297|x298)!=x299)+x300);

    if (t73 != 4941582U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x303 = -1312;
	int8_t x304 = 15;
	int32_t t74 = 462;

    t74 = (((x301|x302)!=x303)+x304);

    if (t74 != 16) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x306 = -1LL;
	int16_t x307 = 0;
	uint64_t x308 = 707136LLU;
	uint64_t t75 = 26LLU;

    t75 = (((x305|x306)!=x307)+x308);

    if (t75 != 707137LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x309 = 123342347U;
	uint16_t x310 = UINT16_MAX;
	volatile uint16_t x312 = UINT16_MAX;
	volatile int32_t t76 = 243985258;

    t76 = (((x309|x310)!=x311)+x312);

    if (t76 != 65536) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x313 = 7434887U;
	volatile int64_t x315 = INT64_MIN;
	volatile uint8_t x316 = UINT8_MAX;
	volatile int32_t t77 = 132906569;

    t77 = (((x313|x314)!=x315)+x316);

    if (t77 != 256) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x317 = INT8_MAX;
	static int32_t x318 = -4;
	int32_t x319 = INT32_MIN;
	volatile int64_t t78 = 7287023265550LL;

    t78 = (((x317|x318)!=x319)+x320);

    if (t78 != 205677LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x321 = 4130272831135757129LLU;
	uint32_t x322 = UINT32_MAX;
	static int32_t x323 = -1;
	int64_t x324 = INT64_MIN;

    t79 = (((x321|x322)!=x323)+x324);

    if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = -2830;
	uint16_t x326 = 68U;
	int64_t x328 = -1LL;
	volatile int64_t t80 = -96LL;

    t80 = (((x325|x326)!=x327)+x328);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x330 = 150U;
	volatile int16_t x331 = INT16_MIN;
	uint64_t x332 = 1727006066574334LLU;
	uint64_t t81 = 2731038441LLU;

    t81 = (((x329|x330)!=x331)+x332);

    if (t81 != 1727006066574335LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x333 = 2;
	int8_t x335 = INT8_MIN;

    t82 = (((x333|x334)!=x335)+x336);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x337 = -1;
	static volatile uint16_t x338 = 718U;
	uint8_t x339 = 18U;
	volatile uint16_t x340 = 6935U;
	volatile int32_t t83 = 29904917;

    t83 = (((x337|x338)!=x339)+x340);

    if (t83 != 6936) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x341 = INT32_MIN;
	volatile uint64_t x342 = UINT64_MAX;
	static int8_t x343 = INT8_MAX;
	uint32_t t84 = 380U;

    t84 = (((x341|x342)!=x343)+x344);

    if (t84 != 56421419U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x345 = 70U;
	int16_t x346 = -1;
	static int16_t x347 = -1;
	static int64_t x348 = -1LL;
	static int64_t t85 = -7593LL;

    t85 = (((x345|x346)!=x347)+x348);

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x349 = -44;
	static int64_t x351 = -4865325978LL;
	volatile int8_t x352 = INT8_MIN;

    t86 = (((x349|x350)!=x351)+x352);

    if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x353 = 19483456844LLU;
	int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MAX;

    t87 = (((x353|x354)!=x355)+x356);

    if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x357 = INT16_MIN;
	volatile uint16_t x358 = 19U;
	static int16_t x359 = INT16_MIN;
	uint32_t x360 = UINT32_MAX;
	static uint32_t t88 = 8145U;

    t88 = (((x357|x358)!=x359)+x360);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x361 = INT8_MIN;
	int8_t x363 = -1;
	int32_t t89 = 9;

    t89 = (((x361|x362)!=x363)+x364);

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x366 = 337533820;
	int8_t x368 = -9;
	int32_t t90 = 1106891;

    t90 = (((x365|x366)!=x367)+x368);

    if (t90 != -8) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint16_t x369 = 6U;
	uint8_t x371 = 33U;
	uint32_t x372 = 9154U;

    t91 = (((x369|x370)!=x371)+x372);

    if (t91 != 9155U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x373 = 79LLU;
	volatile uint8_t x374 = 74U;
	uint32_t x375 = 214528532U;
	int8_t x376 = INT8_MAX;
	int32_t t92 = 5197474;

    t92 = (((x373|x374)!=x375)+x376);

    if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x377 = UINT16_MAX;
	uint32_t x378 = UINT32_MAX;
	volatile uint16_t x379 = 5154U;
	int8_t x380 = INT8_MIN;
	static int32_t t93 = 174;

    t93 = (((x377|x378)!=x379)+x380);

    if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x381 = INT8_MIN;
	static volatile uint64_t x382 = 1LLU;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MAX;
	static volatile int32_t t94 = -50;

    t94 = (((x381|x382)!=x383)+x384);

    if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x386 = 748;
	volatile uint32_t x388 = UINT32_MAX;
	volatile uint32_t t95 = 345105180U;

    t95 = (((x385|x386)!=x387)+x388);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x389 = -834758;
	int16_t x390 = INT16_MIN;
	uint32_t x392 = 9896U;
	volatile uint32_t t96 = 1270753979U;

    t96 = (((x389|x390)!=x391)+x392);

    if (t96 != 9897U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x393 = -211539666453126LL;
	static int32_t x394 = -1;
	static int64_t x395 = -1LL;
	int32_t t97 = INT32_MAX;

    t97 = (((x393|x394)!=x395)+x396);

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x397 = -1LL;
	static uint32_t x398 = 416U;
	volatile int8_t x399 = INT8_MAX;
	int16_t x400 = INT16_MAX;

    t98 = (((x397|x398)!=x399)+x400);

    if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x401 = -1;
	static uint8_t x402 = 76U;
	static volatile int16_t x403 = -1;
	uint64_t t99 = 11383646487718LLU;

    t99 = (((x401|x402)!=x403)+x404);

    if (t99 != 652LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x406 = 5603630447LLU;
	int16_t x407 = 8349;
	int16_t x408 = INT16_MAX;
	volatile int32_t t100 = -1821;

    t100 = (((x405|x406)!=x407)+x408);

    if (t100 != 32768) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x409 = UINT8_MAX;
	int8_t x410 = INT8_MIN;
	int32_t x411 = -1;
	volatile int64_t t101 = INT64_MIN;

    t101 = (((x409|x410)!=x411)+x412);

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x413 = -1;
	uint64_t x414 = UINT64_MAX;
	uint64_t x415 = 578974955LLU;
	int64_t x416 = -1LL;
	int64_t t102 = 23119LL;

    t102 = (((x413|x414)!=x415)+x416);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x417 = -1;
	int32_t x418 = 331;
	int32_t x420 = INT32_MIN;

    t103 = (((x417|x418)!=x419)+x420);

    if (t103 != -2147483647) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x422 = INT64_MIN;
	int16_t x423 = INT16_MIN;
	uint8_t x424 = 4U;

    t104 = (((x421|x422)!=x423)+x424);

    if (t104 != 5) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x425 = -1;
	uint16_t x428 = 1U;

    t105 = (((x425|x426)!=x427)+x428);

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x429 = INT16_MIN;
	static int8_t x430 = -1;
	uint16_t x431 = 8018U;
	int32_t x432 = -668938443;

    t106 = (((x429|x430)!=x431)+x432);

    if (t106 != -668938442) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x433 = -115;
	int16_t x434 = -1;
	static int32_t x435 = 95717;

    t107 = (((x433|x434)!=x435)+x436);

    if (t107 != 65536) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x437 = 2988474U;
	volatile int32_t x438 = -250473;
	volatile int16_t x439 = -3014;
	uint32_t x440 = UINT32_MAX;
	uint32_t t108 = 31865U;

    t108 = (((x437|x438)!=x439)+x440);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x441 = 28U;
	uint64_t x442 = 269LLU;
	int16_t x443 = INT16_MAX;
	volatile int8_t x444 = 0;
	static volatile int32_t t109 = 1;

    t109 = (((x441|x442)!=x443)+x444);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x446 = 37U;
	uint8_t x447 = 0U;
	int64_t x448 = -1353748LL;
	int64_t t110 = 34655LL;

    t110 = (((x445|x446)!=x447)+x448);

    if (t110 != -1353747LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x450 = 1945U;
	volatile uint8_t x451 = 3U;
	static int8_t x452 = 52;
	static int32_t t111 = 55779;

    t111 = (((x449|x450)!=x451)+x452);

    if (t111 != 53) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x453 = 3492U;
	int64_t x454 = 1049435367LL;
	volatile uint16_t x455 = 346U;
	volatile int8_t x456 = 11;
	volatile int32_t t112 = -5724;

    t112 = (((x453|x454)!=x455)+x456);

    if (t112 != 12) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x457 = -1;
	volatile uint16_t x458 = 12481U;
	uint64_t x459 = UINT64_MAX;
	int64_t x460 = 1LL;
	int64_t t113 = 12984398629LL;

    t113 = (((x457|x458)!=x459)+x460);

    if (t113 != 1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x461 = 3186U;
	int32_t x462 = INT32_MIN;
	static int16_t x463 = 237;
	uint64_t x464 = 80007352756986370LLU;

    t114 = (((x461|x462)!=x463)+x464);

    if (t114 != 80007352756986371LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = INT32_MIN;
	int8_t x466 = -1;
	static uint16_t x467 = 9801U;
	int64_t x468 = INT64_MIN;
	volatile int64_t t115 = -3558LL;

    t115 = (((x465|x466)!=x467)+x468);

    if (t115 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x469 = -1;
	int64_t x470 = 8339492569604LL;
	int8_t x471 = -1;

    t116 = (((x469|x470)!=x471)+x472);

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x473 = INT8_MIN;
	static uint16_t x474 = 12531U;
	volatile int32_t x475 = INT32_MIN;
	volatile int8_t x476 = -11;
	volatile int32_t t117 = 34;

    t117 = (((x473|x474)!=x475)+x476);

    if (t117 != -10) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x477 = -1;
	int8_t x478 = -31;
	int16_t x479 = INT16_MAX;
	int32_t x480 = INT32_MIN;
	int32_t t118 = -79999515;

    t118 = (((x477|x478)!=x479)+x480);

    if (t118 != -2147483647) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x481 = 42295U;
	static int64_t x482 = INT64_MAX;
	int64_t x483 = -60102609104LL;
	volatile int64_t x484 = -12LL;
	int64_t t119 = -1LL;

    t119 = (((x481|x482)!=x483)+x484);

    if (t119 != -11LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x485 = INT8_MIN;
	uint32_t x486 = 5650897U;
	volatile int8_t x488 = INT8_MIN;

    t120 = (((x485|x486)!=x487)+x488);

    if (t120 != -127) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x489 = INT32_MAX;
	int16_t x490 = INT16_MIN;
	static uint8_t x491 = 6U;
	int8_t x492 = 2;
	int32_t t121 = -55057629;

    t121 = (((x489|x490)!=x491)+x492);

    if (t121 != 3) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x493 = INT32_MIN;
	int16_t x494 = INT16_MIN;
	uint16_t x495 = UINT16_MAX;
	int16_t x496 = -1;

    t122 = (((x493|x494)!=x495)+x496);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x497 = UINT8_MAX;
	int32_t x499 = INT32_MIN;
	volatile int8_t x500 = 1;

    t123 = (((x497|x498)!=x499)+x500);

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x501 = INT16_MIN;
	int64_t x503 = INT64_MAX;
	static volatile uint16_t x504 = 784U;
	volatile int32_t t124 = 116;

    t124 = (((x501|x502)!=x503)+x504);

    if (t124 != 785) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x505 = -259695LL;
	volatile uint16_t x506 = UINT16_MAX;
	uint16_t x508 = 74U;
	volatile int32_t t125 = -731;

    t125 = (((x505|x506)!=x507)+x508);

    if (t125 != 75) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x509 = 265U;
	int8_t x510 = 6;
	volatile int64_t x511 = -3605304038764321146LL;
	int64_t x512 = INT64_MIN;

    t126 = (((x509|x510)!=x511)+x512);

    if (t126 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x513 = 61668494LLU;
	int64_t x514 = INT64_MIN;
	static int16_t x515 = INT16_MIN;
	uint16_t x516 = 2442U;
	int32_t t127 = -6693;

    t127 = (((x513|x514)!=x515)+x516);

    if (t127 != 2443) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x517 = INT8_MIN;
	int32_t x518 = INT32_MAX;
	int8_t x519 = 7;
	int16_t x520 = -1;
	int32_t t128 = 78;

    t128 = (((x517|x518)!=x519)+x520);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x521 = 178LL;
	static volatile int16_t x522 = INT16_MIN;
	static int32_t x523 = INT32_MIN;
	int16_t x524 = -1;
	volatile int32_t t129 = 481139061;

    t129 = (((x521|x522)!=x523)+x524);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x525 = 5;
	uint32_t x527 = 405824U;
	volatile uint16_t x528 = 212U;
	int32_t t130 = -46060;

    t130 = (((x525|x526)!=x527)+x528);

    if (t130 != 213) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x529 = INT32_MIN;
	int8_t x530 = INT8_MIN;
	volatile uint32_t x531 = 209U;
	volatile uint32_t x532 = 238U;

    t131 = (((x529|x530)!=x531)+x532);

    if (t131 != 239U) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x537 = 20;
	static volatile int32_t x540 = 1013468;
	static int32_t t132 = 19423;

    t132 = (((x537|x538)!=x539)+x540);

    if (t132 != 1013469) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x541 = INT32_MIN;
	int16_t x542 = INT16_MAX;
	uint8_t x544 = 0U;
	int32_t t133 = -21;

    t133 = (((x541|x542)!=x543)+x544);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x545 = -3202;
	static int64_t x546 = INT64_MIN;
	int8_t x548 = -1;

    t134 = (((x545|x546)!=x547)+x548);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile uint16_t x550 = 13U;
	volatile int32_t x551 = 930;
	static volatile uint32_t x552 = 5458910U;
	static uint32_t t135 = 4293U;

    t135 = (((x549|x550)!=x551)+x552);

    if (t135 != 5458911U) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x553 = UINT64_MAX;
	int64_t x554 = -125719476LL;
	int64_t x555 = -10195148LL;
	int16_t x556 = INT16_MAX;
	volatile int32_t t136 = -183556561;

    t136 = (((x553|x554)!=x555)+x556);

    if (t136 != 32768) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x559 = -15;
	int64_t x560 = 817156080705LL;
	int64_t t137 = -8095833956898LL;

    t137 = (((x557|x558)!=x559)+x560);

    if (t137 != 817156080706LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x561 = INT8_MIN;
	static int16_t x562 = INT16_MAX;
	volatile int16_t x563 = INT16_MIN;
	uint16_t x564 = 1U;
	volatile int32_t t138 = -98211727;

    t138 = (((x561|x562)!=x563)+x564);

    if (t138 != 2) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x568 = 1U;
	uint32_t t139 = 66215U;

    t139 = (((x565|x566)!=x567)+x568);

    if (t139 != 2U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x574 = 18U;
	volatile int32_t x575 = -1;
	volatile int32_t t140 = 17543;

    t140 = (((x573|x574)!=x575)+x576);

    if (t140 != -127) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x577 = 1U;
	int32_t x578 = INT32_MIN;
	int64_t x579 = 4813LL;
	volatile int32_t t141 = 1;

    t141 = (((x577|x578)!=x579)+x580);

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x581 = -42432820145319LL;
	uint64_t x582 = 1LLU;
	static uint8_t x583 = 0U;
	static volatile uint8_t x584 = 26U;
	static volatile int32_t t142 = 1613841;

    t142 = (((x581|x582)!=x583)+x584);

    if (t142 != 27) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x587 = INT32_MAX;
	int32_t x588 = -1;
	static volatile int32_t t143 = -10281519;

    t143 = (((x585|x586)!=x587)+x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x589 = 52U;
	volatile uint64_t x592 = UINT64_MAX;
	uint64_t t144 = 39077807508445LLU;

    t144 = (((x589|x590)!=x591)+x592);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x593 = 5;
	int64_t x594 = -992552576175119377LL;
	int32_t x596 = INT32_MIN;
	int32_t t145 = -2109209;

    t145 = (((x593|x594)!=x595)+x596);

    if (t145 != -2147483647) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x597 = INT16_MIN;
	uint16_t x599 = 4U;
	volatile int32_t t146 = -1895369;

    t146 = (((x597|x598)!=x599)+x600);

    if (t146 != 32768) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x601 = 14U;
	int8_t x602 = INT8_MIN;
	static int32_t t147 = 6653642;

    t147 = (((x601|x602)!=x603)+x604);

    if (t147 != -127) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint8_t x605 = UINT8_MAX;
	volatile int8_t x606 = -6;
	int16_t x607 = -1;
	static volatile int32_t x608 = -41247375;
	int32_t t148 = 9462;

    t148 = (((x605|x606)!=x607)+x608);

    if (t148 != -41247375) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x610 = INT32_MAX;
	int32_t x611 = INT32_MAX;
	int32_t x612 = 393784;
	int32_t t149 = 55268785;

    t149 = (((x609|x610)!=x611)+x612);

    if (t149 != 393784) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x613 = INT16_MIN;
	static int16_t x615 = INT16_MAX;
	volatile int32_t t150 = 210;

    t150 = (((x613|x614)!=x615)+x616);

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint8_t x617 = 9U;
	int16_t x618 = -1;
	int32_t t151 = -1766;

    t151 = (((x617|x618)!=x619)+x620);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x621 = UINT32_MAX;
	uint32_t x622 = 1817U;
	volatile int16_t x623 = -1;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t152 = 211477;

    t152 = (((x621|x622)!=x623)+x624);

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x625 = INT32_MIN;
	uint64_t x626 = 82301LLU;
	int32_t x627 = -1;
	volatile uint8_t x628 = 17U;

    t153 = (((x625|x626)!=x627)+x628);

    if (t153 != 18) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x629 = 154461U;
	int64_t x631 = INT64_MIN;
	uint32_t x632 = 80U;
	static volatile uint32_t t154 = 107409U;

    t154 = (((x629|x630)!=x631)+x632);

    if (t154 != 81U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x633 = -1LL;
	int32_t x634 = INT32_MIN;
	int32_t x635 = -30314;
	uint64_t x636 = UINT64_MAX;
	static uint64_t t155 = 1LLU;

    t155 = (((x633|x634)!=x635)+x636);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x637 = -127204LL;
	volatile uint8_t x638 = 0U;
	int32_t x639 = INT32_MIN;
	int16_t x640 = INT16_MIN;
	int32_t t156 = -21855677;

    t156 = (((x637|x638)!=x639)+x640);

    if (t156 != -32767) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x641 = -199980;
	int8_t x642 = -1;
	static int64_t x643 = -198652432LL;

    t157 = (((x641|x642)!=x643)+x644);

    if (t157 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x645 = 96238493U;
	uint32_t x646 = 6035U;
	int32_t x648 = INT32_MIN;
	static int32_t t158 = -5423189;

    t158 = (((x645|x646)!=x647)+x648);

    if (t158 != -2147483647) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x649 = INT16_MIN;
	int8_t x651 = -1;
	int16_t x652 = INT16_MIN;
	static int32_t t159 = -1;

    t159 = (((x649|x650)!=x651)+x652);

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x655 = -69563390213LL;
	uint32_t x656 = 32109U;

    t160 = (((x653|x654)!=x655)+x656);

    if (t160 != 32110U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x657 = -1;
	static uint8_t x658 = UINT8_MAX;
	int32_t x659 = 12458449;
	uint32_t x660 = UINT32_MAX;
	volatile uint32_t t161 = 29762U;

    t161 = (((x657|x658)!=x659)+x660);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x661 = 0;
	static uint64_t x662 = 2LLU;
	int32_t x664 = 7254;

    t162 = (((x661|x662)!=x663)+x664);

    if (t162 != 7255) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x665 = UINT8_MAX;
	uint8_t x666 = 1U;
	int32_t x667 = -172189;
	int8_t x668 = 21;
	volatile int32_t t163 = -7127651;

    t163 = (((x665|x666)!=x667)+x668);

    if (t163 != 22) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x669 = 49418726U;
	int32_t x670 = -1;
	static uint32_t t164 = 63695U;

    t164 = (((x669|x670)!=x671)+x672);

    if (t164 != 938U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x673 = INT32_MIN;
	static int16_t x675 = 2037;
	int16_t x676 = 2811;
	static volatile int32_t t165 = -11492387;

    t165 = (((x673|x674)!=x675)+x676);

    if (t165 != 2812) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x677 = 4;
	static volatile uint8_t x680 = UINT8_MAX;
	int32_t t166 = -103;

    t166 = (((x677|x678)!=x679)+x680);

    if (t166 != 256) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x681 = INT64_MIN;
	int32_t x683 = -1;
	static volatile int32_t t167 = -42527;

    t167 = (((x681|x682)!=x683)+x684);

    if (t167 != -128) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x685 = INT32_MIN;
	static int16_t x686 = 7706;
	uint16_t x688 = UINT16_MAX;
	static volatile int32_t t168 = 205809185;

    t168 = (((x685|x686)!=x687)+x688);

    if (t168 != 65536) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x690 = INT16_MIN;
	int8_t x691 = INT8_MAX;
	volatile uint32_t x692 = 2859083U;

    t169 = (((x689|x690)!=x691)+x692);

    if (t169 != 2859084U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x694 = -1;
	uint8_t x695 = 15U;
	static int16_t x696 = INT16_MAX;

    t170 = (((x693|x694)!=x695)+x696);

    if (t170 != 32768) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x701 = UINT16_MAX;
	volatile int32_t x702 = -2420355;
	static int64_t x703 = -132323LL;
	uint8_t x704 = 5U;
	volatile int32_t t171 = -266350607;

    t171 = (((x701|x702)!=x703)+x704);

    if (t171 != 6) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x705 = 38U;
	int64_t x706 = -33021227285LL;
	int32_t x707 = -716795;
	int32_t x708 = -1;
	int32_t t172 = -989247019;

    t172 = (((x705|x706)!=x707)+x708);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x709 = INT8_MIN;
	int64_t x711 = 9987LL;
	int32_t t173 = -11108239;

    t173 = (((x709|x710)!=x711)+x712);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x713 = 4U;
	volatile uint8_t x714 = 0U;
	int8_t x715 = 1;
	static uint64_t x716 = 1288026616LLU;
	volatile uint64_t t174 = 19653519165454LLU;

    t174 = (((x713|x714)!=x715)+x716);

    if (t174 != 1288026617LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x717 = INT64_MIN;
	int8_t x718 = 15;
	int64_t x719 = -309LL;
	uint64_t x720 = 3622895442680LLU;
	volatile uint64_t t175 = 33735966802219LLU;

    t175 = (((x717|x718)!=x719)+x720);

    if (t175 != 3622895442681LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x721 = 20741357U;
	static int8_t x722 = -2;
	int8_t x723 = 20;
	int32_t t176 = -374900430;

    t176 = (((x721|x722)!=x723)+x724);

    if (t176 != -1168) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x725 = -1;
	int64_t x726 = INT64_MIN;
	uint32_t x727 = UINT32_MAX;
	static int64_t x728 = -1LL;
	static volatile int64_t t177 = -163LL;

    t177 = (((x725|x726)!=x727)+x728);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x729 = INT32_MIN;
	static volatile uint32_t x730 = UINT32_MAX;
	volatile uint64_t x731 = 15953571LLU;
	static uint8_t x732 = UINT8_MAX;
	int32_t t178 = -1;

    t178 = (((x729|x730)!=x731)+x732);

    if (t178 != 256) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x735 = -985;
	int8_t x736 = 2;
	static volatile int32_t t179 = 3;

    t179 = (((x733|x734)!=x735)+x736);

    if (t179 != 3) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x737 = 9920634LLU;
	static int16_t x739 = INT16_MAX;
	volatile uint32_t x740 = UINT32_MAX;
	uint32_t t180 = 63153U;

    t180 = (((x737|x738)!=x739)+x740);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x742 = INT32_MAX;
	int16_t x744 = -1;
	volatile int32_t t181 = -3;

    t181 = (((x741|x742)!=x743)+x744);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x745 = INT8_MIN;
	int64_t x746 = INT64_MAX;
	uint8_t x747 = UINT8_MAX;
	static int64_t x748 = INT64_MIN;
	int64_t t182 = 35571376140758LL;

    t182 = (((x745|x746)!=x747)+x748);

    if (t182 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x749 = 212;
	volatile int32_t x750 = INT32_MIN;
	int8_t x751 = 2;
	uint32_t x752 = UINT32_MAX;

    t183 = (((x749|x750)!=x751)+x752);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x753 = 119490621LL;
	uint64_t x754 = 373326227310188LLU;
	int8_t x755 = INT8_MIN;
	static uint16_t x756 = 19U;
	int32_t t184 = 76;

    t184 = (((x753|x754)!=x755)+x756);

    if (t184 != 20) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x757 = UINT8_MAX;
	static int8_t x758 = INT8_MAX;
	volatile uint8_t x759 = UINT8_MAX;
	uint64_t t185 = 332LLU;

    t185 = (((x757|x758)!=x759)+x760);

    if (t185 != 913110692127249LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x761 = 1;
	int8_t x762 = 1;
	int64_t x764 = INT64_MIN;
	int64_t t186 = 962LL;

    t186 = (((x761|x762)!=x763)+x764);

    if (t186 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x765 = UINT32_MAX;
	int64_t x766 = INT64_MAX;
	uint16_t x767 = 23884U;
	int16_t x768 = INT16_MIN;
	int32_t t187 = 47;

    t187 = (((x765|x766)!=x767)+x768);

    if (t187 != -32767) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x769 = -1;
	int32_t x771 = -1;
	volatile int32_t t188 = 25925113;

    t188 = (((x769|x770)!=x771)+x772);

    if (t188 != 15921) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x773 = 731380971U;
	int16_t x775 = INT16_MIN;
	int32_t x776 = INT32_MIN;
	volatile int32_t t189 = -1;

    t189 = (((x773|x774)!=x775)+x776);

    if (t189 != -2147483647) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x779 = 63U;
	static volatile int64_t x780 = INT64_MIN;
	volatile int64_t t190 = 850762135LL;

    t190 = (((x777|x778)!=x779)+x780);

    if (t190 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x782 = UINT64_MAX;
	static uint8_t x784 = 9U;
	static int32_t t191 = -671392409;

    t191 = (((x781|x782)!=x783)+x784);

    if (t191 != 10) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x785 = 6U;
	int8_t x786 = 1;
	int8_t x787 = INT8_MIN;
	int8_t x788 = INT8_MAX;
	volatile int32_t t192 = -1206;

    t192 = (((x785|x786)!=x787)+x788);

    if (t192 != 128) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x789 = 7685U;
	static int16_t x790 = -1;
	uint64_t x791 = 5473LLU;
	int64_t x792 = INT64_MIN;
	volatile int64_t t193 = 3169653279395160LL;

    t193 = (((x789|x790)!=x791)+x792);

    if (t193 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x793 = INT32_MIN;
	int8_t x794 = -53;
	int16_t x795 = -1732;
	uint16_t x796 = UINT16_MAX;

    t194 = (((x793|x794)!=x795)+x796);

    if (t194 != 65536) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x797 = -1;
	volatile uint64_t x798 = 19394942692093LLU;
	int16_t x799 = INT16_MIN;
	uint8_t x800 = 7U;
	int32_t t195 = -23;

    t195 = (((x797|x798)!=x799)+x800);

    if (t195 != 8) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x801 = UINT32_MAX;
	int64_t x802 = 7098060LL;
	volatile int32_t x803 = 7;
	uint64_t x804 = 30093647777LLU;

    t196 = (((x801|x802)!=x803)+x804);

    if (t196 != 30093647778LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x809 = UINT32_MAX;
	int64_t x810 = -379576198820LL;
	static int16_t x812 = INT16_MIN;

    t197 = (((x809|x810)!=x811)+x812);

    if (t197 != -32767) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x815 = INT64_MIN;
	volatile int16_t x816 = INT16_MIN;
	volatile int32_t t198 = -120413559;

    t198 = (((x813|x814)!=x815)+x816);

    if (t198 != -32767) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x817 = -1;
	volatile int16_t x818 = INT16_MIN;
	uint32_t x819 = 17U;
	uint8_t x820 = 16U;
	static volatile int32_t t199 = 10237584;

    t199 = (((x817|x818)!=x819)+x820);

    if (t199 != 17) { NG(); } else { ; }
	
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

