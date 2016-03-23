
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

static volatile int32_t x2 = -1;
static int8_t x10 = 2;
static volatile int32_t t2 = 28492;
volatile int16_t x15 = INT16_MIN;
int64_t x16 = INT64_MIN;
uint8_t x23 = 8U;
static int16_t x37 = INT16_MIN;
volatile int64_t x41 = 415404288LL;
volatile uint8_t x43 = UINT8_MAX;
int32_t x50 = -1;
int8_t x51 = -1;
int64_t x53 = -9631075470LL;
int64_t x65 = INT64_MIN;
int32_t t15 = 39;
int64_t x73 = -116794077077963LL;
int32_t x83 = 1325;
volatile uint8_t x95 = 26U;
uint32_t x100 = UINT32_MAX;
int16_t x102 = INT16_MAX;
uint8_t x116 = 43U;
static volatile int32_t t23 = -21018;
volatile int32_t t24 = 950858552;
int64_t x122 = -1LL;
int8_t x124 = -1;
static int32_t t25 = -50;
int16_t x126 = -706;
static int16_t x151 = INT16_MIN;
volatile uint8_t x153 = 7U;
static int16_t x155 = 0;
int8_t x156 = -1;
uint64_t x159 = 248182359LLU;
static uint16_t x162 = 923U;
static int64_t x164 = INT64_MAX;
int16_t x173 = INT16_MIN;
volatile int32_t t33 = 5;
int64_t x203 = INT64_MIN;
int32_t x211 = INT32_MAX;
int8_t x230 = 47;
int8_t x231 = INT8_MAX;
static int8_t x236 = INT8_MAX;
int16_t x248 = INT16_MIN;
int32_t x249 = 1819;
int8_t x251 = INT8_MAX;
int16_t x254 = -5418;
uint32_t x256 = UINT32_MAX;
int16_t x257 = INT16_MIN;
static int16_t x258 = -872;
int64_t x267 = INT64_MIN;
static volatile int32_t t48 = -21864;
int32_t x279 = -12;
static volatile int32_t x287 = -1;
static int32_t t51 = 0;
uint16_t x297 = 201U;
uint32_t x299 = UINT32_MAX;
static volatile int32_t t53 = -127768;
uint32_t x301 = UINT32_MAX;
static int32_t t54 = 49;
static int32_t t56 = -17364;
volatile int32_t t57 = 343665;
static int16_t x324 = INT16_MIN;
int64_t x329 = INT64_MIN;
int16_t x333 = INT16_MIN;
int32_t t61 = -34;
static uint8_t x351 = 5U;
int16_t x358 = -1;
uint32_t x359 = UINT32_MAX;
uint64_t x360 = 104LLU;
int32_t t66 = 34472532;
uint8_t x370 = UINT8_MAX;
static int8_t x399 = 2;
int16_t x401 = -1;
int32_t t77 = 3995;
int64_t x405 = INT64_MAX;
uint64_t x406 = 3942101361350LLU;
int32_t x408 = INT32_MIN;
int32_t x416 = INT32_MIN;
volatile int32_t t81 = 1;
static int8_t x423 = INT8_MAX;
static int32_t t82 = 462631934;
volatile uint64_t x430 = 1LLU;
volatile int32_t x431 = -1;
volatile int32_t t84 = 21718;
uint32_t x441 = 52586U;
int64_t x443 = -39910739138626LL;
int32_t x444 = INT32_MIN;
static int64_t x457 = -1LL;
int16_t x461 = -1;
uint8_t x462 = 86U;
volatile int8_t x463 = -1;
static volatile int32_t t88 = 63767880;
uint16_t x467 = UINT16_MAX;
static int16_t x475 = INT16_MIN;
int8_t x476 = -56;
int32_t t91 = 4104414;
int16_t x483 = INT16_MIN;
volatile uint8_t x486 = 15U;
uint32_t x487 = 724957785U;
static int32_t t96 = 0;
static uint64_t x506 = 338093LLU;
volatile int32_t t97 = 1827632;
static uint64_t x509 = UINT64_MAX;
int64_t x512 = INT64_MIN;
uint8_t x527 = 1U;
uint32_t x531 = UINT32_MAX;
int8_t x538 = 2;
static uint32_t x551 = UINT32_MAX;
volatile int32_t t106 = 11563;
int32_t x565 = -63018874;
int32_t t107 = -447;
static uint8_t x575 = UINT8_MAX;
int32_t x578 = INT32_MAX;
volatile int32_t x584 = -289609140;
volatile int32_t x597 = 41553;
volatile int32_t x600 = INT32_MIN;
int16_t x608 = 13247;
static volatile uint16_t x610 = 16U;
int16_t x614 = -8;
volatile uint16_t x615 = UINT16_MAX;
uint16_t x616 = 516U;
static int8_t x617 = -1;
volatile uint16_t x625 = 1U;
uint16_t x628 = 421U;
uint32_t x629 = 54555U;
static volatile uint8_t x633 = UINT8_MAX;
volatile int32_t x649 = -54767;
volatile int64_t x650 = -970LL;
static int8_t x651 = 0;
uint32_t x656 = 1614425U;
int32_t t124 = 43;
static uint8_t x657 = UINT8_MAX;
int32_t x660 = -1;
int32_t t125 = 11;
static volatile uint16_t x674 = 31U;
volatile int32_t t130 = 0;
int32_t x685 = -1;
static uint16_t x690 = 0U;
int64_t x691 = -1LL;
static volatile int64_t x694 = -1LL;
int32_t t133 = -239831149;
volatile int32_t t135 = -28;
volatile uint8_t x715 = 28U;
int8_t x730 = INT8_MIN;
int8_t x731 = 0;
static int32_t t139 = 80;
uint32_t x739 = 33976U;
int64_t x740 = INT64_MIN;
uint16_t x747 = 17230U;
uint16_t x753 = 28240U;
int16_t x758 = -1;
int8_t x760 = 1;
volatile int32_t t144 = 46114859;
int16_t x762 = -21;
int32_t t145 = -18579;
static int16_t x778 = INT16_MIN;
int16_t x787 = -196;
int64_t x796 = INT64_MIN;
volatile int32_t t152 = 17;
uint16_t x800 = 3U;
volatile int32_t x804 = 2;
volatile int32_t t154 = -36605;
volatile int16_t x820 = INT16_MIN;
int32_t t157 = 161467222;
int16_t x837 = -1;
int8_t x840 = 25;
volatile uint64_t x841 = 33LLU;
static int32_t x845 = -1;
int8_t x848 = INT8_MIN;
int16_t x868 = -70;
static int8_t x872 = INT8_MIN;
uint32_t x877 = 2U;
int16_t x880 = -1;
volatile int16_t x888 = -1;
volatile int32_t t169 = -44;
volatile uint32_t x895 = 1115U;
int16_t x905 = -103;
uint8_t x908 = 1U;
static uint64_t x910 = UINT64_MAX;
int8_t x913 = INT8_MAX;
int16_t x914 = -1;
int8_t x922 = 6;
uint64_t x937 = 9LLU;
int32_t t178 = -29;
int16_t x943 = INT16_MAX;
volatile int16_t x955 = INT16_MIN;
static int32_t x974 = INT32_MIN;
uint64_t x976 = 2120067853572275330LLU;
int16_t x977 = INT16_MIN;
static int32_t x984 = INT32_MIN;
int16_t x987 = -1;
int32_t x995 = INT32_MIN;
int64_t x1000 = INT64_MIN;
int32_t t191 = 7424869;
int32_t t192 = 33828;
static int64_t x1015 = INT64_MIN;
int64_t x1016 = -175568LL;
volatile int64_t x1023 = -2726LL;
static volatile int16_t x1025 = INT16_MIN;
static uint32_t x1042 = UINT32_MAX;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	uint64_t x3 = UINT64_MAX;
	int32_t x4 = 9559;
	static volatile int32_t t0 = -6321;

    t0 = ((x1*x2)<=(x3&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = 78;
	static int8_t x8 = -1;
	volatile int32_t t1 = -173327124;

    t1 = ((x5*x6)<=(x7&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 2;
	static int64_t x11 = INT64_MAX;
	uint8_t x12 = 39U;

    t2 = ((x9*x10)<=(x11&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 2U;
	static uint64_t x14 = 143LLU;
	volatile int32_t t3 = -1261643;

    t3 = ((x13*x14)<=(x15&x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 111U;
	volatile int16_t x18 = INT16_MIN;
	volatile int32_t x19 = 0;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = -62825288;

    t4 = ((x17*x18)<=(x19&x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 1;
	static int64_t x22 = INT64_MIN;
	int8_t x24 = INT8_MAX;
	int32_t t5 = 216338;

    t5 = ((x21*x22)<=(x23&x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 6807328403370803581LLU;
	int32_t x26 = -1;
	int64_t x27 = INT64_MIN;
	static uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 244019791;

    t6 = ((x25*x26)<=(x27&x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 95U;
	int8_t x34 = 8;
	uint8_t x35 = UINT8_MAX;
	volatile int8_t x36 = -6;
	volatile int32_t t7 = 425;

    t7 = ((x33*x34)<=(x35&x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x38 = 376282643763LL;
	int64_t x39 = 7054794831133671LL;
	int8_t x40 = INT8_MIN;
	volatile int32_t t8 = -37681857;

    t8 = ((x37*x38)<=(x39&x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x42 = -2495;
	int32_t x44 = 41056447;
	volatile int32_t t9 = -13205681;

    t9 = ((x41*x42)<=(x43&x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x45 = INT32_MIN;
	static uint64_t x46 = 4315LLU;
	int64_t x47 = -1LL;
	int8_t x48 = INT8_MAX;
	int32_t t10 = -1291;

    t10 = ((x45*x46)<=(x47&x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = 258871351LL;
	int32_t x52 = -1;
	static int32_t t11 = -9846585;

    t11 = ((x49*x50)<=(x51&x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MIN;
	volatile uint8_t x56 = 24U;
	volatile int32_t t12 = -8015694;

    t12 = ((x53*x54)<=(x55&x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x57 = 473075374926284036LLU;
	static uint16_t x58 = 6637U;
	int16_t x59 = 26;
	int64_t x60 = INT64_MAX;
	volatile int32_t t13 = 163180;

    t13 = ((x57*x58)<=(x59&x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MIN;
	uint8_t x62 = 10U;
	static int16_t x63 = INT16_MAX;
	volatile int8_t x64 = INT8_MAX;
	volatile int32_t t14 = 174732;

    t14 = ((x61*x62)<=(x63&x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x66 = 1;
	uint16_t x67 = UINT16_MAX;
	int64_t x68 = INT64_MAX;

    t15 = ((x65*x66)<=(x67&x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x74 = 3983U;
	int8_t x75 = INT8_MAX;
	static int32_t x76 = INT32_MIN;
	int32_t t16 = -12888;

    t16 = ((x73*x74)<=(x75&x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x81 = 4173U;
	int64_t x82 = -1LL;
	int8_t x84 = INT8_MAX;
	int32_t t17 = -248691127;

    t17 = ((x81*x82)<=(x83&x84));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x89 = UINT64_MAX;
	int16_t x90 = -15;
	static uint16_t x91 = 38U;
	uint8_t x92 = UINT8_MAX;
	int32_t t18 = -25;

    t18 = ((x89*x90)<=(x91&x92));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x93 = UINT8_MAX;
	int16_t x94 = INT16_MIN;
	static int16_t x96 = 5235;
	static int32_t t19 = -7;

    t19 = ((x93*x94)<=(x95&x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x97 = -1;
	int8_t x98 = INT8_MIN;
	int64_t x99 = 1090855946399LL;
	int32_t t20 = 60642623;

    t20 = ((x97*x98)<=(x99&x100));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x101 = 476;
	uint16_t x103 = 186U;
	int32_t x104 = INT32_MIN;
	static int32_t t21 = -668;

    t21 = ((x101*x102)<=(x103&x104));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x109 = 12U;
	uint64_t x110 = UINT64_MAX;
	uint32_t x111 = 19371U;
	static uint16_t x112 = 85U;
	volatile int32_t t22 = 264699811;

    t22 = ((x109*x110)<=(x111&x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x113 = UINT32_MAX;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = -1;

    t23 = ((x113*x114)<=(x115&x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x117 = 372028522473356298LLU;
	volatile int16_t x118 = -3211;
	int32_t x119 = -1;
	uint8_t x120 = 0U;

    t24 = ((x117*x118)<=(x119&x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x121 = INT8_MIN;
	int32_t x123 = -1;

    t25 = ((x121*x122)<=(x123&x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x125 = INT8_MIN;
	uint16_t x127 = 5U;
	int64_t x128 = 8551232673393582LL;
	int32_t t26 = -1909;

    t26 = ((x125*x126)<=(x127&x128));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x129 = UINT64_MAX;
	int64_t x130 = INT64_MIN;
	static volatile int8_t x131 = -1;
	static volatile uint8_t x132 = UINT8_MAX;
	volatile int32_t t27 = -1;

    t27 = ((x129*x130)<=(x131&x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x149 = UINT32_MAX;
	int32_t x150 = -91931724;
	uint16_t x152 = 58U;
	volatile int32_t t28 = 298;

    t28 = ((x149*x150)<=(x151&x152));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x154 = 2251;
	static int32_t t29 = 22818;

    t29 = ((x153*x154)<=(x155&x156));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x157 = INT16_MIN;
	int8_t x158 = -1;
	volatile int32_t x160 = INT32_MIN;
	int32_t t30 = 1;

    t30 = ((x157*x158)<=(x159&x160));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x161 = 127LLU;
	static int8_t x163 = -1;
	volatile int32_t t31 = 1;

    t31 = ((x161*x162)<=(x163&x164));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x169 = 14607301140588LL;
	uint8_t x170 = 13U;
	static int64_t x171 = 9102886LL;
	static uint8_t x172 = UINT8_MAX;
	volatile int32_t t32 = -97489;

    t32 = ((x169*x170)<=(x171&x172));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x174 = 2;
	uint64_t x175 = UINT64_MAX;
	volatile uint32_t x176 = UINT32_MAX;

    t33 = ((x173*x174)<=(x175&x176));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x177 = -1;
	uint64_t x178 = UINT64_MAX;
	static volatile int8_t x179 = -1;
	static int16_t x180 = -1;
	volatile int32_t t34 = 1;

    t34 = ((x177*x178)<=(x179&x180));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x185 = -1LL;
	int64_t x186 = -529177546LL;
	static int8_t x187 = -6;
	int64_t x188 = INT64_MIN;
	static volatile int32_t t35 = -70;

    t35 = ((x185*x186)<=(x187&x188));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x201 = INT16_MIN;
	int64_t x202 = 176121079258LL;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t36 = 2056;

    t36 = ((x201*x202)<=(x203&x204));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x205 = INT8_MAX;
	int16_t x206 = -1;
	int8_t x207 = -1;
	uint64_t x208 = 1817843678694288016LLU;
	volatile int32_t t37 = 123461951;

    t37 = ((x205*x206)<=(x207&x208));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MAX;
	int64_t x212 = INT64_MAX;
	int32_t t38 = 56381;

    t38 = ((x209*x210)<=(x211&x212));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x217 = 2128752211528300458LLU;
	volatile uint16_t x218 = 68U;
	uint16_t x219 = 25U;
	int16_t x220 = 3;
	static volatile int32_t t39 = -3940112;

    t39 = ((x217*x218)<=(x219&x220));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x229 = INT16_MIN;
	int64_t x232 = 34040477405816LL;
	int32_t t40 = -465;

    t40 = ((x229*x230)<=(x231&x232));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x233 = -1;
	volatile uint32_t x234 = UINT32_MAX;
	uint16_t x235 = 63U;
	volatile int32_t t41 = 84922;

    t41 = ((x233*x234)<=(x235&x236));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x241 = -1;
	volatile int16_t x242 = INT16_MAX;
	int8_t x243 = INT8_MIN;
	static volatile uint8_t x244 = 126U;
	static volatile int32_t t42 = 22;

    t42 = ((x241*x242)<=(x243&x244));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x245 = INT8_MIN;
	volatile uint8_t x246 = 120U;
	uint16_t x247 = 1U;
	volatile int32_t t43 = -381751;

    t43 = ((x245*x246)<=(x247&x248));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x250 = 3763U;
	volatile int32_t x252 = INT32_MAX;
	volatile int32_t t44 = 0;

    t44 = ((x249*x250)<=(x251&x252));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x253 = INT16_MIN;
	int64_t x255 = -1LL;
	volatile int32_t t45 = -1331;

    t45 = ((x253*x254)<=(x255&x256));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x259 = 370U;
	uint16_t x260 = 3U;
	volatile int32_t t46 = -5336854;

    t46 = ((x257*x258)<=(x259&x260));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x261 = 20055U;
	int32_t x262 = -1;
	static int32_t x263 = 5490;
	int16_t x264 = INT16_MAX;
	int32_t t47 = -119670788;

    t47 = ((x261*x262)<=(x263&x264));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x265 = 36;
	static int16_t x266 = INT16_MAX;
	static uint8_t x268 = UINT8_MAX;

    t48 = ((x265*x266)<=(x267&x268));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x277 = 3058759U;
	int8_t x278 = -1;
	int64_t x280 = 777885LL;
	volatile int32_t t49 = 66451841;

    t49 = ((x277*x278)<=(x279&x280));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x285 = INT32_MIN;
	uint64_t x286 = UINT64_MAX;
	static int8_t x288 = INT8_MIN;
	int32_t t50 = 117762;

    t50 = ((x285*x286)<=(x287&x288));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x289 = 2785032510LL;
	static int32_t x290 = INT32_MAX;
	uint8_t x291 = 1U;
	int16_t x292 = 1;

    t51 = ((x289*x290)<=(x291&x292));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x293 = INT32_MAX;
	int8_t x294 = -1;
	uint32_t x295 = 10996U;
	int16_t x296 = INT16_MAX;
	int32_t t52 = 1;

    t52 = ((x293*x294)<=(x295&x296));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x298 = -2122LL;
	int16_t x300 = 757;

    t53 = ((x297*x298)<=(x299&x300));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x302 = -1;
	volatile int16_t x303 = INT16_MIN;
	static uint32_t x304 = 168508U;

    t54 = ((x301*x302)<=(x303&x304));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x305 = 4U;
	int8_t x306 = -56;
	uint16_t x307 = UINT16_MAX;
	int64_t x308 = INT64_MAX;
	volatile int32_t t55 = -13;

    t55 = ((x305*x306)<=(x307&x308));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint64_t x309 = UINT64_MAX;
	static volatile int64_t x310 = INT64_MIN;
	volatile uint16_t x311 = 3173U;
	volatile int16_t x312 = INT16_MIN;

    t56 = ((x309*x310)<=(x311&x312));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x313 = 542678684U;
	int8_t x314 = INT8_MIN;
	volatile uint16_t x315 = 0U;
	int64_t x316 = -91220365408LL;

    t57 = ((x313*x314)<=(x315&x316));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x317 = 46LLU;
	static uint8_t x318 = 0U;
	uint32_t x319 = 9834347U;
	uint8_t x320 = UINT8_MAX;
	static int32_t t58 = -522;

    t58 = ((x317*x318)<=(x319&x320));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x321 = INT16_MAX;
	int16_t x322 = INT16_MIN;
	uint64_t x323 = 436959175536017688LLU;
	int32_t t59 = -11220;

    t59 = ((x321*x322)<=(x323&x324));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x330 = 0;
	uint32_t x331 = 24U;
	static int64_t x332 = INT64_MIN;
	int32_t t60 = 7;

    t60 = ((x329*x330)<=(x331&x332));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x334 = 35808LLU;
	uint16_t x335 = 18U;
	uint32_t x336 = 0U;

    t61 = ((x333*x334)<=(x335&x336));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x337 = -831953LL;
	volatile uint8_t x338 = 15U;
	uint8_t x339 = 15U;
	int16_t x340 = -63;
	volatile int32_t t62 = -223114;

    t62 = ((x337*x338)<=(x339&x340));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x345 = 0U;
	static volatile int64_t x346 = 1LL;
	int32_t x347 = 7;
	int8_t x348 = INT8_MIN;
	static volatile int32_t t63 = -31;

    t63 = ((x345*x346)<=(x347&x348));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x349 = -1;
	int64_t x350 = 2506035LL;
	volatile uint32_t x352 = UINT32_MAX;
	static int32_t t64 = -1;

    t64 = ((x349*x350)<=(x351&x352));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x353 = 0U;
	static uint32_t x354 = 9725106U;
	static int32_t x355 = -30;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t65 = 2;

    t65 = ((x353*x354)<=(x355&x356));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x357 = -7836;

    t66 = ((x357*x358)<=(x359&x360));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x361 = 52;
	uint32_t x362 = 91484430U;
	volatile int32_t x363 = 2641;
	int8_t x364 = INT8_MIN;
	int32_t t67 = 751881;

    t67 = ((x361*x362)<=(x363&x364));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x365 = -278548;
	int64_t x366 = 55LL;
	uint8_t x367 = UINT8_MAX;
	int16_t x368 = 13922;
	volatile int32_t t68 = -686;

    t68 = ((x365*x366)<=(x367&x368));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x369 = INT8_MAX;
	volatile uint16_t x371 = UINT16_MAX;
	static int32_t x372 = INT32_MIN;
	static volatile int32_t t69 = 1;

    t69 = ((x369*x370)<=(x371&x372));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x373 = 2;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	int8_t x376 = -9;
	static int32_t t70 = 4913280;

    t70 = ((x373*x374)<=(x375&x376));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x377 = UINT32_MAX;
	int8_t x378 = INT8_MAX;
	int64_t x379 = INT64_MIN;
	int16_t x380 = INT16_MAX;
	volatile int32_t t71 = 1848;

    t71 = ((x377*x378)<=(x379&x380));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x381 = -1;
	uint16_t x382 = 7U;
	uint32_t x383 = 1U;
	volatile int8_t x384 = 7;
	int32_t t72 = 2;

    t72 = ((x381*x382)<=(x383&x384));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x385 = INT32_MAX;
	static int64_t x386 = -1LL;
	int32_t x387 = 2;
	uint64_t x388 = 1772529LLU;
	volatile int32_t t73 = -178;

    t73 = ((x385*x386)<=(x387&x388));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x389 = -7;
	static int8_t x390 = INT8_MAX;
	static volatile int16_t x391 = INT16_MIN;
	volatile int32_t x392 = INT32_MAX;
	static volatile int32_t t74 = -9750394;

    t74 = ((x389*x390)<=(x391&x392));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x393 = -49492;
	static int8_t x394 = INT8_MIN;
	volatile int32_t x395 = INT32_MIN;
	static int64_t x396 = INT64_MIN;
	static volatile int32_t t75 = -5357;

    t75 = ((x393*x394)<=(x395&x396));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x397 = -1LL;
	int16_t x398 = -1;
	int32_t x400 = INT32_MIN;
	int32_t t76 = 274763;

    t76 = ((x397*x398)<=(x399&x400));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x402 = -1;
	int32_t x403 = -2;
	int64_t x404 = INT64_MIN;

    t77 = ((x401*x402)<=(x403&x404));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x407 = -17;
	volatile int32_t t78 = 360;

    t78 = ((x405*x406)<=(x407&x408));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x409 = -1;
	uint32_t x410 = 49736073U;
	int8_t x411 = INT8_MAX;
	int64_t x412 = INT64_MAX;
	volatile int32_t t79 = 7367;

    t79 = ((x409*x410)<=(x411&x412));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x413 = INT16_MAX;
	volatile int32_t x414 = 2770;
	uint64_t x415 = UINT64_MAX;
	int32_t t80 = -1;

    t80 = ((x413*x414)<=(x415&x416));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x417 = INT32_MIN;
	uint8_t x418 = 1U;
	int64_t x419 = INT64_MIN;
	static volatile int64_t x420 = -52938453634960978LL;

    t81 = ((x417*x418)<=(x419&x420));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x421 = INT8_MAX;
	uint8_t x422 = UINT8_MAX;
	int32_t x424 = 1;

    t82 = ((x421*x422)<=(x423&x424));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x429 = INT64_MIN;
	int64_t x432 = 22024474049LL;
	volatile int32_t t83 = -221189961;

    t83 = ((x429*x430)<=(x431&x432));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x433 = 74U;
	volatile int16_t x434 = INT16_MIN;
	uint64_t x435 = 58582507LLU;
	uint32_t x436 = UINT32_MAX;

    t84 = ((x433*x434)<=(x435&x436));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x442 = 5U;
	int32_t t85 = 0;

    t85 = ((x441*x442)<=(x443&x444));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x453 = 1527U;
	uint32_t x454 = 25U;
	int64_t x455 = -1LL;
	int32_t x456 = INT32_MIN;
	int32_t t86 = -22509;

    t86 = ((x453*x454)<=(x455&x456));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x458 = UINT16_MAX;
	uint16_t x459 = 201U;
	static volatile uint16_t x460 = UINT16_MAX;
	volatile int32_t t87 = 7;

    t87 = ((x457*x458)<=(x459&x460));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x464 = UINT16_MAX;

    t88 = ((x461*x462)<=(x463&x464));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x465 = UINT16_MAX;
	int8_t x466 = 1;
	uint16_t x468 = 28U;
	volatile int32_t t89 = 0;

    t89 = ((x465*x466)<=(x467&x468));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x469 = -1;
	uint16_t x470 = UINT16_MAX;
	uint8_t x471 = UINT8_MAX;
	volatile int32_t x472 = -1;
	static int32_t t90 = -1054399;

    t90 = ((x469*x470)<=(x471&x472));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x473 = INT32_MAX;
	volatile uint64_t x474 = UINT64_MAX;

    t91 = ((x473*x474)<=(x475&x476));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x477 = 719;
	uint16_t x478 = 20U;
	volatile int8_t x479 = INT8_MAX;
	int16_t x480 = 76;
	volatile int32_t t92 = 801747;

    t92 = ((x477*x478)<=(x479&x480));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x481 = UINT8_MAX;
	volatile uint8_t x482 = UINT8_MAX;
	int8_t x484 = -3;
	volatile int32_t t93 = 453719;

    t93 = ((x481*x482)<=(x483&x484));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x485 = INT8_MAX;
	uint16_t x488 = 29055U;
	volatile int32_t t94 = 37722;

    t94 = ((x485*x486)<=(x487&x488));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x493 = 274129155LL;
	uint64_t x494 = UINT64_MAX;
	int64_t x495 = INT64_MAX;
	static uint32_t x496 = UINT32_MAX;
	int32_t t95 = 1516578;

    t95 = ((x493*x494)<=(x495&x496));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x501 = INT8_MIN;
	volatile int64_t x502 = -1LL;
	static volatile int16_t x503 = 1;
	static int64_t x504 = 2327878425450146LL;

    t96 = ((x501*x502)<=(x503&x504));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x505 = UINT16_MAX;
	uint16_t x507 = 1U;
	int16_t x508 = 103;

    t97 = ((x505*x506)<=(x507&x508));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x510 = -1;
	int64_t x511 = INT64_MIN;
	int32_t t98 = -307598;

    t98 = ((x509*x510)<=(x511&x512));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x517 = -1;
	uint64_t x518 = 52227048LLU;
	int8_t x519 = 2;
	int8_t x520 = 1;
	int32_t t99 = 18463607;

    t99 = ((x517*x518)<=(x519&x520));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x525 = -1;
	int16_t x526 = -1;
	volatile int32_t x528 = INT32_MIN;
	int32_t t100 = 55270484;

    t100 = ((x525*x526)<=(x527&x528));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x529 = -1;
	uint16_t x530 = 20454U;
	volatile uint32_t x532 = 1218280664U;
	static int32_t t101 = 3;

    t101 = ((x529*x530)<=(x531&x532));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x533 = UINT16_MAX;
	uint64_t x534 = UINT64_MAX;
	uint32_t x535 = 362242U;
	volatile int32_t x536 = 436;
	volatile int32_t t102 = -3453343;

    t102 = ((x533*x534)<=(x535&x536));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x537 = UINT64_MAX;
	static int8_t x539 = INT8_MIN;
	volatile uint8_t x540 = UINT8_MAX;
	int32_t t103 = 2101737;

    t103 = ((x537*x538)<=(x539&x540));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x545 = UINT32_MAX;
	int16_t x546 = INT16_MIN;
	int8_t x547 = INT8_MIN;
	volatile uint32_t x548 = UINT32_MAX;
	int32_t t104 = -1001078;

    t104 = ((x545*x546)<=(x547&x548));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x549 = 0LL;
	int8_t x550 = INT8_MAX;
	int8_t x552 = 1;
	volatile int32_t t105 = -1495284;

    t105 = ((x549*x550)<=(x551&x552));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x553 = UINT16_MAX;
	volatile uint32_t x554 = UINT32_MAX;
	int16_t x555 = INT16_MIN;
	uint16_t x556 = 19U;

    t106 = ((x553*x554)<=(x555&x556));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x566 = 0U;
	int8_t x567 = -1;
	static int64_t x568 = INT64_MIN;

    t107 = ((x565*x566)<=(x567&x568));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x573 = -114957857LL;
	uint32_t x574 = 43650900U;
	int64_t x576 = -1LL;
	volatile int32_t t108 = 21;

    t108 = ((x573*x574)<=(x575&x576));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x577 = 9637LLU;
	static volatile uint64_t x579 = 12517146522418LLU;
	volatile int64_t x580 = 12LL;
	static int32_t t109 = -93;

    t109 = ((x577*x578)<=(x579&x580));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x581 = 40;
	int8_t x582 = -37;
	int32_t x583 = INT32_MAX;
	int32_t t110 = 370764365;

    t110 = ((x581*x582)<=(x583&x584));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x585 = 28U;
	int16_t x586 = 11;
	volatile int16_t x587 = -33;
	uint8_t x588 = 1U;
	volatile int32_t t111 = 14;

    t111 = ((x585*x586)<=(x587&x588));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint32_t x598 = UINT32_MAX;
	int8_t x599 = INT8_MIN;
	volatile int32_t t112 = 21729734;

    t112 = ((x597*x598)<=(x599&x600));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x605 = -1;
	uint32_t x606 = 105860954U;
	volatile int64_t x607 = -1LL;
	static int32_t t113 = 2956;

    t113 = ((x605*x606)<=(x607&x608));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x609 = INT16_MIN;
	uint64_t x611 = UINT64_MAX;
	int64_t x612 = -1LL;
	int32_t t114 = -23396976;

    t114 = ((x609*x610)<=(x611&x612));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x613 = 49038715U;
	volatile int32_t t115 = -85641084;

    t115 = ((x613*x614)<=(x615&x616));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x618 = INT8_MIN;
	uint64_t x619 = UINT64_MAX;
	int16_t x620 = 235;
	volatile int32_t t116 = 22;

    t116 = ((x617*x618)<=(x619&x620));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x621 = UINT8_MAX;
	volatile int8_t x622 = -1;
	int8_t x623 = -1;
	int64_t x624 = -760269206LL;
	volatile int32_t t117 = 491832;

    t117 = ((x621*x622)<=(x623&x624));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x626 = INT32_MIN;
	uint16_t x627 = UINT16_MAX;
	volatile int32_t t118 = -5118362;

    t118 = ((x625*x626)<=(x627&x628));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x630 = UINT64_MAX;
	int32_t x631 = 10721;
	int64_t x632 = INT64_MIN;
	volatile int32_t t119 = 35148502;

    t119 = ((x629*x630)<=(x631&x632));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x634 = 28316U;
	uint8_t x635 = UINT8_MAX;
	int16_t x636 = -155;
	int32_t t120 = -5407;

    t120 = ((x633*x634)<=(x635&x636));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x641 = 6U;
	uint8_t x642 = UINT8_MAX;
	volatile int8_t x643 = -53;
	int8_t x644 = -6;
	int32_t t121 = 300;

    t121 = ((x641*x642)<=(x643&x644));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x645 = -1;
	int64_t x646 = 171381LL;
	volatile int8_t x647 = INT8_MIN;
	int32_t x648 = INT32_MAX;
	static int32_t t122 = -1;

    t122 = ((x645*x646)<=(x647&x648));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x652 = 11599U;
	static volatile int32_t t123 = 505;

    t123 = ((x649*x650)<=(x651&x652));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x653 = INT16_MIN;
	int64_t x654 = 9173LL;
	volatile uint8_t x655 = 5U;

    t124 = ((x653*x654)<=(x655&x656));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x658 = 5;
	int16_t x659 = INT16_MIN;

    t125 = ((x657*x658)<=(x659&x660));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x665 = -1;
	uint32_t x666 = 4U;
	static int32_t x667 = -1;
	volatile int64_t x668 = -2LL;
	volatile int32_t t126 = -2;

    t126 = ((x665*x666)<=(x667&x668));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x669 = 880U;
	static uint8_t x670 = UINT8_MAX;
	int32_t x671 = INT32_MIN;
	volatile int16_t x672 = INT16_MAX;
	volatile int32_t t127 = 115458;

    t127 = ((x669*x670)<=(x671&x672));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x673 = -1LL;
	static uint64_t x675 = 283LLU;
	static volatile uint64_t x676 = UINT64_MAX;
	int32_t t128 = -939051;

    t128 = ((x673*x674)<=(x675&x676));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x677 = 653U;
	uint16_t x678 = 697U;
	int64_t x679 = -1LL;
	int16_t x680 = INT16_MIN;
	static int32_t t129 = 44616;

    t129 = ((x677*x678)<=(x679&x680));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x681 = 1412623436035205LLU;
	int8_t x682 = INT8_MIN;
	uint8_t x683 = 1U;
	uint16_t x684 = 1U;

    t130 = ((x681*x682)<=(x683&x684));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x686 = 3192438115707LLU;
	int32_t x687 = 1041937;
	int64_t x688 = INT64_MAX;
	volatile int32_t t131 = 639;

    t131 = ((x685*x686)<=(x687&x688));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x689 = INT64_MIN;
	int16_t x692 = -1;
	int32_t t132 = 193616917;

    t132 = ((x689*x690)<=(x691&x692));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x693 = -1;
	static uint32_t x695 = UINT32_MAX;
	volatile int64_t x696 = INT64_MIN;

    t133 = ((x693*x694)<=(x695&x696));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x697 = 59087472U;
	int8_t x698 = 0;
	uint8_t x699 = 69U;
	int64_t x700 = INT64_MIN;
	volatile int32_t t134 = 6842225;

    t134 = ((x697*x698)<=(x699&x700));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x705 = 0U;
	uint32_t x706 = 2684191U;
	int8_t x707 = 2;
	int32_t x708 = 1;

    t135 = ((x705*x706)<=(x707&x708));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x713 = 303427821505107640LLU;
	static int16_t x714 = 17;
	volatile int8_t x716 = 0;
	volatile int32_t t136 = -1911163;

    t136 = ((x713*x714)<=(x715&x716));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x717 = 6;
	int16_t x718 = -1;
	int16_t x719 = -1;
	int64_t x720 = -13695779LL;
	static int32_t t137 = -35669;

    t137 = ((x717*x718)<=(x719&x720));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x721 = 1U;
	int32_t x722 = INT32_MIN;
	static int32_t x723 = INT32_MAX;
	int16_t x724 = 1;
	int32_t t138 = 0;

    t138 = ((x721*x722)<=(x723&x724));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x729 = INT8_MIN;
	int8_t x732 = INT8_MIN;

    t139 = ((x729*x730)<=(x731&x732));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x733 = UINT64_MAX;
	int16_t x734 = INT16_MAX;
	uint32_t x735 = 67079861U;
	static uint32_t x736 = UINT32_MAX;
	int32_t t140 = 34424097;

    t140 = ((x733*x734)<=(x735&x736));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x737 = -1;
	static int64_t x738 = -51076800LL;
	int32_t t141 = 4;

    t141 = ((x737*x738)<=(x739&x740));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x745 = INT16_MAX;
	uint64_t x746 = UINT64_MAX;
	int64_t x748 = INT64_MIN;
	static int32_t t142 = 7424094;

    t142 = ((x745*x746)<=(x747&x748));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x754 = UINT8_MAX;
	int16_t x755 = INT16_MIN;
	int8_t x756 = INT8_MIN;
	volatile int32_t t143 = -1;

    t143 = ((x753*x754)<=(x755&x756));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x757 = -1;
	uint16_t x759 = UINT16_MAX;

    t144 = ((x757*x758)<=(x759&x760));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x761 = 26U;
	int32_t x763 = INT32_MIN;
	static int16_t x764 = INT16_MAX;

    t145 = ((x761*x762)<=(x763&x764));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x765 = 367;
	int16_t x766 = INT16_MIN;
	static uint8_t x767 = UINT8_MAX;
	int32_t x768 = INT32_MIN;
	static int32_t t146 = -2;

    t146 = ((x765*x766)<=(x767&x768));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x773 = 68990408U;
	int32_t x774 = 36;
	int8_t x775 = INT8_MIN;
	uint16_t x776 = UINT16_MAX;
	static int32_t t147 = 116689;

    t147 = ((x773*x774)<=(x775&x776));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x777 = UINT64_MAX;
	static volatile uint8_t x779 = 0U;
	static int32_t x780 = -1;
	static volatile int32_t t148 = 1384300;

    t148 = ((x777*x778)<=(x779&x780));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x781 = INT16_MIN;
	static int8_t x782 = INT8_MIN;
	int32_t x783 = 4180038;
	volatile uint16_t x784 = 5U;
	volatile int32_t t149 = -9;

    t149 = ((x781*x782)<=(x783&x784));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x785 = 16U;
	volatile int16_t x786 = -111;
	uint64_t x788 = 30916722001528LLU;
	int32_t t150 = 837733;

    t150 = ((x785*x786)<=(x787&x788));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x789 = 106687227LLU;
	int16_t x790 = INT16_MIN;
	static int64_t x791 = INT64_MIN;
	uint16_t x792 = 29521U;
	volatile int32_t t151 = 208403;

    t151 = ((x789*x790)<=(x791&x792));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x793 = -1LL;
	int16_t x794 = -108;
	int32_t x795 = INT32_MIN;

    t152 = ((x793*x794)<=(x795&x796));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x797 = UINT8_MAX;
	volatile uint32_t x798 = UINT32_MAX;
	int64_t x799 = INT64_MIN;
	int32_t t153 = -7889;

    t153 = ((x797*x798)<=(x799&x800));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x801 = INT8_MIN;
	uint16_t x802 = 1541U;
	int16_t x803 = 48;

    t154 = ((x801*x802)<=(x803&x804));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x805 = -1;
	volatile int16_t x806 = 12;
	int32_t x807 = -10;
	static int16_t x808 = INT16_MIN;
	static int32_t t155 = 35065;

    t155 = ((x805*x806)<=(x807&x808));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x809 = -803;
	volatile int8_t x810 = -1;
	uint8_t x811 = 23U;
	int32_t x812 = -2552;
	volatile int32_t t156 = 850;

    t156 = ((x809*x810)<=(x811&x812));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x817 = 133878470;
	int64_t x818 = 231297LL;
	static int16_t x819 = -4;

    t157 = ((x817*x818)<=(x819&x820));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x821 = -1;
	int64_t x822 = 3989162LL;
	volatile uint16_t x823 = 182U;
	int64_t x824 = INT64_MIN;
	volatile int32_t t158 = -18028;

    t158 = ((x821*x822)<=(x823&x824));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x825 = -64394155;
	static volatile uint8_t x826 = 7U;
	int64_t x827 = 9LL;
	uint8_t x828 = UINT8_MAX;
	int32_t t159 = -7;

    t159 = ((x825*x826)<=(x827&x828));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x833 = -1;
	volatile uint8_t x834 = UINT8_MAX;
	uint8_t x835 = 0U;
	int8_t x836 = INT8_MAX;
	int32_t t160 = -14997;

    t160 = ((x833*x834)<=(x835&x836));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x838 = 3898;
	int32_t x839 = -14;
	int32_t t161 = 383;

    t161 = ((x837*x838)<=(x839&x840));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x842 = INT64_MIN;
	uint8_t x843 = 0U;
	int32_t x844 = INT32_MIN;
	volatile int32_t t162 = -502;

    t162 = ((x841*x842)<=(x843&x844));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x846 = INT64_MAX;
	volatile int32_t x847 = INT32_MIN;
	int32_t t163 = -6098783;

    t163 = ((x845*x846)<=(x847&x848));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x853 = -1;
	volatile int8_t x854 = -1;
	int64_t x855 = 27LL;
	int64_t x856 = INT64_MIN;
	volatile int32_t t164 = 5323;

    t164 = ((x853*x854)<=(x855&x856));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x861 = 33U;
	int8_t x862 = -1;
	static int32_t x863 = INT32_MAX;
	volatile int16_t x864 = INT16_MAX;
	int32_t t165 = -233763072;

    t165 = ((x861*x862)<=(x863&x864));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x865 = -1;
	volatile uint64_t x866 = 8533481028122238066LLU;
	static uint8_t x867 = UINT8_MAX;
	volatile int32_t t166 = -56;

    t166 = ((x865*x866)<=(x867&x868));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x869 = -7;
	uint8_t x870 = 7U;
	static uint64_t x871 = 585770615662LLU;
	volatile int32_t t167 = -39;

    t167 = ((x869*x870)<=(x871&x872));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x878 = UINT32_MAX;
	static int64_t x879 = INT64_MIN;
	static volatile int32_t t168 = 32960155;

    t168 = ((x877*x878)<=(x879&x880));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x885 = -1LL;
	int8_t x886 = 5;
	volatile uint64_t x887 = 51444445624LLU;

    t169 = ((x885*x886)<=(x887&x888));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x889 = INT16_MIN;
	uint16_t x890 = UINT16_MAX;
	uint16_t x891 = 2298U;
	volatile int16_t x892 = INT16_MAX;
	volatile int32_t t170 = 6165433;

    t170 = ((x889*x890)<=(x891&x892));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x893 = INT16_MAX;
	uint8_t x894 = 71U;
	int32_t x896 = INT32_MIN;
	int32_t t171 = -268;

    t171 = ((x893*x894)<=(x895&x896));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x906 = 34U;
	uint8_t x907 = UINT8_MAX;
	static int32_t t172 = 10144;

    t172 = ((x905*x906)<=(x907&x908));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x909 = INT32_MIN;
	int16_t x911 = -1210;
	int8_t x912 = INT8_MAX;
	volatile int32_t t173 = -193169;

    t173 = ((x909*x910)<=(x911&x912));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x915 = -4177296481601368LL;
	uint8_t x916 = 1U;
	volatile int32_t t174 = 415;

    t174 = ((x913*x914)<=(x915&x916));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x921 = 1U;
	static int16_t x923 = INT16_MIN;
	int64_t x924 = 195463266613LL;
	int32_t t175 = -73;

    t175 = ((x921*x922)<=(x923&x924));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x925 = UINT8_MAX;
	uint64_t x926 = 8824825314738212LLU;
	int64_t x927 = -30184LL;
	uint32_t x928 = 0U;
	volatile int32_t t176 = -3289;

    t176 = ((x925*x926)<=(x927&x928));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x929 = UINT8_MAX;
	int8_t x930 = -1;
	volatile int8_t x931 = -8;
	static uint16_t x932 = UINT16_MAX;
	int32_t t177 = 47019;

    t177 = ((x929*x930)<=(x931&x932));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x938 = -1;
	int16_t x939 = 7;
	uint32_t x940 = UINT32_MAX;

    t178 = ((x937*x938)<=(x939&x940));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x941 = 1;
	int32_t x942 = INT32_MAX;
	volatile uint16_t x944 = 2484U;
	volatile int32_t t179 = 0;

    t179 = ((x941*x942)<=(x943&x944));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x945 = INT8_MIN;
	static uint16_t x946 = 177U;
	int32_t x947 = INT32_MIN;
	int8_t x948 = INT8_MIN;
	volatile int32_t t180 = 830574162;

    t180 = ((x945*x946)<=(x947&x948));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x949 = 30U;
	static uint8_t x950 = UINT8_MAX;
	static uint16_t x951 = 1909U;
	int8_t x952 = INT8_MIN;
	int32_t t181 = 14059614;

    t181 = ((x949*x950)<=(x951&x952));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x953 = 6781;
	volatile int8_t x954 = INT8_MIN;
	static int32_t x956 = 3884;
	int32_t t182 = 127261;

    t182 = ((x953*x954)<=(x955&x956));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x957 = 4U;
	int16_t x958 = 1;
	static int32_t x959 = -1;
	uint16_t x960 = 1555U;
	static int32_t t183 = -8;

    t183 = ((x957*x958)<=(x959&x960));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x961 = 26U;
	int32_t x962 = -1;
	int8_t x963 = INT8_MIN;
	int64_t x964 = INT64_MAX;
	volatile int32_t t184 = -44759;

    t184 = ((x961*x962)<=(x963&x964));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x969 = 571102527552872504LL;
	static uint64_t x970 = 132812823LLU;
	uint8_t x971 = UINT8_MAX;
	volatile uint32_t x972 = 371646974U;
	int32_t t185 = -1;

    t185 = ((x969*x970)<=(x971&x972));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x973 = 240139LL;
	int64_t x975 = INT64_MIN;
	volatile int32_t t186 = -14;

    t186 = ((x973*x974)<=(x975&x976));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x978 = 4847155U;
	static uint32_t x979 = 60U;
	static int16_t x980 = INT16_MIN;
	static volatile int32_t t187 = 45;

    t187 = ((x977*x978)<=(x979&x980));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x981 = 279589043211181LLU;
	static int32_t x982 = 110782;
	uint64_t x983 = 1972499888LLU;
	volatile int32_t t188 = 6233;

    t188 = ((x981*x982)<=(x983&x984));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x985 = INT8_MIN;
	int8_t x986 = 48;
	static uint8_t x988 = 53U;
	volatile int32_t t189 = -2109;

    t189 = ((x985*x986)<=(x987&x988));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x993 = INT8_MIN;
	int8_t x994 = -1;
	volatile int16_t x996 = -1;
	volatile int32_t t190 = -104011;

    t190 = ((x993*x994)<=(x995&x996));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x997 = -312;
	int8_t x998 = INT8_MIN;
	int64_t x999 = INT64_MIN;

    t191 = ((x997*x998)<=(x999&x1000));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1009 = INT32_MIN;
	static int64_t x1010 = -1LL;
	volatile int16_t x1011 = 24;
	int8_t x1012 = -1;

    t192 = ((x1009*x1010)<=(x1011&x1012));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x1013 = UINT64_MAX;
	uint32_t x1014 = UINT32_MAX;
	static volatile int32_t t193 = -373;

    t193 = ((x1013*x1014)<=(x1015&x1016));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1017 = INT32_MAX;
	uint16_t x1018 = 1U;
	static volatile int8_t x1019 = -25;
	int64_t x1020 = 0LL;
	volatile int32_t t194 = -7;

    t194 = ((x1017*x1018)<=(x1019&x1020));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1021 = -280391986869LL;
	uint64_t x1022 = 28003LLU;
	uint8_t x1024 = 0U;
	volatile int32_t t195 = 9989501;

    t195 = ((x1021*x1022)<=(x1023&x1024));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1026 = -3;
	volatile uint64_t x1027 = 3135LLU;
	volatile int16_t x1028 = -1;
	static volatile int32_t t196 = 369318;

    t196 = ((x1025*x1026)<=(x1027&x1028));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1029 = UINT8_MAX;
	int16_t x1030 = INT16_MAX;
	uint64_t x1031 = UINT64_MAX;
	static uint32_t x1032 = 127533U;
	int32_t t197 = 125;

    t197 = ((x1029*x1030)<=(x1031&x1032));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1037 = INT64_MAX;
	int32_t x1038 = -1;
	static int64_t x1039 = -8471756LL;
	uint64_t x1040 = 3868677210368348184LLU;
	static int32_t t198 = 57;

    t198 = ((x1037*x1038)<=(x1039&x1040));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x1041 = 58U;
	int32_t x1043 = INT32_MIN;
	int32_t x1044 = 27;
	static volatile int32_t t199 = 3919662;

    t199 = ((x1041*x1042)<=(x1043&x1044));

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

