
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

static int8_t x5 = 5;
uint16_t x6 = 3552U;
volatile int8_t x10 = INT8_MIN;
volatile uint64_t x15 = 8LLU;
volatile int64_t x24 = INT64_MIN;
int16_t x25 = INT16_MAX;
uint32_t t4 = 46U;
static int8_t x31 = INT8_MIN;
volatile uint8_t x32 = 59U;
volatile int16_t x37 = INT16_MIN;
uint64_t x39 = 91726331LLU;
volatile int32_t t8 = 29214;
volatile int32_t t10 = -5761;
uint64_t t11 = 1LLU;
uint8_t x65 = 43U;
int32_t x68 = 16185086;
int32_t t15 = 82;
volatile int32_t t17 = 756;
volatile int8_t x93 = INT8_MAX;
static uint64_t x99 = 1796456LLU;
int32_t x100 = INT32_MIN;
static uint8_t x103 = 25U;
int32_t t20 = -994962;
uint64_t x108 = 120307309868LLU;
volatile uint32_t t21 = 1548U;
uint8_t x112 = 101U;
int8_t x117 = INT8_MIN;
int8_t x119 = -7;
static int64_t t24 = -1429LL;
int32_t x131 = -1034998546;
int64_t x143 = INT64_MIN;
int64_t x144 = INT64_MAX;
int8_t x145 = INT8_MIN;
static uint8_t x147 = 51U;
uint8_t x149 = UINT8_MAX;
int64_t x155 = 932309484LL;
int64_t t30 = -21985070627LL;
uint64_t x157 = 6846717973LLU;
uint8_t x159 = 21U;
static uint64_t x171 = UINT64_MAX;
static uint8_t x174 = UINT8_MAX;
volatile uint32_t t33 = 3723U;
int32_t x187 = INT32_MAX;
static uint64_t t35 = 2652390LLU;
int32_t x194 = INT32_MIN;
int32_t x196 = -161;
uint64_t t37 = 15705365871195344LLU;
volatile int32_t x197 = INT32_MIN;
uint16_t x216 = UINT16_MAX;
int16_t x217 = INT16_MAX;
static volatile int32_t t41 = 255;
int16_t x222 = INT16_MAX;
int8_t x223 = -12;
int16_t x224 = INT16_MAX;
uint64_t x230 = 4LLU;
uint16_t x234 = 1U;
static volatile int16_t x238 = INT16_MAX;
volatile uint16_t x250 = 1U;
uint16_t x261 = 1U;
uint64_t t50 = 736051041LLU;
int8_t x271 = INT8_MIN;
static int8_t x278 = -1;
int64_t x279 = -1LL;
uint64_t x281 = 27487322932465LLU;
volatile uint32_t x285 = UINT32_MAX;
int16_t x288 = 1118;
volatile uint32_t t55 = 13U;
int32_t x298 = 3125;
uint32_t t58 = 2764828U;
int16_t x306 = 32;
int8_t x322 = -1;
int16_t x323 = INT16_MIN;
uint8_t x324 = UINT8_MAX;
int8_t x325 = INT8_MIN;
int32_t x334 = -1;
int64_t x340 = 247966644025349LL;
volatile int8_t x342 = INT8_MIN;
uint16_t x344 = 12384U;
volatile int32_t t66 = 466701664;
int8_t x350 = INT8_MIN;
int32_t x351 = INT32_MAX;
volatile uint16_t x352 = 35U;
int16_t x366 = 0;
static int32_t x379 = INT32_MIN;
uint8_t x388 = UINT8_MAX;
volatile uint32_t x412 = 58U;
int16_t x436 = INT16_MAX;
int64_t t81 = 1997899831525LL;
int64_t x473 = 11026LL;
int64_t x474 = -1LL;
int16_t x494 = -1;
volatile uint32_t x506 = 9271263U;
int32_t x519 = INT32_MIN;
static int32_t x520 = -46319982;
uint64_t x521 = 6LLU;
volatile uint64_t t90 = 117084470650656LLU;
int8_t x525 = INT8_MAX;
static int32_t t91 = 50404;
static int32_t x539 = INT32_MAX;
int64_t x553 = 6895408078LL;
volatile int64_t t96 = -25062610LL;
uint64_t x567 = UINT64_MAX;
static int32_t t98 = 3457;
uint32_t t101 = 27227U;
int32_t t102 = 1300594;
volatile uint64_t x598 = 263884795115LLU;
volatile uint64_t t103 = 4820637813LLU;
int8_t x605 = 3;
uint32_t x610 = 1U;
static int8_t x616 = INT8_MIN;
int16_t x620 = 270;
int8_t x625 = INT8_MIN;
int32_t x638 = 1012101;
int16_t x639 = INT16_MIN;
volatile int8_t x646 = INT8_MIN;
static volatile int8_t x653 = -1;
int8_t x660 = INT8_MIN;
int32_t x662 = -53087;
uint32_t x671 = UINT32_MAX;
uint64_t x681 = 506992255252647LLU;
volatile int16_t x682 = -1;
uint64_t t120 = 48082LLU;
volatile int8_t x694 = INT8_MAX;
int64_t x701 = -1LL;
int32_t x705 = -1;
int8_t x707 = -1;
uint16_t x722 = UINT16_MAX;
int64_t x736 = INT64_MAX;
volatile int16_t x738 = -1;
uint8_t x741 = 0U;
uint64_t x745 = UINT64_MAX;
uint16_t x750 = 7874U;
int16_t x755 = -1;
int32_t t135 = -100607;
int8_t x764 = -1;
int32_t x786 = INT32_MIN;
uint16_t x795 = 7594U;
volatile uint32_t x798 = UINT32_MAX;
static volatile int32_t x805 = -119;
int16_t x808 = -1;
static volatile uint32_t x814 = 137306U;
int16_t x819 = -1;
static volatile int32_t t144 = 15712;
uint32_t x830 = 10U;
int8_t x838 = -1;
uint8_t x842 = 0U;
volatile uint64_t x843 = UINT64_MAX;
volatile uint64_t x844 = 17720LLU;
volatile int32_t t147 = 15427;
static int8_t x846 = 61;
static uint64_t x848 = UINT64_MAX;
static int32_t t149 = 6;
uint64_t x858 = 5342062818023148LLU;
int8_t x861 = INT8_MIN;
volatile uint16_t x863 = 3156U;
int64_t x864 = -1LL;
static int16_t x866 = INT16_MIN;
int32_t t152 = -928457133;
int8_t x876 = -1;
volatile int16_t x888 = INT16_MIN;
int32_t t156 = -32032;
uint64_t x892 = 74821504262476186LLU;
static int16_t x897 = INT16_MIN;
volatile int32_t t158 = 2;
static uint32_t x908 = 430160725U;
int32_t x913 = -1;
int32_t x914 = -1;
int16_t x919 = INT16_MIN;
volatile int8_t x921 = INT8_MIN;
static int32_t x923 = 46164995;
uint64_t x924 = UINT64_MAX;
int64_t t162 = -3416957LL;
volatile uint64_t t164 = 213586LLU;
volatile int8_t x942 = INT8_MIN;
int8_t x952 = -1;
volatile int16_t x953 = 2613;
int16_t x955 = 26;
static volatile int32_t t168 = 16514637;
int32_t x982 = -1;
volatile uint8_t x994 = 27U;
static uint32_t x997 = UINT32_MAX;
static uint8_t x1000 = UINT8_MAX;
int64_t x1009 = -1LL;
uint8_t x1010 = 1U;
volatile int8_t x1011 = 1;
static int32_t x1012 = INT32_MIN;
int64_t x1017 = -4921553LL;
int32_t x1025 = -1;
volatile int32_t t177 = 16663826;
static volatile int32_t x1031 = INT32_MIN;
uint64_t x1037 = UINT64_MAX;
uint8_t x1038 = 3U;
int32_t x1040 = INT32_MIN;
volatile uint32_t t181 = 0U;
volatile int32_t t184 = 177;
int64_t t185 = 27732LL;
int32_t x1088 = INT32_MAX;
uint32_t t186 = 7446830U;
int8_t x1099 = INT8_MAX;
int32_t t190 = 2301057;
int8_t x1138 = INT8_MIN;
static int64_t x1141 = -152270548748843LL;
uint32_t x1145 = 92991429U;
volatile int32_t x1152 = INT32_MAX;
uint64_t t195 = 0LLU;
volatile uint64_t t196 = 124939704LLU;
uint64_t x1157 = 6116LLU;
static volatile uint64_t t197 = 1992087552LLU;
static int8_t x1161 = -1;
int8_t x1165 = INT8_MIN;


void f0(void) {
    	static volatile int32_t x7 = -1;
	int16_t x8 = INT16_MIN;
	volatile int32_t t0 = 57015;

    t0 = ((x5*x6)*(x7==x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x9 = INT8_MIN;
	volatile int64_t x11 = INT64_MAX;
	volatile uint64_t x12 = 3475344617851604LLU;
	volatile int32_t t1 = 3667;

    t1 = ((x9*x10)*(x11==x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x13 = INT32_MIN;
	uint64_t x14 = 43300762914103LLU;
	uint16_t x16 = 207U;
	volatile uint64_t t2 = 4055843324LLU;

    t2 = ((x13*x14)*(x15==x16));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x21 = INT32_MIN;
	static uint32_t x22 = UINT32_MAX;
	int64_t x23 = INT64_MIN;
	volatile uint32_t t3 = 14510U;

    t3 = ((x21*x22)*(x23==x24));

    if (t3 != 2147483648U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x26 = UINT32_MAX;
	int8_t x27 = -1;
	int8_t x28 = -3;

    t4 = ((x25*x26)*(x27==x28));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x29 = -1;
	static volatile int64_t x30 = INT64_MAX;
	int64_t t5 = 365517689663762LL;

    t5 = ((x29*x30)*(x31==x32));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x38 = 56637555LLU;
	volatile int16_t x40 = INT16_MAX;
	volatile uint64_t t6 = 1051230647LLU;

    t6 = ((x37*x38)*(x39==x40));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x41 = 303U;
	volatile int8_t x42 = -1;
	uint16_t x43 = UINT16_MAX;
	static int32_t x44 = 36483957;
	volatile int32_t t7 = 314;

    t7 = ((x41*x42)*(x43==x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x45 = -1;
	int8_t x46 = 12;
	int8_t x47 = INT8_MIN;
	int8_t x48 = INT8_MAX;

    t8 = ((x45*x46)*(x47==x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = 1893LL;
	int16_t x50 = INT16_MIN;
	int64_t x51 = 18135451126LL;
	static int16_t x52 = -3;
	volatile int64_t t9 = 2677745LL;

    t9 = ((x49*x50)*(x51==x52));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x53 = INT8_MIN;
	int8_t x54 = 3;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = 31LLU;

    t10 = ((x53*x54)*(x55==x56));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = -1;
	uint64_t x62 = 225LLU;
	uint64_t x63 = 15047162041654LLU;
	int32_t x64 = INT32_MIN;

    t11 = ((x61*x62)*(x63==x64));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x66 = INT16_MAX;
	int64_t x67 = -9002LL;
	int32_t t12 = 3;

    t12 = ((x65*x66)*(x67==x68));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x69 = 1372U;
	uint8_t x70 = UINT8_MAX;
	uint16_t x71 = 40U;
	uint32_t x72 = 82U;
	uint32_t t13 = 41948718U;

    t13 = ((x69*x70)*(x71==x72));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	int32_t x75 = -79;
	int32_t x76 = -1;
	volatile uint64_t t14 = 1624990291498LLU;

    t14 = ((x73*x74)*(x75==x76));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x77 = INT8_MIN;
	volatile int16_t x78 = -32;
	uint64_t x79 = 24971390LLU;
	uint16_t x80 = 34U;

    t15 = ((x77*x78)*(x79==x80));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x85 = -1;
	volatile int16_t x86 = -1;
	volatile int8_t x87 = INT8_MAX;
	uint8_t x88 = 3U;
	volatile int32_t t16 = 2491;

    t16 = ((x85*x86)*(x87==x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x89 = INT16_MAX;
	int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MIN;
	volatile uint32_t x92 = UINT32_MAX;

    t17 = ((x89*x90)*(x91==x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint32_t x94 = 30170U;
	int16_t x95 = -1;
	int32_t x96 = -309;
	uint32_t t18 = 178U;

    t18 = ((x93*x94)*(x95==x96));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x97 = 5148995LL;
	int64_t x98 = -1LL;
	int64_t t19 = -3LL;

    t19 = ((x97*x98)*(x99==x100));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x101 = INT16_MAX;
	int16_t x102 = 431;
	uint8_t x104 = 0U;

    t20 = ((x101*x102)*(x103==x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x105 = 52445U;
	int8_t x106 = INT8_MIN;
	volatile uint16_t x107 = UINT16_MAX;

    t21 = ((x105*x106)*(x107==x108));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = -713;
	volatile uint64_t x110 = 14LLU;
	int16_t x111 = INT16_MIN;
	static volatile uint64_t t22 = 1996786LLU;

    t22 = ((x109*x110)*(x111==x112));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x118 = 1;
	int16_t x120 = -1;
	int32_t t23 = -9506038;

    t23 = ((x117*x118)*(x119==x120));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x125 = UINT8_MAX;
	volatile int64_t x126 = -1713455350LL;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 0U;

    t24 = ((x125*x126)*(x127==x128));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x129 = 3743922LLU;
	volatile uint16_t x130 = 417U;
	uint8_t x132 = UINT8_MAX;
	volatile uint64_t t25 = 1520384459LLU;

    t25 = ((x129*x130)*(x131==x132));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x137 = 2312U;
	uint64_t x138 = 365149515229264LLU;
	int64_t x139 = -15525645LL;
	uint32_t x140 = UINT32_MAX;
	static uint64_t t26 = 301726976454498LLU;

    t26 = ((x137*x138)*(x139==x140));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x141 = INT8_MIN;
	uint64_t x142 = 231LLU;
	static uint64_t t27 = 1943120223180LLU;

    t27 = ((x141*x142)*(x143==x144));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x146 = INT16_MIN;
	int64_t x148 = INT64_MIN;
	volatile int32_t t28 = 48;

    t28 = ((x145*x146)*(x147==x148));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x150 = -1;
	int32_t x151 = -118;
	int64_t x152 = -1LL;
	int32_t t29 = -98128060;

    t29 = ((x149*x150)*(x151==x152));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x153 = -1;
	int64_t x154 = 364101407846815LL;
	uint32_t x156 = UINT32_MAX;

    t30 = ((x153*x154)*(x155==x156));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x158 = -1;
	uint64_t x160 = 6885360200024LLU;
	uint64_t t31 = 7578581724958LLU;

    t31 = ((x157*x158)*(x159==x160));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x169 = 13;
	static volatile int64_t x170 = 13882391418LL;
	volatile uint64_t x172 = UINT64_MAX;
	volatile int64_t t32 = 1004518718LL;

    t32 = ((x169*x170)*(x171==x172));

    if (t32 != 180471088434LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x173 = 677093U;
	int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MIN;

    t33 = ((x173*x174)*(x175==x176));

    if (t33 != 172658715U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x177 = -35;
	int8_t x178 = INT8_MAX;
	int16_t x179 = -4;
	uint64_t x180 = 6512170113LLU;
	int32_t t34 = -216719;

    t34 = ((x177*x178)*(x179==x180));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x185 = INT16_MIN;
	uint64_t x186 = UINT64_MAX;
	static uint64_t x188 = 6560LLU;

    t35 = ((x185*x186)*(x187==x188));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x189 = INT8_MAX;
	uint8_t x190 = 121U;
	static uint64_t x191 = UINT64_MAX;
	uint8_t x192 = 0U;
	static volatile int32_t t36 = 1;

    t36 = ((x189*x190)*(x191==x192));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x193 = 270402496012760941LLU;
	uint32_t x195 = UINT32_MAX;

    t37 = ((x193*x194)*(x195==x196));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x198 = UINT32_MAX;
	int64_t x199 = INT64_MIN;
	static uint32_t x200 = UINT32_MAX;
	uint32_t t38 = 104290353U;

    t38 = ((x197*x198)*(x199==x200));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x209 = -6851;
	volatile uint16_t x210 = UINT16_MAX;
	uint16_t x211 = 969U;
	uint8_t x212 = 1U;
	volatile int32_t t39 = -1601;

    t39 = ((x209*x210)*(x211==x212));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x213 = 1U;
	int32_t x214 = 25;
	int64_t x215 = INT64_MIN;
	int32_t t40 = 806413;

    t40 = ((x213*x214)*(x215==x216));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x218 = 0U;
	static uint16_t x219 = 0U;
	int64_t x220 = INT64_MIN;

    t41 = ((x217*x218)*(x219==x220));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x221 = -1;
	volatile int32_t t42 = 239;

    t42 = ((x221*x222)*(x223==x224));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x229 = 23161U;
	int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MIN;
	uint64_t t43 = 11LLU;

    t43 = ((x229*x230)*(x231==x232));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x233 = 425214U;
	int64_t x235 = INT64_MAX;
	static volatile int8_t x236 = -1;
	volatile uint32_t t44 = 31364521U;

    t44 = ((x233*x234)*(x235==x236));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x237 = INT8_MIN;
	int16_t x239 = INT16_MAX;
	int32_t x240 = -1;
	int32_t t45 = 14547776;

    t45 = ((x237*x238)*(x239==x240));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x245 = UINT16_MAX;
	int8_t x246 = INT8_MIN;
	uint16_t x247 = UINT16_MAX;
	int16_t x248 = INT16_MIN;
	volatile int32_t t46 = -6;

    t46 = ((x245*x246)*(x247==x248));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x249 = INT16_MIN;
	int64_t x251 = -6944739LL;
	static uint16_t x252 = UINT16_MAX;
	volatile int32_t t47 = 1066408;

    t47 = ((x249*x250)*(x251==x252));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x257 = -6;
	uint32_t x258 = 8U;
	int64_t x259 = 11LL;
	volatile uint8_t x260 = 50U;
	uint32_t t48 = 622238732U;

    t48 = ((x257*x258)*(x259==x260));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x262 = INT32_MIN;
	int16_t x263 = -1;
	int64_t x264 = INT64_MIN;
	volatile int32_t t49 = -1254839;

    t49 = ((x261*x262)*(x263==x264));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x265 = 21406107112LLU;
	uint64_t x266 = 82LLU;
	int16_t x267 = INT16_MIN;
	volatile int32_t x268 = INT32_MIN;

    t50 = ((x265*x266)*(x267==x268));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x269 = 3;
	int64_t x270 = 298553LL;
	uint8_t x272 = 0U;
	int64_t t51 = 427775025LL;

    t51 = ((x269*x270)*(x271==x272));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x273 = 28;
	uint8_t x274 = 0U;
	uint8_t x275 = 11U;
	uint16_t x276 = 7355U;
	int32_t t52 = 3;

    t52 = ((x273*x274)*(x275==x276));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x277 = 43192U;
	int64_t x280 = INT64_MIN;
	uint32_t t53 = 937607U;

    t53 = ((x277*x278)*(x279==x280));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x282 = -15302789;
	volatile uint64_t x283 = UINT64_MAX;
	int16_t x284 = INT16_MIN;
	volatile uint64_t t54 = 1825LLU;

    t54 = ((x281*x282)*(x283==x284));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x286 = 1259U;
	int64_t x287 = 22LL;

    t55 = ((x285*x286)*(x287==x288));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x289 = -1LL;
	static int32_t x290 = INT32_MAX;
	int64_t x291 = -1LL;
	uint64_t x292 = UINT64_MAX;
	volatile int64_t t56 = -119399518370405LL;

    t56 = ((x289*x290)*(x291==x292));

    if (t56 != -2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint8_t x297 = 0U;
	int64_t x299 = INT64_MIN;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t57 = 971;

    t57 = ((x297*x298)*(x299==x300));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x301 = -1;
	uint32_t x302 = 65103061U;
	int8_t x303 = -1;
	volatile int16_t x304 = INT16_MAX;

    t58 = ((x301*x302)*(x303==x304));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x305 = -1;
	uint8_t x307 = 65U;
	int16_t x308 = INT16_MAX;
	int32_t t59 = -120;

    t59 = ((x305*x306)*(x307==x308));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x317 = UINT32_MAX;
	static uint64_t x318 = UINT64_MAX;
	static int64_t x319 = INT64_MIN;
	int8_t x320 = INT8_MAX;
	uint64_t t60 = 129259LLU;

    t60 = ((x317*x318)*(x319==x320));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x321 = INT64_MAX;
	int64_t t61 = 0LL;

    t61 = ((x321*x322)*(x323==x324));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x326 = 5U;
	int8_t x327 = INT8_MAX;
	int8_t x328 = INT8_MAX;
	int32_t t62 = 31;

    t62 = ((x325*x326)*(x327==x328));

    if (t62 != -640) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x329 = 194U;
	int16_t x330 = INT16_MAX;
	static int64_t x331 = INT64_MAX;
	volatile int16_t x332 = 0;
	volatile int32_t t63 = -13950;

    t63 = ((x329*x330)*(x331==x332));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x333 = 20462710680215LL;
	int8_t x335 = 1;
	static int16_t x336 = INT16_MAX;
	int64_t t64 = -63086940894273LL;

    t64 = ((x333*x334)*(x335==x336));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x337 = INT32_MIN;
	static uint64_t x338 = 352559569446245LLU;
	int16_t x339 = -820;
	volatile uint64_t t65 = 62995416299LLU;

    t65 = ((x337*x338)*(x339==x340));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x341 = 50470;
	int32_t x343 = -195;

    t66 = ((x341*x342)*(x343==x344));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x345 = UINT64_MAX;
	int32_t x346 = INT32_MAX;
	volatile uint16_t x347 = 32U;
	static int8_t x348 = -1;
	uint64_t t67 = 16037668LLU;

    t67 = ((x345*x346)*(x347==x348));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x349 = INT8_MIN;
	volatile int32_t t68 = 368126;

    t68 = ((x349*x350)*(x351==x352));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x353 = INT64_MIN;
	uint64_t x354 = 5379152648637729849LLU;
	static uint64_t x355 = 3194688536085154837LLU;
	static int32_t x356 = INT32_MIN;
	static uint64_t t69 = 89986792996756811LLU;

    t69 = ((x353*x354)*(x355==x356));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x365 = INT32_MAX;
	int64_t x367 = 880LL;
	int8_t x368 = -1;
	static int32_t t70 = -195742906;

    t70 = ((x365*x366)*(x367==x368));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x373 = -1;
	int32_t x374 = INT32_MAX;
	int8_t x375 = -1;
	int16_t x376 = INT16_MIN;
	static volatile int32_t t71 = -6;

    t71 = ((x373*x374)*(x375==x376));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x377 = UINT8_MAX;
	int8_t x378 = INT8_MIN;
	static uint64_t x380 = UINT64_MAX;
	static volatile int32_t t72 = -6126;

    t72 = ((x377*x378)*(x379==x380));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x385 = -8;
	int8_t x386 = -1;
	volatile int32_t x387 = -1;
	int32_t t73 = 24714;

    t73 = ((x385*x386)*(x387==x388));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x397 = -1;
	uint8_t x398 = UINT8_MAX;
	int16_t x399 = -1;
	volatile int16_t x400 = 2;
	int32_t t74 = -7143184;

    t74 = ((x397*x398)*(x399==x400));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x401 = -94951LL;
	int32_t x402 = -1;
	uint32_t x403 = 375635U;
	volatile int8_t x404 = INT8_MIN;
	int64_t t75 = 0LL;

    t75 = ((x401*x402)*(x403==x404));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x409 = 135109420U;
	int8_t x410 = 55;
	int64_t x411 = -1LL;
	volatile uint32_t t76 = 2902U;

    t76 = ((x409*x410)*(x411==x412));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x425 = 121U;
	volatile int8_t x426 = INT8_MIN;
	uint64_t x427 = 100757LLU;
	int64_t x428 = 3452LL;
	static volatile int32_t t77 = 205386444;

    t77 = ((x425*x426)*(x427==x428));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x433 = INT16_MIN;
	int16_t x434 = INT16_MIN;
	int32_t x435 = INT32_MIN;
	int32_t t78 = 20;

    t78 = ((x433*x434)*(x435==x436));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x437 = -1;
	uint32_t x438 = 24393U;
	int16_t x439 = INT16_MAX;
	static int32_t x440 = INT32_MIN;
	uint32_t t79 = 6757064U;

    t79 = ((x437*x438)*(x439==x440));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x445 = -1;
	uint8_t x446 = UINT8_MAX;
	static int16_t x447 = -73;
	uint16_t x448 = 10412U;
	volatile int32_t t80 = -1;

    t80 = ((x445*x446)*(x447==x448));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x465 = INT32_MIN;
	volatile int64_t x466 = -1LL;
	static uint16_t x467 = 190U;
	volatile int32_t x468 = INT32_MIN;

    t81 = ((x465*x466)*(x467==x468));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x475 = UINT8_MAX;
	volatile int64_t x476 = -18464625LL;
	static volatile int64_t t82 = 15LL;

    t82 = ((x473*x474)*(x475==x476));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x477 = 10;
	static uint8_t x478 = UINT8_MAX;
	int8_t x479 = INT8_MIN;
	volatile int8_t x480 = INT8_MIN;
	static int32_t t83 = 3274;

    t83 = ((x477*x478)*(x479==x480));

    if (t83 != 2550) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x485 = UINT64_MAX;
	int8_t x486 = 21;
	volatile int8_t x487 = -1;
	int8_t x488 = 34;
	uint64_t t84 = 19740641LLU;

    t84 = ((x485*x486)*(x487==x488));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x493 = INT8_MIN;
	int64_t x495 = -1LL;
	int16_t x496 = -1;
	volatile int32_t t85 = -22337051;

    t85 = ((x493*x494)*(x495==x496));

    if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x497 = INT32_MAX;
	volatile uint32_t x498 = 96489U;
	static int16_t x499 = -1;
	static uint16_t x500 = UINT16_MAX;
	uint32_t t86 = 37375289U;

    t86 = ((x497*x498)*(x499==x500));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x501 = -1;
	volatile int16_t x502 = INT16_MIN;
	int16_t x503 = -1;
	int16_t x504 = -1;
	static int32_t t87 = -395969054;

    t87 = ((x501*x502)*(x503==x504));

    if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x505 = -1;
	volatile uint8_t x507 = 1U;
	static int32_t x508 = 0;
	uint32_t t88 = 256196U;

    t88 = ((x505*x506)*(x507==x508));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x517 = 3955;
	volatile uint16_t x518 = UINT16_MAX;
	static int32_t t89 = 68058;

    t89 = ((x517*x518)*(x519==x520));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x522 = -3024133;
	int64_t x523 = INT64_MIN;
	int16_t x524 = 661;

    t90 = ((x521*x522)*(x523==x524));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x526 = INT16_MIN;
	static uint32_t x527 = UINT32_MAX;
	uint64_t x528 = UINT64_MAX;

    t91 = ((x525*x526)*(x527==x528));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x529 = -1;
	int8_t x530 = INT8_MAX;
	int16_t x531 = 12;
	int32_t x532 = INT32_MAX;
	int32_t t92 = -36;

    t92 = ((x529*x530)*(x531==x532));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x533 = INT8_MIN;
	int16_t x534 = -48;
	volatile uint32_t x535 = 55472U;
	int16_t x536 = INT16_MAX;
	volatile int32_t t93 = -61158;

    t93 = ((x533*x534)*(x535==x536));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x537 = 12123566992968137LLU;
	uint32_t x538 = UINT32_MAX;
	static uint16_t x540 = UINT16_MAX;
	volatile uint64_t t94 = 49200323915905367LLU;

    t94 = ((x537*x538)*(x539==x540));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x549 = INT16_MIN;
	uint64_t x550 = 6011643935LLU;
	volatile int16_t x551 = INT16_MIN;
	volatile uint64_t x552 = 58573LLU;
	uint64_t t95 = 512813053LLU;

    t95 = ((x549*x550)*(x551==x552));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x554 = 154;
	int8_t x555 = -1;
	volatile uint64_t x556 = 3854583LLU;

    t96 = ((x553*x554)*(x555==x556));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x561 = 387687U;
	int64_t x562 = 333231040763LL;
	int64_t x563 = INT64_MAX;
	int8_t x564 = INT8_MIN;
	static int64_t t97 = -582847LL;

    t97 = ((x561*x562)*(x563==x564));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x565 = -1;
	int16_t x566 = INT16_MIN;
	volatile uint8_t x568 = 7U;

    t98 = ((x565*x566)*(x567==x568));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x573 = -1;
	int8_t x574 = INT8_MIN;
	uint8_t x575 = 14U;
	uint64_t x576 = UINT64_MAX;
	volatile int32_t t99 = -423834;

    t99 = ((x573*x574)*(x575==x576));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x581 = UINT32_MAX;
	uint16_t x582 = UINT16_MAX;
	static int32_t x583 = INT32_MAX;
	static int8_t x584 = -1;
	static uint32_t t100 = 122U;

    t100 = ((x581*x582)*(x583==x584));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x585 = UINT8_MAX;
	static uint32_t x586 = 1649074U;
	volatile int8_t x587 = -1;
	static int16_t x588 = -1;

    t101 = ((x585*x586)*(x587==x588));

    if (t101 != 420513870U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x593 = 1;
	int32_t x594 = 9;
	uint64_t x595 = 66742770003570LLU;
	volatile uint8_t x596 = 1U;

    t102 = ((x593*x594)*(x595==x596));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x597 = INT32_MAX;
	int64_t x599 = INT64_MIN;
	int16_t x600 = 16;

    t103 = ((x597*x598)*(x599==x600));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x601 = 0U;
	volatile int16_t x602 = INT16_MIN;
	uint8_t x603 = 1U;
	int64_t x604 = INT64_MIN;
	static volatile int32_t t104 = -471144967;

    t104 = ((x601*x602)*(x603==x604));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x606 = 364LLU;
	volatile int16_t x607 = INT16_MIN;
	int16_t x608 = INT16_MIN;
	uint64_t t105 = 863616784839997571LLU;

    t105 = ((x605*x606)*(x607==x608));

    if (t105 != 1092LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x609 = 1;
	int64_t x611 = INT64_MIN;
	uint64_t x612 = 243351471729159831LLU;
	static uint32_t t106 = 83U;

    t106 = ((x609*x610)*(x611==x612));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = INT8_MIN;
	int32_t x615 = -1;
	volatile int32_t t107 = 5051;

    t107 = ((x613*x614)*(x615==x616));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x617 = 121;
	uint16_t x618 = 3240U;
	uint8_t x619 = 11U;
	volatile int32_t t108 = 49398072;

    t108 = ((x617*x618)*(x619==x620));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x626 = INT16_MAX;
	int16_t x627 = INT16_MAX;
	volatile uint16_t x628 = 18U;
	static int32_t t109 = 201;

    t109 = ((x625*x626)*(x627==x628));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x629 = -319;
	uint64_t x630 = 15519832311800134LLU;
	int32_t x631 = INT32_MIN;
	uint16_t x632 = 757U;
	volatile uint64_t t110 = 13617956040713852LLU;

    t110 = ((x629*x630)*(x631==x632));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint32_t x633 = 9961U;
	volatile int32_t x634 = INT32_MIN;
	uint8_t x635 = 1U;
	uint64_t x636 = 887339519LLU;
	uint32_t t111 = 6095U;

    t111 = ((x633*x634)*(x635==x636));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x637 = 114;
	int16_t x640 = -1;
	int32_t t112 = 125880520;

    t112 = ((x637*x638)*(x639==x640));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x641 = -188580203LL;
	static int8_t x642 = 0;
	uint64_t x643 = 766802438LLU;
	uint16_t x644 = UINT16_MAX;
	static int64_t t113 = 1162LL;

    t113 = ((x641*x642)*(x643==x644));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x645 = UINT32_MAX;
	int16_t x647 = INT16_MIN;
	int32_t x648 = -1;
	static volatile uint32_t t114 = 2000712324U;

    t114 = ((x645*x646)*(x647==x648));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x654 = UINT32_MAX;
	int64_t x655 = INT64_MIN;
	volatile int64_t x656 = -795990LL;
	uint32_t t115 = 76177961U;

    t115 = ((x653*x654)*(x655==x656));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x657 = 43U;
	static int8_t x658 = 0;
	uint8_t x659 = 12U;
	volatile int32_t t116 = -29204;

    t116 = ((x657*x658)*(x659==x660));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x661 = 61;
	int8_t x663 = INT8_MIN;
	int32_t x664 = INT32_MIN;
	static volatile int32_t t117 = 6414306;

    t117 = ((x661*x662)*(x663==x664));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x669 = UINT8_MAX;
	volatile uint16_t x670 = 7188U;
	static volatile uint32_t x672 = 1U;
	int32_t t118 = -9063;

    t118 = ((x669*x670)*(x671==x672));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x673 = 130601553004380199LLU;
	int8_t x674 = -1;
	uint64_t x675 = 1873LLU;
	static int8_t x676 = -60;
	volatile uint64_t t119 = 2LLU;

    t119 = ((x673*x674)*(x675==x676));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x683 = -1;
	int16_t x684 = -1;

    t120 = ((x681*x682)*(x683==x684));

    if (t120 != 18446237081454298969LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x693 = 7;
	int16_t x695 = INT16_MIN;
	volatile int64_t x696 = 0LL;
	int32_t t121 = -726;

    t121 = ((x693*x694)*(x695==x696));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x697 = INT16_MIN;
	int16_t x698 = INT16_MAX;
	volatile uint8_t x699 = 5U;
	uint16_t x700 = 1U;
	volatile int32_t t122 = -745224;

    t122 = ((x697*x698)*(x699==x700));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x702 = INT64_MAX;
	uint64_t x703 = UINT64_MAX;
	volatile uint64_t x704 = UINT64_MAX;
	volatile int64_t t123 = 5LL;

    t123 = ((x701*x702)*(x703==x704));

    if (t123 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x706 = -1;
	volatile int64_t x708 = 57957315255271LL;
	volatile int32_t t124 = 3221215;

    t124 = ((x705*x706)*(x707==x708));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x709 = -1;
	int32_t x710 = -312;
	uint64_t x711 = 4884882758930166357LLU;
	static int64_t x712 = INT64_MAX;
	static volatile int32_t t125 = 3741;

    t125 = ((x709*x710)*(x711==x712));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x717 = UINT64_MAX;
	static int64_t x718 = INT64_MAX;
	uint64_t x719 = 640534160237032067LLU;
	int32_t x720 = INT32_MIN;
	uint64_t t126 = 965810747371LLU;

    t126 = ((x717*x718)*(x719==x720));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x721 = -328923LL;
	volatile int8_t x723 = INT8_MAX;
	int16_t x724 = -16134;
	int64_t t127 = -270955535211LL;

    t127 = ((x721*x722)*(x723==x724));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x725 = UINT64_MAX;
	int64_t x726 = -1LL;
	int64_t x727 = INT64_MIN;
	uint16_t x728 = 21848U;
	static volatile uint64_t t128 = 11604929047961711LLU;

    t128 = ((x725*x726)*(x727==x728));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x733 = 1846U;
	uint16_t x734 = UINT16_MAX;
	int8_t x735 = INT8_MIN;
	uint32_t t129 = 14U;

    t129 = ((x733*x734)*(x735==x736));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	volatile uint64_t x739 = UINT64_MAX;
	int64_t x740 = INT64_MIN;
	int32_t t130 = -1098378;

    t130 = ((x737*x738)*(x739==x740));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x742 = -1;
	static uint64_t x743 = 63648171LLU;
	int16_t x744 = INT16_MIN;
	static int32_t t131 = 6;

    t131 = ((x741*x742)*(x743==x744));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x746 = -1;
	static uint16_t x747 = 22409U;
	uint16_t x748 = UINT16_MAX;
	volatile uint64_t t132 = 1329LLU;

    t132 = ((x745*x746)*(x747==x748));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x749 = UINT64_MAX;
	int8_t x751 = INT8_MAX;
	volatile uint16_t x752 = 40U;
	volatile uint64_t t133 = 99LLU;

    t133 = ((x749*x750)*(x751==x752));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x753 = -1;
	uint8_t x754 = 6U;
	int32_t x756 = -1;
	int32_t t134 = 7;

    t134 = ((x753*x754)*(x755==x756));

    if (t134 != -6) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x757 = -1;
	volatile uint16_t x758 = 11U;
	int64_t x759 = -1LL;
	int64_t x760 = INT64_MIN;

    t135 = ((x757*x758)*(x759==x760));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x761 = 13317U;
	uint16_t x762 = 2U;
	uint32_t x763 = 58086053U;
	uint32_t t136 = 1067784254U;

    t136 = ((x761*x762)*(x763==x764));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x785 = UINT32_MAX;
	int8_t x787 = -1;
	int8_t x788 = INT8_MAX;
	volatile uint32_t t137 = 327903903U;

    t137 = ((x785*x786)*(x787==x788));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x793 = -1;
	int16_t x794 = -1;
	int8_t x796 = INT8_MIN;
	int32_t t138 = -2;

    t138 = ((x793*x794)*(x795==x796));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x797 = 1;
	volatile int32_t x799 = INT32_MIN;
	int8_t x800 = -1;
	static volatile uint32_t t139 = 380310U;

    t139 = ((x797*x798)*(x799==x800));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x806 = 610632LL;
	static int8_t x807 = INT8_MIN;
	static int64_t t140 = 430LL;

    t140 = ((x805*x806)*(x807==x808));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x813 = 16462203U;
	volatile int16_t x815 = INT16_MAX;
	int64_t x816 = INT64_MIN;
	uint32_t t141 = 1591521U;

    t141 = ((x813*x814)*(x815==x816));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x817 = 491308;
	uint64_t x818 = UINT64_MAX;
	int8_t x820 = -1;
	volatile uint64_t t142 = 100303LLU;

    t142 = ((x817*x818)*(x819==x820));

    if (t142 != 18446744073709060308LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x821 = INT32_MIN;
	static uint32_t x822 = 1U;
	int16_t x823 = 1750;
	volatile int8_t x824 = 2;
	uint32_t t143 = 390U;

    t143 = ((x821*x822)*(x823==x824));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x825 = -3;
	static int32_t x826 = -1;
	int32_t x827 = INT32_MIN;
	static uint32_t x828 = 5009511U;

    t144 = ((x825*x826)*(x827==x828));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x829 = UINT64_MAX;
	int16_t x831 = 0;
	int8_t x832 = -1;
	static volatile uint64_t t145 = 19LLU;

    t145 = ((x829*x830)*(x831==x832));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x837 = INT8_MIN;
	int32_t x839 = -1;
	uint32_t x840 = 502530257U;
	int32_t t146 = -1173254;

    t146 = ((x837*x838)*(x839==x840));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x841 = INT8_MIN;

    t147 = ((x841*x842)*(x843==x844));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x845 = INT16_MIN;
	int32_t x847 = INT32_MAX;
	int32_t t148 = 0;

    t148 = ((x845*x846)*(x847==x848));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x853 = UINT8_MAX;
	static int8_t x854 = INT8_MAX;
	volatile int16_t x855 = INT16_MIN;
	static volatile uint8_t x856 = UINT8_MAX;

    t149 = ((x853*x854)*(x855==x856));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x857 = 21678513U;
	int16_t x859 = INT16_MIN;
	int16_t x860 = INT16_MIN;
	uint64_t t150 = 1525162522213411LLU;

    t150 = ((x857*x858)*(x859==x860));

    if (t150 != 17765696656592725292LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x862 = 138618289285492664LLU;
	uint64_t t151 = 3757LLU;

    t151 = ((x861*x862)*(x863==x864));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x865 = INT16_MAX;
	uint32_t x867 = 862089073U;
	static int32_t x868 = INT32_MIN;

    t152 = ((x865*x866)*(x867==x868));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x869 = 4U;
	int16_t x870 = INT16_MIN;
	uint8_t x871 = 36U;
	static int32_t x872 = -32395;
	int32_t t153 = -121092233;

    t153 = ((x869*x870)*(x871==x872));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x873 = INT16_MIN;
	uint8_t x874 = 57U;
	volatile int16_t x875 = INT16_MIN;
	static volatile int32_t t154 = -223924;

    t154 = ((x873*x874)*(x875==x876));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x881 = INT8_MIN;
	volatile int16_t x882 = INT16_MAX;
	int16_t x883 = INT16_MIN;
	int32_t x884 = 3143;
	volatile int32_t t155 = -24043;

    t155 = ((x881*x882)*(x883==x884));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x885 = INT8_MIN;
	volatile int16_t x886 = -5;
	int64_t x887 = INT64_MAX;

    t156 = ((x885*x886)*(x887==x888));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x889 = 10812LLU;
	uint64_t x890 = UINT64_MAX;
	uint16_t x891 = UINT16_MAX;
	volatile uint64_t t157 = 12377540833104270LLU;

    t157 = ((x889*x890)*(x891==x892));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x898 = -60;
	uint8_t x899 = 25U;
	uint8_t x900 = UINT8_MAX;

    t158 = ((x897*x898)*(x899==x900));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x905 = 17U;
	volatile uint8_t x906 = 3U;
	uint8_t x907 = 6U;
	int32_t t159 = -377610;

    t159 = ((x905*x906)*(x907==x908));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x915 = -587061319;
	int32_t x916 = -118337183;
	volatile int32_t t160 = 99032032;

    t160 = ((x913*x914)*(x915==x916));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x917 = 1016472LLU;
	int8_t x918 = INT8_MIN;
	uint8_t x920 = UINT8_MAX;
	uint64_t t161 = 15446307171678881LLU;

    t161 = ((x917*x918)*(x919==x920));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x922 = -1LL;

    t162 = ((x921*x922)*(x923==x924));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x925 = 3;
	int64_t x926 = -45045334689711594LL;
	volatile int64_t x927 = INT64_MIN;
	int64_t x928 = -1LL;
	static int64_t t163 = -327300431638LL;

    t163 = ((x925*x926)*(x927==x928));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x929 = 168096502LLU;
	static uint32_t x930 = 1996773U;
	int8_t x931 = INT8_MAX;
	int16_t x932 = 7699;

    t164 = ((x929*x930)*(x931==x932));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x941 = -1;
	int64_t x943 = -1LL;
	int8_t x944 = 26;
	static volatile int32_t t165 = -132900863;

    t165 = ((x941*x942)*(x943==x944));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x949 = 105179U;
	uint16_t x950 = 729U;
	volatile int16_t x951 = -1;
	uint32_t t166 = 647858169U;

    t166 = ((x949*x950)*(x951==x952));

    if (t166 != 76675491U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x954 = 230335U;
	uint64_t x956 = 472723346LLU;
	static volatile uint32_t t167 = 20105863U;

    t167 = ((x953*x954)*(x955==x956));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x957 = -1;
	int32_t x958 = -1;
	uint32_t x959 = 0U;
	uint8_t x960 = 118U;

    t168 = ((x957*x958)*(x959==x960));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x969 = -1;
	static uint8_t x970 = UINT8_MAX;
	int64_t x971 = INT64_MIN;
	int32_t x972 = INT32_MIN;
	volatile int32_t t169 = -71;

    t169 = ((x969*x970)*(x971==x972));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x981 = INT8_MIN;
	int32_t x983 = -1;
	uint16_t x984 = 1U;
	int32_t t170 = -465;

    t170 = ((x981*x982)*(x983==x984));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x989 = -485492109883497506LL;
	volatile uint64_t x990 = 4129LLU;
	int64_t x991 = 959631496836953536LL;
	volatile int32_t x992 = INT32_MAX;
	uint64_t t171 = 368667364641LLU;

    t171 = ((x989*x990)*(x991==x992));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x993 = -1760;
	uint32_t x995 = UINT32_MAX;
	int16_t x996 = INT16_MIN;
	int32_t t172 = 376772;

    t172 = ((x993*x994)*(x995==x996));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x998 = INT8_MAX;
	int32_t x999 = INT32_MIN;
	volatile uint32_t t173 = 50432U;

    t173 = ((x997*x998)*(x999==x1000));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1001 = 8413324LLU;
	static volatile uint16_t x1002 = UINT16_MAX;
	volatile uint16_t x1003 = 5554U;
	int16_t x1004 = INT16_MIN;
	uint64_t t174 = 92LLU;

    t174 = ((x1001*x1002)*(x1003==x1004));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t t175 = 6650764724LL;

    t175 = ((x1009*x1010)*(x1011==x1012));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1018 = 13U;
	volatile int16_t x1019 = 1;
	static int8_t x1020 = -1;
	int64_t t176 = -530721351099800LL;

    t176 = ((x1017*x1018)*(x1019==x1020));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x1026 = INT8_MIN;
	static uint32_t x1027 = 232982585U;
	int32_t x1028 = INT32_MIN;

    t177 = ((x1025*x1026)*(x1027==x1028));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1029 = -133668LL;
	int32_t x1030 = -1;
	int64_t x1032 = -1LL;
	volatile int64_t t178 = -11757218439LL;

    t178 = ((x1029*x1030)*(x1031==x1032));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1039 = INT8_MIN;
	uint64_t t179 = 2158813772175534198LLU;

    t179 = ((x1037*x1038)*(x1039==x1040));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x1041 = 55U;
	int16_t x1042 = INT16_MIN;
	int16_t x1043 = INT16_MAX;
	volatile uint32_t x1044 = 7283187U;
	static int32_t t180 = 213084;

    t180 = ((x1041*x1042)*(x1043==x1044));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x1057 = INT8_MAX;
	uint32_t x1058 = 3U;
	uint16_t x1059 = 61U;
	volatile int16_t x1060 = INT16_MIN;

    t181 = ((x1057*x1058)*(x1059==x1060));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x1065 = 333U;
	uint16_t x1066 = 3U;
	int8_t x1067 = INT8_MIN;
	int8_t x1068 = -1;
	int32_t t182 = 0;

    t182 = ((x1065*x1066)*(x1067==x1068));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1069 = INT16_MAX;
	static volatile uint8_t x1070 = 58U;
	uint32_t x1071 = 2598U;
	volatile uint16_t x1072 = 0U;
	int32_t t183 = -5986;

    t183 = ((x1069*x1070)*(x1071==x1072));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1073 = INT16_MAX;
	int8_t x1074 = -1;
	int32_t x1075 = INT32_MIN;
	int8_t x1076 = INT8_MAX;

    t184 = ((x1073*x1074)*(x1075==x1076));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1081 = -255319304374LL;
	static int8_t x1082 = INT8_MAX;
	int32_t x1083 = 513872;
	volatile int8_t x1084 = INT8_MIN;

    t185 = ((x1081*x1082)*(x1083==x1084));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1085 = INT8_MIN;
	volatile uint32_t x1086 = UINT32_MAX;
	int8_t x1087 = INT8_MIN;

    t186 = ((x1085*x1086)*(x1087==x1088));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x1097 = 967LLU;
	static uint32_t x1098 = UINT32_MAX;
	int8_t x1100 = INT8_MIN;
	volatile uint64_t t187 = 7LLU;

    t187 = ((x1097*x1098)*(x1099==x1100));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x1109 = 0;
	uint32_t x1110 = UINT32_MAX;
	static uint32_t x1111 = 58U;
	int32_t x1112 = INT32_MIN;
	static uint32_t t188 = 163709U;

    t188 = ((x1109*x1110)*(x1111==x1112));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1113 = 1;
	int64_t x1114 = -16164LL;
	uint64_t x1115 = 246632768759651LLU;
	uint8_t x1116 = 2U;
	volatile int64_t t189 = -955880143118LL;

    t189 = ((x1113*x1114)*(x1115==x1116));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1117 = INT8_MIN;
	uint16_t x1118 = 2U;
	volatile int32_t x1119 = INT32_MAX;
	uint16_t x1120 = 162U;

    t190 = ((x1117*x1118)*(x1119==x1120));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x1121 = UINT32_MAX;
	int32_t x1122 = INT32_MIN;
	int8_t x1123 = INT8_MAX;
	int64_t x1124 = -1LL;
	static uint32_t t191 = 105355U;

    t191 = ((x1121*x1122)*(x1123==x1124));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x1137 = 87U;
	static uint16_t x1139 = 493U;
	int32_t x1140 = -1;
	volatile int32_t t192 = 0;

    t192 = ((x1137*x1138)*(x1139==x1140));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1142 = INT16_MAX;
	uint32_t x1143 = UINT32_MAX;
	uint32_t x1144 = UINT32_MAX;
	int64_t t193 = -1523228367494075258LL;

    t193 = ((x1141*x1142)*(x1143==x1144));

    if (t193 != -4989449070853338581LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1146 = INT16_MAX;
	static uint64_t x1147 = 107LLU;
	static volatile int8_t x1148 = INT8_MAX;
	uint32_t t194 = 1030583U;

    t194 = ((x1145*x1146)*(x1147==x1148));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1149 = 1LLU;
	static uint64_t x1150 = UINT64_MAX;
	int8_t x1151 = -39;

    t195 = ((x1149*x1150)*(x1151==x1152));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint64_t x1153 = UINT64_MAX;
	int32_t x1154 = INT32_MAX;
	volatile uint16_t x1155 = 3408U;
	volatile int16_t x1156 = INT16_MAX;

    t196 = ((x1153*x1154)*(x1155==x1156));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1158 = INT16_MIN;
	static int8_t x1159 = 5;
	uint64_t x1160 = UINT64_MAX;

    t197 = ((x1157*x1158)*(x1159==x1160));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1162 = 5U;
	volatile int16_t x1163 = -21;
	int16_t x1164 = 1101;
	int32_t t198 = -5;

    t198 = ((x1161*x1162)*(x1163==x1164));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1166 = INT16_MIN;
	volatile int32_t x1167 = -1;
	uint64_t x1168 = 1539346378508LLU;
	volatile int32_t t199 = 7753;

    t199 = ((x1165*x1166)*(x1167==x1168));

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

