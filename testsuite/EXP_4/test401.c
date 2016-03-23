
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

static int32_t x13 = INT32_MIN;
volatile uint8_t x14 = UINT8_MAX;
static int8_t x20 = 1;
uint32_t x32 = 475747656U;
volatile int32_t t5 = -177;
static int64_t x48 = INT64_MAX;
int32_t t7 = -1853973;
uint8_t x49 = 39U;
int8_t x51 = -1;
int8_t x53 = INT8_MIN;
static int32_t x54 = -1;
volatile int64_t x55 = -1LL;
volatile int32_t t10 = 36181;
int8_t x73 = INT8_MAX;
uint32_t x76 = UINT32_MAX;
int64_t x81 = INT64_MIN;
int8_t x86 = 16;
uint8_t x87 = 72U;
int16_t x88 = INT16_MAX;
int32_t t16 = 17158245;
static volatile int32_t x97 = INT32_MAX;
uint32_t x103 = UINT32_MAX;
volatile uint16_t x111 = UINT16_MAX;
uint32_t x125 = UINT32_MAX;
int64_t x126 = -171820255240LL;
int32_t t22 = -255082090;
volatile int8_t x132 = INT8_MAX;
volatile int32_t t23 = 772;
int32_t x133 = -1;
static uint64_t x138 = 178022247738LLU;
uint8_t x141 = 5U;
int8_t x148 = 14;
static volatile int8_t x160 = 18;
static uint16_t x169 = UINT16_MAX;
int64_t x170 = -1LL;
int16_t x173 = INT16_MIN;
int16_t x174 = -980;
int64_t x176 = -4719LL;
int8_t x181 = -1;
int64_t x189 = 60777163844LL;
uint32_t x206 = UINT32_MAX;
volatile int32_t x213 = INT32_MIN;
static int16_t x214 = INT16_MAX;
uint16_t x216 = 10U;
static volatile uint16_t x222 = UINT16_MAX;
int16_t x223 = -7704;
volatile int64_t x228 = -1LL;
uint16_t x234 = 10U;
uint8_t x235 = 0U;
int64_t x257 = INT64_MIN;
uint64_t x259 = 1458759739559621822LLU;
int16_t x262 = INT16_MAX;
uint16_t x263 = 6U;
uint8_t x264 = 61U;
int32_t t44 = 0;
uint8_t x269 = 0U;
volatile int16_t x284 = 1;
static volatile int32_t t49 = 500;
static volatile int8_t x289 = INT8_MIN;
int16_t x292 = INT16_MIN;
volatile int16_t x295 = -1;
int32_t t51 = -504091647;
uint8_t x308 = 0U;
int32_t t52 = 4672;
int64_t x310 = -1LL;
static uint32_t x312 = 63522U;
int32_t t54 = -97;
int32_t x317 = INT32_MIN;
uint64_t x320 = 7008674235372659LLU;
static volatile int32_t x321 = -1;
int16_t x324 = INT16_MIN;
uint8_t x333 = UINT8_MAX;
int16_t x342 = 5804;
static int8_t x343 = -1;
volatile int16_t x344 = INT16_MIN;
volatile int16_t x346 = -25;
static uint64_t x347 = 62LLU;
int32_t x354 = -3;
uint64_t x369 = 0LLU;
int32_t t64 = 18239671;
int16_t x374 = -15012;
int32_t x388 = -814496924;
int32_t x410 = -19268378;
volatile int32_t t72 = 274;
uint64_t x421 = 256504346LLU;
uint32_t x428 = UINT32_MAX;
int32_t t74 = -2;
volatile int32_t t75 = 123159984;
int64_t x437 = 3LL;
volatile int8_t x438 = INT8_MIN;
int32_t t76 = -5;
int16_t x450 = INT16_MAX;
static int64_t x451 = -6LL;
static int32_t t78 = -320085;
static int16_t x460 = -1;
uint16_t x468 = UINT16_MAX;
uint8_t x473 = 59U;
int64_t x480 = -19426055805175LL;
int64_t x494 = INT64_MIN;
uint32_t x496 = 8137719U;
volatile int32_t t85 = 274;
volatile uint16_t x497 = UINT16_MAX;
static uint8_t x498 = 3U;
int16_t x511 = INT16_MIN;
static int8_t x512 = -35;
int32_t x529 = INT32_MIN;
int32_t x537 = 2027;
static int16_t x557 = INT16_MIN;
uint8_t x560 = 119U;
int32_t x563 = INT32_MAX;
volatile uint16_t x571 = UINT16_MAX;
volatile uint8_t x575 = 7U;
int32_t t97 = -122647038;
uint32_t x577 = 1U;
uint64_t x582 = UINT64_MAX;
static int64_t x583 = -1LL;
volatile uint16_t x596 = 48U;
uint64_t x599 = 86915138782041663LLU;
uint64_t x600 = 62642421576808513LLU;
volatile int32_t t103 = -160637995;
static int32_t x602 = -2035;
static volatile int32_t t104 = -4;
int16_t x605 = INT16_MAX;
uint8_t x626 = 92U;
uint64_t x627 = 1086LLU;
static int8_t x635 = INT8_MAX;
static int32_t x636 = -1;
int16_t x641 = 2;
volatile int64_t x645 = INT64_MIN;
int16_t x649 = INT16_MAX;
volatile int16_t x651 = 0;
volatile int32_t t113 = 3181329;
uint16_t x655 = 0U;
int32_t x656 = INT32_MIN;
int32_t x664 = 1;
int8_t x675 = INT8_MIN;
uint16_t x680 = 1U;
uint32_t x681 = 960U;
uint32_t x691 = UINT32_MAX;
static int16_t x706 = -103;
static int8_t x707 = INT8_MAX;
int16_t x722 = -1;
int8_t x723 = 6;
uint8_t x727 = 6U;
int64_t x728 = -1LL;
int16_t x736 = 26;
static volatile int8_t x738 = -36;
volatile int32_t t130 = -1682;
static uint32_t x746 = UINT32_MAX;
static int8_t x747 = INT8_MIN;
uint16_t x750 = UINT16_MAX;
static int8_t x751 = -1;
uint64_t x764 = UINT64_MAX;
int8_t x766 = INT8_MIN;
uint8_t x771 = UINT8_MAX;
int32_t t137 = 6471;
uint64_t x797 = 252084449947LLU;
uint16_t x798 = 3U;
int64_t x802 = INT64_MIN;
static int16_t x803 = -1;
int32_t x805 = INT32_MIN;
uint32_t x808 = 4108004U;
uint64_t x811 = 616LLU;
uint64_t x823 = 2LLU;
int32_t x829 = 807457;
volatile uint16_t x830 = 20U;
int16_t x831 = INT16_MAX;
static volatile int64_t x832 = -1LL;
int64_t x837 = INT64_MAX;
int64_t x838 = -1LL;
uint8_t x841 = 3U;
int16_t x842 = INT16_MIN;
int16_t x848 = 0;
int32_t x861 = -975693802;
int16_t x862 = INT16_MAX;
volatile int64_t x863 = -1LL;
volatile int32_t t153 = -462740;
static volatile int16_t x867 = 101;
volatile int64_t x868 = 31573109132989LL;
volatile uint8_t x869 = 6U;
int8_t x875 = INT8_MIN;
int32_t t156 = 3;
uint16_t x909 = UINT16_MAX;
uint16_t x918 = 0U;
int16_t x936 = 28;
static uint8_t x949 = 12U;
static int8_t x950 = INT8_MIN;
volatile int64_t x957 = INT64_MIN;
int32_t t174 = 2516878;
volatile uint32_t x990 = 1266U;
uint16_t x991 = 4187U;
static volatile int64_t x995 = INT64_MIN;
volatile int32_t t177 = -2;
static int8_t x1001 = INT8_MIN;
int64_t x1002 = INT64_MIN;
static volatile uint32_t x1004 = UINT32_MAX;
int16_t x1019 = 10;
int32_t t182 = 6956278;
volatile uint32_t x1029 = 1850981565U;
int32_t x1032 = -94528838;
int8_t x1047 = INT8_MIN;
volatile int32_t t187 = 1;
uint32_t x1050 = 1365U;
int32_t t188 = 0;
int64_t x1057 = -1495757469237293758LL;
int32_t t189 = 68;
int16_t x1061 = -13854;
uint16_t x1064 = 3U;
volatile int16_t x1065 = INT16_MIN;
int8_t x1071 = INT8_MIN;
int8_t x1074 = -2;
int32_t x1078 = INT32_MIN;


void f0(void) {
    	int16_t x5 = 131;
	volatile int8_t x6 = INT8_MIN;
	uint64_t x7 = UINT64_MAX;
	uint8_t x8 = 1U;
	volatile int32_t t0 = 310399185;

    t0 = (x5>(x6+(x7*x8)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = INT32_MIN;
	static int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MAX;
	int64_t x12 = -1LL;
	volatile int32_t t1 = 2;

    t1 = (x9>(x10+(x11*x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x15 = UINT32_MAX;
	static uint64_t x16 = UINT64_MAX;
	volatile int32_t t2 = 6101039;

    t2 = (x13>(x14+(x15*x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 28678229U;
	volatile int16_t x18 = INT16_MIN;
	int32_t x19 = 0;
	volatile int32_t t3 = -539996228;

    t3 = (x17>(x18+(x19*x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x25 = 21U;
	int32_t x26 = INT32_MIN;
	static volatile int8_t x27 = -1;
	int32_t x28 = -26248623;
	static volatile int32_t t4 = 22;

    t4 = (x25>(x26+(x27*x28)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x29 = 1402U;
	uint64_t x30 = 125338710841389LLU;
	int32_t x31 = -3;

    t5 = (x29>(x30+(x31*x32)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x37 = 118667505842LL;
	static int8_t x38 = -28;
	int64_t x39 = 124270LL;
	static int8_t x40 = INT8_MAX;
	int32_t t6 = -9022275;

    t6 = (x37>(x38+(x39*x40)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x45 = UINT32_MAX;
	int16_t x46 = 1;
	uint8_t x47 = 0U;

    t7 = (x45>(x46+(x47*x48)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x50 = -1;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t8 = -15725;

    t8 = (x49>(x50+(x51*x52)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x56 = -33524;
	int32_t t9 = -39655303;

    t9 = (x53>(x54+(x55*x56)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x57 = UINT32_MAX;
	static int32_t x58 = -1;
	int8_t x59 = INT8_MIN;
	uint16_t x60 = 51U;

    t10 = (x57>(x58+(x59*x60)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x61 = -241888823LL;
	int32_t x62 = 5026099;
	static volatile int8_t x63 = INT8_MIN;
	uint64_t x64 = 310128145741098864LLU;
	static volatile int32_t t11 = 1586;

    t11 = (x61>(x62+(x63*x64)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x65 = INT32_MIN;
	int64_t x66 = -1LL;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = 11;
	volatile int32_t t12 = 23980125;

    t12 = (x65>(x66+(x67*x68)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x74 = INT16_MIN;
	static int16_t x75 = -136;
	static volatile int32_t t13 = 3197961;

    t13 = (x73>(x74+(x75*x76)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x82 = INT16_MIN;
	volatile int8_t x83 = INT8_MIN;
	uint32_t x84 = UINT32_MAX;
	int32_t t14 = -27885;

    t14 = (x81>(x82+(x83*x84)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x85 = 0;
	static int32_t t15 = 106772;

    t15 = (x85>(x86+(x87*x88)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x93 = UINT16_MAX;
	volatile uint64_t x94 = UINT64_MAX;
	volatile uint16_t x95 = UINT16_MAX;
	int64_t x96 = 7606373647570LL;

    t16 = (x93>(x94+(x95*x96)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x98 = 355015609231LLU;
	int8_t x99 = -1;
	static uint8_t x100 = 1U;
	volatile int32_t t17 = 0;

    t17 = (x97>(x98+(x99*x100)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x101 = 0U;
	int8_t x102 = -1;
	uint64_t x104 = 0LLU;
	volatile int32_t t18 = -16995;

    t18 = (x101>(x102+(x103*x104)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x109 = INT32_MIN;
	volatile int8_t x110 = INT8_MAX;
	int16_t x112 = 29;
	volatile int32_t t19 = 8270;

    t19 = (x109>(x110+(x111*x112)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x117 = INT16_MAX;
	int64_t x118 = -1LL;
	uint64_t x119 = 5212750LLU;
	static int16_t x120 = INT16_MAX;
	static volatile int32_t t20 = 695541;

    t20 = (x117>(x118+(x119*x120)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x121 = INT64_MIN;
	uint64_t x122 = UINT64_MAX;
	volatile uint8_t x123 = 35U;
	uint8_t x124 = UINT8_MAX;
	static int32_t t21 = -5857;

    t21 = (x121>(x122+(x123*x124)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x127 = 98U;
	uint64_t x128 = UINT64_MAX;

    t22 = (x125>(x126+(x127*x128)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x129 = INT16_MAX;
	int8_t x130 = INT8_MIN;
	int8_t x131 = -1;

    t23 = (x129>(x130+(x131*x132)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x134 = 87180418536LLU;
	uint16_t x135 = UINT16_MAX;
	static int16_t x136 = -1;
	int32_t t24 = -770;

    t24 = (x133>(x134+(x135*x136)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x137 = UINT16_MAX;
	uint16_t x139 = UINT16_MAX;
	volatile uint8_t x140 = 60U;
	static volatile int32_t t25 = -139068;

    t25 = (x137>(x138+(x139*x140)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x142 = 226;
	uint32_t x143 = UINT32_MAX;
	int32_t x144 = INT32_MIN;
	int32_t t26 = 66;

    t26 = (x141>(x142+(x143*x144)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x145 = INT64_MAX;
	uint16_t x146 = 81U;
	static int16_t x147 = -12830;
	static int32_t t27 = -1;

    t27 = (x145>(x146+(x147*x148)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x149 = -1;
	int16_t x150 = -106;
	uint32_t x151 = UINT32_MAX;
	uint32_t x152 = 4849707U;
	int32_t t28 = 1749522;

    t28 = (x149>(x150+(x151*x152)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x153 = 362;
	volatile int32_t x154 = -1;
	volatile uint32_t x155 = UINT32_MAX;
	uint16_t x156 = 29278U;
	volatile int32_t t29 = 486565;

    t29 = (x153>(x154+(x155*x156)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x157 = -87563110993LL;
	int16_t x158 = 413;
	volatile int16_t x159 = 14551;
	static int32_t t30 = 1223;

    t30 = (x157>(x158+(x159*x160)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x165 = 0LLU;
	volatile uint16_t x166 = 184U;
	volatile int32_t x167 = 138355;
	volatile int8_t x168 = -1;
	static int32_t t31 = -952;

    t31 = (x165>(x166+(x167*x168)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x171 = -1;
	static volatile uint64_t x172 = 31344LLU;
	volatile int32_t t32 = 211;

    t32 = (x169>(x170+(x171*x172)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x175 = -1;
	int32_t t33 = -60;

    t33 = (x173>(x174+(x175*x176)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x182 = 22U;
	uint32_t x183 = 20U;
	uint32_t x184 = 1503784U;
	volatile int32_t t34 = -839;

    t34 = (x181>(x182+(x183*x184)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x185 = UINT8_MAX;
	int32_t x186 = INT32_MIN;
	volatile uint32_t x187 = 27781939U;
	volatile uint64_t x188 = UINT64_MAX;
	int32_t t35 = -34;

    t35 = (x185>(x186+(x187*x188)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MAX;
	uint32_t x192 = 1426051U;
	volatile int32_t t36 = 6163;

    t36 = (x189>(x190+(x191*x192)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x205 = 750U;
	static volatile int16_t x207 = INT16_MIN;
	int16_t x208 = -3;
	int32_t t37 = -78816;

    t37 = (x205>(x206+(x207*x208)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x209 = INT64_MIN;
	int16_t x210 = -1;
	volatile uint16_t x211 = 54U;
	volatile uint32_t x212 = 619405U;
	volatile int32_t t38 = -18;

    t38 = (x209>(x210+(x211*x212)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x215 = 31240598438338LLU;
	volatile int32_t t39 = 17358895;

    t39 = (x213>(x214+(x215*x216)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x221 = INT64_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t40 = 142832534;

    t40 = (x221>(x222+(x223*x224)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x225 = -1;
	int16_t x226 = 6101;
	uint32_t x227 = 11023U;
	static int32_t t41 = -1784883;

    t41 = (x225>(x226+(x227*x228)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x233 = 771000LLU;
	uint32_t x236 = UINT32_MAX;
	int32_t t42 = 19583;

    t42 = (x233>(x234+(x235*x236)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x258 = -11023;
	int16_t x260 = 596;
	static int32_t t43 = -68137508;

    t43 = (x257>(x258+(x259*x260)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x261 = INT32_MIN;

    t44 = (x261>(x262+(x263*x264)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x265 = -86;
	static uint16_t x266 = 16110U;
	uint32_t x267 = 332785U;
	int8_t x268 = INT8_MIN;
	volatile int32_t t45 = -27944;

    t45 = (x265>(x266+(x267*x268)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x270 = -1;
	static uint64_t x271 = UINT64_MAX;
	volatile int8_t x272 = INT8_MIN;
	static int32_t t46 = -1045;

    t46 = (x269>(x270+(x271*x272)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x277 = 754U;
	int16_t x278 = INT16_MIN;
	uint8_t x279 = 1U;
	int16_t x280 = INT16_MIN;
	int32_t t47 = -1475469;

    t47 = (x277>(x278+(x279*x280)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x281 = INT32_MIN;
	int8_t x282 = 1;
	static int16_t x283 = -1014;
	int32_t t48 = 0;

    t48 = (x281>(x282+(x283*x284)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x285 = 555241525155570LLU;
	int32_t x286 = INT32_MIN;
	int32_t x287 = -1;
	uint32_t x288 = 3149U;

    t49 = (x285>(x286+(x287*x288)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x290 = UINT32_MAX;
	int8_t x291 = INT8_MIN;
	volatile int32_t t50 = 773;

    t50 = (x289>(x290+(x291*x292)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x293 = -57820LL;
	static uint8_t x294 = UINT8_MAX;
	int8_t x296 = -1;

    t51 = (x293>(x294+(x295*x296)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x305 = INT64_MIN;
	int64_t x306 = -8752958386175LL;
	uint8_t x307 = 32U;

    t52 = (x305>(x306+(x307*x308)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x309 = 16347371965LLU;
	int8_t x311 = -5;
	volatile int32_t t53 = 3502565;

    t53 = (x309>(x310+(x311*x312)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x313 = UINT8_MAX;
	int64_t x314 = 12222284522947LL;
	uint16_t x315 = 20547U;
	int8_t x316 = INT8_MIN;

    t54 = (x313>(x314+(x315*x316)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x318 = 3U;
	uint16_t x319 = 7U;
	int32_t t55 = -163465;

    t55 = (x317>(x318+(x319*x320)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x322 = INT16_MIN;
	static uint64_t x323 = UINT64_MAX;
	volatile int32_t t56 = 8329200;

    t56 = (x321>(x322+(x323*x324)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x334 = -761370097788LL;
	static int16_t x335 = INT16_MIN;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t57 = 2681297;

    t57 = (x333>(x334+(x335*x336)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x337 = UINT32_MAX;
	static int64_t x338 = -1LL;
	int32_t x339 = 100;
	uint64_t x340 = 783LLU;
	static volatile int32_t t58 = 80;

    t58 = (x337>(x338+(x339*x340)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x341 = INT64_MAX;
	static int32_t t59 = -7342;

    t59 = (x341>(x342+(x343*x344)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x345 = 0U;
	volatile uint8_t x348 = UINT8_MAX;
	int32_t t60 = 38233;

    t60 = (x345>(x346+(x347*x348)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x353 = INT16_MAX;
	int16_t x355 = INT16_MIN;
	static int8_t x356 = 27;
	int32_t t61 = 33;

    t61 = (x353>(x354+(x355*x356)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x357 = -641552651768917LL;
	volatile uint32_t x358 = 1710074U;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t62 = -7629019;

    t62 = (x357>(x358+(x359*x360)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x365 = INT16_MIN;
	static uint64_t x366 = UINT64_MAX;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MAX;
	int32_t t63 = 11993;

    t63 = (x365>(x366+(x367*x368)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x370 = INT16_MIN;
	uint64_t x371 = 1900LLU;
	uint8_t x372 = 77U;

    t64 = (x369>(x370+(x371*x372)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x373 = INT16_MIN;
	uint32_t x375 = 331046551U;
	static int16_t x376 = 222;
	volatile int32_t t65 = 6156069;

    t65 = (x373>(x374+(x375*x376)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x381 = 55306U;
	static int8_t x382 = -1;
	volatile int8_t x383 = INT8_MIN;
	int16_t x384 = -102;
	volatile int32_t t66 = -1;

    t66 = (x381>(x382+(x383*x384)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x385 = 7LLU;
	int8_t x386 = INT8_MAX;
	uint8_t x387 = 1U;
	int32_t t67 = 145062531;

    t67 = (x385>(x386+(x387*x388)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x397 = 1546821744369881LL;
	uint32_t x398 = UINT32_MAX;
	int8_t x399 = 37;
	uint16_t x400 = 4U;
	static volatile int32_t t68 = 128842632;

    t68 = (x397>(x398+(x399*x400)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x401 = UINT8_MAX;
	uint32_t x402 = 17063624U;
	uint16_t x403 = 252U;
	uint64_t x404 = UINT64_MAX;
	int32_t t69 = 199371345;

    t69 = (x401>(x402+(x403*x404)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x405 = UINT8_MAX;
	static int8_t x406 = INT8_MIN;
	int8_t x407 = INT8_MIN;
	int32_t x408 = -1;
	int32_t t70 = 4252;

    t70 = (x405>(x406+(x407*x408)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x409 = INT16_MIN;
	uint64_t x411 = UINT64_MAX;
	int64_t x412 = -376348072769LL;
	int32_t t71 = -323;

    t71 = (x409>(x410+(x411*x412)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x413 = INT64_MAX;
	uint64_t x414 = 350050144416035148LLU;
	uint64_t x415 = UINT64_MAX;
	static int32_t x416 = INT32_MIN;

    t72 = (x413>(x414+(x415*x416)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x422 = UINT8_MAX;
	static int64_t x423 = INT64_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t73 = -3045732;

    t73 = (x421>(x422+(x423*x424)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x425 = UINT16_MAX;
	volatile int64_t x426 = -1LL;
	static int8_t x427 = -1;

    t74 = (x425>(x426+(x427*x428)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x429 = 16U;
	static int8_t x430 = INT8_MIN;
	int8_t x431 = -1;
	volatile int16_t x432 = -63;

    t75 = (x429>(x430+(x431*x432)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x439 = 39;
	int64_t x440 = -1LL;

    t76 = (x437>(x438+(x439*x440)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x449 = 3431666LL;
	uint64_t x452 = 48LLU;
	volatile int32_t t77 = 1;

    t77 = (x449>(x450+(x451*x452)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x453 = INT64_MAX;
	int8_t x454 = INT8_MIN;
	static int16_t x455 = 2;
	uint8_t x456 = UINT8_MAX;

    t78 = (x453>(x454+(x455*x456)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x457 = 257314560U;
	int64_t x458 = -1LL;
	uint32_t x459 = UINT32_MAX;
	int32_t t79 = 15;

    t79 = (x457>(x458+(x459*x460)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x465 = INT64_MIN;
	int64_t x466 = -1LL;
	static uint32_t x467 = UINT32_MAX;
	volatile int32_t t80 = -1387;

    t80 = (x465>(x466+(x467*x468)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x469 = INT8_MIN;
	int64_t x470 = INT64_MIN;
	static uint64_t x471 = 1616280882LLU;
	volatile uint64_t x472 = 319038LLU;
	volatile int32_t t81 = 3149;

    t81 = (x469>(x470+(x471*x472)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x474 = 559U;
	uint32_t x475 = 2658103U;
	static uint8_t x476 = UINT8_MAX;
	volatile int32_t t82 = 726;

    t82 = (x473>(x474+(x475*x476)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x477 = INT32_MIN;
	static uint8_t x478 = 1U;
	int16_t x479 = INT16_MIN;
	int32_t t83 = 19;

    t83 = (x477>(x478+(x479*x480)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x485 = INT64_MIN;
	volatile int64_t x486 = 4849025107628LL;
	int64_t x487 = -1LL;
	int8_t x488 = 0;
	int32_t t84 = -828523041;

    t84 = (x485>(x486+(x487*x488)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x493 = 275U;
	uint8_t x495 = 7U;

    t85 = (x493>(x494+(x495*x496)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x499 = 3U;
	int32_t x500 = 48981004;
	volatile int32_t t86 = -3;

    t86 = (x497>(x498+(x499*x500)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x509 = 95;
	int32_t x510 = 7;
	volatile int32_t t87 = -1030304;

    t87 = (x509>(x510+(x511*x512)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x513 = 2244764013044023LLU;
	static int64_t x514 = INT64_MAX;
	uint64_t x515 = 3LLU;
	static int16_t x516 = -455;
	int32_t t88 = -1;

    t88 = (x513>(x514+(x515*x516)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x517 = INT64_MIN;
	uint64_t x518 = 6653777352666684LLU;
	int32_t x519 = INT32_MAX;
	volatile uint32_t x520 = UINT32_MAX;
	int32_t t89 = -1;

    t89 = (x517>(x518+(x519*x520)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x530 = UINT32_MAX;
	int16_t x531 = INT16_MAX;
	uint64_t x532 = UINT64_MAX;
	volatile int32_t t90 = -251185;

    t90 = (x529>(x530+(x531*x532)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x538 = -60;
	int8_t x539 = INT8_MIN;
	uint64_t x540 = UINT64_MAX;
	volatile int32_t t91 = -7308;

    t91 = (x537>(x538+(x539*x540)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x545 = -14368LL;
	uint16_t x546 = UINT16_MAX;
	int16_t x547 = 27;
	static int32_t x548 = 27999481;
	int32_t t92 = -1;

    t92 = (x545>(x546+(x547*x548)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x553 = INT64_MIN;
	uint16_t x554 = 77U;
	int8_t x555 = 1;
	static int64_t x556 = INT64_MIN;
	volatile int32_t t93 = 1573;

    t93 = (x553>(x554+(x555*x556)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x558 = 2373U;
	int16_t x559 = INT16_MAX;
	static volatile int32_t t94 = -20;

    t94 = (x557>(x558+(x559*x560)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x561 = -1LL;
	static uint64_t x562 = 16152137LLU;
	uint16_t x564 = 0U;
	volatile int32_t t95 = -72212;

    t95 = (x561>(x562+(x563*x564)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x569 = -476392600;
	int32_t x570 = -13;
	uint64_t x572 = 5224431308775478LLU;
	volatile int32_t t96 = -7;

    t96 = (x569>(x570+(x571*x572)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x573 = 118U;
	int8_t x574 = -1;
	static int64_t x576 = -1LL;

    t97 = (x573>(x574+(x575*x576)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x578 = 273457LL;
	int16_t x579 = -1;
	int16_t x580 = -1;
	int32_t t98 = 859;

    t98 = (x577>(x578+(x579*x580)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x581 = 7;
	static volatile int16_t x584 = INT16_MIN;
	int32_t t99 = 1;

    t99 = (x581>(x582+(x583*x584)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x585 = INT32_MIN;
	int32_t x586 = INT32_MAX;
	static int64_t x587 = 1135414461284107852LL;
	volatile uint64_t x588 = 802LLU;
	int32_t t100 = 72272298;

    t100 = (x585>(x586+(x587*x588)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x589 = 197888U;
	volatile int32_t x590 = 5548142;
	static volatile int64_t x591 = -1LL;
	int32_t x592 = -1;
	int32_t t101 = 1;

    t101 = (x589>(x590+(x591*x592)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x593 = 5U;
	int8_t x594 = 2;
	uint8_t x595 = 0U;
	volatile int32_t t102 = -69961031;

    t102 = (x593>(x594+(x595*x596)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x597 = INT16_MIN;
	uint8_t x598 = 6U;

    t103 = (x597>(x598+(x599*x600)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint16_t x601 = UINT16_MAX;
	volatile int64_t x603 = -1LL;
	static uint64_t x604 = 8289578LLU;

    t104 = (x601>(x602+(x603*x604)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x606 = INT64_MIN;
	int8_t x607 = 6;
	int8_t x608 = 25;
	int32_t t105 = -22155;

    t105 = (x605>(x606+(x607*x608)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x609 = INT16_MIN;
	uint32_t x610 = 284U;
	int8_t x611 = INT8_MAX;
	int16_t x612 = INT16_MIN;
	int32_t t106 = 34496;

    t106 = (x609>(x610+(x611*x612)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x613 = 0;
	int16_t x614 = INT16_MIN;
	static int32_t x615 = -1;
	static int8_t x616 = -1;
	static int32_t t107 = 8602832;

    t107 = (x613>(x614+(x615*x616)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x625 = INT64_MIN;
	int16_t x628 = -1;
	static volatile int32_t t108 = -948;

    t108 = (x625>(x626+(x627*x628)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x629 = -1186673175489989703LL;
	static int32_t x630 = INT32_MIN;
	static int8_t x631 = 1;
	int64_t x632 = 2279770LL;
	volatile int32_t t109 = 14;

    t109 = (x629>(x630+(x631*x632)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x633 = 4U;
	volatile uint32_t x634 = UINT32_MAX;
	int32_t t110 = 1;

    t110 = (x633>(x634+(x635*x636)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x642 = UINT16_MAX;
	static int64_t x643 = -1LL;
	volatile int8_t x644 = -1;
	int32_t t111 = -23889906;

    t111 = (x641>(x642+(x643*x644)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x646 = 26214517000934877LL;
	volatile uint16_t x647 = 339U;
	int64_t x648 = -1LL;
	volatile int32_t t112 = -182059;

    t112 = (x645>(x646+(x647*x648)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x650 = 1033603444754319LL;
	int32_t x652 = INT32_MIN;

    t113 = (x649>(x650+(x651*x652)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x653 = INT8_MIN;
	int64_t x654 = -1990LL;
	volatile int32_t t114 = -1288145;

    t114 = (x653>(x654+(x655*x656)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x657 = 30U;
	uint32_t x658 = 1U;
	int16_t x659 = 10645;
	int16_t x660 = INT16_MAX;
	static int32_t t115 = 2538;

    t115 = (x657>(x658+(x659*x660)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x661 = INT32_MAX;
	static uint64_t x662 = UINT64_MAX;
	int64_t x663 = INT64_MIN;
	int32_t t116 = -775184;

    t116 = (x661>(x662+(x663*x664)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x669 = 983U;
	int16_t x670 = INT16_MIN;
	uint16_t x671 = 3140U;
	int16_t x672 = INT16_MIN;
	static int32_t t117 = 2693675;

    t117 = (x669>(x670+(x671*x672)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x673 = -1;
	int32_t x674 = INT32_MIN;
	static int16_t x676 = -2;
	volatile int32_t t118 = 30531;

    t118 = (x673>(x674+(x675*x676)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x677 = INT16_MAX;
	uint16_t x678 = UINT16_MAX;
	uint32_t x679 = 14U;
	volatile int32_t t119 = 13313984;

    t119 = (x677>(x678+(x679*x680)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x682 = 303U;
	uint32_t x683 = UINT32_MAX;
	uint16_t x684 = UINT16_MAX;
	int32_t t120 = -109;

    t120 = (x681>(x682+(x683*x684)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x689 = INT8_MAX;
	volatile int32_t x690 = -1;
	int32_t x692 = -1;
	volatile int32_t t121 = -91348458;

    t121 = (x689>(x690+(x691*x692)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x693 = UINT64_MAX;
	int64_t x694 = 823695804LL;
	uint8_t x695 = UINT8_MAX;
	int16_t x696 = INT16_MIN;
	volatile int32_t t122 = 2;

    t122 = (x693>(x694+(x695*x696)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x697 = -157LL;
	int32_t x698 = INT32_MAX;
	volatile int8_t x699 = -1;
	uint64_t x700 = 283533420976069LLU;
	int32_t t123 = 208;

    t123 = (x697>(x698+(x699*x700)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x705 = INT8_MIN;
	uint32_t x708 = 26U;
	volatile int32_t t124 = -3;

    t124 = (x705>(x706+(x707*x708)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x713 = INT16_MAX;
	int16_t x714 = 11661;
	static volatile int32_t x715 = 10236835;
	static uint8_t x716 = 22U;
	volatile int32_t t125 = 4208;

    t125 = (x713>(x714+(x715*x716)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x717 = INT32_MIN;
	int32_t x718 = -1;
	uint8_t x719 = UINT8_MAX;
	volatile int16_t x720 = INT16_MIN;
	volatile int32_t t126 = -790720;

    t126 = (x717>(x718+(x719*x720)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x721 = 829U;
	int16_t x724 = INT16_MIN;
	volatile int32_t t127 = -1562;

    t127 = (x721>(x722+(x723*x724)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x725 = INT8_MAX;
	int64_t x726 = INT64_MAX;
	int32_t t128 = 13295;

    t128 = (x725>(x726+(x727*x728)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x733 = INT8_MAX;
	uint64_t x734 = 1720953817689LLU;
	uint64_t x735 = 15024507877091192LLU;
	static volatile int32_t t129 = 226;

    t129 = (x733>(x734+(x735*x736)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x737 = INT64_MIN;
	uint64_t x739 = UINT64_MAX;
	static uint32_t x740 = 108907U;

    t130 = (x737>(x738+(x739*x740)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x745 = INT64_MIN;
	volatile uint32_t x748 = UINT32_MAX;
	volatile int32_t t131 = -182388;

    t131 = (x745>(x746+(x747*x748)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x749 = UINT64_MAX;
	uint16_t x752 = UINT16_MAX;
	volatile int32_t t132 = 3828190;

    t132 = (x749>(x750+(x751*x752)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x761 = -1;
	uint8_t x762 = UINT8_MAX;
	uint8_t x763 = 57U;
	int32_t t133 = 696897988;

    t133 = (x761>(x762+(x763*x764)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x765 = 0U;
	uint64_t x767 = 38550694LLU;
	int8_t x768 = -1;
	int32_t t134 = -6267626;

    t134 = (x765>(x766+(x767*x768)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x769 = -1540845LL;
	static int8_t x770 = 0;
	int16_t x772 = INT16_MIN;
	static volatile int32_t t135 = -902287255;

    t135 = (x769>(x770+(x771*x772)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x773 = 67163845740626935LLU;
	int32_t x774 = 618787;
	uint8_t x775 = UINT8_MAX;
	static int64_t x776 = -1LL;
	volatile int32_t t136 = -21323;

    t136 = (x773>(x774+(x775*x776)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x777 = INT32_MAX;
	uint64_t x778 = UINT64_MAX;
	volatile uint64_t x779 = 48609587LLU;
	uint64_t x780 = 8680936728618528122LLU;

    t137 = (x777>(x778+(x779*x780)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x781 = -24LL;
	uint16_t x782 = 1U;
	int16_t x783 = -14032;
	uint64_t x784 = 1155LLU;
	static int32_t t138 = 1;

    t138 = (x781>(x782+(x783*x784)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x789 = -13;
	uint16_t x790 = 1U;
	uint16_t x791 = 704U;
	uint16_t x792 = UINT16_MAX;
	static volatile int32_t t139 = -1;

    t139 = (x789>(x790+(x791*x792)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x793 = 6419921U;
	uint32_t x794 = 2000U;
	static volatile uint64_t x795 = 4110406341LLU;
	uint8_t x796 = 36U;
	static int32_t t140 = -1;

    t140 = (x793>(x794+(x795*x796)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x799 = INT8_MAX;
	static int8_t x800 = INT8_MIN;
	static int32_t t141 = -191239;

    t141 = (x797>(x798+(x799*x800)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x801 = 13;
	int16_t x804 = INT16_MIN;
	int32_t t142 = -3825;

    t142 = (x801>(x802+(x803*x804)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x806 = 0U;
	static volatile uint32_t x807 = 528019U;
	volatile int32_t t143 = -2;

    t143 = (x805>(x806+(x807*x808)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x809 = 26;
	int64_t x810 = -1LL;
	int8_t x812 = INT8_MIN;
	static volatile int32_t t144 = -59337;

    t144 = (x809>(x810+(x811*x812)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x821 = -1;
	volatile uint64_t x822 = 154934977361393667LLU;
	uint32_t x824 = 36903085U;
	int32_t t145 = -31786;

    t145 = (x821>(x822+(x823*x824)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t t146 = 0;

    t146 = (x829>(x830+(x831*x832)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x839 = -1;
	static volatile uint8_t x840 = UINT8_MAX;
	static volatile int32_t t147 = -426;

    t147 = (x837>(x838+(x839*x840)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x843 = 27U;
	int8_t x844 = INT8_MAX;
	volatile int32_t t148 = 15461;

    t148 = (x841>(x842+(x843*x844)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x845 = INT64_MIN;
	int16_t x846 = INT16_MIN;
	static int32_t x847 = INT32_MIN;
	int32_t t149 = 90927;

    t149 = (x845>(x846+(x847*x848)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x849 = -10;
	int64_t x850 = -347661504660972LL;
	uint16_t x851 = 14670U;
	int64_t x852 = -435607731792020LL;
	volatile int32_t t150 = 627309147;

    t150 = (x849>(x850+(x851*x852)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x853 = 442042490366503LLU;
	uint64_t x854 = UINT64_MAX;
	uint64_t x855 = 50044163LLU;
	static int32_t x856 = INT32_MAX;
	volatile int32_t t151 = -563125;

    t151 = (x853>(x854+(x855*x856)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x857 = 6U;
	uint8_t x858 = UINT8_MAX;
	static int32_t x859 = 20;
	int16_t x860 = -1;
	int32_t t152 = 10474;

    t152 = (x857>(x858+(x859*x860)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x864 = -9;

    t153 = (x861>(x862+(x863*x864)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x865 = 33;
	int64_t x866 = -1LL;
	volatile int32_t t154 = -140;

    t154 = (x865>(x866+(x867*x868)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x870 = 144;
	int8_t x871 = -1;
	static uint64_t x872 = 7711682LLU;
	int32_t t155 = -127976340;

    t155 = (x869>(x870+(x871*x872)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x873 = -1;
	volatile int16_t x874 = -1;
	static int8_t x876 = 0;

    t156 = (x873>(x874+(x875*x876)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x877 = INT32_MAX;
	static uint64_t x878 = 282LLU;
	int16_t x879 = INT16_MAX;
	uint32_t x880 = 22U;
	volatile int32_t t157 = -905;

    t157 = (x877>(x878+(x879*x880)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x885 = -1;
	volatile uint8_t x886 = UINT8_MAX;
	uint8_t x887 = 9U;
	static int8_t x888 = INT8_MAX;
	int32_t t158 = 1;

    t158 = (x885>(x886+(x887*x888)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x897 = -828;
	int64_t x898 = 1080018269282241LL;
	int16_t x899 = INT16_MIN;
	static int8_t x900 = -12;
	int32_t t159 = 28;

    t159 = (x897>(x898+(x899*x900)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x901 = INT16_MIN;
	volatile int32_t x902 = -636;
	int64_t x903 = -1LL;
	int32_t x904 = INT32_MAX;
	int32_t t160 = 1843034;

    t160 = (x901>(x902+(x903*x904)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x905 = INT64_MIN;
	volatile int8_t x906 = INT8_MIN;
	uint16_t x907 = 309U;
	uint64_t x908 = 1268408429LLU;
	int32_t t161 = 27;

    t161 = (x905>(x906+(x907*x908)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x910 = UINT64_MAX;
	volatile uint8_t x911 = 10U;
	int8_t x912 = INT8_MAX;
	volatile int32_t t162 = 17;

    t162 = (x909>(x910+(x911*x912)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x917 = UINT8_MAX;
	int16_t x919 = -1;
	int32_t x920 = -30424;
	int32_t t163 = 26;

    t163 = (x917>(x918+(x919*x920)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x933 = -54LL;
	uint32_t x934 = UINT32_MAX;
	volatile int16_t x935 = INT16_MAX;
	int32_t t164 = -47822;

    t164 = (x933>(x934+(x935*x936)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x941 = INT32_MIN;
	int16_t x942 = -1422;
	static int8_t x943 = INT8_MIN;
	int16_t x944 = INT16_MIN;
	volatile int32_t t165 = 3;

    t165 = (x941>(x942+(x943*x944)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x945 = 3377913LL;
	static int64_t x946 = INT64_MIN;
	uint64_t x947 = 839LLU;
	uint32_t x948 = 197U;
	int32_t t166 = 3;

    t166 = (x945>(x946+(x947*x948)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x951 = 58126352LL;
	uint64_t x952 = 3364LLU;
	int32_t t167 = 106160525;

    t167 = (x949>(x950+(x951*x952)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x953 = -1LL;
	static int16_t x954 = INT16_MAX;
	volatile uint8_t x955 = 1U;
	static int16_t x956 = INT16_MIN;
	static volatile int32_t t168 = -944707;

    t168 = (x953>(x954+(x955*x956)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x958 = 3043U;
	int16_t x959 = INT16_MIN;
	int8_t x960 = 0;
	static volatile int32_t t169 = 44335;

    t169 = (x957>(x958+(x959*x960)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x961 = 0;
	int32_t x962 = 25163991;
	uint16_t x963 = 29439U;
	int8_t x964 = -1;
	volatile int32_t t170 = -58;

    t170 = (x961>(x962+(x963*x964)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x965 = -1;
	int8_t x966 = -12;
	int8_t x967 = INT8_MIN;
	static uint64_t x968 = UINT64_MAX;
	volatile int32_t t171 = -16;

    t171 = (x965>(x966+(x967*x968)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x969 = INT64_MIN;
	volatile uint16_t x970 = 230U;
	volatile uint64_t x971 = UINT64_MAX;
	uint16_t x972 = UINT16_MAX;
	int32_t t172 = 1;

    t172 = (x969>(x970+(x971*x972)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x973 = INT8_MIN;
	int32_t x974 = 18;
	uint64_t x975 = UINT64_MAX;
	int32_t x976 = -1;
	volatile int32_t t173 = -3395489;

    t173 = (x973>(x974+(x975*x976)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x977 = -1;
	int16_t x978 = 33;
	static volatile int32_t x979 = 1;
	uint32_t x980 = 466128U;

    t174 = (x977>(x978+(x979*x980)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x981 = UINT64_MAX;
	static int8_t x982 = INT8_MIN;
	static uint8_t x983 = 1U;
	static uint16_t x984 = 851U;
	volatile int32_t t175 = 25;

    t175 = (x981>(x982+(x983*x984)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x989 = 53U;
	int64_t x992 = 105LL;
	static int32_t t176 = -2879;

    t176 = (x989>(x990+(x991*x992)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x993 = -1328;
	int32_t x994 = -1;
	uint8_t x996 = 0U;

    t177 = (x993>(x994+(x995*x996)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1003 = -1;
	static int32_t t178 = -1;

    t178 = (x1001>(x1002+(x1003*x1004)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1005 = -2823;
	static uint8_t x1006 = UINT8_MAX;
	uint32_t x1007 = 1U;
	volatile uint64_t x1008 = 4899LLU;
	volatile int32_t t179 = -1;

    t179 = (x1005>(x1006+(x1007*x1008)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1013 = INT32_MAX;
	uint64_t x1014 = 31248804580956LLU;
	static uint64_t x1015 = 580980960LLU;
	int8_t x1016 = 14;
	volatile int32_t t180 = 65;

    t180 = (x1013>(x1014+(x1015*x1016)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x1017 = INT8_MIN;
	uint16_t x1018 = UINT16_MAX;
	int8_t x1020 = 12;
	static int32_t t181 = 80375354;

    t181 = (x1017>(x1018+(x1019*x1020)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x1021 = INT32_MIN;
	static int64_t x1022 = -816357352LL;
	int8_t x1023 = -1;
	uint32_t x1024 = 60U;

    t182 = (x1021>(x1022+(x1023*x1024)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x1030 = 5U;
	int16_t x1031 = -1;
	volatile int32_t t183 = 668406;

    t183 = (x1029>(x1030+(x1031*x1032)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x1033 = INT8_MAX;
	int8_t x1034 = -1;
	uint64_t x1035 = 11380959LLU;
	volatile int64_t x1036 = INT64_MIN;
	int32_t t184 = 4678;

    t184 = (x1033>(x1034+(x1035*x1036)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1037 = 1570571436449251881LL;
	int16_t x1038 = INT16_MAX;
	int8_t x1039 = -1;
	int16_t x1040 = -1;
	volatile int32_t t185 = -978872557;

    t185 = (x1037>(x1038+(x1039*x1040)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1041 = INT64_MAX;
	volatile uint16_t x1042 = UINT16_MAX;
	uint16_t x1043 = UINT16_MAX;
	int32_t x1044 = 7;
	volatile int32_t t186 = -4;

    t186 = (x1041>(x1042+(x1043*x1044)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x1045 = INT16_MAX;
	int16_t x1046 = -1;
	uint8_t x1048 = 23U;

    t187 = (x1045>(x1046+(x1047*x1048)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1049 = INT8_MIN;
	int16_t x1051 = INT16_MIN;
	static int64_t x1052 = -557LL;

    t188 = (x1049>(x1050+(x1051*x1052)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1058 = UINT32_MAX;
	uint64_t x1059 = UINT64_MAX;
	int64_t x1060 = INT64_MIN;

    t189 = (x1057>(x1058+(x1059*x1060)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1062 = -1;
	uint64_t x1063 = 27010718809LLU;
	int32_t t190 = -1;

    t190 = (x1061>(x1062+(x1063*x1064)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x1066 = UINT8_MAX;
	uint16_t x1067 = UINT16_MAX;
	static uint8_t x1068 = 103U;
	int32_t t191 = 71219;

    t191 = (x1065>(x1066+(x1067*x1068)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1069 = 343385LL;
	uint32_t x1070 = 1U;
	uint16_t x1072 = UINT16_MAX;
	int32_t t192 = 1;

    t192 = (x1069>(x1070+(x1071*x1072)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x1073 = 6U;
	static uint32_t x1075 = 11U;
	int64_t x1076 = -3648346693004LL;
	static int32_t t193 = -3;

    t193 = (x1073>(x1074+(x1075*x1076)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1077 = INT8_MIN;
	static int8_t x1079 = INT8_MIN;
	volatile int32_t x1080 = -6;
	int32_t t194 = 2585;

    t194 = (x1077>(x1078+(x1079*x1080)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x1081 = 0U;
	int32_t x1082 = 118281284;
	int8_t x1083 = INT8_MAX;
	uint8_t x1084 = 2U;
	int32_t t195 = -37713917;

    t195 = (x1081>(x1082+(x1083*x1084)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1085 = UINT32_MAX;
	int32_t x1086 = INT32_MIN;
	int64_t x1087 = -1LL;
	uint16_t x1088 = UINT16_MAX;
	volatile int32_t t196 = -35160906;

    t196 = (x1085>(x1086+(x1087*x1088)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1089 = INT64_MAX;
	uint32_t x1090 = 122596029U;
	int64_t x1091 = -1LL;
	static volatile uint8_t x1092 = 1U;
	int32_t t197 = -1;

    t197 = (x1089>(x1090+(x1091*x1092)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1097 = UINT16_MAX;
	int16_t x1098 = INT16_MIN;
	volatile int32_t x1099 = -242;
	int32_t x1100 = -4190;
	int32_t t198 = 8482383;

    t198 = (x1097>(x1098+(x1099*x1100)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1113 = INT8_MIN;
	int64_t x1114 = INT64_MAX;
	uint16_t x1115 = 1U;
	int8_t x1116 = -1;
	volatile int32_t t199 = 2265229;

    t199 = (x1113>(x1114+(x1115*x1116)));

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

