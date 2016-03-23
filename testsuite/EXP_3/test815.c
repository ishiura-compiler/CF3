
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

int32_t x4 = 7533;
int8_t x6 = 57;
int16_t x9 = INT16_MAX;
int8_t x10 = INT8_MAX;
int16_t x11 = INT16_MIN;
static int16_t x14 = INT16_MIN;
int16_t x24 = INT16_MAX;
int8_t x38 = INT8_MAX;
int8_t x39 = INT8_MAX;
static uint32_t x49 = 14586011U;
static volatile uint8_t x53 = 0U;
volatile uint8_t x56 = UINT8_MAX;
int32_t t9 = -15925;
volatile int64_t x58 = 114LL;
static volatile uint16_t x62 = 1U;
int64_t t11 = 735890359033255LL;
int64_t x69 = -1LL;
int16_t x70 = INT16_MIN;
volatile int64_t t12 = -44619LL;
int8_t x73 = INT8_MIN;
uint16_t x92 = 9U;
int32_t x93 = -1;
int8_t x101 = INT8_MIN;
static int16_t x109 = INT16_MIN;
int32_t x115 = -14;
uint64_t x131 = 84LLU;
int32_t x139 = 4650;
int16_t x149 = INT16_MIN;
uint8_t x151 = UINT8_MAX;
static int32_t t25 = -5303066;
uint32_t t27 = 594531953U;
volatile int32_t x167 = 58;
volatile uint32_t t29 = 10017U;
volatile int32_t t30 = 0;
volatile uint8_t x177 = 13U;
volatile int8_t x181 = INT8_MAX;
int64_t x189 = 19693263418LL;
static int8_t x196 = INT8_MIN;
int16_t x203 = INT16_MAX;
volatile uint16_t x211 = 1U;
volatile uint8_t x214 = 0U;
uint32_t x215 = 8U;
uint32_t t41 = 2U;
int8_t x224 = INT8_MAX;
static uint32_t t42 = 18686U;
uint32_t x245 = 2956U;
volatile int64_t x253 = 60LL;
volatile uint16_t x259 = 1U;
volatile int64_t x275 = INT64_MAX;
int64_t t48 = 1920943350LL;
int16_t x279 = 1547;
int8_t x285 = INT8_MAX;
volatile uint64_t t50 = 2183310536126LLU;
volatile int16_t x296 = INT16_MAX;
int64_t x302 = -1LL;
uint64_t x304 = 67850230198LLU;
volatile int64_t x305 = -1029353313055092023LL;
static volatile uint8_t x308 = 126U;
uint64_t t53 = 0LLU;
volatile int16_t x312 = 635;
volatile uint64_t x316 = UINT64_MAX;
volatile uint64_t x318 = 58932656583138490LLU;
static uint32_t x321 = 1473U;
uint64_t x324 = 38779623729953909LLU;
static int8_t x335 = 0;
int16_t x336 = 4926;
volatile uint32_t x338 = 79087U;
volatile uint16_t x343 = UINT16_MAX;
volatile int64_t t61 = -459191647LL;
volatile int16_t x356 = INT16_MAX;
int64_t x361 = 78LL;
int8_t x363 = -1;
int32_t x370 = -1;
int8_t x374 = 19;
int8_t x378 = INT8_MIN;
static int16_t x385 = 0;
int32_t x390 = INT32_MIN;
volatile int32_t x399 = INT32_MIN;
static int16_t x400 = INT16_MAX;
volatile int64_t x402 = 0LL;
int8_t x403 = 47;
uint16_t x409 = 3U;
uint16_t x423 = 1U;
uint16_t x424 = 1U;
uint8_t x436 = 28U;
int32_t x437 = -6116434;
int64_t x446 = INT64_MIN;
volatile int16_t x450 = -496;
static int64_t x451 = -1LL;
uint8_t x466 = 0U;
uint8_t x480 = 13U;
static volatile int16_t x483 = INT16_MIN;
static int16_t x486 = 19;
int16_t x487 = INT16_MAX;
uint64_t t88 = 2187451023LLU;
uint16_t x506 = 0U;
int32_t x519 = -1;
static volatile uint64_t t93 = 24810354955297813LLU;
int8_t x528 = INT8_MAX;
uint16_t x530 = 6U;
int64_t x542 = -1LL;
uint8_t x544 = UINT8_MAX;
int32_t t99 = 1;
int64_t x567 = -1LL;
uint8_t x571 = UINT8_MAX;
static uint8_t x578 = 10U;
volatile int64_t x600 = INT64_MAX;
int64_t x603 = INT64_MIN;
int64_t t108 = -94940733LL;
int16_t x610 = 54;
uint8_t x615 = UINT8_MAX;
int16_t x616 = INT16_MIN;
int32_t t110 = -26768;
volatile uint64_t t112 = 351269648LLU;
volatile uint64_t t113 = 44617844343LLU;
int8_t x646 = -1;
int32_t x648 = 93010;
volatile int64_t t115 = -2LL;
static uint64_t x690 = UINT64_MAX;
volatile int32_t x691 = INT32_MAX;
uint16_t x706 = UINT16_MAX;
int16_t x707 = INT16_MIN;
volatile int32_t t122 = -505;
static volatile uint64_t x730 = 6054040140224LLU;
static int16_t x731 = INT16_MIN;
static uint64_t t125 = 654390LLU;
int32_t x746 = -1;
static int16_t x748 = INT16_MIN;
int16_t x761 = INT16_MIN;
int8_t x767 = INT8_MIN;
static volatile int32_t t132 = -28773;
volatile int32_t x771 = 200058;
uint64_t x778 = 79LLU;
int8_t x797 = 0;
volatile uint64_t x801 = UINT64_MAX;
static uint64_t x816 = 35136607912007481LLU;
int16_t x821 = -1;
uint64_t t143 = 86526947504LLU;
int32_t x846 = -1;
int64_t t146 = 1907689380LL;
int8_t x851 = 2;
int16_t x852 = -1;
uint32_t x858 = 43U;
int8_t x861 = -1;
static uint8_t x869 = 8U;
int64_t t151 = -4370108153715068899LL;
static int16_t x879 = -1;
volatile int8_t x889 = INT8_MIN;
int32_t t154 = -2995167;
uint32_t x894 = 108U;
int64_t t155 = -6804423645LL;
static uint8_t x897 = UINT8_MAX;
int8_t x901 = 1;
volatile int16_t x902 = INT16_MAX;
uint32_t x907 = 70546U;
static volatile uint32_t x913 = 1U;
volatile int8_t x918 = INT8_MAX;
int64_t x921 = -1LL;
int16_t x923 = INT16_MIN;
int64_t x924 = INT64_MAX;
volatile uint64_t t162 = 2LLU;
volatile int8_t x941 = 11;
uint8_t x947 = 31U;
uint64_t x950 = 255636877LLU;
volatile uint64_t t165 = 2177602988707LLU;
int16_t x959 = INT16_MAX;
int16_t x983 = INT16_MAX;
uint32_t t169 = 4U;
static volatile int32_t t170 = 3340651;
int16_t x996 = -1;
int64_t x1000 = INT64_MIN;
volatile int16_t x1004 = INT16_MIN;
volatile uint64_t t174 = 327841LLU;
volatile int64_t x1012 = INT64_MAX;
int32_t x1025 = -5644049;
static volatile uint64_t t176 = 0LLU;
volatile int32_t x1042 = INT32_MAX;
int8_t x1051 = 0;
volatile uint32_t x1052 = 146U;
volatile int64_t t181 = 212448600364188LL;
volatile uint64_t t182 = 54955LLU;
uint32_t x1081 = 16601426U;
static volatile uint32_t t184 = 188240U;
uint64_t t186 = 1566275769LLU;
static volatile uint32_t x1097 = 10212U;
uint32_t x1098 = 152712U;
int16_t x1106 = -623;
static volatile int64_t x1111 = INT64_MAX;
static uint64_t t189 = 238758LLU;
static int8_t x1120 = INT8_MIN;
uint8_t x1133 = 60U;
static volatile int8_t x1134 = 43;
uint8_t x1136 = UINT8_MAX;
uint16_t x1139 = 32U;
volatile uint32_t t194 = 218087870U;
static uint64_t x1145 = 105142LLU;
static int64_t x1158 = -1LL;
uint16_t x1160 = UINT16_MAX;
uint32_t x1165 = UINT32_MAX;
static uint64_t t199 = 7730823130826LLU;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int32_t x2 = -1;
	int16_t x3 = INT16_MIN;
	volatile int32_t t0 = -124;

    t0 = ((x1*x2)*(x3%x4));

    if (t0 != 172750260) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int32_t x7 = INT32_MIN;
	int8_t x8 = -27;
	volatile uint32_t t1 = 1232739U;

    t1 = ((x5*x6)*(x7%x8));

    if (t1 != 627U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x12 = -1;
	volatile int32_t t2 = -148705;

    t2 = ((x9*x10)*(x11%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = 0U;
	int16_t x15 = INT16_MIN;
	static uint64_t x16 = 5LLU;
	static uint64_t t3 = 1362546LLU;

    t3 = ((x13*x14)*(x15%x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	static uint32_t x18 = 16342702U;
	static uint8_t x19 = UINT8_MAX;
	static int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 31358652LL;

    t4 = ((x17*x18)*(x19%x20));

    if (t4 != 561790867200LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -2716;
	int16_t x22 = INT16_MAX;
	uint32_t x23 = 841528U;
	static uint32_t t5 = 30U;

    t5 = ((x21*x22)*(x23%x24));

    if (t5 != 3555745628U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = INT8_MIN;
	static volatile int16_t x40 = INT16_MIN;
	volatile int32_t t6 = 1;

    t6 = ((x37*x38)*(x39%x40));

    if (t6 != -2064512) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x41 = UINT8_MAX;
	int16_t x42 = INT16_MIN;
	static uint32_t x43 = 42994U;
	int8_t x44 = -1;
	uint32_t t7 = 1151232385U;

    t7 = ((x41*x42)*(x43%x44));

    if (t7 != 1526267904U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x50 = INT16_MAX;
	uint64_t x51 = 1LLU;
	int32_t x52 = -1;
	volatile uint64_t t8 = 123197865936321606LLU;

    t8 = ((x49*x50)*(x51%x52));

    if (t8 != 1198452581LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x54 = INT32_MIN;
	int32_t x55 = -79;

    t9 = ((x53*x54)*(x55%x56));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x57 = INT32_MIN;
	int64_t x59 = -1LL;
	int8_t x60 = INT8_MAX;
	volatile int64_t t10 = -4338028407404957LL;

    t10 = ((x57*x58)*(x59%x60));

    if (t10 != 244813135872LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x61 = -1;
	static int64_t x63 = 486190LL;
	static int16_t x64 = INT16_MAX;

    t11 = ((x61*x62)*(x63%x64));

    if (t11 != -27452LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x71 = INT32_MAX;
	int64_t x72 = 117LL;

    t12 = ((x69*x70)*(x71%x72));

    if (t12 != 327680LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x74 = 968;
	volatile int8_t x75 = -1;
	volatile int64_t x76 = -1LL;
	static int64_t t13 = 65LL;

    t13 = ((x73*x74)*(x75%x76));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x89 = 17132U;
	int8_t x90 = INT8_MIN;
	static int16_t x91 = -1;
	uint32_t t14 = 3U;

    t14 = ((x89*x90)*(x91%x92));

    if (t14 != 2192896U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x94 = INT16_MAX;
	int32_t x95 = INT32_MIN;
	volatile int8_t x96 = INT8_MIN;
	int32_t t15 = -12;

    t15 = ((x93*x94)*(x95%x96));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x102 = -1;
	static uint64_t x103 = UINT64_MAX;
	volatile int16_t x104 = 1;
	uint64_t t16 = 7288267LLU;

    t16 = ((x101*x102)*(x103%x104));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x110 = 1145U;
	int8_t x111 = -1;
	uint16_t x112 = 4U;
	static volatile int32_t t17 = -100763;

    t17 = ((x109*x110)*(x111%x112));

    if (t17 != 37519360) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x113 = INT8_MIN;
	static int64_t x114 = -1LL;
	volatile int64_t x116 = -123007LL;
	int64_t t18 = 1LL;

    t18 = ((x113*x114)*(x115%x116));

    if (t18 != -1792LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x117 = 35LL;
	int8_t x118 = -31;
	int32_t x119 = -1;
	static uint8_t x120 = UINT8_MAX;
	volatile int64_t t19 = -399566768673254LL;

    t19 = ((x117*x118)*(x119%x120));

    if (t19 != 1085LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x121 = 2186173546773LLU;
	volatile int32_t x122 = INT32_MIN;
	uint8_t x123 = UINT8_MAX;
	static uint32_t x124 = UINT32_MAX;
	uint64_t t20 = 6383LLU;

    t20 = ((x121*x122)*(x123%x124));

    if (t20 != 8398076455120011264LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x125 = 11U;
	int16_t x126 = INT16_MIN;
	int64_t x127 = -1LL;
	uint32_t x128 = 7U;
	int64_t t21 = -210928652457548495LL;

    t21 = ((x125*x126)*(x127%x128));

    if (t21 != 360448LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x129 = INT32_MIN;
	uint32_t x130 = 39U;
	uint16_t x132 = 247U;
	volatile uint64_t t22 = 1966283LLU;

    t22 = ((x129*x130)*(x131%x132));

    if (t22 != 180388626432LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x137 = INT8_MAX;
	int8_t x138 = INT8_MIN;
	static int32_t x140 = INT32_MAX;
	volatile int32_t t23 = 1056357954;

    t23 = ((x137*x138)*(x139%x140));

    if (t23 != -75590400) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x141 = -1;
	int16_t x142 = -1;
	uint32_t x143 = 733U;
	volatile int64_t x144 = INT64_MAX;
	int64_t t24 = -33876339941LL;

    t24 = ((x141*x142)*(x143%x144));

    if (t24 != 733LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x150 = 6U;
	int8_t x152 = INT8_MAX;

    t25 = ((x149*x150)*(x151%x152));

    if (t25 != -196608) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x153 = -1LL;
	static uint8_t x154 = UINT8_MAX;
	volatile int8_t x155 = 0;
	static int8_t x156 = INT8_MIN;
	static int64_t t26 = 4169628318670882760LL;

    t26 = ((x153*x154)*(x155%x156));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x157 = INT8_MIN;
	volatile int16_t x158 = INT16_MIN;
	int16_t x159 = -1;
	uint32_t x160 = 4839897U;

    t27 = ((x157*x158)*(x159%x160));

    if (t27 != 1207959552U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x161 = 8064U;
	volatile uint8_t x162 = 51U;
	volatile int32_t x163 = INT32_MIN;
	int32_t x164 = INT32_MIN;
	uint32_t t28 = 20U;

    t28 = ((x161*x162)*(x163%x164));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x165 = 10472U;
	uint16_t x166 = UINT16_MAX;
	int16_t x168 = -8130;

    t29 = ((x165*x166)*(x167%x168));

    if (t29 != 1149680496U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x169 = INT16_MIN;
	static uint16_t x170 = 52U;
	static int16_t x171 = INT16_MIN;
	int16_t x172 = INT16_MIN;

    t30 = ((x169*x170)*(x171%x172));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x178 = -28;
	volatile int8_t x179 = INT8_MIN;
	int8_t x180 = 11;
	int32_t t31 = -761585168;

    t31 = ((x177*x178)*(x179%x180));

    if (t31 != 2548) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x182 = 58U;
	int32_t x183 = 1225282;
	int64_t x184 = -6929175906607LL;
	volatile int64_t t32 = -272389604150LL;

    t32 = ((x181*x182)*(x183%x184));

    if (t32 != 9025427212LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x185 = INT16_MAX;
	static int16_t x186 = -7056;
	static int32_t x187 = INT32_MIN;
	uint64_t x188 = UINT64_MAX;
	uint64_t t33 = 6733LLU;

    t33 = ((x185*x186)*(x187%x188));

    if (t33 != 496506706272976896LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x190 = -2739;
	static uint16_t x191 = 1U;
	uint8_t x192 = 1U;
	int64_t t34 = -5538LL;

    t34 = ((x189*x190)*(x191%x192));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x193 = -1431;
	volatile int16_t x194 = INT16_MAX;
	static int32_t x195 = -1;
	int32_t t35 = 41;

    t35 = ((x193*x194)*(x195%x196));

    if (t35 != 46889577) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x197 = UINT16_MAX;
	volatile uint32_t x198 = 309096829U;
	int8_t x199 = INT8_MIN;
	static int16_t x200 = INT16_MIN;
	uint32_t t36 = 129036100U;

    t36 = ((x197*x198)*(x199%x200));

    if (t36 != 2008596096U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x201 = -9;
	volatile int8_t x202 = INT8_MAX;
	int32_t x204 = INT32_MAX;
	int32_t t37 = -518314;

    t37 = ((x201*x202)*(x203%x204));

    if (t37 != -37452681) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x205 = INT32_MIN;
	int64_t x206 = -5LL;
	static uint16_t x207 = UINT16_MAX;
	static volatile int32_t x208 = -1;
	int64_t t38 = 13702700LL;

    t38 = ((x205*x206)*(x207%x208));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x209 = UINT8_MAX;
	int16_t x210 = INT16_MIN;
	volatile int32_t x212 = -1;
	static int32_t t39 = -10961046;

    t39 = ((x209*x210)*(x211%x212));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x213 = -1;
	volatile int32_t x216 = INT32_MIN;
	uint32_t t40 = 31U;

    t40 = ((x213*x214)*(x215%x216));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x217 = -1;
	static int8_t x218 = INT8_MAX;
	static uint32_t x219 = 61641U;
	int8_t x220 = INT8_MIN;

    t41 = ((x217*x218)*(x219%x220));

    if (t41 != 4287138889U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x221 = 1;
	int16_t x222 = 2834;
	uint32_t x223 = 3U;

    t42 = ((x221*x222)*(x223%x224));

    if (t42 != 8502U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x246 = 130953682126049LLU;
	uint32_t x247 = 1469826159U;
	static volatile uint32_t x248 = UINT32_MAX;
	volatile uint64_t t43 = 757049LLU;

    t43 = ((x245*x246)*(x247%x248));

    if (t43 != 11380568892427239220LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x249 = -1;
	uint64_t x250 = 125LLU;
	int8_t x251 = INT8_MAX;
	int8_t x252 = -1;
	static volatile uint64_t t44 = 38470578831501LLU;

    t44 = ((x249*x250)*(x251%x252));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x254 = UINT16_MAX;
	static uint16_t x255 = 7U;
	int8_t x256 = 1;
	volatile int64_t t45 = 562067582539LL;

    t45 = ((x253*x254)*(x255%x256));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x257 = -790;
	int16_t x258 = 194;
	int32_t x260 = INT32_MIN;
	volatile int32_t t46 = 2248;

    t46 = ((x257*x258)*(x259%x260));

    if (t46 != -153260) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x269 = 0U;
	uint8_t x270 = UINT8_MAX;
	uint8_t x271 = 12U;
	uint32_t x272 = 128433908U;
	volatile uint32_t t47 = 67U;

    t47 = ((x269*x270)*(x271%x272));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x273 = INT32_MIN;
	int32_t x274 = 1;
	uint32_t x276 = UINT32_MAX;

    t48 = ((x273*x274)*(x275%x276));

    if (t48 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x277 = -1;
	int8_t x278 = -4;
	int32_t x280 = INT32_MIN;
	volatile int32_t t49 = 170755;

    t49 = ((x277*x278)*(x279%x280));

    if (t49 != 6188) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x286 = 40612863LLU;
	uint32_t x287 = 18U;
	static uint8_t x288 = UINT8_MAX;

    t50 = ((x285*x286)*(x287%x288));

    if (t50 != 92841004818LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x293 = INT8_MIN;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = -6;
	volatile uint64_t t51 = 121848090960216049LLU;

    t51 = ((x293*x294)*(x295%x296));

    if (t51 != 18446744073709550848LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x301 = INT16_MIN;
	static uint16_t x303 = 2312U;
	static volatile uint64_t t52 = 31611808699085305LLU;

    t52 = ((x301*x302)*(x303%x304));

    if (t52 != 75759616LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x306 = 469991902LLU;
	volatile int8_t x307 = 3;

    t53 = ((x305*x306)*(x307%x308));

    if (t53 != 3875988618820401642LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x309 = UINT64_MAX;
	volatile uint8_t x310 = 24U;
	uint64_t x311 = UINT64_MAX;
	uint64_t t54 = 103165961357LLU;

    t54 = ((x309*x310)*(x311%x312));

    if (t54 != 18446744073709545496LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x313 = -1LL;
	uint8_t x314 = UINT8_MAX;
	volatile int64_t x315 = -129584809153LL;
	volatile uint64_t t55 = 393357712559695719LLU;

    t55 = ((x313*x314)*(x315%x316));

    if (t55 != 33044126334015LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x317 = -1;
	volatile uint64_t x319 = UINT64_MAX;
	int32_t x320 = INT32_MAX;
	static volatile uint64_t t56 = 15304886444490LLU;

    t56 = ((x317*x318)*(x319%x320));

    if (t56 != 18269946103960136146LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x322 = INT8_MIN;
	static volatile uint16_t x323 = 19680U;
	static uint64_t t57 = 281003019LLU;

    t57 = ((x321*x322)*(x323%x324));

    if (t57 != 84521245839360LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x325 = INT8_MIN;
	int16_t x326 = 9341;
	int64_t x327 = INT64_MIN;
	static int32_t x328 = -211489600;
	volatile int64_t t58 = 0LL;

    t58 = ((x325*x326)*(x327%x328));

    if (t58 != 154335927312384LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x333 = INT16_MIN;
	int8_t x334 = -1;
	int32_t t59 = 92915;

    t59 = ((x333*x334)*(x335%x336));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x337 = INT8_MIN;
	uint64_t x339 = 15632LLU;
	volatile uint32_t x340 = 203U;
	volatile uint64_t t60 = 455046638LLU;

    t60 = ((x337*x338)*(x339%x340));

    if (t60 != 4284844160LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x341 = UINT8_MAX;
	int32_t x342 = -1;
	int64_t x344 = INT64_MAX;

    t61 = ((x341*x342)*(x343%x344));

    if (t61 != -16711425LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x349 = -5;
	volatile int32_t x350 = -46;
	volatile int64_t x351 = -102LL;
	static uint16_t x352 = UINT16_MAX;
	int64_t t62 = -4582928836842014606LL;

    t62 = ((x349*x350)*(x351%x352));

    if (t62 != -23460LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x353 = 24415203586296224LLU;
	uint64_t x354 = 11150792314LLU;
	int8_t x355 = INT8_MIN;
	volatile uint64_t t63 = 1LLU;

    t63 = ((x353*x354)*(x355%x356));

    if (t63 != 14964885457649065984LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x362 = 2763;
	uint16_t x364 = UINT16_MAX;
	volatile int64_t t64 = -165649353983853967LL;

    t64 = ((x361*x362)*(x363%x364));

    if (t64 != -215514LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x365 = 777;
	volatile int16_t x366 = INT16_MIN;
	uint64_t x367 = UINT64_MAX;
	static uint32_t x368 = 554665897U;
	uint64_t t65 = 4LLU;

    t65 = ((x365*x366)*(x367%x368));

    if (t65 != 18445836916749893632LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x369 = -1;
	int8_t x371 = -2;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t66 = 125;

    t66 = ((x369*x370)*(x371%x372));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x373 = INT8_MAX;
	volatile int64_t x375 = INT64_MIN;
	int8_t x376 = -1;
	int64_t t67 = 238923LL;

    t67 = ((x373*x374)*(x375%x376));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x377 = 3960U;
	uint16_t x379 = 83U;
	int8_t x380 = -1;
	volatile uint32_t t68 = 10905779U;

    t68 = ((x377*x378)*(x379%x380));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x386 = INT16_MIN;
	int32_t x387 = -1;
	int64_t x388 = INT64_MIN;
	int64_t t69 = 69456173407LL;

    t69 = ((x385*x386)*(x387%x388));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x389 = UINT64_MAX;
	static int8_t x391 = -55;
	volatile int8_t x392 = INT8_MAX;
	uint64_t t70 = 937900567228326LLU;

    t70 = ((x389*x390)*(x391%x392));

    if (t70 != 18446743955597950976LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x397 = 39781922LLU;
	static uint16_t x398 = 14665U;
	volatile uint64_t t71 = 139LLU;

    t71 = ((x397*x398)*(x399%x400));

    if (t71 != 18446742906905779356LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x401 = INT16_MAX;
	int64_t x404 = INT64_MAX;
	static volatile int64_t t72 = 0LL;

    t72 = ((x401*x402)*(x403%x404));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x410 = UINT16_MAX;
	int32_t x411 = -1;
	uint8_t x412 = 12U;
	volatile int32_t t73 = -228899646;

    t73 = ((x409*x410)*(x411%x412));

    if (t73 != -196605) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x421 = 2U;
	volatile int16_t x422 = 7935;
	uint32_t t74 = 413021U;

    t74 = ((x421*x422)*(x423%x424));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x425 = 62;
	volatile int8_t x426 = INT8_MIN;
	uint32_t x427 = 0U;
	uint64_t x428 = 141719255309LLU;
	volatile uint64_t t75 = 3LLU;

    t75 = ((x425*x426)*(x427%x428));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x429 = -1LL;
	int8_t x430 = INT8_MIN;
	int32_t x431 = INT32_MIN;
	static volatile int64_t x432 = INT64_MIN;
	static int64_t t76 = -24131693781LL;

    t76 = ((x429*x430)*(x431%x432));

    if (t76 != -274877906944LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x433 = -1;
	static int16_t x434 = 95;
	volatile uint16_t x435 = UINT16_MAX;
	static int32_t t77 = -1414;

    t77 = ((x433*x434)*(x435%x436));

    if (t77 != -1425) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x438 = 8048127797LL;
	uint8_t x439 = 26U;
	static int64_t x440 = INT64_MAX;
	volatile int64_t t78 = 238233LL;

    t78 = ((x437*x438)*(x439%x440));

    if (t78 != -1279871904841813348LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x445 = 4537531826363569581LLU;
	int16_t x447 = INT16_MIN;
	int32_t x448 = -1;
	volatile uint64_t t79 = 69LLU;

    t79 = ((x445*x446)*(x447%x448));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x449 = UINT16_MAX;
	volatile int16_t x452 = INT16_MIN;
	int64_t t80 = -980328119367172LL;

    t80 = ((x449*x450)*(x451%x452));

    if (t80 != 32505360LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x457 = 5U;
	int8_t x458 = 1;
	int8_t x459 = -52;
	static volatile uint8_t x460 = 1U;
	volatile int32_t t81 = -681234687;

    t81 = ((x457*x458)*(x459%x460));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x465 = INT32_MAX;
	uint64_t x467 = UINT64_MAX;
	static uint8_t x468 = 1U;
	volatile uint64_t t82 = 2LLU;

    t82 = ((x465*x466)*(x467%x468));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x469 = -44;
	int8_t x470 = INT8_MIN;
	uint16_t x471 = UINT16_MAX;
	uint32_t x472 = UINT32_MAX;
	uint32_t t83 = 192766U;

    t83 = ((x469*x470)*(x471%x472));

    if (t83 != 369093120U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x473 = -1;
	volatile int8_t x474 = INT8_MIN;
	uint64_t x475 = UINT64_MAX;
	uint32_t x476 = 53272U;
	uint64_t t84 = 4LLU;

    t84 = ((x473*x474)*(x475%x476));

    if (t84 != 6084480LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x477 = 3033U;
	uint16_t x478 = UINT16_MAX;
	volatile int16_t x479 = INT16_MAX;
	volatile uint32_t t85 = 7309U;

    t85 = ((x477*x478)*(x479%x480));

    if (t85 != 1391373585U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x481 = -1;
	uint32_t x482 = UINT32_MAX;
	int64_t x484 = -1233234LL;
	volatile int64_t t86 = 6085LL;

    t86 = ((x481*x482)*(x483%x484));

    if (t86 != -32768LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x485 = -1825;
	int16_t x488 = 9723;
	volatile int32_t t87 = -1;

    t87 = ((x485*x486)*(x487%x488));

    if (t87 != -124760650) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x493 = UINT32_MAX;
	int32_t x494 = INT32_MAX;
	uint32_t x495 = 164U;
	uint64_t x496 = 7121501LLU;

    t88 = ((x493*x494)*(x495%x496));

    if (t88 != 352187318436LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x497 = 14317800U;
	volatile uint32_t x498 = UINT32_MAX;
	volatile int8_t x499 = -1;
	int64_t x500 = INT64_MAX;
	int64_t t89 = -2647907384998LL;

    t89 = ((x497*x498)*(x499%x500));

    if (t89 != -4280649496LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x505 = INT64_MIN;
	int8_t x507 = 3;
	int8_t x508 = -3;
	static int64_t t90 = -33496819LL;

    t90 = ((x505*x506)*(x507%x508));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x509 = INT16_MIN;
	int32_t x510 = -1;
	static int32_t x511 = INT32_MAX;
	volatile int16_t x512 = 285;
	static int32_t t91 = 678860398;

    t91 = ((x509*x510)*(x511%x512));

    if (t91 != 3178496) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x513 = 3197U;
	int8_t x514 = INT8_MIN;
	uint64_t x515 = UINT64_MAX;
	int16_t x516 = INT16_MIN;
	volatile uint64_t t92 = 1120511929LLU;

    t92 = ((x513*x514)*(x515%x516));

    if (t92 != 18446744060300770944LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x517 = 280198658543373LLU;
	uint8_t x518 = 62U;
	static int64_t x520 = -1LL;

    t93 = ((x517*x518)*(x519%x520));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x525 = 1U;
	uint8_t x526 = 111U;
	volatile uint8_t x527 = 11U;
	int32_t t94 = 776;

    t94 = ((x525*x526)*(x527%x528));

    if (t94 != 1221) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x529 = -1;
	uint16_t x531 = 1U;
	uint32_t x532 = 6087898U;
	volatile uint32_t t95 = 1552280824U;

    t95 = ((x529*x530)*(x531%x532));

    if (t95 != 4294967290U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x533 = UINT32_MAX;
	static uint16_t x534 = 155U;
	int16_t x535 = INT16_MIN;
	static uint32_t x536 = 4584336U;
	uint32_t t96 = 740861199U;

    t96 = ((x533*x534)*(x535%x536));

    if (t96 != 3675582336U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x537 = INT16_MIN;
	static int32_t x538 = -1;
	int8_t x539 = INT8_MIN;
	volatile int32_t x540 = INT32_MIN;
	int32_t t97 = -63825811;

    t97 = ((x537*x538)*(x539%x540));

    if (t97 != -4194304) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x541 = 1;
	static uint64_t x543 = UINT64_MAX;
	static volatile uint64_t t98 = 38206510LLU;

    t98 = ((x541*x542)*(x543%x544));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x553 = 1;
	uint8_t x554 = 0U;
	uint16_t x555 = 0U;
	int16_t x556 = 12;

    t99 = ((x553*x554)*(x555%x556));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x557 = -1;
	int16_t x558 = -1;
	int32_t x559 = INT32_MIN;
	uint8_t x560 = 39U;
	volatile int32_t t100 = 6594782;

    t100 = ((x557*x558)*(x559%x560));

    if (t100 != -11) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x561 = 31U;
	int16_t x562 = INT16_MIN;
	int32_t x563 = INT32_MIN;
	uint32_t x564 = 160U;
	uint32_t t101 = 45739U;

    t101 = ((x561*x562)*(x563%x564));

    if (t101 != 4164943872U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x565 = INT32_MIN;
	uint64_t x566 = UINT64_MAX;
	int8_t x568 = INT8_MIN;
	uint64_t t102 = 494328037481LLU;

    t102 = ((x565*x566)*(x567%x568));

    if (t102 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x569 = 15080LLU;
	uint16_t x570 = 2U;
	int16_t x572 = INT16_MIN;
	static volatile uint64_t t103 = 3LLU;

    t103 = ((x569*x570)*(x571%x572));

    if (t103 != 7690800LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x577 = UINT8_MAX;
	volatile int32_t x579 = INT32_MAX;
	static volatile int64_t x580 = INT64_MIN;
	volatile int64_t t104 = -246898249242758LL;

    t104 = ((x577*x578)*(x579%x580));

    if (t104 != 5476083299850LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x585 = 3263U;
	int32_t x586 = -456;
	static volatile int8_t x587 = 24;
	int16_t x588 = 1;
	volatile int32_t t105 = -15136;

    t105 = ((x585*x586)*(x587%x588));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x593 = 154LL;
	static volatile uint64_t x594 = 210543464LLU;
	int32_t x595 = 231375;
	static int8_t x596 = INT8_MIN;
	static uint64_t t106 = 4963815167698776533LLU;

    t106 = ((x593*x594)*(x595%x596));

    if (t106 != 2561471783024LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x597 = INT64_MAX;
	int8_t x598 = -1;
	static int64_t x599 = INT64_MIN;
	static volatile int64_t t107 = INT64_MAX;

    t107 = ((x597*x598)*(x599%x600));

    if (t107 != INT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x601 = -1LL;
	volatile uint16_t x602 = 2026U;
	uint8_t x604 = 12U;

    t108 = ((x601*x602)*(x603%x604));

    if (t108 != 16208LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x609 = 1U;
	volatile int8_t x611 = 6;
	int16_t x612 = INT16_MAX;
	volatile int32_t t109 = 80429;

    t109 = ((x609*x610)*(x611%x612));

    if (t109 != 324) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x613 = UINT16_MAX;
	int16_t x614 = -3;

    t110 = ((x613*x614)*(x615%x616));

    if (t110 != -50134275) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x621 = 1LLU;
	static int8_t x622 = -1;
	int16_t x623 = -47;
	int64_t x624 = -6003500020260LL;
	uint64_t t111 = 1037289LLU;

    t111 = ((x621*x622)*(x623%x624));

    if (t111 != 47LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x625 = 6903429LLU;
	int64_t x626 = -1LL;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = INT8_MIN;

    t112 = ((x625*x626)*(x627%x628));

    if (t112 != 18446744072832816133LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x629 = 221U;
	volatile uint16_t x630 = 2U;
	int32_t x631 = -276485;
	static uint64_t x632 = UINT64_MAX;

    t113 = ((x629*x630)*(x631%x632));

    if (t113 != 18446744073587345246LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x641 = 4025U;
	volatile uint64_t x642 = 549066837519692LLU;
	int16_t x643 = -1;
	int64_t x644 = INT64_MIN;
	uint64_t t114 = 2080424922057LLU;

    t114 = ((x641*x642)*(x643%x644));

    if (t114 != 16236750052692791316LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x645 = -1047LL;
	uint16_t x647 = 1U;

    t115 = ((x645*x646)*(x647%x648));

    if (t115 != 1047LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x649 = -3622;
	uint64_t x650 = UINT64_MAX;
	static volatile uint64_t x651 = UINT64_MAX;
	int16_t x652 = INT16_MIN;
	uint64_t t116 = 3305316LLU;

    t116 = ((x649*x650)*(x651%x652));

    if (t116 != 118682074LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x665 = INT8_MIN;
	int32_t x666 = -794;
	volatile int8_t x667 = -1;
	static int32_t x668 = 4173268;
	int32_t t117 = 27907763;

    t117 = ((x665*x666)*(x667%x668));

    if (t117 != -101632) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x677 = -1;
	int16_t x678 = INT16_MIN;
	uint64_t x679 = UINT64_MAX;
	uint64_t x680 = UINT64_MAX;
	static uint64_t t118 = 0LLU;

    t118 = ((x677*x678)*(x679%x680));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x685 = 988U;
	uint64_t x686 = UINT64_MAX;
	int8_t x687 = 1;
	int16_t x688 = INT16_MIN;
	uint64_t t119 = 1620245753083419LLU;

    t119 = ((x685*x686)*(x687%x688));

    if (t119 != 18446744073709550628LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x689 = INT64_MIN;
	int8_t x692 = INT8_MAX;
	volatile uint64_t t120 = 81LLU;

    t120 = ((x689*x690)*(x691%x692));

    if (t120 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x693 = 0;
	uint32_t x694 = UINT32_MAX;
	static uint32_t x695 = UINT32_MAX;
	int32_t x696 = -1;
	uint32_t t121 = 7991444U;

    t121 = ((x693*x694)*(x695%x696));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x705 = -1;
	volatile int16_t x708 = -156;

    t122 = ((x705*x706)*(x707%x708));

    if (t122 != 524280) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x709 = 452402720280494068LL;
	uint64_t x710 = UINT64_MAX;
	volatile int16_t x711 = -233;
	int32_t x712 = -87375988;
	volatile uint64_t t123 = 20LLU;

    t123 = ((x709*x710)*(x711%x712));

    if (t123 != 13176113456807359764LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x713 = 2U;
	static int8_t x714 = -1;
	static uint16_t x715 = 3524U;
	volatile uint64_t x716 = UINT64_MAX;
	volatile uint64_t t124 = 44591880LLU;

    t124 = ((x713*x714)*(x715%x716));

    if (t124 != 18446744073709544568LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x729 = -1;
	int16_t x732 = INT16_MIN;

    t125 = ((x729*x730)*(x731%x732));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x733 = 48;
	uint32_t x734 = 8U;
	static int8_t x735 = INT8_MAX;
	static int64_t x736 = 1LL;
	int64_t t126 = -139821265609104054LL;

    t126 = ((x733*x734)*(x735%x736));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint8_t x737 = 5U;
	int16_t x738 = -2;
	static volatile int64_t x739 = INT64_MIN;
	static int8_t x740 = -1;
	static volatile int64_t t127 = -17902302098054LL;

    t127 = ((x737*x738)*(x739%x740));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x745 = INT8_MAX;
	int32_t x747 = INT32_MIN;
	volatile int32_t t128 = -7;

    t128 = ((x745*x746)*(x747%x748));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x753 = UINT64_MAX;
	int16_t x754 = INT16_MAX;
	int8_t x755 = INT8_MIN;
	uint8_t x756 = 1U;
	uint64_t t129 = 605326LLU;

    t129 = ((x753*x754)*(x755%x756));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x757 = 67U;
	static volatile uint64_t x758 = UINT64_MAX;
	uint8_t x759 = 8U;
	volatile int32_t x760 = INT32_MIN;
	static volatile uint64_t t130 = 15LLU;

    t130 = ((x757*x758)*(x759%x760));

    if (t130 != 18446744073709551080LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x762 = -1;
	int64_t x763 = INT64_MAX;
	static uint64_t x764 = 454344006464475LLU;
	uint64_t t131 = 5613509010LLU;

    t131 = ((x761*x762)*(x763%x764));

    if (t131 != 6183505950582603776LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x765 = 6U;
	int16_t x766 = INT16_MAX;
	static int8_t x768 = INT8_MAX;

    t132 = ((x765*x766)*(x767%x768));

    if (t132 != -196602) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x769 = -1LL;
	volatile uint16_t x770 = UINT16_MAX;
	int16_t x772 = -64;
	static volatile int64_t t133 = -620985762317208LL;

    t133 = ((x769*x770)*(x771%x772));

    if (t133 != -3801030LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x777 = 16U;
	int64_t x779 = INT64_MIN;
	uint8_t x780 = 78U;
	volatile uint64_t t134 = 63989202281LLU;

    t134 = ((x777*x778)*(x779%x780));

    if (t134 != 18446744073709541504LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x781 = -4;
	volatile uint8_t x782 = 0U;
	volatile uint16_t x783 = 12768U;
	int32_t x784 = INT32_MAX;
	volatile int32_t t135 = -1118;

    t135 = ((x781*x782)*(x783%x784));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x789 = -1;
	uint64_t x790 = UINT64_MAX;
	int64_t x791 = -838LL;
	int16_t x792 = INT16_MAX;
	uint64_t t136 = 7LLU;

    t136 = ((x789*x790)*(x791%x792));

    if (t136 != 18446744073709550778LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x793 = 0;
	int8_t x794 = -1;
	int32_t x795 = INT32_MAX;
	int8_t x796 = 3;
	static int32_t t137 = 32472;

    t137 = ((x793*x794)*(x795%x796));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x798 = INT16_MIN;
	static int64_t x799 = -1LL;
	volatile int8_t x800 = INT8_MIN;
	volatile int64_t t138 = -19237369LL;

    t138 = ((x797*x798)*(x799%x800));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int64_t x802 = INT64_MIN;
	int32_t x803 = INT32_MIN;
	uint32_t x804 = UINT32_MAX;
	static uint64_t t139 = 2964LLU;

    t139 = ((x801*x802)*(x803%x804));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x809 = INT16_MAX;
	int16_t x810 = INT16_MIN;
	int32_t x811 = -1;
	int64_t x812 = INT64_MAX;
	int64_t t140 = 58016LL;

    t140 = ((x809*x810)*(x811%x812));

    if (t140 != 1073709056LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x813 = 55510;
	static int16_t x814 = INT16_MIN;
	volatile uint32_t x815 = 180U;
	static volatile uint64_t t141 = 16417568LLU;

    t141 = ((x813*x814)*(x815%x816));

    if (t141 != 18446743746298249216LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x822 = INT8_MAX;
	uint64_t x823 = UINT64_MAX;
	int32_t x824 = -52;
	uint64_t t142 = 11335755835323061LLU;

    t142 = ((x821*x822)*(x823%x824));

    if (t142 != 18446744073709545139LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x825 = -1LL;
	uint64_t x826 = UINT64_MAX;
	volatile int16_t x827 = -9206;
	int32_t x828 = INT32_MIN;

    t143 = ((x825*x826)*(x827%x828));

    if (t143 != 18446744073709542410LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x833 = INT8_MAX;
	static int16_t x834 = INT16_MIN;
	int64_t x835 = -1LL;
	static volatile uint8_t x836 = UINT8_MAX;
	int64_t t144 = -18087750LL;

    t144 = ((x833*x834)*(x835%x836));

    if (t144 != 4161536LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x837 = 2U;
	int16_t x838 = INT16_MIN;
	int32_t x839 = INT32_MAX;
	static volatile int64_t x840 = 1311LL;
	static volatile int64_t t145 = 77884893963722LL;

    t145 = ((x837*x838)*(x839%x840));

    if (t145 != -6356992LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x845 = -1;
	static volatile int64_t x847 = INT64_MAX;
	int16_t x848 = -485;

    t146 = ((x845*x846)*(x847%x848));

    if (t146 != 272LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x849 = UINT8_MAX;
	uint8_t x850 = UINT8_MAX;
	volatile int32_t t147 = 6;

    t147 = ((x849*x850)*(x851%x852));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x857 = 65U;
	uint8_t x859 = UINT8_MAX;
	int32_t x860 = -4984;
	volatile uint32_t t148 = 72561U;

    t148 = ((x857*x858)*(x859%x860));

    if (t148 != 712725U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x862 = INT8_MIN;
	uint32_t x863 = UINT32_MAX;
	static int16_t x864 = -1;
	uint32_t t149 = 759U;

    t149 = ((x861*x862)*(x863%x864));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x865 = INT8_MIN;
	int16_t x866 = 25;
	uint16_t x867 = UINT16_MAX;
	uint64_t x868 = 13740LLU;
	uint64_t t150 = 9929356102565LLU;

    t150 = ((x865*x866)*(x867%x868));

    if (t150 != 18446744073675711616LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x870 = 7353U;
	int64_t x871 = -32352624713LL;
	static int64_t x872 = -1667765LL;

    t151 = ((x869*x870)*(x871%x872));

    if (t151 != -77603150232LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x877 = -1LL;
	int8_t x878 = 16;
	int16_t x880 = INT16_MIN;
	static int64_t t152 = 974302860611412LL;

    t152 = ((x877*x878)*(x879%x880));

    if (t152 != 16LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x881 = UINT16_MAX;
	volatile uint16_t x882 = 3U;
	uint8_t x883 = 10U;
	volatile uint32_t x884 = 3U;
	volatile uint32_t t153 = 27459U;

    t153 = ((x881*x882)*(x883%x884));

    if (t153 != 196605U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x890 = INT16_MIN;
	int32_t x891 = -1169;
	volatile int8_t x892 = INT8_MIN;

    t154 = ((x889*x890)*(x891%x892));

    if (t154 != -71303168) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x893 = UINT32_MAX;
	volatile int64_t x895 = 0LL;
	int8_t x896 = INT8_MIN;

    t155 = ((x893*x894)*(x895%x896));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x898 = 52LLU;
	int64_t x899 = INT64_MAX;
	uint32_t x900 = UINT32_MAX;
	uint64_t t156 = 19LLU;

    t156 = ((x897*x898)*(x899%x900));

    if (t156 != 28475633159220LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x903 = -1;
	int16_t x904 = -1;
	int32_t t157 = -18631767;

    t157 = ((x901*x902)*(x903%x904));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x905 = 45U;
	uint8_t x906 = 37U;
	static int64_t x908 = INT64_MIN;
	volatile int64_t t158 = 7451892548LL;

    t158 = ((x905*x906)*(x907%x908));

    if (t158 != 117459090LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x914 = -1LL;
	volatile uint32_t x915 = 6597951U;
	int64_t x916 = INT64_MAX;
	volatile int64_t t159 = 838364911577748LL;

    t159 = ((x913*x914)*(x915%x916));

    if (t159 != -6597951LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x917 = -1;
	uint64_t x919 = UINT64_MAX;
	volatile int64_t x920 = INT64_MIN;
	uint64_t t160 = 7234086LLU;

    t160 = ((x917*x918)*(x919%x920));

    if (t160 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x922 = 2011700LLU;
	volatile uint64_t t161 = 184014131761LLU;

    t161 = ((x921*x922)*(x923%x924));

    if (t161 != 65919385600LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x937 = -1;
	uint64_t x938 = 5873589153LLU;
	int16_t x939 = INT16_MAX;
	uint64_t x940 = UINT64_MAX;

    t162 = ((x937*x938)*(x939%x940));

    if (t162 != 18446551613813775265LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x942 = -1484;
	int8_t x943 = -1;
	int64_t x944 = INT64_MIN;
	int64_t t163 = 45LL;

    t163 = ((x941*x942)*(x943%x944));

    if (t163 != 16324LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x945 = INT16_MIN;
	static volatile int32_t x946 = 33;
	uint64_t x948 = 90003274LLU;
	uint64_t t164 = 615112010175LLU;

    t164 = ((x945*x946)*(x947%x948));

    if (t164 != 18446744073676029952LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int8_t x949 = -1;
	int16_t x951 = INT16_MIN;
	int8_t x952 = INT8_MAX;

    t165 = ((x949*x950)*(x951%x952));

    if (t165 != 511273754LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x957 = -15;
	static uint8_t x958 = 56U;
	int8_t x960 = INT8_MIN;
	volatile int32_t t166 = 176855894;

    t166 = ((x957*x958)*(x959%x960));

    if (t166 != -106680) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x969 = INT8_MIN;
	static int64_t x970 = 31220LL;
	int8_t x971 = -2;
	static int16_t x972 = INT16_MIN;
	volatile int64_t t167 = -2295809029881LL;

    t167 = ((x969*x970)*(x971%x972));

    if (t167 != 7992320LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x973 = 13072;
	int8_t x974 = INT8_MAX;
	static int64_t x975 = -15328153LL;
	int32_t x976 = 683679;
	int64_t t168 = -134104068703443010LL;

    t168 = ((x973*x974)*(x975%x976));

    if (t168 != -476818258960LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x981 = UINT32_MAX;
	volatile int16_t x982 = -252;
	uint8_t x984 = UINT8_MAX;

    t169 = ((x981*x982)*(x983%x984));

    if (t169 != 32004U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x985 = 28U;
	int16_t x986 = 0;
	volatile int16_t x987 = INT16_MAX;
	volatile int16_t x988 = INT16_MIN;

    t170 = ((x985*x986)*(x987%x988));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x993 = -1;
	int8_t x994 = -5;
	volatile int8_t x995 = INT8_MIN;
	static volatile int32_t t171 = 4574282;

    t171 = ((x993*x994)*(x995%x996));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint8_t x997 = UINT8_MAX;
	int16_t x998 = INT16_MIN;
	int8_t x999 = INT8_MIN;
	int64_t t172 = -32703925389LL;

    t172 = ((x997*x998)*(x999%x1000));

    if (t172 != 1069547520LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x1001 = -1;
	int8_t x1002 = INT8_MIN;
	int8_t x1003 = -1;
	volatile int32_t t173 = -1061679726;

    t173 = ((x1001*x1002)*(x1003%x1004));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1005 = 1;
	int8_t x1006 = -1;
	uint64_t x1007 = 424179324721887053LLU;
	int16_t x1008 = 19;

    t174 = ((x1005*x1006)*(x1007%x1008));

    if (t174 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1009 = 121U;
	uint8_t x1010 = UINT8_MAX;
	static uint16_t x1011 = 360U;
	volatile int64_t t175 = 555858LL;

    t175 = ((x1009*x1010)*(x1011%x1012));

    if (t175 != 11107800LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1026 = 182739420356291673LLU;
	int64_t x1027 = INT64_MAX;
	int8_t x1028 = 3;

    t176 = ((x1025*x1026)*(x1027%x1028));

    if (t176 != 4111926740789249815LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1041 = UINT32_MAX;
	static int16_t x1043 = -1;
	static volatile int8_t x1044 = -1;
	volatile uint32_t t177 = 4U;

    t177 = ((x1041*x1042)*(x1043%x1044));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1045 = UINT16_MAX;
	int8_t x1046 = -1;
	uint8_t x1047 = 11U;
	static volatile int64_t x1048 = -1847LL;
	int64_t t178 = -7625330LL;

    t178 = ((x1045*x1046)*(x1047%x1048));

    if (t178 != -720885LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint8_t x1049 = 32U;
	static uint8_t x1050 = UINT8_MAX;
	volatile uint32_t t179 = 1414451388U;

    t179 = ((x1049*x1050)*(x1051%x1052));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x1057 = INT8_MAX;
	static int16_t x1058 = -3;
	uint64_t x1059 = 131211467001498LLU;
	int32_t x1060 = INT32_MAX;
	uint64_t t180 = 1072289595427LLU;

    t180 = ((x1057*x1058)*(x1059%x1060));

    if (t180 != 18446743991348858578LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1065 = -4;
	int64_t x1066 = 12LL;
	int32_t x1067 = -1;
	int16_t x1068 = -1;

    t181 = ((x1065*x1066)*(x1067%x1068));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1069 = 2633LLU;
	int32_t x1070 = INT32_MIN;
	int64_t x1071 = 5841411768LL;
	uint16_t x1072 = UINT16_MAX;

    t182 = ((x1069*x1070)*(x1071%x1072));

    if (t182 != 18361488169725067264LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1073 = 929778591216864627LLU;
	volatile int32_t x1074 = 167260;
	volatile int16_t x1075 = 1;
	uint16_t x1076 = 3112U;
	static uint64_t t183 = 51LLU;

    t183 = ((x1073*x1074)*(x1075%x1076));

    if (t183 != 8714625561257389140LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1082 = INT32_MIN;
	static int8_t x1083 = -1;
	volatile int32_t x1084 = -1;

    t184 = ((x1081*x1082)*(x1083%x1084));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1089 = 5583255LLU;
	uint8_t x1090 = 11U;
	static int16_t x1091 = -9;
	volatile uint16_t x1092 = 3U;
	volatile uint64_t t185 = 7548613018692985567LLU;

    t185 = ((x1089*x1090)*(x1091%x1092));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1093 = 1316742342778400206LLU;
	int8_t x1094 = INT8_MIN;
	uint16_t x1095 = 4077U;
	int8_t x1096 = INT8_MIN;

    t186 = ((x1093*x1094)*(x1095%x1096));

    if (t186 != 1767930970473735424LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1099 = -1;
	int64_t x1100 = INT64_MAX;
	volatile int64_t t187 = 810LL;

    t187 = ((x1097*x1098)*(x1099%x1100));

    if (t187 != -1559494944LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1105 = -1;
	int32_t x1107 = INT32_MAX;
	int32_t x1108 = -1;
	static volatile int32_t t188 = 221512;

    t188 = ((x1105*x1106)*(x1107%x1108));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x1109 = 234U;
	uint64_t x1110 = 131613LLU;
	int16_t x1112 = INT16_MIN;

    t189 = ((x1109*x1110)*(x1111%x1112));

    if (t189 != 1009139782014LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1113 = -1;
	uint8_t x1114 = 1U;
	int8_t x1115 = -8;
	uint64_t x1116 = 132192007357974954LLU;
	static uint64_t t190 = 2129005594825122116LLU;

    t190 = ((x1113*x1114)*(x1115%x1116));

    if (t190 != 18374689022758518614LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1117 = UINT16_MAX;
	uint16_t x1118 = 0U;
	int32_t x1119 = INT32_MAX;
	int32_t t191 = -411409;

    t191 = ((x1117*x1118)*(x1119%x1120));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1135 = -1;
	volatile int32_t t192 = 3090;

    t192 = ((x1133*x1134)*(x1135%x1136));

    if (t192 != -2580) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1137 = UINT8_MAX;
	int64_t x1138 = 4564724209LL;
	int8_t x1140 = 3;
	volatile int64_t t193 = -183900LL;

    t193 = ((x1137*x1138)*(x1139%x1140));

    if (t193 != 2328009346590LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1141 = INT32_MIN;
	static uint32_t x1142 = 6224U;
	int16_t x1143 = INT16_MIN;
	uint32_t x1144 = 200475U;

    t194 = ((x1141*x1142)*(x1143%x1144));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1146 = 241989708195850983LL;
	uint64_t x1147 = 522063LLU;
	static int16_t x1148 = -14;
	volatile uint64_t t195 = 596183343529278891LLU;

    t195 = ((x1145*x1146)*(x1147%x1148));

    if (t195 != 4609273811288912358LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1153 = -1;
	int16_t x1154 = -1;
	static volatile int8_t x1155 = -1;
	uint8_t x1156 = 13U;
	volatile int32_t t196 = -115;

    t196 = ((x1153*x1154)*(x1155%x1156));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1157 = -1;
	int32_t x1159 = -1;
	int64_t t197 = 3622055175982612LL;

    t197 = ((x1157*x1158)*(x1159%x1160));

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1166 = INT16_MIN;
	int32_t x1167 = -3960113;
	uint16_t x1168 = 27633U;
	volatile uint32_t t198 = 1U;

    t198 = ((x1165*x1166)*(x1167%x1168));

    if (t198 != 4013359104U) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x1169 = 0U;
	int16_t x1170 = 51;
	int64_t x1171 = -1LL;
	volatile uint64_t x1172 = 1966011716LLU;

    t199 = ((x1169*x1170)*(x1171%x1172));

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

