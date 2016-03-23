
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

static uint8_t x1 = 51U;
static int16_t x2 = INT16_MIN;
uint64_t x3 = UINT64_MAX;
int16_t x10 = INT16_MAX;
uint32_t x11 = 60247748U;
static int64_t t1 = -11785565945LL;
int8_t x15 = -13;
static int16_t x16 = -802;
uint8_t x23 = UINT8_MAX;
static volatile int64_t t4 = -87LL;
uint64_t x28 = 347839LLU;
static int8_t x35 = -19;
int8_t x45 = INT8_MIN;
int32_t x54 = -941692;
int32_t x55 = -55;
static int8_t x61 = INT8_MIN;
int32_t x66 = -340852;
int8_t x74 = 1;
volatile int16_t x87 = INT16_MIN;
int16_t x93 = -1;
int64_t x96 = -1LL;
uint8_t x97 = 2U;
int32_t t19 = 15;
int8_t x103 = -23;
volatile int32_t t20 = -4932;
volatile int8_t x108 = 17;
int32_t t21 = 2863;
uint8_t x110 = UINT8_MAX;
int32_t x111 = 16972640;
int64_t x117 = -1LL;
uint64_t x134 = 139359137936148662LLU;
uint16_t x136 = UINT16_MAX;
int64_t x137 = -4364949599093LL;
int16_t x154 = 6;
uint8_t x156 = UINT8_MAX;
int32_t x159 = -1;
uint16_t x168 = 14640U;
static int64_t x169 = -1LL;
int64_t x173 = INT64_MIN;
uint64_t x174 = 44822251302459LLU;
int64_t x176 = INT64_MIN;
static int8_t x178 = INT8_MAX;
int16_t x180 = -36;
uint64_t t40 = 2296523670322884222LLU;
int8_t x199 = INT8_MAX;
uint16_t x206 = UINT16_MAX;
uint16_t x207 = 6U;
uint32_t x218 = 1576816U;
static volatile int8_t x222 = INT8_MIN;
int16_t x225 = -1;
static int64_t x230 = -3480149LL;
static int8_t x232 = INT8_MIN;
volatile int16_t x240 = INT16_MIN;
int64_t x242 = INT64_MIN;
int32_t t52 = 1011982;
volatile int16_t x245 = -13656;
int32_t x251 = INT32_MIN;
int8_t x253 = 19;
int8_t x257 = INT8_MAX;
volatile uint32_t t56 = 15539U;
volatile int64_t x262 = INT64_MAX;
volatile int16_t x264 = INT16_MIN;
uint64_t x268 = 35173218128925481LLU;
int64_t x273 = -1LL;
volatile int64_t x275 = 133165099339LL;
uint16_t x281 = UINT16_MAX;
int64_t x290 = -38293307500LL;
int16_t x291 = INT16_MIN;
uint64_t x317 = 1952600396966LLU;
int32_t t71 = -28;
int32_t t72 = -1;
static uint16_t x345 = UINT16_MAX;
int16_t x348 = INT16_MAX;
int32_t t75 = 26510729;
int32_t x354 = 442008;
volatile int64_t x360 = INT64_MAX;
uint32_t x362 = 4330U;
uint16_t x366 = UINT16_MAX;
int16_t x368 = INT16_MIN;
int32_t t79 = -624;
volatile int32_t t80 = 1404266;
int32_t x374 = INT32_MIN;
volatile int32_t t82 = -185713;
volatile int64_t x384 = INT64_MIN;
int32_t x388 = -1;
volatile uint32_t t89 = 8846094U;
volatile int64_t t90 = 0LL;
static int8_t x428 = INT8_MIN;
uint32_t x438 = 33052U;
uint16_t x445 = UINT16_MAX;
int64_t x448 = INT64_MIN;
volatile int64_t t96 = -1074570810032632LL;
static volatile int64_t x456 = -1LL;
int16_t x471 = INT16_MAX;
int64_t x472 = -60330126627350324LL;
static int8_t x475 = -1;
int16_t x476 = 23;
int8_t x481 = -1;
uint8_t x492 = 5U;
volatile int64_t t105 = 66334566LL;
uint8_t x495 = 1U;
static uint8_t x497 = UINT8_MAX;
volatile int8_t x498 = INT8_MIN;
uint64_t x502 = UINT64_MAX;
volatile uint32_t t108 = 4427313U;
int64_t t109 = 0LL;
int32_t t112 = -103;
volatile int8_t x522 = -33;
int32_t x524 = INT32_MIN;
uint32_t t113 = 5023U;
volatile uint32_t t115 = 4659U;
int8_t x535 = INT8_MIN;
volatile uint16_t x541 = UINT16_MAX;
uint32_t x543 = UINT32_MAX;
int64_t x545 = INT64_MIN;
int8_t x556 = INT8_MAX;
int32_t t121 = -12082;
int8_t x560 = -1;
volatile int16_t x566 = INT16_MIN;
volatile int16_t x568 = -783;
static uint32_t x569 = 0U;
int16_t x571 = INT16_MAX;
int64_t x572 = INT64_MIN;
int8_t x579 = -1;
uint16_t x580 = 2431U;
int32_t x586 = -1;
static int16_t x588 = INT16_MAX;
static volatile int32_t t129 = -474838112;
uint8_t x592 = UINT8_MAX;
static volatile int16_t x594 = 7174;
volatile uint16_t x597 = 4907U;
volatile int64_t t132 = INT64_MIN;
volatile uint32_t x607 = 727042U;
uint64_t x608 = 5106438865017613LLU;
static int32_t x614 = -92073;
int16_t x619 = -1;
int32_t t137 = 418067;
int8_t x623 = INT8_MIN;
volatile int32_t t138 = -422581;
int16_t x640 = INT16_MAX;
int8_t x641 = INT8_MAX;
static uint64_t t144 = 221198934756567870LLU;
static int32_t x663 = INT32_MIN;
int16_t x668 = 0;
static volatile int32_t t147 = 7933;
static int16_t x674 = 5451;
volatile int32_t t149 = -385182235;
uint64_t x686 = 3701686748214648LLU;
volatile uint8_t x688 = UINT8_MAX;
static int32_t t152 = 2;
static int32_t x693 = INT32_MIN;
uint64_t x695 = 5LLU;
int16_t x696 = INT16_MAX;
int16_t x701 = 1667;
static volatile uint32_t x704 = 10686353U;
uint32_t t158 = 2537318U;
static volatile int8_t x718 = INT8_MIN;
static int64_t x719 = -1LL;
volatile int64_t x725 = -1LL;
int8_t x727 = -1;
int64_t x733 = INT64_MIN;
static uint32_t x734 = 842U;
volatile uint16_t x737 = UINT16_MAX;
uint16_t x748 = 2U;
static uint32_t x749 = 48696U;
static int32_t x750 = INT32_MIN;
int64_t x751 = -8450749505168LL;
uint8_t x752 = 1U;
int64_t t166 = -196LL;
uint8_t x763 = 6U;
volatile int32_t t168 = 27134171;
static uint16_t x765 = 0U;
uint32_t x768 = 974427714U;
volatile uint32_t t169 = 2071U;
int64_t x776 = INT64_MIN;
int64_t x784 = -1LL;
int16_t x786 = INT16_MIN;
int16_t x788 = -1;
uint64_t x795 = 4183771715544LLU;
int16_t x799 = -1;
int8_t x805 = -1;
static int32_t x806 = -1;
uint8_t x807 = 84U;
uint8_t x812 = 1U;
volatile int8_t x825 = -61;
volatile int64_t t183 = -47233LL;
static uint32_t x834 = 1U;
int64_t x838 = INT64_MAX;
volatile uint8_t x839 = 26U;
static uint32_t x845 = 237026733U;
volatile uint64_t x847 = 1075484439320LLU;
static int16_t x848 = INT16_MIN;
static volatile int32_t x849 = INT32_MIN;
int8_t x863 = INT8_MIN;
int32_t t191 = 910441777;
int32_t x873 = INT32_MIN;
int16_t x885 = INT16_MAX;
static volatile int64_t x888 = -1LL;


void f0(void) {
    	uint32_t x4 = 71U;
	uint64_t t0 = 95079965LLU;

    t0 = (((x1<=x2)|x3)+x4);

    if (t0 != 70LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = -28;
	int64_t x12 = -1LL;

    t1 = (((x9<=x10)|x11)+x12);

    if (t1 != 60247748LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	volatile int16_t x14 = INT16_MIN;
	int32_t t2 = -63928;

    t2 = (((x13<=x14)|x15)+x16);

    if (t2 != -815) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -19415439551760924LL;
	int32_t x18 = -1;
	uint64_t x19 = 1522LLU;
	int32_t x20 = INT32_MAX;
	uint64_t t3 = 538404748735372963LLU;

    t3 = (((x17<=x18)|x19)+x20);

    if (t3 != 2147485170LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = INT32_MAX;
	int32_t x22 = -1;
	int64_t x24 = 57LL;

    t4 = (((x21<=x22)|x23)+x24);

    if (t4 != 312LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	static int16_t x26 = 566;
	uint16_t x27 = 14192U;
	volatile uint64_t t5 = 2916686LLU;

    t5 = (((x25<=x26)|x27)+x28);

    if (t5 != 362032LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = INT16_MIN;
	int64_t x30 = INT64_MAX;
	uint64_t x31 = UINT64_MAX;
	uint8_t x32 = UINT8_MAX;
	volatile uint64_t t6 = 28406668255LLU;

    t6 = (((x29<=x30)|x31)+x32);

    if (t6 != 254LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	uint32_t x34 = UINT32_MAX;
	int32_t x36 = -204;
	volatile int32_t t7 = -2185509;

    t7 = (((x33<=x34)|x35)+x36);

    if (t7 != -223) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x46 = INT64_MIN;
	uint32_t x47 = UINT32_MAX;
	volatile uint64_t x48 = 160052LLU;
	uint64_t t8 = 8356895400LLU;

    t8 = (((x45<=x46)|x47)+x48);

    if (t8 != 4295127347LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x53 = 12136918748338LL;
	int32_t x56 = -1;
	static int32_t t9 = 0;

    t9 = (((x53<=x54)|x55)+x56);

    if (t9 != -56) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x57 = 193580961835485LLU;
	volatile int16_t x58 = INT16_MIN;
	int32_t x59 = -1;
	int8_t x60 = INT8_MAX;
	int32_t t10 = 99;

    t10 = (((x57<=x58)|x59)+x60);

    if (t10 != 126) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x62 = -1LL;
	static int16_t x63 = 90;
	volatile uint64_t x64 = 506456674LLU;
	uint64_t t11 = 67034769995404022LLU;

    t11 = (((x61<=x62)|x63)+x64);

    if (t11 != 506456765LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x65 = -1;
	uint16_t x67 = 674U;
	int32_t x68 = INT32_MIN;
	volatile int32_t t12 = 301;

    t12 = (((x65<=x66)|x67)+x68);

    if (t12 != -2147482974) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x69 = INT8_MIN;
	int8_t x70 = -28;
	int64_t x71 = -17882LL;
	int8_t x72 = 23;
	static volatile int64_t t13 = -25125LL;

    t13 = (((x69<=x70)|x71)+x72);

    if (t13 != -17858LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x73 = 57U;
	volatile int16_t x75 = 70;
	int64_t x76 = 2697533LL;
	volatile int64_t t14 = 1630501293LL;

    t14 = (((x73<=x74)|x75)+x76);

    if (t14 != 2697603LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x77 = 64941U;
	int8_t x78 = INT8_MIN;
	volatile uint16_t x79 = UINT16_MAX;
	int8_t x80 = INT8_MAX;
	int32_t t15 = 1409;

    t15 = (((x77<=x78)|x79)+x80);

    if (t15 != 65662) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x81 = INT16_MIN;
	int8_t x82 = -1;
	static int16_t x83 = -111;
	int8_t x84 = INT8_MIN;
	volatile int32_t t16 = -6733;

    t16 = (((x81<=x82)|x83)+x84);

    if (t16 != -239) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x85 = INT32_MAX;
	uint8_t x86 = 6U;
	uint32_t x88 = 552U;
	uint32_t t17 = 866399984U;

    t17 = (((x85<=x86)|x87)+x88);

    if (t17 != 4294935080U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x94 = -2688980LL;
	int8_t x95 = 1;
	int64_t t18 = -42816987LL;

    t18 = (((x93<=x94)|x95)+x96);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x98 = INT64_MAX;
	int16_t x99 = INT16_MAX;
	uint16_t x100 = 376U;

    t19 = (((x97<=x98)|x99)+x100);

    if (t19 != 33143) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x101 = INT64_MAX;
	int32_t x102 = -212727590;
	volatile uint16_t x104 = UINT16_MAX;

    t20 = (((x101<=x102)|x103)+x104);

    if (t20 != 65512) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x105 = INT32_MIN;
	uint16_t x106 = UINT16_MAX;
	int8_t x107 = INT8_MIN;

    t21 = (((x105<=x106)|x107)+x108);

    if (t21 != -110) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x109 = 0;
	volatile int16_t x112 = -1;
	int32_t t22 = 1239;

    t22 = (((x109<=x110)|x111)+x112);

    if (t22 != 16972640) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x118 = INT64_MIN;
	static int8_t x119 = -2;
	uint16_t x120 = UINT16_MAX;
	static volatile int32_t t23 = 189347;

    t23 = (((x117<=x118)|x119)+x120);

    if (t23 != 65533) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x121 = 1U;
	uint16_t x122 = UINT16_MAX;
	int64_t x123 = INT64_MIN;
	int8_t x124 = INT8_MAX;
	volatile int64_t t24 = -8222308051LL;

    t24 = (((x121<=x122)|x123)+x124);

    if (t24 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = INT8_MAX;
	int64_t x126 = 247LL;
	int32_t x127 = -1;
	int64_t x128 = -1LL;
	volatile int64_t t25 = 338055977383852724LL;

    t25 = (((x125<=x126)|x127)+x128);

    if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x129 = -1;
	int64_t x130 = INT64_MAX;
	uint16_t x131 = 1470U;
	uint8_t x132 = 1U;
	int32_t t26 = 35970;

    t26 = (((x129<=x130)|x131)+x132);

    if (t26 != 1472) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x133 = 1U;
	int32_t x135 = -1;
	static int32_t t27 = -9;

    t27 = (((x133<=x134)|x135)+x136);

    if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x138 = 430;
	volatile int8_t x139 = INT8_MAX;
	int64_t x140 = INT64_MIN;
	int64_t t28 = 3287652456942564435LL;

    t28 = (((x137<=x138)|x139)+x140);

    if (t28 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = INT16_MAX;
	volatile uint8_t x142 = UINT8_MAX;
	static uint16_t x143 = 5U;
	int64_t x144 = -1LL;
	int64_t t29 = -5553471813238LL;

    t29 = (((x141<=x142)|x143)+x144);

    if (t29 != 4LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x145 = -27;
	uint64_t x146 = UINT64_MAX;
	static volatile int8_t x147 = INT8_MIN;
	int8_t x148 = 1;
	int32_t t30 = 243052;

    t30 = (((x145<=x146)|x147)+x148);

    if (t30 != -126) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x149 = INT64_MIN;
	int32_t x150 = -16544;
	int32_t x151 = -499993755;
	uint32_t x152 = UINT32_MAX;
	uint32_t t31 = 1660848987U;

    t31 = (((x149<=x150)|x151)+x152);

    if (t31 != 3794973540U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x153 = 37075906LLU;
	uint64_t x155 = 50473LLU;
	uint64_t t32 = 107117594569234LLU;

    t32 = (((x153<=x154)|x155)+x156);

    if (t32 != 50728LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x157 = -118659073706LL;
	static uint32_t x158 = UINT32_MAX;
	static int16_t x160 = -1;
	static int32_t t33 = 13;

    t33 = (((x157<=x158)|x159)+x160);

    if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x161 = UINT8_MAX;
	int64_t x162 = 99344334LL;
	static int16_t x163 = INT16_MAX;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t34 = 2120217;

    t34 = (((x161<=x162)|x163)+x164);

    if (t34 != 32639) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x165 = UINT16_MAX;
	int8_t x166 = -1;
	volatile int32_t x167 = INT32_MIN;
	static int32_t t35 = 50125;

    t35 = (((x165<=x166)|x167)+x168);

    if (t35 != -2147469008) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x170 = INT32_MIN;
	uint8_t x171 = 5U;
	uint8_t x172 = 19U;
	int32_t t36 = 3618;

    t36 = (((x169<=x170)|x171)+x172);

    if (t36 != 24) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x175 = UINT64_MAX;
	uint64_t t37 = 7650676LLU;

    t37 = (((x173<=x174)|x175)+x176);

    if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x177 = -1;
	uint16_t x179 = UINT16_MAX;
	int32_t t38 = 0;

    t38 = (((x177<=x178)|x179)+x180);

    if (t38 != 65499) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x181 = -2919;
	int64_t x182 = -24884890417416486LL;
	static uint64_t x183 = 17789584612691LLU;
	int16_t x184 = -3287;
	uint64_t t39 = 1LLU;

    t39 = (((x181<=x182)|x183)+x184);

    if (t39 != 17789584609404LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x189 = 5221U;
	uint16_t x190 = 1U;
	volatile int32_t x191 = 13047;
	uint64_t x192 = 86607474758LLU;

    t40 = (((x189<=x190)|x191)+x192);

    if (t40 != 86607487805LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x197 = INT64_MIN;
	int64_t x198 = INT64_MIN;
	volatile int64_t x200 = INT64_MIN;
	static int64_t t41 = 5772LL;

    t41 = (((x197<=x198)|x199)+x200);

    if (t41 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x201 = 1;
	uint64_t x202 = 720043207LLU;
	static volatile int32_t x203 = -7;
	static int8_t x204 = INT8_MAX;
	int32_t t42 = 514354;

    t42 = (((x201<=x202)|x203)+x204);

    if (t42 != 120) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x205 = 9;
	int8_t x208 = 19;
	volatile int32_t t43 = 1645690;

    t43 = (((x205<=x206)|x207)+x208);

    if (t43 != 26) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x209 = INT8_MIN;
	volatile int32_t x210 = 21521849;
	int32_t x211 = -1;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t44 = 9LLU;

    t44 = (((x209<=x210)|x211)+x212);

    if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x213 = 0U;
	int32_t x214 = INT32_MIN;
	static int32_t x215 = INT32_MAX;
	int64_t x216 = -17496371LL;
	int64_t t45 = -7736694999LL;

    t45 = (((x213<=x214)|x215)+x216);

    if (t45 != 2129987276LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x217 = INT8_MIN;
	uint32_t x219 = UINT32_MAX;
	uint8_t x220 = 11U;
	uint32_t t46 = 4U;

    t46 = (((x217<=x218)|x219)+x220);

    if (t46 != 10U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x221 = -1LL;
	int16_t x223 = -356;
	volatile int16_t x224 = -1;
	volatile int32_t t47 = 92151103;

    t47 = (((x221<=x222)|x223)+x224);

    if (t47 != -357) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x226 = INT64_MAX;
	static int32_t x227 = INT32_MAX;
	volatile int8_t x228 = -1;
	volatile int32_t t48 = 0;

    t48 = (((x225<=x226)|x227)+x228);

    if (t48 != 2147483646) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x229 = 0LLU;
	int64_t x231 = -1LL;
	int64_t t49 = 138LL;

    t49 = (((x229<=x230)|x231)+x232);

    if (t49 != -129LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x233 = INT32_MIN;
	static uint64_t x234 = 168075LLU;
	uint16_t x235 = UINT16_MAX;
	volatile uint64_t x236 = UINT64_MAX;
	uint64_t t50 = 1801787439638881276LLU;

    t50 = (((x233<=x234)|x235)+x236);

    if (t50 != 65534LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint16_t x237 = 14189U;
	int64_t x238 = 85409383579838LL;
	static uint8_t x239 = UINT8_MAX;
	volatile int32_t t51 = 7857219;

    t51 = (((x237<=x238)|x239)+x240);

    if (t51 != -32513) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x241 = INT32_MIN;
	int32_t x243 = -1;
	uint16_t x244 = UINT16_MAX;

    t52 = (((x241<=x242)|x243)+x244);

    if (t52 != 65534) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x246 = -1;
	uint8_t x247 = 1U;
	uint32_t x248 = 655U;
	uint32_t t53 = 2U;

    t53 = (((x245<=x246)|x247)+x248);

    if (t53 != 656U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x249 = -1;
	int64_t x250 = 389753545455LL;
	int64_t x252 = -230636LL;
	static int64_t t54 = 2863LL;

    t54 = (((x249<=x250)|x251)+x252);

    if (t54 != -2147714283LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x254 = 3U;
	int32_t x255 = -1;
	volatile int16_t x256 = -1;
	volatile int32_t t55 = 68;

    t55 = (((x253<=x254)|x255)+x256);

    if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x258 = 59U;
	uint32_t x259 = UINT32_MAX;
	static volatile uint8_t x260 = UINT8_MAX;

    t56 = (((x257<=x258)|x259)+x260);

    if (t56 != 254U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x261 = INT16_MAX;
	static uint8_t x263 = UINT8_MAX;
	volatile int32_t t57 = 219467612;

    t57 = (((x261<=x262)|x263)+x264);

    if (t57 != -32513) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x265 = -1;
	uint32_t x266 = 413064006U;
	int32_t x267 = INT32_MAX;
	uint64_t t58 = 292774LLU;

    t58 = (((x265<=x266)|x267)+x268);

    if (t58 != 35173220276409128LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x274 = 296U;
	int32_t x276 = INT32_MAX;
	static volatile int64_t t59 = 89LL;

    t59 = (((x273<=x274)|x275)+x276);

    if (t59 != 135312582986LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x282 = 6788;
	int8_t x283 = -1;
	uint8_t x284 = 0U;
	int32_t t60 = -31873;

    t60 = (((x281<=x282)|x283)+x284);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x285 = 39117635;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MIN;
	int32_t x288 = -1;
	int32_t t61 = INT32_MIN;

    t61 = (((x285<=x286)|x287)+x288);

    if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x289 = INT16_MIN;
	volatile uint16_t x292 = UINT16_MAX;
	static volatile int32_t t62 = 4779;

    t62 = (((x289<=x290)|x291)+x292);

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x293 = -1LL;
	uint32_t x294 = 91191U;
	int16_t x295 = INT16_MAX;
	volatile int8_t x296 = INT8_MAX;
	volatile int32_t t63 = -19027;

    t63 = (((x293<=x294)|x295)+x296);

    if (t63 != 32894) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x297 = UINT8_MAX;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = -1;
	int16_t x300 = INT16_MIN;
	volatile int32_t t64 = -7278;

    t64 = (((x297<=x298)|x299)+x300);

    if (t64 != -32769) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x301 = -1;
	uint8_t x302 = UINT8_MAX;
	int64_t x303 = INT64_MAX;
	static uint64_t x304 = 3LLU;
	volatile uint64_t t65 = 275339726LLU;

    t65 = (((x301<=x302)|x303)+x304);

    if (t65 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x305 = 243070982966LLU;
	uint8_t x306 = 21U;
	uint32_t x307 = UINT32_MAX;
	int32_t x308 = INT32_MIN;
	volatile uint32_t t66 = 126996U;

    t66 = (((x305<=x306)|x307)+x308);

    if (t66 != 2147483647U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x313 = -1LL;
	int32_t x314 = INT32_MIN;
	volatile int16_t x315 = -1;
	uint32_t x316 = 8134U;
	static volatile uint32_t t67 = 462498509U;

    t67 = (((x313<=x314)|x315)+x316);

    if (t67 != 8133U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x318 = -1;
	static volatile int32_t x319 = -1;
	int32_t x320 = -1;
	volatile int32_t t68 = 1390;

    t68 = (((x317<=x318)|x319)+x320);

    if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x321 = 1622;
	int32_t x322 = -1;
	uint64_t x323 = UINT64_MAX;
	volatile int32_t x324 = -1;
	static volatile uint64_t t69 = 6274107709495LLU;

    t69 = (((x321<=x322)|x323)+x324);

    if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x325 = -1;
	int16_t x326 = INT16_MAX;
	int32_t x327 = 54483172;
	int32_t x328 = -1;
	volatile int32_t t70 = -21476864;

    t70 = (((x325<=x326)|x327)+x328);

    if (t70 != 54483172) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x329 = INT8_MIN;
	uint16_t x330 = 1813U;
	int16_t x331 = -306;
	int32_t x332 = -1;

    t71 = (((x329<=x330)|x331)+x332);

    if (t71 != -306) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x333 = 30U;
	int32_t x334 = -5580;
	static int32_t x335 = -87552608;
	int8_t x336 = -7;

    t72 = (((x333<=x334)|x335)+x336);

    if (t72 != -87552615) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x337 = 27;
	int32_t x338 = INT32_MIN;
	static int32_t x339 = INT32_MIN;
	static uint64_t x340 = 67366370LLU;
	uint64_t t73 = 1495617588LLU;

    t73 = (((x337<=x338)|x339)+x340);

    if (t73 != 18446744071629434338LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x341 = -1;
	static int32_t x342 = INT32_MIN;
	int64_t x343 = 100LL;
	static int8_t x344 = INT8_MAX;
	int64_t t74 = 5041179117780LL;

    t74 = (((x341<=x342)|x343)+x344);

    if (t74 != 227LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x346 = INT32_MIN;
	static int8_t x347 = 10;

    t75 = (((x345<=x346)|x347)+x348);

    if (t75 != 32777) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x353 = 51U;
	static volatile int32_t x355 = -925;
	static volatile int32_t x356 = -1733;
	int32_t t76 = -959624187;

    t76 = (((x353<=x354)|x355)+x356);

    if (t76 != -2658) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MAX;
	int16_t x359 = INT16_MIN;
	int64_t t77 = 6454LL;

    t77 = (((x357<=x358)|x359)+x360);

    if (t77 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x361 = 891052869802LL;
	int64_t x363 = -61631057LL;
	int16_t x364 = INT16_MIN;
	int64_t t78 = -1823972863224746LL;

    t78 = (((x361<=x362)|x363)+x364);

    if (t78 != -61663825LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x365 = -192;
	uint8_t x367 = 11U;

    t79 = (((x365<=x366)|x367)+x368);

    if (t79 != -32757) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x369 = INT16_MAX;
	static int64_t x370 = INT64_MIN;
	volatile int32_t x371 = 617725;
	uint8_t x372 = 3U;

    t80 = (((x369<=x370)|x371)+x372);

    if (t80 != 617728) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x373 = INT32_MIN;
	static int64_t x375 = INT64_MIN;
	uint32_t x376 = UINT32_MAX;
	int64_t t81 = 690677652LL;

    t81 = (((x373<=x374)|x375)+x376);

    if (t81 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x377 = 0U;
	int8_t x378 = INT8_MIN;
	volatile int8_t x379 = INT8_MIN;
	int16_t x380 = 1;

    t82 = (((x377<=x378)|x379)+x380);

    if (t82 != -126) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x381 = INT32_MAX;
	volatile int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MAX;
	volatile int64_t t83 = 3LL;

    t83 = (((x381<=x382)|x383)+x384);

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x385 = -16161556649331LL;
	volatile int64_t x386 = -1LL;
	static int32_t x387 = INT32_MIN;
	int32_t t84 = INT32_MIN;

    t84 = (((x385<=x386)|x387)+x388);

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x393 = -1;
	uint32_t x394 = 1U;
	static uint8_t x395 = UINT8_MAX;
	static int64_t x396 = -51998153777493LL;
	int64_t t85 = 1LL;

    t85 = (((x393<=x394)|x395)+x396);

    if (t85 != -51998153777238LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x397 = INT32_MAX;
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = INT32_MIN;
	int64_t x400 = -1LL;
	static int64_t t86 = 6148728LL;

    t86 = (((x397<=x398)|x399)+x400);

    if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x401 = INT8_MAX;
	static int64_t x402 = 3LL;
	static volatile int8_t x403 = INT8_MIN;
	uint32_t x404 = 328484119U;
	uint32_t t87 = 1U;

    t87 = (((x401<=x402)|x403)+x404);

    if (t87 != 328483991U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x405 = -1;
	int16_t x406 = INT16_MIN;
	volatile int8_t x407 = -23;
	int16_t x408 = -5868;
	int32_t t88 = -490;

    t88 = (((x405<=x406)|x407)+x408);

    if (t88 != -5891) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x409 = INT32_MIN;
	volatile int32_t x410 = INT32_MIN;
	uint32_t x411 = 78135U;
	static volatile int16_t x412 = -1;

    t89 = (((x409<=x410)|x411)+x412);

    if (t89 != 78134U) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x413 = -1LL;
	int64_t x414 = -547665489LL;
	static int64_t x415 = -45281313LL;
	static int8_t x416 = INT8_MIN;

    t90 = (((x413<=x414)|x415)+x416);

    if (t90 != -45281441LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x417 = INT32_MAX;
	int64_t x418 = -1558LL;
	int8_t x419 = INT8_MIN;
	uint32_t x420 = 23526U;
	volatile uint32_t t91 = 397109926U;

    t91 = (((x417<=x418)|x419)+x420);

    if (t91 != 23398U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x421 = 25364;
	uint32_t x422 = UINT32_MAX;
	int16_t x423 = INT16_MAX;
	int16_t x424 = 157;
	static int32_t t92 = -514925;

    t92 = (((x421<=x422)|x423)+x424);

    if (t92 != 32924) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = 0;
	int16_t x426 = INT16_MIN;
	volatile int64_t x427 = INT64_MAX;
	static volatile int64_t t93 = 162246381781LL;

    t93 = (((x425<=x426)|x427)+x428);

    if (t93 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x437 = INT64_MIN;
	static int16_t x439 = 1;
	int64_t x440 = -1LL;
	int64_t t94 = 12826916LL;

    t94 = (((x437<=x438)|x439)+x440);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x446 = INT64_MIN;
	uint64_t x447 = 659LLU;
	volatile uint64_t t95 = 370LLU;

    t95 = (((x445<=x446)|x447)+x448);

    if (t95 != 9223372036854776467LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x449 = INT32_MIN;
	int16_t x450 = 59;
	volatile int64_t x451 = 41395LL;
	int64_t x452 = -6072LL;

    t96 = (((x449<=x450)|x451)+x452);

    if (t96 != 35323LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x453 = INT8_MIN;
	int16_t x454 = -1;
	static volatile int32_t x455 = -1;
	volatile int64_t t97 = 18LL;

    t97 = (((x453<=x454)|x455)+x456);

    if (t97 != -2LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x457 = -1LL;
	static uint8_t x458 = 2U;
	volatile int64_t x459 = -128650437307223489LL;
	uint64_t x460 = 793487176LLU;
	volatile uint64_t t98 = 30481874751694LLU;

    t98 = (((x457<=x458)|x459)+x460);

    if (t98 != 18318093637195815303LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x465 = INT8_MIN;
	int8_t x466 = INT8_MAX;
	int16_t x467 = INT16_MAX;
	int8_t x468 = INT8_MIN;
	volatile int32_t t99 = 319041;

    t99 = (((x465<=x466)|x467)+x468);

    if (t99 != 32639) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x469 = INT64_MIN;
	int32_t x470 = -1;
	int64_t t100 = 8442803LL;

    t100 = (((x469<=x470)|x471)+x472);

    if (t100 != -60330126627317557LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x473 = -1;
	int64_t x474 = 97920LL;
	int32_t t101 = 19;

    t101 = (((x473<=x474)|x475)+x476);

    if (t101 != 22) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x477 = 10;
	volatile int16_t x478 = INT16_MAX;
	uint64_t x479 = 6320877200LLU;
	volatile int8_t x480 = 0;
	uint64_t t102 = 2477LLU;

    t102 = (((x477<=x478)|x479)+x480);

    if (t102 != 6320877201LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x482 = UINT16_MAX;
	volatile int32_t x483 = INT32_MIN;
	uint32_t x484 = 3950661U;
	volatile uint32_t t103 = 238132730U;

    t103 = (((x481<=x482)|x483)+x484);

    if (t103 != 2151434310U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x485 = INT32_MIN;
	int64_t x486 = INT64_MIN;
	volatile int8_t x487 = INT8_MIN;
	int16_t x488 = INT16_MIN;
	static volatile int32_t t104 = -27447626;

    t104 = (((x485<=x486)|x487)+x488);

    if (t104 != -32896) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x489 = INT8_MIN;
	uint8_t x490 = 0U;
	volatile int64_t x491 = 970572951844678LL;

    t105 = (((x489<=x490)|x491)+x492);

    if (t105 != 970572951844684LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x493 = 1U;
	static int64_t x494 = 94LL;
	volatile uint16_t x496 = 319U;
	volatile int32_t t106 = -952;

    t106 = (((x493<=x494)|x495)+x496);

    if (t106 != 320) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x499 = 996306168U;
	uint8_t x500 = UINT8_MAX;
	volatile uint32_t t107 = 24301812U;

    t107 = (((x497<=x498)|x499)+x500);

    if (t107 != 996306423U) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x501 = INT64_MIN;
	int16_t x503 = -1;
	volatile uint32_t x504 = UINT32_MAX;

    t108 = (((x501<=x502)|x503)+x504);

    if (t108 != 4294967294U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x505 = 49U;
	int8_t x506 = INT8_MIN;
	static volatile uint32_t x507 = 1057U;
	int64_t x508 = INT64_MIN;

    t109 = (((x505<=x506)|x507)+x508);

    if (t109 != -9223372036854774751LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x509 = 1U;
	static int32_t x510 = INT32_MIN;
	volatile uint8_t x511 = UINT8_MAX;
	int64_t x512 = INT64_MIN;
	int64_t t110 = 30805418839LL;

    t110 = (((x509<=x510)|x511)+x512);

    if (t110 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x513 = INT16_MIN;
	int32_t x514 = INT32_MIN;
	uint32_t x515 = 33U;
	int8_t x516 = -1;
	uint32_t t111 = 35U;

    t111 = (((x513<=x514)|x515)+x516);

    if (t111 != 32U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x517 = -1;
	int16_t x518 = INT16_MIN;
	int16_t x519 = INT16_MAX;
	int16_t x520 = INT16_MIN;

    t112 = (((x517<=x518)|x519)+x520);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x521 = -58357431;
	static uint32_t x523 = UINT32_MAX;

    t113 = (((x521<=x522)|x523)+x524);

    if (t113 != 2147483647U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x525 = 692233259;
	int16_t x526 = INT16_MIN;
	volatile int8_t x527 = INT8_MIN;
	uint32_t x528 = 43621399U;
	static uint32_t t114 = 3460489U;

    t114 = (((x525<=x526)|x527)+x528);

    if (t114 != 43621271U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x529 = 19;
	int32_t x530 = -1;
	uint32_t x531 = 12183037U;
	uint8_t x532 = 2U;

    t115 = (((x529<=x530)|x531)+x532);

    if (t115 != 12183039U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x533 = INT16_MIN;
	uint64_t x534 = 4877210503LLU;
	int8_t x536 = -1;
	volatile int32_t t116 = -14638;

    t116 = (((x533<=x534)|x535)+x536);

    if (t116 != -129) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x537 = -1;
	uint64_t x538 = 37078432792649LLU;
	uint32_t x539 = 26U;
	volatile int16_t x540 = INT16_MIN;
	volatile uint32_t t117 = 1327U;

    t117 = (((x537<=x538)|x539)+x540);

    if (t117 != 4294934554U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x542 = INT64_MIN;
	int8_t x544 = 1;
	uint32_t t118 = 1743368U;

    t118 = (((x541<=x542)|x543)+x544);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x546 = -1;
	static uint8_t x547 = 85U;
	int8_t x548 = 1;
	volatile int32_t t119 = 150;

    t119 = (((x545<=x546)|x547)+x548);

    if (t119 != 86) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x549 = -1LL;
	int8_t x550 = -1;
	uint32_t x551 = 5U;
	uint16_t x552 = 474U;
	static uint32_t t120 = 89784U;

    t120 = (((x549<=x550)|x551)+x552);

    if (t120 != 479U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x553 = 12894516U;
	static uint32_t x554 = 236U;
	uint8_t x555 = 25U;

    t121 = (((x553<=x554)|x555)+x556);

    if (t121 != 152) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x557 = INT32_MIN;
	int32_t x558 = -22984;
	int32_t x559 = INT32_MIN;
	volatile int32_t t122 = INT32_MIN;

    t122 = (((x557<=x558)|x559)+x560);

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x561 = INT32_MIN;
	static volatile uint8_t x562 = 91U;
	int8_t x563 = 2;
	int64_t x564 = -1LL;
	static int64_t t123 = 971326642927LL;

    t123 = (((x561<=x562)|x563)+x564);

    if (t123 != 2LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x565 = -1;
	static volatile int16_t x567 = 265;
	volatile int32_t t124 = 650519;

    t124 = (((x565<=x566)|x567)+x568);

    if (t124 != -518) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x570 = 1U;
	int64_t t125 = 17585880504764248LL;

    t125 = (((x569<=x570)|x571)+x572);

    if (t125 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x573 = 30U;
	int16_t x574 = 9446;
	int64_t x575 = 76061112843462LL;
	int64_t x576 = INT64_MIN;
	static volatile int64_t t126 = -16117369LL;

    t126 = (((x573<=x574)|x575)+x576);

    if (t126 != -9223295975741932345LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x577 = 478;
	int32_t x578 = INT32_MIN;
	static volatile int32_t t127 = -66745;

    t127 = (((x577<=x578)|x579)+x580);

    if (t127 != 2430) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x581 = UINT16_MAX;
	int32_t x582 = INT32_MIN;
	static int16_t x583 = 1392;
	uint8_t x584 = UINT8_MAX;
	volatile int32_t t128 = 7635891;

    t128 = (((x581<=x582)|x583)+x584);

    if (t128 != 1647) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x585 = -24;
	int32_t x587 = 1;

    t129 = (((x585<=x586)|x587)+x588);

    if (t129 != 32768) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x589 = 345580963706494852LLU;
	uint64_t x590 = 38317539LLU;
	uint32_t x591 = 6U;
	uint32_t t130 = 1736728273U;

    t130 = (((x589<=x590)|x591)+x592);

    if (t130 != 261U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x593 = 3;
	uint8_t x595 = 73U;
	int64_t x596 = 31096547LL;
	static int64_t t131 = 12232LL;

    t131 = (((x593<=x594)|x595)+x596);

    if (t131 != 31096620LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x598 = INT16_MAX;
	volatile int64_t x599 = INT64_MIN;
	int64_t x600 = -1LL;

    t132 = (((x597<=x598)|x599)+x600);

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x601 = 1U;
	int16_t x602 = -1;
	int8_t x603 = INT8_MIN;
	volatile uint64_t x604 = 5435962013789172881LLU;
	volatile uint64_t t133 = 942017589065LLU;

    t133 = (((x601<=x602)|x603)+x604);

    if (t133 != 5435962013789172753LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x605 = INT32_MIN;
	int8_t x606 = 1;
	uint64_t t134 = 372915539992190LLU;

    t134 = (((x605<=x606)|x607)+x608);

    if (t134 != 5106438865744656LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x609 = 14U;
	int16_t x610 = INT16_MIN;
	static uint8_t x611 = 102U;
	static int64_t x612 = INT64_MIN;
	volatile int64_t t135 = -38745173523LL;

    t135 = (((x609<=x610)|x611)+x612);

    if (t135 != -9223372036854775706LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x613 = UINT64_MAX;
	static volatile uint8_t x615 = 0U;
	int64_t x616 = -1LL;
	volatile int64_t t136 = 68708162LL;

    t136 = (((x613<=x614)|x615)+x616);

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x617 = -1;
	int16_t x618 = INT16_MIN;
	uint16_t x620 = UINT16_MAX;

    t137 = (((x617<=x618)|x619)+x620);

    if (t137 != 65534) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x621 = UINT8_MAX;
	int32_t x622 = INT32_MIN;
	int8_t x624 = INT8_MIN;

    t138 = (((x621<=x622)|x623)+x624);

    if (t138 != -256) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x625 = 944248011128LLU;
	uint8_t x626 = 32U;
	volatile int16_t x627 = -1;
	volatile int32_t x628 = -602581;
	static int32_t t139 = -15119;

    t139 = (((x625<=x626)|x627)+x628);

    if (t139 != -602582) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x629 = 3119;
	uint8_t x630 = 1U;
	static int32_t x631 = 5546;
	int16_t x632 = INT16_MIN;
	volatile int32_t t140 = 123414610;

    t140 = (((x629<=x630)|x631)+x632);

    if (t140 != -27222) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x633 = 0U;
	int8_t x634 = INT8_MIN;
	int64_t x635 = INT64_MIN;
	uint8_t x636 = 2U;
	volatile int64_t t141 = 1415932798393LL;

    t141 = (((x633<=x634)|x635)+x636);

    if (t141 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x637 = 308LLU;
	volatile int32_t x638 = -1;
	volatile uint16_t x639 = 30U;
	int32_t t142 = -12135;

    t142 = (((x637<=x638)|x639)+x640);

    if (t142 != 32798) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x642 = INT16_MAX;
	uint8_t x643 = UINT8_MAX;
	int8_t x644 = 29;
	volatile int32_t t143 = 1;

    t143 = (((x641<=x642)|x643)+x644);

    if (t143 != 284) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x645 = INT8_MAX;
	int64_t x646 = 1678228575LL;
	static volatile int8_t x647 = -1;
	uint64_t x648 = 2097910941165174550LLU;

    t144 = (((x645<=x646)|x647)+x648);

    if (t144 != 2097910941165174549LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x657 = 23LLU;
	uint64_t x658 = 3869LLU;
	static int8_t x659 = -1;
	static int32_t x660 = INT32_MAX;
	volatile int32_t t145 = 48;

    t145 = (((x657<=x658)|x659)+x660);

    if (t145 != 2147483646) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x661 = 2U;
	volatile int64_t x662 = -1LL;
	int64_t x664 = -1860934673377LL;
	int64_t t146 = 5864968239571980LL;

    t146 = (((x661<=x662)|x663)+x664);

    if (t146 != -1863082157025LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x665 = 6386121654315LLU;
	volatile uint8_t x666 = 46U;
	int8_t x667 = -1;

    t147 = (((x665<=x666)|x667)+x668);

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x669 = UINT32_MAX;
	uint64_t x670 = 16271049544LLU;
	int8_t x671 = INT8_MAX;
	volatile uint8_t x672 = 8U;
	static volatile int32_t t148 = 89;

    t148 = (((x669<=x670)|x671)+x672);

    if (t148 != 135) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x673 = 3U;
	int32_t x675 = -7159;
	int16_t x676 = 253;

    t149 = (((x673<=x674)|x675)+x676);

    if (t149 != -6906) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x677 = INT32_MIN;
	static uint16_t x678 = UINT16_MAX;
	uint16_t x679 = 12456U;
	uint64_t x680 = UINT64_MAX;
	volatile uint64_t t150 = 6844910653946151887LLU;

    t150 = (((x677<=x678)|x679)+x680);

    if (t150 != 12456LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x681 = 179U;
	uint64_t x682 = 117199626LLU;
	static int16_t x683 = INT16_MIN;
	int8_t x684 = INT8_MIN;
	int32_t t151 = 1021;

    t151 = (((x681<=x682)|x683)+x684);

    if (t151 != -32895) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x685 = -12;
	int32_t x687 = 3919;

    t152 = (((x685<=x686)|x687)+x688);

    if (t152 != 4174) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x689 = UINT32_MAX;
	int32_t x690 = -1;
	volatile uint64_t x691 = 622124610079165LLU;
	static uint64_t x692 = UINT64_MAX;
	volatile uint64_t t153 = 139076021604027831LLU;

    t153 = (((x689<=x690)|x691)+x692);

    if (t153 != 622124610079164LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x694 = UINT64_MAX;
	volatile uint64_t t154 = 838515004691375LLU;

    t154 = (((x693<=x694)|x695)+x696);

    if (t154 != 32772LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x697 = INT16_MIN;
	int64_t x698 = INT64_MAX;
	volatile int32_t x699 = 8507;
	int32_t x700 = -1;
	int32_t t155 = -14913;

    t155 = (((x697<=x698)|x699)+x700);

    if (t155 != 8506) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x702 = INT8_MAX;
	uint16_t x703 = 0U;
	volatile uint32_t t156 = 4295445U;

    t156 = (((x701<=x702)|x703)+x704);

    if (t156 != 10686353U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x705 = -1;
	int16_t x706 = 1;
	int64_t x707 = -1LL;
	int8_t x708 = -1;
	int64_t t157 = 135104089347185324LL;

    t157 = (((x705<=x706)|x707)+x708);

    if (t157 != -2LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x709 = -1;
	int64_t x710 = INT64_MIN;
	volatile uint32_t x711 = 511500465U;
	int16_t x712 = -1;

    t158 = (((x709<=x710)|x711)+x712);

    if (t158 != 511500464U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x713 = -1;
	int32_t x714 = -1;
	int64_t x715 = INT64_MIN;
	uint32_t x716 = 8U;
	int64_t t159 = 1LL;

    t159 = (((x713<=x714)|x715)+x716);

    if (t159 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x717 = 3778LL;
	uint32_t x720 = 26U;
	int64_t t160 = -3156852940512389518LL;

    t160 = (((x717<=x718)|x719)+x720);

    if (t160 != 25LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x726 = 10U;
	uint32_t x728 = 3U;
	uint32_t t161 = 4149U;

    t161 = (((x725<=x726)|x727)+x728);

    if (t161 != 2U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x729 = -1LL;
	int64_t x730 = INT64_MIN;
	int8_t x731 = 52;
	volatile uint16_t x732 = 58U;
	int32_t t162 = -18171;

    t162 = (((x729<=x730)|x731)+x732);

    if (t162 != 110) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x735 = 380091956423360957LLU;
	int8_t x736 = -3;
	static uint64_t t163 = 2068285515724168LLU;

    t163 = (((x733<=x734)|x735)+x736);

    if (t163 != 380091956423360954LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x738 = 3;
	uint32_t x739 = 137662U;
	int8_t x740 = INT8_MIN;
	uint32_t t164 = 5U;

    t164 = (((x737<=x738)|x739)+x740);

    if (t164 != 137534U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x745 = 1;
	static volatile int16_t x746 = -15796;
	int8_t x747 = -1;
	volatile int32_t t165 = 0;

    t165 = (((x745<=x746)|x747)+x748);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    

    t166 = (((x749<=x750)|x751)+x752);

    if (t166 != -8450749505166LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x757 = 19U;
	uint32_t x758 = 4019U;
	volatile int16_t x759 = INT16_MIN;
	int8_t x760 = INT8_MAX;
	int32_t t167 = -2;

    t167 = (((x757<=x758)|x759)+x760);

    if (t167 != -32640) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x761 = UINT64_MAX;
	int32_t x762 = -1;
	uint16_t x764 = 43U;

    t168 = (((x761<=x762)|x763)+x764);

    if (t168 != 50) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x766 = 20427805015210LLU;
	int32_t x767 = -1;

    t169 = (((x765<=x766)|x767)+x768);

    if (t169 != 974427713U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x769 = INT32_MIN;
	static int32_t x770 = INT32_MIN;
	uint64_t x771 = 75162146LLU;
	int16_t x772 = INT16_MIN;
	static volatile uint64_t t170 = 405488987276438138LLU;

    t170 = (((x769<=x770)|x771)+x772);

    if (t170 != 75129379LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x773 = UINT32_MAX;
	static int64_t x774 = -1LL;
	uint64_t x775 = UINT64_MAX;
	uint64_t t171 = 944944197LLU;

    t171 = (((x773<=x774)|x775)+x776);

    if (t171 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x777 = 773;
	volatile uint32_t x778 = 4812U;
	uint64_t x779 = 143830579174077312LLU;
	volatile int64_t x780 = 17346582987201452LL;
	volatile uint64_t t172 = 5082865LLU;

    t172 = (((x777<=x778)|x779)+x780);

    if (t172 != 161177162161278765LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x781 = -1LL;
	volatile uint8_t x782 = UINT8_MAX;
	int16_t x783 = 29;
	volatile int64_t t173 = -653LL;

    t173 = (((x781<=x782)|x783)+x784);

    if (t173 != 28LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x785 = UINT16_MAX;
	int64_t x787 = INT64_MAX;
	volatile int64_t t174 = 990023739076548LL;

    t174 = (((x785<=x786)|x787)+x788);

    if (t174 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x793 = INT16_MIN;
	int8_t x794 = -43;
	int64_t x796 = INT64_MIN;
	static volatile uint64_t t175 = 1267339207695228LLU;

    t175 = (((x793<=x794)|x795)+x796);

    if (t175 != 9223376220626491353LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x797 = -1649807348597LL;
	int64_t x798 = INT64_MIN;
	uint8_t x800 = 8U;
	static int32_t t176 = 130;

    t176 = (((x797<=x798)|x799)+x800);

    if (t176 != 7) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x801 = -1;
	static uint32_t x802 = 31U;
	uint32_t x803 = 23U;
	static int16_t x804 = INT16_MIN;
	static volatile uint32_t t177 = 85U;

    t177 = (((x801<=x802)|x803)+x804);

    if (t177 != 4294934551U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x808 = INT32_MIN;
	int32_t t178 = -2564;

    t178 = (((x805<=x806)|x807)+x808);

    if (t178 != -2147483563) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x809 = -1011;
	static int8_t x810 = INT8_MIN;
	static volatile int32_t x811 = INT32_MIN;
	int32_t t179 = -43768;

    t179 = (((x809<=x810)|x811)+x812);

    if (t179 != -2147483646) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x813 = INT8_MIN;
	volatile int8_t x814 = -1;
	int64_t x815 = 0LL;
	static uint64_t x816 = UINT64_MAX;
	uint64_t t180 = 385828824207LLU;

    t180 = (((x813<=x814)|x815)+x816);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x821 = 99U;
	int32_t x822 = INT32_MIN;
	uint16_t x823 = 17U;
	uint8_t x824 = 0U;
	volatile int32_t t181 = 13;

    t181 = (((x821<=x822)|x823)+x824);

    if (t181 != 17) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x826 = 2890U;
	uint64_t x827 = 441LLU;
	uint16_t x828 = UINT16_MAX;
	volatile uint64_t t182 = 231998338LLU;

    t182 = (((x825<=x826)|x827)+x828);

    if (t182 != 65976LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x829 = 167083690911636LL;
	volatile int8_t x830 = INT8_MIN;
	int32_t x831 = INT32_MIN;
	int64_t x832 = -1LL;

    t183 = (((x829<=x830)|x831)+x832);

    if (t183 != -2147483649LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x833 = 3150U;
	int8_t x835 = INT8_MIN;
	static volatile int32_t x836 = INT32_MAX;
	static int32_t t184 = -184877;

    t184 = (((x833<=x834)|x835)+x836);

    if (t184 != 2147483519) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x837 = INT64_MIN;
	int8_t x840 = 0;
	volatile int32_t t185 = 11;

    t185 = (((x837<=x838)|x839)+x840);

    if (t185 != 27) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x841 = 3769U;
	uint8_t x842 = 26U;
	uint32_t x843 = 3U;
	int16_t x844 = INT16_MIN;
	static uint32_t t186 = 1626563U;

    t186 = (((x841<=x842)|x843)+x844);

    if (t186 != 4294934531U) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x846 = INT32_MAX;
	volatile uint64_t t187 = 1LLU;

    t187 = (((x845<=x846)|x847)+x848);

    if (t187 != 1075484406553LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x850 = INT16_MIN;
	static uint8_t x851 = 102U;
	int32_t x852 = -1;
	volatile int32_t t188 = -1561019;

    t188 = (((x849<=x850)|x851)+x852);

    if (t188 != 102) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x853 = 1385U;
	int64_t x854 = INT64_MAX;
	uint8_t x855 = 61U;
	volatile int8_t x856 = -16;
	int32_t t189 = 1;

    t189 = (((x853<=x854)|x855)+x856);

    if (t189 != 45) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x857 = 89U;
	static int16_t x858 = INT16_MAX;
	uint64_t x859 = 4661713130643707693LLU;
	uint32_t x860 = UINT32_MAX;
	volatile uint64_t t190 = 653538612400907440LLU;

    t190 = (((x857<=x858)|x859)+x860);

    if (t190 != 4661713134938674988LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x861 = INT32_MIN;
	uint64_t x862 = 82999242217726613LLU;
	int8_t x864 = -1;

    t191 = (((x861<=x862)|x863)+x864);

    if (t191 != -129) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x865 = 5952717LLU;
	int32_t x866 = -1;
	uint64_t x867 = 566419916LLU;
	uint8_t x868 = 84U;
	uint64_t t192 = 284535122398620443LLU;

    t192 = (((x865<=x866)|x867)+x868);

    if (t192 != 566420001LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x874 = UINT16_MAX;
	static uint64_t x875 = 3029631307460383291LLU;
	int32_t x876 = INT32_MIN;
	uint64_t t193 = 84301824792565LLU;

    t193 = (((x873<=x874)|x875)+x876);

    if (t193 != 3029631305312899643LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x877 = 112;
	int32_t x878 = INT32_MIN;
	volatile int16_t x879 = -1;
	static volatile int32_t x880 = INT32_MAX;
	volatile int32_t t194 = 40578;

    t194 = (((x877<=x878)|x879)+x880);

    if (t194 != 2147483646) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x886 = -58LL;
	volatile int64_t x887 = -1LL;
	int64_t t195 = -10LL;

    t195 = (((x885<=x886)|x887)+x888);

    if (t195 != -2LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x893 = 1;
	static uint64_t x894 = 113589LLU;
	uint64_t x895 = 130183599183491629LLU;
	volatile int64_t x896 = INT64_MIN;
	volatile uint64_t t196 = 209364581LLU;

    t196 = (((x893<=x894)|x895)+x896);

    if (t196 != 9353555636038267437LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x897 = INT8_MIN;
	int32_t x898 = -1;
	int32_t x899 = INT32_MAX;
	int8_t x900 = INT8_MIN;
	int32_t t197 = -106985;

    t197 = (((x897<=x898)|x899)+x900);

    if (t197 != 2147483519) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x901 = -1;
	int64_t x902 = -1LL;
	static uint16_t x903 = UINT16_MAX;
	static volatile uint16_t x904 = 21U;
	volatile int32_t t198 = 107713351;

    t198 = (((x901<=x902)|x903)+x904);

    if (t198 != 65556) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x909 = 25LLU;
	int64_t x910 = 688964964164278LL;
	uint32_t x911 = UINT32_MAX;
	volatile int64_t x912 = -1LL;
	int64_t t199 = -25810294347231LL;

    t199 = (((x909<=x910)|x911)+x912);

    if (t199 != 4294967294LL) { NG(); } else { ; }
	
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

