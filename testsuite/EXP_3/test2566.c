
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

static volatile int8_t x1 = -59;
static volatile int8_t x13 = -1;
static uint32_t x23 = 88787U;
int16_t x38 = INT16_MAX;
uint16_t x40 = 9124U;
volatile int8_t x42 = -37;
int32_t x46 = -1;
uint64_t x61 = 103477354095LLU;
volatile int64_t x64 = INT64_MAX;
volatile int16_t x72 = 1;
int64_t x78 = -1LL;
volatile uint8_t x80 = 86U;
volatile int64_t t18 = 3535LL;
volatile int32_t x92 = -74561;
static int32_t x97 = -1;
int16_t x103 = -1;
int8_t x111 = INT8_MIN;
volatile uint32_t x122 = 11766971U;
int64_t x147 = INT64_MAX;
volatile uint32_t x148 = 269215981U;
static uint8_t x156 = UINT8_MAX;
int8_t x157 = INT8_MAX;
static int32_t t34 = -14667;
int8_t x161 = 12;
int64_t x163 = INT64_MIN;
volatile int64_t t35 = -225503944LL;
volatile int64_t t36 = -467LL;
static volatile uint16_t x179 = UINT16_MAX;
static int32_t t39 = -601;
int16_t x182 = 676;
static volatile int64_t x184 = INT64_MIN;
volatile int8_t x189 = 0;
int32_t x192 = INT32_MAX;
uint32_t x198 = 110U;
uint8_t x200 = UINT8_MAX;
static uint8_t x202 = 5U;
uint32_t x205 = UINT32_MAX;
int64_t t44 = -245496216000114279LL;
uint16_t x209 = 1913U;
static int64_t x210 = 422300615454654LL;
volatile int16_t x211 = INT16_MIN;
int8_t x213 = INT8_MIN;
volatile int64_t x214 = INT64_MIN;
static uint64_t x231 = 1161674083LLU;
int64_t x232 = INT64_MAX;
volatile int16_t x234 = -1;
uint8_t x235 = UINT8_MAX;
int64_t t49 = 21697318928LL;
int8_t x245 = -1;
int64_t x246 = 16LL;
int64_t x257 = -5LL;
int32_t x259 = 37581664;
int32_t x262 = -1;
static volatile int16_t x263 = -1;
uint64_t x273 = 198LLU;
uint16_t x274 = UINT16_MAX;
volatile int32_t x275 = -1;
uint64_t x277 = 304040304025LLU;
int8_t x288 = -1;
int8_t x305 = INT8_MAX;
uint8_t x312 = UINT8_MAX;
volatile uint32_t t63 = 2800U;
uint32_t x319 = 19560U;
int64_t x323 = -1002LL;
static uint64_t x331 = 1LLU;
static uint64_t t69 = 2LLU;
uint64_t t70 = 790152923LLU;
int64_t x354 = -6051327LL;
uint8_t x356 = UINT8_MAX;
volatile int64_t t72 = -1969LL;
uint32_t x358 = 27542U;
static int16_t x370 = INT16_MIN;
volatile uint16_t x389 = 10280U;
volatile int8_t x390 = INT8_MIN;
int32_t x391 = INT32_MIN;
int32_t t78 = -142;
volatile uint8_t x393 = 23U;
int16_t x395 = INT16_MIN;
volatile uint32_t t80 = 440725137U;
int8_t x415 = INT8_MIN;
uint8_t x417 = 14U;
int32_t x418 = INT32_MAX;
static int32_t x421 = 51055540;
static uint64_t x428 = 1955266928066LLU;
volatile uint64_t t85 = 212326941LLU;
uint64_t t87 = 185266LLU;
int64_t x441 = -406491612LL;
int64_t x442 = INT64_MIN;
uint8_t x446 = UINT8_MAX;
uint64_t x449 = 100568794098LLU;
static volatile uint64_t x451 = 7217199475410872LLU;
static uint64_t t90 = 23703978LLU;
volatile int64_t t93 = 471357026LL;
volatile int32_t x469 = -1;
uint16_t x479 = 405U;
int64_t t96 = -1249600335472LL;
volatile uint64_t t98 = 664925536LLU;
int16_t x501 = -716;
int64_t x502 = INT64_MIN;
static uint64_t x512 = 1796350LLU;
int32_t x515 = INT32_MIN;
volatile int64_t x544 = -13160LL;
volatile int64_t t108 = -1491LL;
static uint64_t x554 = 55935702LLU;
volatile int32_t x559 = 8471459;
int16_t x562 = -2848;
static uint64_t x563 = 834190768307LLU;
uint8_t x564 = 3U;
static volatile uint32_t x565 = 3565U;
int32_t x577 = 22504962;
int32_t x584 = INT32_MAX;
volatile uint64_t t118 = 89328352901934LLU;
static int32_t x587 = -67;
int32_t x590 = -1;
int64_t t120 = -12199585364467250LL;
uint64_t x593 = 518207LLU;
static uint64_t x596 = 32673698LLU;
int32_t x598 = -871;
int32_t t123 = 131;
uint8_t x609 = UINT8_MAX;
uint32_t t125 = 245U;
int64_t x625 = INT64_MAX;
int16_t x634 = INT16_MIN;
volatile uint64_t x645 = 28853029664LLU;
volatile int16_t x647 = INT16_MAX;
uint64_t x648 = 717058LLU;
uint64_t t130 = 0LLU;
volatile int64_t t131 = -81607701LL;
int32_t x655 = INT32_MIN;
int8_t x656 = -1;
int64_t x667 = -1LL;
static int8_t x680 = 0;
uint32_t t137 = 4033602U;
int16_t x694 = INT16_MAX;
static uint64_t x699 = UINT64_MAX;
uint32_t x705 = 489858U;
int16_t x706 = INT16_MAX;
int8_t x729 = 47;
uint16_t x745 = 76U;
uint64_t x748 = 7246787565832566690LLU;
int64_t x749 = INT64_MAX;
static int64_t t148 = 244453469178796419LL;
uint32_t x760 = 2682786U;
int8_t x763 = INT8_MIN;
uint32_t x769 = 216U;
static uint8_t x770 = 7U;
static uint64_t x776 = UINT64_MAX;
volatile int64_t x779 = 67408258829LL;
volatile int64_t t153 = -2253356450702262235LL;
volatile int32_t x784 = -7734;
static int64_t x785 = 64765LL;
static uint16_t x797 = 1750U;
volatile int8_t x801 = INT8_MIN;
uint16_t x802 = 87U;
volatile uint64_t t158 = 12LLU;
uint32_t x806 = UINT32_MAX;
volatile uint32_t t159 = 95599U;
uint32_t t160 = 1805467128U;
static int32_t x814 = INT32_MIN;
int8_t x815 = INT8_MIN;
volatile int64_t x817 = 7LL;
int8_t x820 = -1;
static int32_t x824 = -1258;
int16_t x831 = 2319;
int16_t x834 = -303;
int16_t x838 = 1;
volatile int16_t x839 = INT16_MAX;
static uint16_t x841 = 130U;
int32_t x842 = 56053;
int8_t x851 = INT8_MIN;
volatile uint32_t t171 = 59U;
volatile int64_t t173 = 45LL;
static volatile uint32_t t174 = 411U;
int16_t x870 = INT16_MIN;
int64_t x876 = -1LL;
int8_t x881 = 8;
uint16_t x882 = 5U;
volatile uint32_t t178 = 10106073U;
volatile int32_t x891 = -1;
int32_t x892 = INT32_MIN;
uint64_t x897 = 2952420916LLU;
static uint8_t x901 = 22U;
static int64_t x903 = -25895422720LL;
volatile int32_t x904 = INT32_MIN;
volatile int64_t t182 = -16309287851040419LL;
uint8_t x908 = 21U;
volatile uint64_t t183 = 341140079231LLU;
uint64_t t184 = 90550097LLU;
static volatile int8_t x918 = -14;
volatile uint8_t x920 = 120U;
uint16_t x948 = UINT16_MAX;
volatile uint64_t t193 = 10916LLU;
int64_t x956 = -124151236247861LL;
volatile uint32_t x960 = 1433U;
int32_t t197 = 1784099;
int16_t x969 = INT16_MIN;
volatile uint64_t t198 = 1857LLU;


void f0(void) {
    	int64_t x2 = -137148885312LL;
	uint16_t x3 = 3326U;
	int8_t x4 = 11;
	volatile int64_t t0 = -269161682771457648LL;

    t0 = ((x1-x2)/(x3^x4));

    if (t0 != 41347267LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = 2U;
	static int16_t x12 = 0;
	volatile int64_t t1 = 65375493LL;

    t1 = ((x9-x10)/(x11^x12));

    if (t1 != -4611686018427371520LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x14 = INT32_MIN;
	uint64_t x15 = 374117872LLU;
	int8_t x16 = INT8_MIN;
	volatile uint64_t t2 = 1465LLU;

    t2 = ((x13-x14)/(x15^x16));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	uint8_t x18 = 2U;
	int64_t x19 = INT64_MIN;
	static volatile uint8_t x20 = UINT8_MAX;
	volatile int64_t t3 = -69123999382LL;

    t3 = ((x17-x18)/(x19^x20));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = INT8_MIN;
	int16_t x22 = -1;
	int16_t x24 = -2;
	volatile uint32_t t4 = 47U;

    t4 = ((x21-x22)/(x23^x24));

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x25 = UINT64_MAX;
	volatile int64_t x26 = 107485LL;
	int8_t x27 = INT8_MIN;
	uint32_t x28 = 3598669U;
	static uint64_t t5 = 2472582LLU;

    t5 = ((x25-x26)/(x27^x28));

    if (t5 != 4298568956LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = 3U;
	uint16_t x30 = 18273U;
	uint8_t x31 = UINT8_MAX;
	uint16_t x32 = UINT16_MAX;
	int32_t t6 = -139008465;

    t6 = ((x29-x30)/(x31^x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	int8_t x34 = INT8_MIN;
	int64_t x35 = -1LL;
	int64_t x36 = 1LL;
	static int64_t t7 = -1138549LL;

    t7 = ((x33-x34)/(x35^x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x37 = INT8_MIN;
	int8_t x39 = 9;
	int32_t t8 = -112895365;

    t8 = ((x37-x38)/(x39^x40));

    if (t8 != -3) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x41 = UINT16_MAX;
	volatile uint16_t x43 = 297U;
	uint16_t x44 = 6U;
	volatile int32_t t9 = -16;

    t9 = ((x41-x42)/(x43^x44));

    if (t9 != 216) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = 18U;
	volatile int32_t x47 = INT32_MAX;
	volatile uint32_t x48 = UINT32_MAX;
	volatile uint32_t t10 = 379656U;

    t10 = ((x45-x46)/(x47^x48));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = -2;
	int32_t x50 = 1;
	int64_t x51 = -1LL;
	static uint16_t x52 = 3450U;
	volatile int64_t t11 = -1050713LL;

    t11 = ((x49-x50)/(x51^x52));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x53 = UINT8_MAX;
	uint8_t x54 = 0U;
	int8_t x55 = 12;
	uint32_t x56 = 56U;
	uint32_t t12 = 890788527U;

    t12 = ((x53-x54)/(x55^x56));

    if (t12 != 4U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x62 = INT8_MIN;
	volatile int32_t x63 = INT32_MIN;
	static uint64_t t13 = 530LLU;

    t13 = ((x61-x62)/(x63^x64));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = -1;
	volatile uint16_t x66 = 60U;
	static int64_t x67 = -2523454LL;
	static int8_t x68 = INT8_MIN;
	volatile int64_t t14 = 421870598587161LL;

    t14 = ((x65-x66)/(x67^x68));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = -1;
	int16_t x70 = INT16_MIN;
	int8_t x71 = -1;
	volatile int32_t t15 = 857;

    t15 = ((x69-x70)/(x71^x72));

    if (t15 != -16383) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x73 = 64451U;
	volatile uint8_t x74 = 0U;
	int64_t x75 = INT64_MAX;
	static volatile int8_t x76 = INT8_MIN;
	static volatile int64_t t16 = 44LL;

    t16 = ((x73-x74)/(x75^x76));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x77 = 2799530869591635LLU;
	static int32_t x79 = INT32_MIN;
	volatile uint64_t t17 = 1101055592818650251LLU;

    t17 = ((x77-x78)/(x79^x80));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = 0;
	int64_t x82 = -4079082445356128LL;
	int64_t x83 = 163776363884810611LL;
	static int16_t x84 = INT16_MIN;

    t18 = ((x81-x82)/(x83^x84));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = 139137;
	int32_t x86 = INT32_MAX;
	uint16_t x87 = 5U;
	volatile uint64_t x88 = 422836233299LLU;
	uint64_t t19 = 1535LLU;

    t19 = ((x85-x86)/(x87^x88));

    if (t19 != 43626214LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = INT8_MIN;
	int16_t x90 = 19;
	volatile uint64_t x91 = 89822657693588038LLU;
	uint64_t t20 = 13514213996120456LLU;

    t20 = ((x89-x90)/(x91^x92));

    if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x98 = INT16_MIN;
	static int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MIN;
	volatile int64_t t21 = -75726504028741LL;

    t21 = ((x97-x98)/(x99^x100));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x101 = 10372U;
	int32_t x102 = 43764499;
	static int16_t x104 = INT16_MIN;
	volatile uint32_t t22 = 7U;

    t22 = ((x101-x102)/(x103^x104));

    if (t22 != 129740U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x105 = 3;
	int64_t x106 = INT64_MAX;
	uint8_t x107 = 5U;
	uint8_t x108 = 1U;
	volatile int64_t t23 = -7146118495LL;

    t23 = ((x105-x106)/(x107^x108));

    if (t23 != -2305843009213693951LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x109 = -723480LL;
	int32_t x110 = INT32_MIN;
	int32_t x112 = -2115;
	int64_t t24 = 486886720LL;

    t24 = ((x109-x110)/(x111^x112));

    if (t24 != 1017904LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x113 = INT8_MIN;
	static volatile int8_t x114 = -1;
	int16_t x115 = INT16_MIN;
	volatile int64_t x116 = INT64_MIN;
	volatile int64_t t25 = 4LL;

    t25 = ((x113-x114)/(x115^x116));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x121 = -479661913;
	static int8_t x123 = INT8_MAX;
	volatile int8_t x124 = -1;
	volatile uint32_t t26 = 1846U;

    t26 = ((x121-x122)/(x123^x124));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x125 = -3;
	volatile int32_t x126 = INT32_MIN;
	uint16_t x127 = 15867U;
	uint32_t x128 = 7949U;
	volatile uint32_t t27 = 0U;

    t27 = ((x125-x126)/(x127^x128));

    if (t27 != 239942U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x133 = -3724LL;
	uint32_t x134 = 479194014U;
	volatile uint16_t x135 = UINT16_MAX;
	static int32_t x136 = 0;
	int64_t t28 = 136605753LL;

    t28 = ((x133-x134)/(x135^x136));

    if (t28 != -7312LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x137 = INT8_MIN;
	static uint16_t x138 = 11540U;
	int8_t x139 = 3;
	int16_t x140 = 1;
	volatile int32_t t29 = -405360480;

    t29 = ((x137-x138)/(x139^x140));

    if (t29 != -5834) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x141 = INT32_MIN;
	int64_t x142 = 174581799LL;
	int32_t x143 = -1;
	uint16_t x144 = 10U;
	volatile int64_t t30 = -69293784270038163LL;

    t30 = ((x141-x142)/(x143^x144));

    if (t30 != 211096858LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x145 = UINT8_MAX;
	static uint16_t x146 = UINT16_MAX;
	int64_t t31 = 519164392951811LL;

    t31 = ((x145-x146)/(x147^x148));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x149 = INT32_MIN;
	static int16_t x150 = INT16_MIN;
	int16_t x151 = -1;
	uint16_t x152 = UINT16_MAX;
	int32_t t32 = -109269;

    t32 = ((x149-x150)/(x151^x152));

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x153 = INT64_MIN;
	static int16_t x154 = INT16_MIN;
	int16_t x155 = -3549;
	static volatile int64_t t33 = -825583191821272960LL;

    t33 = ((x153-x154)/(x155^x156));

    if (t33 != 2741787169100696LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x158 = 10U;
	volatile int16_t x159 = INT16_MAX;
	int8_t x160 = INT8_MIN;

    t34 = ((x157-x158)/(x159^x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x162 = -5847401;
	uint32_t x164 = 455543627U;

    t35 = ((x161-x162)/(x163^x164));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x165 = -779948142225082371LL;
	static int32_t x166 = INT32_MAX;
	int16_t x167 = INT16_MIN;
	int16_t x168 = 1107;

    t36 = ((x165-x166)/(x167^x168));

    if (t36 != 24634349653282LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x169 = 327342LL;
	int64_t x170 = INT64_MAX;
	volatile int16_t x171 = 17;
	int32_t x172 = INT32_MIN;
	static volatile int64_t t37 = 36372849719772LL;

    t37 = ((x169-x170)/(x171^x172));

    if (t37 != 4294967329LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x173 = -1LL;
	volatile int8_t x174 = INT8_MAX;
	int8_t x175 = INT8_MIN;
	static int16_t x176 = INT16_MIN;
	volatile int64_t t38 = 1405216707LL;

    t38 = ((x173-x174)/(x175^x176));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x177 = INT32_MAX;
	int8_t x178 = 0;
	int8_t x180 = INT8_MIN;

    t39 = ((x177-x178)/(x179^x180));

    if (t39 != -32831) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x181 = -174;
	int32_t x183 = -3772;
	int64_t t40 = 4193LL;

    t40 = ((x181-x182)/(x183^x184));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x190 = INT16_MAX;
	int32_t x191 = INT32_MIN;
	volatile int32_t t41 = -3115;

    t41 = ((x189-x190)/(x191^x192));

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x197 = UINT32_MAX;
	int16_t x199 = INT16_MIN;
	uint32_t t42 = 0U;

    t42 = ((x197-x198)/(x199^x200));

    if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x201 = 2085U;
	static int64_t x203 = -1LL;
	int16_t x204 = -3;
	static volatile int64_t t43 = 15LL;

    t43 = ((x201-x202)/(x203^x204));

    if (t43 != 1040LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x206 = -1LL;
	static int16_t x207 = -1;
	int32_t x208 = INT32_MIN;

    t44 = ((x205-x206)/(x207^x208));

    if (t44 != 2LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x212 = INT32_MIN;
	int64_t t45 = 30760LL;

    t45 = ((x209-x210)/(x211^x212));

    if (t45 != -196652LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint8_t x215 = UINT8_MAX;
	int64_t x216 = -24LL;
	int64_t t46 = 4168538388LL;

    t46 = ((x213-x214)/(x215^x216));

    if (t46 != -39585287711823071LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MIN;
	int64_t x227 = 8598991364051747LL;
	static uint16_t x228 = UINT16_MAX;
	volatile uint64_t t47 = 110055102699002737LLU;

    t47 = ((x225-x226)/(x227^x228));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x229 = INT8_MAX;
	int64_t x230 = 13LL;
	static uint64_t t48 = 2791917010LLU;

    t48 = ((x229-x230)/(x231^x232));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x233 = INT64_MIN;
	static uint32_t x236 = 2643721U;

    t49 = ((x233-x234)/(x235^x236));

    if (t49 != -3488471464696LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x241 = UINT32_MAX;
	volatile int8_t x242 = 9;
	int64_t x243 = INT64_MIN;
	static int32_t x244 = INT32_MIN;
	volatile int64_t t50 = -3LL;

    t50 = ((x241-x242)/(x243^x244));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x247 = 65U;
	int32_t x248 = 5867836;
	volatile int64_t t51 = 58648431373784LL;

    t51 = ((x245-x246)/(x247^x248));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x249 = INT32_MAX;
	static int16_t x250 = 1;
	int64_t x251 = -1LL;
	static volatile int8_t x252 = INT8_MIN;
	int64_t t52 = 31374286LL;

    t52 = ((x249-x250)/(x251^x252));

    if (t52 != 16909320LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x253 = UINT32_MAX;
	int64_t x254 = -1LL;
	volatile int16_t x255 = -1;
	static int32_t x256 = INT32_MIN;
	static volatile int64_t t53 = -1885535863879LL;

    t53 = ((x253-x254)/(x255^x256));

    if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x258 = -1;
	int32_t x260 = 49744549;
	static int64_t t54 = 151614713914093LL;

    t54 = ((x257-x258)/(x259^x260));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x261 = 15;
	static volatile int64_t x264 = INT64_MIN;
	int64_t t55 = 14LL;

    t55 = ((x261-x262)/(x263^x264));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x265 = 2253494093591623177LL;
	int8_t x266 = INT8_MIN;
	volatile int64_t x267 = -1LL;
	volatile int64_t x268 = -67643859531182LL;
	volatile int64_t t56 = 230LL;

    t56 = ((x265-x266)/(x267^x268));

    if (t56 != 33314LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x276 = INT32_MIN;
	static volatile uint64_t t57 = 1113247587660LLU;

    t57 = ((x273-x274)/(x275^x276));

    if (t57 != 8589934595LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x278 = INT64_MIN;
	volatile int8_t x279 = 15;
	static uint8_t x280 = UINT8_MAX;
	volatile uint64_t t58 = 268551LLU;

    t58 = ((x277-x278)/(x279^x280));

    if (t58 != 38430718087062832LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x285 = INT16_MAX;
	int32_t x286 = -1008467;
	static int32_t x287 = -4963857;
	static volatile int32_t t59 = 1;

    t59 = ((x285-x286)/(x287^x288));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x293 = -1LL;
	int16_t x294 = -49;
	uint8_t x295 = 58U;
	int64_t x296 = -1LL;
	volatile int64_t t60 = -23056305060820LL;

    t60 = ((x293-x294)/(x295^x296));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x306 = 3U;
	uint32_t x307 = UINT32_MAX;
	static int32_t x308 = INT32_MAX;
	volatile uint32_t t61 = 351U;

    t61 = ((x305-x306)/(x307^x308));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x309 = 478467176;
	volatile uint16_t x310 = UINT16_MAX;
	int64_t x311 = 1474247961723LL;
	int64_t t62 = 228627647LL;

    t62 = ((x309-x310)/(x311^x312));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x313 = INT16_MAX;
	static int16_t x314 = 10;
	int32_t x315 = INT32_MIN;
	volatile uint32_t x316 = UINT32_MAX;

    t63 = ((x313-x314)/(x315^x316));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x317 = 1U;
	volatile uint32_t x318 = 1435741237U;
	uint8_t x320 = 13U;
	uint32_t t64 = 1187467990U;

    t64 = ((x317-x318)/(x319^x320));

    if (t64 != 146199U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x321 = UINT64_MAX;
	static volatile uint64_t x322 = 9LLU;
	uint64_t x324 = 14398338LLU;
	uint64_t t65 = 4229831723086LLU;

    t65 = ((x321-x322)/(x323^x324));

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x325 = INT64_MAX;
	int16_t x326 = 0;
	volatile int32_t x327 = INT32_MIN;
	int8_t x328 = -19;
	volatile int64_t t66 = -3212LL;

    t66 = ((x325-x326)/(x327^x328));

    if (t66 != 4294967334LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x329 = INT64_MIN;
	static int16_t x330 = INT16_MIN;
	uint16_t x332 = 47U;
	static volatile uint64_t t67 = 13291210940283923LLU;

    t67 = ((x329-x330)/(x331^x332));

    if (t67 != 200508087757713229LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x333 = 176LL;
	int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MIN;
	static int32_t x336 = INT32_MIN;
	volatile int64_t t68 = -3473996834356585291LL;

    t68 = ((x333-x334)/(x335^x336));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x337 = INT32_MAX;
	volatile uint64_t x338 = 268LLU;
	int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MIN;

    t69 = ((x337-x338)/(x339^x340));

    if (t69 != 65792LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x345 = 536501556;
	uint64_t x346 = UINT64_MAX;
	int16_t x347 = -1;
	volatile uint16_t x348 = 13194U;

    t70 = ((x345-x346)/(x347^x348));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x349 = 15U;
	int32_t x350 = 1888;
	volatile int64_t x351 = -87LL;
	int8_t x352 = INT8_MAX;
	static int64_t t71 = 1420108340LL;

    t71 = ((x349-x350)/(x351^x352));

    if (t71 != 44LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x353 = 204283545001441LL;
	volatile int8_t x355 = -1;

    t72 = ((x353-x354)/(x355^x356));

    if (t72 != -797982621299LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x357 = UINT8_MAX;
	uint16_t x359 = 4042U;
	uint64_t x360 = 1404178897LLU;
	static uint64_t t73 = 3937402449LLU;

    t73 = ((x357-x358)/(x359^x360));

    if (t73 != 3LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x361 = UINT64_MAX;
	uint64_t x362 = UINT64_MAX;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MIN;
	uint64_t t74 = 1330640385418120731LLU;

    t74 = ((x361-x362)/(x363^x364));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x369 = 1771104986488042966LLU;
	volatile int64_t x371 = INT64_MAX;
	static int8_t x372 = -1;
	volatile uint64_t t75 = 235LLU;

    t75 = ((x369-x370)/(x371^x372));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x381 = -4227;
	static int16_t x382 = -1;
	int64_t x383 = INT64_MIN;
	volatile int32_t x384 = -859788451;
	volatile int64_t t76 = -117490856352LL;

    t76 = ((x381-x382)/(x383^x384));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x385 = -1;
	int16_t x386 = -1;
	uint16_t x387 = 0U;
	uint64_t x388 = 112234033289128LLU;
	static volatile uint64_t t77 = 951550562281LLU;

    t77 = ((x385-x386)/(x387^x388));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x392 = -3039061;

    t78 = ((x389-x390)/(x391^x392));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x394 = 28;
	uint64_t x396 = 5059LLU;
	uint64_t t79 = 1106674111849513275LLU;

    t79 = ((x393-x394)/(x395^x396));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x397 = 1;
	int32_t x398 = 731896768;
	static int16_t x399 = 7;
	uint32_t x400 = 0U;

    t80 = ((x397-x398)/(x399^x400));

    if (t80 != 509010075U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x405 = 6048;
	volatile uint16_t x406 = 15U;
	volatile int16_t x407 = INT16_MIN;
	uint16_t x408 = 1U;
	volatile int32_t t81 = 1;

    t81 = ((x405-x406)/(x407^x408));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x413 = 696;
	static uint8_t x414 = 0U;
	int16_t x416 = INT16_MIN;
	static volatile int32_t t82 = 283;

    t82 = ((x413-x414)/(x415^x416));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x419 = INT64_MIN;
	volatile uint64_t x420 = UINT64_MAX;
	volatile uint64_t t83 = 64471LLU;

    t83 = ((x417-x418)/(x419^x420));

    if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x422 = -6208292;
	static int16_t x423 = INT16_MIN;
	volatile uint32_t x424 = 61U;
	uint32_t t84 = 54509596U;

    t84 = ((x421-x422)/(x423^x424));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x425 = 1543U;
	int8_t x426 = INT8_MAX;
	uint8_t x427 = 112U;

    t85 = ((x425-x426)/(x427^x428));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x429 = 2U;
	int8_t x430 = INT8_MAX;
	uint64_t x431 = UINT64_MAX;
	int64_t x432 = INT64_MAX;
	static uint64_t t86 = 106645883076LLU;

    t86 = ((x429-x430)/(x431^x432));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x437 = -1011;
	uint64_t x438 = 337284682523352LLU;
	int32_t x439 = -1;
	volatile uint8_t x440 = 60U;

    t87 = ((x437-x438)/(x439^x440));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x443 = INT16_MIN;
	int32_t x444 = -1;
	volatile int64_t t88 = 26501186LL;

    t88 = ((x441-x442)/(x443^x444));

    if (t88 != 281483566894994LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x445 = INT16_MAX;
	int16_t x447 = -3;
	int64_t x448 = INT64_MIN;
	volatile int64_t t89 = -281747986754766598LL;

    t89 = ((x445-x446)/(x447^x448));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x450 = INT32_MIN;
	int16_t x452 = INT16_MIN;

    t90 = ((x449-x450)/(x451^x452));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x453 = 718215496211LLU;
	volatile uint64_t x454 = UINT64_MAX;
	static int8_t x455 = -1;
	volatile uint64_t x456 = 32660007075342464LLU;
	uint64_t t91 = 5003117LLU;

    t91 = ((x453-x454)/(x455^x456));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x461 = 122056;
	static int32_t x462 = -1;
	static int8_t x463 = INT8_MIN;
	uint16_t x464 = 6477U;
	static int32_t t92 = 3688;

    t92 = ((x461-x462)/(x463^x464));

    if (t92 != -18) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x465 = 0;
	int64_t x466 = -1LL;
	int16_t x467 = INT16_MAX;
	static int8_t x468 = -1;

    t93 = ((x465-x466)/(x467^x468));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x470 = INT32_MAX;
	uint32_t x471 = 440767U;
	volatile int16_t x472 = INT16_MIN;
	uint32_t t94 = 525096U;

    t94 = ((x469-x470)/(x471^x472));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x473 = 0;
	static int16_t x474 = -1;
	volatile uint16_t x475 = UINT16_MAX;
	volatile int16_t x476 = INT16_MIN;
	int32_t t95 = 183623;

    t95 = ((x473-x474)/(x475^x476));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x477 = 3;
	int64_t x478 = -1LL;
	int8_t x480 = INT8_MIN;

    t96 = ((x477-x478)/(x479^x480));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x481 = -1LL;
	int16_t x482 = -1;
	int16_t x483 = -3379;
	uint16_t x484 = 4190U;
	static volatile int64_t t97 = -14598LL;

    t97 = ((x481-x482)/(x483^x484));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x489 = INT16_MAX;
	int64_t x490 = -1LL;
	int32_t x491 = -2;
	uint64_t x492 = 207097707453696381LLU;

    t98 = ((x489-x490)/(x491^x492));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x493 = 17632130483798981LLU;
	int16_t x494 = INT16_MAX;
	int8_t x495 = 1;
	static volatile int16_t x496 = -14071;
	static volatile uint64_t t99 = 125567731LLU;

    t99 = ((x493-x494)/(x495^x496));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x497 = 3182U;
	int32_t x498 = INT32_MIN;
	int8_t x499 = INT8_MIN;
	volatile uint8_t x500 = UINT8_MAX;
	uint32_t t100 = 727126699U;

    t100 = ((x497-x498)/(x499^x500));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x503 = UINT16_MAX;
	int8_t x504 = INT8_MIN;
	static int64_t t101 = -456779232032LL;

    t101 = ((x501-x502)/(x503^x504));

    if (t101 != -141010748319876LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x505 = INT32_MIN;
	static int32_t x506 = -1;
	int8_t x507 = -1;
	int64_t x508 = INT64_MIN;
	volatile int64_t t102 = 495666067LL;

    t102 = ((x505-x506)/(x507^x508));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x509 = INT64_MAX;
	int32_t x510 = 1524469;
	uint32_t x511 = UINT32_MAX;
	uint64_t t103 = 42999LLU;

    t103 = ((x509-x510)/(x511^x512));

    if (t103 != 2148382199LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x514 = INT32_MIN;
	static volatile int16_t x516 = 1;
	int32_t t104 = 96;

    t104 = ((x513-x514)/(x515^x516));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x529 = 9644385424LLU;
	volatile int32_t x530 = INT32_MIN;
	volatile int32_t x531 = INT32_MAX;
	int64_t x532 = INT64_MIN;
	uint64_t t105 = 58164293493171359LLU;

    t105 = ((x529-x530)/(x531^x532));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x533 = -2;
	int16_t x534 = 0;
	uint64_t x535 = 47837111375309LLU;
	int16_t x536 = -3;
	volatile uint64_t t106 = 32357668815885341LLU;

    t106 = ((x533-x534)/(x535^x536));

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x537 = 7U;
	uint32_t x538 = UINT32_MAX;
	uint64_t x539 = 26594312840784248LLU;
	volatile int8_t x540 = INT8_MIN;
	volatile uint64_t t107 = 57409563797LLU;

    t107 = ((x537-x538)/(x539^x540));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x541 = INT16_MAX;
	int16_t x542 = INT16_MIN;
	int64_t x543 = -1LL;

    t108 = ((x541-x542)/(x543^x544));

    if (t108 != 4LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x545 = INT16_MIN;
	static int16_t x546 = INT16_MIN;
	uint8_t x547 = 108U;
	int32_t x548 = 12483838;
	static volatile int32_t t109 = 313924;

    t109 = ((x545-x546)/(x547^x548));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x549 = INT8_MIN;
	static volatile int64_t x550 = 0LL;
	int32_t x551 = INT32_MIN;
	int64_t x552 = -1LL;
	static int64_t t110 = 0LL;

    t110 = ((x549-x550)/(x551^x552));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x553 = INT64_MIN;
	int8_t x555 = -1;
	int8_t x556 = 30;
	volatile uint64_t t111 = 485029471567LLU;

    t111 = ((x553-x554)/(x555^x556));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x557 = 7351666U;
	uint8_t x558 = UINT8_MAX;
	int64_t x560 = INT64_MIN;
	int64_t t112 = -21883LL;

    t112 = ((x557-x558)/(x559^x560));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x561 = -1188;
	static uint64_t t113 = 75LLU;

    t113 = ((x561-x562)/(x563^x564));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x566 = -1;
	int16_t x567 = INT16_MAX;
	int8_t x568 = -1;
	uint32_t t114 = 1500665U;

    t114 = ((x565-x566)/(x567^x568));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x569 = -1;
	static int8_t x570 = INT8_MIN;
	int64_t x571 = INT64_MAX;
	volatile uint8_t x572 = 1U;
	static volatile int64_t t115 = -1074716711271LL;

    t115 = ((x569-x570)/(x571^x572));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x573 = INT16_MAX;
	int32_t x574 = INT32_MAX;
	volatile uint16_t x575 = UINT16_MAX;
	int32_t x576 = INT32_MIN;
	volatile int32_t t116 = 221940208;

    t116 = ((x573-x574)/(x575^x576));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x578 = INT32_MAX;
	uint64_t x579 = UINT64_MAX;
	volatile uint64_t x580 = 3442209757LLU;
	volatile uint64_t t117 = 1687889772638LLU;

    t117 = ((x577-x578)/(x579^x580));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x581 = INT32_MAX;
	static uint64_t x582 = 278LLU;
	int16_t x583 = 2;

    t118 = ((x581-x582)/(x583^x584));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x585 = INT8_MIN;
	static volatile int64_t x586 = -1LL;
	volatile int64_t x588 = INT64_MIN;
	int64_t t119 = -1298148656966325LL;

    t119 = ((x585-x586)/(x587^x588));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x589 = -60;
	int64_t x591 = -2604232LL;
	int8_t x592 = 0;

    t120 = ((x589-x590)/(x591^x592));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x594 = INT64_MIN;
	uint16_t x595 = UINT16_MAX;
	volatile uint64_t t121 = 18721LLU;

    t121 = ((x593-x594)/(x595^x596));

    if (t121 != 282356539530LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x597 = 773516U;
	static uint8_t x599 = 0U;
	int32_t x600 = 9437;
	uint32_t t122 = 872781U;

    t122 = ((x597-x598)/(x599^x600));

    if (t122 != 82U) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x601 = -5;
	volatile int16_t x602 = INT16_MIN;
	int16_t x603 = 12653;
	int16_t x604 = INT16_MAX;

    t123 = ((x601-x602)/(x603^x604));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x610 = -1;
	int32_t x611 = INT32_MIN;
	static int64_t x612 = INT64_MIN;
	static volatile int64_t t124 = 3LL;

    t124 = ((x609-x610)/(x611^x612));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x613 = INT8_MAX;
	uint16_t x614 = 118U;
	int16_t x615 = 3;
	uint32_t x616 = 35512U;

    t125 = ((x613-x614)/(x615^x616));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x621 = INT64_MIN;
	volatile int8_t x622 = -11;
	static volatile uint64_t x623 = 146936381220742LLU;
	int64_t x624 = INT64_MIN;
	static volatile uint64_t t126 = 3471967LLU;

    t126 = ((x621-x622)/(x623^x624));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x626 = 12666;
	int16_t x627 = -609;
	volatile int8_t x628 = -63;
	volatile int64_t t127 = 6579293LL;

    t127 = ((x625-x626)/(x627^x628));

    if (t127 != 15220085869397298LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x629 = INT16_MIN;
	static int16_t x630 = 15522;
	static int32_t x631 = INT32_MAX;
	volatile int16_t x632 = INT16_MAX;
	int32_t t128 = 421675579;

    t128 = ((x629-x630)/(x631^x632));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x633 = 2810LL;
	uint16_t x635 = 5992U;
	int64_t x636 = INT64_MIN;
	int64_t t129 = -44442LL;

    t129 = ((x633-x634)/(x635^x636));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x646 = 5532LLU;

    t130 = ((x645-x646)/(x647^x648));

    if (t130 != 41697LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x649 = -1LL;
	int16_t x650 = 2;
	uint32_t x651 = 346398U;
	uint16_t x652 = 28U;

    t131 = ((x649-x650)/(x651^x652));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x653 = -1LL;
	uint16_t x654 = UINT16_MAX;
	static volatile int64_t t132 = -908890897086LL;

    t132 = ((x653-x654)/(x655^x656));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x657 = -1LL;
	static int64_t x658 = -5784714942691LL;
	int64_t x659 = 30LL;
	int16_t x660 = -1;
	static volatile int64_t t133 = 238546400157LL;

    t133 = ((x657-x658)/(x659^x660));

    if (t133 != -186603707828LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x665 = 1;
	int32_t x666 = -500368;
	int16_t x668 = -7349;
	static volatile int64_t t134 = 1004310292LL;

    t134 = ((x665-x666)/(x667^x668));

    if (t134 != 68LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x669 = INT16_MAX;
	uint16_t x670 = 40U;
	uint16_t x671 = UINT16_MAX;
	int64_t x672 = INT64_MAX;
	int64_t t135 = -9LL;

    t135 = ((x669-x670)/(x671^x672));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x673 = UINT16_MAX;
	volatile int16_t x674 = -325;
	uint16_t x675 = UINT16_MAX;
	int8_t x676 = INT8_MIN;
	int32_t t136 = 3583922;

    t136 = ((x673-x674)/(x675^x676));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x677 = 2811415;
	uint32_t x678 = 826380924U;
	uint32_t x679 = UINT32_MAX;

    t137 = ((x677-x678)/(x679^x680));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x681 = 26;
	uint64_t x682 = 147070721LLU;
	volatile uint32_t x683 = 14671U;
	uint16_t x684 = 2572U;
	uint64_t t138 = 2796217791928865809LLU;

    t138 = ((x681-x682)/(x683^x684));

    if (t138 != 1405680414048805LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x693 = -56;
	uint8_t x695 = UINT8_MAX;
	int16_t x696 = -504;
	volatile int32_t t139 = 108;

    t139 = ((x693-x694)/(x695^x696));

    if (t139 != 123) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x697 = 1;
	volatile int32_t x698 = -1;
	int32_t x700 = INT32_MIN;
	volatile uint64_t t140 = 5998505550761560513LLU;

    t140 = ((x697-x698)/(x699^x700));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x707 = INT64_MIN;
	volatile int8_t x708 = INT8_MIN;
	static volatile int64_t t141 = 1LL;

    t141 = ((x705-x706)/(x707^x708));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x721 = 232692940;
	static uint64_t x722 = 2998943784LLU;
	int8_t x723 = INT8_MAX;
	int64_t x724 = INT64_MIN;
	volatile uint64_t t142 = 64127549946335LLU;

    t142 = ((x721-x722)/(x723^x724));

    if (t142 != 1LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x725 = UINT8_MAX;
	uint16_t x726 = 8U;
	volatile uint32_t x727 = UINT32_MAX;
	int16_t x728 = INT16_MIN;
	uint32_t t143 = 13637U;

    t143 = ((x725-x726)/(x727^x728));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint8_t x730 = UINT8_MAX;
	int16_t x731 = -274;
	uint16_t x732 = 482U;
	int32_t t144 = -732929;

    t144 = ((x729-x730)/(x731^x732));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x737 = 2;
	int16_t x738 = INT16_MIN;
	volatile int8_t x739 = -1;
	uint16_t x740 = UINT16_MAX;
	volatile int32_t t145 = 13712;

    t145 = ((x737-x738)/(x739^x740));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x741 = INT32_MIN;
	int16_t x742 = -90;
	volatile uint32_t x743 = 28827107U;
	int32_t x744 = 79;
	uint32_t t146 = 30U;

    t146 = ((x741-x742)/(x743^x744));

    if (t146 != 74U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x746 = -1;
	uint8_t x747 = 2U;
	static uint64_t t147 = 7934795390122832993LLU;

    t147 = ((x745-x746)/(x747^x748));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x750 = 261308;
	int8_t x751 = INT8_MAX;
	uint32_t x752 = UINT32_MAX;

    t148 = ((x749-x750)/(x751^x752));

    if (t148 != 2147483711LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x757 = INT16_MIN;
	int64_t x758 = -1LL;
	static int64_t x759 = -1LL;
	volatile int64_t t149 = 11312784093139612LL;

    t149 = ((x757-x758)/(x759^x760));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x761 = INT64_MIN;
	int8_t x762 = INT8_MIN;
	static int32_t x764 = INT32_MIN;
	volatile int64_t t150 = -16535943225612LL;

    t150 = ((x761-x762)/(x763^x764));

    if (t150 != -4294967552LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x771 = INT8_MIN;
	int32_t x772 = 1003;
	static volatile uint32_t t151 = 23240U;

    t151 = ((x769-x770)/(x771^x772));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x773 = 7332LL;
	int32_t x774 = INT32_MAX;
	int32_t x775 = INT32_MIN;
	uint64_t t152 = 2LLU;

    t152 = ((x773-x774)/(x775^x776));

    if (t152 != 8589934595LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x777 = INT8_MIN;
	int8_t x778 = INT8_MAX;
	volatile int16_t x780 = INT16_MIN;

    t153 = ((x777-x778)/(x779^x780));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x781 = -476LL;
	static volatile int32_t x782 = 38;
	int8_t x783 = INT8_MIN;
	int64_t t154 = 1200LL;

    t154 = ((x781-x782)/(x783^x784));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x786 = INT32_MIN;
	uint16_t x787 = 0U;
	uint16_t x788 = 14U;
	int64_t t155 = 16442943178354LL;

    t155 = ((x785-x786)/(x787^x788));

    if (t155 != 153396315LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x789 = INT32_MIN;
	int32_t x790 = -264;
	int8_t x791 = 2;
	volatile int64_t x792 = -1LL;
	static int64_t t156 = -8842LL;

    t156 = ((x789-x790)/(x791^x792));

    if (t156 != 715827794LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint64_t x798 = UINT64_MAX;
	volatile int16_t x799 = -317;
	uint64_t x800 = UINT64_MAX;
	uint64_t t157 = 17853216206342648LLU;

    t157 = ((x797-x798)/(x799^x800));

    if (t157 != 5LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x803 = 6791950596LLU;
	int64_t x804 = -1LL;

    t158 = ((x801-x802)/(x803^x804));

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x805 = 2079082U;
	uint16_t x807 = UINT16_MAX;
	static int32_t x808 = -11706797;

    t159 = ((x805-x806)/(x807^x808));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x809 = 21654U;
	int32_t x810 = 43501885;
	volatile uint16_t x811 = 371U;
	static int8_t x812 = INT8_MIN;

    t160 = ((x809-x810)/(x811^x812));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x813 = -13;
	int64_t x816 = INT64_MIN;
	volatile int64_t t161 = -683LL;

    t161 = ((x813-x814)/(x815^x816));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x818 = INT8_MIN;
	uint64_t x819 = 109302LLU;
	uint64_t t162 = 1993LLU;

    t162 = ((x817-x818)/(x819^x820));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x821 = 0;
	volatile int16_t x822 = INT16_MAX;
	static int64_t x823 = INT64_MIN;
	int64_t t163 = -147906841580LL;

    t163 = ((x821-x822)/(x823^x824));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x825 = 3142158771LLU;
	uint64_t x826 = 6734061411LLU;
	int16_t x827 = INT16_MIN;
	int64_t x828 = INT64_MAX;
	uint64_t t164 = 6235918298040619LLU;

    t164 = ((x825-x826)/(x827^x828));

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x829 = INT16_MAX;
	uint8_t x830 = 19U;
	int32_t x832 = INT32_MIN;
	volatile int32_t t165 = -1;

    t165 = ((x829-x830)/(x831^x832));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x833 = -1;
	int32_t x835 = INT32_MIN;
	static volatile uint32_t x836 = UINT32_MAX;
	uint32_t t166 = 159728U;

    t166 = ((x833-x834)/(x835^x836));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x837 = INT8_MIN;
	int64_t x840 = -9389869058077LL;
	static int64_t t167 = -15166721843LL;

    t167 = ((x837-x838)/(x839^x840));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x843 = -1307597397427LL;
	uint8_t x844 = UINT8_MAX;
	volatile int64_t t168 = -61655LL;

    t168 = ((x841-x842)/(x843^x844));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x845 = INT32_MIN;
	uint64_t x846 = UINT64_MAX;
	volatile uint64_t x847 = 15LLU;
	int8_t x848 = -16;
	volatile uint64_t t169 = 1184353776485881260LLU;

    t169 = ((x845-x846)/(x847^x848));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x849 = 29U;
	int16_t x850 = INT16_MAX;
	int8_t x852 = INT8_MAX;
	volatile int32_t t170 = -193634876;

    t170 = ((x849-x850)/(x851^x852));

    if (t170 != 32738) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x853 = 5957U;
	int32_t x854 = INT32_MIN;
	int32_t x855 = INT32_MIN;
	uint16_t x856 = 66U;

    t171 = ((x853-x854)/(x855^x856));

    if (t171 != 1U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x857 = INT64_MIN;
	volatile int32_t x858 = -1;
	volatile uint8_t x859 = UINT8_MAX;
	volatile int64_t x860 = -1LL;
	int64_t t172 = 39633895269910445LL;

    t172 = ((x857-x858)/(x859^x860));

    if (t172 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x861 = 199LL;
	int16_t x862 = -1;
	int32_t x863 = INT32_MIN;
	uint32_t x864 = 461U;

    t173 = ((x861-x862)/(x863^x864));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x865 = UINT16_MAX;
	uint32_t x866 = 0U;
	static int16_t x867 = INT16_MIN;
	int32_t x868 = INT32_MAX;

    t174 = ((x865-x866)/(x867^x868));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x869 = 9U;
	static uint16_t x871 = UINT16_MAX;
	uint64_t x872 = UINT64_MAX;
	volatile uint64_t t175 = 39845974378226028LLU;

    t175 = ((x869-x870)/(x871^x872));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x873 = INT32_MIN;
	int16_t x874 = -1;
	uint32_t x875 = 52939U;
	volatile int64_t t176 = 1101065657338805023LL;

    t176 = ((x873-x874)/(x875^x876));

    if (t176 != 40564LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x877 = UINT64_MAX;
	volatile int32_t x878 = 156454;
	volatile int16_t x879 = 4491;
	int64_t x880 = INT64_MIN;
	static uint64_t t177 = 69639816299LLU;

    t177 = ((x877-x878)/(x879^x880));

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x883 = 91638744U;
	volatile uint32_t x884 = UINT32_MAX;

    t178 = ((x881-x882)/(x883^x884));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x889 = -1;
	int32_t x890 = INT32_MIN;
	volatile int32_t t179 = -259776171;

    t179 = ((x889-x890)/(x891^x892));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x893 = INT32_MAX;
	int64_t x894 = -3947115365LL;
	int64_t x895 = -1LL;
	volatile uint32_t x896 = UINT32_MAX;
	int64_t t180 = 5539101259LL;

    t180 = ((x893-x894)/(x895^x896));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x898 = 65U;
	int64_t x899 = -50219543320LL;
	volatile int8_t x900 = INT8_MIN;
	uint64_t t181 = 235555122152188888LLU;

    t181 = ((x897-x898)/(x899^x900));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x902 = 15;

    t182 = ((x901-x902)/(x903^x904));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x905 = INT32_MIN;
	volatile int32_t x906 = -1;
	volatile uint64_t x907 = 68032LLU;

    t183 = ((x905-x906)/(x907^x908));

    if (t183 != 271064377346510LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x909 = UINT16_MAX;
	static uint64_t x910 = 2606481866LLU;
	int8_t x911 = 23;
	volatile int16_t x912 = 47;

    t184 = ((x909-x910)/(x911^x912));

    if (t184 != 329406144126841701LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x913 = 6021702076175398936LLU;
	volatile int32_t x914 = INT32_MIN;
	int16_t x915 = INT16_MAX;
	static int16_t x916 = -8;
	uint64_t t185 = 3848453647LLU;

    t185 = ((x913-x914)/(x915^x916));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x917 = INT8_MAX;
	int16_t x919 = INT16_MAX;
	volatile int32_t t186 = 2973;

    t186 = ((x917-x918)/(x919^x920));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x921 = 1U;
	uint8_t x922 = UINT8_MAX;
	int32_t x923 = INT32_MAX;
	int64_t x924 = INT64_MAX;
	int64_t t187 = -19646118906775833LL;

    t187 = ((x921-x922)/(x923^x924));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x925 = 4363516940414572LL;
	static int64_t x926 = -510439LL;
	int16_t x927 = 0;
	int32_t x928 = INT32_MIN;
	int64_t t188 = -63658LL;

    t188 = ((x925-x926)/(x927^x928));

    if (t188 != -2031920LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x933 = 14065267762953665LLU;
	uint16_t x934 = UINT16_MAX;
	int64_t x935 = -2027474574005984LL;
	static volatile int8_t x936 = 49;
	volatile uint64_t t189 = 155365422503451349LLU;

    t189 = ((x933-x934)/(x935^x936));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x937 = -1;
	int8_t x938 = 0;
	uint32_t x939 = 7596U;
	int8_t x940 = -5;
	static volatile uint32_t t190 = 14955U;

    t190 = ((x937-x938)/(x939^x940));

    if (t190 != 1U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x941 = -3;
	int8_t x942 = -1;
	uint16_t x943 = UINT16_MAX;
	static uint64_t x944 = 1036560608497LLU;
	volatile uint64_t t191 = 103792432032427678LLU;

    t191 = ((x941-x942)/(x943^x944));

    if (t191 != 17796107LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x945 = INT64_MIN;
	static int8_t x946 = INT8_MIN;
	int32_t x947 = INT32_MIN;
	volatile int64_t t192 = -105107857789468533LL;

    t192 = ((x945-x946)/(x947^x948));

    if (t192 != 4295098369LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x949 = 6619U;
	uint16_t x950 = UINT16_MAX;
	static uint8_t x951 = UINT8_MAX;
	uint64_t x952 = 791152610749LLU;

    t193 = ((x949-x950)/(x951^x952));

    if (t193 != 23316290LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x953 = 33711559U;
	uint8_t x954 = 4U;
	int8_t x955 = 2;
	volatile int64_t t194 = 29885166116401LL;

    t194 = ((x953-x954)/(x955^x956));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x957 = 269927U;
	uint32_t x958 = 815U;
	volatile uint32_t x959 = UINT32_MAX;
	volatile uint32_t t195 = 126U;

    t195 = ((x957-x958)/(x959^x960));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x961 = UINT16_MAX;
	volatile uint64_t x962 = 228084151656LLU;
	uint16_t x963 = 110U;
	uint8_t x964 = 3U;
	static volatile uint64_t t196 = 2959489090LLU;

    t196 = ((x961-x962)/(x963^x964));

    if (t196 != 169236182069958399LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x965 = INT8_MAX;
	int32_t x966 = 31668814;
	static volatile int16_t x967 = INT16_MIN;
	uint16_t x968 = 32021U;

    t197 = ((x965-x966)/(x967^x968));

    if (t197 != 42394) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x970 = 434454738754LLU;
	volatile int16_t x971 = INT16_MIN;
	int64_t x972 = -8373181297251913LL;

    t198 = ((x969-x970)/(x971^x972));

    if (t198 != 2203LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x973 = UINT32_MAX;
	volatile int8_t x974 = INT8_MIN;
	int8_t x975 = -25;
	int64_t x976 = INT64_MAX;
	static int64_t t199 = 3LL;

    t199 = ((x973-x974)/(x975^x976));

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

