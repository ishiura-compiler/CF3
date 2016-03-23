
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

static uint32_t x6 = 42468600U;
uint32_t x10 = UINT32_MAX;
static volatile int16_t x21 = -1;
static uint16_t x24 = UINT16_MAX;
uint16_t x28 = UINT16_MAX;
uint64_t t6 = 29901439160LLU;
uint64_t x32 = 3404705493785693013LLU;
static volatile int8_t x35 = INT8_MAX;
int32_t t8 = 763272529;
uint16_t x37 = 61U;
int64_t x52 = -394539762391LL;
volatile int32_t t12 = 6323448;
uint32_t x56 = UINT32_MAX;
volatile int32_t t14 = -457171192;
volatile uint64_t x81 = 13769387LLU;
uint32_t x84 = 615U;
uint64_t t20 = 59327132LLU;
int32_t x87 = INT32_MIN;
uint16_t x88 = 2230U;
volatile uint16_t x91 = 25686U;
uint32_t x95 = UINT32_MAX;
int64_t x97 = INT64_MIN;
int64_t t24 = 0LL;
static int8_t x101 = -23;
int16_t x118 = -1;
static uint8_t x119 = 0U;
int8_t x120 = -58;
int64_t x122 = -1LL;
int32_t x123 = INT32_MIN;
int16_t x129 = INT16_MAX;
static int8_t x132 = 48;
static int32_t x136 = INT32_MIN;
static int32_t t31 = -261115;
int8_t x138 = -1;
uint64_t x140 = 3641784LLU;
int32_t x142 = -3;
uint16_t x147 = 1U;
int32_t t34 = 112178455;
int32_t x156 = INT32_MIN;
int64_t x157 = INT64_MIN;
int32_t x160 = -1;
int64_t x164 = INT64_MIN;
int16_t x166 = INT16_MIN;
volatile int32_t x179 = 6480275;
int64_t t43 = -3790LL;
int64_t x187 = INT64_MIN;
int8_t x195 = INT8_MIN;
int64_t x199 = INT64_MIN;
int8_t x204 = -1;
uint64_t x206 = UINT64_MAX;
volatile uint32_t x213 = UINT32_MAX;
int64_t x216 = INT64_MAX;
volatile uint32_t t50 = 5190U;
int8_t x220 = 0;
uint8_t x223 = 26U;
volatile int16_t x225 = INT16_MIN;
int8_t x226 = -1;
int32_t t53 = -112747;
static volatile int64_t t54 = -339287689518LL;
int64_t x233 = INT64_MIN;
static int32_t x240 = -1;
volatile int32_t t57 = -130065751;
static uint32_t x248 = 616786U;
static volatile uint8_t x251 = 0U;
static int16_t x262 = 9;
static uint32_t x263 = 38U;
static int16_t x273 = INT16_MIN;
static volatile int64_t x276 = 1LL;
int32_t t64 = 1847013;
int8_t x288 = INT8_MIN;
uint8_t x289 = 26U;
int32_t x293 = -2;
int64_t t69 = -8849724LL;
static int16_t x299 = -1;
volatile int64_t t71 = 5495433LL;
static volatile uint64_t x307 = 816219LLU;
static uint64_t t72 = 2811618800607LLU;
uint16_t x310 = 171U;
uint16_t x312 = UINT16_MAX;
uint64_t x314 = UINT64_MAX;
int32_t x319 = INT32_MIN;
int64_t x322 = INT64_MAX;
int64_t t76 = 98113470446LL;
int32_t x325 = INT32_MIN;
int16_t x330 = INT16_MIN;
int64_t x337 = -11198122LL;
volatile int64_t x342 = -1LL;
static volatile int64_t t80 = -250LL;
volatile int64_t x345 = INT64_MIN;
static int32_t x346 = INT32_MAX;
uint16_t x347 = UINT16_MAX;
static int16_t x348 = -1;
volatile int64_t t81 = 755429LL;
static uint8_t x349 = 102U;
static int64_t x350 = -3081798065024949077LL;
volatile int32_t x351 = -1;
volatile int16_t x357 = -5;
int64_t x358 = INT64_MIN;
volatile int32_t x360 = INT32_MAX;
volatile int64_t t84 = -655744175255LL;
uint16_t x366 = 7709U;
volatile int32_t t85 = 3;
uint64_t x369 = UINT64_MAX;
int64_t x373 = INT64_MIN;
static volatile int16_t x376 = INT16_MIN;
int64_t x381 = INT64_MAX;
static uint16_t x390 = 2U;
int64_t x391 = INT64_MIN;
int64_t t91 = -27LL;
uint64_t x393 = UINT64_MAX;
int16_t x404 = -1;
uint64_t t94 = 743164897825LLU;
volatile int8_t x409 = INT8_MAX;
static uint16_t x411 = 3975U;
uint8_t x416 = 0U;
int8_t x419 = -1;
int64_t x425 = -1LL;
uint8_t x440 = 4U;
int32_t x441 = -1;
int32_t x443 = 11;
int8_t x445 = INT8_MAX;
volatile int32_t t104 = -73230;
uint16_t x455 = 100U;
uint8_t x475 = UINT8_MAX;
uint8_t x482 = 10U;
int32_t x487 = INT32_MAX;
volatile uint64_t t111 = 25821LLU;
int32_t x490 = -1;
uint64_t t112 = 168700519LLU;
int64_t x523 = INT64_MAX;
static uint64_t x525 = 21370LLU;
int32_t x529 = -1;
volatile int32_t t123 = -40755659;
int16_t x543 = INT16_MAX;
int16_t x545 = -1;
static volatile int64_t t127 = -1116575500LL;
static volatile int64_t x556 = INT64_MIN;
volatile uint16_t x559 = 31U;
volatile int32_t t129 = -7872;
int32_t t131 = 17789723;
int32_t x602 = INT32_MAX;
volatile int32_t t137 = -1;
int8_t x613 = -1;
int16_t x614 = -22;
static volatile uint8_t x615 = UINT8_MAX;
uint64_t x616 = 67977LLU;
volatile int32_t x617 = -42752;
int32_t x618 = INT32_MAX;
int8_t x619 = -4;
int64_t x620 = -1LL;
static volatile int32_t t140 = -2;
int32_t x628 = -4;
static int16_t x637 = INT16_MIN;
volatile int32_t x638 = 5201807;
volatile int16_t x644 = -7271;
volatile int32_t t145 = 5859919;
static volatile int32_t t147 = -15475839;
int32_t x655 = -223578;
volatile uint16_t x659 = 0U;
int32_t t149 = -724191;
uint16_t x668 = 12U;
int16_t x674 = 0;
static int16_t x676 = INT16_MIN;
int64_t x677 = -1LL;
static uint32_t x679 = 165858U;
int32_t x681 = INT32_MAX;
int64_t x682 = INT64_MAX;
int64_t x685 = INT64_MAX;
int64_t x689 = -1175140012715812527LL;
static int16_t x690 = INT16_MIN;
int8_t x691 = -1;
volatile int64_t t155 = 60064829LL;
int32_t x698 = INT32_MAX;
int32_t t157 = -1636;
int16_t x705 = INT16_MAX;
int16_t x708 = INT16_MAX;
static int32_t x710 = INT32_MAX;
int64_t x716 = INT64_MAX;
static int32_t t162 = 0;
static int32_t t163 = 4035;
int8_t x727 = -3;
uint16_t x729 = 16120U;
int16_t x731 = -174;
static int64_t t166 = -1097334LL;
volatile uint32_t t167 = 258631899U;
int32_t t168 = -3;
int32_t x750 = -23225438;
volatile int16_t x752 = INT16_MIN;
int32_t t169 = 15978;
uint32_t x756 = 492U;
int32_t x757 = INT32_MIN;
uint32_t x759 = 0U;
static int8_t x760 = -6;
static volatile int64_t t172 = -15LL;
uint32_t x783 = 376U;
volatile uint32_t t177 = 411U;
uint16_t x793 = UINT16_MAX;
int16_t x802 = -890;
int16_t x803 = -1;
int64_t x808 = 63692LL;
static uint16_t x836 = 69U;
uint32_t x841 = 2U;
int64_t t190 = -29892888LL;
static int8_t x845 = -1;
static uint32_t x846 = 142361U;
static uint8_t x850 = UINT8_MAX;
int32_t t192 = -412;
volatile int32_t t193 = 43809478;
uint32_t x858 = UINT32_MAX;
int32_t t195 = 2;
int64_t x873 = INT64_MAX;
int32_t x874 = INT32_MAX;
int32_t x876 = 200155;
int64_t x883 = INT64_MIN;
int32_t x884 = INT32_MIN;


void f0(void) {
    	static uint8_t x1 = 36U;
	int16_t x2 = 1;
	static int64_t x3 = INT64_MIN;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 2502736;

    t0 = (x1%(x2-(x3>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MIN;
	uint16_t x7 = 1U;
	uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = 905703374837476LL;

    t1 = (x5%(x6-(x7>x8)));

    if (t1 != -5377808LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 1377560;
	static int8_t x11 = INT8_MIN;
	static int8_t x12 = 3;
	uint32_t t2 = 3969380U;

    t2 = (x9%(x10-(x11>x12)));

    if (t2 != 1377560U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 78U;
	uint8_t x14 = 3U;
	static uint8_t x15 = 5U;
	static uint16_t x16 = 3U;
	int32_t t3 = -49002562;

    t3 = (x13%(x14-(x15>x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = 1454U;
	volatile int16_t x18 = INT16_MIN;
	uint32_t x19 = 10U;
	static uint64_t x20 = UINT64_MAX;
	uint32_t t4 = 28U;

    t4 = (x17%(x18-(x19>x20)));

    if (t4 != 1454U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MAX;
	uint16_t x23 = UINT16_MAX;
	static int32_t t5 = -24;

    t5 = (x21%(x22-(x23>x24)));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -192331009;
	volatile uint64_t x26 = 3082LLU;
	static uint32_t x27 = UINT32_MAX;

    t6 = (x25%(x26-(x27>x28)));

    if (t6 != 783LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = INT16_MIN;
	volatile int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MAX;
	int32_t t7 = 846;

    t7 = (x29%(x30-(x31>x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 13U;
	int32_t x34 = -1;
	int8_t x36 = -28;

    t8 = (x33%(x34-(x35>x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x38 = 3U;
	static uint64_t x39 = 1205442895858074234LLU;
	volatile int64_t x40 = 2LL;
	volatile int32_t t9 = 6;

    t9 = (x37%(x38-(x39>x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -3;
	uint32_t x42 = 5456U;
	volatile int8_t x43 = INT8_MAX;
	uint64_t x44 = 3325211204405422645LLU;
	static uint32_t t10 = 2099439256U;

    t10 = (x41%(x42-(x43>x44)));

    if (t10 != 4093U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = 13296U;
	uint8_t x46 = 0U;
	static uint8_t x47 = 20U;
	int64_t x48 = -15034LL;
	volatile int32_t t11 = -12181530;

    t11 = (x45%(x46-(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	uint8_t x50 = UINT8_MAX;
	static volatile int64_t x51 = 1530664011159312LL;

    t12 = (x49%(x50-(x51>x52)));

    if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MIN;
	static int16_t x54 = INT16_MIN;
	static int8_t x55 = INT8_MIN;
	int64_t t13 = -16258198LL;

    t13 = (x53%(x54-(x55>x56)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 100;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = -74244580455174746LL;
	uint8_t x60 = 19U;

    t14 = (x57%(x58-(x59>x60)));

    if (t14 != 100) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = UINT64_MAX;
	uint8_t x62 = 6U;
	uint32_t x63 = UINT32_MAX;
	int32_t x64 = -54;
	uint64_t t15 = 8947LLU;

    t15 = (x61%(x62-(x63>x64)));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = -1;
	static int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	int32_t x68 = -1;
	volatile int32_t t16 = 4894726;

    t16 = (x65%(x66-(x67>x68)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -9855;
	int64_t x70 = -382LL;
	volatile int32_t x71 = INT32_MAX;
	static uint64_t x72 = UINT64_MAX;
	int64_t t17 = -59044099691LL;

    t17 = (x69%(x70-(x71>x72)));

    if (t17 != -305LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = -1LL;
	int8_t x74 = 18;
	int64_t x75 = INT64_MIN;
	static int8_t x76 = INT8_MIN;
	volatile int64_t t18 = 139719022949755LL;

    t18 = (x73%(x74-(x75>x76)));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = 63;
	static uint32_t x78 = 699880U;
	int16_t x79 = INT16_MIN;
	static int8_t x80 = -26;
	uint32_t t19 = 811688900U;

    t19 = (x77%(x78-(x79>x80)));

    if (t19 != 63U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x82 = -1LL;
	int64_t x83 = -130976376604629LL;

    t20 = (x81%(x82-(x83>x84)));

    if (t20 != 13769387LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	volatile int64_t x86 = INT64_MIN;
	volatile int64_t t21 = -669256917LL;

    t21 = (x85%(x86-(x87>x88)));

    if (t21 != 255LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	int16_t x90 = 51;
	volatile int32_t x92 = -5648;
	volatile uint32_t t22 = 795507529U;

    t22 = (x89%(x90-(x91>x92)));

    if (t22 != 45U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	int32_t x96 = -1;
	int32_t t23 = -25011;

    t23 = (x93%(x94-(x95>x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x98 = INT32_MAX;
	int16_t x99 = -1;
	int32_t x100 = INT32_MIN;

    t24 = (x97%(x98-(x99>x100)));

    if (t24 != -8LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x102 = -6758;
	int32_t x103 = 9107752;
	uint64_t x104 = 266LLU;
	volatile int32_t t25 = 30906841;

    t25 = (x101%(x102-(x103>x104)));

    if (t25 != -23) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MAX;
	int16_t x106 = -14;
	volatile uint16_t x107 = 272U;
	static volatile int8_t x108 = INT8_MIN;
	static volatile int64_t t26 = -3LL;

    t26 = (x105%(x106-(x107>x108)));

    if (t26 != 7LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x109 = -1;
	uint8_t x110 = UINT8_MAX;
	volatile int8_t x111 = INT8_MIN;
	int8_t x112 = -2;
	int32_t t27 = -2;

    t27 = (x109%(x110-(x111>x112)));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x117 = 20U;
	static uint32_t t28 = 395U;

    t28 = (x117%(x118-(x119>x120)));

    if (t28 != 20U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x121 = UINT64_MAX;
	uint32_t x124 = 1U;
	static uint64_t t29 = 40391383411399542LLU;

    t29 = (x121%(x122-(x123>x124)));

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x130 = -1LL;
	static uint32_t x131 = UINT32_MAX;
	int64_t t30 = 15398935067924LL;

    t30 = (x129%(x130-(x131>x132)));

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x133 = -271;
	uint8_t x134 = 7U;
	int16_t x135 = INT16_MIN;

    t31 = (x133%(x134-(x135>x136)));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = -442462;
	uint64_t x139 = 883536839494LLU;
	volatile int32_t t32 = -127632;

    t32 = (x137%(x138-(x139>x140)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x141 = -41;
	volatile int32_t x143 = INT32_MIN;
	uint16_t x144 = 3U;
	int32_t t33 = 1437990;

    t33 = (x141%(x142-(x143>x144)));

    if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = -29;
	static int16_t x146 = INT16_MIN;
	uint32_t x148 = UINT32_MAX;

    t34 = (x145%(x146-(x147>x148)));

    if (t34 != -29) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = INT32_MIN;
	uint32_t x150 = 108113U;
	int64_t x151 = -16938236530162LL;
	volatile int16_t x152 = 1;
	volatile uint32_t t35 = 25649U;

    t35 = (x149%(x150-(x151>x152)));

    if (t35 != 35129U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = 176147227262LLU;
	int16_t x154 = INT16_MAX;
	int32_t x155 = 4845142;
	volatile uint64_t t36 = 29721LLU;

    t36 = (x153%(x154-(x155>x156)));

    if (t36 != 29138LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x158 = 17U;
	int32_t x159 = 7386;
	int64_t t37 = -9232979333266LL;

    t37 = (x157%(x158-(x159>x160)));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x161 = UINT32_MAX;
	int8_t x162 = -1;
	int16_t x163 = INT16_MIN;
	uint32_t t38 = 0U;

    t38 = (x161%(x162-(x163>x164)));

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x165 = -236091LL;
	uint16_t x167 = 84U;
	int64_t x168 = INT64_MIN;
	volatile int64_t t39 = -11685780010LL;

    t39 = (x165%(x166-(x167>x168)));

    if (t39 != -6708LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = 2U;
	uint64_t x170 = 1122476578LLU;
	uint8_t x171 = UINT8_MAX;
	int8_t x172 = 0;
	volatile uint64_t t40 = 244759LLU;

    t40 = (x169%(x170-(x171>x172)));

    if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x173 = UINT16_MAX;
	int32_t x174 = -1581;
	int8_t x175 = -1;
	static volatile uint32_t x176 = UINT32_MAX;
	volatile int32_t t41 = 88214;

    t41 = (x173%(x174-(x175>x176)));

    if (t41 != 714) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x177 = INT64_MIN;
	uint64_t x178 = UINT64_MAX;
	int32_t x180 = -1;
	static volatile uint64_t t42 = 39844071930370LLU;

    t42 = (x177%(x178-(x179>x180)));

    if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x181 = UINT16_MAX;
	static int64_t x182 = INT64_MAX;
	int8_t x183 = INT8_MIN;
	static int64_t x184 = INT64_MIN;

    t43 = (x181%(x182-(x183>x184)));

    if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = -1583595;
	int64_t x186 = INT64_MIN;
	int64_t x188 = -1LL;
	int64_t t44 = -80587253398981LL;

    t44 = (x185%(x186-(x187>x188)));

    if (t44 != -1583595LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x189 = 0;
	volatile int32_t x190 = -96;
	int64_t x191 = INT64_MAX;
	uint64_t x192 = 6803895199LLU;
	volatile int32_t t45 = -903240134;

    t45 = (x189%(x190-(x191>x192)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = -1;
	int16_t x194 = -1;
	static uint64_t x196 = 2370LLU;
	int32_t t46 = 12378;

    t46 = (x193%(x194-(x195>x196)));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = -1LL;
	int32_t x198 = -1;
	int8_t x200 = -1;
	volatile int64_t t47 = 144591170378704215LL;

    t47 = (x197%(x198-(x199>x200)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x201 = 18213737U;
	uint8_t x202 = UINT8_MAX;
	int8_t x203 = INT8_MIN;
	volatile uint32_t t48 = 725657U;

    t48 = (x201%(x202-(x203>x204)));

    if (t48 != 107U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x205 = UINT16_MAX;
	volatile int64_t x207 = INT64_MIN;
	int32_t x208 = INT32_MIN;
	static uint64_t t49 = 74790LLU;

    t49 = (x205%(x206-(x207>x208)));

    if (t49 != 65535LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x214 = 7268U;
	int8_t x215 = INT8_MIN;

    t50 = (x213%(x214-(x215>x216)));

    if (t50 != 839U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x217 = -1;
	uint64_t x218 = 2941282862334LLU;
	int8_t x219 = -9;
	static uint64_t t51 = 36041LLU;

    t51 = (x217%(x218-(x219>x220)));

    if (t51 != 349626723171LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x221 = INT8_MIN;
	volatile uint16_t x222 = UINT16_MAX;
	int8_t x224 = 9;
	int32_t t52 = 18;

    t52 = (x221%(x222-(x223>x224)));

    if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x227 = INT8_MIN;
	uint32_t x228 = 31263929U;

    t53 = (x225%(x226-(x227>x228)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x229 = INT32_MAX;
	int64_t x230 = 9041606426LL;
	int32_t x231 = -4922153;
	int32_t x232 = -127145456;

    t54 = (x229%(x230-(x231>x232)));

    if (t54 != 2147483647LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint32_t x234 = UINT32_MAX;
	volatile int16_t x235 = -290;
	int32_t x236 = INT32_MIN;
	int64_t t55 = -279177896234954LL;

    t55 = (x233%(x234-(x235>x236)));

    if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x237 = UINT64_MAX;
	int64_t x238 = -3922817434986499264LL;
	int16_t x239 = INT16_MIN;
	volatile uint64_t t56 = 663059449LLU;

    t56 = (x237%(x238-(x239>x240)));

    if (t56 != 3922817434986499263LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = -1;
	int16_t x242 = -1;
	volatile int64_t x243 = INT64_MIN;
	volatile int8_t x244 = INT8_MIN;

    t57 = (x241%(x242-(x243>x244)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x245 = 2U;
	static int64_t x246 = INT64_MIN;
	volatile uint16_t x247 = UINT16_MAX;
	int64_t t58 = 15747448851221LL;

    t58 = (x245%(x246-(x247>x248)));

    if (t58 != 2LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MIN;
	uint8_t x250 = 3U;
	static int32_t x252 = 38;
	static int64_t t59 = -425LL;

    t59 = (x249%(x250-(x251>x252)));

    if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x253 = -153417755293553538LL;
	volatile int64_t x254 = INT64_MIN;
	static int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MAX;
	int64_t t60 = -2885657042LL;

    t60 = (x253%(x254-(x255>x256)));

    if (t60 != -153417755293553538LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x257 = -1;
	int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MIN;
	static volatile int8_t x260 = -3;
	static int64_t t61 = -1516828157LL;

    t61 = (x257%(x258-(x259>x260)));

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x261 = UINT32_MAX;
	int32_t x264 = 44;
	static volatile uint32_t t62 = 0U;

    t62 = (x261%(x262-(x263>x264)));

    if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = -1816886838858746180LL;
	uint8_t x266 = 84U;
	volatile uint8_t x267 = 34U;
	static uint16_t x268 = UINT16_MAX;
	int64_t t63 = -184LL;

    t63 = (x265%(x266-(x267>x268)));

    if (t63 != -8LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x274 = UINT8_MAX;
	int32_t x275 = -1;

    t64 = (x273%(x274-(x275>x276)));

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x277 = 56872177455LL;
	static volatile int8_t x278 = INT8_MIN;
	static uint8_t x279 = UINT8_MAX;
	int16_t x280 = -1;
	volatile int64_t t65 = -3058610573LL;

    t65 = (x277%(x278-(x279>x280)));

    if (t65 != 87LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x281 = INT16_MIN;
	int32_t x282 = -635376;
	volatile int8_t x283 = -1;
	volatile int64_t x284 = -124540LL;
	volatile int32_t t66 = -3340;

    t66 = (x281%(x282-(x283>x284)));

    if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = -2105;
	int16_t x286 = -1;
	int8_t x287 = INT8_MIN;
	volatile int32_t t67 = -10885877;

    t67 = (x285%(x286-(x287>x288)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x290 = INT64_MIN;
	int16_t x291 = -1;
	int16_t x292 = 1;
	volatile int64_t t68 = -49058LL;

    t68 = (x289%(x290-(x291>x292)));

    if (t68 != 26LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x294 = INT64_MAX;
	int64_t x295 = 1937165LL;
	static int8_t x296 = 8;

    t69 = (x293%(x294-(x295>x296)));

    if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x297 = 1575078739LLU;
	int8_t x298 = -29;
	int32_t x300 = INT32_MIN;
	uint64_t t70 = 315011205890LLU;

    t70 = (x297%(x298-(x299>x300)));

    if (t70 != 1575078739LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x301 = 3602687U;
	int64_t x302 = INT64_MAX;
	int8_t x303 = -1;
	int16_t x304 = INT16_MAX;

    t71 = (x301%(x302-(x303>x304)));

    if (t71 != 3602687LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x305 = 289430LLU;
	uint8_t x306 = 1U;
	volatile int64_t x308 = -1LL;

    t72 = (x305%(x306-(x307>x308)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x309 = INT8_MIN;
	volatile int16_t x311 = -608;
	volatile int32_t t73 = 17823;

    t73 = (x309%(x310-(x311>x312)));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x313 = -1;
	static volatile uint8_t x315 = 6U;
	static int8_t x316 = INT8_MIN;
	uint64_t t74 = 221259143LLU;

    t74 = (x313%(x314-(x315>x316)));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x317 = INT16_MAX;
	int16_t x318 = INT16_MAX;
	int64_t x320 = 3601390361050530LL;
	static volatile int32_t t75 = -12703472;

    t75 = (x317%(x318-(x319>x320)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x321 = -1;
	static int64_t x323 = 10398535343275925LL;
	int32_t x324 = 81;

    t76 = (x321%(x322-(x323>x324)));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x326 = INT32_MIN;
	volatile int64_t x327 = INT64_MIN;
	static int16_t x328 = -726;
	int32_t t77 = 44313;

    t77 = (x325%(x326-(x327>x328)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x329 = -1;
	static uint16_t x331 = 23887U;
	uint32_t x332 = UINT32_MAX;
	int32_t t78 = 2925196;

    t78 = (x329%(x330-(x331>x332)));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x338 = -47;
	int16_t x339 = INT16_MIN;
	uint32_t x340 = UINT32_MAX;
	int64_t t79 = 2865424343LL;

    t79 = (x337%(x338-(x339>x340)));

    if (t79 != -43LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x341 = UINT32_MAX;
	uint16_t x343 = UINT16_MAX;
	uint64_t x344 = 100714311LLU;

    t80 = (x341%(x342-(x343>x344)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    

    t81 = (x345%(x346-(x347>x348)));

    if (t81 != -8LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x352 = INT16_MAX;
	static volatile int64_t t82 = -412497097835778LL;

    t82 = (x349%(x350-(x351>x352)));

    if (t82 != 102LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x353 = INT16_MAX;
	int64_t x354 = 1915778232696178LL;
	volatile uint64_t x355 = 193220396LLU;
	uint32_t x356 = UINT32_MAX;
	static volatile int64_t t83 = 6666081976LL;

    t83 = (x353%(x354-(x355>x356)));

    if (t83 != 32767LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x359 = INT32_MIN;

    t84 = (x357%(x358-(x359>x360)));

    if (t84 != -5LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x365 = INT8_MIN;
	int8_t x367 = -1;
	uint64_t x368 = 302983039466LLU;

    t85 = (x365%(x366-(x367>x368)));

    if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x370 = 243800273LLU;
	static uint64_t x371 = 6466724902619214247LLU;
	int8_t x372 = INT8_MAX;
	uint64_t t86 = 7939LLU;

    t86 = (x369%(x370-(x371>x372)));

    if (t86 != 77131471LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x374 = 1764350U;
	int8_t x375 = -1;
	volatile int64_t t87 = 413161795595680692LL;

    t87 = (x373%(x374-(x375>x376)));

    if (t87 != -1330697LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x377 = INT32_MAX;
	uint8_t x378 = 64U;
	int64_t x379 = INT64_MIN;
	static volatile int8_t x380 = -7;
	volatile int32_t t88 = -7;

    t88 = (x377%(x378-(x379>x380)));

    if (t88 != 63) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x382 = INT16_MIN;
	uint8_t x383 = UINT8_MAX;
	int32_t x384 = -3491;
	volatile int64_t t89 = -10646288202819LL;

    t89 = (x381%(x382-(x383>x384)));

    if (t89 != 7LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x385 = INT64_MIN;
	volatile uint64_t x386 = UINT64_MAX;
	volatile int16_t x387 = INT16_MAX;
	static volatile uint64_t x388 = 181249LLU;
	volatile uint64_t t90 = 0LLU;

    t90 = (x385%(x386-(x387>x388)));

    if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x389 = INT64_MIN;
	static int8_t x392 = 0;

    t91 = (x389%(x390-(x391>x392)));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x394 = -1;
	uint8_t x395 = UINT8_MAX;
	int32_t x396 = INT32_MIN;
	volatile uint64_t t92 = 2917904LLU;

    t92 = (x393%(x394-(x395>x396)));

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x397 = UINT16_MAX;
	uint64_t x398 = 621538290LLU;
	uint16_t x399 = 6U;
	uint8_t x400 = 56U;
	volatile uint64_t t93 = 6197988721956957081LLU;

    t93 = (x397%(x398-(x399>x400)));

    if (t93 != 65535LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x401 = INT8_MAX;
	volatile uint64_t x402 = 328064789301987LLU;
	int64_t x403 = INT64_MIN;

    t94 = (x401%(x402-(x403>x404)));

    if (t94 != 127LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x405 = INT16_MAX;
	uint64_t x406 = UINT64_MAX;
	int32_t x407 = -2874346;
	volatile int32_t x408 = 2;
	uint64_t t95 = 13380277LLU;

    t95 = (x405%(x406-(x407>x408)));

    if (t95 != 32767LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x410 = 5;
	int64_t x412 = INT64_MAX;
	volatile int32_t t96 = 92428726;

    t96 = (x409%(x410-(x411>x412)));

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x413 = UINT8_MAX;
	int16_t x414 = INT16_MAX;
	int8_t x415 = INT8_MAX;
	volatile int32_t t97 = 3;

    t97 = (x413%(x414-(x415>x416)));

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x417 = 6;
	int64_t x418 = -5626601916488362LL;
	uint64_t x420 = 62LLU;
	int64_t t98 = 15648744LL;

    t98 = (x417%(x418-(x419>x420)));

    if (t98 != 6LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x421 = INT8_MIN;
	int32_t x422 = -1;
	uint32_t x423 = UINT32_MAX;
	int8_t x424 = 9;
	static int32_t t99 = 13;

    t99 = (x421%(x422-(x423>x424)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x426 = INT32_MAX;
	volatile int64_t x427 = INT64_MIN;
	static volatile int32_t x428 = -1;
	static volatile int64_t t100 = -335725036514LL;

    t100 = (x425%(x426-(x427>x428)));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x429 = -1;
	int8_t x430 = -1;
	int64_t x431 = -1LL;
	uint64_t x432 = UINT64_MAX;
	static volatile int32_t t101 = 4;

    t101 = (x429%(x430-(x431>x432)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x437 = INT64_MAX;
	uint16_t x438 = UINT16_MAX;
	int32_t x439 = 184082;
	static volatile int64_t t102 = -14649553LL;

    t102 = (x437%(x438-(x439>x440)));

    if (t102 != 7LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x442 = INT16_MIN;
	uint16_t x444 = 1U;
	volatile int32_t t103 = 0;

    t103 = (x441%(x442-(x443>x444)));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x446 = INT16_MIN;
	int32_t x447 = INT32_MIN;
	int16_t x448 = -1;

    t104 = (x445%(x446-(x447>x448)));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x453 = INT32_MIN;
	volatile int16_t x454 = INT16_MIN;
	volatile int64_t x456 = -2293788360173799931LL;
	volatile int32_t t105 = -250057390;

    t105 = (x453%(x454-(x455>x456)));

    if (t105 != -2) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x461 = UINT64_MAX;
	int8_t x462 = INT8_MIN;
	uint64_t x463 = 716LLU;
	static int16_t x464 = INT16_MIN;
	uint64_t t106 = 59733LLU;

    t106 = (x461%(x462-(x463>x464)));

    if (t106 != 127LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x465 = 35558U;
	int64_t x466 = 15801943565529172LL;
	volatile uint64_t x467 = 49471200160467LLU;
	static int8_t x468 = 1;
	volatile int64_t t107 = 146412313238LL;

    t107 = (x465%(x466-(x467>x468)));

    if (t107 != 35558LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x473 = 2081617317LLU;
	int64_t x474 = INT64_MAX;
	uint64_t x476 = 3LLU;
	volatile uint64_t t108 = 2742689985102122366LLU;

    t108 = (x473%(x474-(x475>x476)));

    if (t108 != 2081617317LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x477 = INT64_MAX;
	volatile uint16_t x478 = 2U;
	uint64_t x479 = 4211133LLU;
	static volatile int8_t x480 = 4;
	volatile int64_t t109 = -4068LL;

    t109 = (x477%(x478-(x479>x480)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x481 = INT32_MIN;
	volatile uint16_t x483 = 31920U;
	int64_t x484 = INT64_MIN;
	volatile int32_t t110 = -10579;

    t110 = (x481%(x482-(x483>x484)));

    if (t110 != -2) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x485 = UINT64_MAX;
	uint8_t x486 = 95U;
	int8_t x488 = -1;

    t111 = (x485%(x486-(x487>x488)));

    if (t111 != 71LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	int32_t x491 = 3071114;
	uint16_t x492 = UINT16_MAX;

    t112 = (x489%(x490-(x491>x492)));

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x493 = 9LLU;
	int64_t x494 = INT64_MAX;
	uint64_t x495 = UINT64_MAX;
	volatile int64_t x496 = INT64_MIN;
	uint64_t t113 = 414566LLU;

    t113 = (x493%(x494-(x495>x496)));

    if (t113 != 9LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x497 = -13;
	int8_t x498 = INT8_MIN;
	int32_t x499 = -11690784;
	static uint8_t x500 = 1U;
	int32_t t114 = -323922688;

    t114 = (x497%(x498-(x499>x500)));

    if (t114 != -13) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x501 = -62;
	int16_t x502 = -1;
	int32_t x503 = -29512183;
	uint16_t x504 = UINT16_MAX;
	int32_t t115 = -117237;

    t115 = (x501%(x502-(x503>x504)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x505 = 1LL;
	uint32_t x506 = UINT32_MAX;
	uint8_t x507 = 11U;
	int16_t x508 = INT16_MAX;
	static int64_t t116 = -34984227841LL;

    t116 = (x505%(x506-(x507>x508)));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x509 = 4347;
	uint32_t x510 = 6333142U;
	uint32_t x511 = 0U;
	int16_t x512 = -1;
	uint32_t t117 = 5232U;

    t117 = (x509%(x510-(x511>x512)));

    if (t117 != 4347U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x513 = INT8_MIN;
	int8_t x514 = INT8_MIN;
	int64_t x515 = INT64_MIN;
	static int8_t x516 = 4;
	int32_t t118 = -54757;

    t118 = (x513%(x514-(x515>x516)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x517 = -1;
	uint16_t x518 = 10U;
	static int32_t x519 = INT32_MIN;
	int8_t x520 = INT8_MIN;
	volatile int32_t t119 = -93455259;

    t119 = (x517%(x518-(x519>x520)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x521 = 35576U;
	uint64_t x522 = 187LLU;
	int64_t x524 = 2639463LL;
	volatile uint64_t t120 = 128356132772LLU;

    t120 = (x521%(x522-(x523>x524)));

    if (t120 != 50LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x526 = 872854696U;
	static int8_t x527 = 2;
	int8_t x528 = -3;
	volatile uint64_t t121 = 750LLU;

    t121 = (x525%(x526-(x527>x528)));

    if (t121 != 21370LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x530 = UINT64_MAX;
	int64_t x531 = INT64_MIN;
	int8_t x532 = 47;
	uint64_t t122 = 72723507825850224LLU;

    t122 = (x529%(x530-(x531>x532)));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x533 = 1233U;
	uint16_t x534 = 5223U;
	uint32_t x535 = 2U;
	int8_t x536 = INT8_MAX;

    t123 = (x533%(x534-(x535>x536)));

    if (t123 != 1233) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x537 = -45505671307748608LL;
	int8_t x538 = -1;
	volatile int8_t x539 = INT8_MIN;
	uint32_t x540 = UINT32_MAX;
	volatile int64_t t124 = 3593903266LL;

    t124 = (x537%(x538-(x539>x540)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x541 = 1;
	static int32_t x542 = -1;
	uint64_t x544 = UINT64_MAX;
	static volatile int32_t t125 = -43713829;

    t125 = (x541%(x542-(x543>x544)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x546 = 4560;
	volatile int16_t x547 = INT16_MIN;
	static uint8_t x548 = 1U;
	volatile int32_t t126 = 503;

    t126 = (x545%(x546-(x547>x548)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x549 = INT64_MIN;
	static volatile int8_t x550 = INT8_MIN;
	volatile int32_t x551 = INT32_MIN;
	int64_t x552 = 1800823LL;

    t127 = (x549%(x550-(x551>x552)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x553 = 0U;
	uint32_t x554 = 1636U;
	static int8_t x555 = -1;
	volatile uint32_t t128 = 63U;

    t128 = (x553%(x554-(x555>x556)));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x557 = -3;
	uint8_t x558 = 14U;
	int16_t x560 = INT16_MIN;

    t129 = (x557%(x558-(x559>x560)));

    if (t129 != -3) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x561 = 11681296U;
	uint16_t x562 = 310U;
	uint8_t x563 = 24U;
	int64_t x564 = INT64_MAX;
	volatile uint32_t t130 = 876397U;

    t130 = (x561%(x562-(x563>x564)));

    if (t130 != 186U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x565 = UINT16_MAX;
	volatile uint16_t x566 = UINT16_MAX;
	uint8_t x567 = 7U;
	int64_t x568 = INT64_MIN;

    t131 = (x565%(x566-(x567>x568)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x581 = -2;
	uint16_t x582 = 998U;
	uint16_t x583 = 332U;
	uint8_t x584 = 83U;
	int32_t t132 = -14;

    t132 = (x581%(x582-(x583>x584)));

    if (t132 != -2) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x585 = INT16_MIN;
	int64_t x586 = -1LL;
	int64_t x587 = -348869769392954315LL;
	uint32_t x588 = 1755248U;
	int64_t t133 = -118897LL;

    t133 = (x585%(x586-(x587>x588)));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x589 = INT8_MAX;
	uint32_t x590 = UINT32_MAX;
	int16_t x591 = INT16_MAX;
	static int64_t x592 = 29989504046987LL;
	uint32_t t134 = 4U;

    t134 = (x589%(x590-(x591>x592)));

    if (t134 != 127U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x593 = -1;
	int16_t x594 = INT16_MAX;
	static int8_t x595 = INT8_MAX;
	int32_t x596 = INT32_MIN;
	volatile int32_t t135 = 841;

    t135 = (x593%(x594-(x595>x596)));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x597 = -1;
	static int8_t x598 = -1;
	static int16_t x599 = 7457;
	volatile int32_t x600 = -1;
	static int32_t t136 = 2912;

    t136 = (x597%(x598-(x599>x600)));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x601 = INT8_MIN;
	uint8_t x603 = 1U;
	int8_t x604 = 1;

    t137 = (x601%(x602-(x603>x604)));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x605 = 353161568;
	uint16_t x606 = UINT16_MAX;
	int16_t x607 = -7;
	int16_t x608 = -1;
	static volatile int32_t t138 = -481080211;

    t138 = (x605%(x606-(x607>x608)));

    if (t138 != 58988) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t t139 = 61426541;

    t139 = (x613%(x614-(x615>x616)));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    

    t140 = (x617%(x618-(x619>x620)));

    if (t140 != -42752) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x625 = INT32_MIN;
	volatile int8_t x626 = INT8_MIN;
	uint32_t x627 = 597789U;
	static volatile int32_t t141 = 123786242;

    t141 = (x625%(x626-(x627>x628)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x629 = 3696775266LL;
	uint32_t x630 = UINT32_MAX;
	static int64_t x631 = -227127586LL;
	static uint64_t x632 = 1833LLU;
	volatile int64_t t142 = -702837LL;

    t142 = (x629%(x630-(x631>x632)));

    if (t142 != 3696775266LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x633 = -1LL;
	int8_t x634 = -47;
	int16_t x635 = INT16_MIN;
	int32_t x636 = 664541;
	volatile int64_t t143 = -598622667300758LL;

    t143 = (x633%(x634-(x635>x636)));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x639 = 2206;
	volatile uint64_t x640 = 6LLU;
	volatile int32_t t144 = -1832644;

    t144 = (x637%(x638-(x639>x640)));

    if (t144 != -32768) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x641 = INT16_MIN;
	volatile int32_t x642 = -1;
	int16_t x643 = -1;

    t145 = (x641%(x642-(x643>x644)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x645 = INT8_MAX;
	static volatile int8_t x646 = INT8_MIN;
	volatile int32_t x647 = INT32_MAX;
	volatile int16_t x648 = INT16_MAX;
	volatile int32_t t146 = 32625;

    t146 = (x645%(x646-(x647>x648)));

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x649 = 14729U;
	volatile int32_t x650 = INT32_MIN;
	int32_t x651 = -249709;
	uint16_t x652 = UINT16_MAX;

    t147 = (x649%(x650-(x651>x652)));

    if (t147 != 14729) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x653 = INT16_MIN;
	volatile int16_t x654 = 184;
	uint32_t x656 = 1U;
	static int32_t t148 = -29640233;

    t148 = (x653%(x654-(x655>x656)));

    if (t148 != -11) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x657 = -1;
	int8_t x658 = -7;
	uint8_t x660 = 116U;

    t149 = (x657%(x658-(x659>x660)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x665 = INT64_MIN;
	uint8_t x666 = 15U;
	int64_t x667 = INT64_MIN;
	int64_t t150 = -704LL;

    t150 = (x665%(x666-(x667>x668)));

    if (t150 != -8LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x673 = 34433LLU;
	int16_t x675 = -1;
	volatile uint64_t t151 = 42732886LLU;

    t151 = (x673%(x674-(x675>x676)));

    if (t151 != 34433LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x678 = -6;
	static int16_t x680 = INT16_MAX;
	volatile int64_t t152 = -112205153177LL;

    t152 = (x677%(x678-(x679>x680)));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x683 = 158652562539179LLU;
	int32_t x684 = INT32_MAX;
	int64_t t153 = -15029865884319LL;

    t153 = (x681%(x682-(x683>x684)));

    if (t153 != 2147483647LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x686 = -46;
	volatile int8_t x687 = -1;
	int64_t x688 = INT64_MIN;
	volatile int64_t t154 = -56281247682643LL;

    t154 = (x685%(x686-(x687>x688)));

    if (t154 != 35LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x692 = INT8_MIN;

    t155 = (x689%(x690-(x691>x692)));

    if (t155 != -19491LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x693 = 0LL;
	static uint16_t x694 = UINT16_MAX;
	volatile int32_t x695 = -24;
	int8_t x696 = INT8_MAX;
	volatile int64_t t156 = 8185496700828LL;

    t156 = (x693%(x694-(x695>x696)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x697 = 50;
	volatile int64_t x699 = INT64_MIN;
	int8_t x700 = -1;

    t157 = (x697%(x698-(x699>x700)));

    if (t157 != 50) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x701 = INT16_MAX;
	uint16_t x702 = 31408U;
	volatile int16_t x703 = INT16_MIN;
	static volatile uint8_t x704 = 0U;
	int32_t t158 = -10067953;

    t158 = (x701%(x702-(x703>x704)));

    if (t158 != 1359) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x706 = 93082536005553723LLU;
	static uint16_t x707 = UINT16_MAX;
	static volatile uint64_t t159 = 26440626LLU;

    t159 = (x705%(x706-(x707>x708)));

    if (t159 != 32767LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x709 = INT8_MIN;
	int8_t x711 = 61;
	uint8_t x712 = 12U;
	volatile int32_t t160 = 29872;

    t160 = (x709%(x710-(x711>x712)));

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x713 = 12916U;
	int64_t x714 = -797574986260449430LL;
	static int32_t x715 = INT32_MIN;
	static int64_t t161 = -645LL;

    t161 = (x713%(x714-(x715>x716)));

    if (t161 != 12916LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x717 = UINT8_MAX;
	uint8_t x718 = 2U;
	int32_t x719 = 495042656;
	int64_t x720 = INT64_MIN;

    t162 = (x717%(x718-(x719>x720)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x721 = -1;
	int32_t x722 = -55;
	int8_t x723 = INT8_MIN;
	volatile int8_t x724 = -40;

    t163 = (x721%(x722-(x723>x724)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x725 = -1;
	static volatile uint32_t x726 = 315799601U;
	int32_t x728 = INT32_MIN;
	volatile uint32_t t164 = 32648U;

    t164 = (x725%(x726-(x727>x728)));

    if (t164 != 189572495U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x730 = INT8_MIN;
	volatile int16_t x732 = -3;
	volatile int32_t t165 = 0;

    t165 = (x729%(x730-(x731>x732)));

    if (t165 != 120) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x737 = -61LL;
	uint16_t x738 = UINT16_MAX;
	volatile uint64_t x739 = 7145816LLU;
	static int8_t x740 = INT8_MIN;

    t166 = (x737%(x738-(x739>x740)));

    if (t166 != -61LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x741 = 7317U;
	uint32_t x742 = 0U;
	static uint32_t x743 = 234U;
	uint8_t x744 = 4U;

    t167 = (x741%(x742-(x743>x744)));

    if (t167 != 7317U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x745 = INT16_MIN;
	volatile int16_t x746 = 12;
	static volatile uint16_t x747 = 2U;
	int32_t x748 = -1;

    t168 = (x745%(x746-(x747>x748)));

    if (t168 != -10) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x749 = -1;
	volatile uint16_t x751 = UINT16_MAX;

    t169 = (x749%(x750-(x751>x752)));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x753 = INT16_MAX;
	static int16_t x754 = INT16_MIN;
	uint64_t x755 = UINT64_MAX;
	int32_t t170 = 169;

    t170 = (x753%(x754-(x755>x756)));

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x758 = 1728451455U;
	volatile uint32_t t171 = 1922886790U;

    t171 = (x757%(x758-(x759>x760)));

    if (t171 != 419032193U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x761 = -9;
	static int64_t x762 = -960023885565166541LL;
	volatile uint8_t x763 = 1U;
	static volatile int32_t x764 = 7505;

    t172 = (x761%(x762-(x763>x764)));

    if (t172 != -9LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x765 = 191;
	static int32_t x766 = 13;
	uint64_t x767 = 8461811024709064LLU;
	uint16_t x768 = 14U;
	volatile int32_t t173 = 105;

    t173 = (x765%(x766-(x767>x768)));

    if (t173 != 11) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x769 = 263944;
	int8_t x770 = INT8_MIN;
	int64_t x771 = INT64_MIN;
	int16_t x772 = INT16_MIN;
	volatile int32_t t174 = 208717866;

    t174 = (x769%(x770-(x771>x772)));

    if (t174 != 8) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x773 = 1396U;
	static int8_t x774 = -44;
	int8_t x775 = -26;
	volatile int8_t x776 = INT8_MIN;
	volatile int32_t t175 = 41778206;

    t175 = (x773%(x774-(x775>x776)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x781 = UINT64_MAX;
	static uint32_t x782 = UINT32_MAX;
	int32_t x784 = INT32_MIN;
	uint64_t t176 = 306149767LLU;

    t176 = (x781%(x782-(x783>x784)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x785 = 1U;
	uint32_t x786 = 495123U;
	int64_t x787 = 118LL;
	static int64_t x788 = -2005711401991733381LL;

    t177 = (x785%(x786-(x787>x788)));

    if (t177 != 1U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x789 = INT32_MIN;
	static int32_t x790 = -5753;
	int64_t x791 = 25281887913233852LL;
	static uint8_t x792 = 30U;
	volatile int32_t t178 = 50475;

    t178 = (x789%(x790-(x791>x792)));

    if (t178 != -4538) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x794 = 1LL;
	uint16_t x795 = 1U;
	int16_t x796 = INT16_MAX;
	int64_t t179 = -1049340457148LL;

    t179 = (x793%(x794-(x795>x796)));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x801 = -3;
	static uint8_t x804 = 4U;
	int32_t t180 = -45427499;

    t180 = (x801%(x802-(x803>x804)));

    if (t180 != -3) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x805 = 26U;
	int16_t x806 = INT16_MIN;
	int64_t x807 = 553672536413110240LL;
	volatile int32_t t181 = 0;

    t181 = (x805%(x806-(x807>x808)));

    if (t181 != 26) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x809 = INT32_MIN;
	static int16_t x810 = -104;
	int64_t x811 = -1LL;
	volatile uint8_t x812 = UINT8_MAX;
	int32_t t182 = 1034259546;

    t182 = (x809%(x810-(x811>x812)));

    if (t182 != -24) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x813 = 1874U;
	volatile int32_t x814 = INT32_MIN;
	volatile int32_t x815 = INT32_MIN;
	uint32_t x816 = UINT32_MAX;
	int32_t t183 = 5194;

    t183 = (x813%(x814-(x815>x816)));

    if (t183 != 1874) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x817 = INT64_MAX;
	uint64_t x818 = 42LLU;
	int32_t x819 = 3263851;
	int32_t x820 = -1;
	static uint64_t t184 = 94053213248346305LLU;

    t184 = (x817%(x818-(x819>x820)));

    if (t184 != 7LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x821 = INT16_MIN;
	int16_t x822 = INT16_MAX;
	uint8_t x823 = 5U;
	static uint64_t x824 = 809210LLU;
	int32_t t185 = 3717023;

    t185 = (x821%(x822-(x823>x824)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x825 = INT32_MAX;
	uint16_t x826 = UINT16_MAX;
	int8_t x827 = INT8_MAX;
	int64_t x828 = 333522LL;
	int32_t t186 = 164028;

    t186 = (x825%(x826-(x827>x828)));

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x829 = INT32_MIN;
	volatile int16_t x830 = -1;
	int16_t x831 = INT16_MAX;
	int32_t x832 = INT32_MIN;
	volatile int32_t t187 = -971488;

    t187 = (x829%(x830-(x831>x832)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x833 = 5453747692737390513LLU;
	uint16_t x834 = 3U;
	int64_t x835 = INT64_MAX;
	volatile uint64_t t188 = 3006225697397LLU;

    t188 = (x833%(x834-(x835>x836)));

    if (t188 != 1LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x837 = UINT64_MAX;
	static uint64_t x838 = UINT64_MAX;
	int16_t x839 = INT16_MIN;
	static uint16_t x840 = 1970U;
	static uint64_t t189 = 122523895969LLU;

    t189 = (x837%(x838-(x839>x840)));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x842 = INT64_MIN;
	int32_t x843 = INT32_MIN;
	int8_t x844 = INT8_MIN;

    t190 = (x841%(x842-(x843>x844)));

    if (t190 != 2LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x847 = INT8_MAX;
	static volatile int32_t x848 = -387174166;
	static volatile uint32_t t191 = 968U;

    t191 = (x845%(x846-(x847>x848)));

    if (t191 != 108455U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x849 = -65;
	int32_t x851 = INT32_MIN;
	uint32_t x852 = 733276748U;

    t192 = (x849%(x850-(x851>x852)));

    if (t192 != -65) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x853 = INT16_MAX;
	int16_t x854 = INT16_MAX;
	volatile uint16_t x855 = UINT16_MAX;
	int16_t x856 = -1;

    t193 = (x853%(x854-(x855>x856)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x857 = 1;
	static int16_t x859 = INT16_MAX;
	uint64_t x860 = UINT64_MAX;
	volatile uint32_t t194 = 228U;

    t194 = (x857%(x858-(x859>x860)));

    if (t194 != 1U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x865 = 32;
	volatile uint16_t x866 = 300U;
	int8_t x867 = INT8_MIN;
	int32_t x868 = -976;

    t195 = (x865%(x866-(x867>x868)));

    if (t195 != 32) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x869 = INT16_MIN;
	int32_t x870 = -1;
	uint64_t x871 = 11435137546229LLU;
	int64_t x872 = INT64_MIN;
	int32_t t196 = -490388460;

    t196 = (x869%(x870-(x871>x872)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x875 = INT8_MAX;
	volatile int64_t t197 = 300LL;

    t197 = (x873%(x874-(x875>x876)));

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x877 = UINT32_MAX;
	int8_t x878 = INT8_MIN;
	volatile uint16_t x879 = 311U;
	int64_t x880 = -1LL;
	volatile uint32_t t198 = 18U;

    t198 = (x877%(x878-(x879>x880)));

    if (t198 != 128U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x881 = INT32_MIN;
	static uint32_t x882 = UINT32_MAX;
	volatile uint32_t t199 = 37610051U;

    t199 = (x881%(x882-(x883>x884)));

    if (t199 != 2147483648U) { NG(); } else { ; }
	
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

