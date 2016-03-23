
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

int8_t x12 = -3;
int64_t x26 = INT64_MIN;
uint8_t x36 = 7U;
uint64_t x51 = 34502LLU;
int16_t x52 = 12002;
uint8_t x57 = 3U;
volatile int16_t x58 = INT16_MIN;
uint8_t x59 = 1U;
int16_t x67 = INT16_MIN;
int32_t x69 = INT32_MIN;
volatile uint16_t x70 = UINT16_MAX;
static int32_t x77 = INT32_MIN;
volatile uint64_t t15 = 33671LLU;
volatile int16_t x83 = -1;
int16_t x85 = INT16_MIN;
int16_t x88 = 8030;
int64_t t17 = 6147533507LL;
int32_t x90 = -1;
static volatile int64_t t19 = 3975093726LL;
int32_t x97 = 2;
static uint8_t x105 = 3U;
int8_t x106 = INT8_MIN;
uint16_t x109 = UINT16_MAX;
uint16_t x110 = 1U;
uint64_t x111 = 1968LLU;
uint64_t t22 = 10435139712469019LLU;
int32_t x116 = -1;
int64_t t23 = -2871999968319476210LL;
int32_t x120 = 2594404;
uint64_t t30 = 16208765353876755LLU;
int16_t x150 = -1;
volatile int32_t x151 = 11535048;
int16_t x164 = -1;
int32_t t33 = -20767835;
uint16_t x167 = 2U;
volatile uint64_t t35 = 11LLU;
int8_t x181 = -29;
volatile int32_t x184 = -3;
int64_t t39 = -89638480184LL;
int64_t x194 = 1857362LL;
static int32_t x197 = -1;
uint32_t x198 = UINT32_MAX;
static volatile uint64_t x205 = 14213LLU;
static uint8_t x207 = 109U;
uint64_t t44 = 80896181628LLU;
int64_t t45 = 3698400LL;
int8_t x214 = -1;
int64_t t46 = -53579120165058916LL;
int32_t x227 = 3422;
int8_t x230 = -5;
int16_t x231 = -1;
int32_t x232 = -1;
int32_t t50 = 108;
int16_t x257 = -1;
static int64_t t55 = -1016782444825344674LL;
int32_t x265 = -6;
uint8_t x267 = 41U;
int32_t x271 = INT32_MIN;
int32_t x272 = INT32_MAX;
int32_t x277 = INT32_MAX;
int32_t t59 = -1;
static int16_t x283 = INT16_MAX;
volatile uint16_t x289 = 30110U;
volatile uint16_t x290 = UINT16_MAX;
int8_t x292 = 14;
volatile int32_t t62 = 65771;
int8_t x302 = -1;
int8_t x307 = -55;
int8_t x308 = INT8_MIN;
volatile uint64_t x309 = 63221LLU;
volatile int32_t x311 = INT32_MIN;
volatile uint64_t t65 = 27943LLU;
int32_t x314 = -9400969;
int64_t x320 = -6149749993415LL;
static int32_t x323 = -2;
uint16_t x325 = 556U;
int8_t x328 = INT8_MIN;
uint32_t t69 = 667528U;
uint32_t t71 = 85U;
volatile uint64_t t72 = 25812375LLU;
static uint16_t x344 = 27U;
int16_t x350 = -21;
static int64_t t75 = 1125475972030LL;
static uint8_t x354 = 9U;
volatile uint64_t t76 = 2975LLU;
volatile int64_t t77 = 949355405529774LL;
uint8_t x364 = 1U;
volatile uint8_t x366 = 83U;
uint8_t x368 = UINT8_MAX;
int16_t x369 = INT16_MIN;
static int16_t x378 = 2434;
int32_t t81 = -1;
int16_t x383 = 126;
uint32_t x390 = UINT32_MAX;
static volatile int16_t x396 = -1;
uint16_t x397 = 1201U;
static int8_t x403 = INT8_MIN;
volatile int64_t x405 = -1LL;
static uint16_t x407 = 244U;
volatile int8_t x411 = INT8_MIN;
int32_t x412 = -38563;
volatile uint32_t x415 = UINT32_MAX;
static volatile int64_t t90 = -898741LL;
int64_t x418 = 74928495366LL;
int64_t t94 = -16514046869LL;
uint8_t x448 = 113U;
static volatile int64_t t100 = 8418LL;
uint64_t x483 = 31390925017LLU;
volatile uint64_t t101 = 1615851LLU;
uint64_t x489 = 397LLU;
int8_t x498 = INT8_MIN;
static volatile uint64_t t104 = 228LLU;
volatile int8_t x502 = 0;
uint64_t x507 = 120571348456256LLU;
uint16_t x512 = UINT16_MAX;
volatile uint8_t x521 = 4U;
int32_t t110 = 49279;
volatile int64_t t113 = -4109402277549LL;
int64_t x537 = INT64_MAX;
volatile int32_t x542 = -13251650;
volatile uint64_t x543 = 31212841116191LLU;
int32_t x547 = INT32_MIN;
uint64_t x548 = 5444390169LLU;
uint8_t x558 = UINT8_MAX;
uint16_t x567 = 30474U;
uint64_t x573 = UINT64_MAX;
uint16_t x590 = UINT16_MAX;
int32_t x592 = INT32_MIN;
volatile int64_t t126 = 20566969909175039LL;
static int8_t x600 = -7;
int32_t x603 = INT32_MIN;
static volatile int32_t t129 = 2846;
volatile int32_t x607 = INT32_MIN;
static int16_t x610 = 14;
int32_t x614 = 111067;
uint32_t t132 = 844U;
volatile int32_t x621 = -1;
uint32_t t134 = 1847309U;
int32_t x631 = INT32_MIN;
volatile int64_t t135 = -3645497756229711100LL;
uint32_t x635 = 870740153U;
uint64_t x636 = 4593021LLU;
volatile uint64_t t136 = 222864107796764243LLU;
static int64_t x637 = 164811441611976163LL;
volatile int64_t t137 = -335731006654062505LL;
uint8_t x645 = 5U;
uint8_t x648 = 1U;
static int32_t x653 = INT32_MIN;
uint16_t x654 = UINT16_MAX;
uint32_t x656 = 0U;
uint16_t x657 = 0U;
static int8_t x659 = INT8_MAX;
uint64_t x672 = UINT64_MAX;
static volatile uint64_t t144 = 1937172044LLU;
int32_t x675 = INT32_MIN;
volatile int16_t x680 = -1;
uint64_t x683 = 2908821798LLU;
static int8_t x688 = INT8_MAX;
volatile int32_t t148 = -1;
int64_t x693 = INT64_MAX;
static int16_t x694 = -1;
int32_t x698 = INT32_MIN;
volatile uint8_t x702 = 21U;
uint64_t x714 = 63442LLU;
int16_t x725 = 467;
uint16_t x726 = 649U;
int64_t t157 = -4484447241382487056LL;
uint32_t x730 = 2461U;
uint16_t x739 = 1U;
uint32_t t160 = 1299333744U;
int64_t x746 = INT64_MIN;
static volatile int64_t t162 = 7392760257LL;
int16_t x758 = -47;
static uint32_t x759 = 218729661U;
int16_t x760 = 1;
int32_t x769 = INT32_MIN;
int64_t x771 = -1LL;
static volatile int64_t t168 = 990587893LL;
static int16_t x787 = -1;
uint64_t t169 = 123LLU;
static int32_t x791 = INT32_MIN;
uint8_t x803 = 29U;
int64_t t173 = -5387LL;
static int64_t t175 = -143741LL;
volatile int64_t t176 = -1082876LL;
int16_t x825 = -363;
uint8_t x828 = UINT8_MAX;
int32_t t177 = -2390751;
uint32_t x831 = 59472U;
int8_t x833 = INT8_MIN;
static uint32_t x834 = UINT32_MAX;
volatile uint32_t t179 = 124704U;
static int16_t x838 = INT16_MIN;
int8_t x839 = 59;
int16_t x845 = -1;
volatile int8_t x846 = INT8_MIN;
uint16_t x849 = 761U;
int32_t t183 = 1709;
uint16_t x856 = 0U;
int32_t x869 = -2301508;
volatile int64_t t187 = 262247848870LL;
volatile uint32_t x876 = 26427U;
int64_t t188 = 1045193LL;
int32_t x878 = -1;
volatile int32_t x879 = -4088;
int64_t x886 = INT64_MIN;
int16_t x890 = 3;
volatile int64_t x891 = INT64_MIN;
int16_t x898 = -1;
int16_t x899 = INT16_MAX;
uint32_t t194 = 232748U;
volatile uint64_t t197 = 332LLU;
int8_t x922 = -1;
static int32_t x924 = -626380640;
int64_t x928 = INT64_MAX;
volatile uint64_t t199 = 32LLU;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	static int8_t x2 = -11;
	volatile uint16_t x3 = UINT16_MAX;
	int64_t x4 = -1LL;
	int64_t t0 = -13889LL;

    t0 = (((x1+x2)/x3)&x4);

    if (t0 != 32768LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 0;
	static int64_t x6 = INT64_MAX;
	uint64_t x7 = UINT64_MAX;
	int32_t x8 = INT32_MIN;
	volatile uint64_t t1 = 31438231783702337LLU;

    t1 = (((x5+x6)/x7)&x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint32_t x9 = UINT32_MAX;
	static int16_t x10 = -810;
	int32_t x11 = 76767;
	uint32_t t2 = 1622536242U;

    t2 = (((x9+x10)/x11)&x12);

    if (t2 != 55948U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int64_t x14 = 54LL;
	int64_t x15 = -1780996711562237LL;
	uint8_t x16 = 24U;
	volatile int64_t t3 = -23152657931040193LL;

    t3 = (((x13+x14)/x15)&x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	volatile int64_t x18 = 6LL;
	int8_t x19 = 20;
	uint8_t x20 = 0U;
	int64_t t4 = -62011742530LL;

    t4 = (((x17+x18)/x19)&x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = UINT16_MAX;
	int32_t x27 = -41347;
	int32_t x28 = INT32_MIN;
	int64_t t5 = 83547537802847658LL;

    t5 = (((x25+x26)/x27)&x28);

    if (t5 != 223072011419648LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = -97LL;
	uint64_t x34 = 282577575522079262LLU;
	static int32_t x35 = INT32_MIN;
	volatile uint64_t t6 = 3768678711270331LLU;

    t6 = (((x33+x34)/x35)&x36);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x37 = 0U;
	int64_t x38 = -1LL;
	int16_t x39 = INT16_MIN;
	uint32_t x40 = 7174U;
	static volatile int64_t t7 = -17891179772186238LL;

    t7 = (((x37+x38)/x39)&x40);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = -1;
	static int8_t x42 = INT8_MAX;
	uint16_t x43 = 1U;
	static int64_t x44 = INT64_MIN;
	int64_t t8 = -208478195775950885LL;

    t8 = (((x41+x42)/x43)&x44);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x49 = -1;
	uint8_t x50 = UINT8_MAX;
	uint64_t t9 = 15835301402LLU;

    t9 = (((x49+x50)/x51)&x52);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = INT16_MAX;
	static volatile int8_t x54 = INT8_MIN;
	uint8_t x55 = 86U;
	volatile int64_t x56 = INT64_MIN;
	static int64_t t10 = 26892LL;

    t10 = (((x53+x54)/x55)&x56);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x60 = 95;
	volatile int32_t t11 = -54;

    t11 = (((x57+x58)/x59)&x60);

    if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x65 = -1;
	volatile int8_t x66 = INT8_MAX;
	int32_t x68 = 3;
	int32_t t12 = -11787335;

    t12 = (((x65+x66)/x67)&x68);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x71 = -2LL;
	volatile int64_t x72 = INT64_MIN;
	volatile int64_t t13 = -1LL;

    t13 = (((x69+x70)/x71)&x72);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = INT16_MIN;
	volatile int8_t x74 = 13;
	static uint16_t x75 = UINT16_MAX;
	int8_t x76 = 60;
	volatile int32_t t14 = 7355779;

    t14 = (((x73+x74)/x75)&x76);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x78 = 31350U;
	static uint32_t x79 = UINT32_MAX;
	uint64_t x80 = UINT64_MAX;

    t15 = (((x77+x78)/x79)&x80);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x81 = -812309;
	volatile uint64_t x82 = 60012073035LLU;
	int8_t x84 = INT8_MIN;
	volatile uint64_t t16 = 220129867442038114LLU;

    t16 = (((x81+x82)/x83)&x84);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x86 = 2977U;
	int64_t x87 = -1394LL;

    t17 = (((x85+x86)/x87)&x88);

    if (t17 != 20LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x89 = -1;
	static int32_t x91 = INT32_MIN;
	int16_t x92 = -1;
	volatile int32_t t18 = -673;

    t18 = (((x89+x90)/x91)&x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x93 = 5958891608866895LL;
	volatile int16_t x94 = INT16_MIN;
	static int64_t x95 = INT64_MIN;
	static int8_t x96 = INT8_MIN;

    t19 = (((x93+x94)/x95)&x96);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x98 = -412;
	volatile uint32_t x99 = 43901U;
	static uint16_t x100 = 1U;
	uint32_t t20 = 22U;

    t20 = (((x97+x98)/x99)&x100);

    if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x107 = 148;
	int64_t x108 = -8LL;
	int64_t t21 = -26LL;

    t21 = (((x105+x106)/x107)&x108);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x112 = 9U;

    t22 = (((x109+x110)/x111)&x112);

    if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x113 = INT8_MAX;
	static int32_t x114 = -1;
	int64_t x115 = -29538864LL;

    t23 = (((x113+x114)/x115)&x116);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x117 = 20U;
	volatile int8_t x118 = INT8_MIN;
	static uint8_t x119 = 21U;
	volatile int32_t t24 = 30167704;

    t24 = (((x117+x118)/x119)&x120);

    if (t24 != 2594400) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x121 = INT32_MIN;
	uint64_t x122 = UINT64_MAX;
	volatile uint16_t x123 = 1199U;
	volatile int32_t x124 = INT32_MIN;
	volatile uint64_t t25 = 3LLU;

    t25 = (((x121+x122)/x123)&x124);

    if (t25 != 15385107577700352LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x125 = 0U;
	volatile uint32_t x126 = 8U;
	int32_t x127 = -1;
	static int64_t x128 = INT64_MIN;
	volatile int64_t t26 = 2299217307LL;

    t26 = (((x125+x126)/x127)&x128);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x129 = 3960975133361471064LL;
	int8_t x130 = -1;
	static volatile uint16_t x131 = 1447U;
	volatile int16_t x132 = INT16_MIN;
	volatile int64_t t27 = -503LL;

    t27 = (((x129+x130)/x131)&x132);

    if (t27 != 2737370513702912LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x133 = -29;
	int8_t x134 = INT8_MIN;
	static volatile uint32_t x135 = 185U;
	int16_t x136 = -1;
	volatile uint32_t t28 = 844U;

    t28 = (((x133+x134)/x135)&x136);

    if (t28 != 23216038U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x137 = 5483U;
	int8_t x138 = -1;
	static int64_t x139 = -1LL;
	volatile int64_t x140 = -1LL;
	int64_t t29 = -790667127LL;

    t29 = (((x137+x138)/x139)&x140);

    if (t29 != -5482LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x145 = UINT64_MAX;
	static uint64_t x146 = 241LLU;
	static uint16_t x147 = 8654U;
	int64_t x148 = -1LL;

    t30 = (((x145+x146)/x147)&x148);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x149 = UINT64_MAX;
	int16_t x152 = INT16_MIN;
	volatile uint64_t t31 = 8324381575994LLU;

    t31 = (((x149+x150)/x151)&x152);

    if (t31 != 1599190892544LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x153 = 12;
	int8_t x154 = -1;
	uint16_t x155 = UINT16_MAX;
	static int64_t x156 = INT64_MIN;
	volatile int64_t t32 = -877818671951463793LL;

    t32 = (((x153+x154)/x155)&x156);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x161 = INT8_MIN;
	static volatile uint8_t x162 = UINT8_MAX;
	volatile int16_t x163 = INT16_MIN;

    t33 = (((x161+x162)/x163)&x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x165 = -1LL;
	int32_t x166 = INT32_MIN;
	int32_t x168 = -5382;
	static int64_t t34 = -248998449254686474LL;

    t34 = (((x165+x166)/x167)&x168);

    if (t34 != -1073741824LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x169 = -1LL;
	static volatile uint64_t x170 = 430992238320122LLU;
	static int32_t x171 = -1;
	uint32_t x172 = UINT32_MAX;

    t35 = (((x169+x170)/x171)&x172);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x173 = 1420566512519242LL;
	int16_t x174 = -21;
	uint16_t x175 = 4U;
	int16_t x176 = -26;
	int64_t t36 = 1LL;

    t36 = (((x173+x174)/x175)&x176);

    if (t36 != 355141628129796LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x177 = -2;
	static int16_t x178 = 460;
	int16_t x179 = INT16_MAX;
	static volatile int32_t x180 = INT32_MIN;
	int32_t t37 = -569;

    t37 = (((x177+x178)/x179)&x180);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x182 = -1;
	static uint32_t x183 = 951U;
	uint32_t t38 = 28192U;

    t38 = (((x181+x182)/x183)&x184);

    if (t38 != 4516264U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x185 = UINT16_MAX;
	int64_t x186 = INT64_MIN;
	uint32_t x187 = 6500U;
	uint32_t x188 = 2579261U;

    t39 = (((x185+x186)/x187)&x188);

    if (t39 != 2232361LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x189 = INT8_MIN;
	int64_t x190 = -1LL;
	volatile uint16_t x191 = 2192U;
	static int8_t x192 = 0;
	static int64_t t40 = -1199456436805LL;

    t40 = (((x189+x190)/x191)&x192);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x193 = -1;
	static int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MAX;
	volatile int64_t t41 = -30386633479896LL;

    t41 = (((x193+x194)/x195)&x196);

    if (t41 != 2147469138LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x199 = INT64_MAX;
	volatile int32_t x200 = -1;
	volatile int64_t t42 = 9531580LL;

    t42 = (((x197+x198)/x199)&x200);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x201 = -17245551313189891LL;
	int32_t x202 = INT32_MIN;
	int64_t x203 = -13966LL;
	int32_t x204 = INT32_MAX;
	volatile int64_t t43 = -33344931623LL;

    t43 = (((x201+x202)/x203)&x204);

    if (t43 != 21008133LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint64_t x206 = UINT64_MAX;
	static uint32_t x208 = 0U;

    t44 = (((x205+x206)/x207)&x208);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x209 = INT64_MAX;
	volatile int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	int64_t x212 = -312368388095598LL;

    t45 = (((x209+x210)/x211)&x212);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = INT16_MIN;
	int64_t x215 = INT64_MIN;
	int8_t x216 = -3;

    t46 = (((x213+x214)/x215)&x216);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x217 = -1LL;
	static int32_t x218 = -444;
	int16_t x219 = INT16_MIN;
	static int32_t x220 = INT32_MAX;
	int64_t t47 = -139826641191200LL;

    t47 = (((x217+x218)/x219)&x220);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x221 = 206U;
	volatile int8_t x222 = INT8_MIN;
	uint8_t x223 = UINT8_MAX;
	static uint8_t x224 = 46U;
	volatile uint32_t t48 = 790U;

    t48 = (((x221+x222)/x223)&x224);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x225 = -6;
	uint32_t x226 = 480277U;
	static volatile int32_t x228 = INT32_MIN;
	uint32_t t49 = 9U;

    t49 = (((x225+x226)/x227)&x228);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x229 = INT8_MIN;

    t50 = (((x229+x230)/x231)&x232);

    if (t50 != 133) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x237 = -7079;
	static int8_t x238 = INT8_MIN;
	int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MIN;
	volatile int32_t t51 = -206002;

    t51 = (((x237+x238)/x239)&x240);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x249 = 15473U;
	int8_t x250 = -3;
	int64_t x251 = INT64_MIN;
	uint32_t x252 = UINT32_MAX;
	int64_t t52 = -269255349LL;

    t52 = (((x249+x250)/x251)&x252);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x253 = 15U;
	static uint64_t x254 = 0LLU;
	volatile int64_t x255 = INT64_MIN;
	volatile int16_t x256 = INT16_MIN;
	volatile uint64_t t53 = 51125365LLU;

    t53 = (((x253+x254)/x255)&x256);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x258 = 68U;
	volatile uint8_t x259 = 15U;
	int16_t x260 = INT16_MIN;
	int32_t t54 = 14;

    t54 = (((x257+x258)/x259)&x260);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x261 = 450139LL;
	static volatile int32_t x262 = INT32_MAX;
	int8_t x263 = INT8_MIN;
	volatile int32_t x264 = INT32_MIN;

    t55 = (((x261+x262)/x263)&x264);

    if (t55 != -2147483648LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x266 = INT64_MAX;
	uint8_t x268 = UINT8_MAX;
	int64_t t56 = -1871LL;

    t56 = (((x265+x266)/x267)&x268);

    if (t56 != 56LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x269 = -1864LL;
	int8_t x270 = -9;
	int64_t t57 = -647LL;

    t57 = (((x269+x270)/x271)&x272);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x273 = 26;
	volatile int32_t x274 = 0;
	int64_t x275 = -1LL;
	int32_t x276 = INT32_MIN;
	volatile int64_t t58 = 2352353098LL;

    t58 = (((x273+x274)/x275)&x276);

    if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x278 = INT16_MIN;
	int8_t x279 = INT8_MAX;
	int16_t x280 = -1;

    t59 = (((x277+x278)/x279)&x280);

    if (t59 != 16909062) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x281 = 1;
	int32_t x282 = INT32_MIN;
	volatile uint64_t x284 = 408782LLU;
	static volatile uint64_t t60 = 151586LLU;

    t60 = (((x281+x282)/x283)&x284);

    if (t60 != 408782LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	static int8_t x287 = -7;
	int8_t x288 = INT8_MIN;
	int32_t t61 = -7;

    t61 = (((x285+x286)/x287)&x288);

    if (t61 != -9344) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x291 = INT8_MIN;

    t62 = (((x289+x290)/x291)&x292);

    if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x301 = -1081094408964923533LL;
	int8_t x303 = INT8_MIN;
	int64_t x304 = INT64_MAX;
	volatile int64_t t63 = -33138484LL;

    t63 = (((x301+x302)/x303)&x304);

    if (t63 != 8446050070038465LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x305 = -1LL;
	int16_t x306 = -1;
	volatile int64_t t64 = -66589404963211LL;

    t64 = (((x305+x306)/x307)&x308);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x310 = -1;
	volatile int16_t x312 = 24;

    t65 = (((x309+x310)/x311)&x312);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x313 = -2114;
	static int32_t x315 = -1;
	static volatile int16_t x316 = INT16_MIN;
	static volatile int32_t t66 = -1;

    t66 = (((x313+x314)/x315)&x316);

    if (t66 != 9371648) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x317 = -1147583508LL;
	static volatile int8_t x318 = INT8_MIN;
	volatile int64_t x319 = 381836LL;
	volatile int64_t t67 = -265069315565593LL;

    t67 = (((x317+x318)/x319)&x320);

    if (t67 != -6149749993471LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x321 = UINT64_MAX;
	static int16_t x322 = INT16_MAX;
	int16_t x324 = 1;
	volatile uint64_t t68 = 3425123102871540530LLU;

    t68 = (((x321+x322)/x323)&x324);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x326 = -1;
	volatile uint32_t x327 = 46525412U;

    t69 = (((x325+x326)/x327)&x328);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x329 = INT64_MIN;
	uint32_t x330 = UINT32_MAX;
	int64_t x331 = 102882774092LL;
	uint64_t x332 = UINT64_MAX;
	uint64_t t70 = 2509597LLU;

    t70 = (((x329+x330)/x331)&x332);

    if (t70 != 18446744073619902284LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x333 = 2767U;
	uint16_t x334 = 458U;
	uint32_t x335 = 125U;
	static int16_t x336 = -1678;

    t71 = (((x333+x334)/x335)&x336);

    if (t71 != 16U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x337 = -1;
	int16_t x338 = INT16_MIN;
	uint64_t x339 = 5LLU;
	int64_t x340 = INT64_MIN;

    t72 = (((x337+x338)/x339)&x340);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MAX;
	volatile int8_t x343 = -1;
	int32_t t73 = -28667;

    t73 = (((x341+x342)/x343)&x344);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x345 = INT16_MIN;
	uint32_t x346 = 19344284U;
	static uint32_t x347 = 650225049U;
	volatile int32_t x348 = 477189;
	uint32_t t74 = 1911U;

    t74 = (((x345+x346)/x347)&x348);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x349 = -1LL;
	int8_t x351 = -1;
	uint16_t x352 = 26492U;

    t75 = (((x349+x350)/x351)&x352);

    if (t75 != 20LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x353 = INT8_MIN;
	uint64_t x355 = 8699788957915011931LLU;
	int64_t x356 = -1LL;

    t76 = (((x353+x354)/x355)&x356);

    if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x357 = UINT8_MAX;
	int8_t x358 = INT8_MIN;
	uint32_t x359 = 37362U;
	static int64_t x360 = INT64_MIN;

    t77 = (((x357+x358)/x359)&x360);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x361 = INT64_MAX;
	static int64_t x362 = INT64_MIN;
	static uint8_t x363 = 57U;
	static volatile int64_t t78 = 7970573201LL;

    t78 = (((x361+x362)/x363)&x364);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x365 = UINT64_MAX;
	uint16_t x367 = UINT16_MAX;
	uint64_t t79 = 3827634012032847LLU;

    t79 = (((x365+x366)/x367)&x368);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x370 = -1;
	static int32_t x371 = INT32_MAX;
	int32_t x372 = INT32_MIN;
	static int32_t t80 = 177007989;

    t80 = (((x369+x370)/x371)&x372);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x377 = -1;
	volatile uint16_t x379 = UINT16_MAX;
	uint16_t x380 = 685U;

    t81 = (((x377+x378)/x379)&x380);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x381 = INT32_MAX;
	int8_t x382 = -11;
	int32_t x384 = INT32_MAX;
	volatile int32_t t82 = 1922;

    t82 = (((x381+x382)/x383)&x384);

    if (t82 != 17043520) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x385 = -30;
	int16_t x386 = INT16_MIN;
	uint64_t x387 = UINT64_MAX;
	int16_t x388 = INT16_MAX;
	uint64_t t83 = 142163163814624601LLU;

    t83 = (((x385+x386)/x387)&x388);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x389 = UINT16_MAX;
	static int16_t x391 = 353;
	int16_t x392 = INT16_MIN;
	uint32_t t84 = 239891592U;

    t84 = (((x389+x390)/x391)&x392);

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x393 = -1;
	int32_t x394 = 1002682525;
	static uint8_t x395 = UINT8_MAX;
	int32_t t85 = -3;

    t85 = (((x393+x394)/x395)&x396);

    if (t85 != 3932088) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x398 = 162748333496LL;
	static uint8_t x399 = 42U;
	static int64_t x400 = INT64_MAX;
	static int64_t t86 = 2101735139LL;

    t86 = (((x397+x398)/x399)&x400);

    if (t86 != 3874960349LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x401 = 1124791253320692LL;
	volatile uint16_t x402 = UINT16_MAX;
	int64_t x404 = INT64_MIN;
	int64_t t87 = INT64_MIN;

    t87 = (((x401+x402)/x403)&x404);

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x406 = INT16_MAX;
	int16_t x408 = -1;
	int64_t t88 = 273232319652LL;

    t88 = (((x405+x406)/x407)&x408);

    if (t88 != 134LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x409 = -1;
	static uint8_t x410 = 88U;
	static volatile int32_t t89 = 2;

    t89 = (((x409+x410)/x411)&x412);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x413 = -1944;
	static uint8_t x414 = 0U;
	int64_t x416 = INT64_MIN;

    t90 = (((x413+x414)/x415)&x416);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x417 = 112U;
	int8_t x419 = INT8_MIN;
	int32_t x420 = INT32_MIN;
	int64_t t91 = -4031213321001LL;

    t91 = (((x417+x418)/x419)&x420);

    if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x425 = 48;
	volatile int32_t x426 = 3091;
	uint64_t x427 = UINT64_MAX;
	volatile int32_t x428 = -646019;
	volatile uint64_t t92 = 92223742704LLU;

    t92 = (((x425+x426)/x427)&x428);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x429 = INT16_MIN;
	static int16_t x430 = 639;
	static uint64_t x431 = UINT64_MAX;
	static volatile int32_t x432 = INT32_MIN;
	uint64_t t93 = 32278961LLU;

    t93 = (((x429+x430)/x431)&x432);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x437 = INT16_MIN;
	volatile int64_t x438 = -1LL;
	int64_t x439 = INT64_MIN;
	uint16_t x440 = UINT16_MAX;

    t94 = (((x437+x438)/x439)&x440);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x441 = 1U;
	uint64_t x442 = 56018LLU;
	int64_t x443 = INT64_MAX;
	int8_t x444 = 4;
	uint64_t t95 = 2LLU;

    t95 = (((x441+x442)/x443)&x444);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x445 = INT32_MIN;
	volatile uint16_t x446 = UINT16_MAX;
	static volatile int8_t x447 = INT8_MAX;
	volatile int32_t t96 = -1411710;

    t96 = (((x445+x446)/x447)&x448);

    if (t96 != 112) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x453 = UINT16_MAX;
	int8_t x454 = 0;
	static int8_t x455 = INT8_MIN;
	int64_t x456 = INT64_MAX;
	static int64_t t97 = -10751829545462617LL;

    t97 = (((x453+x454)/x455)&x456);

    if (t97 != 9223372036854775297LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x469 = -1;
	int16_t x470 = INT16_MIN;
	int32_t x471 = -1;
	volatile int32_t x472 = INT32_MIN;
	int32_t t98 = 3127359;

    t98 = (((x469+x470)/x471)&x472);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x473 = INT16_MIN;
	int8_t x474 = INT8_MIN;
	int8_t x475 = 50;
	static uint16_t x476 = 1905U;
	int32_t t99 = -187;

    t99 = (((x473+x474)/x475)&x476);

    if (t99 != 1377) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x477 = INT64_MIN;
	int16_t x478 = 157;
	volatile uint32_t x479 = UINT32_MAX;
	static int32_t x480 = INT32_MIN;

    t100 = (((x477+x478)/x479)&x480);

    if (t100 != -2147483648LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x481 = INT32_MAX;
	volatile int16_t x482 = -87;
	int64_t x484 = -341772612LL;

    t101 = (((x481+x482)/x483)&x484);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x490 = INT32_MIN;
	int32_t x491 = -1;
	static int16_t x492 = -17;
	uint64_t t102 = 81044949575LLU;

    t102 = (((x489+x490)/x491)&x492);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x493 = UINT16_MAX;
	volatile uint32_t x494 = 10113863U;
	int32_t x495 = -45436385;
	int8_t x496 = -1;
	static uint32_t t103 = 97544511U;

    t103 = (((x493+x494)/x495)&x496);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x497 = -356340048LL;
	volatile uint64_t x499 = 33LLU;
	int64_t x500 = INT64_MAX;

    t104 = (((x497+x498)/x499)&x500);

    if (t104 != 558992244647067013LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x501 = UINT8_MAX;
	int64_t x503 = INT64_MIN;
	int64_t x504 = 15644611722881LL;
	int64_t t105 = -2111629096844LL;

    t105 = (((x501+x502)/x503)&x504);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x505 = -1;
	int16_t x506 = INT16_MAX;
	volatile uint64_t x508 = UINT64_MAX;
	volatile uint64_t t106 = 7526585347008431LLU;

    t106 = (((x505+x506)/x507)&x508);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x509 = INT16_MIN;
	int32_t x510 = -22;
	uint32_t x511 = UINT32_MAX;
	static uint32_t t107 = 1U;

    t107 = (((x509+x510)/x511)&x512);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x513 = -151LL;
	int16_t x514 = INT16_MIN;
	int64_t x515 = INT64_MIN;
	uint64_t x516 = 164654982LLU;
	volatile uint64_t t108 = 1091883LLU;

    t108 = (((x513+x514)/x515)&x516);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x517 = 1U;
	static int64_t x518 = 235037408755LL;
	int64_t x519 = -1LL;
	int16_t x520 = 53;
	volatile int64_t t109 = 21067LL;

    t109 = (((x517+x518)/x519)&x520);

    if (t109 != 4LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x522 = INT16_MIN;
	volatile uint8_t x523 = 6U;
	int16_t x524 = INT16_MIN;

    t110 = (((x521+x522)/x523)&x524);

    if (t110 != -32768) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x525 = 49U;
	uint16_t x526 = UINT16_MAX;
	int16_t x527 = INT16_MIN;
	static int64_t x528 = INT64_MAX;
	int64_t t111 = -1263266800691582964LL;

    t111 = (((x525+x526)/x527)&x528);

    if (t111 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MIN;
	static volatile int32_t x531 = 405681;
	int8_t x532 = -1;
	int32_t t112 = 90766;

    t112 = (((x529+x530)/x531)&x532);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x533 = INT16_MAX;
	static volatile int64_t x534 = 1035LL;
	volatile int16_t x535 = -4;
	int32_t x536 = INT32_MIN;

    t113 = (((x533+x534)/x535)&x536);

    if (t113 != -2147483648LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x538 = INT32_MIN;
	int32_t x539 = -1;
	int32_t x540 = INT32_MIN;
	static volatile int64_t t114 = 16777LL;

    t114 = (((x537+x538)/x539)&x540);

    if (t114 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x541 = INT8_MIN;
	int64_t x544 = 0LL;
	static volatile uint64_t t115 = 247173652LLU;

    t115 = (((x541+x542)/x543)&x544);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x545 = UINT64_MAX;
	uint16_t x546 = UINT16_MAX;
	uint64_t t116 = 20LLU;

    t116 = (((x545+x546)/x547)&x548);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x549 = INT32_MAX;
	int64_t x550 = -1LL;
	int64_t x551 = 635507533241LL;
	uint8_t x552 = 24U;
	static volatile int64_t t117 = -37564074571653LL;

    t117 = (((x549+x550)/x551)&x552);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x553 = UINT16_MAX;
	volatile int16_t x554 = 0;
	int32_t x555 = INT32_MIN;
	static uint32_t x556 = UINT32_MAX;
	uint32_t t118 = 2001916356U;

    t118 = (((x553+x554)/x555)&x556);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x557 = UINT32_MAX;
	uint64_t x559 = 7760914LLU;
	static int8_t x560 = -57;
	static uint64_t t119 = 827922168114LLU;

    t119 = (((x557+x558)/x559)&x560);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x565 = -17654483;
	uint8_t x566 = 30U;
	int16_t x568 = INT16_MIN;
	int32_t t120 = -650;

    t120 = (((x565+x566)/x567)&x568);

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x569 = -97310847361LL;
	static int32_t x570 = INT32_MAX;
	int32_t x571 = 599;
	volatile uint32_t x572 = 141288657U;
	volatile int64_t t121 = -33825148LL;

    t121 = (((x569+x570)/x571)&x572);

    if (t121 != 246912LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x574 = 1515118548LL;
	static int32_t x575 = -252691;
	static int16_t x576 = INT16_MAX;
	uint64_t t122 = 14936125297LLU;

    t122 = (((x573+x574)/x575)&x576);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x577 = -1LL;
	static uint32_t x578 = UINT32_MAX;
	int8_t x579 = -1;
	int32_t x580 = INT32_MIN;
	int64_t t123 = 1461LL;

    t123 = (((x577+x578)/x579)&x580);

    if (t123 != -4294967296LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x581 = -19665554;
	static volatile int16_t x582 = -3880;
	static int32_t x583 = -83240;
	volatile int64_t x584 = -26593325255LL;
	int64_t t124 = -10985369215LL;

    t124 = (((x581+x582)/x583)&x584);

    if (t124 != 40LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x585 = 3;
	uint8_t x586 = UINT8_MAX;
	uint32_t x587 = UINT32_MAX;
	int8_t x588 = 0;
	uint32_t t125 = 55U;

    t125 = (((x585+x586)/x587)&x588);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x589 = 32459408LL;
	volatile int8_t x591 = -1;

    t126 = (((x589+x590)/x591)&x592);

    if (t126 != -2147483648LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x593 = 3U;
	static uint8_t x594 = 11U;
	static int32_t x595 = INT32_MIN;
	int8_t x596 = 32;
	static int32_t t127 = -27;

    t127 = (((x593+x594)/x595)&x596);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x597 = INT16_MAX;
	uint64_t x598 = 2096158438388LLU;
	int32_t x599 = -1648;
	uint64_t t128 = 566LLU;

    t128 = (((x597+x598)/x599)&x600);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x601 = 0;
	static int16_t x602 = INT16_MIN;
	int16_t x604 = -67;

    t129 = (((x601+x602)/x603)&x604);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x605 = INT8_MIN;
	int8_t x606 = -1;
	volatile int64_t x608 = INT64_MIN;
	int64_t t130 = -26886780LL;

    t130 = (((x605+x606)/x607)&x608);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x609 = INT16_MAX;
	int16_t x611 = -3;
	uint16_t x612 = UINT16_MAX;
	volatile int32_t t131 = -575392;

    t131 = (((x609+x610)/x611)&x612);

    if (t131 != 54609) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x613 = 22U;
	int8_t x615 = INT8_MAX;
	int32_t x616 = INT32_MIN;

    t132 = (((x613+x614)/x615)&x616);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x622 = UINT8_MAX;
	int8_t x623 = 34;
	int32_t x624 = INT32_MAX;
	volatile int32_t t133 = -66;

    t133 = (((x621+x622)/x623)&x624);

    if (t133 != 7) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x625 = UINT16_MAX;
	uint32_t x626 = UINT32_MAX;
	uint32_t x627 = 55897515U;
	volatile int16_t x628 = -1;

    t134 = (((x625+x626)/x627)&x628);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x629 = UINT32_MAX;
	int32_t x630 = INT32_MIN;
	static volatile int64_t x632 = INT64_MAX;

    t135 = (((x629+x630)/x631)&x632);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x633 = INT8_MAX;
	volatile int16_t x634 = -22;

    t136 = (((x633+x634)/x635)&x636);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x638 = INT16_MAX;
	uint8_t x639 = 6U;
	int8_t x640 = 3;

    t137 = (((x637+x638)/x639)&x640);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x641 = 1909;
	int64_t x642 = INT64_MIN;
	int32_t x643 = 24161576;
	int8_t x644 = INT8_MIN;
	static int64_t t138 = -7644687LL;

    t138 = (((x641+x642)/x643)&x644);

    if (t138 != -381737186304LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x646 = -1LL;
	uint8_t x647 = UINT8_MAX;
	static volatile int64_t t139 = -1950533956903LL;

    t139 = (((x645+x646)/x647)&x648);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x649 = -254619LL;
	int8_t x650 = INT8_MAX;
	static int64_t x651 = -1LL;
	volatile int8_t x652 = INT8_MIN;
	volatile int64_t t140 = -25180919065147LL;

    t140 = (((x649+x650)/x651)&x652);

    if (t140 != 254464LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x655 = 9888U;
	volatile uint32_t t141 = 1619U;

    t141 = (((x653+x654)/x655)&x656);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x658 = -1602;
	volatile uint16_t x660 = 14057U;
	volatile int32_t t142 = -55;

    t142 = (((x657+x658)/x659)&x660);

    if (t142 != 14048) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x665 = INT16_MIN;
	int32_t x666 = 15;
	static int32_t x667 = INT32_MIN;
	int8_t x668 = INT8_MIN;
	volatile int32_t t143 = 2711;

    t143 = (((x665+x666)/x667)&x668);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x669 = 1;
	int32_t x670 = 0;
	volatile uint16_t x671 = UINT16_MAX;

    t144 = (((x669+x670)/x671)&x672);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x673 = 1059433130729586167LL;
	int32_t x674 = INT32_MIN;
	int8_t x676 = 36;
	volatile int64_t t145 = -664661680891969374LL;

    t145 = (((x673+x674)/x675)&x676);

    if (t145 != 4LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x677 = 2877;
	int8_t x678 = 13;
	int64_t x679 = -132141303069LL;
	int64_t t146 = -9446701LL;

    t146 = (((x677+x678)/x679)&x680);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x681 = -37116LL;
	uint8_t x682 = UINT8_MAX;
	static uint64_t x684 = 2615735588046470266LLU;
	uint64_t t147 = 124046143492515672LLU;

    t147 = (((x681+x682)/x683)&x684);

    if (t147 != 299464714LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x685 = INT16_MIN;
	int8_t x686 = INT8_MIN;
	static int16_t x687 = INT16_MAX;

    t148 = (((x685+x686)/x687)&x688);

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x689 = 16;
	static volatile uint32_t x690 = 3175714U;
	int32_t x691 = INT32_MAX;
	static uint64_t x692 = UINT64_MAX;
	static uint64_t t149 = 3866702556959518LLU;

    t149 = (((x689+x690)/x691)&x692);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x695 = INT16_MAX;
	uint8_t x696 = UINT8_MAX;
	int64_t t150 = -592183LL;

    t150 = (((x693+x694)/x695)&x696);

    if (t150 != 8LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x697 = 369;
	int64_t x699 = INT64_MAX;
	int8_t x700 = -26;
	volatile int64_t t151 = 225114LL;

    t151 = (((x697+x698)/x699)&x700);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x701 = UINT64_MAX;
	int16_t x703 = INT16_MAX;
	static int64_t x704 = INT64_MAX;
	volatile uint64_t t152 = 303LLU;

    t152 = (((x701+x702)/x703)&x704);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x705 = -85;
	int16_t x706 = INT16_MIN;
	volatile int8_t x707 = INT8_MIN;
	volatile int32_t x708 = INT32_MIN;
	int32_t t153 = -65;

    t153 = (((x705+x706)/x707)&x708);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x709 = INT16_MAX;
	int64_t x710 = -1LL;
	int32_t x711 = -1546762;
	uint32_t x712 = 14U;
	volatile int64_t t154 = -597173LL;

    t154 = (((x709+x710)/x711)&x712);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x713 = 688U;
	int8_t x715 = INT8_MIN;
	uint8_t x716 = 8U;
	volatile uint64_t t155 = 16446055928253LLU;

    t155 = (((x713+x714)/x715)&x716);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x721 = 221U;
	volatile uint32_t x722 = 86U;
	int32_t x723 = INT32_MIN;
	static int32_t x724 = 18;
	uint32_t t156 = 201U;

    t156 = (((x721+x722)/x723)&x724);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x727 = -1LL;
	uint32_t x728 = 13932179U;

    t157 = (((x725+x726)/x727)&x728);

    if (t157 != 13931136LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x729 = INT16_MAX;
	uint32_t x731 = 15184U;
	int64_t x732 = 1450866263174199LL;
	int64_t t158 = 8625LL;

    t158 = (((x729+x730)/x731)&x732);

    if (t158 != 2LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x733 = INT32_MIN;
	static uint8_t x734 = 2U;
	volatile int64_t x735 = -11740017378LL;
	static int64_t x736 = INT64_MAX;
	int64_t t159 = 5535LL;

    t159 = (((x733+x734)/x735)&x736);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x737 = UINT16_MAX;
	uint32_t x738 = 3680U;
	int8_t x740 = INT8_MIN;

    t160 = (((x737+x738)/x739)&x740);

    if (t160 != 69120U) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x745 = 0U;
	static int32_t x747 = 54041360;
	static int32_t x748 = -156581;
	int64_t t161 = -2102792LL;

    t161 = (((x745+x746)/x747)&x748);

    if (t161 != -170672488367LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x749 = INT16_MIN;
	volatile int16_t x750 = -1;
	int16_t x751 = -1;
	int64_t x752 = INT64_MIN;

    t162 = (((x749+x750)/x751)&x752);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x757 = 2758560LLU;
	static volatile uint64_t t163 = 5916446860LLU;

    t163 = (((x757+x758)/x759)&x760);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x761 = -167105629543LL;
	int32_t x762 = INT32_MIN;
	int8_t x763 = INT8_MAX;
	int32_t x764 = -1;
	int64_t t164 = 1974624LL;

    t164 = (((x761+x762)/x763)&x764);

    if (t164 != -1332701678LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x770 = 0U;
	uint8_t x772 = 9U;
	volatile int64_t t165 = -13LL;

    t165 = (((x769+x770)/x771)&x772);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint16_t x773 = 11U;
	static int32_t x774 = -2954823;
	int8_t x775 = -1;
	int16_t x776 = INT16_MAX;
	volatile int32_t t166 = -163984095;

    t166 = (((x773+x774)/x775)&x776);

    if (t166 != 5692) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x777 = INT8_MIN;
	volatile int8_t x778 = INT8_MIN;
	int64_t x779 = INT64_MIN;
	int64_t x780 = INT64_MAX;
	static int64_t t167 = -3LL;

    t167 = (((x777+x778)/x779)&x780);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x781 = 26132449986138LL;
	uint16_t x782 = 2422U;
	int8_t x783 = INT8_MAX;
	uint32_t x784 = 1653418075U;

    t168 = (((x781+x782)/x783)&x784);

    if (t168 != 1619011672LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x785 = 177LLU;
	int16_t x786 = INT16_MIN;
	uint32_t x788 = 437404U;

    t169 = (((x785+x786)/x787)&x788);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x789 = INT8_MIN;
	int64_t x790 = -32600559152685097LL;
	int16_t x792 = INT16_MIN;
	volatile int64_t t170 = -15414LL;

    t170 = (((x789+x790)/x791)&x792);

    if (t170 != 15171584LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x793 = INT16_MIN;
	uint16_t x794 = 27024U;
	uint64_t x795 = 42761314LLU;
	static volatile uint8_t x796 = 32U;
	static uint64_t t171 = 465131217841LLU;

    t171 = (((x793+x794)/x795)&x796);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x797 = -1;
	uint64_t x798 = 272627089LLU;
	static uint64_t x799 = 213938756LLU;
	volatile int64_t x800 = -1LL;
	volatile uint64_t t172 = 869609366LLU;

    t172 = (((x797+x798)/x799)&x800);

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x801 = INT64_MIN;
	uint16_t x802 = UINT16_MAX;
	uint16_t x804 = 1714U;

    t173 = (((x801+x802)/x803)&x804);

    if (t173 != 528LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x805 = INT64_MIN;
	uint16_t x806 = UINT16_MAX;
	uint64_t x807 = 6861737990424950LLU;
	int16_t x808 = INT16_MIN;
	static uint64_t t174 = 59061LLU;

    t174 = (((x805+x806)/x807)&x808);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x817 = 185519483649LL;
	uint32_t x818 = 1668U;
	volatile int64_t x819 = INT64_MIN;
	int8_t x820 = INT8_MIN;

    t175 = (((x817+x818)/x819)&x820);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x821 = 2883644U;
	volatile uint16_t x822 = UINT16_MAX;
	int64_t x823 = -1LL;
	int8_t x824 = INT8_MIN;

    t176 = (((x821+x822)/x823)&x824);

    if (t176 != -2949248LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x826 = 351U;
	volatile int16_t x827 = -1;

    t177 = (((x825+x826)/x827)&x828);

    if (t177 != 12) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x829 = INT16_MAX;
	volatile int8_t x830 = -13;
	volatile int16_t x832 = INT16_MIN;
	static volatile uint32_t t178 = 1U;

    t178 = (((x829+x830)/x831)&x832);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x835 = 9U;
	int8_t x836 = 53;

    t179 = (((x833+x834)/x835)&x836);

    if (t179 != 4U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x837 = UINT32_MAX;
	volatile uint16_t x840 = 2874U;
	uint32_t t180 = 153180925U;

    t180 = (((x837+x838)/x839)&x840);

    if (t180 != 296U) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint32_t x841 = 198U;
	int8_t x842 = 26;
	uint32_t x843 = 128775747U;
	uint64_t x844 = UINT64_MAX;
	volatile uint64_t t181 = 3555247266854564092LLU;

    t181 = (((x841+x842)/x843)&x844);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x847 = 3;
	static int8_t x848 = -1;
	static volatile int32_t t182 = 689;

    t182 = (((x845+x846)/x847)&x848);

    if (t182 != -43) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x850 = INT16_MAX;
	int8_t x851 = INT8_MIN;
	static int16_t x852 = INT16_MIN;

    t183 = (((x849+x850)/x851)&x852);

    if (t183 != -32768) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x853 = INT64_MAX;
	int16_t x854 = INT16_MIN;
	int32_t x855 = -1;
	static int64_t t184 = -12315951254LL;

    t184 = (((x853+x854)/x855)&x856);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x857 = INT8_MIN;
	static int16_t x858 = -18;
	uint16_t x859 = 3826U;
	int16_t x860 = INT16_MAX;
	int32_t t185 = 59;

    t185 = (((x857+x858)/x859)&x860);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x865 = 5446U;
	volatile int32_t x866 = -97406149;
	static int16_t x867 = INT16_MAX;
	volatile uint32_t x868 = UINT32_MAX;
	uint32_t t186 = 598554311U;

    t186 = (((x865+x866)/x867)&x868);

    if (t186 != 4294964324U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x870 = -171733129253LL;
	int64_t x871 = INT64_MAX;
	int64_t x872 = -26510LL;

    t187 = (((x869+x870)/x871)&x872);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x873 = 6463191262514LL;
	volatile int64_t x874 = -1LL;
	int32_t x875 = -53727;

    t188 = (((x873+x874)/x875)&x876);

    if (t188 != 25090LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x877 = 31079734;
	static uint64_t x880 = 48666366734939868LLU;
	volatile uint64_t t189 = 3075LLU;

    t189 = (((x877+x878)/x879)&x880);

    if (t189 != 48666366734934604LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x885 = INT32_MAX;
	int32_t x887 = 17080537;
	uint64_t x888 = 116991832206834739LLU;
	volatile uint64_t t190 = 14LLU;

    t190 = (((x885+x886)/x887)&x888);

    if (t190 != 116991344324854801LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x889 = INT16_MIN;
	uint8_t x892 = 3U;
	volatile int64_t t191 = 95592202081LL;

    t191 = (((x889+x890)/x891)&x892);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x893 = UINT64_MAX;
	uint16_t x894 = UINT16_MAX;
	static int16_t x895 = -1;
	uint8_t x896 = UINT8_MAX;
	uint64_t t192 = 12489264LLU;

    t192 = (((x893+x894)/x895)&x896);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint32_t x897 = 4582U;
	int16_t x900 = INT16_MIN;
	uint32_t t193 = 261051467U;

    t193 = (((x897+x898)/x899)&x900);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x901 = 2551157U;
	volatile uint16_t x902 = 295U;
	int32_t x903 = -1;
	int8_t x904 = -1;

    t194 = (((x901+x902)/x903)&x904);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x909 = UINT8_MAX;
	volatile int8_t x910 = -2;
	int8_t x911 = INT8_MIN;
	int8_t x912 = INT8_MIN;
	volatile int32_t t195 = 29;

    t195 = (((x909+x910)/x911)&x912);

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x913 = 3;
	static uint8_t x914 = 5U;
	uint32_t x915 = UINT32_MAX;
	uint64_t x916 = UINT64_MAX;
	volatile uint64_t t196 = 2501483861748260401LLU;

    t196 = (((x913+x914)/x915)&x916);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x917 = -1;
	int8_t x918 = INT8_MIN;
	uint64_t x919 = UINT64_MAX;
	int8_t x920 = -1;

    t197 = (((x917+x918)/x919)&x920);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x921 = -1;
	volatile uint16_t x923 = 107U;
	static volatile int32_t t198 = 1898380;

    t198 = (((x921+x922)/x923)&x924);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x925 = INT16_MAX;
	int8_t x926 = INT8_MIN;
	uint64_t x927 = 308LLU;

    t199 = (((x925+x926)/x927)&x928);

    if (t199 != 105LLU) { NG(); } else { ; }
	
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

