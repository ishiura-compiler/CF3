
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

int8_t x1 = INT8_MAX;
static uint32_t x7 = UINT32_MAX;
int16_t x13 = 0;
uint32_t x16 = UINT32_MAX;
volatile uint32_t x17 = UINT32_MAX;
static uint64_t t4 = 17273LLU;
uint16_t x21 = 56U;
static volatile uint64_t x34 = 806971LLU;
static int32_t x36 = INT32_MAX;
uint8_t x48 = 3U;
static int32_t x56 = INT32_MIN;
volatile int16_t x58 = 571;
volatile int64_t x59 = 506475210LL;
volatile int64_t t13 = -5756897534671LL;
int64_t x64 = 3993067LL;
uint8_t x65 = 0U;
volatile int32_t x71 = 8181;
int32_t x73 = -1;
int32_t x77 = INT32_MIN;
volatile int16_t x79 = -398;
volatile uint64_t x82 = UINT64_MAX;
volatile uint64_t x87 = 513198338145LLU;
int16_t x88 = INT16_MAX;
volatile int64_t t21 = -37716267810LL;
volatile uint16_t x102 = 1U;
int8_t x118 = 7;
uint16_t x125 = UINT16_MAX;
static int32_t x133 = 1047245220;
int32_t t30 = 110;
int64_t t33 = -870383759508349LL;
int16_t x153 = -215;
volatile int64_t t37 = 390533LL;
uint8_t x165 = UINT8_MAX;
int16_t x167 = INT16_MIN;
uint32_t t38 = 7U;
int16_t x173 = INT16_MIN;
static volatile uint16_t x188 = 1128U;
uint8_t x191 = 110U;
static int64_t x194 = -1LL;
volatile int32_t x220 = 12;
uint8_t x221 = 115U;
static volatile uint64_t t51 = 21019105LLU;
uint8_t x245 = 2U;
uint32_t x247 = 3754U;
static volatile uint16_t x249 = 407U;
int64_t x255 = -1LL;
int32_t x256 = INT32_MAX;
uint8_t x258 = UINT8_MAX;
volatile int32_t t58 = 3559;
uint64_t x269 = 354353LLU;
int16_t x271 = INT16_MAX;
int64_t t61 = -351952132LL;
int16_t x281 = INT16_MIN;
static uint64_t x288 = 0LLU;
static int16_t x309 = 0;
int32_t x315 = INT32_MIN;
int8_t x317 = INT8_MAX;
uint64_t x319 = UINT64_MAX;
static volatile uint8_t x320 = 6U;
static int8_t x322 = INT8_MAX;
uint64_t x332 = 828431252891452LLU;
uint8_t x333 = UINT8_MAX;
int16_t x335 = -1;
int32_t x337 = INT32_MIN;
int16_t x346 = INT16_MAX;
volatile uint64_t x350 = 32649LLU;
static int32_t x354 = INT32_MIN;
volatile uint8_t x355 = 7U;
uint8_t x358 = 42U;
int16_t x371 = -1;
volatile uint64_t t84 = 10083786689LLU;
int32_t x373 = -1;
uint64_t x375 = 57155LLU;
volatile uint64_t t85 = 70LLU;
volatile int16_t x395 = -1;
int32_t x398 = -74767;
volatile uint8_t x404 = 0U;
static uint8_t x411 = 7U;
uint64_t t95 = 3678765620901926LLU;
volatile uint64_t t96 = 3867LLU;
volatile int16_t x422 = INT16_MAX;
int32_t x428 = INT32_MIN;
int8_t x432 = INT8_MIN;
uint16_t x434 = UINT16_MAX;
static int16_t x437 = INT16_MIN;
volatile uint64_t t102 = 20702LLU;
static volatile uint32_t x450 = 159971672U;
int32_t x456 = INT32_MAX;
static int8_t x457 = -3;
int32_t x459 = INT32_MIN;
uint32_t x460 = 217460780U;
int32_t t107 = 258132;
int32_t x479 = INT32_MIN;
int32_t x486 = INT32_MAX;
int32_t x499 = -192;
volatile uint64_t t116 = 60014088870154LLU;
int32_t t117 = -1824887;
int32_t x511 = 252;
volatile uint64_t x516 = UINT64_MAX;
int8_t x524 = INT8_MIN;
int64_t x528 = -44LL;
uint32_t x532 = 10722U;
volatile uint64_t t123 = 31546042273540822LLU;
volatile uint32_t x534 = UINT32_MAX;
static uint32_t t124 = 3979976U;
volatile int32_t t125 = 45723260;
int8_t x541 = INT8_MIN;
static int32_t x543 = -1;
int8_t x550 = -1;
static int32_t x552 = -1;
int8_t x559 = INT8_MAX;
int8_t x560 = INT8_MIN;
int32_t t130 = -469;
volatile int16_t x562 = 1;
static uint64_t x574 = 91LLU;
uint64_t x588 = 1622295927872LLU;
uint16_t x589 = 9509U;
int64_t x595 = INT64_MIN;
uint64_t x596 = 15824LLU;
volatile uint64_t t137 = 19638398784178358LLU;
volatile int64_t x613 = INT64_MIN;
static int64_t x617 = -1LL;
static int8_t x618 = -1;
volatile int8_t x620 = INT8_MAX;
int64_t t142 = 2012606856477568LL;
uint16_t x622 = 8436U;
volatile uint16_t x627 = 1U;
volatile int64_t t145 = -3223LL;
int16_t x637 = INT16_MIN;
static volatile uint64_t t146 = 6640259375LLU;
uint64_t x643 = UINT64_MAX;
int32_t x648 = INT32_MAX;
volatile int32_t t148 = -146;
uint8_t x649 = 1U;
volatile int16_t x651 = INT16_MIN;
volatile int32_t t149 = 1605204;
volatile uint64_t x657 = 2446834LLU;
int64_t x658 = INT64_MAX;
uint32_t x660 = 6894970U;
volatile uint64_t t151 = 32443892291070LLU;
static int16_t x664 = INT16_MIN;
int32_t t152 = -61209839;
int8_t x672 = INT8_MAX;
static int32_t x677 = INT32_MAX;
int32_t x679 = -615;
uint16_t x680 = 25897U;
static uint32_t x683 = 88U;
uint32_t x691 = 6590678U;
uint16_t x696 = 284U;
volatile int32_t t160 = -3290668;
volatile int16_t x705 = INT16_MAX;
uint32_t x708 = 5244411U;
volatile uint32_t t162 = 129384U;
static uint64_t x718 = UINT64_MAX;
static int32_t x719 = INT32_MIN;
int8_t x722 = INT8_MIN;
int16_t x723 = -2789;
static uint64_t x726 = UINT64_MAX;
volatile uint32_t x728 = 537U;
volatile int32_t x739 = INT32_MIN;
uint64_t x740 = UINT64_MAX;
volatile int16_t x746 = 5;
static int32_t x753 = -1;
uint16_t x754 = UINT16_MAX;
uint64_t t173 = 329593652368238652LLU;
volatile int64_t t174 = -648LL;
volatile int8_t x766 = INT8_MAX;
uint16_t x773 = 6U;
static uint32_t x778 = UINT32_MAX;
int64_t x789 = -1LL;
uint8_t x799 = UINT8_MAX;
volatile int64_t t183 = 392105614254969975LL;
int32_t x811 = -1;
int64_t x813 = -1LL;
uint16_t x814 = 54U;
volatile uint64_t t185 = 1973LLU;
static uint16_t x817 = 20U;
int64_t t187 = -1950270247386044LL;
int32_t x835 = -2357;
static int64_t x841 = -1LL;
int64_t x852 = -277638589182778084LL;
int8_t x856 = 55;
static volatile uint64_t t193 = 1353723654692LLU;
volatile int64_t x862 = INT64_MIN;
int8_t x863 = INT8_MIN;
uint32_t t196 = 844U;
int64_t x874 = INT64_MIN;
uint64_t x875 = 3463208LLU;
int64_t x876 = INT64_MIN;
int64_t t198 = -8707263583422479LL;
int16_t x881 = INT16_MIN;


void f0(void) {
    	static int64_t x2 = INT64_MAX;
	int8_t x3 = INT8_MIN;
	int8_t x4 = 4;
	volatile int64_t t0 = 64176272053LL;

    t0 = (((x1%x2)%x3)*x4);

    if (t0 != 508LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	uint8_t x6 = 67U;
	volatile int64_t x8 = 65650LL;
	int64_t t1 = 7426810812560465LL;

    t1 = (((x5%x6)%x7)*x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int64_t x10 = -2120632535879722807LL;
	uint16_t x11 = 61U;
	uint16_t x12 = 453U;
	volatile int64_t t2 = -354LL;

    t2 = (((x9%x10)%x11)*x12);

    if (t2 != -2718LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	static uint64_t x15 = 1658LLU;
	volatile uint64_t t3 = 120LLU;

    t3 = (((x13%x14)%x15)*x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x18 = UINT8_MAX;
	int16_t x19 = -1;
	static uint64_t x20 = 70285968106581701LLU;

    t4 = (((x17%x18)%x19)*x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x22 = -3340;
	volatile uint16_t x23 = 9U;
	uint8_t x24 = 6U;
	int32_t t5 = 72684863;

    t5 = (((x21%x22)%x23)*x24);

    if (t5 != 12) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MAX;
	int16_t x26 = -1;
	uint32_t x27 = 1462366836U;
	int32_t x28 = 136;
	uint32_t t6 = 1U;

    t6 = (((x25%x26)%x27)*x28);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x33 = UINT32_MAX;
	uint8_t x35 = UINT8_MAX;
	volatile uint64_t t7 = 71LLU;

    t7 = (((x33%x34)%x35)*x36);

    if (t7 != 296352743286LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = 1LL;
	volatile int32_t x38 = INT32_MAX;
	int16_t x39 = INT16_MIN;
	int64_t x40 = INT64_MIN;
	static int64_t t8 = INT64_MIN;

    t8 = (((x37%x38)%x39)*x40);

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x41 = 619724202821521LLU;
	uint32_t x42 = 1U;
	int16_t x43 = -1;
	int16_t x44 = 2;
	uint64_t t9 = 0LLU;

    t9 = (((x41%x42)%x43)*x44);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x45 = -1;
	int64_t x46 = -1LL;
	int32_t x47 = INT32_MAX;
	volatile int64_t t10 = 14LL;

    t10 = (((x45%x46)%x47)*x48);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MAX;
	int64_t x50 = -1LL;
	static volatile uint8_t x51 = 8U;
	int16_t x52 = INT16_MAX;
	int64_t t11 = 2451938603772314747LL;

    t11 = (((x49%x50)%x51)*x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = -363892133298LL;
	static uint8_t x54 = UINT8_MAX;
	static int8_t x55 = INT8_MIN;
	int64_t t12 = 3381527419293385LL;

    t12 = (((x53%x54)%x55)*x56);

    if (t12 != 118111600640LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = 424166548597874202LL;
	static int8_t x60 = INT8_MAX;

    t13 = (((x57%x58)%x59)*x60);

    if (t13 != 6604LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = -1;
	static uint16_t x62 = 1050U;
	int8_t x63 = INT8_MAX;
	volatile int64_t t14 = -156191163LL;

    t14 = (((x61%x62)%x63)*x64);

    if (t14 != -3993067LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x66 = INT64_MIN;
	int64_t x67 = 1449945LL;
	int32_t x68 = INT32_MIN;
	int64_t t15 = 1341LL;

    t15 = (((x65%x66)%x67)*x68);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x69 = INT8_MIN;
	volatile uint8_t x70 = UINT8_MAX;
	uint8_t x72 = 25U;
	volatile int32_t t16 = -873284;

    t16 = (((x69%x70)%x71)*x72);

    if (t16 != -3200) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x74 = -15;
	volatile int8_t x75 = INT8_MIN;
	volatile int8_t x76 = 0;
	volatile int32_t t17 = 13533711;

    t17 = (((x73%x74)%x75)*x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x78 = INT8_MIN;
	int64_t x80 = INT64_MAX;
	static int64_t t18 = -739692255413423LL;

    t18 = (((x77%x78)%x79)*x80);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -8753;
	static int64_t x83 = INT64_MIN;
	int8_t x84 = 31;
	volatile uint64_t t19 = 7LLU;

    t19 = (((x81%x82)%x83)*x84);

    if (t19 != 9223372036854504465LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 13U;
	uint16_t x86 = UINT16_MAX;
	uint64_t t20 = 7731448LLU;

    t20 = (((x85%x86)%x87)*x88);

    if (t20 != 425971LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x93 = INT64_MIN;
	volatile uint32_t x94 = 246737U;
	static uint8_t x95 = UINT8_MAX;
	static int16_t x96 = INT16_MIN;

    t21 = (((x93%x94)%x95)*x96);

    if (t21 != 7405568LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = INT8_MIN;
	int32_t x98 = INT32_MIN;
	uint8_t x99 = 67U;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t22 = 7LLU;

    t22 = (((x97%x98)%x99)*x100);

    if (t22 != 61LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = -2600917367244001LL;
	int16_t x103 = INT16_MIN;
	volatile int16_t x104 = -16;
	static int64_t t23 = -32835018563LL;

    t23 = (((x101%x102)%x103)*x104);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x109 = 716971144;
	int16_t x110 = 1;
	int64_t x111 = INT64_MIN;
	int16_t x112 = -1;
	int64_t t24 = -599565682LL;

    t24 = (((x109%x110)%x111)*x112);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = 542;
	static volatile int64_t x114 = INT64_MAX;
	uint8_t x115 = UINT8_MAX;
	int64_t x116 = 42377152240347967LL;
	int64_t t25 = 707LL;

    t25 = (((x113%x114)%x115)*x116);

    if (t25 != 1356068871691134944LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = INT16_MIN;
	static int8_t x119 = INT8_MIN;
	volatile int8_t x120 = 0;
	int32_t t26 = -62;

    t26 = (((x117%x118)%x119)*x120);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MAX;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = INT8_MIN;
	uint64_t t27 = 227837625LLU;

    t27 = (((x121%x122)%x123)*x124);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x126 = -1;
	static uint16_t x127 = 3824U;
	uint8_t x128 = 7U;
	volatile int32_t t28 = 5;

    t28 = (((x125%x126)%x127)*x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = -790LL;
	static int16_t x130 = INT16_MAX;
	int32_t x131 = INT32_MIN;
	static int8_t x132 = INT8_MIN;
	static volatile int64_t t29 = 240939740426LL;

    t29 = (((x129%x130)%x131)*x132);

    if (t29 != 101120LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x134 = 369639;
	uint8_t x135 = UINT8_MAX;
	uint8_t x136 = 0U;

    t30 = (((x133%x134)%x135)*x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x137 = INT32_MAX;
	uint8_t x138 = 93U;
	uint32_t x139 = 1U;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t31 = 343454413U;

    t31 = (((x137%x138)%x139)*x140);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x141 = 4U;
	int16_t x142 = -8654;
	int64_t x143 = INT64_MAX;
	uint16_t x144 = UINT16_MAX;
	volatile int64_t t32 = 105LL;

    t32 = (((x141%x142)%x143)*x144);

    if (t32 != 262140LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x145 = 2U;
	volatile int64_t x146 = -1092124367398433LL;
	int32_t x147 = INT32_MIN;
	int32_t x148 = INT32_MAX;

    t33 = (((x145%x146)%x147)*x148);

    if (t33 != 4294967294LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x149 = INT16_MIN;
	uint8_t x150 = UINT8_MAX;
	volatile int16_t x151 = INT16_MIN;
	static int16_t x152 = -1;
	static volatile int32_t t34 = 0;

    t34 = (((x149%x150)%x151)*x152);

    if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x154 = INT32_MIN;
	uint64_t x155 = 100210539802756618LLU;
	int64_t x156 = INT64_MIN;
	volatile uint64_t t35 = 13569246652782LLU;

    t35 = (((x153%x154)%x155)*x156);

    if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x157 = INT64_MAX;
	int8_t x158 = -1;
	static int64_t x159 = INT64_MIN;
	uint16_t x160 = UINT16_MAX;
	static int64_t t36 = -9150431760755074LL;

    t36 = (((x157%x158)%x159)*x160);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x161 = 0U;
	int64_t x162 = INT64_MIN;
	static int8_t x163 = -1;
	int32_t x164 = INT32_MAX;

    t37 = (((x161%x162)%x163)*x164);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x166 = 418U;
	int8_t x168 = INT8_MIN;

    t38 = (((x165%x166)%x167)*x168);

    if (t38 != 4294934656U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x169 = UINT16_MAX;
	uint8_t x170 = 1U;
	static int16_t x171 = 2121;
	int16_t x172 = 443;
	int32_t t39 = 90;

    t39 = (((x169%x170)%x171)*x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x174 = 24U;
	int32_t x175 = -9087;
	int8_t x176 = INT8_MAX;
	volatile int32_t t40 = 1;

    t40 = (((x173%x174)%x175)*x176);

    if (t40 != -1016) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x185 = 86U;
	static int64_t x186 = INT64_MAX;
	int64_t x187 = INT64_MIN;
	int64_t t41 = -1LL;

    t41 = (((x185%x186)%x187)*x188);

    if (t41 != 97008LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x189 = INT16_MAX;
	static int16_t x190 = -13083;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t42 = -1;

    t42 = (((x189%x190)%x191)*x192);

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x193 = UINT16_MAX;
	static uint32_t x195 = 52U;
	static int64_t x196 = 21701734671685LL;
	volatile int64_t t43 = 80902655529LL;

    t43 = (((x193%x194)%x195)*x196);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x197 = 2U;
	int32_t x198 = INT32_MIN;
	uint8_t x199 = UINT8_MAX;
	int64_t x200 = 1LL;
	static int64_t t44 = -15451256788355LL;

    t44 = (((x197%x198)%x199)*x200);

    if (t44 != 2LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x201 = INT32_MAX;
	static volatile int32_t x202 = -27149;
	uint32_t x203 = 1U;
	int64_t x204 = INT64_MIN;
	int64_t t45 = 0LL;

    t45 = (((x201%x202)%x203)*x204);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x213 = INT8_MIN;
	int16_t x214 = -643;
	int32_t x215 = INT32_MIN;
	volatile uint32_t x216 = 9196U;
	volatile uint32_t t46 = 19057743U;

    t46 = (((x213%x214)%x215)*x216);

    if (t46 != 4293790208U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x217 = UINT32_MAX;
	int32_t x218 = INT32_MIN;
	uint64_t x219 = 211LLU;
	uint64_t t47 = 141428386904792LLU;

    t47 = (((x217%x218)%x219)*x220);

    if (t47 != 1560LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x222 = 218092U;
	static uint16_t x223 = 159U;
	uint32_t x224 = 420647U;
	static uint32_t t48 = 16294353U;

    t48 = (((x221%x222)%x223)*x224);

    if (t48 != 48374405U) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x225 = 646391LLU;
	volatile int16_t x226 = INT16_MIN;
	volatile int64_t x227 = INT64_MIN;
	int64_t x228 = INT64_MIN;
	uint64_t t49 = 2632710LLU;

    t49 = (((x225%x226)%x227)*x228);

    if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x229 = UINT32_MAX;
	uint16_t x230 = 165U;
	int32_t x231 = INT32_MIN;
	uint64_t x232 = UINT64_MAX;
	uint64_t t50 = 67531855967887864LLU;

    t50 = (((x229%x230)%x231)*x232);

    if (t50 != 18446744073709551481LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x233 = 79LLU;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = -302887952158850LL;
	static int8_t x236 = -5;

    t51 = (((x233%x234)%x235)*x236);

    if (t51 != 18446744073709551221LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x237 = INT8_MAX;
	uint8_t x238 = 1U;
	int32_t x239 = INT32_MAX;
	int64_t x240 = INT64_MAX;
	int64_t t52 = 110020327510LL;

    t52 = (((x237%x238)%x239)*x240);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x241 = INT16_MIN;
	volatile int16_t x242 = INT16_MIN;
	int32_t x243 = -1;
	uint8_t x244 = 0U;
	volatile int32_t t53 = 93269;

    t53 = (((x241%x242)%x243)*x244);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x246 = 1280U;
	volatile int64_t x248 = 7532LL;
	volatile int64_t t54 = 332540181463LL;

    t54 = (((x245%x246)%x247)*x248);

    if (t54 != 15064LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x250 = UINT64_MAX;
	static int16_t x251 = INT16_MIN;
	uint32_t x252 = 1299U;
	static uint64_t t55 = 33502LLU;

    t55 = (((x249%x250)%x251)*x252);

    if (t55 != 528693LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x253 = 7;
	static volatile uint8_t x254 = 24U;
	int64_t t56 = -13647610951LL;

    t56 = (((x253%x254)%x255)*x256);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x257 = INT8_MAX;
	uint8_t x259 = UINT8_MAX;
	volatile int16_t x260 = INT16_MAX;
	int32_t t57 = 6386;

    t57 = (((x257%x258)%x259)*x260);

    if (t57 != 4161409) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x261 = -1;
	static int32_t x262 = -1;
	int8_t x263 = INT8_MIN;
	uint8_t x264 = 3U;

    t58 = (((x261%x262)%x263)*x264);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x265 = 3631721LLU;
	int64_t x266 = -1LL;
	uint16_t x267 = 12U;
	int32_t x268 = INT32_MAX;
	uint64_t t59 = 113930LLU;

    t59 = (((x265%x266)%x267)*x268);

    if (t59 != 10737418235LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x270 = INT32_MIN;
	int64_t x272 = INT64_MIN;
	uint64_t t60 = 45268114956560LLU;

    t60 = (((x269%x270)%x271)*x272);

    if (t60 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x273 = INT32_MIN;
	uint8_t x274 = 1U;
	volatile uint16_t x275 = 1334U;
	static int64_t x276 = -1LL;

    t61 = (((x273%x274)%x275)*x276);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x277 = -1;
	int8_t x278 = INT8_MAX;
	static int32_t x279 = INT32_MIN;
	uint64_t x280 = 17278643747203LLU;
	volatile uint64_t t62 = 380LLU;

    t62 = (((x277%x278)%x279)*x280);

    if (t62 != 18446726795065804413LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x282 = -1705376375337933LL;
	int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	int64_t t63 = -166963LL;

    t63 = (((x281%x282)%x283)*x284);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x285 = INT64_MIN;
	uint32_t x286 = UINT32_MAX;
	int16_t x287 = INT16_MAX;
	uint64_t t64 = 21832674351249LLU;

    t64 = (((x285%x286)%x287)*x288);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x289 = INT16_MAX;
	uint32_t x290 = 22559U;
	int8_t x291 = INT8_MAX;
	volatile int8_t x292 = -1;
	static uint32_t t65 = 1731981U;

    t65 = (((x289%x290)%x291)*x292);

    if (t65 != 4294967248U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x293 = INT64_MIN;
	uint8_t x294 = 5U;
	volatile int8_t x295 = 21;
	int32_t x296 = INT32_MIN;
	volatile int64_t t66 = -1LL;

    t66 = (((x293%x294)%x295)*x296);

    if (t66 != 6442450944LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x297 = INT64_MAX;
	uint32_t x298 = 101915624U;
	volatile uint64_t x299 = UINT64_MAX;
	static int16_t x300 = INT16_MIN;
	uint64_t t67 = 2743LLU;

    t67 = (((x297%x298)%x299)*x300);

    if (t67 != 18446741858021310464LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x301 = -1;
	int32_t x302 = INT32_MAX;
	uint8_t x303 = UINT8_MAX;
	int8_t x304 = -2;
	volatile int32_t t68 = -23890864;

    t68 = (((x301%x302)%x303)*x304);

    if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x305 = 1;
	volatile uint8_t x306 = 7U;
	volatile uint8_t x307 = UINT8_MAX;
	int16_t x308 = INT16_MIN;
	volatile int32_t t69 = -2205;

    t69 = (((x305%x306)%x307)*x308);

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x310 = -1;
	int16_t x311 = INT16_MIN;
	volatile int16_t x312 = INT16_MAX;
	int32_t t70 = 758109;

    t70 = (((x309%x310)%x311)*x312);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x313 = 175U;
	volatile int16_t x314 = 2862;
	volatile int64_t x316 = -1LL;
	volatile int64_t t71 = 34437732552273LL;

    t71 = (((x313%x314)%x315)*x316);

    if (t71 != -175LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x318 = 1U;
	uint64_t t72 = 370LLU;

    t72 = (((x317%x318)%x319)*x320);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x321 = -1;
	int32_t x323 = INT32_MIN;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t73 = 171907576222LLU;

    t73 = (((x321%x322)%x323)*x324);

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x325 = INT64_MIN;
	volatile int32_t x326 = INT32_MAX;
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = -322LL;
	int64_t t74 = -11LL;

    t74 = (((x325%x326)%x327)*x328);

    if (t74 != 644LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x329 = INT32_MAX;
	int8_t x330 = INT8_MAX;
	static int32_t x331 = INT32_MIN;
	volatile uint64_t t75 = 37LLU;

    t75 = (((x329%x330)%x331)*x332);

    if (t75 != 5799018770240164LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x334 = 1078847260507LLU;
	int16_t x336 = INT16_MIN;
	volatile uint64_t t76 = 5279816250LLU;

    t76 = (((x333%x334)%x335)*x336);

    if (t76 != 18446744073701195776LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x338 = INT8_MIN;
	static uint64_t x339 = 311425516444216074LLU;
	int32_t x340 = INT32_MIN;
	volatile uint64_t t77 = 27735350785793LLU;

    t77 = (((x337%x338)%x339)*x340);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x341 = -1;
	int32_t x342 = 9577;
	uint16_t x343 = 14U;
	volatile uint32_t x344 = UINT32_MAX;
	volatile uint32_t t78 = 1624U;

    t78 = (((x341%x342)%x343)*x344);

    if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x345 = INT32_MIN;
	int64_t x347 = INT64_MIN;
	int32_t x348 = -25;
	int64_t t79 = 182696493912LL;

    t79 = (((x345%x346)%x347)*x348);

    if (t79 != 50LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x349 = -1;
	int32_t x351 = INT32_MIN;
	static volatile int64_t x352 = INT64_MIN;
	uint64_t t80 = 85093916884196LLU;

    t80 = (((x349%x350)%x351)*x352);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x353 = 23;
	uint8_t x356 = UINT8_MAX;
	static int32_t t81 = -643522;

    t81 = (((x353%x354)%x355)*x356);

    if (t81 != 510) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x357 = INT64_MIN;
	volatile int8_t x359 = INT8_MIN;
	uint8_t x360 = 0U;
	volatile int64_t t82 = -282LL;

    t82 = (((x357%x358)%x359)*x360);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x361 = 0U;
	uint8_t x362 = 37U;
	uint16_t x363 = 22U;
	volatile int64_t x364 = INT64_MAX;
	volatile int64_t t83 = 12031LL;

    t83 = (((x361%x362)%x363)*x364);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x369 = 412LL;
	volatile uint64_t x370 = 31041953LLU;
	int32_t x372 = INT32_MIN;

    t84 = (((x369%x370)%x371)*x372);

    if (t84 != 18446743188946288640LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x374 = -125096004094182LL;
	int32_t x376 = INT32_MIN;

    t85 = (((x373%x374)%x375)*x376);

    if (t85 != 18446705784076107776LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x377 = INT64_MAX;
	int64_t x378 = 921645895853703LL;
	int32_t x379 = INT32_MIN;
	int8_t x380 = INT8_MAX;
	static volatile int64_t t86 = 24383LL;

    t86 = (((x377%x378)%x379)*x380);

    if (t86 != 67791189538LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x381 = -1;
	static int16_t x382 = INT16_MAX;
	volatile uint16_t x383 = 19530U;
	int16_t x384 = 1;
	volatile int32_t t87 = 6;

    t87 = (((x381%x382)%x383)*x384);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x385 = 0;
	volatile int32_t x386 = 237711554;
	static uint16_t x387 = UINT16_MAX;
	uint64_t x388 = 528768586850464207LLU;
	volatile uint64_t t88 = 35156LLU;

    t88 = (((x385%x386)%x387)*x388);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x389 = 59U;
	int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MIN;
	int16_t x392 = -1;
	static int32_t t89 = 672036773;

    t89 = (((x389%x390)%x391)*x392);

    if (t89 != -59) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x393 = INT64_MIN;
	int64_t x394 = -1LL;
	int32_t x396 = 578597016;
	int64_t t90 = -88LL;

    t90 = (((x393%x394)%x395)*x396);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x397 = 44696213U;
	uint32_t x399 = 952U;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t91 = 578657LLU;

    t91 = (((x397%x398)%x399)*x400);

    if (t91 != 18446744073709550851LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x401 = INT16_MAX;
	int8_t x402 = -1;
	int8_t x403 = 1;
	static volatile int32_t t92 = 1;

    t92 = (((x401%x402)%x403)*x404);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x405 = INT64_MAX;
	volatile int8_t x406 = -1;
	int64_t x407 = INT64_MIN;
	int16_t x408 = INT16_MAX;
	static volatile int64_t t93 = -445LL;

    t93 = (((x405%x406)%x407)*x408);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x409 = -1;
	int64_t x410 = 1LL;
	int64_t x412 = INT64_MIN;
	volatile int64_t t94 = -422385LL;

    t94 = (((x409%x410)%x411)*x412);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x413 = UINT16_MAX;
	uint32_t x414 = UINT32_MAX;
	uint32_t x415 = UINT32_MAX;
	uint64_t x416 = 11852504539LLU;

    t95 = (((x413%x414)%x415)*x416);

    if (t95 != 776753884963365LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x417 = 2092636;
	uint8_t x418 = 3U;
	static volatile int16_t x419 = INT16_MAX;
	volatile uint64_t x420 = 20717172578910LLU;

    t96 = (((x417%x418)%x419)*x420);

    if (t96 != 20717172578910LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x421 = INT32_MAX;
	uint32_t x423 = 10U;
	int32_t x424 = 35531914;
	volatile uint32_t t97 = 0U;

    t97 = (((x421%x422)%x423)*x424);

    if (t97 != 35531914U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x425 = -7;
	uint64_t x426 = UINT64_MAX;
	static volatile uint8_t x427 = 8U;
	uint64_t t98 = 603186LLU;

    t98 = (((x425%x426)%x427)*x428);

    if (t98 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x429 = 1269616097U;
	static uint8_t x430 = 23U;
	volatile uint32_t x431 = 927234033U;
	uint32_t t99 = 2694U;

    t99 = (((x429%x430)%x431)*x432);

    if (t99 != 4294964736U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x433 = 96325529;
	uint64_t x435 = 68186637236320716LLU;
	int64_t x436 = -1LL;
	uint64_t t100 = 10991763461LLU;

    t100 = (((x433%x434)%x435)*x436);

    if (t100 != 18446744073709497002LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x438 = -992;
	int8_t x439 = -1;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t101 = 317938;

    t101 = (((x437%x438)%x439)*x440);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x441 = 134142316U;
	static int16_t x442 = INT16_MIN;
	uint64_t x443 = 127208893270151LLU;
	int8_t x444 = INT8_MIN;

    t102 = (((x441%x442)%x443)*x444);

    if (t102 != 18446744056539335168LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x445 = 2234U;
	static int64_t x446 = -1LL;
	static int64_t x447 = INT64_MIN;
	volatile int8_t x448 = INT8_MIN;
	volatile int64_t t103 = 4152275744879LL;

    t103 = (((x445%x446)%x447)*x448);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x449 = INT8_MIN;
	uint32_t x451 = 619781U;
	int64_t x452 = -1LL;
	int64_t t104 = 182697499645LL;

    t104 = (((x449%x450)%x451)*x452);

    if (t104 != -591438LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x453 = INT8_MIN;
	volatile int16_t x454 = -1;
	uint8_t x455 = UINT8_MAX;
	volatile int32_t t105 = -203958;

    t105 = (((x453%x454)%x455)*x456);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x458 = -229;
	uint32_t t106 = 5U;

    t106 = (((x457%x458)%x459)*x460);

    if (t106 != 3642584956U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x461 = -1;
	int16_t x462 = INT16_MAX;
	int16_t x463 = 1;
	int8_t x464 = 0;

    t107 = (((x461%x462)%x463)*x464);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x465 = 574LLU;
	int32_t x466 = -1;
	volatile uint32_t x467 = 2054972U;
	static uint32_t x468 = UINT32_MAX;
	uint64_t t108 = 1783390999236078663LLU;

    t108 = (((x465%x466)%x467)*x468);

    if (t108 != 2465311227330LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int64_t x469 = INT64_MAX;
	volatile uint32_t x470 = 180907U;
	uint32_t x471 = UINT32_MAX;
	int8_t x472 = INT8_MIN;
	volatile int64_t t109 = -106451451960597LL;

    t109 = (((x469%x470)%x471)*x472);

    if (t109 != -9169792LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x473 = INT8_MAX;
	uint32_t x474 = UINT32_MAX;
	static int8_t x475 = INT8_MIN;
	volatile uint16_t x476 = UINT16_MAX;
	volatile uint32_t t110 = 8135U;

    t110 = (((x473%x474)%x475)*x476);

    if (t110 != 8322945U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x477 = UINT32_MAX;
	static int64_t x478 = -255LL;
	uint16_t x480 = UINT16_MAX;
	static volatile int64_t t111 = 36319LL;

    t111 = (((x477%x478)%x479)*x480);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x481 = 45402087U;
	uint64_t x482 = 19LLU;
	int16_t x483 = INT16_MIN;
	int32_t x484 = 993483602;
	uint64_t t112 = 44878809LLU;

    t112 = (((x481%x482)%x483)*x484);

    if (t112 != 9934836020LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x485 = INT32_MAX;
	static int8_t x487 = INT8_MIN;
	volatile int32_t x488 = INT32_MIN;
	static int32_t t113 = -378;

    t113 = (((x485%x486)%x487)*x488);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x493 = 8167979U;
	static int16_t x494 = 1559;
	int16_t x495 = -1;
	uint8_t x496 = 26U;
	volatile uint32_t t114 = 2536U;

    t114 = (((x493%x494)%x495)*x496);

    if (t114 != 9828U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x497 = -1LL;
	int32_t x498 = INT32_MAX;
	volatile uint64_t x500 = 18154LLU;
	volatile uint64_t t115 = 36427LLU;

    t115 = (((x497%x498)%x499)*x500);

    if (t115 != 18446744073709533462LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x501 = INT64_MIN;
	volatile uint64_t x502 = 238277296973123433LLU;
	int32_t x503 = -1;
	int16_t x504 = -20;

    t116 = (((x501%x502)%x503)*x504);

    if (t116 != 15070049036187844536LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x505 = -3;
	uint8_t x506 = 59U;
	static int8_t x507 = -1;
	int32_t x508 = INT32_MAX;

    t117 = (((x505%x506)%x507)*x508);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x509 = -1;
	uint64_t x510 = 230928124LLU;
	uint32_t x512 = 306838150U;
	uint64_t t118 = 3LLU;

    t118 = (((x509%x510)%x511)*x512);

    if (t118 != 30376976850LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x513 = UINT16_MAX;
	uint16_t x514 = UINT16_MAX;
	uint16_t x515 = 1U;
	uint64_t t119 = 17638LLU;

    t119 = (((x513%x514)%x515)*x516);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x517 = 107295U;
	int16_t x518 = -1242;
	int32_t x519 = 4235;
	uint64_t x520 = 13523931458692412LLU;
	volatile uint64_t t120 = 211074LLU;

    t120 = (((x517%x518)%x519)*x520);

    if (t120 != 757238597633673424LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x521 = -1;
	static uint8_t x522 = 1U;
	int64_t x523 = INT64_MIN;
	int64_t t121 = 10038246177LL;

    t121 = (((x521%x522)%x523)*x524);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x525 = UINT32_MAX;
	uint16_t x526 = 864U;
	int8_t x527 = INT8_MIN;
	static volatile int64_t t122 = 6634535041106727LL;

    t122 = (((x525%x526)%x527)*x528);

    if (t122 != -36564LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x529 = UINT32_MAX;
	uint16_t x530 = UINT16_MAX;
	static uint64_t x531 = 30LLU;

    t123 = (((x529%x530)%x531)*x532);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x533 = -5364;
	int32_t x535 = -38084;
	int16_t x536 = INT16_MIN;

    t124 = (((x533%x534)%x535)*x536);

    if (t124 != 3222798336U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x537 = INT16_MIN;
	static uint8_t x538 = 6U;
	int8_t x539 = INT8_MAX;
	uint8_t x540 = UINT8_MAX;

    t125 = (((x537%x538)%x539)*x540);

    if (t125 != -510) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x542 = 1607379339LLU;
	int16_t x544 = -9;
	static uint64_t t126 = 3228246308473989554LLU;

    t126 = (((x541%x542)%x543)*x544);

    if (t126 != 18446744063498024644LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x545 = -1;
	int32_t x546 = 75625600;
	int8_t x547 = INT8_MIN;
	static int16_t x548 = -4;
	int32_t t127 = -24484;

    t127 = (((x545%x546)%x547)*x548);

    if (t127 != 4) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x549 = -30;
	static uint32_t x551 = 62415U;
	volatile uint32_t t128 = 21393056U;

    t128 = (((x549%x550)%x551)*x552);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x553 = 3;
	volatile int8_t x554 = INT8_MIN;
	static volatile uint64_t x555 = UINT64_MAX;
	static uint32_t x556 = 61465U;
	volatile uint64_t t129 = 162939648LLU;

    t129 = (((x553%x554)%x555)*x556);

    if (t129 != 184395LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x557 = -1;
	int16_t x558 = INT16_MIN;

    t130 = (((x557%x558)%x559)*x560);

    if (t130 != 128) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x561 = 393918191099LL;
	static volatile uint64_t x563 = 29419088LLU;
	int32_t x564 = 413;
	uint64_t t131 = 53178343975217317LLU;

    t131 = (((x561%x562)%x563)*x564);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x565 = -27153926487143121LL;
	int64_t x566 = INT64_MIN;
	volatile int32_t x567 = INT32_MIN;
	uint64_t x568 = 3377739707916LLU;
	volatile uint64_t t132 = 12746089974LLU;

    t132 = (((x565%x566)%x567)*x568);

    if (t132 != 1455927891002853428LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x573 = INT16_MAX;
	int64_t x575 = INT64_MIN;
	int8_t x576 = INT8_MAX;
	volatile uint64_t t133 = 725092963LLU;

    t133 = (((x573%x574)%x575)*x576);

    if (t133 != 889LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x581 = 486004LLU;
	int32_t x582 = INT32_MAX;
	uint16_t x583 = 36U;
	int64_t x584 = INT64_MAX;
	volatile uint64_t t134 = 57LLU;

    t134 = (((x581%x582)%x583)*x584);

    if (t134 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x585 = UINT64_MAX;
	int16_t x586 = -108;
	int32_t x587 = -1;
	volatile uint64_t t135 = 7265538721844171179LLU;

    t135 = (((x585%x586)%x587)*x588);

    if (t135 != 173585664282304LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x590 = UINT64_MAX;
	int16_t x591 = INT16_MAX;
	volatile uint16_t x592 = 24U;
	uint64_t t136 = 5353959835868636LLU;

    t136 = (((x589%x590)%x591)*x592);

    if (t136 != 228216LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x593 = INT16_MAX;
	int16_t x594 = INT16_MAX;

    t137 = (((x593%x594)%x595)*x596);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x597 = UINT16_MAX;
	int32_t x598 = INT32_MIN;
	static int8_t x599 = INT8_MIN;
	int64_t x600 = 1LL;
	int64_t t138 = -14523307270LL;

    t138 = (((x597%x598)%x599)*x600);

    if (t138 != 127LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x601 = UINT8_MAX;
	int16_t x602 = INT16_MAX;
	int32_t x603 = INT32_MIN;
	uint64_t x604 = 56611LLU;
	volatile uint64_t t139 = 116308391LLU;

    t139 = (((x601%x602)%x603)*x604);

    if (t139 != 14435805LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x609 = 11;
	uint8_t x610 = UINT8_MAX;
	uint32_t x611 = 948308U;
	int64_t x612 = -1LL;
	static volatile int64_t t140 = 7LL;

    t140 = (((x609%x610)%x611)*x612);

    if (t140 != -11LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x614 = 460;
	uint64_t x615 = UINT64_MAX;
	uint32_t x616 = 11U;
	uint64_t t141 = 3LLU;

    t141 = (((x613%x614)%x615)*x616);

    if (t141 != 18446744073709547788LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x619 = INT8_MAX;

    t142 = (((x617%x618)%x619)*x620);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x621 = INT16_MIN;
	int64_t x623 = 5LL;
	int64_t x624 = -3679778877LL;
	int64_t t143 = -9621484713007LL;

    t143 = (((x621%x622)%x623)*x624);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x625 = 1844U;
	uint64_t x626 = 4385LLU;
	uint16_t x628 = 1U;
	static volatile uint64_t t144 = 81070653390LLU;

    t144 = (((x625%x626)%x627)*x628);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x633 = -1;
	volatile int32_t x634 = INT32_MAX;
	int64_t x635 = 401022615438111956LL;
	static volatile int32_t x636 = INT32_MIN;

    t145 = (((x633%x634)%x635)*x636);

    if (t145 != 2147483648LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x638 = 23699270LLU;
	uint32_t x639 = UINT32_MAX;
	static volatile uint64_t x640 = 3324331951LLU;

    t146 = (((x637%x638)%x639)*x640);

    if (t146 != 6351428733597188LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x641 = INT16_MIN;
	volatile uint8_t x642 = 80U;
	int32_t x644 = 38160458;
	uint64_t t147 = 2969349449968026LLU;

    t147 = (((x641%x642)%x643)*x644);

    if (t147 != 18446744071877849632LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x645 = 2574U;
	int8_t x646 = 18;
	int16_t x647 = -1;

    t148 = (((x645%x646)%x647)*x648);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x650 = UINT16_MAX;
	volatile uint16_t x652 = 116U;

    t149 = (((x649%x650)%x651)*x652);

    if (t149 != 116) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x653 = 29527U;
	int8_t x654 = INT8_MIN;
	uint64_t x655 = 1847534180206LLU;
	int64_t x656 = INT64_MIN;
	static uint64_t t150 = 24LLU;

    t150 = (((x653%x654)%x655)*x656);

    if (t150 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x659 = 1;

    t151 = (((x657%x658)%x659)*x660);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x661 = INT8_MIN;
	int32_t x662 = 7;
	static int16_t x663 = INT16_MAX;

    t152 = (((x661%x662)%x663)*x664);

    if (t152 != 65536) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x665 = UINT64_MAX;
	int8_t x666 = INT8_MIN;
	static volatile int8_t x667 = -1;
	static int64_t x668 = INT64_MIN;
	static uint64_t t153 = 1316942667652177531LLU;

    t153 = (((x665%x666)%x667)*x668);

    if (t153 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x669 = UINT64_MAX;
	uint8_t x670 = 4U;
	volatile int64_t x671 = 3062441958885272LL;
	uint64_t t154 = 436LLU;

    t154 = (((x669%x670)%x671)*x672);

    if (t154 != 381LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x673 = UINT64_MAX;
	uint16_t x674 = UINT16_MAX;
	volatile int8_t x675 = INT8_MIN;
	volatile int8_t x676 = 42;
	uint64_t t155 = 1870LLU;

    t155 = (((x673%x674)%x675)*x676);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x678 = -1LL;
	volatile int64_t t156 = 2034LL;

    t156 = (((x677%x678)%x679)*x680);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x681 = INT16_MAX;
	uint16_t x682 = UINT16_MAX;
	int32_t x684 = 0;
	static uint32_t t157 = 1025613U;

    t157 = (((x681%x682)%x683)*x684);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x685 = -1;
	int64_t x686 = -1LL;
	uint32_t x687 = 228U;
	volatile int16_t x688 = INT16_MAX;
	static volatile int64_t t158 = 34LL;

    t158 = (((x685%x686)%x687)*x688);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x689 = 69375116LLU;
	int8_t x690 = -4;
	int8_t x692 = INT8_MAX;
	uint64_t t159 = 4310729064908LLU;

    t159 = (((x689%x690)%x691)*x692);

    if (t159 != 440478672LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x693 = INT32_MAX;
	static int16_t x694 = -15;
	volatile int32_t x695 = INT32_MAX;

    t160 = (((x693%x694)%x695)*x696);

    if (t160 != 1988) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x697 = INT8_MIN;
	volatile int16_t x698 = 2;
	volatile uint64_t x699 = 14347535LLU;
	static int64_t x700 = -202830262550899LL;
	volatile uint64_t t161 = 2785823588701606403LLU;

    t161 = (((x697%x698)%x699)*x700);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x706 = INT8_MIN;
	volatile uint16_t x707 = UINT16_MAX;

    t162 = (((x705%x706)%x707)*x708);

    if (t162 != 666040197U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x709 = 520415LLU;
	int32_t x710 = 580135224;
	volatile int32_t x711 = 209545260;
	volatile uint8_t x712 = 11U;
	static volatile uint64_t t163 = 8267875315427621LLU;

    t163 = (((x709%x710)%x711)*x712);

    if (t163 != 5724565LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x713 = -24LL;
	uint16_t x714 = 81U;
	int8_t x715 = INT8_MAX;
	int16_t x716 = 3512;
	int64_t t164 = 531670015LL;

    t164 = (((x713%x714)%x715)*x716);

    if (t164 != -84288LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x717 = -1376LL;
	uint16_t x720 = 3U;
	uint64_t t165 = 28038207312LLU;

    t165 = (((x717%x718)%x719)*x720);

    if (t165 != 6442446816LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x721 = UINT8_MAX;
	int16_t x724 = 2228;
	int32_t t166 = -1;

    t166 = (((x721%x722)%x723)*x724);

    if (t166 != 282956) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x725 = 976U;
	static int16_t x727 = 74;
	uint64_t t167 = 6733985383792084LLU;

    t167 = (((x725%x726)%x727)*x728);

    if (t167 != 7518LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x729 = UINT32_MAX;
	static uint8_t x730 = 39U;
	static int64_t x731 = 15LL;
	int8_t x732 = 4;
	int64_t t168 = 3511756806887750026LL;

    t168 = (((x729%x730)%x731)*x732);

    if (t168 != 24LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x737 = INT64_MIN;
	int32_t x738 = INT32_MAX;
	static volatile uint64_t t169 = 221942195802480LLU;

    t169 = (((x737%x738)%x739)*x740);

    if (t169 != 2LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x741 = 2691;
	static int16_t x742 = 3679;
	volatile int64_t x743 = -745LL;
	int16_t x744 = INT16_MAX;
	int64_t t170 = -27677228LL;

    t170 = (((x741%x742)%x743)*x744);

    if (t170 != 14941752LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x745 = UINT16_MAX;
	uint16_t x747 = 17741U;
	int8_t x748 = -1;
	int32_t t171 = 57699385;

    t171 = (((x745%x746)%x747)*x748);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x749 = UINT16_MAX;
	volatile uint64_t x750 = UINT64_MAX;
	static int64_t x751 = -2992998130923976LL;
	int64_t x752 = INT64_MIN;
	volatile uint64_t t172 = 48761765474543LLU;

    t172 = (((x749%x750)%x751)*x752);

    if (t172 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x755 = INT8_MIN;
	uint64_t x756 = 198552901432055LLU;

    t173 = (((x753%x754)%x755)*x756);

    if (t173 != 18446545520808119561LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x757 = 0;
	int32_t x758 = INT32_MIN;
	static int8_t x759 = -35;
	int64_t x760 = INT64_MAX;

    t174 = (((x757%x758)%x759)*x760);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x765 = INT8_MIN;
	int64_t x767 = INT64_MIN;
	static int32_t x768 = -1;
	int64_t t175 = -353065691276872399LL;

    t175 = (((x765%x766)%x767)*x768);

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x769 = 245U;
	uint32_t x770 = 702U;
	uint64_t x771 = 257394364049903LLU;
	static int8_t x772 = INT8_MAX;
	static volatile uint64_t t176 = 1618799802024LLU;

    t176 = (((x769%x770)%x771)*x772);

    if (t176 != 31115LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x774 = INT64_MIN;
	static int64_t x775 = -1LL;
	static uint32_t x776 = UINT32_MAX;
	static volatile int64_t t177 = -363LL;

    t177 = (((x773%x774)%x775)*x776);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x777 = INT8_MIN;
	static int32_t x779 = INT32_MAX;
	uint32_t x780 = 123U;
	static uint32_t t178 = 7513287U;

    t178 = (((x777%x778)%x779)*x780);

    if (t178 != 2147468027U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x781 = -7889000871LL;
	static int64_t x782 = INT64_MAX;
	uint8_t x783 = UINT8_MAX;
	int32_t x784 = 129759242;
	int64_t t179 = -75455047LL;

    t179 = (((x781%x782)%x783)*x784);

    if (t179 != -10510498602LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x790 = -1;
	int8_t x791 = INT8_MAX;
	int16_t x792 = INT16_MAX;
	int64_t t180 = -89952135089904568LL;

    t180 = (((x789%x790)%x791)*x792);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x793 = INT8_MIN;
	volatile int32_t x794 = INT32_MIN;
	volatile int8_t x795 = INT8_MIN;
	uint64_t x796 = UINT64_MAX;
	uint64_t t181 = 143400883LLU;

    t181 = (((x793%x794)%x795)*x796);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x797 = 3503156752611380LLU;
	int32_t x798 = INT32_MIN;
	uint16_t x800 = UINT16_MAX;
	volatile uint64_t t182 = 5147856867798LLU;

    t182 = (((x797%x798)%x799)*x800);

    if (t182 != 14090025LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x805 = -1;
	int64_t x806 = INT64_MIN;
	volatile int32_t x807 = INT32_MIN;
	uint32_t x808 = 106336941U;

    t183 = (((x805%x806)%x807)*x808);

    if (t183 != -106336941LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x809 = INT64_MIN;
	uint16_t x810 = 3991U;
	uint64_t x812 = 33110415548777LLU;
	volatile uint64_t t184 = 105LLU;

    t184 = (((x809%x810)%x811)*x812);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x815 = INT32_MIN;
	volatile uint64_t x816 = 14LLU;

    t185 = (((x813%x814)%x815)*x816);

    if (t185 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x818 = UINT16_MAX;
	static volatile uint64_t x819 = 4596993634465760875LLU;
	int32_t x820 = INT32_MAX;
	volatile uint64_t t186 = 224535725281692874LLU;

    t186 = (((x817%x818)%x819)*x820);

    if (t186 != 42949672940LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x821 = INT64_MIN;
	int8_t x822 = -2;
	int16_t x823 = INT16_MIN;
	uint8_t x824 = UINT8_MAX;

    t187 = (((x821%x822)%x823)*x824);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x825 = 1;
	volatile uint32_t x826 = 9831218U;
	int32_t x827 = INT32_MIN;
	static int8_t x828 = INT8_MIN;
	uint32_t t188 = 14U;

    t188 = (((x825%x826)%x827)*x828);

    if (t188 != 4294967168U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x833 = UINT16_MAX;
	volatile int16_t x834 = INT16_MAX;
	int8_t x836 = INT8_MAX;
	int32_t t189 = 7738768;

    t189 = (((x833%x834)%x835)*x836);

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x842 = -2381329672249LL;
	static uint8_t x843 = UINT8_MAX;
	static volatile int64_t x844 = -1LL;
	int64_t t190 = -105351294828LL;

    t190 = (((x841%x842)%x843)*x844);

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x849 = INT8_MAX;
	int32_t x850 = INT32_MAX;
	volatile int8_t x851 = -2;
	static volatile int64_t t191 = 15549521540LL;

    t191 = (((x849%x850)%x851)*x852);

    if (t191 != -277638589182778084LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x853 = 114069LLU;
	int64_t x854 = INT64_MAX;
	int8_t x855 = INT8_MIN;
	volatile uint64_t t192 = 38838LLU;

    t192 = (((x853%x854)%x855)*x856);

    if (t192 != 6273795LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x857 = 139265844LL;
	volatile int32_t x858 = INT32_MIN;
	uint64_t x859 = UINT64_MAX;
	uint32_t x860 = 22U;

    t193 = (((x857%x858)%x859)*x860);

    if (t193 != 3063848568LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x861 = UINT64_MAX;
	static int16_t x864 = -1;
	uint64_t t194 = 7LLU;

    t194 = (((x861%x862)%x863)*x864);

    if (t194 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x865 = INT64_MIN;
	static volatile int32_t x866 = INT32_MIN;
	uint32_t x867 = 248933177U;
	volatile uint32_t x868 = 115223U;
	int64_t t195 = -269LL;

    t195 = (((x865%x866)%x867)*x868);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x869 = UINT32_MAX;
	uint8_t x870 = 3U;
	static uint32_t x871 = 48680586U;
	static volatile uint8_t x872 = 3U;

    t196 = (((x869%x870)%x871)*x872);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x873 = 532;
	static uint64_t t197 = 262308334463LLU;

    t197 = (((x873%x874)%x875)*x876);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x877 = INT16_MIN;
	uint8_t x878 = UINT8_MAX;
	int64_t x879 = INT64_MIN;
	int64_t x880 = 2LL;

    t198 = (((x877%x878)%x879)*x880);

    if (t198 != -256LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x882 = -1;
	int8_t x883 = -3;
	static int32_t x884 = 22;
	int32_t t199 = 693749;

    t199 = (((x881%x882)%x883)*x884);

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

