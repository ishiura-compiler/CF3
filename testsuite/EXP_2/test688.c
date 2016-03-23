
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

uint8_t x4 = UINT8_MAX;
int8_t x6 = -1;
int64_t x10 = -1LL;
uint16_t x14 = 5U;
int16_t x18 = INT16_MAX;
int64_t x19 = INT64_MIN;
int8_t x28 = INT8_MAX;
uint32_t x33 = 3936U;
uint8_t x35 = UINT8_MAX;
uint8_t x38 = UINT8_MAX;
volatile int64_t t9 = 1LL;
uint16_t x41 = 6761U;
static uint16_t x44 = 244U;
int16_t x50 = -2747;
volatile int64_t t11 = -39201161162794LL;
int64_t x59 = INT64_MIN;
int64_t x65 = 1432823330LL;
int64_t x67 = 2267LL;
volatile int32_t t14 = 734;
int8_t x69 = INT8_MIN;
static uint8_t x70 = UINT8_MAX;
static int32_t x72 = -1;
volatile uint16_t x79 = 584U;
static volatile uint32_t x85 = 23596737U;
static uint16_t x86 = 41U;
volatile int8_t x89 = 2;
static volatile int32_t t23 = -54569;
volatile int8_t x120 = INT8_MIN;
int8_t x122 = 62;
volatile int32_t x123 = -1;
volatile int32_t t26 = 93202;
int32_t t27 = -278771;
static int8_t x152 = INT8_MAX;
int64_t x164 = -7543021523356094LL;
volatile int32_t t34 = -466157;
volatile int8_t x182 = 1;
volatile int8_t x183 = INT8_MAX;
volatile uint32_t t38 = 1U;
int64_t x193 = INT64_MAX;
volatile uint64_t x198 = 19475187252LLU;
static int32_t t40 = 421090;
volatile int16_t x204 = 7961;
uint16_t x207 = 7558U;
volatile int32_t t43 = 102381;
int32_t x213 = -16581059;
static int64_t x215 = -1LL;
volatile int32_t t44 = -104570849;
int16_t x232 = -1;
volatile int32_t t49 = -24573;
int32_t x238 = 48;
volatile int64_t x239 = -196855385547610396LL;
int8_t x247 = 3;
uint64_t x256 = 1497774345LLU;
static volatile uint32_t x258 = 3U;
uint16_t x264 = 116U;
int8_t x274 = INT8_MIN;
uint8_t x276 = UINT8_MAX;
static volatile int64_t x278 = INT64_MAX;
volatile int16_t x281 = INT16_MIN;
int32_t x299 = INT32_MIN;
int16_t x303 = INT16_MIN;
static uint16_t x304 = 3U;
uint16_t x310 = 28U;
uint64_t x340 = 61943441133634574LLU;
volatile int32_t x353 = INT32_MIN;
int64_t x356 = -1LL;
int64_t t73 = 1349794665346463LL;
uint64_t x362 = 298993377LLU;
int8_t x366 = INT8_MIN;
int64_t x372 = 1LL;
volatile int64_t t77 = -438LL;
int8_t x377 = 58;
int32_t t78 = -11596868;
static int32_t x382 = INT32_MIN;
static int16_t x396 = INT16_MIN;
volatile int32_t x401 = -58617;
static int32_t t84 = 8;
int32_t t86 = -3469981;
uint16_t x424 = UINT16_MAX;
static int64_t x427 = INT64_MIN;
int16_t x428 = INT16_MIN;
uint8_t x435 = 21U;
static volatile int8_t x437 = -1;
uint32_t x443 = 241614155U;
int8_t x444 = INT8_MIN;
int32_t t94 = 3651;
int64_t x452 = 12150929689044988LL;
int64_t t95 = -392307146788885LL;
volatile int64_t x453 = -204830316016788LL;
int8_t x454 = INT8_MAX;
uint8_t x456 = 1U;
volatile uint32_t x464 = 65203104U;
volatile int16_t x465 = INT16_MIN;
int64_t x466 = 2851350049182384LL;
uint8_t x473 = 111U;
int64_t x475 = INT64_MIN;
uint16_t x479 = 7361U;
volatile uint32_t t101 = 2527050U;
static uint32_t x487 = 35808390U;
int32_t t102 = 3106;
uint32_t x493 = 9382U;
int16_t x517 = -1;
uint32_t x527 = 938U;
int64_t x530 = 7190LL;
int64_t x533 = 835916980092LL;
static int16_t x538 = -1;
int32_t x553 = -1;
uint16_t x567 = 1U;
int32_t x593 = -81339207;
int64_t x597 = INT64_MIN;
int16_t x598 = -9;
volatile int64_t x602 = 430776552LL;
static int32_t x615 = INT32_MIN;
volatile int32_t t123 = -93163;
uint32_t x625 = 100955U;
int16_t x638 = -1;
uint32_t x641 = UINT32_MAX;
int32_t t129 = 1284;
uint64_t x657 = 2077066LLU;
int16_t x661 = INT16_MIN;
int32_t x663 = -15;
uint32_t t132 = UINT32_MAX;
int32_t x670 = INT32_MIN;
static uint64_t x684 = 5104597775075LLU;
uint64_t t136 = 34152780287639223LLU;
int64_t x685 = 159618LL;
int64_t x687 = 3794280761LL;
volatile int8_t x691 = INT8_MIN;
int64_t x692 = INT64_MAX;
static int8_t x693 = -5;
static int8_t x694 = -1;
static volatile int8_t x700 = INT8_MIN;
int32_t x710 = -1;
int64_t x714 = INT64_MIN;
static int8_t x720 = -1;
volatile uint8_t x729 = 17U;
uint64_t x730 = 1402802052LLU;
uint64_t t147 = 1302068472LLU;
volatile int32_t x739 = -3879;
int8_t x741 = INT8_MIN;
int32_t x745 = 615765856;
static int32_t t150 = 6433673;
volatile int16_t x753 = -3;
int32_t x758 = -1;
int16_t x761 = -1;
uint32_t x766 = 43U;
static int64_t x767 = INT64_MIN;
static volatile uint32_t t154 = 124U;
uint32_t x776 = 319093350U;
uint64_t x793 = 2013754863508523725LLU;
int64_t x800 = 993LL;
static uint32_t x801 = 641042461U;
volatile int32_t t164 = 523177;
static int32_t x822 = INT32_MIN;
int32_t x830 = -488;
int8_t x834 = -1;
int16_t x840 = 1;
uint32_t x841 = UINT32_MAX;
int8_t x844 = INT8_MAX;
volatile int8_t x854 = INT8_MIN;
int16_t x863 = INT16_MAX;
int64_t x864 = INT64_MAX;
int16_t x866 = INT16_MIN;
uint8_t x868 = 0U;
uint64_t t179 = 5205777152793LLU;
volatile int32_t x874 = -327694282;
volatile int16_t x882 = INT16_MIN;
static int16_t x883 = INT16_MAX;
static int8_t x884 = INT8_MIN;
int32_t x888 = -25164043;
int64_t x900 = 327998LL;
int8_t x902 = INT8_MIN;
int64_t x904 = INT64_MAX;
volatile int32_t t187 = 1700;
uint64_t x920 = UINT64_MAX;
int32_t x929 = INT32_MIN;
uint8_t x934 = 17U;
int64_t x939 = INT64_MIN;
static int32_t t194 = -113;
static uint16_t x947 = 3U;
static volatile uint32_t t195 = 13349968U;
int32_t t196 = 9;
int32_t x959 = INT32_MIN;
uint32_t x962 = UINT32_MAX;
uint64_t x964 = UINT64_MAX;
volatile uint64_t t199 = 12844924137314338LLU;


void f0(void) {
    	int16_t x1 = -1891;
	int8_t x2 = -1;
	volatile int16_t x3 = 3800;
	int32_t t0 = -3332;

    t0 = ((x1==(x2/x3))-x4);

    if (t0 != -255) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 0;
	int64_t x7 = 75LL;
	int16_t x8 = INT16_MAX;
	int32_t t1 = -234516334;

    t1 = ((x5==(x6/x7))-x8);

    if (t1 != -32766) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	int32_t x12 = -1;
	int32_t t2 = 152;

    t2 = ((x9==(x10/x11))-x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	static int32_t x15 = INT32_MIN;
	int16_t x16 = INT16_MAX;
	int32_t t3 = -53;

    t3 = ((x13==(x14/x15))-x16);

    if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 1776U;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -4119129;

    t4 = ((x17==(x18/x19))-x20);

    if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = 35U;
	uint64_t x22 = 3570021LLU;
	uint32_t x23 = UINT32_MAX;
	static volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -3033835;

    t5 = ((x21==(x22/x23))-x24);

    if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	int8_t x26 = INT8_MIN;
	static volatile uint64_t x27 = 1930910LLU;
	volatile int32_t t6 = -371225;

    t6 = ((x25==(x26/x27))-x28);

    if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = -1;
	static uint64_t x30 = 6678687341765LLU;
	uint32_t x31 = 10U;
	static uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -364;

    t7 = ((x29==(x30/x31))-x32);

    if (t7 != -65535) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = -192687303;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -1;

    t8 = ((x33==(x34/x35))-x36);

    if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 9U;
	static int8_t x39 = INT8_MIN;
	static int64_t x40 = 82065342LL;

    t9 = ((x37==(x38/x39))-x40);

    if (t9 != -82065342LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MIN;
	int8_t x43 = -6;
	volatile int32_t t10 = 0;

    t10 = ((x41==(x42/x43))-x44);

    if (t10 != -244) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 17U;
	static uint8_t x51 = UINT8_MAX;
	int64_t x52 = -1LL;

    t11 = ((x49==(x50/x51))-x52);

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x57 = UINT32_MAX;
	int8_t x58 = -1;
	static uint16_t x60 = UINT16_MAX;
	static int32_t t12 = 12411942;

    t12 = ((x57==(x58/x59))-x60);

    if (t12 != -65535) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x61 = 966U;
	int8_t x62 = INT8_MIN;
	int32_t x63 = -1;
	int32_t x64 = -1;
	volatile int32_t t13 = -304;

    t13 = ((x61==(x62/x63))-x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x66 = -433;
	int32_t x68 = -13;

    t14 = ((x65==(x66/x67))-x68);

    if (t14 != 13) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x71 = 3U;
	int32_t t15 = 1;

    t15 = ((x69==(x70/x71))-x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x73 = UINT16_MAX;
	static uint64_t x74 = UINT64_MAX;
	int8_t x75 = INT8_MAX;
	static uint64_t x76 = UINT64_MAX;
	uint64_t t16 = 204103LLU;

    t16 = ((x73==(x74/x75))-x76);

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = 16;
	int32_t x78 = -228338;
	int8_t x80 = INT8_MIN;
	int32_t t17 = 114413;

    t17 = ((x77==(x78/x79))-x80);

    if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	static volatile int32_t x83 = 11;
	int8_t x84 = -1;
	volatile int32_t t18 = -12848749;

    t18 = ((x81==(x82/x83))-x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x87 = -3158512LL;
	int32_t x88 = -1;
	int32_t t19 = -11000563;

    t19 = ((x85==(x86/x87))-x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x90 = INT16_MIN;
	int32_t x91 = -1;
	uint16_t x92 = 1U;
	int32_t t20 = 1325881;

    t20 = ((x89==(x90/x91))-x92);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x93 = 19U;
	static volatile int64_t x94 = INT64_MIN;
	static uint8_t x95 = 93U;
	uint64_t x96 = 3653828438LLU;
	uint64_t t21 = 36185LLU;

    t21 = ((x93==(x94/x95))-x96);

    if (t21 != 18446744070055723178LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = -1;
	int16_t x98 = INT16_MIN;
	volatile int8_t x99 = 1;
	static volatile int8_t x100 = -53;
	volatile int32_t t22 = -1589;

    t22 = ((x97==(x98/x99))-x100);

    if (t22 != 53) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	uint32_t x106 = 3154223U;
	int32_t x107 = -1;
	int8_t x108 = INT8_MAX;

    t23 = ((x105==(x106/x107))-x108);

    if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x109 = INT8_MAX;
	volatile int32_t x110 = -51973;
	int16_t x111 = -1;
	static int16_t x112 = 1;
	int32_t t24 = -39688742;

    t24 = ((x109==(x110/x111))-x112);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = INT16_MIN;
	volatile int8_t x118 = -6;
	volatile int32_t x119 = -1;
	int32_t t25 = -81;

    t25 = ((x117==(x118/x119))-x120);

    if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = INT16_MAX;
	volatile int16_t x124 = -1;

    t26 = ((x121==(x122/x123))-x124);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = INT32_MIN;
	volatile int32_t x126 = INT32_MAX;
	uint64_t x127 = 40607679836429507LLU;
	uint16_t x128 = 5U;

    t27 = ((x125==(x126/x127))-x128);

    if (t27 != -5) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint32_t x129 = UINT32_MAX;
	int8_t x130 = INT8_MIN;
	uint8_t x131 = 2U;
	int16_t x132 = 36;
	static int32_t t28 = 7284;

    t28 = ((x129==(x130/x131))-x132);

    if (t28 != -36) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = INT8_MAX;
	int64_t x134 = -1LL;
	int32_t x135 = 409575214;
	int8_t x136 = -4;
	static int32_t t29 = 31971;

    t29 = ((x133==(x134/x135))-x136);

    if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x145 = -1;
	volatile int32_t x146 = INT32_MAX;
	volatile int64_t x147 = INT64_MAX;
	int8_t x148 = 0;
	int32_t t30 = -16440669;

    t30 = ((x145==(x146/x147))-x148);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x149 = INT16_MIN;
	uint32_t x150 = UINT32_MAX;
	uint8_t x151 = UINT8_MAX;
	int32_t t31 = -3;

    t31 = ((x149==(x150/x151))-x152);

    if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x153 = -1147;
	volatile uint8_t x154 = UINT8_MAX;
	int8_t x155 = INT8_MAX;
	int8_t x156 = INT8_MIN;
	volatile int32_t t32 = 138031029;

    t32 = ((x153==(x154/x155))-x156);

    if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x161 = 208748244LLU;
	static volatile uint32_t x162 = 1935U;
	int8_t x163 = -1;
	static volatile int64_t t33 = 65430001366LL;

    t33 = ((x161==(x162/x163))-x164);

    if (t33 != 7543021523356094LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x165 = -1;
	int8_t x166 = -3;
	int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MAX;

    t34 = ((x165==(x166/x167))-x168);

    if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x169 = -1;
	uint16_t x170 = UINT16_MAX;
	uint16_t x171 = 2U;
	uint8_t x172 = 4U;
	static volatile int32_t t35 = -5;

    t35 = ((x169==(x170/x171))-x172);

    if (t35 != -4) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x173 = 2705110164LLU;
	uint16_t x174 = UINT16_MAX;
	uint64_t x175 = 1656406439058LLU;
	uint32_t x176 = UINT32_MAX;
	uint32_t t36 = 58U;

    t36 = ((x173==(x174/x175))-x176);

    if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x177 = UINT16_MAX;
	static int8_t x178 = INT8_MAX;
	int8_t x179 = -29;
	uint16_t x180 = UINT16_MAX;
	static int32_t t37 = -27;

    t37 = ((x177==(x178/x179))-x180);

    if (t37 != -65535) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x181 = INT64_MIN;
	volatile uint32_t x184 = 572U;

    t38 = ((x181==(x182/x183))-x184);

    if (t38 != 4294966724U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x194 = -6;
	int8_t x195 = 1;
	int8_t x196 = INT8_MIN;
	static int32_t t39 = 240636774;

    t39 = ((x193==(x194/x195))-x196);

    if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x197 = -983808LL;
	static int8_t x199 = 6;
	static int16_t x200 = INT16_MIN;

    t40 = ((x197==(x198/x199))-x200);

    if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x201 = 1U;
	int32_t x202 = INT32_MAX;
	int8_t x203 = INT8_MAX;
	int32_t t41 = 4280;

    t41 = ((x201==(x202/x203))-x204);

    if (t41 != -7961) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x205 = INT32_MIN;
	uint16_t x206 = 3902U;
	static volatile int32_t x208 = INT32_MAX;
	int32_t t42 = -15076;

    t42 = ((x205==(x206/x207))-x208);

    if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x209 = 240LLU;
	static volatile int16_t x210 = INT16_MIN;
	static int8_t x211 = INT8_MIN;
	int32_t x212 = 128518;

    t43 = ((x209==(x210/x211))-x212);

    if (t43 != -128518) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x214 = 1U;
	int32_t x216 = -529746403;

    t44 = ((x213==(x214/x215))-x216);

    if (t44 != 529746403) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x217 = INT32_MAX;
	int32_t x218 = -1064;
	uint32_t x219 = UINT32_MAX;
	uint8_t x220 = 86U;
	volatile int32_t t45 = -992690300;

    t45 = ((x217==(x218/x219))-x220);

    if (t45 != -86) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x221 = -1LL;
	static uint8_t x222 = 5U;
	volatile int32_t x223 = -1;
	uint64_t x224 = 1479LLU;
	volatile uint64_t t46 = 208631511543LLU;

    t46 = ((x221==(x222/x223))-x224);

    if (t46 != 18446744073709550137LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x225 = 2397440;
	int8_t x226 = INT8_MAX;
	volatile int8_t x227 = INT8_MIN;
	static volatile int16_t x228 = INT16_MIN;
	static int32_t t47 = -1304645;

    t47 = ((x225==(x226/x227))-x228);

    if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x229 = -29;
	int16_t x230 = 4794;
	static int32_t x231 = INT32_MAX;
	static int32_t t48 = -27588;

    t48 = ((x229==(x230/x231))-x232);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x233 = INT16_MAX;
	uint16_t x234 = 19U;
	int16_t x235 = 2117;
	int32_t x236 = INT32_MAX;

    t49 = ((x233==(x234/x235))-x236);

    if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x237 = INT8_MAX;
	static volatile uint64_t x240 = 1269LLU;
	static uint64_t t50 = 11527980698762LLU;

    t50 = ((x237==(x238/x239))-x240);

    if (t50 != 18446744073709550347LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x241 = 95U;
	int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MIN;
	int16_t x244 = 30;
	int32_t t51 = 5;

    t51 = ((x241==(x242/x243))-x244);

    if (t51 != -30) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x245 = 0U;
	int8_t x246 = -1;
	static int16_t x248 = -1;
	int32_t t52 = 1;

    t52 = ((x245==(x246/x247))-x248);

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x249 = 765301308LLU;
	volatile int32_t x250 = -1;
	volatile int16_t x251 = 1687;
	int8_t x252 = INT8_MAX;
	int32_t t53 = 32837;

    t53 = ((x249==(x250/x251))-x252);

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x253 = 1868;
	int8_t x254 = 15;
	int64_t x255 = -188017496LL;
	static uint64_t t54 = 229735065864478959LLU;

    t54 = ((x253==(x254/x255))-x256);

    if (t54 != 18446744072211777271LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x257 = 3U;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t55 = -273309685;

    t55 = ((x257==(x258/x259))-x260);

    if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x261 = 2;
	int8_t x262 = -1;
	int8_t x263 = -50;
	volatile int32_t t56 = -3750;

    t56 = ((x261==(x262/x263))-x264);

    if (t56 != -116) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x265 = 1;
	volatile int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	static int16_t x268 = INT16_MIN;
	int32_t t57 = 1485716;

    t57 = ((x265==(x266/x267))-x268);

    if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x273 = -1LL;
	int32_t x275 = -3;
	volatile int32_t t58 = -903953754;

    t58 = ((x273==(x274/x275))-x276);

    if (t58 != -255) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x277 = 189898991LLU;
	volatile uint32_t x279 = 385134U;
	uint32_t x280 = UINT32_MAX;
	static volatile uint32_t t59 = 158U;

    t59 = ((x277==(x278/x279))-x280);

    if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x282 = -1;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = UINT16_MAX;
	int32_t t60 = 3268;

    t60 = ((x281==(x282/x283))-x284);

    if (t60 != -65535) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x285 = UINT64_MAX;
	volatile int8_t x286 = 1;
	int8_t x287 = -1;
	static volatile int32_t x288 = INT32_MAX;
	int32_t t61 = -26166045;

    t61 = ((x285==(x286/x287))-x288);

    if (t61 != -2147483646) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x293 = 7922;
	int64_t x294 = INT64_MIN;
	int16_t x295 = -3;
	int64_t x296 = -1LL;
	int64_t t62 = -370725691691LL;

    t62 = ((x293==(x294/x295))-x296);

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x297 = UINT64_MAX;
	volatile uint8_t x298 = UINT8_MAX;
	volatile uint64_t x300 = 894591240306LLU;
	volatile uint64_t t63 = 108332366016LLU;

    t63 = ((x297==(x298/x299))-x300);

    if (t63 != 18446743179118311310LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x301 = 39980U;
	uint8_t x302 = UINT8_MAX;
	volatile int32_t t64 = 1605;

    t64 = ((x301==(x302/x303))-x304);

    if (t64 != -3) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x309 = INT32_MIN;
	volatile int8_t x311 = -1;
	int16_t x312 = INT16_MIN;
	static volatile int32_t t65 = 20;

    t65 = ((x309==(x310/x311))-x312);

    if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x313 = INT8_MAX;
	int64_t x314 = 3250LL;
	volatile uint64_t x315 = UINT64_MAX;
	int16_t x316 = -1;
	volatile int32_t t66 = 64014;

    t66 = ((x313==(x314/x315))-x316);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x321 = UINT32_MAX;
	static uint32_t x322 = UINT32_MAX;
	volatile uint64_t x323 = UINT64_MAX;
	int8_t x324 = 30;
	int32_t t67 = -847;

    t67 = ((x321==(x322/x323))-x324);

    if (t67 != -30) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MIN;
	volatile uint32_t x328 = UINT32_MAX;
	static volatile uint32_t t68 = 198U;

    t68 = ((x325==(x326/x327))-x328);

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x329 = 37261196U;
	int64_t x330 = INT64_MAX;
	int16_t x331 = INT16_MIN;
	static int64_t x332 = -740695999525864LL;
	volatile int64_t t69 = -58777187173416431LL;

    t69 = ((x329==(x330/x331))-x332);

    if (t69 != 740695999525864LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x337 = 14723U;
	int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	uint64_t t70 = 248883374LLU;

    t70 = ((x337==(x338/x339))-x340);

    if (t70 != 18384800632575917042LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x345 = UINT16_MAX;
	static int32_t x346 = -1;
	static volatile uint8_t x347 = UINT8_MAX;
	static int8_t x348 = INT8_MAX;
	volatile int32_t t71 = -400529;

    t71 = ((x345==(x346/x347))-x348);

    if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x349 = -1;
	int16_t x350 = INT16_MIN;
	volatile int32_t x351 = INT32_MAX;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t72 = 0LLU;

    t72 = ((x349==(x350/x351))-x352);

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MIN;

    t73 = ((x353==(x354/x355))-x356);

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x357 = -2;
	int16_t x358 = INT16_MIN;
	uint8_t x359 = UINT8_MAX;
	int32_t x360 = 326;
	int32_t t74 = 23432;

    t74 = ((x357==(x358/x359))-x360);

    if (t74 != -326) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x361 = -2;
	int8_t x363 = -12;
	int32_t x364 = 485;
	int32_t t75 = 60287149;

    t75 = ((x361==(x362/x363))-x364);

    if (t75 != -485) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x365 = -695;
	static uint16_t x367 = 198U;
	int32_t x368 = 86693;
	int32_t t76 = 13251746;

    t76 = ((x365==(x366/x367))-x368);

    if (t76 != -86693) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x369 = -1;
	int16_t x370 = INT16_MIN;
	uint64_t x371 = 108LLU;

    t77 = ((x369==(x370/x371))-x372);

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x378 = 4U;
	int8_t x379 = 1;
	int8_t x380 = INT8_MAX;

    t78 = ((x377==(x378/x379))-x380);

    if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x381 = UINT64_MAX;
	uint8_t x383 = 16U;
	static int32_t x384 = -1;
	int32_t t79 = -18;

    t79 = ((x381==(x382/x383))-x384);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x385 = 2277787128434507LLU;
	static int8_t x386 = INT8_MIN;
	uint8_t x387 = 2U;
	int16_t x388 = INT16_MAX;
	volatile int32_t t80 = -3;

    t80 = ((x385==(x386/x387))-x388);

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x393 = -1;
	volatile int8_t x394 = -1;
	static int16_t x395 = INT16_MIN;
	volatile int32_t t81 = -104810098;

    t81 = ((x393==(x394/x395))-x396);

    if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x397 = UINT32_MAX;
	int64_t x398 = -761LL;
	static uint8_t x399 = UINT8_MAX;
	static volatile int32_t x400 = -1;
	volatile int32_t t82 = -19025;

    t82 = ((x397==(x398/x399))-x400);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x402 = UINT64_MAX;
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MIN;
	int32_t t83 = -195308759;

    t83 = ((x401==(x402/x403))-x404);

    if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x405 = INT64_MAX;
	uint64_t x406 = UINT64_MAX;
	static volatile int16_t x407 = INT16_MAX;
	int16_t x408 = INT16_MAX;

    t84 = ((x405==(x406/x407))-x408);

    if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x409 = -1032LL;
	int8_t x410 = -1;
	volatile int64_t x411 = -1LL;
	uint8_t x412 = UINT8_MAX;
	int32_t t85 = -46;

    t85 = ((x409==(x410/x411))-x412);

    if (t85 != -255) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x413 = 887237421367LL;
	int8_t x414 = INT8_MIN;
	uint16_t x415 = 3U;
	volatile uint16_t x416 = 6U;

    t86 = ((x413==(x414/x415))-x416);

    if (t86 != -6) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x417 = INT16_MIN;
	int32_t x418 = INT32_MIN;
	uint64_t x419 = 217649581303308LLU;
	int32_t x420 = INT32_MAX;
	static int32_t t87 = 906871869;

    t87 = ((x417==(x418/x419))-x420);

    if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x421 = INT16_MIN;
	volatile uint8_t x422 = UINT8_MAX;
	uint16_t x423 = 25476U;
	volatile int32_t t88 = -32010;

    t88 = ((x421==(x422/x423))-x424);

    if (t88 != -65535) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x425 = 1;
	int64_t x426 = INT64_MIN;
	volatile int32_t t89 = 1030209222;

    t89 = ((x425==(x426/x427))-x428);

    if (t89 != 32769) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x429 = UINT16_MAX;
	int64_t x430 = 164322697333774684LL;
	uint64_t x431 = 5920317713535LLU;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t90 = 4U;

    t90 = ((x429==(x430/x431))-x432);

    if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x433 = INT64_MAX;
	int8_t x434 = -1;
	int64_t x436 = -1LL;
	static volatile int64_t t91 = 43439LL;

    t91 = ((x433==(x434/x435))-x436);

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x438 = -4372196477512LL;
	volatile int16_t x439 = INT16_MIN;
	static uint32_t x440 = UINT32_MAX;
	uint32_t t92 = 1271280U;

    t92 = ((x437==(x438/x439))-x440);

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x441 = 451147458U;
	volatile uint8_t x442 = 95U;
	static int32_t t93 = -42506844;

    t93 = ((x441==(x442/x443))-x444);

    if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x445 = -2196549612334LL;
	volatile uint32_t x446 = UINT32_MAX;
	int8_t x447 = INT8_MAX;
	int8_t x448 = -1;

    t94 = ((x445==(x446/x447))-x448);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x449 = 5202041;
	int8_t x450 = -2;
	static uint8_t x451 = UINT8_MAX;

    t95 = ((x449==(x450/x451))-x452);

    if (t95 != -12150929689044988LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x455 = INT16_MIN;
	int32_t t96 = -302;

    t96 = ((x453==(x454/x455))-x456);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x461 = INT16_MIN;
	uint8_t x462 = 10U;
	static uint16_t x463 = 3U;
	volatile uint32_t t97 = 110289U;

    t97 = ((x461==(x462/x463))-x464);

    if (t97 != 4229764192U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x467 = UINT64_MAX;
	static int32_t x468 = 9512733;
	int32_t t98 = 3770;

    t98 = ((x465==(x466/x467))-x468);

    if (t98 != -9512733) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x474 = UINT64_MAX;
	uint64_t x476 = 2LLU;
	uint64_t t99 = 82766113432LLU;

    t99 = ((x473==(x474/x475))-x476);

    if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x477 = UINT16_MAX;
	int8_t x478 = INT8_MAX;
	uint16_t x480 = UINT16_MAX;
	int32_t t100 = -637;

    t100 = ((x477==(x478/x479))-x480);

    if (t100 != -65535) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x481 = -3;
	int8_t x482 = INT8_MIN;
	uint16_t x483 = 138U;
	static uint32_t x484 = 1575344966U;

    t101 = ((x481==(x482/x483))-x484);

    if (t101 != 2719622330U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x485 = 3U;
	volatile int64_t x486 = -1LL;
	int16_t x488 = -1;

    t102 = ((x485==(x486/x487))-x488);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x489 = 2227LLU;
	static volatile uint64_t x490 = UINT64_MAX;
	volatile int64_t x491 = INT64_MAX;
	int16_t x492 = 1557;
	int32_t t103 = -460746178;

    t103 = ((x489==(x490/x491))-x492);

    if (t103 != -1557) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x494 = INT16_MAX;
	static int64_t x495 = INT64_MAX;
	volatile int16_t x496 = INT16_MAX;
	volatile int32_t t104 = 38;

    t104 = ((x493==(x494/x495))-x496);

    if (t104 != -32767) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x505 = INT8_MAX;
	volatile int8_t x506 = 59;
	static volatile int8_t x507 = 15;
	uint8_t x508 = 1U;
	static int32_t t105 = 16;

    t105 = ((x505==(x506/x507))-x508);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x513 = 2;
	int8_t x514 = -1;
	uint64_t x515 = UINT64_MAX;
	static volatile uint16_t x516 = UINT16_MAX;
	int32_t t106 = -4;

    t106 = ((x513==(x514/x515))-x516);

    if (t106 != -65535) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x518 = INT8_MIN;
	uint8_t x519 = 100U;
	int8_t x520 = INT8_MIN;
	static volatile int32_t t107 = -95343;

    t107 = ((x517==(x518/x519))-x520);

    if (t107 != 129) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint16_t x525 = UINT16_MAX;
	volatile int64_t x526 = 17091245921834LL;
	volatile int16_t x528 = 1;
	volatile int32_t t108 = 33323811;

    t108 = ((x525==(x526/x527))-x528);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x529 = 247U;
	int64_t x531 = INT64_MIN;
	volatile uint64_t x532 = 61966249LLU;
	volatile uint64_t t109 = 308613439260679LLU;

    t109 = ((x529==(x530/x531))-x532);

    if (t109 != 18446744073647585367LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x534 = 3;
	uint16_t x535 = 24264U;
	int16_t x536 = 6875;
	volatile int32_t t110 = -463622400;

    t110 = ((x533==(x534/x535))-x536);

    if (t110 != -6875) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x539 = -1LL;
	uint8_t x540 = UINT8_MAX;
	static volatile int32_t t111 = 5260982;

    t111 = ((x537==(x538/x539))-x540);

    if (t111 != -255) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x541 = UINT8_MAX;
	volatile uint8_t x542 = UINT8_MAX;
	uint32_t x543 = UINT32_MAX;
	uint16_t x544 = UINT16_MAX;
	static volatile int32_t t112 = 978296;

    t112 = ((x541==(x542/x543))-x544);

    if (t112 != -65535) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x554 = INT32_MAX;
	volatile uint16_t x555 = 364U;
	volatile int64_t x556 = 357126LL;
	volatile int64_t t113 = -15985905688LL;

    t113 = ((x553==(x554/x555))-x556);

    if (t113 != -357126LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x565 = -4744;
	volatile int16_t x566 = -10;
	static uint8_t x568 = UINT8_MAX;
	static volatile int32_t t114 = 262;

    t114 = ((x565==(x566/x567))-x568);

    if (t114 != -255) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x581 = -12950;
	uint64_t x582 = 24433189042071168LLU;
	int16_t x583 = INT16_MIN;
	static volatile uint16_t x584 = 1U;
	volatile int32_t t115 = 6869677;

    t115 = ((x581==(x582/x583))-x584);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x589 = UINT64_MAX;
	uint32_t x590 = 370U;
	int64_t x591 = 9649228LL;
	static int16_t x592 = INT16_MIN;
	static volatile int32_t t116 = -19454;

    t116 = ((x589==(x590/x591))-x592);

    if (t116 != 32768) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x594 = 7;
	static int64_t x595 = -241100760267LL;
	volatile uint8_t x596 = 72U;
	static int32_t t117 = -56;

    t117 = ((x593==(x594/x595))-x596);

    if (t117 != -72) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x599 = INT64_MAX;
	uint32_t x600 = UINT32_MAX;
	volatile uint32_t t118 = 57U;

    t118 = ((x597==(x598/x599))-x600);

    if (t118 != 1U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x601 = UINT32_MAX;
	volatile int64_t x603 = -1LL;
	uint64_t x604 = UINT64_MAX;
	uint64_t t119 = 1616132252574831202LLU;

    t119 = ((x601==(x602/x603))-x604);

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x605 = 57028899;
	uint64_t x606 = UINT64_MAX;
	volatile int32_t x607 = -1;
	uint32_t x608 = 0U;
	volatile uint32_t t120 = 692U;

    t120 = ((x605==(x606/x607))-x608);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x609 = -1;
	int8_t x610 = INT8_MIN;
	int16_t x611 = -602;
	uint8_t x612 = 60U;
	static volatile int32_t t121 = -8160;

    t121 = ((x609==(x610/x611))-x612);

    if (t121 != -60) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x613 = INT16_MIN;
	static volatile int32_t x614 = INT32_MIN;
	int8_t x616 = INT8_MIN;
	volatile int32_t t122 = 34644;

    t122 = ((x613==(x614/x615))-x616);

    if (t122 != 128) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x617 = UINT16_MAX;
	uint8_t x618 = UINT8_MAX;
	volatile int8_t x619 = INT8_MIN;
	int8_t x620 = -1;

    t123 = ((x617==(x618/x619))-x620);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x621 = 2U;
	uint8_t x622 = 1U;
	uint32_t x623 = 6891U;
	static int64_t x624 = 339519274LL;
	volatile int64_t t124 = -384242481111LL;

    t124 = ((x621==(x622/x623))-x624);

    if (t124 != -339519274LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x626 = UINT32_MAX;
	int32_t x627 = INT32_MIN;
	static volatile uint16_t x628 = 1381U;
	volatile int32_t t125 = 19451;

    t125 = ((x625==(x626/x627))-x628);

    if (t125 != -1381) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x629 = UINT64_MAX;
	static uint64_t x630 = UINT64_MAX;
	int64_t x631 = INT64_MIN;
	int8_t x632 = INT8_MAX;
	int32_t t126 = 372;

    t126 = ((x629==(x630/x631))-x632);

    if (t126 != -127) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x637 = INT64_MIN;
	int32_t x639 = INT32_MAX;
	int64_t x640 = -1LL;
	static volatile int64_t t127 = -6588896961197401LL;

    t127 = ((x637==(x638/x639))-x640);

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x642 = 4;
	int32_t x643 = -3;
	volatile uint64_t x644 = 5992649359LLU;
	volatile uint64_t t128 = 1146639837LLU;

    t128 = ((x641==(x642/x643))-x644);

    if (t128 != 18446744067716902258LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x649 = -1LL;
	uint16_t x650 = 3U;
	int64_t x651 = -1LL;
	volatile int32_t x652 = -158125;

    t129 = ((x649==(x650/x651))-x652);

    if (t129 != 158125) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x658 = -1;
	int64_t x659 = INT64_MIN;
	int16_t x660 = -1;
	static int32_t t130 = -741;

    t130 = ((x657==(x658/x659))-x660);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x662 = 2;
	uint32_t x664 = 1U;
	volatile uint32_t t131 = UINT32_MAX;

    t131 = ((x661==(x662/x663))-x664);

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x665 = 180743683123LLU;
	volatile int16_t x666 = -959;
	uint8_t x667 = UINT8_MAX;
	volatile uint32_t x668 = 1U;

    t132 = ((x665==(x666/x667))-x668);

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x669 = INT32_MIN;
	static uint32_t x671 = 1622386508U;
	volatile int8_t x672 = -2;
	int32_t t133 = -28;

    t133 = ((x669==(x670/x671))-x672);

    if (t133 != 2) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x673 = INT32_MIN;
	uint16_t x674 = 15311U;
	int16_t x675 = INT16_MIN;
	volatile uint32_t x676 = 4340U;
	volatile uint32_t t134 = 49273759U;

    t134 = ((x673==(x674/x675))-x676);

    if (t134 != 4294962956U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x677 = INT16_MIN;
	static int8_t x678 = -1;
	volatile int32_t x679 = INT32_MIN;
	static volatile uint16_t x680 = UINT16_MAX;
	int32_t t135 = -102605288;

    t135 = ((x677==(x678/x679))-x680);

    if (t135 != -65535) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x681 = -141312;
	static int32_t x682 = INT32_MIN;
	static int64_t x683 = INT64_MIN;

    t136 = ((x681==(x682/x683))-x684);

    if (t136 != 18446738969111776541LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x686 = 39U;
	int8_t x688 = INT8_MAX;
	int32_t t137 = -3;

    t137 = ((x685==(x686/x687))-x688);

    if (t137 != -127) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x689 = 1U;
	int32_t x690 = -3665;
	volatile int64_t t138 = 88398375017LL;

    t138 = ((x689==(x690/x691))-x692);

    if (t138 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x695 = 2;
	volatile int16_t x696 = INT16_MIN;
	int32_t t139 = 47543428;

    t139 = ((x693==(x694/x695))-x696);

    if (t139 != 32768) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x697 = INT64_MAX;
	static uint16_t x698 = 21U;
	uint16_t x699 = UINT16_MAX;
	volatile int32_t t140 = -493002431;

    t140 = ((x697==(x698/x699))-x700);

    if (t140 != 128) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x705 = 6126U;
	int8_t x706 = INT8_MIN;
	int16_t x707 = INT16_MAX;
	int64_t x708 = -772221406590636LL;
	int64_t t141 = 484275919693253LL;

    t141 = ((x705==(x706/x707))-x708);

    if (t141 != 772221406590636LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x709 = INT16_MIN;
	static int16_t x711 = INT16_MIN;
	static int8_t x712 = 16;
	volatile int32_t t142 = -61191;

    t142 = ((x709==(x710/x711))-x712);

    if (t142 != -16) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x713 = INT16_MAX;
	static int64_t x715 = INT64_MIN;
	int8_t x716 = INT8_MIN;
	int32_t t143 = -3436220;

    t143 = ((x713==(x714/x715))-x716);

    if (t143 != 128) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x717 = 54LLU;
	static volatile uint64_t x718 = 67487731288LLU;
	uint32_t x719 = 1467U;
	int32_t t144 = 561613242;

    t144 = ((x717==(x718/x719))-x720);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x725 = INT8_MIN;
	static int32_t x726 = -1;
	int16_t x727 = INT16_MIN;
	int8_t x728 = -1;
	static volatile int32_t t145 = 20211;

    t145 = ((x725==(x726/x727))-x728);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x731 = INT32_MIN;
	uint64_t x732 = 18690LLU;
	volatile uint64_t t146 = 10690663102011LLU;

    t146 = ((x729==(x730/x731))-x732);

    if (t146 != 18446744073709532926LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x733 = 2238231450070LLU;
	int8_t x734 = INT8_MIN;
	static volatile int64_t x735 = -1LL;
	uint64_t x736 = 333LLU;

    t147 = ((x733==(x734/x735))-x736);

    if (t147 != 18446744073709551283LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x737 = 3260;
	int64_t x738 = -1LL;
	static uint32_t x740 = 18875897U;
	static uint32_t t148 = 3549U;

    t148 = ((x737==(x738/x739))-x740);

    if (t148 != 4276091399U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x742 = 16LLU;
	int64_t x743 = INT64_MIN;
	int8_t x744 = -4;
	int32_t t149 = -47804;

    t149 = ((x741==(x742/x743))-x744);

    if (t149 != 4) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x746 = INT32_MIN;
	uint8_t x747 = 30U;
	static volatile int32_t x748 = 443614;

    t150 = ((x745==(x746/x747))-x748);

    if (t150 != -443614) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x754 = 41U;
	int8_t x755 = -1;
	volatile uint32_t x756 = 2U;
	volatile uint32_t t151 = 492U;

    t151 = ((x753==(x754/x755))-x756);

    if (t151 != 4294967294U) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x757 = UINT32_MAX;
	int16_t x759 = -6364;
	volatile uint16_t x760 = 720U;
	static int32_t t152 = -364314;

    t152 = ((x757==(x758/x759))-x760);

    if (t152 != -720) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x762 = 7188824503942LLU;
	int32_t x763 = -195;
	int32_t x764 = INT32_MAX;
	volatile int32_t t153 = 22360;

    t153 = ((x761==(x762/x763))-x764);

    if (t153 != -2147483647) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x765 = UINT64_MAX;
	uint32_t x768 = 1763U;

    t154 = ((x765==(x766/x767))-x768);

    if (t154 != 4294965533U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x769 = -20LL;
	static int64_t x770 = -1LL;
	int32_t x771 = INT32_MIN;
	int64_t x772 = -1LL;
	volatile int64_t t155 = 1103079663671317LL;

    t155 = ((x769==(x770/x771))-x772);

    if (t155 != 1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x773 = 9U;
	volatile int8_t x774 = -7;
	int16_t x775 = INT16_MIN;
	uint32_t t156 = 13259U;

    t156 = ((x773==(x774/x775))-x776);

    if (t156 != 3975873946U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x781 = 10;
	volatile uint32_t x782 = 4632U;
	static int32_t x783 = INT32_MIN;
	int32_t x784 = -1;
	volatile int32_t t157 = -112310267;

    t157 = ((x781==(x782/x783))-x784);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x785 = 0LL;
	uint8_t x786 = UINT8_MAX;
	volatile int64_t x787 = INT64_MIN;
	static int32_t x788 = 808;
	int32_t t158 = 114;

    t158 = ((x785==(x786/x787))-x788);

    if (t158 != -807) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x789 = 1LL;
	uint64_t x790 = 1944481272436559533LLU;
	int64_t x791 = INT64_MAX;
	volatile uint64_t x792 = 1688732455LLU;
	volatile uint64_t t159 = 2LLU;

    t159 = ((x789==(x790/x791))-x792);

    if (t159 != 18446744072020819161LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x794 = INT64_MIN;
	static uint16_t x795 = 280U;
	int64_t x796 = 785560LL;
	int64_t t160 = 47220815591796LL;

    t160 = ((x793==(x794/x795))-x796);

    if (t160 != -785560LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x797 = INT64_MAX;
	int64_t x798 = -6856LL;
	int32_t x799 = INT32_MIN;
	static volatile int64_t t161 = 145436691104LL;

    t161 = ((x797==(x798/x799))-x800);

    if (t161 != -993LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x802 = 627261008;
	int64_t x803 = 36645LL;
	uint32_t x804 = 802U;
	volatile uint32_t t162 = 1170192050U;

    t162 = ((x801==(x802/x803))-x804);

    if (t162 != 4294966494U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x805 = -23;
	int32_t x806 = -1;
	static volatile int8_t x807 = INT8_MIN;
	volatile int16_t x808 = INT16_MIN;
	int32_t t163 = -45318;

    t163 = ((x805==(x806/x807))-x808);

    if (t163 != 32768) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x809 = 202LL;
	static int8_t x810 = 31;
	int16_t x811 = INT16_MIN;
	volatile int8_t x812 = INT8_MAX;

    t164 = ((x809==(x810/x811))-x812);

    if (t164 != -127) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x813 = INT32_MIN;
	int8_t x814 = INT8_MAX;
	uint8_t x815 = 7U;
	int32_t x816 = -2;
	volatile int32_t t165 = 55;

    t165 = ((x813==(x814/x815))-x816);

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x817 = INT16_MIN;
	int16_t x818 = 1;
	volatile int8_t x819 = INT8_MAX;
	uint8_t x820 = UINT8_MAX;
	volatile int32_t t166 = -148583;

    t166 = ((x817==(x818/x819))-x820);

    if (t166 != -255) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x821 = -1;
	static int64_t x823 = -15899590424241LL;
	static int8_t x824 = 1;
	volatile int32_t t167 = -1;

    t167 = ((x821==(x822/x823))-x824);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x825 = INT16_MAX;
	int32_t x826 = INT32_MIN;
	volatile int64_t x827 = 29666737861LL;
	uint32_t x828 = UINT32_MAX;
	volatile uint32_t t168 = 126104U;

    t168 = ((x825==(x826/x827))-x828);

    if (t168 != 1U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x829 = UINT64_MAX;
	int16_t x831 = INT16_MIN;
	int32_t x832 = INT32_MAX;
	volatile int32_t t169 = 1;

    t169 = ((x829==(x830/x831))-x832);

    if (t169 != -2147483647) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x833 = INT8_MIN;
	int8_t x835 = -1;
	int32_t x836 = INT32_MAX;
	volatile int32_t t170 = -1999;

    t170 = ((x833==(x834/x835))-x836);

    if (t170 != -2147483647) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x837 = -3;
	uint8_t x838 = 37U;
	int32_t x839 = INT32_MIN;
	static int32_t t171 = 1890610;

    t171 = ((x837==(x838/x839))-x840);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x842 = -189227979896LL;
	volatile int64_t x843 = INT64_MAX;
	volatile int32_t t172 = 11;

    t172 = ((x841==(x842/x843))-x844);

    if (t172 != -127) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x845 = -1;
	uint64_t x846 = 1LLU;
	int64_t x847 = 424627330LL;
	int64_t x848 = 587747474LL;
	volatile int64_t t173 = -344172933512LL;

    t173 = ((x845==(x846/x847))-x848);

    if (t173 != -587747474LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x849 = 32381U;
	uint64_t x850 = 267854333LLU;
	volatile int16_t x851 = 1;
	int16_t x852 = INT16_MIN;
	int32_t t174 = -13017140;

    t174 = ((x849==(x850/x851))-x852);

    if (t174 != 32768) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x853 = UINT8_MAX;
	int64_t x855 = INT64_MAX;
	int64_t x856 = -3566143LL;
	int64_t t175 = -370426268045009366LL;

    t175 = ((x853==(x854/x855))-x856);

    if (t175 != 3566143LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x857 = INT64_MAX;
	int8_t x858 = INT8_MIN;
	static int32_t x859 = -1;
	static uint32_t x860 = UINT32_MAX;
	uint32_t t176 = 13834U;

    t176 = ((x857==(x858/x859))-x860);

    if (t176 != 1U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x861 = 757913424LLU;
	int64_t x862 = -1LL;
	volatile int64_t t177 = -157595190343762LL;

    t177 = ((x861==(x862/x863))-x864);

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x865 = INT32_MAX;
	static uint16_t x867 = 11U;
	int32_t t178 = 3549;

    t178 = ((x865==(x866/x867))-x868);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x869 = INT16_MIN;
	int32_t x870 = INT32_MIN;
	int64_t x871 = -440562044081761LL;
	uint64_t x872 = UINT64_MAX;

    t179 = ((x869==(x870/x871))-x872);

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x873 = -247546LL;
	static volatile uint16_t x875 = 14019U;
	int8_t x876 = INT8_MIN;
	static int32_t t180 = -7;

    t180 = ((x873==(x874/x875))-x876);

    if (t180 != 128) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x881 = -207155568729LL;
	int32_t t181 = -1;

    t181 = ((x881==(x882/x883))-x884);

    if (t181 != 128) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x885 = INT16_MIN;
	static int16_t x886 = INT16_MIN;
	int8_t x887 = 8;
	volatile int32_t t182 = 795839;

    t182 = ((x885==(x886/x887))-x888);

    if (t182 != 25164043) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x889 = INT64_MIN;
	static volatile int8_t x890 = INT8_MIN;
	static uint32_t x891 = UINT32_MAX;
	uint8_t x892 = 31U;
	volatile int32_t t183 = -76253;

    t183 = ((x889==(x890/x891))-x892);

    if (t183 != -31) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x893 = -1;
	volatile int32_t x894 = -1;
	int16_t x895 = 3;
	int32_t x896 = INT32_MAX;
	volatile int32_t t184 = 189;

    t184 = ((x893==(x894/x895))-x896);

    if (t184 != -2147483647) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x897 = 931017151823764907LLU;
	uint64_t x898 = UINT64_MAX;
	volatile int8_t x899 = -1;
	int64_t t185 = 7124840518LL;

    t185 = ((x897==(x898/x899))-x900);

    if (t185 != -327998LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x901 = UINT64_MAX;
	static volatile uint8_t x903 = 107U;
	volatile int64_t t186 = -16583343176LL;

    t186 = ((x901==(x902/x903))-x904);

    if (t186 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x905 = 820231U;
	int64_t x906 = 1LL;
	int8_t x907 = 1;
	uint8_t x908 = UINT8_MAX;

    t187 = ((x905==(x906/x907))-x908);

    if (t187 != -255) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x909 = -3848313819LL;
	int32_t x910 = 27490412;
	static volatile uint16_t x911 = UINT16_MAX;
	volatile int8_t x912 = -1;
	int32_t t188 = -348258;

    t188 = ((x909==(x910/x911))-x912);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x913 = INT64_MIN;
	int16_t x914 = 0;
	volatile int64_t x915 = 28LL;
	int64_t x916 = 429385543081442463LL;
	static volatile int64_t t189 = -4320788811LL;

    t189 = ((x913==(x914/x915))-x916);

    if (t189 != -429385543081442463LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x917 = 3671;
	int64_t x918 = INT64_MIN;
	volatile int64_t x919 = INT64_MAX;
	static volatile uint64_t t190 = 47277LLU;

    t190 = ((x917==(x918/x919))-x920);

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x930 = INT16_MIN;
	int8_t x931 = INT8_MIN;
	static int8_t x932 = 36;
	volatile int32_t t191 = -49921639;

    t191 = ((x929==(x930/x931))-x932);

    if (t191 != -36) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x933 = INT16_MIN;
	volatile int8_t x935 = -6;
	static uint8_t x936 = UINT8_MAX;
	volatile int32_t t192 = 194521588;

    t192 = ((x933==(x934/x935))-x936);

    if (t192 != -255) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x937 = 157U;
	int64_t x938 = -1898520537192714LL;
	static int16_t x940 = INT16_MIN;
	int32_t t193 = 934191;

    t193 = ((x937==(x938/x939))-x940);

    if (t193 != 32768) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x941 = UINT8_MAX;
	static uint64_t x942 = 102940062182895LLU;
	int16_t x943 = INT16_MAX;
	static int32_t x944 = INT32_MAX;

    t194 = ((x941==(x942/x943))-x944);

    if (t194 != -2147483647) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x945 = 165;
	uint8_t x946 = UINT8_MAX;
	uint32_t x948 = 301166874U;

    t195 = ((x945==(x946/x947))-x948);

    if (t195 != 3993800422U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x949 = 3;
	int64_t x950 = -1LL;
	uint8_t x951 = 4U;
	int8_t x952 = 0;

    t196 = ((x949==(x950/x951))-x952);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x953 = 4U;
	static volatile int8_t x954 = INT8_MIN;
	int32_t x955 = 9873;
	uint32_t x956 = UINT32_MAX;
	volatile uint32_t t197 = 42370027U;

    t197 = ((x953==(x954/x955))-x956);

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x957 = 1079378837546413LLU;
	static uint64_t x958 = 3LLU;
	int32_t x960 = -492200;
	int32_t t198 = 29633;

    t198 = ((x957==(x958/x959))-x960);

    if (t198 != 492200) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x961 = INT8_MAX;
	int64_t x963 = INT64_MIN;

    t199 = ((x961==(x962/x963))-x964);

    if (t199 != 1LLU) { NG(); } else { ; }
	
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

