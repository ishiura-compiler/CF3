
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

int8_t x2 = INT8_MIN;
int8_t x4 = INT8_MIN;
int8_t x8 = INT8_MIN;
volatile int32_t x11 = 953507787;
static int32_t t3 = 54305348;
int16_t x20 = INT16_MIN;
int16_t x21 = INT16_MAX;
uint64_t x27 = UINT64_MAX;
int16_t x28 = 9582;
int8_t x29 = INT8_MAX;
int64_t x49 = INT64_MIN;
static volatile int64_t x57 = -24662121308129975LL;
static uint64_t x59 = 151701LLU;
uint8_t x78 = 0U;
volatile int32_t t15 = 66045;
int8_t x81 = INT8_MAX;
volatile int16_t x82 = INT16_MIN;
static int64_t x89 = 8537829264529LL;
static int64_t x96 = INT64_MIN;
volatile int16_t x97 = 302;
uint8_t x102 = 84U;
uint16_t x125 = UINT16_MAX;
int32_t t25 = 18;
static uint32_t x134 = 799699U;
static volatile int32_t t26 = 8011156;
uint8_t x137 = 1U;
volatile int32_t t28 = -75936843;
int8_t x146 = 5;
int32_t t30 = 675;
volatile int32_t x158 = INT32_MIN;
int32_t t31 = 578793;
int16_t x167 = INT16_MIN;
volatile int32_t t32 = -412657;
int8_t x170 = INT8_MIN;
volatile int32_t t33 = 3995598;
static int32_t t37 = 278;
int16_t x192 = -3;
int32_t t40 = -7098;
static int32_t x205 = 1395905;
volatile int32_t t43 = 323;
int64_t x237 = 382876LL;
uint64_t x238 = 12LLU;
int32_t x247 = INT32_MAX;
volatile uint16_t x249 = 35U;
static uint32_t x252 = 501395U;
uint64_t x255 = 187413LLU;
static int8_t x259 = INT8_MIN;
volatile int32_t t50 = 1;
static int8_t x262 = 3;
static volatile int16_t x267 = -1;
static int8_t x269 = 19;
volatile uint8_t x272 = 0U;
int32_t x273 = INT32_MAX;
int16_t x278 = INT16_MIN;
static int32_t t57 = -159;
uint16_t x299 = 13003U;
uint32_t x300 = UINT32_MAX;
uint16_t x301 = 0U;
volatile int64_t x305 = -1LL;
volatile int32_t x308 = -26;
uint64_t x310 = UINT64_MAX;
volatile int32_t t63 = -33180281;
volatile int32_t t64 = 0;
int16_t x329 = INT16_MAX;
int32_t t67 = -11814944;
static uint8_t x336 = UINT8_MAX;
volatile int32_t t69 = -496822361;
static int8_t x345 = 0;
uint32_t x346 = UINT32_MAX;
volatile uint16_t x347 = 0U;
static int32_t x353 = INT32_MAX;
uint8_t x370 = 17U;
int32_t x374 = -1;
uint8_t x382 = 46U;
volatile int32_t t77 = 1;
int8_t x386 = -21;
int64_t x387 = -306LL;
static volatile int32_t t78 = 1032639;
static int32_t x393 = -1;
static int64_t x403 = 3302169647529205935LL;
static volatile int64_t x404 = 93125LL;
int64_t x406 = -10466241598330LL;
int32_t x408 = INT32_MIN;
uint64_t x413 = 4235405LLU;
uint64_t x416 = 9569465090LLU;
int16_t x421 = 320;
int32_t x425 = INT32_MIN;
int32_t t87 = 18114359;
volatile int32_t t89 = -331;
static int32_t x449 = -1;
static int16_t x450 = INT16_MAX;
int32_t t91 = 31;
int32_t x457 = -515769;
static volatile int32_t x459 = -1462119;
static uint16_t x461 = 3762U;
int16_t x464 = INT16_MIN;
int64_t x470 = 2LL;
static uint64_t x471 = 31666848716006329LLU;
int16_t x472 = 25;
static uint8_t x490 = UINT8_MAX;
uint64_t x491 = 13287698LLU;
static volatile int64_t x492 = 13736465793LL;
volatile uint8_t x502 = 10U;
int32_t x506 = 0;
int64_t x508 = INT64_MAX;
int32_t t100 = 67449862;
int16_t x509 = INT16_MIN;
volatile int32_t t101 = 1;
static int64_t x530 = -85010559240LL;
int32_t t106 = 59155423;
int32_t x545 = -1;
volatile int32_t t108 = -187827;
static uint16_t x557 = 64U;
int16_t x558 = INT16_MIN;
static uint8_t x561 = UINT8_MAX;
int32_t x565 = INT32_MAX;
int16_t x567 = INT16_MAX;
static int64_t x568 = INT64_MIN;
int8_t x573 = 1;
static int16_t x574 = -1;
uint32_t x576 = 8U;
static uint8_t x588 = UINT8_MAX;
static int32_t x593 = INT32_MIN;
uint64_t x594 = 35947975798LLU;
int8_t x600 = INT8_MIN;
static uint64_t x602 = 8771888998320LLU;
volatile int32_t t119 = -15;
volatile int32_t t121 = -4;
int16_t x613 = -1015;
volatile int32_t x614 = -1;
static volatile int32_t t122 = -457417;
static volatile int32_t x618 = INT32_MIN;
volatile int16_t x623 = INT16_MIN;
int32_t t124 = 62;
int8_t x633 = INT8_MIN;
static volatile int16_t x637 = -1;
int8_t x653 = -1;
volatile int64_t x656 = -11181LL;
int32_t t131 = 21;
int64_t x664 = -1LL;
volatile int32_t x686 = -1;
uint64_t x689 = 1181LLU;
int32_t t137 = 94;
volatile int32_t t139 = 26;
int64_t x709 = INT64_MIN;
uint16_t x711 = 2020U;
uint32_t x715 = 35568151U;
volatile int32_t t142 = 1;
int64_t x721 = -1LL;
uint64_t x739 = 33660LLU;
volatile uint32_t x749 = 1340677U;
static int8_t x755 = INT8_MAX;
int32_t x756 = INT32_MIN;
static volatile int32_t t149 = -125811;
int8_t x760 = 24;
int16_t x761 = INT16_MAX;
static int16_t x766 = INT16_MIN;
int64_t x784 = INT64_MAX;
int16_t x791 = INT16_MIN;
static int32_t x796 = -1;
int64_t x797 = INT64_MIN;
int32_t x798 = INT32_MAX;
int64_t x802 = INT64_MAX;
volatile int32_t t159 = -50127388;
uint64_t x813 = 435616529LLU;
static int32_t x819 = INT32_MIN;
volatile uint64_t x834 = UINT64_MAX;
static volatile int64_t x835 = -1LL;
int32_t x840 = INT32_MAX;
volatile int32_t t165 = 1371;
uint32_t x844 = 104128U;
int32_t x845 = 4299053;
int16_t x865 = -240;
int8_t x871 = 0;
static uint64_t x874 = UINT64_MAX;
int16_t x880 = -1;
volatile int32_t t175 = 185148;
int64_t x888 = INT64_MIN;
int8_t x891 = -29;
int8_t x892 = -4;
int32_t t177 = 7;
int32_t t178 = -3114789;
int64_t x897 = -1182592309407328348LL;
int8_t x904 = INT8_MIN;
uint8_t x912 = 13U;
uint32_t x924 = 44087805U;
int32_t t185 = 113;
int64_t x946 = INT64_MAX;
volatile int64_t x947 = INT64_MAX;
uint8_t x955 = 7U;
volatile int32_t t188 = 2392;
volatile int32_t t189 = -58190;
int16_t x961 = -973;
int16_t x966 = INT16_MIN;
int16_t x977 = -1;
uint16_t x979 = 100U;
uint32_t x981 = 1338U;
int16_t x999 = INT16_MIN;
int32_t x1000 = INT32_MIN;
int64_t x1004 = INT64_MAX;


void f0(void) {
    	uint64_t x1 = 204832LLU;
	static uint64_t x3 = 2284323215567901676LLU;
	volatile int32_t t0 = 396675922;

    t0 = (((x1+x2)-x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	uint16_t x6 = 1U;
	static uint8_t x7 = UINT8_MAX;
	int32_t t1 = 91373;

    t1 = (((x5+x6)-x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int16_t x10 = -40;
	static int16_t x12 = -1;
	volatile int32_t t2 = -469254;

    t2 = (((x9+x10)-x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = 165088;
	uint64_t x14 = 11419LLU;
	int64_t x15 = 2397LL;
	static uint8_t x16 = 50U;

    t3 = (((x13+x14)-x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	volatile int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	int32_t t4 = -9899;

    t4 = (((x17+x18)-x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x22 = UINT8_MAX;
	int8_t x23 = INT8_MAX;
	int8_t x24 = -1;
	static int32_t t5 = -25061;

    t5 = (((x21+x22)-x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	int64_t x26 = 0LL;
	static int32_t t6 = 350;

    t6 = (((x25+x26)-x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = -20;
	volatile int16_t x31 = 6;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = 2767374;

    t7 = (((x29+x30)-x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 3902U;
	int64_t x34 = 0LL;
	int16_t x35 = 783;
	static volatile int32_t x36 = -1;
	static volatile int32_t t8 = -1178;

    t8 = (((x33+x34)-x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	int64_t x38 = -1LL;
	int8_t x39 = -1;
	int8_t x40 = INT8_MIN;
	static int32_t t9 = -6816376;

    t9 = (((x37+x38)-x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = 14814U;
	int8_t x46 = -1;
	static int8_t x47 = -1;
	int32_t x48 = -1;
	volatile int32_t t10 = -437246001;

    t10 = (((x45+x46)-x47)==x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x50 = INT64_MAX;
	uint32_t x51 = 337251U;
	int64_t x52 = INT64_MAX;
	int32_t t11 = 65690911;

    t11 = (((x49+x50)-x51)==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 1829196705805LLU;
	uint32_t x54 = UINT32_MAX;
	uint16_t x55 = 1U;
	int64_t x56 = 2792112004056822LL;
	int32_t t12 = 776500181;

    t12 = (((x53+x54)-x55)==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x58 = INT32_MIN;
	int8_t x60 = -1;
	volatile int32_t t13 = 18463;

    t13 = (((x57+x58)-x59)==x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x61 = 1932U;
	int8_t x62 = INT8_MIN;
	static int32_t x63 = INT32_MAX;
	int16_t x64 = INT16_MAX;
	static int32_t t14 = 3840;

    t14 = (((x61+x62)-x63)==x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x77 = -1;
	int32_t x79 = INT32_MIN;
	static uint16_t x80 = UINT16_MAX;

    t15 = (((x77+x78)-x79)==x80);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x83 = 29358974LLU;
	volatile uint8_t x84 = 8U;
	volatile int32_t t16 = 279595138;

    t16 = (((x81+x82)-x83)==x84);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x90 = INT8_MIN;
	int64_t x91 = INT64_MAX;
	int32_t x92 = INT32_MIN;
	static int32_t t17 = 0;

    t17 = (((x89+x90)-x91)==x92);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x93 = INT8_MIN;
	uint32_t x94 = 1784188035U;
	static int32_t x95 = INT32_MIN;
	static volatile int32_t t18 = 94681194;

    t18 = (((x93+x94)-x95)==x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x98 = INT8_MIN;
	int16_t x99 = 0;
	int8_t x100 = -1;
	static volatile int32_t t19 = -110;

    t19 = (((x97+x98)-x99)==x100);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x101 = 49LLU;
	volatile int8_t x103 = INT8_MAX;
	static int64_t x104 = -164093LL;
	static int32_t t20 = 31;

    t20 = (((x101+x102)-x103)==x104);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x109 = -127LL;
	uint32_t x110 = 9941426U;
	volatile int8_t x111 = INT8_MAX;
	uint64_t x112 = 19090021694LLU;
	volatile int32_t t21 = 1;

    t21 = (((x109+x110)-x111)==x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x113 = INT16_MIN;
	static int32_t x114 = INT32_MAX;
	int64_t x115 = 1251520282LL;
	static int32_t x116 = -10364;
	int32_t t22 = 6;

    t22 = (((x113+x114)-x115)==x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x117 = 5U;
	uint8_t x118 = 2U;
	int16_t x119 = -1;
	int8_t x120 = -1;
	static volatile int32_t t23 = 507762091;

    t23 = (((x117+x118)-x119)==x120);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x121 = 1U;
	volatile uint64_t x122 = UINT64_MAX;
	int16_t x123 = -63;
	static int32_t x124 = INT32_MAX;
	int32_t t24 = 81396993;

    t24 = (((x121+x122)-x123)==x124);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x126 = UINT64_MAX;
	uint8_t x127 = 12U;
	int8_t x128 = -24;

    t25 = (((x125+x126)-x127)==x128);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x133 = INT16_MAX;
	int16_t x135 = -7;
	uint64_t x136 = 472362LLU;

    t26 = (((x133+x134)-x135)==x136);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x138 = -1;
	uint32_t x139 = 441U;
	static int16_t x140 = INT16_MIN;
	int32_t t27 = -1518;

    t27 = (((x137+x138)-x139)==x140);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x141 = -1049;
	uint8_t x142 = 5U;
	volatile uint32_t x143 = 129692545U;
	int16_t x144 = INT16_MIN;

    t28 = (((x141+x142)-x143)==x144);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x145 = -1;
	volatile uint16_t x147 = UINT16_MAX;
	uint8_t x148 = 2U;
	int32_t t29 = 43538;

    t29 = (((x145+x146)-x147)==x148);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x153 = 508U;
	int8_t x154 = INT8_MIN;
	int32_t x155 = -1;
	int64_t x156 = INT64_MIN;

    t30 = (((x153+x154)-x155)==x156);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x157 = 31LL;
	int16_t x159 = INT16_MAX;
	int32_t x160 = 149370;

    t31 = (((x157+x158)-x159)==x160);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x165 = 137U;
	uint8_t x166 = 3U;
	static int16_t x168 = -1;

    t32 = (((x165+x166)-x167)==x168);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x169 = 53;
	uint16_t x171 = 0U;
	uint32_t x172 = 495966992U;

    t33 = (((x169+x170)-x171)==x172);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x173 = UINT64_MAX;
	int8_t x174 = INT8_MIN;
	uint8_t x175 = UINT8_MAX;
	static uint32_t x176 = 161013121U;
	volatile int32_t t34 = 2;

    t34 = (((x173+x174)-x175)==x176);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x177 = INT16_MIN;
	int16_t x178 = INT16_MIN;
	uint32_t x179 = 344910U;
	static uint32_t x180 = UINT32_MAX;
	int32_t t35 = -1;

    t35 = (((x177+x178)-x179)==x180);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x181 = 193129228271LLU;
	volatile int64_t x182 = INT64_MAX;
	uint8_t x183 = UINT8_MAX;
	volatile uint32_t x184 = 880898431U;
	volatile int32_t t36 = 1;

    t36 = (((x181+x182)-x183)==x184);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x185 = 1;
	uint64_t x186 = 178854651904789LLU;
	volatile uint32_t x187 = 465084712U;
	int8_t x188 = 1;

    t37 = (((x185+x186)-x187)==x188);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x189 = -177198381;
	static volatile uint8_t x190 = UINT8_MAX;
	uint8_t x191 = UINT8_MAX;
	int32_t t38 = -123722;

    t38 = (((x189+x190)-x191)==x192);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x193 = -1;
	static int16_t x194 = -1;
	volatile int64_t x195 = 19898750812071175LL;
	uint64_t x196 = 1588664621962007156LLU;
	volatile int32_t t39 = 47901;

    t39 = (((x193+x194)-x195)==x196);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x201 = 1599393617719651LL;
	int32_t x202 = INT32_MAX;
	volatile int32_t x203 = INT32_MAX;
	volatile uint8_t x204 = 5U;

    t40 = (((x201+x202)-x203)==x204);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x206 = 7U;
	volatile uint32_t x207 = 44071U;
	static uint8_t x208 = 111U;
	volatile int32_t t41 = 125;

    t41 = (((x205+x206)-x207)==x208);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x209 = 373U;
	static int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MIN;
	int16_t x212 = 33;
	volatile int32_t t42 = -335;

    t42 = (((x209+x210)-x211)==x212);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint32_t x221 = UINT32_MAX;
	volatile uint16_t x222 = UINT16_MAX;
	volatile int8_t x223 = INT8_MAX;
	uint32_t x224 = 1331034944U;

    t43 = (((x221+x222)-x223)==x224);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	uint8_t x230 = UINT8_MAX;
	uint16_t x231 = UINT16_MAX;
	int32_t x232 = 5602193;
	int32_t t44 = -14391;

    t44 = (((x229+x230)-x231)==x232);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x239 = INT8_MIN;
	int16_t x240 = 1;
	int32_t t45 = 6286;

    t45 = (((x237+x238)-x239)==x240);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x241 = INT32_MIN;
	uint8_t x242 = UINT8_MAX;
	int32_t x243 = INT32_MIN;
	uint64_t x244 = 8679253092LLU;
	static int32_t t46 = 60982;

    t46 = (((x241+x242)-x243)==x244);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x245 = -1;
	static uint32_t x246 = 98U;
	volatile int32_t x248 = -1979;
	int32_t t47 = -21049943;

    t47 = (((x245+x246)-x247)==x248);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x250 = -1;
	int16_t x251 = INT16_MIN;
	int32_t t48 = 18;

    t48 = (((x249+x250)-x251)==x252);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x253 = 6;
	static volatile int16_t x254 = INT16_MAX;
	int16_t x256 = INT16_MIN;
	volatile int32_t t49 = 297;

    t49 = (((x253+x254)-x255)==x256);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MAX;
	int8_t x260 = INT8_MIN;

    t50 = (((x257+x258)-x259)==x260);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x261 = 0;
	int8_t x263 = INT8_MAX;
	static int8_t x264 = -20;
	int32_t t51 = 6;

    t51 = (((x261+x262)-x263)==x264);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x265 = UINT32_MAX;
	uint16_t x266 = 60U;
	int8_t x268 = INT8_MAX;
	int32_t t52 = -35;

    t52 = (((x265+x266)-x267)==x268);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x270 = 149202U;
	int32_t x271 = -264262932;
	static volatile int32_t t53 = 44;

    t53 = (((x269+x270)-x271)==x272);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x274 = UINT32_MAX;
	uint8_t x275 = 83U;
	int64_t x276 = INT64_MAX;
	int32_t t54 = 3;

    t54 = (((x273+x274)-x275)==x276);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x277 = 6;
	uint64_t x279 = 6899800LLU;
	uint8_t x280 = 115U;
	int32_t t55 = -6457;

    t55 = (((x277+x278)-x279)==x280);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x281 = -525464;
	int16_t x282 = INT16_MAX;
	static int16_t x283 = 9;
	volatile int8_t x284 = INT8_MAX;
	volatile int32_t t56 = -43492;

    t56 = (((x281+x282)-x283)==x284);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x285 = 2561221650LLU;
	uint8_t x286 = UINT8_MAX;
	int16_t x287 = INT16_MIN;
	static int8_t x288 = INT8_MIN;

    t57 = (((x285+x286)-x287)==x288);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x289 = UINT64_MAX;
	int16_t x290 = INT16_MIN;
	int16_t x291 = 342;
	static volatile int8_t x292 = -14;
	volatile int32_t t58 = -95420;

    t58 = (((x289+x290)-x291)==x292);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x297 = -493;
	volatile int64_t x298 = 97073416117317LL;
	int32_t t59 = -55580950;

    t59 = (((x297+x298)-x299)==x300);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x302 = INT16_MIN;
	volatile uint64_t x303 = 266727005016LLU;
	volatile int32_t x304 = 24015659;
	volatile int32_t t60 = 90281545;

    t60 = (((x301+x302)-x303)==x304);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x306 = 7857342814LLU;
	static volatile int64_t x307 = INT64_MIN;
	static int32_t t61 = -49617330;

    t61 = (((x305+x306)-x307)==x308);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x309 = UINT16_MAX;
	int8_t x311 = 27;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t62 = 6176;

    t62 = (((x309+x310)-x311)==x312);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x313 = INT16_MAX;
	int8_t x314 = INT8_MAX;
	uint16_t x315 = UINT16_MAX;
	uint8_t x316 = 27U;

    t63 = (((x313+x314)-x315)==x316);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x317 = -1;
	int64_t x318 = -266582LL;
	volatile uint64_t x319 = 22042662700LLU;
	volatile int16_t x320 = 564;

    t64 = (((x317+x318)-x319)==x320);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x321 = 0U;
	static int16_t x322 = -229;
	int32_t x323 = -1;
	int8_t x324 = INT8_MIN;
	volatile int32_t t65 = -74805;

    t65 = (((x321+x322)-x323)==x324);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x325 = 38U;
	uint64_t x326 = UINT64_MAX;
	static volatile int64_t x327 = -798LL;
	uint64_t x328 = UINT64_MAX;
	int32_t t66 = -1257562;

    t66 = (((x325+x326)-x327)==x328);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x330 = 564LLU;
	int64_t x331 = 618601LL;
	int64_t x332 = INT64_MAX;

    t67 = (((x329+x330)-x331)==x332);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x333 = INT16_MAX;
	static volatile uint64_t x334 = 3386LLU;
	int32_t x335 = -998;
	volatile int32_t t68 = -532777671;

    t68 = (((x333+x334)-x335)==x336);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x341 = INT32_MIN;
	static uint8_t x342 = 2U;
	int8_t x343 = -3;
	volatile uint64_t x344 = UINT64_MAX;

    t69 = (((x341+x342)-x343)==x344);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x348 = INT16_MAX;
	static volatile int32_t t70 = -1986;

    t70 = (((x345+x346)-x347)==x348);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x354 = INT16_MIN;
	int16_t x355 = 3408;
	static volatile int64_t x356 = INT64_MAX;
	volatile int32_t t71 = 56;

    t71 = (((x353+x354)-x355)==x356);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x361 = INT16_MIN;
	uint64_t x362 = 2971LLU;
	int64_t x363 = INT64_MAX;
	uint16_t x364 = UINT16_MAX;
	int32_t t72 = 1310443;

    t72 = (((x361+x362)-x363)==x364);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x365 = -5;
	uint16_t x366 = 3U;
	int8_t x367 = INT8_MIN;
	int32_t x368 = -1;
	static int32_t t73 = -4699;

    t73 = (((x365+x366)-x367)==x368);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x369 = 2U;
	int8_t x371 = INT8_MAX;
	uint64_t x372 = 0LLU;
	volatile int32_t t74 = -38;

    t74 = (((x369+x370)-x371)==x372);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x373 = 6446;
	int64_t x375 = INT64_MAX;
	volatile int32_t x376 = INT32_MIN;
	int32_t t75 = 22832380;

    t75 = (((x373+x374)-x375)==x376);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x377 = 5U;
	static uint32_t x378 = 72023U;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = -1;
	volatile int32_t t76 = 31174220;

    t76 = (((x377+x378)-x379)==x380);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x381 = -16246;
	uint8_t x383 = 0U;
	volatile int16_t x384 = INT16_MIN;

    t77 = (((x381+x382)-x383)==x384);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x385 = -1;
	static uint8_t x388 = 0U;

    t78 = (((x385+x386)-x387)==x388);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x394 = 6376832528LLU;
	uint64_t x395 = UINT64_MAX;
	int32_t x396 = INT32_MAX;
	int32_t t79 = 685454727;

    t79 = (((x393+x394)-x395)==x396);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x401 = -210501LL;
	int16_t x402 = INT16_MAX;
	static volatile int32_t t80 = 328212;

    t80 = (((x401+x402)-x403)==x404);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint64_t x405 = 1470446LLU;
	uint16_t x407 = 0U;
	volatile int32_t t81 = -149944;

    t81 = (((x405+x406)-x407)==x408);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x409 = INT16_MIN;
	uint16_t x410 = 7619U;
	int64_t x411 = -1LL;
	int64_t x412 = INT64_MAX;
	volatile int32_t t82 = 290221;

    t82 = (((x409+x410)-x411)==x412);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x414 = INT64_MIN;
	int16_t x415 = -6856;
	int32_t t83 = 96282340;

    t83 = (((x413+x414)-x415)==x416);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x417 = INT16_MIN;
	static int64_t x418 = INT64_MAX;
	static uint8_t x419 = 6U;
	static int8_t x420 = 6;
	volatile int32_t t84 = 380009;

    t84 = (((x417+x418)-x419)==x420);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x422 = 4;
	uint64_t x423 = UINT64_MAX;
	int8_t x424 = 23;
	static volatile int32_t t85 = 236141095;

    t85 = (((x421+x422)-x423)==x424);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x426 = INT64_MAX;
	static int8_t x427 = INT8_MIN;
	int64_t x428 = INT64_MIN;
	volatile int32_t t86 = 27833;

    t86 = (((x425+x426)-x427)==x428);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x429 = INT64_MIN;
	uint32_t x430 = 7344U;
	int16_t x431 = -1;
	int8_t x432 = INT8_MIN;

    t87 = (((x429+x430)-x431)==x432);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x433 = -1;
	volatile uint32_t x434 = 1U;
	static int64_t x435 = -1LL;
	int8_t x436 = INT8_MIN;
	int32_t t88 = 798774822;

    t88 = (((x433+x434)-x435)==x436);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x441 = 7U;
	volatile uint16_t x442 = UINT16_MAX;
	int64_t x443 = INT64_MAX;
	volatile int32_t x444 = INT32_MIN;

    t89 = (((x441+x442)-x443)==x444);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x445 = INT32_MIN;
	volatile uint64_t x446 = 8126546797105042LLU;
	int16_t x447 = INT16_MIN;
	int8_t x448 = 3;
	static int32_t t90 = -50838;

    t90 = (((x445+x446)-x447)==x448);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x451 = -4560LL;
	int8_t x452 = INT8_MAX;

    t91 = (((x449+x450)-x451)==x452);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x458 = -1;
	int32_t x460 = -1;
	volatile int32_t t92 = 15931;

    t92 = (((x457+x458)-x459)==x460);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x462 = -30725097;
	int8_t x463 = -1;
	int32_t t93 = 16345869;

    t93 = (((x461+x462)-x463)==x464);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x469 = 8U;
	volatile int32_t t94 = -264545091;

    t94 = (((x469+x470)-x471)==x472);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x473 = INT16_MIN;
	int8_t x474 = 0;
	uint32_t x475 = 14101146U;
	int8_t x476 = -26;
	static int32_t t95 = 14;

    t95 = (((x473+x474)-x475)==x476);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x485 = UINT32_MAX;
	int32_t x486 = INT32_MIN;
	int64_t x487 = INT64_MAX;
	int8_t x488 = 0;
	volatile int32_t t96 = -67541876;

    t96 = (((x485+x486)-x487)==x488);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x489 = 1U;
	volatile int32_t t97 = 242899317;

    t97 = (((x489+x490)-x491)==x492);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x497 = INT32_MIN;
	volatile uint8_t x498 = 52U;
	uint8_t x499 = 1U;
	volatile int64_t x500 = INT64_MIN;
	volatile int32_t t98 = 58;

    t98 = (((x497+x498)-x499)==x500);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x501 = INT16_MIN;
	int64_t x503 = -1009809865LL;
	static int8_t x504 = 7;
	static int32_t t99 = -2144;

    t99 = (((x501+x502)-x503)==x504);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x505 = 254U;
	uint64_t x507 = 961LLU;

    t100 = (((x505+x506)-x507)==x508);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x510 = 127789305928LLU;
	int8_t x511 = -1;
	static volatile int64_t x512 = -1LL;

    t101 = (((x509+x510)-x511)==x512);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x513 = 0U;
	int32_t x514 = -3650;
	int16_t x515 = 1503;
	volatile int8_t x516 = INT8_MAX;
	static volatile int32_t t102 = 2;

    t102 = (((x513+x514)-x515)==x516);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x521 = INT8_MAX;
	uint16_t x522 = 6833U;
	static int8_t x523 = INT8_MAX;
	uint8_t x524 = 3U;
	int32_t t103 = -57272;

    t103 = (((x521+x522)-x523)==x524);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x529 = 1U;
	uint32_t x531 = 27U;
	uint8_t x532 = 99U;
	int32_t t104 = 567;

    t104 = (((x529+x530)-x531)==x532);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x533 = 1U;
	int64_t x534 = -1LL;
	volatile int16_t x535 = 0;
	static uint32_t x536 = 8168U;
	int32_t t105 = -1;

    t105 = (((x533+x534)-x535)==x536);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x541 = -1;
	volatile uint32_t x542 = UINT32_MAX;
	int8_t x543 = INT8_MAX;
	volatile int64_t x544 = INT64_MAX;

    t106 = (((x541+x542)-x543)==x544);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x546 = -3;
	volatile int16_t x547 = -1;
	static int64_t x548 = 0LL;
	static volatile int32_t t107 = 0;

    t107 = (((x545+x546)-x547)==x548);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x553 = -18810227;
	uint8_t x554 = 5U;
	uint16_t x555 = UINT16_MAX;
	uint32_t x556 = 533U;

    t108 = (((x553+x554)-x555)==x556);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x559 = UINT8_MAX;
	volatile int8_t x560 = INT8_MAX;
	volatile int32_t t109 = 0;

    t109 = (((x557+x558)-x559)==x560);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x562 = 52U;
	uint8_t x563 = 3U;
	volatile int16_t x564 = -1;
	int32_t t110 = -54303878;

    t110 = (((x561+x562)-x563)==x564);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x566 = -1;
	volatile int32_t t111 = -1;

    t111 = (((x565+x566)-x567)==x568);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x569 = UINT16_MAX;
	uint8_t x570 = 8U;
	int32_t x571 = INT32_MAX;
	int32_t x572 = INT32_MIN;
	volatile int32_t t112 = 853199;

    t112 = (((x569+x570)-x571)==x572);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x575 = INT8_MIN;
	int32_t t113 = -10;

    t113 = (((x573+x574)-x575)==x576);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x577 = 96U;
	int16_t x578 = INT16_MIN;
	int8_t x579 = -11;
	volatile uint64_t x580 = 5LLU;
	volatile int32_t t114 = -11638600;

    t114 = (((x577+x578)-x579)==x580);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint8_t x581 = UINT8_MAX;
	int8_t x582 = INT8_MIN;
	int64_t x583 = 8435189450454690LL;
	static volatile uint8_t x584 = 3U;
	int32_t t115 = 58505;

    t115 = (((x581+x582)-x583)==x584);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x585 = -1;
	static uint8_t x586 = UINT8_MAX;
	uint16_t x587 = 3U;
	int32_t t116 = -12497;

    t116 = (((x585+x586)-x587)==x588);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x595 = 2361U;
	int64_t x596 = INT64_MAX;
	static volatile int32_t t117 = -720;

    t117 = (((x593+x594)-x595)==x596);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x597 = INT64_MIN;
	uint64_t x598 = 973228756637LLU;
	int8_t x599 = 12;
	volatile int32_t t118 = 0;

    t118 = (((x597+x598)-x599)==x600);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint64_t x601 = 286399056835777963LLU;
	int64_t x603 = INT64_MIN;
	int8_t x604 = 1;

    t119 = (((x601+x602)-x603)==x604);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x605 = INT16_MIN;
	static volatile uint8_t x606 = 29U;
	volatile uint64_t x607 = UINT64_MAX;
	int64_t x608 = -4424359327457633LL;
	int32_t t120 = -114;

    t120 = (((x605+x606)-x607)==x608);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x609 = -1LL;
	uint32_t x610 = 18604U;
	int32_t x611 = -7;
	int64_t x612 = 287452235690LL;

    t121 = (((x609+x610)-x611)==x612);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x615 = INT8_MIN;
	int16_t x616 = -1;

    t122 = (((x613+x614)-x615)==x616);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x617 = INT16_MAX;
	uint32_t x619 = 300U;
	int16_t x620 = -14692;
	volatile int32_t t123 = 1805;

    t123 = (((x617+x618)-x619)==x620);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x621 = -17LL;
	int16_t x622 = INT16_MIN;
	uint32_t x624 = 293U;

    t124 = (((x621+x622)-x623)==x624);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x629 = 559318U;
	int64_t x630 = INT64_MIN;
	int16_t x631 = INT16_MAX;
	int8_t x632 = INT8_MAX;
	int32_t t125 = 11845244;

    t125 = (((x629+x630)-x631)==x632);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x634 = 76280252521LLU;
	int16_t x635 = INT16_MIN;
	int32_t x636 = -80196119;
	int32_t t126 = -4;

    t126 = (((x633+x634)-x635)==x636);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x638 = 4664;
	volatile int16_t x639 = -1;
	static int32_t x640 = INT32_MIN;
	volatile int32_t t127 = 2999786;

    t127 = (((x637+x638)-x639)==x640);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x641 = 55U;
	uint32_t x642 = 36U;
	static int8_t x643 = 13;
	uint16_t x644 = UINT16_MAX;
	volatile int32_t t128 = 0;

    t128 = (((x641+x642)-x643)==x644);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x645 = INT64_MIN;
	uint64_t x646 = 8365LLU;
	int16_t x647 = 2;
	static int32_t x648 = 188031;
	int32_t t129 = -5;

    t129 = (((x645+x646)-x647)==x648);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x649 = UINT32_MAX;
	int32_t x650 = INT32_MIN;
	static int8_t x651 = INT8_MAX;
	static int64_t x652 = -1LL;
	static volatile int32_t t130 = -1063;

    t130 = (((x649+x650)-x651)==x652);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x654 = INT16_MIN;
	int16_t x655 = INT16_MIN;

    t131 = (((x653+x654)-x655)==x656);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x657 = INT32_MIN;
	int16_t x658 = 2110;
	uint64_t x659 = UINT64_MAX;
	uint32_t x660 = 4U;
	static volatile int32_t t132 = -1060999562;

    t132 = (((x657+x658)-x659)==x660);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x661 = INT16_MAX;
	static int8_t x662 = 1;
	int16_t x663 = INT16_MIN;
	int32_t t133 = -6955;

    t133 = (((x661+x662)-x663)==x664);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x669 = UINT64_MAX;
	uint64_t x670 = 36854450LLU;
	uint64_t x671 = 16015328182LLU;
	int64_t x672 = -1092300018155LL;
	int32_t t134 = -18278;

    t134 = (((x669+x670)-x671)==x672);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x673 = 0;
	static int32_t x674 = INT32_MAX;
	static int8_t x675 = 0;
	uint8_t x676 = 2U;
	volatile int32_t t135 = -58811949;

    t135 = (((x673+x674)-x675)==x676);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x685 = 7U;
	int16_t x687 = INT16_MIN;
	static uint64_t x688 = 3629LLU;
	int32_t t136 = -20;

    t136 = (((x685+x686)-x687)==x688);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x690 = INT32_MAX;
	volatile uint32_t x691 = 93915724U;
	uint16_t x692 = 74U;

    t137 = (((x689+x690)-x691)==x692);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x693 = UINT32_MAX;
	static int32_t x694 = -1;
	volatile int32_t x695 = -1;
	uint8_t x696 = 13U;
	int32_t t138 = 3703129;

    t138 = (((x693+x694)-x695)==x696);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x705 = -239;
	static uint32_t x706 = 22792249U;
	int16_t x707 = -1;
	static volatile int64_t x708 = 35LL;

    t139 = (((x705+x706)-x707)==x708);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x710 = 731863454U;
	volatile int8_t x712 = INT8_MIN;
	volatile int32_t t140 = 1;

    t140 = (((x709+x710)-x711)==x712);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x713 = 0;
	int64_t x714 = 32728323609LL;
	int32_t x716 = -38523026;
	int32_t t141 = -1066194897;

    t141 = (((x713+x714)-x715)==x716);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x717 = UINT64_MAX;
	int64_t x718 = INT64_MIN;
	uint32_t x719 = 256719U;
	uint64_t x720 = 1847170776916772360LLU;

    t142 = (((x717+x718)-x719)==x720);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x722 = INT8_MIN;
	static uint16_t x723 = 82U;
	int8_t x724 = INT8_MIN;
	static volatile int32_t t143 = -187559693;

    t143 = (((x721+x722)-x723)==x724);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x725 = -1;
	uint32_t x726 = 2359674U;
	uint16_t x727 = 3701U;
	uint64_t x728 = 1577363753005426LLU;
	static int32_t t144 = -20968735;

    t144 = (((x725+x726)-x727)==x728);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x737 = 5207LL;
	int8_t x738 = -1;
	uint64_t x740 = 1LLU;
	volatile int32_t t145 = 0;

    t145 = (((x737+x738)-x739)==x740);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x741 = INT8_MIN;
	int8_t x742 = INT8_MIN;
	volatile int64_t x743 = INT64_MIN;
	static int16_t x744 = INT16_MAX;
	volatile int32_t t146 = -11;

    t146 = (((x741+x742)-x743)==x744);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x745 = -1;
	int8_t x746 = INT8_MIN;
	uint8_t x747 = 45U;
	uint64_t x748 = 2181163352580770LLU;
	volatile int32_t t147 = 22899756;

    t147 = (((x745+x746)-x747)==x748);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x750 = 11690401U;
	static int32_t x751 = INT32_MAX;
	int16_t x752 = INT16_MIN;
	static volatile int32_t t148 = -2;

    t148 = (((x749+x750)-x751)==x752);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x753 = UINT8_MAX;
	int8_t x754 = INT8_MIN;

    t149 = (((x753+x754)-x755)==x756);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x757 = UINT8_MAX;
	volatile int16_t x758 = -8;
	uint64_t x759 = UINT64_MAX;
	int32_t t150 = 675620;

    t150 = (((x757+x758)-x759)==x760);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x762 = UINT16_MAX;
	int8_t x763 = INT8_MAX;
	int16_t x764 = 12927;
	int32_t t151 = -92622;

    t151 = (((x761+x762)-x763)==x764);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x765 = -7412;
	int64_t x767 = -1LL;
	int16_t x768 = INT16_MAX;
	static volatile int32_t t152 = -1;

    t152 = (((x765+x766)-x767)==x768);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x777 = -1;
	uint64_t x778 = 79424143LLU;
	int8_t x779 = -2;
	uint8_t x780 = 123U;
	volatile int32_t t153 = -27494;

    t153 = (((x777+x778)-x779)==x780);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x781 = -11110249577889929LL;
	uint64_t x782 = 1401209722079866LLU;
	uint64_t x783 = 8272209590LLU;
	int32_t t154 = 437476;

    t154 = (((x781+x782)-x783)==x784);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x789 = UINT16_MAX;
	int32_t x790 = 323794642;
	int32_t x792 = INT32_MAX;
	int32_t t155 = -4021;

    t155 = (((x789+x790)-x791)==x792);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x793 = 24U;
	uint32_t x794 = 36446142U;
	static int32_t x795 = INT32_MIN;
	int32_t t156 = -7;

    t156 = (((x793+x794)-x795)==x796);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x799 = UINT8_MAX;
	int8_t x800 = -63;
	static volatile int32_t t157 = -9523;

    t157 = (((x797+x798)-x799)==x800);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x801 = -1;
	volatile int32_t x803 = -1;
	int32_t x804 = INT32_MIN;
	volatile int32_t t158 = 15700174;

    t158 = (((x801+x802)-x803)==x804);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x805 = -1;
	int16_t x806 = -1;
	uint8_t x807 = UINT8_MAX;
	static volatile int64_t x808 = INT64_MIN;

    t159 = (((x805+x806)-x807)==x808);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x814 = 1U;
	int64_t x815 = INT64_MIN;
	uint8_t x816 = 10U;
	volatile int32_t t160 = -67206807;

    t160 = (((x813+x814)-x815)==x816);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x817 = -11569;
	volatile int16_t x818 = INT16_MIN;
	static volatile int16_t x820 = INT16_MAX;
	int32_t t161 = -15004;

    t161 = (((x817+x818)-x819)==x820);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x821 = UINT64_MAX;
	uint16_t x822 = 26U;
	uint8_t x823 = 112U;
	int32_t x824 = INT32_MIN;
	volatile int32_t t162 = 254081;

    t162 = (((x821+x822)-x823)==x824);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x829 = -49;
	uint64_t x830 = 11521146858434LLU;
	uint16_t x831 = 4U;
	volatile uint8_t x832 = UINT8_MAX;
	volatile int32_t t163 = 725;

    t163 = (((x829+x830)-x831)==x832);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x833 = -1;
	int16_t x836 = INT16_MAX;
	volatile int32_t t164 = 2569580;

    t164 = (((x833+x834)-x835)==x836);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x837 = -22;
	static uint8_t x838 = 46U;
	int16_t x839 = 118;

    t165 = (((x837+x838)-x839)==x840);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x841 = 50349U;
	uint8_t x842 = UINT8_MAX;
	int64_t x843 = 59LL;
	static int32_t t166 = -118672693;

    t166 = (((x841+x842)-x843)==x844);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x846 = 43;
	volatile int8_t x847 = INT8_MIN;
	static volatile int64_t x848 = -15285633914378419LL;
	volatile int32_t t167 = 10361411;

    t167 = (((x845+x846)-x847)==x848);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x849 = 1408119;
	int8_t x850 = INT8_MAX;
	static uint8_t x851 = 1U;
	static uint32_t x852 = 138957252U;
	static volatile int32_t t168 = -14;

    t168 = (((x849+x850)-x851)==x852);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x853 = INT32_MIN;
	uint64_t x854 = UINT64_MAX;
	volatile uint64_t x855 = 119322450420909LLU;
	static volatile int32_t x856 = -1;
	int32_t t169 = 8134;

    t169 = (((x853+x854)-x855)==x856);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x857 = UINT8_MAX;
	uint16_t x858 = UINT16_MAX;
	static int16_t x859 = INT16_MIN;
	int8_t x860 = -1;
	volatile int32_t t170 = 191;

    t170 = (((x857+x858)-x859)==x860);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x866 = -9118352712923911LL;
	int16_t x867 = -2;
	int8_t x868 = 23;
	static int32_t t171 = 135;

    t171 = (((x865+x866)-x867)==x868);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x869 = 1U;
	int16_t x870 = -380;
	int64_t x872 = INT64_MIN;
	static int32_t t172 = 5329324;

    t172 = (((x869+x870)-x871)==x872);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x873 = -1LL;
	int64_t x875 = INT64_MIN;
	uint32_t x876 = 0U;
	int32_t t173 = 983010012;

    t173 = (((x873+x874)-x875)==x876);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x877 = 14396061048678LL;
	uint16_t x878 = 3U;
	int64_t x879 = -1LL;
	int32_t t174 = -2;

    t174 = (((x877+x878)-x879)==x880);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x881 = INT8_MIN;
	uint8_t x882 = UINT8_MAX;
	int16_t x883 = 1;
	int16_t x884 = INT16_MAX;

    t175 = (((x881+x882)-x883)==x884);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x885 = -1LL;
	uint64_t x886 = UINT64_MAX;
	static int64_t x887 = INT64_MIN;
	volatile int32_t t176 = -1274490;

    t176 = (((x885+x886)-x887)==x888);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x889 = INT32_MAX;
	int64_t x890 = 68709251568469817LL;

    t177 = (((x889+x890)-x891)==x892);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x893 = 245652890830240298LLU;
	int32_t x894 = -1;
	uint64_t x895 = UINT64_MAX;
	static volatile int16_t x896 = -2;

    t178 = (((x893+x894)-x895)==x896);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x898 = -4132LL;
	uint16_t x899 = 42U;
	static uint16_t x900 = 15733U;
	static int32_t t179 = 0;

    t179 = (((x897+x898)-x899)==x900);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x901 = INT8_MIN;
	static uint8_t x902 = 61U;
	uint32_t x903 = 7792U;
	static volatile int32_t t180 = 63960863;

    t180 = (((x901+x902)-x903)==x904);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x909 = INT8_MIN;
	uint64_t x910 = UINT64_MAX;
	int8_t x911 = INT8_MAX;
	volatile int32_t t181 = -556956;

    t181 = (((x909+x910)-x911)==x912);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x913 = 2U;
	int8_t x914 = INT8_MIN;
	static int32_t x915 = -1;
	int64_t x916 = 4204394762473965LL;
	volatile int32_t t182 = 6285939;

    t182 = (((x913+x914)-x915)==x916);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x921 = 2910370202LLU;
	uint16_t x922 = UINT16_MAX;
	static volatile int32_t x923 = 100097;
	volatile int32_t t183 = -25;

    t183 = (((x921+x922)-x923)==x924);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x929 = UINT16_MAX;
	volatile int8_t x930 = INT8_MIN;
	volatile int8_t x931 = INT8_MIN;
	int8_t x932 = -1;
	int32_t t184 = 240265;

    t184 = (((x929+x930)-x931)==x932);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x941 = 3U;
	int64_t x942 = INT64_MIN;
	int32_t x943 = INT32_MIN;
	static int32_t x944 = -117617568;

    t185 = (((x941+x942)-x943)==x944);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x945 = INT64_MIN;
	static uint32_t x948 = UINT32_MAX;
	int32_t t186 = -3;

    t186 = (((x945+x946)-x947)==x948);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x949 = INT32_MIN;
	static uint16_t x950 = UINT16_MAX;
	int8_t x951 = -1;
	static int32_t x952 = -1;
	static volatile int32_t t187 = -61136684;

    t187 = (((x949+x950)-x951)==x952);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x953 = -3;
	int8_t x954 = INT8_MIN;
	int32_t x956 = INT32_MIN;

    t188 = (((x953+x954)-x955)==x956);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x957 = UINT32_MAX;
	uint8_t x958 = UINT8_MAX;
	volatile int16_t x959 = 4;
	static int64_t x960 = INT64_MIN;

    t189 = (((x957+x958)-x959)==x960);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x962 = 346381354416223561LLU;
	int8_t x963 = INT8_MAX;
	int16_t x964 = INT16_MIN;
	static int32_t t190 = 0;

    t190 = (((x961+x962)-x963)==x964);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x965 = UINT16_MAX;
	volatile int8_t x967 = 1;
	uint16_t x968 = UINT16_MAX;
	int32_t t191 = 3537;

    t191 = (((x965+x966)-x967)==x968);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x973 = -1;
	volatile int32_t x974 = -144271754;
	volatile int8_t x975 = INT8_MAX;
	int64_t x976 = -30031LL;
	int32_t t192 = -1008317572;

    t192 = (((x973+x974)-x975)==x976);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x978 = 15U;
	uint32_t x980 = 8U;
	static int32_t t193 = 246;

    t193 = (((x977+x978)-x979)==x980);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x982 = 9943;
	uint64_t x983 = UINT64_MAX;
	uint32_t x984 = 3324U;
	volatile int32_t t194 = -115;

    t194 = (((x981+x982)-x983)==x984);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x985 = INT16_MAX;
	volatile int16_t x986 = INT16_MIN;
	static volatile int16_t x987 = INT16_MIN;
	int16_t x988 = INT16_MAX;
	static volatile int32_t t195 = -8322;

    t195 = (((x985+x986)-x987)==x988);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x997 = -1;
	uint16_t x998 = UINT16_MAX;
	int32_t t196 = 3445;

    t196 = (((x997+x998)-x999)==x1000);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1001 = 23125701751LL;
	int16_t x1002 = -1;
	int32_t x1003 = -830;
	static int32_t t197 = -167;

    t197 = (((x1001+x1002)-x1003)==x1004);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1009 = 3966705481227145LLU;
	uint16_t x1010 = 13U;
	uint16_t x1011 = 1U;
	static int16_t x1012 = 1;
	int32_t t198 = 336;

    t198 = (((x1009+x1010)-x1011)==x1012);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x1013 = 1U;
	int16_t x1014 = 77;
	static uint16_t x1015 = 7U;
	int16_t x1016 = -1;
	static int32_t t199 = -116;

    t199 = (((x1013+x1014)-x1015)==x1016);

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

