
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

static int16_t x21 = INT16_MIN;
int8_t x22 = 1;
volatile uint8_t x32 = 12U;
volatile int32_t t3 = 187;
int32_t t4 = -6875081;
static int16_t x51 = -1;
int32_t x66 = INT32_MIN;
int32_t t7 = -4053392;
volatile int32_t x73 = INT32_MIN;
static volatile int8_t x81 = INT8_MIN;
volatile int16_t x100 = -59;
int16_t x111 = -1;
volatile uint32_t t16 = 113703U;
volatile uint16_t x118 = 0U;
uint32_t x138 = 0U;
int8_t x172 = 36;
static volatile uint32_t x188 = UINT32_MAX;
static int64_t x189 = -3953142354597531LL;
static int16_t x196 = INT16_MAX;
int16_t x197 = INT16_MAX;
static volatile int32_t t27 = -6465;
static int64_t x201 = INT64_MIN;
static uint32_t x209 = 112172U;
volatile uint32_t t30 = 28804U;
volatile uint8_t x247 = 1U;
int32_t x258 = -54581;
int8_t x260 = 7;
static volatile uint8_t x271 = 6U;
volatile uint8_t x279 = 3U;
uint64_t x291 = UINT64_MAX;
uint32_t x315 = UINT32_MAX;
int16_t x316 = INT16_MIN;
static int64_t x321 = INT64_MIN;
uint64_t x323 = UINT64_MAX;
int32_t x325 = -1457587;
static int32_t x330 = INT32_MIN;
volatile int32_t t51 = 54462;
static uint32_t x348 = UINT32_MAX;
static volatile uint32_t t53 = UINT32_MAX;
volatile int32_t t54 = 336973;
static volatile int32_t x365 = INT32_MIN;
int8_t x366 = 13;
volatile int32_t x374 = INT32_MIN;
int16_t x375 = -7569;
static int32_t t58 = -10731028;
volatile uint64_t x392 = UINT64_MAX;
static int8_t x393 = 14;
volatile uint16_t x395 = 1U;
int32_t t62 = 8;
uint64_t x404 = 831594546716788LLU;
int16_t x410 = INT16_MAX;
int64_t x411 = -1LL;
int16_t x452 = -1;
static int32_t t73 = 12;
uint16_t x474 = UINT16_MAX;
volatile int32_t t77 = 910070037;
uint32_t x486 = 75432U;
uint64_t x487 = 2977540632443LLU;
int64_t x489 = INT64_MAX;
int8_t x490 = 0;
int64_t t80 = INT64_MAX;
static uint32_t x493 = 4U;
int16_t x496 = -938;
static int32_t t82 = -32713648;
volatile int64_t x524 = -1LL;
uint8_t x529 = UINT8_MAX;
volatile int32_t t87 = 1942212;
int16_t x545 = 5934;
uint64_t x547 = 2703584588787688LLU;
static volatile uint32_t t90 = UINT32_MAX;
int16_t x565 = -353;
uint64_t x574 = 7LLU;
int32_t x578 = -552;
int32_t x579 = -81833;
uint8_t x584 = UINT8_MAX;
volatile int32_t t95 = -6;
int8_t x587 = INT8_MIN;
uint16_t x588 = UINT16_MAX;
uint64_t x597 = UINT64_MAX;
volatile uint32_t x598 = 239U;
int8_t x599 = INT8_MIN;
int64_t x611 = INT64_MAX;
static int64_t x619 = 272957154405456722LL;
static int32_t x623 = 0;
int64_t x634 = -523643367324392LL;
int32_t x638 = INT32_MAX;
static int64_t x641 = INT64_MIN;
int8_t x654 = 29;
int32_t t108 = -1;
uint64_t x658 = UINT64_MAX;
int64_t x659 = -1LL;
uint32_t x662 = UINT32_MAX;
static volatile int64_t x666 = -1LL;
volatile int32_t t111 = 337777227;
static int8_t x675 = 7;
int16_t x688 = INT16_MAX;
int32_t x689 = -1251;
uint16_t x691 = 661U;
uint32_t x694 = 1744471U;
int16_t x697 = INT16_MAX;
static int16_t x725 = INT16_MAX;
uint32_t x726 = 85U;
int8_t x733 = 7;
uint16_t x758 = UINT16_MAX;
static int64_t x769 = INT64_MIN;
int8_t x783 = 4;
static volatile uint32_t t133 = UINT32_MAX;
int8_t x793 = 1;
int8_t x796 = INT8_MIN;
uint64_t x820 = 3968051408LLU;
int32_t x821 = -7;
int32_t x829 = INT32_MIN;
int16_t x838 = INT16_MIN;
int32_t x843 = INT32_MAX;
uint64_t x844 = 3327633921LLU;
static uint32_t x849 = 398U;
int32_t x856 = INT32_MIN;
int8_t x857 = INT8_MAX;
int8_t x858 = INT8_MAX;
volatile uint16_t x859 = UINT16_MAX;
uint16_t x870 = 521U;
static int32_t x874 = -1;
volatile uint8_t x876 = 6U;
int32_t x877 = INT32_MAX;
int32_t x879 = INT32_MIN;
volatile uint8_t x880 = 0U;
uint64_t x883 = 265479837LLU;
uint16_t x896 = UINT16_MAX;
uint16_t x908 = 251U;
volatile int32_t t158 = -14582;
uint8_t x925 = 70U;
int16_t x927 = -1;
volatile int32_t t160 = 26;
uint8_t x934 = 59U;
static int8_t x939 = 0;
uint16_t x945 = UINT16_MAX;
volatile int32_t t163 = 76057;
int16_t x949 = 131;
static int32_t x959 = INT32_MIN;
static volatile int32_t t165 = -3639;
static volatile uint64_t t168 = UINT64_MAX;
int32_t x976 = INT32_MIN;
static int64_t t169 = INT64_MIN;
int32_t x981 = INT32_MIN;
volatile uint32_t x982 = UINT32_MAX;
int32_t x985 = INT32_MIN;
volatile int32_t x989 = INT32_MAX;
volatile int32_t t172 = INT32_MAX;
static int8_t x999 = INT8_MIN;
int32_t x1001 = 119;
int64_t x1002 = 86704608795293899LL;
int32_t x1004 = -404;
volatile int32_t t174 = 26713156;
int16_t x1008 = INT16_MIN;
volatile int32_t t175 = 674267;
uint64_t x1011 = 65652729463LLU;
static uint8_t x1013 = UINT8_MAX;
int32_t x1016 = 63598;
volatile int32_t t178 = 697621;
static int8_t x1026 = -1;
uint8_t x1050 = 4U;
static volatile uint32_t x1051 = 3503324U;
int8_t x1054 = INT8_MAX;
int16_t x1059 = INT16_MAX;
uint64_t x1067 = 9211281525LLU;
int32_t x1080 = 40982;
volatile int8_t x1083 = 0;
static int8_t x1086 = INT8_MIN;
volatile int32_t t191 = 196620;
uint16_t x1091 = 574U;
int32_t t192 = -447536457;
static volatile int8_t x1094 = INT8_MIN;
int64_t x1111 = 3130783553093333LL;
int32_t x1113 = -1;
int8_t x1118 = INT8_MIN;
int32_t x1122 = INT32_MIN;
int32_t x1131 = -1;
int16_t x1132 = -5;
static uint32_t t199 = UINT32_MAX;


void f0(void) {
    	uint8_t x1 = 25U;
	volatile uint64_t x2 = UINT64_MAX;
	int16_t x3 = 0;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = -12;

    t0 = (x1|(x2>(x3*x4)));

    if (t0 != 25) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 33852332866493LLU;
	volatile int16_t x10 = -129;
	static int32_t x11 = -53071;
	int16_t x12 = -1;
	static uint64_t t1 = 510225776929LLU;

    t1 = (x9|(x10>(x11*x12)));

    if (t1 != 33852332866493LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x23 = 112U;
	static uint64_t x24 = 57460397LLU;
	volatile int32_t t2 = 179;

    t2 = (x21|(x22>(x23*x24)));

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x29 = 0;
	int8_t x30 = INT8_MAX;
	uint16_t x31 = UINT16_MAX;

    t3 = (x29|(x30>(x31*x32)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x33 = UINT8_MAX;
	uint32_t x34 = 14U;
	static int8_t x35 = -1;
	int32_t x36 = -1;

    t4 = (x33|(x34>(x35*x36)));

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x49 = INT64_MIN;
	static volatile uint64_t x50 = UINT64_MAX;
	volatile int32_t x52 = INT32_MAX;
	static volatile int64_t t5 = 14111339521230824LL;

    t5 = (x49|(x50>(x51*x52)));

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x53 = -1LL;
	volatile int16_t x54 = -1;
	volatile int64_t x55 = -10154192263LL;
	int8_t x56 = 0;
	int64_t t6 = 67978786316601968LL;

    t6 = (x53|(x54>(x55*x56)));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x65 = UINT8_MAX;
	int16_t x67 = -1;
	int8_t x68 = INT8_MIN;

    t7 = (x65|(x66>(x67*x68)));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x69 = -1;
	int32_t x70 = 2726;
	int8_t x71 = -2;
	static uint16_t x72 = UINT16_MAX;
	static int32_t t8 = -419313421;

    t8 = (x69|(x70>(x71*x72)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x74 = 10849U;
	int16_t x75 = -1;
	uint16_t x76 = 71U;
	static int32_t t9 = -1665;

    t9 = (x73|(x74>(x75*x76)));

    if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x77 = INT8_MIN;
	int64_t x78 = -1LL;
	volatile int8_t x79 = 24;
	volatile int32_t x80 = 243734;
	volatile int32_t t10 = -421848;

    t10 = (x77|(x78>(x79*x80)));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x82 = INT8_MIN;
	int32_t x83 = -112651;
	volatile int8_t x84 = INT8_MIN;
	int32_t t11 = -68357;

    t11 = (x81|(x82>(x83*x84)));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x89 = 1713435819142LLU;
	uint8_t x90 = 12U;
	volatile int32_t x91 = INT32_MIN;
	uint32_t x92 = UINT32_MAX;
	volatile uint64_t t12 = 994281681935623122LLU;

    t12 = (x89|(x90>(x91*x92)));

    if (t12 != 1713435819142LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x93 = UINT64_MAX;
	int32_t x94 = -324664804;
	uint8_t x95 = 3U;
	uint32_t x96 = UINT32_MAX;
	uint64_t t13 = UINT64_MAX;

    t13 = (x93|(x94>(x95*x96)));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x97 = 2594U;
	static int16_t x98 = INT16_MAX;
	uint8_t x99 = 13U;
	volatile int32_t t14 = -200457;

    t14 = (x97|(x98>(x99*x100)));

    if (t14 != 2595) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x109 = -116;
	int64_t x110 = 410389LL;
	int8_t x112 = INT8_MIN;
	volatile int32_t t15 = -56994;

    t15 = (x109|(x110>(x111*x112)));

    if (t15 != -115) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x113 = 190U;
	static uint8_t x114 = UINT8_MAX;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = UINT32_MAX;

    t16 = (x113|(x114>(x115*x116)));

    if (t16 != 191U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x117 = 3U;
	uint32_t x119 = 88096U;
	uint8_t x120 = 1U;
	volatile int32_t t17 = -434911424;

    t17 = (x117|(x118>(x119*x120)));

    if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x125 = -1;
	volatile int8_t x126 = 0;
	uint8_t x127 = 42U;
	uint16_t x128 = UINT16_MAX;
	int32_t t18 = 41;

    t18 = (x125|(x126>(x127*x128)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x137 = 53724417919709LL;
	static int32_t x139 = -1;
	static uint8_t x140 = UINT8_MAX;
	volatile int64_t t19 = 22690979394430752LL;

    t19 = (x137|(x138>(x139*x140)));

    if (t19 != 53724417919709LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x149 = -1LL;
	uint8_t x150 = 4U;
	volatile uint16_t x151 = UINT16_MAX;
	int8_t x152 = -57;
	volatile int64_t t20 = 35626LL;

    t20 = (x149|(x150>(x151*x152)));

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x153 = INT16_MIN;
	static int64_t x154 = 2557116557010349LL;
	static volatile uint64_t x155 = UINT64_MAX;
	uint8_t x156 = UINT8_MAX;
	static volatile int32_t t21 = 3970847;

    t21 = (x153|(x154>(x155*x156)));

    if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x165 = INT8_MAX;
	static uint32_t x166 = 1254684932U;
	volatile uint64_t x167 = 295314957LLU;
	static int32_t x168 = INT32_MAX;
	int32_t t22 = -945;

    t22 = (x165|(x166>(x167*x168)));

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MIN;
	static int64_t x171 = -80973LL;
	int32_t t23 = -176447294;

    t23 = (x169|(x170>(x171*x172)));

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x185 = -6;
	int32_t x186 = 117;
	uint64_t x187 = 134991011446LLU;
	static volatile int32_t t24 = 223149497;

    t24 = (x185|(x186>(x187*x188)));

    if (t24 != -6) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MAX;
	volatile int8_t x192 = INT8_MAX;
	static int64_t t25 = 16LL;

    t25 = (x189|(x190>(x191*x192)));

    if (t25 != -3953142354597531LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x193 = 6936493615128308LLU;
	static uint32_t x194 = 621U;
	volatile uint32_t x195 = 477815358U;
	uint64_t t26 = 3384LLU;

    t26 = (x193|(x194>(x195*x196)));

    if (t26 != 6936493615128308LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x198 = -4;
	int8_t x199 = -20;
	static uint64_t x200 = UINT64_MAX;

    t27 = (x197|(x198>(x199*x200)));

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x202 = -15;
	static int32_t x203 = -2591828;
	volatile int64_t x204 = 2059LL;
	int64_t t28 = 1611285533LL;

    t28 = (x201|(x202>(x203*x204)));

    if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x205 = INT8_MAX;
	int64_t x206 = -1LL;
	uint16_t x207 = 265U;
	uint16_t x208 = 48U;
	volatile int32_t t29 = -92346048;

    t29 = (x205|(x206>(x207*x208)));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x210 = 81U;
	int8_t x211 = -22;
	volatile int16_t x212 = INT16_MIN;

    t30 = (x209|(x210>(x211*x212)));

    if (t30 != 112172U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x213 = UINT8_MAX;
	uint32_t x214 = UINT32_MAX;
	int8_t x215 = INT8_MIN;
	volatile uint16_t x216 = UINT16_MAX;
	volatile int32_t t31 = -38013122;

    t31 = (x213|(x214>(x215*x216)));

    if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MAX;
	volatile int16_t x219 = INT16_MAX;
	static int16_t x220 = 10925;
	static volatile int32_t t32 = 357065011;

    t32 = (x217|(x218>(x219*x220)));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x221 = 9U;
	volatile int32_t x222 = -1;
	volatile uint8_t x223 = 55U;
	static int32_t x224 = 1;
	volatile int32_t t33 = -8005096;

    t33 = (x221|(x222>(x223*x224)));

    if (t33 != 9) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x225 = INT32_MIN;
	int8_t x226 = INT8_MAX;
	uint16_t x227 = UINT16_MAX;
	int32_t x228 = -1;
	static int32_t t34 = -797044393;

    t34 = (x225|(x226>(x227*x228)));

    if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x237 = UINT16_MAX;
	int8_t x238 = -1;
	int8_t x239 = INT8_MIN;
	int32_t x240 = 1006485;
	volatile int32_t t35 = 17183;

    t35 = (x237|(x238>(x239*x240)));

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x241 = 7157U;
	int8_t x242 = -1;
	uint32_t x243 = UINT32_MAX;
	uint64_t x244 = 2LLU;
	static volatile int32_t t36 = -713973;

    t36 = (x241|(x242>(x243*x244)));

    if (t36 != 7157) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x245 = INT64_MIN;
	int16_t x246 = -602;
	uint16_t x248 = 10U;
	int64_t t37 = INT64_MIN;

    t37 = (x245|(x246>(x247*x248)));

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x257 = 53578584U;
	volatile int16_t x259 = -917;
	uint32_t t38 = 377581U;

    t38 = (x257|(x258>(x259*x260)));

    if (t38 != 53578584U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x265 = INT8_MIN;
	int16_t x266 = -1;
	static volatile uint8_t x267 = 74U;
	static uint8_t x268 = 5U;
	volatile int32_t t39 = 15900267;

    t39 = (x265|(x266>(x267*x268)));

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x269 = UINT64_MAX;
	int16_t x270 = INT16_MIN;
	uint8_t x272 = UINT8_MAX;
	uint64_t t40 = UINT64_MAX;

    t40 = (x269|(x270>(x271*x272)));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x273 = UINT8_MAX;
	int16_t x274 = -1;
	static volatile uint32_t x275 = UINT32_MAX;
	static int16_t x276 = INT16_MIN;
	volatile int32_t t41 = 1813;

    t41 = (x273|(x274>(x275*x276)));

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x277 = UINT32_MAX;
	static int16_t x278 = INT16_MIN;
	volatile int32_t x280 = -1;
	uint32_t t42 = UINT32_MAX;

    t42 = (x277|(x278>(x279*x280)));

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x281 = 25U;
	static int32_t x282 = -11208;
	int16_t x283 = -1;
	int8_t x284 = -1;
	volatile int32_t t43 = -146;

    t43 = (x281|(x282>(x283*x284)));

    if (t43 != 25) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x289 = UINT8_MAX;
	static volatile uint32_t x290 = 40U;
	uint64_t x292 = 11809LLU;
	int32_t t44 = 29907110;

    t44 = (x289|(x290>(x291*x292)));

    if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x293 = 24U;
	static int32_t x294 = INT32_MIN;
	int16_t x295 = 15918;
	int16_t x296 = -1;
	int32_t t45 = -289776;

    t45 = (x293|(x294>(x295*x296)));

    if (t45 != 24) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x301 = 249U;
	int32_t x302 = -1;
	int8_t x303 = -20;
	int8_t x304 = -13;
	volatile uint32_t t46 = 12762U;

    t46 = (x301|(x302>(x303*x304)));

    if (t46 != 249U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x313 = INT64_MIN;
	static uint32_t x314 = 5205648U;
	static volatile int64_t t47 = 24023124682LL;

    t47 = (x313|(x314>(x315*x316)));

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x317 = 12;
	volatile int8_t x318 = 55;
	int64_t x319 = 1251LL;
	int32_t x320 = -14973;
	volatile int32_t t48 = -229124;

    t48 = (x317|(x318>(x319*x320)));

    if (t48 != 13) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x322 = 292U;
	static uint32_t x324 = UINT32_MAX;
	static int64_t t49 = INT64_MIN;

    t49 = (x321|(x322>(x323*x324)));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x326 = 15018LLU;
	int32_t x327 = INT32_MIN;
	static uint64_t x328 = 4175LLU;
	int32_t t50 = -60725;

    t50 = (x325|(x326>(x327*x328)));

    if (t50 != -1457587) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x329 = INT16_MAX;
	static uint8_t x331 = 0U;
	int32_t x332 = INT32_MAX;

    t51 = (x329|(x330>(x331*x332)));

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x333 = INT16_MIN;
	uint64_t x334 = 7193205189460LLU;
	static uint64_t x335 = 273191751677LLU;
	int32_t x336 = 15308731;
	int32_t t52 = -883;

    t52 = (x333|(x334>(x335*x336)));

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x345 = UINT32_MAX;
	static int16_t x346 = 1428;
	static int16_t x347 = INT16_MIN;

    t53 = (x345|(x346>(x347*x348)));

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MIN;
	uint32_t x359 = UINT32_MAX;
	volatile int32_t x360 = INT32_MIN;

    t54 = (x357|(x358>(x359*x360)));

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x367 = 393;
	uint8_t x368 = 3U;
	volatile int32_t t55 = INT32_MIN;

    t55 = (x365|(x366>(x367*x368)));

    if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x369 = INT32_MIN;
	int8_t x370 = 10;
	int8_t x371 = INT8_MIN;
	uint8_t x372 = 1U;
	int32_t t56 = 884119;

    t56 = (x369|(x370>(x371*x372)));

    if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x373 = INT8_MIN;
	int16_t x376 = INT16_MIN;
	int32_t t57 = 1;

    t57 = (x373|(x374>(x375*x376)));

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x377 = UINT8_MAX;
	int64_t x378 = -47908071998046LL;
	int8_t x379 = -1;
	static volatile uint64_t x380 = 13750LLU;

    t58 = (x377|(x378>(x379*x380)));

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x385 = INT8_MAX;
	uint32_t x386 = 1241U;
	int64_t x387 = 1398270600827751LL;
	uint8_t x388 = 10U;
	static int32_t t59 = 1;

    t59 = (x385|(x386>(x387*x388)));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x389 = INT32_MAX;
	int16_t x390 = INT16_MIN;
	int8_t x391 = INT8_MIN;
	volatile int32_t t60 = INT32_MAX;

    t60 = (x389|(x390>(x391*x392)));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x394 = -1;
	int16_t x396 = INT16_MAX;
	int32_t t61 = -860;

    t61 = (x393|(x394>(x395*x396)));

    if (t61 != 14) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x397 = INT8_MIN;
	int64_t x398 = INT64_MAX;
	volatile int8_t x399 = INT8_MAX;
	volatile uint32_t x400 = 1600445U;

    t62 = (x397|(x398>(x399*x400)));

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x401 = INT32_MIN;
	uint64_t x402 = 4LLU;
	volatile int16_t x403 = INT16_MAX;
	static volatile int32_t t63 = INT32_MIN;

    t63 = (x401|(x402>(x403*x404)));

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x405 = INT16_MAX;
	volatile uint32_t x406 = 2633549U;
	int16_t x407 = -6;
	int8_t x408 = -1;
	int32_t t64 = -101271805;

    t64 = (x405|(x406>(x407*x408)));

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x409 = -1;
	int16_t x412 = INT16_MIN;
	int32_t t65 = -53455;

    t65 = (x409|(x410>(x411*x412)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x413 = INT32_MIN;
	int16_t x414 = INT16_MAX;
	int16_t x415 = -1990;
	int32_t x416 = 3;
	int32_t t66 = 19649652;

    t66 = (x413|(x414>(x415*x416)));

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x421 = -1;
	uint8_t x422 = 121U;
	int8_t x423 = 3;
	uint8_t x424 = 0U;
	static int32_t t67 = -42006468;

    t67 = (x421|(x422>(x423*x424)));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x425 = -7LL;
	int32_t x426 = 3883;
	static volatile uint32_t x427 = 6U;
	uint32_t x428 = 2U;
	volatile int64_t t68 = -5LL;

    t68 = (x425|(x426>(x427*x428)));

    if (t68 != -7LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x429 = INT64_MIN;
	int64_t x430 = 7932089404389LL;
	uint32_t x431 = 1095772U;
	static int32_t x432 = INT32_MIN;
	static volatile int64_t t69 = -19270711088316192LL;

    t69 = (x429|(x430>(x431*x432)));

    if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x441 = INT16_MAX;
	volatile int8_t x442 = INT8_MIN;
	int16_t x443 = -1;
	int16_t x444 = -1;
	volatile int32_t t70 = 212443631;

    t70 = (x441|(x442>(x443*x444)));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x445 = -1;
	uint8_t x446 = UINT8_MAX;
	volatile int8_t x447 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t71 = 151;

    t71 = (x445|(x446>(x447*x448)));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x449 = -1;
	static volatile int64_t x450 = 38LL;
	int8_t x451 = -8;
	int32_t t72 = -5443;

    t72 = (x449|(x450>(x451*x452)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x453 = -1;
	uint32_t x454 = 13019U;
	volatile int64_t x455 = -1LL;
	int64_t x456 = -1LL;

    t73 = (x453|(x454>(x455*x456)));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x461 = INT16_MIN;
	uint16_t x462 = 30U;
	static volatile int64_t x463 = -261860010LL;
	int16_t x464 = -948;
	volatile int32_t t74 = 11305;

    t74 = (x461|(x462>(x463*x464)));

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x469 = INT16_MAX;
	int16_t x470 = -1977;
	int16_t x471 = INT16_MIN;
	uint64_t x472 = 157LLU;
	volatile int32_t t75 = -738976;

    t75 = (x469|(x470>(x471*x472)));

    if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x473 = 8;
	int8_t x475 = 7;
	uint8_t x476 = UINT8_MAX;
	static int32_t t76 = -84999336;

    t76 = (x473|(x474>(x475*x476)));

    if (t76 != 9) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x477 = INT16_MIN;
	volatile uint16_t x478 = 3340U;
	uint32_t x479 = UINT32_MAX;
	volatile int16_t x480 = -5;

    t77 = (x477|(x478>(x479*x480)));

    if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x481 = -11;
	static uint8_t x482 = 0U;
	uint64_t x483 = 673584593764LLU;
	static uint8_t x484 = UINT8_MAX;
	int32_t t78 = -29;

    t78 = (x481|(x482>(x483*x484)));

    if (t78 != -11) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x485 = -1;
	uint8_t x488 = UINT8_MAX;
	int32_t t79 = 151966995;

    t79 = (x485|(x486>(x487*x488)));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x491 = -1;
	int64_t x492 = INT64_MAX;

    t80 = (x489|(x490>(x491*x492)));

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x494 = INT8_MIN;
	uint64_t x495 = 16120634436LLU;
	volatile uint32_t t81 = 192564U;

    t81 = (x493|(x494>(x495*x496)));

    if (t81 != 5U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x497 = 0;
	int64_t x498 = INT64_MIN;
	volatile uint32_t x499 = 127919U;
	volatile uint64_t x500 = 508180778315806LLU;

    t82 = (x497|(x498>(x499*x500)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x509 = INT16_MIN;
	int64_t x510 = -1LL;
	int8_t x511 = -1;
	static uint32_t x512 = UINT32_MAX;
	volatile int32_t t83 = -2218;

    t83 = (x509|(x510>(x511*x512)));

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x513 = 1U;
	static volatile uint16_t x514 = 85U;
	static uint16_t x515 = 6791U;
	int64_t x516 = -1LL;
	static volatile int32_t t84 = -3;

    t84 = (x513|(x514>(x515*x516)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x517 = INT16_MIN;
	static volatile uint16_t x518 = 1U;
	uint32_t x519 = 249799421U;
	int16_t x520 = INT16_MIN;
	volatile int32_t t85 = -13;

    t85 = (x517|(x518>(x519*x520)));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x521 = -1;
	int8_t x522 = INT8_MIN;
	volatile uint16_t x523 = UINT16_MAX;
	volatile int32_t t86 = 19374;

    t86 = (x521|(x522>(x523*x524)));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x530 = INT16_MIN;
	int64_t x531 = INT64_MAX;
	uint64_t x532 = 2468310749147081177LLU;

    t87 = (x529|(x530>(x531*x532)));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x541 = UINT8_MAX;
	static int16_t x542 = INT16_MIN;
	uint8_t x543 = 6U;
	static int8_t x544 = INT8_MAX;
	int32_t t88 = 813303;

    t88 = (x541|(x542>(x543*x544)));

    if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x546 = 3U;
	int64_t x548 = -3490243LL;
	volatile int32_t t89 = -366480785;

    t89 = (x545|(x546>(x547*x548)));

    if (t89 != 5934) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x549 = UINT32_MAX;
	int8_t x550 = -6;
	static uint16_t x551 = 2U;
	uint32_t x552 = 2602015U;

    t90 = (x549|(x550>(x551*x552)));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x566 = -1LL;
	uint16_t x567 = 21734U;
	int64_t x568 = -42082137119130LL;
	int32_t t91 = -4667;

    t91 = (x565|(x566>(x567*x568)));

    if (t91 != -353) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x569 = UINT64_MAX;
	uint64_t x570 = 7427500LLU;
	int8_t x571 = 0;
	static int8_t x572 = INT8_MIN;
	volatile uint64_t t92 = UINT64_MAX;

    t92 = (x569|(x570>(x571*x572)));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x573 = 1;
	volatile int32_t x575 = INT32_MIN;
	static uint64_t x576 = 2820600568440207LLU;
	int32_t t93 = -710;

    t93 = (x573|(x574>(x575*x576)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x577 = INT32_MIN;
	static int16_t x580 = 2240;
	volatile int32_t t94 = 675669182;

    t94 = (x577|(x578>(x579*x580)));

    if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x581 = 2;
	int64_t x582 = -1LL;
	uint64_t x583 = 813LLU;

    t95 = (x581|(x582>(x583*x584)));

    if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x585 = -1;
	static int8_t x586 = INT8_MAX;
	static int32_t t96 = -1;

    t96 = (x585|(x586>(x587*x588)));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x589 = 1U;
	int8_t x590 = INT8_MIN;
	uint64_t x591 = UINT64_MAX;
	uint64_t x592 = 1555266138858LLU;
	volatile int32_t t97 = -41056650;

    t97 = (x589|(x590>(x591*x592)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x600 = INT16_MIN;
	static volatile uint64_t t98 = UINT64_MAX;

    t98 = (x597|(x598>(x599*x600)));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x609 = INT64_MIN;
	int16_t x610 = 4596;
	int32_t x612 = 0;
	int64_t t99 = 55246863LL;

    t99 = (x609|(x610>(x611*x612)));

    if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x617 = INT16_MIN;
	static uint8_t x618 = 2U;
	volatile uint8_t x620 = 0U;
	int32_t t100 = 1;

    t100 = (x617|(x618>(x619*x620)));

    if (t100 != -32767) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x621 = 5U;
	static volatile int64_t x622 = -1046492153215LL;
	static int64_t x624 = INT64_MAX;
	static volatile int32_t t101 = 43;

    t101 = (x621|(x622>(x623*x624)));

    if (t101 != 5) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x629 = INT32_MAX;
	int8_t x630 = INT8_MIN;
	uint64_t x631 = 27394902705714184LLU;
	int8_t x632 = 6;
	int32_t t102 = INT32_MAX;

    t102 = (x629|(x630>(x631*x632)));

    if (t102 != INT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x633 = 1;
	uint16_t x635 = 5U;
	uint8_t x636 = UINT8_MAX;
	int32_t t103 = -1018;

    t103 = (x633|(x634>(x635*x636)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x637 = INT16_MIN;
	int64_t x639 = 15LL;
	int32_t x640 = -1;
	volatile int32_t t104 = 84035218;

    t104 = (x637|(x638>(x639*x640)));

    if (t104 != -32767) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x642 = -19256428;
	volatile int64_t x643 = -41071250162260460LL;
	int64_t x644 = -1LL;
	int64_t t105 = INT64_MIN;

    t105 = (x641|(x642>(x643*x644)));

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x645 = INT8_MIN;
	static int8_t x646 = INT8_MAX;
	int8_t x647 = -42;
	volatile uint32_t x648 = 102U;
	int32_t t106 = 24316;

    t106 = (x645|(x646>(x647*x648)));

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x649 = INT16_MIN;
	static int64_t x650 = 2237026170832582691LL;
	volatile uint16_t x651 = 61U;
	int16_t x652 = 30;
	volatile int32_t t107 = -1;

    t107 = (x649|(x650>(x651*x652)));

    if (t107 != -32767) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x653 = INT8_MIN;
	static uint64_t x655 = UINT64_MAX;
	volatile int16_t x656 = 1;

    t108 = (x653|(x654>(x655*x656)));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x657 = 982LLU;
	int8_t x660 = -25;
	uint64_t t109 = 1309LLU;

    t109 = (x657|(x658>(x659*x660)));

    if (t109 != 983LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x661 = 112502817066LLU;
	volatile int8_t x663 = 0;
	volatile uint16_t x664 = 207U;
	uint64_t t110 = 131LLU;

    t110 = (x661|(x662>(x663*x664)));

    if (t110 != 112502817067LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x665 = UINT8_MAX;
	static uint16_t x667 = 2908U;
	int8_t x668 = 61;

    t111 = (x665|(x666>(x667*x668)));

    if (t111 != 255) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x669 = 15;
	int8_t x670 = 12;
	static uint64_t x671 = 2469804LLU;
	volatile uint8_t x672 = UINT8_MAX;
	static volatile int32_t t112 = 4332;

    t112 = (x669|(x670>(x671*x672)));

    if (t112 != 15) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x673 = 12741;
	int8_t x674 = INT8_MIN;
	uint32_t x676 = UINT32_MAX;
	volatile int32_t t113 = 60665;

    t113 = (x673|(x674>(x675*x676)));

    if (t113 != 12741) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x685 = INT64_MIN;
	int8_t x686 = -1;
	int8_t x687 = -1;
	static int64_t t114 = 17010863016381258LL;

    t114 = (x685|(x686>(x687*x688)));

    if (t114 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x690 = -1;
	int16_t x692 = 1;
	volatile int32_t t115 = -115;

    t115 = (x689|(x690>(x691*x692)));

    if (t115 != -1251) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x693 = INT64_MAX;
	uint64_t x695 = UINT64_MAX;
	int16_t x696 = -3;
	int64_t t116 = INT64_MAX;

    t116 = (x693|(x694>(x695*x696)));

    if (t116 != INT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x698 = INT32_MIN;
	int32_t x699 = 0;
	int16_t x700 = 12;
	volatile int32_t t117 = -1882365;

    t117 = (x697|(x698>(x699*x700)));

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x701 = 0;
	uint32_t x702 = 607185615U;
	int32_t x703 = INT32_MIN;
	static uint64_t x704 = 2010438892005LLU;
	int32_t t118 = 13549;

    t118 = (x701|(x702>(x703*x704)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x705 = -1LL;
	int16_t x706 = INT16_MAX;
	int16_t x707 = -466;
	volatile int32_t x708 = -1;
	volatile int64_t t119 = -5200692136035LL;

    t119 = (x705|(x706>(x707*x708)));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x713 = UINT8_MAX;
	int64_t x714 = INT64_MAX;
	static uint32_t x715 = 93U;
	static int16_t x716 = -1;
	static volatile int32_t t120 = 79;

    t120 = (x713|(x714>(x715*x716)));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x721 = -1113654157139842149LL;
	int16_t x722 = INT16_MIN;
	int16_t x723 = 1;
	static int64_t x724 = -60884783382116313LL;
	int64_t t121 = 291LL;

    t121 = (x721|(x722>(x723*x724)));

    if (t121 != -1113654157139842149LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x727 = 7999U;
	uint8_t x728 = 59U;
	volatile int32_t t122 = 51197049;

    t122 = (x725|(x726>(x727*x728)));

    if (t122 != 32767) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x729 = 68762U;
	uint64_t x730 = 33787LLU;
	uint32_t x731 = 20542799U;
	int16_t x732 = INT16_MIN;
	volatile uint32_t t123 = 2U;

    t123 = (x729|(x730>(x731*x732)));

    if (t123 != 68762U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x734 = INT8_MIN;
	int8_t x735 = INT8_MIN;
	static int16_t x736 = -1;
	volatile int32_t t124 = -119741279;

    t124 = (x733|(x734>(x735*x736)));

    if (t124 != 7) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x741 = 0U;
	uint64_t x742 = 196LLU;
	uint32_t x743 = 322710U;
	int16_t x744 = INT16_MIN;
	volatile int32_t t125 = -17494;

    t125 = (x741|(x742>(x743*x744)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x745 = -131;
	static uint32_t x746 = 472814U;
	int16_t x747 = INT16_MAX;
	uint64_t x748 = 7936LLU;
	int32_t t126 = 4459;

    t126 = (x745|(x746>(x747*x748)));

    if (t126 != -131) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x749 = INT32_MIN;
	uint32_t x750 = 789645U;
	int8_t x751 = INT8_MIN;
	int16_t x752 = INT16_MIN;
	int32_t t127 = INT32_MIN;

    t127 = (x749|(x750>(x751*x752)));

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x757 = 784421776LL;
	static volatile int32_t x759 = -1;
	uint64_t x760 = 143631LLU;
	static volatile int64_t t128 = -5436610654516LL;

    t128 = (x757|(x758>(x759*x760)));

    if (t128 != 784421776LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x761 = 1;
	uint64_t x762 = 4177437871028LLU;
	int64_t x763 = INT64_MIN;
	volatile uint8_t x764 = 0U;
	static int32_t t129 = 208;

    t129 = (x761|(x762>(x763*x764)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x770 = INT32_MIN;
	static int64_t x771 = -1LL;
	volatile int64_t x772 = -3771725310330918878LL;
	int64_t t130 = INT64_MIN;

    t130 = (x769|(x770>(x771*x772)));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x777 = -1;
	static int8_t x778 = INT8_MIN;
	static int16_t x779 = 2528;
	int16_t x780 = -76;
	volatile int32_t t131 = 654734;

    t131 = (x777|(x778>(x779*x780)));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x781 = 17U;
	uint64_t x782 = 247821455LLU;
	uint64_t x784 = 23902422LLU;
	volatile int32_t t132 = 1042534;

    t132 = (x781|(x782>(x783*x784)));

    if (t132 != 17) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x785 = UINT32_MAX;
	static int32_t x786 = INT32_MIN;
	uint8_t x787 = UINT8_MAX;
	int8_t x788 = INT8_MAX;

    t133 = (x785|(x786>(x787*x788)));

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x789 = INT8_MIN;
	static volatile uint64_t x790 = UINT64_MAX;
	int16_t x791 = 825;
	volatile uint16_t x792 = 3U;
	static int32_t t134 = -1512;

    t134 = (x789|(x790>(x791*x792)));

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x794 = 243U;
	volatile uint16_t x795 = UINT16_MAX;
	int32_t t135 = 2017;

    t135 = (x793|(x794>(x795*x796)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x797 = 0;
	static int64_t x798 = INT64_MIN;
	volatile int32_t x799 = -285;
	static uint16_t x800 = 1U;
	volatile int32_t t136 = 10638491;

    t136 = (x797|(x798>(x799*x800)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x801 = INT32_MIN;
	int32_t x802 = INT32_MAX;
	int8_t x803 = INT8_MIN;
	uint8_t x804 = UINT8_MAX;
	static volatile int32_t t137 = -52575920;

    t137 = (x801|(x802>(x803*x804)));

    if (t137 != -2147483647) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x805 = 4U;
	int8_t x806 = -1;
	int16_t x807 = INT16_MIN;
	int8_t x808 = INT8_MIN;
	volatile int32_t t138 = -1;

    t138 = (x805|(x806>(x807*x808)));

    if (t138 != 4) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x817 = UINT8_MAX;
	int8_t x818 = INT8_MAX;
	static int64_t x819 = -61976LL;
	int32_t t139 = 1901922;

    t139 = (x817|(x818>(x819*x820)));

    if (t139 != 255) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x822 = UINT32_MAX;
	int64_t x823 = -416LL;
	int8_t x824 = INT8_MIN;
	volatile int32_t t140 = -319720;

    t140 = (x821|(x822>(x823*x824)));

    if (t140 != -7) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x825 = INT32_MAX;
	int64_t x826 = INT64_MIN;
	static volatile uint16_t x827 = 23U;
	static int16_t x828 = INT16_MIN;
	static int32_t t141 = INT32_MAX;

    t141 = (x825|(x826>(x827*x828)));

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x830 = INT64_MAX;
	uint16_t x831 = 331U;
	static int32_t x832 = -1;
	volatile int32_t t142 = 830;

    t142 = (x829|(x830>(x831*x832)));

    if (t142 != -2147483647) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x837 = 24U;
	int16_t x839 = INT16_MIN;
	volatile int16_t x840 = -1;
	static volatile int32_t t143 = -6;

    t143 = (x837|(x838>(x839*x840)));

    if (t143 != 24) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x841 = INT8_MIN;
	volatile int64_t x842 = INT64_MAX;
	volatile int32_t t144 = 1426527;

    t144 = (x841|(x842>(x843*x844)));

    if (t144 != -127) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint64_t x845 = 36568LLU;
	volatile int16_t x846 = INT16_MIN;
	int64_t x847 = -7817765881548LL;
	static int8_t x848 = 13;
	volatile uint64_t t145 = 16448754805324798LLU;

    t145 = (x845|(x846>(x847*x848)));

    if (t145 != 36569LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x850 = UINT8_MAX;
	static int8_t x851 = INT8_MIN;
	static int64_t x852 = -33299761LL;
	uint32_t t146 = 1290U;

    t146 = (x849|(x850>(x851*x852)));

    if (t146 != 398U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x853 = INT8_MIN;
	uint8_t x854 = UINT8_MAX;
	uint32_t x855 = 263912283U;
	volatile int32_t t147 = -434458;

    t147 = (x853|(x854>(x855*x856)));

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x860 = -1;
	static volatile int32_t t148 = 217608;

    t148 = (x857|(x858>(x859*x860)));

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x861 = -1499;
	int16_t x862 = -1804;
	uint32_t x863 = 14U;
	static int32_t x864 = 138391764;
	int32_t t149 = 8547584;

    t149 = (x861|(x862>(x863*x864)));

    if (t149 != -1499) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x869 = UINT64_MAX;
	uint64_t x871 = UINT64_MAX;
	uint64_t x872 = 43718410401378LLU;
	uint64_t t150 = UINT64_MAX;

    t150 = (x869|(x870>(x871*x872)));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x873 = 695U;
	static int64_t x875 = -17320259418476445LL;
	int32_t t151 = 88299374;

    t151 = (x873|(x874>(x875*x876)));

    if (t151 != 695) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x878 = 11098U;
	static volatile int32_t t152 = INT32_MAX;

    t152 = (x877|(x878>(x879*x880)));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x881 = INT16_MIN;
	uint64_t x882 = 8188774868LLU;
	int16_t x884 = INT16_MIN;
	volatile int32_t t153 = -2010;

    t153 = (x881|(x882>(x883*x884)));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x889 = 3;
	int8_t x890 = INT8_MIN;
	int64_t x891 = -1LL;
	uint64_t x892 = UINT64_MAX;
	int32_t t154 = 10;

    t154 = (x889|(x890>(x891*x892)));

    if (t154 != 3) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x893 = INT8_MIN;
	uint16_t x894 = 1U;
	uint32_t x895 = UINT32_MAX;
	static volatile int32_t t155 = 1;

    t155 = (x893|(x894>(x895*x896)));

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x905 = -7772751LL;
	static int64_t x906 = INT64_MIN;
	uint64_t x907 = 40LLU;
	static volatile int64_t t156 = 1392861440243708406LL;

    t156 = (x905|(x906>(x907*x908)));

    if (t156 != -7772751LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x909 = 5631LL;
	int64_t x910 = INT64_MIN;
	uint32_t x911 = 56645U;
	static int8_t x912 = INT8_MAX;
	int64_t t157 = -55706210LL;

    t157 = (x909|(x910>(x911*x912)));

    if (t157 != 5631LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x913 = INT8_MAX;
	uint16_t x914 = UINT16_MAX;
	static uint16_t x915 = UINT16_MAX;
	static int16_t x916 = INT16_MIN;

    t158 = (x913|(x914>(x915*x916)));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x926 = INT16_MIN;
	int8_t x928 = INT8_MAX;
	int32_t t159 = 249356;

    t159 = (x925|(x926>(x927*x928)));

    if (t159 != 70) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x929 = 0;
	volatile uint8_t x930 = 0U;
	static int16_t x931 = INT16_MAX;
	uint8_t x932 = UINT8_MAX;

    t160 = (x929|(x930>(x931*x932)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x933 = -1LL;
	static volatile uint64_t x935 = 12010LLU;
	uint64_t x936 = UINT64_MAX;
	volatile int64_t t161 = 71000447LL;

    t161 = (x933|(x934>(x935*x936)));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x937 = 157602185U;
	volatile uint8_t x938 = UINT8_MAX;
	int8_t x940 = -1;
	static volatile uint32_t t162 = 977447793U;

    t162 = (x937|(x938>(x939*x940)));

    if (t162 != 157602185U) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x946 = 1;
	uint8_t x947 = UINT8_MAX;
	volatile uint32_t x948 = 3115198U;

    t163 = (x945|(x946>(x947*x948)));

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x950 = -41;
	int8_t x951 = -1;
	uint64_t x952 = 36312644697278LLU;
	int32_t t164 = -19;

    t164 = (x949|(x950>(x951*x952)));

    if (t164 != 131) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x957 = -1;
	static int32_t x958 = INT32_MIN;
	volatile uint64_t x960 = 1005485776579816LLU;

    t165 = (x957|(x958>(x959*x960)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x961 = 36U;
	static uint16_t x962 = 201U;
	int64_t x963 = -1LL;
	int16_t x964 = -1;
	int32_t t166 = 995;

    t166 = (x961|(x962>(x963*x964)));

    if (t166 != 37) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x965 = INT32_MAX;
	uint64_t x966 = 25120867552LLU;
	int16_t x967 = INT16_MIN;
	int16_t x968 = -2;
	volatile int32_t t167 = INT32_MAX;

    t167 = (x965|(x966>(x967*x968)));

    if (t167 != INT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x969 = UINT64_MAX;
	int32_t x970 = INT32_MIN;
	int8_t x971 = -1;
	uint64_t x972 = 110874LLU;

    t168 = (x969|(x970>(x971*x972)));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x973 = INT64_MIN;
	int8_t x974 = INT8_MIN;
	static int64_t x975 = -1LL;

    t169 = (x973|(x974>(x975*x976)));

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x983 = 2227415707354306807LLU;
	int16_t x984 = INT16_MIN;
	volatile int32_t t170 = INT32_MIN;

    t170 = (x981|(x982>(x983*x984)));

    if (t170 != INT32_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x986 = -1;
	int64_t x987 = -1LL;
	static uint16_t x988 = 2U;
	int32_t t171 = -4;

    t171 = (x985|(x986>(x987*x988)));

    if (t171 != -2147483647) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x990 = 1U;
	uint64_t x991 = 252LLU;
	int8_t x992 = INT8_MIN;

    t172 = (x989|(x990>(x991*x992)));

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x997 = 116927768123LLU;
	int64_t x998 = 5550160634408357LL;
	static volatile int8_t x1000 = -6;
	static volatile uint64_t t173 = 3495142496162LLU;

    t173 = (x997|(x998>(x999*x1000)));

    if (t173 != 116927768123LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1003 = INT16_MIN;

    t174 = (x1001|(x1002>(x1003*x1004)));

    if (t174 != 119) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x1005 = UINT8_MAX;
	static volatile int32_t x1006 = -2286;
	static uint16_t x1007 = UINT16_MAX;

    t175 = (x1005|(x1006>(x1007*x1008)));

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1009 = INT8_MAX;
	volatile uint32_t x1010 = 90199357U;
	static int32_t x1012 = -23;
	int32_t t176 = -32;

    t176 = (x1009|(x1010>(x1011*x1012)));

    if (t176 != 127) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1014 = 10U;
	int16_t x1015 = 43;
	static int32_t t177 = 1806091;

    t177 = (x1013|(x1014>(x1015*x1016)));

    if (t177 != 255) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x1017 = 0U;
	static volatile uint32_t x1018 = 31545U;
	int8_t x1019 = INT8_MAX;
	int64_t x1020 = -1LL;

    t178 = (x1017|(x1018>(x1019*x1020)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x1025 = UINT32_MAX;
	uint32_t x1027 = 1503U;
	uint32_t x1028 = 11312U;
	uint32_t t179 = UINT32_MAX;

    t179 = (x1025|(x1026>(x1027*x1028)));

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x1029 = -3;
	static uint64_t x1030 = 59974LLU;
	volatile uint64_t x1031 = 24057798LLU;
	int8_t x1032 = -46;
	int32_t t180 = 1;

    t180 = (x1029|(x1030>(x1031*x1032)));

    if (t180 != -3) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x1037 = 118U;
	int32_t x1038 = 19020257;
	int8_t x1039 = INT8_MIN;
	int8_t x1040 = INT8_MIN;
	volatile int32_t t181 = -148325458;

    t181 = (x1037|(x1038>(x1039*x1040)));

    if (t181 != 119) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1041 = 504U;
	int16_t x1042 = INT16_MAX;
	uint64_t x1043 = UINT64_MAX;
	uint8_t x1044 = 17U;
	volatile uint32_t t182 = 788U;

    t182 = (x1041|(x1042>(x1043*x1044)));

    if (t182 != 504U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1049 = INT16_MIN;
	volatile uint32_t x1052 = UINT32_MAX;
	volatile int32_t t183 = 18102;

    t183 = (x1049|(x1050>(x1051*x1052)));

    if (t183 != -32768) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1053 = INT64_MIN;
	int8_t x1055 = INT8_MAX;
	static volatile int8_t x1056 = INT8_MAX;
	static volatile int64_t t184 = INT64_MIN;

    t184 = (x1053|(x1054>(x1055*x1056)));

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1057 = -1;
	static int8_t x1058 = INT8_MIN;
	int8_t x1060 = INT8_MIN;
	static int32_t t185 = 196941;

    t185 = (x1057|(x1058>(x1059*x1060)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1061 = UINT64_MAX;
	int8_t x1062 = -1;
	static uint8_t x1063 = 50U;
	volatile int8_t x1064 = -1;
	uint64_t t186 = UINT64_MAX;

    t186 = (x1061|(x1062>(x1063*x1064)));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1065 = INT32_MAX;
	volatile int8_t x1066 = INT8_MAX;
	static uint8_t x1068 = 15U;
	static volatile int32_t t187 = INT32_MAX;

    t187 = (x1065|(x1066>(x1067*x1068)));

    if (t187 != INT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1069 = 1;
	uint32_t x1070 = UINT32_MAX;
	static uint32_t x1071 = 16795020U;
	static int8_t x1072 = INT8_MAX;
	int32_t t188 = 1990;

    t188 = (x1069|(x1070>(x1071*x1072)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1077 = -1;
	uint8_t x1078 = 45U;
	static uint8_t x1079 = 1U;
	volatile int32_t t189 = 3470;

    t189 = (x1077|(x1078>(x1079*x1080)));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1081 = INT8_MIN;
	uint32_t x1082 = UINT32_MAX;
	int64_t x1084 = INT64_MAX;
	int32_t t190 = 0;

    t190 = (x1081|(x1082>(x1083*x1084)));

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1085 = -15;
	uint16_t x1087 = 8018U;
	volatile uint32_t x1088 = UINT32_MAX;

    t191 = (x1085|(x1086>(x1087*x1088)));

    if (t191 != -15) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1089 = INT8_MAX;
	uint8_t x1090 = 2U;
	uint32_t x1092 = UINT32_MAX;

    t192 = (x1089|(x1090>(x1091*x1092)));

    if (t192 != 127) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x1093 = INT64_MIN;
	uint64_t x1095 = 309249916LLU;
	volatile uint16_t x1096 = 0U;
	volatile int64_t t193 = -29793814LL;

    t193 = (x1093|(x1094>(x1095*x1096)));

    if (t193 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1097 = 5;
	volatile int16_t x1098 = 595;
	volatile int32_t x1099 = -1;
	int64_t x1100 = INT64_MAX;
	static int32_t t194 = -5073;

    t194 = (x1097|(x1098>(x1099*x1100)));

    if (t194 != 5) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1109 = -1LL;
	int8_t x1110 = -1;
	int8_t x1112 = INT8_MIN;
	int64_t t195 = 24505LL;

    t195 = (x1109|(x1110>(x1111*x1112)));

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1114 = INT64_MIN;
	int16_t x1115 = INT16_MIN;
	int8_t x1116 = INT8_MIN;
	volatile int32_t t196 = 12;

    t196 = (x1113|(x1114>(x1115*x1116)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1117 = INT8_MAX;
	static volatile int16_t x1119 = INT16_MAX;
	uint8_t x1120 = 1U;
	volatile int32_t t197 = -170;

    t197 = (x1117|(x1118>(x1119*x1120)));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1121 = -8;
	uint64_t x1123 = 1213747034092493621LLU;
	static int32_t x1124 = INT32_MIN;
	static volatile int32_t t198 = 11674396;

    t198 = (x1121|(x1122>(x1123*x1124)));

    if (t198 != -7) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1129 = UINT32_MAX;
	int64_t x1130 = 1970330040LL;

    t199 = (x1129|(x1130>(x1131*x1132)));

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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

