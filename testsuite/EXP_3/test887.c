
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

uint8_t x2 = 0U;
volatile int8_t x3 = INT8_MIN;
static int64_t x15 = INT64_MIN;
static volatile int64_t t2 = 70481211920889LL;
volatile int16_t x22 = 15200;
uint8_t x24 = UINT8_MAX;
int64_t x29 = 249861461042LL;
int8_t x32 = INT8_MAX;
static int64_t x33 = -300560LL;
static volatile int32_t t7 = -1051841840;
volatile int64_t x46 = INT64_MAX;
volatile uint8_t x61 = UINT8_MAX;
uint8_t x64 = 70U;
int8_t x71 = -1;
uint32_t t13 = 620815U;
int32_t x80 = 7;
int16_t x81 = INT16_MIN;
int32_t x83 = INT32_MIN;
static int32_t x85 = INT32_MAX;
uint64_t x86 = 193LLU;
int64_t x87 = 684837331487LL;
volatile int64_t t16 = -1493648908993065823LL;
int64_t x90 = 2069448240LL;
volatile int16_t x100 = INT16_MIN;
uint32_t t19 = 1616U;
volatile int8_t x108 = 17;
static int32_t t20 = 103;
int16_t x109 = -1;
volatile int8_t x110 = INT8_MIN;
volatile uint32_t t21 = 1840U;
int64_t x113 = INT64_MAX;
static int16_t x116 = INT16_MIN;
int8_t x119 = -1;
int64_t t23 = -35916800210LL;
uint8_t x121 = 19U;
uint32_t x133 = 12054213U;
volatile int16_t x146 = -1;
uint64_t t32 = 753562066657309998LLU;
static int16_t x177 = INT16_MIN;
volatile int32_t t34 = -119127;
uint16_t x183 = 4U;
int64_t x190 = -1LL;
int8_t x191 = INT8_MIN;
volatile int64_t x194 = INT64_MIN;
uint32_t x195 = UINT32_MAX;
static int32_t x196 = INT32_MIN;
uint32_t x197 = UINT32_MAX;
volatile int8_t x201 = 2;
int64_t x204 = 997LL;
int64_t x218 = -123169337LL;
static int64_t x225 = 10567150085LL;
uint16_t x228 = UINT16_MAX;
volatile int32_t x231 = INT32_MAX;
uint32_t x243 = 13373U;
volatile uint32_t t46 = 37634U;
int32_t x247 = -1;
int8_t x253 = INT8_MAX;
int8_t x255 = INT8_MIN;
static int64_t t49 = 47772443940738LL;
static volatile int64_t x258 = INT64_MAX;
uint64_t t50 = 515442709872441095LLU;
static volatile uint16_t x267 = 460U;
int64_t x279 = -1LL;
int64_t x283 = INT64_MAX;
uint8_t x285 = UINT8_MAX;
int32_t x291 = 442220;
uint32_t x293 = UINT32_MAX;
uint64_t x299 = 12LLU;
int32_t t60 = 1;
volatile uint16_t x316 = 13980U;
uint8_t x327 = UINT8_MAX;
uint8_t x329 = 52U;
static uint64_t x331 = 532154951547756LLU;
int8_t x332 = INT8_MAX;
static uint64_t t65 = 6756362LLU;
static int32_t x348 = INT32_MIN;
uint8_t x353 = UINT8_MAX;
uint8_t x368 = UINT8_MAX;
uint16_t x375 = UINT16_MAX;
int32_t x376 = -14627;
uint64_t t75 = 17753858LLU;
int64_t x391 = -52784204602702LL;
int16_t x392 = -45;
int32_t x395 = 3042;
uint8_t x400 = 38U;
uint64_t x409 = 862882LLU;
volatile int64_t x421 = INT64_MAX;
static int64_t x424 = -93LL;
volatile int32_t t84 = 3;
uint32_t x430 = 5U;
uint64_t x438 = UINT64_MAX;
int8_t x450 = INT8_MIN;
int8_t x453 = INT8_MIN;
static uint64_t t91 = 492559433902LLU;
volatile int8_t x461 = INT8_MIN;
int16_t x465 = INT16_MIN;
static volatile uint8_t x477 = 6U;
volatile uint8_t x478 = 13U;
volatile int32_t x479 = -285;
int16_t x480 = INT16_MAX;
int32_t t95 = -622;
static uint8_t x484 = 92U;
volatile uint64_t x487 = UINT64_MAX;
int32_t x488 = 4165;
volatile uint64_t t97 = 5720360317713LLU;
static int32_t x492 = INT32_MAX;
uint16_t x493 = UINT16_MAX;
volatile int32_t t99 = 17265630;
volatile uint64_t x501 = 64805260LLU;
int64_t x505 = INT64_MIN;
uint16_t x517 = 29U;
volatile int32_t t104 = 29581;
int64_t x523 = -1LL;
volatile int64_t x531 = INT64_MAX;
int32_t x536 = 1984725;
int32_t t108 = 136;
static int64_t x540 = -1LL;
int8_t x545 = 11;
uint16_t x556 = UINT16_MAX;
int64_t t114 = -3LL;
int32_t t118 = -4239;
static uint16_t x588 = 20678U;
volatile int32_t t119 = 1;
uint64_t x596 = 106LLU;
int8_t x603 = 1;
int16_t x604 = INT16_MIN;
int64_t t123 = 68017828101LL;
int32_t x623 = INT32_MIN;
int8_t x624 = INT8_MAX;
static uint8_t x625 = 3U;
static int64_t t126 = -20LL;
int16_t x639 = 2;
int16_t x643 = -1;
static volatile int8_t x644 = INT8_MIN;
uint16_t x646 = 1010U;
int64_t x648 = INT64_MIN;
int32_t x657 = INT32_MIN;
int8_t x666 = INT8_MAX;
static int32_t x677 = INT32_MIN;
static int16_t x679 = INT16_MIN;
int64_t t136 = 278640028LL;
int64_t x696 = 1499942969LL;
volatile int16_t x697 = 3789;
volatile uint64_t t138 = 52LLU;
uint32_t x702 = 2279U;
volatile uint16_t x729 = 0U;
uint16_t x757 = UINT16_MAX;
int8_t x758 = -30;
int32_t x779 = -1;
uint16_t x781 = 429U;
int64_t x791 = -39619050218LL;
int32_t x797 = 270370;
uint32_t x798 = 182309930U;
int32_t x805 = 565945563;
volatile uint32_t x807 = 28U;
uint32_t t156 = 52U;
int16_t x815 = 247;
uint32_t t157 = 1722203425U;
int32_t x821 = 13511789;
int64_t x823 = -44748074LL;
int8_t x832 = 50;
int64_t x833 = 3753758749LL;
int16_t x835 = -1;
static uint64_t x837 = 54292455LLU;
volatile uint8_t x838 = UINT8_MAX;
volatile uint16_t x865 = UINT16_MAX;
uint32_t x871 = 51U;
uint16_t x874 = UINT16_MAX;
int16_t x909 = INT16_MAX;
int32_t x913 = 3;
int32_t x914 = -204664779;
int8_t x922 = -10;
static int32_t x934 = -1;
volatile int16_t x938 = INT16_MIN;
int8_t x958 = INT8_MAX;
static int64_t x959 = 7292659069LL;
static volatile int64_t x965 = -53LL;
uint16_t x969 = UINT16_MAX;
volatile uint8_t x972 = 11U;
volatile int32_t t187 = 16706;
uint8_t x989 = UINT8_MAX;
uint32_t x990 = 420U;
static volatile int64_t x991 = INT64_MIN;
volatile int64_t t190 = -4102540LL;
int64_t x1002 = -1LL;
static int16_t x1005 = INT16_MAX;
uint64_t x1006 = UINT64_MAX;
int32_t x1017 = 1;
uint16_t x1020 = 7764U;
uint32_t x1024 = UINT32_MAX;
int64_t x1026 = INT64_MAX;
int64_t x1027 = -1LL;
static int32_t x1029 = -54;
int8_t x1032 = INT8_MIN;
volatile int32_t t199 = -1;


void f0(void) {
    	uint32_t x1 = 507142U;
	int64_t x4 = INT64_MIN;
	int64_t t0 = -51LL;

    t0 = ((x1==x2)%(x3%x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x13 = INT8_MIN;
	uint32_t x14 = 11495597U;
	static uint8_t x16 = 5U;
	volatile int64_t t1 = 3023646161232656LL;

    t1 = ((x13==x14)%(x15%x16));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x17 = 6045132169821LL;
	int8_t x18 = INT8_MAX;
	int64_t x19 = 60854502894151LL;
	volatile int8_t x20 = INT8_MAX;

    t2 = ((x17==x18)%(x19%x20));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x21 = 470LLU;
	int16_t x23 = INT16_MIN;
	volatile int32_t t3 = -5464770;

    t3 = ((x21==x22)%(x23%x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = INT32_MIN;
	int16_t x26 = -1;
	uint8_t x27 = UINT8_MAX;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t4 = 2;

    t4 = ((x25==x26)%(x27%x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x30 = 344614U;
	int8_t x31 = -37;
	volatile int32_t t5 = 5;

    t5 = ((x29==x30)%(x31%x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x34 = -1;
	static int32_t x35 = -101;
	volatile int64_t x36 = INT64_MIN;
	volatile int64_t t6 = 57663LL;

    t6 = ((x33==x34)%(x35%x36));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	int16_t x43 = INT16_MIN;
	int16_t x44 = 7;

    t7 = ((x41==x42)%(x43%x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x45 = 1;
	int32_t x47 = INT32_MIN;
	int32_t x48 = -26526;
	int32_t t8 = -70126;

    t8 = ((x45==x46)%(x47%x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x53 = -1;
	uint64_t x54 = UINT64_MAX;
	uint16_t x55 = UINT16_MAX;
	volatile int64_t x56 = INT64_MIN;
	volatile int64_t t9 = 425343LL;

    t9 = ((x53==x54)%(x55%x56));

    if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x57 = 61227U;
	int8_t x58 = -19;
	volatile int8_t x59 = INT8_MIN;
	static int64_t x60 = INT64_MIN;
	volatile int64_t t10 = -359598134336767LL;

    t10 = ((x57==x58)%(x59%x60));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x62 = INT8_MIN;
	int64_t x63 = INT64_MAX;
	static int64_t t11 = 781141LL;

    t11 = ((x61==x62)%(x63%x64));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x65 = 5U;
	static uint32_t x66 = 93U;
	uint16_t x67 = 6150U;
	static int64_t x68 = -56269468302635LL;
	static int64_t t12 = 1LL;

    t12 = ((x65==x66)%(x67%x68));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x69 = 3050677734890889LL;
	volatile uint32_t x70 = 83963U;
	uint32_t x72 = 23U;

    t13 = ((x69==x70)%(x71%x72));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	int8_t x78 = -1;
	uint64_t x79 = UINT64_MAX;
	uint64_t t14 = 5LLU;

    t14 = ((x77==x78)%(x79%x80));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x82 = -1LL;
	int8_t x84 = 3;
	volatile int32_t t15 = -14738;

    t15 = ((x81==x82)%(x83%x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x88 = -2856438971409LL;

    t16 = ((x85==x86)%(x87%x88));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x89 = UINT32_MAX;
	int32_t x91 = -199400121;
	volatile uint32_t x92 = 11024929U;
	volatile uint32_t t17 = 50U;

    t17 = ((x89==x90)%(x91%x92));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x97 = -1;
	uint16_t x98 = UINT16_MAX;
	uint8_t x99 = UINT8_MAX;
	volatile int32_t t18 = -2012725;

    t18 = ((x97==x98)%(x99%x100));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x101 = -1;
	static volatile int16_t x102 = 101;
	uint32_t x103 = UINT32_MAX;
	int8_t x104 = INT8_MAX;

    t19 = ((x101==x102)%(x103%x104));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x105 = -19580281LL;
	int16_t x106 = INT16_MIN;
	volatile uint16_t x107 = 18U;

    t20 = ((x105==x106)%(x107%x108));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x111 = UINT32_MAX;
	static uint8_t x112 = 40U;

    t21 = ((x109==x110)%(x111%x112));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x114 = INT8_MIN;
	static int64_t x115 = -2869101429827LL;
	int64_t t22 = 39976LL;

    t22 = ((x113==x114)%(x115%x116));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x117 = INT64_MAX;
	int16_t x118 = 1;
	int64_t x120 = INT64_MIN;

    t23 = ((x117==x118)%(x119%x120));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x122 = 0U;
	uint16_t x123 = 65U;
	uint64_t x124 = 15827553158904891LLU;
	volatile uint64_t t24 = 1884654LLU;

    t24 = ((x121==x122)%(x123%x124));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x125 = -8885;
	static uint8_t x126 = 1U;
	uint32_t x127 = 1470U;
	uint16_t x128 = 958U;
	uint32_t t25 = 96894364U;

    t25 = ((x125==x126)%(x127%x128));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x129 = UINT64_MAX;
	int32_t x130 = INT32_MAX;
	int16_t x131 = INT16_MIN;
	static int64_t x132 = INT64_MIN;
	int64_t t26 = 1234674232LL;

    t26 = ((x129==x130)%(x131%x132));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x134 = 63U;
	int32_t x135 = INT32_MIN;
	static volatile int64_t x136 = INT64_MIN;
	volatile int64_t t27 = 95LL;

    t27 = ((x133==x134)%(x135%x136));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x137 = INT64_MIN;
	int64_t x138 = 4773LL;
	int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MIN;
	int64_t t28 = 8549817162LL;

    t28 = ((x137==x138)%(x139%x140));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x141 = INT32_MIN;
	static volatile uint64_t x142 = 854003308LLU;
	uint16_t x143 = 5U;
	static uint32_t x144 = UINT32_MAX;
	volatile uint32_t t29 = 5U;

    t29 = ((x141==x142)%(x143%x144));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x145 = -38170001674495312LL;
	int16_t x147 = INT16_MAX;
	static uint64_t x148 = UINT64_MAX;
	static volatile uint64_t t30 = 77784182903LLU;

    t30 = ((x145==x146)%(x147%x148));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x157 = INT32_MIN;
	volatile int64_t x158 = 393121762098857LL;
	uint8_t x159 = UINT8_MAX;
	int32_t x160 = INT32_MIN;
	int32_t t31 = 5560;

    t31 = ((x157==x158)%(x159%x160));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x165 = 406;
	volatile uint16_t x166 = 6083U;
	volatile uint8_t x167 = UINT8_MAX;
	volatile uint64_t x168 = 29LLU;

    t32 = ((x165==x166)%(x167%x168));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x169 = -149;
	uint64_t x170 = 34061148LLU;
	int16_t x171 = -1946;
	static volatile int32_t x172 = INT32_MAX;
	int32_t t33 = -386366;

    t33 = ((x169==x170)%(x171%x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x178 = -1LL;
	int32_t x179 = -7631;
	volatile uint16_t x180 = UINT16_MAX;

    t34 = ((x177==x178)%(x179%x180));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x181 = -1;
	int8_t x182 = INT8_MIN;
	volatile int8_t x184 = INT8_MIN;
	static volatile int32_t t35 = -35919;

    t35 = ((x181==x182)%(x183%x184));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x185 = -405753507LL;
	int8_t x186 = -31;
	int32_t x187 = -29669;
	int64_t x188 = INT64_MIN;
	int64_t t36 = -2610071LL;

    t36 = ((x185==x186)%(x187%x188));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x189 = INT8_MIN;
	static int64_t x192 = 236LL;
	int64_t t37 = -13369145LL;

    t37 = ((x189==x190)%(x191%x192));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x193 = 60U;
	volatile uint32_t t38 = 2U;

    t38 = ((x193==x194)%(x195%x196));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x198 = 0;
	static volatile int16_t x199 = -1;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t39 = -3;

    t39 = ((x197==x198)%(x199%x200));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x202 = 0;
	int32_t x203 = 10;
	volatile int64_t t40 = 23513885395988LL;

    t40 = ((x201==x202)%(x203%x204));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x205 = -175994942LL;
	int8_t x206 = INT8_MIN;
	static uint8_t x207 = 10U;
	static int8_t x208 = -3;
	int32_t t41 = 11322724;

    t41 = ((x205==x206)%(x207%x208));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x209 = INT64_MIN;
	int16_t x210 = -1;
	static uint16_t x211 = 461U;
	int16_t x212 = 5;
	volatile int32_t t42 = 1;

    t42 = ((x209==x210)%(x211%x212));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint8_t x217 = 6U;
	uint16_t x219 = UINT16_MAX;
	uint64_t x220 = 2LLU;
	static volatile uint64_t t43 = 27874758LLU;

    t43 = ((x217==x218)%(x219%x220));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x226 = INT16_MIN;
	static int32_t x227 = INT32_MIN;
	static volatile int32_t t44 = 23;

    t44 = ((x225==x226)%(x227%x228));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x229 = INT8_MAX;
	volatile uint8_t x230 = 7U;
	static volatile int64_t x232 = INT64_MIN;
	int64_t t45 = -1970316890LL;

    t45 = ((x229==x230)%(x231%x232));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x241 = UINT32_MAX;
	int8_t x242 = -1;
	volatile uint8_t x244 = 4U;

    t46 = ((x241==x242)%(x243%x244));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x245 = -1LL;
	volatile int8_t x246 = -1;
	volatile int16_t x248 = INT16_MAX;
	int32_t t47 = -9;

    t47 = ((x245==x246)%(x247%x248));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x249 = -1;
	static volatile int64_t x250 = INT64_MIN;
	int8_t x251 = 1;
	uint16_t x252 = UINT16_MAX;
	int32_t t48 = 21905301;

    t48 = ((x249==x250)%(x251%x252));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x254 = -372755769293LL;
	static int64_t x256 = INT64_MAX;

    t49 = ((x253==x254)%(x255%x256));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x257 = INT8_MAX;
	uint8_t x259 = 51U;
	static volatile uint64_t x260 = UINT64_MAX;

    t50 = ((x257==x258)%(x259%x260));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x261 = -450;
	volatile int16_t x262 = -5;
	static int8_t x263 = INT8_MIN;
	uint64_t x264 = 116031589LLU;
	volatile uint64_t t51 = 998LLU;

    t51 = ((x261==x262)%(x263%x264));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x265 = -1LL;
	static int16_t x266 = -1856;
	static uint64_t x268 = UINT64_MAX;
	volatile uint64_t t52 = 2236585LLU;

    t52 = ((x265==x266)%(x267%x268));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x277 = INT16_MAX;
	int64_t x278 = INT64_MIN;
	int32_t x280 = INT32_MAX;
	int64_t t53 = 1LL;

    t53 = ((x277==x278)%(x279%x280));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x281 = 9576852476285678LLU;
	volatile int8_t x282 = -1;
	uint16_t x284 = UINT16_MAX;
	volatile int64_t t54 = 7461303792LL;

    t54 = ((x281==x282)%(x283%x284));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x286 = -4225047181LL;
	int8_t x287 = -1;
	static int16_t x288 = 63;
	int32_t t55 = 309759;

    t55 = ((x285==x286)%(x287%x288));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x289 = 0;
	volatile int64_t x290 = 838476737876LL;
	int16_t x292 = 2260;
	volatile int32_t t56 = 15352837;

    t56 = ((x289==x290)%(x291%x292));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x294 = UINT16_MAX;
	uint8_t x295 = UINT8_MAX;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t57 = -332870906;

    t57 = ((x293==x294)%(x295%x296));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x297 = 4U;
	static int8_t x298 = 19;
	int16_t x300 = -241;
	volatile uint64_t t58 = 57740083LLU;

    t58 = ((x297==x298)%(x299%x300));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x301 = 4;
	int64_t x302 = INT64_MAX;
	static uint32_t x303 = 848U;
	volatile int32_t x304 = INT32_MIN;
	volatile uint32_t t59 = 1649019U;

    t59 = ((x301==x302)%(x303%x304));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x305 = INT16_MAX;
	int16_t x306 = INT16_MAX;
	uint8_t x307 = 6U;
	static int16_t x308 = INT16_MAX;

    t60 = ((x305==x306)%(x307%x308));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x313 = 790U;
	int32_t x314 = -1;
	volatile int64_t x315 = INT64_MAX;
	volatile int64_t t61 = 1418748725LL;

    t61 = ((x313==x314)%(x315%x316));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	uint64_t x319 = 65200649898LLU;
	uint64_t x320 = 48862661682686556LLU;
	static volatile uint64_t t62 = 13LLU;

    t62 = ((x317==x318)%(x319%x320));

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x321 = INT32_MIN;
	static uint8_t x322 = UINT8_MAX;
	static uint32_t x323 = UINT32_MAX;
	uint16_t x324 = 229U;
	uint32_t t63 = 268358U;

    t63 = ((x321==x322)%(x323%x324));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x325 = -3998412;
	volatile int8_t x326 = INT8_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t64 = 1654805;

    t64 = ((x325==x326)%(x327%x328));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x330 = INT64_MIN;

    t65 = ((x329==x330)%(x331%x332));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x333 = -185714717857894896LL;
	uint8_t x334 = UINT8_MAX;
	uint32_t x335 = UINT32_MAX;
	int8_t x336 = INT8_MIN;
	volatile uint32_t t66 = 55U;

    t66 = ((x333==x334)%(x335%x336));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x341 = 61302530013LL;
	static volatile int64_t x342 = INT64_MAX;
	int32_t x343 = 31;
	int8_t x344 = -8;
	int32_t t67 = 515445;

    t67 = ((x341==x342)%(x343%x344));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x345 = -1;
	volatile uint8_t x346 = 10U;
	int16_t x347 = INT16_MIN;
	int32_t t68 = 502;

    t68 = ((x345==x346)%(x347%x348));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x349 = 669447814U;
	uint32_t x350 = UINT32_MAX;
	static int8_t x351 = INT8_MAX;
	int16_t x352 = 3900;
	volatile int32_t t69 = 14304;

    t69 = ((x349==x350)%(x351%x352));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x354 = -1LL;
	static int8_t x355 = 6;
	int8_t x356 = INT8_MAX;
	int32_t t70 = 3071;

    t70 = ((x353==x354)%(x355%x356));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x361 = 29824LLU;
	static int32_t x362 = INT32_MAX;
	static int64_t x363 = 1107247LL;
	int32_t x364 = INT32_MIN;
	static volatile int64_t t71 = 0LL;

    t71 = ((x361==x362)%(x363%x364));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x365 = -4LL;
	int8_t x366 = INT8_MIN;
	int16_t x367 = -4661;
	volatile int32_t t72 = 10172642;

    t72 = ((x365==x366)%(x367%x368));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x369 = 111410U;
	int64_t x370 = INT64_MAX;
	int32_t x371 = -17;
	int32_t x372 = INT32_MIN;
	static volatile int32_t t73 = 247074;

    t73 = ((x369==x370)%(x371%x372));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x373 = -1LL;
	uint32_t x374 = 24455U;
	volatile int32_t t74 = 102;

    t74 = ((x373==x374)%(x375%x376));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x385 = -1;
	volatile int16_t x386 = -44;
	uint32_t x387 = 6599165U;
	uint64_t x388 = 8789019076966345138LLU;

    t75 = ((x385==x386)%(x387%x388));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x389 = -4189568963LL;
	uint64_t x390 = UINT64_MAX;
	int64_t t76 = -462165LL;

    t76 = ((x389==x390)%(x391%x392));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x393 = -5;
	int8_t x394 = 2;
	static int8_t x396 = INT8_MIN;
	int32_t t77 = 481746;

    t77 = ((x393==x394)%(x395%x396));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x397 = -1;
	volatile int8_t x398 = -1;
	int16_t x399 = INT16_MIN;
	int32_t t78 = -2576539;

    t78 = ((x397==x398)%(x399%x400));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x401 = -26;
	int8_t x402 = 4;
	int8_t x403 = -1;
	int8_t x404 = INT8_MIN;
	int32_t t79 = 238848062;

    t79 = ((x401==x402)%(x403%x404));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x405 = UINT64_MAX;
	int64_t x406 = 770LL;
	static volatile int32_t x407 = -40884957;
	int16_t x408 = INT16_MIN;
	int32_t t80 = 374;

    t80 = ((x405==x406)%(x407%x408));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x410 = -1;
	static volatile uint8_t x411 = 15U;
	uint64_t x412 = 2019822676879LLU;
	volatile uint64_t t81 = 3956LLU;

    t81 = ((x409==x410)%(x411%x412));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x413 = INT32_MAX;
	static volatile int64_t x414 = -1LL;
	static int64_t x415 = INT64_MIN;
	uint32_t x416 = 1860U;
	static volatile int64_t t82 = 201LL;

    t82 = ((x413==x414)%(x415%x416));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x422 = 19907424676967034LLU;
	int16_t x423 = INT16_MIN;
	volatile int64_t t83 = 13513LL;

    t83 = ((x421==x422)%(x423%x424));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x425 = -4208;
	static volatile int8_t x426 = INT8_MIN;
	int32_t x427 = -1;
	int32_t x428 = 90635;

    t84 = ((x425==x426)%(x427%x428));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x429 = INT16_MAX;
	uint16_t x431 = 705U;
	uint16_t x432 = 2U;
	volatile int32_t t85 = 712;

    t85 = ((x429==x430)%(x431%x432));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x433 = 494214U;
	uint8_t x434 = 3U;
	int32_t x435 = 38074613;
	static uint8_t x436 = 117U;
	static int32_t t86 = 0;

    t86 = ((x433==x434)%(x435%x436));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x437 = INT16_MIN;
	int32_t x439 = INT32_MIN;
	int16_t x440 = -12;
	volatile int32_t t87 = 2638;

    t87 = ((x437==x438)%(x439%x440));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x441 = INT32_MIN;
	uint64_t x442 = 17LLU;
	int64_t x443 = -420614392200LL;
	volatile uint16_t x444 = 105U;
	volatile int64_t t88 = 482LL;

    t88 = ((x441==x442)%(x443%x444));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x449 = UINT16_MAX;
	static volatile uint32_t x451 = UINT32_MAX;
	static int32_t x452 = INT32_MIN;
	static uint32_t t89 = 2U;

    t89 = ((x449==x450)%(x451%x452));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x454 = 995089301U;
	static volatile uint8_t x455 = UINT8_MAX;
	uint16_t x456 = UINT16_MAX;
	int32_t t90 = 197900;

    t90 = ((x453==x454)%(x455%x456));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x457 = INT16_MIN;
	uint64_t x458 = 55LLU;
	static int32_t x459 = INT32_MIN;
	uint64_t x460 = 137366067215LLU;

    t91 = ((x457==x458)%(x459%x460));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x462 = 2U;
	int32_t x463 = -197;
	int32_t x464 = -74678832;
	volatile int32_t t92 = -344646;

    t92 = ((x461==x462)%(x463%x464));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x466 = INT64_MAX;
	static int8_t x467 = INT8_MAX;
	int8_t x468 = INT8_MIN;
	int32_t t93 = 8655;

    t93 = ((x465==x466)%(x467%x468));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x473 = INT32_MIN;
	static volatile uint64_t x474 = UINT64_MAX;
	static int8_t x475 = INT8_MIN;
	static int16_t x476 = INT16_MIN;
	int32_t t94 = 42;

    t94 = ((x473==x474)%(x475%x476));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    

    t95 = ((x477==x478)%(x479%x480));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x481 = INT32_MAX;
	uint16_t x482 = 63U;
	int32_t x483 = -351564;
	static int32_t t96 = 15088;

    t96 = ((x481==x482)%(x483%x484));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x485 = 274783549387LLU;
	uint32_t x486 = 117794U;

    t97 = ((x485==x486)%(x487%x488));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x489 = INT16_MIN;
	int16_t x490 = INT16_MIN;
	int8_t x491 = -1;
	int32_t t98 = 13728;

    t98 = ((x489==x490)%(x491%x492));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x494 = 843096130671331LLU;
	static uint8_t x495 = 13U;
	static uint16_t x496 = 64U;

    t99 = ((x493==x494)%(x495%x496));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x497 = 41705LLU;
	static uint64_t x498 = 1780024162709121170LLU;
	int32_t x499 = 989;
	uint16_t x500 = UINT16_MAX;
	volatile int32_t t100 = -80964424;

    t100 = ((x497==x498)%(x499%x500));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x502 = -1LL;
	volatile uint64_t x503 = 438688228862452LLU;
	uint16_t x504 = 10641U;
	volatile uint64_t t101 = 28608444659509LLU;

    t101 = ((x501==x502)%(x503%x504));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x506 = 422532619;
	uint64_t x507 = 252LLU;
	uint8_t x508 = 55U;
	volatile uint64_t t102 = 63511991444179LLU;

    t102 = ((x505==x506)%(x507%x508));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x509 = INT16_MIN;
	static volatile int64_t x510 = INT64_MIN;
	uint32_t x511 = 1U;
	volatile uint16_t x512 = 1227U;
	volatile uint32_t t103 = 21U;

    t103 = ((x509==x510)%(x511%x512));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x518 = 3U;
	uint16_t x519 = 1218U;
	int8_t x520 = INT8_MIN;

    t104 = ((x517==x518)%(x519%x520));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x521 = 59U;
	static int32_t x522 = -1;
	static int8_t x524 = -18;
	int64_t t105 = 516113407LL;

    t105 = ((x521==x522)%(x523%x524));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x525 = INT32_MIN;
	int64_t x526 = -1LL;
	static volatile uint16_t x527 = UINT16_MAX;
	static volatile int64_t x528 = 3307083380432858LL;
	int64_t t106 = 2076195723747985LL;

    t106 = ((x525==x526)%(x527%x528));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x529 = UINT8_MAX;
	int64_t x530 = INT64_MIN;
	volatile int8_t x532 = INT8_MIN;
	volatile int64_t t107 = 324381181015LL;

    t107 = ((x529==x530)%(x531%x532));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x533 = INT32_MAX;
	static int32_t x534 = INT32_MAX;
	int32_t x535 = INT32_MIN;

    t108 = ((x533==x534)%(x535%x536));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x537 = INT16_MIN;
	int16_t x538 = 0;
	static uint64_t x539 = 441507602082LLU;
	volatile uint64_t t109 = 818LLU;

    t109 = ((x537==x538)%(x539%x540));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x541 = 11LLU;
	int8_t x542 = INT8_MIN;
	uint64_t x543 = UINT64_MAX;
	int8_t x544 = INT8_MIN;
	static uint64_t t110 = 92LLU;

    t110 = ((x541==x542)%(x543%x544));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x546 = 41317LLU;
	int64_t x547 = INT64_MAX;
	uint32_t x548 = 3766014U;
	static int64_t t111 = -1362444535339LL;

    t111 = ((x545==x546)%(x547%x548));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x549 = 1;
	volatile int64_t x550 = 29179LL;
	static int32_t x551 = INT32_MIN;
	int8_t x552 = -52;
	int32_t t112 = -30;

    t112 = ((x549==x550)%(x551%x552));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x553 = 476U;
	static int32_t x554 = INT32_MAX;
	int8_t x555 = INT8_MIN;
	volatile int32_t t113 = -1008592;

    t113 = ((x553==x554)%(x555%x556));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x558 = -730672LL;
	volatile int64_t x559 = INT64_MAX;
	uint32_t x560 = 723582473U;

    t114 = ((x557==x558)%(x559%x560));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x565 = 889424U;
	uint16_t x566 = 15745U;
	uint8_t x567 = 3U;
	int16_t x568 = INT16_MIN;
	volatile int32_t t115 = -58979337;

    t115 = ((x565==x566)%(x567%x568));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x573 = 911061910123LL;
	static int8_t x574 = 1;
	int32_t x575 = INT32_MIN;
	static volatile uint32_t x576 = 121565U;
	volatile uint32_t t116 = 53641U;

    t116 = ((x573==x574)%(x575%x576));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x577 = -1;
	int16_t x578 = INT16_MIN;
	int16_t x579 = 1;
	int32_t x580 = INT32_MIN;
	volatile int32_t t117 = 8706513;

    t117 = ((x577==x578)%(x579%x580));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x581 = -2128;
	int32_t x582 = -1;
	int8_t x583 = INT8_MIN;
	int16_t x584 = -3;

    t118 = ((x581==x582)%(x583%x584));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x585 = -7303956294951LL;
	int8_t x586 = INT8_MIN;
	volatile int32_t x587 = -55695;

    t119 = ((x585==x586)%(x587%x588));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x593 = INT16_MAX;
	volatile uint16_t x594 = 54U;
	uint8_t x595 = 2U;
	uint64_t t120 = 148904LLU;

    t120 = ((x593==x594)%(x595%x596));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x597 = 190U;
	int16_t x598 = INT16_MIN;
	int32_t x599 = -42435;
	int64_t x600 = 16010902323LL;
	static volatile int64_t t121 = 7128373252801LL;

    t121 = ((x597==x598)%(x599%x600));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x601 = INT8_MIN;
	uint8_t x602 = 7U;
	static volatile int32_t t122 = 100419324;

    t122 = ((x601==x602)%(x603%x604));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x613 = 1;
	static uint32_t x614 = 36U;
	volatile int32_t x615 = INT32_MIN;
	int64_t x616 = INT64_MAX;

    t123 = ((x613==x614)%(x615%x616));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x617 = 8361;
	int64_t x618 = -15015706668766LL;
	volatile int16_t x619 = -1;
	int8_t x620 = INT8_MIN;
	volatile int32_t t124 = -128005325;

    t124 = ((x617==x618)%(x619%x620));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x621 = UINT8_MAX;
	uint8_t x622 = 2U;
	int32_t t125 = 6554;

    t125 = ((x621==x622)%(x623%x624));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x626 = 1U;
	int64_t x627 = INT64_MAX;
	volatile int8_t x628 = INT8_MIN;

    t126 = ((x625==x626)%(x627%x628));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x629 = -3573;
	int32_t x630 = -1;
	int64_t x631 = INT64_MAX;
	volatile uint8_t x632 = UINT8_MAX;
	int64_t t127 = 34156609396LL;

    t127 = ((x629==x630)%(x631%x632));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x637 = 28404181U;
	int32_t x638 = INT32_MIN;
	int32_t x640 = INT32_MIN;
	volatile int32_t t128 = 131;

    t128 = ((x637==x638)%(x639%x640));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x641 = -1;
	int8_t x642 = INT8_MIN;
	int32_t t129 = 0;

    t129 = ((x641==x642)%(x643%x644));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x645 = 490U;
	volatile int8_t x647 = -1;
	int64_t t130 = -5857182033LL;

    t130 = ((x645==x646)%(x647%x648));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x653 = INT16_MIN;
	static volatile int32_t x654 = INT32_MIN;
	int16_t x655 = 1109;
	uint64_t x656 = UINT64_MAX;
	volatile uint64_t t131 = 140225984259647976LLU;

    t131 = ((x653==x654)%(x655%x656));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x658 = -1;
	volatile uint8_t x659 = 60U;
	int64_t x660 = INT64_MIN;
	volatile int64_t t132 = -104181LL;

    t132 = ((x657==x658)%(x659%x660));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x665 = 0;
	static int8_t x667 = -2;
	static int16_t x668 = INT16_MIN;
	volatile int32_t t133 = -294616;

    t133 = ((x665==x666)%(x667%x668));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x669 = INT16_MIN;
	int64_t x670 = INT64_MIN;
	int32_t x671 = INT32_MIN;
	int64_t x672 = -850927568310740138LL;
	int64_t t134 = -295341636LL;

    t134 = ((x669==x670)%(x671%x672));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x673 = INT32_MIN;
	int64_t x674 = INT64_MIN;
	uint8_t x675 = UINT8_MAX;
	volatile int16_t x676 = 990;
	static int32_t t135 = -525954862;

    t135 = ((x673==x674)%(x675%x676));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x678 = 6U;
	int64_t x680 = INT64_MIN;

    t136 = ((x677==x678)%(x679%x680));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x693 = INT32_MIN;
	int16_t x694 = INT16_MAX;
	volatile uint32_t x695 = UINT32_MAX;
	int64_t t137 = -1LL;

    t137 = ((x693==x694)%(x695%x696));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x698 = INT32_MAX;
	uint64_t x699 = 19LLU;
	volatile int8_t x700 = -1;

    t138 = ((x697==x698)%(x699%x700));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x701 = INT16_MIN;
	int64_t x703 = INT64_MAX;
	volatile int64_t x704 = 3920754036984309LL;
	static int64_t t139 = -15759LL;

    t139 = ((x701==x702)%(x703%x704));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x705 = 3239408244144427497LLU;
	int32_t x706 = INT32_MAX;
	int32_t x707 = INT32_MIN;
	uint64_t x708 = 220472644329442278LLU;
	uint64_t t140 = 58600753LLU;

    t140 = ((x705==x706)%(x707%x708));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x709 = UINT32_MAX;
	uint8_t x710 = 2U;
	uint16_t x711 = UINT16_MAX;
	int16_t x712 = INT16_MIN;
	int32_t t141 = 3737;

    t141 = ((x709==x710)%(x711%x712));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x717 = INT64_MIN;
	volatile int16_t x718 = -1;
	volatile uint32_t x719 = 2189U;
	volatile int8_t x720 = -1;
	volatile uint32_t t142 = 1927221536U;

    t142 = ((x717==x718)%(x719%x720));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x725 = 6U;
	volatile int64_t x726 = -18573176358941117LL;
	uint64_t x727 = 3LLU;
	uint64_t x728 = 884172LLU;
	volatile uint64_t t143 = 34LLU;

    t143 = ((x725==x726)%(x727%x728));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x730 = UINT8_MAX;
	volatile int16_t x731 = INT16_MIN;
	volatile int8_t x732 = INT8_MAX;
	int32_t t144 = -28;

    t144 = ((x729==x730)%(x731%x732));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x741 = 5;
	int64_t x742 = INT64_MIN;
	int64_t x743 = INT64_MIN;
	int32_t x744 = INT32_MAX;
	static int64_t t145 = 0LL;

    t145 = ((x741==x742)%(x743%x744));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x749 = 0;
	uint16_t x750 = UINT16_MAX;
	int8_t x751 = -1;
	int64_t x752 = INT64_MIN;
	int64_t t146 = 51689031LL;

    t146 = ((x749==x750)%(x751%x752));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x753 = INT8_MIN;
	int64_t x754 = -1LL;
	int32_t x755 = 84117864;
	static uint32_t x756 = UINT32_MAX;
	volatile uint32_t t147 = 2U;

    t147 = ((x753==x754)%(x755%x756));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x759 = 139636700815LL;
	static int16_t x760 = INT16_MIN;
	static int64_t t148 = 346402206LL;

    t148 = ((x757==x758)%(x759%x760));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x761 = -3145176741402287159LL;
	volatile int32_t x762 = -61061300;
	volatile int16_t x763 = INT16_MAX;
	int8_t x764 = -2;
	int32_t t149 = -15084080;

    t149 = ((x761==x762)%(x763%x764));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x765 = 26720846191LLU;
	uint32_t x766 = UINT32_MAX;
	int64_t x767 = 12099LL;
	volatile uint16_t x768 = 507U;
	volatile int64_t t150 = 229727040417078LL;

    t150 = ((x765==x766)%(x767%x768));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x773 = -3352;
	volatile uint32_t x774 = UINT32_MAX;
	int32_t x775 = INT32_MIN;
	volatile uint8_t x776 = 93U;
	int32_t t151 = 738699;

    t151 = ((x773==x774)%(x775%x776));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x777 = UINT32_MAX;
	int16_t x778 = INT16_MIN;
	uint16_t x780 = UINT16_MAX;
	int32_t t152 = -50562173;

    t152 = ((x777==x778)%(x779%x780));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x782 = UINT64_MAX;
	volatile uint32_t x783 = UINT32_MAX;
	static int8_t x784 = -7;
	uint32_t t153 = 4404316U;

    t153 = ((x781==x782)%(x783%x784));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x789 = 322244LL;
	int8_t x790 = 1;
	uint8_t x792 = UINT8_MAX;
	static int64_t t154 = 87921468288643704LL;

    t154 = ((x789==x790)%(x791%x792));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x799 = 4U;
	static int8_t x800 = INT8_MAX;
	volatile int32_t t155 = 380786126;

    t155 = ((x797==x798)%(x799%x800));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x806 = -1147;
	volatile uint16_t x808 = UINT16_MAX;

    t156 = ((x805==x806)%(x807%x808));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x813 = INT32_MIN;
	volatile int16_t x814 = -18;
	uint32_t x816 = 2050857U;

    t157 = ((x813==x814)%(x815%x816));

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x817 = INT8_MIN;
	static int8_t x818 = -1;
	int64_t x819 = -4268LL;
	int8_t x820 = INT8_MAX;
	int64_t t158 = 1181079399571LL;

    t158 = ((x817==x818)%(x819%x820));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x822 = -1;
	static uint32_t x824 = 335188143U;
	volatile int64_t t159 = -536103290LL;

    t159 = ((x821==x822)%(x823%x824));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x829 = -4048;
	static uint16_t x830 = 1U;
	uint8_t x831 = 108U;
	volatile int32_t t160 = 38;

    t160 = ((x829==x830)%(x831%x832));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x834 = UINT32_MAX;
	int32_t x836 = 238;
	int32_t t161 = 10007958;

    t161 = ((x833==x834)%(x835%x836));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x839 = UINT16_MAX;
	int8_t x840 = INT8_MIN;
	volatile int32_t t162 = 525920131;

    t162 = ((x837==x838)%(x839%x840));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x841 = INT32_MAX;
	static uint16_t x842 = UINT16_MAX;
	int32_t x843 = 1;
	int16_t x844 = -6;
	volatile int32_t t163 = 5;

    t163 = ((x841==x842)%(x843%x844));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x849 = 39;
	volatile uint16_t x850 = 444U;
	static int64_t x851 = INT64_MAX;
	uint32_t x852 = 455078887U;
	volatile int64_t t164 = 87LL;

    t164 = ((x849==x850)%(x851%x852));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x853 = INT16_MIN;
	int16_t x854 = -20;
	static int32_t x855 = INT32_MIN;
	uint8_t x856 = UINT8_MAX;
	volatile int32_t t165 = 1867;

    t165 = ((x853==x854)%(x855%x856));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x857 = 44446LL;
	volatile uint64_t x858 = 4544849LLU;
	static int16_t x859 = INT16_MIN;
	int16_t x860 = 6;
	int32_t t166 = -510486170;

    t166 = ((x857==x858)%(x859%x860));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x861 = UINT64_MAX;
	int8_t x862 = -1;
	int16_t x863 = INT16_MIN;
	int64_t x864 = INT64_MAX;
	int64_t t167 = -1LL;

    t167 = ((x861==x862)%(x863%x864));

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x866 = 8;
	uint64_t x867 = 63473LLU;
	static int16_t x868 = INT16_MAX;
	static uint64_t t168 = 33518191LLU;

    t168 = ((x865==x866)%(x867%x868));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x869 = 28366LLU;
	int8_t x870 = -46;
	uint32_t x872 = 533882736U;
	volatile uint32_t t169 = 329U;

    t169 = ((x869==x870)%(x871%x872));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x873 = 237465238005LLU;
	uint64_t x875 = 525522604961853847LLU;
	static int16_t x876 = -5304;
	volatile uint64_t t170 = 1387583545210891406LLU;

    t170 = ((x873==x874)%(x875%x876));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x877 = 6;
	static volatile int64_t x878 = INT64_MIN;
	volatile int16_t x879 = -1;
	uint64_t x880 = 165362576LLU;
	volatile uint64_t t171 = 1LLU;

    t171 = ((x877==x878)%(x879%x880));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x881 = 1U;
	int64_t x882 = INT64_MIN;
	int64_t x883 = INT64_MAX;
	int8_t x884 = INT8_MIN;
	volatile int64_t t172 = 13729334LL;

    t172 = ((x881==x882)%(x883%x884));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x905 = INT64_MIN;
	int16_t x906 = INT16_MIN;
	volatile uint32_t x907 = 6786494U;
	volatile int32_t x908 = 9904;
	volatile uint32_t t173 = 1816416592U;

    t173 = ((x905==x906)%(x907%x908));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x910 = 17;
	static int32_t x911 = 12;
	static volatile int16_t x912 = INT16_MIN;
	volatile int32_t t174 = 24585;

    t174 = ((x909==x910)%(x911%x912));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x915 = 95023905;
	int16_t x916 = -5464;
	volatile int32_t t175 = -10681761;

    t175 = ((x913==x914)%(x915%x916));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x917 = 80803594449561LLU;
	int32_t x918 = INT32_MIN;
	uint32_t x919 = UINT32_MAX;
	uint8_t x920 = 108U;
	uint32_t t176 = 60238U;

    t176 = ((x917==x918)%(x919%x920));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x921 = 0;
	static int64_t x923 = 874776757042676LL;
	uint8_t x924 = UINT8_MAX;
	static volatile int64_t t177 = -72259781465840819LL;

    t177 = ((x921==x922)%(x923%x924));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x929 = -1;
	volatile uint64_t x930 = 24344027285LLU;
	volatile uint32_t x931 = UINT32_MAX;
	volatile int8_t x932 = INT8_MAX;
	volatile uint32_t t178 = 12461U;

    t178 = ((x929==x930)%(x931%x932));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x933 = 1028452;
	volatile int32_t x935 = -2280046;
	uint8_t x936 = 30U;
	int32_t t179 = -1;

    t179 = ((x933==x934)%(x935%x936));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x937 = UINT8_MAX;
	static uint16_t x939 = UINT16_MAX;
	int16_t x940 = INT16_MIN;
	int32_t t180 = -154807;

    t180 = ((x937==x938)%(x939%x940));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x941 = 2026;
	int8_t x942 = INT8_MIN;
	int16_t x943 = INT16_MIN;
	uint16_t x944 = 13891U;
	int32_t t181 = 0;

    t181 = ((x941==x942)%(x943%x944));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x949 = 145;
	static uint8_t x950 = UINT8_MAX;
	int16_t x951 = INT16_MIN;
	uint16_t x952 = 4272U;
	static volatile int32_t t182 = -3208431;

    t182 = ((x949==x950)%(x951%x952));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x953 = INT32_MAX;
	static int16_t x954 = -1;
	uint16_t x955 = UINT16_MAX;
	int8_t x956 = INT8_MIN;
	int32_t t183 = 274918;

    t183 = ((x953==x954)%(x955%x956));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x957 = INT64_MIN;
	int64_t x960 = 568520359061688LL;
	int64_t t184 = 44574LL;

    t184 = ((x957==x958)%(x959%x960));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x961 = INT8_MIN;
	volatile int8_t x962 = INT8_MIN;
	volatile int8_t x963 = -1;
	int8_t x964 = INT8_MAX;
	volatile int32_t t185 = 364065;

    t185 = ((x961==x962)%(x963%x964));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x966 = 6948;
	int64_t x967 = -3754008136027638LL;
	uint16_t x968 = UINT16_MAX;
	static int64_t t186 = -62402250097844807LL;

    t186 = ((x965==x966)%(x967%x968));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x970 = -1;
	static uint8_t x971 = 1U;

    t187 = ((x969==x970)%(x971%x972));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x977 = INT32_MIN;
	uint16_t x978 = 11U;
	volatile int16_t x979 = INT16_MAX;
	static int8_t x980 = INT8_MIN;
	int32_t t188 = -2653813;

    t188 = ((x977==x978)%(x979%x980));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x985 = 1;
	static int8_t x986 = -1;
	int8_t x987 = -1;
	volatile uint32_t x988 = 38769U;
	volatile uint32_t t189 = 7151540U;

    t189 = ((x985==x986)%(x987%x988));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x992 = UINT32_MAX;

    t190 = ((x989==x990)%(x991%x992));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x993 = UINT32_MAX;
	uint16_t x994 = 62U;
	uint64_t x995 = UINT64_MAX;
	int8_t x996 = INT8_MIN;
	volatile uint64_t t191 = 21LLU;

    t191 = ((x993==x994)%(x995%x996));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1001 = INT8_MIN;
	volatile int64_t x1003 = INT64_MAX;
	volatile int32_t x1004 = 397539376;
	static int64_t t192 = 25272LL;

    t192 = ((x1001==x1002)%(x1003%x1004));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1007 = -1LL;
	volatile int32_t x1008 = INT32_MIN;
	static volatile int64_t t193 = 2875407LL;

    t193 = ((x1005==x1006)%(x1007%x1008));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1009 = INT8_MIN;
	int8_t x1010 = -1;
	volatile uint64_t x1011 = 27829LLU;
	int64_t x1012 = -573541122LL;
	volatile uint64_t t194 = 6583980LLU;

    t194 = ((x1009==x1010)%(x1011%x1012));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1013 = INT64_MIN;
	int64_t x1014 = INT64_MIN;
	volatile int16_t x1015 = INT16_MAX;
	int64_t x1016 = INT64_MAX;
	int64_t t195 = -39325LL;

    t195 = ((x1013==x1014)%(x1015%x1016));

    if (t195 != 1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x1018 = -12256;
	int8_t x1019 = INT8_MAX;
	volatile int32_t t196 = 0;

    t196 = ((x1017==x1018)%(x1019%x1020));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1021 = 1;
	static int64_t x1022 = INT64_MIN;
	uint8_t x1023 = UINT8_MAX;
	uint32_t t197 = 152740U;

    t197 = ((x1021==x1022)%(x1023%x1024));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1025 = 3715301U;
	int8_t x1028 = INT8_MAX;
	volatile int64_t t198 = 555591140778958903LL;

    t198 = ((x1025==x1026)%(x1027%x1028));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1030 = INT8_MAX;
	int8_t x1031 = -1;

    t199 = ((x1029==x1030)%(x1031%x1032));

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

