
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

volatile int32_t x3 = INT32_MIN;
int16_t x4 = -1;
volatile uint64_t x5 = UINT64_MAX;
static volatile int8_t x6 = -57;
static volatile int32_t t1 = 0;
uint8_t x10 = 59U;
volatile uint32_t x11 = 0U;
static int8_t x19 = -1;
volatile int64_t x23 = 123863907LL;
int64_t x27 = INT64_MAX;
uint64_t t6 = 1816763LLU;
uint8_t x30 = UINT8_MAX;
int64_t x35 = INT64_MAX;
volatile int32_t t9 = 200357599;
volatile uint32_t t10 = 3U;
uint8_t x46 = 3U;
uint32_t x55 = UINT32_MAX;
uint32_t x59 = 3491U;
volatile int32_t t14 = 823;
volatile uint32_t x62 = UINT32_MAX;
uint64_t x63 = 3553397446862LLU;
volatile uint64_t t15 = 6635LLU;
static int16_t x68 = 9576;
static int64_t x73 = -1LL;
uint64_t x80 = 1695LLU;
uint64_t x83 = 43537994LLU;
int8_t x85 = INT8_MIN;
static int32_t x88 = INT32_MIN;
int32_t x89 = INT32_MIN;
int8_t x90 = -7;
volatile int64_t x92 = -64480LL;
volatile int64_t x93 = INT64_MAX;
volatile int32_t x99 = INT32_MIN;
static int16_t x100 = INT16_MIN;
int16_t x102 = INT16_MIN;
int32_t x103 = -23189;
static int8_t x112 = INT8_MIN;
uint16_t x113 = 3U;
static int8_t x114 = INT8_MIN;
volatile int16_t x115 = INT16_MIN;
volatile uint8_t x116 = UINT8_MAX;
int16_t x117 = INT16_MIN;
int32_t x136 = INT32_MIN;
uint16_t x137 = 11329U;
int32_t x139 = INT32_MIN;
int64_t x140 = 922401299279LL;
volatile int8_t x143 = -18;
uint64_t x144 = 32266665319889785LLU;
uint16_t x156 = 1126U;
static int32_t x159 = 205782676;
static volatile int16_t x169 = INT16_MAX;
volatile int32_t t42 = 3;
uint8_t x182 = 21U;
uint16_t x191 = 406U;
int16_t x192 = INT16_MAX;
volatile int32_t t47 = -1659;
uint64_t x193 = 1084955159824LLU;
volatile int32_t t48 = -17;
volatile int8_t x197 = -6;
uint32_t x200 = UINT32_MAX;
uint8_t x201 = UINT8_MAX;
volatile int32_t x203 = 1392513;
uint32_t x206 = UINT32_MAX;
volatile int64_t x207 = INT64_MIN;
uint8_t x213 = 117U;
static uint64_t x217 = UINT64_MAX;
int32_t x221 = -2766;
static int16_t x225 = 1539;
int16_t x227 = INT16_MAX;
uint64_t t56 = 960LLU;
int16_t x229 = 1980;
volatile uint16_t x230 = 1346U;
int8_t x234 = 3;
volatile uint32_t x235 = 20258U;
uint32_t x239 = 19U;
static int8_t x240 = INT8_MIN;
int32_t x244 = INT32_MAX;
uint8_t x246 = UINT8_MAX;
int64_t x252 = INT64_MIN;
int16_t x256 = INT16_MIN;
uint8_t x257 = UINT8_MAX;
int8_t x260 = INT8_MIN;
int32_t t64 = -3389;
int32_t x262 = -123;
static volatile int64_t x263 = INT64_MAX;
static volatile int32_t t67 = 5;
static int64_t x276 = INT64_MAX;
volatile uint16_t x286 = 38U;
int16_t x289 = 4;
uint32_t x290 = UINT32_MAX;
int32_t x301 = INT32_MIN;
uint64_t x303 = UINT64_MAX;
static uint16_t x306 = UINT16_MAX;
uint32_t x322 = 114451045U;
static volatile uint32_t x333 = UINT32_MAX;
static int8_t x340 = INT8_MAX;
volatile int32_t t84 = -2;
volatile int64_t x344 = 46465LL;
static volatile int32_t x345 = INT32_MAX;
uint32_t t86 = 577770U;
volatile uint32_t t87 = 1388929U;
volatile int32_t x357 = 1222;
uint32_t x366 = UINT32_MAX;
uint16_t x367 = UINT16_MAX;
int32_t t92 = 5;
int16_t x376 = INT16_MIN;
int16_t x383 = INT16_MIN;
int16_t x386 = INT16_MAX;
int32_t x389 = INT32_MIN;
int64_t x396 = -83676329971949LL;
int32_t x401 = INT32_MIN;
static uint32_t x405 = 107834U;
int8_t x408 = -1;
int64_t x419 = -1LL;
int32_t x437 = -1;
volatile int32_t x440 = 324501537;
volatile int8_t x441 = INT8_MIN;
uint16_t x442 = UINT16_MAX;
int16_t x444 = -1;
int32_t t111 = -3662427;
uint64_t x452 = 1766843448418772LLU;
static int64_t x455 = -1LL;
int64_t x458 = INT64_MIN;
int16_t x459 = INT16_MAX;
volatile uint16_t x466 = 26724U;
int8_t x469 = 0;
static volatile int32_t x472 = INT32_MAX;
int32_t t117 = 4863514;
int8_t x481 = -46;
uint8_t x485 = UINT8_MAX;
uint64_t x489 = UINT64_MAX;
int32_t x493 = 528767;
static volatile int64_t x499 = 122543643684811427LL;
static uint16_t x505 = 1664U;
int16_t x506 = -2;
int32_t x513 = -251363;
static int16_t x516 = -1;
volatile uint8_t x519 = UINT8_MAX;
volatile int64_t x533 = -1LL;
int16_t x534 = 0;
int8_t x536 = INT8_MAX;
static int16_t x538 = -3;
int64_t x543 = INT64_MIN;
volatile int16_t x553 = -1;
uint8_t x557 = 112U;
int32_t t139 = -156728;
volatile int32_t t140 = 1655;
uint32_t x566 = 100U;
int16_t x570 = INT16_MAX;
int16_t x572 = -1;
static volatile uint32_t t143 = 23U;
volatile uint64_t x582 = 3089132486802201LLU;
int8_t x587 = 0;
static int32_t x588 = -1;
static int8_t x592 = -9;
static volatile int32_t x600 = INT32_MAX;
int8_t x605 = 43;
int16_t x609 = -33;
static volatile int8_t x617 = -12;
uint64_t x621 = UINT64_MAX;
int8_t x624 = -1;
static int8_t x626 = 5;
static volatile int64_t x636 = INT64_MIN;
uint32_t x639 = 63375U;
uint16_t x640 = 1U;
int32_t t161 = -8131;
int16_t x649 = INT16_MAX;
int64_t x651 = INT64_MIN;
int64_t x668 = INT64_MIN;
int32_t t169 = 1434972;
int32_t t170 = 823;
int32_t x692 = INT32_MIN;
static int32_t t172 = -153998115;
uint32_t x695 = 5900800U;
volatile int8_t x698 = INT8_MIN;
int8_t x702 = INT8_MIN;
static int64_t x703 = INT64_MIN;
uint16_t x709 = 3490U;
int16_t x712 = INT16_MIN;
volatile int64_t x715 = 110701457014476692LL;
uint16_t x720 = 3U;
int64_t x723 = INT64_MIN;
volatile int64_t x724 = INT64_MIN;
volatile int16_t x725 = INT16_MIN;
int32_t x732 = INT32_MIN;
int64_t x741 = -633536LL;
static volatile uint64_t x760 = 591949944170347LLU;
int8_t x772 = INT8_MIN;
int64_t x773 = -1LL;
volatile uint16_t x775 = UINT16_MAX;
int32_t t194 = -7143;
volatile int16_t x783 = INT16_MAX;
int32_t x786 = INT32_MIN;
uint64_t x793 = 52976133LLU;
volatile int64_t x794 = -1LL;


void f0(void) {
    	static volatile int16_t x1 = -1;
	int64_t x2 = 211447573LL;
	int32_t t0 = -444;

    t0 = (((x1^x2)!=x3)^x4);

    if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x7 = INT8_MIN;
	int32_t x8 = INT32_MAX;

    t1 = (((x5^x6)!=x7)^x8);

    if (t1 != 2147483646) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 1U;
	int16_t x12 = -249;
	volatile int32_t t2 = 0;

    t2 = (((x9^x10)!=x11)^x12);

    if (t2 != -250) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	int64_t x14 = INT64_MIN;
	uint16_t x15 = UINT16_MAX;
	uint32_t x16 = 69U;
	volatile uint32_t t3 = 328092228U;

    t3 = (((x13^x14)!=x15)^x16);

    if (t3 != 68U) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	int8_t x18 = -1;
	int32_t x20 = INT32_MIN;
	int32_t t4 = -77467178;

    t4 = (((x17^x18)!=x19)^x20);

    if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	static int8_t x22 = -1;
	uint32_t x24 = UINT32_MAX;
	static volatile uint32_t t5 = 14594379U;

    t5 = (((x21^x22)!=x23)^x24);

    if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	static int16_t x26 = -24;
	uint64_t x28 = 121209357LLU;

    t6 = (((x25^x26)!=x27)^x28);

    if (t6 != 121209356LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -3LL;
	static int8_t x31 = 28;
	int8_t x32 = INT8_MIN;
	int32_t t7 = -9855;

    t7 = (((x29^x30)!=x31)^x32);

    if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 1804961LL;
	uint64_t x34 = 204156620646498LLU;
	uint32_t x36 = UINT32_MAX;
	uint32_t t8 = 89931089U;

    t8 = (((x33^x34)!=x35)^x36);

    if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MIN;
	volatile int32_t x38 = INT32_MAX;
	int64_t x39 = -1LL;
	int32_t x40 = -1765491;

    t9 = (((x37^x38)!=x39)^x40);

    if (t9 != -1765492) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = 0;
	int8_t x42 = INT8_MIN;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = 417396U;

    t10 = (((x41^x42)!=x43)^x44);

    if (t10 != 417397U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 146U;
	uint16_t x47 = 46U;
	int64_t x48 = -1LL;
	int64_t t11 = 472LL;

    t11 = (((x45^x46)!=x47)^x48);

    if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	uint16_t x50 = 2U;
	static uint16_t x51 = 0U;
	uint32_t x52 = 934487635U;
	volatile uint32_t t12 = 230080876U;

    t12 = (((x49^x50)!=x51)^x52);

    if (t12 != 934487634U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 22075806LL;
	static int64_t x54 = INT64_MIN;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -1;

    t13 = (((x53^x54)!=x55)^x56);

    if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	uint32_t x58 = 1125086945U;
	uint16_t x60 = UINT16_MAX;

    t14 = (((x57^x58)!=x59)^x60);

    if (t14 != 65534) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	uint64_t x64 = UINT64_MAX;

    t15 = (((x61^x62)!=x63)^x64);

    if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	static uint64_t x66 = 518569LLU;
	int8_t x67 = INT8_MIN;
	int32_t t16 = 21586112;

    t16 = (((x65^x66)!=x67)^x68);

    if (t16 != 9577) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	uint8_t x70 = 1U;
	int8_t x71 = 11;
	int64_t x72 = 608786015885LL;
	volatile int64_t t17 = 1LL;

    t17 = (((x69^x70)!=x71)^x72);

    if (t17 != 608786015884LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x74 = 1U;
	volatile uint16_t x75 = UINT16_MAX;
	uint64_t x76 = 26403109691994267LLU;
	uint64_t t18 = 2930LLU;

    t18 = (((x73^x74)!=x75)^x76);

    if (t18 != 26403109691994266LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	static int32_t x78 = -1;
	uint8_t x79 = 2U;
	volatile uint64_t t19 = 4618699478LLU;

    t19 = (((x77^x78)!=x79)^x80);

    if (t19 != 1694LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	int8_t x82 = INT8_MIN;
	int32_t x84 = -800893975;
	int32_t t20 = 2;

    t20 = (((x81^x82)!=x83)^x84);

    if (t20 != -800893976) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x86 = UINT32_MAX;
	int32_t x87 = INT32_MIN;
	volatile int32_t t21 = -60;

    t21 = (((x85^x86)!=x87)^x88);

    if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x91 = 313LLU;
	static int64_t t22 = 23290134438388LL;

    t22 = (((x89^x90)!=x91)^x92);

    if (t22 != -64479LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x94 = -1;
	int32_t x95 = INT32_MIN;
	int16_t x96 = 37;
	int32_t t23 = -224753;

    t23 = (((x93^x94)!=x95)^x96);

    if (t23 != 36) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = -1;
	int32_t x98 = -1;
	volatile int32_t t24 = 1;

    t24 = (((x97^x98)!=x99)^x100);

    if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = 32556968513494912LLU;

    t25 = (((x101^x102)!=x103)^x104);

    if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 1U;
	uint8_t x106 = UINT8_MAX;
	int8_t x107 = -3;
	static volatile int16_t x108 = 1;
	volatile int32_t t26 = -63446;

    t26 = (((x105^x106)!=x107)^x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MAX;
	int8_t x110 = INT8_MIN;
	int8_t x111 = 1;
	int32_t t27 = 60576050;

    t27 = (((x109^x110)!=x111)^x112);

    if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t t28 = 215;

    t28 = (((x113^x114)!=x115)^x116);

    if (t28 != 254) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x118 = -1;
	static uint16_t x119 = UINT16_MAX;
	static int64_t x120 = -1245535LL;
	volatile int64_t t29 = -4LL;

    t29 = (((x117^x118)!=x119)^x120);

    if (t29 != -1245536LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = UINT64_MAX;
	volatile int8_t x122 = INT8_MIN;
	int16_t x123 = 120;
	uint32_t x124 = UINT32_MAX;
	static uint32_t t30 = 112U;

    t30 = (((x121^x122)!=x123)^x124);

    if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = INT64_MIN;
	static uint64_t x126 = 1579079261604061LLU;
	volatile int8_t x127 = 2;
	uint8_t x128 = 0U;
	int32_t t31 = 221;

    t31 = (((x125^x126)!=x127)^x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	int64_t x130 = -1644623LL;
	int16_t x131 = -1;
	int32_t x132 = INT32_MIN;
	int32_t t32 = -121304;

    t32 = (((x129^x130)!=x131)^x132);

    if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = UINT64_MAX;
	static uint64_t x134 = 2007785440LLU;
	uint32_t x135 = 1306U;
	volatile int32_t t33 = 1021622;

    t33 = (((x133^x134)!=x135)^x136);

    if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x138 = UINT32_MAX;
	int64_t t34 = 14LL;

    t34 = (((x137^x138)!=x139)^x140);

    if (t34 != 922401299278LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x141 = 1U;
	int16_t x142 = -1;
	uint64_t t35 = 1146741763981579158LLU;

    t35 = (((x141^x142)!=x143)^x144);

    if (t35 != 32266665319889784LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 321LLU;
	int16_t x146 = INT16_MIN;
	uint64_t x147 = UINT64_MAX;
	uint8_t x148 = UINT8_MAX;
	static volatile int32_t t36 = -15;

    t36 = (((x145^x146)!=x147)^x148);

    if (t36 != 254) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 2133U;
	uint64_t x150 = UINT64_MAX;
	uint16_t x151 = 29691U;
	int8_t x152 = INT8_MIN;
	static int32_t t37 = 1448;

    t37 = (((x149^x150)!=x151)^x152);

    if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MAX;
	int8_t x155 = INT8_MIN;
	int32_t t38 = -1382819;

    t38 = (((x153^x154)!=x155)^x156);

    if (t38 != 1127) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = 429904263U;
	volatile int16_t x158 = -2062;
	static int64_t x160 = 32876453LL;
	volatile int64_t t39 = 8101490777735LL;

    t39 = (((x157^x158)!=x159)^x160);

    if (t39 != 32876452LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	static int32_t x162 = -1;
	int8_t x163 = INT8_MIN;
	volatile uint32_t x164 = 748997U;
	volatile uint32_t t40 = 6037U;

    t40 = (((x161^x162)!=x163)^x164);

    if (t40 != 748996U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 433047U;
	volatile int64_t x166 = -1LL;
	volatile int16_t x167 = INT16_MAX;
	static volatile int32_t x168 = -707;
	static volatile int32_t t41 = 3290705;

    t41 = (((x165^x166)!=x167)^x168);

    if (t41 != -708) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x170 = 0U;
	int64_t x171 = INT64_MIN;
	static volatile int32_t x172 = -1;

    t42 = (((x169^x170)!=x171)^x172);

    if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 874U;
	uint32_t x174 = 1231082U;
	int16_t x175 = 44;
	int16_t x176 = INT16_MAX;
	volatile int32_t t43 = -18;

    t43 = (((x173^x174)!=x175)^x176);

    if (t43 != 32766) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -650061326;
	volatile int16_t x178 = INT16_MIN;
	int64_t x179 = -33274095497LL;
	int16_t x180 = INT16_MIN;
	static volatile int32_t t44 = -7;

    t44 = (((x177^x178)!=x179)^x180);

    if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MAX;
	volatile int8_t x183 = INT8_MAX;
	int32_t x184 = INT32_MIN;
	int32_t t45 = 254870547;

    t45 = (((x181^x182)!=x183)^x184);

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = -1;
	volatile int8_t x186 = -1;
	uint16_t x187 = UINT16_MAX;
	uint8_t x188 = 1U;
	static volatile int32_t t46 = -4921;

    t46 = (((x185^x186)!=x187)^x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 5U;
	int64_t x190 = INT64_MIN;

    t47 = (((x189^x190)!=x191)^x192);

    if (t47 != 32766) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x194 = 2481LL;
	int8_t x195 = -63;
	volatile int8_t x196 = -1;

    t48 = (((x193^x194)!=x195)^x196);

    if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x198 = -4;
	volatile int8_t x199 = 1;
	uint32_t t49 = 1U;

    t49 = (((x197^x198)!=x199)^x200);

    if (t49 != 4294967294U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x202 = 0U;
	uint8_t x204 = 21U;
	volatile int32_t t50 = 22880;

    t50 = (((x201^x202)!=x203)^x204);

    if (t50 != 20) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x205 = 51U;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = -1;

    t51 = (((x205^x206)!=x207)^x208);

    if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	int16_t x210 = -1;
	static volatile int16_t x211 = -1;
	int32_t x212 = 489185;
	int32_t t52 = 35177;

    t52 = (((x209^x210)!=x211)^x212);

    if (t52 != 489184) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x214 = INT8_MIN;
	static int16_t x215 = -117;
	int32_t x216 = INT32_MAX;
	volatile int32_t t53 = 539432;

    t53 = (((x213^x214)!=x215)^x216);

    if (t53 != 2147483646) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x218 = -6;
	static int16_t x219 = -1;
	uint32_t x220 = 863100873U;
	volatile uint32_t t54 = 42218225U;

    t54 = (((x217^x218)!=x219)^x220);

    if (t54 != 863100872U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x222 = INT8_MAX;
	int8_t x223 = -24;
	uint64_t x224 = UINT64_MAX;
	uint64_t t55 = 409955180LLU;

    t55 = (((x221^x222)!=x223)^x224);

    if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x226 = -171;
	static uint64_t x228 = 67301423612468621LLU;

    t56 = (((x225^x226)!=x227)^x228);

    if (t56 != 67301423612468620LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x231 = -1;
	volatile uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 87512;

    t57 = (((x229^x230)!=x231)^x232);

    if (t57 != 65534) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = UINT8_MAX;
	volatile uint64_t x236 = 48189751LLU;
	volatile uint64_t t58 = 127908090000634LLU;

    t58 = (((x233^x234)!=x235)^x236);

    if (t58 != 48189750LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -63354064286LL;
	int32_t x238 = 22;
	static int32_t t59 = 254002;

    t59 = (((x237^x238)!=x239)^x240);

    if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	static int8_t x242 = -1;
	int32_t x243 = 120213;
	int32_t t60 = 11071458;

    t60 = (((x241^x242)!=x243)^x244);

    if (t60 != 2147483646) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MIN;
	uint32_t x247 = 38U;
	uint16_t x248 = 1U;
	int32_t t61 = -265617;

    t61 = (((x245^x246)!=x247)^x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 8U;
	static int8_t x250 = INT8_MIN;
	uint64_t x251 = 24LLU;
	int64_t t62 = 11376623855LL;

    t62 = (((x249^x250)!=x251)^x252);

    if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = 160;
	int16_t x254 = INT16_MIN;
	uint8_t x255 = 4U;
	int32_t t63 = -162860;

    t63 = (((x253^x254)!=x255)^x256);

    if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = 1;
	int16_t x259 = -4886;

    t64 = (((x257^x258)!=x259)^x260);

    if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MIN;
	int16_t x264 = -1;
	volatile int32_t t65 = 902022179;

    t65 = (((x261^x262)!=x263)^x264);

    if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = INT8_MIN;
	int8_t x266 = -15;
	volatile int64_t x267 = INT64_MAX;
	static uint16_t x268 = 3152U;
	volatile int32_t t66 = -1;

    t66 = (((x265^x266)!=x267)^x268);

    if (t66 != 3153) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MIN;
	volatile int64_t x270 = -1LL;
	int8_t x271 = -1;
	int16_t x272 = INT16_MIN;

    t67 = (((x269^x270)!=x271)^x272);

    if (t67 != -32767) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x273 = 77599U;
	int16_t x274 = INT16_MIN;
	uint8_t x275 = 0U;
	volatile int64_t t68 = -105202LL;

    t68 = (((x273^x274)!=x275)^x276);

    if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 2095962319292270LLU;
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = INT8_MIN;
	uint64_t x280 = UINT64_MAX;
	static uint64_t t69 = 61688315LLU;

    t69 = (((x277^x278)!=x279)^x280);

    if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -1;
	static volatile uint32_t x282 = UINT32_MAX;
	uint64_t x283 = 3LLU;
	int64_t x284 = 200714143943179633LL;
	int64_t t70 = 1731LL;

    t70 = (((x281^x282)!=x283)^x284);

    if (t70 != 200714143943179632LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	static volatile int64_t x287 = -718660371LL;
	uint8_t x288 = 23U;
	volatile int32_t t71 = 0;

    t71 = (((x285^x286)!=x287)^x288);

    if (t71 != 22) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x291 = -1;
	uint32_t x292 = 11U;
	volatile uint32_t t72 = 438922949U;

    t72 = (((x289^x290)!=x291)^x292);

    if (t72 != 10U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -29;
	volatile uint32_t x294 = 366625U;
	static int32_t x295 = -500502837;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t73 = 58018U;

    t73 = (((x293^x294)!=x295)^x296);

    if (t73 != 4294967294U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = -1;
	int64_t x298 = -5236989863LL;
	volatile int64_t x299 = -2073888307158373LL;
	uint16_t x300 = 3553U;
	volatile int32_t t74 = -105060;

    t74 = (((x297^x298)!=x299)^x300);

    if (t74 != 3552) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x302 = INT16_MAX;
	volatile int64_t x304 = -858813581116LL;
	int64_t t75 = 186042LL;

    t75 = (((x301^x302)!=x303)^x304);

    if (t75 != -858813581115LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	uint8_t x307 = UINT8_MAX;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 2811;

    t76 = (((x305^x306)!=x307)^x308);

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 1100U;
	static int16_t x310 = -1168;
	volatile int8_t x311 = 18;
	int8_t x312 = -10;
	volatile int32_t t77 = 245354;

    t77 = (((x309^x310)!=x311)^x312);

    if (t77 != -9) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MAX;
	static volatile uint16_t x314 = UINT16_MAX;
	static int8_t x315 = -28;
	uint16_t x316 = 237U;
	int32_t t78 = 1;

    t78 = (((x313^x314)!=x315)^x316);

    if (t78 != 236) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MAX;
	int32_t x318 = INT32_MAX;
	int8_t x319 = INT8_MAX;
	volatile int16_t x320 = -1;
	static volatile int32_t t79 = -2009696;

    t79 = (((x317^x318)!=x319)^x320);

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x321 = 1U;
	volatile int8_t x323 = -1;
	int8_t x324 = INT8_MIN;
	int32_t t80 = -553654;

    t80 = (((x321^x322)!=x323)^x324);

    if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -1;
	volatile uint8_t x326 = 33U;
	int32_t x327 = INT32_MIN;
	volatile int16_t x328 = -1157;
	int32_t t81 = 196;

    t81 = (((x325^x326)!=x327)^x328);

    if (t81 != -1158) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 1;
	int8_t x330 = INT8_MIN;
	uint32_t x331 = 15U;
	volatile int64_t x332 = INT64_MAX;
	int64_t t82 = 13844159LL;

    t82 = (((x329^x330)!=x331)^x332);

    if (t82 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = -310558593LL;
	int64_t x335 = -5196102LL;
	int32_t x336 = INT32_MIN;
	static int32_t t83 = 3014;

    t83 = (((x333^x334)!=x335)^x336);

    if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 0U;
	uint8_t x338 = 17U;
	volatile int16_t x339 = INT16_MIN;

    t84 = (((x337^x338)!=x339)^x340);

    if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 102U;
	int16_t x342 = -1;
	int8_t x343 = 27;
	int64_t t85 = -326001LL;

    t85 = (((x341^x342)!=x343)^x344);

    if (t85 != 46464LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x346 = INT32_MIN;
	volatile uint32_t x347 = UINT32_MAX;
	uint32_t x348 = 207U;

    t86 = (((x345^x346)!=x347)^x348);

    if (t86 != 207U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MIN;
	uint64_t x350 = 99282LLU;
	static int32_t x351 = INT32_MAX;
	volatile uint32_t x352 = 996885518U;

    t87 = (((x349^x350)!=x351)^x352);

    if (t87 != 996885519U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	int8_t x354 = INT8_MIN;
	int64_t x355 = -1LL;
	int16_t x356 = INT16_MAX;
	int32_t t88 = 163;

    t88 = (((x353^x354)!=x355)^x356);

    if (t88 != 32766) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x358 = INT32_MIN;
	int8_t x359 = -1;
	static int16_t x360 = INT16_MIN;
	volatile int32_t t89 = 970066;

    t89 = (((x357^x358)!=x359)^x360);

    if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = INT8_MIN;
	static volatile int8_t x362 = -1;
	static int64_t x363 = 438827LL;
	static volatile int64_t x364 = INT64_MIN;
	volatile int64_t t90 = 1862011932LL;

    t90 = (((x361^x362)!=x363)^x364);

    if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = 149908U;
	volatile int16_t x368 = -8;
	volatile int32_t t91 = -32444964;

    t91 = (((x365^x366)!=x367)^x368);

    if (t91 != -7) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	uint64_t x370 = 41892600020765LLU;
	int16_t x371 = INT16_MAX;
	static int32_t x372 = -178965;

    t92 = (((x369^x370)!=x371)^x372);

    if (t92 != -178966) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MIN;
	int8_t x374 = 11;
	volatile int64_t x375 = -1LL;
	static int32_t t93 = 0;

    t93 = (((x373^x374)!=x375)^x376);

    if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MIN;
	uint16_t x378 = 9303U;
	volatile int16_t x379 = -1;
	static uint16_t x380 = 458U;
	int32_t t94 = -116490064;

    t94 = (((x377^x378)!=x379)^x380);

    if (t94 != 459) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = 156138047U;
	int16_t x382 = INT16_MIN;
	uint64_t x384 = 9259544663LLU;
	volatile uint64_t t95 = 412943LLU;

    t95 = (((x381^x382)!=x383)^x384);

    if (t95 != 9259544662LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = INT64_MIN;
	uint32_t x387 = 20U;
	volatile int16_t x388 = 11;
	volatile int32_t t96 = 2;

    t96 = (((x385^x386)!=x387)^x388);

    if (t96 != 10) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x390 = INT64_MAX;
	uint64_t x391 = 389830748LLU;
	int16_t x392 = 7;
	static volatile int32_t t97 = -3;

    t97 = (((x389^x390)!=x391)^x392);

    if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x393 = 5189U;
	volatile int64_t x394 = INT64_MIN;
	int16_t x395 = -1;
	volatile int64_t t98 = 8547419074LL;

    t98 = (((x393^x394)!=x395)^x396);

    if (t98 != -83676329971950LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = -3283810819289833LL;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	int64_t x400 = -1LL;
	static int64_t t99 = 16358LL;

    t99 = (((x397^x398)!=x399)^x400);

    if (t99 != -2LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x402 = 10U;
	int16_t x403 = INT16_MIN;
	int8_t x404 = -33;
	int32_t t100 = 58;

    t100 = (((x401^x402)!=x403)^x404);

    if (t100 != -34) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = INT32_MIN;
	int64_t x407 = INT64_MAX;
	volatile int32_t t101 = -2;

    t101 = (((x405^x406)!=x407)^x408);

    if (t101 != -2) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = UINT16_MAX;
	static int32_t x410 = -4;
	int16_t x411 = -8;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t102 = 1903568;

    t102 = (((x409^x410)!=x411)^x412);

    if (t102 != -32767) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = UINT8_MAX;
	uint32_t x414 = 1531U;
	int8_t x415 = -1;
	uint16_t x416 = 2179U;
	int32_t t103 = 60036220;

    t103 = (((x413^x414)!=x415)^x416);

    if (t103 != 2178) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	int16_t x418 = 478;
	int32_t x420 = -2;
	volatile int32_t t104 = 57;

    t104 = (((x417^x418)!=x419)^x420);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = 326248485LL;
	volatile int8_t x422 = INT8_MAX;
	volatile int32_t x423 = INT32_MIN;
	int8_t x424 = INT8_MIN;
	static int32_t t105 = 1;

    t105 = (((x421^x422)!=x423)^x424);

    if (t105 != -127) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 47U;
	static int64_t x426 = INT64_MAX;
	uint16_t x427 = 11540U;
	static uint64_t x428 = UINT64_MAX;
	volatile uint64_t t106 = 1925539097900058633LLU;

    t106 = (((x425^x426)!=x427)^x428);

    if (t106 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -525105186;
	static int64_t x430 = INT64_MAX;
	int32_t x431 = INT32_MIN;
	int16_t x432 = -1;
	int32_t t107 = 2;

    t107 = (((x429^x430)!=x431)^x432);

    if (t107 != -2) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = -1LL;
	static int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MAX;
	volatile uint64_t x436 = 85884962763LLU;
	volatile uint64_t t108 = 228093LLU;

    t108 = (((x433^x434)!=x435)^x436);

    if (t108 != 85884962762LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x438 = 0U;
	volatile uint32_t x439 = 160U;
	static volatile int32_t t109 = 30;

    t109 = (((x437^x438)!=x439)^x440);

    if (t109 != 324501536) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x443 = INT16_MIN;
	volatile int32_t t110 = 81;

    t110 = (((x441^x442)!=x443)^x444);

    if (t110 != -2) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = UINT32_MAX;
	int8_t x446 = INT8_MIN;
	uint64_t x447 = 1170682239LLU;
	int16_t x448 = INT16_MAX;

    t111 = (((x445^x446)!=x447)^x448);

    if (t111 != 32766) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 61814368104337LL;
	uint64_t x450 = 3431LLU;
	int64_t x451 = -6LL;
	uint64_t t112 = 16939LLU;

    t112 = (((x449^x450)!=x451)^x452);

    if (t112 != 1766843448418773LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = 16102U;
	int16_t x454 = -1;
	volatile int16_t x456 = INT16_MIN;
	static int32_t t113 = 6;

    t113 = (((x453^x454)!=x455)^x456);

    if (t113 != -32767) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	uint32_t x460 = 1U;
	uint32_t t114 = 5300127U;

    t114 = (((x457^x458)!=x459)^x460);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x461 = -874653047922921LL;
	int8_t x462 = -1;
	uint8_t x463 = UINT8_MAX;
	int16_t x464 = 1;
	volatile int32_t t115 = -5405;

    t115 = (((x461^x462)!=x463)^x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = UINT16_MAX;
	int64_t x467 = 85709096571LL;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t116 = 3752LLU;

    t116 = (((x465^x466)!=x467)^x468);

    if (t116 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = INT16_MIN;
	static int32_t x471 = INT32_MIN;

    t117 = (((x469^x470)!=x471)^x472);

    if (t117 != 2147483646) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = -1;
	uint16_t x474 = UINT16_MAX;
	int32_t x475 = -33550;
	static volatile int64_t x476 = 1167LL;
	int64_t t118 = -419LL;

    t118 = (((x473^x474)!=x475)^x476);

    if (t118 != 1166LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	uint16_t x478 = UINT16_MAX;
	static volatile uint64_t x479 = 1382897LLU;
	uint64_t x480 = 277431408905005735LLU;
	uint64_t t119 = 4496189LLU;

    t119 = (((x477^x478)!=x479)^x480);

    if (t119 != 277431408905005734LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = -1;
	static int16_t x483 = INT16_MAX;
	volatile int32_t x484 = -1;
	volatile int32_t t120 = 0;

    t120 = (((x481^x482)!=x483)^x484);

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x486 = -2901LL;
	volatile uint8_t x487 = 2U;
	uint64_t x488 = 2729003235LLU;
	uint64_t t121 = 11LLU;

    t121 = (((x485^x486)!=x487)^x488);

    if (t121 != 2729003234LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x490 = UINT32_MAX;
	int64_t x491 = INT64_MIN;
	volatile int32_t x492 = INT32_MIN;
	int32_t t122 = -128940;

    t122 = (((x489^x490)!=x491)^x492);

    if (t122 != -2147483647) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x494 = INT16_MAX;
	int16_t x495 = INT16_MIN;
	static int64_t x496 = 234655754712938LL;
	int64_t t123 = 301LL;

    t123 = (((x493^x494)!=x495)^x496);

    if (t123 != 234655754712939LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 652LLU;
	int8_t x498 = INT8_MIN;
	static uint64_t x500 = UINT64_MAX;
	uint64_t t124 = 1LLU;

    t124 = (((x497^x498)!=x499)^x500);

    if (t124 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = INT16_MAX;
	int32_t x502 = INT32_MIN;
	static volatile int16_t x503 = -85;
	int8_t x504 = 0;
	volatile int32_t t125 = 872;

    t125 = (((x501^x502)!=x503)^x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x507 = -1LL;
	volatile uint32_t x508 = 194300417U;
	volatile uint32_t t126 = 36U;

    t126 = (((x505^x506)!=x507)^x508);

    if (t126 != 194300416U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x509 = INT16_MIN;
	uint8_t x510 = 2U;
	int16_t x511 = -146;
	static int32_t x512 = -1;
	int32_t t127 = -475260823;

    t127 = (((x509^x510)!=x511)^x512);

    if (t127 != -2) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x514 = UINT16_MAX;
	int8_t x515 = 2;
	volatile int32_t t128 = -28570234;

    t128 = (((x513^x514)!=x515)^x516);

    if (t128 != -2) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x517 = 3642783LLU;
	uint8_t x518 = UINT8_MAX;
	static uint8_t x520 = 5U;
	int32_t t129 = 116569;

    t129 = (((x517^x518)!=x519)^x520);

    if (t129 != 4) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = 26;
	int16_t x522 = -1;
	int32_t x523 = -1;
	int64_t x524 = 305276412644499LL;
	volatile int64_t t130 = -221156100732409913LL;

    t130 = (((x521^x522)!=x523)^x524);

    if (t130 != 305276412644498LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -17897229887963LL;
	int32_t x526 = INT32_MIN;
	int8_t x527 = 3;
	uint16_t x528 = 980U;
	static int32_t t131 = 361649;

    t131 = (((x525^x526)!=x527)^x528);

    if (t131 != 981) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = -1;
	static int32_t x530 = INT32_MIN;
	uint8_t x531 = UINT8_MAX;
	uint8_t x532 = UINT8_MAX;
	int32_t t132 = 2033037;

    t132 = (((x529^x530)!=x531)^x532);

    if (t132 != 254) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x535 = INT8_MIN;
	int32_t t133 = 0;

    t133 = (((x533^x534)!=x535)^x536);

    if (t133 != 126) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MAX;
	volatile int16_t x539 = INT16_MAX;
	int64_t x540 = 15842599384810LL;
	volatile int64_t t134 = -3223738115254373470LL;

    t134 = (((x537^x538)!=x539)^x540);

    if (t134 != 15842599384811LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MAX;
	int16_t x542 = -1;
	int64_t x544 = INT64_MAX;
	volatile int64_t t135 = -743273865LL;

    t135 = (((x541^x542)!=x543)^x544);

    if (t135 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -234;
	static int64_t x546 = -1LL;
	volatile uint8_t x547 = UINT8_MAX;
	volatile int32_t x548 = INT32_MIN;
	volatile int32_t t136 = 184724284;

    t136 = (((x545^x546)!=x547)^x548);

    if (t136 != -2147483647) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile int64_t x550 = 15474LL;
	uint16_t x551 = 499U;
	int8_t x552 = INT8_MIN;
	int32_t t137 = 45;

    t137 = (((x549^x550)!=x551)^x552);

    if (t137 != -127) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = 7;
	int16_t x555 = INT16_MIN;
	int16_t x556 = INT16_MIN;
	volatile int32_t t138 = 96;

    t138 = (((x553^x554)!=x555)^x556);

    if (t138 != -32767) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x558 = 32U;
	static int8_t x559 = INT8_MIN;
	uint8_t x560 = 3U;

    t139 = (((x557^x558)!=x559)^x560);

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 7648663076LLU;
	uint16_t x562 = 2372U;
	int64_t x563 = INT64_MAX;
	volatile int16_t x564 = INT16_MIN;

    t140 = (((x561^x562)!=x563)^x564);

    if (t140 != -32767) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 380U;
	volatile int16_t x567 = -1;
	int64_t x568 = INT64_MIN;
	volatile int64_t t141 = 148124LL;

    t141 = (((x565^x566)!=x567)^x568);

    if (t141 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 1273047018585LLU;
	static int64_t x571 = 2834575539485LL;
	volatile int32_t t142 = 434;

    t142 = (((x569^x570)!=x571)^x572);

    if (t142 != -2) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MAX;
	int16_t x574 = INT16_MIN;
	static int16_t x575 = INT16_MIN;
	uint32_t x576 = 1061799756U;

    t143 = (((x573^x574)!=x575)^x576);

    if (t143 != 1061799757U) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x577 = -5;
	int16_t x578 = INT16_MAX;
	int16_t x579 = INT16_MIN;
	int16_t x580 = 1;
	volatile int32_t t144 = -29587463;

    t144 = (((x577^x578)!=x579)^x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = UINT32_MAX;
	static volatile int32_t x583 = INT32_MIN;
	volatile int64_t x584 = -3295558729260LL;
	volatile int64_t t145 = 411110070325739LL;

    t145 = (((x581^x582)!=x583)^x584);

    if (t145 != -3295558729259LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = 15233;
	uint32_t x586 = 13652U;
	volatile int32_t t146 = 267266;

    t146 = (((x585^x586)!=x587)^x588);

    if (t146 != -2) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MAX;
	volatile int16_t x590 = 3251;
	volatile uint8_t x591 = UINT8_MAX;
	volatile int32_t t147 = 431624;

    t147 = (((x589^x590)!=x591)^x592);

    if (t147 != -10) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = INT8_MIN;
	volatile int64_t x594 = -78109889118959LL;
	int16_t x595 = -1;
	int16_t x596 = INT16_MIN;
	static int32_t t148 = 688253893;

    t148 = (((x593^x594)!=x595)^x596);

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x597 = INT64_MIN;
	static int64_t x598 = -242539LL;
	uint64_t x599 = UINT64_MAX;
	volatile int32_t t149 = 1;

    t149 = (((x597^x598)!=x599)^x600);

    if (t149 != 2147483646) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	volatile int8_t x602 = INT8_MAX;
	uint16_t x603 = 11U;
	int16_t x604 = -758;
	static volatile int32_t t150 = -420181;

    t150 = (((x601^x602)!=x603)^x604);

    if (t150 != -757) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x606 = 0U;
	volatile uint32_t x607 = 875036U;
	volatile int16_t x608 = INT16_MAX;
	int32_t t151 = 3903;

    t151 = (((x605^x606)!=x607)^x608);

    if (t151 != 32766) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MAX;
	int16_t x611 = INT16_MIN;
	int16_t x612 = -1;
	volatile int32_t t152 = -6285958;

    t152 = (((x609^x610)!=x611)^x612);

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x613 = INT32_MAX;
	int16_t x614 = -1;
	int32_t x615 = -60608;
	uint16_t x616 = 16205U;
	int32_t t153 = 285;

    t153 = (((x613^x614)!=x615)^x616);

    if (t153 != 16204) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = INT64_MIN;
	uint64_t x619 = 1LLU;
	static uint64_t x620 = 245458994466LLU;
	uint64_t t154 = 365982436115237LLU;

    t154 = (((x617^x618)!=x619)^x620);

    if (t154 != 245458994467LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x622 = 14U;
	static volatile int32_t x623 = -7049;
	int32_t t155 = -1;

    t155 = (((x621^x622)!=x623)^x624);

    if (t155 != -2) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 2667535123LLU;
	int16_t x627 = INT16_MIN;
	int32_t x628 = INT32_MAX;
	static volatile int32_t t156 = -14;

    t156 = (((x625^x626)!=x627)^x628);

    if (t156 != 2147483646) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 3U;
	int16_t x630 = 8;
	int8_t x631 = -1;
	static uint8_t x632 = 24U;
	volatile int32_t t157 = -490103230;

    t157 = (((x629^x630)!=x631)^x632);

    if (t157 != 25) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x633 = 43;
	int32_t x634 = -1;
	static int64_t x635 = -1LL;
	volatile int64_t t158 = 12909625565LL;

    t158 = (((x633^x634)!=x635)^x636);

    if (t158 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	volatile int32_t x638 = INT32_MAX;
	static volatile int32_t t159 = 1848490;

    t159 = (((x637^x638)!=x639)^x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	int64_t x642 = INT64_MIN;
	static int64_t x643 = INT64_MAX;
	static uint8_t x644 = UINT8_MAX;
	volatile int32_t t160 = -16;

    t160 = (((x641^x642)!=x643)^x644);

    if (t160 != 254) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x645 = 137445U;
	static uint64_t x646 = 107852690392823307LLU;
	int32_t x647 = INT32_MIN;
	static int8_t x648 = 43;

    t161 = (((x645^x646)!=x647)^x648);

    if (t161 != 42) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x650 = 218911;
	static uint8_t x652 = 38U;
	static volatile int32_t t162 = 6;

    t162 = (((x649^x650)!=x651)^x652);

    if (t162 != 39) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	static volatile int16_t x654 = INT16_MIN;
	volatile int8_t x655 = -19;
	int64_t x656 = -46LL;
	static volatile int64_t t163 = 15038479964LL;

    t163 = (((x653^x654)!=x655)^x656);

    if (t163 != -45LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = 0;
	static int32_t x658 = -40383740;
	int8_t x659 = -1;
	int32_t x660 = INT32_MIN;
	volatile int32_t t164 = -200163912;

    t164 = (((x657^x658)!=x659)^x660);

    if (t164 != -2147483647) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x661 = 951U;
	int32_t x662 = -2223459;
	int8_t x663 = INT8_MAX;
	int8_t x664 = INT8_MAX;
	int32_t t165 = -13642;

    t165 = (((x661^x662)!=x663)^x664);

    if (t165 != 126) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = UINT64_MAX;
	uint8_t x666 = 89U;
	int8_t x667 = INT8_MIN;
	static volatile int64_t t166 = -1302LL;

    t166 = (((x665^x666)!=x667)^x668);

    if (t166 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x669 = -34277;
	static uint16_t x670 = 6U;
	uint16_t x671 = 1U;
	int64_t x672 = INT64_MAX;
	static volatile int64_t t167 = -474472849LL;

    t167 = (((x669^x670)!=x671)^x672);

    if (t167 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = 401LLU;
	int16_t x674 = INT16_MAX;
	volatile int64_t x675 = INT64_MAX;
	int64_t x676 = -284675049277182LL;
	volatile int64_t t168 = 4197113423076LL;

    t168 = (((x673^x674)!=x675)^x676);

    if (t168 != -284675049277181LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = UINT64_MAX;
	static int16_t x678 = INT16_MIN;
	uint16_t x679 = UINT16_MAX;
	volatile int8_t x680 = INT8_MIN;

    t169 = (((x677^x678)!=x679)^x680);

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 36342431U;
	int64_t x682 = -1LL;
	volatile uint64_t x683 = UINT64_MAX;
	int8_t x684 = INT8_MAX;

    t170 = (((x681^x682)!=x683)^x684);

    if (t170 != 126) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x685 = UINT16_MAX;
	int16_t x686 = INT16_MIN;
	int8_t x687 = -1;
	uint16_t x688 = UINT16_MAX;
	volatile int32_t t171 = -82;

    t171 = (((x685^x686)!=x687)^x688);

    if (t171 != 65534) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 121U;
	int8_t x690 = INT8_MIN;
	uint32_t x691 = 14077U;

    t172 = (((x689^x690)!=x691)^x692);

    if (t172 != -2147483647) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	int16_t x694 = -324;
	int64_t x696 = 1686289654517LL;
	int64_t t173 = 15464481LL;

    t173 = (((x693^x694)!=x695)^x696);

    if (t173 != 1686289654516LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = UINT32_MAX;
	int8_t x699 = 7;
	volatile int32_t x700 = -477;
	int32_t t174 = 1538007;

    t174 = (((x697^x698)!=x699)^x700);

    if (t174 != -478) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 1U;
	static uint16_t x704 = 1U;
	int32_t t175 = -45523;

    t175 = (((x701^x702)!=x703)^x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MIN;
	int8_t x706 = INT8_MIN;
	uint8_t x707 = UINT8_MAX;
	uint32_t x708 = 16623945U;
	volatile uint32_t t176 = 60386U;

    t176 = (((x705^x706)!=x707)^x708);

    if (t176 != 16623944U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x710 = UINT64_MAX;
	int32_t x711 = INT32_MIN;
	int32_t t177 = 1;

    t177 = (((x709^x710)!=x711)^x712);

    if (t177 != -32767) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x713 = UINT64_MAX;
	int32_t x714 = INT32_MAX;
	uint8_t x716 = 2U;
	volatile int32_t t178 = -12309;

    t178 = (((x713^x714)!=x715)^x716);

    if (t178 != 3) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = UINT32_MAX;
	uint16_t x718 = 350U;
	static int32_t x719 = -35382446;
	int32_t t179 = 217;

    t179 = (((x717^x718)!=x719)^x720);

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	uint8_t x722 = UINT8_MAX;
	int64_t t180 = -228LL;

    t180 = (((x721^x722)!=x723)^x724);

    if (t180 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = INT64_MAX;
	int32_t x727 = INT32_MIN;
	volatile int64_t x728 = INT64_MIN;
	volatile int64_t t181 = 189919748LL;

    t181 = (((x725^x726)!=x727)^x728);

    if (t181 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -1;
	volatile uint32_t x730 = 12U;
	uint16_t x731 = 6939U;
	volatile int32_t t182 = 5888;

    t182 = (((x729^x730)!=x731)^x732);

    if (t182 != -2147483647) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x733 = INT64_MAX;
	int64_t x734 = INT64_MAX;
	int16_t x735 = -15445;
	int32_t x736 = -20;
	int32_t t183 = -6193381;

    t183 = (((x733^x734)!=x735)^x736);

    if (t183 != -19) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = UINT32_MAX;
	static int64_t x738 = 124440LL;
	int32_t x739 = 307074308;
	uint8_t x740 = UINT8_MAX;
	int32_t t184 = -20001314;

    t184 = (((x737^x738)!=x739)^x740);

    if (t184 != 254) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x742 = -835;
	volatile int8_t x743 = INT8_MAX;
	volatile uint64_t x744 = 24981032LLU;
	uint64_t t185 = 28078LLU;

    t185 = (((x741^x742)!=x743)^x744);

    if (t185 != 24981033LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	volatile int64_t x746 = INT64_MAX;
	static int32_t x747 = -1;
	uint16_t x748 = UINT16_MAX;
	static int32_t t186 = 2075;

    t186 = (((x745^x746)!=x747)^x748);

    if (t186 != 65535) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	int16_t x750 = -1;
	int64_t x751 = 15LL;
	static uint8_t x752 = 74U;
	int32_t t187 = -33;

    t187 = (((x749^x750)!=x751)^x752);

    if (t187 != 75) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -62;
	int8_t x754 = 5;
	uint16_t x755 = 14828U;
	static int64_t x756 = -961188013169416LL;
	volatile int64_t t188 = 228206680LL;

    t188 = (((x753^x754)!=x755)^x756);

    if (t188 != -961188013169415LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MAX;
	uint32_t x758 = UINT32_MAX;
	volatile uint32_t x759 = UINT32_MAX;
	uint64_t t189 = 8803216001822LLU;

    t189 = (((x757^x758)!=x759)^x760);

    if (t189 != 591949944170346LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MAX;
	uint16_t x762 = 451U;
	int32_t x763 = INT32_MIN;
	int64_t x764 = -1LL;
	volatile int64_t t190 = 5LL;

    t190 = (((x761^x762)!=x763)^x764);

    if (t190 != -2LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint64_t x765 = 195LLU;
	volatile int32_t x766 = INT32_MAX;
	int64_t x767 = -1LL;
	int32_t x768 = 5530785;
	volatile int32_t t191 = -3841712;

    t191 = (((x765^x766)!=x767)^x768);

    if (t191 != 5530784) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = UINT16_MAX;
	int8_t x770 = -1;
	int8_t x771 = -63;
	volatile int32_t t192 = -230732;

    t192 = (((x769^x770)!=x771)^x772);

    if (t192 != -127) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x774 = -3;
	static int32_t x776 = -11384;
	int32_t t193 = -2480913;

    t193 = (((x773^x774)!=x775)^x776);

    if (t193 != -11383) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 178;
	volatile int32_t x778 = -349859;
	int16_t x779 = -3150;
	int16_t x780 = 7;

    t194 = (((x777^x778)!=x779)^x780);

    if (t194 != 6) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 0LLU;
	uint8_t x782 = UINT8_MAX;
	static int16_t x784 = 0;
	static volatile int32_t t195 = -26;

    t195 = (((x781^x782)!=x783)^x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	int32_t x787 = -1;
	int32_t x788 = INT32_MIN;
	volatile int32_t t196 = 0;

    t196 = (((x785^x786)!=x787)^x788);

    if (t196 != -2147483647) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = INT32_MAX;
	static uint32_t x790 = 81U;
	uint32_t x791 = 1595U;
	volatile int16_t x792 = -1;
	static volatile int32_t t197 = -2204071;

    t197 = (((x789^x790)!=x791)^x792);

    if (t197 != -2) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x795 = UINT8_MAX;
	static uint8_t x796 = 4U;
	volatile int32_t t198 = -236729930;

    t198 = (((x793^x794)!=x795)^x796);

    if (t198 != 5) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MAX;
	static int16_t x798 = -1;
	static int16_t x799 = -1;
	static int32_t x800 = INT32_MIN;
	volatile int32_t t199 = 9509501;

    t199 = (((x797^x798)!=x799)^x800);

    if (t199 != -2147483647) { NG(); } else { ; }
	
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

