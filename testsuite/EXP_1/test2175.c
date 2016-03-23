
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

volatile uint16_t x9 = 1U;
int16_t x11 = INT16_MAX;
uint8_t x23 = 0U;
volatile int8_t x34 = -1;
int8_t x37 = INT8_MIN;
volatile int32_t x39 = INT32_MAX;
volatile uint32_t t5 = 470325U;
uint64_t x41 = UINT64_MAX;
static uint64_t x42 = UINT64_MAX;
int16_t x53 = INT16_MIN;
uint8_t x61 = UINT8_MAX;
int32_t x62 = INT32_MIN;
int16_t x67 = INT16_MAX;
uint64_t t12 = 7288729LLU;
int8_t x71 = INT8_MIN;
static int32_t x75 = 142000;
volatile int64_t t15 = -226287LL;
int16_t x85 = -1;
int8_t x87 = INT8_MIN;
uint64_t x88 = UINT64_MAX;
uint8_t x101 = UINT8_MAX;
uint64_t x102 = 126LLU;
int32_t x110 = INT32_MIN;
int64_t t21 = -23035970187LL;
int32_t x118 = INT32_MIN;
int8_t x121 = INT8_MAX;
volatile int64_t x131 = 244LL;
volatile int64_t t25 = 1522LL;
int8_t x135 = 7;
int8_t x139 = 7;
static uint8_t x146 = 3U;
int8_t x150 = 0;
int16_t x157 = INT16_MAX;
uint64_t t32 = 249091141232175577LLU;
volatile int16_t x171 = INT16_MIN;
int64_t x175 = 47LL;
uint8_t x176 = 1U;
volatile int64_t t34 = 7716815549566LL;
uint8_t x177 = 4U;
int16_t x182 = INT16_MIN;
volatile int8_t x187 = INT8_MIN;
int16_t x191 = INT16_MIN;
volatile int32_t x203 = 22362;
int64_t t41 = -413029383851673LL;
uint32_t x205 = 446212U;
int8_t x206 = INT8_MIN;
uint16_t x215 = 3U;
int16_t x227 = 0;
uint8_t x228 = UINT8_MAX;
volatile int16_t x231 = INT16_MAX;
volatile uint32_t t45 = 127U;
volatile int32_t x234 = INT32_MAX;
volatile int32_t t47 = 906;
volatile int16_t x244 = -885;
uint64_t x247 = 26LLU;
static uint64_t t49 = 15501920877399LLU;
uint64_t x250 = UINT64_MAX;
uint64_t t50 = 1777061199LLU;
int8_t x253 = INT8_MIN;
static volatile uint32_t t51 = 185U;
uint64_t x258 = UINT64_MAX;
volatile int16_t x261 = -5481;
int8_t x266 = INT8_MAX;
int32_t t54 = -5563;
static int64_t x272 = -1LL;
uint32_t x274 = 70U;
static volatile uint64_t x277 = 1600107803507829LLU;
int8_t x299 = -1;
volatile int32_t x303 = INT32_MIN;
int32_t x311 = 4704078;
static uint64_t x312 = 635274378848783987LLU;
static int64_t x333 = -1LL;
uint64_t x339 = 62311308117484LLU;
int64_t t70 = 15795851LL;
int16_t x351 = INT16_MIN;
volatile uint32_t t71 = 51555763U;
int8_t x357 = -1;
int16_t x361 = INT16_MIN;
int8_t x366 = -1;
int16_t x367 = INT16_MIN;
int16_t x375 = INT16_MIN;
int32_t x376 = INT32_MAX;
int8_t x382 = INT8_MAX;
volatile uint32_t t80 = 438550350U;
int64_t x398 = -48725026604948LL;
static int32_t x400 = 317726;
int8_t x411 = INT8_MAX;
int16_t x416 = -826;
int8_t x427 = -3;
static int32_t x435 = 8095;
int16_t x442 = -690;
static int8_t x445 = INT8_MAX;
int16_t x471 = INT16_MAX;
int32_t x475 = INT32_MIN;
int64_t x493 = INT64_MAX;
uint32_t x496 = 2047800518U;
int16_t x500 = 174;
volatile int16_t x503 = INT16_MIN;
static uint64_t t103 = 387133480LLU;
static int32_t x509 = -86875429;
int16_t x514 = INT16_MAX;
int16_t x517 = 1;
uint16_t x520 = 3U;
int32_t x522 = INT32_MAX;
int64_t x524 = -1LL;
static int64_t t108 = 1107319139310185813LL;
int16_t x532 = -1;
uint32_t x549 = 4447U;
int8_t x552 = INT8_MIN;
volatile uint32_t t114 = 27U;
uint8_t x554 = 28U;
int16_t x555 = INT16_MIN;
int32_t x557 = -139;
volatile int8_t x560 = -14;
int16_t x563 = 0;
volatile int64_t x565 = INT64_MIN;
static uint8_t x567 = 0U;
uint32_t x568 = UINT32_MAX;
int32_t x575 = -1;
static int32_t x579 = -1;
static int8_t x581 = -1;
uint64_t x590 = 300142374LLU;
int8_t x592 = INT8_MIN;
static volatile uint64_t t123 = 295881559001989881LLU;
static int64_t x595 = INT64_MAX;
static uint8_t x601 = 48U;
volatile int16_t x602 = 378;
volatile uint8_t x604 = 102U;
int8_t x605 = INT8_MIN;
static int8_t x612 = INT8_MIN;
uint64_t t129 = 128671882LLU;
uint16_t x618 = 4813U;
int8_t x620 = 44;
uint16_t x623 = UINT16_MAX;
volatile int32_t t131 = 2037;
int32_t x630 = 1897733;
static int64_t x631 = INT64_MAX;
uint8_t x635 = UINT8_MAX;
volatile uint64_t x639 = 17206LLU;
static volatile int8_t x640 = INT8_MIN;
int32_t t136 = -2677025;
int16_t x650 = INT16_MIN;
uint8_t x655 = 2U;
int32_t x656 = -10256222;
uint32_t t141 = 1U;
static uint64_t x671 = 1161746941LLU;
int32_t x674 = -239;
int64_t x675 = -1LL;
int64_t t143 = -1822755210170145LL;
volatile uint8_t x686 = 20U;
int32_t x687 = 1765;
int32_t x697 = -7638950;
static int64_t x702 = 1LL;
int8_t x704 = -1;
int8_t x708 = INT8_MAX;
int64_t t151 = -94374LL;
int64_t x710 = INT64_MIN;
volatile int8_t x715 = INT8_MIN;
volatile int64_t x716 = INT64_MIN;
int8_t x721 = INT8_MAX;
int16_t x737 = -1;
int64_t x738 = 12293228313LL;
volatile int64_t t157 = 443511LL;
volatile int64_t x741 = -1LL;
volatile int8_t x743 = -14;
int8_t x744 = INT8_MIN;
static volatile int64_t t158 = -58883641LL;
uint32_t x745 = 1073U;
int64_t x748 = -657LL;
int64_t x751 = -1LL;
int64_t t161 = 3010LL;
int16_t x762 = -10292;
uint64_t x764 = 2LLU;
uint64_t t162 = 6329861573339083LLU;
int64_t t163 = -131535629664946LL;
static int8_t x773 = -15;
int8_t x776 = -1;
static int8_t x779 = -23;
int64_t x785 = INT64_MIN;
int8_t x787 = INT8_MIN;
int8_t x797 = INT8_MAX;
static volatile int32_t t171 = -1923;
int64_t x816 = INT64_MIN;
volatile int64_t t173 = 8144520124898LL;
int64_t t175 = 922010LL;
int32_t x827 = INT32_MAX;
static int8_t x828 = INT8_MIN;
volatile int64_t t176 = 40152LL;
int8_t x829 = INT8_MAX;
static uint8_t x830 = 8U;
static int32_t x834 = INT32_MIN;
volatile int64_t x835 = 11731LL;
int64_t t178 = -4354626566LL;
uint64_t x843 = 103483462176LLU;
static int32_t x847 = INT32_MIN;
volatile uint16_t x849 = UINT16_MAX;
uint16_t x865 = 298U;
int32_t x869 = -1;
int16_t x873 = INT16_MIN;
volatile uint8_t x881 = 5U;
static uint16_t x891 = 3029U;
static uint64_t x899 = 1526990LLU;
uint8_t x911 = 54U;
int16_t x917 = INT16_MIN;
int8_t x919 = 1;


void f0(void) {
    	int16_t x5 = INT16_MIN;
	int64_t x6 = 90147383LL;
	int16_t x7 = INT16_MIN;
	volatile uint32_t x8 = UINT32_MAX;
	static volatile int64_t t0 = -83332136LL;

    t0 = (((x5&x6)-x7)%x8);

    if (t0 != 90177536LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x10 = -1LL;
	volatile uint8_t x12 = UINT8_MAX;
	int64_t t1 = 31135373LL;

    t1 = (((x9&x10)-x11)%x12);

    if (t1 != -126LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x17 = 62525U;
	static int16_t x18 = INT16_MAX;
	int32_t x19 = -1;
	uint16_t x20 = 225U;
	volatile uint32_t t2 = 30600U;

    t2 = (((x17&x18)-x19)%x20);

    if (t2 != 58U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = 52770366;
	int64_t x22 = INT64_MIN;
	int16_t x24 = INT16_MIN;
	int64_t t3 = -3197258691LL;

    t3 = (((x21&x22)-x23)%x24);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x33 = -1LL;
	volatile int32_t x35 = -1;
	int64_t x36 = 61374148963LL;
	volatile int64_t t4 = -1794591285536LL;

    t4 = (((x33&x34)-x35)%x36);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x38 = 116806U;
	uint8_t x40 = UINT8_MAX;

    t5 = (((x37&x38)-x39)%x40);

    if (t5 != 75U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x43 = UINT64_MAX;
	int8_t x44 = INT8_MIN;
	uint64_t t6 = 210715346LLU;

    t6 = (((x41&x42)-x43)%x44);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x45 = 1U;
	int32_t x46 = 30;
	uint64_t x47 = 728552814484254344LLU;
	volatile int64_t x48 = INT64_MAX;
	uint64_t t7 = 2LLU;

    t7 = (((x45&x46)-x47)%x48);

    if (t7 != 8494819222370521465LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x49 = INT16_MAX;
	int32_t x50 = INT32_MIN;
	int8_t x51 = INT8_MIN;
	int64_t x52 = INT64_MIN;
	int64_t t8 = -43058LL;

    t8 = (((x49&x50)-x51)%x52);

    if (t8 != 128LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x54 = 94733507;
	static volatile int8_t x55 = INT8_MIN;
	static int8_t x56 = -63;
	volatile int32_t t9 = -252;

    t9 = (((x53&x54)-x55)%x56);

    if (t9 != 9) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x57 = INT32_MIN;
	int32_t x58 = -62771226;
	volatile int8_t x59 = INT8_MIN;
	static volatile int8_t x60 = INT8_MAX;
	int32_t t10 = -86639;

    t10 = (((x57&x58)-x59)%x60);

    if (t10 != -7) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x63 = INT64_MAX;
	volatile uint8_t x64 = UINT8_MAX;
	volatile int64_t t11 = 922166928262361LL;

    t11 = (((x61&x62)-x63)%x64);

    if (t11 != -127LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x65 = 55728619793957300LLU;
	static int16_t x66 = 1;
	static int16_t x68 = INT16_MIN;

    t12 = (((x65&x66)-x67)%x68);

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x69 = -98;
	int16_t x70 = INT16_MIN;
	int16_t x72 = -246;
	volatile int32_t t13 = 21570;

    t13 = (((x69&x70)-x71)%x72);

    if (t13 != -168) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x73 = 0;
	int32_t x74 = 2545;
	int8_t x76 = 22;
	int32_t t14 = -2;

    t14 = (((x73&x74)-x75)%x76);

    if (t14 != -12) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x81 = 1;
	int64_t x82 = INT64_MAX;
	static volatile int32_t x83 = INT32_MIN;
	int16_t x84 = INT16_MIN;

    t15 = (((x81&x82)-x83)%x84);

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x86 = 1U;
	static uint64_t t16 = 125629887114945LLU;

    t16 = (((x85&x86)-x87)%x88);

    if (t16 != 129LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x89 = UINT8_MAX;
	static volatile int16_t x90 = INT16_MIN;
	static uint32_t x91 = UINT32_MAX;
	static int64_t x92 = 127LL;
	int64_t t17 = -3842152548273291405LL;

    t17 = (((x89&x90)-x91)%x92);

    if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x97 = 5146367922LL;
	int16_t x98 = -1;
	uint16_t x99 = UINT16_MAX;
	static int8_t x100 = INT8_MAX;
	volatile int64_t t18 = 20426707962LL;

    t18 = (((x97&x98)-x99)%x100);

    if (t18 != 5LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x103 = UINT16_MAX;
	int8_t x104 = -1;
	uint64_t t19 = 252931016LLU;

    t19 = (((x101&x102)-x103)%x104);

    if (t19 != 18446744073709486207LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x109 = INT8_MIN;
	uint32_t x111 = 619U;
	int8_t x112 = -1;
	volatile uint32_t t20 = 4132836U;

    t20 = (((x109&x110)-x111)%x112);

    if (t20 != 2147483029U) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x113 = UINT32_MAX;
	volatile int64_t x114 = -1LL;
	int32_t x115 = INT32_MAX;
	static uint32_t x116 = 900574U;

    t21 = (((x113&x114)-x115)%x116);

    if (t21 != 515232LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x117 = 8911980615087963LL;
	static int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MIN;
	static volatile int64_t t22 = -12049660LL;

    t22 = (((x117&x118)-x119)%x120);

    if (t22 != 8911979829821440LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x122 = INT16_MIN;
	uint64_t x123 = 22110186058126LLU;
	volatile int16_t x124 = -1;
	uint64_t t23 = 144LLU;

    t23 = (((x121&x122)-x123)%x124);

    if (t23 != 18446721963523493490LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x125 = -42372415092LL;
	int16_t x126 = INT16_MAX;
	static uint64_t x127 = 59629373393128LLU;
	static volatile int32_t x128 = INT32_MIN;
	uint64_t t24 = 141424960LLU;

    t24 = (((x125&x126)-x127)%x128);

    if (t24 != 18446684444336175268LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x129 = -1LL;
	int8_t x130 = -39;
	volatile int8_t x132 = -1;

    t25 = (((x129&x130)-x131)%x132);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x133 = 7824;
	static int64_t x134 = -1LL;
	volatile int16_t x136 = -1;
	volatile int64_t t26 = 114524359LL;

    t26 = (((x133&x134)-x135)%x136);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x137 = 7;
	uint8_t x138 = UINT8_MAX;
	uint8_t x140 = 8U;
	volatile int32_t t27 = -1314;

    t27 = (((x137&x138)-x139)%x140);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x145 = INT64_MIN;
	int32_t x147 = INT32_MIN;
	int8_t x148 = -1;
	int64_t t28 = 15616150434546217LL;

    t28 = (((x145&x146)-x147)%x148);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x149 = 13463965LLU;
	int16_t x151 = 7908;
	int8_t x152 = -1;
	uint64_t t29 = 10418704479901LLU;

    t29 = (((x149&x150)-x151)%x152);

    if (t29 != 18446744073709543708LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x153 = INT16_MAX;
	static uint16_t x154 = UINT16_MAX;
	int8_t x155 = -14;
	uint8_t x156 = UINT8_MAX;
	int32_t t30 = 107;

    t30 = (((x153&x154)-x155)%x156);

    if (t30 != 141) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x158 = INT16_MIN;
	volatile int16_t x159 = INT16_MIN;
	volatile int16_t x160 = 6;
	volatile int32_t t31 = 6329;

    t31 = (((x157&x158)-x159)%x160);

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x165 = UINT32_MAX;
	int32_t x166 = -120101282;
	volatile uint16_t x167 = 25291U;
	uint64_t x168 = 42786788884LLU;

    t32 = (((x165&x166)-x167)%x168);

    if (t32 != 4174840723LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x169 = 477U;
	int8_t x170 = -1;
	static int32_t x172 = INT32_MIN;
	volatile int32_t t33 = -129;

    t33 = (((x169&x170)-x171)%x172);

    if (t33 != 33245) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x173 = INT16_MIN;
	static int8_t x174 = INT8_MIN;

    t34 = (((x173&x174)-x175)%x176);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x178 = 5;
	static int64_t x179 = -231244LL;
	int16_t x180 = INT16_MIN;
	volatile int64_t t35 = -427281LL;

    t35 = (((x177&x178)-x179)%x180);

    if (t35 != 1872LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x181 = -219;
	uint8_t x183 = UINT8_MAX;
	uint8_t x184 = 60U;
	int32_t t36 = 38014;

    t36 = (((x181&x182)-x183)%x184);

    if (t36 != -23) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x185 = INT8_MIN;
	static volatile int32_t x186 = -838;
	static int32_t x188 = 1720;
	volatile int32_t t37 = 166;

    t37 = (((x185&x186)-x187)%x188);

    if (t37 != -768) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x189 = UINT32_MAX;
	int8_t x190 = INT8_MIN;
	int8_t x192 = -1;
	uint32_t t38 = 81074U;

    t38 = (((x189&x190)-x191)%x192);

    if (t38 != 32640U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x193 = 79U;
	int32_t x194 = -1;
	int8_t x195 = -1;
	static uint32_t x196 = 3U;
	uint32_t t39 = 968U;

    t39 = (((x193&x194)-x195)%x196);

    if (t39 != 2U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x197 = 507604U;
	static int64_t x198 = 106304608LL;
	int32_t x199 = -1;
	int32_t x200 = -128076491;
	static volatile int64_t t40 = 72795LL;

    t40 = (((x197&x198)-x199)%x200);

    if (t40 != 398401LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x201 = 11U;
	static int64_t x202 = -1LL;
	int32_t x204 = INT32_MIN;

    t41 = (((x201&x202)-x203)%x204);

    if (t41 != -22351LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x207 = INT32_MIN;
	volatile uint64_t x208 = 696116896729LLU;
	volatile uint64_t t42 = 23LLU;

    t42 = (((x205&x206)-x207)%x208);

    if (t42 != 2147929856LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x213 = -4;
	uint16_t x214 = 12646U;
	static volatile int8_t x216 = INT8_MIN;
	static int32_t t43 = 762163088;

    t43 = (((x213&x214)-x215)%x216);

    if (t43 != 97) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x225 = INT8_MIN;
	uint32_t x226 = 25U;
	volatile uint32_t t44 = 249U;

    t44 = (((x225&x226)-x227)%x228);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x229 = 3159U;
	uint8_t x230 = UINT8_MAX;
	int32_t x232 = -1;

    t45 = (((x229&x230)-x231)%x232);

    if (t45 != 4294934616U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x233 = INT16_MIN;
	int64_t x235 = -25208LL;
	int32_t x236 = INT32_MIN;
	volatile int64_t t46 = -74LL;

    t46 = (((x233&x234)-x235)%x236);

    if (t46 != 2147476088LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = 7850U;
	int16_t x240 = INT16_MAX;

    t47 = (((x237&x238)-x239)%x240);

    if (t47 != -7978) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x241 = 15359250U;
	int8_t x242 = INT8_MIN;
	int8_t x243 = 1;
	uint32_t t48 = 13866U;

    t48 = (((x241&x242)-x243)%x244);

    if (t48 != 15359231U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x245 = 8U;
	int8_t x246 = 0;
	uint16_t x248 = 10630U;

    t49 = (((x245&x246)-x247)%x248);

    if (t49 != 7920LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x249 = -1LL;
	int64_t x251 = -27LL;
	int8_t x252 = INT8_MIN;

    t50 = (((x249&x250)-x251)%x252);

    if (t50 != 26LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x254 = INT16_MIN;
	volatile int8_t x255 = INT8_MIN;
	uint32_t x256 = 1941073U;

    t51 = (((x253&x254)-x255)%x256);

    if (t51 != 1281180U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x257 = UINT32_MAX;
	volatile int64_t x259 = INT64_MIN;
	uint64_t x260 = 11862863LLU;
	static uint64_t t52 = 1502126760466452659LLU;

    t52 = (((x257&x258)-x259)%x260);

    if (t52 != 2934812LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x262 = 34U;
	uint16_t x263 = 4U;
	volatile uint8_t x264 = UINT8_MAX;
	volatile int32_t t53 = -13325017;

    t53 = (((x261&x262)-x263)%x264);

    if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x265 = UINT16_MAX;
	int32_t x267 = INT32_MAX;
	static volatile int8_t x268 = -54;

    t54 = (((x265&x266)-x267)%x268);

    if (t54 != -18) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x269 = 142639U;
	volatile int64_t x270 = -1LL;
	int8_t x271 = INT8_MIN;
	volatile int64_t t55 = 450658342442LL;

    t55 = (((x269&x270)-x271)%x272);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x273 = INT8_MAX;
	int64_t x275 = INT64_MAX;
	int64_t x276 = -6803447LL;
	volatile int64_t t56 = -227LL;

    t56 = (((x273&x274)-x275)%x276);

    if (t56 != -455889LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x278 = UINT64_MAX;
	static int32_t x279 = 32846;
	int8_t x280 = 14;
	volatile uint64_t t57 = 1646536230635057458LLU;

    t57 = (((x277&x278)-x279)%x280);

    if (t57 != 5LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x285 = -92086783LL;
	uint16_t x286 = 80U;
	volatile int8_t x287 = INT8_MAX;
	int8_t x288 = -1;
	volatile int64_t t58 = 84098088075360LL;

    t58 = (((x285&x286)-x287)%x288);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x289 = 1U;
	volatile int32_t x290 = 40;
	static int8_t x291 = INT8_MAX;
	volatile int8_t x292 = -5;
	int32_t t59 = -13;

    t59 = (((x289&x290)-x291)%x292);

    if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x297 = 594108741LL;
	static uint64_t x298 = 1505025023183939815LLU;
	int32_t x300 = INT32_MAX;
	volatile uint64_t t60 = 84845993938LLU;

    t60 = (((x297&x298)-x299)%x300);

    if (t60 != 6381638LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x301 = -1;
	uint64_t x302 = 167319162736560LLU;
	static int32_t x304 = 44;
	volatile uint64_t t61 = 37LLU;

    t61 = (((x301&x302)-x303)%x304);

    if (t61 != 12LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x305 = INT64_MAX;
	int16_t x306 = -2;
	uint64_t x307 = 323394LLU;
	static int64_t x308 = INT64_MIN;
	uint64_t t62 = 1LLU;

    t62 = (((x305&x306)-x307)%x308);

    if (t62 != 9223372036854452412LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x309 = -1;
	uint8_t x310 = UINT8_MAX;
	static volatile uint64_t t63 = 2237LLU;

    t63 = (((x309&x310)-x311)%x312);

    if (t63 != 23787087090112170LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x317 = -1;
	int16_t x318 = INT16_MIN;
	static int64_t x319 = -1LL;
	static int32_t x320 = INT32_MIN;
	static int64_t t64 = -18426712598716LL;

    t64 = (((x317&x318)-x319)%x320);

    if (t64 != -32767LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x321 = INT16_MIN;
	uint64_t x322 = 6LLU;
	int8_t x323 = INT8_MIN;
	volatile uint32_t x324 = 34U;
	uint64_t t65 = 8LLU;

    t65 = (((x321&x322)-x323)%x324);

    if (t65 != 26LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x325 = 13;
	int64_t x326 = INT64_MAX;
	int8_t x327 = -11;
	volatile int8_t x328 = INT8_MIN;
	volatile int64_t t66 = -326977994597077LL;

    t66 = (((x325&x326)-x327)%x328);

    if (t66 != 24LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x334 = -1LL;
	int8_t x335 = -1;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t67 = 31960LLU;

    t67 = (((x333&x334)-x335)%x336);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x337 = INT32_MAX;
	int64_t x338 = INT64_MIN;
	uint16_t x340 = 12U;
	volatile uint64_t t68 = 218275526687LLU;

    t68 = (((x337&x338)-x339)%x340);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x341 = INT16_MIN;
	static uint64_t x342 = UINT64_MAX;
	int32_t x343 = INT32_MAX;
	uint16_t x344 = 1302U;
	uint64_t t69 = 25986223LLU;

    t69 = (((x341&x342)-x343)%x344);

    if (t69 != 1099LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x345 = -6794;
	int64_t x346 = -1LL;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = -1LL;

    t70 = (((x345&x346)-x347)%x348);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x349 = -1;
	uint32_t x350 = UINT32_MAX;
	int8_t x352 = 12;

    t71 = (((x349&x350)-x351)%x352);

    if (t71 != 7U) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x358 = 1U;
	static int32_t x359 = -26819317;
	int16_t x360 = INT16_MAX;
	volatile int32_t t72 = 92464101;

    t72 = (((x357&x358)-x359)%x360);

    if (t72 != 15912) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x362 = -1;
	int64_t x363 = 493354LL;
	int8_t x364 = 5;
	volatile int64_t t73 = -86199920160LL;

    t73 = (((x361&x362)-x363)%x364);

    if (t73 != -2LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x365 = INT8_MIN;
	static volatile uint16_t x368 = UINT16_MAX;
	volatile int32_t t74 = 385141393;

    t74 = (((x365&x366)-x367)%x368);

    if (t74 != 32640) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x369 = INT32_MAX;
	uint8_t x370 = UINT8_MAX;
	int16_t x371 = INT16_MAX;
	volatile int16_t x372 = 633;
	int32_t t75 = -2870;

    t75 = (((x369&x370)-x371)%x372);

    if (t75 != -229) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x373 = 0U;
	int64_t x374 = -148524222LL;
	int64_t t76 = -22364367LL;

    t76 = (((x373&x374)-x375)%x376);

    if (t76 != 32768LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x377 = 1U;
	static int16_t x378 = -1;
	int64_t x379 = 2059233880948135LL;
	int8_t x380 = 2;
	static int64_t t77 = -3269963LL;

    t77 = (((x377&x378)-x379)%x380);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x381 = -1;
	int32_t x383 = 1979;
	static int8_t x384 = -1;
	int32_t t78 = 7;

    t78 = (((x381&x382)-x383)%x384);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x389 = UINT32_MAX;
	uint16_t x390 = UINT16_MAX;
	volatile int64_t x391 = 56218280LL;
	static uint32_t x392 = 597241U;
	int64_t t79 = -7LL;

    t79 = (((x389&x390)-x391)%x392);

    if (t79 != -12091LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x393 = UINT32_MAX;
	uint8_t x394 = UINT8_MAX;
	int16_t x395 = INT16_MIN;
	uint32_t x396 = UINT32_MAX;

    t80 = (((x393&x394)-x395)%x396);

    if (t80 != 33023U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x397 = -7;
	int16_t x399 = 227;
	int64_t t81 = 187771020098492861LL;

    t81 = (((x397&x398)-x399)%x400);

    if (t81 != -189439LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x401 = INT32_MIN;
	int16_t x402 = -1;
	int64_t x403 = -1LL;
	uint8_t x404 = 6U;
	int64_t t82 = -2357LL;

    t82 = (((x401&x402)-x403)%x404);

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x405 = -1;
	static int32_t x406 = INT32_MAX;
	static volatile uint8_t x407 = 5U;
	int8_t x408 = -1;
	volatile int32_t t83 = 2339;

    t83 = (((x405&x406)-x407)%x408);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x409 = 106LLU;
	static uint8_t x410 = UINT8_MAX;
	int32_t x412 = INT32_MIN;
	uint64_t t84 = 19354LLU;

    t84 = (((x409&x410)-x411)%x412);

    if (t84 != 2147483627LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x413 = UINT32_MAX;
	uint8_t x414 = UINT8_MAX;
	static int8_t x415 = -23;
	uint32_t t85 = 1040672U;

    t85 = (((x413&x414)-x415)%x416);

    if (t85 != 278U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x417 = 3U;
	int16_t x418 = INT16_MIN;
	uint16_t x419 = 25769U;
	uint32_t x420 = 229U;
	static volatile uint32_t t86 = 25594U;

    t86 = (((x417&x418)-x419)%x420);

    if (t86 != 40U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x421 = 143492351U;
	int16_t x422 = -3390;
	int64_t x423 = -1LL;
	int16_t x424 = -1;
	volatile int64_t t87 = -237LL;

    t87 = (((x421&x422)-x423)%x424);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x425 = 371;
	int8_t x426 = INT8_MIN;
	int8_t x428 = INT8_MAX;
	int32_t t88 = 10;

    t88 = (((x425&x426)-x427)%x428);

    if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x433 = INT8_MAX;
	uint64_t x434 = 1044496790137937LLU;
	int8_t x436 = -1;
	uint64_t t89 = 320553855659387713LLU;

    t89 = (((x433&x434)-x435)%x436);

    if (t89 != 18446744073709543602LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x441 = 62;
	uint8_t x443 = 1U;
	int16_t x444 = -2476;
	volatile int32_t t90 = 9923961;

    t90 = (((x441&x442)-x443)%x444);

    if (t90 != 13) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x446 = INT64_MIN;
	int16_t x447 = -55;
	uint32_t x448 = UINT32_MAX;
	int64_t t91 = 44490587153LL;

    t91 = (((x445&x446)-x447)%x448);

    if (t91 != 55LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x453 = -31584648523LL;
	int64_t x454 = 515244491195492LL;
	static volatile uint16_t x455 = 126U;
	volatile int32_t x456 = -1;
	volatile int64_t t92 = -1LL;

    t92 = (((x453&x454)-x455)%x456);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x457 = -1LL;
	int32_t x458 = INT32_MAX;
	uint64_t x459 = 2845939LLU;
	volatile int32_t x460 = INT32_MAX;
	uint64_t t93 = 1097184338250459LLU;

    t93 = (((x457&x458)-x459)%x460);

    if (t93 != 2144637708LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x465 = INT8_MIN;
	uint32_t x466 = 27U;
	volatile int32_t x467 = -1;
	uint16_t x468 = UINT16_MAX;
	uint32_t t94 = 6U;

    t94 = (((x465&x466)-x467)%x468);

    if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x469 = 1;
	static int64_t x470 = -227118203461LL;
	int32_t x472 = INT32_MIN;
	volatile int64_t t95 = 1028706LL;

    t95 = (((x469&x470)-x471)%x472);

    if (t95 != -32766LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x473 = 13834U;
	int8_t x474 = INT8_MAX;
	static int64_t x476 = 4211705987726LL;
	volatile int64_t t96 = 28363LL;

    t96 = (((x473&x474)-x475)%x476);

    if (t96 != 2147483658LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x477 = UINT8_MAX;
	uint64_t x478 = 21595115909857745LLU;
	int8_t x479 = INT8_MIN;
	volatile int64_t x480 = -317228LL;
	volatile uint64_t t97 = 25529237921LLU;

    t97 = (((x477&x478)-x479)%x480);

    if (t97 != 337LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x481 = INT8_MIN;
	static uint8_t x482 = 43U;
	static uint16_t x483 = 0U;
	uint8_t x484 = UINT8_MAX;
	volatile int32_t t98 = 57592228;

    t98 = (((x481&x482)-x483)%x484);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x485 = 747357163LL;
	int64_t x486 = INT64_MAX;
	int8_t x487 = 0;
	static int32_t x488 = -1;
	int64_t t99 = -833908337843386703LL;

    t99 = (((x485&x486)-x487)%x488);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x489 = 823102665U;
	int32_t x490 = -134616;
	uint16_t x491 = 642U;
	int16_t x492 = INT16_MIN;
	uint32_t t100 = 948U;

    t100 = (((x489&x490)-x491)%x492);

    if (t100 != 822967686U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x494 = -21;
	uint8_t x495 = 0U;
	volatile int64_t t101 = 845879476LL;

    t101 = (((x493&x494)-x495)%x496);

    if (t101 != 1349918257LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x497 = -1;
	int32_t x498 = 63535294;
	uint8_t x499 = UINT8_MAX;
	int32_t t102 = -20;

    t102 = (((x497&x498)-x499)%x500);

    if (t102 != 157) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x501 = 27457466773431LLU;
	static uint16_t x502 = 394U;
	static volatile int64_t x504 = -6837492503300LL;

    t103 = (((x501&x502)-x503)%x504);

    if (t103 != 33154LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x505 = 12723;
	volatile int32_t x506 = INT32_MAX;
	static int8_t x507 = INT8_MIN;
	static uint16_t x508 = 1179U;
	static int32_t t104 = 10585;

    t104 = (((x505&x506)-x507)%x508);

    if (t104 != 1061) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x510 = -1;
	volatile int16_t x511 = -5151;
	volatile int64_t x512 = INT64_MIN;
	volatile int64_t t105 = -3416924971LL;

    t105 = (((x509&x510)-x511)%x512);

    if (t105 != -86870278LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x513 = UINT16_MAX;
	static uint16_t x515 = 107U;
	uint16_t x516 = UINT16_MAX;
	int32_t t106 = 1;

    t106 = (((x513&x514)-x515)%x516);

    if (t106 != 32660) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x518 = 5U;
	int8_t x519 = INT8_MAX;
	volatile int32_t t107 = -8;

    t107 = (((x517&x518)-x519)%x520);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x521 = 77921U;
	volatile uint8_t x523 = UINT8_MAX;

    t108 = (((x521&x522)-x523)%x524);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x525 = UINT32_MAX;
	volatile int8_t x526 = INT8_MAX;
	int8_t x527 = INT8_MAX;
	uint32_t x528 = 5504U;
	uint32_t t109 = 123U;

    t109 = (((x525&x526)-x527)%x528);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x529 = UINT32_MAX;
	int64_t x530 = 252130578LL;
	int8_t x531 = 33;
	volatile int64_t t110 = -166181391806LL;

    t110 = (((x529&x530)-x531)%x532);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x537 = INT64_MIN;
	int16_t x538 = INT16_MAX;
	int16_t x539 = -9;
	int8_t x540 = INT8_MAX;
	static int64_t t111 = -23224006542LL;

    t111 = (((x537&x538)-x539)%x540);

    if (t111 != 9LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x541 = 0;
	int16_t x542 = -1;
	int8_t x543 = INT8_MIN;
	uint16_t x544 = 3030U;
	int32_t t112 = -734;

    t112 = (((x541&x542)-x543)%x544);

    if (t112 != 128) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x545 = INT16_MIN;
	int16_t x546 = -1;
	static int16_t x547 = 251;
	volatile int32_t x548 = INT32_MIN;
	int32_t t113 = 15;

    t113 = (((x545&x546)-x547)%x548);

    if (t113 != -33019) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x550 = -1;
	int8_t x551 = -1;

    t114 = (((x549&x550)-x551)%x552);

    if (t114 != 4448U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x553 = INT64_MAX;
	uint16_t x556 = 16U;
	volatile int64_t t115 = -17046LL;

    t115 = (((x553&x554)-x555)%x556);

    if (t115 != 12LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x558 = 1U;
	int32_t x559 = -87309907;
	static volatile int32_t t116 = 0;

    t116 = (((x557&x558)-x559)%x560);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x561 = -1LL;
	static int16_t x562 = 360;
	int64_t x564 = 1391216LL;
	static volatile int64_t t117 = -27683091409LL;

    t117 = (((x561&x562)-x563)%x564);

    if (t117 != 360LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x566 = INT16_MAX;
	volatile int64_t t118 = -1821189030819327144LL;

    t118 = (((x565&x566)-x567)%x568);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x569 = -1;
	uint32_t x570 = UINT32_MAX;
	static int16_t x571 = -59;
	int64_t x572 = 1867550865058760LL;
	volatile int64_t t119 = -4226182272068121342LL;

    t119 = (((x569&x570)-x571)%x572);

    if (t119 != 58LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x573 = 11;
	int16_t x574 = -55;
	int64_t x576 = -1LL;
	static volatile int64_t t120 = 137425LL;

    t120 = (((x573&x574)-x575)%x576);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x577 = 9842U;
	volatile uint8_t x578 = UINT8_MAX;
	int32_t x580 = -1;
	volatile int32_t t121 = 146106;

    t121 = (((x577&x578)-x579)%x580);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x582 = INT16_MAX;
	volatile int8_t x583 = 7;
	static int8_t x584 = -1;
	int32_t t122 = -429534;

    t122 = (((x581&x582)-x583)%x584);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x589 = 6;
	static int16_t x591 = INT16_MIN;

    t123 = (((x589&x590)-x591)%x592);

    if (t123 != 32774LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x593 = INT32_MIN;
	uint8_t x594 = UINT8_MAX;
	int16_t x596 = 15;
	volatile int64_t t124 = -15928LL;

    t124 = (((x593&x594)-x595)%x596);

    if (t124 != -7LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x597 = -8004;
	volatile int16_t x598 = -1;
	int32_t x599 = 8647817;
	volatile uint32_t x600 = 5U;
	volatile uint32_t t125 = 98U;

    t125 = (((x597&x598)-x599)%x600);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x603 = INT8_MIN;
	static volatile int32_t t126 = -8;

    t126 = (((x601&x602)-x603)%x604);

    if (t126 != 74) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x606 = 7;
	int32_t x607 = -1;
	static int8_t x608 = -27;
	int32_t t127 = -194;

    t127 = (((x605&x606)-x607)%x608);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x609 = INT32_MAX;
	int64_t x610 = -1LL;
	int32_t x611 = INT32_MIN;
	int64_t t128 = 2800963412003LL;

    t128 = (((x609&x610)-x611)%x612);

    if (t128 != 127LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x613 = 1415270223027302468LLU;
	static int32_t x614 = 0;
	int8_t x615 = INT8_MAX;
	uint64_t x616 = 1LLU;

    t129 = (((x613&x614)-x615)%x616);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x617 = 4U;
	int8_t x619 = INT8_MAX;
	int32_t t130 = 111;

    t130 = (((x617&x618)-x619)%x620);

    if (t130 != -35) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x621 = -23;
	int8_t x622 = INT8_MAX;
	int16_t x624 = INT16_MIN;

    t131 = (((x621&x622)-x623)%x624);

    if (t131 != -32662) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x625 = 725U;
	int64_t x626 = INT64_MIN;
	volatile int16_t x627 = -1;
	static volatile uint64_t x628 = UINT64_MAX;
	uint64_t t132 = 744208183891LLU;

    t132 = (((x625&x626)-x627)%x628);

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x629 = 0U;
	volatile int8_t x632 = -1;
	int64_t t133 = 54061029145013LL;

    t133 = (((x629&x630)-x631)%x632);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x633 = 8U;
	uint64_t x634 = UINT64_MAX;
	static uint32_t x636 = 228U;
	volatile uint64_t t134 = 2466474860366LLU;

    t134 = (((x633&x634)-x635)%x636);

    if (t134 != 93LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x637 = 0U;
	int8_t x638 = -5;
	volatile uint64_t t135 = 23616LLU;

    t135 = (((x637&x638)-x639)%x640);

    if (t135 != 18446744073709534410LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x641 = 6;
	volatile int16_t x642 = INT16_MAX;
	int32_t x643 = 5905;
	static volatile int32_t x644 = INT32_MIN;

    t136 = (((x641&x642)-x643)%x644);

    if (t136 != -5899) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x649 = INT32_MIN;
	uint32_t x651 = UINT32_MAX;
	uint64_t x652 = UINT64_MAX;
	volatile uint64_t t137 = 21681414427963829LLU;

    t137 = (((x649&x650)-x651)%x652);

    if (t137 != 2147483649LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x653 = UINT16_MAX;
	uint32_t x654 = UINT32_MAX;
	volatile uint32_t t138 = 489U;

    t138 = (((x653&x654)-x655)%x656);

    if (t138 != 65533U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x657 = -1LL;
	static volatile int64_t x658 = -2063417505949173088LL;
	static int32_t x659 = -1;
	uint32_t x660 = 289U;
	int64_t t139 = 14237698473150359LL;

    t139 = (((x657&x658)-x659)%x660);

    if (t139 != -171LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x661 = 770206745842168119LLU;
	int8_t x662 = INT8_MAX;
	uint32_t x663 = 2182U;
	uint32_t x664 = 78U;
	static volatile uint64_t t140 = 79553013565857LLU;

    t140 = (((x661&x662)-x663)%x664);

    if (t140 != 73LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x665 = INT16_MIN;
	static uint32_t x666 = 1872208U;
	uint16_t x667 = UINT16_MAX;
	static uint8_t x668 = 17U;

    t141 = (((x665&x666)-x667)%x668);

    if (t141 != 3U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x669 = -4LL;
	volatile int64_t x670 = -1LL;
	int32_t x672 = INT32_MIN;
	static uint64_t t142 = 13775283223392LLU;

    t142 = (((x669&x670)-x671)%x672);

    if (t142 != 985736703LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x673 = -2;
	int32_t x676 = -5485;

    t143 = (((x673&x674)-x675)%x676);

    if (t143 != -239LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x677 = -525467324LL;
	static int16_t x678 = -1;
	uint8_t x679 = 41U;
	int16_t x680 = INT16_MAX;
	volatile int64_t t144 = 1LL;

    t144 = (((x677&x678)-x679)%x680);

    if (t144 != -15753LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x681 = 764799496;
	uint8_t x682 = 11U;
	static int16_t x683 = 11;
	int64_t x684 = INT64_MIN;
	int64_t t145 = 287857317222LL;

    t145 = (((x681&x682)-x683)%x684);

    if (t145 != -3LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x685 = 6;
	int64_t x688 = INT64_MIN;
	volatile int64_t t146 = 77447328LL;

    t146 = (((x685&x686)-x687)%x688);

    if (t146 != -1761LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x689 = 1647LL;
	int16_t x690 = INT16_MAX;
	int64_t x691 = -1979006813LL;
	uint32_t x692 = 20541092U;
	int64_t t147 = 1540582145381367LL;

    t147 = (((x689&x690)-x691)%x692);

    if (t147 != 7063628LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x693 = UINT16_MAX;
	int8_t x694 = INT8_MIN;
	int16_t x695 = INT16_MIN;
	volatile uint32_t x696 = 1U;
	static uint32_t t148 = 1289782651U;

    t148 = (((x693&x694)-x695)%x696);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x698 = 100U;
	volatile int32_t x699 = -1;
	uint32_t x700 = 80209U;
	volatile uint32_t t149 = 4U;

    t149 = (((x697&x698)-x699)%x700);

    if (t149 != 65U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x701 = INT16_MIN;
	volatile int8_t x703 = INT8_MIN;
	int64_t t150 = -2456047517304557071LL;

    t150 = (((x701&x702)-x703)%x704);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x705 = INT64_MIN;
	int16_t x706 = 3261;
	int16_t x707 = -2;

    t151 = (((x705&x706)-x707)%x708);

    if (t151 != 2LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x709 = 10833U;
	int8_t x711 = -1;
	int8_t x712 = 62;
	int64_t t152 = -16260027779LL;

    t152 = (((x709&x710)-x711)%x712);

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x713 = -1LL;
	int16_t x714 = -1;
	volatile int64_t t153 = 1034452107904LL;

    t153 = (((x713&x714)-x715)%x716);

    if (t153 != 127LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x722 = INT8_MAX;
	int16_t x723 = -1;
	int64_t x724 = INT64_MIN;
	int64_t t154 = 131LL;

    t154 = (((x721&x722)-x723)%x724);

    if (t154 != 128LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x729 = UINT32_MAX;
	int32_t x730 = INT32_MIN;
	int8_t x731 = INT8_MIN;
	uint32_t x732 = 86400U;
	volatile uint32_t t155 = 774428536U;

    t155 = (((x729&x730)-x731)%x732);

    if (t155 != 11776U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x733 = 24U;
	static uint8_t x734 = UINT8_MAX;
	int16_t x735 = INT16_MAX;
	static uint32_t x736 = UINT32_MAX;
	uint32_t t156 = 7861847U;

    t156 = (((x733&x734)-x735)%x736);

    if (t156 != 4294934553U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x739 = -77;
	int32_t x740 = -1;

    t157 = (((x737&x738)-x739)%x740);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x742 = 13U;

    t158 = (((x741&x742)-x743)%x744);

    if (t158 != 27LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x746 = INT8_MAX;
	int8_t x747 = INT8_MIN;
	int64_t t159 = -3736516716930814124LL;

    t159 = (((x745&x746)-x747)%x748);

    if (t159 != 177LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x749 = UINT32_MAX;
	int8_t x750 = -1;
	int16_t x752 = -792;
	volatile int64_t t160 = 956028507LL;

    t160 = (((x749&x750)-x751)%x752);

    if (t160 != 400LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x757 = INT16_MIN;
	int32_t x758 = INT32_MIN;
	int64_t x759 = INT64_MIN;
	int8_t x760 = INT8_MAX;

    t161 = (((x757&x758)-x759)%x760);

    if (t161 != 120LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x761 = -9588;
	int64_t x763 = INT64_MIN;

    t162 = (((x761&x762)-x763)%x764);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x769 = -50527;
	uint32_t x770 = UINT32_MAX;
	uint32_t x771 = 2U;
	static int64_t x772 = -2334LL;

    t163 = (((x769&x770)-x771)%x772);

    if (t163 != 1999LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x774 = 15;
	int32_t x775 = INT32_MAX;
	int32_t t164 = -1238739;

    t164 = (((x773&x774)-x775)%x776);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x777 = -40576456;
	static uint8_t x778 = 16U;
	static int16_t x780 = INT16_MAX;
	volatile int32_t t165 = -191945;

    t165 = (((x777&x778)-x779)%x780);

    if (t165 != 39) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x781 = -1643LL;
	int8_t x782 = -7;
	volatile uint8_t x783 = 39U;
	uint32_t x784 = 1190006982U;
	volatile int64_t t166 = -19715651911571LL;

    t166 = (((x781&x782)-x783)%x784);

    if (t166 != -1686LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x786 = -1;
	int8_t x788 = 15;
	int64_t t167 = -902361488051305LL;

    t167 = (((x785&x786)-x787)%x788);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x793 = 9U;
	static volatile int32_t x794 = -6087283;
	uint64_t x795 = 23972908554LLU;
	int16_t x796 = INT16_MIN;
	uint64_t t168 = 486LLU;

    t168 = (((x793&x794)-x795)%x796);

    if (t168 != 18446744049736643071LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x798 = UINT64_MAX;
	volatile uint8_t x799 = 0U;
	int8_t x800 = -1;
	uint64_t t169 = 4910263836538806155LLU;

    t169 = (((x797&x798)-x799)%x800);

    if (t169 != 127LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x801 = -1LL;
	uint64_t x802 = UINT64_MAX;
	int64_t x803 = INT64_MIN;
	volatile int8_t x804 = -1;
	uint64_t t170 = 102065147LLU;

    t170 = (((x801&x802)-x803)%x804);

    if (t170 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x805 = -1;
	uint16_t x806 = 1U;
	uint16_t x807 = 14U;
	int16_t x808 = INT16_MIN;

    t171 = (((x805&x806)-x807)%x808);

    if (t171 != -13) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x809 = 30U;
	uint64_t x810 = 4086400838277136277LLU;
	static volatile int8_t x811 = -2;
	static uint32_t x812 = 198U;
	uint64_t t172 = 129202083516LLU;

    t172 = (((x809&x810)-x811)%x812);

    if (t172 != 22LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x813 = 1;
	uint32_t x814 = UINT32_MAX;
	int64_t x815 = 559411119675866LL;

    t173 = (((x813&x814)-x815)%x816);

    if (t173 != -559411119675865LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x817 = INT32_MAX;
	int8_t x818 = INT8_MAX;
	uint16_t x819 = 1U;
	static uint8_t x820 = 6U;
	volatile int32_t t174 = 1072;

    t174 = (((x817&x818)-x819)%x820);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x821 = UINT16_MAX;
	uint16_t x822 = UINT16_MAX;
	static int8_t x823 = -4;
	int64_t x824 = -56157936985534LL;

    t175 = (((x821&x822)-x823)%x824);

    if (t175 != 65539LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x825 = INT64_MIN;
	int16_t x826 = 1;

    t176 = (((x825&x826)-x827)%x828);

    if (t176 != -127LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x831 = INT8_MIN;
	static volatile int16_t x832 = -1;
	static volatile int32_t t177 = 31733095;

    t177 = (((x829&x830)-x831)%x832);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x833 = 3907409;
	uint16_t x836 = 247U;

    t178 = (((x833&x834)-x835)%x836);

    if (t178 != -122LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x837 = 460U;
	int32_t x838 = INT32_MIN;
	uint64_t x839 = UINT64_MAX;
	uint32_t x840 = 25U;
	volatile uint64_t t179 = 282141888590815768LLU;

    t179 = (((x837&x838)-x839)%x840);

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x841 = INT64_MIN;
	static int16_t x842 = INT16_MAX;
	static volatile uint64_t x844 = 756625938289400LLU;
	static uint64_t t180 = 31667413679LLU;

    t180 = (((x841&x842)-x843)%x844);

    if (t180 != 203594730517440LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x845 = 171U;
	uint32_t x846 = 48440U;
	volatile int8_t x848 = INT8_MIN;
	volatile uint32_t t181 = 29920023U;

    t181 = (((x845&x846)-x847)%x848);

    if (t181 != 2147483688U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x850 = INT64_MIN;
	int64_t x851 = 91908839299302LL;
	uint8_t x852 = 29U;
	volatile int64_t t182 = -3230105832788594422LL;

    t182 = (((x849&x850)-x851)%x852);

    if (t182 != -17LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x853 = INT32_MAX;
	volatile int16_t x854 = INT16_MIN;
	volatile uint32_t x855 = 26055U;
	volatile int32_t x856 = INT32_MIN;
	volatile uint32_t t183 = 67160U;

    t183 = (((x853&x854)-x855)%x856);

    if (t183 != 2147424825U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x857 = INT64_MIN;
	volatile int32_t x858 = INT32_MIN;
	int16_t x859 = -1;
	int32_t x860 = INT32_MAX;
	int64_t t184 = 23241365546LL;

    t184 = (((x857&x858)-x859)%x860);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x861 = -1;
	uint32_t x862 = 5U;
	static volatile uint8_t x863 = UINT8_MAX;
	volatile int16_t x864 = -1;
	volatile uint32_t t185 = 960U;

    t185 = (((x861&x862)-x863)%x864);

    if (t185 != 4294967046U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x866 = 3;
	volatile int16_t x867 = INT16_MIN;
	uint64_t x868 = UINT64_MAX;
	volatile uint64_t t186 = 88957844336LLU;

    t186 = (((x865&x866)-x867)%x868);

    if (t186 != 32770LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x870 = UINT32_MAX;
	uint64_t x871 = UINT64_MAX;
	volatile int16_t x872 = INT16_MIN;
	static volatile uint64_t t187 = 2319LLU;

    t187 = (((x869&x870)-x871)%x872);

    if (t187 != 4294967296LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x874 = -32084;
	uint16_t x875 = UINT16_MAX;
	static volatile int16_t x876 = INT16_MIN;
	volatile int32_t t188 = 7;

    t188 = (((x873&x874)-x875)%x876);

    if (t188 != -32767) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x877 = -1;
	volatile uint64_t x878 = 118732LLU;
	int8_t x879 = INT8_MIN;
	uint8_t x880 = 5U;
	volatile uint64_t t189 = 9098782537151370508LLU;

    t189 = (((x877&x878)-x879)%x880);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x882 = 1;
	static uint64_t x883 = UINT64_MAX;
	int8_t x884 = -1;
	uint64_t t190 = 37972704364651LLU;

    t190 = (((x881&x882)-x883)%x884);

    if (t190 != 2LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x885 = 183591630U;
	static int32_t x886 = 120;
	volatile int32_t x887 = INT32_MAX;
	volatile int8_t x888 = -1;
	uint32_t t191 = 6904U;

    t191 = (((x885&x886)-x887)%x888);

    if (t191 != 2147483721U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x889 = INT8_MAX;
	static int64_t x890 = INT64_MIN;
	static int32_t x892 = -15768484;
	static int64_t t192 = 927LL;

    t192 = (((x889&x890)-x891)%x892);

    if (t192 != -3029LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x893 = INT64_MIN;
	static uint32_t x894 = 101U;
	static int32_t x895 = INT32_MIN;
	int16_t x896 = INT16_MIN;
	volatile int64_t t193 = -3729560LL;

    t193 = (((x893&x894)-x895)%x896);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x897 = -548128304322534LL;
	int32_t x898 = INT32_MAX;
	static uint32_t x900 = 321384933U;
	volatile uint64_t t194 = 0LLU;

    t194 = (((x897&x898)-x899)%x900);

    if (t194 != 255992275LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x901 = -1352096;
	uint32_t x902 = UINT32_MAX;
	int16_t x903 = INT16_MAX;
	int32_t x904 = INT32_MIN;
	volatile uint32_t t195 = 402778U;

    t195 = (((x901&x902)-x903)%x904);

    if (t195 != 2146098785U) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x905 = -1;
	int16_t x906 = -1;
	int32_t x907 = -1;
	volatile int64_t x908 = 66276446LL;
	int64_t t196 = 15007973LL;

    t196 = (((x905&x906)-x907)%x908);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x909 = UINT32_MAX;
	int16_t x910 = -444;
	int32_t x912 = 17167369;
	volatile uint32_t t197 = 28930451U;

    t197 = (((x909&x910)-x911)%x912);

    if (t197 != 3124548U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x913 = INT8_MIN;
	int64_t x914 = INT64_MIN;
	int64_t x915 = INT64_MIN;
	static uint16_t x916 = UINT16_MAX;
	int64_t t198 = 2452456LL;

    t198 = (((x913&x914)-x915)%x916);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x918 = INT8_MAX;
	int16_t x920 = -1;
	int32_t t199 = 1;

    t199 = (((x917&x918)-x919)%x920);

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

