
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

static int8_t x1 = -1;
int8_t x5 = INT8_MIN;
int32_t t1 = 8023;
int32_t t5 = -176244;
volatile uint64_t x36 = 282450243780810278LLU;
uint32_t x38 = UINT32_MAX;
uint16_t x39 = 1U;
static uint32_t x42 = 71231U;
volatile uint32_t x43 = UINT32_MAX;
int32_t x47 = -1;
uint64_t x48 = UINT64_MAX;
static volatile int32_t x49 = 1337;
uint16_t x54 = 23U;
int32_t x69 = 973382226;
uint8_t x71 = 1U;
int64_t x77 = 3LL;
uint32_t x82 = UINT32_MAX;
volatile int32_t t15 = -23878;
int32_t x100 = INT32_MIN;
static uint16_t x117 = 346U;
static volatile int64_t x121 = -39516989216LL;
volatile int16_t x124 = INT16_MIN;
volatile int32_t t22 = -515;
volatile int32_t x133 = -1;
static int16_t x137 = INT16_MIN;
volatile uint32_t x139 = 4U;
int32_t x146 = 1503639;
static uint16_t x158 = 4U;
uint32_t x159 = UINT32_MAX;
uint64_t x182 = UINT64_MAX;
int32_t t32 = 396;
int32_t x185 = INT32_MIN;
int32_t t33 = 36857269;
static int32_t x196 = INT32_MAX;
int8_t x206 = INT8_MIN;
int8_t x207 = INT8_MIN;
volatile int32_t x211 = INT32_MAX;
int16_t x212 = -1;
static int64_t x216 = -24864LL;
int8_t x220 = 1;
static int32_t t39 = -11235571;
int32_t t41 = -8996;
int32_t t42 = 66616090;
volatile int8_t x252 = INT8_MIN;
int32_t x258 = INT32_MAX;
int8_t x259 = INT8_MAX;
static int8_t x262 = -1;
int32_t x263 = -3;
static uint8_t x264 = 6U;
static int32_t x266 = 0;
int32_t t49 = 10228;
uint32_t x277 = 188398U;
int32_t x278 = -1;
int16_t x281 = INT16_MAX;
volatile int8_t x288 = 59;
int64_t x289 = -1LL;
static uint64_t x293 = UINT64_MAX;
int32_t t55 = 4235;
uint8_t x302 = UINT8_MAX;
static volatile int32_t x303 = 5478016;
int16_t x308 = -103;
volatile int32_t t57 = 17234169;
int16_t x309 = INT16_MIN;
static int8_t x317 = -1;
int16_t x332 = 533;
int32_t t61 = -6400;
int16_t x333 = -810;
volatile int32_t x351 = -1;
static int8_t x353 = -1;
int32_t t68 = 57452916;
volatile int32_t x364 = INT32_MAX;
int32_t t70 = -11;
uint64_t x372 = UINT64_MAX;
int32_t t71 = -75948726;
int8_t x386 = 0;
int64_t x388 = -1LL;
uint32_t x389 = 1700575U;
uint16_t x391 = 31U;
int32_t t76 = 8665827;
uint8_t x397 = UINT8_MAX;
volatile int32_t t77 = -11547115;
uint32_t x403 = 16605U;
volatile int32_t t78 = -1;
uint16_t x410 = 1U;
uint64_t x412 = 136473071471044892LLU;
int64_t x416 = INT64_MIN;
volatile int64_t x429 = INT64_MIN;
static uint32_t x431 = UINT32_MAX;
int32_t x432 = 1;
volatile int32_t t84 = 43966;
uint16_t x437 = 435U;
int32_t x438 = INT32_MIN;
static uint16_t x440 = 35U;
volatile int8_t x442 = -1;
int32_t x461 = INT32_MAX;
uint8_t x464 = 1U;
int64_t x466 = -11LL;
volatile int16_t x469 = -1;
int8_t x475 = -49;
int16_t x476 = -1;
int32_t t92 = -8814;
uint8_t x477 = 100U;
uint64_t x480 = 102882712488741654LLU;
volatile int32_t t93 = -15;
volatile int32_t x481 = -7645;
int16_t x483 = 1957;
static uint16_t x486 = 1U;
int16_t x496 = -1;
static int8_t x498 = INT8_MAX;
int8_t x500 = -1;
volatile uint8_t x507 = 49U;
int32_t t98 = -8;
uint32_t x519 = 80U;
int32_t t99 = 2;
volatile uint16_t x530 = 58U;
int64_t x535 = 2181LL;
uint8_t x539 = 3U;
volatile uint32_t x543 = 3U;
int16_t x549 = -548;
uint64_t x552 = 7352LLU;
int16_t x562 = -4;
uint8_t x564 = 7U;
int16_t x568 = -1;
static int32_t t110 = -1098;
int32_t t111 = 24242;
volatile uint64_t x573 = 57391287LLU;
int16_t x580 = INT16_MIN;
static uint32_t x604 = 1442068806U;
volatile int16_t x607 = INT16_MIN;
uint8_t x614 = UINT8_MAX;
static int64_t x615 = INT64_MIN;
int64_t x645 = INT64_MIN;
int16_t x652 = 93;
uint8_t x659 = UINT8_MAX;
volatile int16_t x660 = -7;
int16_t x668 = INT16_MIN;
uint16_t x671 = UINT16_MAX;
int16_t x683 = INT16_MIN;
static int8_t x689 = 51;
volatile uint64_t x695 = 329728031624LLU;
int32_t t135 = -14;
uint64_t x704 = 2510365847LLU;
static int32_t t140 = 257107;
int32_t t141 = 43425;
volatile uint8_t x742 = 1U;
static int64_t x748 = -3484252047441491LL;
volatile int32_t t144 = 78;
int64_t x756 = INT64_MIN;
uint8_t x760 = 3U;
volatile int32_t t147 = -5333;
uint16_t x762 = UINT16_MAX;
int64_t x771 = INT64_MAX;
int32_t x772 = -1;
volatile uint8_t x782 = 44U;
int32_t x785 = 249590521;
static int32_t t153 = -191;
int16_t x790 = INT16_MIN;
uint32_t x792 = UINT32_MAX;
volatile int32_t t154 = -690;
uint16_t x796 = 0U;
volatile uint32_t x801 = UINT32_MAX;
int8_t x803 = -1;
uint64_t x818 = 232411741805652527LLU;
int16_t x820 = 169;
int32_t t159 = 2664664;
uint32_t x823 = 2U;
int32_t x825 = -2352;
int32_t t161 = -32;
volatile int32_t t163 = -669684;
volatile int32_t t164 = 109224;
uint16_t x853 = UINT16_MAX;
int16_t x855 = 43;
static uint32_t x856 = UINT32_MAX;
volatile uint16_t x858 = UINT16_MAX;
uint64_t x859 = 12798LLU;
uint8_t x871 = 103U;
volatile int32_t t170 = 0;
uint8_t x876 = UINT8_MAX;
int32_t t171 = -852;
static int32_t x894 = INT32_MAX;
static int8_t x896 = INT8_MIN;
uint16_t x898 = UINT16_MAX;
static int16_t x902 = -30;
static uint64_t x904 = 1561281443874LLU;
int32_t x905 = -1;
static int32_t x906 = 15087471;
volatile int64_t x917 = 10099LL;
volatile int32_t x918 = 424618;
int16_t x920 = INT16_MAX;
int32_t t178 = -220;
uint16_t x931 = 25U;
static uint32_t x932 = 339106U;
int8_t x937 = -1;
uint16_t x940 = 2046U;
int32_t x947 = -1;
int32_t x954 = -195;
int32_t x955 = INT32_MIN;
static volatile uint32_t x960 = 935512U;
int16_t x965 = -1;
int64_t x973 = -1LL;
uint64_t x998 = 89411LLU;
int32_t x1013 = INT32_MIN;
static int32_t x1024 = -1;
static int32_t t197 = -90;


void f0(void) {
    	static uint32_t x2 = 1840886601U;
	static uint64_t x3 = 5084409402770104LLU;
	static uint32_t x4 = 1370327287U;
	int32_t t0 = -1259483;

    t0 = ((x1+x2)==(x3+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	static int8_t x7 = INT8_MIN;
	int32_t x8 = -601135;

    t1 = ((x5+x6)==(x7+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	volatile int16_t x10 = INT16_MIN;
	volatile uint64_t x11 = 4168792LLU;
	static volatile int8_t x12 = INT8_MIN;
	int32_t t2 = -279282;

    t2 = ((x9+x10)==(x11+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = -1;
	static int32_t x18 = -1;
	int64_t x19 = INT64_MIN;
	volatile int16_t x20 = 148;
	volatile int32_t t3 = 3406397;

    t3 = ((x17+x18)==(x19+x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = INT16_MAX;
	uint8_t x26 = 19U;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MAX;
	int32_t t4 = -77402207;

    t4 = ((x25+x26)==(x27+x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = INT16_MIN;
	volatile int32_t x30 = 30951915;
	static volatile int8_t x31 = INT8_MIN;
	int8_t x32 = 14;

    t5 = ((x29+x30)==(x31+x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x33 = INT16_MAX;
	int16_t x34 = INT16_MIN;
	int16_t x35 = -1;
	int32_t t6 = 88936;

    t6 = ((x33+x34)==(x35+x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = -29189544;
	static volatile int64_t x40 = -1768773324348706LL;
	volatile int32_t t7 = 25;

    t7 = ((x37+x38)==(x39+x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x41 = 63U;
	uint16_t x44 = 0U;
	int32_t t8 = 29707;

    t8 = ((x41+x42)==(x43+x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x45 = -1;
	volatile uint64_t x46 = UINT64_MAX;
	volatile int32_t t9 = 107056;

    t9 = ((x45+x46)==(x47+x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x50 = INT16_MAX;
	int16_t x51 = -1;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t10 = 7729;

    t10 = ((x49+x50)==(x51+x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x53 = INT64_MIN;
	volatile int16_t x55 = INT16_MAX;
	volatile uint8_t x56 = 121U;
	int32_t t11 = 60811;

    t11 = ((x53+x54)==(x55+x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x65 = -1;
	uint32_t x66 = 30U;
	int8_t x67 = INT8_MAX;
	static int32_t x68 = -1;
	int32_t t12 = 308529665;

    t12 = ((x65+x66)==(x67+x68));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x70 = 2;
	uint16_t x72 = 12U;
	int32_t t13 = -100607743;

    t13 = ((x69+x70)==(x71+x72));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x78 = 0U;
	int16_t x79 = 0;
	int16_t x80 = INT16_MIN;
	int32_t t14 = -6;

    t14 = ((x77+x78)==(x79+x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x81 = -1;
	uint32_t x83 = UINT32_MAX;
	uint16_t x84 = 6U;

    t15 = ((x81+x82)==(x83+x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x97 = 53571238399LL;
	static int8_t x98 = 1;
	uint16_t x99 = UINT16_MAX;
	int32_t t16 = -12;

    t16 = ((x97+x98)==(x99+x100));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x101 = 1687910952580815LLU;
	volatile int64_t x102 = -30LL;
	static volatile uint32_t x103 = UINT32_MAX;
	int64_t x104 = INT64_MIN;
	volatile int32_t t17 = 22085376;

    t17 = ((x101+x102)==(x103+x104));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x113 = 3520085LL;
	int8_t x114 = INT8_MIN;
	int8_t x115 = 10;
	uint16_t x116 = 4U;
	volatile int32_t t18 = -70;

    t18 = ((x113+x114)==(x115+x116));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x118 = 17U;
	volatile uint16_t x119 = 2984U;
	static int16_t x120 = INT16_MIN;
	int32_t t19 = -6780691;

    t19 = ((x117+x118)==(x119+x120));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x122 = 133025534256LLU;
	static volatile int8_t x123 = -4;
	int32_t t20 = 933642330;

    t20 = ((x121+x122)==(x123+x124));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x125 = -1LL;
	static int8_t x126 = INT8_MIN;
	static int8_t x127 = 1;
	static int8_t x128 = INT8_MIN;
	int32_t t21 = 468321;

    t21 = ((x125+x126)==(x127+x128));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x129 = 1U;
	int32_t x130 = INT32_MIN;
	uint8_t x131 = 1U;
	int8_t x132 = INT8_MAX;

    t22 = ((x129+x130)==(x131+x132));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x134 = INT16_MIN;
	static int64_t x135 = INT64_MIN;
	volatile int64_t x136 = 178301458297LL;
	volatile int32_t t23 = -213;

    t23 = ((x133+x134)==(x135+x136));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x138 = INT32_MAX;
	uint64_t x140 = 37865LLU;
	volatile int32_t t24 = -841;

    t24 = ((x137+x138)==(x139+x140));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x141 = -16;
	int8_t x142 = -1;
	int64_t x143 = -399402LL;
	int64_t x144 = -1LL;
	static int32_t t25 = 828;

    t25 = ((x141+x142)==(x143+x144));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x145 = INT8_MIN;
	static int64_t x147 = -1LL;
	static int32_t x148 = -14;
	volatile int32_t t26 = -1414163;

    t26 = ((x145+x146)==(x147+x148));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x149 = -1;
	volatile uint8_t x150 = UINT8_MAX;
	uint8_t x151 = 60U;
	int8_t x152 = -1;
	int32_t t27 = 6396;

    t27 = ((x149+x150)==(x151+x152));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x157 = 1842U;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t28 = 725;

    t28 = ((x157+x158)==(x159+x160));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x161 = INT32_MIN;
	uint64_t x162 = UINT64_MAX;
	static volatile uint64_t x163 = 1LLU;
	int16_t x164 = INT16_MIN;
	int32_t t29 = -146416913;

    t29 = ((x161+x162)==(x163+x164));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x169 = UINT8_MAX;
	volatile int8_t x170 = -1;
	int32_t x171 = INT32_MIN;
	uint8_t x172 = 108U;
	static volatile int32_t t30 = 145;

    t30 = ((x169+x170)==(x171+x172));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MIN;
	int16_t x175 = -1;
	static int16_t x176 = INT16_MIN;
	int32_t t31 = -15174;

    t31 = ((x173+x174)==(x175+x176));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x181 = INT64_MAX;
	uint16_t x183 = 17U;
	static uint64_t x184 = UINT64_MAX;

    t32 = ((x181+x182)==(x183+x184));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x186 = 3056U;
	static uint8_t x187 = 121U;
	int8_t x188 = INT8_MIN;

    t33 = ((x185+x186)==(x187+x188));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x189 = 17U;
	uint8_t x190 = UINT8_MAX;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;
	volatile int32_t t34 = 1;

    t34 = ((x189+x190)==(x191+x192));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x193 = 80257U;
	uint64_t x194 = 189388096509862132LLU;
	static int16_t x195 = -32;
	int32_t t35 = -32648;

    t35 = ((x193+x194)==(x195+x196));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x205 = INT16_MIN;
	volatile uint64_t x208 = 96172428267LLU;
	volatile int32_t t36 = 6076123;

    t36 = ((x205+x206)==(x207+x208));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x209 = 1170719LLU;
	uint8_t x210 = 13U;
	int32_t t37 = 21468;

    t37 = ((x209+x210)==(x211+x212));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x213 = 1174U;
	uint16_t x214 = 3U;
	uint8_t x215 = 0U;
	int32_t t38 = -763489902;

    t38 = ((x213+x214)==(x215+x216));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x217 = UINT32_MAX;
	static int16_t x218 = -1;
	int8_t x219 = INT8_MIN;

    t39 = ((x217+x218)==(x219+x220));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x229 = 117123LLU;
	volatile int64_t x230 = INT64_MIN;
	int64_t x231 = INT64_MAX;
	int8_t x232 = -1;
	int32_t t40 = 487;

    t40 = ((x229+x230)==(x231+x232));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x233 = 2031U;
	uint16_t x234 = 2115U;
	volatile uint32_t x235 = 2U;
	int64_t x236 = INT64_MIN;

    t41 = ((x233+x234)==(x235+x236));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x241 = 308LLU;
	static uint32_t x242 = UINT32_MAX;
	static int8_t x243 = INT8_MIN;
	static volatile int64_t x244 = INT64_MAX;

    t42 = ((x241+x242)==(x243+x244));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x249 = INT16_MIN;
	int16_t x250 = 2;
	volatile int16_t x251 = -2;
	static int32_t t43 = 1;

    t43 = ((x249+x250)==(x251+x252));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x253 = -5878;
	int64_t x254 = INT64_MAX;
	static volatile uint8_t x255 = 21U;
	uint64_t x256 = 11036043742180LLU;
	static volatile int32_t t44 = 1;

    t44 = ((x253+x254)==(x255+x256));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x257 = -1;
	static int8_t x260 = INT8_MIN;
	volatile int32_t t45 = 104629;

    t45 = ((x257+x258)==(x259+x260));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x261 = 7;
	volatile int32_t t46 = -118;

    t46 = ((x261+x262)==(x263+x264));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x265 = UINT16_MAX;
	static int32_t x267 = INT32_MIN;
	int64_t x268 = INT64_MAX;
	volatile int32_t t47 = -438;

    t47 = ((x265+x266)==(x267+x268));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x269 = INT64_MIN;
	static uint64_t x270 = 2302326126780307205LLU;
	static volatile uint64_t x271 = 28155LLU;
	int64_t x272 = INT64_MIN;
	volatile int32_t t48 = -125304032;

    t48 = ((x269+x270)==(x271+x272));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x273 = 15380;
	uint16_t x274 = 5U;
	int64_t x275 = -1LL;
	uint8_t x276 = 39U;

    t49 = ((x273+x274)==(x275+x276));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x279 = 888;
	static int64_t x280 = INT64_MIN;
	static volatile int32_t t50 = -193;

    t50 = ((x277+x278)==(x279+x280));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x282 = 2065U;
	static uint32_t x283 = 3184U;
	int64_t x284 = INT64_MIN;
	int32_t t51 = 10736;

    t51 = ((x281+x282)==(x283+x284));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x285 = 4969U;
	volatile uint16_t x286 = 1721U;
	uint16_t x287 = 80U;
	int32_t t52 = 6650920;

    t52 = ((x285+x286)==(x287+x288));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x290 = INT32_MIN;
	volatile int16_t x291 = INT16_MIN;
	uint64_t x292 = 2148939952244272LLU;
	int32_t t53 = -25641395;

    t53 = ((x289+x290)==(x291+x292));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x294 = INT16_MAX;
	static uint16_t x295 = 924U;
	static int16_t x296 = -1;
	volatile int32_t t54 = 11;

    t54 = ((x293+x294)==(x295+x296));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x297 = INT16_MIN;
	int8_t x298 = 18;
	int32_t x299 = -14295;
	int64_t x300 = 3LL;

    t55 = ((x297+x298)==(x299+x300));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x301 = UINT16_MAX;
	int16_t x304 = INT16_MAX;
	int32_t t56 = -52683;

    t56 = ((x301+x302)==(x303+x304));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x305 = 1312;
	volatile int8_t x306 = INT8_MAX;
	uint8_t x307 = UINT8_MAX;

    t57 = ((x305+x306)==(x307+x308));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x310 = -1;
	uint64_t x311 = 2546204824LLU;
	volatile uint8_t x312 = 0U;
	int32_t t58 = 52;

    t58 = ((x309+x310)==(x311+x312));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x318 = INT8_MIN;
	volatile int64_t x319 = INT64_MAX;
	int64_t x320 = INT64_MIN;
	static int32_t t59 = -37635829;

    t59 = ((x317+x318)==(x319+x320));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x325 = UINT16_MAX;
	static int8_t x326 = -1;
	uint32_t x327 = UINT32_MAX;
	uint64_t x328 = 127352259LLU;
	int32_t t60 = 12189;

    t60 = ((x325+x326)==(x327+x328));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x329 = UINT16_MAX;
	int8_t x330 = INT8_MAX;
	int32_t x331 = INT32_MIN;

    t61 = ((x329+x330)==(x331+x332));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x334 = UINT64_MAX;
	volatile int8_t x335 = -6;
	static int8_t x336 = INT8_MIN;
	int32_t t62 = -301040;

    t62 = ((x333+x334)==(x335+x336));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x337 = 10;
	static int16_t x338 = -1;
	int64_t x339 = -3937208508025455713LL;
	static uint32_t x340 = 1919U;
	int32_t t63 = -1554588;

    t63 = ((x337+x338)==(x339+x340));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x341 = 258885964530991LLU;
	static uint64_t x342 = 20019068085LLU;
	int64_t x343 = INT64_MAX;
	int64_t x344 = INT64_MIN;
	static int32_t t64 = 806;

    t64 = ((x341+x342)==(x343+x344));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x345 = -1;
	uint64_t x346 = UINT64_MAX;
	int8_t x347 = INT8_MIN;
	static uint16_t x348 = UINT16_MAX;
	volatile int32_t t65 = -257064539;

    t65 = ((x345+x346)==(x347+x348));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x349 = -1;
	uint64_t x350 = UINT64_MAX;
	int64_t x352 = INT64_MAX;
	volatile int32_t t66 = 58171;

    t66 = ((x349+x350)==(x351+x352));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x354 = 2U;
	uint8_t x355 = UINT8_MAX;
	int16_t x356 = INT16_MAX;
	int32_t t67 = -65346;

    t67 = ((x353+x354)==(x355+x356));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint64_t x357 = 7410908653LLU;
	int8_t x358 = INT8_MAX;
	uint32_t x359 = 43174U;
	int8_t x360 = 2;

    t68 = ((x357+x358)==(x359+x360));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x361 = INT64_MIN;
	uint16_t x362 = 61U;
	int16_t x363 = -1322;
	int32_t t69 = 8;

    t69 = ((x361+x362)==(x363+x364));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x365 = 21;
	uint32_t x366 = UINT32_MAX;
	int64_t x367 = INT64_MAX;
	int64_t x368 = -1LL;

    t70 = ((x365+x366)==(x367+x368));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x369 = UINT8_MAX;
	static int64_t x370 = 25175136365246LL;
	static uint16_t x371 = 27730U;

    t71 = ((x369+x370)==(x371+x372));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x373 = -2600LL;
	volatile uint64_t x374 = 1279LLU;
	uint8_t x375 = 1U;
	int64_t x376 = INT64_MIN;
	volatile int32_t t72 = 1940;

    t72 = ((x373+x374)==(x375+x376));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x381 = -17890199283996227LL;
	uint16_t x382 = 4505U;
	int16_t x383 = -1;
	uint8_t x384 = UINT8_MAX;
	int32_t t73 = -66465;

    t73 = ((x381+x382)==(x383+x384));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x385 = 3U;
	uint64_t x387 = UINT64_MAX;
	static volatile int32_t t74 = -3;

    t74 = ((x385+x386)==(x387+x388));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x390 = INT8_MAX;
	int16_t x392 = -1;
	int32_t t75 = -1;

    t75 = ((x389+x390)==(x391+x392));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x393 = -1LL;
	volatile int32_t x394 = INT32_MIN;
	uint32_t x395 = 2U;
	int64_t x396 = INT64_MIN;

    t76 = ((x393+x394)==(x395+x396));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x398 = -6823414;
	uint32_t x399 = 6U;
	static int8_t x400 = INT8_MIN;

    t77 = ((x397+x398)==(x399+x400));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x401 = UINT32_MAX;
	int16_t x402 = INT16_MAX;
	int64_t x404 = INT64_MIN;

    t78 = ((x401+x402)==(x403+x404));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x409 = 0;
	uint16_t x411 = 1U;
	int32_t t79 = -641418434;

    t79 = ((x409+x410)==(x411+x412));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x413 = 203U;
	static int8_t x414 = -1;
	uint16_t x415 = 66U;
	static volatile int32_t t80 = -11902;

    t80 = ((x413+x414)==(x415+x416));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x417 = -1;
	uint64_t x418 = 678538240LLU;
	int64_t x419 = INT64_MIN;
	static uint8_t x420 = 14U;
	int32_t t81 = 82463;

    t81 = ((x417+x418)==(x419+x420));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x421 = -3;
	int32_t x422 = -1;
	volatile int8_t x423 = 7;
	int8_t x424 = -54;
	volatile int32_t t82 = -9207;

    t82 = ((x421+x422)==(x423+x424));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x425 = UINT8_MAX;
	int64_t x426 = INT64_MIN;
	volatile uint8_t x427 = 113U;
	int64_t x428 = INT64_MIN;
	int32_t t83 = -1;

    t83 = ((x425+x426)==(x427+x428));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x430 = 26432LLU;

    t84 = ((x429+x430)==(x431+x432));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x433 = INT32_MIN;
	uint8_t x434 = 24U;
	int16_t x435 = 1;
	int16_t x436 = INT16_MIN;
	int32_t t85 = -82;

    t85 = ((x433+x434)==(x435+x436));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint64_t x439 = 0LLU;
	static int32_t t86 = -12;

    t86 = ((x437+x438)==(x439+x440));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x441 = 9U;
	int64_t x443 = -1LL;
	uint32_t x444 = UINT32_MAX;
	volatile int32_t t87 = 1;

    t87 = ((x441+x442)==(x443+x444));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x445 = -90296885;
	uint64_t x446 = UINT64_MAX;
	static uint8_t x447 = 1U;
	uint64_t x448 = UINT64_MAX;
	int32_t t88 = -227;

    t88 = ((x445+x446)==(x447+x448));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x462 = INT8_MIN;
	volatile int64_t x463 = INT64_MIN;
	volatile int32_t t89 = -31;

    t89 = ((x461+x462)==(x463+x464));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x465 = -265647457;
	int64_t x467 = -1LL;
	volatile int16_t x468 = INT16_MIN;
	static volatile int32_t t90 = 1816367;

    t90 = ((x465+x466)==(x467+x468));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x470 = -1;
	volatile int8_t x471 = INT8_MIN;
	int32_t x472 = INT32_MAX;
	int32_t t91 = -599470;

    t91 = ((x469+x470)==(x471+x472));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x473 = INT16_MIN;
	volatile int8_t x474 = INT8_MAX;

    t92 = ((x473+x474)==(x475+x476));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x478 = UINT8_MAX;
	static uint8_t x479 = 1U;

    t93 = ((x477+x478)==(x479+x480));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x482 = -1LL;
	uint64_t x484 = 26515952858276172LLU;
	int32_t t94 = 0;

    t94 = ((x481+x482)==(x483+x484));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x485 = UINT64_MAX;
	uint16_t x487 = 0U;
	uint64_t x488 = 1651LLU;
	int32_t t95 = -914785;

    t95 = ((x485+x486)==(x487+x488));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x493 = UINT8_MAX;
	uint64_t x494 = UINT64_MAX;
	uint32_t x495 = 116115U;
	volatile int32_t t96 = -146989;

    t96 = ((x493+x494)==(x495+x496));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x497 = -503;
	uint16_t x499 = 0U;
	int32_t t97 = 244;

    t97 = ((x497+x498)==(x499+x500));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x505 = 4263;
	int32_t x506 = INT32_MIN;
	static int16_t x508 = -744;

    t98 = ((x505+x506)==(x507+x508));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x517 = -33180283;
	volatile int64_t x518 = INT64_MAX;
	volatile int16_t x520 = INT16_MAX;

    t99 = ((x517+x518)==(x519+x520));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x521 = 15U;
	int16_t x522 = -3813;
	int8_t x523 = INT8_MIN;
	uint32_t x524 = 46U;
	int32_t t100 = -219000707;

    t100 = ((x521+x522)==(x523+x524));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x525 = UINT8_MAX;
	int8_t x526 = -1;
	static uint16_t x527 = 1152U;
	static uint32_t x528 = 338846436U;
	volatile int32_t t101 = -252;

    t101 = ((x525+x526)==(x527+x528));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x529 = 98667538LL;
	volatile uint64_t x531 = 5024LLU;
	volatile int64_t x532 = INT64_MIN;
	volatile int32_t t102 = 2;

    t102 = ((x529+x530)==(x531+x532));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x533 = 4049891792351744857LLU;
	volatile int64_t x534 = INT64_MIN;
	volatile int32_t x536 = -1;
	int32_t t103 = -163059311;

    t103 = ((x533+x534)==(x535+x536));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x537 = 996U;
	int8_t x538 = -1;
	int32_t x540 = INT32_MIN;
	volatile int32_t t104 = -1;

    t104 = ((x537+x538)==(x539+x540));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x541 = UINT64_MAX;
	int64_t x542 = 2LL;
	static int64_t x544 = INT64_MIN;
	volatile int32_t t105 = -10782;

    t105 = ((x541+x542)==(x543+x544));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x545 = UINT64_MAX;
	int8_t x546 = INT8_MIN;
	int64_t x547 = -1LL;
	int16_t x548 = -1;
	volatile int32_t t106 = 150594124;

    t106 = ((x545+x546)==(x547+x548));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x550 = INT16_MAX;
	volatile int64_t x551 = INT64_MIN;
	int32_t t107 = 26665018;

    t107 = ((x549+x550)==(x551+x552));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x553 = INT32_MAX;
	volatile int16_t x554 = INT16_MIN;
	volatile int16_t x555 = -2;
	int8_t x556 = INT8_MIN;
	int32_t t108 = -4;

    t108 = ((x553+x554)==(x555+x556));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x561 = 301252818880322LLU;
	volatile int16_t x563 = INT16_MAX;
	volatile int32_t t109 = 1;

    t109 = ((x561+x562)==(x563+x564));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x565 = INT8_MAX;
	uint32_t x566 = UINT32_MAX;
	volatile uint8_t x567 = UINT8_MAX;

    t110 = ((x565+x566)==(x567+x568));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x569 = INT32_MAX;
	uint64_t x570 = UINT64_MAX;
	uint64_t x571 = 3663796117339LLU;
	volatile int64_t x572 = 34LL;

    t111 = ((x569+x570)==(x571+x572));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x574 = -1;
	uint16_t x575 = UINT16_MAX;
	uint8_t x576 = 22U;
	static int32_t t112 = -11101668;

    t112 = ((x573+x574)==(x575+x576));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x577 = 1607;
	int8_t x578 = INT8_MIN;
	static volatile int64_t x579 = INT64_MAX;
	volatile int32_t t113 = -11;

    t113 = ((x577+x578)==(x579+x580));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x585 = 715LLU;
	int8_t x586 = -1;
	uint32_t x587 = 128771U;
	int32_t x588 = -1;
	int32_t t114 = -190;

    t114 = ((x585+x586)==(x587+x588));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x593 = -1;
	static int64_t x594 = -4640265586LL;
	int8_t x595 = INT8_MIN;
	uint32_t x596 = 7434674U;
	int32_t t115 = 172854346;

    t115 = ((x593+x594)==(x595+x596));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x601 = 83U;
	int16_t x602 = INT16_MAX;
	static volatile uint32_t x603 = 1U;
	volatile int32_t t116 = 93553274;

    t116 = ((x601+x602)==(x603+x604));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x605 = INT8_MAX;
	uint8_t x606 = 103U;
	volatile uint16_t x608 = UINT16_MAX;
	int32_t t117 = -2875;

    t117 = ((x605+x606)==(x607+x608));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x609 = -1;
	uint32_t x610 = 12252U;
	int64_t x611 = INT64_MIN;
	uint32_t x612 = UINT32_MAX;
	static volatile int32_t t118 = -44412700;

    t118 = ((x609+x610)==(x611+x612));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x613 = 2U;
	int64_t x616 = 1956325826643LL;
	int32_t t119 = -5;

    t119 = ((x613+x614)==(x615+x616));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x617 = INT32_MAX;
	int32_t x618 = -233582;
	static int8_t x619 = -1;
	int32_t x620 = 4781755;
	int32_t t120 = 6204;

    t120 = ((x617+x618)==(x619+x620));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x621 = UINT32_MAX;
	uint64_t x622 = 4366052LLU;
	int8_t x623 = -51;
	int8_t x624 = 1;
	static int32_t t121 = -1890;

    t121 = ((x621+x622)==(x623+x624));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x629 = 998;
	int64_t x630 = -1LL;
	int16_t x631 = -1;
	int16_t x632 = -23;
	volatile int32_t t122 = -19848016;

    t122 = ((x629+x630)==(x631+x632));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x637 = 6U;
	static volatile int8_t x638 = 7;
	int8_t x639 = -61;
	uint32_t x640 = 29586U;
	volatile int32_t t123 = -61;

    t123 = ((x637+x638)==(x639+x640));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x646 = 15241189;
	int32_t x647 = 6264822;
	static volatile uint16_t x648 = 674U;
	int32_t t124 = 14899558;

    t124 = ((x645+x646)==(x647+x648));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x649 = INT32_MAX;
	int32_t x650 = -1;
	uint8_t x651 = 8U;
	volatile int32_t t125 = -7349432;

    t125 = ((x649+x650)==(x651+x652));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x653 = INT32_MIN;
	static uint16_t x654 = 24937U;
	uint64_t x655 = UINT64_MAX;
	volatile uint8_t x656 = 31U;
	int32_t t126 = 704;

    t126 = ((x653+x654)==(x655+x656));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x657 = -1;
	volatile int8_t x658 = -1;
	int32_t t127 = 212173;

    t127 = ((x657+x658)==(x659+x660));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x661 = -7997145;
	static int16_t x662 = INT16_MAX;
	int8_t x663 = 1;
	int64_t x664 = -1LL;
	static volatile int32_t t128 = -349;

    t128 = ((x661+x662)==(x663+x664));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x665 = INT16_MAX;
	int32_t x666 = -1;
	static int64_t x667 = -1LL;
	volatile int32_t t129 = 387894;

    t129 = ((x665+x666)==(x667+x668));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x669 = 1U;
	int64_t x670 = INT64_MIN;
	int32_t x672 = -1;
	volatile int32_t t130 = -18101727;

    t130 = ((x669+x670)==(x671+x672));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x673 = -1;
	volatile uint64_t x674 = UINT64_MAX;
	static int16_t x675 = INT16_MIN;
	int64_t x676 = -1LL;
	volatile int32_t t131 = 16028908;

    t131 = ((x673+x674)==(x675+x676));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x677 = -4;
	int64_t x678 = -26288351401473019LL;
	uint16_t x679 = 25U;
	uint32_t x680 = 44182U;
	int32_t t132 = -846262621;

    t132 = ((x677+x678)==(x679+x680));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x681 = 10U;
	int8_t x682 = 0;
	uint32_t x684 = 57649U;
	int32_t t133 = 504;

    t133 = ((x681+x682)==(x683+x684));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x690 = -3LL;
	int32_t x691 = -1;
	int64_t x692 = -1LL;
	int32_t t134 = -1;

    t134 = ((x689+x690)==(x691+x692));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x693 = UINT16_MAX;
	volatile int16_t x694 = -41;
	int16_t x696 = -4899;

    t135 = ((x693+x694)==(x695+x696));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x701 = INT64_MIN;
	volatile uint16_t x702 = 160U;
	uint32_t x703 = UINT32_MAX;
	static int32_t t136 = 2300;

    t136 = ((x701+x702)==(x703+x704));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x705 = -1;
	uint16_t x706 = UINT16_MAX;
	static uint8_t x707 = UINT8_MAX;
	uint32_t x708 = 475557249U;
	volatile int32_t t137 = -571731583;

    t137 = ((x705+x706)==(x707+x708));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MAX;
	volatile int64_t x715 = 13724734955905LL;
	int8_t x716 = -1;
	static volatile int32_t t138 = -2868201;

    t138 = ((x713+x714)==(x715+x716));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x717 = 630137;
	int16_t x718 = INT16_MIN;
	int8_t x719 = -1;
	int16_t x720 = INT16_MIN;
	volatile int32_t t139 = -1;

    t139 = ((x717+x718)==(x719+x720));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x725 = -1LL;
	volatile uint64_t x726 = UINT64_MAX;
	int64_t x727 = 530819545388LL;
	uint32_t x728 = 1646580U;

    t140 = ((x725+x726)==(x727+x728));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x733 = 1505U;
	uint8_t x734 = 0U;
	int64_t x735 = 4425860146LL;
	static volatile int8_t x736 = INT8_MIN;

    t141 = ((x733+x734)==(x735+x736));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x737 = INT8_MAX;
	static uint16_t x738 = UINT16_MAX;
	static volatile int8_t x739 = -4;
	static volatile int8_t x740 = 6;
	int32_t t142 = 7;

    t142 = ((x737+x738)==(x739+x740));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x741 = INT32_MIN;
	volatile uint32_t x743 = 617U;
	int16_t x744 = INT16_MIN;
	volatile int32_t t143 = 0;

    t143 = ((x741+x742)==(x743+x744));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x745 = -1LL;
	volatile uint16_t x746 = UINT16_MAX;
	int8_t x747 = 1;

    t144 = ((x745+x746)==(x747+x748));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x749 = -16438768315005LL;
	volatile uint8_t x750 = 1U;
	int64_t x751 = INT64_MIN;
	uint16_t x752 = 73U;
	volatile int32_t t145 = -1872989;

    t145 = ((x749+x750)==(x751+x752));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x753 = -1;
	volatile int8_t x754 = -4;
	int8_t x755 = INT8_MAX;
	int32_t t146 = -692;

    t146 = ((x753+x754)==(x755+x756));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x757 = -198;
	volatile int16_t x758 = -1;
	int16_t x759 = INT16_MIN;

    t147 = ((x757+x758)==(x759+x760));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x761 = INT32_MIN;
	volatile int64_t x763 = 908346749976138LL;
	int16_t x764 = -1;
	volatile int32_t t148 = 395;

    t148 = ((x761+x762)==(x763+x764));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x765 = INT32_MIN;
	uint32_t x766 = 5963U;
	static int16_t x767 = INT16_MIN;
	uint16_t x768 = 8410U;
	int32_t t149 = -229673830;

    t149 = ((x765+x766)==(x767+x768));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x769 = 3;
	int8_t x770 = INT8_MAX;
	int32_t t150 = 0;

    t150 = ((x769+x770)==(x771+x772));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x773 = 7;
	uint64_t x774 = 70394LLU;
	static int32_t x775 = -11111209;
	uint32_t x776 = 926U;
	static volatile int32_t t151 = 14;

    t151 = ((x773+x774)==(x775+x776));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x781 = INT64_MIN;
	int64_t x783 = INT64_MIN;
	volatile uint8_t x784 = 0U;
	int32_t t152 = 3684638;

    t152 = ((x781+x782)==(x783+x784));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x786 = -230;
	int32_t x787 = INT32_MIN;
	static volatile int64_t x788 = INT64_MAX;

    t153 = ((x785+x786)==(x787+x788));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x789 = 7;
	int64_t x791 = -1LL;

    t154 = ((x789+x790)==(x791+x792));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x793 = INT64_MIN;
	static uint8_t x794 = 6U;
	int64_t x795 = -1LL;
	int32_t t155 = -117872508;

    t155 = ((x793+x794)==(x795+x796));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x802 = INT32_MAX;
	uint32_t x804 = 1841944U;
	int32_t t156 = -631;

    t156 = ((x801+x802)==(x803+x804));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x809 = 123469098426LLU;
	static uint8_t x810 = UINT8_MAX;
	int16_t x811 = INT16_MIN;
	int8_t x812 = -1;
	int32_t t157 = 1066777192;

    t157 = ((x809+x810)==(x811+x812));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x813 = -1;
	volatile int32_t x814 = -365770;
	uint64_t x815 = 23568936517LLU;
	static int8_t x816 = INT8_MIN;
	int32_t t158 = -1802;

    t158 = ((x813+x814)==(x815+x816));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x817 = UINT64_MAX;
	static int8_t x819 = INT8_MIN;

    t159 = ((x817+x818)==(x819+x820));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x821 = 5U;
	uint8_t x822 = 75U;
	uint16_t x824 = 19180U;
	int32_t t160 = -5;

    t160 = ((x821+x822)==(x823+x824));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x826 = -26;
	int64_t x827 = -1LL;
	static uint64_t x828 = 521188606788LLU;

    t161 = ((x825+x826)==(x827+x828));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x833 = -3738;
	volatile int64_t x834 = INT64_MAX;
	int8_t x835 = INT8_MIN;
	int8_t x836 = 0;
	volatile int32_t t162 = -385522;

    t162 = ((x833+x834)==(x835+x836));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x837 = 2028U;
	volatile int32_t x838 = -1;
	static int64_t x839 = -1564LL;
	int8_t x840 = 1;

    t163 = ((x837+x838)==(x839+x840));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x841 = UINT16_MAX;
	static int16_t x842 = INT16_MIN;
	int64_t x843 = INT64_MIN;
	static uint8_t x844 = 2U;

    t164 = ((x841+x842)==(x843+x844));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x849 = 2973501293691943LLU;
	volatile int8_t x850 = INT8_MIN;
	static uint8_t x851 = 55U;
	int16_t x852 = -14;
	volatile int32_t t165 = -5114343;

    t165 = ((x849+x850)==(x851+x852));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x854 = -15;
	volatile int32_t t166 = -43574;

    t166 = ((x853+x854)==(x855+x856));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x857 = 358500720506LLU;
	static int64_t x860 = 30455LL;
	int32_t t167 = 6;

    t167 = ((x857+x858)==(x859+x860));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x861 = -1;
	static volatile int64_t x862 = INT64_MAX;
	int64_t x863 = -84236073LL;
	int64_t x864 = -33601155561LL;
	int32_t t168 = 80113;

    t168 = ((x861+x862)==(x863+x864));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x865 = 3603660828LLU;
	static int8_t x866 = -6;
	uint8_t x867 = 4U;
	volatile uint16_t x868 = UINT16_MAX;
	volatile int32_t t169 = 893;

    t169 = ((x865+x866)==(x867+x868));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x869 = -1;
	static int32_t x870 = 5;
	int8_t x872 = -15;

    t170 = ((x869+x870)==(x871+x872));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x873 = -1LL;
	int8_t x874 = INT8_MAX;
	uint64_t x875 = UINT64_MAX;

    t171 = ((x873+x874)==(x875+x876));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x877 = 4971U;
	static int32_t x878 = -1;
	int64_t x879 = 1LL;
	static int64_t x880 = INT64_MIN;
	volatile int32_t t172 = -1026675;

    t172 = ((x877+x878)==(x879+x880));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x881 = INT8_MAX;
	uint8_t x882 = 30U;
	int64_t x883 = -3297507069928159LL;
	uint8_t x884 = 11U;
	volatile int32_t t173 = -299133066;

    t173 = ((x881+x882)==(x883+x884));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x893 = 202298718625652LL;
	int64_t x895 = 1365556LL;
	volatile int32_t t174 = 7;

    t174 = ((x893+x894)==(x895+x896));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x897 = 2;
	int16_t x899 = INT16_MAX;
	int16_t x900 = INT16_MAX;
	volatile int32_t t175 = 4022799;

    t175 = ((x897+x898)==(x899+x900));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x901 = -1LL;
	uint64_t x903 = UINT64_MAX;
	int32_t t176 = 0;

    t176 = ((x901+x902)==(x903+x904));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x907 = 1;
	int64_t x908 = INT64_MIN;
	int32_t t177 = 5130;

    t177 = ((x905+x906)==(x907+x908));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x919 = UINT16_MAX;

    t178 = ((x917+x918)==(x919+x920));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x929 = INT8_MIN;
	int8_t x930 = -1;
	int32_t t179 = -27945905;

    t179 = ((x929+x930)==(x931+x932));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x938 = 4LLU;
	uint8_t x939 = UINT8_MAX;
	volatile int32_t t180 = -52;

    t180 = ((x937+x938)==(x939+x940));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x945 = 12895U;
	uint16_t x946 = UINT16_MAX;
	int8_t x948 = INT8_MIN;
	int32_t t181 = 6957;

    t181 = ((x945+x946)==(x947+x948));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x949 = -36;
	int16_t x950 = 200;
	int16_t x951 = INT16_MIN;
	int16_t x952 = INT16_MIN;
	int32_t t182 = 787408;

    t182 = ((x949+x950)==(x951+x952));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x953 = UINT64_MAX;
	uint16_t x956 = UINT16_MAX;
	int32_t t183 = -1448972;

    t183 = ((x953+x954)==(x955+x956));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x957 = 7;
	int64_t x958 = -1117619704645335LL;
	uint64_t x959 = 1123LLU;
	int32_t t184 = 116;

    t184 = ((x957+x958)==(x959+x960));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x961 = 30335545U;
	uint64_t x962 = UINT64_MAX;
	int8_t x963 = INT8_MAX;
	int8_t x964 = INT8_MAX;
	int32_t t185 = 173273;

    t185 = ((x961+x962)==(x963+x964));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x966 = UINT32_MAX;
	static uint8_t x967 = 15U;
	uint8_t x968 = 6U;
	int32_t t186 = -28841;

    t186 = ((x965+x966)==(x967+x968));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x969 = INT32_MAX;
	volatile uint32_t x970 = UINT32_MAX;
	int8_t x971 = INT8_MIN;
	int8_t x972 = INT8_MAX;
	volatile int32_t t187 = -197673307;

    t187 = ((x969+x970)==(x971+x972));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x974 = INT32_MIN;
	uint64_t x975 = UINT64_MAX;
	uint8_t x976 = 25U;
	volatile int32_t t188 = -521076090;

    t188 = ((x973+x974)==(x975+x976));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x981 = INT32_MIN;
	uint8_t x982 = UINT8_MAX;
	int32_t x983 = INT32_MIN;
	static int64_t x984 = -1LL;
	volatile int32_t t189 = 189;

    t189 = ((x981+x982)==(x983+x984));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x985 = -1LL;
	static int32_t x986 = INT32_MIN;
	int8_t x987 = INT8_MIN;
	uint16_t x988 = 7U;
	volatile int32_t t190 = -1635468;

    t190 = ((x985+x986)==(x987+x988));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x993 = -1;
	int64_t x994 = -451LL;
	static int32_t x995 = 812639555;
	volatile int8_t x996 = INT8_MIN;
	volatile int32_t t191 = -64956165;

    t191 = ((x993+x994)==(x995+x996));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x997 = INT32_MAX;
	static int8_t x999 = INT8_MIN;
	int64_t x1000 = -1LL;
	int32_t t192 = 186896261;

    t192 = ((x997+x998)==(x999+x1000));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1001 = INT32_MIN;
	uint32_t x1002 = 363041U;
	static int32_t x1003 = INT32_MIN;
	volatile uint16_t x1004 = UINT16_MAX;
	int32_t t193 = 22258;

    t193 = ((x1001+x1002)==(x1003+x1004));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1014 = UINT32_MAX;
	int64_t x1015 = INT64_MAX;
	volatile int32_t x1016 = -1;
	int32_t t194 = 1;

    t194 = ((x1013+x1014)==(x1015+x1016));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x1017 = INT16_MAX;
	volatile int16_t x1018 = INT16_MAX;
	uint32_t x1019 = 1U;
	int32_t x1020 = INT32_MIN;
	int32_t t195 = 2;

    t195 = ((x1017+x1018)==(x1019+x1020));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1021 = -1LL;
	int16_t x1022 = INT16_MIN;
	int16_t x1023 = -1;
	int32_t t196 = -12;

    t196 = ((x1021+x1022)==(x1023+x1024));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1025 = INT32_MIN;
	uint8_t x1026 = UINT8_MAX;
	volatile uint8_t x1027 = 36U;
	static int16_t x1028 = 12649;

    t197 = ((x1025+x1026)==(x1027+x1028));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1037 = -11;
	static volatile uint8_t x1038 = 13U;
	uint16_t x1039 = UINT16_MAX;
	static volatile uint16_t x1040 = 1U;
	volatile int32_t t198 = -7;

    t198 = ((x1037+x1038)==(x1039+x1040));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1045 = UINT64_MAX;
	int32_t x1046 = 59;
	int32_t x1047 = -1;
	uint16_t x1048 = 23U;
	int32_t t199 = -45759;

    t199 = ((x1045+x1046)==(x1047+x1048));

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

