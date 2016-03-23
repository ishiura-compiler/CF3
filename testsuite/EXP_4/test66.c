
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

int64_t x2 = -1LL;
volatile int8_t x5 = INT8_MIN;
static volatile int32_t t1 = 667;
int32_t x15 = -1;
int8_t x17 = 0;
volatile uint8_t x22 = UINT8_MAX;
int64_t x24 = -1LL;
int32_t t5 = -47;
int8_t x36 = INT8_MAX;
int64_t x45 = INT64_MAX;
volatile uint8_t x60 = 39U;
int16_t x63 = INT16_MAX;
static volatile int32_t t12 = 28;
static int16_t x83 = INT16_MIN;
int32_t t14 = -68;
int8_t x85 = 22;
int8_t x87 = -1;
int8_t x88 = -1;
int64_t x89 = 3221613LL;
int16_t x91 = -1;
volatile int32_t t16 = 18390;
volatile uint8_t x93 = UINT8_MAX;
uint8_t x98 = UINT8_MAX;
uint64_t x100 = 2234759641394372868LLU;
int32_t x105 = INT32_MAX;
volatile int16_t x118 = -1;
static int32_t x121 = INT32_MIN;
volatile int8_t x122 = -6;
int16_t x125 = INT16_MIN;
uint64_t x127 = 1820788894426499LLU;
int32_t t24 = 13437;
int8_t x136 = INT8_MIN;
static uint16_t x139 = 89U;
int64_t x143 = INT64_MIN;
int32_t t30 = -124;
int8_t x159 = INT8_MIN;
int16_t x165 = -1;
static int16_t x167 = INT16_MAX;
int16_t x173 = INT16_MAX;
static volatile int32_t t35 = -7;
volatile int8_t x178 = INT8_MIN;
volatile int32_t t38 = -27391413;
uint8_t x191 = UINT8_MAX;
volatile int64_t x202 = 2030545690113076450LL;
int8_t x206 = -1;
int8_t x237 = INT8_MAX;
int32_t t49 = -6132223;
int8_t x243 = INT8_MIN;
static uint16_t x248 = UINT16_MAX;
static int32_t t51 = -3;
int32_t t53 = -47891582;
int32_t x261 = -1;
int16_t x263 = INT16_MIN;
static int8_t x273 = -28;
int16_t x279 = INT16_MAX;
int8_t x280 = -1;
int16_t x299 = INT16_MIN;
volatile uint32_t x300 = UINT32_MAX;
static uint64_t x304 = 6LLU;
uint64_t x321 = 1322368LLU;
int16_t x322 = -156;
static uint32_t x331 = 2597U;
uint64_t x335 = 246109047284383LLU;
int64_t x336 = 18842818962214897LL;
uint16_t x340 = 3U;
int32_t t69 = -34;
volatile int64_t x358 = INT64_MIN;
int64_t x359 = 16273930304451LL;
int8_t x363 = -1;
static volatile int32_t t75 = 13321587;
uint16_t x378 = 822U;
int32_t t78 = -4884;
uint8_t x384 = UINT8_MAX;
volatile int64_t x389 = INT64_MIN;
volatile uint8_t x391 = 22U;
int64_t x395 = INT64_MAX;
int16_t x405 = INT16_MIN;
int64_t x408 = -1LL;
int32_t t84 = -384;
uint32_t x409 = 412604318U;
int64_t x410 = INT64_MIN;
volatile int8_t x417 = -1;
volatile int32_t t87 = 58789628;
int32_t x421 = -1;
volatile int32_t t90 = -40059;
int64_t x450 = INT64_MIN;
int32_t t93 = -42370873;
int64_t x463 = -1LL;
int32_t x466 = 1054685504;
int64_t x470 = INT64_MIN;
int32_t t97 = -28;
int64_t x485 = INT64_MIN;
int32_t t101 = 1674770;
int16_t x498 = INT16_MAX;
int8_t x500 = INT8_MIN;
int16_t x504 = INT16_MIN;
uint32_t x505 = 95U;
volatile uint16_t x506 = 3U;
volatile int8_t x515 = INT8_MAX;
int32_t t107 = -797810;
volatile uint32_t x521 = 28225U;
int8_t x524 = 7;
int8_t x536 = INT8_MIN;
int16_t x548 = 1572;
volatile int64_t x556 = -120LL;
uint32_t x561 = 12418U;
int16_t x564 = INT16_MAX;
volatile int32_t t116 = 1765;
static uint16_t x574 = 1207U;
static volatile int8_t x577 = INT8_MAX;
static int8_t x583 = INT8_MIN;
volatile int32_t t119 = -389;
static uint8_t x585 = 0U;
volatile uint64_t x596 = UINT64_MAX;
volatile int16_t x598 = 1966;
int16_t x600 = INT16_MIN;
int32_t t123 = -1;
int16_t x601 = INT16_MAX;
uint32_t x602 = UINT32_MAX;
static int16_t x603 = INT16_MIN;
int32_t x604 = -1;
static uint8_t x607 = 0U;
volatile uint8_t x610 = 62U;
volatile int32_t x612 = INT32_MAX;
int32_t x613 = -61;
int8_t x614 = INT8_MIN;
static int16_t x619 = INT16_MIN;
int32_t t128 = -2;
static uint16_t x621 = UINT16_MAX;
uint64_t x630 = 2LLU;
int16_t x638 = INT16_MIN;
static int32_t t133 = 1913;
static volatile uint16_t x651 = 25742U;
static volatile int8_t x652 = INT8_MAX;
int16_t x669 = INT16_MAX;
volatile int32_t t140 = -411;
static volatile uint8_t x683 = 9U;
int64_t x699 = 3LL;
static volatile uint32_t x702 = 20705488U;
uint8_t x703 = 1U;
uint64_t x706 = 73247LLU;
int32_t t146 = 15526867;
int32_t x709 = INT32_MIN;
int8_t x710 = 2;
int16_t x712 = INT16_MAX;
static int64_t x713 = -1LL;
static uint8_t x714 = UINT8_MAX;
uint64_t x715 = UINT64_MAX;
volatile uint32_t x716 = UINT32_MAX;
int32_t t150 = 58;
int32_t x739 = 750500;
int32_t x741 = -1;
int16_t x742 = -4798;
volatile uint64_t x744 = 7930278983LLU;
int32_t x747 = INT32_MIN;
volatile int32_t t158 = -640248848;
int32_t x761 = INT32_MIN;
int64_t x762 = INT64_MAX;
int8_t x765 = -1;
volatile uint64_t x766 = 173548113662113LLU;
uint16_t x769 = 1U;
static volatile int32_t t161 = 0;
int8_t x773 = INT8_MIN;
int32_t x776 = -47;
int32_t t162 = 234449942;
volatile int32_t x778 = -1;
int32_t t163 = -86;
static uint32_t x788 = 215436373U;
volatile int32_t t167 = -1219469;
int8_t x808 = INT8_MIN;
int32_t x812 = -1;
volatile int32_t t171 = 29845;
uint32_t x813 = UINT32_MAX;
int16_t x819 = -1637;
volatile int32_t t173 = 3989;
int32_t x821 = INT32_MIN;
volatile int32_t t175 = -1012;
static volatile int16_t x830 = INT16_MIN;
static volatile int16_t x836 = -4;
static volatile int32_t t177 = -251864;
int8_t x837 = INT8_MIN;
int8_t x849 = INT8_MAX;
int16_t x850 = INT16_MIN;
uint64_t x852 = 3107504376710945LLU;
volatile int32_t t183 = 200430453;
uint16_t x873 = UINT16_MAX;
int8_t x875 = INT8_MIN;
static int32_t t186 = 186357983;
volatile int16_t x888 = -1;
int16_t x890 = -1;
static volatile int32_t t190 = -3;
int32_t t191 = -428;
volatile int32_t t192 = -15885173;
static int32_t t193 = 2148003;
static int32_t x909 = -1;
static uint16_t x915 = 15042U;
int64_t x929 = -1LL;
volatile uint32_t x930 = UINT32_MAX;
int16_t x931 = 2;


void f0(void) {
    	uint64_t x1 = 43095LLU;
	static volatile uint32_t x3 = 52851595U;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -1387585;

    t0 = (x1<=(x2%(x3+x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = 21U;
	volatile uint8_t x7 = 41U;
	volatile int64_t x8 = 400985518834138849LL;

    t1 = (x5<=(x6%(x7+x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x13 = INT32_MAX;
	uint32_t x14 = 43014U;
	static int64_t x16 = -13267516587LL;
	volatile int32_t t2 = 1;

    t2 = (x13<=(x14%(x15+x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x18 = UINT8_MAX;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = 9;
	int32_t t3 = -606;

    t3 = (x17<=(x18%(x19+x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x21 = -1;
	int8_t x23 = 13;
	static volatile int32_t t4 = -214;

    t4 = (x21<=(x22%(x23+x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x29 = -1;
	int32_t x30 = 11008815;
	int16_t x31 = -1;
	uint32_t x32 = 1931935935U;

    t5 = (x29<=(x30%(x31+x32)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = INT32_MAX;
	static int64_t x34 = -1LL;
	static int32_t x35 = -4346704;
	volatile int32_t t6 = -174;

    t6 = (x33<=(x34%(x35+x36)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x37 = UINT16_MAX;
	volatile int32_t x38 = -1;
	int64_t x39 = INT64_MIN;
	static volatile uint64_t x40 = 6164552395747688658LLU;
	int32_t t7 = 5533642;

    t7 = (x37<=(x38%(x39+x40)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = 33970667;
	uint16_t x42 = 141U;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = 27U;
	volatile int32_t t8 = 1325032;

    t8 = (x41<=(x42%(x43+x44)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x46 = -1LL;
	uint16_t x47 = UINT16_MAX;
	static int16_t x48 = -1;
	int32_t t9 = -623;

    t9 = (x45<=(x46%(x47+x48)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x53 = 1111U;
	int64_t x54 = INT64_MAX;
	int64_t x55 = INT64_MIN;
	volatile uint8_t x56 = UINT8_MAX;
	int32_t t10 = -1014332793;

    t10 = (x53<=(x54%(x55+x56)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = INT16_MIN;
	int64_t x58 = INT64_MIN;
	static int16_t x59 = INT16_MIN;
	volatile int32_t t11 = 2993744;

    t11 = (x57<=(x58%(x59+x60)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x61 = 1250384171649562308LLU;
	uint64_t x62 = UINT64_MAX;
	volatile int16_t x64 = -595;

    t12 = (x61<=(x62%(x63+x64)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x65 = -27;
	volatile uint16_t x66 = 1U;
	static volatile int8_t x67 = -1;
	int8_t x68 = 6;
	int32_t t13 = -290075;

    t13 = (x65<=(x66%(x67+x68)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MIN;
	uint16_t x84 = UINT16_MAX;

    t14 = (x81<=(x82%(x83+x84)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x86 = -1;
	volatile int32_t t15 = -793838334;

    t15 = (x85<=(x86%(x87+x88)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x90 = INT8_MIN;
	uint16_t x92 = UINT16_MAX;

    t16 = (x89<=(x90%(x91+x92)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x94 = 10123U;
	volatile int8_t x95 = INT8_MIN;
	uint16_t x96 = 25U;
	volatile int32_t t17 = 2396;

    t17 = (x93<=(x94%(x95+x96)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x97 = INT8_MIN;
	int32_t x99 = INT32_MIN;
	volatile int32_t t18 = -2;

    t18 = (x97<=(x98%(x99+x100)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x106 = 11;
	int16_t x107 = -328;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t19 = 16530781;

    t19 = (x105<=(x106%(x107+x108)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x109 = INT32_MIN;
	uint32_t x110 = 629U;
	volatile int8_t x111 = -6;
	int32_t x112 = INT32_MAX;
	volatile int32_t t20 = 112;

    t20 = (x109<=(x110%(x111+x112)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x113 = INT16_MIN;
	uint32_t x114 = UINT32_MAX;
	uint32_t x115 = 2U;
	uint32_t x116 = UINT32_MAX;
	int32_t t21 = 192;

    t21 = (x113<=(x114%(x115+x116)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x117 = -3454LL;
	static uint64_t x119 = 230101607149767611LLU;
	int16_t x120 = INT16_MIN;
	int32_t t22 = -13;

    t22 = (x117<=(x118%(x119+x120)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x123 = UINT64_MAX;
	uint8_t x124 = 33U;
	int32_t t23 = 867;

    t23 = (x121<=(x122%(x123+x124)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x126 = 1844915815393LLU;
	int64_t x128 = -13738863722LL;

    t24 = (x125<=(x126%(x127+x128)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x129 = 15U;
	int16_t x130 = 760;
	int16_t x131 = 3;
	volatile int8_t x132 = INT8_MAX;
	volatile int32_t t25 = 1979;

    t25 = (x129<=(x130%(x131+x132)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x133 = 140045U;
	volatile int64_t x134 = INT64_MAX;
	int16_t x135 = 38;
	volatile int32_t t26 = -216898;

    t26 = (x133<=(x134%(x135+x136)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x137 = INT16_MAX;
	volatile int8_t x138 = INT8_MAX;
	uint64_t x140 = 559553183459LLU;
	int32_t t27 = -874315;

    t27 = (x137<=(x138%(x139+x140)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x141 = INT64_MIN;
	uint64_t x142 = UINT64_MAX;
	volatile uint64_t x144 = 6922828LLU;
	volatile int32_t t28 = 708464792;

    t28 = (x141<=(x142%(x143+x144)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x149 = INT64_MAX;
	static int32_t x150 = -216385360;
	uint64_t x151 = 14876443139257638LLU;
	static int64_t x152 = INT64_MAX;
	int32_t t29 = 126340;

    t29 = (x149<=(x150%(x151+x152)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x153 = 21989U;
	uint32_t x154 = 104U;
	static int32_t x155 = 1023;
	uint64_t x156 = UINT64_MAX;

    t30 = (x153<=(x154%(x155+x156)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x157 = INT64_MAX;
	int8_t x158 = INT8_MIN;
	int64_t x160 = INT64_MAX;
	int32_t t31 = 758572;

    t31 = (x157<=(x158%(x159+x160)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x161 = INT16_MAX;
	uint16_t x162 = 525U;
	static uint32_t x163 = 190382974U;
	static uint32_t x164 = 378U;
	int32_t t32 = -24546;

    t32 = (x161<=(x162%(x163+x164)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x166 = -722228;
	int64_t x168 = 574120LL;
	int32_t t33 = -79557;

    t33 = (x165<=(x166%(x167+x168)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x169 = 260468192U;
	static int32_t x170 = INT32_MIN;
	static int8_t x171 = INT8_MIN;
	uint8_t x172 = 4U;
	volatile int32_t t34 = 117942;

    t34 = (x169<=(x170%(x171+x172)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x174 = -1;
	int64_t x175 = -1LL;
	volatile uint16_t x176 = UINT16_MAX;

    t35 = (x173<=(x174%(x175+x176)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x177 = INT32_MAX;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MAX;
	volatile int32_t t36 = -16114;

    t36 = (x177<=(x178%(x179+x180)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x181 = INT16_MAX;
	uint32_t x182 = 1906001537U;
	uint64_t x183 = 6903912874435009LLU;
	int8_t x184 = 33;
	int32_t t37 = -422350077;

    t37 = (x181<=(x182%(x183+x184)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x185 = INT32_MAX;
	volatile int8_t x186 = INT8_MAX;
	int64_t x187 = INT64_MIN;
	int32_t x188 = INT32_MAX;

    t38 = (x185<=(x186%(x187+x188)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x189 = 856006618787162LLU;
	static int8_t x190 = INT8_MAX;
	uint8_t x192 = 22U;
	int32_t t39 = 3;

    t39 = (x189<=(x190%(x191+x192)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x197 = 2LL;
	static int8_t x198 = INT8_MIN;
	static volatile int32_t x199 = -2346;
	int16_t x200 = INT16_MIN;
	volatile int32_t t40 = 39;

    t40 = (x197<=(x198%(x199+x200)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x201 = 504;
	static uint16_t x203 = 7337U;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t41 = 3;

    t41 = (x201<=(x202%(x203+x204)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x205 = INT64_MIN;
	int64_t x207 = -16112796LL;
	volatile int8_t x208 = 15;
	volatile int32_t t42 = -25916806;

    t42 = (x205<=(x206%(x207+x208)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x209 = 23074U;
	uint32_t x210 = UINT32_MAX;
	uint8_t x211 = UINT8_MAX;
	uint8_t x212 = 18U;
	int32_t t43 = 74;

    t43 = (x209<=(x210%(x211+x212)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x213 = -1;
	uint32_t x214 = 719024593U;
	volatile uint8_t x215 = UINT8_MAX;
	int16_t x216 = INT16_MAX;
	volatile int32_t t44 = -500;

    t44 = (x213<=(x214%(x215+x216)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x217 = INT64_MAX;
	int32_t x218 = 71291517;
	int32_t x219 = INT32_MIN;
	volatile int16_t x220 = INT16_MAX;
	volatile int32_t t45 = -510;

    t45 = (x217<=(x218%(x219+x220)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x221 = UINT32_MAX;
	int64_t x222 = -1LL;
	static volatile int32_t x223 = INT32_MIN;
	static uint8_t x224 = 10U;
	static volatile int32_t t46 = 80325;

    t46 = (x221<=(x222%(x223+x224)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x225 = -359850;
	volatile uint8_t x226 = 13U;
	volatile int8_t x227 = INT8_MIN;
	int32_t x228 = -53;
	int32_t t47 = -14;

    t47 = (x225<=(x226%(x227+x228)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x229 = -1;
	int8_t x230 = 35;
	int16_t x231 = -29;
	int8_t x232 = 0;
	int32_t t48 = 105277060;

    t48 = (x229<=(x230%(x231+x232)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x238 = INT64_MAX;
	int32_t x239 = -195341;
	volatile uint64_t x240 = UINT64_MAX;

    t49 = (x237<=(x238%(x239+x240)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x241 = INT64_MAX;
	volatile uint64_t x242 = 743663695LLU;
	static int32_t x244 = -1;
	static int32_t t50 = 373334;

    t50 = (x241<=(x242%(x243+x244)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x245 = -11;
	int8_t x246 = INT8_MIN;
	static int32_t x247 = -1;

    t51 = (x245<=(x246%(x247+x248)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x249 = 45U;
	static volatile int16_t x250 = INT16_MIN;
	int16_t x251 = INT16_MIN;
	volatile int8_t x252 = 1;
	volatile int32_t t52 = 32575882;

    t52 = (x249<=(x250%(x251+x252)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x257 = -1;
	int16_t x258 = -797;
	static int64_t x259 = INT64_MIN;
	static uint16_t x260 = 855U;

    t53 = (x257<=(x258%(x259+x260)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x262 = 242847;
	static int32_t x264 = 2066563;
	volatile int32_t t54 = -1;

    t54 = (x261<=(x262%(x263+x264)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x265 = 0;
	int16_t x266 = -3;
	uint8_t x267 = 7U;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t55 = 4059260;

    t55 = (x265<=(x266%(x267+x268)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x269 = UINT8_MAX;
	uint32_t x270 = 2U;
	volatile uint32_t x271 = 1239018U;
	int64_t x272 = 448LL;
	int32_t t56 = -4054;

    t56 = (x269<=(x270%(x271+x272)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x274 = UINT16_MAX;
	int64_t x275 = INT64_MAX;
	static uint64_t x276 = 2515LLU;
	volatile int32_t t57 = -311;

    t57 = (x273<=(x274%(x275+x276)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x277 = 12877951481LLU;
	static uint8_t x278 = 4U;
	static int32_t t58 = -5835;

    t58 = (x277<=(x278%(x279+x280)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x289 = INT64_MAX;
	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MAX;
	int32_t t59 = 1;

    t59 = (x289<=(x290%(x291+x292)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x293 = 494998231LLU;
	int8_t x294 = INT8_MIN;
	uint8_t x295 = 20U;
	volatile uint32_t x296 = UINT32_MAX;
	volatile int32_t t60 = -1;

    t60 = (x293<=(x294%(x295+x296)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x297 = -1;
	int16_t x298 = INT16_MIN;
	int32_t t61 = -267272470;

    t61 = (x297<=(x298%(x299+x300)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x301 = 66839703U;
	int64_t x302 = -1LL;
	uint8_t x303 = 66U;
	volatile int32_t t62 = -12042;

    t62 = (x301<=(x302%(x303+x304)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x309 = -1;
	static int64_t x310 = INT64_MIN;
	static int64_t x311 = -1LL;
	static uint32_t x312 = 4854U;
	int32_t t63 = 1;

    t63 = (x309<=(x310%(x311+x312)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x317 = 351892U;
	int16_t x318 = -344;
	static uint32_t x319 = 546671294U;
	uint8_t x320 = UINT8_MAX;
	int32_t t64 = -51290;

    t64 = (x317<=(x318%(x319+x320)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x323 = -257312311;
	volatile int32_t x324 = -1033504;
	static volatile int32_t t65 = -311087961;

    t65 = (x321<=(x322%(x323+x324)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x325 = -1;
	int8_t x326 = -3;
	uint8_t x327 = UINT8_MAX;
	volatile int64_t x328 = -1LL;
	volatile int32_t t66 = 12;

    t66 = (x325<=(x326%(x327+x328)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x329 = INT64_MIN;
	static uint8_t x330 = 35U;
	int8_t x332 = -12;
	static int32_t t67 = -1380332;

    t67 = (x329<=(x330%(x331+x332)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x333 = -1;
	uint16_t x334 = 9562U;
	static int32_t t68 = 0;

    t68 = (x333<=(x334%(x335+x336)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x337 = INT8_MIN;
	int8_t x338 = -9;
	int32_t x339 = INT32_MIN;

    t69 = (x337<=(x338%(x339+x340)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x341 = 1U;
	volatile int32_t x342 = INT32_MAX;
	static uint16_t x343 = UINT16_MAX;
	uint16_t x344 = 11488U;
	volatile int32_t t70 = -245158;

    t70 = (x341<=(x342%(x343+x344)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x345 = 1267014426132LLU;
	static volatile int32_t x346 = INT32_MIN;
	uint16_t x347 = UINT16_MAX;
	volatile int8_t x348 = INT8_MIN;
	static int32_t t71 = 10441659;

    t71 = (x345<=(x346%(x347+x348)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x349 = -392;
	int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MIN;
	uint16_t x352 = 58U;
	int32_t t72 = 29987160;

    t72 = (x349<=(x350%(x351+x352)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x353 = INT32_MAX;
	int8_t x354 = INT8_MAX;
	static volatile int64_t x355 = -6788975254730LL;
	int32_t x356 = INT32_MIN;
	volatile int32_t t73 = -13237;

    t73 = (x353<=(x354%(x355+x356)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x357 = 68905U;
	volatile int16_t x360 = -1;
	volatile int32_t t74 = 1;

    t74 = (x357<=(x358%(x359+x360)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x361 = 9973879048281656LLU;
	int64_t x362 = INT64_MIN;
	static int32_t x364 = -1;

    t75 = (x361<=(x362%(x363+x364)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint8_t x365 = UINT8_MAX;
	volatile int32_t x366 = INT32_MAX;
	uint64_t x367 = 15493832LLU;
	volatile int32_t x368 = 5559441;
	static int32_t t76 = 1653;

    t76 = (x365<=(x366%(x367+x368)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x369 = 9662U;
	volatile int32_t x370 = INT32_MAX;
	int8_t x371 = INT8_MIN;
	static int16_t x372 = 1427;
	int32_t t77 = -761;

    t77 = (x369<=(x370%(x371+x372)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x377 = -1;
	static int16_t x379 = INT16_MAX;
	volatile uint16_t x380 = 2711U;

    t78 = (x377<=(x378%(x379+x380)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x381 = INT8_MIN;
	static uint64_t x382 = 17124657982LLU;
	uint32_t x383 = 249U;
	volatile int32_t t79 = -223464;

    t79 = (x381<=(x382%(x383+x384)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x385 = 29393422407367LL;
	int8_t x386 = -1;
	volatile int8_t x387 = INT8_MAX;
	static int64_t x388 = INT64_MIN;
	volatile int32_t t80 = 8;

    t80 = (x385<=(x386%(x387+x388)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x390 = 6468191023LLU;
	uint8_t x392 = 6U;
	int32_t t81 = -351937;

    t81 = (x389<=(x390%(x391+x392)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x393 = 7391587781LLU;
	int16_t x394 = INT16_MAX;
	static int16_t x396 = -1;
	int32_t t82 = -106149320;

    t82 = (x393<=(x394%(x395+x396)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x401 = INT16_MIN;
	uint16_t x402 = 3227U;
	static int8_t x403 = INT8_MAX;
	static uint32_t x404 = UINT32_MAX;
	volatile int32_t t83 = 1973;

    t83 = (x401<=(x402%(x403+x404)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x406 = 6;
	volatile uint32_t x407 = UINT32_MAX;

    t84 = (x405<=(x406%(x407+x408)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x411 = -1;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t85 = 157048921;

    t85 = (x409<=(x410%(x411+x412)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x413 = UINT8_MAX;
	uint32_t x414 = UINT32_MAX;
	static int32_t x415 = INT32_MIN;
	static volatile uint32_t x416 = 2U;
	int32_t t86 = 516612825;

    t86 = (x413<=(x414%(x415+x416)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x418 = -66026;
	volatile int8_t x419 = -6;
	volatile uint8_t x420 = 1U;

    t87 = (x417<=(x418%(x419+x420)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x422 = INT16_MIN;
	static uint32_t x423 = 6633U;
	int16_t x424 = -11;
	volatile int32_t t88 = -421;

    t88 = (x421<=(x422%(x423+x424)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x425 = INT16_MIN;
	uint8_t x426 = UINT8_MAX;
	int32_t x427 = -342;
	int16_t x428 = INT16_MIN;
	volatile int32_t t89 = 170598;

    t89 = (x425<=(x426%(x427+x428)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x429 = INT8_MIN;
	volatile int16_t x430 = INT16_MIN;
	uint32_t x431 = 1U;
	volatile int8_t x432 = INT8_MAX;

    t90 = (x429<=(x430%(x431+x432)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x433 = 1536U;
	uint16_t x434 = 11U;
	uint16_t x435 = 29U;
	int16_t x436 = -21;
	volatile int32_t t91 = -7772;

    t91 = (x433<=(x434%(x435+x436)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x445 = INT32_MIN;
	volatile int16_t x446 = INT16_MAX;
	int32_t x447 = -53026269;
	int16_t x448 = INT16_MIN;
	static int32_t t92 = 875513;

    t92 = (x445<=(x446%(x447+x448)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x449 = -1LL;
	volatile int32_t x451 = -22;
	volatile int16_t x452 = -1;

    t93 = (x449<=(x450%(x451+x452)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x457 = INT64_MIN;
	int8_t x458 = 1;
	volatile int16_t x459 = INT16_MAX;
	volatile uint64_t x460 = UINT64_MAX;
	volatile int32_t t94 = 38310;

    t94 = (x457<=(x458%(x459+x460)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x461 = -1;
	int64_t x462 = INT64_MIN;
	int64_t x464 = -44984LL;
	volatile int32_t t95 = -10919725;

    t95 = (x461<=(x462%(x463+x464)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int32_t x465 = INT32_MAX;
	uint32_t x467 = UINT32_MAX;
	int64_t x468 = 842787505591LL;
	int32_t t96 = 12586052;

    t96 = (x465<=(x466%(x467+x468)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x469 = -1;
	static volatile uint8_t x471 = UINT8_MAX;
	uint8_t x472 = 1U;

    t97 = (x469<=(x470%(x471+x472)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x473 = 7370U;
	int16_t x474 = -1;
	int32_t x475 = INT32_MIN;
	uint32_t x476 = UINT32_MAX;
	static int32_t t98 = 32083260;

    t98 = (x473<=(x474%(x475+x476)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x481 = INT32_MIN;
	uint16_t x482 = 26239U;
	int64_t x483 = 1438603LL;
	int8_t x484 = INT8_MIN;
	static volatile int32_t t99 = -59;

    t99 = (x481<=(x482%(x483+x484)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x486 = INT32_MIN;
	int32_t x487 = -50223;
	volatile int8_t x488 = INT8_MAX;
	volatile int32_t t100 = -2;

    t100 = (x485<=(x486%(x487+x488)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x489 = 1;
	int32_t x490 = -1;
	int64_t x491 = INT64_MIN;
	volatile int16_t x492 = INT16_MAX;

    t101 = (x489<=(x490%(x491+x492)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x493 = -1;
	int64_t x494 = INT64_MAX;
	uint8_t x495 = UINT8_MAX;
	int32_t x496 = 296;
	volatile int32_t t102 = 424;

    t102 = (x493<=(x494%(x495+x496)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x497 = INT16_MAX;
	int8_t x499 = INT8_MIN;
	int32_t t103 = -45987681;

    t103 = (x497<=(x498%(x499+x500)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x501 = 235392LL;
	volatile int16_t x502 = -3066;
	int32_t x503 = -1;
	volatile int32_t t104 = 13;

    t104 = (x501<=(x502%(x503+x504)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x507 = UINT8_MAX;
	int64_t x508 = INT64_MIN;
	volatile int32_t t105 = 25929816;

    t105 = (x505<=(x506%(x507+x508)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x509 = 9932;
	uint16_t x510 = 14654U;
	volatile int64_t x511 = -1LL;
	volatile int16_t x512 = -452;
	int32_t t106 = -48586;

    t106 = (x509<=(x510%(x511+x512)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x513 = -1;
	int64_t x514 = INT64_MIN;
	int32_t x516 = -1;

    t107 = (x513<=(x514%(x515+x516)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x522 = INT8_MIN;
	uint32_t x523 = 3489579U;
	volatile int32_t t108 = 5011766;

    t108 = (x521<=(x522%(x523+x524)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x525 = -1;
	uint8_t x526 = 4U;
	static int64_t x527 = 13896651890LL;
	int32_t x528 = -1;
	volatile int32_t t109 = 171573;

    t109 = (x525<=(x526%(x527+x528)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x529 = UINT8_MAX;
	int64_t x530 = INT64_MIN;
	volatile int64_t x531 = -1LL;
	int8_t x532 = INT8_MIN;
	volatile int32_t t110 = 0;

    t110 = (x529<=(x530%(x531+x532)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x533 = 73697677;
	int8_t x534 = INT8_MIN;
	static int64_t x535 = -1LL;
	int32_t t111 = 7363;

    t111 = (x533<=(x534%(x535+x536)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x545 = INT16_MIN;
	volatile uint16_t x546 = 1247U;
	volatile int32_t x547 = -1;
	int32_t t112 = -120016416;

    t112 = (x545<=(x546%(x547+x548)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x553 = 2852771812157LL;
	int32_t x554 = INT32_MIN;
	int32_t x555 = INT32_MAX;
	int32_t t113 = 1;

    t113 = (x553<=(x554%(x555+x556)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x557 = INT8_MIN;
	int8_t x558 = INT8_MIN;
	int16_t x559 = -1;
	static int16_t x560 = INT16_MIN;
	volatile int32_t t114 = 23;

    t114 = (x557<=(x558%(x559+x560)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x562 = INT8_MAX;
	int32_t x563 = INT32_MIN;
	int32_t t115 = 2;

    t115 = (x561<=(x562%(x563+x564)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x565 = 6836;
	uint8_t x566 = 76U;
	volatile uint64_t x567 = 1552710LLU;
	int16_t x568 = -2753;

    t116 = (x565<=(x566%(x567+x568)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x573 = UINT64_MAX;
	int32_t x575 = -2;
	static int8_t x576 = -31;
	static int32_t t117 = 244;

    t117 = (x573<=(x574%(x575+x576)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x578 = 54;
	int64_t x579 = INT64_MIN;
	uint16_t x580 = 755U;
	int32_t t118 = -15239486;

    t118 = (x577<=(x578%(x579+x580)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x581 = 1793378U;
	int8_t x582 = 0;
	int16_t x584 = INT16_MAX;

    t119 = (x581<=(x582%(x583+x584)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x586 = 2320768047211465LLU;
	int8_t x587 = -56;
	int32_t x588 = -898120;
	volatile int32_t t120 = 4475;

    t120 = (x585<=(x586%(x587+x588)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x589 = 63U;
	static volatile int16_t x590 = INT16_MIN;
	uint32_t x591 = 26U;
	volatile int32_t x592 = INT32_MIN;
	int32_t t121 = 88;

    t121 = (x589<=(x590%(x591+x592)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x593 = UINT32_MAX;
	uint32_t x594 = UINT32_MAX;
	static int16_t x595 = INT16_MAX;
	int32_t t122 = 1;

    t122 = (x593<=(x594%(x595+x596)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x597 = UINT64_MAX;
	int8_t x599 = 31;

    t123 = (x597<=(x598%(x599+x600)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t t124 = 104;

    t124 = (x601<=(x602%(x603+x604)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x605 = UINT32_MAX;
	int16_t x606 = INT16_MIN;
	static int32_t x608 = INT32_MAX;
	int32_t t125 = -5008972;

    t125 = (x605<=(x606%(x607+x608)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x609 = 1786451;
	static int64_t x611 = INT64_MIN;
	int32_t t126 = -126033;

    t126 = (x609<=(x610%(x611+x612)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x615 = 1;
	static uint16_t x616 = 15U;
	int32_t t127 = -420;

    t127 = (x613<=(x614%(x615+x616)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x617 = 15165U;
	int32_t x618 = INT32_MAX;
	volatile uint16_t x620 = 741U;

    t128 = (x617<=(x618%(x619+x620)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x622 = -87534;
	uint64_t x623 = 768LLU;
	int64_t x624 = INT64_MIN;
	int32_t t129 = 311;

    t129 = (x621<=(x622%(x623+x624)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x625 = 1430;
	int16_t x626 = -660;
	volatile int16_t x627 = -1;
	int16_t x628 = INT16_MAX;
	volatile int32_t t130 = -28781;

    t130 = (x625<=(x626%(x627+x628)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x629 = -1LL;
	uint64_t x631 = 9700LLU;
	static volatile uint16_t x632 = 27U;
	int32_t t131 = -1253;

    t131 = (x629<=(x630%(x631+x632)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x637 = -1;
	uint8_t x639 = 5U;
	uint64_t x640 = 13093561058LLU;
	volatile int32_t t132 = -54440083;

    t132 = (x637<=(x638%(x639+x640)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x641 = 269438;
	static int64_t x642 = -1982LL;
	static uint16_t x643 = 5U;
	uint32_t x644 = 2U;

    t133 = (x641<=(x642%(x643+x644)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x645 = UINT16_MAX;
	int16_t x646 = INT16_MIN;
	static int32_t x647 = INT32_MAX;
	static uint64_t x648 = UINT64_MAX;
	static volatile int32_t t134 = -8;

    t134 = (x645<=(x646%(x647+x648)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x649 = INT16_MIN;
	uint32_t x650 = 251U;
	static volatile int32_t t135 = -4;

    t135 = (x649<=(x650%(x651+x652)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x657 = 4U;
	static uint16_t x658 = 162U;
	uint32_t x659 = 260392488U;
	static int16_t x660 = INT16_MIN;
	int32_t t136 = 3525;

    t136 = (x657<=(x658%(x659+x660)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x661 = INT16_MIN;
	int16_t x662 = INT16_MIN;
	int64_t x663 = -1LL;
	int32_t x664 = -1;
	volatile int32_t t137 = -671036763;

    t137 = (x661<=(x662%(x663+x664)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x665 = INT32_MIN;
	uint16_t x666 = 9U;
	int32_t x667 = INT32_MAX;
	uint64_t x668 = 103864662394596762LLU;
	volatile int32_t t138 = 3;

    t138 = (x665<=(x666%(x667+x668)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x670 = 1564290838191813LLU;
	uint64_t x671 = UINT64_MAX;
	uint32_t x672 = 16U;
	int32_t t139 = 511;

    t139 = (x669<=(x670%(x671+x672)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x673 = 245U;
	int8_t x674 = INT8_MAX;
	int64_t x675 = INT64_MIN;
	int8_t x676 = INT8_MAX;

    t140 = (x673<=(x674%(x675+x676)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x681 = 2U;
	int64_t x682 = 3498535607697998LL;
	uint16_t x684 = UINT16_MAX;
	int32_t t141 = 14626;

    t141 = (x681<=(x682%(x683+x684)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x685 = 9814U;
	int32_t x686 = 3763;
	int32_t x687 = -2966119;
	int32_t x688 = -1;
	static volatile int32_t t142 = 743058;

    t142 = (x685<=(x686%(x687+x688)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x693 = -1LL;
	uint8_t x694 = 1U;
	int64_t x695 = -1LL;
	static uint64_t x696 = 1072974916540584LLU;
	int32_t t143 = 130078;

    t143 = (x693<=(x694%(x695+x696)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x697 = 146108227U;
	volatile int16_t x698 = INT16_MAX;
	volatile uint32_t x700 = 27U;
	int32_t t144 = 178606;

    t144 = (x697<=(x698%(x699+x700)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x701 = UINT32_MAX;
	volatile int64_t x704 = -37LL;
	int32_t t145 = 279389647;

    t145 = (x701<=(x702%(x703+x704)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x705 = 31191852LLU;
	volatile int64_t x707 = 0LL;
	uint16_t x708 = 186U;

    t146 = (x705<=(x706%(x707+x708)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x711 = 2U;
	int32_t t147 = -243080388;

    t147 = (x709<=(x710%(x711+x712)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t t148 = 30748200;

    t148 = (x713<=(x714%(x715+x716)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x717 = 3202465080579558LLU;
	static uint32_t x718 = 296U;
	int16_t x719 = INT16_MAX;
	uint16_t x720 = 19430U;
	volatile int32_t t149 = 13;

    t149 = (x717<=(x718%(x719+x720)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x721 = -1;
	int64_t x722 = 4954573405LL;
	int8_t x723 = INT8_MIN;
	static int16_t x724 = 14418;

    t150 = (x721<=(x722%(x723+x724)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x725 = -1;
	uint8_t x726 = 15U;
	int16_t x727 = INT16_MIN;
	int16_t x728 = INT16_MAX;
	volatile int32_t t151 = 2997;

    t151 = (x725<=(x726%(x727+x728)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x729 = 0;
	int64_t x730 = INT64_MIN;
	static volatile int16_t x731 = -1;
	uint64_t x732 = 675906760477LLU;
	static int32_t t152 = 1;

    t152 = (x729<=(x730%(x731+x732)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x737 = INT8_MIN;
	volatile int64_t x738 = -1LL;
	static int8_t x740 = INT8_MAX;
	int32_t t153 = -3;

    t153 = (x737<=(x738%(x739+x740)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x743 = INT8_MIN;
	int32_t t154 = 139;

    t154 = (x741<=(x742%(x743+x744)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x745 = INT64_MIN;
	static int8_t x746 = 18;
	uint64_t x748 = UINT64_MAX;
	volatile int32_t t155 = 5;

    t155 = (x745<=(x746%(x747+x748)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x749 = UINT32_MAX;
	volatile int8_t x750 = INT8_MIN;
	volatile uint8_t x751 = 5U;
	uint16_t x752 = 1U;
	volatile int32_t t156 = 15;

    t156 = (x749<=(x750%(x751+x752)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x753 = INT8_MAX;
	volatile int32_t x754 = INT32_MIN;
	uint32_t x755 = 424U;
	int8_t x756 = INT8_MIN;
	static volatile int32_t t157 = -58680;

    t157 = (x753<=(x754%(x755+x756)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x757 = 770337075070LLU;
	int8_t x758 = -13;
	uint8_t x759 = 1U;
	static uint16_t x760 = UINT16_MAX;

    t158 = (x757<=(x758%(x759+x760)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x763 = 0U;
	static int16_t x764 = 2027;
	static volatile int32_t t159 = 52687;

    t159 = (x761<=(x762%(x763+x764)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x767 = INT16_MAX;
	volatile int32_t x768 = INT32_MIN;
	int32_t t160 = -23976385;

    t160 = (x765<=(x766%(x767+x768)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x770 = UINT8_MAX;
	uint8_t x771 = 1U;
	uint64_t x772 = 2483026LLU;

    t161 = (x769<=(x770%(x771+x772)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x774 = 0LL;
	static uint16_t x775 = 30U;

    t162 = (x773<=(x774%(x775+x776)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x777 = 107U;
	uint8_t x779 = UINT8_MAX;
	int8_t x780 = 63;

    t163 = (x777<=(x778%(x779+x780)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x781 = -1285412LL;
	volatile int16_t x782 = -1;
	int16_t x783 = -1;
	uint8_t x784 = UINT8_MAX;
	int32_t t164 = 194000022;

    t164 = (x781<=(x782%(x783+x784)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x785 = INT64_MIN;
	static int64_t x786 = INT64_MAX;
	static uint32_t x787 = 79836U;
	volatile int32_t t165 = 408184000;

    t165 = (x785<=(x786%(x787+x788)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x789 = 3264470086569LL;
	int8_t x790 = -1;
	int64_t x791 = -1LL;
	int32_t x792 = INT32_MIN;
	volatile int32_t t166 = -410099;

    t166 = (x789<=(x790%(x791+x792)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x793 = 0;
	uint8_t x794 = 43U;
	uint8_t x795 = UINT8_MAX;
	int32_t x796 = 952400;

    t167 = (x793<=(x794%(x795+x796)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x797 = -30054LL;
	static uint16_t x798 = UINT16_MAX;
	int64_t x799 = -8029864LL;
	int8_t x800 = -1;
	volatile int32_t t168 = -132479;

    t168 = (x797<=(x798%(x799+x800)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x801 = 3U;
	volatile int16_t x802 = -1;
	uint32_t x803 = 11U;
	static uint16_t x804 = 8U;
	int32_t t169 = 0;

    t169 = (x801<=(x802%(x803+x804)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x805 = -55;
	int16_t x806 = INT16_MAX;
	static int8_t x807 = INT8_MIN;
	int32_t t170 = -3;

    t170 = (x805<=(x806%(x807+x808)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x809 = INT64_MIN;
	int8_t x810 = INT8_MIN;
	int64_t x811 = -1LL;

    t171 = (x809<=(x810%(x811+x812)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x814 = INT32_MIN;
	uint8_t x815 = 2U;
	int32_t x816 = -1;
	int32_t t172 = 118;

    t172 = (x813<=(x814%(x815+x816)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x817 = -820685970239335LL;
	volatile int16_t x818 = INT16_MIN;
	int64_t x820 = -6377422977115LL;

    t173 = (x817<=(x818%(x819+x820)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x822 = INT8_MIN;
	static int64_t x823 = INT64_MAX;
	static int8_t x824 = INT8_MIN;
	int32_t t174 = -6429;

    t174 = (x821<=(x822%(x823+x824)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x825 = INT64_MIN;
	uint16_t x826 = 162U;
	int16_t x827 = -36;
	static int8_t x828 = INT8_MAX;

    t175 = (x825<=(x826%(x827+x828)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x829 = 4235764292321LL;
	uint8_t x831 = 63U;
	volatile uint32_t x832 = UINT32_MAX;
	volatile int32_t t176 = 137729959;

    t176 = (x829<=(x830%(x831+x832)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x833 = 9;
	int32_t x834 = -1;
	uint32_t x835 = 533284451U;

    t177 = (x833<=(x834%(x835+x836)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x838 = INT64_MIN;
	int8_t x839 = INT8_MIN;
	volatile int8_t x840 = INT8_MIN;
	int32_t t178 = -232102848;

    t178 = (x837<=(x838%(x839+x840)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x845 = INT16_MAX;
	uint64_t x846 = 665LLU;
	uint64_t x847 = 600358LLU;
	uint16_t x848 = 3U;
	static volatile int32_t t179 = 345300026;

    t179 = (x845<=(x846%(x847+x848)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x851 = INT8_MAX;
	volatile int32_t t180 = 61984;

    t180 = (x849<=(x850%(x851+x852)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x857 = -1;
	static uint64_t x858 = 5811687LLU;
	uint64_t x859 = UINT64_MAX;
	int16_t x860 = INT16_MIN;
	int32_t t181 = -35;

    t181 = (x857<=(x858%(x859+x860)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x861 = INT32_MAX;
	int16_t x862 = -1;
	int64_t x863 = INT64_MIN;
	uint64_t x864 = 1725934501LLU;
	static int32_t t182 = -1188;

    t182 = (x861<=(x862%(x863+x864)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x865 = INT64_MAX;
	static uint64_t x866 = 469467131LLU;
	static int64_t x867 = INT64_MAX;
	static volatile int8_t x868 = INT8_MIN;

    t183 = (x865<=(x866%(x867+x868)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x869 = INT8_MIN;
	uint8_t x870 = 6U;
	int8_t x871 = INT8_MAX;
	int16_t x872 = 9465;
	volatile int32_t t184 = -1490;

    t184 = (x869<=(x870%(x871+x872)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x874 = -1;
	int16_t x876 = INT16_MIN;
	volatile int32_t t185 = 41702;

    t185 = (x873<=(x874%(x875+x876)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x877 = 4640040;
	uint8_t x878 = UINT8_MAX;
	uint8_t x879 = UINT8_MAX;
	uint32_t x880 = 7163U;

    t186 = (x877<=(x878%(x879+x880)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x881 = INT64_MIN;
	uint8_t x882 = UINT8_MAX;
	int16_t x883 = -1;
	int32_t x884 = INT32_MAX;
	int32_t t187 = -169;

    t187 = (x881<=(x882%(x883+x884)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x885 = INT8_MIN;
	int64_t x886 = 4200777LL;
	static volatile uint16_t x887 = 7U;
	int32_t t188 = -222;

    t188 = (x885<=(x886%(x887+x888)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x889 = -112051001359LL;
	int64_t x891 = INT64_MIN;
	uint32_t x892 = UINT32_MAX;
	int32_t t189 = -85170285;

    t189 = (x889<=(x890%(x891+x892)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x893 = INT32_MIN;
	static volatile int16_t x894 = 107;
	int16_t x895 = INT16_MIN;
	uint64_t x896 = 1631701929LLU;

    t190 = (x893<=(x894%(x895+x896)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x897 = 7426;
	volatile int16_t x898 = -17;
	uint16_t x899 = 25U;
	uint8_t x900 = 1U;

    t191 = (x897<=(x898%(x899+x900)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x901 = INT64_MAX;
	uint8_t x902 = 1U;
	static int16_t x903 = INT16_MAX;
	static int32_t x904 = -1;

    t192 = (x901<=(x902%(x903+x904)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x905 = 1;
	int64_t x906 = -1LL;
	static int16_t x907 = INT16_MAX;
	static int64_t x908 = INT64_MIN;

    t193 = (x905<=(x906%(x907+x908)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x910 = 1;
	volatile int32_t x911 = 2;
	static uint32_t x912 = UINT32_MAX;
	volatile int32_t t194 = -23;

    t194 = (x909<=(x910%(x911+x912)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x913 = 0;
	static int64_t x914 = INT64_MAX;
	int32_t x916 = INT32_MIN;
	static int32_t t195 = 3438274;

    t195 = (x913<=(x914%(x915+x916)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x917 = 4;
	uint32_t x918 = 12808591U;
	uint16_t x919 = UINT16_MAX;
	int64_t x920 = INT64_MIN;
	int32_t t196 = -15385733;

    t196 = (x917<=(x918%(x919+x920)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x921 = -1LL;
	uint64_t x922 = UINT64_MAX;
	int32_t x923 = -5465;
	static int8_t x924 = INT8_MIN;
	static int32_t t197 = 239489;

    t197 = (x921<=(x922%(x923+x924)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x925 = INT16_MIN;
	int16_t x926 = INT16_MIN;
	volatile int8_t x927 = INT8_MIN;
	volatile int32_t x928 = -1302358;
	int32_t t198 = -770;

    t198 = (x925<=(x926%(x927+x928)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x932 = -7905;
	static int32_t t199 = -710663036;

    t199 = (x929<=(x930%(x931+x932)));

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

