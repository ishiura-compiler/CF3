
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

int32_t x1 = -1;
int16_t x3 = INT16_MIN;
int8_t x8 = -1;
volatile int64_t t1 = -261765609019383418LL;
static int16_t x9 = INT16_MAX;
static int64_t t2 = 1041911575LL;
int8_t x22 = INT8_MIN;
volatile int8_t x23 = INT8_MAX;
uint16_t x24 = 694U;
int64_t x30 = INT64_MIN;
int16_t x33 = INT16_MAX;
int64_t x49 = 6LL;
static volatile int64_t t11 = INT64_MAX;
uint16_t x68 = 14521U;
static int32_t t16 = -1;
int8_t x73 = 1;
int32_t x74 = -2912389;
static int64_t t18 = 10178066239LL;
volatile int32_t x82 = INT32_MAX;
uint8_t x87 = 62U;
int64_t x88 = INT64_MAX;
static volatile int64_t x91 = INT64_MIN;
int32_t x92 = INT32_MIN;
volatile int64_t t22 = -1LL;
uint32_t t23 = 17487U;
uint64_t t24 = 481LLU;
volatile uint32_t x108 = UINT32_MAX;
int64_t t26 = -3704444601LL;
int8_t x116 = 0;
uint64_t x123 = 1276454857LLU;
uint8_t x127 = 14U;
volatile int32_t t30 = -8868985;
volatile int16_t x130 = INT16_MIN;
int16_t x132 = INT16_MAX;
int64_t t32 = 266468161LL;
int32_t x140 = INT32_MIN;
int64_t t33 = 463504113998LL;
uint32_t x149 = 239U;
volatile uint16_t x161 = 26U;
static int32_t x162 = INT32_MIN;
int32_t x163 = INT32_MIN;
static uint64_t x165 = 29752LLU;
int32_t x168 = INT32_MAX;
uint16_t x170 = UINT16_MAX;
uint64_t x172 = 1922LLU;
static int8_t x178 = -1;
int16_t x180 = -1;
int16_t x185 = -531;
int16_t x188 = 1;
static int32_t x198 = 200;
uint64_t x203 = 1607975115720LLU;
uint32_t t48 = 252796U;
int32_t x209 = 421;
int32_t x215 = -997715;
int16_t x217 = 114;
volatile int16_t x219 = -1;
static uint64_t t52 = 6LLU;
int32_t x235 = INT32_MIN;
volatile uint32_t t56 = 831U;
int16_t x259 = INT16_MIN;
int64_t x267 = INT64_MIN;
static uint8_t x269 = 1U;
volatile uint16_t x275 = UINT16_MAX;
uint16_t x277 = 5444U;
int64_t x281 = -1LL;
uint16_t x288 = 2452U;
static int64_t x298 = -1LL;
volatile int64_t t68 = 11823LL;
static int8_t x301 = -1;
int16_t x303 = 0;
int32_t t69 = INT32_MAX;
int8_t x307 = 13;
static int8_t x311 = -1;
int32_t x312 = 1;
uint16_t x314 = 1233U;
int16_t x320 = -1;
uint32_t x324 = UINT32_MAX;
volatile uint32_t t74 = UINT32_MAX;
int32_t x332 = -1;
int32_t x333 = INT32_MIN;
int64_t x352 = -58LL;
int16_t x361 = INT16_MAX;
int8_t x363 = -2;
static uint16_t x364 = UINT16_MAX;
int64_t x371 = INT64_MIN;
volatile uint64_t t85 = 673LLU;
volatile int16_t x374 = -1;
volatile int64_t x377 = INT64_MIN;
int8_t x380 = INT8_MAX;
static volatile uint64_t x388 = 17096150027LLU;
uint8_t x392 = 12U;
static int8_t x393 = INT8_MIN;
int8_t x420 = 1;
int8_t x421 = -1;
static volatile int32_t x426 = INT32_MIN;
int8_t x428 = -1;
static uint64_t t102 = 103514380915LLU;
int16_t x447 = INT16_MAX;
static uint16_t x448 = UINT16_MAX;
int32_t x452 = -3657;
int8_t x458 = -1;
int8_t x464 = -5;
int64_t t107 = -53LL;
volatile int32_t x476 = -1;
uint16_t x488 = 22699U;
static int32_t t113 = -749848;
uint32_t x495 = 5U;
int32_t x498 = -242851971;
int32_t x499 = -11145385;
static int8_t x500 = 0;
volatile uint32_t t116 = 679U;
volatile int64_t t117 = 410LL;
int64_t x514 = INT64_MAX;
volatile int32_t t122 = 1;
uint16_t x529 = 2709U;
volatile uint64_t t123 = 174925698277550LLU;
uint64_t t124 = 149293023221312LLU;
uint64_t x541 = UINT64_MAX;
int16_t x544 = -1;
uint64_t t126 = UINT64_MAX;
int32_t x556 = -1;
uint16_t x557 = 0U;
uint64_t x562 = UINT64_MAX;
int64_t x563 = INT64_MAX;
uint16_t x565 = 145U;
int64_t t131 = 3140118215436LL;
static volatile uint64_t x579 = 22935LLU;
uint32_t x582 = UINT32_MAX;
static int8_t x583 = INT8_MIN;
int64_t x586 = INT64_MIN;
int8_t x587 = -13;
int32_t x593 = INT32_MIN;
volatile int16_t x594 = INT16_MAX;
volatile int8_t x597 = 2;
static int16_t x600 = INT16_MIN;
int16_t x603 = -1;
int8_t x604 = 3;
volatile int32_t t140 = -23155723;
static int8_t x615 = -1;
volatile uint64_t t143 = UINT64_MAX;
uint32_t x620 = UINT32_MAX;
volatile int64_t t144 = 177425148405LL;
int8_t x631 = INT8_MAX;
static volatile int64_t x639 = INT64_MAX;
static int64_t x641 = -1LL;
int16_t x643 = INT16_MIN;
int8_t x660 = INT8_MAX;
static int64_t x661 = INT64_MIN;
static int64_t x667 = INT64_MAX;
static uint64_t x676 = 2082050678993041802LLU;
uint64_t t157 = 529517466991LLU;
volatile int64_t t158 = -2249855071772234LL;
static int32_t x688 = INT32_MIN;
static int32_t x690 = INT32_MIN;
int64_t x692 = INT64_MAX;
int64_t t161 = -61LL;
int64_t x693 = -190LL;
uint64_t t163 = UINT64_MAX;
int32_t x704 = -47810237;
int8_t x706 = INT8_MIN;
volatile int32_t x708 = -1;
volatile uint64_t t166 = UINT64_MAX;
static int8_t x718 = INT8_MIN;
static volatile uint32_t x719 = 209109U;
static int64_t x726 = 25348610LL;
volatile uint32_t x728 = 104U;
static uint32_t x731 = UINT32_MAX;
volatile int32_t x739 = -243162;
volatile int64_t t173 = -11720183443060034LL;
int64_t x749 = 305350480LL;
volatile int64_t x752 = INT64_MIN;
int8_t x757 = -1;
volatile int8_t x763 = 7;
uint64_t x767 = UINT64_MAX;
uint32_t x778 = 41083U;
volatile int64_t t182 = 7369771769LL;
uint16_t x789 = 1993U;
static uint16_t x793 = 12002U;
volatile int8_t x795 = 0;
static volatile int64_t t185 = -5525055327279LL;
int8_t x797 = 0;
int8_t x798 = INT8_MIN;
int32_t x811 = -1;
int64_t x816 = INT64_MIN;
static int64_t x817 = -1LL;
uint64_t x818 = 56329LLU;
uint64_t t191 = 28162762072231672LLU;
volatile int64_t x825 = INT64_MAX;
uint64_t x829 = 25LLU;
int32_t x834 = INT32_MIN;
int32_t x844 = INT32_MIN;
int64_t x846 = INT64_MAX;
uint32_t x847 = UINT32_MAX;
static int16_t x848 = 117;
static volatile int64_t t198 = 219LL;


void f0(void) {
    	volatile int16_t x2 = -3866;
	int16_t x4 = -1;
	volatile int32_t t0 = -3568;

    t0 = (((x1/x2)+x3)|x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1;
	int32_t x6 = -1082;
	static int64_t x7 = -8788319754838079LL;

    t1 = (((x5/x6)+x7)|x8);

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x10 = 12;
	int32_t x11 = -1;
	int64_t x12 = -50LL;

    t2 = (((x9/x10)+x11)|x12);

    if (t2 != -17LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 9877LL;
	static uint16_t x14 = 985U;
	int32_t x15 = -4320200;
	static int32_t x16 = INT32_MIN;
	volatile int64_t t3 = 143LL;

    t3 = (((x13/x14)+x15)|x16);

    if (t3 != -4320190LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	static uint16_t x18 = UINT16_MAX;
	int64_t x19 = INT64_MIN;
	int8_t x20 = -7;
	volatile int64_t t4 = 13477LL;

    t4 = (((x17/x18)+x19)|x20);

    if (t4 != -7LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	volatile int64_t t5 = 26258728394267LL;

    t5 = (((x21/x22)+x23)|x24);

    if (t5 != -72057594037927242LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = UINT16_MAX;
	int64_t x26 = INT64_MAX;
	uint64_t x27 = UINT64_MAX;
	uint32_t x28 = UINT32_MAX;
	uint64_t t6 = UINT64_MAX;

    t6 = (((x25/x26)+x27)|x28);

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x29 = INT64_MIN;
	uint8_t x31 = 106U;
	int8_t x32 = 1;
	volatile int64_t t7 = 4260309273707601712LL;

    t7 = (((x29/x30)+x31)|x32);

    if (t7 != 107LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x34 = 26660;
	int64_t x35 = INT64_MIN;
	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = -1980675LL;

    t8 = (((x33/x34)+x35)|x36);

    if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	int32_t x38 = -94741;
	volatile int8_t x39 = INT8_MIN;
	int64_t x40 = -13901759298228LL;
	volatile int64_t t9 = -685542763020LL;

    t9 = (((x37/x38)+x39)|x40);

    if (t9 != -52LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = UINT8_MAX;
	static int32_t x46 = INT32_MAX;
	static uint8_t x47 = 23U;
	uint32_t x48 = 8674296U;
	volatile uint32_t t10 = 102246U;

    t10 = (((x45/x46)+x47)|x48);

    if (t10 != 8674303U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x50 = -7;
	static int64_t x51 = INT64_MAX;
	int16_t x52 = 0;

    t11 = (((x49/x50)+x51)|x52);

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x53 = INT64_MIN;
	uint16_t x54 = 1U;
	volatile uint8_t x55 = UINT8_MAX;
	volatile int8_t x56 = INT8_MIN;
	volatile int64_t t12 = 6719070LL;

    t12 = (((x53/x54)+x55)|x56);

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -1;
	int16_t x58 = -2;
	volatile int16_t x59 = 7;
	int16_t x60 = -1;
	volatile int32_t t13 = 978294;

    t13 = (((x57/x58)+x59)|x60);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = -1;
	int16_t x62 = -1;
	volatile int16_t x63 = -1;
	int32_t x64 = INT32_MIN;
	volatile int32_t t14 = INT32_MIN;

    t14 = (((x61/x62)+x63)|x64);

    if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MAX;
	int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MAX;
	volatile int32_t t15 = 556481184;

    t15 = (((x65/x66)+x67)|x68);

    if (t15 != -18247) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = -1;
	int8_t x70 = INT8_MIN;
	volatile int16_t x71 = INT16_MAX;
	volatile int16_t x72 = INT16_MIN;

    t16 = (((x69/x70)+x71)|x72);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x75 = UINT64_MAX;
	int32_t x76 = -3352;
	uint64_t t17 = UINT64_MAX;

    t17 = (((x73/x74)+x75)|x76);

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x77 = 22U;
	static int64_t x78 = -1LL;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = 18U;

    t18 = (((x77/x78)+x79)|x80);

    if (t18 != -32774LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MIN;
	int32_t x83 = -1;
	volatile int32_t x84 = -1336736;
	volatile int32_t t19 = 154218;

    t19 = (((x81/x82)+x83)|x84);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x85 = UINT8_MAX;
	int64_t x86 = INT64_MAX;
	volatile int64_t t20 = INT64_MAX;

    t20 = (((x85/x86)+x87)|x88);

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x89 = 959646U;
	static int16_t x90 = INT16_MIN;
	volatile int64_t t21 = -30LL;

    t21 = (((x89/x90)+x91)|x92);

    if (t21 != -2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = -1;
	static int64_t x94 = 416209LL;
	volatile int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MIN;

    t22 = (((x93/x94)+x95)|x96);

    if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x97 = 9U;
	static int16_t x98 = -1;
	uint32_t x99 = 118306U;
	int32_t x100 = INT32_MAX;

    t23 = (((x97/x98)+x99)|x100);

    if (t23 != 2147483647U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x101 = 39LLU;
	uint16_t x102 = 420U;
	int32_t x103 = INT32_MIN;
	volatile int64_t x104 = INT64_MIN;

    t24 = (((x101/x102)+x103)|x104);

    if (t24 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -1;
	uint8_t x106 = UINT8_MAX;
	volatile int32_t x107 = -18954076;
	uint32_t t25 = UINT32_MAX;

    t25 = (((x105/x106)+x107)|x108);

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x109 = UINT32_MAX;
	static uint16_t x110 = UINT16_MAX;
	uint16_t x111 = UINT16_MAX;
	int64_t x112 = -1LL;

    t26 = (((x109/x110)+x111)|x112);

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MIN;
	uint8_t x114 = 6U;
	uint16_t x115 = 26U;
	int32_t t27 = -806835;

    t27 = (((x113/x114)+x115)|x116);

    if (t27 != -357913915) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = INT8_MIN;
	uint64_t x118 = 274753LLU;
	volatile uint32_t x119 = 265555806U;
	int32_t x120 = 60670533;
	uint64_t t28 = 185762899008551929LLU;

    t28 = (((x117/x118)+x119)|x120);

    if (t28 != 67139664870357LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = 61192159U;
	static int64_t x122 = -73083040930166635LL;
	int8_t x124 = -1;
	uint64_t t29 = UINT64_MAX;

    t29 = (((x121/x122)+x123)|x124);

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x125 = 57U;
	int16_t x126 = 296;
	static int32_t x128 = 0;

    t30 = (((x125/x126)+x127)|x128);

    if (t30 != 14) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x129 = 1U;
	int8_t x131 = 0;
	uint32_t t31 = 2U;

    t31 = (((x129/x130)+x131)|x132);

    if (t31 != 32767U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x133 = INT64_MIN;
	int64_t x134 = -4004333190LL;
	uint32_t x135 = UINT32_MAX;
	int16_t x136 = INT16_MIN;

    t32 = (((x133/x134)+x135)|x136);

    if (t32 != -13227LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 0U;
	int64_t x138 = INT64_MIN;
	int8_t x139 = 1;

    t33 = (((x137/x138)+x139)|x140);

    if (t33 != -2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = -1;
	static volatile int64_t x142 = -22LL;
	int64_t x143 = -1849182519397LL;
	int16_t x144 = INT16_MAX;
	volatile int64_t t34 = -6874655365976LL;

    t34 = (((x141/x142)+x143)|x144);

    if (t34 != -1849182519297LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = -1;
	uint16_t x146 = UINT16_MAX;
	int8_t x147 = INT8_MIN;
	uint16_t x148 = 1U;
	volatile int32_t t35 = 31618;

    t35 = (((x145/x146)+x147)|x148);

    if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x150 = INT64_MIN;
	volatile uint16_t x151 = 115U;
	int32_t x152 = INT32_MAX;
	volatile int64_t t36 = -159563468LL;

    t36 = (((x149/x150)+x151)|x152);

    if (t36 != 2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x153 = UINT8_MAX;
	static uint16_t x154 = 26692U;
	int64_t x155 = -15107651LL;
	int64_t x156 = -358LL;
	int64_t t37 = 997958934247855016LL;

    t37 = (((x153/x154)+x155)|x156);

    if (t37 != -65LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x164 = -1;
	volatile int32_t t38 = 22;

    t38 = (((x161/x162)+x163)|x164);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x166 = -309;
	static uint8_t x167 = 2U;
	static volatile uint64_t t39 = 15759LLU;

    t39 = (((x165/x166)+x167)|x168);

    if (t39 != 2147483647LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = INT64_MIN;
	static int8_t x171 = 1;
	volatile uint64_t t40 = 3300068830LLU;

    t40 = (((x169/x170)+x171)|x172);

    if (t40 != 18446603334073681795LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = 45;
	uint16_t x174 = 416U;
	int32_t x175 = INT32_MAX;
	volatile uint64_t x176 = 108984255LLU;
	static volatile uint64_t t41 = 114289995484553643LLU;

    t41 = (((x173/x174)+x175)|x176);

    if (t41 != 2147483647LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = -1LL;
	volatile int8_t x179 = INT8_MAX;
	volatile int64_t t42 = 309106385071LL;

    t42 = (((x177/x178)+x179)|x180);

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x181 = -1;
	uint64_t x182 = UINT64_MAX;
	int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MIN;
	uint64_t t43 = 19LLU;

    t43 = (((x181/x182)+x183)|x184);

    if (t43 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x186 = 9U;
	uint8_t x187 = 12U;
	static volatile int32_t t44 = 220955495;

    t44 = (((x185/x186)+x187)|x188);

    if (t44 != -47) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MIN;
	uint64_t x195 = 38441LLU;
	volatile int8_t x196 = 17;
	static uint64_t t45 = 74LLU;

    t45 = (((x193/x194)+x195)|x196);

    if (t45 != 38457LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x197 = UINT32_MAX;
	int64_t x199 = INT64_MIN;
	int32_t x200 = 223;
	int64_t t46 = -818034LL;

    t46 = (((x197/x198)+x199)|x200);

    if (t46 != -9223372036833300769LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = -1;
	int32_t x202 = INT32_MAX;
	static volatile uint64_t x204 = 31069530909373279LLU;
	uint64_t t47 = 624509890163677LLU;

    t47 = (((x201/x202)+x203)|x204);

    if (t47 != 31069960452832223LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x205 = 665732840U;
	static volatile int8_t x206 = INT8_MAX;
	volatile uint16_t x207 = 274U;
	int32_t x208 = -2;

    t48 = (((x205/x206)+x207)|x208);

    if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x210 = UINT16_MAX;
	int16_t x211 = INT16_MIN;
	static uint64_t x212 = 27389654138LLU;
	uint64_t t49 = 83881015124902663LLU;

    t49 = (((x209/x210)+x211)|x212);

    if (t49 != 18446744073709548666LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x213 = INT32_MAX;
	uint32_t x214 = 3067271U;
	uint16_t x216 = 4179U;
	volatile uint32_t t50 = 1560U;

    t50 = (((x213/x214)+x215)|x216);

    if (t50 != 4293974395U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x218 = INT32_MIN;
	int8_t x220 = -1;
	volatile int32_t t51 = 300;

    t51 = (((x217/x218)+x219)|x220);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x221 = 2943733884LL;
	uint64_t x222 = 5659309457LLU;
	int64_t x223 = INT64_MAX;
	uint32_t x224 = 1022263U;

    t52 = (((x221/x222)+x223)|x224);

    if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x225 = 664U;
	uint16_t x226 = UINT16_MAX;
	int16_t x227 = 229;
	static int32_t x228 = INT32_MAX;
	static int32_t t53 = INT32_MAX;

    t53 = (((x225/x226)+x227)|x228);

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x229 = 9667U;
	static volatile int64_t x230 = -1LL;
	int16_t x231 = 3020;
	static int8_t x232 = INT8_MIN;
	int64_t t54 = 7430582767LL;

    t54 = (((x229/x230)+x231)|x232);

    if (t54 != -119LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = 0;
	uint32_t x234 = 30892352U;
	static int32_t x236 = -117461;
	volatile uint32_t t55 = 3750U;

    t55 = (((x233/x234)+x235)|x236);

    if (t55 != 4294849835U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x241 = 14U;
	uint32_t x242 = 1576268772U;
	int16_t x243 = 9;
	int16_t x244 = 25;

    t56 = (((x241/x242)+x243)|x244);

    if (t56 != 25U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x245 = 16677U;
	uint8_t x246 = UINT8_MAX;
	static uint32_t x247 = 36578U;
	uint8_t x248 = 1U;
	uint32_t t57 = 2139289U;

    t57 = (((x245/x246)+x247)|x248);

    if (t57 != 36643U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x249 = INT16_MIN;
	int64_t x250 = -1LL;
	static int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MAX;
	int64_t t58 = 4119977401165029770LL;

    t58 = (((x249/x250)+x251)|x252);

    if (t58 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x253 = 126U;
	uint16_t x254 = UINT16_MAX;
	volatile int16_t x255 = 1;
	static uint32_t x256 = 158329U;
	uint32_t t59 = 56350816U;

    t59 = (((x253/x254)+x255)|x256);

    if (t59 != 158329U) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x257 = 0LLU;
	int8_t x258 = -1;
	int32_t x260 = -1;
	uint64_t t60 = UINT64_MAX;

    t60 = (((x257/x258)+x259)|x260);

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x265 = UINT16_MAX;
	int64_t x266 = INT64_MAX;
	static uint32_t x268 = UINT32_MAX;
	int64_t t61 = 11887725703LL;

    t61 = (((x265/x266)+x267)|x268);

    if (t61 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x270 = 7700U;
	int32_t x271 = 710329345;
	uint64_t x272 = 487020280381366LLU;
	volatile uint64_t t62 = 1761757318922LLU;

    t62 = (((x269/x270)+x271)|x272);

    if (t62 != 487020281462711LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x273 = -2;
	int16_t x274 = INT16_MIN;
	uint64_t x276 = 99381864011462LLU;
	static uint64_t t63 = 488630869989324LLU;

    t63 = (((x273/x274)+x275)|x276);

    if (t63 != 99381864038399LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x278 = 41248228LLU;
	static uint32_t x279 = 98247599U;
	int32_t x280 = 195941481;
	static volatile uint64_t t64 = 6704941913LLU;

    t64 = (((x277/x278)+x279)|x280);

    if (t64 != 268433391LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x282 = 458710419207LLU;
	int8_t x283 = 1;
	uint16_t x284 = 1995U;
	volatile uint64_t t65 = 892926854523202154LLU;

    t65 = (((x281/x282)+x283)|x284);

    if (t65 != 40214495LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x285 = UINT8_MAX;
	uint64_t x286 = 69773939803LLU;
	int64_t x287 = INT64_MAX;
	volatile uint64_t t66 = 470LLU;

    t66 = (((x285/x286)+x287)|x288);

    if (t66 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x289 = UINT16_MAX;
	uint32_t x290 = 1903U;
	uint16_t x291 = 8446U;
	uint8_t x292 = UINT8_MAX;
	volatile uint32_t t67 = 6947906U;

    t67 = (((x289/x290)+x291)|x292);

    if (t67 != 8703U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x297 = INT16_MAX;
	uint8_t x299 = 44U;
	uint8_t x300 = 40U;

    t68 = (((x297/x298)+x299)|x300);

    if (t68 != -32723LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x302 = UINT8_MAX;
	volatile int32_t x304 = INT32_MAX;

    t69 = (((x301/x302)+x303)|x304);

    if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x305 = -1;
	uint16_t x306 = 125U;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t70 = UINT64_MAX;

    t70 = (((x305/x306)+x307)|x308);

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x309 = -1;
	static uint16_t x310 = UINT16_MAX;
	static volatile int32_t t71 = -247400;

    t71 = (((x309/x310)+x311)|x312);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x313 = 13;
	uint16_t x315 = 3908U;
	int16_t x316 = INT16_MAX;
	int32_t t72 = 31126115;

    t72 = (((x313/x314)+x315)|x316);

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x317 = 0U;
	int64_t x318 = -1LL;
	uint64_t x319 = 1392777679LLU;
	static uint64_t t73 = UINT64_MAX;

    t73 = (((x317/x318)+x319)|x320);

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x321 = -71568700;
	int32_t x322 = 19674590;
	uint16_t x323 = 1U;

    t74 = (((x321/x322)+x323)|x324);

    if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x325 = INT64_MIN;
	static int8_t x326 = 58;
	uint64_t x327 = 30348LLU;
	static int16_t x328 = INT16_MAX;
	uint64_t t75 = 90LLU;

    t75 = (((x325/x326)+x327)|x328);

    if (t75 != 18287720417901772799LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x329 = UINT8_MAX;
	static int32_t x330 = INT32_MIN;
	volatile uint32_t x331 = 147076118U;
	uint32_t t76 = UINT32_MAX;

    t76 = (((x329/x330)+x331)|x332);

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x334 = INT64_MIN;
	volatile int16_t x335 = 417;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t77 = UINT64_MAX;

    t77 = (((x333/x334)+x335)|x336);

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x341 = INT8_MIN;
	uint8_t x342 = 15U;
	int64_t x343 = 17LL;
	uint16_t x344 = 9494U;
	volatile int64_t t78 = 22083788LL;

    t78 = (((x341/x342)+x343)|x344);

    if (t78 != 9503LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x345 = UINT32_MAX;
	static uint64_t x346 = UINT64_MAX;
	int16_t x347 = INT16_MIN;
	volatile uint32_t x348 = UINT32_MAX;
	uint64_t t79 = UINT64_MAX;

    t79 = (((x345/x346)+x347)|x348);

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint16_t x349 = 5U;
	int16_t x350 = INT16_MAX;
	int32_t x351 = -1;
	int64_t t80 = -733162485LL;

    t80 = (((x349/x350)+x351)|x352);

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x353 = INT64_MAX;
	int32_t x354 = INT32_MAX;
	uint16_t x355 = 44U;
	int32_t x356 = INT32_MIN;
	volatile int64_t t81 = -97726271LL;

    t81 = (((x353/x354)+x355)|x356);

    if (t81 != -2147483602LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	int32_t x359 = -17;
	int32_t x360 = INT32_MIN;
	int64_t t82 = -17538618LL;

    t82 = (((x357/x358)+x359)|x360);

    if (t82 != -17LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x362 = INT16_MIN;
	int32_t t83 = 95952;

    t83 = (((x361/x362)+x363)|x364);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x365 = INT16_MAX;
	int64_t x366 = INT64_MAX;
	uint16_t x367 = 2U;
	static int16_t x368 = 17;
	int64_t t84 = 6772436308LL;

    t84 = (((x365/x366)+x367)|x368);

    if (t84 != 19LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x369 = -1;
	static volatile uint64_t x370 = UINT64_MAX;
	uint64_t x372 = 42767232028372LLU;

    t85 = (((x369/x370)+x371)|x372);

    if (t85 != 9223414804086804181LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x373 = 236729365U;
	int32_t x375 = -201;
	int8_t x376 = 3;
	static volatile uint32_t t86 = 2870736U;

    t86 = (((x373/x374)+x375)|x376);

    if (t86 != 4294967095U) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x378 = UINT64_MAX;
	int64_t x379 = INT64_MIN;
	static uint64_t t87 = 5931753702LLU;

    t87 = (((x377/x378)+x379)|x380);

    if (t87 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x381 = 3877;
	volatile int64_t x382 = INT64_MAX;
	int8_t x383 = -42;
	static int16_t x384 = INT16_MIN;
	volatile int64_t t88 = 2815320293217LL;

    t88 = (((x381/x382)+x383)|x384);

    if (t88 != -42LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x385 = INT8_MAX;
	int8_t x386 = INT8_MIN;
	static int32_t x387 = INT32_MIN;
	volatile uint64_t t89 = 14952487098570496LLU;

    t89 = (((x385/x386)+x387)|x388);

    if (t89 != 18446744073625832459LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x389 = 1LLU;
	static int32_t x390 = 87675175;
	int64_t x391 = 1083999489422744LL;
	uint64_t t90 = 5054748946311LLU;

    t90 = (((x389/x390)+x391)|x392);

    if (t90 != 1083999489422748LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x394 = UINT64_MAX;
	static int16_t x395 = -1;
	int32_t x396 = INT32_MAX;
	uint64_t t91 = UINT64_MAX;

    t91 = (((x393/x394)+x395)|x396);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x397 = 40718;
	volatile int64_t x398 = 200634LL;
	int32_t x399 = -4;
	int64_t x400 = INT64_MIN;
	int64_t t92 = 10058444LL;

    t92 = (((x397/x398)+x399)|x400);

    if (t92 != -4LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x401 = UINT64_MAX;
	static int8_t x402 = INT8_MAX;
	int8_t x403 = INT8_MAX;
	int64_t x404 = -1462471821228057LL;
	static volatile uint64_t t93 = 6LLU;

    t93 = (((x401/x402)+x403)|x404);

    if (t93 != 18446407570518869991LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x405 = 16057U;
	int16_t x406 = INT16_MIN;
	static int32_t x407 = -1;
	int16_t x408 = -3171;
	uint32_t t94 = UINT32_MAX;

    t94 = (((x405/x406)+x407)|x408);

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x409 = -1LL;
	int8_t x410 = INT8_MAX;
	int8_t x411 = INT8_MIN;
	int32_t x412 = INT32_MAX;
	int64_t t95 = 792460LL;

    t95 = (((x409/x410)+x411)|x412);

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x413 = -1;
	uint64_t x414 = UINT64_MAX;
	uint16_t x415 = UINT16_MAX;
	int32_t x416 = INT32_MAX;
	volatile uint64_t t96 = 50175263056862LLU;

    t96 = (((x413/x414)+x415)|x416);

    if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x417 = UINT8_MAX;
	uint32_t x418 = 4382760U;
	int32_t x419 = -256;
	uint32_t t97 = 81644414U;

    t97 = (((x417/x418)+x419)|x420);

    if (t97 != 4294967041U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x422 = INT8_MAX;
	uint8_t x423 = 25U;
	static int16_t x424 = INT16_MIN;
	static volatile int32_t t98 = 77;

    t98 = (((x421/x422)+x423)|x424);

    if (t98 != -32743) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x425 = INT16_MIN;
	int32_t x427 = -7586;
	volatile int32_t t99 = 1128638;

    t99 = (((x425/x426)+x427)|x428);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x429 = UINT8_MAX;
	uint32_t x430 = 255U;
	int32_t x431 = -122642410;
	int64_t x432 = INT64_MIN;
	int64_t t100 = 52198LL;

    t100 = (((x429/x430)+x431)|x432);

    if (t100 != -9223372032682450921LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x433 = INT32_MAX;
	int8_t x434 = 20;
	int64_t x435 = -4778405LL;
	int64_t x436 = -212387LL;
	volatile int64_t t101 = 234318133LL;

    t101 = (((x433/x434)+x435)|x436);

    if (t101 != -131363LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x441 = UINT8_MAX;
	volatile int16_t x442 = -1;
	volatile uint64_t x443 = 12516827LLU;
	uint8_t x444 = UINT8_MAX;

    t102 = (((x441/x442)+x443)|x444);

    if (t102 != 12516607LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x445 = -1;
	uint32_t x446 = 830440559U;
	uint32_t t103 = 681209350U;

    t103 = (((x445/x446)+x447)|x448);

    if (t103 != 65535U) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x449 = -1;
	volatile int8_t x450 = INT8_MIN;
	uint64_t x451 = 35556512548698151LLU;
	static uint64_t t104 = 7LLU;

    t104 = (((x449/x450)+x451)|x452);

    if (t104 != 18446744073709550007LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x453 = INT16_MIN;
	uint16_t x454 = UINT16_MAX;
	static int16_t x455 = INT16_MAX;
	int8_t x456 = -2;
	int32_t t105 = 1380;

    t105 = (((x453/x454)+x455)|x456);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x457 = INT8_MAX;
	int8_t x459 = -1;
	int64_t x460 = 8392807LL;
	int64_t t106 = 40812440LL;

    t106 = (((x457/x458)+x459)|x460);

    if (t106 != -25LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x461 = 125701;
	int64_t x462 = INT64_MIN;
	static int64_t x463 = 25762041780693193LL;

    t107 = (((x461/x462)+x463)|x464);

    if (t107 != -5LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x465 = INT8_MIN;
	uint32_t x466 = 200746U;
	uint8_t x467 = 6U;
	volatile int16_t x468 = -2203;
	uint32_t t108 = 2830450U;

    t108 = (((x465/x466)+x467)|x468);

    if (t108 != 4294965245U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x469 = INT64_MAX;
	volatile int32_t x470 = INT32_MIN;
	int16_t x471 = INT16_MIN;
	int64_t x472 = INT64_MIN;
	volatile int64_t t109 = 12139967309045880LL;

    t109 = (((x469/x470)+x471)|x472);

    if (t109 != -4295000063LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x473 = 235U;
	uint32_t x474 = 74U;
	uint8_t x475 = 2U;
	uint32_t t110 = UINT32_MAX;

    t110 = (((x473/x474)+x475)|x476);

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x477 = -1;
	static uint32_t x478 = 7636U;
	volatile int16_t x479 = -8;
	uint8_t x480 = 31U;
	uint32_t t111 = 3U;

    t111 = (((x477/x478)+x479)|x480);

    if (t111 != 562463U) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x481 = 449U;
	int8_t x482 = -21;
	static volatile uint32_t x483 = UINT32_MAX;
	volatile uint8_t x484 = UINT8_MAX;
	static uint32_t t112 = UINT32_MAX;

    t112 = (((x481/x482)+x483)|x484);

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x485 = -3577;
	int8_t x486 = INT8_MIN;
	static int32_t x487 = -1;

    t113 = (((x485/x486)+x487)|x488);

    if (t113 != 22715) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x489 = -2537418LL;
	int32_t x490 = -1;
	uint8_t x491 = UINT8_MAX;
	int32_t x492 = 165;
	static volatile int64_t t114 = 3089LL;

    t114 = (((x489/x490)+x491)|x492);

    if (t114 != 2537709LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x493 = 1238517;
	uint16_t x494 = 2U;
	int8_t x496 = -1;
	volatile uint32_t t115 = UINT32_MAX;

    t115 = (((x493/x494)+x495)|x496);

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x497 = 171U;

    t116 = (((x497/x498)+x499)|x500);

    if (t116 != 4283821911U) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x505 = 31U;
	volatile int64_t x506 = -1LL;
	volatile uint8_t x507 = UINT8_MAX;
	volatile int64_t x508 = -1LL;

    t117 = (((x505/x506)+x507)|x508);

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x509 = -1;
	int64_t x510 = INT64_MIN;
	static volatile int8_t x511 = -47;
	uint16_t x512 = UINT16_MAX;
	int64_t t118 = -3840LL;

    t118 = (((x509/x510)+x511)|x512);

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x513 = UINT64_MAX;
	int8_t x515 = -1;
	volatile int32_t x516 = 132;
	uint64_t t119 = 1089273111453510984LLU;

    t119 = (((x513/x514)+x515)|x516);

    if (t119 != 133LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x517 = INT64_MAX;
	int8_t x518 = -1;
	int8_t x519 = 50;
	static int8_t x520 = 2;
	volatile int64_t t120 = 213099275038075LL;

    t120 = (((x517/x518)+x519)|x520);

    if (t120 != -9223372036854775757LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x521 = 4622U;
	int8_t x522 = INT8_MAX;
	int16_t x523 = INT16_MAX;
	int32_t x524 = INT32_MAX;
	static int32_t t121 = INT32_MAX;

    t121 = (((x521/x522)+x523)|x524);

    if (t121 != INT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x525 = 18159U;
	int8_t x526 = INT8_MIN;
	volatile int8_t x527 = 0;
	static uint8_t x528 = UINT8_MAX;

    t122 = (((x525/x526)+x527)|x528);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x530 = UINT32_MAX;
	static uint64_t x531 = 48005566834559LLU;
	int16_t x532 = 336;

    t123 = (((x529/x530)+x531)|x532);

    if (t123 != 48005566834559LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x533 = 2486U;
	uint64_t x534 = UINT64_MAX;
	uint8_t x535 = 11U;
	int64_t x536 = INT64_MIN;

    t124 = (((x533/x534)+x535)|x536);

    if (t124 != 9223372036854775819LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x542 = 883616531963021980LLU;
	int32_t x543 = -2;
	volatile uint64_t t125 = UINT64_MAX;

    t125 = (((x541/x542)+x543)|x544);

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x545 = 9;
	volatile int32_t x546 = 1223;
	static int8_t x547 = -3;
	uint64_t x548 = UINT64_MAX;

    t126 = (((x545/x546)+x547)|x548);

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x549 = INT16_MIN;
	uint32_t x550 = 96U;
	uint16_t x551 = 1U;
	uint8_t x552 = 0U;
	uint32_t t127 = 5U;

    t127 = (((x549/x550)+x551)|x552);

    if (t127 != 44738902U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x553 = UINT16_MAX;
	uint32_t x554 = 62U;
	int32_t x555 = -126;
	volatile uint32_t t128 = UINT32_MAX;

    t128 = (((x553/x554)+x555)|x556);

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x558 = -1LL;
	uint32_t x559 = 225396691U;
	int32_t x560 = 108886567;
	int64_t t129 = -627875943LL;

    t129 = (((x557/x558)+x559)|x560);

    if (t129 != 260014071LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x561 = INT32_MIN;
	int32_t x564 = INT32_MIN;
	uint64_t t130 = UINT64_MAX;

    t130 = (((x561/x562)+x563)|x564);

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x566 = -14277485257253LL;
	int8_t x567 = INT8_MIN;
	int8_t x568 = INT8_MIN;

    t131 = (((x565/x566)+x567)|x568);

    if (t131 != -128LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x569 = 728427766U;
	uint16_t x570 = 40U;
	int16_t x571 = INT16_MIN;
	int8_t x572 = INT8_MAX;
	uint32_t t132 = 13U;

    t132 = (((x569/x570)+x571)|x572);

    if (t132 != 18178047U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x573 = 1;
	int32_t x574 = -165;
	int8_t x575 = INT8_MIN;
	int64_t x576 = INT64_MAX;
	static int64_t t133 = -3430045LL;

    t133 = (((x573/x574)+x575)|x576);

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x577 = INT32_MIN;
	volatile int32_t x578 = INT32_MIN;
	static uint32_t x580 = 813U;
	volatile uint64_t t134 = 2549647LLU;

    t134 = (((x577/x578)+x579)|x580);

    if (t134 != 23485LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x581 = 10947667629991249LL;
	int32_t x584 = INT32_MIN;
	volatile int64_t t135 = -75LL;

    t135 = (((x581/x582)+x583)|x584);

    if (t135 != -2144934824LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x585 = 661786472149023LLU;
	int8_t x588 = INT8_MAX;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = (((x585/x586)+x587)|x588);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x589 = INT32_MIN;
	int8_t x590 = INT8_MAX;
	int32_t x591 = -1;
	int8_t x592 = -1;
	volatile int32_t t137 = -12577;

    t137 = (((x589/x590)+x591)|x592);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x595 = 6U;
	int64_t x596 = 1548567589970284LL;
	int64_t t138 = 2708LL;

    t138 = (((x593/x594)+x595)|x596);

    if (t138 != -40596LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x598 = 692707078541LLU;
	uint16_t x599 = 5455U;
	volatile uint64_t t139 = 105820750349669300LLU;

    t139 = (((x597/x598)+x599)|x600);

    if (t139 != 18446744073709524303LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x601 = INT16_MIN;
	int32_t x602 = INT32_MIN;

    t140 = (((x601/x602)+x603)|x604);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x605 = 305;
	int8_t x606 = -22;
	uint64_t x607 = UINT64_MAX;
	uint64_t x608 = 46646717LLU;
	volatile uint64_t t141 = UINT64_MAX;

    t141 = (((x605/x606)+x607)|x608);

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x609 = 50280815U;
	int8_t x610 = -1;
	int8_t x611 = INT8_MAX;
	uint8_t x612 = 22U;
	uint32_t t142 = 2468U;

    t142 = (((x609/x610)+x611)|x612);

    if (t142 != 127U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x613 = -1;
	uint32_t x614 = 19U;
	volatile uint64_t x616 = UINT64_MAX;

    t143 = (((x613/x614)+x615)|x616);

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x617 = -13308;
	int16_t x618 = INT16_MIN;
	int64_t x619 = -1LL;

    t144 = (((x617/x618)+x619)|x620);

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x621 = -30;
	int16_t x622 = INT16_MIN;
	int8_t x623 = INT8_MIN;
	static uint64_t x624 = 18850624LLU;
	uint64_t t145 = 7100568216638LLU;

    t145 = (((x621/x622)+x623)|x624);

    if (t145 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x625 = -1;
	int8_t x626 = INT8_MIN;
	uint16_t x627 = 8U;
	int16_t x628 = INT16_MAX;
	int32_t t146 = 310;

    t146 = (((x625/x626)+x627)|x628);

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x629 = -1;
	volatile uint32_t x630 = UINT32_MAX;
	uint64_t x632 = 9388427LLU;
	volatile uint64_t t147 = 2370239519LLU;

    t147 = (((x629/x630)+x631)|x632);

    if (t147 != 9388427LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x633 = UINT8_MAX;
	static uint32_t x634 = 23427260U;
	uint8_t x635 = UINT8_MAX;
	int64_t x636 = -1359297850405965315LL;
	int64_t t148 = -1714200920914671374LL;

    t148 = (((x633/x634)+x635)|x636);

    if (t148 != -1359297850405965313LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x637 = UINT64_MAX;
	static volatile uint32_t x638 = 3U;
	uint16_t x640 = UINT16_MAX;
	static uint64_t t149 = 1892LLU;

    t149 = (((x637/x638)+x639)|x640);

    if (t149 != 15372286728091336703LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x642 = INT64_MIN;
	volatile int32_t x644 = INT32_MIN;
	volatile int64_t t150 = -1LL;

    t150 = (((x641/x642)+x643)|x644);

    if (t150 != -32768LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x645 = INT32_MAX;
	uint64_t x646 = UINT64_MAX;
	int64_t x647 = INT64_MIN;
	volatile uint64_t x648 = 140979206598580LLU;
	volatile uint64_t t151 = 72252LLU;

    t151 = (((x645/x646)+x647)|x648);

    if (t151 != 9223513016061374388LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x649 = INT64_MAX;
	int64_t x650 = INT64_MAX;
	static int16_t x651 = -13;
	int8_t x652 = INT8_MIN;
	int64_t t152 = 3685193387862LL;

    t152 = (((x649/x650)+x651)|x652);

    if (t152 != -12LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x657 = UINT8_MAX;
	volatile int32_t x658 = -51;
	int16_t x659 = INT16_MAX;
	volatile int32_t t153 = -1;

    t153 = (((x657/x658)+x659)|x660);

    if (t153 != 32767) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x662 = 1179U;
	static uint32_t x663 = 1247122U;
	static int32_t x664 = 2;
	volatile int64_t t154 = 885778760437LL;

    t154 = (((x661/x662)+x663)|x664);

    if (t154 != -7823046679715366LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x665 = UINT8_MAX;
	int32_t x666 = 10544259;
	int8_t x668 = -1;
	static int64_t t155 = 1190497LL;

    t155 = (((x665/x666)+x667)|x668);

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint16_t x669 = UINT16_MAX;
	int8_t x670 = 55;
	int64_t x671 = INT64_MIN;
	uint32_t x672 = 50196U;
	volatile int64_t t156 = 265359981967255LL;

    t156 = (((x669/x670)+x671)|x672);

    if (t156 != -9223372036854725449LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x673 = UINT32_MAX;
	int64_t x674 = 99858181924LL;
	int64_t x675 = INT64_MIN;

    t157 = (((x673/x674)+x675)|x676);

    if (t157 != 11305422715847817610LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x677 = -534742509106209371LL;
	int8_t x678 = INT8_MIN;
	int8_t x679 = -1;
	uint8_t x680 = UINT8_MAX;

    t158 = (((x677/x678)+x679)|x680);

    if (t158 != 4177675852392447LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x681 = 285U;
	int16_t x682 = 1;
	volatile int32_t x683 = INT32_MIN;
	int32_t x684 = INT32_MIN;
	volatile uint32_t t159 = 58381426U;

    t159 = (((x681/x682)+x683)|x684);

    if (t159 != 2147483933U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x685 = -1;
	uint8_t x686 = 20U;
	int64_t x687 = -88LL;
	int64_t t160 = 4343323457515352LL;

    t160 = (((x685/x686)+x687)|x688);

    if (t160 != -88LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x689 = -1;
	int64_t x691 = INT64_MIN;

    t161 = (((x689/x690)+x691)|x692);

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x694 = INT32_MAX;
	int8_t x695 = 6;
	int8_t x696 = -1;
	static volatile int64_t t162 = 3050LL;

    t162 = (((x693/x694)+x695)|x696);

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x697 = 19681LLU;
	int32_t x698 = -1;
	int8_t x699 = INT8_MIN;
	int64_t x700 = INT64_MAX;

    t163 = (((x697/x698)+x699)|x700);

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x701 = UINT8_MAX;
	int8_t x702 = -1;
	static uint8_t x703 = UINT8_MAX;
	static int32_t t164 = 2181579;

    t164 = (((x701/x702)+x703)|x704);

    if (t164 != -47810237) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x705 = -1;
	uint32_t x707 = 90026U;
	static uint32_t t165 = UINT32_MAX;

    t165 = (((x705/x706)+x707)|x708);

    if (t165 != UINT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x709 = 2U;
	volatile int8_t x710 = INT8_MAX;
	static int16_t x711 = -1;
	uint64_t x712 = 243LLU;

    t166 = (((x709/x710)+x711)|x712);

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x717 = INT16_MIN;
	int8_t x720 = -1;
	static volatile uint32_t t167 = UINT32_MAX;

    t167 = (((x717/x718)+x719)|x720);

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x721 = -1;
	uint8_t x722 = UINT8_MAX;
	int8_t x723 = INT8_MIN;
	static int8_t x724 = -54;
	int32_t t168 = 19396669;

    t168 = (((x721/x722)+x723)|x724);

    if (t168 != -54) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x725 = INT8_MIN;
	volatile uint16_t x727 = UINT16_MAX;
	static int64_t t169 = 1LL;

    t169 = (((x725/x726)+x727)|x728);

    if (t169 != 65535LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x729 = 7U;
	static int32_t x730 = -58;
	uint64_t x732 = UINT64_MAX;
	uint64_t t170 = UINT64_MAX;

    t170 = (((x729/x730)+x731)|x732);

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x733 = UINT8_MAX;
	volatile int16_t x734 = -1;
	int64_t x735 = -111LL;
	static uint64_t x736 = 2953481191LLU;
	static uint64_t t171 = 3395LLU;

    t171 = (((x733/x734)+x735)|x736);

    if (t171 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x737 = 6U;
	int64_t x738 = -69631035115LL;
	uint8_t x740 = 1U;
	volatile int64_t t172 = -13LL;

    t172 = (((x737/x738)+x739)|x740);

    if (t172 != -243161LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x741 = INT16_MIN;
	int64_t x742 = -4406844926781LL;
	static volatile int32_t x743 = -1;
	int8_t x744 = -38;

    t173 = (((x741/x742)+x743)|x744);

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x745 = 226U;
	int8_t x746 = INT8_MAX;
	volatile int64_t x747 = INT64_MIN;
	int64_t x748 = -513516509628LL;
	volatile int64_t t174 = 6LL;

    t174 = (((x745/x746)+x747)|x748);

    if (t174 != -513516509627LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x750 = -1LL;
	static volatile int16_t x751 = INT16_MAX;
	static int64_t t175 = 17037704166216LL;

    t175 = (((x749/x750)+x751)|x752);

    if (t175 != -305317713LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x753 = -1LL;
	volatile int16_t x754 = -1;
	uint32_t x755 = 0U;
	static uint64_t x756 = UINT64_MAX;
	volatile uint64_t t176 = UINT64_MAX;

    t176 = (((x753/x754)+x755)|x756);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x758 = 111286177U;
	int64_t x759 = -1229224215878LL;
	int16_t x760 = INT16_MIN;
	int64_t t177 = 41681806433LL;

    t177 = (((x757/x758)+x759)|x760);

    if (t177 != -1312LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x761 = INT64_MIN;
	int32_t x762 = INT32_MIN;
	uint64_t x764 = 117210946491574999LLU;
	uint64_t t178 = 246LLU;

    t178 = (((x761/x762)+x763)|x764);

    if (t178 != 117210950786542295LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x765 = INT64_MIN;
	uint8_t x766 = UINT8_MAX;
	int64_t x768 = INT64_MIN;
	static uint64_t t179 = 10992155208874LLU;

    t179 = (((x765/x766)+x767)|x768);

    if (t179 != 18410573987290513279LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x773 = UINT64_MAX;
	int32_t x774 = INT32_MAX;
	int16_t x775 = INT16_MAX;
	int64_t x776 = 9963987703LL;
	static uint64_t t180 = 0LLU;

    t180 = (((x773/x774)+x775)|x776);

    if (t180 != 9964020471LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x777 = INT8_MIN;
	int8_t x779 = INT8_MIN;
	int16_t x780 = INT16_MAX;
	static volatile uint32_t t181 = 3U;

    t181 = (((x777/x778)+x779)|x780);

    if (t181 != 131071U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x781 = -3929;
	int64_t x782 = -2124192535286LL;
	volatile uint8_t x783 = UINT8_MAX;
	int8_t x784 = INT8_MIN;

    t182 = (((x781/x782)+x783)|x784);

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x785 = INT16_MIN;
	int8_t x786 = -55;
	int8_t x787 = INT8_MIN;
	int64_t x788 = -32291776123817LL;
	int64_t t183 = -670293403036767834LL;

    t183 = (((x785/x786)+x787)|x788);

    if (t183 != -32291776123433LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x790 = INT16_MAX;
	static int64_t x791 = INT64_MAX;
	int64_t x792 = 1789774645905389928LL;
	volatile int64_t t184 = INT64_MAX;

    t184 = (((x789/x790)+x791)|x792);

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x794 = -2612795486191180LL;
	uint8_t x796 = 56U;

    t185 = (((x793/x794)+x795)|x796);

    if (t185 != 56LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x799 = 984090669LL;
	volatile int64_t x800 = INT64_MIN;
	static int64_t t186 = 11140929682481LL;

    t186 = (((x797/x798)+x799)|x800);

    if (t186 != -9223372035870685139LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x801 = 33U;
	uint16_t x802 = 52U;
	int8_t x803 = 0;
	static uint32_t x804 = 973U;
	uint32_t t187 = 18948729U;

    t187 = (((x801/x802)+x803)|x804);

    if (t187 != 973U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x805 = INT32_MAX;
	static uint64_t x806 = 1297219122249LLU;
	uint16_t x807 = UINT16_MAX;
	int64_t x808 = -1LL;
	uint64_t t188 = UINT64_MAX;

    t188 = (((x805/x806)+x807)|x808);

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x809 = 2U;
	int8_t x810 = -13;
	uint16_t x812 = 10U;
	volatile uint32_t t189 = UINT32_MAX;

    t189 = (((x809/x810)+x811)|x812);

    if (t189 != UINT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x813 = INT16_MIN;
	int32_t x814 = 240066165;
	int64_t x815 = -1LL;
	int64_t t190 = -551954375230LL;

    t190 = (((x813/x814)+x815)|x816);

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x819 = 3518255446LLU;
	volatile int16_t x820 = -230;

    t191 = (((x817/x818)+x819)|x820);

    if (t191 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x821 = 14713U;
	uint16_t x822 = 50U;
	uint64_t x823 = UINT64_MAX;
	int32_t x824 = -231;
	static volatile uint64_t t192 = 62LLU;

    t192 = (((x821/x822)+x823)|x824);

    if (t192 != 18446744073709551421LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x826 = INT64_MIN;
	static uint32_t x827 = 88U;
	int16_t x828 = INT16_MAX;
	static volatile int64_t t193 = -794194813683LL;

    t193 = (((x825/x826)+x827)|x828);

    if (t193 != 32767LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x830 = 62;
	int32_t x831 = 921;
	int8_t x832 = INT8_MIN;
	uint64_t t194 = 83626249LLU;

    t194 = (((x829/x830)+x831)|x832);

    if (t194 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x833 = 10;
	static uint64_t x835 = 291970981LLU;
	int64_t x836 = 757531467628LL;
	uint64_t t195 = 8701LLU;

    t195 = (((x833/x834)+x835)|x836);

    if (t195 != 757816877037LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x837 = INT16_MAX;
	int8_t x838 = INT8_MIN;
	static uint16_t x839 = 633U;
	int16_t x840 = -1000;
	int32_t t196 = 4155;

    t196 = (((x837/x838)+x839)|x840);

    if (t196 != -646) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x841 = INT64_MIN;
	volatile uint8_t x842 = UINT8_MAX;
	int32_t x843 = -1;
	int64_t t197 = 56336362110LL;

    t197 = (((x841/x842)+x843)|x844);

    if (t197 != -8421505LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x845 = -118;

    t198 = (((x845/x846)+x847)|x848);

    if (t198 != 4294967295LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x849 = -7985;
	int16_t x850 = -1;
	int32_t x851 = -583210065;
	volatile uint64_t x852 = UINT64_MAX;
	uint64_t t199 = UINT64_MAX;

    t199 = (((x849/x850)+x851)|x852);

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

