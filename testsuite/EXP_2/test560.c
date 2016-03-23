
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

static uint16_t x2 = 245U;
static int32_t x7 = -1;
static volatile uint64_t t1 = 6062108468860LLU;
int16_t x13 = INT16_MIN;
int16_t x21 = 3497;
static int32_t x25 = INT32_MAX;
int8_t x40 = INT8_MAX;
static volatile uint32_t t8 = 0U;
static volatile int16_t x53 = INT16_MIN;
uint16_t x57 = 94U;
static int32_t x60 = INT32_MIN;
static volatile int32_t t11 = INT32_MIN;
int64_t x65 = INT64_MIN;
uint8_t x82 = UINT8_MAX;
volatile int32_t t15 = 55286;
int8_t x96 = -1;
uint16_t x103 = UINT16_MAX;
uint8_t x107 = UINT8_MAX;
uint16_t x117 = UINT16_MAX;
uint64_t x118 = 1100513637862705165LLU;
int16_t x120 = INT16_MAX;
uint64_t t22 = 933609533970350LLU;
volatile uint16_t x121 = UINT16_MAX;
uint64_t x122 = UINT64_MAX;
int8_t x131 = INT8_MAX;
volatile int32_t x136 = INT32_MIN;
volatile uint64_t t26 = 2727796786LLU;
int8_t x138 = -4;
uint16_t x140 = 15293U;
static volatile int64_t t27 = 1LL;
volatile int32_t x141 = INT32_MIN;
int64_t t28 = -1629550LL;
int32_t x149 = INT32_MAX;
int64_t x152 = INT64_MIN;
int8_t x155 = INT8_MAX;
int8_t x160 = INT8_MAX;
static int8_t x163 = -1;
static volatile uint32_t x164 = 1U;
int32_t x168 = -2;
int8_t x176 = INT8_MIN;
static int8_t x179 = -1;
volatile int32_t t39 = -305;
uint16_t x192 = UINT16_MAX;
volatile int64_t t41 = -10946851423369LL;
int8_t x197 = INT8_MIN;
static volatile uint8_t x198 = 32U;
int32_t x206 = -1;
static int64_t x214 = 3920LL;
uint8_t x220 = 0U;
int64_t x237 = -125608LL;
uint16_t x241 = 0U;
uint32_t x244 = 2323U;
static uint32_t t52 = 554986U;
static int8_t x249 = -1;
uint32_t x252 = UINT32_MAX;
static volatile int64_t x257 = -1LL;
int8_t x261 = INT8_MIN;
static int8_t x265 = INT8_MIN;
static int32_t x274 = 15758;
static int32_t t59 = 26830308;
int16_t x278 = -30;
uint32_t x279 = UINT32_MAX;
int64_t t60 = INT64_MIN;
static int16_t x281 = INT16_MIN;
int64_t t62 = -172LL;
uint8_t x296 = 13U;
static uint8_t x299 = UINT8_MAX;
int64_t x302 = -18135585156LL;
int8_t x303 = 1;
int64_t x336 = INT64_MIN;
uint16_t x342 = UINT16_MAX;
int64_t t71 = 89129111484LL;
int8_t x347 = -1;
int32_t t72 = -442;
int16_t x360 = 1;
static uint64_t x363 = 3LLU;
uint16_t x364 = 13549U;
volatile uint64_t t74 = 127491419927239LLU;
int64_t x368 = INT64_MIN;
int64_t t75 = 1327463752687LL;
uint64_t x371 = 12155222606LLU;
int32_t x376 = -41474;
int32_t x377 = -64481;
int32_t x382 = 9492473;
int64_t x384 = -1LL;
volatile uint64_t x399 = UINT64_MAX;
static int32_t x403 = -1;
static volatile int32_t t81 = -3752;
static uint64_t x427 = 3214032282542466LLU;
int32_t x428 = INT32_MIN;
int64_t x440 = INT64_MIN;
int8_t x449 = -1;
volatile int32_t x457 = -1;
static int32_t x466 = -1;
volatile int64_t t90 = 0LL;
int16_t x474 = -117;
uint8_t x475 = 5U;
int32_t x479 = INT32_MIN;
int64_t t93 = 1811551055222771425LL;
static int8_t x492 = -1;
volatile int32_t t97 = 11;
int64_t t99 = -523462682LL;
int64_t x538 = 66930904768024507LL;
int64_t x542 = -1LL;
int64_t t105 = 394486588675LL;
int16_t x583 = INT16_MIN;
uint8_t x589 = 0U;
int32_t x590 = -1;
static volatile int64_t t109 = -592492345LL;
int64_t x605 = -1LL;
volatile int64_t t111 = -135443249282907LL;
volatile uint64_t t113 = 360252048252649046LLU;
int8_t x647 = 1;
int16_t x653 = INT16_MAX;
int64_t x674 = 86LL;
uint32_t x676 = UINT32_MAX;
volatile int8_t x680 = INT8_MAX;
volatile int32_t t121 = 421893367;
uint16_t x685 = 234U;
volatile int64_t x686 = -1358666981514904LL;
int32_t x687 = -1;
uint32_t x698 = 1410536640U;
uint32_t x700 = 2057244U;
volatile uint16_t x715 = 21568U;
int64_t t126 = 9LL;
int32_t x731 = -1;
int8_t x742 = 2;
volatile uint16_t x743 = UINT16_MAX;
int32_t x744 = 579982;
int16_t x746 = 157;
int16_t x762 = INT16_MAX;
int16_t x763 = -1;
volatile int16_t x772 = INT16_MAX;
volatile int64_t t136 = -660447710LL;
uint64_t x775 = UINT64_MAX;
static uint32_t x788 = 145U;
static uint16_t x799 = UINT16_MAX;
uint64_t t143 = 5458148LLU;
static int16_t x801 = INT16_MIN;
static int64_t x818 = 2478782LL;
uint8_t x819 = 38U;
volatile int64_t t148 = -87691396334904434LL;
static int64_t t149 = -27681902066LL;
int16_t x837 = INT16_MIN;
int64_t x840 = -15012LL;
int16_t x845 = INT16_MIN;
int16_t x847 = 12;
volatile int64_t t151 = INT64_MIN;
int8_t x854 = INT8_MIN;
volatile int8_t x860 = INT8_MIN;
int32_t x876 = INT32_MIN;
int64_t x877 = INT64_MAX;
volatile int64_t t157 = 833927801330281LL;
static int16_t x881 = INT16_MIN;
static int32_t x888 = INT32_MIN;
int32_t x892 = -1;
int16_t x902 = -3363;
uint64_t x904 = UINT64_MAX;
int64_t x907 = -37424LL;
uint8_t x908 = UINT8_MAX;
volatile int64_t t163 = -5932724LL;
uint64_t x909 = 742374LLU;
static volatile uint16_t x916 = 104U;
static volatile uint64_t x918 = 11579781LLU;
uint64_t t166 = 14LLU;
int8_t x924 = -1;
volatile uint64_t t168 = 68528363194LLU;
int32_t t169 = 962604;
static volatile int32_t t171 = 700585;
uint8_t x960 = 12U;
static volatile uint32_t t172 = 204U;
uint32_t x966 = UINT32_MAX;
static int64_t t174 = -179LL;
uint8_t x975 = UINT8_MAX;
int32_t t175 = -821405;
static volatile uint64_t t180 = 1360010233536669956LLU;
int8_t x1013 = INT8_MIN;
int8_t x1021 = 3;
int16_t x1022 = INT16_MIN;
int64_t x1026 = 2005163900LL;
int16_t x1057 = -1171;
int16_t x1060 = -1053;
int32_t x1066 = -1;
static volatile int32_t t189 = 3925;
static uint16_t x1070 = 3151U;
int32_t x1073 = -548784;
static uint16_t x1075 = 1U;
static int32_t t193 = 72;
volatile int32_t x1091 = -113;
static volatile int32_t t196 = 1;
volatile int8_t x1097 = INT8_MIN;
uint32_t x1098 = UINT32_MAX;
int32_t x1100 = 3420;
volatile uint64_t x1105 = UINT64_MAX;
uint64_t x1109 = UINT64_MAX;
static int16_t x1112 = -202;


void f0(void) {
    	volatile uint16_t x1 = 112U;
	int8_t x3 = -1;
	uint16_t x4 = 1225U;
	volatile int32_t t0 = 95;

    t0 = ((x1&(x2*x3))^x4);

    if (t0 != 1225) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	uint64_t x6 = 92864698178873LLU;
	int16_t x8 = -1;

    t1 = ((x5&(x6*x7))^x8);

    if (t1 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	static int8_t x10 = -1;
	int16_t x11 = -1;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 13LLU;

    t2 = ((x9&(x10*x11))^x12);

    if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MIN;
	volatile uint16_t x15 = UINT16_MAX;
	int32_t x16 = 497429252;
	volatile int32_t t3 = 432044281;

    t3 = ((x13&(x14*x15))^x16);

    if (t3 != -500815100) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = -1;
	uint64_t x18 = 974786887328305LLU;
	int16_t x19 = INT16_MIN;
	static volatile int8_t x20 = -1;
	uint64_t t4 = 94411783LLU;

    t4 = ((x17&(x18*x19))^x20);

    if (t4 != 13495072650264346623LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x22 = 378008668LLU;
	int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	uint64_t t5 = 76019512749LLU;

    t5 = ((x21&(x22*x23))^x24);

    if (t5 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x26 = UINT64_MAX;
	static uint16_t x27 = 8942U;
	int64_t x28 = -1LL;
	uint64_t t6 = 38871038LLU;

    t6 = ((x25&(x26*x27))^x28);

    if (t6 != 18446744071562076909LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = -13;
	uint8_t x38 = 2U;
	volatile int8_t x39 = -1;
	int32_t t7 = 5080;

    t7 = ((x37&(x38*x39))^x40);

    if (t7 != -115) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x45 = UINT16_MAX;
	int16_t x46 = -6028;
	static uint32_t x47 = UINT32_MAX;
	uint32_t x48 = UINT32_MAX;

    t8 = ((x45&(x46*x47))^x48);

    if (t8 != 4294961267U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = -438;
	uint16_t x50 = 23U;
	uint64_t x51 = 1749724288914000LLU;
	int32_t x52 = INT32_MAX;
	volatile uint64_t t9 = 13285966685496LLU;

    t9 = ((x49&(x50*x51))^x52);

    if (t9 != 40243656967347199LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x54 = INT64_MAX;
	int16_t x55 = -1;
	static volatile int64_t x56 = INT64_MIN;
	volatile int64_t t10 = 1285661LL;

    t10 = ((x53&(x54*x55))^x56);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint8_t x58 = 64U;
	int8_t x59 = INT8_MIN;

    t11 = ((x57&(x58*x59))^x60);

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x61 = 124040154777870059LLU;
	volatile int32_t x62 = 7858;
	uint8_t x63 = 40U;
	uint32_t x64 = UINT32_MAX;
	volatile uint64_t t12 = 986LLU;

    t12 = ((x61&(x62*x63))^x64);

    if (t12 != 4294948159LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x66 = INT16_MIN;
	int16_t x67 = -1;
	uint32_t x68 = 18267U;
	int64_t t13 = -2694018083707LL;

    t13 = ((x65&(x66*x67))^x68);

    if (t13 != 18267LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = INT8_MIN;
	uint8_t x70 = 53U;
	static volatile int8_t x71 = INT8_MAX;
	int32_t x72 = -417;
	volatile int32_t t14 = 1;

    t14 = ((x69&(x70*x71))^x72);

    if (t14 != -7073) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x81 = -1;
	int8_t x83 = INT8_MAX;
	volatile uint16_t x84 = 863U;

    t15 = ((x81&(x82*x83))^x84);

    if (t15 != 32222) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x89 = 26675U;
	static uint64_t x90 = 1LLU;
	uint32_t x91 = UINT32_MAX;
	int64_t x92 = -114605LL;
	uint64_t t16 = 4081LLU;

    t16 = ((x89&(x90*x91))^x92);

    if (t16 != 18446744073709430880LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x93 = INT16_MIN;
	volatile int8_t x94 = 5;
	volatile int32_t x95 = -1;
	volatile int32_t t17 = 4214327;

    t17 = ((x93&(x94*x95))^x96);

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x101 = -1133846;
	int64_t x102 = -1LL;
	uint32_t x104 = UINT32_MAX;
	volatile int64_t t18 = -131LL;

    t18 = ((x101&(x102*x103))^x104);

    if (t18 != -4293787649LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x105 = 18698882;
	int8_t x106 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	volatile int32_t t19 = -782;

    t19 = ((x105&(x106*x107))^x108);

    if (t19 != -18678016) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x109 = 1U;
	volatile int16_t x110 = -1;
	uint64_t x111 = 32014013815507LLU;
	int32_t x112 = -1;
	static volatile uint64_t t20 = 17289833252412LLU;

    t20 = ((x109&(x110*x111))^x112);

    if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x113 = -1;
	int8_t x114 = -1;
	int16_t x115 = INT16_MIN;
	uint8_t x116 = 119U;
	volatile int32_t t21 = -71997138;

    t21 = ((x113&(x114*x115))^x116);

    if (t21 != 32887) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x119 = 5U;

    t22 = ((x117&(x118*x119))^x120);

    if (t22 != 55230LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x123 = -14948;
	static uint64_t x124 = 3662221LLU;
	static volatile uint64_t t23 = 2664277171LLU;

    t23 = ((x121&(x122*x123))^x124);

    if (t23 != 3660777LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x125 = INT64_MIN;
	int32_t x126 = 1;
	volatile int16_t x127 = -1303;
	int64_t x128 = -3LL;
	volatile int64_t t24 = -31325514695LL;

    t24 = ((x125&(x126*x127))^x128);

    if (t24 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x129 = INT16_MIN;
	uint16_t x130 = 20785U;
	int16_t x132 = -104;
	int32_t t25 = 1;

    t25 = ((x129&(x130*x131))^x132);

    if (t25 != -2621544) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x133 = -1;
	int8_t x134 = -1;
	uint64_t x135 = 328153754LLU;

    t26 = ((x133&(x134*x135))^x136);

    if (t26 != 1819329894LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x137 = 2235U;
	int64_t x139 = 6950770LL;

    t27 = ((x137&(x138*x139))^x140);

    if (t27 != 15237LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x142 = 4LL;
	int16_t x143 = -1;
	volatile int32_t x144 = INT32_MIN;

    t28 = ((x141&(x142*x143))^x144);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x145 = 90015;
	int16_t x146 = -1;
	static uint32_t x147 = UINT32_MAX;
	int16_t x148 = INT16_MIN;
	volatile uint32_t t29 = 7380331U;

    t29 = ((x145&(x146*x147))^x148);

    if (t29 != 4294934529U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x150 = 9U;
	int8_t x151 = INT8_MAX;
	volatile int64_t t30 = -2630047758682LL;

    t30 = ((x149&(x150*x151))^x152);

    if (t30 != -9223372036854774665LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x153 = -1;
	static int8_t x154 = INT8_MIN;
	uint32_t x156 = 14U;
	static volatile uint32_t t31 = 26162U;

    t31 = ((x153&(x154*x155))^x156);

    if (t31 != 4294951054U) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x157 = 2U;
	uint64_t x158 = UINT64_MAX;
	uint16_t x159 = 9673U;
	volatile uint64_t t32 = 2864643131240938LLU;

    t32 = ((x157&(x158*x159))^x160);

    if (t32 != 125LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x161 = 0;
	int8_t x162 = 0;
	static volatile uint32_t t33 = 949507U;

    t33 = ((x161&(x162*x163))^x164);

    if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x165 = 14;
	volatile uint32_t x166 = 473208154U;
	uint64_t x167 = 997573414574759LLU;
	static uint64_t t34 = 1673705LLU;

    t34 = ((x165&(x166*x167))^x168);

    if (t34 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x169 = INT32_MAX;
	static uint32_t x170 = 1931986U;
	uint8_t x171 = 2U;
	static uint8_t x172 = 11U;
	volatile uint32_t t35 = 40291393U;

    t35 = ((x169&(x170*x171))^x172);

    if (t35 != 3863983U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x173 = INT16_MIN;
	int16_t x174 = 0;
	int64_t x175 = INT64_MAX;
	volatile int64_t t36 = 188787558LL;

    t36 = ((x173&(x174*x175))^x176);

    if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x177 = INT16_MIN;
	static int8_t x178 = INT8_MAX;
	int32_t x180 = INT32_MAX;
	volatile int32_t t37 = 302;

    t37 = ((x177&(x178*x179))^x180);

    if (t37 != -2147450881) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x181 = 2396735690135LLU;
	volatile uint32_t x182 = 1880U;
	volatile int32_t x183 = -67266;
	static volatile int8_t x184 = INT8_MIN;
	volatile uint64_t t38 = 20116593915402607LLU;

    t38 = ((x181&(x182*x183))^x184);

    if (t38 != 18446744073574001296LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x185 = 0U;
	int16_t x186 = -1933;
	int32_t x187 = 1;
	int8_t x188 = INT8_MIN;

    t39 = ((x185&(x186*x187))^x188);

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x189 = 3;
	int8_t x190 = INT8_MAX;
	uint8_t x191 = UINT8_MAX;
	int32_t t40 = 642463045;

    t40 = ((x189&(x190*x191))^x192);

    if (t40 != 65534) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x193 = INT64_MIN;
	volatile int8_t x194 = -1;
	volatile int32_t x195 = -451620;
	static volatile int8_t x196 = INT8_MIN;

    t41 = ((x193&(x194*x195))^x196);

    if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x199 = INT8_MIN;
	int64_t x200 = INT64_MAX;
	int64_t t42 = -2318833LL;

    t42 = ((x197&(x198*x199))^x200);

    if (t42 != -9223372036854771713LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x201 = INT16_MAX;
	int8_t x202 = INT8_MAX;
	static int32_t x203 = 8316;
	static uint8_t x204 = 34U;
	volatile int32_t t43 = -38750;

    t43 = ((x201&(x202*x203))^x204);

    if (t43 != 7590) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x205 = INT32_MAX;
	int16_t x207 = INT16_MIN;
	static int16_t x208 = 15;
	volatile int32_t t44 = -22770;

    t44 = ((x205&(x206*x207))^x208);

    if (t44 != 32783) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x209 = 126420839315LLU;
	uint16_t x210 = 3410U;
	int8_t x211 = -27;
	int8_t x212 = -1;
	uint64_t t45 = 1056440423180LLU;

    t45 = ((x209&(x210*x211))^x212);

    if (t45 != 18446743947288737773LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x213 = UINT16_MAX;
	int16_t x215 = -1;
	uint32_t x216 = 186U;
	static int64_t t46 = -193LL;

    t46 = ((x213&(x214*x215))^x216);

    if (t46 != 61450LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x217 = 108100734680LLU;
	int16_t x218 = INT16_MAX;
	uint32_t x219 = UINT32_MAX;
	uint64_t t47 = 0LLU;

    t47 = ((x217&(x218*x219))^x220);

    if (t47 != 726532096LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x221 = -619;
	volatile uint32_t x222 = UINT32_MAX;
	int8_t x223 = INT8_MIN;
	volatile int32_t x224 = -5394488;
	uint32_t t48 = 22U;

    t48 = ((x221&(x222*x223))^x224);

    if (t48 != 4289572680U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x225 = 0;
	uint64_t x226 = 3263114580LLU;
	volatile int64_t x227 = INT64_MAX;
	volatile int8_t x228 = -1;
	volatile uint64_t t49 = UINT64_MAX;

    t49 = ((x225&(x226*x227))^x228);

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x229 = INT8_MIN;
	int64_t x230 = -661121258249660LL;
	int64_t x231 = -1LL;
	uint16_t x232 = 115U;
	volatile int64_t t50 = 10503826LL;

    t50 = ((x229&(x230*x231))^x232);

    if (t50 != 661121258249715LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x238 = -1;
	volatile int8_t x239 = INT8_MIN;
	int8_t x240 = 6;
	int64_t t51 = 5233367631319LL;

    t51 = ((x237&(x238*x239))^x240);

    if (t51 != 6LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MAX;

    t52 = ((x241&(x242*x243))^x244);

    if (t52 != 2323U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x250 = 14;
	static uint64_t x251 = 244562921LLU;
	static uint64_t t53 = 499898343224230LLU;

    t53 = ((x249&(x250*x251))^x252);

    if (t53 != 871086401LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x253 = 18753316LLU;
	uint8_t x254 = 9U;
	int8_t x255 = INT8_MIN;
	volatile uint8_t x256 = UINT8_MAX;
	uint64_t t54 = 257LLU;

    t54 = ((x253&(x254*x255))^x256);

    if (t54 != 18752511LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x258 = 1000823617U;
	volatile uint16_t x259 = 1U;
	volatile int16_t x260 = -5;
	int64_t t55 = -4173015296922849LL;

    t55 = ((x257&(x258*x259))^x260);

    if (t55 != -1000823622LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MIN;
	int8_t x264 = -8;
	volatile int32_t t56 = 2290781;

    t56 = ((x261&(x262*x263))^x264);

    if (t56 != 1073709048) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MAX;
	volatile uint8_t x268 = UINT8_MAX;
	static volatile int32_t t57 = 72;

    t57 = ((x265&(x266*x267))^x268);

    if (t57 != 4161407) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x269 = -1;
	uint8_t x270 = 13U;
	volatile int16_t x271 = -16;
	static int8_t x272 = INT8_MIN;
	int32_t t58 = 452;

    t58 = ((x269&(x270*x271))^x272);

    if (t58 != 176) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x273 = 97005;
	int32_t x275 = -1;
	static int32_t x276 = -11921;

    t59 = ((x273&(x274*x275))^x276);

    if (t59 != -93425) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x277 = INT8_MIN;
	int64_t x280 = INT64_MIN;

    t60 = ((x277&(x278*x279))^x280);

    if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x282 = 15;
	static uint32_t x283 = UINT32_MAX;
	uint64_t x284 = 766935489LLU;
	uint64_t t61 = 6219283782857LLU;

    t61 = ((x281&(x282*x283))^x284);

    if (t61 != 3527999937LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x285 = 548U;
	int64_t x286 = INT64_MIN;
	static uint32_t x287 = 0U;
	volatile int16_t x288 = -379;

    t62 = ((x285&(x286*x287))^x288);

    if (t62 != -379LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x293 = INT64_MIN;
	int32_t x294 = -1;
	uint32_t x295 = 582185529U;
	int64_t t63 = 9610LL;

    t63 = ((x293&(x294*x295))^x296);

    if (t63 != 13LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x297 = INT8_MIN;
	int8_t x298 = 5;
	volatile uint16_t x300 = 3U;
	volatile int32_t t64 = -28022180;

    t64 = ((x297&(x298*x299))^x300);

    if (t64 != 1155) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x301 = UINT16_MAX;
	uint32_t x304 = 1436U;
	volatile int64_t t65 = 1LL;

    t65 = ((x301&(x302*x303))^x304);

    if (t65 != 60384LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x305 = INT16_MIN;
	static int16_t x306 = INT16_MIN;
	int64_t x307 = -1LL;
	uint32_t x308 = UINT32_MAX;
	int64_t t66 = -1LL;

    t66 = ((x305&(x306*x307))^x308);

    if (t66 != 4294934527LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x309 = -1;
	static uint8_t x310 = UINT8_MAX;
	static int64_t x311 = -240LL;
	int8_t x312 = INT8_MAX;
	volatile int64_t t67 = 37010649006582LL;

    t67 = ((x309&(x310*x311))^x312);

    if (t67 != -61297LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x313 = INT32_MAX;
	int8_t x314 = INT8_MAX;
	uint32_t x315 = 372719453U;
	static volatile uint32_t x316 = UINT32_MAX;
	static uint32_t t68 = 145394493U;

    t68 = ((x313&(x314*x315))^x316);

    if (t68 != 4204237020U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x325 = UINT64_MAX;
	int16_t x326 = 0;
	static int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;
	static volatile uint64_t t69 = 1190148320LLU;

    t69 = ((x325&(x326*x327))^x328);

    if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x333 = 175107U;
	uint32_t x334 = UINT32_MAX;
	uint16_t x335 = 13U;
	int64_t t70 = 1103919782684482767LL;

    t70 = ((x333&(x334*x335))^x336);

    if (t70 != -9223372036854600701LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x341 = 1199415615020LL;
	static int8_t x343 = 0;
	int32_t x344 = INT32_MIN;

    t71 = ((x341&(x342*x343))^x344);

    if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x345 = INT32_MAX;
	int16_t x346 = 45;
	volatile uint8_t x348 = 0U;

    t72 = ((x345&(x346*x347))^x348);

    if (t72 != 2147483603) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	static int8_t x359 = INT8_MIN;
	int64_t t73 = 13028786585LL;

    t73 = ((x357&(x358*x359))^x360);

    if (t73 != 129LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x361 = INT32_MIN;
	static int16_t x362 = INT16_MIN;

    t74 = ((x361&(x362*x363))^x364);

    if (t74 != 18446744071562081517LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x365 = INT16_MAX;
	static uint16_t x366 = UINT16_MAX;
	int8_t x367 = -10;

    t75 = ((x365&(x366*x367))^x368);

    if (t75 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x369 = 14051764758LLU;
	int64_t x370 = INT64_MIN;
	static int16_t x372 = INT16_MIN;
	uint64_t t76 = 32352LLU;

    t76 = ((x369&(x370*x371))^x372);

    if (t76 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x373 = 1U;
	volatile int32_t x374 = -3267;
	int16_t x375 = INT16_MIN;
	volatile int32_t t77 = 0;

    t77 = ((x373&(x374*x375))^x376);

    if (t77 != -41474) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x378 = 13U;
	static int8_t x379 = INT8_MAX;
	int64_t x380 = INT64_MIN;
	volatile int64_t t78 = -12343143219601244LL;

    t78 = ((x377&(x378*x379))^x380);

    if (t78 != -9223372036854774765LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x381 = 15798331;
	int64_t x383 = -1LL;
	volatile int64_t t79 = -1701510LL;

    t79 = ((x381&(x382*x383))^x384);

    if (t79 != -6356996LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x397 = UINT8_MAX;
	int64_t x398 = 1529LL;
	int8_t x400 = INT8_MAX;
	volatile uint64_t t80 = 17450541LLU;

    t80 = ((x397&(x398*x399))^x400);

    if (t80 != 120LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x401 = 12;
	int16_t x402 = INT16_MIN;
	uint16_t x404 = 9U;

    t81 = ((x401&(x402*x403))^x404);

    if (t81 != 9) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x409 = INT32_MAX;
	int8_t x410 = INT8_MIN;
	uint64_t x411 = 75612186LLU;
	uint64_t x412 = 4435850232564927LLU;
	static volatile uint64_t t82 = 964011460642635480LLU;

    t82 = ((x409&(x410*x411))^x412);

    if (t82 != 4435850318086079LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x413 = UINT64_MAX;
	volatile int64_t x414 = -9341LL;
	int16_t x415 = -1;
	uint32_t x416 = UINT32_MAX;
	uint64_t t83 = 3422169452588623309LLU;

    t83 = ((x413&(x414*x415))^x416);

    if (t83 != 4294957954LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x425 = 3686548U;
	volatile int16_t x426 = INT16_MIN;
	volatile uint64_t t84 = 63874920973818LLU;

    t84 = ((x425&(x426*x427))^x428);

    if (t84 != 18446744071565737984LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x429 = INT8_MIN;
	int16_t x430 = INT16_MAX;
	uint64_t x431 = 2922472552657LLU;
	int8_t x432 = -1;
	uint64_t t85 = 67LLU;

    t85 = ((x429&(x430*x431))^x432);

    if (t85 != 18350983415576639743LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x433 = INT8_MAX;
	uint16_t x434 = 237U;
	int16_t x435 = INT16_MIN;
	static int64_t x436 = INT64_MIN;
	int64_t t86 = INT64_MIN;

    t86 = ((x433&(x434*x435))^x436);

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x437 = 16272122U;
	static int8_t x438 = -1;
	int16_t x439 = INT16_MIN;
	int64_t t87 = INT64_MIN;

    t87 = ((x437&(x438*x439))^x440);

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x450 = -173236LL;
	uint8_t x451 = 1U;
	volatile int64_t x452 = 801000131617126316LL;
	volatile int64_t t88 = -30LL;

    t88 = ((x449&(x450*x451))^x452);

    if (t88 != -801000131617280800LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x458 = UINT32_MAX;
	int8_t x459 = -4;
	int32_t x460 = INT32_MIN;
	volatile uint32_t t89 = 11850056U;

    t89 = ((x457&(x458*x459))^x460);

    if (t89 != 2147483652U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x465 = -51;
	static int16_t x467 = INT16_MIN;
	int64_t x468 = -1831LL;

    t90 = ((x465&(x466*x467))^x468);

    if (t90 != -34599LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x469 = UINT8_MAX;
	static int32_t x470 = 1458460;
	static int64_t x471 = -1LL;
	int16_t x472 = -1;
	volatile int64_t t91 = 636016587332827373LL;

    t91 = ((x469&(x470*x471))^x472);

    if (t91 != -229LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x473 = -1;
	int8_t x476 = -1;
	volatile int32_t t92 = 124;

    t92 = ((x473&(x474*x475))^x476);

    if (t92 != 584) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x477 = INT32_MAX;
	int64_t x478 = 8LL;
	int64_t x480 = -25140631161332LL;

    t93 = ((x477&(x478*x479))^x480);

    if (t93 != -25140631161332LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x481 = -7;
	int8_t x482 = 14;
	uint64_t x483 = UINT64_MAX;
	int16_t x484 = -400;
	volatile uint64_t t94 = 5251LLU;

    t94 = ((x481&(x482*x483))^x484);

    if (t94 != 384LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x489 = 30U;
	static int8_t x490 = -1;
	int16_t x491 = INT16_MIN;
	volatile int32_t t95 = -4;

    t95 = ((x489&(x490*x491))^x492);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x501 = 2;
	uint8_t x502 = 21U;
	int32_t x503 = 9;
	int16_t x504 = 2224;
	int32_t t96 = 14796987;

    t96 = ((x501&(x502*x503))^x504);

    if (t96 != 2224) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x505 = INT16_MIN;
	volatile int16_t x506 = -1;
	static uint16_t x507 = 1487U;
	int32_t x508 = INT32_MAX;

    t97 = ((x505&(x506*x507))^x508);

    if (t97 != -2147450881) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x521 = INT64_MIN;
	static volatile int16_t x522 = -1;
	static int32_t x523 = INT32_MAX;
	static int8_t x524 = INT8_MAX;
	volatile int64_t t98 = -13743LL;

    t98 = ((x521&(x522*x523))^x524);

    if (t98 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint16_t x533 = UINT16_MAX;
	volatile int8_t x534 = INT8_MIN;
	static uint32_t x535 = 8113U;
	int64_t x536 = -1LL;

    t99 = ((x533&(x534*x535))^x536);

    if (t99 != -10113LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x537 = -1;
	int8_t x539 = INT8_MIN;
	uint16_t x540 = 1U;
	int64_t t100 = 2LL;

    t100 = ((x537&(x538*x539))^x540);

    if (t100 != -8567155810307136895LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x541 = -39LL;
	volatile uint32_t x543 = 124U;
	uint8_t x544 = UINT8_MAX;
	volatile int64_t t101 = -8313110215070279LL;

    t101 = ((x541&(x542*x543))^x544);

    if (t101 != -129LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x549 = -1;
	static volatile uint32_t x550 = 49766U;
	int32_t x551 = 54;
	static volatile int32_t x552 = 201549974;
	uint32_t t102 = 0U;

    t102 = ((x549&(x550*x551))^x552);

    if (t102 != 204106002U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x553 = 39693993912801LLU;
	uint32_t x554 = 32714331U;
	int8_t x555 = 50;
	int64_t x556 = -1LL;
	static uint64_t t103 = 10381432LLU;

    t103 = ((x553&(x554*x555))^x556);

    if (t103 != 18446744072092120639LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x557 = 488699663323525927LL;
	static int16_t x558 = INT16_MIN;
	int16_t x559 = 0;
	uint8_t x560 = UINT8_MAX;
	volatile int64_t t104 = 45484674LL;

    t104 = ((x557&(x558*x559))^x560);

    if (t104 != 255LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x561 = INT64_MAX;
	int16_t x562 = INT16_MIN;
	int64_t x563 = 0LL;
	int32_t x564 = 60490959;

    t105 = ((x561&(x562*x563))^x564);

    if (t105 != 60490959LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x569 = INT8_MIN;
	volatile uint16_t x570 = 3743U;
	int32_t x571 = -224;
	volatile uint64_t x572 = 3681690486LLU;
	uint64_t t106 = 81791LLU;

    t106 = ((x569&(x570*x571))^x572);

    if (t106 != 18446744070027024374LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x581 = 85739811662454878LLU;
	static uint64_t x582 = UINT64_MAX;
	int64_t x584 = INT64_MAX;
	uint64_t t107 = 5420876100LLU;

    t107 = ((x581&(x582*x583))^x584);

    if (t107 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x591 = 1300525070U;
	int64_t x592 = -1LL;
	int64_t t108 = -1162690LL;

    t108 = ((x589&(x590*x591))^x592);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x593 = UINT16_MAX;
	int64_t x594 = -1LL;
	static uint32_t x595 = UINT32_MAX;
	static volatile int8_t x596 = INT8_MIN;

    t109 = ((x593&(x594*x595))^x596);

    if (t109 != -127LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x601 = 142068975965989118LLU;
	volatile uint8_t x602 = 5U;
	uint32_t x603 = 42U;
	static volatile int32_t x604 = 510;
	volatile uint64_t t110 = 3501104272LLU;

    t110 = ((x601&(x602*x603))^x604);

    if (t110 != 300LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x606 = INT16_MIN;
	volatile int64_t x607 = -1LL;
	int8_t x608 = INT8_MIN;

    t111 = ((x605&(x606*x607))^x608);

    if (t111 != -32896LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x617 = UINT16_MAX;
	volatile int64_t x618 = -33725545722579LL;
	uint16_t x619 = UINT16_MAX;
	int16_t x620 = -1;
	int64_t t112 = 6518259578555LL;

    t112 = ((x617&(x618*x619))^x620);

    if (t112 != -13012LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x625 = INT32_MIN;
	volatile uint64_t x626 = UINT64_MAX;
	int16_t x627 = INT16_MIN;
	uint32_t x628 = 15U;

    t113 = ((x625&(x626*x627))^x628);

    if (t113 != 15LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x629 = INT32_MIN;
	uint64_t x630 = 42736118742LLU;
	uint8_t x631 = UINT8_MAX;
	static int8_t x632 = -1;
	uint64_t t114 = 68253108486213532LLU;

    t114 = ((x629&(x630*x631))^x632);

    if (t114 != 18446733177377521663LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x633 = UINT32_MAX;
	int32_t x634 = -6913;
	static int32_t x635 = -1;
	uint8_t x636 = UINT8_MAX;
	uint32_t t115 = 85822U;

    t115 = ((x633&(x634*x635))^x636);

    if (t115 != 7166U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x637 = INT8_MIN;
	uint8_t x638 = 4U;
	static int16_t x639 = -1;
	int32_t x640 = 61;
	volatile int32_t t116 = -167;

    t116 = ((x637&(x638*x639))^x640);

    if (t116 != -67) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x641 = UINT8_MAX;
	int8_t x642 = 0;
	static uint32_t x643 = UINT32_MAX;
	int16_t x644 = INT16_MAX;
	volatile uint32_t t117 = 119U;

    t117 = ((x641&(x642*x643))^x644);

    if (t117 != 32767U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x645 = 85954537LLU;
	int16_t x646 = INT16_MIN;
	volatile int32_t x648 = -1;
	static uint64_t t118 = 4077739321750330933LLU;

    t118 = ((x645&(x646*x647))^x648);

    if (t118 != 18446744073623601151LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x654 = INT64_MIN;
	static uint64_t x655 = UINT64_MAX;
	int8_t x656 = INT8_MIN;
	volatile uint64_t t119 = 17438571875458660LLU;

    t119 = ((x653&(x654*x655))^x656);

    if (t119 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x673 = 1;
	int32_t x675 = INT32_MIN;
	volatile int64_t t120 = -521489264317LL;

    t120 = ((x673&(x674*x675))^x676);

    if (t120 != 4294967295LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x677 = INT32_MIN;
	static int16_t x678 = INT16_MIN;
	volatile int16_t x679 = -3;

    t121 = ((x677&(x678*x679))^x680);

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x688 = INT16_MIN;
	volatile int64_t t122 = -3LL;

    t122 = ((x685&(x686*x687))^x688);

    if (t122 != -32632LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x689 = 26U;
	int16_t x690 = INT16_MIN;
	int16_t x691 = -36;
	int32_t x692 = -227;
	volatile int32_t t123 = 2936448;

    t123 = ((x689&(x690*x691))^x692);

    if (t123 != -227) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x693 = INT8_MIN;
	uint64_t x694 = UINT64_MAX;
	int32_t x695 = INT32_MAX;
	int8_t x696 = INT8_MIN;
	static uint64_t t124 = 1862717354115948303LLU;

    t124 = ((x693&(x694*x695))^x696);

    if (t124 != 2147483520LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x697 = -1;
	uint64_t x699 = 247660LLU;
	uint64_t t125 = 5048312866242LLU;

    t125 = ((x697&(x698*x699))^x700);

    if (t125 != 349333504484636LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x713 = 84346829187689LL;
	uint32_t x714 = 33270349U;
	int64_t x716 = 16963915648699067LL;

    t126 = ((x713&(x714*x715))^x716);

    if (t126 != 16963915627301115LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x717 = INT16_MAX;
	int32_t x718 = -1;
	static uint32_t x719 = 0U;
	int32_t x720 = INT32_MIN;
	static volatile uint32_t t127 = 12U;

    t127 = ((x717&(x718*x719))^x720);

    if (t127 != 2147483648U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x725 = -985332;
	volatile uint16_t x726 = 10U;
	int32_t x727 = -1;
	int16_t x728 = -2;
	volatile int32_t t128 = 39322106;

    t128 = ((x725&(x726*x727))^x728);

    if (t128 != 985338) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x729 = -1LL;
	int16_t x730 = INT16_MAX;
	int8_t x732 = INT8_MIN;
	int64_t t129 = 1534901LL;

    t129 = ((x729&(x730*x731))^x732);

    if (t129 != 32641LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x737 = UINT16_MAX;
	int8_t x738 = 6;
	int64_t x739 = 7188506688533718LL;
	int32_t x740 = 21589;
	volatile int64_t t130 = 1067017520684239601LL;

    t130 = ((x737&(x738*x739))^x740);

    if (t130 != 26961LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x741 = INT8_MIN;
	volatile int32_t t131 = -19816;

    t131 = ((x741&(x742*x743))^x744);

    if (t131 != 599566) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x745 = -1;
	int16_t x747 = 99;
	int64_t x748 = INT64_MIN;
	int64_t t132 = -2010321LL;

    t132 = ((x745&(x746*x747))^x748);

    if (t132 != -9223372036854760265LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x749 = INT32_MAX;
	uint16_t x750 = 49U;
	int64_t x751 = -1LL;
	int32_t x752 = INT32_MAX;
	volatile int64_t t133 = -33694559660523LL;

    t133 = ((x749&(x750*x751))^x752);

    if (t133 != 48LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x753 = UINT32_MAX;
	int16_t x754 = 1;
	int8_t x755 = INT8_MAX;
	int32_t x756 = -162940882;
	uint32_t t134 = 1874539057U;

    t134 = ((x753&(x754*x755))^x756);

    if (t134 != 4132026449U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x761 = INT16_MIN;
	uint32_t x764 = 18515931U;
	uint32_t t135 = 96518U;

    t135 = ((x761&(x762*x763))^x764);

    if (t135 != 4276422619U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x769 = INT64_MAX;
	int8_t x770 = INT8_MIN;
	uint16_t x771 = UINT16_MAX;

    t136 = ((x769&(x770*x771))^x772);

    if (t136 != 9223372036846419839LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x773 = INT8_MIN;
	static uint64_t x774 = 8350684580363324LLU;
	volatile int16_t x776 = 14666;
	uint64_t t137 = 433570LLU;

    t137 = ((x773&(x774*x775))^x776);

    if (t137 != 18438393389129202378LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x777 = 7519386LLU;
	int16_t x778 = INT16_MAX;
	int16_t x779 = INT16_MAX;
	uint8_t x780 = UINT8_MAX;
	static volatile uint64_t t138 = 3LLU;

    t138 = ((x777&(x778*x779))^x780);

    if (t138 != 7471359LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x781 = 1U;
	static uint64_t x782 = 74235640LLU;
	static uint8_t x783 = 11U;
	int64_t x784 = INT64_MIN;
	uint64_t t139 = 74111108737LLU;

    t139 = ((x781&(x782*x783))^x784);

    if (t139 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x785 = 9104591U;
	int16_t x786 = -5237;
	int8_t x787 = INT8_MAX;
	volatile uint32_t t140 = 63773281U;

    t140 = ((x785&(x786*x787))^x788);

    if (t140 != 8439892U) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x789 = INT64_MIN;
	int8_t x790 = 18;
	int16_t x791 = INT16_MAX;
	uint32_t x792 = 945581482U;
	volatile int64_t t141 = 11LL;

    t141 = ((x789&(x790*x791))^x792);

    if (t141 != 945581482LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x793 = INT16_MAX;
	int8_t x794 = INT8_MIN;
	int16_t x795 = INT16_MIN;
	int64_t x796 = -1LL;
	volatile int64_t t142 = 4001903LL;

    t142 = ((x793&(x794*x795))^x796);

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x797 = 80;
	int8_t x798 = -2;
	uint64_t x800 = 9489476LLU;

    t143 = ((x797&(x798*x799))^x800);

    if (t143 != 9489476LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x802 = UINT32_MAX;
	int16_t x803 = INT16_MAX;
	int64_t x804 = INT64_MIN;
	volatile int64_t t144 = -168LL;

    t144 = ((x801&(x802*x803))^x804);

    if (t144 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x813 = -1;
	uint64_t x814 = UINT64_MAX;
	int16_t x815 = 7991;
	int8_t x816 = INT8_MIN;
	uint64_t t145 = 992191409LLU;

    t145 = ((x813&(x814*x815))^x816);

    if (t145 != 8009LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x817 = -63;
	volatile uint32_t x820 = 7U;
	volatile int64_t t146 = -933637393769761477LL;

    t146 = ((x817&(x818*x819))^x820);

    if (t146 != 94193671LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x821 = 870U;
	static int64_t x822 = -1LL;
	static uint64_t x823 = 25766539011392864LLU;
	int16_t x824 = -998;
	uint64_t t147 = 672920943256LLU;

    t147 = ((x821&(x822*x823))^x824);

    if (t147 != 18446744073709551162LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x829 = INT64_MAX;
	int16_t x830 = 4347;
	static int16_t x831 = -2500;
	int32_t x832 = INT32_MIN;

    t148 = ((x829&(x830*x831))^x832);

    if (t148 != -9223372034718159660LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x833 = UINT8_MAX;
	int64_t x834 = -1LL;
	static int32_t x835 = INT32_MIN;
	volatile int8_t x836 = INT8_MIN;

    t149 = ((x833&(x834*x835))^x836);

    if (t149 != -128LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x838 = -1LL;
	static int32_t x839 = 288127;
	int64_t t150 = -10728884LL;

    t150 = ((x837&(x838*x839))^x840);

    if (t150 != 279900LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x846 = 54U;
	volatile int64_t x848 = INT64_MIN;

    t151 = ((x845&(x846*x847))^x848);

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x853 = -48;
	uint8_t x855 = 1U;
	uint32_t x856 = 118857351U;
	uint32_t t152 = 15990979U;

    t152 = ((x853&(x854*x855))^x856);

    if (t152 != 4176109831U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x857 = 114U;
	uint16_t x858 = 15796U;
	static uint16_t x859 = 1364U;
	int32_t t153 = 407706;

    t153 = ((x857&(x858*x859))^x860);

    if (t153 != -112) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x865 = UINT8_MAX;
	int32_t x866 = -23127223;
	uint64_t x867 = 64932334157LLU;
	int32_t x868 = INT32_MIN;
	volatile uint64_t t154 = 222619088454318786LLU;

    t154 = ((x865&(x866*x867))^x868);

    if (t154 != 18446744071562068213LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x869 = 484249663294152467LL;
	uint32_t x870 = 218686102U;
	volatile int8_t x871 = INT8_MIN;
	int8_t x872 = INT8_MAX;
	volatile int64_t t155 = 2021171LL;

    t155 = ((x869&(x870*x871))^x872);

    if (t155 != 1258296703LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x873 = -77;
	volatile uint8_t x874 = UINT8_MAX;
	uint32_t x875 = UINT32_MAX;
	static volatile uint32_t t156 = 24530U;

    t156 = ((x873&(x874*x875))^x876);

    if (t156 != 2147483393U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x878 = -1;
	int32_t x879 = -4760;
	volatile int16_t x880 = -181;

    t157 = ((x877&(x878*x879))^x880);

    if (t157 != -4653LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x882 = 2751116LL;
	static int32_t x883 = INT32_MAX;
	static uint64_t x884 = 677247877LLU;
	uint64_t t158 = 46428358580690375LLU;

    t158 = ((x881&(x882*x883))^x884);

    if (t158 != 5907975945059205LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x885 = INT16_MAX;
	uint16_t x886 = UINT16_MAX;
	static int16_t x887 = INT16_MIN;
	volatile int32_t t159 = INT32_MIN;

    t159 = ((x885&(x886*x887))^x888);

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x889 = INT64_MAX;
	volatile uint8_t x890 = UINT8_MAX;
	int64_t x891 = 0LL;
	volatile int64_t t160 = 38247868LL;

    t160 = ((x889&(x890*x891))^x892);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x893 = 3189636;
	int16_t x894 = INT16_MIN;
	uint32_t x895 = 28350U;
	volatile int64_t x896 = 2897225468237LL;
	int64_t t161 = -8LL;

    t161 = ((x893&(x894*x895))^x896);

    if (t161 != 2897227565389LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x901 = 1067153U;
	volatile int16_t x903 = -1;
	uint64_t t162 = 27LLU;

    t162 = ((x901&(x902*x903))^x904);

    if (t162 != 18446744073709549566LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x905 = UINT32_MAX;
	int32_t x906 = -3904925;

    t163 = ((x905&(x906*x907))^x908);

    if (t163 != 109025167LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x910 = INT8_MIN;
	int64_t x911 = 6001801LL;
	volatile int32_t x912 = -731;
	volatile uint64_t t164 = 1LLU;

    t164 = ((x909&(x910*x911))^x912);

    if (t164 != 18446744073709481637LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x913 = 29U;
	volatile int8_t x914 = INT8_MAX;
	int8_t x915 = INT8_MAX;
	static volatile int32_t t165 = -4069874;

    t165 = ((x913&(x914*x915))^x916);

    if (t165 != 105) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x917 = -15909941953LL;
	static int8_t x919 = 60;
	volatile uint32_t x920 = 1U;

    t166 = ((x917&(x918*x919))^x920);

    if (t166 != 153192749LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x921 = UINT8_MAX;
	int32_t x922 = 0;
	static int64_t x923 = INT64_MAX;
	volatile int64_t t167 = 356378547174521149LL;

    t167 = ((x921&(x922*x923))^x924);

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x929 = -1;
	uint64_t x930 = 1162327335896889668LLU;
	uint8_t x931 = 1U;
	int8_t x932 = -41;

    t168 = ((x929&(x930*x931))^x932);

    if (t168 != 17284416737812661907LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x941 = 2U;
	int16_t x942 = 399;
	static int16_t x943 = INT16_MAX;
	int16_t x944 = INT16_MAX;

    t169 = ((x941&(x942*x943))^x944);

    if (t169 != 32767) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x945 = UINT64_MAX;
	int8_t x946 = -1;
	int16_t x947 = -36;
	int16_t x948 = -1;
	volatile uint64_t t170 = 9704455245267974LLU;

    t170 = ((x945&(x946*x947))^x948);

    if (t170 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x949 = 284U;
	int16_t x950 = 321;
	int8_t x951 = -1;
	volatile int16_t x952 = INT16_MIN;

    t171 = ((x949&(x950*x951))^x952);

    if (t171 != -32740) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x957 = UINT32_MAX;
	static uint8_t x958 = 9U;
	static uint32_t x959 = UINT32_MAX;

    t172 = ((x957&(x958*x959))^x960);

    if (t172 != 4294967291U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x965 = INT16_MIN;
	static volatile int16_t x967 = INT16_MIN;
	uint8_t x968 = 0U;
	static uint32_t t173 = 9848U;

    t173 = ((x965&(x966*x967))^x968);

    if (t173 != 32768U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x969 = UINT16_MAX;
	int16_t x970 = -1;
	static volatile int16_t x971 = -151;
	volatile int64_t x972 = INT64_MIN;

    t174 = ((x969&(x970*x971))^x972);

    if (t174 != -9223372036854775657LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x973 = 3;
	uint16_t x974 = 0U;
	int32_t x976 = -23;

    t175 = ((x973&(x974*x975))^x976);

    if (t175 != -23) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x981 = INT64_MIN;
	volatile int64_t x982 = -879737754900301LL;
	uint16_t x983 = 3U;
	volatile int64_t x984 = 51867866971431LL;
	volatile int64_t t176 = 197LL;

    t176 = ((x981&(x982*x983))^x984);

    if (t176 != -9223320168987804377LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x985 = INT8_MIN;
	volatile int8_t x986 = 2;
	int8_t x987 = -1;
	static int8_t x988 = INT8_MAX;
	volatile int32_t t177 = 1;

    t177 = ((x985&(x986*x987))^x988);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x989 = -1;
	int8_t x990 = -1;
	int64_t x991 = INT64_MAX;
	uint16_t x992 = 2U;
	volatile int64_t t178 = 111804364134LL;

    t178 = ((x989&(x990*x991))^x992);

    if (t178 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x993 = 21;
	volatile int8_t x994 = INT8_MIN;
	int16_t x995 = INT16_MIN;
	static int32_t x996 = INT32_MIN;
	volatile int32_t t179 = INT32_MIN;

    t179 = ((x993&(x994*x995))^x996);

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x997 = INT16_MIN;
	volatile uint64_t x998 = UINT64_MAX;
	int16_t x999 = INT16_MAX;
	int32_t x1000 = INT32_MAX;

    t180 = ((x997&(x998*x999))^x1000);

    if (t180 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1001 = -193;
	uint32_t x1002 = 1009U;
	volatile uint32_t x1003 = 5153U;
	uint8_t x1004 = UINT8_MAX;
	volatile uint32_t t181 = 417291U;

    t181 = ((x1001&(x1002*x1003))^x1004);

    if (t181 != 5199598U) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x1005 = INT32_MIN;
	static uint16_t x1006 = 0U;
	static volatile uint64_t x1007 = UINT64_MAX;
	int16_t x1008 = INT16_MAX;
	volatile uint64_t t182 = 6489LLU;

    t182 = ((x1005&(x1006*x1007))^x1008);

    if (t182 != 32767LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1014 = INT16_MAX;
	static int8_t x1015 = 43;
	uint16_t x1016 = 3962U;
	int32_t t183 = -25;

    t183 = ((x1013&(x1014*x1015))^x1016);

    if (t183 != 1405178) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x1023 = 2028152076LLU;
	volatile int16_t x1024 = 20;
	uint64_t t184 = 5LLU;

    t184 = ((x1021&(x1022*x1023))^x1024);

    if (t184 != 20LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1025 = -1;
	uint64_t x1027 = 268785LLU;
	int16_t x1028 = INT16_MIN;
	volatile uint64_t t185 = 82173740171LLU;

    t185 = ((x1025&(x1026*x1027))^x1028);

    if (t185 != 18446205115730722748LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1029 = -7207;
	uint16_t x1030 = 1515U;
	uint16_t x1031 = 66U;
	static uint8_t x1032 = 18U;
	int32_t t186 = -457;

    t186 = ((x1029&(x1030*x1031))^x1032);

    if (t186 != 98946) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x1041 = 19625202420864LLU;
	static volatile int8_t x1042 = INT8_MIN;
	int16_t x1043 = INT16_MIN;
	static int64_t x1044 = -83839682756777758LL;
	uint64_t t187 = 1110089724859480785LLU;

    t187 = ((x1041&(x1042*x1043))^x1044);

    if (t187 != 18362904390952773858LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1058 = 1;
	static int16_t x1059 = -10;
	volatile int32_t t188 = -3;

    t188 = ((x1057&(x1058*x1059))^x1060);

    if (t188 != 135) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1065 = 64U;
	int8_t x1067 = -1;
	volatile int16_t x1068 = -1;

    t189 = ((x1065&(x1066*x1067))^x1068);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1069 = INT64_MIN;
	int8_t x1071 = 0;
	static int64_t x1072 = -1LL;
	int64_t t190 = -5787LL;

    t190 = ((x1069&(x1070*x1071))^x1072);

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x1074 = 31;
	int8_t x1076 = -1;
	volatile int32_t t191 = -12467501;

    t191 = ((x1073&(x1074*x1075))^x1076);

    if (t191 != -17) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int64_t x1077 = -1LL;
	static int8_t x1078 = INT8_MIN;
	uint64_t x1079 = 971809085935LLU;
	uint64_t x1080 = 754909017966890807LLU;
	static uint64_t t192 = 14164136197006LLU;

    t192 = ((x1077&(x1078*x1079))^x1080);

    if (t192 != 17691959154097571767LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1081 = INT32_MIN;
	int8_t x1082 = -15;
	static int16_t x1083 = -25;
	static int8_t x1084 = INT8_MIN;

    t193 = ((x1081&(x1082*x1083))^x1084);

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1085 = INT16_MAX;
	volatile int16_t x1086 = INT16_MAX;
	uint32_t x1087 = UINT32_MAX;
	uint64_t x1088 = UINT64_MAX;
	static uint64_t t194 = 10LLU;

    t194 = ((x1085&(x1086*x1087))^x1088);

    if (t194 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1089 = 3987905;
	int16_t x1090 = INT16_MAX;
	static int16_t x1092 = -691;
	int32_t t195 = -19;

    t195 = ((x1089&(x1090*x1091))^x1092);

    if (t195 != -295668) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1093 = 8012;
	uint8_t x1094 = 42U;
	volatile int8_t x1095 = INT8_MIN;
	static int16_t x1096 = -5;

    t196 = ((x1093&(x1094*x1095))^x1096);

    if (t196 != -2821) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1099 = INT8_MIN;
	volatile uint32_t t197 = 10838U;

    t197 = ((x1097&(x1098*x1099))^x1100);

    if (t197 != 3548U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1106 = -15;
	uint16_t x1107 = 1546U;
	int32_t x1108 = -29053860;
	static uint64_t t198 = 2LLU;

    t198 = ((x1105&(x1106*x1107))^x1108);

    if (t198 != 29034806LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1110 = -1;
	volatile uint8_t x1111 = 87U;
	uint64_t t199 = 777192113520LLU;

    t199 = ((x1109&(x1110*x1111))^x1112);

    if (t199 != 159LLU) { NG(); } else { ; }
	
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

