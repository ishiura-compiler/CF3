
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

static int64_t x5 = INT64_MIN;
static int32_t t2 = -217686;
int32_t t3 = 140158;
uint32_t x26 = 1693U;
uint64_t x27 = 756256LLU;
static volatile int64_t x36 = -1LL;
static volatile int32_t t9 = 71832;
static uint64_t x50 = UINT64_MAX;
int32_t t10 = -10389;
int64_t x56 = INT64_MAX;
int32_t t13 = -750639037;
volatile int32_t t14 = 5;
uint32_t x85 = UINT32_MAX;
static uint64_t x86 = 201355640094573LLU;
int32_t x88 = 62;
int32_t x101 = 1953511;
static volatile int16_t x107 = INT16_MIN;
int32_t x111 = INT32_MAX;
volatile int32_t t19 = 6287;
int32_t x121 = INT32_MIN;
volatile int32_t t21 = 378;
uint64_t x132 = 29703LLU;
volatile int16_t x148 = INT16_MAX;
int32_t t26 = -6153488;
uint64_t x155 = UINT64_MAX;
static volatile int32_t t28 = -1574189;
uint32_t x170 = 43466U;
uint64_t x172 = 1180LLU;
int16_t x177 = INT16_MIN;
uint32_t x180 = 585U;
static int8_t x205 = 1;
volatile int32_t x207 = INT32_MIN;
int64_t x223 = -1LL;
int32_t x224 = INT32_MIN;
int32_t t35 = 0;
int32_t x225 = -63;
int16_t x227 = INT16_MIN;
int32_t t36 = -90;
volatile int64_t x229 = INT64_MIN;
static uint32_t x235 = 20U;
uint64_t x245 = UINT64_MAX;
uint64_t x253 = 127414396803LLU;
int32_t t43 = -25;
static int32_t x261 = -1;
static volatile int32_t x264 = -1;
volatile int32_t t46 = 1;
volatile int16_t x275 = INT16_MAX;
static volatile uint32_t x284 = 1U;
int64_t x289 = -1LL;
uint32_t x292 = 364415625U;
uint8_t x302 = UINT8_MAX;
static uint64_t x304 = 7831537LLU;
volatile int32_t t51 = -2217170;
static uint16_t x307 = 673U;
volatile int32_t t52 = 271936330;
uint16_t x312 = UINT16_MAX;
int16_t x316 = 1363;
volatile int32_t t56 = -9179781;
volatile int16_t x338 = 200;
int64_t x340 = -30760096257LL;
volatile int16_t x342 = INT16_MAX;
uint8_t x354 = UINT8_MAX;
static uint64_t x355 = UINT64_MAX;
int16_t x361 = 0;
int8_t x363 = INT8_MAX;
volatile int32_t t62 = -5186;
uint16_t x371 = 102U;
int32_t t63 = 0;
int8_t x377 = INT8_MAX;
volatile uint64_t x378 = UINT64_MAX;
volatile uint16_t x379 = 3U;
int8_t x380 = 0;
uint8_t x414 = UINT8_MAX;
int16_t x415 = INT16_MIN;
uint64_t x416 = 1680839461502713LLU;
int16_t x430 = INT16_MAX;
int16_t x433 = -2;
static int64_t x434 = INT64_MIN;
static int32_t x436 = -83171784;
int8_t x438 = INT8_MAX;
int8_t x440 = 0;
uint64_t x446 = UINT64_MAX;
int32_t t79 = 119;
static int32_t x465 = 978647;
int16_t x480 = -15;
static volatile int8_t x486 = INT8_MAX;
volatile int32_t t82 = 32;
int64_t x493 = INT64_MIN;
int32_t t83 = -34803251;
static int16_t x500 = -1;
static int32_t x502 = -734437;
int8_t x504 = -1;
static volatile int32_t t86 = -4675352;
uint32_t x510 = UINT32_MAX;
static volatile uint64_t x512 = 11576011LLU;
uint64_t x514 = 749507338785997LLU;
int32_t x516 = -1;
int32_t x525 = -3;
volatile int32_t x527 = -5;
uint16_t x535 = UINT16_MAX;
int32_t x540 = -3520;
volatile uint8_t x566 = 28U;
uint64_t x576 = UINT64_MAX;
static int16_t x582 = INT16_MIN;
volatile int32_t t99 = 1673301;
int16_t x587 = -33;
volatile uint8_t x588 = UINT8_MAX;
volatile uint8_t x596 = 1U;
uint16_t x598 = 30U;
int8_t x599 = -1;
int32_t t102 = 1104;
volatile int32_t x605 = 1;
uint64_t x612 = UINT64_MAX;
volatile uint16_t x616 = 35U;
volatile uint64_t x618 = 24337943639348LLU;
uint64_t x620 = 8529368LLU;
volatile int32_t t106 = 7442334;
uint64_t x627 = 32LLU;
uint64_t x636 = 172LLU;
int32_t x651 = 0;
uint64_t x653 = UINT64_MAX;
int16_t x656 = -56;
static volatile uint16_t x659 = 5977U;
int64_t x667 = -1LL;
volatile uint64_t x676 = UINT64_MAX;
volatile uint32_t x679 = 14840U;
static int16_t x683 = -1;
int8_t x689 = 47;
int16_t x690 = INT16_MIN;
int32_t t120 = -448;
int8_t x702 = INT8_MAX;
int16_t x703 = INT16_MAX;
int32_t x704 = -1;
static volatile uint8_t x711 = 68U;
int8_t x715 = -1;
uint32_t x721 = 24U;
volatile int8_t x723 = INT8_MAX;
int32_t t124 = 2;
int8_t x725 = INT8_MIN;
int8_t x726 = -1;
volatile int8_t x729 = -6;
uint8_t x731 = 4U;
int32_t x732 = 137434188;
uint64_t x752 = UINT64_MAX;
volatile int32_t t129 = 262072;
static int32_t x769 = 0;
int8_t x770 = INT8_MIN;
static uint32_t x774 = 33085944U;
volatile int32_t t133 = -1;
int8_t x795 = INT8_MIN;
int16_t x796 = 1;
int32_t x802 = 0;
static volatile int32_t t136 = 58;
int64_t x805 = -51LL;
uint64_t x821 = 12889845676LLU;
uint16_t x825 = 20734U;
static int32_t t140 = -53246329;
static volatile uint8_t x833 = 22U;
volatile int32_t t142 = 15;
uint8_t x845 = 97U;
uint8_t x847 = 12U;
volatile int32_t t143 = 6970359;
int32_t t144 = 108004931;
int64_t x855 = 201014629368LL;
static int8_t x856 = INT8_MIN;
int16_t x858 = 59;
int64_t x880 = -1LL;
static int32_t t149 = 9775606;
uint8_t x884 = 1U;
volatile int32_t t150 = 557308;
int8_t x886 = 1;
volatile int32_t x897 = -998;
uint16_t x899 = 2U;
static uint16_t x902 = 26U;
int16_t x904 = INT16_MAX;
int16_t x916 = INT16_MIN;
int32_t t155 = -1019175464;
static volatile int16_t x919 = -1300;
uint64_t x921 = 3705LLU;
static uint8_t x922 = 14U;
volatile int64_t x923 = -1LL;
volatile uint64_t x925 = 18225334714769621LLU;
int32_t t158 = -7040;
volatile int32_t t159 = -6;
volatile int16_t x934 = -1;
uint32_t x941 = 190679U;
static int16_t x942 = INT16_MIN;
volatile int16_t x951 = -1;
uint64_t x964 = 3LLU;
int32_t t165 = 140509;
volatile int16_t x971 = 6;
static int8_t x985 = INT8_MIN;
uint16_t x994 = 3705U;
static uint64_t x995 = 1072330850912LLU;
uint32_t x1019 = 85U;
volatile int32_t t172 = -26034;
int16_t x1039 = -153;
volatile int32_t t173 = -26;
static uint64_t x1041 = 955861104403194553LLU;
int32_t x1042 = -1;
int8_t x1043 = INT8_MIN;
int64_t x1045 = 6728458750465440LL;
volatile int32_t x1062 = INT32_MIN;
uint16_t x1070 = UINT16_MAX;
static int8_t x1071 = INT8_MIN;
static uint64_t x1073 = 448381997952746326LLU;
uint8_t x1081 = UINT8_MAX;
volatile int16_t x1083 = INT16_MIN;
int8_t x1086 = -2;
static int64_t x1089 = INT64_MAX;
uint8_t x1090 = UINT8_MAX;
int32_t t181 = -235;
static int32_t x1094 = INT32_MIN;
uint64_t x1095 = 434985545LLU;
volatile int32_t t182 = 1;
int16_t x1098 = INT16_MIN;
volatile int32_t t183 = 18537;
volatile int32_t t184 = 4;
uint32_t x1106 = 5984648U;
uint32_t x1139 = UINT32_MAX;
static int8_t x1148 = INT8_MAX;
int16_t x1149 = 6829;
int64_t x1150 = 25225544624013026LL;
uint32_t x1152 = 101301398U;
volatile int32_t t189 = -119;
uint64_t x1165 = 10364LLU;
static int32_t t191 = -196695;
int8_t x1176 = INT8_MIN;
int64_t x1178 = -1710206749009472017LL;
int8_t x1179 = INT8_MAX;
volatile uint32_t x1190 = 213568U;
static volatile int32_t x1198 = 26;
static uint8_t x1199 = 64U;
uint8_t x1201 = 111U;
int64_t x1204 = 1570398562LL;


void f0(void) {
    	static uint8_t x1 = 12U;
	int8_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	uint16_t x4 = 28139U;
	static int32_t t0 = -12241;

    t0 = ((x1-x2)!=(x3*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x6 = 2689085635LLU;
	uint32_t x7 = UINT32_MAX;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 1980162;

    t1 = ((x5-x6)!=(x7*x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MAX;
	uint64_t x14 = 134660102551LLU;
	int32_t x15 = -14564;
	static volatile int16_t x16 = INT16_MIN;

    t2 = ((x13-x14)!=(x15*x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 376U;
	int16_t x18 = 0;
	uint32_t x19 = 2U;
	int32_t x20 = -1;

    t3 = ((x17-x18)!=(x19*x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	uint16_t x22 = 3U;
	static int32_t x23 = INT32_MAX;
	static int16_t x24 = 1;
	int32_t t4 = -1;

    t4 = ((x21-x22)!=(x23*x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = 2021;
	static volatile int64_t x28 = -1LL;
	static volatile int32_t t5 = 139;

    t5 = ((x25-x26)!=(x27*x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = -1;
	int64_t x30 = 205946610860253149LL;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = 1U;
	volatile int32_t t6 = 259250;

    t6 = ((x29-x30)!=(x31*x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x33 = 12152;
	volatile int16_t x34 = 126;
	int64_t x35 = -1LL;
	int32_t t7 = -2611;

    t7 = ((x33-x34)!=(x35*x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x41 = -15;
	static int64_t x42 = INT64_MIN;
	int8_t x43 = -18;
	int16_t x44 = INT16_MIN;
	volatile int32_t t8 = -306;

    t8 = ((x41-x42)!=(x43*x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x45 = 13U;
	uint64_t x46 = 1256368797374814LLU;
	uint16_t x47 = 35U;
	uint8_t x48 = 50U;

    t9 = ((x45-x46)!=(x47*x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = -1;
	int32_t x51 = INT32_MAX;
	volatile int32_t x52 = -1;

    t10 = ((x49-x50)!=(x51*x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x53 = INT8_MIN;
	static int64_t x54 = -1LL;
	uint64_t x55 = 191543234146611037LLU;
	int32_t t11 = -280210;

    t11 = ((x53-x54)!=(x55*x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x57 = INT8_MAX;
	int8_t x58 = INT8_MIN;
	volatile uint8_t x59 = UINT8_MAX;
	int32_t x60 = -1;
	volatile int32_t t12 = 45;

    t12 = ((x57-x58)!=(x59*x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x69 = 68U;
	static uint16_t x70 = 65U;
	int8_t x71 = INT8_MAX;
	int8_t x72 = INT8_MIN;

    t13 = ((x69-x70)!=(x71*x72));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x73 = 332U;
	int8_t x74 = INT8_MIN;
	static int16_t x75 = 0;
	int16_t x76 = 0;

    t14 = ((x73-x74)!=(x75*x76));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x87 = 41500U;
	int32_t t15 = 129228;

    t15 = ((x85-x86)!=(x87*x88));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x97 = 153472798001LL;
	volatile int16_t x98 = -1;
	int8_t x99 = INT8_MAX;
	int32_t x100 = -1;
	volatile int32_t t16 = 48402;

    t16 = ((x97-x98)!=(x99*x100));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x102 = INT32_MAX;
	int8_t x103 = INT8_MIN;
	static int8_t x104 = -2;
	volatile int32_t t17 = -1;

    t17 = ((x101-x102)!=(x103*x104));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x105 = 234491567994579LLU;
	static int64_t x106 = 1279335LL;
	static volatile uint8_t x108 = UINT8_MAX;
	int32_t t18 = -157748;

    t18 = ((x105-x106)!=(x107*x108));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x109 = 506086646399027LLU;
	volatile uint16_t x110 = UINT16_MAX;
	int32_t x112 = -1;

    t19 = ((x109-x110)!=(x111*x112));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x113 = 410U;
	int16_t x114 = -46;
	int8_t x115 = -9;
	static int32_t x116 = 4187;
	int32_t t20 = -3;

    t20 = ((x113-x114)!=(x115*x116));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x122 = INT8_MIN;
	uint32_t x123 = 8267179U;
	uint16_t x124 = 532U;

    t21 = ((x121-x122)!=(x123*x124));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x125 = UINT16_MAX;
	int16_t x126 = 99;
	static uint32_t x127 = 9U;
	static int8_t x128 = 15;
	static volatile int32_t t22 = 126231690;

    t22 = ((x125-x126)!=(x127*x128));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x129 = -1LL;
	volatile int16_t x130 = INT16_MIN;
	volatile int16_t x131 = INT16_MIN;
	int32_t t23 = 862322;

    t23 = ((x129-x130)!=(x131*x132));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x141 = 20U;
	int8_t x142 = -1;
	int32_t x143 = -1007;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t24 = 39126;

    t24 = ((x141-x142)!=(x143*x144));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x145 = -10;
	uint32_t x146 = 1957U;
	uint32_t x147 = 395185789U;
	volatile int32_t t25 = 824681702;

    t25 = ((x145-x146)!=(x147*x148));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x149 = 1;
	int32_t x150 = INT32_MAX;
	static int32_t x151 = INT32_MIN;
	uint8_t x152 = 0U;

    t26 = ((x149-x150)!=(x151*x152));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x153 = 0U;
	uint16_t x154 = UINT16_MAX;
	int16_t x156 = 6889;
	volatile int32_t t27 = 381;

    t27 = ((x153-x154)!=(x155*x156));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x165 = INT64_MIN;
	int8_t x166 = -1;
	int32_t x167 = -1;
	static int64_t x168 = 2254406233LL;

    t28 = ((x165-x166)!=(x167*x168));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x169 = 11826LLU;
	uint64_t x171 = UINT64_MAX;
	int32_t t29 = 1;

    t29 = ((x169-x170)!=(x171*x172));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x178 = 31443012102839057LL;
	int8_t x179 = INT8_MIN;
	static int32_t t30 = 891;

    t30 = ((x177-x178)!=(x179*x180));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x185 = 36;
	int32_t x186 = -65368;
	int16_t x187 = -1;
	volatile int8_t x188 = INT8_MIN;
	int32_t t31 = -65;

    t31 = ((x185-x186)!=(x187*x188));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x189 = 246U;
	int64_t x190 = -1LL;
	static int16_t x191 = 417;
	int64_t x192 = -1LL;
	static int32_t t32 = -2004;

    t32 = ((x189-x190)!=(x191*x192));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MIN;
	int8_t x199 = 1;
	uint8_t x200 = UINT8_MAX;
	int32_t t33 = -12;

    t33 = ((x197-x198)!=(x199*x200));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x206 = INT8_MAX;
	int64_t x208 = -1LL;
	static volatile int32_t t34 = -14;

    t34 = ((x205-x206)!=(x207*x208));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x221 = -1;
	int32_t x222 = 7;

    t35 = ((x221-x222)!=(x223*x224));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x226 = UINT64_MAX;
	int16_t x228 = -3;

    t36 = ((x225-x226)!=(x227*x228));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x230 = -30253776765198417LL;
	static volatile int8_t x231 = -1;
	uint64_t x232 = 191963122LLU;
	volatile int32_t t37 = -15;

    t37 = ((x229-x230)!=(x231*x232));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x233 = INT8_MIN;
	uint32_t x234 = 23422718U;
	int8_t x236 = 1;
	int32_t t38 = -294865;

    t38 = ((x233-x234)!=(x235*x236));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x237 = INT32_MIN;
	int64_t x238 = -1LL;
	static int16_t x239 = INT16_MIN;
	uint16_t x240 = 14U;
	static int32_t t39 = 382;

    t39 = ((x237-x238)!=(x239*x240));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x241 = 6703LLU;
	int64_t x242 = INT64_MAX;
	static int64_t x243 = -1LL;
	uint16_t x244 = 23U;
	volatile int32_t t40 = 1238603;

    t40 = ((x241-x242)!=(x243*x244));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x246 = -1LL;
	uint64_t x247 = UINT64_MAX;
	int64_t x248 = INT64_MIN;
	volatile int32_t t41 = -7460;

    t41 = ((x245-x246)!=(x247*x248));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x249 = -1;
	int16_t x250 = INT16_MIN;
	int64_t x251 = 22393LL;
	int8_t x252 = 0;
	int32_t t42 = 122;

    t42 = ((x249-x250)!=(x251*x252));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x254 = INT8_MIN;
	uint32_t x255 = UINT32_MAX;
	int32_t x256 = 527994341;

    t43 = ((x253-x254)!=(x255*x256));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x257 = 58841U;
	int8_t x258 = -1;
	uint16_t x259 = 1958U;
	int64_t x260 = -1LL;
	int32_t t44 = 4275;

    t44 = ((x257-x258)!=(x259*x260));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x262 = INT32_MAX;
	int32_t x263 = -1;
	int32_t t45 = 21660062;

    t45 = ((x261-x262)!=(x263*x264));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x269 = 1;
	int16_t x270 = INT16_MIN;
	static int16_t x271 = 1;
	uint64_t x272 = UINT64_MAX;

    t46 = ((x269-x270)!=(x271*x272));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x273 = INT64_MIN;
	volatile int8_t x274 = -1;
	int16_t x276 = INT16_MIN;
	int32_t t47 = -36;

    t47 = ((x273-x274)!=(x275*x276));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x281 = -21;
	volatile int32_t x282 = -1;
	uint64_t x283 = 28054LLU;
	volatile int32_t t48 = 9270581;

    t48 = ((x281-x282)!=(x283*x284));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x290 = INT32_MIN;
	int32_t x291 = -1;
	int32_t t49 = 6;

    t49 = ((x289-x290)!=(x291*x292));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x293 = INT8_MAX;
	int8_t x294 = INT8_MAX;
	int8_t x295 = INT8_MIN;
	uint64_t x296 = UINT64_MAX;
	int32_t t50 = -88;

    t50 = ((x293-x294)!=(x295*x296));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x301 = UINT64_MAX;
	int16_t x303 = 13;

    t51 = ((x301-x302)!=(x303*x304));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x305 = INT64_MAX;
	static uint64_t x306 = 763701307729LLU;
	static uint16_t x308 = UINT16_MAX;

    t52 = ((x305-x306)!=(x307*x308));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x309 = 623394U;
	uint64_t x310 = UINT64_MAX;
	volatile int16_t x311 = -1;
	volatile int32_t t53 = -1890086;

    t53 = ((x309-x310)!=(x311*x312));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x313 = 119226U;
	int8_t x314 = -1;
	int16_t x315 = INT16_MIN;
	volatile int32_t t54 = 111023;

    t54 = ((x313-x314)!=(x315*x316));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x325 = INT16_MAX;
	uint32_t x326 = 994013U;
	static uint16_t x327 = UINT16_MAX;
	int16_t x328 = INT16_MIN;
	volatile int32_t t55 = -1177;

    t55 = ((x325-x326)!=(x327*x328));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x329 = 1U;
	int32_t x330 = 266665188;
	static int8_t x331 = -1;
	uint8_t x332 = 79U;

    t56 = ((x329-x330)!=(x331*x332));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x337 = INT8_MIN;
	int8_t x339 = 12;
	int32_t t57 = -7;

    t57 = ((x337-x338)!=(x339*x340));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x341 = 103U;
	static int64_t x343 = -1LL;
	int8_t x344 = INT8_MAX;
	int32_t t58 = -17598776;

    t58 = ((x341-x342)!=(x343*x344));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x349 = 0;
	int64_t x350 = -1LL;
	uint16_t x351 = 0U;
	int64_t x352 = INT64_MIN;
	volatile int32_t t59 = -356;

    t59 = ((x349-x350)!=(x351*x352));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint32_t x353 = UINT32_MAX;
	int16_t x356 = INT16_MIN;
	static int32_t t60 = 3304;

    t60 = ((x353-x354)!=(x355*x356));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x362 = -1;
	uint8_t x364 = 26U;
	volatile int32_t t61 = 8178;

    t61 = ((x361-x362)!=(x363*x364));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x365 = 2226009U;
	uint32_t x366 = 3440200U;
	volatile int64_t x367 = 11496486730952542LL;
	static uint8_t x368 = UINT8_MAX;

    t62 = ((x365-x366)!=(x367*x368));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x369 = -46402146781LL;
	uint32_t x370 = 114U;
	uint32_t x372 = 2979U;

    t63 = ((x369-x370)!=(x371*x372));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x373 = UINT8_MAX;
	uint16_t x374 = 224U;
	static int16_t x375 = INT16_MIN;
	uint16_t x376 = 2U;
	volatile int32_t t64 = -65990567;

    t64 = ((x373-x374)!=(x375*x376));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t t65 = 544362398;

    t65 = ((x377-x378)!=(x379*x380));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x381 = -1;
	int64_t x382 = INT64_MIN;
	static uint64_t x383 = 82645725LLU;
	int32_t x384 = INT32_MAX;
	volatile int32_t t66 = -121;

    t66 = ((x381-x382)!=(x383*x384));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x401 = 160LLU;
	int8_t x402 = INT8_MAX;
	uint16_t x403 = 71U;
	int32_t x404 = -1;
	volatile int32_t t67 = -518;

    t67 = ((x401-x402)!=(x403*x404));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x405 = 6U;
	int64_t x406 = 31347087845036LL;
	uint64_t x407 = 4119496082774LLU;
	volatile uint16_t x408 = 1543U;
	int32_t t68 = 366207;

    t68 = ((x405-x406)!=(x407*x408));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x409 = UINT32_MAX;
	int16_t x410 = 14703;
	uint32_t x411 = 236084U;
	uint8_t x412 = 63U;
	int32_t t69 = -15;

    t69 = ((x409-x410)!=(x411*x412));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x413 = UINT64_MAX;
	static volatile int32_t t70 = -183993;

    t70 = ((x413-x414)!=(x415*x416));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x425 = INT64_MIN;
	int64_t x426 = -7LL;
	volatile uint64_t x427 = 675051000081LLU;
	int64_t x428 = 0LL;
	volatile int32_t t71 = -969204;

    t71 = ((x425-x426)!=(x427*x428));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x429 = INT64_MAX;
	int16_t x431 = -10897;
	static volatile uint32_t x432 = 23037U;
	static int32_t t72 = 885271764;

    t72 = ((x429-x430)!=(x431*x432));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x435 = -1LL;
	int32_t t73 = 135061951;

    t73 = ((x433-x434)!=(x435*x436));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x437 = 10994U;
	int8_t x439 = INT8_MIN;
	int32_t t74 = -897565605;

    t74 = ((x437-x438)!=(x439*x440));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x441 = 4U;
	uint32_t x442 = UINT32_MAX;
	uint16_t x443 = 1U;
	int32_t x444 = INT32_MAX;
	int32_t t75 = 21;

    t75 = ((x441-x442)!=(x443*x444));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x445 = UINT16_MAX;
	int8_t x447 = INT8_MAX;
	int8_t x448 = INT8_MIN;
	int32_t t76 = 192536369;

    t76 = ((x445-x446)!=(x447*x448));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x449 = INT32_MIN;
	static int16_t x450 = -1;
	uint64_t x451 = UINT64_MAX;
	int16_t x452 = 1004;
	volatile int32_t t77 = -15;

    t77 = ((x449-x450)!=(x451*x452));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint64_t x453 = UINT64_MAX;
	int32_t x454 = -1;
	static uint64_t x455 = 16525762LLU;
	uint32_t x456 = UINT32_MAX;
	volatile int32_t t78 = -13587494;

    t78 = ((x453-x454)!=(x455*x456));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x461 = INT8_MIN;
	static uint8_t x462 = UINT8_MAX;
	volatile int8_t x463 = 1;
	uint32_t x464 = UINT32_MAX;

    t79 = ((x461-x462)!=(x463*x464));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x466 = UINT64_MAX;
	uint16_t x467 = 96U;
	volatile uint16_t x468 = 13U;
	int32_t t80 = -206;

    t80 = ((x465-x466)!=(x467*x468));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x477 = INT64_MAX;
	int16_t x478 = INT16_MAX;
	uint16_t x479 = 8508U;
	volatile int32_t t81 = 75606;

    t81 = ((x477-x478)!=(x479*x480));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x485 = INT64_MAX;
	uint8_t x487 = UINT8_MAX;
	uint64_t x488 = UINT64_MAX;

    t82 = ((x485-x486)!=(x487*x488));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x494 = INT64_MIN;
	static uint8_t x495 = 23U;
	volatile int16_t x496 = -782;

    t83 = ((x493-x494)!=(x495*x496));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x497 = UINT64_MAX;
	static int32_t x498 = INT32_MIN;
	static uint32_t x499 = UINT32_MAX;
	int32_t t84 = -743;

    t84 = ((x497-x498)!=(x499*x500));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x501 = -4090066019LL;
	int64_t x503 = -1LL;
	volatile int32_t t85 = -1052;

    t85 = ((x501-x502)!=(x503*x504));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x505 = INT8_MIN;
	int64_t x506 = -56LL;
	int32_t x507 = INT32_MAX;
	int8_t x508 = -1;

    t86 = ((x505-x506)!=(x507*x508));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x509 = 241462304283604583LLU;
	static volatile uint32_t x511 = 3959068U;
	static int32_t t87 = 1;

    t87 = ((x509-x510)!=(x511*x512));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x513 = -1;
	volatile int64_t x515 = -364496549LL;
	static int32_t t88 = 1410;

    t88 = ((x513-x514)!=(x515*x516));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x521 = 70U;
	uint16_t x522 = 113U;
	static int64_t x523 = INT64_MAX;
	static int64_t x524 = -1LL;
	int32_t t89 = -97619437;

    t89 = ((x521-x522)!=(x523*x524));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x526 = INT32_MIN;
	uint16_t x528 = 9564U;
	volatile int32_t t90 = 810;

    t90 = ((x525-x526)!=(x527*x528));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x533 = -1;
	int64_t x534 = -1LL;
	uint16_t x536 = 25U;
	volatile int32_t t91 = 211667;

    t91 = ((x533-x534)!=(x535*x536));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x537 = UINT64_MAX;
	uint16_t x538 = UINT16_MAX;
	uint64_t x539 = 1389464414LLU;
	volatile int32_t t92 = 932986;

    t92 = ((x537-x538)!=(x539*x540));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x545 = 5U;
	static int32_t x546 = INT32_MAX;
	static volatile int64_t x547 = 573347LL;
	volatile int8_t x548 = -2;
	volatile int32_t t93 = 424710;

    t93 = ((x545-x546)!=(x547*x548));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x549 = UINT8_MAX;
	volatile int8_t x550 = -1;
	int32_t x551 = -1;
	int32_t x552 = -1;
	int32_t t94 = -17425773;

    t94 = ((x549-x550)!=(x551*x552));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x553 = INT16_MAX;
	volatile int8_t x554 = -4;
	static volatile int16_t x555 = INT16_MIN;
	static uint64_t x556 = UINT64_MAX;
	int32_t t95 = -40;

    t95 = ((x553-x554)!=(x555*x556));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x565 = INT16_MIN;
	int8_t x567 = INT8_MIN;
	volatile int32_t x568 = -1396;
	int32_t t96 = -13;

    t96 = ((x565-x566)!=(x567*x568));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x573 = INT16_MIN;
	static int64_t x574 = INT64_MIN;
	int8_t x575 = INT8_MAX;
	int32_t t97 = -6;

    t97 = ((x573-x574)!=(x575*x576));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x577 = -1;
	static int16_t x578 = INT16_MIN;
	volatile uint64_t x579 = UINT64_MAX;
	uint16_t x580 = 3033U;
	int32_t t98 = 21525;

    t98 = ((x577-x578)!=(x579*x580));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x581 = INT16_MAX;
	uint64_t x583 = UINT64_MAX;
	int8_t x584 = INT8_MAX;

    t99 = ((x581-x582)!=(x583*x584));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x585 = -1129;
	int32_t x586 = -15320;
	volatile int32_t t100 = 21334;

    t100 = ((x585-x586)!=(x587*x588));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x593 = INT8_MIN;
	volatile uint64_t x594 = 11928240349872LLU;
	int16_t x595 = INT16_MIN;
	int32_t t101 = -77;

    t101 = ((x593-x594)!=(x595*x596));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x597 = 1624LLU;
	volatile int8_t x600 = -1;

    t102 = ((x597-x598)!=(x599*x600));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x606 = INT32_MAX;
	int32_t x607 = 9;
	int16_t x608 = INT16_MAX;
	volatile int32_t t103 = 1;

    t103 = ((x605-x606)!=(x607*x608));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x609 = 608472LLU;
	int32_t x610 = INT32_MIN;
	uint16_t x611 = 411U;
	int32_t t104 = -21458913;

    t104 = ((x609-x610)!=(x611*x612));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x613 = 6589U;
	int8_t x614 = INT8_MIN;
	volatile int16_t x615 = INT16_MIN;
	static volatile int32_t t105 = 127013229;

    t105 = ((x613-x614)!=(x615*x616));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x617 = 1396319173LLU;
	uint8_t x619 = 14U;

    t106 = ((x617-x618)!=(x619*x620));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x621 = 123;
	int64_t x622 = 259647LL;
	int8_t x623 = -14;
	int64_t x624 = -1LL;
	volatile int32_t t107 = -3612015;

    t107 = ((x621-x622)!=(x623*x624));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x625 = UINT64_MAX;
	int16_t x626 = 818;
	volatile int64_t x628 = -239LL;
	volatile int32_t t108 = 13643;

    t108 = ((x625-x626)!=(x627*x628));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x633 = 1;
	uint32_t x634 = 2U;
	int16_t x635 = INT16_MIN;
	int32_t t109 = -11635;

    t109 = ((x633-x634)!=(x635*x636));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x637 = UINT16_MAX;
	volatile uint32_t x638 = UINT32_MAX;
	volatile int16_t x639 = -1;
	uint32_t x640 = 1U;
	int32_t t110 = -927666;

    t110 = ((x637-x638)!=(x639*x640));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x641 = UINT16_MAX;
	volatile uint64_t x642 = 47446075LLU;
	volatile uint8_t x643 = UINT8_MAX;
	volatile int8_t x644 = INT8_MIN;
	int32_t t111 = 431448;

    t111 = ((x641-x642)!=(x643*x644));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x649 = 8U;
	int8_t x650 = -1;
	static volatile int8_t x652 = INT8_MIN;
	static volatile int32_t t112 = -73;

    t112 = ((x649-x650)!=(x651*x652));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x654 = -1;
	int16_t x655 = 2426;
	int32_t t113 = -76802474;

    t113 = ((x653-x654)!=(x655*x656));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x657 = UINT8_MAX;
	static int64_t x658 = -1LL;
	int16_t x660 = 0;
	int32_t t114 = -93428;

    t114 = ((x657-x658)!=(x659*x660));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x665 = UINT32_MAX;
	uint64_t x666 = 27416LLU;
	int8_t x668 = 10;
	static volatile int32_t t115 = 45123;

    t115 = ((x665-x666)!=(x667*x668));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x673 = 40703914LLU;
	uint32_t x674 = UINT32_MAX;
	int8_t x675 = 7;
	volatile int32_t t116 = 228;

    t116 = ((x673-x674)!=(x675*x676));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x677 = 9972U;
	uint16_t x678 = UINT16_MAX;
	static int32_t x680 = -1;
	int32_t t117 = 29996;

    t117 = ((x677-x678)!=(x679*x680));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x681 = INT32_MIN;
	int64_t x682 = -1301LL;
	int16_t x684 = -1;
	volatile int32_t t118 = 1044967795;

    t118 = ((x681-x682)!=(x683*x684));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x691 = INT64_MIN;
	static uint64_t x692 = 394031632338LLU;
	int32_t t119 = -29914859;

    t119 = ((x689-x690)!=(x691*x692));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x693 = 49U;
	static int8_t x694 = INT8_MAX;
	static volatile uint8_t x695 = UINT8_MAX;
	static int16_t x696 = INT16_MIN;

    t120 = ((x693-x694)!=(x695*x696));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x701 = UINT64_MAX;
	int32_t t121 = 278645;

    t121 = ((x701-x702)!=(x703*x704));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x709 = -63;
	int64_t x710 = 187965498520LL;
	static int8_t x712 = INT8_MAX;
	int32_t t122 = -79599083;

    t122 = ((x709-x710)!=(x711*x712));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x713 = 15808U;
	volatile uint8_t x714 = 0U;
	static int8_t x716 = INT8_MAX;
	volatile int32_t t123 = 5166231;

    t123 = ((x713-x714)!=(x715*x716));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x722 = -216483641;
	volatile uint32_t x724 = 73U;

    t124 = ((x721-x722)!=(x723*x724));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x727 = 184U;
	volatile int32_t x728 = INT32_MAX;
	int32_t t125 = -7248;

    t125 = ((x725-x726)!=(x727*x728));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x730 = 3U;
	int32_t t126 = 77267;

    t126 = ((x729-x730)!=(x731*x732));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x749 = 18U;
	uint32_t x750 = UINT32_MAX;
	static int8_t x751 = INT8_MAX;
	int32_t t127 = -1413;

    t127 = ((x749-x750)!=(x751*x752));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x753 = -1LL;
	uint32_t x754 = 28876462U;
	static int32_t x755 = 6066657;
	uint8_t x756 = UINT8_MAX;
	static int32_t t128 = 106098094;

    t128 = ((x753-x754)!=(x755*x756));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x757 = INT8_MIN;
	static int64_t x758 = INT64_MIN;
	volatile uint32_t x759 = UINT32_MAX;
	uint16_t x760 = 16U;

    t129 = ((x757-x758)!=(x759*x760));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x761 = -3214026929904LL;
	int64_t x762 = -1LL;
	uint32_t x763 = UINT32_MAX;
	uint64_t x764 = UINT64_MAX;
	static volatile int32_t t130 = -1;

    t130 = ((x761-x762)!=(x763*x764));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x765 = 20;
	int8_t x766 = 1;
	int64_t x767 = 1125455LL;
	int8_t x768 = 10;
	volatile int32_t t131 = 26;

    t131 = ((x765-x766)!=(x767*x768));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x771 = 261799546U;
	volatile int32_t x772 = INT32_MIN;
	volatile int32_t t132 = -6;

    t132 = ((x769-x770)!=(x771*x772));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x773 = UINT8_MAX;
	volatile int64_t x775 = 27813863061616LL;
	uint64_t x776 = UINT64_MAX;

    t133 = ((x773-x774)!=(x775*x776));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x777 = 3U;
	static uint32_t x778 = 22818481U;
	uint8_t x779 = UINT8_MAX;
	uint16_t x780 = UINT16_MAX;
	int32_t t134 = -2854;

    t134 = ((x777-x778)!=(x779*x780));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x793 = -26355;
	int16_t x794 = 9165;
	volatile int32_t t135 = 3889023;

    t135 = ((x793-x794)!=(x795*x796));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint8_t x801 = 9U;
	static int64_t x803 = 100673987LL;
	int16_t x804 = -3833;

    t136 = ((x801-x802)!=(x803*x804));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x806 = 1581591U;
	uint8_t x807 = UINT8_MAX;
	volatile int32_t x808 = -2003818;
	int32_t t137 = -105192;

    t137 = ((x805-x806)!=(x807*x808));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x822 = -1;
	uint32_t x823 = UINT32_MAX;
	volatile int16_t x824 = -1;
	volatile int32_t t138 = 61;

    t138 = ((x821-x822)!=(x823*x824));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x826 = -1;
	volatile int16_t x827 = -1;
	static uint32_t x828 = 126083U;
	int32_t t139 = 0;

    t139 = ((x825-x826)!=(x827*x828));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x829 = INT16_MIN;
	static uint32_t x830 = 3710984U;
	volatile int64_t x831 = -967588LL;
	int16_t x832 = -1;

    t140 = ((x829-x830)!=(x831*x832));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x834 = 16220876LLU;
	int16_t x835 = -1;
	int16_t x836 = 233;
	int32_t t141 = 233;

    t141 = ((x833-x834)!=(x835*x836));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x841 = INT8_MIN;
	static volatile int16_t x842 = INT16_MIN;
	int16_t x843 = 2;
	uint16_t x844 = 14U;

    t142 = ((x841-x842)!=(x843*x844));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x846 = 1232;
	int8_t x848 = 0;

    t143 = ((x845-x846)!=(x847*x848));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x849 = -1LL;
	uint32_t x850 = 65065U;
	int32_t x851 = INT32_MAX;
	int16_t x852 = 0;

    t144 = ((x849-x850)!=(x851*x852));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x853 = 0U;
	uint64_t x854 = 24334104LLU;
	static volatile int32_t t145 = -268;

    t145 = ((x853-x854)!=(x855*x856));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x857 = -1LL;
	int64_t x859 = -1LL;
	static uint32_t x860 = 15343686U;
	volatile int32_t t146 = -812168;

    t146 = ((x857-x858)!=(x859*x860));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x869 = 944077656448LLU;
	int32_t x870 = INT32_MIN;
	uint64_t x871 = 550547794804258LLU;
	static int16_t x872 = -1;
	int32_t t147 = 37;

    t147 = ((x869-x870)!=(x871*x872));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x873 = INT16_MAX;
	volatile int64_t x874 = -1LL;
	uint32_t x875 = UINT32_MAX;
	uint32_t x876 = 363U;
	volatile int32_t t148 = 24108110;

    t148 = ((x873-x874)!=(x875*x876));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x877 = 19748062018LL;
	static int32_t x878 = INT32_MIN;
	int8_t x879 = -5;

    t149 = ((x877-x878)!=(x879*x880));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x881 = -1LL;
	int64_t x882 = -406460LL;
	int32_t x883 = INT32_MAX;

    t150 = ((x881-x882)!=(x883*x884));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x885 = INT16_MAX;
	static uint8_t x887 = 0U;
	uint8_t x888 = 1U;
	volatile int32_t t151 = -13020;

    t151 = ((x885-x886)!=(x887*x888));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x889 = INT64_MAX;
	static uint64_t x890 = UINT64_MAX;
	uint16_t x891 = 1486U;
	int32_t x892 = 57278;
	volatile int32_t t152 = -2710380;

    t152 = ((x889-x890)!=(x891*x892));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x898 = -635335975;
	volatile int8_t x900 = -1;
	volatile int32_t t153 = -179;

    t153 = ((x897-x898)!=(x899*x900));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x901 = INT16_MIN;
	uint8_t x903 = 0U;
	int32_t t154 = -34;

    t154 = ((x901-x902)!=(x903*x904));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x913 = -3738239958336574LL;
	int32_t x914 = INT32_MIN;
	static int16_t x915 = -1;

    t155 = ((x913-x914)!=(x915*x916));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x917 = 1516609126LL;
	volatile uint32_t x918 = UINT32_MAX;
	static uint64_t x920 = UINT64_MAX;
	volatile int32_t t156 = -113196;

    t156 = ((x917-x918)!=(x919*x920));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x924 = 3U;
	volatile int32_t t157 = 145181069;

    t157 = ((x921-x922)!=(x923*x924));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x926 = 54U;
	static volatile uint64_t x927 = 59628661860LLU;
	uint8_t x928 = 26U;

    t158 = ((x925-x926)!=(x927*x928));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x929 = 24934613187LLU;
	int64_t x930 = INT64_MAX;
	volatile int64_t x931 = -7201LL;
	uint8_t x932 = 0U;

    t159 = ((x929-x930)!=(x931*x932));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x933 = 47U;
	uint16_t x935 = 5U;
	uint8_t x936 = 33U;
	int32_t t160 = 152597087;

    t160 = ((x933-x934)!=(x935*x936));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x937 = 1344;
	static uint8_t x938 = 94U;
	uint8_t x939 = 7U;
	int32_t x940 = -1;
	volatile int32_t t161 = -463;

    t161 = ((x937-x938)!=(x939*x940));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x943 = -1;
	int8_t x944 = INT8_MIN;
	volatile int32_t t162 = 1339;

    t162 = ((x941-x942)!=(x943*x944));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x945 = -1LL;
	volatile int32_t x946 = INT32_MAX;
	int8_t x947 = -1;
	static volatile int32_t x948 = 0;
	int32_t t163 = -1;

    t163 = ((x945-x946)!=(x947*x948));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x949 = -1;
	uint64_t x950 = UINT64_MAX;
	volatile uint16_t x952 = 1371U;
	int32_t t164 = -150800;

    t164 = ((x949-x950)!=(x951*x952));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x961 = UINT64_MAX;
	int32_t x962 = -37497597;
	static int8_t x963 = 34;

    t165 = ((x961-x962)!=(x963*x964));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x969 = 7862U;
	int64_t x970 = -49LL;
	static int64_t x972 = -1LL;
	int32_t t166 = -26423693;

    t166 = ((x969-x970)!=(x971*x972));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x981 = UINT8_MAX;
	uint8_t x982 = UINT8_MAX;
	uint32_t x983 = UINT32_MAX;
	uint8_t x984 = 5U;
	static int32_t t167 = -4;

    t167 = ((x981-x982)!=(x983*x984));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x986 = -1;
	volatile uint64_t x987 = UINT64_MAX;
	volatile int64_t x988 = 16968305765LL;
	volatile int32_t t168 = -6111345;

    t168 = ((x985-x986)!=(x987*x988));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x989 = UINT8_MAX;
	int64_t x990 = INT64_MAX;
	int8_t x991 = INT8_MIN;
	int32_t x992 = 993;
	int32_t t169 = -103296;

    t169 = ((x989-x990)!=(x991*x992));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x993 = -1;
	volatile int8_t x996 = INT8_MIN;
	int32_t t170 = -1;

    t170 = ((x993-x994)!=(x995*x996));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x1005 = UINT16_MAX;
	volatile int64_t x1006 = -19378254557LL;
	int16_t x1007 = 7;
	static volatile int32_t x1008 = -655;
	volatile int32_t t171 = -3153854;

    t171 = ((x1005-x1006)!=(x1007*x1008));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1017 = INT64_MAX;
	uint8_t x1018 = 35U;
	int32_t x1020 = INT32_MIN;

    t172 = ((x1017-x1018)!=(x1019*x1020));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1037 = -1;
	static uint64_t x1038 = UINT64_MAX;
	int64_t x1040 = -151966884LL;

    t173 = ((x1037-x1038)!=(x1039*x1040));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1044 = INT16_MIN;
	volatile int32_t t174 = 125061144;

    t174 = ((x1041-x1042)!=(x1043*x1044));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1046 = INT16_MAX;
	volatile uint16_t x1047 = 6917U;
	uint8_t x1048 = 3U;
	int32_t t175 = -15;

    t175 = ((x1045-x1046)!=(x1047*x1048));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1061 = INT16_MIN;
	int64_t x1063 = INT64_MAX;
	uint64_t x1064 = 21164835672LLU;
	int32_t t176 = -433;

    t176 = ((x1061-x1062)!=(x1063*x1064));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x1069 = -900LL;
	static volatile int8_t x1072 = INT8_MIN;
	volatile int32_t t177 = -655;

    t177 = ((x1069-x1070)!=(x1071*x1072));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1074 = INT8_MIN;
	int64_t x1075 = 20LL;
	uint8_t x1076 = 60U;
	volatile int32_t t178 = 123;

    t178 = ((x1073-x1074)!=(x1075*x1076));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x1082 = INT64_MAX;
	uint16_t x1084 = UINT16_MAX;
	volatile int32_t t179 = 60794;

    t179 = ((x1081-x1082)!=(x1083*x1084));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1085 = -1;
	uint64_t x1087 = 243528264329854899LLU;
	int16_t x1088 = -1;
	static volatile int32_t t180 = 1556;

    t180 = ((x1085-x1086)!=(x1087*x1088));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1091 = 28U;
	volatile int8_t x1092 = INT8_MIN;

    t181 = ((x1089-x1090)!=(x1091*x1092));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1093 = -6;
	int16_t x1096 = 6;

    t182 = ((x1093-x1094)!=(x1095*x1096));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x1097 = UINT16_MAX;
	static volatile uint32_t x1099 = UINT32_MAX;
	uint16_t x1100 = UINT16_MAX;

    t183 = ((x1097-x1098)!=(x1099*x1100));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1101 = -1;
	int64_t x1102 = INT64_MIN;
	int64_t x1103 = -1535178LL;
	int16_t x1104 = INT16_MIN;

    t184 = ((x1101-x1102)!=(x1103*x1104));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1105 = -340097LL;
	static volatile uint16_t x1107 = 24U;
	uint16_t x1108 = 57U;
	int32_t t185 = 5070025;

    t185 = ((x1105-x1106)!=(x1107*x1108));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1137 = 107LLU;
	int16_t x1138 = 1;
	int16_t x1140 = INT16_MIN;
	int32_t t186 = -1;

    t186 = ((x1137-x1138)!=(x1139*x1140));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1145 = 414LLU;
	volatile int64_t x1146 = INT64_MIN;
	uint16_t x1147 = UINT16_MAX;
	static int32_t t187 = -820030394;

    t187 = ((x1145-x1146)!=(x1147*x1148));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1151 = INT8_MIN;
	volatile int32_t t188 = 10091;

    t188 = ((x1149-x1150)!=(x1151*x1152));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1157 = 39077237U;
	int16_t x1158 = INT16_MIN;
	uint16_t x1159 = 47U;
	uint16_t x1160 = 3991U;

    t189 = ((x1157-x1158)!=(x1159*x1160));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1161 = INT32_MAX;
	int64_t x1162 = 323541712955175886LL;
	int8_t x1163 = INT8_MIN;
	uint32_t x1164 = 553U;
	int32_t t190 = 0;

    t190 = ((x1161-x1162)!=(x1163*x1164));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1166 = -113;
	int8_t x1167 = -1;
	int64_t x1168 = 42695124261973363LL;

    t191 = ((x1165-x1166)!=(x1167*x1168));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1169 = 0;
	volatile uint16_t x1170 = UINT16_MAX;
	static int16_t x1171 = INT16_MAX;
	volatile uint32_t x1172 = 1152178649U;
	int32_t t192 = 2;

    t192 = ((x1169-x1170)!=(x1171*x1172));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x1173 = 407U;
	volatile uint32_t x1174 = UINT32_MAX;
	uint16_t x1175 = 202U;
	int32_t t193 = -2108104;

    t193 = ((x1173-x1174)!=(x1175*x1176));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1177 = INT8_MIN;
	volatile uint16_t x1180 = 500U;
	int32_t t194 = 5044;

    t194 = ((x1177-x1178)!=(x1179*x1180));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x1189 = 15U;
	uint8_t x1191 = UINT8_MAX;
	static int16_t x1192 = -120;
	int32_t t195 = 11;

    t195 = ((x1189-x1190)!=(x1191*x1192));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1197 = -1LL;
	int16_t x1200 = INT16_MAX;
	volatile int32_t t196 = -270729627;

    t196 = ((x1197-x1198)!=(x1199*x1200));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1202 = -2063065889027LL;
	static int16_t x1203 = INT16_MIN;
	int32_t t197 = -12354594;

    t197 = ((x1201-x1202)!=(x1203*x1204));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1205 = -1LL;
	volatile uint16_t x1206 = 15160U;
	uint32_t x1207 = UINT32_MAX;
	int32_t x1208 = INT32_MIN;
	int32_t t198 = 204493;

    t198 = ((x1205-x1206)!=(x1207*x1208));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1213 = 113664504680708LLU;
	int16_t x1214 = -651;
	volatile int64_t x1215 = INT64_MIN;
	uint64_t x1216 = 5347562503616000LLU;
	int32_t t199 = -113971;

    t199 = ((x1213-x1214)!=(x1215*x1216));

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

