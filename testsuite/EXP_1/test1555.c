
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

int32_t x3 = -1;
int16_t x8 = INT16_MAX;
int32_t t1 = -386356849;
int8_t x16 = -1;
volatile int32_t x21 = INT32_MIN;
static uint32_t x25 = UINT32_MAX;
static volatile uint8_t x30 = UINT8_MAX;
volatile uint8_t x33 = UINT8_MAX;
int8_t x34 = -1;
volatile int32_t x36 = INT32_MIN;
static volatile uint16_t x41 = UINT16_MAX;
static uint8_t x44 = UINT8_MAX;
int8_t x49 = -1;
int8_t x50 = INT8_MIN;
int8_t x51 = 0;
int16_t x52 = INT16_MAX;
uint8_t x60 = 62U;
uint64_t x63 = 374138662531363LLU;
uint8_t x65 = 17U;
volatile uint16_t x69 = 16U;
int16_t x70 = INT16_MIN;
uint8_t x82 = 123U;
static volatile int32_t t18 = 424440;
int32_t t19 = -253301577;
int64_t x96 = 58803473LL;
int8_t x98 = INT8_MAX;
static int8_t x100 = INT8_MIN;
static int16_t x101 = -1;
int8_t x105 = INT8_MIN;
static int8_t x108 = INT8_MIN;
int32_t x112 = 295616762;
static volatile uint64_t t27 = 268746874176LLU;
uint8_t x132 = 12U;
int32_t x140 = -421752460;
int32_t x143 = -1;
int8_t x151 = 0;
volatile uint32_t x154 = 49U;
int16_t x157 = INT16_MAX;
int64_t x161 = 8095445647377LL;
int32_t x163 = INT32_MIN;
int64_t x164 = -1LL;
uint8_t x166 = UINT8_MAX;
static int32_t x167 = INT32_MIN;
volatile int64_t t38 = 4018294552LL;
uint16_t x180 = 262U;
int32_t x182 = INT32_MIN;
uint32_t x184 = 38228659U;
static volatile uint32_t t40 = 1109697U;
uint8_t x185 = UINT8_MAX;
int8_t x186 = INT8_MIN;
static uint8_t x187 = 6U;
uint16_t x188 = 12U;
static int16_t x207 = -86;
static int32_t x214 = INT32_MIN;
int16_t x218 = -1;
uint64_t x219 = UINT64_MAX;
uint64_t t47 = 17LLU;
int32_t x232 = 44;
int16_t x236 = INT16_MIN;
volatile int64_t t53 = -204005049226LL;
int64_t x261 = INT64_MIN;
static int32_t x262 = 74360047;
static int8_t x265 = INT8_MIN;
volatile uint32_t t57 = 1880U;
volatile int16_t x290 = INT16_MAX;
volatile uint64_t x295 = UINT64_MAX;
uint32_t t61 = 18U;
static uint16_t x307 = 7U;
int64_t x317 = INT64_MIN;
uint32_t x323 = 500339U;
uint16_t x324 = UINT16_MAX;
uint8_t x327 = 51U;
static int32_t t67 = -177167;
int16_t x329 = INT16_MIN;
int64_t x345 = 993858LL;
static uint8_t x347 = 7U;
int8_t x357 = INT8_MIN;
int32_t x361 = -1;
static int64_t x362 = 260385215823LL;
int8_t x383 = INT8_MIN;
static volatile int8_t x391 = INT8_MIN;
volatile int8_t x397 = -1;
volatile int64_t x410 = INT64_MIN;
static int16_t x417 = 13216;
static int8_t x425 = INT8_MIN;
volatile int32_t t89 = -746391;
int64_t x438 = -2382425148473LL;
int32_t t91 = -825;
int16_t x441 = -1;
int16_t x442 = 1;
int8_t x457 = -1;
uint32_t x458 = 393766U;
volatile int32_t x462 = -1;
int8_t x463 = -2;
uint16_t x464 = UINT16_MAX;
int64_t x468 = INT64_MIN;
static int64_t t97 = -16207LL;
volatile uint8_t x472 = UINT8_MAX;
uint64_t x474 = 1598964502LLU;
static volatile int64_t x477 = 5301186LL;
int16_t x480 = INT16_MIN;
uint32_t x486 = 22U;
int32_t x488 = -501999;
int32_t t102 = 15301945;
int64_t x491 = -10565167798LL;
int64_t x497 = -13688587942947268LL;
int64_t t105 = 58089258748LL;
volatile uint32_t x504 = 850U;
static int64_t x505 = 157934187058756LL;
uint64_t x507 = 25939478088LLU;
volatile uint64_t x508 = 171403969944591009LLU;
uint8_t x512 = 62U;
uint64_t x521 = UINT64_MAX;
volatile uint16_t x529 = UINT16_MAX;
int32_t x533 = INT32_MIN;
volatile int8_t x543 = INT8_MAX;
static int32_t t115 = 354809710;
uint16_t x548 = UINT16_MAX;
volatile int32_t t116 = 10317;
volatile int32_t t117 = -123367717;
int64_t x563 = 3LL;
int16_t x568 = INT16_MIN;
int32_t t119 = 394843314;
uint64_t x570 = 7LLU;
static int8_t x571 = INT8_MIN;
volatile int32_t t121 = -6;
static uint16_t x582 = 561U;
uint16_t x585 = UINT16_MAX;
int32_t x589 = INT32_MIN;
int8_t x592 = 1;
uint16_t x595 = 1946U;
int8_t x600 = -1;
int32_t t128 = 708826;
static int32_t t129 = 331;
int32_t x617 = INT32_MIN;
int64_t x620 = -524LL;
uint8_t x627 = 77U;
static uint64_t x628 = UINT64_MAX;
volatile uint64_t t132 = 24382654LLU;
int32_t x629 = INT32_MIN;
int8_t x630 = -1;
static int64_t x634 = 8LL;
uint8_t x638 = 62U;
volatile uint16_t x639 = 11U;
uint32_t x641 = UINT32_MAX;
uint64_t t136 = UINT64_MAX;
uint16_t x651 = 56U;
uint16_t x656 = UINT16_MAX;
volatile int32_t x659 = -132753964;
static int32_t x670 = INT32_MAX;
volatile uint64_t x673 = 14LLU;
volatile int32_t t144 = -150043105;
int8_t x678 = -1;
int8_t x680 = INT8_MAX;
int16_t x684 = -1;
int32_t x687 = -1;
int8_t x690 = INT8_MIN;
uint16_t x703 = UINT16_MAX;
volatile int16_t x705 = INT16_MIN;
int64_t x712 = 62034LL;
int64_t t152 = -45676825430313LL;
int8_t x714 = INT8_MIN;
volatile int64_t x715 = INT64_MAX;
int8_t x716 = -1;
int32_t x717 = -1;
int16_t x720 = INT16_MIN;
int32_t x721 = -1;
int64_t x725 = -1LL;
volatile uint16_t x726 = UINT16_MAX;
volatile uint16_t x729 = 484U;
volatile int8_t x734 = -1;
int32_t x735 = 99;
int8_t x737 = INT8_MIN;
volatile int16_t x739 = INT16_MIN;
int32_t x742 = 934;
uint8_t x744 = 122U;
int32_t t160 = -88301602;
int16_t x752 = INT16_MAX;
int8_t x773 = INT8_MIN;
uint16_t x774 = 2902U;
volatile int64_t x777 = INT64_MIN;
volatile int32_t x779 = -1;
uint64_t t167 = 92906598866407269LLU;
int16_t x785 = -1;
int64_t x788 = 1294615617985759LL;
uint64_t x791 = 87635478275LLU;
int8_t x792 = INT8_MIN;
volatile int16_t x801 = INT16_MIN;
int64_t x814 = -2163992474LL;
static volatile int8_t x815 = INT8_MIN;
volatile uint16_t x824 = 28519U;
volatile int32_t t176 = 208;
static uint16_t x830 = 1U;
int32_t x838 = INT32_MAX;
static int32_t x839 = INT32_MAX;
volatile int64_t t180 = -28046LL;
int16_t x842 = INT16_MAX;
uint64_t t181 = 992182176667LLU;
int32_t t182 = -9320696;
int8_t x849 = 19;
uint16_t x851 = 35U;
int16_t x854 = -1;
int32_t t184 = -75826494;
int8_t x861 = 1;
uint32_t x863 = 23U;
volatile int32_t x867 = INT32_MIN;
static volatile int32_t x868 = INT32_MAX;
uint32_t x872 = 508254872U;
uint32_t t187 = 26332U;
volatile int16_t x873 = INT16_MIN;
int64_t x876 = 480545LL;
int64_t t190 = 151671536LL;
uint32_t t191 = 2U;
int16_t x892 = -2;
volatile int32_t x897 = 1099218;
static uint16_t x899 = 7282U;
uint32_t t193 = 32U;
volatile int32_t x902 = INT32_MIN;
volatile uint16_t x903 = 65U;
int8_t x905 = -31;
int16_t x912 = -1;
volatile int32_t t198 = -2616839;
volatile int64_t x921 = -1LL;
static int32_t t199 = -3852260;


void f0(void) {
    	int8_t x1 = -9;
	static int64_t x2 = -1LL;
	int32_t x4 = INT32_MAX;
	int32_t t0 = 257606;

    t0 = (((x1==x2)^x3)+x4);

    if (t0 != 2147483646) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 81745239;
	uint64_t x6 = UINT64_MAX;
	int32_t x7 = INT32_MIN;

    t1 = (((x5==x6)^x7)+x8);

    if (t1 != -2147450881) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MAX;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = 2022165;

    t2 = (((x9==x10)^x11)+x12);

    if (t2 != -2147450881) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 7788599022971495LL;
	volatile int32_t x14 = -1;
	int8_t x15 = INT8_MAX;
	volatile int32_t t3 = 3;

    t3 = (((x13==x14)^x15)+x16);

    if (t3 != 126) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = 114U;
	int16_t x18 = -1;
	uint64_t x19 = 15647557732100LLU;
	int8_t x20 = 0;
	uint64_t t4 = 122751890LLU;

    t4 = (((x17==x18)^x19)+x20);

    if (t4 != 15647557732100LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = -1;
	int64_t x23 = INT64_MIN;
	int16_t x24 = INT16_MAX;
	volatile int64_t t5 = 54LL;

    t5 = (((x21==x22)^x23)+x24);

    if (t5 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MIN;
	int8_t x27 = -1;
	uint8_t x28 = 1U;
	volatile int32_t t6 = 58976;

    t6 = (((x25==x26)^x27)+x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = INT64_MAX;
	static int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MAX;
	volatile int64_t t7 = -15284432LL;

    t7 = (((x29==x30)^x31)+x32);

    if (t7 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x35 = -1LL;
	volatile int64_t t8 = -58135129LL;

    t8 = (((x33==x34)^x35)+x36);

    if (t8 != -2147483649LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = -1;
	int32_t x38 = INT32_MIN;
	uint64_t x39 = 946LLU;
	int32_t x40 = INT32_MIN;
	uint64_t t9 = 1799732215618579237LLU;

    t9 = (((x37==x38)^x39)+x40);

    if (t9 != 18446744071562068914LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x42 = 2U;
	int16_t x43 = INT16_MIN;
	volatile int32_t t10 = 14892864;

    t10 = (((x41==x42)^x43)+x44);

    if (t10 != -32513) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t t11 = 1;

    t11 = (((x49==x50)^x51)+x52);

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = INT64_MAX;
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = -513267443884304709LL;
	int64_t t12 = -33848051541LL;

    t12 = (((x57==x58)^x59)+x60);

    if (t12 != -513267443884304647LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x61 = -1;
	int32_t x62 = 40266509;
	int64_t x64 = 60883207839LL;
	uint64_t t13 = 27429212273LLU;

    t13 = (((x61==x62)^x63)+x64);

    if (t13 != 374199545739202LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x66 = INT16_MIN;
	volatile uint16_t x67 = UINT16_MAX;
	uint16_t x68 = 1386U;
	int32_t t14 = 2;

    t14 = (((x65==x66)^x67)+x68);

    if (t14 != 66921) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x71 = INT16_MAX;
	uint16_t x72 = 20473U;
	volatile int32_t t15 = -107434;

    t15 = (((x69==x70)^x71)+x72);

    if (t15 != 53240) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x73 = UINT32_MAX;
	int16_t x74 = INT16_MIN;
	uint8_t x75 = UINT8_MAX;
	uint16_t x76 = 25115U;
	static int32_t t16 = -6390748;

    t16 = (((x73==x74)^x75)+x76);

    if (t16 != 25370) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = -2;
	int8_t x83 = -15;
	uint8_t x84 = 4U;
	static volatile int32_t t17 = 5639792;

    t17 = (((x81==x82)^x83)+x84);

    if (t17 != -11) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x85 = INT32_MIN;
	int64_t x86 = -8567892LL;
	static int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;

    t18 = (((x85==x86)^x87)+x88);

    if (t18 != -65536) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x89 = UINT32_MAX;
	uint8_t x90 = UINT8_MAX;
	static int16_t x91 = -1;
	uint8_t x92 = 9U;

    t19 = (((x89==x90)^x91)+x92);

    if (t19 != 8) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = -1;
	uint32_t x94 = UINT32_MAX;
	volatile uint64_t x95 = UINT64_MAX;
	volatile uint64_t t20 = 8831353LLU;

    t20 = (((x93==x94)^x95)+x96);

    if (t20 != 58803471LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x97 = 304U;
	uint8_t x99 = UINT8_MAX;
	int32_t t21 = -2;

    t21 = (((x97==x98)^x99)+x100);

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MAX;
	int16_t x104 = -1;
	int32_t t22 = -87;

    t22 = (((x101==x102)^x103)+x104);

    if (t22 != 32766) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x106 = -1;
	int16_t x107 = -1;
	static volatile int32_t t23 = 676027;

    t23 = (((x105==x106)^x107)+x108);

    if (t23 != -129) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x109 = INT64_MAX;
	volatile int32_t x110 = 1052665287;
	int8_t x111 = INT8_MIN;
	int32_t t24 = 57;

    t24 = (((x109==x110)^x111)+x112);

    if (t24 != 295616634) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x117 = UINT8_MAX;
	uint64_t x118 = 476LLU;
	int16_t x119 = INT16_MIN;
	uint8_t x120 = 115U;
	int32_t t25 = 224;

    t25 = (((x117==x118)^x119)+x120);

    if (t25 != -32653) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x121 = -1;
	static int32_t x122 = -1014937;
	uint32_t x123 = 1182681490U;
	static int8_t x124 = -1;
	uint32_t t26 = 13692716U;

    t26 = (((x121==x122)^x123)+x124);

    if (t26 != 1182681489U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x125 = -8;
	static int8_t x126 = INT8_MIN;
	uint64_t x127 = UINT64_MAX;
	static volatile int64_t x128 = INT64_MAX;

    t27 = (((x125==x126)^x127)+x128);

    if (t27 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x129 = 3U;
	int8_t x130 = INT8_MIN;
	int8_t x131 = INT8_MIN;
	static volatile int32_t t28 = 183;

    t28 = (((x129==x130)^x131)+x132);

    if (t28 != -116) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = 34;
	volatile int32_t x134 = 36;
	volatile int16_t x135 = INT16_MIN;
	int32_t x136 = -64;
	volatile int32_t t29 = 26;

    t29 = (((x133==x134)^x135)+x136);

    if (t29 != -32832) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x137 = -719213144;
	int64_t x138 = INT64_MAX;
	static uint16_t x139 = 19U;
	static int32_t t30 = -859692;

    t30 = (((x137==x138)^x139)+x140);

    if (t30 != -421752441) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = INT64_MIN;
	int64_t x142 = INT64_MIN;
	int64_t x144 = 505902251654465LL;
	int64_t t31 = 8LL;

    t31 = (((x141==x142)^x143)+x144);

    if (t31 != 505902251654463LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x145 = INT32_MIN;
	int8_t x146 = -1;
	volatile int16_t x147 = INT16_MIN;
	uint8_t x148 = 99U;
	volatile int32_t t32 = 7;

    t32 = (((x145==x146)^x147)+x148);

    if (t32 != -32669) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x149 = INT16_MIN;
	static volatile int32_t x150 = -1005189454;
	int32_t x152 = -1;
	volatile int32_t t33 = 214686597;

    t33 = (((x149==x150)^x151)+x152);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x153 = 46659825U;
	uint64_t x155 = UINT64_MAX;
	static int64_t x156 = 1976204556LL;
	volatile uint64_t t34 = 3162762767396428256LLU;

    t34 = (((x153==x154)^x155)+x156);

    if (t34 != 1976204555LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x158 = INT16_MAX;
	int64_t x159 = 5LL;
	volatile int16_t x160 = -1;
	int64_t t35 = 1954562991LL;

    t35 = (((x157==x158)^x159)+x160);

    if (t35 != 3LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x162 = 167U;
	static volatile int64_t t36 = 466749377820LL;

    t36 = (((x161==x162)^x163)+x164);

    if (t36 != -2147483649LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x165 = INT8_MIN;
	int16_t x168 = 7240;
	int32_t t37 = -30041325;

    t37 = (((x165==x166)^x167)+x168);

    if (t37 != -2147476408) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x169 = INT32_MAX;
	uint64_t x170 = 21332875385LLU;
	static uint32_t x171 = 1641839U;
	int64_t x172 = INT64_MIN;

    t38 = (((x169==x170)^x171)+x172);

    if (t38 != -9223372036853133969LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x177 = -8704766218142802LL;
	uint32_t x178 = 6285630U;
	int8_t x179 = INT8_MIN;
	int32_t t39 = -3992342;

    t39 = (((x177==x178)^x179)+x180);

    if (t39 != 134) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = INT16_MIN;
	int16_t x183 = -901;

    t40 = (((x181==x182)^x183)+x184);

    if (t40 != 38227758U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t t41 = 11268781;

    t41 = (((x185==x186)^x187)+x188);

    if (t41 != 18) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = -9LL;
	static int8_t x190 = INT8_MIN;
	static uint64_t x191 = 142521368076799385LLU;
	int8_t x192 = 0;
	static volatile uint64_t t42 = 1294159LLU;

    t42 = (((x189==x190)^x191)+x192);

    if (t42 != 142521368076799385LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x193 = 26736LLU;
	volatile int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MAX;
	int32_t x196 = -1;
	static int32_t t43 = 590703102;

    t43 = (((x193==x194)^x195)+x196);

    if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x205 = INT16_MIN;
	static int64_t x206 = INT64_MAX;
	volatile uint16_t x208 = UINT16_MAX;
	int32_t t44 = 454202;

    t44 = (((x205==x206)^x207)+x208);

    if (t44 != 65449) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x209 = INT16_MIN;
	int64_t x210 = -12227LL;
	static uint16_t x211 = 397U;
	volatile int16_t x212 = INT16_MIN;
	static int32_t t45 = 0;

    t45 = (((x209==x210)^x211)+x212);

    if (t45 != -32371) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x213 = 185898U;
	volatile uint32_t x215 = 19575U;
	int32_t x216 = -9885;
	uint32_t t46 = 2175978U;

    t46 = (((x213==x214)^x215)+x216);

    if (t46 != 9690U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x217 = 318971931U;
	uint64_t x220 = 26LLU;

    t47 = (((x217==x218)^x219)+x220);

    if (t47 != 25LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x221 = 27U;
	static int64_t x222 = 196LL;
	int32_t x223 = INT32_MIN;
	int64_t x224 = -1LL;
	volatile int64_t t48 = -1898917LL;

    t48 = (((x221==x222)^x223)+x224);

    if (t48 != -2147483649LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x229 = -100002558LL;
	int32_t x230 = 817193;
	int64_t x231 = INT64_MIN;
	volatile int64_t t49 = 3904960LL;

    t49 = (((x229==x230)^x231)+x232);

    if (t49 != -9223372036854775764LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x233 = -5374240357418LL;
	int64_t x234 = 5039740405206438LL;
	static int64_t x235 = 835627729720LL;
	volatile int64_t t50 = -8766794850692914LL;

    t50 = (((x233==x234)^x235)+x236);

    if (t50 != 835627696952LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x241 = 39U;
	volatile uint16_t x242 = 18962U;
	volatile int8_t x243 = 1;
	int64_t x244 = 130798561LL;
	int64_t t51 = 3526439LL;

    t51 = (((x241==x242)^x243)+x244);

    if (t51 != 130798562LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x249 = -1LL;
	int64_t x250 = -1LL;
	volatile int8_t x251 = INT8_MIN;
	uint8_t x252 = 1U;
	volatile int32_t t52 = 2049770;

    t52 = (((x249==x250)^x251)+x252);

    if (t52 != -126) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x257 = 181U;
	int32_t x258 = INT32_MIN;
	static int32_t x259 = -17;
	int64_t x260 = INT64_MAX;

    t53 = (((x257==x258)^x259)+x260);

    if (t53 != 9223372036854775790LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x263 = -602;
	int16_t x264 = INT16_MAX;
	int32_t t54 = -730;

    t54 = (((x261==x262)^x263)+x264);

    if (t54 != 32165) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x266 = 2LLU;
	int32_t x267 = 221939;
	int8_t x268 = -1;
	int32_t t55 = 46724;

    t55 = (((x265==x266)^x267)+x268);

    if (t55 != 221938) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x277 = -1;
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = -1;
	volatile uint32_t x280 = 14888U;
	volatile uint32_t t56 = 66994277U;

    t56 = (((x277==x278)^x279)+x280);

    if (t56 != 14886U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x281 = 5;
	int8_t x282 = INT8_MIN;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = INT32_MIN;

    t57 = (((x281==x282)^x283)+x284);

    if (t57 != 2147483647U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x285 = -588;
	int32_t x286 = INT32_MIN;
	int8_t x287 = -4;
	int32_t x288 = -1;
	volatile int32_t t58 = -33811;

    t58 = (((x285==x286)^x287)+x288);

    if (t58 != -5) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x289 = INT32_MIN;
	uint16_t x291 = 1020U;
	static int64_t x292 = INT64_MIN;
	static volatile int64_t t59 = 39LL;

    t59 = (((x289==x290)^x291)+x292);

    if (t59 != -9223372036854774788LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x293 = -1;
	int8_t x294 = -1;
	static uint32_t x296 = UINT32_MAX;
	uint64_t t60 = 1311653104LLU;

    t60 = (((x293==x294)^x295)+x296);

    if (t60 != 4294967293LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x297 = -1632523;
	volatile int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MAX;
	uint32_t x300 = UINT32_MAX;

    t61 = (((x297==x298)^x299)+x300);

    if (t61 != 32766U) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x301 = -1;
	volatile int8_t x302 = 1;
	volatile uint8_t x303 = UINT8_MAX;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t62 = -6727948;

    t62 = (((x301==x302)^x303)+x304);

    if (t62 != -32513) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x305 = 28U;
	int32_t x306 = 32460266;
	int32_t x308 = 89356043;
	static volatile int32_t t63 = 10164;

    t63 = (((x305==x306)^x307)+x308);

    if (t63 != 89356050) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x313 = UINT32_MAX;
	int8_t x314 = INT8_MIN;
	static volatile int32_t x315 = 1728;
	static int64_t x316 = -3064492148LL;
	volatile int64_t t64 = 0LL;

    t64 = (((x313==x314)^x315)+x316);

    if (t64 != -3064490420LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x318 = INT32_MIN;
	static int32_t x319 = -1;
	uint8_t x320 = 4U;
	int32_t t65 = 39;

    t65 = (((x317==x318)^x319)+x320);

    if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x321 = INT8_MAX;
	int16_t x322 = -3865;
	static volatile uint32_t t66 = 126464195U;

    t66 = (((x321==x322)^x323)+x324);

    if (t66 != 565874U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x325 = 28U;
	uint16_t x326 = UINT16_MAX;
	int8_t x328 = INT8_MAX;

    t67 = (((x325==x326)^x327)+x328);

    if (t67 != 178) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x330 = 217049;
	int8_t x331 = -1;
	int8_t x332 = INT8_MIN;
	static volatile int32_t t68 = -14560520;

    t68 = (((x329==x330)^x331)+x332);

    if (t68 != -129) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x333 = INT8_MAX;
	int64_t x334 = INT64_MAX;
	uint8_t x335 = 14U;
	int32_t x336 = 4083;
	static volatile int32_t t69 = 568141009;

    t69 = (((x333==x334)^x335)+x336);

    if (t69 != 4097) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x337 = -1LL;
	static volatile int64_t x338 = -1LL;
	volatile int64_t x339 = -22804119LL;
	volatile int64_t x340 = INT64_MAX;
	static volatile int64_t t70 = 1985532008401922LL;

    t70 = (((x337==x338)^x339)+x340);

    if (t70 != 9223372036831971687LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x346 = 1034515LLU;
	int64_t x348 = INT64_MIN;
	static int64_t t71 = 132197LL;

    t71 = (((x345==x346)^x347)+x348);

    if (t71 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x349 = INT32_MAX;
	int32_t x350 = INT32_MIN;
	static volatile int32_t x351 = INT32_MAX;
	int16_t x352 = -1095;
	int32_t t72 = 31029865;

    t72 = (((x349==x350)^x351)+x352);

    if (t72 != 2147482552) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x353 = -1;
	uint32_t x354 = UINT32_MAX;
	int16_t x355 = -1;
	static volatile int64_t x356 = INT64_MAX;
	int64_t t73 = 541LL;

    t73 = (((x353==x354)^x355)+x356);

    if (t73 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x358 = 0U;
	volatile int8_t x359 = INT8_MIN;
	uint64_t x360 = UINT64_MAX;
	uint64_t t74 = 372LLU;

    t74 = (((x357==x358)^x359)+x360);

    if (t74 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x363 = INT32_MIN;
	int64_t x364 = 1408011354062078476LL;
	volatile int64_t t75 = -938780415611036LL;

    t75 = (((x361==x362)^x363)+x364);

    if (t75 != 1408011351914594828LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x365 = INT64_MIN;
	int32_t x366 = -3985408;
	volatile uint32_t x367 = UINT32_MAX;
	int8_t x368 = -1;
	volatile uint32_t t76 = 4694531U;

    t76 = (((x365==x366)^x367)+x368);

    if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x369 = -38471LL;
	uint32_t x370 = UINT32_MAX;
	volatile int64_t x371 = -1LL;
	static int16_t x372 = INT16_MIN;
	int64_t t77 = -2937202270174309230LL;

    t77 = (((x369==x370)^x371)+x372);

    if (t77 != -32769LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MAX;
	static int8_t x375 = -1;
	int8_t x376 = INT8_MIN;
	volatile int32_t t78 = -81837751;

    t78 = (((x373==x374)^x375)+x376);

    if (t78 != -129) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x377 = UINT8_MAX;
	uint16_t x378 = 238U;
	static uint8_t x379 = 7U;
	int16_t x380 = -5;
	int32_t t79 = -17984;

    t79 = (((x377==x378)^x379)+x380);

    if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x381 = 108548405217LL;
	int16_t x382 = 64;
	static int16_t x384 = -1;
	volatile int32_t t80 = -21080;

    t80 = (((x381==x382)^x383)+x384);

    if (t80 != -129) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x389 = 1547U;
	int64_t x390 = INT64_MIN;
	static uint8_t x392 = 1U;
	static int32_t t81 = 14;

    t81 = (((x389==x390)^x391)+x392);

    if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x398 = -1;
	uint16_t x399 = 14890U;
	int64_t x400 = INT64_MIN;
	int64_t t82 = 0LL;

    t82 = (((x397==x398)^x399)+x400);

    if (t82 != -9223372036854760917LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x401 = INT8_MAX;
	uint64_t x402 = 55282LLU;
	int16_t x403 = INT16_MIN;
	uint64_t x404 = 123448302LLU;
	static volatile uint64_t t83 = 21608LLU;

    t83 = (((x401==x402)^x403)+x404);

    if (t83 != 123415534LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x405 = -707499031;
	volatile int32_t x406 = 5534169;
	int16_t x407 = INT16_MIN;
	uint16_t x408 = UINT16_MAX;
	int32_t t84 = -2450;

    t84 = (((x405==x406)^x407)+x408);

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x409 = UINT16_MAX;
	int16_t x411 = 894;
	int16_t x412 = INT16_MIN;
	volatile int32_t t85 = 583;

    t85 = (((x409==x410)^x411)+x412);

    if (t85 != -31874) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x413 = INT64_MIN;
	volatile uint16_t x414 = UINT16_MAX;
	uint64_t x415 = 1365LLU;
	uint16_t x416 = 543U;
	static uint64_t t86 = 477894009LLU;

    t86 = (((x413==x414)^x415)+x416);

    if (t86 != 1908LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x418 = INT32_MIN;
	int32_t x419 = INT32_MIN;
	volatile uint32_t x420 = UINT32_MAX;
	volatile uint32_t t87 = 3486313U;

    t87 = (((x417==x418)^x419)+x420);

    if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x421 = 81262LL;
	int32_t x422 = 186194977;
	int8_t x423 = -1;
	int16_t x424 = INT16_MAX;
	int32_t t88 = 131393;

    t88 = (((x421==x422)^x423)+x424);

    if (t88 != 32766) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x426 = -1LL;
	static int8_t x427 = INT8_MIN;
	uint16_t x428 = 111U;

    t89 = (((x425==x426)^x427)+x428);

    if (t89 != -17) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x429 = INT8_MIN;
	int64_t x430 = INT64_MIN;
	int8_t x431 = INT8_MAX;
	uint16_t x432 = UINT16_MAX;
	int32_t t90 = -82307114;

    t90 = (((x429==x430)^x431)+x432);

    if (t90 != 65662) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x437 = UINT32_MAX;
	volatile int16_t x439 = INT16_MIN;
	int32_t x440 = 3328241;

    t91 = (((x437==x438)^x439)+x440);

    if (t91 != 3295473) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x443 = 5296928292LLU;
	uint64_t x444 = 2975139095LLU;
	uint64_t t92 = 495437LLU;

    t92 = (((x441==x442)^x443)+x444);

    if (t92 != 8272067387LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x445 = -18;
	uint16_t x446 = UINT16_MAX;
	uint64_t x447 = 264331324352202066LLU;
	static int8_t x448 = -1;
	uint64_t t93 = 18991421LLU;

    t93 = (((x445==x446)^x447)+x448);

    if (t93 != 264331324352202065LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x449 = INT16_MAX;
	static int16_t x450 = INT16_MIN;
	uint64_t x451 = UINT64_MAX;
	int16_t x452 = -1;
	volatile uint64_t t94 = 1LLU;

    t94 = (((x449==x450)^x451)+x452);

    if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x459 = 3243U;
	static int8_t x460 = INT8_MIN;
	static uint32_t t95 = 331158832U;

    t95 = (((x457==x458)^x459)+x460);

    if (t95 != 3115U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x461 = UINT8_MAX;
	static int32_t t96 = -17829;

    t96 = (((x461==x462)^x463)+x464);

    if (t96 != 65533) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x465 = INT32_MIN;
	static int64_t x466 = INT64_MIN;
	uint16_t x467 = 497U;

    t97 = (((x465==x466)^x467)+x468);

    if (t97 != -9223372036854775311LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x469 = 1U;
	volatile int32_t x470 = -1;
	uint64_t x471 = 128179426871965LLU;
	uint64_t t98 = 2LLU;

    t98 = (((x469==x470)^x471)+x472);

    if (t98 != 128179426872220LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x473 = INT8_MAX;
	volatile int16_t x475 = 2069;
	static int32_t x476 = INT32_MIN;
	int32_t t99 = -1719;

    t99 = (((x473==x474)^x475)+x476);

    if (t99 != -2147481579) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x478 = UINT64_MAX;
	int8_t x479 = INT8_MIN;
	volatile int32_t t100 = 52801;

    t100 = (((x477==x478)^x479)+x480);

    if (t100 != -32896) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x481 = 6;
	volatile int64_t x482 = INT64_MAX;
	uint8_t x483 = UINT8_MAX;
	uint64_t x484 = UINT64_MAX;
	static uint64_t t101 = 56165448582LLU;

    t101 = (((x481==x482)^x483)+x484);

    if (t101 != 254LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x485 = 47;
	int16_t x487 = -1;

    t102 = (((x485==x486)^x487)+x488);

    if (t102 != -502000) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x489 = -1;
	int8_t x490 = INT8_MIN;
	static volatile int32_t x492 = INT32_MAX;
	static volatile int64_t t103 = 12382674628543816LL;

    t103 = (((x489==x490)^x491)+x492);

    if (t103 != -8417684151LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x493 = INT64_MIN;
	int64_t x494 = -1LL;
	int8_t x495 = INT8_MAX;
	static int16_t x496 = INT16_MIN;
	static int32_t t104 = 1;

    t104 = (((x493==x494)^x495)+x496);

    if (t104 != -32641) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x498 = 115600799U;
	int64_t x499 = INT64_MAX;
	int64_t x500 = -1LL;

    t105 = (((x497==x498)^x499)+x500);

    if (t105 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x501 = UINT8_MAX;
	uint8_t x502 = 7U;
	int8_t x503 = INT8_MIN;
	uint32_t t106 = 3246762U;

    t106 = (((x501==x502)^x503)+x504);

    if (t106 != 722U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x506 = UINT64_MAX;
	volatile uint64_t t107 = 40LLU;

    t107 = (((x505==x506)^x507)+x508);

    if (t107 != 171403995884069097LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x509 = -1LL;
	static int32_t x510 = INT32_MIN;
	int8_t x511 = -1;
	int32_t t108 = -17;

    t108 = (((x509==x510)^x511)+x512);

    if (t108 != 61) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x513 = INT8_MIN;
	int32_t x514 = INT32_MIN;
	int32_t x515 = -9656;
	int64_t x516 = -3167700703120726227LL;
	volatile int64_t t109 = 4176710LL;

    t109 = (((x513==x514)^x515)+x516);

    if (t109 != -3167700703120735883LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x517 = 20139825537008LL;
	static volatile int64_t x518 = -449553268LL;
	int32_t x519 = -1;
	int32_t x520 = -1;
	volatile int32_t t110 = 108763;

    t110 = (((x517==x518)^x519)+x520);

    if (t110 != -2) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x522 = UINT32_MAX;
	int8_t x523 = -7;
	uint64_t x524 = UINT64_MAX;
	volatile uint64_t t111 = 861131586744033706LLU;

    t111 = (((x521==x522)^x523)+x524);

    if (t111 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x525 = 21541725527384LL;
	int16_t x526 = 534;
	int32_t x527 = INT32_MAX;
	int16_t x528 = INT16_MIN;
	int32_t t112 = 511937312;

    t112 = (((x525==x526)^x527)+x528);

    if (t112 != 2147450879) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x530 = 430375721217580833LLU;
	int32_t x531 = -34;
	static int8_t x532 = INT8_MIN;
	int32_t t113 = -13096707;

    t113 = (((x529==x530)^x531)+x532);

    if (t113 != -162) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x534 = UINT8_MAX;
	int16_t x535 = -1;
	uint32_t x536 = 14U;
	uint32_t t114 = 421U;

    t114 = (((x533==x534)^x535)+x536);

    if (t114 != 13U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x541 = INT32_MIN;
	uint8_t x542 = 10U;
	static int16_t x544 = 0;

    t115 = (((x541==x542)^x543)+x544);

    if (t115 != 127) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x545 = INT16_MIN;
	volatile int64_t x546 = 0LL;
	int8_t x547 = INT8_MIN;

    t116 = (((x545==x546)^x547)+x548);

    if (t116 != 65407) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x557 = -6076;
	int32_t x558 = INT32_MIN;
	static int8_t x559 = -1;
	int8_t x560 = -3;

    t117 = (((x557==x558)^x559)+x560);

    if (t117 != -4) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x561 = 316325517165590090LL;
	uint8_t x562 = UINT8_MAX;
	int8_t x564 = INT8_MAX;
	volatile int64_t t118 = 2196394335LL;

    t118 = (((x561==x562)^x563)+x564);

    if (t118 != 130LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x565 = -1;
	int8_t x566 = 0;
	int8_t x567 = -1;

    t119 = (((x565==x566)^x567)+x568);

    if (t119 != -32769) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x569 = UINT8_MAX;
	volatile int16_t x572 = INT16_MIN;
	int32_t t120 = -2898759;

    t120 = (((x569==x570)^x571)+x572);

    if (t120 != -32896) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x573 = INT16_MIN;
	int64_t x574 = 100769986102657LL;
	static int16_t x575 = INT16_MIN;
	uint8_t x576 = 58U;

    t121 = (((x573==x574)^x575)+x576);

    if (t121 != -32710) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x581 = INT8_MAX;
	volatile int16_t x583 = INT16_MIN;
	static int32_t x584 = -1;
	volatile int32_t t122 = -839;

    t122 = (((x581==x582)^x583)+x584);

    if (t122 != -32769) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x586 = -1LL;
	volatile int32_t x587 = -2680;
	static uint64_t x588 = UINT64_MAX;
	volatile uint64_t t123 = 17651338124732765LLU;

    t123 = (((x585==x586)^x587)+x588);

    if (t123 != 18446744073709548935LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x590 = 1189;
	int8_t x591 = -63;
	volatile int32_t t124 = -7325;

    t124 = (((x589==x590)^x591)+x592);

    if (t124 != -62) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x593 = -66;
	int16_t x594 = INT16_MIN;
	static volatile uint16_t x596 = 3391U;
	static int32_t t125 = -2;

    t125 = (((x593==x594)^x595)+x596);

    if (t125 != 5337) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x597 = INT16_MIN;
	static int16_t x598 = -30;
	int8_t x599 = INT8_MAX;
	volatile int32_t t126 = 503926;

    t126 = (((x597==x598)^x599)+x600);

    if (t126 != 126) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x601 = INT64_MIN;
	int16_t x602 = -1;
	volatile uint16_t x603 = UINT16_MAX;
	int16_t x604 = INT16_MIN;
	volatile int32_t t127 = 6;

    t127 = (((x601==x602)^x603)+x604);

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x609 = INT64_MAX;
	int8_t x610 = INT8_MAX;
	static uint16_t x611 = 25762U;
	uint16_t x612 = UINT16_MAX;

    t128 = (((x609==x610)^x611)+x612);

    if (t128 != 91297) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x613 = -246186565574617LL;
	static int16_t x614 = 273;
	int16_t x615 = 8;
	int32_t x616 = -1;

    t129 = (((x613==x614)^x615)+x616);

    if (t129 != 7) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x618 = INT16_MIN;
	int64_t x619 = 3189LL;
	volatile int64_t t130 = -845019554LL;

    t130 = (((x617==x618)^x619)+x620);

    if (t130 != 2665LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x621 = -1313837826237782007LL;
	int16_t x622 = -1;
	static int8_t x623 = -1;
	int8_t x624 = INT8_MAX;
	int32_t t131 = 9;

    t131 = (((x621==x622)^x623)+x624);

    if (t131 != 126) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x625 = UINT64_MAX;
	static int8_t x626 = INT8_MIN;

    t132 = (((x625==x626)^x627)+x628);

    if (t132 != 76LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x631 = INT64_MIN;
	int8_t x632 = 4;
	static int64_t t133 = 18281756LL;

    t133 = (((x629==x630)^x631)+x632);

    if (t133 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint16_t x633 = UINT16_MAX;
	uint64_t x635 = 2016901685792811LLU;
	static int32_t x636 = INT32_MAX;
	uint64_t t134 = 7292042266047198LLU;

    t134 = (((x633==x634)^x635)+x636);

    if (t134 != 2016903833276458LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x637 = INT32_MIN;
	volatile int8_t x640 = INT8_MAX;
	int32_t t135 = 145124141;

    t135 = (((x637==x638)^x639)+x640);

    if (t135 != 138) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x642 = INT64_MAX;
	uint64_t x643 = 0LLU;
	volatile int32_t x644 = -1;

    t136 = (((x641==x642)^x643)+x644);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x645 = INT32_MIN;
	uint8_t x646 = 1U;
	static int32_t x647 = 14;
	int16_t x648 = INT16_MIN;
	volatile int32_t t137 = 1;

    t137 = (((x645==x646)^x647)+x648);

    if (t137 != -32754) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x649 = INT8_MAX;
	volatile int8_t x650 = INT8_MIN;
	int8_t x652 = INT8_MIN;
	volatile int32_t t138 = -55;

    t138 = (((x649==x650)^x651)+x652);

    if (t138 != -72) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x653 = -19;
	int16_t x654 = 306;
	uint64_t x655 = UINT64_MAX;
	static uint64_t t139 = 1596198LLU;

    t139 = (((x653==x654)^x655)+x656);

    if (t139 != 65534LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x657 = INT8_MIN;
	int16_t x658 = -22;
	int16_t x660 = -1;
	int32_t t140 = -487337866;

    t140 = (((x657==x658)^x659)+x660);

    if (t140 != -132753965) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x661 = -231845831;
	int16_t x662 = -1;
	int32_t x663 = INT32_MIN;
	uint64_t x664 = 62072529699219LLU;
	uint64_t t141 = 6433894148LLU;

    t141 = (((x661==x662)^x663)+x664);

    if (t141 != 62070382215571LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x665 = INT16_MIN;
	uint16_t x666 = 336U;
	int64_t x667 = -1024184511595220LL;
	int16_t x668 = -1;
	static int64_t t142 = 848161400090LL;

    t142 = (((x665==x666)^x667)+x668);

    if (t142 != -1024184511595221LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x669 = -1;
	int64_t x671 = -19LL;
	uint8_t x672 = UINT8_MAX;
	volatile int64_t t143 = -46LL;

    t143 = (((x669==x670)^x671)+x672);

    if (t143 != 236LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x674 = INT64_MIN;
	int8_t x675 = INT8_MIN;
	volatile int8_t x676 = -1;

    t144 = (((x673==x674)^x675)+x676);

    if (t144 != -129) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x677 = -1;
	int32_t x679 = INT32_MIN;
	static volatile int32_t t145 = 2;

    t145 = (((x677==x678)^x679)+x680);

    if (t145 != -2147483520) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x681 = INT8_MIN;
	static volatile int16_t x682 = 0;
	int16_t x683 = -1;
	int32_t t146 = -211;

    t146 = (((x681==x682)^x683)+x684);

    if (t146 != -2) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x685 = UINT16_MAX;
	int8_t x686 = INT8_MIN;
	static volatile int32_t x688 = -460579;
	static int32_t t147 = -121;

    t147 = (((x685==x686)^x687)+x688);

    if (t147 != -460580) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x689 = INT8_MIN;
	static int8_t x691 = -1;
	static uint8_t x692 = 23U;
	int32_t t148 = -3023123;

    t148 = (((x689==x690)^x691)+x692);

    if (t148 != 21) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x697 = 612274759121LLU;
	static int16_t x698 = -1;
	volatile int16_t x699 = -1;
	static volatile uint32_t x700 = UINT32_MAX;
	uint32_t t149 = 70435U;

    t149 = (((x697==x698)^x699)+x700);

    if (t149 != 4294967294U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x701 = UINT8_MAX;
	uint32_t x702 = 208765533U;
	static int8_t x704 = INT8_MIN;
	int32_t t150 = 1870366;

    t150 = (((x701==x702)^x703)+x704);

    if (t150 != 65407) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x706 = UINT16_MAX;
	uint32_t x707 = UINT32_MAX;
	static volatile int32_t x708 = INT32_MAX;
	uint32_t t151 = 1U;

    t151 = (((x705==x706)^x707)+x708);

    if (t151 != 2147483646U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x709 = -1;
	uint16_t x710 = UINT16_MAX;
	int64_t x711 = -1780608LL;

    t152 = (((x709==x710)^x711)+x712);

    if (t152 != -1718574LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x713 = UINT8_MAX;
	int64_t t153 = -1LL;

    t153 = (((x713==x714)^x715)+x716);

    if (t153 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x718 = 37373510U;
	int16_t x719 = INT16_MIN;
	static volatile int32_t t154 = 33949996;

    t154 = (((x717==x718)^x719)+x720);

    if (t154 != -65536) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x722 = 8U;
	static volatile int32_t x723 = -8270;
	int32_t x724 = -102;
	static volatile int32_t t155 = -56409;

    t155 = (((x721==x722)^x723)+x724);

    if (t155 != -8372) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x727 = -62;
	int16_t x728 = -1;
	int32_t t156 = 200;

    t156 = (((x725==x726)^x727)+x728);

    if (t156 != -63) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x730 = -1LL;
	uint64_t x731 = 445124LLU;
	uint32_t x732 = 1U;
	uint64_t t157 = 1020291266LLU;

    t157 = (((x729==x730)^x731)+x732);

    if (t157 != 445125LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int8_t x733 = INT8_MAX;
	uint64_t x736 = 133718677902687LLU;
	volatile uint64_t t158 = 23806105LLU;

    t158 = (((x733==x734)^x735)+x736);

    if (t158 != 133718677902786LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x738 = -1;
	uint16_t x740 = UINT16_MAX;
	static volatile int32_t t159 = 893;

    t159 = (((x737==x738)^x739)+x740);

    if (t159 != 32767) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x741 = INT64_MIN;
	static uint16_t x743 = UINT16_MAX;

    t160 = (((x741==x742)^x743)+x744);

    if (t160 != 65657) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x745 = INT64_MIN;
	uint64_t x746 = 594LLU;
	int64_t x747 = -52517168LL;
	int8_t x748 = INT8_MIN;
	volatile int64_t t161 = -16909LL;

    t161 = (((x745==x746)^x747)+x748);

    if (t161 != -52517296LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x749 = UINT32_MAX;
	static int64_t x750 = INT64_MAX;
	volatile uint32_t x751 = 6216845U;
	volatile uint32_t t162 = 62080821U;

    t162 = (((x749==x750)^x751)+x752);

    if (t162 != 6249612U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x753 = INT16_MIN;
	int8_t x754 = -1;
	static int64_t x755 = -1LL;
	static int16_t x756 = -1;
	volatile int64_t t163 = -3018824793044LL;

    t163 = (((x753==x754)^x755)+x756);

    if (t163 != -2LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x757 = 403U;
	volatile int8_t x758 = 3;
	int32_t x759 = -1954726;
	int16_t x760 = -24;
	int32_t t164 = 128;

    t164 = (((x757==x758)^x759)+x760);

    if (t164 != -1954750) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x769 = 61954337321799277LL;
	static int16_t x770 = INT16_MIN;
	int32_t x771 = 51;
	int32_t x772 = INT32_MIN;
	int32_t t165 = -214844;

    t165 = (((x769==x770)^x771)+x772);

    if (t165 != -2147483597) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x775 = INT16_MAX;
	uint64_t x776 = 218LLU;
	volatile uint64_t t166 = 450136898093928748LLU;

    t166 = (((x773==x774)^x775)+x776);

    if (t166 != 32985LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x778 = INT16_MIN;
	uint64_t x780 = UINT64_MAX;

    t167 = (((x777==x778)^x779)+x780);

    if (t167 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x786 = UINT16_MAX;
	int16_t x787 = -34;
	volatile int64_t t168 = 480798092LL;

    t168 = (((x785==x786)^x787)+x788);

    if (t168 != 1294615617985725LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x789 = 91184585U;
	int64_t x790 = 26173315753LL;
	static volatile uint64_t t169 = 983444975085950680LLU;

    t169 = (((x789==x790)^x791)+x792);

    if (t169 != 87635478147LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x793 = 41254569LLU;
	static int64_t x794 = -1LL;
	int32_t x795 = 42;
	static uint32_t x796 = UINT32_MAX;
	static volatile uint32_t t170 = 57U;

    t170 = (((x793==x794)^x795)+x796);

    if (t170 != 41U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x797 = INT64_MIN;
	int32_t x798 = -1;
	static int64_t x799 = INT64_MIN;
	static uint8_t x800 = 121U;
	int64_t t171 = -775789LL;

    t171 = (((x797==x798)^x799)+x800);

    if (t171 != -9223372036854775687LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x802 = 3712LLU;
	volatile int16_t x803 = INT16_MAX;
	int8_t x804 = INT8_MAX;
	int32_t t172 = -383821202;

    t172 = (((x801==x802)^x803)+x804);

    if (t172 != 32894) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x805 = 99615850917LLU;
	volatile int8_t x806 = INT8_MAX;
	uint8_t x807 = 1U;
	volatile uint16_t x808 = UINT16_MAX;
	static volatile int32_t t173 = -24794;

    t173 = (((x805==x806)^x807)+x808);

    if (t173 != 65536) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x809 = 30809945521618LL;
	static uint8_t x810 = 8U;
	int64_t x811 = -13LL;
	int16_t x812 = -1;
	volatile int64_t t174 = 24531938112LL;

    t174 = (((x809==x810)^x811)+x812);

    if (t174 != -14LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x813 = -1;
	uint32_t x816 = UINT32_MAX;
	uint32_t t175 = 10U;

    t175 = (((x813==x814)^x815)+x816);

    if (t175 != 4294967167U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x821 = INT8_MIN;
	uint64_t x822 = 48130852748275LLU;
	int16_t x823 = -1;

    t176 = (((x821==x822)^x823)+x824);

    if (t176 != 28518) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x825 = INT8_MAX;
	int8_t x826 = INT8_MAX;
	uint16_t x827 = UINT16_MAX;
	uint64_t x828 = 266146107341574LLU;
	uint64_t t177 = 70LLU;

    t177 = (((x825==x826)^x827)+x828);

    if (t177 != 266146107407108LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x829 = 8070LL;
	uint64_t x831 = 1015666LLU;
	volatile int16_t x832 = INT16_MIN;
	uint64_t t178 = 1989773144477LLU;

    t178 = (((x829==x830)^x831)+x832);

    if (t178 != 982898LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x833 = 3LL;
	int8_t x834 = INT8_MIN;
	int32_t x835 = INT32_MIN;
	int16_t x836 = INT16_MAX;
	volatile int32_t t179 = 138896;

    t179 = (((x833==x834)^x835)+x836);

    if (t179 != -2147450881) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x837 = UINT64_MAX;
	int64_t x840 = -1LL;

    t180 = (((x837==x838)^x839)+x840);

    if (t180 != 2147483646LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x841 = -2823;
	uint64_t x843 = UINT64_MAX;
	uint8_t x844 = 2U;

    t181 = (((x841==x842)^x843)+x844);

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x845 = UINT32_MAX;
	static volatile int8_t x846 = -18;
	uint16_t x847 = UINT16_MAX;
	int8_t x848 = INT8_MAX;

    t182 = (((x845==x846)^x847)+x848);

    if (t182 != 65662) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x850 = INT32_MIN;
	static volatile int64_t x852 = 1LL;
	volatile int64_t t183 = 2397764932533434178LL;

    t183 = (((x849==x850)^x851)+x852);

    if (t183 != 36LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x853 = INT64_MIN;
	int8_t x855 = INT8_MAX;
	uint8_t x856 = 2U;

    t184 = (((x853==x854)^x855)+x856);

    if (t184 != 129) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x862 = INT64_MIN;
	static uint32_t x864 = 247725U;
	volatile uint32_t t185 = 497845677U;

    t185 = (((x861==x862)^x863)+x864);

    if (t185 != 247748U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x865 = -1;
	int16_t x866 = 3216;
	int32_t t186 = 396;

    t186 = (((x865==x866)^x867)+x868);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x869 = -1;
	volatile int64_t x870 = -50866LL;
	int8_t x871 = INT8_MIN;

    t187 = (((x869==x870)^x871)+x872);

    if (t187 != 508254744U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x874 = INT64_MAX;
	volatile int64_t x875 = -1LL;
	volatile int64_t t188 = -670LL;

    t188 = (((x873==x874)^x875)+x876);

    if (t188 != 480544LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x877 = INT32_MIN;
	static int64_t x878 = -1LL;
	static uint64_t x879 = UINT64_MAX;
	int8_t x880 = 1;
	static volatile uint64_t t189 = 107412231184LLU;

    t189 = (((x877==x878)^x879)+x880);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x881 = 6689793U;
	int64_t x882 = INT64_MIN;
	static int8_t x883 = INT8_MIN;
	int64_t x884 = INT64_MAX;

    t190 = (((x881==x882)^x883)+x884);

    if (t190 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x885 = INT8_MAX;
	volatile int64_t x886 = -6535LL;
	static int32_t x887 = 457245587;
	uint32_t x888 = UINT32_MAX;

    t191 = (((x885==x886)^x887)+x888);

    if (t191 != 457245586U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x889 = INT16_MAX;
	static int64_t x890 = INT64_MAX;
	int8_t x891 = -1;
	volatile int32_t t192 = -2028544;

    t192 = (((x889==x890)^x891)+x892);

    if (t192 != -3) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x898 = UINT64_MAX;
	uint32_t x900 = UINT32_MAX;

    t193 = (((x897==x898)^x899)+x900);

    if (t193 != 7281U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x901 = 12;
	int64_t x904 = -7603553LL;
	int64_t t194 = 1LL;

    t194 = (((x901==x902)^x903)+x904);

    if (t194 != -7603488LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x906 = -1LL;
	volatile int64_t x907 = -605938690583LL;
	static int64_t x908 = INT64_MAX;
	volatile int64_t t195 = -50138525681765LL;

    t195 = (((x905==x906)^x907)+x908);

    if (t195 != 9223371430916085224LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x909 = INT8_MIN;
	uint64_t x910 = 492572LLU;
	static volatile int8_t x911 = -1;
	volatile int32_t t196 = -26584106;

    t196 = (((x909==x910)^x911)+x912);

    if (t196 != -2) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x913 = -1;
	static int16_t x914 = INT16_MIN;
	volatile int8_t x915 = INT8_MIN;
	int32_t x916 = INT32_MAX;
	int32_t t197 = 213379;

    t197 = (((x913==x914)^x915)+x916);

    if (t197 != 2147483519) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x917 = 408190U;
	int32_t x918 = -13;
	int32_t x919 = INT32_MIN;
	int16_t x920 = 994;

    t198 = (((x917==x918)^x919)+x920);

    if (t198 != -2147482654) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x922 = 6U;
	int8_t x923 = INT8_MIN;
	int32_t x924 = 3;

    t199 = (((x921==x922)^x923)+x924);

    if (t199 != -125) { NG(); } else { ; }
	
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

