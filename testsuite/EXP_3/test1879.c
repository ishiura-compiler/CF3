
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

volatile uint64_t x4 = UINT64_MAX;
uint16_t x12 = UINT16_MAX;
uint64_t x13 = 151LLU;
static volatile int8_t x21 = -1;
static int64_t x22 = -1LL;
int8_t x23 = INT8_MIN;
static int64_t x25 = 1LL;
uint64_t x29 = UINT64_MAX;
int64_t x30 = INT64_MIN;
int32_t x31 = -92740;
static uint16_t x33 = UINT16_MAX;
int16_t x34 = 17;
volatile int32_t t8 = 168;
static volatile int16_t x41 = INT16_MIN;
uint64_t x43 = 10464344641936LLU;
int64_t x48 = -1LL;
volatile uint64_t x49 = UINT64_MAX;
int32_t x52 = -1;
int32_t x53 = INT32_MIN;
static int8_t x54 = -60;
int8_t x64 = INT8_MAX;
int32_t x65 = -1;
int8_t x68 = INT8_MIN;
uint32_t x72 = 432U;
static volatile uint8_t x74 = 10U;
volatile int32_t t19 = -15;
static int32_t x83 = INT32_MIN;
int16_t x97 = -1;
int8_t x101 = -1;
int16_t x106 = INT16_MIN;
int16_t x115 = INT16_MIN;
uint64_t x117 = 728455592543LLU;
volatile uint16_t x125 = UINT16_MAX;
int32_t t31 = -3179431;
volatile uint64_t x138 = UINT64_MAX;
uint32_t x153 = UINT32_MAX;
int16_t x157 = INT16_MAX;
int8_t x167 = -3;
int64_t x172 = INT64_MIN;
int8_t x174 = INT8_MAX;
int8_t x176 = INT8_MIN;
int8_t x177 = INT8_MIN;
static int64_t x180 = INT64_MIN;
int32_t t44 = -21401;
int64_t x182 = 7LL;
uint8_t x183 = 2U;
int8_t x188 = -1;
int16_t x193 = INT16_MAX;
int16_t x197 = -1;
static int8_t x199 = INT8_MAX;
static uint16_t x200 = 108U;
int32_t t49 = -6517658;
static int16_t x202 = INT16_MIN;
static volatile int32_t t50 = -2119;
int32_t t51 = 346848377;
uint32_t x215 = 13U;
volatile int32_t x230 = INT32_MIN;
int16_t x233 = INT16_MAX;
uint8_t x244 = 1U;
volatile int16_t x255 = INT16_MAX;
static int16_t x259 = INT16_MIN;
int16_t x261 = 5;
volatile int32_t x266 = -1;
uint64_t x268 = UINT64_MAX;
static int64_t x276 = -68121036668825LL;
volatile int32_t t68 = 244560;
int16_t x280 = INT16_MIN;
int32_t t69 = 171;
static int32_t x287 = -1;
int32_t t72 = -23921152;
int8_t x301 = -2;
static uint16_t x305 = 13252U;
int32_t t77 = -994;
int16_t x320 = INT16_MAX;
volatile int64_t x327 = -1LL;
int64_t x333 = INT64_MIN;
volatile int64_t x341 = -1LL;
int32_t x342 = -1;
uint64_t x343 = UINT64_MAX;
int16_t x346 = INT16_MIN;
uint32_t x360 = 6872U;
static int16_t x361 = INT16_MIN;
volatile int32_t t90 = 3;
int16_t x367 = -1;
int32_t t91 = 97732747;
static int32_t x378 = INT32_MIN;
uint32_t x380 = UINT32_MAX;
static volatile int32_t t95 = 7449;
int16_t x385 = 1472;
int64_t x388 = INT64_MIN;
static int8_t x389 = -1;
volatile int32_t x399 = 0;
uint8_t x403 = 0U;
int64_t x406 = -722596LL;
int32_t t101 = 61654750;
int8_t x411 = -2;
volatile int64_t x412 = INT64_MIN;
volatile int16_t x414 = -1;
uint64_t x420 = 28838928LLU;
int16_t x422 = INT16_MIN;
int32_t t105 = -1022;
static int32_t t106 = 49;
int32_t x431 = INT32_MIN;
int64_t x441 = 937281633788770LL;
uint32_t x442 = UINT32_MAX;
int64_t x447 = INT64_MIN;
static int32_t t115 = -3030226;
uint16_t x468 = 1U;
volatile int32_t t117 = -2264;
static int16_t x475 = -1;
int8_t x482 = INT8_MAX;
int64_t x485 = INT64_MIN;
int32_t x494 = INT32_MIN;
int16_t x497 = -1;
uint16_t x501 = 3U;
int32_t t126 = 16761960;
uint8_t x509 = 0U;
uint16_t x535 = 976U;
static volatile int32_t x536 = INT32_MIN;
volatile int32_t t133 = 0;
uint32_t x547 = 482U;
int32_t x552 = INT32_MIN;
int32_t x554 = INT32_MIN;
uint8_t x560 = UINT8_MAX;
int32_t x564 = -1;
int16_t x575 = -147;
int64_t x587 = 7LL;
static uint8_t x588 = 54U;
uint8_t x589 = 62U;
uint16_t x595 = 10530U;
volatile int8_t x596 = -46;
volatile int32_t t148 = -514845373;
int32_t x600 = INT32_MIN;
int32_t t149 = -3;
uint32_t x606 = UINT32_MAX;
uint8_t x612 = UINT8_MAX;
int16_t x616 = 3;
int32_t x624 = INT32_MIN;
uint16_t x628 = UINT16_MAX;
int32_t t157 = -5;
uint32_t x633 = 5U;
int64_t x651 = 31368760LL;
int32_t t162 = 1;
volatile int32_t x653 = INT32_MIN;
int8_t x658 = -4;
static int32_t x660 = 896570455;
volatile int32_t x667 = INT32_MIN;
static uint8_t x669 = 117U;
int64_t x671 = INT64_MIN;
int8_t x676 = -44;
static volatile uint8_t x677 = 90U;
int32_t x683 = INT32_MAX;
int8_t x684 = -1;
int16_t x690 = -846;
int32_t t174 = -484291;
static int32_t t175 = -5653808;
static int64_t x708 = -1LL;
static int16_t x712 = -1;
static int16_t x715 = 675;
int64_t x716 = -1LL;
volatile int8_t x719 = INT8_MIN;
uint32_t x723 = UINT32_MAX;
static volatile int32_t t180 = 10320196;
volatile uint8_t x729 = 55U;
uint64_t x732 = 256310LLU;
volatile int32_t t182 = 485917;
volatile uint32_t x733 = 39001529U;
uint64_t x735 = 5062970152347879107LLU;
int64_t x736 = -1LL;
uint32_t x740 = 103102U;
static int32_t t184 = 8203160;
uint32_t x748 = UINT32_MAX;
volatile int8_t x750 = INT8_MIN;
static volatile int32_t t187 = 13;
int32_t x754 = INT32_MIN;
static uint8_t x760 = 3U;
static int32_t t189 = 93;
int8_t x762 = INT8_MIN;
static uint16_t x764 = UINT16_MAX;
int64_t x765 = -1LL;
volatile int8_t x775 = -1;
volatile uint8_t x778 = 1U;
int64_t x787 = 47075176555LL;
uint16_t x793 = 91U;
int32_t x796 = -1;
volatile int32_t t199 = 6794032;


void f0(void) {
    	volatile uint16_t x1 = 3U;
	int32_t x2 = -1;
	uint16_t x3 = 20U;
	volatile int32_t t0 = -295;

    t0 = ((x1>x2)*(x3<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int8_t x6 = INT8_MIN;
	static uint16_t x7 = 3889U;
	static int32_t x8 = INT32_MIN;
	static int32_t t1 = 0;

    t1 = ((x5>x6)*(x7<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	uint64_t x10 = 90LLU;
	uint32_t x11 = 124U;
	volatile int32_t t2 = 4;

    t2 = ((x9>x10)*(x11<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	volatile uint16_t x15 = 255U;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = 1185;

    t3 = ((x13>x14)*(x15<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MAX;
	uint16_t x18 = 186U;
	static int64_t x19 = INT64_MIN;
	int8_t x20 = -5;
	volatile int32_t t4 = 3004418;

    t4 = ((x17>x18)*(x19<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x24 = 5;
	static int32_t t5 = 8;

    t5 = ((x21>x22)*(x23<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x26 = INT64_MIN;
	int16_t x27 = -1;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -166;

    t6 = ((x25>x26)*(x27<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x32 = -38;
	volatile int32_t t7 = 229006318;

    t7 = ((x29>x30)*(x31<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;

    t8 = ((x33>x34)*(x35<=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = -11;
	uint32_t x38 = 101421U;
	uint64_t x39 = UINT64_MAX;
	static uint64_t x40 = 61728311263LLU;
	volatile int32_t t9 = -89042585;

    t9 = ((x37>x38)*(x39<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x42 = 1U;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 436445;

    t10 = ((x41>x42)*(x43<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	volatile int64_t x46 = 17571252621LL;
	uint16_t x47 = UINT16_MAX;
	int32_t t11 = 50204;

    t11 = ((x45>x46)*(x47<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = 30013581996740LLU;
	int16_t x51 = -1;
	volatile int32_t t12 = 570520;

    t12 = ((x49>x50)*(x51<=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x55 = INT8_MIN;
	int32_t x56 = INT32_MIN;
	int32_t t13 = -957438014;

    t13 = ((x53>x54)*(x55<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x57 = -8748;
	int8_t x58 = INT8_MAX;
	int32_t x59 = INT32_MIN;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 0;

    t14 = ((x57>x58)*(x59<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 251870U;
	int16_t x62 = INT16_MIN;
	static int32_t x63 = INT32_MIN;
	int32_t t15 = 139706;

    t15 = ((x61>x62)*(x63<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x66 = UINT8_MAX;
	uint64_t x67 = 4847085LLU;
	volatile int32_t t16 = -14;

    t16 = ((x65>x66)*(x67<=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	int64_t x70 = 106072044LL;
	int64_t x71 = INT64_MIN;
	static volatile int32_t t17 = -1;

    t17 = ((x69>x70)*(x71<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = INT32_MIN;
	volatile int8_t x75 = INT8_MIN;
	int8_t x76 = 5;
	volatile int32_t t18 = 56303;

    t18 = ((x73>x74)*(x75<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = 2014697948U;
	int32_t x78 = -1;
	int16_t x79 = -866;
	volatile uint16_t x80 = 32U;

    t19 = ((x77>x78)*(x79<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MAX;
	volatile int64_t x84 = INT64_MAX;
	static int32_t t20 = 16446766;

    t20 = ((x81>x82)*(x83<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = -67LL;
	static uint64_t x86 = UINT64_MAX;
	uint8_t x87 = 11U;
	int16_t x88 = -1;
	static volatile int32_t t21 = -63;

    t21 = ((x85>x86)*(x87<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 14265631LLU;
	volatile int8_t x90 = INT8_MIN;
	volatile int64_t x91 = 13449367622LL;
	volatile int64_t x92 = INT64_MIN;
	static int32_t t22 = -2;

    t22 = ((x89>x90)*(x91<=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = INT64_MIN;
	int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MAX;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = -6386;

    t23 = ((x93>x94)*(x95<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x98 = INT32_MIN;
	int16_t x99 = -1;
	int8_t x100 = 1;
	static int32_t t24 = -146894;

    t24 = ((x97>x98)*(x99<=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x102 = 64533LLU;
	int16_t x103 = INT16_MIN;
	int8_t x104 = 0;
	volatile int32_t t25 = 124747;

    t25 = ((x101>x102)*(x103<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int32_t x107 = 0;
	int8_t x108 = 12;
	volatile int32_t t26 = 797102;

    t26 = ((x105>x106)*(x107<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 1U;
	static uint8_t x110 = 1U;
	int16_t x111 = -1;
	uint8_t x112 = 1U;
	volatile int32_t t27 = 163;

    t27 = ((x109>x110)*(x111<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MIN;
	int16_t x116 = INT16_MAX;
	static volatile int32_t t28 = -17210815;

    t28 = ((x113>x114)*(x115<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = 309679873130815LL;
	int8_t x119 = INT8_MIN;
	static uint8_t x120 = 2U;
	int32_t t29 = 83;

    t29 = ((x117>x118)*(x119<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = -1;
	int16_t x122 = INT16_MAX;
	volatile uint32_t x123 = 1904829U;
	int64_t x124 = INT64_MIN;
	static volatile int32_t t30 = 9;

    t30 = ((x121>x122)*(x123<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x126 = 5U;
	uint64_t x127 = 2029480LLU;
	static volatile uint32_t x128 = UINT32_MAX;

    t31 = ((x125>x126)*(x127<=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = 1;
	volatile int16_t x130 = INT16_MIN;
	uint64_t x131 = 21432LLU;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 224492052;

    t32 = ((x129>x130)*(x131<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = UINT16_MAX;
	int8_t x134 = -3;
	uint32_t x135 = 168202U;
	int64_t x136 = 2377538256LL;
	static volatile int32_t t33 = 14;

    t33 = ((x133>x134)*(x135<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	uint8_t x139 = 5U;
	int8_t x140 = 1;
	int32_t t34 = -130966199;

    t34 = ((x137>x138)*(x139<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = UINT16_MAX;
	volatile int8_t x142 = INT8_MIN;
	int64_t x143 = -372929LL;
	static uint64_t x144 = UINT64_MAX;
	static volatile int32_t t35 = -20253;

    t35 = ((x141>x142)*(x143<=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = -1161;
	volatile int32_t x146 = -4;
	uint8_t x147 = 3U;
	uint64_t x148 = 3266276625036569LLU;
	int32_t t36 = 6683;

    t36 = ((x145>x146)*(x147<=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = -1103329333LL;
	int16_t x150 = 797;
	static int16_t x151 = INT16_MIN;
	static int32_t x152 = -1;
	volatile int32_t t37 = 54;

    t37 = ((x149>x150)*(x151<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x154 = 1;
	int8_t x155 = INT8_MIN;
	volatile uint64_t x156 = 3137089415511231LLU;
	volatile int32_t t38 = -206914;

    t38 = ((x153>x154)*(x155<=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = INT32_MIN;
	static int32_t x159 = INT32_MIN;
	static uint16_t x160 = 96U;
	static volatile int32_t t39 = 116220173;

    t39 = ((x157>x158)*(x159<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = INT16_MIN;
	volatile uint8_t x162 = UINT8_MAX;
	int64_t x163 = INT64_MAX;
	static uint16_t x164 = 3270U;
	int32_t t40 = -1894;

    t40 = ((x161>x162)*(x163<=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x165 = 234160348U;
	uint64_t x166 = UINT64_MAX;
	int8_t x168 = INT8_MIN;
	int32_t t41 = 855685436;

    t41 = ((x165>x166)*(x167<=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -5LL;
	uint32_t x170 = 1054251U;
	volatile int64_t x171 = -130LL;
	int32_t t42 = 1267;

    t42 = ((x169>x170)*(x171<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	volatile uint16_t x175 = 47U;
	volatile int32_t t43 = -38;

    t43 = ((x173>x174)*(x175<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = 7935293;
	volatile int8_t x179 = -2;

    t44 = ((x177>x178)*(x179<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 722U;
	volatile uint32_t x184 = 984U;
	volatile int32_t t45 = -1772803;

    t45 = ((x181>x182)*(x183<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	int16_t x186 = -1;
	volatile uint16_t x187 = 13U;
	volatile int32_t t46 = -90892;

    t46 = ((x185>x186)*(x187<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 339;
	static uint32_t x190 = 51634225U;
	static int32_t x191 = 233;
	static int16_t x192 = INT16_MIN;
	int32_t t47 = -37270972;

    t47 = ((x189>x190)*(x191<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x194 = UINT8_MAX;
	int64_t x195 = 587987779448933902LL;
	uint16_t x196 = 196U;
	volatile int32_t t48 = 0;

    t48 = ((x193>x194)*(x195<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = INT32_MIN;

    t49 = ((x197>x198)*(x199<=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = INT32_MIN;
	uint16_t x203 = 21U;
	uint64_t x204 = UINT64_MAX;

    t50 = ((x201>x202)*(x203<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 3083U;
	uint8_t x206 = 1U;
	volatile int32_t x207 = INT32_MIN;
	int32_t x208 = -1431;

    t51 = ((x205>x206)*(x207<=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = -1;
	uint64_t x210 = UINT64_MAX;
	volatile int32_t x211 = INT32_MIN;
	static int16_t x212 = INT16_MIN;
	volatile int32_t t52 = 26;

    t52 = ((x209>x210)*(x211<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x213 = -1LL;
	static uint8_t x214 = 3U;
	volatile uint64_t x216 = 83213001830679489LLU;
	volatile int32_t t53 = 501197292;

    t53 = ((x213>x214)*(x215<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -27284;
	uint64_t x218 = 27120384037986LLU;
	uint64_t x219 = 97591LLU;
	volatile int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -230;

    t54 = ((x217>x218)*(x219<=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x221 = UINT64_MAX;
	volatile int8_t x222 = INT8_MIN;
	volatile uint16_t x223 = 15U;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = -4;

    t55 = ((x221>x222)*(x223<=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = INT16_MAX;
	uint8_t x226 = 5U;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -410946035;

    t56 = ((x225>x226)*(x227<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 15381U;
	int32_t x231 = 129656;
	int32_t x232 = INT32_MIN;
	int32_t t57 = -3860599;

    t57 = ((x229>x230)*(x231<=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	int16_t x236 = INT16_MIN;
	int32_t t58 = -6;

    t58 = ((x233>x234)*(x235<=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = INT32_MIN;
	static uint64_t x238 = 1637811727LLU;
	volatile int8_t x239 = -29;
	uint64_t x240 = UINT64_MAX;
	int32_t t59 = -4656;

    t59 = ((x237>x238)*(x239<=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	int64_t x242 = 163591422LL;
	uint16_t x243 = UINT16_MAX;
	static int32_t t60 = 21;

    t60 = ((x241>x242)*(x243<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = -1LL;
	int64_t x246 = INT64_MIN;
	int8_t x247 = 3;
	static int16_t x248 = -1;
	int32_t t61 = 1878403;

    t61 = ((x245>x246)*(x247<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = 35;
	int8_t x250 = INT8_MIN;
	int32_t x251 = 2419;
	volatile int8_t x252 = INT8_MIN;
	int32_t t62 = -3;

    t62 = ((x249>x250)*(x251<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = -58068309811586LL;
	static int64_t x254 = 0LL;
	volatile int64_t x256 = INT64_MIN;
	volatile int32_t t63 = 961590262;

    t63 = ((x253>x254)*(x255<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -4829;
	int64_t x258 = -81403775659469LL;
	volatile uint16_t x260 = 6621U;
	volatile int32_t t64 = 15;

    t64 = ((x257>x258)*(x259<=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = -8010824758516761LL;
	int16_t x263 = -354;
	static volatile int64_t x264 = 3108706277LL;
	int32_t t65 = -724725173;

    t65 = ((x261>x262)*(x263<=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1886067LL;
	uint32_t x267 = 18598690U;
	volatile int32_t t66 = 578932365;

    t66 = ((x265>x266)*(x267<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 29955U;
	int8_t x270 = 3;
	uint8_t x271 = UINT8_MAX;
	uint16_t x272 = 77U;
	static volatile int32_t t67 = 189605;

    t67 = ((x269>x270)*(x271<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	uint8_t x274 = 67U;
	volatile int8_t x275 = INT8_MAX;

    t68 = ((x273>x274)*(x275<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = UINT16_MAX;
	static int16_t x278 = INT16_MIN;
	uint32_t x279 = UINT32_MAX;

    t69 = ((x277>x278)*(x279<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 81U;
	volatile int8_t x282 = -10;
	int16_t x283 = 232;
	int8_t x284 = -1;
	int32_t t70 = -37645;

    t70 = ((x281>x282)*(x283<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	int32_t x286 = 6747;
	uint8_t x288 = 12U;
	volatile int32_t t71 = -65123;

    t71 = ((x285>x286)*(x287<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MIN;
	static int8_t x290 = -3;
	int64_t x291 = INT64_MIN;
	static int64_t x292 = 14484218042750044LL;

    t72 = ((x289>x290)*(x291<=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -11;
	static int8_t x294 = INT8_MIN;
	static int8_t x295 = -1;
	volatile uint64_t x296 = UINT64_MAX;
	volatile int32_t t73 = 5082;

    t73 = ((x293>x294)*(x295<=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MAX;
	static volatile int16_t x298 = INT16_MIN;
	static int32_t x299 = INT32_MAX;
	volatile int64_t x300 = -378477LL;
	int32_t t74 = 150746043;

    t74 = ((x297>x298)*(x299<=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x302 = 0;
	uint16_t x303 = UINT16_MAX;
	uint16_t x304 = 130U;
	volatile int32_t t75 = -12328644;

    t75 = ((x301>x302)*(x303<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = -1;
	int64_t x307 = -539LL;
	int16_t x308 = 19;
	volatile int32_t t76 = 250;

    t76 = ((x305>x306)*(x307<=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MAX;
	volatile uint64_t x310 = 22842233LLU;
	int8_t x311 = 4;
	uint32_t x312 = UINT32_MAX;

    t77 = ((x309>x310)*(x311<=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MIN;
	int32_t x314 = -4;
	int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 256;

    t78 = ((x313>x314)*(x315<=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 8U;
	int8_t x318 = INT8_MAX;
	static int32_t x319 = 283;
	volatile int32_t t79 = 511;

    t79 = ((x317>x318)*(x319<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MAX;
	static volatile int8_t x322 = INT8_MAX;
	uint8_t x323 = 23U;
	volatile int32_t x324 = -2762365;
	static int32_t t80 = -246;

    t80 = ((x321>x322)*(x323<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	int64_t x326 = -57567338346200LL;
	uint32_t x328 = 0U;
	volatile int32_t t81 = -96855;

    t81 = ((x325>x326)*(x327<=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MIN;
	int64_t x332 = INT64_MIN;
	int32_t t82 = 1975701;

    t82 = ((x329>x330)*(x331<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x334 = 3U;
	int64_t x335 = -1LL;
	uint16_t x336 = 122U;
	int32_t t83 = 4068098;

    t83 = ((x333>x334)*(x335<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = 764805899LL;
	int16_t x338 = INT16_MIN;
	int8_t x339 = -1;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = -40;

    t84 = ((x337>x338)*(x339<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x344 = -1;
	static int32_t t85 = 5;

    t85 = ((x341>x342)*(x343<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x345 = UINT64_MAX;
	volatile uint8_t x347 = 17U;
	int8_t x348 = INT8_MAX;
	int32_t t86 = -4095;

    t86 = ((x345>x346)*(x347<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = INT8_MAX;
	int32_t x350 = INT32_MIN;
	int32_t x351 = -1;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t87 = -2810;

    t87 = ((x349>x350)*(x351<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = 1;
	int8_t x354 = -3;
	static int64_t x355 = -1LL;
	int8_t x356 = -1;
	int32_t t88 = 9356;

    t88 = ((x353>x354)*(x355<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint64_t x357 = 2033363365290290LLU;
	static volatile int8_t x358 = INT8_MAX;
	static uint16_t x359 = 3403U;
	volatile int32_t t89 = 51;

    t89 = ((x357>x358)*(x359<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x362 = 0U;
	int32_t x363 = 17476;
	volatile int32_t x364 = -459;

    t90 = ((x361>x362)*(x363<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -1;
	uint16_t x366 = 5U;
	int32_t x368 = -2363;

    t91 = ((x365>x366)*(x367<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = 5926LL;
	static volatile int64_t x370 = INT64_MIN;
	static uint32_t x371 = 22296551U;
	volatile uint8_t x372 = 114U;
	int32_t t92 = -131042;

    t92 = ((x369>x370)*(x371<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = -1;
	uint64_t x374 = 95290230622377LLU;
	int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MIN;
	static int32_t t93 = 30494334;

    t93 = ((x373>x374)*(x375<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = INT32_MIN;
	uint8_t x379 = 85U;
	int32_t t94 = -12563;

    t94 = ((x377>x378)*(x379<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	static int8_t x382 = -1;
	int8_t x383 = 22;
	uint8_t x384 = 1U;

    t95 = ((x381>x382)*(x383<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = INT16_MIN;
	volatile int64_t x387 = 1LL;
	volatile int32_t t96 = 22156;

    t96 = ((x385>x386)*(x387<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x390 = UINT16_MAX;
	uint16_t x391 = 16305U;
	int8_t x392 = -1;
	int32_t t97 = 91675;

    t97 = ((x389>x390)*(x391<=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MAX;
	static int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	uint16_t x396 = 1738U;
	volatile int32_t t98 = 3;

    t98 = ((x393>x394)*(x395<=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	static uint64_t x398 = 65412538600LLU;
	static volatile int32_t x400 = 91605;
	volatile int32_t t99 = 1;

    t99 = ((x397>x398)*(x399<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = INT8_MIN;
	volatile int32_t x402 = -11211889;
	int64_t x404 = -1LL;
	int32_t t100 = -144860717;

    t100 = ((x401>x402)*(x403<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	int32_t x407 = INT32_MIN;
	uint8_t x408 = 31U;

    t101 = ((x405>x406)*(x407<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	int8_t x410 = -1;
	volatile int32_t t102 = 30607770;

    t102 = ((x409>x410)*(x411<=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = 51741LLU;
	uint64_t x415 = 1302741405217473LLU;
	int64_t x416 = INT64_MIN;
	int32_t t103 = -276459;

    t103 = ((x413>x414)*(x415<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	volatile uint32_t x418 = 1029052089U;
	int16_t x419 = -11587;
	int32_t t104 = 63947;

    t104 = ((x417>x418)*(x419<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	uint16_t x423 = 3U;
	uint16_t x424 = 715U;

    t105 = ((x421>x422)*(x423<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 26226551U;
	static uint16_t x426 = 7U;
	int8_t x427 = 0;
	int64_t x428 = INT64_MIN;

    t106 = ((x425>x426)*(x427<=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = UINT64_MAX;
	uint64_t x430 = UINT64_MAX;
	int64_t x432 = INT64_MAX;
	volatile int32_t t107 = 94;

    t107 = ((x429>x430)*(x431<=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 1051U;
	static int8_t x434 = INT8_MIN;
	static int64_t x435 = -1LL;
	int8_t x436 = INT8_MAX;
	int32_t t108 = 209;

    t108 = ((x433>x434)*(x435<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	static uint32_t x438 = UINT32_MAX;
	int64_t x439 = INT64_MIN;
	int8_t x440 = 61;
	int32_t t109 = -1;

    t109 = ((x437>x438)*(x439<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x443 = INT32_MIN;
	int16_t x444 = 0;
	int32_t t110 = 13955;

    t110 = ((x441>x442)*(x443<=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 11667LLU;
	uint32_t x446 = UINT32_MAX;
	static int64_t x448 = 35213LL;
	volatile int32_t t111 = -10210537;

    t111 = ((x445>x446)*(x447<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	static int64_t x450 = INT64_MIN;
	uint64_t x451 = 1123833756458460393LLU;
	int32_t x452 = -31659957;
	volatile int32_t t112 = -1;

    t112 = ((x449>x450)*(x451<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint64_t x453 = 1759968361246LLU;
	int16_t x454 = 45;
	int64_t x455 = -150784758039589830LL;
	int8_t x456 = -1;
	int32_t t113 = 54;

    t113 = ((x453>x454)*(x455<=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = -1;
	int64_t x458 = -1LL;
	static int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MAX;
	volatile int32_t t114 = -748262541;

    t114 = ((x457>x458)*(x459<=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x461 = 833315LLU;
	int16_t x462 = -1;
	static int16_t x463 = -1;
	uint64_t x464 = UINT64_MAX;

    t115 = ((x461>x462)*(x463<=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = UINT16_MAX;
	static int64_t x466 = INT64_MAX;
	static int8_t x467 = INT8_MAX;
	volatile int32_t t116 = -4318;

    t116 = ((x465>x466)*(x467<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = 36;
	uint32_t x470 = 0U;
	static int64_t x471 = INT64_MAX;
	int32_t x472 = -1;

    t117 = ((x469>x470)*(x471<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 3386U;
	static int8_t x474 = -1;
	int8_t x476 = INT8_MIN;
	static volatile int32_t t118 = 11;

    t118 = ((x473>x474)*(x475<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -224029634;
	int8_t x478 = INT8_MAX;
	int16_t x479 = INT16_MIN;
	volatile uint16_t x480 = UINT16_MAX;
	int32_t t119 = -1;

    t119 = ((x477>x478)*(x479<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -1;
	volatile uint32_t x483 = 49U;
	int16_t x484 = INT16_MIN;
	static int32_t t120 = -25725466;

    t120 = ((x481>x482)*(x483<=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x486 = 1;
	int16_t x487 = INT16_MAX;
	volatile uint64_t x488 = 4523092LLU;
	volatile int32_t t121 = -85;

    t121 = ((x485>x486)*(x487<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x489 = 0U;
	uint8_t x490 = 7U;
	static int16_t x491 = -3361;
	int64_t x492 = -845426475LL;
	int32_t t122 = -47831286;

    t122 = ((x489>x490)*(x491<=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x493 = 14721U;
	uint64_t x495 = 1765916879841LLU;
	int16_t x496 = INT16_MIN;
	volatile int32_t t123 = 749695380;

    t123 = ((x493>x494)*(x495<=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x498 = INT8_MAX;
	int64_t x499 = 106299160464945880LL;
	int16_t x500 = INT16_MAX;
	int32_t t124 = -45384;

    t124 = ((x497>x498)*(x499<=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = 67U;
	int16_t x503 = INT16_MIN;
	int8_t x504 = INT8_MIN;
	volatile int32_t t125 = 10310;

    t125 = ((x501>x502)*(x503<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 0;
	int32_t x506 = -1;
	static uint16_t x507 = 26U;
	uint8_t x508 = 10U;

    t126 = ((x505>x506)*(x507<=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x510 = 0;
	static int64_t x511 = -1LL;
	int64_t x512 = INT64_MAX;
	int32_t t127 = 279472;

    t127 = ((x509>x510)*(x511<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 1750U;
	int8_t x514 = INT8_MIN;
	int16_t x515 = INT16_MIN;
	int8_t x516 = INT8_MIN;
	volatile int32_t t128 = -177466837;

    t128 = ((x513>x514)*(x515<=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = 180311475;
	static int16_t x518 = -1;
	int32_t x519 = -1;
	int64_t x520 = INT64_MAX;
	int32_t t129 = -113171758;

    t129 = ((x517>x518)*(x519<=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 3;
	int32_t x522 = INT32_MIN;
	int64_t x523 = -228891574825278000LL;
	static int64_t x524 = INT64_MAX;
	int32_t t130 = -2320302;

    t130 = ((x521>x522)*(x523<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x525 = UINT8_MAX;
	volatile uint64_t x526 = 4080008776801LLU;
	static int32_t x527 = INT32_MAX;
	uint64_t x528 = UINT64_MAX;
	int32_t t131 = 7714723;

    t131 = ((x525>x526)*(x527<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = UINT8_MAX;
	uint8_t x530 = 90U;
	int32_t x531 = 661205;
	int16_t x532 = 0;
	int32_t t132 = -34;

    t132 = ((x529>x530)*(x531<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 127U;
	int32_t x534 = 1;

    t133 = ((x533>x534)*(x535<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = -1;
	int16_t x538 = -39;
	volatile int32_t x539 = INT32_MIN;
	int16_t x540 = INT16_MIN;
	int32_t t134 = -93566;

    t134 = ((x537>x538)*(x539<=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x541 = INT64_MIN;
	int64_t x542 = INT64_MIN;
	static uint16_t x543 = 27U;
	static volatile int16_t x544 = INT16_MIN;
	volatile int32_t t135 = 31482386;

    t135 = ((x541>x542)*(x543<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -237181495;
	int8_t x546 = INT8_MIN;
	static int16_t x548 = INT16_MAX;
	int32_t t136 = -426;

    t136 = ((x545>x546)*(x547<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	uint16_t x550 = 7956U;
	int64_t x551 = INT64_MAX;
	int32_t t137 = -7;

    t137 = ((x549>x550)*(x551<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = INT8_MIN;
	uint64_t x555 = UINT64_MAX;
	int32_t x556 = 2;
	static volatile int32_t t138 = -383637;

    t138 = ((x553>x554)*(x555<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x557 = 603379588906650LLU;
	int8_t x558 = INT8_MIN;
	uint64_t x559 = 850242327403LLU;
	volatile int32_t t139 = 1;

    t139 = ((x557>x558)*(x559<=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = UINT16_MAX;
	int32_t x562 = -1;
	static uint64_t x563 = UINT64_MAX;
	int32_t t140 = 3449;

    t140 = ((x561>x562)*(x563<=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	static uint16_t x566 = 156U;
	uint16_t x567 = 13027U;
	uint32_t x568 = 3U;
	volatile int32_t t141 = -25887974;

    t141 = ((x565>x566)*(x567<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	int16_t x570 = INT16_MIN;
	int32_t x571 = 7;
	volatile int32_t x572 = INT32_MIN;
	int32_t t142 = -1;

    t142 = ((x569>x570)*(x571<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = 9U;
	int64_t x574 = -1LL;
	uint8_t x576 = 90U;
	volatile int32_t t143 = 594534007;

    t143 = ((x573>x574)*(x575<=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x577 = UINT64_MAX;
	int8_t x578 = INT8_MIN;
	static int64_t x579 = INT64_MIN;
	uint16_t x580 = 174U;
	static volatile int32_t t144 = 31825131;

    t144 = ((x577>x578)*(x579<=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 761U;
	int16_t x582 = 0;
	uint8_t x583 = 29U;
	int16_t x584 = 1362;
	int32_t t145 = -2337028;

    t145 = ((x581>x582)*(x583<=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x585 = 2U;
	volatile int8_t x586 = -1;
	int32_t t146 = 2063722;

    t146 = ((x585>x586)*(x587<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x590 = INT8_MAX;
	int8_t x591 = INT8_MIN;
	volatile int8_t x592 = -1;
	int32_t t147 = -79;

    t147 = ((x589>x590)*(x591<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	static uint64_t x594 = UINT64_MAX;

    t148 = ((x593>x594)*(x595<=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = 826;
	volatile int16_t x598 = 2736;
	int64_t x599 = INT64_MIN;

    t149 = ((x597>x598)*(x599<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -4;
	int8_t x602 = INT8_MIN;
	int32_t x603 = -1;
	int64_t x604 = INT64_MIN;
	volatile int32_t t150 = -29;

    t150 = ((x601>x602)*(x603<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = INT16_MIN;
	static int64_t x607 = -1LL;
	int16_t x608 = INT16_MIN;
	volatile int32_t t151 = -185607;

    t151 = ((x605>x606)*(x607<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = 3175;
	volatile int16_t x610 = INT16_MIN;
	int64_t x611 = INT64_MIN;
	volatile int32_t t152 = -14758452;

    t152 = ((x609>x610)*(x611<=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 1546605U;
	int32_t x614 = -1;
	int8_t x615 = INT8_MIN;
	int32_t t153 = 10031431;

    t153 = ((x613>x614)*(x615<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 1U;
	static volatile int8_t x618 = -4;
	uint32_t x619 = 0U;
	uint64_t x620 = UINT64_MAX;
	volatile int32_t t154 = 76;

    t154 = ((x617>x618)*(x619<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = 2096976;
	uint32_t x622 = 26618U;
	static int16_t x623 = INT16_MAX;
	int32_t t155 = -31521;

    t155 = ((x621>x622)*(x623<=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	uint64_t x626 = UINT64_MAX;
	uint8_t x627 = 4U;
	int32_t t156 = 53697848;

    t156 = ((x625>x626)*(x627<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -1;
	uint64_t x630 = 7812314827056LLU;
	static int16_t x631 = -1;
	uint64_t x632 = 201077853230919429LLU;

    t157 = ((x629>x630)*(x631<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x634 = 23;
	static int8_t x635 = INT8_MIN;
	int32_t x636 = INT32_MIN;
	volatile int32_t t158 = 49;

    t158 = ((x633>x634)*(x635<=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = 44196481056791282LLU;
	uint32_t x638 = 2406U;
	static int16_t x639 = INT16_MIN;
	int64_t x640 = 1307921181LL;
	static volatile int32_t t159 = -71674490;

    t159 = ((x637>x638)*(x639<=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	volatile uint16_t x642 = UINT16_MAX;
	static uint64_t x643 = 18LLU;
	static uint64_t x644 = 80159981770971LLU;
	int32_t t160 = 166340928;

    t160 = ((x641>x642)*(x643<=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = -1;
	static volatile int8_t x646 = 18;
	static uint8_t x647 = 1U;
	static int16_t x648 = -15850;
	volatile int32_t t161 = 3651161;

    t161 = ((x645>x646)*(x647<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = UINT32_MAX;
	volatile int32_t x650 = -1;
	uint8_t x652 = UINT8_MAX;

    t162 = ((x649>x650)*(x651<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x654 = INT32_MAX;
	uint32_t x655 = 36U;
	uint16_t x656 = 4291U;
	static int32_t t163 = 9574;

    t163 = ((x653>x654)*(x655<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x657 = -3;
	int16_t x659 = -1;
	volatile int32_t t164 = 55466;

    t164 = ((x657>x658)*(x659<=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x661 = 44U;
	volatile uint16_t x662 = UINT16_MAX;
	int8_t x663 = -16;
	volatile uint16_t x664 = 20U;
	int32_t t165 = 4340;

    t165 = ((x661>x662)*(x663<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	int16_t x666 = INT16_MIN;
	uint32_t x668 = UINT32_MAX;
	static volatile int32_t t166 = 1018206;

    t166 = ((x665>x666)*(x667<=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = INT64_MIN;
	int16_t x672 = 1;
	static volatile int32_t t167 = 776;

    t167 = ((x669>x670)*(x671<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x673 = INT64_MAX;
	int32_t x674 = -1;
	int16_t x675 = INT16_MAX;
	static volatile int32_t t168 = 44238940;

    t168 = ((x673>x674)*(x675<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x678 = -1;
	int64_t x679 = -1LL;
	static uint16_t x680 = 5U;
	static volatile int32_t t169 = -443;

    t169 = ((x677>x678)*(x679<=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = UINT32_MAX;
	volatile int16_t x682 = INT16_MAX;
	volatile int32_t t170 = 20267323;

    t170 = ((x681>x682)*(x683<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = UINT64_MAX;
	static int64_t x686 = INT64_MIN;
	uint32_t x687 = UINT32_MAX;
	int8_t x688 = INT8_MIN;
	int32_t t171 = -1031178;

    t171 = ((x685>x686)*(x687<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 1U;
	int8_t x691 = 3;
	uint32_t x692 = 2U;
	static int32_t t172 = 110;

    t172 = ((x689>x690)*(x691<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 0U;
	static int32_t x694 = -1;
	uint32_t x695 = 2777U;
	volatile uint8_t x696 = 0U;
	volatile int32_t t173 = -62707;

    t173 = ((x693>x694)*(x695<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = 0;
	int16_t x698 = INT16_MIN;
	volatile uint64_t x699 = 8618800LLU;
	uint64_t x700 = 3042453LLU;

    t174 = ((x697>x698)*(x699<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -1;
	int32_t x702 = -1;
	int32_t x703 = INT32_MIN;
	volatile int32_t x704 = INT32_MAX;

    t175 = ((x701>x702)*(x703<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -56;
	static int32_t x706 = -1;
	int32_t x707 = INT32_MAX;
	volatile int32_t t176 = -1621644;

    t176 = ((x705>x706)*(x707<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 234607U;
	int32_t x710 = -666;
	int32_t x711 = INT32_MAX;
	int32_t t177 = 1;

    t177 = ((x709>x710)*(x711<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = 0;
	uint8_t x714 = 0U;
	static volatile int32_t t178 = 811;

    t178 = ((x713>x714)*(x715<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x717 = 4;
	volatile int8_t x718 = 0;
	int16_t x720 = INT16_MIN;
	static int32_t t179 = 62953900;

    t179 = ((x717>x718)*(x719<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = 3410460LL;
	static int16_t x722 = INT16_MIN;
	int16_t x724 = 508;

    t180 = ((x721>x722)*(x723<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	uint64_t x726 = 31892954809513LLU;
	uint16_t x727 = 19U;
	static int16_t x728 = -2731;
	volatile int32_t t181 = 200;

    t181 = ((x725>x726)*(x727<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x730 = INT16_MAX;
	uint32_t x731 = 24539U;

    t182 = ((x729>x730)*(x731<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x734 = INT8_MIN;
	int32_t t183 = -5468;

    t183 = ((x733>x734)*(x735<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x737 = -1;
	static int64_t x738 = -267964139378753989LL;
	static int8_t x739 = INT8_MIN;

    t184 = ((x737>x738)*(x739<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = UINT8_MAX;
	static uint8_t x742 = 11U;
	volatile uint16_t x743 = 65U;
	uint16_t x744 = 1786U;
	int32_t t185 = 7252;

    t185 = ((x741>x742)*(x743<=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 2U;
	volatile int32_t x746 = INT32_MIN;
	static uint64_t x747 = UINT64_MAX;
	volatile int32_t t186 = 448972;

    t186 = ((x745>x746)*(x747<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = UINT8_MAX;
	int64_t x751 = INT64_MIN;
	int64_t x752 = 48728LL;

    t187 = ((x749>x750)*(x751<=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x753 = 3260371881LL;
	int16_t x755 = INT16_MIN;
	uint64_t x756 = 19LLU;
	static volatile int32_t t188 = -1;

    t188 = ((x753>x754)*(x755<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	int64_t x758 = INT64_MIN;
	uint16_t x759 = 116U;

    t189 = ((x757>x758)*(x759<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = -1;
	int8_t x763 = INT8_MIN;
	volatile int32_t t190 = -1108843;

    t190 = ((x761>x762)*(x763<=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x766 = 1017528U;
	static uint16_t x767 = UINT16_MAX;
	static uint8_t x768 = 96U;
	volatile int32_t t191 = -121704458;

    t191 = ((x765>x766)*(x767<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	int16_t x770 = 270;
	int32_t x771 = 48;
	static volatile int16_t x772 = 426;
	volatile int32_t t192 = -51141931;

    t192 = ((x769>x770)*(x771<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 0U;
	int8_t x774 = -1;
	int32_t x776 = -1;
	volatile int32_t t193 = 152;

    t193 = ((x773>x774)*(x775<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = -1;
	int64_t x779 = INT64_MAX;
	uint16_t x780 = 6U;
	volatile int32_t t194 = 15;

    t194 = ((x777>x778)*(x779<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	static int64_t x782 = INT64_MIN;
	static volatile int8_t x783 = -1;
	volatile int16_t x784 = INT16_MIN;
	int32_t t195 = 30;

    t195 = ((x781>x782)*(x783<=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	static uint8_t x786 = 2U;
	uint64_t x788 = 3215454246999LLU;
	static int32_t t196 = -1;

    t196 = ((x785>x786)*(x787<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x789 = 2216U;
	uint64_t x790 = 1691540753418922LLU;
	static int8_t x791 = -3;
	int32_t x792 = INT32_MIN;
	int32_t t197 = 94;

    t197 = ((x789>x790)*(x791<=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x794 = UINT16_MAX;
	int64_t x795 = -8177313225LL;
	volatile int32_t t198 = -45;

    t198 = ((x793>x794)*(x795<=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MAX;
	int64_t x798 = INT64_MIN;
	uint64_t x799 = UINT64_MAX;
	static int8_t x800 = -1;

    t199 = ((x797>x798)*(x799<=x800));

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

