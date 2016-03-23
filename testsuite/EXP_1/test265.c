
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

static int8_t x5 = -3;
static volatile int8_t x6 = INT8_MIN;
volatile uint64_t t4 = 998392707214LLU;
uint32_t x27 = 2056520269U;
uint64_t t5 = UINT64_MAX;
int64_t x29 = -1LL;
int64_t t6 = 9905616LL;
uint16_t x39 = 1U;
uint16_t x42 = UINT16_MAX;
static int32_t x43 = INT32_MIN;
uint64_t t11 = 3LLU;
volatile int8_t x57 = -1;
int64_t x59 = 3068907265777545686LL;
volatile int8_t x66 = 1;
int8_t x71 = INT8_MIN;
uint8_t x72 = UINT8_MAX;
static int64_t t15 = -7623LL;
static int8_t x79 = INT8_MIN;
static uint64_t x85 = UINT64_MAX;
uint64_t t18 = 1428576781079LLU;
int64_t t19 = 0LL;
static uint16_t x94 = 29661U;
static int64_t x101 = INT64_MAX;
uint8_t x102 = 12U;
static int32_t x108 = -1;
int64_t x109 = -1LL;
uint8_t x113 = 1U;
uint32_t x115 = 1U;
volatile uint8_t x118 = 34U;
uint32_t x122 = UINT32_MAX;
uint32_t x132 = 510177U;
static uint32_t t29 = 929U;
static volatile int32_t t30 = -220286;
int64_t x146 = INT64_MIN;
volatile int8_t x148 = INT8_MIN;
volatile uint64_t x149 = 134761951830840523LLU;
uint16_t x154 = UINT16_MAX;
uint64_t t33 = UINT64_MAX;
volatile int16_t x164 = INT16_MIN;
int64_t x175 = -1LL;
uint32_t x188 = UINT32_MAX;
volatile uint32_t t41 = UINT32_MAX;
volatile int32_t t42 = -47666366;
uint64_t t43 = UINT64_MAX;
uint64_t x201 = 13566219630298LLU;
int8_t x210 = -1;
static int64_t x211 = INT64_MAX;
volatile uint16_t x220 = 3U;
int64_t t49 = -1012007963LL;
int64_t x231 = INT64_MIN;
uint64_t x235 = 1769175540388LLU;
uint16_t x236 = UINT16_MAX;
static uint64_t x237 = 39LLU;
uint64_t t54 = 3591958874347LLU;
int64_t x242 = -626LL;
volatile int32_t x249 = INT32_MAX;
int32_t x267 = -313;
volatile int64_t x269 = -1LL;
static int16_t x282 = -29;
static int32_t t63 = -463122297;
int8_t x285 = INT8_MIN;
volatile int64_t x289 = INT64_MAX;
uint64_t x292 = 7943LLU;
volatile uint64_t x294 = UINT64_MAX;
volatile uint16_t x296 = 15644U;
volatile int64_t x308 = -64468971694494172LL;
uint64_t x317 = 160319593695841LLU;
int8_t x319 = INT8_MIN;
static uint64_t x331 = 138559495LLU;
uint16_t x343 = UINT16_MAX;
static int16_t x344 = 0;
static volatile int32_t t76 = -14000;
uint16_t x346 = 216U;
uint64_t t77 = UINT64_MAX;
int16_t x369 = INT16_MIN;
int8_t x370 = 0;
int64_t x384 = INT64_MIN;
int16_t x389 = -1;
volatile uint64_t x393 = UINT64_MAX;
static int8_t x402 = INT8_MIN;
uint8_t x404 = 1U;
static volatile uint32_t t89 = 1186310806U;
int64_t t91 = 3530421264179252898LL;
int16_t x423 = 3;
uint8_t x427 = 6U;
int16_t x429 = -1;
int32_t x431 = INT32_MIN;
int32_t x432 = 76847452;
volatile int8_t x440 = INT8_MAX;
volatile int8_t x441 = INT8_MIN;
static volatile uint64_t t97 = 254868LLU;
int64_t x455 = -85869330644062LL;
uint64_t t99 = UINT64_MAX;
static int64_t x466 = INT64_MIN;
int64_t t101 = 5744785LL;
uint16_t x477 = 1829U;
int32_t x487 = INT32_MAX;
static int32_t x488 = -1;
uint32_t x508 = UINT32_MAX;
volatile int8_t x516 = -1;
uint16_t x518 = UINT16_MAX;
static int64_t x519 = INT64_MIN;
uint16_t x520 = 86U;
int16_t x526 = -1903;
static int32_t x529 = INT32_MIN;
static uint8_t x538 = UINT8_MAX;
volatile int64_t x540 = INT64_MAX;
int16_t x544 = -95;
volatile int64_t t117 = INT64_MIN;
static int32_t x554 = 66496584;
uint16_t x555 = 98U;
int32_t x556 = INT32_MAX;
volatile uint32_t t120 = 733U;
static uint16_t x561 = UINT16_MAX;
uint32_t x571 = UINT32_MAX;
static volatile int32_t x576 = INT32_MIN;
int8_t x584 = 0;
volatile uint64_t t125 = 272947660135LLU;
int32_t t128 = 1;
int64_t x606 = -1LL;
static uint8_t x607 = UINT8_MAX;
static int8_t x609 = -41;
int8_t x610 = INT8_MAX;
int32_t x623 = INT32_MIN;
uint32_t x627 = 1U;
static volatile uint64_t t133 = 27LLU;
uint64_t x640 = 2337LLU;
volatile int16_t x645 = -1;
int16_t x654 = -1;
uint64_t t138 = 81829932LLU;
static uint16_t x665 = 22572U;
volatile int32_t x667 = -19352502;
int8_t x671 = -1;
volatile uint8_t x672 = 1U;
int32_t x682 = INT32_MAX;
int64_t t143 = -131694263076356495LL;
volatile int32_t x687 = INT32_MIN;
volatile uint32_t t144 = 66U;
int16_t x693 = 4011;
uint32_t x699 = UINT32_MAX;
static int64_t x701 = -1LL;
int64_t t148 = 1408089539930508877LL;
static uint64_t x711 = 1119LLU;
int32_t x716 = -1;
static uint16_t x717 = 6U;
int32_t x720 = INT32_MIN;
static volatile int32_t t154 = 115331;
uint64_t x738 = 11LLU;
int16_t x740 = INT16_MIN;
int64_t t156 = 4LL;
static uint8_t x746 = 18U;
int32_t x751 = INT32_MAX;
volatile int8_t x756 = INT8_MIN;
int8_t x761 = INT8_MIN;
uint8_t x763 = UINT8_MAX;
volatile int64_t t160 = -328228555826LL;
int32_t x777 = -57766;
uint16_t x780 = 1052U;
int32_t t162 = -1343;
uint32_t t163 = 17U;
volatile int64_t x799 = 983030LL;
static int64_t x800 = INT64_MAX;
volatile uint32_t x808 = 2769225U;
int32_t x810 = -1;
volatile int32_t t169 = 26932;
static volatile int64_t x817 = -4036846LL;
int8_t x820 = 1;
int64_t t171 = 63070LL;
volatile uint64_t x831 = 7620656638669210706LLU;
volatile int32_t x832 = 219916280;
static uint16_t x840 = 10U;
uint32_t x841 = 37529793U;
uint32_t x843 = 9U;
int32_t x847 = 300379696;
static uint64_t t177 = 3319571121585628LLU;
volatile uint8_t x859 = 57U;
int16_t x860 = INT16_MIN;
volatile int32_t x863 = INT32_MIN;
int64_t x870 = -1121810096532497102LL;
volatile int64_t t181 = -70776394LL;
int16_t x874 = INT16_MAX;
volatile int32_t t182 = INT32_MAX;
int16_t x877 = INT16_MAX;
int8_t x878 = INT8_MIN;
uint64_t x887 = UINT64_MAX;
int64_t t191 = -2031643865514LL;
int32_t x922 = -1;
int8_t x924 = 1;
uint32_t x937 = UINT32_MAX;
int8_t x938 = 10;
int32_t x940 = -384;
int32_t x944 = -1;
static int8_t x946 = 1;
static uint32_t t198 = 2442U;
volatile int64_t t199 = 31619LL;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	static uint64_t x2 = 534755423517729002LLU;
	static uint64_t x3 = 2007LLU;
	static uint8_t x4 = 5U;
	volatile uint64_t t0 = 15182LLU;

    t0 = (((x1-x2)%x3)|x4);

    if (t0 != 1941LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x7 = 82;
	static int32_t x8 = -1;
	int32_t t1 = -14;

    t1 = (((x5-x6)%x7)|x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 2U;
	uint8_t x10 = UINT8_MAX;
	static int64_t x11 = INT64_MAX;
	uint32_t x12 = 911U;
	int64_t t2 = -3875367687069LL;

    t2 = (((x9-x10)%x11)|x12);

    if (t2 != -113LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 72U;
	volatile int8_t x14 = INT8_MAX;
	int16_t x15 = 12;
	uint32_t x16 = 440U;
	volatile uint32_t t3 = 9878095U;

    t3 = (((x13-x14)%x15)|x16);

    if (t3 != 4294967289U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x21 = 2U;
	uint64_t x22 = 45LLU;
	uint16_t x23 = UINT16_MAX;
	uint16_t x24 = 1U;

    t4 = (((x21-x22)%x23)|x24);

    if (t4 != 65493LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	uint32_t x26 = 772671304U;
	volatile uint64_t x28 = UINT64_MAX;

    t5 = (((x25-x26)%x27)|x28);

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x30 = UINT16_MAX;
	int8_t x31 = INT8_MIN;
	static int16_t x32 = INT16_MIN;

    t6 = (((x29-x30)%x31)|x32);

    if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = UINT8_MAX;
	uint8_t x34 = 12U;
	uint64_t x35 = 271LLU;
	static uint8_t x36 = UINT8_MAX;
	volatile uint64_t t7 = 1117302LLU;

    t7 = (((x33-x34)%x35)|x36);

    if (t7 != 255LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = UINT8_MAX;
	uint16_t x38 = UINT16_MAX;
	int16_t x40 = INT16_MIN;
	int32_t t8 = 1;

    t8 = (((x37-x38)%x39)|x40);

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = 2;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = -5311406857192LL;

    t9 = (((x41-x42)%x43)|x44);

    if (t9 != -65533LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = 7534223351LLU;
	int32_t x46 = -1;
	static uint32_t x47 = 1551729582U;
	int32_t x48 = INT32_MIN;
	volatile uint64_t t10 = 16465102971762LLU;

    t10 = (((x45-x46)%x47)|x48);

    if (t10 != 18446744072889372992LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = UINT32_MAX;
	int8_t x50 = INT8_MAX;
	int32_t x51 = INT32_MIN;
	uint64_t x52 = 1LLU;

    t11 = (((x49-x50)%x51)|x52);

    if (t11 != 2147483521LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x58 = 26576227033042LL;
	static int64_t x60 = INT64_MIN;
	static volatile int64_t t12 = 41454894389LL;

    t12 = (((x57-x58)%x59)|x60);

    if (t12 != -26576227033043LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = 3;
	int64_t x67 = INT64_MIN;
	static volatile int8_t x68 = -1;
	volatile int64_t t13 = -472495LL;

    t13 = (((x65-x66)%x67)|x68);

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x69 = 1371512145778589185LL;
	int16_t x70 = -27;
	static int64_t t14 = 751288367820LL;

    t14 = (((x69-x70)%x71)|x72);

    if (t14 != 255LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x73 = 1U;
	static int8_t x74 = 0;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = UINT16_MAX;

    t15 = (((x73-x74)%x75)|x76);

    if (t15 != 65535LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x77 = 0LLU;
	static int16_t x78 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	uint64_t t16 = 4929429022530387860LLU;

    t16 = (((x77-x78)%x79)|x80);

    if (t16 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x81 = INT32_MIN;
	uint64_t x82 = 214525625082806LLU;
	uint8_t x83 = UINT8_MAX;
	int8_t x84 = -49;
	uint64_t t17 = UINT64_MAX;

    t17 = (((x81-x82)%x83)|x84);

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x86 = UINT16_MAX;
	volatile int64_t x87 = INT64_MIN;
	static int16_t x88 = INT16_MAX;

    t18 = (((x85-x86)%x87)|x88);

    if (t18 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x89 = INT64_MIN;
	int32_t x90 = -44;
	int16_t x91 = -1;
	int32_t x92 = -1;

    t19 = (((x89-x90)%x91)|x92);

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x93 = INT8_MAX;
	int32_t x95 = INT32_MAX;
	volatile int16_t x96 = -1;
	int32_t t20 = 707;

    t20 = (((x93-x94)%x95)|x96);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x103 = INT8_MAX;
	int32_t x104 = -4;
	volatile int64_t t21 = -439785985640LL;

    t21 = (((x101-x102)%x103)|x104);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x105 = 42U;
	static int64_t x106 = 67759879LL;
	int64_t x107 = INT64_MIN;
	int64_t t22 = 3063059255948LL;

    t22 = (((x105-x106)%x107)|x108);

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x110 = 6793388726233LLU;
	volatile uint16_t x111 = 1628U;
	int8_t x112 = 1;
	volatile uint64_t t23 = 844639253LLU;

    t23 = (((x109-x110)%x111)|x112);

    if (t23 != 567LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x114 = UINT32_MAX;
	volatile int8_t x116 = -1;
	volatile uint32_t t24 = UINT32_MAX;

    t24 = (((x113-x114)%x115)|x116);

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x117 = INT8_MAX;
	volatile uint32_t x119 = 8856765U;
	volatile int32_t x120 = INT32_MIN;
	static uint32_t t25 = 29874U;

    t25 = (((x117-x118)%x119)|x120);

    if (t25 != 2147483741U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x121 = 255989508;
	static uint64_t x123 = 26701106734360LLU;
	volatile int64_t x124 = -5042835880LL;
	volatile uint64_t t26 = 31857LLU;

    t26 = (((x121-x122)%x123)|x124);

    if (t26 != 18446744068868177757LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x125 = UINT16_MAX;
	int8_t x126 = 4;
	static int64_t x127 = 16631866518LL;
	uint32_t x128 = 39313U;
	int64_t t27 = -1180513721196697LL;

    t27 = (((x125-x126)%x127)|x128);

    if (t27 != 65531LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x129 = 557U;
	static uint64_t x130 = 13075021072726439LLU;
	int64_t x131 = 14308584215131493LL;
	uint64_t t28 = 7180601113096188720LLU;

    t28 = (((x129-x130)%x131)|x132);

    if (t28 != 4212583547530495LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = -1;
	int32_t x134 = 1601;
	static volatile uint32_t x135 = 201276U;
	int8_t x136 = 1;

    t29 = (((x133-x134)%x135)|x136);

    if (t29 != 138407U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x141 = -1;
	uint16_t x142 = 2026U;
	uint8_t x143 = 56U;
	static volatile int16_t x144 = INT16_MIN;

    t30 = (((x141-x142)%x143)|x144);

    if (t30 != -11) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x145 = INT16_MIN;
	int8_t x147 = -1;
	int64_t t31 = -373367769LL;

    t31 = (((x145-x146)%x147)|x148);

    if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x150 = 3724903451351436LL;
	uint8_t x151 = 3U;
	int16_t x152 = INT16_MIN;
	static uint64_t t32 = 1376085713753LLU;

    t32 = (((x149-x150)%x151)|x152);

    if (t32 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x153 = 31295193LLU;
	int32_t x155 = 3000652;
	volatile int32_t x156 = -1;

    t33 = (((x153-x154)%x155)|x156);

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x157 = INT16_MIN;
	int64_t x158 = -1LL;
	int8_t x159 = 32;
	int64_t x160 = INT64_MIN;
	static volatile int64_t t34 = 498901825105409076LL;

    t34 = (((x157-x158)%x159)|x160);

    if (t34 != -31LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x161 = 3803254400989178LLU;
	volatile int32_t x162 = INT32_MIN;
	uint32_t x163 = 6U;
	uint64_t t35 = 1348883407376LLU;

    t35 = (((x161-x162)%x163)|x164);

    if (t35 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x165 = UINT16_MAX;
	int64_t x166 = INT64_MAX;
	static volatile int8_t x167 = -1;
	uint64_t x168 = 1115LLU;
	static volatile uint64_t t36 = 4144589332LLU;

    t36 = (((x165-x166)%x167)|x168);

    if (t36 != 1115LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x169 = -2;
	int8_t x170 = -1;
	int16_t x171 = INT16_MIN;
	int32_t x172 = -1;
	static volatile int32_t t37 = -1;

    t37 = (((x169-x170)%x171)|x172);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x173 = -991;
	uint64_t x174 = 1915529413343817372LLU;
	static int64_t x176 = INT64_MIN;
	uint64_t t38 = 34714339669680544LLU;

    t38 = (((x173-x174)%x175)|x176);

    if (t38 != 16531214660365733253LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MIN;
	static uint32_t x179 = UINT32_MAX;
	volatile uint64_t x180 = 20446371LLU;
	uint64_t t39 = 1102092170041438LLU;

    t39 = (((x177-x178)%x179)|x180);

    if (t39 != 20446371LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x181 = 41U;
	static uint8_t x182 = UINT8_MAX;
	int16_t x183 = 1;
	int32_t x184 = INT32_MIN;
	volatile int32_t t40 = INT32_MIN;

    t40 = (((x181-x182)%x183)|x184);

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MAX;

    t41 = (((x185-x186)%x187)|x188);

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x189 = INT8_MIN;
	int32_t x190 = INT32_MIN;
	int32_t x191 = -1;
	int8_t x192 = INT8_MIN;

    t42 = (((x189-x190)%x191)|x192);

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x193 = INT16_MIN;
	static int16_t x194 = INT16_MAX;
	volatile int32_t x195 = INT32_MIN;
	uint64_t x196 = UINT64_MAX;

    t43 = (((x193-x194)%x195)|x196);

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x197 = INT64_MAX;
	static volatile uint64_t x198 = 3LLU;
	int16_t x199 = -56;
	volatile uint8_t x200 = 6U;
	static volatile uint64_t t44 = 279191LLU;

    t44 = (((x197-x198)%x199)|x200);

    if (t44 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x202 = 640843;
	uint16_t x203 = 899U;
	uint16_t x204 = 124U;
	uint64_t t45 = 23378004924LLU;

    t45 = (((x201-x202)%x203)|x204);

    if (t45 != 510LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x205 = UINT32_MAX;
	int32_t x206 = INT32_MIN;
	int16_t x207 = 1893;
	volatile int8_t x208 = -1;
	volatile uint32_t t46 = UINT32_MAX;

    t46 = (((x205-x206)%x207)|x208);

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x209 = -1;
	static volatile int64_t x212 = 981698LL;
	static volatile int64_t t47 = -24805LL;

    t47 = (((x209-x210)%x211)|x212);

    if (t47 != 981698LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x213 = INT8_MAX;
	volatile uint64_t x214 = UINT64_MAX;
	volatile int64_t x215 = 5512LL;
	int64_t x216 = INT64_MIN;
	uint64_t t48 = 860171405409629LLU;

    t48 = (((x213-x214)%x215)|x216);

    if (t48 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x217 = INT32_MIN;
	static int64_t x218 = 1063LL;
	uint8_t x219 = UINT8_MAX;

    t49 = (((x217-x218)%x219)|x220);

    if (t49 != -169LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x221 = -1;
	int8_t x222 = 3;
	static int16_t x223 = INT16_MIN;
	int64_t x224 = -26475291LL;
	int64_t t50 = -13092772518LL;

    t50 = (((x221-x222)%x223)|x224);

    if (t50 != -3LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x225 = 81319U;
	uint32_t x226 = 1295U;
	int8_t x227 = INT8_MAX;
	int16_t x228 = INT16_MIN;
	uint32_t t51 = 199820657U;

    t51 = (((x225-x226)%x227)|x228);

    if (t51 != 4294934542U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x229 = 3U;
	int32_t x230 = -613334105;
	int64_t x232 = 5LL;
	static int64_t t52 = 4524216125254292970LL;

    t52 = (((x229-x230)%x231)|x232);

    if (t52 != 613334109LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x233 = INT64_MIN;
	static int16_t x234 = -1;
	uint64_t t53 = 253632660053461891LLU;

    t53 = (((x233-x234)%x235)|x236);

    if (t53 != 42335600639LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MAX;
	int64_t x240 = INT64_MAX;

    t54 = (((x237-x238)%x239)|x240);

    if (t54 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x241 = 0;
	int8_t x243 = -1;
	volatile int64_t x244 = -1LL;
	static volatile int64_t t55 = -3LL;

    t55 = (((x241-x242)%x243)|x244);

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x245 = -1LL;
	int32_t x246 = INT32_MIN;
	int64_t x247 = INT64_MIN;
	volatile int8_t x248 = INT8_MAX;
	int64_t t56 = 9748370597LL;

    t56 = (((x245-x246)%x247)|x248);

    if (t56 != 2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x250 = INT8_MAX;
	int32_t x251 = INT32_MAX;
	int64_t x252 = -31LL;
	volatile int64_t t57 = -3370753959405607605LL;

    t57 = (((x249-x250)%x251)|x252);

    if (t57 != -31LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x257 = INT32_MIN;
	int32_t x258 = -14335;
	int64_t x259 = -225LL;
	static int8_t x260 = -1;
	int64_t t58 = 787603LL;

    t58 = (((x257-x258)%x259)|x260);

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x261 = 26599476U;
	static int64_t x262 = INT64_MAX;
	uint32_t x263 = UINT32_MAX;
	int16_t x264 = INT16_MIN;
	int64_t t59 = -2048070374694LL;

    t59 = (((x261-x262)%x263)|x264);

    if (t59 != -8139LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x265 = 220906680U;
	volatile int64_t x266 = -1LL;
	int64_t x268 = -1LL;
	volatile int64_t t60 = -13768480349321334LL;

    t60 = (((x265-x266)%x267)|x268);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x270 = INT32_MIN;
	uint64_t x271 = 89366325437956567LLU;
	static volatile int64_t x272 = INT64_MIN;
	uint64_t t61 = 2120895564LLU;

    t61 = (((x269-x270)%x271)|x272);

    if (t61 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x273 = -1;
	static int8_t x274 = -1;
	int16_t x275 = INT16_MIN;
	int8_t x276 = -1;
	int32_t t62 = -459688;

    t62 = (((x273-x274)%x275)|x276);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x281 = -1;
	int16_t x283 = INT16_MAX;
	static uint8_t x284 = 13U;

    t63 = (((x281-x282)%x283)|x284);

    if (t63 != 29) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x286 = INT8_MAX;
	int64_t x287 = -1LL;
	int8_t x288 = INT8_MAX;
	int64_t t64 = 210963657713318LL;

    t64 = (((x285-x286)%x287)|x288);

    if (t64 != 127LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x290 = INT8_MAX;
	uint32_t x291 = UINT32_MAX;
	static volatile uint64_t t65 = 21470087LLU;

    t65 = (((x289-x290)%x291)|x292);

    if (t65 != 2147483527LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x293 = 494773U;
	int32_t x295 = INT32_MAX;
	volatile uint64_t t66 = 1629207LLU;

    t66 = (((x293-x294)%x295)|x296);

    if (t66 != 507326LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x301 = 3494U;
	uint64_t x302 = 218LLU;
	static int8_t x303 = -1;
	int8_t x304 = -1;
	uint64_t t67 = UINT64_MAX;

    t67 = (((x301-x302)%x303)|x304);

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x305 = 0U;
	int64_t x306 = -29LL;
	volatile int32_t x307 = INT32_MIN;
	static volatile int64_t t68 = 7LL;

    t68 = (((x305-x306)%x307)|x308);

    if (t68 != -64468971694494147LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x309 = 689776844U;
	static volatile int16_t x310 = -1;
	int32_t x311 = INT32_MIN;
	int16_t x312 = -1;
	static uint32_t t69 = UINT32_MAX;

    t69 = (((x309-x310)%x311)|x312);

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x313 = INT16_MIN;
	int64_t x314 = -1LL;
	uint64_t x315 = UINT64_MAX;
	int16_t x316 = INT16_MIN;
	static uint64_t t70 = 81615206LLU;

    t70 = (((x313-x314)%x315)|x316);

    if (t70 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x318 = 10677;
	int8_t x320 = INT8_MAX;
	volatile uint64_t t71 = 481352096605643LLU;

    t71 = (((x317-x318)%x319)|x320);

    if (t71 != 160319593685247LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x321 = UINT8_MAX;
	static int16_t x322 = 0;
	int32_t x323 = INT32_MIN;
	uint32_t x324 = 7U;
	uint32_t t72 = 12U;

    t72 = (((x321-x322)%x323)|x324);

    if (t72 != 255U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x329 = -1LL;
	int8_t x330 = INT8_MIN;
	static uint32_t x332 = 1354993U;
	volatile uint64_t t73 = 381615172465127LLU;

    t73 = (((x329-x330)%x331)|x332);

    if (t73 != 1355007LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x333 = INT32_MIN;
	static int32_t x334 = -376634;
	int8_t x335 = INT8_MIN;
	int32_t x336 = 382031;
	int32_t t74 = -199;

    t74 = (((x333-x334)%x335)|x336);

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x337 = 24U;
	uint64_t x338 = UINT64_MAX;
	int64_t x339 = INT64_MAX;
	int32_t x340 = -7801;
	uint64_t t75 = 6602249064109404LLU;

    t75 = (((x337-x338)%x339)|x340);

    if (t75 != 18446744073709543839LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x341 = -1;
	uint16_t x342 = UINT16_MAX;

    t76 = (((x341-x342)%x343)|x344);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x345 = 53U;
	volatile int16_t x347 = -3;
	static uint64_t x348 = 7583460997921493543LLU;

    t77 = (((x345-x346)%x347)|x348);

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x349 = 12043;
	uint64_t x350 = 1225892048562048952LLU;
	uint8_t x351 = UINT8_MAX;
	uint8_t x352 = UINT8_MAX;
	uint64_t t78 = 2009985403422LLU;

    t78 = (((x349-x350)%x351)|x352);

    if (t78 != 255LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x353 = -1;
	uint16_t x354 = 23U;
	static int32_t x355 = INT32_MIN;
	volatile int32_t x356 = INT32_MIN;
	static int32_t t79 = -14;

    t79 = (((x353-x354)%x355)|x356);

    if (t79 != -24) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x357 = UINT16_MAX;
	uint16_t x358 = 1408U;
	int64_t x359 = INT64_MAX;
	static int8_t x360 = INT8_MAX;
	int64_t t80 = 1LL;

    t80 = (((x357-x358)%x359)|x360);

    if (t80 != 64127LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x371 = UINT64_MAX;
	int64_t x372 = INT64_MIN;
	uint64_t t81 = 162LLU;

    t81 = (((x369-x370)%x371)|x372);

    if (t81 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x373 = -1;
	int16_t x374 = 0;
	static uint8_t x375 = 2U;
	int64_t x376 = -1LL;
	volatile int64_t t82 = 4660660LL;

    t82 = (((x373-x374)%x375)|x376);

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x381 = INT8_MIN;
	volatile int32_t x382 = -76246649;
	static int8_t x383 = INT8_MIN;
	volatile int64_t t83 = 4755191792LL;

    t83 = (((x381-x382)%x383)|x384);

    if (t83 != -9223372036854775687LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x390 = INT32_MIN;
	uint64_t x391 = 229768924680LLU;
	static uint32_t x392 = UINT32_MAX;
	static uint64_t t84 = 20LLU;

    t84 = (((x389-x390)%x391)|x392);

    if (t84 != 4294967295LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x394 = INT32_MIN;
	int32_t x395 = -1;
	int8_t x396 = -1;
	uint64_t t85 = UINT64_MAX;

    t85 = (((x393-x394)%x395)|x396);

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x397 = INT8_MIN;
	volatile int32_t x398 = INT32_MIN;
	volatile int16_t x399 = -1;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t86 = UINT32_MAX;

    t86 = (((x397-x398)%x399)|x400);

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x401 = INT32_MIN;
	int32_t x403 = -1;
	int32_t t87 = 60356;

    t87 = (((x401-x402)%x403)|x404);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x405 = -43LL;
	int16_t x406 = 28;
	static int8_t x407 = -1;
	uint16_t x408 = UINT16_MAX;
	int64_t t88 = 172686240549LL;

    t88 = (((x405-x406)%x407)|x408);

    if (t88 != 65535LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x409 = 28;
	uint32_t x410 = 52640U;
	int8_t x411 = -1;
	int32_t x412 = -201145804;

    t89 = (((x409-x410)%x411)|x412);

    if (t89 != 4294963836U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x413 = 1;
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = 7;
	static int16_t x416 = INT16_MAX;
	static uint32_t t90 = 96805U;

    t90 = (((x413-x414)%x415)|x416);

    if (t90 != 32767U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x417 = INT64_MIN;
	static int32_t x418 = -1;
	int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MIN;

    t91 = (((x417-x418)%x419)|x420);

    if (t91 != -2147483647LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x421 = 78;
	uint32_t x422 = 398U;
	int32_t x424 = INT32_MIN;
	uint32_t t92 = 84905U;

    t92 = (((x421-x422)%x423)|x424);

    if (t92 != 2147483650U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x425 = INT8_MAX;
	int32_t x426 = -1;
	int16_t x428 = INT16_MIN;
	volatile int32_t t93 = 360863;

    t93 = (((x425-x426)%x427)|x428);

    if (t93 != -32766) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x430 = INT32_MIN;
	volatile int32_t t94 = INT32_MAX;

    t94 = (((x429-x430)%x431)|x432);

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x433 = 378740;
	volatile int16_t x434 = INT16_MIN;
	int64_t x435 = -1429908453463437LL;
	static int64_t x436 = -1LL;
	volatile int64_t t95 = -43095LL;

    t95 = (((x433-x434)%x435)|x436);

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x437 = 3;
	uint64_t x438 = UINT64_MAX;
	uint64_t x439 = 980448142285537LLU;
	uint64_t t96 = 6094301455184362LLU;

    t96 = (((x437-x438)%x439)|x440);

    if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x442 = -1;
	uint64_t x443 = 6283352627719033LLU;
	static int32_t x444 = -73205;

    t97 = (((x441-x442)%x443)|x444);

    if (t97 != 18446744073709549387LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x453 = 7U;
	volatile uint16_t x454 = UINT16_MAX;
	int8_t x456 = INT8_MAX;
	volatile int64_t t98 = 34818629984LL;

    t98 = (((x453-x454)%x455)|x456);

    if (t98 != -65409LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x457 = 7245575757433LL;
	int16_t x458 = 1;
	static int32_t x459 = -55;
	uint64_t x460 = UINT64_MAX;

    t99 = (((x457-x458)%x459)|x460);

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x465 = -1LL;
	int32_t x467 = INT32_MAX;
	int16_t x468 = -1;
	int64_t t100 = -52LL;

    t100 = (((x465-x466)%x467)|x468);

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x469 = 10U;
	int64_t x470 = INT64_MAX;
	int8_t x471 = INT8_MIN;
	int64_t x472 = INT64_MIN;

    t101 = (((x469-x470)%x471)|x472);

    if (t101 != -117LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x473 = INT16_MAX;
	int64_t x474 = -1LL;
	int64_t x475 = INT64_MAX;
	int64_t x476 = INT64_MAX;
	volatile int64_t t102 = INT64_MAX;

    t102 = (((x473-x474)%x475)|x476);

    if (t102 != INT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x478 = -1;
	int16_t x479 = INT16_MAX;
	int16_t x480 = INT16_MAX;
	int32_t t103 = 4;

    t103 = (((x477-x478)%x479)|x480);

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x485 = UINT8_MAX;
	int8_t x486 = INT8_MAX;
	static int32_t t104 = 251796;

    t104 = (((x485-x486)%x487)|x488);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x489 = 999U;
	int16_t x490 = INT16_MIN;
	int16_t x491 = INT16_MIN;
	int8_t x492 = INT8_MIN;
	volatile uint32_t t105 = 464330U;

    t105 = (((x489-x490)%x491)|x492);

    if (t105 != 4294967271U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x493 = -1;
	static int32_t x494 = INT32_MIN;
	int32_t x495 = INT32_MAX;
	uint32_t x496 = UINT32_MAX;
	volatile uint32_t t106 = UINT32_MAX;

    t106 = (((x493-x494)%x495)|x496);

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x497 = -1LL;
	int64_t x498 = -30043851095LL;
	int16_t x499 = -1;
	uint32_t x500 = 40U;
	volatile int64_t t107 = 351626442111481LL;

    t107 = (((x497-x498)%x499)|x500);

    if (t107 != 40LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x501 = UINT16_MAX;
	static uint64_t x502 = 6046297342618457LLU;
	int8_t x503 = -1;
	static uint8_t x504 = 4U;
	volatile uint64_t t108 = 204360669913LLU;

    t108 = (((x501-x502)%x503)|x504);

    if (t108 != 18440697776366998694LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x505 = 30U;
	int16_t x506 = INT16_MAX;
	uint32_t x507 = 31907U;
	static volatile uint32_t t109 = UINT32_MAX;

    t109 = (((x505-x506)%x507)|x508);

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x513 = 57538311U;
	static int64_t x514 = INT64_MAX;
	static uint64_t x515 = 466180LLU;
	uint64_t t110 = UINT64_MAX;

    t110 = (((x513-x514)%x515)|x516);

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x517 = -1;
	int64_t t111 = 1LL;

    t111 = (((x517-x518)%x519)|x520);

    if (t111 != -65450LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x521 = -1268;
	static volatile int16_t x522 = -1;
	int64_t x523 = 2911LL;
	uint16_t x524 = UINT16_MAX;
	int64_t t112 = -877464702291030LL;

    t112 = (((x521-x522)%x523)|x524);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x525 = 45LL;
	int64_t x527 = INT64_MIN;
	uint64_t x528 = 497441LLU;
	volatile uint64_t t113 = 129794579886040LLU;

    t113 = (((x525-x526)%x527)|x528);

    if (t113 != 497597LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x530 = UINT32_MAX;
	uint8_t x531 = UINT8_MAX;
	int8_t x532 = 3;
	volatile uint32_t t114 = 44098U;

    t114 = (((x529-x530)%x531)|x532);

    if (t114 != 131U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x537 = 0;
	volatile int16_t x539 = -1;
	volatile int64_t t115 = INT64_MAX;

    t115 = (((x537-x538)%x539)|x540);

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x541 = UINT32_MAX;
	int32_t x542 = 187055161;
	static volatile int16_t x543 = -1;
	uint32_t t116 = 45083175U;

    t116 = (((x541-x542)%x543)|x544);

    if (t116 != 4294967271U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x545 = 13386U;
	int64_t x546 = 96966628749LL;
	static int8_t x547 = -1;
	int64_t x548 = INT64_MIN;

    t117 = (((x545-x546)%x547)|x548);

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x549 = INT64_MIN;
	static volatile int8_t x550 = INT8_MIN;
	int64_t x551 = INT64_MIN;
	volatile int64_t x552 = -1LL;
	volatile int64_t t118 = 67421LL;

    t118 = (((x549-x550)%x551)|x552);

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x553 = -23114;
	int32_t t119 = 1937664;

    t119 = (((x553-x554)%x555)|x556);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x557 = UINT32_MAX;
	static int8_t x558 = 8;
	int16_t x559 = INT16_MAX;
	volatile int8_t x560 = -6;

    t120 = (((x557-x558)%x559)|x560);

    if (t120 != 4294967290U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x562 = INT32_MAX;
	volatile int64_t x563 = INT64_MAX;
	int16_t x564 = INT16_MIN;
	volatile int64_t t121 = -404588LL;

    t121 = (((x561-x562)%x563)|x564);

    if (t121 != -32768LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x569 = 204960;
	static volatile int64_t x570 = -2625545148967LL;
	uint8_t x572 = 57U;
	volatile int64_t t122 = -3LL;

    t122 = (((x569-x570)%x571)|x572);

    if (t122 != 1320336699LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x573 = UINT64_MAX;
	static int16_t x574 = INT16_MAX;
	static volatile uint16_t x575 = 12U;
	uint64_t t123 = 22166548277199LLU;

    t123 = (((x573-x574)%x575)|x576);

    if (t123 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x577 = 1007713310262436LL;
	int16_t x578 = -1;
	static int32_t x579 = INT32_MIN;
	uint32_t x580 = 39340U;
	volatile int64_t t124 = -28133LL;

    t124 = (((x577-x578)%x579)|x580);

    if (t124 != 165993901LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x581 = INT32_MIN;
	int32_t x582 = -1;
	volatile uint64_t x583 = 18069019LLU;

    t125 = (((x581-x582)%x583)|x584);

    if (t125 != 2895976LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x589 = 1U;
	uint64_t x590 = 26581311LLU;
	static volatile uint16_t x591 = 28014U;
	volatile int32_t x592 = INT32_MIN;
	uint64_t t126 = 83639717991LLU;

    t126 = (((x589-x590)%x591)|x592);

    if (t126 != 18446744071562072548LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x593 = UINT8_MAX;
	static int16_t x594 = 0;
	volatile int64_t x595 = -42683914LL;
	int8_t x596 = -6;
	volatile int64_t t127 = 34168155LL;

    t127 = (((x593-x594)%x595)|x596);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x597 = INT8_MIN;
	int16_t x598 = INT16_MIN;
	volatile int16_t x599 = INT16_MIN;
	static volatile int16_t x600 = -8751;

    t128 = (((x597-x598)%x599)|x600);

    if (t128 != -47) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x605 = INT32_MIN;
	volatile uint32_t x608 = 1868274293U;
	int64_t t129 = -12106313444398929LL;

    t129 = (((x605-x606)%x607)|x608);

    if (t129 != -11LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x611 = 38U;
	uint8_t x612 = 9U;
	static volatile int32_t t130 = -18240;

    t130 = (((x609-x610)%x611)|x612);

    if (t130 != -7) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x617 = 117LLU;
	volatile uint32_t x618 = 1U;
	int32_t x619 = -1;
	int64_t x620 = INT64_MIN;
	volatile uint64_t t131 = 186756888627LLU;

    t131 = (((x617-x618)%x619)|x620);

    if (t131 != 9223372036854775924LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x621 = INT8_MIN;
	int16_t x622 = -211;
	volatile int32_t x624 = INT32_MAX;
	volatile int32_t t132 = INT32_MAX;

    t132 = (((x621-x622)%x623)|x624);

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x625 = 0U;
	uint64_t x626 = UINT64_MAX;
	uint32_t x628 = 1420445U;

    t133 = (((x625-x626)%x627)|x628);

    if (t133 != 1420445LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x633 = 22U;
	int8_t x634 = 47;
	int32_t x635 = INT32_MIN;
	uint32_t x636 = 759630U;
	volatile uint32_t t134 = 155U;

    t134 = (((x633-x634)%x635)|x636);

    if (t134 != 4294967279U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x637 = UINT16_MAX;
	int16_t x638 = -2;
	int32_t x639 = -1;
	volatile uint64_t t135 = 3016209LLU;

    t135 = (((x637-x638)%x639)|x640);

    if (t135 != 2337LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x646 = UINT64_MAX;
	int16_t x647 = -28;
	volatile int16_t x648 = INT16_MAX;
	uint64_t t136 = 406989LLU;

    t136 = (((x645-x646)%x647)|x648);

    if (t136 != 32767LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x653 = -6LL;
	static int16_t x655 = -1;
	uint32_t x656 = UINT32_MAX;
	volatile int64_t t137 = -141216103778371083LL;

    t137 = (((x653-x654)%x655)|x656);

    if (t137 != 4294967295LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x657 = UINT64_MAX;
	uint8_t x658 = UINT8_MAX;
	uint16_t x659 = 687U;
	volatile uint16_t x660 = 34U;

    t138 = (((x657-x658)%x659)|x660);

    if (t138 != 246LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x661 = -7LL;
	int32_t x662 = INT32_MIN;
	volatile int16_t x663 = INT16_MAX;
	int64_t x664 = INT64_MAX;
	static int64_t t139 = INT64_MAX;

    t139 = (((x661-x662)%x663)|x664);

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x666 = UINT16_MAX;
	int8_t x668 = INT8_MAX;
	volatile int32_t t140 = -36888;

    t140 = (((x665-x666)%x667)|x668);

    if (t140 != -42881) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x669 = -9;
	int16_t x670 = INT16_MAX;
	static int32_t t141 = 23998537;

    t141 = (((x669-x670)%x671)|x672);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x673 = -1;
	uint16_t x674 = UINT16_MAX;
	int16_t x675 = INT16_MAX;
	uint64_t x676 = UINT64_MAX;
	static uint64_t t142 = UINT64_MAX;

    t142 = (((x673-x674)%x675)|x676);

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x681 = -1LL;
	static int16_t x683 = INT16_MIN;
	static volatile int16_t x684 = INT16_MIN;

    t143 = (((x681-x682)%x683)|x684);

    if (t143 != -32768LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x685 = 107U;
	int16_t x686 = INT16_MAX;
	static uint32_t x688 = 1U;

    t144 = (((x685-x686)%x687)|x688);

    if (t144 != 4294934637U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x694 = -251712LL;
	int16_t x695 = INT16_MAX;
	volatile int32_t x696 = -1;
	volatile int64_t t145 = -21200277426LL;

    t145 = (((x693-x694)%x695)|x696);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x697 = 0LL;
	static int32_t x698 = -1;
	int64_t x700 = 66565412LL;
	volatile int64_t t146 = 4940512LL;

    t146 = (((x697-x698)%x699)|x700);

    if (t146 != 66565413LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x702 = INT8_MAX;
	int16_t x703 = INT16_MIN;
	static int8_t x704 = 2;
	volatile int64_t t147 = 64LL;

    t147 = (((x701-x702)%x703)|x704);

    if (t147 != -126LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x705 = INT64_MAX;
	volatile int32_t x706 = 9094179;
	static int32_t x707 = INT32_MIN;
	int8_t x708 = INT8_MIN;

    t148 = (((x705-x706)%x707)|x708);

    if (t148 != -36LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x709 = INT64_MAX;
	uint8_t x710 = UINT8_MAX;
	int16_t x712 = -1;
	volatile uint64_t t149 = UINT64_MAX;

    t149 = (((x709-x710)%x711)|x712);

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x713 = INT64_MIN;
	int32_t x714 = INT32_MIN;
	int64_t x715 = INT64_MIN;
	volatile int64_t t150 = -35388921865578147LL;

    t150 = (((x713-x714)%x715)|x716);

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x718 = INT8_MAX;
	static uint64_t x719 = 82244187LLU;
	volatile uint64_t t151 = 439341277LLU;

    t151 = (((x717-x718)%x719)|x720);

    if (t151 != 18446744071564180028LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x721 = -6;
	volatile uint32_t x722 = 596647829U;
	int8_t x723 = 1;
	static int16_t x724 = -1;
	static volatile uint32_t t152 = UINT32_MAX;

    t152 = (((x721-x722)%x723)|x724);

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x729 = INT32_MIN;
	int32_t x730 = INT32_MIN;
	uint16_t x731 = 1556U;
	int16_t x732 = -1;
	int32_t t153 = 82;

    t153 = (((x729-x730)%x731)|x732);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x733 = 54U;
	volatile int8_t x734 = -1;
	int32_t x735 = INT32_MIN;
	int8_t x736 = 57;

    t154 = (((x733-x734)%x735)|x736);

    if (t154 != 63) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x737 = UINT8_MAX;
	uint16_t x739 = UINT16_MAX;
	static uint64_t t155 = 6155915350LLU;

    t155 = (((x737-x738)%x739)|x740);

    if (t155 != 18446744073709519092LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x741 = -316976;
	volatile int64_t x742 = INT64_MIN;
	static volatile int64_t x743 = -8712LL;
	uint16_t x744 = UINT16_MAX;

    t156 = (((x741-x742)%x743)|x744);

    if (t156 != 65535LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x745 = UINT64_MAX;
	int64_t x747 = -1LL;
	int8_t x748 = 1;
	uint64_t t157 = 22665908LLU;

    t157 = (((x745-x746)%x747)|x748);

    if (t157 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x749 = -1;
	volatile uint8_t x750 = 3U;
	int16_t x752 = -10;
	volatile int32_t t158 = 7317;

    t158 = (((x749-x750)%x751)|x752);

    if (t158 != -2) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x753 = -1;
	uint32_t x754 = UINT32_MAX;
	int16_t x755 = INT16_MAX;
	volatile uint32_t t159 = 55U;

    t159 = (((x753-x754)%x755)|x756);

    if (t159 != 4294967168U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x762 = 32;
	int64_t x764 = INT64_MAX;

    t160 = (((x761-x762)%x763)|x764);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x765 = INT8_MIN;
	volatile int8_t x766 = -7;
	uint8_t x767 = UINT8_MAX;
	static uint32_t x768 = 233U;
	volatile uint32_t t161 = 121U;

    t161 = (((x765-x766)%x767)|x768);

    if (t161 != 4294967279U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x778 = INT16_MIN;
	int32_t x779 = -19827;

    t162 = (((x777-x778)%x779)|x780);

    if (t162 != -4131) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x785 = INT8_MIN;
	int16_t x786 = INT16_MIN;
	int16_t x787 = INT16_MIN;
	volatile uint32_t x788 = 131056U;

    t163 = (((x785-x786)%x787)|x788);

    if (t163 != 131056U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x793 = -1;
	int32_t x794 = 1;
	uint8_t x795 = 3U;
	int64_t x796 = -29909392LL;
	static int64_t t164 = 780738127005LL;

    t164 = (((x793-x794)%x795)|x796);

    if (t164 != -2LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x797 = INT8_MAX;
	static int8_t x798 = INT8_MIN;
	static int64_t t165 = INT64_MAX;

    t165 = (((x797-x798)%x799)|x800);

    if (t165 != INT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x801 = 34;
	int8_t x802 = INT8_MIN;
	int16_t x803 = 6;
	volatile uint16_t x804 = UINT16_MAX;
	static int32_t t166 = -3094;

    t166 = (((x801-x802)%x803)|x804);

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x805 = 679U;
	int64_t x806 = INT64_MAX;
	static uint8_t x807 = 6U;
	static int64_t t167 = 401LL;

    t167 = (((x805-x806)%x807)|x808);

    if (t167 != 2769225LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x809 = INT16_MAX;
	volatile int8_t x811 = -1;
	static uint8_t x812 = 14U;
	volatile int32_t t168 = -1;

    t168 = (((x809-x810)%x811)|x812);

    if (t168 != 14) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x813 = -8654;
	volatile int16_t x814 = INT16_MIN;
	static int32_t x815 = INT32_MAX;
	int16_t x816 = INT16_MIN;

    t169 = (((x813-x814)%x815)|x816);

    if (t169 != -8654) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x818 = 31U;
	uint64_t x819 = 1LLU;
	static uint64_t t170 = 223022LLU;

    t170 = (((x817-x818)%x819)|x820);

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x825 = UINT8_MAX;
	uint16_t x826 = 102U;
	volatile int64_t x827 = -1727370820602074LL;
	int32_t x828 = INT32_MAX;

    t171 = (((x825-x826)%x827)|x828);

    if (t171 != 2147483647LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x829 = INT32_MIN;
	uint8_t x830 = 0U;
	uint64_t t172 = 1168942LLU;

    t172 = (((x829-x830)%x831)|x832);

    if (t172 != 3205430794426251260LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x837 = INT16_MIN;
	int64_t x838 = 1042063641344LL;
	int32_t x839 = INT32_MIN;
	static volatile int64_t t173 = 192351515LL;

    t173 = (((x837-x838)%x839)|x840);

    if (t173 != -534104822LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x842 = -1;
	int32_t x844 = 21;
	volatile uint32_t t174 = 2065055U;

    t174 = (((x841-x842)%x843)|x844);

    if (t174 != 21U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x845 = -119238;
	uint8_t x846 = 0U;
	int8_t x848 = INT8_MIN;
	static int32_t t175 = 6;

    t175 = (((x845-x846)%x847)|x848);

    if (t175 != -70) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x849 = -1;
	static volatile int64_t x850 = -359LL;
	volatile int16_t x851 = -38;
	int64_t x852 = -1LL;
	static int64_t t176 = 769751LL;

    t176 = (((x849-x850)%x851)|x852);

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x853 = UINT64_MAX;
	uint32_t x854 = UINT32_MAX;
	static int32_t x855 = -3;
	uint16_t x856 = 13871U;

    t177 = (((x853-x854)%x855)|x856);

    if (t177 != 18446744069414598191LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x857 = INT8_MAX;
	uint32_t x858 = 10124723U;
	static uint32_t t178 = 59U;

    t178 = (((x857-x858)%x859)|x860);

    if (t178 != 4294934582U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x861 = 0U;
	int8_t x862 = INT8_MIN;
	int16_t x864 = INT16_MIN;
	uint32_t t179 = 0U;

    t179 = (((x861-x862)%x863)|x864);

    if (t179 != 4294934656U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x865 = -13;
	int8_t x866 = INT8_MAX;
	uint16_t x867 = 2143U;
	uint64_t x868 = 129944855767LLU;
	uint64_t t180 = 1100972091LLU;

    t180 = (((x865-x866)%x867)|x868);

    if (t180 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x869 = -1;
	int32_t x871 = -1;
	int64_t x872 = 19LL;

    t181 = (((x869-x870)%x871)|x872);

    if (t181 != 19LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x873 = INT16_MIN;
	int8_t x875 = -1;
	int32_t x876 = INT32_MAX;

    t182 = (((x873-x874)%x875)|x876);

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x879 = -1LL;
	volatile int32_t x880 = 3;
	int64_t t183 = 9580285861946LL;

    t183 = (((x877-x878)%x879)|x880);

    if (t183 != 3LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x885 = INT32_MIN;
	static volatile int8_t x886 = -1;
	int64_t x888 = -1LL;
	uint64_t t184 = UINT64_MAX;

    t184 = (((x885-x886)%x887)|x888);

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x889 = 31U;
	uint32_t x890 = 378334726U;
	volatile int64_t x891 = INT64_MAX;
	int8_t x892 = INT8_MIN;
	static int64_t t185 = 1LL;

    t185 = (((x889-x890)%x891)|x892);

    if (t185 != -103LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x893 = 25295637956584LLU;
	int32_t x894 = -1;
	static volatile uint32_t x895 = UINT32_MAX;
	uint64_t x896 = UINT64_MAX;
	volatile uint64_t t186 = UINT64_MAX;

    t186 = (((x893-x894)%x895)|x896);

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x897 = 234;
	volatile int8_t x898 = -1;
	uint16_t x899 = UINT16_MAX;
	static int16_t x900 = INT16_MIN;
	volatile int32_t t187 = -395488;

    t187 = (((x897-x898)%x899)|x900);

    if (t187 != -32533) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x901 = 27U;
	int16_t x902 = -1419;
	int16_t x903 = INT16_MIN;
	static int64_t x904 = -1LL;
	int64_t t188 = -842LL;

    t188 = (((x901-x902)%x903)|x904);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x905 = 67852786796LL;
	int8_t x906 = -1;
	volatile uint16_t x907 = 112U;
	uint32_t x908 = 3083U;
	int64_t t189 = 438014387LL;

    t189 = (((x905-x906)%x907)|x908);

    if (t189 != 3135LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x913 = UINT16_MAX;
	uint32_t x914 = 1683426947U;
	int16_t x915 = INT16_MIN;
	volatile uint32_t x916 = UINT32_MAX;
	uint32_t t190 = UINT32_MAX;

    t190 = (((x913-x914)%x915)|x916);

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x917 = -1;
	static volatile int32_t x918 = INT32_MIN;
	int64_t x919 = -1LL;
	static int8_t x920 = INT8_MIN;

    t191 = (((x917-x918)%x919)|x920);

    if (t191 != -128LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x921 = UINT8_MAX;
	volatile int32_t x923 = INT32_MIN;
	static int32_t t192 = -234190;

    t192 = (((x921-x922)%x923)|x924);

    if (t192 != 257) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x925 = INT32_MIN;
	static int64_t x926 = -1LL;
	uint16_t x927 = 2147U;
	int64_t x928 = INT64_MIN;
	int64_t t193 = -155785403LL;

    t193 = (((x925-x926)%x927)|x928);

    if (t193 != -572LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x929 = -1;
	uint64_t x930 = UINT64_MAX;
	uint16_t x931 = 109U;
	volatile int8_t x932 = INT8_MIN;
	volatile uint64_t t194 = 386282739623851LLU;

    t194 = (((x929-x930)%x931)|x932);

    if (t194 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x933 = INT32_MIN;
	int64_t x934 = INT64_MIN;
	static volatile uint64_t x935 = 2742460LLU;
	int32_t x936 = INT32_MAX;
	volatile uint64_t t195 = 8194694084780LLU;

    t195 = (((x933-x934)%x935)|x936);

    if (t195 != 2147483647LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x939 = UINT16_MAX;
	static volatile uint32_t t196 = 3051922U;

    t196 = (((x937-x938)%x939)|x940);

    if (t196 != 4294967285U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x941 = INT16_MIN;
	int16_t x942 = 0;
	int8_t x943 = -26;
	static volatile int32_t t197 = -291;

    t197 = (((x941-x942)%x943)|x944);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x945 = 0U;
	uint8_t x947 = UINT8_MAX;
	volatile int8_t x948 = INT8_MIN;

    t198 = (((x945-x946)%x947)|x948);

    if (t198 != 4294967168U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x949 = INT32_MIN;
	int32_t x950 = INT32_MIN;
	uint16_t x951 = UINT16_MAX;
	int64_t x952 = -113638656780886542LL;

    t199 = (((x949-x950)%x951)|x952);

    if (t199 != -113638656780886542LL) { NG(); } else { ; }
	
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

