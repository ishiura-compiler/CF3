
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

static int8_t x2 = INT8_MIN;
static int16_t x11 = INT16_MIN;
int8_t x12 = INT8_MIN;
int32_t x17 = INT32_MAX;
static int16_t x21 = 2085;
static int32_t x25 = -24;
volatile int16_t x30 = -1;
uint32_t x36 = 447554763U;
volatile int32_t x45 = INT32_MIN;
volatile int32_t x53 = INT32_MIN;
static int16_t x57 = -1;
static int64_t x59 = INT64_MIN;
int32_t x61 = INT32_MAX;
uint64_t x63 = 863373138425980LLU;
volatile int16_t x65 = -426;
int8_t x66 = 1;
static uint32_t x77 = 9104U;
uint64_t x84 = UINT64_MAX;
int8_t x91 = INT8_MAX;
volatile uint64_t x92 = 883LLU;
int8_t x96 = -6;
static volatile uint8_t x100 = UINT8_MAX;
uint8_t x107 = 81U;
uint8_t x108 = UINT8_MAX;
static volatile uint16_t x109 = UINT16_MAX;
int8_t x115 = INT8_MIN;
uint64_t t23 = 1494950LLU;
static uint8_t x131 = UINT8_MAX;
volatile int16_t x147 = -1;
static int32_t x148 = INT32_MIN;
uint32_t t26 = 25667U;
uint16_t x151 = 17U;
volatile int32_t t27 = 52028;
static volatile uint8_t x155 = 20U;
int32_t x159 = INT32_MAX;
uint16_t x166 = 2269U;
static int16_t x177 = INT16_MIN;
volatile int64_t t33 = 72013274570LL;
volatile int64_t x181 = 611434202300570707LL;
static uint8_t x184 = UINT8_MAX;
uint32_t t35 = 192175180U;
volatile uint64_t t36 = 206949418600LLU;
int32_t x199 = INT32_MIN;
int32_t x208 = -1;
int64_t x228 = INT64_MAX;
uint16_t x234 = UINT16_MAX;
volatile uint64_t t43 = 2665444125090LLU;
volatile int64_t x241 = -1LL;
uint32_t x242 = 7477U;
uint64_t t45 = 8381LLU;
int64_t x256 = INT64_MAX;
volatile uint32_t t47 = 7178U;
int32_t t48 = 63415;
static int8_t x267 = -9;
int16_t x273 = 0;
uint8_t x275 = 26U;
volatile uint64_t t50 = 91740572130LLU;
int32_t x292 = -258946828;
static int16_t x300 = -3;
uint64_t x312 = 691LLU;
uint16_t x315 = 729U;
static int64_t x316 = -1LL;
int8_t x325 = 25;
uint64_t x326 = 477866398986LLU;
volatile uint32_t x333 = 1U;
uint32_t x381 = 15125U;
uint64_t x384 = UINT64_MAX;
uint16_t x385 = 127U;
uint8_t x389 = UINT8_MAX;
int16_t x398 = 10101;
static volatile int32_t x399 = INT32_MIN;
volatile int32_t t70 = -1937;
volatile int64_t x404 = INT64_MAX;
static int64_t x413 = -184LL;
uint64_t x414 = 1794840897LLU;
volatile int8_t x419 = 6;
volatile int32_t t73 = -10;
int64_t x425 = INT64_MAX;
int8_t x427 = INT8_MAX;
int64_t x439 = INT64_MIN;
static volatile int64_t t78 = -15110297911LL;
int64_t x457 = INT64_MIN;
uint64_t x462 = UINT64_MAX;
int16_t x468 = -1;
volatile uint32_t x474 = UINT32_MAX;
int32_t x482 = INT32_MAX;
int16_t x484 = INT16_MIN;
int64_t t84 = -63563976LL;
uint16_t x486 = 11198U;
volatile uint64_t x487 = 815923726961LLU;
static volatile uint64_t t85 = 27666385349LLU;
int16_t x522 = -1;
int16_t x526 = INT16_MIN;
uint8_t x529 = 7U;
uint32_t x542 = 456471U;
static int64_t x543 = INT64_MIN;
int16_t x552 = INT16_MAX;
volatile uint64_t t97 = 91LLU;
uint16_t x567 = UINT16_MAX;
static int16_t x574 = INT16_MAX;
uint16_t x576 = 19008U;
uint32_t x587 = 9022891U;
uint16_t x593 = 1U;
volatile int32_t x598 = INT32_MAX;
volatile uint8_t x603 = 44U;
uint16_t x605 = 2U;
int8_t x617 = -1;
int8_t x620 = INT8_MAX;
uint32_t x627 = 72U;
int64_t x628 = INT64_MAX;
static int8_t x636 = 7;
int16_t x637 = INT16_MIN;
uint16_t x640 = UINT16_MAX;
int32_t x653 = INT32_MAX;
volatile int32_t x654 = INT32_MIN;
int8_t x658 = 1;
int16_t x659 = INT16_MAX;
uint64_t t117 = 10691LLU;
uint64_t t120 = 14523LLU;
volatile uint32_t x691 = 12U;
static volatile int32_t x694 = -1;
int8_t x697 = -1;
int64_t x699 = INT64_MAX;
static int64_t t124 = -569150234258626LL;
volatile uint16_t x711 = UINT16_MAX;
int64_t t126 = -308LL;
volatile int32_t t127 = -12807;
static volatile int8_t x721 = INT8_MIN;
uint32_t x726 = UINT32_MAX;
uint64_t t130 = 5264610477958LLU;
int64_t x748 = INT64_MAX;
uint64_t x750 = 2LLU;
volatile int32_t t137 = -274021682;
uint32_t x790 = 860209562U;
volatile uint64_t t140 = 10219LLU;
static volatile int16_t x808 = INT16_MIN;
int8_t x814 = -1;
uint64_t t142 = 1105256019471588LLU;
int64_t x818 = INT64_MIN;
static int16_t x820 = INT16_MIN;
uint64_t t143 = 3664028LLU;
static int64_t x826 = INT64_MAX;
uint64_t x829 = 5776236865LLU;
volatile int8_t x833 = INT8_MIN;
int64_t t147 = -37511546229LL;
static int16_t x847 = INT16_MIN;
int8_t x850 = -1;
static int8_t x861 = 1;
volatile uint32_t t152 = 50442101U;
volatile uint32_t x872 = 8719U;
static int32_t x874 = 8616322;
static volatile int32_t x887 = INT32_MIN;
volatile int32_t x888 = INT32_MIN;
int64_t x895 = 4211064681838842LL;
int16_t x896 = -2;
static volatile int64_t t157 = -10008929098428LL;
uint64_t x903 = UINT64_MAX;
int8_t x913 = INT8_MAX;
int16_t x914 = INT16_MAX;
int8_t x933 = INT8_MIN;
static volatile int64_t x935 = -3031239127764500LL;
int8_t x940 = INT8_MIN;
int32_t x945 = INT32_MAX;
uint64_t x946 = 2061859LLU;
uint16_t x961 = UINT16_MAX;
uint32_t x967 = 7861U;
static volatile int8_t x981 = -1;
uint64_t t175 = 39519566003210LLU;
static int64_t x989 = -708778LL;
uint32_t x995 = 112U;
uint16_t x997 = 17376U;
int64_t t179 = -3607252945070565557LL;
static uint8_t x1011 = UINT8_MAX;
volatile int32_t x1032 = -262514;
int16_t x1056 = -8;
uint64_t t189 = 7032LLU;
volatile uint64_t x1065 = 65LLU;
int16_t x1074 = -5038;
uint32_t x1076 = 11904U;
static int64_t x1084 = -1639459791143602512LL;
uint8_t x1090 = 5U;
volatile int8_t x1097 = INT8_MIN;
volatile int32_t t196 = -596366192;
static volatile uint64_t x1101 = UINT64_MAX;
int16_t x1108 = INT16_MAX;
volatile uint32_t t198 = 857781U;
int64_t x1111 = INT64_MIN;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -1;
	int64_t t0 = -30879105932044936LL;

    t0 = ((x1%(x2%x3))-x4);

    if (t0 != 128LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	static int16_t x6 = -1023;
	static int8_t x7 = -14;
	static int8_t x8 = 11;
	volatile int32_t t1 = 6;

    t1 = ((x5%(x6%x7))-x8);

    if (t1 != -11) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = UINT8_MAX;
	uint32_t x10 = 53549551U;
	volatile uint32_t t2 = 6073U;

    t2 = ((x9%(x10%x11))-x12);

    if (t2 != 383U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x18 = INT64_MIN;
	uint8_t x19 = UINT8_MAX;
	static uint16_t x20 = UINT16_MAX;
	volatile int64_t t3 = 532718955287LL;

    t3 = ((x17%(x18%x19))-x20);

    if (t3 != -65408LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x22 = 6U;
	uint16_t x23 = 7U;
	static int8_t x24 = INT8_MAX;
	volatile int32_t t4 = 19515;

    t4 = ((x21%(x22%x23))-x24);

    if (t4 != -124) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x26 = 21536920;
	volatile int32_t x27 = 65278;
	int16_t x28 = INT16_MAX;
	int32_t t5 = 151150;

    t5 = ((x25%(x26%x27))-x28);

    if (t5 != -32791) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = UINT8_MAX;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -65891847490LL;
	static volatile int64_t t6 = 6116779LL;

    t6 = ((x29%(x30%x31))-x32);

    if (t6 != 65891847490LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 505457LLU;
	uint64_t x34 = 371LLU;
	uint32_t x35 = 18251U;
	volatile uint64_t t7 = 11590LLU;

    t7 = ((x33%(x34%x35))-x36);

    if (t7 != 18446744073261997008LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x46 = -34260200;
	volatile int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MAX;
	int32_t t8 = -1659;

    t8 = ((x45%(x46%x47))-x48);

    if (t8 != -40455) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x54 = -1;
	int16_t x55 = -36;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t9 = 1900;

    t9 = ((x53%(x54%x55))-x56);

    if (t9 != -65535) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x58 = 47U;
	volatile int16_t x60 = INT16_MAX;
	int64_t t10 = 168LL;

    t10 = ((x57%(x58%x59))-x60);

    if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x62 = INT32_MIN;
	int32_t x64 = INT32_MAX;
	uint64_t t11 = 9LLU;

    t11 = ((x61%(x62%x63))-x64);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x67 = INT16_MIN;
	static volatile int64_t x68 = 15130LL;
	static int64_t t12 = -98650LL;

    t12 = ((x65%(x66%x67))-x68);

    if (t12 != -15130LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	uint16_t x71 = 26142U;
	uint8_t x72 = UINT8_MAX;
	uint32_t t13 = 58619U;

    t13 = ((x69%(x70%x71))-x72);

    if (t13 != 8580U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x73 = UINT16_MAX;
	static uint64_t x74 = 51LLU;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = 501U;
	volatile uint64_t t14 = 0LLU;

    t14 = ((x73%(x74%x75))-x76);

    if (t14 != 18446744073709551115LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint16_t x78 = 766U;
	static int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MAX;
	int64_t t15 = -269LL;

    t15 = ((x77%(x78%x79))-x80);

    if (t15 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MAX;
	uint8_t x83 = UINT8_MAX;
	volatile uint64_t t16 = 17050LLU;

    t16 = ((x81%(x82%x83))-x84);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x85 = 0U;
	static int16_t x86 = -1;
	volatile int16_t x87 = INT16_MAX;
	int16_t x88 = 68;
	int32_t t17 = 1394;

    t17 = ((x85%(x86%x87))-x88);

    if (t17 != -68) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = UINT32_MAX;
	static volatile int64_t x90 = INT64_MIN;
	volatile uint64_t t18 = 23214825374858LLU;

    t18 = ((x89%(x90%x91))-x92);

    if (t18 != 18446744073709550733LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x93 = -1;
	uint8_t x94 = 14U;
	uint64_t x95 = 59811390914LLU;
	uint64_t t19 = 771363457LLU;

    t19 = ((x93%(x94%x95))-x96);

    if (t19 != 7LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x97 = -2LL;
	uint8_t x98 = UINT8_MAX;
	static int16_t x99 = 8;
	volatile int64_t t20 = -9759LL;

    t20 = ((x97%(x98%x99))-x100);

    if (t20 != -257LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x105 = INT8_MIN;
	uint8_t x106 = 1U;
	int32_t t21 = 265;

    t21 = ((x105%(x106%x107))-x108);

    if (t21 != -255) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x110 = -1LL;
	static int64_t x111 = INT64_MAX;
	uint8_t x112 = UINT8_MAX;
	static volatile int64_t t22 = -107LL;

    t22 = ((x109%(x110%x111))-x112);

    if (t22 != -255LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x113 = UINT64_MAX;
	int32_t x114 = -6147999;
	int32_t x116 = INT32_MIN;

    t23 = ((x113%(x114%x115))-x116);

    if (t23 != 2147483678LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x117 = INT16_MIN;
	uint8_t x118 = 78U;
	static int16_t x119 = 34;
	int64_t x120 = -1LL;
	volatile int64_t t24 = 64677652LL;

    t24 = ((x117%(x118%x119))-x120);

    if (t24 != -7LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x129 = -1478336973748LL;
	int64_t x130 = -822126100038LL;
	uint32_t x132 = 5838618U;
	volatile int64_t t25 = 11323401092LL;

    t25 = ((x129%(x130%x131))-x132);

    if (t25 != -5838772LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x145 = INT32_MIN;
	volatile uint32_t x146 = 7862U;

    t26 = ((x145%(x146%x147))-x148);

    if (t26 != 2147485582U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x149 = 74U;
	uint8_t x150 = 1U;
	volatile int16_t x152 = INT16_MIN;

    t27 = ((x149%(x150%x151))-x152);

    if (t27 != 32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x153 = INT64_MIN;
	volatile uint64_t x154 = 7LLU;
	int32_t x156 = -202;
	volatile uint64_t t28 = 1814650LLU;

    t28 = ((x153%(x154%x155))-x156);

    if (t28 != 203LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x157 = -7;
	int64_t x158 = -5LL;
	uint8_t x160 = 15U;
	int64_t t29 = 1LL;

    t29 = ((x157%(x158%x159))-x160);

    if (t29 != -17LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x165 = 271225LLU;
	int16_t x167 = INT16_MIN;
	uint16_t x168 = 6U;
	uint64_t t30 = 260715551418412706LLU;

    t30 = ((x165%(x166%x167))-x168);

    if (t30 != 1208LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x169 = INT16_MIN;
	volatile int16_t x170 = 2522;
	volatile int16_t x171 = -3;
	static volatile int8_t x172 = INT8_MAX;
	volatile int32_t t31 = 0;

    t31 = ((x169%(x170%x171))-x172);

    if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x173 = -138090533902LL;
	uint8_t x174 = 10U;
	int32_t x175 = -68;
	static volatile int32_t x176 = -852650831;
	volatile int64_t t32 = 2LL;

    t32 = ((x173%(x174%x175))-x176);

    if (t32 != 852650829LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x178 = -1LL;
	uint32_t x179 = 28660038U;
	int32_t x180 = -1;

    t33 = ((x177%(x178%x179))-x180);

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x182 = 11199031905715LL;
	volatile int16_t x183 = INT16_MAX;
	int64_t t34 = 209922668588409LL;

    t34 = ((x181%(x182%x183))-x184);

    if (t34 != 3712LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x189 = 0U;
	uint16_t x190 = 840U;
	volatile uint32_t x191 = 55U;
	static int16_t x192 = -1;

    t35 = ((x189%(x190%x191))-x192);

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x193 = INT64_MIN;
	uint64_t x194 = 252571LLU;
	int32_t x195 = INT32_MIN;
	static uint32_t x196 = 5044430U;

    t36 = ((x193%(x194%x195))-x196);

    if (t36 != 18446744073704624289LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x197 = 2U;
	int64_t x198 = -1LL;
	int16_t x200 = -6;
	int64_t t37 = 2279093LL;

    t37 = ((x197%(x198%x199))-x200);

    if (t37 != 6LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x205 = 2380310112LLU;
	volatile int64_t x206 = -11LL;
	uint64_t x207 = UINT64_MAX;
	static uint64_t t38 = 928086100248593439LLU;

    t38 = ((x205%(x206%x207))-x208);

    if (t38 != 2380310113LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	uint32_t x223 = 139740U;
	uint32_t x224 = 1996074749U;
	volatile int64_t t39 = 5794478LL;

    t39 = ((x221%(x222%x223))-x224);

    if (t39 != -1996122273LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x225 = 4;
	int8_t x226 = INT8_MAX;
	int16_t x227 = 1984;
	int64_t t40 = -176055522LL;

    t40 = ((x225%(x226%x227))-x228);

    if (t40 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x229 = -1LL;
	volatile uint16_t x230 = 447U;
	uint32_t x231 = UINT32_MAX;
	volatile uint64_t x232 = UINT64_MAX;
	uint64_t t41 = 596785818675861359LLU;

    t41 = ((x229%(x230%x231))-x232);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x233 = -1;
	int8_t x235 = 52;
	int32_t x236 = INT32_MIN;
	static int32_t t42 = INT32_MAX;

    t42 = ((x233%(x234%x235))-x236);

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x237 = -1LL;
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = INT16_MIN;
	volatile int8_t x240 = -1;

    t43 = ((x237%(x238%x239))-x240);

    if (t43 != 16LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x243 = INT32_MAX;
	int32_t x244 = 1187774;
	volatile int64_t t44 = 1922336391LL;

    t44 = ((x241%(x242%x243))-x244);

    if (t44 != -1187775LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x249 = INT8_MIN;
	uint32_t x250 = 12759825U;
	static volatile uint64_t x251 = 53176480363510LLU;
	int8_t x252 = INT8_MIN;

    t45 = ((x249%(x250%x251))-x252);

    if (t45 != 4533766LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x253 = 47U;
	volatile uint32_t x254 = UINT32_MAX;
	int64_t x255 = 30704387688672LL;
	int64_t t46 = 12652577762LL;

    t46 = ((x253%(x254%x255))-x256);

    if (t46 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x257 = INT16_MIN;
	volatile int16_t x258 = -1755;
	static volatile uint32_t x259 = 409033859U;
	uint16_t x260 = 6830U;

    t47 = ((x257%(x258%x259))-x260);

    if (t47 != 202388678U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x261 = INT32_MIN;
	int32_t x262 = 12978;
	uint16_t x263 = 8U;
	uint16_t x264 = 41U;

    t48 = ((x261%(x262%x263))-x264);

    if (t48 != -41) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint8_t x265 = UINT8_MAX;
	int8_t x266 = INT8_MIN;
	uint8_t x268 = UINT8_MAX;
	static volatile int32_t t49 = -154184;

    t49 = ((x265%(x266%x267))-x268);

    if (t49 != -254) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x274 = 1772039589LLU;
	static volatile uint32_t x276 = 9438U;

    t50 = ((x273%(x274%x275))-x276);

    if (t50 != 18446744073709542178LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x289 = INT32_MIN;
	uint64_t x290 = 976LLU;
	static volatile int16_t x291 = -4;
	static uint64_t t51 = 1299047146596LLU;

    t51 = ((x289%(x290%x291))-x292);

    if (t51 != 258947212LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x297 = 242LL;
	uint64_t x298 = 39918793918LLU;
	int8_t x299 = INT8_MIN;
	static uint64_t t52 = 349536711193718613LLU;

    t52 = ((x297%(x298%x299))-x300);

    if (t52 != 245LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x305 = INT8_MIN;
	int64_t x306 = 1687400650670LL;
	volatile uint32_t x307 = UINT32_MAX;
	uint8_t x308 = 8U;
	volatile int64_t t53 = -144999LL;

    t53 = ((x305%(x306%x307))-x308);

    if (t53 != -136LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x309 = -1LL;
	int16_t x310 = -1;
	uint16_t x311 = 6082U;
	uint64_t t54 = 4271726705707764LLU;

    t54 = ((x309%(x310%x311))-x312);

    if (t54 != 18446744073709550925LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x313 = INT64_MIN;
	int8_t x314 = -1;
	int64_t t55 = -173679347955140848LL;

    t55 = ((x313%(x314%x315))-x316);

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	uint32_t x319 = 437680U;
	uint32_t x320 = 14U;
	uint64_t t56 = 6351916789817555921LLU;

    t56 = ((x317%(x318%x319))-x320);

    if (t56 != 39991LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x321 = INT16_MIN;
	uint8_t x322 = UINT8_MAX;
	uint16_t x323 = 26768U;
	uint32_t x324 = 22607U;
	static volatile uint32_t t57 = 3578618U;

    t57 = ((x321%(x322%x323))-x324);

    if (t57 != 4294944561U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x327 = -1LL;
	volatile uint16_t x328 = 570U;
	uint64_t t58 = 205LLU;

    t58 = ((x325%(x326%x327))-x328);

    if (t58 != 18446744073709551071LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x329 = INT32_MAX;
	uint8_t x330 = 1U;
	uint64_t x331 = 12598002041LLU;
	static int64_t x332 = -1LL;
	static volatile uint64_t t59 = 1704241453LLU;

    t59 = ((x329%(x330%x331))-x332);

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x334 = 3U;
	int16_t x335 = -5738;
	int8_t x336 = -1;
	uint32_t t60 = 152316U;

    t60 = ((x333%(x334%x335))-x336);

    if (t60 != 2U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x337 = -1LL;
	int8_t x338 = -1;
	static int64_t x339 = 65803793LL;
	volatile int32_t x340 = INT32_MAX;
	int64_t t61 = 72158804743832LL;

    t61 = ((x337%(x338%x339))-x340);

    if (t61 != -2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x345 = INT16_MAX;
	static volatile int8_t x346 = INT8_MAX;
	int32_t x347 = INT32_MIN;
	uint8_t x348 = 31U;
	static volatile int32_t t62 = -98;

    t62 = ((x345%(x346%x347))-x348);

    if (t62 != -30) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x353 = -10LL;
	uint16_t x354 = 5871U;
	uint32_t x355 = UINT32_MAX;
	int64_t x356 = -1LL;
	volatile int64_t t63 = -107620471321LL;

    t63 = ((x353%(x354%x355))-x356);

    if (t63 != -9LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x357 = 1;
	int32_t x358 = 136040;
	int16_t x359 = INT16_MAX;
	uint8_t x360 = 0U;
	volatile int32_t t64 = 975;

    t64 = ((x357%(x358%x359))-x360);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x377 = -1;
	int8_t x378 = 25;
	static uint16_t x379 = UINT16_MAX;
	int64_t x380 = INT64_MAX;
	int64_t t65 = INT64_MIN;

    t65 = ((x377%(x378%x379))-x380);

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x382 = INT16_MAX;
	uint8_t x383 = UINT8_MAX;
	volatile uint64_t t66 = 3038389503393LLU;

    t66 = ((x381%(x382%x383))-x384);

    if (t66 != 13LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x386 = -6LL;
	static volatile uint8_t x387 = 27U;
	int16_t x388 = INT16_MIN;
	volatile int64_t t67 = 457728409LL;

    t67 = ((x385%(x386%x387))-x388);

    if (t67 != 32769LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x390 = -1;
	uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MIN;
	volatile int32_t t68 = 1;

    t68 = ((x389%(x390%x391))-x392);

    if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x393 = INT32_MIN;
	volatile int8_t x394 = INT8_MIN;
	volatile uint16_t x395 = 18U;
	static int16_t x396 = -1;
	volatile int32_t t69 = -77;

    t69 = ((x393%(x394%x395))-x396);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x397 = -1;
	int16_t x400 = -1;

    t70 = ((x397%(x398%x399))-x400);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x401 = 55U;
	static int32_t x402 = INT32_MIN;
	static int64_t x403 = -4394747506980743207LL;
	static volatile int64_t t71 = 242LL;

    t71 = ((x401%(x402%x403))-x404);

    if (t71 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x415 = 7U;
	int64_t x416 = -57696074492LL;
	static volatile uint64_t t72 = 352LLU;

    t72 = ((x413%(x414%x415))-x416);

    if (t72 != 57696074492LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x417 = -1;
	static int16_t x418 = 10;
	uint8_t x420 = 36U;

    t73 = ((x417%(x418%x419))-x420);

    if (t73 != -37) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x426 = -1;
	static volatile int8_t x428 = INT8_MIN;
	volatile int64_t t74 = 44203106575LL;

    t74 = ((x425%(x426%x427))-x428);

    if (t74 != 128LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x433 = UINT64_MAX;
	int32_t x434 = INT32_MIN;
	uint64_t x435 = UINT64_MAX;
	int16_t x436 = INT16_MAX;
	static uint64_t t75 = 3540LLU;

    t75 = ((x433%(x434%x435))-x436);

    if (t75 != 2147450880LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x437 = INT64_MIN;
	static uint64_t x438 = UINT64_MAX;
	int64_t x440 = -120698284167316588LL;
	uint64_t t76 = 73172632358LLU;

    t76 = ((x437%(x438%x439))-x440);

    if (t76 != 120698284167316589LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x441 = INT8_MIN;
	volatile int32_t x442 = -1;
	uint64_t x443 = 3375738LLU;
	int16_t x444 = -1;
	volatile uint64_t t77 = 327604474216LLU;

    t77 = ((x441%(x442%x443))-x444);

    if (t77 != 2730699LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x445 = INT8_MIN;
	int64_t x446 = INT64_MIN;
	int64_t x447 = -520669490946836559LL;
	uint32_t x448 = 921350U;

    t78 = ((x445%(x446%x447))-x448);

    if (t78 != -921478LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x453 = 13519U;
	volatile int8_t x454 = -1;
	int16_t x455 = INT16_MIN;
	int16_t x456 = INT16_MIN;
	volatile int32_t t79 = 0;

    t79 = ((x453%(x454%x455))-x456);

    if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x458 = 886161248047LLU;
	static volatile int8_t x459 = -1;
	static uint32_t x460 = 3147614U;
	volatile uint64_t t80 = 138013488056099627LLU;

    t80 = ((x457%(x458%x459))-x460);

    if (t80 != 177768905290LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x461 = -1;
	volatile int32_t x463 = INT32_MIN;
	volatile int8_t x464 = -1;
	uint64_t t81 = 563LLU;

    t81 = ((x461%(x462%x463))-x464);

    if (t81 != 4LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x465 = 0U;
	uint64_t x466 = 6413927300783413675LLU;
	volatile int8_t x467 = -1;
	static volatile uint64_t t82 = 490327621LLU;

    t82 = ((x465%(x466%x467))-x468);

    if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x473 = 27LLU;
	static uint8_t x475 = 30U;
	uint16_t x476 = 1U;
	static uint64_t t83 = 74091915460122743LLU;

    t83 = ((x473%(x474%x475))-x476);

    if (t83 != 11LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x481 = INT16_MIN;
	static int64_t x483 = INT64_MIN;

    t84 = ((x481%(x482%x483))-x484);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x485 = -29;
	uint32_t x488 = 134U;

    t85 = ((x485%(x486%x487))-x488);

    if (t85 != 139LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x489 = INT32_MIN;
	int64_t x490 = -1LL;
	volatile int8_t x491 = INT8_MIN;
	int8_t x492 = INT8_MIN;
	int64_t t86 = -542741449LL;

    t86 = ((x489%(x490%x491))-x492);

    if (t86 != 128LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x497 = INT32_MIN;
	volatile int32_t x498 = INT32_MIN;
	int16_t x499 = -185;
	volatile int32_t x500 = -29408;
	static volatile int32_t t87 = -619;

    t87 = ((x497%(x498%x499))-x500);

    if (t87 != 29329) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x505 = UINT32_MAX;
	int16_t x506 = -1;
	uint8_t x507 = UINT8_MAX;
	static volatile int32_t x508 = INT32_MIN;
	uint32_t t88 = 23U;

    t88 = ((x505%(x506%x507))-x508);

    if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x513 = UINT32_MAX;
	int64_t x514 = -17658969941LL;
	static int32_t x515 = -30107457;
	volatile uint16_t x516 = 21U;
	int64_t t89 = -26596841595632LL;

    t89 = ((x513%(x514%x515))-x516);

    if (t89 != 6930022LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x517 = -8484934110LL;
	uint8_t x518 = 2U;
	int8_t x519 = INT8_MAX;
	uint32_t x520 = 4U;
	int64_t t90 = 5041431LL;

    t90 = ((x517%(x518%x519))-x520);

    if (t90 != -4LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x521 = -1LL;
	uint32_t x523 = 51541U;
	static uint8_t x524 = 9U;
	int64_t t91 = -6647850076769LL;

    t91 = ((x521%(x522%x523))-x524);

    if (t91 != -10LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x525 = -1LL;
	uint32_t x527 = 687055U;
	uint32_t x528 = 1786212463U;
	static int64_t t92 = 387477LL;

    t92 = ((x525%(x526%x527))-x528);

    if (t92 != -1786212464LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x530 = INT16_MIN;
	int64_t x531 = 5762982LL;
	static int32_t x532 = INT32_MAX;
	int64_t t93 = 23767608LL;

    t93 = ((x529%(x530%x531))-x532);

    if (t93 != -2147483640LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x541 = UINT16_MAX;
	int8_t x544 = INT8_MIN;
	volatile int64_t t94 = -10901253233699LL;

    t94 = ((x541%(x542%x543))-x544);

    if (t94 != 65663LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x545 = 3U;
	uint32_t x546 = 651092330U;
	uint64_t x547 = 315896050374792723LLU;
	int16_t x548 = INT16_MIN;
	uint64_t t95 = 6792LLU;

    t95 = ((x545%(x546%x547))-x548);

    if (t95 != 32771LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x549 = 8116575U;
	int32_t x550 = INT32_MAX;
	volatile uint16_t x551 = UINT16_MAX;
	volatile uint32_t t96 = 0U;

    t96 = ((x549%(x550%x551))-x552);

    if (t96 != 4294957655U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x557 = INT16_MIN;
	volatile int16_t x558 = INT16_MIN;
	uint64_t x559 = 391LLU;
	uint8_t x560 = 13U;

    t97 = ((x557%(x558%x559))-x560);

    if (t97 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x561 = 1U;
	int64_t x562 = -187LL;
	int16_t x563 = INT16_MIN;
	int32_t x564 = -48297;
	int64_t t98 = -1419LL;

    t98 = ((x561%(x562%x563))-x564);

    if (t98 != 48298LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x565 = -2925;
	int16_t x566 = INT16_MIN;
	uint8_t x568 = UINT8_MAX;
	volatile int32_t t99 = -1;

    t99 = ((x565%(x566%x567))-x568);

    if (t99 != -3180) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x573 = -1135071;
	static uint32_t x575 = 6774U;
	volatile uint32_t t100 = 23901047U;

    t100 = ((x573%(x574%x575))-x576);

    if (t100 != 4294948837U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x577 = INT32_MIN;
	int64_t x578 = 55872063510LL;
	volatile int8_t x579 = INT8_MAX;
	static uint64_t x580 = 115479LLU;
	static volatile uint64_t t101 = 136LLU;

    t101 = ((x577%(x578%x579))-x580);

    if (t101 != 18446744073709436047LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x585 = INT8_MAX;
	int8_t x586 = INT8_MIN;
	int64_t x588 = INT64_MAX;
	volatile int64_t t102 = 0LL;

    t102 = ((x585%(x586%x587))-x588);

    if (t102 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x589 = INT32_MIN;
	int8_t x590 = -1;
	uint32_t x591 = 698797539U;
	uint16_t x592 = UINT16_MAX;
	volatile uint32_t t103 = 192786U;

    t103 = ((x589%(x590%x591))-x592);

    if (t103 != 1594832U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x594 = -134780961203LL;
	uint16_t x595 = UINT16_MAX;
	int64_t x596 = -23LL;
	static int64_t t104 = -817045812842085LL;

    t104 = ((x593%(x594%x595))-x596);

    if (t104 != 24LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x597 = -1;
	volatile int16_t x599 = INT16_MIN;
	uint16_t x600 = 2U;
	int32_t t105 = -942295;

    t105 = ((x597%(x598%x599))-x600);

    if (t105 != -3) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x601 = -5;
	static int8_t x602 = 1;
	uint32_t x604 = 453004494U;
	uint32_t t106 = 652789687U;

    t106 = ((x601%(x602%x603))-x604);

    if (t106 != 3841962802U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x606 = 12U;
	volatile uint8_t x607 = 8U;
	static int16_t x608 = INT16_MAX;
	static volatile int32_t t107 = 1325608;

    t107 = ((x605%(x606%x607))-x608);

    if (t107 != -32765) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x609 = INT16_MIN;
	int8_t x610 = 2;
	int16_t x611 = INT16_MAX;
	volatile uint32_t x612 = UINT32_MAX;
	uint32_t t108 = 1455U;

    t108 = ((x609%(x610%x611))-x612);

    if (t108 != 1U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x618 = UINT32_MAX;
	volatile int32_t x619 = 116021158;
	volatile uint32_t t109 = 1157444327U;

    t109 = ((x617%(x618%x619))-x620);

    if (t109 != 340434U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x621 = 66861127136LL;
	uint64_t x622 = 265494696LLU;
	uint8_t x623 = UINT8_MAX;
	uint8_t x624 = 1U;
	static uint64_t t110 = 13282408496138LLU;

    t110 = ((x621%(x622%x623))-x624);

    if (t110 != 82LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x625 = -1;
	volatile int32_t x626 = -1;
	int64_t t111 = 15775162316274946LL;

    t111 = ((x625%(x626%x627))-x628);

    if (t111 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x633 = INT32_MIN;
	uint32_t x634 = 9130U;
	uint16_t x635 = UINT16_MAX;
	volatile uint32_t t112 = 4351U;

    t112 = ((x633%(x634%x635))-x636);

    if (t112 != 7211U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x638 = 2;
	static int16_t x639 = INT16_MIN;
	int32_t t113 = 316419;

    t113 = ((x637%(x638%x639))-x640);

    if (t113 != -65535) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x645 = 0U;
	volatile int8_t x646 = INT8_MAX;
	int64_t x647 = INT64_MIN;
	static int8_t x648 = INT8_MIN;
	volatile int64_t t114 = 15877800746313LL;

    t114 = ((x645%(x646%x647))-x648);

    if (t114 != 128LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x655 = -59LL;
	volatile int16_t x656 = -1;
	static volatile int64_t t115 = -9LL;

    t115 = ((x653%(x654%x655))-x656);

    if (t115 != 13LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x657 = INT16_MIN;
	int32_t x660 = -4741587;
	static volatile int32_t t116 = -374067;

    t116 = ((x657%(x658%x659))-x660);

    if (t116 != 4741587) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x665 = -1;
	volatile uint64_t x666 = 252495684LLU;
	uint64_t x667 = 858LLU;
	int32_t x668 = INT32_MIN;

    t117 = ((x665%(x666%x667))-x668);

    if (t117 != 2147483651LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x669 = 4565805U;
	static int16_t x670 = INT16_MAX;
	volatile int64_t x671 = -142LL;
	uint16_t x672 = UINT16_MAX;
	volatile int64_t t118 = 229350104181LL;

    t118 = ((x669%(x670%x671))-x672);

    if (t118 != -65527LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x673 = UINT32_MAX;
	int32_t x674 = INT32_MIN;
	uint8_t x675 = UINT8_MAX;
	static int8_t x676 = 1;
	uint32_t t119 = 902U;

    t119 = ((x673%(x674%x675))-x676);

    if (t119 != 126U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x681 = INT16_MAX;
	volatile uint16_t x682 = 230U;
	volatile uint64_t x683 = UINT64_MAX;
	static volatile int64_t x684 = 771931470774948LL;

    t120 = ((x681%(x682%x683))-x684);

    if (t120 != 18445972142238776775LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x685 = -1LL;
	int16_t x686 = -3588;
	static int8_t x687 = 29;
	int32_t x688 = -1;
	int64_t t121 = 7791249LL;

    t121 = ((x685%(x686%x687))-x688);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x689 = -1LL;
	volatile uint64_t x690 = UINT64_MAX;
	int64_t x692 = INT64_MIN;
	uint64_t t122 = 2099196824525973LLU;

    t122 = ((x689%(x690%x691))-x692);

    if (t122 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x693 = -1;
	static uint16_t x695 = 7U;
	int8_t x696 = INT8_MIN;
	volatile int32_t t123 = -1438144;

    t123 = ((x693%(x694%x695))-x696);

    if (t123 != 128) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x698 = -1LL;
	volatile uint16_t x700 = UINT16_MAX;

    t124 = ((x697%(x698%x699))-x700);

    if (t124 != -65535LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x701 = 3;
	static volatile uint32_t x702 = UINT32_MAX;
	int32_t x703 = 409103;
	static volatile int64_t x704 = -1LL;
	volatile int64_t t125 = 46962705163505LL;

    t125 = ((x701%(x702%x703))-x704);

    if (t125 != 4LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x709 = UINT32_MAX;
	static int64_t x710 = -1LL;
	int32_t x712 = -1716863;

    t126 = ((x709%(x710%x711))-x712);

    if (t126 != 1716863LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x713 = INT8_MIN;
	volatile int8_t x714 = INT8_MIN;
	int32_t x715 = -22288086;
	int32_t x716 = -3798534;

    t127 = ((x713%(x714%x715))-x716);

    if (t127 != 3798534) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x722 = INT32_MIN;
	int64_t x723 = INT64_MIN;
	uint8_t x724 = UINT8_MAX;
	int64_t t128 = 4303565632485609LL;

    t128 = ((x721%(x722%x723))-x724);

    if (t128 != -383LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x725 = 38533U;
	int64_t x727 = INT64_MIN;
	int8_t x728 = -1;
	volatile int64_t t129 = -134693LL;

    t129 = ((x725%(x726%x727))-x728);

    if (t129 != 38534LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x733 = 28483104323259869LLU;
	int16_t x734 = INT16_MIN;
	uint32_t x735 = 159580U;
	int8_t x736 = INT8_MIN;

    t130 = ((x733%(x734%x735))-x736);

    if (t130 != 73813LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x737 = INT64_MIN;
	uint8_t x738 = 1U;
	static int8_t x739 = INT8_MIN;
	int64_t x740 = -4LL;
	int64_t t131 = -32LL;

    t131 = ((x737%(x738%x739))-x740);

    if (t131 != 4LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x745 = -1;
	static int64_t x746 = -578LL;
	int32_t x747 = 210704;
	volatile int64_t t132 = INT64_MIN;

    t132 = ((x745%(x746%x747))-x748);

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x749 = 12;
	volatile int64_t x751 = INT64_MIN;
	int16_t x752 = INT16_MIN;
	volatile uint64_t t133 = 2777502799310762LLU;

    t133 = ((x749%(x750%x751))-x752);

    if (t133 != 32768LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x757 = -1;
	int8_t x758 = INT8_MAX;
	int32_t x759 = INT32_MAX;
	volatile int64_t x760 = INT64_MAX;
	int64_t t134 = INT64_MIN;

    t134 = ((x757%(x758%x759))-x760);

    if (t134 != INT64_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x761 = INT16_MIN;
	int32_t x762 = INT32_MAX;
	volatile uint8_t x763 = UINT8_MAX;
	volatile uint16_t x764 = 59U;
	static int32_t t135 = -1052;

    t135 = ((x761%(x762%x763))-x764);

    if (t135 != -61) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x773 = -1LL;
	static volatile uint8_t x774 = 4U;
	uint16_t x775 = 12U;
	int8_t x776 = 0;
	volatile int64_t t136 = -8233902854039772LL;

    t136 = ((x773%(x774%x775))-x776);

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x781 = -17;
	int16_t x782 = INT16_MAX;
	int8_t x783 = INT8_MIN;
	static int32_t x784 = -489;

    t137 = ((x781%(x782%x783))-x784);

    if (t137 != 472) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x785 = INT16_MAX;
	int64_t x786 = INT64_MIN;
	int8_t x787 = 27;
	static int64_t x788 = 3391491681LL;
	static int64_t t138 = 13354979725LL;

    t138 = ((x785%(x786%x787))-x788);

    if (t138 != -3391491674LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x789 = INT64_MIN;
	int16_t x791 = -1;
	volatile int32_t x792 = INT32_MIN;
	int64_t t139 = 7226LL;

    t139 = ((x789%(x790%x791))-x792);

    if (t139 != 1725718930LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x797 = 12U;
	int16_t x798 = INT16_MIN;
	uint64_t x799 = 14119435002LLU;
	volatile int8_t x800 = INT8_MAX;

    t140 = ((x797%(x798%x799))-x800);

    if (t140 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x805 = INT64_MAX;
	uint8_t x806 = 7U;
	int32_t x807 = INT32_MIN;
	volatile int64_t t141 = 54354854059LL;

    t141 = ((x805%(x806%x807))-x808);

    if (t141 != 32768LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x813 = INT32_MIN;
	uint64_t x815 = 127001LLU;
	int64_t x816 = INT64_MAX;

    t142 = ((x813%(x814%x815))-x816);

    if (t142 != 9223372036854778661LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x817 = UINT64_MAX;
	int16_t x819 = INT16_MAX;

    t143 = ((x817%(x818%x819))-x820);

    if (t143 != 32775LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x821 = -11;
	volatile uint64_t x822 = 31LLU;
	int8_t x823 = 23;
	static uint8_t x824 = UINT8_MAX;
	uint64_t t144 = 6LLU;

    t144 = ((x821%(x822%x823))-x824);

    if (t144 != 18446744073709551366LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x825 = -1;
	int16_t x827 = INT16_MAX;
	int8_t x828 = -31;
	int64_t t145 = 127585982610691LL;

    t145 = ((x825%(x826%x827))-x828);

    if (t145 != 30LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x830 = INT64_MIN;
	uint8_t x831 = UINT8_MAX;
	int32_t x832 = INT32_MIN;
	uint64_t t146 = 975986617364559LLU;

    t146 = ((x829%(x830%x831))-x832);

    if (t146 != 7923720513LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x834 = INT64_MIN;
	volatile uint32_t x835 = 942814U;
	uint8_t x836 = UINT8_MAX;

    t147 = ((x833%(x834%x835))-x836);

    if (t147 != -383LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x841 = -1;
	static uint64_t x842 = 1327133LLU;
	static volatile int16_t x843 = INT16_MIN;
	int16_t x844 = -1;
	uint64_t t148 = 30271LLU;

    t148 = ((x841%(x842%x843))-x844);

    if (t148 != 1286042LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x845 = -1;
	static int32_t x846 = 313;
	static int64_t x848 = INT64_MIN;
	volatile int64_t t149 = INT64_MAX;

    t149 = ((x845%(x846%x847))-x848);

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x849 = -1;
	volatile int64_t x851 = INT64_MAX;
	volatile int64_t x852 = -6LL;
	int64_t t150 = -31239203911813LL;

    t150 = ((x849%(x850%x851))-x852);

    if (t150 != 6LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x862 = 1U;
	uint16_t x863 = UINT16_MAX;
	volatile uint32_t x864 = 916U;
	volatile uint32_t t151 = 244329038U;

    t151 = ((x861%(x862%x863))-x864);

    if (t151 != 4294966380U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x865 = INT32_MIN;
	int16_t x866 = INT16_MAX;
	uint32_t x867 = 96U;
	int32_t x868 = INT32_MIN;

    t152 = ((x865%(x866%x867))-x868);

    if (t152 != 2147483650U) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x869 = 621009447530LLU;
	int16_t x870 = -39;
	int16_t x871 = -324;
	volatile uint64_t t153 = 12LLU;

    t153 = ((x869%(x870%x871))-x872);

    if (t153 != 621009438811LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x873 = 4123;
	int8_t x875 = -35;
	uint32_t x876 = 57U;
	uint32_t t154 = 0U;

    t154 = ((x873%(x874%x875))-x876);

    if (t154 != 4294967248U) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x877 = UINT64_MAX;
	uint32_t x878 = UINT32_MAX;
	int16_t x879 = 233;
	static int8_t x880 = INT8_MAX;
	uint64_t t155 = 16435425075742LLU;

    t155 = ((x877%(x878%x879))-x880);

    if (t155 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x885 = -18265006LL;
	static int8_t x886 = INT8_MIN;
	volatile int64_t t156 = -1006364474316853LL;

    t156 = ((x885%(x886%x887))-x888);

    if (t156 != 2147483602LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x893 = 723U;
	volatile int64_t x894 = -236964LL;

    t157 = ((x893%(x894%x895))-x896);

    if (t157 != 725LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x901 = INT32_MIN;
	volatile int16_t x902 = INT16_MIN;
	static uint64_t x904 = 18011837232220LLU;
	volatile uint64_t t158 = 354373219038759LLU;

    t158 = ((x901%(x902%x903))-x904);

    if (t158 != 18446726059724835748LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x905 = -1LL;
	uint32_t x906 = UINT32_MAX;
	volatile uint32_t x907 = 24U;
	volatile int64_t x908 = INT64_MIN;
	volatile int64_t t159 = INT64_MAX;

    t159 = ((x905%(x906%x907))-x908);

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x909 = 294099U;
	int8_t x910 = -1;
	static int16_t x911 = INT16_MIN;
	volatile int32_t x912 = INT32_MIN;
	static volatile uint32_t t160 = 14U;

    t160 = ((x909%(x910%x911))-x912);

    if (t160 != 2147777747U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x915 = -32480697LL;
	static int32_t x916 = INT32_MIN;
	volatile int64_t t161 = -1LL;

    t161 = ((x913%(x914%x915))-x916);

    if (t161 != 2147483775LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x917 = INT32_MIN;
	static volatile int32_t x918 = -1103;
	int16_t x919 = 15;
	int16_t x920 = -18;
	volatile int32_t t162 = 3638;

    t162 = ((x917%(x918%x919))-x920);

    if (t162 != 18) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x921 = 57187650U;
	int64_t x922 = -1LL;
	int64_t x923 = INT64_MAX;
	int16_t x924 = INT16_MIN;
	int64_t t163 = -192670872LL;

    t163 = ((x921%(x922%x923))-x924);

    if (t163 != 32768LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x929 = 0;
	volatile uint32_t x930 = 37953U;
	static int8_t x931 = INT8_MIN;
	int64_t x932 = -94213274LL;
	int64_t t164 = 99494608959LL;

    t164 = ((x929%(x930%x931))-x932);

    if (t164 != 94213274LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x934 = 20401LLU;
	int8_t x936 = -1;
	uint64_t t165 = 240LLU;

    t165 = ((x933%(x934%x935))-x936);

    if (t165 != 8688LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x937 = -1;
	int16_t x938 = -39;
	volatile int16_t x939 = 938;
	volatile int32_t t166 = 4183238;

    t166 = ((x937%(x938%x939))-x940);

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x941 = INT64_MIN;
	static int16_t x942 = INT16_MAX;
	volatile int16_t x943 = 42;
	uint64_t x944 = UINT64_MAX;
	uint64_t t167 = 27726919778283LLU;

    t167 = ((x941%(x942%x943))-x944);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x947 = 9U;
	uint8_t x948 = 3U;
	uint64_t t168 = 185626241023022LLU;

    t168 = ((x945%(x946%x947))-x948);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x962 = -1;
	uint16_t x963 = 103U;
	uint64_t x964 = 1018195535LLU;
	volatile uint64_t t169 = 370583523LLU;

    t169 = ((x961%(x962%x963))-x964);

    if (t169 != 18446744072691356081LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x965 = 2;
	static int8_t x966 = INT8_MIN;
	uint16_t x968 = UINT16_MAX;
	uint32_t t170 = 18970331U;

    t170 = ((x965%(x966%x967))-x968);

    if (t170 != 4294901763U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x969 = INT16_MIN;
	int32_t x970 = 3048;
	static int32_t x971 = INT32_MAX;
	static int8_t x972 = 0;
	int32_t t171 = 915;

    t171 = ((x969%(x970%x971))-x972);

    if (t171 != -2288) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x973 = INT32_MIN;
	int32_t x974 = INT32_MAX;
	uint16_t x975 = 37U;
	uint64_t x976 = 13LLU;
	uint64_t t172 = 1148420762LLU;

    t172 = ((x973%(x974%x975))-x976);

    if (t172 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x977 = INT16_MAX;
	volatile uint16_t x978 = UINT16_MAX;
	uint32_t x979 = 42U;
	uint32_t x980 = 52333197U;
	volatile uint32_t t173 = 1232626U;

    t173 = ((x977%(x978%x979))-x980);

    if (t173 != 4242634106U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x982 = UINT16_MAX;
	uint32_t x983 = 160533522U;
	int16_t x984 = -5;
	uint32_t t174 = 24U;

    t174 = ((x981%(x982%x983))-x984);

    if (t174 != 5U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x985 = 120285318LLU;
	volatile uint64_t x986 = 21LLU;
	volatile uint64_t x987 = 22404627876LLU;
	int32_t x988 = -1;

    t175 = ((x985%(x986%x987))-x988);

    if (t175 != 7LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x990 = 25;
	static int8_t x991 = INT8_MIN;
	int8_t x992 = 1;
	volatile int64_t t176 = -35749LL;

    t176 = ((x989%(x990%x991))-x992);

    if (t176 != -4LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x993 = -54;
	uint64_t x994 = 4058696LLU;
	uint8_t x996 = 9U;
	static uint64_t t177 = 13781LLU;

    t177 = ((x993%(x994%x995))-x996);

    if (t177 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x998 = 28U;
	int8_t x999 = 18;
	int8_t x1000 = INT8_MIN;
	int32_t t178 = 8;

    t178 = ((x997%(x998%x999))-x1000);

    if (t178 != 134) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1001 = 294;
	int64_t x1002 = 3LL;
	int8_t x1003 = INT8_MAX;
	int16_t x1004 = -1;

    t179 = ((x1001%(x1002%x1003))-x1004);

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1005 = 5052375LL;
	int16_t x1006 = 3;
	volatile int16_t x1007 = -12;
	uint32_t x1008 = 478U;
	volatile int64_t t180 = 682598299810LL;

    t180 = ((x1005%(x1006%x1007))-x1008);

    if (t180 != -478LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1009 = INT16_MIN;
	int32_t x1010 = 328958;
	int8_t x1012 = -1;
	int32_t t181 = 12161354;

    t181 = ((x1009%(x1010%x1011))-x1012);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1017 = 3;
	uint64_t x1018 = UINT64_MAX;
	int8_t x1019 = INT8_MIN;
	static volatile int32_t x1020 = -687;
	volatile uint64_t t182 = 626325LLU;

    t182 = ((x1017%(x1018%x1019))-x1020);

    if (t182 != 690LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x1021 = INT16_MAX;
	static int64_t x1022 = -49LL;
	static volatile int16_t x1023 = 6335;
	uint8_t x1024 = 23U;
	volatile int64_t t183 = 133796919196270522LL;

    t183 = ((x1021%(x1022%x1023))-x1024);

    if (t183 != 12LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1029 = -1;
	static uint64_t x1030 = 29117218LLU;
	static int64_t x1031 = INT64_MIN;
	uint64_t t184 = 634392LLU;

    t184 = ((x1029%(x1030%x1031))-x1032);

    if (t184 != 8081691LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1033 = INT16_MIN;
	static int64_t x1034 = INT64_MIN;
	static uint8_t x1035 = UINT8_MAX;
	uint64_t x1036 = 9138474LLU;
	volatile uint64_t t185 = 358798114525LLU;

    t185 = ((x1033%(x1034%x1035))-x1036);

    if (t185 != 18446744073700413142LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1037 = INT32_MIN;
	static int8_t x1038 = INT8_MIN;
	uint64_t x1039 = 11239134LLU;
	uint8_t x1040 = 21U;
	volatile uint64_t t186 = 247050449LLU;

    t186 = ((x1037%(x1038%x1039))-x1040);

    if (t186 != 4587547LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1045 = INT64_MIN;
	int32_t x1046 = -804;
	uint64_t x1047 = 1056944760816864LLU;
	volatile int16_t x1048 = 0;
	uint64_t t187 = 8956506560850957LLU;

    t187 = ((x1045%(x1046%x1047))-x1048);

    if (t187 != 381633122841412LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1053 = 99U;
	volatile uint16_t x1054 = UINT16_MAX;
	uint32_t x1055 = 179699481U;
	static volatile uint32_t t188 = 14371825U;

    t188 = ((x1053%(x1054%x1055))-x1056);

    if (t188 != 107U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x1057 = 95435627707829LLU;
	static int8_t x1058 = -1;
	int32_t x1059 = 12318;
	static int16_t x1060 = INT16_MIN;

    t189 = ((x1057%(x1058%x1059))-x1060);

    if (t189 != 95435627740597LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1061 = INT8_MAX;
	int64_t x1062 = INT64_MIN;
	int16_t x1063 = -42;
	uint16_t x1064 = UINT16_MAX;
	volatile int64_t t190 = -27752631857555891LL;

    t190 = ((x1061%(x1062%x1063))-x1064);

    if (t190 != -65528LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1066 = 20733746767LL;
	int8_t x1067 = INT8_MIN;
	static uint8_t x1068 = UINT8_MAX;
	volatile uint64_t t191 = 3548821718LLU;

    t191 = ((x1065%(x1066%x1067))-x1068);

    if (t191 != 18446744073709551426LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x1073 = 27;
	int64_t x1075 = 26943499075LL;
	static int64_t t192 = -1953814280235LL;

    t192 = ((x1073%(x1074%x1075))-x1076);

    if (t192 != -11877LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x1081 = 431316227U;
	int32_t x1082 = -1;
	int8_t x1083 = -2;
	static volatile int64_t t193 = -79020907982LL;

    t193 = ((x1081%(x1082%x1083))-x1084);

    if (t193 != 1639459791574918739LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1085 = 0U;
	int64_t x1086 = -3149294205086976LL;
	uint64_t x1087 = 2746018689573320LLU;
	static int8_t x1088 = INT8_MAX;
	volatile uint64_t t194 = 87322LLU;

    t194 = ((x1085%(x1086%x1087))-x1088);

    if (t194 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1089 = INT16_MIN;
	uint32_t x1091 = 695331U;
	uint16_t x1092 = UINT16_MAX;
	static uint32_t t195 = 95510597U;

    t195 = ((x1089%(x1090%x1091))-x1092);

    if (t195 != 4294901764U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1098 = 3259;
	int32_t x1099 = INT32_MAX;
	volatile int8_t x1100 = -1;

    t196 = ((x1097%(x1098%x1099))-x1100);

    if (t196 != -127) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1102 = INT64_MAX;
	int32_t x1103 = INT32_MIN;
	static int16_t x1104 = -1;
	volatile uint64_t t197 = 10LLU;

    t197 = ((x1101%(x1102%x1103))-x1104);

    if (t197 != 4LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1105 = UINT32_MAX;
	volatile int32_t x1106 = -1;
	static volatile uint8_t x1107 = 62U;

    t198 = ((x1105%(x1106%x1107))-x1108);

    if (t198 != 4294934529U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1109 = -1;
	int32_t x1110 = INT32_MIN;
	int8_t x1112 = INT8_MIN;
	volatile int64_t t199 = -31181988709811LL;

    t199 = ((x1109%(x1110%x1111))-x1112);

    if (t199 != 127LL) { NG(); } else { ; }
	
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

