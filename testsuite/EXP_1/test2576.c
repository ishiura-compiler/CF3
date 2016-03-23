
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

int16_t x2 = -1;
int64_t x8 = -1LL;
volatile uint32_t x11 = 11280U;
uint32_t t2 = 18U;
volatile int32_t t4 = -41;
static int8_t x29 = INT8_MAX;
int16_t x38 = 0;
static int32_t x40 = -24;
int16_t x53 = 1538;
volatile int32_t t11 = -58033;
int8_t x60 = INT8_MAX;
int32_t x65 = INT32_MIN;
uint8_t x66 = 101U;
int64_t t14 = 378129667LL;
volatile int64_t t15 = -352971688857549LL;
volatile uint64_t t16 = 616LLU;
uint64_t x89 = 2978146LLU;
static int16_t x90 = INT16_MIN;
int32_t x93 = INT32_MIN;
volatile uint8_t x97 = UINT8_MAX;
static int32_t x100 = INT32_MIN;
uint64_t t20 = 207258657096762LLU;
static volatile int32_t x105 = INT32_MIN;
uint8_t x106 = UINT8_MAX;
int32_t t21 = -86712;
static uint8_t x115 = UINT8_MAX;
static int32_t x123 = -1;
int8_t x124 = -1;
static volatile int16_t x130 = -3038;
uint8_t x133 = UINT8_MAX;
int32_t x134 = INT32_MAX;
int64_t x138 = -1LL;
int16_t x141 = -1;
int32_t x150 = 6;
uint16_t x152 = 11026U;
static uint32_t x153 = 1U;
static int16_t x161 = INT16_MIN;
uint16_t x163 = 9476U;
static uint8_t x166 = UINT8_MAX;
int32_t x177 = 468;
int32_t x179 = INT32_MIN;
int32_t x197 = -1;
static int8_t x200 = INT8_MIN;
int8_t x201 = -1;
static uint32_t x205 = UINT32_MAX;
int32_t x206 = -2;
int64_t x213 = INT64_MIN;
int32_t x214 = 0;
volatile int8_t x222 = INT8_MAX;
volatile uint8_t x228 = UINT8_MAX;
static int8_t x236 = INT8_MIN;
volatile int16_t x237 = INT16_MAX;
static uint64_t x239 = UINT64_MAX;
static uint64_t t50 = 1023558295LLU;
static uint16_t x241 = 36U;
int64_t t54 = -3462057421911073LL;
volatile int64_t x261 = -1LL;
static volatile uint16_t x262 = UINT16_MAX;
uint8_t x271 = 1U;
volatile int64_t t57 = -57247681357429431LL;
int32_t x280 = INT32_MAX;
int64_t x285 = INT64_MIN;
int64_t x288 = 30269LL;
uint16_t x295 = 37U;
volatile uint16_t x297 = 6103U;
int32_t x308 = INT32_MIN;
static uint16_t x312 = 0U;
int64_t t66 = 2279345LL;
uint64_t x320 = 1139LLU;
int8_t x323 = INT8_MIN;
uint8_t x324 = 2U;
volatile int64_t x326 = INT64_MIN;
uint64_t x331 = 38618239632866LLU;
static volatile int64_t x334 = -604021485564457LL;
static volatile uint64_t x340 = 2980399053LLU;
int64_t x349 = 1LL;
uint16_t x351 = 1U;
int64_t x352 = 30790650240686206LL;
volatile int64_t t74 = 10588LL;
static int8_t x353 = INT8_MAX;
int32_t x355 = INT32_MIN;
static volatile int64_t t75 = 24079920691846LL;
uint16_t x361 = 17073U;
uint64_t x368 = 56137048LLU;
uint16_t x374 = UINT16_MAX;
int32_t x379 = 5521;
volatile int64_t x380 = INT64_MAX;
static uint8_t x384 = UINT8_MAX;
static volatile int32_t x390 = INT32_MIN;
uint64_t x399 = UINT64_MAX;
volatile int32_t t85 = -60527;
volatile int64_t x405 = -410541132LL;
uint8_t x407 = UINT8_MAX;
uint16_t x409 = 2U;
uint32_t x411 = 2612254U;
int16_t x415 = INT16_MAX;
volatile uint64_t t90 = 53LLU;
int16_t x425 = -1;
uint16_t x431 = UINT16_MAX;
int32_t x442 = 720420256;
static int16_t x443 = INT16_MAX;
int64_t x452 = -16089016712LL;
volatile int64_t t95 = -15LL;
int32_t x456 = -60785619;
int64_t t96 = -5537LL;
uint64_t t99 = 29321912038596635LLU;
static int8_t x477 = INT8_MAX;
int64_t x478 = 1073250977494LL;
int64_t t101 = 1818505246749246118LL;
volatile int64_t x482 = 9228581LL;
volatile uint8_t x484 = UINT8_MAX;
uint8_t x490 = 1U;
uint32_t x494 = 1U;
volatile int64_t x495 = -23LL;
volatile int16_t x499 = -1;
int32_t x502 = 228461;
volatile uint32_t t107 = 107U;
int8_t x507 = INT8_MIN;
static int8_t x520 = INT8_MAX;
static int8_t x521 = -1;
static uint16_t x526 = UINT16_MAX;
uint8_t x537 = 9U;
static uint8_t x541 = 0U;
static uint16_t x542 = 14251U;
int8_t x543 = INT8_MIN;
static volatile uint64_t x545 = 32274922LLU;
static uint32_t x552 = 2071469U;
static uint16_t x557 = 6U;
uint32_t x558 = UINT32_MAX;
uint16_t x563 = UINT16_MAX;
static volatile int64_t t121 = -1392138986344LL;
volatile int32_t x567 = INT32_MIN;
int32_t x568 = INT32_MAX;
int8_t x570 = INT8_MAX;
static int64_t x573 = -1LL;
volatile uint32_t x574 = 3056951U;
volatile int16_t x575 = -1;
int64_t x578 = -1LL;
int16_t x579 = INT16_MIN;
int8_t x583 = INT8_MIN;
static int32_t x585 = -1;
static uint16_t x593 = UINT16_MAX;
int16_t x594 = -1;
uint32_t t128 = 102508U;
static uint16_t x599 = 1U;
static int64_t x601 = INT64_MIN;
volatile uint16_t x605 = 323U;
int32_t t131 = 1945124;
volatile uint16_t x610 = 4280U;
static int64_t t132 = 582336070577954490LL;
volatile int64_t t133 = 1640740765458LL;
static int16_t x621 = INT16_MIN;
uint8_t x623 = 2U;
static volatile uint32_t t135 = 248146807U;
volatile uint64_t t137 = 1LLU;
int32_t x635 = 28240756;
int32_t t139 = -5760;
int16_t x647 = INT16_MAX;
static int16_t x659 = INT16_MIN;
static volatile uint64_t t144 = 142LLU;
static volatile int8_t x685 = 0;
int8_t x695 = 2;
int16_t x699 = -1;
volatile uint64_t t153 = 1283816495042LLU;
uint16_t x714 = 12U;
int16_t x720 = INT16_MAX;
volatile uint32_t x723 = 67700U;
int8_t x728 = INT8_MIN;
uint64_t x738 = 237LLU;
volatile int16_t x740 = INT16_MIN;
int64_t x749 = INT64_MIN;
static volatile uint64_t t165 = 165134349012905LLU;
int16_t x755 = INT16_MAX;
int32_t t166 = 257;
static uint64_t t167 = 371839LLU;
int32_t x768 = -2;
int32_t t170 = -1;
int16_t x777 = -1;
uint16_t x783 = 24U;
uint64_t x795 = 261LLU;
static volatile int8_t x796 = 0;
int64_t t178 = 0LL;
static uint16_t x811 = UINT16_MAX;
int16_t x813 = 51;
int8_t x814 = 0;
int8_t x821 = INT8_MAX;
uint16_t x824 = 2045U;
volatile uint64_t t187 = 3731113523510317LLU;
volatile int64_t t188 = -274LL;
volatile int64_t t191 = -370881632574384034LL;
uint32_t x864 = 21U;
volatile uint16_t x865 = UINT16_MAX;
volatile uint16_t x867 = 1U;
int32_t t193 = -16586;
uint64_t x871 = UINT64_MAX;
int64_t x884 = INT64_MIN;
int64_t x885 = 713050017651LL;


void f0(void) {
    	static int16_t x1 = -1;
	int16_t x3 = INT16_MIN;
	int32_t x4 = INT32_MAX;
	static volatile int32_t t0 = 76;

    t0 = (((x1^x2)-x3)^x4);

    if (t0 != 2147450879) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	volatile int64_t t1 = 1LL;

    t1 = (((x5^x6)-x7)^x8);

    if (t1 != -32769LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 0U;
	uint8_t x10 = UINT8_MAX;
	int16_t x12 = 0;

    t2 = (((x9^x10)-x11)^x12);

    if (t2 != 4294956271U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = UINT16_MAX;
	int32_t x14 = -329;
	static int8_t x15 = INT8_MIN;
	static int16_t x16 = INT16_MAX;
	volatile int32_t t3 = -907125;

    t3 = (((x13^x14)-x15)^x16);

    if (t3 != -33225) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x17 = UINT16_MAX;
	int16_t x18 = -1;
	static int32_t x19 = -1;
	uint8_t x20 = 17U;

    t4 = (((x17^x18)-x19)^x20);

    if (t4 != -65520) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MAX;
	int32_t x22 = INT32_MAX;
	uint64_t x23 = 20LLU;
	uint8_t x24 = 27U;
	volatile uint64_t t5 = 1053852LLU;

    t5 = (((x21^x22)-x23)^x24);

    if (t5 != 9223372034707292151LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x30 = -1;
	int64_t x31 = INT64_MIN;
	volatile uint16_t x32 = 15U;
	int64_t t6 = -31289717155794LL;

    t6 = (((x29^x30)-x31)^x32);

    if (t6 != 9223372036854775695LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x37 = 371228359771190909LLU;
	volatile int8_t x39 = INT8_MAX;
	uint64_t t7 = 9LLU;

    t7 = (((x37^x38)-x39)^x40);

    if (t7 != 18075515713938360854LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = INT16_MIN;
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = 20;
	volatile uint8_t x44 = 72U;
	volatile uint32_t t8 = 298143275U;

    t8 = (((x41^x42)-x43)^x44);

    if (t8 != 32675U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x45 = UINT16_MAX;
	static volatile int16_t x46 = 1;
	volatile int16_t x47 = -250;
	int32_t x48 = -28;
	volatile int32_t t9 = 939;

    t9 = (((x45^x46)-x47)^x48);

    if (t9 != -65764) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = -414543122280617LL;
	static int64_t x50 = INT64_MAX;
	uint32_t x51 = 3102U;
	static int32_t x52 = -163763340;
	int64_t t10 = 1311510434779LL;

    t10 = (((x49^x50)-x51)^x52);

    if (t10 != 9222957493619068926LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x54 = 0;
	static uint16_t x55 = UINT16_MAX;
	int32_t x56 = INT32_MIN;

    t11 = (((x53^x54)-x55)^x56);

    if (t11 != 2147419651) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = INT64_MAX;
	static volatile int8_t x58 = INT8_MIN;
	volatile int8_t x59 = 1;
	volatile int64_t t12 = 59950954660704608LL;

    t12 = (((x57^x58)-x59)^x60);

    if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = INT32_MIN;
	int32_t x62 = -1;
	static uint8_t x63 = 6U;
	uint32_t x64 = UINT32_MAX;
	static uint32_t t13 = 45U;

    t13 = (((x61^x62)-x63)^x64);

    if (t13 != 2147483654U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x67 = -1LL;
	static uint16_t x68 = 353U;

    t14 = (((x65^x66)-x67)^x68);

    if (t14 != -2147483385LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x81 = INT8_MIN;
	uint32_t x82 = UINT32_MAX;
	volatile int16_t x83 = INT16_MIN;
	int64_t x84 = 109834777248511023LL;

    t15 = (((x81^x82)-x83)^x84);

    if (t15 != 109834777248478288LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x85 = 7266193363410723482LLU;
	uint64_t x86 = 125258014001857107LLU;
	volatile int16_t x87 = INT16_MAX;
	volatile int8_t x88 = 1;

    t16 = (((x85^x86)-x87)^x88);

    if (t16 != 7308134784130031819LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x91 = UINT32_MAX;
	uint32_t x92 = 2426U;
	volatile uint64_t t17 = 399999LLU;

    t17 = (((x89^x90)-x91)^x92);

    if (t17 != 18446744069411633177LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x94 = UINT16_MAX;
	uint8_t x95 = 38U;
	uint64_t x96 = 4086941540798547LLU;
	volatile uint64_t t18 = 94109LLU;

    t18 = (((x93^x94)-x95)^x96);

    if (t18 != 18442657131992788874LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x98 = -1;
	static uint32_t x99 = 610U;
	volatile uint32_t t19 = 1623909U;

    t19 = (((x97^x98)-x99)^x100);

    if (t19 != 2147482782U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x101 = 1151798431064924540LLU;
	volatile int64_t x102 = 1270915LL;
	int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;

    t20 = (((x101^x102)-x103)^x104);

    if (t20 != 17294945642645735039LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x107 = INT8_MAX;
	int32_t x108 = INT32_MIN;

    t21 = (((x105^x106)-x107)^x108);

    if (t21 != 128) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MAX;
	int16_t x111 = -17;
	static int32_t x112 = INT32_MIN;
	static volatile int64_t t22 = -1619756164597147LL;

    t22 = (((x109^x110)-x111)^x112);

    if (t22 != 9223372034707324944LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x113 = 8U;
	int64_t x114 = INT64_MAX;
	int32_t x116 = INT32_MIN;
	volatile int64_t t23 = 78LL;

    t23 = (((x113^x114)-x115)^x116);

    if (t23 != -9223372034707292424LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x117 = INT16_MAX;
	int64_t x118 = INT64_MAX;
	uint8_t x119 = 16U;
	int32_t x120 = 2525;
	volatile int64_t t24 = 0LL;

    t24 = (((x117^x118)-x119)^x120);

    if (t24 != 9223372036854740525LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x121 = 36U;
	uint32_t x122 = 156U;
	volatile uint32_t t25 = 247U;

    t25 = (((x121^x122)-x123)^x124);

    if (t25 != 4294967110U) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x125 = 3;
	uint16_t x126 = 5110U;
	int16_t x127 = -1446;
	int8_t x128 = 3;
	int32_t t26 = -3854;

    t26 = (((x125^x126)-x127)^x128);

    if (t26 != 6552) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x129 = INT32_MAX;
	int8_t x131 = -1;
	volatile int16_t x132 = INT16_MAX;
	volatile int32_t t27 = 21834124;

    t27 = (((x129^x130)-x131)^x132);

    if (t27 != -2147453919) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x135 = 921LL;
	int64_t x136 = 1247LL;
	int64_t t28 = 0LL;

    t28 = (((x133^x134)-x135)^x136);

    if (t28 != 2147483576LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x137 = 1LL;
	uint16_t x139 = 3878U;
	int64_t x140 = INT64_MIN;
	int64_t t29 = -50LL;

    t29 = (((x137^x138)-x139)^x140);

    if (t29 != 9223372036854771928LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x142 = INT8_MIN;
	static int16_t x143 = INT16_MIN;
	static int16_t x144 = -903;
	volatile int32_t t30 = 474;

    t30 = (((x141^x142)-x143)^x144);

    if (t30 != -33786) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x145 = -6182220429356172LL;
	int16_t x146 = INT16_MAX;
	volatile uint16_t x147 = 0U;
	uint8_t x148 = 6U;
	int64_t t31 = -10028080478622LL;

    t31 = (((x145^x146)-x147)^x148);

    if (t31 != -6182220429333363LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x149 = 27U;
	int32_t x151 = INT32_MAX;
	int32_t t32 = 1;

    t32 = (((x149^x150)-x151)^x152);

    if (t32 != -2147472628) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x154 = UINT8_MAX;
	uint32_t x155 = 125141277U;
	uint8_t x156 = UINT8_MAX;
	uint32_t t33 = 18U;

    t33 = (((x153^x154)-x155)^x156);

    if (t33 != 4169826078U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x157 = 191239U;
	int16_t x158 = 0;
	static int32_t x159 = -30126766;
	int16_t x160 = 823;
	volatile uint32_t t34 = 159809U;

    t34 = (((x157^x158)-x159)^x160);

    if (t34 != 30318210U) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x162 = 1029312632U;
	uint16_t x164 = 0U;
	static volatile uint32_t t35 = 11U;

    t35 = (((x161^x162)-x163)^x164);

    if (t35 != 3265620852U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x165 = 1;
	uint64_t x167 = 28744846712567017LLU;
	int16_t x168 = -1;
	volatile uint64_t t36 = 87954987508LLU;

    t36 = (((x165^x166)-x167)^x168);

    if (t36 != 28744846712566762LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x173 = 865514981722LLU;
	static int8_t x174 = -21;
	static volatile int32_t x175 = INT32_MIN;
	int32_t x176 = INT32_MIN;
	uint64_t t37 = 5727070LLU;

    t37 = (((x173^x174)-x175)^x176);

    if (t37 != 865356838577LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x178 = -147798;
	static int8_t x180 = INT8_MAX;
	int32_t t38 = 14852;

    t38 = (((x177^x178)-x179)^x180);

    if (t38 != 2147335937) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x181 = INT8_MIN;
	uint32_t x182 = 839U;
	volatile int32_t x183 = -1;
	int64_t x184 = 254376674096LL;
	int64_t t39 = 1595LL;

    t39 = (((x181^x182)-x183)^x184);

    if (t39 != 256724434936LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x185 = UINT32_MAX;
	static int8_t x186 = INT8_MIN;
	int32_t x187 = INT32_MIN;
	int64_t x188 = -1LL;
	volatile int64_t t40 = 0LL;

    t40 = (((x185^x186)-x187)^x188);

    if (t40 != -2147483776LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x198 = -171;
	int16_t x199 = 1045;
	volatile int32_t t41 = 397;

    t41 = (((x197^x198)-x199)^x200);

    if (t41 != 789) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x202 = 0U;
	uint32_t x203 = 55568U;
	static int8_t x204 = INT8_MIN;
	static volatile uint32_t t42 = 24U;

    t42 = (((x201^x202)-x203)^x204);

    if (t42 != 55663U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x207 = -1;
	volatile int16_t x208 = 0;
	uint32_t t43 = 832788U;

    t43 = (((x205^x206)-x207)^x208);

    if (t43 != 2U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x209 = 0;
	static uint8_t x210 = 23U;
	static uint8_t x211 = 1U;
	volatile int16_t x212 = INT16_MAX;
	int32_t t44 = 3;

    t44 = (((x209^x210)-x211)^x212);

    if (t44 != 32745) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x215 = INT32_MIN;
	int64_t x216 = -1LL;
	volatile int64_t t45 = 4480663LL;

    t45 = (((x213^x214)-x215)^x216);

    if (t45 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x221 = INT64_MAX;
	static int64_t x223 = 2189LL;
	int16_t x224 = INT16_MAX;
	volatile int64_t t46 = 7763630980LL;

    t46 = (((x221^x222)-x223)^x224);

    if (t46 != 9223372036854745356LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x225 = 15LLU;
	int32_t x226 = INT32_MIN;
	static uint64_t x227 = 2665747972678498834LLU;
	uint64_t t47 = 13538668449LLU;

    t47 = (((x225^x226)-x227)^x228);

    if (t47 != 15780996098883568898LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint64_t x229 = 10426466678899LLU;
	volatile int64_t x230 = INT64_MIN;
	static uint16_t x231 = UINT16_MAX;
	int32_t x232 = 6;
	static volatile uint64_t t48 = 105487532064LLU;

    t48 = (((x229^x230)-x231)^x232);

    if (t48 != 9223382463321389170LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x233 = UINT16_MAX;
	int16_t x234 = -199;
	int64_t x235 = INT64_MIN;
	int64_t t49 = -116722405940LL;

    t49 = (((x233^x234)-x235)^x236);

    if (t49 != -9223372036854710458LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x238 = INT64_MAX;
	static uint16_t x240 = 79U;

    t50 = (((x237^x238)-x239)^x240);

    if (t50 != 9223372036854743118LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x242 = -554525LL;
	volatile int8_t x243 = INT8_MIN;
	volatile uint64_t x244 = UINT64_MAX;
	uint64_t t51 = 51LLU;

    t51 = (((x241^x242)-x243)^x244);

    if (t51 != 554424LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x249 = INT16_MIN;
	int32_t x250 = INT32_MAX;
	uint16_t x251 = 1502U;
	int16_t x252 = INT16_MIN;
	int32_t t52 = -331969;

    t52 = (((x249^x250)-x251)^x252);

    if (t52 != 2147482145) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x253 = 13U;
	volatile uint64_t x254 = 650403176564LLU;
	int32_t x255 = INT32_MIN;
	static int64_t x256 = INT64_MIN;
	static uint64_t t53 = 24065165222335LLU;

    t53 = (((x253^x254)-x255)^x256);

    if (t53 != 9223372689405436025LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x257 = 2U;
	int32_t x258 = -1;
	uint8_t x259 = UINT8_MAX;
	int64_t x260 = INT64_MIN;

    t54 = (((x257^x258)-x259)^x260);

    if (t54 != 9223372036854775550LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x263 = -207959221293LL;
	static int64_t x264 = INT64_MAX;
	volatile int64_t t55 = 43567516186839763LL;

    t55 = (((x261^x262)-x263)^x264);

    if (t55 != 9223371828895620050LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x265 = 0;
	uint8_t x266 = 0U;
	volatile uint64_t x267 = UINT64_MAX;
	static volatile int8_t x268 = INT8_MIN;
	uint64_t t56 = 258032713146478381LLU;

    t56 = (((x265^x266)-x267)^x268);

    if (t56 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x269 = -4244946280LL;
	static int64_t x270 = INT64_MIN;
	int8_t x272 = INT8_MAX;

    t57 = (((x269^x270)-x271)^x272);

    if (t57 != 9223372032609829608LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x273 = 15594;
	uint8_t x274 = 1U;
	uint64_t x275 = 5499662119LLU;
	volatile uint32_t x276 = 211920694U;
	uint64_t t58 = 19743170159LLU;

    t58 = (((x273^x274)-x275)^x276);

    if (t58 != 18446744068149193458LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x277 = INT64_MIN;
	static int64_t x278 = INT64_MAX;
	static int8_t x279 = INT8_MAX;
	static int64_t t59 = 26765029362LL;

    t59 = (((x277^x278)-x279)^x280);

    if (t59 != -2147483521LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x281 = UINT64_MAX;
	static int8_t x282 = INT8_MIN;
	uint64_t x283 = UINT64_MAX;
	static volatile int8_t x284 = INT8_MIN;
	volatile uint64_t t60 = 890897LLU;

    t60 = (((x281^x282)-x283)^x284);

    if (t60 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x286 = 7978954U;
	int8_t x287 = -1;
	volatile int64_t t61 = -2859LL;

    t61 = (((x285^x286)-x287)^x288);

    if (t61 != -9223372036846794250LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	volatile int64_t x296 = INT64_MIN;
	int64_t t62 = 361345214306286LL;

    t62 = (((x293^x294)-x295)^x296);

    if (t62 != -9223372034707324965LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x298 = 0;
	uint16_t x299 = 0U;
	uint32_t x300 = 3122U;
	uint32_t t63 = 28812U;

    t63 = (((x297^x298)-x299)^x300);

    if (t63 != 7141U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x301 = 14262535030166LLU;
	int64_t x302 = INT64_MAX;
	int64_t x303 = INT64_MIN;
	uint16_t x304 = UINT16_MAX;
	volatile uint64_t t64 = 196459LLU;

    t64 = (((x301^x302)-x303)^x304);

    if (t64 != 18446729811174524310LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x305 = 15842U;
	static int32_t x306 = -47;
	uint32_t x307 = 261367U;
	uint32_t t65 = 77U;

    t65 = (((x305^x306)-x307)^x308);

    if (t65 != 2147206460U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x309 = -118762031897LL;
	static volatile int32_t x310 = -1;
	static int64_t x311 = -1LL;

    t66 = (((x309^x310)-x311)^x312);

    if (t66 != 118762031897LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x317 = -1;
	volatile int64_t x318 = INT64_MIN;
	uint32_t x319 = 113042U;
	volatile uint64_t t67 = 8274511152330828LLU;

    t67 = (((x317^x318)-x319)^x320);

    if (t67 != 9223372036854661662LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x321 = -4444214996962LL;
	static int32_t x322 = INT32_MIN;
	volatile int64_t t68 = -123057LL;

    t68 = (((x321^x322)-x323)^x324);

    if (t68 != 4444219822236LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x325 = -1;
	int8_t x327 = 2;
	uint32_t x328 = UINT32_MAX;
	static volatile int64_t t69 = -510748978LL;

    t69 = (((x325^x326)-x327)^x328);

    if (t69 != 9223372032559808514LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x329 = -1;
	int16_t x330 = -5;
	static int64_t x332 = 36051690586LL;
	volatile uint64_t t70 = 974LLU;

    t70 = (((x329^x330)-x331)^x332);

    if (t70 != 18446705488148192888LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x333 = -423334393LL;
	uint8_t x335 = 13U;
	static volatile uint8_t x336 = 6U;
	static int64_t t71 = 172756LL;

    t71 = (((x333^x334)-x335)^x336);

    if (t71 != 604021369791429LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x337 = UINT64_MAX;
	volatile int8_t x338 = 47;
	int8_t x339 = INT8_MIN;
	uint64_t t72 = 521670LLU;

    t72 = (((x337^x338)-x339)^x340);

    if (t72 != 2980399005LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x345 = 4U;
	volatile uint64_t x346 = 1632045LLU;
	int64_t x347 = INT64_MIN;
	static uint64_t x348 = 9763411234692LLU;
	uint64_t t73 = 276901324421722LLU;

    t73 = (((x345^x346)-x347)^x348);

    if (t73 != 9223381800266524845LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x350 = INT32_MIN;

    t74 = (((x349^x350)-x351)^x352);

    if (t74 != -30790648831420290LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x354 = UINT32_MAX;
	int64_t x356 = INT64_MAX;

    t75 = (((x353^x354)-x355)^x356);

    if (t75 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x357 = INT32_MAX;
	int8_t x358 = -11;
	volatile int64_t x359 = INT64_MIN;
	int16_t x360 = -1;
	int64_t t76 = -525885664017175303LL;

    t76 = (((x357^x358)-x359)^x360);

    if (t76 != -9223372034707292171LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x362 = INT64_MIN;
	int16_t x363 = INT16_MIN;
	uint32_t x364 = 7278U;
	int64_t t77 = -143266430856LL;

    t77 = (((x361^x362)-x363)^x364);

    if (t77 != -9223372036854718753LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x365 = 659427505324988367LLU;
	static uint32_t x366 = 15820U;
	int64_t x367 = INT64_MIN;
	uint64_t t78 = 4281035902290708901LLU;

    t78 = (((x365^x366)-x367)^x368);

    if (t78 != 9882799542168731483LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x373 = -1;
	uint16_t x375 = 25900U;
	int16_t x376 = -1;
	int32_t t79 = 5211;

    t79 = (((x373^x374)-x375)^x376);

    if (t79 != 91435) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x377 = 26155U;
	uint64_t x378 = UINT64_MAX;
	volatile uint64_t t80 = 225LLU;

    t80 = (((x377^x378)-x379)^x380);

    if (t80 != 9223372036854807484LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x381 = UINT8_MAX;
	uint64_t x382 = UINT64_MAX;
	uint16_t x383 = 113U;
	uint64_t t81 = 138057689532854739LLU;

    t81 = (((x381^x382)-x383)^x384);

    if (t81 != 18446744073709551216LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x389 = 3U;
	int8_t x391 = -6;
	static volatile int64_t x392 = -1LL;
	volatile int64_t t82 = 195370663190072418LL;

    t82 = (((x389^x390)-x391)^x392);

    if (t82 != 2147483638LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x393 = 143;
	int8_t x394 = -1;
	volatile uint16_t x395 = 722U;
	int64_t x396 = -1LL;
	static volatile int64_t t83 = 139LL;

    t83 = (((x393^x394)-x395)^x396);

    if (t83 != 865LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x397 = 6U;
	volatile uint32_t x398 = UINT32_MAX;
	int64_t x400 = -7340774160592LL;
	uint64_t t84 = 10124959LLU;

    t84 = (((x397^x398)-x399)^x400);

    if (t84 != 18446736729990527178LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x401 = INT32_MIN;
	volatile int8_t x402 = INT8_MAX;
	volatile int8_t x403 = INT8_MIN;
	static volatile int16_t x404 = INT16_MIN;

    t85 = (((x401^x402)-x403)^x404);

    if (t85 != 2147451135) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x406 = INT16_MAX;
	static volatile int32_t x408 = -28898;
	volatile int64_t t86 = -11514917282LL;

    t86 = (((x405^x406)-x407)^x408);

    if (t86 != 410539090LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x410 = 3950000U;
	volatile uint64_t x412 = 6896414LLU;
	volatile uint64_t t87 = 483497205380077896LLU;

    t87 = (((x409^x410)-x411)^x412);

    if (t87 != 8213130LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x413 = INT32_MAX;
	int64_t x414 = INT64_MAX;
	int16_t x416 = -1;
	volatile int64_t t88 = 67549600027085LL;

    t88 = (((x413^x414)-x415)^x416);

    if (t88 != -9223372034707259394LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x417 = INT32_MAX;
	uint64_t x418 = UINT64_MAX;
	uint64_t x419 = 7367233092857655LLU;
	static int32_t x420 = INT32_MAX;
	volatile uint64_t t89 = 6193200LLU;

    t89 = (((x417^x418)-x419)^x420);

    if (t89 != 18439376837377929014LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x421 = 460755843779LL;
	static int16_t x422 = INT16_MAX;
	uint64_t x423 = 51596508LLU;
	int64_t x424 = -1LL;

    t90 = (((x421^x422)-x423)^x424);

    if (t90 != 18446743613005301663LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x426 = 5;
	int16_t x427 = INT16_MIN;
	static uint16_t x428 = 97U;
	volatile int32_t t91 = 405623;

    t91 = (((x425^x426)-x427)^x428);

    if (t91 != 32667) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x429 = 1U;
	int16_t x430 = INT16_MAX;
	int32_t x432 = INT32_MAX;
	int32_t t92 = 1047013751;

    t92 = (((x429^x430)-x431)^x432);

    if (t92 != -2147450880) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x433 = UINT8_MAX;
	volatile uint64_t x434 = 1168519992070189453LLU;
	volatile int64_t x435 = 78128LL;
	volatile uint32_t x436 = 6U;
	static volatile uint64_t t93 = 24005800052097LLU;

    t93 = (((x433^x434)-x435)^x436);

    if (t93 != 1168519992070111300LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x441 = -31;
	int16_t x444 = -1;
	int32_t t94 = 114;

    t94 = (((x441^x442)-x443)^x444);

    if (t94 != 720453053) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint32_t x449 = UINT32_MAX;
	int32_t x450 = INT32_MIN;
	static int16_t x451 = INT16_MIN;

    t95 = (((x449^x450)-x451)^x452);

    if (t95 != -13941511801LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x453 = -6;
	int64_t x454 = INT64_MIN;
	static volatile int8_t x455 = 1;

    t96 = (((x453^x454)-x455)^x456);

    if (t96 != -9223372036793990188LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x461 = INT16_MIN;
	int64_t x462 = INT64_MAX;
	int8_t x463 = 5;
	uint16_t x464 = 203U;
	int64_t t97 = -4528141LL;

    t97 = (((x461^x462)-x463)^x464);

    if (t97 != -9223372036854743247LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x465 = 2178492U;
	int8_t x466 = -53;
	int16_t x467 = -3038;
	int8_t x468 = INT8_MIN;
	volatile uint32_t t98 = 2U;

    t98 = (((x465^x466)-x467)^x468);

    if (t98 != 2175445U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x469 = 126786487U;
	int8_t x470 = INT8_MIN;
	static volatile int8_t x471 = INT8_MAX;
	static uint64_t x472 = UINT64_MAX;

    t99 = (((x469^x470)-x471)^x472);

    if (t99 != 18446744069541370951LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x473 = 264187953781LLU;
	int32_t x474 = -1;
	static uint8_t x475 = 127U;
	volatile uint32_t x476 = 1889U;
	volatile uint64_t t100 = 165039145801LLU;

    t100 = (((x473^x474)-x475)^x476);

    if (t100 != 18446743809521597034LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x479 = 17U;
	int16_t x480 = INT16_MIN;

    t101 = (((x477^x478)-x479)^x480);

    if (t101 != -1073250974056LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x481 = INT64_MIN;
	int16_t x483 = INT16_MAX;
	int64_t t102 = 1LL;

    t102 = (((x481^x482)-x483)^x484);

    if (t102 != -9223372036845579815LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x485 = INT64_MIN;
	static int16_t x486 = INT16_MIN;
	int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MAX;
	volatile int64_t t103 = 1LL;

    t103 = (((x485^x486)-x487)^x488);

    if (t103 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x489 = 5;
	uint16_t x491 = UINT16_MAX;
	uint8_t x492 = 0U;
	int32_t t104 = -99951967;

    t104 = (((x489^x490)-x491)^x492);

    if (t104 != -65531) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x493 = UINT64_MAX;
	uint64_t x496 = 16511519257520590LLU;
	volatile uint64_t t105 = 2480983190182960LLU;

    t105 = (((x493^x494)-x495)^x496);

    if (t105 != 16511519257520603LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x497 = UINT8_MAX;
	uint32_t x498 = 345598U;
	int8_t x500 = -1;
	static volatile uint32_t t106 = 196871U;

    t106 = (((x497^x498)-x499)^x500);

    if (t106 != 4294621949U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x501 = 8287477U;
	static uint16_t x503 = UINT16_MAX;
	int8_t x504 = -1;

    t107 = (((x501^x502)-x503)^x504);

    if (t107 != 4286838630U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x505 = UINT64_MAX;
	int64_t x506 = INT64_MIN;
	int8_t x508 = INT8_MIN;
	uint64_t t108 = 107LLU;

    t108 = (((x505^x506)-x507)^x508);

    if (t108 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x509 = INT32_MIN;
	int8_t x510 = INT8_MAX;
	static int64_t x511 = 159010184943LL;
	volatile uint16_t x512 = 23U;
	int64_t t109 = -15110984796567LL;

    t109 = (((x509^x510)-x511)^x512);

    if (t109 != -161157668473LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x517 = UINT16_MAX;
	uint8_t x518 = UINT8_MAX;
	int16_t x519 = 422;
	int32_t t110 = 798702;

    t110 = (((x517^x518)-x519)^x520);

    if (t110 != 64805) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x522 = UINT8_MAX;
	volatile int8_t x523 = INT8_MIN;
	static int8_t x524 = INT8_MAX;
	int32_t t111 = 26042;

    t111 = (((x521^x522)-x523)^x524);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x525 = -53;
	int64_t x527 = -1LL;
	static uint8_t x528 = UINT8_MAX;
	static int64_t t112 = -53484916060447LL;

    t112 = (((x525^x526)-x527)^x528);

    if (t112 != -65334LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x529 = -1;
	uint32_t x530 = UINT32_MAX;
	static uint16_t x531 = 10U;
	int32_t x532 = INT32_MAX;
	uint32_t t113 = 1187654597U;

    t113 = (((x529^x530)-x531)^x532);

    if (t113 != 2147483657U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x533 = INT8_MIN;
	static int8_t x534 = -19;
	int32_t x535 = 7473597;
	int16_t x536 = INT16_MAX;
	static int32_t t114 = 0;

    t114 = (((x533^x534)-x535)^x536);

    if (t114 != -7501489) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x538 = 1005780110369393160LLU;
	int64_t x539 = INT64_MIN;
	volatile int8_t x540 = -3;
	uint64_t t115 = 16213455582704933LLU;

    t115 = (((x537^x538)-x539)^x540);

    if (t115 != 8217591926485382652LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x544 = 3U;
	uint32_t t116 = 3289U;

    t116 = (((x541^x542)-x543)^x544);

    if (t116 != 14376U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x546 = INT32_MAX;
	int64_t x547 = -1LL;
	int64_t x548 = -41455965380LL;
	volatile uint64_t t117 = 4402413153LLU;

    t117 = (((x545^x546)-x547)^x548);

    if (t117 != 18446744031416003882LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x549 = 2561160U;
	uint8_t x550 = 3U;
	int16_t x551 = INT16_MIN;
	volatile uint32_t t118 = 1522720298U;

    t118 = (((x549^x550)-x551)^x552);

    if (t118 != 3673894U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x553 = -1;
	static uint64_t x554 = UINT64_MAX;
	int64_t x555 = INT64_MIN;
	volatile int32_t x556 = 23;
	uint64_t t119 = 6019209873721166641LLU;

    t119 = (((x553^x554)-x555)^x556);

    if (t119 != 9223372036854775831LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x559 = INT32_MIN;
	static volatile int32_t x560 = INT32_MAX;
	static uint32_t t120 = 225U;

    t120 = (((x557^x558)-x559)^x560);

    if (t120 != 6U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x561 = INT32_MIN;
	int64_t x562 = INT64_MAX;
	static int8_t x564 = -1;

    t121 = (((x561^x562)-x563)^x564);

    if (t121 != 9223372034707357695LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x565 = UINT32_MAX;
	int8_t x566 = INT8_MAX;
	volatile uint32_t t122 = 1823U;

    t122 = (((x565^x566)-x567)^x568);

    if (t122 != 127U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x569 = 13;
	static volatile int16_t x571 = 11262;
	uint64_t x572 = 3LLU;
	volatile uint64_t t123 = 1457611720721368321LLU;

    t123 = (((x569^x570)-x571)^x572);

    if (t123 != 18446744073709540471LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x576 = INT8_MIN;
	volatile int64_t t124 = -262915720LL;

    t124 = (((x573^x574)-x575)^x576);

    if (t124 != 3056969LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x577 = 15;
	volatile int16_t x580 = 2;
	static volatile int64_t t125 = -1991719072LL;

    t125 = (((x577^x578)-x579)^x580);

    if (t125 != 32754LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x581 = 74021070U;
	int16_t x582 = INT16_MIN;
	int64_t x584 = -703LL;
	static volatile int64_t t126 = 3128316258664935LL;

    t126 = (((x581^x582)-x583)^x584);

    if (t126 != -4220976113LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x586 = -668769;
	static int16_t x587 = INT16_MAX;
	uint8_t x588 = 83U;
	int32_t t127 = -107086;

    t127 = (((x585^x586)-x587)^x588);

    if (t127 != 635954) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x595 = 12U;
	uint32_t x596 = 29777U;

    t128 = (((x593^x594)-x595)^x596);

    if (t128 != 4294871973U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x597 = -1;
	int16_t x598 = INT16_MAX;
	int16_t x600 = INT16_MIN;
	volatile int32_t t129 = 178;

    t129 = (((x597^x598)-x599)^x600);

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x602 = UINT32_MAX;
	int32_t x603 = INT32_MIN;
	int8_t x604 = INT8_MAX;
	int64_t t130 = 2491530959828LL;

    t130 = (((x601^x602)-x603)^x604);

    if (t130 != -9223372030412324992LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x606 = 1;
	volatile int16_t x607 = INT16_MIN;
	int16_t x608 = -21;

    t131 = (((x605^x606)-x607)^x608);

    if (t131 != -33111) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x609 = INT32_MIN;
	static volatile uint16_t x611 = 12U;
	int64_t x612 = -1LL;

    t132 = (((x609^x610)-x611)^x612);

    if (t132 != 2147479379LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x613 = 104U;
	volatile int8_t x614 = 15;
	int64_t x615 = INT64_MAX;
	int64_t x616 = INT64_MIN;

    t133 = (((x613^x614)-x615)^x616);

    if (t133 != 104LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x617 = INT16_MIN;
	static int64_t x618 = INT64_MIN;
	static uint16_t x619 = UINT16_MAX;
	volatile int16_t x620 = 19;
	volatile int64_t t134 = -1848LL;

    t134 = (((x617^x618)-x619)^x620);

    if (t134 != 9223372036854677522LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x622 = 2U;
	int8_t x624 = INT8_MIN;

    t135 = (((x621^x622)-x623)^x624);

    if (t135 != 32640U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x625 = 11U;
	int16_t x626 = INT16_MAX;
	int64_t x627 = -292LL;
	int8_t x628 = -24;
	volatile int64_t t136 = -13LL;

    t136 = (((x625^x626)-x627)^x628);

    if (t136 != -33040LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x629 = 704LLU;
	volatile int8_t x630 = -1;
	static int32_t x631 = -120;
	int16_t x632 = INT16_MAX;

    t137 = (((x629^x630)-x631)^x632);

    if (t137 != 18446744073709519432LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x633 = -4;
	int16_t x634 = INT16_MIN;
	uint8_t x636 = 1U;
	volatile int32_t t138 = -875232;

    t138 = (((x633^x634)-x635)^x636);

    if (t138 != -28207991) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x641 = 17710U;
	int16_t x642 = INT16_MIN;
	int8_t x643 = -1;
	int32_t x644 = -3830;

    t139 = (((x641^x642)-x643)^x644);

    if (t139 != 13349) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x645 = UINT32_MAX;
	int16_t x646 = INT16_MIN;
	static int8_t x648 = 1;
	uint32_t t140 = 7392U;

    t140 = (((x645^x646)-x647)^x648);

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x649 = INT32_MIN;
	int64_t x650 = INT64_MAX;
	int16_t x651 = INT16_MIN;
	int16_t x652 = INT16_MIN;
	volatile int64_t t141 = 4011215039998LL;

    t141 = (((x649^x650)-x651)^x652);

    if (t141 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x653 = INT64_MIN;
	int32_t x654 = INT32_MIN;
	int8_t x655 = INT8_MIN;
	int16_t x656 = 250;
	static int64_t t142 = 7726581443LL;

    t142 = (((x653^x654)-x655)^x656);

    if (t142 != 9223372034707292282LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x657 = -7583;
	int32_t x658 = -157576;
	int16_t x660 = INT16_MAX;
	int32_t t143 = 618;

    t143 = (((x657^x658)-x659)^x660);

    if (t143 != 165350) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x665 = -1;
	volatile int8_t x666 = INT8_MIN;
	uint64_t x667 = 1174285232701621378LLU;
	uint8_t x668 = 12U;

    t144 = (((x665^x666)-x667)^x668);

    if (t144 != 17272458841007930353LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x669 = INT8_MIN;
	int32_t x670 = 504;
	volatile int8_t x671 = -16;
	static volatile int16_t x672 = INT16_MIN;
	int32_t t145 = 10;

    t145 = (((x669^x670)-x671)^x672);

    if (t145 != 32392) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x673 = -1;
	int16_t x674 = -1266;
	int8_t x675 = -1;
	uint16_t x676 = 6567U;
	volatile int32_t t146 = 822785484;

    t146 = (((x673^x674)-x675)^x676);

    if (t146 != 7509) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x677 = 0U;
	int64_t x678 = INT64_MAX;
	uint64_t x679 = UINT64_MAX;
	int16_t x680 = 188;
	uint64_t t147 = 231963LLU;

    t147 = (((x677^x678)-x679)^x680);

    if (t147 != 9223372036854775996LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x681 = INT16_MIN;
	volatile int32_t x682 = INT32_MIN;
	static int16_t x683 = -193;
	uint32_t x684 = UINT32_MAX;
	uint32_t t148 = 222406U;

    t148 = (((x681^x682)-x683)^x684);

    if (t148 != 2147516222U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x686 = INT8_MAX;
	int8_t x687 = 0;
	static int32_t x688 = INT32_MIN;
	int32_t t149 = -1;

    t149 = (((x685^x686)-x687)^x688);

    if (t149 != -2147483521) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x689 = 120U;
	int8_t x690 = 0;
	uint64_t x691 = 441588070305009605LLU;
	int32_t x692 = -2;
	static volatile uint64_t t150 = 7LLU;

    t150 = (((x689^x690)-x691)^x692);

    if (t150 != 441588070305009485LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x693 = UINT16_MAX;
	uint32_t x694 = 229831U;
	uint64_t x696 = 187789LLU;
	static uint64_t t151 = 246231491326LLU;

    t151 = (((x693^x694)-x695)^x696);

    if (t151 != 107451LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x697 = INT32_MIN;
	static int32_t x698 = 798167;
	uint64_t x700 = 6668593473254LLU;
	static volatile uint64_t t152 = 3966563888927942541LLU;

    t152 = (((x697^x698)-x699)^x700);

    if (t152 != 18446737404282342206LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x701 = INT32_MIN;
	volatile uint64_t x702 = 0LLU;
	int16_t x703 = INT16_MAX;
	static int8_t x704 = INT8_MIN;

    t153 = (((x701^x702)-x703)^x704);

    if (t153 != 2147516289LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x705 = UINT32_MAX;
	static uint8_t x706 = UINT8_MAX;
	int32_t x707 = 1667972;
	int64_t x708 = INT64_MIN;
	volatile int64_t t154 = 6838LL;

    t154 = (((x705^x706)-x707)^x708);

    if (t154 != -9223372032561476740LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x709 = 1U;
	int16_t x710 = INT16_MAX;
	uint8_t x711 = UINT8_MAX;
	static volatile uint64_t x712 = 5691LLU;
	uint64_t t155 = 441759388126545245LLU;

    t155 = (((x709^x710)-x711)^x712);

    if (t155 != 26820LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x713 = 18539U;
	static int16_t x715 = 104;
	volatile int64_t x716 = 204LL;
	volatile int64_t t156 = -54095238LL;

    t156 = (((x713^x714)-x715)^x716);

    if (t156 != 18227LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x717 = 6705174LL;
	uint32_t x718 = 16598493U;
	static uint16_t x719 = UINT16_MAX;
	int64_t t157 = -17717227817926LL;

    t157 = (((x717^x718)-x719)^x720);

    if (t157 != 10119731LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x721 = -5034848LL;
	int16_t x722 = INT16_MIN;
	static uint64_t x724 = 61LLU;
	volatile uint64_t t158 = 162607647LLU;

    t158 = (((x721^x722)-x723)^x724);

    if (t158 != 4957201LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x725 = INT64_MIN;
	int16_t x726 = INT16_MIN;
	uint32_t x727 = UINT32_MAX;
	int64_t t159 = 208690794LL;

    t159 = (((x725^x726)-x727)^x728);

    if (t159 != -9223372032559775871LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint8_t x729 = 52U;
	int32_t x730 = 301418137;
	int16_t x731 = -32;
	static int16_t x732 = -1;
	volatile int32_t t160 = -9;

    t160 = (((x729^x730)-x731)^x732);

    if (t160 != -301418190) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x733 = 1150U;
	int16_t x734 = -1;
	int16_t x735 = INT16_MAX;
	volatile int64_t x736 = INT64_MIN;
	static volatile int64_t t161 = -128093981334329496LL;

    t161 = (((x733^x734)-x735)^x736);

    if (t161 != 9223372036854741890LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x737 = -1;
	uint64_t x739 = 192420294894970LLU;
	static volatile uint64_t t162 = 2706387592LLU;

    t162 = (((x737^x738)-x739)^x740);

    if (t162 != 192420294908312LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x741 = INT16_MAX;
	int64_t x742 = -25308LL;
	volatile int64_t x743 = -1LL;
	uint8_t x744 = 15U;
	int64_t t163 = 6139LL;

    t163 = (((x741^x742)-x743)^x744);

    if (t163 != -7469LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x745 = 4287687711353561631LLU;
	uint16_t x746 = 2582U;
	int8_t x747 = -1;
	uint64_t x748 = UINT64_MAX;
	uint64_t t164 = 833853603LLU;

    t164 = (((x745^x746)-x747)^x748);

    if (t164 != 14159056362355988469LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x750 = 2243U;
	int64_t x751 = -26690487LL;
	static uint64_t x752 = UINT64_MAX;

    t165 = (((x749^x750)-x751)^x752);

    if (t165 != 9223372036828083077LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x753 = 48;
	int32_t x754 = -1;
	int16_t x756 = INT16_MIN;

    t166 = (((x753^x754)-x755)^x756);

    if (t166 != 65488) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x757 = INT32_MIN;
	int16_t x758 = -1;
	int64_t x759 = 2487843900324LL;
	uint64_t x760 = 2244562134039009450LLU;

    t167 = (((x757^x758)-x759)^x760);

    if (t167 != 16202180022084218097LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x761 = -1LL;
	int8_t x762 = INT8_MIN;
	static uint64_t x763 = 26653332883LLU;
	int8_t x764 = -1;
	volatile uint64_t t168 = 2809887LLU;

    t168 = (((x761^x762)-x763)^x764);

    if (t168 != 26653332755LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x765 = 1016LLU;
	volatile int16_t x766 = INT16_MAX;
	static uint16_t x767 = 10906U;
	static uint64_t t169 = 2542LLU;

    t169 = (((x765^x766)-x767)^x768);

    if (t169 != 18446744073709530771LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x769 = -1;
	int8_t x770 = 3;
	uint8_t x771 = 9U;
	uint16_t x772 = 3464U;

    t170 = (((x769^x770)-x771)^x772);

    if (t170 != -3461) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x773 = -125225187;
	int64_t x774 = -126119410LL;
	uint32_t x775 = 966921765U;
	static int8_t x776 = INT8_MIN;
	int64_t t171 = -2LL;

    t171 = (((x773^x774)-x775)^x776);

    if (t171 != 951019886LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x778 = 106U;
	int64_t x779 = INT64_MIN;
	static int32_t x780 = INT32_MIN;
	int64_t t172 = -84780LL;

    t172 = (((x777^x778)-x779)^x780);

    if (t172 != -9223372034707292267LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x781 = INT8_MIN;
	uint32_t x782 = 246U;
	static int16_t x784 = 12;
	uint32_t t173 = 168U;

    t173 = (((x781^x782)-x783)^x784);

    if (t173 != 4294967122U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x785 = -1;
	int64_t x786 = 19863LL;
	uint8_t x787 = 1U;
	volatile uint32_t x788 = UINT32_MAX;
	int64_t t174 = 1130LL;

    t174 = (((x785^x786)-x787)^x788);

    if (t174 != -4294947432LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x789 = 42;
	static int16_t x790 = INT16_MAX;
	int32_t x791 = 1;
	uint8_t x792 = 10U;
	int32_t t175 = -624;

    t175 = (((x789^x790)-x791)^x792);

    if (t175 != 32734) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x793 = 1007876U;
	static int32_t x794 = 4364;
	uint64_t t176 = 2734385342LLU;

    t176 = (((x793^x794)-x795)^x796);

    if (t176 != 1011459LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x797 = 1;
	volatile int64_t x798 = -3254867732717LL;
	static int32_t x799 = -23918;
	volatile uint32_t x800 = 340955538U;
	static volatile int64_t t177 = 710LL;

    t177 = (((x797^x798)-x799)^x800);

    if (t177 != -3254535150318LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x801 = INT64_MIN;
	volatile int8_t x802 = INT8_MIN;
	volatile uint32_t x803 = UINT32_MAX;
	int8_t x804 = INT8_MAX;

    t178 = (((x801^x802)-x803)^x804);

    if (t178 != 9223372032559808510LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x805 = 19272U;
	int32_t x806 = INT32_MIN;
	static volatile uint64_t x807 = 4028381LLU;
	static volatile uint8_t x808 = 31U;
	volatile uint64_t t179 = 2751807464LLU;

    t179 = (((x805^x806)-x807)^x808);

    if (t179 != 2143474548LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x809 = INT16_MIN;
	volatile int8_t x810 = -1;
	uint16_t x812 = 9U;
	int32_t t180 = -2787;

    t180 = (((x809^x810)-x811)^x812);

    if (t180 != -32759) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x815 = -903569874737582848LL;
	static uint32_t x816 = 613U;
	int64_t t181 = 686LL;

    t181 = (((x813^x814)-x815)^x816);

    if (t181 != 903569874737582422LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x817 = INT16_MIN;
	int8_t x818 = -1;
	int16_t x819 = INT16_MIN;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t182 = -7;

    t182 = (((x817^x818)-x819)^x820);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x822 = INT16_MAX;
	int16_t x823 = INT16_MIN;
	int32_t t183 = 3727368;

    t183 = (((x821^x822)-x823)^x824);

    if (t183 != 63613) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x825 = 1;
	uint64_t x826 = 0LLU;
	static uint16_t x827 = 75U;
	static uint32_t x828 = UINT32_MAX;
	volatile uint64_t t184 = 66691522261LLU;

    t184 = (((x825^x826)-x827)^x828);

    if (t184 != 18446744069414584393LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x829 = -261;
	int8_t x830 = 3;
	int8_t x831 = INT8_MAX;
	volatile int16_t x832 = INT16_MIN;
	int32_t t185 = -169878143;

    t185 = (((x829^x830)-x831)^x832);

    if (t185 != 32377) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x833 = INT32_MAX;
	static int64_t x834 = INT64_MAX;
	uint8_t x835 = UINT8_MAX;
	uint32_t x836 = 5016U;
	int64_t t186 = -153LL;

    t186 = (((x833^x834)-x835)^x836);

    if (t186 != 9223372034707287193LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x837 = 6278U;
	uint64_t x838 = UINT64_MAX;
	int32_t x839 = 22002159;
	volatile int16_t x840 = 38;

    t187 = (((x837^x838)-x839)^x840);

    if (t187 != 18446744073687543212LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x841 = 2U;
	int64_t x842 = -1LL;
	int16_t x843 = -1;
	static int64_t x844 = 444596084321634992LL;

    t188 = (((x841^x842)-x843)^x844);

    if (t188 != -444596084321634994LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x845 = 12296;
	volatile int8_t x846 = -1;
	volatile int32_t x847 = 590;
	int8_t x848 = INT8_MAX;
	volatile int32_t t189 = -13;

    t189 = (((x845^x846)-x847)^x848);

    if (t189 != -12842) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x853 = UINT32_MAX;
	int64_t x854 = -5353691860467LL;
	static int32_t x855 = -1;
	uint16_t x856 = 1938U;
	int64_t t190 = 246608402LL;

    t190 = (((x853^x854)-x855)^x856);

    if (t190 != -5353661609375LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x857 = -1LL;
	uint16_t x858 = 87U;
	uint32_t x859 = 8U;
	int64_t x860 = INT64_MIN;

    t191 = (((x857^x858)-x859)^x860);

    if (t191 != 9223372036854775712LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x861 = 22;
	int32_t x862 = -7066144;
	static uint32_t x863 = UINT32_MAX;
	static volatile uint32_t t192 = 11448U;

    t192 = (((x861^x862)-x863)^x864);

    if (t192 != 4287901154U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x866 = UINT8_MAX;
	uint8_t x868 = UINT8_MAX;

    t193 = (((x865^x866)-x867)^x868);

    if (t193 != 65024) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x869 = 988LLU;
	volatile uint32_t x870 = 335150731U;
	int32_t x872 = -988;
	volatile uint64_t t194 = 2073537453544331915LLU;

    t194 = (((x869^x870)-x871)^x872);

    if (t194 != 18446744073374400892LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x873 = -1;
	int32_t x874 = -1;
	uint16_t x875 = 5052U;
	int8_t x876 = INT8_MAX;
	static volatile int32_t t195 = 781938;

    t195 = (((x873^x874)-x875)^x876);

    if (t195 != -5061) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x877 = INT16_MIN;
	int64_t x878 = 246824079678309996LL;
	static int8_t x879 = INT8_MAX;
	uint16_t x880 = UINT16_MAX;
	int64_t t196 = 406536LL;

    t196 = (((x877^x878)-x879)^x880);

    if (t196 != -246824079678342638LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x881 = INT64_MIN;
	uint16_t x882 = UINT16_MAX;
	int32_t x883 = INT32_MIN;
	volatile int64_t t197 = -40732165LL;

    t197 = (((x881^x882)-x883)^x884);

    if (t197 != 2147549183LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x886 = 46636478;
	int8_t x887 = INT8_MAX;
	int8_t x888 = -1;
	static volatile int64_t t198 = -190038LL;

    t198 = (((x885^x886)-x887)^x888);

    if (t198 != -713095664207LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x889 = -9;
	static int32_t x890 = INT32_MIN;
	static int8_t x891 = -2;
	volatile int16_t x892 = INT16_MIN;
	int32_t t199 = 0;

    t199 = (((x889^x890)-x891)^x892);

    if (t199 != -2147450887) { NG(); } else { ; }
	
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

