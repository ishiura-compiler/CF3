
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

static uint8_t x3 = 2U;
uint32_t x4 = 1U;
int64_t x5 = -1LL;
int32_t x7 = INT32_MIN;
uint64_t x8 = 395782440055381LLU;
uint32_t x13 = 5221118U;
volatile int16_t x14 = INT16_MAX;
uint8_t x16 = 2U;
int64_t x28 = 31551841319LL;
int32_t x33 = 131486338;
int64_t x36 = INT64_MAX;
uint16_t x42 = 29296U;
uint64_t x45 = UINT64_MAX;
uint16_t x48 = 32U;
static int64_t x52 = -11LL;
uint8_t x55 = UINT8_MAX;
static volatile int64_t x59 = -98326815LL;
int64_t x60 = INT64_MAX;
int32_t x62 = INT32_MAX;
static int8_t x63 = INT8_MIN;
int32_t t14 = 6397;
volatile int16_t x69 = INT16_MIN;
uint32_t x71 = 5U;
uint32_t x73 = 590764286U;
static uint64_t x76 = 53152185518259802LLU;
static uint8_t x87 = UINT8_MAX;
uint32_t x93 = 74981515U;
int8_t x95 = -3;
int64_t x101 = -25305993764LL;
volatile int32_t t24 = 1061639815;
int8_t x118 = -1;
int8_t x120 = INT8_MIN;
uint8_t x125 = 6U;
int64_t x128 = INT64_MAX;
int16_t x129 = INT16_MIN;
int32_t t29 = 0;
uint64_t x140 = 494753292LLU;
int32_t t32 = -171024;
static int16_t x149 = INT16_MIN;
int64_t x171 = INT64_MIN;
static int64_t x173 = -1LL;
int64_t x175 = -449496LL;
static uint64_t x176 = 381410LLU;
volatile uint64_t t38 = 27615880819088947LLU;
volatile int32_t x178 = INT32_MAX;
static int64_t x187 = -140336LL;
static int16_t x191 = INT16_MIN;
volatile int16_t x192 = INT16_MIN;
int64_t x202 = INT64_MIN;
int8_t x209 = 13;
int32_t x212 = INT32_MAX;
static int8_t x224 = -1;
static uint32_t x228 = UINT32_MAX;
uint32_t x242 = 1072608U;
volatile uint64_t t48 = 3983878585897592192LLU;
int64_t x255 = -1LL;
volatile int32_t t51 = -1591;
volatile int32_t x263 = INT32_MIN;
int32_t x265 = -1;
static int32_t t54 = 158;
uint16_t x272 = 14U;
static int16_t x278 = INT16_MAX;
static int64_t x282 = INT64_MAX;
int32_t t58 = 309843659;
int8_t x285 = -1;
int32_t x290 = INT32_MAX;
int32_t t60 = -349;
int64_t x304 = -1LL;
volatile int64_t t62 = -445377260334521LL;
static uint64_t x306 = 1007LLU;
uint32_t x308 = 3022065U;
int16_t x325 = INT16_MIN;
uint8_t x328 = 1U;
volatile int32_t t66 = -15132;
volatile uint32_t t67 = 1U;
uint16_t x333 = 20U;
volatile int16_t x336 = INT16_MAX;
static int32_t t68 = 1;
volatile int32_t t70 = -11436728;
static int16_t x350 = -1;
volatile int32_t t72 = -11839845;
int8_t x356 = INT8_MAX;
static uint32_t x362 = 1913622U;
uint16_t x377 = UINT16_MAX;
static int8_t x378 = INT8_MIN;
volatile int32_t x379 = INT32_MIN;
int16_t x386 = INT16_MIN;
uint8_t x387 = 0U;
static int8_t x389 = 0;
int8_t x394 = -1;
volatile int8_t x401 = INT8_MIN;
uint8_t x403 = 25U;
uint32_t x408 = 317U;
uint8_t x412 = 4U;
static int32_t x415 = -1;
int64_t x421 = INT64_MAX;
volatile int32_t x424 = INT32_MAX;
uint16_t x438 = UINT16_MAX;
int16_t x439 = INT16_MIN;
static uint32_t t91 = 645050U;
static uint8_t x456 = UINT8_MAX;
volatile uint32_t x464 = 64614U;
int64_t x478 = 14LL;
volatile int16_t x482 = 15639;
volatile int32_t x484 = -54;
static int32_t t99 = -159330;
int16_t x486 = 0;
int8_t x487 = -45;
int32_t t100 = 7;
static volatile int32_t t101 = -460942841;
int32_t t103 = 875;
static volatile int64_t x502 = 21523643028378LL;
static int8_t x511 = INT8_MAX;
static volatile uint64_t x516 = 26771042496179238LLU;
static volatile uint64_t t107 = 936508LLU;
int16_t x517 = 14592;
uint32_t x520 = 59U;
int64_t t109 = 14553390723LL;
volatile uint8_t x529 = 0U;
int8_t x536 = INT8_MIN;
static uint8_t x537 = UINT8_MAX;
uint64_t x541 = 782243LLU;
int16_t x546 = INT16_MAX;
int16_t x554 = INT16_MAX;
static volatile int64_t x558 = -12668940050023185LL;
volatile int64_t t117 = 2225330LL;
uint8_t x563 = UINT8_MAX;
static volatile int32_t x566 = INT32_MIN;
int8_t x567 = -6;
int32_t t119 = 72647653;
static int32_t x573 = -14321868;
static uint32_t x578 = UINT32_MAX;
uint16_t x600 = 175U;
int32_t x605 = -1;
int8_t x611 = INT8_MIN;
static uint32_t x616 = 94888U;
int32_t x618 = INT32_MAX;
volatile uint16_t x622 = UINT16_MAX;
uint8_t x623 = 9U;
int8_t x624 = INT8_MAX;
int32_t x626 = -218842420;
static int8_t x627 = -23;
static int32_t x633 = INT32_MAX;
static volatile uint32_t x634 = 10U;
uint32_t x636 = 160635U;
int64_t x639 = 18LL;
uint8_t x652 = 8U;
static volatile int16_t x662 = 1;
static uint32_t x664 = 2508566U;
static uint8_t x677 = UINT8_MAX;
static int32_t x678 = INT32_MAX;
volatile int32_t t148 = 98298;
uint8_t x690 = 2U;
uint64_t x696 = 224925LLU;
int8_t x697 = INT8_MIN;
static int64_t t151 = 58929LL;
static uint8_t x707 = 0U;
static volatile int16_t x719 = 163;
int8_t x720 = INT8_MIN;
int64_t x724 = INT64_MAX;
volatile int32_t t159 = -4270920;
volatile int16_t x735 = 228;
int64_t x736 = 25728514461874687LL;
int64_t t160 = -40873045209898854LL;
int32_t x751 = 23;
int8_t x752 = INT8_MAX;
int8_t x754 = INT8_MIN;
int16_t x758 = -1;
uint16_t x759 = UINT16_MAX;
int32_t x760 = -296729362;
int8_t x762 = -1;
volatile int32_t x764 = INT32_MAX;
volatile int32_t t166 = 1071460167;
int8_t x769 = 0;
int64_t x797 = -1LL;
int64_t x804 = INT64_MAX;
uint64_t x810 = UINT64_MAX;
int32_t x811 = INT32_MIN;
volatile int16_t x816 = INT16_MIN;
volatile int64_t x817 = 32652312802224LL;
int64_t x819 = -1LL;
int32_t t177 = -663508;
int8_t x827 = -1;
int32_t t180 = 4297710;
int32_t x837 = 192;
volatile uint64_t x841 = 8880372425240000773LLU;
static int64_t x842 = -1LL;
int32_t x844 = -4365;
static int64_t x851 = INT64_MIN;
uint64_t x854 = 3219031776391531588LLU;
static uint32_t x857 = 6623U;
int8_t x861 = -1;
volatile int8_t x885 = INT8_MIN;
volatile int32_t t192 = -22401878;
int32_t t193 = 67;
int16_t x894 = INT16_MIN;
int64_t x895 = INT64_MIN;
int8_t x904 = -10;
static uint16_t x907 = UINT16_MAX;
uint64_t x908 = 3873LLU;
int16_t x909 = -311;
volatile int32_t t198 = 113;


void f0(void) {
    	uint32_t x1 = 241U;
	static int16_t x2 = 26;
	static uint32_t t0 = 1970U;

    t0 = (((x1>x2)<=x3)-x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MIN;
	uint64_t t1 = 9993851374LLU;

    t1 = (((x5>x6)<=x7)-x8);

    if (t1 != 18446348291269496235LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 0U;
	int16_t x10 = INT16_MIN;
	int64_t x11 = INT64_MAX;
	int32_t x12 = -14119548;
	static int32_t t2 = -11;

    t2 = (((x9>x10)<=x11)-x12);

    if (t2 != 14119549) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x15 = -1;
	int32_t t3 = -70703;

    t3 = (((x13>x14)<=x15)-x16);

    if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 28916U;
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	uint32_t x20 = 291002233U;
	volatile uint32_t t4 = 1309U;

    t4 = (((x17>x18)<=x19)-x20);

    if (t4 != 4003965063U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x25 = 115648539683103622LLU;
	int8_t x26 = INT8_MAX;
	int64_t x27 = -1LL;
	volatile int64_t t5 = 966263632280LL;

    t5 = (((x25>x26)<=x27)-x28);

    if (t5 != -31551841319LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x29 = -1LL;
	uint16_t x30 = 1U;
	static uint8_t x31 = UINT8_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = -160;

    t6 = (((x29>x30)<=x31)-x32);

    if (t6 != 32769) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x34 = -2;
	int32_t x35 = INT32_MIN;
	int64_t t7 = 23000267977094293LL;

    t7 = (((x33>x34)<=x35)-x36);

    if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x37 = INT8_MAX;
	int16_t x38 = INT16_MAX;
	int16_t x39 = -3;
	uint8_t x40 = 60U;
	volatile int32_t t8 = -5352530;

    t8 = (((x37>x38)<=x39)-x40);

    if (t8 != -60) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = INT64_MIN;
	static int16_t x43 = INT16_MIN;
	static int16_t x44 = -4;
	static int32_t t9 = -117;

    t9 = (((x41>x42)<=x43)-x44);

    if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x46 = UINT32_MAX;
	int16_t x47 = INT16_MAX;
	int32_t t10 = -44438;

    t10 = (((x45>x46)<=x47)-x48);

    if (t10 != -31) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = 73U;
	int64_t x50 = -396110217LL;
	int16_t x51 = -4022;
	static volatile int64_t t11 = -68425LL;

    t11 = (((x49>x50)<=x51)-x52);

    if (t11 != 11LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x53 = -1;
	static int64_t x54 = INT64_MAX;
	volatile uint8_t x56 = UINT8_MAX;
	volatile int32_t t12 = 56444;

    t12 = (((x53>x54)<=x55)-x56);

    if (t12 != -254) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	static int16_t x58 = -1;
	int64_t t13 = 5069LL;

    t13 = (((x57>x58)<=x59)-x60);

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x61 = 1U;
	int16_t x64 = -1;

    t14 = (((x61>x62)<=x63)-x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x65 = 15286;
	static uint16_t x66 = UINT16_MAX;
	int32_t x67 = -1;
	int8_t x68 = 18;
	static volatile int32_t t15 = 28137;

    t15 = (((x65>x66)<=x67)-x68);

    if (t15 != -18) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x70 = UINT16_MAX;
	int16_t x72 = INT16_MIN;
	int32_t t16 = 2372366;

    t16 = (((x69>x70)<=x71)-x72);

    if (t16 != 32769) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x74 = INT8_MIN;
	uint64_t x75 = 692576LLU;
	volatile uint64_t t17 = 271506113LLU;

    t17 = (((x73>x74)<=x75)-x76);

    if (t17 != 18393591888191291815LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = 113;
	volatile uint64_t x82 = UINT64_MAX;
	static uint16_t x83 = 8U;
	int8_t x84 = INT8_MAX;
	volatile int32_t t18 = -1687;

    t18 = (((x81>x82)<=x83)-x84);

    if (t18 != -126) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x85 = 827U;
	static int64_t x86 = INT64_MIN;
	static uint32_t x88 = 212U;
	volatile uint32_t t19 = 1392U;

    t19 = (((x85>x86)<=x87)-x88);

    if (t19 != 4294967085U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x94 = 26U;
	static volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t20 = 204;

    t20 = (((x93>x94)<=x95)-x96);

    if (t20 != -65535) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x102 = 31690U;
	static volatile int8_t x103 = INT8_MAX;
	static int16_t x104 = -2386;
	static volatile int32_t t21 = -10;

    t21 = (((x101>x102)<=x103)-x104);

    if (t21 != 2387) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x105 = INT32_MIN;
	uint16_t x106 = 553U;
	int64_t x107 = INT64_MIN;
	int8_t x108 = 0;
	int32_t t22 = 457;

    t22 = (((x105>x106)<=x107)-x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x109 = INT16_MAX;
	static int16_t x110 = -13;
	int64_t x111 = -1LL;
	uint8_t x112 = 15U;
	int32_t t23 = 3;

    t23 = (((x109>x110)<=x111)-x112);

    if (t23 != -15) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = -247;
	uint64_t x114 = UINT64_MAX;
	static int64_t x115 = 4028945790LL;
	int16_t x116 = -1;

    t24 = (((x113>x114)<=x115)-x116);

    if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x117 = -1;
	uint64_t x119 = UINT64_MAX;
	volatile int32_t t25 = -5;

    t25 = (((x117>x118)<=x119)-x120);

    if (t25 != 129) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x121 = INT16_MAX;
	int32_t x122 = INT32_MIN;
	uint8_t x123 = 0U;
	int16_t x124 = -1;
	volatile int32_t t26 = -8;

    t26 = (((x121>x122)<=x123)-x124);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x126 = -42;
	static int32_t x127 = INT32_MAX;
	static volatile int64_t t27 = -1339578836322LL;

    t27 = (((x125>x126)<=x127)-x128);

    if (t27 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x130 = 25575;
	uint8_t x131 = 23U;
	int32_t x132 = -7515588;
	volatile int32_t t28 = -9;

    t28 = (((x129>x130)<=x131)-x132);

    if (t28 != 7515589) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = -40;
	uint8_t x134 = 1U;
	int8_t x135 = INT8_MIN;
	volatile int32_t x136 = -1;

    t29 = (((x133>x134)<=x135)-x136);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x137 = INT8_MIN;
	uint8_t x138 = 3U;
	static int32_t x139 = INT32_MIN;
	volatile uint64_t t30 = 5661795LLU;

    t30 = (((x137>x138)<=x139)-x140);

    if (t30 != 18446744073214798324LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x141 = 101U;
	int8_t x142 = INT8_MIN;
	static volatile int8_t x143 = INT8_MIN;
	int64_t x144 = -1LL;
	volatile int64_t t31 = -30841LL;

    t31 = (((x141>x142)<=x143)-x144);

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x145 = INT8_MAX;
	uint16_t x146 = 238U;
	int64_t x147 = 13397742025LL;
	static int16_t x148 = INT16_MAX;

    t32 = (((x145>x146)<=x147)-x148);

    if (t32 != -32766) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x150 = -1;
	uint64_t x151 = UINT64_MAX;
	int32_t x152 = 9;
	int32_t t33 = 1396;

    t33 = (((x149>x150)<=x151)-x152);

    if (t33 != -8) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x153 = -1;
	volatile int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MIN;
	uint16_t x156 = 147U;
	volatile int32_t t34 = 60446912;

    t34 = (((x153>x154)<=x155)-x156);

    if (t34 != -147) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x157 = 6U;
	uint16_t x158 = 0U;
	int64_t x159 = INT64_MIN;
	int16_t x160 = 3603;
	volatile int32_t t35 = 41154946;

    t35 = (((x157>x158)<=x159)-x160);

    if (t35 != -3603) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x161 = -24;
	static volatile int8_t x162 = INT8_MIN;
	static uint64_t x163 = 13LLU;
	uint16_t x164 = 1156U;
	int32_t t36 = -5320840;

    t36 = (((x161>x162)<=x163)-x164);

    if (t36 != -1155) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x169 = 3088LLU;
	volatile int32_t x170 = INT32_MIN;
	static int8_t x172 = INT8_MIN;
	int32_t t37 = -442;

    t37 = (((x169>x170)<=x171)-x172);

    if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x174 = -84;

    t38 = (((x173>x174)<=x175)-x176);

    if (t38 != 18446744073709170206LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x177 = INT8_MIN;
	int64_t x179 = -10046130861554LL;
	int8_t x180 = 0;
	static volatile int32_t t39 = 2036;

    t39 = (((x177>x178)<=x179)-x180);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x185 = UINT8_MAX;
	int64_t x186 = -1LL;
	static volatile uint32_t x188 = 944684982U;
	uint32_t t40 = 1U;

    t40 = (((x185>x186)<=x187)-x188);

    if (t40 != 3350282314U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x189 = INT32_MAX;
	uint32_t x190 = UINT32_MAX;
	int32_t t41 = -78;

    t41 = (((x189>x190)<=x191)-x192);

    if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x193 = 1U;
	int32_t x194 = 6801;
	int32_t x195 = 3;
	int16_t x196 = -1;
	int32_t t42 = 3487891;

    t42 = (((x193>x194)<=x195)-x196);

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x197 = INT32_MIN;
	int32_t x198 = INT32_MIN;
	int8_t x199 = -2;
	int16_t x200 = INT16_MIN;
	volatile int32_t t43 = -49;

    t43 = (((x197>x198)<=x199)-x200);

    if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = -10081;
	static uint8_t x203 = 24U;
	volatile uint16_t x204 = UINT16_MAX;
	int32_t t44 = 196;

    t44 = (((x201>x202)<=x203)-x204);

    if (t44 != -65534) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x210 = INT32_MIN;
	int32_t x211 = 12;
	static int32_t t45 = -549588994;

    t45 = (((x209>x210)<=x211)-x212);

    if (t45 != -2147483646) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x221 = INT8_MIN;
	volatile int64_t x222 = -176057002LL;
	int32_t x223 = INT32_MIN;
	volatile int32_t t46 = 0;

    t46 = (((x221>x222)<=x223)-x224);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x225 = 1736LLU;
	int64_t x226 = INT64_MIN;
	uint8_t x227 = UINT8_MAX;
	volatile uint32_t t47 = 214U;

    t47 = (((x225>x226)<=x227)-x228);

    if (t47 != 2U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x241 = -1;
	int32_t x243 = INT32_MIN;
	volatile uint64_t x244 = 10LLU;

    t48 = (((x241>x242)<=x243)-x244);

    if (t48 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x245 = INT16_MIN;
	int32_t x246 = INT32_MIN;
	uint16_t x247 = 3076U;
	uint16_t x248 = 30850U;
	int32_t t49 = -362570;

    t49 = (((x245>x246)<=x247)-x248);

    if (t49 != -30849) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x249 = 2U;
	static int64_t x250 = INT64_MAX;
	int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MAX;
	volatile int32_t t50 = 8706601;

    t50 = (((x249>x250)<=x251)-x252);

    if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x253 = INT64_MIN;
	uint64_t x254 = 21614113483609657LLU;
	static int16_t x256 = -1;

    t51 = (((x253>x254)<=x255)-x256);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x257 = 138153265458054LL;
	static int32_t x258 = INT32_MAX;
	int32_t x259 = -1363;
	static uint64_t x260 = 62445526LLU;
	static volatile uint64_t t52 = 6538779178302LLU;

    t52 = (((x257>x258)<=x259)-x260);

    if (t52 != 18446744073647106090LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x261 = 3118U;
	int8_t x262 = 3;
	static int64_t x264 = 229244LL;
	volatile int64_t t53 = -610LL;

    t53 = (((x261>x262)<=x263)-x264);

    if (t53 != -229244LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MAX;
	int8_t x268 = 0;

    t54 = (((x265>x266)<=x267)-x268);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x269 = -1;
	uint32_t x270 = 6818U;
	static uint32_t x271 = UINT32_MAX;
	int32_t t55 = 267573;

    t55 = (((x269>x270)<=x271)-x272);

    if (t55 != -13) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x273 = 15LLU;
	int32_t x274 = -1;
	static uint16_t x275 = UINT16_MAX;
	uint16_t x276 = 3813U;
	volatile int32_t t56 = 0;

    t56 = (((x273>x274)<=x275)-x276);

    if (t56 != -3812) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x277 = INT32_MAX;
	volatile int8_t x279 = 1;
	uint64_t x280 = 20LLU;
	volatile uint64_t t57 = 1532LLU;

    t57 = (((x277>x278)<=x279)-x280);

    if (t57 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x281 = 15LL;
	int32_t x283 = -292732;
	int16_t x284 = INT16_MAX;

    t58 = (((x281>x282)<=x283)-x284);

    if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x286 = -2;
	int16_t x287 = INT16_MAX;
	static uint64_t x288 = UINT64_MAX;
	volatile uint64_t t59 = 4782759530760220536LLU;

    t59 = (((x285>x286)<=x287)-x288);

    if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x289 = -1;
	static uint64_t x291 = UINT64_MAX;
	static int16_t x292 = INT16_MAX;

    t60 = (((x289>x290)<=x291)-x292);

    if (t60 != -32766) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x297 = 17U;
	int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MIN;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t61 = -1350;

    t61 = (((x297>x298)<=x299)-x300);

    if (t61 != -65535) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MIN;
	volatile uint16_t x303 = 0U;

    t62 = (((x301>x302)<=x303)-x304);

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x305 = INT64_MAX;
	volatile uint32_t x307 = 511746U;
	uint32_t t63 = 362695U;

    t63 = (((x305>x306)<=x307)-x308);

    if (t63 != 4291945232U) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint16_t x309 = 3U;
	static int32_t x310 = 793106;
	uint32_t x311 = UINT32_MAX;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t64 = -110984865;

    t64 = (((x309>x310)<=x311)-x312);

    if (t64 != -254) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x313 = -516650;
	static int16_t x314 = -1;
	volatile int32_t x315 = -1;
	static volatile int64_t x316 = INT64_MAX;
	int64_t t65 = 4944928LL;

    t65 = (((x313>x314)<=x315)-x316);

    if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x326 = -1;
	uint16_t x327 = UINT16_MAX;

    t66 = (((x325>x326)<=x327)-x328);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x329 = -1LL;
	volatile uint16_t x330 = 6U;
	static int32_t x331 = INT32_MAX;
	volatile uint32_t x332 = 9844359U;

    t67 = (((x329>x330)<=x331)-x332);

    if (t67 != 4285122938U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x334 = UINT8_MAX;
	int64_t x335 = -430232762461LL;

    t68 = (((x333>x334)<=x335)-x336);

    if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x337 = 3497024561106696LLU;
	int8_t x338 = -3;
	static int16_t x339 = 543;
	int64_t x340 = INT64_MAX;
	int64_t t69 = 33151326048LL;

    t69 = (((x337>x338)<=x339)-x340);

    if (t69 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x341 = UINT32_MAX;
	static volatile int8_t x342 = INT8_MIN;
	int8_t x343 = -1;
	volatile int8_t x344 = INT8_MIN;

    t70 = (((x341>x342)<=x343)-x344);

    if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x345 = 241U;
	int64_t x346 = -1LL;
	uint16_t x347 = 45U;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t71 = 57764036LLU;

    t71 = (((x345>x346)<=x347)-x348);

    if (t71 != 2LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x349 = -21;
	uint8_t x351 = 4U;
	uint8_t x352 = UINT8_MAX;

    t72 = (((x349>x350)<=x351)-x352);

    if (t72 != -254) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x353 = UINT8_MAX;
	uint64_t x354 = UINT64_MAX;
	int8_t x355 = INT8_MIN;
	static volatile int32_t t73 = 22;

    t73 = (((x353>x354)<=x355)-x356);

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x357 = INT8_MIN;
	static int16_t x358 = INT16_MIN;
	int16_t x359 = -1;
	volatile int32_t x360 = -1;
	volatile int32_t t74 = -2285263;

    t74 = (((x357>x358)<=x359)-x360);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x361 = INT16_MIN;
	uint8_t x363 = 15U;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t75 = 4461311243192LLU;

    t75 = (((x361>x362)<=x363)-x364);

    if (t75 != 2LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x369 = 817618LLU;
	int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MIN;
	static int16_t x372 = 5142;
	volatile int32_t t76 = -57890;

    t76 = (((x369>x370)<=x371)-x372);

    if (t76 != -5142) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x373 = UINT16_MAX;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = 3;
	uint32_t x376 = 11U;
	volatile uint32_t t77 = 285613111U;

    t77 = (((x373>x374)<=x375)-x376);

    if (t77 != 4294967286U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x380 = 2277U;
	volatile int32_t t78 = -352207997;

    t78 = (((x377>x378)<=x379)-x380);

    if (t78 != -2277) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x385 = INT8_MIN;
	uint32_t x388 = 15515105U;
	static uint32_t t79 = 3U;

    t79 = (((x385>x386)<=x387)-x388);

    if (t79 != 4279452191U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x390 = -37642134590454753LL;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = INT32_MAX;
	volatile int32_t t80 = -415;

    t80 = (((x389>x390)<=x391)-x392);

    if (t80 != -2147483646) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x393 = INT16_MIN;
	int64_t x395 = INT64_MIN;
	int32_t x396 = 11;
	static int32_t t81 = -251;

    t81 = (((x393>x394)<=x395)-x396);

    if (t81 != -11) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x397 = -1;
	volatile int32_t x398 = -1;
	int64_t x399 = INT64_MIN;
	int32_t x400 = 5119404;
	int32_t t82 = -4352521;

    t82 = (((x397>x398)<=x399)-x400);

    if (t82 != -5119404) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x402 = INT32_MIN;
	static int8_t x404 = INT8_MIN;
	volatile int32_t t83 = -14;

    t83 = (((x401>x402)<=x403)-x404);

    if (t83 != 129) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x405 = -3;
	uint8_t x406 = 14U;
	volatile uint16_t x407 = UINT16_MAX;
	static uint32_t t84 = 12U;

    t84 = (((x405>x406)<=x407)-x408);

    if (t84 != 4294966980U) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x409 = INT32_MAX;
	int16_t x410 = INT16_MIN;
	int8_t x411 = INT8_MAX;
	int32_t t85 = 126;

    t85 = (((x409>x410)<=x411)-x412);

    if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x413 = 43;
	volatile uint8_t x414 = UINT8_MAX;
	uint16_t x416 = 8414U;
	static int32_t t86 = -7331144;

    t86 = (((x413>x414)<=x415)-x416);

    if (t86 != -8414) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x422 = -47271;
	volatile int16_t x423 = -1;
	static volatile int32_t t87 = -1589862;

    t87 = (((x421>x422)<=x423)-x424);

    if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x425 = INT16_MIN;
	static int16_t x426 = INT16_MIN;
	int64_t x427 = INT64_MAX;
	uint16_t x428 = 527U;
	static int32_t t88 = 6818540;

    t88 = (((x425>x426)<=x427)-x428);

    if (t88 != -526) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x437 = 1;
	int32_t x440 = INT32_MAX;
	int32_t t89 = 7676747;

    t89 = (((x437>x438)<=x439)-x440);

    if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x445 = INT64_MAX;
	int32_t x446 = INT32_MAX;
	static uint8_t x447 = UINT8_MAX;
	int8_t x448 = 30;
	volatile int32_t t90 = 15522;

    t90 = (((x445>x446)<=x447)-x448);

    if (t90 != -29) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint16_t x449 = 3116U;
	uint64_t x450 = UINT64_MAX;
	int8_t x451 = INT8_MIN;
	uint32_t x452 = 234897522U;

    t91 = (((x449>x450)<=x451)-x452);

    if (t91 != 4060069774U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x453 = -1;
	volatile uint8_t x454 = UINT8_MAX;
	uint64_t x455 = UINT64_MAX;
	volatile int32_t t92 = -112991434;

    t92 = (((x453>x454)<=x455)-x456);

    if (t92 != -254) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x457 = INT16_MAX;
	static volatile uint32_t x458 = 209359U;
	int8_t x459 = INT8_MAX;
	uint32_t x460 = 95660U;
	uint32_t t93 = 30460U;

    t93 = (((x457>x458)<=x459)-x460);

    if (t93 != 4294871637U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x461 = UINT16_MAX;
	int16_t x462 = 13009;
	volatile int8_t x463 = INT8_MIN;
	volatile uint32_t t94 = 22827U;

    t94 = (((x461>x462)<=x463)-x464);

    if (t94 != 4294902682U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x465 = UINT16_MAX;
	int8_t x466 = INT8_MIN;
	uint16_t x467 = UINT16_MAX;
	static int32_t x468 = 1;
	int32_t t95 = 206;

    t95 = (((x465>x466)<=x467)-x468);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x469 = 4638137716637LLU;
	int64_t x470 = 139523918381258LL;
	uint64_t x471 = 33LLU;
	volatile uint32_t x472 = 3U;
	volatile uint32_t t96 = 0U;

    t96 = (((x469>x470)<=x471)-x472);

    if (t96 != 4294967294U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x473 = -1;
	int16_t x474 = 11061;
	int8_t x475 = -1;
	int64_t x476 = INT64_MAX;
	volatile int64_t t97 = 70600910LL;

    t97 = (((x473>x474)<=x475)-x476);

    if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x477 = 7U;
	uint64_t x479 = 4941228307LLU;
	uint8_t x480 = 5U;
	volatile int32_t t98 = 1154;

    t98 = (((x477>x478)<=x479)-x480);

    if (t98 != -4) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x481 = INT8_MAX;
	static int64_t x483 = INT64_MIN;

    t99 = (((x481>x482)<=x483)-x484);

    if (t99 != 54) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x485 = UINT32_MAX;
	static int16_t x488 = -15295;

    t100 = (((x485>x486)<=x487)-x488);

    if (t100 != 15295) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint16_t x489 = UINT16_MAX;
	uint32_t x490 = 451510801U;
	int8_t x491 = 0;
	volatile int32_t x492 = 0;

    t101 = (((x489>x490)<=x491)-x492);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x493 = 10269957LLU;
	static volatile int32_t x494 = -1;
	int64_t x495 = -754983031601531LL;
	int64_t x496 = INT64_MAX;
	int64_t t102 = 1LL;

    t102 = (((x493>x494)<=x495)-x496);

    if (t102 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x497 = INT32_MIN;
	int64_t x498 = INT64_MIN;
	int8_t x499 = INT8_MAX;
	int8_t x500 = INT8_MAX;

    t103 = (((x497>x498)<=x499)-x500);

    if (t103 != -126) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x501 = 344178LLU;
	uint64_t x503 = 1018LLU;
	static volatile int8_t x504 = 1;
	static volatile int32_t t104 = 2;

    t104 = (((x501>x502)<=x503)-x504);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x505 = UINT64_MAX;
	int16_t x506 = -9;
	int32_t x507 = INT32_MIN;
	static int32_t x508 = 29597;
	static int32_t t105 = -27;

    t105 = (((x505>x506)<=x507)-x508);

    if (t105 != -29597) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x509 = UINT64_MAX;
	uint8_t x510 = UINT8_MAX;
	uint16_t x512 = 207U;
	static int32_t t106 = -1727;

    t106 = (((x509>x510)<=x511)-x512);

    if (t106 != -206) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x513 = 249308717468579824LL;
	int64_t x514 = 114870268376206009LL;
	static volatile int16_t x515 = INT16_MIN;

    t107 = (((x513>x514)<=x515)-x516);

    if (t107 != 18419973031213372378LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x518 = 0U;
	uint16_t x519 = UINT16_MAX;
	volatile uint32_t t108 = 1032557347U;

    t108 = (((x517>x518)<=x519)-x520);

    if (t108 != 4294967238U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x525 = INT8_MIN;
	int16_t x526 = INT16_MAX;
	int16_t x527 = -1;
	int64_t x528 = INT64_MAX;

    t109 = (((x525>x526)<=x527)-x528);

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x530 = INT16_MIN;
	uint64_t x531 = 192LLU;
	uint16_t x532 = 31U;
	volatile int32_t t110 = -191;

    t110 = (((x529>x530)<=x531)-x532);

    if (t110 != -30) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x533 = INT64_MAX;
	int16_t x534 = -54;
	int64_t x535 = INT64_MIN;
	volatile int32_t t111 = -3303402;

    t111 = (((x533>x534)<=x535)-x536);

    if (t111 != 128) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x538 = INT64_MAX;
	static uint64_t x539 = 12087821627204257LLU;
	static int32_t x540 = 29699;
	int32_t t112 = 7700;

    t112 = (((x537>x538)<=x539)-x540);

    if (t112 != -29698) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x542 = 126043988187299396LLU;
	volatile int16_t x543 = -2;
	static uint16_t x544 = 421U;
	int32_t t113 = 888172;

    t113 = (((x541>x542)<=x543)-x544);

    if (t113 != -421) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x545 = 0U;
	uint8_t x547 = 19U;
	int8_t x548 = -1;
	int32_t t114 = -832714734;

    t114 = (((x545>x546)<=x547)-x548);

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x549 = 0U;
	int16_t x550 = -1;
	int16_t x551 = -2;
	uint16_t x552 = 9549U;
	volatile int32_t t115 = -1;

    t115 = (((x549>x550)<=x551)-x552);

    if (t115 != -9549) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x553 = INT16_MAX;
	uint16_t x555 = UINT16_MAX;
	volatile int8_t x556 = INT8_MAX;
	int32_t t116 = 25884064;

    t116 = (((x553>x554)<=x555)-x556);

    if (t116 != -126) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x557 = INT8_MAX;
	static int8_t x559 = -1;
	int64_t x560 = INT64_MAX;

    t117 = (((x557>x558)<=x559)-x560);

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x561 = INT16_MAX;
	int8_t x562 = INT8_MIN;
	int64_t x564 = 85707596387826843LL;
	static int64_t t118 = 827LL;

    t118 = (((x561>x562)<=x563)-x564);

    if (t118 != -85707596387826842LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x568 = 5579;

    t119 = (((x565>x566)<=x567)-x568);

    if (t119 != -5579) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x569 = 6233U;
	uint16_t x570 = 0U;
	int64_t x571 = INT64_MIN;
	static uint32_t x572 = UINT32_MAX;
	uint32_t t120 = 785U;

    t120 = (((x569>x570)<=x571)-x572);

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x574 = 7340U;
	int64_t x575 = INT64_MIN;
	int16_t x576 = 236;
	volatile int32_t t121 = -431175;

    t121 = (((x573>x574)<=x575)-x576);

    if (t121 != -236) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x577 = UINT32_MAX;
	int8_t x579 = -31;
	int32_t x580 = -1;
	int32_t t122 = 28546;

    t122 = (((x577>x578)<=x579)-x580);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x581 = INT16_MIN;
	uint8_t x582 = UINT8_MAX;
	int8_t x583 = -12;
	int8_t x584 = INT8_MIN;
	volatile int32_t t123 = 362569831;

    t123 = (((x581>x582)<=x583)-x584);

    if (t123 != 128) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x585 = 1U;
	int64_t x586 = -1LL;
	int64_t x587 = INT64_MIN;
	static volatile uint32_t x588 = 158U;
	volatile uint32_t t124 = 13624U;

    t124 = (((x585>x586)<=x587)-x588);

    if (t124 != 4294967138U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x589 = UINT16_MAX;
	int64_t x590 = INT64_MIN;
	uint32_t x591 = UINT32_MAX;
	int8_t x592 = INT8_MAX;
	int32_t t125 = -1324122;

    t125 = (((x589>x590)<=x591)-x592);

    if (t125 != -126) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x593 = 23067U;
	int8_t x594 = -34;
	uint64_t x595 = UINT64_MAX;
	int64_t x596 = INT64_MAX;
	static volatile int64_t t126 = 54777490LL;

    t126 = (((x593>x594)<=x595)-x596);

    if (t126 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x597 = 2U;
	volatile int16_t x598 = 1;
	static uint32_t x599 = 11022U;
	static int32_t t127 = -1;

    t127 = (((x597>x598)<=x599)-x600);

    if (t127 != -174) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x601 = -37;
	int16_t x602 = INT16_MIN;
	int32_t x603 = 43;
	uint8_t x604 = UINT8_MAX;
	int32_t t128 = -340545;

    t128 = (((x601>x602)<=x603)-x604);

    if (t128 != -254) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x606 = -61219511774175LL;
	uint16_t x607 = 12U;
	volatile uint8_t x608 = UINT8_MAX;
	volatile int32_t t129 = 23;

    t129 = (((x605>x606)<=x607)-x608);

    if (t129 != -254) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x609 = UINT8_MAX;
	int64_t x610 = INT64_MAX;
	uint8_t x612 = UINT8_MAX;
	volatile int32_t t130 = -61253602;

    t130 = (((x609>x610)<=x611)-x612);

    if (t130 != -255) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x613 = 3;
	int32_t x614 = INT32_MAX;
	int16_t x615 = INT16_MIN;
	volatile uint32_t t131 = 6U;

    t131 = (((x613>x614)<=x615)-x616);

    if (t131 != 4294872408U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x617 = INT32_MAX;
	uint16_t x619 = 6888U;
	uint8_t x620 = 13U;
	int32_t t132 = 29232512;

    t132 = (((x617>x618)<=x619)-x620);

    if (t132 != -12) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x621 = INT32_MIN;
	static int32_t t133 = 1;

    t133 = (((x621>x622)<=x623)-x624);

    if (t133 != -126) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x625 = 6U;
	int8_t x628 = INT8_MAX;
	int32_t t134 = -55642237;

    t134 = (((x625>x626)<=x627)-x628);

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x629 = -1;
	int16_t x630 = INT16_MIN;
	volatile uint16_t x631 = 2U;
	int16_t x632 = INT16_MAX;
	volatile int32_t t135 = -6771;

    t135 = (((x629>x630)<=x631)-x632);

    if (t135 != -32766) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x635 = INT8_MAX;
	static volatile uint32_t t136 = 1140243U;

    t136 = (((x633>x634)<=x635)-x636);

    if (t136 != 4294806662U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x637 = -829;
	uint64_t x638 = UINT64_MAX;
	int64_t x640 = INT64_MAX;
	volatile int64_t t137 = -1436681331787LL;

    t137 = (((x637>x638)<=x639)-x640);

    if (t137 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x641 = UINT32_MAX;
	static uint8_t x642 = 1U;
	int64_t x643 = INT64_MAX;
	int32_t x644 = INT32_MAX;
	int32_t t138 = 163299;

    t138 = (((x641>x642)<=x643)-x644);

    if (t138 != -2147483646) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x645 = INT8_MAX;
	int32_t x646 = -5419819;
	static volatile uint8_t x647 = UINT8_MAX;
	int16_t x648 = 60;
	int32_t t139 = 56;

    t139 = (((x645>x646)<=x647)-x648);

    if (t139 != -59) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x649 = 0LLU;
	int8_t x650 = INT8_MAX;
	int64_t x651 = INT64_MAX;
	int32_t t140 = -233158036;

    t140 = (((x649>x650)<=x651)-x652);

    if (t140 != -7) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x653 = -28;
	int32_t x654 = -858;
	uint64_t x655 = 548623428652LLU;
	volatile uint16_t x656 = 7811U;
	volatile int32_t t141 = 505571983;

    t141 = (((x653>x654)<=x655)-x656);

    if (t141 != -7810) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x657 = -11;
	int64_t x658 = -1LL;
	volatile int8_t x659 = INT8_MAX;
	uint64_t x660 = 41873LLU;
	static volatile uint64_t t142 = 5742599447724362928LLU;

    t142 = (((x657>x658)<=x659)-x660);

    if (t142 != 18446744073709509744LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x661 = UINT64_MAX;
	int16_t x663 = INT16_MIN;
	uint32_t t143 = 99U;

    t143 = (((x661>x662)<=x663)-x664);

    if (t143 != 4292458730U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x665 = 4190705198708291LLU;
	int8_t x666 = 9;
	int64_t x667 = -15LL;
	int64_t x668 = -1LL;
	int64_t t144 = 187263081364894LL;

    t144 = (((x665>x666)<=x667)-x668);

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x669 = -1;
	int64_t x670 = -56283919350LL;
	static int8_t x671 = -1;
	int16_t x672 = 2415;
	volatile int32_t t145 = 3268681;

    t145 = (((x669>x670)<=x671)-x672);

    if (t145 != -2415) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x673 = -1;
	int16_t x674 = -3465;
	static int64_t x675 = 4084118LL;
	volatile uint8_t x676 = 4U;
	volatile int32_t t146 = -28590398;

    t146 = (((x673>x674)<=x675)-x676);

    if (t146 != -3) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x679 = UINT8_MAX;
	int8_t x680 = INT8_MAX;
	volatile int32_t t147 = -10;

    t147 = (((x677>x678)<=x679)-x680);

    if (t147 != -126) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x685 = 3748;
	uint16_t x686 = UINT16_MAX;
	uint32_t x687 = UINT32_MAX;
	int8_t x688 = 27;

    t148 = (((x685>x686)<=x687)-x688);

    if (t148 != -26) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x689 = INT32_MIN;
	int64_t x691 = -269LL;
	uint32_t x692 = 0U;
	volatile uint32_t t149 = 1519U;

    t149 = (((x689>x690)<=x691)-x692);

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x693 = -1;
	static int32_t x694 = INT32_MIN;
	uint8_t x695 = 5U;
	volatile uint64_t t150 = 5924LLU;

    t150 = (((x693>x694)<=x695)-x696);

    if (t150 != 18446744073709326692LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x698 = -2719;
	static int8_t x699 = INT8_MIN;
	static int64_t x700 = INT64_MAX;

    t151 = (((x697>x698)<=x699)-x700);

    if (t151 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x701 = 5200762LLU;
	int16_t x702 = INT16_MAX;
	uint32_t x703 = 1453909001U;
	int64_t x704 = INT64_MAX;
	volatile int64_t t152 = -405903933817LL;

    t152 = (((x701>x702)<=x703)-x704);

    if (t152 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x705 = 29U;
	int32_t x706 = -1;
	volatile int8_t x708 = INT8_MIN;
	volatile int32_t t153 = 13;

    t153 = (((x705>x706)<=x707)-x708);

    if (t153 != 128) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x709 = 255725649;
	int16_t x710 = -1;
	volatile int16_t x711 = -1;
	int64_t x712 = -1LL;
	int64_t t154 = 4LL;

    t154 = (((x709>x710)<=x711)-x712);

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = -1;
	int32_t x715 = -62896;
	uint8_t x716 = UINT8_MAX;
	int32_t t155 = 3995460;

    t155 = (((x713>x714)<=x715)-x716);

    if (t155 != -255) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x717 = INT16_MIN;
	uint8_t x718 = UINT8_MAX;
	int32_t t156 = 14;

    t156 = (((x717>x718)<=x719)-x720);

    if (t156 != 129) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x721 = INT64_MIN;
	volatile uint16_t x722 = 3981U;
	int16_t x723 = -1;
	volatile int64_t t157 = -428441LL;

    t157 = (((x721>x722)<=x723)-x724);

    if (t157 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x725 = -1;
	int8_t x726 = -1;
	int8_t x727 = INT8_MAX;
	int16_t x728 = INT16_MIN;
	int32_t t158 = 39493150;

    t158 = (((x725>x726)<=x727)-x728);

    if (t158 != 32769) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x729 = 12211966U;
	uint8_t x730 = UINT8_MAX;
	int8_t x731 = -11;
	int16_t x732 = INT16_MIN;

    t159 = (((x729>x730)<=x731)-x732);

    if (t159 != 32768) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x733 = -1;
	uint16_t x734 = 13U;

    t160 = (((x733>x734)<=x735)-x736);

    if (t160 != -25728514461874686LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x737 = INT64_MIN;
	static volatile int16_t x738 = INT16_MIN;
	uint8_t x739 = 41U;
	int16_t x740 = INT16_MIN;
	static int32_t t161 = -1275;

    t161 = (((x737>x738)<=x739)-x740);

    if (t161 != 32769) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x745 = INT8_MIN;
	int8_t x746 = -1;
	uint64_t x747 = 967611141LLU;
	int8_t x748 = INT8_MAX;
	int32_t t162 = 3432;

    t162 = (((x745>x746)<=x747)-x748);

    if (t162 != -126) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x749 = 310U;
	int32_t x750 = 92837;
	int32_t t163 = 3404083;

    t163 = (((x749>x750)<=x751)-x752);

    if (t163 != -126) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x753 = -1;
	int64_t x755 = INT64_MIN;
	static uint32_t x756 = 3033923U;
	uint32_t t164 = 1638156845U;

    t164 = (((x753>x754)<=x755)-x756);

    if (t164 != 4291933373U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x757 = INT64_MIN;
	volatile int32_t t165 = 0;

    t165 = (((x757>x758)<=x759)-x760);

    if (t165 != 296729363) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x761 = 150918LLU;
	int16_t x763 = INT16_MAX;

    t166 = (((x761>x762)<=x763)-x764);

    if (t166 != -2147483646) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x765 = 3;
	static int32_t x766 = INT32_MAX;
	int32_t x767 = INT32_MIN;
	int8_t x768 = -1;
	int32_t t167 = -1444480;

    t167 = (((x765>x766)<=x767)-x768);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x770 = UINT32_MAX;
	volatile int8_t x771 = INT8_MAX;
	uint32_t x772 = UINT32_MAX;
	uint32_t t168 = 480376035U;

    t168 = (((x769>x770)<=x771)-x772);

    if (t168 != 2U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x773 = UINT32_MAX;
	volatile int32_t x774 = INT32_MIN;
	int16_t x775 = -1;
	uint8_t x776 = 3U;
	int32_t t169 = -400973;

    t169 = (((x773>x774)<=x775)-x776);

    if (t169 != -3) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x777 = INT32_MAX;
	int64_t x778 = INT64_MIN;
	static volatile int8_t x779 = -1;
	int16_t x780 = INT16_MAX;
	int32_t t170 = -6842;

    t170 = (((x777>x778)<=x779)-x780);

    if (t170 != -32767) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x785 = 1637;
	static int32_t x786 = -1;
	int32_t x787 = -142;
	int64_t x788 = -1LL;
	int64_t t171 = 252844651216097051LL;

    t171 = (((x785>x786)<=x787)-x788);

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x798 = INT16_MAX;
	int16_t x799 = -16004;
	static int32_t x800 = INT32_MAX;
	static int32_t t172 = -398;

    t172 = (((x797>x798)<=x799)-x800);

    if (t172 != -2147483647) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x801 = INT64_MAX;
	int32_t x802 = 1;
	uint16_t x803 = 31423U;
	static int64_t t173 = -22LL;

    t173 = (((x801>x802)<=x803)-x804);

    if (t173 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x805 = INT64_MAX;
	uint64_t x806 = 5609257193925LLU;
	static int64_t x807 = -1LL;
	int16_t x808 = INT16_MIN;
	volatile int32_t t174 = 1;

    t174 = (((x805>x806)<=x807)-x808);

    if (t174 != 32768) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x809 = INT32_MAX;
	volatile uint32_t x812 = 5U;
	static volatile uint32_t t175 = 199808U;

    t175 = (((x809>x810)<=x811)-x812);

    if (t175 != 4294967291U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x813 = 28601635;
	uint8_t x814 = UINT8_MAX;
	uint64_t x815 = 61611767784706LLU;
	static int32_t t176 = 468;

    t176 = (((x813>x814)<=x815)-x816);

    if (t176 != 32769) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x818 = -1;
	static uint8_t x820 = 70U;

    t177 = (((x817>x818)<=x819)-x820);

    if (t177 != -70) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x821 = INT64_MIN;
	volatile int16_t x822 = -4449;
	int16_t x823 = INT16_MIN;
	static uint8_t x824 = UINT8_MAX;
	int32_t t178 = -2;

    t178 = (((x821>x822)<=x823)-x824);

    if (t178 != -255) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x825 = INT8_MAX;
	volatile uint8_t x826 = 1U;
	static int64_t x828 = 59LL;
	int64_t t179 = 20LL;

    t179 = (((x825>x826)<=x827)-x828);

    if (t179 != -59LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x829 = INT8_MIN;
	static int8_t x830 = 7;
	int64_t x831 = 505959688LL;
	int8_t x832 = 0;

    t180 = (((x829>x830)<=x831)-x832);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x833 = -691;
	static uint8_t x834 = 3U;
	uint32_t x835 = UINT32_MAX;
	uint8_t x836 = 19U;
	volatile int32_t t181 = 217032;

    t181 = (((x833>x834)<=x835)-x836);

    if (t181 != -18) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x838 = 17690236LLU;
	int8_t x839 = 19;
	uint32_t x840 = UINT32_MAX;
	volatile uint32_t t182 = 15106499U;

    t182 = (((x837>x838)<=x839)-x840);

    if (t182 != 2U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x843 = -1LL;
	static int32_t t183 = 38410373;

    t183 = (((x841>x842)<=x843)-x844);

    if (t183 != 4365) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x845 = 12604U;
	uint16_t x846 = 3238U;
	int32_t x847 = INT32_MAX;
	volatile int64_t x848 = -1LL;
	static int64_t t184 = -259028583LL;

    t184 = (((x845>x846)<=x847)-x848);

    if (t184 != 2LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x849 = -1;
	int32_t x850 = INT32_MIN;
	volatile int32_t x852 = -1;
	static volatile int32_t t185 = 462430163;

    t185 = (((x849>x850)<=x851)-x852);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x853 = INT16_MAX;
	static uint8_t x855 = 0U;
	int32_t x856 = 34;
	static int32_t t186 = 44629173;

    t186 = (((x853>x854)<=x855)-x856);

    if (t186 != -33) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x858 = INT8_MIN;
	int8_t x859 = 5;
	uint32_t x860 = 731871788U;
	uint32_t t187 = 31556116U;

    t187 = (((x857>x858)<=x859)-x860);

    if (t187 != 3563095509U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x862 = 63848237442270532LL;
	volatile int64_t x863 = INT64_MIN;
	int64_t x864 = INT64_MAX;
	volatile int64_t t188 = 113LL;

    t188 = (((x861>x862)<=x863)-x864);

    if (t188 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x865 = 80U;
	volatile int16_t x866 = INT16_MIN;
	static int8_t x867 = INT8_MIN;
	static volatile int16_t x868 = -116;
	volatile int32_t t189 = -350693073;

    t189 = (((x865>x866)<=x867)-x868);

    if (t189 != 116) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x873 = INT16_MIN;
	volatile int32_t x874 = -1;
	int16_t x875 = INT16_MIN;
	static uint16_t x876 = UINT16_MAX;
	int32_t t190 = 280820132;

    t190 = (((x873>x874)<=x875)-x876);

    if (t190 != -65535) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x881 = INT16_MIN;
	int64_t x882 = -1LL;
	int8_t x883 = INT8_MIN;
	static int64_t x884 = -1LL;
	static volatile int64_t t191 = -204181753537272LL;

    t191 = (((x881>x882)<=x883)-x884);

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x886 = -6;
	int64_t x887 = INT64_MIN;
	static int32_t x888 = -1;

    t192 = (((x885>x886)<=x887)-x888);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x889 = INT16_MAX;
	int64_t x890 = -10879LL;
	static int64_t x891 = INT64_MAX;
	uint8_t x892 = 63U;

    t193 = (((x889>x890)<=x891)-x892);

    if (t193 != -62) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x893 = 5U;
	int16_t x896 = 1;
	int32_t t194 = -2930;

    t194 = (((x893>x894)<=x895)-x896);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x897 = INT16_MAX;
	int64_t x898 = INT64_MIN;
	int8_t x899 = -1;
	volatile uint64_t x900 = 869225774344386LLU;
	static uint64_t t195 = 4896690896739LLU;

    t195 = (((x897>x898)<=x899)-x900);

    if (t195 != 18445874847935207230LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x901 = INT32_MIN;
	static int64_t x902 = 1038763778LL;
	int16_t x903 = 1137;
	volatile int32_t t196 = 647538;

    t196 = (((x901>x902)<=x903)-x904);

    if (t196 != 11) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x905 = INT16_MIN;
	static int16_t x906 = INT16_MAX;
	volatile uint64_t t197 = 14407960LLU;

    t197 = (((x905>x906)<=x907)-x908);

    if (t197 != 18446744073709547744LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x910 = 0U;
	static uint64_t x911 = UINT64_MAX;
	volatile int16_t x912 = 8655;

    t198 = (((x909>x910)<=x911)-x912);

    if (t198 != -8654) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x913 = 3;
	uint64_t x914 = 59LLU;
	static int8_t x915 = INT8_MIN;
	static int32_t x916 = -37722;
	volatile int32_t t199 = 4756;

    t199 = (((x913>x914)<=x915)-x916);

    if (t199 != 37722) { NG(); } else { ; }
	
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

