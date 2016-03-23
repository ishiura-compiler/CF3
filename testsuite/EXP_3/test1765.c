
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

static uint16_t x6 = 6U;
static volatile uint8_t x14 = 1U;
static uint8_t x15 = UINT8_MAX;
volatile int16_t x18 = 0;
static uint64_t x19 = 254202LLU;
int32_t x24 = INT32_MAX;
int32_t t6 = -2538;
int16_t x29 = 286;
int64_t x37 = INT64_MIN;
volatile int32_t x40 = INT32_MIN;
int8_t x44 = INT8_MIN;
uint8_t x46 = UINT8_MAX;
volatile uint8_t x56 = 1U;
int64_t t13 = 0LL;
int32_t x69 = 1407009;
int16_t x70 = INT16_MAX;
static int32_t t16 = -27367631;
uint16_t x83 = 34U;
static int32_t t20 = -2592918;
int8_t x93 = 1;
volatile int16_t x96 = -9736;
uint8_t x104 = UINT8_MAX;
int32_t t24 = 32823030;
int8_t x109 = -1;
volatile int64_t x111 = INT64_MAX;
static int64_t x132 = INT64_MAX;
static int32_t x135 = -307;
volatile int64_t x140 = -1LL;
static int64_t t33 = -1215LL;
int8_t x165 = INT8_MIN;
uint16_t x168 = 901U;
volatile uint64_t t38 = 1026488643481090LLU;
volatile uint8_t x173 = 5U;
int32_t x175 = INT32_MIN;
volatile int64_t t41 = -1480836042354376LL;
static uint32_t x189 = 112U;
int64_t x193 = INT64_MIN;
static int32_t t46 = 75;
uint64_t x207 = UINT64_MAX;
int64_t t47 = -25872693906186213LL;
int16_t x211 = -2901;
static uint32_t x215 = UINT32_MAX;
int32_t x222 = -26749022;
volatile int32_t x227 = -88795922;
volatile uint64_t t52 = 249453903535614LLU;
int16_t x233 = INT16_MIN;
int16_t x235 = INT16_MIN;
uint32_t x237 = 50756688U;
volatile int8_t x243 = INT8_MAX;
int8_t x244 = -1;
volatile uint32_t t59 = 4039051U;
int16_t x266 = INT16_MIN;
volatile uint64_t x281 = UINT64_MAX;
static uint8_t x286 = UINT8_MAX;
int16_t x290 = INT16_MIN;
int8_t x295 = -1;
int8_t x314 = INT8_MAX;
uint32_t x318 = 48507973U;
volatile uint8_t x335 = 11U;
uint16_t x337 = 3U;
int32_t x341 = -1;
int16_t x344 = -346;
int8_t x350 = INT8_MAX;
static int8_t x355 = INT8_MIN;
uint8_t x366 = 6U;
uint64_t x377 = 85674390504278LLU;
int32_t x380 = 71391;
volatile uint64_t t88 = 6911346848LLU;
volatile int8_t x400 = INT8_MIN;
volatile uint64_t t91 = 0LLU;
volatile int64_t x403 = 15651494LL;
int16_t x415 = -588;
int16_t x420 = INT16_MAX;
static int16_t x425 = 953;
int32_t x432 = INT32_MIN;
int8_t x436 = -1;
int16_t x448 = INT16_MAX;
volatile int64_t t106 = 13244523292044LL;
volatile uint8_t x472 = UINT8_MAX;
int64_t x474 = 2988630691334164LL;
volatile int16_t x477 = INT16_MAX;
volatile uint32_t x478 = UINT32_MAX;
uint16_t x479 = UINT16_MAX;
uint32_t x481 = 41322849U;
int8_t x483 = 0;
static volatile uint64_t t111 = 1272196LLU;
volatile uint32_t x490 = UINT32_MAX;
uint16_t x498 = UINT16_MAX;
int16_t x510 = -2762;
uint8_t x512 = 1U;
int64_t x516 = -1LL;
int64_t x519 = INT64_MIN;
int32_t t119 = 1042578528;
int16_t x523 = -5;
uint16_t x524 = 13048U;
static volatile int64_t t120 = 785793707783LL;
int64_t x528 = INT64_MIN;
static volatile uint32_t x531 = UINT32_MAX;
int8_t x532 = INT8_MIN;
uint8_t x538 = 3U;
static uint16_t x540 = 6578U;
int64_t x542 = -284197525432196LL;
volatile int32_t x552 = -314;
uint8_t x553 = UINT8_MAX;
int8_t x557 = -1;
int32_t x558 = -1;
volatile int8_t x560 = INT8_MIN;
uint16_t x561 = UINT16_MAX;
static uint32_t x564 = 607796U;
uint64_t x565 = 78679LLU;
uint64_t x570 = 0LLU;
volatile int32_t x578 = 0;
int32_t x597 = INT32_MAX;
int16_t x598 = -5639;
uint64_t x599 = UINT64_MAX;
int16_t x605 = -1;
volatile int16_t x614 = INT16_MIN;
volatile uint8_t x616 = 103U;
static uint16_t x617 = 142U;
uint8_t x619 = 119U;
volatile int32_t t140 = -445233;
static volatile int32_t t141 = -654;
volatile int8_t x639 = INT8_MIN;
uint16_t x643 = UINT16_MAX;
static int32_t t146 = 71;
uint32_t x645 = 22U;
int8_t x646 = INT8_MIN;
uint16_t x651 = UINT16_MAX;
static int8_t x668 = -1;
int16_t x669 = 0;
int8_t x670 = 9;
uint8_t x688 = UINT8_MAX;
uint8_t x693 = 44U;
int8_t x694 = INT8_MIN;
static int16_t x696 = INT16_MIN;
static int8_t x698 = -2;
static volatile int8_t x702 = 3;
int64_t x703 = -42598670336LL;
uint32_t x704 = UINT32_MAX;
int16_t x720 = INT16_MAX;
uint32_t t165 = 1036948830U;
static int32_t x731 = -1;
static uint32_t x737 = 28969U;
uint8_t x741 = UINT8_MAX;
static uint64_t x748 = 109082831LLU;
volatile int8_t x770 = 0;
static int64_t x772 = INT64_MIN;
int32_t x774 = 2384465;
int8_t x775 = INT8_MIN;
int32_t t176 = -448197314;
volatile int16_t x797 = INT16_MIN;
int32_t t179 = -220;
int32_t t181 = -312;
volatile int64_t x817 = INT64_MIN;
uint16_t x819 = 3U;
static int64_t x820 = -5LL;
static volatile int64_t t184 = -337348LL;
static int8_t x822 = -1;
int32_t t186 = -4148;
static volatile int16_t x829 = 9980;
static volatile int64_t x830 = 51214LL;
int8_t x831 = 0;
int32_t x833 = INT32_MIN;
static int16_t x840 = INT16_MAX;
volatile int8_t x852 = INT8_MIN;
volatile int64_t t191 = -503LL;
volatile int64_t x860 = -1LL;
int16_t x862 = INT16_MIN;
int32_t x866 = -1;
volatile uint8_t x869 = UINT8_MAX;
static volatile int8_t x871 = INT8_MIN;
static int32_t t196 = -72644802;
int16_t x884 = INT16_MIN;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	uint8_t x2 = UINT8_MAX;
	static volatile uint32_t x3 = UINT32_MAX;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -4400;

    t0 = ((x1+x2)+(x3<=x4));

    if (t0 != 33022) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 199U;
	volatile uint16_t x7 = UINT16_MAX;
	static uint64_t x8 = 2189987833019941390LLU;
	int32_t t1 = -793;

    t1 = ((x5+x6)+(x7<=x8));

    if (t1 != 206) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint8_t x10 = 120U;
	int32_t x11 = -1;
	static int32_t x12 = -1;
	int32_t t2 = -143297963;

    t2 = ((x9+x10)+(x11<=x12));

    if (t2 != -32647) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = UINT32_MAX;
	volatile int64_t x16 = INT64_MAX;
	uint32_t t3 = 185514308U;

    t3 = ((x13+x14)+(x15<=x16));

    if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	int16_t x20 = INT16_MAX;
	static volatile uint64_t t4 = UINT64_MAX;

    t4 = ((x17+x18)+(x19<=x20));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	static int16_t x22 = INT16_MIN;
	volatile uint8_t x23 = 1U;
	int32_t t5 = -450865;

    t5 = ((x21+x22)+(x23<=x24));

    if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 3;
	int16_t x26 = 29;
	uint16_t x27 = UINT16_MAX;
	static volatile int8_t x28 = INT8_MAX;

    t6 = ((x25+x26)+(x27<=x28));

    if (t6 != 32) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x30 = 1503593853U;
	static volatile int8_t x31 = INT8_MAX;
	static volatile uint64_t x32 = UINT64_MAX;
	volatile uint32_t t7 = 2278U;

    t7 = ((x29+x30)+(x31<=x32));

    if (t7 != 1503594140U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -3266;
	int8_t x34 = -5;
	int64_t x35 = INT64_MIN;
	static volatile int16_t x36 = INT16_MIN;
	int32_t t8 = -194;

    t8 = ((x33+x34)+(x35<=x36));

    if (t8 != -3270) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x38 = UINT32_MAX;
	int16_t x39 = -2;
	volatile int64_t t9 = 12084343117LL;

    t9 = ((x37+x38)+(x39<=x40));

    if (t9 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	uint64_t x42 = 802583625LLU;
	int32_t x43 = -1;
	volatile uint64_t t10 = 4463817299494395LLU;

    t10 = ((x41+x42)+(x43<=x44));

    if (t10 != 2950067272LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	uint64_t x47 = 2797579LLU;
	int64_t x48 = -1LL;
	int32_t t11 = -3;

    t11 = ((x45+x46)+(x47<=x48));

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	uint16_t x50 = 3U;
	volatile int16_t x51 = INT16_MAX;
	static int16_t x52 = -1;
	uint64_t t12 = 87587412129LLU;

    t12 = ((x49+x50)+(x51<=x52));

    if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = -1955;
	static int64_t x54 = 3276946612LL;
	volatile int64_t x55 = INT64_MAX;

    t13 = ((x53+x54)+(x55<=x56));

    if (t13 != 3276944657LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -27;
	uint32_t x58 = 181655877U;
	int64_t x59 = 65815768LL;
	int64_t x60 = INT64_MIN;
	uint32_t t14 = 136958U;

    t14 = ((x57+x58)+(x59<=x60));

    if (t14 != 181655850U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 20281U;
	static uint8_t x66 = 1U;
	int16_t x67 = -10901;
	int8_t x68 = -1;
	volatile uint32_t t15 = 1U;

    t15 = ((x65+x66)+(x67<=x68));

    if (t15 != 20283U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x71 = 9263;
	int16_t x72 = 0;

    t16 = ((x69+x70)+(x71<=x72));

    if (t16 != 1439776) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x73 = INT64_MIN;
	int64_t x74 = INT64_MAX;
	static volatile uint32_t x75 = 6306719U;
	int16_t x76 = INT16_MAX;
	int64_t t17 = 751434866912282LL;

    t17 = ((x73+x74)+(x75<=x76));

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x81 = -1;
	static volatile uint64_t x82 = 36521436387860LLU;
	int32_t x84 = INT32_MIN;
	volatile uint64_t t18 = 73771549683827430LLU;

    t18 = ((x81+x82)+(x83<=x84));

    if (t18 != 36521436387859LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MIN;
	volatile int8_t x87 = INT8_MIN;
	int64_t x88 = -42823072021014347LL;
	static int64_t t19 = -1LL;

    t19 = ((x85+x86)+(x87<=x88));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = INT8_MIN;
	volatile int16_t x90 = INT16_MAX;
	static int32_t x91 = -3242706;
	uint32_t x92 = 452U;

    t20 = ((x89+x90)+(x91<=x92));

    if (t20 != 32639) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	volatile int32_t t21 = -60247;

    t21 = ((x93+x94)+(x95<=x96));

    if (t21 != -126) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x97 = -1;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = INT64_MIN;
	int64_t x100 = INT64_MIN;
	volatile int32_t t22 = -2838;

    t22 = ((x97+x98)+(x99<=x100));

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x101 = 28073U;
	int16_t x102 = -1;
	uint32_t x103 = UINT32_MAX;
	int32_t t23 = -270775432;

    t23 = ((x101+x102)+(x103<=x104));

    if (t23 != 28072) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x105 = 296U;
	uint8_t x106 = 4U;
	int64_t x107 = -1LL;
	int32_t x108 = -346299;

    t24 = ((x105+x106)+(x107<=x108));

    if (t24 != 300) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x110 = 30;
	int32_t x112 = INT32_MIN;
	volatile int32_t t25 = 3025741;

    t25 = ((x109+x110)+(x111<=x112));

    if (t25 != 29) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MAX;
	volatile int64_t x115 = INT64_MAX;
	int32_t x116 = -1;
	volatile int32_t t26 = 7;

    t26 = ((x113+x114)+(x115<=x116));

    if (t26 != 32639) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x117 = INT64_MAX;
	int32_t x118 = INT32_MIN;
	static int64_t x119 = -1530343810604LL;
	static uint16_t x120 = 8U;
	volatile int64_t t27 = -1LL;

    t27 = ((x117+x118)+(x119<=x120));

    if (t27 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x121 = 402U;
	uint32_t x122 = 541U;
	volatile int8_t x123 = -1;
	int32_t x124 = INT32_MIN;
	uint32_t t28 = 142U;

    t28 = ((x121+x122)+(x123<=x124));

    if (t28 != 943U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = -15;
	uint16_t x126 = 1927U;
	static int32_t x127 = -193;
	uint32_t x128 = 1U;
	int32_t t29 = 10812375;

    t29 = ((x125+x126)+(x127<=x128));

    if (t29 != 1912) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x129 = -1;
	static int32_t x130 = 1;
	int16_t x131 = 7535;
	static volatile int32_t t30 = -40;

    t30 = ((x129+x130)+(x131<=x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MAX;
	volatile int32_t x136 = -1;
	volatile int64_t t31 = -25352948373747107LL;

    t31 = ((x133+x134)+(x135<=x136));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = -4333;
	int16_t x138 = INT16_MIN;
	static uint8_t x139 = UINT8_MAX;
	int32_t t32 = -1042316;

    t32 = ((x137+x138)+(x139<=x140));

    if (t32 != -37101) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x141 = 2418352LL;
	static uint32_t x142 = UINT32_MAX;
	int64_t x143 = INT64_MAX;
	int64_t x144 = INT64_MIN;

    t33 = ((x141+x142)+(x143<=x144));

    if (t33 != 4297385647LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x145 = INT64_MIN;
	volatile int8_t x146 = 1;
	uint64_t x147 = UINT64_MAX;
	int16_t x148 = INT16_MIN;
	int64_t t34 = 71416LL;

    t34 = ((x145+x146)+(x147<=x148));

    if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x157 = -1;
	int32_t x158 = -1;
	uint8_t x159 = 16U;
	volatile int32_t x160 = INT32_MAX;
	volatile int32_t t35 = 714204;

    t35 = ((x157+x158)+(x159<=x160));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x161 = 31U;
	int32_t x162 = -329;
	int64_t x163 = -1LL;
	int8_t x164 = -1;
	int32_t t36 = -62465894;

    t36 = ((x161+x162)+(x163<=x164));

    if (t36 != -297) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x166 = -1LL;
	volatile uint32_t x167 = 4U;
	volatile int64_t t37 = -75285220LL;

    t37 = ((x165+x166)+(x167<=x168));

    if (t37 != -128LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x169 = 3418;
	uint64_t x170 = UINT64_MAX;
	static uint8_t x171 = 0U;
	int8_t x172 = -1;

    t38 = ((x169+x170)+(x171<=x172));

    if (t38 != 3417LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x174 = 1985;
	uint8_t x176 = 86U;
	volatile int32_t t39 = 36480011;

    t39 = ((x173+x174)+(x175<=x176));

    if (t39 != 1991) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = INT16_MAX;
	uint16_t x178 = UINT16_MAX;
	volatile int16_t x179 = INT16_MIN;
	int8_t x180 = -12;
	int32_t t40 = 11464804;

    t40 = ((x177+x178)+(x179<=x180));

    if (t40 != 98303) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x181 = 23U;
	int64_t x182 = -1LL;
	volatile uint16_t x183 = 2U;
	volatile int64_t x184 = INT64_MIN;

    t41 = ((x181+x182)+(x183<=x184));

    if (t41 != 22LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x185 = 7913597LLU;
	int8_t x186 = INT8_MIN;
	uint32_t x187 = 6U;
	volatile int32_t x188 = INT32_MIN;
	volatile uint64_t t42 = 985LLU;

    t42 = ((x185+x186)+(x187<=x188));

    if (t42 != 7913470LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x190 = INT16_MIN;
	int32_t x191 = 6;
	int8_t x192 = -26;
	volatile uint32_t t43 = 11U;

    t43 = ((x189+x190)+(x191<=x192));

    if (t43 != 4294934640U) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x194 = 1436U;
	uint8_t x195 = UINT8_MAX;
	int64_t x196 = 3421274770987551LL;
	int64_t t44 = -60492616LL;

    t44 = ((x193+x194)+(x195<=x196));

    if (t44 != -9223372036854774371LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x197 = 617U;
	int8_t x198 = -1;
	int8_t x199 = -7;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t45 = -1547792;

    t45 = ((x197+x198)+(x199<=x200));

    if (t45 != 616) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x201 = 8U;
	static int32_t x202 = INT32_MIN;
	int32_t x203 = 155;
	int8_t x204 = INT8_MIN;

    t46 = ((x201+x202)+(x203<=x204));

    if (t46 != -2147483640) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x205 = INT64_MIN;
	uint32_t x206 = UINT32_MAX;
	uint64_t x208 = 254LLU;

    t47 = ((x205+x206)+(x207<=x208));

    if (t47 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x209 = 109198U;
	int32_t x210 = INT32_MIN;
	int8_t x212 = 4;
	uint32_t t48 = 7868292U;

    t48 = ((x209+x210)+(x211<=x212));

    if (t48 != 2147592847U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x213 = INT8_MAX;
	int64_t x214 = -1LL;
	uint64_t x216 = 45163041518540LLU;
	static volatile int64_t t49 = 137369820833LL;

    t49 = ((x213+x214)+(x215<=x216));

    if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x217 = UINT16_MAX;
	int8_t x218 = 1;
	int8_t x219 = 1;
	int8_t x220 = -1;
	int32_t t50 = -65;

    t50 = ((x217+x218)+(x219<=x220));

    if (t50 != 65536) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x221 = INT16_MAX;
	int8_t x223 = INT8_MAX;
	static uint32_t x224 = 175U;
	static int32_t t51 = 0;

    t51 = ((x221+x222)+(x223<=x224));

    if (t51 != -26716254) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x225 = 822123323U;
	uint64_t x226 = UINT64_MAX;
	uint16_t x228 = 50U;

    t52 = ((x225+x226)+(x227<=x228));

    if (t52 != 822123323LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = 1;
	int8_t x230 = 12;
	static int8_t x231 = INT8_MIN;
	uint32_t x232 = 2913314U;
	static int32_t t53 = -20418435;

    t53 = ((x229+x230)+(x231<=x232));

    if (t53 != 13) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x234 = INT32_MAX;
	int64_t x236 = INT64_MIN;
	static int32_t t54 = 59382595;

    t54 = ((x233+x234)+(x235<=x236));

    if (t54 != 2147450879) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x238 = 1;
	static volatile uint32_t x239 = UINT32_MAX;
	volatile int64_t x240 = INT64_MAX;
	volatile uint32_t t55 = 52U;

    t55 = ((x237+x238)+(x239<=x240));

    if (t55 != 50756690U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x241 = -1;
	int16_t x242 = INT16_MAX;
	int32_t t56 = 552336367;

    t56 = ((x241+x242)+(x243<=x244));

    if (t56 != 32766) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x245 = UINT8_MAX;
	volatile int16_t x246 = -1;
	volatile int8_t x247 = INT8_MIN;
	volatile int16_t x248 = INT16_MIN;
	static volatile int32_t t57 = 0;

    t57 = ((x245+x246)+(x247<=x248));

    if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MAX;
	static volatile int32_t x259 = INT32_MAX;
	int64_t x260 = -1LL;
	volatile int64_t t58 = 9994224463LL;

    t58 = ((x257+x258)+(x259<=x260));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = INT32_MIN;
	volatile uint32_t x262 = 80637158U;
	volatile int16_t x263 = 5343;
	int16_t x264 = -1;

    t59 = ((x261+x262)+(x263<=x264));

    if (t59 != 2228120806U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x265 = UINT32_MAX;
	int64_t x267 = -1LL;
	static uint8_t x268 = UINT8_MAX;
	volatile uint32_t t60 = 148U;

    t60 = ((x265+x266)+(x267<=x268));

    if (t60 != 4294934528U) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x269 = 268572384691LLU;
	int64_t x270 = INT64_MAX;
	int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MIN;
	volatile uint64_t t61 = 4701LLU;

    t61 = ((x269+x270)+(x271<=x272));

    if (t61 != 9223372305427160499LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x273 = UINT64_MAX;
	uint8_t x274 = 12U;
	int64_t x275 = INT64_MIN;
	int64_t x276 = INT64_MAX;
	static uint64_t t62 = 109647198LLU;

    t62 = ((x273+x274)+(x275<=x276));

    if (t62 != 12LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x277 = 1;
	volatile int8_t x278 = -15;
	static uint64_t x279 = UINT64_MAX;
	int8_t x280 = -44;
	int32_t t63 = -16;

    t63 = ((x277+x278)+(x279<=x280));

    if (t63 != -14) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x282 = -6785042;
	int32_t x283 = INT32_MIN;
	uint32_t x284 = 4870607U;
	uint64_t t64 = 199839LLU;

    t64 = ((x281+x282)+(x283<=x284));

    if (t64 != 18446744073702766573LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x285 = INT64_MIN;
	static int8_t x287 = -1;
	int32_t x288 = 62;
	int64_t t65 = 761897250LL;

    t65 = ((x285+x286)+(x287<=x288));

    if (t65 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x289 = -32731LL;
	int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;
	volatile int64_t t66 = -8605902572461194LL;

    t66 = ((x289+x290)+(x291<=x292));

    if (t66 != -65498LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = 6;
	int32_t x294 = INT32_MIN;
	int64_t x296 = 1680485157LL;
	volatile int32_t t67 = -980;

    t67 = ((x293+x294)+(x295<=x296));

    if (t67 != -2147483641) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x297 = -1;
	static int32_t x298 = -47;
	int64_t x299 = -974LL;
	volatile int64_t x300 = INT64_MAX;
	static int32_t t68 = 93;

    t68 = ((x297+x298)+(x299<=x300));

    if (t68 != -47) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x301 = INT8_MAX;
	static volatile int32_t x302 = -31630582;
	int16_t x303 = INT16_MIN;
	static int64_t x304 = INT64_MIN;
	volatile int32_t t69 = 61;

    t69 = ((x301+x302)+(x303<=x304));

    if (t69 != -31630455) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x305 = 3388878107731275LLU;
	volatile int16_t x306 = INT16_MIN;
	volatile int64_t x307 = -793763LL;
	uint64_t x308 = 43885081580LLU;
	volatile uint64_t t70 = 186002LLU;

    t70 = ((x305+x306)+(x307<=x308));

    if (t70 != 3388878107698507LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x309 = INT8_MIN;
	static int8_t x310 = INT8_MIN;
	int64_t x311 = INT64_MAX;
	uint32_t x312 = 488U;
	int32_t t71 = 77236268;

    t71 = ((x309+x310)+(x311<=x312));

    if (t71 != -256) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x313 = INT16_MIN;
	int64_t x315 = INT64_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t72 = 11;

    t72 = ((x313+x314)+(x315<=x316));

    if (t72 != -32641) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x317 = -2279630166236937LL;
	int64_t x319 = INT64_MAX;
	uint16_t x320 = 41U;
	volatile int64_t t73 = -7100934LL;

    t73 = ((x317+x318)+(x319<=x320));

    if (t73 != -2279630117728964LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x321 = INT32_MAX;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = 1U;
	int16_t x324 = -8773;
	static volatile int32_t t74 = -76324;

    t74 = ((x321+x322)+(x323<=x324));

    if (t74 != 2147483519) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x325 = 21738854;
	int64_t x326 = 47371081089464LL;
	int16_t x327 = INT16_MAX;
	int16_t x328 = -404;
	int64_t t75 = -34LL;

    t75 = ((x325+x326)+(x327<=x328));

    if (t75 != 47371102828318LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x329 = 1166154U;
	uint16_t x330 = 1U;
	int16_t x331 = -1;
	static uint64_t x332 = 7325309657061537LLU;
	static volatile uint32_t t76 = 829254U;

    t76 = ((x329+x330)+(x331<=x332));

    if (t76 != 1166155U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x333 = 225312U;
	static uint64_t x334 = UINT64_MAX;
	static volatile uint16_t x336 = 1U;
	static uint64_t t77 = 16589784547LLU;

    t77 = ((x333+x334)+(x335<=x336));

    if (t77 != 225311LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x338 = 224;
	uint8_t x339 = 25U;
	static volatile uint64_t x340 = UINT64_MAX;
	volatile int32_t t78 = 3;

    t78 = ((x337+x338)+(x339<=x340));

    if (t78 != 228) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x342 = 8;
	static int16_t x343 = INT16_MAX;
	static volatile int32_t t79 = -50;

    t79 = ((x341+x342)+(x343<=x344));

    if (t79 != 7) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x345 = 6U;
	int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MIN;
	int64_t x348 = -57576381468509LL;
	uint32_t t80 = 414182U;

    t80 = ((x345+x346)+(x347<=x348));

    if (t80 != 4294967174U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x349 = 24457546U;
	int8_t x351 = INT8_MIN;
	uint32_t x352 = 20U;
	uint32_t t81 = 1U;

    t81 = ((x349+x350)+(x351<=x352));

    if (t81 != 24457673U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x353 = -1;
	int8_t x354 = 0;
	int16_t x356 = INT16_MIN;
	int32_t t82 = 47;

    t82 = ((x353+x354)+(x355<=x356));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x357 = -15;
	static int16_t x358 = INT16_MIN;
	uint16_t x359 = 7277U;
	uint16_t x360 = 331U;
	volatile int32_t t83 = -44;

    t83 = ((x357+x358)+(x359<=x360));

    if (t83 != -32783) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x361 = INT16_MAX;
	static int8_t x362 = INT8_MIN;
	int8_t x363 = 6;
	static int16_t x364 = -1;
	int32_t t84 = 11438564;

    t84 = ((x361+x362)+(x363<=x364));

    if (t84 != 32639) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x365 = UINT32_MAX;
	uint64_t x367 = 2074233478328375LLU;
	int64_t x368 = INT64_MIN;
	uint32_t t85 = 6U;

    t85 = ((x365+x366)+(x367<=x368));

    if (t85 != 6U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x369 = -3553;
	uint32_t x370 = 124147362U;
	volatile uint16_t x371 = 5U;
	static uint16_t x372 = 0U;
	uint32_t t86 = 35U;

    t86 = ((x369+x370)+(x371<=x372));

    if (t86 != 124143809U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x373 = 46U;
	int16_t x374 = 2984;
	volatile int8_t x375 = INT8_MIN;
	int16_t x376 = 287;
	volatile int32_t t87 = 92;

    t87 = ((x373+x374)+(x375<=x376));

    if (t87 != 3031) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x378 = INT16_MIN;
	int8_t x379 = -1;

    t88 = ((x377+x378)+(x379<=x380));

    if (t88 != 85674390471511LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x385 = 59403LLU;
	static volatile int16_t x386 = INT16_MIN;
	static int16_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile uint64_t t89 = 54009249868615LLU;

    t89 = ((x385+x386)+(x387<=x388));

    if (t89 != 26635LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x389 = 3;
	static int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MIN;
	static int32_t x392 = 5893346;
	volatile int32_t t90 = 83066;

    t90 = ((x389+x390)+(x391<=x392));

    if (t90 != 32771) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x397 = 127878614674LLU;
	int32_t x398 = 265804667;
	uint16_t x399 = UINT16_MAX;

    t91 = ((x397+x398)+(x399<=x400));

    if (t91 != 128144419341LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x401 = -1;
	volatile uint32_t x402 = 805U;
	uint8_t x404 = UINT8_MAX;
	volatile uint32_t t92 = 777349U;

    t92 = ((x401+x402)+(x403<=x404));

    if (t92 != 804U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x405 = 29020;
	int64_t x406 = INT64_MIN;
	static int16_t x407 = INT16_MIN;
	int32_t x408 = INT32_MAX;
	volatile int64_t t93 = -14975645599856LL;

    t93 = ((x405+x406)+(x407<=x408));

    if (t93 != -9223372036854746787LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x413 = -1;
	int8_t x414 = 0;
	int16_t x416 = -1;
	volatile int32_t t94 = 24901029;

    t94 = ((x413+x414)+(x415<=x416));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x417 = -1LL;
	int16_t x418 = 0;
	uint8_t x419 = UINT8_MAX;
	int64_t t95 = -18435LL;

    t95 = ((x417+x418)+(x419<=x420));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x421 = -1;
	volatile int8_t x422 = -1;
	static volatile int32_t x423 = -1;
	int16_t x424 = INT16_MAX;
	volatile int32_t t96 = 909822;

    t96 = ((x421+x422)+(x423<=x424));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x426 = -1LL;
	int16_t x427 = INT16_MAX;
	int8_t x428 = -1;
	int64_t t97 = -386873815593519LL;

    t97 = ((x425+x426)+(x427<=x428));

    if (t97 != 952LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x429 = INT8_MAX;
	int64_t x430 = -159558776557308591LL;
	uint8_t x431 = 1U;
	static int64_t t98 = -444335335571LL;

    t98 = ((x429+x430)+(x431<=x432));

    if (t98 != -159558776557308464LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x433 = -3491;
	int16_t x434 = INT16_MIN;
	uint8_t x435 = UINT8_MAX;
	int32_t t99 = 219917;

    t99 = ((x433+x434)+(x435<=x436));

    if (t99 != -36259) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x437 = -1LL;
	int16_t x438 = INT16_MIN;
	volatile int64_t x439 = 930830171092721058LL;
	int64_t x440 = -6395729383176LL;
	static volatile int64_t t100 = -146413441480429339LL;

    t100 = ((x437+x438)+(x439<=x440));

    if (t100 != -32769LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x441 = UINT16_MAX;
	int32_t x442 = INT32_MIN;
	uint16_t x443 = 31890U;
	int32_t x444 = -1856054;
	static int32_t t101 = -289271359;

    t101 = ((x441+x442)+(x443<=x444));

    if (t101 != -2147418113) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x445 = 1623U;
	int32_t x446 = 77333962;
	int64_t x447 = -1LL;
	volatile int32_t t102 = -2;

    t102 = ((x445+x446)+(x447<=x448));

    if (t102 != 77335586) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x449 = INT32_MAX;
	uint64_t x450 = UINT64_MAX;
	volatile uint64_t x451 = 1135360019LLU;
	uint64_t x452 = UINT64_MAX;
	volatile uint64_t t103 = 6110135LLU;

    t103 = ((x449+x450)+(x451<=x452));

    if (t103 != 2147483647LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x457 = INT8_MIN;
	uint8_t x458 = 1U;
	int16_t x459 = INT16_MIN;
	int8_t x460 = INT8_MAX;
	int32_t t104 = 121;

    t104 = ((x457+x458)+(x459<=x460));

    if (t104 != -126) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x461 = 11U;
	int16_t x462 = -5355;
	uint16_t x463 = 141U;
	int64_t x464 = INT64_MIN;
	static int32_t t105 = 76796;

    t105 = ((x461+x462)+(x463<=x464));

    if (t105 != -5344) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x465 = -1LL;
	int8_t x466 = -1;
	int8_t x467 = 5;
	uint32_t x468 = 7U;

    t106 = ((x465+x466)+(x467<=x468));

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x469 = INT32_MAX;
	static uint32_t x470 = 1U;
	int16_t x471 = -91;
	uint32_t t107 = 19002884U;

    t107 = ((x469+x470)+(x471<=x472));

    if (t107 != 2147483649U) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x473 = 0LL;
	uint16_t x475 = 7U;
	int32_t x476 = INT32_MIN;
	int64_t t108 = -360LL;

    t108 = ((x473+x474)+(x475<=x476));

    if (t108 != 2988630691334164LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x480 = UINT16_MAX;
	uint32_t t109 = 881720U;

    t109 = ((x477+x478)+(x479<=x480));

    if (t109 != 32767U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x482 = INT64_MIN;
	int64_t x484 = INT64_MIN;
	volatile int64_t t110 = 67348486946828524LL;

    t110 = ((x481+x482)+(x483<=x484));

    if (t110 != -9223372036813452959LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x485 = 1911617266824475334LLU;
	volatile int32_t x486 = -423;
	int64_t x487 = INT64_MIN;
	int8_t x488 = INT8_MIN;

    t111 = ((x485+x486)+(x487<=x488));

    if (t111 != 1911617266824474912LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x489 = 289U;
	static volatile int64_t x491 = -1LL;
	volatile int8_t x492 = INT8_MIN;
	static volatile uint32_t t112 = 250058870U;

    t112 = ((x489+x490)+(x491<=x492));

    if (t112 != 288U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x493 = 3;
	static int32_t x494 = INT32_MIN;
	int16_t x495 = -1;
	int8_t x496 = -1;
	int32_t t113 = -2476;

    t113 = ((x493+x494)+(x495<=x496));

    if (t113 != -2147483644) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x497 = 3366427;
	volatile int32_t x499 = INT32_MIN;
	static volatile uint16_t x500 = 12U;
	int32_t t114 = -5922445;

    t114 = ((x497+x498)+(x499<=x500));

    if (t114 != 3431963) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x501 = 194;
	static volatile int8_t x502 = INT8_MIN;
	int16_t x503 = -1;
	volatile int32_t x504 = 11;
	volatile int32_t t115 = 14867;

    t115 = ((x501+x502)+(x503<=x504));

    if (t115 != 67) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x505 = INT16_MAX;
	int8_t x506 = -1;
	uint16_t x507 = UINT16_MAX;
	uint64_t x508 = 7227LLU;
	static volatile int32_t t116 = 57912;

    t116 = ((x505+x506)+(x507<=x508));

    if (t116 != 32766) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint64_t x509 = 45517538319639999LLU;
	uint64_t x511 = 141902542LLU;
	uint64_t t117 = 197195155464LLU;

    t117 = ((x509+x510)+(x511<=x512));

    if (t117 != 45517538319637237LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x513 = INT32_MIN;
	uint64_t x514 = 1959LLU;
	int64_t x515 = INT64_MIN;
	volatile uint64_t t118 = 107077LLU;

    t118 = ((x513+x514)+(x515<=x516));

    if (t118 != 18446744071562069928LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x517 = INT8_MIN;
	volatile int32_t x518 = INT32_MAX;
	static uint64_t x520 = UINT64_MAX;

    t119 = ((x517+x518)+(x519<=x520));

    if (t119 != 2147483520) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x521 = 23983U;
	int64_t x522 = INT64_MIN;

    t120 = ((x521+x522)+(x523<=x524));

    if (t120 != -9223372036854751824LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x525 = 215;
	int16_t x526 = -1;
	int64_t x527 = -1593384LL;
	int32_t t121 = 15915278;

    t121 = ((x525+x526)+(x527<=x528));

    if (t121 != 214) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x529 = 59;
	uint16_t x530 = 0U;
	static volatile int32_t t122 = -117944762;

    t122 = ((x529+x530)+(x531<=x532));

    if (t122 != 59) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x533 = UINT32_MAX;
	static int16_t x534 = INT16_MAX;
	int64_t x535 = INT64_MIN;
	int64_t x536 = INT64_MIN;
	uint32_t t123 = 320001U;

    t123 = ((x533+x534)+(x535<=x536));

    if (t123 != 32767U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x537 = INT64_MIN;
	static int16_t x539 = -1;
	static volatile int64_t t124 = -115656032213LL;

    t124 = ((x537+x538)+(x539<=x540));

    if (t124 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x541 = 1520LL;
	static uint64_t x543 = 13LLU;
	uint8_t x544 = 0U;
	volatile int64_t t125 = -264475626LL;

    t125 = ((x541+x542)+(x543<=x544));

    if (t125 != -284197525430676LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x545 = 1U;
	int64_t x546 = -42717LL;
	volatile int8_t x547 = INT8_MIN;
	uint32_t x548 = 161606590U;
	volatile int64_t t126 = 31LL;

    t126 = ((x545+x546)+(x547<=x548));

    if (t126 != -42716LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x549 = 0U;
	uint32_t x550 = 237743U;
	static uint8_t x551 = 1U;
	volatile uint32_t t127 = 1188914055U;

    t127 = ((x549+x550)+(x551<=x552));

    if (t127 != 237743U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x554 = 113U;
	int32_t x555 = -1786;
	volatile int8_t x556 = -21;
	static volatile int32_t t128 = -28;

    t128 = ((x553+x554)+(x555<=x556));

    if (t128 != 369) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x559 = -4;
	volatile int32_t t129 = -50;

    t129 = ((x557+x558)+(x559<=x560));

    if (t129 != -2) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x562 = INT16_MIN;
	int32_t x563 = INT32_MIN;
	volatile int32_t t130 = 10232012;

    t130 = ((x561+x562)+(x563<=x564));

    if (t130 != 32767) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x566 = UINT8_MAX;
	int64_t x567 = 977119LL;
	int8_t x568 = -31;
	static volatile uint64_t t131 = 491444786197991148LLU;

    t131 = ((x565+x566)+(x567<=x568));

    if (t131 != 78934LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x569 = INT16_MIN;
	int16_t x571 = -1;
	int32_t x572 = -455117;
	uint64_t t132 = 3157972LLU;

    t132 = ((x569+x570)+(x571<=x572));

    if (t132 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x577 = INT8_MIN;
	uint8_t x579 = 1U;
	int32_t x580 = INT32_MAX;
	static volatile int32_t t133 = -2;

    t133 = ((x577+x578)+(x579<=x580));

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x581 = 16752491LLU;
	int8_t x582 = -1;
	static int8_t x583 = INT8_MIN;
	static uint16_t x584 = 1470U;
	uint64_t t134 = 1467LLU;

    t134 = ((x581+x582)+(x583<=x584));

    if (t134 != 16752491LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x593 = UINT64_MAX;
	int64_t x594 = -1LL;
	volatile uint16_t x595 = 3172U;
	int16_t x596 = INT16_MIN;
	volatile uint64_t t135 = 1417036727392LLU;

    t135 = ((x593+x594)+(x595<=x596));

    if (t135 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x600 = -1;
	int32_t t136 = 7381179;

    t136 = ((x597+x598)+(x599<=x600));

    if (t136 != 2147478009) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x606 = INT32_MAX;
	volatile int64_t x607 = 36567098447LL;
	int16_t x608 = INT16_MAX;
	volatile int32_t t137 = 130641;

    t137 = ((x605+x606)+(x607<=x608));

    if (t137 != 2147483646) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x609 = -1;
	int16_t x610 = INT16_MIN;
	volatile int16_t x611 = INT16_MAX;
	static int32_t x612 = INT32_MAX;
	int32_t t138 = -5938257;

    t138 = ((x609+x610)+(x611<=x612));

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x613 = -1;
	int8_t x615 = INT8_MAX;
	static int32_t t139 = 477;

    t139 = ((x613+x614)+(x615<=x616));

    if (t139 != -32769) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x618 = 42U;
	static uint32_t x620 = 945791951U;

    t140 = ((x617+x618)+(x619<=x620));

    if (t140 != 185) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x621 = 4;
	int16_t x622 = -1;
	uint64_t x623 = UINT64_MAX;
	int16_t x624 = 37;

    t141 = ((x621+x622)+(x623<=x624));

    if (t141 != 3) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x625 = -1LL;
	static uint32_t x626 = 2879472U;
	static int16_t x627 = INT16_MIN;
	uint32_t x628 = 32U;
	int64_t t142 = -1073926309812LL;

    t142 = ((x625+x626)+(x627<=x628));

    if (t142 != 2879471LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x629 = 14;
	uint16_t x630 = 361U;
	int8_t x631 = 5;
	static int8_t x632 = -1;
	int32_t t143 = -457668;

    t143 = ((x629+x630)+(x631<=x632));

    if (t143 != 375) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x633 = INT16_MIN;
	uint32_t x634 = 37173U;
	volatile uint32_t x635 = UINT32_MAX;
	static int8_t x636 = -1;
	volatile uint32_t t144 = 102329317U;

    t144 = ((x633+x634)+(x635<=x636));

    if (t144 != 4406U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x637 = -1;
	int8_t x638 = INT8_MIN;
	uint8_t x640 = UINT8_MAX;
	int32_t t145 = 3535;

    t145 = ((x637+x638)+(x639<=x640));

    if (t145 != -128) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x641 = 6U;
	volatile uint16_t x642 = UINT16_MAX;
	uint32_t x644 = UINT32_MAX;

    t146 = ((x641+x642)+(x643<=x644));

    if (t146 != 65542) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x647 = INT64_MIN;
	int8_t x648 = INT8_MIN;
	static uint32_t t147 = 1529092U;

    t147 = ((x645+x646)+(x647<=x648));

    if (t147 != 4294967191U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x649 = 1894461;
	static int8_t x650 = 0;
	volatile int64_t x652 = -115847679729LL;
	static volatile int32_t t148 = -1957589;

    t148 = ((x649+x650)+(x651<=x652));

    if (t148 != 1894461) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x653 = 126553LLU;
	static int8_t x654 = -1;
	int32_t x655 = INT32_MIN;
	uint32_t x656 = 69U;
	uint64_t t149 = 817403268LLU;

    t149 = ((x653+x654)+(x655<=x656));

    if (t149 != 126552LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x657 = 98U;
	static uint64_t x658 = UINT64_MAX;
	int32_t x659 = 6732885;
	static int16_t x660 = INT16_MIN;
	static uint64_t t150 = 1LLU;

    t150 = ((x657+x658)+(x659<=x660));

    if (t150 != 97LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x665 = -12;
	int16_t x666 = -13372;
	int32_t x667 = INT32_MIN;
	static volatile int32_t t151 = 12;

    t151 = ((x665+x666)+(x667<=x668));

    if (t151 != -13383) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x671 = 636702082;
	uint8_t x672 = UINT8_MAX;
	volatile int32_t t152 = 5744707;

    t152 = ((x669+x670)+(x671<=x672));

    if (t152 != 9) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x673 = UINT8_MAX;
	int8_t x674 = -1;
	uint8_t x675 = 126U;
	volatile int16_t x676 = -7;
	volatile int32_t t153 = -1;

    t153 = ((x673+x674)+(x675<=x676));

    if (t153 != 254) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x677 = 1695661U;
	int8_t x678 = INT8_MAX;
	volatile int8_t x679 = -1;
	uint32_t x680 = UINT32_MAX;
	uint32_t t154 = 413892345U;

    t154 = ((x677+x678)+(x679<=x680));

    if (t154 != 1695789U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x681 = 42LL;
	static uint32_t x682 = 925804495U;
	uint8_t x683 = 1U;
	volatile int8_t x684 = INT8_MIN;
	volatile int64_t t155 = -2933174333335958LL;

    t155 = ((x681+x682)+(x683<=x684));

    if (t155 != 925804537LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x685 = UINT32_MAX;
	uint8_t x686 = 2U;
	int32_t x687 = -1;
	uint32_t t156 = 19U;

    t156 = ((x685+x686)+(x687<=x688));

    if (t156 != 2U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x689 = -4;
	static int8_t x690 = 0;
	static volatile int8_t x691 = -2;
	int32_t x692 = INT32_MIN;
	volatile int32_t t157 = 538570;

    t157 = ((x689+x690)+(x691<=x692));

    if (t157 != -4) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x695 = INT32_MAX;
	static int32_t t158 = -7;

    t158 = ((x693+x694)+(x695<=x696));

    if (t158 != -84) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x697 = -19073900076210LL;
	static volatile uint16_t x699 = 10086U;
	static int32_t x700 = -1;
	int64_t t159 = 766822266423LL;

    t159 = ((x697+x698)+(x699<=x700));

    if (t159 != -19073900076212LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x701 = INT32_MIN;
	static int32_t t160 = -3758;

    t160 = ((x701+x702)+(x703<=x704));

    if (t160 != -2147483644) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x709 = 59075U;
	volatile uint8_t x710 = 63U;
	uint16_t x711 = 78U;
	int16_t x712 = -1;
	static volatile uint32_t t161 = 8097U;

    t161 = ((x709+x710)+(x711<=x712));

    if (t161 != 59138U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x713 = 7U;
	int8_t x714 = 0;
	volatile int16_t x715 = INT16_MIN;
	int32_t x716 = INT32_MIN;
	int32_t t162 = 352;

    t162 = ((x713+x714)+(x715<=x716));

    if (t162 != 7) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x717 = 105U;
	int16_t x718 = -1;
	static int8_t x719 = 13;
	volatile uint32_t t163 = 6052U;

    t163 = ((x717+x718)+(x719<=x720));

    if (t163 != 105U) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x721 = 2LLU;
	volatile int32_t x722 = -1;
	volatile uint32_t x723 = UINT32_MAX;
	volatile int32_t x724 = 10129;
	static uint64_t t164 = 275554LLU;

    t164 = ((x721+x722)+(x723<=x724));

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x725 = -1;
	static uint32_t x726 = 493U;
	volatile int16_t x727 = INT16_MAX;
	static uint8_t x728 = UINT8_MAX;

    t165 = ((x725+x726)+(x727<=x728));

    if (t165 != 492U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x729 = 1LL;
	static uint32_t x730 = UINT32_MAX;
	int16_t x732 = INT16_MAX;
	volatile int64_t t166 = -124LL;

    t166 = ((x729+x730)+(x731<=x732));

    if (t166 != 4294967297LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x738 = -1;
	int64_t x739 = -9LL;
	static uint32_t x740 = UINT32_MAX;
	uint32_t t167 = 127U;

    t167 = ((x737+x738)+(x739<=x740));

    if (t167 != 28969U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x742 = -116128;
	uint32_t x743 = 3886U;
	uint8_t x744 = UINT8_MAX;
	volatile int32_t t168 = -10;

    t168 = ((x741+x742)+(x743<=x744));

    if (t168 != -115873) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x745 = -2;
	uint32_t x746 = UINT32_MAX;
	int32_t x747 = -28;
	volatile uint32_t t169 = 311006U;

    t169 = ((x745+x746)+(x747<=x748));

    if (t169 != 4294967293U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x749 = INT32_MIN;
	uint16_t x750 = UINT16_MAX;
	volatile int32_t x751 = -64550620;
	int16_t x752 = -3;
	volatile int32_t t170 = 618166;

    t170 = ((x749+x750)+(x751<=x752));

    if (t170 != -2147418112) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x757 = -1LL;
	int32_t x758 = 983382745;
	static int64_t x759 = -1LL;
	int8_t x760 = -56;
	int64_t t171 = -1LL;

    t171 = ((x757+x758)+(x759<=x760));

    if (t171 != 983382744LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x761 = UINT32_MAX;
	uint8_t x762 = 10U;
	static int64_t x763 = -134726016465LL;
	int64_t x764 = INT64_MIN;
	uint32_t t172 = 31590654U;

    t172 = ((x761+x762)+(x763<=x764));

    if (t172 != 9U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x769 = 3651U;
	static uint64_t x771 = 135297033174769LLU;
	volatile int32_t t173 = 46;

    t173 = ((x769+x770)+(x771<=x772));

    if (t173 != 3652) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x773 = INT64_MIN;
	uint16_t x776 = UINT16_MAX;
	static int64_t t174 = -4997LL;

    t174 = ((x773+x774)+(x775<=x776));

    if (t174 != -9223372036852391342LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x777 = 249847569681LLU;
	int16_t x778 = -1;
	uint64_t x779 = UINT64_MAX;
	static uint32_t x780 = 1718U;
	uint64_t t175 = 1290LLU;

    t175 = ((x777+x778)+(x779<=x780));

    if (t175 != 249847569680LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x785 = INT8_MIN;
	int16_t x786 = 1;
	volatile int16_t x787 = 4;
	static int8_t x788 = INT8_MIN;

    t176 = ((x785+x786)+(x787<=x788));

    if (t176 != -127) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x789 = 2184811LLU;
	int8_t x790 = -1;
	uint16_t x791 = 11U;
	static int32_t x792 = INT32_MAX;
	uint64_t t177 = 1174287050LLU;

    t177 = ((x789+x790)+(x791<=x792));

    if (t177 != 2184811LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x793 = 26;
	volatile int32_t x794 = -1;
	int16_t x795 = 68;
	int8_t x796 = -22;
	volatile int32_t t178 = 782;

    t178 = ((x793+x794)+(x795<=x796));

    if (t178 != 25) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x798 = INT16_MIN;
	int32_t x799 = 454;
	static uint64_t x800 = UINT64_MAX;

    t179 = ((x797+x798)+(x799<=x800));

    if (t179 != -65535) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x801 = -15;
	uint64_t x802 = 32231477998460LLU;
	int64_t x803 = 14888394708940LL;
	int64_t x804 = INT64_MAX;
	uint64_t t180 = 26996438231161LLU;

    t180 = ((x801+x802)+(x803<=x804));

    if (t180 != 32231477998446LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x805 = INT16_MIN;
	static int8_t x806 = -1;
	int8_t x807 = 45;
	volatile uint32_t x808 = 25U;

    t181 = ((x805+x806)+(x807<=x808));

    if (t181 != -32769) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x809 = 529U;
	uint64_t x810 = UINT64_MAX;
	uint64_t x811 = 395LLU;
	int16_t x812 = INT16_MAX;
	volatile uint64_t t182 = 10125619147754LLU;

    t182 = ((x809+x810)+(x811<=x812));

    if (t182 != 529LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x813 = 0U;
	int16_t x814 = INT16_MIN;
	int16_t x815 = INT16_MAX;
	int8_t x816 = 1;
	volatile uint32_t t183 = 16125765U;

    t183 = ((x813+x814)+(x815<=x816));

    if (t183 != 4294934528U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x818 = 1;

    t184 = ((x817+x818)+(x819<=x820));

    if (t184 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x821 = INT8_MIN;
	static int32_t x823 = INT32_MIN;
	int16_t x824 = INT16_MAX;
	volatile int32_t t185 = -24421;

    t185 = ((x821+x822)+(x823<=x824));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x825 = 79U;
	uint16_t x826 = 814U;
	uint64_t x827 = UINT64_MAX;
	static uint32_t x828 = 8462124U;

    t186 = ((x825+x826)+(x827<=x828));

    if (t186 != 893) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x832 = 1U;
	volatile int64_t t187 = -12896840175939268LL;

    t187 = ((x829+x830)+(x831<=x832));

    if (t187 != 61195LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x834 = 3;
	int64_t x835 = -1281941201127LL;
	int8_t x836 = -1;
	static volatile int32_t t188 = -266278472;

    t188 = ((x833+x834)+(x835<=x836));

    if (t188 != -2147483644) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x837 = INT8_MAX;
	int8_t x838 = -1;
	int16_t x839 = INT16_MAX;
	int32_t t189 = -54;

    t189 = ((x837+x838)+(x839<=x840));

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x845 = 5U;
	int64_t x846 = INT64_MIN;
	int16_t x847 = -1271;
	int32_t x848 = -1;
	volatile int64_t t190 = -440497LL;

    t190 = ((x845+x846)+(x847<=x848));

    if (t190 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x849 = -1LL;
	static int32_t x850 = INT32_MAX;
	volatile int32_t x851 = -1;

    t191 = ((x849+x850)+(x851<=x852));

    if (t191 != 2147483646LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x857 = 12U;
	volatile int64_t x858 = 464637176LL;
	uint32_t x859 = 1437602546U;
	volatile int64_t t192 = -69008LL;

    t192 = ((x857+x858)+(x859<=x860));

    if (t192 != 464637188LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x861 = INT32_MAX;
	int64_t x863 = INT64_MIN;
	int64_t x864 = -567892943987122535LL;
	volatile int32_t t193 = -31805;

    t193 = ((x861+x862)+(x863<=x864));

    if (t193 != 2147450880) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x865 = UINT16_MAX;
	static uint64_t x867 = UINT64_MAX;
	int16_t x868 = -56;
	static int32_t t194 = 1198643;

    t194 = ((x865+x866)+(x867<=x868));

    if (t194 != 65534) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x870 = -1LL;
	int64_t x872 = -1066686LL;
	volatile int64_t t195 = 16977916630492LL;

    t195 = ((x869+x870)+(x871<=x872));

    if (t195 != 254LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x873 = -1;
	uint16_t x874 = 17934U;
	static int8_t x875 = INT8_MIN;
	static uint8_t x876 = 3U;

    t196 = ((x873+x874)+(x875<=x876));

    if (t196 != 17934) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x877 = INT8_MAX;
	volatile uint64_t x878 = 552677963007733LLU;
	int64_t x879 = INT64_MIN;
	int8_t x880 = INT8_MIN;
	volatile uint64_t t197 = 236468LLU;

    t197 = ((x877+x878)+(x879<=x880));

    if (t197 != 552677963007861LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x881 = -1;
	int8_t x882 = -1;
	uint16_t x883 = 0U;
	volatile int32_t t198 = -65;

    t198 = ((x881+x882)+(x883<=x884));

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x885 = 3674280LLU;
	uint8_t x886 = 4U;
	volatile int8_t x887 = INT8_MIN;
	int64_t x888 = INT64_MIN;
	volatile uint64_t t199 = 1831522304LLU;

    t199 = ((x885+x886)+(x887<=x888));

    if (t199 != 3674284LLU) { NG(); } else { ; }
	
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

