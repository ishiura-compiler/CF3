
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

static int16_t x8 = INT16_MIN;
volatile int16_t x11 = INT16_MAX;
int64_t x12 = -79910058002339774LL;
int64_t t1 = -4548LL;
static volatile uint32_t x13 = 1479776U;
int64_t x14 = -5LL;
int32_t x15 = INT32_MIN;
int16_t x16 = -1;
int8_t x20 = -1;
uint32_t x22 = 4653221U;
uint8_t x23 = 0U;
static uint8_t x38 = UINT8_MAX;
uint32_t x52 = 2027628525U;
uint32_t t10 = 2277U;
volatile int16_t x62 = INT16_MAX;
static int32_t t13 = 30695959;
static uint32_t x73 = 40386U;
uint32_t t14 = 934205591U;
static uint16_t x79 = UINT16_MAX;
uint64_t x88 = 129523LLU;
int8_t x91 = INT8_MIN;
uint8_t x103 = UINT8_MAX;
static uint64_t t23 = 1662120961LLU;
uint16_t x114 = 16038U;
int64_t t24 = -141LL;
uint16_t x120 = 27U;
uint8_t x130 = 3U;
int64_t x143 = INT64_MIN;
volatile int16_t x147 = INT16_MIN;
int32_t x148 = INT32_MIN;
uint32_t x149 = 1151828U;
int32_t t32 = 4778;
uint64_t x161 = UINT64_MAX;
int32_t x168 = -1;
int8_t x172 = INT8_MIN;
uint8_t x174 = 1U;
int64_t x184 = INT64_MIN;
uint64_t t39 = 35716146142LLU;
volatile int32_t x190 = -1;
static uint16_t x208 = 439U;
static int32_t t45 = -52;
uint32_t x210 = 198092U;
int32_t x212 = -1996889;
uint32_t x213 = 2U;
int8_t x219 = INT8_MAX;
int32_t t50 = 106931561;
uint64_t x235 = 30LLU;
int64_t x240 = INT64_MIN;
int64_t x244 = 1145320704381LL;
volatile int64_t t54 = 72956128443890055LL;
int8_t x250 = INT8_MIN;
volatile uint32_t x252 = 106838994U;
int16_t x259 = INT16_MAX;
uint8_t x261 = 0U;
uint64_t x263 = 463202286044LLU;
int64_t x268 = INT64_MIN;
uint8_t x279 = 9U;
volatile int64_t t62 = 1104738LL;
volatile int64_t x285 = -1LL;
int64_t x289 = INT64_MIN;
int32_t x294 = INT32_MAX;
int32_t x295 = INT32_MIN;
static volatile uint64_t x296 = UINT64_MAX;
static volatile int64_t x304 = 3017487879LL;
uint64_t x310 = 197LLU;
int32_t x316 = -3258576;
int8_t x323 = INT8_MIN;
uint32_t x327 = UINT32_MAX;
int8_t x329 = INT8_MIN;
volatile int32_t t72 = -229105;
volatile uint8_t x335 = UINT8_MAX;
uint64_t x344 = UINT64_MAX;
int8_t x347 = INT8_MAX;
int32_t x348 = INT32_MIN;
volatile int32_t t75 = -15;
uint32_t x352 = UINT32_MAX;
volatile int32_t t77 = 291015;
int32_t t80 = 6;
int32_t x371 = INT32_MIN;
int8_t x372 = 0;
int8_t x379 = INT8_MIN;
volatile uint16_t x380 = 8267U;
int16_t x393 = INT16_MIN;
static uint64_t x398 = 4LLU;
volatile uint16_t x416 = UINT16_MAX;
volatile int64_t x420 = -5391942041LL;
volatile int64_t x427 = -1LL;
int8_t x435 = INT8_MIN;
int64_t t93 = -914642365613LL;
int64_t x437 = 14263LL;
static volatile uint8_t x440 = 108U;
volatile int64_t t94 = -29136830335856LL;
volatile uint64_t t95 = 17106518971LLU;
static uint64_t t96 = 18LLU;
int8_t x454 = INT8_MAX;
static uint16_t x457 = 3U;
static volatile int64_t t100 = 75584042772310LL;
int64_t x471 = -1LL;
volatile uint32_t x478 = 1U;
int8_t x494 = -23;
volatile uint32_t t105 = 1011273720U;
int64_t x497 = INT64_MAX;
static int64_t x502 = 2012LL;
static volatile uint64_t x526 = 216827030679558LLU;
static uint64_t t111 = 386796710160LLU;
volatile int8_t x531 = -1;
int32_t t112 = -158;
volatile int16_t x533 = INT16_MIN;
volatile int8_t x535 = 1;
volatile int16_t x542 = INT16_MIN;
int64_t x552 = INT64_MIN;
volatile int64_t t117 = -675461LL;
uint16_t x554 = 0U;
volatile int32_t t118 = 543338035;
volatile uint32_t x571 = 26059964U;
static volatile int32_t x575 = 31086683;
volatile int32_t x576 = INT32_MAX;
int32_t x580 = 470071302;
volatile uint64_t t124 = 105310995626LLU;
uint8_t x583 = UINT8_MAX;
uint32_t x597 = 1686723802U;
int16_t x600 = INT16_MAX;
static int32_t x603 = -11877309;
static int32_t x605 = INT32_MAX;
int32_t x606 = 736;
uint32_t x610 = UINT32_MAX;
static volatile int64_t x611 = -7700018LL;
static int16_t x613 = INT16_MIN;
uint64_t x615 = UINT64_MAX;
static int64_t x616 = INT64_MIN;
uint64_t t133 = 107005845LLU;
uint16_t x618 = 25U;
uint32_t x626 = 19621034U;
static volatile int32_t x628 = INT32_MIN;
static uint32_t t139 = 21510U;
static volatile uint8_t x642 = 20U;
static int64_t x647 = INT64_MIN;
int8_t x650 = 0;
static volatile int32_t t142 = -741976;
uint64_t t143 = 436062280175635989LLU;
int16_t x658 = INT16_MIN;
uint64_t x659 = 160575LLU;
uint8_t x667 = UINT8_MAX;
int64_t x668 = INT64_MIN;
int64_t x672 = -1LL;
volatile uint32_t x677 = UINT32_MAX;
int16_t x682 = 2;
static uint64_t t148 = 121005476LLU;
int16_t x690 = INT16_MIN;
uint8_t x693 = UINT8_MAX;
volatile int64_t t152 = -1537613982LL;
int64_t t155 = -15044560686LL;
int64_t t156 = 7714LL;
uint16_t x717 = 16343U;
volatile uint32_t x721 = 7833U;
int16_t x724 = -848;
static uint8_t x726 = 45U;
static int32_t x742 = -108495;
int32_t t162 = -2363252;
int16_t x753 = -2;
int16_t x754 = -1;
uint32_t x757 = UINT32_MAX;
volatile int8_t x758 = -1;
uint32_t x759 = 875572U;
int16_t x760 = -1716;
volatile int16_t x764 = INT16_MIN;
int64_t x765 = -1LL;
static uint16_t x767 = 20U;
volatile int64_t t168 = -2601546LL;
volatile int64_t x772 = INT64_MIN;
int64_t x783 = INT64_MIN;
int16_t x792 = 171;
uint64_t x798 = 9342352295030699LLU;
static uint8_t x803 = UINT8_MAX;
int16_t x805 = -1;
uint8_t x808 = 1U;
uint32_t x815 = 0U;
int32_t x816 = 397112;
volatile uint64_t t179 = 8476150832068767LLU;
static int8_t x831 = -1;
int64_t x836 = INT64_MIN;
volatile uint8_t x838 = UINT8_MAX;
uint8_t x839 = 61U;
volatile int32_t t183 = -48945;
int32_t x853 = 80271;
static uint16_t x854 = 0U;
int64_t x855 = 2LL;
uint8_t x860 = 2U;
int64_t x874 = -27013873LL;
volatile uint64_t x876 = 1LLU;
uint64_t x880 = UINT64_MAX;
uint32_t x883 = 1641391715U;
int8_t x887 = -1;
volatile uint16_t x888 = UINT16_MAX;
volatile int64_t x893 = INT64_MIN;
int8_t x896 = -1;
int16_t x898 = INT16_MIN;
int64_t x911 = INT64_MAX;
int64_t x912 = INT64_MIN;
int32_t x913 = INT32_MIN;
uint16_t x920 = 3U;


void f0(void) {
    	int16_t x5 = 1;
	int16_t x6 = INT16_MIN;
	int64_t x7 = 22LL;
	static volatile int64_t t0 = -1603752666LL;

    t0 = ((x5/(x6+x7))&x8);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = -1;
	static int8_t x10 = INT8_MIN;

    t1 = ((x9/(x10+x11))&x12);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t t2 = -4LL;

    t2 = ((x13/(x14+x15))&x16);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x17 = INT32_MAX;
	int8_t x18 = 6;
	static volatile int8_t x19 = -18;
	volatile int32_t t3 = 1;

    t3 = ((x17/(x18+x19))&x20);

    if (t3 != -178956970) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = 13881U;
	volatile int16_t x24 = INT16_MAX;
	volatile uint32_t t4 = 78U;

    t4 = ((x21/(x22+x23))&x24);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint16_t x25 = 3135U;
	int64_t x26 = -1LL;
	uint64_t x27 = 92265LLU;
	int16_t x28 = INT16_MAX;
	static volatile uint64_t t5 = 2093322LLU;

    t5 = ((x25/(x26+x27))&x28);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = 23418461721811LLU;
	uint16_t x30 = 902U;
	volatile int16_t x31 = INT16_MIN;
	int64_t x32 = -1LL;
	static volatile uint64_t t6 = 483902428222LLU;

    t6 = ((x29/(x30+x31))&x32);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x37 = INT8_MIN;
	uint32_t x39 = 11449312U;
	uint16_t x40 = 23479U;
	uint32_t t7 = 96465082U;

    t7 = ((x37/(x38+x39))&x40);

    if (t7 != 311U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x41 = -1LL;
	int32_t x42 = INT32_MIN;
	volatile int64_t x43 = -336533401303830LL;
	static int16_t x44 = -15911;
	int64_t t8 = -15083553LL;

    t8 = ((x41/(x42+x43))&x44);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x45 = 23334280222LLU;
	uint8_t x46 = 0U;
	int8_t x47 = -10;
	int16_t x48 = INT16_MAX;
	static volatile uint64_t t9 = 1928184921431LLU;

    t9 = ((x45/(x46+x47))&x48);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = INT8_MIN;
	volatile uint16_t x50 = UINT16_MAX;
	static uint8_t x51 = 1U;

    t10 = ((x49/(x50+x51))&x52);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = UINT32_MAX;
	uint64_t x54 = 349732100LLU;
	int16_t x55 = INT16_MIN;
	volatile uint16_t x56 = UINT16_MAX;
	uint64_t t11 = 8545976568LLU;

    t11 = ((x53/(x54+x55))&x56);

    if (t11 != 12LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x61 = INT16_MIN;
	uint64_t x63 = 4138147810623734474LLU;
	uint8_t x64 = UINT8_MAX;
	uint64_t t12 = 3010LLU;

    t12 = ((x61/(x62+x63))&x64);

    if (t12 != 4LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x65 = INT16_MIN;
	static volatile int8_t x66 = -2;
	static int8_t x67 = INT8_MIN;
	static uint8_t x68 = 0U;

    t13 = ((x65/(x66+x67))&x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x74 = UINT16_MAX;
	volatile int8_t x75 = INT8_MIN;
	uint8_t x76 = UINT8_MAX;

    t14 = ((x73/(x74+x75))&x76);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x77 = UINT8_MAX;
	static int8_t x78 = INT8_MIN;
	static uint8_t x80 = 112U;
	static int32_t t15 = 9;

    t15 = ((x77/(x78+x79))&x80);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x81 = INT64_MIN;
	uint8_t x82 = UINT8_MAX;
	uint8_t x83 = 98U;
	static int32_t x84 = -9;
	int64_t t16 = 56128494068240LL;

    t16 = ((x81/(x82+x83))&x84);

    if (t16 != -26128532682308154LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MAX;
	int16_t x86 = -1;
	static uint8_t x87 = 2U;
	volatile uint64_t t17 = 222185282768LLU;

    t17 = ((x85/(x86+x87))&x88);

    if (t17 != 129523LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x89 = 2U;
	static int8_t x90 = -1;
	int32_t x92 = -1;
	volatile uint32_t t18 = 7130676U;

    t18 = ((x89/(x90+x91))&x92);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x93 = -710;
	int16_t x94 = 10940;
	int64_t x95 = 156694261467632265LL;
	int32_t x96 = INT32_MAX;
	volatile int64_t t19 = -2400327568LL;

    t19 = ((x93/(x94+x95))&x96);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x97 = INT8_MAX;
	static int8_t x98 = INT8_MAX;
	int32_t x99 = INT32_MIN;
	volatile uint16_t x100 = 28U;
	volatile int32_t t20 = -20688545;

    t20 = ((x97/(x98+x99))&x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x101 = UINT8_MAX;
	uint64_t x102 = 155014316857LLU;
	int64_t x104 = INT64_MIN;
	uint64_t t21 = 1751LLU;

    t21 = ((x101/(x102+x103))&x104);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = -1;
	int64_t x106 = 28724LL;
	uint64_t x107 = UINT64_MAX;
	int8_t x108 = INT8_MIN;
	volatile uint64_t t22 = 32327737312737856LLU;

    t22 = ((x105/(x106+x107))&x108);

    if (t22 != 642229017641216LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x109 = 0LLU;
	uint64_t x110 = UINT64_MAX;
	int8_t x111 = -1;
	static volatile int64_t x112 = -1LL;

    t23 = ((x109/(x110+x111))&x112);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x113 = -1LL;
	static int16_t x115 = INT16_MIN;
	uint16_t x116 = 3U;

    t24 = ((x113/(x114+x115))&x116);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x117 = UINT8_MAX;
	int32_t x118 = -1;
	int16_t x119 = 444;
	int32_t t25 = -13661360;

    t25 = ((x117/(x118+x119))&x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x125 = INT32_MIN;
	static int64_t x126 = -448LL;
	int32_t x127 = -3;
	int32_t x128 = -1;
	volatile int64_t t26 = -22922LL;

    t26 = ((x125/(x126+x127))&x128);

    if (t26 != 4761604LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x129 = 1918725U;
	volatile int16_t x131 = 1536;
	static uint16_t x132 = 29655U;
	uint32_t t27 = 59117347U;

    t27 = ((x129/(x130+x131))&x132);

    if (t27 != 214U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x133 = 1912U;
	static int32_t x134 = INT32_MIN;
	volatile int16_t x135 = 13202;
	int8_t x136 = INT8_MIN;
	int32_t t28 = 879055;

    t28 = ((x133/(x134+x135))&x136);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = 0;
	volatile uint32_t x142 = UINT32_MAX;
	uint8_t x144 = 26U;
	static volatile int64_t t29 = 523906236580746LL;

    t29 = ((x141/(x142+x143))&x144);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x145 = -15;
	volatile int64_t x146 = INT64_MAX;
	volatile int64_t t30 = 2377541807LL;

    t30 = ((x145/(x146+x147))&x148);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x150 = UINT8_MAX;
	int64_t x151 = 9154671582737LL;
	int8_t x152 = -20;
	volatile int64_t t31 = 23750441363780336LL;

    t31 = ((x149/(x150+x151))&x152);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MIN;
	static int16_t x155 = INT16_MAX;
	int16_t x156 = -5;

    t32 = ((x153/(x154+x155))&x156);

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x157 = INT16_MAX;
	int8_t x158 = INT8_MIN;
	volatile uint32_t x159 = UINT32_MAX;
	static int64_t x160 = 53794902171LL;
	volatile int64_t t33 = -1105132625LL;

    t33 = ((x157/(x158+x159))&x160);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x162 = -469167LL;
	volatile uint16_t x163 = UINT16_MAX;
	int64_t x164 = INT64_MAX;
	volatile uint64_t t34 = 185959663LLU;

    t34 = ((x161/(x162+x163))&x164);

    if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MAX;
	int16_t x167 = -6;
	volatile int64_t t35 = -40798892771669184LL;

    t35 = ((x165/(x166+x167))&x168);

    if (t35 != -76226215180617981LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MIN;
	uint64_t x170 = 12367LLU;
	static uint8_t x171 = 0U;
	uint64_t t36 = 3435245195LLU;

    t36 = ((x169/(x170+x171))&x172);

    if (t36 != 1491610259053056LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x173 = INT64_MIN;
	uint8_t x175 = 1U;
	volatile int8_t x176 = 3;
	int64_t t37 = 10449517613441LL;

    t37 = ((x173/(x174+x175))&x176);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = -1;
	int8_t x178 = INT8_MIN;
	volatile uint32_t x179 = 337U;
	uint16_t x180 = 12U;
	static uint32_t t38 = 380U;

    t38 = ((x177/(x178+x179))&x180);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x181 = INT64_MIN;
	int32_t x182 = 24045679;
	uint64_t x183 = 51414LLU;

    t39 = ((x181/(x182+x183))&x184);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x185 = 2U;
	static uint8_t x186 = 9U;
	static int64_t x187 = -71935751405098697LL;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t40 = 314316680LLU;

    t40 = ((x185/(x186+x187))&x188);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x189 = INT16_MIN;
	int32_t x191 = 11115382;
	int16_t x192 = -1;
	int32_t t41 = 11449956;

    t41 = ((x189/(x190+x191))&x192);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x193 = 15LLU;
	volatile uint64_t x194 = 38939LLU;
	int32_t x195 = INT32_MAX;
	static uint16_t x196 = 56U;
	static uint64_t t42 = 983743594540LLU;

    t42 = ((x193/(x194+x195))&x196);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x197 = INT32_MIN;
	uint16_t x198 = 3938U;
	int16_t x199 = 0;
	int8_t x200 = -50;
	int32_t t43 = 494554;

    t43 = ((x197/(x198+x199))&x200);

    if (t43 != -545340) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x201 = INT32_MAX;
	int16_t x202 = INT16_MIN;
	int8_t x203 = 0;
	volatile uint32_t x204 = 2U;
	static volatile uint32_t t44 = 1U;

    t44 = ((x201/(x202+x203))&x204);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x205 = INT32_MAX;
	static int16_t x206 = INT16_MAX;
	int32_t x207 = 251894;

    t45 = ((x205/(x206+x207))&x208);

    if (t45 != 304) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x209 = 33;
	static int16_t x211 = 6660;
	volatile uint32_t t46 = 1532U;

    t46 = ((x209/(x210+x211))&x212);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x214 = -1;
	static uint64_t x215 = 1760954414926888LLU;
	int64_t x216 = INT64_MIN;
	volatile uint64_t t47 = 4460895516999LLU;

    t47 = ((x213/(x214+x215))&x216);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x217 = 7944682U;
	int8_t x218 = 1;
	static uint16_t x220 = UINT16_MAX;
	volatile uint32_t t48 = 51913U;

    t48 = ((x217/(x218+x219))&x220);

    if (t48 != 62067U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;
	int16_t x223 = 11885;
	volatile uint8_t x224 = 1U;
	int32_t t49 = 846;

    t49 = ((x221/(x222+x223))&x224);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int32_t x225 = 2357817;
	static volatile int32_t x226 = INT32_MAX;
	static int32_t x227 = INT32_MIN;
	int32_t x228 = -1;

    t50 = ((x225/(x226+x227))&x228);

    if (t50 != -2357817) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x229 = INT32_MAX;
	volatile int64_t x230 = -4239858307956007LL;
	static int64_t x231 = 61699454501111LL;
	static uint16_t x232 = UINT16_MAX;
	volatile int64_t t51 = -667210095794789LL;

    t51 = ((x229/(x230+x231))&x232);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x233 = INT64_MIN;
	uint16_t x234 = 0U;
	int8_t x236 = 4;
	volatile uint64_t t52 = 20443716093313993LLU;

    t52 = ((x233/(x234+x235))&x236);

    if (t52 != 4LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x237 = 14U;
	volatile uint64_t x238 = UINT64_MAX;
	static int32_t x239 = -78021552;
	volatile uint64_t t53 = 3949160522080477LLU;

    t53 = ((x237/(x238+x239))&x240);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x241 = 10640;
	uint32_t x242 = 27U;
	int64_t x243 = -1LL;

    t54 = ((x241/(x242+x243))&x244);

    if (t54 != 281LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x249 = 926407951;
	static int8_t x251 = -1;
	static uint32_t t55 = 296800U;

    t55 = ((x249/(x250+x251))&x252);

    if (t55 != 101854032U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x253 = INT64_MIN;
	static int64_t x254 = INT64_MIN;
	uint8_t x255 = 0U;
	volatile int32_t x256 = 63471918;
	volatile int64_t t56 = 24703971632LL;

    t56 = ((x253/(x254+x255))&x256);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x257 = 138;
	int8_t x258 = INT8_MIN;
	uint8_t x260 = 0U;
	volatile int32_t t57 = -9484146;

    t57 = ((x257/(x258+x259))&x260);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x262 = INT16_MIN;
	uint64_t x264 = 0LLU;
	static volatile uint64_t t58 = 1045079273LLU;

    t58 = ((x261/(x262+x263))&x264);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x265 = -1;
	static int16_t x266 = -11394;
	uint32_t x267 = UINT32_MAX;
	volatile int64_t t59 = 55362LL;

    t59 = ((x265/(x266+x267))&x268);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x273 = UINT8_MAX;
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = INT64_MIN;
	volatile int32_t x276 = INT32_MAX;
	int64_t t60 = 32248204735075LL;

    t60 = ((x273/(x274+x275))&x276);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x277 = UINT8_MAX;
	int16_t x278 = -1;
	int16_t x280 = INT16_MAX;
	volatile int32_t t61 = -53;

    t61 = ((x277/(x278+x279))&x280);

    if (t61 != 31) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x281 = INT64_MIN;
	static volatile uint16_t x282 = 11U;
	int16_t x283 = -47;
	int16_t x284 = 2173;

    t62 = ((x281/(x282+x283))&x284);

    if (t62 != 12LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x286 = 477U;
	static volatile int32_t x287 = -1366;
	static int16_t x288 = 4;
	int64_t t63 = -338656LL;

    t63 = ((x285/(x286+x287))&x288);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x290 = -1;
	int32_t x291 = 226183585;
	uint8_t x292 = UINT8_MAX;
	int64_t t64 = 832669595859423LL;

    t64 = ((x289/(x290+x291))&x292);

    if (t64 != 113LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x293 = UINT32_MAX;
	uint64_t t65 = 212928LLU;

    t65 = ((x293/(x294+x295))&x296);

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x301 = INT32_MIN;
	static int32_t x302 = -111;
	int64_t x303 = INT64_MAX;
	int64_t t66 = -24025649425LL;

    t66 = ((x301/(x302+x303))&x304);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x305 = INT32_MIN;
	int32_t x306 = -240482;
	uint32_t x307 = UINT32_MAX;
	int32_t x308 = INT32_MIN;
	static uint32_t t67 = 20U;

    t67 = ((x305/(x306+x307))&x308);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x309 = INT16_MIN;
	volatile int32_t x311 = 5808568;
	int32_t x312 = -1;
	static uint64_t t68 = 2377351237464637LLU;

    t68 = ((x309/(x310+x311))&x312);

    if (t68 != 3175674015683LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x313 = 104;
	int64_t x314 = INT64_MAX;
	volatile int8_t x315 = INT8_MIN;
	volatile int64_t t69 = -417LL;

    t69 = ((x313/(x314+x315))&x316);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x321 = INT32_MIN;
	int32_t x322 = INT32_MAX;
	uint64_t x324 = 34319225725803672LLU;
	uint64_t t70 = 160230935990058LLU;

    t70 = ((x321/(x322+x323))&x324);

    if (t70 != 34319225725803672LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x325 = 19;
	uint64_t x326 = UINT64_MAX;
	uint16_t x328 = UINT16_MAX;
	uint64_t t71 = 21LLU;

    t71 = ((x325/(x326+x327))&x328);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x330 = -27;
	static int16_t x331 = 3636;
	uint8_t x332 = 27U;

    t72 = ((x329/(x330+x331))&x332);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x333 = -5;
	static int8_t x334 = -60;
	uint16_t x336 = 14686U;
	int32_t t73 = -10578;

    t73 = ((x333/(x334+x335))&x336);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint64_t x341 = UINT64_MAX;
	int64_t x342 = -1LL;
	int16_t x343 = 7;
	static uint64_t t74 = 332414651LLU;

    t74 = ((x341/(x342+x343))&x344);

    if (t74 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x345 = -1;
	int8_t x346 = INT8_MAX;

    t75 = ((x345/(x346+x347))&x348);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x349 = 63573U;
	uint16_t x350 = 343U;
	volatile int8_t x351 = 47;
	volatile uint32_t t76 = 216543897U;

    t76 = ((x349/(x350+x351))&x352);

    if (t76 != 163U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x353 = INT16_MIN;
	uint8_t x354 = 20U;
	volatile uint8_t x355 = 1U;
	int8_t x356 = INT8_MAX;

    t77 = ((x353/(x354+x355))&x356);

    if (t77 != 104) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x357 = 5647U;
	int8_t x358 = -4;
	int16_t x359 = -1;
	static int8_t x360 = INT8_MIN;
	static uint32_t t78 = 207245U;

    t78 = ((x357/(x358+x359))&x360);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x361 = 125565;
	uint8_t x362 = 125U;
	uint16_t x363 = 2297U;
	int32_t x364 = INT32_MIN;
	volatile int32_t t79 = -14;

    t79 = ((x361/(x362+x363))&x364);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x365 = -1;
	static uint16_t x366 = 72U;
	int8_t x367 = INT8_MIN;
	int32_t x368 = -8864;

    t80 = ((x365/(x366+x367))&x368);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x369 = -1;
	static uint16_t x370 = 55U;
	static int32_t t81 = -24;

    t81 = ((x369/(x370+x371))&x372);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MIN;
	volatile int64_t x375 = -520738082242LL;
	int8_t x376 = -1;
	int64_t t82 = 1387231531169085LL;

    t82 = ((x373/(x374+x375))&x376);

    if (t82 != 17639370LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x377 = 100U;
	int16_t x378 = -1;
	uint32_t t83 = 1782U;

    t83 = ((x377/(x378+x379))&x380);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x394 = -17;
	uint8_t x395 = 3U;
	int64_t x396 = INT64_MIN;
	volatile int64_t t84 = -6582957LL;

    t84 = ((x393/(x394+x395))&x396);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x397 = INT16_MIN;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = -39151083957462LL;
	uint64_t t85 = 91532355838249LLU;

    t85 = ((x397/(x398+x399))&x400);

    if (t85 != 242322055385888LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x401 = INT32_MAX;
	static uint32_t x402 = UINT32_MAX;
	uint32_t x403 = 50U;
	int8_t x404 = -1;
	uint32_t t86 = 515212027U;

    t86 = ((x401/(x402+x403))&x404);

    if (t86 != 43826196U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x409 = INT32_MIN;
	uint64_t x410 = UINT64_MAX;
	int64_t x411 = 4397951902961325814LL;
	int64_t x412 = INT64_MAX;
	volatile uint64_t t87 = 2222828LLU;

    t87 = ((x409/(x410+x411))&x412);

    if (t87 != 4LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x413 = INT64_MIN;
	uint16_t x414 = 5U;
	uint64_t x415 = 721369LLU;
	volatile uint64_t t88 = 7504LLU;

    t88 = ((x413/(x414+x415))&x416);

    if (t88 != 53487LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x417 = UINT32_MAX;
	int8_t x418 = INT8_MAX;
	volatile uint32_t x419 = 2142343690U;
	static volatile int64_t t89 = 12651010831432975LL;

    t89 = ((x417/(x418+x419))&x420);

    if (t89 != 2LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x421 = -1;
	int16_t x422 = -5726;
	int8_t x423 = INT8_MIN;
	int16_t x424 = INT16_MAX;
	volatile int32_t t90 = 1;

    t90 = ((x421/(x422+x423))&x424);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x425 = -1;
	uint32_t x426 = UINT32_MAX;
	int64_t x428 = -1LL;
	volatile int64_t t91 = -3443091LL;

    t91 = ((x425/(x426+x427))&x428);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x429 = INT32_MIN;
	volatile int64_t x430 = -6505926029LL;
	static volatile int64_t x431 = 0LL;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t92 = 949LLU;

    t92 = ((x429/(x430+x431))&x432);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x433 = 725368U;
	uint16_t x434 = 7U;
	static int64_t x436 = 46199222LL;

    t93 = ((x433/(x434+x435))&x436);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x438 = 650;
	volatile int8_t x439 = INT8_MAX;

    t94 = ((x437/(x438+x439))&x440);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x441 = UINT64_MAX;
	static uint8_t x442 = UINT8_MAX;
	int64_t x443 = -1LL;
	int8_t x444 = INT8_MIN;

    t95 = ((x441/(x442+x443))&x444);

    if (t95 != 72624976668147840LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x449 = -701;
	uint64_t x450 = 607248LLU;
	volatile uint32_t x451 = UINT32_MAX;
	uint8_t x452 = 78U;

    t96 = ((x449/(x450+x451))&x452);

    if (t96 != 70LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x453 = INT32_MIN;
	uint64_t x455 = 142270348LLU;
	uint8_t x456 = 27U;
	volatile uint64_t t97 = 34179937152300765LLU;

    t97 = ((x453/(x454+x455))&x456);

    if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x458 = -1;
	int8_t x459 = -10;
	uint16_t x460 = UINT16_MAX;
	static volatile int32_t t98 = 122;

    t98 = ((x457/(x458+x459))&x460);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x461 = INT8_MIN;
	int8_t x462 = INT8_MAX;
	int32_t x463 = -179938872;
	volatile uint32_t x464 = 6886773U;
	uint32_t t99 = 114U;

    t99 = ((x461/(x462+x463))&x464);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x465 = 7260U;
	int64_t x466 = -1LL;
	int32_t x467 = INT32_MIN;
	int16_t x468 = INT16_MIN;

    t100 = ((x465/(x466+x467))&x468);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x469 = 22U;
	volatile int32_t x470 = -1;
	int16_t x472 = INT16_MIN;
	volatile int64_t t101 = 1769LL;

    t101 = ((x469/(x470+x471))&x472);

    if (t101 != -32768LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x473 = -1;
	static int32_t x474 = 2;
	int64_t x475 = -1LL;
	int16_t x476 = INT16_MIN;
	static volatile int64_t t102 = -4LL;

    t102 = ((x473/(x474+x475))&x476);

    if (t102 != -32768LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x477 = 2U;
	static int32_t x479 = INT32_MIN;
	volatile int16_t x480 = INT16_MIN;
	uint32_t t103 = 49499767U;

    t103 = ((x477/(x478+x479))&x480);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x489 = INT8_MAX;
	static int8_t x490 = INT8_MIN;
	uint32_t x491 = UINT32_MAX;
	uint8_t x492 = 1U;
	volatile uint32_t t104 = 1358542U;

    t104 = ((x489/(x490+x491))&x492);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x493 = 4;
	uint32_t x495 = UINT32_MAX;
	uint8_t x496 = UINT8_MAX;

    t105 = ((x493/(x494+x495))&x496);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x498 = 3U;
	static int64_t x499 = 42228905LL;
	int8_t x500 = 52;
	volatile int64_t t106 = -54856567LL;

    t106 = ((x497/(x498+x499))&x500);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x501 = -1LL;
	volatile int32_t x503 = INT32_MIN;
	int8_t x504 = INT8_MIN;
	volatile int64_t t107 = -2496280878116222906LL;

    t107 = ((x501/(x502+x503))&x504);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x505 = INT32_MIN;
	uint8_t x506 = UINT8_MAX;
	int64_t x507 = 5944702946LL;
	int32_t x508 = 35;
	volatile int64_t t108 = 62LL;

    t108 = ((x505/(x506+x507))&x508);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x509 = 1U;
	static uint16_t x510 = 101U;
	int32_t x511 = -506970;
	volatile int16_t x512 = 11;
	static volatile int32_t t109 = -182;

    t109 = ((x509/(x510+x511))&x512);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x521 = INT16_MAX;
	uint8_t x522 = 1U;
	volatile int64_t x523 = 1LL;
	static int16_t x524 = -1;
	int64_t t110 = 173175467LL;

    t110 = ((x521/(x522+x523))&x524);

    if (t110 != 16383LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x525 = 733727LLU;
	uint16_t x527 = 54U;
	static int32_t x528 = INT32_MIN;

    t111 = ((x525/(x526+x527))&x528);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x529 = INT16_MAX;
	uint8_t x530 = 105U;
	volatile int16_t x532 = -2798;

    t112 = ((x529/(x530+x531))&x532);

    if (t112 != 274) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x534 = -43;
	uint64_t x536 = 138231152LLU;
	volatile uint64_t t113 = 1096812510849LLU;

    t113 = ((x533/(x534+x535))&x536);

    if (t113 != 256LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x537 = -1;
	int32_t x538 = 14471380;
	uint32_t x539 = 973U;
	uint64_t x540 = 1587168902829216LLU;
	uint64_t t114 = 204985772535944593LLU;

    t114 = ((x537/(x538+x539))&x540);

    if (t114 != 32LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x541 = INT8_MIN;
	static int64_t x543 = INT64_MAX;
	volatile int16_t x544 = INT16_MAX;
	volatile int64_t t115 = -403951400848509LL;

    t115 = ((x541/(x542+x543))&x544);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x545 = 68U;
	int64_t x546 = INT64_MIN;
	static volatile uint16_t x547 = 2729U;
	int8_t x548 = 5;
	volatile int64_t t116 = -713617354051LL;

    t116 = ((x545/(x546+x547))&x548);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x549 = UINT16_MAX;
	static int32_t x550 = INT32_MIN;
	int64_t x551 = INT64_MAX;

    t117 = ((x549/(x550+x551))&x552);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x553 = INT8_MIN;
	int16_t x555 = -1373;
	uint8_t x556 = 1U;

    t118 = ((x553/(x554+x555))&x556);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x557 = INT32_MIN;
	int8_t x558 = INT8_MIN;
	uint64_t x559 = 54738763692667LLU;
	volatile int16_t x560 = -3685;
	volatile uint64_t t119 = 7794563690883222LLU;

    t119 = ((x557/(x558+x559))&x560);

    if (t119 != 335875LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x561 = INT64_MIN;
	uint8_t x562 = 1U;
	uint16_t x563 = 27U;
	uint16_t x564 = UINT16_MAX;
	volatile int64_t t120 = 3479347048289LL;

    t120 = ((x561/(x562+x563))&x564);

    if (t120 != 56174LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x565 = 526560533LLU;
	int16_t x566 = INT16_MAX;
	uint32_t x567 = 15868U;
	int16_t x568 = -1;
	volatile uint64_t t121 = 14183121LLU;

    t121 = ((x565/(x566+x567))&x568);

    if (t121 != 10826LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x569 = 0;
	volatile int8_t x570 = INT8_MIN;
	int8_t x572 = INT8_MIN;
	volatile uint32_t t122 = 11U;

    t122 = ((x569/(x570+x571))&x572);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x573 = 34710445LL;
	uint16_t x574 = UINT16_MAX;
	volatile int64_t t123 = 4394802926LL;

    t123 = ((x573/(x574+x575))&x576);

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x577 = UINT8_MAX;
	static uint16_t x578 = 3U;
	uint64_t x579 = UINT64_MAX;

    t124 = ((x577/(x578+x579))&x580);

    if (t124 != 6LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x581 = 31;
	static int16_t x582 = INT16_MIN;
	uint64_t x584 = 52436748972869LLU;
	uint64_t t125 = 2722536814654LLU;

    t125 = ((x581/(x582+x583))&x584);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x585 = 30LL;
	int32_t x586 = -392;
	static int8_t x587 = -1;
	uint16_t x588 = 837U;
	int64_t t126 = 6785505836594121LL;

    t126 = ((x585/(x586+x587))&x588);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x589 = INT32_MIN;
	uint64_t x590 = UINT64_MAX;
	volatile int16_t x591 = -1;
	static int8_t x592 = -1;
	volatile uint64_t t127 = 40570584150057121LLU;

    t127 = ((x589/(x590+x591))&x592);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint16_t x593 = 64U;
	uint16_t x594 = UINT16_MAX;
	uint32_t x595 = 523772U;
	volatile uint64_t x596 = 34769LLU;
	static volatile uint64_t t128 = 62750124LLU;

    t128 = ((x593/(x594+x595))&x596);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x598 = 8LL;
	volatile int16_t x599 = 551;
	int64_t t129 = -14435464LL;

    t129 = ((x597/(x598+x599))&x600);

    if (t129 != 2738LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x601 = -1;
	uint64_t x602 = 12639203LLU;
	static int8_t x604 = 4;
	static volatile uint64_t t130 = 32550354412LLU;

    t130 = ((x601/(x602+x603))&x604);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x607 = -67;
	int8_t x608 = 1;
	static int32_t t131 = -1294033;

    t131 = ((x605/(x606+x607))&x608);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x609 = 1;
	int8_t x612 = INT8_MIN;
	static int64_t t132 = -29382313485069LL;

    t132 = ((x609/(x610+x611))&x612);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x614 = INT64_MAX;

    t133 = ((x613/(x614+x615))&x616);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x617 = UINT32_MAX;
	int64_t x619 = INT64_MIN;
	volatile int8_t x620 = 0;
	int64_t t134 = -4131386978195637LL;

    t134 = ((x617/(x618+x619))&x620);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x621 = -1829433264732898734LL;
	int16_t x622 = INT16_MIN;
	int8_t x623 = INT8_MIN;
	int16_t x624 = INT16_MIN;
	static int64_t t135 = 7412929LL;

    t135 = ((x621/(x622+x623))&x624);

    if (t135 != 55612635709440LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x625 = UINT32_MAX;
	int32_t x627 = 9;
	volatile uint32_t t136 = 4189U;

    t136 = ((x625/(x626+x627))&x628);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x629 = INT32_MAX;
	int32_t x630 = -1;
	int8_t x631 = INT8_MAX;
	int8_t x632 = INT8_MAX;
	int32_t t137 = -1510271;

    t137 = ((x629/(x630+x631))&x632);

    if (t137 != 65) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x633 = -4444;
	int8_t x634 = -9;
	static volatile int16_t x635 = INT16_MIN;
	int8_t x636 = INT8_MIN;
	int32_t t138 = -1;

    t138 = ((x633/(x634+x635))&x636);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x637 = 31;
	uint32_t x638 = UINT32_MAX;
	static volatile uint32_t x639 = 15U;
	static int16_t x640 = -1;

    t139 = ((x637/(x638+x639))&x640);

    if (t139 != 2U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x641 = -5054;
	int64_t x643 = -1LL;
	int8_t x644 = INT8_MIN;
	static int64_t t140 = -1470066564750LL;

    t140 = ((x641/(x642+x643))&x644);

    if (t140 != -384LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x645 = UINT32_MAX;
	static int8_t x646 = 3;
	int64_t x648 = INT64_MAX;
	volatile int64_t t141 = -96681758LL;

    t141 = ((x645/(x646+x647))&x648);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x649 = INT32_MAX;
	int8_t x651 = -7;
	int16_t x652 = -1;

    t142 = ((x649/(x650+x651))&x652);

    if (t142 != -306783378) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x653 = INT64_MIN;
	uint64_t x654 = 1212148405632550054LLU;
	static uint64_t x655 = 1193LLU;
	int64_t x656 = INT64_MIN;

    t143 = ((x653/(x654+x655))&x656);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x657 = 812U;
	uint16_t x660 = 5515U;
	volatile uint64_t t144 = 2743001524650040748LLU;

    t144 = ((x657/(x658+x659))&x660);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint32_t x665 = 432U;
	int8_t x666 = INT8_MIN;
	int64_t t145 = 0LL;

    t145 = ((x665/(x666+x667))&x668);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x669 = 161287009U;
	int32_t x670 = INT32_MIN;
	uint32_t x671 = UINT32_MAX;
	volatile int64_t t146 = -94911451166085140LL;

    t146 = ((x669/(x670+x671))&x672);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x678 = -1LL;
	int8_t x679 = INT8_MIN;
	uint8_t x680 = 4U;
	int64_t t147 = -12215LL;

    t147 = ((x677/(x678+x679))&x680);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x681 = 118LLU;
	int8_t x683 = INT8_MIN;
	int32_t x684 = INT32_MIN;

    t148 = ((x681/(x682+x683))&x684);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x685 = 2LLU;
	int32_t x686 = -85;
	static uint64_t x687 = UINT64_MAX;
	volatile uint32_t x688 = UINT32_MAX;
	static volatile uint64_t t149 = 13251LLU;

    t149 = ((x685/(x686+x687))&x688);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x689 = INT64_MIN;
	static int32_t x691 = 906999;
	uint64_t x692 = UINT64_MAX;
	volatile uint64_t t150 = 3772LLU;

    t150 = ((x689/(x690+x691))&x692);

    if (t150 != 18446733523440758981LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x694 = INT32_MIN;
	int32_t x695 = INT32_MAX;
	int64_t x696 = -1LL;
	volatile int64_t t151 = 36763LL;

    t151 = ((x693/(x694+x695))&x696);

    if (t151 != -255LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x697 = INT8_MIN;
	static int64_t x698 = -43555685996599LL;
	uint16_t x699 = 6016U;
	int32_t x700 = -1;

    t152 = ((x697/(x698+x699))&x700);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x701 = 771538605583LLU;
	volatile uint16_t x702 = 2616U;
	uint8_t x703 = UINT8_MAX;
	static int16_t x704 = -7;
	volatile uint64_t t153 = 40906LLU;

    t153 = ((x701/(x702+x703))&x704);

    if (t153 != 268735144LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x705 = INT32_MIN;
	uint8_t x706 = 7U;
	int64_t x707 = 6317LL;
	int64_t x708 = INT64_MIN;
	volatile int64_t t154 = INT64_MIN;

    t154 = ((x705/(x706+x707))&x708);

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x709 = UINT32_MAX;
	uint32_t x710 = 842U;
	uint16_t x711 = 3449U;
	int64_t x712 = INT64_MAX;

    t155 = ((x709/(x710+x711))&x712);

    if (t155 != 1000924LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x713 = INT16_MIN;
	static int64_t x714 = INT64_MIN;
	int16_t x715 = INT16_MAX;
	volatile int64_t x716 = INT64_MAX;

    t156 = ((x713/(x714+x715))&x716);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x718 = 51205740U;
	int8_t x719 = -1;
	static int64_t x720 = 95707512LL;
	static int64_t t157 = 365753LL;

    t157 = ((x717/(x718+x719))&x720);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x722 = -1;
	int32_t x723 = -1;
	volatile uint32_t t158 = 1591U;

    t158 = ((x721/(x722+x723))&x724);

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x725 = 6U;
	uint16_t x727 = 41U;
	volatile int64_t x728 = INT64_MIN;
	int64_t t159 = -11LL;

    t159 = ((x725/(x726+x727))&x728);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x729 = 14829204378392LL;
	int64_t x730 = -1LL;
	int64_t x731 = -1LL;
	int16_t x732 = INT16_MIN;
	volatile int64_t t160 = 14689319LL;

    t160 = ((x729/(x730+x731))&x732);

    if (t160 != -7414602203136LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x733 = -1;
	uint8_t x734 = 8U;
	int8_t x735 = -1;
	volatile int8_t x736 = -1;
	int32_t t161 = 1;

    t161 = ((x733/(x734+x735))&x736);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x741 = INT16_MIN;
	int16_t x743 = INT16_MIN;
	int16_t x744 = INT16_MAX;

    t162 = ((x741/(x742+x743))&x744);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x745 = 7044U;
	uint8_t x746 = UINT8_MAX;
	static uint8_t x747 = 3U;
	uint64_t x748 = UINT64_MAX;
	uint64_t t163 = 692LLU;

    t163 = ((x745/(x746+x747))&x748);

    if (t163 != 27LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x749 = INT64_MIN;
	uint64_t x750 = 1552LLU;
	int64_t x751 = 64567505248148291LL;
	static uint64_t x752 = 194491LLU;
	volatile uint64_t t164 = 209LLU;

    t164 = ((x749/(x750+x751))&x752);

    if (t164 != 138LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x755 = -5720;
	int16_t x756 = INT16_MAX;
	int32_t t165 = 38475;

    t165 = ((x753/(x754+x755))&x756);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t t166 = 25551U;

    t166 = ((x757/(x758+x759))&x760);

    if (t166 != 4360U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x761 = -1;
	int64_t x762 = INT64_MIN;
	volatile int32_t x763 = 91211;
	int64_t t167 = -2144504998363106LL;

    t167 = ((x761/(x762+x763))&x764);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x766 = INT64_MIN;
	int8_t x768 = INT8_MIN;

    t168 = ((x765/(x766+x767))&x768);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x769 = 62060363LL;
	int64_t x770 = -141392033828533469LL;
	uint64_t x771 = 45993009394259346LLU;
	uint64_t t169 = 4052649321LLU;

    t169 = ((x769/(x770+x771))&x772);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x773 = -8;
	int16_t x774 = INT16_MIN;
	int16_t x775 = INT16_MIN;
	static int16_t x776 = INT16_MIN;
	static int32_t t170 = -1;

    t170 = ((x773/(x774+x775))&x776);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x781 = INT64_MAX;
	int8_t x782 = INT8_MAX;
	volatile uint64_t x784 = UINT64_MAX;
	volatile uint64_t t171 = UINT64_MAX;

    t171 = ((x781/(x782+x783))&x784);

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x789 = INT8_MIN;
	static int16_t x790 = INT16_MIN;
	int64_t x791 = -1LL;
	static int64_t t172 = 21073235372LL;

    t172 = ((x789/(x790+x791))&x792);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x797 = INT64_MAX;
	int64_t x799 = INT64_MIN;
	int32_t x800 = INT32_MIN;
	uint64_t t173 = 443540LLU;

    t173 = ((x797/(x798+x799))&x800);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x801 = -56;
	uint32_t x802 = UINT32_MAX;
	uint32_t x804 = UINT32_MAX;
	uint32_t t174 = 39U;

    t174 = ((x801/(x802+x803))&x804);

    if (t174 != 16909319U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x806 = 3137189U;
	static int32_t x807 = 0;
	static uint32_t t175 = 13U;

    t175 = ((x805/(x806+x807))&x808);

    if (t175 != 1U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x809 = UINT16_MAX;
	int8_t x810 = -1;
	uint16_t x811 = 167U;
	uint16_t x812 = UINT16_MAX;
	static volatile int32_t t176 = -854529647;

    t176 = ((x809/(x810+x811))&x812);

    if (t176 != 394) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x813 = -1;
	int32_t x814 = INT32_MIN;
	uint32_t t177 = 31114U;

    t177 = ((x813/(x814+x815))&x816);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x817 = 53988490U;
	int32_t x818 = 179139993;
	static uint16_t x819 = 0U;
	int64_t x820 = INT64_MAX;
	int64_t t178 = 2284205700783535881LL;

    t178 = ((x817/(x818+x819))&x820);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x821 = INT64_MAX;
	int8_t x822 = -1;
	volatile uint64_t x823 = UINT64_MAX;
	int32_t x824 = INT32_MAX;

    t179 = ((x821/(x822+x823))&x824);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x825 = INT64_MIN;
	uint8_t x826 = UINT8_MAX;
	static volatile uint16_t x827 = 211U;
	int32_t x828 = INT32_MIN;
	int64_t t180 = 258897773LL;

    t180 = ((x825/(x826+x827))&x828);

    if (t180 != -19792645966528512LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x829 = UINT32_MAX;
	uint64_t x830 = UINT64_MAX;
	static uint64_t x832 = 52161477617969897LLU;
	uint64_t t181 = 321628857626LLU;

    t181 = ((x829/(x830+x831))&x832);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x833 = -1;
	int8_t x834 = 1;
	int16_t x835 = 915;
	volatile int64_t t182 = -53482110816266679LL;

    t182 = ((x833/(x834+x835))&x836);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x837 = 30U;
	uint16_t x840 = 0U;

    t183 = ((x837/(x838+x839))&x840);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x841 = 35U;
	uint16_t x842 = UINT16_MAX;
	uint32_t x843 = 226167U;
	int8_t x844 = INT8_MIN;
	uint32_t t184 = 1246216227U;

    t184 = ((x841/(x842+x843))&x844);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x845 = UINT64_MAX;
	static int32_t x846 = -1;
	static volatile int8_t x847 = -1;
	volatile uint64_t x848 = UINT64_MAX;
	static uint64_t t185 = 44704980LLU;

    t185 = ((x845/(x846+x847))&x848);

    if (t185 != 1LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x849 = 8U;
	volatile int32_t x850 = -1;
	uint64_t x851 = UINT64_MAX;
	int64_t x852 = -10LL;
	volatile uint64_t t186 = 2LLU;

    t186 = ((x849/(x850+x851))&x852);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x856 = 32649U;
	volatile int64_t t187 = 4132273621961LL;

    t187 = ((x853/(x854+x855))&x856);

    if (t187 != 7297LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x857 = 620293676616LLU;
	uint32_t x858 = 433769726U;
	uint8_t x859 = 10U;
	volatile uint64_t t188 = 3613282862092564LLU;

    t188 = ((x857/(x858+x859))&x860);

    if (t188 != 2LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x861 = 2U;
	uint8_t x862 = UINT8_MAX;
	uint32_t x863 = 118809567U;
	uint32_t x864 = 20U;
	volatile uint32_t t189 = 1989381U;

    t189 = ((x861/(x862+x863))&x864);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x873 = INT32_MAX;
	uint32_t x875 = 728U;
	uint64_t t190 = 1202013506938LLU;

    t190 = ((x873/(x874+x875))&x876);

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x877 = 3972796156571016LLU;
	uint8_t x878 = 4U;
	int8_t x879 = -1;
	volatile uint64_t t191 = 1LLU;

    t191 = ((x877/(x878+x879))&x880);

    if (t191 != 1324265385523672LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x881 = INT8_MAX;
	int32_t x882 = 10;
	static int8_t x884 = INT8_MIN;
	volatile uint32_t t192 = 2143823309U;

    t192 = ((x881/(x882+x883))&x884);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x885 = 15U;
	int16_t x886 = INT16_MIN;
	volatile int32_t t193 = 910965905;

    t193 = ((x885/(x886+x887))&x888);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x889 = INT32_MAX;
	static int16_t x890 = INT16_MIN;
	static uint64_t x891 = UINT64_MAX;
	static uint16_t x892 = UINT16_MAX;
	volatile uint64_t t194 = 797516172698LLU;

    t194 = ((x889/(x890+x891))&x892);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x894 = 391U;
	int32_t x895 = 284;
	int64_t t195 = 337297484445465925LL;

    t195 = ((x893/(x894+x895))&x896);

    if (t195 != -13664254869414482LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x897 = 41538039U;
	int8_t x899 = -1;
	int64_t x900 = -106314339209461683LL;
	int64_t t196 = 4362579522296435708LL;

    t196 = ((x897/(x898+x899))&x900);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x909 = INT64_MIN;
	int8_t x910 = 0;
	volatile int64_t t197 = INT64_MIN;

    t197 = ((x909/(x910+x911))&x912);

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x914 = 800650186;
	volatile int8_t x915 = INT8_MIN;
	uint32_t x916 = 92U;
	uint32_t t198 = 2140842U;

    t198 = ((x913/(x914+x915))&x916);

    if (t198 != 92U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x917 = 20U;
	int8_t x918 = -1;
	volatile int64_t x919 = INT64_MAX;
	volatile int64_t t199 = -36381361LL;

    t199 = ((x917/(x918+x919))&x920);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

