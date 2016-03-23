
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

volatile uint8_t x5 = 9U;
volatile int8_t x8 = 6;
static uint32_t x9 = UINT32_MAX;
int64_t x11 = -1LL;
int64_t x12 = 0LL;
uint32_t x13 = UINT32_MAX;
int16_t x14 = -7789;
int32_t x20 = INT32_MAX;
volatile int32_t t5 = -111507;
static uint16_t x28 = UINT16_MAX;
int16_t x30 = INT16_MIN;
static int32_t x32 = INT32_MAX;
volatile int8_t x34 = 1;
static uint16_t x37 = 12717U;
volatile int8_t x40 = -1;
int64_t x43 = -3153599649LL;
volatile int32_t t11 = -2086931;
volatile int16_t x52 = 774;
uint8_t x58 = 2U;
int32_t t15 = 3;
static uint64_t x65 = UINT64_MAX;
uint64_t x70 = 13117672427LLU;
volatile int32_t t19 = -3;
static volatile uint64_t x82 = 3748829082LLU;
uint8_t x95 = UINT8_MAX;
volatile int32_t t23 = -1;
static volatile int32_t t25 = -15;
static int64_t x109 = INT64_MIN;
volatile uint16_t x111 = 38U;
int8_t x116 = 1;
int32_t t28 = -1933;
static uint16_t x117 = 1684U;
uint8_t x119 = 4U;
static int8_t x120 = -1;
uint32_t x123 = 409007U;
volatile int32_t t30 = -1034999;
int8_t x125 = INT8_MIN;
int32_t x126 = -47489145;
volatile int8_t x128 = -1;
int8_t x141 = INT8_MIN;
volatile int16_t x144 = -1;
static volatile int32_t x151 = -1;
static int8_t x152 = -14;
int32_t x160 = -1;
int32_t x165 = INT32_MAX;
int64_t x169 = -1LL;
int64_t x184 = INT64_MAX;
static volatile int32_t t49 = 48069;
volatile int32_t t50 = 20;
int32_t x208 = INT32_MIN;
static volatile int32_t t53 = -110855;
uint64_t x217 = 3919100929LLU;
uint16_t x219 = 0U;
volatile int32_t x231 = INT32_MIN;
volatile int32_t t57 = -6979060;
int64_t x237 = INT64_MIN;
volatile int16_t x244 = 0;
int32_t x245 = -1;
int64_t x250 = INT64_MAX;
int8_t x255 = 1;
int32_t x256 = -1;
static int16_t x260 = INT16_MIN;
static volatile uint32_t x266 = UINT32_MAX;
uint16_t x267 = 485U;
static int16_t x269 = INT16_MIN;
int16_t x276 = INT16_MAX;
volatile int32_t t68 = -833;
static volatile int32_t t69 = 397436172;
volatile int32_t t72 = -28814265;
int8_t x293 = -1;
uint32_t x294 = 2665U;
static int8_t x303 = -1;
int8_t x306 = INT8_MIN;
static int16_t x310 = 5328;
int8_t x313 = -1;
uint64_t x314 = 60LLU;
static int32_t x316 = INT32_MIN;
volatile int32_t t78 = 5353;
uint8_t x317 = 0U;
int16_t x320 = 968;
static volatile int32_t t81 = 2127;
uint16_t x331 = 620U;
volatile int16_t x332 = INT16_MIN;
volatile uint8_t x333 = 4U;
int64_t x335 = INT64_MAX;
int32_t t83 = 467117646;
int16_t x342 = INT16_MIN;
int64_t x343 = INT64_MAX;
volatile int64_t x347 = INT64_MIN;
int32_t t86 = 502983;
static int32_t t87 = 31;
static int8_t x359 = -1;
volatile uint8_t x361 = 32U;
int32_t t94 = -22226;
int8_t x393 = INT8_MIN;
static uint32_t x395 = 11196U;
volatile int32_t t98 = 524263516;
static int16_t x398 = INT16_MIN;
static uint64_t x404 = UINT64_MAX;
uint16_t x406 = 1266U;
static int64_t x407 = INT64_MIN;
static int8_t x410 = INT8_MIN;
int32_t t102 = 13912500;
int64_t x413 = 0LL;
volatile int8_t x420 = -3;
static int16_t x421 = INT16_MAX;
int16_t x422 = INT16_MIN;
volatile int32_t t107 = -270262353;
volatile int32_t x433 = INT32_MIN;
uint64_t x436 = 9224538193530LLU;
int64_t x447 = -1LL;
static volatile int32_t t111 = 14945564;
uint64_t x453 = UINT64_MAX;
volatile int8_t x457 = INT8_MIN;
int8_t x458 = INT8_MIN;
volatile int8_t x472 = INT8_MIN;
int32_t x473 = 231012236;
volatile int32_t t118 = -46;
uint16_t x477 = 5U;
volatile uint16_t x478 = UINT16_MAX;
uint16_t x479 = UINT16_MAX;
static int64_t x480 = -4076226LL;
uint8_t x482 = 2U;
volatile int32_t t122 = -15190551;
static volatile int16_t x493 = -1;
int64_t x499 = INT64_MAX;
int8_t x505 = 0;
volatile uint32_t x508 = 617749U;
volatile int32_t t127 = 1;
static int8_t x513 = INT8_MAX;
int8_t x514 = INT8_MIN;
static int8_t x515 = -1;
volatile int64_t x517 = -1LL;
static int32_t t129 = 7424489;
uint8_t x521 = UINT8_MAX;
uint32_t x527 = 43910539U;
uint16_t x529 = UINT16_MAX;
int16_t x530 = INT16_MIN;
int8_t x531 = INT8_MAX;
static int32_t x541 = -1;
uint32_t x542 = 61U;
static int16_t x547 = INT16_MAX;
uint16_t x549 = 5335U;
uint8_t x557 = UINT8_MAX;
uint8_t x567 = 1U;
int16_t x568 = INT16_MIN;
static int64_t x573 = -1LL;
static int16_t x574 = 50;
int32_t x575 = INT32_MIN;
static uint8_t x579 = 0U;
int32_t t144 = -496;
uint16_t x587 = 21371U;
static int32_t t146 = -335638;
int32_t x589 = INT32_MAX;
static volatile uint64_t x591 = UINT64_MAX;
int16_t x596 = -1;
int16_t x601 = -1;
int64_t x604 = INT64_MIN;
int16_t x608 = INT16_MIN;
int32_t t151 = 144;
volatile uint8_t x610 = 8U;
uint8_t x613 = UINT8_MAX;
uint64_t x616 = UINT64_MAX;
volatile int64_t x617 = INT64_MAX;
uint8_t x620 = 3U;
volatile uint64_t x627 = 1LLU;
volatile int64_t x635 = 2005095536854097LL;
static int64_t x640 = 897924394272LL;
int32_t x641 = -1623;
uint64_t x642 = 2570932867LLU;
int16_t x647 = -1;
volatile int32_t x649 = INT32_MAX;
volatile int32_t x650 = INT32_MIN;
int8_t x652 = INT8_MAX;
static int32_t x663 = INT32_MIN;
int32_t t166 = 1688;
uint8_t x674 = UINT8_MAX;
static uint32_t x676 = 14751U;
volatile uint32_t x687 = 6U;
volatile int32_t t171 = -1;
int8_t x693 = INT8_MIN;
static uint32_t x694 = 2932081U;
int32_t x696 = INT32_MAX;
static int32_t t173 = -106709725;
int16_t x701 = -178;
volatile uint64_t x705 = 5075724031789022123LLU;
volatile uint8_t x712 = 21U;
volatile int32_t t177 = -663;
int32_t x713 = -60;
volatile int16_t x720 = INT16_MIN;
volatile int32_t x727 = -1;
volatile int32_t t181 = 20165;
volatile int32_t t182 = 15806;
int64_t x734 = INT64_MIN;
uint8_t x735 = 6U;
static int32_t x736 = INT32_MIN;
volatile uint16_t x740 = UINT16_MAX;
volatile uint32_t x741 = 1U;
int8_t x744 = INT8_MIN;
volatile int32_t x747 = -2666;
int32_t x748 = -120793564;
int16_t x750 = 1199;
volatile uint16_t x752 = UINT16_MAX;
uint8_t x754 = UINT8_MAX;
uint64_t x757 = 112480905402865LLU;
volatile int32_t t191 = -12;
uint8_t x769 = UINT8_MAX;
uint16_t x775 = 2757U;
int8_t x780 = INT8_MIN;
uint16_t x783 = UINT16_MAX;
int16_t x785 = -1;
volatile uint64_t x787 = UINT64_MAX;
static volatile int16_t x788 = -1;
volatile uint64_t x799 = 464088404LLU;
volatile uint16_t x800 = 5U;
int32_t t199 = 8606;


void f0(void) {
    	static int64_t x1 = 14468582744622LL;
	uint8_t x2 = 3U;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = 0U;
	static int32_t t0 = -2429623;

    t0 = (x1<=(x2==(x3>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = -1;
	volatile uint32_t x7 = 123U;
	int32_t t1 = 1226;

    t1 = (x5<=(x6==(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = UINT64_MAX;
	volatile int32_t t2 = 374263;

    t2 = (x9<=(x10==(x11>x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x15 = -1;
	uint8_t x16 = 33U;
	volatile int32_t t3 = 150423846;

    t3 = (x13<=(x14==(x15>x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 29U;
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = INT8_MIN;
	static int32_t t4 = 270815;

    t4 = (x17<=(x18==(x19>x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	uint32_t x22 = 73167U;
	int32_t x23 = -1;
	uint8_t x24 = 61U;

    t5 = (x21<=(x22==(x23>x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	uint8_t x26 = UINT8_MAX;
	uint16_t x27 = 12U;
	volatile int32_t t6 = 1154;

    t6 = (x25<=(x26==(x27>x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	uint16_t x31 = 7U;
	int32_t t7 = 10;

    t7 = (x29<=(x30==(x31>x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = UINT32_MAX;
	volatile int64_t x35 = -206857210LL;
	int32_t x36 = INT32_MIN;
	static int32_t t8 = 482;

    t8 = (x33<=(x34==(x35>x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 112U;
	static int8_t x39 = 0;
	int32_t t9 = -98589493;

    t9 = (x37<=(x38==(x39>x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = -6364LL;
	volatile uint64_t x42 = 37099251760LLU;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -235276752;

    t10 = (x41<=(x42==(x43>x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = -3LL;
	int8_t x46 = INT8_MAX;
	int16_t x47 = INT16_MIN;
	static int8_t x48 = 1;

    t11 = (x45<=(x46==(x47>x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 8U;
	uint64_t x50 = UINT64_MAX;
	volatile int64_t x51 = -1LL;
	int32_t t12 = 3608412;

    t12 = (x49<=(x50==(x51>x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	static uint64_t x54 = UINT64_MAX;
	volatile uint16_t x55 = UINT16_MAX;
	volatile uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = -273207231;

    t13 = (x53<=(x54==(x55>x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x57 = INT64_MIN;
	static int16_t x59 = INT16_MAX;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t14 = 1914;

    t14 = (x57<=(x58==(x59>x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 124U;
	int64_t x62 = INT64_MIN;
	int64_t x63 = -1LL;
	int32_t x64 = 28;

    t15 = (x61<=(x62==(x63>x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x66 = INT8_MIN;
	static int32_t x67 = -85;
	static int32_t x68 = -2436;
	volatile int32_t t16 = -119;

    t16 = (x65<=(x66==(x67>x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	uint32_t x71 = 67U;
	volatile uint16_t x72 = UINT16_MAX;
	int32_t t17 = -1;

    t17 = (x69<=(x70==(x71>x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	int32_t x74 = 585949010;
	int8_t x75 = INT8_MAX;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = 16;

    t18 = (x73<=(x74==(x75>x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 865;
	uint32_t x78 = 3U;
	uint64_t x79 = 2LLU;
	static int8_t x80 = -2;

    t19 = (x77<=(x78==(x79>x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 10U;
	static int64_t x83 = INT64_MIN;
	uint32_t x84 = 9U;
	volatile int32_t t20 = 11248497;

    t20 = (x81<=(x82==(x83>x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MAX;
	int32_t x87 = -772799014;
	uint64_t x88 = 29LLU;
	volatile int32_t t21 = 5991;

    t21 = (x85<=(x86==(x87>x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 105U;
	int32_t x90 = INT32_MIN;
	int8_t x91 = 14;
	int16_t x92 = INT16_MIN;
	static volatile int32_t t22 = -5002743;

    t22 = (x89<=(x90==(x91>x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x93 = UINT16_MAX;
	static int8_t x94 = INT8_MAX;
	int32_t x96 = -46385331;

    t23 = (x93<=(x94==(x95>x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x97 = 121U;
	volatile uint8_t x98 = 9U;
	static volatile int32_t x99 = -495;
	int16_t x100 = 1777;
	int32_t t24 = 1670384;

    t24 = (x97<=(x98==(x99>x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	static uint8_t x102 = UINT8_MAX;
	uint32_t x103 = 29130U;
	volatile uint64_t x104 = 8747131606LLU;

    t25 = (x101<=(x102==(x103>x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 3850843;
	int32_t x106 = INT32_MIN;
	int64_t x107 = INT64_MAX;
	static uint32_t x108 = 364536U;
	volatile int32_t t26 = -1;

    t26 = (x105<=(x106==(x107>x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x110 = INT16_MIN;
	int16_t x112 = -52;
	int32_t t27 = 381269844;

    t27 = (x109<=(x110==(x111>x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x113 = 6787087354566LLU;
	int8_t x114 = INT8_MAX;
	static int64_t x115 = 2LL;

    t28 = (x113<=(x114==(x115>x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x118 = 1;
	int32_t t29 = 663844736;

    t29 = (x117<=(x118==(x119>x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x121 = INT8_MIN;
	int32_t x122 = -256972;
	static int8_t x124 = INT8_MIN;

    t30 = (x121<=(x122==(x123>x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x127 = INT64_MIN;
	volatile int32_t t31 = 59315368;

    t31 = (x125<=(x126==(x127>x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 1515784;
	volatile int64_t x130 = 131414LL;
	int32_t x131 = -1;
	static int64_t x132 = INT64_MAX;
	int32_t t32 = 357374;

    t32 = (x129<=(x130==(x131>x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	int64_t x134 = 57LL;
	static int16_t x135 = INT16_MIN;
	volatile uint64_t x136 = UINT64_MAX;
	volatile int32_t t33 = 1;

    t33 = (x133<=(x134==(x135>x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = -98421;
	int8_t x138 = INT8_MIN;
	static int32_t x139 = -508;
	volatile uint8_t x140 = 25U;
	volatile int32_t t34 = -105;

    t34 = (x137<=(x138==(x139>x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x142 = -1;
	int64_t x143 = INT64_MIN;
	volatile int32_t t35 = 24;

    t35 = (x141<=(x142==(x143>x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	static int8_t x146 = INT8_MIN;
	volatile uint8_t x147 = UINT8_MAX;
	static volatile uint16_t x148 = 13U;
	int32_t t36 = -3098;

    t36 = (x145<=(x146==(x147>x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	uint8_t x150 = 1U;
	static int32_t t37 = -6661238;

    t37 = (x149<=(x150==(x151>x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = 62659813825LL;
	int32_t x154 = 6265;
	int64_t x155 = INT64_MAX;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = -11799;

    t38 = (x153<=(x154==(x155>x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MAX;
	int8_t x158 = INT8_MAX;
	int64_t x159 = 1277810818714320LL;
	static int32_t t39 = 1;

    t39 = (x157<=(x158==(x159>x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x161 = 0;
	int16_t x162 = -228;
	int16_t x163 = 238;
	int64_t x164 = -1LL;
	int32_t t40 = 231883333;

    t40 = (x161<=(x162==(x163>x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x166 = 2052691845351307LL;
	uint32_t x167 = 211401144U;
	uint8_t x168 = 2U;
	int32_t t41 = 239476;

    t41 = (x165<=(x166==(x167>x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x170 = 5929U;
	static int32_t x171 = INT32_MIN;
	volatile int64_t x172 = INT64_MIN;
	static volatile int32_t t42 = -61912291;

    t42 = (x169<=(x170==(x171>x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x173 = 20775;
	uint8_t x174 = 15U;
	uint64_t x175 = UINT64_MAX;
	uint8_t x176 = 9U;
	volatile int32_t t43 = 37060932;

    t43 = (x173<=(x174==(x175>x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x177 = 35179972LLU;
	uint32_t x178 = 8284481U;
	static volatile int32_t x179 = 541154;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 194303241;

    t44 = (x177<=(x178==(x179>x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	int64_t x182 = INT64_MIN;
	int16_t x183 = -5;
	int32_t t45 = 20;

    t45 = (x181<=(x182==(x183>x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = 2;
	int16_t x186 = -1;
	volatile int8_t x187 = 0;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = 430;

    t46 = (x185<=(x186==(x187>x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -1;
	volatile uint16_t x190 = 3U;
	int64_t x191 = -1LL;
	static int8_t x192 = -23;
	volatile int32_t t47 = 27;

    t47 = (x189<=(x190==(x191>x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x193 = INT64_MIN;
	volatile int8_t x194 = -1;
	volatile uint16_t x195 = 159U;
	static volatile int64_t x196 = INT64_MIN;
	volatile int32_t t48 = -1;

    t48 = (x193<=(x194==(x195>x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = INT16_MIN;
	static int32_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	int16_t x200 = INT16_MAX;

    t49 = (x197<=(x198==(x199>x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MIN;
	int32_t x203 = INT32_MAX;
	volatile int64_t x204 = 2028525390091353335LL;

    t50 = (x201<=(x202==(x203>x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	uint16_t x206 = UINT16_MAX;
	int8_t x207 = INT8_MAX;
	static int32_t t51 = -15739;

    t51 = (x205<=(x206==(x207>x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 122U;
	int8_t x210 = INT8_MIN;
	int16_t x211 = -1;
	volatile int64_t x212 = INT64_MIN;
	static volatile int32_t t52 = -8;

    t52 = (x209<=(x210==(x211>x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = -1297;
	int8_t x214 = 2;
	int64_t x215 = -1LL;
	volatile int64_t x216 = 10273650LL;

    t53 = (x213<=(x214==(x215>x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x218 = 58912834415829LL;
	static volatile int32_t x220 = INT32_MIN;
	int32_t t54 = -9923766;

    t54 = (x217<=(x218==(x219>x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 773092835007LLU;
	static volatile int16_t x222 = -1;
	uint16_t x223 = UINT16_MAX;
	int32_t x224 = INT32_MAX;
	static volatile int32_t t55 = -219;

    t55 = (x221<=(x222==(x223>x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = 1116;
	int64_t x226 = INT64_MIN;
	uint16_t x227 = 2934U;
	int32_t x228 = INT32_MAX;
	int32_t t56 = 615119;

    t56 = (x225<=(x226==(x227>x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = 1;
	int32_t x230 = INT32_MAX;
	int8_t x232 = -1;

    t57 = (x229<=(x230==(x231>x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	volatile uint8_t x234 = 32U;
	uint8_t x235 = 82U;
	int32_t x236 = -672801835;
	int32_t t58 = 3294;

    t58 = (x233<=(x234==(x235>x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x238 = 16;
	uint32_t x239 = 2U;
	volatile uint8_t x240 = 10U;
	int32_t t59 = 3197;

    t59 = (x237<=(x238==(x239>x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	volatile int16_t x242 = INT16_MIN;
	uint8_t x243 = UINT8_MAX;
	int32_t t60 = -391;

    t60 = (x241<=(x242==(x243>x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x246 = UINT32_MAX;
	int8_t x247 = INT8_MIN;
	volatile int8_t x248 = INT8_MAX;
	volatile int32_t t61 = 433;

    t61 = (x245<=(x246==(x247>x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -840;
	int32_t x251 = 0;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = -318;

    t62 = (x249<=(x250==(x251>x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = UINT32_MAX;
	static int16_t x254 = INT16_MIN;
	int32_t t63 = -87;

    t63 = (x253<=(x254==(x255>x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 17409743U;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = -1LL;
	volatile int32_t t64 = 3;

    t64 = (x257<=(x258==(x259>x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x261 = 133877587555140LLU;
	int64_t x262 = -1LL;
	volatile uint16_t x263 = 18627U;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 114;

    t65 = (x261<=(x262==(x263>x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	volatile int64_t x268 = -1LL;
	static volatile int32_t t66 = -467;

    t66 = (x265<=(x266==(x267>x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = -1;
	uint8_t x271 = 13U;
	int32_t x272 = INT32_MAX;
	static int32_t t67 = -11;

    t67 = (x269<=(x270==(x271>x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x273 = UINT8_MAX;
	int8_t x274 = 1;
	int64_t x275 = -1LL;

    t68 = (x273<=(x274==(x275>x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = INT16_MIN;
	int64_t x278 = -6143784LL;
	int16_t x279 = 22;
	uint8_t x280 = 23U;

    t69 = (x277<=(x278==(x279>x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = -2LL;
	uint8_t x282 = 0U;
	uint32_t x283 = 90272143U;
	uint16_t x284 = 3759U;
	int32_t t70 = -7527515;

    t70 = (x281<=(x282==(x283>x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x285 = INT8_MAX;
	static uint16_t x286 = 2094U;
	static int64_t x287 = INT64_MIN;
	static volatile int16_t x288 = INT16_MAX;
	volatile int32_t t71 = 380;

    t71 = (x285<=(x286==(x287>x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	int32_t x290 = -118753;
	int32_t x291 = -25014650;
	static uint16_t x292 = UINT16_MAX;

    t72 = (x289<=(x290==(x291>x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x295 = INT64_MAX;
	uint16_t x296 = UINT16_MAX;
	int32_t t73 = -111469;

    t73 = (x293<=(x294==(x295>x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 17491340429740LLU;
	int32_t x298 = 49;
	static uint8_t x299 = 14U;
	static uint32_t x300 = UINT32_MAX;
	int32_t t74 = -55;

    t74 = (x297<=(x298==(x299>x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x301 = UINT16_MAX;
	int64_t x302 = 126719788144LL;
	int64_t x304 = INT64_MIN;
	volatile int32_t t75 = 1;

    t75 = (x301<=(x302==(x303>x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x305 = UINT32_MAX;
	volatile int8_t x307 = -1;
	static volatile uint8_t x308 = 119U;
	volatile int32_t t76 = -12;

    t76 = (x305<=(x306==(x307>x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x309 = 2LLU;
	uint64_t x311 = 19725590723575LLU;
	int32_t x312 = -1;
	volatile int32_t t77 = -24;

    t77 = (x309<=(x310==(x311>x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x315 = 1U;

    t78 = (x313<=(x314==(x315>x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x318 = INT32_MIN;
	int8_t x319 = INT8_MAX;
	int32_t t79 = -170173;

    t79 = (x317<=(x318==(x319>x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 3471454U;
	int64_t x322 = -4078621778LL;
	int8_t x323 = 25;
	int32_t x324 = -1;
	volatile int32_t t80 = 122390;

    t80 = (x321<=(x322==(x323>x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	volatile int64_t x326 = INT64_MIN;
	static uint8_t x327 = 3U;
	int8_t x328 = INT8_MIN;

    t81 = (x325<=(x326==(x327>x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	static int16_t x330 = 125;
	volatile int32_t t82 = 0;

    t82 = (x329<=(x330==(x331>x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x334 = UINT8_MAX;
	int8_t x336 = INT8_MAX;

    t83 = (x333<=(x334==(x335>x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -1LL;
	volatile int32_t x338 = INT32_MAX;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = -4;
	static int32_t t84 = -2051880;

    t84 = (x337<=(x338==(x339>x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = INT16_MIN;
	uint32_t x344 = UINT32_MAX;
	volatile int32_t t85 = 6771;

    t85 = (x341<=(x342==(x343>x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -1;
	int16_t x346 = INT16_MAX;
	uint16_t x348 = UINT16_MAX;

    t86 = (x345<=(x346==(x347>x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = -1;
	uint32_t x350 = 7516665U;
	volatile uint8_t x351 = 6U;
	static uint16_t x352 = UINT16_MAX;

    t87 = (x349<=(x350==(x351>x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 351661705692LLU;
	int8_t x354 = 58;
	uint16_t x355 = 144U;
	int32_t x356 = INT32_MAX;
	int32_t t88 = 90385;

    t88 = (x353<=(x354==(x355>x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 3;
	static volatile int8_t x358 = -1;
	int64_t x360 = -1LL;
	int32_t t89 = -13382;

    t89 = (x357<=(x358==(x359>x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x362 = -1LL;
	int64_t x363 = INT64_MIN;
	uint32_t x364 = 1411164169U;
	static volatile int32_t t90 = -129340;

    t90 = (x361<=(x362==(x363>x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	static uint32_t x366 = 62U;
	volatile uint16_t x367 = 1669U;
	volatile uint16_t x368 = 50U;
	int32_t t91 = -13580290;

    t91 = (x365<=(x366==(x367>x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	volatile uint32_t x370 = UINT32_MAX;
	volatile int16_t x371 = INT16_MAX;
	int64_t x372 = INT64_MIN;
	int32_t t92 = 7;

    t92 = (x369<=(x370==(x371>x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = UINT16_MAX;
	int64_t x374 = INT64_MIN;
	volatile uint16_t x375 = 6U;
	static int16_t x376 = INT16_MAX;
	int32_t t93 = 3393;

    t93 = (x373<=(x374==(x375>x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 1615874264LLU;
	uint64_t x378 = 21790644776LLU;
	uint32_t x379 = UINT32_MAX;
	int16_t x380 = INT16_MIN;

    t94 = (x377<=(x378==(x379>x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = INT16_MAX;
	int16_t x382 = INT16_MIN;
	uint64_t x383 = 115014666LLU;
	static int16_t x384 = -1;
	int32_t t95 = -188832369;

    t95 = (x381<=(x382==(x383>x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = -116;
	int32_t x386 = 0;
	int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MAX;
	static int32_t t96 = 25922;

    t96 = (x385<=(x386==(x387>x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -1;
	int64_t x390 = -1LL;
	int32_t x391 = 3555;
	static int64_t x392 = -37794523666996573LL;
	volatile int32_t t97 = 24;

    t97 = (x389<=(x390==(x391>x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x394 = 60U;
	int16_t x396 = -1;

    t98 = (x393<=(x394==(x395>x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	uint64_t x399 = 591699LLU;
	uint64_t x400 = 1296822821LLU;
	int32_t t99 = 131991278;

    t99 = (x397<=(x398==(x399>x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	int32_t x402 = -1;
	int16_t x403 = 26;
	volatile int32_t t100 = -51029;

    t100 = (x401<=(x402==(x403>x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 446U;
	int64_t x408 = INT64_MIN;
	volatile int32_t t101 = -369732;

    t101 = (x405<=(x406==(x407>x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	int16_t x411 = INT16_MIN;
	int8_t x412 = -1;

    t102 = (x409<=(x410==(x411>x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = INT64_MIN;
	uint64_t x415 = UINT64_MAX;
	static volatile uint16_t x416 = 0U;
	static volatile int32_t t103 = 30403262;

    t103 = (x413<=(x414==(x415>x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 2LLU;
	static int8_t x418 = INT8_MIN;
	int64_t x419 = -11280617321297321LL;
	int32_t t104 = -11;

    t104 = (x417<=(x418==(x419>x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x423 = INT64_MIN;
	uint32_t x424 = 135525956U;
	int32_t t105 = 2;

    t105 = (x421<=(x422==(x423>x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MAX;
	static int8_t x426 = INT8_MIN;
	uint8_t x427 = 4U;
	uint16_t x428 = 372U;
	static int32_t t106 = 54534;

    t106 = (x425<=(x426==(x427>x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = UINT16_MAX;
	uint16_t x430 = 2058U;
	int32_t x431 = INT32_MAX;
	volatile int64_t x432 = INT64_MAX;

    t107 = (x429<=(x430==(x431>x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = -1;
	static uint64_t x435 = 10751104LLU;
	volatile int32_t t108 = -1113601;

    t108 = (x433<=(x434==(x435>x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = UINT32_MAX;
	volatile uint16_t x438 = 6604U;
	int64_t x439 = INT64_MIN;
	int8_t x440 = INT8_MIN;
	volatile int32_t t109 = 14824;

    t109 = (x437<=(x438==(x439>x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = UINT32_MAX;
	int32_t x442 = 211360412;
	static uint8_t x443 = UINT8_MAX;
	uint32_t x444 = 2717231U;
	volatile int32_t t110 = -79;

    t110 = (x441<=(x442==(x443>x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	uint8_t x446 = 1U;
	static uint64_t x448 = 16285334870LLU;

    t111 = (x445<=(x446==(x447>x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	uint64_t x450 = 2171089899167648075LLU;
	int8_t x451 = -1;
	int8_t x452 = -1;
	int32_t t112 = 926;

    t112 = (x449<=(x450==(x451>x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x454 = UINT8_MAX;
	static int8_t x455 = INT8_MIN;
	uint8_t x456 = 0U;
	volatile int32_t t113 = 42429899;

    t113 = (x453<=(x454==(x455>x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x459 = 140287571311311353LLU;
	int32_t x460 = INT32_MAX;
	volatile int32_t t114 = 13368;

    t114 = (x457<=(x458==(x459>x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x461 = UINT8_MAX;
	int64_t x462 = -32LL;
	volatile uint32_t x463 = 479856U;
	int32_t x464 = INT32_MAX;
	int32_t t115 = 14828;

    t115 = (x461<=(x462==(x463>x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = 7248871;
	int32_t x466 = INT32_MIN;
	int64_t x467 = 2932242271LL;
	volatile int16_t x468 = 0;
	volatile int32_t t116 = 1;

    t116 = (x465<=(x466==(x467>x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = -236;
	static int8_t x470 = INT8_MAX;
	int16_t x471 = INT16_MAX;
	int32_t t117 = -15036;

    t117 = (x469<=(x470==(x471>x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x474 = UINT64_MAX;
	int64_t x475 = -1LL;
	int32_t x476 = INT32_MIN;

    t118 = (x473<=(x474==(x475>x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t t119 = 68139;

    t119 = (x477<=(x478==(x479>x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint8_t x481 = 9U;
	int32_t x483 = -195686;
	int64_t x484 = INT64_MIN;
	volatile int32_t t120 = -13792;

    t120 = (x481<=(x482==(x483>x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	uint16_t x486 = 9U;
	int16_t x487 = -1;
	static int64_t x488 = -1LL;
	int32_t t121 = 9;

    t121 = (x485<=(x486==(x487>x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 0U;
	volatile uint64_t x490 = 1877367LLU;
	static int8_t x491 = INT8_MIN;
	int64_t x492 = INT64_MIN;

    t122 = (x489<=(x490==(x491>x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x494 = INT64_MAX;
	int16_t x495 = -78;
	int64_t x496 = INT64_MIN;
	int32_t t123 = -22102728;

    t123 = (x493<=(x494==(x495>x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = UINT8_MAX;
	int32_t x498 = -1;
	int8_t x500 = INT8_MAX;
	int32_t t124 = 12567;

    t124 = (x497<=(x498==(x499>x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = 230;
	uint8_t x502 = 93U;
	int8_t x503 = INT8_MAX;
	uint64_t x504 = 3451413597541LLU;
	volatile int32_t t125 = 721057576;

    t125 = (x501<=(x502==(x503>x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x506 = INT16_MIN;
	static int64_t x507 = INT64_MIN;
	int32_t t126 = -606051874;

    t126 = (x505<=(x506==(x507>x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x509 = INT64_MAX;
	int8_t x510 = INT8_MIN;
	static int32_t x511 = INT32_MIN;
	int32_t x512 = 1730;

    t127 = (x509<=(x510==(x511>x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x516 = INT16_MIN;
	int32_t t128 = 7343741;

    t128 = (x513<=(x514==(x515>x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x518 = INT64_MAX;
	static int64_t x519 = INT64_MAX;
	int16_t x520 = -1;

    t129 = (x517<=(x518==(x519>x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x522 = -1;
	int8_t x523 = -1;
	static volatile int32_t x524 = 415127711;
	static volatile int32_t t130 = -42769808;

    t130 = (x521<=(x522==(x523>x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	int64_t x526 = -107885817680560LL;
	uint8_t x528 = 61U;
	static volatile int32_t t131 = -14020891;

    t131 = (x525<=(x526==(x527>x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x532 = 537473LLU;
	int32_t t132 = 29156;

    t132 = (x529<=(x530==(x531>x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x533 = -1;
	int8_t x534 = 1;
	uint16_t x535 = UINT16_MAX;
	volatile int16_t x536 = INT16_MIN;
	volatile int32_t t133 = -2;

    t133 = (x533<=(x534==(x535>x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = INT16_MIN;
	volatile int32_t x538 = 177;
	static uint8_t x539 = UINT8_MAX;
	static uint8_t x540 = 1U;
	volatile int32_t t134 = 3227;

    t134 = (x537<=(x538==(x539>x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x543 = INT32_MIN;
	int32_t x544 = INT32_MIN;
	int32_t t135 = 5112;

    t135 = (x541<=(x542==(x543>x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = 13;
	int32_t x546 = -177396425;
	volatile uint16_t x548 = 24284U;
	static int32_t t136 = -171;

    t136 = (x545<=(x546==(x547>x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x550 = 322U;
	static uint8_t x551 = 16U;
	volatile int16_t x552 = INT16_MIN;
	static volatile int32_t t137 = -1697203;

    t137 = (x549<=(x550==(x551>x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	uint16_t x554 = 1U;
	volatile int8_t x555 = -1;
	uint8_t x556 = 126U;
	static int32_t t138 = -177;

    t138 = (x553<=(x554==(x555>x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x558 = -1LL;
	uint64_t x559 = UINT64_MAX;
	int32_t x560 = 8934;
	volatile int32_t t139 = 925854;

    t139 = (x557<=(x558==(x559>x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 52749LLU;
	uint8_t x562 = UINT8_MAX;
	int8_t x563 = INT8_MIN;
	volatile int32_t x564 = -15462255;
	int32_t t140 = -1734482;

    t140 = (x561<=(x562==(x563>x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 0U;
	int16_t x566 = 2;
	int32_t t141 = -8;

    t141 = (x565<=(x566==(x567>x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 253U;
	uint32_t x570 = 440U;
	int32_t x571 = 76842;
	uint32_t x572 = 3U;
	int32_t t142 = -764;

    t142 = (x569<=(x570==(x571>x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x576 = -241213LL;
	int32_t t143 = -2926;

    t143 = (x573<=(x574==(x575>x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 60129111U;
	static uint16_t x578 = UINT16_MAX;
	int8_t x580 = 38;

    t144 = (x577<=(x578==(x579>x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = UINT32_MAX;
	int32_t x582 = -8;
	int64_t x583 = -34351621932LL;
	int64_t x584 = INT64_MIN;
	int32_t t145 = 1;

    t145 = (x581<=(x582==(x583>x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = -1LL;
	uint8_t x586 = UINT8_MAX;
	volatile int64_t x588 = INT64_MIN;

    t146 = (x585<=(x586==(x587>x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x590 = 259057LLU;
	static int32_t x592 = INT32_MIN;
	volatile int32_t t147 = 179712;

    t147 = (x589<=(x590==(x591>x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MAX;
	int8_t x594 = INT8_MAX;
	volatile int16_t x595 = INT16_MAX;
	int32_t t148 = -38568;

    t148 = (x593<=(x594==(x595>x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x597 = 14381963U;
	volatile int16_t x598 = 415;
	int16_t x599 = INT16_MIN;
	uint32_t x600 = 6147636U;
	volatile int32_t t149 = -17740;

    t149 = (x597<=(x598==(x599>x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x602 = UINT16_MAX;
	int32_t x603 = INT32_MIN;
	static volatile int32_t t150 = -2986;

    t150 = (x601<=(x602==(x603>x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	volatile int16_t x606 = -1;
	static int16_t x607 = 150;

    t151 = (x605<=(x606==(x607>x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	int32_t x611 = INT32_MIN;
	static int16_t x612 = INT16_MIN;
	int32_t t152 = -2050678;

    t152 = (x609<=(x610==(x611>x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x614 = 5465U;
	int16_t x615 = INT16_MAX;
	int32_t t153 = -1808;

    t153 = (x613<=(x614==(x615>x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = -1LL;
	static int16_t x619 = 0;
	int32_t t154 = -7;

    t154 = (x617<=(x618==(x619>x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MAX;
	int64_t x622 = INT64_MIN;
	uint16_t x623 = UINT16_MAX;
	uint32_t x624 = 473U;
	volatile int32_t t155 = 91438;

    t155 = (x621<=(x622==(x623>x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = INT8_MIN;
	volatile int64_t x626 = 492598LL;
	uint8_t x628 = 1U;
	static int32_t t156 = -47959;

    t156 = (x625<=(x626==(x627>x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 51;
	int32_t x630 = 912594504;
	static int16_t x631 = INT16_MAX;
	int16_t x632 = INT16_MAX;
	int32_t t157 = -13094;

    t157 = (x629<=(x630==(x631>x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x633 = 34;
	uint16_t x634 = 114U;
	uint64_t x636 = 7376LLU;
	int32_t t158 = -540;

    t158 = (x633<=(x634==(x635>x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -1;
	int64_t x638 = INT64_MAX;
	uint16_t x639 = 684U;
	volatile int32_t t159 = 44216775;

    t159 = (x637<=(x638==(x639>x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x643 = UINT16_MAX;
	volatile uint8_t x644 = 40U;
	volatile int32_t t160 = -221600860;

    t160 = (x641<=(x642==(x643>x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	int32_t x646 = INT32_MAX;
	uint32_t x648 = 1U;
	volatile int32_t t161 = -961563093;

    t161 = (x645<=(x646==(x647>x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x651 = INT16_MIN;
	static int32_t t162 = -128;

    t162 = (x649<=(x650==(x651>x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = -1;
	volatile int32_t x654 = INT32_MIN;
	int64_t x655 = INT64_MIN;
	static uint64_t x656 = UINT64_MAX;
	static int32_t t163 = -167327409;

    t163 = (x653<=(x654==(x655>x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = -64165;
	uint32_t x658 = UINT32_MAX;
	static uint16_t x659 = UINT16_MAX;
	int8_t x660 = INT8_MIN;
	int32_t t164 = 507087;

    t164 = (x657<=(x658==(x659>x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = UINT64_MAX;
	int16_t x662 = INT16_MIN;
	int16_t x664 = -1;
	int32_t t165 = 3;

    t165 = (x661<=(x662==(x663>x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	static int64_t x666 = 94555907LL;
	volatile uint32_t x667 = UINT32_MAX;
	static volatile int8_t x668 = INT8_MIN;

    t166 = (x665<=(x666==(x667>x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x669 = INT8_MIN;
	int16_t x670 = -2;
	static int64_t x671 = INT64_MIN;
	int8_t x672 = INT8_MAX;
	int32_t t167 = -16876;

    t167 = (x669<=(x670==(x671>x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = -56;
	static volatile int32_t x675 = 15;
	volatile int32_t t168 = 15700835;

    t168 = (x673<=(x674==(x675>x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x677 = -1;
	int16_t x678 = -1;
	int8_t x679 = INT8_MAX;
	volatile uint64_t x680 = UINT64_MAX;
	volatile int32_t t169 = -11917;

    t169 = (x677<=(x678==(x679>x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 187055LLU;
	int64_t x682 = INT64_MIN;
	volatile uint8_t x683 = 6U;
	static int32_t x684 = INT32_MIN;
	volatile int32_t t170 = -457089681;

    t170 = (x681<=(x682==(x683>x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = UINT8_MAX;
	int32_t x686 = INT32_MAX;
	uint32_t x688 = 839628U;

    t171 = (x685<=(x686==(x687>x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x689 = 9587U;
	int16_t x690 = INT16_MIN;
	int8_t x691 = -1;
	int32_t x692 = INT32_MIN;
	int32_t t172 = 79;

    t172 = (x689<=(x690==(x691>x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x695 = 14U;

    t173 = (x693<=(x694==(x695>x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = 103969;
	int8_t x698 = -1;
	static uint64_t x699 = 49592634895LLU;
	volatile int16_t x700 = INT16_MAX;
	volatile int32_t t174 = 2635855;

    t174 = (x697<=(x698==(x699>x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x702 = -1;
	int32_t x703 = -126457327;
	static volatile int16_t x704 = 10;
	int32_t t175 = 0;

    t175 = (x701<=(x702==(x703>x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x706 = 1U;
	static int8_t x707 = INT8_MIN;
	int32_t x708 = INT32_MAX;
	static int32_t t176 = -18174157;

    t176 = (x705<=(x706==(x707>x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = 1586;
	int8_t x710 = 1;
	static int32_t x711 = -1;

    t177 = (x709<=(x710==(x711>x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x714 = INT16_MIN;
	static int64_t x715 = 2805496160461452047LL;
	int8_t x716 = INT8_MAX;
	static volatile int32_t t178 = -98974252;

    t178 = (x713<=(x714==(x715>x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x717 = 36U;
	uint16_t x718 = UINT16_MAX;
	int16_t x719 = INT16_MIN;
	volatile int32_t t179 = 571755858;

    t179 = (x717<=(x718==(x719>x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 41966609073324811LLU;
	int64_t x722 = INT64_MIN;
	int64_t x723 = -432LL;
	int8_t x724 = -3;
	int32_t t180 = 3246943;

    t180 = (x721<=(x722==(x723>x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x725 = INT16_MIN;
	volatile uint16_t x726 = UINT16_MAX;
	int16_t x728 = INT16_MIN;

    t181 = (x725<=(x726==(x727>x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	int16_t x730 = 28;
	uint64_t x731 = 37054176788071LLU;
	uint16_t x732 = UINT16_MAX;

    t182 = (x729<=(x730==(x731>x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	volatile int32_t t183 = 2599915;

    t183 = (x733<=(x734==(x735>x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = INT16_MAX;
	static volatile int16_t x738 = -5;
	int8_t x739 = INT8_MAX;
	volatile int32_t t184 = 14889;

    t184 = (x737<=(x738==(x739>x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x742 = 1U;
	int8_t x743 = INT8_MIN;
	int32_t t185 = 160879;

    t185 = (x741<=(x742==(x743>x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -126;
	volatile uint64_t x746 = 2038LLU;
	volatile int32_t t186 = -90365344;

    t186 = (x745<=(x746==(x747>x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = -1LL;
	int16_t x751 = INT16_MIN;
	int32_t t187 = 78942579;

    t187 = (x749<=(x750==(x751>x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint64_t x753 = 2671LLU;
	int32_t x755 = -1;
	static uint64_t x756 = 6LLU;
	static int32_t t188 = -122074925;

    t188 = (x753<=(x754==(x755>x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x758 = -1LL;
	volatile int32_t x759 = INT32_MAX;
	int32_t x760 = 32990;
	int32_t t189 = -2;

    t189 = (x757<=(x758==(x759>x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = UINT32_MAX;
	static volatile uint16_t x762 = UINT16_MAX;
	int64_t x763 = -299949576162715LL;
	uint64_t x764 = 4152014755887018LLU;
	int32_t t190 = 9974800;

    t190 = (x761<=(x762==(x763>x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x765 = UINT32_MAX;
	static uint8_t x766 = 6U;
	uint32_t x767 = UINT32_MAX;
	volatile int16_t x768 = INT16_MAX;

    t191 = (x765<=(x766==(x767>x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x770 = UINT64_MAX;
	volatile uint64_t x771 = 102LLU;
	int8_t x772 = INT8_MIN;
	static volatile int32_t t192 = 893;

    t192 = (x769<=(x770==(x771>x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = INT32_MAX;
	int8_t x774 = INT8_MAX;
	int32_t x776 = INT32_MIN;
	volatile int32_t t193 = 4752;

    t193 = (x773<=(x774==(x775>x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MAX;
	volatile uint16_t x778 = 92U;
	int8_t x779 = INT8_MIN;
	volatile int32_t t194 = 213;

    t194 = (x777<=(x778==(x779>x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	int32_t x782 = 26832;
	int64_t x784 = 83350619LL;
	int32_t t195 = -1;

    t195 = (x781<=(x782==(x783>x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x786 = INT64_MAX;
	volatile int32_t t196 = -212;

    t196 = (x785<=(x786==(x787>x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 63U;
	volatile int32_t x790 = INT32_MIN;
	static int32_t x791 = INT32_MIN;
	uint16_t x792 = 8081U;
	volatile int32_t t197 = -13;

    t197 = (x789<=(x790==(x791>x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x793 = INT32_MAX;
	int32_t x794 = -1;
	volatile uint32_t x795 = 3U;
	volatile int8_t x796 = INT8_MAX;
	int32_t t198 = -29;

    t198 = (x793<=(x794==(x795>x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint64_t x797 = 8301582259029391LLU;
	int32_t x798 = 6072317;

    t199 = (x797<=(x798==(x799>x800)));

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

