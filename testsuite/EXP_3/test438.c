
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

static volatile int8_t x3 = -9;
uint32_t x16 = UINT32_MAX;
uint8_t x18 = 6U;
int32_t x23 = -24738;
static uint32_t t3 = 6969395U;
static int64_t x41 = -1327296LL;
uint8_t x44 = 27U;
int64_t x46 = INT64_MIN;
uint32_t x47 = 1725U;
volatile int32_t x56 = INT32_MIN;
uint16_t x59 = 16U;
uint8_t x61 = UINT8_MAX;
volatile int32_t t8 = 93;
int32_t x72 = INT32_MIN;
uint8_t x74 = 4U;
uint16_t x77 = UINT16_MAX;
int16_t x99 = -1472;
static int32_t x100 = -1;
uint32_t t15 = 62243624U;
int32_t x108 = -1;
static int8_t x114 = -1;
uint32_t x127 = 15U;
uint16_t x129 = 3215U;
uint64_t x130 = 44067319319948234LLU;
int16_t x149 = INT16_MIN;
int8_t x152 = INT8_MIN;
int32_t t23 = 2091;
static volatile int64_t t24 = -2LL;
uint16_t x187 = 5224U;
volatile int32_t t26 = 169623;
uint8_t x201 = 25U;
int64_t x204 = -1LL;
int64_t x206 = -1LL;
int16_t x208 = -1;
static int8_t x210 = INT8_MAX;
static int8_t x211 = -1;
int64_t t31 = -1276093LL;
volatile uint64_t t34 = 23376979LLU;
int64_t t37 = 2LL;
int8_t x253 = -1;
volatile int32_t x256 = -1;
int16_t x268 = 2;
uint32_t t39 = 13U;
int8_t x272 = INT8_MAX;
uint64_t x283 = 755358535027661119LLU;
volatile int32_t x285 = INT32_MAX;
uint8_t x301 = 0U;
static int32_t x309 = -381898;
int64_t x312 = -450337LL;
int8_t x329 = INT8_MIN;
uint64_t t50 = 273954592513800918LLU;
uint32_t t52 = 179U;
int32_t x353 = 1059;
volatile int16_t x364 = -3;
static volatile int32_t t54 = 131061663;
volatile int64_t x365 = INT64_MAX;
int32_t x366 = INT32_MIN;
int16_t x375 = -62;
uint16_t x384 = UINT16_MAX;
volatile uint16_t x390 = 157U;
volatile int64_t t58 = -3581820351LL;
static volatile uint32_t t59 = 1U;
int8_t x402 = INT8_MIN;
volatile uint32_t t60 = 608U;
static volatile int64_t t61 = -19837433501237LL;
static int32_t x418 = 17;
uint8_t x432 = UINT8_MAX;
uint8_t x433 = UINT8_MAX;
int64_t x434 = INT64_MIN;
int64_t x437 = 13074854395725862LL;
static int8_t x447 = INT8_MIN;
static int32_t t69 = 13966;
volatile uint32_t x475 = UINT32_MAX;
volatile uint32_t t70 = 1U;
static volatile int64_t t71 = -5665870LL;
uint16_t x492 = 1704U;
int8_t x498 = 45;
uint16_t x507 = 869U;
int32_t x508 = -1586;
volatile int32_t t76 = -1;
uint8_t x511 = UINT8_MAX;
static int64_t t77 = -1481LL;
int32_t x521 = INT32_MIN;
int16_t x525 = -1;
int8_t x528 = -1;
int32_t t80 = 6;
int64_t t81 = 11446LL;
volatile int64_t t82 = 27156864LL;
volatile uint32_t x553 = 92U;
static uint16_t x561 = 14849U;
int32_t x564 = -1;
int16_t x573 = INT16_MAX;
volatile int64_t x587 = 103138770069387LL;
int16_t x588 = 19;
static uint64_t t90 = 2454896LLU;
volatile int32_t x589 = INT32_MIN;
volatile int16_t x591 = -1;
volatile int8_t x592 = -1;
uint8_t x593 = 24U;
uint64_t t93 = 5626681920002LLU;
uint16_t x605 = UINT16_MAX;
int32_t x618 = INT32_MIN;
int16_t x626 = 18;
int64_t x641 = -176016374341847160LL;
static int8_t x642 = INT8_MIN;
volatile int64_t x654 = -7340686683LL;
volatile int64_t t101 = -900LL;
static volatile uint64_t t102 = 1795707LLU;
static int16_t x682 = -1;
uint16_t x683 = 1U;
volatile uint32_t t106 = 18056056U;
static volatile int64_t t107 = -40173445LL;
int32_t x694 = INT32_MAX;
uint64_t t109 = 9216653737017887831LLU;
volatile uint16_t x705 = UINT16_MAX;
int16_t x706 = INT16_MIN;
int8_t x712 = -1;
volatile int16_t x715 = -68;
uint8_t x716 = 4U;
int32_t x717 = INT32_MIN;
uint8_t x718 = UINT8_MAX;
volatile int32_t t114 = 1879;
volatile int16_t x728 = -1;
volatile uint32_t t119 = 141387U;
volatile int8_t x750 = INT8_MIN;
int8_t x759 = -2;
volatile int8_t x760 = INT8_MIN;
int16_t x761 = 22;
int8_t x763 = INT8_MIN;
int32_t x766 = INT32_MAX;
int8_t x771 = INT8_MAX;
volatile uint32_t t125 = 441U;
int8_t x773 = INT8_MIN;
int32_t x774 = -1;
volatile int64_t x776 = 16032194809782514LL;
volatile int64_t x781 = -1LL;
uint64_t t128 = 3223167593LLU;
int8_t x794 = 5;
int32_t x829 = -1;
int16_t x840 = -2;
volatile int64_t x844 = INT64_MAX;
volatile int64_t t136 = 3622LL;
uint32_t x846 = 20635U;
volatile uint64_t t139 = 23162070LLU;
int32_t x869 = -45400;
static uint16_t x873 = 353U;
static uint64_t t141 = 8459489284078LLU;
int64_t x885 = 1876454680202470874LL;
volatile int16_t x887 = INT16_MIN;
uint32_t x891 = UINT32_MAX;
int32_t x897 = -1;
volatile int16_t x904 = -5147;
int16_t x915 = INT16_MIN;
static volatile uint32_t x926 = UINT32_MAX;
uint16_t x934 = 3U;
int8_t x936 = INT8_MIN;
static int64_t t153 = -4327457891440540786LL;
int32_t x950 = -1;
uint8_t x954 = 12U;
static volatile uint8_t x955 = UINT8_MAX;
int64_t t157 = -68661233370449LL;
volatile int64_t x981 = 4029366901165034185LL;
uint32_t x985 = 1350363522U;
int64_t t159 = -1091699428375424LL;
static int16_t x998 = 21;
int64_t t162 = -4373LL;
int8_t x1028 = INT8_MAX;
int16_t x1039 = INT16_MAX;
volatile int64_t t166 = -474104816978839252LL;
uint32_t x1064 = UINT32_MAX;
static volatile int16_t x1076 = -13;
uint8_t x1087 = UINT8_MAX;
uint8_t x1101 = UINT8_MAX;
volatile int64_t x1109 = INT64_MIN;
uint16_t x1127 = UINT16_MAX;
volatile int64_t x1129 = INT64_MIN;
uint64_t t181 = 989170030LLU;
volatile int64_t x1146 = 67180837142LL;
static uint64_t x1149 = UINT64_MAX;
volatile uint64_t t184 = 93735LLU;
volatile int16_t x1157 = INT16_MAX;
volatile int16_t x1163 = INT16_MIN;
uint8_t x1198 = 3U;
int32_t x1199 = -1;
volatile uint64_t t193 = 1LLU;
int8_t x1213 = -4;
int16_t x1216 = INT16_MAX;
int8_t x1224 = INT8_MIN;
int32_t x1231 = -10253;
static uint64_t x1255 = 5LLU;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	uint8_t x2 = 126U;
	int32_t x4 = -1;
	volatile int32_t t0 = -2590;

    t0 = ((x1/x2)/(x3*x4));

    if (t0 != 1893724) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x13 = -1;
	volatile int16_t x14 = INT16_MAX;
	volatile int32_t x15 = -1;
	uint32_t t1 = 6U;

    t1 = ((x13/x14)/(x15*x16));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x17 = 5;
	int16_t x19 = INT16_MAX;
	uint16_t x20 = 1U;
	volatile int32_t t2 = -1425;

    t2 = ((x17/x18)/(x19*x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = INT8_MIN;
	uint16_t x22 = UINT16_MAX;
	static uint32_t x24 = 16322128U;

    t3 = ((x21/x22)/(x23*x24));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x42 = -1;
	int16_t x43 = INT16_MIN;
	volatile int64_t t4 = -2295LL;

    t4 = ((x41/x42)/(x43*x44));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x45 = INT16_MIN;
	static int16_t x48 = INT16_MIN;
	int64_t t5 = -140026984869461LL;

    t5 = ((x45/x46)/(x47*x48));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x53 = -1;
	uint64_t x54 = UINT64_MAX;
	uint64_t x55 = 47529LLU;
	uint64_t t6 = 78281921120855384LLU;

    t6 = ((x53/x54)/(x55*x56));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x57 = -1667074985LL;
	static int16_t x58 = INT16_MAX;
	uint32_t x60 = 100U;
	static volatile int64_t t7 = 48194559809LL;

    t7 = ((x57/x58)/(x59*x60));

    if (t7 != -31LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x62 = 16U;
	int32_t x63 = -1;
	uint8_t x64 = UINT8_MAX;

    t8 = ((x61/x62)/(x63*x64));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x65 = 0U;
	static uint16_t x66 = UINT16_MAX;
	uint64_t x67 = 18727767834600LLU;
	static uint64_t x68 = UINT64_MAX;
	static uint64_t t9 = 60LLU;

    t9 = ((x65/x66)/(x67*x68));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x69 = -1;
	static int64_t x70 = -247476LL;
	volatile int64_t x71 = -1LL;
	int64_t t10 = 991207414091LL;

    t10 = ((x69/x70)/(x71*x72));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x73 = 1U;
	uint8_t x75 = UINT8_MAX;
	uint16_t x76 = UINT16_MAX;
	static volatile int32_t t11 = 16427754;

    t11 = ((x73/x74)/(x75*x76));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x78 = UINT64_MAX;
	volatile int8_t x79 = -1;
	uint32_t x80 = 896U;
	volatile uint64_t t12 = 1399894LLU;

    t12 = ((x77/x78)/(x79*x80));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x85 = -1LL;
	int64_t x86 = INT64_MIN;
	volatile int32_t x87 = -1027150933;
	uint64_t x88 = UINT64_MAX;
	uint64_t t13 = 112174129307LLU;

    t13 = ((x85/x86)/(x87*x88));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x97 = INT64_MIN;
	uint16_t x98 = UINT16_MAX;
	int64_t t14 = 2999LL;

    t14 = ((x97/x98)/(x99*x100));

    if (t14 != -95611165673LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x101 = 0U;
	uint32_t x102 = 404852147U;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MAX;

    t15 = ((x101/x102)/(x103*x104));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x105 = INT64_MIN;
	int8_t x106 = 1;
	int8_t x107 = INT8_MAX;
	static volatile int64_t t16 = 169LL;

    t16 = ((x105/x106)/(x107*x108));

    if (t16 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x109 = -2;
	static uint16_t x110 = 799U;
	int16_t x111 = INT16_MAX;
	int64_t x112 = -133615LL;
	int64_t t17 = -9LL;

    t17 = ((x109/x110)/(x111*x112));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x113 = 1;
	static volatile int32_t x115 = -140;
	int8_t x116 = 1;
	int32_t t18 = -4135394;

    t18 = ((x113/x114)/(x115*x116));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x117 = UINT8_MAX;
	static uint64_t x118 = 1708267975412401LLU;
	uint32_t x119 = UINT32_MAX;
	volatile int32_t x120 = -113685;
	static uint64_t t19 = 492700321728071679LLU;

    t19 = ((x117/x118)/(x119*x120));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x125 = 9U;
	uint8_t x126 = 4U;
	int8_t x128 = -1;
	volatile uint32_t t20 = 4279U;

    t20 = ((x125/x126)/(x127*x128));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x131 = -1LL;
	static int32_t x132 = 176594;
	static volatile uint64_t t21 = 4133696LLU;

    t21 = ((x129/x130)/(x131*x132));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x150 = INT8_MIN;
	int16_t x151 = -1;
	static volatile int32_t t22 = -2;

    t22 = ((x149/x150)/(x151*x152));

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x161 = -5;
	static volatile int8_t x162 = -1;
	static int8_t x163 = 5;
	static uint8_t x164 = 9U;

    t23 = ((x161/x162)/(x163*x164));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x173 = INT32_MIN;
	int64_t x174 = INT64_MIN;
	volatile int16_t x175 = INT16_MIN;
	volatile int64_t x176 = -456826921LL;

    t24 = ((x173/x174)/(x175*x176));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x177 = 49LL;
	static int32_t x178 = INT32_MIN;
	int8_t x179 = INT8_MIN;
	int64_t x180 = -1LL;
	volatile int64_t t25 = 1275289719258268LL;

    t25 = ((x177/x178)/(x179*x180));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MIN;
	int32_t x188 = 37791;

    t26 = ((x185/x186)/(x187*x188));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x189 = INT8_MAX;
	uint64_t x190 = 648818693805433LLU;
	static int32_t x191 = INT32_MIN;
	volatile int64_t x192 = 1191422LL;
	volatile uint64_t t27 = 8418LLU;

    t27 = ((x189/x190)/(x191*x192));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x193 = -24434;
	uint16_t x194 = 2U;
	uint16_t x195 = UINT16_MAX;
	uint64_t x196 = 187LLU;
	uint64_t t28 = 1260118540915LLU;

    t28 = ((x193/x194)/(x195*x196));

    if (t28 != 1505236747291LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x202 = 69U;
	static int64_t x203 = -1LL;
	int64_t t29 = -642216459101LL;

    t29 = ((x201/x202)/(x203*x204));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x205 = INT8_MIN;
	uint64_t x207 = UINT64_MAX;
	volatile uint64_t t30 = 6546321480175LLU;

    t30 = ((x205/x206)/(x207*x208));

    if (t30 != 128LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x209 = 119834LL;
	int8_t x212 = -34;

    t31 = ((x209/x210)/(x211*x212));

    if (t31 != 27LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x213 = INT16_MAX;
	uint64_t x214 = 7979873220146667638LLU;
	int16_t x215 = 30;
	volatile uint8_t x216 = 5U;
	uint64_t t32 = 612343833499523LLU;

    t32 = ((x213/x214)/(x215*x216));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x217 = 2558167680030806LLU;
	static int32_t x218 = -83;
	uint32_t x219 = UINT32_MAX;
	volatile int16_t x220 = 3;
	uint64_t t33 = 266242969655735LLU;

    t33 = ((x217/x218)/(x219*x220));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x233 = INT16_MIN;
	volatile uint64_t x234 = 153582230820228203LLU;
	int64_t x235 = -3615063187522LL;
	volatile int32_t x236 = 6;

    t34 = ((x233/x234)/(x235*x236));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x241 = INT32_MAX;
	uint8_t x242 = 89U;
	volatile uint32_t x243 = 98175U;
	static uint16_t x244 = 14608U;
	static volatile uint32_t t35 = 2571U;

    t35 = ((x241/x242)/(x243*x244));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x245 = -1;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = 58852;
	int8_t x248 = INT8_MAX;
	uint64_t t36 = 246482840072109LLU;

    t36 = ((x245/x246)/(x247*x248));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x249 = INT16_MIN;
	volatile int8_t x250 = INT8_MIN;
	uint16_t x251 = 3745U;
	volatile int64_t x252 = -1LL;

    t37 = ((x249/x250)/(x251*x252));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x254 = 3205U;
	int16_t x255 = INT16_MIN;
	volatile int32_t t38 = 198865353;

    t38 = ((x253/x254)/(x255*x256));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x265 = UINT16_MAX;
	uint16_t x266 = 2863U;
	uint32_t x267 = 55U;

    t39 = ((x265/x266)/(x267*x268));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x269 = INT32_MIN;
	uint64_t x270 = 246583453629564783LLU;
	static int8_t x271 = 10;
	uint64_t t40 = 527272LLU;

    t40 = ((x269/x270)/(x271*x272));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x273 = INT32_MIN;
	uint16_t x274 = UINT16_MAX;
	volatile uint32_t x275 = 3U;
	int16_t x276 = INT16_MIN;
	volatile uint32_t t41 = 100577U;

    t41 = ((x273/x274)/(x275*x276));

    if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x281 = 15LL;
	int32_t x282 = -614648072;
	static int8_t x284 = INT8_MAX;
	volatile uint64_t t42 = 20LLU;

    t42 = ((x281/x282)/(x283*x284));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x286 = UINT64_MAX;
	int64_t x287 = -1LL;
	uint16_t x288 = 54U;
	volatile uint64_t t43 = 725087072288591889LLU;

    t43 = ((x285/x286)/(x287*x288));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x289 = 4392927U;
	int16_t x290 = INT16_MAX;
	volatile int64_t x291 = -1LL;
	int32_t x292 = 25598759;
	volatile int64_t t44 = 13715919339658LL;

    t44 = ((x289/x290)/(x291*x292));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x297 = -1811822684176094279LL;
	uint16_t x298 = 344U;
	int32_t x299 = INT32_MAX;
	uint16_t x300 = 1U;
	volatile int64_t t45 = -3028021LL;

    t45 = ((x297/x298)/(x299*x300));

    if (t45 != -2452603LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x302 = UINT16_MAX;
	static volatile int16_t x303 = -1;
	volatile int16_t x304 = -2729;
	int32_t t46 = 149;

    t46 = ((x301/x302)/(x303*x304));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x310 = 3U;
	int16_t x311 = -1;
	static volatile int64_t t47 = 15573101LL;

    t47 = ((x309/x310)/(x311*x312));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x317 = -35;
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MAX;
	static int8_t x320 = 43;
	static volatile int32_t t48 = 3797344;

    t48 = ((x317/x318)/(x319*x320));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x321 = INT32_MIN;
	int32_t x322 = INT32_MIN;
	volatile int32_t x323 = INT32_MIN;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t49 = 261429U;

    t49 = ((x321/x322)/(x323*x324));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x330 = 6U;
	uint32_t x331 = 2123438901U;
	static uint64_t x332 = UINT64_MAX;

    t50 = ((x329/x330)/(x331*x332));

    if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x345 = -740410;
	int16_t x346 = INT16_MIN;
	static int64_t x347 = -1121031LL;
	uint64_t x348 = 3LLU;
	static volatile uint64_t t51 = 13457LLU;

    t51 = ((x345/x346)/(x347*x348));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x349 = 10U;
	int8_t x350 = INT8_MIN;
	uint32_t x351 = 534598439U;
	int32_t x352 = INT32_MIN;

    t52 = ((x349/x350)/(x351*x352));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x354 = INT16_MIN;
	uint8_t x355 = 1U;
	volatile int32_t x356 = 6753479;
	int32_t t53 = -62;

    t53 = ((x353/x354)/(x355*x356));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x361 = -1;
	static uint16_t x362 = 529U;
	static volatile uint8_t x363 = 123U;

    t54 = ((x361/x362)/(x363*x364));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x367 = 46U;
	uint32_t x368 = 649742004U;
	int64_t t55 = -743281824217LL;

    t55 = ((x365/x366)/(x367*x368));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x373 = -3;
	volatile int16_t x374 = INT16_MAX;
	uint32_t x376 = 788U;
	uint32_t t56 = 85U;

    t56 = ((x373/x374)/(x375*x376));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x381 = 127990167;
	static int32_t x382 = 6;
	static volatile uint64_t x383 = 51448990000661LLU;
	uint64_t t57 = 1937061155LLU;

    t57 = ((x381/x382)/(x383*x384));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x389 = -112974347;
	uint8_t x391 = UINT8_MAX;
	int64_t x392 = -104LL;

    t58 = ((x389/x390)/(x391*x392));

    if (t58 != 27LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x393 = 863889459U;
	uint16_t x394 = UINT16_MAX;
	int8_t x395 = -1;
	volatile int16_t x396 = -13;

    t59 = ((x393/x394)/(x395*x396));

    if (t59 != 1014U) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x401 = INT16_MAX;
	uint32_t x403 = UINT32_MAX;
	int8_t x404 = -10;

    t60 = ((x401/x402)/(x403*x404));

    if (t60 != 429496704U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x409 = INT8_MAX;
	uint8_t x410 = UINT8_MAX;
	volatile uint16_t x411 = UINT16_MAX;
	volatile int64_t x412 = -1LL;

    t61 = ((x409/x410)/(x411*x412));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x413 = INT16_MAX;
	int64_t x414 = INT64_MIN;
	uint64_t x415 = 5101LLU;
	uint16_t x416 = 3212U;
	volatile uint64_t t62 = 413621963525045LLU;

    t62 = ((x413/x414)/(x415*x416));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x417 = 0;
	int8_t x419 = INT8_MAX;
	volatile int16_t x420 = -1;
	int32_t t63 = -13945035;

    t63 = ((x417/x418)/(x419*x420));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x429 = -1;
	uint64_t x430 = 387LLU;
	uint64_t x431 = 48675882LLU;
	volatile uint64_t t64 = 2610374259845LLU;

    t64 = ((x429/x430)/(x431*x432));

    if (t64 != 3840207LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x435 = INT32_MAX;
	uint64_t x436 = UINT64_MAX;
	static uint64_t t65 = 0LLU;

    t65 = ((x433/x434)/(x435*x436));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x438 = INT16_MIN;
	static int8_t x439 = INT8_MAX;
	volatile int8_t x440 = 3;
	volatile int64_t t66 = 155929220939150740LL;

    t66 = ((x437/x438)/(x439*x440));

    if (t66 != -1047277927LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x441 = INT64_MAX;
	volatile int64_t x442 = -1LL;
	volatile int8_t x443 = -1;
	int32_t x444 = -1;
	int64_t t67 = -2271468792LL;

    t67 = ((x441/x442)/(x443*x444));

    if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x445 = 40U;
	static int8_t x446 = INT8_MIN;
	volatile int8_t x448 = INT8_MAX;
	volatile int32_t t68 = -583862706;

    t68 = ((x445/x446)/(x447*x448));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x465 = 407;
	int8_t x466 = INT8_MIN;
	static int32_t x467 = -1;
	uint8_t x468 = 11U;

    t69 = ((x465/x466)/(x467*x468));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x473 = 13;
	volatile uint8_t x474 = 4U;
	int8_t x476 = 28;

    t70 = ((x473/x474)/(x475*x476));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x477 = -30990334LL;
	static int32_t x478 = 109;
	int64_t x479 = -15672339979093572LL;
	int16_t x480 = -1;

    t71 = ((x477/x478)/(x479*x480));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x481 = 1U;
	static uint64_t x482 = UINT64_MAX;
	int32_t x483 = 1672;
	int16_t x484 = -612;
	uint64_t t72 = 8105751LLU;

    t72 = ((x481/x482)/(x483*x484));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x489 = -1;
	int8_t x490 = -2;
	int64_t x491 = -1LL;
	int64_t t73 = -5437337393055330LL;

    t73 = ((x489/x490)/(x491*x492));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x493 = 22635U;
	int32_t x494 = INT32_MAX;
	uint64_t x495 = 794017063236171LLU;
	uint16_t x496 = 15248U;
	uint64_t t74 = 621797207LLU;

    t74 = ((x493/x494)/(x495*x496));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x497 = -1LL;
	int32_t x499 = -16088;
	int16_t x500 = INT16_MAX;
	static volatile int64_t t75 = -2145653483844966693LL;

    t75 = ((x497/x498)/(x499*x500));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x505 = -1;
	static int8_t x506 = -3;

    t76 = ((x505/x506)/(x507*x508));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x509 = UINT16_MAX;
	volatile int16_t x510 = INT16_MIN;
	int64_t x512 = -1LL;

    t77 = ((x509/x510)/(x511*x512));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x522 = UINT8_MAX;
	static int16_t x523 = INT16_MIN;
	static uint64_t x524 = UINT64_MAX;
	uint64_t t78 = 475372LLU;

    t78 = ((x521/x522)/(x523*x524));

    if (t78 != 562949953421054LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x526 = INT64_MIN;
	volatile uint8_t x527 = 103U;
	volatile int64_t t79 = 4596780LL;

    t79 = ((x525/x526)/(x527*x528));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x533 = UINT8_MAX;
	int32_t x534 = INT32_MIN;
	int32_t x535 = 357;
	static int16_t x536 = INT16_MIN;

    t80 = ((x533/x534)/(x535*x536));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x537 = INT16_MIN;
	int64_t x538 = INT64_MIN;
	int64_t x539 = -1LL;
	int16_t x540 = INT16_MIN;

    t81 = ((x537/x538)/(x539*x540));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x541 = INT8_MIN;
	int64_t x542 = INT64_MIN;
	uint16_t x543 = UINT16_MAX;
	static int64_t x544 = -1LL;

    t82 = ((x541/x542)/(x543*x544));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x545 = 372U;
	uint8_t x546 = 1U;
	int32_t x547 = 3;
	uint64_t x548 = UINT64_MAX;
	volatile uint64_t t83 = 215835987742LLU;

    t83 = ((x545/x546)/(x547*x548));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x549 = -4;
	int32_t x550 = -30;
	volatile int8_t x551 = -23;
	int8_t x552 = -1;
	int32_t t84 = 54006574;

    t84 = ((x549/x550)/(x551*x552));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x554 = INT8_MIN;
	int32_t x555 = -1;
	uint16_t x556 = 6433U;
	uint32_t t85 = 401U;

    t85 = ((x553/x554)/(x555*x556));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x557 = 52967441U;
	int16_t x558 = INT16_MAX;
	int64_t x559 = -25362LL;
	int8_t x560 = INT8_MAX;
	int64_t t86 = 640848LL;

    t86 = ((x557/x558)/(x559*x560));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x562 = 5U;
	int64_t x563 = -1LL;
	volatile int64_t t87 = -13367666LL;

    t87 = ((x561/x562)/(x563*x564));

    if (t87 != 2969LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x565 = INT8_MIN;
	static volatile int64_t x566 = -3212815518498LL;
	uint32_t x567 = 104097559U;
	static volatile uint32_t x568 = UINT32_MAX;
	volatile int64_t t88 = -23336427974665LL;

    t88 = ((x565/x566)/(x567*x568));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x574 = INT64_MIN;
	uint8_t x575 = 18U;
	int16_t x576 = INT16_MIN;
	int64_t t89 = 1667214018872LL;

    t89 = ((x573/x574)/(x575*x576));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x585 = 54143LLU;
	int64_t x586 = INT64_MAX;

    t90 = ((x585/x586)/(x587*x588));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x590 = 3U;
	volatile int32_t t91 = 274455479;

    t91 = ((x589/x590)/(x591*x592));

    if (t91 != -715827882) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x594 = 456LLU;
	uint16_t x595 = 224U;
	uint32_t x596 = UINT32_MAX;
	uint64_t t92 = 21755896462LLU;

    t92 = ((x593/x594)/(x595*x596));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x601 = -1506541LL;
	uint32_t x602 = UINT32_MAX;
	static int64_t x603 = -1LL;
	uint64_t x604 = 20423LLU;

    t93 = ((x601/x602)/(x603*x604));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x606 = INT32_MIN;
	int64_t x607 = 1150974LL;
	int64_t x608 = -13251241895LL;
	volatile int64_t t94 = -866LL;

    t94 = ((x605/x606)/(x607*x608));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x613 = UINT16_MAX;
	static int16_t x614 = INT16_MIN;
	uint64_t x615 = UINT64_MAX;
	uint16_t x616 = 17753U;
	volatile uint64_t t95 = 477559143LLU;

    t95 = ((x613/x614)/(x615*x616));

    if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x617 = INT64_MIN;
	uint8_t x619 = 11U;
	volatile uint64_t x620 = 1961884400232460LLU;
	volatile uint64_t t96 = 6687LLU;

    t96 = ((x617/x618)/(x619*x620));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x625 = -3;
	static uint16_t x627 = UINT16_MAX;
	static volatile int8_t x628 = -1;
	int32_t t97 = 12674119;

    t97 = ((x625/x626)/(x627*x628));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x643 = 25193005247339LL;
	uint64_t x644 = 14176721655186LLU;
	uint64_t t98 = 0LLU;

    t98 = ((x641/x642)/(x643*x644));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x645 = 4;
	volatile int16_t x646 = INT16_MIN;
	volatile int64_t x647 = -31LL;
	int32_t x648 = -1;
	static int64_t t99 = 495694LL;

    t99 = ((x645/x646)/(x647*x648));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x649 = INT32_MIN;
	int16_t x650 = INT16_MAX;
	int8_t x651 = INT8_MIN;
	uint32_t x652 = UINT32_MAX;
	static uint32_t t100 = 6328504U;

    t100 = ((x649/x650)/(x651*x652));

    if (t100 != 33553919U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x653 = INT8_MIN;
	int64_t x655 = 138377515969LL;
	static int64_t x656 = -1LL;

    t101 = ((x653/x654)/(x655*x656));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x665 = 55;
	uint64_t x666 = 271211440681714LLU;
	volatile int16_t x667 = INT16_MIN;
	static uint32_t x668 = 70020U;

    t102 = ((x665/x666)/(x667*x668));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x669 = INT32_MIN;
	int64_t x670 = INT64_MAX;
	static volatile int16_t x671 = -14651;
	int16_t x672 = -1;
	volatile int64_t t103 = -2015979757LL;

    t103 = ((x669/x670)/(x671*x672));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x673 = 17U;
	int8_t x674 = -1;
	int8_t x675 = INT8_MIN;
	static volatile int32_t x676 = 11940472;
	volatile int32_t t104 = -427;

    t104 = ((x673/x674)/(x675*x676));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x677 = INT64_MIN;
	int64_t x678 = 1LL;
	int16_t x679 = -484;
	uint16_t x680 = 31U;
	volatile int64_t t105 = 113533954882LL;

    t105 = ((x677/x678)/(x679*x680));

    if (t105 != 614727541779177LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x681 = UINT32_MAX;
	int32_t x684 = INT32_MIN;

    t106 = ((x681/x682)/(x683*x684));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x689 = 9868LL;
	int32_t x690 = -714760;
	static volatile int8_t x691 = 3;
	static volatile int8_t x692 = INT8_MIN;

    t107 = ((x689/x690)/(x691*x692));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x693 = INT32_MAX;
	int32_t x695 = INT32_MAX;
	uint64_t x696 = 4497837254382337LLU;
	volatile uint64_t t108 = 367027756LLU;

    t108 = ((x693/x694)/(x695*x696));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x697 = INT16_MAX;
	volatile int16_t x698 = -69;
	int64_t x699 = 108220785461071226LL;
	uint64_t x700 = 3334604LLU;

    t109 = ((x697/x698)/(x699*x700));

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x701 = -1;
	uint16_t x702 = 1417U;
	volatile uint32_t x703 = 938363U;
	volatile int8_t x704 = INT8_MIN;
	static uint32_t t110 = 15427U;

    t110 = ((x701/x702)/(x703*x704));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x707 = INT8_MAX;
	volatile int64_t x708 = -1LL;
	volatile int64_t t111 = -4181567293295971866LL;

    t111 = ((x705/x706)/(x707*x708));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x709 = INT64_MAX;
	uint64_t x710 = UINT64_MAX;
	int16_t x711 = -1;
	uint64_t t112 = 4LLU;

    t112 = ((x709/x710)/(x711*x712));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x713 = 8731;
	int16_t x714 = INT16_MIN;
	int32_t t113 = 28516336;

    t113 = ((x713/x714)/(x715*x716));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x719 = -33;
	uint8_t x720 = 45U;

    t114 = ((x717/x718)/(x719*x720));

    if (t114 != 5671) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x725 = 743;
	static int8_t x726 = -31;
	int32_t x727 = -408;
	static int32_t t115 = 772;

    t115 = ((x725/x726)/(x727*x728));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x729 = 25U;
	int64_t x730 = INT64_MIN;
	uint64_t x731 = 696287140LLU;
	int32_t x732 = INT32_MIN;
	static volatile uint64_t t116 = 21437957294357LLU;

    t116 = ((x729/x730)/(x731*x732));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x733 = 1U;
	int64_t x734 = INT64_MIN;
	volatile int32_t x735 = 3555;
	static volatile int32_t x736 = 161574;
	int64_t t117 = -15891826909818LL;

    t117 = ((x733/x734)/(x735*x736));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x737 = INT16_MIN;
	int8_t x738 = INT8_MAX;
	int16_t x739 = -1;
	int32_t x740 = INT32_MAX;
	volatile int32_t t118 = -144832;

    t118 = ((x737/x738)/(x739*x740));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x741 = 779096892;
	static int8_t x742 = INT8_MAX;
	uint32_t x743 = UINT32_MAX;
	int8_t x744 = -3;

    t119 = ((x741/x742)/(x743*x744));

    if (t119 != 2044873U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x745 = -520940;
	uint16_t x746 = 972U;
	int8_t x747 = 6;
	uint64_t x748 = 116LLU;
	static uint64_t t120 = 3142987300601LLU;

    t120 = ((x745/x746)/(x747*x748));

    if (t120 != 26503942634640159LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x749 = UINT16_MAX;
	static volatile int16_t x751 = -18;
	volatile uint16_t x752 = UINT16_MAX;
	int32_t t121 = 1;

    t121 = ((x749/x750)/(x751*x752));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x757 = UINT16_MAX;
	static uint64_t x758 = UINT64_MAX;
	uint64_t t122 = 408610330LLU;

    t122 = ((x757/x758)/(x759*x760));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x762 = 2143451665U;
	volatile int16_t x764 = INT16_MIN;
	uint32_t t123 = 27930960U;

    t123 = ((x761/x762)/(x763*x764));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x765 = INT8_MIN;
	uint8_t x767 = 6U;
	volatile int32_t x768 = -7270802;
	int32_t t124 = 392926;

    t124 = ((x765/x766)/(x767*x768));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x769 = 5951U;
	int32_t x770 = INT32_MIN;
	uint16_t x772 = UINT16_MAX;

    t125 = ((x769/x770)/(x771*x772));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x775 = -1;
	volatile int64_t t126 = 636591931059759959LL;

    t126 = ((x773/x774)/(x775*x776));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x777 = -1634;
	volatile uint64_t x778 = 2829206021951LLU;
	static int32_t x779 = -29178;
	uint16_t x780 = 105U;
	static volatile uint64_t t127 = 111808365LLU;

    t127 = ((x777/x778)/(x779*x780));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x782 = INT8_MAX;
	uint64_t x783 = UINT64_MAX;
	int16_t x784 = INT16_MIN;

    t128 = ((x781/x782)/(x783*x784));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x793 = INT16_MIN;
	int32_t x795 = INT32_MIN;
	int64_t x796 = -1LL;
	static volatile int64_t t129 = -5928LL;

    t129 = ((x793/x794)/(x795*x796));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x801 = -1;
	int32_t x802 = INT32_MIN;
	int8_t x803 = -1;
	volatile int64_t x804 = 1867778532814LL;
	int64_t t130 = -3931165LL;

    t130 = ((x801/x802)/(x803*x804));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x809 = -15761248;
	volatile int16_t x810 = INT16_MIN;
	static int64_t x811 = -1LL;
	uint16_t x812 = 81U;
	static int64_t t131 = -2378845137595633LL;

    t131 = ((x809/x810)/(x811*x812));

    if (t131 != -5LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x813 = UINT8_MAX;
	int8_t x814 = -1;
	int16_t x815 = INT16_MAX;
	static int64_t x816 = -5354834LL;
	volatile int64_t t132 = -14726036296LL;

    t132 = ((x813/x814)/(x815*x816));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x821 = 15;
	uint32_t x822 = 127U;
	uint8_t x823 = 3U;
	static volatile uint64_t x824 = UINT64_MAX;
	uint64_t t133 = 309LLU;

    t133 = ((x821/x822)/(x823*x824));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x830 = -16359276238LL;
	uint32_t x831 = UINT32_MAX;
	static int8_t x832 = INT8_MAX;
	int64_t t134 = -4170381944380984284LL;

    t134 = ((x829/x830)/(x831*x832));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x837 = INT8_MIN;
	int64_t x838 = INT64_MIN;
	volatile int16_t x839 = INT16_MIN;
	volatile int64_t t135 = -227266382LL;

    t135 = ((x837/x838)/(x839*x840));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x841 = -1LL;
	volatile int32_t x842 = -1;
	int8_t x843 = 1;

    t136 = ((x841/x842)/(x843*x844));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x845 = -1LL;
	int8_t x847 = INT8_MAX;
	int64_t x848 = -1LL;
	volatile int64_t t137 = 329902LL;

    t137 = ((x845/x846)/(x847*x848));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x861 = INT32_MIN;
	int64_t x862 = 106516085578704666LL;
	int64_t x863 = 209760LL;
	uint16_t x864 = 1U;
	volatile int64_t t138 = -42653672369LL;

    t138 = ((x861/x862)/(x863*x864));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x865 = INT64_MIN;
	volatile uint32_t x866 = 642543U;
	int8_t x867 = INT8_MAX;
	uint64_t x868 = UINT64_MAX;

    t139 = ((x865/x866)/(x867*x868));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x870 = -1;
	static volatile uint8_t x871 = UINT8_MAX;
	int8_t x872 = -1;
	volatile int32_t t140 = -1;

    t140 = ((x869/x870)/(x871*x872));

    if (t140 != -178) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x874 = 40316504361683089LLU;
	static uint32_t x875 = UINT32_MAX;
	static volatile int16_t x876 = INT16_MIN;

    t141 = ((x873/x874)/(x875*x876));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x886 = INT16_MIN;
	uint16_t x888 = 7779U;
	static volatile int64_t t142 = -21691773325302LL;

    t142 = ((x885/x886)/(x887*x888));

    if (t142 != 224654LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x889 = 138514928U;
	int32_t x890 = -16508570;
	uint32_t x892 = UINT32_MAX;
	volatile uint32_t t143 = 1284300U;

    t143 = ((x889/x890)/(x891*x892));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x893 = 82LLU;
	uint32_t x894 = UINT32_MAX;
	static uint32_t x895 = 508151U;
	static uint8_t x896 = 44U;
	uint64_t t144 = 42715445293462793LLU;

    t144 = ((x893/x894)/(x895*x896));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x898 = -4986608LL;
	int32_t x899 = 450142;
	uint16_t x900 = 14U;
	static int64_t t145 = -14329LL;

    t145 = ((x897/x898)/(x899*x900));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x901 = INT32_MIN;
	volatile int8_t x902 = INT8_MAX;
	uint16_t x903 = UINT16_MAX;
	int32_t t146 = 33;

    t146 = ((x901/x902)/(x903*x904));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x909 = -1;
	uint16_t x910 = UINT16_MAX;
	int32_t x911 = INT32_MAX;
	uint32_t x912 = 604229U;
	uint32_t t147 = 372907U;

    t147 = ((x909/x910)/(x911*x912));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x913 = 13976LLU;
	uint16_t x914 = UINT16_MAX;
	uint16_t x916 = UINT16_MAX;
	uint64_t t148 = 17594366044LLU;

    t148 = ((x913/x914)/(x915*x916));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x925 = INT64_MAX;
	uint16_t x927 = UINT16_MAX;
	int64_t x928 = -308LL;
	volatile int64_t t149 = -31LL;

    t149 = ((x925/x926)/(x927*x928));

    if (t149 != -106LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x929 = -30;
	uint8_t x930 = UINT8_MAX;
	static int16_t x931 = 676;
	uint8_t x932 = 28U;
	static int32_t t150 = 5;

    t150 = ((x929/x930)/(x931*x932));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x933 = 7U;
	int8_t x935 = INT8_MIN;
	volatile int32_t t151 = -15394562;

    t151 = ((x933/x934)/(x935*x936));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x937 = -1;
	int32_t x938 = INT32_MIN;
	int64_t x939 = -15410161341329LL;
	int16_t x940 = INT16_MAX;
	int64_t t152 = -1317699088343LL;

    t152 = ((x937/x938)/(x939*x940));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x945 = INT64_MIN;
	int16_t x946 = INT16_MIN;
	int8_t x947 = -1;
	int32_t x948 = -1;

    t153 = ((x945/x946)/(x947*x948));

    if (t153 != 281474976710656LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x949 = UINT32_MAX;
	int8_t x951 = 2;
	int8_t x952 = INT8_MAX;
	volatile uint32_t t154 = 1099849U;

    t154 = ((x949/x950)/(x951*x952));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x953 = -1;
	int16_t x956 = -1;
	int32_t t155 = -59854472;

    t155 = ((x953/x954)/(x955*x956));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x965 = -1358944356LL;
	uint16_t x966 = UINT16_MAX;
	static volatile int32_t x967 = -1;
	uint16_t x968 = 27U;
	volatile int64_t t156 = 2115LL;

    t156 = ((x965/x966)/(x967*x968));

    if (t156 != 768LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x969 = 134591595339LL;
	volatile uint8_t x970 = UINT8_MAX;
	int16_t x971 = 2;
	uint16_t x972 = UINT16_MAX;

    t157 = ((x969/x970)/(x971*x972));

    if (t157 != 4026LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x982 = UINT64_MAX;
	int32_t x983 = -103;
	uint64_t x984 = 454344279649357888LLU;
	volatile uint64_t t158 = 60LLU;

    t158 = ((x981/x982)/(x983*x984));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x986 = -767476698370LL;
	uint32_t x987 = UINT32_MAX;
	static int8_t x988 = INT8_MIN;

    t159 = ((x985/x986)/(x987*x988));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x997 = 13;
	int8_t x999 = 1;
	uint16_t x1000 = 3252U;
	volatile int32_t t160 = -3171888;

    t160 = ((x997/x998)/(x999*x1000));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1009 = 0U;
	static int64_t x1010 = -1LL;
	int16_t x1011 = INT16_MIN;
	uint64_t x1012 = 3868064562276754472LLU;
	uint64_t t161 = 1878LLU;

    t161 = ((x1009/x1010)/(x1011*x1012));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1021 = 3479U;
	volatile int64_t x1022 = -1LL;
	int32_t x1023 = -1;
	int32_t x1024 = -1;

    t162 = ((x1021/x1022)/(x1023*x1024));

    if (t162 != -3479LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1025 = -1;
	static int16_t x1026 = -1;
	uint32_t x1027 = 7130U;
	uint32_t t163 = 7U;

    t163 = ((x1025/x1026)/(x1027*x1028));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x1029 = UINT8_MAX;
	int64_t x1030 = -1LL;
	static volatile uint8_t x1031 = 1U;
	static uint16_t x1032 = 264U;
	static int64_t t164 = 1082776127138987908LL;

    t164 = ((x1029/x1030)/(x1031*x1032));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1033 = UINT8_MAX;
	volatile uint8_t x1034 = 2U;
	int32_t x1035 = INT32_MIN;
	static int32_t x1036 = 1;
	int32_t t165 = 3550;

    t165 = ((x1033/x1034)/(x1035*x1036));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1037 = -1;
	int64_t x1038 = 200736206713052881LL;
	int64_t x1040 = -1LL;

    t166 = ((x1037/x1038)/(x1039*x1040));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1049 = UINT16_MAX;
	int64_t x1050 = INT64_MAX;
	uint64_t x1051 = 7133035727LLU;
	volatile int32_t x1052 = 218;
	volatile uint64_t t167 = 1763763LLU;

    t167 = ((x1049/x1050)/(x1051*x1052));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1053 = -603339634338437848LL;
	int64_t x1054 = INT64_MIN;
	static volatile uint16_t x1055 = 4U;
	int64_t x1056 = 1974393184711281LL;
	int64_t t168 = 647275042693568LL;

    t168 = ((x1053/x1054)/(x1055*x1056));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1057 = INT64_MIN;
	int8_t x1058 = INT8_MIN;
	int32_t x1059 = 224;
	int16_t x1060 = INT16_MAX;
	volatile int64_t t169 = -392243LL;

    t169 = ((x1057/x1058)/(x1059*x1060));

    if (t169 != 9817367707LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1061 = 2;
	static volatile int8_t x1062 = INT8_MIN;
	int16_t x1063 = 923;
	static uint32_t t170 = 9567U;

    t170 = ((x1061/x1062)/(x1063*x1064));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1073 = INT64_MIN;
	int32_t x1074 = 27;
	int8_t x1075 = INT8_MAX;
	volatile int64_t t171 = 185370975432LL;

    t171 = ((x1073/x1074)/(x1075*x1076));

    if (t171 != 206908765436318LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint16_t x1081 = 0U;
	int16_t x1082 = -1;
	volatile int64_t x1083 = -1LL;
	uint32_t x1084 = 152U;
	static int64_t t172 = 48911816449LL;

    t172 = ((x1081/x1082)/(x1083*x1084));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1085 = -1;
	uint8_t x1086 = 36U;
	static int8_t x1088 = INT8_MIN;
	int32_t t173 = -1158419;

    t173 = ((x1085/x1086)/(x1087*x1088));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x1089 = -56;
	uint32_t x1090 = 6355892U;
	static volatile uint8_t x1091 = 19U;
	int8_t x1092 = INT8_MIN;
	uint32_t t174 = 1821U;

    t174 = ((x1089/x1090)/(x1091*x1092));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1093 = 4144929235LLU;
	uint32_t x1094 = 1631124U;
	int64_t x1095 = -307160589356LL;
	volatile uint64_t x1096 = UINT64_MAX;
	static volatile uint64_t t175 = 890895166846541947LLU;

    t175 = ((x1093/x1094)/(x1095*x1096));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1097 = -1;
	uint32_t x1098 = UINT32_MAX;
	uint32_t x1099 = UINT32_MAX;
	volatile int16_t x1100 = -1;
	uint32_t t176 = 137620U;

    t176 = ((x1097/x1098)/(x1099*x1100));

    if (t176 != 1U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1102 = -1;
	int8_t x1103 = INT8_MIN;
	uint32_t x1104 = UINT32_MAX;
	volatile uint32_t t177 = 7U;

    t177 = ((x1101/x1102)/(x1103*x1104));

    if (t177 != 33554430U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x1110 = UINT8_MAX;
	int8_t x1111 = 1;
	int32_t x1112 = -382;
	static volatile int64_t t178 = -9233630756941LL;

    t178 = ((x1109/x1110)/(x1111*x1112));

    if (t178 != 94686090102194LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x1117 = -1;
	uint8_t x1118 = UINT8_MAX;
	static int64_t x1119 = -1LL;
	int32_t x1120 = INT32_MIN;
	int64_t t179 = 418244465182722608LL;

    t179 = ((x1117/x1118)/(x1119*x1120));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1125 = INT32_MIN;
	int16_t x1126 = -153;
	volatile int16_t x1128 = -1;
	int32_t t180 = 236015435;

    t180 = ((x1125/x1126)/(x1127*x1128));

    if (t180 != -214) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1130 = 175U;
	int64_t x1131 = 26305375756199LL;
	uint64_t x1132 = 14LLU;

    t181 = ((x1129/x1130)/(x1131*x1132));

    if (t181 != 49946LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1133 = UINT8_MAX;
	volatile int16_t x1134 = INT16_MIN;
	volatile int16_t x1135 = -13;
	int64_t x1136 = 508LL;
	volatile int64_t t182 = -562571600060587968LL;

    t182 = ((x1133/x1134)/(x1135*x1136));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1145 = INT16_MIN;
	static uint8_t x1147 = UINT8_MAX;
	int32_t x1148 = -1;
	int64_t t183 = 10359087681859LL;

    t183 = ((x1145/x1146)/(x1147*x1148));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1150 = INT16_MIN;
	static int8_t x1151 = -1;
	uint64_t x1152 = 188388957206LLU;

    t184 = ((x1149/x1150)/(x1151*x1152));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1158 = 3U;
	int8_t x1159 = INT8_MIN;
	volatile uint32_t x1160 = 73897749U;
	volatile uint32_t t185 = 101490U;

    t185 = ((x1157/x1158)/(x1159*x1160));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1161 = INT64_MIN;
	uint32_t x1162 = UINT32_MAX;
	int64_t x1164 = 1909LL;
	int64_t t186 = 185607428524069619LL;

    t186 = ((x1161/x1162)/(x1163*x1164));

    if (t186 != 34LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1169 = INT64_MAX;
	int16_t x1170 = -1;
	int16_t x1171 = INT16_MIN;
	uint64_t x1172 = 511479888217674403LLU;
	uint64_t t187 = 1326754234LLU;

    t187 = ((x1169/x1170)/(x1171*x1172));

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1173 = 1U;
	uint64_t x1174 = UINT64_MAX;
	int64_t x1175 = 317699955271LL;
	int64_t x1176 = 86LL;
	uint64_t t188 = 238968530805500234LLU;

    t188 = ((x1173/x1174)/(x1175*x1176));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1185 = -1;
	uint32_t x1186 = 7781290U;
	static int16_t x1187 = INT16_MIN;
	int16_t x1188 = 147;
	volatile uint32_t t189 = 1U;

    t189 = ((x1185/x1186)/(x1187*x1188));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1189 = INT32_MIN;
	int8_t x1190 = INT8_MAX;
	uint64_t x1191 = UINT64_MAX;
	static volatile int64_t x1192 = INT64_MAX;
	volatile uint64_t t190 = 40764046594LLU;

    t190 = ((x1189/x1190)/(x1191*x1192));

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1197 = INT16_MIN;
	uint64_t x1200 = UINT64_MAX;
	volatile uint64_t t191 = 7606081384923LLU;

    t191 = ((x1197/x1198)/(x1199*x1200));

    if (t191 != 18446744073709540694LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x1205 = -1LL;
	static int64_t x1206 = INT64_MAX;
	int8_t x1207 = INT8_MAX;
	int16_t x1208 = 3;
	static volatile int64_t t192 = -57103225658983821LL;

    t192 = ((x1205/x1206)/(x1207*x1208));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1209 = UINT32_MAX;
	int32_t x1210 = INT32_MIN;
	uint64_t x1211 = 4604LLU;
	static int8_t x1212 = 8;

    t193 = ((x1209/x1210)/(x1211*x1212));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1214 = 263099230U;
	int16_t x1215 = INT16_MIN;
	volatile uint32_t t194 = 588U;

    t194 = ((x1213/x1214)/(x1215*x1216));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1221 = INT8_MAX;
	static uint64_t x1222 = 7522338LLU;
	volatile uint8_t x1223 = UINT8_MAX;
	volatile uint64_t t195 = 195651320LLU;

    t195 = ((x1221/x1222)/(x1223*x1224));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1229 = 61985;
	static volatile uint64_t x1230 = 414260319LLU;
	int8_t x1232 = INT8_MAX;
	volatile uint64_t t196 = 29172212183LLU;

    t196 = ((x1229/x1230)/(x1231*x1232));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1241 = INT64_MIN;
	uint16_t x1242 = 18003U;
	int16_t x1243 = INT16_MIN;
	int64_t x1244 = 1685390LL;
	int64_t t197 = 104778235LL;

    t197 = ((x1241/x1242)/(x1243*x1244));

    if (t197 != 9276LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1245 = INT64_MIN;
	static int64_t x1246 = 13LL;
	static volatile uint16_t x1247 = UINT16_MAX;
	uint8_t x1248 = UINT8_MAX;
	volatile int64_t t198 = 16356104LL;

    t198 = ((x1245/x1246)/(x1247*x1248));

    if (t198 != -42455395436LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1253 = UINT32_MAX;
	static int8_t x1254 = INT8_MIN;
	int16_t x1256 = -1;
	volatile uint64_t t199 = 399804925LLU;

    t199 = ((x1253/x1254)/(x1255*x1256));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

