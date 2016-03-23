
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

static int16_t x5 = -1;
static volatile int32_t x8 = -1;
volatile int8_t x9 = -1;
int64_t x17 = -1LL;
uint64_t t4 = 17736314419643841LLU;
int32_t x25 = 1;
uint8_t x34 = 4U;
volatile int32_t t7 = -9863;
int64_t x41 = -1LL;
uint64_t t11 = 18016743LLU;
uint32_t x59 = 2U;
int64_t t14 = -3475027580929509649LL;
int8_t x75 = -3;
int16_t x95 = -1;
volatile int32_t x100 = -1;
int32_t t22 = 0;
uint32_t x113 = UINT32_MAX;
int16_t x124 = INT16_MAX;
int16_t x125 = -1;
volatile uint32_t t26 = 1U;
static uint16_t x131 = 31U;
static int32_t x143 = INT32_MIN;
uint8_t x149 = 110U;
volatile uint64_t x150 = 25LLU;
uint8_t x152 = 95U;
uint64_t x155 = 25931LLU;
int8_t x157 = 0;
volatile uint16_t x160 = UINT16_MAX;
uint64_t x176 = 399075LLU;
int16_t x177 = INT16_MAX;
int8_t x185 = -1;
int64_t x186 = -1LL;
volatile uint8_t x206 = UINT8_MAX;
int32_t t44 = 2;
int16_t x218 = 4293;
static volatile uint32_t t47 = 529780640U;
volatile int32_t x227 = 25124;
int8_t x231 = -6;
int64_t x232 = -1LL;
int64_t x238 = INT64_MIN;
uint64_t t50 = 291510375956LLU;
int32_t x247 = -519;
static uint8_t x255 = 20U;
int32_t x262 = -58624361;
int8_t x263 = INT8_MIN;
int32_t t56 = -7455054;
uint16_t x270 = 280U;
int32_t x271 = -48381241;
uint16_t x272 = 6014U;
int64_t x273 = INT64_MIN;
volatile uint32_t x275 = UINT32_MAX;
volatile int16_t x278 = 0;
int32_t x279 = 32859553;
static int32_t t59 = -6584579;
uint64_t x283 = 25623LLU;
int64_t x284 = 127775184403946LL;
volatile int32_t t61 = 250;
int32_t x290 = -92;
static uint32_t x291 = UINT32_MAX;
int16_t x292 = INT16_MAX;
uint64_t t63 = 116622751LLU;
volatile uint64_t t64 = 254978916LLU;
uint8_t x320 = 33U;
volatile int32_t x323 = 0;
int64_t x340 = INT64_MIN;
static volatile int32_t t73 = -808537;
int32_t x350 = INT32_MAX;
volatile uint64_t x358 = UINT64_MAX;
int64_t x359 = INT64_MIN;
uint64_t x360 = 10495076064877LLU;
int32_t x365 = INT32_MIN;
uint64_t x366 = 1876688130448LLU;
static int8_t x368 = -44;
static uint64_t t79 = 238952795LLU;
static uint32_t x371 = 34U;
int8_t x372 = -1;
uint64_t x394 = UINT64_MAX;
volatile uint64_t t85 = 3LLU;
int32_t x400 = INT32_MIN;
volatile int16_t x403 = -4920;
static volatile uint64_t t88 = 197954626850085LLU;
static int32_t x417 = INT32_MAX;
uint64_t x418 = UINT64_MAX;
uint64_t t90 = 63804563LLU;
static uint64_t t91 = 124057944242596768LLU;
uint64_t x425 = 291861268171141913LLU;
static int16_t x426 = INT16_MAX;
uint64_t t92 = 2LLU;
static uint16_t x430 = 3U;
int8_t x434 = INT8_MIN;
uint16_t x449 = UINT16_MAX;
static int64_t t98 = -3122369514732238LL;
int64_t t99 = 32340835594LL;
int32_t x463 = INT32_MIN;
int16_t x466 = -1;
static uint32_t x467 = UINT32_MAX;
int16_t x468 = -607;
int16_t x490 = 4621;
int8_t x499 = -1;
static uint64_t x503 = UINT64_MAX;
int32_t x505 = -1;
static int16_t x506 = -7916;
uint16_t x511 = 52U;
static uint8_t x513 = 0U;
uint8_t x522 = 111U;
uint16_t x524 = 62U;
volatile int16_t x525 = INT16_MIN;
volatile uint16_t x531 = 177U;
uint64_t x537 = UINT64_MAX;
int16_t x538 = -1;
int8_t x545 = -26;
int16_t x547 = -1;
int32_t x557 = INT32_MAX;
int64_t x559 = 3882097242569LL;
int32_t x569 = -6;
int16_t x570 = 448;
static volatile int64_t t124 = -8371116742514553LL;
static volatile int16_t x575 = 156;
volatile uint32_t t126 = 169145664U;
int8_t x583 = 0;
volatile int64_t t127 = 526LL;
int64_t x590 = INT64_MAX;
volatile int64_t x599 = -28467529821570LL;
volatile uint64_t x603 = 40885425061128LLU;
static int64_t x604 = INT64_MAX;
int64_t x612 = -1LL;
static volatile int64_t t132 = -102992190LL;
static uint16_t x613 = 30U;
static int8_t x616 = 1;
volatile uint32_t x624 = UINT32_MAX;
uint16_t x630 = 3690U;
static uint64_t t137 = 22510033675LLU;
uint8_t x639 = UINT8_MAX;
volatile uint64_t t138 = 5074793721421299591LLU;
volatile int64_t x642 = INT64_MAX;
int8_t x646 = INT8_MAX;
static volatile int64_t t140 = 45103654LL;
static volatile int16_t x650 = -1;
int8_t x651 = INT8_MAX;
int16_t x655 = INT16_MIN;
static int32_t x658 = INT32_MAX;
int32_t x665 = INT32_MIN;
int16_t x671 = INT16_MAX;
int8_t x685 = -8;
volatile int64_t t149 = 8140847640LL;
int16_t x701 = -12;
uint16_t x705 = 1295U;
static volatile int16_t x711 = -1;
uint8_t x726 = UINT8_MAX;
static int64_t x729 = -1LL;
int8_t x738 = INT8_MIN;
volatile int16_t x740 = 423;
static volatile int16_t x744 = INT16_MIN;
static int16_t x746 = -3;
volatile int16_t x747 = -1;
int32_t x757 = INT32_MIN;
int8_t x758 = -29;
static volatile uint64_t t167 = 113LLU;
uint32_t x773 = 1227854U;
uint16_t x775 = UINT16_MAX;
volatile uint32_t t168 = 195582745U;
volatile uint32_t t169 = 6U;
int32_t x781 = INT32_MIN;
int64_t x782 = -1LL;
volatile int64_t t170 = -1857709364501LL;
int8_t x788 = -1;
volatile uint16_t x792 = UINT16_MAX;
volatile int32_t t172 = -7879;
int8_t x793 = -26;
int32_t x811 = INT32_MAX;
uint32_t x815 = 123225U;
int8_t x823 = INT8_MIN;
int16_t x825 = INT16_MIN;
uint8_t x827 = UINT8_MAX;
int64_t x834 = 1548198LL;
int32_t x835 = INT32_MIN;
volatile int64_t t181 = 349364LL;
static int16_t x840 = 3768;
uint16_t x842 = 6379U;
volatile int64_t t183 = 114641202160804LL;
int8_t x851 = -1;
int32_t x852 = INT32_MIN;
int32_t x856 = INT32_MAX;
int32_t x858 = 464;
uint16_t x859 = UINT16_MAX;
static int8_t x864 = INT8_MAX;
uint32_t x867 = UINT32_MAX;
static volatile int64_t t190 = 82453690718691LL;
int64_t x873 = -124015LL;
uint64_t x876 = UINT64_MAX;
volatile uint8_t x886 = 76U;
int8_t x890 = 4;
uint8_t x893 = UINT8_MAX;
uint16_t x896 = 5U;
static uint16_t x901 = 19U;
uint64_t x902 = 5433164475859LLU;
volatile int16_t x909 = -1;
uint8_t x915 = UINT8_MAX;


void f0(void) {
    	static uint8_t x1 = 6U;
	int8_t x2 = -1;
	int8_t x3 = 1;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 0;

    t0 = (x1+(x2-(x3^x4)));

    if (t0 != -249) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x6 = INT16_MIN;
	int32_t x7 = -5956;
	volatile int32_t t1 = -3;

    t1 = (x5+(x6-(x7^x8)));

    if (t1 != -38724) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MAX;
	int32_t x12 = -238;
	int32_t t2 = -13;

    t2 = (x9+(x10-(x11^x12)));

    if (t2 != -32622) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x18 = 52440U;
	uint16_t x19 = 272U;
	int8_t x20 = INT8_MIN;
	int64_t t3 = 396312824191088861LL;

    t3 = (x17+(x18-(x19^x20)));

    if (t3 != 52807LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = 0;
	int64_t x22 = INT64_MAX;
	int16_t x23 = INT16_MAX;
	volatile uint64_t x24 = 107LLU;

    t4 = (x21+(x22-(x23^x24)));

    if (t4 != 9223372036854743147LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x26 = INT32_MIN;
	static int32_t x27 = -1;
	int32_t x28 = -1;
	int32_t t5 = 2037;

    t5 = (x25+(x26-(x27^x28)));

    if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = INT16_MAX;
	static uint64_t x30 = 1006299256524LLU;
	int16_t x31 = -1;
	int8_t x32 = INT8_MIN;
	volatile uint64_t t6 = 27062LLU;

    t6 = (x29+(x30-(x31^x32)));

    if (t6 != 1006299289164LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = 5;
	uint8_t x35 = UINT8_MAX;
	uint16_t x36 = UINT16_MAX;

    t7 = (x33+(x34-(x35^x36)));

    if (t7 != -65271) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x37 = UINT8_MAX;
	volatile int16_t x38 = 213;
	int8_t x39 = -1;
	int16_t x40 = INT16_MIN;
	volatile int32_t t8 = -335456712;

    t8 = (x37+(x38-(x39^x40)));

    if (t8 != -32299) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x42 = 89045065;
	static uint16_t x43 = UINT16_MAX;
	int8_t x44 = INT8_MIN;
	volatile int64_t t9 = -1515451LL;

    t9 = (x41+(x42-(x43^x44)));

    if (t9 != 89110473LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 11U;
	uint32_t x46 = 5152U;
	int64_t x47 = -1LL;
	int16_t x48 = -3;
	int64_t t10 = -6LL;

    t10 = (x45+(x46-(x47^x48)));

    if (t10 != 5161LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MIN;
	uint64_t x50 = UINT64_MAX;
	int32_t x51 = INT32_MIN;
	static uint64_t x52 = 444139527225773LLU;

    t11 = (x49+(x50-(x51^x52)));

    if (t11 != 9223816176021257810LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	volatile uint64_t x54 = UINT64_MAX;
	static int16_t x55 = INT16_MAX;
	uint16_t x56 = 2U;
	uint64_t t12 = 30290LLU;

    t12 = (x53+(x54-(x55^x56)));

    if (t12 != 18446744073709518722LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = UINT8_MAX;
	int32_t x58 = INT32_MIN;
	static volatile int16_t x60 = -53;
	volatile uint32_t t13 = 36226424U;

    t13 = (x57+(x58-(x59^x60)));

    if (t13 != 2147483958U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = 22U;
	static uint16_t x66 = 14U;
	int64_t x67 = -20LL;
	volatile int8_t x68 = -1;

    t14 = (x65+(x66-(x67^x68)));

    if (t14 != 17LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MIN;
	static uint16_t x70 = 840U;
	int64_t x71 = -59360450789688LL;
	uint16_t x72 = UINT16_MAX;
	int64_t t15 = 1107175092689797LL;

    t15 = (x69+(x70-(x71^x72)));

    if (t15 != 59358303339025LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MIN;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t16 = 17703LLU;

    t16 = (x73+(x74-(x75^x76)));

    if (t16 != 9223372036854743038LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x81 = -1;
	volatile int16_t x82 = 30;
	int8_t x83 = INT8_MIN;
	uint16_t x84 = 3U;
	static int32_t t17 = -109;

    t17 = (x81+(x82-(x83^x84)));

    if (t17 != 154) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x85 = INT64_MAX;
	uint8_t x86 = 1U;
	int32_t x87 = 457675;
	int32_t x88 = INT32_MAX;
	static int64_t t18 = 3737402953964948636LL;

    t18 = (x85+(x86-(x87^x88)));

    if (t18 != 9223372034707749836LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x93 = 122U;
	int8_t x94 = INT8_MIN;
	int64_t x96 = INT64_MAX;
	volatile int64_t t19 = -63266101LL;

    t19 = (x93+(x94-(x95^x96)));

    if (t19 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x97 = INT64_MAX;
	int8_t x98 = 0;
	uint64_t x99 = UINT64_MAX;
	volatile uint64_t t20 = 3LLU;

    t20 = (x97+(x98-(x99^x100)));

    if (t20 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x101 = 1;
	int16_t x102 = INT16_MAX;
	volatile int64_t x103 = 750070LL;
	uint8_t x104 = UINT8_MAX;
	int64_t t21 = 4276255526577419LL;

    t21 = (x101+(x102-(x103^x104)));

    if (t21 != -717065LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x105 = INT32_MIN;
	int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	int32_t x108 = 4180440;

    t22 = (x105+(x106-(x107^x108)));

    if (t22 != -2143303384) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x114 = UINT64_MAX;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MIN;
	uint64_t t23 = 255040498635611047LLU;

    t23 = (x113+(x114-(x115^x116)));

    if (t23 != 9223372043297226750LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x117 = INT8_MIN;
	int32_t x118 = -3188;
	volatile int16_t x119 = -1;
	uint16_t x120 = 928U;
	volatile int32_t t24 = -439118;

    t24 = (x117+(x118-(x119^x120)));

    if (t24 != -2387) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x121 = -2292795018355787LL;
	uint64_t x122 = 0LLU;
	uint32_t x123 = 182492U;
	static volatile uint64_t t25 = 66588LLU;

    t25 = (x121+(x122-(x123^x124)));

    if (t25 != 18444451278691017874LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x126 = INT8_MIN;
	volatile uint8_t x127 = 52U;
	volatile uint32_t x128 = 325832U;

    t26 = (x125+(x126-(x127^x128)));

    if (t26 != 4294641283U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x129 = 2U;
	int32_t x130 = INT32_MIN;
	int16_t x132 = -1;
	uint32_t t27 = 14968U;

    t27 = (x129+(x130-(x131^x132)));

    if (t27 != 2147483682U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x137 = 45U;
	uint16_t x138 = 21643U;
	static volatile int8_t x139 = INT8_MIN;
	uint16_t x140 = UINT16_MAX;
	uint32_t t28 = 1579330634U;

    t28 = (x137+(x138-(x139^x140)));

    if (t28 != 87097U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x141 = 6U;
	volatile int64_t x142 = -1LL;
	int64_t x144 = INT64_MIN;
	int64_t t29 = -323LL;

    t29 = (x141+(x142-(x143^x144)));

    if (t29 != -9223372034707292155LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x145 = 64470991U;
	int64_t x146 = INT64_MIN;
	volatile int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MIN;
	int64_t t30 = 24994989691LL;

    t30 = (x145+(x146-(x147^x148)));

    if (t30 != -9223372036790304817LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x151 = INT8_MIN;
	volatile uint64_t t31 = 10493856734LLU;

    t31 = (x149+(x150-(x151^x152)));

    if (t31 != 168LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x153 = INT64_MIN;
	int16_t x154 = INT16_MAX;
	int8_t x156 = INT8_MAX;
	uint64_t t32 = 3818562654772379444LLU;

    t32 = (x153+(x154-(x155^x156)));

    if (t32 != 9223372036854782667LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x158 = -236203;
	static int64_t x159 = -327737LL;
	volatile int64_t t33 = 11671169029713432LL;

    t33 = (x157+(x158-(x159^x160)));

    if (t33 != 156957LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x161 = 2094564125027719LL;
	volatile uint16_t x162 = 105U;
	int64_t x163 = -1LL;
	static volatile uint16_t x164 = 26U;
	int64_t t34 = 10263LL;

    t34 = (x161+(x162-(x163^x164)));

    if (t34 != 2094564125027851LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x165 = INT8_MIN;
	static int16_t x166 = 1;
	volatile uint64_t x167 = UINT64_MAX;
	int16_t x168 = INT16_MIN;
	static uint64_t t35 = 160945LLU;

    t35 = (x165+(x166-(x167^x168)));

    if (t35 != 18446744073709518722LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x173 = INT16_MIN;
	uint16_t x174 = UINT16_MAX;
	volatile int64_t x175 = 28LL;
	static uint64_t t36 = 36203301LLU;

    t36 = (x173+(x174-(x175^x176)));

    if (t36 != 18446744073709185280LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x178 = -9;
	static uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MIN;
	volatile uint64_t t37 = 1LLU;

    t37 = (x177+(x178-(x179^x180)));

    if (t37 != 9223372036854808567LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MIN;
	int64_t t38 = 8LL;

    t38 = (x185+(x186-(x187^x188)));

    if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x189 = 0;
	int64_t x190 = -1LL;
	int64_t x191 = INT64_MIN;
	static volatile int8_t x192 = -29;
	static volatile int64_t t39 = 2LL;

    t39 = (x189+(x190-(x191^x192)));

    if (t39 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x193 = INT64_MIN;
	static int16_t x194 = -1;
	int32_t x195 = -1;
	volatile uint8_t x196 = UINT8_MAX;
	volatile int64_t t40 = 22854LL;

    t40 = (x193+(x194-(x195^x196)));

    if (t40 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x197 = INT16_MIN;
	static int8_t x198 = -1;
	uint8_t x199 = 61U;
	uint16_t x200 = 0U;
	static volatile int32_t t41 = 106541773;

    t41 = (x197+(x198-(x199^x200)));

    if (t41 != -32830) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x201 = 1153U;
	volatile int16_t x202 = -1;
	static int8_t x203 = INT8_MAX;
	uint16_t x204 = 1U;
	volatile int32_t t42 = -6141542;

    t42 = (x201+(x202-(x203^x204)));

    if (t42 != 1026) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = -1LL;
	int8_t x207 = INT8_MIN;
	int16_t x208 = 1134;
	volatile int64_t t43 = 87114337882LL;

    t43 = (x205+(x206-(x207^x208)));

    if (t43 != 1296LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x209 = 17;
	int16_t x210 = -1;
	uint8_t x211 = 3U;
	int16_t x212 = -1;

    t44 = (x209+(x210-(x211^x212)));

    if (t44 != 20) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x213 = 1375LLU;
	int64_t x214 = 0LL;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = -60;
	volatile uint64_t t45 = 4006540238074966LLU;

    t45 = (x213+(x214-(x215^x216)));

    if (t45 != 1572LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x217 = 2800U;
	int32_t x219 = INT32_MAX;
	int64_t x220 = INT64_MIN;
	int64_t t46 = -35374946103257063LL;

    t46 = (x217+(x218-(x219^x220)));

    if (t46 != 9223372034707299254LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x221 = INT8_MIN;
	static uint32_t x222 = 29530U;
	uint8_t x223 = 0U;
	int16_t x224 = INT16_MIN;

    t47 = (x221+(x222-(x223^x224)));

    if (t47 != 62170U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x225 = INT8_MIN;
	uint32_t x226 = 56U;
	int64_t x228 = -1LL;
	int64_t t48 = -2398LL;

    t48 = (x225+(x226-(x227^x228)));

    if (t48 != 25053LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x229 = 23;
	int32_t x230 = 14;
	static int64_t t49 = 8000501776789519LL;

    t49 = (x229+(x230-(x231^x232)));

    if (t49 != 32LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x237 = INT64_MIN;
	volatile uint64_t x239 = 1324204017206489725LLU;
	static int32_t x240 = INT32_MIN;

    t50 = (x237+(x238-(x239^x240)));

    if (t50 != 1324204018020584835LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x241 = INT8_MIN;
	uint8_t x242 = 3U;
	volatile uint32_t x243 = 127U;
	static volatile int32_t x244 = INT32_MAX;
	volatile uint32_t t51 = 5U;

    t51 = (x241+(x242-(x243^x244)));

    if (t51 != 2147483651U) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x245 = INT16_MAX;
	int64_t x246 = -1LL;
	int8_t x248 = INT8_MAX;
	int64_t t52 = -125355792552556596LL;

    t52 = (x245+(x246-(x247^x248)));

    if (t52 != 33400LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x253 = 2119374LLU;
	static int8_t x254 = INT8_MAX;
	uint64_t x256 = UINT64_MAX;
	uint64_t t53 = 6173LLU;

    t53 = (x253+(x254-(x255^x256)));

    if (t53 != 2119522LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x257 = -1;
	volatile uint32_t x258 = 193916058U;
	static int32_t x259 = -510193958;
	int16_t x260 = INT16_MIN;
	static uint32_t t54 = 79017443U;

    t54 = (x257+(x258-(x259^x260)));

    if (t54 != 3978714559U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x261 = 12U;
	int64_t x264 = -33984641LL;
	volatile int64_t t55 = -141827877LL;

    t55 = (x261+(x262-(x263^x264)));

    if (t55 != -92609116LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x265 = INT16_MIN;
	int32_t x266 = -1;
	int32_t x267 = INT32_MIN;
	volatile int8_t x268 = 18;

    t56 = (x265+(x266-(x267^x268)));

    if (t56 != 2147450861) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x269 = INT8_MIN;
	static int32_t t57 = 35573;

    t57 = (x269+(x270-(x271^x272)));

    if (t57 != 48376543) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x274 = -1;
	int16_t x276 = INT16_MIN;
	volatile int64_t t58 = -3152210203512281LL;

    t58 = (x273+(x274-(x275^x276)));

    if (t58 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x277 = -73;
	static int16_t x280 = INT16_MAX;

    t59 = (x277+(x278-(x279^x280)));

    if (t59 != -32840359) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x281 = 7507169U;
	int8_t x282 = INT8_MIN;
	volatile uint64_t t60 = 291755LLU;

    t60 = (x281+(x282-(x283^x284)));

    if (t60 != 18446616298532647524LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x285 = -17;
	volatile int32_t x286 = INT32_MAX;
	int16_t x287 = -1;
	int8_t x288 = INT8_MIN;

    t61 = (x285+(x286-(x287^x288)));

    if (t61 != 2147483503) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x289 = 1233089425LLU;
	volatile uint64_t t62 = 1455LLU;

    t62 = (x289+(x290-(x291^x292)));

    if (t62 != 1233122101LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	int8_t x294 = 9;
	int8_t x295 = INT8_MAX;
	volatile int8_t x296 = INT8_MIN;

    t63 = (x293+(x294-(x295^x296)));

    if (t63 != 9LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x297 = 1;
	uint64_t x298 = 56136531114031418LLU;
	int64_t x299 = -1LL;
	int16_t x300 = 2647;

    t64 = (x297+(x298-(x299^x300)));

    if (t64 != 56136531114034067LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x301 = INT32_MIN;
	static uint16_t x302 = 116U;
	int16_t x303 = INT16_MIN;
	static volatile uint32_t x304 = UINT32_MAX;
	uint32_t t65 = 1U;

    t65 = (x301+(x302-(x303^x304)));

    if (t65 != 2147450997U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x305 = UINT8_MAX;
	int16_t x306 = -4;
	static int16_t x307 = INT16_MAX;
	volatile int64_t x308 = INT64_MIN;
	int64_t t66 = -1429334603985LL;

    t66 = (x305+(x306-(x307^x308)));

    if (t66 != 9223372036854743292LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x309 = 3678724U;
	static uint64_t x310 = 148898480034LLU;
	int32_t x311 = INT32_MIN;
	static volatile int64_t x312 = -1LL;
	uint64_t t67 = 243872689323LLU;

    t67 = (x309+(x310-(x311^x312)));

    if (t67 != 146754675111LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x313 = 22781U;
	int8_t x314 = INT8_MAX;
	int8_t x315 = 8;
	int64_t x316 = INT64_MAX;
	int64_t t68 = -2063049464433LL;

    t68 = (x313+(x314-(x315^x316)));

    if (t68 != -9223372036854752891LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x317 = -31;
	uint32_t x318 = 1540257229U;
	static int32_t x319 = 1418233;
	uint32_t t69 = 1U;

    t69 = (x317+(x318-(x319^x320)));

    if (t69 != 1538838998U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x321 = 1;
	static volatile uint8_t x322 = UINT8_MAX;
	uint8_t x324 = 11U;
	volatile int32_t t70 = -3244;

    t70 = (x321+(x322-(x323^x324)));

    if (t70 != 245) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x325 = 7U;
	volatile uint64_t x326 = 303290071644753LLU;
	volatile uint64_t x327 = 0LLU;
	volatile int8_t x328 = INT8_MIN;
	static uint64_t t71 = 28010694700684821LLU;

    t71 = (x325+(x326-(x327^x328)));

    if (t71 != 303290071644888LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x337 = INT32_MIN;
	volatile uint16_t x338 = 3U;
	static uint64_t x339 = 17563639720958LLU;
	volatile uint64_t t72 = 154888919412697LLU;

    t72 = (x337+(x338-(x339^x340)));

    if (t72 != 9223354471067571205LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x341 = INT16_MIN;
	uint16_t x342 = 1U;
	static uint8_t x343 = 89U;
	int16_t x344 = 2129;

    t73 = (x341+(x342-(x343^x344)));

    if (t73 != -34823) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x345 = -1;
	static int32_t x346 = -1;
	uint16_t x347 = 70U;
	uint32_t x348 = 16237U;
	static volatile uint32_t t74 = 133U;

    t74 = (x345+(x346-(x347^x348)));

    if (t74 != 4294951123U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x349 = -1;
	int8_t x351 = INT8_MAX;
	uint32_t x352 = 22U;
	uint32_t t75 = 14954941U;

    t75 = (x349+(x350-(x351^x352)));

    if (t75 != 2147483541U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x353 = -1;
	int8_t x354 = 27;
	uint16_t x355 = 8597U;
	volatile uint16_t x356 = 1948U;
	static volatile int32_t t76 = -3257;

    t76 = (x353+(x354-(x355^x356)));

    if (t76 != -9711) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x357 = 245LL;
	volatile uint64_t t77 = 2LLU;

    t77 = (x357+(x358-(x359^x360)));

    if (t77 != 9223361541778711175LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x361 = INT32_MIN;
	static uint32_t x362 = 93179U;
	volatile int16_t x363 = INT16_MIN;
	static int16_t x364 = INT16_MIN;
	uint32_t t78 = 123154U;

    t78 = (x361+(x362-(x363^x364)));

    if (t78 != 2147576827U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x367 = INT16_MIN;

    t79 = (x365+(x366-(x367^x368)));

    if (t79 != 1874540614076LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x369 = 2850LLU;
	int8_t x370 = -1;
	uint64_t t80 = 416822688730297625LLU;

    t80 = (x369+(x370-(x371^x372)));

    if (t80 != 2884LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x373 = -1;
	int32_t x374 = -58757211;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MAX;
	int32_t t81 = -64298547;

    t81 = (x373+(x374-(x375^x376)));

    if (t81 != 2088693669) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x381 = UINT8_MAX;
	static volatile int8_t x382 = INT8_MIN;
	int32_t x383 = -1;
	uint32_t x384 = UINT32_MAX;
	static volatile uint32_t t82 = 27U;

    t82 = (x381+(x382-(x383^x384)));

    if (t82 != 127U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x385 = INT32_MIN;
	volatile int64_t x386 = INT64_MAX;
	int32_t x387 = INT32_MAX;
	int32_t x388 = 233073078;
	static volatile int64_t t83 = -38989940562LL;

    t83 = (x385+(x386-(x387^x388)));

    if (t83 != 9223372032792881590LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x389 = INT32_MIN;
	uint8_t x390 = 2U;
	uint32_t x391 = 19216U;
	static int16_t x392 = INT16_MIN;
	volatile uint32_t t84 = 16661U;

    t84 = (x389+(x390-(x391^x392)));

    if (t84 != 2147497202U) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x393 = INT16_MIN;
	static volatile uint64_t x395 = 18681213111LLU;
	volatile uint32_t x396 = 37U;

    t85 = (x393+(x394-(x395^x396)));

    if (t85 != 18446744055028305773LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x397 = INT8_MIN;
	uint64_t x398 = 8119739441837LLU;
	static uint8_t x399 = 3U;
	uint64_t t86 = 59408676LLU;

    t86 = (x397+(x398-(x399^x400)));

    if (t86 != 8121886925354LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x401 = UINT64_MAX;
	int16_t x402 = INT16_MAX;
	int16_t x404 = INT16_MIN;
	volatile uint64_t t87 = 407053910LLU;

    t87 = (x401+(x402-(x403^x404)));

    if (t87 != 4918LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x405 = -1;
	volatile uint64_t x406 = UINT64_MAX;
	uint32_t x407 = 25U;
	uint32_t x408 = 160285U;

    t88 = (x405+(x406-(x407^x408)));

    if (t88 != 18446744073709391354LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x409 = UINT16_MAX;
	static int32_t x410 = INT32_MAX;
	volatile int16_t x411 = -1;
	uint32_t x412 = 1341123885U;
	static uint32_t t89 = 3U;

    t89 = (x409+(x410-(x411^x412)));

    if (t89 != 3488673068U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x419 = -1LL;
	uint8_t x420 = 26U;

    t90 = (x417+(x418-(x419^x420)));

    if (t90 != 2147483673LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x421 = INT32_MIN;
	static int8_t x422 = 9;
	int8_t x423 = -1;
	uint64_t x424 = 5746LLU;

    t91 = (x421+(x422-(x423^x424)));

    if (t91 != 18446744071562073724LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint8_t x427 = UINT8_MAX;
	static int8_t x428 = -1;

    t92 = (x425+(x426-(x427^x428)));

    if (t92 != 291861268171174936LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x429 = 955271243LLU;
	int64_t x431 = INT64_MIN;
	static volatile uint16_t x432 = UINT16_MAX;
	uint64_t t93 = 6603847745453579483LLU;

    t93 = (x429+(x430-(x431^x432)));

    if (t93 != 9223372037809981519LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x433 = UINT16_MAX;
	static uint64_t x435 = 24267915313445848LLU;
	static int64_t x436 = 45479006LL;
	volatile uint64_t t94 = 29367684307391642LLU;

    t94 = (x433+(x434-(x435^x436)));

    if (t94 != 18422476158440927225LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x437 = 133625154493394211LLU;
	int32_t x438 = INT32_MIN;
	int64_t x439 = INT64_MAX;
	uint32_t x440 = UINT32_MAX;
	volatile uint64_t t95 = 10470LLU;

    t95 = (x437+(x438-(x439^x440)));

    if (t95 != 9356997193495653667LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint16_t x441 = 192U;
	int16_t x442 = INT16_MIN;
	static uint16_t x443 = UINT16_MAX;
	uint64_t x444 = 4355767245644LLU;
	static volatile uint64_t t96 = 99033587054033LLU;

    t96 = (x441+(x442-(x443^x444)));

    if (t96 != 18446739717942287373LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x445 = INT16_MIN;
	static int8_t x446 = INT8_MIN;
	int32_t x447 = INT32_MIN;
	volatile uint16_t x448 = UINT16_MAX;
	volatile int32_t t97 = 4097235;

    t97 = (x445+(x446-(x447^x448)));

    if (t97 != 2147385217) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x450 = 322298U;
	volatile int16_t x451 = INT16_MIN;
	int64_t x452 = 51389813035487534LL;

    t98 = (x449+(x450-(x451^x452)));

    if (t98 != 51389813035866571LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x457 = 177736623U;
	static volatile int64_t x458 = -1LL;
	int64_t x459 = 51347775564368LL;
	static uint16_t x460 = UINT16_MAX;

    t99 = (x457+(x458-(x459^x460)));

    if (t99 != -51347597871617LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x461 = 3;
	int8_t x462 = -1;
	int8_t x464 = INT8_MAX;
	volatile int32_t t100 = 94;

    t100 = (x461+(x462-(x463^x464)));

    if (t100 != 2147483523) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x465 = INT16_MIN;
	volatile uint32_t t101 = 175447U;

    t101 = (x465+(x466-(x467^x468)));

    if (t101 != 4294933921U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x469 = INT16_MAX;
	static int8_t x470 = INT8_MAX;
	int64_t x471 = -1LL;
	int8_t x472 = -6;
	int64_t t102 = -3LL;

    t102 = (x469+(x470-(x471^x472)));

    if (t102 != 32889LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x473 = 1;
	int8_t x474 = -3;
	int16_t x475 = INT16_MIN;
	volatile uint8_t x476 = 0U;
	volatile int32_t t103 = 668519509;

    t103 = (x473+(x474-(x475^x476)));

    if (t103 != 32766) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x477 = 392637LLU;
	int16_t x478 = 3;
	int32_t x479 = 14938891;
	int32_t x480 = 219;
	static volatile uint64_t t104 = 2336774738948LLU;

    t104 = (x477+(x478-(x479^x480)));

    if (t104 != 18446744073695005168LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x481 = INT8_MIN;
	volatile int8_t x482 = 4;
	static uint16_t x483 = 12635U;
	int32_t x484 = -278261689;
	volatile int32_t t105 = 93;

    t105 = (x481+(x482-(x483^x484)));

    if (t105 != 278257256) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x485 = 45151428U;
	int32_t x486 = INT32_MIN;
	volatile int8_t x487 = 11;
	static volatile int64_t x488 = INT64_MIN;
	int64_t t106 = -16931357284285LL;

    t106 = (x485+(x486-(x487^x488)));

    if (t106 != 9223372034752443577LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x489 = -1;
	int32_t x491 = INT32_MIN;
	uint64_t x492 = UINT64_MAX;
	uint64_t t107 = 19009114043LLU;

    t107 = (x489+(x490-(x491^x492)));

    if (t107 != 18446744071562072589LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x493 = 66U;
	int64_t x494 = 7891LL;
	uint8_t x495 = 3U;
	static uint64_t x496 = 32224LLU;
	static uint64_t t108 = 2914871061LLU;

    t108 = (x493+(x494-(x495^x496)));

    if (t108 != 18446744073709527346LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x497 = 108U;
	int8_t x498 = 13;
	static uint64_t x500 = 6LLU;
	volatile uint64_t t109 = 193389965LLU;

    t109 = (x497+(x498-(x499^x500)));

    if (t109 != 128LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x501 = INT8_MAX;
	int32_t x502 = -1;
	static int64_t x504 = INT64_MIN;
	static uint64_t t110 = 785777LLU;

    t110 = (x501+(x502-(x503^x504)));

    if (t110 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x507 = INT16_MIN;
	volatile int8_t x508 = INT8_MAX;
	volatile int32_t t111 = 122229232;

    t111 = (x505+(x506-(x507^x508)));

    if (t111 != 24724) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x509 = INT64_MAX;
	static volatile int16_t x510 = -422;
	int8_t x512 = -29;
	int64_t t112 = -1881LL;

    t112 = (x509+(x510-(x511^x512)));

    if (t112 != 9223372036854775426LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x514 = 6LLU;
	int8_t x515 = INT8_MAX;
	int16_t x516 = INT16_MAX;
	uint64_t t113 = 1894785588891245704LLU;

    t113 = (x513+(x514-(x515^x516)));

    if (t113 != 18446744073709518982LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x521 = UINT64_MAX;
	volatile int32_t x523 = 633;
	volatile uint64_t t114 = 4167317415611618064LLU;

    t114 = (x521+(x522-(x523^x524)));

    if (t114 != 18446744073709551143LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x526 = UINT16_MAX;
	static volatile uint8_t x527 = 1U;
	uint64_t x528 = UINT64_MAX;
	volatile uint64_t t115 = 0LLU;

    t115 = (x525+(x526-(x527^x528)));

    if (t115 != 32769LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x529 = INT8_MIN;
	uint8_t x530 = 38U;
	uint64_t x532 = 110LLU;
	uint64_t t116 = 41562069LLU;

    t116 = (x529+(x530-(x531^x532)));

    if (t116 != 18446744073709551303LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x539 = -1;
	int16_t x540 = 0;
	volatile uint64_t t117 = UINT64_MAX;

    t117 = (x537+(x538-(x539^x540)));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x541 = INT64_MIN;
	int8_t x542 = -1;
	static int16_t x543 = 414;
	int32_t x544 = INT32_MIN;
	static volatile int64_t t118 = 638390LL;

    t118 = (x541+(x542-(x543^x544)));

    if (t118 != -9223372034707292575LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x546 = 4151118084167639802LL;
	volatile int16_t x548 = 2371;
	int64_t t119 = -48322051LL;

    t119 = (x545+(x546-(x547^x548)));

    if (t119 != 4151118084167642148LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x553 = INT32_MAX;
	static int8_t x554 = -20;
	int64_t x555 = -1LL;
	int32_t x556 = -1084113;
	volatile int64_t t120 = -795375777297221993LL;

    t120 = (x553+(x554-(x555^x556)));

    if (t120 != 2146399515LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x558 = 81U;
	static uint8_t x560 = 12U;
	volatile int64_t t121 = -3554LL;

    t121 = (x557+(x558-(x559^x560)));

    if (t121 != -3879949758837LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x561 = UINT64_MAX;
	uint32_t x562 = 41U;
	int8_t x563 = INT8_MIN;
	uint16_t x564 = 6U;
	uint64_t t122 = 100309LLU;

    t122 = (x561+(x562-(x563^x564)));

    if (t122 != 162LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x565 = 72476669594933834LL;
	int8_t x566 = INT8_MIN;
	uint32_t x567 = 159677862U;
	static int64_t x568 = 668454881539LL;
	int64_t t123 = 5438807073573798LL;

    t123 = (x565+(x566-(x567^x568)));

    if (t123 != 72476001014457637LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x571 = UINT32_MAX;
	int64_t x572 = INT64_MIN;

    t124 = (x569+(x570-(x571^x572)));

    if (t124 != 9223372032559808955LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x573 = -124;
	int64_t x574 = -12197519708364775LL;
	static int32_t x576 = INT32_MIN;
	volatile int64_t t125 = -330LL;

    t125 = (x573+(x574-(x575^x576)));

    if (t125 != -12197517560881407LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x577 = -1;
	int16_t x578 = INT16_MAX;
	volatile int16_t x579 = INT16_MAX;
	uint32_t x580 = 23U;

    t126 = (x577+(x578-(x579^x580)));

    if (t126 != 22U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x581 = INT16_MAX;
	volatile int64_t x582 = -214985LL;
	int32_t x584 = INT32_MAX;

    t127 = (x581+(x582-(x583^x584)));

    if (t127 != -2147665865LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x585 = INT64_MIN;
	int32_t x586 = -9;
	static int64_t x587 = 17287274227LL;
	int16_t x588 = INT16_MIN;
	int64_t t128 = 3039205841LL;

    t128 = (x585+(x586-(x587^x588)));

    if (t128 != -9223372019567517436LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x589 = -1;
	uint16_t x591 = 1U;
	volatile uint16_t x592 = 16607U;
	static int64_t t129 = -28091043479LL;

    t129 = (x589+(x590-(x591^x592)));

    if (t129 != 9223372036854759200LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile int8_t x598 = INT8_MAX;
	int64_t x600 = INT64_MIN;
	int64_t t130 = 57LL;

    t130 = (x597+(x598-(x599^x600)));

    if (t130 != -9223343569324888576LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x601 = 24U;
	uint16_t x602 = 324U;
	uint64_t t131 = 1LLU;

    t131 = (x601+(x602-(x603^x604)));

    if (t131 != 9223412922279837285LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x609 = INT16_MIN;
	uint32_t x610 = UINT32_MAX;
	int64_t x611 = -1LL;

    t132 = (x609+(x610-(x611^x612)));

    if (t132 != 4294934527LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x614 = -1LL;
	static int64_t x615 = -625LL;
	int64_t t133 = 2505155263288LL;

    t133 = (x613+(x614-(x615^x616)));

    if (t133 != 655LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint32_t x617 = UINT32_MAX;
	int16_t x618 = INT16_MAX;
	static int16_t x619 = -47;
	int32_t x620 = INT32_MIN;
	uint32_t t134 = 588339U;

    t134 = (x617+(x618-(x619^x620)));

    if (t134 != 2147516461U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x621 = 3209783LL;
	int8_t x622 = -1;
	static int16_t x623 = 304;
	int64_t t135 = 734013LL;

    t135 = (x621+(x622-(x623^x624)));

    if (t135 != 3210087LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x625 = UINT32_MAX;
	int32_t x626 = INT32_MAX;
	int64_t x627 = INT64_MIN;
	int32_t x628 = INT32_MIN;
	int64_t t136 = -12213445458LL;

    t136 = (x625+(x626-(x627^x628)));

    if (t136 != -9223372028264841218LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x629 = INT16_MAX;
	int8_t x631 = INT8_MIN;
	uint64_t x632 = 119266LLU;

    t137 = (x629+(x630-(x631^x632)));

    if (t137 != 155655LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x637 = 99485629121932066LLU;
	int32_t x638 = -1;
	static volatile int8_t x640 = INT8_MIN;

    t138 = (x637+(x638-(x639^x640)));

    if (t138 != 99485629121932194LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x641 = 0;
	uint32_t x643 = UINT32_MAX;
	int16_t x644 = 14;
	int64_t t139 = 13LL;

    t139 = (x641+(x642-(x643^x644)));

    if (t139 != 9223372032559808526LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x645 = -1;
	static int64_t x647 = -1LL;
	int64_t x648 = INT64_MIN;

    t140 = (x645+(x646-(x647^x648)));

    if (t140 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x649 = 1;
	int8_t x652 = -25;
	int32_t t141 = -119646;

    t141 = (x649+(x650-(x651^x652)));

    if (t141 != 104) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x653 = 4349872200599885LL;
	static uint16_t x654 = 2U;
	volatile int32_t x656 = INT32_MAX;
	volatile int64_t t142 = -1116LL;

    t142 = (x653+(x654-(x655^x656)));

    if (t142 != 4349874348050768LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x657 = 103U;
	uint64_t x659 = UINT64_MAX;
	int16_t x660 = INT16_MAX;
	uint64_t t143 = 24916LLU;

    t143 = (x657+(x658-(x659^x660)));

    if (t143 != 2147516518LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x661 = -2;
	volatile uint64_t x662 = UINT64_MAX;
	int16_t x663 = 4;
	uint64_t x664 = 3LLU;
	volatile uint64_t t144 = 3LLU;

    t144 = (x661+(x662-(x663^x664)));

    if (t144 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x666 = 7714117957363698LLU;
	int32_t x667 = INT32_MIN;
	int32_t x668 = INT32_MAX;
	volatile uint64_t t145 = 7753762927472976LLU;

    t145 = (x665+(x666-(x667^x668)));

    if (t145 != 7714115809880051LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x669 = 6U;
	volatile uint32_t x670 = UINT32_MAX;
	volatile uint16_t x672 = 1U;
	uint32_t t146 = 1297556U;

    t146 = (x669+(x670-(x671^x672)));

    if (t146 != 4294934535U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x673 = 15767691LL;
	static volatile int16_t x674 = INT16_MIN;
	uint32_t x675 = 11997135U;
	volatile int32_t x676 = INT32_MAX;
	volatile int64_t t147 = -3716975443LL;

    t147 = (x673+(x674-(x675^x676)));

    if (t147 != 2175215707LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x677 = 62555551U;
	int8_t x678 = 3;
	volatile uint64_t x679 = 762552969LLU;
	static int32_t x680 = 3803636;
	static uint64_t t148 = 645LLU;

    t148 = (x677+(x678-(x679^x680)));

    if (t148 != 18446744073012304421LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x686 = -5333739199848254LL;
	volatile int8_t x687 = INT8_MIN;
	volatile int64_t x688 = -38247LL;

    t149 = (x685+(x686-(x687^x688)));

    if (t149 != -5333739199886431LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x689 = -1475285;
	int16_t x690 = 0;
	int32_t x691 = 11330;
	uint64_t x692 = 23LLU;
	volatile uint64_t t150 = 58022LLU;

    t150 = (x689+(x690-(x691^x692)));

    if (t150 != 18446744073708064982LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x693 = -108;
	int32_t x694 = -1;
	int16_t x695 = INT16_MIN;
	volatile int16_t x696 = -1;
	int32_t t151 = 1856;

    t151 = (x693+(x694-(x695^x696)));

    if (t151 != -32876) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x697 = -1LL;
	uint16_t x698 = 17U;
	uint16_t x699 = UINT16_MAX;
	int32_t x700 = INT32_MIN;
	int64_t t152 = 1840055166LL;

    t152 = (x697+(x698-(x699^x700)));

    if (t152 != 2147418129LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x702 = -1;
	volatile uint8_t x703 = 95U;
	int32_t x704 = INT32_MAX;
	volatile int32_t t153 = -16;

    t153 = (x701+(x702-(x703^x704)));

    if (t153 != -2147483565) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x706 = -13;
	int8_t x707 = INT8_MAX;
	int8_t x708 = INT8_MAX;
	int32_t t154 = 13225;

    t154 = (x705+(x706-(x707^x708)));

    if (t154 != 1282) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x709 = 85U;
	int64_t x710 = INT64_MIN;
	volatile uint8_t x712 = UINT8_MAX;
	int64_t t155 = -45328955LL;

    t155 = (x709+(x710-(x711^x712)));

    if (t155 != -9223372036854775467LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	int64_t x718 = INT64_MAX;
	static uint64_t x719 = 20446933920213805LLU;
	static int8_t x720 = INT8_MAX;
	static uint64_t t156 = 781710909015LLU;

    t156 = (x717+(x718-(x719^x720)));

    if (t156 != 9202925102934561964LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x721 = -1LL;
	uint32_t x722 = 46U;
	int32_t x723 = INT32_MIN;
	uint8_t x724 = 0U;
	static int64_t t157 = 2323930182605938919LL;

    t157 = (x721+(x722-(x723^x724)));

    if (t157 != 2147483693LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x725 = INT8_MAX;
	int32_t x727 = INT32_MIN;
	int8_t x728 = -1;
	volatile int32_t t158 = 4051398;

    t158 = (x725+(x726-(x727^x728)));

    if (t158 != -2147483265) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x730 = 62U;
	int16_t x731 = 1;
	int64_t x732 = -12745LL;
	volatile int64_t t159 = 2601540LL;

    t159 = (x729+(x730-(x731^x732)));

    if (t159 != 12807LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x737 = 1899;
	uint8_t x739 = UINT8_MAX;
	volatile int32_t t160 = 23766313;

    t160 = (x737+(x738-(x739^x740)));

    if (t160 != 1427) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x741 = INT16_MIN;
	int8_t x742 = 3;
	int16_t x743 = 0;
	volatile int32_t t161 = 24;

    t161 = (x741+(x742-(x743^x744)));

    if (t161 != 3) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x745 = 9U;
	int8_t x748 = -15;
	static volatile int32_t t162 = -63;

    t162 = (x745+(x746-(x747^x748)));

    if (t162 != -8) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	int32_t x750 = -102565;
	uint64_t x751 = 355339LLU;
	int64_t x752 = -1LL;
	uint64_t t163 = 55LLU;

    t163 = (x749+(x750-(x751^x752)));

    if (t163 != 252774LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x753 = -1645010;
	static volatile int64_t x754 = -1LL;
	volatile int8_t x755 = INT8_MIN;
	volatile uint64_t x756 = 6537244394754LLU;
	volatile uint64_t t164 = 8820103818965LLU;

    t164 = (x753+(x754-(x755^x756)));

    if (t164 != 6537242749867LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x759 = 0U;
	int64_t x760 = INT64_MIN;
	volatile int64_t t165 = 7250190965LL;

    t165 = (x757+(x758-(x759^x760)));

    if (t165 != 9223372034707292131LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x765 = INT8_MIN;
	int16_t x766 = INT16_MAX;
	volatile int8_t x767 = -9;
	uint32_t x768 = 414298U;
	static volatile uint32_t t166 = 26846417U;

    t166 = (x765+(x766-(x767^x768)));

    if (t166 != 446930U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x769 = -128283190;
	volatile int64_t x770 = INT64_MAX;
	volatile uint64_t x771 = 84987028176LLU;
	int16_t x772 = INT16_MIN;

    t167 = (x769+(x770-(x771^x772)));

    if (t167 != 9223372121713535737LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x774 = INT32_MIN;
	int16_t x776 = -1;

    t168 = (x773+(x774-(x775^x776)));

    if (t168 != 2148777038U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x777 = INT32_MAX;
	int32_t x778 = 14940;
	uint32_t x779 = UINT32_MAX;
	int32_t x780 = 596218471;

    t169 = (x777+(x778-(x779^x780)));

    if (t169 != 2743717059U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x783 = -1;
	static int64_t x784 = INT64_MAX;

    t170 = (x781+(x782-(x783^x784)));

    if (t170 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x785 = 1785U;
	static int64_t x786 = INT64_MIN;
	int16_t x787 = INT16_MAX;
	static int64_t t171 = 3840499212965LL;

    t171 = (x785+(x786-(x787^x788)));

    if (t171 != -9223372036854741255LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x789 = -3822;
	int8_t x790 = 6;
	int8_t x791 = -1;

    t172 = (x789+(x790-(x791^x792)));

    if (t172 != 61720) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x794 = 8540U;
	int64_t x795 = -50011952737LL;
	uint32_t x796 = 0U;
	int64_t t173 = 53518369032945LL;

    t173 = (x793+(x794-(x795^x796)));

    if (t173 != 50011961251LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x801 = UINT32_MAX;
	uint32_t x802 = 2811U;
	int16_t x803 = INT16_MAX;
	static uint64_t x804 = 250209LLU;
	volatile uint64_t t174 = 219341353160185659LLU;

    t174 = (x801+(x802-(x803^x804)));

    if (t174 != 4294728796LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x805 = INT16_MIN;
	int8_t x806 = -29;
	int16_t x807 = 14;
	int64_t x808 = INT64_MIN;
	volatile int64_t t175 = 2906222911762614LL;

    t175 = (x805+(x806-(x807^x808)));

    if (t175 != 9223372036854742997LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x809 = INT8_MIN;
	static volatile uint64_t x810 = 59351976073032LLU;
	int32_t x812 = -1;
	volatile uint64_t t176 = 2150LLU;

    t176 = (x809+(x810-(x811^x812)));

    if (t176 != 59354123556552LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x813 = 0;
	static volatile int64_t x814 = -1LL;
	int64_t x816 = INT64_MIN;
	int64_t t177 = -14390736LL;

    t177 = (x813+(x814-(x815^x816)));

    if (t177 != 9223372036854652582LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x817 = UINT32_MAX;
	static int64_t x818 = INT64_MAX;
	uint32_t x819 = 30U;
	static int64_t x820 = INT64_MAX;
	int64_t t178 = -149557230193549632LL;

    t178 = (x817+(x818-(x819^x820)));

    if (t178 != 4294967325LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x821 = 42941878120906LLU;
	static uint64_t x822 = 3207605924844381LLU;
	int16_t x824 = -1;
	uint64_t t179 = 11180834LLU;

    t179 = (x821+(x822-(x823^x824)));

    if (t179 != 3250547802965160LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x826 = 30068U;
	int16_t x828 = INT16_MIN;
	uint32_t t180 = 14U;

    t180 = (x825+(x826-(x827^x828)));

    if (t180 != 29813U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x833 = UINT32_MAX;
	static int8_t x836 = -1;

    t181 = (x833+(x834-(x835^x836)));

    if (t181 != 2149031846LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x837 = 13064609659908LLU;
	int32_t x838 = -1;
	int16_t x839 = INT16_MIN;
	static uint64_t t182 = 1LLU;

    t182 = (x837+(x838-(x839^x840)));

    if (t182 != 13064609688907LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x841 = INT64_MIN;
	static int64_t x843 = -92256810572806LL;
	uint16_t x844 = 1690U;

    t183 = (x841+(x842-(x843^x844)));

    if (t183 != -9223279780044196981LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x845 = 0;
	uint64_t x846 = 3270668855131LLU;
	int8_t x847 = -43;
	int32_t x848 = -4088;
	uint64_t t184 = 659399565427LLU;

    t184 = (x845+(x846-(x847^x848)));

    if (t184 != 3270668851070LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x849 = 1;
	int32_t x850 = -1;
	volatile int32_t t185 = -1718;

    t185 = (x849+(x850-(x851^x852)));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x853 = INT8_MAX;
	int16_t x854 = -1;
	static int8_t x855 = INT8_MAX;
	volatile int32_t t186 = 3004303;

    t186 = (x853+(x854-(x855^x856)));

    if (t186 != -2147483394) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x857 = -1LL;
	int32_t x860 = INT32_MAX;
	int64_t t187 = -19291721464828337LL;

    t187 = (x857+(x858-(x859^x860)));

    if (t187 != -2147417649LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x861 = -1;
	int64_t x862 = 523221664703029650LL;
	int16_t x863 = INT16_MIN;
	volatile int64_t t188 = -14904724682001LL;

    t188 = (x861+(x862-(x863^x864)));

    if (t188 != 523221664703062290LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x865 = 12517U;
	static volatile uint8_t x866 = UINT8_MAX;
	int32_t x868 = -1;
	uint32_t t189 = 1119189718U;

    t189 = (x865+(x866-(x867^x868)));

    if (t189 != 12772U) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x869 = INT64_MAX;
	int64_t x870 = -1LL;
	int32_t x871 = INT32_MAX;
	uint32_t x872 = UINT32_MAX;

    t190 = (x869+(x870-(x871^x872)));

    if (t190 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x874 = -11707;
	int16_t x875 = INT16_MAX;
	uint64_t t191 = 31237132887003167LLU;

    t191 = (x873+(x874-(x875^x876)));

    if (t191 != 18446744073709448662LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x885 = -1;
	uint64_t x887 = 1805742416725LLU;
	int32_t x888 = INT32_MIN;
	uint64_t t192 = 67973352LLU;

    t192 = (x885+(x886-(x887^x888)));

    if (t192 != 1804177595638LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x889 = -1;
	int32_t x891 = -260048;
	int16_t x892 = -1;
	int32_t t193 = -76020;

    t193 = (x889+(x890-(x891^x892)));

    if (t193 != -260044) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x894 = INT32_MAX;
	volatile uint64_t x895 = 1794183621LLU;
	uint64_t t194 = 2LLU;

    t194 = (x893+(x894-(x895^x896)));

    if (t194 != 353300286LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x897 = INT8_MIN;
	volatile uint16_t x898 = 0U;
	static uint64_t x899 = 2583626066LLU;
	volatile uint32_t x900 = UINT32_MAX;
	uint64_t t195 = 62540133LLU;

    t195 = (x897+(x898-(x899^x900)));

    if (t195 != 18446744071998210259LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x903 = -1;
	volatile int16_t x904 = 0;
	volatile uint64_t t196 = 791920062108LLU;

    t196 = (x901+(x902-(x903^x904)));

    if (t196 != 5433164475879LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x910 = 267035488U;
	uint32_t x911 = UINT32_MAX;
	int8_t x912 = 8;
	static uint32_t t197 = 4492303U;

    t197 = (x909+(x910-(x911^x912)));

    if (t197 != 267035496U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x913 = -1;
	volatile int8_t x914 = -1;
	uint8_t x916 = UINT8_MAX;
	int32_t t198 = -6916157;

    t198 = (x913+(x914-(x915^x916)));

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x917 = UINT8_MAX;
	int64_t x918 = 220853708LL;
	int8_t x919 = INT8_MIN;
	volatile uint32_t x920 = 126727199U;
	volatile int64_t t199 = 46634950609955038LL;

    t199 = (x917+(x918-(x919^x920)));

    if (t199 != -3947386068LL) { NG(); } else { ; }
	
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

