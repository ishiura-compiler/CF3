
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

int32_t t1 = 0;
int32_t x11 = -55;
int64_t x15 = -1LL;
static int32_t t3 = 232351;
static volatile int32_t t4 = 0;
int32_t x31 = INT32_MAX;
volatile int32_t t9 = 1;
int8_t x42 = 2;
int8_t x55 = INT8_MAX;
uint64_t x67 = 29118260LLU;
int8_t x76 = INT8_MAX;
volatile uint16_t x84 = 6U;
int32_t x87 = INT32_MAX;
int16_t x90 = INT16_MAX;
volatile int64_t x91 = -1LL;
volatile int32_t t22 = 1;
int8_t x94 = INT8_MAX;
uint32_t x97 = 20U;
uint32_t x103 = 83U;
static volatile int32_t t26 = 253;
int64_t x109 = INT64_MAX;
int32_t t27 = 1667;
int32_t x113 = INT32_MIN;
int8_t x116 = 0;
uint16_t x118 = 11459U;
uint32_t x119 = 2U;
static int32_t t29 = -771298;
int64_t x131 = INT64_MIN;
int64_t x142 = 241558039810869344LL;
uint32_t x146 = 1285151U;
int64_t x148 = INT64_MIN;
volatile int32_t x155 = INT32_MIN;
static volatile int32_t x160 = -1;
volatile int32_t t39 = 12200;
int32_t x162 = -1;
int8_t x170 = INT8_MIN;
int16_t x171 = INT16_MIN;
uint64_t x172 = 17660833984363LLU;
volatile int8_t x176 = 59;
int32_t t43 = 42539156;
static int16_t x177 = 14;
int32_t x178 = -344437;
int64_t x179 = INT64_MIN;
volatile int16_t x187 = INT16_MIN;
uint16_t x194 = 1984U;
volatile int8_t x196 = INT8_MAX;
static volatile int32_t t48 = 20;
int32_t x199 = INT32_MAX;
int64_t x203 = -1889787331597LL;
volatile uint8_t x204 = UINT8_MAX;
static volatile uint8_t x221 = 1U;
int8_t x222 = INT8_MIN;
int32_t t55 = 48;
static int32_t x228 = 48879;
int32_t t56 = -70233378;
int64_t x233 = INT64_MAX;
static int32_t x236 = -1;
static int8_t x238 = 0;
int16_t x241 = -1;
uint16_t x244 = UINT16_MAX;
static int64_t x247 = -77649296LL;
int32_t t61 = -3452;
int16_t x254 = 5992;
int64_t x255 = INT64_MAX;
int64_t x257 = 2864558755347LL;
int16_t x261 = INT16_MIN;
int32_t t65 = -19699916;
static uint8_t x271 = 35U;
int16_t x272 = INT16_MAX;
uint64_t x274 = 201589126662884861LLU;
volatile uint16_t x275 = 303U;
int8_t x280 = -1;
static int32_t t69 = -3;
int64_t x287 = INT64_MIN;
volatile int32_t t71 = -1619;
int32_t x290 = INT32_MIN;
uint16_t x291 = 15963U;
int32_t t73 = 11;
int8_t x302 = 18;
static uint64_t x303 = 495026083LLU;
int64_t x304 = 150682457LL;
volatile int32_t t75 = 20583;
int8_t x314 = INT8_MIN;
static int8_t x315 = INT8_MIN;
volatile uint32_t x317 = 7911157U;
volatile int8_t x320 = INT8_MIN;
int32_t t79 = 117865463;
volatile int16_t x321 = 0;
int8_t x324 = INT8_MAX;
int32_t x330 = INT32_MIN;
int64_t x335 = 513269059833LL;
uint64_t x336 = 36120756LLU;
static volatile int32_t t84 = -836;
int16_t x344 = INT16_MAX;
volatile int8_t x348 = INT8_MIN;
int32_t t86 = 1;
int16_t x352 = INT16_MAX;
static int32_t t87 = -4983;
int16_t x358 = INT16_MAX;
int16_t x362 = -1;
int8_t x373 = INT8_MAX;
int64_t x382 = INT64_MAX;
int32_t t95 = -4;
volatile int32_t t97 = -847138;
volatile uint16_t x394 = 11U;
uint64_t x415 = 197922443724880LLU;
static volatile int32_t t105 = -192885;
int32_t t106 = -43361;
uint32_t x429 = 409U;
static volatile uint16_t x430 = 602U;
int8_t x431 = -1;
static uint16_t x434 = 33U;
int16_t x437 = 0;
int32_t t110 = -4;
static uint64_t x446 = 1LLU;
static volatile int32_t t111 = 8727830;
static int8_t x459 = -1;
int32_t t115 = 14315767;
int64_t x471 = -1LL;
int32_t x472 = -718;
int32_t x473 = INT32_MAX;
int8_t x476 = INT8_MIN;
uint64_t x479 = 113363702786LLU;
int32_t t120 = 96;
volatile int16_t x489 = INT16_MAX;
uint64_t x495 = 1743098LLU;
int32_t t124 = 46754;
static int64_t x501 = -1LL;
int64_t x506 = INT64_MIN;
static int8_t x507 = 10;
static int8_t x508 = 1;
static volatile int32_t t126 = -63;
static int64_t x516 = INT64_MAX;
int32_t x519 = 894831;
uint8_t x521 = 1U;
uint8_t x528 = UINT8_MAX;
int8_t x536 = 1;
volatile int8_t x542 = INT8_MAX;
uint16_t x543 = 3512U;
int32_t x546 = -1;
uint64_t x549 = 93453506145629LLU;
int8_t x552 = INT8_MIN;
int16_t x576 = INT16_MIN;
static uint16_t x586 = 1838U;
volatile int32_t t146 = -67838;
static int32_t t147 = -29;
volatile int32_t t150 = 11724230;
int16_t x607 = 1;
int64_t x614 = INT64_MIN;
int64_t x616 = INT64_MIN;
volatile int16_t x621 = -1;
int64_t x622 = INT64_MIN;
static int32_t x626 = INT32_MIN;
uint64_t x630 = 24909LLU;
int32_t t157 = 1;
static int8_t x634 = -1;
static uint8_t x635 = 0U;
volatile int8_t x642 = 48;
int32_t t160 = -397;
uint16_t x651 = 9U;
int32_t t163 = -9;
uint16_t x660 = 7303U;
static int8_t x663 = -1;
uint16_t x664 = UINT16_MAX;
volatile int32_t t165 = -6;
uint8_t x665 = 1U;
int64_t x670 = -1LL;
int16_t x674 = INT16_MAX;
int16_t x676 = INT16_MIN;
int32_t t168 = 793913716;
volatile int32_t t169 = -87821356;
int64_t x686 = -3946LL;
int8_t x688 = INT8_MAX;
int16_t x698 = INT16_MAX;
int32_t t174 = -3388;
static int8_t x705 = INT8_MIN;
int32_t x706 = -6;
uint32_t x708 = 914279U;
int32_t x710 = INT32_MIN;
int32_t t177 = 1;
uint32_t x716 = 14210U;
uint64_t x723 = 3480LLU;
volatile int32_t t181 = 1806454;
volatile int8_t x731 = INT8_MIN;
int32_t x732 = INT32_MAX;
int8_t x744 = INT8_MIN;
static int32_t x746 = INT32_MAX;
int8_t x750 = INT8_MIN;
static volatile int8_t x755 = INT8_MAX;
static volatile int32_t x759 = -1;
static volatile int32_t x767 = 22;
int32_t x769 = -213483;
int32_t x770 = INT32_MIN;
int16_t x773 = -238;
static uint64_t x777 = UINT64_MAX;
volatile int32_t t194 = -393;
uint8_t x782 = 12U;
uint32_t x786 = 9520U;
int8_t x799 = INT8_MAX;
static int32_t t199 = -3615663;


void f0(void) {
    	volatile int16_t x1 = -1;
	int64_t x2 = -1LL;
	int32_t x3 = INT32_MIN;
	volatile uint8_t x4 = 5U;
	int32_t t0 = -60777;

    t0 = ((x1^(x2^x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MIN;
	int16_t x6 = -1;
	int16_t x7 = -27;
	int32_t x8 = -1;

    t1 = ((x5^(x6^x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 19699LLU;
	int16_t x10 = -9;
	static volatile int32_t x12 = INT32_MIN;
	static int32_t t2 = 1;

    t2 = ((x9^(x10^x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 1U;
	volatile int64_t x14 = -15519240LL;
	static uint16_t x16 = 14U;

    t3 = ((x13^(x14^x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int64_t x18 = -1LL;
	static int64_t x19 = -1LL;
	static volatile uint8_t x20 = 20U;

    t4 = ((x17^(x18^x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 47973788537LLU;
	static uint16_t x22 = 32026U;
	uint8_t x23 = 54U;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -709836;

    t5 = ((x21^(x22^x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -532516;
	int32_t x26 = INT32_MIN;
	static uint8_t x27 = 1U;
	int64_t x28 = INT64_MIN;
	int32_t t6 = 456230677;

    t6 = ((x25^(x26^x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	static volatile uint8_t x30 = 1U;
	int64_t x32 = -1LL;
	int32_t t7 = -1;

    t7 = ((x29^(x30^x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static int16_t x34 = INT16_MAX;
	uint64_t x35 = UINT64_MAX;
	static int16_t x36 = -1;
	int32_t t8 = -26298;

    t8 = ((x33^(x34^x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int64_t x38 = INT64_MAX;
	volatile uint16_t x39 = UINT16_MAX;
	uint8_t x40 = UINT8_MAX;

    t9 = ((x37^(x38^x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -51;
	static int32_t x43 = -7951;
	int16_t x44 = -1;
	volatile int32_t t10 = -40465;

    t10 = ((x41^(x42^x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	static volatile uint32_t x46 = 2283U;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = 1456;

    t11 = ((x45^(x46^x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = -4LL;
	uint32_t x50 = 50804146U;
	static int64_t x51 = -8229865728986LL;
	int32_t x52 = 21;
	static int32_t t12 = 387677272;

    t12 = ((x49^(x50^x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x53 = 24U;
	volatile int64_t x54 = INT64_MAX;
	uint32_t x56 = UINT32_MAX;
	int32_t t13 = 4575;

    t13 = ((x53^(x54^x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	int8_t x58 = -30;
	static int32_t x59 = INT32_MAX;
	volatile uint16_t x60 = 1U;
	volatile int32_t t14 = 384719;

    t14 = ((x57^(x58^x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x61 = 881001961LLU;
	int8_t x62 = 0;
	static int32_t x63 = INT32_MIN;
	uint32_t x64 = 3U;
	static volatile int32_t t15 = 0;

    t15 = ((x61^(x62^x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	static int32_t x66 = 38748;
	static int64_t x68 = -1LL;
	int32_t t16 = 15754027;

    t16 = ((x65^(x66^x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 582U;
	int8_t x70 = INT8_MIN;
	static uint64_t x71 = 99468904525LLU;
	static int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 773;

    t17 = ((x69^(x70^x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 87;
	int64_t x74 = -16333512LL;
	int16_t x75 = INT16_MAX;
	int32_t t18 = -181017729;

    t18 = ((x73^(x74^x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = 49666696991491LL;
	int32_t x78 = INT32_MIN;
	int32_t x79 = INT32_MAX;
	int32_t x80 = -5926244;
	static int32_t t19 = -31;

    t19 = ((x77^(x78^x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	uint64_t x82 = UINT64_MAX;
	uint8_t x83 = 1U;
	volatile int32_t t20 = 1;

    t20 = ((x81^(x82^x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x85 = 2U;
	int32_t x86 = -1;
	uint8_t x88 = 3U;
	int32_t t21 = -11190;

    t21 = ((x85^(x86^x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	static int16_t x92 = INT16_MAX;

    t22 = ((x89^(x90^x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	static uint64_t x95 = 60198649373LLU;
	static volatile int16_t x96 = -57;
	volatile int32_t t23 = -18112022;

    t23 = ((x93^(x94^x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x98 = 2462U;
	int32_t x99 = INT32_MIN;
	static int8_t x100 = 2;
	static volatile int32_t t24 = -1058485;

    t24 = ((x97^(x98^x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = 6374;
	volatile int8_t x102 = 0;
	uint16_t x104 = 842U;
	volatile int32_t t25 = 0;

    t25 = ((x101^(x102^x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -15;
	int8_t x106 = 2;
	uint32_t x107 = 14332593U;
	uint8_t x108 = UINT8_MAX;

    t26 = ((x105^(x106^x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = -1;
	uint8_t x111 = UINT8_MAX;
	volatile int32_t x112 = INT32_MAX;

    t27 = ((x109^(x110^x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = -3219;
	int64_t x115 = INT64_MIN;
	volatile int32_t t28 = -53786127;

    t28 = ((x113^(x114^x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	volatile int16_t x120 = -1;

    t29 = ((x117^(x118^x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	int64_t x122 = INT64_MIN;
	static uint8_t x123 = 116U;
	int8_t x124 = -1;
	static volatile int32_t t30 = 0;

    t30 = ((x121^(x122^x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = UINT32_MAX;
	static int32_t x126 = -3260614;
	int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MAX;
	volatile int32_t t31 = -1;

    t31 = ((x125^(x126^x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	uint16_t x130 = UINT16_MAX;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -32698;

    t32 = ((x129^(x130^x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -22114103LL;
	int8_t x134 = INT8_MIN;
	int64_t x135 = 231520902150299515LL;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 128108537;

    t33 = ((x133^(x134^x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = INT16_MIN;
	uint8_t x138 = UINT8_MAX;
	uint8_t x139 = UINT8_MAX;
	static int16_t x140 = -1;
	volatile int32_t t34 = -13;

    t34 = ((x137^(x138^x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 26978109880149LLU;
	volatile uint8_t x143 = UINT8_MAX;
	uint32_t x144 = 14U;
	volatile int32_t t35 = 67;

    t35 = ((x141^(x142^x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = INT8_MAX;
	uint64_t x147 = UINT64_MAX;
	int32_t t36 = 540;

    t36 = ((x145^(x146^x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	uint64_t x150 = UINT64_MAX;
	int32_t x151 = INT32_MIN;
	volatile int64_t x152 = INT64_MAX;
	volatile int32_t t37 = 2010;

    t37 = ((x149^(x150^x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int8_t x154 = INT8_MIN;
	int64_t x156 = -1LL;
	int32_t t38 = 6815;

    t38 = ((x153^(x154^x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 9;
	static int16_t x158 = -572;
	volatile int16_t x159 = -1;

    t39 = ((x157^(x158^x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MIN;
	uint64_t x163 = 5329715875LLU;
	int16_t x164 = 34;
	volatile int32_t t40 = 31;

    t40 = ((x161^(x162^x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = UINT32_MAX;
	int64_t x166 = INT64_MIN;
	uint16_t x167 = 1946U;
	static int8_t x168 = 1;
	volatile int32_t t41 = 56;

    t41 = ((x165^(x166^x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 18190U;
	volatile int32_t t42 = -6367;

    t42 = ((x169^(x170^x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -31;
	uint16_t x174 = 15U;
	int32_t x175 = -1;

    t43 = ((x173^(x174^x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x180 = 105U;
	volatile int32_t t44 = -184;

    t44 = ((x177^(x178^x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x181 = INT32_MIN;
	int16_t x182 = 0;
	static uint64_t x183 = 2869485910LLU;
	volatile int16_t x184 = INT16_MIN;
	static volatile int32_t t45 = 2737;

    t45 = ((x181^(x182^x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x185 = INT64_MIN;
	int8_t x186 = 30;
	volatile uint16_t x188 = 305U;
	int32_t t46 = 3;

    t46 = ((x185^(x186^x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	volatile uint16_t x190 = UINT16_MAX;
	static volatile int32_t x191 = INT32_MAX;
	static uint16_t x192 = 92U;
	int32_t t47 = -1;

    t47 = ((x189^(x190^x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	volatile int16_t x195 = INT16_MIN;

    t48 = ((x193^(x194^x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -11;
	int8_t x198 = 1;
	int16_t x200 = INT16_MAX;
	int32_t t49 = 15857;

    t49 = ((x197^(x198^x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -1;
	int16_t x202 = INT16_MAX;
	volatile int32_t t50 = 7;

    t50 = ((x201^(x202^x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x205 = INT32_MAX;
	int16_t x206 = INT16_MIN;
	volatile int32_t x207 = -1;
	int64_t x208 = -26115910978707LL;
	volatile int32_t t51 = 838857419;

    t51 = ((x205^(x206^x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	uint16_t x210 = UINT16_MAX;
	int8_t x211 = INT8_MAX;
	uint32_t x212 = UINT32_MAX;
	int32_t t52 = 3;

    t52 = ((x209^(x210^x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x213 = INT16_MIN;
	uint32_t x214 = UINT32_MAX;
	int32_t x215 = INT32_MIN;
	static uint16_t x216 = UINT16_MAX;
	volatile int32_t t53 = -11139;

    t53 = ((x213^(x214^x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MAX;
	int8_t x219 = INT8_MIN;
	static int64_t x220 = INT64_MAX;
	volatile int32_t t54 = -8;

    t54 = ((x217^(x218^x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x223 = INT16_MIN;
	volatile int16_t x224 = -1;

    t55 = ((x221^(x222^x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	static int8_t x226 = 1;
	int64_t x227 = INT64_MIN;

    t56 = ((x225^(x226^x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = 31LLU;
	int32_t x230 = -1;
	uint64_t x231 = 350307758348139205LLU;
	volatile int8_t x232 = -1;
	static volatile int32_t t57 = -177;

    t57 = ((x229^(x230^x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x234 = -1;
	static int64_t x235 = -1LL;
	static int32_t t58 = 1807;

    t58 = ((x233^(x234^x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = UINT64_MAX;
	volatile int32_t x239 = 845766189;
	volatile uint32_t x240 = UINT32_MAX;
	volatile int32_t t59 = -2;

    t59 = ((x237^(x238^x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = INT16_MIN;
	uint8_t x243 = 0U;
	static volatile int32_t t60 = 15570076;

    t60 = ((x241^(x242^x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 29U;
	uint32_t x246 = UINT32_MAX;
	int8_t x248 = 11;

    t61 = ((x245^(x246^x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1793;
	int32_t x250 = INT32_MIN;
	int8_t x251 = -36;
	int8_t x252 = INT8_MAX;
	volatile int32_t t62 = 47275;

    t62 = ((x249^(x250^x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	int64_t x256 = INT64_MIN;
	static int32_t t63 = 23181090;

    t63 = ((x253^(x254^x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = UINT64_MAX;
	int32_t x259 = INT32_MIN;
	uint64_t x260 = 28634970944183748LLU;
	volatile int32_t t64 = -1;

    t64 = ((x257^(x258^x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x262 = 6U;
	uint16_t x263 = 2U;
	int8_t x264 = 0;

    t65 = ((x261^(x262^x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	static int64_t x266 = INT64_MIN;
	static volatile uint16_t x267 = 27U;
	int16_t x268 = INT16_MIN;
	int32_t t66 = -100373067;

    t66 = ((x265^(x266^x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	static volatile int8_t x270 = INT8_MAX;
	int32_t t67 = 6;

    t67 = ((x269^(x270^x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x273 = INT8_MIN;
	uint8_t x276 = 5U;
	volatile int32_t t68 = 38;

    t68 = ((x273^(x274^x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -1;
	int64_t x278 = -846566409LL;
	uint16_t x279 = 285U;

    t69 = ((x277^(x278^x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x281 = -1;
	uint16_t x282 = 63U;
	static int64_t x283 = -38365775831LL;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = 2034602;

    t70 = ((x281^(x282^x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MIN;
	volatile int64_t x288 = INT64_MAX;

    t71 = ((x285^(x286^x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	int16_t x292 = 272;
	int32_t t72 = -1604683;

    t72 = ((x289^(x290^x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x293 = -1;
	static int16_t x294 = -24;
	volatile uint8_t x295 = 50U;
	static volatile int16_t x296 = -30;

    t73 = ((x293^(x294^x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -5;
	static volatile int16_t x298 = INT16_MAX;
	static int64_t x299 = INT64_MIN;
	static uint8_t x300 = 3U;
	int32_t t74 = -3251;

    t74 = ((x297^(x298^x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;

    t75 = ((x301^(x302^x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = 638;
	volatile int64_t x306 = INT64_MIN;
	int64_t x307 = -1168603904593LL;
	static uint32_t x308 = UINT32_MAX;
	int32_t t76 = -3;

    t76 = ((x305^(x306^x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1;
	int64_t x310 = INT64_MIN;
	volatile int32_t x311 = 1058;
	uint16_t x312 = 4087U;
	int32_t t77 = -325544895;

    t77 = ((x309^(x310^x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 3U;
	int16_t x316 = 1956;
	static volatile int32_t t78 = -1232;

    t78 = ((x313^(x314^x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x318 = UINT8_MAX;
	int8_t x319 = 6;

    t79 = ((x317^(x318^x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = 48966;
	volatile int16_t x323 = -1;
	volatile int32_t t80 = -1733065;

    t80 = ((x321^(x322^x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 276359635933303LLU;
	uint32_t x326 = 49344U;
	volatile int32_t x327 = INT32_MAX;
	volatile int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 5956;

    t81 = ((x325^(x326^x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	volatile int8_t x331 = -2;
	volatile int64_t x332 = 25LL;
	int32_t t82 = -2270;

    t82 = ((x329^(x330^x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 1484679089LLU;
	volatile int8_t x334 = 0;
	volatile int32_t t83 = 31943;

    t83 = ((x333^(x334^x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x337 = 2740837U;
	static int64_t x338 = -1622LL;
	uint32_t x339 = UINT32_MAX;
	static uint32_t x340 = 715372U;

    t84 = ((x337^(x338^x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = INT32_MAX;
	int32_t x342 = INT32_MIN;
	static int8_t x343 = INT8_MIN;
	int32_t t85 = -81603694;

    t85 = ((x341^(x342^x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = INT64_MIN;
	int16_t x346 = INT16_MIN;
	int16_t x347 = INT16_MAX;

    t86 = ((x345^(x346^x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 1;
	volatile int32_t x350 = INT32_MAX;
	static int8_t x351 = INT8_MIN;

    t87 = ((x349^(x350^x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = 0;
	int8_t x354 = 2;
	int16_t x355 = -1;
	int8_t x356 = 1;
	static volatile int32_t t88 = -51165741;

    t88 = ((x353^(x354^x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	uint16_t x359 = 1U;
	static volatile uint32_t x360 = UINT32_MAX;
	static int32_t t89 = 248;

    t89 = ((x357^(x358^x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MAX;
	uint64_t x363 = UINT64_MAX;
	uint64_t x364 = 234526LLU;
	volatile int32_t t90 = 146;

    t90 = ((x361^(x362^x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = -271993LL;
	int8_t x366 = INT8_MIN;
	int32_t x367 = -1027845785;
	volatile int32_t x368 = -23782;
	volatile int32_t t91 = -96900075;

    t91 = ((x365^(x366^x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x369 = 25U;
	int32_t x370 = 5503;
	static uint8_t x371 = 3U;
	volatile uint32_t x372 = 8674U;
	static int32_t t92 = -1;

    t92 = ((x369^(x370^x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	int16_t x376 = -3513;
	volatile int32_t t93 = -35216;

    t93 = ((x373^(x374^x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x377 = 983420LLU;
	static int64_t x378 = -35008407017264LL;
	int16_t x379 = -1;
	int64_t x380 = INT64_MAX;
	int32_t t94 = -830197;

    t94 = ((x377^(x378^x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 3;
	static uint64_t x383 = 1567701611474496451LLU;
	int16_t x384 = INT16_MIN;

    t95 = ((x381^(x382^x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = INT64_MAX;
	int32_t x386 = -1;
	int32_t x387 = INT32_MAX;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = -31132622;

    t96 = ((x385^(x386^x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MAX;
	static volatile uint16_t x390 = 22200U;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = UINT64_MAX;

    t97 = ((x389^(x390^x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = INT32_MAX;
	uint64_t x395 = 717258LLU;
	static int64_t x396 = 36185LL;
	int32_t t98 = -207768;

    t98 = ((x393^(x394^x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 399278305198LLU;
	int64_t x398 = 5988449LL;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MIN;
	int32_t t99 = 0;

    t99 = ((x397^(x398^x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = 492567601747669607LL;
	volatile uint32_t x402 = 364527U;
	uint16_t x403 = 1U;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t100 = -185334;

    t100 = ((x401^(x402^x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x405 = INT16_MIN;
	volatile uint64_t x406 = 2679337LLU;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = -231;
	int32_t t101 = 190349;

    t101 = ((x405^(x406^x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int16_t x409 = 0;
	int64_t x410 = INT64_MAX;
	int32_t x411 = 227;
	uint8_t x412 = UINT8_MAX;
	static int32_t t102 = -3652;

    t102 = ((x409^(x410^x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x413 = INT32_MIN;
	int16_t x414 = -1;
	static volatile int32_t x416 = 569;
	static int32_t t103 = -171065676;

    t103 = ((x413^(x414^x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 375504U;
	int8_t x418 = -19;
	static int16_t x419 = 2;
	int8_t x420 = INT8_MAX;
	int32_t t104 = -108;

    t104 = ((x417^(x418^x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	int16_t x422 = -1;
	volatile uint64_t x423 = 1812791689LLU;
	int16_t x424 = INT16_MAX;

    t105 = ((x421^(x422^x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = UINT16_MAX;
	uint16_t x426 = 279U;
	volatile uint64_t x427 = 1698838826104220LLU;
	int16_t x428 = 24;

    t106 = ((x425^(x426^x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x432 = 5565U;
	volatile int32_t t107 = -29492;

    t107 = ((x429^(x430^x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 2388608;
	uint16_t x435 = 0U;
	uint32_t x436 = UINT32_MAX;
	int32_t t108 = -16743388;

    t108 = ((x433^(x434^x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x438 = INT64_MIN;
	volatile int16_t x439 = -1;
	int64_t x440 = INT64_MAX;
	int32_t t109 = -1;

    t109 = ((x437^(x438^x439))==x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	uint32_t x442 = 31176U;
	int64_t x443 = 39630146648187LL;
	volatile int32_t x444 = 21354;

    t110 = ((x441^(x442^x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 186U;
	static int64_t x447 = INT64_MIN;
	int64_t x448 = -15703431LL;

    t111 = ((x445^(x446^x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 43912856614569861LL;
	volatile int32_t x450 = -1;
	volatile int32_t x451 = -5745721;
	int16_t x452 = -1;
	static int32_t t112 = 1844;

    t112 = ((x449^(x450^x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 42U;
	volatile int16_t x454 = -388;
	volatile int8_t x455 = 0;
	uint64_t x456 = 556915473277321437LLU;
	int32_t t113 = -97111015;

    t113 = ((x453^(x454^x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 15571U;
	uint64_t x458 = 166486796324LLU;
	int16_t x460 = INT16_MAX;
	int32_t t114 = 0;

    t114 = ((x457^(x458^x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	int16_t x462 = INT16_MAX;
	static int64_t x463 = -1LL;
	int64_t x464 = INT64_MIN;

    t115 = ((x461^(x462^x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	int16_t x466 = 1;
	int32_t x467 = INT32_MIN;
	uint32_t x468 = UINT32_MAX;
	static volatile int32_t t116 = -5;

    t116 = ((x465^(x466^x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 56U;
	uint64_t x470 = 3706791453739796831LLU;
	volatile int32_t t117 = 910750596;

    t117 = ((x469^(x470^x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = INT32_MIN;
	volatile int8_t x475 = INT8_MIN;
	volatile int32_t t118 = -344673646;

    t118 = ((x473^(x474^x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -1;
	static int8_t x478 = -1;
	int16_t x480 = INT16_MAX;
	int32_t t119 = -11;

    t119 = ((x477^(x478^x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = UINT16_MAX;
	uint32_t x482 = UINT32_MAX;
	volatile uint16_t x483 = 40U;
	int64_t x484 = INT64_MIN;

    t120 = ((x481^(x482^x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MAX;
	uint32_t x486 = UINT32_MAX;
	int64_t x487 = 2109LL;
	static uint32_t x488 = 7060U;
	static volatile int32_t t121 = 20336214;

    t121 = ((x485^(x486^x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x490 = 0;
	int64_t x491 = INT64_MIN;
	static uint64_t x492 = 16499173LLU;
	int32_t t122 = 3371;

    t122 = ((x489^(x490^x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = 125326199739841LL;
	int16_t x494 = INT16_MIN;
	static int32_t x496 = 236589604;
	int32_t t123 = 5;

    t123 = ((x493^(x494^x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = 38;
	uint32_t x498 = 592128U;
	static uint8_t x499 = 13U;
	int8_t x500 = INT8_MIN;

    t124 = ((x497^(x498^x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = INT8_MIN;
	uint16_t x503 = 4U;
	int16_t x504 = -1;
	int32_t t125 = 1960;

    t125 = ((x501^(x502^x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 275000156552LLU;

    t126 = ((x505^(x506^x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 472U;
	volatile int64_t x510 = 45LL;
	int16_t x511 = -7;
	int16_t x512 = -1;
	volatile int32_t t127 = -72799328;

    t127 = ((x509^(x510^x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = INT64_MAX;
	uint8_t x514 = 1U;
	uint64_t x515 = UINT64_MAX;
	static volatile int32_t t128 = 424150;

    t128 = ((x513^(x514^x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x517 = 13043U;
	int32_t x518 = INT32_MIN;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t129 = -818520;

    t129 = ((x517^(x518^x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x522 = -1LL;
	int16_t x523 = -1;
	volatile uint64_t x524 = 1775767188LLU;
	volatile int32_t t130 = 7710;

    t130 = ((x521^(x522^x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MAX;
	volatile int64_t x526 = 63516972LL;
	static volatile int64_t x527 = INT64_MIN;
	static int32_t t131 = -1535537;

    t131 = ((x525^(x526^x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = 13380623447348LL;
	uint8_t x530 = UINT8_MAX;
	uint64_t x531 = 88645827012107170LLU;
	uint32_t x532 = UINT32_MAX;
	volatile int32_t t132 = -1;

    t132 = ((x529^(x530^x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x533 = UINT32_MAX;
	int8_t x534 = -1;
	int32_t x535 = INT32_MIN;
	static volatile int32_t t133 = 0;

    t133 = ((x533^(x534^x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MAX;
	int32_t x538 = INT32_MAX;
	int8_t x539 = -3;
	int64_t x540 = -1LL;
	int32_t t134 = -642;

    t134 = ((x537^(x538^x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = INT8_MIN;
	int64_t x544 = -1LL;
	volatile int32_t t135 = -49228008;

    t135 = ((x541^(x542^x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	static int32_t x547 = 1485;
	int32_t x548 = -23928;
	volatile int32_t t136 = 25804;

    t136 = ((x545^(x546^x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x550 = -1;
	uint8_t x551 = 0U;
	volatile int32_t t137 = -87306340;

    t137 = ((x549^(x550^x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = 0;
	volatile int64_t x554 = 3502025233068LL;
	static uint64_t x555 = UINT64_MAX;
	uint16_t x556 = 81U;
	int32_t t138 = 3021;

    t138 = ((x553^(x554^x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MAX;
	int32_t x558 = -1;
	uint32_t x559 = UINT32_MAX;
	uint8_t x560 = 5U;
	int32_t t139 = -58497497;

    t139 = ((x557^(x558^x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = INT16_MIN;
	uint16_t x562 = 1U;
	volatile uint32_t x563 = 50251U;
	volatile int64_t x564 = INT64_MAX;
	int32_t t140 = 171616;

    t140 = ((x561^(x562^x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x565 = -1;
	int16_t x566 = INT16_MIN;
	static int64_t x567 = 1322583876181921LL;
	int64_t x568 = -1LL;
	int32_t t141 = -12;

    t141 = ((x565^(x566^x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 687379U;
	int64_t x570 = INT64_MIN;
	int16_t x571 = -1;
	static int64_t x572 = 285508376927904LL;
	static volatile int32_t t142 = -20821;

    t142 = ((x569^(x570^x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = 572672LL;
	volatile int8_t x574 = INT8_MIN;
	uint8_t x575 = 37U;
	volatile int32_t t143 = -27;

    t143 = ((x573^(x574^x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x577 = -236487412LL;
	volatile int16_t x578 = 1762;
	static uint8_t x579 = UINT8_MAX;
	volatile int8_t x580 = INT8_MIN;
	volatile int32_t t144 = 0;

    t144 = ((x577^(x578^x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 38U;
	volatile uint16_t x582 = 0U;
	volatile int32_t x583 = INT32_MIN;
	uint8_t x584 = 9U;
	static volatile int32_t t145 = -25764199;

    t145 = ((x581^(x582^x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = INT8_MAX;
	static uint64_t x587 = 143678375435556370LLU;
	volatile uint16_t x588 = 5U;

    t146 = ((x585^(x586^x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	int32_t x590 = INT32_MIN;
	volatile uint8_t x591 = 26U;
	static int8_t x592 = 2;

    t147 = ((x589^(x590^x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	int16_t x594 = INT16_MAX;
	int32_t x595 = INT32_MIN;
	static uint64_t x596 = 908789702132915LLU;
	volatile int32_t t148 = 109;

    t148 = ((x593^(x594^x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint16_t x597 = UINT16_MAX;
	uint32_t x598 = UINT32_MAX;
	int32_t x599 = INT32_MIN;
	int16_t x600 = INT16_MAX;
	static volatile int32_t t149 = 221;

    t149 = ((x597^(x598^x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = INT64_MAX;
	volatile int8_t x602 = -1;
	uint16_t x603 = 1U;
	int32_t x604 = INT32_MIN;

    t150 = ((x601^(x602^x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	uint16_t x606 = 0U;
	uint8_t x608 = UINT8_MAX;
	int32_t t151 = -1;

    t151 = ((x605^(x606^x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	int64_t x610 = INT64_MIN;
	volatile int8_t x611 = INT8_MAX;
	volatile int64_t x612 = -1LL;
	static int32_t t152 = 15;

    t152 = ((x609^(x610^x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	uint16_t x615 = 6282U;
	volatile int32_t t153 = -6;

    t153 = ((x613^(x614^x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MAX;
	static int8_t x618 = INT8_MAX;
	static volatile int64_t x619 = INT64_MIN;
	volatile int8_t x620 = INT8_MIN;
	volatile int32_t t154 = 995;

    t154 = ((x617^(x618^x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x623 = INT8_MIN;
	uint16_t x624 = 75U;
	int32_t t155 = 220;

    t155 = ((x621^(x622^x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 10098145U;
	int64_t x627 = -16161LL;
	int64_t x628 = INT64_MIN;
	int32_t t156 = -499484;

    t156 = ((x625^(x626^x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x629 = UINT32_MAX;
	int8_t x631 = INT8_MAX;
	int32_t x632 = INT32_MAX;

    t157 = ((x629^(x630^x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	int64_t x636 = 5393LL;
	volatile int32_t t158 = 1339022;

    t158 = ((x633^(x634^x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 108U;
	int8_t x638 = INT8_MIN;
	volatile int32_t x639 = 3;
	int8_t x640 = -5;
	static volatile int32_t t159 = 14;

    t159 = ((x637^(x638^x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = UINT16_MAX;
	static int16_t x643 = -7862;
	uint64_t x644 = 45970346LLU;

    t160 = ((x641^(x642^x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = INT32_MIN;
	static int8_t x646 = INT8_MIN;
	volatile int8_t x647 = INT8_MIN;
	int32_t x648 = -77228331;
	static int32_t t161 = -2852758;

    t161 = ((x645^(x646^x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	int64_t x650 = INT64_MAX;
	int8_t x652 = -31;
	static volatile int32_t t162 = -6;

    t162 = ((x649^(x650^x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	int8_t x654 = INT8_MAX;
	volatile uint64_t x655 = 3293LLU;
	static uint8_t x656 = UINT8_MAX;

    t163 = ((x653^(x654^x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x657 = INT16_MIN;
	volatile uint16_t x658 = 1992U;
	int16_t x659 = INT16_MIN;
	static volatile int32_t t164 = -12248;

    t164 = ((x657^(x658^x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	uint32_t x662 = UINT32_MAX;

    t165 = ((x661^(x662^x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x666 = INT32_MIN;
	static volatile uint32_t x667 = 10601U;
	volatile uint16_t x668 = 9283U;
	volatile int32_t t166 = 0;

    t166 = ((x665^(x666^x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 639461U;
	static int32_t x671 = INT32_MIN;
	volatile uint16_t x672 = 488U;
	int32_t t167 = -111373;

    t167 = ((x669^(x670^x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MIN;
	int16_t x675 = INT16_MIN;

    t168 = ((x673^(x674^x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -1;
	static uint8_t x678 = UINT8_MAX;
	int16_t x679 = INT16_MIN;
	int8_t x680 = INT8_MAX;

    t169 = ((x677^(x678^x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = -1;
	static int64_t x682 = 0LL;
	static int8_t x683 = -1;
	volatile uint16_t x684 = UINT16_MAX;
	int32_t t170 = -19322790;

    t170 = ((x681^(x682^x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = UINT64_MAX;
	int64_t x687 = -1LL;
	volatile int32_t t171 = -405773;

    t171 = ((x685^(x686^x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MAX;
	uint16_t x690 = 1710U;
	volatile int32_t x691 = -1;
	int8_t x692 = -5;
	volatile int32_t t172 = -1989;

    t172 = ((x689^(x690^x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = 21LL;
	volatile int16_t x694 = -1;
	uint32_t x695 = UINT32_MAX;
	uint32_t x696 = 560790U;
	int32_t t173 = -133;

    t173 = ((x693^(x694^x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	volatile uint8_t x699 = UINT8_MAX;
	volatile uint8_t x700 = 45U;

    t174 = ((x697^(x698^x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -12;
	volatile uint8_t x702 = UINT8_MAX;
	static int32_t x703 = INT32_MAX;
	static int64_t x704 = 1471968771288504061LL;
	int32_t t175 = -197;

    t175 = ((x701^(x702^x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x707 = UINT64_MAX;
	volatile int32_t t176 = 2;

    t176 = ((x705^(x706^x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = UINT64_MAX;
	int8_t x711 = -1;
	int16_t x712 = -1;

    t177 = ((x709^(x710^x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = UINT8_MAX;
	uint16_t x714 = 0U;
	volatile uint8_t x715 = 1U;
	volatile int32_t t178 = 914292643;

    t178 = ((x713^(x714^x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x717 = INT32_MIN;
	uint16_t x718 = 0U;
	int64_t x719 = INT64_MAX;
	int64_t x720 = 11744758LL;
	int32_t t179 = -108551;

    t179 = ((x717^(x718^x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -1LL;
	int8_t x722 = INT8_MIN;
	volatile int8_t x724 = INT8_MIN;
	volatile int32_t t180 = -3631904;

    t180 = ((x721^(x722^x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MAX;
	int16_t x726 = -125;
	uint64_t x727 = 353749198616LLU;
	volatile uint8_t x728 = 15U;

    t181 = ((x725^(x726^x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -676420650756190LL;
	int64_t x730 = INT64_MIN;
	int32_t t182 = 0;

    t182 = ((x729^(x730^x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -1;
	int64_t x734 = INT64_MIN;
	int16_t x735 = -2;
	static int16_t x736 = -1;
	volatile int32_t t183 = 598;

    t183 = ((x733^(x734^x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -1285;
	static volatile int32_t x738 = INT32_MAX;
	int16_t x739 = INT16_MIN;
	volatile int64_t x740 = INT64_MIN;
	int32_t t184 = 271692497;

    t184 = ((x737^(x738^x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 4U;
	static int8_t x742 = -1;
	static int8_t x743 = INT8_MAX;
	int32_t t185 = 1;

    t185 = ((x741^(x742^x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 2U;
	static int32_t x747 = INT32_MIN;
	int16_t x748 = INT16_MIN;
	volatile int32_t t186 = -1;

    t186 = ((x745^(x746^x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1106;
	int32_t x751 = INT32_MIN;
	int32_t x752 = INT32_MIN;
	int32_t t187 = -232652;

    t187 = ((x749^(x750^x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x753 = UINT64_MAX;
	int64_t x754 = INT64_MAX;
	volatile int32_t x756 = -1;
	int32_t t188 = 5447;

    t188 = ((x753^(x754^x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -2293410;
	volatile int64_t x758 = 3521895LL;
	volatile int16_t x760 = -1;
	volatile int32_t t189 = -21;

    t189 = ((x757^(x758^x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	int16_t x762 = -26;
	int16_t x763 = 203;
	int8_t x764 = 0;
	static int32_t t190 = 643559409;

    t190 = ((x761^(x762^x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MAX;
	uint16_t x766 = UINT16_MAX;
	int16_t x768 = INT16_MIN;
	int32_t t191 = -3099;

    t191 = ((x765^(x766^x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x771 = UINT32_MAX;
	static int32_t x772 = -1013451;
	int32_t t192 = 7;

    t192 = ((x769^(x770^x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x774 = -562;
	volatile int16_t x775 = INT16_MAX;
	static int16_t x776 = INT16_MIN;
	volatile int32_t t193 = -97;

    t193 = ((x773^(x774^x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x778 = INT16_MAX;
	uint8_t x779 = 3U;
	int16_t x780 = 1096;

    t194 = ((x777^(x778^x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 29U;
	volatile int32_t x783 = -1;
	static volatile int8_t x784 = INT8_MAX;
	int32_t t195 = 389;

    t195 = ((x781^(x782^x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MIN;
	uint16_t x787 = 145U;
	uint8_t x788 = 7U;
	volatile int32_t t196 = -984545930;

    t196 = ((x785^(x786^x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 4U;
	static uint32_t x790 = 117712U;
	uint32_t x791 = 15U;
	uint32_t x792 = 12U;
	int32_t t197 = -1710963;

    t197 = ((x789^(x790^x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	int64_t x794 = INT64_MIN;
	int64_t x795 = INT64_MIN;
	int32_t x796 = INT32_MAX;
	volatile int32_t t198 = 72;

    t198 = ((x793^(x794^x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	static int16_t x798 = INT16_MAX;
	volatile int16_t x800 = -1;

    t199 = ((x797^(x798^x799))==x800);

    if (t199 != 0) { NG(); } else { ; }
	
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

