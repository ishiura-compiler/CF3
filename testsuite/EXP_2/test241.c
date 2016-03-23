
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

int8_t x1 = -1;
int16_t x9 = -1;
uint8_t x10 = 0U;
int32_t x13 = -1;
uint64_t x15 = 15791235939369449LLU;
static int16_t x26 = INT16_MAX;
volatile uint16_t x28 = 29922U;
int16_t x58 = INT16_MIN;
static int32_t t8 = -44;
int8_t x65 = INT8_MAX;
int8_t x74 = INT8_MIN;
static uint64_t x81 = 34470189146236516LLU;
int16_t x86 = INT16_MIN;
uint64_t x98 = 47801955LLU;
volatile uint64_t t17 = 375464296560LLU;
uint32_t t18 = 230873230U;
volatile int64_t x114 = INT64_MIN;
int8_t x119 = 15;
int64_t t20 = -4529488068023472LL;
uint8_t x125 = UINT8_MAX;
int8_t x128 = -1;
volatile uint64_t x134 = 4272394972839LLU;
uint8_t x151 = 18U;
static volatile int32_t x157 = INT32_MIN;
int8_t x158 = INT8_MIN;
int64_t x159 = -884364846319160746LL;
int64_t t28 = 9456465LL;
uint16_t x168 = 52U;
uint32_t x169 = UINT32_MAX;
int8_t x172 = INT8_MAX;
volatile int64_t t32 = 138857093519LL;
volatile int32_t x188 = INT32_MIN;
int64_t t34 = 9793374LL;
int32_t x193 = -1;
uint32_t x198 = 7U;
uint32_t t37 = 1797U;
volatile int16_t x202 = INT16_MIN;
static volatile uint32_t t40 = 22938U;
int8_t x222 = -1;
volatile int32_t x224 = INT32_MIN;
volatile int32_t t42 = 33223617;
int16_t x239 = INT16_MIN;
volatile uint64_t t45 = 8LLU;
uint8_t x248 = 0U;
int32_t x266 = -1;
int16_t x267 = INT16_MAX;
int32_t x268 = INT32_MAX;
static uint32_t x272 = 17897U;
volatile uint64_t t49 = 2954067436673974LLU;
uint64_t x275 = 0LLU;
int16_t x278 = INT16_MIN;
static int64_t x280 = -578057747150430161LL;
int32_t x283 = INT32_MIN;
int32_t x286 = INT32_MAX;
static uint64_t t53 = 4LLU;
static uint32_t x292 = 86U;
static uint16_t x297 = UINT16_MAX;
uint32_t x304 = 42589450U;
uint64_t x315 = UINT64_MAX;
uint64_t t57 = 1886510561999310837LLU;
uint64_t x332 = 22536017492LLU;
uint16_t x346 = UINT16_MAX;
static uint16_t x348 = 3167U;
int8_t x365 = INT8_MAX;
uint64_t x366 = 4LLU;
int16_t x369 = 2;
volatile int32_t t70 = -22;
int8_t x392 = 0;
int8_t x393 = INT8_MAX;
uint32_t x394 = 45240816U;
int32_t x400 = INT32_MIN;
volatile int32_t x410 = INT32_MIN;
volatile int8_t x416 = INT8_MIN;
uint32_t x417 = UINT32_MAX;
static uint64_t x419 = 12886635937864772LLU;
int16_t x420 = INT16_MIN;
int64_t x423 = 605934LL;
int32_t x424 = INT32_MAX;
uint16_t x427 = 3U;
volatile int16_t x453 = -1;
volatile uint32_t x456 = 480076996U;
int64_t x461 = -1LL;
int8_t x469 = -1;
uint32_t x476 = UINT32_MAX;
uint16_t x480 = UINT16_MAX;
uint16_t x482 = 746U;
int64_t x486 = INT64_MAX;
volatile uint64_t t93 = 25089863LLU;
int8_t x492 = INT8_MIN;
static uint16_t x502 = UINT16_MAX;
static uint8_t x503 = UINT8_MAX;
int32_t x506 = -996;
int8_t x515 = 0;
volatile int32_t t99 = -238;
int64_t x519 = -1LL;
int64_t t101 = 455474172945917677LL;
volatile int64_t t102 = -4427441LL;
volatile int64_t t103 = 76139244776887929LL;
uint32_t x541 = UINT32_MAX;
uint8_t x546 = 41U;
static int32_t x547 = 82798;
static volatile int8_t x549 = INT8_MIN;
int64_t x555 = 22323844164LL;
int64_t t108 = 15970302368569991LL;
int16_t x558 = 213;
uint64_t x562 = UINT64_MAX;
int64_t x564 = 101566591654LL;
int32_t x565 = 58;
uint8_t x573 = UINT8_MAX;
uint8_t x574 = 8U;
int32_t x578 = INT32_MIN;
volatile uint64_t t113 = 3980422LLU;
uint8_t x582 = 10U;
uint16_t x586 = 68U;
int16_t x587 = INT16_MAX;
int8_t x588 = -1;
int8_t x590 = -4;
volatile uint32_t t116 = 0U;
static uint32_t t117 = 1168U;
int64_t x604 = INT64_MAX;
int32_t x606 = 418591;
int16_t x621 = 6;
int32_t x629 = INT32_MIN;
volatile int32_t t123 = 1;
int8_t x641 = 3;
int64_t x648 = -1LL;
uint64_t x658 = 8387504504219259790LLU;
int64_t x659 = -638798LL;
uint64_t x671 = UINT64_MAX;
int16_t x672 = INT16_MAX;
static int8_t x676 = -1;
uint8_t x692 = 22U;
volatile int64_t x693 = -3417250LL;
static volatile int64_t x694 = INT64_MIN;
int32_t x695 = INT32_MIN;
int64_t t136 = 10928675635778606LL;
volatile uint64_t t137 = 62LLU;
uint16_t x705 = 15U;
uint8_t x706 = UINT8_MAX;
uint8_t x743 = UINT8_MAX;
volatile int64_t x748 = INT64_MIN;
uint32_t x770 = UINT32_MAX;
volatile int64_t t147 = -1LL;
int8_t x788 = -6;
static int32_t x793 = INT32_MIN;
uint32_t x800 = 3U;
static uint64_t x805 = UINT64_MAX;
static int64_t x818 = INT64_MIN;
uint64_t x822 = 17832637189057092LLU;
static int32_t x823 = -1;
int32_t x831 = INT32_MAX;
volatile uint32_t x835 = 102946174U;
int8_t x845 = -2;
int64_t x847 = INT64_MIN;
static volatile uint32_t x878 = 834227751U;
int8_t x887 = INT8_MAX;
int16_t x906 = INT16_MIN;
volatile int64_t x919 = INT64_MAX;
int8_t x920 = 27;
int8_t x923 = INT8_MIN;
static int16_t x924 = -3;
int32_t x926 = INT32_MIN;
int8_t x927 = -1;
volatile uint64_t t175 = UINT64_MAX;
volatile int64_t x932 = -1598644876927LL;
volatile int64_t x941 = 414LL;
int8_t x957 = INT8_MAX;
uint32_t t181 = 80U;
volatile int64_t x963 = INT64_MIN;
static int64_t x969 = -1343653971456LL;
static volatile uint16_t x970 = 747U;
int8_t x972 = 22;
int32_t x975 = -1;
uint16_t x978 = 63U;
volatile uint32_t t185 = 319040U;
static volatile int32_t x994 = INT32_MAX;
int32_t x1007 = INT32_MIN;
static uint64_t x1011 = 729480329LLU;
int8_t x1019 = INT8_MAX;
static int32_t x1021 = INT32_MIN;
int16_t x1022 = 0;
volatile int64_t x1026 = -1LL;
int64_t x1032 = INT64_MIN;
static volatile uint8_t x1035 = UINT8_MAX;
static int32_t x1038 = -1;
uint64_t x1039 = 0LLU;
static uint64_t t196 = 0LLU;
static volatile uint64_t x1053 = 299398046533037LLU;
uint64_t t198 = 324LLU;
int32_t x1058 = -3;
int8_t x1060 = 8;


void f0(void) {
    	uint16_t x2 = UINT16_MAX;
	int64_t x3 = 396622910189771LL;
	int64_t x4 = -1LL;
	int64_t t0 = 25651915822LL;

    t0 = ((x1/(x2-x3))*x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x11 = -1;
	int16_t x12 = INT16_MIN;
	volatile int32_t t1 = 24798335;

    t1 = ((x9/(x10-x11))*x12);

    if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x14 = 128535169108LLU;
	int16_t x16 = INT16_MIN;
	uint64_t t2 = 1809794LLU;

    t2 = ((x13/(x14-x15))*x16);

    if (t2 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x25 = 97U;
	int16_t x27 = -1;
	uint32_t t3 = 1U;

    t3 = ((x25/(x26-x27))*x28);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x37 = 86U;
	int16_t x38 = INT16_MAX;
	static uint32_t x39 = 10U;
	int32_t x40 = INT32_MIN;
	uint32_t t4 = 12U;

    t4 = ((x37/(x38-x39))*x40);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x41 = -10800;
	int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MAX;
	uint32_t x44 = 40U;
	static uint32_t t5 = 53U;

    t5 = ((x41/(x42-x43))*x44);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x49 = -1LL;
	volatile int64_t x50 = -1LL;
	uint32_t x51 = 3231140U;
	uint8_t x52 = UINT8_MAX;
	int64_t t6 = 649211757508293740LL;

    t6 = ((x49/(x50-x51))*x52);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x53 = INT32_MIN;
	static uint8_t x54 = 5U;
	volatile int8_t x55 = 23;
	int64_t x56 = -1LL;
	static int64_t t7 = 16484458LL;

    t7 = ((x53/(x54-x55))*x56);

    if (t7 != -119304647LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x57 = UINT16_MAX;
	uint8_t x59 = 43U;
	int32_t x60 = INT32_MAX;

    t8 = ((x57/(x58-x59))*x60);

    if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x61 = 3;
	int16_t x62 = 4;
	uint64_t x63 = 28498037LLU;
	uint64_t x64 = 275LLU;
	uint64_t t9 = 4385286948171907071LLU;

    t9 = ((x61/(x62-x63))*x64);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x66 = UINT64_MAX;
	volatile int32_t x67 = INT32_MIN;
	static int16_t x68 = INT16_MIN;
	volatile uint64_t t10 = 5264214085482895LLU;

    t10 = ((x65/(x66-x67))*x68);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x73 = 99584726;
	uint32_t x75 = UINT32_MAX;
	volatile uint64_t x76 = 29365539593967425LLU;
	volatile uint64_t t11 = 2LLU;

    t11 = ((x73/(x74-x75))*x76);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MIN;
	volatile uint64_t x79 = UINT64_MAX;
	volatile int16_t x80 = INT16_MIN;
	uint64_t t12 = 2245577LLU;

    t12 = ((x77/(x78-x79))*x80);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x82 = -1;
	static uint16_t x83 = UINT16_MAX;
	static int64_t x84 = INT64_MAX;
	uint64_t t13 = 303326290542255LLU;

    t13 = ((x81/(x82-x83))*x84);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x85 = 8U;
	int8_t x87 = INT8_MIN;
	int32_t x88 = -1;
	static volatile int32_t t14 = -26049;

    t14 = ((x85/(x86-x87))*x88);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x93 = -111853LL;
	int32_t x94 = 1456306;
	uint64_t x95 = 221LLU;
	int8_t x96 = INT8_MIN;
	uint64_t t15 = 631LLU;

    t15 = ((x93/(x94-x95))*x96);

    if (t15 != 18445122476590266240LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x97 = INT16_MIN;
	volatile uint8_t x99 = UINT8_MAX;
	int32_t x100 = -1;
	volatile uint64_t t16 = 1311LLU;

    t16 = ((x97/(x98-x99))*x100);

    if (t16 != 18446743687808128159LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x101 = 667614LLU;
	int16_t x102 = -744;
	static uint8_t x103 = 36U;
	volatile uint32_t x104 = 5U;

    t17 = ((x101/(x102-x103))*x104);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x109 = INT32_MAX;
	static int8_t x110 = -1;
	uint32_t x111 = 7065171U;
	int16_t x112 = -1;

    t18 = ((x109/(x110-x111))*x112);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x113 = 331018130LLU;
	int8_t x115 = -1;
	static uint64_t x116 = 3537915LLU;
	uint64_t t19 = 6229971896613LLU;

    t19 = ((x113/(x114-x115))*x116);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x117 = -1LL;
	int32_t x118 = INT32_MAX;
	int16_t x120 = INT16_MIN;

    t20 = ((x117/(x118-x119))*x120);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x121 = -1;
	static int32_t x122 = -1;
	int32_t x123 = 25786399;
	static int64_t x124 = -628371LL;
	int64_t t21 = -2403555862LL;

    t21 = ((x121/(x122-x123))*x124);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x126 = -1;
	int8_t x127 = INT8_MAX;
	volatile int32_t t22 = -248053;

    t22 = ((x125/(x126-x127))*x128);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x129 = INT32_MIN;
	static uint32_t x130 = 328154108U;
	volatile uint64_t x131 = 27420826LLU;
	int16_t x132 = -12444;
	static uint64_t t23 = 1401080554442LLU;

    t23 = ((x129/(x130-x131))*x132);

    if (t23 != 18445980768492058768LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x133 = 0U;
	volatile uint32_t x135 = UINT32_MAX;
	static uint16_t x136 = 851U;
	uint64_t t24 = 1167626136277803587LLU;

    t24 = ((x133/(x134-x135))*x136);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x137 = 1134702771314LLU;
	int8_t x138 = 3;
	int64_t x139 = -1LL;
	static volatile int8_t x140 = -43;
	uint64_t t25 = 38466134958925347LLU;

    t25 = ((x137/(x138-x139))*x140);

    if (t25 != 18446731875654760012LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x145 = INT64_MIN;
	int32_t x146 = 726386632;
	uint64_t x147 = 1117525897LLU;
	uint8_t x148 = 26U;
	static volatile uint64_t t26 = 159790868LLU;

    t26 = ((x145/(x146-x147))*x148);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x149 = -1LL;
	int8_t x150 = INT8_MIN;
	static int32_t x152 = INT32_MAX;
	volatile int64_t t27 = 267543150039024LL;

    t27 = ((x149/(x150-x151))*x152);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x160 = INT64_MIN;

    t28 = ((x157/(x158-x159))*x160);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x161 = 349388;
	uint32_t x162 = 5U;
	int32_t x163 = -1;
	static int8_t x164 = INT8_MAX;
	static uint32_t t29 = 31U;

    t29 = ((x161/(x162-x163))*x164);

    if (t29 != 7395337U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x165 = 7175606102LLU;
	static int8_t x166 = -1;
	volatile uint16_t x167 = UINT16_MAX;
	static volatile uint64_t t30 = 128998020113882089LLU;

    t30 = ((x165/(x166-x167))*x168);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x170 = 84U;
	int8_t x171 = INT8_MAX;
	static volatile uint32_t t31 = 8894U;

    t31 = ((x169/(x170-x171))*x172);

    if (t31 != 127U) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x173 = INT32_MIN;
	int64_t x174 = -1LL;
	uint8_t x175 = 97U;
	uint16_t x176 = 0U;

    t32 = ((x173/(x174-x175))*x176);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x177 = -9;
	static int64_t x178 = INT64_MIN;
	volatile int64_t x179 = -53618482LL;
	int64_t x180 = -1LL;
	int64_t t33 = 296157653571441LL;

    t33 = ((x177/(x178-x179))*x180);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x185 = 21U;
	int16_t x186 = INT16_MAX;
	int64_t x187 = INT64_MAX;

    t34 = ((x185/(x186-x187))*x188);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x189 = INT32_MAX;
	volatile uint32_t x190 = UINT32_MAX;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = 0U;
	uint32_t t35 = 14U;

    t35 = ((x189/(x190-x191))*x192);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x194 = UINT8_MAX;
	static uint32_t x195 = UINT32_MAX;
	int8_t x196 = 2;
	volatile uint32_t t36 = 175518124U;

    t36 = ((x193/(x194-x195))*x196);

    if (t36 != 33554430U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x197 = 3U;
	int8_t x199 = -1;
	int32_t x200 = 60428;

    t37 = ((x197/(x198-x199))*x200);

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x201 = 14U;
	int8_t x203 = INT8_MIN;
	volatile int16_t x204 = -938;
	volatile int32_t t38 = -33954;

    t38 = ((x201/(x202-x203))*x204);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x209 = INT16_MAX;
	uint64_t x210 = 2825876595LLU;
	uint8_t x211 = 0U;
	volatile int64_t x212 = INT64_MAX;
	static volatile uint64_t t39 = 1808577950921LLU;

    t39 = ((x209/(x210-x211))*x212);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x213 = INT32_MIN;
	volatile int8_t x214 = INT8_MIN;
	uint32_t x215 = 389034967U;
	volatile uint16_t x216 = 9U;

    t40 = ((x213/(x214-x215))*x216);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x217 = -1;
	static volatile int16_t x218 = -1;
	int64_t x219 = INT64_MAX;
	static uint16_t x220 = 18U;
	int64_t t41 = 3LL;

    t41 = ((x217/(x218-x219))*x220);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x221 = UINT8_MAX;
	uint16_t x223 = 391U;

    t42 = ((x221/(x222-x223))*x224);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x225 = 234706;
	int64_t x226 = INT64_MIN;
	int8_t x227 = -1;
	volatile int8_t x228 = INT8_MAX;
	static volatile int64_t t43 = 615135048110498323LL;

    t43 = ((x225/(x226-x227))*x228);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x237 = -1;
	int8_t x238 = -11;
	static uint64_t x240 = 68787846543553794LLU;
	static volatile uint64_t t44 = 554LLU;

    t44 = ((x237/(x238-x239))*x240);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x241 = INT16_MAX;
	int16_t x242 = INT16_MAX;
	volatile uint64_t x243 = UINT64_MAX;
	int64_t x244 = -951967LL;

    t45 = ((x241/(x242-x243))*x244);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x245 = 2281;
	int8_t x246 = INT8_MIN;
	static int32_t x247 = INT32_MIN;
	volatile int32_t t46 = -3;

    t46 = ((x245/(x246-x247))*x248);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x261 = INT32_MIN;
	volatile uint64_t x262 = UINT64_MAX;
	static int64_t x263 = -67529LL;
	volatile uint32_t x264 = 1242807U;
	uint64_t t47 = 261631933015748075LLU;

    t47 = ((x261/(x262-x263))*x264);

    if (t47 != 7458409115856326097LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x265 = INT16_MAX;
	static int32_t t48 = -325;

    t48 = ((x265/(x266-x267))*x268);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x269 = 4768719LLU;
	volatile int32_t x270 = 610972610;
	static int8_t x271 = 31;

    t49 = ((x269/(x270-x271))*x272);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x273 = 381965092427825753LLU;
	int32_t x274 = -161463204;
	volatile uint16_t x276 = 29U;
	uint64_t t50 = 26577LLU;

    t50 = ((x273/(x274-x275))*x276);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x277 = 0U;
	int8_t x279 = 17;
	volatile int64_t t51 = 2168346936612810126LL;

    t51 = ((x277/(x278-x279))*x280);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x281 = INT32_MIN;
	static int64_t x282 = 121296621LL;
	int64_t x284 = -2655442054741LL;
	static volatile int64_t t52 = 1565073LL;

    t52 = ((x281/(x282-x283))*x284);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x285 = INT8_MIN;
	uint64_t x287 = 120425284842LLU;
	int16_t x288 = INT16_MAX;

    t53 = ((x285/(x286-x287))*x288);

    if (t53 != 32767LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x289 = INT32_MIN;
	uint32_t x290 = UINT32_MAX;
	int32_t x291 = INT32_MAX;
	volatile uint32_t t54 = 3266014U;

    t54 = ((x289/(x290-x291))*x292);

    if (t54 != 86U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x298 = -30;
	uint64_t x299 = 23403998175LLU;
	int16_t x300 = INT16_MAX;
	static uint64_t t55 = 10LLU;

    t55 = ((x297/(x298-x299))*x300);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x301 = UINT64_MAX;
	uint64_t x302 = UINT64_MAX;
	int8_t x303 = 1;
	volatile uint64_t t56 = 28931404846647LLU;

    t56 = ((x301/(x302-x303))*x304);

    if (t56 != 42589450LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x313 = 10032075LL;
	int16_t x314 = -4;
	int32_t x316 = INT32_MIN;

    t57 = ((x313/(x314-x315))*x316);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x317 = 242481305U;
	uint32_t x318 = 1140678U;
	static uint64_t x319 = 233931458835LLU;
	int32_t x320 = INT32_MAX;
	static volatile uint64_t t58 = 6220320LLU;

    t58 = ((x317/(x318-x319))*x320);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x321 = UINT64_MAX;
	volatile int32_t x322 = -1;
	int16_t x323 = INT16_MIN;
	static volatile int64_t x324 = INT64_MIN;
	volatile uint64_t t59 = 3LLU;

    t59 = ((x321/(x322-x323))*x324);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x325 = UINT8_MAX;
	static uint16_t x326 = 3001U;
	volatile int16_t x327 = -3;
	int64_t x328 = -41125LL;
	static int64_t t60 = 4454977929512488LL;

    t60 = ((x325/(x326-x327))*x328);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x329 = -1;
	uint32_t x330 = 894329U;
	int16_t x331 = 1;
	volatile uint64_t t61 = 37641320784377LLU;

    t61 = ((x329/(x330-x331))*x332);

    if (t61 != 108217955996584LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x337 = -1;
	static int32_t x338 = INT32_MIN;
	volatile int8_t x339 = -1;
	int32_t x340 = INT32_MIN;
	volatile int32_t t62 = 25455008;

    t62 = ((x337/(x338-x339))*x340);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x341 = UINT16_MAX;
	int32_t x342 = 806869366;
	static int8_t x343 = INT8_MAX;
	uint32_t x344 = 57U;
	uint32_t t63 = 538249328U;

    t63 = ((x341/(x342-x343))*x344);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x345 = -1LL;
	volatile uint32_t x347 = 1923U;
	int64_t t64 = -1652687279645495634LL;

    t64 = ((x345/(x346-x347))*x348);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x349 = -1;
	int32_t x350 = -9;
	int64_t x351 = INT64_MIN;
	volatile int32_t x352 = 31499748;
	int64_t t65 = -2632385495831815LL;

    t65 = ((x349/(x350-x351))*x352);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x357 = 9U;
	volatile int64_t x358 = -4264312238597LL;
	uint32_t x359 = 70541U;
	static int8_t x360 = -1;
	static volatile int64_t t66 = -3146168LL;

    t66 = ((x357/(x358-x359))*x360);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x367 = INT64_MIN;
	int32_t x368 = -1;
	uint64_t t67 = 125183LLU;

    t67 = ((x365/(x366-x367))*x368);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x370 = 368U;
	int8_t x371 = -1;
	volatile uint16_t x372 = 22U;
	int32_t t68 = 480507;

    t68 = ((x369/(x370-x371))*x372);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x373 = 0U;
	int8_t x374 = 0;
	int8_t x375 = -1;
	uint64_t x376 = 181712471531801LLU;
	uint64_t t69 = 8651606742304939465LLU;

    t69 = ((x373/(x374-x375))*x376);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x377 = 629;
	uint16_t x378 = 8650U;
	volatile uint16_t x379 = 21274U;
	volatile int16_t x380 = INT16_MIN;

    t70 = ((x377/(x378-x379))*x380);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	static uint16_t x386 = UINT16_MAX;
	uint8_t x387 = UINT8_MAX;
	uint32_t x388 = 29175U;
	volatile uint32_t t71 = 18969U;

    t71 = ((x385/(x386-x387))*x388);

    if (t71 != 29175U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	int64_t x391 = -676379432259830988LL;
	volatile int64_t t72 = 87753886472430975LL;

    t72 = ((x389/(x390-x391))*x392);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x395 = INT32_MIN;
	int32_t x396 = -1;
	uint32_t t73 = 2U;

    t73 = ((x393/(x394-x395))*x396);

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x397 = -1;
	int32_t x398 = 25;
	volatile uint32_t x399 = 5001U;
	uint32_t t74 = 687U;

    t74 = ((x397/(x398-x399))*x400);

    if (t74 != 2147483648U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x401 = INT32_MIN;
	int64_t x402 = INT64_MIN;
	static volatile int8_t x403 = INT8_MIN;
	uint32_t x404 = UINT32_MAX;
	int64_t t75 = 379LL;

    t75 = ((x401/(x402-x403))*x404);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x409 = INT16_MIN;
	int8_t x411 = INT8_MIN;
	uint8_t x412 = 125U;
	volatile int32_t t76 = -1;

    t76 = ((x409/(x410-x411))*x412);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x413 = INT8_MAX;
	int32_t x414 = INT32_MIN;
	int32_t x415 = 0;
	static int32_t t77 = 11163;

    t77 = ((x413/(x414-x415))*x416);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x418 = 4393765804538236749LLU;
	uint64_t t78 = 106701538179LLU;

    t78 = ((x417/(x418-x419))*x420);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x421 = UINT32_MAX;
	uint64_t x422 = UINT64_MAX;
	uint64_t t79 = 6LLU;

    t79 = ((x421/(x422-x423))*x424);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x425 = -7;
	static uint16_t x426 = 14445U;
	static volatile uint16_t x428 = UINT16_MAX;
	int32_t t80 = -224620199;

    t80 = ((x425/(x426-x427))*x428);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x433 = -1LL;
	int16_t x434 = INT16_MAX;
	uint8_t x435 = 2U;
	int32_t x436 = 643435883;
	int64_t t81 = 1092537978LL;

    t81 = ((x433/(x434-x435))*x436);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	volatile uint64_t x438 = 16614LLU;
	int32_t x439 = INT32_MIN;
	uint16_t x440 = UINT16_MAX;
	uint64_t t82 = 8252LLU;

    t82 = ((x437/(x438-x439))*x440);

    if (t82 != 562937008292760LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x441 = 1U;
	uint64_t x442 = UINT64_MAX;
	static int8_t x443 = INT8_MIN;
	int16_t x444 = -1;
	static volatile uint64_t t83 = 1599378614LLU;

    t83 = ((x441/(x442-x443))*x444);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x445 = UINT16_MAX;
	volatile int16_t x446 = -54;
	int8_t x447 = INT8_MIN;
	uint64_t x448 = 70713059LLU;
	volatile uint64_t t84 = 99958252713LLU;

    t84 = ((x445/(x446-x447))*x448);

    if (t84 != 62581057215LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x449 = 1U;
	int8_t x450 = 1;
	uint16_t x451 = 31U;
	int32_t x452 = 8290704;
	int32_t t85 = 757;

    t85 = ((x449/(x450-x451))*x452);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x454 = 3U;
	uint64_t x455 = 144002463LLU;
	volatile uint64_t t86 = 1LLU;

    t86 = ((x453/(x454-x455))*x456);

    if (t86 != 480076996LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x462 = -33;
	static volatile uint16_t x463 = 1U;
	uint16_t x464 = 137U;
	int64_t t87 = 217766399664409699LL;

    t87 = ((x461/(x462-x463))*x464);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x465 = 51U;
	int8_t x466 = -1;
	int16_t x467 = INT16_MIN;
	int16_t x468 = -27;
	int32_t t88 = -971866;

    t88 = ((x465/(x466-x467))*x468);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x470 = -1;
	static uint8_t x471 = 0U;
	uint16_t x472 = 4021U;
	int32_t t89 = 14868429;

    t89 = ((x469/(x470-x471))*x472);

    if (t89 != 4021) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x473 = UINT64_MAX;
	static int64_t x474 = INT64_MIN;
	int16_t x475 = -1;
	volatile uint64_t t90 = 538986LLU;

    t90 = ((x473/(x474-x475))*x476);

    if (t90 != 4294967295LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x477 = INT32_MIN;
	int64_t x478 = -1LL;
	uint32_t x479 = 16526527U;
	int64_t t91 = 3133315465LL;

    t91 = ((x477/(x478-x479))*x480);

    if (t91 != 8454015LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x481 = INT16_MIN;
	volatile uint32_t x483 = 5074881U;
	uint16_t x484 = UINT16_MAX;
	uint32_t t92 = 443368U;

    t92 = ((x481/(x482-x483))*x484);

    if (t92 != 65535U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x485 = INT64_MIN;
	uint8_t x487 = 62U;
	uint64_t x488 = 2008611553341LLU;

    t93 = ((x485/(x486-x487))*x488);

    if (t93 != 18446742065097998275LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MIN;
	volatile int64_t x491 = -5006LL;
	volatile int64_t t94 = -236903602205162689LL;

    t94 = ((x489/(x490-x491))*x492);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x493 = INT16_MAX;
	static int8_t x494 = 20;
	static uint32_t x495 = 35863U;
	int8_t x496 = INT8_MIN;
	static uint32_t t95 = 70U;

    t95 = ((x493/(x494-x495))*x496);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x497 = INT16_MIN;
	volatile int8_t x498 = -1;
	static int8_t x499 = -2;
	uint32_t x500 = UINT32_MAX;
	static volatile uint32_t t96 = 5U;

    t96 = ((x497/(x498-x499))*x500);

    if (t96 != 32768U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x501 = 6U;
	uint16_t x504 = 255U;
	static int32_t t97 = -19;

    t97 = ((x501/(x502-x503))*x504);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x505 = INT16_MIN;
	uint64_t x507 = UINT64_MAX;
	int8_t x508 = -14;
	uint64_t t98 = 28149446789424LLU;

    t98 = ((x505/(x506-x507))*x508);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x513 = INT8_MIN;
	int16_t x514 = INT16_MIN;
	uint8_t x516 = 1U;

    t99 = ((x513/(x514-x515))*x516);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x517 = INT32_MAX;
	static volatile int16_t x518 = INT16_MIN;
	uint64_t x520 = UINT64_MAX;
	uint64_t t100 = 12174LLU;

    t100 = ((x517/(x518-x519))*x520);

    if (t100 != 65538LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x521 = 1;
	int64_t x522 = INT64_MIN;
	static volatile int64_t x523 = -1LL;
	volatile int8_t x524 = 52;

    t101 = ((x521/(x522-x523))*x524);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x525 = -1;
	static int8_t x526 = INT8_MIN;
	volatile uint32_t x527 = 46963559U;
	static int64_t x528 = 5661LL;

    t102 = ((x525/(x526-x527))*x528);

    if (t102 != 5661LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x529 = -1LL;
	volatile int16_t x530 = -1;
	int16_t x531 = INT16_MIN;
	volatile int64_t x532 = 355953LL;

    t103 = ((x529/(x530-x531))*x532);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x533 = 0;
	int32_t x534 = -1;
	static int32_t x535 = 3;
	uint64_t x536 = UINT64_MAX;
	uint64_t t104 = 50168707LLU;

    t104 = ((x533/(x534-x535))*x536);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x542 = 7U;
	int16_t x543 = -1;
	uint64_t x544 = 6004461017887745LLU;
	volatile uint64_t t105 = 8027214577929LLU;

    t105 = ((x541/(x542-x543))*x544);

    if (t105 != 15036368489389886463LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x545 = INT64_MIN;
	volatile uint64_t x548 = 7103LLU;
	volatile uint64_t t106 = 10572LLU;

    t106 = ((x545/(x546-x547))*x548);

    if (t106 != 791638309481724889LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x550 = 1;
	int8_t x551 = INT8_MAX;
	static volatile uint16_t x552 = UINT16_MAX;
	int32_t t107 = -31736;

    t107 = ((x549/(x550-x551))*x552);

    if (t107 != 65535) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x553 = UINT8_MAX;
	int8_t x554 = INT8_MAX;
	volatile int64_t x556 = INT64_MAX;

    t108 = ((x553/(x554-x555))*x556);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x557 = UINT64_MAX;
	static int8_t x559 = 0;
	int32_t x560 = -1;
	volatile uint64_t t109 = 3154LLU;

    t109 = ((x557/(x558-x559))*x560);

    if (t109 != 18360139641438614754LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x561 = -1;
	volatile int64_t x563 = 3956349LL;
	uint64_t t110 = 1600859239590LLU;

    t110 = ((x561/(x562-x563))*x564);

    if (t110 != 101566591654LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x566 = UINT32_MAX;
	uint8_t x567 = 1U;
	volatile uint64_t x568 = UINT64_MAX;
	uint64_t t111 = 5922023334LLU;

    t111 = ((x565/(x566-x567))*x568);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x575 = INT8_MAX;
	uint8_t x576 = 0U;
	static volatile int32_t t112 = 216905494;

    t112 = ((x573/(x574-x575))*x576);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x577 = UINT64_MAX;
	int64_t x579 = INT64_MIN;
	static volatile int64_t x580 = INT64_MIN;

    t113 = ((x577/(x578-x579))*x580);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x581 = INT16_MIN;
	int16_t x583 = INT16_MIN;
	int64_t x584 = INT64_MIN;
	int64_t t114 = 384893754499631590LL;

    t114 = ((x581/(x582-x583))*x584);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x585 = 30;
	int32_t t115 = -655;

    t115 = ((x585/(x586-x587))*x588);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x589 = INT8_MIN;
	static uint8_t x591 = 0U;
	uint32_t x592 = 203U;

    t116 = ((x589/(x590-x591))*x592);

    if (t116 != 6496U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x597 = 5U;
	volatile uint32_t x598 = 6U;
	volatile int8_t x599 = INT8_MIN;
	uint32_t x600 = UINT32_MAX;

    t117 = ((x597/(x598-x599))*x600);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x601 = INT8_MIN;
	int16_t x602 = -1;
	int16_t x603 = 266;
	volatile int64_t t118 = 166769667589LL;

    t118 = ((x601/(x602-x603))*x604);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x605 = INT16_MIN;
	int16_t x607 = -1;
	int32_t x608 = -1;
	int32_t t119 = -3757;

    t119 = ((x605/(x606-x607))*x608);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x609 = 56LLU;
	int8_t x610 = INT8_MIN;
	uint64_t x611 = 22LLU;
	static int16_t x612 = INT16_MIN;
	volatile uint64_t t120 = 396170LLU;

    t120 = ((x609/(x610-x611))*x612);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x613 = 3U;
	volatile int8_t x614 = INT8_MIN;
	int16_t x615 = INT16_MIN;
	static volatile int16_t x616 = -1;
	static volatile int32_t t121 = -104074;

    t121 = ((x613/(x614-x615))*x616);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x622 = INT32_MAX;
	volatile uint32_t x623 = 627U;
	static int64_t x624 = INT64_MIN;
	int64_t t122 = -1121911665350026LL;

    t122 = ((x621/(x622-x623))*x624);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x630 = 0;
	int8_t x631 = INT8_MIN;
	volatile int32_t x632 = -1;

    t123 = ((x629/(x630-x631))*x632);

    if (t123 != 16777216) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x633 = 2;
	volatile int64_t x634 = -1LL;
	int64_t x635 = 240161100LL;
	int16_t x636 = -1;
	volatile int64_t t124 = 4LL;

    t124 = ((x633/(x634-x635))*x636);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x642 = 12U;
	uint64_t x643 = 6LLU;
	volatile int32_t x644 = INT32_MAX;
	uint64_t t125 = 3LLU;

    t125 = ((x641/(x642-x643))*x644);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x645 = 3679U;
	uint16_t x646 = 129U;
	static int16_t x647 = 2;
	int64_t t126 = 19LL;

    t126 = ((x645/(x646-x647))*x648);

    if (t126 != -28LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x649 = 391728LLU;
	uint16_t x650 = UINT16_MAX;
	uint8_t x651 = 8U;
	int32_t x652 = 130763975;
	volatile uint64_t t127 = 11LLU;

    t127 = ((x649/(x650-x651))*x652);

    if (t127 != 653819875LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x653 = 515338659U;
	static int64_t x654 = -1LL;
	int64_t x655 = -204694977463LL;
	int16_t x656 = INT16_MIN;
	volatile int64_t t128 = -1325711898750LL;

    t128 = ((x653/(x654-x655))*x656);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x657 = -23418931619LL;
	volatile int32_t x660 = -62;
	uint64_t t129 = 1590433850766806LLU;

    t129 = ((x657/(x658-x659))*x660);

    if (t129 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x661 = 98417LLU;
	static int16_t x662 = INT16_MIN;
	uint32_t x663 = 60975630U;
	int64_t x664 = INT64_MIN;
	uint64_t t130 = 127344286LLU;

    t130 = ((x661/(x662-x663))*x664);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x669 = 2159;
	int32_t x670 = INT32_MIN;
	static uint64_t t131 = 6933850470300485LLU;

    t131 = ((x669/(x670-x671))*x672);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x673 = 265U;
	volatile int64_t x674 = 462282221055789LL;
	int16_t x675 = 7;
	volatile int64_t t132 = -1387223LL;

    t132 = ((x673/(x674-x675))*x676);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x677 = 7U;
	int64_t x678 = 1028577531LL;
	uint32_t x679 = 4U;
	int64_t x680 = -3333281653184894LL;
	volatile int64_t t133 = -1LL;

    t133 = ((x677/(x678-x679))*x680);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x685 = 511276666LLU;
	int32_t x686 = 16309;
	int64_t x687 = -1LL;
	int8_t x688 = -24;
	volatile uint64_t t134 = 3960464298526LLU;

    t134 = ((x685/(x686-x687))*x688);

    if (t134 != 18446744073708799288LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x689 = -6;
	int16_t x690 = 169;
	int32_t x691 = -4550931;
	volatile int32_t t135 = -360282840;

    t135 = ((x689/(x690-x691))*x692);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x696 = INT64_MIN;

    t136 = ((x693/(x694-x695))*x696);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x697 = -1LL;
	int8_t x698 = INT8_MIN;
	uint8_t x699 = 1U;
	uint64_t x700 = 194LLU;

    t137 = ((x697/(x698-x699))*x700);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x701 = 1;
	int8_t x702 = INT8_MAX;
	int16_t x703 = -1;
	uint16_t x704 = 1U;
	int32_t t138 = 3724907;

    t138 = ((x701/(x702-x703))*x704);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x707 = -1;
	static int32_t x708 = -1;
	int32_t t139 = 1129;

    t139 = ((x705/(x706-x707))*x708);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x709 = 3112;
	volatile uint32_t x710 = 119944U;
	uint8_t x711 = 3U;
	volatile int16_t x712 = -25;
	volatile uint32_t t140 = 67U;

    t140 = ((x709/(x710-x711))*x712);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint8_t x721 = 31U;
	static int8_t x722 = 1;
	uint64_t x723 = UINT64_MAX;
	static volatile int8_t x724 = 18;
	uint64_t t141 = 2521LLU;

    t141 = ((x721/(x722-x723))*x724);

    if (t141 != 270LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x741 = 3878U;
	volatile uint64_t x742 = 253029253956306806LLU;
	int32_t x744 = INT32_MAX;
	volatile uint64_t t142 = 3332804279666LLU;

    t142 = ((x741/(x742-x743))*x744);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x745 = UINT64_MAX;
	uint32_t x746 = UINT32_MAX;
	volatile int8_t x747 = 0;
	uint64_t t143 = 36344731867364908LLU;

    t143 = ((x745/(x746-x747))*x748);

    if (t143 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x757 = INT16_MIN;
	uint32_t x758 = UINT32_MAX;
	int16_t x759 = 17;
	uint16_t x760 = 30526U;
	volatile uint32_t t144 = 21689U;

    t144 = ((x757/(x758-x759))*x760);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x761 = 3;
	int16_t x762 = INT16_MAX;
	int16_t x763 = -1;
	int8_t x764 = -3;
	static int32_t t145 = 480;

    t145 = ((x761/(x762-x763))*x764);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x765 = 4816090554289LLU;
	int16_t x766 = INT16_MAX;
	int16_t x767 = -1;
	int64_t x768 = -1LL;
	volatile uint64_t t146 = 224099069LLU;

    t146 = ((x765/(x766-x767))*x768);

    if (t146 != 18446744073562576197LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x769 = -8407813;
	volatile int64_t x771 = -1LL;
	static int8_t x772 = -1;

    t147 = ((x769/(x770-x771))*x772);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x785 = 1;
	int64_t x786 = INT64_MIN;
	int8_t x787 = -1;
	volatile int64_t t148 = -3655749640905290LL;

    t148 = ((x785/(x786-x787))*x788);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x789 = -1;
	uint32_t x790 = UINT32_MAX;
	uint8_t x791 = 27U;
	static int8_t x792 = INT8_MIN;
	volatile uint32_t t149 = 8U;

    t149 = ((x789/(x790-x791))*x792);

    if (t149 != 4294967168U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x794 = -562;
	volatile int64_t x795 = INT64_MIN;
	int32_t x796 = INT32_MIN;
	int64_t t150 = 722607966LL;

    t150 = ((x793/(x794-x795))*x796);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x797 = 15U;
	int16_t x798 = INT16_MIN;
	volatile uint32_t x799 = 1345190U;
	uint32_t t151 = 1210130U;

    t151 = ((x797/(x798-x799))*x800);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x801 = 1;
	int8_t x802 = 6;
	volatile int8_t x803 = INT8_MAX;
	int16_t x804 = -1;
	int32_t t152 = 202;

    t152 = ((x801/(x802-x803))*x804);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x806 = 195394203110891538LLU;
	volatile uint32_t x807 = 20983U;
	volatile int32_t x808 = INT32_MIN;
	uint64_t t153 = 4LLU;

    t153 = ((x805/(x806-x807))*x808);

    if (t153 != 18446743871846088704LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x809 = INT64_MIN;
	volatile int16_t x810 = INT16_MAX;
	volatile uint16_t x811 = 2047U;
	int8_t x812 = -1;
	volatile int64_t t154 = -61639LL;

    t154 = ((x809/(x810-x811))*x812);

    if (t154 != 300239975158033LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x813 = 8868;
	int32_t x814 = -12166;
	static volatile int16_t x815 = -2;
	int16_t x816 = 7;
	int32_t t155 = -133672;

    t155 = ((x813/(x814-x815))*x816);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x817 = UINT32_MAX;
	static int16_t x819 = -1;
	int32_t x820 = -1;
	volatile int64_t t156 = -477263924464LL;

    t156 = ((x817/(x818-x819))*x820);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x821 = -1;
	int32_t x824 = INT32_MAX;
	volatile uint64_t t157 = 342313690548839697LLU;

    t157 = ((x821/(x822-x823))*x824);

    if (t157 != 2220498090998LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x829 = INT64_MIN;
	static uint64_t x830 = 1041445809LLU;
	uint16_t x832 = UINT16_MAX;
	volatile uint64_t t158 = 925809990LLU;

    t158 = ((x829/(x830-x831))*x832);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x833 = 53U;
	uint32_t x834 = 14178U;
	uint16_t x836 = UINT16_MAX;
	volatile uint32_t t159 = 12U;

    t159 = ((x833/(x834-x835))*x836);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x846 = INT8_MIN;
	uint8_t x848 = 4U;
	int64_t t160 = -15249081932717LL;

    t160 = ((x845/(x846-x847))*x848);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x853 = INT64_MIN;
	static int32_t x854 = INT32_MAX;
	static uint32_t x855 = 107U;
	static uint16_t x856 = 11023U;
	volatile int64_t t161 = -1532LL;

    t161 = ((x853/(x854-x855))*x856);

    if (t161 != -47343426884776LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x857 = 0U;
	int16_t x858 = INT16_MIN;
	volatile int64_t x859 = INT64_MIN;
	int16_t x860 = 1013;
	int64_t t162 = 1275695503550LL;

    t162 = ((x857/(x858-x859))*x860);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x861 = 1U;
	uint64_t x862 = 4744LLU;
	uint16_t x863 = 1752U;
	int32_t x864 = INT32_MIN;
	volatile uint64_t t163 = 5640752018380145456LLU;

    t163 = ((x861/(x862-x863))*x864);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x865 = 6;
	uint8_t x866 = 3U;
	int32_t x867 = -1;
	static volatile uint8_t x868 = UINT8_MAX;
	static volatile int32_t t164 = -15756798;

    t164 = ((x865/(x866-x867))*x868);

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x869 = UINT16_MAX;
	static int64_t x870 = -14355726LL;
	volatile uint16_t x871 = UINT16_MAX;
	static volatile uint32_t x872 = 1404U;
	volatile int64_t t165 = 498609994698LL;

    t165 = ((x869/(x870-x871))*x872);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x873 = INT8_MIN;
	static volatile int32_t x874 = INT32_MAX;
	uint8_t x875 = 15U;
	volatile int32_t x876 = INT32_MAX;
	int32_t t166 = -19468;

    t166 = ((x873/(x874-x875))*x876);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x877 = -1;
	volatile int8_t x879 = INT8_MAX;
	uint64_t x880 = 7549LLU;
	volatile uint64_t t167 = 15876606641LLU;

    t167 = ((x877/(x878-x879))*x880);

    if (t167 != 37745LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x881 = INT32_MIN;
	int32_t x882 = 0;
	uint32_t x883 = UINT32_MAX;
	uint32_t x884 = UINT32_MAX;
	volatile uint32_t t168 = 99039U;

    t168 = ((x881/(x882-x883))*x884);

    if (t168 != 2147483648U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x885 = INT32_MIN;
	int16_t x886 = INT16_MIN;
	uint32_t x888 = 9160U;
	static volatile uint32_t t169 = 29U;

    t169 = ((x885/(x886-x887))*x888);

    if (t169 != 597983120U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x889 = INT64_MIN;
	int16_t x890 = 128;
	static volatile int32_t x891 = 6351;
	volatile int16_t x892 = -655;
	volatile int64_t t170 = -2LL;

    t170 = ((x889/(x890-x891))*x892);

    if (t170 != -970803259543608895LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x905 = -8233;
	int32_t x907 = INT32_MIN;
	uint8_t x908 = UINT8_MAX;
	int32_t t171 = -820825;

    t171 = ((x905/(x906-x907))*x908);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x909 = INT16_MIN;
	volatile int32_t x910 = INT32_MAX;
	uint16_t x911 = 1U;
	static uint16_t x912 = 5698U;
	static volatile int32_t t172 = -31308;

    t172 = ((x909/(x910-x911))*x912);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x917 = UINT16_MAX;
	uint16_t x918 = 0U;
	int64_t t173 = -22LL;

    t173 = ((x917/(x918-x919))*x920);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x921 = INT32_MIN;
	volatile int64_t x922 = -1LL;
	volatile int64_t t174 = 50LL;

    t174 = ((x921/(x922-x923))*x924);

    if (t174 != 50727960LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x925 = UINT32_MAX;
	static uint64_t x928 = UINT64_MAX;

    t175 = ((x925/(x926-x927))*x928);

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x929 = -9082;
	volatile uint16_t x930 = 3U;
	int16_t x931 = INT16_MAX;
	int64_t t176 = 11275427629359LL;

    t176 = ((x929/(x930-x931))*x932);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x937 = -1;
	int64_t x938 = INT64_MIN;
	volatile int8_t x939 = -6;
	volatile int64_t x940 = 96577216364547608LL;
	int64_t t177 = -1964667771707153LL;

    t177 = ((x937/(x938-x939))*x940);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x942 = INT32_MIN;
	int8_t x943 = INT8_MIN;
	static volatile int64_t x944 = INT64_MAX;
	volatile int64_t t178 = -631144LL;

    t178 = ((x941/(x942-x943))*x944);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x945 = -2LL;
	uint32_t x946 = 2805U;
	uint8_t x947 = 46U;
	int64_t x948 = 5LL;
	static volatile int64_t t179 = -14912LL;

    t179 = ((x945/(x946-x947))*x948);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x949 = INT8_MAX;
	static uint64_t x950 = 195534149962LLU;
	uint16_t x951 = 1702U;
	static uint16_t x952 = 25U;
	static volatile uint64_t t180 = 8557LLU;

    t180 = ((x949/(x950-x951))*x952);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x958 = -435789;
	static volatile uint8_t x959 = 0U;
	uint32_t x960 = UINT32_MAX;

    t181 = ((x957/(x958-x959))*x960);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x961 = -1LL;
	volatile int16_t x962 = INT16_MIN;
	int16_t x964 = -404;
	volatile int64_t t182 = -224797LL;

    t182 = ((x961/(x962-x963))*x964);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x971 = -25;
	int64_t t183 = 55332173282LL;

    t183 = ((x969/(x970-x971))*x972);

    if (t183 != -38290657196LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x973 = -7;
	volatile int32_t x974 = INT32_MIN;
	volatile int8_t x976 = -1;
	int32_t t184 = 355905;

    t184 = ((x973/(x974-x975))*x976);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x977 = 7U;
	volatile uint8_t x979 = 3U;
	uint32_t x980 = 2542U;

    t185 = ((x977/(x978-x979))*x980);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x985 = 2U;
	int16_t x986 = INT16_MIN;
	static int32_t x987 = INT32_MIN;
	int64_t x988 = 72721429699LL;
	int64_t t186 = -1790024107168281427LL;

    t186 = ((x985/(x986-x987))*x988);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x989 = 166257617U;
	uint16_t x990 = UINT16_MAX;
	static int16_t x991 = -268;
	int8_t x992 = INT8_MIN;
	volatile uint32_t t187 = 738U;

    t187 = ((x989/(x990-x991))*x992);

    if (t187 != 4294643968U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x993 = INT32_MAX;
	static uint32_t x995 = 15686311U;
	uint64_t x996 = UINT64_MAX;
	uint64_t t188 = UINT64_MAX;

    t188 = ((x993/(x994-x995))*x996);

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x1005 = -1;
	static int64_t x1006 = -1LL;
	int16_t x1008 = -39;
	int64_t t189 = -467LL;

    t189 = ((x1005/(x1006-x1007))*x1008);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x1009 = INT64_MIN;
	int8_t x1010 = INT8_MIN;
	volatile uint16_t x1012 = 3836U;
	uint64_t t190 = 782466383217108361LLU;

    t190 = ((x1009/(x1010-x1011))*x1012);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1017 = INT8_MIN;
	uint32_t x1018 = 640U;
	int32_t x1020 = -401799;
	static uint32_t t191 = 212381U;

    t191 = ((x1017/(x1018-x1019))*x1020);

    if (t191 != 3290673319U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1023 = 9263947U;
	uint8_t x1024 = 1U;
	uint32_t t192 = 27314U;

    t192 = ((x1021/(x1022-x1023))*x1024);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1025 = UINT8_MAX;
	int8_t x1027 = 1;
	int16_t x1028 = INT16_MAX;
	int64_t t193 = -51301794526146107LL;

    t193 = ((x1025/(x1026-x1027))*x1028);

    if (t193 != -4161409LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1029 = INT16_MIN;
	int8_t x1030 = -3;
	int32_t x1031 = 6840527;
	volatile int64_t t194 = 15380932LL;

    t194 = ((x1029/(x1030-x1031))*x1032);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1033 = -1;
	volatile uint16_t x1034 = 2859U;
	static int8_t x1036 = -1;
	volatile int32_t t195 = 598;

    t195 = ((x1033/(x1034-x1035))*x1036);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint64_t x1037 = 99456174LLU;
	volatile uint16_t x1040 = UINT16_MAX;

    t196 = ((x1037/(x1038-x1039))*x1040);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1045 = INT8_MIN;
	uint32_t x1046 = 399637131U;
	volatile int8_t x1047 = INT8_MIN;
	static int8_t x1048 = INT8_MIN;
	static uint32_t t197 = 157U;

    t197 = ((x1045/(x1046-x1047))*x1048);

    if (t197 != 4294966016U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1054 = 84U;
	static uint64_t x1055 = 22LLU;
	static int16_t x1056 = INT16_MIN;

    t198 = ((x1053/(x1054-x1055))*x1056);

    if (t198 != 18288507377116119040LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x1057 = UINT32_MAX;
	int64_t x1059 = -1LL;
	int64_t t199 = -7904LL;

    t199 = ((x1057/(x1058-x1059))*x1060);

    if (t199 != -17179869176LL) { NG(); } else { ; }
	
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

