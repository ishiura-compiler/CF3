
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

int16_t x3 = INT16_MIN;
int8_t x16 = INT8_MIN;
int64_t t3 = -653613LL;
uint8_t x18 = 23U;
int64_t x20 = INT64_MIN;
static volatile int64_t x27 = -1LL;
int8_t x28 = INT8_MAX;
volatile int64_t t6 = 894707076503290664LL;
uint8_t x30 = 9U;
uint8_t x31 = UINT8_MAX;
volatile int64_t x35 = -1LL;
int64_t t8 = 127942607381532866LL;
int32_t x37 = INT32_MIN;
static volatile int8_t x42 = -1;
uint64_t t11 = 136210LLU;
static int64_t x49 = INT64_MAX;
static volatile int64_t t12 = 112639524LL;
int64_t t14 = 15347010LL;
int64_t x75 = 336917LL;
int8_t x76 = INT8_MIN;
uint16_t x84 = 1373U;
int32_t x87 = INT32_MAX;
int64_t x98 = INT64_MAX;
int16_t x103 = INT16_MIN;
uint16_t x108 = 22U;
int32_t x109 = -1;
int8_t x110 = INT8_MAX;
uint16_t x111 = 0U;
volatile uint32_t t23 = 583435U;
volatile int32_t x135 = INT32_MAX;
int16_t x138 = -2;
int32_t x144 = INT32_MAX;
int64_t x145 = 1334838061223LL;
static uint32_t x147 = UINT32_MAX;
uint64_t t31 = 100237623319245337LLU;
uint32_t x157 = 522923U;
int16_t x160 = INT16_MAX;
int64_t t34 = 245582557LL;
static int16_t x163 = INT16_MIN;
int32_t x174 = -427;
int64_t x175 = INT64_MIN;
int32_t t41 = -1541528;
uint64_t x203 = 26LLU;
int8_t x209 = -9;
uint64_t t46 = 126149552133028LLU;
int64_t x221 = INT64_MIN;
volatile int64_t t47 = INT64_MIN;
uint8_t x238 = 7U;
int16_t x249 = INT16_MAX;
volatile int64_t x250 = INT64_MIN;
int8_t x251 = INT8_MAX;
static volatile uint8_t x255 = UINT8_MAX;
volatile uint64_t t53 = 3244LLU;
static volatile int8_t x276 = INT8_MAX;
static uint64_t x280 = UINT64_MAX;
int8_t x281 = -61;
uint8_t x284 = 80U;
volatile uint32_t t60 = 22044U;
static volatile int64_t x290 = INT64_MIN;
int32_t x294 = INT32_MIN;
static uint32_t x296 = 14784U;
uint32_t x313 = UINT32_MAX;
volatile int8_t x317 = 0;
volatile int32_t t67 = -107646;
uint8_t x333 = 1U;
uint8_t x342 = 21U;
static int32_t x348 = 29;
uint16_t x350 = 7898U;
static int64_t x362 = -1LL;
int16_t x364 = -1;
static uint64_t x365 = 342701381LLU;
volatile int16_t x366 = -20;
uint32_t x368 = 46U;
uint32_t x374 = 14U;
uint16_t x378 = UINT16_MAX;
int64_t t81 = 653595LL;
static int32_t x393 = INT32_MAX;
uint8_t x400 = UINT8_MAX;
int16_t x402 = -117;
int8_t x408 = 0;
volatile uint64_t t85 = 749549035014062LLU;
static uint16_t x414 = UINT16_MAX;
volatile uint32_t x419 = 1007631U;
uint32_t t88 = 1059952874U;
uint16_t x425 = UINT16_MAX;
int64_t x428 = -1LL;
static uint64_t x431 = UINT64_MAX;
static int32_t t92 = 507290;
uint16_t x438 = 997U;
int8_t x439 = INT8_MIN;
volatile int32_t x440 = -1;
int64_t x442 = 8018730LL;
uint64_t x444 = UINT64_MAX;
uint64_t t94 = 6LLU;
uint8_t x449 = 27U;
int16_t x453 = -5;
volatile uint64_t x458 = UINT64_MAX;
int16_t x459 = -1;
static uint32_t t104 = 15731210U;
static uint32_t t105 = 23U;
uint8_t x495 = 14U;
int64_t t107 = -3646932433796LL;
int16_t x500 = -1;
static int16_t x511 = INT16_MAX;
int8_t x514 = 0;
int32_t t112 = -134609826;
volatile int64_t t113 = 681242640552744LL;
static volatile uint8_t x530 = 0U;
int64_t t114 = -466056421502LL;
volatile uint64_t x534 = 65645930031404LLU;
int16_t x545 = INT16_MIN;
int16_t x552 = INT16_MAX;
int8_t x556 = INT8_MAX;
static int8_t x561 = -15;
int64_t x575 = -1LL;
volatile int64_t t123 = 312LL;
static int8_t x589 = INT8_MIN;
uint32_t x594 = UINT32_MAX;
int32_t x598 = INT32_MAX;
int8_t x603 = -1;
uint16_t x608 = 2U;
volatile int64_t t131 = -11263LL;
int16_t x629 = INT16_MAX;
uint64_t x646 = 947129282985941050LLU;
uint64_t x652 = 4140LLU;
int32_t x655 = -1;
int32_t x668 = -1;
volatile int32_t x669 = -1;
int16_t x673 = INT16_MAX;
volatile int8_t x674 = -3;
volatile int64_t t145 = -481076460LL;
static int16_t x679 = INT16_MIN;
int64_t x689 = 3632349867LL;
static int16_t x695 = INT16_MIN;
static int64_t t149 = INT64_MIN;
static int8_t x700 = 1;
static volatile int64_t x711 = -24903781672LL;
int16_t x713 = 3;
uint16_t x714 = UINT16_MAX;
int8_t x720 = -1;
int8_t x721 = INT8_MIN;
int16_t x744 = INT16_MIN;
uint64_t x748 = 69493297830105LLU;
int8_t x753 = INT8_MIN;
int16_t x755 = INT16_MIN;
uint64_t x762 = 6849376198LLU;
uint8_t x764 = 0U;
int16_t x774 = -5130;
int16_t x779 = 15297;
volatile int8_t x780 = INT8_MIN;
volatile uint64_t t167 = 3LLU;
uint8_t x783 = 6U;
volatile int64_t t168 = 3727331240LL;
volatile uint64_t x792 = UINT64_MAX;
volatile uint64_t t169 = 3183355702172311LLU;
static uint16_t x797 = UINT16_MAX;
int32_t t170 = 54717;
uint8_t x801 = 99U;
int64_t x803 = -1LL;
int64_t t172 = 61279496801LL;
int64_t x813 = INT64_MIN;
volatile int32_t x814 = INT32_MAX;
uint64_t x819 = 334813191228LLU;
int32_t x822 = INT32_MAX;
static uint32_t x824 = 7731748U;
int64_t x829 = 5495896408228754LL;
volatile int8_t x833 = INT8_MIN;
static uint64_t t179 = 3704613053263134LLU;
uint8_t x839 = UINT8_MAX;
int32_t x845 = 793082;
int64_t t182 = -3651302437LL;
int64_t x851 = INT64_MAX;
int64_t t183 = -41275192LL;
int64_t x874 = -1LL;
volatile int64_t x875 = INT64_MAX;
volatile uint64_t t185 = 56LLU;
static int64_t t188 = -8790183333729LL;
volatile uint32_t x893 = UINT32_MAX;
uint32_t t189 = 3187U;
int32_t x911 = -1;
volatile int8_t x912 = INT8_MIN;
volatile int32_t t191 = -11149;
static volatile int64_t t194 = -502LL;
int16_t x925 = INT16_MAX;
int32_t x931 = INT32_MIN;
int16_t x941 = -1;
volatile uint32_t x944 = 1867653899U;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static uint64_t x2 = UINT64_MAX;
	volatile int32_t x4 = 10461378;
	uint64_t t0 = 328475493LLU;

    t0 = ((x1+x2)&(x3&x4));

    if (t0 != 10420224LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MAX;
	int32_t x7 = INT32_MAX;
	static uint16_t x8 = 203U;
	int32_t t1 = -66841536;

    t1 = ((x5+x6)&(x7&x8));

    if (t1 != 203) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MAX;
	int32_t x11 = INT32_MIN;
	static uint8_t x12 = 5U;
	int32_t t2 = 5508;

    t2 = ((x9+x10)&(x11&x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = 55LL;

    t3 = ((x13+x14)&(x15&x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 50;
	int64_t x19 = -1071094000207424LL;
	volatile int64_t t4 = 1616LL;

    t4 = ((x17+x18)&(x19&x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	volatile uint8_t x22 = 1U;
	int64_t x23 = INT64_MIN;
	volatile int8_t x24 = INT8_MAX;
	int64_t t5 = -7760492LL;

    t5 = ((x21+x22)&(x23&x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MIN;
	volatile uint16_t x26 = UINT16_MAX;

    t6 = ((x25+x26)&(x27&x28));

    if (t6 != 127LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	uint32_t x32 = UINT32_MAX;
	static uint32_t t7 = 170U;

    t7 = ((x29+x30)&(x31&x32));

    if (t7 != 8U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = 173132650636531847LL;
	int8_t x34 = 7;
	int8_t x36 = -1;

    t8 = ((x33+x34)&(x35&x36));

    if (t8 != 173132650636531854LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x38 = 1738LLU;
	int16_t x39 = INT16_MAX;
	volatile uint64_t x40 = 16597296089LLU;
	static volatile uint64_t t9 = 148577163397483LLU;

    t9 = ((x37+x38)&(x39&x40));

    if (t9 != 712LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x41 = UINT64_MAX;
	uint32_t x43 = UINT32_MAX;
	int16_t x44 = INT16_MIN;
	uint64_t t10 = 55398931600LLU;

    t10 = ((x41+x42)&(x43&x44));

    if (t10 != 4294934528LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x45 = INT32_MIN;
	volatile uint64_t x46 = 66644127192736560LLU;
	int64_t x47 = -1LL;
	volatile int16_t x48 = INT16_MAX;

    t11 = ((x45+x46)&(x47&x48));

    if (t11 != 25392LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = -90545254316420455LL;
	int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MIN;

    t12 = ((x49+x50)&(x51&x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x61 = UINT64_MAX;
	int8_t x62 = INT8_MIN;
	uint64_t x63 = UINT64_MAX;
	volatile uint32_t x64 = 32614U;
	uint64_t t13 = 18426106976578LLU;

    t13 = ((x61+x62)&(x63&x64));

    if (t13 != 32614LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = INT32_MIN;
	volatile uint16_t x66 = UINT16_MAX;
	static volatile int8_t x67 = INT8_MAX;
	static int64_t x68 = -1LL;

    t14 = ((x65+x66)&(x67&x68));

    if (t14 != 127LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x69 = INT32_MAX;
	int32_t x70 = INT32_MIN;
	int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MAX;
	volatile int32_t t15 = -4764433;

    t15 = ((x69+x70)&(x71&x72));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x73 = 1U;
	static uint8_t x74 = UINT8_MAX;
	volatile int64_t t16 = -192771383769718LL;

    t16 = ((x73+x74)&(x75&x76));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x81 = 8U;
	int16_t x82 = INT16_MIN;
	uint32_t x83 = 82048511U;
	volatile uint32_t t17 = 1U;

    t17 = ((x81+x82)&(x83&x84));

    if (t17 != 8U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x85 = 954U;
	int32_t x86 = INT32_MIN;
	int8_t x88 = INT8_MAX;
	static volatile uint32_t t18 = 0U;

    t18 = ((x85+x86)&(x87&x88));

    if (t18 != 58U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x93 = -182358637;
	static uint64_t x94 = 462225794320LLU;
	static int16_t x95 = -12;
	volatile int8_t x96 = -1;
	volatile uint64_t t19 = 121LLU;

    t19 = ((x93+x94)&(x95&x96));

    if (t19 != 462043435680LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x97 = INT16_MIN;
	static volatile uint32_t x99 = UINT32_MAX;
	uint32_t x100 = 2077066476U;
	int64_t t20 = -124997344748364LL;

    t20 = ((x97+x98)&(x99&x100));

    if (t20 != 2077033708LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x101 = 341;
	volatile uint32_t x102 = 26849843U;
	int8_t x104 = INT8_MIN;
	volatile uint32_t t21 = 1051222U;

    t21 = ((x101+x102)&(x103&x104));

    if (t21 != 26836992U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x105 = -2315066146LL;
	int32_t x106 = 13;
	uint16_t x107 = UINT16_MAX;
	volatile int64_t t22 = -5645519437LL;

    t22 = ((x105+x106)&(x107&x108));

    if (t22 != 2LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x112 = 4930766U;

    t23 = ((x109+x110)&(x111&x112));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x113 = INT8_MIN;
	int16_t x114 = -1;
	int8_t x115 = 4;
	static volatile int8_t x116 = INT8_MAX;
	static volatile int32_t t24 = -1799;

    t24 = ((x113+x114)&(x115&x116));

    if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x117 = -136;
	int32_t x118 = -44706030;
	static uint32_t x119 = UINT32_MAX;
	int8_t x120 = -26;
	static uint32_t t25 = 0U;

    t25 = ((x117+x118)&(x119&x120));

    if (t25 != 4250261122U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x121 = -1;
	static int32_t x122 = -1;
	int64_t x123 = INT64_MIN;
	uint32_t x124 = 428742U;
	volatile int64_t t26 = 11916084LL;

    t26 = ((x121+x122)&(x123&x124));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x125 = INT16_MIN;
	volatile int32_t x126 = 38643;
	int64_t x127 = -98628537LL;
	static int8_t x128 = INT8_MAX;
	volatile int64_t t27 = 89LL;

    t27 = ((x125+x126)&(x127&x128));

    if (t27 != 67LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x133 = -1;
	int16_t x134 = INT16_MAX;
	uint32_t x136 = 13U;
	static volatile uint32_t t28 = 5U;

    t28 = ((x133+x134)&(x135&x136));

    if (t28 != 12U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x137 = -1;
	volatile int32_t x139 = -5123;
	uint64_t x140 = 59757LLU;
	uint64_t t29 = 7996886602915922LLU;

    t29 = ((x137+x138)&(x139&x140));

    if (t29 != 59757LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x141 = -1;
	int16_t x142 = INT16_MAX;
	static int16_t x143 = INT16_MIN;
	static int32_t t30 = -496968;

    t30 = ((x141+x142)&(x143&x144));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x146 = UINT64_MAX;
	int32_t x148 = INT32_MIN;

    t31 = ((x145+x146)&(x147&x148));

    if (t31 != 2147483648LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x149 = UINT64_MAX;
	uint32_t x150 = 16356U;
	uint16_t x151 = UINT16_MAX;
	uint32_t x152 = UINT32_MAX;
	uint64_t t32 = 165966907990845240LLU;

    t32 = ((x149+x150)&(x151&x152));

    if (t32 != 16355LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x153 = -1;
	int16_t x154 = -8;
	uint64_t x155 = 5292483LLU;
	int64_t x156 = INT64_MAX;
	static uint64_t t33 = 6589LLU;

    t33 = ((x153+x154)&(x155&x156));

    if (t33 != 5292483LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x158 = 54U;
	int64_t x159 = -32343LL;

    t34 = ((x157+x158)&(x159&x160));

    if (t34 != 161LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x161 = -1;
	volatile int32_t x162 = INT32_MAX;
	volatile uint8_t x164 = UINT8_MAX;
	int32_t t35 = 29249;

    t35 = ((x161+x162)&(x163&x164));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x165 = INT16_MAX;
	uint8_t x166 = 6U;
	int32_t x167 = INT32_MAX;
	volatile int32_t x168 = INT32_MIN;
	volatile int32_t t36 = 95695035;

    t36 = ((x165+x166)&(x167&x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x169 = 7135958;
	uint16_t x170 = 15U;
	uint64_t x171 = UINT64_MAX;
	uint8_t x172 = UINT8_MAX;
	uint64_t t37 = 2901278515879318678LLU;

    t37 = ((x169+x170)&(x171&x172));

    if (t37 != 229LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x173 = -7707825271842409LL;
	uint16_t x176 = UINT16_MAX;
	volatile int64_t t38 = 2713451140LL;

    t38 = ((x173+x174)&(x175&x176));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x177 = INT64_MIN;
	static int16_t x178 = INT16_MAX;
	volatile int32_t x179 = -1;
	uint8_t x180 = UINT8_MAX;
	int64_t t39 = 10008450LL;

    t39 = ((x177+x178)&(x179&x180));

    if (t39 != 255LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x193 = INT8_MAX;
	static int8_t x194 = INT8_MIN;
	volatile int32_t x195 = INT32_MIN;
	static uint16_t x196 = 22840U;
	static volatile int32_t t40 = -38;

    t40 = ((x193+x194)&(x195&x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x197 = INT16_MIN;
	uint16_t x198 = 0U;
	int8_t x199 = -1;
	static volatile int32_t x200 = INT32_MAX;

    t41 = ((x197+x198)&(x199&x200));

    if (t41 != 2147450880) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x201 = INT32_MIN;
	int8_t x202 = 31;
	static int64_t x204 = INT64_MIN;
	volatile uint64_t t42 = 609LLU;

    t42 = ((x201+x202)&(x203&x204));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x205 = 734376922456318LLU;
	int32_t x206 = INT32_MAX;
	volatile uint64_t x207 = 2584524709119940LLU;
	int8_t x208 = -1;
	volatile uint64_t t43 = 26LLU;

    t43 = ((x205+x206)&(x207&x208));

    if (t43 != 11581397139652LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x210 = UINT64_MAX;
	int8_t x211 = INT8_MIN;
	static uint32_t x212 = UINT32_MAX;
	uint64_t t44 = 2LLU;

    t44 = ((x209+x210)&(x211&x212));

    if (t44 != 4294967168LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x213 = 6U;
	static int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MIN;
	static volatile int64_t x216 = INT64_MIN;
	volatile int64_t t45 = INT64_MIN;

    t45 = ((x213+x214)&(x215&x216));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x217 = 2U;
	int16_t x218 = INT16_MIN;
	int32_t x219 = -1;
	uint64_t x220 = 16182LLU;

    t46 = ((x217+x218)&(x219&x220));

    if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x222 = UINT16_MAX;
	int16_t x223 = -1;
	int32_t x224 = INT32_MIN;

    t47 = ((x221+x222)&(x223&x224));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x225 = 49U;
	uint8_t x226 = UINT8_MAX;
	uint8_t x227 = 65U;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t48 = 223937455;

    t48 = ((x225+x226)&(x227&x228));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x233 = UINT16_MAX;
	uint64_t x234 = 1LLU;
	volatile int16_t x235 = -4554;
	uint64_t x236 = 34507247097056LLU;
	static volatile uint64_t t49 = 6339210LLU;

    t49 = ((x233+x234)&(x235&x236));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x237 = 7U;
	int16_t x239 = -1;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t50 = 1729;

    t50 = ((x237+x238)&(x239&x240));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x245 = UINT8_MAX;
	uint16_t x246 = 101U;
	int16_t x247 = INT16_MIN;
	int32_t x248 = -1;
	static int32_t t51 = 1264;

    t51 = ((x245+x246)&(x247&x248));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x252 = 1350586879252LLU;
	volatile uint64_t t52 = 6674LLU;

    t52 = ((x249+x250)&(x251&x252));

    if (t52 != 20LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x253 = 2003U;
	uint64_t x254 = UINT64_MAX;
	uint8_t x256 = UINT8_MAX;

    t53 = ((x253+x254)&(x255&x256));

    if (t53 != 210LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x257 = INT32_MAX;
	int8_t x258 = INT8_MIN;
	volatile int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	static int64_t t54 = -50884159109LL;

    t54 = ((x257+x258)&(x259&x260));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x261 = 1814381;
	int16_t x262 = -18;
	int16_t x263 = INT16_MAX;
	static int8_t x264 = INT8_MIN;
	int32_t t55 = 647287;

    t55 = ((x261+x262)&(x263&x264));

    if (t55 != 12032) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x265 = INT32_MIN;
	uint32_t x266 = 106817632U;
	int8_t x267 = 0;
	volatile uint64_t x268 = 1587104LLU;
	static uint64_t t56 = 2729371461789665LLU;

    t56 = ((x265+x266)&(x267&x268));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x269 = 151038;
	volatile int32_t x270 = INT32_MIN;
	uint16_t x271 = 7804U;
	uint32_t x272 = 1262583U;
	static uint32_t t57 = 0U;

    t57 = ((x269+x270)&(x271&x272));

    if (t57 != 116U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x273 = -1LL;
	int64_t x274 = -1LL;
	static int8_t x275 = -1;
	int64_t t58 = 341LL;

    t58 = ((x273+x274)&(x275&x276));

    if (t58 != 126LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x277 = INT16_MAX;
	int64_t x278 = -7870LL;
	uint16_t x279 = 1242U;
	volatile uint64_t t59 = 1290LLU;

    t59 = ((x277+x278)&(x279&x280));

    if (t59 != 64LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint8_t x282 = UINT8_MAX;
	uint32_t x283 = 5U;

    t60 = ((x281+x282)&(x283&x284));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x289 = INT8_MAX;
	static volatile int16_t x291 = INT16_MIN;
	uint64_t x292 = UINT64_MAX;
	uint64_t t61 = 268099638LLU;

    t61 = ((x289+x290)&(x291&x292));

    if (t61 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x293 = INT8_MAX;
	static uint32_t x295 = 3U;
	static uint32_t t62 = 3U;

    t62 = ((x293+x294)&(x295&x296));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x297 = INT8_MAX;
	int32_t x298 = -1;
	static uint8_t x299 = 1U;
	uint16_t x300 = 1116U;
	int32_t t63 = -270576;

    t63 = ((x297+x298)&(x299&x300));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x301 = -1;
	uint8_t x302 = UINT8_MAX;
	static int32_t x303 = INT32_MAX;
	int32_t x304 = -1;
	volatile int32_t t64 = 7853026;

    t64 = ((x301+x302)&(x303&x304));

    if (t64 != 254) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x305 = -1LL;
	volatile uint32_t x306 = 243223U;
	int32_t x307 = INT32_MIN;
	uint32_t x308 = 106487093U;
	int64_t t65 = -76355622723LL;

    t65 = ((x305+x306)&(x307&x308));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x314 = 0;
	volatile uint64_t x315 = 237014893365725369LLU;
	uint16_t x316 = 6U;
	uint64_t t66 = 27929LLU;

    t66 = ((x313+x314)&(x315&x316));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x318 = 6;
	uint16_t x319 = 1861U;
	uint8_t x320 = 1U;

    t67 = ((x317+x318)&(x319&x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x329 = 46U;
	static int64_t x330 = -1LL;
	uint8_t x331 = UINT8_MAX;
	int64_t x332 = -1LL;
	volatile int64_t t68 = -394934271916984816LL;

    t68 = ((x329+x330)&(x331&x332));

    if (t68 != 45LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x334 = 3U;
	volatile int8_t x335 = -1;
	static int8_t x336 = -1;
	static int32_t t69 = 1;

    t69 = ((x333+x334)&(x335&x336));

    if (t69 != 4) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x341 = -1;
	int32_t x343 = INT32_MIN;
	uint8_t x344 = 9U;
	int32_t t70 = -21;

    t70 = ((x341+x342)&(x343&x344));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x345 = 69LLU;
	int16_t x346 = -13430;
	int32_t x347 = -97;
	static volatile uint64_t t71 = 495528414LLU;

    t71 = ((x345+x346)&(x347&x348));

    if (t71 != 13LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x349 = UINT64_MAX;
	uint8_t x351 = 6U;
	int8_t x352 = -1;
	volatile uint64_t t72 = 3332245037LLU;

    t72 = ((x349+x350)&(x351&x352));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x353 = UINT8_MAX;
	int64_t x354 = -1LL;
	volatile int32_t x355 = -1;
	volatile int8_t x356 = INT8_MIN;
	static volatile int64_t t73 = 3279235733LL;

    t73 = ((x353+x354)&(x355&x356));

    if (t73 != 128LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x361 = 4U;
	static int8_t x363 = INT8_MAX;
	int64_t t74 = -4217170216224732241LL;

    t74 = ((x361+x362)&(x363&x364));

    if (t74 != 3LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x367 = -1;
	uint64_t t75 = 19854167839LLU;

    t75 = ((x365+x366)&(x367&x368));

    if (t75 != 32LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x369 = 92280879U;
	int64_t x370 = 319687LL;
	uint8_t x371 = 45U;
	static uint32_t x372 = UINT32_MAX;
	static volatile int64_t t76 = 928481834870LL;

    t76 = ((x369+x370)&(x371&x372));

    if (t76 != 36LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x373 = 14526U;
	int32_t x375 = INT32_MIN;
	volatile int16_t x376 = INT16_MAX;
	uint32_t t77 = 1338567882U;

    t77 = ((x373+x374)&(x375&x376));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x377 = UINT32_MAX;
	uint16_t x379 = 787U;
	int16_t x380 = -1;
	volatile uint32_t t78 = 0U;

    t78 = ((x377+x378)&(x379&x380));

    if (t78 != 786U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x381 = INT8_MAX;
	int16_t x382 = INT16_MIN;
	uint64_t x383 = UINT64_MAX;
	int8_t x384 = -1;
	volatile uint64_t t79 = 197656LLU;

    t79 = ((x381+x382)&(x383&x384));

    if (t79 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x385 = UINT8_MAX;
	volatile int32_t x386 = -1;
	int64_t x387 = INT64_MIN;
	uint8_t x388 = 1U;
	static volatile int64_t t80 = 1LL;

    t80 = ((x385+x386)&(x387&x388));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x389 = INT64_MIN;
	uint8_t x390 = UINT8_MAX;
	volatile uint32_t x391 = UINT32_MAX;
	int32_t x392 = INT32_MIN;

    t81 = ((x389+x390)&(x391&x392));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x394 = UINT32_MAX;
	volatile int64_t x395 = -1LL;
	volatile int64_t x396 = -605867170697782LL;
	volatile int64_t t82 = -217586920287LL;

    t82 = ((x393+x394)&(x395&x396));

    if (t82 != 243428810LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x397 = UINT64_MAX;
	uint64_t x398 = 113717LLU;
	int32_t x399 = INT32_MIN;
	volatile uint64_t t83 = 4910029753469LLU;

    t83 = ((x397+x398)&(x399&x400));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x401 = 1012375977;
	int64_t x403 = 0LL;
	volatile int32_t x404 = -1;
	volatile int64_t t84 = 40LL;

    t84 = ((x401+x402)&(x403&x404));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x405 = 31LL;
	uint64_t x406 = UINT64_MAX;
	int16_t x407 = INT16_MIN;

    t85 = ((x405+x406)&(x407&x408));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x409 = 91U;
	int32_t x410 = -655;
	static uint16_t x411 = 37U;
	int8_t x412 = INT8_MIN;
	int32_t t86 = 10387;

    t86 = ((x409+x410)&(x411&x412));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x413 = INT8_MIN;
	volatile uint16_t x415 = 12950U;
	int32_t x416 = -269781833;
	int32_t t87 = 45671573;

    t87 = ((x413+x414)&(x415&x416));

    if (t87 != 12310) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x417 = 1;
	int32_t x418 = -1588;
	int8_t x420 = -1;

    t88 = ((x417+x418)&(x419&x420));

    if (t88 != 1007629U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x421 = -1;
	static uint16_t x422 = UINT16_MAX;
	uint16_t x423 = 1234U;
	uint64_t x424 = 1566LLU;
	volatile uint64_t t89 = 78905738902LLU;

    t89 = ((x421+x422)&(x423&x424));

    if (t89 != 1042LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x426 = INT16_MIN;
	int32_t x427 = INT32_MAX;
	int64_t t90 = 929278904643LL;

    t90 = ((x425+x426)&(x427&x428));

    if (t90 != 32767LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x429 = INT64_MAX;
	static int64_t x430 = INT64_MIN;
	int8_t x432 = -1;
	uint64_t t91 = UINT64_MAX;

    t91 = ((x429+x430)&(x431&x432));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x433 = 54745;
	int8_t x434 = -11;
	static int32_t x435 = INT32_MAX;
	int8_t x436 = INT8_MAX;

    t92 = ((x433+x434)&(x435&x436));

    if (t92 != 78) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x437 = 70326741U;
	uint32_t t93 = 3U;

    t93 = ((x437+x438)&(x439&x440));

    if (t93 != 70327680U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x441 = 11U;
	int16_t x443 = -41;

    t94 = ((x441+x442)&(x443&x444));

    if (t94 != 8018709LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x445 = 2U;
	volatile int16_t x446 = INT16_MAX;
	static uint32_t x447 = 1218726U;
	uint64_t x448 = UINT64_MAX;
	static uint64_t t95 = 399906654LLU;

    t95 = ((x445+x446)&(x447&x448));

    if (t95 != 32768LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x450 = INT8_MAX;
	static int32_t x451 = 143869914;
	int8_t x452 = INT8_MAX;
	int32_t t96 = 4;

    t96 = ((x449+x450)&(x451&x452));

    if (t96 != 26) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x454 = 6U;
	volatile int16_t x455 = INT16_MAX;
	volatile int8_t x456 = -14;
	volatile int32_t t97 = -15793;

    t97 = ((x453+x454)&(x455&x456));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x457 = UINT8_MAX;
	uint32_t x460 = 28U;
	uint64_t t98 = 4450924LLU;

    t98 = ((x457+x458)&(x459&x460));

    if (t98 != 28LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x461 = -1;
	int16_t x462 = -7;
	volatile int32_t x463 = INT32_MIN;
	int32_t x464 = 205439;
	int32_t t99 = 16198663;

    t99 = ((x461+x462)&(x463&x464));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x465 = 982U;
	int8_t x466 = 2;
	int32_t x467 = 233;
	int16_t x468 = -1;
	int32_t t100 = -189046;

    t100 = ((x465+x466)&(x467&x468));

    if (t100 != 200) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x469 = 5816U;
	static int32_t x470 = INT32_MAX;
	static volatile uint32_t x471 = 923U;
	int16_t x472 = -1;
	volatile uint32_t t101 = 2U;

    t101 = ((x469+x470)&(x471&x472));

    if (t101 != 659U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x473 = 15;
	int8_t x474 = 11;
	volatile int8_t x475 = INT8_MAX;
	uint8_t x476 = UINT8_MAX;
	volatile int32_t t102 = -60610;

    t102 = ((x473+x474)&(x475&x476));

    if (t102 != 26) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x477 = INT16_MIN;
	int16_t x478 = INT16_MIN;
	int64_t x479 = INT64_MIN;
	static uint64_t x480 = UINT64_MAX;
	uint64_t t103 = 31987611386943LLU;

    t103 = ((x477+x478)&(x479&x480));

    if (t103 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x481 = 3977;
	static uint8_t x482 = 2U;
	static volatile int32_t x483 = INT32_MIN;
	uint32_t x484 = 2502U;

    t104 = ((x481+x482)&(x483&x484));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x485 = INT32_MIN;
	uint32_t x486 = UINT32_MAX;
	int16_t x487 = INT16_MAX;
	volatile int16_t x488 = INT16_MIN;

    t105 = ((x485+x486)&(x487&x488));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x489 = 0U;
	static uint64_t x490 = UINT64_MAX;
	volatile int16_t x491 = 1;
	volatile int32_t x492 = -1;
	uint64_t t106 = 107943802LLU;

    t106 = ((x489+x490)&(x491&x492));

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x493 = 42LL;
	int16_t x494 = INT16_MAX;
	volatile int8_t x496 = INT8_MIN;

    t107 = ((x493+x494)&(x495&x496));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x497 = UINT32_MAX;
	int32_t x498 = INT32_MIN;
	volatile int16_t x499 = INT16_MAX;
	uint32_t t108 = 5171U;

    t108 = ((x497+x498)&(x499&x500));

    if (t108 != 32767U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x501 = 104;
	int64_t x502 = INT64_MIN;
	static int32_t x503 = 105;
	int32_t x504 = -1;
	volatile int64_t t109 = -3013531LL;

    t109 = ((x501+x502)&(x503&x504));

    if (t109 != 104LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x505 = 7U;
	volatile int8_t x506 = INT8_MIN;
	uint16_t x507 = 7U;
	int32_t x508 = INT32_MIN;
	volatile int32_t t110 = -1161417;

    t110 = ((x505+x506)&(x507&x508));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint64_t x509 = 90649997503877LLU;
	uint32_t x510 = UINT32_MAX;
	static int32_t x512 = INT32_MAX;
	volatile uint64_t t111 = 13488041LLU;

    t111 = ((x509+x510)&(x511&x512));

    if (t111 != 28036LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x513 = -1;
	static int8_t x515 = -1;
	uint8_t x516 = 32U;

    t112 = ((x513+x514)&(x515&x516));

    if (t112 != 32) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x521 = 3896;
	int64_t x522 = INT64_MIN;
	static int32_t x523 = -1581345;
	static volatile int64_t x524 = -28093379413695370LL;

    t113 = ((x521+x522)&(x523&x524));

    if (t113 != -9223372036854774768LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x529 = INT32_MIN;
	static uint32_t x531 = 142165U;
	int64_t x532 = -1LL;

    t114 = ((x529+x530)&(x531&x532));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x533 = INT64_MAX;
	static int32_t x535 = 1;
	uint32_t x536 = 8U;
	volatile uint64_t t115 = 124LLU;

    t115 = ((x533+x534)&(x535&x536));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x537 = 2U;
	int8_t x538 = 1;
	static int8_t x539 = 53;
	volatile int16_t x540 = 187;
	static volatile int32_t t116 = 71444957;

    t116 = ((x537+x538)&(x539&x540));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x541 = -210130613449510280LL;
	static int8_t x542 = -1;
	static volatile int32_t x543 = INT32_MIN;
	int32_t x544 = 0;
	volatile int64_t t117 = -3608954964587287143LL;

    t117 = ((x541+x542)&(x543&x544));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x546 = -1;
	int32_t x547 = -27;
	int32_t x548 = INT32_MIN;
	volatile int32_t t118 = INT32_MIN;

    t118 = ((x545+x546)&(x547&x548));

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x549 = UINT16_MAX;
	static uint32_t x550 = UINT32_MAX;
	volatile uint64_t x551 = UINT64_MAX;
	static volatile uint64_t t119 = 6786LLU;

    t119 = ((x549+x550)&(x551&x552));

    if (t119 != 32766LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x553 = 4U;
	int64_t x554 = INT64_MIN;
	int8_t x555 = INT8_MIN;
	static int64_t t120 = 28346273951147358LL;

    t120 = ((x553+x554)&(x555&x556));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x557 = INT32_MIN;
	uint64_t x558 = UINT64_MAX;
	int32_t x559 = INT32_MIN;
	volatile int16_t x560 = INT16_MIN;
	uint64_t t121 = 573067199LLU;

    t121 = ((x557+x558)&(x559&x560));

    if (t121 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x562 = INT16_MAX;
	int32_t x563 = INT32_MIN;
	static volatile int16_t x564 = 6313;
	int32_t t122 = -16204;

    t122 = ((x561+x562)&(x563&x564));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x573 = -1LL;
	volatile uint32_t x574 = 3169U;
	uint32_t x576 = 278U;

    t123 = ((x573+x574)&(x575&x576));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x577 = 52855LL;
	static int64_t x578 = INT64_MIN;
	uint64_t x579 = 4191154762595233651LLU;
	int32_t x580 = -70;
	uint64_t t124 = 3306757015LLU;

    t124 = ((x577+x578)&(x579&x580));

    if (t124 != 52786LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x581 = 4804867U;
	int8_t x582 = 0;
	int32_t x583 = INT32_MIN;
	int64_t x584 = -1LL;
	int64_t t125 = -40LL;

    t125 = ((x581+x582)&(x583&x584));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x585 = UINT64_MAX;
	int32_t x586 = INT32_MIN;
	int64_t x587 = INT64_MIN;
	volatile int64_t x588 = INT64_MIN;
	volatile uint64_t t126 = 1333027LLU;

    t126 = ((x585+x586)&(x587&x588));

    if (t126 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x590 = 15;
	static volatile int64_t x591 = INT64_MIN;
	static int64_t x592 = INT64_MAX;
	int64_t t127 = 7LL;

    t127 = ((x589+x590)&(x591&x592));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x593 = UINT16_MAX;
	int64_t x595 = INT64_MIN;
	static int64_t x596 = INT64_MAX;
	volatile int64_t t128 = -1127002355188768LL;

    t128 = ((x593+x594)&(x595&x596));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x597 = -1;
	uint32_t x599 = 2880552U;
	uint16_t x600 = 724U;
	volatile uint32_t t129 = 14363942U;

    t129 = ((x597+x598)&(x599&x600));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x601 = INT32_MIN;
	uint8_t x602 = UINT8_MAX;
	int32_t x604 = -1179;
	int32_t t130 = -153628;

    t130 = ((x601+x602)&(x603&x604));

    if (t130 != -2147483547) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x605 = -1;
	int32_t x606 = -1;
	int64_t x607 = INT64_MIN;

    t131 = ((x605+x606)&(x607&x608));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x609 = 2U;
	volatile int16_t x610 = 916;
	uint8_t x611 = 11U;
	static volatile int64_t x612 = -387416008633962LL;
	volatile int64_t t132 = -917302756LL;

    t132 = ((x609+x610)&(x611&x612));

    if (t132 != 2LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x617 = 134077126757LL;
	int64_t x618 = 3298887LL;
	int16_t x619 = -1;
	uint8_t x620 = 1U;
	volatile int64_t t133 = 2502044LL;

    t133 = ((x617+x618)&(x619&x620));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x621 = -1;
	uint16_t x622 = 116U;
	uint16_t x623 = 104U;
	uint32_t x624 = 384814U;
	uint32_t t134 = 379628U;

    t134 = ((x621+x622)&(x623&x624));

    if (t134 != 32U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x630 = INT64_MIN;
	int8_t x631 = -1;
	static int32_t x632 = -26;
	volatile int64_t t135 = 301LL;

    t135 = ((x629+x630)&(x631&x632));

    if (t135 != -9223372036854743066LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x633 = 727020698LLU;
	uint8_t x634 = UINT8_MAX;
	int32_t x635 = -1;
	int32_t x636 = -1;
	volatile uint64_t t136 = 199153981LLU;

    t136 = ((x633+x634)&(x635&x636));

    if (t136 != 727020953LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x637 = -1;
	uint32_t x638 = 1U;
	int64_t x639 = 6407102LL;
	int32_t x640 = INT32_MIN;
	volatile int64_t t137 = -2367929974867605730LL;

    t137 = ((x637+x638)&(x639&x640));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x641 = 1;
	int32_t x642 = INT32_MIN;
	int32_t x643 = -1;
	int32_t x644 = -143679;
	int32_t t138 = 150;

    t138 = ((x641+x642)&(x643&x644));

    if (t138 != -2147483647) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x645 = -2;
	int16_t x647 = INT16_MIN;
	static int16_t x648 = -1;
	uint64_t t139 = 20885LLU;

    t139 = ((x645+x646)&(x647&x648));

    if (t139 != 947129282985918464LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x649 = 9U;
	uint64_t x650 = UINT64_MAX;
	volatile int32_t x651 = 1519487;
	uint64_t t140 = 721742189741LLU;

    t140 = ((x649+x650)&(x651&x652));

    if (t140 != 8LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x653 = 3U;
	int8_t x654 = 1;
	int8_t x656 = -1;
	int32_t t141 = -181550412;

    t141 = ((x653+x654)&(x655&x656));

    if (t141 != 4) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x657 = UINT16_MAX;
	uint64_t x658 = 7566372810LLU;
	volatile uint32_t x659 = 1052051U;
	uint8_t x660 = 23U;
	uint64_t t142 = 974LLU;

    t142 = ((x657+x658)&(x659&x660));

    if (t142 != 1LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x665 = INT64_MIN;
	static volatile uint8_t x666 = UINT8_MAX;
	volatile uint16_t x667 = 2855U;
	static int64_t t143 = -5636563025950099LL;

    t143 = ((x665+x666)&(x667&x668));

    if (t143 != 39LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x670 = UINT16_MAX;
	int8_t x671 = 1;
	uint32_t x672 = 27U;
	volatile uint32_t t144 = 59103U;

    t144 = ((x669+x670)&(x671&x672));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x675 = UINT16_MAX;
	int64_t x676 = INT64_MIN;

    t145 = ((x673+x674)&(x675&x676));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x677 = 54217;
	int8_t x678 = INT8_MIN;
	int16_t x680 = INT16_MAX;
	static int32_t t146 = -31630825;

    t146 = ((x677+x678)&(x679&x680));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x681 = 11U;
	int64_t x682 = INT64_MIN;
	volatile int32_t x683 = 201;
	uint8_t x684 = 0U;
	int64_t t147 = -25177189516351LL;

    t147 = ((x681+x682)&(x683&x684));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x690 = INT8_MIN;
	uint64_t x691 = UINT64_MAX;
	int16_t x692 = INT16_MIN;
	volatile uint64_t t148 = 18LLU;

    t148 = ((x689+x690)&(x691&x692));

    if (t148 != 3632332800LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x693 = INT64_MIN;
	int32_t x694 = 0;
	volatile int32_t x696 = -1;

    t149 = ((x693+x694)&(x695&x696));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x697 = 614335011864465746LLU;
	int8_t x698 = -14;
	int8_t x699 = 0;
	volatile uint64_t t150 = 20303057469LLU;

    t150 = ((x697+x698)&(x699&x700));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x701 = INT32_MIN;
	uint16_t x702 = 59U;
	static int16_t x703 = INT16_MAX;
	int8_t x704 = INT8_MIN;
	int32_t t151 = 700;

    t151 = ((x701+x702)&(x703&x704));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x705 = INT16_MAX;
	uint8_t x706 = UINT8_MAX;
	static uint32_t x707 = 13645U;
	int32_t x708 = INT32_MAX;
	static uint32_t t152 = 322723U;

    t152 = ((x705+x706)&(x707&x708));

    if (t152 != 76U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x709 = -1;
	static volatile int8_t x710 = 1;
	int8_t x712 = 16;
	volatile int64_t t153 = 8223499LL;

    t153 = ((x709+x710)&(x711&x712));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x715 = 300U;
	int8_t x716 = 1;
	uint32_t t154 = 835898756U;

    t154 = ((x713+x714)&(x715&x716));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x717 = -1;
	uint32_t x718 = UINT32_MAX;
	uint8_t x719 = UINT8_MAX;
	static volatile uint32_t t155 = 17731U;

    t155 = ((x717+x718)&(x719&x720));

    if (t155 != 254U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x722 = 3LL;
	int64_t x723 = INT64_MAX;
	volatile uint32_t x724 = UINT32_MAX;
	int64_t t156 = 249671748168564LL;

    t156 = ((x721+x722)&(x723&x724));

    if (t156 != 4294967171LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x725 = 5581789415245496LLU;
	uint64_t x726 = UINT64_MAX;
	int16_t x727 = INT16_MIN;
	int16_t x728 = INT16_MIN;
	uint64_t t157 = 10890192871409471LLU;

    t157 = ((x725+x726)&(x727&x728));

    if (t157 != 5581789415243776LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x729 = 0;
	volatile int8_t x730 = INT8_MIN;
	int16_t x731 = -1;
	static int64_t x732 = INT64_MIN;
	volatile int64_t t158 = INT64_MIN;

    t158 = ((x729+x730)&(x731&x732));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x737 = UINT16_MAX;
	static uint16_t x738 = 850U;
	int32_t x739 = -849107241;
	static int8_t x740 = INT8_MIN;
	volatile int32_t t159 = 117935024;

    t159 = ((x737+x738)&(x739&x740));

    if (t159 != 66048) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x741 = -935185LL;
	volatile uint8_t x742 = 7U;
	int64_t x743 = INT64_MIN;
	volatile int64_t t160 = INT64_MIN;

    t160 = ((x741+x742)&(x743&x744));

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x745 = -7287;
	static volatile uint16_t x746 = 2U;
	uint32_t x747 = UINT32_MAX;
	uint64_t t161 = 211209901022925038LLU;

    t161 = ((x745+x746)&(x747&x748));

    if (t161 != 726974601LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x749 = -1;
	static int8_t x750 = INT8_MAX;
	volatile int64_t x751 = -202519459459228LL;
	int64_t x752 = INT64_MAX;
	int64_t t162 = -28984LL;

    t162 = ((x749+x750)&(x751&x752));

    if (t162 != 100LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x754 = INT8_MIN;
	volatile uint8_t x756 = UINT8_MAX;
	int32_t t163 = -11663;

    t163 = ((x753+x754)&(x755&x756));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x761 = INT8_MIN;
	static int8_t x763 = INT8_MIN;
	volatile uint64_t t164 = 6165992668LLU;

    t164 = ((x761+x762)&(x763&x764));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x769 = 4;
	static int8_t x770 = -13;
	int32_t x771 = -1;
	int32_t x772 = INT32_MIN;
	static int32_t t165 = INT32_MIN;

    t165 = ((x769+x770)&(x771&x772));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x773 = 11U;
	volatile uint16_t x775 = UINT16_MAX;
	static uint32_t x776 = 71U;
	uint32_t t166 = 102498541U;

    t166 = ((x773+x774)&(x775&x776));

    if (t166 != 1U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x777 = 2;
	uint64_t x778 = 1306491498434157009LLU;

    t167 = ((x777+x778)&(x779&x780));

    if (t167 != 6528LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x781 = -16358;
	int64_t x782 = 54247LL;
	volatile int16_t x784 = INT16_MAX;

    t168 = ((x781+x782)&(x783&x784));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x789 = UINT8_MAX;
	uint64_t x790 = 66468265LLU;
	static uint32_t x791 = 16687U;

    t169 = ((x789+x790)&(x791&x792));

    if (t169 != 40LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x798 = 0;
	volatile int16_t x799 = 1;
	int8_t x800 = INT8_MIN;

    t170 = ((x797+x798)&(x799&x800));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x802 = INT8_MIN;
	static int32_t x804 = INT32_MIN;
	volatile int64_t t171 = -3938068686891314LL;

    t171 = ((x801+x802)&(x803&x804));

    if (t171 != -2147483648LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x805 = -126788551420492LL;
	volatile int64_t x806 = INT64_MAX;
	static int32_t x807 = INT32_MAX;
	uint32_t x808 = UINT32_MAX;

    t172 = ((x805+x806)&(x807&x808));

    if (t172 != 1030641075LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x809 = INT16_MIN;
	volatile int8_t x810 = INT8_MAX;
	static int64_t x811 = INT64_MAX;
	uint32_t x812 = 9389U;
	volatile int64_t t173 = 3307LL;

    t173 = ((x809+x810)&(x811&x812));

    if (t173 != 45LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x815 = 1213U;
	volatile int64_t x816 = -563633736216LL;
	int64_t t174 = -438280760LL;

    t174 = ((x813+x814)&(x815&x816));

    if (t174 != 1192LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x817 = 1U;
	int32_t x818 = -25048174;
	int8_t x820 = INT8_MAX;
	volatile uint64_t t175 = 136LLU;

    t175 = ((x817+x818)&(x819&x820));

    if (t175 != 16LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x821 = UINT32_MAX;
	int32_t x823 = INT32_MIN;
	volatile uint32_t t176 = 1U;

    t176 = ((x821+x822)&(x823&x824));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x825 = 1546615978615197209LLU;
	int8_t x826 = -1;
	static int16_t x827 = -1;
	int16_t x828 = -2;
	volatile uint64_t t177 = 918LLU;

    t177 = ((x825+x826)&(x827&x828));

    if (t177 != 1546615978615197208LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x830 = 2306;
	int8_t x831 = INT8_MAX;
	static uint64_t x832 = 7877956199800408588LLU;
	volatile uint64_t t178 = 4172876LLU;

    t178 = ((x829+x830)&(x831&x832));

    if (t178 != 4LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x834 = INT8_MIN;
	static uint64_t x835 = 1LLU;
	int8_t x836 = INT8_MIN;

    t179 = ((x833+x834)&(x835&x836));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x837 = INT16_MAX;
	int8_t x838 = 3;
	uint64_t x840 = 18437032430172LLU;
	static uint64_t t180 = 1885673LLU;

    t180 = ((x837+x838)&(x839&x840));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x841 = 52U;
	static uint16_t x842 = UINT16_MAX;
	static int16_t x843 = INT16_MIN;
	uint16_t x844 = 22U;
	int32_t t181 = 1056198631;

    t181 = ((x841+x842)&(x843&x844));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x846 = 635;
	int64_t x847 = INT64_MIN;
	int8_t x848 = 5;

    t182 = ((x845+x846)&(x847&x848));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x849 = 7;
	int8_t x850 = 0;
	int16_t x852 = -1;

    t183 = ((x849+x850)&(x851&x852));

    if (t183 != 7LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x865 = 9;
	volatile int8_t x866 = INT8_MAX;
	volatile int8_t x867 = INT8_MIN;
	uint64_t x868 = 38011477962LLU;
	uint64_t t184 = 120664LLU;

    t184 = ((x865+x866)&(x867&x868));

    if (t184 != 128LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x873 = 3944910123394491LLU;
	int8_t x876 = INT8_MIN;

    t185 = ((x873+x874)&(x875&x876));

    if (t185 != 3944910123394432LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x881 = 0;
	uint32_t x882 = 2380U;
	int32_t x883 = INT32_MIN;
	int8_t x884 = INT8_MIN;
	static uint32_t t186 = 60U;

    t186 = ((x881+x882)&(x883&x884));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x885 = -1;
	volatile uint8_t x886 = 9U;
	int64_t x887 = INT64_MIN;
	uint16_t x888 = 30869U;
	int64_t t187 = 0LL;

    t187 = ((x885+x886)&(x887&x888));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x889 = INT64_MIN;
	volatile int64_t x890 = 2258202673489LL;
	static int32_t x891 = INT32_MIN;
	static uint16_t x892 = 1U;

    t188 = ((x889+x890)&(x891&x892));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x894 = -1;
	static uint8_t x895 = UINT8_MAX;
	volatile uint8_t x896 = 12U;

    t189 = ((x893+x894)&(x895&x896));

    if (t189 != 12U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x901 = INT16_MIN;
	int32_t x902 = -1;
	volatile int32_t x903 = -191152849;
	int8_t x904 = -7;
	int32_t t190 = 15330;

    t190 = ((x901+x902)&(x903&x904));

    if (t190 != -191152855) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x909 = INT8_MAX;
	static uint8_t x910 = 53U;

    t191 = ((x909+x910)&(x911&x912));

    if (t191 != 128) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x913 = -2;
	int64_t x914 = INT64_MAX;
	static uint32_t x915 = 28154U;
	int64_t x916 = -10LL;
	int64_t t192 = 1994418658812947LL;

    t192 = ((x913+x914)&(x915&x916));

    if (t192 != 28144LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x917 = -1;
	volatile int8_t x918 = INT8_MIN;
	int64_t x919 = INT64_MIN;
	volatile int32_t x920 = INT32_MIN;
	static int64_t t193 = INT64_MIN;

    t193 = ((x917+x918)&(x919&x920));

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x921 = -1LL;
	int8_t x922 = INT8_MIN;
	volatile int64_t x923 = -227162525093516LL;
	int32_t x924 = INT32_MAX;

    t194 = ((x921+x922)&(x923&x924));

    if (t194 != 442675572LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x926 = 0U;
	int16_t x927 = -1;
	uint32_t x928 = 51U;
	volatile uint32_t t195 = 244574681U;

    t195 = ((x925+x926)&(x927&x928));

    if (t195 != 51U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x929 = INT8_MIN;
	uint64_t x930 = UINT64_MAX;
	int16_t x932 = -1;
	uint64_t t196 = 77549LLU;

    t196 = ((x929+x930)&(x931&x932));

    if (t196 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x933 = UINT16_MAX;
	volatile int8_t x934 = INT8_MIN;
	uint8_t x935 = 62U;
	static uint32_t x936 = 348U;
	volatile uint32_t t197 = 29526U;

    t197 = ((x933+x934)&(x935&x936));

    if (t197 != 28U) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x937 = UINT16_MAX;
	uint8_t x938 = 31U;
	static uint32_t x939 = UINT32_MAX;
	uint16_t x940 = UINT16_MAX;
	volatile uint32_t t198 = 15019U;

    t198 = ((x937+x938)&(x939&x940));

    if (t198 != 30U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x942 = 8568U;
	int16_t x943 = 126;
	uint32_t t199 = 239U;

    t199 = ((x941+x942)&(x943&x944));

    if (t199 != 2U) { NG(); } else { ; }
	
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

