
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

int8_t x1 = 2;
static int64_t x13 = INT64_MAX;
int16_t x18 = 2518;
int32_t t4 = -177414;
static uint16_t x31 = UINT16_MAX;
static volatile int32_t t6 = 1845;
int64_t x44 = INT64_MIN;
volatile int32_t t8 = -199682;
static int64_t x57 = 27656693195730LL;
static volatile int32_t t11 = -4857660;
static int16_t x121 = INT16_MAX;
volatile int32_t x124 = INT32_MIN;
uint64_t x126 = UINT64_MAX;
volatile int8_t x140 = INT8_MAX;
int16_t x146 = -770;
int64_t x152 = -1LL;
int16_t x154 = -14012;
static int64_t x155 = INT64_MIN;
volatile int32_t t24 = 5;
int8_t x157 = -6;
uint8_t x158 = UINT8_MAX;
static uint16_t x160 = 102U;
int32_t t25 = 207936251;
int8_t x185 = INT8_MAX;
int16_t x186 = 189;
int32_t t27 = -328394042;
int64_t x199 = 4499LL;
int64_t x200 = INT64_MIN;
volatile int32_t x202 = -1;
uint64_t x207 = UINT64_MAX;
uint16_t x221 = UINT16_MAX;
uint16_t x222 = UINT16_MAX;
int32_t x225 = -17639051;
uint16_t x226 = 2541U;
static int8_t x231 = INT8_MIN;
uint8_t x232 = UINT8_MAX;
uint32_t x235 = 678084U;
int64_t x238 = 16975877274379043LL;
volatile int64_t x240 = INT64_MIN;
static uint64_t x247 = 6758706981361536LLU;
int16_t x261 = INT16_MAX;
uint8_t x264 = 3U;
volatile int32_t x266 = 5;
int64_t x271 = INT64_MIN;
uint8_t x273 = UINT8_MAX;
int32_t x275 = -4131690;
int16_t x288 = 0;
uint64_t x294 = UINT64_MAX;
int8_t x298 = INT8_MIN;
int32_t t47 = 9;
int32_t t48 = 1197;
volatile uint16_t x307 = UINT16_MAX;
int64_t x309 = INT64_MIN;
int8_t x312 = -1;
static volatile int32_t t51 = 1;
static int16_t x318 = 1;
static int64_t x321 = INT64_MIN;
volatile int32_t t54 = 748676;
static uint16_t x341 = 0U;
int32_t x343 = INT32_MIN;
int16_t x344 = -1;
volatile int64_t x358 = -2LL;
volatile int32_t x359 = -390;
uint64_t x365 = 664634024307LLU;
int32_t t59 = 5;
uint64_t x381 = UINT64_MAX;
volatile int64_t x383 = INT64_MAX;
volatile int32_t t60 = -3423;
uint8_t x386 = UINT8_MAX;
int16_t x388 = -671;
int32_t t62 = 1963518;
static int32_t t63 = 51;
static volatile int32_t x400 = 3592;
static int8_t x403 = INT8_MAX;
volatile uint8_t x404 = 25U;
int8_t x417 = -1;
volatile int32_t t68 = 93823;
int32_t x426 = -1;
volatile int32_t x427 = INT32_MIN;
int8_t x429 = 63;
static int32_t t70 = -248;
static volatile int8_t x440 = -1;
volatile int32_t t72 = 3196;
int64_t x449 = 333972148LL;
volatile int32_t t73 = -122446886;
int16_t x456 = INT16_MIN;
int32_t t74 = -11016996;
static int16_t x457 = -5;
int8_t x458 = -1;
volatile uint8_t x459 = 24U;
int32_t t79 = 3;
volatile int32_t t81 = -243427;
uint32_t x511 = 9U;
int32_t t85 = -56;
static int64_t x519 = INT64_MIN;
static int32_t t86 = -2093;
uint32_t x521 = UINT32_MAX;
int8_t x522 = -1;
volatile uint64_t x532 = UINT64_MAX;
int16_t x539 = INT16_MIN;
static int32_t t90 = -164044;
int16_t x547 = INT16_MIN;
volatile int16_t x549 = INT16_MIN;
volatile uint64_t x562 = 644601LLU;
int16_t x568 = INT16_MAX;
uint16_t x573 = 15380U;
uint64_t x574 = 504267165918684576LLU;
int32_t t97 = 2443;
volatile int8_t x579 = INT8_MIN;
int16_t x580 = 233;
int8_t x603 = INT8_MIN;
int8_t x623 = INT8_MIN;
int32_t t106 = 2520582;
static int32_t x630 = 1639332;
static volatile uint8_t x637 = UINT8_MAX;
static int16_t x638 = -18;
static volatile int32_t x640 = 4619;
int32_t t110 = 301;
int8_t x647 = INT8_MIN;
volatile uint64_t x650 = 4067LLU;
volatile int32_t t112 = 29725;
volatile uint64_t x662 = 390273643557116LLU;
volatile int32_t t113 = 99897;
static int32_t x667 = INT32_MIN;
int8_t x674 = INT8_MAX;
uint64_t x677 = UINT64_MAX;
int64_t x688 = -277916542511LL;
int32_t x691 = -193279411;
int8_t x694 = INT8_MIN;
int8_t x700 = INT8_MAX;
volatile int32_t x705 = INT32_MAX;
int32_t x710 = INT32_MIN;
int32_t t124 = 1687629;
static uint16_t x719 = 12U;
static uint64_t x720 = 747565LLU;
int16_t x722 = 1019;
volatile int32_t x725 = INT32_MIN;
static uint64_t x726 = UINT64_MAX;
int16_t x727 = INT16_MIN;
static int32_t t128 = -60122;
uint8_t x733 = 65U;
int32_t t130 = 33620;
uint16_t x738 = UINT16_MAX;
int8_t x739 = INT8_MIN;
volatile int8_t x747 = INT8_MIN;
int32_t t132 = -169;
volatile int32_t t133 = 4;
int8_t x756 = INT8_MIN;
volatile uint64_t x762 = UINT64_MAX;
int8_t x763 = 9;
uint64_t x774 = UINT64_MAX;
uint64_t x776 = 4150240508290774883LLU;
static uint16_t x781 = 0U;
int16_t x782 = 1;
int16_t x784 = -215;
static volatile int32_t t139 = 59378;
int16_t x787 = -2032;
static int8_t x794 = -16;
volatile int32_t t142 = -6036;
uint32_t x801 = UINT32_MAX;
int64_t x804 = INT64_MAX;
static int64_t x807 = -306741936LL;
int16_t x813 = -1;
int64_t x819 = INT64_MAX;
static int8_t x839 = INT8_MIN;
volatile uint32_t x845 = 97638303U;
volatile int32_t t151 = 833017296;
volatile int64_t x850 = INT64_MAX;
int16_t x851 = 6943;
volatile int16_t x853 = INT16_MIN;
int16_t x867 = INT16_MIN;
static int32_t t155 = 646677;
uint64_t x873 = 7544897597824858330LLU;
uint64_t x883 = UINT64_MAX;
static volatile int32_t t158 = 8;
int16_t x910 = -1;
uint64_t x911 = 2143760894893995497LLU;
int32_t t164 = 55379;
volatile int64_t x930 = INT64_MIN;
uint64_t x951 = 93937856280560LLU;
volatile int32_t t171 = 26828;
static int64_t x956 = 611420142297303645LL;
uint64_t x960 = 27094472528LLU;
int32_t t174 = 451424;
int64_t x986 = 325LL;
uint16_t x990 = 78U;
volatile int32_t x991 = INT32_MIN;
int8_t x994 = INT8_MIN;
volatile int64_t x997 = INT64_MIN;
int64_t x1006 = 282536605161537754LL;
int64_t x1008 = 6623936LL;
int32_t x1012 = INT32_MIN;
int16_t x1014 = -1;
int8_t x1018 = -12;
int32_t x1033 = INT32_MIN;
int8_t x1036 = 1;
volatile int8_t x1038 = -19;
volatile uint32_t x1043 = 248166902U;
int32_t x1044 = -1;
uint64_t x1051 = 6420232533195608LLU;
int8_t x1059 = 2;
int8_t x1061 = INT8_MAX;
volatile uint64_t x1065 = 232838697LLU;
static uint8_t x1068 = 14U;
static uint64_t x1073 = 1LLU;
int64_t x1083 = INT64_MIN;
volatile int32_t t197 = 1;
volatile int32_t t199 = 22;


void f0(void) {
    	uint8_t x2 = 125U;
	int32_t x3 = 41487498;
	uint16_t x4 = 6518U;
	volatile int32_t t0 = 192223;

    t0 = ((x1/(x2%x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x9 = 45U;
	uint16_t x10 = 6U;
	uint16_t x11 = UINT16_MAX;
	static int32_t x12 = INT32_MIN;
	int32_t t1 = -129183;

    t1 = ((x9/(x10%x11))<=x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x14 = INT32_MIN;
	uint32_t x15 = 6073U;
	uint8_t x16 = 17U;
	volatile int32_t t2 = 841421;

    t2 = ((x13/(x14%x15))<=x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 3830U;
	volatile int8_t x19 = INT8_MIN;
	int32_t x20 = 127;
	int32_t t3 = -4065987;

    t3 = ((x17/(x18%x19))<=x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MAX;
	int8_t x22 = -1;
	uint8_t x23 = 15U;
	uint16_t x24 = UINT16_MAX;

    t4 = ((x21/(x22%x23))<=x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = -58220;
	int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MIN;
	volatile uint64_t x28 = UINT64_MAX;
	static int32_t t5 = 378649;

    t5 = ((x25/(x26%x27))<=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = INT32_MIN;
	uint32_t x30 = 283357U;
	uint64_t x32 = UINT64_MAX;

    t6 = ((x29/(x30%x31))<=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = INT32_MIN;
	static uint8_t x38 = 5U;
	uint8_t x39 = 18U;
	uint8_t x40 = 24U;
	volatile int32_t t7 = 229405;

    t7 = ((x37/(x38%x39))<=x40);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = -992945;
	uint16_t x42 = UINT16_MAX;
	static volatile uint64_t x43 = 7439132138LLU;

    t8 = ((x41/(x42%x43))<=x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x53 = INT32_MAX;
	static int32_t x54 = -1;
	volatile int8_t x55 = INT8_MAX;
	static uint16_t x56 = 45U;
	int32_t t9 = -1;

    t9 = ((x53/(x54%x55))<=x56);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x58 = 34569836911441LLU;
	volatile int64_t x59 = INT64_MIN;
	volatile uint16_t x60 = 189U;
	int32_t t10 = 22130422;

    t10 = ((x57/(x58%x59))<=x60);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x73 = UINT16_MAX;
	uint8_t x74 = 3U;
	static int16_t x75 = INT16_MIN;
	int32_t x76 = INT32_MAX;

    t11 = ((x73/(x74%x75))<=x76);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x77 = -211;
	int8_t x78 = INT8_MAX;
	static uint32_t x79 = 9160U;
	uint64_t x80 = 21474169LLU;
	volatile int32_t t12 = -24862;

    t12 = ((x77/(x78%x79))<=x80);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x85 = INT16_MAX;
	int16_t x86 = -781;
	volatile int64_t x87 = INT64_MIN;
	int8_t x88 = -1;
	volatile int32_t t13 = -3;

    t13 = ((x85/(x86%x87))<=x88);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x93 = INT64_MIN;
	static uint32_t x94 = 1210340U;
	int64_t x95 = INT64_MAX;
	int32_t x96 = -1;
	static int32_t t14 = 54;

    t14 = ((x93/(x94%x95))<=x96);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x97 = 1;
	static volatile uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MIN;
	volatile uint8_t x100 = 3U;
	static volatile int32_t t15 = -28;

    t15 = ((x97/(x98%x99))<=x100);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x101 = 1;
	int8_t x102 = -13;
	volatile int16_t x103 = INT16_MIN;
	int8_t x104 = -1;
	volatile int32_t t16 = -86;

    t16 = ((x101/(x102%x103))<=x104);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x117 = UINT8_MAX;
	static int16_t x118 = INT16_MAX;
	static int8_t x119 = INT8_MIN;
	volatile uint8_t x120 = 4U;
	static int32_t t17 = 1706854;

    t17 = ((x117/(x118%x119))<=x120);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x122 = 163509812U;
	int8_t x123 = -1;
	volatile int32_t t18 = -3013357;

    t18 = ((x121/(x122%x123))<=x124);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x125 = -1;
	static int32_t x127 = INT32_MIN;
	int16_t x128 = INT16_MIN;
	int32_t t19 = -115486077;

    t19 = ((x125/(x126%x127))<=x128);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x137 = 0;
	int32_t x138 = INT32_MAX;
	int8_t x139 = INT8_MAX;
	int32_t t20 = 1;

    t20 = ((x137/(x138%x139))<=x140);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x141 = -1;
	int32_t x142 = -2554550;
	static volatile uint8_t x143 = 73U;
	static int8_t x144 = 0;
	int32_t t21 = -31592809;

    t21 = ((x141/(x142%x143))<=x144);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x145 = 647U;
	int16_t x147 = INT16_MIN;
	int32_t x148 = -11764;
	static int32_t t22 = -3;

    t22 = ((x145/(x146%x147))<=x148);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x149 = UINT32_MAX;
	uint32_t x150 = 25452229U;
	int8_t x151 = -3;
	static volatile int32_t t23 = 75;

    t23 = ((x149/(x150%x151))<=x152);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x153 = INT32_MAX;
	int8_t x156 = INT8_MIN;

    t24 = ((x153/(x154%x155))<=x156);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x159 = UINT64_MAX;

    t25 = ((x157/(x158%x159))<=x160);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x169 = INT32_MAX;
	volatile uint8_t x170 = 32U;
	uint8_t x171 = 10U;
	int8_t x172 = INT8_MAX;
	int32_t t26 = 210;

    t26 = ((x169/(x170%x171))<=x172);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x187 = INT32_MAX;
	static volatile int8_t x188 = INT8_MIN;

    t27 = ((x185/(x186%x187))<=x188);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x193 = -48;
	static int8_t x194 = INT8_MIN;
	volatile int8_t x195 = INT8_MAX;
	static int64_t x196 = 7922629535LL;
	volatile int32_t t28 = -935117090;

    t28 = ((x193/(x194%x195))<=x196);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x197 = 22U;
	uint8_t x198 = 5U;
	volatile int32_t t29 = -909;

    t29 = ((x197/(x198%x199))<=x200);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x201 = 16U;
	static int16_t x203 = INT16_MAX;
	int32_t x204 = INT32_MAX;
	static int32_t t30 = 1;

    t30 = ((x201/(x202%x203))<=x204);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x205 = 0U;
	uint16_t x206 = 3U;
	uint64_t x208 = 10504968542LLU;
	int32_t t31 = -66;

    t31 = ((x205/(x206%x207))<=x208);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x223 = INT64_MAX;
	uint8_t x224 = UINT8_MAX;
	static int32_t t32 = 12809074;

    t32 = ((x221/(x222%x223))<=x224);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x227 = 31U;
	uint32_t x228 = 251424U;
	volatile int32_t t33 = -12431;

    t33 = ((x225/(x226%x227))<=x228);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x229 = 1898U;
	uint32_t x230 = 8285097U;
	int32_t t34 = 380456105;

    t34 = ((x229/(x230%x231))<=x232);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x233 = UINT64_MAX;
	static int16_t x234 = INT16_MIN;
	int32_t x236 = INT32_MIN;
	volatile int32_t t35 = 99083425;

    t35 = ((x233/(x234%x235))<=x236);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x237 = INT16_MIN;
	uint16_t x239 = 3U;
	int32_t t36 = 19;

    t36 = ((x237/(x238%x239))<=x240);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x241 = 4982;
	static volatile int8_t x242 = 7;
	volatile int16_t x243 = INT16_MAX;
	uint8_t x244 = 4U;
	static int32_t t37 = -63812562;

    t37 = ((x241/(x242%x243))<=x244);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x245 = -1LL;
	volatile uint32_t x246 = 50U;
	static volatile int64_t x248 = INT64_MAX;
	volatile int32_t t38 = -22730508;

    t38 = ((x245/(x246%x247))<=x248);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x253 = INT16_MIN;
	volatile int16_t x254 = INT16_MIN;
	static uint8_t x255 = 3U;
	static volatile uint64_t x256 = UINT64_MAX;
	int32_t t39 = 2;

    t39 = ((x253/(x254%x255))<=x256);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x257 = 124U;
	volatile int32_t x258 = INT32_MAX;
	int16_t x259 = 2;
	volatile int32_t x260 = -1;
	volatile int32_t t40 = -181;

    t40 = ((x257/(x258%x259))<=x260);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x262 = 125;
	int8_t x263 = INT8_MAX;
	volatile int32_t t41 = -3338212;

    t41 = ((x261/(x262%x263))<=x264);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x265 = -161;
	int64_t x267 = -368LL;
	uint16_t x268 = 1302U;
	volatile int32_t t42 = 1565;

    t42 = ((x265/(x266%x267))<=x268);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x269 = -1;
	static int64_t x270 = 1LL;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t43 = 1;

    t43 = ((x269/(x270%x271))<=x272);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x274 = UINT8_MAX;
	int32_t x276 = -34;
	static int32_t t44 = -2156;

    t44 = ((x273/(x274%x275))<=x276);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x285 = INT8_MIN;
	uint32_t x286 = 18615U;
	int64_t x287 = 36LL;
	static volatile int32_t t45 = -93964622;

    t45 = ((x285/(x286%x287))<=x288);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x293 = INT8_MIN;
	int64_t x295 = INT64_MIN;
	static volatile int16_t x296 = -1;
	volatile int32_t t46 = 0;

    t46 = ((x293/(x294%x295))<=x296);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x297 = -1;
	int32_t x299 = 497491254;
	volatile int64_t x300 = INT64_MIN;

    t47 = ((x297/(x298%x299))<=x300);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x301 = 1907LL;
	uint32_t x302 = 1U;
	uint8_t x303 = 99U;
	int16_t x304 = 0;

    t48 = ((x301/(x302%x303))<=x304);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x305 = 19U;
	int32_t x306 = INT32_MIN;
	int16_t x308 = INT16_MIN;
	int32_t t49 = -46;

    t49 = ((x305/(x306%x307))<=x308);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x310 = 2U;
	uint8_t x311 = UINT8_MAX;
	int32_t t50 = -60158;

    t50 = ((x309/(x310%x311))<=x312);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x313 = -1343119892LL;
	uint8_t x314 = 116U;
	static uint64_t x315 = UINT64_MAX;
	volatile int64_t x316 = INT64_MIN;

    t51 = ((x313/(x314%x315))<=x316);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x317 = INT32_MIN;
	int16_t x319 = INT16_MIN;
	int8_t x320 = -1;
	volatile int32_t t52 = 0;

    t52 = ((x317/(x318%x319))<=x320);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x322 = UINT8_MAX;
	volatile uint16_t x323 = 604U;
	int8_t x324 = INT8_MIN;
	static int32_t t53 = -5306;

    t53 = ((x321/(x322%x323))<=x324);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x333 = INT32_MIN;
	volatile int64_t x334 = INT64_MAX;
	static volatile int64_t x335 = -1744288677013859LL;
	static uint32_t x336 = 955971U;

    t54 = ((x333/(x334%x335))<=x336);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x342 = -47;
	int32_t t55 = 95829290;

    t55 = ((x341/(x342%x343))<=x344);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x345 = -1;
	volatile int32_t x346 = -1;
	static int64_t x347 = INT64_MIN;
	int16_t x348 = -11;
	static volatile int32_t t56 = 0;

    t56 = ((x345/(x346%x347))<=x348);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x353 = INT8_MAX;
	static volatile int16_t x354 = -1;
	uint16_t x355 = 4U;
	uint16_t x356 = 82U;
	volatile int32_t t57 = -63122771;

    t57 = ((x353/(x354%x355))<=x356);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x357 = -1;
	volatile uint16_t x360 = UINT16_MAX;
	static int32_t t58 = 29172728;

    t58 = ((x357/(x358%x359))<=x360);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x366 = -79203LL;
	static int64_t x367 = INT64_MIN;
	int8_t x368 = -5;

    t59 = ((x365/(x366%x367))<=x368);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x382 = INT8_MIN;
	volatile int32_t x384 = -62191;

    t60 = ((x381/(x382%x383))<=x384);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x385 = 47345402LLU;
	static int64_t x387 = -12273438919836756LL;
	volatile int32_t t61 = -99508934;

    t61 = ((x385/(x386%x387))<=x388);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x389 = INT64_MAX;
	int8_t x390 = -3;
	volatile uint8_t x391 = UINT8_MAX;
	static volatile uint32_t x392 = 110606U;

    t62 = ((x389/(x390%x391))<=x392);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x393 = -1;
	int16_t x394 = INT16_MIN;
	int64_t x395 = -100LL;
	volatile uint32_t x396 = 9U;

    t63 = ((x393/(x394%x395))<=x396);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x397 = INT8_MIN;
	volatile int16_t x398 = INT16_MIN;
	static int64_t x399 = -1450560417027813LL;
	int32_t t64 = -7614;

    t64 = ((x397/(x398%x399))<=x400);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x401 = -509078473;
	static int64_t x402 = 483075419526LL;
	volatile int32_t t65 = 1707341;

    t65 = ((x401/(x402%x403))<=x404);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x405 = UINT32_MAX;
	int32_t x406 = INT32_MIN;
	static int8_t x407 = 47;
	uint64_t x408 = 33136987011107LLU;
	volatile int32_t t66 = 123086282;

    t66 = ((x405/(x406%x407))<=x408);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x418 = INT16_MAX;
	uint64_t x419 = UINT64_MAX;
	int16_t x420 = -52;
	volatile int32_t t67 = 37924;

    t67 = ((x417/(x418%x419))<=x420);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x421 = INT32_MAX;
	static uint8_t x422 = 1U;
	uint64_t x423 = UINT64_MAX;
	volatile int8_t x424 = INT8_MAX;

    t68 = ((x421/(x422%x423))<=x424);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x425 = -1LL;
	uint8_t x428 = 1U;
	int32_t t69 = -1;

    t69 = ((x425/(x426%x427))<=x428);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x430 = INT16_MIN;
	static int64_t x431 = -3LL;
	int16_t x432 = -1;

    t70 = ((x429/(x430%x431))<=x432);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x437 = -1LL;
	uint16_t x438 = UINT16_MAX;
	static volatile int32_t x439 = INT32_MIN;
	volatile int32_t t71 = 1;

    t71 = ((x437/(x438%x439))<=x440);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x445 = 11082U;
	uint8_t x446 = 17U;
	int16_t x447 = 22;
	uint64_t x448 = 6680LLU;

    t72 = ((x445/(x446%x447))<=x448);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x450 = -1;
	int8_t x451 = INT8_MAX;
	int16_t x452 = 591;

    t73 = ((x449/(x450%x451))<=x452);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x453 = -1;
	volatile int8_t x454 = 21;
	static volatile int8_t x455 = INT8_MIN;

    t74 = ((x453/(x454%x455))<=x456);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x460 = INT32_MIN;
	volatile int32_t t75 = 361;

    t75 = ((x457/(x458%x459))<=x460);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x461 = -1;
	int16_t x462 = -142;
	uint32_t x463 = UINT32_MAX;
	uint32_t x464 = UINT32_MAX;
	volatile int32_t t76 = 50595;

    t76 = ((x461/(x462%x463))<=x464);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x469 = UINT64_MAX;
	static uint8_t x470 = 5U;
	int16_t x471 = 14298;
	static volatile int32_t x472 = INT32_MIN;
	int32_t t77 = -14842452;

    t77 = ((x469/(x470%x471))<=x472);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x477 = UINT8_MAX;
	int8_t x478 = -43;
	int32_t x479 = INT32_MIN;
	static int32_t x480 = -1;
	volatile int32_t t78 = 52;

    t78 = ((x477/(x478%x479))<=x480);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x481 = UINT16_MAX;
	volatile uint32_t x482 = 25159151U;
	int32_t x483 = 4013411;
	uint64_t x484 = 177754711080688LLU;

    t79 = ((x481/(x482%x483))<=x484);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x485 = INT8_MIN;
	int8_t x486 = 7;
	static volatile int8_t x487 = INT8_MAX;
	volatile uint32_t x488 = 935794U;
	volatile int32_t t80 = 78421948;

    t80 = ((x485/(x486%x487))<=x488);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x489 = INT64_MAX;
	volatile uint16_t x490 = 127U;
	static volatile int16_t x491 = INT16_MIN;
	volatile int16_t x492 = 417;

    t81 = ((x489/(x490%x491))<=x492);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x493 = 25873U;
	int64_t x494 = INT64_MIN;
	uint32_t x495 = 2055262381U;
	volatile int16_t x496 = INT16_MIN;
	static int32_t t82 = 2;

    t82 = ((x493/(x494%x495))<=x496);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x497 = UINT8_MAX;
	static volatile uint32_t x498 = UINT32_MAX;
	uint32_t x499 = 273820272U;
	static volatile int32_t x500 = INT32_MIN;
	static volatile int32_t t83 = 14;

    t83 = ((x497/(x498%x499))<=x500);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x505 = INT64_MIN;
	static volatile int8_t x506 = INT8_MAX;
	int64_t x507 = 14085511318LL;
	int64_t x508 = INT64_MIN;
	int32_t t84 = -998;

    t84 = ((x505/(x506%x507))<=x508);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x509 = INT8_MAX;
	int32_t x510 = -150;
	static uint8_t x512 = 12U;

    t85 = ((x509/(x510%x511))<=x512);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x517 = 17328709124826314LL;
	static volatile int64_t x518 = INT64_MAX;
	uint8_t x520 = UINT8_MAX;

    t86 = ((x517/(x518%x519))<=x520);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x523 = INT64_MIN;
	uint32_t x524 = UINT32_MAX;
	int32_t t87 = -207;

    t87 = ((x521/(x522%x523))<=x524);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x529 = 2U;
	uint16_t x530 = 7526U;
	volatile int16_t x531 = INT16_MIN;
	volatile int32_t t88 = -245389;

    t88 = ((x529/(x530%x531))<=x532);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x537 = UINT16_MAX;
	volatile int64_t x538 = -416016LL;
	uint32_t x540 = 13U;
	int32_t t89 = -16638;

    t89 = ((x537/(x538%x539))<=x540);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x541 = -1;
	int8_t x542 = 1;
	int64_t x543 = 383801436230573507LL;
	static uint64_t x544 = UINT64_MAX;

    t90 = ((x541/(x542%x543))<=x544);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x545 = INT16_MAX;
	int32_t x546 = -1;
	uint16_t x548 = 123U;
	static int32_t t91 = -1870;

    t91 = ((x545/(x546%x547))<=x548);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x550 = INT32_MAX;
	uint32_t x551 = UINT32_MAX;
	uint16_t x552 = 4U;
	volatile int32_t t92 = -544186577;

    t92 = ((x549/(x550%x551))<=x552);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x557 = UINT64_MAX;
	volatile int8_t x558 = -1;
	int8_t x559 = INT8_MAX;
	static int32_t x560 = INT32_MIN;
	int32_t t93 = -14792258;

    t93 = ((x557/(x558%x559))<=x560);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x561 = UINT32_MAX;
	int16_t x563 = INT16_MAX;
	uint64_t x564 = 16906981805507560LLU;
	static volatile int32_t t94 = 121;

    t94 = ((x561/(x562%x563))<=x564);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x565 = 28LLU;
	uint32_t x566 = 1706238178U;
	static uint8_t x567 = 87U;
	int32_t t95 = 3730380;

    t95 = ((x565/(x566%x567))<=x568);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x569 = INT32_MIN;
	uint16_t x570 = 1456U;
	static uint16_t x571 = 12133U;
	int16_t x572 = INT16_MAX;
	int32_t t96 = 2087870;

    t96 = ((x569/(x570%x571))<=x572);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x575 = 189158062161344553LLU;
	volatile int64_t x576 = INT64_MIN;

    t97 = ((x573/(x574%x575))<=x576);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint16_t x577 = UINT16_MAX;
	int8_t x578 = 12;
	static volatile int32_t t98 = -207674340;

    t98 = ((x577/(x578%x579))<=x580);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x581 = UINT32_MAX;
	int64_t x582 = INT64_MAX;
	uint64_t x583 = 486880190124995717LLU;
	volatile int64_t x584 = INT64_MAX;
	static volatile int32_t t99 = -490529;

    t99 = ((x581/(x582%x583))<=x584);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x585 = INT64_MIN;
	uint32_t x586 = 786U;
	int64_t x587 = 1065162488LL;
	int32_t x588 = 89;
	volatile int32_t t100 = -328355961;

    t100 = ((x585/(x586%x587))<=x588);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x589 = INT64_MAX;
	static volatile uint64_t x590 = UINT64_MAX;
	uint16_t x591 = 2U;
	uint16_t x592 = 3U;
	static volatile int32_t t101 = 11;

    t101 = ((x589/(x590%x591))<=x592);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x601 = UINT16_MAX;
	uint32_t x602 = 139194046U;
	uint16_t x604 = 24051U;
	int32_t t102 = -4;

    t102 = ((x601/(x602%x603))<=x604);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x609 = INT16_MIN;
	static int32_t x610 = -1;
	uint64_t x611 = 60LLU;
	int64_t x612 = -1LL;
	volatile int32_t t103 = 14;

    t103 = ((x609/(x610%x611))<=x612);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x613 = -1;
	static int32_t x614 = 1;
	static int64_t x615 = INT64_MIN;
	uint8_t x616 = 82U;
	int32_t t104 = -975400745;

    t104 = ((x613/(x614%x615))<=x616);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x617 = -19;
	uint16_t x618 = 106U;
	int16_t x619 = 7993;
	int32_t x620 = INT32_MAX;
	int32_t t105 = 369515;

    t105 = ((x617/(x618%x619))<=x620);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x621 = -1;
	volatile uint16_t x622 = UINT16_MAX;
	int64_t x624 = INT64_MIN;

    t106 = ((x621/(x622%x623))<=x624);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x625 = -50;
	int8_t x626 = -1;
	uint64_t x627 = 179LLU;
	static uint16_t x628 = 15906U;
	int32_t t107 = -5991;

    t107 = ((x625/(x626%x627))<=x628);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x629 = INT32_MIN;
	uint8_t x631 = 51U;
	static int16_t x632 = INT16_MIN;
	int32_t t108 = -1;

    t108 = ((x629/(x630%x631))<=x632);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x633 = INT32_MAX;
	volatile int8_t x634 = INT8_MIN;
	int64_t x635 = 4292395332998LL;
	uint32_t x636 = 11112092U;
	static volatile int32_t t109 = -5522;

    t109 = ((x633/(x634%x635))<=x636);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x639 = 145860;

    t110 = ((x637/(x638%x639))<=x640);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x645 = 902LL;
	uint64_t x646 = 98037414LLU;
	int32_t x648 = 3312;
	volatile int32_t t111 = -190190;

    t111 = ((x645/(x646%x647))<=x648);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x649 = 1U;
	int32_t x651 = INT32_MIN;
	uint32_t x652 = 51303U;

    t112 = ((x649/(x650%x651))<=x652);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x661 = 910334938475LL;
	volatile uint64_t x663 = 120752426LLU;
	uint32_t x664 = UINT32_MAX;

    t113 = ((x661/(x662%x663))<=x664);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x665 = INT64_MIN;
	static int32_t x666 = -398117;
	int32_t x668 = 5;
	int32_t t114 = -251200435;

    t114 = ((x665/(x666%x667))<=x668);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x673 = INT8_MIN;
	int8_t x675 = INT8_MIN;
	int8_t x676 = -1;
	volatile int32_t t115 = 984;

    t115 = ((x673/(x674%x675))<=x676);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x678 = 51;
	int32_t x679 = INT32_MIN;
	int8_t x680 = -24;
	int32_t t116 = 686680;

    t116 = ((x677/(x678%x679))<=x680);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x681 = UINT32_MAX;
	int8_t x682 = -6;
	uint8_t x683 = UINT8_MAX;
	volatile uint16_t x684 = 0U;
	int32_t t117 = 466894;

    t117 = ((x681/(x682%x683))<=x684);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x685 = UINT8_MAX;
	int32_t x686 = INT32_MIN;
	volatile uint16_t x687 = 120U;
	int32_t t118 = -1;

    t118 = ((x685/(x686%x687))<=x688);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x689 = -5628624;
	volatile uint32_t x690 = 2806709U;
	static volatile uint16_t x692 = 7U;
	volatile int32_t t119 = 0;

    t119 = ((x689/(x690%x691))<=x692);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x693 = 6766U;
	uint16_t x695 = 13627U;
	uint64_t x696 = UINT64_MAX;
	volatile int32_t t120 = 1939116;

    t120 = ((x693/(x694%x695))<=x696);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x697 = 10;
	static int64_t x698 = INT64_MAX;
	uint16_t x699 = 444U;
	int32_t t121 = -6;

    t121 = ((x697/(x698%x699))<=x700);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x701 = INT8_MAX;
	int64_t x702 = -331863LL;
	int8_t x703 = INT8_MAX;
	int8_t x704 = INT8_MIN;
	int32_t t122 = 1;

    t122 = ((x701/(x702%x703))<=x704);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x706 = 6059852U;
	int64_t x707 = 3543881442772199167LL;
	volatile int64_t x708 = -4861436489LL;
	volatile int32_t t123 = -931;

    t123 = ((x705/(x706%x707))<=x708);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x709 = 1908710U;
	int32_t x711 = -9;
	static int16_t x712 = INT16_MIN;

    t124 = ((x709/(x710%x711))<=x712);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x713 = 524843558573379505LLU;
	int16_t x714 = -12;
	static uint32_t x715 = 220302881U;
	uint64_t x716 = 484794325969LLU;
	static int32_t t125 = -29092;

    t125 = ((x713/(x714%x715))<=x716);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x717 = -17;
	uint32_t x718 = 516331782U;
	int32_t t126 = 31;

    t126 = ((x717/(x718%x719))<=x720);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x721 = 117;
	uint64_t x723 = UINT64_MAX;
	int32_t x724 = -1;
	int32_t t127 = 809;

    t127 = ((x721/(x722%x723))<=x724);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x728 = INT16_MAX;

    t128 = ((x725/(x726%x727))<=x728);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x729 = INT64_MIN;
	uint32_t x730 = 41323292U;
	int32_t x731 = INT32_MAX;
	static int32_t x732 = INT32_MAX;
	int32_t t129 = -810173;

    t129 = ((x729/(x730%x731))<=x732);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x734 = 19U;
	static int16_t x735 = 120;
	static int32_t x736 = -1;

    t130 = ((x733/(x734%x735))<=x736);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x737 = 2U;
	uint64_t x740 = 4806355LLU;
	volatile int32_t t131 = -762;

    t131 = ((x737/(x738%x739))<=x740);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x745 = INT8_MIN;
	static int16_t x746 = -5114;
	static int64_t x748 = INT64_MIN;

    t132 = ((x745/(x746%x747))<=x748);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x749 = -3;
	volatile uint64_t x750 = 906LLU;
	static int8_t x751 = -2;
	static int32_t x752 = -1;

    t133 = ((x749/(x750%x751))<=x752);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x753 = INT32_MIN;
	uint32_t x754 = UINT32_MAX;
	uint16_t x755 = 66U;
	int32_t t134 = 254614;

    t134 = ((x753/(x754%x755))<=x756);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x761 = -1;
	int64_t x764 = -34828114860LL;
	volatile int32_t t135 = 175;

    t135 = ((x761/(x762%x763))<=x764);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x765 = -1;
	int64_t x766 = 5157LL;
	int8_t x767 = INT8_MIN;
	uint16_t x768 = 1U;
	volatile int32_t t136 = 10782820;

    t136 = ((x765/(x766%x767))<=x768);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x773 = 1101349257688LLU;
	int32_t x775 = INT32_MIN;
	volatile int32_t t137 = 975656;

    t137 = ((x773/(x774%x775))<=x776);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x777 = 2;
	static volatile uint64_t x778 = 1741272319LLU;
	uint32_t x779 = 466075168U;
	uint8_t x780 = 1U;
	int32_t t138 = -7;

    t138 = ((x777/(x778%x779))<=x780);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x783 = 21;

    t139 = ((x781/(x782%x783))<=x784);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x785 = 52548998578609LLU;
	int64_t x786 = 119139153508LL;
	volatile uint64_t x788 = 2272LLU;
	int32_t t140 = -1218742;

    t140 = ((x785/(x786%x787))<=x788);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x793 = 53LLU;
	uint32_t x795 = 1213291U;
	static uint16_t x796 = UINT16_MAX;
	volatile int32_t t141 = 6796365;

    t141 = ((x793/(x794%x795))<=x796);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x797 = 11U;
	int8_t x798 = INT8_MAX;
	int8_t x799 = INT8_MIN;
	volatile int32_t x800 = INT32_MIN;

    t142 = ((x797/(x798%x799))<=x800);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x802 = 19514LLU;
	uint32_t x803 = UINT32_MAX;
	int32_t t143 = 98305;

    t143 = ((x801/(x802%x803))<=x804);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x805 = UINT64_MAX;
	int32_t x806 = INT32_MAX;
	static int32_t x808 = -955124;
	volatile int32_t t144 = 82679656;

    t144 = ((x805/(x806%x807))<=x808);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint16_t x809 = 8109U;
	uint16_t x810 = 861U;
	static int16_t x811 = 317;
	static uint64_t x812 = UINT64_MAX;
	int32_t t145 = -1646875;

    t145 = ((x809/(x810%x811))<=x812);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x814 = 1445;
	uint16_t x815 = UINT16_MAX;
	static int32_t x816 = 12;
	int32_t t146 = -79685;

    t146 = ((x813/(x814%x815))<=x816);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x817 = UINT8_MAX;
	int16_t x818 = -4;
	int32_t x820 = -1;
	volatile int32_t t147 = 0;

    t147 = ((x817/(x818%x819))<=x820);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x829 = INT8_MIN;
	int16_t x830 = -197;
	uint32_t x831 = 1628907U;
	volatile int8_t x832 = INT8_MAX;
	volatile int32_t t148 = 0;

    t148 = ((x829/(x830%x831))<=x832);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x833 = INT32_MIN;
	volatile int16_t x834 = -67;
	int16_t x835 = INT16_MAX;
	int64_t x836 = INT64_MIN;
	int32_t t149 = -5;

    t149 = ((x833/(x834%x835))<=x836);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x837 = UINT8_MAX;
	static uint64_t x838 = UINT64_MAX;
	volatile int16_t x840 = INT16_MIN;
	int32_t t150 = 117;

    t150 = ((x837/(x838%x839))<=x840);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x846 = INT64_MAX;
	volatile int8_t x847 = INT8_MIN;
	int32_t x848 = 1;

    t151 = ((x845/(x846%x847))<=x848);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x849 = UINT64_MAX;
	int32_t x852 = INT32_MIN;
	volatile int32_t t152 = 22;

    t152 = ((x849/(x850%x851))<=x852);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x854 = 724330328510437216LL;
	volatile int8_t x855 = INT8_MIN;
	int64_t x856 = INT64_MIN;
	static volatile int32_t t153 = -2019708;

    t153 = ((x853/(x854%x855))<=x856);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x865 = 1163U;
	int8_t x866 = -1;
	int64_t x868 = 543847107743790918LL;
	int32_t t154 = 416;

    t154 = ((x865/(x866%x867))<=x868);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x869 = 2U;
	int8_t x870 = INT8_MIN;
	int32_t x871 = INT32_MAX;
	volatile uint32_t x872 = 0U;

    t155 = ((x869/(x870%x871))<=x872);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x874 = INT32_MIN;
	uint32_t x875 = 974646U;
	volatile uint8_t x876 = 5U;
	volatile int32_t t156 = 51218;

    t156 = ((x873/(x874%x875))<=x876);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x881 = 341U;
	volatile int8_t x882 = -16;
	int16_t x884 = INT16_MAX;
	int32_t t157 = -233342;

    t157 = ((x881/(x882%x883))<=x884);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x885 = -1;
	static int16_t x886 = -1;
	volatile int64_t x887 = INT64_MIN;
	static int16_t x888 = -72;

    t158 = ((x885/(x886%x887))<=x888);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x889 = 13983;
	int64_t x890 = -1LL;
	int32_t x891 = INT32_MAX;
	uint8_t x892 = UINT8_MAX;
	volatile int32_t t159 = 3808;

    t159 = ((x889/(x890%x891))<=x892);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x893 = -981371541065174642LL;
	int32_t x894 = 39989;
	int8_t x895 = -43;
	uint8_t x896 = 2U;
	int32_t t160 = 1;

    t160 = ((x893/(x894%x895))<=x896);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x897 = -7;
	int8_t x898 = INT8_MAX;
	static uint64_t x899 = 4429LLU;
	volatile uint16_t x900 = 350U;
	static int32_t t161 = -31;

    t161 = ((x897/(x898%x899))<=x900);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x905 = -1;
	volatile uint64_t x906 = 13996153190LLU;
	int16_t x907 = INT16_MAX;
	int32_t x908 = -1;
	static volatile int32_t t162 = -2;

    t162 = ((x905/(x906%x907))<=x908);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x909 = UINT32_MAX;
	uint32_t x912 = UINT32_MAX;
	static int32_t t163 = 3040;

    t163 = ((x909/(x910%x911))<=x912);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x913 = 40U;
	uint32_t x914 = 318U;
	uint64_t x915 = 80009567414568401LLU;
	int32_t x916 = INT32_MIN;

    t164 = ((x913/(x914%x915))<=x916);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x925 = INT16_MIN;
	static uint8_t x926 = UINT8_MAX;
	uint32_t x927 = UINT32_MAX;
	static int64_t x928 = INT64_MAX;
	volatile int32_t t165 = 1872;

    t165 = ((x925/(x926%x927))<=x928);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x929 = UINT32_MAX;
	int64_t x931 = INT64_MAX;
	volatile uint16_t x932 = UINT16_MAX;
	int32_t t166 = 306060471;

    t166 = ((x929/(x930%x931))<=x932);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x933 = -1;
	static uint8_t x934 = 5U;
	int16_t x935 = INT16_MAX;
	static int64_t x936 = -3LL;
	static volatile int32_t t167 = 382856;

    t167 = ((x933/(x934%x935))<=x936);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x937 = UINT64_MAX;
	uint8_t x938 = UINT8_MAX;
	static uint8_t x939 = 8U;
	volatile int16_t x940 = INT16_MIN;
	volatile int32_t t168 = -572;

    t168 = ((x937/(x938%x939))<=x940);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x941 = 195LL;
	int16_t x942 = INT16_MIN;
	static volatile int64_t x943 = INT64_MIN;
	static int16_t x944 = -51;
	static volatile int32_t t169 = -708587;

    t169 = ((x941/(x942%x943))<=x944);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x945 = INT16_MAX;
	static int8_t x946 = -1;
	int16_t x947 = -50;
	volatile int64_t x948 = INT64_MAX;
	static int32_t t170 = 0;

    t170 = ((x945/(x946%x947))<=x948);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x949 = -1;
	int32_t x950 = INT32_MIN;
	int8_t x952 = INT8_MIN;

    t171 = ((x949/(x950%x951))<=x952);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x953 = 319U;
	static int8_t x954 = 2;
	int16_t x955 = -9193;
	volatile int32_t t172 = -1665;

    t172 = ((x953/(x954%x955))<=x956);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x957 = 296U;
	volatile int64_t x958 = INT64_MIN;
	uint16_t x959 = 1436U;
	volatile int32_t t173 = -927382;

    t173 = ((x957/(x958%x959))<=x960);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x965 = 509579U;
	int32_t x966 = -8;
	int16_t x967 = INT16_MAX;
	int32_t x968 = INT32_MIN;

    t174 = ((x965/(x966%x967))<=x968);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x969 = INT8_MIN;
	volatile int32_t x970 = INT32_MIN;
	int16_t x971 = INT16_MAX;
	int32_t x972 = INT32_MIN;
	volatile int32_t t175 = -1;

    t175 = ((x969/(x970%x971))<=x972);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x973 = -1;
	uint8_t x974 = UINT8_MAX;
	int64_t x975 = INT64_MIN;
	uint16_t x976 = UINT16_MAX;
	volatile int32_t t176 = -5;

    t176 = ((x973/(x974%x975))<=x976);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x985 = INT8_MIN;
	int64_t x987 = 4592913517788653188LL;
	int32_t x988 = INT32_MIN;
	volatile int32_t t177 = 17457;

    t177 = ((x985/(x986%x987))<=x988);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x989 = 4069264019254842LLU;
	int8_t x992 = INT8_MIN;
	static int32_t t178 = -2317;

    t178 = ((x989/(x990%x991))<=x992);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x993 = 14U;
	volatile uint16_t x995 = 7U;
	static int8_t x996 = -9;
	int32_t t179 = -59891000;

    t179 = ((x993/(x994%x995))<=x996);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x998 = 2734600;
	volatile int32_t x999 = 6;
	int32_t x1000 = INT32_MAX;
	static volatile int32_t t180 = 21;

    t180 = ((x997/(x998%x999))<=x1000);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1005 = INT8_MAX;
	uint64_t x1007 = 8LLU;
	int32_t t181 = -79769;

    t181 = ((x1005/(x1006%x1007))<=x1008);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1009 = -441424196995023LL;
	int64_t x1010 = -1LL;
	static int64_t x1011 = 1498968LL;
	static volatile int32_t t182 = -60825;

    t182 = ((x1009/(x1010%x1011))<=x1012);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1013 = -4;
	uint32_t x1015 = 190603097U;
	static volatile int64_t x1016 = INT64_MIN;
	volatile int32_t t183 = -90891156;

    t183 = ((x1013/(x1014%x1015))<=x1016);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1017 = INT8_MAX;
	volatile uint32_t x1019 = 264154719U;
	int8_t x1020 = INT8_MAX;
	static int32_t t184 = 1;

    t184 = ((x1017/(x1018%x1019))<=x1020);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1025 = INT64_MAX;
	int32_t x1026 = INT32_MIN;
	uint8_t x1027 = 35U;
	int16_t x1028 = INT16_MIN;
	int32_t t185 = -1028;

    t185 = ((x1025/(x1026%x1027))<=x1028);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1034 = 71U;
	static uint32_t x1035 = 502U;
	int32_t t186 = -53;

    t186 = ((x1033/(x1034%x1035))<=x1036);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x1037 = 859837148536LLU;
	static int32_t x1039 = 32;
	volatile int16_t x1040 = -1;
	static volatile int32_t t187 = 0;

    t187 = ((x1037/(x1038%x1039))<=x1040);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1041 = 0LL;
	uint64_t x1042 = 222382465LLU;
	int32_t t188 = -20;

    t188 = ((x1041/(x1042%x1043))<=x1044);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1045 = INT64_MAX;
	uint64_t x1046 = 1LLU;
	uint8_t x1047 = UINT8_MAX;
	int16_t x1048 = -1;
	int32_t t189 = -24;

    t189 = ((x1045/(x1046%x1047))<=x1048);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1049 = INT64_MIN;
	int16_t x1050 = INT16_MIN;
	int8_t x1052 = INT8_MIN;
	volatile int32_t t190 = -5283;

    t190 = ((x1049/(x1050%x1051))<=x1052);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1053 = -7988;
	static uint8_t x1054 = UINT8_MAX;
	int16_t x1055 = INT16_MIN;
	static volatile uint8_t x1056 = UINT8_MAX;
	int32_t t191 = 43509;

    t191 = ((x1053/(x1054%x1055))<=x1056);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1057 = 1155U;
	static int8_t x1058 = -41;
	static uint32_t x1060 = 220U;
	int32_t t192 = 170;

    t192 = ((x1057/(x1058%x1059))<=x1060);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1062 = -5744883053LL;
	int32_t x1063 = INT32_MAX;
	uint64_t x1064 = 7825LLU;
	volatile int32_t t193 = 392157211;

    t193 = ((x1061/(x1062%x1063))<=x1064);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1066 = -1LL;
	int8_t x1067 = INT8_MIN;
	volatile int32_t t194 = -22539;

    t194 = ((x1065/(x1066%x1067))<=x1068);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x1069 = UINT64_MAX;
	int32_t x1070 = -1;
	static uint8_t x1071 = UINT8_MAX;
	uint64_t x1072 = UINT64_MAX;
	int32_t t195 = -135939918;

    t195 = ((x1069/(x1070%x1071))<=x1072);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x1074 = 13;
	static int32_t x1075 = 996443153;
	uint64_t x1076 = 1958774739207277496LLU;
	volatile int32_t t196 = 107;

    t196 = ((x1073/(x1074%x1075))<=x1076);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1081 = INT8_MIN;
	int16_t x1082 = INT16_MIN;
	int16_t x1084 = -2091;

    t197 = ((x1081/(x1082%x1083))<=x1084);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1085 = INT32_MIN;
	uint64_t x1086 = 161156LLU;
	int64_t x1087 = -1LL;
	int8_t x1088 = -4;
	volatile int32_t t198 = 88;

    t198 = ((x1085/(x1086%x1087))<=x1088);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1089 = INT64_MIN;
	static volatile int16_t x1090 = 9739;
	uint8_t x1091 = UINT8_MAX;
	int32_t x1092 = INT32_MIN;

    t199 = ((x1089/(x1090%x1091))<=x1092);

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

