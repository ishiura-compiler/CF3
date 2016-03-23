
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

static int64_t x10 = INT64_MAX;
volatile uint8_t x11 = 102U;
int16_t x14 = INT16_MIN;
int8_t x16 = -1;
int32_t x24 = INT32_MIN;
uint16_t x34 = 1U;
uint32_t x39 = 2153U;
int16_t x49 = INT16_MAX;
volatile int32_t x54 = -1;
uint8_t x55 = 6U;
int8_t x56 = -61;
static volatile int8_t x61 = INT8_MAX;
volatile int32_t x66 = -915;
uint32_t x70 = 220U;
int8_t x84 = INT8_MIN;
uint8_t x90 = 25U;
int64_t x91 = -126402LL;
uint8_t x92 = UINT8_MAX;
volatile int32_t t20 = -1;
volatile int64_t t23 = 73844862580452LL;
volatile int16_t x120 = INT16_MAX;
int8_t x125 = -20;
int16_t x126 = INT16_MIN;
static int64_t x130 = -1LL;
volatile uint64_t x133 = 19636924256134LLU;
static int32_t x136 = -1;
static int64_t x138 = -29656LL;
int16_t x143 = INT16_MIN;
static uint8_t x149 = 41U;
int16_t x151 = 6;
volatile uint32_t t32 = 2U;
static volatile uint8_t x155 = 1U;
int64_t t33 = -41230604264908LL;
uint64_t t34 = 34867524152489200LLU;
uint32_t x175 = UINT32_MAX;
int32_t x179 = -62;
uint16_t x183 = UINT16_MAX;
int64_t t40 = 14385LL;
volatile int16_t x185 = 22;
static int32_t t42 = 0;
volatile int16_t x199 = -1;
volatile int32_t t44 = -2095643;
volatile int32_t x208 = INT32_MIN;
int64_t x209 = INT64_MIN;
volatile uint16_t x211 = 36U;
int64_t t46 = 2LL;
int8_t x213 = -1;
static uint32_t x216 = 1894U;
int16_t x219 = INT16_MAX;
volatile int32_t x220 = INT32_MIN;
uint8_t x226 = UINT8_MAX;
volatile uint32_t t50 = 189725U;
volatile int16_t x229 = 15396;
volatile int64_t x237 = INT64_MIN;
int16_t x241 = INT16_MIN;
static int32_t x252 = 16495;
static volatile int32_t t59 = -529057234;
static uint8_t x273 = 0U;
static int32_t x275 = -1;
static uint64_t t60 = UINT64_MAX;
int32_t x283 = INT32_MAX;
int64_t x286 = INT64_MIN;
static uint16_t x290 = UINT16_MAX;
volatile int16_t x291 = INT16_MAX;
int8_t x298 = 12;
uint8_t x302 = UINT8_MAX;
volatile uint64_t t69 = 68606328975612706LLU;
uint32_t x318 = 196727453U;
volatile int8_t x323 = 3;
int64_t x324 = INT64_MIN;
static uint8_t x325 = 0U;
int64_t t75 = 249478493343LL;
volatile uint16_t x347 = 428U;
int16_t x356 = -1;
volatile int64_t t78 = -1483057LL;
uint8_t x358 = 22U;
uint32_t x362 = UINT32_MAX;
int64_t x365 = INT64_MIN;
static int32_t x386 = -1;
static volatile int32_t t86 = -477587;
static uint64_t x392 = 23442085703LLU;
uint16_t x393 = 64U;
volatile uint64_t x395 = 18317479698784228LLU;
uint8_t x398 = 2U;
int16_t x399 = INT16_MIN;
uint16_t x403 = UINT16_MAX;
int8_t x406 = 34;
uint16_t x407 = 7017U;
static int32_t x411 = INT32_MIN;
int64_t x412 = INT64_MIN;
static int8_t x413 = -34;
static int32_t x415 = 217869022;
volatile int16_t x416 = -1;
int16_t x430 = 1;
uint64_t t98 = 3430LLU;
int16_t x438 = INT16_MIN;
int16_t x440 = INT16_MAX;
int32_t x442 = -1;
int8_t x443 = INT8_MIN;
static volatile int64_t t102 = -97388933025297951LL;
volatile uint64_t t103 = 57082353001904979LLU;
int32_t x461 = INT32_MIN;
volatile int32_t x462 = INT32_MAX;
int32_t x465 = INT32_MAX;
uint8_t x466 = 3U;
volatile uint64_t x474 = 2998265LLU;
static int32_t x480 = 3965;
volatile int64_t x486 = -1LL;
int64_t x488 = INT64_MIN;
volatile int16_t x490 = -1;
static volatile int32_t x491 = 179;
volatile uint32_t t112 = 96U;
int8_t x496 = INT8_MIN;
uint16_t x501 = UINT16_MAX;
uint64_t t115 = 12827LLU;
int64_t x508 = INT64_MIN;
uint64_t x510 = UINT64_MAX;
uint8_t x512 = 53U;
uint64_t x515 = 274932784340924LLU;
volatile uint32_t x520 = 7122U;
uint16_t x521 = 5U;
volatile uint32_t t120 = 93004224U;
uint16_t x530 = 2U;
uint8_t x533 = 4U;
int64_t x534 = 2091LL;
volatile int64_t x537 = 63602571985556LL;
int64_t x538 = INT64_MAX;
volatile int16_t x540 = 1;
volatile int64_t x542 = -24884659LL;
int64_t t125 = 3239408236237LL;
static volatile int64_t t126 = 1263798046139LL;
static volatile uint32_t x549 = 289U;
volatile uint64_t t127 = 2287391LLU;
uint64_t x555 = 52091986561402451LLU;
uint64_t x563 = 14LLU;
volatile uint64_t x565 = 59458756812656LLU;
static int32_t x567 = INT32_MIN;
int32_t x572 = INT32_MAX;
uint64_t t134 = 585054988905312030LLU;
volatile int16_t x590 = INT16_MAX;
volatile int32_t x592 = 1958;
volatile uint8_t x594 = 123U;
static int8_t x599 = INT8_MIN;
int64_t x605 = INT64_MIN;
volatile int16_t x606 = 2675;
static volatile int32_t x609 = INT32_MIN;
int32_t x611 = 52770833;
int64_t x614 = INT64_MIN;
uint64_t x616 = 9012945LLU;
uint64_t t144 = 25LLU;
int64_t x633 = -1LL;
static int8_t x645 = 2;
static volatile int32_t x650 = -2901;
int8_t x659 = -1;
uint32_t t153 = 105U;
volatile int64_t x664 = -2LL;
int64_t x670 = INT64_MIN;
int64_t x692 = -481714LL;
int16_t x696 = INT16_MAX;
static int32_t t164 = -1901;
volatile uint32_t x720 = 1566U;
uint64_t t167 = 7026086831LLU;
volatile uint64_t t169 = 2539555LLU;
int64_t x737 = INT64_MIN;
static int64_t t170 = 14790805093508236LL;
int32_t t171 = 1727;
int32_t x745 = -111;
static int8_t x753 = INT8_MAX;
volatile int32_t x759 = INT32_MAX;
int16_t x764 = INT16_MAX;
static volatile int32_t x768 = INT32_MIN;
int64_t t176 = 519LL;
int64_t x769 = INT64_MIN;
static uint8_t x770 = 4U;
int64_t x773 = INT64_MAX;
volatile int8_t x776 = INT8_MIN;
static int64_t x783 = INT64_MIN;
int64_t t179 = 37LL;
int16_t x788 = INT16_MIN;
uint64_t t180 = 1827013696587252590LLU;
static int8_t x789 = -1;
int16_t x797 = INT16_MAX;
int16_t x799 = 1;
uint32_t x801 = 294U;
int16_t x811 = 4834;
volatile uint8_t x813 = 1U;
volatile int32_t t187 = -462648;
volatile int8_t x825 = INT8_MAX;
int64_t x826 = INT64_MIN;
int32_t x827 = -1510909;
volatile uint8_t x829 = 7U;
int16_t x832 = INT16_MAX;
uint64_t x833 = 62993318480637648LLU;
static uint32_t x835 = UINT32_MAX;
volatile int64_t x838 = INT64_MAX;
volatile int64_t t193 = 79599063889LL;
int32_t t194 = 1765;
int64_t x852 = -14020944LL;
uint32_t t196 = 27693647U;
int8_t x858 = INT8_MIN;
int32_t x865 = 307811;
int32_t x866 = INT32_MIN;


void f0(void) {
    	static int16_t x9 = -1;
	static int16_t x12 = INT16_MAX;
	int64_t t0 = 41764715006281LL;

    t0 = ((x9%x10)^(x11%x12));

    if (t0 != -103LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x13 = 170U;
	int8_t x15 = -1;
	volatile uint32_t t1 = 5243U;

    t1 = ((x13%x14)^(x15%x16));

    if (t1 != 170U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x17 = INT64_MIN;
	static int8_t x18 = -15;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = UINT32_MAX;
	static int64_t t2 = 332LL;

    t2 = ((x17%x18)^(x19%x20));

    if (t2 != -4294967176LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = 282776348881466131LL;
	static int32_t x22 = 11;
	uint16_t x23 = 7366U;
	int64_t t3 = -98041803LL;

    t3 = ((x21%x22)^(x23%x24));

    if (t3 != 7372LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = INT8_MIN;
	uint8_t x26 = 10U;
	int8_t x27 = -6;
	static int16_t x28 = INT16_MIN;
	volatile int32_t t4 = -144;

    t4 = ((x25%x26)^(x27%x28));

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x33 = UINT64_MAX;
	static int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MIN;
	volatile uint64_t t5 = 51613LLU;

    t5 = ((x33%x34)^(x35%x36));

    if (t5 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x37 = 17;
	static volatile int32_t x38 = 46;
	int32_t x40 = 4;
	static volatile uint32_t t6 = 3137248U;

    t6 = ((x37%x38)^(x39%x40));

    if (t6 != 16U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x41 = 1;
	volatile int32_t x42 = INT32_MAX;
	volatile int32_t x43 = 55;
	volatile int32_t x44 = 8;
	int32_t t7 = 11282999;

    t7 = ((x41%x42)^(x43%x44));

    if (t7 != 6) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x45 = 4145340096679880LL;
	volatile uint8_t x46 = 21U;
	static uint64_t x47 = 47262154139149LLU;
	uint16_t x48 = UINT16_MAX;
	uint64_t t8 = 652940121861LLU;

    t8 = ((x45%x46)^(x47%x48));

    if (t8 != 58623LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x50 = INT64_MIN;
	volatile int64_t x51 = INT64_MIN;
	static int32_t x52 = INT32_MAX;
	volatile int64_t t9 = -19802LL;

    t9 = ((x49%x50)^(x51%x52));

    if (t9 != -32767LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = INT16_MIN;
	int32_t t10 = 73854368;

    t10 = ((x53%x54)^(x55%x56));

    if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x57 = 102U;
	int8_t x58 = -1;
	int64_t x59 = INT64_MIN;
	static volatile uint32_t x60 = UINT32_MAX;
	int64_t t11 = -2LL;

    t11 = ((x57%x58)^(x59%x60));

    if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	int64_t x64 = INT64_MIN;
	volatile int64_t t12 = 54740805504975LL;

    t12 = ((x61%x62)^(x63%x64));

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x65 = 173U;
	int32_t x67 = INT32_MAX;
	volatile uint16_t x68 = 14282U;
	volatile int32_t t13 = 10772;

    t13 = ((x65%x66)^(x67%x68));

    if (t13 != 13398) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = 12;
	volatile uint64_t x71 = UINT64_MAX;
	int8_t x72 = -1;
	volatile uint64_t t14 = 318201LLU;

    t14 = ((x69%x70)^(x71%x72));

    if (t14 != 12LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x73 = INT64_MAX;
	static int16_t x74 = -968;
	uint64_t x75 = UINT64_MAX;
	int8_t x76 = INT8_MAX;
	uint64_t t15 = 2245856189363252LLU;

    t15 = ((x73%x74)^(x75%x76));

    if (t15 != 710LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x77 = 422U;
	int64_t x78 = -2647LL;
	int16_t x79 = 0;
	uint8_t x80 = 125U;
	static volatile int64_t t16 = 529312885LL;

    t16 = ((x77%x78)^(x79%x80));

    if (t16 != 422LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x81 = UINT16_MAX;
	uint8_t x82 = UINT8_MAX;
	volatile int16_t x83 = INT16_MIN;
	int32_t t17 = 3;

    t17 = ((x81%x82)^(x83%x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x85 = 13474U;
	uint64_t x86 = 1470296455548699310LLU;
	int64_t x87 = -1LL;
	int32_t x88 = -19577;
	volatile uint64_t t18 = 31027202196LLU;

    t18 = ((x85%x86)^(x87%x88));

    if (t18 != 18446744073709538141LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x89 = UINT32_MAX;
	int64_t t19 = 2871866990497LL;

    t19 = ((x89%x90)^(x91%x92));

    if (t19 != -165LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = INT32_MIN;
	volatile uint16_t x94 = UINT16_MAX;
	int16_t x95 = INT16_MIN;
	int8_t x96 = -11;

    t20 = ((x93%x94)^(x95%x96));

    if (t20 != 32758) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x97 = INT32_MAX;
	volatile uint16_t x98 = 3U;
	int16_t x99 = -21;
	int64_t x100 = INT64_MIN;
	volatile int64_t t21 = -99360568751LL;

    t21 = ((x97%x98)^(x99%x100));

    if (t21 != -22LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = INT32_MIN;
	int32_t x102 = INT32_MIN;
	uint8_t x103 = 126U;
	int8_t x104 = -1;
	int32_t t22 = 4;

    t22 = ((x101%x102)^(x103%x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x109 = 32566202028110LL;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MIN;
	uint8_t x112 = 1U;

    t23 = ((x109%x110)^(x111%x112));

    if (t23 != 170LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x117 = 5U;
	static int64_t x118 = 167618LL;
	int8_t x119 = INT8_MIN;
	static int64_t t24 = -1949965577LL;

    t24 = ((x117%x118)^(x119%x120));

    if (t24 != -123LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = 1353411304LL;
	static volatile int16_t x122 = INT16_MIN;
	uint8_t x123 = 2U;
	int16_t x124 = INT16_MIN;
	static volatile int64_t t25 = 19603LL;

    t25 = ((x121%x122)^(x123%x124));

    if (t25 != 27370LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x127 = 9036U;
	uint8_t x128 = 3U;
	volatile int32_t t26 = -16380579;

    t26 = ((x125%x126)^(x127%x128));

    if (t26 != -20) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x129 = INT32_MAX;
	volatile int16_t x131 = INT16_MAX;
	int32_t x132 = -1;
	int64_t t27 = -6511164970487LL;

    t27 = ((x129%x130)^(x131%x132));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x134 = 1584817;
	int64_t x135 = 142022925580LL;
	volatile uint64_t t28 = 190708111677LLU;

    t28 = ((x133%x134)^(x135%x136));

    if (t28 != 401365LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x137 = INT64_MAX;
	uint8_t x139 = 3U;
	static int8_t x140 = INT8_MAX;
	volatile int64_t t29 = 1350268943623065LL;

    t29 = ((x137%x138)^(x139%x140));

    if (t29 != 7748LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x141 = 36U;
	int8_t x142 = -13;
	volatile uint8_t x144 = 13U;
	int32_t t30 = -12082536;

    t30 = ((x141%x142)^(x143%x144));

    if (t30 != -14) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x145 = 16904943LL;
	int64_t x146 = INT64_MAX;
	static volatile int16_t x147 = 578;
	int32_t x148 = 54685;
	volatile int64_t t31 = 4649LL;

    t31 = ((x145%x146)^(x147%x148));

    if (t31 != 16904365LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x150 = UINT32_MAX;
	int8_t x152 = -1;

    t32 = ((x149%x150)^(x151%x152));

    if (t32 != 41U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x153 = 33U;
	volatile int32_t x154 = 5912773;
	int64_t x156 = INT64_MAX;

    t33 = ((x153%x154)^(x155%x156));

    if (t33 != 32LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x157 = INT32_MIN;
	static uint32_t x158 = 1908199U;
	uint64_t x159 = 427206199689652338LLU;
	uint8_t x160 = 11U;

    t34 = ((x157%x158)^(x159%x160));

    if (t34 != 759767LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x161 = -22149;
	static uint32_t x162 = 44U;
	uint32_t x163 = 65U;
	int32_t x164 = INT32_MAX;
	volatile uint32_t t35 = 1934160U;

    t35 = ((x161%x162)^(x163%x164));

    if (t35 != 94U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x165 = -1LL;
	static uint8_t x166 = UINT8_MAX;
	int32_t x167 = -1;
	uint16_t x168 = 23U;
	volatile int64_t t36 = -11008LL;

    t36 = ((x165%x166)^(x167%x168));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x169 = 15U;
	int64_t x170 = INT64_MIN;
	uint16_t x171 = 6577U;
	int8_t x172 = INT8_MIN;
	volatile int64_t t37 = -4773551087LL;

    t37 = ((x169%x170)^(x171%x172));

    if (t37 != 62LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x173 = 14171;
	int16_t x174 = INT16_MIN;
	uint16_t x176 = 5321U;
	uint32_t t38 = 880690U;

    t38 = ((x173%x174)^(x175%x176));

    if (t38 != 9344U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x177 = 3716292826110LLU;
	static int16_t x178 = INT16_MIN;
	uint16_t x180 = 40U;
	uint64_t t39 = 249261999LLU;

    t39 = ((x177%x178)^(x179%x180));

    if (t39 != 18446740357416725524LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x181 = INT64_MIN;
	static int64_t x182 = INT64_MAX;
	int32_t x184 = -263375527;

    t40 = ((x181%x182)^(x183%x184));

    if (t40 != -65536LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x186 = INT64_MAX;
	volatile int8_t x187 = INT8_MIN;
	uint32_t x188 = 30U;
	volatile int64_t t41 = -144637618234729LL;

    t41 = ((x185%x186)^(x187%x188));

    if (t41 != 30LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x189 = 0;
	static volatile uint16_t x190 = 22914U;
	static int16_t x191 = -632;
	int32_t x192 = INT32_MIN;

    t42 = ((x189%x190)^(x191%x192));

    if (t42 != -632) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x197 = UINT32_MAX;
	int8_t x198 = INT8_MIN;
	uint32_t x200 = 8126U;
	uint32_t t43 = 23U;

    t43 = ((x197%x198)^(x199%x200));

    if (t43 != 2492U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x201 = INT32_MIN;
	static int32_t x202 = INT32_MAX;
	int16_t x203 = INT16_MIN;
	static int16_t x204 = INT16_MAX;

    t44 = ((x201%x202)^(x203%x204));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x205 = 690U;
	int8_t x206 = INT8_MIN;
	int32_t x207 = -6;
	volatile uint32_t t45 = 3386133U;

    t45 = ((x205%x206)^(x207%x208));

    if (t45 != 4294966600U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x210 = 6U;
	int32_t x212 = -129157;

    t46 = ((x209%x210)^(x211%x212));

    if (t46 != -38LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x214 = -15;
	static uint16_t x215 = UINT16_MAX;
	static volatile uint32_t t47 = 643182U;

    t47 = ((x213%x214)^(x215%x216));

    if (t47 != 4294966156U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = INT64_MIN;
	int8_t x218 = 3;
	volatile int64_t t48 = -97476406090560093LL;

    t48 = ((x217%x218)^(x219%x220));

    if (t48 != -32767LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint64_t x221 = UINT64_MAX;
	uint16_t x222 = UINT16_MAX;
	uint8_t x223 = 14U;
	static uint8_t x224 = 33U;
	volatile uint64_t t49 = 7448LLU;

    t49 = ((x221%x222)^(x223%x224));

    if (t49 != 14LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x225 = 114360111U;
	int32_t x227 = INT32_MAX;
	int32_t x228 = 1624;

    t50 = ((x225%x226)^(x227%x228));

    if (t50 != 233U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x230 = -11868967;
	int64_t x231 = INT64_MIN;
	int8_t x232 = -1;
	int64_t t51 = -1834358833427LL;

    t51 = ((x229%x230)^(x231%x232));

    if (t51 != 15396LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x238 = -8;
	uint64_t x239 = UINT64_MAX;
	uint8_t x240 = UINT8_MAX;
	uint64_t t52 = 4LLU;

    t52 = ((x237%x238)^(x239%x240));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x242 = INT16_MIN;
	volatile int64_t x243 = INT64_MAX;
	int64_t x244 = INT64_MIN;
	int64_t t53 = INT64_MAX;

    t53 = ((x241%x242)^(x243%x244));

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x249 = 1394U;
	volatile int8_t x250 = -1;
	int64_t x251 = INT64_MIN;
	volatile int64_t t54 = -22165921944491LL;

    t54 = ((x249%x250)^(x251%x252));

    if (t54 != -9803LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x253 = 7433;
	uint64_t x254 = 190714210528LLU;
	volatile uint8_t x255 = 1U;
	static volatile int32_t x256 = -171161;
	uint64_t t55 = 46023606572725LLU;

    t55 = ((x253%x254)^(x255%x256));

    if (t55 != 7432LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x257 = INT32_MAX;
	int16_t x258 = -1;
	volatile uint16_t x259 = 1U;
	uint32_t x260 = 11698U;
	uint32_t t56 = 3820466U;

    t56 = ((x257%x258)^(x259%x260));

    if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x261 = INT64_MIN;
	int32_t x262 = -6848;
	volatile int64_t x263 = INT64_MIN;
	int64_t x264 = INT64_MIN;
	volatile int64_t t57 = -462748LL;

    t57 = ((x261%x262)^(x263%x264));

    if (t57 != -5824LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	volatile uint8_t x267 = UINT8_MAX;
	int64_t x268 = -1495001968264731LL;
	volatile int64_t t58 = 616101057820LL;

    t58 = ((x265%x266)^(x267%x268));

    if (t58 != 255LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x269 = -49;
	volatile int8_t x270 = -13;
	uint16_t x271 = 0U;
	uint16_t x272 = UINT16_MAX;

    t59 = ((x269%x270)^(x271%x272));

    if (t59 != -10) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x274 = 311893349041LLU;
	int32_t x276 = 29358;

    t60 = ((x273%x274)^(x275%x276));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x277 = 0U;
	static volatile uint8_t x278 = 105U;
	static int8_t x279 = 10;
	volatile int8_t x280 = INT8_MIN;
	volatile uint32_t t61 = 209U;

    t61 = ((x277%x278)^(x279%x280));

    if (t61 != 10U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x281 = -1LL;
	int8_t x282 = -1;
	int32_t x284 = -22224035;
	static volatile int64_t t62 = 381530332831LL;

    t62 = ((x281%x282)^(x283%x284));

    if (t62 != 13976287LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x285 = INT32_MIN;
	int64_t x287 = -1369640LL;
	uint64_t x288 = UINT64_MAX;
	uint64_t t63 = 1707037183LLU;

    t63 = ((x285%x286)^(x287%x288));

    if (t63 != 2146114008LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x289 = -156;
	static uint64_t x292 = UINT64_MAX;
	uint64_t t64 = 127750402374880059LLU;

    t64 = ((x289%x290)^(x291%x292));

    if (t64 != 18446744073709519003LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x293 = INT64_MIN;
	volatile int8_t x294 = INT8_MIN;
	static uint64_t x295 = 4268836328640320LLU;
	uint16_t x296 = 243U;
	uint64_t t65 = 1020LLU;

    t65 = ((x293%x294)^(x295%x296));

    if (t65 != 209LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x297 = INT32_MAX;
	uint64_t x299 = 1015538LLU;
	int32_t x300 = -1;
	uint64_t t66 = 994637524398LLU;

    t66 = ((x297%x298)^(x299%x300));

    if (t66 != 1015541LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x301 = -3;
	uint32_t x303 = 333341947U;
	int8_t x304 = INT8_MIN;
	uint32_t t67 = 88U;

    t67 = ((x301%x302)^(x303%x304));

    if (t67 != 3961625350U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x305 = 1U;
	int8_t x306 = INT8_MIN;
	static int32_t x307 = INT32_MAX;
	static uint32_t x308 = 12292U;
	volatile uint32_t t68 = 613U;

    t68 = ((x305%x306)^(x307%x308));

    if (t68 != 9786U) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x309 = -1;
	uint64_t x310 = 278708500583708LLU;
	volatile int32_t x311 = INT32_MIN;
	static int32_t x312 = -1;

    t69 = ((x309%x310)^(x311%x312));

    if (t69 != 143254076253927LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x313 = INT64_MAX;
	int32_t x314 = -1;
	int32_t x315 = INT32_MIN;
	int8_t x316 = INT8_MIN;
	volatile int64_t t70 = -1LL;

    t70 = ((x313%x314)^(x315%x316));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x317 = -99;
	static volatile int8_t x319 = -3;
	static int16_t x320 = 6;
	static volatile uint32_t t71 = 106131U;

    t71 = ((x317%x318)^(x319%x320));

    if (t71 != 4131276609U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x321 = INT8_MIN;
	uint8_t x322 = 7U;
	int64_t t72 = -433807136LL;

    t72 = ((x321%x322)^(x323%x324));

    if (t72 != -3LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x326 = -231583736;
	uint8_t x327 = UINT8_MAX;
	int8_t x328 = INT8_MIN;
	static int32_t t73 = 3;

    t73 = ((x325%x326)^(x327%x328));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x333 = UINT64_MAX;
	int64_t x334 = INT64_MIN;
	volatile int16_t x335 = INT16_MIN;
	int64_t x336 = -1286902156981125LL;
	uint64_t t74 = 21LLU;

    t74 = ((x333%x334)^(x335%x336));

    if (t74 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x337 = INT64_MIN;
	int64_t x338 = INT64_MAX;
	int16_t x339 = -4240;
	int64_t x340 = -5073762272656LL;

    t75 = ((x337%x338)^(x339%x340));

    if (t75 != 4239LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x345 = UINT64_MAX;
	static int32_t x346 = 1010167;
	int32_t x348 = INT32_MIN;
	uint64_t t76 = 1923940966LLU;

    t76 = ((x345%x346)^(x347%x348));

    if (t76 != 496325LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x349 = 469865418U;
	static uint64_t x350 = UINT64_MAX;
	int8_t x351 = INT8_MIN;
	int16_t x352 = 3326;
	volatile uint64_t t77 = 5829946705383LLU;

    t77 = ((x349%x350)^(x351%x352));

    if (t77 != 18446744073239686218LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x353 = INT32_MAX;
	static int8_t x354 = -1;
	static int64_t x355 = INT64_MIN;

    t78 = ((x353%x354)^(x355%x356));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x357 = INT8_MAX;
	int16_t x359 = INT16_MIN;
	int16_t x360 = -1;
	static int32_t t79 = 2538;

    t79 = ((x357%x358)^(x359%x360));

    if (t79 != 17) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x361 = -1;
	static volatile int64_t x363 = INT64_MAX;
	static int16_t x364 = INT16_MIN;
	int64_t t80 = 15LL;

    t80 = ((x361%x362)^(x363%x364));

    if (t80 != 32767LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x366 = -1LL;
	static uint32_t x367 = 984993U;
	int16_t x368 = 21;
	volatile int64_t t81 = 4584707609593LL;

    t81 = ((x365%x366)^(x367%x368));

    if (t81 != 9LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x369 = UINT64_MAX;
	uint16_t x370 = 6710U;
	static uint16_t x371 = 27U;
	uint8_t x372 = 16U;
	uint64_t t82 = 8817424343223610LLU;

    t82 = ((x369%x370)^(x371%x372));

    if (t82 != 4LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x373 = INT64_MAX;
	volatile uint64_t x374 = UINT64_MAX;
	int16_t x375 = INT16_MAX;
	uint8_t x376 = 71U;
	uint64_t t83 = 2450711LLU;

    t83 = ((x373%x374)^(x375%x376));

    if (t83 != 9223372036854775771LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x377 = 1;
	int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	volatile uint32_t x380 = UINT32_MAX;
	int64_t t84 = 22136LL;

    t84 = ((x377%x378)^(x379%x380));

    if (t84 != -2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x381 = INT8_MIN;
	int32_t x382 = -172882;
	int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t85 = -23;

    t85 = ((x381%x382)^(x383%x384));

    if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x385 = 39420098;
	int8_t x387 = INT8_MAX;
	static int16_t x388 = -707;

    t86 = ((x385%x386)^(x387%x388));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x389 = 0;
	uint32_t x390 = 1687956U;
	int64_t x391 = INT64_MIN;
	static volatile uint64_t t87 = 92644624231333878LLU;

    t87 = ((x389%x390)^(x391%x392));

    if (t87 != 10068494534LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x394 = 7LL;
	uint32_t x396 = 42U;
	uint64_t t88 = 2LLU;

    t88 = ((x393%x394)^(x395%x396));

    if (t88 != 5LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x397 = 7U;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t89 = 1;

    t89 = ((x397%x398)^(x399%x400));

    if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x401 = 402U;
	int16_t x402 = -19;
	static volatile uint32_t x404 = UINT32_MAX;
	uint32_t t90 = 7155U;

    t90 = ((x401%x402)^(x403%x404));

    if (t90 != 65532U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x405 = 22U;
	volatile uint8_t x408 = 4U;
	static int32_t t91 = 808713167;

    t91 = ((x405%x406)^(x407%x408));

    if (t91 != 23) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x409 = INT32_MAX;
	int8_t x410 = -11;
	int64_t t92 = 399104LL;

    t92 = ((x409%x410)^(x411%x412));

    if (t92 != -2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x414 = INT16_MAX;
	static volatile int32_t t93 = 417191842;

    t93 = ((x413%x414)^(x415%x416));

    if (t93 != -34) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x417 = -1LL;
	int16_t x418 = INT16_MIN;
	int64_t x419 = INT64_MIN;
	uint32_t x420 = 1147U;
	int64_t t94 = 18640332713096015LL;

    t94 = ((x417%x418)^(x419%x420));

    if (t94 != 782LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x421 = UINT8_MAX;
	int32_t x422 = INT32_MIN;
	static int16_t x423 = -1078;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t95 = -112851403;

    t95 = ((x421%x422)^(x423%x424));

    if (t95 != -199) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x425 = -13;
	uint8_t x426 = 101U;
	int64_t x427 = INT64_MAX;
	static int32_t x428 = INT32_MIN;
	volatile int64_t t96 = -374LL;

    t96 = ((x425%x426)^(x427%x428));

    if (t96 != -2147483636LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x429 = -507286040;
	static int32_t x431 = INT32_MAX;
	int8_t x432 = INT8_MAX;
	volatile int32_t t97 = 25;

    t97 = ((x429%x430)^(x431%x432));

    if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x433 = INT16_MAX;
	uint8_t x434 = 7U;
	int8_t x435 = INT8_MIN;
	uint64_t x436 = 212387LLU;

    t98 = ((x433%x434)^(x435%x436));

    if (t98 != 147105LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x437 = INT32_MAX;
	int8_t x439 = INT8_MAX;
	volatile int32_t t99 = 4;

    t99 = ((x437%x438)^(x439%x440));

    if (t99 != 32640) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x441 = 68;
	int32_t x444 = 209;
	int32_t t100 = 65978419;

    t100 = ((x441%x442)^(x443%x444));

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x445 = INT32_MIN;
	volatile int32_t x446 = -79946;
	int8_t x447 = INT8_MIN;
	static int16_t x448 = -273;
	volatile int32_t t101 = 1185291;

    t101 = ((x445%x446)^(x447%x448));

    if (t101 != 54018) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x449 = -1LL;
	int32_t x450 = -1;
	int32_t x451 = INT32_MIN;
	volatile int32_t x452 = INT32_MIN;

    t102 = ((x449%x450)^(x451%x452));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x453 = 250598169LLU;
	static volatile uint32_t x454 = 297U;
	int16_t x455 = INT16_MAX;
	volatile uint64_t x456 = UINT64_MAX;

    t103 = ((x453%x454)^(x455%x456));

    if (t103 != 32506LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x457 = -1110;
	volatile int8_t x458 = -1;
	volatile int64_t x459 = 190675290607557979LL;
	int8_t x460 = INT8_MAX;
	volatile int64_t t104 = 661340LL;

    t104 = ((x457%x458)^(x459%x460));

    if (t104 != 68LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x463 = INT16_MIN;
	int8_t x464 = INT8_MAX;
	static volatile int32_t t105 = 25063768;

    t105 = ((x461%x462)^(x463%x464));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x467 = INT32_MIN;
	volatile uint8_t x468 = 26U;
	volatile int32_t t106 = 13;

    t106 = ((x465%x466)^(x467%x468));

    if (t106 != -23) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x469 = INT32_MAX;
	static int8_t x470 = -1;
	int16_t x471 = -3937;
	int64_t x472 = INT64_MIN;
	volatile int64_t t107 = -90688912LL;

    t107 = ((x469%x470)^(x471%x472));

    if (t107 != -3937LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x473 = UINT8_MAX;
	volatile uint16_t x475 = UINT16_MAX;
	int32_t x476 = INT32_MIN;
	uint64_t t108 = 93530LLU;

    t108 = ((x473%x474)^(x475%x476));

    if (t108 != 65280LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x477 = -1;
	volatile int32_t x478 = INT32_MAX;
	int8_t x479 = 15;
	int32_t t109 = 474873;

    t109 = ((x477%x478)^(x479%x480));

    if (t109 != -16) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x481 = INT32_MIN;
	static uint32_t x482 = UINT32_MAX;
	static uint64_t x483 = UINT64_MAX;
	static volatile uint64_t x484 = 34148406181LLU;
	volatile uint64_t t110 = 1521181611099505LLU;

    t110 = ((x481%x482)^(x483%x484));

    if (t110 != 22285788395LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x485 = 139069U;
	static int8_t x487 = INT8_MAX;
	static int64_t t111 = 5707LL;

    t111 = ((x485%x486)^(x487%x488));

    if (t111 != 127LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x489 = 4038;
	uint32_t x492 = UINT32_MAX;

    t112 = ((x489%x490)^(x491%x492));

    if (t112 != 179U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x493 = UINT16_MAX;
	volatile int8_t x494 = 1;
	int16_t x495 = 8705;
	volatile int32_t t113 = 7;

    t113 = ((x493%x494)^(x495%x496));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x497 = -1;
	volatile int64_t x498 = INT64_MIN;
	int16_t x499 = 7;
	int16_t x500 = -1;
	volatile int64_t t114 = -114983LL;

    t114 = ((x497%x498)^(x499%x500));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x502 = INT8_MIN;
	int64_t x503 = -1LL;
	uint64_t x504 = 6232940217LLU;

    t115 = ((x501%x502)^(x503%x504));

    if (t115 != 4978965260LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x505 = INT32_MAX;
	int8_t x506 = -1;
	static int8_t x507 = -17;
	volatile int64_t t116 = 34563LL;

    t116 = ((x505%x506)^(x507%x508));

    if (t116 != -17LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x509 = INT64_MAX;
	static int8_t x511 = INT8_MAX;
	uint64_t t117 = 411807515LLU;

    t117 = ((x509%x510)^(x511%x512));

    if (t117 != 9223372036854775786LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x513 = -7;
	int64_t x514 = -1LL;
	volatile int16_t x516 = 538;
	static volatile uint64_t t118 = 517453LLU;

    t118 = ((x513%x514)^(x515%x516));

    if (t118 != 318LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x517 = -1;
	uint16_t x518 = 14739U;
	int32_t x519 = 113319;
	volatile uint32_t t119 = 24U;

    t119 = ((x517%x518)^(x519%x520));

    if (t119 != 4294960806U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x522 = INT16_MIN;
	uint32_t x523 = UINT32_MAX;
	int32_t x524 = INT32_MIN;

    t120 = ((x521%x522)^(x523%x524));

    if (t120 != 2147483642U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x525 = INT16_MAX;
	int32_t x526 = 145206053;
	volatile int16_t x527 = INT16_MIN;
	uint32_t x528 = UINT32_MAX;
	static uint32_t t121 = UINT32_MAX;

    t121 = ((x525%x526)^(x527%x528));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x529 = 59666;
	static int64_t x531 = INT64_MAX;
	static uint64_t x532 = 2835267346LLU;
	static uint64_t t122 = 89305576LLU;

    t122 = ((x529%x530)^(x531%x532));

    if (t122 != 252441383LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint32_t x535 = 1903611U;
	uint8_t x536 = UINT8_MAX;
	int64_t t123 = 88LL;

    t123 = ((x533%x534)^(x535%x536));

    if (t123 != 32LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x539 = 9;
	volatile int64_t t124 = -17369708LL;

    t124 = ((x537%x538)^(x539%x540));

    if (t124 != 63602571985556LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x541 = -1;
	volatile int8_t x543 = INT8_MIN;
	int8_t x544 = INT8_MIN;

    t125 = ((x541%x542)^(x543%x544));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x545 = INT64_MIN;
	static volatile int64_t x546 = -310838371557LL;
	uint16_t x547 = 0U;
	uint16_t x548 = UINT16_MAX;

    t126 = ((x545%x546)^(x547%x548));

    if (t126 != -252335542103LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x550 = -141;
	uint64_t x551 = UINT64_MAX;
	static int8_t x552 = INT8_MIN;

    t127 = ((x549%x550)^(x551%x552));

    if (t127 != 350LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x553 = 5649U;
	static uint64_t x554 = UINT64_MAX;
	static uint16_t x556 = 1948U;
	volatile uint64_t t128 = 2068LLU;

    t128 = ((x553%x554)^(x555%x556));

    if (t128 != 4478LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x557 = -1;
	volatile int8_t x558 = -1;
	int64_t x559 = -1LL;
	int32_t x560 = INT32_MIN;
	volatile int64_t t129 = 70164237305332007LL;

    t129 = ((x557%x558)^(x559%x560));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x561 = -1;
	volatile int64_t x562 = INT64_MIN;
	volatile int32_t x564 = INT32_MIN;
	volatile uint64_t t130 = 23019LLU;

    t130 = ((x561%x562)^(x563%x564));

    if (t130 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x566 = 775;
	int16_t x568 = INT16_MIN;
	uint64_t t131 = 58LLU;

    t131 = ((x565%x566)^(x567%x568));

    if (t131 != 356LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x569 = -1;
	volatile uint16_t x570 = 786U;
	int32_t x571 = INT32_MIN;
	int32_t t132 = 14989;

    t132 = ((x569%x570)^(x571%x572));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x573 = 336U;
	static volatile int16_t x574 = INT16_MIN;
	volatile uint8_t x575 = 95U;
	int32_t x576 = INT32_MIN;
	static volatile int32_t t133 = 0;

    t133 = ((x573%x574)^(x575%x576));

    if (t133 != 271) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x577 = UINT16_MAX;
	uint64_t x578 = 24882333089LLU;
	int64_t x579 = INT64_MIN;
	static int8_t x580 = INT8_MAX;

    t134 = ((x577%x578)^(x579%x580));

    if (t134 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x581 = UINT32_MAX;
	volatile int8_t x582 = INT8_MIN;
	uint8_t x583 = 59U;
	int16_t x584 = INT16_MAX;
	static uint32_t t135 = 1005656609U;

    t135 = ((x581%x582)^(x583%x584));

    if (t135 != 68U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x585 = 1050573834470493LL;
	int32_t x586 = INT32_MIN;
	int32_t x587 = 16;
	static int64_t x588 = INT64_MAX;
	int64_t t136 = 123785LL;

    t136 = ((x585%x586)^(x587%x588));

    if (t136 != 1211548749LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x589 = -8;
	uint16_t x591 = 1U;
	int32_t t137 = -5;

    t137 = ((x589%x590)^(x591%x592));

    if (t137 != -7) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x593 = INT16_MAX;
	int64_t x595 = 26498LL;
	int8_t x596 = INT8_MIN;
	volatile int64_t t138 = -206686349310748216LL;

    t138 = ((x593%x594)^(x595%x596));

    if (t138 != 51LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x597 = -4;
	int16_t x598 = 242;
	int32_t x600 = INT32_MIN;
	volatile int32_t t139 = 500186762;

    t139 = ((x597%x598)^(x599%x600));

    if (t139 != 124) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x601 = -1;
	int32_t x602 = INT32_MAX;
	static int16_t x603 = -1;
	int64_t x604 = -1LL;
	volatile int64_t t140 = -593634LL;

    t140 = ((x601%x602)^(x603%x604));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x607 = INT16_MIN;
	int64_t x608 = -1894LL;
	volatile int64_t t141 = 123145LL;

    t141 = ((x605%x606)^(x607%x608));

    if (t141 != 1252LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x610 = INT32_MAX;
	uint8_t x612 = 1U;
	volatile int32_t t142 = 11607;

    t142 = ((x609%x610)^(x611%x612));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x613 = 9U;
	uint16_t x615 = 1U;
	volatile uint64_t t143 = 838145LLU;

    t143 = ((x613%x614)^(x615%x616));

    if (t143 != 8LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x617 = UINT64_MAX;
	int32_t x618 = 129221;
	static uint16_t x619 = UINT16_MAX;
	int8_t x620 = INT8_MAX;

    t144 = ((x617%x618)^(x619%x620));

    if (t144 != 24862LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x621 = -28;
	int8_t x622 = INT8_MIN;
	int64_t x623 = 353887506588482341LL;
	static int32_t x624 = -3779604;
	static int64_t t145 = -1279160741940448LL;

    t145 = ((x621%x622)^(x623%x624));

    if (t145 != -1566183LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x625 = UINT32_MAX;
	int8_t x626 = -3;
	uint16_t x627 = UINT16_MAX;
	int16_t x628 = -15;
	volatile uint32_t t146 = 25167U;

    t146 = ((x625%x626)^(x627%x628));

    if (t146 != 2U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x629 = INT16_MIN;
	static int32_t x630 = 62778;
	volatile int32_t x631 = INT32_MIN;
	int16_t x632 = INT16_MIN;
	volatile int32_t t147 = -4;

    t147 = ((x629%x630)^(x631%x632));

    if (t147 != -32768) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x634 = INT64_MAX;
	int64_t x635 = 86211649LL;
	int32_t x636 = -1;
	volatile int64_t t148 = 11778373647LL;

    t148 = ((x633%x634)^(x635%x636));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x641 = 125U;
	static uint16_t x642 = 53U;
	uint16_t x643 = 1341U;
	int32_t x644 = INT32_MIN;
	static volatile int32_t t149 = -180;

    t149 = ((x641%x642)^(x643%x644));

    if (t149 != 1326) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x646 = UINT64_MAX;
	int64_t x647 = INT64_MIN;
	volatile uint32_t x648 = 403587U;
	uint64_t t150 = 292796LLU;

    t150 = ((x645%x646)^(x647%x648));

    if (t150 != 18446744073709442242LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x649 = -1;
	int64_t x651 = INT64_MAX;
	int8_t x652 = INT8_MAX;
	int64_t t151 = -1686LL;

    t151 = ((x649%x650)^(x651%x652));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x653 = UINT8_MAX;
	int16_t x654 = 331;
	int32_t x655 = INT32_MAX;
	static volatile uint16_t x656 = 30781U;
	volatile int32_t t152 = 0;

    t152 = ((x653%x654)^(x655%x656));

    if (t152 != 16622) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x657 = INT32_MIN;
	uint32_t x658 = UINT32_MAX;
	int8_t x660 = INT8_MAX;

    t153 = ((x657%x658)^(x659%x660));

    if (t153 != 2147483647U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x661 = INT32_MIN;
	static int64_t x662 = INT64_MIN;
	int64_t x663 = INT64_MIN;
	volatile int64_t t154 = 13878901176LL;

    t154 = ((x661%x662)^(x663%x664));

    if (t154 != -2147483648LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x665 = 59;
	int64_t x666 = -1LL;
	volatile int16_t x667 = INT16_MIN;
	int16_t x668 = -2978;
	static volatile int64_t t155 = -383LL;

    t155 = ((x665%x666)^(x667%x668));

    if (t155 != -10LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x669 = 145149LLU;
	uint32_t x671 = 3396421U;
	int16_t x672 = 1;
	volatile uint64_t t156 = 375657736LLU;

    t156 = ((x669%x670)^(x671%x672));

    if (t156 != 145149LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x673 = -1;
	int64_t x674 = -1LL;
	int32_t x675 = -3;
	uint8_t x676 = UINT8_MAX;
	int64_t t157 = -34390LL;

    t157 = ((x673%x674)^(x675%x676));

    if (t157 != -3LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x677 = INT16_MIN;
	int8_t x678 = -1;
	static uint8_t x679 = 7U;
	int16_t x680 = INT16_MAX;
	static int32_t t158 = -1306;

    t158 = ((x677%x678)^(x679%x680));

    if (t158 != 7) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x681 = 26270U;
	uint32_t x682 = 5U;
	int16_t x683 = -1;
	uint8_t x684 = UINT8_MAX;
	uint32_t t159 = UINT32_MAX;

    t159 = ((x681%x682)^(x683%x684));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x685 = INT64_MIN;
	int32_t x686 = INT32_MIN;
	uint32_t x687 = 3U;
	uint8_t x688 = 16U;
	int64_t t160 = -497101162167748790LL;

    t160 = ((x685%x686)^(x687%x688));

    if (t160 != 3LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x689 = INT64_MIN;
	uint16_t x690 = UINT16_MAX;
	volatile int16_t x691 = -2131;
	int64_t t161 = -1952LL;

    t161 = ((x689%x690)^(x691%x692));

    if (t161 != 30637LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x693 = -53684;
	volatile int8_t x694 = 1;
	uint16_t x695 = 4U;
	int32_t t162 = -4;

    t162 = ((x693%x694)^(x695%x696));

    if (t162 != 4) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x697 = 0U;
	uint64_t x698 = UINT64_MAX;
	int16_t x699 = INT16_MAX;
	static uint64_t x700 = UINT64_MAX;
	volatile uint64_t t163 = 124883LLU;

    t163 = ((x697%x698)^(x699%x700));

    if (t163 != 32767LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x701 = -1;
	int8_t x702 = -3;
	int32_t x703 = -687325;
	int8_t x704 = -1;

    t164 = ((x701%x702)^(x703%x704));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x709 = INT8_MIN;
	uint8_t x710 = 124U;
	int32_t x711 = -5;
	volatile int64_t x712 = INT64_MIN;
	static int64_t t165 = -475213352755LL;

    t165 = ((x709%x710)^(x711%x712));

    if (t165 != 7LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x713 = INT8_MAX;
	int16_t x714 = INT16_MIN;
	int32_t x715 = 87;
	volatile uint32_t x716 = 395140U;
	uint32_t t166 = 1233393U;

    t166 = ((x713%x714)^(x715%x716));

    if (t166 != 40U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x717 = 121585533LLU;
	int32_t x718 = INT32_MIN;
	int8_t x719 = INT8_MIN;

    t167 = ((x717%x718)^(x719%x720));

    if (t167 != 121585035LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x721 = -42;
	volatile uint32_t x722 = 10U;
	int16_t x723 = INT16_MIN;
	int16_t x724 = -17;
	uint32_t t168 = 1U;

    t168 = ((x721%x722)^(x723%x724));

    if (t168 != 4294967283U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x729 = -1;
	volatile uint64_t x730 = 188063LLU;
	int16_t x731 = 15;
	int32_t x732 = -66028;

    t169 = ((x729%x730)^(x731%x732));

    if (t169 != 31567LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x738 = INT16_MIN;
	static int16_t x739 = -1;
	int64_t x740 = 8LL;

    t170 = ((x737%x738)^(x739%x740));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x741 = INT32_MAX;
	static int8_t x742 = INT8_MIN;
	uint16_t x743 = 3367U;
	int8_t x744 = INT8_MIN;

    t171 = ((x741%x742)^(x743%x744));

    if (t171 != 88) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x746 = INT64_MIN;
	static uint8_t x747 = 15U;
	static uint8_t x748 = 2U;
	int64_t t172 = 92593002798LL;

    t172 = ((x745%x746)^(x747%x748));

    if (t172 != -112LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x754 = INT16_MAX;
	uint8_t x755 = 0U;
	volatile int8_t x756 = -26;
	static int32_t t173 = 1;

    t173 = ((x753%x754)^(x755%x756));

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x757 = 6U;
	uint64_t x758 = 5743597046095852894LLU;
	static int32_t x760 = INT32_MIN;
	uint64_t t174 = 547847439244374LLU;

    t174 = ((x757%x758)^(x759%x760));

    if (t174 != 2147483641LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x761 = 89;
	int8_t x762 = -1;
	uint32_t x763 = 53194796U;
	static uint32_t t175 = 103U;

    t175 = ((x761%x762)^(x763%x764));

    if (t175 != 13955U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x765 = INT64_MAX;
	int16_t x766 = INT16_MIN;
	int8_t x767 = INT8_MAX;

    t176 = ((x765%x766)^(x767%x768));

    if (t176 != 32640LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x771 = UINT8_MAX;
	int16_t x772 = -1;
	int64_t t177 = 15LL;

    t177 = ((x769%x770)^(x771%x772));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x774 = 13U;
	int16_t x775 = INT16_MIN;
	int64_t t178 = -21LL;

    t178 = ((x773%x774)^(x775%x776));

    if (t178 != 7LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x781 = -1;
	volatile int16_t x782 = 504;
	int64_t x784 = -6LL;

    t179 = ((x781%x782)^(x783%x784));

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x785 = 18U;
	volatile int8_t x786 = INT8_MAX;
	uint64_t x787 = UINT64_MAX;

    t180 = ((x785%x786)^(x787%x788));

    if (t180 != 32749LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x790 = 23205U;
	int16_t x791 = INT16_MIN;
	volatile int32_t x792 = INT32_MAX;
	volatile uint32_t t181 = 11064U;

    t181 = ((x789%x790)^(x791%x792));

    if (t181 != 4294934783U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x793 = 585897;
	static int64_t x794 = INT64_MIN;
	static int8_t x795 = INT8_MIN;
	static int8_t x796 = INT8_MIN;
	volatile int64_t t182 = 3217912370900926LL;

    t182 = ((x793%x794)^(x795%x796));

    if (t182 != 585897LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x798 = 14;
	int32_t x800 = 739645;
	volatile int32_t t183 = -40;

    t183 = ((x797%x798)^(x799%x800));

    if (t183 != 6) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x802 = UINT16_MAX;
	static uint32_t x803 = 156558084U;
	uint64_t x804 = 705423956LLU;
	volatile uint64_t t184 = 633671747053996390LLU;

    t184 = ((x801%x802)^(x803%x804));

    if (t184 != 156557858LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x805 = -4;
	volatile int16_t x806 = -243;
	int16_t x807 = -68;
	int64_t x808 = INT64_MIN;
	static int64_t t185 = 105997306967985LL;

    t185 = ((x805%x806)^(x807%x808));

    if (t185 != 64LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x809 = 79U;
	static int16_t x810 = INT16_MIN;
	static int64_t x812 = INT64_MIN;
	volatile int64_t t186 = 129575914LL;

    t186 = ((x809%x810)^(x811%x812));

    if (t186 != 4781LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x814 = INT8_MIN;
	static int32_t x815 = 1696910;
	static volatile int32_t x816 = INT32_MAX;

    t187 = ((x813%x814)^(x815%x816));

    if (t187 != 1696911) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x817 = INT32_MAX;
	uint32_t x818 = 1177U;
	volatile uint64_t x819 = UINT64_MAX;
	int32_t x820 = 43926811;
	volatile uint64_t t188 = 11744981832LLU;

    t188 = ((x817%x818)^(x819%x820));

    if (t188 != 22213697LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x828 = INT64_MIN;
	volatile int64_t t189 = 85LL;

    t189 = ((x825%x826)^(x827%x828));

    if (t189 != -1510788LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x830 = UINT64_MAX;
	int16_t x831 = INT16_MAX;
	volatile uint64_t t190 = 1100522340345406759LLU;

    t190 = ((x829%x830)^(x831%x832));

    if (t190 != 7LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x834 = INT32_MAX;
	static int32_t x836 = INT32_MIN;
	volatile uint64_t t191 = 1707LLU;

    t191 = ((x833%x834)^(x835%x836));

    if (t191 != 452819202LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x837 = INT32_MIN;
	uint64_t x839 = 247804LLU;
	static uint64_t x840 = UINT64_MAX;
	volatile uint64_t t192 = 10979721918LLU;

    t192 = ((x837%x838)^(x839%x840));

    if (t192 != 18446744071562315772LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x841 = -2LL;
	volatile int32_t x842 = 604629;
	int8_t x843 = INT8_MIN;
	static uint16_t x844 = 886U;

    t193 = ((x841%x842)^(x843%x844));

    if (t193 != 126LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x845 = UINT8_MAX;
	uint16_t x846 = 31586U;
	static int8_t x847 = INT8_MIN;
	int16_t x848 = INT16_MIN;

    t194 = ((x845%x846)^(x847%x848));

    if (t194 != -129) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x849 = INT64_MIN;
	int64_t x850 = -1LL;
	int16_t x851 = INT16_MAX;
	volatile int64_t t195 = -1LL;

    t195 = ((x849%x850)^(x851%x852));

    if (t195 != 32767LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x853 = -1;
	uint16_t x854 = UINT16_MAX;
	int32_t x855 = INT32_MIN;
	uint32_t x856 = UINT32_MAX;

    t196 = ((x853%x854)^(x855%x856));

    if (t196 != 2147483647U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x857 = 1138;
	static uint64_t x859 = 13LLU;
	int32_t x860 = -140;
	volatile uint64_t t197 = 18LLU;

    t197 = ((x857%x858)^(x859%x860));

    if (t197 != 127LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x861 = 0;
	int32_t x862 = INT32_MIN;
	int64_t x863 = INT64_MIN;
	uint32_t x864 = UINT32_MAX;
	volatile int64_t t198 = -5515349LL;

    t198 = ((x861%x862)^(x863%x864));

    if (t198 != -2147483648LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x867 = 21;
	uint32_t x868 = UINT32_MAX;
	volatile uint32_t t199 = 817243U;

    t199 = ((x865%x866)^(x867%x868));

    if (t199 != 307830U) { NG(); } else { ; }
	
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

