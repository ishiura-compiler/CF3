
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

int32_t x2 = -1;
uint8_t x6 = 50U;
static int32_t x10 = INT32_MIN;
volatile int64_t t2 = 3506788070443LL;
static int8_t x19 = INT8_MIN;
uint16_t x20 = UINT16_MAX;
static volatile int16_t x21 = INT16_MIN;
volatile int64_t t7 = 1157001908204LL;
int16_t x41 = INT16_MAX;
uint64_t t13 = 112LLU;
volatile uint32_t x66 = UINT32_MAX;
volatile int32_t t15 = -940138833;
int32_t x77 = INT32_MAX;
uint32_t x79 = 9621U;
int64_t x80 = -1LL;
uint16_t x81 = 0U;
uint32_t t17 = 56653U;
int8_t x95 = 1;
volatile int64_t t20 = 20860543157LL;
uint32_t x103 = 4237163U;
volatile int64_t t21 = -96950134117829LL;
int16_t x105 = INT16_MAX;
uint64_t x107 = 318309775LLU;
int16_t x108 = INT16_MIN;
static int8_t x118 = INT8_MIN;
uint64_t x120 = 233LLU;
static uint32_t x121 = UINT32_MAX;
uint32_t x127 = 3682U;
volatile uint64_t t27 = 1340184672179LLU;
volatile int32_t x141 = INT32_MIN;
int32_t t31 = -4249;
int64_t x151 = -1LL;
int64_t t32 = 1385LL;
uint64_t x163 = 11786249598LLU;
volatile int64_t x165 = INT64_MIN;
int32_t x170 = INT32_MAX;
volatile int64_t x174 = INT64_MIN;
uint16_t x175 = 6U;
volatile int32_t t38 = -1;
uint32_t x181 = 1715025U;
uint16_t x189 = 136U;
static int8_t x198 = INT8_MIN;
int16_t x201 = -12672;
uint64_t x203 = 4898185LLU;
int64_t t46 = 40LL;
int32_t x219 = -108413285;
int16_t x224 = 501;
int16_t x227 = -4091;
volatile uint64_t t50 = 63532119LLU;
volatile uint32_t t53 = 16706382U;
int32_t x244 = -1;
uint64_t x249 = UINT64_MAX;
static uint16_t x256 = 3U;
uint64_t x270 = 103874237248036LLU;
volatile uint32_t x277 = 363U;
volatile uint16_t x290 = UINT16_MAX;
uint64_t t65 = 54064047149LLU;
uint32_t x294 = 6656863U;
uint32_t x301 = 80625U;
volatile uint32_t x308 = 382739493U;
int32_t t69 = -6623;
int32_t x316 = 11;
volatile uint64_t t70 = 345272LLU;
int32_t x322 = INT32_MIN;
int8_t x323 = -1;
int64_t x329 = -1LL;
int64_t x330 = INT64_MIN;
int16_t x344 = -7;
uint8_t x355 = 111U;
int64_t x360 = INT64_MIN;
uint64_t t83 = 327632442577299284LLU;
volatile int8_t x372 = INT8_MIN;
uint64_t x373 = 4LLU;
uint32_t x384 = UINT32_MAX;
static uint8_t x393 = UINT8_MAX;
int16_t x394 = INT16_MIN;
uint64_t x395 = 254548680LLU;
int64_t t89 = 1701425985079239LL;
volatile uint64_t t90 = 1337625410LLU;
static int64_t t93 = -51099720859LL;
int8_t x428 = INT8_MIN;
volatile int64_t t94 = -865036562921LL;
uint64_t t98 = 7965LLU;
volatile int16_t x455 = 0;
uint16_t x458 = 0U;
volatile int16_t x459 = -1;
int8_t x462 = INT8_MIN;
int8_t x464 = INT8_MIN;
uint8_t x477 = UINT8_MAX;
static int8_t x482 = -1;
uint64_t t105 = 3LLU;
int16_t x489 = INT16_MIN;
uint8_t x490 = UINT8_MAX;
int8_t x497 = INT8_MAX;
uint32_t x499 = 6U;
volatile int64_t t109 = 117223896424043LL;
int32_t x503 = INT32_MAX;
int32_t t111 = -309118;
int8_t x510 = 0;
int32_t t113 = -325611;
int8_t x534 = -1;
int16_t x540 = -35;
volatile int64_t t118 = 887990741861182665LL;
int8_t x545 = INT8_MAX;
uint32_t x547 = 696288U;
int32_t x554 = -1;
volatile int32_t x555 = -108647;
volatile int16_t x560 = INT16_MAX;
uint64_t x562 = UINT64_MAX;
int64_t x565 = INT64_MIN;
int8_t x568 = INT8_MIN;
int16_t x574 = -1;
static uint16_t x575 = 3U;
int32_t x584 = -70446;
volatile int32_t t127 = -4;
int16_t x585 = INT16_MIN;
int16_t x594 = -1;
int32_t x597 = INT32_MAX;
uint64_t t130 = 7304994261195232556LLU;
volatile uint32_t x610 = 123347370U;
int32_t x623 = 100650;
int16_t x626 = INT16_MIN;
int8_t x630 = INT8_MIN;
int32_t x631 = 8731535;
int64_t t136 = -7872LL;
int64_t t137 = -225851198410LL;
int64_t x638 = -1LL;
volatile int64_t t141 = -34107726696296371LL;
uint8_t x654 = 91U;
uint64_t x656 = 33967LLU;
uint64_t x661 = 6LLU;
int16_t x672 = INT16_MIN;
volatile int32_t t144 = 13500806;
uint64_t x674 = UINT64_MAX;
uint32_t x676 = UINT32_MAX;
uint32_t x688 = 43U;
uint32_t t149 = 269548040U;
static uint64_t t152 = 185331502LLU;
int64_t x718 = 9LL;
int16_t x720 = INT16_MIN;
int8_t x722 = INT8_MAX;
uint64_t t155 = 6355143080LLU;
int8_t x730 = -1;
volatile int32_t t156 = 7;
static uint64_t x735 = 11939640863LLU;
int32_t x739 = -10297688;
volatile int8_t x744 = 2;
volatile uint8_t x757 = 127U;
volatile int32_t t162 = 1;
volatile int16_t x771 = INT16_MIN;
int32_t t164 = 22;
volatile int16_t x775 = INT16_MAX;
volatile int32_t x777 = INT32_MIN;
int16_t x780 = 1;
uint16_t x782 = 6634U;
uint16_t x784 = UINT16_MAX;
int64_t x789 = 36LL;
uint64_t x790 = UINT64_MAX;
int16_t x791 = INT16_MIN;
int64_t x801 = INT64_MIN;
uint64_t x810 = 34339229847LLU;
int32_t x812 = -1;
volatile uint64_t t172 = 7978747096365LLU;
int64_t x813 = -454577516LL;
uint64_t x815 = 1788858LLU;
uint64_t t173 = 19296009787LLU;
int16_t x817 = 1655;
int64_t x820 = -1LL;
uint8_t x825 = 15U;
int8_t x826 = -1;
int64_t t176 = 89429LL;
volatile uint64_t x839 = UINT64_MAX;
int32_t x868 = -13;
uint16_t x870 = UINT16_MAX;
int16_t x873 = INT16_MIN;
int16_t x876 = 16293;
int32_t x880 = 24500919;
uint16_t x888 = 921U;
static volatile int16_t x893 = 0;
uint8_t x894 = 12U;
int32_t x900 = -1;
static int16_t x907 = 0;
uint8_t x908 = 7U;
int8_t x918 = INT8_MIN;
uint8_t x919 = UINT8_MAX;
static int8_t x923 = INT8_MIN;
static uint8_t x925 = 119U;
static uint8_t x928 = 38U;
int8_t x931 = -53;


void f0(void) {
    	uint8_t x1 = 1U;
	volatile int64_t x3 = -139080700556189797LL;
	int64_t x4 = -1LL;
	int64_t t0 = 13948432198493LL;

    t0 = (x1^(x2^(x3+x4)));

    if (t0 != 139080700556189796LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	static uint32_t x7 = 3265097U;
	static int64_t x8 = 0LL;
	uint64_t t1 = 3121214776620758434LLU;

    t1 = (x5^(x6^(x7+x8)));

    if (t1 != 18446744073706286468LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	volatile int32_t x11 = 622306959;
	int64_t x12 = INT64_MIN;

    t2 = (x9^(x10^(x11+x12)));

    if (t2 != -1525176689LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int32_t x14 = INT32_MIN;
	volatile int64_t x15 = -1LL;
	uint32_t x16 = 1193505958U;
	int64_t t3 = -7717844877241LL;

    t3 = (x13^(x14^(x15+x16)));

    if (t3 != 953977690LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -1LL;
	volatile uint32_t x18 = 6U;
	static int64_t t4 = 8639628383LL;

    t4 = (x17^(x18^(x19+x20)));

    if (t4 != -65402LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MAX;
	volatile int8_t x23 = 1;
	static int16_t x24 = INT16_MIN;
	int32_t t5 = 1;

    t5 = (x21^(x22^(x23+x24)));

    if (t5 != 126) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MAX;
	uint16_t x27 = 1821U;
	volatile int64_t x28 = INT64_MIN;
	static volatile int64_t t6 = 3665598608LL;

    t6 = (x25^(x26^(x27+x28)));

    if (t6 != -9223372034707323107LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -39882455401LL;
	int8_t x30 = -1;
	int16_t x31 = -628;
	uint8_t x32 = 46U;

    t7 = (x29^(x30^(x31+x32)));

    if (t7 != -39882455854LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = -1;
	int64_t x34 = 134704731LL;
	int32_t x35 = -236762;
	uint32_t x36 = UINT32_MAX;
	volatile int64_t t8 = 3363999462LL;

    t8 = (x33^(x34^(x35+x36)));

    if (t8 != -4160425343LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MIN;
	volatile int32_t x38 = -309;
	int16_t x39 = -1;
	int16_t x40 = INT16_MIN;
	static int32_t t9 = -1;

    t9 = (x37^(x38^(x39+x40)));

    if (t9 != -33100) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = -43353197688303LL;
	int8_t x43 = INT8_MAX;
	int8_t x44 = INT8_MIN;
	int64_t t10 = 1380402662LL;

    t10 = (x41^(x42^(x43+x44)));

    if (t10 != 43353197693457LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x49 = INT64_MAX;
	int16_t x50 = -1;
	int32_t x51 = 258;
	int16_t x52 = INT16_MIN;
	int64_t t11 = -38371558588LL;

    t11 = (x49^(x50^(x51+x52)));

    if (t11 != 9223372036854743298LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x57 = -1LL;
	int8_t x58 = INT8_MAX;
	int16_t x59 = INT16_MIN;
	uint8_t x60 = UINT8_MAX;
	static int64_t t12 = -29433787LL;

    t12 = (x57^(x58^(x59+x60)));

    if (t12 != 32639LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x61 = UINT64_MAX;
	int32_t x62 = -1;
	int8_t x63 = -63;
	int16_t x64 = INT16_MIN;

    t13 = (x61^(x62^(x63+x64)));

    if (t13 != 18446744073709518785LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = 3U;
	int32_t x67 = 5;
	volatile uint64_t x68 = 1727138459628LLU;
	static uint64_t t14 = 16064LLU;

    t14 = (x65^(x66^(x67+x68)));

    if (t14 != 1730310213645LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = -7;
	int8_t x70 = -1;
	int8_t x71 = INT8_MAX;
	int32_t x72 = INT32_MIN;

    t15 = (x69^(x70^(x71+x72)));

    if (t15 != -2147483527) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x78 = 187;
	int64_t t16 = -821986652489LL;

    t16 = (x77^(x78^(x79+x80)));

    if (t16 != 2147474128LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x82 = INT8_MIN;
	static int8_t x83 = INT8_MIN;
	uint32_t x84 = 1073U;

    t17 = (x81^(x82^(x83+x84)));

    if (t17 != 4294966321U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MIN;
	volatile int32_t x87 = -1;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t18 = 1404775;

    t18 = (x85^(x86^(x87+x88)));

    if (t18 != -2147450753) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x93 = UINT64_MAX;
	int16_t x94 = INT16_MIN;
	volatile uint16_t x96 = UINT16_MAX;
	uint64_t t19 = 140592LLU;

    t19 = (x93^(x94^(x95+x96)));

    if (t19 != 98303LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x97 = INT16_MAX;
	uint8_t x98 = 96U;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -1LL;

    t20 = (x97^(x98^(x99+x100)));

    if (t20 != -32544LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = -1;
	volatile int16_t x102 = -1;
	volatile int64_t x104 = -408354973LL;

    t21 = (x101^(x102^(x103+x104)));

    if (t21 != -404117810LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x106 = -7565;
	uint64_t t22 = 507886305140LLU;

    t22 = (x105^(x106^(x107+x108)));

    if (t22 != 18446744073391249411LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = -1;
	uint8_t x110 = 43U;
	static int32_t x111 = -50;
	int8_t x112 = -3;
	static int32_t t23 = -1499610;

    t23 = (x109^(x110^(x111+x112)));

    if (t23 != 31) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x113 = INT32_MAX;
	volatile int16_t x114 = 850;
	uint32_t x115 = 11U;
	int16_t x116 = -6929;
	static uint32_t t24 = 2077701U;

    t24 = (x113^(x114^(x115+x116)));

    if (t24 != 2147489879U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x117 = -1;
	int32_t x119 = INT32_MIN;
	volatile uint64_t t25 = 6673387414679LLU;

    t25 = (x117^(x118^(x119+x120)));

    if (t25 != 18446744071562068118LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x122 = INT64_MIN;
	int32_t x123 = INT32_MIN;
	int64_t x124 = -8632875LL;
	volatile int64_t t26 = -3LL;

    t26 = (x121^(x122^(x123+x124)));

    if (t26 != 9223372034715925034LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x125 = 5;
	uint64_t x126 = 2580679LLU;
	int8_t x128 = INT8_MAX;

    t27 = (x125^(x126^(x127+x128)));

    if (t27 != 2584099LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x133 = INT32_MIN;
	int32_t x134 = 16346324;
	volatile uint8_t x135 = 77U;
	static uint64_t x136 = 135646LLU;
	uint64_t t28 = 17582922217503986LLU;

    t28 = (x133^(x134^(x135+x136)));

    if (t28 != 18446744071578550015LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x137 = 2016LL;
	int16_t x138 = INT16_MIN;
	static uint64_t x139 = 652702502LLU;
	uint32_t x140 = 18155113U;
	volatile uint64_t t29 = 35915063633636466LLU;

    t29 = (x137^(x138^(x139+x140)));

    if (t29 != 18446744073038724719LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x142 = INT8_MIN;
	uint16_t x143 = 693U;
	int8_t x144 = INT8_MIN;
	static int32_t t30 = -1;

    t30 = (x141^(x142^(x143+x144)));

    if (t30 != 2147483061) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x145 = INT32_MIN;
	volatile int16_t x146 = INT16_MIN;
	int32_t x147 = -3;
	static uint8_t x148 = UINT8_MAX;

    t31 = (x145^(x146^(x147+x148)));

    if (t31 != 2147451132) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x149 = 1U;
	static volatile int16_t x150 = INT16_MIN;
	int8_t x152 = 14;

    t32 = (x149^(x150^(x151+x152)));

    if (t32 != -32756LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x153 = -1;
	volatile uint16_t x154 = 2U;
	static int16_t x155 = 1;
	int32_t x156 = -1;
	volatile int32_t t33 = 1531069;

    t33 = (x153^(x154^(x155+x156)));

    if (t33 != -3) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x161 = INT32_MAX;
	static int64_t x162 = INT64_MAX;
	int16_t x164 = -1;
	volatile uint64_t t34 = 22701167642279691LLU;

    t34 = (x161^(x162^(x163+x164)));

    if (t34 != 9223372025018705277LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x166 = INT32_MIN;
	volatile uint32_t x167 = 119260U;
	static uint32_t x168 = UINT32_MAX;
	static volatile int64_t t35 = -78865919LL;

    t35 = (x165^(x166^(x167+x168)));

    if (t35 != -9223372034707172901LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x169 = INT32_MIN;
	static int16_t x171 = INT16_MAX;
	static uint32_t x172 = 20488U;
	static uint32_t t36 = 1U;

    t36 = (x169^(x170^(x171+x172)));

    if (t36 != 4294914040U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x173 = 1119U;
	int16_t x176 = INT16_MIN;
	int64_t t37 = -1871662019884310LL;

    t37 = (x173^(x174^(x175+x176)));

    if (t37 != 9223372036854744153LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x177 = 1U;
	uint16_t x178 = 698U;
	uint8_t x179 = 84U;
	static int8_t x180 = 0;

    t38 = (x177^(x178^(x179+x180)));

    if (t38 != 751) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x182 = INT8_MIN;
	volatile int8_t x183 = 1;
	int8_t x184 = INT8_MIN;
	uint32_t t39 = 15559U;

    t39 = (x181^(x182^(x183+x184)));

    if (t39 != 1715024U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x185 = 5U;
	volatile int64_t x186 = 1826063900949LL;
	uint64_t x187 = UINT64_MAX;
	int8_t x188 = -28;
	volatile uint64_t t40 = 6714LLU;

    t40 = (x185^(x186^(x187+x188)));

    if (t40 != 18446742247645650675LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MAX;
	volatile uint64_t x192 = 990828826LLU;
	uint64_t t41 = 37046228575367817LLU;

    t41 = (x189^(x190^(x191+x192)));

    if (t41 != 18446744070571238929LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = -6110737978598LL;
	static int64_t x194 = -1662269911LL;
	uint16_t x195 = 1144U;
	int16_t x196 = INT16_MIN;
	volatile int64_t t42 = -40037527LL;

    t42 = (x193^(x194^(x195+x196)));

    if (t42 != -6110250112693LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x197 = INT8_MAX;
	static uint8_t x199 = 19U;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t43 = 401246312;

    t43 = (x197^(x198^(x199+x200)));

    if (t43 != -275) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x202 = INT16_MAX;
	uint64_t x204 = 1757340422109200LLU;
	volatile uint64_t t44 = 2601307338965LLU;

    t44 = (x201^(x202^(x203+x204)));

    if (t44 != 18444986733282526438LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x205 = 25U;
	static int32_t x206 = 0;
	volatile uint8_t x207 = 68U;
	int32_t x208 = -344157;
	static int32_t t45 = -284;

    t45 = (x205^(x206^(x207+x208)));

    if (t45 != -344066) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x209 = -5963340;
	int32_t x210 = -1;
	int64_t x211 = -3865LL;
	uint16_t x212 = 18951U;

    t46 = (x209^(x210^(x211+x212)));

    if (t46 != 5948581LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x213 = 167784395818322806LLU;
	int32_t x214 = INT32_MIN;
	static int64_t x215 = 297LL;
	volatile uint8_t x216 = 1U;
	volatile uint64_t t47 = 8780623495111101LLU;

    t47 = (x213^(x214^(x215+x216)));

    if (t47 != 18278959678951705180LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x217 = -3828069851330LL;
	uint32_t x218 = UINT32_MAX;
	static int16_t x220 = 0;
	int64_t t48 = -34064321LL;

    t48 = (x217^(x218^(x219+x220)));

    if (t48 != -3828104044966LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint64_t x221 = UINT64_MAX;
	uint32_t x222 = UINT32_MAX;
	static uint8_t x223 = 0U;
	volatile uint64_t t49 = 62476360068LLU;

    t49 = (x221^(x222^(x223+x224)));

    if (t49 != 18446744069414584821LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x225 = -47221LL;
	static uint8_t x226 = 121U;
	uint64_t x228 = 169193941195529702LLU;

    t50 = (x225^(x226^(x227+x228)));

    if (t50 != 18277550132514048537LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x229 = 27783075LLU;
	static int16_t x230 = -1;
	int8_t x231 = 19;
	static int32_t x232 = INT32_MIN;
	static volatile uint64_t t51 = 3453937356045743LLU;

    t51 = (x229^(x230^(x231+x232)));

    if (t51 != 2119700559LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x233 = 197;
	uint8_t x234 = UINT8_MAX;
	int32_t x235 = 1;
	static volatile int8_t x236 = -1;
	volatile int32_t t52 = 23490981;

    t52 = (x233^(x234^(x235+x236)));

    if (t52 != 58) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x237 = INT8_MIN;
	uint32_t x238 = 109121348U;
	static uint8_t x239 = 3U;
	int8_t x240 = INT8_MIN;

    t53 = (x237^(x238^(x239+x240)));

    if (t53 != 109121351U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x241 = 210367387222LL;
	static int64_t x242 = INT64_MAX;
	int32_t x243 = -701;
	volatile int64_t t54 = 131030430462267954LL;

    t54 = (x241^(x242^(x243+x244)));

    if (t54 != -9223371826487388949LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x245 = 0U;
	uint16_t x246 = 949U;
	uint8_t x247 = 1U;
	int64_t x248 = -135473965LL;
	static volatile int64_t t55 = -2057391584861LL;

    t55 = (x245^(x246^(x247+x248)));

    if (t55 != -135473311LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x250 = -1;
	int8_t x251 = -1;
	static int8_t x252 = INT8_MIN;
	volatile uint64_t t56 = 7032511536092095LLU;

    t56 = (x249^(x250^(x251+x252)));

    if (t56 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x253 = INT8_MAX;
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = 215751478LL;
	int64_t t57 = 75583585817LL;

    t57 = (x253^(x254^(x255+x256)));

    if (t57 != 4079215801LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x257 = 239327467438LLU;
	int32_t x258 = INT32_MIN;
	volatile int32_t x259 = INT32_MAX;
	int32_t x260 = INT32_MIN;
	uint64_t t58 = 89300LLU;

    t58 = (x257^(x258^(x259+x260)));

    if (t58 != 239561386065LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x261 = 93016U;
	int8_t x262 = INT8_MIN;
	volatile uint32_t x263 = UINT32_MAX;
	static int32_t x264 = 15;
	static uint32_t t59 = 248117891U;

    t59 = (x261^(x262^(x263+x264)));

    if (t59 != 4294874326U) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x265 = -1;
	uint64_t x266 = UINT64_MAX;
	static int8_t x267 = 3;
	uint32_t x268 = UINT32_MAX;
	uint64_t t60 = 996817LLU;

    t60 = (x265^(x266^(x267+x268)));

    if (t60 != 2LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x269 = -291;
	uint64_t x271 = 1892848516LLU;
	volatile int64_t x272 = INT64_MIN;
	static uint64_t t61 = 7617972993289LLU;

    t61 = (x269^(x270^(x271+x272)));

    if (t61 != 9223268161261821821LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x278 = 4299U;
	static int16_t x279 = 42;
	uint16_t x280 = 4U;
	volatile uint32_t t62 = 2808999U;

    t62 = (x277^(x278^(x279+x280)));

    if (t62 != 4494U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x281 = INT16_MAX;
	uint32_t x282 = 6U;
	volatile int8_t x283 = INT8_MIN;
	static int16_t x284 = -28;
	static volatile uint32_t t63 = 109033U;

    t63 = (x281^(x282^(x283+x284)));

    if (t63 != 4294934685U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x285 = 110LL;
	int16_t x286 = -1;
	int32_t x287 = INT32_MIN;
	uint16_t x288 = UINT16_MAX;
	int64_t t64 = -1816LL;

    t64 = (x285^(x286^(x287+x288)));

    if (t64 != 2147418222LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x289 = INT8_MIN;
	static int32_t x291 = INT32_MIN;
	static volatile uint64_t x292 = 438855400388472LLU;

    t65 = (x289^(x290^(x291+x292)));

    if (t65 != 18446305220456642311LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x293 = INT32_MIN;
	int16_t x295 = INT16_MIN;
	int16_t x296 = -1;
	volatile uint32_t t66 = 904442U;

    t66 = (x293^(x294^(x295+x296)));

    if (t66 != 2140859552U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x302 = 0;
	uint32_t x303 = UINT32_MAX;
	uint16_t x304 = UINT16_MAX;
	uint32_t t67 = 739326U;

    t67 = (x301^(x302^(x303+x304)));

    if (t67 != 115983U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x305 = 1U;
	int8_t x306 = 12;
	uint32_t x307 = 29U;
	uint32_t t68 = 103236624U;

    t68 = (x305^(x306^(x307+x308)));

    if (t68 != 382739535U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x309 = 0U;
	static int16_t x310 = INT16_MIN;
	static volatile int8_t x311 = 1;
	int8_t x312 = INT8_MIN;

    t69 = (x309^(x310^(x311+x312)));

    if (t69 != 32641) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x313 = INT16_MIN;
	volatile uint64_t x314 = UINT64_MAX;
	volatile uint32_t x315 = UINT32_MAX;

    t70 = (x313^(x314^(x315+x316)));

    if (t70 != 32757LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x317 = 7593U;
	int64_t x318 = -30853601900705LL;
	int32_t x319 = -48898;
	int16_t x320 = -1;
	int64_t t71 = 621087421078LL;

    t71 = (x317^(x318^(x319+x320)));

    if (t71 != 30853601925643LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x321 = 28642576686756LLU;
	int16_t x324 = 4;
	uint64_t t72 = 127542065657397LLU;

    t72 = (x321^(x322^(x323+x324)));

    if (t72 != 18446715432159927975LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x325 = 112U;
	static uint8_t x326 = UINT8_MAX;
	uint16_t x327 = 9U;
	uint32_t x328 = 81454885U;
	static uint32_t t73 = 1U;

    t73 = (x325^(x326^(x327+x328)));

    if (t73 != 81455009U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x331 = 464U;
	volatile int8_t x332 = -39;
	volatile int64_t t74 = -55LL;

    t74 = (x329^(x330^(x331+x332)));

    if (t74 != 9223372036854775382LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x333 = UINT32_MAX;
	int16_t x334 = INT16_MAX;
	uint16_t x335 = UINT16_MAX;
	uint32_t x336 = UINT32_MAX;
	static uint32_t t75 = 10697U;

    t75 = (x333^(x334^(x335+x336)));

    if (t75 != 4294934526U) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x337 = INT8_MIN;
	int16_t x338 = -435;
	uint16_t x339 = 110U;
	static volatile uint32_t x340 = UINT32_MAX;
	volatile uint32_t t76 = 86U;

    t76 = (x337^(x338^(x339+x340)));

    if (t76 != 416U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x341 = 10U;
	static uint32_t x342 = UINT32_MAX;
	uint32_t x343 = 784367U;
	uint32_t t77 = 1568722611U;

    t77 = (x341^(x342^(x343+x344)));

    if (t77 != 4294182941U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x345 = -1LL;
	int8_t x346 = -1;
	volatile uint16_t x347 = 0U;
	int64_t x348 = INT64_MIN;
	static int64_t t78 = INT64_MIN;

    t78 = (x345^(x346^(x347+x348)));

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x349 = 5U;
	volatile int32_t x350 = INT32_MIN;
	int64_t x351 = -13641245023LL;
	int16_t x352 = -1;
	static int64_t t79 = 132552182884LL;

    t79 = (x349^(x350^(x351+x352)));

    if (t79 != 14276042405LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x353 = -1;
	int16_t x354 = INT16_MIN;
	int16_t x356 = 0;
	volatile int32_t t80 = 677421532;

    t80 = (x353^(x354^(x355+x356)));

    if (t80 != 32656) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x357 = INT16_MAX;
	int32_t x358 = INT32_MIN;
	uint8_t x359 = 4U;
	volatile int64_t t81 = -16369204755LL;

    t81 = (x357^(x358^(x359+x360)));

    if (t81 != 9223372034707324923LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x361 = -5;
	int8_t x362 = INT8_MAX;
	int8_t x363 = 3;
	uint32_t x364 = 13867U;
	static uint32_t t82 = 260123995U;

    t82 = (x361^(x362^(x363+x364)));

    if (t82 != 4294953386U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x365 = 29;
	int32_t x366 = 905;
	volatile uint64_t x367 = UINT64_MAX;
	volatile uint64_t x368 = UINT64_MAX;

    t83 = (x365^(x366^(x367+x368)));

    if (t83 != 18446744073709550698LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x369 = -1;
	volatile int8_t x370 = 0;
	volatile int32_t x371 = INT32_MAX;
	int32_t t84 = -3;

    t84 = (x369^(x370^(x371+x372)));

    if (t84 != -2147483520) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x374 = UINT8_MAX;
	static int64_t x375 = 46991893289LL;
	int8_t x376 = INT8_MAX;
	uint64_t t85 = 4871699LLU;

    t85 = (x373^(x374^(x375+x376)));

    if (t85 != 46991893331LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x381 = INT64_MAX;
	int16_t x382 = -1;
	int64_t x383 = INT64_MIN;
	volatile int64_t t86 = 5209775833974923LL;

    t86 = (x381^(x382^(x383+x384)));

    if (t86 != 4294967295LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x385 = 23515U;
	volatile uint32_t x386 = UINT32_MAX;
	static int16_t x387 = INT16_MIN;
	int16_t x388 = -203;
	static uint32_t t87 = 2U;

    t87 = (x385^(x386^(x387+x388)));

    if (t87 != 56081U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x396 = INT64_MAX;
	uint64_t t88 = 57368247963069653LLU;

    t88 = (x393^(x394^(x395+x396)));

    if (t88 != 9223372036600207928LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x397 = -1LL;
	uint16_t x398 = UINT16_MAX;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = INT8_MIN;

    t89 = (x397^(x398^(x399+x400)));

    if (t89 != -65409LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x401 = 629;
	int64_t x402 = INT64_MAX;
	static uint64_t x403 = UINT64_MAX;
	uint64_t x404 = 105890LLU;

    t90 = (x401^(x402^(x403+x404)));

    if (t90 != 9223372036854669355LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x409 = INT32_MIN;
	int32_t x410 = INT32_MIN;
	int8_t x411 = -12;
	int64_t x412 = -2671251669LL;
	static volatile int64_t t91 = 6LL;

    t91 = (x409^(x410^(x411+x412)));

    if (t91 != -2671251681LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x413 = 0U;
	int8_t x414 = INT8_MIN;
	int16_t x415 = INT16_MAX;
	uint8_t x416 = 3U;
	static volatile int32_t t92 = 32;

    t92 = (x413^(x414^(x415+x416)));

    if (t92 != -32894) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x417 = INT64_MIN;
	int64_t x418 = INT64_MIN;
	static int16_t x419 = 0;
	int8_t x420 = INT8_MIN;

    t93 = (x417^(x418^(x419+x420)));

    if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x425 = -4251LL;
	int64_t x426 = -1LL;
	uint32_t x427 = 3814U;

    t94 = (x425^(x426^(x427+x428)));

    if (t94 != 7932LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x429 = UINT8_MAX;
	volatile int64_t x430 = INT64_MIN;
	volatile int64_t x431 = 12442631LL;
	volatile int32_t x432 = -1;
	int64_t t95 = -6118217187755948LL;

    t95 = (x429^(x430^(x431+x432)));

    if (t95 != -9223372036842332935LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x433 = -31455263;
	int16_t x434 = -1;
	int16_t x435 = -8964;
	int32_t x436 = -1;
	static int32_t t96 = -1;

    t96 = (x433^(x434^(x435+x436)));

    if (t96 != -31447835) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x437 = 214LLU;
	static int8_t x438 = INT8_MAX;
	uint8_t x439 = 94U;
	int16_t x440 = INT16_MIN;
	volatile uint64_t t97 = 758349264124100LLU;

    t97 = (x437^(x438^(x439+x440)));

    if (t97 != 18446744073709519095LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x441 = 1140632736378283704LLU;
	int8_t x442 = -2;
	int32_t x443 = 1;
	int64_t x444 = -1LL;

    t98 = (x441^(x442^(x443+x444)));

    if (t98 != 17306111337331267910LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x445 = 180165;
	uint32_t x446 = 762681711U;
	int8_t x447 = 7;
	volatile int32_t x448 = -2126;
	volatile uint32_t t99 = 1764392U;

    t99 = (x445^(x446^(x447+x448)));

    if (t99 != 3532181779U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x453 = INT16_MIN;
	int64_t x454 = INT64_MIN;
	int32_t x456 = INT32_MIN;
	int64_t t100 = 161648904168589603LL;

    t100 = (x453^(x454^(x455+x456)));

    if (t100 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x457 = -123284413815855LL;
	int32_t x460 = -1;
	int64_t t101 = 184189LL;

    t101 = (x457^(x458^(x459+x460)));

    if (t101 != 123284413815855LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x461 = 3U;
	uint16_t x463 = UINT16_MAX;
	static volatile uint32_t t102 = 1008570U;

    t102 = (x461^(x462^(x463+x464)));

    if (t102 != 4294902012U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x473 = 88322981U;
	uint16_t x474 = 106U;
	volatile int8_t x475 = INT8_MAX;
	int64_t x476 = INT64_MIN;
	int64_t t103 = 128521279112LL;

    t103 = (x473^(x474^(x475+x476)));

    if (t103 != -9223372036766452816LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x478 = INT64_MIN;
	int64_t x479 = 4171846LL;
	static volatile int64_t x480 = -1LL;
	int64_t t104 = -4697358476LL;

    t104 = (x477^(x478^(x479+x480)));

    if (t104 != -9223372036850603846LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x481 = UINT64_MAX;
	int64_t x483 = -221236110208811LL;
	static int8_t x484 = -19;

    t105 = (x481^(x482^(x483+x484)));

    if (t105 != 18446522837599342786LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x485 = UINT8_MAX;
	static int32_t x486 = INT32_MAX;
	volatile int32_t x487 = INT32_MIN;
	int64_t x488 = -3978LL;
	static int64_t t106 = 1678926070370509597LL;

    t106 = (x485^(x486^(x487+x488)));

    if (t106 != -4294963338LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x491 = 178602654LLU;
	int8_t x492 = 1;
	volatile uint64_t t107 = 957LLU;

    t107 = (x489^(x490^(x491+x492)));

    if (t107 != 18446744073530950240LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x493 = INT8_MIN;
	uint8_t x494 = 103U;
	static int8_t x495 = INT8_MIN;
	int64_t x496 = INT64_MAX;
	int64_t t108 = -3LL;

    t108 = (x493^(x494^(x495+x496)));

    if (t108 != -9223372036854775656LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x498 = INT64_MIN;
	uint8_t x500 = 7U;

    t109 = (x497^(x498^(x499+x500)));

    if (t109 != -9223372036854775694LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x501 = 12U;
	static uint16_t x502 = UINT16_MAX;
	uint64_t x504 = 2194616LLU;
	uint64_t t110 = 57LLU;

    t110 = (x501^(x502^(x503+x504)));

    if (t110 != 2149679940LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x505 = -1;
	int8_t x506 = INT8_MIN;
	int32_t x507 = -1;
	int32_t x508 = 1;

    t111 = (x505^(x506^(x507+x508)));

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x509 = INT32_MAX;
	int32_t x511 = INT32_MIN;
	static volatile int64_t x512 = -1LL;
	int64_t t112 = 506LL;

    t112 = (x509^(x510^(x511+x512)));

    if (t112 != -4294967296LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x517 = UINT8_MAX;
	int32_t x518 = 32;
	volatile int32_t x519 = INT32_MIN;
	uint16_t x520 = UINT16_MAX;

    t113 = (x517^(x518^(x519+x520)));

    if (t113 != -2147418336) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x521 = 23U;
	uint8_t x522 = UINT8_MAX;
	uint64_t x523 = 141791849456445304LLU;
	int32_t x524 = -1;
	uint64_t t114 = 19791044LLU;

    t114 = (x521^(x522^(x523+x524)));

    if (t114 != 141791849456445343LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x525 = -3140;
	volatile int32_t x526 = -1;
	int16_t x527 = 48;
	uint32_t x528 = 7801U;
	volatile uint32_t t115 = 153194U;

    t115 = (x525^(x526^(x527+x528)));

    if (t115 != 4842U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x529 = INT32_MIN;
	static int8_t x530 = -3;
	uint32_t x531 = 81053875U;
	static uint32_t x532 = 5650U;
	volatile uint32_t t116 = 96248U;

    t116 = (x529^(x530^(x531+x532)));

    if (t116 != 2066424120U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x533 = UINT16_MAX;
	uint64_t x535 = UINT64_MAX;
	int8_t x536 = -59;
	volatile uint64_t t117 = 5151255LLU;

    t117 = (x533^(x534^(x535+x536)));

    if (t117 != 65476LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x537 = UINT8_MAX;
	int8_t x538 = -1;
	static int64_t x539 = -3165125LL;

    t118 = (x537^(x538^(x539+x540)));

    if (t118 != 3164952LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x541 = INT8_MAX;
	int16_t x542 = INT16_MIN;
	int16_t x543 = INT16_MIN;
	uint8_t x544 = 6U;
	volatile int32_t t119 = 1;

    t119 = (x541^(x542^(x543+x544)));

    if (t119 != 121) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x546 = INT16_MIN;
	volatile uint8_t x548 = UINT8_MAX;
	volatile uint32_t t120 = 2828U;

    t120 = (x545^(x546^(x547+x548)));

    if (t120 != 4294254752U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x553 = INT8_MAX;
	uint64_t x556 = UINT64_MAX;
	uint64_t t121 = 45791223605LLU;

    t121 = (x553^(x554^(x555+x556)));

    if (t121 != 108568LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x557 = -1;
	volatile int64_t x558 = -834918364774448LL;
	static int8_t x559 = INT8_MAX;
	static int64_t t122 = 76775LL;

    t122 = (x557^(x558^(x559+x560)));

    if (t122 != 834918364741713LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x561 = -19363;
	uint32_t x563 = 3U;
	int16_t x564 = INT16_MIN;
	volatile uint64_t t123 = 19159758759876LLU;

    t123 = (x561^(x562^(x563+x564)));

    if (t123 != 4294953889LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x566 = 0;
	static uint16_t x567 = 6876U;
	volatile int64_t t124 = 742002989071518384LL;

    t124 = (x565^(x566^(x567+x568)));

    if (t124 != -9223372036854769060LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint8_t x569 = 6U;
	volatile int64_t x570 = -1LL;
	int16_t x571 = INT16_MIN;
	static int64_t x572 = 189826LL;
	volatile int64_t t125 = 139829461016452849LL;

    t125 = (x569^(x570^(x571+x572)));

    if (t125 != -157061LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x573 = INT16_MAX;
	int32_t x576 = INT32_MIN;
	static volatile int32_t t126 = 154938886;

    t126 = (x573^(x574^(x575+x576)));

    if (t126 != 2147450883) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x581 = 7U;
	int16_t x582 = 5468;
	volatile int8_t x583 = -1;

    t127 = (x581^(x582^(x583+x584)));

    if (t127 != -67190) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x586 = INT8_MIN;
	volatile int64_t x587 = INT64_MIN;
	uint32_t x588 = 7U;
	volatile int64_t t128 = 2579153923056523256LL;

    t128 = (x585^(x586^(x587+x588)));

    if (t128 != -9223372036854743161LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x593 = INT8_MIN;
	static volatile uint64_t x595 = UINT64_MAX;
	volatile uint64_t x596 = 21LLU;
	volatile uint64_t t129 = 128267181717036LLU;

    t129 = (x593^(x594^(x595+x596)));

    if (t129 != 107LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x598 = 588725LLU;
	int8_t x599 = INT8_MIN;
	int16_t x600 = INT16_MIN;

    t130 = (x597^(x598^(x599+x600)));

    if (t130 != 18446744071562623946LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x605 = -1;
	int8_t x606 = -1;
	static volatile int8_t x607 = -1;
	volatile uint64_t x608 = 118243559946LLU;
	volatile uint64_t t131 = 119860897583831LLU;

    t131 = (x605^(x606^(x607+x608)));

    if (t131 != 118243559945LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x609 = 1;
	volatile uint8_t x611 = 6U;
	static int32_t x612 = INT32_MIN;
	uint32_t t132 = 429U;

    t132 = (x609^(x610^(x611+x612)));

    if (t132 != 2270831021U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x617 = UINT16_MAX;
	volatile int8_t x618 = INT8_MIN;
	int64_t x619 = 1204LL;
	int64_t x620 = 1941LL;
	volatile int64_t t133 = 465370LL;

    t133 = (x617^(x618^(x619+x620)));

    if (t133 != -62410LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x621 = UINT32_MAX;
	uint64_t x622 = UINT64_MAX;
	int8_t x624 = 30;
	volatile uint64_t t134 = 22109541LLU;

    t134 = (x621^(x622^(x623+x624)));

    if (t134 != 18446744069414685000LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x625 = -1;
	int8_t x627 = -1;
	static uint8_t x628 = 51U;
	int32_t t135 = 0;

    t135 = (x625^(x626^(x627+x628)));

    if (t135 != 32717) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x629 = 25U;
	int64_t x632 = -1LL;

    t136 = (x629^(x630^(x631+x632)));

    if (t136 != -8731625LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x633 = -59;
	int16_t x634 = 192;
	volatile int64_t x635 = 13379443537070741LL;
	static uint16_t x636 = 1U;

    t137 = (x633^(x634^(x635+x636)));

    if (t137 != -13379443537070701LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x637 = UINT16_MAX;
	int16_t x639 = -4987;
	static volatile int16_t x640 = INT16_MIN;
	volatile int64_t t138 = 687199711481018LL;

    t138 = (x637^(x638^(x639+x640)));

    if (t138 != 27781LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x641 = -17990178;
	volatile uint8_t x642 = UINT8_MAX;
	int32_t x643 = INT32_MAX;
	int64_t x644 = INT64_MIN;
	volatile int64_t t139 = 15567547800046LL;

    t139 = (x641^(x642^(x643+x644)));

    if (t139 != 9223372034725282526LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x645 = INT64_MIN;
	volatile int16_t x646 = -7047;
	volatile uint32_t x647 = 74016U;
	uint8_t x648 = UINT8_MAX;
	volatile int64_t t140 = -608861199154464LL;

    t140 = (x645^(x646^(x647+x648)));

    if (t140 != -9223372032559888794LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x649 = INT64_MIN;
	volatile int32_t x650 = INT32_MIN;
	volatile int16_t x651 = 8897;
	uint16_t x652 = 1318U;

    t141 = (x649^(x650^(x651+x652)));

    if (t141 != 9223372034707302375LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x653 = UINT64_MAX;
	int16_t x655 = -1;
	uint64_t t142 = 58301638LLU;

    t142 = (x653^(x654^(x655+x656)));

    if (t142 != 18446744073709517578LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x662 = 231277321328288LL;
	int32_t x663 = -378844;
	volatile int16_t x664 = -1;
	static volatile uint64_t t143 = 504825607980742LLU;

    t143 = (x661^(x662^(x663+x664)));

    if (t143 != 18446512796388503173LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x669 = INT32_MIN;
	static volatile uint8_t x670 = 1U;
	int16_t x671 = INT16_MIN;

    t144 = (x669^(x670^(x671+x672)));

    if (t144 != 2147418113) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x673 = INT16_MIN;
	int64_t x675 = 313133436765618LL;
	uint64_t t145 = 11226619440272997LLU;

    t145 = (x673^(x674^(x675+x676)));

    if (t145 != 313137731762766LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x677 = -1167;
	int32_t x678 = INT32_MIN;
	int32_t x679 = INT32_MAX;
	int32_t x680 = -1;
	int32_t t146 = 51;

    t146 = (x677^(x678^(x679+x680)));

    if (t146 != 1167) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x681 = INT8_MIN;
	volatile int8_t x682 = INT8_MIN;
	int8_t x683 = -1;
	int32_t x684 = -367;
	static volatile int32_t t147 = -65;

    t147 = (x681^(x682^(x683+x684)));

    if (t147 != -368) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x685 = -1;
	volatile int16_t x686 = -1;
	int64_t x687 = 12373289LL;
	int64_t t148 = -3896877634LL;

    t148 = (x685^(x686^(x687+x688)));

    if (t148 != 12373332LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x693 = 2146U;
	int32_t x694 = INT32_MAX;
	volatile uint8_t x695 = UINT8_MAX;
	int16_t x696 = -484;

    t149 = (x693^(x694^(x695+x696)));

    if (t149 != 2147485830U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x697 = -1LL;
	int64_t x698 = INT64_MAX;
	volatile int8_t x699 = INT8_MIN;
	int8_t x700 = INT8_MIN;
	volatile int64_t t150 = 6210015345522LL;

    t150 = (x697^(x698^(x699+x700)));

    if (t150 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x701 = -1;
	int64_t x702 = -1LL;
	int16_t x703 = -1;
	uint16_t x704 = 4U;
	static volatile int64_t t151 = -1392631LL;

    t151 = (x701^(x702^(x703+x704)));

    if (t151 != 3LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x705 = INT16_MIN;
	int16_t x706 = INT16_MIN;
	uint64_t x707 = UINT64_MAX;
	uint64_t x708 = UINT64_MAX;

    t152 = (x705^(x706^(x707+x708)));

    if (t152 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x709 = INT64_MIN;
	int16_t x710 = -1;
	static int64_t x711 = INT64_MAX;
	int8_t x712 = INT8_MIN;
	volatile int64_t t153 = -68LL;

    t153 = (x709^(x710^(x711+x712)));

    if (t153 != 128LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x717 = UINT16_MAX;
	int8_t x719 = INT8_MAX;
	int64_t t154 = 927974519848581LL;

    t154 = (x717^(x718^(x719+x720)));

    if (t154 != -32887LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x721 = INT8_MAX;
	int8_t x723 = -14;
	volatile uint64_t x724 = 31174LLU;

    t155 = (x721^(x722^(x723+x724)));

    if (t155 != 31160LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x729 = INT8_MAX;
	int32_t x731 = -1;
	uint8_t x732 = 12U;

    t156 = (x729^(x730^(x731+x732)));

    if (t156 != -117) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x733 = UINT32_MAX;
	int16_t x734 = INT16_MIN;
	volatile int32_t x736 = INT32_MAX;
	uint64_t t157 = 77262900627305LLU;

    t157 = (x733^(x734^(x735+x736)));

    if (t157 != 18446744057731877345LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x737 = INT16_MAX;
	static int32_t x738 = INT32_MAX;
	int64_t x740 = -1LL;
	int64_t t158 = -41929LL;

    t158 = (x737^(x738^(x739+x740)));

    if (t158 != -2137170265LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x741 = INT8_MIN;
	int16_t x742 = INT16_MAX;
	uint8_t x743 = UINT8_MAX;
	static int32_t t159 = -1036182;

    t159 = (x741^(x742^(x743+x744)));

    if (t159 != -32386) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x749 = UINT64_MAX;
	int8_t x750 = -1;
	static int8_t x751 = INT8_MAX;
	int64_t x752 = -1LL;
	uint64_t t160 = 1623032913LLU;

    t160 = (x749^(x750^(x751+x752)));

    if (t160 != 126LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x753 = 1;
	uint8_t x754 = 5U;
	static uint32_t x755 = UINT32_MAX;
	int64_t x756 = 21524LL;
	int64_t t161 = -11490949777LL;

    t161 = (x753^(x754^(x755+x756)));

    if (t161 != 4294988823LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x758 = INT32_MIN;
	uint16_t x759 = UINT16_MAX;
	uint16_t x760 = UINT16_MAX;

    t162 = (x757^(x758^(x759+x760)));

    if (t162 != -2147352703) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x761 = UINT8_MAX;
	static int32_t x762 = 348;
	static uint32_t x763 = 609U;
	uint16_t x764 = 1U;
	uint32_t t163 = 7076U;

    t163 = (x761^(x762^(x763+x764)));

    if (t163 != 961U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x769 = INT8_MAX;
	int16_t x770 = -1;
	static int16_t x772 = INT16_MIN;

    t164 = (x769^(x770^(x771+x772)));

    if (t164 != 65408) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x773 = INT16_MIN;
	int16_t x774 = 60;
	uint8_t x776 = 40U;
	volatile int32_t t165 = 1;

    t165 = (x773^(x774^(x775+x776)));

    if (t165 != -65509) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x778 = INT16_MIN;
	int8_t x779 = INT8_MIN;
	static int32_t t166 = -208;

    t166 = (x777^(x778^(x779+x780)));

    if (t166 != -2147451007) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x781 = 102U;
	int64_t x783 = -1LL;
	int64_t t167 = 178068265403267228LL;

    t167 = (x781^(x782^(x783+x784)));

    if (t167 != 58994LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x785 = INT32_MIN;
	static volatile int32_t x786 = INT32_MIN;
	volatile int64_t x787 = INT64_MIN;
	volatile int64_t x788 = 218749766059LL;
	volatile int64_t t168 = 31200LL;

    t168 = (x785^(x786^(x787+x788)));

    if (t168 != -9223371818105009749LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x792 = INT32_MAX;
	volatile uint64_t t169 = 2151896079904346275LLU;

    t169 = (x789^(x790^(x791+x792)));

    if (t169 != 18446744071562100772LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x802 = UINT64_MAX;
	volatile uint32_t x803 = 2181U;
	uint64_t x804 = 100LLU;
	volatile uint64_t t170 = 6328336924LLU;

    t170 = (x801^(x802^(x803+x804)));

    if (t170 != 9223372036854773526LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x805 = INT32_MIN;
	int64_t x806 = INT64_MAX;
	static volatile uint32_t x807 = UINT32_MAX;
	uint64_t x808 = 26885675842672LLU;
	volatile uint64_t t171 = 349926185808283753LLU;

    t171 = (x805^(x806^(x807+x808)));

    if (t171 != 9223398926316962704LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x809 = 0U;
	int16_t x811 = INT16_MIN;

    t172 = (x809^(x810^(x811+x812)));

    if (t172 != 18446744039370289000LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x814 = -19;
	int32_t x816 = INT32_MIN;

    t173 = (x813^(x814^(x815+x816)));

    if (t173 != 18446744072015251139LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x818 = INT8_MIN;
	uint32_t x819 = UINT32_MAX;
	volatile int64_t t174 = -37987383LL;

    t174 = (x817^(x818^(x819+x820)));

    if (t174 != -4294965751LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x821 = UINT8_MAX;
	int16_t x822 = INT16_MAX;
	static volatile int8_t x823 = -2;
	int32_t x824 = -1;
	volatile int32_t t175 = 44680032;

    t175 = (x821^(x822^(x823+x824)));

    if (t175 != -32515) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x827 = -5520995LL;
	int16_t x828 = INT16_MAX;

    t176 = (x825^(x826^(x827+x828)));

    if (t176 != 5488236LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x829 = INT64_MIN;
	static uint8_t x830 = UINT8_MAX;
	int16_t x831 = -10;
	int64_t x832 = INT64_MAX;
	int64_t t177 = -2807045403LL;

    t177 = (x829^(x830^(x831+x832)));

    if (t177 != -246LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x837 = INT32_MIN;
	uint8_t x838 = 61U;
	volatile uint8_t x840 = UINT8_MAX;
	volatile uint64_t t178 = 60369933832137210LLU;

    t178 = (x837^(x838^(x839+x840)));

    if (t178 != 18446744071562068163LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x845 = INT8_MIN;
	int16_t x846 = INT16_MAX;
	int8_t x847 = 1;
	uint32_t x848 = 78U;
	uint32_t t179 = 6U;

    t179 = (x845^(x846^(x847+x848)));

    if (t179 != 4294934576U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x849 = UINT8_MAX;
	int32_t x850 = -50078860;
	uint32_t x851 = 11495705U;
	uint16_t x852 = 636U;
	static volatile uint32_t t180 = 10353U;

    t180 = (x849^(x850^(x851+x852)));

    if (t180 != 4255952926U) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x853 = INT64_MIN;
	uint16_t x854 = 381U;
	uint16_t x855 = UINT16_MAX;
	int16_t x856 = INT16_MIN;
	int64_t t181 = -2952063097716LL;

    t181 = (x853^(x854^(x855+x856)));

    if (t181 != -9223372036854743422LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x857 = INT64_MAX;
	int8_t x858 = INT8_MAX;
	static int32_t x859 = INT32_MAX;
	uint64_t x860 = 118998412LLU;
	uint64_t t182 = 63818656217LLU;

    t182 = (x857^(x858^(x859+x860)));

    if (t182 != 9223372034588293643LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x861 = 58168999230822397LLU;
	volatile int16_t x862 = -1;
	int16_t x863 = -1;
	int8_t x864 = INT8_MAX;
	uint64_t t183 = 32517LLU;

    t183 = (x861^(x862^(x863+x864)));

    if (t183 != 18388575074478729340LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x865 = 7154U;
	int16_t x866 = -1;
	int64_t x867 = INT64_MAX;
	volatile int64_t t184 = 33721567LL;

    t184 = (x865^(x866^(x867+x868)));

    if (t184 != -9223372036854768641LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x869 = -1;
	int32_t x871 = INT32_MAX;
	int64_t x872 = INT64_MIN;
	volatile int64_t t185 = 830993115317903633LL;

    t185 = (x869^(x870^(x871+x872)));

    if (t185 != 9223372034707357695LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x874 = INT16_MIN;
	volatile int64_t x875 = -1LL;
	int64_t t186 = 31578144782651LL;

    t186 = (x873^(x874^(x875+x876)));

    if (t186 != 16292LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x877 = -1;
	static int32_t x878 = INT32_MAX;
	static uint8_t x879 = 3U;
	volatile int32_t t187 = 6386;

    t187 = (x877^(x878^(x879+x880)));

    if (t187 != -2122982726) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint8_t x881 = UINT8_MAX;
	static int32_t x882 = -1;
	uint32_t x883 = 23438U;
	int32_t x884 = INT32_MIN;
	volatile uint32_t t188 = 27769017U;

    t188 = (x881^(x882^(x883+x884)));

    if (t188 != 2147460238U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x885 = INT8_MIN;
	volatile int64_t x886 = INT64_MIN;
	int64_t x887 = INT64_MIN;
	static volatile int64_t t189 = 4LL;

    t189 = (x885^(x886^(x887+x888)));

    if (t189 != -999LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x895 = INT8_MIN;
	int8_t x896 = -1;
	volatile int32_t t190 = 30;

    t190 = (x893^(x894^(x895+x896)));

    if (t190 != -141) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x897 = 63U;
	int32_t x898 = -825934747;
	int8_t x899 = INT8_MAX;
	volatile int32_t t191 = -1;

    t191 = (x897^(x898^(x899+x900)));

    if (t191 != -825934812) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x901 = INT32_MAX;
	uint64_t x902 = UINT64_MAX;
	int8_t x903 = -1;
	uint32_t x904 = UINT32_MAX;
	uint64_t t192 = 190874694927197657LLU;

    t192 = (x901^(x902^(x903+x904)));

    if (t192 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x905 = -770667533227777LL;
	static int32_t x906 = INT32_MIN;
	int64_t t193 = -36897547264836094LL;

    t193 = (x905^(x906^(x907+x908)));

    if (t193 != 770669527771384LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x909 = 545;
	volatile uint64_t x910 = 0LLU;
	uint16_t x911 = 23551U;
	int32_t x912 = -1;
	volatile uint64_t t194 = 34228488848LLU;

    t194 = (x909^(x910^(x911+x912)));

    if (t194 != 23007LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x913 = 0U;
	static int32_t x914 = INT32_MIN;
	uint32_t x915 = 1106209694U;
	static int64_t x916 = -8147570879LL;
	volatile int64_t t195 = 4993LL;

    t195 = (x913^(x914^(x915+x916)));

    if (t195 != 7991024351LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x917 = 13285882U;
	int32_t x920 = -73976;
	static uint32_t t196 = 53512983U;

    t196 = (x917^(x918^(x919+x920)));

    if (t196 != 13346429U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x921 = UINT32_MAX;
	uint8_t x922 = 3U;
	uint32_t x924 = UINT32_MAX;
	uint32_t t197 = 1948067229U;

    t197 = (x921^(x922^(x923+x924)));

    if (t197 != 131U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x926 = -1;
	int16_t x927 = INT16_MAX;
	int32_t t198 = -15735;

    t198 = (x925^(x926^(x927+x928)));

    if (t198 != -32851) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x929 = INT64_MIN;
	int32_t x930 = INT32_MAX;
	static int16_t x932 = INT16_MIN;
	static int64_t t199 = -442609048240693LL;

    t199 = (x929^(x930^(x931+x932)));

    if (t199 != 9223372034707324980LL) { NG(); } else { ; }
	
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

