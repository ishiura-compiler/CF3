
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

static int8_t x10 = INT8_MIN;
int16_t x29 = INT16_MAX;
int64_t x30 = INT64_MIN;
volatile uint8_t x31 = 98U;
int8_t x43 = -1;
int32_t t10 = 1;
volatile uint64_t t11 = 2694842011930817951LLU;
int16_t x50 = INT16_MAX;
volatile uint64_t t12 = 474595966766584110LLU;
volatile int8_t x56 = INT8_MIN;
volatile int64_t x60 = 621LL;
static volatile int64_t t15 = 24658916538LL;
int32_t x73 = INT32_MAX;
int64_t x75 = INT64_MIN;
int32_t x80 = -1;
int8_t x82 = -33;
int32_t x83 = INT32_MIN;
int64_t x115 = INT64_MIN;
static int64_t t26 = -30LL;
int32_t x122 = -1;
volatile int8_t x123 = INT8_MAX;
uint64_t t31 = 179278LLU;
volatile int8_t x141 = INT8_MAX;
volatile uint16_t x144 = UINT16_MAX;
volatile int32_t t32 = -110;
uint16_t x146 = 10U;
static int32_t x160 = INT32_MIN;
volatile int64_t t37 = 6700051031844LL;
int64_t x179 = -1LL;
int8_t x183 = INT8_MAX;
volatile int32_t t44 = -470;
int64_t x199 = INT64_MIN;
int32_t x203 = INT32_MIN;
uint64_t t47 = 548528353385383LLU;
static int32_t x221 = 163909;
volatile uint64_t t51 = 197202451742274LLU;
uint32_t x250 = 299U;
volatile int8_t x251 = -3;
static int16_t x252 = INT16_MAX;
int8_t x262 = -1;
int32_t x264 = 1;
int16_t x265 = 1807;
uint8_t x281 = 49U;
uint16_t x289 = 53U;
int64_t x301 = -176435LL;
uint32_t t66 = 2U;
int64_t t69 = 23317LL;
int32_t t71 = -31160936;
volatile int64_t x329 = -1LL;
volatile uint64_t t75 = 10282038558060931LLU;
uint16_t x353 = 11034U;
volatile uint16_t x355 = UINT16_MAX;
uint16_t x356 = 2U;
int32_t x362 = -485700;
int8_t x366 = -1;
uint8_t x371 = 4U;
int32_t x373 = INT32_MAX;
volatile int8_t x376 = INT8_MAX;
uint64_t t82 = 1816278464388LLU;
int32_t x381 = -1;
int32_t t84 = -3424;
volatile uint32_t t85 = 6U;
int16_t x394 = INT16_MIN;
int64_t x404 = INT64_MAX;
int64_t x406 = INT64_MAX;
volatile uint64_t t89 = 433648546362859LLU;
uint32_t x410 = 11240619U;
volatile int64_t x412 = -4154518LL;
static uint32_t t91 = 1742091377U;
uint8_t x425 = UINT8_MAX;
volatile int64_t x426 = INT64_MIN;
volatile uint16_t x427 = 6U;
static int16_t x428 = -3667;
int16_t x435 = INT16_MAX;
volatile int64_t t95 = -114765381085LL;
int8_t x445 = INT8_MAX;
uint8_t x457 = 1U;
uint16_t x489 = 977U;
volatile int64_t x491 = INT64_MIN;
uint64_t x497 = 697217197LLU;
uint16_t x498 = 905U;
static volatile int8_t x507 = 1;
volatile int32_t t109 = 998179;
static int16_t x514 = INT16_MAX;
int8_t x520 = INT8_MAX;
int64_t x532 = -1LL;
int64_t x533 = -1LL;
static volatile uint64_t x534 = 0LLU;
uint64_t t113 = UINT64_MAX;
uint8_t x538 = 22U;
int32_t x540 = INT32_MAX;
static int8_t x542 = INT8_MIN;
int16_t x543 = -250;
int8_t x547 = INT8_MIN;
static volatile int32_t t117 = 2;
static uint16_t x571 = 1U;
uint8_t x578 = 15U;
static volatile int64_t t122 = -1LL;
volatile uint32_t x584 = 285135U;
uint16_t x586 = 0U;
volatile int16_t x588 = -2545;
static volatile int8_t x590 = 38;
int32_t t125 = 4051;
uint64_t x593 = UINT64_MAX;
uint32_t x594 = UINT32_MAX;
static int64_t x595 = INT64_MIN;
volatile uint64_t t126 = 1029369LLU;
int8_t x597 = INT8_MIN;
uint16_t x599 = 387U;
int8_t x611 = 12;
static uint32_t t130 = 214096030U;
int8_t x619 = INT8_MIN;
int16_t x623 = 232;
volatile int32_t t133 = 3544;
int32_t x627 = -14361;
volatile int64_t t135 = -19670316724LL;
uint32_t x635 = UINT32_MAX;
int32_t x637 = -357;
static volatile int16_t x647 = INT16_MAX;
volatile int64_t t138 = -7552824LL;
int32_t x654 = INT32_MAX;
int64_t x656 = 23258671894LL;
static int64_t t139 = -55025873035LL;
volatile int64_t t141 = 7177036544390LL;
volatile int32_t x674 = -247;
uint32_t x676 = UINT32_MAX;
volatile uint32_t t143 = 28159U;
volatile uint32_t x695 = 16327U;
int64_t t147 = -32494334029LL;
int16_t x698 = -58;
uint64_t t148 = 3174063215110762LLU;
static volatile int64_t t150 = 3341576582LL;
static int64_t x713 = INT64_MIN;
static volatile uint64_t t156 = 63792581936095063LLU;
int16_t x746 = INT16_MIN;
int16_t x747 = INT16_MAX;
volatile uint32_t t158 = 11767258U;
uint32_t t159 = 240328860U;
int16_t x760 = INT16_MIN;
int64_t t160 = -1157LL;
volatile uint16_t x762 = 217U;
uint32_t x764 = UINT32_MAX;
volatile uint64_t x772 = 8LLU;
int64_t x779 = -1LL;
volatile int64_t t165 = -133061997697LL;
static int16_t x783 = INT16_MAX;
volatile int64_t t166 = 4323960954LL;
static int8_t x791 = INT8_MIN;
static int64_t x797 = -18LL;
int32_t x799 = INT32_MAX;
int8_t x801 = -1;
uint32_t x806 = UINT32_MAX;
int16_t x808 = -9;
int32_t x813 = 851773;
uint64_t x825 = 8669483LLU;
volatile uint8_t x828 = 62U;
static uint64_t t175 = 2404986373952825LLU;
int32_t x836 = INT32_MIN;
int16_t x840 = INT16_MIN;
int64_t x841 = INT64_MIN;
int8_t x843 = INT8_MAX;
static int8_t x847 = INT8_MIN;
volatile uint64_t t180 = 103754938551LLU;
uint16_t x849 = 146U;
volatile uint64_t x857 = 7570758582LLU;
int64_t x859 = -1LL;
uint32_t x860 = 32232U;
uint64_t t182 = 208825845LLU;
int32_t x879 = -182964;
volatile int8_t x880 = INT8_MIN;
static int8_t x885 = INT8_MAX;
int32_t x886 = -50459;
int32_t x890 = INT32_MAX;
volatile int32_t x892 = INT32_MIN;
static volatile int16_t x895 = -1;
int16_t x900 = 11723;
int64_t x901 = INT64_MIN;
static volatile uint8_t x904 = 70U;
volatile int64_t x914 = -179154LL;
volatile uint64_t t195 = UINT64_MAX;
int32_t x918 = -1;
int64_t x920 = INT64_MIN;
uint32_t x921 = 3551311U;
int32_t x923 = -1;
volatile uint32_t t197 = 411335983U;
int32_t x929 = INT32_MIN;
int32_t x932 = INT32_MIN;
int16_t x943 = INT16_MAX;


void f0(void) {
    	static int64_t x1 = 526300214061587639LL;
	int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = UINT8_MAX;
	uint8_t x4 = 3U;
	int64_t t0 = 451898LL;

    t0 = (((x1+x2)%x3)^x4);

    if (t0 != 228LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 17;
	volatile int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MAX;
	int16_t x8 = -32;
	int32_t t1 = 2874454;

    t1 = (((x5+x6)%x7)^x8);

    if (t1 != 106) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int32_t x11 = INT32_MIN;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -118698784;

    t2 = (((x9+x10)%x11)^x12);

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 169553592U;
	int8_t x14 = INT8_MIN;
	volatile uint64_t x15 = UINT64_MAX;
	int8_t x16 = INT8_MIN;
	static volatile uint64_t t3 = 7860515430703841LLU;

    t3 = (((x13+x14)%x15)^x16);

    if (t3 != 18446744073539998136LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = 1;
	int32_t x18 = -15129;
	volatile uint64_t x19 = 96442792130LLU;
	volatile uint8_t x20 = 2U;
	volatile uint64_t t4 = 11659473795515LLU;

    t4 = (((x17+x18)%x19)^x20);

    if (t4 != 60807139690LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	uint64_t x22 = 61741800872LLU;
	static int8_t x23 = -7;
	int64_t x24 = 0LL;
	volatile uint64_t t5 = 911855214016256LLU;

    t5 = (((x21+x22)%x23)^x24);

    if (t5 != 59594317224LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = -1LL;
	int16_t x26 = INT16_MAX;
	static volatile int16_t x27 = -1;
	int16_t x28 = INT16_MAX;
	volatile int64_t t6 = 1LL;

    t6 = (((x25+x26)%x27)^x28);

    if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x32 = INT16_MIN;
	volatile int64_t t7 = 2819073671LL;

    t7 = (((x29+x30)%x31)^x32);

    if (t7 != 32753LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	int64_t x34 = 489LL;
	static int16_t x35 = -2;
	static int64_t x36 = 1357211LL;
	static volatile int64_t t8 = -2478404LL;

    t8 = (((x33+x34)%x35)^x36);

    if (t8 != 1357211LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = INT8_MAX;
	volatile int8_t x38 = -20;
	volatile int64_t x39 = -1LL;
	int64_t x40 = 2LL;
	int64_t t9 = 24446274906LL;

    t9 = (((x37+x38)%x39)^x40);

    if (t9 != 2LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 9382;
	int8_t x42 = INT8_MIN;
	static int8_t x44 = INT8_MIN;

    t10 = (((x41+x42)%x43)^x44);

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	int64_t x46 = -168LL;
	volatile uint32_t x47 = 903248U;
	static int64_t x48 = 24324LL;

    t11 = (((x45+x46)%x47)^x48);

    if (t11 != 489363LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 1727U;
	uint64_t x51 = 1553869527572639LLU;
	static uint32_t x52 = 930951U;

    t12 = (((x49+x50)%x51)^x52);

    if (t12 != 963129LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 29U;
	static uint32_t x54 = UINT32_MAX;
	int64_t x55 = INT64_MIN;
	volatile int64_t t13 = 0LL;

    t13 = (((x53+x54)%x55)^x56);

    if (t13 != -100LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	uint16_t x59 = 152U;
	volatile int64_t t14 = -2611693LL;

    t14 = (((x57+x58)%x59)^x60);

    if (t14 != 635LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = 76;
	volatile int64_t x62 = -1LL;
	static int64_t x63 = 2LL;
	volatile int16_t x64 = INT16_MAX;

    t15 = (((x61+x62)%x63)^x64);

    if (t15 != 32766LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	static int16_t x66 = INT16_MAX;
	static int32_t x67 = INT32_MAX;
	volatile int8_t x68 = 17;
	volatile uint64_t t16 = 15933201437757LLU;

    t16 = (((x65+x66)%x67)^x68);

    if (t16 != 32751LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	volatile uint32_t x70 = UINT32_MAX;
	volatile int64_t x71 = 445427063173486637LL;
	int64_t x72 = INT64_MAX;
	static int64_t t17 = 960197608LL;

    t17 = (((x69+x70)%x71)^x72);

    if (t17 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x74 = 20832190015141704LLU;
	int64_t x76 = INT64_MIN;
	static volatile uint64_t t18 = 382LLU;

    t18 = (((x73+x74)%x75)^x76);

    if (t18 != 9244204229017401159LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	static volatile uint64_t x78 = UINT64_MAX;
	int8_t x79 = INT8_MIN;
	volatile uint64_t t19 = 5523222197022500LLU;

    t19 = (((x77+x78)%x79)^x80);

    if (t19 != 128LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = -872535628LL;
	int8_t x84 = INT8_MIN;
	volatile int64_t t20 = -199LL;

    t20 = (((x81+x82)%x83)^x84);

    if (t20 != 872535571LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	int16_t x90 = INT16_MAX;
	static int8_t x91 = 7;
	volatile uint64_t x92 = UINT64_MAX;
	volatile uint64_t t21 = 495699LLU;

    t21 = (((x89+x90)%x91)^x92);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = 1;
	int64_t x94 = 586446388912161LL;
	int32_t x95 = INT32_MIN;
	static int16_t x96 = -314;
	static volatile int64_t t22 = -56886LL;

    t22 = (((x93+x94)%x95)^x96);

    if (t22 != -816898332LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = -42543668332364399LL;
	static int64_t x98 = -1LL;
	uint32_t x99 = 3153049U;
	volatile uint32_t x100 = 116277U;
	volatile int64_t t23 = -6290966868LL;

    t23 = (((x97+x98)%x99)^x100);

    if (t23 != -2757683LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x105 = INT32_MAX;
	int16_t x106 = INT16_MIN;
	int8_t x107 = -1;
	static int8_t x108 = INT8_MAX;
	static volatile int32_t t24 = -36;

    t24 = (((x105+x106)%x107)^x108);

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x109 = UINT64_MAX;
	int16_t x110 = -1;
	int32_t x111 = INT32_MIN;
	uint64_t x112 = UINT64_MAX;
	static volatile uint64_t t25 = 0LLU;

    t25 = (((x109+x110)%x111)^x112);

    if (t25 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x113 = UINT16_MAX;
	uint8_t x114 = 0U;
	int8_t x116 = 3;

    t26 = (((x113+x114)%x115)^x116);

    if (t26 != 65532LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x121 = 261U;
	int8_t x124 = 1;
	int32_t t27 = -984211;

    t27 = (((x121+x122)%x123)^x124);

    if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x125 = UINT32_MAX;
	volatile int16_t x126 = 7;
	volatile int32_t x127 = INT32_MAX;
	uint16_t x128 = 1U;
	uint32_t t28 = 0U;

    t28 = (((x125+x126)%x127)^x128);

    if (t28 != 7U) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint64_t x129 = 5620030498639584110LLU;
	int16_t x130 = -170;
	int32_t x131 = 69;
	uint8_t x132 = 1U;
	static uint64_t t29 = 25034065026026532LLU;

    t29 = (((x129+x130)%x131)^x132);

    if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x133 = 322129LLU;
	static int64_t x134 = INT64_MIN;
	uint8_t x135 = 1U;
	volatile uint64_t x136 = UINT64_MAX;
	uint64_t t30 = UINT64_MAX;

    t30 = (((x133+x134)%x135)^x136);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x137 = 6U;
	uint64_t x138 = 612141102422514403LLU;
	static int64_t x139 = 2084869404547646384LL;
	int64_t x140 = 12107360023528977LL;

    t31 = (((x137+x138)%x139)^x140);

    if (t31 != 600597792302406904LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x142 = INT8_MAX;
	volatile int8_t x143 = -1;

    t32 = (((x141+x142)%x143)^x144);

    if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = -1;
	int32_t x147 = -45037;
	static int64_t x148 = -1LL;
	int64_t t33 = -5920713209953831LL;

    t33 = (((x145+x146)%x147)^x148);

    if (t33 != -10LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x149 = 24464897636LLU;
	uint64_t x150 = 9108835905971113066LLU;
	volatile int8_t x151 = -1;
	volatile int16_t x152 = INT16_MIN;
	static volatile uint64_t t34 = 859203LLU;

    t34 = (((x149+x150)%x151)^x152);

    if (t34 != 9337908143273509582LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = -1;
	static uint32_t x154 = 1658U;
	uint8_t x155 = UINT8_MAX;
	uint64_t x156 = 4590254315LLU;
	volatile uint64_t t35 = 60512078388738LLU;

    t35 = (((x153+x154)%x155)^x156);

    if (t35 != 4590254228LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x157 = INT16_MIN;
	volatile int8_t x158 = -1;
	volatile int32_t x159 = INT32_MIN;
	int32_t t36 = 3;

    t36 = (((x157+x158)%x159)^x160);

    if (t36 != 2147450879) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = INT64_MIN;
	int32_t x162 = INT32_MAX;
	static uint8_t x163 = 2U;
	int16_t x164 = INT16_MIN;

    t37 = (((x161+x162)%x163)^x164);

    if (t37 != 32767LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x165 = -17;
	static uint64_t x166 = 5676480488327278LLU;
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 1U;
	volatile uint64_t t38 = 0LLU;

    t38 = (((x165+x166)%x167)^x168);

    if (t38 != 5676480488327260LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x169 = UINT8_MAX;
	int32_t x170 = 708731;
	int16_t x171 = -1;
	volatile uint64_t x172 = 62652LLU;
	uint64_t t39 = 7268022361799LLU;

    t39 = (((x169+x170)%x171)^x172);

    if (t39 != 62652LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = 1;
	uint8_t x174 = 1U;
	static int8_t x175 = -1;
	static int8_t x176 = INT8_MIN;
	volatile int32_t t40 = -393103506;

    t40 = (((x173+x174)%x175)^x176);

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x177 = 28;
	volatile int32_t x178 = INT32_MIN;
	static int32_t x180 = INT32_MAX;
	int64_t t41 = -3957788241131604LL;

    t41 = (((x177+x178)%x179)^x180);

    if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = 10968;
	int64_t x182 = INT64_MIN;
	volatile int8_t x184 = -15;
	int64_t t42 = 63258284420LL;

    t42 = (((x181+x182)%x183)^x184);

    if (t42 != 95LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x185 = 37LLU;
	static int16_t x186 = -1;
	static uint64_t x187 = 508910529203401LLU;
	int16_t x188 = -1;
	static uint64_t t43 = 8664299096114869LLU;

    t43 = (((x185+x186)%x187)^x188);

    if (t43 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x189 = -1;
	int16_t x190 = 55;
	int8_t x191 = 2;
	static uint8_t x192 = 1U;

    t44 = (((x189+x190)%x191)^x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x193 = -1;
	int16_t x194 = INT16_MAX;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t45 = 238351930LLU;

    t45 = (((x193+x194)%x195)^x196);

    if (t45 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x197 = 67LLU;
	uint8_t x198 = 4U;
	int16_t x200 = 26;
	static uint64_t t46 = 2318694956394673LLU;

    t46 = (((x197+x198)%x199)^x200);

    if (t46 != 93LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = -12090;
	volatile uint16_t x202 = 11U;
	uint64_t x204 = 45415721311LLU;

    t47 = (((x201+x202)%x203)^x204);

    if (t47 != 18446744028293839246LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x205 = -1;
	int16_t x206 = -1;
	volatile int32_t x207 = -10023;
	volatile int16_t x208 = INT16_MIN;
	int32_t t48 = -131199357;

    t48 = (((x205+x206)%x207)^x208);

    if (t48 != 32766) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x209 = 48U;
	uint32_t x210 = 6589U;
	volatile int16_t x211 = -5550;
	int32_t x212 = -1;
	volatile uint32_t t49 = 614U;

    t49 = (((x209+x210)%x211)^x212);

    if (t49 != 4294960658U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MAX;
	int32_t x215 = INT32_MIN;
	static uint64_t x216 = 82LLU;
	volatile uint64_t t50 = 198455891LLU;

    t50 = (((x213+x214)%x215)^x216);

    if (t50 != 2147483437LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x222 = 498270LLU;
	int32_t x223 = INT32_MIN;
	static volatile int16_t x224 = INT16_MIN;

    t51 = (((x221+x222)%x223)^x224);

    if (t51 != 18446744073708870307LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	static int64_t x234 = INT64_MIN;
	static uint16_t x235 = 51U;
	uint32_t x236 = 2361382U;
	volatile int64_t t52 = -138547LL;

    t52 = (((x233+x234)%x235)^x236);

    if (t52 != -2361408LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x241 = INT32_MIN;
	static uint64_t x242 = 12688884LLU;
	volatile uint64_t x243 = UINT64_MAX;
	uint8_t x244 = 13U;
	volatile uint64_t t53 = 0LLU;

    t53 = (((x241+x242)%x243)^x244);

    if (t53 != 18446744071574756857LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x249 = 0;
	volatile uint32_t t54 = 90U;

    t54 = (((x249+x250)%x251)^x252);

    if (t54 != 32468U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x253 = INT8_MIN;
	volatile uint8_t x254 = UINT8_MAX;
	static int8_t x255 = -1;
	uint32_t x256 = 126U;
	volatile uint32_t t55 = 10U;

    t55 = (((x253+x254)%x255)^x256);

    if (t55 != 126U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x261 = -26;
	int8_t x263 = -1;
	volatile int32_t t56 = 937416376;

    t56 = (((x261+x262)%x263)^x264);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x266 = -1;
	volatile uint8_t x267 = UINT8_MAX;
	int64_t x268 = INT64_MIN;
	int64_t t57 = 20LL;

    t57 = (((x265+x266)%x267)^x268);

    if (t57 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x269 = 135700043280658081LLU;
	int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	static int16_t x272 = INT16_MIN;
	uint64_t t58 = 1585LLU;

    t58 = (((x269+x270)%x271)^x272);

    if (t58 != 18311044030428884513LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x273 = INT16_MIN;
	uint8_t x274 = 3U;
	static uint64_t x275 = UINT64_MAX;
	int64_t x276 = INT64_MAX;
	uint64_t t59 = 484LLU;

    t59 = (((x273+x274)%x275)^x276);

    if (t59 != 9223372036854808572LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x277 = 25U;
	int32_t x278 = -1;
	int64_t x279 = INT64_MAX;
	uint64_t x280 = UINT64_MAX;
	static uint64_t t60 = 3913134137089323356LLU;

    t60 = (((x277+x278)%x279)^x280);

    if (t60 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x282 = INT32_MIN;
	static volatile int64_t x283 = INT64_MIN;
	volatile int32_t x284 = INT32_MIN;
	int64_t t61 = 227670003248LL;

    t61 = (((x281+x282)%x283)^x284);

    if (t61 != 49LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x285 = -684229181LL;
	volatile uint32_t x286 = 114U;
	volatile uint16_t x287 = UINT16_MAX;
	static uint64_t x288 = 227394LLU;
	uint64_t t62 = 19980174863LLU;

    t62 = (((x285+x286)%x287)^x288);

    if (t62 != 18446744073709301039LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x290 = UINT32_MAX;
	uint8_t x291 = 1U;
	uint32_t x292 = 1743955741U;
	uint32_t t63 = 1487U;

    t63 = (((x289+x290)%x291)^x292);

    if (t63 != 1743955741U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x297 = INT32_MAX;
	int8_t x298 = INT8_MIN;
	static int64_t x299 = -11LL;
	int32_t x300 = INT32_MIN;
	static int64_t t64 = -280750879LL;

    t64 = (((x297+x298)%x299)^x300);

    if (t64 != -2147483643LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x302 = 2U;
	int32_t x303 = -1;
	static volatile int16_t x304 = INT16_MIN;
	volatile int64_t t65 = 1LL;

    t65 = (((x301+x302)%x303)^x304);

    if (t65 != -32768LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x305 = 0U;
	volatile uint32_t x306 = UINT32_MAX;
	static volatile int8_t x307 = -1;
	int8_t x308 = INT8_MIN;

    t66 = (((x305+x306)%x307)^x308);

    if (t66 != 4294967168U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x309 = 1506U;
	volatile int32_t x310 = INT32_MIN;
	int16_t x311 = 1;
	static volatile int32_t x312 = INT32_MAX;
	uint32_t t67 = 62188369U;

    t67 = (((x309+x310)%x311)^x312);

    if (t67 != 2147483647U) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x313 = -1;
	static int64_t x314 = 0LL;
	int64_t x315 = -625347771621460LL;
	int16_t x316 = -1;
	volatile int64_t t68 = 4284553810LL;

    t68 = (((x313+x314)%x315)^x316);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x317 = UINT32_MAX;
	int64_t x318 = -1LL;
	uint8_t x319 = 7U;
	static volatile int8_t x320 = INT8_MIN;

    t69 = (((x317+x318)%x319)^x320);

    if (t69 != -126LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x321 = -2;
	uint8_t x322 = 1U;
	static uint8_t x323 = 13U;
	uint64_t x324 = 21880011490923LLU;
	uint64_t t70 = 69042484870LLU;

    t70 = (((x321+x322)%x323)^x324);

    if (t70 != 18446722193698060692LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x325 = UINT16_MAX;
	volatile uint8_t x326 = 7U;
	static volatile int8_t x327 = INT8_MIN;
	static int8_t x328 = INT8_MIN;

    t71 = (((x325+x326)%x327)^x328);

    if (t71 != -122) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x330 = INT8_MAX;
	int16_t x331 = -6;
	volatile uint64_t x332 = UINT64_MAX;
	static volatile uint64_t t72 = UINT64_MAX;

    t72 = (((x329+x330)%x331)^x332);

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x333 = 11724966LLU;
	uint8_t x334 = UINT8_MAX;
	uint16_t x335 = 21U;
	uint8_t x336 = 4U;
	volatile uint64_t t73 = 162996773242201690LLU;

    t73 = (((x333+x334)%x335)^x336);

    if (t73 != 22LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x337 = INT8_MAX;
	int16_t x338 = INT16_MIN;
	volatile int16_t x339 = -12;
	uint32_t x340 = 2346105U;
	uint32_t t74 = 20438325U;

    t74 = (((x337+x338)%x339)^x340);

    if (t74 != 4292621190U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x345 = 242582LLU;
	volatile int8_t x346 = 0;
	int16_t x347 = INT16_MIN;
	static int32_t x348 = INT32_MIN;

    t75 = (((x345+x346)%x347)^x348);

    if (t75 != 18446744071562310550LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x349 = -4570735;
	int32_t x350 = -1;
	int8_t x351 = INT8_MAX;
	volatile int16_t x352 = INT16_MAX;
	volatile int32_t t76 = -306218;

    t76 = (((x349+x350)%x351)^x352);

    if (t76 != -32763) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x354 = 60504U;
	uint32_t t77 = 103659U;

    t77 = (((x353+x354)%x355)^x356);

    if (t77 != 6001U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x357 = 989;
	int16_t x358 = -1;
	int64_t x359 = INT64_MAX;
	static int16_t x360 = 0;
	volatile int64_t t78 = 1499LL;

    t78 = (((x357+x358)%x359)^x360);

    if (t78 != 988LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x361 = UINT64_MAX;
	int32_t x363 = INT32_MAX;
	static int32_t x364 = 58;
	volatile uint64_t t79 = 723150886LLU;

    t79 = (((x361+x362)%x363)^x364);

    if (t79 != 2146997892LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x365 = 4429840125360338184LL;
	uint64_t x367 = 6286LLU;
	int32_t x368 = INT32_MIN;
	static volatile uint64_t t80 = 8482563707899621LLU;

    t80 = (((x365+x366)%x367)^x368);

    if (t80 != 18446744071562070969LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x369 = -817306540878604LL;
	int8_t x370 = INT8_MIN;
	static int64_t x372 = INT64_MIN;
	volatile int64_t t81 = INT64_MIN;

    t81 = (((x369+x370)%x371)^x372);

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x374 = 1593924312LLU;
	int16_t x375 = INT16_MAX;

    t82 = (((x373+x374)%x375)^x376);

    if (t82 != 6306LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x377 = -1;
	int16_t x378 = -1;
	int8_t x379 = INT8_MIN;
	int64_t x380 = -28297598269823457LL;
	volatile int64_t t83 = 123845500LL;

    t83 = (((x377+x378)%x379)^x380);

    if (t83 != 28297598269823457LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x382 = INT8_MIN;
	static uint8_t x383 = 117U;
	uint8_t x384 = UINT8_MAX;

    t84 = (((x381+x382)%x383)^x384);

    if (t84 != -245) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x385 = -18;
	int32_t x386 = 4870657;
	uint32_t x387 = 45882861U;
	volatile int16_t x388 = INT16_MIN;

    t85 = (((x385+x386)%x387)^x388);

    if (t85 != 4290105839U) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x389 = 2110854U;
	int16_t x390 = INT16_MIN;
	uint64_t x391 = 4334197487302937653LLU;
	int16_t x392 = INT16_MIN;
	uint64_t t86 = 25787988086505735LLU;

    t86 = (((x389+x390)%x391)^x392);

    if (t86 != 18446744073707468166LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x393 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	static int8_t x396 = -21;
	int64_t t87 = -4413981LL;

    t87 = (((x393+x394)%x395)^x396);

    if (t87 != -2147450860LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x401 = UINT64_MAX;
	uint16_t x402 = 5278U;
	volatile uint32_t x403 = 384U;
	static uint64_t t88 = 129041803773344LLU;

    t88 = (((x401+x402)%x403)^x404);

    if (t88 != 9223372036854775522LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x405 = UINT64_MAX;
	volatile uint8_t x407 = 4U;
	int8_t x408 = INT8_MIN;

    t89 = (((x405+x406)%x407)^x408);

    if (t89 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x409 = 837637;
	int8_t x411 = 1;
	int64_t t90 = 7312183626311LL;

    t90 = (((x409+x410)%x411)^x412);

    if (t90 != -4154518LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x413 = INT16_MAX;
	static uint32_t x414 = 61U;
	uint8_t x415 = 17U;
	static volatile int16_t x416 = INT16_MAX;

    t91 = (((x413+x414)%x415)^x416);

    if (t91 != 32766U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x417 = INT32_MIN;
	static uint32_t x418 = 271616314U;
	int32_t x419 = INT32_MIN;
	volatile int32_t x420 = -1;
	volatile uint32_t t92 = 2539U;

    t92 = (((x417+x418)%x419)^x420);

    if (t92 != 4023350981U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x421 = 0;
	int16_t x422 = -77;
	static int64_t x423 = -6121668LL;
	int8_t x424 = 14;
	volatile int64_t t93 = 74836160LL;

    t93 = (((x421+x422)%x423)^x424);

    if (t93 != -67LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t t94 = 557900537230158LL;

    t94 = (((x425+x426)%x427)^x428);

    if (t94 != 3670LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x433 = INT8_MIN;
	static int8_t x434 = 8;
	int64_t x436 = INT64_MIN;

    t95 = (((x433+x434)%x435)^x436);

    if (t95 != 9223372036854775688LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x441 = INT8_MIN;
	static volatile uint16_t x442 = 495U;
	int16_t x443 = INT16_MAX;
	int32_t x444 = -1;
	int32_t t96 = -212;

    t96 = (((x441+x442)%x443)^x444);

    if (t96 != -368) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x446 = INT8_MIN;
	static volatile int8_t x447 = INT8_MIN;
	static int16_t x448 = -16183;
	int32_t t97 = -277740293;

    t97 = (((x445+x446)%x447)^x448);

    if (t97 != 16182) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x449 = -3;
	int8_t x450 = INT8_MIN;
	static int8_t x451 = INT8_MAX;
	uint16_t x452 = 3646U;
	static volatile int32_t t98 = 938;

    t98 = (((x449+x450)%x451)^x452);

    if (t98 != -3646) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x453 = 21U;
	int32_t x454 = -948020406;
	int32_t x455 = INT32_MAX;
	int64_t x456 = 24LL;
	volatile int64_t t99 = 62728LL;

    t99 = (((x453+x454)%x455)^x456);

    if (t99 != 1199463288LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x458 = UINT32_MAX;
	uint64_t x459 = UINT64_MAX;
	static int16_t x460 = INT16_MAX;
	volatile uint64_t t100 = 4908LLU;

    t100 = (((x457+x458)%x459)^x460);

    if (t100 != 32767LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x469 = 123U;
	volatile int8_t x470 = INT8_MAX;
	volatile int64_t x471 = INT64_MIN;
	uint64_t x472 = 28659611339LLU;
	static volatile uint64_t t101 = 1822807830LLU;

    t101 = (((x469+x470)%x471)^x472);

    if (t101 != 28659611185LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x473 = -1;
	uint32_t x474 = UINT32_MAX;
	volatile int32_t x475 = INT32_MIN;
	int16_t x476 = -1;
	uint32_t t102 = 695U;

    t102 = (((x473+x474)%x475)^x476);

    if (t102 != 2147483649U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x481 = 1463319LL;
	volatile int64_t x482 = INT64_MIN;
	int64_t x483 = INT64_MIN;
	int8_t x484 = INT8_MAX;
	int64_t t103 = 356LL;

    t103 = (((x481+x482)%x483)^x484);

    if (t103 != -9223372036853312408LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x485 = UINT16_MAX;
	static volatile uint8_t x486 = UINT8_MAX;
	static uint8_t x487 = 9U;
	uint64_t x488 = UINT64_MAX;
	volatile uint64_t t104 = UINT64_MAX;

    t104 = (((x485+x486)%x487)^x488);

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x490 = INT8_MAX;
	static uint8_t x492 = 3U;
	static int64_t t105 = 6LL;

    t105 = (((x489+x490)%x491)^x492);

    if (t105 != 1107LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x493 = 0;
	int8_t x494 = -25;
	int8_t x495 = INT8_MIN;
	int32_t x496 = INT32_MIN;
	static int32_t t106 = -25;

    t106 = (((x493+x494)%x495)^x496);

    if (t106 != 2147483623) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x499 = INT16_MIN;
	int8_t x500 = INT8_MAX;
	static volatile uint64_t t107 = 25059757043LLU;

    t107 = (((x497+x498)%x499)^x500);

    if (t107 != 697218121LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x501 = 4U;
	static int8_t x502 = INT8_MIN;
	uint16_t x503 = 84U;
	int16_t x504 = 1;
	int32_t t108 = -1;

    t108 = (((x501+x502)%x503)^x504);

    if (t108 != -39) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x505 = INT32_MAX;
	static int8_t x506 = INT8_MIN;
	static volatile int8_t x508 = INT8_MIN;

    t109 = (((x505+x506)%x507)^x508);

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x513 = INT8_MIN;
	int32_t x515 = -229358033;
	int8_t x516 = 5;
	int32_t t110 = -1;

    t110 = (((x513+x514)%x515)^x516);

    if (t110 != 32634) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x517 = 9971;
	static int64_t x518 = -1LL;
	uint8_t x519 = UINT8_MAX;
	volatile int64_t t111 = -2994571LL;

    t111 = (((x517+x518)%x519)^x520);

    if (t111 != 102LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x529 = -361554141;
	static int32_t x530 = INT32_MAX;
	static int32_t x531 = -196;
	volatile int64_t t112 = 1643513245620706653LL;

    t112 = (((x529+x530)%x531)^x532);

    if (t112 != -47LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x535 = UINT8_MAX;
	int16_t x536 = -1;

    t113 = (((x533+x534)%x535)^x536);

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x537 = 496LL;
	uint8_t x539 = UINT8_MAX;
	int64_t t114 = -682114533074708LL;

    t114 = (((x537+x538)%x539)^x540);

    if (t114 != 2147483639LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x541 = 9U;
	int64_t x544 = 131330246438689172LL;
	int64_t t115 = -62603622LL;

    t115 = (((x541+x542)%x543)^x544);

    if (t115 != -131330246438689251LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x545 = -1;
	volatile uint16_t x546 = 24U;
	int16_t x548 = -1;
	int32_t t116 = -105777758;

    t116 = (((x545+x546)%x547)^x548);

    if (t116 != -24) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x549 = INT8_MAX;
	volatile int8_t x550 = INT8_MAX;
	int32_t x551 = -14848;
	int16_t x552 = 10;

    t117 = (((x549+x550)%x551)^x552);

    if (t117 != 244) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x557 = -1;
	int64_t x558 = INT64_MAX;
	int32_t x559 = INT32_MIN;
	uint64_t x560 = UINT64_MAX;
	uint64_t t118 = 1577483LLU;

    t118 = (((x557+x558)%x559)^x560);

    if (t118 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x561 = -4387216174598013LL;
	static int32_t x562 = INT32_MIN;
	volatile int32_t x563 = -26668006;
	int16_t x564 = INT16_MIN;
	int64_t t119 = -3369091270LL;

    t119 = (((x561+x562)%x563)^x564);

    if (t119 != 11785075LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x569 = 86964515077771462LL;
	int32_t x570 = INT32_MIN;
	uint16_t x572 = 1426U;
	volatile int64_t t120 = -2611495376299157LL;

    t120 = (((x569+x570)%x571)^x572);

    if (t120 != 1426LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x573 = 3;
	uint16_t x574 = UINT16_MAX;
	static volatile int16_t x575 = INT16_MIN;
	int16_t x576 = INT16_MAX;
	static int32_t t121 = 6;

    t121 = (((x573+x574)%x575)^x576);

    if (t121 != 32765) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x577 = INT16_MAX;
	int64_t x579 = INT64_MAX;
	int32_t x580 = INT32_MIN;

    t122 = (((x577+x578)%x579)^x580);

    if (t122 != -2147450866LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x581 = INT8_MIN;
	int16_t x582 = INT16_MIN;
	static int32_t x583 = INT32_MIN;
	volatile uint32_t t123 = 1081035363U;

    t123 = (((x581+x582)%x583)^x584);

    if (t123 != 4294649423U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x585 = 38U;
	uint32_t x587 = 11723U;
	uint32_t t124 = 54228U;

    t124 = (((x585+x586)%x587)^x588);

    if (t124 != 4294964777U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x589 = UINT8_MAX;
	int16_t x591 = INT16_MIN;
	int16_t x592 = -4159;

    t125 = (((x589+x590)%x591)^x592);

    if (t125 != -4380) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x596 = 53U;

    t126 = (((x593+x594)%x595)^x596);

    if (t126 != 4294967243LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x598 = 18;
	uint64_t x600 = 688LLU;
	uint64_t t127 = 102LLU;

    t127 = (((x597+x598)%x599)^x600);

    if (t127 != 18446744073709550882LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x601 = UINT64_MAX;
	int8_t x602 = INT8_MIN;
	int16_t x603 = -1;
	int32_t x604 = -1;
	uint64_t t128 = 63096876565LLU;

    t128 = (((x601+x602)%x603)^x604);

    if (t128 != 128LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x605 = INT32_MIN;
	volatile int64_t x606 = -1LL;
	volatile int64_t x607 = -7692487539603898LL;
	int32_t x608 = -1;
	int64_t t129 = -24347614143158830LL;

    t129 = (((x605+x606)%x607)^x608);

    if (t129 != 2147483648LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x609 = UINT32_MAX;
	int32_t x610 = INT32_MAX;
	int32_t x612 = 1038903;

    t130 = (((x609+x610)%x611)^x612);

    if (t130 != 1038897U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x613 = INT32_MIN;
	int32_t x614 = 0;
	static volatile uint16_t x615 = 342U;
	static int16_t x616 = INT16_MIN;
	volatile int32_t t131 = -1;

    t131 = (((x613+x614)%x615)^x616);

    if (t131 != 32442) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x617 = UINT8_MAX;
	int16_t x618 = -1;
	int64_t x620 = -5792446364147LL;
	int64_t t132 = 159203441033LL;

    t132 = (((x617+x618)%x619)^x620);

    if (t132 != -5792446364045LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x621 = -1;
	volatile int16_t x622 = 41;
	uint16_t x624 = 220U;

    t133 = (((x621+x622)%x623)^x624);

    if (t133 != 244) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint8_t x625 = 3U;
	static uint16_t x626 = 52U;
	int16_t x628 = -1;
	volatile int32_t t134 = -209;

    t134 = (((x625+x626)%x627)^x628);

    if (t134 != -56) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x629 = -16638671;
	int8_t x630 = -30;
	int8_t x631 = -35;
	static int64_t x632 = 114042442195706LL;

    t135 = (((x629+x630)%x631)^x632);

    if (t135 != -114042442195702LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x633 = -11;
	int8_t x634 = INT8_MIN;
	static volatile int16_t x636 = INT16_MIN;
	uint32_t t136 = 44262437U;

    t136 = (((x633+x634)%x635)^x636);

    if (t136 != 32629U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x638 = 42U;
	int32_t x639 = INT32_MIN;
	volatile uint8_t x640 = 0U;
	volatile int32_t t137 = -440;

    t137 = (((x637+x638)%x639)^x640);

    if (t137 != -315) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x645 = -1;
	uint8_t x646 = 6U;
	static volatile int64_t x648 = INT64_MIN;

    t138 = (((x645+x646)%x647)^x648);

    if (t138 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x653 = 63U;
	uint16_t x655 = UINT16_MAX;

    t139 = (((x653+x654)%x655)^x656);

    if (t139 != 23258704680LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x661 = -1;
	int8_t x662 = -1;
	static volatile int64_t x663 = INT64_MIN;
	uint16_t x664 = 16160U;
	int64_t t140 = -11531399553LL;

    t140 = (((x661+x662)%x663)^x664);

    if (t140 != -16162LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x665 = -269LL;
	static int32_t x666 = INT32_MIN;
	static uint8_t x667 = UINT8_MAX;
	uint32_t x668 = 1408U;

    t141 = (((x665+x666)%x667)^x668);

    if (t141 != -1294LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x669 = 88U;
	static uint32_t x670 = 1209227114U;
	static uint64_t x671 = 1736298491LLU;
	int8_t x672 = INT8_MIN;
	uint64_t t142 = 1058853438028627965LLU;

    t142 = (((x669+x670)%x671)^x672);

    if (t142 != 18446744072500324418LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x673 = UINT16_MAX;
	uint8_t x675 = UINT8_MAX;

    t143 = (((x673+x674)%x675)^x676);

    if (t143 != 4294967287U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x677 = INT64_MIN;
	uint16_t x678 = 27789U;
	uint32_t x679 = UINT32_MAX;
	static int16_t x680 = -52;
	volatile int64_t t144 = 1418325709617840182LL;

    t144 = (((x677+x678)%x679)^x680);

    if (t144 != 2147455809LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x681 = -1;
	int16_t x682 = INT16_MAX;
	int32_t x683 = -844;
	uint8_t x684 = UINT8_MAX;
	static int32_t t145 = 443803;

    t145 = (((x681+x682)%x683)^x684);

    if (t145 != 585) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x685 = 23;
	volatile int16_t x686 = -12323;
	static int8_t x687 = 2;
	int64_t x688 = INT64_MIN;
	int64_t t146 = INT64_MIN;

    t146 = (((x685+x686)%x687)^x688);

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x693 = INT8_MIN;
	int64_t x694 = INT64_MAX;
	int32_t x696 = INT32_MIN;

    t147 = (((x693+x694)%x695)^x696);

    if (t147 != -2147472861LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x697 = -25;
	static volatile uint64_t x699 = UINT64_MAX;
	volatile int16_t x700 = -1;

    t148 = (((x697+x698)%x699)^x700);

    if (t148 != 82LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x705 = UINT32_MAX;
	int16_t x706 = -1;
	uint16_t x707 = 1U;
	int32_t x708 = -1;
	static uint32_t t149 = UINT32_MAX;

    t149 = (((x705+x706)%x707)^x708);

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x709 = 9728U;
	static int64_t x710 = -1LL;
	int64_t x711 = INT64_MIN;
	volatile uint8_t x712 = 1U;

    t150 = (((x709+x710)%x711)^x712);

    if (t150 != 9726LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x714 = UINT32_MAX;
	volatile uint16_t x715 = 8485U;
	int16_t x716 = INT16_MIN;
	volatile int64_t t151 = -5629574LL;

    t151 = (((x713+x714)%x715)^x716);

    if (t151 != 32000LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x717 = INT16_MIN;
	uint64_t x718 = 1577982711123776LLU;
	volatile int64_t x719 = -1LL;
	volatile uint64_t x720 = 511608442246583896LLU;
	uint64_t t152 = 109473LLU;

    t152 = (((x717+x718)%x719)^x720);

    if (t152 != 512286658025363736LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x721 = INT8_MIN;
	int16_t x722 = INT16_MAX;
	int16_t x723 = INT16_MAX;
	int16_t x724 = INT16_MIN;
	volatile int32_t t153 = -15999897;

    t153 = (((x721+x722)%x723)^x724);

    if (t153 != -129) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x725 = 14U;
	int64_t x726 = 4237564198435280LL;
	static volatile int32_t x727 = -84274406;
	volatile uint8_t x728 = UINT8_MAX;
	volatile int64_t t154 = 18565288165197LL;

    t154 = (((x725+x726)%x727)^x728);

    if (t154 != 56471539LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x733 = 0;
	uint32_t x734 = 252U;
	static int8_t x735 = INT8_MIN;
	volatile int8_t x736 = INT8_MAX;
	static volatile uint32_t t155 = 202U;

    t155 = (((x733+x734)%x735)^x736);

    if (t155 != 131U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x741 = 15336646817831LLU;
	uint64_t x742 = 6558961044627192952LLU;
	static volatile uint16_t x743 = UINT16_MAX;
	int8_t x744 = -44;

    t156 = (((x741+x742)%x743)^x744);

    if (t156 != 18446744073709499961LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x745 = -77;
	static uint64_t x748 = UINT64_MAX;
	uint64_t t157 = 3297844LLU;

    t157 = (((x745+x746)%x747)^x748);

    if (t157 != 77LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x749 = UINT8_MAX;
	uint16_t x750 = 466U;
	uint32_t x751 = 2140878894U;
	volatile uint8_t x752 = 3U;

    t158 = (((x749+x750)%x751)^x752);

    if (t158 != 722U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x753 = -13;
	uint32_t x754 = 16739293U;
	int8_t x755 = -1;
	int32_t x756 = INT32_MAX;

    t159 = (((x753+x754)%x755)^x756);

    if (t159 != 2130744367U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x757 = -150660LL;
	int16_t x758 = -55;
	static int32_t x759 = 476;

    t160 = (((x757+x758)%x759)^x760);

    if (t160 != 32469LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x761 = 30072260U;
	static volatile int64_t x763 = 703221681943610169LL;
	int64_t t161 = 1823666105006239LL;

    t161 = (((x761+x762)%x763)^x764);

    if (t161 != 4264894818LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x765 = 2835680440LLU;
	int8_t x766 = INT8_MIN;
	int32_t x767 = INT32_MAX;
	int64_t x768 = INT64_MIN;
	uint64_t t162 = 46893834046936790LLU;

    t162 = (((x765+x766)%x767)^x768);

    if (t162 != 9223372037542972473LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x769 = 894;
	int16_t x770 = -235;
	volatile int32_t x771 = INT32_MIN;
	uint64_t t163 = 1242LLU;

    t163 = (((x769+x770)%x771)^x772);

    if (t163 != 667LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x773 = 128237976976995LLU;
	static volatile uint64_t x774 = 657201192896LLU;
	int64_t x775 = -512913LL;
	int64_t x776 = -812762912701LL;
	volatile uint64_t t164 = 78684905LLU;

    t164 = (((x773+x774)%x775)^x776);

    if (t164 != 18446614848826570336LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x777 = INT8_MIN;
	int32_t x778 = -6781779;
	static int32_t x780 = INT32_MIN;

    t165 = (((x777+x778)%x779)^x780);

    if (t165 != -2147483648LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x781 = -22907863792116LL;
	int8_t x782 = -1;
	static uint8_t x784 = UINT8_MAX;

    t166 = (((x781+x782)%x783)^x784);

    if (t166 != -7050LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x785 = -1;
	int8_t x786 = 12;
	int16_t x787 = -1;
	int32_t x788 = -1879450;
	volatile int32_t t167 = -86514683;

    t167 = (((x785+x786)%x787)^x788);

    if (t167 != -1879450) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x789 = -1042851824;
	uint32_t x790 = 7U;
	int32_t x792 = -1;
	volatile uint32_t t168 = 15696845U;

    t168 = (((x789+x790)%x791)^x792);

    if (t168 != 1042851816U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x798 = UINT64_MAX;
	volatile int32_t x800 = INT32_MIN;
	static volatile uint64_t t169 = 9965520676884799LLU;

    t169 = (((x797+x798)%x799)^x800);

    if (t169 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x802 = INT16_MIN;
	int64_t x803 = INT64_MIN;
	int16_t x804 = 58;
	static volatile int64_t t170 = 880702959LL;

    t170 = (((x801+x802)%x803)^x804);

    if (t170 != -32827LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x805 = INT16_MIN;
	uint32_t x807 = UINT32_MAX;
	uint32_t t171 = 35U;

    t171 = (((x805+x806)%x807)^x808);

    if (t171 != 32776U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x814 = -467LL;
	int64_t x815 = -1LL;
	int8_t x816 = -1;
	int64_t t172 = -189LL;

    t172 = (((x813+x814)%x815)^x816);

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint64_t x817 = UINT64_MAX;
	uint8_t x818 = 17U;
	int32_t x819 = INT32_MIN;
	uint32_t x820 = 1332350216U;
	static volatile uint64_t t173 = 41725177925902LLU;

    t173 = (((x817+x818)%x819)^x820);

    if (t173 != 1332350232LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x821 = 4003568508754606LLU;
	int64_t x822 = INT64_MIN;
	int32_t x823 = -217;
	uint64_t x824 = 124310LLU;
	uint64_t t174 = 106849402211LLU;

    t174 = (((x821+x822)%x823)^x824);

    if (t174 != 9227375605363621688LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x826 = 10;
	uint16_t x827 = UINT16_MAX;

    t175 = (((x825+x826)%x827)^x828);

    if (t175 != 18823LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x829 = 1240676041LLU;
	int16_t x830 = -3;
	uint16_t x831 = 1979U;
	static int16_t x832 = -89;
	uint64_t t176 = 72LLU;

    t176 = (((x829+x830)%x831)^x832);

    if (t176 != 18446744073709550313LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x833 = UINT32_MAX;
	int64_t x834 = -231202909456LL;
	static int8_t x835 = INT8_MIN;
	static volatile int64_t t177 = 1LL;

    t177 = (((x833+x834)%x835)^x836);

    if (t177 != 2147483631LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x837 = 15;
	static uint64_t x838 = UINT64_MAX;
	static int8_t x839 = INT8_MIN;
	volatile uint64_t t178 = 819818LLU;

    t178 = (((x837+x838)%x839)^x840);

    if (t178 != 18446744073709518862LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x842 = UINT32_MAX;
	static volatile int16_t x844 = INT16_MIN;
	int64_t t179 = 6LL;

    t179 = (((x841+x842)%x843)^x844);

    if (t179 != 32655LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x845 = 955U;
	uint64_t x846 = UINT64_MAX;
	static volatile uint32_t x848 = 544709548U;

    t180 = (((x845+x846)%x847)^x848);

    if (t180 != 544708630LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x850 = -796;
	int64_t x851 = -9047LL;
	static volatile int64_t x852 = INT64_MIN;
	static volatile int64_t t181 = -73743689950962LL;

    t181 = (((x849+x850)%x851)^x852);

    if (t181 != 9223372036854775158LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x858 = INT16_MIN;

    t182 = (((x857+x858)%x859)^x860);

    if (t182 != 7570744926LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x861 = -1;
	int16_t x862 = INT16_MIN;
	int8_t x863 = INT8_MIN;
	uint8_t x864 = 94U;
	static int32_t t183 = 100;

    t183 = (((x861+x862)%x863)^x864);

    if (t183 != -95) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x865 = UINT64_MAX;
	uint16_t x866 = 83U;
	volatile int32_t x867 = INT32_MIN;
	static int32_t x868 = INT32_MIN;
	volatile uint64_t t184 = 44349670396396857LLU;

    t184 = (((x865+x866)%x867)^x868);

    if (t184 != 18446744071562068050LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x869 = 1243438094LL;
	static int32_t x870 = 39253;
	uint64_t x871 = 1905329178832LLU;
	int64_t x872 = INT64_MIN;
	volatile uint64_t t185 = 202867344272858789LLU;

    t185 = (((x869+x870)%x871)^x872);

    if (t185 != 9223372038098253155LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x877 = -1;
	int64_t x878 = -200240513856LL;
	int64_t t186 = 92589LL;

    t186 = (((x877+x878)%x879)^x880);

    if (t186 != 138195LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x881 = 7U;
	int8_t x882 = INT8_MAX;
	uint64_t x883 = 917352679170LLU;
	static int8_t x884 = -11;
	volatile uint64_t t187 = 2446557740LLU;

    t187 = (((x881+x882)%x883)^x884);

    if (t187 != 18446744073709551475LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x887 = INT16_MAX;
	uint16_t x888 = UINT16_MAX;
	volatile int32_t t188 = 357571360;

    t188 = (((x885+x886)%x887)^x888);

    if (t188 != -47972) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x889 = INT32_MIN;
	int8_t x891 = -1;
	int32_t t189 = INT32_MIN;

    t189 = (((x889+x890)%x891)^x892);

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x893 = -1;
	static int32_t x894 = -459627391;
	volatile int64_t x896 = 2014531978LL;
	volatile int64_t t190 = 3774138LL;

    t190 = (((x893+x894)%x895)^x896);

    if (t190 != 2014531978LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x897 = 43057366419903LLU;
	uint16_t x898 = 22U;
	int16_t x899 = INT16_MIN;
	uint64_t t191 = 12LLU;

    t191 = (((x897+x898)%x899)^x900);

    if (t191 != 43057366426654LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x902 = 155689045944LLU;
	uint8_t x903 = UINT8_MAX;
	uint64_t t192 = 55099533LLU;

    t192 = (((x901+x902)%x903)^x904);

    if (t192 != 240LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x905 = 13649071872LLU;
	int64_t x906 = INT64_MAX;
	static uint16_t x907 = 7912U;
	int32_t x908 = -399552896;
	uint64_t t193 = 209LLU;

    t193 = (((x905+x906)%x907)^x908);

    if (t193 != 18446744073310002559LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x909 = INT8_MIN;
	static uint16_t x910 = 1U;
	static int16_t x911 = -1;
	int64_t x912 = INT64_MIN;
	volatile int64_t t194 = INT64_MIN;

    t194 = (((x909+x910)%x911)^x912);

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x913 = UINT16_MAX;
	uint8_t x915 = 1U;
	uint64_t x916 = UINT64_MAX;

    t195 = (((x913+x914)%x915)^x916);

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x917 = UINT16_MAX;
	uint16_t x919 = 120U;
	static int64_t t196 = -11584LL;

    t196 = (((x917+x918)%x919)^x920);

    if (t196 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x922 = 327065U;
	static volatile int32_t x924 = -1;

    t197 = (((x921+x922)%x923)^x924);

    if (t197 != 4291088919U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x930 = 37728U;
	uint8_t x931 = UINT8_MAX;
	uint32_t t198 = 1200379462U;

    t198 = (((x929+x930)%x931)^x932);

    if (t198 != 2147483764U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x941 = INT16_MIN;
	static uint64_t x942 = 5851LLU;
	int16_t x944 = INT16_MIN;
	volatile uint64_t t199 = 46362290LLU;

    t199 = (((x941+x942)%x943)^x944);

    if (t199 != 18446744073709524714LLU) { NG(); } else { ; }
	
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

