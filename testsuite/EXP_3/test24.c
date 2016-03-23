
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

int16_t x3 = INT16_MAX;
volatile int16_t x4 = INT16_MIN;
int32_t t0 = -54;
volatile uint16_t x11 = UINT16_MAX;
static int8_t x24 = -5;
int32_t x37 = INT32_MIN;
uint32_t x39 = 101446U;
static int32_t t7 = 231;
int32_t x54 = INT32_MAX;
static int16_t x55 = INT16_MIN;
volatile int32_t t9 = -1;
int8_t x69 = -1;
int32_t t11 = -341239028;
uint32_t x75 = 1545585255U;
volatile int8_t x78 = -1;
int64_t x81 = INT64_MIN;
int16_t x83 = 130;
int8_t x109 = 0;
uint32_t x114 = 431154260U;
uint64_t x117 = 918323015535429LLU;
volatile int8_t x119 = 2;
int64_t x121 = -1LL;
int16_t x124 = INT16_MIN;
volatile int32_t t23 = 4337;
int8_t x129 = -1;
int16_t x133 = -1;
volatile int32_t t26 = 34;
int16_t x148 = -1;
volatile int32_t t28 = 11917785;
int32_t x153 = 29638860;
uint8_t x158 = 2U;
int64_t x167 = INT64_MAX;
int8_t x173 = INT8_MIN;
static int32_t x176 = 11;
int32_t x179 = -1;
static volatile int16_t x193 = -712;
int16_t x195 = -1;
static volatile int32_t t38 = -289320;
int8_t x199 = INT8_MAX;
static uint8_t x201 = UINT8_MAX;
static int8_t x218 = -16;
static int32_t x222 = INT32_MIN;
static volatile int32_t t45 = 0;
int64_t x232 = -1LL;
uint64_t x241 = UINT64_MAX;
volatile int32_t t48 = -826845725;
static uint8_t x247 = 109U;
int32_t x248 = INT32_MIN;
int64_t x269 = 2LL;
int32_t x280 = INT32_MIN;
uint8_t x281 = UINT8_MAX;
int32_t x286 = -1;
uint64_t x297 = 1912136483941319431LLU;
int64_t x298 = INT64_MIN;
int8_t x317 = -1;
static int32_t t62 = 38;
volatile uint16_t x322 = 145U;
static int64_t x323 = -21512588LL;
int64_t x327 = -467LL;
uint32_t x330 = 1351142U;
uint64_t x332 = UINT64_MAX;
int16_t x333 = INT16_MIN;
int8_t x337 = -1;
volatile uint16_t x340 = 12U;
uint64_t x342 = UINT64_MAX;
int32_t x344 = -63081188;
int64_t x369 = INT64_MIN;
static int32_t t76 = 1;
int64_t x378 = -1380681LL;
volatile int32_t t77 = -252958361;
uint64_t x386 = 3378621395LLU;
int16_t x387 = INT16_MIN;
uint64_t x389 = 5471020690725011405LLU;
int16_t x392 = INT16_MIN;
int32_t x393 = 7326637;
static volatile int16_t x394 = 3749;
int16_t x398 = -220;
volatile int16_t x401 = INT16_MIN;
uint8_t x421 = 72U;
uint16_t x422 = UINT16_MAX;
volatile int16_t x423 = INT16_MIN;
uint16_t x424 = 1076U;
int32_t t88 = 1;
int64_t x430 = INT64_MIN;
volatile uint32_t x436 = 185098U;
uint16_t x438 = 18186U;
volatile int32_t x440 = -37;
uint16_t x451 = 9U;
int16_t x454 = 10;
uint64_t x456 = UINT64_MAX;
uint32_t x460 = 14326U;
volatile int16_t x462 = 37;
int32_t x465 = -3396025;
uint64_t x468 = 119914856081624LLU;
volatile int32_t t99 = -497868631;
int32_t t100 = 315029419;
volatile int8_t x487 = INT8_MAX;
uint16_t x491 = 2623U;
int32_t x495 = INT32_MAX;
static int32_t x499 = INT32_MAX;
static int16_t x500 = -1;
int16_t x501 = INT16_MAX;
int8_t x506 = -1;
static int32_t x518 = 167;
int16_t x521 = -1;
volatile int64_t x524 = -1LL;
uint64_t x531 = 619LLU;
int64_t x532 = -197365221LL;
uint64_t x540 = 67308892252LLU;
static uint64_t x544 = UINT64_MAX;
volatile int32_t t113 = -22;
int8_t x547 = INT8_MIN;
volatile int32_t t114 = 172598;
int16_t x550 = INT16_MAX;
int16_t x553 = 5759;
int16_t x554 = 242;
uint16_t x559 = UINT16_MAX;
int32_t x560 = -1;
int16_t x569 = 0;
static uint64_t x573 = 119927344470617653LLU;
static uint8_t x581 = 10U;
int32_t x583 = INT32_MAX;
int64_t x584 = -1LL;
int64_t x590 = -6LL;
static int64_t x604 = INT64_MIN;
int16_t x608 = INT16_MAX;
volatile int32_t t125 = 1896466;
int32_t t128 = -6560150;
static volatile uint64_t x634 = UINT64_MAX;
volatile uint16_t x648 = UINT16_MAX;
volatile int32_t t133 = -1596;
uint16_t x667 = UINT16_MAX;
volatile int32_t t136 = 110860604;
int32_t t137 = -974673;
int8_t x675 = INT8_MIN;
static volatile int16_t x677 = -1;
int32_t t140 = -241890;
volatile int64_t x685 = -22653398273LL;
int32_t t141 = 384212376;
uint16_t x693 = 18046U;
int16_t x701 = -1;
volatile uint64_t x703 = 14652358974LLU;
uint8_t x704 = 18U;
volatile int16_t x712 = -1;
volatile uint64_t x721 = 599560LLU;
volatile int32_t t149 = 206;
int32_t x735 = INT32_MAX;
static volatile uint64_t x740 = 15283927LLU;
int32_t t151 = 13556;
static int32_t t152 = -451761;
static uint32_t x751 = 80U;
volatile int16_t x755 = 9;
int16_t x764 = INT16_MIN;
static int32_t x772 = 0;
uint8_t x775 = 115U;
static int32_t x776 = INT32_MIN;
uint64_t x782 = 20973624LLU;
static int8_t x786 = INT8_MAX;
static int32_t x788 = 16;
static uint32_t x792 = 6678251U;
static volatile uint32_t x793 = UINT32_MAX;
uint16_t x796 = 732U;
uint32_t x798 = 874014U;
static uint64_t x800 = 338029496LLU;
int32_t t165 = 152297189;
uint8_t x801 = 8U;
int32_t x804 = 5935;
volatile int32_t t166 = 14254;
int32_t x806 = INT32_MAX;
int8_t x816 = INT8_MAX;
int32_t t168 = -2547;
static int64_t x818 = INT64_MIN;
uint64_t x826 = 5647817541LLU;
int16_t x835 = INT16_MAX;
static int32_t t172 = -25478090;
volatile uint16_t x837 = 59U;
int16_t x839 = INT16_MAX;
static int32_t t174 = -31;
uint64_t x853 = 7661556700LLU;
int32_t t175 = 76124523;
int32_t x858 = 20376;
volatile int32_t t176 = -1416;
static int16_t x880 = INT16_MIN;
int8_t x881 = 0;
volatile int8_t x882 = INT8_MIN;
int8_t x883 = INT8_MIN;
int16_t x884 = INT16_MAX;
uint32_t x893 = 0U;
static uint32_t x897 = 256661U;
uint32_t x907 = 17313846U;
volatile int32_t t184 = 4;
static uint32_t x920 = 131066U;
uint64_t x924 = 3619453210LLU;
int32_t t187 = 0;
int64_t x925 = -19247LL;
static uint16_t x926 = 13U;
volatile int32_t t189 = -682298;
volatile int32_t x941 = -15;
uint32_t x942 = UINT32_MAX;
static int32_t x943 = INT32_MIN;
volatile uint64_t x944 = UINT64_MAX;
volatile int32_t t190 = 49;
int16_t x948 = INT16_MIN;
int64_t x958 = INT64_MAX;
int64_t x976 = -4900167LL;
int32_t t194 = -23344;
int32_t t195 = -126348;
uint32_t x982 = 10473024U;
uint8_t x983 = UINT8_MAX;
volatile int32_t t196 = -23520558;
int64_t x989 = INT64_MAX;
static uint16_t x990 = 793U;
int8_t x991 = INT8_MIN;
int16_t x993 = INT16_MIN;


void f0(void) {
    	uint8_t x1 = 11U;
	volatile int16_t x2 = INT16_MIN;

    t0 = ((x1-x2)<=(x3+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	static volatile uint8_t x6 = 10U;
	volatile int32_t x7 = INT32_MIN;
	int64_t x8 = -34459541LL;
	int32_t t1 = 253;

    t1 = ((x5-x6)<=(x7+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	uint8_t x10 = UINT8_MAX;
	int16_t x12 = -1;
	volatile int32_t t2 = -167;

    t2 = ((x9-x10)<=(x11+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 11874LL;
	volatile uint64_t x14 = 8146126190766076192LLU;
	int64_t x15 = INT64_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 22505;

    t3 = ((x13-x14)<=(x15+x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	static int64_t x18 = 1307822256LL;
	volatile int16_t x19 = INT16_MIN;
	static int32_t x20 = -1;
	volatile int32_t t4 = -9;

    t4 = ((x17-x18)<=(x19+x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	static uint8_t x22 = UINT8_MAX;
	volatile int64_t x23 = 50170415270LL;
	int32_t t5 = -9;

    t5 = ((x21-x22)<=(x23+x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -1;
	int16_t x30 = 23;
	static uint32_t x31 = UINT32_MAX;
	int64_t x32 = INT64_MIN;
	int32_t t6 = 114;

    t6 = ((x29-x30)<=(x31+x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x38 = 4193663U;
	int32_t x40 = -1;

    t7 = ((x37-x38)<=(x39+x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x53 = 0;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t8 = 145;

    t8 = ((x53-x54)<=(x55+x56));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x57 = -1;
	static uint32_t x58 = UINT32_MAX;
	static volatile uint8_t x59 = 100U;
	uint64_t x60 = 117204LLU;

    t9 = ((x57-x58)<=(x59+x60));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x61 = 13U;
	volatile int8_t x62 = INT8_MIN;
	uint64_t x63 = UINT64_MAX;
	static volatile int16_t x64 = INT16_MIN;
	int32_t t10 = -24;

    t10 = ((x61-x62)<=(x63+x64));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x70 = INT64_MAX;
	int8_t x71 = -1;
	static int64_t x72 = -1LL;

    t11 = ((x69-x70)<=(x71+x72));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x73 = 2925666806404531LL;
	uint64_t x74 = 35650LLU;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t12 = -59;

    t12 = ((x73-x74)<=(x75+x76));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x77 = -103345;
	static volatile int16_t x79 = 5908;
	int8_t x80 = -1;
	int32_t t13 = 286693957;

    t13 = ((x77-x78)<=(x79+x80));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x82 = -1;
	int8_t x84 = INT8_MIN;
	int32_t t14 = -941;

    t14 = ((x81-x82)<=(x83+x84));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x85 = INT8_MIN;
	int32_t x86 = -1;
	volatile int16_t x87 = INT16_MIN;
	volatile int16_t x88 = INT16_MIN;
	int32_t t15 = 82594623;

    t15 = ((x85-x86)<=(x87+x88));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x89 = INT32_MIN;
	volatile int16_t x90 = INT16_MIN;
	volatile uint64_t x91 = 3210523763874401311LLU;
	uint8_t x92 = 54U;
	int32_t t16 = 2520179;

    t16 = ((x89-x90)<=(x91+x92));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x101 = 18556U;
	int8_t x102 = INT8_MIN;
	uint8_t x103 = 1U;
	int64_t x104 = INT64_MIN;
	volatile int32_t t17 = 303952582;

    t17 = ((x101-x102)<=(x103+x104));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint8_t x105 = UINT8_MAX;
	static uint64_t x106 = 1781961572279130349LLU;
	int32_t x107 = INT32_MIN;
	static uint32_t x108 = 1120882U;
	int32_t t18 = -303;

    t18 = ((x105-x106)<=(x107+x108));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x110 = 1609914421648060772LL;
	int16_t x111 = INT16_MIN;
	uint8_t x112 = 3U;
	volatile int32_t t19 = 1;

    t19 = ((x109-x110)<=(x111+x112));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x113 = UINT8_MAX;
	volatile uint32_t x115 = 148602U;
	volatile uint64_t x116 = UINT64_MAX;
	int32_t t20 = 130496;

    t20 = ((x113-x114)<=(x115+x116));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x118 = INT32_MIN;
	static int32_t x120 = INT32_MIN;
	volatile int32_t t21 = -745;

    t21 = ((x117-x118)<=(x119+x120));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x122 = UINT8_MAX;
	volatile uint16_t x123 = 2117U;
	static volatile int32_t t22 = -893;

    t22 = ((x121-x122)<=(x123+x124));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x125 = UINT32_MAX;
	int16_t x126 = INT16_MIN;
	uint32_t x127 = 340368406U;
	uint16_t x128 = 4921U;

    t23 = ((x125-x126)<=(x127+x128));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x130 = INT32_MIN;
	int8_t x131 = -1;
	static uint16_t x132 = UINT16_MAX;
	int32_t t24 = 65;

    t24 = ((x129-x130)<=(x131+x132));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x134 = 0U;
	uint16_t x135 = UINT16_MAX;
	static int32_t x136 = -4051749;
	static volatile int32_t t25 = 3543;

    t25 = ((x133-x134)<=(x135+x136));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x137 = INT64_MIN;
	static uint64_t x138 = UINT64_MAX;
	int16_t x139 = -1;
	int8_t x140 = -30;

    t26 = ((x137-x138)<=(x139+x140));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x141 = INT8_MIN;
	int64_t x142 = -2142268032703778505LL;
	static int64_t x143 = -7690919085LL;
	int8_t x144 = -1;
	static volatile int32_t t27 = 854202170;

    t27 = ((x141-x142)<=(x143+x144));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x145 = UINT64_MAX;
	uint64_t x146 = UINT64_MAX;
	int64_t x147 = 65286131738827998LL;

    t28 = ((x145-x146)<=(x147+x148));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x154 = INT8_MAX;
	static uint64_t x155 = 1856LLU;
	int16_t x156 = -1;
	volatile int32_t t29 = -238;

    t29 = ((x153-x154)<=(x155+x156));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x157 = -1;
	volatile int64_t x159 = 12827713389929128LL;
	volatile int16_t x160 = INT16_MIN;
	volatile int32_t t30 = -6210;

    t30 = ((x157-x158)<=(x159+x160));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint8_t x161 = UINT8_MAX;
	static volatile uint16_t x162 = UINT16_MAX;
	static int8_t x163 = 0;
	static int16_t x164 = -30;
	int32_t t31 = 37965785;

    t31 = ((x161-x162)<=(x163+x164));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x165 = -1;
	int64_t x166 = INT64_MAX;
	int64_t x168 = INT64_MIN;
	int32_t t32 = 235848;

    t32 = ((x165-x166)<=(x167+x168));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x169 = UINT16_MAX;
	int32_t x170 = -1;
	static int64_t x171 = INT64_MIN;
	uint64_t x172 = 12032LLU;
	volatile int32_t t33 = -470642704;

    t33 = ((x169-x170)<=(x171+x172));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x174 = 0;
	int64_t x175 = INT64_MIN;
	volatile int32_t t34 = 44;

    t34 = ((x173-x174)<=(x175+x176));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x177 = -1;
	int16_t x178 = INT16_MIN;
	int16_t x180 = 1;
	static volatile int32_t t35 = -555;

    t35 = ((x177-x178)<=(x179+x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x185 = 4U;
	uint16_t x186 = 12U;
	uint64_t x187 = 52567188LLU;
	int16_t x188 = 38;
	int32_t t36 = 10574082;

    t36 = ((x185-x186)<=(x187+x188));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x189 = UINT8_MAX;
	int8_t x190 = INT8_MAX;
	uint32_t x191 = 297U;
	int64_t x192 = -1LL;
	int32_t t37 = -173691;

    t37 = ((x189-x190)<=(x191+x192));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x194 = -1;
	int32_t x196 = 1838341;

    t38 = ((x193-x194)<=(x195+x196));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x197 = UINT32_MAX;
	int32_t x198 = INT32_MIN;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t39 = 8353151;

    t39 = ((x197-x198)<=(x199+x200));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x202 = 106189892064LL;
	int32_t x203 = INT32_MIN;
	uint8_t x204 = UINT8_MAX;
	int32_t t40 = -31;

    t40 = ((x201-x202)<=(x203+x204));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x205 = INT16_MIN;
	uint8_t x206 = UINT8_MAX;
	uint32_t x207 = UINT32_MAX;
	static int32_t x208 = -159533576;
	volatile int32_t t41 = -12754;

    t41 = ((x205-x206)<=(x207+x208));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x209 = UINT8_MAX;
	volatile int32_t x210 = -1376;
	volatile int8_t x211 = INT8_MAX;
	volatile int16_t x212 = 1;
	volatile int32_t t42 = -320856;

    t42 = ((x209-x210)<=(x211+x212));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x213 = -1;
	static int16_t x214 = INT16_MIN;
	int64_t x215 = INT64_MAX;
	static volatile int16_t x216 = 0;
	int32_t t43 = 357149219;

    t43 = ((x213-x214)<=(x215+x216));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x217 = -201LL;
	int64_t x219 = INT64_MIN;
	volatile uint16_t x220 = 662U;
	static volatile int32_t t44 = -4105121;

    t44 = ((x217-x218)<=(x219+x220));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x221 = -1;
	int16_t x223 = INT16_MIN;
	volatile int32_t x224 = -1;

    t45 = ((x221-x222)<=(x223+x224));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x229 = 24627LLU;
	int32_t x230 = 991280;
	static int16_t x231 = INT16_MIN;
	volatile int32_t t46 = -10583071;

    t46 = ((x229-x230)<=(x231+x232));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x237 = INT8_MIN;
	int16_t x238 = INT16_MIN;
	volatile uint32_t x239 = 1U;
	static volatile uint16_t x240 = 113U;
	volatile int32_t t47 = -62264671;

    t47 = ((x237-x238)<=(x239+x240));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x242 = 2773U;
	int32_t x243 = 683383;
	static int32_t x244 = -1522;

    t48 = ((x241-x242)<=(x243+x244));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x245 = -3LL;
	uint32_t x246 = UINT32_MAX;
	volatile int32_t t49 = 1006596;

    t49 = ((x245-x246)<=(x247+x248));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x249 = UINT8_MAX;
	int16_t x250 = INT16_MAX;
	uint32_t x251 = 100345U;
	static uint64_t x252 = 0LLU;
	volatile int32_t t50 = -1009919;

    t50 = ((x249-x250)<=(x251+x252));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x253 = -3431;
	int8_t x254 = -1;
	static int16_t x255 = -2;
	static int64_t x256 = INT64_MAX;
	int32_t t51 = 85867;

    t51 = ((x253-x254)<=(x255+x256));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x257 = INT8_MIN;
	int64_t x258 = -261879235026744670LL;
	uint64_t x259 = 900LLU;
	static volatile int32_t x260 = INT32_MAX;
	static int32_t t52 = 12585185;

    t52 = ((x257-x258)<=(x259+x260));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MIN;
	static int32_t x267 = INT32_MIN;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t53 = 21;

    t53 = ((x265-x266)<=(x267+x268));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x270 = 0U;
	int64_t x271 = -1LL;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t54 = -61157820;

    t54 = ((x269-x270)<=(x271+x272));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x273 = -29;
	uint32_t x274 = 51936U;
	uint8_t x275 = UINT8_MAX;
	static int8_t x276 = -1;
	int32_t t55 = -578;

    t55 = ((x273-x274)<=(x275+x276));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x277 = -1;
	uint64_t x278 = 2467544406621LLU;
	uint8_t x279 = UINT8_MAX;
	volatile int32_t t56 = 3545114;

    t56 = ((x277-x278)<=(x279+x280));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x282 = 58;
	static uint64_t x283 = 751LLU;
	uint64_t x284 = 14879LLU;
	int32_t t57 = 699056;

    t57 = ((x281-x282)<=(x283+x284));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x285 = UINT64_MAX;
	uint8_t x287 = UINT8_MAX;
	uint8_t x288 = UINT8_MAX;
	int32_t t58 = -2647428;

    t58 = ((x285-x286)<=(x287+x288));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x299 = 22U;
	uint64_t x300 = 31157292423855409LLU;
	static int32_t t59 = -258;

    t59 = ((x297-x298)<=(x299+x300));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x301 = -1LL;
	int8_t x302 = -1;
	int16_t x303 = -1;
	int16_t x304 = INT16_MAX;
	int32_t t60 = 8797;

    t60 = ((x301-x302)<=(x303+x304));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x309 = 1U;
	uint64_t x310 = UINT64_MAX;
	uint8_t x311 = 3U;
	int32_t x312 = -1;
	int32_t t61 = 75;

    t61 = ((x309-x310)<=(x311+x312));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x318 = INT32_MAX;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = 251U;

    t62 = ((x317-x318)<=(x319+x320));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x321 = 100U;
	volatile int16_t x324 = 18;
	static volatile int32_t t63 = 130011;

    t63 = ((x321-x322)<=(x323+x324));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x325 = 4U;
	int16_t x326 = INT16_MIN;
	volatile int32_t x328 = 87647;
	volatile int32_t t64 = 6651184;

    t64 = ((x325-x326)<=(x327+x328));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x329 = -1;
	int8_t x331 = INT8_MIN;
	int32_t t65 = 7192771;

    t65 = ((x329-x330)<=(x331+x332));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x334 = 1282559341953LLU;
	uint8_t x335 = UINT8_MAX;
	uint32_t x336 = 953342341U;
	static volatile int32_t t66 = -3879064;

    t66 = ((x333-x334)<=(x335+x336));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x338 = INT8_MAX;
	int64_t x339 = -1LL;
	static int32_t t67 = -11895874;

    t67 = ((x337-x338)<=(x339+x340));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x341 = 616U;
	uint8_t x343 = 30U;
	static volatile int32_t t68 = 815;

    t68 = ((x341-x342)<=(x343+x344));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x345 = 11004U;
	uint64_t x346 = UINT64_MAX;
	int16_t x347 = -1;
	int16_t x348 = -1;
	volatile int32_t t69 = -39553881;

    t69 = ((x345-x346)<=(x347+x348));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x349 = 10U;
	int32_t x350 = -1030058;
	static volatile int32_t x351 = -51168532;
	int64_t x352 = INT64_MAX;
	static volatile int32_t t70 = 287966;

    t70 = ((x349-x350)<=(x351+x352));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x353 = INT16_MIN;
	int32_t x354 = -302032;
	uint16_t x355 = 14U;
	int16_t x356 = INT16_MAX;
	int32_t t71 = 125979;

    t71 = ((x353-x354)<=(x355+x356));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x357 = -1677;
	int8_t x358 = -10;
	int32_t x359 = 247;
	volatile int32_t x360 = INT32_MIN;
	volatile int32_t t72 = 10;

    t72 = ((x357-x358)<=(x359+x360));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x361 = -1;
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = INT16_MAX;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t73 = -49;

    t73 = ((x361-x362)<=(x363+x364));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x365 = -1;
	int64_t x366 = INT64_MIN;
	int8_t x367 = INT8_MIN;
	uint64_t x368 = 262699007494LLU;
	int32_t t74 = -430;

    t74 = ((x365-x366)<=(x367+x368));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x370 = -1;
	int16_t x371 = INT16_MAX;
	volatile int16_t x372 = -1;
	int32_t t75 = -10890;

    t75 = ((x369-x370)<=(x371+x372));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x373 = -1713;
	volatile int8_t x374 = -1;
	uint16_t x375 = UINT16_MAX;
	static int32_t x376 = 172;

    t76 = ((x373-x374)<=(x375+x376));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x377 = -42411LL;
	int64_t x379 = 1456372LL;
	volatile int8_t x380 = 1;

    t77 = ((x377-x378)<=(x379+x380));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x381 = UINT16_MAX;
	int64_t x382 = -11663LL;
	uint16_t x383 = UINT16_MAX;
	static int8_t x384 = INT8_MAX;
	volatile int32_t t78 = 222;

    t78 = ((x381-x382)<=(x383+x384));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x385 = INT64_MIN;
	int32_t x388 = -1;
	volatile int32_t t79 = 60;

    t79 = ((x385-x386)<=(x387+x388));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x390 = 4112603;
	int16_t x391 = -1;
	volatile int32_t t80 = -343675;

    t80 = ((x389-x390)<=(x391+x392));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x395 = INT16_MIN;
	volatile uint8_t x396 = UINT8_MAX;
	int32_t t81 = -500;

    t81 = ((x393-x394)<=(x395+x396));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x397 = -1;
	volatile int64_t x399 = INT64_MIN;
	uint8_t x400 = UINT8_MAX;
	int32_t t82 = 1;

    t82 = ((x397-x398)<=(x399+x400));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x402 = INT32_MIN;
	int8_t x403 = 54;
	volatile uint64_t x404 = 1966176162565124LLU;
	volatile int32_t t83 = -2776;

    t83 = ((x401-x402)<=(x403+x404));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x405 = 3;
	int64_t x406 = 1022873243LL;
	int32_t x407 = INT32_MIN;
	uint32_t x408 = UINT32_MAX;
	int32_t t84 = 276802724;

    t84 = ((x405-x406)<=(x407+x408));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x409 = INT8_MIN;
	int64_t x410 = -73077656753LL;
	uint64_t x411 = 639LLU;
	int64_t x412 = INT64_MAX;
	volatile int32_t t85 = -7478;

    t85 = ((x409-x410)<=(x411+x412));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x413 = 19U;
	uint16_t x414 = 2816U;
	static int8_t x415 = 14;
	static int32_t x416 = -1;
	int32_t t86 = 174698269;

    t86 = ((x413-x414)<=(x415+x416));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x417 = 817;
	int64_t x418 = 19128426599LL;
	int16_t x419 = INT16_MIN;
	static uint8_t x420 = UINT8_MAX;
	volatile int32_t t87 = 113;

    t87 = ((x417-x418)<=(x419+x420));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    

    t88 = ((x421-x422)<=(x423+x424));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x429 = INT64_MIN;
	int16_t x431 = INT16_MAX;
	volatile int8_t x432 = INT8_MIN;
	int32_t t89 = 29;

    t89 = ((x429-x430)<=(x431+x432));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x433 = -2;
	volatile int32_t x434 = -258315106;
	int16_t x435 = -228;
	int32_t t90 = 286488;

    t90 = ((x433-x434)<=(x435+x436));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x437 = INT16_MIN;
	int8_t x439 = INT8_MAX;
	volatile int32_t t91 = -1460703;

    t91 = ((x437-x438)<=(x439+x440));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x441 = 0U;
	static int16_t x442 = INT16_MAX;
	static volatile uint16_t x443 = UINT16_MAX;
	int64_t x444 = -10490843LL;
	volatile int32_t t92 = 474914084;

    t92 = ((x441-x442)<=(x443+x444));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x449 = 81U;
	static uint16_t x450 = UINT16_MAX;
	volatile int32_t x452 = INT32_MIN;
	volatile int32_t t93 = -30490;

    t93 = ((x449-x450)<=(x451+x452));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x453 = INT32_MAX;
	uint8_t x455 = 55U;
	int32_t t94 = -60;

    t94 = ((x453-x454)<=(x455+x456));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x457 = UINT16_MAX;
	static int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MAX;
	volatile int32_t t95 = -468326208;

    t95 = ((x457-x458)<=(x459+x460));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x461 = 353LLU;
	static int32_t x463 = 31;
	volatile int32_t x464 = -1;
	static volatile int32_t t96 = 224;

    t96 = ((x461-x462)<=(x463+x464));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x466 = 0;
	int64_t x467 = INT64_MIN;
	volatile int32_t t97 = -32509905;

    t97 = ((x465-x466)<=(x467+x468));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x469 = INT16_MIN;
	int8_t x470 = INT8_MAX;
	uint16_t x471 = UINT16_MAX;
	int16_t x472 = INT16_MIN;
	volatile int32_t t98 = 1;

    t98 = ((x469-x470)<=(x471+x472));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x473 = INT8_MAX;
	uint16_t x474 = 11691U;
	int8_t x475 = INT8_MIN;
	int16_t x476 = INT16_MIN;

    t99 = ((x473-x474)<=(x475+x476));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x477 = -1;
	static int8_t x478 = INT8_MAX;
	volatile int32_t x479 = -750609878;
	static uint64_t x480 = 1823060214276138188LLU;

    t100 = ((x477-x478)<=(x479+x480));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x485 = INT64_MAX;
	int16_t x486 = INT16_MAX;
	int32_t x488 = 902013;
	volatile int32_t t101 = 44;

    t101 = ((x485-x486)<=(x487+x488));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x489 = -1;
	uint32_t x490 = 1759U;
	int64_t x492 = INT64_MIN;
	volatile int32_t t102 = -419424976;

    t102 = ((x489-x490)<=(x491+x492));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x493 = 230343986LLU;
	int64_t x494 = INT64_MAX;
	int32_t x496 = INT32_MIN;
	static int32_t t103 = 85158228;

    t103 = ((x493-x494)<=(x495+x496));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x497 = 61U;
	int64_t x498 = INT64_MAX;
	int32_t t104 = 8;

    t104 = ((x497-x498)<=(x499+x500));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x502 = -1;
	int16_t x503 = -1;
	volatile uint8_t x504 = 2U;
	volatile int32_t t105 = 364914954;

    t105 = ((x501-x502)<=(x503+x504));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x505 = 1LLU;
	volatile uint64_t x507 = 99035LLU;
	volatile int64_t x508 = INT64_MIN;
	int32_t t106 = -4059026;

    t106 = ((x505-x506)<=(x507+x508));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x509 = -198992760LL;
	int64_t x510 = INT64_MIN;
	volatile uint8_t x511 = 1U;
	uint16_t x512 = 2401U;
	volatile int32_t t107 = 1;

    t107 = ((x509-x510)<=(x511+x512));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x513 = -1;
	uint16_t x514 = 23U;
	static int8_t x515 = -1;
	uint64_t x516 = 231517994603462489LLU;
	static volatile int32_t t108 = -835;

    t108 = ((x513-x514)<=(x515+x516));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x517 = INT16_MAX;
	int16_t x519 = -1;
	int8_t x520 = -1;
	int32_t t109 = 24106355;

    t109 = ((x517-x518)<=(x519+x520));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x522 = 2U;
	int32_t x523 = INT32_MIN;
	int32_t t110 = -1;

    t110 = ((x521-x522)<=(x523+x524));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x529 = -1;
	int8_t x530 = 1;
	int32_t t111 = -37896615;

    t111 = ((x529-x530)<=(x531+x532));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x537 = -1;
	int64_t x538 = -1577021688732305566LL;
	int64_t x539 = INT64_MIN;
	int32_t t112 = 719511202;

    t112 = ((x537-x538)<=(x539+x540));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x541 = 14;
	uint8_t x542 = 5U;
	static volatile uint64_t x543 = 8077008681LLU;

    t113 = ((x541-x542)<=(x543+x544));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x545 = INT64_MIN;
	int64_t x546 = -1LL;
	int16_t x548 = -1;

    t114 = ((x545-x546)<=(x547+x548));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x549 = -1;
	volatile uint16_t x551 = 759U;
	int32_t x552 = -1;
	volatile int32_t t115 = -165966;

    t115 = ((x549-x550)<=(x551+x552));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x555 = 548066855190700LLU;
	uint32_t x556 = UINT32_MAX;
	int32_t t116 = 3837;

    t116 = ((x553-x554)<=(x555+x556));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x557 = -1;
	static int16_t x558 = INT16_MIN;
	volatile int32_t t117 = 229429528;

    t117 = ((x557-x558)<=(x559+x560));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x565 = INT64_MIN;
	volatile int64_t x566 = INT64_MIN;
	int64_t x567 = INT64_MIN;
	uint16_t x568 = UINT16_MAX;
	volatile int32_t t118 = -458955;

    t118 = ((x565-x566)<=(x567+x568));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x570 = 0;
	int32_t x571 = INT32_MIN;
	int8_t x572 = INT8_MAX;
	static volatile int32_t t119 = 12;

    t119 = ((x569-x570)<=(x571+x572));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x574 = 1;
	static uint32_t x575 = 3726870U;
	volatile int64_t x576 = 29LL;
	int32_t t120 = 169;

    t120 = ((x573-x574)<=(x575+x576));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x582 = UINT8_MAX;
	int32_t t121 = -10302223;

    t121 = ((x581-x582)<=(x583+x584));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x589 = INT32_MIN;
	static int32_t x591 = INT32_MAX;
	uint64_t x592 = 2683781LLU;
	int32_t t122 = 659075;

    t122 = ((x589-x590)<=(x591+x592));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x593 = INT32_MAX;
	volatile uint32_t x594 = UINT32_MAX;
	int32_t x595 = -1;
	uint32_t x596 = 1552973351U;
	volatile int32_t t123 = 21;

    t123 = ((x593-x594)<=(x595+x596));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x601 = 9592578108662LLU;
	uint8_t x602 = UINT8_MAX;
	uint64_t x603 = 689177409835808654LLU;
	volatile int32_t t124 = -372;

    t124 = ((x601-x602)<=(x603+x604));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint32_t x605 = 12106U;
	volatile uint16_t x606 = 13655U;
	int32_t x607 = INT32_MIN;

    t125 = ((x605-x606)<=(x607+x608));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x609 = INT64_MIN;
	static int16_t x610 = -4502;
	uint16_t x611 = 6U;
	static int8_t x612 = INT8_MAX;
	int32_t t126 = 28;

    t126 = ((x609-x610)<=(x611+x612));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x613 = UINT8_MAX;
	volatile int16_t x614 = INT16_MIN;
	volatile int32_t x615 = -1;
	uint32_t x616 = UINT32_MAX;
	volatile int32_t t127 = 16890887;

    t127 = ((x613-x614)<=(x615+x616));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x617 = -1;
	volatile int8_t x618 = -30;
	int64_t x619 = -1LL;
	int32_t x620 = -1;

    t128 = ((x617-x618)<=(x619+x620));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x621 = -1;
	volatile int32_t x622 = INT32_MIN;
	int8_t x623 = INT8_MAX;
	volatile uint64_t x624 = UINT64_MAX;
	static int32_t t129 = 461159777;

    t129 = ((x621-x622)<=(x623+x624));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x629 = UINT64_MAX;
	uint32_t x630 = 356719U;
	uint32_t x631 = UINT32_MAX;
	static uint8_t x632 = 5U;
	volatile int32_t t130 = 661;

    t130 = ((x629-x630)<=(x631+x632));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x633 = INT8_MIN;
	uint64_t x635 = UINT64_MAX;
	uint32_t x636 = 4U;
	volatile int32_t t131 = 2622119;

    t131 = ((x633-x634)<=(x635+x636));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x641 = INT16_MAX;
	uint8_t x642 = 53U;
	static int16_t x643 = INT16_MIN;
	int8_t x644 = INT8_MAX;
	int32_t t132 = -557755;

    t132 = ((x641-x642)<=(x643+x644));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x645 = 68939094U;
	volatile int8_t x646 = 1;
	int16_t x647 = -1;

    t133 = ((x645-x646)<=(x647+x648));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x653 = -107139821411561251LL;
	static volatile int32_t x654 = -1;
	int8_t x655 = INT8_MIN;
	uint8_t x656 = UINT8_MAX;
	volatile int32_t t134 = -78167;

    t134 = ((x653-x654)<=(x655+x656));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x657 = -1;
	int16_t x658 = -292;
	volatile int32_t x659 = -1;
	int16_t x660 = INT16_MIN;
	static volatile int32_t t135 = 461805197;

    t135 = ((x657-x658)<=(x659+x660));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x665 = 6;
	int8_t x666 = INT8_MIN;
	int8_t x668 = INT8_MIN;

    t136 = ((x665-x666)<=(x667+x668));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x669 = 3488311U;
	static volatile uint32_t x670 = 324U;
	static uint32_t x671 = 5U;
	static uint8_t x672 = UINT8_MAX;

    t137 = ((x669-x670)<=(x671+x672));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x673 = INT32_MIN;
	static int16_t x674 = -1;
	uint8_t x676 = 8U;
	int32_t t138 = 4;

    t138 = ((x673-x674)<=(x675+x676));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x678 = INT16_MAX;
	uint64_t x679 = 7830876195212940LLU;
	volatile int32_t x680 = INT32_MIN;
	int32_t t139 = 55314968;

    t139 = ((x677-x678)<=(x679+x680));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x681 = 2100718147724137581LL;
	volatile int16_t x682 = -247;
	int32_t x683 = -1;
	uint64_t x684 = UINT64_MAX;

    t140 = ((x681-x682)<=(x683+x684));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x686 = -26768692690191314LL;
	int16_t x687 = INT16_MIN;
	int8_t x688 = INT8_MIN;

    t141 = ((x685-x686)<=(x687+x688));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x689 = 1035456879LL;
	uint8_t x690 = UINT8_MAX;
	int16_t x691 = INT16_MIN;
	volatile uint8_t x692 = UINT8_MAX;
	int32_t t142 = -84184;

    t142 = ((x689-x690)<=(x691+x692));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x694 = 1987U;
	int16_t x695 = INT16_MIN;
	volatile int8_t x696 = -1;
	int32_t t143 = 75391;

    t143 = ((x693-x694)<=(x695+x696));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x697 = -1LL;
	volatile int8_t x698 = INT8_MAX;
	static uint64_t x699 = UINT64_MAX;
	uint16_t x700 = 0U;
	volatile int32_t t144 = 15199810;

    t144 = ((x697-x698)<=(x699+x700));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x702 = -1;
	volatile int32_t t145 = -3522;

    t145 = ((x701-x702)<=(x703+x704));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x709 = -1;
	static int64_t x710 = -1LL;
	int32_t x711 = -1;
	int32_t t146 = -24;

    t146 = ((x709-x710)<=(x711+x712));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x713 = 7;
	int8_t x714 = -1;
	int32_t x715 = INT32_MAX;
	volatile uint32_t x716 = 202537741U;
	volatile int32_t t147 = 1616302;

    t147 = ((x713-x714)<=(x715+x716));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x717 = -832;
	int64_t x718 = -1LL;
	int16_t x719 = 0;
	static int64_t x720 = 3LL;
	int32_t t148 = 116;

    t148 = ((x717-x718)<=(x719+x720));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x722 = 3U;
	static int64_t x723 = 119752LL;
	int16_t x724 = 46;

    t149 = ((x721-x722)<=(x723+x724));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x733 = -713117931;
	static uint16_t x734 = 11U;
	uint64_t x736 = 5346730LLU;
	int32_t t150 = -10;

    t150 = ((x733-x734)<=(x735+x736));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x737 = -56;
	int8_t x738 = -1;
	int64_t x739 = -1LL;

    t151 = ((x737-x738)<=(x739+x740));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x741 = INT16_MAX;
	uint64_t x742 = 1307295511LLU;
	int8_t x743 = -1;
	uint16_t x744 = 38U;

    t152 = ((x741-x742)<=(x743+x744));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x745 = 2LLU;
	int64_t x746 = -854920362368872LL;
	volatile int64_t x747 = 90978520202233LL;
	int16_t x748 = INT16_MIN;
	volatile int32_t t153 = -55;

    t153 = ((x745-x746)<=(x747+x748));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x749 = UINT8_MAX;
	uint64_t x750 = 191LLU;
	static volatile int8_t x752 = 1;
	int32_t t154 = 4213;

    t154 = ((x749-x750)<=(x751+x752));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x753 = UINT8_MAX;
	int16_t x754 = INT16_MIN;
	volatile uint32_t x756 = 1926261U;
	int32_t t155 = -6888;

    t155 = ((x753-x754)<=(x755+x756));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x761 = 3858663LLU;
	static uint32_t x762 = 31U;
	static int32_t x763 = 5600813;
	volatile int32_t t156 = -13158;

    t156 = ((x761-x762)<=(x763+x764));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x765 = -4376366841168LL;
	static volatile int8_t x766 = 1;
	static int64_t x767 = 4242278046371233421LL;
	static int8_t x768 = INT8_MIN;
	int32_t t157 = -28331;

    t157 = ((x765-x766)<=(x767+x768));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x769 = -28;
	int32_t x770 = INT32_MIN;
	int8_t x771 = -1;
	volatile int32_t t158 = 0;

    t158 = ((x769-x770)<=(x771+x772));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x773 = -7440184207863LL;
	uint16_t x774 = 14U;
	volatile int32_t t159 = -127;

    t159 = ((x773-x774)<=(x775+x776));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x777 = 1921671078LLU;
	int32_t x778 = -1;
	int16_t x779 = -1;
	uint8_t x780 = 27U;
	int32_t t160 = 647;

    t160 = ((x777-x778)<=(x779+x780));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x781 = UINT32_MAX;
	static uint32_t x783 = 1U;
	int32_t x784 = INT32_MIN;
	static volatile int32_t t161 = 2188;

    t161 = ((x781-x782)<=(x783+x784));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x785 = INT8_MIN;
	int8_t x787 = -1;
	static int32_t t162 = 1915;

    t162 = ((x785-x786)<=(x787+x788));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x789 = 2425U;
	static int32_t x790 = -1;
	int8_t x791 = -1;
	int32_t t163 = 7778;

    t163 = ((x789-x790)<=(x791+x792));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x794 = INT32_MIN;
	volatile uint8_t x795 = UINT8_MAX;
	volatile int32_t t164 = 508;

    t164 = ((x793-x794)<=(x795+x796));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x797 = INT32_MAX;
	int16_t x799 = INT16_MAX;

    t165 = ((x797-x798)<=(x799+x800));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x802 = -2;
	int8_t x803 = 19;

    t166 = ((x801-x802)<=(x803+x804));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x805 = 57596452420867LL;
	int16_t x807 = INT16_MIN;
	int8_t x808 = INT8_MIN;
	static volatile int32_t t167 = -138;

    t167 = ((x805-x806)<=(x807+x808));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x813 = INT32_MIN;
	uint32_t x814 = 1U;
	volatile int64_t x815 = INT64_MIN;

    t168 = ((x813-x814)<=(x815+x816));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x817 = -1;
	int64_t x819 = -73047710LL;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t169 = 28519;

    t169 = ((x817-x818)<=(x819+x820));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x821 = INT16_MIN;
	static int64_t x822 = -1LL;
	int64_t x823 = INT64_MIN;
	static int32_t x824 = INT32_MAX;
	int32_t t170 = -1085779;

    t170 = ((x821-x822)<=(x823+x824));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x825 = UINT32_MAX;
	int8_t x827 = -2;
	int8_t x828 = INT8_MIN;
	int32_t t171 = 13647861;

    t171 = ((x825-x826)<=(x827+x828));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x833 = 68482440LLU;
	volatile uint16_t x834 = UINT16_MAX;
	int32_t x836 = INT32_MIN;

    t172 = ((x833-x834)<=(x835+x836));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x838 = -14890270332LL;
	uint64_t x840 = 10755781LLU;
	static volatile int32_t t173 = 253248807;

    t173 = ((x837-x838)<=(x839+x840));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x849 = -2;
	uint8_t x850 = 1U;
	int8_t x851 = INT8_MAX;
	uint8_t x852 = 2U;

    t174 = ((x849-x850)<=(x851+x852));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x854 = 0U;
	int8_t x855 = 7;
	int16_t x856 = -1;

    t175 = ((x853-x854)<=(x855+x856));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint64_t x857 = 7432329LLU;
	int64_t x859 = -1LL;
	int16_t x860 = 0;

    t176 = ((x857-x858)<=(x859+x860));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x865 = 8368U;
	int64_t x866 = 1404536955297537LL;
	static int8_t x867 = INT8_MAX;
	volatile int64_t x868 = INT64_MIN;
	int32_t t177 = 251;

    t177 = ((x865-x866)<=(x867+x868));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x877 = -186538688LL;
	int8_t x878 = 1;
	volatile int32_t x879 = -5208;
	int32_t t178 = -31171;

    t178 = ((x877-x878)<=(x879+x880));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t t179 = 1;

    t179 = ((x881-x882)<=(x883+x884));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x885 = INT32_MIN;
	int32_t x886 = -1;
	int32_t x887 = -1;
	int8_t x888 = -1;
	volatile int32_t t180 = 119916;

    t180 = ((x885-x886)<=(x887+x888));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x889 = -935086;
	uint32_t x890 = 367277420U;
	int32_t x891 = 99;
	int64_t x892 = -3399LL;
	int32_t t181 = 21035;

    t181 = ((x889-x890)<=(x891+x892));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x894 = UINT16_MAX;
	uint32_t x895 = 1U;
	uint8_t x896 = 96U;
	volatile int32_t t182 = 3;

    t182 = ((x893-x894)<=(x895+x896));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x898 = 726U;
	uint16_t x899 = 12U;
	int16_t x900 = INT16_MAX;
	int32_t t183 = 341180;

    t183 = ((x897-x898)<=(x899+x900));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x905 = 3;
	volatile uint32_t x906 = 5613U;
	volatile uint16_t x908 = 1U;

    t184 = ((x905-x906)<=(x907+x908));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x913 = 13;
	static int8_t x914 = 1;
	int32_t x915 = 103676;
	uint32_t x916 = 53701U;
	int32_t t185 = -101433732;

    t185 = ((x913-x914)<=(x915+x916));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x917 = UINT8_MAX;
	uint32_t x918 = 321075774U;
	uint32_t x919 = 0U;
	volatile int32_t t186 = 2768;

    t186 = ((x917-x918)<=(x919+x920));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x921 = UINT32_MAX;
	uint8_t x922 = 19U;
	static int8_t x923 = INT8_MAX;

    t187 = ((x921-x922)<=(x923+x924));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x927 = 89U;
	uint64_t x928 = 2795706249LLU;
	int32_t t188 = 16416963;

    t188 = ((x925-x926)<=(x927+x928));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x937 = INT32_MIN;
	int8_t x938 = -1;
	int64_t x939 = 137717465392884831LL;
	int32_t x940 = 316103;

    t189 = ((x937-x938)<=(x939+x940));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    

    t190 = ((x941-x942)<=(x943+x944));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x945 = -5;
	int16_t x946 = -1;
	uint32_t x947 = UINT32_MAX;
	int32_t t191 = 6;

    t191 = ((x945-x946)<=(x947+x948));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x957 = 241853041112LL;
	int8_t x959 = -1;
	uint16_t x960 = 4U;
	volatile int32_t t192 = -72854;

    t192 = ((x957-x958)<=(x959+x960));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x969 = INT64_MIN;
	int32_t x970 = INT32_MIN;
	int16_t x971 = 1;
	static volatile uint16_t x972 = UINT16_MAX;
	static int32_t t193 = 186028;

    t193 = ((x969-x970)<=(x971+x972));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x973 = 1882U;
	int64_t x974 = INT64_MAX;
	static int8_t x975 = -1;

    t194 = ((x973-x974)<=(x975+x976));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x977 = UINT32_MAX;
	int8_t x978 = INT8_MAX;
	int64_t x979 = -1LL;
	static int32_t x980 = -2966;

    t195 = ((x977-x978)<=(x979+x980));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x981 = 1859U;
	uint8_t x984 = UINT8_MAX;

    t196 = ((x981-x982)<=(x983+x984));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x985 = INT32_MIN;
	int64_t x986 = INT64_MIN;
	int8_t x987 = INT8_MIN;
	int16_t x988 = INT16_MIN;
	volatile int32_t t197 = -10;

    t197 = ((x985-x986)<=(x987+x988));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x992 = -1;
	volatile int32_t t198 = -4670;

    t198 = ((x989-x990)<=(x991+x992));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x994 = 1044;
	uint64_t x995 = UINT64_MAX;
	int64_t x996 = INT64_MAX;
	volatile int32_t t199 = 0;

    t199 = ((x993-x994)<=(x995+x996));

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

