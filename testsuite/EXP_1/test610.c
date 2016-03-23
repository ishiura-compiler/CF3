
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

static int32_t x2 = INT32_MIN;
volatile int8_t x6 = INT8_MAX;
volatile int32_t t2 = -110823815;
volatile int32_t t3 = 1;
uint16_t x17 = 1U;
volatile int16_t x21 = INT16_MIN;
static int64_t x24 = INT64_MAX;
int64_t x26 = INT64_MIN;
int8_t x28 = 1;
int32_t x29 = INT32_MIN;
volatile uint8_t x34 = UINT8_MAX;
int16_t x41 = INT16_MAX;
volatile uint32_t x48 = UINT32_MAX;
volatile int32_t t11 = -22436;
uint64_t x49 = 1LLU;
volatile int64_t x53 = 513543124LL;
int16_t x54 = 1;
static int64_t x57 = INT64_MIN;
volatile uint8_t x65 = UINT8_MAX;
int8_t x69 = 1;
static uint16_t x72 = 2141U;
int8_t x80 = INT8_MAX;
int8_t x91 = INT8_MIN;
int16_t x94 = INT16_MIN;
uint32_t x95 = UINT32_MAX;
volatile int32_t t21 = 36451;
static volatile int16_t x97 = INT16_MAX;
uint16_t x101 = UINT16_MAX;
static volatile uint64_t x104 = UINT64_MAX;
int32_t x105 = -23;
int8_t x106 = -12;
int32_t t24 = -274881;
static uint16_t x110 = 2769U;
volatile int32_t t27 = -52;
uint64_t x122 = 1836317LLU;
volatile int8_t x123 = -61;
int32_t t28 = -1454;
int32_t t29 = -1;
uint8_t x129 = 6U;
int16_t x139 = -6;
volatile int8_t x141 = INT8_MIN;
uint64_t x146 = 5238037LLU;
static int8_t x154 = INT8_MIN;
int64_t x156 = INT64_MAX;
int16_t x157 = -1003;
static uint8_t x158 = 64U;
static uint8_t x163 = UINT8_MAX;
uint16_t x164 = 2U;
int16_t x166 = -1;
int32_t t38 = -4250;
uint32_t x169 = 5U;
volatile int32_t t40 = -44;
int64_t x178 = INT64_MAX;
static volatile int16_t x184 = INT16_MAX;
int16_t x185 = 24;
int64_t x196 = -59LL;
int8_t x198 = 1;
int32_t x201 = INT32_MIN;
uint8_t x202 = 2U;
volatile int32_t t47 = 41140119;
static int16_t x206 = INT16_MIN;
uint16_t x207 = UINT16_MAX;
int32_t t48 = 890006885;
static int32_t x209 = -1;
int16_t x222 = INT16_MIN;
volatile int8_t x223 = -3;
volatile uint8_t x234 = UINT8_MAX;
volatile int32_t t54 = 720067691;
int32_t t55 = -1;
static uint32_t x246 = 70U;
volatile int64_t x254 = -1LL;
static int32_t t58 = 43298;
int64_t x258 = INT64_MIN;
static uint32_t x260 = 2599576U;
volatile int32_t t64 = -85665940;
uint16_t x290 = 26587U;
static uint16_t x291 = 27U;
volatile int32_t t65 = 3;
int32_t t68 = -17995088;
int16_t x306 = INT16_MAX;
int8_t x307 = INT8_MIN;
int8_t x311 = INT8_MAX;
int64_t x316 = INT64_MIN;
int32_t t71 = -198121;
int8_t x321 = 2;
static volatile int64_t x324 = INT64_MIN;
volatile int16_t x328 = INT16_MAX;
int32_t t74 = 1;
int8_t x333 = INT8_MIN;
uint8_t x336 = 5U;
int32_t x360 = 45;
int32_t x361 = -1;
int64_t x372 = -1004148962383LL;
uint16_t x377 = 1U;
int32_t x380 = INT32_MIN;
static int32_t t86 = -23;
int16_t x382 = INT16_MIN;
uint32_t x387 = 5340944U;
static volatile int32_t t88 = -360666060;
int8_t x394 = -1;
int16_t x396 = 12925;
int16_t x397 = INT16_MIN;
uint32_t x398 = 112U;
int32_t t91 = -3221;
int32_t t92 = 17843;
int8_t x439 = INT8_MIN;
int8_t x441 = INT8_MIN;
int8_t x442 = -1;
uint8_t x443 = 31U;
int64_t x452 = INT64_MAX;
int32_t t105 = -5538186;
int32_t t106 = -40;
volatile uint32_t x469 = 1U;
volatile int32_t t110 = -7304383;
volatile int64_t x484 = INT64_MAX;
static uint64_t x486 = UINT64_MAX;
uint32_t x491 = 2U;
static uint16_t x493 = 51U;
static int8_t x496 = 14;
int32_t t115 = 2;
volatile int32_t t116 = -985153;
uint32_t x504 = UINT32_MAX;
int8_t x508 = INT8_MIN;
int16_t x513 = -1;
int64_t x516 = -1LL;
int8_t x517 = INT8_MIN;
volatile int16_t x528 = 13;
volatile int32_t x535 = -1;
uint64_t x537 = 11006LLU;
int16_t x540 = INT16_MIN;
int32_t t126 = 13594;
int16_t x547 = INT16_MIN;
uint64_t x548 = 2116LLU;
static int8_t x552 = -1;
int32_t x557 = INT32_MIN;
int32_t t131 = -31087684;
static int16_t x566 = -1;
int8_t x569 = -1;
int32_t x571 = 6359;
volatile int8_t x574 = -30;
int32_t t134 = -15;
int64_t x579 = -1LL;
int16_t x581 = INT16_MAX;
static int16_t x583 = 70;
int8_t x584 = INT8_MAX;
volatile uint16_t x587 = UINT16_MAX;
int64_t x589 = INT64_MIN;
int8_t x592 = -29;
volatile int32_t x598 = 108019;
int64_t x608 = -525275997324722440LL;
int16_t x614 = 186;
volatile int32_t t145 = -65226597;
int8_t x622 = INT8_MIN;
uint8_t x627 = UINT8_MAX;
int16_t x630 = 2;
uint16_t x631 = UINT16_MAX;
volatile int8_t x634 = INT8_MIN;
int8_t x647 = INT8_MIN;
int64_t x652 = INT64_MIN;
volatile int32_t t155 = -33515;
volatile int16_t x671 = INT16_MAX;
volatile int32_t t157 = -226076;
uint64_t x674 = 11349000LLU;
uint16_t x675 = 398U;
uint16_t x676 = 1970U;
volatile int8_t x684 = INT8_MIN;
static uint32_t x686 = 1U;
volatile int32_t t161 = -1654804;
uint16_t x694 = 6717U;
int32_t t164 = 472;
volatile int16_t x703 = -1;
int32_t t168 = 922;
int32_t x717 = -26736;
int8_t x718 = 2;
int32_t t169 = -22367358;
int16_t x721 = 1;
static uint32_t x729 = 944U;
int32_t x730 = 223910500;
int16_t x731 = -22;
volatile int32_t t175 = -43550;
volatile int64_t x759 = -1LL;
int32_t x762 = INT32_MAX;
volatile int64_t x763 = 1LL;
volatile int8_t x777 = INT8_MAX;
uint64_t x778 = UINT64_MAX;
static int8_t x783 = INT8_MIN;
static int16_t x788 = -1;
int32_t x809 = INT32_MIN;
volatile uint16_t x810 = 87U;
int64_t x815 = 405039LL;
volatile int32_t x816 = INT32_MIN;
static uint16_t x817 = UINT16_MAX;
volatile int32_t t190 = 151023677;
uint8_t x822 = UINT8_MAX;
uint8_t x832 = UINT8_MAX;
static int32_t t193 = -109073117;
static volatile int64_t x836 = -1LL;
volatile int8_t x839 = INT8_MIN;
volatile int64_t x840 = INT64_MIN;
volatile int32_t t195 = 11;
int16_t x849 = 0;
int8_t x855 = -1;
int32_t x860 = INT32_MAX;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int8_t x3 = 0;
	uint64_t x4 = 22778687178150415LLU;
	int32_t t0 = -18686;

    t0 = (((x1/x2)-x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	static int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = -1;

    t1 = (((x5/x6)-x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 99U;
	uint16_t x10 = UINT16_MAX;
	int64_t x11 = 443268LL;
	int32_t x12 = INT32_MIN;

    t2 = (((x9/x10)-x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 1181U;
	int8_t x14 = INT8_MAX;
	static int64_t x15 = -37912410LL;
	int8_t x16 = INT8_MIN;

    t3 = (((x13/x14)-x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MIN;
	int8_t x20 = -23;
	int32_t t4 = -1686560;

    t4 = (((x17/x18)-x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x22 = 9193U;
	uint64_t x23 = UINT64_MAX;
	volatile int32_t t5 = -339;

    t5 = (((x21/x22)-x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 420898949U;
	int8_t x27 = -37;
	static volatile int32_t t6 = 10899;

    t6 = (((x25/x26)-x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x30 = INT32_MIN;
	uint64_t x31 = UINT64_MAX;
	int8_t x32 = -1;
	static volatile int32_t t7 = 1464;

    t7 = (((x29/x30)-x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 8754U;
	int16_t x35 = INT16_MAX;
	uint64_t x36 = 2443890607LLU;
	int32_t t8 = -1409468;

    t8 = (((x33/x34)-x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	uint64_t x38 = 342520152LLU;
	uint8_t x39 = 0U;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 36789414;

    t9 = (((x37/x38)-x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x42 = 12U;
	static uint8_t x43 = UINT8_MAX;
	volatile uint32_t x44 = 303749332U;
	int32_t t10 = -1394575;

    t10 = (((x41/x42)-x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 55U;
	int16_t x46 = -21;
	int64_t x47 = -1LL;

    t11 = (((x45/x46)-x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = -117;
	int32_t x51 = -12909;
	int32_t x52 = 33047981;
	static int32_t t12 = -105103;

    t12 = (((x49/x50)-x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x55 = INT16_MIN;
	static uint8_t x56 = 37U;
	volatile int32_t t13 = -1;

    t13 = (((x53/x54)-x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = INT16_MAX;
	int8_t x59 = -15;
	int16_t x60 = 3405;
	static volatile int32_t t14 = -15551;

    t14 = (((x57/x58)-x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = -1;
	int64_t x62 = INT64_MAX;
	int16_t x63 = INT16_MAX;
	volatile uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = 696923018;

    t15 = (((x61/x62)-x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MIN;
	static volatile int32_t x67 = -1;
	uint64_t x68 = 42LLU;
	volatile int32_t t16 = 474;

    t16 = (((x65/x66)-x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x70 = 2233U;
	static int16_t x71 = INT16_MIN;
	int32_t t17 = -66976;

    t17 = (((x69/x70)-x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = -827;
	static int64_t x78 = 60976611911852738LL;
	uint32_t x79 = 5823U;
	int32_t t18 = 1;

    t18 = (((x77/x78)-x79)==x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MAX;
	uint32_t x82 = 48923U;
	volatile int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MIN;
	static volatile int32_t t19 = 1;

    t19 = (((x81/x82)-x83)==x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x89 = 327U;
	int16_t x90 = INT16_MAX;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t20 = 4;

    t20 = (((x89/x90)-x91)==x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = -1;
	int64_t x96 = INT64_MIN;

    t21 = (((x93/x94)-x95)==x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x98 = 2U;
	int64_t x99 = INT64_MAX;
	int16_t x100 = -1;
	int32_t t22 = -115343228;

    t22 = (((x97/x98)-x99)==x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x102 = INT32_MAX;
	int8_t x103 = -6;
	volatile int32_t t23 = 287318227;

    t23 = (((x101/x102)-x103)==x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x107 = 3U;
	int64_t x108 = INT64_MIN;

    t24 = (((x105/x106)-x107)==x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x109 = -1;
	uint32_t x111 = UINT32_MAX;
	static uint8_t x112 = UINT8_MAX;
	volatile int32_t t25 = 375499516;

    t25 = (((x109/x110)-x111)==x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x113 = UINT8_MAX;
	volatile uint8_t x114 = 28U;
	volatile int8_t x115 = 0;
	uint64_t x116 = 131687713LLU;
	volatile int32_t t26 = -254564;

    t26 = (((x113/x114)-x115)==x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x117 = UINT8_MAX;
	static int64_t x118 = INT64_MIN;
	int64_t x119 = -1LL;
	uint16_t x120 = UINT16_MAX;

    t27 = (((x117/x118)-x119)==x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x121 = INT32_MIN;
	int16_t x124 = INT16_MIN;

    t28 = (((x121/x122)-x123)==x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = -179708906264LL;
	int64_t x126 = INT64_MAX;
	int16_t x127 = -2;
	int8_t x128 = 1;

    t29 = (((x125/x126)-x127)==x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x130 = UINT64_MAX;
	int32_t x131 = -23912683;
	volatile int8_t x132 = -1;
	int32_t t30 = -1096813;

    t30 = (((x129/x130)-x131)==x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = INT64_MIN;
	static int32_t x138 = INT32_MIN;
	static volatile int16_t x140 = INT16_MIN;
	static int32_t t31 = 95706;

    t31 = (((x137/x138)-x139)==x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x142 = 228;
	int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t32 = -6;

    t32 = (((x141/x142)-x143)==x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = INT64_MAX;
	int8_t x147 = 0;
	uint32_t x148 = 1577882U;
	volatile int32_t t33 = 570136276;

    t33 = (((x145/x146)-x147)==x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = INT32_MAX;
	uint16_t x150 = 7930U;
	uint16_t x151 = 9U;
	int8_t x152 = INT8_MIN;
	int32_t t34 = 4496950;

    t34 = (((x149/x150)-x151)==x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x153 = 8;
	int8_t x155 = INT8_MAX;
	int32_t t35 = -1140291;

    t35 = (((x153/x154)-x155)==x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x159 = INT64_MIN;
	int8_t x160 = -1;
	static int32_t t36 = -14366986;

    t36 = (((x157/x158)-x159)==x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = 107162481245LL;
	uint64_t x162 = 84914219993LLU;
	int32_t t37 = 51;

    t37 = (((x161/x162)-x163)==x164);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x165 = INT16_MAX;
	int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MAX;

    t38 = (((x165/x166)-x167)==x168);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x170 = INT32_MIN;
	int16_t x171 = INT16_MIN;
	static volatile int8_t x172 = INT8_MIN;
	volatile int32_t t39 = 26;

    t39 = (((x169/x170)-x171)==x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x173 = INT32_MAX;
	volatile uint32_t x174 = 922543032U;
	static uint16_t x175 = 9U;
	int64_t x176 = -1LL;

    t40 = (((x173/x174)-x175)==x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x177 = 10U;
	uint64_t x179 = UINT64_MAX;
	uint64_t x180 = 75334048029LLU;
	static volatile int32_t t41 = 130537556;

    t41 = (((x177/x178)-x179)==x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x181 = INT64_MAX;
	int8_t x182 = INT8_MIN;
	int16_t x183 = -1;
	static volatile int32_t t42 = 1;

    t42 = (((x181/x182)-x183)==x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x186 = INT16_MIN;
	static uint64_t x187 = 226131488544282LLU;
	static volatile uint8_t x188 = UINT8_MAX;
	volatile int32_t t43 = 7736;

    t43 = (((x185/x186)-x187)==x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x189 = UINT32_MAX;
	static volatile uint16_t x190 = 472U;
	volatile int8_t x191 = INT8_MIN;
	volatile uint32_t x192 = UINT32_MAX;
	volatile int32_t t44 = -236446510;

    t44 = (((x189/x190)-x191)==x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = 16LL;
	int32_t x194 = -1;
	int32_t x195 = -1;
	static int32_t t45 = -51001407;

    t45 = (((x193/x194)-x195)==x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = INT8_MIN;
	static int16_t x199 = INT16_MAX;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t46 = -24;

    t46 = (((x197/x198)-x199)==x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x203 = 63U;
	int32_t x204 = INT32_MIN;

    t47 = (((x201/x202)-x203)==x204);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x205 = -4;
	static uint32_t x208 = 16840238U;

    t48 = (((x205/x206)-x207)==x208);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x210 = 174321509U;
	volatile int8_t x211 = 1;
	int64_t x212 = -1LL;
	int32_t t49 = -110646268;

    t49 = (((x209/x210)-x211)==x212);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x213 = 299279528U;
	uint64_t x214 = UINT64_MAX;
	uint8_t x215 = 9U;
	int8_t x216 = 0;
	volatile int32_t t50 = 229390418;

    t50 = (((x213/x214)-x215)==x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x217 = UINT32_MAX;
	volatile int8_t x218 = -3;
	volatile uint64_t x219 = 120203LLU;
	volatile uint32_t x220 = 177U;
	volatile int32_t t51 = -1509;

    t51 = (((x217/x218)-x219)==x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x221 = 113LL;
	volatile int64_t x224 = INT64_MIN;
	static volatile int32_t t52 = 55575465;

    t52 = (((x221/x222)-x223)==x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x229 = -21022877686077LL;
	int64_t x230 = INT64_MIN;
	int64_t x231 = -1LL;
	static uint64_t x232 = 8LLU;
	int32_t t53 = 225471988;

    t53 = (((x229/x230)-x231)==x232);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x233 = INT16_MAX;
	int64_t x235 = INT64_MAX;
	static volatile int32_t x236 = INT32_MIN;

    t54 = (((x233/x234)-x235)==x236);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = 78651;
	volatile int32_t x238 = INT32_MIN;
	uint8_t x239 = 1U;
	int16_t x240 = INT16_MIN;

    t55 = (((x237/x238)-x239)==x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = INT16_MAX;
	uint16_t x247 = UINT16_MAX;
	int32_t x248 = -28;
	int32_t t56 = -11229117;

    t56 = (((x245/x246)-x247)==x248);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x249 = 113LLU;
	static int64_t x250 = INT64_MAX;
	volatile uint16_t x251 = UINT16_MAX;
	int16_t x252 = -1;
	volatile int32_t t57 = 33933281;

    t57 = (((x249/x250)-x251)==x252);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x253 = -310;
	int64_t x255 = INT64_MAX;
	static int64_t x256 = 1LL;

    t58 = (((x253/x254)-x255)==x256);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x257 = 3;
	int32_t x259 = INT32_MIN;
	int32_t t59 = -239;

    t59 = (((x257/x258)-x259)==x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x261 = 20U;
	static int32_t x262 = INT32_MIN;
	static int16_t x263 = INT16_MIN;
	int8_t x264 = -1;
	volatile int32_t t60 = -48165;

    t60 = (((x261/x262)-x263)==x264);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x265 = 58U;
	volatile int32_t x266 = INT32_MIN;
	uint16_t x267 = 5U;
	int32_t x268 = 13;
	int32_t t61 = -8526;

    t61 = (((x265/x266)-x267)==x268);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x269 = -26;
	int8_t x270 = -1;
	static volatile uint32_t x271 = 22U;
	int64_t x272 = INT64_MIN;
	volatile int32_t t62 = 139652174;

    t62 = (((x269/x270)-x271)==x272);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x273 = INT16_MAX;
	int16_t x274 = INT16_MIN;
	static int16_t x275 = 14994;
	volatile int64_t x276 = 1057237942LL;
	volatile int32_t t63 = -364832419;

    t63 = (((x273/x274)-x275)==x276);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x285 = 0U;
	int8_t x286 = INT8_MIN;
	uint16_t x287 = UINT16_MAX;
	volatile uint8_t x288 = UINT8_MAX;

    t64 = (((x285/x286)-x287)==x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x289 = INT32_MIN;
	uint8_t x292 = 2U;

    t65 = (((x289/x290)-x291)==x292);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x293 = 139249U;
	static int32_t x294 = INT32_MIN;
	volatile uint32_t x295 = 52773160U;
	int8_t x296 = 28;
	static int32_t t66 = 30;

    t66 = (((x293/x294)-x295)==x296);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x297 = -1;
	int32_t x298 = -7;
	uint64_t x299 = UINT64_MAX;
	int32_t x300 = INT32_MIN;
	volatile int32_t t67 = -20;

    t67 = (((x297/x298)-x299)==x300);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x301 = -1;
	int32_t x302 = 286562645;
	uint8_t x303 = 90U;
	int8_t x304 = INT8_MIN;

    t68 = (((x301/x302)-x303)==x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x305 = 1552U;
	volatile int64_t x308 = -1LL;
	int32_t t69 = -4377683;

    t69 = (((x305/x306)-x307)==x308);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint64_t x309 = 30LLU;
	static int16_t x310 = -807;
	int32_t x312 = INT32_MIN;
	int32_t t70 = 1;

    t70 = (((x309/x310)-x311)==x312);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x313 = -1;
	volatile uint64_t x314 = UINT64_MAX;
	static int8_t x315 = -16;

    t71 = (((x313/x314)-x315)==x316);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x317 = 212;
	static int32_t x318 = INT32_MIN;
	static uint32_t x319 = UINT32_MAX;
	int8_t x320 = 1;
	volatile int32_t t72 = -48290952;

    t72 = (((x317/x318)-x319)==x320);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x322 = INT8_MIN;
	static int8_t x323 = -1;
	volatile int32_t t73 = 330802;

    t73 = (((x321/x322)-x323)==x324);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x325 = 203178872U;
	uint64_t x326 = 359823229LLU;
	uint32_t x327 = UINT32_MAX;

    t74 = (((x325/x326)-x327)==x328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x329 = 3103U;
	uint32_t x330 = UINT32_MAX;
	int32_t x331 = -3599787;
	int16_t x332 = INT16_MIN;
	volatile int32_t t75 = 413;

    t75 = (((x329/x330)-x331)==x332);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int64_t x334 = 17646228630507359LL;
	static uint16_t x335 = 0U;
	int32_t t76 = -2821;

    t76 = (((x333/x334)-x335)==x336);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x337 = UINT16_MAX;
	uint32_t x338 = 24U;
	int16_t x339 = INT16_MAX;
	uint8_t x340 = 30U;
	int32_t t77 = 627597;

    t77 = (((x337/x338)-x339)==x340);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x345 = 6669929LLU;
	int64_t x346 = INT64_MIN;
	int32_t x347 = INT32_MIN;
	uint64_t x348 = 41259LLU;
	static volatile int32_t t78 = -1;

    t78 = (((x345/x346)-x347)==x348);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x349 = 45U;
	int8_t x350 = -7;
	int16_t x351 = 844;
	int8_t x352 = 0;
	int32_t t79 = 8893;

    t79 = (((x349/x350)-x351)==x352);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x353 = 1422U;
	volatile uint16_t x354 = 252U;
	int32_t x355 = 461;
	uint64_t x356 = 92090812091145686LLU;
	volatile int32_t t80 = 87877;

    t80 = (((x353/x354)-x355)==x356);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x357 = INT64_MAX;
	uint64_t x358 = UINT64_MAX;
	int8_t x359 = -1;
	volatile int32_t t81 = -64343483;

    t81 = (((x357/x358)-x359)==x360);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x362 = INT32_MIN;
	static uint8_t x363 = UINT8_MAX;
	int64_t x364 = 4094LL;
	static volatile int32_t t82 = -53;

    t82 = (((x361/x362)-x363)==x364);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x365 = -1LL;
	uint64_t x366 = 79685LLU;
	int16_t x367 = INT16_MIN;
	static volatile int8_t x368 = INT8_MAX;
	volatile int32_t t83 = 113416252;

    t83 = (((x365/x366)-x367)==x368);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x369 = 93;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MAX;
	volatile int32_t t84 = 0;

    t84 = (((x369/x370)-x371)==x372);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x373 = 254U;
	int32_t x374 = -1;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;
	volatile int32_t t85 = -660328046;

    t85 = (((x373/x374)-x375)==x376);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x378 = INT8_MAX;
	int64_t x379 = INT64_MAX;

    t86 = (((x377/x378)-x379)==x380);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x381 = INT64_MIN;
	int32_t x383 = INT32_MAX;
	uint32_t x384 = UINT32_MAX;
	static volatile int32_t t87 = -17;

    t87 = (((x381/x382)-x383)==x384);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x385 = -1;
	int8_t x386 = INT8_MIN;
	static int32_t x388 = -1019752;

    t88 = (((x385/x386)-x387)==x388);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MIN;
	int16_t x391 = -1;
	static volatile uint64_t x392 = 22342208263LLU;
	volatile int32_t t89 = 1247;

    t89 = (((x389/x390)-x391)==x392);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x393 = INT32_MAX;
	static int32_t x395 = -26616607;
	volatile int32_t t90 = -30462716;

    t90 = (((x393/x394)-x395)==x396);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x399 = 107;
	uint16_t x400 = 270U;

    t91 = (((x397/x398)-x399)==x400);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x401 = UINT8_MAX;
	volatile int32_t x402 = INT32_MIN;
	static int32_t x403 = 0;
	int64_t x404 = -164447LL;

    t92 = (((x401/x402)-x403)==x404);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x405 = 7600980;
	uint16_t x406 = UINT16_MAX;
	static int8_t x407 = 0;
	uint8_t x408 = 26U;
	volatile int32_t t93 = -20;

    t93 = (((x405/x406)-x407)==x408);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x409 = UINT64_MAX;
	volatile int16_t x410 = 1;
	int8_t x411 = INT8_MIN;
	static int16_t x412 = INT16_MIN;
	static volatile int32_t t94 = 49;

    t94 = (((x409/x410)-x411)==x412);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x413 = INT16_MAX;
	static uint16_t x414 = 1637U;
	uint8_t x415 = UINT8_MAX;
	static int16_t x416 = INT16_MIN;
	int32_t t95 = -238;

    t95 = (((x413/x414)-x415)==x416);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x417 = INT64_MIN;
	uint32_t x418 = 11517U;
	uint8_t x419 = 0U;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t96 = 828;

    t96 = (((x417/x418)-x419)==x420);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x421 = INT64_MIN;
	int8_t x422 = 11;
	uint64_t x423 = 16203LLU;
	int64_t x424 = INT64_MIN;
	volatile int32_t t97 = -5;

    t97 = (((x421/x422)-x423)==x424);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x425 = 3;
	uint16_t x426 = 116U;
	uint8_t x427 = UINT8_MAX;
	int8_t x428 = INT8_MAX;
	volatile int32_t t98 = 659234352;

    t98 = (((x425/x426)-x427)==x428);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x429 = 221874;
	int16_t x430 = -19;
	volatile int64_t x431 = INT64_MIN;
	volatile uint64_t x432 = UINT64_MAX;
	volatile int32_t t99 = 19491;

    t99 = (((x429/x430)-x431)==x432);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x433 = INT32_MIN;
	int64_t x434 = -1LL;
	uint8_t x435 = 15U;
	volatile uint16_t x436 = 29U;
	int32_t t100 = -1141;

    t100 = (((x433/x434)-x435)==x436);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x437 = -317;
	int16_t x438 = INT16_MIN;
	int8_t x440 = 1;
	static volatile int32_t t101 = -5;

    t101 = (((x437/x438)-x439)==x440);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x444 = 111U;
	static volatile int32_t t102 = 289688;

    t102 = (((x441/x442)-x443)==x444);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x445 = INT16_MIN;
	volatile uint8_t x446 = UINT8_MAX;
	int32_t x447 = 31475;
	int16_t x448 = INT16_MIN;
	volatile int32_t t103 = 122;

    t103 = (((x445/x446)-x447)==x448);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x449 = -9;
	int64_t x450 = -1LL;
	uint64_t x451 = 3192031862732LLU;
	volatile int32_t t104 = 42310;

    t104 = (((x449/x450)-x451)==x452);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x453 = -1LL;
	static volatile int64_t x454 = INT64_MIN;
	uint16_t x455 = 2189U;
	static uint32_t x456 = UINT32_MAX;

    t105 = (((x453/x454)-x455)==x456);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x457 = -1989;
	int8_t x458 = -51;
	int16_t x459 = INT16_MIN;
	uint64_t x460 = 54192LLU;

    t106 = (((x457/x458)-x459)==x460);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x461 = -1LL;
	int8_t x462 = -1;
	uint8_t x463 = 8U;
	uint32_t x464 = 35U;
	int32_t t107 = 10161;

    t107 = (((x461/x462)-x463)==x464);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x465 = UINT32_MAX;
	uint64_t x466 = 9288488566297148LLU;
	static uint32_t x467 = UINT32_MAX;
	int32_t x468 = INT32_MIN;
	volatile int32_t t108 = -1337015;

    t108 = (((x465/x466)-x467)==x468);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x470 = UINT8_MAX;
	int16_t x471 = -1;
	int64_t x472 = 8379556LL;
	static int32_t t109 = -504;

    t109 = (((x469/x470)-x471)==x472);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x473 = 0U;
	static volatile uint64_t x474 = UINT64_MAX;
	static int64_t x475 = INT64_MAX;
	static int16_t x476 = 36;

    t110 = (((x473/x474)-x475)==x476);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x477 = INT8_MIN;
	static uint64_t x478 = 6690947986483308LLU;
	static int8_t x479 = INT8_MAX;
	uint8_t x480 = 10U;
	int32_t t111 = -309;

    t111 = (((x477/x478)-x479)==x480);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x481 = 4256331499303251LLU;
	int16_t x482 = 7;
	static uint8_t x483 = UINT8_MAX;
	int32_t t112 = -11689604;

    t112 = (((x481/x482)-x483)==x484);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x485 = 2529U;
	int32_t x487 = 183384655;
	int64_t x488 = INT64_MIN;
	static int32_t t113 = -450;

    t113 = (((x485/x486)-x487)==x488);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x489 = 886;
	int64_t x490 = INT64_MIN;
	int32_t x492 = INT32_MAX;
	int32_t t114 = -7194;

    t114 = (((x489/x490)-x491)==x492);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x494 = 47124165;
	static int64_t x495 = -15LL;

    t115 = (((x493/x494)-x495)==x496);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x497 = 0;
	int64_t x498 = INT64_MIN;
	volatile uint32_t x499 = 8421450U;
	int32_t x500 = INT32_MIN;

    t116 = (((x497/x498)-x499)==x500);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x501 = INT64_MAX;
	static int16_t x502 = INT16_MAX;
	uint8_t x503 = 0U;
	int32_t t117 = 7;

    t117 = (((x501/x502)-x503)==x504);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x505 = -1;
	int32_t x506 = -1;
	static volatile uint64_t x507 = 42303168LLU;
	int32_t t118 = -54643;

    t118 = (((x505/x506)-x507)==x508);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x509 = 1303;
	uint32_t x510 = 35U;
	int32_t x511 = 72;
	uint32_t x512 = UINT32_MAX;
	volatile int32_t t119 = -36344606;

    t119 = (((x509/x510)-x511)==x512);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x514 = INT32_MAX;
	static uint8_t x515 = 9U;
	volatile int32_t t120 = 0;

    t120 = (((x513/x514)-x515)==x516);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x518 = INT16_MAX;
	volatile int8_t x519 = -1;
	volatile int32_t x520 = INT32_MIN;
	int32_t t121 = 1;

    t121 = (((x517/x518)-x519)==x520);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x525 = UINT8_MAX;
	static uint16_t x526 = UINT16_MAX;
	uint32_t x527 = 56419U;
	volatile int32_t t122 = 929544215;

    t122 = (((x525/x526)-x527)==x528);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x529 = UINT32_MAX;
	volatile uint8_t x530 = 47U;
	int32_t x531 = -1;
	static int32_t x532 = 4072622;
	static int32_t t123 = 27402938;

    t123 = (((x529/x530)-x531)==x532);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x533 = -5;
	int64_t x534 = INT64_MAX;
	int8_t x536 = INT8_MIN;
	volatile int32_t t124 = 0;

    t124 = (((x533/x534)-x535)==x536);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x538 = 1;
	uint64_t x539 = UINT64_MAX;
	int32_t t125 = 30;

    t125 = (((x537/x538)-x539)==x540);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x541 = -1489715;
	static int64_t x542 = INT64_MAX;
	int16_t x543 = INT16_MAX;
	static uint64_t x544 = 1222LLU;

    t126 = (((x541/x542)-x543)==x544);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x545 = -1;
	uint32_t x546 = UINT32_MAX;
	int32_t t127 = 11;

    t127 = (((x545/x546)-x547)==x548);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x549 = 32908LLU;
	uint64_t x550 = 7632713859931530926LLU;
	static uint64_t x551 = 5034LLU;
	int32_t t128 = -636868021;

    t128 = (((x549/x550)-x551)==x552);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x553 = INT64_MIN;
	static int32_t x554 = INT32_MIN;
	static int32_t x555 = -1;
	int8_t x556 = INT8_MAX;
	int32_t t129 = -366122;

    t129 = (((x553/x554)-x555)==x556);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x558 = 288U;
	int32_t x559 = -2817069;
	static int8_t x560 = -1;
	int32_t t130 = 0;

    t130 = (((x557/x558)-x559)==x560);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x561 = INT32_MAX;
	int16_t x562 = INT16_MIN;
	static volatile int32_t x563 = -7542572;
	int32_t x564 = -1533632;

    t131 = (((x561/x562)-x563)==x564);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x565 = 17;
	int8_t x567 = INT8_MIN;
	volatile int32_t x568 = INT32_MIN;
	volatile int32_t t132 = 44046;

    t132 = (((x565/x566)-x567)==x568);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x570 = -12;
	uint64_t x572 = UINT64_MAX;
	int32_t t133 = -13202151;

    t133 = (((x569/x570)-x571)==x572);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x573 = UINT16_MAX;
	volatile uint16_t x575 = UINT16_MAX;
	volatile int16_t x576 = INT16_MAX;

    t134 = (((x573/x574)-x575)==x576);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x577 = UINT32_MAX;
	static int32_t x578 = 3;
	volatile int16_t x580 = -7;
	volatile int32_t t135 = 35;

    t135 = (((x577/x578)-x579)==x580);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x582 = INT16_MIN;
	int32_t t136 = 2;

    t136 = (((x581/x582)-x583)==x584);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x585 = INT64_MIN;
	int64_t x586 = INT64_MIN;
	static volatile int16_t x588 = 1;
	int32_t t137 = -3567131;

    t137 = (((x585/x586)-x587)==x588);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x590 = UINT64_MAX;
	int16_t x591 = INT16_MIN;
	volatile int32_t t138 = 247419;

    t138 = (((x589/x590)-x591)==x592);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x593 = UINT16_MAX;
	int32_t x594 = INT32_MIN;
	uint32_t x595 = UINT32_MAX;
	static int32_t x596 = INT32_MAX;
	volatile int32_t t139 = 388137;

    t139 = (((x593/x594)-x595)==x596);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x597 = -1;
	static int16_t x599 = 12573;
	uint64_t x600 = UINT64_MAX;
	volatile int32_t t140 = -340;

    t140 = (((x597/x598)-x599)==x600);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x601 = UINT64_MAX;
	static int64_t x602 = -1291433LL;
	int32_t x603 = INT32_MIN;
	uint8_t x604 = UINT8_MAX;
	int32_t t141 = 138;

    t141 = (((x601/x602)-x603)==x604);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x605 = UINT8_MAX;
	int32_t x606 = INT32_MIN;
	static volatile uint64_t x607 = 104LLU;
	int32_t t142 = -271804508;

    t142 = (((x605/x606)-x607)==x608);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x609 = INT8_MAX;
	volatile int8_t x610 = INT8_MAX;
	int16_t x611 = -1;
	static uint64_t x612 = 403943933LLU;
	static int32_t t143 = 0;

    t143 = (((x609/x610)-x611)==x612);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x613 = -1;
	int32_t x615 = INT32_MAX;
	int64_t x616 = INT64_MIN;
	static int32_t t144 = -6919540;

    t144 = (((x613/x614)-x615)==x616);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x617 = INT16_MIN;
	static uint16_t x618 = 10U;
	uint16_t x619 = UINT16_MAX;
	int32_t x620 = -1;

    t145 = (((x617/x618)-x619)==x620);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x621 = INT32_MIN;
	volatile uint64_t x623 = UINT64_MAX;
	uint8_t x624 = UINT8_MAX;
	volatile int32_t t146 = -22179;

    t146 = (((x621/x622)-x623)==x624);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x625 = INT8_MIN;
	static int32_t x626 = 1;
	int8_t x628 = -1;
	volatile int32_t t147 = 145995;

    t147 = (((x625/x626)-x627)==x628);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x629 = INT16_MAX;
	static uint16_t x632 = 18445U;
	int32_t t148 = -395113;

    t148 = (((x629/x630)-x631)==x632);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x633 = INT64_MAX;
	volatile int8_t x635 = INT8_MIN;
	int16_t x636 = INT16_MIN;
	int32_t t149 = -113462;

    t149 = (((x633/x634)-x635)==x636);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x637 = -1;
	static volatile int32_t x638 = INT32_MIN;
	int16_t x639 = INT16_MIN;
	uint8_t x640 = 0U;
	volatile int32_t t150 = -14355516;

    t150 = (((x637/x638)-x639)==x640);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x641 = INT16_MIN;
	uint16_t x642 = 17U;
	static uint16_t x643 = UINT16_MAX;
	int8_t x644 = -3;
	int32_t t151 = 2876159;

    t151 = (((x641/x642)-x643)==x644);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x645 = INT32_MAX;
	uint8_t x646 = UINT8_MAX;
	int16_t x648 = -1;
	volatile int32_t t152 = 1062343;

    t152 = (((x645/x646)-x647)==x648);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x649 = -15;
	int16_t x650 = -117;
	volatile int64_t x651 = INT64_MAX;
	volatile int32_t t153 = -642;

    t153 = (((x649/x650)-x651)==x652);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x653 = -26;
	int64_t x654 = -97598LL;
	volatile int8_t x655 = INT8_MIN;
	volatile uint32_t x656 = UINT32_MAX;
	static int32_t t154 = -487871911;

    t154 = (((x653/x654)-x655)==x656);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x657 = INT16_MIN;
	int16_t x658 = 15;
	volatile uint8_t x659 = 51U;
	int8_t x660 = INT8_MIN;

    t155 = (((x657/x658)-x659)==x660);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x661 = -2973633606234591048LL;
	int64_t x662 = INT64_MAX;
	int32_t x663 = 134152767;
	int64_t x664 = 1152408LL;
	static volatile int32_t t156 = 0;

    t156 = (((x661/x662)-x663)==x664);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x669 = INT8_MIN;
	static volatile int8_t x670 = INT8_MIN;
	volatile int16_t x672 = INT16_MIN;

    t157 = (((x669/x670)-x671)==x672);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x673 = 89U;
	volatile int32_t t158 = -28513;

    t158 = (((x673/x674)-x675)==x676);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x677 = -2220435792862102LL;
	int32_t x678 = INT32_MIN;
	static volatile int64_t x679 = 1LL;
	uint32_t x680 = UINT32_MAX;
	volatile int32_t t159 = -59714;

    t159 = (((x677/x678)-x679)==x680);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x681 = -1LL;
	volatile int64_t x682 = -226330LL;
	volatile uint16_t x683 = 23U;
	volatile int32_t t160 = 392316;

    t160 = (((x681/x682)-x683)==x684);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x685 = INT32_MAX;
	uint16_t x687 = 51U;
	int32_t x688 = 22;

    t161 = (((x685/x686)-x687)==x688);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x689 = 1996U;
	int64_t x690 = -1LL;
	static volatile int8_t x691 = INT8_MIN;
	int32_t x692 = -1813;
	volatile int32_t t162 = 901063643;

    t162 = (((x689/x690)-x691)==x692);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x693 = UINT8_MAX;
	int16_t x695 = 59;
	static uint8_t x696 = UINT8_MAX;
	int32_t t163 = 22;

    t163 = (((x693/x694)-x695)==x696);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x697 = 0U;
	volatile int32_t x698 = -1;
	int16_t x699 = -1;
	static int64_t x700 = -1LL;

    t164 = (((x697/x698)-x699)==x700);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x701 = 1LL;
	int16_t x702 = INT16_MAX;
	volatile int16_t x704 = -16104;
	volatile int32_t t165 = 1658;

    t165 = (((x701/x702)-x703)==x704);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x705 = 1017573U;
	uint64_t x706 = 9222800LLU;
	int16_t x707 = -2;
	int16_t x708 = INT16_MIN;
	volatile int32_t t166 = 0;

    t166 = (((x705/x706)-x707)==x708);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x709 = 22118097065371LL;
	uint64_t x710 = 118403752099585751LLU;
	int64_t x711 = INT64_MAX;
	static uint64_t x712 = UINT64_MAX;
	volatile int32_t t167 = 2617;

    t167 = (((x709/x710)-x711)==x712);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x713 = INT8_MIN;
	static uint8_t x714 = UINT8_MAX;
	int32_t x715 = -435032;
	int16_t x716 = -15467;

    t168 = (((x713/x714)-x715)==x716);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x719 = INT16_MIN;
	int16_t x720 = INT16_MIN;

    t169 = (((x717/x718)-x719)==x720);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x722 = -1;
	static uint32_t x723 = UINT32_MAX;
	static uint16_t x724 = 135U;
	volatile int32_t t170 = -402;

    t170 = (((x721/x722)-x723)==x724);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x732 = 0;
	int32_t t171 = 0;

    t171 = (((x729/x730)-x731)==x732);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x733 = UINT32_MAX;
	uint64_t x734 = 28628LLU;
	uint8_t x735 = UINT8_MAX;
	volatile uint64_t x736 = UINT64_MAX;
	static volatile int32_t t172 = 111;

    t172 = (((x733/x734)-x735)==x736);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x737 = UINT64_MAX;
	int32_t x738 = INT32_MIN;
	int8_t x739 = INT8_MIN;
	int32_t x740 = INT32_MAX;
	volatile int32_t t173 = 439;

    t173 = (((x737/x738)-x739)==x740);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x741 = 29U;
	uint32_t x742 = 104129U;
	uint64_t x743 = 253LLU;
	uint16_t x744 = 242U;
	static volatile int32_t t174 = 1786;

    t174 = (((x741/x742)-x743)==x744);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x745 = INT16_MAX;
	static uint32_t x746 = UINT32_MAX;
	int32_t x747 = 7866345;
	static int64_t x748 = 803718868242919LL;

    t175 = (((x745/x746)-x747)==x748);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x749 = 46159390U;
	static int16_t x750 = INT16_MIN;
	static volatile int8_t x751 = 16;
	static volatile int8_t x752 = INT8_MAX;
	volatile int32_t t176 = 789727;

    t176 = (((x749/x750)-x751)==x752);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x753 = -1;
	volatile int16_t x754 = INT16_MAX;
	static int16_t x755 = INT16_MAX;
	int8_t x756 = -1;
	int32_t t177 = 0;

    t177 = (((x753/x754)-x755)==x756);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x757 = 1;
	static int8_t x758 = INT8_MIN;
	volatile int16_t x760 = INT16_MIN;
	static volatile int32_t t178 = -3606467;

    t178 = (((x757/x758)-x759)==x760);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x761 = 32104LLU;
	int8_t x764 = -2;
	int32_t t179 = 11;

    t179 = (((x761/x762)-x763)==x764);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x765 = INT8_MAX;
	uint16_t x766 = 11U;
	uint64_t x767 = 4LLU;
	int16_t x768 = 17;
	int32_t t180 = -636063494;

    t180 = (((x765/x766)-x767)==x768);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x769 = INT8_MAX;
	int32_t x770 = INT32_MIN;
	int8_t x771 = INT8_MAX;
	int16_t x772 = -1;
	static volatile int32_t t181 = -35391158;

    t181 = (((x769/x770)-x771)==x772);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x773 = INT64_MAX;
	static int64_t x774 = INT64_MIN;
	static volatile uint32_t x775 = 1323U;
	int8_t x776 = 0;
	volatile int32_t t182 = 10970;

    t182 = (((x773/x774)-x775)==x776);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x779 = 210U;
	int16_t x780 = 202;
	static int32_t t183 = -66428;

    t183 = (((x777/x778)-x779)==x780);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x781 = 6916625799LL;
	uint32_t x782 = 11374014U;
	int64_t x784 = INT64_MIN;
	int32_t t184 = -28394807;

    t184 = (((x781/x782)-x783)==x784);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x785 = 354435;
	volatile int16_t x786 = INT16_MIN;
	int16_t x787 = INT16_MIN;
	volatile int32_t t185 = 584;

    t185 = (((x785/x786)-x787)==x788);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x793 = 3669U;
	int16_t x794 = -1;
	uint64_t x795 = 1169221021939LLU;
	volatile uint64_t x796 = UINT64_MAX;
	int32_t t186 = -476211;

    t186 = (((x793/x794)-x795)==x796);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x801 = INT8_MIN;
	volatile int16_t x802 = -1;
	static int64_t x803 = 9714947970397LL;
	uint8_t x804 = 7U;
	int32_t t187 = 70478;

    t187 = (((x801/x802)-x803)==x804);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x811 = 1700442868LLU;
	int8_t x812 = 3;
	volatile int32_t t188 = -518349769;

    t188 = (((x809/x810)-x811)==x812);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x813 = 2U;
	uint8_t x814 = UINT8_MAX;
	int32_t t189 = -9044;

    t189 = (((x813/x814)-x815)==x816);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x818 = INT8_MIN;
	uint16_t x819 = 54U;
	int64_t x820 = 283193677LL;

    t190 = (((x817/x818)-x819)==x820);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x821 = 13969810120LLU;
	uint32_t x823 = 43768U;
	static volatile int64_t x824 = INT64_MIN;
	volatile int32_t t191 = 27991;

    t191 = (((x821/x822)-x823)==x824);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x825 = 5920U;
	static uint16_t x826 = 139U;
	int16_t x827 = -92;
	volatile uint16_t x828 = UINT16_MAX;
	volatile int32_t t192 = 418321469;

    t192 = (((x825/x826)-x827)==x828);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x829 = -1;
	volatile uint32_t x830 = UINT32_MAX;
	int8_t x831 = INT8_MIN;

    t193 = (((x829/x830)-x831)==x832);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x833 = 206U;
	int8_t x834 = INT8_MIN;
	int64_t x835 = 39004558304458LL;
	static volatile int32_t t194 = 1;

    t194 = (((x833/x834)-x835)==x836);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x837 = UINT8_MAX;
	int64_t x838 = INT64_MIN;

    t195 = (((x837/x838)-x839)==x840);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x850 = 3399120647583468460LLU;
	int8_t x851 = INT8_MIN;
	uint64_t x852 = 1622LLU;
	volatile int32_t t196 = 1;

    t196 = (((x849/x850)-x851)==x852);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x853 = INT16_MAX;
	static int32_t x854 = INT32_MAX;
	int32_t x856 = INT32_MIN;
	static int32_t t197 = -687;

    t197 = (((x853/x854)-x855)==x856);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x857 = 16LL;
	int64_t x858 = 4197606482313LL;
	uint8_t x859 = 123U;
	int32_t t198 = 866726;

    t198 = (((x857/x858)-x859)==x860);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x861 = INT32_MIN;
	static volatile int64_t x862 = -1LL;
	int16_t x863 = -15;
	int8_t x864 = -1;
	volatile int32_t t199 = 0;

    t199 = (((x861/x862)-x863)==x864);

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

