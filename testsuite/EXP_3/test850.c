
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

int8_t x4 = INT8_MIN;
int16_t x8 = INT16_MIN;
int64_t x9 = -1LL;
int16_t x13 = INT16_MAX;
uint16_t x14 = 127U;
static volatile int32_t t3 = 101357;
int32_t x23 = INT32_MAX;
uint16_t x25 = 1U;
int64_t x30 = INT64_MIN;
int32_t t7 = 109894704;
uint8_t x48 = 1U;
static int32_t t11 = 96768091;
volatile uint64_t x55 = UINT64_MAX;
volatile int32_t t14 = -95532317;
int64_t x63 = -1LL;
int32_t x69 = 115;
uint64_t x75 = 31103219LLU;
volatile int8_t x87 = -1;
volatile int32_t x89 = -233;
uint32_t x94 = 29U;
int8_t x96 = -1;
int8_t x99 = INT8_MAX;
static volatile uint16_t x104 = 84U;
static int8_t x106 = -1;
volatile int32_t x109 = INT32_MAX;
volatile int32_t t27 = 46673;
int16_t x126 = -14;
static volatile int32_t t30 = 5001;
int16_t x130 = INT16_MAX;
static int16_t x132 = INT16_MIN;
int32_t x133 = -1;
volatile int8_t x134 = 7;
uint32_t x141 = UINT32_MAX;
int64_t x145 = -1LL;
int64_t x147 = INT64_MIN;
volatile int8_t x148 = INT8_MIN;
static uint32_t x150 = 20U;
int64_t x160 = INT64_MIN;
uint64_t x167 = 375184516LLU;
uint32_t x170 = UINT32_MAX;
int16_t x171 = INT16_MIN;
uint16_t x172 = 12U;
volatile int32_t x173 = INT32_MAX;
int16_t x183 = INT16_MIN;
int32_t t45 = -487473;
static int16_t x190 = -1;
int8_t x191 = 1;
int8_t x201 = INT8_MIN;
int16_t x202 = 3970;
uint32_t x214 = 11189U;
int16_t x216 = INT16_MIN;
uint8_t x220 = UINT8_MAX;
int64_t x223 = -13935876LL;
uint64_t x225 = 13LLU;
static volatile int16_t x226 = INT16_MIN;
int8_t x231 = INT8_MIN;
volatile int8_t x236 = -1;
uint64_t x238 = UINT64_MAX;
static int32_t x242 = INT32_MAX;
volatile int32_t t59 = -31;
static int32_t t60 = 21189;
int8_t x260 = INT8_MAX;
volatile int16_t x261 = 1;
static uint64_t x265 = 75455758178931780LLU;
int32_t t65 = -3;
int16_t x273 = INT16_MIN;
uint8_t x274 = 6U;
volatile int32_t t67 = -250;
uint32_t x279 = 109681899U;
uint16_t x280 = 242U;
uint32_t x281 = UINT32_MAX;
uint8_t x286 = UINT8_MAX;
uint16_t x293 = UINT16_MAX;
volatile int16_t x295 = -11;
int32_t t72 = -59720;
static int8_t x298 = INT8_MIN;
int32_t t76 = 4116;
int8_t x318 = INT8_MIN;
static volatile uint64_t x321 = 9926473599179LLU;
volatile uint32_t x328 = 62535514U;
int32_t x331 = -1;
static int8_t x333 = -20;
uint32_t x335 = UINT32_MAX;
int32_t x337 = -517633;
uint64_t x346 = UINT64_MAX;
static uint32_t x351 = UINT32_MAX;
volatile int16_t x353 = INT16_MIN;
int8_t x354 = INT8_MIN;
int32_t x356 = 603;
int16_t x357 = INT16_MIN;
static int64_t x358 = INT64_MIN;
int16_t x362 = -1;
int32_t t88 = 33297743;
int16_t x370 = -1;
int8_t x372 = INT8_MIN;
int16_t x375 = INT16_MIN;
int8_t x376 = INT8_MAX;
volatile int32_t t92 = 1193;
volatile int8_t x384 = INT8_MIN;
volatile int32_t t93 = 1513955;
volatile int64_t x389 = 2706LL;
int32_t t95 = -3798;
uint16_t x400 = 15U;
volatile int64_t x411 = 27LL;
static volatile int32_t t101 = -2;
int16_t x417 = 0;
volatile int8_t x418 = INT8_MIN;
volatile int16_t x423 = INT16_MAX;
int32_t x431 = INT32_MIN;
uint16_t x436 = 10U;
volatile int64_t x438 = -1LL;
uint32_t x439 = 1U;
int32_t t107 = 23942424;
volatile uint64_t x442 = 51318111LLU;
int64_t x443 = -577077334331864LL;
int16_t x444 = INT16_MAX;
volatile int32_t x446 = -1;
uint16_t x450 = 12U;
volatile int32_t x453 = INT32_MIN;
int32_t x454 = INT32_MIN;
int64_t x459 = INT64_MAX;
volatile int32_t t112 = -14;
int32_t x469 = INT32_MIN;
uint32_t x472 = UINT32_MAX;
static int32_t t115 = 7390244;
uint64_t x476 = UINT64_MAX;
static int8_t x479 = INT8_MAX;
volatile int32_t t117 = 30;
uint64_t x483 = UINT64_MAX;
int32_t t118 = -2;
int8_t x495 = INT8_MIN;
int8_t x496 = INT8_MIN;
volatile int32_t t121 = -6873401;
uint16_t x502 = UINT16_MAX;
int64_t x510 = -2076848692181299678LL;
int32_t t125 = -1728;
static volatile int64_t x541 = INT64_MIN;
int16_t x543 = INT16_MIN;
int64_t x545 = -1008458915711294LL;
volatile int32_t t133 = -2936432;
int8_t x549 = INT8_MIN;
volatile int8_t x555 = 1;
volatile int32_t t136 = -199;
int32_t t138 = -126;
uint32_t x569 = 18017U;
int32_t t139 = 484899;
int64_t x573 = -1LL;
static volatile int32_t t140 = 3258;
static int16_t x578 = 505;
int16_t x582 = INT16_MIN;
static int8_t x585 = -1;
int32_t x586 = INT32_MIN;
int32_t t143 = -4145;
static volatile uint16_t x596 = UINT16_MAX;
static uint16_t x604 = 445U;
static int16_t x605 = INT16_MIN;
int32_t x607 = INT32_MAX;
uint32_t x609 = UINT32_MAX;
int32_t t150 = 455;
volatile int8_t x624 = -1;
volatile int32_t t152 = -884;
uint64_t x636 = UINT64_MAX;
int8_t x638 = INT8_MIN;
int32_t t156 = -8652;
uint16_t x644 = UINT16_MAX;
int32_t t157 = 157409058;
int64_t x647 = INT64_MIN;
volatile uint64_t x648 = 447011372750LLU;
int8_t x658 = INT8_MIN;
volatile int32_t t161 = -13262734;
static int64_t x666 = -1LL;
volatile int32_t t163 = 123179;
static uint16_t x671 = UINT16_MAX;
static volatile int32_t t164 = -31223;
uint16_t x678 = 11390U;
static int32_t x680 = INT32_MIN;
volatile int32_t t165 = -14536332;
static volatile int32_t x686 = INT32_MIN;
static uint32_t x693 = 1480842U;
int32_t x694 = INT32_MIN;
int8_t x707 = INT8_MIN;
static volatile int64_t x709 = INT64_MIN;
static int32_t x713 = INT32_MIN;
int32_t t174 = 259;
static volatile uint64_t x717 = 2673098317396LLU;
volatile int8_t x719 = INT8_MIN;
static volatile int8_t x720 = -1;
volatile int64_t x721 = INT64_MIN;
static int16_t x725 = 773;
static uint32_t x728 = 14547313U;
volatile int32_t t177 = 1;
int32_t t180 = -64803;
static int64_t x770 = -1LL;
int32_t t190 = -4451;
uint8_t x785 = 1U;
int32_t t191 = -42;
static int16_t x790 = INT16_MAX;
volatile int32_t t195 = -10332052;
int16_t x806 = INT16_MIN;
uint16_t x807 = UINT16_MAX;
volatile uint32_t x808 = UINT32_MAX;
uint64_t x810 = 151092265994LLU;
uint32_t x811 = 4U;
static int64_t x820 = -1573572LL;
int32_t t199 = -175594;


void f0(void) {
    	int8_t x1 = -1;
	volatile int64_t x2 = INT64_MIN;
	static int64_t x3 = INT64_MIN;
	volatile int32_t t0 = 122654;

    t0 = ((x1%x2)<=(x3%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	volatile int32_t t1 = -7;

    t1 = ((x5%x6)<=(x7%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = UINT32_MAX;
	static volatile int8_t x11 = -1;
	uint64_t x12 = 335785182127093777LLU;
	volatile int32_t t2 = 26523857;

    t2 = ((x9%x10)<=(x11%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x15 = 1149396434U;
	static uint8_t x16 = 1U;

    t3 = ((x13%x14)<=(x15%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MAX;
	static volatile int32_t x19 = -1;
	int64_t x20 = INT64_MIN;
	int32_t t4 = 1;

    t4 = ((x17%x18)<=(x19%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	int32_t x22 = INT32_MIN;
	int32_t x24 = 392366;
	static int32_t t5 = 0;

    t5 = ((x21%x22)<=(x23%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = -3;
	static uint8_t x27 = 1U;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -20752;

    t6 = ((x25%x26)<=(x27%x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = 20LL;
	int8_t x31 = INT8_MAX;
	volatile int16_t x32 = 14637;

    t7 = ((x29%x30)<=(x31%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile uint32_t x34 = UINT32_MAX;
	int64_t x35 = -1LL;
	static int16_t x36 = INT16_MAX;
	int32_t t8 = -978676974;

    t8 = ((x33%x34)<=(x35%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	volatile uint8_t x38 = 38U;
	uint64_t x39 = UINT64_MAX;
	volatile int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -55083;

    t9 = ((x37%x38)<=(x39%x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 122LLU;
	int16_t x42 = INT16_MAX;
	int32_t x43 = -426086;
	int64_t x44 = -1LL;
	static volatile int32_t t10 = -320650;

    t10 = ((x41%x42)<=(x43%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 22U;
	static int8_t x46 = 3;
	static int8_t x47 = -3;

    t11 = ((x45%x46)<=(x47%x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = 1;
	uint8_t x50 = UINT8_MAX;
	volatile int8_t x51 = INT8_MIN;
	static int32_t x52 = INT32_MIN;
	int32_t t12 = 13375215;

    t12 = ((x49%x50)<=(x51%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 3U;
	static volatile int8_t x54 = INT8_MIN;
	uint16_t x56 = UINT16_MAX;
	int32_t t13 = 2325010;

    t13 = ((x53%x54)<=(x55%x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 50;
	volatile int16_t x58 = INT16_MAX;
	uint16_t x59 = 43U;
	int32_t x60 = INT32_MAX;

    t14 = ((x57%x58)<=(x59%x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = 79;
	uint64_t x62 = 1683LLU;
	int64_t x64 = -443197LL;
	int32_t t15 = 3;

    t15 = ((x61%x62)<=(x63%x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x70 = -5974;
	static int32_t x71 = INT32_MAX;
	volatile int8_t x72 = -48;
	volatile int32_t t16 = -273;

    t16 = ((x69%x70)<=(x71%x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MAX;
	int32_t x76 = 257159735;
	int32_t t17 = 0;

    t17 = ((x73%x74)<=(x75%x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x77 = 1;
	volatile uint8_t x78 = 3U;
	volatile int16_t x79 = INT16_MAX;
	int8_t x80 = -1;
	int32_t t18 = 9006881;

    t18 = ((x77%x78)<=(x79%x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = 3U;
	static int8_t x82 = 10;
	int64_t x83 = -154998411LL;
	uint64_t x84 = 2LLU;
	volatile int32_t t19 = -734595;

    t19 = ((x81%x82)<=(x83%x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = INT32_MIN;
	uint8_t x86 = 53U;
	int64_t x88 = 115820770717756189LL;
	volatile int32_t t20 = -1862;

    t20 = ((x85%x86)<=(x87%x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x90 = INT32_MIN;
	int32_t x91 = 14;
	int8_t x92 = -1;
	int32_t t21 = 240;

    t21 = ((x89%x90)<=(x91%x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x93 = INT32_MIN;
	volatile uint64_t x95 = UINT64_MAX;
	int32_t t22 = -10;

    t22 = ((x93%x94)<=(x95%x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = 174U;
	volatile int16_t x98 = INT16_MIN;
	int32_t x100 = INT32_MIN;
	int32_t t23 = -297496120;

    t23 = ((x97%x98)<=(x99%x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = 13042790251235LL;
	uint64_t x102 = 324688226LLU;
	int64_t x103 = -41222986766LL;
	volatile int32_t t24 = 67027736;

    t24 = ((x101%x102)<=(x103%x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x105 = 83447195LLU;
	volatile int16_t x107 = INT16_MIN;
	int8_t x108 = -1;
	int32_t t25 = 0;

    t25 = ((x105%x106)<=(x107%x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x110 = -3;
	static int64_t x111 = -1LL;
	uint16_t x112 = UINT16_MAX;
	int32_t t26 = 14876247;

    t26 = ((x109%x110)<=(x111%x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x113 = INT16_MIN;
	static int8_t x114 = INT8_MIN;
	static int16_t x115 = -1;
	int64_t x116 = -1367741332222102165LL;

    t27 = ((x113%x114)<=(x115%x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x117 = UINT16_MAX;
	int32_t x118 = -1445049;
	int64_t x119 = -1LL;
	volatile uint8_t x120 = 4U;
	int32_t t28 = 0;

    t28 = ((x117%x118)<=(x119%x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x121 = -1;
	static int16_t x122 = INT16_MIN;
	volatile int32_t x123 = INT32_MAX;
	static int16_t x124 = -1;
	int32_t t29 = 471;

    t29 = ((x121%x122)<=(x123%x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = 7684196LLU;
	int16_t x127 = -9;
	int64_t x128 = -52860LL;

    t30 = ((x125%x126)<=(x127%x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = INT32_MIN;
	int8_t x131 = INT8_MAX;
	volatile int32_t t31 = 155365124;

    t31 = ((x129%x130)<=(x131%x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x135 = -5;
	static int32_t x136 = -1;
	volatile int32_t t32 = 217;

    t32 = ((x133%x134)<=(x135%x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = 24120318597179LL;
	int32_t x138 = -1029012;
	int16_t x139 = 2262;
	int16_t x140 = -1;
	volatile int32_t t33 = 0;

    t33 = ((x137%x138)<=(x139%x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	static uint16_t x144 = 3004U;
	static volatile int32_t t34 = 2238996;

    t34 = ((x141%x142)<=(x143%x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x146 = -1;
	static int32_t t35 = 37725;

    t35 = ((x145%x146)<=(x147%x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x149 = 1221279U;
	int64_t x151 = INT64_MIN;
	int64_t x152 = -10722436446024LL;
	volatile int32_t t36 = 28;

    t36 = ((x149%x150)<=(x151%x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x153 = INT8_MIN;
	static volatile int8_t x154 = INT8_MAX;
	volatile int32_t x155 = INT32_MAX;
	static int16_t x156 = INT16_MIN;
	int32_t t37 = 43754;

    t37 = ((x153%x154)<=(x155%x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = 71880848U;
	uint32_t x158 = 66U;
	int16_t x159 = 4;
	int32_t t38 = -43;

    t38 = ((x157%x158)<=(x159%x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x161 = 1U;
	int64_t x162 = INT64_MAX;
	volatile uint32_t x163 = 90489U;
	static int8_t x164 = INT8_MIN;
	static int32_t t39 = 3442;

    t39 = ((x161%x162)<=(x163%x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = INT8_MIN;
	volatile int64_t x166 = -1LL;
	int16_t x168 = -23;
	static int32_t t40 = 314033;

    t40 = ((x165%x166)<=(x167%x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x169 = INT32_MAX;
	int32_t t41 = -12867691;

    t41 = ((x169%x170)<=(x171%x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x174 = -7;
	int32_t x175 = INT32_MAX;
	int8_t x176 = -1;
	int32_t t42 = 90593181;

    t42 = ((x173%x174)<=(x175%x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = INT16_MAX;
	int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MIN;
	static int64_t x180 = -9192048300527594LL;
	int32_t t43 = -11816;

    t43 = ((x177%x178)<=(x179%x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x181 = INT64_MAX;
	static uint32_t x182 = 603444U;
	int32_t x184 = -1;
	volatile int32_t t44 = 1014;

    t44 = ((x181%x182)<=(x183%x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = -1;
	int64_t x186 = -20973589131643LL;
	uint64_t x187 = UINT64_MAX;
	uint16_t x188 = 30U;

    t45 = ((x185%x186)<=(x187%x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = -6;
	int8_t x192 = -1;
	int32_t t46 = 3019848;

    t46 = ((x189%x190)<=(x191%x192));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x193 = 792;
	volatile uint8_t x194 = 18U;
	int32_t x195 = -18;
	int16_t x196 = -1;
	static int32_t t47 = -4292;

    t47 = ((x193%x194)<=(x195%x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = INT8_MAX;
	int8_t x198 = -1;
	int32_t x199 = INT32_MAX;
	volatile int8_t x200 = 1;
	volatile int32_t t48 = -174274523;

    t48 = ((x197%x198)<=(x199%x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x203 = -120178325LL;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t49 = -89252081;

    t49 = ((x201%x202)<=(x203%x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = INT16_MIN;
	static int32_t x206 = 1;
	uint32_t x207 = 3054U;
	int32_t x208 = 26993;
	int32_t t50 = -117753;

    t50 = ((x205%x206)<=(x207%x208));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = INT16_MAX;
	int64_t x210 = -1614688803826LL;
	int8_t x211 = 53;
	int8_t x212 = INT8_MAX;
	volatile int32_t t51 = -10093075;

    t51 = ((x209%x210)<=(x211%x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x213 = 37U;
	volatile uint16_t x215 = 431U;
	static volatile int32_t t52 = 378;

    t52 = ((x213%x214)<=(x215%x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = -3;
	uint64_t x218 = 149151880161LLU;
	int64_t x219 = INT64_MIN;
	int32_t t53 = 6;

    t53 = ((x217%x218)<=(x219%x220));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x221 = -1LL;
	uint64_t x222 = UINT64_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t54 = -3030106;

    t54 = ((x221%x222)<=(x223%x224));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	static int32_t t55 = -401;

    t55 = ((x225%x226)<=(x227%x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = INT8_MIN;
	static int8_t x230 = INT8_MIN;
	int32_t x232 = -1;
	volatile int32_t t56 = -126818;

    t56 = ((x229%x230)<=(x231%x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x233 = -98;
	static volatile int8_t x234 = INT8_MAX;
	int16_t x235 = INT16_MAX;
	static int32_t t57 = 302248143;

    t57 = ((x233%x234)<=(x235%x236));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x237 = 228U;
	static int8_t x239 = INT8_MIN;
	uint16_t x240 = 16139U;
	int32_t t58 = -21724;

    t58 = ((x237%x238)<=(x239%x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x241 = 9052LL;
	static uint64_t x243 = 71422398LLU;
	volatile int16_t x244 = INT16_MIN;

    t59 = ((x241%x242)<=(x243%x244));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x245 = 8U;
	int8_t x246 = INT8_MIN;
	static int32_t x247 = -31097912;
	int32_t x248 = INT32_MIN;

    t60 = ((x245%x246)<=(x247%x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x249 = 1373;
	static int64_t x250 = 4020561660LL;
	static int32_t x251 = INT32_MIN;
	static uint32_t x252 = 32993U;
	volatile int32_t t61 = -207136;

    t61 = ((x249%x250)<=(x251%x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x253 = UINT64_MAX;
	uint8_t x254 = UINT8_MAX;
	volatile uint64_t x255 = 28LLU;
	uint64_t x256 = 414148550LLU;
	volatile int32_t t62 = -5929709;

    t62 = ((x253%x254)<=(x255%x256));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x257 = -7LL;
	int32_t x258 = -1;
	uint16_t x259 = UINT16_MAX;
	int32_t t63 = 39;

    t63 = ((x257%x258)<=(x259%x260));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x262 = 4U;
	static int8_t x263 = -1;
	int64_t x264 = INT64_MAX;
	volatile int32_t t64 = 39;

    t64 = ((x261%x262)<=(x263%x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x266 = 56U;
	int8_t x267 = -1;
	int16_t x268 = INT16_MIN;

    t65 = ((x265%x266)<=(x267%x268));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x269 = INT16_MIN;
	static uint32_t x270 = UINT32_MAX;
	volatile uint32_t x271 = UINT32_MAX;
	static int8_t x272 = INT8_MIN;
	static volatile int32_t t66 = 50608;

    t66 = ((x269%x270)<=(x271%x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x275 = 868LL;
	static int16_t x276 = INT16_MAX;

    t67 = ((x273%x274)<=(x275%x276));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = 1305605LL;
	uint8_t x278 = UINT8_MAX;
	volatile int32_t t68 = -50360524;

    t68 = ((x277%x278)<=(x279%x280));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x282 = INT8_MIN;
	uint8_t x283 = 77U;
	int8_t x284 = INT8_MAX;
	int32_t t69 = 95;

    t69 = ((x281%x282)<=(x283%x284));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x285 = INT16_MIN;
	int16_t x287 = INT16_MIN;
	int64_t x288 = INT64_MIN;
	int32_t t70 = 12978024;

    t70 = ((x285%x286)<=(x287%x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x289 = 27U;
	volatile int8_t x290 = INT8_MAX;
	int32_t x291 = 54076;
	int64_t x292 = -1LL;
	int32_t t71 = -3202301;

    t71 = ((x289%x290)<=(x291%x292));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x294 = INT32_MIN;
	volatile int64_t x296 = INT64_MIN;

    t72 = ((x293%x294)<=(x295%x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x297 = INT8_MAX;
	volatile int64_t x299 = -79629189561LL;
	volatile int16_t x300 = 2255;
	volatile int32_t t73 = 1920;

    t73 = ((x297%x298)<=(x299%x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = -1;
	int32_t x302 = INT32_MIN;
	int64_t x303 = INT64_MIN;
	static int32_t x304 = INT32_MIN;
	int32_t t74 = -1016769488;

    t74 = ((x301%x302)<=(x303%x304));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x305 = UINT64_MAX;
	int32_t x306 = INT32_MAX;
	volatile int8_t x307 = -1;
	int32_t x308 = INT32_MIN;
	static int32_t t75 = 5128;

    t75 = ((x305%x306)<=(x307%x308));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x309 = UINT16_MAX;
	int64_t x310 = INT64_MIN;
	int8_t x311 = INT8_MAX;
	volatile int64_t x312 = INT64_MAX;

    t76 = ((x309%x310)<=(x311%x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x313 = -3LL;
	static int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = UINT16_MAX;
	int32_t t77 = 3809795;

    t77 = ((x313%x314)<=(x315%x316));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x317 = 23U;
	int64_t x319 = -1630549LL;
	static int32_t x320 = -1;
	static volatile int32_t t78 = 231470348;

    t78 = ((x317%x318)<=(x319%x320));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x322 = INT16_MIN;
	static int8_t x323 = INT8_MAX;
	volatile int32_t x324 = INT32_MAX;
	int32_t t79 = 50;

    t79 = ((x321%x322)<=(x323%x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x325 = 1U;
	static int32_t x326 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	int32_t t80 = 40818;

    t80 = ((x325%x326)<=(x327%x328));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x329 = UINT64_MAX;
	static uint32_t x330 = 33436U;
	int16_t x332 = -1;
	static int32_t t81 = -728816;

    t81 = ((x329%x330)<=(x331%x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x334 = UINT32_MAX;
	static int32_t x336 = INT32_MAX;
	static int32_t t82 = 1;

    t82 = ((x333%x334)<=(x335%x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x338 = 1059257246LLU;
	int64_t x339 = -255885365LL;
	int16_t x340 = -6778;
	int32_t t83 = 106767670;

    t83 = ((x337%x338)<=(x339%x340));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x345 = 865740578U;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = INT64_MAX;
	volatile int32_t t84 = 403632;

    t84 = ((x345%x346)<=(x347%x348));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x349 = UINT64_MAX;
	uint32_t x350 = 588359228U;
	volatile uint64_t x352 = UINT64_MAX;
	volatile int32_t t85 = -32011666;

    t85 = ((x349%x350)<=(x351%x352));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x355 = INT8_MIN;
	int32_t t86 = 0;

    t86 = ((x353%x354)<=(x355%x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x359 = -121;
	static uint64_t x360 = 5LLU;
	int32_t t87 = -1826;

    t87 = ((x357%x358)<=(x359%x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x361 = INT32_MAX;
	int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MIN;

    t88 = ((x361%x362)<=(x363%x364));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x365 = -1;
	static int64_t x366 = INT64_MIN;
	int64_t x367 = INT64_MAX;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t89 = 385;

    t89 = ((x365%x366)<=(x367%x368));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x369 = UINT64_MAX;
	int16_t x371 = INT16_MIN;
	static volatile int32_t t90 = 12;

    t90 = ((x369%x370)<=(x371%x372));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x373 = 19U;
	uint32_t x374 = 167736U;
	static int32_t t91 = -182;

    t91 = ((x373%x374)<=(x375%x376));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x377 = 22907115373175LLU;
	int32_t x378 = -14271;
	volatile int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MAX;

    t92 = ((x377%x378)<=(x379%x380));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x381 = -1;
	volatile int8_t x382 = INT8_MAX;
	uint16_t x383 = UINT16_MAX;

    t93 = ((x381%x382)<=(x383%x384));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x385 = 413234426LL;
	static int8_t x386 = 4;
	int32_t x387 = INT32_MIN;
	uint16_t x388 = 20642U;
	static int32_t t94 = -51;

    t94 = ((x385%x386)<=(x387%x388));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x390 = UINT64_MAX;
	uint32_t x391 = 21257U;
	uint32_t x392 = UINT32_MAX;

    t95 = ((x389%x390)<=(x391%x392));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = INT8_MIN;
	int32_t x394 = INT32_MIN;
	volatile int64_t x395 = INT64_MAX;
	int32_t x396 = -167062;
	int32_t t96 = 3008;

    t96 = ((x393%x394)<=(x395%x396));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x397 = INT8_MAX;
	uint32_t x398 = UINT32_MAX;
	uint16_t x399 = UINT16_MAX;
	volatile int32_t t97 = 86319;

    t97 = ((x397%x398)<=(x399%x400));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x401 = -15;
	static uint32_t x402 = 41U;
	int64_t x403 = INT64_MIN;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t98 = 581799;

    t98 = ((x401%x402)<=(x403%x404));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x405 = 0;
	static int8_t x406 = INT8_MIN;
	static int8_t x407 = INT8_MAX;
	uint32_t x408 = UINT32_MAX;
	int32_t t99 = 7;

    t99 = ((x405%x406)<=(x407%x408));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x409 = 33689128;
	int8_t x410 = -1;
	static volatile int8_t x412 = INT8_MIN;
	volatile int32_t t100 = 72426591;

    t100 = ((x409%x410)<=(x411%x412));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x413 = UINT32_MAX;
	int64_t x414 = INT64_MAX;
	static int8_t x415 = 49;
	static uint16_t x416 = 380U;

    t101 = ((x413%x414)<=(x415%x416));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x419 = 86393LLU;
	int16_t x420 = -1;
	volatile int32_t t102 = 169630753;

    t102 = ((x417%x418)<=(x419%x420));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x421 = -1;
	int32_t x422 = INT32_MIN;
	int64_t x424 = -1LL;
	int32_t t103 = 3;

    t103 = ((x421%x422)<=(x423%x424));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x425 = INT32_MIN;
	uint64_t x426 = UINT64_MAX;
	int16_t x427 = INT16_MIN;
	int64_t x428 = -1LL;
	int32_t t104 = 161573374;

    t104 = ((x425%x426)<=(x427%x428));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x429 = 39LLU;
	volatile int32_t x430 = -1;
	int16_t x432 = 1;
	int32_t t105 = -7198;

    t105 = ((x429%x430)<=(x431%x432));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x433 = -1;
	int64_t x434 = -202808215342LL;
	int64_t x435 = INT64_MIN;
	int32_t t106 = -3721;

    t106 = ((x433%x434)<=(x435%x436));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x437 = 103U;
	volatile uint32_t x440 = 535445837U;

    t107 = ((x437%x438)<=(x439%x440));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x441 = -4;
	static volatile int32_t t108 = -12727116;

    t108 = ((x441%x442)<=(x443%x444));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x445 = 2U;
	int64_t x447 = 21354837127353LL;
	int32_t x448 = -59334;
	volatile int32_t t109 = 3559930;

    t109 = ((x445%x446)<=(x447%x448));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x449 = INT16_MIN;
	int32_t x451 = INT32_MIN;
	uint8_t x452 = UINT8_MAX;
	static volatile int32_t t110 = 5;

    t110 = ((x449%x450)<=(x451%x452));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x455 = INT8_MIN;
	int32_t x456 = 1327;
	volatile int32_t t111 = -17829;

    t111 = ((x453%x454)<=(x455%x456));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x457 = -27;
	static uint8_t x458 = 1U;
	static int32_t x460 = -1;

    t112 = ((x457%x458)<=(x459%x460));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x461 = 4225950707975440LL;
	uint32_t x462 = 516604U;
	uint64_t x463 = 484529LLU;
	volatile int8_t x464 = -56;
	static int32_t t113 = -8101264;

    t113 = ((x461%x462)<=(x463%x464));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x465 = INT16_MAX;
	uint8_t x466 = 4U;
	static int32_t x467 = INT32_MIN;
	static int64_t x468 = INT64_MIN;
	static int32_t t114 = 0;

    t114 = ((x465%x466)<=(x467%x468));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x470 = UINT32_MAX;
	static uint8_t x471 = UINT8_MAX;

    t115 = ((x469%x470)<=(x471%x472));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x473 = 1;
	int8_t x474 = INT8_MIN;
	uint32_t x475 = 0U;
	static volatile int32_t t116 = -7064;

    t116 = ((x473%x474)<=(x475%x476));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x477 = INT8_MIN;
	static volatile int32_t x478 = INT32_MIN;
	int32_t x480 = 122;

    t117 = ((x477%x478)<=(x479%x480));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x481 = 2;
	static uint64_t x482 = 8510730115527LLU;
	static uint16_t x484 = 2254U;

    t118 = ((x481%x482)<=(x483%x484));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x485 = -1;
	static int64_t x486 = INT64_MAX;
	static uint64_t x487 = UINT64_MAX;
	uint64_t x488 = 191LLU;
	int32_t t119 = -48641166;

    t119 = ((x485%x486)<=(x487%x488));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x489 = -28;
	static uint64_t x490 = UINT64_MAX;
	int64_t x491 = -1LL;
	uint32_t x492 = UINT32_MAX;
	static int32_t t120 = -468263;

    t120 = ((x489%x490)<=(x491%x492));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x493 = INT32_MIN;
	int8_t x494 = INT8_MAX;

    t121 = ((x493%x494)<=(x495%x496));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x501 = 503077U;
	int32_t x503 = INT32_MIN;
	static uint8_t x504 = 93U;
	static int32_t t122 = 3;

    t122 = ((x501%x502)<=(x503%x504));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x505 = 7862273950LLU;
	uint64_t x506 = 8978LLU;
	int8_t x507 = -1;
	volatile int8_t x508 = -1;
	volatile int32_t t123 = -2523;

    t123 = ((x505%x506)<=(x507%x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x509 = INT8_MIN;
	static volatile int64_t x511 = INT64_MAX;
	volatile uint16_t x512 = 4U;
	volatile int32_t t124 = 126;

    t124 = ((x509%x510)<=(x511%x512));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x513 = 477LLU;
	int32_t x514 = 1541;
	int16_t x515 = INT16_MAX;
	uint8_t x516 = UINT8_MAX;

    t125 = ((x513%x514)<=(x515%x516));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x517 = -58465LL;
	int8_t x518 = INT8_MIN;
	int8_t x519 = INT8_MAX;
	static volatile int32_t x520 = -1;
	int32_t t126 = 65987800;

    t126 = ((x517%x518)<=(x519%x520));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x521 = 14U;
	volatile uint16_t x522 = 4U;
	int8_t x523 = INT8_MIN;
	int32_t x524 = -84;
	static int32_t t127 = 356396884;

    t127 = ((x521%x522)<=(x523%x524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x525 = 143270890682083515LLU;
	uint32_t x526 = 5798U;
	static int16_t x527 = -1;
	int64_t x528 = INT64_MIN;
	int32_t t128 = -1414109;

    t128 = ((x525%x526)<=(x527%x528));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x529 = -7LL;
	static int32_t x530 = INT32_MAX;
	volatile int64_t x531 = INT64_MIN;
	int16_t x532 = INT16_MIN;
	volatile int32_t t129 = 1;

    t129 = ((x529%x530)<=(x531%x532));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x533 = 8U;
	volatile uint16_t x534 = UINT16_MAX;
	volatile int16_t x535 = INT16_MAX;
	int16_t x536 = -1;
	static volatile int32_t t130 = 372309697;

    t130 = ((x533%x534)<=(x535%x536));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x537 = 4816U;
	static uint16_t x538 = UINT16_MAX;
	volatile uint8_t x539 = 2U;
	volatile uint32_t x540 = 467U;
	static volatile int32_t t131 = 5755;

    t131 = ((x537%x538)<=(x539%x540));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x542 = 6U;
	uint64_t x544 = 2LLU;
	static int32_t t132 = -1406;

    t132 = ((x541%x542)<=(x543%x544));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x546 = INT32_MAX;
	static volatile int32_t x547 = INT32_MAX;
	int16_t x548 = -1;

    t133 = ((x545%x546)<=(x547%x548));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x550 = INT64_MIN;
	static uint32_t x551 = 14U;
	static uint32_t x552 = UINT32_MAX;
	volatile int32_t t134 = 262;

    t134 = ((x549%x550)<=(x551%x552));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x553 = INT32_MIN;
	volatile uint8_t x554 = 4U;
	uint64_t x556 = 602LLU;
	volatile int32_t t135 = 1;

    t135 = ((x553%x554)<=(x555%x556));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x557 = INT64_MIN;
	static uint16_t x558 = UINT16_MAX;
	volatile int32_t x559 = 0;
	int16_t x560 = INT16_MAX;

    t136 = ((x557%x558)<=(x559%x560));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x561 = 11U;
	uint16_t x562 = 26U;
	volatile uint32_t x563 = 31036156U;
	int32_t x564 = INT32_MIN;
	volatile int32_t t137 = 312;

    t137 = ((x561%x562)<=(x563%x564));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x565 = INT32_MIN;
	static int32_t x566 = INT32_MIN;
	uint64_t x567 = UINT64_MAX;
	static volatile int32_t x568 = INT32_MAX;

    t138 = ((x565%x566)<=(x567%x568));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x570 = INT32_MAX;
	uint32_t x571 = 798U;
	static int16_t x572 = -2508;

    t139 = ((x569%x570)<=(x571%x572));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x574 = INT64_MAX;
	uint8_t x575 = 1U;
	static int32_t x576 = INT32_MIN;

    t140 = ((x573%x574)<=(x575%x576));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x577 = INT32_MAX;
	int64_t x579 = -88576147295LL;
	volatile int16_t x580 = INT16_MIN;
	int32_t t141 = 12587072;

    t141 = ((x577%x578)<=(x579%x580));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x581 = INT32_MIN;
	int8_t x583 = -1;
	static volatile uint8_t x584 = 58U;
	volatile int32_t t142 = -33982474;

    t142 = ((x581%x582)<=(x583%x584));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x587 = UINT8_MAX;
	int32_t x588 = -1;

    t143 = ((x585%x586)<=(x587%x588));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x589 = 18768186LLU;
	static int16_t x590 = 12825;
	int16_t x591 = 4712;
	static int64_t x592 = INT64_MAX;
	int32_t t144 = 264728094;

    t144 = ((x589%x590)<=(x591%x592));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x593 = INT16_MAX;
	int64_t x594 = -1LL;
	int8_t x595 = INT8_MAX;
	volatile int32_t t145 = -4693044;

    t145 = ((x593%x594)<=(x595%x596));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x597 = INT16_MIN;
	volatile int16_t x598 = INT16_MIN;
	int32_t x599 = INT32_MIN;
	uint64_t x600 = 10884529404LLU;
	int32_t t146 = -1014987;

    t146 = ((x597%x598)<=(x599%x600));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x601 = INT8_MIN;
	int32_t x602 = INT32_MIN;
	int16_t x603 = INT16_MIN;
	volatile int32_t t147 = 6843103;

    t147 = ((x601%x602)<=(x603%x604));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x606 = -77719701906LL;
	int16_t x608 = -496;
	volatile int32_t t148 = -100;

    t148 = ((x605%x606)<=(x607%x608));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x610 = INT32_MAX;
	int32_t x611 = -1;
	static int64_t x612 = -1223119632112987716LL;
	int32_t t149 = 1;

    t149 = ((x609%x610)<=(x611%x612));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x613 = -1;
	int16_t x614 = INT16_MAX;
	volatile uint64_t x615 = 0LLU;
	static int8_t x616 = INT8_MAX;

    t150 = ((x613%x614)<=(x615%x616));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x617 = -1LL;
	volatile uint8_t x618 = UINT8_MAX;
	uint64_t x619 = UINT64_MAX;
	uint16_t x620 = 36U;
	volatile int32_t t151 = -31565;

    t151 = ((x617%x618)<=(x619%x620));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x621 = INT16_MIN;
	int32_t x622 = INT32_MIN;
	int16_t x623 = INT16_MAX;

    t152 = ((x621%x622)<=(x623%x624));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x625 = -1LL;
	int8_t x626 = 6;
	int32_t x627 = -6880197;
	uint64_t x628 = 149970628163735LLU;
	volatile int32_t t153 = 92;

    t153 = ((x625%x626)<=(x627%x628));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x629 = 12U;
	volatile uint64_t x630 = 507687LLU;
	static int64_t x631 = 4332052321290LL;
	uint32_t x632 = 2U;
	volatile int32_t t154 = -183510177;

    t154 = ((x629%x630)<=(x631%x632));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x633 = UINT16_MAX;
	int8_t x634 = INT8_MIN;
	uint64_t x635 = 707817573068572LLU;
	volatile int32_t t155 = 1004021895;

    t155 = ((x633%x634)<=(x635%x636));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x637 = -1;
	static int32_t x639 = 20444714;
	uint8_t x640 = 3U;

    t156 = ((x637%x638)<=(x639%x640));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x641 = 1;
	int16_t x642 = INT16_MIN;
	int8_t x643 = -53;

    t157 = ((x641%x642)<=(x643%x644));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x645 = INT32_MIN;
	int8_t x646 = -1;
	volatile int32_t t158 = 1;

    t158 = ((x645%x646)<=(x647%x648));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x649 = 316U;
	int32_t x650 = 1258;
	static int32_t x651 = INT32_MIN;
	uint8_t x652 = UINT8_MAX;
	volatile int32_t t159 = -3979895;

    t159 = ((x649%x650)<=(x651%x652));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x653 = INT16_MAX;
	static int64_t x654 = INT64_MAX;
	uint8_t x655 = UINT8_MAX;
	int32_t x656 = INT32_MAX;
	int32_t t160 = -75294;

    t160 = ((x653%x654)<=(x655%x656));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x657 = 57165386874951LLU;
	int32_t x659 = INT32_MAX;
	static uint32_t x660 = 1456849507U;

    t161 = ((x657%x658)<=(x659%x660));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x661 = -1346461929017744195LL;
	int16_t x662 = INT16_MIN;
	int64_t x663 = 27002147170LL;
	uint16_t x664 = UINT16_MAX;
	int32_t t162 = -6547485;

    t162 = ((x661%x662)<=(x663%x664));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x665 = UINT32_MAX;
	int16_t x667 = -1;
	static uint32_t x668 = 20021597U;

    t163 = ((x665%x666)<=(x667%x668));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x669 = INT8_MAX;
	static volatile int64_t x670 = INT64_MIN;
	static int8_t x672 = 13;

    t164 = ((x669%x670)<=(x671%x672));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x677 = INT16_MIN;
	static int8_t x679 = INT8_MIN;

    t165 = ((x677%x678)<=(x679%x680));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x681 = 43;
	uint64_t x682 = 52548537626LLU;
	int8_t x683 = INT8_MIN;
	uint32_t x684 = 204U;
	volatile int32_t t166 = 270;

    t166 = ((x681%x682)<=(x683%x684));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x685 = -28352;
	int16_t x687 = INT16_MIN;
	int16_t x688 = INT16_MIN;
	int32_t t167 = 62;

    t167 = ((x685%x686)<=(x687%x688));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x689 = -1910LL;
	int16_t x690 = INT16_MAX;
	int8_t x691 = 1;
	static uint16_t x692 = 10U;
	int32_t t168 = 1;

    t168 = ((x689%x690)<=(x691%x692));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x695 = UINT16_MAX;
	int64_t x696 = INT64_MAX;
	int32_t t169 = -28774;

    t169 = ((x693%x694)<=(x695%x696));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x697 = INT32_MIN;
	static uint32_t x698 = UINT32_MAX;
	static uint8_t x699 = UINT8_MAX;
	int8_t x700 = -22;
	volatile int32_t t170 = -122930050;

    t170 = ((x697%x698)<=(x699%x700));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x701 = 13934U;
	static volatile int32_t x702 = INT32_MAX;
	static uint16_t x703 = 6138U;
	uint8_t x704 = 49U;
	volatile int32_t t171 = 52670;

    t171 = ((x701%x702)<=(x703%x704));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x705 = 7807;
	int8_t x706 = -1;
	uint32_t x708 = 75374419U;
	volatile int32_t t172 = 11267;

    t172 = ((x705%x706)<=(x707%x708));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x710 = INT16_MAX;
	int32_t x711 = INT32_MIN;
	int16_t x712 = INT16_MAX;
	volatile int32_t t173 = -354;

    t173 = ((x709%x710)<=(x711%x712));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x714 = 121131U;
	static int64_t x715 = INT64_MIN;
	int32_t x716 = -1;

    t174 = ((x713%x714)<=(x715%x716));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x718 = -1;
	int32_t t175 = -97776;

    t175 = ((x717%x718)<=(x719%x720));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x722 = INT16_MIN;
	static int64_t x723 = -1LL;
	int32_t x724 = INT32_MIN;
	int32_t t176 = -13178247;

    t176 = ((x721%x722)<=(x723%x724));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x726 = -1LL;
	int16_t x727 = -1;

    t177 = ((x725%x726)<=(x727%x728));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x729 = INT8_MIN;
	uint32_t x730 = 6268U;
	uint8_t x731 = 1U;
	volatile int32_t x732 = INT32_MAX;
	volatile int32_t t178 = -51;

    t178 = ((x729%x730)<=(x731%x732));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x733 = 19619LL;
	int8_t x734 = INT8_MAX;
	int32_t x735 = 1122;
	uint64_t x736 = 89554783LLU;
	int32_t t179 = 29194105;

    t179 = ((x733%x734)<=(x735%x736));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x737 = 0;
	int32_t x738 = -1;
	static volatile int16_t x739 = INT16_MAX;
	int64_t x740 = -341482379LL;

    t180 = ((x737%x738)<=(x739%x740));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x741 = 539705847967184LL;
	static uint8_t x742 = 7U;
	volatile int16_t x743 = -1;
	int64_t x744 = INT64_MAX;
	int32_t t181 = 46;

    t181 = ((x741%x742)<=(x743%x744));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x745 = -1;
	int16_t x746 = INT16_MAX;
	int8_t x747 = INT8_MIN;
	volatile int32_t x748 = -3188439;
	int32_t t182 = -3211657;

    t182 = ((x745%x746)<=(x747%x748));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x749 = INT32_MAX;
	uint16_t x750 = 541U;
	int32_t x751 = -1;
	uint16_t x752 = UINT16_MAX;
	static int32_t t183 = -86;

    t183 = ((x749%x750)<=(x751%x752));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x753 = INT32_MAX;
	int16_t x754 = INT16_MIN;
	int32_t x755 = 53577687;
	uint8_t x756 = 1U;
	int32_t t184 = -526;

    t184 = ((x753%x754)<=(x755%x756));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x757 = INT8_MIN;
	volatile int64_t x758 = INT64_MIN;
	uint16_t x759 = 0U;
	int32_t x760 = INT32_MAX;
	int32_t t185 = -207708;

    t185 = ((x757%x758)<=(x759%x760));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x761 = -1;
	int8_t x762 = INT8_MAX;
	int64_t x763 = 6368069180497LL;
	int64_t x764 = 1019746821LL;
	static volatile int32_t t186 = 166;

    t186 = ((x761%x762)<=(x763%x764));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x765 = 7U;
	int16_t x766 = -1;
	static int8_t x767 = -1;
	volatile uint8_t x768 = 1U;
	volatile int32_t t187 = -1865396;

    t187 = ((x765%x766)<=(x767%x768));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x769 = -1LL;
	static volatile int32_t x771 = 11;
	int16_t x772 = INT16_MIN;
	static int32_t t188 = -113;

    t188 = ((x769%x770)<=(x771%x772));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x773 = 1;
	uint32_t x774 = 8U;
	int8_t x775 = -63;
	int8_t x776 = 5;
	int32_t t189 = -12;

    t189 = ((x773%x774)<=(x775%x776));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x781 = 102U;
	int32_t x782 = INT32_MIN;
	static int64_t x783 = INT64_MAX;
	int32_t x784 = -2386;

    t190 = ((x781%x782)<=(x783%x784));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x786 = INT64_MAX;
	static uint64_t x787 = 280339770629194LLU;
	int16_t x788 = -1;

    t191 = ((x785%x786)<=(x787%x788));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x789 = 1;
	uint32_t x791 = 11U;
	static uint32_t x792 = 217U;
	int32_t t192 = 155069;

    t192 = ((x789%x790)<=(x791%x792));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x793 = 847206050250749LL;
	static int64_t x794 = INT64_MIN;
	int8_t x795 = -6;
	int16_t x796 = -1;
	volatile int32_t t193 = -1936960;

    t193 = ((x793%x794)<=(x795%x796));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x797 = INT32_MIN;
	volatile int32_t x798 = INT32_MIN;
	int64_t x799 = -17026304148606907LL;
	uint32_t x800 = 857843890U;
	volatile int32_t t194 = -481605637;

    t194 = ((x797%x798)<=(x799%x800));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x801 = 254;
	int16_t x802 = INT16_MIN;
	int64_t x803 = -1LL;
	int8_t x804 = INT8_MIN;

    t195 = ((x801%x802)<=(x803%x804));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x805 = INT16_MAX;
	volatile int32_t t196 = -1499130;

    t196 = ((x805%x806)<=(x807%x808));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x809 = INT8_MAX;
	uint8_t x812 = UINT8_MAX;
	static int32_t t197 = 3590270;

    t197 = ((x809%x810)<=(x811%x812));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x813 = -824;
	int8_t x814 = -7;
	int32_t x815 = INT32_MAX;
	uint32_t x816 = 884556U;
	int32_t t198 = 0;

    t198 = ((x813%x814)<=(x815%x816));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x817 = INT8_MAX;
	int8_t x818 = -1;
	volatile int16_t x819 = INT16_MIN;

    t199 = ((x817%x818)<=(x819%x820));

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

