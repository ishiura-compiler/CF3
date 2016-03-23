
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

int16_t x4 = INT16_MIN;
uint16_t x5 = UINT16_MAX;
volatile int32_t x7 = -11786253;
uint32_t x14 = 419003U;
int8_t x19 = INT8_MAX;
int32_t t4 = -12375;
int64_t x22 = INT64_MIN;
volatile uint64_t t6 = 64650LLU;
volatile uint32_t x29 = 179270U;
int8_t x35 = INT8_MIN;
int32_t x38 = INT32_MIN;
int16_t x40 = INT16_MAX;
int8_t x43 = -1;
volatile int8_t x44 = INT8_MIN;
int64_t x48 = INT64_MAX;
int32_t x50 = INT32_MAX;
uint64_t x51 = 906784245290767LLU;
static volatile int32_t x58 = INT32_MIN;
static int64_t x62 = INT64_MIN;
int8_t x65 = 6;
static int64_t x74 = INT64_MIN;
volatile int8_t x86 = INT8_MIN;
int8_t x92 = -1;
int64_t t24 = -42617054782299127LL;
static int16_t x101 = -575;
uint16_t x104 = 1U;
volatile int32_t t25 = 78;
static volatile int32_t x106 = -1;
int32_t t26 = -1;
volatile uint16_t x115 = UINT16_MAX;
uint8_t x119 = UINT8_MAX;
volatile uint32_t t31 = 707996941U;
static uint64_t x129 = 1947143698468LLU;
uint32_t x130 = UINT32_MAX;
static int32_t x133 = 170738;
static uint16_t x134 = 8U;
volatile uint32_t x140 = 208672U;
int64_t x150 = -1LL;
int64_t t37 = -36LL;
volatile uint64_t t38 = 7245009521829417961LLU;
int64_t t40 = 1451LL;
int64_t x171 = INT64_MAX;
int32_t x176 = INT32_MIN;
uint16_t x177 = 33U;
volatile int16_t x180 = -1;
uint32_t x183 = 7U;
uint32_t x194 = 426324U;
volatile int64_t t48 = 1053398523777LL;
static int16_t x201 = 5779;
int16_t x202 = -1;
static int16_t x203 = -99;
uint32_t x212 = UINT32_MAX;
int32_t x215 = -1;
static int16_t x219 = -1;
uint32_t t54 = 10U;
int32_t x223 = -81473;
static int16_t x225 = 29;
int64_t x228 = -1LL;
volatile uint64_t x239 = UINT64_MAX;
int64_t x242 = 1LL;
uint64_t x247 = 3006LLU;
volatile uint64_t t61 = 1192798391479308LLU;
uint8_t x253 = 1U;
int16_t x260 = INT16_MIN;
static uint64_t x262 = UINT64_MAX;
int64_t x267 = INT64_MAX;
int64_t t66 = -50353880597292478LL;
int8_t x269 = -1;
int8_t x271 = 1;
int32_t x272 = INT32_MAX;
volatile uint8_t x274 = 18U;
int8_t x277 = -1;
int16_t x278 = INT16_MAX;
static volatile uint64_t t69 = 25883766756783LLU;
int8_t x281 = -4;
int32_t t73 = -13610835;
static volatile int32_t x298 = -1;
uint16_t x302 = 27580U;
volatile int64_t t75 = 156005452LL;
int16_t x312 = -1;
int16_t x313 = -80;
int8_t x315 = INT8_MIN;
int32_t x323 = INT32_MAX;
static volatile uint32_t t79 = 31154157U;
static uint16_t x325 = 2U;
uint16_t x333 = 537U;
uint32_t x342 = 83U;
static int16_t x343 = INT16_MAX;
int8_t x348 = -1;
int64_t t85 = 1311LL;
uint64_t t89 = 113020602764LLU;
int64_t x369 = INT64_MIN;
int32_t x378 = INT32_MIN;
int32_t x381 = INT32_MIN;
volatile int64_t x386 = INT64_MAX;
uint16_t x393 = 191U;
static int8_t x398 = INT8_MIN;
static volatile int32_t t98 = 18793395;
uint8_t x401 = 2U;
volatile int64_t x409 = -1LL;
volatile int8_t x412 = INT8_MIN;
uint16_t x416 = 22010U;
int16_t x417 = INT16_MIN;
uint16_t x421 = UINT16_MAX;
uint8_t x427 = 1U;
volatile uint32_t x434 = 496U;
uint8_t x438 = 1U;
int64_t x443 = INT64_MIN;
volatile uint64_t t108 = 895345391135764LLU;
uint32_t x445 = 0U;
volatile uint32_t t109 = 2715U;
uint8_t x452 = 1U;
int64_t x457 = INT64_MIN;
int32_t x461 = INT32_MAX;
int8_t x470 = 8;
int8_t x473 = INT8_MIN;
int8_t x477 = 40;
int16_t x483 = INT16_MIN;
volatile int32_t t118 = 13;
static volatile int8_t x486 = INT8_MAX;
uint32_t x487 = UINT32_MAX;
volatile uint32_t t119 = 15U;
int32_t x501 = INT32_MAX;
int8_t x502 = 6;
static int16_t x506 = -1;
static int8_t x509 = INT8_MIN;
volatile int8_t x515 = 0;
static int64_t x526 = -253LL;
int64_t t130 = -4LL;
uint16_t x539 = UINT16_MAX;
static volatile int32_t x540 = INT32_MIN;
int32_t x542 = INT32_MIN;
int32_t x548 = INT32_MIN;
static volatile int8_t x552 = -1;
static uint64_t t135 = 4577973452450667383LLU;
int64_t t136 = 2LL;
int16_t x570 = 58;
int32_t x573 = -1472;
volatile int32_t x577 = -1;
uint32_t x580 = UINT32_MAX;
volatile int64_t t143 = 170815LL;
int8_t x585 = -6;
int16_t x590 = INT16_MIN;
volatile int64_t t145 = -26325527315935LL;
uint64_t t146 = 1335174725678710LLU;
uint32_t x609 = UINT32_MAX;
volatile int64_t x611 = 21302010867425LL;
volatile int64_t t150 = 69244370812611LL;
static volatile int8_t x614 = INT8_MAX;
int64_t x616 = INT64_MIN;
uint16_t x621 = 84U;
uint8_t x623 = UINT8_MAX;
uint8_t x625 = UINT8_MAX;
int8_t x629 = INT8_MIN;
volatile int16_t x630 = INT16_MIN;
int16_t x632 = -1;
volatile int64_t t155 = -41LL;
uint8_t x637 = UINT8_MAX;
volatile int16_t x641 = -1;
volatile uint64_t t158 = 600287462542LLU;
int16_t x646 = 1;
static int32_t x653 = 6400354;
int64_t x654 = -3LL;
static int8_t x658 = INT8_MIN;
uint64_t x659 = UINT64_MAX;
int32_t x662 = INT32_MIN;
volatile int32_t t163 = 6742;
int32_t t164 = -6315620;
int64_t x670 = INT64_MIN;
static int64_t x671 = INT64_MIN;
volatile uint64_t t166 = 262861283163LLU;
uint8_t x682 = UINT8_MAX;
uint64_t x688 = 2587282720048983LLU;
volatile uint64_t x693 = UINT64_MAX;
volatile uint32_t x698 = UINT32_MAX;
static int64_t t172 = 1719LL;
volatile uint8_t x706 = 57U;
uint64_t x712 = UINT64_MAX;
static volatile int16_t x721 = -1;
int64_t t177 = 21418LL;
volatile uint32_t x734 = UINT32_MAX;
volatile int8_t x737 = INT8_MIN;
volatile int64_t x738 = -937169658288LL;
volatile int32_t t184 = 1845;
int8_t x753 = INT8_MIN;
int64_t x754 = -159931381377135348LL;
static volatile int16_t x756 = 1;
int8_t x758 = INT8_MAX;
static uint32_t x762 = UINT32_MAX;
static volatile int8_t x764 = 4;
uint32_t x766 = 1965550102U;
uint16_t x777 = 1259U;
int32_t x779 = INT32_MAX;
int64_t x790 = -1LL;
int64_t x792 = -468977LL;
static volatile int64_t t194 = -24329LL;
int16_t x809 = -1;
uint16_t x810 = 890U;


void f0(void) {
    	uint64_t x1 = 1997085495065LLU;
	static int32_t x2 = -13;
	uint32_t x3 = 51635U;
	volatile uint64_t t0 = 535408921086808LLU;

    t0 = (((x1&x2)^x3)/x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MIN;
	int32_t x8 = -82;
	volatile int32_t t1 = -3873;

    t1 = (((x5&x6)^x7)/x8);

    if (t1 != 143183) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 107U;
	static int64_t x10 = -1260623046LL;
	volatile uint32_t x11 = 987367U;
	uint64_t x12 = 10LLU;
	uint64_t t2 = 46618195965946LLU;

    t2 = (((x9&x10)^x11)/x12);

    if (t2 != 98734LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 21097417U;
	uint8_t x15 = 24U;
	static int64_t x16 = INT64_MIN;
	int64_t t3 = -72868878620LL;

    t3 = (((x13&x14)^x15)/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 1U;
	volatile int32_t x18 = 1;
	int32_t x20 = -1;

    t4 = (((x17&x18)^x19)/x20);

    if (t4 != -126) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = 204834443U;
	volatile int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = -2897009LL;

    t5 = (((x21&x22)^x23)/x24);

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	static uint8_t x26 = 103U;
	uint16_t x27 = 94U;
	uint64_t x28 = 396055967542561LLU;

    t6 = (((x25&x26)^x27)/x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MAX;
	uint8_t x31 = 10U;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -1LL;

    t7 = (((x29&x30)^x31)/x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MAX;
	int64_t x34 = INT64_MIN;
	int8_t x36 = -3;
	static int64_t t8 = -161839576756636LL;

    t8 = (((x33&x34)^x35)/x36);

    if (t8 != 42LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	int64_t x39 = INT64_MIN;
	volatile int64_t t9 = 44387129018659271LL;

    t9 = (((x37&x38)^x39)/x40);

    if (t9 != -281483566841862LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 0;
	uint8_t x42 = UINT8_MAX;
	volatile int32_t t10 = 9317317;

    t10 = (((x41&x42)^x43)/x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -27;
	static int8_t x46 = -24;
	int16_t x47 = INT16_MAX;
	volatile int64_t t11 = -2035LL;

    t11 = (((x45&x46)^x47)/x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -1;
	int32_t x52 = -27;
	uint64_t t12 = 47730616LLU;

    t12 = (((x49&x50)^x51)/x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = -86;
	int8_t x54 = INT8_MIN;
	volatile uint16_t x55 = 299U;
	static volatile int8_t x56 = INT8_MIN;
	int32_t t13 = 167564892;

    t13 = (((x53&x54)^x55)/x56);

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -437913779989LL;
	int16_t x59 = -253;
	uint16_t x60 = 2686U;
	volatile int64_t t14 = -16955075909LL;

    t14 = (((x57&x58)^x59)/x60);

    if (t14 != 163100023LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	int32_t x63 = INT32_MIN;
	int64_t x64 = -29LL;
	volatile int64_t t15 = -27750503885484318LL;

    t15 = (((x61&x62)^x63)/x64);

    if (t15 != -318047311541630764LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x66 = 140U;
	int16_t x67 = -1;
	int16_t x68 = -10;
	volatile int32_t t16 = 1;

    t16 = (((x65&x66)^x67)/x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 6;
	int64_t x70 = -9157012113LL;
	int8_t x71 = -1;
	volatile int16_t x72 = -1;
	volatile int64_t t17 = -19775197347101LL;

    t17 = (((x69&x70)^x71)/x72);

    if (t17 != 7LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x73 = UINT16_MAX;
	int64_t x75 = 134700946290LL;
	volatile int32_t x76 = INT32_MIN;
	int64_t t18 = -7927LL;

    t18 = (((x73&x74)^x75)/x76);

    if (t18 != -62LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	int32_t x78 = INT32_MIN;
	int16_t x79 = INT16_MIN;
	static volatile int8_t x80 = INT8_MIN;
	static int64_t t19 = -1090LL;

    t19 = (((x77&x78)^x79)/x80);

    if (t19 != -72057594037927680LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x81 = 12;
	static volatile int16_t x82 = 26;
	int64_t x83 = -1LL;
	int32_t x84 = 4308416;
	int64_t t20 = -149LL;

    t20 = (((x81&x82)^x83)/x84);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 4288U;
	uint64_t x87 = 0LLU;
	int16_t x88 = INT16_MAX;
	volatile uint64_t t21 = 546888012284221826LLU;

    t21 = (((x85&x86)^x87)/x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = UINT16_MAX;
	int16_t x90 = -1;
	uint32_t x91 = 9U;
	volatile uint32_t t22 = 8559378U;

    t22 = (((x89&x90)^x91)/x92);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = 247;
	uint16_t x94 = 348U;
	int64_t x95 = INT64_MIN;
	int8_t x96 = -1;
	volatile int64_t t23 = -120LL;

    t23 = (((x93&x94)^x95)/x96);

    if (t23 != 9223372036854775724LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 2LL;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = 90799861LL;
	volatile int16_t x100 = INT16_MAX;

    t24 = (((x97&x98)^x99)/x100);

    if (t24 != 2771LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = -1;
	volatile int16_t x103 = -34;

    t25 = (((x101&x102)^x103)/x104);

    if (t25 != 543) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = -1;
	int16_t x107 = INT16_MAX;
	int32_t x108 = INT32_MIN;

    t26 = (((x105&x106)^x107)/x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x109 = -1;
	uint32_t x110 = 429734U;
	uint64_t x111 = 740LLU;
	int64_t x112 = -1LL;
	volatile uint64_t t27 = 25737205975LLU;

    t27 = (((x109&x110)^x111)/x112);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int32_t x114 = INT32_MIN;
	int16_t x116 = -1;
	int32_t t28 = 0;

    t28 = (((x113&x114)^x115)/x116);

    if (t28 != 2147418113) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	int64_t x118 = 14447LL;
	int16_t x120 = INT16_MAX;
	int64_t t29 = -112358022863383380LL;

    t29 = (((x117&x118)^x119)/x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x121 = -85934250141537256LL;
	static volatile int64_t x122 = -6407221598LL;
	static uint8_t x123 = 56U;
	uint16_t x124 = UINT16_MAX;
	volatile int64_t t30 = -1LL;

    t30 = (((x121&x122)^x123)/x124);

    if (t30 != -1311272684529LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MIN;
	int8_t x127 = -1;
	uint32_t x128 = 88U;

    t31 = (((x125&x126)^x127)/x128);

    if (t31 != 372U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x131 = INT64_MIN;
	static uint32_t x132 = 1U;
	uint64_t t32 = 45975886657LLU;

    t32 = (((x129&x130)^x131)/x132);

    if (t32 != 9223372038378289188LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x135 = 198240U;
	int16_t x136 = -1;
	uint32_t t33 = 4761596U;

    t33 = (((x133&x134)^x135)/x136);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int32_t x139 = -1;
	uint32_t t34 = 1198U;

    t34 = (((x137&x138)^x139)/x140);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = UINT8_MAX;
	volatile int32_t x142 = INT32_MIN;
	static int64_t x143 = -1LL;
	volatile int16_t x144 = INT16_MAX;
	static int64_t t35 = 12441445LL;

    t35 = (((x141&x142)^x143)/x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -12413348LL;
	uint64_t x146 = 1929933LLU;
	int32_t x147 = INT32_MIN;
	int32_t x148 = INT32_MAX;
	uint64_t t36 = 15539349934160823LLU;

    t36 = (((x145&x146)^x147)/x148);

    if (t36 != 8589934595LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	static uint8_t x151 = 13U;
	uint32_t x152 = 1094987512U;

    t37 = (((x149&x150)^x151)/x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -8;
	uint8_t x154 = UINT8_MAX;
	volatile uint64_t x155 = 10821LLU;
	int8_t x156 = -1;

    t38 = (((x153&x154)^x155)/x156);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 19565726966LLU;
	uint16_t x158 = 2U;
	int8_t x159 = 1;
	volatile uint32_t x160 = 1635947115U;
	volatile uint64_t t39 = 552628714513633LLU;

    t39 = (((x157&x158)^x159)/x160);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	volatile int8_t x162 = 1;
	int64_t x163 = 2LL;
	uint32_t x164 = 17U;

    t40 = (((x161&x162)^x163)/x164);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 7U;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = -1;
	static uint64_t x168 = 2132LLU;
	static uint64_t t41 = 2853418159LLU;

    t41 = (((x165&x166)^x167)/x168);

    if (t41 != 8652318983916300LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -1LL;
	uint8_t x170 = 5U;
	int64_t x172 = 12555041LL;
	volatile int64_t t42 = -205599046LL;

    t42 = (((x169&x170)^x171)/x172);

    if (t42 != 734634959523LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	uint32_t x174 = UINT32_MAX;
	static int64_t x175 = -1LL;
	int64_t t43 = 82873560LL;

    t43 = (((x173&x174)^x175)/x176);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x178 = UINT8_MAX;
	uint32_t x179 = UINT32_MAX;
	uint32_t t44 = 1158U;

    t44 = (((x177&x178)^x179)/x180);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = -125;
	uint8_t x182 = 118U;
	volatile uint16_t x184 = 1U;
	uint32_t t45 = 11U;

    t45 = (((x181&x182)^x183)/x184);

    if (t45 != 5U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	int8_t x187 = -1;
	volatile uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = 678;

    t46 = (((x185&x186)^x187)/x188);

    if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x189 = 0U;
	int8_t x190 = 6;
	uint16_t x191 = 32U;
	int64_t x192 = -1LL;
	int64_t t47 = -5613603815LL;

    t47 = (((x189&x190)^x191)/x192);

    if (t47 != -32LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x193 = INT8_MIN;
	static int64_t x195 = -1LL;
	int16_t x196 = 3689;

    t48 = (((x193&x194)^x195)/x196);

    if (t48 != -115LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -1LL;
	static int16_t x198 = -869;
	int32_t x199 = -22074;
	int64_t x200 = -1LL;
	volatile int64_t t49 = -2539663945119663486LL;

    t49 = (((x197&x198)^x199)/x200);

    if (t49 != -21853LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x204 = UINT64_MAX;
	uint64_t t50 = 916703342524LLU;

    t50 = (((x201&x202)^x203)/x204);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int8_t x206 = -35;
	volatile int64_t x207 = 0LL;
	int8_t x208 = INT8_MIN;
	int64_t t51 = 182922870LL;

    t51 = (((x205&x206)^x207)/x208);

    if (t51 != 256LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -1;
	static int32_t x210 = 374656088;
	int16_t x211 = INT16_MIN;
	volatile uint32_t t52 = 30704603U;

    t52 = (((x209&x210)^x211)/x212);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x213 = 875U;
	uint32_t x214 = 563U;
	uint16_t x216 = UINT16_MAX;
	uint32_t t53 = 2U;

    t53 = (((x213&x214)^x215)/x216);

    if (t53 != 65536U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = UINT32_MAX;
	uint8_t x218 = UINT8_MAX;
	int16_t x220 = 746;

    t54 = (((x217&x218)^x219)/x220);

    if (t54 != 5757328U) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x221 = 1592U;
	int8_t x222 = -13;
	int16_t x224 = -1;
	uint32_t t55 = 1528U;

    t55 = (((x221&x222)^x223)/x224);

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x226 = INT32_MIN;
	int32_t x227 = INT32_MIN;
	volatile int64_t t56 = -1835596LL;

    t56 = (((x225&x226)^x227)/x228);

    if (t56 != 2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = INT8_MIN;
	uint64_t x230 = 631071LLU;
	static uint16_t x231 = 0U;
	volatile int16_t x232 = INT16_MAX;
	uint64_t t57 = 7846627573LLU;

    t57 = (((x229&x230)^x231)/x232);

    if (t57 != 19LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = UINT8_MAX;
	static int64_t x234 = 62585304933282LL;
	int16_t x235 = -510;
	int32_t x236 = 796901090;
	static int64_t t58 = 242114905523278288LL;

    t58 = (((x233&x234)^x235)/x236);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = -1;
	volatile int16_t x238 = INT16_MIN;
	static int32_t x240 = INT32_MIN;
	static uint64_t t59 = 19355122LLU;

    t59 = (((x237&x238)^x239)/x240);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x241 = 4050U;
	int16_t x243 = -2331;
	static uint16_t x244 = 980U;
	volatile int64_t t60 = -10140599680647170LL;

    t60 = (((x241&x242)^x243)/x244);

    if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = -1;
	int32_t x246 = INT32_MAX;
	int8_t x248 = -1;

    t61 = (((x245&x246)^x247)/x248);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int32_t x250 = -1;
	static uint64_t x251 = UINT64_MAX;
	int8_t x252 = 1;
	volatile uint64_t t62 = 0LLU;

    t62 = (((x249&x250)^x251)/x252);

    if (t62 != 127LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x254 = INT32_MIN;
	int8_t x255 = 1;
	static volatile uint32_t x256 = 6U;
	uint32_t t63 = 115326U;

    t63 = (((x253&x254)^x255)/x256);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = -1;
	int32_t x258 = -1;
	int64_t x259 = INT64_MAX;
	int64_t t64 = 2830LL;

    t64 = (((x257&x258)^x259)/x260);

    if (t64 != 281474976710656LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = INT16_MIN;
	volatile int64_t x263 = INT64_MIN;
	static uint64_t x264 = UINT64_MAX;
	volatile uint64_t t65 = 2204569787441299LLU;

    t65 = (((x261&x262)^x263)/x264);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x265 = INT16_MAX;
	static volatile int8_t x266 = INT8_MIN;
	int8_t x268 = INT8_MIN;

    t66 = (((x265&x266)^x267)/x268);

    if (t66 != -72057594037927680LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x270 = INT8_MIN;
	int32_t t67 = -92069;

    t67 = (((x269&x270)^x271)/x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x273 = 5529U;
	volatile uint8_t x275 = 1U;
	int16_t x276 = -1393;
	volatile uint32_t t68 = 26U;

    t68 = (((x273&x274)^x275)/x276);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x279 = 754634862LLU;
	volatile int32_t x280 = INT32_MIN;

    t69 = (((x277&x278)^x279)/x280);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x282 = INT32_MAX;
	volatile int32_t x283 = -517353;
	int8_t x284 = INT8_MAX;
	static volatile int32_t t70 = 5;

    t70 = (((x281&x282)^x283)/x284);

    if (t70 != -16905246) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 1847U;
	static uint32_t x286 = 44U;
	int32_t x287 = INT32_MAX;
	static uint64_t x288 = 801600LLU;
	volatile uint64_t t71 = 58181577LLU;

    t71 = (((x285&x286)^x287)/x288);

    if (t71 != 2678LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x289 = INT8_MAX;
	static volatile int16_t x290 = INT16_MIN;
	uint32_t x291 = UINT32_MAX;
	volatile int32_t x292 = INT32_MIN;
	static uint32_t t72 = 144178U;

    t72 = (((x289&x290)^x291)/x292);

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	uint8_t x294 = 14U;
	static int16_t x295 = INT16_MIN;
	static int8_t x296 = 1;

    t73 = (((x293&x294)^x295)/x296);

    if (t73 != -32754) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = UINT16_MAX;
	volatile int32_t x299 = 168778460;
	volatile int32_t x300 = INT32_MIN;
	int32_t t74 = -6417329;

    t74 = (((x297&x298)^x299)/x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 157U;
	int16_t x303 = INT16_MIN;
	volatile int64_t x304 = INT64_MIN;

    t75 = (((x301&x302)^x303)/x304);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MIN;
	uint32_t x311 = 52963834U;
	volatile uint32_t t76 = 9075U;

    t76 = (((x309&x310)^x311)/x312);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x314 = INT8_MIN;
	int16_t x316 = -1;
	int32_t t77 = -172031038;

    t77 = (((x313&x314)^x315)/x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x317 = 1U;
	static volatile uint16_t x318 = 17U;
	volatile int8_t x319 = INT8_MIN;
	static uint8_t x320 = UINT8_MAX;
	int32_t t78 = 15;

    t78 = (((x317&x318)^x319)/x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x321 = UINT32_MAX;
	int16_t x322 = INT16_MAX;
	static int32_t x324 = INT32_MAX;

    t79 = (((x321&x322)^x323)/x324);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x326 = 80451;
	volatile int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MAX;
	volatile int64_t t80 = 986586408064LL;

    t80 = (((x325&x326)^x327)/x328);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x329 = INT16_MAX;
	int64_t x330 = INT64_MAX;
	int16_t x331 = INT16_MIN;
	volatile int32_t x332 = -1;
	static volatile int64_t t81 = -129283915667LL;

    t81 = (((x329&x330)^x331)/x332);

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x334 = 59U;
	int32_t x335 = 20727;
	int32_t x336 = -1;
	int32_t t82 = -200922994;

    t82 = (((x333&x334)^x335)/x336);

    if (t82 != -20718) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x337 = 1;
	static uint16_t x338 = UINT16_MAX;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = 1U;
	int32_t t83 = -1185643;

    t83 = (((x337&x338)^x339)/x340);

    if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x341 = UINT32_MAX;
	uint32_t x344 = 130729U;
	uint32_t t84 = 46U;

    t84 = (((x341&x342)^x343)/x344);

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x345 = 46U;
	int32_t x346 = INT32_MIN;
	static int64_t x347 = -1LL;

    t85 = (((x345&x346)^x347)/x348);

    if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x349 = UINT16_MAX;
	static int16_t x350 = INT16_MAX;
	int16_t x351 = -3;
	volatile int8_t x352 = INT8_MIN;
	int32_t t86 = 1;

    t86 = (((x349&x350)^x351)/x352);

    if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x353 = INT64_MAX;
	volatile uint8_t x354 = 1U;
	int8_t x355 = 5;
	int16_t x356 = -154;
	volatile int64_t t87 = -17376272717554LL;

    t87 = (((x353&x354)^x355)/x356);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x357 = 13U;
	int32_t x358 = INT32_MIN;
	int8_t x359 = -1;
	int64_t x360 = INT64_MIN;
	volatile int64_t t88 = -2214317527572045LL;

    t88 = (((x357&x358)^x359)/x360);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x361 = INT8_MIN;
	static uint64_t x362 = 18996932656263937LLU;
	static int64_t x363 = INT64_MAX;
	int16_t x364 = INT16_MIN;

    t89 = (((x361&x362)^x363)/x364);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x365 = -25307LL;
	uint8_t x366 = 4U;
	static int32_t x367 = INT32_MAX;
	int8_t x368 = -3;
	volatile int64_t t90 = -170102191577330LL;

    t90 = (((x365&x366)^x367)/x368);

    if (t90 != -715827881LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MIN;
	int16_t x372 = -1;
	volatile int64_t t91 = 1LL;

    t91 = (((x369&x370)^x371)/x372);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x373 = -1;
	int16_t x374 = INT16_MAX;
	static uint64_t x375 = 56902227912LLU;
	int32_t x376 = -1;
	volatile uint64_t t92 = 20436856955184269LLU;

    t92 = (((x373&x374)^x375)/x376);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x377 = -1710443491215520002LL;
	int32_t x379 = INT32_MAX;
	uint16_t x380 = UINT16_MAX;
	int64_t t93 = -4023971829261193747LL;

    t93 = (((x377&x378)^x379)/x380);

    if (t93 != -26099694653191LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x382 = -4686342;
	int32_t x383 = -1;
	static int16_t x384 = INT16_MAX;
	static volatile int32_t t94 = -1244;

    t94 = (((x381&x382)^x383)/x384);

    if (t94 != 65538) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x385 = -1LL;
	int8_t x387 = INT8_MAX;
	uint16_t x388 = 7U;
	volatile int64_t t95 = -1635958LL;

    t95 = (((x385&x386)^x387)/x388);

    if (t95 != 1317624576693539382LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x389 = 37U;
	volatile uint8_t x390 = 97U;
	int8_t x391 = 23;
	int8_t x392 = 1;
	int32_t t96 = 54228430;

    t96 = (((x389&x390)^x391)/x392);

    if (t96 != 54) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	uint32_t x396 = UINT32_MAX;
	uint64_t t97 = 1141534428092173231LLU;

    t97 = (((x393&x394)^x395)/x396);

    if (t97 != 4294967296LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x397 = -1;
	int8_t x399 = INT8_MIN;
	volatile int16_t x400 = INT16_MIN;

    t98 = (((x397&x398)^x399)/x400);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x402 = 546LLU;
	int32_t x403 = INT32_MIN;
	int64_t x404 = INT64_MIN;
	uint64_t t99 = 26201776182LLU;

    t99 = (((x401&x402)^x403)/x404);

    if (t99 != 1LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x410 = INT32_MAX;
	volatile int8_t x411 = 6;
	int64_t t100 = -808060938835248LL;

    t100 = (((x409&x410)^x411)/x412);

    if (t100 != -16777215LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x413 = -1LL;
	int8_t x414 = INT8_MIN;
	volatile uint32_t x415 = 133477144U;
	volatile int64_t t101 = -16473665077LL;

    t101 = (((x413&x414)^x415)/x416);

    if (t101 != -6064LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x418 = -1;
	int8_t x419 = INT8_MIN;
	volatile uint8_t x420 = 6U;
	static int32_t t102 = 238114;

    t102 = (((x417&x418)^x419)/x420);

    if (t102 != 5440) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x422 = -1LL;
	int8_t x423 = 1;
	int16_t x424 = -469;
	volatile int64_t t103 = -837744486LL;

    t103 = (((x421&x422)^x423)/x424);

    if (t103 != -139LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x425 = 1241U;
	int64_t x426 = INT64_MIN;
	int64_t x428 = INT64_MAX;
	int64_t t104 = -258107732809404228LL;

    t104 = (((x425&x426)^x427)/x428);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x429 = -195618995350LL;
	uint64_t x430 = 408LLU;
	static int64_t x431 = 2163341454865285LL;
	int16_t x432 = -3;
	static volatile uint64_t t105 = 14501239LLU;

    t105 = (((x429&x430)^x431)/x432);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x433 = 9790U;
	uint8_t x435 = 23U;
	volatile int64_t x436 = 35257631683480324LL;
	int64_t t106 = -16382149837LL;

    t106 = (((x433&x434)^x435)/x436);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x437 = INT16_MIN;
	static int32_t x439 = INT32_MIN;
	int64_t x440 = INT64_MIN;
	static volatile int64_t t107 = 412800LL;

    t107 = (((x437&x438)^x439)/x440);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x441 = INT16_MAX;
	uint64_t x442 = UINT64_MAX;
	int16_t x444 = INT16_MIN;

    t108 = (((x441&x442)^x443)/x444);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x446 = INT16_MIN;
	int8_t x447 = 0;
	int32_t x448 = 48;

    t109 = (((x445&x446)^x447)/x448);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x449 = -1LL;
	uint32_t x450 = 796064274U;
	static int32_t x451 = INT32_MIN;
	volatile int64_t t110 = -29834517260LL;

    t110 = (((x449&x450)^x451)/x452);

    if (t110 != -1351419374LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x453 = 2006267235445979LL;
	uint16_t x454 = 641U;
	uint32_t x455 = 1U;
	int16_t x456 = INT16_MAX;
	int64_t t111 = -1453LL;

    t111 = (((x453&x454)^x455)/x456);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x458 = 1432LLU;
	int8_t x459 = INT8_MAX;
	int32_t x460 = INT32_MIN;
	volatile uint64_t t112 = 208601280LLU;

    t112 = (((x457&x458)^x459)/x460);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x462 = UINT8_MAX;
	int64_t x463 = INT64_MIN;
	uint16_t x464 = UINT16_MAX;
	int64_t t113 = 2886884875468062LL;

    t113 = (((x461&x462)^x463)/x464);

    if (t113 != -140739635871744LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x465 = 64U;
	uint64_t x466 = 13235LLU;
	uint16_t x467 = UINT16_MAX;
	static int64_t x468 = INT64_MIN;
	uint64_t t114 = 153536756LLU;

    t114 = (((x465&x466)^x467)/x468);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x469 = 6461U;
	int32_t x471 = INT32_MIN;
	volatile int8_t x472 = 2;
	uint32_t t115 = 2627U;

    t115 = (((x469&x470)^x471)/x472);

    if (t115 != 1073741828U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x474 = -296348924041LL;
	int16_t x475 = 91;
	int16_t x476 = INT16_MIN;
	static int64_t t116 = 833669793109LL;

    t116 = (((x473&x474)^x475)/x476);

    if (t116 != 9043851LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x478 = 17124692U;
	int16_t x479 = INT16_MIN;
	int8_t x480 = -13;
	volatile uint32_t t117 = 39298648U;

    t117 = (((x477&x478)^x479)/x480);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x481 = INT32_MIN;
	uint8_t x482 = 53U;
	int32_t x484 = 2487575;

    t118 = (((x481&x482)^x483)/x484);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x485 = INT16_MAX;
	int8_t x488 = -1;

    t119 = (((x485&x486)^x487)/x488);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x489 = -1LL;
	static uint16_t x490 = UINT16_MAX;
	int16_t x491 = INT16_MAX;
	uint32_t x492 = 28073U;
	volatile int64_t t120 = -22044LL;

    t120 = (((x489&x490)^x491)/x492);

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x493 = UINT8_MAX;
	volatile int8_t x494 = INT8_MAX;
	uint8_t x495 = 22U;
	volatile int8_t x496 = INT8_MIN;
	int32_t t121 = 1695663;

    t121 = (((x493&x494)^x495)/x496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x497 = 22397U;
	int64_t x498 = INT64_MIN;
	static int64_t x499 = -1LL;
	static int64_t x500 = INT64_MAX;
	int64_t t122 = -38490952082LL;

    t122 = (((x497&x498)^x499)/x500);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x503 = UINT32_MAX;
	volatile int8_t x504 = 41;
	uint32_t t123 = 15U;

    t123 = (((x501&x502)^x503)/x504);

    if (t123 != 104755299U) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint64_t x505 = UINT64_MAX;
	volatile int16_t x507 = INT16_MIN;
	int64_t x508 = 2983515004557539318LL;
	volatile uint64_t t124 = 114934447LLU;

    t124 = (((x505&x506)^x507)/x508);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x510 = 0;
	int8_t x511 = INT8_MAX;
	int32_t x512 = INT32_MIN;
	int32_t t125 = -42515647;

    t125 = (((x509&x510)^x511)/x512);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x513 = INT16_MAX;
	volatile uint64_t x514 = 227035041879588LLU;
	static uint8_t x516 = UINT8_MAX;
	volatile uint64_t t126 = 7LLU;

    t126 = (((x513&x514)^x515)/x516);

    if (t126 != 86LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x517 = INT8_MIN;
	static int64_t x518 = -1LL;
	int16_t x519 = 110;
	uint8_t x520 = 6U;
	int64_t t127 = -3214669LL;

    t127 = (((x517&x518)^x519)/x520);

    if (t127 != -3LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x521 = INT16_MAX;
	static uint16_t x522 = 26430U;
	volatile int32_t x523 = 267221;
	int8_t x524 = INT8_MIN;
	int32_t t128 = 3171040;

    t128 = (((x521&x522)^x523)/x524);

    if (t128 != -2281) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x525 = INT64_MAX;
	int64_t x527 = -140418800434433LL;
	int16_t x528 = INT16_MAX;
	static int64_t t129 = -3LL;

    t129 = (((x525&x526)^x527)/x528);

    if (t129 != -281479281534908LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x529 = INT32_MIN;
	int64_t x530 = -1LL;
	uint16_t x531 = 1U;
	volatile int32_t x532 = INT32_MIN;

    t130 = (((x529&x530)^x531)/x532);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x533 = INT8_MIN;
	uint64_t x534 = 108382125445800579LLU;
	volatile uint64_t x535 = 619552LLU;
	static volatile int64_t x536 = 3LL;
	static volatile uint64_t t131 = 1611701874365706LLU;

    t131 = (((x533&x534)^x535)/x536);

    if (t131 != 36127375148790325LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x537 = INT8_MIN;
	uint16_t x538 = 8U;
	int32_t t132 = 936944;

    t132 = (((x537&x538)^x539)/x540);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x541 = -1;
	static int16_t x543 = -1;
	int16_t x544 = -1;
	int32_t t133 = -1;

    t133 = (((x541&x542)^x543)/x544);

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x545 = INT64_MIN;
	uint64_t x546 = 5265LLU;
	int16_t x547 = 236;
	volatile uint64_t t134 = 1650701417LLU;

    t134 = (((x545&x546)^x547)/x548);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x549 = INT64_MIN;
	int32_t x550 = -1;
	uint64_t x551 = 1823LLU;

    t135 = (((x549&x550)^x551)/x552);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x553 = -1LL;
	int64_t x554 = -113984479514640LL;
	int64_t x555 = INT64_MAX;
	int8_t x556 = 2;

    t136 = (((x553&x554)^x555)/x556);

    if (t136 != -4611629026187630584LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x557 = UINT8_MAX;
	static int64_t x558 = -542237LL;
	uint32_t x559 = 42206270U;
	static int16_t x560 = -2231;
	static int64_t t137 = -533140657127478LL;

    t137 = (((x557&x558)^x559)/x560);

    if (t137 != -18918LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x561 = -9;
	uint16_t x562 = UINT16_MAX;
	static int16_t x563 = INT16_MAX;
	int16_t x564 = -33;
	volatile int32_t t138 = -25;

    t138 = (((x561&x562)^x563)/x564);

    if (t138 != -993) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x565 = 1705526U;
	uint64_t x566 = UINT64_MAX;
	uint64_t x567 = 338365705647944097LLU;
	uint8_t x568 = 11U;
	volatile uint64_t t139 = 1114128176LLU;

    t139 = (((x565&x566)^x567)/x568);

    if (t139 != 30760518695232037LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x569 = -1;
	int32_t x571 = -233;
	static int8_t x572 = -1;
	int32_t t140 = -245079;

    t140 = (((x569&x570)^x571)/x572);

    if (t140 != 211) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x574 = 1;
	volatile int32_t x575 = INT32_MIN;
	int32_t x576 = INT32_MAX;
	int32_t t141 = 3;

    t141 = (((x573&x574)^x575)/x576);

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x578 = 20LLU;
	static int64_t x579 = INT64_MIN;
	uint64_t t142 = 8568LLU;

    t142 = (((x577&x578)^x579)/x580);

    if (t142 != 2147483648LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x581 = INT64_MAX;
	int8_t x582 = -1;
	int8_t x583 = 0;
	uint16_t x584 = 161U;

    t143 = (((x581&x582)^x583)/x584);

    if (t143 != 57288025073632147LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x586 = UINT16_MAX;
	int8_t x587 = INT8_MIN;
	uint32_t x588 = 530941600U;
	static volatile uint32_t t144 = 343U;

    t144 = (((x585&x586)^x587)/x588);

    if (t144 != 8U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x589 = INT16_MIN;
	static int64_t x591 = INT64_MAX;
	int32_t x592 = 7;

    t145 = (((x589&x590)^x591)/x592);

    if (t145 != -1317624576693534720LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x593 = INT32_MIN;
	uint64_t x594 = 58562LLU;
	volatile int8_t x595 = INT8_MAX;
	volatile uint32_t x596 = UINT32_MAX;

    t146 = (((x593&x594)^x595)/x596);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile int64_t x598 = INT64_MAX;
	uint8_t x599 = 4U;
	int32_t x600 = INT32_MAX;
	int64_t t147 = 1453013325782LL;

    t147 = (((x597&x598)^x599)/x600);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x601 = INT16_MAX;
	uint8_t x602 = 51U;
	int32_t x603 = INT32_MAX;
	uint8_t x604 = 6U;
	volatile int32_t t148 = -72276601;

    t148 = (((x601&x602)^x603)/x604);

    if (t148 != 357913932) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x605 = -1;
	int8_t x606 = -1;
	static uint16_t x607 = UINT16_MAX;
	static volatile uint32_t x608 = UINT32_MAX;
	volatile uint32_t t149 = 15U;

    t149 = (((x605&x606)^x607)/x608);

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x610 = 999U;
	int64_t x612 = INT64_MAX;

    t150 = (((x609&x610)^x611)/x612);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x613 = -182358;
	int8_t x615 = INT8_MIN;
	int64_t t151 = -15655LL;

    t151 = (((x613&x614)^x615)/x616);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x617 = 15167U;
	int64_t x618 = INT64_MAX;
	volatile uint64_t x619 = 697486789143769660LLU;
	uint32_t x620 = UINT32_MAX;
	volatile uint64_t t152 = 326LLU;

    t152 = (((x617&x618)^x619)/x620);

    if (t152 != 162396298LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x622 = -1899;
	static int8_t x624 = INT8_MIN;
	int32_t t153 = 223;

    t153 = (((x621&x622)^x623)/x624);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x626 = -1;
	uint8_t x627 = 50U;
	int16_t x628 = -1;
	volatile int32_t t154 = 177452;

    t154 = (((x625&x626)^x627)/x628);

    if (t154 != -205) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x631 = -1LL;

    t155 = (((x629&x630)^x631)/x632);

    if (t155 != -32767LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x633 = UINT8_MAX;
	int64_t x634 = INT64_MIN;
	int16_t x635 = INT16_MAX;
	uint32_t x636 = UINT32_MAX;
	int64_t t156 = -13168LL;

    t156 = (((x633&x634)^x635)/x636);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x638 = 28652464699LL;
	volatile int8_t x639 = 1;
	int8_t x640 = 1;
	static int64_t t157 = -1517876LL;

    t157 = (((x637&x638)^x639)/x640);

    if (t157 != 58LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x642 = 15;
	uint64_t x643 = 11LLU;
	static int64_t x644 = 531485264319073438LL;

    t158 = (((x641&x642)^x643)/x644);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x645 = INT64_MAX;
	uint32_t x647 = UINT32_MAX;
	static volatile uint32_t x648 = 535552955U;
	volatile int64_t t159 = -38LL;

    t159 = (((x645&x646)^x647)/x648);

    if (t159 != 8LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x649 = 441LLU;
	volatile int8_t x650 = INT8_MIN;
	uint64_t x651 = 2165912144506573LLU;
	static uint64_t x652 = 10357657LLU;
	uint64_t t160 = 694660746938795LLU;

    t160 = (((x649&x650)^x651)/x652);

    if (t160 != 209112171LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x655 = INT8_MIN;
	uint16_t x656 = 5449U;
	volatile int64_t t161 = 37431441LL;

    t161 = (((x653&x654)^x655)/x656);

    if (t161 != -1174LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x657 = UINT32_MAX;
	volatile int16_t x660 = INT16_MIN;
	uint64_t t162 = 887525768204LLU;

    t162 = (((x657&x658)^x659)/x660);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x661 = INT32_MIN;
	uint16_t x663 = 1U;
	volatile uint16_t x664 = UINT16_MAX;

    t163 = (((x661&x662)^x663)/x664);

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x665 = INT32_MIN;
	int8_t x666 = 0;
	int32_t x667 = INT32_MIN;
	uint8_t x668 = 5U;

    t164 = (((x665&x666)^x667)/x668);

    if (t164 != -429496729) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x669 = 16692348U;
	volatile uint64_t x672 = 33606489LLU;
	volatile uint64_t t165 = 52020454844629213LLU;

    t165 = (((x669&x670)^x671)/x672);

    if (t165 != 274452116579LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x673 = -1545180861974LL;
	int8_t x674 = -51;
	int16_t x675 = INT16_MIN;
	volatile uint64_t x676 = 3136818324571227LLU;

    t166 = (((x673&x674)^x675)/x676);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x681 = INT32_MIN;
	int16_t x683 = -1;
	static volatile int8_t x684 = 1;
	volatile int32_t t167 = -1468;

    t167 = (((x681&x682)^x683)/x684);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x685 = 277266139765774LLU;
	uint64_t x686 = UINT64_MAX;
	int32_t x687 = INT32_MAX;
	volatile uint64_t t168 = 52801908924934LLU;

    t168 = (((x685&x686)^x687)/x688);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x689 = INT64_MAX;
	uint16_t x690 = 648U;
	uint64_t x691 = 19270592721LLU;
	volatile int64_t x692 = INT64_MIN;
	uint64_t t169 = 900173074LLU;

    t169 = (((x689&x690)^x691)/x692);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x694 = UINT16_MAX;
	uint32_t x695 = UINT32_MAX;
	uint16_t x696 = UINT16_MAX;
	uint64_t t170 = 161768794LLU;

    t170 = (((x693&x694)^x695)/x696);

    if (t170 != 65536LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MAX;
	volatile int8_t x699 = INT8_MIN;
	int64_t x700 = INT64_MIN;
	static int64_t t171 = -1LL;

    t171 = (((x697&x698)^x699)/x700);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x701 = 1;
	static int64_t x702 = -1001067510057908686LL;
	int32_t x703 = INT32_MIN;
	int64_t x704 = INT64_MIN;

    t172 = (((x701&x702)^x703)/x704);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x705 = 96447189;
	static volatile int16_t x707 = INT16_MIN;
	int8_t x708 = INT8_MAX;
	static volatile int32_t t173 = -224175;

    t173 = (((x705&x706)^x707)/x708);

    if (t173 != -257) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x709 = 1070609;
	static int32_t x710 = -148;
	int32_t x711 = INT32_MIN;
	volatile uint64_t t174 = 44770923732989856LLU;

    t174 = (((x709&x710)^x711)/x712);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x713 = 35U;
	uint64_t x714 = 5001673173995017586LLU;
	int64_t x715 = -1LL;
	static uint64_t x716 = 469445754173LLU;
	uint64_t t175 = 580LLU;

    t175 = (((x713&x714)^x715)/x716);

    if (t175 != 39294729LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x717 = INT16_MAX;
	int64_t x718 = INT64_MIN;
	uint8_t x719 = UINT8_MAX;
	int32_t x720 = -1;
	static volatile int64_t t176 = -2025845LL;

    t176 = (((x717&x718)^x719)/x720);

    if (t176 != -255LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x722 = INT64_MIN;
	int8_t x723 = 56;
	static int16_t x724 = 255;

    t177 = (((x721&x722)^x723)/x724);

    if (t177 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x725 = -39049;
	int16_t x726 = INT16_MIN;
	static int16_t x727 = -1;
	int16_t x728 = INT16_MIN;
	volatile int32_t t178 = 1676639;

    t178 = (((x725&x726)^x727)/x728);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x729 = 7834;
	volatile int64_t x730 = -137391001182212247LL;
	static int16_t x731 = 143;
	volatile int16_t x732 = -206;
	static volatile int64_t t179 = 3008362609522LL;

    t179 = (((x729&x730)^x731)/x732);

    if (t179 != -18LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x733 = UINT16_MAX;
	static uint64_t x735 = 1LLU;
	volatile int32_t x736 = INT32_MIN;
	uint64_t t180 = 43LLU;

    t180 = (((x733&x734)^x735)/x736);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x739 = 110612LL;
	volatile uint16_t x740 = UINT16_MAX;
	int64_t t181 = 384LL;

    t181 = (((x737&x738)^x739)/x740);

    if (t181 != -14300293LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x741 = 614839301U;
	volatile int64_t x742 = 10LL;
	volatile int8_t x743 = INT8_MAX;
	static uint64_t x744 = 5763LLU;
	uint64_t t182 = 1634461111292863LLU;

    t182 = (((x741&x742)^x743)/x744);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x745 = 585841823255LL;
	uint32_t x746 = UINT32_MAX;
	int8_t x747 = INT8_MIN;
	int16_t x748 = -1;
	int64_t t183 = 101LL;

    t183 = (((x745&x746)^x747)/x748);

    if (t183 != 1726271081LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x749 = UINT8_MAX;
	uint16_t x750 = UINT16_MAX;
	int16_t x751 = INT16_MIN;
	static volatile int8_t x752 = 3;

    t184 = (((x749&x750)^x751)/x752);

    if (t184 != -10837) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x755 = -1;
	static volatile int64_t t185 = 235LL;

    t185 = (((x753&x754)^x755)/x756);

    if (t185 != 159931381377135359LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x757 = INT64_MIN;
	int32_t x759 = -165845;
	uint64_t x760 = 26LLU;
	static volatile uint64_t t186 = 109822LLU;

    t186 = (((x757&x758)^x759)/x760);

    if (t186 != 709490156681130221LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x761 = 94;
	static uint64_t x763 = UINT64_MAX;
	static volatile uint64_t t187 = 4251799241222LLU;

    t187 = (((x761&x762)^x763)/x764);

    if (t187 != 4611686018427387880LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x765 = INT16_MAX;
	int16_t x767 = -12;
	uint16_t x768 = UINT16_MAX;
	volatile uint32_t t188 = 5U;

    t188 = (((x765&x766)^x767)/x768);

    if (t188 != 65536U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x769 = 3357082;
	int8_t x770 = -1;
	int16_t x771 = INT16_MIN;
	uint8_t x772 = 1U;
	static volatile int32_t t189 = 0;

    t189 = (((x769&x770)^x771)/x772);

    if (t189 != -3360358) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x773 = INT16_MIN;
	volatile uint8_t x774 = 12U;
	uint32_t x775 = UINT32_MAX;
	static int8_t x776 = INT8_MIN;
	volatile uint32_t t190 = 904508U;

    t190 = (((x773&x774)^x775)/x776);

    if (t190 != 1U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x778 = INT32_MIN;
	uint32_t x780 = 195309468U;
	uint32_t t191 = 60402155U;

    t191 = (((x777&x778)^x779)/x780);

    if (t191 != 10U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x781 = -1;
	int64_t x782 = INT64_MIN;
	uint64_t x783 = UINT64_MAX;
	int8_t x784 = INT8_MAX;
	volatile uint64_t t192 = 371LLU;

    t192 = (((x781&x782)^x783)/x784);

    if (t192 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x785 = 22070938730LLU;
	volatile int16_t x786 = INT16_MIN;
	uint8_t x787 = UINT8_MAX;
	static uint16_t x788 = 14961U;
	uint64_t t193 = 239232426184LLU;

    t193 = (((x785&x786)^x787)/x788);

    if (t193 != 1475230LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x789 = INT32_MAX;
	volatile int64_t x791 = INT64_MIN;

    t194 = (((x789&x790)^x791)/x792);

    if (t194 != 19667002933421LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x793 = INT16_MAX;
	uint64_t x794 = UINT64_MAX;
	uint16_t x795 = 21099U;
	int8_t x796 = INT8_MAX;
	uint64_t t195 = 1LLU;

    t195 = (((x793&x794)^x795)/x796);

    if (t195 != 91LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x797 = 220554;
	int8_t x798 = INT8_MIN;
	volatile uint64_t x799 = UINT64_MAX;
	uint8_t x800 = 97U;
	static volatile uint64_t t196 = 91561883LLU;

    t196 = (((x797&x798)^x799)/x800);

    if (t196 != 190172619316591041LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x801 = -1;
	volatile int8_t x802 = 0;
	int16_t x803 = 198;
	int8_t x804 = 12;
	int32_t t197 = 3384811;

    t197 = (((x801&x802)^x803)/x804);

    if (t197 != 16) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x805 = INT32_MIN;
	static uint16_t x806 = 475U;
	uint16_t x807 = 1007U;
	int64_t x808 = INT64_MIN;
	int64_t t198 = 82LL;

    t198 = (((x805&x806)^x807)/x808);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x811 = 13;
	int64_t x812 = -438549778166LL;
	int64_t t199 = -112716548LL;

    t199 = (((x809&x810)^x811)/x812);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

