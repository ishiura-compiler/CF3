
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

static volatile int32_t x5 = -214;
int8_t x10 = -52;
int8_t x14 = 1;
uint16_t x16 = UINT16_MAX;
int32_t t3 = -7359885;
int16_t x18 = INT16_MIN;
uint32_t x23 = 1321772U;
uint32_t x29 = 362U;
uint8_t x30 = 2U;
int32_t x33 = 86427;
volatile int64_t x39 = -14LL;
int32_t x40 = 45;
volatile uint64_t t9 = 605964553090641LLU;
static int32_t x42 = 362567;
volatile int32_t t10 = 2016;
static uint8_t x49 = 3U;
int64_t x50 = INT64_MIN;
int32_t t11 = -5539913;
volatile int8_t x60 = INT8_MIN;
volatile int32_t x61 = -1;
int16_t x63 = INT16_MIN;
static volatile int32_t t13 = 333664460;
volatile int8_t x68 = 40;
int32_t x70 = 5;
volatile uint8_t x77 = UINT8_MAX;
int8_t x78 = -2;
uint16_t x80 = UINT16_MAX;
int8_t x81 = INT8_MIN;
volatile int64_t x84 = -5173LL;
uint16_t x88 = 3U;
uint32_t t18 = 79268U;
volatile uint64_t x92 = 3830880707LLU;
uint16_t x93 = UINT16_MAX;
volatile uint8_t x96 = UINT8_MAX;
volatile int64_t t21 = -5679534172911060LL;
volatile uint32_t x103 = UINT32_MAX;
int16_t x106 = -52;
uint8_t x107 = UINT8_MAX;
int64_t x111 = INT64_MAX;
uint16_t x115 = 120U;
static uint64_t x116 = UINT64_MAX;
uint32_t x118 = 18760U;
volatile int16_t x120 = -56;
static int32_t t26 = 35432494;
static int8_t x127 = 1;
int64_t x136 = -9387477LL;
static uint64_t x144 = 37LLU;
volatile int32_t t30 = -12;
int64_t x147 = -1LL;
static int32_t t31 = 14;
uint32_t x162 = 172U;
uint64_t x163 = 0LLU;
volatile int32_t t35 = 306241;
int16_t x172 = INT16_MIN;
volatile int32_t t36 = -14993;
static uint16_t x176 = 3U;
int64_t t37 = INT64_MAX;
static int32_t x177 = INT32_MAX;
static int32_t x184 = 14669;
static volatile int32_t t40 = -4893;
static volatile int32_t t41 = -24914210;
int64_t x196 = 6033433207455LL;
volatile int64_t t45 = INT64_MIN;
static volatile uint32_t x214 = 107077U;
static volatile int32_t t47 = -625007;
int16_t x221 = INT16_MAX;
static volatile int32_t x226 = 59;
static volatile int32_t t50 = -12;
int64_t x235 = -1LL;
static int64_t x237 = -1LL;
uint8_t x238 = 0U;
uint32_t x251 = 56524585U;
uint32_t x255 = UINT32_MAX;
int8_t x257 = INT8_MAX;
int32_t t57 = 49;
volatile int64_t x267 = INT64_MAX;
int8_t x268 = -37;
uint32_t t62 = 53U;
static uint32_t x282 = UINT32_MAX;
int64_t t63 = INT64_MIN;
int16_t x287 = -1;
int32_t x292 = -1;
static int64_t x295 = INT64_MAX;
int32_t x300 = INT32_MIN;
static volatile int32_t x312 = -6366;
int32_t t70 = -408;
static int32_t t71 = 1;
int32_t x317 = -6158;
uint8_t x318 = 19U;
volatile int8_t x323 = INT8_MAX;
int32_t x336 = INT32_MIN;
uint64_t t76 = 45LLU;
int8_t x337 = -1;
int64_t x341 = INT64_MAX;
volatile uint64_t x350 = 7384LLU;
int8_t x357 = INT8_MIN;
int16_t x358 = INT16_MAX;
static uint32_t x359 = UINT32_MAX;
static volatile uint32_t x362 = 365170U;
int8_t x364 = 12;
static int16_t x365 = 1404;
int64_t x367 = INT64_MAX;
volatile int32_t x372 = -6;
static volatile int32_t x375 = INT32_MIN;
static int32_t x387 = -5569185;
int16_t x388 = -1;
uint32_t x390 = UINT32_MAX;
int16_t x397 = INT16_MIN;
int64_t x408 = -249007554061864LL;
volatile uint64_t x411 = UINT64_MAX;
uint16_t x413 = UINT16_MAX;
int32_t t99 = -900564;
uint64_t x436 = 3274619LLU;
int8_t x439 = INT8_MAX;
int64_t t104 = INT64_MIN;
volatile int32_t x462 = INT32_MIN;
int8_t x463 = -1;
uint32_t x465 = UINT32_MAX;
int64_t x466 = -1LL;
static int8_t x467 = INT8_MIN;
volatile int16_t x472 = INT16_MIN;
volatile int32_t x477 = INT32_MIN;
int16_t x482 = INT16_MIN;
int16_t x486 = INT16_MIN;
int16_t x487 = -12;
static int8_t x490 = INT8_MAX;
volatile uint16_t x494 = 497U;
int64_t x498 = INT64_MAX;
int32_t t119 = -170229845;
int32_t x514 = 16036430;
uint8_t x517 = UINT8_MAX;
static uint8_t x521 = 67U;
int32_t x530 = INT32_MIN;
int64_t x535 = -67529151979815445LL;
volatile uint8_t x540 = 4U;
volatile uint64_t x549 = 3LLU;
int8_t x552 = INT8_MAX;
uint64_t x556 = 2100081771048426LLU;
int8_t x557 = INT8_MIN;
volatile int32_t x559 = 1410146;
uint16_t x560 = 3409U;
int32_t t130 = -2;
int64_t x564 = INT64_MIN;
int32_t t131 = 1592;
volatile int32_t t133 = 110967371;
int16_t x575 = INT16_MIN;
int64_t t134 = INT64_MAX;
uint8_t x581 = 25U;
uint16_t x582 = 10612U;
int64_t x586 = 1130502LL;
int32_t x591 = INT32_MIN;
int64_t x597 = 1618688611256LL;
static volatile int64_t t140 = INT64_MIN;
uint8_t x606 = 50U;
int32_t t143 = -5743714;
int32_t x623 = INT32_MIN;
int8_t x625 = INT8_MAX;
volatile uint32_t x632 = UINT32_MAX;
uint32_t x635 = 554590513U;
uint8_t x636 = UINT8_MAX;
uint32_t t147 = 167521822U;
uint32_t x639 = UINT32_MAX;
static volatile int32_t t148 = -4255;
volatile int16_t x645 = 3572;
int32_t x646 = INT32_MAX;
static int16_t x654 = -1;
uint32_t t153 = 46707U;
uint64_t x661 = UINT64_MAX;
volatile uint16_t x665 = UINT16_MAX;
int32_t t155 = -5349;
uint8_t x669 = UINT8_MAX;
static int32_t t156 = -18019;
static int32_t x677 = INT32_MAX;
static int32_t x678 = INT32_MIN;
static int64_t x694 = -12LL;
volatile int64_t x696 = 2001785474839680LL;
uint8_t x700 = UINT8_MAX;
int32_t x702 = -1;
static int8_t x706 = INT8_MIN;
volatile int32_t t165 = 57173872;
int32_t x714 = 13599;
volatile int16_t x727 = -72;
int16_t x729 = INT16_MAX;
static volatile int32_t t171 = 60254;
int64_t x736 = INT64_MIN;
static volatile uint32_t t172 = 129524U;
int32_t x744 = INT32_MAX;
uint64_t x745 = 2LLU;
uint64_t t175 = 2242412019LLU;
uint16_t x750 = UINT16_MAX;
uint32_t x769 = 326378U;
static int32_t x773 = 1;
int32_t x775 = INT32_MIN;
int64_t x778 = INT64_MIN;
static int32_t x781 = INT32_MIN;
static uint32_t x784 = 432U;
uint64_t x785 = 1124635972877LLU;
static int32_t x797 = 462069103;
int32_t x809 = INT32_MAX;
volatile int32_t t190 = -509909676;
int64_t x813 = INT64_MIN;
int32_t t192 = -89422;
int8_t x821 = -39;
int32_t t193 = -177418149;
int32_t t194 = -2;
uint16_t x829 = 6475U;
static int32_t t195 = 3232;
uint16_t x833 = UINT16_MAX;
static uint8_t x837 = UINT8_MAX;
static int16_t x840 = -11;
volatile int64_t x842 = INT64_MAX;
volatile int64_t x843 = -34410232547612384LL;
uint64_t x844 = 654620318556843LLU;
volatile int32_t t198 = 1665864;
int32_t x845 = -5297;
uint16_t x848 = UINT16_MAX;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	int8_t x2 = INT8_MAX;
	int16_t x3 = INT16_MIN;
	volatile int16_t x4 = -1370;
	int32_t t0 = INT32_MAX;

    t0 = (x1-(x2<=(x3%x4)));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x6 = UINT64_MAX;
	static volatile uint8_t x7 = 1U;
	volatile uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -1608;

    t1 = (x5-(x6<=(x7%x8)));

    if (t1 != -214) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MAX;
	static int32_t t2 = -1;

    t2 = (x9-(x10<=(x11%x12)));

    if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	volatile uint16_t x15 = UINT16_MAX;

    t3 = (x13-(x14<=(x15%x16)));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 302382327U;
	int16_t x19 = -5213;
	int64_t x20 = INT64_MAX;
	uint32_t t4 = 76213U;

    t4 = (x17-(x18<=(x19%x20)));

    if (t4 != 302382326U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	int16_t x22 = -186;
	volatile int8_t x24 = INT8_MAX;
	static volatile int32_t t5 = -2;

    t5 = (x21-(x22<=(x23%x24)));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	volatile int32_t x26 = INT32_MIN;
	int16_t x27 = -1;
	uint64_t x28 = UINT64_MAX;
	volatile int64_t t6 = INT64_MIN;

    t6 = (x25-(x26<=(x27%x28)));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x31 = 0;
	uint64_t x32 = 27178287112LLU;
	static volatile uint32_t t7 = 439U;

    t7 = (x29-(x30<=(x31%x32)));

    if (t7 != 362U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x34 = 4;
	uint16_t x35 = UINT16_MAX;
	int64_t x36 = -1LL;
	volatile int32_t t8 = -23;

    t8 = (x33-(x34<=(x35%x36)));

    if (t8 != 86427) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = 26480573624999211LLU;
	int32_t x38 = INT32_MAX;

    t9 = (x37-(x38<=(x39%x40)));

    if (t9 != 26480573624999211LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = INT32_MAX;
	int64_t x43 = INT64_MAX;
	int64_t x44 = INT64_MIN;

    t10 = (x41-(x42<=(x43%x44)));

    if (t10 != 2147483646) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x51 = INT64_MIN;
	uint8_t x52 = 1U;

    t11 = (x49-(x50<=(x51%x52)));

    if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x57 = 156U;
	int64_t x58 = 3710059208184079862LL;
	volatile uint64_t x59 = UINT64_MAX;
	uint32_t t12 = 300512961U;

    t12 = (x57-(x58<=(x59%x60)));

    if (t12 != 156U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x62 = -1;
	static uint64_t x64 = 12974049632623951LLU;

    t13 = (x61-(x62<=(x63%x64)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x65 = 3U;
	int16_t x66 = INT16_MIN;
	static uint8_t x67 = 24U;
	volatile int32_t t14 = 2693;

    t14 = (x65-(x66<=(x67%x68)));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x69 = UINT8_MAX;
	volatile int8_t x71 = -1;
	int32_t x72 = -811607;
	volatile int32_t t15 = 431854;

    t15 = (x69-(x70<=(x71%x72)));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x79 = INT16_MIN;
	volatile int32_t t16 = 11;

    t16 = (x77-(x78<=(x79%x80)));

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x82 = INT64_MIN;
	uint32_t x83 = 230U;
	int32_t t17 = 1717;

    t17 = (x81-(x82<=(x83%x84)));

    if (t17 != -129) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x85 = UINT32_MAX;
	static int32_t x86 = -30207;
	int32_t x87 = INT32_MIN;

    t18 = (x85-(x86<=(x87%x88)));

    if (t18 != 4294967294U) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x89 = UINT16_MAX;
	int16_t x90 = -1;
	static int64_t x91 = 3942164214LL;
	int32_t t19 = -12;

    t19 = (x89-(x90<=(x91%x92)));

    if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x94 = INT32_MAX;
	int32_t x95 = -1;
	int32_t t20 = 64;

    t20 = (x93-(x94<=(x95%x96)));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x97 = -1312292LL;
	uint16_t x98 = 326U;
	int16_t x99 = INT16_MIN;
	uint8_t x100 = 4U;

    t21 = (x97-(x98<=(x99%x100)));

    if (t21 != -1312292LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x101 = 2U;
	static uint32_t x102 = UINT32_MAX;
	static int8_t x104 = -1;
	volatile int32_t t22 = 24;

    t22 = (x101-(x102<=(x103%x104)));

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = -1;
	static uint32_t x108 = 12550U;
	int32_t t23 = 2324230;

    t23 = (x105-(x106<=(x107%x108)));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x109 = INT8_MAX;
	volatile int16_t x110 = 862;
	uint16_t x112 = 61U;
	volatile int32_t t24 = -1579;

    t24 = (x109-(x110<=(x111%x112)));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = INT64_MIN;
	volatile int16_t x114 = INT16_MIN;
	volatile int64_t t25 = INT64_MIN;

    t25 = (x113-(x114<=(x115%x116)));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = -2;
	volatile uint16_t x119 = 226U;

    t26 = (x117-(x118<=(x119%x120)));

    if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x125 = 322667U;
	static uint8_t x126 = 1U;
	uint32_t x128 = 10967110U;
	static volatile uint32_t t27 = 25U;

    t27 = (x125-(x126<=(x127%x128)));

    if (t27 != 322666U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x129 = -1;
	int32_t x130 = -1;
	volatile int8_t x131 = INT8_MIN;
	uint32_t x132 = UINT32_MAX;
	static volatile int32_t t28 = -543759125;

    t28 = (x129-(x130<=(x131%x132)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x133 = 1U;
	int32_t x134 = INT32_MAX;
	volatile int32_t x135 = 586;
	int32_t t29 = 1;

    t29 = (x133-(x134<=(x135%x136)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x141 = -29008;
	int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MIN;

    t30 = (x141-(x142<=(x143%x144)));

    if (t30 != -29008) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x145 = 31U;
	int32_t x146 = -1499;
	int32_t x148 = INT32_MAX;

    t31 = (x145-(x146<=(x147%x148)));

    if (t31 != 30) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x149 = -20192251LL;
	static int16_t x150 = INT16_MAX;
	int16_t x151 = INT16_MIN;
	int16_t x152 = -1;
	volatile int64_t t32 = -1LL;

    t32 = (x149-(x150<=(x151%x152)));

    if (t32 != -20192251LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x157 = INT32_MIN;
	uint32_t x158 = 12926432U;
	int16_t x159 = -1;
	static int8_t x160 = -1;
	volatile int32_t t33 = INT32_MIN;

    t33 = (x157-(x158<=(x159%x160)));

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x161 = -9;
	int16_t x164 = -13;
	volatile int32_t t34 = -126969;

    t34 = (x161-(x162<=(x163%x164)));

    if (t34 != -9) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x165 = -1652;
	uint32_t x166 = UINT32_MAX;
	static uint16_t x167 = 5780U;
	uint32_t x168 = 3579U;

    t35 = (x165-(x166<=(x167%x168)));

    if (t35 != -1652) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x169 = -1;
	static int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MAX;

    t36 = (x169-(x170<=(x171%x172)));

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x173 = INT64_MAX;
	int32_t x174 = -1;
	int64_t x175 = INT64_MIN;

    t37 = (x173-(x174<=(x175%x176)));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x178 = INT8_MIN;
	static volatile int32_t x179 = INT32_MIN;
	volatile int32_t x180 = INT32_MIN;
	volatile int32_t t38 = 558035057;

    t38 = (x177-(x178<=(x179%x180)));

    if (t38 != 2147483646) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint64_t x181 = UINT64_MAX;
	int8_t x182 = INT8_MAX;
	uint64_t x183 = UINT64_MAX;
	volatile uint64_t t39 = 12241LLU;

    t39 = (x181-(x182<=(x183%x184)));

    if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x185 = 2U;
	volatile uint8_t x186 = 12U;
	int16_t x187 = -1;
	int64_t x188 = INT64_MAX;

    t40 = (x185-(x186<=(x187%x188)));

    if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x189 = 13;
	volatile int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MIN;
	int32_t x192 = -83;

    t41 = (x189-(x190<=(x191%x192)));

    if (t41 != 12) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = INT8_MIN;
	int32_t x194 = -951249;
	static int8_t x195 = 11;
	int32_t t42 = 3712;

    t42 = (x193-(x194<=(x195%x196)));

    if (t42 != -129) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x197 = 4474U;
	int64_t x198 = INT64_MIN;
	uint64_t x199 = 122358752859869311LLU;
	volatile uint8_t x200 = UINT8_MAX;
	static volatile int32_t t43 = -359448159;

    t43 = (x197-(x198<=(x199%x200)));

    if (t43 != 4474) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x201 = INT64_MAX;
	uint16_t x202 = 9455U;
	static int16_t x203 = INT16_MIN;
	int32_t x204 = -1;
	volatile int64_t t44 = INT64_MAX;

    t44 = (x201-(x202<=(x203%x204)));

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x205 = INT64_MIN;
	int16_t x206 = INT16_MIN;
	static uint32_t x207 = 126875423U;
	int32_t x208 = INT32_MIN;

    t45 = (x205-(x206<=(x207%x208)));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x213 = 59U;
	int16_t x215 = -31;
	int32_t x216 = INT32_MIN;
	int32_t t46 = 4753268;

    t46 = (x213-(x214<=(x215%x216)));

    if (t46 != 58) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x217 = -1;
	int64_t x218 = INT64_MIN;
	volatile int16_t x219 = INT16_MAX;
	int16_t x220 = -1;

    t47 = (x217-(x218<=(x219%x220)));

    if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x222 = INT16_MIN;
	volatile uint32_t x223 = 429737542U;
	int16_t x224 = INT16_MIN;
	volatile int32_t t48 = -120;

    t48 = (x221-(x222<=(x223%x224)));

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x225 = -32218LL;
	volatile int8_t x227 = 1;
	int32_t x228 = INT32_MIN;
	volatile int64_t t49 = -117400LL;

    t49 = (x225-(x226<=(x227%x228)));

    if (t49 != -32218LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x229 = INT16_MIN;
	int64_t x230 = -1LL;
	int16_t x231 = INT16_MIN;
	int64_t x232 = -1LL;

    t50 = (x229-(x230<=(x231%x232)));

    if (t50 != -32769) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x233 = -799;
	static volatile int16_t x234 = -1;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t51 = 0;

    t51 = (x233-(x234<=(x235%x236)));

    if (t51 != -800) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x239 = 32378U;
	static int32_t x240 = -1;
	volatile int64_t t52 = 2213012LL;

    t52 = (x237-(x238<=(x239%x240)));

    if (t52 != -2LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MIN;
	uint32_t x243 = 27258144U;
	int64_t x244 = INT64_MAX;
	int32_t t53 = 7253872;

    t53 = (x241-(x242<=(x243%x244)));

    if (t53 != -32769) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x245 = 5;
	static uint8_t x246 = 0U;
	int8_t x247 = -1;
	uint8_t x248 = UINT8_MAX;
	int32_t t54 = 1;

    t54 = (x245-(x246<=(x247%x248)));

    if (t54 != 5) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x249 = UINT64_MAX;
	static volatile uint32_t x250 = 0U;
	int64_t x252 = INT64_MAX;
	uint64_t t55 = 6762987851LLU;

    t55 = (x249-(x250<=(x251%x252)));

    if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x253 = 3U;
	uint16_t x254 = 83U;
	volatile uint8_t x256 = UINT8_MAX;
	volatile int32_t t56 = -50122;

    t56 = (x253-(x254<=(x255%x256)));

    if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x258 = INT16_MIN;
	int8_t x259 = INT8_MAX;
	uint64_t x260 = UINT64_MAX;

    t57 = (x257-(x258<=(x259%x260)));

    if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x261 = INT32_MIN;
	uint16_t x262 = 7904U;
	static int16_t x263 = 13394;
	int32_t x264 = -1;
	static volatile int32_t t58 = INT32_MIN;

    t58 = (x261-(x262<=(x263%x264)));

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x265 = INT64_MAX;
	int16_t x266 = 2270;
	volatile int64_t t59 = INT64_MAX;

    t59 = (x265-(x266<=(x267%x268)));

    if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x269 = -179LL;
	int64_t x270 = 11LL;
	static int32_t x271 = INT32_MIN;
	static int8_t x272 = -1;
	static volatile int64_t t60 = -58104443233402LL;

    t60 = (x269-(x270<=(x271%x272)));

    if (t60 != -179LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x273 = 98932LLU;
	static int8_t x274 = -6;
	int8_t x275 = INT8_MAX;
	int8_t x276 = -1;
	volatile uint64_t t61 = 1116340636464735354LLU;

    t61 = (x273-(x274<=(x275%x276)));

    if (t61 != 98931LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x277 = UINT32_MAX;
	int32_t x278 = -1;
	int8_t x279 = INT8_MAX;
	int8_t x280 = -1;

    t62 = (x277-(x278<=(x279%x280)));

    if (t62 != 4294967294U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x281 = INT64_MIN;
	int32_t x283 = -1;
	int64_t x284 = INT64_MIN;

    t63 = (x281-(x282<=(x283%x284)));

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x285 = 2357U;
	uint8_t x286 = 15U;
	static int8_t x288 = -7;
	volatile int32_t t64 = -113362278;

    t64 = (x285-(x286<=(x287%x288)));

    if (t64 != 2357) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x289 = INT64_MAX;
	static uint16_t x290 = 7U;
	static int64_t x291 = INT64_MIN;
	volatile int64_t t65 = INT64_MAX;

    t65 = (x289-(x290<=(x291%x292)));

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x293 = INT8_MAX;
	static int64_t x294 = INT64_MIN;
	volatile uint16_t x296 = 3U;
	static volatile int32_t t66 = -3;

    t66 = (x293-(x294<=(x295%x296)));

    if (t66 != 126) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x297 = INT8_MIN;
	volatile uint64_t x298 = UINT64_MAX;
	int8_t x299 = INT8_MIN;
	static volatile int32_t t67 = 566461282;

    t67 = (x297-(x298<=(x299%x300)));

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x301 = UINT16_MAX;
	static int32_t x302 = INT32_MIN;
	int64_t x303 = INT64_MIN;
	static int16_t x304 = INT16_MAX;
	volatile int32_t t68 = 763839;

    t68 = (x301-(x302<=(x303%x304)));

    if (t68 != 65534) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x305 = 98U;
	int16_t x306 = INT16_MAX;
	int8_t x307 = INT8_MIN;
	static volatile int8_t x308 = -12;
	volatile int32_t t69 = 2934183;

    t69 = (x305-(x306<=(x307%x308)));

    if (t69 != 98) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x309 = INT16_MIN;
	uint8_t x310 = 119U;
	volatile uint64_t x311 = 35LLU;

    t70 = (x309-(x310<=(x311%x312)));

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x313 = 64U;
	static int16_t x314 = INT16_MAX;
	int32_t x315 = 905939;
	int8_t x316 = INT8_MIN;

    t71 = (x313-(x314<=(x315%x316)));

    if (t71 != 64) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x319 = UINT8_MAX;
	static int32_t x320 = INT32_MIN;
	int32_t t72 = 15502;

    t72 = (x317-(x318<=(x319%x320)));

    if (t72 != -6159) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x321 = -12LL;
	int32_t x322 = INT32_MIN;
	uint64_t x324 = UINT64_MAX;
	static volatile int64_t t73 = -814102LL;

    t73 = (x321-(x322<=(x323%x324)));

    if (t73 != -12LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x325 = -1;
	uint32_t x326 = UINT32_MAX;
	static int8_t x327 = INT8_MIN;
	static int16_t x328 = INT16_MIN;
	static volatile int32_t t74 = 60698198;

    t74 = (x325-(x326<=(x327%x328)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x329 = 1129U;
	int32_t x330 = -11734134;
	static volatile int16_t x331 = -3;
	int32_t x332 = 1;
	int32_t t75 = -2235;

    t75 = (x329-(x330<=(x331%x332)));

    if (t75 != 1128) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x333 = UINT64_MAX;
	uint8_t x334 = 0U;
	static uint32_t x335 = 14U;

    t76 = (x333-(x334<=(x335%x336)));

    if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MAX;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t77 = -13445;

    t77 = (x337-(x338<=(x339%x340)));

    if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x342 = UINT16_MAX;
	static volatile int32_t x343 = 44;
	int32_t x344 = -1;
	static int64_t t78 = INT64_MAX;

    t78 = (x341-(x342<=(x343%x344)));

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x345 = 897665335862LLU;
	volatile int16_t x346 = INT16_MIN;
	volatile int32_t x347 = -1;
	volatile int32_t x348 = INT32_MAX;
	volatile uint64_t t79 = 62859182794114LLU;

    t79 = (x345-(x346<=(x347%x348)));

    if (t79 != 897665335861LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x349 = -1;
	static volatile uint64_t x351 = 131LLU;
	int16_t x352 = INT16_MIN;
	volatile int32_t t80 = 139;

    t80 = (x349-(x350<=(x351%x352)));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x353 = 134;
	int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MIN;
	int32_t x356 = 74095;
	volatile int32_t t81 = 3;

    t81 = (x353-(x354<=(x355%x356)));

    if (t81 != 133) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x360 = INT8_MIN;
	int32_t t82 = -31;

    t82 = (x357-(x358<=(x359%x360)));

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x361 = 0U;
	static int16_t x363 = 8065;
	volatile int32_t t83 = -2;

    t83 = (x361-(x362<=(x363%x364)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x366 = INT32_MIN;
	int32_t x368 = -1;
	static int32_t t84 = 0;

    t84 = (x365-(x366<=(x367%x368)));

    if (t84 != 1403) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x369 = 2493;
	int16_t x370 = INT16_MIN;
	uint16_t x371 = UINT16_MAX;
	volatile int32_t t85 = 26847580;

    t85 = (x369-(x370<=(x371%x372)));

    if (t85 != 2492) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x373 = INT16_MAX;
	int8_t x374 = INT8_MIN;
	int64_t x376 = -941694693380596537LL;
	int32_t t86 = -3;

    t86 = (x373-(x374<=(x375%x376)));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x377 = 0;
	static int32_t x378 = INT32_MIN;
	int8_t x379 = -1;
	volatile int64_t x380 = 62LL;
	int32_t t87 = -142592989;

    t87 = (x377-(x378<=(x379%x380)));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x381 = INT64_MAX;
	static volatile int32_t x382 = -3588510;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = INT32_MIN;
	static volatile int64_t t88 = -46519650910265LL;

    t88 = (x381-(x382<=(x383%x384)));

    if (t88 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x385 = 194369236902013174LL;
	int8_t x386 = INT8_MIN;
	static volatile int64_t t89 = 58LL;

    t89 = (x385-(x386<=(x387%x388)));

    if (t89 != 194369236902013173LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x389 = 107175050LL;
	int16_t x391 = -1;
	static int32_t x392 = INT32_MIN;
	int64_t t90 = -5LL;

    t90 = (x389-(x390<=(x391%x392)));

    if (t90 != 107175049LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x393 = 2U;
	volatile uint64_t x394 = 128596980469LLU;
	int16_t x395 = -115;
	volatile int64_t x396 = INT64_MIN;
	static volatile int32_t t91 = -960244;

    t91 = (x393-(x394<=(x395%x396)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x398 = 340U;
	volatile int64_t x399 = 8LL;
	volatile uint64_t x400 = UINT64_MAX;
	volatile int32_t t92 = 1225;

    t92 = (x397-(x398<=(x399%x400)));

    if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x401 = 660878981;
	int16_t x402 = -1;
	int64_t x403 = INT64_MIN;
	int8_t x404 = INT8_MAX;
	static int32_t t93 = -16618360;

    t93 = (x401-(x402<=(x403%x404)));

    if (t93 != 660878980) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x405 = INT16_MAX;
	static int64_t x406 = INT64_MIN;
	volatile int8_t x407 = -1;
	int32_t t94 = 9;

    t94 = (x405-(x406<=(x407%x408)));

    if (t94 != 32766) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x409 = 8479395749418LLU;
	volatile int16_t x410 = -1;
	int8_t x412 = 55;
	uint64_t t95 = 152997393059515829LLU;

    t95 = (x409-(x410<=(x411%x412)));

    if (t95 != 8479395749418LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x414 = 697506877U;
	static int32_t x415 = -144723513;
	int16_t x416 = -3908;
	int32_t t96 = 1;

    t96 = (x413-(x414<=(x415%x416)));

    if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x417 = 2U;
	static int32_t x418 = 4474920;
	int8_t x419 = -1;
	volatile uint8_t x420 = 5U;
	int32_t t97 = -2104;

    t97 = (x417-(x418<=(x419%x420)));

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x421 = 97630187688565439LLU;
	volatile int8_t x422 = -1;
	uint32_t x423 = 297U;
	int32_t x424 = 30;
	volatile uint64_t t98 = 1674208232059992LLU;

    t98 = (x421-(x422<=(x423%x424)));

    if (t98 != 97630187688565439LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x425 = INT16_MAX;
	uint32_t x426 = UINT32_MAX;
	uint16_t x427 = 43U;
	volatile uint16_t x428 = 8U;

    t99 = (x425-(x426<=(x427%x428)));

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x429 = INT16_MIN;
	int16_t x430 = INT16_MIN;
	int32_t x431 = INT32_MIN;
	volatile int16_t x432 = -3;
	int32_t t100 = -3588;

    t100 = (x429-(x430<=(x431%x432)));

    if (t100 != -32769) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x433 = -1;
	uint8_t x434 = 61U;
	int64_t x435 = INT64_MIN;
	static int32_t t101 = -1;

    t101 = (x433-(x434<=(x435%x436)));

    if (t101 != -2) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x437 = UINT32_MAX;
	int8_t x438 = INT8_MIN;
	uint8_t x440 = 2U;
	uint32_t t102 = 0U;

    t102 = (x437-(x438<=(x439%x440)));

    if (t102 != 4294967294U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x441 = 21501LL;
	int8_t x442 = INT8_MAX;
	int64_t x443 = -45689LL;
	int32_t x444 = INT32_MAX;
	volatile int64_t t103 = -43015900700LL;

    t103 = (x441-(x442<=(x443%x444)));

    if (t103 != 21501LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x445 = INT64_MIN;
	uint32_t x446 = 295287U;
	int16_t x447 = 3015;
	int32_t x448 = INT32_MIN;

    t104 = (x445-(x446<=(x447%x448)));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x449 = -237;
	uint16_t x450 = UINT16_MAX;
	uint32_t x451 = 6305482U;
	static uint16_t x452 = UINT16_MAX;
	static int32_t t105 = 2930;

    t105 = (x449-(x450<=(x451%x452)));

    if (t105 != -237) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	int64_t x454 = -460LL;
	static uint8_t x455 = 0U;
	uint32_t x456 = UINT32_MAX;
	volatile int32_t t106 = 725;

    t106 = (x453-(x454<=(x455%x456)));

    if (t106 != 65534) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x457 = 1381877149U;
	int64_t x458 = INT64_MIN;
	int16_t x459 = -1;
	volatile int8_t x460 = INT8_MIN;
	volatile uint32_t t107 = 3U;

    t107 = (x457-(x458<=(x459%x460)));

    if (t107 != 1381877148U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x461 = -1;
	int32_t x464 = -219;
	static volatile int32_t t108 = -99448;

    t108 = (x461-(x462<=(x463%x464)));

    if (t108 != -2) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x468 = 7145424LL;
	uint32_t t109 = UINT32_MAX;

    t109 = (x465-(x466<=(x467%x468)));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x469 = INT16_MAX;
	volatile uint16_t x470 = 100U;
	static uint64_t x471 = 5939494LLU;
	volatile int32_t t110 = 4775;

    t110 = (x469-(x470<=(x471%x472)));

    if (t110 != 32766) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x473 = 899399176075LLU;
	static int16_t x474 = -8;
	int8_t x475 = INT8_MAX;
	static volatile int64_t x476 = INT64_MAX;
	uint64_t t111 = 18090381LLU;

    t111 = (x473-(x474<=(x475%x476)));

    if (t111 != 899399176074LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x478 = 7U;
	volatile int64_t x479 = INT64_MIN;
	volatile int64_t x480 = INT64_MIN;
	int32_t t112 = INT32_MIN;

    t112 = (x477-(x478<=(x479%x480)));

    if (t112 != INT32_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x481 = UINT64_MAX;
	uint16_t x483 = UINT16_MAX;
	int16_t x484 = INT16_MIN;
	static volatile uint64_t t113 = 5925LLU;

    t113 = (x481-(x482<=(x483%x484)));

    if (t113 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x485 = INT32_MIN;
	static uint64_t x488 = 45527LLU;
	int32_t t114 = INT32_MIN;

    t114 = (x485-(x486<=(x487%x488)));

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x489 = 87264773863750651LL;
	volatile int16_t x491 = INT16_MAX;
	int16_t x492 = INT16_MAX;
	volatile int64_t t115 = -83447LL;

    t115 = (x489-(x490<=(x491%x492)));

    if (t115 != 87264773863750651LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x493 = INT16_MIN;
	uint32_t x495 = 180U;
	uint64_t x496 = 1543190293LLU;
	int32_t t116 = 632622;

    t116 = (x493-(x494<=(x495%x496)));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x497 = UINT64_MAX;
	volatile uint8_t x499 = 2U;
	volatile int8_t x500 = -1;
	static uint64_t t117 = UINT64_MAX;

    t117 = (x497-(x498<=(x499%x500)));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x505 = 106U;
	int64_t x506 = INT64_MAX;
	int32_t x507 = INT32_MIN;
	int16_t x508 = INT16_MIN;
	volatile int32_t t118 = -154;

    t118 = (x505-(x506<=(x507%x508)));

    if (t118 != 106) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x509 = INT8_MAX;
	uint64_t x510 = 259609045LLU;
	int64_t x511 = -1LL;
	int64_t x512 = -119996583774016LL;

    t119 = (x509-(x510<=(x511%x512)));

    if (t119 != 126) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x513 = -1834290978596452323LL;
	int16_t x515 = 7;
	int16_t x516 = 3;
	volatile int64_t t120 = 51853255LL;

    t120 = (x513-(x514<=(x515%x516)));

    if (t120 != -1834290978596452323LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x518 = 13164LLU;
	static int32_t x519 = INT32_MIN;
	uint64_t x520 = UINT64_MAX;
	int32_t t121 = 17;

    t121 = (x517-(x518<=(x519%x520)));

    if (t121 != 254) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x522 = INT64_MIN;
	static int16_t x523 = 59;
	uint32_t x524 = 3439U;
	int32_t t122 = 2608;

    t122 = (x521-(x522<=(x523%x524)));

    if (t122 != 66) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x529 = -1;
	uint8_t x531 = 7U;
	static uint64_t x532 = 2404031093731228LLU;
	volatile int32_t t123 = -384;

    t123 = (x529-(x530<=(x531%x532)));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x533 = UINT16_MAX;
	uint16_t x534 = 8192U;
	int8_t x536 = -56;
	int32_t t124 = -218;

    t124 = (x533-(x534<=(x535%x536)));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x537 = 791791U;
	volatile int16_t x538 = INT16_MAX;
	int8_t x539 = INT8_MIN;
	static volatile uint32_t t125 = 1052255267U;

    t125 = (x537-(x538<=(x539%x540)));

    if (t125 != 791791U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x541 = INT32_MAX;
	int8_t x542 = -63;
	int8_t x543 = -1;
	int16_t x544 = -1;
	int32_t t126 = 33;

    t126 = (x541-(x542<=(x543%x544)));

    if (t126 != 2147483646) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint16_t x545 = UINT16_MAX;
	int64_t x546 = INT64_MAX;
	int32_t x547 = INT32_MAX;
	int8_t x548 = INT8_MAX;
	volatile int32_t t127 = 69176;

    t127 = (x545-(x546<=(x547%x548)));

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x550 = INT8_MIN;
	volatile int8_t x551 = INT8_MIN;
	uint64_t t128 = 167585192LLU;

    t128 = (x549-(x550<=(x551%x552)));

    if (t128 != 2LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x553 = -1;
	volatile int32_t x554 = INT32_MAX;
	int8_t x555 = -15;
	int32_t t129 = -2311367;

    t129 = (x553-(x554<=(x555%x556)));

    if (t129 != -2) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x558 = -1LL;

    t130 = (x557-(x558<=(x559%x560)));

    if (t130 != -129) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x561 = INT8_MAX;
	static int64_t x562 = INT64_MIN;
	int64_t x563 = INT64_MAX;

    t131 = (x561-(x562<=(x563%x564)));

    if (t131 != 126) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x565 = UINT8_MAX;
	uint16_t x566 = 20U;
	uint8_t x567 = UINT8_MAX;
	int8_t x568 = INT8_MIN;
	volatile int32_t t132 = 34;

    t132 = (x565-(x566<=(x567%x568)));

    if (t132 != 254) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x569 = UINT16_MAX;
	int64_t x570 = -1LL;
	int32_t x571 = INT32_MAX;
	int32_t x572 = INT32_MIN;

    t133 = (x569-(x570<=(x571%x572)));

    if (t133 != 65534) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x573 = INT64_MAX;
	uint32_t x574 = UINT32_MAX;
	static volatile int8_t x576 = -1;

    t134 = (x573-(x574<=(x575%x576)));

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x577 = 47U;
	uint8_t x578 = UINT8_MAX;
	int64_t x579 = -1LL;
	uint16_t x580 = 75U;
	volatile int32_t t135 = -498;

    t135 = (x577-(x578<=(x579%x580)));

    if (t135 != 47) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x583 = 30;
	static int32_t x584 = INT32_MAX;
	volatile int32_t t136 = -69723934;

    t136 = (x581-(x582<=(x583%x584)));

    if (t136 != 25) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x585 = -1;
	uint8_t x587 = UINT8_MAX;
	static uint8_t x588 = 121U;
	int32_t t137 = -1361;

    t137 = (x585-(x586<=(x587%x588)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x589 = 8LLU;
	int16_t x590 = INT16_MIN;
	volatile uint64_t x592 = UINT64_MAX;
	uint64_t t138 = 5LLU;

    t138 = (x589-(x590<=(x591%x592)));

    if (t138 != 8LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x598 = -1;
	int16_t x599 = -1;
	int16_t x600 = 6;
	int64_t t139 = 24037118115673935LL;

    t139 = (x597-(x598<=(x599%x600)));

    if (t139 != 1618688611255LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x601 = INT64_MIN;
	static uint64_t x602 = UINT64_MAX;
	uint16_t x603 = 87U;
	static int32_t x604 = INT32_MAX;

    t140 = (x601-(x602<=(x603%x604)));

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x605 = 84911657919569LLU;
	volatile int8_t x607 = INT8_MIN;
	volatile int32_t x608 = INT32_MAX;
	volatile uint64_t t141 = 350175622466560581LLU;

    t141 = (x605-(x606<=(x607%x608)));

    if (t141 != 84911657919569LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x613 = INT32_MIN;
	int16_t x614 = -1;
	uint32_t x615 = 932U;
	int32_t x616 = INT32_MIN;
	static volatile int32_t t142 = INT32_MIN;

    t142 = (x613-(x614<=(x615%x616)));

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint8_t x617 = UINT8_MAX;
	int64_t x618 = INT64_MIN;
	int64_t x619 = INT64_MAX;
	uint32_t x620 = 2U;

    t143 = (x617-(x618<=(x619%x620)));

    if (t143 != 254) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x621 = -34;
	int8_t x622 = -1;
	int16_t x624 = -1;
	volatile int32_t t144 = 491;

    t144 = (x621-(x622<=(x623%x624)));

    if (t144 != -35) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x626 = INT16_MIN;
	int32_t x627 = -160951;
	volatile int64_t x628 = 7342002070LL;
	static volatile int32_t t145 = -285255500;

    t145 = (x625-(x626<=(x627%x628)));

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x629 = INT32_MAX;
	int8_t x630 = -1;
	int8_t x631 = INT8_MIN;
	volatile int32_t t146 = INT32_MAX;

    t146 = (x629-(x630<=(x631%x632)));

    if (t146 != INT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x633 = UINT32_MAX;
	int16_t x634 = 172;

    t147 = (x633-(x634<=(x635%x636)));

    if (t147 != 4294967294U) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x637 = 2U;
	static int64_t x638 = 178933407619548LL;
	int16_t x640 = 109;

    t148 = (x637-(x638<=(x639%x640)));

    if (t148 != 2) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x641 = INT16_MAX;
	int64_t x642 = 234296LL;
	int8_t x643 = INT8_MAX;
	int64_t x644 = INT64_MAX;
	volatile int32_t t149 = -6;

    t149 = (x641-(x642<=(x643%x644)));

    if (t149 != 32767) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x647 = UINT64_MAX;
	int16_t x648 = INT16_MIN;
	static int32_t t150 = 256984614;

    t150 = (x645-(x646<=(x647%x648)));

    if (t150 != 3572) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x649 = -2401;
	int16_t x650 = -36;
	int16_t x651 = -1;
	static uint32_t x652 = 33U;
	volatile int32_t t151 = 56219309;

    t151 = (x649-(x650<=(x651%x652)));

    if (t151 != -2401) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint16_t x653 = UINT16_MAX;
	int64_t x655 = 440LL;
	static int16_t x656 = -70;
	volatile int32_t t152 = 1;

    t152 = (x653-(x654<=(x655%x656)));

    if (t152 != 65534) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x657 = UINT32_MAX;
	volatile int16_t x658 = INT16_MIN;
	int8_t x659 = 31;
	int8_t x660 = 3;

    t153 = (x657-(x658<=(x659%x660)));

    if (t153 != 4294967294U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x662 = 574LL;
	uint32_t x663 = 101763U;
	static int8_t x664 = -16;
	volatile uint64_t t154 = 12LLU;

    t154 = (x661-(x662<=(x663%x664)));

    if (t154 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x666 = INT32_MIN;
	int8_t x667 = 4;
	int32_t x668 = INT32_MIN;

    t155 = (x665-(x666<=(x667%x668)));

    if (t155 != 65534) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint16_t x670 = 2U;
	int16_t x671 = INT16_MAX;
	int32_t x672 = -25355;

    t156 = (x669-(x670<=(x671%x672)));

    if (t156 != 254) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x673 = INT16_MAX;
	int16_t x674 = INT16_MAX;
	int8_t x675 = 2;
	int16_t x676 = -1;
	int32_t t157 = 164922216;

    t157 = (x673-(x674<=(x675%x676)));

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x679 = -1;
	uint8_t x680 = 115U;
	volatile int32_t t158 = 141;

    t158 = (x677-(x678<=(x679%x680)));

    if (t158 != 2147483646) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x681 = INT8_MIN;
	static volatile int8_t x682 = 0;
	static int16_t x683 = -8574;
	uint64_t x684 = 133LLU;
	volatile int32_t t159 = 8;

    t159 = (x681-(x682<=(x683%x684)));

    if (t159 != -129) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x685 = -3741;
	int16_t x686 = -1;
	static uint16_t x687 = UINT16_MAX;
	int8_t x688 = INT8_MIN;
	volatile int32_t t160 = 61050;

    t160 = (x685-(x686<=(x687%x688)));

    if (t160 != -3742) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x689 = 15U;
	int64_t x690 = 3603409LL;
	int16_t x691 = -1;
	volatile int16_t x692 = INT16_MAX;
	volatile int32_t t161 = -4909;

    t161 = (x689-(x690<=(x691%x692)));

    if (t161 != 15) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint8_t x693 = UINT8_MAX;
	static int8_t x695 = -1;
	int32_t t162 = -10835;

    t162 = (x693-(x694<=(x695%x696)));

    if (t162 != 254) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x697 = -32774LL;
	static int16_t x698 = INT16_MIN;
	int32_t x699 = -1;
	volatile int64_t t163 = 17LL;

    t163 = (x697-(x698<=(x699%x700)));

    if (t163 != -32775LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x701 = -1;
	uint32_t x703 = UINT32_MAX;
	volatile uint32_t x704 = UINT32_MAX;
	int32_t t164 = 1;

    t164 = (x701-(x702<=(x703%x704)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x705 = INT8_MIN;
	static uint16_t x707 = 3U;
	static uint8_t x708 = UINT8_MAX;

    t165 = (x705-(x706<=(x707%x708)));

    if (t165 != -129) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x709 = UINT8_MAX;
	int8_t x710 = INT8_MIN;
	int16_t x711 = 1;
	int16_t x712 = INT16_MAX;
	volatile int32_t t166 = 715535;

    t166 = (x709-(x710<=(x711%x712)));

    if (t166 != 254) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x713 = 2010U;
	volatile int16_t x715 = -1;
	volatile int32_t x716 = -1912;
	int32_t t167 = -509;

    t167 = (x713-(x714<=(x715%x716)));

    if (t167 != 2010) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x717 = 1;
	int16_t x718 = INT16_MAX;
	int16_t x719 = 2070;
	int32_t x720 = INT32_MAX;
	volatile int32_t t168 = 3788732;

    t168 = (x717-(x718<=(x719%x720)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x721 = 3996U;
	uint64_t x722 = 3892394792LLU;
	static volatile int32_t x723 = 119758642;
	int64_t x724 = -1LL;
	uint32_t t169 = 2258U;

    t169 = (x721-(x722<=(x723%x724)));

    if (t169 != 3996U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x725 = 63U;
	int16_t x726 = INT16_MIN;
	int16_t x728 = INT16_MIN;
	static volatile int32_t t170 = 2;

    t170 = (x725-(x726<=(x727%x728)));

    if (t170 != 62) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x730 = INT64_MIN;
	volatile int16_t x731 = INT16_MAX;
	int64_t x732 = 528984327743LL;

    t171 = (x729-(x730<=(x731%x732)));

    if (t171 != 32766) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x733 = 121756U;
	int8_t x734 = -5;
	int64_t x735 = INT64_MIN;

    t172 = (x733-(x734<=(x735%x736)));

    if (t172 != 121755U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x737 = UINT16_MAX;
	int64_t x738 = 5414LL;
	uint64_t x739 = UINT64_MAX;
	int8_t x740 = INT8_MAX;
	int32_t t173 = -302517614;

    t173 = (x737-(x738<=(x739%x740)));

    if (t173 != 65535) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x741 = 205;
	int64_t x742 = -2057323048065756751LL;
	uint32_t x743 = UINT32_MAX;
	volatile int32_t t174 = -370094;

    t174 = (x741-(x742<=(x743%x744)));

    if (t174 != 204) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x746 = 1U;
	static int64_t x747 = -1LL;
	uint16_t x748 = UINT16_MAX;

    t175 = (x745-(x746<=(x747%x748)));

    if (t175 != 2LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x749 = UINT16_MAX;
	int16_t x751 = INT16_MAX;
	uint8_t x752 = UINT8_MAX;
	volatile int32_t t176 = 6387;

    t176 = (x749-(x750<=(x751%x752)));

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int64_t x753 = INT64_MAX;
	int64_t x754 = INT64_MAX;
	volatile uint8_t x755 = 1U;
	volatile uint64_t x756 = 5440030891606203LLU;
	static volatile int64_t t177 = INT64_MAX;

    t177 = (x753-(x754<=(x755%x756)));

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x757 = INT64_MIN;
	uint16_t x758 = UINT16_MAX;
	static int32_t x759 = -1;
	volatile int16_t x760 = -1;
	volatile int64_t t178 = INT64_MIN;

    t178 = (x757-(x758<=(x759%x760)));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x765 = 4823604360118LL;
	int16_t x766 = 2;
	int64_t x767 = INT64_MAX;
	static int32_t x768 = -1;
	int64_t t179 = -64LL;

    t179 = (x765-(x766<=(x767%x768)));

    if (t179 != 4823604360118LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x770 = 6U;
	int32_t x771 = 62285013;
	static volatile int16_t x772 = INT16_MIN;
	uint32_t t180 = 85U;

    t180 = (x769-(x770<=(x771%x772)));

    if (t180 != 326377U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x774 = -199LL;
	uint32_t x776 = 24102284U;
	int32_t t181 = 521;

    t181 = (x773-(x774<=(x775%x776)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x777 = -32;
	int64_t x779 = -111783312823533766LL;
	int16_t x780 = -7;
	volatile int32_t t182 = 356082241;

    t182 = (x777-(x778<=(x779%x780)));

    if (t182 != -33) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x782 = -1;
	int8_t x783 = INT8_MIN;
	static int32_t t183 = INT32_MIN;

    t183 = (x781-(x782<=(x783%x784)));

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x786 = -1;
	static volatile int16_t x787 = INT16_MIN;
	uint8_t x788 = UINT8_MAX;
	static uint64_t t184 = 45899618493LLU;

    t184 = (x785-(x786<=(x787%x788)));

    if (t184 != 1124635972877LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x789 = -1LL;
	volatile int64_t x790 = 41LL;
	uint64_t x791 = UINT64_MAX;
	int32_t x792 = INT32_MIN;
	int64_t t185 = -20081LL;

    t185 = (x789-(x790<=(x791%x792)));

    if (t185 != -2LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x793 = 4LL;
	int64_t x794 = -1LL;
	int32_t x795 = -78475207;
	volatile int64_t x796 = INT64_MAX;
	int64_t t186 = -3776654853958LL;

    t186 = (x793-(x794<=(x795%x796)));

    if (t186 != 4LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x798 = 63045U;
	int16_t x799 = INT16_MIN;
	int64_t x800 = -1LL;
	volatile int32_t t187 = -7323;

    t187 = (x797-(x798<=(x799%x800)));

    if (t187 != 462069103) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x801 = -243;
	volatile int64_t x802 = -87987849LL;
	int16_t x803 = INT16_MIN;
	uint16_t x804 = UINT16_MAX;
	volatile int32_t t188 = -550;

    t188 = (x801-(x802<=(x803%x804)));

    if (t188 != -244) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x805 = -10;
	static volatile uint64_t x806 = 8LLU;
	int64_t x807 = -8409909LL;
	uint32_t x808 = 312233U;
	int32_t t189 = -3071;

    t189 = (x805-(x806<=(x807%x808)));

    if (t189 != -11) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x810 = 0U;
	uint8_t x811 = 31U;
	static uint16_t x812 = 7672U;

    t190 = (x809-(x810<=(x811%x812)));

    if (t190 != 2147483646) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x814 = -42;
	int32_t x815 = -49167582;
	int16_t x816 = -8161;
	volatile int64_t t191 = INT64_MIN;

    t191 = (x813-(x814<=(x815%x816)));

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x817 = -197;
	volatile uint8_t x818 = UINT8_MAX;
	int64_t x819 = INT64_MIN;
	int8_t x820 = INT8_MAX;

    t192 = (x817-(x818<=(x819%x820)));

    if (t192 != -197) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x822 = INT32_MIN;
	int8_t x823 = -4;
	uint8_t x824 = UINT8_MAX;

    t193 = (x821-(x822<=(x823%x824)));

    if (t193 != -40) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x825 = 11U;
	int8_t x826 = -15;
	volatile uint16_t x827 = 935U;
	int8_t x828 = INT8_MIN;

    t194 = (x825-(x826<=(x827%x828)));

    if (t194 != 10) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x830 = 1U;
	static uint8_t x831 = 124U;
	int64_t x832 = -78429LL;

    t195 = (x829-(x830<=(x831%x832)));

    if (t195 != 6474) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x834 = 1413U;
	int32_t x835 = 60315307;
	int8_t x836 = -34;
	static volatile int32_t t196 = 6446;

    t196 = (x833-(x834<=(x835%x836)));

    if (t196 != 65535) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x838 = 1U;
	uint32_t x839 = 571366137U;
	static volatile int32_t t197 = -248668;

    t197 = (x837-(x838<=(x839%x840)));

    if (t197 != 254) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x841 = 470;

    t198 = (x841-(x842<=(x843%x844)));

    if (t198 != 470) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x846 = -1;
	int16_t x847 = -904;
	static volatile int32_t t199 = 3995;

    t199 = (x845-(x846<=(x847%x848)));

    if (t199 != -5297) { NG(); } else { ; }
	
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

