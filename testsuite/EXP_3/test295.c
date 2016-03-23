
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

static volatile int64_t x12 = INT64_MAX;
volatile int32_t x13 = -1;
static int32_t x18 = INT32_MIN;
uint8_t x19 = 126U;
int32_t x21 = -1;
volatile uint32_t x27 = 5617994U;
int32_t x28 = -1;
uint8_t x29 = 3U;
int16_t x31 = INT16_MAX;
uint64_t x44 = UINT64_MAX;
static volatile uint64_t t9 = 31013LLU;
int32_t x62 = INT32_MIN;
uint32_t x67 = 239U;
volatile int64_t x70 = INT64_MAX;
int64_t x71 = INT64_MAX;
uint16_t x78 = UINT16_MAX;
uint32_t x90 = UINT32_MAX;
int8_t x93 = -1;
int8_t x96 = 8;
int64_t x111 = INT64_MIN;
static int8_t x130 = INT8_MIN;
static volatile int8_t x135 = -3;
volatile int32_t x137 = 21365029;
static int32_t t28 = -27223952;
uint32_t x141 = 5147508U;
volatile int32_t t30 = -3579197;
uint64_t x152 = 16715676746621LLU;
volatile uint64_t t31 = 29134968547767LLU;
uint64_t x153 = 113286399682289090LLU;
volatile uint16_t x155 = 1263U;
int8_t x156 = -1;
static volatile uint64_t t33 = 89831090349262LLU;
int8_t x162 = INT8_MAX;
int32_t t34 = 233030;
int8_t x167 = -1;
static int64_t t35 = INT64_MIN;
int32_t x174 = -14909638;
int64_t x180 = 569075058284104LL;
static int64_t t37 = -21LL;
uint64_t x181 = 62123802779LLU;
static int32_t t39 = 2765147;
int32_t t40 = 52;
int32_t x200 = INT32_MIN;
static uint32_t x203 = 2571367U;
volatile uint32_t t43 = 226528748U;
int8_t x216 = -2;
int64_t x226 = -247048110LL;
uint64_t t49 = 51130491790766LLU;
uint8_t x229 = 2U;
int8_t x230 = -1;
uint32_t x232 = 349134U;
volatile uint32_t t50 = 483U;
int64_t x235 = -1LL;
volatile int16_t x237 = 6;
int64_t x240 = -1LL;
int8_t x255 = INT8_MAX;
int8_t x260 = INT8_MAX;
static uint64_t x263 = 47209194LLU;
int16_t x264 = -1;
volatile int16_t x269 = -392;
static volatile int64_t x272 = INT64_MIN;
volatile int64_t t59 = 26869LL;
int32_t t60 = 1758578;
volatile uint16_t x282 = 182U;
int8_t x292 = INT8_MIN;
int64_t x303 = -1LL;
uint64_t x310 = 878758677211179631LLU;
int16_t x312 = 8135;
volatile int32_t t71 = INT32_MAX;
int32_t x338 = INT32_MIN;
volatile int32_t t72 = 308;
static int8_t x342 = INT8_MAX;
int64_t x349 = INT64_MAX;
uint8_t x350 = 1U;
int64_t t75 = 4324841381331LL;
static int8_t x354 = INT8_MIN;
int8_t x357 = -1;
static int32_t t79 = -60;
int32_t x371 = -3;
int32_t x372 = -1;
static uint64_t x378 = UINT64_MAX;
uint32_t x381 = 0U;
uint16_t x382 = 15U;
static volatile int64_t x386 = INT64_MIN;
uint8_t x389 = 1U;
static int16_t x395 = INT16_MIN;
uint32_t x396 = UINT32_MAX;
int8_t x400 = INT8_MIN;
static uint64_t t87 = 242193386207985334LLU;
int64_t x411 = -1LL;
int64_t x418 = -1LL;
volatile int32_t t91 = 22341218;
int8_t x429 = INT8_MIN;
int8_t x431 = -1;
int32_t x443 = -1;
int8_t x444 = -1;
volatile int32_t t94 = -2503045;
volatile int32_t x448 = 5;
static volatile uint64_t t95 = 470LLU;
int32_t x458 = INT32_MAX;
uint16_t x459 = 123U;
volatile uint32_t x462 = 131370085U;
static int32_t x465 = 2262;
int32_t t104 = -83693;
volatile int32_t x485 = INT32_MAX;
volatile uint32_t x487 = 225U;
volatile uint16_t x491 = UINT16_MAX;
int64_t x493 = -2218116024576337897LL;
volatile int32_t x494 = -1;
static volatile uint32_t x501 = UINT32_MAX;
int32_t x502 = INT32_MIN;
volatile int16_t x504 = INT16_MAX;
int64_t x511 = INT64_MIN;
uint16_t x523 = UINT16_MAX;
volatile int16_t x526 = INT16_MAX;
uint32_t x528 = 1U;
int32_t t115 = 432442469;
uint16_t x535 = UINT16_MAX;
static int32_t x541 = -626;
uint8_t x544 = 47U;
int32_t t118 = -357;
volatile int64_t t119 = -1024274494742LL;
uint16_t x555 = UINT16_MAX;
uint16_t x559 = 58U;
int16_t x563 = -3363;
int8_t x571 = INT8_MIN;
static int64_t x577 = -1LL;
static int64_t x585 = 52553LL;
uint16_t x586 = UINT16_MAX;
static volatile int32_t t128 = -1801232;
static int32_t x596 = 487765;
int32_t x599 = 6230927;
int64_t x603 = -1LL;
static volatile int64_t t131 = 229125960LL;
uint32_t t132 = 0U;
int16_t x615 = 0;
uint8_t x622 = UINT8_MAX;
volatile int64_t x628 = -1LL;
uint64_t x629 = 146601912962LLU;
volatile int32_t x632 = 230256626;
static int32_t t138 = -3637;
int64_t x639 = INT64_MAX;
int8_t x641 = INT8_MIN;
uint16_t x643 = 31U;
volatile uint8_t x644 = 18U;
volatile int8_t x655 = INT8_MIN;
volatile int32_t t143 = -294294586;
uint64_t t144 = 7841180921002101LLU;
int16_t x664 = INT16_MIN;
int8_t x665 = -1;
uint64_t x666 = 8325939424746LLU;
int64_t x668 = INT64_MAX;
volatile int64_t t146 = -171224421LL;
static int64_t t147 = 221564731718605490LL;
int8_t x677 = INT8_MIN;
int64_t x680 = -1LL;
volatile int32_t t155 = 21018;
int64_t x728 = INT64_MIN;
int64_t x733 = INT64_MIN;
volatile int8_t x736 = -1;
static uint64_t x745 = 67169871175LLU;
int16_t x746 = 5;
volatile uint16_t x748 = 8U;
uint32_t x756 = UINT32_MAX;
volatile int32_t t164 = 1;
volatile int16_t x785 = INT16_MIN;
volatile int8_t x794 = -1;
static volatile uint16_t x795 = UINT16_MAX;
int64_t t170 = -5024752LL;
int64_t x797 = INT64_MIN;
int8_t x799 = -20;
int64_t t171 = 15331586058LL;
uint8_t x801 = UINT8_MAX;
static uint64_t x805 = 0LLU;
int16_t x806 = INT16_MIN;
int8_t x817 = INT8_MIN;
int32_t x826 = 91;
int16_t x833 = -1;
int16_t x834 = 4;
int8_t x839 = -1;
int32_t x844 = -1;
int8_t x848 = 0;
uint64_t x855 = 682841335479673119LLU;
int32_t x873 = INT32_MIN;
static int8_t x885 = INT8_MAX;
volatile int32_t x886 = -3388;
int16_t x891 = INT16_MAX;
int16_t x892 = 367;
uint32_t x897 = 1158596122U;
static int8_t x898 = -36;
static int16_t x902 = 0;
uint64_t x905 = 202238881761LLU;
volatile uint64_t x908 = UINT64_MAX;
int16_t x922 = INT16_MIN;
uint64_t x923 = 1LLU;
static int64_t x926 = INT64_MAX;
uint8_t x927 = 85U;
int8_t x931 = 1;
int32_t x932 = -1;


void f0(void) {
    	volatile int32_t x1 = 0;
	int16_t x2 = -1;
	volatile uint32_t x3 = 90U;
	volatile int32_t x4 = INT32_MIN;
	volatile uint32_t t0 = 30567745U;

    t0 = ((x1==x2)+(x3-x4));

    if (t0 != 2147483738U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 1U;
	uint32_t x6 = UINT32_MAX;
	static int8_t x7 = -7;
	int32_t x8 = -1;
	volatile int32_t t1 = 6407692;

    t1 = ((x5==x6)+(x7-x8));

    if (t1 != -6) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = UINT64_MAX;
	volatile int16_t x10 = -1;
	volatile int64_t x11 = INT64_MAX;
	volatile int64_t t2 = 111171301455LL;

    t2 = ((x9==x10)+(x11-x12));

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x14 = INT8_MIN;
	uint64_t x15 = UINT64_MAX;
	volatile uint32_t x16 = 874389614U;
	volatile uint64_t t3 = 2704400659415856736LLU;

    t3 = ((x13==x14)+(x15-x16));

    if (t3 != 18446744072835162001LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -2827;

    t4 = ((x17==x18)+(x19-x20));

    if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MIN;
	int16_t x23 = INT16_MAX;
	int16_t x24 = -1;
	int32_t t5 = -15656;

    t5 = ((x21==x22)+(x23-x24));

    if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 2U;
	volatile int16_t x26 = -1675;
	volatile uint32_t t6 = 137U;

    t6 = ((x25==x26)+(x27-x28));

    if (t6 != 5617995U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x30 = INT16_MIN;
	int8_t x32 = INT8_MIN;
	static int32_t t7 = -142479472;

    t7 = ((x29==x30)+(x31-x32));

    if (t7 != 32895) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	uint8_t x38 = 11U;
	int8_t x39 = INT8_MAX;
	int16_t x40 = INT16_MIN;
	static int32_t t8 = 56541;

    t8 = ((x37==x38)+(x39-x40));

    if (t8 != 32895) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 10027U;
	volatile int16_t x42 = 6;
	volatile uint8_t x43 = UINT8_MAX;

    t9 = ((x41==x42)+(x43-x44));

    if (t9 != 256LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x45 = UINT16_MAX;
	uint64_t x46 = 911211895LLU;
	int32_t x47 = 31;
	int64_t x48 = -1LL;
	volatile int64_t t10 = 15702945411630LL;

    t10 = ((x45==x46)+(x47-x48));

    if (t10 != 32LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -4157674LL;
	int8_t x50 = -1;
	static int64_t x51 = INT64_MAX;
	int32_t x52 = 1552512;
	int64_t t11 = -1632LL;

    t11 = ((x49==x50)+(x51-x52));

    if (t11 != 9223372036853223295LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x57 = INT64_MIN;
	uint8_t x58 = 29U;
	int32_t x59 = 69;
	int64_t x60 = INT64_MAX;
	volatile int64_t t12 = -99537206075243913LL;

    t12 = ((x57==x58)+(x59-x60));

    if (t12 != -9223372036854775738LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = INT64_MAX;
	static int8_t x63 = -1;
	int16_t x64 = -1;
	int32_t t13 = -368;

    t13 = ((x61==x62)+(x63-x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = -13;
	static volatile int8_t x66 = INT8_MIN;
	volatile int16_t x68 = 255;
	volatile uint32_t t14 = 2408U;

    t14 = ((x65==x66)+(x67-x68));

    if (t14 != 4294967280U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x69 = UINT32_MAX;
	uint16_t x72 = 13882U;
	int64_t t15 = -3LL;

    t15 = ((x69==x70)+(x71-x72));

    if (t15 != 9223372036854761925LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x77 = INT8_MIN;
	uint8_t x79 = 0U;
	int32_t x80 = -145;
	int32_t t16 = 418259748;

    t16 = ((x77==x78)+(x79-x80));

    if (t16 != 145) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = INT16_MIN;
	volatile uint8_t x86 = 11U;
	static int16_t x87 = -1;
	int64_t x88 = INT64_MIN;
	int64_t t17 = INT64_MAX;

    t17 = ((x85==x86)+(x87-x88));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = 1;
	static int8_t x91 = -2;
	uint8_t x92 = 29U;
	int32_t t18 = 17038;

    t18 = ((x89==x90)+(x91-x92));

    if (t18 != -31) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x94 = -31;
	int32_t x95 = INT32_MAX;
	volatile int32_t t19 = -1064564244;

    t19 = ((x93==x94)+(x95-x96));

    if (t19 != 2147483639) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MAX;
	uint64_t x99 = 92LLU;
	int8_t x100 = -11;
	volatile uint64_t t20 = 874236501419917LLU;

    t20 = ((x97==x98)+(x99-x100));

    if (t20 != 103LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x101 = INT64_MIN;
	uint16_t x102 = 1161U;
	volatile uint8_t x103 = UINT8_MAX;
	int8_t x104 = -1;
	volatile int32_t t21 = -192;

    t21 = ((x101==x102)+(x103-x104));

    if (t21 != 256) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x105 = 983;
	uint64_t x106 = UINT64_MAX;
	int64_t x107 = INT64_MIN;
	static int8_t x108 = INT8_MIN;
	volatile int64_t t22 = -437LL;

    t22 = ((x105==x106)+(x107-x108));

    if (t22 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = INT32_MIN;
	volatile int64_t x110 = INT64_MIN;
	int16_t x112 = INT16_MIN;
	int64_t t23 = -22786551488763786LL;

    t23 = ((x109==x110)+(x111-x112));

    if (t23 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x113 = INT8_MAX;
	volatile int16_t x114 = -1;
	uint16_t x115 = 4U;
	int16_t x116 = -852;
	volatile int32_t t24 = 120501;

    t24 = ((x113==x114)+(x115-x116));

    if (t24 != 856) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x121 = INT8_MIN;
	uint8_t x122 = 2U;
	static int16_t x123 = -4;
	int8_t x124 = INT8_MIN;
	volatile int32_t t25 = 11;

    t25 = ((x121==x122)+(x123-x124));

    if (t25 != 124) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x129 = INT64_MIN;
	int32_t x131 = INT32_MIN;
	int8_t x132 = -1;
	int32_t t26 = -31;

    t26 = ((x129==x130)+(x131-x132));

    if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x133 = INT8_MIN;
	int32_t x134 = -1;
	uint16_t x136 = UINT16_MAX;
	int32_t t27 = 82906;

    t27 = ((x133==x134)+(x135-x136));

    if (t27 != -65538) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x138 = -155;
	volatile int8_t x139 = INT8_MIN;
	int32_t x140 = -1;

    t28 = ((x137==x138)+(x139-x140));

    if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x142 = 1939206LLU;
	int16_t x143 = 34;
	static uint64_t x144 = 3807362394045097LLU;
	volatile uint64_t t29 = 2291639260554906236LLU;

    t29 = ((x141==x142)+(x143-x144));

    if (t29 != 18442936711315506553LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x145 = INT16_MIN;
	uint16_t x146 = 1870U;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MIN;

    t30 = ((x145==x146)+(x147-x148));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x149 = -1;
	int8_t x150 = -1;
	static volatile uint16_t x151 = 1734U;

    t31 = ((x149==x150)+(x151-x152));

    if (t31 != 18446727358032806730LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x154 = 4;
	volatile int32_t t32 = 3458;

    t32 = ((x153==x154)+(x155-x156));

    if (t32 != 1264) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x157 = 0U;
	volatile uint64_t x158 = 3952966642LLU;
	int16_t x159 = -1;
	uint64_t x160 = UINT64_MAX;

    t33 = ((x157==x158)+(x159-x160));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x161 = -253;
	uint16_t x163 = 10301U;
	volatile int32_t x164 = -673749955;

    t34 = ((x161==x162)+(x163-x164));

    if (t34 != 673760256) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x165 = -1LL;
	int8_t x166 = -3;
	int64_t x168 = INT64_MAX;

    t35 = ((x165==x166)+(x167-x168));

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x173 = 31945152;
	uint8_t x175 = 80U;
	volatile uint32_t x176 = UINT32_MAX;
	uint32_t t36 = 705380938U;

    t36 = ((x173==x174)+(x175-x176));

    if (t36 != 81U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x177 = INT16_MIN;
	uint16_t x178 = UINT16_MAX;
	uint8_t x179 = 63U;

    t37 = ((x177==x178)+(x179-x180));

    if (t37 != -569075058284041LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x182 = 444176288U;
	static uint16_t x183 = 6381U;
	uint16_t x184 = 1476U;
	int32_t t38 = 2;

    t38 = ((x181==x182)+(x183-x184));

    if (t38 != 4905) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x185 = -2;
	int16_t x186 = INT16_MAX;
	uint16_t x187 = 1081U;
	volatile int16_t x188 = INT16_MIN;

    t39 = ((x185==x186)+(x187-x188));

    if (t39 != 33849) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x189 = INT8_MIN;
	volatile int8_t x190 = 0;
	static int16_t x191 = INT16_MAX;
	volatile int16_t x192 = INT16_MIN;

    t40 = ((x189==x190)+(x191-x192));

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x193 = -1;
	int32_t x194 = -1;
	volatile int8_t x195 = INT8_MIN;
	static int8_t x196 = -2;
	static int32_t t41 = 244440013;

    t41 = ((x193==x194)+(x195-x196));

    if (t41 != -125) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x197 = INT8_MIN;
	volatile int32_t x198 = 10;
	int8_t x199 = -1;
	volatile int32_t t42 = INT32_MAX;

    t42 = ((x197==x198)+(x199-x200));

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x201 = -230488;
	int32_t x202 = -1;
	static int8_t x204 = -1;

    t43 = ((x201==x202)+(x203-x204));

    if (t43 != 2571368U) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x205 = 4U;
	int16_t x206 = -1;
	uint32_t x207 = 110651U;
	int32_t x208 = INT32_MAX;
	volatile uint32_t t44 = 5369708U;

    t44 = ((x205==x206)+(x207-x208));

    if (t44 != 2147594300U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x209 = 589LL;
	int32_t x210 = -1;
	static volatile uint16_t x211 = 665U;
	int8_t x212 = 0;
	int32_t t45 = -53;

    t45 = ((x209==x210)+(x211-x212));

    if (t45 != 665) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x213 = INT8_MAX;
	int8_t x214 = -32;
	volatile int16_t x215 = 3205;
	int32_t t46 = 104;

    t46 = ((x213==x214)+(x215-x216));

    if (t46 != 3207) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x217 = -46170LL;
	uint16_t x218 = 14867U;
	uint8_t x219 = 31U;
	static int16_t x220 = INT16_MIN;
	int32_t t47 = 366;

    t47 = ((x217==x218)+(x219-x220));

    if (t47 != 32799) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x221 = -1LL;
	int8_t x222 = -1;
	uint32_t x223 = 316402392U;
	uint32_t x224 = 15943577U;
	uint32_t t48 = 474809U;

    t48 = ((x221==x222)+(x223-x224));

    if (t48 != 300458816U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x225 = UINT16_MAX;
	uint64_t x227 = UINT64_MAX;
	int32_t x228 = 270;

    t49 = ((x225==x226)+(x227-x228));

    if (t49 != 18446744073709551345LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x231 = -1;

    t50 = ((x229==x230)+(x231-x232));

    if (t50 != 4294618161U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x233 = 11U;
	volatile int8_t x234 = -1;
	static uint16_t x236 = 1U;
	int64_t t51 = 28965276LL;

    t51 = ((x233==x234)+(x235-x236));

    if (t51 != -2LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x238 = INT32_MAX;
	int32_t x239 = -73;
	int64_t t52 = -28LL;

    t52 = ((x237==x238)+(x239-x240));

    if (t52 != -72LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x241 = 1051369497045261LL;
	volatile int64_t x242 = INT64_MIN;
	static uint8_t x243 = 0U;
	volatile int32_t x244 = -268122962;
	int32_t t53 = 20386171;

    t53 = ((x241==x242)+(x243-x244));

    if (t53 != 268122962) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x249 = -345;
	int32_t x250 = -7;
	static int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t54 = 191;

    t54 = ((x249==x250)+(x251-x252));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x253 = INT8_MIN;
	static int32_t x254 = 472;
	int64_t x256 = INT64_MAX;
	volatile int64_t t55 = -2LL;

    t55 = ((x253==x254)+(x255-x256));

    if (t55 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x257 = -1;
	uint16_t x258 = 1570U;
	volatile uint64_t x259 = 81129403586988312LLU;
	uint64_t t56 = 12492939985887609LLU;

    t56 = ((x257==x258)+(x259-x260));

    if (t56 != 81129403586988185LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x261 = INT32_MIN;
	uint16_t x262 = UINT16_MAX;
	volatile uint64_t t57 = 438839045LLU;

    t57 = ((x261==x262)+(x263-x264));

    if (t57 != 47209195LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x265 = 390716948351118LL;
	static volatile int64_t x266 = INT64_MIN;
	uint32_t x267 = UINT32_MAX;
	static volatile int64_t x268 = -2258LL;
	int64_t t58 = -101057904924518LL;

    t58 = ((x265==x266)+(x267-x268));

    if (t58 != 4294969553LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x270 = -1;
	int64_t x271 = INT64_MIN;

    t59 = ((x269==x270)+(x271-x272));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x277 = UINT8_MAX;
	int16_t x278 = 365;
	int8_t x279 = -1;
	int8_t x280 = 19;

    t60 = ((x277==x278)+(x279-x280));

    if (t60 != -20) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x281 = -1;
	int16_t x283 = 216;
	int16_t x284 = INT16_MAX;
	int32_t t61 = 3418;

    t61 = ((x281==x282)+(x283-x284));

    if (t61 != -32551) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x285 = INT8_MAX;
	uint64_t x286 = 8374703954LLU;
	int16_t x287 = -4816;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t62 = 246;

    t62 = ((x285==x286)+(x287-x288));

    if (t62 != -4688) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x289 = 3438LLU;
	int8_t x290 = -1;
	int64_t x291 = -1LL;
	volatile int64_t t63 = 812500088821LL;

    t63 = ((x289==x290)+(x291-x292));

    if (t63 != 127LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x301 = -11408;
	int16_t x302 = INT16_MAX;
	static uint16_t x304 = 100U;
	static int64_t t64 = 7289032738125989LL;

    t64 = ((x301==x302)+(x303-x304));

    if (t64 != -101LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x305 = UINT32_MAX;
	uint8_t x306 = 26U;
	static uint64_t x307 = UINT64_MAX;
	uint64_t x308 = 6216335390932400LLU;
	uint64_t t65 = 29654098639LLU;

    t65 = ((x305==x306)+(x307-x308));

    if (t65 != 18440527738318619215LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x309 = 413U;
	uint64_t x311 = 1864224126107LLU;
	uint64_t t66 = 17LLU;

    t66 = ((x309==x310)+(x311-x312));

    if (t66 != 1864224117972LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x313 = INT64_MAX;
	volatile uint64_t x314 = UINT64_MAX;
	volatile int64_t x315 = -1400843988780343LL;
	int64_t x316 = 1687696974879157LL;
	static volatile int64_t t67 = 11LL;

    t67 = ((x313==x314)+(x315-x316));

    if (t67 != -3088540963659500LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x321 = -2517860;
	int64_t x322 = INT64_MIN;
	int16_t x323 = 1;
	int8_t x324 = 45;
	volatile int32_t t68 = 611;

    t68 = ((x321==x322)+(x323-x324));

    if (t68 != -44) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x325 = 32080764208942LL;
	uint64_t x326 = 15291601628LLU;
	int64_t x327 = INT64_MIN;
	uint64_t x328 = 120976133LLU;
	volatile uint64_t t69 = 80520935532332812LLU;

    t69 = ((x325==x326)+(x327-x328));

    if (t69 != 9223372036733799675LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x329 = -1;
	int16_t x330 = -19;
	volatile int16_t x331 = INT16_MIN;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t70 = 4978;

    t70 = ((x329==x330)+(x331-x332));

    if (t70 != -98303) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x333 = INT64_MIN;
	int32_t x334 = INT32_MAX;
	int16_t x335 = -1;
	static int32_t x336 = INT32_MIN;

    t71 = ((x333==x334)+(x335-x336));

    if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x337 = 1U;
	int16_t x339 = -1;
	uint8_t x340 = 63U;

    t72 = ((x337==x338)+(x339-x340));

    if (t72 != -64) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x341 = UINT64_MAX;
	static uint16_t x343 = 1650U;
	volatile uint64_t x344 = 4319135019767518LLU;
	volatile uint64_t t73 = 251LLU;

    t73 = ((x341==x342)+(x343-x344));

    if (t73 != 18442424938689785748LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x345 = INT8_MAX;
	static uint32_t x346 = UINT32_MAX;
	uint8_t x347 = 19U;
	static volatile uint8_t x348 = UINT8_MAX;
	volatile int32_t t74 = 197028;

    t74 = ((x345==x346)+(x347-x348));

    if (t74 != -236) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x351 = UINT8_MAX;
	volatile int64_t x352 = INT64_MAX;

    t75 = ((x349==x350)+(x351-x352));

    if (t75 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x353 = 26U;
	uint16_t x355 = 1104U;
	static int64_t x356 = 229471934206LL;
	volatile int64_t t76 = 3691493LL;

    t76 = ((x353==x354)+(x355-x356));

    if (t76 != -229471933102LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x358 = 305LLU;
	volatile int32_t x359 = 581032472;
	int32_t x360 = -1525394;
	volatile int32_t t77 = -1923585;

    t77 = ((x357==x358)+(x359-x360));

    if (t77 != 582557866) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x361 = -3478514637043LL;
	static volatile uint64_t x362 = 1466272196LLU;
	static int64_t x363 = -1LL;
	uint16_t x364 = 7760U;
	volatile int64_t t78 = -1663072293551037410LL;

    t78 = ((x361==x362)+(x363-x364));

    if (t78 != -7761LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x365 = 8500546870LL;
	int16_t x366 = -1;
	int16_t x367 = 236;
	static volatile int16_t x368 = INT16_MAX;

    t79 = ((x365==x366)+(x367-x368));

    if (t79 != -32531) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x369 = INT32_MAX;
	static int32_t x370 = INT32_MIN;
	int32_t t80 = 516503150;

    t80 = ((x369==x370)+(x371-x372));

    if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x377 = 2;
	int8_t x379 = 4;
	int16_t x380 = -1;
	volatile int32_t t81 = 160;

    t81 = ((x377==x378)+(x379-x380));

    if (t81 != 5) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x383 = INT16_MIN;
	int32_t x384 = -1;
	int32_t t82 = -619;

    t82 = ((x381==x382)+(x383-x384));

    if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x385 = INT16_MAX;
	uint64_t x387 = 9096LLU;
	static int64_t x388 = -1LL;
	static volatile uint64_t t83 = 13803LLU;

    t83 = ((x385==x386)+(x387-x388));

    if (t83 != 9097LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x390 = 12U;
	int8_t x391 = INT8_MAX;
	static int8_t x392 = INT8_MAX;
	int32_t t84 = 26;

    t84 = ((x389==x390)+(x391-x392));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x393 = 401962619065585748LLU;
	int32_t x394 = -1;
	uint32_t t85 = 7434143U;

    t85 = ((x393==x394)+(x395-x396));

    if (t85 != 4294934529U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x397 = 6;
	int16_t x398 = -1;
	uint64_t x399 = UINT64_MAX;
	static volatile uint64_t t86 = 28392124260LLU;

    t86 = ((x397==x398)+(x399-x400));

    if (t86 != 127LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x401 = 50053LLU;
	int8_t x402 = 55;
	volatile uint64_t x403 = 16580859263672LLU;
	int32_t x404 = 1709;

    t87 = ((x401==x402)+(x403-x404));

    if (t87 != 16580859261963LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x405 = INT8_MIN;
	int64_t x406 = INT64_MIN;
	volatile int16_t x407 = INT16_MAX;
	int16_t x408 = -1;
	int32_t t88 = 13;

    t88 = ((x405==x406)+(x407-x408));

    if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x409 = 3662239795090620LLU;
	volatile int64_t x410 = 73014878852LL;
	int16_t x412 = -1;
	volatile int64_t t89 = 6523851074LL;

    t89 = ((x409==x410)+(x411-x412));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x417 = 8597U;
	uint32_t x419 = 8594704U;
	uint32_t x420 = 433U;
	uint32_t t90 = 367U;

    t90 = ((x417==x418)+(x419-x420));

    if (t90 != 8594271U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x425 = -1LL;
	uint32_t x426 = 7610188U;
	static uint16_t x427 = UINT16_MAX;
	static int16_t x428 = -1;

    t91 = ((x425==x426)+(x427-x428));

    if (t91 != 65536) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x430 = INT32_MIN;
	int16_t x432 = INT16_MIN;
	volatile int32_t t92 = -2645;

    t92 = ((x429==x430)+(x431-x432));

    if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x433 = -1;
	int8_t x434 = -1;
	int8_t x435 = -4;
	volatile int64_t x436 = -1LL;
	int64_t t93 = -474850LL;

    t93 = ((x433==x434)+(x435-x436));

    if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x441 = INT32_MIN;
	int32_t x442 = INT32_MAX;

    t94 = ((x441==x442)+(x443-x444));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x445 = INT16_MIN;
	uint8_t x446 = 13U;
	uint64_t x447 = 1692LLU;

    t95 = ((x445==x446)+(x447-x448));

    if (t95 != 1687LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x449 = INT8_MIN;
	int16_t x450 = INT16_MAX;
	uint32_t x451 = 792377U;
	int16_t x452 = INT16_MIN;
	volatile uint32_t t96 = 146355829U;

    t96 = ((x449==x450)+(x451-x452));

    if (t96 != 825145U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x453 = 718784954U;
	int16_t x454 = 1513;
	int8_t x455 = -11;
	static volatile int16_t x456 = INT16_MAX;
	volatile int32_t t97 = -2120736;

    t97 = ((x453==x454)+(x455-x456));

    if (t97 != -32778) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x457 = 382;
	uint16_t x460 = 81U;
	int32_t t98 = -929;

    t98 = ((x457==x458)+(x459-x460));

    if (t98 != 42) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x461 = UINT32_MAX;
	static int32_t x463 = -144;
	int16_t x464 = INT16_MIN;
	static volatile int32_t t99 = 34632875;

    t99 = ((x461==x462)+(x463-x464));

    if (t99 != 32624) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x466 = INT16_MIN;
	int32_t x467 = -100;
	uint16_t x468 = UINT16_MAX;
	int32_t t100 = 7;

    t100 = ((x465==x466)+(x467-x468));

    if (t100 != -65635) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x469 = INT16_MAX;
	uint8_t x470 = UINT8_MAX;
	int64_t x471 = -1LL;
	static uint8_t x472 = 5U;
	int64_t t101 = -7LL;

    t101 = ((x469==x470)+(x471-x472));

    if (t101 != -6LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x473 = -1;
	uint64_t x474 = UINT64_MAX;
	uint64_t x475 = 47LLU;
	int8_t x476 = INT8_MIN;
	volatile uint64_t t102 = 38431351892LLU;

    t102 = ((x473==x474)+(x475-x476));

    if (t102 != 176LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint16_t x477 = UINT16_MAX;
	uint16_t x478 = 7552U;
	int16_t x479 = 10;
	uint64_t x480 = UINT64_MAX;
	static volatile uint64_t t103 = 191591LLU;

    t103 = ((x477==x478)+(x479-x480));

    if (t103 != 11LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x481 = 54U;
	volatile int16_t x482 = -4;
	int32_t x483 = 37313246;
	int16_t x484 = 3;

    t104 = ((x481==x482)+(x483-x484));

    if (t104 != 37313243) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x486 = INT64_MAX;
	volatile int16_t x488 = -1789;
	volatile uint32_t t105 = 3543U;

    t105 = ((x485==x486)+(x487-x488));

    if (t105 != 2014U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x489 = UINT32_MAX;
	int32_t x490 = -7545;
	uint16_t x492 = UINT16_MAX;
	int32_t t106 = 0;

    t106 = ((x489==x490)+(x491-x492));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x495 = 7342128233940235LLU;
	uint32_t x496 = UINT32_MAX;
	uint64_t t107 = 12760949728LLU;

    t107 = ((x493==x494)+(x495-x496));

    if (t107 != 7342123938972940LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint32_t x497 = UINT32_MAX;
	int32_t x498 = INT32_MIN;
	int64_t x499 = -1LL;
	uint64_t x500 = UINT64_MAX;
	uint64_t t108 = 809473LLU;

    t108 = ((x497==x498)+(x499-x500));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint32_t x503 = UINT32_MAX;
	static volatile uint32_t t109 = 21567528U;

    t109 = ((x501==x502)+(x503-x504));

    if (t109 != 4294934528U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x509 = INT16_MIN;
	int8_t x510 = 0;
	static uint8_t x512 = 0U;
	int64_t t110 = INT64_MIN;

    t110 = ((x509==x510)+(x511-x512));

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x513 = 8U;
	uint8_t x514 = UINT8_MAX;
	volatile uint64_t x515 = UINT64_MAX;
	static int32_t x516 = INT32_MIN;
	volatile uint64_t t111 = 348092156LLU;

    t111 = ((x513==x514)+(x515-x516));

    if (t111 != 2147483647LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x517 = INT16_MIN;
	int8_t x518 = INT8_MAX;
	int16_t x519 = 6;
	int8_t x520 = INT8_MAX;
	volatile int32_t t112 = 1;

    t112 = ((x517==x518)+(x519-x520));

    if (t112 != -121) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x521 = 0U;
	uint16_t x522 = 29104U;
	int8_t x524 = INT8_MIN;
	int32_t t113 = -104261;

    t113 = ((x521==x522)+(x523-x524));

    if (t113 != 65663) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x525 = UINT16_MAX;
	int32_t x527 = -1;
	volatile uint32_t t114 = 678354600U;

    t114 = ((x525==x526)+(x527-x528));

    if (t114 != 4294967294U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x529 = 2655;
	static uint8_t x530 = 2U;
	volatile uint16_t x531 = 2U;
	int16_t x532 = INT16_MIN;

    t115 = ((x529==x530)+(x531-x532));

    if (t115 != 32770) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x533 = 345165418;
	static int8_t x534 = INT8_MIN;
	volatile uint16_t x536 = 1624U;
	volatile int32_t t116 = 1546535;

    t116 = ((x533==x534)+(x535-x536));

    if (t116 != 63911) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x537 = INT16_MIN;
	int64_t x538 = INT64_MIN;
	uint64_t x539 = 37243531697379268LLU;
	uint16_t x540 = 7U;
	volatile uint64_t t117 = 3953LLU;

    t117 = ((x537==x538)+(x539-x540));

    if (t117 != 37243531697379261LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x542 = INT16_MIN;
	int16_t x543 = INT16_MIN;

    t118 = ((x541==x542)+(x543-x544));

    if (t118 != -32815) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x545 = UINT32_MAX;
	volatile uint64_t x546 = UINT64_MAX;
	static volatile int64_t x547 = INT64_MIN;
	volatile int64_t x548 = -1LL;

    t119 = ((x545==x546)+(x547-x548));

    if (t119 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x553 = 1U;
	static int32_t x554 = INT32_MAX;
	volatile int16_t x556 = INT16_MIN;
	static int32_t t120 = 83509;

    t120 = ((x553==x554)+(x555-x556));

    if (t120 != 98303) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x557 = 54182765933057537LL;
	uint32_t x558 = 698U;
	static int8_t x560 = 42;
	static volatile int32_t t121 = -218328;

    t121 = ((x557==x558)+(x559-x560));

    if (t121 != 16) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x561 = 65U;
	volatile uint16_t x562 = UINT16_MAX;
	int8_t x564 = 6;
	volatile int32_t t122 = -1857684;

    t122 = ((x561==x562)+(x563-x564));

    if (t122 != -3369) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x565 = INT64_MAX;
	int16_t x566 = INT16_MIN;
	int16_t x567 = -1;
	volatile int16_t x568 = 11;
	int32_t t123 = -1015975;

    t123 = ((x565==x566)+(x567-x568));

    if (t123 != -12) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x569 = UINT16_MAX;
	int32_t x570 = INT32_MIN;
	int32_t x572 = INT32_MIN;
	volatile int32_t t124 = -16614;

    t124 = ((x569==x570)+(x571-x572));

    if (t124 != 2147483520) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x573 = 228U;
	int64_t x574 = INT64_MIN;
	int8_t x575 = 1;
	static int8_t x576 = INT8_MAX;
	int32_t t125 = 671;

    t125 = ((x573==x574)+(x575-x576));

    if (t125 != -126) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x578 = -20497343LL;
	uint16_t x579 = 407U;
	uint16_t x580 = UINT16_MAX;
	int32_t t126 = -1975800;

    t126 = ((x577==x578)+(x579-x580));

    if (t126 != -65128) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x587 = -1LL;
	uint64_t x588 = 29826605183LLU;
	uint64_t t127 = 68914627255847LLU;

    t127 = ((x585==x586)+(x587-x588));

    if (t127 != 18446744043882946432LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x589 = UINT16_MAX;
	int8_t x590 = INT8_MIN;
	uint8_t x591 = UINT8_MAX;
	int8_t x592 = 9;

    t128 = ((x589==x590)+(x591-x592));

    if (t128 != 246) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x593 = -7;
	int32_t x594 = INT32_MIN;
	volatile int8_t x595 = -1;
	static volatile int32_t t129 = -73370590;

    t129 = ((x593==x594)+(x595-x596));

    if (t129 != -487766) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x597 = INT64_MIN;
	static int8_t x598 = 15;
	int32_t x600 = 45121;
	volatile int32_t t130 = 166512;

    t130 = ((x597==x598)+(x599-x600));

    if (t130 != 6185806) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x601 = 3;
	volatile int16_t x602 = -2;
	int32_t x604 = INT32_MIN;

    t131 = ((x601==x602)+(x603-x604));

    if (t131 != 2147483647LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x605 = INT32_MIN;
	static uint16_t x606 = 16002U;
	volatile int8_t x607 = 26;
	uint32_t x608 = 574U;

    t132 = ((x605==x606)+(x607-x608));

    if (t132 != 4294966748U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x613 = -1;
	uint32_t x614 = 537U;
	uint32_t x616 = 60400U;
	uint32_t t133 = 2000U;

    t133 = ((x613==x614)+(x615-x616));

    if (t133 != 4294906896U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x617 = INT8_MIN;
	int16_t x618 = 1;
	uint32_t x619 = 94548556U;
	int32_t x620 = -49;
	volatile uint32_t t134 = 20219566U;

    t134 = ((x617==x618)+(x619-x620));

    if (t134 != 94548605U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x621 = INT64_MIN;
	uint64_t x623 = 33416694483603222LLU;
	int64_t x624 = -1LL;
	static uint64_t t135 = 1965897LLU;

    t135 = ((x621==x622)+(x623-x624));

    if (t135 != 33416694483603223LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x625 = UINT64_MAX;
	int32_t x626 = -1;
	static uint32_t x627 = 18U;
	static volatile int64_t t136 = 161628774378777LL;

    t136 = ((x625==x626)+(x627-x628));

    if (t136 != 20LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x630 = INT8_MAX;
	volatile int8_t x631 = -1;
	volatile int32_t t137 = 0;

    t137 = ((x629==x630)+(x631-x632));

    if (t137 != -230256627) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x633 = INT16_MIN;
	int8_t x634 = INT8_MIN;
	static int8_t x635 = 0;
	uint8_t x636 = 3U;

    t138 = ((x633==x634)+(x635-x636));

    if (t138 != -3) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x637 = 794993586048LL;
	int8_t x638 = INT8_MIN;
	uint8_t x640 = UINT8_MAX;
	int64_t t139 = -51350LL;

    t139 = ((x637==x638)+(x639-x640));

    if (t139 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x642 = -1;
	static volatile int32_t t140 = 25129;

    t140 = ((x641==x642)+(x643-x644));

    if (t140 != 13) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x645 = INT16_MAX;
	uint64_t x646 = 8078LLU;
	uint8_t x647 = UINT8_MAX;
	int64_t x648 = 3LL;
	volatile int64_t t141 = 146568957588228920LL;

    t141 = ((x645==x646)+(x647-x648));

    if (t141 != 252LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x649 = INT64_MAX;
	volatile uint64_t x650 = UINT64_MAX;
	volatile int64_t x651 = 1350283465489749LL;
	static int64_t x652 = INT64_MAX;
	int64_t t142 = 9062217482969797LL;

    t142 = ((x649==x650)+(x651-x652));

    if (t142 != -9222021753389286058LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x653 = UINT16_MAX;
	int32_t x654 = INT32_MAX;
	int32_t x656 = INT32_MIN;

    t143 = ((x653==x654)+(x655-x656));

    if (t143 != 2147483520) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x657 = INT16_MIN;
	volatile int32_t x658 = INT32_MAX;
	static uint8_t x659 = UINT8_MAX;
	volatile uint64_t x660 = UINT64_MAX;

    t144 = ((x657==x658)+(x659-x660));

    if (t144 != 256LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x661 = 1U;
	volatile uint64_t x662 = 14057256863960948LLU;
	int16_t x663 = -1;
	volatile int32_t t145 = 13153;

    t145 = ((x661==x662)+(x663-x664));

    if (t145 != 32767) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x667 = UINT16_MAX;

    t146 = ((x665==x666)+(x667-x668));

    if (t146 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x669 = -1;
	uint64_t x670 = 15LLU;
	static volatile int8_t x671 = INT8_MIN;
	int64_t x672 = INT64_MIN;

    t147 = ((x669==x670)+(x671-x672));

    if (t147 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x673 = INT64_MIN;
	int8_t x674 = INT8_MAX;
	static int8_t x675 = INT8_MAX;
	int8_t x676 = INT8_MAX;
	int32_t t148 = -7315;

    t148 = ((x673==x674)+(x675-x676));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x678 = 62617596;
	uint32_t x679 = 4225U;
	volatile int64_t t149 = -6280LL;

    t149 = ((x677==x678)+(x679-x680));

    if (t149 != 4226LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x685 = -83;
	volatile int8_t x686 = -1;
	int32_t x687 = INT32_MIN;
	int64_t x688 = 336194488589LL;
	int64_t t150 = 16414359461LL;

    t150 = ((x685==x686)+(x687-x688));

    if (t150 != -338341972237LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x697 = 1824015835442802122LLU;
	volatile int8_t x698 = -1;
	int16_t x699 = -455;
	uint16_t x700 = 15044U;
	static int32_t t151 = 80;

    t151 = ((x697==x698)+(x699-x700));

    if (t151 != -15499) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x701 = INT64_MAX;
	int16_t x702 = 1559;
	static uint64_t x703 = 9684212LLU;
	int8_t x704 = -7;
	static volatile uint64_t t152 = 808023472051LLU;

    t152 = ((x701==x702)+(x703-x704));

    if (t152 != 9684219LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x705 = INT64_MAX;
	int32_t x706 = -41634;
	volatile uint64_t x707 = 621493839421LLU;
	static int16_t x708 = INT16_MIN;
	static uint64_t t153 = 1063625955333692LLU;

    t153 = ((x705==x706)+(x707-x708));

    if (t153 != 621493872189LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x709 = INT16_MIN;
	uint64_t x710 = UINT64_MAX;
	volatile int16_t x711 = 970;
	int16_t x712 = -1;
	int32_t t154 = -44;

    t154 = ((x709==x710)+(x711-x712));

    if (t154 != 971) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x713 = 2248U;
	volatile int8_t x714 = 4;
	int16_t x715 = 6;
	int16_t x716 = INT16_MAX;

    t155 = ((x713==x714)+(x715-x716));

    if (t155 != -32761) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x717 = 908LLU;
	int32_t x718 = INT32_MAX;
	static volatile uint16_t x719 = 1U;
	uint8_t x720 = 13U;
	int32_t t156 = -102542839;

    t156 = ((x717==x718)+(x719-x720));

    if (t156 != -12) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x721 = INT64_MIN;
	uint64_t x722 = UINT64_MAX;
	uint16_t x723 = 99U;
	volatile int8_t x724 = INT8_MIN;
	volatile int32_t t157 = -1990041;

    t157 = ((x721==x722)+(x723-x724));

    if (t157 != 227) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x725 = 45875353U;
	volatile int32_t x726 = INT32_MAX;
	static int32_t x727 = INT32_MIN;
	volatile int64_t t158 = -352490081163740LL;

    t158 = ((x725==x726)+(x727-x728));

    if (t158 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x729 = 1;
	int8_t x730 = 0;
	uint16_t x731 = UINT16_MAX;
	int64_t x732 = INT64_MAX;
	int64_t t159 = -1LL;

    t159 = ((x729==x730)+(x731-x732));

    if (t159 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x734 = 23239U;
	static uint8_t x735 = 4U;
	int32_t t160 = 451205473;

    t160 = ((x733==x734)+(x735-x736));

    if (t160 != 5) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x741 = UINT64_MAX;
	static int8_t x742 = INT8_MIN;
	static uint64_t x743 = 14650529LLU;
	volatile uint32_t x744 = 0U;
	volatile uint64_t t161 = 2674184575348LLU;

    t161 = ((x741==x742)+(x743-x744));

    if (t161 != 14650529LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x747 = UINT64_MAX;
	static volatile uint64_t t162 = 10159162500857908LLU;

    t162 = ((x745==x746)+(x747-x748));

    if (t162 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x753 = -1;
	int8_t x754 = INT8_MIN;
	int16_t x755 = INT16_MIN;
	static uint32_t t163 = 1526U;

    t163 = ((x753==x754)+(x755-x756));

    if (t163 != 4294934529U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x757 = UINT16_MAX;
	static uint64_t x758 = 29646328317855948LLU;
	uint8_t x759 = 1U;
	int8_t x760 = INT8_MIN;

    t164 = ((x757==x758)+(x759-x760));

    if (t164 != 129) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x761 = UINT64_MAX;
	uint8_t x762 = 1U;
	static int8_t x763 = 19;
	uint16_t x764 = 249U;
	int32_t t165 = 3470365;

    t165 = ((x761==x762)+(x763-x764));

    if (t165 != -230) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x765 = INT64_MIN;
	static int32_t x766 = INT32_MAX;
	volatile int8_t x767 = -24;
	uint16_t x768 = 83U;
	int32_t t166 = -463;

    t166 = ((x765==x766)+(x767-x768));

    if (t166 != -107) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x773 = INT8_MIN;
	static int64_t x774 = -1LL;
	int32_t x775 = INT32_MAX;
	static uint16_t x776 = UINT16_MAX;
	int32_t t167 = -23315238;

    t167 = ((x773==x774)+(x775-x776));

    if (t167 != 2147418112) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x777 = 68U;
	int64_t x778 = -1LL;
	static int16_t x779 = INT16_MAX;
	volatile int32_t x780 = 1001;
	volatile int32_t t168 = 7686290;

    t168 = ((x777==x778)+(x779-x780));

    if (t168 != 31766) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x786 = INT8_MIN;
	int8_t x787 = -12;
	volatile uint32_t x788 = 588U;
	static volatile uint32_t t169 = 1324573U;

    t169 = ((x785==x786)+(x787-x788));

    if (t169 != 4294966696U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x793 = INT32_MIN;
	int64_t x796 = -1LL;

    t170 = ((x793==x794)+(x795-x796));

    if (t170 != 65536LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x798 = 80U;
	int64_t x800 = -1LL;

    t171 = ((x797==x798)+(x799-x800));

    if (t171 != -19LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x802 = -1LL;
	uint16_t x803 = 93U;
	int32_t x804 = INT32_MAX;
	int32_t t172 = 490;

    t172 = ((x801==x802)+(x803-x804));

    if (t172 != -2147483554) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x807 = INT32_MAX;
	volatile uint16_t x808 = UINT16_MAX;
	int32_t t173 = 1;

    t173 = ((x805==x806)+(x807-x808));

    if (t173 != 2147418112) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x809 = -4001910878955701168LL;
	int8_t x810 = 7;
	int8_t x811 = -1;
	int16_t x812 = INT16_MIN;
	volatile int32_t t174 = 1018;

    t174 = ((x809==x810)+(x811-x812));

    if (t174 != 32767) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x813 = 7;
	int64_t x814 = INT64_MIN;
	int32_t x815 = 94;
	uint8_t x816 = 44U;
	int32_t t175 = 1;

    t175 = ((x813==x814)+(x815-x816));

    if (t175 != 50) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x818 = UINT8_MAX;
	int8_t x819 = INT8_MAX;
	uint32_t x820 = 41U;
	uint32_t t176 = 184203061U;

    t176 = ((x817==x818)+(x819-x820));

    if (t176 != 86U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x821 = -128269513024950771LL;
	int16_t x822 = 14;
	int8_t x823 = INT8_MIN;
	volatile int16_t x824 = INT16_MAX;
	int32_t t177 = 1;

    t177 = ((x821==x822)+(x823-x824));

    if (t177 != -32895) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x825 = 3105;
	uint64_t x827 = 113763LLU;
	uint8_t x828 = 5U;
	uint64_t t178 = 2296083LLU;

    t178 = ((x825==x826)+(x827-x828));

    if (t178 != 113758LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x829 = 3U;
	int16_t x830 = 31;
	static int16_t x831 = -1;
	uint64_t x832 = 13451851254LLU;
	static uint64_t t179 = 2238002329970076240LLU;

    t179 = ((x829==x830)+(x831-x832));

    if (t179 != 18446744060257700361LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint16_t x835 = 465U;
	int8_t x836 = 29;
	static int32_t t180 = -7953;

    t180 = ((x833==x834)+(x835-x836));

    if (t180 != 436) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x837 = INT16_MIN;
	int8_t x838 = 2;
	int64_t x840 = INT64_MIN;
	int64_t t181 = INT64_MAX;

    t181 = ((x837==x838)+(x839-x840));

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x841 = -11;
	volatile int16_t x842 = INT16_MIN;
	static int16_t x843 = -45;
	volatile int32_t t182 = 244048095;

    t182 = ((x841==x842)+(x843-x844));

    if (t182 != -44) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x845 = INT32_MIN;
	volatile int16_t x846 = INT16_MAX;
	volatile int32_t x847 = INT32_MIN;
	int32_t t183 = INT32_MIN;

    t183 = ((x845==x846)+(x847-x848));

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x853 = INT64_MIN;
	int64_t x854 = INT64_MIN;
	uint32_t x856 = UINT32_MAX;
	uint64_t t184 = 10257549392859LLU;

    t184 = ((x853==x854)+(x855-x856));

    if (t184 != 682841331184705825LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x861 = INT64_MIN;
	uint16_t x862 = 4003U;
	uint32_t x863 = 122U;
	uint16_t x864 = 15044U;
	volatile uint32_t t185 = 86463276U;

    t185 = ((x861==x862)+(x863-x864));

    if (t185 != 4294952374U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x869 = 3;
	int16_t x870 = INT16_MAX;
	volatile int64_t x871 = -1LL;
	static int64_t x872 = INT64_MAX;
	int64_t t186 = INT64_MIN;

    t186 = ((x869==x870)+(x871-x872));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x874 = -1;
	int8_t x875 = INT8_MAX;
	int8_t x876 = INT8_MIN;
	volatile int32_t t187 = -11;

    t187 = ((x873==x874)+(x875-x876));

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x877 = 20282502LL;
	static int64_t x878 = 1461963868LL;
	uint32_t x879 = UINT32_MAX;
	int64_t x880 = -1LL;
	int64_t t188 = 37111403314691LL;

    t188 = ((x877==x878)+(x879-x880));

    if (t188 != 4294967296LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x887 = -1;
	int16_t x888 = INT16_MAX;
	int32_t t189 = -1403221;

    t189 = ((x885==x886)+(x887-x888));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x889 = 8612237333221LLU;
	int8_t x890 = INT8_MIN;
	static int32_t t190 = 7236;

    t190 = ((x889==x890)+(x891-x892));

    if (t190 != 32400) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x899 = -38;
	int8_t x900 = INT8_MIN;
	int32_t t191 = -60200013;

    t191 = ((x897==x898)+(x899-x900));

    if (t191 != 90) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x901 = INT16_MIN;
	volatile int64_t x903 = INT64_MIN;
	uint64_t x904 = 2132929593924628LLU;
	uint64_t t192 = 6868926881726LLU;

    t192 = ((x901==x902)+(x903-x904));

    if (t192 != 9221239107260851180LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x906 = 4;
	int64_t x907 = -1LL;
	volatile uint64_t t193 = 2234307670861941676LLU;

    t193 = ((x905==x906)+(x907-x908));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x909 = INT64_MAX;
	static uint64_t x910 = 5341LLU;
	uint8_t x911 = 3U;
	static uint16_t x912 = 3752U;
	int32_t t194 = 4;

    t194 = ((x909==x910)+(x911-x912));

    if (t194 != -3749) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x917 = INT64_MIN;
	int64_t x918 = INT64_MIN;
	int8_t x919 = -55;
	int16_t x920 = INT16_MIN;
	static volatile int32_t t195 = 944;

    t195 = ((x917==x918)+(x919-x920));

    if (t195 != 32714) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x921 = UINT16_MAX;
	uint64_t x924 = 59LLU;
	volatile uint64_t t196 = 630283893LLU;

    t196 = ((x921==x922)+(x923-x924));

    if (t196 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x925 = INT16_MIN;
	uint16_t x928 = UINT16_MAX;
	int32_t t197 = 108868452;

    t197 = ((x925==x926)+(x927-x928));

    if (t197 != -65450) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x929 = UINT8_MAX;
	int64_t x930 = INT64_MIN;
	volatile int32_t t198 = -157432900;

    t198 = ((x929==x930)+(x931-x932));

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x937 = -6939651LL;
	int64_t x938 = -1LL;
	int16_t x939 = INT16_MIN;
	uint16_t x940 = 0U;
	static int32_t t199 = -141;

    t199 = ((x937==x938)+(x939-x940));

    if (t199 != -32768) { NG(); } else { ; }
	
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

