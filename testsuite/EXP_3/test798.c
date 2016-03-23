
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

static int64_t x2 = -11LL;
static uint16_t x6 = UINT16_MAX;
int16_t x7 = INT16_MIN;
uint8_t x33 = 40U;
uint16_t x45 = 0U;
int16_t x46 = 910;
static uint32_t x49 = 23U;
static int8_t x62 = -1;
uint16_t x63 = 16U;
uint8_t x66 = 1U;
int64_t x68 = -14701557649LL;
uint8_t x73 = UINT8_MAX;
int16_t x76 = INT16_MIN;
uint64_t t18 = 631922701762560701LLU;
int16_t x87 = 922;
static int8_t x90 = INT8_MIN;
uint32_t t22 = 458895U;
int16_t x98 = -1;
volatile uint32_t t24 = 47929507U;
uint16_t x109 = 5U;
static int16_t x110 = -2;
uint64_t x116 = 209LLU;
uint32_t x120 = 143448U;
uint16_t x126 = 184U;
volatile int32_t x129 = -99;
int64_t x130 = -3685482LL;
int8_t x134 = INT8_MIN;
uint64_t x143 = 12816684483628732LLU;
volatile int64_t x148 = INT64_MAX;
uint16_t x153 = UINT16_MAX;
int8_t x155 = 0;
volatile uint16_t x159 = UINT16_MAX;
uint16_t x162 = 2677U;
int64_t t36 = 529692LL;
uint64_t x166 = UINT64_MAX;
volatile uint16_t x169 = 44U;
uint32_t x177 = UINT32_MAX;
uint64_t x189 = 6000474961790595272LLU;
int16_t x190 = INT16_MIN;
static volatile uint64_t t42 = 56389557608LLU;
uint16_t x202 = UINT16_MAX;
uint64_t x205 = 801132208LLU;
uint16_t x206 = 1U;
volatile uint64_t t44 = 16221LLU;
int8_t x209 = -9;
volatile int64_t x215 = -153229088LL;
uint32_t x216 = UINT32_MAX;
static int32_t x217 = -1;
volatile int32_t x218 = -1;
static int8_t x233 = 0;
static uint64_t t50 = 920665LLU;
uint32_t x252 = 715608568U;
static int16_t x255 = INT16_MAX;
static int32_t x256 = -1;
volatile int16_t x257 = -1;
volatile uint16_t x267 = UINT16_MAX;
uint16_t x269 = 48U;
int16_t x271 = INT16_MIN;
volatile int32_t t58 = 458269026;
uint64_t t59 = 1885015398186LLU;
static uint64_t t60 = 1099478997213260170LLU;
uint8_t x286 = 2U;
uint64_t x289 = UINT64_MAX;
volatile uint64_t x295 = 43602557345286289LLU;
int16_t x300 = INT16_MIN;
static uint8_t x315 = 3U;
volatile uint64_t t70 = 3LLU;
static uint64_t t71 = 1735933LLU;
int8_t x339 = -3;
int16_t x350 = INT16_MIN;
uint64_t x355 = 7599055299919LLU;
static volatile uint64_t t77 = 625LLU;
int8_t x361 = 27;
int16_t x363 = INT16_MAX;
int8_t x364 = -6;
int32_t x372 = INT32_MIN;
uint16_t x374 = 1U;
uint16_t x375 = 4016U;
int32_t x377 = -45;
volatile uint32_t t84 = 91833U;
uint32_t x396 = 1287712295U;
volatile uint64_t t85 = 7424460127088217LLU;
volatile int32_t x400 = -3;
uint32_t x404 = 39540U;
int32_t x409 = INT32_MIN;
volatile uint64_t x412 = 2080368077851060LLU;
int64_t x428 = 1620LL;
volatile int64_t t93 = -8LL;
static int32_t x446 = INT32_MIN;
int64_t x453 = -1LL;
static int16_t x454 = INT16_MIN;
int64_t x459 = 416087LL;
int16_t x461 = INT16_MIN;
uint8_t x463 = 41U;
int8_t x476 = INT8_MIN;
int64_t t104 = -1LL;
volatile int32_t t105 = -72;
volatile int16_t x481 = INT16_MAX;
static int16_t x483 = -1;
int64_t x485 = -1008LL;
volatile uint16_t x489 = 17U;
static int32_t x490 = -1216;
volatile int32_t x500 = 276;
int64_t t109 = -40911LL;
int64_t x501 = -1LL;
int8_t x509 = -1;
int8_t x515 = -1;
static int64_t x519 = INT64_MIN;
volatile int8_t x524 = 10;
uint8_t x530 = 27U;
volatile int8_t x532 = 15;
volatile int32_t t117 = -62991;
int16_t x533 = INT16_MIN;
int8_t x535 = 0;
int64_t x541 = -1LL;
uint8_t x546 = UINT8_MAX;
static int64_t t120 = 1004718LL;
volatile uint16_t x559 = 1146U;
static uint32_t t122 = 154U;
int8_t x564 = -1;
static int64_t x565 = -3015LL;
int32_t x567 = -14540755;
uint16_t x569 = 21U;
int16_t x583 = -8147;
volatile int8_t x585 = INT8_MAX;
volatile uint32_t t130 = 152611U;
static volatile uint64_t x594 = 1714LLU;
uint64_t t133 = 39846364141LLU;
int16_t x612 = INT16_MAX;
volatile uint16_t x613 = 22U;
volatile int16_t x616 = INT16_MAX;
int8_t x618 = INT8_MAX;
static int64_t x620 = INT64_MAX;
volatile int8_t x631 = 1;
int32_t x634 = INT32_MIN;
static int8_t x639 = INT8_MIN;
int16_t x652 = INT16_MIN;
volatile int64_t t143 = -66LL;
int8_t x660 = INT8_MAX;
volatile int64_t x665 = -1LL;
int32_t x667 = INT32_MIN;
static volatile uint64_t t151 = 2097284815468813LLU;
int32_t x690 = -533;
uint32_t x699 = 3924256U;
int32_t x700 = INT32_MIN;
uint32_t t153 = 2936783U;
uint32_t x701 = 842324U;
volatile uint8_t x704 = UINT8_MAX;
volatile uint32_t t154 = 653018629U;
volatile int8_t x705 = 0;
int64_t x706 = INT64_MIN;
static volatile int8_t x708 = 56;
int16_t x709 = INT16_MIN;
int64_t x710 = 41501378LL;
int16_t x724 = -934;
int8_t x725 = -1;
volatile uint32_t t160 = 2437U;
uint16_t x733 = UINT16_MAX;
int32_t x734 = INT32_MIN;
int8_t x735 = 1;
int16_t x737 = INT16_MIN;
volatile int32_t t164 = -364;
int16_t x751 = -2;
volatile int8_t x755 = -1;
uint64_t t167 = 87649LLU;
uint64_t x767 = UINT64_MAX;
uint8_t x768 = 18U;
uint64_t x783 = 58428994206655LLU;
uint64_t x784 = 1612LLU;
int32_t x787 = -5;
int16_t x793 = -1;
int8_t x798 = -7;
int64_t t177 = -72848989LL;
volatile uint16_t x805 = UINT16_MAX;
uint32_t x807 = 51U;
static uint8_t x817 = 0U;
int8_t x818 = 1;
int8_t x820 = -1;
volatile int32_t t181 = -36;
int8_t x821 = INT8_MIN;
int16_t x822 = -1;
int32_t x830 = INT32_MIN;
static int16_t x831 = INT16_MIN;
volatile int64_t t183 = -841278LL;
int8_t x835 = 5;
volatile int8_t x838 = -53;
uint32_t x840 = 161U;
volatile uint64_t t187 = 24LLU;
int8_t x856 = -21;
volatile uint64_t t189 = 30494059337LLU;
uint64_t x863 = UINT64_MAX;
uint64_t x870 = UINT64_MAX;
int32_t x873 = -1;
int64_t x878 = -28LL;
static int32_t x880 = 74593966;
volatile uint64_t x881 = UINT64_MAX;
int16_t x882 = INT16_MIN;
int8_t x885 = INT8_MIN;
static uint32_t x886 = 14U;
int32_t x890 = -9343455;
int64_t x894 = -1LL;
int8_t x896 = INT8_MIN;


void f0(void) {
    	static int16_t x1 = -5257;
	int8_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	int64_t t0 = 17220LL;

    t0 = ((x1+x2)^(x3%x4));

    if (t0 != -5268LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 336464159;
	static volatile uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = 1U;

    t1 = ((x5+x6)^(x7%x8));

    if (t1 != 3958409502U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 6903071U;
	int64_t x10 = -1464LL;
	uint16_t x11 = 51U;
	int8_t x12 = -12;
	static int64_t t2 = -67228LL;

    t2 = ((x9+x10)^(x11%x12));

    if (t2 != 6901604LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MAX;
	uint64_t x14 = 558806623670LLU;
	volatile int32_t x15 = INT32_MAX;
	int32_t x16 = -7044020;
	uint64_t t3 = 1727267288134LLU;

    t3 = ((x13+x14)^(x15%x16));

    if (t3 != 9223372595655966602LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int16_t x18 = INT16_MAX;
	int16_t x19 = INT16_MAX;
	volatile int16_t x20 = -1;
	volatile int64_t t4 = 56799653435LL;

    t4 = ((x17+x18)^(x19%x20));

    if (t4 != 32766LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 4LLU;
	uint16_t x22 = 3641U;
	static volatile int8_t x23 = 39;
	uint32_t x24 = UINT32_MAX;
	volatile uint64_t t5 = 175LLU;

    t5 = ((x21+x22)^(x23%x24));

    if (t5 != 3610LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	uint16_t x26 = 12720U;
	static int64_t x27 = INT64_MIN;
	uint16_t x28 = UINT16_MAX;
	static int64_t t6 = 3LL;

    t6 = ((x25+x26)^(x27%x28));

    if (t6 != 9223372036854755760LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x34 = 1043908544208393312LLU;
	int16_t x35 = 9;
	int8_t x36 = INT8_MIN;
	uint64_t t7 = 7LLU;

    t7 = ((x33+x34)^(x35%x36));

    if (t7 != 1043908544208393345LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = INT16_MIN;
	volatile int16_t x38 = INT16_MIN;
	static int8_t x39 = INT8_MIN;
	uint8_t x40 = 10U;
	int32_t t8 = -2726787;

    t8 = ((x37+x38)^(x39%x40));

    if (t8 != 65528) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -6;
	int16_t x42 = INT16_MIN;
	int16_t x43 = 1;
	int8_t x44 = 9;
	volatile int32_t t9 = -3328159;

    t9 = ((x41+x42)^(x43%x44));

    if (t9 != -32773) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x47 = 2056U;
	volatile int8_t x48 = INT8_MIN;
	static volatile int32_t t10 = 374;

    t10 = ((x45+x46)^(x47%x48));

    if (t10 != 902) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x50 = 2U;
	uint16_t x51 = 287U;
	int16_t x52 = INT16_MIN;
	uint32_t t11 = 2531U;

    t11 = ((x49+x50)^(x51%x52));

    if (t11 != 262U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = 1;
	volatile int32_t x54 = INT32_MIN;
	volatile int64_t x55 = INT64_MAX;
	volatile int16_t x56 = INT16_MIN;
	int64_t t12 = -223513899517LL;

    t12 = ((x53+x54)^(x55%x56));

    if (t12 != -2147450882LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 0;
	volatile int8_t x58 = INT8_MIN;
	volatile int32_t x59 = -1;
	uint32_t x60 = 819642934U;
	static volatile uint32_t t13 = 4134U;

    t13 = ((x57+x58)^(x59%x60));

    if (t13 != 4098214769U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = -49;
	uint16_t x64 = 954U;
	static volatile int32_t t14 = 1455154;

    t14 = ((x61+x62)^(x63%x64));

    if (t14 != -34) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x65 = -1;
	uint16_t x67 = 6968U;
	volatile int64_t t15 = -1990367179LL;

    t15 = ((x65+x66)^(x67%x68));

    if (t15 != 6968LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x69 = 1695232497719LL;
	uint16_t x70 = 19U;
	int32_t x71 = INT32_MIN;
	uint16_t x72 = UINT16_MAX;
	static int64_t t16 = -1449363814050LL;

    t16 = ((x69+x70)^(x71%x72));

    if (t16 != -1695232518070LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x74 = 8U;
	volatile int32_t x75 = -1;
	static volatile int32_t t17 = -15;

    t17 = ((x73+x74)^(x75%x76));

    if (t17 != -264) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = UINT64_MAX;
	int16_t x78 = 174;
	int32_t x79 = 699;
	volatile uint8_t x80 = 121U;

    t18 = ((x77+x78)^(x79%x80));

    if (t18 != 243LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = -46;
	volatile uint64_t x82 = UINT64_MAX;
	static uint8_t x83 = 2U;
	uint8_t x84 = 96U;
	volatile uint64_t t19 = 4233352508737LLU;

    t19 = ((x81+x82)^(x83%x84));

    if (t19 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MAX;
	uint64_t x86 = UINT64_MAX;
	int8_t x88 = INT8_MAX;
	uint64_t t20 = 154LLU;

    t20 = ((x85+x86)^(x87%x88));

    if (t20 != 9223372036854775775LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = 3237382152LLU;
	int8_t x91 = INT8_MAX;
	static int8_t x92 = 4;
	uint64_t t21 = 7581258200434601367LLU;

    t21 = ((x89+x90)^(x91%x92));

    if (t21 != 3237382027LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x93 = 0;
	uint32_t x94 = 49U;
	static int8_t x95 = -1;
	int16_t x96 = INT16_MIN;

    t22 = ((x93+x94)^(x95%x96));

    if (t22 != 4294967246U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = 0;
	int32_t x99 = 908;
	static int8_t x100 = -1;
	static int32_t t23 = 705;

    t23 = ((x97+x98)^(x99%x100));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x101 = UINT32_MAX;
	volatile uint32_t x102 = 3U;
	volatile int32_t x103 = -1;
	int16_t x104 = INT16_MIN;

    t24 = ((x101+x102)^(x103%x104));

    if (t24 != 4294967293U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x111 = 13U;
	uint16_t x112 = 474U;
	volatile int32_t t25 = 1268375;

    t25 = ((x109+x110)^(x111%x112));

    if (t25 != 14) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = INT64_MAX;
	uint64_t x114 = 3673065083893136LLU;
	uint8_t x115 = 0U;
	uint64_t t26 = 1421LLU;

    t26 = ((x113+x114)^(x115%x116));

    if (t26 != 9227045101938668943LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x117 = 52330423502630LLU;
	int32_t x118 = -1296802;
	int16_t x119 = 1;
	uint64_t t27 = 619084LLU;

    t27 = ((x117+x118)^(x119%x120));

    if (t27 != 52330422205829LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x125 = 4464199387678LLU;
	int8_t x127 = -5;
	static uint8_t x128 = 2U;
	volatile uint64_t t28 = 41844765LLU;

    t28 = ((x125+x126)^(x127%x128));

    if (t28 != 18446739609510163753LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x131 = UINT8_MAX;
	uint8_t x132 = 88U;
	volatile int64_t t29 = -589395LL;

    t29 = ((x129+x130)^(x131%x132));

    if (t29 != -3685508LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x133 = INT32_MAX;
	int8_t x135 = 1;
	static int8_t x136 = -1;
	static volatile int32_t t30 = 1513831;

    t30 = ((x133+x134)^(x135%x136));

    if (t30 != 2147483519) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = INT16_MIN;
	static uint64_t x138 = UINT64_MAX;
	static volatile int64_t x139 = INT64_MIN;
	static uint32_t x140 = 125U;
	volatile uint64_t t31 = 26LLU;

    t31 = ((x137+x138)^(x139%x140));

    if (t31 != 32825LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x141 = 1665637268LLU;
	volatile uint16_t x142 = 10232U;
	static int8_t x144 = 1;
	volatile uint64_t t32 = 2378LLU;

    t32 = ((x141+x142)^(x143%x144));

    if (t32 != 1665647500LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = INT16_MIN;
	int32_t x146 = -1;
	int8_t x147 = INT8_MIN;
	static volatile int64_t t33 = 3780941565LL;

    t33 = ((x145+x146)^(x147%x148));

    if (t33 != 32895LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x154 = 873LLU;
	static volatile uint32_t x156 = UINT32_MAX;
	uint64_t t34 = 2298781696461165LLU;

    t34 = ((x153+x154)^(x155%x156));

    if (t34 != 66408LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x157 = -1;
	uint64_t x158 = 31665716097584LLU;
	volatile int8_t x160 = -23;
	volatile uint64_t t35 = 47885813286547LLU;

    t35 = ((x157+x158)^(x159%x160));

    if (t35 != 31665716097575LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x161 = INT32_MIN;
	static int64_t x163 = 43048613LL;
	int8_t x164 = INT8_MIN;

    t36 = ((x161+x162)^(x163%x164));

    if (t36 != -2147481008LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x165 = INT64_MAX;
	uint32_t x167 = 884806U;
	int64_t x168 = 84455200876806195LL;
	static volatile uint64_t t37 = 3163476050280LLU;

    t37 = ((x165+x166)^(x167%x168));

    if (t37 != 9223372036853891000LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x170 = UINT32_MAX;
	int32_t x171 = -1;
	int8_t x172 = INT8_MIN;
	uint32_t t38 = 1028346369U;

    t38 = ((x169+x170)^(x171%x172));

    if (t38 != 4294967252U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x173 = 8497LLU;
	int32_t x174 = INT32_MIN;
	int64_t x175 = -6668808LL;
	int16_t x176 = INT16_MIN;
	volatile uint64_t t39 = 131983121265218LLU;

    t39 = ((x173+x174)^(x175%x176));

    if (t39 != 2147458249LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x178 = INT32_MIN;
	volatile int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MAX;
	static uint32_t t40 = 1821233U;

    t40 = ((x177+x178)^(x179%x180));

    if (t40 != 2147483648U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x191 = -1LL;
	uint64_t x192 = 2265755909671148752LLU;
	volatile uint64_t t41 = 6373965LLU;

    t41 = ((x189+x190)^(x191%x192));

    if (t41 != 6284386415503468983LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x197 = UINT64_MAX;
	int32_t x198 = -672164506;
	static int8_t x199 = -1;
	volatile uint64_t x200 = UINT64_MAX;

    t42 = ((x197+x198)^(x199%x200));

    if (t42 != 18446744073037387109LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x201 = INT16_MIN;
	uint16_t x203 = 1492U;
	uint64_t x204 = 37818LLU;
	static uint64_t t43 = 3LLU;

    t43 = ((x201+x202)^(x203%x204));

    if (t43 != 31275LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x207 = UINT64_MAX;
	int16_t x208 = INT16_MAX;

    t44 = ((x205+x206)^(x207%x208));

    if (t44 != 801132222LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x210 = -1LL;
	int32_t x211 = 1177152;
	volatile uint8_t x212 = 38U;
	volatile int64_t t45 = -3LL;

    t45 = ((x209+x210)^(x211%x212));

    if (t45 != -20LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x213 = 73533;
	volatile uint64_t x214 = 61169064890853LLU;
	volatile uint64_t t46 = 228869LLU;

    t46 = ((x213+x214)^(x215%x216));

    if (t46 != 18446682904764258754LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x219 = INT8_MIN;
	static int64_t x220 = INT64_MIN;
	int64_t t47 = 80901008296LL;

    t47 = ((x217+x218)^(x219%x220));

    if (t47 != 126LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x225 = INT32_MAX;
	volatile int32_t x226 = INT32_MIN;
	int32_t x227 = 110666;
	int16_t x228 = INT16_MIN;
	static int32_t t48 = 29618633;

    t48 = ((x225+x226)^(x227%x228));

    if (t48 != -12363) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x229 = -1;
	int32_t x230 = 7;
	uint64_t x231 = 66144216LLU;
	volatile int64_t x232 = INT64_MIN;
	volatile uint64_t t49 = 218LLU;

    t49 = ((x229+x230)^(x231%x232));

    if (t49 != 66144222LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x234 = -22582277;
	static volatile int8_t x235 = INT8_MAX;
	uint64_t x236 = UINT64_MAX;

    t50 = ((x233+x234)^(x235%x236));

    if (t50 != 18446744073686969220LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x237 = -194880LL;
	static uint32_t x238 = 39633U;
	static int8_t x239 = -1;
	int64_t x240 = INT64_MAX;
	int64_t t51 = -2217LL;

    t51 = ((x237+x238)^(x239%x240));

    if (t51 != 155246LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x241 = 531U;
	uint16_t x242 = 5755U;
	volatile uint32_t x243 = 0U;
	static int16_t x244 = INT16_MAX;
	static uint32_t t52 = 30U;

    t52 = ((x241+x242)^(x243%x244));

    if (t52 != 6286U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x245 = 31U;
	int32_t x246 = 596844706;
	static uint32_t x247 = 244U;
	static int16_t x248 = 306;
	static uint32_t t53 = 61228U;

    t53 = ((x245+x246)^(x247%x248));

    if (t53 != 596844597U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x249 = INT32_MIN;
	static int64_t x250 = 48143284414LL;
	int32_t x251 = INT32_MIN;
	int64_t t54 = -3987994568LL;

    t54 = ((x249+x250)^(x251%x252));

    if (t54 != 45996454566LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x253 = 0U;
	int8_t x254 = 1;
	static volatile int32_t t55 = 39;

    t55 = ((x253+x254)^(x255%x256));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x258 = INT32_MAX;
	int64_t x259 = 1LL;
	volatile uint8_t x260 = 94U;
	int64_t t56 = -831290913941LL;

    t56 = ((x257+x258)^(x259%x260));

    if (t56 != 2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x265 = 430590LL;
	int32_t x266 = 6415;
	static uint16_t x268 = 4291U;
	volatile int64_t t57 = 19514537604556LL;

    t57 = ((x265+x266)^(x267%x268));

    if (t57 != 438175LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x270 = 0U;
	int16_t x272 = INT16_MIN;

    t58 = ((x269+x270)^(x271%x272));

    if (t58 != 48) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x277 = 246736294922LLU;
	int32_t x278 = 2010;
	int8_t x279 = -53;
	volatile int32_t x280 = INT32_MIN;

    t59 = ((x277+x278)^(x279%x280));

    if (t59 != 18446743826973254703LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x281 = 692821788153912230LLU;
	volatile int16_t x282 = -1;
	volatile int64_t x283 = -1LL;
	int64_t x284 = -345182LL;

    t60 = ((x281+x282)^(x283%x284));

    if (t60 != 17753922285555639386LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x285 = -1LL;
	int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MIN;
	static volatile int64_t t61 = 1738044910182LL;

    t61 = ((x285+x286)^(x287%x288));

    if (t61 != -127LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x290 = -1;
	volatile int64_t x291 = INT64_MAX;
	volatile int8_t x292 = -35;
	uint64_t t62 = 592657802734430LLU;

    t62 = ((x289+x290)^(x291%x292));

    if (t62 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x293 = INT8_MIN;
	uint64_t x294 = 46LLU;
	volatile int32_t x296 = -1;
	volatile uint64_t t63 = 3264523433735017LLU;

    t63 = ((x293+x294)^(x295%x296));

    if (t63 != 18403141516364265279LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x297 = 106;
	static uint8_t x298 = UINT8_MAX;
	int16_t x299 = -1;
	int32_t t64 = -912;

    t64 = ((x297+x298)^(x299%x300));

    if (t64 != -362) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x301 = 85226;
	static uint64_t x302 = 1331889133632339517LLU;
	int32_t x303 = INT32_MIN;
	int32_t x304 = 16088;
	volatile uint64_t t65 = 566509918608735LLU;

    t65 = ((x301+x302)^(x303%x304));

    if (t65 != 17114854940077119343LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x305 = 992075LLU;
	int32_t x306 = INT32_MIN;
	int32_t x307 = -3345;
	static uint16_t x308 = UINT16_MAX;
	uint64_t t66 = 7829502437LLU;

    t66 = ((x305+x306)^(x307%x308));

    if (t66 != 2146488740LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x313 = -1;
	int64_t x314 = -1049330490562500093LL;
	int32_t x316 = -3;
	static volatile int64_t t67 = -236561699243266268LL;

    t67 = ((x313+x314)^(x315%x316));

    if (t67 != -1049330490562500094LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x317 = -2511;
	int64_t x318 = 3758248408923290LL;
	static int32_t x319 = INT32_MIN;
	int8_t x320 = -1;
	volatile int64_t t68 = -8314100LL;

    t68 = ((x317+x318)^(x319%x320));

    if (t68 != 3758248408920779LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x321 = 295U;
	int64_t x322 = -5640974965LL;
	int64_t x323 = INT64_MIN;
	uint16_t x324 = 40U;
	static int64_t t69 = -44788498LL;

    t69 = ((x321+x322)^(x323%x324));

    if (t69 != 5640974666LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x325 = 1U;
	uint16_t x326 = UINT16_MAX;
	uint64_t x327 = 12181877LLU;
	static int64_t x328 = -1LL;

    t70 = ((x325+x326)^(x327%x328));

    if (t70 != 12116341LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x333 = 626728409652903LLU;
	int64_t x334 = INT64_MIN;
	int16_t x335 = 3746;
	uint32_t x336 = 3466005U;

    t71 = ((x333+x334)^(x335%x336));

    if (t71 != 9223998765264424965LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x337 = 765824LL;
	uint16_t x338 = UINT16_MAX;
	volatile uint32_t x340 = UINT32_MAX;
	volatile int64_t t72 = 527441055921961LL;

    t72 = ((x337+x338)^(x339%x340));

    if (t72 != 4294135938LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x341 = 30388;
	int8_t x342 = INT8_MIN;
	volatile int32_t x343 = -1;
	int32_t x344 = INT32_MIN;
	static int32_t t73 = -75027473;

    t73 = ((x341+x342)^(x343%x344));

    if (t73 != -30261) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x345 = INT32_MAX;
	int32_t x346 = INT32_MIN;
	static int32_t x347 = INT32_MIN;
	volatile int8_t x348 = -10;
	int32_t t74 = -298540;

    t74 = ((x345+x346)^(x347%x348));

    if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x349 = 17;
	int32_t x351 = -1;
	static int8_t x352 = -2;
	int32_t t75 = -25650410;

    t75 = ((x349+x350)^(x351%x352));

    if (t75 != 32750) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x353 = 6U;
	volatile int64_t x354 = INT64_MIN;
	int8_t x356 = -7;
	static volatile uint64_t t76 = 7LLU;

    t76 = ((x353+x354)^(x355%x356));

    if (t76 != 9223379635910075721LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x357 = 1546381112562LLU;
	uint64_t x358 = 1716496778073938127LLU;
	uint64_t x359 = 21665719804LLU;
	volatile uint16_t x360 = 11U;

    t77 = ((x357+x358)^(x359%x360));

    if (t77 != 1716498324455050690LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x362 = 46U;
	uint32_t t78 = 894U;

    t78 = ((x361+x362)^(x363%x364));

    if (t78 != 72U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x365 = INT64_MIN;
	uint16_t x366 = UINT16_MAX;
	int16_t x367 = -1;
	volatile int8_t x368 = -1;
	volatile int64_t t79 = 472178LL;

    t79 = ((x365+x366)^(x367%x368));

    if (t79 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x369 = -3589841;
	static int16_t x370 = INT16_MIN;
	int32_t x371 = INT32_MAX;
	static int32_t t80 = 0;

    t80 = ((x369+x370)^(x371%x372));

    if (t80 != -2143861040) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x373 = UINT64_MAX;
	volatile int64_t x376 = 150464899859612LL;
	volatile uint64_t t81 = 15399312LLU;

    t81 = ((x373+x374)^(x375%x376));

    if (t81 != 4016LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x378 = 11U;
	volatile int16_t x379 = INT16_MAX;
	volatile int64_t x380 = -1LL;
	int64_t t82 = 42422755983429LL;

    t82 = ((x377+x378)^(x379%x380));

    if (t82 != 4294967262LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x381 = INT32_MIN;
	int64_t x382 = INT64_MAX;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = -942579589824LL;
	uint64_t t83 = 413016LLU;

    t83 = ((x381+x382)^(x383%x384));

    if (t83 != 9223371092127702336LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x385 = 29U;
	int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	uint32_t x388 = 380U;

    t84 = ((x385+x386)^(x387%x388));

    if (t84 != 4294934750U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x393 = -1;
	uint64_t x394 = UINT64_MAX;
	volatile int8_t x395 = INT8_MAX;

    t85 = ((x393+x394)^(x395%x396));

    if (t85 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x397 = 0U;
	uint8_t x398 = 6U;
	int64_t x399 = 12541392430540405LL;
	volatile int64_t t86 = -81952606100892631LL;

    t86 = ((x397+x398)^(x399%x400));

    if (t86 != 7LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x401 = -11633;
	volatile int16_t x402 = INT16_MIN;
	static int64_t x403 = INT64_MAX;
	int64_t t87 = -507253336512LL;

    t87 = ((x401+x402)^(x403%x404));

    if (t87 != -55088LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x405 = 44484505490LL;
	int8_t x406 = INT8_MIN;
	int8_t x407 = INT8_MIN;
	uint16_t x408 = 11872U;
	int64_t t88 = -297LL;

    t88 = ((x405+x406)^(x407%x408));

    if (t88 != -44484505454LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x410 = 27U;
	volatile uint8_t x411 = 108U;
	uint64_t t89 = 442696LLU;

    t89 = ((x409+x410)^(x411%x412));

    if (t89 != 18446744071562068087LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x413 = INT8_MAX;
	int32_t x414 = INT32_MIN;
	int64_t x415 = -1LL;
	volatile int64_t x416 = -1LL;
	volatile int64_t t90 = -12193354026527500LL;

    t90 = ((x413+x414)^(x415%x416));

    if (t90 != -2147483521LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x417 = 2U;
	int8_t x418 = -1;
	uint16_t x419 = UINT16_MAX;
	uint64_t x420 = 333863649899941LLU;
	volatile uint64_t t91 = 32620394LLU;

    t91 = ((x417+x418)^(x419%x420));

    if (t91 != 65534LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x421 = 14474U;
	int8_t x422 = INT8_MIN;
	uint16_t x423 = 1U;
	static int8_t x424 = INT8_MAX;
	int32_t t92 = 1;

    t92 = ((x421+x422)^(x423%x424));

    if (t92 != 14347) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x425 = 7520U;
	volatile int8_t x426 = -1;
	int32_t x427 = INT32_MAX;

    t93 = ((x425+x426)^(x427%x428));

    if (t93 != 7276LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x429 = -1;
	int16_t x430 = INT16_MIN;
	uint32_t x431 = 143600991U;
	int64_t x432 = -1LL;
	volatile int64_t t94 = 1550LL;

    t94 = ((x429+x430)^(x431%x432));

    if (t94 != -32769LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x433 = INT8_MIN;
	static uint32_t x434 = 425247U;
	uint64_t x435 = UINT64_MAX;
	static volatile uint32_t x436 = 31217761U;
	static volatile uint64_t t95 = 741015651428624555LLU;

    t95 = ((x433+x434)^(x435%x436));

    if (t95 != 3079694LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x437 = INT16_MAX;
	volatile int8_t x438 = INT8_MIN;
	uint16_t x439 = 3363U;
	int16_t x440 = INT16_MIN;
	int32_t t96 = -59;

    t96 = ((x437+x438)^(x439%x440));

    if (t96 != 29276) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x441 = INT64_MIN;
	static int16_t x442 = INT16_MAX;
	int8_t x443 = -1;
	int16_t x444 = 286;
	int64_t t97 = 3535LL;

    t97 = ((x441+x442)^(x443%x444));

    if (t97 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x445 = INT32_MAX;
	static int32_t x447 = INT32_MIN;
	int8_t x448 = -1;
	static volatile int32_t t98 = -2;

    t98 = ((x445+x446)^(x447%x448));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x449 = INT8_MIN;
	int64_t x450 = INT64_MAX;
	int32_t x451 = INT32_MIN;
	int32_t x452 = INT32_MIN;
	volatile int64_t t99 = -118740891114021LL;

    t99 = ((x449+x450)^(x451%x452));

    if (t99 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x455 = INT64_MIN;
	static int64_t x456 = INT64_MAX;
	int64_t t100 = 86420757LL;

    t100 = ((x453+x454)^(x455%x456));

    if (t100 != 32768LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x457 = INT64_MAX;
	int64_t x458 = INT64_MIN;
	int32_t x460 = INT32_MAX;
	int64_t t101 = 126LL;

    t101 = ((x457+x458)^(x459%x460));

    if (t101 != -416088LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x462 = 179LL;
	int32_t x464 = INT32_MIN;
	static volatile int64_t t102 = 15816050375LL;

    t102 = ((x461+x462)^(x463%x464));

    if (t102 != -32614LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x465 = -1;
	uint32_t x466 = UINT32_MAX;
	uint8_t x467 = 90U;
	int16_t x468 = INT16_MAX;
	uint32_t t103 = 1439U;

    t103 = ((x465+x466)^(x467%x468));

    if (t103 != 4294967204U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x473 = INT32_MIN;
	volatile uint8_t x474 = UINT8_MAX;
	int64_t x475 = 17952836LL;

    t104 = ((x473+x474)^(x475%x476));

    if (t104 != -2147483461LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x477 = 5U;
	uint8_t x478 = UINT8_MAX;
	uint16_t x479 = 3453U;
	int16_t x480 = -1842;

    t105 = ((x477+x478)^(x479%x480));

    if (t105 != 1871) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x482 = INT64_MIN;
	int8_t x484 = -1;
	volatile int64_t t106 = 1272808176481LL;

    t106 = ((x481+x482)^(x483%x484));

    if (t106 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x486 = 178596LLU;
	int64_t x487 = 506985LL;
	int16_t x488 = -764;
	volatile uint64_t t107 = 22371675326LLU;

    t107 = ((x485+x486)^(x487%x488));

    if (t107 != 177265LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x491 = -724117124000LL;
	uint16_t x492 = UINT16_MAX;
	volatile int64_t t108 = -1288963318918697524LL;

    t108 = ((x489+x490)^(x491%x492));

    if (t108 != 2472LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x497 = -548810821;
	int64_t x498 = INT64_MAX;
	volatile int8_t x499 = -1;

    t109 = ((x497+x498)^(x499%x500));

    if (t109 != -9223372036305964987LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x502 = 6U;
	int16_t x503 = -1;
	uint32_t x504 = 1584U;
	volatile int64_t t110 = 1716LL;

    t110 = ((x501+x502)^(x503%x504));

    if (t110 != 394LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x505 = INT8_MIN;
	int8_t x506 = INT8_MIN;
	uint8_t x507 = UINT8_MAX;
	uint8_t x508 = 100U;
	int32_t t111 = 2136;

    t111 = ((x505+x506)^(x507%x508));

    if (t111 != -201) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x510 = 64;
	volatile uint64_t x511 = 28LLU;
	volatile int32_t x512 = INT32_MAX;
	uint64_t t112 = 3301112996LLU;

    t112 = ((x509+x510)^(x511%x512));

    if (t112 != 35LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x513 = 2180U;
	volatile int16_t x514 = INT16_MIN;
	int64_t x516 = 16121LL;
	volatile int64_t t113 = 3272102LL;

    t113 = ((x513+x514)^(x515%x516));

    if (t113 != 30587LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int64_t x517 = -1LL;
	static int16_t x518 = -8;
	int32_t x520 = INT32_MIN;
	int64_t t114 = 77140631849LL;

    t114 = ((x517+x518)^(x519%x520));

    if (t114 != -9LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x521 = 237U;
	volatile uint8_t x522 = 9U;
	static uint8_t x523 = 22U;
	static uint32_t t115 = 106489642U;

    t115 = ((x521+x522)^(x523%x524));

    if (t115 != 244U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x525 = 30301LLU;
	int16_t x526 = -1;
	int32_t x527 = INT32_MIN;
	int32_t x528 = INT32_MIN;
	static uint64_t t116 = 544963503463579273LLU;

    t116 = ((x525+x526)^(x527%x528));

    if (t116 != 30300LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x529 = UINT8_MAX;
	static uint16_t x531 = 3469U;

    t117 = ((x529+x530)^(x531%x532));

    if (t117 != 286) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x534 = -2;
	int8_t x536 = INT8_MIN;
	int32_t t118 = 0;

    t118 = ((x533+x534)^(x535%x536));

    if (t118 != -32770) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x542 = -1LL;
	uint16_t x543 = UINT16_MAX;
	int32_t x544 = -1;
	int64_t t119 = 4862838LL;

    t119 = ((x541+x542)^(x543%x544));

    if (t119 != -2LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x545 = -1LL;
	int16_t x547 = INT16_MAX;
	int64_t x548 = INT64_MIN;

    t120 = ((x545+x546)^(x547%x548));

    if (t120 != 32513LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x549 = 3U;
	int8_t x550 = INT8_MAX;
	static volatile uint8_t x551 = 31U;
	int32_t x552 = INT32_MAX;
	volatile int32_t t121 = 417;

    t121 = ((x549+x550)^(x551%x552));

    if (t121 != 157) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x557 = 7280U;
	int32_t x558 = INT32_MAX;
	int16_t x560 = 3791;

    t122 = ((x557+x558)^(x559%x560));

    if (t122 != 2147489813U) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x561 = -1;
	int16_t x562 = 69;
	static volatile int32_t x563 = INT32_MIN;
	static int32_t t123 = 103;

    t123 = ((x561+x562)^(x563%x564));

    if (t123 != 68) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x566 = 0;
	static int64_t x568 = INT64_MIN;
	int64_t t124 = 4423485LL;

    t124 = ((x565+x566)^(x567%x568));

    if (t124 != 14537748LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x570 = 1U;
	int32_t x571 = INT32_MAX;
	uint8_t x572 = 1U;
	static volatile int32_t t125 = 1;

    t125 = ((x569+x570)^(x571%x572));

    if (t125 != 22) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x573 = -1;
	uint16_t x574 = 84U;
	int8_t x575 = 1;
	uint32_t x576 = 7907U;
	static uint32_t t126 = 21U;

    t126 = ((x573+x574)^(x575%x576));

    if (t126 != 82U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x577 = INT16_MAX;
	int32_t x578 = 13935790;
	int32_t x579 = -1;
	volatile int64_t x580 = INT64_MIN;
	volatile int64_t t127 = -282LL;

    t127 = ((x577+x578)^(x579%x580));

    if (t127 != -13968558LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x581 = 37475;
	int64_t x582 = INT64_MIN;
	int16_t x584 = -1;
	int64_t t128 = 35137156259632187LL;

    t128 = ((x581+x582)^(x583%x584));

    if (t128 != -9223372036854738333LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x586 = -1;
	int64_t x587 = INT64_MIN;
	volatile int8_t x588 = INT8_MIN;
	static volatile int64_t t129 = -4283277782LL;

    t129 = ((x585+x586)^(x587%x588));

    if (t129 != 126LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x589 = INT8_MAX;
	uint32_t x590 = 3U;
	static uint16_t x591 = 11052U;
	uint16_t x592 = UINT16_MAX;

    t130 = ((x589+x590)^(x591%x592));

    if (t130 != 11182U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x593 = INT8_MAX;
	int16_t x595 = INT16_MAX;
	uint16_t x596 = UINT16_MAX;
	static uint64_t t131 = 126231980376364LLU;

    t131 = ((x593+x594)^(x595%x596));

    if (t131 != 30926LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x597 = INT32_MIN;
	static int64_t x598 = INT64_MAX;
	volatile int8_t x599 = -4;
	int32_t x600 = -9344659;
	int64_t t132 = 7084009146LL;

    t132 = ((x597+x598)^(x599%x600));

    if (t132 != -9223372034707292157LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x601 = 55U;
	uint64_t x602 = 111387LLU;
	int32_t x603 = -1;
	int32_t x604 = INT32_MAX;

    t133 = ((x601+x602)^(x603%x604));

    if (t133 != 18446744073709440173LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x609 = 10LLU;
	int64_t x610 = INT64_MAX;
	int64_t x611 = INT64_MIN;
	uint64_t t134 = 962770632LLU;

    t134 = ((x609+x610)^(x611%x612));

    if (t134 != 9223372036854775793LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x614 = 14538210U;
	static uint64_t x615 = UINT64_MAX;
	volatile uint64_t t135 = 29977621157LLU;

    t135 = ((x613+x614)^(x615%x616));

    if (t135 != 14538231LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x617 = 17338;
	uint16_t x619 = UINT16_MAX;
	volatile int64_t t136 = 1684537255LL;

    t136 = ((x617+x618)^(x619%x620));

    if (t136 != 48070LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x621 = INT64_MIN;
	static uint32_t x622 = 1U;
	int8_t x623 = 5;
	uint64_t x624 = 430861973591094539LLU;
	volatile uint64_t t137 = 626605259632101753LLU;

    t137 = ((x621+x622)^(x623%x624));

    if (t137 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x629 = UINT64_MAX;
	volatile int8_t x630 = INT8_MAX;
	static int64_t x632 = -2219105419910LL;
	uint64_t t138 = 5912650177LLU;

    t138 = ((x629+x630)^(x631%x632));

    if (t138 != 127LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x633 = 1U;
	int16_t x635 = -5966;
	uint8_t x636 = UINT8_MAX;
	volatile int32_t t139 = -7365;

    t139 = ((x633+x634)^(x635%x636));

    if (t139 != 2147483546) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x637 = UINT64_MAX;
	int16_t x638 = 1;
	volatile int16_t x640 = -1489;
	volatile uint64_t t140 = 74481316129LLU;

    t140 = ((x637+x638)^(x639%x640));

    if (t140 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x645 = -1;
	int16_t x646 = INT16_MAX;
	int64_t x647 = INT64_MIN;
	int32_t x648 = INT32_MAX;
	int64_t t141 = 2977611126998731LL;

    t141 = ((x645+x646)^(x647%x648));

    if (t141 != -32768LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x649 = 227U;
	int16_t x650 = 714;
	int8_t x651 = INT8_MAX;
	volatile int32_t t142 = 1;

    t142 = ((x649+x650)^(x651%x652));

    if (t142 != 978) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x653 = -564544;
	static volatile int8_t x654 = 8;
	static int64_t x655 = -1LL;
	volatile uint16_t x656 = 199U;

    t143 = ((x653+x654)^(x655%x656));

    if (t143 != 564535LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x657 = -1LL;
	int32_t x658 = INT32_MIN;
	static uint16_t x659 = 3U;
	int64_t t144 = -7235420LL;

    t144 = ((x657+x658)^(x659%x660));

    if (t144 != -2147483652LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x661 = INT8_MIN;
	volatile int32_t x662 = -1;
	int16_t x663 = INT16_MAX;
	int16_t x664 = INT16_MIN;
	volatile int32_t t145 = -12281824;

    t145 = ((x661+x662)^(x663%x664));

    if (t145 != -32640) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x666 = 3U;
	static volatile int16_t x668 = INT16_MIN;
	int64_t t146 = -248536991990572LL;

    t146 = ((x665+x666)^(x667%x668));

    if (t146 != 2LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x669 = INT32_MAX;
	int32_t x670 = INT32_MIN;
	int64_t x671 = -1LL;
	volatile int32_t x672 = -1;
	volatile int64_t t147 = 364LL;

    t147 = ((x669+x670)^(x671%x672));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x673 = -1LL;
	volatile int32_t x674 = 77692;
	uint32_t x675 = UINT32_MAX;
	volatile int16_t x676 = INT16_MIN;
	volatile int64_t t148 = 9670402393266LL;

    t148 = ((x673+x674)^(x675%x676));

    if (t148 != 86148LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x677 = 14629U;
	static int64_t x678 = -1LL;
	int64_t x679 = INT64_MAX;
	uint8_t x680 = UINT8_MAX;
	int64_t t149 = -118714718008LL;

    t149 = ((x677+x678)^(x679%x680));

    if (t149 != 14683LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x681 = 57U;
	static uint8_t x682 = UINT8_MAX;
	volatile int16_t x683 = INT16_MIN;
	int16_t x684 = -13;
	static volatile int32_t t150 = 236;

    t150 = ((x681+x682)^(x683%x684));

    if (t150 != -320) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x685 = 0;
	volatile int64_t x686 = INT64_MIN;
	int32_t x687 = 5;
	uint64_t x688 = 13248095LLU;

    t151 = ((x685+x686)^(x687%x688));

    if (t151 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x689 = 24155474LLU;
	static int8_t x691 = INT8_MIN;
	int8_t x692 = INT8_MIN;
	uint64_t t152 = 95555LLU;

    t152 = ((x689+x690)^(x691%x692));

    if (t152 != 24154941LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x697 = INT8_MIN;
	int8_t x698 = INT8_MAX;

    t153 = ((x697+x698)^(x699%x700));

    if (t153 != 4291043039U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x702 = 10U;
	int8_t x703 = 52;

    t154 = ((x701+x702)^(x703%x704));

    if (t154 != 842346U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x707 = 1;
	int64_t t155 = 2865LL;

    t155 = ((x705+x706)^(x707%x708));

    if (t155 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x711 = 392637115U;
	int64_t x712 = 34278754156LL;
	volatile int64_t t156 = -41409118806LL;

    t156 = ((x709+x710)^(x711%x712));

    if (t156 != 354412665LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x713 = INT32_MAX;
	int64_t x714 = INT64_MIN;
	volatile int64_t x715 = 3LL;
	static int16_t x716 = 1331;
	volatile int64_t t157 = 2568130907619590851LL;

    t157 = ((x713+x714)^(x715%x716));

    if (t157 != -9223372034707292164LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x717 = -1;
	volatile int16_t x718 = -1;
	static uint16_t x719 = UINT16_MAX;
	int32_t x720 = -1;
	int32_t t158 = 496;

    t158 = ((x717+x718)^(x719%x720));

    if (t158 != -2) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x721 = INT32_MIN;
	uint64_t x722 = 1326494265230LLU;
	volatile int16_t x723 = -1;
	volatile uint64_t t159 = 11016276808887352LLU;

    t159 = ((x721+x722)^(x723%x724));

    if (t159 != 18446742749362770033LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x726 = 12U;
	static volatile uint32_t x727 = 5722909U;
	int8_t x728 = 28;

    t160 = ((x725+x726)^(x727%x728));

    if (t160 != 26U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x729 = INT16_MAX;
	volatile uint8_t x730 = 19U;
	uint8_t x731 = 5U;
	uint64_t x732 = UINT64_MAX;
	volatile uint64_t t161 = 1LLU;

    t161 = ((x729+x730)^(x731%x732));

    if (t161 != 32791LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x736 = 1U;
	int32_t t162 = 2156;

    t162 = ((x733+x734)^(x735%x736));

    if (t162 != -2147418113) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x738 = 1773616987LL;
	int32_t x739 = INT32_MIN;
	static volatile int16_t x740 = INT16_MIN;
	int64_t t163 = 14982605968985LL;

    t163 = ((x737+x738)^(x739%x740));

    if (t163 != 1773584219LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x741 = 0U;
	int16_t x742 = 17;
	int8_t x743 = INT8_MIN;
	static volatile int8_t x744 = INT8_MIN;

    t164 = ((x741+x742)^(x743%x744));

    if (t164 != 17) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x745 = INT32_MAX;
	int64_t x746 = -327182975LL;
	int32_t x747 = 3490;
	int8_t x748 = -1;
	volatile int64_t t165 = -19512288608LL;

    t165 = ((x745+x746)^(x747%x748));

    if (t165 != 1820300672LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x749 = -25;
	int64_t x750 = INT64_MAX;
	volatile int32_t x752 = -336;
	volatile int64_t t166 = -1938268LL;

    t166 = ((x749+x750)^(x751%x752));

    if (t166 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x753 = INT64_MAX;
	uint32_t x754 = 0U;
	uint64_t x756 = UINT64_MAX;

    t167 = ((x753+x754)^(x755%x756));

    if (t167 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x761 = UINT64_MAX;
	int8_t x762 = INT8_MIN;
	int32_t x763 = -155292;
	volatile int32_t x764 = INT32_MAX;
	uint64_t t168 = 14896366354LLU;

    t168 = ((x761+x762)^(x763%x764));

    if (t168 != 155163LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x765 = INT32_MAX;
	int8_t x766 = 0;
	uint64_t t169 = 843LLU;

    t169 = ((x765+x766)^(x767%x768));

    if (t169 != 2147483632LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x769 = 140;
	int64_t x770 = -1LL;
	uint64_t x771 = UINT64_MAX;
	uint64_t x772 = 65670133LLU;
	volatile uint64_t t170 = 2973973378LLU;

    t170 = ((x769+x770)^(x771%x772));

    if (t170 != 35179923LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x773 = 0U;
	int8_t x774 = -1;
	volatile uint16_t x775 = UINT16_MAX;
	int64_t x776 = INT64_MIN;
	volatile int64_t t171 = 12179LL;

    t171 = ((x773+x774)^(x775%x776));

    if (t171 != -65536LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x777 = 109690958389956205LL;
	int8_t x778 = INT8_MAX;
	int16_t x779 = INT16_MIN;
	uint32_t x780 = 200U;
	volatile int64_t t172 = 0LL;

    t172 = ((x777+x778)^(x779%x780));

    if (t172 != 109690958389956204LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x781 = 342U;
	static volatile uint16_t x782 = UINT16_MAX;
	uint64_t t173 = 994744892510263LLU;

    t173 = ((x781+x782)^(x783%x784));

    if (t173 != 67046LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	int32_t x786 = -1;
	int32_t x788 = -192;
	volatile uint64_t t174 = 44914904LLU;

    t174 = ((x785+x786)^(x787%x788));

    if (t174 != 5LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x794 = 13124U;
	uint16_t x795 = UINT16_MAX;
	int32_t x796 = 1;
	uint32_t t175 = 1249U;

    t175 = ((x793+x794)^(x795%x796));

    if (t175 != 13123U) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint64_t x797 = 20852452294177LLU;
	volatile int8_t x799 = INT8_MIN;
	int32_t x800 = INT32_MIN;
	static volatile uint64_t t176 = 831233993LLU;

    t176 = ((x797+x798)^(x799%x800));

    if (t176 != 18446723221257257370LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x801 = -50;
	static int8_t x802 = INT8_MIN;
	static int16_t x803 = INT16_MIN;
	int64_t x804 = -1LL;

    t177 = ((x801+x802)^(x803%x804));

    if (t177 != -178LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x806 = -1;
	int64_t x808 = INT64_MIN;
	static int64_t t178 = 2583906220005511052LL;

    t178 = ((x805+x806)^(x807%x808));

    if (t178 != 65485LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x809 = -1LL;
	int16_t x810 = 0;
	volatile uint8_t x811 = 0U;
	static uint32_t x812 = UINT32_MAX;
	int64_t t179 = -1521601LL;

    t179 = ((x809+x810)^(x811%x812));

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x813 = UINT64_MAX;
	int64_t x814 = -1LL;
	int16_t x815 = -1;
	int8_t x816 = -15;
	volatile uint64_t t180 = 4042664799603LLU;

    t180 = ((x813+x814)^(x815%x816));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x819 = INT8_MIN;

    t181 = ((x817+x818)^(x819%x820));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x823 = 0;
	int16_t x824 = 7;
	int32_t t182 = -602172;

    t182 = ((x821+x822)^(x823%x824));

    if (t182 != -129) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x829 = 789084763LL;
	int64_t x832 = INT64_MIN;

    t183 = ((x829+x830)^(x831%x832));

    if (t183 != 1358428763LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x833 = 13214153LLU;
	static volatile int32_t x834 = INT32_MAX;
	volatile int8_t x836 = INT8_MIN;
	volatile uint64_t t184 = 376696LLU;

    t184 = ((x833+x834)^(x835%x836));

    if (t184 != 2160697805LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x837 = 69;
	uint16_t x839 = UINT16_MAX;
	uint32_t t185 = 23562040U;

    t185 = ((x837+x838)^(x839%x840));

    if (t185 != 24U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x841 = 125732U;
	uint16_t x842 = 0U;
	volatile uint16_t x843 = UINT16_MAX;
	static int16_t x844 = INT16_MIN;
	static uint32_t t186 = 552289U;

    t186 = ((x841+x842)^(x843%x844));

    if (t186 != 103643U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x845 = 649U;
	int32_t x846 = -1;
	volatile uint8_t x847 = 4U;
	uint64_t x848 = UINT64_MAX;

    t187 = ((x845+x846)^(x847%x848));

    if (t187 != 652LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x849 = 7U;
	volatile uint8_t x850 = 18U;
	uint8_t x851 = UINT8_MAX;
	uint32_t x852 = UINT32_MAX;
	volatile uint32_t t188 = 1297618274U;

    t188 = ((x849+x850)^(x851%x852));

    if (t188 != 230U) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x853 = 10231368857807LLU;
	int16_t x854 = INT16_MIN;
	static volatile int64_t x855 = INT64_MIN;

    t189 = ((x853+x854)^(x855%x856));

    if (t189 != 18446733842340726583LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x857 = INT8_MIN;
	uint16_t x858 = UINT16_MAX;
	uint16_t x859 = UINT16_MAX;
	volatile uint64_t x860 = 6593515LLU;
	uint64_t t190 = 111153LLU;

    t190 = ((x857+x858)^(x859%x860));

    if (t190 != 128LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x861 = UINT64_MAX;
	volatile int8_t x862 = -1;
	static uint8_t x864 = 14U;
	uint64_t t191 = UINT64_MAX;

    t191 = ((x861+x862)^(x863%x864));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x865 = -1LL;
	int8_t x866 = INT8_MIN;
	static int8_t x867 = INT8_MIN;
	int16_t x868 = INT16_MIN;
	int64_t t192 = -20152371655LL;

    t192 = ((x865+x866)^(x867%x868));

    if (t192 != 255LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x869 = 176LLU;
	volatile int8_t x871 = -1;
	int64_t x872 = -25155LL;
	static volatile uint64_t t193 = 131375869LLU;

    t193 = ((x869+x870)^(x871%x872));

    if (t193 != 18446744073709551440LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x874 = 13U;
	int8_t x875 = INT8_MIN;
	int8_t x876 = -1;
	volatile uint32_t t194 = 350972U;

    t194 = ((x873+x874)^(x875%x876));

    if (t194 != 12U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x877 = UINT64_MAX;
	static int32_t x879 = INT32_MAX;
	volatile uint64_t t195 = 6413LLU;

    t195 = ((x877+x878)^(x879%x880));

    if (t195 != 18446744073650699028LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x883 = INT16_MIN;
	uint32_t x884 = 16698157U;
	uint64_t t196 = 6618LLU;

    t196 = ((x881+x882)^(x883%x884));

    if (t196 != 18446744073706076204LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x887 = INT32_MAX;
	uint32_t x888 = 10U;
	volatile uint32_t t197 = 52U;

    t197 = ((x885+x886)^(x887%x888));

    if (t197 != 4294967177U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x889 = INT16_MIN;
	int32_t x891 = 3207;
	static uint64_t x892 = 34549676LLU;
	uint64_t t198 = 61528827LLU;

    t198 = ((x889+x890)^(x891%x892));

    if (t198 != 18446744073700172454LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x893 = UINT8_MAX;
	int64_t x895 = -56895301LL;
	int64_t t199 = 667233672541252LL;

    t199 = ((x893+x894)^(x895%x896));

    if (t199 != -187LL) { NG(); } else { ; }
	
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

