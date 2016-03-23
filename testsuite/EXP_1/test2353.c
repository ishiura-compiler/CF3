
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

static int8_t x10 = 3;
static uint32_t x11 = UINT32_MAX;
uint8_t x13 = UINT8_MAX;
int64_t x27 = INT64_MIN;
static uint8_t x28 = UINT8_MAX;
volatile int64_t t4 = 1047667227677403020LL;
volatile uint32_t x30 = UINT32_MAX;
int64_t t5 = -12981987LL;
uint64_t x35 = 115149LLU;
int64_t t7 = 25024605024836LL;
volatile uint64_t x47 = 5337LLU;
uint16_t x48 = UINT16_MAX;
int32_t x49 = INT32_MIN;
int16_t x59 = -16034;
static int32_t x61 = INT32_MAX;
int8_t x65 = -1;
uint16_t x71 = UINT16_MAX;
uint8_t x73 = 1U;
static uint32_t x84 = UINT32_MAX;
uint64_t t16 = 16604861LLU;
int8_t x85 = -1;
uint64_t x87 = 3188526054019236224LLU;
uint64_t t17 = 524734LLU;
static uint64_t x90 = 1285644964674LLU;
uint64_t x91 = 56108425787LLU;
int16_t x92 = 43;
static int64_t x97 = INT64_MIN;
static int32_t x98 = INT32_MIN;
uint16_t x99 = 1U;
static uint64_t x108 = 505625580LLU;
int8_t x111 = INT8_MAX;
int32_t x112 = -259139711;
int32_t x117 = 2549167;
int16_t x119 = INT16_MIN;
volatile int8_t x132 = 0;
uint64_t x133 = UINT64_MAX;
volatile uint64_t t26 = 18LLU;
int32_t x137 = INT32_MIN;
static uint32_t x161 = 1U;
int32_t x162 = 2323969;
int8_t x165 = -1;
volatile uint64_t x169 = 29857LLU;
int16_t x171 = INT16_MIN;
uint32_t x177 = 985U;
volatile uint8_t x178 = UINT8_MAX;
volatile int64_t t37 = -2831091683159228LL;
uint64_t x187 = UINT64_MAX;
uint32_t x198 = 12U;
uint32_t x202 = UINT32_MAX;
uint16_t x207 = 135U;
int32_t x208 = INT32_MIN;
int32_t x209 = INT32_MIN;
volatile int32_t t44 = 504641;
volatile uint16_t x215 = 2U;
uint8_t x219 = 4U;
volatile int32_t t46 = -4;
static uint64_t x221 = 1709556586LLU;
volatile uint64_t t49 = 49034LLU;
uint8_t x251 = UINT8_MAX;
static volatile int64_t t52 = 183LL;
int8_t x253 = -1;
volatile int32_t t54 = 3980298;
int64_t x264 = -1LL;
volatile int64_t x265 = -1455162LL;
static volatile uint64_t t57 = 18423135847607692LLU;
static uint64_t t58 = UINT64_MAX;
int32_t x282 = INT32_MAX;
volatile int64_t t62 = 13284621625LL;
int32_t x297 = INT32_MIN;
volatile uint8_t x298 = 5U;
static uint16_t x299 = 11U;
int8_t x302 = INT8_MIN;
static uint64_t x314 = 513469675088LLU;
static int32_t x320 = INT32_MAX;
uint64_t x321 = 31671LLU;
uint16_t x333 = UINT16_MAX;
static int64_t t69 = 71619LL;
int32_t x358 = INT32_MIN;
volatile int64_t x364 = -1LL;
static int64_t t75 = 887407694177LL;
int32_t t76 = -75189;
static int8_t x376 = INT8_MIN;
int64_t x390 = INT64_MIN;
static int32_t x394 = 56444497;
volatile uint32_t x399 = UINT32_MAX;
int16_t x400 = INT16_MAX;
static uint32_t t82 = 192735U;
static volatile int32_t x401 = -2;
volatile uint8_t x404 = UINT8_MAX;
int64_t x405 = 663LL;
int8_t x406 = -1;
static volatile int64_t t84 = -12LL;
int64_t x409 = INT64_MIN;
uint8_t x411 = 62U;
static int64_t t85 = 16086855247791LL;
static volatile uint8_t x422 = UINT8_MAX;
static volatile int8_t x425 = -1;
int32_t x426 = INT32_MAX;
static volatile uint64_t t87 = 0LLU;
volatile int16_t x429 = 0;
int16_t x433 = 819;
int32_t x434 = INT32_MIN;
int32_t x441 = -1;
static uint64_t x444 = UINT64_MAX;
uint32_t x447 = 64751U;
uint8_t x455 = UINT8_MAX;
uint32_t x460 = UINT32_MAX;
uint64_t t95 = 12440840LLU;
static volatile int16_t x466 = -2364;
uint8_t x468 = 2U;
int32_t t97 = -2808053;
uint64_t x483 = 32869488483784LLU;
int64_t x488 = 495302824LL;
static int32_t t101 = 2240248;
static uint64_t x499 = UINT64_MAX;
int32_t x500 = 11;
uint64_t x508 = 124LLU;
volatile uint16_t x509 = 10U;
int64_t x514 = INT64_MIN;
uint32_t t107 = 1U;
uint32_t x524 = UINT32_MAX;
uint64_t x529 = 15LLU;
static uint16_t x533 = UINT16_MAX;
int64_t x534 = -1LL;
int64_t t111 = -97850102550LL;
static int64_t x539 = -209LL;
int64_t t112 = -858261LL;
int8_t x542 = -1;
static uint16_t x552 = UINT16_MAX;
uint32_t x558 = UINT32_MAX;
static int32_t x574 = -971000;
int32_t t120 = 7;
int32_t x583 = 60345553;
volatile int64_t x587 = INT64_MIN;
volatile uint64_t t124 = 1847837785787586LLU;
volatile uint16_t x606 = 45U;
uint16_t x618 = 234U;
int64_t t128 = 143495773103LL;
static int64_t x625 = INT64_MIN;
uint32_t x628 = 84U;
uint16_t x632 = UINT16_MAX;
uint64_t t130 = 26627919798496285LLU;
uint8_t x642 = UINT8_MAX;
int8_t x643 = INT8_MAX;
int64_t x653 = INT64_MIN;
static int32_t x659 = 90836906;
uint16_t x664 = 110U;
int32_t x665 = INT32_MAX;
int32_t t138 = 243115728;
volatile int8_t x677 = -7;
static int32_t t141 = 2;
volatile int8_t x683 = -54;
int64_t x685 = -1LL;
volatile int64_t t143 = -137203186765LL;
int16_t x692 = -1;
int64_t t144 = -16397660897LL;
static int64_t x697 = INT64_MAX;
int32_t x699 = INT32_MAX;
int64_t t146 = -399221686491LL;
static int8_t x701 = -1;
int64_t x704 = 1729791130330LL;
int32_t x710 = -1;
static int64_t x712 = -28448060LL;
volatile int64_t t149 = -110589LL;
volatile uint16_t x713 = 185U;
volatile int64_t x714 = 689368734947952379LL;
uint64_t x716 = UINT64_MAX;
int16_t x724 = 63;
int8_t x726 = 6;
int8_t x739 = INT8_MIN;
volatile int16_t x742 = 1;
uint16_t x744 = UINT16_MAX;
int32_t t155 = 19;
uint16_t x759 = 5U;
int32_t x769 = -1;
static int32_t x771 = -1;
uint8_t x773 = UINT8_MAX;
uint8_t x775 = 1U;
uint32_t t161 = 1U;
static uint32_t t162 = 3631U;
int8_t x794 = INT8_MIN;
static int8_t x795 = INT8_MIN;
volatile int64_t t164 = -175566243220691LL;
uint64_t x803 = 338856079350LLU;
int64_t x804 = -1LL;
volatile uint32_t x818 = 688310U;
uint8_t x822 = 1U;
uint32_t x823 = 1058551918U;
static volatile uint64_t t170 = 622701743203614LLU;
int64_t x833 = INT64_MAX;
volatile uint32_t t174 = 370172U;
static int16_t x858 = -1;
uint64_t x865 = 338530835037174409LLU;
volatile int16_t x869 = 2238;
static volatile int32_t x871 = -60;
static int8_t x875 = INT8_MIN;
int32_t x878 = -1;
static int16_t x880 = INT16_MIN;
volatile int32_t x882 = INT32_MIN;
static uint16_t x883 = 7U;
uint32_t x886 = UINT32_MAX;
volatile int16_t x889 = -1;
int16_t x892 = -1524;
static int64_t t183 = -11LL;
static int16_t x895 = INT16_MIN;
int16_t x896 = INT16_MIN;
volatile int32_t t184 = -1;
static uint64_t t186 = 34261293062528745LLU;
uint8_t x905 = 23U;
volatile int32_t x908 = -407;
volatile int32_t t187 = 904998;
uint32_t x910 = 17U;
volatile uint64_t t188 = 60947073884201778LLU;
int32_t x913 = -849;
uint16_t x914 = UINT16_MAX;
int32_t x915 = -71792;
uint64_t x918 = 3706LLU;
int32_t x920 = 0;
uint32_t x922 = UINT32_MAX;
volatile uint64_t t192 = 1593723662186854907LLU;
uint32_t x929 = UINT32_MAX;
static int64_t x932 = INT64_MAX;
static volatile int16_t x936 = 3;
volatile int64_t t194 = -104464216LL;
volatile int8_t x937 = INT8_MAX;
int16_t x948 = INT16_MIN;
uint64_t x953 = 4002638LLU;
int32_t x955 = INT32_MIN;


void f0(void) {
    	uint64_t x5 = 6726061LLU;
	int64_t x6 = -80815684175665415LL;
	volatile uint64_t x7 = 4221554155304587485LLU;
	static volatile uint32_t x8 = 3141796U;
	volatile uint64_t t0 = 26300598171865LLU;

    t0 = (((x5|x6)+x7)+x8);

    if (t0 != 4140738471132195198LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = UINT16_MAX;
	static uint16_t x12 = 90U;
	volatile uint32_t t1 = 48U;

    t1 = (((x9|x10)+x11)+x12);

    if (t1 != 65624U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x14 = INT32_MAX;
	volatile uint32_t x15 = 198460U;
	int64_t x16 = INT64_MIN;
	volatile int64_t t2 = 103LL;

    t2 = (((x13|x14)+x15)+x16);

    if (t2 != -9223372034707093701LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x21 = 0;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = 2615301LLU;
	volatile int16_t x24 = INT16_MIN;
	uint64_t t3 = 40862319387090LLU;

    t3 = (((x21|x22)+x23)+x24);

    if (t3 != 9223372036857358341LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x25 = 1U;
	volatile uint8_t x26 = 2U;

    t4 = (((x25|x26)+x27)+x28);

    if (t4 != -9223372036854775550LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x29 = -2700908;
	static int8_t x31 = INT8_MIN;
	static int64_t x32 = -14633898LL;

    t5 = (((x29|x30)+x31)+x32);

    if (t5 != 4280333269LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x33 = -1;
	static int64_t x34 = INT64_MAX;
	volatile int64_t x36 = INT64_MIN;
	uint64_t t6 = 17162350LLU;

    t6 = (((x33|x34)+x35)+x36);

    if (t6 != 9223372036854890956LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x37 = UINT8_MAX;
	int64_t x38 = INT64_MIN;
	int8_t x39 = 0;
	int16_t x40 = -1;

    t7 = (((x37|x38)+x39)+x40);

    if (t7 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x41 = 1U;
	uint8_t x42 = UINT8_MAX;
	volatile uint16_t x43 = UINT16_MAX;
	int64_t x44 = INT64_MIN;
	int64_t t8 = -1832119859LL;

    t8 = (((x41|x42)+x43)+x44);

    if (t8 != -9223372036854710018LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = INT32_MAX;
	int64_t x46 = -1LL;
	static volatile uint64_t t9 = 12965769LLU;

    t9 = (((x45|x46)+x47)+x48);

    if (t9 != 70871LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x50 = 135173575080710483LLU;
	int16_t x51 = -18;
	int8_t x52 = -1;
	volatile uint64_t t10 = 175107507249836959LLU;

    t10 = (((x49|x50)+x51)+x52);

    if (t10 != 18446744073671053632LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	uint8_t x60 = 1U;
	int32_t t11 = -3529;

    t11 = (((x57|x58)+x59)+x60);

    if (t11 != -48801) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x62 = INT8_MIN;
	int16_t x63 = INT16_MIN;
	volatile uint16_t x64 = 295U;
	volatile int32_t t12 = 123083546;

    t12 = (((x61|x62)+x63)+x64);

    if (t12 != -32474) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x66 = 1;
	uint16_t x67 = 32262U;
	volatile int32_t x68 = INT32_MIN;
	volatile int32_t t13 = -2690774;

    t13 = (((x65|x66)+x67)+x68);

    if (t13 != -2147451387) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = INT32_MIN;
	uint32_t x70 = 1053U;
	uint8_t x72 = UINT8_MAX;
	volatile uint32_t t14 = 395U;

    t14 = (((x69|x70)+x71)+x72);

    if (t14 != 2147550491U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x74 = -6;
	volatile int64_t x75 = 450773271159296LL;
	uint64_t x76 = 680136LLU;
	uint64_t t15 = 40528823159LLU;

    t15 = (((x73|x74)+x75)+x76);

    if (t15 != 450773271839427LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x81 = 97LLU;
	static int8_t x82 = -51;
	int32_t x83 = INT32_MIN;

    t16 = (((x81|x82)+x83)+x84);

    if (t16 != 2147483628LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x86 = INT64_MIN;
	uint32_t x88 = UINT32_MAX;

    t17 = (((x85|x86)+x87)+x88);

    if (t17 != 3188526058314203518LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x89 = INT64_MAX;
	uint64_t t18 = 129256LLU;

    t18 = (((x89|x90)+x91)+x92);

    if (t18 != 9223372092963201637LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x100 = INT8_MIN;
	static volatile int64_t t19 = 106LL;

    t19 = (((x97|x98)+x99)+x100);

    if (t19 != -2147483775LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x105 = INT16_MIN;
	static volatile int32_t x106 = -1;
	uint8_t x107 = 11U;
	uint64_t t20 = 162474075941947LLU;

    t20 = (((x105|x106)+x107)+x108);

    if (t20 != 505625590LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = 6510;
	static int32_t x110 = 29647;
	int32_t t21 = 132501080;

    t21 = (((x109|x110)+x111)+x112);

    if (t21 != -259107857) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x113 = INT8_MIN;
	uint32_t x114 = 88287394U;
	volatile int8_t x115 = -1;
	volatile int64_t x116 = INT64_MIN;
	static volatile int64_t t22 = 232481882520782LL;

    t22 = (((x113|x114)+x115)+x116);

    if (t22 != -9223372032559808607LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x118 = INT64_MIN;
	int8_t x120 = -1;
	volatile int64_t t23 = -64513140673LL;

    t23 = (((x117|x118)+x119)+x120);

    if (t23 != -9223372036852259410LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x125 = -1;
	static int32_t x126 = -1116;
	volatile int16_t x127 = INT16_MIN;
	static volatile int8_t x128 = INT8_MAX;
	volatile int32_t t24 = -113867;

    t24 = (((x125|x126)+x127)+x128);

    if (t24 != -32642) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x129 = -1;
	uint8_t x130 = 5U;
	int16_t x131 = INT16_MIN;
	int32_t t25 = -10920;

    t25 = (((x129|x130)+x131)+x132);

    if (t25 != -32769) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x134 = 0;
	int16_t x135 = -1;
	static uint16_t x136 = 4U;

    t26 = (((x133|x134)+x135)+x136);

    if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x138 = INT8_MIN;
	int8_t x139 = 2;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t27 = -536065793;

    t27 = (((x137|x138)+x139)+x140);

    if (t27 != 65409) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x141 = 11U;
	static int8_t x142 = 11;
	static int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t28 = 1041344;

    t28 = (((x141|x142)+x143)+x144);

    if (t28 != -245) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x145 = -1;
	int64_t x146 = INT64_MAX;
	int8_t x147 = INT8_MIN;
	volatile int16_t x148 = -1;
	int64_t t29 = -15LL;

    t29 = (((x145|x146)+x147)+x148);

    if (t29 != -130LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x149 = 12955;
	int8_t x150 = INT8_MAX;
	static int8_t x151 = -1;
	static int64_t x152 = INT64_MIN;
	volatile int64_t t30 = -5335299284113517LL;

    t30 = (((x149|x150)+x151)+x152);

    if (t30 != -9223372036854762754LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x153 = 225U;
	int64_t x154 = INT64_MAX;
	int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	static volatile int64_t t31 = 85LL;

    t31 = (((x153|x154)+x155)+x156);

    if (t31 != 9223372036854775551LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x163 = UINT8_MAX;
	volatile int64_t x164 = 2344975856023984LL;
	volatile int64_t t32 = 466533553402282LL;

    t32 = (((x161|x162)+x163)+x164);

    if (t32 != 2344975858348208LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x166 = -503530444;
	int8_t x167 = INT8_MIN;
	int16_t x168 = -1;
	int32_t t33 = 117630;

    t33 = (((x165|x166)+x167)+x168);

    if (t33 != -130) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x170 = UINT32_MAX;
	int64_t x172 = 70471LL;
	uint64_t t34 = 1429840LLU;

    t34 = (((x169|x170)+x171)+x172);

    if (t34 != 4295004998LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x173 = -1LL;
	int8_t x174 = INT8_MAX;
	uint16_t x175 = 87U;
	uint16_t x176 = UINT16_MAX;
	int64_t t35 = 490713LL;

    t35 = (((x173|x174)+x175)+x176);

    if (t35 != 65621LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x179 = 28LLU;
	static int32_t x180 = INT32_MIN;
	volatile uint64_t t36 = 204LLU;

    t36 = (((x177|x178)+x179)+x180);

    if (t36 != 18446744071562069019LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x181 = UINT32_MAX;
	volatile int8_t x182 = -5;
	int64_t x183 = 2985LL;
	uint32_t x184 = UINT32_MAX;

    t37 = (((x181|x182)+x183)+x184);

    if (t37 != 8589937575LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x185 = 11;
	uint32_t x186 = 114763U;
	volatile int8_t x188 = -1;
	volatile uint64_t t38 = 3726667301429857LLU;

    t38 = (((x185|x186)+x187)+x188);

    if (t38 != 114761LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x189 = -750587848724467LL;
	static int8_t x190 = -25;
	int16_t x191 = INT16_MAX;
	uint32_t x192 = UINT32_MAX;
	volatile int64_t t39 = 282066011485780725LL;

    t39 = (((x189|x190)+x191)+x192);

    if (t39 != 4295000045LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x193 = INT8_MIN;
	uint8_t x194 = 5U;
	int16_t x195 = -1;
	uint32_t x196 = 288U;
	uint32_t t40 = 686122691U;

    t40 = (((x193|x194)+x195)+x196);

    if (t40 != 164U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x197 = -116;
	static int8_t x199 = INT8_MAX;
	volatile uint16_t x200 = 2039U;
	uint32_t t41 = 13361254U;

    t41 = (((x197|x198)+x199)+x200);

    if (t41 != 2050U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x201 = 12271;
	volatile int32_t x203 = INT32_MIN;
	int32_t x204 = INT32_MIN;
	volatile uint32_t t42 = UINT32_MAX;

    t42 = (((x201|x202)+x203)+x204);

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x205 = INT8_MIN;
	uint8_t x206 = UINT8_MAX;
	int32_t t43 = -36;

    t43 = (((x205|x206)+x207)+x208);

    if (t43 != -2147483514) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x210 = INT16_MAX;
	static volatile int16_t x211 = INT16_MAX;
	int16_t x212 = 8;

    t44 = (((x209|x210)+x211)+x212);

    if (t44 != -2147418106) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x213 = INT16_MIN;
	static int32_t x214 = INT32_MIN;
	volatile uint64_t x216 = 11414LLU;
	volatile uint64_t t45 = 207LLU;

    t45 = (((x213|x214)+x215)+x216);

    if (t45 != 18446744073709530264LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x217 = -1;
	uint8_t x218 = 0U;
	int32_t x220 = INT32_MIN;

    t46 = (((x217|x218)+x219)+x220);

    if (t46 != -2147483645) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x222 = INT64_MIN;
	uint16_t x223 = 7510U;
	uint32_t x224 = UINT32_MAX;
	volatile uint64_t t47 = 42412LLU;

    t47 = (((x221|x222)+x223)+x224);

    if (t47 != 9223372042859307199LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x225 = UINT64_MAX;
	uint8_t x226 = 2U;
	int8_t x227 = -2;
	volatile uint32_t x228 = UINT32_MAX;
	volatile uint64_t t48 = 20185061LLU;

    t48 = (((x225|x226)+x227)+x228);

    if (t48 != 4294967292LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x237 = INT32_MIN;
	static uint64_t x238 = 479025LLU;
	int32_t x239 = -1;
	uint32_t x240 = 1423639U;

    t49 = (((x237|x238)+x239)+x240);

    if (t49 != 18446744071563970631LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x241 = 5627033U;
	static int8_t x242 = -1;
	int16_t x243 = INT16_MIN;
	int16_t x244 = 1113;
	volatile uint32_t t50 = 786505U;

    t50 = (((x241|x242)+x243)+x244);

    if (t50 != 4294935640U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x245 = -11745;
	int8_t x246 = INT8_MIN;
	static int32_t x247 = 992440;
	int64_t x248 = 24092397994268LL;
	volatile int64_t t51 = -100984785LL;

    t51 = (((x245|x246)+x247)+x248);

    if (t51 != 24092398986611LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x249 = -1;
	int64_t x250 = 6649LL;
	uint16_t x252 = 3125U;

    t52 = (((x249|x250)+x251)+x252);

    if (t52 != 3379LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x254 = 14272U;
	int32_t x255 = 1;
	int8_t x256 = 8;
	volatile int32_t t53 = -2;

    t53 = (((x253|x254)+x255)+x256);

    if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x257 = -1;
	int32_t x258 = 444010;
	static uint16_t x259 = 1896U;
	int16_t x260 = INT16_MAX;

    t54 = (((x257|x258)+x259)+x260);

    if (t54 != 34662) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x261 = INT64_MAX;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = -2;
	volatile int64_t t55 = -1221909833828LL;

    t55 = (((x261|x262)+x263)+x264);

    if (t55 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x266 = 1598U;
	uint8_t x267 = 10U;
	static uint32_t x268 = 0U;
	volatile int64_t t56 = -74044318837013604LL;

    t56 = (((x265|x266)+x267)+x268);

    if (t56 != -1454072LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x269 = UINT64_MAX;
	static volatile int64_t x270 = -6858525123LL;
	int32_t x271 = INT32_MIN;
	static int8_t x272 = -1;

    t57 = (((x269|x270)+x271)+x272);

    if (t57 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x273 = UINT64_MAX;
	int16_t x274 = -1;
	uint8_t x275 = 1U;
	static int64_t x276 = -1LL;

    t58 = (((x273|x274)+x275)+x276);

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x277 = -6;
	uint64_t x278 = 63161710530607LLU;
	volatile uint32_t x279 = 3562118U;
	uint16_t x280 = UINT16_MAX;
	uint64_t t59 = 42350LLU;

    t59 = (((x277|x278)+x279)+x280);

    if (t59 != 3627652LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x281 = -1LL;
	uint8_t x283 = UINT8_MAX;
	volatile int8_t x284 = INT8_MAX;
	volatile int64_t t60 = -2164066LL;

    t60 = (((x281|x282)+x283)+x284);

    if (t60 != 381LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x289 = INT16_MIN;
	volatile int8_t x290 = 5;
	uint64_t x291 = 7534838921987583LLU;
	uint32_t x292 = 1547U;
	uint64_t t61 = 4144109200LLU;

    t61 = (((x289|x290)+x291)+x292);

    if (t61 != 7534838921956367LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x293 = INT32_MAX;
	int64_t x294 = -1LL;
	static int32_t x295 = 109420;
	static volatile int64_t x296 = INT64_MIN;

    t62 = (((x293|x294)+x295)+x296);

    if (t62 != -9223372036854666389LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x300 = INT8_MAX;
	int32_t t63 = -25195186;

    t63 = (((x297|x298)+x299)+x300);

    if (t63 != -2147483505) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x301 = INT64_MAX;
	uint8_t x303 = UINT8_MAX;
	uint64_t x304 = 11644091849LLU;
	volatile uint64_t t64 = 393040100359LLU;

    t64 = (((x301|x302)+x303)+x304);

    if (t64 != 11644092103LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x309 = 3175364218479132766LL;
	uint8_t x310 = UINT8_MAX;
	int8_t x311 = INT8_MAX;
	static uint8_t x312 = 3U;
	volatile int64_t t65 = 7LL;

    t65 = (((x309|x310)+x311)+x312);

    if (t65 != 3175364218479133057LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x313 = INT64_MIN;
	int32_t x315 = -1896287;
	uint64_t x316 = 275104983320002LLU;
	uint64_t t66 = 2297LLU;

    t66 = (((x313|x314)+x315)+x316);

    if (t66 != 9223647655305874611LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x317 = UINT32_MAX;
	static int16_t x318 = INT16_MIN;
	int32_t x319 = -30;
	volatile uint32_t t67 = 1176319452U;

    t67 = (((x317|x318)+x319)+x320);

    if (t67 != 2147483616U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x322 = INT16_MIN;
	int16_t x323 = -46;
	static int8_t x324 = -1;
	uint64_t t68 = 5009328900LLU;

    t68 = (((x321|x322)+x323)+x324);

    if (t68 != 18446744073709550472LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x334 = UINT32_MAX;
	int16_t x335 = 0;
	volatile int64_t x336 = -36042LL;

    t69 = (((x333|x334)+x335)+x336);

    if (t69 != 4294931253LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x337 = INT32_MAX;
	static int32_t x338 = -19919871;
	int8_t x339 = INT8_MIN;
	int16_t x340 = -1;
	volatile int32_t t70 = 858;

    t70 = (((x337|x338)+x339)+x340);

    if (t70 != -130) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x341 = -1LL;
	uint32_t x342 = 681798U;
	int8_t x343 = 7;
	static volatile int8_t x344 = -34;
	volatile int64_t t71 = -55779106854LL;

    t71 = (((x341|x342)+x343)+x344);

    if (t71 != -28LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x345 = -164407;
	int16_t x346 = -175;
	static int64_t x347 = -1LL;
	int8_t x348 = -1;
	int64_t t72 = 1LL;

    t72 = (((x345|x346)+x347)+x348);

    if (t72 != -41LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x349 = INT32_MIN;
	static uint8_t x350 = 24U;
	int64_t x351 = INT64_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int64_t t73 = -4240909390472LL;

    t73 = (((x349|x350)+x351)+x352);

    if (t73 != 9223372034707357718LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x357 = 356964;
	uint16_t x359 = 14917U;
	int32_t x360 = 845630938;
	static int32_t t74 = 28174;

    t74 = (((x357|x358)+x359)+x360);

    if (t74 != -1301480829) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x361 = 42535255;
	int32_t x362 = INT32_MAX;
	volatile int64_t x363 = -6234406140780LL;

    t75 = (((x361|x362)+x363)+x364);

    if (t75 != -6232258657134LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x365 = UINT16_MAX;
	int8_t x366 = -1;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = INT16_MIN;

    t76 = (((x365|x366)+x367)+x368);

    if (t76 != 32766) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x373 = 1772978U;
	int32_t x374 = 539352;
	int16_t x375 = -1;
	volatile uint32_t t77 = 215036U;

    t77 = (((x373|x374)+x375)+x376);

    if (t77 != 1785721U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x377 = 1U;
	uint64_t x378 = 9491279720LLU;
	static uint16_t x379 = UINT16_MAX;
	int8_t x380 = -1;
	volatile uint64_t t78 = 4618139060170LLU;

    t78 = (((x377|x378)+x379)+x380);

    if (t78 != 9491345255LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x385 = 22147454142LLU;
	uint32_t x386 = UINT32_MAX;
	volatile int8_t x387 = INT8_MAX;
	int32_t x388 = 642466;
	static volatile uint64_t t79 = 100741995LLU;

    t79 = (((x385|x386)+x387)+x388);

    if (t79 != 25770446368LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x389 = UINT64_MAX;
	volatile uint8_t x391 = UINT8_MAX;
	int8_t x392 = INT8_MIN;
	volatile uint64_t t80 = 10225399309320122LLU;

    t80 = (((x389|x390)+x391)+x392);

    if (t80 != 126LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x393 = -12;
	uint64_t x395 = 1551705752464LLU;
	int8_t x396 = 45;
	volatile uint64_t t81 = 227984472334293132LLU;

    t81 = (((x393|x394)+x395)+x396);

    if (t81 != 1551705752498LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x397 = 853528;
	volatile int16_t x398 = -1;

    t82 = (((x397|x398)+x399)+x400);

    if (t82 != 32765U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x402 = INT8_MIN;
	int32_t x403 = -231;
	volatile int32_t t83 = -21217702;

    t83 = (((x401|x402)+x403)+x404);

    if (t83 != 22) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x407 = UINT8_MAX;
	int16_t x408 = 1088;

    t84 = (((x405|x406)+x407)+x408);

    if (t84 != 1342LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x410 = -1;
	uint32_t x412 = 2011947U;

    t85 = (((x409|x410)+x411)+x412);

    if (t85 != 2012008LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x421 = -1;
	int32_t x423 = -1;
	uint32_t x424 = UINT32_MAX;
	uint32_t t86 = 192785U;

    t86 = (((x421|x422)+x423)+x424);

    if (t86 != 4294967293U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x427 = UINT64_MAX;
	int16_t x428 = INT16_MIN;

    t87 = (((x425|x426)+x427)+x428);

    if (t87 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x430 = INT32_MAX;
	uint32_t x431 = 126743926U;
	int16_t x432 = INT16_MIN;
	volatile uint32_t t88 = 748U;

    t88 = (((x429|x430)+x431)+x432);

    if (t88 != 2274194805U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x435 = 531019609005879321LLU;
	uint8_t x436 = UINT8_MAX;
	volatile uint64_t t89 = 3LLU;

    t89 = (((x433|x434)+x435)+x436);

    if (t89 != 531019606858396747LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x437 = 52;
	int32_t x438 = INT32_MIN;
	int16_t x439 = 159;
	int16_t x440 = INT16_MAX;
	static int32_t t90 = 2380842;

    t90 = (((x437|x438)+x439)+x440);

    if (t90 != -2147450670) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x442 = -1;
	int64_t x443 = 1LL;
	volatile uint64_t t91 = UINT64_MAX;

    t91 = (((x441|x442)+x443)+x444);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x445 = 17U;
	int16_t x446 = INT16_MAX;
	int64_t x448 = INT64_MIN;
	int64_t t92 = -58512977323LL;

    t92 = (((x445|x446)+x447)+x448);

    if (t92 != -9223372036854678290LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x449 = INT32_MIN;
	int16_t x450 = INT16_MAX;
	uint8_t x451 = 5U;
	uint8_t x452 = UINT8_MAX;
	volatile int32_t t93 = 120;

    t93 = (((x449|x450)+x451)+x452);

    if (t93 != -2147450621) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x453 = 21344U;
	int32_t x454 = INT32_MIN;
	uint64_t x456 = UINT64_MAX;
	uint64_t t94 = 14379100486048LLU;

    t94 = (((x453|x454)+x455)+x456);

    if (t94 != 2147505246LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x457 = 2845320384LLU;
	static int64_t x458 = -1LL;
	volatile int64_t x459 = -1LL;

    t95 = (((x457|x458)+x459)+x460);

    if (t95 != 4294967293LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x461 = INT16_MIN;
	static int8_t x462 = 13;
	int8_t x463 = 5;
	volatile uint64_t x464 = UINT64_MAX;
	uint64_t t96 = 33732310738925LLU;

    t96 = (((x461|x462)+x463)+x464);

    if (t96 != 18446744073709518865LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x465 = 1;
	int32_t x467 = -1;

    t97 = (((x465|x466)+x467)+x468);

    if (t97 != -2362) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x481 = INT32_MIN;
	static volatile int8_t x482 = -12;
	volatile int32_t x484 = -1;
	static volatile uint64_t t98 = 4606574518823431LLU;

    t98 = (((x481|x482)+x483)+x484);

    if (t98 != 32869488483771LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x485 = UINT32_MAX;
	volatile uint16_t x486 = 0U;
	static int8_t x487 = INT8_MIN;
	volatile int64_t t99 = 24837305LL;

    t99 = (((x485|x486)+x487)+x488);

    if (t99 != 4790269991LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x489 = 6U;
	volatile int8_t x490 = INT8_MIN;
	uint32_t x491 = 1349U;
	volatile int8_t x492 = -1;
	volatile uint32_t t100 = 753708U;

    t100 = (((x489|x490)+x491)+x492);

    if (t100 != 1226U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	volatile int8_t x495 = INT8_MIN;
	uint8_t x496 = 22U;

    t101 = (((x493|x494)+x495)+x496);

    if (t101 != -234) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x497 = UINT32_MAX;
	static uint16_t x498 = 0U;
	static volatile uint64_t t102 = 204327721549259LLU;

    t102 = (((x497|x498)+x499)+x500);

    if (t102 != 4294967305LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x501 = INT16_MIN;
	uint8_t x502 = 10U;
	int8_t x503 = INT8_MIN;
	int8_t x504 = INT8_MIN;
	volatile int32_t t103 = -16041;

    t103 = (((x501|x502)+x503)+x504);

    if (t103 != -33014) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x505 = INT8_MIN;
	static int64_t x506 = INT64_MIN;
	int16_t x507 = INT16_MIN;
	volatile uint64_t t104 = 6385678LLU;

    t104 = (((x505|x506)+x507)+x508);

    if (t104 != 18446744073709518844LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x510 = 1U;
	int8_t x511 = INT8_MIN;
	int64_t x512 = -1LL;
	volatile int64_t t105 = 108910147LL;

    t105 = (((x509|x510)+x511)+x512);

    if (t105 != -118LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x513 = -1;
	uint8_t x515 = 113U;
	uint32_t x516 = UINT32_MAX;
	int64_t t106 = 40338481LL;

    t106 = (((x513|x514)+x515)+x516);

    if (t106 != 4294967407LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x517 = 1626U;
	int16_t x518 = INT16_MAX;
	volatile int32_t x519 = INT32_MIN;
	volatile int8_t x520 = INT8_MIN;

    t107 = (((x517|x518)+x519)+x520);

    if (t107 != 2147516287U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x521 = 0;
	int8_t x522 = 6;
	int16_t x523 = 493;
	static uint32_t t108 = 118320197U;

    t108 = (((x521|x522)+x523)+x524);

    if (t108 != 498U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x525 = -1LL;
	uint32_t x526 = 8642U;
	static int8_t x527 = INT8_MAX;
	static int64_t x528 = INT64_MIN;
	volatile int64_t t109 = 2163655050874434LL;

    t109 = (((x525|x526)+x527)+x528);

    if (t109 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x530 = 11672;
	int32_t x531 = -4990143;
	int16_t x532 = 45;
	static uint64_t t110 = 20659625574LLU;

    t110 = (((x529|x530)+x531)+x532);

    if (t110 != 18446744073704573197LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x535 = UINT32_MAX;
	static int16_t x536 = 3224;

    t111 = (((x533|x534)+x535)+x536);

    if (t111 != 4294970518LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x537 = INT32_MAX;
	static uint32_t x538 = 119730U;
	static volatile int32_t x540 = INT32_MIN;

    t112 = (((x537|x538)+x539)+x540);

    if (t112 != -210LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x541 = -1;
	int32_t x543 = -15177;
	static int16_t x544 = INT16_MIN;
	int32_t t113 = -1035509;

    t113 = (((x541|x542)+x543)+x544);

    if (t113 != -47946) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x545 = -1;
	uint64_t x546 = 4LLU;
	static int16_t x547 = -1;
	volatile uint8_t x548 = 0U;
	volatile uint64_t t114 = 152903188LLU;

    t114 = (((x545|x546)+x547)+x548);

    if (t114 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x549 = INT16_MIN;
	volatile uint16_t x550 = 0U;
	int32_t x551 = -76;
	volatile int32_t t115 = 1;

    t115 = (((x549|x550)+x551)+x552);

    if (t115 != 32691) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x553 = INT32_MIN;
	int8_t x554 = -1;
	static volatile int8_t x555 = -4;
	int64_t x556 = INT64_MAX;
	int64_t t116 = 10038302407953LL;

    t116 = (((x553|x554)+x555)+x556);

    if (t116 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int64_t x557 = 8021598558948214LL;
	volatile int16_t x559 = -810;
	int16_t x560 = -1;
	volatile int64_t t117 = 4296245480916235LL;

    t117 = (((x557|x558)+x559)+x560);

    if (t117 != 8021598749588692LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x561 = -9865999;
	static uint8_t x562 = 1U;
	uint8_t x563 = UINT8_MAX;
	int8_t x564 = INT8_MAX;
	volatile int32_t t118 = -3334382;

    t118 = (((x561|x562)+x563)+x564);

    if (t118 != -9865617) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x569 = INT8_MIN;
	volatile int64_t x570 = -863LL;
	int32_t x571 = 0;
	static int64_t x572 = 340696692LL;
	int64_t t119 = 4219435599344502919LL;

    t119 = (((x569|x570)+x571)+x572);

    if (t119 != 340696597LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x573 = -1;
	uint8_t x575 = UINT8_MAX;
	uint16_t x576 = UINT16_MAX;

    t120 = (((x573|x574)+x575)+x576);

    if (t120 != 65789) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x581 = 308147;
	static uint8_t x582 = 126U;
	volatile int32_t x584 = 10450;
	volatile int32_t t121 = -752028037;

    t121 = (((x581|x582)+x583)+x584);

    if (t121 != 60664226) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x585 = INT32_MAX;
	static uint32_t x586 = UINT32_MAX;
	uint16_t x588 = 17792U;
	int64_t t122 = -29187249020993LL;

    t122 = (((x585|x586)+x587)+x588);

    if (t122 != -9223372032559790721LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x593 = 23U;
	uint16_t x594 = UINT16_MAX;
	int64_t x595 = 19LL;
	int64_t x596 = INT64_MIN;
	int64_t t123 = 821747583LL;

    t123 = (((x593|x594)+x595)+x596);

    if (t123 != -9223372036854710254LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x597 = 39U;
	volatile int8_t x598 = INT8_MIN;
	int16_t x599 = -7132;
	static uint64_t x600 = UINT64_MAX;

    t124 = (((x597|x598)+x599)+x600);

    if (t124 != 18446744073709544394LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x605 = 591354U;
	static volatile uint8_t x607 = 1U;
	static int16_t x608 = 4127;
	uint32_t t125 = 64U;

    t125 = (((x605|x606)+x607)+x608);

    if (t125 != 595487U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x609 = -1;
	int64_t x610 = INT64_MIN;
	uint8_t x611 = 2U;
	static volatile int64_t x612 = 14506699LL;
	volatile int64_t t126 = -198LL;

    t126 = (((x609|x610)+x611)+x612);

    if (t126 != 14506700LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x617 = -50;
	static int64_t x619 = INT64_MAX;
	uint64_t x620 = UINT64_MAX;
	static uint64_t t127 = 2716237LLU;

    t127 = (((x617|x618)+x619)+x620);

    if (t127 != 9223372036854775788LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x621 = 218LL;
	static volatile uint8_t x622 = 23U;
	int8_t x623 = INT8_MIN;
	uint8_t x624 = 2U;

    t128 = (((x621|x622)+x623)+x624);

    if (t128 != 97LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x626 = INT8_MIN;
	int16_t x627 = INT16_MIN;
	int64_t t129 = -105997LL;

    t129 = (((x625|x626)+x627)+x628);

    if (t129 != -32812LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x629 = -1;
	volatile int16_t x630 = -867;
	uint64_t x631 = 3296425597LLU;

    t130 = (((x629|x630)+x631)+x632);

    if (t130 != 3296491131LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x637 = 131161311225587481LL;
	int8_t x638 = -51;
	int64_t x639 = -1LL;
	int16_t x640 = -1;
	int64_t t131 = -33572079167079189LL;

    t131 = (((x637|x638)+x639)+x640);

    if (t131 != -37LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x641 = -1;
	static int64_t x644 = INT64_MIN;
	int64_t t132 = -4LL;

    t132 = (((x641|x642)+x643)+x644);

    if (t132 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x645 = -1;
	int64_t x646 = 135367569LL;
	uint64_t x647 = 2001856554837LLU;
	int64_t x648 = INT64_MIN;
	volatile uint64_t t133 = 5584853LLU;

    t133 = (((x645|x646)+x647)+x648);

    if (t133 != 9223374038711330644LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x649 = 5;
	uint64_t x650 = UINT64_MAX;
	volatile int64_t x651 = -17181LL;
	int16_t x652 = INT16_MIN;
	volatile uint64_t t134 = 0LLU;

    t134 = (((x649|x650)+x651)+x652);

    if (t134 != 18446744073709501666LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x654 = 259466;
	volatile int16_t x655 = 1;
	int32_t x656 = 3859420;
	int64_t t135 = 27LL;

    t135 = (((x653|x654)+x655)+x656);

    if (t135 != -9223372036850656921LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x657 = 63913446126841841LLU;
	int16_t x658 = -360;
	volatile int8_t x660 = -49;
	volatile uint64_t t136 = 7687076379720LLU;

    t136 = (((x657|x658)+x659)+x660);

    if (t136 != 90836850LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x661 = UINT64_MAX;
	int64_t x662 = -1LL;
	volatile int8_t x663 = 55;
	uint64_t t137 = 20LLU;

    t137 = (((x661|x662)+x663)+x664);

    if (t137 != 164LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x666 = INT16_MIN;
	int8_t x667 = 18;
	uint8_t x668 = 1U;

    t138 = (((x665|x666)+x667)+x668);

    if (t138 != 18) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x669 = 39051LLU;
	uint64_t x670 = 6183592105LLU;
	int16_t x671 = 353;
	int32_t x672 = INT32_MIN;
	uint64_t t139 = 17LLU;

    t139 = (((x669|x670)+x671)+x672);

    if (t139 != 4036147724LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x673 = UINT64_MAX;
	int64_t x674 = -1LL;
	int64_t x675 = INT64_MAX;
	uint16_t x676 = UINT16_MAX;
	static uint64_t t140 = 131LLU;

    t140 = (((x673|x674)+x675)+x676);

    if (t140 != 9223372036854841341LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x678 = 1;
	int32_t x679 = 139198918;
	int32_t x680 = 106394;

    t141 = (((x677|x678)+x679)+x680);

    if (t141 != 139305305) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x681 = -1;
	volatile int16_t x682 = -1;
	static volatile int32_t x684 = -100484286;
	int32_t t142 = 888334857;

    t142 = (((x681|x682)+x683)+x684);

    if (t142 != -100484341) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x686 = -1;
	int64_t x687 = -1LL;
	int64_t x688 = INT64_MAX;

    t143 = (((x685|x686)+x687)+x688);

    if (t143 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x689 = UINT16_MAX;
	int64_t x690 = INT64_MIN;
	static int8_t x691 = INT8_MAX;

    t144 = (((x689|x690)+x691)+x692);

    if (t144 != -9223372036854710147LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x693 = 5392;
	int16_t x694 = -34;
	int8_t x695 = -10;
	int8_t x696 = 0;
	int32_t t145 = 147655;

    t145 = (((x693|x694)+x695)+x696);

    if (t145 != -44) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x698 = -1;
	static volatile int16_t x700 = 1;

    t146 = (((x697|x698)+x699)+x700);

    if (t146 != 2147483647LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x702 = 76;
	uint8_t x703 = 0U;
	int64_t t147 = 1051632362097612LL;

    t147 = (((x701|x702)+x703)+x704);

    if (t147 != 1729791130329LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x705 = -1LL;
	volatile int16_t x706 = INT16_MAX;
	static volatile uint16_t x707 = 18018U;
	int8_t x708 = 1;
	static volatile int64_t t148 = 34721LL;

    t148 = (((x705|x706)+x707)+x708);

    if (t148 != 18018LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x709 = 662U;
	static int32_t x711 = INT32_MAX;

    t149 = (((x709|x710)+x711)+x712);

    if (t149 != 2119035586LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x715 = 359742188;
	volatile uint64_t t150 = 4614LLU;

    t150 = (((x713|x714)+x715)+x716);

    if (t150 != 689368735307694566LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x721 = INT32_MAX;
	uint64_t x722 = 1571319661413871LLU;
	int64_t x723 = INT64_MAX;
	uint64_t t151 = 799200LLU;

    t151 = (((x721|x722)+x723)+x724);

    if (t151 != 9224943357082468413LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x725 = -1;
	static uint32_t x727 = UINT32_MAX;
	int64_t x728 = INT64_MIN;
	static volatile int64_t t152 = 57872527566LL;

    t152 = (((x725|x726)+x727)+x728);

    if (t152 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x729 = -1LL;
	int64_t x730 = 550806055086LL;
	int32_t x731 = -1;
	uint16_t x732 = UINT16_MAX;
	static int64_t t153 = -51162582400LL;

    t153 = (((x729|x730)+x731)+x732);

    if (t153 != 65533LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x737 = 28354U;
	int64_t x738 = INT64_MIN;
	uint64_t x740 = 57087133LLU;
	volatile uint64_t t154 = 652862146LLU;

    t154 = (((x737|x738)+x739)+x740);

    if (t154 != 9223372036911891167LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x741 = INT16_MIN;
	uint16_t x743 = 20U;

    t155 = (((x741|x742)+x743)+x744);

    if (t155 != 32788) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x745 = 1U;
	int8_t x746 = 5;
	volatile int32_t x747 = -109090345;
	int16_t x748 = -1;
	int32_t t156 = 3089275;

    t156 = (((x745|x746)+x747)+x748);

    if (t156 != -109090341) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x753 = 8;
	volatile uint8_t x754 = 2U;
	int32_t x755 = 657890240;
	int64_t x756 = 939128276089LL;
	volatile int64_t t157 = 104004LL;

    t157 = (((x753|x754)+x755)+x756);

    if (t157 != 939786166339LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x757 = INT8_MAX;
	static int8_t x758 = INT8_MIN;
	int32_t x760 = 50;
	volatile int32_t t158 = -104;

    t158 = (((x757|x758)+x759)+x760);

    if (t158 != 54) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x761 = 51;
	uint64_t x762 = UINT64_MAX;
	uint64_t x763 = 2413974171953594LLU;
	static int64_t x764 = -35444900572273399LL;
	static volatile uint64_t t159 = 6404627LLU;

    t159 = (((x761|x762)+x763)+x764);

    if (t159 != 18413713147309231810LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x770 = 108228U;
	int64_t x772 = -2061LL;
	int64_t t160 = 4022609640102309LL;

    t160 = (((x769|x770)+x771)+x772);

    if (t160 != 4294965233LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x774 = 26527U;
	static int32_t x776 = 219602527;

    t161 = (((x773|x774)+x775)+x776);

    if (t161 != 219629151U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x786 = INT16_MIN;
	volatile int16_t x787 = INT16_MAX;
	uint32_t x788 = 90135U;

    t162 = (((x785|x786)+x787)+x788);

    if (t162 != 90134U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x793 = 45445014LLU;
	int16_t x796 = 33;
	volatile uint64_t t163 = 47126880136LLU;

    t163 = (((x793|x794)+x795)+x796);

    if (t163 != 18446744073709551415LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x797 = -255331LL;
	volatile int8_t x798 = -14;
	uint8_t x799 = 0U;
	uint32_t x800 = 10U;

    t164 = (((x797|x798)+x799)+x800);

    if (t164 != 9LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x801 = 111471U;
	int8_t x802 = 8;
	uint64_t t165 = 5499182496766LLU;

    t165 = (((x801|x802)+x803)+x804);

    if (t165 != 338856190820LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x805 = INT8_MIN;
	int64_t x806 = 990253122LL;
	int32_t x807 = INT32_MAX;
	int8_t x808 = -1;
	volatile int64_t t166 = -83012183144LL;

    t166 = (((x805|x806)+x807)+x808);

    if (t166 != 2147483584LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x813 = -1;
	volatile uint64_t x814 = 3696073717LLU;
	volatile int8_t x815 = INT8_MIN;
	uint64_t x816 = UINT64_MAX;
	uint64_t t167 = 937LLU;

    t167 = (((x813|x814)+x815)+x816);

    if (t167 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x817 = INT16_MIN;
	uint64_t x819 = UINT64_MAX;
	int16_t x820 = 1;
	uint64_t t168 = 12735656974255124LLU;

    t168 = (((x817|x818)+x819)+x820);

    if (t168 != 4294934710LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x821 = 4U;
	int32_t x824 = INT32_MIN;
	static volatile uint32_t t169 = 177776571U;

    t169 = (((x821|x822)+x823)+x824);

    if (t169 != 3206035571U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x825 = INT64_MIN;
	int32_t x826 = 155239;
	int8_t x827 = INT8_MIN;
	uint64_t x828 = 1111353268197497989LLU;

    t170 = (((x825|x826)+x827)+x828);

    if (t170 != 10334725305052428908LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x834 = UINT16_MAX;
	static uint64_t x835 = 3073533066025382023LLU;
	static int32_t x836 = -1;
	volatile uint64_t t171 = 8LLU;

    t171 = (((x833|x834)+x835)+x836);

    if (t171 != 12296905102880157829LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x837 = 78U;
	static volatile int8_t x838 = -4;
	static uint16_t x839 = UINT16_MAX;
	static int16_t x840 = INT16_MIN;
	static volatile uint32_t t172 = 458148820U;

    t172 = (((x837|x838)+x839)+x840);

    if (t172 != 32765U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x841 = -1;
	int32_t x842 = INT32_MIN;
	volatile int16_t x843 = INT16_MAX;
	volatile uint8_t x844 = UINT8_MAX;
	int32_t t173 = 35368446;

    t173 = (((x841|x842)+x843)+x844);

    if (t173 != 33021) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x845 = 34U;
	static int16_t x846 = INT16_MAX;
	uint32_t x847 = 1680696U;
	volatile uint32_t x848 = UINT32_MAX;

    t174 = (((x845|x846)+x847)+x848);

    if (t174 != 1713462U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x849 = -12459;
	uint8_t x850 = UINT8_MAX;
	volatile uint64_t x851 = 928282873LLU;
	uint8_t x852 = 7U;
	static uint64_t t175 = 6LLU;

    t175 = (((x849|x850)+x851)+x852);

    if (t175 != 928270591LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x857 = INT64_MAX;
	uint32_t x859 = 0U;
	uint64_t x860 = UINT64_MAX;
	volatile uint64_t t176 = 74831419603343LLU;

    t176 = (((x857|x858)+x859)+x860);

    if (t176 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x866 = -1;
	static volatile int32_t x867 = INT32_MIN;
	int8_t x868 = 1;
	volatile uint64_t t177 = 1682115975251LLU;

    t177 = (((x865|x866)+x867)+x868);

    if (t177 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x870 = INT32_MAX;
	int64_t x872 = -1LL;
	int64_t t178 = -517535990LL;

    t178 = (((x869|x870)+x871)+x872);

    if (t178 != 2147483586LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x873 = UINT16_MAX;
	int8_t x874 = INT8_MAX;
	int32_t x876 = INT32_MIN;
	int32_t t179 = -59473;

    t179 = (((x873|x874)+x875)+x876);

    if (t179 != -2147418241) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x877 = INT16_MAX;
	int64_t x879 = -1LL;
	int64_t t180 = 478LL;

    t180 = (((x877|x878)+x879)+x880);

    if (t180 != -32770LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x881 = -95;
	int32_t x884 = 13470964;
	int32_t t181 = -679696255;

    t181 = (((x881|x882)+x883)+x884);

    if (t181 != 13470876) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x885 = UINT32_MAX;
	int32_t x887 = -1;
	uint32_t x888 = UINT32_MAX;
	static volatile uint32_t t182 = 1139U;

    t182 = (((x885|x886)+x887)+x888);

    if (t182 != 4294967293U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x890 = -1;
	static volatile int64_t x891 = 167192306922505LL;

    t183 = (((x889|x890)+x891)+x892);

    if (t183 != 167192306920980LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x893 = UINT16_MAX;
	int8_t x894 = -5;

    t184 = (((x893|x894)+x895)+x896);

    if (t184 != -65537) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x897 = UINT64_MAX;
	int64_t x898 = -1661989LL;
	static uint8_t x899 = 52U;
	static volatile uint8_t x900 = 84U;
	uint64_t t185 = 192457180698080LLU;

    t185 = (((x897|x898)+x899)+x900);

    if (t185 != 135LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x901 = UINT16_MAX;
	uint32_t x902 = 771130U;
	int16_t x903 = INT16_MIN;
	static uint64_t x904 = 5020389595877748LLU;

    t186 = (((x901|x902)+x903)+x904);

    if (t186 != 5020389596631411LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x906 = 8U;
	uint16_t x907 = 417U;

    t187 = (((x905|x906)+x907)+x908);

    if (t187 != 41) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x909 = INT32_MIN;
	int8_t x911 = INT8_MAX;
	uint64_t x912 = 779416LLU;

    t188 = (((x909|x910)+x911)+x912);

    if (t188 != 2148263208LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x916 = INT8_MIN;
	int32_t t189 = -131831;

    t189 = (((x913|x914)+x915)+x916);

    if (t189 != -71921) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x917 = INT32_MIN;
	uint32_t x919 = UINT32_MAX;
	uint64_t t190 = 7417160870LLU;

    t190 = (((x917|x918)+x919)+x920);

    if (t190 != 2147487353LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x921 = INT8_MIN;
	volatile uint8_t x923 = 49U;
	int32_t x924 = INT32_MIN;
	uint32_t t191 = 1105360U;

    t191 = (((x921|x922)+x923)+x924);

    if (t191 != 2147483696U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x925 = INT16_MIN;
	uint8_t x926 = 1U;
	int8_t x927 = INT8_MIN;
	uint64_t x928 = 17014LLU;

    t192 = (((x925|x926)+x927)+x928);

    if (t192 != 18446744073709535735LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x930 = INT64_MIN;
	static int32_t x931 = -1;
	int64_t t193 = -2798077083142994190LL;

    t193 = (((x929|x930)+x931)+x932);

    if (t193 != 4294967293LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int64_t x933 = INT64_MAX;
	int64_t x934 = INT64_MIN;
	volatile int16_t x935 = INT16_MAX;

    t194 = (((x933|x934)+x935)+x936);

    if (t194 != 32769LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x938 = -1;
	static uint64_t x939 = UINT64_MAX;
	int8_t x940 = INT8_MAX;
	uint64_t t195 = 21059LLU;

    t195 = (((x937|x938)+x939)+x940);

    if (t195 != 125LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x941 = 24U;
	int16_t x942 = INT16_MIN;
	static int8_t x943 = 0;
	volatile uint32_t x944 = 383882U;
	volatile uint32_t t196 = 168118U;

    t196 = (((x941|x942)+x943)+x944);

    if (t196 != 351138U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x945 = 174LLU;
	uint64_t x946 = 549356610113LLU;
	int64_t x947 = 1691LL;
	static volatile uint64_t t197 = 1953043LLU;

    t197 = (((x945|x946)+x947)+x948);

    if (t197 != 549356579210LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x949 = INT8_MIN;
	uint64_t x950 = UINT64_MAX;
	uint8_t x951 = UINT8_MAX;
	int8_t x952 = INT8_MIN;
	static volatile uint64_t t198 = 17898LLU;

    t198 = (((x949|x950)+x951)+x952);

    if (t198 != 126LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x954 = INT8_MAX;
	int16_t x956 = INT16_MIN;
	uint64_t t199 = 5146964LLU;

    t199 = (((x953|x954)+x955)+x956);

    if (t199 != 18446744071566037887LLU) { NG(); } else { ; }
	
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

