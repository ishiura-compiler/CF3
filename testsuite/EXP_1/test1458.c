
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

int32_t x10 = INT32_MIN;
int16_t x12 = -453;
int32_t t0 = -57;
int64_t x39 = INT64_MAX;
uint32_t x40 = 438U;
int32_t t6 = -6343535;
volatile int32_t x50 = -2;
static volatile int64_t x53 = INT64_MIN;
uint16_t x67 = 3741U;
uint32_t t11 = 42U;
int32_t t12 = -1;
int16_t x80 = -4536;
int32_t t14 = -49129;
volatile int64_t x86 = INT64_MIN;
int16_t x87 = INT16_MAX;
int16_t x99 = INT16_MIN;
int8_t x107 = INT8_MAX;
int16_t x108 = -1;
uint32_t x109 = 1675U;
int16_t x112 = INT16_MIN;
static int32_t x114 = INT32_MAX;
uint8_t x116 = UINT8_MAX;
volatile uint64_t x120 = UINT64_MAX;
int8_t x122 = -13;
volatile uint64_t x125 = 7LLU;
static int8_t x135 = INT8_MAX;
int64_t x151 = INT64_MIN;
volatile int64_t t33 = -274701539547925506LL;
int64_t x162 = -1LL;
int16_t x169 = -1;
static int64_t x171 = -1LL;
static uint32_t x175 = UINT32_MAX;
int16_t x178 = INT16_MIN;
volatile uint32_t x180 = UINT32_MAX;
static int32_t t40 = -489649211;
uint64_t x193 = 383894948LLU;
volatile int64_t x197 = INT64_MIN;
int32_t t44 = -17384274;
static uint64_t x201 = 489031734252LLU;
volatile int64_t x202 = -1LL;
uint8_t x208 = 12U;
int16_t x216 = INT16_MAX;
static volatile int32_t t48 = -517;
uint64_t x222 = 120LLU;
int8_t x223 = INT8_MIN;
int16_t x251 = 19;
int32_t t54 = 7417659;
uint32_t x253 = 1233U;
int32_t x254 = -1;
int8_t x259 = 5;
static volatile int32_t x277 = 303043;
int16_t x280 = INT16_MAX;
static int64_t x282 = 270905187LL;
uint8_t x286 = 5U;
int32_t t62 = -5;
static uint64_t x289 = 881753LLU;
uint32_t x292 = 528233U;
int16_t x304 = 336;
int32_t t65 = 74931843;
static int32_t x311 = -11314911;
volatile int32_t t67 = 1274398;
static volatile int64_t x318 = INT64_MIN;
static int16_t x329 = 7;
int32_t x333 = INT32_MAX;
uint32_t x355 = 3162270U;
uint64_t x362 = 254787211LLU;
volatile int64_t x366 = INT64_MIN;
volatile int16_t x367 = 840;
int32_t t78 = -56;
uint8_t x374 = UINT8_MAX;
volatile int8_t x378 = INT8_MIN;
int64_t t81 = -1LL;
int32_t x388 = -1;
volatile int32_t t83 = 309;
int16_t x401 = 2958;
static volatile int64_t x402 = -1LL;
int32_t x403 = 381141665;
static int16_t x406 = -1;
int8_t x410 = -1;
volatile int32_t t89 = -26;
int16_t x421 = -938;
static volatile int64_t x422 = INT64_MIN;
static int32_t x425 = 509;
int16_t x428 = -1;
int64_t x436 = INT64_MAX;
volatile int64_t t93 = 956356904155004291LL;
uint16_t x437 = UINT16_MAX;
uint32_t t94 = 63U;
uint16_t x441 = 133U;
static volatile int32_t t95 = -338;
uint64_t t97 = 1741698672LLU;
int32_t t101 = -3;
uint64_t x483 = 2738LLU;
uint16_t x488 = 773U;
volatile int32_t t105 = -83;
static volatile uint32_t t106 = 4085U;
int32_t x497 = -1;
int8_t x499 = -1;
uint32_t x500 = 421U;
uint32_t t107 = 7U;
volatile uint64_t x511 = UINT64_MAX;
volatile uint64_t x512 = UINT64_MAX;
volatile uint64_t t109 = 12349222LLU;
static int64_t x514 = -305200LL;
int32_t t111 = -2685456;
int32_t x522 = -1;
uint16_t x525 = UINT16_MAX;
volatile uint16_t x526 = 9U;
int32_t x557 = INT32_MIN;
uint32_t t120 = 84U;
int16_t x572 = 6837;
uint32_t x573 = 254966U;
static int8_t x574 = 3;
uint8_t x582 = 4U;
static uint16_t x584 = UINT16_MAX;
int32_t x590 = -3375;
volatile int16_t x616 = -1;
static volatile uint16_t x617 = UINT16_MAX;
volatile int16_t x634 = -1;
int8_t x635 = -2;
int32_t x647 = 1886;
uint64_t x649 = UINT64_MAX;
int16_t x653 = INT16_MIN;
uint64_t x656 = 3660LLU;
static int32_t t141 = -164501683;
static int8_t x668 = 1;
int32_t x674 = -1;
int32_t x676 = -599;
int32_t t144 = 923797308;
static volatile uint16_t x677 = 50U;
static volatile int64_t x678 = INT64_MIN;
volatile uint16_t x679 = UINT16_MAX;
uint32_t x684 = 55059484U;
int16_t x692 = INT16_MAX;
static int32_t x695 = INT32_MIN;
int64_t x704 = -1LL;
int32_t x705 = -1;
static volatile uint16_t x708 = 3588U;
static uint8_t x710 = 8U;
int32_t x718 = INT32_MIN;
volatile uint32_t x720 = UINT32_MAX;
uint16_t x721 = 954U;
int64_t x730 = INT64_MAX;
uint64_t x732 = 32LLU;
static volatile int64_t x737 = -1LL;
int32_t x738 = INT32_MAX;
uint64_t x740 = UINT64_MAX;
uint16_t x745 = UINT16_MAX;
volatile int16_t x746 = -1;
int16_t x753 = 5;
static int64_t x757 = 43976817928285590LL;
uint16_t x759 = 6U;
uint32_t x768 = 1799U;
int64_t x770 = INT64_MIN;
static volatile uint32_t t163 = 7U;
int32_t t164 = 1877370;
static int8_t x777 = -7;
int16_t x778 = INT16_MIN;
uint8_t x786 = 0U;
volatile int32_t x787 = -1;
int8_t x793 = INT8_MIN;
int32_t t172 = -150019;
uint32_t x814 = 363706U;
volatile int64_t x815 = -11715429LL;
int32_t x820 = 84573;
volatile int32_t t175 = 1;
volatile int16_t x830 = INT16_MAX;
int8_t x840 = INT8_MAX;
uint32_t x844 = 59U;
int8_t x846 = 0;
int8_t x853 = -1;
int64_t x857 = INT64_MIN;
int32_t t183 = -4;
static volatile int8_t x869 = -1;
volatile uint16_t x873 = 6429U;
int16_t x883 = -1;
volatile int32_t t189 = 1492890;
uint32_t x901 = 120U;
uint32_t x903 = 112U;
static uint32_t x904 = 640921U;
static int16_t x907 = INT16_MIN;
uint8_t x913 = 11U;
uint16_t x915 = 3U;
static int32_t t199 = 0;


void f0(void) {
    	static int8_t x9 = INT8_MAX;
	uint32_t x11 = 1291641657U;

    t0 = (((x9==x10)!=x11)-x12);

    if (t0 != 454) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x17 = 85;
	int8_t x18 = INT8_MIN;
	volatile int8_t x19 = -2;
	volatile uint32_t x20 = UINT32_MAX;
	uint32_t t1 = 0U;

    t1 = (((x17==x18)!=x19)-x20);

    if (t1 != 2U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x25 = -6;
	int64_t x26 = INT64_MIN;
	uint16_t x27 = 35U;
	int8_t x28 = INT8_MAX;
	static volatile int32_t t2 = 10493019;

    t2 = (((x25==x26)!=x27)-x28);

    if (t2 != -126) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x29 = 14U;
	volatile int64_t x30 = -14295814LL;
	static int16_t x31 = INT16_MIN;
	uint64_t x32 = UINT64_MAX;
	uint64_t t3 = 8363182426795117LLU;

    t3 = (((x29==x30)!=x31)-x32);

    if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x33 = UINT16_MAX;
	static volatile int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	uint8_t x36 = 26U;
	volatile int32_t t4 = 0;

    t4 = (((x33==x34)!=x35)-x36);

    if (t4 != -25) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x37 = UINT8_MAX;
	int32_t x38 = 22;
	uint32_t t5 = 197244369U;

    t5 = (((x37==x38)!=x39)-x40);

    if (t5 != 4294966859U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x41 = INT32_MAX;
	static int32_t x42 = INT32_MIN;
	volatile int8_t x43 = -1;
	int16_t x44 = 27;

    t6 = (((x41==x42)!=x43)-x44);

    if (t6 != -26) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x49 = INT16_MAX;
	int8_t x51 = INT8_MIN;
	int64_t x52 = -3800871976527956LL;
	volatile int64_t t7 = -250LL;

    t7 = (((x49==x50)!=x51)-x52);

    if (t7 != 3800871976527957LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x54 = INT16_MAX;
	int8_t x55 = -1;
	int64_t x56 = -1LL;
	int64_t t8 = -196526891077995LL;

    t8 = (((x53==x54)!=x55)-x56);

    if (t8 != 2LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x57 = -1;
	volatile int8_t x58 = INT8_MAX;
	uint32_t x59 = 3055U;
	volatile int32_t x60 = -312634171;
	int32_t t9 = 1137;

    t9 = (((x57==x58)!=x59)-x60);

    if (t9 != 312634172) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x61 = UINT64_MAX;
	int32_t x62 = INT32_MIN;
	uint16_t x63 = UINT16_MAX;
	int16_t x64 = -744;
	volatile int32_t t10 = 4014;

    t10 = (((x61==x62)!=x63)-x64);

    if (t10 != 745) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x65 = -1LL;
	int8_t x66 = -1;
	volatile uint32_t x68 = 436828093U;

    t11 = (((x65==x66)!=x67)-x68);

    if (t11 != 3858139204U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x69 = 0;
	volatile uint16_t x70 = 7606U;
	volatile int8_t x71 = 61;
	static volatile uint16_t x72 = 8U;

    t12 = (((x69==x70)!=x71)-x72);

    if (t12 != -7) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x73 = -1;
	static volatile int32_t x74 = -97;
	int64_t x75 = INT64_MIN;
	int16_t x76 = 7;
	static int32_t t13 = -97669806;

    t13 = (((x73==x74)!=x75)-x76);

    if (t13 != -6) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x77 = INT64_MAX;
	volatile int32_t x78 = INT32_MAX;
	uint64_t x79 = 1306701236095460LLU;

    t14 = (((x77==x78)!=x79)-x80);

    if (t14 != 4537) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x81 = -1;
	volatile int64_t x82 = 264240844632094LL;
	int64_t x83 = INT64_MAX;
	static int16_t x84 = INT16_MAX;
	int32_t t15 = -126374;

    t15 = (((x81==x82)!=x83)-x84);

    if (t15 != -32766) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x85 = 0U;
	volatile uint32_t x88 = 0U;
	volatile uint32_t t16 = 36249U;

    t16 = (((x85==x86)!=x87)-x88);

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x89 = 54;
	static uint16_t x90 = 12U;
	uint64_t x91 = 868773082233973165LLU;
	int64_t x92 = INT64_MAX;
	static volatile int64_t t17 = 126908879725LL;

    t17 = (((x89==x90)!=x91)-x92);

    if (t17 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x93 = 1;
	uint8_t x94 = 55U;
	int8_t x95 = INT8_MAX;
	static int16_t x96 = -1;
	int32_t t18 = 20;

    t18 = (((x93==x94)!=x95)-x96);

    if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x97 = UINT8_MAX;
	int8_t x98 = INT8_MIN;
	int8_t x100 = 0;
	int32_t t19 = 65897599;

    t19 = (((x97==x98)!=x99)-x100);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = 5416;
	int16_t x102 = INT16_MAX;
	volatile uint8_t x103 = UINT8_MAX;
	int16_t x104 = -1;
	int32_t t20 = 10161;

    t20 = (((x101==x102)!=x103)-x104);

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x105 = 17U;
	static uint32_t x106 = 1U;
	volatile int32_t t21 = 39428138;

    t21 = (((x105==x106)!=x107)-x108);

    if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x110 = INT64_MIN;
	uint16_t x111 = 6974U;
	int32_t t22 = 2259289;

    t22 = (((x109==x110)!=x111)-x112);

    if (t22 != 32769) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x113 = 3U;
	int16_t x115 = INT16_MAX;
	volatile int32_t t23 = -2491;

    t23 = (((x113==x114)!=x115)-x116);

    if (t23 != -254) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x117 = 20401U;
	uint64_t x118 = 169292333433523LLU;
	int8_t x119 = -1;
	volatile uint64_t t24 = 5300LLU;

    t24 = (((x117==x118)!=x119)-x120);

    if (t24 != 2LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = INT64_MAX;
	static uint32_t x123 = 840752972U;
	int64_t x124 = -90099191983068322LL;
	int64_t t25 = -316258LL;

    t25 = (((x121==x122)!=x123)-x124);

    if (t25 != 90099191983068323LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x126 = UINT32_MAX;
	int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MAX;
	volatile int32_t t26 = 1;

    t26 = (((x125==x126)!=x127)-x128);

    if (t26 != -32766) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x129 = UINT32_MAX;
	volatile int16_t x130 = -1;
	int32_t x131 = 3528897;
	uint64_t x132 = 29166869272967564LLU;
	volatile uint64_t t27 = 4381100542586LLU;

    t27 = (((x129==x130)!=x131)-x132);

    if (t27 != 18417577204436584053LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x133 = 1266U;
	uint16_t x134 = 856U;
	int16_t x136 = INT16_MIN;
	int32_t t28 = 30432;

    t28 = (((x133==x134)!=x135)-x136);

    if (t28 != 32769) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x137 = -1;
	static volatile int64_t x138 = -1LL;
	uint64_t x139 = UINT64_MAX;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t29 = 138724335U;

    t29 = (((x137==x138)!=x139)-x140);

    if (t29 != 2U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x141 = UINT8_MAX;
	int64_t x142 = -1LL;
	volatile int16_t x143 = INT16_MAX;
	uint32_t x144 = 28083388U;
	uint32_t t30 = 2U;

    t30 = (((x141==x142)!=x143)-x144);

    if (t30 != 4266883909U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x145 = 11U;
	uint32_t x146 = UINT32_MAX;
	uint16_t x147 = UINT16_MAX;
	uint64_t x148 = 465923739870374185LLU;
	uint64_t t31 = 15539987065218LLU;

    t31 = (((x145==x146)!=x147)-x148);

    if (t31 != 17980820333839177432LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x149 = 12U;
	uint8_t x150 = UINT8_MAX;
	static volatile uint16_t x152 = 11569U;
	int32_t t32 = 3461;

    t32 = (((x149==x150)!=x151)-x152);

    if (t32 != -11568) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x153 = 36;
	uint32_t x154 = 24U;
	int32_t x155 = -1;
	static int64_t x156 = INT64_MAX;

    t33 = (((x153==x154)!=x155)-x156);

    if (t33 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x157 = INT8_MIN;
	volatile int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MIN;
	static uint32_t x160 = 53169953U;
	volatile uint32_t t34 = 683982U;

    t34 = (((x157==x158)!=x159)-x160);

    if (t34 != 4241797344U) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x161 = UINT16_MAX;
	uint8_t x163 = 12U;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t35 = 176942835LLU;

    t35 = (((x161==x162)!=x163)-x164);

    if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x165 = 0LL;
	int16_t x166 = 0;
	int16_t x167 = INT16_MIN;
	static int64_t x168 = -43478LL;
	static volatile int64_t t36 = 0LL;

    t36 = (((x165==x166)!=x167)-x168);

    if (t36 != 43479LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x170 = INT64_MIN;
	int64_t x172 = 8182873LL;
	int64_t t37 = 182204LL;

    t37 = (((x169==x170)!=x171)-x172);

    if (t37 != -8182872LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x173 = UINT16_MAX;
	int8_t x174 = 2;
	int16_t x176 = -1;
	int32_t t38 = 124;

    t38 = (((x173==x174)!=x175)-x176);

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x177 = 11U;
	static int32_t x179 = INT32_MIN;
	uint32_t t39 = 3724U;

    t39 = (((x177==x178)!=x179)-x180);

    if (t39 != 2U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x181 = INT32_MAX;
	uint64_t x182 = 6380385635061LLU;
	static uint8_t x183 = 55U;
	static int8_t x184 = INT8_MIN;

    t40 = (((x181==x182)!=x183)-x184);

    if (t40 != 129) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x185 = -1;
	int64_t x186 = -11390219151LL;
	int64_t x187 = INT64_MAX;
	int8_t x188 = INT8_MIN;
	int32_t t41 = 5;

    t41 = (((x185==x186)!=x187)-x188);

    if (t41 != 129) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x189 = -30;
	int64_t x190 = INT64_MIN;
	int16_t x191 = 0;
	uint16_t x192 = UINT16_MAX;
	int32_t t42 = -1287342;

    t42 = (((x189==x190)!=x191)-x192);

    if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x194 = INT8_MIN;
	uint32_t x195 = UINT32_MAX;
	int16_t x196 = INT16_MIN;
	static volatile int32_t t43 = -70682;

    t43 = (((x193==x194)!=x195)-x196);

    if (t43 != 32769) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x198 = INT8_MAX;
	uint32_t x199 = 144499U;
	int32_t x200 = 983746;

    t44 = (((x197==x198)!=x199)-x200);

    if (t44 != -983745) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x203 = INT8_MAX;
	uint16_t x204 = 206U;
	static int32_t t45 = 853;

    t45 = (((x201==x202)!=x203)-x204);

    if (t45 != -205) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x205 = 12U;
	int8_t x206 = INT8_MIN;
	static int16_t x207 = INT16_MAX;
	static volatile int32_t t46 = 600129;

    t46 = (((x205==x206)!=x207)-x208);

    if (t46 != -11) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x213 = INT8_MAX;
	int64_t x214 = INT64_MAX;
	int16_t x215 = INT16_MIN;
	volatile int32_t t47 = -1;

    t47 = (((x213==x214)!=x215)-x216);

    if (t47 != -32766) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = -4170385173755190LL;
	uint64_t x218 = 974755159068LLU;
	uint32_t x219 = 25931U;
	int16_t x220 = -35;

    t48 = (((x217==x218)!=x219)-x220);

    if (t48 != 36) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = 94;
	uint8_t x224 = 13U;
	int32_t t49 = 3257173;

    t49 = (((x221==x222)!=x223)-x224);

    if (t49 != -12) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x225 = 6543;
	uint64_t x226 = 5478098235758563482LLU;
	int16_t x227 = -3334;
	int32_t x228 = 7526424;
	int32_t t50 = -1;

    t50 = (((x225==x226)!=x227)-x228);

    if (t50 != -7526423) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x237 = -1;
	int32_t x238 = -1;
	uint8_t x239 = 0U;
	static uint8_t x240 = 9U;
	int32_t t51 = -4973631;

    t51 = (((x237==x238)!=x239)-x240);

    if (t51 != -8) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x241 = -2;
	int8_t x242 = -1;
	static uint8_t x243 = 12U;
	int16_t x244 = -75;
	volatile int32_t t52 = 191;

    t52 = (((x241==x242)!=x243)-x244);

    if (t52 != 76) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint32_t x245 = UINT32_MAX;
	volatile uint16_t x246 = 26454U;
	static int32_t x247 = INT32_MAX;
	static volatile uint16_t x248 = UINT16_MAX;
	int32_t t53 = -985;

    t53 = (((x245==x246)!=x247)-x248);

    if (t53 != -65534) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x249 = INT8_MIN;
	int64_t x250 = -1LL;
	volatile uint8_t x252 = UINT8_MAX;

    t54 = (((x249==x250)!=x251)-x252);

    if (t54 != -254) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x255 = 28;
	static uint16_t x256 = 1761U;
	static int32_t t55 = 1;

    t55 = (((x253==x254)!=x255)-x256);

    if (t55 != -1760) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x257 = INT16_MIN;
	int8_t x258 = -12;
	volatile uint8_t x260 = 22U;
	volatile int32_t t56 = -269417;

    t56 = (((x257==x258)!=x259)-x260);

    if (t56 != -21) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x261 = UINT64_MAX;
	uint32_t x262 = 0U;
	static int32_t x263 = -1;
	uint32_t x264 = 2247576U;
	volatile uint32_t t57 = 57U;

    t57 = (((x261==x262)!=x263)-x264);

    if (t57 != 4292719721U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x265 = -1;
	volatile int16_t x266 = -1;
	uint32_t x267 = 11580U;
	int32_t x268 = -1;
	int32_t t58 = -132699501;

    t58 = (((x265==x266)!=x267)-x268);

    if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x269 = INT64_MIN;
	volatile uint32_t x270 = UINT32_MAX;
	uint16_t x271 = 1195U;
	volatile uint64_t x272 = 2541490429521358LLU;
	uint64_t t59 = 11338449LLU;

    t59 = (((x269==x270)!=x271)-x272);

    if (t59 != 18444202583280030259LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x278 = 30658282306926LLU;
	static int8_t x279 = 14;
	int32_t t60 = -798;

    t60 = (((x277==x278)!=x279)-x280);

    if (t60 != -32766) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x281 = 3141;
	int32_t x283 = INT32_MIN;
	static volatile uint8_t x284 = UINT8_MAX;
	volatile int32_t t61 = -250590125;

    t61 = (((x281==x282)!=x283)-x284);

    if (t61 != -254) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x285 = 2;
	volatile int64_t x287 = INT64_MIN;
	int32_t x288 = 56;

    t62 = (((x285==x286)!=x287)-x288);

    if (t62 != -55) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x290 = INT8_MAX;
	uint16_t x291 = UINT16_MAX;
	uint32_t t63 = 6819U;

    t63 = (((x289==x290)!=x291)-x292);

    if (t63 != 4294439064U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MIN;
	int16_t x299 = -30;
	int8_t x300 = INT8_MIN;
	int32_t t64 = 2304;

    t64 = (((x297==x298)!=x299)-x300);

    if (t64 != 129) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x301 = -1;
	static int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MAX;

    t65 = (((x301==x302)!=x303)-x304);

    if (t65 != -335) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x305 = 6909U;
	int32_t x306 = -1;
	int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MIN;
	static volatile int32_t t66 = 945;

    t66 = (((x305==x306)!=x307)-x308);

    if (t66 != 129) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x309 = UINT8_MAX;
	uint64_t x310 = 515906LLU;
	int32_t x312 = -1;

    t67 = (((x309==x310)!=x311)-x312);

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x313 = 391397U;
	static int16_t x314 = INT16_MIN;
	static int64_t x315 = -31635026612537LL;
	int64_t x316 = 3LL;
	volatile int64_t t68 = -1219004552274011057LL;

    t68 = (((x313==x314)!=x315)-x316);

    if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x317 = INT16_MAX;
	uint32_t x319 = 428U;
	int32_t x320 = -14630;
	static int32_t t69 = 136;

    t69 = (((x317==x318)!=x319)-x320);

    if (t69 != 14631) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x321 = -1;
	int8_t x322 = -1;
	uint64_t x323 = 759194534274915681LLU;
	uint8_t x324 = 2U;
	static int32_t t70 = -7988623;

    t70 = (((x321==x322)!=x323)-x324);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x330 = -275364;
	int32_t x331 = INT32_MIN;
	uint8_t x332 = 1U;
	int32_t t71 = 111030635;

    t71 = (((x329==x330)!=x331)-x332);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x334 = -352;
	int8_t x335 = 6;
	static int64_t x336 = -1LL;
	int64_t t72 = -254035LL;

    t72 = (((x333==x334)!=x335)-x336);

    if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x341 = INT64_MIN;
	volatile int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t73 = -12137;

    t73 = (((x341==x342)!=x343)-x344);

    if (t73 != 129) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x345 = INT64_MAX;
	int8_t x346 = INT8_MIN;
	int8_t x347 = -1;
	uint64_t x348 = 2749141LLU;
	uint64_t t74 = 9376803LLU;

    t74 = (((x345==x346)!=x347)-x348);

    if (t74 != 18446744073706802476LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x349 = 1;
	volatile int16_t x350 = -1;
	volatile int32_t x351 = -1;
	static uint16_t x352 = UINT16_MAX;
	int32_t t75 = -1;

    t75 = (((x349==x350)!=x351)-x352);

    if (t75 != -65534) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x353 = 83617U;
	uint8_t x354 = 28U;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t76 = 5LLU;

    t76 = (((x353==x354)!=x355)-x356);

    if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x361 = INT32_MAX;
	int16_t x363 = INT16_MIN;
	static uint32_t x364 = UINT32_MAX;
	static volatile uint32_t t77 = 9372U;

    t77 = (((x361==x362)!=x363)-x364);

    if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x365 = INT16_MAX;
	uint16_t x368 = 56U;

    t78 = (((x365==x366)!=x367)-x368);

    if (t78 != -55) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x369 = UINT64_MAX;
	volatile int32_t x370 = -1;
	int32_t x371 = -1;
	static int8_t x372 = 6;
	static volatile int32_t t79 = 31475;

    t79 = (((x369==x370)!=x371)-x372);

    if (t79 != -5) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x373 = 6108;
	int16_t x375 = INT16_MIN;
	int8_t x376 = INT8_MIN;
	int32_t t80 = 0;

    t80 = (((x373==x374)!=x375)-x376);

    if (t80 != 129) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x377 = INT8_MIN;
	uint64_t x379 = 3777503127LLU;
	int64_t x380 = -700LL;

    t81 = (((x377==x378)!=x379)-x380);

    if (t81 != 701LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x385 = UINT64_MAX;
	static int8_t x386 = INT8_MIN;
	static int16_t x387 = -26;
	int32_t t82 = -1;

    t82 = (((x385==x386)!=x387)-x388);

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x389 = -1LL;
	volatile int32_t x390 = INT32_MIN;
	uint8_t x391 = UINT8_MAX;
	volatile int8_t x392 = INT8_MIN;

    t83 = (((x389==x390)!=x391)-x392);

    if (t83 != 129) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x393 = -1LL;
	int8_t x394 = INT8_MIN;
	int8_t x395 = 1;
	uint8_t x396 = 114U;
	volatile int32_t t84 = -150104017;

    t84 = (((x393==x394)!=x395)-x396);

    if (t84 != -113) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x397 = -1LL;
	int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	int64_t x400 = 32909354259256LL;
	static volatile int64_t t85 = 125317179280311998LL;

    t85 = (((x397==x398)!=x399)-x400);

    if (t85 != -32909354259255LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x404 = INT16_MIN;
	int32_t t86 = -1;

    t86 = (((x401==x402)!=x403)-x404);

    if (t86 != 32769) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x405 = 14814072U;
	int8_t x407 = -14;
	int8_t x408 = -1;
	int32_t t87 = 852;

    t87 = (((x405==x406)!=x407)-x408);

    if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x409 = INT32_MIN;
	static int32_t x411 = INT32_MIN;
	int64_t x412 = -160792LL;
	int64_t t88 = 4062399621LL;

    t88 = (((x409==x410)!=x411)-x412);

    if (t88 != 160793LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x417 = UINT8_MAX;
	volatile uint32_t x418 = 16493338U;
	volatile uint32_t x419 = 5U;
	int32_t x420 = 187853067;

    t89 = (((x417==x418)!=x419)-x420);

    if (t89 != -187853066) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x423 = UINT32_MAX;
	uint32_t x424 = 5357U;
	static uint32_t t90 = 943031955U;

    t90 = (((x421==x422)!=x423)-x424);

    if (t90 != 4294961940U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x426 = -1;
	static int16_t x427 = -1429;
	static int32_t t91 = 4870470;

    t91 = (((x425==x426)!=x427)-x428);

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x429 = INT64_MIN;
	uint64_t x430 = UINT64_MAX;
	uint32_t x431 = 808U;
	static uint8_t x432 = 29U;
	static int32_t t92 = -1;

    t92 = (((x429==x430)!=x431)-x432);

    if (t92 != -28) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x433 = 31LL;
	volatile uint16_t x434 = UINT16_MAX;
	volatile int8_t x435 = 17;

    t93 = (((x433==x434)!=x435)-x436);

    if (t93 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x438 = -1;
	int32_t x439 = INT32_MAX;
	volatile uint32_t x440 = 51004U;

    t94 = (((x437==x438)!=x439)-x440);

    if (t94 != 4294916293U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x442 = -1;
	int16_t x443 = INT16_MAX;
	int8_t x444 = -2;

    t95 = (((x441==x442)!=x443)-x444);

    if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x445 = INT32_MIN;
	uint16_t x446 = 31555U;
	volatile int64_t x447 = INT64_MIN;
	volatile int32_t x448 = -6452655;
	static int32_t t96 = 0;

    t96 = (((x445==x446)!=x447)-x448);

    if (t96 != 6452656) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x449 = UINT64_MAX;
	int32_t x450 = INT32_MIN;
	int32_t x451 = INT32_MIN;
	uint64_t x452 = UINT64_MAX;

    t97 = (((x449==x450)!=x451)-x452);

    if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x453 = INT16_MIN;
	uint64_t x454 = UINT64_MAX;
	int32_t x455 = -1;
	uint32_t x456 = 71741113U;
	uint32_t t98 = 39785U;

    t98 = (((x453==x454)!=x455)-x456);

    if (t98 != 4223226184U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x457 = 28613LL;
	uint16_t x458 = 56U;
	static uint32_t x459 = 61335U;
	int64_t x460 = -1LL;
	volatile int64_t t99 = 116LL;

    t99 = (((x457==x458)!=x459)-x460);

    if (t99 != 2LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x461 = UINT32_MAX;
	uint16_t x462 = UINT16_MAX;
	int16_t x463 = INT16_MIN;
	volatile uint16_t x464 = 9U;
	volatile int32_t t100 = 20;

    t100 = (((x461==x462)!=x463)-x464);

    if (t100 != -8) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x465 = -1;
	int32_t x466 = -1;
	static uint32_t x467 = UINT32_MAX;
	int8_t x468 = -1;

    t101 = (((x465==x466)!=x467)-x468);

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x469 = -1LL;
	volatile int32_t x470 = INT32_MIN;
	volatile int16_t x471 = INT16_MAX;
	int8_t x472 = -60;
	static volatile int32_t t102 = -1024912;

    t102 = (((x469==x470)!=x471)-x472);

    if (t102 != 61) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x477 = 180U;
	int8_t x478 = -2;
	int8_t x479 = INT8_MIN;
	uint16_t x480 = UINT16_MAX;
	volatile int32_t t103 = -4;

    t103 = (((x477==x478)!=x479)-x480);

    if (t103 != -65534) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x481 = INT32_MIN;
	int8_t x482 = INT8_MIN;
	int64_t x484 = -1LL;
	static volatile int64_t t104 = -838334411LL;

    t104 = (((x481==x482)!=x483)-x484);

    if (t104 != 2LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x485 = -1;
	uint8_t x486 = 3U;
	volatile int8_t x487 = INT8_MAX;

    t105 = (((x485==x486)!=x487)-x488);

    if (t105 != -772) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x489 = INT32_MIN;
	static int16_t x490 = INT16_MIN;
	int32_t x491 = INT32_MIN;
	uint32_t x492 = 10U;

    t106 = (((x489==x490)!=x491)-x492);

    if (t106 != 4294967287U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x498 = -256;

    t107 = (((x497==x498)!=x499)-x500);

    if (t107 != 4294966876U) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x501 = -1LL;
	int8_t x502 = 0;
	volatile uint64_t x503 = 160109719090371726LLU;
	int32_t x504 = -159238;
	int32_t t108 = 660511160;

    t108 = (((x501==x502)!=x503)-x504);

    if (t108 != 159239) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x509 = 43U;
	static int32_t x510 = -1;

    t109 = (((x509==x510)!=x511)-x512);

    if (t109 != 2LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x513 = -1980;
	uint32_t x515 = UINT32_MAX;
	int64_t x516 = 188LL;
	int64_t t110 = 23762354515201147LL;

    t110 = (((x513==x514)!=x515)-x516);

    if (t110 != -187LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x517 = INT32_MAX;
	volatile int64_t x518 = INT64_MIN;
	static uint8_t x519 = 8U;
	int32_t x520 = 57;

    t111 = (((x517==x518)!=x519)-x520);

    if (t111 != -56) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x521 = INT16_MIN;
	static int16_t x523 = -1;
	int8_t x524 = INT8_MAX;
	int32_t t112 = 53543;

    t112 = (((x521==x522)!=x523)-x524);

    if (t112 != -126) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x527 = INT32_MIN;
	uint16_t x528 = 0U;
	static volatile int32_t t113 = -833;

    t113 = (((x525==x526)!=x527)-x528);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x529 = INT64_MAX;
	int8_t x530 = INT8_MAX;
	uint8_t x531 = 0U;
	uint64_t x532 = 12414LLU;
	uint64_t t114 = 165705323505LLU;

    t114 = (((x529==x530)!=x531)-x532);

    if (t114 != 18446744073709539202LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x533 = UINT64_MAX;
	uint64_t x534 = 2341061665612LLU;
	int8_t x535 = INT8_MAX;
	volatile int32_t x536 = -96549;
	static int32_t t115 = 9195;

    t115 = (((x533==x534)!=x535)-x536);

    if (t115 != 96550) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x549 = -780243;
	int32_t x550 = INT32_MAX;
	volatile int8_t x551 = -1;
	uint64_t x552 = 15697892979228LLU;
	static volatile uint64_t t116 = 3005642982806806972LLU;

    t116 = (((x549==x550)!=x551)-x552);

    if (t116 != 18446728375816572389LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x553 = UINT8_MAX;
	volatile uint16_t x554 = 980U;
	int8_t x555 = INT8_MIN;
	uint32_t x556 = 0U;
	uint32_t t117 = 88588U;

    t117 = (((x553==x554)!=x555)-x556);

    if (t117 != 1U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x558 = 1904U;
	uint8_t x559 = 40U;
	int64_t x560 = 13128468178612927LL;
	volatile int64_t t118 = -115619777622257LL;

    t118 = (((x557==x558)!=x559)-x560);

    if (t118 != -13128468178612926LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x561 = INT32_MAX;
	static uint8_t x562 = 15U;
	volatile int32_t x563 = 537949571;
	int16_t x564 = -1;
	int32_t t119 = 363685325;

    t119 = (((x561==x562)!=x563)-x564);

    if (t119 != 2) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x565 = INT32_MIN;
	volatile int8_t x566 = INT8_MIN;
	int32_t x567 = INT32_MIN;
	uint32_t x568 = UINT32_MAX;

    t120 = (((x565==x566)!=x567)-x568);

    if (t120 != 2U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x569 = -1;
	int32_t x570 = -3392;
	volatile int64_t x571 = INT64_MAX;
	volatile int32_t t121 = 15;

    t121 = (((x569==x570)!=x571)-x572);

    if (t121 != -6836) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x575 = INT64_MAX;
	int16_t x576 = 1;
	static volatile int32_t t122 = 60825217;

    t122 = (((x573==x574)!=x575)-x576);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x577 = INT64_MAX;
	static int32_t x578 = INT32_MIN;
	int64_t x579 = -1LL;
	uint32_t x580 = 505461061U;
	uint32_t t123 = 4U;

    t123 = (((x577==x578)!=x579)-x580);

    if (t123 != 3789506236U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x581 = 30U;
	int8_t x583 = INT8_MIN;
	volatile int32_t t124 = 81225866;

    t124 = (((x581==x582)!=x583)-x584);

    if (t124 != -65534) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x585 = INT8_MAX;
	uint8_t x586 = UINT8_MAX;
	int8_t x587 = -16;
	uint32_t x588 = UINT32_MAX;
	uint32_t t125 = 2317U;

    t125 = (((x585==x586)!=x587)-x588);

    if (t125 != 2U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x589 = -1;
	int16_t x591 = INT16_MIN;
	static uint64_t x592 = UINT64_MAX;
	uint64_t t126 = 356026LLU;

    t126 = (((x589==x590)!=x591)-x592);

    if (t126 != 2LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x593 = -1167815863074909LL;
	int8_t x594 = INT8_MIN;
	static int16_t x595 = -1;
	int32_t x596 = -1;
	volatile int32_t t127 = 15;

    t127 = (((x593==x594)!=x595)-x596);

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x601 = INT32_MAX;
	static int8_t x602 = 3;
	volatile int32_t x603 = INT32_MIN;
	static int64_t x604 = -1761761210005730789LL;
	int64_t t128 = 13809221467LL;

    t128 = (((x601==x602)!=x603)-x604);

    if (t128 != 1761761210005730790LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x605 = INT64_MAX;
	int32_t x606 = -13;
	int8_t x607 = INT8_MIN;
	int16_t x608 = -1;
	volatile int32_t t129 = 469141;

    t129 = (((x605==x606)!=x607)-x608);

    if (t129 != 2) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x613 = INT32_MAX;
	int8_t x614 = -1;
	static int8_t x615 = 1;
	static int32_t t130 = -2363404;

    t130 = (((x613==x614)!=x615)-x616);

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x618 = -86942;
	int64_t x619 = 14785236635LL;
	int16_t x620 = 623;
	int32_t t131 = 1;

    t131 = (((x617==x618)!=x619)-x620);

    if (t131 != -622) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x621 = 1U;
	int64_t x622 = INT64_MAX;
	static uint32_t x623 = UINT32_MAX;
	int8_t x624 = INT8_MAX;
	volatile int32_t t132 = 202;

    t132 = (((x621==x622)!=x623)-x624);

    if (t132 != -126) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x625 = INT8_MIN;
	int8_t x626 = 22;
	int32_t x627 = INT32_MIN;
	uint8_t x628 = UINT8_MAX;
	int32_t t133 = -36664016;

    t133 = (((x625==x626)!=x627)-x628);

    if (t133 != -254) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x633 = INT32_MIN;
	static int8_t x636 = INT8_MIN;
	static volatile int32_t t134 = -2883110;

    t134 = (((x633==x634)!=x635)-x636);

    if (t134 != 129) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x637 = INT64_MIN;
	uint32_t x638 = 10U;
	volatile int8_t x639 = INT8_MAX;
	int32_t x640 = 126988;
	volatile int32_t t135 = 1;

    t135 = (((x637==x638)!=x639)-x640);

    if (t135 != -126987) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x641 = 45U;
	int8_t x642 = INT8_MAX;
	static uint16_t x643 = UINT16_MAX;
	uint32_t x644 = 5459U;
	static volatile uint32_t t136 = 519U;

    t136 = (((x641==x642)!=x643)-x644);

    if (t136 != 4294961838U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x645 = INT16_MAX;
	static volatile int32_t x646 = INT32_MIN;
	volatile int32_t x648 = 100179;
	static volatile int32_t t137 = 205846050;

    t137 = (((x645==x646)!=x647)-x648);

    if (t137 != -100178) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int16_t x650 = INT16_MAX;
	int8_t x651 = INT8_MAX;
	int8_t x652 = INT8_MAX;
	int32_t t138 = 214716907;

    t138 = (((x649==x650)!=x651)-x652);

    if (t138 != -126) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x654 = -1;
	int16_t x655 = 4;
	static volatile uint64_t t139 = 10884928084928LLU;

    t139 = (((x653==x654)!=x655)-x656);

    if (t139 != 18446744073709547957LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x657 = -3;
	static volatile uint16_t x658 = 3U;
	uint64_t x659 = 7LLU;
	int16_t x660 = INT16_MAX;
	volatile int32_t t140 = -400;

    t140 = (((x657==x658)!=x659)-x660);

    if (t140 != -32766) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x661 = UINT64_MAX;
	int8_t x662 = INT8_MIN;
	int16_t x663 = 1;
	int16_t x664 = -36;

    t141 = (((x661==x662)!=x663)-x664);

    if (t141 != 37) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x665 = INT32_MAX;
	volatile int64_t x666 = -1LL;
	int64_t x667 = INT64_MIN;
	int32_t t142 = 405;

    t142 = (((x665==x666)!=x667)-x668);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x669 = -1;
	static volatile int64_t x670 = INT64_MAX;
	volatile int8_t x671 = INT8_MIN;
	int8_t x672 = INT8_MIN;
	volatile int32_t t143 = 172;

    t143 = (((x669==x670)!=x671)-x672);

    if (t143 != 129) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x673 = 50U;
	static uint8_t x675 = 4U;

    t144 = (((x673==x674)!=x675)-x676);

    if (t144 != 600) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x680 = INT8_MIN;
	volatile int32_t t145 = 0;

    t145 = (((x677==x678)!=x679)-x680);

    if (t145 != 129) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x681 = 2612133470797724LLU;
	int16_t x682 = INT16_MIN;
	static volatile int8_t x683 = 1;
	volatile uint32_t t146 = 1608U;

    t146 = (((x681==x682)!=x683)-x684);

    if (t146 != 4239907813U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x685 = -1;
	int8_t x686 = -45;
	volatile int16_t x687 = INT16_MIN;
	uint8_t x688 = UINT8_MAX;
	volatile int32_t t147 = 563140;

    t147 = (((x685==x686)!=x687)-x688);

    if (t147 != -254) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x689 = 5U;
	uint8_t x690 = UINT8_MAX;
	int16_t x691 = INT16_MAX;
	static int32_t t148 = -1348221;

    t148 = (((x689==x690)!=x691)-x692);

    if (t148 != -32766) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x693 = -1;
	int64_t x694 = -1LL;
	int16_t x696 = INT16_MAX;
	volatile int32_t t149 = -3;

    t149 = (((x693==x694)!=x695)-x696);

    if (t149 != -32766) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x701 = -1LL;
	int8_t x702 = 7;
	int8_t x703 = -1;
	int64_t t150 = 90730108161488LL;

    t150 = (((x701==x702)!=x703)-x704);

    if (t150 != 2LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x706 = UINT64_MAX;
	volatile uint64_t x707 = 4592058LLU;
	volatile int32_t t151 = -54;

    t151 = (((x705==x706)!=x707)-x708);

    if (t151 != -3587) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x709 = 124U;
	uint8_t x711 = 0U;
	uint16_t x712 = 2531U;
	static volatile int32_t t152 = -8824412;

    t152 = (((x709==x710)!=x711)-x712);

    if (t152 != -2531) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x717 = -1;
	uint16_t x719 = UINT16_MAX;
	uint32_t t153 = 1166096921U;

    t153 = (((x717==x718)!=x719)-x720);

    if (t153 != 2U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x722 = INT64_MIN;
	uint64_t x723 = UINT64_MAX;
	int64_t x724 = -37663339LL;
	volatile int64_t t154 = 34LL;

    t154 = (((x721==x722)!=x723)-x724);

    if (t154 != 37663340LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x725 = -1;
	int32_t x726 = INT32_MIN;
	volatile uint16_t x727 = 2U;
	uint8_t x728 = 13U;
	int32_t t155 = 52521;

    t155 = (((x725==x726)!=x727)-x728);

    if (t155 != -12) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x729 = 52U;
	int16_t x731 = INT16_MIN;
	volatile uint64_t t156 = 99LLU;

    t156 = (((x729==x730)!=x731)-x732);

    if (t156 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x739 = UINT16_MAX;
	uint64_t t157 = 98868551566LLU;

    t157 = (((x737==x738)!=x739)-x740);

    if (t157 != 2LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x741 = -1LL;
	uint16_t x742 = UINT16_MAX;
	volatile uint16_t x743 = 1U;
	int8_t x744 = INT8_MIN;
	static volatile int32_t t158 = -24880574;

    t158 = (((x741==x742)!=x743)-x744);

    if (t158 != 129) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x747 = UINT32_MAX;
	int16_t x748 = -1;
	int32_t t159 = -15;

    t159 = (((x745==x746)!=x747)-x748);

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x754 = 0U;
	uint64_t x755 = UINT64_MAX;
	uint8_t x756 = 0U;
	int32_t t160 = -245872;

    t160 = (((x753==x754)!=x755)-x756);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x758 = 117U;
	int64_t x760 = INT64_MAX;
	static int64_t t161 = 1200985889566625251LL;

    t161 = (((x757==x758)!=x759)-x760);

    if (t161 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x765 = 521U;
	int64_t x766 = 204746400267LL;
	static int32_t x767 = -1;
	volatile uint32_t t162 = 19730086U;

    t162 = (((x765==x766)!=x767)-x768);

    if (t162 != 4294965498U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x769 = 6210U;
	uint16_t x771 = UINT16_MAX;
	uint32_t x772 = 29U;

    t163 = (((x769==x770)!=x771)-x772);

    if (t163 != 4294967268U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x773 = INT8_MIN;
	volatile int8_t x774 = -1;
	static int64_t x775 = -1LL;
	int8_t x776 = -1;

    t164 = (((x773==x774)!=x775)-x776);

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x779 = -540775520;
	volatile int8_t x780 = INT8_MIN;
	int32_t t165 = -747329;

    t165 = (((x777==x778)!=x779)-x780);

    if (t165 != 129) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x781 = 548799LL;
	volatile int64_t x782 = INT64_MIN;
	int32_t x783 = INT32_MIN;
	volatile int16_t x784 = -1;
	int32_t t166 = -21168;

    t166 = (((x781==x782)!=x783)-x784);

    if (t166 != 2) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x785 = -1;
	uint32_t x788 = 0U;
	volatile uint32_t t167 = 449765638U;

    t167 = (((x785==x786)!=x787)-x788);

    if (t167 != 1U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x794 = -1;
	int8_t x795 = 7;
	int32_t x796 = -1;
	static volatile int32_t t168 = 1;

    t168 = (((x793==x794)!=x795)-x796);

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x797 = 26922586U;
	static int16_t x798 = INT16_MAX;
	int16_t x799 = INT16_MIN;
	volatile uint8_t x800 = UINT8_MAX;
	volatile int32_t t169 = -1;

    t169 = (((x797==x798)!=x799)-x800);

    if (t169 != -254) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x801 = 3084U;
	int16_t x802 = INT16_MIN;
	static uint64_t x803 = UINT64_MAX;
	volatile int32_t x804 = INT32_MAX;
	volatile int32_t t170 = 12;

    t170 = (((x801==x802)!=x803)-x804);

    if (t170 != -2147483646) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x805 = UINT64_MAX;
	uint64_t x806 = 1LLU;
	int64_t x807 = 351703255809LL;
	int32_t x808 = 94290411;
	int32_t t171 = -155087;

    t171 = (((x805==x806)!=x807)-x808);

    if (t171 != -94290410) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x809 = INT16_MIN;
	volatile int64_t x810 = INT64_MAX;
	uint64_t x811 = 2379777149126333LLU;
	int8_t x812 = INT8_MIN;

    t172 = (((x809==x810)!=x811)-x812);

    if (t172 != 129) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x813 = UINT32_MAX;
	int32_t x816 = -386;
	static int32_t t173 = 41;

    t173 = (((x813==x814)!=x815)-x816);

    if (t173 != 387) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x817 = -1LL;
	int16_t x818 = 1;
	static int32_t x819 = 1023602532;
	int32_t t174 = -55423038;

    t174 = (((x817==x818)!=x819)-x820);

    if (t174 != -84572) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x821 = INT64_MIN;
	int64_t x822 = -1LL;
	volatile uint64_t x823 = 8852LLU;
	static int32_t x824 = 0;

    t175 = (((x821==x822)!=x823)-x824);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x829 = 159218U;
	static uint32_t x831 = UINT32_MAX;
	static uint32_t x832 = 578477U;
	uint32_t t176 = 17167U;

    t176 = (((x829==x830)!=x831)-x832);

    if (t176 != 4294388820U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x837 = -1;
	static int16_t x838 = INT16_MIN;
	static uint16_t x839 = 640U;
	int32_t t177 = -49407;

    t177 = (((x837==x838)!=x839)-x840);

    if (t177 != -126) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x841 = 1273799;
	volatile uint32_t x842 = 27974729U;
	uint32_t x843 = 811U;
	volatile uint32_t t178 = 447988663U;

    t178 = (((x841==x842)!=x843)-x844);

    if (t178 != 4294967238U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x845 = 3233304772LLU;
	int64_t x847 = INT64_MIN;
	int16_t x848 = INT16_MIN;
	volatile int32_t t179 = -2178;

    t179 = (((x845==x846)!=x847)-x848);

    if (t179 != 32769) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x849 = INT16_MIN;
	int32_t x850 = INT32_MIN;
	int64_t x851 = 1LL;
	int64_t x852 = 80LL;
	int64_t t180 = 248669860LL;

    t180 = (((x849==x850)!=x851)-x852);

    if (t180 != -79LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x854 = -5704704924910LL;
	uint16_t x855 = 130U;
	static int8_t x856 = INT8_MAX;
	static int32_t t181 = 50734084;

    t181 = (((x853==x854)!=x855)-x856);

    if (t181 != -126) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x858 = -1;
	volatile uint16_t x859 = 395U;
	int8_t x860 = INT8_MIN;
	int32_t t182 = 1609;

    t182 = (((x857==x858)!=x859)-x860);

    if (t182 != 129) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x861 = -1;
	int64_t x862 = INT64_MAX;
	static int8_t x863 = -1;
	uint16_t x864 = UINT16_MAX;

    t183 = (((x861==x862)!=x863)-x864);

    if (t183 != -65534) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x865 = 12120U;
	int8_t x866 = -14;
	uint32_t x867 = UINT32_MAX;
	static volatile int8_t x868 = 1;
	int32_t t184 = -59464526;

    t184 = (((x865==x866)!=x867)-x868);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x870 = 7U;
	static int8_t x871 = 3;
	uint16_t x872 = UINT16_MAX;
	int32_t t185 = -22630405;

    t185 = (((x869==x870)!=x871)-x872);

    if (t185 != -65534) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x874 = INT16_MIN;
	static int8_t x875 = -1;
	int8_t x876 = -1;
	int32_t t186 = 7;

    t186 = (((x873==x874)!=x875)-x876);

    if (t186 != 2) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x877 = 44537534391210404LL;
	uint8_t x878 = 3U;
	uint16_t x879 = UINT16_MAX;
	int8_t x880 = INT8_MIN;
	volatile int32_t t187 = 25897376;

    t187 = (((x877==x878)!=x879)-x880);

    if (t187 != 129) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x881 = 9U;
	int64_t x882 = -1LL;
	uint64_t x884 = 35751292399LLU;
	uint64_t t188 = 266LLU;

    t188 = (((x881==x882)!=x883)-x884);

    if (t188 != 18446744037958259218LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x885 = INT32_MIN;
	static int64_t x886 = INT64_MAX;
	static int16_t x887 = -1;
	int8_t x888 = INT8_MIN;

    t189 = (((x885==x886)!=x887)-x888);

    if (t189 != 129) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x889 = -1;
	int16_t x890 = INT16_MAX;
	static volatile uint8_t x891 = UINT8_MAX;
	int64_t x892 = -33798442941998LL;
	static volatile int64_t t190 = 1LL;

    t190 = (((x889==x890)!=x891)-x892);

    if (t190 != 33798442941999LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x897 = -1;
	int64_t x898 = INT64_MIN;
	int8_t x899 = 4;
	int64_t x900 = -3LL;
	int64_t t191 = -15574LL;

    t191 = (((x897==x898)!=x899)-x900);

    if (t191 != 4LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x902 = UINT16_MAX;
	uint32_t t192 = 5754749U;

    t192 = (((x901==x902)!=x903)-x904);

    if (t192 != 4294326376U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x905 = -13435;
	uint32_t x906 = UINT32_MAX;
	int8_t x908 = INT8_MAX;
	volatile int32_t t193 = -506;

    t193 = (((x905==x906)!=x907)-x908);

    if (t193 != -126) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x909 = 6;
	volatile int32_t x910 = INT32_MIN;
	uint32_t x911 = 2U;
	volatile uint32_t x912 = UINT32_MAX;
	volatile uint32_t t194 = 1U;

    t194 = (((x909==x910)!=x911)-x912);

    if (t194 != 2U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x914 = -103938779;
	int16_t x916 = 5;
	static volatile int32_t t195 = 369596517;

    t195 = (((x913==x914)!=x915)-x916);

    if (t195 != -4) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x917 = INT64_MIN;
	static int8_t x918 = -1;
	int32_t x919 = INT32_MIN;
	int8_t x920 = -1;
	static int32_t t196 = -15;

    t196 = (((x917==x918)!=x919)-x920);

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x921 = 50695708019845170LLU;
	static int16_t x922 = -1;
	int64_t x923 = 1674315781252655LL;
	static int16_t x924 = INT16_MIN;
	static int32_t t197 = -2;

    t197 = (((x921==x922)!=x923)-x924);

    if (t197 != 32769) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x925 = INT32_MAX;
	uint64_t x926 = UINT64_MAX;
	static int8_t x927 = INT8_MIN;
	uint16_t x928 = 15U;
	static int32_t t198 = 24;

    t198 = (((x925==x926)!=x927)-x928);

    if (t198 != -14) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x929 = INT32_MAX;
	uint32_t x930 = 677770101U;
	static int32_t x931 = INT32_MIN;
	volatile int8_t x932 = INT8_MAX;

    t199 = (((x929==x930)!=x931)-x932);

    if (t199 != -126) { NG(); } else { ; }
	
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

