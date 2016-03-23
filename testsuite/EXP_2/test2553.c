
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

int16_t x5 = INT16_MIN;
int16_t x13 = 670;
volatile int16_t x15 = INT16_MIN;
int32_t x17 = -1;
int64_t t2 = 53615LL;
int16_t x25 = INT16_MIN;
int32_t x26 = -1;
volatile uint64_t t4 = 10495LLU;
uint64_t x36 = 5699319107519185LLU;
int8_t x43 = -2;
int32_t x56 = INT32_MIN;
int8_t x72 = -1;
uint32_t x78 = 2U;
static uint32_t x80 = 231202U;
volatile int32_t t14 = -341187;
volatile uint8_t x93 = UINT8_MAX;
int32_t x106 = INT32_MIN;
int16_t x107 = INT16_MAX;
int32_t t17 = -1483;
uint64_t x113 = UINT64_MAX;
static int64_t x114 = 111369432LL;
int16_t x123 = INT16_MAX;
int32_t x127 = -84178;
int64_t x128 = -33434425503064LL;
int8_t x132 = -28;
int32_t x135 = INT32_MIN;
int32_t t24 = -5397;
uint8_t x140 = 120U;
volatile int16_t x145 = -1;
static int32_t x166 = INT32_MIN;
uint8_t x173 = 2U;
uint8_t x175 = 95U;
int8_t x177 = INT8_MIN;
static int64_t x180 = INT64_MIN;
volatile int64_t t33 = -1721034858LL;
uint64_t t34 = 39405217216107LLU;
uint64_t t36 = 960766869LLU;
int64_t x194 = -612LL;
volatile int64_t t37 = -5820LL;
int16_t x211 = INT16_MIN;
int64_t x212 = INT64_MAX;
uint8_t x215 = 21U;
volatile int64_t t43 = 0LL;
int32_t x233 = -1;
int16_t x236 = -1;
uint64_t t46 = 59814626331617LLU;
static uint8_t x238 = 12U;
static int8_t x240 = INT8_MIN;
volatile int32_t t47 = -414;
int64_t x243 = -178935782962LL;
uint32_t x244 = 380366258U;
int16_t x246 = INT16_MIN;
static int16_t x251 = -1;
uint64_t x262 = 1074741922703LLU;
static uint32_t x263 = 129818357U;
volatile int32_t x266 = INT32_MAX;
int64_t x271 = -1LL;
volatile int8_t x272 = INT8_MIN;
volatile int32_t x276 = INT32_MIN;
int64_t x280 = 438479856737900LL;
volatile uint64_t t58 = 28119490188554LLU;
uint16_t x285 = UINT16_MAX;
volatile int16_t x289 = 172;
static int32_t t60 = 174527878;
static volatile uint32_t x293 = UINT32_MAX;
volatile int32_t x296 = -72961;
volatile int16_t x301 = 6283;
int64_t x304 = 35LL;
int8_t x314 = 1;
int32_t t67 = -1;
uint32_t x328 = UINT32_MAX;
int32_t x333 = -13209243;
static volatile uint16_t x335 = 3290U;
volatile uint64_t t72 = 118945465181362LLU;
volatile int64_t t73 = -21930317579588825LL;
static int64_t x355 = INT64_MAX;
uint64_t t75 = 339411141640196LLU;
static int64_t t78 = -113897LL;
int16_t x377 = -1;
int32_t x384 = INT32_MIN;
uint64_t x385 = 539761890LLU;
uint32_t x387 = 25045682U;
uint8_t x388 = 1U;
static volatile int16_t x389 = -1;
uint8_t x390 = 66U;
int64_t t84 = 114785541LL;
static int8_t x403 = INT8_MIN;
int32_t x411 = -990;
uint32_t t87 = 3192U;
int32_t x426 = INT32_MIN;
volatile uint32_t t89 = 4U;
int32_t x429 = INT32_MAX;
uint16_t x430 = 6U;
int16_t x439 = INT16_MIN;
volatile uint16_t x446 = 8U;
int32_t x450 = INT32_MAX;
int8_t x459 = INT8_MAX;
volatile int32_t t98 = -585117;
int64_t x469 = INT64_MIN;
static uint16_t x482 = 29U;
static int32_t x483 = 729902014;
int16_t x493 = INT16_MAX;
static int8_t x495 = 1;
int8_t x508 = INT8_MIN;
static int8_t x513 = INT8_MAX;
volatile uint8_t x515 = 6U;
int32_t t106 = -251634180;
static int64_t t107 = -901223044LL;
volatile int8_t x525 = -1;
volatile int32_t x527 = 362;
int32_t t110 = 2256435;
int16_t x541 = INT16_MIN;
int8_t x544 = INT8_MIN;
static int32_t x546 = 342;
int16_t x550 = -1;
int64_t x555 = -134106939LL;
static volatile uint64_t t114 = 647387479LLU;
int64_t x558 = INT64_MIN;
int32_t x559 = 1471969;
volatile int32_t t116 = -16211233;
volatile uint32_t x567 = 6667U;
int16_t x569 = 168;
volatile int16_t x579 = INT16_MIN;
static uint8_t x581 = 0U;
volatile uint8_t x583 = 7U;
static int64_t x587 = INT64_MIN;
volatile int8_t x593 = -9;
volatile int32_t x599 = INT32_MIN;
volatile int64_t t124 = 192480LL;
int64_t x601 = INT64_MIN;
int64_t x619 = INT64_MAX;
static volatile int8_t x623 = INT8_MIN;
volatile int32_t t128 = 0;
volatile int64_t x626 = -18792252LL;
int8_t x627 = INT8_MIN;
uint64_t x628 = 1059LLU;
volatile uint64_t t129 = 63403808543370LLU;
volatile int8_t x634 = INT8_MIN;
volatile int8_t x637 = INT8_MIN;
static volatile int8_t x639 = -1;
uint8_t x652 = 1U;
static uint8_t x654 = 14U;
int32_t x656 = INT32_MIN;
volatile uint16_t x658 = UINT16_MAX;
uint32_t x661 = 10U;
volatile uint16_t x662 = UINT16_MAX;
volatile uint64_t x664 = UINT64_MAX;
int8_t x673 = -1;
int64_t x676 = -5926022853436615LL;
int16_t x680 = -1;
uint64_t x693 = UINT64_MAX;
int16_t x695 = -1;
volatile uint64_t t144 = 22120562397541LLU;
int64_t x697 = 2397787065814693LL;
static uint16_t x699 = 58U;
int32_t t147 = -190;
int64_t x717 = INT64_MIN;
int16_t x719 = -1;
volatile int64_t x727 = 5589LL;
uint8_t x728 = 2U;
volatile int64_t t151 = 184953754310LL;
volatile int8_t x734 = -1;
static volatile int8_t x737 = -1;
uint8_t x738 = UINT8_MAX;
static int64_t x739 = -1LL;
volatile int64_t t154 = 4LL;
int64_t x743 = 54436222LL;
static uint32_t x744 = UINT32_MAX;
static int32_t x745 = INT32_MIN;
int32_t t156 = 22;
static int8_t x750 = INT8_MIN;
int32_t x751 = -26432663;
int32_t x755 = -8664296;
volatile int16_t x756 = 6;
volatile int64_t x757 = 23LL;
uint32_t x760 = 3992U;
int32_t x762 = INT32_MIN;
static int16_t x764 = 101;
int64_t t160 = 447361546945LL;
int64_t x765 = INT64_MIN;
uint64_t x770 = 199322469063042LLU;
static int16_t x771 = -1;
int64_t t163 = 908819617782864239LL;
volatile uint8_t x788 = UINT8_MAX;
uint64_t t166 = 90121376736569829LLU;
volatile uint32_t x800 = 1722261141U;
volatile int16_t x807 = 542;
int8_t x808 = INT8_MAX;
volatile uint64_t t169 = 25982088LLU;
int64_t x812 = INT64_MAX;
static volatile int32_t x813 = INT32_MIN;
int32_t x817 = -2075;
static int8_t x824 = INT8_MIN;
int64_t t173 = -9604994291280LL;
volatile uint64_t x826 = 524975504LLU;
int8_t x827 = INT8_MAX;
uint64_t t174 = 245411519004056360LLU;
volatile uint32_t x832 = 3908U;
int64_t x833 = INT64_MIN;
uint32_t t178 = 564469958U;
int64_t x846 = -1LL;
volatile int32_t x848 = -1;
volatile int64_t t179 = 37980LL;
static uint64_t x852 = UINT64_MAX;
int64_t x853 = INT64_MAX;
int16_t x854 = INT16_MIN;
uint32_t x859 = UINT32_MAX;
volatile uint64_t x863 = 10723755441813088LLU;
int16_t x868 = -1;
int64_t x870 = 46LL;
int64_t x872 = INT64_MAX;
uint8_t x877 = 12U;
uint32_t t188 = 615U;
static int8_t x889 = 43;
uint64_t x890 = 578LLU;
static int64_t x911 = INT64_MIN;
int64_t t193 = -82LL;
volatile int16_t x917 = INT16_MIN;
volatile uint16_t x920 = UINT16_MAX;
volatile uint64_t t196 = 911755885445430932LLU;
static int8_t x936 = INT8_MIN;


void f0(void) {
    	volatile int64_t x6 = INT64_MIN;
	static uint16_t x7 = UINT16_MAX;
	uint8_t x8 = UINT8_MAX;
	static int64_t t0 = 3216645LL;

    t0 = ((x5+(x6^x7))%x8);

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x14 = UINT8_MAX;
	uint16_t x16 = 3U;
	volatile int32_t t1 = 3188;

    t1 = ((x13+(x14^x15))%x16);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x18 = INT32_MIN;
	int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MIN;

    t2 = ((x17+(x18^x19))%x20);

    if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x21 = 12943234;
	int32_t x22 = INT32_MIN;
	static uint32_t x23 = 1192288345U;
	static int16_t x24 = -1;
	static volatile uint32_t t3 = 20U;

    t3 = ((x21+(x22^x23))%x24);

    if (t3 != 3352715227U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x27 = 406740762741LLU;
	volatile int16_t x28 = INT16_MAX;

    t4 = ((x25+(x26^x27))%x28);

    if (t4 != 5847LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x29 = -1LL;
	int16_t x30 = -14228;
	static uint16_t x31 = 11U;
	int64_t x32 = INT64_MIN;
	static volatile int64_t t5 = 126582310LL;

    t5 = ((x29+(x30^x31))%x32);

    if (t5 != -14234LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x33 = 12729U;
	static uint64_t x34 = 11479746LLU;
	volatile int16_t x35 = -1;
	static uint64_t t6 = 982LLU;

    t6 = ((x33+(x34^x35))%x36);

    if (t6 != 3747441766001938LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = -3428861;
	static int16_t x38 = INT16_MIN;
	static int16_t x39 = -325;
	static int64_t x40 = -460LL;
	volatile int64_t t7 = 76206173699LL;

    t7 = ((x37+(x38^x39))%x40);

    if (t7 != -238LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = 41918031952372LLU;
	int8_t x42 = -1;
	volatile uint32_t x44 = 1U;
	uint64_t t8 = 1295336633271LLU;

    t8 = ((x41+(x42^x43))%x44);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = INT64_MIN;
	int64_t x46 = -1LL;
	int8_t x47 = -17;
	int8_t x48 = INT8_MIN;
	int64_t t9 = 858224075520LL;

    t9 = ((x45+(x46^x47))%x48);

    if (t9 != -112LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = 13794797U;
	volatile uint16_t x54 = 3U;
	int64_t x55 = INT64_MIN;
	int64_t t10 = 61777675LL;

    t10 = ((x53+(x54^x55))%x56);

    if (t10 != -2133688848LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x69 = UINT64_MAX;
	static int64_t x70 = INT64_MIN;
	uint16_t x71 = 1U;
	volatile uint64_t t11 = 63945LLU;

    t11 = ((x69+(x70^x71))%x72);

    if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x73 = INT8_MIN;
	int8_t x74 = INT8_MAX;
	uint64_t x75 = 27111372851425LLU;
	volatile uint32_t x76 = 36U;
	volatile uint64_t t12 = 563007823889LLU;

    t12 = ((x73+(x74^x75))%x76);

    if (t12 != 34LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x77 = INT32_MIN;
	static int8_t x79 = 26;
	volatile uint32_t t13 = 111846753U;

    t13 = ((x77+(x78^x79))%x80);

    if (t13 != 79496U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x81 = INT32_MAX;
	volatile uint16_t x82 = UINT16_MAX;
	volatile int8_t x83 = -1;
	volatile int32_t x84 = -1;

    t14 = ((x81+(x82^x83))%x84);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x85 = INT32_MAX;
	int8_t x86 = -1;
	uint32_t x87 = 165076U;
	int64_t x88 = INT64_MIN;
	volatile int64_t t15 = 72961006LL;

    t15 = ((x85+(x86^x87))%x88);

    if (t15 != 2147318570LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x94 = UINT8_MAX;
	int8_t x95 = -1;
	int16_t x96 = -2226;
	static int32_t t16 = 70606;

    t16 = ((x93+(x94^x95))%x96);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x105 = 39U;
	static int16_t x108 = 9650;

    t17 = ((x105+(x106^x107))%x108);

    if (t17 != -7392) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x109 = -116;
	uint16_t x110 = 829U;
	int32_t x111 = -1;
	int8_t x112 = INT8_MAX;
	volatile int32_t t18 = -313336;

    t18 = ((x109+(x110^x111))%x112);

    if (t18 != -57) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x115 = 56U;
	static int64_t x116 = INT64_MIN;
	uint64_t t19 = 15431919166LLU;

    t19 = ((x113+(x114^x115))%x116);

    if (t19 != 111369439LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x117 = 1U;
	int8_t x118 = -29;
	int16_t x119 = INT16_MIN;
	uint32_t x120 = 284022U;
	uint32_t t20 = 793788905U;

    t20 = ((x117+(x118^x119))%x120);

    if (t20 != 32740U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x121 = -46;
	static int32_t x122 = -1;
	volatile int8_t x124 = -1;
	int32_t t21 = 149774;

    t21 = ((x121+(x122^x123))%x124);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x125 = INT16_MIN;
	volatile int16_t x126 = INT16_MIN;
	int64_t t22 = 13LL;

    t22 = ((x125+(x126^x127))%x128);

    if (t22 != 46894LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint32_t x129 = UINT32_MAX;
	int16_t x130 = -1041;
	uint32_t x131 = 3492085U;
	static uint32_t t23 = 1377U;

    t23 = ((x129+(x130^x131))%x132);

    if (t23 != 4291474201U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x133 = -1;
	volatile uint16_t x134 = 386U;
	uint16_t x136 = 290U;

    t24 = ((x133+(x134^x135))%x136);

    if (t24 != -203) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MAX;
	int16_t x139 = 2335;
	volatile int64_t t25 = -3125LL;

    t25 = ((x137+(x138^x139))%x140);

    if (t25 != -56LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x141 = 112U;
	int32_t x142 = INT32_MAX;
	int32_t x143 = 1286;
	int16_t x144 = -17;
	volatile int32_t t26 = 90863;

    t26 = ((x141+(x142^x143))%x144);

    if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x146 = 116U;
	int16_t x147 = INT16_MIN;
	int16_t x148 = -2440;
	volatile int32_t t27 = -282;

    t27 = ((x145+(x146^x147))%x148);

    if (t27 != -933) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x153 = INT8_MIN;
	int64_t x154 = 3312877196292186LL;
	static volatile int64_t x155 = INT64_MAX;
	uint16_t x156 = 6681U;
	volatile int64_t t28 = -16360530555767953LL;

    t28 = ((x153+(x154^x155))%x156);

    if (t28 != 4844LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x157 = 3U;
	static volatile uint32_t x158 = UINT32_MAX;
	int32_t x159 = INT32_MIN;
	int16_t x160 = -1813;
	volatile uint32_t t29 = 631659U;

    t29 = ((x157+(x158^x159))%x160);

    if (t29 != 2147483650U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x165 = INT8_MIN;
	volatile uint64_t x167 = 60553892246291121LLU;
	int64_t x168 = -4138462716LL;
	uint64_t t30 = 7482345965LLU;

    t30 = ((x165+(x166^x167))%x168);

    if (t30 != 18386190181097767473LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x169 = -9;
	uint8_t x170 = 124U;
	static volatile int16_t x171 = 14;
	volatile int64_t x172 = -35395335180LL;
	static int64_t t31 = -99436082LL;

    t31 = ((x169+(x170^x171))%x172);

    if (t31 != 105LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x174 = UINT8_MAX;
	static volatile uint8_t x176 = 14U;
	volatile int32_t t32 = 111029;

    t32 = ((x173+(x174^x175))%x176);

    if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x178 = -1;
	uint8_t x179 = UINT8_MAX;

    t33 = ((x177+(x178^x179))%x180);

    if (t33 != -384LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x181 = INT32_MAX;
	static uint64_t x182 = UINT64_MAX;
	static uint32_t x183 = 6U;
	static uint16_t x184 = 8U;

    t34 = ((x181+(x182^x183))%x184);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x185 = INT64_MIN;
	int16_t x186 = INT16_MAX;
	int8_t x187 = INT8_MAX;
	static int32_t x188 = INT32_MAX;
	int64_t t35 = 548091773842LL;

    t35 = ((x185+(x186^x187))%x188);

    if (t35 != -2147451009LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x189 = 113U;
	uint64_t x190 = UINT64_MAX;
	uint64_t x191 = 7468182783770512571LLU;
	volatile int8_t x192 = -1;

    t36 = ((x189+(x190^x191))%x192);

    if (t36 != 10978561289939039157LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x193 = INT64_MIN;
	int64_t x195 = -104894073LL;
	uint32_t x196 = 748217398U;

    t37 = ((x193+(x194^x195))%x196);

    if (t37 != -228847809LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x197 = -1;
	int64_t x198 = INT64_MAX;
	int64_t x199 = INT64_MAX;
	uint64_t x200 = 224085LLU;
	uint64_t t38 = 4505982999LLU;

    t38 = ((x197+(x198^x199))%x200);

    if (t38 != 144945LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x205 = INT8_MIN;
	volatile int64_t x206 = -1LL;
	uint8_t x207 = 32U;
	static uint64_t x208 = 1006LLU;
	static uint64_t t39 = 155160794727LLU;

    t39 = ((x205+(x206^x207))%x208);

    if (t39 != 729LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x209 = 435LL;
	volatile int64_t x210 = INT64_MIN;
	static volatile int64_t t40 = 59556360208986466LL;

    t40 = ((x209+(x210^x211))%x212);

    if (t40 != 9223372036854743475LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x213 = 1;
	int32_t x214 = INT32_MIN;
	int16_t x216 = 8949;
	volatile int32_t t41 = -4;

    t41 = ((x213+(x214^x215))%x216);

    if (t41 != -1045) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x217 = 54276565;
	int16_t x218 = INT16_MAX;
	int64_t x219 = INT64_MIN;
	int16_t x220 = -373;
	int64_t t42 = 1921920125667LL;

    t42 = ((x217+(x218^x219))%x220);

    if (t42 != -38LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x221 = -1;
	int64_t x222 = INT64_MIN;
	int32_t x223 = -1;
	uint16_t x224 = 92U;

    t43 = ((x221+(x222^x223))%x224);

    if (t43 != 70LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x225 = INT8_MIN;
	static volatile uint8_t x226 = 5U;
	int64_t x227 = INT64_MAX;
	int8_t x228 = INT8_MIN;
	int64_t t44 = -815697365483760686LL;

    t44 = ((x225+(x226^x227))%x228);

    if (t44 != 122LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x229 = 3U;
	volatile int64_t x230 = INT64_MAX;
	int8_t x231 = 30;
	static int16_t x232 = -1;
	int64_t t45 = 506277983458LL;

    t45 = ((x229+(x230^x231))%x232);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x234 = 701780LLU;
	uint16_t x235 = 36U;

    t46 = ((x233+(x234^x235))%x236);

    if (t46 != 701807LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x237 = INT8_MIN;
	uint8_t x239 = 1U;

    t47 = ((x237+(x238^x239))%x240);

    if (t47 != -115) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x241 = -31;
	volatile int32_t x242 = INT32_MIN;
	int64_t t48 = 247877LL;

    t48 = ((x241+(x242^x243))%x244);

    if (t48 != 161112447LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x245 = -1;
	uint64_t x247 = 1156LLU;
	static uint64_t x248 = 704162157LLU;
	volatile uint64_t t49 = 8637990531292LLU;

    t49 = ((x245+(x246^x247))%x248);

    if (t49 != 680356046LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x249 = 921915LLU;
	int32_t x250 = -13974;
	int16_t x252 = -1;
	static volatile uint64_t t50 = 6432095LLU;

    t50 = ((x249+(x250^x251))%x252);

    if (t50 != 935888LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x253 = -1LL;
	static uint64_t x254 = 396943429254761052LLU;
	static uint64_t x255 = UINT64_MAX;
	int16_t x256 = INT16_MAX;
	static uint64_t t51 = 18155LLU;

    t51 = ((x253+(x254^x255))%x256);

    if (t51 != 24711LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x257 = UINT64_MAX;
	uint64_t x258 = UINT64_MAX;
	uint8_t x259 = 124U;
	int32_t x260 = -1;
	uint64_t t52 = 42934025493460550LLU;

    t52 = ((x257+(x258^x259))%x260);

    if (t52 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x261 = UINT16_MAX;
	int16_t x264 = INT16_MAX;
	static uint64_t t53 = 5854177824LLU;

    t53 = ((x261+(x262^x263))%x264);

    if (t53 != 4517LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x265 = 905U;
	int8_t x267 = INT8_MIN;
	volatile uint64_t x268 = 967552423LLU;
	uint64_t t54 = 2004373270494LLU;

    t54 = ((x265+(x266^x267))%x268);

    if (t54 != 212379834LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x269 = UINT8_MAX;
	uint8_t x270 = 0U;
	int64_t t55 = 571595LL;

    t55 = ((x269+(x270^x271))%x272);

    if (t55 != 126LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x273 = 7464964;
	uint64_t x274 = 7913264LLU;
	int32_t x275 = INT32_MIN;
	uint64_t t56 = 4LLU;

    t56 = ((x273+(x274^x275))%x276);

    if (t56 != 15378228LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x277 = UINT16_MAX;
	uint64_t x278 = 57966LLU;
	int32_t x279 = 1584;
	uint64_t t57 = 7663LLU;

    t57 = ((x277+(x278^x279))%x280);

    if (t57 != 123997LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x281 = 9586LLU;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = -9;
	static volatile uint64_t x284 = 1416LLU;

    t58 = ((x281+(x282^x283))%x284);

    if (t58 != 762LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x286 = 391LL;
	int8_t x287 = 46;
	int16_t x288 = -1;
	volatile int64_t t59 = -45627177473LL;

    t59 = ((x285+(x286^x287))%x288);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x290 = -3746;
	int16_t x291 = 19;
	uint16_t x292 = UINT16_MAX;

    t60 = ((x289+(x290^x291))%x292);

    if (t60 != -3591) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x294 = INT64_MIN;
	int8_t x295 = 0;
	volatile int64_t t61 = 829LL;

    t61 = ((x293+(x294^x295))%x296);

    if (t61 != -63222LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x297 = 255270223U;
	int8_t x298 = 1;
	static int64_t x299 = INT64_MIN;
	uint16_t x300 = 22981U;
	volatile int64_t t62 = -614360LL;

    t62 = ((x297+(x298^x299))%x300);

    if (t62 != -15563LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x302 = -1;
	int8_t x303 = -1;
	volatile int64_t t63 = -1819550831LL;

    t63 = ((x301+(x302^x303))%x304);

    if (t63 != 18LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x305 = INT32_MIN;
	uint8_t x306 = UINT8_MAX;
	int16_t x307 = 5545;
	uint32_t x308 = 11603U;
	static volatile uint32_t t64 = 16208U;

    t64 = ((x305+(x306^x307))%x308);

    if (t64 != 5870U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x309 = -1618;
	int64_t x310 = -440578067282LL;
	uint64_t x311 = 52548271LLU;
	volatile int64_t x312 = 17363973872719103LL;
	static volatile uint64_t t65 = 1390LLU;

    t65 = ((x309+(x310^x311))%x312);

    if (t65 != 6203380255671765LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x313 = INT8_MIN;
	static uint32_t x315 = 1980U;
	volatile int8_t x316 = -1;
	uint32_t t66 = 2743U;

    t66 = ((x313+(x314^x315))%x316);

    if (t66 != 1853U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x317 = INT16_MAX;
	volatile int32_t x318 = -1;
	int8_t x319 = -7;
	volatile int32_t x320 = INT32_MAX;

    t67 = ((x317+(x318^x319))%x320);

    if (t67 != 32773) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x321 = UINT32_MAX;
	int16_t x322 = INT16_MAX;
	int32_t x323 = 485725;
	static volatile int64_t x324 = INT64_MIN;
	static volatile int64_t t68 = -2658738533214LL;

    t68 = ((x321+(x322^x323))%x324);

    if (t68 != 464545LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x325 = -1837844081798611288LL;
	int16_t x326 = -1;
	int16_t x327 = -1;
	volatile int64_t t69 = 60479118055LL;

    t69 = ((x325+(x326^x327))%x328);

    if (t69 != -2578077388LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x329 = -1;
	volatile uint16_t x330 = UINT16_MAX;
	static int8_t x331 = INT8_MIN;
	volatile int32_t x332 = 1314;
	static int32_t t70 = 2150425;

    t70 = ((x329+(x330^x331))%x332);

    if (t70 != -1024) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x334 = UINT16_MAX;
	int8_t x336 = -6;
	int32_t t71 = -4;

    t71 = ((x333+(x334^x335))%x336);

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x341 = INT16_MIN;
	static int32_t x342 = INT32_MIN;
	static uint64_t x343 = UINT64_MAX;
	int16_t x344 = -1;

    t72 = ((x341+(x342^x343))%x344);

    if (t72 != 2147450879LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x349 = 1U;
	int8_t x350 = 1;
	int64_t x351 = INT64_MAX;
	static volatile uint16_t x352 = 15962U;

    t73 = ((x349+(x350^x351))%x352);

    if (t73 != 4073LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x353 = UINT64_MAX;
	int64_t x354 = 1873686887799LL;
	int64_t x356 = -1LL;
	volatile uint64_t t74 = 21651LLU;

    t74 = ((x353+(x354^x355))%x356);

    if (t74 != 9223370163167888007LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x357 = 1205144588099411LLU;
	int16_t x358 = INT16_MIN;
	static int16_t x359 = -68;
	volatile uint64_t x360 = 2425255758177LLU;

    t75 = ((x357+(x358^x359))%x360);

    if (t75 != 2217732076319LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x361 = INT8_MAX;
	uint64_t x362 = 9LLU;
	int64_t x363 = INT64_MIN;
	uint16_t x364 = 2U;
	uint64_t t76 = 9596218643407275LLU;

    t76 = ((x361+(x362^x363))%x364);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x365 = UINT8_MAX;
	uint32_t x366 = 50363U;
	volatile uint16_t x367 = 6838U;
	int8_t x368 = -1;
	volatile uint32_t t77 = 80556U;

    t77 = ((x365+(x366^x367))%x368);

    if (t77 != 57100U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x373 = INT64_MIN;
	static int16_t x374 = 11;
	static uint8_t x375 = UINT8_MAX;
	static int8_t x376 = 8;

    t78 = ((x373+(x374^x375))%x376);

    if (t78 != -4LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x378 = 921819083U;
	volatile uint16_t x379 = 233U;
	int8_t x380 = INT8_MIN;
	volatile uint32_t t79 = 10842260U;

    t79 = ((x377+(x378^x379))%x380);

    if (t79 != 921818913U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x382 = -1LL;
	static volatile int8_t x383 = INT8_MIN;
	int64_t t80 = 47371661311646224LL;

    t80 = ((x381+(x382^x383))%x384);

    if (t80 != -32641LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x386 = INT16_MIN;
	uint64_t t81 = 10LLU;

    t81 = ((x385+(x386^x387))%x388);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x391 = INT64_MIN;
	uint8_t x392 = 1U;
	static volatile int64_t t82 = -6390371LL;

    t82 = ((x389+(x390^x391))%x392);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x393 = 19U;
	uint8_t x394 = 1U;
	volatile int8_t x395 = INT8_MAX;
	int64_t x396 = INT64_MIN;
	int64_t t83 = -6088LL;

    t83 = ((x393+(x394^x395))%x396);

    if (t83 != 145LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x397 = 134848U;
	static int64_t x398 = -867540186346488LL;
	int8_t x399 = INT8_MIN;
	int16_t x400 = INT16_MIN;

    t84 = ((x397+(x398^x399))%x400);

    if (t84 != 16968LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x401 = -1;
	uint32_t x402 = 650U;
	static int8_t x404 = -7;
	uint32_t t85 = 376401U;

    t85 = ((x401+(x402^x403))%x404);

    if (t85 != 4294966537U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	int64_t x410 = 54LL;
	int64_t x412 = INT64_MIN;
	volatile int64_t t86 = 21721074LL;

    t86 = ((x409+(x410^x411))%x412);

    if (t86 != -749LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x417 = UINT8_MAX;
	volatile int8_t x418 = 55;
	static uint8_t x419 = UINT8_MAX;
	volatile uint32_t x420 = UINT32_MAX;

    t87 = ((x417+(x418^x419))%x420);

    if (t87 != 455U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x421 = -98871665LL;
	int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MIN;
	uint64_t x424 = UINT64_MAX;
	static uint64_t t88 = 29LLU;

    t88 = ((x421+(x422^x423))%x424);

    if (t88 != 18446744073610679951LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	volatile int16_t x427 = INT16_MAX;
	uint32_t x428 = 36454U;

    t89 = ((x425+(x426^x427))%x428);

    if (t89 != 11530U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x431 = INT8_MIN;
	static uint32_t x432 = UINT32_MAX;
	volatile uint32_t t90 = 200551493U;

    t90 = ((x429+(x430^x431))%x432);

    if (t90 != 2147483525U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x433 = INT8_MAX;
	static volatile uint8_t x434 = 3U;
	static int32_t x435 = INT32_MIN;
	int16_t x436 = 1;
	int32_t t91 = -21170394;

    t91 = ((x433+(x434^x435))%x436);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x437 = INT8_MIN;
	int16_t x438 = INT16_MIN;
	volatile int64_t x440 = INT64_MIN;
	static int64_t t92 = 4637289459689775LL;

    t92 = ((x437+(x438^x439))%x440);

    if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x441 = INT32_MIN;
	uint32_t x442 = 31U;
	int64_t x443 = 4093704535961LL;
	int8_t x444 = -9;
	volatile int64_t t93 = 94122205874005458LL;

    t93 = ((x441+(x442^x443))%x444);

    if (t93 != 8LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x445 = UINT16_MAX;
	uint16_t x447 = UINT16_MAX;
	int8_t x448 = -6;
	volatile int32_t t94 = 586029469;

    t94 = ((x445+(x446^x447))%x448);

    if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x449 = 16;
	static volatile int64_t x451 = INT64_MAX;
	int64_t x452 = INT64_MIN;
	int64_t t95 = -3819033398LL;

    t95 = ((x449+(x450^x451))%x452);

    if (t95 != 9223372034707292176LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint16_t x457 = UINT16_MAX;
	volatile int64_t x458 = INT64_MIN;
	uint32_t x460 = UINT32_MAX;
	int64_t t96 = 57305446055982LL;

    t96 = ((x457+(x458^x459))%x460);

    if (t96 != -2147417986LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x461 = INT8_MAX;
	uint32_t x462 = 0U;
	uint32_t x463 = 23370863U;
	uint64_t x464 = 59LLU;
	uint64_t t97 = 435LLU;

    t97 = ((x461+(x462^x463))%x464);

    if (t97 != 28LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x465 = -7;
	int16_t x466 = 1584;
	static uint8_t x467 = UINT8_MAX;
	static uint8_t x468 = UINT8_MAX;

    t98 = ((x465+(x466^x467))%x468);

    if (t98 != 206) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x470 = 3;
	int32_t x471 = 566426;
	int32_t x472 = -1;
	volatile int64_t t99 = -31665740862LL;

    t99 = ((x469+(x470^x471))%x472);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x481 = -1;
	static volatile uint16_t x484 = 7U;
	static volatile int32_t t100 = -30709357;

    t100 = ((x481+(x482^x483))%x484);

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x485 = 3156U;
	uint64_t x486 = 43568732527991954LLU;
	static volatile uint8_t x487 = 1U;
	int16_t x488 = INT16_MIN;
	volatile uint64_t t101 = 9203468767229757323LLU;

    t101 = ((x485+(x486^x487))%x488);

    if (t101 != 43568732527995111LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x494 = 4;
	int8_t x496 = -6;
	static int32_t t102 = 212347;

    t102 = ((x493+(x494^x495))%x496);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x497 = INT32_MIN;
	int64_t x498 = -1LL;
	int16_t x499 = 176;
	static volatile int64_t x500 = INT64_MIN;
	volatile int64_t t103 = 336310856589LL;

    t103 = ((x497+(x498^x499))%x500);

    if (t103 != -2147483825LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x505 = -1;
	static int16_t x506 = -14301;
	uint8_t x507 = 47U;
	volatile int32_t t104 = 1;

    t104 = ((x505+(x506^x507))%x508);

    if (t104 != -117) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x509 = 114000LL;
	volatile int64_t x510 = 42LL;
	static int32_t x511 = INT32_MAX;
	int32_t x512 = 1;
	static volatile int64_t t105 = -34343727038LL;

    t105 = ((x509+(x510^x511))%x512);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x514 = 10960;
	volatile uint8_t x516 = 118U;

    t106 = ((x513+(x514^x515))%x516);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x517 = INT16_MAX;
	static int64_t x518 = -1LL;
	int32_t x519 = INT32_MIN;
	uint8_t x520 = UINT8_MAX;

    t107 = ((x517+(x518^x519))%x520);

    if (t107 != 254LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x526 = 46299195LLU;
	int8_t x528 = INT8_MIN;
	static uint64_t t108 = 3223539366194442569LLU;

    t108 = ((x525+(x526^x527))%x528);

    if (t108 != 46299472LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x529 = 0U;
	uint32_t x530 = 7U;
	static int8_t x531 = INT8_MAX;
	static int16_t x532 = INT16_MAX;
	volatile uint32_t t109 = 28765U;

    t109 = ((x529+(x530^x531))%x532);

    if (t109 != 120U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x533 = 3;
	int8_t x534 = INT8_MAX;
	int16_t x535 = INT16_MIN;
	int8_t x536 = -1;

    t110 = ((x533+(x534^x535))%x536);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x542 = 3;
	volatile int8_t x543 = -3;
	volatile int32_t t111 = -7;

    t111 = ((x541+(x542^x543))%x544);

    if (t111 != -2) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x545 = INT16_MIN;
	int64_t x547 = -25206662LL;
	int32_t x548 = INT32_MIN;
	volatile int64_t t112 = -117563881LL;

    t112 = ((x545+(x546^x547))%x548);

    if (t112 != -25239252LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x549 = UINT32_MAX;
	static volatile uint8_t x551 = 42U;
	int16_t x552 = -1;
	uint32_t t113 = 66438U;

    t113 = ((x549+(x550^x551))%x552);

    if (t113 != 4294967252U) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint16_t x553 = UINT16_MAX;
	uint32_t x554 = 3712681U;
	volatile uint64_t x556 = 997729006691932641LLU;

    t114 = ((x553+(x554^x555))%x556);

    if (t114 != 487621953124353177LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x557 = INT16_MIN;
	int8_t x560 = INT8_MIN;
	int64_t t115 = -170592179LL;

    t115 = ((x557+(x558^x559))%x560);

    if (t115 != -31LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x561 = INT8_MAX;
	int8_t x562 = INT8_MIN;
	uint8_t x563 = 11U;
	int32_t x564 = -2;

    t116 = ((x561+(x562^x563))%x564);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x565 = 0U;
	int64_t x566 = INT64_MAX;
	int64_t x568 = -1LL;
	volatile int64_t t117 = 3808799655LL;

    t117 = ((x565+(x566^x567))%x568);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x570 = 1;
	uint16_t x571 = 0U;
	int16_t x572 = INT16_MIN;
	int32_t t118 = 44474;

    t118 = ((x569+(x570^x571))%x572);

    if (t118 != 169) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x577 = 0;
	uint32_t x578 = UINT32_MAX;
	int64_t x580 = 246952174LL;
	int64_t t119 = 1011740LL;

    t119 = ((x577+(x578^x579))%x580);

    if (t119 != 32767LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x582 = -1;
	int8_t x584 = INT8_MIN;
	static volatile int32_t t120 = 185894;

    t120 = ((x581+(x582^x583))%x584);

    if (t120 != -8) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x585 = 377;
	int8_t x586 = 0;
	volatile int16_t x588 = INT16_MIN;
	int64_t t121 = 2150042537973539904LL;

    t121 = ((x585+(x586^x587))%x588);

    if (t121 != -32391LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x589 = INT8_MIN;
	volatile uint32_t x590 = 47U;
	volatile uint16_t x591 = 97U;
	int32_t x592 = INT32_MIN;
	volatile uint32_t t122 = 335945U;

    t122 = ((x589+(x590^x591))%x592);

    if (t122 != 2147483598U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x594 = INT64_MIN;
	int32_t x595 = 307282;
	uint64_t x596 = 4321073207034535357LLU;
	volatile uint64_t t123 = 2110910703131878966LLU;

    t123 = ((x593+(x594^x595))%x596);

    if (t123 != 581225622786012367LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x597 = -1LL;
	int32_t x598 = INT32_MAX;
	int16_t x600 = INT16_MAX;

    t124 = ((x597+(x598^x599))%x600);

    if (t124 != -2LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x602 = INT16_MAX;
	int16_t x603 = 1;
	int8_t x604 = 27;
	static int64_t t125 = 233480175LL;

    t125 = ((x601+(x602^x603))%x604);

    if (t125 != -11LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x609 = INT8_MIN;
	int16_t x610 = INT16_MIN;
	int8_t x611 = INT8_MIN;
	static int8_t x612 = INT8_MAX;
	int32_t t126 = -226001007;

    t126 = ((x609+(x610^x611))%x612);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x617 = 50U;
	int8_t x618 = -1;
	uint8_t x620 = 38U;
	int64_t t127 = -2571LL;

    t127 = ((x617+(x618^x619))%x620);

    if (t127 != -6LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x621 = INT32_MAX;
	uint16_t x622 = 1775U;
	volatile uint16_t x624 = 32018U;

    t128 = ((x621+(x622^x623))%x624);

    if (t128 != 2688) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x625 = UINT16_MAX;

    t129 = ((x625+(x626^x627))%x628);

    if (t129 != 182LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x629 = INT16_MIN;
	volatile int8_t x630 = -11;
	int32_t x631 = INT32_MIN;
	uint8_t x632 = UINT8_MAX;
	int32_t t130 = -6073473;

    t130 = ((x629+(x630^x631))%x632);

    if (t130 != 244) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x633 = -1;
	volatile int64_t x635 = -1814LL;
	uint8_t x636 = 10U;
	static volatile int64_t t131 = -5093176LL;

    t131 = ((x633+(x634^x635))%x636);

    if (t131 != 7LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x638 = -1;
	int64_t x640 = INT64_MIN;
	volatile int64_t t132 = 85198LL;

    t132 = ((x637+(x638^x639))%x640);

    if (t132 != -128LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x641 = INT8_MIN;
	static int32_t x642 = -564;
	int64_t x643 = INT64_MAX;
	static volatile uint64_t x644 = UINT64_MAX;
	static uint64_t t133 = 16374606135LLU;

    t133 = ((x641+(x642^x643))%x644);

    if (t133 != 9223372036854776243LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x645 = INT32_MAX;
	int16_t x646 = INT16_MAX;
	static volatile int32_t x647 = -57779743;
	uint16_t x648 = 1U;
	static int32_t t134 = 8791;

    t134 = ((x645+(x646^x647))%x648);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x649 = 2U;
	int64_t x650 = 3LL;
	int8_t x651 = 0;
	volatile int64_t t135 = 18032LL;

    t135 = ((x649+(x650^x651))%x652);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x653 = -1;
	uint8_t x655 = UINT8_MAX;
	int32_t t136 = -1865415;

    t136 = ((x653+(x654^x655))%x656);

    if (t136 != 240) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x657 = 1U;
	int64_t x659 = -1LL;
	volatile int32_t x660 = -2;
	int64_t t137 = 26LL;

    t137 = ((x657+(x658^x659))%x660);

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x663 = INT16_MAX;
	volatile uint64_t t138 = 11896LLU;

    t138 = ((x661+(x662^x663))%x664);

    if (t138 != 32778LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x674 = 15415U;
	int32_t x675 = -1;
	volatile int64_t t139 = 1219221368LL;

    t139 = ((x673+(x674^x675))%x676);

    if (t139 != -15417LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x677 = UINT8_MAX;
	uint16_t x678 = UINT16_MAX;
	volatile int64_t x679 = -1LL;
	volatile int64_t t140 = 33587345139LL;

    t140 = ((x677+(x678^x679))%x680);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x681 = INT8_MIN;
	volatile int64_t x682 = -1LL;
	volatile uint64_t x683 = 4149832841LLU;
	uint32_t x684 = 121U;
	uint64_t t141 = 443902351LLU;

    t141 = ((x681+(x682^x683))%x684);

    if (t141 != 63LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x685 = INT16_MIN;
	int16_t x686 = INT16_MIN;
	volatile uint64_t x687 = 1119785512717LLU;
	uint64_t x688 = 1233792338925LLU;
	uint64_t t142 = 19389214LLU;

    t142 = ((x685+(x686^x687))%x688);

    if (t142 != 311402268271LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x689 = -225314693924830LL;
	static volatile uint32_t x690 = UINT32_MAX;
	static uint16_t x691 = UINT16_MAX;
	uint64_t x692 = 1826174335557LLU;
	uint64_t t143 = 46166503173973828LLU;

    t143 = ((x689+(x690^x691))%x692);

    if (t143 != 1262294535729LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x694 = INT32_MAX;
	int64_t x696 = INT64_MIN;

    t144 = ((x693+(x694^x695))%x696);

    if (t144 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x698 = UINT8_MAX;
	int32_t x700 = INT32_MAX;
	static int64_t t145 = 8107503959628LL;

    t145 = ((x697+(x698^x699))%x700);

    if (t145 != 1314855158LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x705 = INT32_MAX;
	volatile uint64_t x706 = UINT64_MAX;
	uint32_t x707 = 6511733U;
	static int64_t x708 = INT64_MIN;
	uint64_t t146 = 18660532534702410LLU;

    t146 = ((x705+(x706^x707))%x708);

    if (t146 != 2140971913LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x709 = INT8_MIN;
	int32_t x710 = INT32_MIN;
	int16_t x711 = INT16_MIN;
	int32_t x712 = -593;

    t147 = ((x709+(x710^x711))%x712);

    if (t147 != 283) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x713 = -5730;
	uint64_t x714 = 3451LLU;
	volatile int32_t x715 = INT32_MIN;
	uint32_t x716 = 152U;
	static volatile uint64_t t148 = 1LLU;

    t148 = ((x713+(x714^x715))%x716);

    if (t148 != 129LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x718 = INT8_MIN;
	uint32_t x720 = 94673569U;
	volatile int64_t t149 = 42597185520294LL;

    t149 = ((x717+(x718^x719))%x720);

    if (t149 != -28612991LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x721 = 414270LLU;
	int32_t x722 = -1;
	uint16_t x723 = 0U;
	static uint64_t x724 = 11LLU;
	static uint64_t t150 = 251299833587LLU;

    t150 = ((x721+(x722^x723))%x724);

    if (t150 != 9LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x725 = -1LL;
	uint32_t x726 = 389U;

    t151 = ((x725+(x726^x727))%x728);

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x729 = -1;
	uint64_t x730 = 51736229298610690LLU;
	volatile uint8_t x731 = UINT8_MAX;
	static int8_t x732 = -1;
	static uint64_t t152 = 206771883LLU;

    t152 = ((x729+(x730^x731))%x732);

    if (t152 != 51736229298610940LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x733 = 519;
	uint8_t x735 = UINT8_MAX;
	static uint32_t x736 = 163U;
	static uint32_t t153 = 15637U;

    t153 = ((x733+(x734^x735))%x736);

    if (t153 != 100U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x740 = -1;

    t154 = ((x737+(x738^x739))%x740);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x741 = UINT16_MAX;
	uint8_t x742 = 0U;
	volatile int64_t t155 = 3966418864502106058LL;

    t155 = ((x741+(x742^x743))%x744);

    if (t155 != 54501757LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x746 = INT16_MIN;
	int32_t x747 = INT32_MIN;
	static int8_t x748 = -1;

    t156 = ((x745+(x746^x747))%x748);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x749 = INT32_MIN;
	uint64_t x752 = 6LLU;
	volatile uint64_t t157 = 17LLU;

    t157 = ((x749+(x750^x751))%x752);

    if (t157 != 5LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x753 = INT16_MIN;
	uint16_t x754 = 247U;
	int32_t t158 = 631;

    t158 = ((x753+(x754^x755))%x756);

    if (t158 != -5) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x758 = UINT64_MAX;
	int16_t x759 = 3;
	static volatile uint64_t t159 = 1042289311930084LLU;

    t159 = ((x757+(x758^x759))%x760);

    if (t159 != 19LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x761 = UINT16_MAX;
	int64_t x763 = INT64_MIN;

    t160 = ((x761+(x762^x763))%x764);

    if (t160 != 42LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x766 = INT16_MAX;
	volatile uint16_t x767 = UINT16_MAX;
	uint64_t x768 = UINT64_MAX;
	volatile uint64_t t161 = 692618LLU;

    t161 = ((x765+(x766^x767))%x768);

    if (t161 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x769 = INT8_MIN;
	int8_t x772 = -1;
	uint64_t t162 = 1044943824735671807LLU;

    t162 = ((x769+(x770^x771))%x772);

    if (t162 != 18446544751240488445LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x773 = -1LL;
	int64_t x774 = INT64_MAX;
	uint16_t x775 = 5235U;
	int64_t x776 = INT64_MIN;

    t163 = ((x773+(x774^x775))%x776);

    if (t163 != 9223372036854770571LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x777 = INT8_MIN;
	uint16_t x778 = 2U;
	int32_t x779 = INT32_MAX;
	int8_t x780 = INT8_MIN;
	int32_t t164 = -5462;

    t164 = ((x777+(x778^x779))%x780);

    if (t164 != 125) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x785 = INT16_MIN;
	int32_t x786 = -889;
	uint64_t x787 = 83LLU;
	volatile uint64_t t165 = 460637537LLU;

    t165 = ((x785+(x786^x787))%x788);

    if (t165 != 81LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x789 = UINT16_MAX;
	volatile uint16_t x790 = UINT16_MAX;
	int8_t x791 = -1;
	uint64_t x792 = 63234694728LLU;

    t166 = ((x789+(x790^x791))%x792);

    if (t166 != 57770727639LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x793 = -1;
	volatile int32_t x794 = -1;
	uint16_t x795 = 8174U;
	static int8_t x796 = -3;
	volatile int32_t t167 = 34;

    t167 = ((x793+(x794^x795))%x796);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x797 = INT16_MIN;
	int64_t x798 = INT64_MIN;
	volatile int32_t x799 = -1;
	int64_t t168 = 0LL;

    t168 = ((x797+(x798^x799))%x800);

    if (t168 != 1692370637LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x805 = UINT64_MAX;
	int32_t x806 = INT32_MIN;

    t169 = ((x805+(x806^x807))%x808);

    if (t169 != 27LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x809 = 16;
	int64_t x810 = -17036203206174LL;
	volatile int64_t x811 = -4349LL;
	volatile int64_t t170 = 3458010342594LL;

    t170 = ((x809+(x810^x811))%x812);

    if (t170 != 17036203210481LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x814 = INT64_MAX;
	int64_t x815 = -11915096185670802LL;
	static int32_t x816 = INT32_MIN;
	static volatile int64_t t171 = 4068504826880LL;

    t171 = ((x813+(x814^x815))%x816);

    if (t171 != -2086892399LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x818 = INT16_MIN;
	volatile uint32_t x819 = UINT32_MAX;
	int32_t x820 = INT32_MIN;
	uint32_t t172 = 6006U;

    t172 = ((x817+(x818^x819))%x820);

    if (t172 != 30692U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x821 = -2511921922LL;
	int8_t x822 = INT8_MAX;
	int8_t x823 = 2;

    t173 = ((x821+(x822^x823))%x824);

    if (t173 != -5LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x825 = -69607357;
	int32_t x828 = -5319;

    t174 = ((x825+(x826^x827))%x828);

    if (t174 != 455368242LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x829 = UINT16_MAX;
	uint8_t x830 = UINT8_MAX;
	int8_t x831 = -22;
	static volatile uint32_t t175 = 9354U;

    t175 = ((x829+(x830^x831))%x832);

    if (t175 != 2772U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x834 = 609U;
	int8_t x835 = INT8_MAX;
	uint64_t x836 = 27931165299LLU;
	volatile uint64_t t176 = 2697290857266LLU;

    t176 = ((x833+(x834^x835))%x836);

    if (t176 != 2432520496LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x837 = 779153480U;
	volatile int64_t x838 = -1LL;
	volatile int16_t x839 = -1;
	static int16_t x840 = INT16_MIN;
	int64_t t177 = 0LL;

    t177 = ((x837+(x838^x839))%x840);

    if (t177 != 28744LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x841 = INT32_MAX;
	uint16_t x842 = 2U;
	uint32_t x843 = 3U;
	static uint8_t x844 = 3U;

    t178 = ((x841+(x842^x843))%x844);

    if (t178 != 2U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x845 = -1;
	int32_t x847 = -1;

    t179 = ((x845+(x846^x847))%x848);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x849 = INT16_MAX;
	static int64_t x850 = INT64_MIN;
	uint16_t x851 = UINT16_MAX;
	static uint64_t t180 = 7LLU;

    t180 = ((x849+(x850^x851))%x852);

    if (t180 != 9223372036854874110LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x855 = 3;
	uint8_t x856 = UINT8_MAX;
	volatile int64_t t181 = -59916397448847LL;

    t181 = ((x853+(x854^x855))%x856);

    if (t181 != 2LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x857 = INT16_MIN;
	int64_t x858 = -1LL;
	int64_t x860 = INT64_MAX;
	volatile int64_t t182 = -28703886201166855LL;

    t182 = ((x857+(x858^x859))%x860);

    if (t182 != -4295000064LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x861 = INT16_MIN;
	int8_t x862 = INT8_MIN;
	int8_t x864 = -1;
	uint64_t t183 = 200667392LLU;

    t183 = ((x861+(x862^x863))%x864);

    if (t183 != 18436020318267705824LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x865 = UINT16_MAX;
	static volatile int64_t x866 = INT64_MAX;
	static int64_t x867 = -1LL;
	static volatile int64_t t184 = 245345009LL;

    t184 = ((x865+(x866^x867))%x868);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x869 = INT8_MAX;
	uint32_t x871 = UINT32_MAX;
	volatile int64_t t185 = 3219967139520LL;

    t185 = ((x869+(x870^x871))%x872);

    if (t185 != 4294967376LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x873 = -1;
	uint8_t x874 = UINT8_MAX;
	volatile int8_t x875 = INT8_MIN;
	static uint32_t x876 = UINT32_MAX;
	volatile uint32_t t186 = 1343246U;

    t186 = ((x873+(x874^x875))%x876);

    if (t186 != 4294967166U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x878 = UINT32_MAX;
	volatile uint8_t x879 = 0U;
	uint16_t x880 = 946U;
	uint32_t t187 = 398U;

    t187 = ((x877+(x878^x879))%x880);

    if (t187 != 11U) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x885 = INT8_MIN;
	int32_t x886 = -1;
	uint32_t x887 = 202U;
	int16_t x888 = INT16_MIN;

    t188 = ((x885+(x886^x887))%x888);

    if (t188 != 32437U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x891 = INT8_MAX;
	int64_t x892 = INT64_MIN;
	volatile uint64_t t189 = 84317753949080LLU;

    t189 = ((x889+(x890^x891))%x892);

    if (t189 != 616LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x897 = 8746848380LLU;
	uint64_t x898 = 31759867LLU;
	static volatile uint64_t x899 = 112625299LLU;
	int8_t x900 = -27;
	uint64_t t190 = 98990659LLU;

    t190 = ((x897+(x898^x899))%x900);

    if (t190 != 8869669860LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x901 = INT32_MAX;
	int64_t x902 = 379096389221LL;
	int8_t x903 = INT8_MIN;
	int8_t x904 = -48;
	int64_t t191 = 88559921LL;

    t191 = ((x901+(x902^x903))%x904);

    if (t191 != -44LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x905 = -1;
	uint16_t x906 = 458U;
	int8_t x907 = -56;
	static volatile int16_t x908 = INT16_MAX;
	int32_t t192 = 13687;

    t192 = ((x905+(x906^x907))%x908);

    if (t192 != -511) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x909 = -1;
	int16_t x910 = -1;
	int16_t x912 = -1;

    t193 = ((x909+(x910^x911))%x912);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x913 = INT32_MAX;
	int8_t x914 = INT8_MIN;
	int32_t x915 = 1451;
	volatile int8_t x916 = INT8_MAX;
	volatile int32_t t194 = -963;

    t194 = ((x913+(x914^x915))%x916);

    if (t194 != 38) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x918 = -1;
	uint64_t x919 = 14053LLU;
	uint64_t t195 = 376264816LLU;

    t195 = ((x917+(x918^x919))%x920);

    if (t195 != 18714LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x921 = -1LL;
	static int64_t x922 = INT64_MAX;
	uint64_t x923 = 70449LLU;
	int8_t x924 = INT8_MAX;

    t196 = ((x921+(x922^x923))%x924);

    if (t196 != 35LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x925 = -58;
	int16_t x926 = INT16_MIN;
	int16_t x927 = INT16_MAX;
	int16_t x928 = -1;
	static int32_t t197 = -12;

    t197 = ((x925+(x926^x927))%x928);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x929 = 113359470;
	static volatile int32_t x930 = INT32_MAX;
	int64_t x931 = 61057156LL;
	uint8_t x932 = 21U;
	static volatile int64_t t198 = 29049955696186587LL;

    t198 = ((x929+(x930^x931))%x932);

    if (t198 != 9LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x933 = -85347502953477LL;
	int8_t x934 = INT8_MIN;
	int8_t x935 = INT8_MAX;
	int64_t t199 = -977124472367LL;

    t199 = ((x933+(x934^x935))%x936);

    if (t199 != -6LL) { NG(); } else { ; }
	
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

